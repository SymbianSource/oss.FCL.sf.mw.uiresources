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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00038968 };

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
0x8758,	// (0x000410c0) Screen

0x876c,	// (0x000410d4) application_window_ParamLimits

0x876c,	// (0x000410d4) application_window

0x8786,	// (0x000410ee) screen_g1

0x87b8,	// (0x00041120) area_bottom_pane_ParamLimits

0x87b8,	// (0x00041120) area_bottom_pane

0x5b50,	// (0x0003e4b8) area_top_pane_ParamLimits

0x5b50,	// (0x0003e4b8) area_top_pane

0x5bee,	// (0x0003e556) main_pane_ParamLimits

0x5bee,	// (0x0003e556) main_pane

0x8876,	// (0x000411de) misc_graphics

0x9b41,	// (0x000424a9) battery_pane_ParamLimits

0x9b41,	// (0x000424a9) battery_pane

0xd9a7,	// (0x0004630f) bg_status_flat_pane_g8

0xd9af,	// (0x00046317) bg_status_flat_pane_g9

0xd101,	// (0x00045a69) context_pane_ParamLimits

0xd101,	// (0x00045a69) context_pane

0x9cac,	// (0x00042614) navi_pane_ParamLimits

0x9cac,	// (0x00042614) navi_pane

0x9d23,	// (0x0004268b) signal_pane_ParamLimits

0x9d23,	// (0x0004268b) signal_pane

0x0008,

0xf8b2,	// (0x0004821a) bg_status_flat_pane_g

0x9db3,	// (0x0004271b) status_pane_g1_ParamLimits

0x9db3,	// (0x0004271b) status_pane_g1

0x9dc9,	// (0x00042731) status_pane_g2_ParamLimits

0x9dc9,	// (0x00042731) status_pane_g2

0xd166,	// (0x00045ace) status_pane_g3_ParamLimits

0xd166,	// (0x00045ace) status_pane_g3

0x0004,

0xf7e5,	// (0x0004814d) status_pane_g_ParamLimits

0xf7e5,	// (0x0004814d) status_pane_g

0x9dd5,	// (0x0004273d) title_pane_ParamLimits

0x9dd5,	// (0x0004273d) title_pane

0x9e36,	// (0x0004279e) uni_indicator_pane_ParamLimits

0x9e36,	// (0x0004279e) uni_indicator_pane

0xcf28,	// (0x00045890) bg_list_pane_ParamLimits

0xcf28,	// (0x00045890) bg_list_pane

0x4998,	// (0x0003d300) find_pane

0x942f,	// (0x00041d97) listscroll_app_pane_ParamLimits

0x942f,	// (0x00041d97) listscroll_app_pane

0xcf48,	// (0x000458b0) listscroll_form_pane

0x49a0,	// (0x0003d308) listscroll_gen_pane_ParamLimits

0x49a0,	// (0x0003d308) listscroll_gen_pane

0xcf48,	// (0x000458b0) listscroll_set_pane

0xcf62,	// (0x000458ca) main_idle_act_pane

0xcd16,	// (0x0004567e) main_idle_trad_pane

0xcd16,	// (0x0004567e) main_list_empty_pane

0xc42b,	// (0x00044d93) main_midp_pane

0xcf74,	// (0x000458dc) main_pane_g1_ParamLimits

0xcf74,	// (0x000458dc) main_pane_g1

0x943b,	// (0x00041da3) popup_ai_message_window_ParamLimits

0x943b,	// (0x00041da3) popup_ai_message_window

0x94cc,	// (0x00041e34) popup_fep_china_uni_window_ParamLimits

0x94cc,	// (0x00041e34) popup_fep_china_uni_window

0xcfa6,	// (0x0004590e) popup_fep_japan_candidate_window_ParamLimits

0xcfa6,	// (0x0004590e) popup_fep_japan_candidate_window

0xcfc4,	// (0x0004592c) popup_fep_japan_predictive_window_ParamLimits

0xcfc4,	// (0x0004592c) popup_fep_japan_predictive_window

0x9526,	// (0x00041e8e) popup_find_window

0x9543,	// (0x00041eab) popup_grid_graphic_window_ParamLimits

0x9543,	// (0x00041eab) popup_grid_graphic_window

0xcff4,	// (0x0004595c) popup_large_graphic_colour_window

0x95d5,	// (0x00041f3d) popup_menu_window_ParamLimits

0x95d5,	// (0x00041f3d) popup_menu_window

0x97a1,	// (0x00042109) popup_note_image_window

0x9767,	// (0x000420cf) popup_note_wait_window_ParamLimits

0x9767,	// (0x000420cf) popup_note_wait_window

0x97b9,	// (0x00042121) popup_note_window_ParamLimits

0x97b9,	// (0x00042121) popup_note_window

0x985f,	// (0x000421c7) popup_query_code_window_ParamLimits

0x985f,	// (0x000421c7) popup_query_code_window

0xd01a,	// (0x00045982) popup_query_data_code_window_ParamLimits

0xd01a,	// (0x00045982) popup_query_data_code_window

0x9899,	// (0x00042201) popup_query_data_window_ParamLimits

0x9899,	// (0x00042201) popup_query_data_window

0x990f,	// (0x00042277) popup_query_sat_info_window_ParamLimits

0x990f,	// (0x00042277) popup_query_sat_info_window

0x99a6,	// (0x0004230e) popup_snote_single_graphic_window_ParamLimits

0x99a6,	// (0x0004230e) popup_snote_single_graphic_window

0x99a6,	// (0x0004230e) popup_snote_single_text_window_ParamLimits

0x99a6,	// (0x0004230e) popup_snote_single_text_window

0xd031,	// (0x00045999) popup_sub_window_general

0xd077,	// (0x000459df) popup_window_general_ParamLimits

0xd077,	// (0x000459df) popup_window_general

0xd08c,	// (0x000459f4) power_save_pane

0x92be,	// (0x00041c26) control_pane_g1_ParamLimits

0x92be,	// (0x00041c26) control_pane_g1

0x635e,	// (0x0003ecc6) control_pane_g2_ParamLimits

0x635e,	// (0x0003ecc6) control_pane_g2

0xcf0a,	// (0x00045872) control_pane_g3_ParamLimits

0xcf0a,	// (0x00045872) control_pane_g3

0x0007,

0xf7cd,	// (0x00048135) control_pane_g_ParamLimits

0xf7cd,	// (0x00048135) control_pane_g

0x9326,	// (0x00041c8e) control_pane_t1_ParamLimits

0x9326,	// (0x00041c8e) control_pane_t1

0x9384,	// (0x00041cec) control_pane_t2_ParamLimits

0x9384,	// (0x00041cec) control_pane_t2

0x0002,

0xf7de,	// (0x00048146) control_pane_t_ParamLimits

0xf7de,	// (0x00048146) control_pane_t

0xce2b,	// (0x00045793) navi_navi_volume_pane_cp1

0xce34,	// (0x0004579c) status_small_icon_pane

0xce3c,	// (0x000457a4) status_small_pane_g1_ParamLimits

0xce3c,	// (0x000457a4) status_small_pane_g1

0xce70,	// (0x000457d8) status_small_pane_g2_ParamLimits

0xce70,	// (0x000457d8) status_small_pane_g2

0xce7c,	// (0x000457e4) status_small_pane_g3_ParamLimits

0xce7c,	// (0x000457e4) status_small_pane_g3

0xce88,	// (0x000457f0) status_small_pane_g4_ParamLimits

0xce88,	// (0x000457f0) status_small_pane_g4

0xce94,	// (0x000457fc) status_small_pane_g5_ParamLimits

0xce94,	// (0x000457fc) status_small_pane_g5

0xcea3,	// (0x0004580b) status_small_pane_g6_ParamLimits

0xcea3,	// (0x0004580b) status_small_pane_g6

0x0007,

0xf7bc,	// (0x00048124) status_small_pane_g_ParamLimits

0xf7bc,	// (0x00048124) status_small_pane_g

0xced3,	// (0x0004583b) status_small_pane_t1

0xcef6,	// (0x0004585e) status_small_wait_pane_ParamLimits

0xcef6,	// (0x0004585e) status_small_wait_pane

0x915f,	// (0x00041ac7) aid_levels_signal_ParamLimits

0x915f,	// (0x00041ac7) aid_levels_signal

0x9177,	// (0x00041adf) signal_pane_g1_ParamLimits

0x9177,	// (0x00041adf) signal_pane_g1

0x9192,	// (0x00041afa) signal_pane_g2_ParamLimits

0x9192,	// (0x00041afa) signal_pane_g2

0x0001,

0xf751,	// (0x000480b9) signal_pane_g_ParamLimits

0xf751,	// (0x000480b9) signal_pane_g

0xc85a,	// (0x000451c2) context_pane_g1

0x893b,	// (0x000412a3) title_pane_g1

0x897c,	// (0x000412e4) title_pane_t1

0x8a08,	// (0x00041370) title_pane_t2

0x8a2e,	// (0x00041396) title_pane_t3

0x0002,

0xf59b,	// (0x00047f03) title_pane_t

0x9e5e,	// (0x000427c6) aid_levels_battery_ParamLimits

0x9e5e,	// (0x000427c6) aid_levels_battery

0x9e7a,	// (0x000427e2) battery_pane_g1_ParamLimits

0x9e7a,	// (0x000427e2) battery_pane_g1

0x9e97,	// (0x000427ff) battery_pane_g2_ParamLimits

0x9e97,	// (0x000427ff) battery_pane_g2

0x0001,

0xf7f0,	// (0x00048158) battery_pane_g_ParamLimits

0xf7f0,	// (0x00048158) battery_pane_g

0xa29b,	// (0x00042c03) uni_indicator_pane_g1

0xa2b0,	// (0x00042c18) uni_indicator_pane_g2

0xa2c5,	// (0x00042c2d) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x000482c2) uni_indicator_pane_g

0xcb86,	// (0x000454ee) navi_icon_pane_ParamLimits

0xcb86,	// (0x000454ee) navi_icon_pane

0xcacd,	// (0x00045435) navi_midp_pane

0xcba2,	// (0x0004550a) navi_navi_pane

0xcbac,	// (0x00045514) navi_text_pane_ParamLimits

0xcbac,	// (0x00045514) navi_text_pane

0x8786,	// (0x000410ee) status_small_wait_pane_g1

0x8ee4,	// (0x0004184c) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x000482bd) status_small_wait_pane_g

0xa23a,	// (0x00042ba2) navi_navi_icon_text_pane

0xa242,	// (0x00042baa) navi_navi_pane_g1_ParamLimits

0xa242,	// (0x00042baa) navi_navi_pane_g1

0xa254,	// (0x00042bbc) navi_navi_pane_g2_ParamLimits

0xa254,	// (0x00042bbc) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0004828b) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0004828b) navi_navi_pane_g

0xdf2a,	// (0x00046892) navi_navi_tabs_pane

0xa266,	// (0x00042bce) navi_navi_text_pane

0xa23a,	// (0x00042ba2) navi_navi_volume_pane

0xa228,	// (0x00042b90) navi_text_pane_t1

0xa21c,	// (0x00042b84) navi_icon_pane_g1

0xde6b,	// (0x000467d3) navi_navi_text_pane_t1

0xa20b,	// (0x00042b73) navi_navi_volume_pane_g1

0xa213,	// (0x00042b7b) volume_small_pane

0xa167,	// (0x00042acf) navi_navi_icon_text_pane_g1

0xa16f,	// (0x00042ad7) navi_navi_icon_text_pane_t1

0xcba2,	// (0x0004550a) navi_tabs_2_long_pane

0xcba2,	// (0x0004550a) navi_tabs_2_pane

0xcba2,	// (0x0004550a) navi_tabs_3_long_pane

0xcba2,	// (0x0004550a) navi_tabs_3_pane

0xcba2,	// (0x0004550a) navi_tabs_4_pane

0xa147,	// (0x00042aaf) tabs_2_active_pane_ParamLimits

0xa147,	// (0x00042aaf) tabs_2_active_pane

0xa157,	// (0x00042abf) tabs_2_passive_pane_ParamLimits

0xa157,	// (0x00042abf) tabs_2_passive_pane

0xa115,	// (0x00042a7d) tabs_3_active_pane_ParamLimits

0xa115,	// (0x00042a7d) tabs_3_active_pane

0xa125,	// (0x00042a8d) tabs_3_passive_pane_ParamLimits

0xa125,	// (0x00042a8d) tabs_3_passive_pane

0xa136,	// (0x00042a9e) tabs_3_passive_pane_cp_ParamLimits

0xa136,	// (0x00042a9e) tabs_3_passive_pane_cp

0xa0d1,	// (0x00042a39) tabs_4_active_pane_ParamLimits

0xa0d1,	// (0x00042a39) tabs_4_active_pane

0xa0e2,	// (0x00042a4a) tabs_4_passive_pane_ParamLimits

0xa0e2,	// (0x00042a4a) tabs_4_passive_pane

0xa0f3,	// (0x00042a5b) tabs_4_passive_pane_cp_ParamLimits

0xa0f3,	// (0x00042a5b) tabs_4_passive_pane_cp

0xa104,	// (0x00042a6c) tabs_4_passive_pane_cp2_ParamLimits

0xa104,	// (0x00042a6c) tabs_4_passive_pane_cp2

0xa0b1,	// (0x00042a19) tabs_2_long_active_pane_ParamLimits

0xa0b1,	// (0x00042a19) tabs_2_long_active_pane

0xa0c1,	// (0x00042a29) tabs_2_long_passive_pane_ParamLimits

0xa0c1,	// (0x00042a29) tabs_2_long_passive_pane

0xa07c,	// (0x000429e4) tabs_3_long_active_pane_ParamLimits

0xa07c,	// (0x000429e4) tabs_3_long_active_pane

0xa08d,	// (0x000429f5) tabs_3_long_passive_pane_ParamLimits

0xa08d,	// (0x000429f5) tabs_3_long_passive_pane

0xa0a0,	// (0x00042a08) tabs_3_long_passive_pane_cp_ParamLimits

0xa0a0,	// (0x00042a08) tabs_3_long_passive_pane_cp

0x65ca,	// (0x0003ef32) volume_small_pane_g1

0xa02b,	// (0x00042993) volume_small_pane_g2

0xa034,	// (0x0004299c) volume_small_pane_g3

0xa03d,	// (0x000429a5) volume_small_pane_g4

0xa046,	// (0x000429ae) volume_small_pane_g5

0xa04f,	// (0x000429b7) volume_small_pane_g6

0xa058,	// (0x000429c0) volume_small_pane_g7

0xa061,	// (0x000429c9) volume_small_pane_g8

0xa06a,	// (0x000429d2) volume_small_pane_g9

0xa073,	// (0x000429db) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x00048257) volume_small_pane_g

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp2_ParamLimits

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp2

0x8a4e,	// (0x000413b6) tabs_3_active_pane_g1

0x8a56,	// (0x000413be) tabs_3_active_pane_t1

0x8a40,	// (0x000413a8) bg_passive_tab_pane_cp2_ParamLimits

0x8a40,	// (0x000413a8) bg_passive_tab_pane_cp2

0x8a4e,	// (0x000413b6) tabs_3_passive_pane_g1

0x8a56,	// (0x000413be) tabs_3_passive_pane_t1

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp3_ParamLimits

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp3

0x8a68,	// (0x000413d0) tabs_4_active_pane_g1

0x8a70,	// (0x000413d8) tabs_4_active_pane_t1

0x8a40,	// (0x000413a8) bg_passive_tab_pane_cp3_ParamLimits

0x8a40,	// (0x000413a8) bg_passive_tab_pane_cp3

0x8a68,	// (0x000413d0) tabs_4_1_passive_pane_g1

0x8a70,	// (0x000413d8) tabs_4_1_passive_pane_t1

0xc42b,	// (0x00044d93) list_highlight_pane_cp2

0xa352,	// (0x00042cba) list_set_pane_ParamLimits

0xa352,	// (0x00042cba) list_set_pane

0xa3ec,	// (0x00042d54) main_pane_set_t1_ParamLimits

0xa3ec,	// (0x00042d54) main_pane_set_t1

0xa40c,	// (0x00042d74) main_pane_set_t2_ParamLimits

0xa40c,	// (0x00042d74) main_pane_set_t2

0xa420,	// (0x00042d88) main_pane_set_t3_ParamLimits

0xa420,	// (0x00042d88) main_pane_set_t3

0xa432,	// (0x00042d9a) main_pane_set_t4_ParamLimits

0xa432,	// (0x00042d9a) main_pane_set_t4

0x0003,

0xf9bf,	// (0x00048327) main_pane_set_t_ParamLimits

0xf9bf,	// (0x00048327) main_pane_set_t

0xa444,	// (0x00042dac) setting_code_pane

0xa44c,	// (0x00042db4) setting_slider_graphic_pane

0xa44c,	// (0x00042db4) setting_slider_pane

0xa44c,	// (0x00042db4) setting_text_pane

0xa44c,	// (0x00042db4) setting_volume_pane

0x5e1f,	// (0x0003e787) volume_set_pane

0x8a82,	// (0x000413ea) bg_set_opt_pane_cp

0x5e27,	// (0x0003e78f) setting_slider_pane_t1

0x5e40,	// (0x0003e7a8) setting_slider_pane_t2

0x5e59,	// (0x0003e7c1) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00047f0a) setting_slider_pane_t

0x5e70,	// (0x0003e7d8) slider_set_pane

0x8876,	// (0x000411de) bg_set_opt_pane_cp2

0x8a90,	// (0x000413f8) setting_slider_graphic_pane_g1

0x5e86,	// (0x0003e7ee) setting_slider_graphic_pane_t1

0x5e95,	// (0x0003e7fd) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00047f11) setting_slider_graphic_pane_t

0x5ea4,	// (0x0003e80c) slider_set_pane_cp

0x8876,	// (0x000411de) input_focus_pane_cp1

0xe373,	// (0x00046cdb) list_set_text_pane

0x8786,	// (0x000410ee) setting_text_pane_g1

0x8876,	// (0x000411de) input_focus_pane_cp2

0x8786,	// (0x000410ee) setting_code_pane_g1

0x8a99,	// (0x00041401) setting_code_pane_t1

0xbf69,	// (0x000448d1) set_text_pane_t1_ParamLimits

0xbf69,	// (0x000448d1) set_text_pane_t1

0xc33b,	// (0x00044ca3) set_opt_bg_pane_g1

0xc343,	// (0x00044cab) set_opt_bg_pane_g2

0xe353,	// (0x00046cbb) set_opt_bg_pane_g3

0xc353,	// (0x00044cbb) set_opt_bg_pane_g4

0xc35b,	// (0x00044cc3) set_opt_bg_pane_g5

0xc363,	// (0x00044ccb) set_opt_bg_pane_g6

0xe35b,	// (0x00046cc3) set_opt_bg_pane_g7

0xe363,	// (0x00046ccb) set_opt_bg_pane_g8

0xe36b,	// (0x00046cd3) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x00048314) set_opt_bg_pane_g

0xe346,	// (0x00046cae) slider_set_pane_g1

0x6798,	// (0x0003f100) slider_set_pane_g2

0x0006,

0xf99d,	// (0x00048305) slider_set_pane_g

0x6734,	// (0x0003f09c) volume_set_pane_g1

0x673c,	// (0x0003f0a4) volume_set_pane_g2

0x6744,	// (0x0003f0ac) volume_set_pane_g3

0x674c,	// (0x0003f0b4) volume_set_pane_g4

0x6754,	// (0x0003f0bc) volume_set_pane_g5

0x675c,	// (0x0003f0c4) volume_set_pane_g6

0x6764,	// (0x0003f0cc) volume_set_pane_g7

0x676c,	// (0x0003f0d4) volume_set_pane_g8

0x6774,	// (0x0003f0dc) volume_set_pane_g9

0x677c,	// (0x0003f0e4) volume_set_pane_g10

0x0009,

0xf975,	// (0x000482dd) volume_set_pane_g

0x8aa7,	// (0x0004140f) indicator_pane_ParamLimits

0x8aa7,	// (0x0004140f) indicator_pane

0x8acf,	// (0x00041437) main_idle_pane_g2_ParamLimits

0x8acf,	// (0x00041437) main_idle_pane_g2

0x8b07,	// (0x0004146f) main_pane_idle_g1_ParamLimits

0x8b07,	// (0x0004146f) main_pane_idle_g1

0x8b2e,	// (0x00041496) popup_clock_digital_analogue_window_ParamLimits

0x8b2e,	// (0x00041496) popup_clock_digital_analogue_window

0x8b45,	// (0x000414ad) soft_indicator_pane_ParamLimits

0x8b45,	// (0x000414ad) soft_indicator_pane

0x8b5f,	// (0x000414c7) wallpaper_pane_ParamLimits

0x8b5f,	// (0x000414c7) wallpaper_pane

0x8786,	// (0x000410ee) wallpaper_pane_g1

0x8b79,	// (0x000414e1) indicator_pane_g1_ParamLimits

0x8b79,	// (0x000414e1) indicator_pane_g1

0xe4ba,	// (0x00046e22) navi_navi_icon_text_pane_srt_g1

0x8ba1,	// (0x00041509) soft_indicator_pane_t1

0x8bbb,	// (0x00041523) aid_ps_area_pane

0x8bcc,	// (0x00041534) aid_ps_clock_pane

0x8bda,	// (0x00041542) aid_ps_indicator_pane

0x8be6,	// (0x0004154e) indicator_ps_pane_ParamLimits

0x8be6,	// (0x0004154e) indicator_ps_pane

0x8bf5,	// (0x0004155d) power_save_pane_g1_ParamLimits

0x8bf5,	// (0x0004155d) power_save_pane_g1

0x8c01,	// (0x00041569) power_save_pane_g2_ParamLimits

0x8c01,	// (0x00041569) power_save_pane_g2

0x5a44,	// (0x0003e3ac) aid_navinavi_width_pane

0x8bbb,	// (0x00041523) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00047f16) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00047f16) power_save_pane_g

0x8c0f,	// (0x00041577) power_save_pane_t1_ParamLimits

0x8c0f,	// (0x00041577) power_save_pane_t1

0x8bcc,	// (0x00041534) aid_ps_clock_pane_ParamLimits

0x8bda,	// (0x00041542) aid_ps_indicator_pane_ParamLimits

0x8c21,	// (0x00041589) power_save_pane_t4_ParamLimits

0x8c21,	// (0x00041589) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00047f1b) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00047f1b) power_save_pane_t

0x8c4b,	// (0x000415b3) power_save_t3_ParamLimits

0x8c4b,	// (0x000415b3) power_save_t3

0x8c36,	// (0x0004159e) power_save_t2_ParamLimits

0x8c36,	// (0x0004159e) power_save_t2

0x8c60,	// (0x000415c8) indicator_ps_pane_g1

0x8c69,	// (0x000415d1) ai_gene_pane_ParamLimits

0x8c69,	// (0x000415d1) ai_gene_pane

0x8c80,	// (0x000415e8) ai_links_pane_ParamLimits

0x8c80,	// (0x000415e8) ai_links_pane

0x8c98,	// (0x00041600) indicator_pane_cp1_ParamLimits

0x8c98,	// (0x00041600) indicator_pane_cp1

0x8ca7,	// (0x0004160f) main_pane_idle_g1_cp_ParamLimits

0x8ca7,	// (0x0004160f) main_pane_idle_g1_cp

0x8cbf,	// (0x00041627) popup_ai_links_title_window

0x8cc8,	// (0x00041630) soft_indicator_pane_cp1_ParamLimits

0x8cc8,	// (0x00041630) soft_indicator_pane_cp1

0xe19a,	// (0x00046b02) ai_links_pane_g1

0xe1a3,	// (0x00046b0b) grid_ai_links_pane

0xa292,	// (0x00042bfa) ai_gene_pane_1

0xe188,	// (0x00046af0) ai_gene_pane_2

0xe191,	// (0x00046af9) list_highlight_pane_cp4

0xa26e,	// (0x00042bd6) cell_ai_link_pane_ParamLimits

0xa26e,	// (0x00042bd6) cell_ai_link_pane

0xe180,	// (0x00046ae8) cell_ai_link_pane_g1

0x8ee4,	// (0x0004184c) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x000482b8) cell_ai_link_pane_g

0x8876,	// (0x000411de) grid_highlight_cp2

0x8876,	// (0x000411de) bg_popup_sub_pane_cp1

0x8cea,	// (0x00041652) popup_ai_links_title_window_t1

0xe0ce,	// (0x00046a36) ai_gene_pane_1_g1_ParamLimits

0xe0ce,	// (0x00046a36) ai_gene_pane_1_g1

0xe0da,	// (0x00046a42) ai_gene_pane_1_g2_ParamLimits

0xe0da,	// (0x00046a42) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x000482ae) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x000482ae) ai_gene_pane_1_g

0xe0e7,	// (0x00046a4f) ai_gene_pane_1_t1_ParamLimits

0xe0e7,	// (0x00046a4f) ai_gene_pane_1_t1

0xe11b,	// (0x00046a83) grid_ai_soft_ind_pane

0xe0b9,	// (0x00046a21) ai_gene_pane_2_t1_ParamLimits

0xe0b9,	// (0x00046a21) ai_gene_pane_2_t1

0x8cf9,	// (0x00041661) main_pane_empty_t1_ParamLimits

0x8cf9,	// (0x00041661) main_pane_empty_t1

0x8d11,	// (0x00041679) main_pane_empty_t2_ParamLimits

0x8d11,	// (0x00041679) main_pane_empty_t2

0x8d26,	// (0x0004168e) main_pane_empty_t3_ParamLimits

0x8d26,	// (0x0004168e) main_pane_empty_t3

0x8d38,	// (0x000416a0) main_pane_empty_t4_ParamLimits

0x8d38,	// (0x000416a0) main_pane_empty_t4

0x8d4a,	// (0x000416b2) main_pane_empty_t5_ParamLimits

0x8d4a,	// (0x000416b2) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00047f20) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00047f20) main_pane_empty_t

0xc38c,	// (0x00044cf4) bg_popup_window_pane_ParamLimits

0xc38c,	// (0x00044cf4) bg_popup_window_pane

0xde79,	// (0x000467e1) find_popup_pane_cp2_ParamLimits

0xde79,	// (0x000467e1) find_popup_pane_cp2

0xde85,	// (0x000467ed) heading_pane_ParamLimits

0xde85,	// (0x000467ed) heading_pane

0x8876,	// (0x000411de) bg_popup_sub_pane

0xa18c,	// (0x00042af4) bg_popup_window_pane_g1_ParamLimits

0xa18c,	// (0x00042af4) bg_popup_window_pane_g1

0xa19b,	// (0x00042b03) bg_popup_window_pane_g2_ParamLimits

0xa19b,	// (0x00042b03) bg_popup_window_pane_g2

0xa1a7,	// (0x00042b0f) bg_popup_window_pane_g3_ParamLimits

0xa1a7,	// (0x00042b0f) bg_popup_window_pane_g3

0xa1b3,	// (0x00042b1b) bg_popup_window_pane_g4_ParamLimits

0xa1b3,	// (0x00042b1b) bg_popup_window_pane_g4

0xa1c2,	// (0x00042b2a) bg_popup_window_pane_g5_ParamLimits

0xa1c2,	// (0x00042b2a) bg_popup_window_pane_g5

0xa1d2,	// (0x00042b3a) bg_popup_window_pane_g6_ParamLimits

0xa1d2,	// (0x00042b3a) bg_popup_window_pane_g6

0xa1de,	// (0x00042b46) bg_popup_window_pane_g7_ParamLimits

0xa1de,	// (0x00042b46) bg_popup_window_pane_g7

0xa1ed,	// (0x00042b55) bg_popup_window_pane_g8_ParamLimits

0xa1ed,	// (0x00042b55) bg_popup_window_pane_g8

0xa1fc,	// (0x00042b64) bg_popup_window_pane_g9_ParamLimits

0xa1fc,	// (0x00042b64) bg_popup_window_pane_g9

0xde5f,	// (0x000467c7) bg_popup_window_pane_g10_ParamLimits

0xde5f,	// (0x000467c7) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x00048276) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x00048276) bg_popup_window_pane_g

0xde16,	// (0x0004677e) bg_popup_heading_pane_ParamLimits

0xde16,	// (0x0004677e) bg_popup_heading_pane

0x6820,	// (0x0003f188) tabs_4_passive_pane_cp_srt_ParamLimits

0x6820,	// (0x0003f188) tabs_4_passive_pane_cp_srt

0x6832,	// (0x0003f19a) tabs_4_passive_pane_srt_ParamLimits

0xde2a,	// (0x00046792) heading_pane_g2

0x6832,	// (0x0003f19a) tabs_4_passive_pane_srt

0xd34a,	// (0x00045cb2) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd34a,	// (0x00045cb2) bg_passive_tab_pane_cp3_srt

0xde32,	// (0x0004679a) heading_pane_t1_ParamLimits

0xde32,	// (0x0004679a) heading_pane_t1

0xde49,	// (0x000467b1) heading_pane_t2_ParamLimits

0xde49,	// (0x000467b1) heading_pane_t2

0x0001,

0xf909,	// (0x00048271) heading_pane_t_ParamLimits

0xf909,	// (0x00048271) heading_pane_t

0xd96f,	// (0x000462d7) bg_popup_heading_pane_g1

0xda00,	// (0x00046368) bg_popup_heading_pane_g2

0xda0a,	// (0x00046372) bg_popup_heading_pane_g3

0xda14,	// (0x0004637c) bg_popup_heading_pane_g4

0xda1e,	// (0x00046386) bg_popup_heading_pane_g5

0xda28,	// (0x00046390) bg_popup_heading_pane_g6

0xda30,	// (0x00046398) bg_popup_heading_pane_g7

0xda38,	// (0x000463a0) bg_popup_heading_pane_g8

0xda42,	// (0x000463aa) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0004822d) bg_popup_heading_pane_g

0xd25a,	// (0x00045bc2) bg_popup_sub_pane_g1

0xd26a,	// (0x00045bd2) bg_popup_sub_pane_g2

0xd262,	// (0x00045bca) bg_popup_sub_pane_g3

0xd27a,	// (0x00045be2) bg_popup_sub_pane_g4

0xd272,	// (0x00045bda) bg_popup_sub_pane_g5

0xd282,	// (0x00045bea) bg_popup_sub_pane_g6

0xd28a,	// (0x00045bf2) bg_popup_sub_pane_g7

0xd29a,	// (0x00045c02) bg_popup_sub_pane_g8

0xd292,	// (0x00045bfa) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x00048207) bg_popup_sub_pane_g

0x8a40,	// (0x000413a8) bg_popup_window_pane_cp5_ParamLimits

0x8a40,	// (0x000413a8) bg_popup_window_pane_cp5

0x8d6a,	// (0x000416d2) popup_note_window_g1_ParamLimits

0x8d6a,	// (0x000416d2) popup_note_window_g1

0x8d76,	// (0x000416de) popup_note_window_t1_ParamLimits

0x8d76,	// (0x000416de) popup_note_window_t1

0x8d88,	// (0x000416f0) popup_note_window_t2_ParamLimits

0x8d88,	// (0x000416f0) popup_note_window_t2

0x8d9a,	// (0x00041702) popup_note_window_t3_ParamLimits

0x8d9a,	// (0x00041702) popup_note_window_t3

0x8dac,	// (0x00041714) popup_note_window_t4_ParamLimits

0x8dac,	// (0x00041714) popup_note_window_t4

0x8dd4,	// (0x0004173c) popup_note_window_t5_ParamLimits

0x8dd4,	// (0x0004173c) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00047f2b) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00047f2b) popup_note_window_t

0x8df8,	// (0x00041760) bg_popup_window_pane_cp6_ParamLimits

0x8df8,	// (0x00041760) bg_popup_window_pane_cp6

0xd8e3,	// (0x0004624b) popup_note_image_window_g1_ParamLimits

0xd8e3,	// (0x0004624b) popup_note_image_window_g1

0xd8ef,	// (0x00046257) popup_note_image_window_g2_ParamLimits

0xd8ef,	// (0x00046257) popup_note_image_window_g2

0x0001,

0xf893,	// (0x000481fb) popup_note_image_window_g_ParamLimits

0xf893,	// (0x000481fb) popup_note_image_window_g

0xd908,	// (0x00046270) popup_note_image_window_t1_ParamLimits

0xd908,	// (0x00046270) popup_note_image_window_t1

0xd921,	// (0x00046289) popup_note_image_window_t2_ParamLimits

0xd921,	// (0x00046289) popup_note_image_window_t2

0xd93a,	// (0x000462a2) popup_note_image_window_t3_ParamLimits

0xd93a,	// (0x000462a2) popup_note_image_window_t3

0x0002,

0xf898,	// (0x00048200) popup_note_image_window_t_ParamLimits

0xf898,	// (0x00048200) popup_note_image_window_t

0xd7c0,	// (0x00046128) bg_popup_window_pane_cp7_ParamLimits

0xd7c0,	// (0x00046128) bg_popup_window_pane_cp7

0xd7f0,	// (0x00046158) popup_note_wait_window_g1_ParamLimits

0xd7f0,	// (0x00046158) popup_note_wait_window_g1

0xd7fc,	// (0x00046164) popup_note_wait_window_g2_ParamLimits

0xd7fc,	// (0x00046164) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x000481e9) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x000481e9) popup_note_wait_window_g

0xd814,	// (0x0004617c) popup_note_wait_window_t1_ParamLimits

0xd814,	// (0x0004617c) popup_note_wait_window_t1

0xd83b,	// (0x000461a3) popup_note_wait_window_t2_ParamLimits

0xd83b,	// (0x000461a3) popup_note_wait_window_t2

0xd858,	// (0x000461c0) popup_note_wait_window_t3_ParamLimits

0xd858,	// (0x000461c0) popup_note_wait_window_t3

0xd86b,	// (0x000461d3) popup_note_wait_window_t4_ParamLimits

0xd86b,	// (0x000461d3) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x000481f0) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x000481f0) popup_note_wait_window_t

0xd890,	// (0x000461f8) wait_bar_pane_ParamLimits

0xd890,	// (0x000461f8) wait_bar_pane

0x8876,	// (0x000411de) wait_anim_pane

0x8876,	// (0x000411de) wait_border_pane

0x8786,	// (0x000410ee) wait_anim_pane_g1

0x8786,	// (0x000410ee) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x000480b4) wait_anim_pane_g

0xd764,	// (0x000460cc) wait_border_pane_g1

0xd76f,	// (0x000460d7) wait_border_pane_g2

0xd778,	// (0x000460e0) wait_border_pane_g3

0x0002,

0xf87a,	// (0x000481e2) wait_border_pane_g

0xd6c6,	// (0x0004602e) bg_popup_window_pane_cp16_ParamLimits

0xd6c6,	// (0x0004602e) bg_popup_window_pane_cp16

0xd6d4,	// (0x0004603c) indicator_popup_pane_cp4_ParamLimits

0xd6d4,	// (0x0004603c) indicator_popup_pane_cp4

0xd6e8,	// (0x00046050) popup_query_data_window_t1_ParamLimits

0xd6e8,	// (0x00046050) popup_query_data_window_t1

0xd6fa,	// (0x00046062) popup_query_data_window_t2_ParamLimits

0xd6fa,	// (0x00046062) popup_query_data_window_t2

0xd713,	// (0x0004607b) popup_query_data_window_t3_ParamLimits

0xd713,	// (0x0004607b) popup_query_data_window_t3

0x0002,

0xf873,	// (0x000481db) popup_query_data_window_t_ParamLimits

0xf873,	// (0x000481db) popup_query_data_window_t

0xd72d,	// (0x00046095) query_popup_data_pane_ParamLimits

0xd72d,	// (0x00046095) query_popup_data_pane

0xd741,	// (0x000460a9) query_popup_data_pane_cp1_ParamLimits

0xd741,	// (0x000460a9) query_popup_data_pane_cp1

0x8df8,	// (0x00041760) bg_popup_window_pane_cp10_ParamLimits

0x8df8,	// (0x00041760) bg_popup_window_pane_cp10

0xd629,	// (0x00045f91) indicator_popup_pane_ParamLimits

0xd629,	// (0x00045f91) indicator_popup_pane

0x8e4f,	// (0x000417b7) popup_query_code_window_t1_ParamLimits

0x8e4f,	// (0x000417b7) popup_query_code_window_t1

0xd641,	// (0x00045fa9) popup_query_code_window_t2_ParamLimits

0xd641,	// (0x00045fa9) popup_query_code_window_t2

0xd67f,	// (0x00045fe7) popup_query_code_window_t3_ParamLimits

0xd67f,	// (0x00045fe7) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x000481d4) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x000481d4) popup_query_code_window_t

0xd6ae,	// (0x00046016) query_popup_pane_ParamLimits

0xd6ae,	// (0x00046016) query_popup_pane

0x8df8,	// (0x00041760) bg_popup_window_pane_cp15_ParamLimits

0x8df8,	// (0x00041760) bg_popup_window_pane_cp15

0x8e16,	// (0x0004177e) indicator_popup_pane_cp1_ParamLimits

0x8e16,	// (0x0004177e) indicator_popup_pane_cp1

0x8e29,	// (0x00041791) indicator_popup_pane_cp2_ParamLimits

0x8e29,	// (0x00041791) indicator_popup_pane_cp2

0x8e3c,	// (0x000417a4) popup_query_data_code_window_g1_ParamLimits

0x8e3c,	// (0x000417a4) popup_query_data_code_window_g1

0x8e4f,	// (0x000417b7) popup_query_data_code_window_t1_ParamLimits

0x8e4f,	// (0x000417b7) popup_query_data_code_window_t1

0x8e61,	// (0x000417c9) popup_query_data_code_window_t2_ParamLimits

0x8e61,	// (0x000417c9) popup_query_data_code_window_t2

0x8e73,	// (0x000417db) popup_query_data_code_window_t3_ParamLimits

0x8e73,	// (0x000417db) popup_query_data_code_window_t3

0x8e89,	// (0x000417f1) popup_query_data_code_window_t4_ParamLimits

0x8e89,	// (0x000417f1) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00047f36) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00047f36) popup_query_data_code_window_t

0x64dd,	// (0x0003ee45) list_single_midp_graphic_pane_g3

0x8ea1,	// (0x00041809) query_popup_data_pane_cp2_ParamLimits

0x8eb4,	// (0x0004181c) query_popup_pane_cp2_ParamLimits

0x8eb4,	// (0x0004181c) query_popup_pane_cp2

0x8876,	// (0x000411de) bg_popup_window_pane_cp11

0xd5fd,	// (0x00045f65) heading_pane_cp5

0xbf9a,	// (0x00044902) listscroll_popup_info_pane

0x8876,	// (0x000411de) input_focus_pane_cp3

0x8ec7,	// (0x0004182f) query_popup_pane_t1

0x8ed5,	// (0x0004183d) list_popup_info_pane_ParamLimits

0x8ed5,	// (0x0004183d) list_popup_info_pane

0x8ee4,	// (0x0004184c) listscroll_popup_info_pane_g1

0x8eec,	// (0x00041854) scroll_pane_cp7

0x8ef6,	// (0x0004185e) popup_info_list_pane_t1_ParamLimits

0x8ef6,	// (0x0004185e) popup_info_list_pane_t1

0x8f10,	// (0x00041878) popup_info_list_pane_t2_ParamLimits

0x8f10,	// (0x00041878) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00047f3f) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00047f3f) popup_info_list_pane_t

0x8876,	// (0x000411de) bg_popup_window_pane_cp12

0xe4d4,	// (0x00046e3c) find_popup_pane

0x8a82,	// (0x000413ea) bg_popup_window_pane_cp3

0xbf82,	// (0x000448ea) heading_pane_cp3

0xbf8e,	// (0x000448f6) listscroll_popup_graphic_pane

0x8876,	// (0x000411de) bg_popup_window_pane_cp4

0x8f7a,	// (0x000418e2) heading_pane_cp4

0xbf9a,	// (0x00044902) listscroll_popup_colour_pane

0xbfa2,	// (0x0004490a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbfa2,	// (0x0004490a) cell_large_graphic_colour_none_popup_pane

0x8f82,	// (0x000418ea) grid_large_graphic_colour_popup_pane_ParamLimits

0x8f82,	// (0x000418ea) grid_large_graphic_colour_popup_pane

0xbfb6,	// (0x0004491e) listscroll_popup_colour_pane_g1_ParamLimits

0xbfb6,	// (0x0004491e) listscroll_popup_colour_pane_g1

0xbfcd,	// (0x00044935) listscroll_popup_colour_pane_g2_ParamLimits

0xbfcd,	// (0x00044935) listscroll_popup_colour_pane_g2

0xbfe4,	// (0x0004494c) listscroll_popup_colour_pane_g3_ParamLimits

0xbfe4,	// (0x0004494c) listscroll_popup_colour_pane_g3

0x8fa6,	// (0x0004190e) listscroll_popup_colour_pane_g4_ParamLimits

0x8fa6,	// (0x0004190e) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00047f44) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00047f44) listscroll_popup_colour_pane_g

0xbff4,	// (0x0004495c) scroll_pane_cp6_ParamLimits

0xbff4,	// (0x0004495c) scroll_pane_cp6

0x8fb5,	// (0x0004191d) cell_large_graphic_colour_popup_pane_ParamLimits

0x8fb5,	// (0x0004191d) cell_large_graphic_colour_popup_pane

0xc006,	// (0x0004496e) cell_large_graphic_colour_none_popup_pane_t1

0x8876,	// (0x000411de) grid_highlight_pane_cp5

0xc015,	// (0x0004497d) cell_large_graphic_colour_popup_pane_g1

0xc01d,	// (0x00044985) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00047f4d) cell_large_graphic_colour_popup_pane_g

0xc025,	// (0x0004498d) cell_large_graphic_colour_popup_pane_g2_copy1

0xc02e,	// (0x00044996) grid_highlight_pane_cp4

0xc036,	// (0x0004499e) bg_popup_window_pane_cp8_ParamLimits

0xc036,	// (0x0004499e) bg_popup_window_pane_cp8

0xc051,	// (0x000449b9) popup_snote_single_text_window_g1_ParamLimits

0xc051,	// (0x000449b9) popup_snote_single_text_window_g1

0xc063,	// (0x000449cb) popup_snote_single_text_window_t1_ParamLimits

0xc063,	// (0x000449cb) popup_snote_single_text_window_t1

0xc076,	// (0x000449de) popup_snote_single_text_window_t2_ParamLimits

0xc076,	// (0x000449de) popup_snote_single_text_window_t2

0xc089,	// (0x000449f1) popup_snote_single_text_window_t3_ParamLimits

0xc089,	// (0x000449f1) popup_snote_single_text_window_t3

0xc0c2,	// (0x00044a2a) popup_snote_single_text_window_t4_ParamLimits

0xc0c2,	// (0x00044a2a) popup_snote_single_text_window_t4

0xc0f6,	// (0x00044a5e) popup_snote_single_text_window_t5_ParamLimits

0xc0f6,	// (0x00044a5e) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00047f52) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00047f52) popup_snote_single_text_window_t

0xc125,	// (0x00044a8d) bg_popup_window_pane_cp9_ParamLimits

0xc125,	// (0x00044a8d) bg_popup_window_pane_cp9

0xc051,	// (0x000449b9) popup_snote_single_graphic_window_g1_ParamLimits

0xc051,	// (0x000449b9) popup_snote_single_graphic_window_g1

0xc133,	// (0x00044a9b) popup_snote_single_graphic_window_g2_ParamLimits

0xc133,	// (0x00044a9b) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00047f5d) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00047f5d) popup_snote_single_graphic_window_g

0xc13f,	// (0x00044aa7) popup_snote_single_graphic_window_t1_ParamLimits

0xc13f,	// (0x00044aa7) popup_snote_single_graphic_window_t1

0xc152,	// (0x00044aba) popup_snote_single_graphic_window_t2_ParamLimits

0xc152,	// (0x00044aba) popup_snote_single_graphic_window_t2

0xc165,	// (0x00044acd) popup_snote_single_graphic_window_t3_ParamLimits

0xc165,	// (0x00044acd) popup_snote_single_graphic_window_t3

0xc19e,	// (0x00044b06) popup_snote_single_graphic_window_t4_ParamLimits

0xc19e,	// (0x00044b06) popup_snote_single_graphic_window_t4

0xc1d2,	// (0x00044b3a) popup_snote_single_graphic_window_t5_ParamLimits

0xc1d2,	// (0x00044b3a) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00047f62) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00047f62) popup_snote_single_graphic_window_t

0xe458,	// (0x00046dc0) grid_graphic_popup_pane_ParamLimits

0xe458,	// (0x00046dc0) grid_graphic_popup_pane

0xe484,	// (0x00046dec) listscroll_popup_graphic_pane_g1_ParamLimits

0xe484,	// (0x00046dec) listscroll_popup_graphic_pane_g1

0xa54a,	// (0x00042eb2) listscroll_popup_graphic_pane_g2_ParamLimits

0xa54a,	// (0x00042eb2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x00048351) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x00048351) listscroll_popup_graphic_pane_g

0xd5c5,	// (0x00045f2d) scroll_pane_cp5

0xa50d,	// (0x00042e75) cell_graphic_popup_pane_ParamLimits

0xa50d,	// (0x00042e75) cell_graphic_popup_pane

0xe423,	// (0x00046d8b) cell_graphic_popup_pane_g1

0xe42b,	// (0x00046d93) cell_graphic_popup_pane_g2

0xc025,	// (0x0004498d) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0004834a) cell_graphic_popup_pane_g

0xe434,	// (0x00046d9c) cell_graphic_popup_pane_t2

0xc02e,	// (0x00044996) grid_highlight_pane_cp3

0xc213,	// (0x00044b7b) list_gen_pane_ParamLimits

0xc213,	// (0x00044b7b) list_gen_pane

0xc23b,	// (0x00044ba3) scroll_pane

0xa4c8,	// (0x00042e30) bg_list_pane_g1_ParamLimits

0xa4c8,	// (0x00042e30) bg_list_pane_g1

0xe3d2,	// (0x00046d3a) bg_list_pane_g2_ParamLimits

0xe3d2,	// (0x00046d3a) bg_list_pane_g2

0xe3e5,	// (0x00046d4d) bg_list_pane_g3_ParamLimits

0xe3e5,	// (0x00046d4d) bg_list_pane_g3

0xe3f7,	// (0x00046d5f) bg_list_pane_g4_ParamLimits

0xe3f7,	// (0x00046d5f) bg_list_pane_g4

0xa4e3,	// (0x00042e4b) bg_list_pane_g5_ParamLimits

0xa4e3,	// (0x00042e4b) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0004833f) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0004833f) bg_list_pane_g

0xa48e,	// (0x00042df6) list_double2_graphic_large_graphic_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double2_graphic_large_graphic_pane

0xa48e,	// (0x00042df6) list_double2_graphic_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double2_graphic_pane

0xa48e,	// (0x00042df6) list_double2_large_graphic_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double2_large_graphic_pane

0xa48e,	// (0x00042df6) list_double2_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double2_pane

0xa48e,	// (0x00042df6) list_double_graphic_heading_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double_graphic_heading_pane

0xa48e,	// (0x00042df6) list_double_graphic_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double_graphic_pane

0xa48e,	// (0x00042df6) list_double_heading_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double_heading_pane

0xa48e,	// (0x00042df6) list_double_large_graphic_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double_large_graphic_pane

0xa48e,	// (0x00042df6) list_double_number_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double_number_pane

0xa48e,	// (0x00042df6) list_double_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double_pane

0xa48e,	// (0x00042df6) list_double_time_pane_ParamLimits

0xa48e,	// (0x00042df6) list_double_time_pane

0xa48e,	// (0x00042df6) list_setting_number_pane_ParamLimits

0xa48e,	// (0x00042df6) list_setting_number_pane

0xa48e,	// (0x00042df6) list_setting_pane_ParamLimits

0xa48e,	// (0x00042df6) list_setting_pane

0xa4a1,	// (0x00042e09) list_single_2graphic_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_2graphic_pane

0xa4a1,	// (0x00042e09) list_single_graphic_heading_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_graphic_heading_pane

0xa4a1,	// (0x00042e09) list_single_graphic_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_graphic_pane

0xa4a1,	// (0x00042e09) list_single_heading_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_heading_pane

0xa4a1,	// (0x00042e09) list_single_large_graphic_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_large_graphic_pane

0xa4a1,	// (0x00042e09) list_single_number_heading_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_number_heading_pane

0xa4a1,	// (0x00042e09) list_single_number_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_number_pane

0xa4a1,	// (0x00042e09) list_single_pane_ParamLimits

0xa4a1,	// (0x00042e09) list_single_pane

0x8876,	// (0x000411de) list_highlight_pane_cp1

0xeec6,	// (0x0004782e) list_single_pane_g1_ParamLimits

0xeec6,	// (0x0004782e) list_single_pane_g1

0xeed2,	// (0x0004783a) list_single_pane_g2_ParamLimits

0xeed2,	// (0x0004783a) list_single_pane_g2

0x0001,

0xf616,	// (0x00047f7e) list_single_pane_g_ParamLimits

0xf616,	// (0x00047f7e) list_single_pane_g

0xf0ce,	// (0x00047a36) list_single_pane_t1_ParamLimits

0xf0ce,	// (0x00047a36) list_single_pane_t1

0xeec6,	// (0x0004782e) list_single_number_pane_g1_ParamLimits

0xeec6,	// (0x0004782e) list_single_number_pane_g1

0xeed2,	// (0x0004783a) list_single_number_pane_g2_ParamLimits

0xeed2,	// (0x0004783a) list_single_number_pane_g2

0x0001,

0xf616,	// (0x00047f7e) list_single_number_pane_g_ParamLimits

0xf616,	// (0x00047f7e) list_single_number_pane_g

0xf07f,	// (0x000479e7) list_single_number_pane_t1_ParamLimits

0xf07f,	// (0x000479e7) list_single_number_pane_t1

0x44a8,	// (0x0003ce10) list_single_number_pane_t2_ParamLimits

0x44a8,	// (0x0003ce10) list_single_number_pane_t2

0x0001,

0xf998,	// (0x00048300) list_single_number_pane_t_ParamLimits

0xf998,	// (0x00048300) list_single_number_pane_t

0x3f1a,	// (0x0003c882) list_single_graphic_pane_g1_ParamLimits

0x3f1a,	// (0x0003c882) list_single_graphic_pane_g1

0xeec6,	// (0x0004782e) list_single_graphic_pane_g2_ParamLimits

0xeec6,	// (0x0004782e) list_single_graphic_pane_g2

0xeed2,	// (0x0004783a) list_single_graphic_pane_g3_ParamLimits

0xeed2,	// (0x0004783a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00047f6d) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00047f6d) list_single_graphic_pane_g

0x3f26,	// (0x0003c88e) list_single_graphic_pane_t1_ParamLimits

0x3f26,	// (0x0003c88e) list_single_graphic_pane_t1

0x3f3c,	// (0x0003c8a4) list_single_heading_pane_g1_ParamLimits

0x3f3c,	// (0x0003c8a4) list_single_heading_pane_g1

0xeed2,	// (0x0004783a) list_single_heading_pane_g2_ParamLimits

0xeed2,	// (0x0004783a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00047f74) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00047f74) list_single_heading_pane_g

0x3f4f,	// (0x0003c8b7) list_single_heading_pane_t1_ParamLimits

0x3f4f,	// (0x0003c8b7) list_single_heading_pane_t1

0x3f65,	// (0x0003c8cd) list_single_heading_pane_t2_ParamLimits

0x3f65,	// (0x0003c8cd) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00047f79) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00047f79) list_single_heading_pane_t

0xeec6,	// (0x0004782e) list_single_number_heading_pane_g1_ParamLimits

0xeec6,	// (0x0004782e) list_single_number_heading_pane_g1

0xeed2,	// (0x0004783a) list_single_number_heading_pane_g2_ParamLimits

0xeed2,	// (0x0004783a) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x00047f7e) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x00047f7e) list_single_number_heading_pane_g

0xeede,	// (0x00047846) list_single_number_heading_pane_t1_ParamLimits

0xeede,	// (0x00047846) list_single_number_heading_pane_t1

0x3f77,	// (0x0003c8df) list_single_number_heading_pane_t2_ParamLimits

0x3f77,	// (0x0003c8df) list_single_number_heading_pane_t2

0xeef4,	// (0x0004785c) list_single_number_heading_pane_t3_ParamLimits

0xeef4,	// (0x0004785c) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x00047f83) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x00047f83) list_single_number_heading_pane_t

0x3f89,	// (0x0003c8f1) list_single_graphic_heading_pane_g1_ParamLimits

0x3f89,	// (0x0003c8f1) list_single_graphic_heading_pane_g1

0x47bc,	// (0x0003d124) list_single_graphic_heading_pane_g4_ParamLimits

0x47bc,	// (0x0003d124) list_single_graphic_heading_pane_g4

0xeed2,	// (0x0004783a) list_single_graphic_heading_pane_g5_ParamLimits

0xeed2,	// (0x0004783a) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x00047f8a) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00047f8a) list_single_graphic_heading_pane_g

0xeede,	// (0x00047846) list_single_graphic_heading_pane_t1_ParamLimits

0xeede,	// (0x00047846) list_single_graphic_heading_pane_t1

0x3f9d,	// (0x0003c905) list_single_graphic_heading_pane_t2_ParamLimits

0x3f9d,	// (0x0003c905) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00047f91) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00047f91) list_single_graphic_heading_pane_t

0xef06,	// (0x0004786e) list_single_large_graphic_pane_g1_ParamLimits

0xef06,	// (0x0004786e) list_single_large_graphic_pane_g1

0xeec6,	// (0x0004782e) list_single_large_graphic_pane_g2_ParamLimits

0xeec6,	// (0x0004782e) list_single_large_graphic_pane_g2

0xeed2,	// (0x0004783a) list_single_large_graphic_pane_g3_ParamLimits

0xeed2,	// (0x0004783a) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x00047f96) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x00047f96) list_single_large_graphic_pane_g

0xd76f,	// (0x000460d7) wait_border_pane_g2_copy1

0x47cd,	// (0x0003d135) list_single_large_graphic_pane_g4_cp2

0xeede,	// (0x00047846) list_single_large_graphic_pane_t1_ParamLimits

0xeede,	// (0x00047846) list_single_large_graphic_pane_t1

0xef12,	// (0x0004787a) list_double_pane_g1_ParamLimits

0xef12,	// (0x0004787a) list_double_pane_g1

0xef1e,	// (0x00047886) list_double_pane_g2_ParamLimits

0xef1e,	// (0x00047886) list_double_pane_g2

0x0001,

0xf635,	// (0x00047f9d) list_double_pane_g_ParamLimits

0xf635,	// (0x00047f9d) list_double_pane_g

0x3fb5,	// (0x0003c91d) list_double_pane_t1_ParamLimits

0x3fb5,	// (0x0003c91d) list_double_pane_t1

0x3fcb,	// (0x0003c933) list_double_pane_t2_ParamLimits

0x3fcb,	// (0x0003c933) list_double_pane_t2

0x0001,

0xf63a,	// (0x00047fa2) list_double_pane_t_ParamLimits

0xf63a,	// (0x00047fa2) list_double_pane_t

0x3fdd,	// (0x0003c945) list_double2_pane_g1_ParamLimits

0x3fdd,	// (0x0003c945) list_double2_pane_g1

0xef2a,	// (0x00047892) list_double2_pane_g2_ParamLimits

0xef2a,	// (0x00047892) list_double2_pane_g2

0x0001,

0xf63f,	// (0x00047fa7) list_double2_pane_g_ParamLimits

0xf63f,	// (0x00047fa7) list_double2_pane_g

0x3fee,	// (0x0003c956) list_double2_pane_t1_ParamLimits

0x3fee,	// (0x0003c956) list_double2_pane_t1

0x4004,	// (0x0003c96c) list_double2_pane_t2_ParamLimits

0x4004,	// (0x0003c96c) list_double2_pane_t2

0x0001,

0xf644,	// (0x00047fac) list_double2_pane_t_ParamLimits

0xf644,	// (0x00047fac) list_double2_pane_t

0xef12,	// (0x0004787a) list_double_number_pane_g1_ParamLimits

0xef12,	// (0x0004787a) list_double_number_pane_g1

0xef1e,	// (0x00047886) list_double_number_pane_g2_ParamLimits

0xef1e,	// (0x00047886) list_double_number_pane_g2

0x0001,

0xf635,	// (0x00047f9d) list_double_number_pane_g_ParamLimits

0xf635,	// (0x00047f9d) list_double_number_pane_g

0x4016,	// (0x0003c97e) list_double_number_pane_t1_ParamLimits

0x4016,	// (0x0003c97e) list_double_number_pane_t1

0xef36,	// (0x0004789e) list_double_number_pane_t2_ParamLimits

0xef36,	// (0x0004789e) list_double_number_pane_t2

0x4028,	// (0x0003c990) list_double_number_pane_t3_ParamLimits

0x4028,	// (0x0003c990) list_double_number_pane_t3

0x0002,

0xf649,	// (0x00047fb1) list_double_number_pane_t_ParamLimits

0xf649,	// (0x00047fb1) list_double_number_pane_t

0xef4c,	// (0x000478b4) list_double_graphic_pane_g1_ParamLimits

0xef4c,	// (0x000478b4) list_double_graphic_pane_g1

0x47d5,	// (0x0003d13d) list_double_graphic_pane_g2_ParamLimits

0x47d5,	// (0x0003d13d) list_double_graphic_pane_g2

0x47e4,	// (0x0003d14c) list_double_graphic_pane_g3_ParamLimits

0x47e4,	// (0x0003d14c) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x00047fb8) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x00047fb8) list_double_graphic_pane_g

0x403a,	// (0x0003c9a2) list_double_graphic_pane_t1_ParamLimits

0x403a,	// (0x0003c9a2) list_double_graphic_pane_t1

0x4050,	// (0x0003c9b8) list_double_graphic_pane_t2_ParamLimits

0x4050,	// (0x0003c9b8) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x00047fc1) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x00047fc1) list_double_graphic_pane_t

0x4062,	// (0x0003c9ca) list_double2_graphic_pane_g1_ParamLimits

0x4062,	// (0x0003c9ca) list_double2_graphic_pane_g1

0xc26f,	// (0x00044bd7) list_double2_graphic_pane_g2_ParamLimits

0xc26f,	// (0x00044bd7) list_double2_graphic_pane_g2

0x47fc,	// (0x0003d164) list_double2_graphic_pane_g3_ParamLimits

0x47fc,	// (0x0003d164) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x00047fc6) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x00047fc6) list_double2_graphic_pane_g

0x406e,	// (0x0003c9d6) list_double2_graphic_pane_t1_ParamLimits

0x406e,	// (0x0003c9d6) list_double2_graphic_pane_t1

0x4084,	// (0x0003c9ec) list_double2_graphic_pane_t2_ParamLimits

0x4084,	// (0x0003c9ec) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x00047fcd) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x00047fcd) list_double2_graphic_pane_t

0x4096,	// (0x0003c9fe) list_double_large_graphic_pane_g1_ParamLimits

0x4096,	// (0x0003c9fe) list_double_large_graphic_pane_g1

0x40b5,	// (0x0003ca1d) list_double_large_graphic_pane_g2_ParamLimits

0x40b5,	// (0x0003ca1d) list_double_large_graphic_pane_g2

0xef1e,	// (0x00047886) list_double_large_graphic_pane_g3_ParamLimits

0xef1e,	// (0x00047886) list_double_large_graphic_pane_g3

0x40cb,	// (0x0003ca33) list_double_large_graphic_pane_g4_ParamLimits

0x40cb,	// (0x0003ca33) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x00047fd2) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x00047fd2) list_double_large_graphic_pane_g

0x40de,	// (0x0003ca46) list_double_large_graphic_pane_t1_ParamLimits

0x40de,	// (0x0003ca46) list_double_large_graphic_pane_t1

0x40f7,	// (0x0003ca5f) list_double_large_graphic_pane_t2_ParamLimits

0x40f7,	// (0x0003ca5f) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x00047fdd) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x00047fdd) list_double_large_graphic_pane_t

0x4808,	// (0x0003d170) list_double2_large_graphic_pane_g1_ParamLimits

0x4808,	// (0x0003d170) list_double2_large_graphic_pane_g1

0x4814,	// (0x0003d17c) list_double2_large_graphic_pane_g2_ParamLimits

0x4814,	// (0x0003d17c) list_double2_large_graphic_pane_g2

0x47fc,	// (0x0003d164) list_double2_large_graphic_pane_g3_ParamLimits

0x47fc,	// (0x0003d164) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x00047fe2) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x00047fe2) list_double2_large_graphic_pane_g

0x4109,	// (0x0003ca71) list_double2_large_graphic_pane_t1_ParamLimits

0x4109,	// (0x0003ca71) list_double2_large_graphic_pane_t1

0x411f,	// (0x0003ca87) list_double2_large_graphic_pane_t2_ParamLimits

0x411f,	// (0x0003ca87) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x00047fe9) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x00047fe9) list_double2_large_graphic_pane_t

0x4131,	// (0x0003ca99) list_double_heading_pane_g1_ParamLimits

0x4131,	// (0x0003ca99) list_double_heading_pane_g1

0x4142,	// (0x0003caaa) list_double_heading_pane_g2_ParamLimits

0x4142,	// (0x0003caaa) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x00047fee) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x00047fee) list_double_heading_pane_g

0x414e,	// (0x0003cab6) list_double_heading_pane_t1_ParamLimits

0x414e,	// (0x0003cab6) list_double_heading_pane_t1

0x4004,	// (0x0003c96c) list_double_heading_pane_t2_ParamLimits

0x4004,	// (0x0003c96c) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x00047ff3) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x00047ff3) list_double_heading_pane_t

0xef6d,	// (0x000478d5) list_double_graphic_heading_pane_g1_ParamLimits

0xef6d,	// (0x000478d5) list_double_graphic_heading_pane_g1

0x4131,	// (0x0003ca99) list_double_graphic_heading_pane_g2_ParamLimits

0x4131,	// (0x0003ca99) list_double_graphic_heading_pane_g2

0x4142,	// (0x0003caaa) list_double_graphic_heading_pane_g3_ParamLimits

0x4142,	// (0x0003caaa) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x00047ff8) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x00047ff8) list_double_graphic_heading_pane_g

0x4164,	// (0x0003cacc) list_double_graphic_heading_pane_t1_ParamLimits

0x4164,	// (0x0003cacc) list_double_graphic_heading_pane_t1

0x4084,	// (0x0003c9ec) list_double_graphic_heading_pane_t2_ParamLimits

0x4084,	// (0x0003c9ec) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x00047fff) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x00047fff) list_double_graphic_heading_pane_t

0x417a,	// (0x0003cae2) list_double_time_pane_g1_ParamLimits

0x417a,	// (0x0003cae2) list_double_time_pane_g1

0xc27b,	// (0x00044be3) list_double_time_pane_g2_ParamLimits

0xc27b,	// (0x00044be3) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x00048004) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x00048004) list_double_time_pane_g

0x418b,	// (0x0003caf3) list_double_time_pane_t1_ParamLimits

0x418b,	// (0x0003caf3) list_double_time_pane_t1

0x41a1,	// (0x0003cb09) list_double_time_pane_t2_ParamLimits

0x41a1,	// (0x0003cb09) list_double_time_pane_t2

0x41b3,	// (0x0003cb1b) list_double_time_pane_t3_ParamLimits

0x41b3,	// (0x0003cb1b) list_double_time_pane_t3

0x41c5,	// (0x0003cb2d) list_double_time_pane_t4_ParamLimits

0x41c5,	// (0x0003cb2d) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x00048009) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x00048009) list_double_time_pane_t

0xef79,	// (0x000478e1) list_setting_pane_g1_ParamLimits

0xef79,	// (0x000478e1) list_setting_pane_g1

0xef2a,	// (0x00047892) list_setting_pane_g2_ParamLimits

0xef2a,	// (0x00047892) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x00048012) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x00048012) list_setting_pane_g

0x41d7,	// (0x0003cb3f) list_setting_pane_t1_ParamLimits

0x41d7,	// (0x0003cb3f) list_setting_pane_t1

0x41f1,	// (0x0003cb59) list_setting_pane_t2_ParamLimits

0x41f1,	// (0x0003cb59) list_setting_pane_t2

0x0002,

0xf6af,	// (0x00048017) list_setting_pane_t_ParamLimits

0xf6af,	// (0x00048017) list_setting_pane_t

0x422e,	// (0x0003cb96) set_value_pane_cp_ParamLimits

0x422e,	// (0x0003cb96) set_value_pane_cp

0xef85,	// (0x000478ed) list_setting_number_pane_g1_ParamLimits

0xef85,	// (0x000478ed) list_setting_number_pane_g1

0xef91,	// (0x000478f9) list_setting_number_pane_g2_ParamLimits

0xef91,	// (0x000478f9) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004801e) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004801e) list_setting_number_pane_g

0x423a,	// (0x0003cba2) list_setting_number_pane_t1_ParamLimits

0x423a,	// (0x0003cba2) list_setting_number_pane_t1

0x4253,	// (0x0003cbbb) list_setting_number_pane_t2_ParamLimits

0x4253,	// (0x0003cbbb) list_setting_number_pane_t2

0x426d,	// (0x0003cbd5) list_setting_number_pane_t3_ParamLimits

0x426d,	// (0x0003cbd5) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x00048023) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x00048023) list_setting_number_pane_t

0x422e,	// (0x0003cb96) set_value_pane_ParamLimits

0x422e,	// (0x0003cb96) set_value_pane

0xc287,	// (0x00044bef) bg_set_opt_pane_ParamLimits

0xc287,	// (0x00044bef) bg_set_opt_pane

0xef9d,	// (0x00047905) set_value_pane_t1

0xc2a8,	// (0x00044c10) slider_set_pane_cp3

0xc2b1,	// (0x00044c19) volume_small_pane_cp

0xc2ba,	// (0x00044c22) list_form_gen_pane

0xc2c3,	// (0x00044c2b) scroll_pane_cp8

0x42b0,	// (0x0003cc18) form_field_data_pane_ParamLimits

0x42b0,	// (0x0003cc18) form_field_data_pane

0x42c7,	// (0x0003cc2f) form_field_data_wide_pane_ParamLimits

0x42c7,	// (0x0003cc2f) form_field_data_wide_pane

0x42e7,	// (0x0003cc4f) form_field_popup_pane_ParamLimits

0x42e7,	// (0x0003cc4f) form_field_popup_pane

0x42ff,	// (0x0003cc67) form_field_popup_wide_pane_ParamLimits

0x42ff,	// (0x0003cc67) form_field_popup_wide_pane

0xefbb,	// (0x00047923) form_field_slider_pane_ParamLimits

0xefbb,	// (0x00047923) form_field_slider_pane

0xefce,	// (0x00047936) form_field_slider_wide_pane_ParamLimits

0xefce,	// (0x00047936) form_field_slider_wide_pane

0xc2d4,	// (0x00044c3c) data_form_pane

0x4326,	// (0x0003cc8e) form_field_data_pane_t1

0xc2e0,	// (0x00044c48) input_focus_pane

0xc2ee,	// (0x00044c56) data_form_wide_pane

0xefed,	// (0x00047955) form_field_data_wide_pane_t1

0xc043,	// (0x000449ab) input_focus_pane_cp6

0x4340,	// (0x0003cca8) form_field_popup_pane_t1

0xc2e0,	// (0x00044c48) input_focus_pane_cp7

0xc30e,	// (0x00044c76) list_form_pane

0xf017,	// (0x0004797f) form_field_popup_wide_pane_t1

0xc2e0,	// (0x00044c48) input_focus_pane_cp8

0xc31a,	// (0x00044c82) list_form_wide_pane

0x4362,	// (0x0003ccca) form_field_slider_pane_t1_ParamLimits

0x4362,	// (0x0003ccca) form_field_slider_pane_t1

0x437a,	// (0x0003cce2) form_field_slider_pane_t2_ParamLimits

0x437a,	// (0x0003cce2) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x00048033) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x00048033) form_field_slider_pane_t

0x8a40,	// (0x000413a8) input_focus_pane_cp9_ParamLimits

0x8a40,	// (0x000413a8) input_focus_pane_cp9

0x438f,	// (0x0003ccf7) slider_cont_pane_ParamLimits

0x438f,	// (0x0003ccf7) slider_cont_pane

0xc329,	// (0x00044c91) form_field_slider_wide_pane_t1_ParamLimits

0xc329,	// (0x00044c91) form_field_slider_wide_pane_t1

0xf02c,	// (0x00047994) form_field_slider_wide_pane_t2_ParamLimits

0xf02c,	// (0x00047994) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x00048038) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x00048038) form_field_slider_wide_pane_t

0x8a40,	// (0x000413a8) input_focus_pane_cp10_ParamLimits

0x8a40,	// (0x000413a8) input_focus_pane_cp10

0x43a3,	// (0x0003cd0b) slider_cont_pane_cp1_ParamLimits

0x43a3,	// (0x0003cd0b) slider_cont_pane_cp1

0x43b7,	// (0x0003cd1f) slider_form_pane_cp

0xc33b,	// (0x00044ca3) input_focus_pane_g1

0xc343,	// (0x00044cab) input_focus_pane_g2

0xc34b,	// (0x00044cb3) input_focus_pane_g3

0xc353,	// (0x00044cbb) input_focus_pane_g4

0xc35b,	// (0x00044cc3) input_focus_pane_g5

0xc363,	// (0x00044ccb) input_focus_pane_g6

0xc36b,	// (0x00044cd3) input_focus_pane_g7

0xc373,	// (0x00044cdb) input_focus_pane_g8

0xc37b,	// (0x00044ce3) input_focus_pane_g9

0x8786,	// (0x000410ee) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004803d) input_focus_pane_g

0xd778,	// (0x000460e0) wait_border_pane_g3_copy1

0x43bf,	// (0x0003cd27) data_form_pane_t1

0x8786,	// (0x000410ee) wait_anim_pane_g1_copy1

0x44ba,	// (0x0003ce22) data_form_wide_pane_t1

0x43d9,	// (0x0003cd41) list_form_graphic_pane_cp_ParamLimits

0x43d9,	// (0x0003cd41) list_form_graphic_pane_cp

0xe37b,	// (0x00046ce3) slider_form_pane_g1

0xe384,	// (0x00046cec) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x00048330) slider_form_pane_g

0x43d9,	// (0x0003cd41) list_form_graphic_pane_ParamLimits

0x43d9,	// (0x0003cd41) list_form_graphic_pane

0xf03e,	// (0x000479a6) list_form_graphic_pane_g1

0xf046,	// (0x000479ae) list_form_graphic_pane_t1_ParamLimits

0xf046,	// (0x000479ae) list_form_graphic_pane_t1

0x8a82,	// (0x000413ea) list_highlight_pane_cp5_ParamLimits

0x8a82,	// (0x000413ea) list_highlight_pane_cp5

0x43ec,	// (0x0003cd54) find_pane_g1

0xc383,	// (0x00044ceb) input_find_pane

0x43f5,	// (0x0003cd5d) input_find_pane_g1_ParamLimits

0x43f5,	// (0x0003cd5d) input_find_pane_g1

0x4401,	// (0x0003cd69) input_find_pane_t1_ParamLimits

0x4401,	// (0x0003cd69) input_find_pane_t1

0x4416,	// (0x0003cd7e) input_find_pane_t2_ParamLimits

0x4416,	// (0x0003cd7e) input_find_pane_t2

0x0001,

0xf6ea,	// (0x00048052) input_find_pane_t_ParamLimits

0xf6ea,	// (0x00048052) input_find_pane_t

0xc38c,	// (0x00044cf4) input_focus_pane_cp5_ParamLimits

0xc38c,	// (0x00044cf4) input_focus_pane_cp5

0x8fea,	// (0x00041952) bg_popup_window_pane_cp2_ParamLimits

0x8fea,	// (0x00041952) bg_popup_window_pane_cp2

0x8ff7,	// (0x0004195f) listscroll_menu_pane_ParamLimits

0x8ff7,	// (0x0004195f) listscroll_menu_pane

0x9003,	// (0x0004196b) popup_submenu_window_ParamLimits

0x9003,	// (0x0004196b) popup_submenu_window

0xc39a,	// (0x00044d02) find_popup_pane_g1

0xc3a2,	// (0x00044d0a) input_popup_find_pane_cp

0xc38c,	// (0x00044cf4) input_focus_pane_cp4_ParamLimits

0xc38c,	// (0x00044cf4) input_focus_pane_cp4

0xc3ac,	// (0x00044d14) input_popup_find_pane_t1_ParamLimits

0xc3ac,	// (0x00044d14) input_popup_find_pane_t1

0x8876,	// (0x000411de) bg_popup_sub_pane_cp

0xc3da,	// (0x00044d42) listscroll_popup_sub_pane

0xc3e2,	// (0x00044d4a) list_submenu_pane_ParamLimits

0xc3e2,	// (0x00044d4a) list_submenu_pane

0xc3f3,	// (0x00044d5b) scroll_pane_cp4

0xc3fb,	// (0x00044d63) list_single_popup_submenu_pane_ParamLimits

0xc3fb,	// (0x00044d63) list_single_popup_submenu_pane

0xc40e,	// (0x00044d76) list_single_popup_submenu_pane_g1

0xc416,	// (0x00044d7e) list_single_popup_submenu_pane_t1_ParamLimits

0xc416,	// (0x00044d7e) list_single_popup_submenu_pane_t1

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp1_ParamLimits

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp1

0x9035,	// (0x0004199d) tabs_2_active_pane_g1

0x903d,	// (0x000419a5) tabs_2_active_pane_t1

0x8a40,	// (0x000413a8) bg_passive_tab_pane_cp1_ParamLimits

0x8a40,	// (0x000413a8) bg_passive_tab_pane_cp1

0x9035,	// (0x0004199d) tabs_2_passive_pane_g1

0x903d,	// (0x000419a5) tabs_2_passive_pane_t1

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp4

0x904f,	// (0x000419b7) tabs_2_long_active_pane_t1

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp4

0x64e5,	// (0x0003ee4d) list_single_midp_graphic_pane_g4_ParamLimits

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp5

0x9062,	// (0x000419ca) tabs_3_long_active_pane_t1

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp5

0x64e5,	// (0x0003ee4d) list_single_midp_graphic_pane_g4

0x8a82,	// (0x000413ea) bg_popup_window_pane_cp13_ParamLimits

0x8a82,	// (0x000413ea) bg_popup_window_pane_cp13

0xc440,	// (0x00044da8) listscroll_popup_fast_pane_ParamLimits

0xc440,	// (0x00044da8) listscroll_popup_fast_pane

0xc44f,	// (0x00044db7) grid_popup_fast_pane_ParamLimits

0xc44f,	// (0x00044db7) grid_popup_fast_pane

0xc461,	// (0x00044dc9) scroll_pane_cp9_ParamLimits

0xc461,	// (0x00044dc9) scroll_pane_cp9

0x128c,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x128c,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2

0xc485,	// (0x00044ded) input_focus_pane_cp20_ParamLimits

0xc485,	// (0x00044ded) input_focus_pane_cp20

0xc493,	// (0x00044dfb) query_popup_data_pane_t1_ParamLimits

0xc493,	// (0x00044dfb) query_popup_data_pane_t1

0xc4a6,	// (0x00044e0e) query_popup_data_pane_t2_ParamLimits

0xc4a6,	// (0x00044e0e) query_popup_data_pane_t2

0xc4ec,	// (0x00044e54) query_popup_data_pane_t3_ParamLimits

0xc4ec,	// (0x00044e54) query_popup_data_pane_t3

0xc52d,	// (0x00044e95) query_popup_data_pane_t4_ParamLimits

0xc52d,	// (0x00044e95) query_popup_data_pane_t4

0xc569,	// (0x00044ed1) query_popup_data_pane_t5_ParamLimits

0xc569,	// (0x00044ed1) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x00048057) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x00048057) query_popup_data_pane_t

0xc33b,	// (0x00044ca3) bg_set_opt_pane_g1

0xc343,	// (0x00044cab) bg_set_opt_pane_g2

0xc34b,	// (0x00044cb3) bg_set_opt_pane_g3

0xc353,	// (0x00044cbb) bg_set_opt_pane_g4

0xc35b,	// (0x00044cc3) bg_set_opt_pane_g5

0xc363,	// (0x00044ccb) bg_set_opt_pane_g6

0xc36b,	// (0x00044cd3) bg_set_opt_pane_g7

0xc373,	// (0x00044cdb) bg_set_opt_pane_g8

0xc37b,	// (0x00044ce3) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x00048062) bg_set_opt_pane_g

0x614b,	// (0x0003eab3) control_top_pane_stacon_ParamLimits

0x614b,	// (0x0003eab3) control_top_pane_stacon

0x619e,	// (0x0003eb06) signal_pane_stacon_ParamLimits

0x619e,	// (0x0003eb06) signal_pane_stacon

0xc9c8,	// (0x00045330) stacon_top_pane_g1_ParamLimits

0xc9c8,	// (0x00045330) stacon_top_pane_g1

0x61c3,	// (0x0003eb2b) title_pane_stacon_ParamLimits

0x61c3,	// (0x0003eb2b) title_pane_stacon

0x61ed,	// (0x0003eb55) uni_indicator_pane_stacon_ParamLimits

0x61ed,	// (0x0003eb55) uni_indicator_pane_stacon

0x6202,	// (0x0003eb6a) battery_pane_stacon_ParamLimits

0x6202,	// (0x0003eb6a) battery_pane_stacon

0x6246,	// (0x0003ebae) control_bottom_pane_stacon_ParamLimits

0x6246,	// (0x0003ebae) control_bottom_pane_stacon

0x6269,	// (0x0003ebd1) navi_pane_stacon_ParamLimits

0x6269,	// (0x0003ebd1) navi_pane_stacon

0xc9ea,	// (0x00045352) stacon_bottom_pane_g1_ParamLimits

0xc9ea,	// (0x00045352) stacon_bottom_pane_g1

0x5eac,	// (0x0003e814) aid_levels_signal_lsc_ParamLimits

0x5eac,	// (0x0003e814) aid_levels_signal_lsc

0x5ec3,	// (0x0003e82b) signal_pane_stacon_g1_ParamLimits

0x5ec3,	// (0x0003e82b) signal_pane_stacon_g1

0x5ed7,	// (0x0003e83f) signal_pane_stacon_g2_ParamLimits

0x5ed7,	// (0x0003e83f) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x00048075) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x00048075) signal_pane_stacon_g

0x5f0c,	// (0x0003e874) title_pane_stacon_t1_ParamLimits

0x5f0c,	// (0x0003e874) title_pane_stacon_t1

0xc5ad,	// (0x00044f15) uni_indicator_pane_stacon_g1

0xc5b7,	// (0x00044f1f) uni_indicator_pane_stacon_g2

0xc5c1,	// (0x00044f29) uni_indicator_pane_stacon_g3

0xc5cb,	// (0x00044f33) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x00048081) uni_indicator_pane_stacon_g

0x5f31,	// (0x0003e899) control_top_pane_stacon_g1

0x5f39,	// (0x0003e8a1) control_top_pane_stacon_t1_ParamLimits

0x5f39,	// (0x0003e8a1) control_top_pane_stacon_t1

0x5f70,	// (0x0003e8d8) aid_levels_battery_lsc_ParamLimits

0x5f70,	// (0x0003e8d8) aid_levels_battery_lsc

0x5f88,	// (0x0003e8f0) battery_pane_stacon_g1_ParamLimits

0x5f88,	// (0x0003e8f0) battery_pane_stacon_g1

0x5f9b,	// (0x0003e903) battery_pane_stacon_g2_ParamLimits

0x5f9b,	// (0x0003e903) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0004808a) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0004808a) battery_pane_stacon_g

0x5fd9,	// (0x0003e941) navi_icon_pane_stacon

0x5fed,	// (0x0003e955) navi_navi_pane_stacon

0x5fd9,	// (0x0003e941) navi_text_pane_stacon

0x5f31,	// (0x0003e899) control_bottom_pane_stacon_g1

0x6001,	// (0x0003e969) control_bottom_pane_stacon_t1_ParamLimits

0x6001,	// (0x0003e969) control_bottom_pane_stacon_t1

0x9074,	// (0x000419dc) grid_app_pane_ParamLimits

0x9074,	// (0x000419dc) grid_app_pane

0x90aa,	// (0x00041a12) scroll_pane_cp15_ParamLimits

0x90aa,	// (0x00041a12) scroll_pane_cp15

0x90c7,	// (0x00041a2f) cell_app_pane_ParamLimits

0x90c7,	// (0x00041a2f) cell_app_pane

0x910e,	// (0x00041a76) cell_app_pane_g1_ParamLimits

0x910e,	// (0x00041a76) cell_app_pane_g1

0xc5ef,	// (0x00044f57) cell_app_pane_g2_ParamLimits

0xc5ef,	// (0x00044f57) cell_app_pane_g2

0x0001,

0xf727,	// (0x0004808f) cell_app_pane_g_ParamLimits

0xf727,	// (0x0004808f) cell_app_pane_g

0xc5fb,	// (0x00044f63) cell_app_pane_t1_ParamLimits

0xc5fb,	// (0x00044f63) cell_app_pane_t1

0xc60d,	// (0x00044f75) grid_highlight_pane_ParamLimits

0xc60d,	// (0x00044f75) grid_highlight_pane

0xc33b,	// (0x00044ca3) cell_highlight_pane_g1

0xc343,	// (0x00044cab) cell_highlight_pane_g2

0xc34b,	// (0x00044cb3) cell_highlight_pane_g3

0xc353,	// (0x00044cbb) cell_highlight_pane_g4

0xc35b,	// (0x00044cc3) cell_highlight_pane_g5

0xc363,	// (0x00044ccb) cell_highlight_pane_g6

0xc36b,	// (0x00044cd3) cell_highlight_pane_g7

0xc373,	// (0x00044cdb) cell_highlight_pane_g8

0xc37b,	// (0x00044ce3) cell_highlight_pane_g9

0x8786,	// (0x000410ee) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004803d) cell_highlight_pane_g

0xc61e,	// (0x00044f86) bg_scroll_pane

0x604b,	// (0x0003e9b3) scroll_handle_pane

0xc665,	// (0x00044fcd) scroll_bg_pane_g1

0xc67a,	// (0x00044fe2) scroll_bg_pane_g2

0xc692,	// (0x00044ffa) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x00048094) scroll_bg_pane_g

0xc6a7,	// (0x0004500f) scroll_handle_focus_pane_ParamLimits

0xc6a7,	// (0x0004500f) scroll_handle_focus_pane

0xc665,	// (0x00044fcd) scroll_handle_pane_g1

0xc6b4,	// (0x0004501c) scroll_handle_pane_g2

0xc692,	// (0x00044ffa) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0004809b) scroll_handle_pane_g

0xc38c,	// (0x00044cf4) bg_popup_sub_pane_cp21_ParamLimits

0xc38c,	// (0x00044cf4) bg_popup_sub_pane_cp21

0xc6c8,	// (0x00045030) popup_fep_japan_predictive_window_t1_ParamLimits

0xc6c8,	// (0x00045030) popup_fep_japan_predictive_window_t1

0xc6df,	// (0x00045047) popup_fep_japan_predictive_window_t2_ParamLimits

0xc6df,	// (0x00045047) popup_fep_japan_predictive_window_t2

0xc712,	// (0x0004507a) popup_fep_japan_predictive_window_t3_ParamLimits

0xc712,	// (0x0004507a) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x000480a2) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x000480a2) popup_fep_japan_predictive_window_t

0x8876,	// (0x000411de) bg_popup_sub_pane_cp23

0xc749,	// (0x000450b1) listscroll_japin_cand_pane

0xc751,	// (0x000450b9) popup_fep_japan_candidate_window_t1

0xc75f,	// (0x000450c7) candidate_pane_ParamLimits

0xc75f,	// (0x000450c7) candidate_pane

0xc771,	// (0x000450d9) scroll_pane_cp30

0xc779,	// (0x000450e1) list_single_popup_jap_candidate_pane_ParamLimits

0xc779,	// (0x000450e1) list_single_popup_jap_candidate_pane

0x8876,	// (0x000411de) list_highlight_pane_cp30

0xc78d,	// (0x000450f5) list_single_popup_jap_candidate_pane_t1

0xc79c,	// (0x00045104) level_1_signal

0xc7a9,	// (0x00045111) level_2_signal

0xc7b6,	// (0x0004511e) level_3_signal

0xc7c3,	// (0x0004512b) level_4_signal

0xc7d0,	// (0x00045138) level_5_signal

0xc7dd,	// (0x00045145) level_6_signal

0xc7ea,	// (0x00045152) level_7_signal

0xc79c,	// (0x00045104) level_1_battery

0xc7a9,	// (0x00045111) level_2_battery

0xc7b6,	// (0x0004511e) level_3_battery

0xc7c3,	// (0x0004512b) level_4_battery

0xc7d0,	// (0x00045138) level_5_battery

0xc7dd,	// (0x00045145) level_6_battery

0xc7ea,	// (0x00045152) level_7_battery

0xc80f,	// (0x00045177) list_menu_pane_ParamLimits

0xc80f,	// (0x00045177) list_menu_pane

0xc820,	// (0x00045188) scroll_pane_cp25_ParamLimits

0xc820,	// (0x00045188) scroll_pane_cp25

0xc839,	// (0x000451a1) list_double2_graphic_pane_cp2_ParamLimits

0xc839,	// (0x000451a1) list_double2_graphic_pane_cp2

0xc839,	// (0x000451a1) list_double2_large_graphic_pane_cp2_ParamLimits

0xc839,	// (0x000451a1) list_double2_large_graphic_pane_cp2

0xc839,	// (0x000451a1) list_double2_pane_cp2_ParamLimits

0xc839,	// (0x000451a1) list_double2_pane_cp2

0xc839,	// (0x000451a1) list_double_graphic_pane_cp2_ParamLimits

0xc839,	// (0x000451a1) list_double_graphic_pane_cp2

0xc839,	// (0x000451a1) list_double_large_graphic_pane_cp2_ParamLimits

0xc839,	// (0x000451a1) list_double_large_graphic_pane_cp2

0xc839,	// (0x000451a1) list_double_number_pane_cp2_ParamLimits

0xc839,	// (0x000451a1) list_double_number_pane_cp2

0xc839,	// (0x000451a1) list_double_pane_cp2_ParamLimits

0xc839,	// (0x000451a1) list_double_pane_cp2

0x914c,	// (0x00041ab4) list_single_2graphic_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_2graphic_pane_cp2

0x914c,	// (0x00041ab4) list_single_graphic_heading_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_graphic_heading_pane_cp2

0x914c,	// (0x00041ab4) list_single_graphic_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_graphic_pane_cp2

0x914c,	// (0x00041ab4) list_single_heading_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_heading_pane_cp2

0xc849,	// (0x000451b1) list_single_large_graphic_pane_cp2_ParamLimits

0xc849,	// (0x000451b1) list_single_large_graphic_pane_cp2

0x914c,	// (0x00041ab4) list_single_number_heading_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_number_heading_pane_cp2

0x914c,	// (0x00041ab4) list_single_number_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_number_pane_cp2

0x914c,	// (0x00041ab4) list_single_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_pane_cp2

0xc863,	// (0x000451cb) bg_popup_sub_pane_cp22

0x60fd,	// (0x0003ea65) popup_side_volume_key_window_g1

0x6127,	// (0x0003ea8f) popup_side_volume_key_window_t1

0x6143,	// (0x0003eaab) volume_small_pane_cp1

0x8a40,	// (0x000413a8) bg_popup_sub_pane_cp24_ParamLimits

0x8a40,	// (0x000413a8) bg_popup_sub_pane_cp24

0xc879,	// (0x000451e1) fep_china_uni_candidate_pane_ParamLimits

0xc879,	// (0x000451e1) fep_china_uni_candidate_pane

0xc88d,	// (0x000451f5) fep_china_uni_entry_pane

0xc89d,	// (0x00045205) popup_fep_china_uni_window_g1

0xc8b9,	// (0x00045221) fep_china_uni_entry_pane_g1

0xc8c1,	// (0x00045229) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x000480cf) fep_china_uni_entry_pane_g

0xc8c9,	// (0x00045231) fep_entry_item_pane

0xc8d3,	// (0x0004523b) fep_candidate_item_pane

0xc8db,	// (0x00045243) fep_china_uni_candidate_pane_g1

0xc8e3,	// (0x0004524b) fep_china_uni_candidate_pane_g2

0xc8eb,	// (0x00045253) fep_china_uni_candidate_pane_g3

0xc8f3,	// (0x0004525b) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x000480d4) fep_china_uni_candidate_pane_g

0x8786,	// (0x000410ee) fep_entry_item_pane_g1

0xc8fb,	// (0x00045263) fep_entry_item_pane_t1_ParamLimits

0xc8fb,	// (0x00045263) fep_entry_item_pane_t1

0xc911,	// (0x00045279) fep_candidate_item_pane_t1_ParamLimits

0xc911,	// (0x00045279) fep_candidate_item_pane_t1

0xc926,	// (0x0004528e) fep_candidate_item_pane_t2_ParamLimits

0xc926,	// (0x0004528e) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x000480dd) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x000480dd) fep_candidate_item_pane_t

0x8a82,	// (0x000413ea) list_highlight_pane_cp31_ParamLimits

0x8a82,	// (0x000413ea) list_highlight_pane_cp31

0xc938,	// (0x000452a0) level_1_signal_lsc

0xc941,	// (0x000452a9) level_2_signal_lsc

0xc94a,	// (0x000452b2) level_3_signal_lsc

0xc953,	// (0x000452bb) level_4_signal_lsc

0xc95c,	// (0x000452c4) level_5_signal_lsc

0xc965,	// (0x000452cd) level_6_signal_lsc

0xc96e,	// (0x000452d6) level_7_signal_lsc

0xc96e,	// (0x000452d6) level_1_battery_lsc

0xc977,	// (0x000452df) level_2_battery_lsc

0xc980,	// (0x000452e8) level_3_battery_lsc

0xc989,	// (0x000452f1) level_4_battery_lsc

0xc992,	// (0x000452fa) level_5_battery_lsc

0xc99b,	// (0x00045303) level_6_battery_lsc

0xc938,	// (0x000452a0) level_7_battery_lsc

0xc9a4,	// (0x0004530c) scroll_handle_focus_pane_g1

0xc9ad,	// (0x00045315) scroll_handle_focus_pane_g2

0xc9b6,	// (0x0004531e) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x000480e2) scroll_handle_focus_pane_g

0x442b,	// (0x0003cd93) list_single_2graphic_pane_g1_ParamLimits

0x442b,	// (0x0003cd93) list_single_2graphic_pane_g1

0x47bc,	// (0x0003d124) list_single_2graphic_pane_g2_ParamLimits

0x47bc,	// (0x0003d124) list_single_2graphic_pane_g2

0xeed2,	// (0x0004783a) list_single_2graphic_pane_g3_ParamLimits

0xeed2,	// (0x0004783a) list_single_2graphic_pane_g3

0x482e,	// (0x0003d196) list_single_2graphic_pane_g4_ParamLimits

0x482e,	// (0x0003d196) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x000480e9) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x000480e9) list_single_2graphic_pane_g

0x4437,	// (0x0003cd9f) list_single_2graphic_pane_t1_ParamLimits

0x4437,	// (0x0003cd9f) list_single_2graphic_pane_t1

0x483a,	// (0x0003d1a2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x483a,	// (0x0003d1a2) list_double2_graphic_large_graphic_pane_g1

0x4814,	// (0x0003d17c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4814,	// (0x0003d17c) list_double2_graphic_large_graphic_pane_g2

0x47fc,	// (0x0003d164) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x47fc,	// (0x0003d164) list_double2_graphic_large_graphic_pane_g3

0x484c,	// (0x0003d1b4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x484c,	// (0x0003d1b4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x000480f2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x000480f2) list_double2_graphic_large_graphic_pane_g

0x4465,	// (0x0003cdcd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4465,	// (0x0003cdcd) list_double2_graphic_large_graphic_pane_t1

0x447b,	// (0x0003cde3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x447b,	// (0x0003cde3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x000480fb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x000480fb) list_double2_graphic_large_graphic_pane_t

0xca97,	// (0x000453ff) popup_fast_swap_window_ParamLimits

0xca97,	// (0x000453ff) popup_fast_swap_window

0xcab3,	// (0x0004541b) popup_side_volume_key_window

0xcacd,	// (0x00045435) stacon_top_pane

0xcad7,	// (0x0004543f) status_pane_ParamLimits

0xcad7,	// (0x0004543f) status_pane

0xcacd,	// (0x00045435) status_small_pane

0x8876,	// (0x000411de) control_pane

0x8876,	// (0x000411de) stacon_bottom_pane

0xc2c3,	// (0x00044c2b) scroll_pane_cp121

0xc2ba,	// (0x00044c22) set_content_pane

0x91ae,	// (0x00041b16) bg_active_tab_pane_g1_cp1

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp1

0x91b7,	// (0x00041b1f) bg_active_tab_pane_g3_cp1

0x91ae,	// (0x00041b16) bg_passive_tab_pane_g1_cp1

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp1

0x91b7,	// (0x00041b1f) bg_passive_tab_pane_g3_cp1

0x91c0,	// (0x00041b28) bg_active_tab_pane_g1_cp2

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp2

0x91c9,	// (0x00041b31) bg_active_tab_pane_g3_cp2

0x91c0,	// (0x00041b28) bg_passive_tab_pane_g1_cp2

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp2

0x91c9,	// (0x00041b31) bg_passive_tab_pane_g3_cp2

0x91d2,	// (0x00041b3a) bg_active_tab_pane_g1_cp3

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp3

0x91db,	// (0x00041b43) bg_active_tab_pane_g3_cp3

0x91d2,	// (0x00041b3a) bg_passive_tab_pane_g1_cp3

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp3

0x91db,	// (0x00041b43) bg_passive_tab_pane_g3_cp3

0x91e4,	// (0x00041b4c) bg_active_tab_pane_g1_cp4

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp4

0x91ed,	// (0x00041b55) bg_active_tab_pane_g3_cp4

0x91e4,	// (0x00041b4c) bg_passive_tab_pane_g1_cp4

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp4

0x91ed,	// (0x00041b55) bg_passive_tab_pane_g3_cp4

0xca06,	// (0x0004536e) bg_active_tab_pane_g1_cp5

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp5

0xca0f,	// (0x00045377) bg_active_tab_pane_g3_cp5

0xca06,	// (0x0004536e) bg_passive_tab_pane_g1_cp5

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp5

0xca0f,	// (0x00045377) bg_passive_tab_pane_g3_cp5

0x3343,	// (0x0003bcab) list_set_graphic_pane_ParamLimits

0x3343,	// (0x0003bcab) list_set_graphic_pane

0x8876,	// (0x000411de) bg_set_opt_pane_cp4

0xca18,	// (0x00045380) list_set_graphic_pane_g1_ParamLimits

0xca18,	// (0x00045380) list_set_graphic_pane_g1

0xca24,	// (0x0004538c) list_set_graphic_pane_g2_ParamLimits

0xca24,	// (0x0004538c) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x00048100) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x00048100) list_set_graphic_pane_g

0x0009,

0xfaf7,	// (0x0004845f) volume_small_pane_cp_g

0xca48,	// (0x000453b0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xca48,	// (0x000453b0) list_double2_large_graphic_pane_g1_cp2

0xca56,	// (0x000453be) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xca56,	// (0x000453be) list_double2_large_graphic_pane_g2_cp2

0xca67,	// (0x000453cf) list_double2_large_graphic_pane_g3_cp2

0xca6f,	// (0x000453d7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xca6f,	// (0x000453d7) list_double2_large_graphic_pane_t1_cp2

0xca85,	// (0x000453ed) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xca85,	// (0x000453ed) list_double2_large_graphic_pane_t2_cp2

0xe12b,	// (0x00046a93) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe12b,	// (0x00046a93) list_double_large_graphic_pane_g1_cp2

0xe13e,	// (0x00046aa6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe13e,	// (0x00046aa6) list_double_large_graphic_pane_g2_cp2

0xcbf5,	// (0x0004555d) list_double_large_graphic_pane_g3_cp2

0xe14f,	// (0x00046ab7) list_double_large_graphic_pane_g4_cp

0xe157,	// (0x00046abf) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe157,	// (0x00046abf) list_double_large_graphic_pane_t1_cp2

0xe16e,	// (0x00046ad6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe16e,	// (0x00046ad6) list_double_large_graphic_pane_t2_cp2

0xcae5,	// (0x0004544d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcae5,	// (0x0004544d) list_double2_graphic_pane_g1_cp2

0xcaf3,	// (0x0004545b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcaf3,	// (0x0004545b) list_double2_graphic_pane_g2_cp2

0xcb04,	// (0x0004546c) list_double2_graphic_pane_g3_cp2

0xcb0e,	// (0x00045476) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcb0e,	// (0x00045476) list_double2_graphic_pane_t1_cp2

0xcb24,	// (0x0004548c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xcb24,	// (0x0004548c) list_double2_graphic_pane_t2_cp2

0xcb36,	// (0x0004549e) list_single_number_heading_pane_g1_cp2_ParamLimits

0xcb36,	// (0x0004549e) list_single_number_heading_pane_g1_cp2

0xcb42,	// (0x000454aa) list_single_number_heading_pane_g2_cp2

0xcb4a,	// (0x000454b2) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcb4a,	// (0x000454b2) list_single_number_heading_pane_t1_cp2

0xcb60,	// (0x000454c8) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcb60,	// (0x000454c8) list_single_number_heading_pane_t2_cp2

0xcb74,	// (0x000454dc) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcb74,	// (0x000454dc) list_single_number_heading_pane_t3_cp2

0xcb36,	// (0x0004549e) list_single_heading_pane_g1_cp2_ParamLimits

0xcb36,	// (0x0004549e) list_single_heading_pane_g1_cp2

0xcb42,	// (0x000454aa) list_single_heading_pane_g2_cp2

0xcb4a,	// (0x000454b2) list_single_heading_pane_t1_cp2_ParamLimits

0xcb4a,	// (0x000454b2) list_single_heading_pane_t1_cp2

0xdf33,	// (0x0004689b) list_single_heading_pane_t2_cp2_ParamLimits

0xdf33,	// (0x0004689b) list_single_heading_pane_t2_cp2

0xdecd,	// (0x00046835) list_double_graphic_pane_g1_cp2_ParamLimits

0xdecd,	// (0x00046835) list_double_graphic_pane_g1_cp2

0xded9,	// (0x00046841) list_double_graphic_pane_g2_cp2_ParamLimits

0xded9,	// (0x00046841) list_double_graphic_pane_g2_cp2

0xdee8,	// (0x00046850) list_double_graphic_pane_g3_cp2

0xdef0,	// (0x00046858) list_double_graphic_pane_t1_cp2_ParamLimits

0xdef0,	// (0x00046858) list_double_graphic_pane_t1_cp2

0xdf06,	// (0x0004686e) list_double_graphic_pane_t2_cp2_ParamLimits

0xdf06,	// (0x0004686e) list_double_graphic_pane_t2_cp2

0xcbe9,	// (0x00045551) list_double_number_pane_g1_cp2_ParamLimits

0xcbe9,	// (0x00045551) list_double_number_pane_g1_cp2

0xcbf5,	// (0x0004555d) list_double_number_pane_g2_cp2

0xde91,	// (0x000467f9) list_double_number_pane_t1_cp2_ParamLimits

0xde91,	// (0x000467f9) list_double_number_pane_t1_cp2

0xdea5,	// (0x0004680d) list_double_number_pane_t2_cp2_ParamLimits

0xdea5,	// (0x0004680d) list_double_number_pane_t2_cp2

0xdebb,	// (0x00046823) list_double_number_pane_t3_cp2_ParamLimits

0xdebb,	// (0x00046823) list_double_number_pane_t3_cp2

0xde08,	// (0x00046770) list_single_graphic_pane_g1_cp2_ParamLimits

0xde08,	// (0x00046770) list_single_graphic_pane_g1_cp2

0xcc4d,	// (0x000455b5) list_single_graphic_pane_g2_cp2_ParamLimits

0xcc4d,	// (0x000455b5) list_single_graphic_pane_g2_cp2

0xcc59,	// (0x000455c1) list_single_graphic_pane_g3_cp2

0xddde,	// (0x00046746) list_single_graphic_pane_t1_cp2_ParamLimits

0xddde,	// (0x00046746) list_single_graphic_pane_t1_cp2

0xcc4d,	// (0x000455b5) list_single_number_pane_g1_cp2_ParamLimits

0xcc4d,	// (0x000455b5) list_single_number_pane_g1_cp2

0xcc59,	// (0x000455c1) list_single_number_pane_g2_cp2

0xddde,	// (0x00046746) list_single_number_pane_t1_cp2_ParamLimits

0xddde,	// (0x00046746) list_single_number_pane_t1_cp2

0xddf4,	// (0x0004675c) list_single_number_pane_t2_cp2_ParamLimits

0xddf4,	// (0x0004675c) list_single_number_pane_t2_cp2

0xca56,	// (0x000453be) list_double2_pane_g1_cp2_ParamLimits

0xca56,	// (0x000453be) list_double2_pane_g1_cp2

0xca67,	// (0x000453cf) list_double2_pane_g2_cp2

0xcbc1,	// (0x00045529) list_double2_pane_t1_cp2_ParamLimits

0xcbc1,	// (0x00045529) list_double2_pane_t1_cp2

0xcbd7,	// (0x0004553f) list_double2_pane_t2_cp2_ParamLimits

0xcbd7,	// (0x0004553f) list_double2_pane_t2_cp2

0xcbe9,	// (0x00045551) list_double_pane_g1_cp2_ParamLimits

0xcbe9,	// (0x00045551) list_double_pane_g1_cp2

0xcbf5,	// (0x0004555d) list_double_pane_g2_cp2

0xcbfd,	// (0x00045565) list_double_pane_t1_cp2_ParamLimits

0xcbfd,	// (0x00045565) list_double_pane_t1_cp2

0xcc13,	// (0x0004557b) list_double_pane_t2_cp2_ParamLimits

0xcc13,	// (0x0004557b) list_double_pane_t2_cp2

0xcc3d,	// (0x000455a5) list_single_pane_cp2_g3

0xcc4d,	// (0x000455b5) list_single_pane_g1_cp2_ParamLimits

0xcc4d,	// (0x000455b5) list_single_pane_g1_cp2

0xcc59,	// (0x000455c1) list_single_pane_g2_cp2

0xcc61,	// (0x000455c9) list_single_pane_t1_cp2_ParamLimits

0xcc61,	// (0x000455c9) list_single_pane_t1_cp2

0xcc79,	// (0x000455e1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcc79,	// (0x000455e1) list_single_large_graphic_pane_g1_cp2

0xcc87,	// (0x000455ef) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcc87,	// (0x000455ef) list_single_large_graphic_pane_g2_cp2

0xcc93,	// (0x000455fb) list_single_large_graphic_pane_g3_cp2

0xcc9b,	// (0x00045603) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcc9b,	// (0x00045603) list_single_large_graphic_pane_g4_cp1

0xccb5,	// (0x0004561d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xccb5,	// (0x0004561d) list_single_large_graphic_pane_t1_cp2

0xdda8,	// (0x00046710) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdda8,	// (0x00046710) list_single_graphic_heading_pane_g1_cp2

0xdd75,	// (0x000466dd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdd75,	// (0x000466dd) list_single_graphic_heading_pane_g4_cp2

0xcc59,	// (0x000455c1) list_single_graphic_heading_pane_g5_cp2

0xddb4,	// (0x0004671c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xddb4,	// (0x0004671c) list_single_graphic_heading_pane_t1_cp2

0xddca,	// (0x00046732) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xddca,	// (0x00046732) list_single_graphic_heading_pane_t2_cp2

0xdd69,	// (0x000466d1) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdd69,	// (0x000466d1) list_single_2graphic_pane_g1_cp2

0xdd75,	// (0x000466dd) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdd75,	// (0x000466dd) list_single_2graphic_pane_g2_cp2

0xcc59,	// (0x000455c1) list_single_2graphic_pane_g3_cp2

0xdd86,	// (0x000466ee) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdd86,	// (0x000466ee) list_single_2graphic_pane_g4_cp2

0xdd92,	// (0x000466fa) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdd92,	// (0x000466fa) list_single_2graphic_pane_t1_cp2

0x8786,	// (0x000410ee) list_highlight_pane_g10_cp1

0xd96f,	// (0x000462d7) list_highlight_pane_g1_cp1

0xd977,	// (0x000462df) list_highlight_pane_g2_cp1

0xd97f,	// (0x000462e7) list_highlight_pane_g3_cp1

0xd987,	// (0x000462ef) list_highlight_pane_g4_cp1

0xd98f,	// (0x000462f7) list_highlight_pane_g5_cp1

0xd997,	// (0x000462ff) list_highlight_pane_g6_cp1

0xd99f,	// (0x00046307) list_highlight_pane_g7_cp1

0xd9a7,	// (0x0004630f) list_highlight_pane_g8_cp1

0xd9af,	// (0x00046317) list_highlight_pane_g9_cp1

0x9fed,	// (0x00042955) form_field_slider_pane_t3

0x9ffd,	// (0x00042965) form_field_slider_pane_t4

0xd8a3,	// (0x0004620b) slider_form_pane_ParamLimits

0xd8a3,	// (0x0004620b) slider_form_pane

0x8876,	// (0x000411de) control_abbreviations

0x8876,	// (0x000411de) control_conventions

0x8876,	// (0x000411de) control_definitions

0x8876,	// (0x000411de) format_table_attribute

0xdf7f,	// (0x000468e7) bg_popup_preview_window_pane_g9

0x8876,	// (0x000411de) format_table_data2

0x8876,	// (0x000411de) format_table_data3

0x8876,	// (0x000411de) format_table_data_example

0x0008,

0x8876,	// (0x000411de) intro_purpose

0xf928,	// (0x00048290) bg_popup_preview_window_pane_g

0x8876,	// (0x000411de) texts_category

0x8876,	// (0x000411de) texts_graphics

0xcccb,	// (0x00045633) text_digital

0xccda,	// (0x00045642) text_primary

0xcce9,	// (0x00045651) text_primary_small

0xccf8,	// (0x00045660) text_secondary

0xcd07,	// (0x0004566f) text_title

0xe409,	// (0x00046d71) bg_passive_tab_pane_g1_cp3_srt

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp3_srt

0xe412,	// (0x00046d7a) bg_passive_tab_pane_g3_cp3_srt

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp3_srt_ParamLimits

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp3_srt

0xe41b,	// (0x00046d83) tabs_4_active_pane_srt_g1

0xa4f7,	// (0x00042e5f) tabs_4_active_pane_srt_t1_ParamLimits

0xa4f7,	// (0x00042e5f) tabs_4_active_pane_srt_t1

0xe409,	// (0x00046d71) bg_active_tab_pane_g1_cp3_copy1

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp3_copy1

0xe412,	// (0x00046d7a) bg_active_tab_pane_g3_cp3_copy1

0x8a82,	// (0x000413ea) tabs_2_long_active_pane_srt_ParamLimits

0x8a82,	// (0x000413ea) tabs_2_long_active_pane_srt

0x8a82,	// (0x000413ea) tabs_2_long_passive_pane_srt_ParamLimits

0x8a82,	// (0x000413ea) tabs_2_long_passive_pane_srt

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp4_srt

0xe334,	// (0x00046c9c) bg_passive_tab_pane_g1_cp4_srt

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp4_srt

0xe33d,	// (0x00046ca5) bg_passive_tab_pane_g3_cp4_srt

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp4_srt

0xa316,	// (0x00042c7e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa316,	// (0x00042c7e) tabs_2_long_active_pane_srt_t1

0xe334,	// (0x00046c9c) bg_active_tab_pane_g1_cp4_srt

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp4_srt

0xe33d,	// (0x00046ca5) bg_active_tab_pane_g3_cp4_srt

0x8a40,	// (0x000413a8) tabs_3_long_active_pane_srt_ParamLimits

0x8a40,	// (0x000413a8) tabs_3_long_active_pane_srt

0x8a40,	// (0x000413a8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8a40,	// (0x000413a8) tabs_3_long_passive_pane_cp_srt

0x8a40,	// (0x000413a8) tabs_3_long_passive_pane_srt_ParamLimits

0x8a40,	// (0x000413a8) tabs_3_long_passive_pane_srt

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp5_srt

0xca06,	// (0x0004536e) bg_passive_tab_pane_g1_cp5_srt

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp5_srt

0xca0f,	// (0x00045377) bg_passive_tab_pane_g3_cp5_srt

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp5_srt

0xa300,	// (0x00042c68) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa300,	// (0x00042c68) tabs_3_long_active_pane_srt_t1

0xca06,	// (0x0004536e) bg_active_tab_pane_g1_cp5_srt

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp5_srt

0xca0f,	// (0x00045377) bg_active_tab_pane_g3_cp5_srt

0xe326,	// (0x00046c8e) navi_text_pane_srt_t1

0xe31e,	// (0x00046c86) navi_icon_pane_srt_g1

0xce05,	// (0x0004576d) midp_editing_number_pane_srt

0xcd16,	// (0x0004567e) midp_ticker_pane_srt

0xce0d,	// (0x00045775) midp_ticker_pane_srt_g1

0xce15,	// (0x0004577d) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004811f) midp_ticker_pane_srt_g

0xce1d,	// (0x00045785) midp_ticker_pane_srt_t1

0xe30f,	// (0x00046c77) midp_editing_number_pane_t1_copy1

0x91f6,	// (0x00041b5e) listscroll_midp_pane

0x91f6,	// (0x00041b5e) midp_form_pane

0xcd1e,	// (0x00045686) midp_info_popup_window_ParamLimits

0xcd1e,	// (0x00045686) midp_info_popup_window

0xc38c,	// (0x00044cf4) bg_popup_sub_pane_cp50_ParamLimits

0xc38c,	// (0x00044cf4) bg_popup_sub_pane_cp50

0xd5f1,	// (0x00045f59) listscroll_midp_info_pane_ParamLimits

0xd5f1,	// (0x00045f59) listscroll_midp_info_pane

0xd5d9,	// (0x00045f41) listscroll_form_midp_pane_ParamLimits

0xd5d9,	// (0x00045f41) listscroll_form_midp_pane

0xd5e5,	// (0x00045f4d) scroll_bar_cp050

0x9fe1,	// (0x00042949) list_midp_pane

0xecb9,	// (0x00047621) signal_pane_g2_cp

0xd4ff,	// (0x00045e67) listscroll_midp_info_pane_t1_ParamLimits

0xd4ff,	// (0x00045e67) listscroll_midp_info_pane_t1

0xd517,	// (0x00045e7f) listscroll_midp_info_pane_t2_ParamLimits

0xd517,	// (0x00045e7f) listscroll_midp_info_pane_t2

0xd555,	// (0x00045ebd) listscroll_midp_info_pane_t3_ParamLimits

0xd555,	// (0x00045ebd) listscroll_midp_info_pane_t3

0xd58f,	// (0x00045ef7) listscroll_midp_info_pane_t4_ParamLimits

0xd58f,	// (0x00045ef7) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x000481cb) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x000481cb) listscroll_midp_info_pane_t

0xc3f3,	// (0x00044d5b) scroll_pane_cp21

0xd4a3,	// (0x00045e0b) form_midp_field_choice_group_pane

0xd4ac,	// (0x00045e14) form_midp_field_text_pane

0xd4e5,	// (0x00045e4d) form_midp_field_time_pane

0xd4ed,	// (0x00045e55) form_midp_gauge_slider_pane

0xd4f6,	// (0x00045e5e) form_midp_gauge_wait_pane

0x8876,	// (0x000411de) form_midp_image_pane

0x448d,	// (0x0003cdf5) list_single_midp_pane_ParamLimits

0x448d,	// (0x0003cdf5) list_single_midp_pane

0x9fbd,	// (0x00042925) form_midp_field_text_pane_t1

0xd34a,	// (0x00045cb2) input_focus_pane_cp050

0xd492,	// (0x00045dfa) list_midp_form_text_pane

0xd461,	// (0x00045dc9) form_midp_field_choice_group_pane_t1

0xd46f,	// (0x00045dd7) input_focus_pane_cp051

0xd483,	// (0x00045deb) list_midp_choice_pane

0x8876,	// (0x000411de) status_idle_pane

0xd445,	// (0x00045dad) form_midp_field_time_pane_t1

0x8786,	// (0x000410ee) wait_anim_pane_g2_copy1

0xd453,	// (0x00045dbb) form_midp_field_time_pane_t2

0x0001,

0xcd77,	// (0x000456df) aid_navinavi_width_2_pane

0xf85e,	// (0x000481c6) form_midp_field_time_pane_t

0x8876,	// (0x000411de) input_focus_pane_cp052

0x8876,	// (0x000411de) bg_input_focus_pane_cp040

0xd421,	// (0x00045d89) form_midp_gauge_slider_pane_t1

0xd42f,	// (0x00045d97) form_midp_gauge_slider_pane_t2

0x9fa1,	// (0x00042909) form_midp_gauge_slider_pane_t3

0x9faf,	// (0x00042917) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x000481bd) form_midp_gauge_slider_pane_t

0xd43d,	// (0x00045da5) form_midp_slider_pane

0x8a82,	// (0x000413ea) bg_input_focus_pane_cp041_ParamLimits

0x8a82,	// (0x000413ea) bg_input_focus_pane_cp041

0xd3ee,	// (0x00045d56) form_midp_gauge_wait_pane_t1_ParamLimits

0xd3ee,	// (0x00045d56) form_midp_gauge_wait_pane_t1

0xd400,	// (0x00045d68) form_midp_gauge_wait_pane_t2_ParamLimits

0xd400,	// (0x00045d68) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x000481b8) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x000481b8) form_midp_gauge_wait_pane_t

0xd412,	// (0x00045d7a) form_midp_wait_pane_ParamLimits

0xd412,	// (0x00045d7a) form_midp_wait_pane

0xd3b8,	// (0x00045d20) form_midp_image_pane_g1

0xd3c1,	// (0x00045d29) form_midp_image_pane_t1

0xd3d0,	// (0x00045d38) form_midp_image_pane_t2

0xd3df,	// (0x00045d47) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x000481b1) form_midp_image_pane_t

0xd3af,	// (0x00045d17) list_single_midp_pane_g1

0xf0bf,	// (0x00047a27) list_single_midp_pane_t1

0x9f8a,	// (0x000428f2) list_midp_form_item_pane_ParamLimits

0x9f8a,	// (0x000428f2) list_midp_form_item_pane

0xcd31,	// (0x00045699) list_midp_form_item_pane_t1

0xcd40,	// (0x000456a8) midp_ticker_pane_g1

0xcd4c,	// (0x000456b4) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x00048105) midp_ticker_pane_g

0x92a2,	// (0x00041c0a) midp_ticker_pane_t1

0xa47f,	// (0x00042de7) midp_editing_number_pane_t1

0xe39d,	// (0x00046d05) midp_editing_number_pane

0xe3ac,	// (0x00046d14) midp_ticker_pane

0xe2ff,	// (0x00046c67) ai_message_heading_pane

0x8876,	// (0x000411de) bg_popup_window_pane_cp14

0xe307,	// (0x00046c6f) listscroll_ai_message_pane

0xe289,	// (0x00046bf1) ai_message_heading_pane_g1_ParamLimits

0xe289,	// (0x00046bf1) ai_message_heading_pane_g1

0xe295,	// (0x00046bfd) ai_message_heading_pane_g2_ParamLimits

0xe295,	// (0x00046bfd) ai_message_heading_pane_g2

0xe2a1,	// (0x00046c09) ai_message_heading_pane_g3_ParamLimits

0xe2a1,	// (0x00046c09) ai_message_heading_pane_g3

0xe2ad,	// (0x00046c15) ai_message_heading_pane_g4_ParamLimits

0xe2ad,	// (0x00046c15) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x000482f2) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x000482f2) ai_message_heading_pane_g

0xe2b9,	// (0x00046c21) ai_message_heading_pane_t1_ParamLimits

0xe2b9,	// (0x00046c21) ai_message_heading_pane_t1

0xe2d3,	// (0x00046c3b) ai_message_heading_pane_t2_ParamLimits

0xe2d3,	// (0x00046c3b) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x000482fb) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x000482fb) ai_message_heading_pane_t

0xe2e5,	// (0x00046c4d) bg_popup_heading_pane_cp1_ParamLimits

0xe2e5,	// (0x00046c4d) bg_popup_heading_pane_cp1

0xe277,	// (0x00046bdf) list_ai_message_pane_ParamLimits

0xe277,	// (0x00046bdf) list_ai_message_pane

0xc3f3,	// (0x00044d5b) scroll_pane_cp10

0xe213,	// (0x00046b7b) list_ai_message_pane_g1

0xe21b,	// (0x00046b83) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x000482cf) list_ai_message_pane_g

0xe223,	// (0x00046b8b) list_ai_message_pane_t1_ParamLimits

0xe223,	// (0x00046b8b) list_ai_message_pane_t1

0xe238,	// (0x00046ba0) list_ai_message_pane_t2_ParamLimits

0xe238,	// (0x00046ba0) list_ai_message_pane_t2

0xe24d,	// (0x00046bb5) list_ai_message_pane_t3_ParamLimits

0xe24d,	// (0x00046bb5) list_ai_message_pane_t3

0xe262,	// (0x00046bca) list_ai_message_pane_t4_ParamLimits

0xe262,	// (0x00046bca) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x000482d4) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x000482d4) list_ai_message_pane_t

0xa2db,	// (0x00042c43) cell_ai_soft_ind_pane_ParamLimits

0xa2db,	// (0x00042c43) cell_ai_soft_ind_pane

0xcd58,	// (0x000456c0) cell_ai_soft_ind_pane_g1_ParamLimits

0xcd58,	// (0x000456c0) cell_ai_soft_ind_pane_g1

0x8876,	// (0x000411de) grid_highlight_cp1

0xcd65,	// (0x000456cd) text_secondary_cp56_ParamLimits

0xcd65,	// (0x000456cd) text_secondary_cp56

0xe1e8,	// (0x00046b50) example_general_pane_ParamLimits

0xe1e8,	// (0x00046b50) example_general_pane

0xe1f4,	// (0x00046b5c) example_parent_pane_g1_ParamLimits

0xe1f4,	// (0x00046b5c) example_parent_pane_g1

0xe200,	// (0x00046b68) example_parent_pane_t1_ParamLimits

0xe200,	// (0x00046b68) example_parent_pane_t1

0x97eb,	// (0x00042153) popup_preview_text_window_ParamLimits

0x97eb,	// (0x00042153) popup_preview_text_window

0xcc45,	// (0x000455ad) list_single_pane_cp2_g4

0x8df8,	// (0x00041760) bg_popup_preview_window_pane_ParamLimits

0x8df8,	// (0x00041760) bg_popup_preview_window_pane

0xdf87,	// (0x000468ef) popup_preview_text_window_t1_ParamLimits

0xdf87,	// (0x000468ef) popup_preview_text_window_t1

0xdfa5,	// (0x0004690d) popup_preview_text_window_t2_ParamLimits

0xdfa5,	// (0x0004690d) popup_preview_text_window_t2

0xdfee,	// (0x00046956) popup_preview_text_window_t3_ParamLimits

0xdfee,	// (0x00046956) popup_preview_text_window_t3

0xe033,	// (0x0004699b) popup_preview_text_window_t4_ParamLimits

0xe033,	// (0x0004699b) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x000482a3) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x000482a3) popup_preview_text_window_t

0xe0b1,	// (0x00046a19) scroll_pane_cp11

0xd25a,	// (0x00045bc2) bg_popup_preview_window_pane_g1

0xdf47,	// (0x000468af) bg_popup_preview_window_pane_g2

0xdf4f,	// (0x000468b7) bg_popup_preview_window_pane_g3

0xdf57,	// (0x000468bf) bg_popup_preview_window_pane_g4

0xdf5f,	// (0x000468c7) bg_popup_preview_window_pane_g5

0xdf67,	// (0x000468cf) bg_popup_preview_window_pane_g6

0xdf6f,	// (0x000468d7) bg_popup_preview_window_pane_g7

0xdf77,	// (0x000468df) bg_popup_preview_window_pane_g8

0x5a50,	// (0x0003e3b8) aid_popup_width_pane

0x9767,	// (0x000420cf) popup_midp_note_alarm_window_ParamLimits

0x9767,	// (0x000420cf) popup_midp_note_alarm_window

0xc2d4,	// (0x00044c3c) data_form_pane_ParamLimits

0x431c,	// (0x0003cc84) form_field_data_pane_g1

0x4326,	// (0x0003cc8e) form_field_data_pane_t1_ParamLimits

0xc2e0,	// (0x00044c48) input_focus_pane_ParamLimits

0xc2ee,	// (0x00044c56) data_form_wide_pane_ParamLimits

0xefe1,	// (0x00047949) form_field_data_wide_pane_g1

0xefed,	// (0x00047955) form_field_data_wide_pane_t1_ParamLimits

0xc043,	// (0x000449ab) input_focus_pane_cp6_ParamLimits

0x9027,	// (0x0004198f) input_popup_find_pane_g1_ParamLimits

0x9027,	// (0x0004198f) input_popup_find_pane_g1

0x5fac,	// (0x0003e914) aid_navi_side_left_pane

0x5fc1,	// (0x0003e929) aid_navi_side_right_pane

0xda4c,	// (0x000463b4) bg_popup_window_pane_cp30_ParamLimits

0xda4c,	// (0x000463b4) bg_popup_window_pane_cp30

0xdac6,	// (0x0004642e) popup_midp_note_alarm_window_g1_ParamLimits

0xdac6,	// (0x0004642e) popup_midp_note_alarm_window_g1

0xdaf6,	// (0x0004645e) popup_midp_note_alarm_window_t1_ParamLimits

0xdaf6,	// (0x0004645e) popup_midp_note_alarm_window_t1

0xdb97,	// (0x000464ff) popup_midp_note_alarm_window_t2_ParamLimits

0xdb97,	// (0x000464ff) popup_midp_note_alarm_window_t2

0xdc45,	// (0x000465ad) popup_midp_note_alarm_window_t3_ParamLimits

0xdc45,	// (0x000465ad) popup_midp_note_alarm_window_t3

0xdc6d,	// (0x000465d5) popup_midp_note_alarm_window_t4_ParamLimits

0xdc6d,	// (0x000465d5) popup_midp_note_alarm_window_t4

0xdc8d,	// (0x000465f5) popup_midp_note_alarm_window_t5_ParamLimits

0xdc8d,	// (0x000465f5) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x00048240) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x00048240) popup_midp_note_alarm_window_t

0xdd39,	// (0x000466a1) wait_bar_pane_cp1_ParamLimits

0xdd39,	// (0x000466a1) wait_bar_pane_cp1

0x8876,	// (0x000411de) wait_anim_pane_copy1

0x8876,	// (0x000411de) wait_border_pane_copy1

0xd764,	// (0x000460cc) wait_border_pane_g1_copy1

0xf007,	// (0x0004796f) form_field_popup_pane_g1

0x4340,	// (0x0003cca8) form_field_popup_pane_t1_ParamLimits

0xc2e0,	// (0x00044c48) input_focus_pane_cp7_ParamLimits

0xc30e,	// (0x00044c76) list_form_pane_ParamLimits

0xf00f,	// (0x00047977) form_field_popup_wide_pane_g1

0xf017,	// (0x0004797f) form_field_popup_wide_pane_t1_ParamLimits

0xc2e0,	// (0x00044c48) input_focus_pane_cp8_ParamLimits

0xc31a,	// (0x00044c82) list_form_wide_pane_ParamLimits

0xe442,	// (0x00046daa) aid_size_cell_graphic_pane

0x43bf,	// (0x0003cd27) data_form_pane_t1_ParamLimits

0x44ba,	// (0x0003ce22) data_form_wide_pane_t1_ParamLimits

0x9ba0,	// (0x00042508) bg_status_flat_pane

0x897c,	// (0x000412e4) title_pane_t1_ParamLimits

0x8a08,	// (0x00041370) title_pane_t2_ParamLimits

0x8a2e,	// (0x00041396) title_pane_t3_ParamLimits

0xf59b,	// (0x00047f03) title_pane_t_ParamLimits

0xc79c,	// (0x00045104) level_1_signal_ParamLimits

0xc7a9,	// (0x00045111) level_2_signal_ParamLimits

0xc7b6,	// (0x0004511e) level_3_signal_ParamLimits

0xc7c3,	// (0x0004512b) level_4_signal_ParamLimits

0xc7d0,	// (0x00045138) level_5_signal_ParamLimits

0xc7dd,	// (0x00045145) level_6_signal_ParamLimits

0xc7ea,	// (0x00045152) level_7_signal_ParamLimits

0xc79c,	// (0x00045104) level_1_battery_ParamLimits

0xc7a9,	// (0x00045111) level_2_battery_ParamLimits

0xc7b6,	// (0x0004511e) level_3_battery_ParamLimits

0xc7c3,	// (0x0004512b) level_4_battery_ParamLimits

0xc7d0,	// (0x00045138) level_5_battery_ParamLimits

0xc7dd,	// (0x00045145) level_6_battery_ParamLimits

0xc7ea,	// (0x00045152) level_7_battery_ParamLimits

0xd96f,	// (0x000462d7) bg_status_flat_pane_g1

0xd977,	// (0x000462df) bg_status_flat_pane_g2

0xd97f,	// (0x000462e7) bg_status_flat_pane_g3

0xd987,	// (0x000462ef) bg_status_flat_pane_g4

0xd98f,	// (0x000462f7) bg_status_flat_pane_g5

0xd997,	// (0x000462ff) bg_status_flat_pane_g6

0xd99f,	// (0x00046307) bg_status_flat_pane_g7

0x8a56,	// (0x000413be) tabs_3_active_pane_t1_ParamLimits

0x8a56,	// (0x000413be) tabs_3_passive_pane_t1_ParamLimits

0x8a70,	// (0x000413d8) tabs_4_active_pane_t1_ParamLimits

0x8a70,	// (0x000413d8) tabs_4_1_passive_pane_t1_ParamLimits

0x903d,	// (0x000419a5) tabs_2_active_pane_t1_ParamLimits

0x903d,	// (0x000419a5) tabs_2_passive_pane_t1_ParamLimits

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp4_ParamLimits

0x904f,	// (0x000419b7) tabs_2_long_active_pane_t1_ParamLimits

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp4_ParamLimits

0x6517,	// (0x0003ee7f) list_single_midp_graphic_pane_t1_ParamLimits

0x8a82,	// (0x000413ea) bg_active_tab_pane_cp5_ParamLimits

0x9062,	// (0x000419ca) tabs_3_long_active_pane_t1_ParamLimits

0xc42b,	// (0x00044d93) bg_passive_tab_pane_cp5_ParamLimits

0x6517,	// (0x0003ee7f) list_single_midp_graphic_pane_t1

0x9ba0,	// (0x00042508) bg_status_flat_pane_ParamLimits

0xd12d,	// (0x00045a95) indicator_pane_cp2_ParamLimits

0xd12d,	// (0x00045a95) indicator_pane_cp2

0x9d17,	// (0x0004267f) navi_pane_srt_ParamLimits

0x9d17,	// (0x0004267f) navi_pane_srt

0xd155,	// (0x00045abd) popup_clock_digital_analogue_window_cp1

0x8b92,	// (0x000414fa) indicator_pane_t1

0xcd16,	// (0x0004567e) copy_highlight_pane

0xcd16,	// (0x0004567e) cursor_graphics_pane

0xcd16,	// (0x0004567e) graphic_within_text_pane

0xcd16,	// (0x0004567e) link_highlight_pane

0xe074,	// (0x000469dc) popup_preview_text_window_t5_ParamLimits

0xe074,	// (0x000469dc) popup_preview_text_window_t5

0xcd7f,	// (0x000456e7) cursor_digital_pane

0xcd7f,	// (0x000456e7) cursor_primary_pane

0xcd90,	// (0x000456f8) cursor_primary_small_pane

0xcd98,	// (0x00045700) cursor_secondary_pane

0xcda0,	// (0x00045708) cursor_title_pane

0xcd7f,	// (0x000456e7) link_highlight_digital_pane

0xcd87,	// (0x000456ef) link_highlight_primary_pane

0xcd90,	// (0x000456f8) link_highlight_primary_small_pane

0xcd98,	// (0x00045700) link_highlight_secondary_pane

0xcda0,	// (0x00045708) link_highlight_title_pane

0xcd7f,	// (0x000456e7) copy_highlight_digital_pane

0xcd7f,	// (0x000456e7) copy_highlight_primary_pane

0xcd90,	// (0x000456f8) copy_highlight_primary_small_pane

0xcd98,	// (0x00045700) copy_highlight_secondary_pane

0xcda0,	// (0x00045708) copy_highlight_title_pane

0xcd98,	// (0x00045700) graphic_text_digital_pane

0xd9ef,	// (0x00046357) graphic_text_primary_pane

0xd9f8,	// (0x00046360) graphic_text_primary_small_pane

0xcd90,	// (0x000456f8) graphic_text_secondary_pane

0xcd7f,	// (0x000456e7) graphic_text_title_pane

0x92b4,	// (0x00041c1c) cursor_primary_pane_g1

0xd9e1,	// (0x00046349) cursor_text_primary_t1

0xa021,	// (0x00042989) cursor_primary_small_pane_g1

0xd9d3,	// (0x0004633b) cursor_text_primary_small_t1

0xa017,	// (0x0004297f) cursor_primary_small_pane_g1_copy1

0xd9c5,	// (0x0004632d) cursor_text_primary_small_t1_copy1

0xd9b7,	// (0x0004631f) cursor_text_title_t1

0xa00d,	// (0x00042975) cursor_title_pane_g1

0x92b4,	// (0x00041c1c) cursor_digital_pane_g1

0xcda8,	// (0x00045710) cursor_text_digital_t1

0xd958,	// (0x000462c0) link_highlight_primary_pane_g1

0xd960,	// (0x000462c8) link_highlight_primary_pane_t1

0xcdb6,	// (0x0004571e) link_highlight_primary_small_pane_g1

0xcdbe,	// (0x00045726) link_highlight_primary_small_pane_t1

0xcdb6,	// (0x0004571e) link_highlight_secondary_pane_g1

0xcdcd,	// (0x00045735) link_highlight_secondary_pane_t1

0xd8cc,	// (0x00046234) link_highlight_title_pane_g1

0xd8d4,	// (0x0004623c) link_highlight_title_pane_t1

0xd8b5,	// (0x0004621d) link_highlight_digital_pane_g1

0xd8bd,	// (0x00046225) link_highlight_digital_pane_t1

0xd7a9,	// (0x00046111) copy_highlight_primary_pane_g1

0xd7b1,	// (0x00046119) copy_highlight_primary_pane_t1

0xd783,	// (0x000460eb) copy_highlight_primary_small_pane_g1

0xd79a,	// (0x00046102) copy_highlight_primary_small_pane_t1

0xcddc,	// (0x00045744) copy_highlight_secondary_pane_g1

0xcde4,	// (0x0004574c) copy_highlight_secondary_pane_t1

0xd783,	// (0x000460eb) copy_highlight_title_pane_g1

0xd78b,	// (0x000460f3) copy_highlight_title_pane_t1

0xd7a9,	// (0x00046111) copy_highlight_digital_pane_g1

0xe5cc,	// (0x00046f34) copy_highlight_digital_pane_t1

0xe520,	// (0x00046e88) graphic_text_primary_pane_g1

0xe5b0,	// (0x00046f18) graphic_text_primary_pane_t1

0xe5be,	// (0x00046f26) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0004836f) graphic_text_primary_pane_t

0xe58c,	// (0x00046ef4) graphic_text_primary_small_pane_g1

0xe594,	// (0x00046efc) graphic_text_primary_small_pane_t1

0xe5a2,	// (0x00046f0a) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0004836a) graphic_text_primary_small_pane_t

0xe568,	// (0x00046ed0) graphic_text_secondary_pane_g1

0xe570,	// (0x00046ed8) graphic_text_secondary_pane_t1

0xe57e,	// (0x00046ee6) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x00048365) graphic_text_secondary_pane_t

0xe544,	// (0x00046eac) graphic_text_title_pane_g1

0xe54c,	// (0x00046eb4) graphic_text_title_pane_t1

0xe55a,	// (0x00046ec2) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x00048360) graphic_text_title_pane_t

0xe520,	// (0x00046e88) graphic_text_digital_pane_g1

0xe528,	// (0x00046e90) graphic_text_digital_pane_t1

0xe536,	// (0x00046e9e) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0004835b) graphic_text_digital_pane_t

0x8a82,	// (0x000413ea) navi_icon_pane_srt_ParamLimits

0x8a82,	// (0x000413ea) navi_icon_pane_srt

0x8876,	// (0x000411de) navi_midp_pane_srt

0x8876,	// (0x000411de) navi_navi_pane_srt

0x8a82,	// (0x000413ea) navi_text_pane_srt_ParamLimits

0x8a82,	// (0x000413ea) navi_text_pane_srt

0xe4eb,	// (0x00046e53) navi_navi_icon_text_pane_srt

0xe4f3,	// (0x00046e5b) navi_navi_pane_srt_g1_ParamLimits

0xe4f3,	// (0x00046e5b) navi_navi_pane_srt_g1

0xe505,	// (0x00046e6d) navi_navi_pane_srt_g2_ParamLimits

0xe505,	// (0x00046e6d) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x00048356) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x00048356) navi_navi_pane_srt_g

0xe517,	// (0x00046e7f) navi_navi_tabs_pane_srt

0xe4eb,	// (0x00046e53) navi_navi_text_pane_srt

0xe4eb,	// (0x00046e53) navi_navi_volume_pane_srt

0xe4dc,	// (0x00046e44) navi_navi_text_pane_srt_t1

0x6897,	// (0x0003f1ff) navi_navi_volume_pane_srt_g1

0x689f,	// (0x0003f207) volume_small_pane_srt_ParamLimits

0x689f,	// (0x0003f207) volume_small_pane_srt

0x628c,	// (0x0003ebf4) volume_small_pane_srt_g1_ParamLimits

0x628c,	// (0x0003ebf4) volume_small_pane_srt_g1

0x629c,	// (0x0003ec04) volume_small_pane_srt_g2_ParamLimits

0x629c,	// (0x0003ec04) volume_small_pane_srt_g2

0x62ad,	// (0x0003ec15) volume_small_pane_srt_g3_ParamLimits

0x62ad,	// (0x0003ec15) volume_small_pane_srt_g3

0x62be,	// (0x0003ec26) volume_small_pane_srt_g4_ParamLimits

0x62be,	// (0x0003ec26) volume_small_pane_srt_g4

0x62cf,	// (0x0003ec37) volume_small_pane_srt_g5_ParamLimits

0x62cf,	// (0x0003ec37) volume_small_pane_srt_g5

0x62e0,	// (0x0003ec48) volume_small_pane_srt_g6_ParamLimits

0x62e0,	// (0x0003ec48) volume_small_pane_srt_g6

0x62f1,	// (0x0003ec59) volume_small_pane_srt_g7_ParamLimits

0x62f1,	// (0x0003ec59) volume_small_pane_srt_g7

0x6302,	// (0x0003ec6a) volume_small_pane_srt_g8_ParamLimits

0x6302,	// (0x0003ec6a) volume_small_pane_srt_g8

0x6313,	// (0x0003ec7b) volume_small_pane_srt_g9_ParamLimits

0x6313,	// (0x0003ec7b) volume_small_pane_srt_g9

0x6324,	// (0x0003ec8c) volume_small_pane_srt_g10_ParamLimits

0x6324,	// (0x0003ec8c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0004810a) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0004810a) volume_small_pane_srt_g

0x8ea1,	// (0x00041809) query_popup_data_pane_cp2

0xe4c2,	// (0x00046e2a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe4c2,	// (0x00046e2a) navi_navi_icon_text_pane_srt_t1

0xd9ef,	// (0x00046357) navi_tabs_2_long_pane_srt

0xd9ef,	// (0x00046357) navi_tabs_2_pane_srt

0xd9ef,	// (0x00046357) navi_tabs_3_long_pane_srt

0xd9ef,	// (0x00046357) navi_tabs_3_pane_srt

0xd9ef,	// (0x00046357) navi_tabs_4_pane_srt

0x6877,	// (0x0003f1df) tabs_2_active_pane_srt_ParamLimits

0x6877,	// (0x0003f1df) tabs_2_active_pane_srt

0x6887,	// (0x0003f1ef) tabs_2_passive_pane_srt_ParamLimits

0x6887,	// (0x0003f1ef) tabs_2_passive_pane_srt

0xd34a,	// (0x00045cb2) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd34a,	// (0x00045cb2) bg_passive_tab_pane_cp1_srt

0xe4a0,	// (0x00046e08) bg_passive_tab_pane_g1_cp1_srt

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp1_srt

0xe4a9,	// (0x00046e11) bg_passive_tab_pane_g3_cp1_srt

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp1_srt_ParamLimits

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp1_srt

0xe4b2,	// (0x00046e1a) tabs_2_active_pane_srt_g1

0xa574,	// (0x00042edc) tabs_2_active_pane_srt_t1_ParamLimits

0xa574,	// (0x00042edc) tabs_2_active_pane_srt_t1

0xe4a0,	// (0x00046e08) bg_active_tab_pane_g1_cp1_srt

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp1_srt

0xe4a9,	// (0x00046e11) bg_active_tab_pane_g3_cp1_srt

0x6844,	// (0x0003f1ac) tabs_3_active_pane_srt_ParamLimits

0x6844,	// (0x0003f1ac) tabs_3_active_pane_srt

0x6855,	// (0x0003f1bd) tabs_3_passive_pane_cp_srt_ParamLimits

0x6855,	// (0x0003f1bd) tabs_3_passive_pane_cp_srt

0x6866,	// (0x0003f1ce) tabs_3_passive_pane_srt_ParamLimits

0x6866,	// (0x0003f1ce) tabs_3_passive_pane_srt

0xd34a,	// (0x00045cb2) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd34a,	// (0x00045cb2) bg_passive_tab_pane_cp2_srt

0xcdf3,	// (0x0004575b) bg_passive_tab_pane_g1_cp2_srt

0xc9bf,	// (0x00045327) bg_passive_tab_pane_g2_cp2_srt

0xcdfc,	// (0x00045764) bg_passive_tab_pane_g3_cp2_srt

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp2_srt_ParamLimits

0x8a40,	// (0x000413a8) bg_active_tab_pane_cp2_srt

0xe498,	// (0x00046e00) tabs_3_active_pane_srt_g1

0xa55e,	// (0x00042ec6) tabs_3_active_pane_srt_t1_ParamLimits

0xa55e,	// (0x00042ec6) tabs_3_active_pane_srt_t1

0xcdf3,	// (0x0004575b) bg_active_tab_pane_g1_cp2_srt

0xc9bf,	// (0x00045327) bg_active_tab_pane_g2_cp2_srt

0xcdfc,	// (0x00045764) bg_active_tab_pane_g3_cp2_srt

0x67fc,	// (0x0003f164) tabs_4_active_pane_srt_ParamLimits

0x67fc,	// (0x0003f164) tabs_4_active_pane_srt

0x680e,	// (0x0003f176) tabs_4_passive_pane_cp2_srt_ParamLimits

0x680e,	// (0x0003f176) tabs_4_passive_pane_cp2_srt

0xcf20,	// (0x00045888) aid_size_cell_toolbar

0xcf62,	// (0x000458ca) main_idle_act_pane_ParamLimits

0xcff4,	// (0x0004595c) popup_large_graphic_colour_window_ParamLimits

0x9a6b,	// (0x000423d3) popup_toolbar_window_ParamLimits

0x9a6b,	// (0x000423d3) popup_toolbar_window

0xe3bf,	// (0x00046d27) list_single_graphic_2heading_pane_ParamLimits

0xe3bf,	// (0x00046d27) list_single_graphic_2heading_pane

0xc5d5,	// (0x00044f3d) aid_size_cell_apps_grid_lsc_pane

0xc5e7,	// (0x00044f4f) aid_size_cell_apps_grid_prt_pane

0xc42b,	// (0x00044d93) bg_wml_button_pane_cp1_ParamLimits

0xc42b,	// (0x00044d93) bg_wml_button_pane_cp1

0x9fbd,	// (0x00042925) form_midp_field_text_pane_t1_ParamLimits

0xd34a,	// (0x00045cb2) input_focus_pane_cp050_ParamLimits

0xd492,	// (0x00045dfa) list_midp_form_text_pane_ParamLimits

0xd46f,	// (0x00045dd7) input_focus_pane_cp051_ParamLimits

0xd483,	// (0x00045deb) list_midp_choice_pane_ParamLimits

0x9f52,	// (0x000428ba) list_single_2graphic_pane_cp3_ParamLimits

0x9f52,	// (0x000428ba) list_single_2graphic_pane_cp3

0x9f68,	// (0x000428d0) list_single_midp_graphic_pane_ParamLimits

0x9f68,	// (0x000428d0) list_single_midp_graphic_pane

0x59d8,	// (0x0003e340) list_single_graphic_2heading_pane_g1_ParamLimits

0x59d8,	// (0x0003e340) list_single_graphic_2heading_pane_g1

0x59e4,	// (0x0003e34c) list_single_graphic_2heading_pane_g4_ParamLimits

0x59e4,	// (0x0003e34c) list_single_graphic_2heading_pane_g4

0x59f0,	// (0x0003e358) list_single_graphic_2heading_pane_g5_ParamLimits

0x59f0,	// (0x0003e358) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004815d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004815d) list_single_graphic_2heading_pane_g

0x59fc,	// (0x0003e364) list_single_graphic_2heading_pane_t1_ParamLimits

0x59fc,	// (0x0003e364) list_single_graphic_2heading_pane_t1

0x5a10,	// (0x0003e378) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a10,	// (0x0003e378) list_single_graphic_2heading_pane_t2

0x5a2c,	// (0x0003e394) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a2c,	// (0x0003e394) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x00048164) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x00048164) list_single_graphic_2heading_pane_t

0xd198,	// (0x00045b00) bg_popup_sub_pane_cp2

0xd1c2,	// (0x00045b2a) grid_toobar_pane

0x6488,	// (0x0003edf0) cell_toolbar_pane_ParamLimits

0x6488,	// (0x0003edf0) cell_toolbar_pane

0xd1fe,	// (0x00045b66) cell_toolbar_pane_g1_ParamLimits

0xd1fe,	// (0x00045b66) cell_toolbar_pane_g1

0xd212,	// (0x00045b7a) cell_toolbar_pane_g2_ParamLimits

0xd212,	// (0x00045b7a) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x00048172) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x00048172) cell_toolbar_pane_g

0xd234,	// (0x00045b9c) grid_highlight_pane_cp2_ParamLimits

0xd234,	// (0x00045b9c) grid_highlight_pane_cp2

0xd24e,	// (0x00045bb6) toolbar_button_pane

0xd25a,	// (0x00045bc2) toolbar_button_pane_g1

0xd262,	// (0x00045bca) toolbar_button_pane_g2

0xd26a,	// (0x00045bd2) toolbar_button_pane_g3

0xd272,	// (0x00045bda) toolbar_button_pane_g4

0xd27a,	// (0x00045be2) toolbar_button_pane_g5

0xd282,	// (0x00045bea) toolbar_button_pane_g6

0xd28a,	// (0x00045bf2) toolbar_button_pane_g7

0xd292,	// (0x00045bfa) toolbar_button_pane_g8

0xd29a,	// (0x00045c02) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x00048177) toolbar_button_pane_g

0x64c0,	// (0x0003ee28) list_single_2graphic_pane_g1_cp3_ParamLimits

0x64c0,	// (0x0003ee28) list_single_2graphic_pane_g1_cp3

0x9eb4,	// (0x0004281c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9eb4,	// (0x0004281c) list_single_2graphic_pane_g2_cp3

0x64dd,	// (0x0003ee45) list_single_2graphic_pane_g3_cp3

0x64e5,	// (0x0003ee4d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x64e5,	// (0x0003ee4d) list_single_2graphic_pane_g4_cp3

0x64f1,	// (0x0003ee59) list_single_2graphic_pane_t1_cp3_ParamLimits

0x64f1,	// (0x0003ee59) list_single_2graphic_pane_t1_cp3

0x650b,	// (0x0003ee73) list_single_midp_graphic_pane_g2_ParamLimits

0x650b,	// (0x0003ee73) list_single_midp_graphic_pane_g2

0xf05b,	// (0x000479c3) aid_zoom_text_primary

0xf063,	// (0x000479cb) aid_zoom_text_secondary

0xceb0,	// (0x00045818) status_small_pane_g7_ParamLimits

0xceb0,	// (0x00045818) status_small_pane_g7

0xced3,	// (0x0004583b) status_small_pane_t1_ParamLimits

0x894c,	// (0x000412b4) title_pane_g2

0x0003,

0xf592,	// (0x00047efa) title_pane_g

0x8f2a,	// (0x00041892) aid_size_cell_colour_1_pane_ParamLimits

0x8f2a,	// (0x00041892) aid_size_cell_colour_1_pane

0x8f3e,	// (0x000418a6) aid_size_cell_colour_2_pane_ParamLimits

0x8f3e,	// (0x000418a6) aid_size_cell_colour_2_pane

0x8f52,	// (0x000418ba) aid_size_cell_colour_3_pane_ParamLimits

0x8f52,	// (0x000418ba) aid_size_cell_colour_3_pane

0x8f66,	// (0x000418ce) aid_size_cell_colour_4_pane_ParamLimits

0x8f66,	// (0x000418ce) aid_size_cell_colour_4_pane

0x5ee8,	// (0x0003e850) title_pane_stacon_g1_ParamLimits

0x5ee8,	// (0x0003e850) title_pane_stacon_g1

0xd808,	// (0x00046170) popup_note_wait_window_g3_ParamLimits

0xd808,	// (0x00046170) popup_note_wait_window_g3

0xd87e,	// (0x000461e6) popup_note_wait_window_t5_ParamLimits

0xd87e,	// (0x000461e6) popup_note_wait_window_t5

0x8876,	// (0x000411de) main_feb_china_hwr_fs_writing_pane

0x9493,	// (0x00041dfb) popup_feb_china_hwr_fs_window_ParamLimits

0x9493,	// (0x00041dfb) popup_feb_china_hwr_fs_window

0x9ec5,	// (0x0004282d) aid_size_cell_hwr_fs_ParamLimits

0x9ec5,	// (0x0004282d) aid_size_cell_hwr_fs

0xd34a,	// (0x00045cb2) bg_popup_sub_pane_cp3_ParamLimits

0xd34a,	// (0x00045cb2) bg_popup_sub_pane_cp3

0x9eda,	// (0x00042842) grid_hwr_fs_pane_ParamLimits

0x9eda,	// (0x00042842) grid_hwr_fs_pane

0x655a,	// (0x0003eec2) linegrid_hwr_fs_pane_ParamLimits

0x655a,	// (0x0003eec2) linegrid_hwr_fs_pane

0x9ef2,	// (0x0004285a) cell_hwr_fs_pane_ParamLimits

0x9ef2,	// (0x0004285a) cell_hwr_fs_pane

0xd356,	// (0x00045cbe) linegrid_hwr_fs_pane_g1_ParamLimits

0xd356,	// (0x00045cbe) linegrid_hwr_fs_pane_g1

0x9f18,	// (0x00042880) linegrid_hwr_fs_pane_g2_ParamLimits

0x9f18,	// (0x00042880) linegrid_hwr_fs_pane_g2

0xd362,	// (0x00045cca) linegrid_hwr_fs_pane_g3_ParamLimits

0xd362,	// (0x00045cca) linegrid_hwr_fs_pane_g3

0x658c,	// (0x0003eef4) linegrid_hwr_fs_pane_g4_ParamLimits

0x658c,	// (0x0003eef4) linegrid_hwr_fs_pane_g4

0x65a6,	// (0x0003ef0e) linegrid_hwr_fs_pane_g5_ParamLimits

0x65a6,	// (0x0003ef0e) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0004819d) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0004819d) linegrid_hwr_fs_pane_g

0xd36e,	// (0x00045cd6) cell_hwr_fs_pane_g1_ParamLimits

0xd36e,	// (0x00045cd6) cell_hwr_fs_pane_g1

0xd166,	// (0x00045ace) cell_hwr_fs_pane_g2_ParamLimits

0xd166,	// (0x00045ace) cell_hwr_fs_pane_g2

0x9f2a,	// (0x00042892) cell_hwr_fs_pane_g3_ParamLimits

0x9f2a,	// (0x00042892) cell_hwr_fs_pane_g3

0x9f37,	// (0x0004289f) cell_hwr_fs_pane_g4_ParamLimits

0x9f37,	// (0x0004289f) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x000481a8) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x000481a8) cell_hwr_fs_pane_g

0x9f44,	// (0x000428ac) cell_hwr_fs_pane_t1

0x8876,	// (0x000411de) grid_highlight_pane_cp6

0x8876,	// (0x000411de) main_idle_act2_pane

0xc3da,	// (0x00044d42) aid_inside_area_popup_secondary

0xa17d,	// (0x00042ae5) aid_inside_area_window_primary_ParamLimits

0xa17d,	// (0x00042ae5) aid_inside_area_window_primary

0xe5db,	// (0x00046f43) ai2_news_ticker_pane

0xe5e3,	// (0x00046f4b) aid_size_cell_ai1_link_ParamLimits

0xe5e3,	// (0x00046f4b) aid_size_cell_ai1_link

0xe5fd,	// (0x00046f65) popup_ai2_data_window_ParamLimits

0xe5fd,	// (0x00046f65) popup_ai2_data_window

0xe611,	// (0x00046f79) popup_ai2_link_window_ParamLimits

0xe611,	// (0x00046f79) popup_ai2_link_window

0xd34a,	// (0x00045cb2) bg_popup_sub_pane_cp4_ParamLimits

0xd34a,	// (0x00045cb2) bg_popup_sub_pane_cp4

0xe625,	// (0x00046f8d) grid_ai2_link_pane_ParamLimits

0xe625,	// (0x00046f8d) grid_ai2_link_pane

0xe63c,	// (0x00046fa4) popup_ai2_link_window_g1_ParamLimits

0xe63c,	// (0x00046fa4) popup_ai2_link_window_g1

0xe648,	// (0x00046fb0) popup_ai2_link_window_g2_ParamLimits

0xe648,	// (0x00046fb0) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x00048374) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x00048374) popup_ai2_link_window_g

0xe657,	// (0x00046fbf) ai2_mp_button_pane

0xe65f,	// (0x00046fc7) ai2_mp_volume_pane

0xd46f,	// (0x00045dd7) bg_popup_sub_pane_cp5_ParamLimits

0xd46f,	// (0x00045dd7) bg_popup_sub_pane_cp5

0xe667,	// (0x00046fcf) heading_ai2_gene_pane_ParamLimits

0xe667,	// (0x00046fcf) heading_ai2_gene_pane

0xe673,	// (0x00046fdb) list_ai2_gene_pane_ParamLimits

0xe673,	// (0x00046fdb) list_ai2_gene_pane

0xe6bb,	// (0x00047023) cell_ai2_link_pane_ParamLimits

0xe6bb,	// (0x00047023) cell_ai2_link_pane

0xe6d1,	// (0x00047039) cell_ai2_link_pane_g1

0x8876,	// (0x000411de) grid_highlight_pane_cp7

0x68b4,	// (0x0003f21c) ai2_mp_volume_pane_g1

0xe7a2,	// (0x0004710a) ai2_mp_volume_pane_g2

0xe717,	// (0x0004707f) list_ai2_gene_pane_t1

0xe7aa,	// (0x00047112) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0004838d) ai2_mp_volume_pane_g

0x68bc,	// (0x0003f224) volume_small_pane_cp3

0xe7b2,	// (0x0004711a) aid_size_cell_ai2_button

0xe7ba,	// (0x00047122) grid_ai2_button_pane

0xe7c3,	// (0x0004712b) cell_ai2_button_pane_ParamLimits

0xe7c3,	// (0x0004712b) cell_ai2_button_pane

0x8786,	// (0x000410ee) cell_ai2_button_pane_g1

0x8876,	// (0x000411de) grid_highlight_pane_cp8

0xe762,	// (0x000470ca) ai2_gene_pane_t1_ParamLimits

0xe762,	// (0x000470ca) ai2_gene_pane_t1

0x9425,	// (0x00041d8d) aid_height_parent_landscape

0xa32d,	// (0x00042c95) aid_height_set_list

0xcf62,	// (0x000458ca) aid_size_parent

0xe442,	// (0x00046daa) aid_size_cell_graphic_pane_ParamLimits

0xe683,	// (0x00046feb) popup_ai2_data_window_g1_ParamLimits

0xe683,	// (0x00046feb) popup_ai2_data_window_g1

0xe68f,	// (0x00046ff7) ai2_news_ticker_pane_g1

0xe697,	// (0x00046fff) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x00048379) ai2_news_ticker_pane_g

0xe69f,	// (0x00047007) ai2_news_ticker_pane_t1

0xe6ad,	// (0x00047015) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0004837e) ai2_news_ticker_pane_t

0xe6da,	// (0x00047042) heading_ai2_gene_pane_g1

0xe6e2,	// (0x0004704a) heading_ai2_gene_pane_t1_ParamLimits

0xe6e2,	// (0x0004704a) heading_ai2_gene_pane_t1

0xe6f7,	// (0x0004705f) list_highlight_pane_cp6

0xe6ff,	// (0x00047067) ai2_gene_pane_ParamLimits

0xe6ff,	// (0x00047067) ai2_gene_pane

0xe725,	// (0x0004708d) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x00048383) list_ai2_gene_pane_t

0xe733,	// (0x0004709b) list_highlight_pane_cp8_ParamLimits

0xe733,	// (0x0004709b) list_highlight_pane_cp8

0xe744,	// (0x000470ac) ai2_gene_pane_g1_ParamLimits

0xe744,	// (0x000470ac) ai2_gene_pane_g1

0xe756,	// (0x000470be) ai2_gene_pane_g2_ParamLimits

0xe756,	// (0x000470be) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x00048388) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x00048388) ai2_gene_pane_g

0xc25e,	// (0x00044bc6) scroll_pane_cp12

0x93e2,	// (0x00041d4a) control_pane_t3_ParamLimits

0x93e2,	// (0x00041d4a) control_pane_t3

0xcec4,	// (0x0004582c) status_small_pane_g8_ParamLimits

0xcec4,	// (0x0004582c) status_small_pane_g8

0x9526,	// (0x00041e8e) popup_find_window_ParamLimits

0x97a1,	// (0x00042109) popup_note_image_window_ParamLimits

0xf073,	// (0x000479db) list_double2_graphic_pane_vc_g1_ParamLimits

0xf073,	// (0x000479db) list_double2_graphic_pane_vc_g1

0xeec6,	// (0x0004782e) list_double2_graphic_pane_vc_g2_ParamLimits

0xeec6,	// (0x0004782e) list_double2_graphic_pane_vc_g2

0xeed2,	// (0x0004783a) list_double2_graphic_pane_vc_g3_ParamLimits

0xeed2,	// (0x0004783a) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004816b) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004816b) list_double2_graphic_pane_vc_g

0xf07f,	// (0x000479e7) list_double2_graphic_pane_vc_t1_ParamLimits

0xf07f,	// (0x000479e7) list_double2_graphic_pane_vc_t1

0xeec6,	// (0x0004782e) list_single_heading_pane_vc_g1_ParamLimits

0xeec6,	// (0x0004782e) list_single_heading_pane_vc_g1

0xeed2,	// (0x0004783a) list_single_heading_pane_vc_g2_ParamLimits

0xeed2,	// (0x0004783a) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00047f7e) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00047f7e) list_single_heading_pane_vc_g

0xf095,	// (0x000479fd) list_single_heading_pane_vc_t1_ParamLimits

0xf095,	// (0x000479fd) list_single_heading_pane_vc_t1

0xf0ab,	// (0x00047a13) list_single_heading_pane_vc_t2_ParamLimits

0xf0ab,	// (0x00047a13) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0004818c) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0004818c) list_single_heading_pane_vc_t

0xd2a2,	// (0x00045c0a) list_setting_number_pane_vc_g1_ParamLimits

0xd2a2,	// (0x00045c0a) list_setting_number_pane_vc_g1

0xd2ae,	// (0x00045c16) list_setting_number_pane_vc_g2_ParamLimits

0xd2ae,	// (0x00045c16) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x00048191) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x00048191) list_setting_number_pane_vc_g

0xd2ba,	// (0x00045c22) list_setting_number_pane_vc_t1_ParamLimits

0xd2ba,	// (0x00045c22) list_setting_number_pane_vc_t1

0xd2ce,	// (0x00045c36) list_setting_number_pane_vc_t2_ParamLimits

0xd2ce,	// (0x00045c36) list_setting_number_pane_vc_t2

0xd2ea,	// (0x00045c52) list_setting_number_pane_vc_t3_ParamLimits

0xd2ea,	// (0x00045c52) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x00048196) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x00048196) list_setting_number_pane_vc_t

0xd312,	// (0x00045c7a) set_value_pane_vc_ParamLimits

0xd312,	// (0x00045c7a) set_value_pane_vc

0xe3bf,	// (0x00046d27) list_double2_graphic_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double2_graphic_pane_vc

0xe3bf,	// (0x00046d27) list_double2_large_graphic_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double2_large_graphic_pane_vc

0xe3bf,	// (0x00046d27) list_double2_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double2_pane_vc

0xe3bf,	// (0x00046d27) list_double_graphic_heading_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double_graphic_heading_pane_vc

0xe3bf,	// (0x00046d27) list_double_graphic_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double_graphic_pane_vc

0xe3bf,	// (0x00046d27) list_double_heading_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double_heading_pane_vc

0xe3bf,	// (0x00046d27) list_double_large_graphic_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double_large_graphic_pane_vc

0xe3bf,	// (0x00046d27) list_double_number_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double_number_pane_vc

0xe3bf,	// (0x00046d27) list_double_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double_pane_vc

0xe3bf,	// (0x00046d27) list_double_time_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_double_time_pane_vc

0xe3bf,	// (0x00046d27) list_setting_number_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_setting_number_pane_vc

0xe3bf,	// (0x00046d27) list_setting_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_setting_pane_vc

0xe3bf,	// (0x00046d27) list_single_graphic_heading_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_single_graphic_heading_pane_vc

0xe3bf,	// (0x00046d27) list_single_heading_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_single_heading_pane_vc

0xe3bf,	// (0x00046d27) list_single_number_heading_pane_vc_ParamLimits

0xe3bf,	// (0x00046d27) list_single_number_heading_pane_vc

0xf073,	// (0x000479db) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xf073,	// (0x000479db) list_double_graphic_heading_pane_vc_g1

0xeec6,	// (0x0004782e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeec6,	// (0x0004782e) list_double_graphic_heading_pane_vc_g2

0xeed2,	// (0x0004783a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeed2,	// (0x0004783a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0004816b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004816b) list_double_graphic_heading_pane_vc_g

0xf0e4,	// (0x00047a4c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xf0e4,	// (0x00047a4c) list_double_graphic_heading_pane_vc_t1

0xf095,	// (0x000479fd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xf095,	// (0x000479fd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x00048394) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x00048394) list_double_graphic_heading_pane_vc_t

0xd2a2,	// (0x00045c0a) list_setting_pane_vc_g1_ParamLimits

0xd2a2,	// (0x00045c0a) list_setting_pane_vc_g1

0xd2ae,	// (0x00045c16) list_setting_pane_vc_g2_ParamLimits

0xd2ae,	// (0x00045c16) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x00048191) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x00048191) list_setting_pane_vc_g

0xe9b9,	// (0x00047321) list_setting_pane_vc_t1_ParamLimits

0xe9b9,	// (0x00047321) list_setting_pane_vc_t1

0xe9cd,	// (0x00047335) list_setting_pane_vc_t2_ParamLimits

0xe9cd,	// (0x00047335) list_setting_pane_vc_t2

0x0001,

0xfa6f,	// (0x000483d7) list_setting_pane_vc_t_ParamLimits

0xfa6f,	// (0x000483d7) list_setting_pane_vc_t

0xd312,	// (0x00045c7a) set_value_pane_cp_vc_ParamLimits

0xd312,	// (0x00045c7a) set_value_pane_cp_vc

0xeec6,	// (0x0004782e) list_single_number_heading_pane_vc_g1_ParamLimits

0xeec6,	// (0x0004782e) list_single_number_heading_pane_vc_g1

0xeed2,	// (0x0004783a) list_single_number_heading_pane_vc_g2_ParamLimits

0xeed2,	// (0x0004783a) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00047f7e) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00047f7e) list_single_number_heading_pane_vc_g

0xf095,	// (0x000479fd) list_single_number_heading_pane_vc_t1_ParamLimits

0xf095,	// (0x000479fd) list_single_number_heading_pane_vc_t1

0xf0f8,	// (0x00047a60) list_single_number_heading_pane_vc_t2_ParamLimits

0xf0f8,	// (0x00047a60) list_single_number_heading_pane_vc_t2

0xeef4,	// (0x0004785c) list_single_number_heading_pane_vc_t3_ParamLimits

0xeef4,	// (0x0004785c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa74,	// (0x000483dc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x000483dc) list_single_number_heading_pane_vc_t

0xf073,	// (0x000479db) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xf073,	// (0x000479db) list_single_graphic_heading_pane_vc_g1

0xeec6,	// (0x0004782e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xeec6,	// (0x0004782e) list_single_graphic_heading_pane_vc_g4

0xeed2,	// (0x0004783a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeed2,	// (0x0004783a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004816b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004816b) list_single_graphic_heading_pane_vc_g

0xf095,	// (0x000479fd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xf095,	// (0x000479fd) list_single_graphic_heading_pane_vc_t1

0xf10c,	// (0x00047a74) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xf10c,	// (0x00047a74) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x000483e3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x000483e3) list_single_graphic_heading_pane_vc_t

0xeec6,	// (0x0004782e) list_double2_pane_vc_g1_ParamLimits

0xeec6,	// (0x0004782e) list_double2_pane_vc_g1

0xeed2,	// (0x0004783a) list_double2_pane_vc_g2_ParamLimits

0xeed2,	// (0x0004783a) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x00047f7e) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x00047f7e) list_double2_pane_vc_g

0xf0ce,	// (0x00047a36) list_double2_pane_vc_t1_ParamLimits

0xf0ce,	// (0x00047a36) list_double2_pane_vc_t1

0xef06,	// (0x0004786e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xef06,	// (0x0004786e) list_double2_large_graphic_pane_vc_g1

0xeec6,	// (0x0004782e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeec6,	// (0x0004782e) list_double2_large_graphic_pane_vc_g2

0xeed2,	// (0x0004783a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeed2,	// (0x0004783a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x00047f96) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x00047f96) list_double2_large_graphic_pane_vc_g

0xeede,	// (0x00047846) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeede,	// (0x00047846) list_double2_large_graphic_pane_vc_t1

0xf120,	// (0x00047a88) list_double_time_pane_vc_g1_ParamLimits

0xf120,	// (0x00047a88) list_double_time_pane_vc_g1

0xf12c,	// (0x00047a94) list_double_time_pane_vc_g2_ParamLimits

0xf12c,	// (0x00047a94) list_double_time_pane_vc_g2

0x0001,

0xfa80,	// (0x000483e8) list_double_time_pane_vc_g_ParamLimits

0xfa80,	// (0x000483e8) list_double_time_pane_vc_g

0xf138,	// (0x00047aa0) list_double_time_pane_vc_t1_ParamLimits

0xf138,	// (0x00047aa0) list_double_time_pane_vc_t1

0xf151,	// (0x00047ab9) list_double_time_pane_vc_t2_ParamLimits

0xf151,	// (0x00047ab9) list_double_time_pane_vc_t2

0xf191,	// (0x00047af9) list_double_time_pane_vc_t3_ParamLimits

0xf191,	// (0x00047af9) list_double_time_pane_vc_t3

0xf1a9,	// (0x00047b11) list_double_time_pane_vc_t4_ParamLimits

0xf1a9,	// (0x00047b11) list_double_time_pane_vc_t4

0x0003,

0xfa85,	// (0x000483ed) list_double_time_pane_vc_t_ParamLimits

0xfa85,	// (0x000483ed) list_double_time_pane_vc_t

0xeec6,	// (0x0004782e) list_double_pane_vc_g1_ParamLimits

0xeec6,	// (0x0004782e) list_double_pane_vc_g1

0xeed2,	// (0x0004783a) list_double_pane_vc_g2_ParamLimits

0xeed2,	// (0x0004783a) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x00047f7e) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x00047f7e) list_double_pane_vc_g

0xf1bd,	// (0x00047b25) list_double_pane_vc_t1_ParamLimits

0xf1bd,	// (0x00047b25) list_double_pane_vc_t1

0xf1cf,	// (0x00047b37) list_double_pane_vc_t2_ParamLimits

0xf1cf,	// (0x00047b37) list_double_pane_vc_t2

0x0001,

0xfa8e,	// (0x000483f6) list_double_pane_vc_t_ParamLimits

0xfa8e,	// (0x000483f6) list_double_pane_vc_t

0xeec6,	// (0x0004782e) list_double_number_pane_vc_g1_ParamLimits

0xeec6,	// (0x0004782e) list_double_number_pane_vc_g1

0xeed2,	// (0x0004783a) list_double_number_pane_vc_g2_ParamLimits

0xeed2,	// (0x0004783a) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x00047f7e) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x00047f7e) list_double_number_pane_vc_g

0xf1e7,	// (0x00047b4f) list_double_number_pane_vc_t1_ParamLimits

0xf1e7,	// (0x00047b4f) list_double_number_pane_vc_t1

0xf1fb,	// (0x00047b63) list_double_number_pane_vc_t2_ParamLimits

0xf1fb,	// (0x00047b63) list_double_number_pane_vc_t2

0xf1cf,	// (0x00047b37) list_double_number_pane_vc_t3_ParamLimits

0xf1cf,	// (0x00047b37) list_double_number_pane_vc_t3

0x0002,

0xfa93,	// (0x000483fb) list_double_number_pane_vc_t_ParamLimits

0xfa93,	// (0x000483fb) list_double_number_pane_vc_t

0xf20d,	// (0x00047b75) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf20d,	// (0x00047b75) list_double_large_graphic_pane_vc_g1

0xf219,	// (0x00047b81) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf219,	// (0x00047b81) list_double_large_graphic_pane_vc_g2

0xeed2,	// (0x0004783a) list_double_large_graphic_pane_vc_g3_ParamLimits

0xeed2,	// (0x0004783a) list_double_large_graphic_pane_vc_g3

0xf228,	// (0x00047b90) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf228,	// (0x00047b90) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9a,	// (0x00048402) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9a,	// (0x00048402) list_double_large_graphic_pane_vc_g

0xf234,	// (0x00047b9c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf234,	// (0x00047b9c) list_double_large_graphic_pane_vc_t1

0xf246,	// (0x00047bae) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf246,	// (0x00047bae) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x0004840b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x0004840b) list_double_large_graphic_pane_vc_t

0xeec6,	// (0x0004782e) list_double_heading_pane_vc_g1_ParamLimits

0xeec6,	// (0x0004782e) list_double_heading_pane_vc_g1

0xeed2,	// (0x0004783a) list_double_heading_pane_vc_g2_ParamLimits

0xeed2,	// (0x0004783a) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x00047f7e) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x00047f7e) list_double_heading_pane_vc_g

0xf25f,	// (0x00047bc7) list_double_heading_pane_vc_t1_ParamLimits

0xf25f,	// (0x00047bc7) list_double_heading_pane_vc_t1

0xf095,	// (0x000479fd) list_double_heading_pane_vc_t2_ParamLimits

0xf095,	// (0x000479fd) list_double_heading_pane_vc_t2

0x0001,

0xfaa8,	// (0x00048410) list_double_heading_pane_vc_t_ParamLimits

0xfaa8,	// (0x00048410) list_double_heading_pane_vc_t

0xf073,	// (0x000479db) list_double_graphic_pane_vc_g1_ParamLimits

0xf073,	// (0x000479db) list_double_graphic_pane_vc_g1

0xf273,	// (0x00047bdb) list_double_graphic_pane_vc_g2_ParamLimits

0xf273,	// (0x00047bdb) list_double_graphic_pane_vc_g2

0xf282,	// (0x00047bea) list_double_graphic_pane_vc_g3_ParamLimits

0xf282,	// (0x00047bea) list_double_graphic_pane_vc_g3

0x0002,

0xfaad,	// (0x00048415) list_double_graphic_pane_vc_g_ParamLimits

0xfaad,	// (0x00048415) list_double_graphic_pane_vc_g

0xf28e,	// (0x00047bf6) list_double_graphic_pane_vc_t1_ParamLimits

0xf28e,	// (0x00047bf6) list_double_graphic_pane_vc_t1

0xf1cf,	// (0x00047b37) list_double_graphic_pane_vc_t2_ParamLimits

0xf1cf,	// (0x00047b37) list_double_graphic_pane_vc_t2

0x0001,

0xfab4,	// (0x0004841c) list_double_graphic_pane_vc_t_ParamLimits

0xfab4,	// (0x0004841c) list_double_graphic_pane_vc_t

0x5a5c,	// (0x0003e3c4) aid_size_cell_fastswap

0x8790,	// (0x000410f8) aid_size_cell_touch_ParamLimits

0x8790,	// (0x000410f8) aid_size_cell_touch

0x5cc9,	// (0x0003e631) popup_fast_swap_wide_window_ParamLimits

0x5cc9,	// (0x0003e631) popup_fast_swap_wide_window

0x88e5,	// (0x0004124d) touch_pane_ParamLimits

0x88e5,	// (0x0004124d) touch_pane

0xc2cc,	// (0x00044c34) button_value_adjust_pane_cp2

0xefab,	// (0x00047913) button_value_adjust_pane_cp4

0xefb3,	// (0x0004791b) form_field_data_pane_cp2

0x42dd,	// (0x0003cc45) form_field_data_wide_pane_cp2

0xc61e,	// (0x00044f86) bg_scroll_pane_ParamLimits

0x604b,	// (0x0003e9b3) scroll_handle_pane_ParamLimits

0x605f,	// (0x0003e9c7) scroll_sc2_down_pane_ParamLimits

0x605f,	// (0x0003e9c7) scroll_sc2_down_pane

0xc64f,	// (0x00044fb7) scroll_sc2_up_pane_ParamLimits

0xc64f,	// (0x00044fb7) scroll_sc2_up_pane

0xa6ab,	// (0x00043013) grid_wheel_folder_pane_g1_ParamLimits

0xa6ab,	// (0x00043013) grid_wheel_folder_pane_g1

0x6224,	// (0x0003eb8c) clock_nsta_pane_cp2_ParamLimits

0x6224,	// (0x0003eb8c) clock_nsta_pane_cp2

0x91f6,	// (0x00041b5e) listscroll_midp_pane_ParamLimits

0x9207,	// (0x00041b6f) midp_canvas_pane

0xcf18,	// (0x00045880) nsta_clock_indic_pane

0xcf48,	// (0x000458b0) listscroll_form_pane_vc

0xcf50,	// (0x000458b8) listscroll_set_pane_vc_ParamLimits

0xcf50,	// (0x000458b8) listscroll_set_pane_vc

0x9bc8,	// (0x00042530) clock_nsta_pane

0x9bf2,	// (0x0004255a) indicator_nsta_pane

0xd198,	// (0x00045b00) bg_popup_sub_pane_cp2_ParamLimits

0xd1ac,	// (0x00045b14) find_pane_cp2_ParamLimits

0xd1ac,	// (0x00045b14) find_pane_cp2

0xd1c2,	// (0x00045b2a) grid_toobar_pane_ParamLimits

0xd31e,	// (0x00045c86) list_form_gen_pane_vc_ParamLimits

0xd31e,	// (0x00045c86) list_form_gen_pane_vc

0xd334,	// (0x00045c9c) scroll_pane_cp8_vc_ParamLimits

0xd334,	// (0x00045c9c) scroll_pane_cp8_vc

0xd384,	// (0x00045cec) data_form_wide_pane_vc_ParamLimits

0xd384,	// (0x00045cec) data_form_wide_pane_vc

0xd390,	// (0x00045cf8) form_field_data_wide_pane_vc_g1

0xd398,	// (0x00045d00) form_field_data_wide_pane_vc_t1_ParamLimits

0xd398,	// (0x00045d00) form_field_data_wide_pane_vc_t1

0xc2e0,	// (0x00044c48) input_focus_pane_cp6_vc_ParamLimits

0xc2e0,	// (0x00044c48) input_focus_pane_cp6_vc

0x9fe1,	// (0x00042949) list_midp_pane_ParamLimits

0xd5c5,	// (0x00045f2d) scroll_pane_cp16_ParamLimits

0xd5c5,	// (0x00045f2d) scroll_pane_cp16

0xd605,	// (0x00045f6d) button_value_adjust_pane_ParamLimits

0xd605,	// (0x00045f6d) button_value_adjust_pane

0xa33e,	// (0x00042ca6) button_value_adjust_pane_cp6_ParamLimits

0xa33e,	// (0x00042ca6) button_value_adjust_pane_cp6

0xa454,	// (0x00042dbc) settings_code_pane_cp_ParamLimits

0xa454,	// (0x00042dbc) settings_code_pane_cp

0x8786,	// (0x000410ee) cell_touch_pane_g1

0x8786,	// (0x000410ee) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x000480b4) cell_touch_pane_g

0xa58a,	// (0x00042ef2) cell_touch_pane_cp_ParamLimits

0xa58a,	// (0x00042ef2) cell_touch_pane_cp

0xa5a6,	// (0x00042f0e) cell_touch_pane_ParamLimits

0xa5a6,	// (0x00042f0e) cell_touch_pane

0x8786,	// (0x000410ee) scroll_sc2_down_pane_g1

0x8786,	// (0x000410ee) scroll_sc2_up_pane_g1

0x8876,	// (0x000411de) bg_set_opt_pane_cp4_vc

0xe7d5,	// (0x0004713d) list_set_graphic_pane_vc_g1_ParamLimits

0xe7d5,	// (0x0004713d) list_set_graphic_pane_vc_g1

0xe7e1,	// (0x00047149) list_set_graphic_pane_vc_g2_ParamLimits

0xe7e1,	// (0x00047149) list_set_graphic_pane_vc_g2

0x0001,

0xfa31,	// (0x00048399) list_set_graphic_pane_vc_g_ParamLimits

0xfa31,	// (0x00048399) list_set_graphic_pane_vc_g

0xe7ed,	// (0x00047155) text_primary_small_cp13_vc_ParamLimits

0xe7ed,	// (0x00047155) text_primary_small_cp13_vc

0xe805,	// (0x0004716d) list_set_graphic_pane_vc_ParamLimits

0xe805,	// (0x0004716d) list_set_graphic_pane_vc

0x8876,	// (0x000411de) input_focus_pane_cp2_vc

0x8786,	// (0x000410ee) setting_code_pane_vc_g1

0xe819,	// (0x00047181) setting_code_pane_vc_t1

0xe827,	// (0x0004718f) set_text_pane_vc_t1_ParamLimits

0xe827,	// (0x0004718f) set_text_pane_vc_t1

0x8876,	// (0x000411de) input_focus_pane_cp1_vc

0xe846,	// (0x000471ae) list_set_text_pane_vc

0x8786,	// (0x000410ee) setting_text_pane_vc_g1

0x8876,	// (0x000411de) bg_set_opt_pane_cp2_vc

0xe850,	// (0x000471b8) setting_slider_graphic_pane_vc_g1

0xe858,	// (0x000471c0) setting_slider_graphic_pane_vc_t1

0xe866,	// (0x000471ce) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa36,	// (0x0004839e) setting_slider_graphic_pane_vc_t

0xe874,	// (0x000471dc) slider_set_pane_cp_vc

0xe87c,	// (0x000471e4) slider_set_pane_vc_g1

0xe885,	// (0x000471ed) slider_set_pane_vc_g2

0x0006,

0xfa3b,	// (0x000483a3) slider_set_pane_vc_g

0xc33b,	// (0x00044ca3) set_opt_bg_pane_g1_copy1

0xc343,	// (0x00044cab) set_opt_bg_pane_g2_copy1

0xe8b1,	// (0x00047219) set_opt_bg_pane_g3_copy1

0xc353,	// (0x00044cbb) set_opt_bg_pane_g4_copy1

0xc35b,	// (0x00044cc3) set_opt_bg_pane_g5_copy1

0xc363,	// (0x00044ccb) set_opt_bg_pane_g6_copy1

0xe8b9,	// (0x00047221) set_opt_bg_pane_g7_copy1

0xe8c3,	// (0x0004722b) set_opt_bg_pane_g8_copy1

0xe8cb,	// (0x00047233) set_opt_bg_pane_g9_copy1

0x8876,	// (0x000411de) bg_set_opt_pane_cp_vc

0xe8d3,	// (0x0004723b) setting_slider_pane_vc_t1

0xe858,	// (0x000471c0) setting_slider_pane_vc_t2

0xe866,	// (0x000471ce) setting_slider_pane_vc_t3

0x0002,

0xfa4a,	// (0x000483b2) setting_slider_pane_vc_t

0xe874,	// (0x000471dc) slider_set_pane_vc

0x65ca,	// (0x0003ef32) volume_set_pane_vc_g1

0x68c5,	// (0x0003f22d) volume_set_pane_vc_g2

0x68ce,	// (0x0003f236) volume_set_pane_vc_g3

0x68d7,	// (0x0003f23f) volume_set_pane_vc_g4

0x68e0,	// (0x0003f248) volume_set_pane_vc_g5

0x68e9,	// (0x0003f251) volume_set_pane_vc_g6

0x68f2,	// (0x0003f25a) volume_set_pane_vc_g7

0x68fb,	// (0x0003f263) volume_set_pane_vc_g8

0x6904,	// (0x0003f26c) volume_set_pane_vc_g9

0x690d,	// (0x0003f275) volume_set_pane_vc_g10

0x0009,

0xfa51,	// (0x000483b9) volume_set_pane_vc_g

0xe8e2,	// (0x0004724a) volume_set_pane_vc

0xe8ea,	// (0x00047252) button_value_adjust_pane_cp1_vc

0xe8f4,	// (0x0004725c) list_highlight_pane_cp2_vc

0xe8fd,	// (0x00047265) list_set_pane_vc_ParamLimits

0xe8fd,	// (0x00047265) list_set_pane_vc

0xe94f,	// (0x000472b7) main_pane_set_vc_t1_ParamLimits

0xe94f,	// (0x000472b7) main_pane_set_vc_t1

0xe964,	// (0x000472cc) main_pane_set_vc_t2_ParamLimits

0xe964,	// (0x000472cc) main_pane_set_vc_t2

0xe976,	// (0x000472de) main_pane_set_vc_t3_ParamLimits

0xe976,	// (0x000472de) main_pane_set_vc_t3

0xe988,	// (0x000472f0) main_pane_set_vc_t4_ParamLimits

0xe988,	// (0x000472f0) main_pane_set_vc_t4

0x0003,

0xfa66,	// (0x000483ce) main_pane_set_vc_t_ParamLimits

0xfa66,	// (0x000483ce) main_pane_set_vc_t

0xe99a,	// (0x00047302) setting_code_pane_vc_ParamLimits

0xe99a,	// (0x00047302) setting_code_pane_vc

0xe9a9,	// (0x00047311) setting_slider_graphic_pane_vc

0xe9a9,	// (0x00047311) setting_slider_pane_vc

0xe9a9,	// (0x00047311) setting_text_pane_vc

0xe9a9,	// (0x00047311) setting_volume_pane_vc

0xe9b1,	// (0x00047319) scroll_pane_cp121_vc

0xc2ba,	// (0x00044c22) set_content_pane_vc

0xe9ef,	// (0x00047357) button_value_adjust_pane_g1

0xe9f8,	// (0x00047360) button_value_adjust_pane_g2

0x0001,

0xfab9,	// (0x00048421) button_value_adjust_pane_g

0xea01,	// (0x00047369) form_field_slider_wide_pane_vc_t1_ParamLimits

0xea01,	// (0x00047369) form_field_slider_wide_pane_vc_t1

0xea15,	// (0x0004737d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xea15,	// (0x0004737d) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabe,	// (0x00048426) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabe,	// (0x00048426) form_field_slider_wide_pane_vc_t

0x8a40,	// (0x000413a8) input_focus_pane_cp10_vc_ParamLimits

0x8a40,	// (0x000413a8) input_focus_pane_cp10_vc

0xea27,	// (0x0004738f) slider_cont_pane_cp1_vc_ParamLimits

0xea27,	// (0x0004738f) slider_cont_pane_cp1_vc

0xe87c,	// (0x000471e4) slider_form_pane_g1_cp2

0xe885,	// (0x000471ed) slider_form_pane_g2_cp2

0xea40,	// (0x000473a8) form_field_slider_pane_vc_t3

0xea4e,	// (0x000473b6) form_field_slider_pane_vc_t4

0xea5c,	// (0x000473c4) slider_form_pane_vc_ParamLimits

0xea5c,	// (0x000473c4) slider_form_pane_vc

0xea69,	// (0x000473d1) form_field_slider_pane_vc_t1_ParamLimits

0xea69,	// (0x000473d1) form_field_slider_pane_vc_t1

0xea15,	// (0x0004737d) form_field_slider_pane_vc_t2_ParamLimits

0xea15,	// (0x0004737d) form_field_slider_pane_vc_t2

0x0001,

0xface,	// (0x00048436) form_field_slider_pane_vc_t_ParamLimits

0xface,	// (0x00048436) form_field_slider_pane_vc_t

0x8a40,	// (0x000413a8) input_focus_pane_cp9_vc_ParamLimits

0x8a40,	// (0x000413a8) input_focus_pane_cp9_vc

0xea85,	// (0x000473ed) slider_cont_pane_vc_ParamLimits

0xea85,	// (0x000473ed) slider_cont_pane_vc

0xea97,	// (0x000473ff) list_form_graphic_pane_cp_vc_ParamLimits

0xea97,	// (0x000473ff) list_form_graphic_pane_cp_vc

0xd390,	// (0x00045cf8) form_field_popup_wide_pane_vc_g1

0xeaac,	// (0x00047414) form_field_popup_wide_pane_vc_t1_ParamLimits

0xeaac,	// (0x00047414) form_field_popup_wide_pane_vc_t1

0xc2e0,	// (0x00044c48) input_focus_pane_cp8_vc_ParamLimits

0xc2e0,	// (0x00044c48) input_focus_pane_cp8_vc

0xeac3,	// (0x0004742b) list_form_wide_pane_vc_ParamLimits

0xeac3,	// (0x0004742b) list_form_wide_pane_vc

0xeacf,	// (0x00047437) list_form_graphic_pane_vc_g1

0xead7,	// (0x0004743f) list_form_graphic_pane_vc_t1_ParamLimits

0xead7,	// (0x0004743f) list_form_graphic_pane_vc_t1

0x8a82,	// (0x000413ea) list_highlight_pane_cp5_vc_ParamLimits

0x8a82,	// (0x000413ea) list_highlight_pane_cp5_vc

0xeaf3,	// (0x0004745b) list_form_graphic_pane_vc_ParamLimits

0xeaf3,	// (0x0004745b) list_form_graphic_pane_vc

0xd390,	// (0x00045cf8) form_field_popup_pane_vc_g1

0xeb09,	// (0x00047471) form_field_popup_pane_vc_t1_ParamLimits

0xeb09,	// (0x00047471) form_field_popup_pane_vc_t1

0xc2e0,	// (0x00044c48) input_focus_pane_cp7_vc_ParamLimits

0xc2e0,	// (0x00044c48) input_focus_pane_cp7_vc

0xeb20,	// (0x00047488) list_form_pane_vc_ParamLimits

0xeb20,	// (0x00047488) list_form_pane_vc

0xeb2c,	// (0x00047494) data_form_pane_vc_t1_ParamLimits

0xeb2c,	// (0x00047494) data_form_pane_vc_t1

0xc33b,	// (0x00044ca3) input_focus_pane_vc_g1

0xc343,	// (0x00044cab) input_focus_pane_vc_g2

0xc34b,	// (0x00044cb3) input_focus_pane_vc_g3

0xc353,	// (0x00044cbb) input_focus_pane_vc_g4

0xc35b,	// (0x00044cc3) input_focus_pane_vc_g5

0xc363,	// (0x00044ccb) input_focus_pane_vc_g6

0xc36b,	// (0x00044cd3) input_focus_pane_vc_g7

0xc373,	// (0x00044cdb) input_focus_pane_vc_g8

0xc37b,	// (0x00044ce3) input_focus_pane_vc_g9

0x8786,	// (0x000410ee) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004803d) input_focus_pane_vc_g

0xd384,	// (0x00045cec) data_form_pane_vc_ParamLimits

0xd384,	// (0x00045cec) data_form_pane_vc

0xd390,	// (0x00045cf8) form_field_data_pane_vc_g1

0xeb47,	// (0x000474af) form_field_data_pane_vc_t1_ParamLimits

0xeb47,	// (0x000474af) form_field_data_pane_vc_t1

0xc2e0,	// (0x00044c48) input_focus_pane_vc_ParamLimits

0xc2e0,	// (0x00044c48) input_focus_pane_vc

0xeb61,	// (0x000474c9) button_value_adjust_pane_cp3_vc

0xeb69,	// (0x000474d1) button_value_adjust_pane_cp5_vc

0xeb71,	// (0x000474d9) form_field_data_pane_vc_ParamLimits

0xeb71,	// (0x000474d9) form_field_data_pane_vc

0xeb88,	// (0x000474f0) form_field_data_pane_vc_cp2

0xeb90,	// (0x000474f8) form_field_data_wide_pane_vc_ParamLimits

0xeb90,	// (0x000474f8) form_field_data_wide_pane_vc

0xeba6,	// (0x0004750e) form_field_data_wide_pane_vc_cp2

0xebae,	// (0x00047516) form_field_popup_pane_vc_ParamLimits

0xebae,	// (0x00047516) form_field_popup_pane_vc

0xebc5,	// (0x0004752d) form_field_popup_wide_pane_vc_ParamLimits

0xebc5,	// (0x0004752d) form_field_popup_wide_pane_vc

0xebdb,	// (0x00047543) form_field_slider_pane_vc_ParamLimits

0xebdb,	// (0x00047543) form_field_slider_pane_vc

0xebee,	// (0x00047556) form_field_slider_wide_pane_vc_ParamLimits

0xebee,	// (0x00047556) form_field_slider_wide_pane_vc

0xa5c4,	// (0x00042f2c) grid_touch_1_pane_ParamLimits

0xa5c4,	// (0x00042f2c) grid_touch_1_pane

0xa5d8,	// (0x00042f40) grid_touch_2_pane_ParamLimits

0xa5d8,	// (0x00042f40) grid_touch_2_pane

0xec01,	// (0x00047569) touch_pane_g1_ParamLimits

0xec01,	// (0x00047569) touch_pane_g1

0xec0f,	// (0x00047577) cell_app_pane_cp_wide_ParamLimits

0xec0f,	// (0x00047577) cell_app_pane_cp_wide

0xec20,	// (0x00047588) grid_popup_fast_wide_pane_ParamLimits

0xec20,	// (0x00047588) grid_popup_fast_wide_pane

0xec34,	// (0x0004759c) scroll_pane_cp19_ParamLimits

0xec34,	// (0x0004759c) scroll_pane_cp19

0x8876,	// (0x000411de) bg_popup_window_pane_cp20

0xec48,	// (0x000475b0) listscroll_popup_fast_wide_pane

0xec50,	// (0x000475b8) grid_indicator_nsta_pane

0xec5e,	// (0x000475c6) clock_nsta_pane_g1

0xec67,	// (0x000475cf) clock_nsta_pane_t1

0xa602,	// (0x00042f6a) cell_indicator_nsta_pane_ParamLimits

0xa602,	// (0x00042f6a) cell_indicator_nsta_pane

0xec01,	// (0x00047569) cell_indicator_nsta_pane_g1

0xa61f,	// (0x00042f87) cell_indicator_nsta_pane_g2

0x0001,

0xfad8,	// (0x00048440) cell_indicator_nsta_pane_g

0xec83,	// (0x000475eb) clock_nsta_pane_cp

0xec8b,	// (0x000475f3) indicator_nsta_pane_cp

0xec93,	// (0x000475fb) nsta_clock_indic_pane_g1

0x8b71,	// (0x000414d9) grid_indicator_pane

0xc741,	// (0x000450a9) scroll_pane_cp29

0x6173,	// (0x0003eadb) indicator_nsta_pane_cp2_ParamLimits

0x6173,	// (0x0003eadb) indicator_nsta_pane_cp2

0x8a82,	// (0x000413ea) main_apps_wheel_pane

0xd4ac,	// (0x00045e14) form_midp_field_text_pane_ParamLimits

0xd5e5,	// (0x00045f4d) scroll_bar_cp050_ParamLimits

0xeccb,	// (0x00047633) cell_indicator_pane_ParamLimits

0xeccb,	// (0x00047633) cell_indicator_pane

0xece8,	// (0x00047650) cell_indicator_pane_g1

0xa635,	// (0x00042f9d) grid_wheel_folder_pane_ParamLimits

0xa635,	// (0x00042f9d) grid_wheel_folder_pane

0xa643,	// (0x00042fab) list_wheel_apps_pane_ParamLimits

0xa643,	// (0x00042fab) list_wheel_apps_pane

0xa651,	// (0x00042fb9) main_apps_wheel_pane_g1_ParamLimits

0xa651,	// (0x00042fb9) main_apps_wheel_pane_g1

0xa65d,	// (0x00042fc5) main_apps_wheel_pane_g2_ParamLimits

0xa65d,	// (0x00042fc5) main_apps_wheel_pane_g2

0x0001,

0xfae7,	// (0x0004844f) main_apps_wheel_pane_g_ParamLimits

0xfae7,	// (0x0004844f) main_apps_wheel_pane_g

0xa66b,	// (0x00042fd3) main_apps_wheel_pane_t1_ParamLimits

0xa66b,	// (0x00042fd3) main_apps_wheel_pane_t1

0xa67f,	// (0x00042fe7) list_wheel_apps_pane_g1

0xa687,	// (0x00042fef) list_wheel_apps_pane_g2

0xa68f,	// (0x00042ff7) list_wheel_apps_pane_g3

0xa697,	// (0x00042fff) list_wheel_apps_pane_g4

0xa6a1,	// (0x00043009) list_wheel_apps_pane_g5

0x0004,

0xfaec,	// (0x00048454) list_wheel_apps_pane_g

0xcb94,	// (0x000454fc) navi_icon_text_pane

0x9ac3,	// (0x0004242b) aid_fill_nsta

0xa6b8,	// (0x00043020) navi_icon_text_pane_g1

0xa6c4,	// (0x0004302c) navi_icon_text_pane_t1

0xca30,	// (0x00045398) list_set_graphic_pane_t1_ParamLimits

0xca30,	// (0x00045398) list_set_graphic_pane_t1

0xdcbc,	// (0x00046624) popup_midp_note_alarm_window_t6_ParamLimits

0xdcbc,	// (0x00046624) popup_midp_note_alarm_window_t6

0xdcce,	// (0x00046636) popup_midp_note_alarm_window_t7_ParamLimits

0xdcce,	// (0x00046636) popup_midp_note_alarm_window_t7

0xdce0,	// (0x00046648) popup_midp_note_alarm_window_t8_ParamLimits

0xdce0,	// (0x00046648) popup_midp_note_alarm_window_t8

0xdcf2,	// (0x0004665a) popup_midp_note_alarm_window_t9_ParamLimits

0xdcf2,	// (0x0004665a) popup_midp_note_alarm_window_t9

0xdd04,	// (0x0004666c) popup_midp_note_alarm_window_t10_ParamLimits

0xdd04,	// (0x0004666c) popup_midp_note_alarm_window_t10

0xdd16,	// (0x0004667e) popup_midp_note_alarm_window_t11_ParamLimits

0xdd16,	// (0x0004667e) popup_midp_note_alarm_window_t11

0xdd28,	// (0x00046690) scroll_pane_cp17_ParamLimits

0xdd28,	// (0x00046690) scroll_pane_cp17

0x65ca,	// (0x0003ef32) volume_small_pane_cp_g1

0x6916,	// (0x0003f27e) volume_small_pane_cp_g2

0x691f,	// (0x0003f287) volume_small_pane_cp_g3

0x6928,	// (0x0003f290) volume_small_pane_cp_g4

0x6931,	// (0x0003f299) volume_small_pane_cp_g5

0x693a,	// (0x0003f2a2) volume_small_pane_cp_g6

0x6943,	// (0x0003f2ab) volume_small_pane_cp_g7

0x694c,	// (0x0003f2b4) volume_small_pane_cp_g8

0x6955,	// (0x0003f2bd) volume_small_pane_cp_g9

0x695e,	// (0x0003f2c6) volume_small_pane_cp_g10

0xcd40,	// (0x000456a8) midp_ticker_pane_g1_ParamLimits

0xcd4c,	// (0x000456b4) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x00048105) midp_ticker_pane_g_ParamLimits

0x92a2,	// (0x00041c0a) midp_ticker_pane_t1_ParamLimits

0x9ae3,	// (0x0004244b) aid_fill_nsta_2

0xd5d1,	// (0x00045f39) list_form2_midp_pane

0xe39d,	// (0x00046d05) midp_editing_number_pane_ParamLimits

0xe3ac,	// (0x00046d14) midp_ticker_pane_ParamLimits

0xecf2,	// (0x0004765a) form2_midp_field_pane

0xecfa,	// (0x00047662) scroll_pane_cp51

0xed1a,	// (0x00047682) form2_midp_button_pane_ParamLimits

0xed1a,	// (0x00047682) form2_midp_button_pane

0xed2c,	// (0x00047694) form2_midp_content_pane_ParamLimits

0xed2c,	// (0x00047694) form2_midp_content_pane

0xed46,	// (0x000476ae) form2_midp_field_choice_group_pane

0xed4e,	// (0x000476b6) form2_midp_field_pane_g1

0xed56,	// (0x000476be) form2_midp_field_pane_g2

0xed5e,	// (0x000476c6) form2_midp_field_pane_g3

0xed66,	// (0x000476ce) form2_midp_field_pane_g4

0x0003,

0xfb11,	// (0x00048479) form2_midp_field_pane_g

0xed6e,	// (0x000476d6) form2_midp_gauge_slider_pane

0xed76,	// (0x000476de) form2_midp_gauge_wait_pane

0xed7e,	// (0x000476e6) form2_midp_image_pane_ParamLimits

0xed7e,	// (0x000476e6) form2_midp_image_pane

0xed99,	// (0x00047701) form2_midp_label_pane_ParamLimits

0xed99,	// (0x00047701) form2_midp_label_pane

0xa6f2,	// (0x0004305a) form2_midp_label_pane_cp_ParamLimits

0xa6f2,	// (0x0004305a) form2_midp_label_pane_cp

0xedb2,	// (0x0004771a) form2_midp_string_pane_ParamLimits

0xedb2,	// (0x0004771a) form2_midp_string_pane

0xf2a0,	// (0x00047c08) form2_midp_text_pane_ParamLimits

0xf2a0,	// (0x00047c08) form2_midp_text_pane

0xedc4,	// (0x0004772c) form2_midp_time_pane

0xedd4,	// (0x0004773c) input_focus_pane_cp51_ParamLimits

0xedd4,	// (0x0004773c) input_focus_pane_cp51

0xedec,	// (0x00047754) form2_midp_label_pane_t1_ParamLimits

0xedec,	// (0x00047754) form2_midp_label_pane_t1

0xf2bb,	// (0x00047c23) form2_mdip_text_pane_t1_ParamLimits

0xf2bb,	// (0x00047c23) form2_mdip_text_pane_t1

0xf2d7,	// (0x00047c3f) form2_midp_time_pane_t1

0xee34,	// (0x0004779c) form2_midp_gauge_slider_pane_t1

0xa713,	// (0x0004307b) form2_midp_gauge_slider_pane_t2

0xa725,	// (0x0004308d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1a,	// (0x00048482) form2_midp_gauge_slider_pane_t

0xee46,	// (0x000477ae) form2_midp_slider_pane

0xee52,	// (0x000477ba) form2_midp_gauge_wait_pane_t1

0xee60,	// (0x000477c8) form2_midp_wait_pane_ParamLimits

0xee60,	// (0x000477c8) form2_midp_wait_pane

0xa737,	// (0x0004309f) list_single_2graphic_pane_cp4_ParamLimits

0xa737,	// (0x0004309f) list_single_2graphic_pane_cp4

0x9f68,	// (0x000428d0) list_single_midp_graphic_pane_cp_ParamLimits

0x9f68,	// (0x000428d0) list_single_midp_graphic_pane_cp

0x8876,	// (0x000411de) list_highlight_pane_cp20

0xee8b,	// (0x000477f3) list_single_2graphic_pane_g1_cp4

0xe6da,	// (0x00047042) list_single_2graphic_pane_g2_cp4

0xee93,	// (0x000477fb) list_single_2graphic_pane_t1_cp4

0x8a82,	// (0x000413ea) list_highlight_pane_cp21

0xeea2,	// (0x0004780a) list_single_midp_graphic_pane_g4_cp

0xeeb1,	// (0x00047819) list_single_midp_graphic_pane_t1_cp

0xa74e,	// (0x000430b6) form2_mdip_string_pane_t1_ParamLimits

0xa74e,	// (0x000430b6) form2_mdip_string_pane_t1

0x8876,	// (0x000411de) bg_wml_button_pane_cp2

0x8786,	// (0x000410ee) form2_midp_image_pane_g1

0xef58,	// (0x000478c0) list_double_large_graphic_pane_g5_ParamLimits

0xef58,	// (0x000478c0) list_double_large_graphic_pane_g5

0x91f6,	// (0x00041b5e) midp_form_pane_ParamLimits

0x8a82,	// (0x000413ea) main_apps_wheel_pane_ParamLimits

0x981f,	// (0x00042187) popup_preview_window_ParamLimits

0x981f,	// (0x00042187) popup_preview_window

0xd039,	// (0x000459a1) popup_touch_info_window_ParamLimits

0xd039,	// (0x000459a1) popup_touch_info_window

0xd057,	// (0x000459bf) popup_touch_menu_window_ParamLimits

0xd057,	// (0x000459bf) popup_touch_menu_window

0x877c,	// (0x000410e4) bg_popup_sub_pane_cp6

0x0951,	// (0x000392b9) list_touch_menu_pane

0x0959,	// (0x000392c1) list_single_touch_menu_pane_ParamLimits

0x0959,	// (0x000392c1) list_single_touch_menu_pane

0x096e,	// (0x000392d6) list_single_touch_menu_pane_t1

0x8a82,	// (0x000413ea) bg_popup_sub_pane_cp7_ParamLimits

0x8a82,	// (0x000413ea) bg_popup_sub_pane_cp7

0x097c,	// (0x000392e4) heading_sub_pane

0x0984,	// (0x000392ec) list_touch_info_pane_ParamLimits

0x0984,	// (0x000392ec) list_touch_info_pane

0x0993,	// (0x000392fb) list_single_touch_info_pane_ParamLimits

0x0993,	// (0x000392fb) list_single_touch_info_pane

0x09a5,	// (0x0003930d) list_single_touch_info_pane_t1

0x09b3,	// (0x0003931b) list_single_touch_info_pane_t2

0x0001,

0xfb28,	// (0x00048490) list_single_touch_info_pane_t

0xcd16,	// (0x0004567e) bg_popup_heading_pane_cp

0x09c1,	// (0x00039329) heading_sub_pane_t1

0xd34a,	// (0x00045cb2) bg_popup_preview_window_pane_cp_ParamLimits

0xd34a,	// (0x00045cb2) bg_popup_preview_window_pane_cp

0x097c,	// (0x000392e4) heading_preview_pane

0x0984,	// (0x000392ec) list_preview_pane_ParamLimits

0x0984,	// (0x000392ec) list_preview_pane

0x09cf,	// (0x00039337) popup_preview_window_g1

0x0993,	// (0x000392fb) list_single_preview_pane_ParamLimits

0x0993,	// (0x000392fb) list_single_preview_pane

0x09d7,	// (0x0003933f) list_single_preview_pane_g1

0x09df,	// (0x00039347) list_single_preview_pane_t1

0x09a5,	// (0x0003930d) list_single_preview_pane_t2

0x0001,

0xfb2d,	// (0x00048495) list_single_preview_pane_t

0x09ed,	// (0x00039355) bg_popup_heading_pane_cp2_ParamLimits

0x09ed,	// (0x00039355) bg_popup_heading_pane_cp2

0x0a03,	// (0x0003936b) heading_preview_pane_g1

0x0a0b,	// (0x00039373) heading_preview_pane_t1_ParamLimits

0x0a0b,	// (0x00039373) heading_preview_pane_t1

0x8ba1,	// (0x00041509) soft_indicator_pane_t1_ParamLimits

0xc23b,	// (0x00044ba3) scroll_pane_ParamLimits

0xc63d,	// (0x00044fa5) scroll_sc2_left_pane

0xc646,	// (0x00044fae) scroll_sc2_right_pane

0xc665,	// (0x00044fcd) scroll_bg_pane_g1_ParamLimits

0xc67a,	// (0x00044fe2) scroll_bg_pane_g2_ParamLimits

0xc692,	// (0x00044ffa) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x00048094) scroll_bg_pane_g_ParamLimits

0xc665,	// (0x00044fcd) scroll_handle_pane_g1_ParamLimits

0xc6b4,	// (0x0004501c) scroll_handle_pane_g2_ParamLimits

0xc692,	// (0x00044ffa) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0004809b) scroll_handle_pane_g_ParamLimits

0xcf82,	// (0x000458ea) popup_choice_list_window_ParamLimits

0xcf82,	// (0x000458ea) popup_choice_list_window

0xd1a4,	// (0x00045b0c) choice_list_pane

0xd226,	// (0x00045b8e) cell_toolbar_pane_t1

0xd24e,	// (0x00045bb6) toolbar_button_pane_ParamLimits

0xe106,	// (0x00046a6e) ai_gene_pane_1_t2_ParamLimits

0xe106,	// (0x00046a6e) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x000482b3) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x000482b3) ai_gene_pane_1_t

0x0a28,	// (0x00039390) scroll_sc2_left_pane_g1

0x0a28,	// (0x00039390) scroll_sc2_right_pane_g1

0xc42b,	// (0x00044d93) bg_popup_sub_pane_cp10

0x0a32,	// (0x0003939a) list_choice_list_pane

0x0a49,	// (0x000393b1) list_single_choice_list_pane_ParamLimits

0x0a49,	// (0x000393b1) list_single_choice_list_pane

0x0a5d,	// (0x000393c5) list_single_choice_list_pane_g1

0x0a65,	// (0x000393cd) list_single_choice_list_pane_t1_ParamLimits

0x0a65,	// (0x000393cd) list_single_choice_list_pane_t1

0x0a7a,	// (0x000393e2) choice_list_pane_g1

0x0a82,	// (0x000393ea) choice_list_pane_t1

0x877c,	// (0x000410e4) input_focus_pane_cp11

0xc5a0,	// (0x00044f08) title_pane_stacon_g2_ParamLimits

0xc5a0,	// (0x00044f08) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0004807a) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0004807a) title_pane_stacon_g

0xcd16,	// (0x0004567e) cursor_press_pane

0x94de,	// (0x00041e46) popup_fep_hwr_window_ParamLimits

0x94de,	// (0x00041e46) popup_fep_hwr_window

0xcfd6,	// (0x0004593e) popup_fep_vkb_window_ParamLimits

0xcfd6,	// (0x0004593e) popup_fep_vkb_window

0x0a90,	// (0x000393f8) cursor_press_pane_g1

0x0002,

0xfb56,	// (0x000484be) fep_vkb_side_pane_g_ParamLimits

0x69a0,	// (0x0003f308) fep_hwr_candidate_pane_ParamLimits

0x69a0,	// (0x0003f308) fep_hwr_candidate_pane

0x69ca,	// (0x0003f332) fep_hwr_side_pane_ParamLimits

0x69ca,	// (0x0003f332) fep_hwr_side_pane

0x69ea,	// (0x0003f352) fep_hwr_top_pane_ParamLimits

0x69ea,	// (0x0003f352) fep_hwr_top_pane

0x6a02,	// (0x0003f36a) fep_hwr_write_pane_ParamLimits

0x6a02,	// (0x0003f36a) fep_hwr_write_pane

0xfb56,	// (0x000484be) fep_vkb_side_pane_g

0x0aaa,	// (0x00039412) fep_hwr_top_pane_g1

0x0a98,	// (0x00039400) fep_hwr_top_pane_g2

0x6a3c,	// (0x0003f3a4) fep_hwr_top_pane_g3

0x0002,

0xfb32,	// (0x0004849a) fep_hwr_top_pane_g

0x6a51,	// (0x0003f3b9) fep_hwr_top_text_pane

0xc807,	// (0x0004516f) fep_hwr_top_text_pane_g1

0x0ae0,	// (0x00039448) fep_hwr_top_text_pane_t1

0x6b47,	// (0x0003f4af) fep_hwr_candidate_pane_g1

0x0d3a,	// (0x000396a2) fep_vkb_keypad_pane_g3_ParamLimits

0x0d3a,	// (0x000396a2) fep_vkb_keypad_pane_g3

0x0d62,	// (0x000396ca) fep_vkb_keypad_pane_g4_ParamLimits

0x0d62,	// (0x000396ca) fep_vkb_keypad_pane_g4

0x0dd1,	// (0x00039739) fep_vkb_bottom_pane_g2_ParamLimits

0x0dd1,	// (0x00039739) fep_vkb_bottom_pane_g2

0x0001,

0xfb5d,	// (0x000484c5) fep_vkb_bottom_pane_g_ParamLimits

0xfb5d,	// (0x000484c5) fep_vkb_bottom_pane_g

0x0a28,	// (0x00039390) cell_vkb_side_pane_g2

0x0001,

0xfb67,	// (0x000484cf) cell_vkb_side_pane_g

0x0e5c,	// (0x000397c4) cell_vkb_side_pane_t1

0x0e6a,	// (0x000397d2) cell_vkb_side_pane_t1_copy1

0x0a28,	// (0x00039390) bg_fep_vkb_candidate_pane_g2

0x0f9c,	// (0x00039904) cell_vkb_candidate_pane_ParamLimits

0x0aee,	// (0x00039456) aid_size_cell_vkb_ParamLimits

0x0aee,	// (0x00039456) aid_size_cell_vkb

0x0f9c,	// (0x00039904) cell_vkb_candidate_pane

0x6b6e,	// (0x0003f4d6) bg_popup_fep_shadow_pane_g1

0x0b7c,	// (0x000394e4) fep_vkb_bottom_pane_ParamLimits

0x0b7c,	// (0x000394e4) fep_vkb_bottom_pane

0x0bb9,	// (0x00039521) fep_vkb_candidate_pane_ParamLimits

0x0bb9,	// (0x00039521) fep_vkb_candidate_pane

0x0bd5,	// (0x0003953d) fep_vkb_keypad_pane_ParamLimits

0x0bd5,	// (0x0003953d) fep_vkb_keypad_pane

0x0c1b,	// (0x00039583) fep_vkb_side_pane_ParamLimits

0x0c1b,	// (0x00039583) fep_vkb_side_pane

0x0c57,	// (0x000395bf) fep_vkb_top_pane_ParamLimits

0x0c57,	// (0x000395bf) fep_vkb_top_pane

0x0c93,	// (0x000395fb) fep_vkb_top_pane_g1_ParamLimits

0x0c93,	// (0x000395fb) fep_vkb_top_pane_g1

0x0ca2,	// (0x0003960a) fep_vkb_top_pane_g2_ParamLimits

0x0ca2,	// (0x0003960a) fep_vkb_top_pane_g2

0x0cb1,	// (0x00039619) fep_vkb_top_pane_g3_ParamLimits

0x0cb1,	// (0x00039619) fep_vkb_top_pane_g3

0x0003,

0xfb4d,	// (0x000484b5) fep_vkb_top_pane_g_ParamLimits

0xfb4d,	// (0x000484b5) fep_vkb_top_pane_g

0x0ccf,	// (0x00039637) fep_vkb_top_text_pane_ParamLimits

0x0ccf,	// (0x00039637) fep_vkb_top_text_pane

0xa840,	// (0x000431a8) fep_vkb_side_pane_g1_ParamLimits

0xa840,	// (0x000431a8) fep_vkb_side_pane_g1

0x0d29,	// (0x00039691) grid_vkb_side_pane_ParamLimits

0x0d29,	// (0x00039691) grid_vkb_side_pane

0x6b76,	// (0x0003f4de) bg_popup_fep_shadow_pane_g2

0x6b7f,	// (0x0003f4e7) bg_popup_fep_shadow_pane_g3

0x6b87,	// (0x0003f4ef) bg_popup_fep_shadow_pane_g4

0x6b90,	// (0x0003f4f8) bg_popup_fep_shadow_pane_g5

0x6b9a,	// (0x0003f502) bg_popup_fep_shadow_pane_g6

0x6ba2,	// (0x0003f50a) bg_popup_fep_shadow_pane_g7

0xc353,	// (0x00044cbb) bg_popup_fep_shadow_pane_g8

0x0d80,	// (0x000396e8) grid_vkb_keypad_number_pane_ParamLimits

0x0d80,	// (0x000396e8) grid_vkb_keypad_number_pane

0x0d90,	// (0x000396f8) grid_vkb_keypad_pane_ParamLimits

0x0d90,	// (0x000396f8) grid_vkb_keypad_pane

0x0db6,	// (0x0003971e) fep_vkb_bottom_pane_g1_ParamLimits

0x0db6,	// (0x0003971e) fep_vkb_bottom_pane_g1

0x0ddf,	// (0x00039747) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x0ddf,	// (0x00039747) grid_vkb_keypad_bottom_left_pane

0x0df4,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x0df4,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane

0x0e09,	// (0x00039771) fep_vkb_top_text_pane_g1

0xa887,	// (0x000431ef) fep_vkb_top_text_pane_t1

0xa899,	// (0x00043201) cell_vkb_side_pane_ParamLimits

0xa899,	// (0x00043201) cell_vkb_side_pane

0x0a28,	// (0x00039390) cell_vkb_side_pane_g1

0x0e78,	// (0x000397e0) cell_vkb_keypad_pane_ParamLimits

0x0e78,	// (0x000397e0) cell_vkb_keypad_pane

0x0ef3,	// (0x0003985b) cell_vkb_keypad_pane_g1

0x0008,

0xfb7a,	// (0x000484e2) bg_popup_fep_shadow_pane_g

0x6bb4,	// (0x0003f51c) cell_hwr_side_pane_g1

0x6bb4,	// (0x0003f51c) cell_hwr_side_pane_g2

0x0efd,	// (0x00039865) cell_vkb_keypad_pane_t1

0xa8af,	// (0x00043217) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa8af,	// (0x00043217) cell_vkb_keypad_bottom_left_pane

0xa8c4,	// (0x0004322c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa8c4,	// (0x0004322c) cell_vkb_keypad_bottom_right_pane

0x0a28,	// (0x00039390) cell_vkb_keypad_bottom_left_pane_g1

0x0a28,	// (0x00039390) cell_vkb_keypad_bottom_right_pane_g1

0x0f61,	// (0x000398c9) cell_vkb_keypad_number_pane_ParamLimits

0x0f61,	// (0x000398c9) cell_vkb_keypad_number_pane

0x0f80,	// (0x000398e8) cell_vkb_keypad_number_pane_g1

0x0f8a,	// (0x000398f2) cell_vkb_keypad_number_pane_g2

0x0f93,	// (0x000398fb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6c,	// (0x000484d4) cell_vkb_keypad_number_pane_g

0x0efd,	// (0x00039865) cell_vkb_keypad_number_pane_t1

0x0fb9,	// (0x00039921) fep_vkb_candidate_pane_g1

0x0001,

0xfb8d,	// (0x000484f5) cell_hwr_side_pane_g

0x0fe0,	// (0x00039948) cell_hwr_side_pane_t1

0x6bbe,	// (0x0003f526) cell_hwr_side_pane_t1_copy1

0x6bcc,	// (0x0003f534) cell_hwr_candidate_pane_g1

0x6bfb,	// (0x0003f563) cell_hwr_candidate_pane_t1

0x0a28,	// (0x00039390) cell_vkb_candidate_pane_g2

0x1066,	// (0x000399ce) cell_vkb_candidate_pane_t1

0x6967,	// (0x0003f2cf) bg_popup_fep_shadow_pane_ParamLimits

0x6967,	// (0x0003f2cf) bg_popup_fep_shadow_pane

0x6a1c,	// (0x0003f384) bg_fep_hwr_top_pane_g4

0x0abc,	// (0x00039424) bg_hwr_side_pane_g1_ParamLimits

0x0abc,	// (0x00039424) bg_hwr_side_pane_g1

0xa7ec,	// (0x00043154) cell_hwr_side_pane_ParamLimits

0xa7ec,	// (0x00043154) cell_hwr_side_pane

0x6ac8,	// (0x0003f430) fep_hwr_write_pane_g1_ParamLimits

0x6ac8,	// (0x0003f430) fep_hwr_write_pane_g1

0x6ad5,	// (0x0003f43d) fep_hwr_write_pane_g2_ParamLimits

0x6ad5,	// (0x0003f43d) fep_hwr_write_pane_g2

0x6ae2,	// (0x0003f44a) fep_hwr_write_pane_g3_ParamLimits

0x6ae2,	// (0x0003f44a) fep_hwr_write_pane_g3

0xa80c,	// (0x00043174) fep_hwr_write_pane_g4_ParamLimits

0xa80c,	// (0x00043174) fep_hwr_write_pane_g4

0x0005,

0xfb39,	// (0x000484a1) fep_hwr_write_pane_g_ParamLimits

0xfb39,	// (0x000484a1) fep_hwr_write_pane_g

0x6a1c,	// (0x0003f384) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6a1c,	// (0x0003f384) bg_fep_hwr_candidate_pane_g2

0x6b05,	// (0x0003f46d) cell_hwr_candidate_pane_ParamLimits

0x6b05,	// (0x0003f46d) cell_hwr_candidate_pane

0x6b47,	// (0x0003f4af) fep_hwr_candidate_pane_g1_ParamLimits

0x0b1c,	// (0x00039484) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x0b1c,	// (0x00039484) bg_popup_fep_shadow_pane_cp2

0x0cc1,	// (0x00039629) fep_vkb_top_pane_g4_ParamLimits

0x0cc1,	// (0x00039629) fep_vkb_top_pane_g4

0x0d07,	// (0x0003966f) fep_vkb_side_pane_g2_ParamLimits

0x0d07,	// (0x0003966f) fep_vkb_side_pane_g2

0x4203,	// (0x0003cb6b) list_setting_pane_t4_ParamLimits

0x4203,	// (0x0003cb6b) list_setting_pane_t4

0x4285,	// (0x0003cbed) list_setting_number_pane_t5_ParamLimits

0x4285,	// (0x0003cbed) list_setting_number_pane_t5

0x913b,	// (0x00041aa3) list_double_heading_pane_cp2_ParamLimits

0x913b,	// (0x00041aa3) list_double_heading_pane_cp2

0xc26f,	// (0x00044bd7) list_double_heading_pane_g1_cp2_ParamLimits

0xc26f,	// (0x00044bd7) list_double_heading_pane_g1_cp2

0xc2fa,	// (0x00044c62) list_double_heading_pane_g2_cp2_ParamLimits

0xc2fa,	// (0x00044c62) list_double_heading_pane_g2_cp2

0x1074,	// (0x000399dc) list_double_heading_pane_t1_cp2_ParamLimits

0x1074,	// (0x000399dc) list_double_heading_pane_t1_cp2

0x108a,	// (0x000399f2) list_double_heading_pane_t2_cp2_ParamLimits

0x108a,	// (0x000399f2) list_double_heading_pane_t2_cp2

0x8764,	// (0x000410cc) aid_value_unit2

0x5d15,	// (0x0003e67d) popup_preview_fixed_window

0x8d5c,	// (0x000416c4) bg_popup_preview_window_pane_cp02

0x109c,	// (0x00039a04) list_preview_fixed_pane

0x10e2,	// (0x00039a4a) list_empty_pane_fp_ParamLimits

0x10e2,	// (0x00039a4a) list_empty_pane_fp

0x10e2,	// (0x00039a4a) list_single_cale_day_pane_fp_ParamLimits

0x10e2,	// (0x00039a4a) list_single_cale_day_pane_fp

0x10e2,	// (0x00039a4a) list_single_graphic_heading_pane_fp_ParamLimits

0x10e2,	// (0x00039a4a) list_single_graphic_heading_pane_fp

0x10e2,	// (0x00039a4a) list_single_graphic_pane_fp_ParamLimits

0x10e2,	// (0x00039a4a) list_single_graphic_pane_fp

0x10e2,	// (0x00039a4a) list_single_heading_pane_fp_ParamLimits

0x10e2,	// (0x00039a4a) list_single_heading_pane_fp

0x10e2,	// (0x00039a4a) list_single_pane_fp_ParamLimits

0x10e2,	// (0x00039a4a) list_single_pane_fp

0x10f9,	// (0x00039a61) list_single_pane_fp_g1_ParamLimits

0x10f9,	// (0x00039a61) list_single_pane_fp_g1

0xef12,	// (0x0004787a) list_single_pane_fp_g2_ParamLimits

0xef12,	// (0x0004787a) list_single_pane_fp_g2

0xf2ea,	// (0x00047c52) list_single_pane_fp_g3_ParamLimits

0xf2ea,	// (0x00047c52) list_single_pane_fp_g3

0x1105,	// (0x00039a6d) list_single_pane_fp_g4_ParamLimits

0x1105,	// (0x00039a6d) list_single_pane_fp_g4

0x0003,

0xfba0,	// (0x00048508) list_single_pane_fp_g_ParamLimits

0xfba0,	// (0x00048508) list_single_pane_fp_g

0xf2fe,	// (0x00047c66) list_single_pane_fp_t1_ParamLimits

0xf2fe,	// (0x00047c66) list_single_pane_fp_t1

0xf315,	// (0x00047c7d) list_single_graphic_pane_fp_g1_ParamLimits

0xf315,	// (0x00047c7d) list_single_graphic_pane_fp_g1

0x10f9,	// (0x00039a61) list_single_graphic_pane_fp_g2_ParamLimits

0x10f9,	// (0x00039a61) list_single_graphic_pane_fp_g2

0xef12,	// (0x0004787a) list_single_graphic_pane_fp_g3_ParamLimits

0xef12,	// (0x0004787a) list_single_graphic_pane_fp_g3

0xf2ea,	// (0x00047c52) list_single_graphic_pane_fp_g4_ParamLimits

0xf2ea,	// (0x00047c52) list_single_graphic_pane_fp_g4

0x1105,	// (0x00039a6d) list_single_graphic_pane_fp_g5_ParamLimits

0x1105,	// (0x00039a6d) list_single_graphic_pane_fp_g5

0x0004,

0xfba9,	// (0x00048511) list_single_graphic_pane_fp_g_ParamLimits

0xfba9,	// (0x00048511) list_single_graphic_pane_fp_g

0xf321,	// (0x00047c89) list_single_graphic_pane_fp_t1_ParamLimits

0xf321,	// (0x00047c89) list_single_graphic_pane_fp_t1

0xf315,	// (0x00047c7d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf315,	// (0x00047c7d) list_single_graphic_heading_pane_fp_g1

0x10f9,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x10f9,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2

0xef12,	// (0x0004787a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xef12,	// (0x0004787a) list_single_graphic_heading_pane_fp_g3

0xf2ea,	// (0x00047c52) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf2ea,	// (0x00047c52) list_single_graphic_heading_pane_fp_g4

0x1105,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x1105,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba9,	// (0x00048511) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00048511) list_single_graphic_heading_pane_fp_g

0xf337,	// (0x00047c9f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf337,	// (0x00047c9f) list_single_graphic_heading_pane_fp_t1

0xf34d,	// (0x00047cb5) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf34d,	// (0x00047cb5) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x0004851c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x0004851c) list_single_graphic_heading_pane_fp_t

0xf35f,	// (0x00047cc7) list_single_cale_day_pane_fp_g1_ParamLimits

0xf35f,	// (0x00047cc7) list_single_cale_day_pane_fp_g1

0x1111,	// (0x00039a79) list_single_cale_day_pane_fp_g2_ParamLimits

0x1111,	// (0x00039a79) list_single_cale_day_pane_fp_g2

0xf397,	// (0x00047cff) list_single_cale_day_pane_fp_g3_ParamLimits

0xf397,	// (0x00047cff) list_single_cale_day_pane_fp_g3

0xf3bf,	// (0x00047d27) list_single_cale_day_pane_fp_g4_ParamLimits

0xf3bf,	// (0x00047d27) list_single_cale_day_pane_fp_g4

0xf3e3,	// (0x00047d4b) list_single_cale_day_pane_fp_g5_ParamLimits

0xf3e3,	// (0x00047d4b) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb9,	// (0x00048521) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb9,	// (0x00048521) list_single_cale_day_pane_fp_g

0xf407,	// (0x00047d6f) list_single_cale_day_pane_fp_t1_ParamLimits

0xf407,	// (0x00047d6f) list_single_cale_day_pane_fp_t1

0xf42d,	// (0x00047d95) list_single_cale_day_pane_fp_t2_ParamLimits

0xf42d,	// (0x00047d95) list_single_cale_day_pane_fp_t2

0xf446,	// (0x00047dae) list_single_cale_day_pane_fp_t3_ParamLimits

0xf446,	// (0x00047dae) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc4,	// (0x0004852c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc4,	// (0x0004852c) list_single_cale_day_pane_fp_t

0x10f9,	// (0x00039a61) list_empty_pane_fp_g1_ParamLimits

0x10f9,	// (0x00039a61) list_empty_pane_fp_g1

0xf45f,	// (0x00047dc7) list_empty_pane_fp_t1

0xf46d,	// (0x00047dd5) list_empty_pane_fp_t2

0x0001,

0xfbcb,	// (0x00048533) list_empty_pane_fp_t

0x10f9,	// (0x00039a61) list_single_heading_pane_fp_g1_ParamLimits

0x10f9,	// (0x00039a61) list_single_heading_pane_fp_g1

0xef12,	// (0x0004787a) list_single_heading_pane_fp_g2_ParamLimits

0xef12,	// (0x0004787a) list_single_heading_pane_fp_g2

0xf2ea,	// (0x00047c52) list_single_heading_pane_fp_g3_ParamLimits

0xf2ea,	// (0x00047c52) list_single_heading_pane_fp_g3

0x0002,

0xfbd0,	// (0x00048538) list_single_heading_pane_fp_g_ParamLimits

0xfbd0,	// (0x00048538) list_single_heading_pane_fp_g

0xf47b,	// (0x00047de3) list_single_heading_pane_fp_t1_ParamLimits

0xf47b,	// (0x00047de3) list_single_heading_pane_fp_t1

0xf48d,	// (0x00047df5) list_single_heading_pane_fp_t2_ParamLimits

0xf48d,	// (0x00047df5) list_single_heading_pane_fp_t2

0x0001,

0xfbd7,	// (0x0004853f) list_single_heading_pane_fp_t_ParamLimits

0xfbd7,	// (0x0004853f) list_single_heading_pane_fp_t

0xc437,	// (0x00044d9f) aid_size_cell_fast

0x8cdc,	// (0x00041644) soft_indicator_pane_cp1_t1

0xc474,	// (0x00044ddc) cell_app_pane_cp2_ParamLimits

0xc474,	// (0x00044ddc) cell_app_pane_cp2

0x6989,	// (0x0003f2f1) fep_hwr_candidate_drop_down_list_pane

0x6b61,	// (0x0003f4c9) fep_hwr_candidate_pane_g3_ParamLimits

0x6b61,	// (0x0003f4c9) fep_hwr_candidate_pane_g3

0xa821,	// (0x00043189) fep_hwr_candidate_pane_g4_ParamLimits

0xa821,	// (0x00043189) fep_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x000484ae) fep_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x000484ae) fep_hwr_candidate_pane_g

0x0ba8,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x0ba8,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane

0x0fc1,	// (0x00039929) fep_vkb_candidate_pane_g3

0x0fc9,	// (0x00039931) fep_vkb_candidate_pane_g4

0x0002,

0xfb73,	// (0x000484db) fep_vkb_candidate_pane_g

0x6bcc,	// (0x0003f534) cell_hwr_candidate_pane_g1_ParamLimits

0x6bda,	// (0x0003f542) cell_hwr_candidate_pane_g3_ParamLimits

0x6bda,	// (0x0003f542) cell_hwr_candidate_pane_g3

0x1d90,	// (0x0003a6f8) cell_hwr_candidate_pane_g4_ParamLimits

0x1d90,	// (0x0003a6f8) cell_hwr_candidate_pane_g4

0x0002,

0xfb92,	// (0x000484fa) cell_hwr_candidate_pane_g_ParamLimits

0xfb92,	// (0x000484fa) cell_hwr_candidate_pane_g

0x1030,	// (0x00039998) cell_vkb_candidate_pane_g3_ParamLimits

0x1030,	// (0x00039998) cell_vkb_candidate_pane_g3

0x104b,	// (0x000399b3) cell_vkb_candidate_pane_g4_ParamLimits

0x104b,	// (0x000399b3) cell_vkb_candidate_pane_g4

0x111d,	// (0x00039a85) cell_app_pane_cp2_g1_ParamLimits

0x111d,	// (0x00039a85) cell_app_pane_cp2_g1

0x113b,	// (0x00039aa3) cell_app_pane_cp2_g2_ParamLimits

0x113b,	// (0x00039aa3) cell_app_pane_cp2_g2

0x0001,

0xfbdc,	// (0x00048544) cell_app_pane_cp2_g_ParamLimits

0xfbdc,	// (0x00048544) cell_app_pane_cp2_g

0x1147,	// (0x00039aaf) cell_app_pane_cp2_t1_ParamLimits

0x1147,	// (0x00039aaf) cell_app_pane_cp2_t1

0xc2e0,	// (0x00044c48) grid_highlight_pane_cp1_ParamLimits

0xc2e0,	// (0x00044c48) grid_highlight_pane_cp1

0x6c19,	// (0x0003f581) cell_hwr_candidate_pane_cp1_ParamLimits

0x6c19,	// (0x0003f581) cell_hwr_candidate_pane_cp1

0x6bcc,	// (0x0003f534) fep_hwr_candidate_drop_down_list_pane_g1

0x6c38,	// (0x0003f5a0) fep_hwr_candidate_drop_down_list_pane_g2

0x6c45,	// (0x0003f5ad) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x00048549) fep_hwr_candidate_drop_down_list_pane_g

0x6c52,	// (0x0003f5ba) fep_hwr_candidate_drop_down_list_scroll_pane

0x6c5b,	// (0x0003f5c3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6c5b,	// (0x0003f5c3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6c68,	// (0x0003f5d0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6c68,	// (0x0003f5d0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6c75,	// (0x0003f5dd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6c75,	// (0x0003f5dd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6c82,	// (0x0003f5ea) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c82,	// (0x0003f5ea) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6c9d,	// (0x0003f605) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6c9d,	// (0x0003f605) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6cb8,	// (0x0003f620) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6cb8,	// (0x0003f620) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6cd3,	// (0x0003f63b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6cd3,	// (0x0003f63b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6cee,	// (0x0003f656) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6cee,	// (0x0003f656) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x00048550) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x00048550) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x118e,	// (0x00039af6) cell_vkb_candidate_pane_cp1_ParamLimits

0x118e,	// (0x00039af6) cell_vkb_candidate_pane_cp1

0x0cc1,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x0cc1,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1

0x1159,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x1159,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2

0x1166,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x1166,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf9,	// (0x00048561) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf9,	// (0x00048561) fep_vkb_candidate_drop_down_list_pane_g

0x11ae,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x11ae,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane

0x11bb,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x11bb,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x11c8,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x11c8,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x11d4,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x11d4,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x0fee,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0fee,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x100f,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x100f,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x11e0,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x11e0,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x1201,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1201,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x1173,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1173,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x00048568) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x00048568) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x893b,	// (0x000412a3) title_pane_g1_ParamLimits

0x894c,	// (0x000412b4) title_pane_g2_ParamLimits

0xf592,	// (0x00047efa) title_pane_g_ParamLimits

0xc7f7,	// (0x0004515f) aid_call2_pane

0xc7ff,	// (0x00045167) aid_call_pane

0xc807,	// (0x0004516f) popup_clock_analogue_window_g1

0xc807,	// (0x0004516f) popup_clock_analogue_window_g2

0x6074,	// (0x0003e9dc) popup_clock_analogue_window_g3

0x607d,	// (0x0003e9e5) popup_clock_analogue_window_g4

0x8786,	// (0x000410ee) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x000480a9) popup_clock_analogue_window_g

0x6085,	// (0x0003e9ed) popup_clock_analogue_window_t1

0x6093,	// (0x0003e9fb) clock_digital_number_pane_ParamLimits

0x6093,	// (0x0003e9fb) clock_digital_number_pane

0x609f,	// (0x0003ea07) clock_digital_number_pane_cp02_ParamLimits

0x609f,	// (0x0003ea07) clock_digital_number_pane_cp02

0x60ab,	// (0x0003ea13) clock_digital_number_pane_cp03_ParamLimits

0x60ab,	// (0x0003ea13) clock_digital_number_pane_cp03

0x60b7,	// (0x0003ea1f) clock_digital_number_pane_cp04_ParamLimits

0x60b7,	// (0x0003ea1f) clock_digital_number_pane_cp04

0x60c3,	// (0x0003ea2b) clock_digital_separator_pane_ParamLimits

0x60c3,	// (0x0003ea2b) clock_digital_separator_pane

0x60cf,	// (0x0003ea37) popup_clock_digital_window_t1_ParamLimits

0x60cf,	// (0x0003ea37) popup_clock_digital_window_t1

0x8786,	// (0x000410ee) clock_digital_number_pane_g1

0x8786,	// (0x000410ee) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x000480b4) clock_digital_number_pane_g

0x8786,	// (0x000410ee) clock_digital_separator_pane_g1

0x8786,	// (0x000410ee) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x000480b4) clock_digital_separator_pane_g

0x9ac3,	// (0x0004242b) aid_fill_nsta_ParamLimits

0x9bf2,	// (0x0004255a) indicator_nsta_pane_ParamLimits

0xd14d,	// (0x00045ab5) popup_clock_analogue_window

0xd14d,	// (0x00045ab5) popup_clock_digital_window

0xec50,	// (0x000475b8) grid_indicator_nsta_pane_ParamLimits

0xec75,	// (0x000475dd) clock_nsta_pane_t2

0x0001,

0xfad3,	// (0x0004843b) clock_nsta_pane_t

0x6038,	// (0x0003e9a0) aid_size_max_handle

0x9132,	// (0x00041a9a) aid_size_min_handle

0xcd16,	// (0x0004567e) editor_scroll_pane

0x1222,	// (0x00039b8a) ex_editor_pane

0xc3f3,	// (0x00044d5b) scroll_pane_cp13

0xc267,	// (0x00044bcf) scroll_pane_cp14

0xc831,	// (0x00045199) scroll_pane_cp36

0x914c,	// (0x00041ab4) list_single_graphic_hl_pane_cp2_ParamLimits

0x914c,	// (0x00041ab4) list_single_graphic_hl_pane_cp2

0xa4b5,	// (0x00042e1d) list_single_graphic_hl_pane_ParamLimits

0xa4b5,	// (0x00042e1d) list_single_graphic_hl_pane

0xf4a3,	// (0x00047e0b) aid_size_min_hl_cp1

0x122a,	// (0x00039b92) list_highlight_pane_cp34_ParamLimits

0x122a,	// (0x00039b92) list_highlight_pane_cp34

0x123b,	// (0x00039ba3) list_single_graphic_hl_pane_g1_ParamLimits

0x123b,	// (0x00039ba3) list_single_graphic_hl_pane_g1

0x44f8,	// (0x0003ce60) list_single_graphic_hl_pane_g2_ParamLimits

0x44f8,	// (0x0003ce60) list_single_graphic_hl_pane_g2

0x44f8,	// (0x0003ce60) list_single_graphic_hl_pane_g3_ParamLimits

0x44f8,	// (0x0003ce60) list_single_graphic_hl_pane_g3

0xf4ac,	// (0x00047e14) list_single_graphic_hl_pane_g4_ParamLimits

0xf4ac,	// (0x00047e14) list_single_graphic_hl_pane_g4

0x4bd4,	// (0x0003d53c) list_single_graphic_hl_pane_g5_ParamLimits

0x4bd4,	// (0x0003d53c) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x00048579) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x00048579) list_single_graphic_hl_pane_g

0x4504,	// (0x0003ce6c) list_single_graphic_hl_pane_t1_ParamLimits

0x4504,	// (0x0003ce6c) list_single_graphic_hl_pane_t1

0x1248,	// (0x00039bb0) aid_size_min_hl_cp2

0x1251,	// (0x00039bb9) list_highlight_pane_cp34_cp2_ParamLimits

0x1251,	// (0x00039bb9) list_highlight_pane_cp34_cp2

0x123b,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x123b,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2

0x125e,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x125e,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2

0x126a,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x126a,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2

0xcc4d,	// (0x000455b5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcc4d,	// (0x000455b5) list_single_graphic_hl_pane_g4_cp2

0x1278,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x1278,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2

0x92e7,	// (0x00041c4f) control_pane_g4_ParamLimits

0x92e7,	// (0x00041c4f) control_pane_g4

0xc42b,	// (0x00044d93) bg_popup_sub_pane_cp10_ParamLimits

0x0a32,	// (0x0003939a) list_choice_list_pane_ParamLimits

0x0a41,	// (0x000393a9) scroll_pane_cp23

0x8d5c,	// (0x000416c4) bg_popup_preview_window_pane_cp02_ParamLimits

0x109c,	// (0x00039a04) list_preview_fixed_pane_ParamLimits

0x10b2,	// (0x00039a1a) list_preview_fixed_pane_cp_ParamLimits

0x10b2,	// (0x00039a1a) list_preview_fixed_pane_cp

0x10be,	// (0x00039a26) popup_preview_fixed_window_g1_ParamLimits

0x10be,	// (0x00039a26) popup_preview_fixed_window_g1

0x10ca,	// (0x00039a32) popup_preview_fixed_window_g2_ParamLimits

0x10ca,	// (0x00039a32) popup_preview_fixed_window_g2

0x0002,

0xfb99,	// (0x00048501) popup_preview_fixed_window_g_ParamLimits

0xfb99,	// (0x00048501) popup_preview_fixed_window_g

0x5fac,	// (0x0003e914) aid_navi_side_left_pane_ParamLimits

0x5fc1,	// (0x0003e929) aid_navi_side_right_pane_ParamLimits

0x5fd9,	// (0x0003e941) navi_icon_pane_stacon_ParamLimits

0x5fed,	// (0x0003e955) navi_navi_pane_stacon_ParamLimits

0x5fd9,	// (0x0003e941) navi_text_pane_stacon_ParamLimits

0x877c,	// (0x000410e4) main_text_info_pane

0x12a2,	// (0x00039c0a) listscroll_text_info_pane

0x12aa,	// (0x00039c12) list_text_info_pane_ParamLimits

0x12aa,	// (0x00039c12) list_text_info_pane

0x12b9,	// (0x00039c21) scroll_pane_cp24_ParamLimits

0x12b9,	// (0x00039c21) scroll_pane_cp24

0xa8df,	// (0x00043247) list_text_info_pane_t1_ParamLimits

0xa8df,	// (0x00043247) list_text_info_pane_t1

0x9453,	// (0x00041dbb) popup_fast_swap2_window_ParamLimits

0x9453,	// (0x00041dbb) popup_fast_swap2_window

0x1310,	// (0x00039c78) aid_size_cell_fast2

0x877c,	// (0x000410e4) bg_popup_window_pane_cp17

0xd5fd,	// (0x00045f65) heading_pane_cp2

0xbf9a,	// (0x00044902) listscroll_fast2_pane

0x131a,	// (0x00039c82) grid_fast2_pane

0x1324,	// (0x00039c8c) listscroll_fast2_pane_g1

0x132c,	// (0x00039c94) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x00048584) listscroll_fast2_pane_g

0xc3f3,	// (0x00044d5b) scroll_pane_cp26

0x1336,	// (0x00039c9e) cell_fast2_pane_ParamLimits

0x1336,	// (0x00039c9e) cell_fast2_pane

0x134b,	// (0x00039cb3) cell_fast2_pane_g1

0x1354,	// (0x00039cbc) cell_fast2_pane_g2

0x135d,	// (0x00039cc5) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x00048589) cell_fast2_pane_g

0xc02e,	// (0x00044996) grid_highlight_pane_cp9

0xc043,	// (0x000449ab) main_eswt_pane_ParamLimits

0xc043,	// (0x000449ab) main_eswt_pane

0x12ce,	// (0x00039c36) list_single_text_info_pane

0x1365,	// (0x00039ccd) eswt_ctrl_button_pane

0x1365,	// (0x00039ccd) eswt_ctrl_canvas_pane

0x136d,	// (0x00039cd5) eswt_ctrl_combo_pane

0x1365,	// (0x00039ccd) eswt_ctrl_default_pane

0x1365,	// (0x00039ccd) eswt_ctrl_label_pane

0x1375,	// (0x00039cdd) eswt_ctrl_wait_pane

0x137d,	// (0x00039ce5) eswt_shell_pane

0x877c,	// (0x000410e4) listscroll_eswt_app_pane

0x139d,	// (0x00039d05) popup_eswt_tasktip_window_ParamLimits

0x139d,	// (0x00039d05) popup_eswt_tasktip_window

0xd34a,	// (0x00045cb2) bg_popup_window_pane_cp18

0x13ae,	// (0x00039d16) eswt_control_pane_g1_ParamLimits

0x13ae,	// (0x00039d16) eswt_control_pane_g1

0x13bb,	// (0x00039d23) eswt_control_pane_g2_ParamLimits

0x13bb,	// (0x00039d23) eswt_control_pane_g2

0x13c8,	// (0x00039d30) eswt_control_pane_g3_ParamLimits

0x13c8,	// (0x00039d30) eswt_control_pane_g3

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_ParamLimits

0x13d5,	// (0x00039d3d) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x00048590) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x00048590) eswt_control_pane_g

0xc2e0,	// (0x00044c48) bg_button_pane_ParamLimits

0xc2e0,	// (0x00044c48) bg_button_pane

0xc043,	// (0x000449ab) common_borders_pane_copy2_ParamLimits

0xc043,	// (0x000449ab) common_borders_pane_copy2

0x13e2,	// (0x00039d4a) control_button_pane_g1_ParamLimits

0x13e2,	// (0x00039d4a) control_button_pane_g1

0x13ee,	// (0x00039d56) control_button_pane_g2_ParamLimits

0x13ee,	// (0x00039d56) control_button_pane_g2

0x13fa,	// (0x00039d62) control_button_pane_g3_ParamLimits

0x13fa,	// (0x00039d62) control_button_pane_g3

0x0002,

0xfc31,	// (0x00048599) control_button_pane_g_ParamLimits

0xfc31,	// (0x00048599) control_button_pane_g

0x140e,	// (0x00039d76) control_button_pane_t1

0x141c,	// (0x00039d84) control_button_pane_t2

0x0001,

0xfc38,	// (0x000485a0) control_button_pane_t

0xd25a,	// (0x00045bc2) bg_button_pane_g1

0xd26a,	// (0x00045bd2) bg_button_pane_g2

0xd262,	// (0x00045bca) bg_button_pane_g3

0xd27a,	// (0x00045be2) bg_button_pane_g4

0xd272,	// (0x00045bda) bg_button_pane_g5

0xd282,	// (0x00045bea) bg_button_pane_g6

0xd28a,	// (0x00045bf2) bg_button_pane_g7

0xd29a,	// (0x00045c02) bg_button_pane_g8

0xd292,	// (0x00045bfa) bg_button_pane_g9

0x0008,

0xf89f,	// (0x00048207) bg_button_pane_g

0x09ed,	// (0x00039355) common_borders_pane_ParamLimits

0x09ed,	// (0x00039355) common_borders_pane

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy1_ParamLimits

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy1

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy1_ParamLimits

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy1

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy1_ParamLimits

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy1

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy1_ParamLimits

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy1

0x0a28,	// (0x00039390) bg_eswt_ctrl_canvas_pane_g1

0x09ed,	// (0x00039355) common_borders_pane_cp2_ParamLimits

0x09ed,	// (0x00039355) common_borders_pane_cp2

0x09ed,	// (0x00039355) common_borders_pane_cp3_ParamLimits

0x09ed,	// (0x00039355) common_borders_pane_cp3

0x142a,	// (0x00039d92) separator_horizontal_pane

0x1432,	// (0x00039d9a) separator_vertical_pane

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy2_ParamLimits

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy2

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy2_ParamLimits

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy2

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy2_ParamLimits

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy2

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy2_ParamLimits

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy2

0x877c,	// (0x000410e4) common_borders_pane_cp4

0x143b,	// (0x00039da3) separator_horizontal_pane_g1

0x1444,	// (0x00039dac) separator_horizontal_pane_g2

0x144d,	// (0x00039db5) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x000485a5) separator_horizontal_pane_g

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy3_ParamLimits

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy3

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy3_ParamLimits

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy3

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy3_ParamLimits

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy3

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy3_ParamLimits

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy3

0x877c,	// (0x000410e4) common_borders_pane_cp5

0x1456,	// (0x00039dbe) separator_vertical_pane_g1

0x145f,	// (0x00039dc7) separator_vertical_pane_g2

0x1468,	// (0x00039dd0) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x000485ac) separator_vertical_pane_g

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy4_ParamLimits

0x13ae,	// (0x00039d16) eswt_control_pane_g1_copy4

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy4_ParamLimits

0x13bb,	// (0x00039d23) eswt_control_pane_g2_copy4

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy4_ParamLimits

0x13c8,	// (0x00039d30) eswt_control_pane_g3_copy4

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy4_ParamLimits

0x13d5,	// (0x00039d3d) eswt_control_pane_g4_copy4

0xa8fd,	// (0x00043265) eswt_ctrl_combo_button_pane

0xa905,	// (0x0004326d) eswt_ctrl_input_pane

0xa90d,	// (0x00043275) popup_choice_list_window_cp70

0xa915,	// (0x0004327d) eswt_ctrl_input_pane_t1

0x877c,	// (0x000410e4) input_focus_pane_cp70

0x09ed,	// (0x00039355) bg_button_pane_cp70_ParamLimits

0x09ed,	// (0x00039355) bg_button_pane_cp70

0xa923,	// (0x0004328b) eswt_ctrl_combo_button_pane_g1

0x149f,	// (0x00039e07) wait_bar_pane_cp70

0xd34a,	// (0x00045cb2) bg_popup_window_pane_cp70_ParamLimits

0xd34a,	// (0x00045cb2) bg_popup_window_pane_cp70

0x14a7,	// (0x00039e0f) popup_eswt_tasktip_window_t1

0x14bd,	// (0x00039e25) wait_bar_pane_cp71_ParamLimits

0x14bd,	// (0x00039e25) wait_bar_pane_cp71

0x14c9,	// (0x00039e31) grid_eswt_app_pane

0xc63d,	// (0x00044fa5) scroll_pane_cp70

0xa92b,	// (0x00043293) cell_eswt_app_pane_ParamLimits

0xa92b,	// (0x00043293) cell_eswt_app_pane

0xa955,	// (0x000432bd) cell_eswt_app_pane_g1_ParamLimits

0xa955,	// (0x000432bd) cell_eswt_app_pane_g1

0xa984,	// (0x000432ec) cell_eswt_app_pane_g2_ParamLimits

0xa984,	// (0x000432ec) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x000485b3) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x000485b3) cell_eswt_app_pane_g

0xa9ad,	// (0x00043315) cell_eswt_app_pane_t1_ParamLimits

0xa9ad,	// (0x00043315) cell_eswt_app_pane_t1

0x1590,	// (0x00039ef8) grid_highlight_pane_cp70_ParamLimits

0x1590,	// (0x00039ef8) grid_highlight_pane_cp70

0xcbe9,	// (0x00045551) set_content_pane_g1

0xceed,	// (0x00045855) status_small_volume_pane

0x6d09,	// (0x0003f671) status_small_volume_pane_g1

0x6d11,	// (0x0003f679) volume_small2_pane

0x6d1a,	// (0x0003f682) volume_small2_pane_g1

0x6d23,	// (0x0003f68b) volume_small2_pane_g2

0x6d2c,	// (0x0003f694) volume_small2_pane_g3

0x6d35,	// (0x0003f69d) volume_small2_pane_g4

0x6d3e,	// (0x0003f6a6) volume_small2_pane_g5

0x6d47,	// (0x0003f6af) volume_small2_pane_g6

0x6d50,	// (0x0003f6b8) volume_small2_pane_g7

0x6d59,	// (0x0003f6c1) volume_small2_pane_g8

0x6d62,	// (0x0003f6ca) volume_small2_pane_g9

0x6d6b,	// (0x0003f6d3) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x000485b8) volume_small2_pane_g

0x0e09,	// (0x00039771) fep_vkb_top_text_pane_g1_ParamLimits

0xa887,	// (0x000431ef) fep_vkb_top_text_pane_t1_ParamLimits

0x10d6,	// (0x00039a3e) popup_preview_fixed_window_g3_ParamLimits

0x10d6,	// (0x00039a3e) popup_preview_fixed_window_g3

0x9a56,	// (0x000423be) popup_toolbar_trans_pane

0xa32d,	// (0x00042c95) aid_height_set_list_ParamLimits

0xcf62,	// (0x000458ca) aid_size_parent_ParamLimits

0xc42b,	// (0x00044d93) list_highlight_pane_cp2_ParamLimits

0xcbe9,	// (0x00045551) set_content_pane_g1_ParamLimits

0x44e6,	// (0x0003ce4e) list_single_image_pane_ParamLimits

0x44e6,	// (0x0003ce4e) list_single_image_pane

0xa9df,	// (0x00043347) aid_size_cell_image_ParamLimits

0xa9df,	// (0x00043347) aid_size_cell_image

0xa9ec,	// (0x00043354) grid_single_image_pane_ParamLimits

0xa9ec,	// (0x00043354) grid_single_image_pane

0xc26f,	// (0x00044bd7) list_single_image_pane_g1_ParamLimits

0xc26f,	// (0x00044bd7) list_single_image_pane_g1

0xc2fa,	// (0x00044c62) list_single_image_pane_g2_ParamLimits

0xc2fa,	// (0x00044c62) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x000485cd) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x000485cd) list_single_image_pane_g

0x15b5,	// (0x00039f1d) list_single_image_pane_t1_ParamLimits

0x15b5,	// (0x00039f1d) list_single_image_pane_t1

0xa9f8,	// (0x00043360) cell_image_list_pane_ParamLimits

0xa9f8,	// (0x00043360) cell_image_list_pane

0xaa0c,	// (0x00043374) cell_image_list_pane_g1

0xaa15,	// (0x0004337d) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x000485d2) cell_image_list_pane_g

0x15f1,	// (0x00039f59) aid_size_cell_tb_trans_pane

0xc2e0,	// (0x00044c48) bg_tb_trans_pane

0x1603,	// (0x00039f6b) grid_tb_trans_pane

0xd25a,	// (0x00045bc2) bg_tb_trans_pane_g1

0xd26a,	// (0x00045bd2) bg_tb_trans_pane_g2

0xd262,	// (0x00045bca) bg_tb_trans_pane_g3

0xd27a,	// (0x00045be2) bg_tb_trans_pane_g4

0xd272,	// (0x00045bda) bg_tb_trans_pane_g5

0xd29a,	// (0x00045c02) bg_tb_trans_pane_g6

0xd292,	// (0x00045bfa) bg_tb_trans_pane_g7

0xd282,	// (0x00045bea) bg_tb_trans_pane_g8

0xd28a,	// (0x00045bf2) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x000485d7) bg_tb_trans_pane_g

0x1617,	// (0x00039f7f) cell_toolbar_trans_pane_ParamLimits

0x1617,	// (0x00039f7f) cell_toolbar_trans_pane

0x0a28,	// (0x00039390) cell_toolbar_trans_pane_g1

0xa6d6,	// (0x0004303e) list_form2_midp_pane_t1

0xa6e4,	// (0x0004304c) list_form2_midp_pane_t2

0x0001,

0xfb0c,	// (0x00048474) list_form2_midp_pane_t

0xecfa,	// (0x00047662) scroll_pane_cp51_ParamLimits

0xee70,	// (0x000477d8) form2_midp_wait_pane_g1

0xee79,	// (0x000477e1) form2_midp_wait_pane_g2

0xee82,	// (0x000477ea) form2_midp_wait_pane_g3

0x0002,

0xfb21,	// (0x00048489) form2_midp_wait_pane_g

0x8a82,	// (0x000413ea) list_highlight_pane_cp21_ParamLimits

0xeea2,	// (0x0004780a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeeb1,	// (0x00047819) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe3bf,	// (0x00046d27) list_single_2graphic_im_pane_ParamLimits

0xe3bf,	// (0x00046d27) list_single_2graphic_im_pane

0xaa1e,	// (0x00043386) list_single_2graphic_im_pane_g1_ParamLimits

0xaa1e,	// (0x00043386) list_single_2graphic_im_pane_g1

0xaa2f,	// (0x00043397) list_single_2graphic_im_pane_g2_ParamLimits

0xaa2f,	// (0x00043397) list_single_2graphic_im_pane_g2

0xaa3b,	// (0x000433a3) list_single_2graphic_im_pane_g3_ParamLimits

0xaa3b,	// (0x000433a3) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x000485ea) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x000485ea) list_single_2graphic_im_pane_g

0xaa4f,	// (0x000433b7) list_single_2graphic_im_pane_t1_ParamLimits

0xaa4f,	// (0x000433b7) list_single_2graphic_im_pane_t1

0x10e2,	// (0x00039a4a) list_single_graphic_2heading_pane_fp_ParamLimits

0x10e2,	// (0x00039a4a) list_single_graphic_2heading_pane_fp

0xf315,	// (0x00047c7d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf315,	// (0x00047c7d) list_single_graphic_2heading_pane_fp_g1

0x10f9,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x10f9,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2

0xef12,	// (0x0004787a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xef12,	// (0x0004787a) list_single_graphic_2heading_pane_fp_g3

0xf2ea,	// (0x00047c52) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf2ea,	// (0x00047c52) list_single_graphic_2heading_pane_fp_g4

0x1105,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x1105,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba9,	// (0x00048511) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00048511) list_single_graphic_2heading_pane_fp_g

0xf4b8,	// (0x00047e20) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf4b8,	// (0x00047e20) list_single_graphic_2heading_pane_fp_t1

0xf34d,	// (0x00047cb5) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf34d,	// (0x00047cb5) list_single_graphic_2heading_pane_fp_t2

0xf4ce,	// (0x00047e36) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf4ce,	// (0x00047e36) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x000485f3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x000485f3) list_single_graphic_2heading_pane_fp_t

0x0ac8,	// (0x00039430) fep_hwr_write_pane_g5_ParamLimits

0x0ac8,	// (0x00039430) fep_hwr_write_pane_g5

0x0ad4,	// (0x0003943c) fep_hwr_write_pane_g6_ParamLimits

0x0ad4,	// (0x0003943c) fep_hwr_write_pane_g6

0x137d,	// (0x00039ce5) eswt_shell_pane_ParamLimits

0xd34a,	// (0x00045cb2) bg_popup_window_pane_cp18_ParamLimits

0xe2ff,	// (0x00046c67) heading_pane_cp70

0x14a7,	// (0x00039e0f) popup_eswt_tasktip_window_t1_ParamLimits

0x9b17,	// (0x0004247f) aid_touch_tab_arrow_left

0x9b2d,	// (0x00042495) aid_touch_tab_arrow_right

0x8964,	// (0x000412cc) title_pane_g3_ParamLimits

0x8964,	// (0x000412cc) title_pane_g3

0xc29f,	// (0x00044c07) set_value_pane_g1

0x9a56,	// (0x000423be) popup_toolbar_trans_pane_ParamLimits

0x15f1,	// (0x00039f59) aid_size_cell_tb_trans_pane_ParamLimits

0xc2e0,	// (0x00044c48) bg_tb_trans_pane_ParamLimits

0x1603,	// (0x00039f6b) grid_tb_trans_pane_ParamLimits

0x8d5c,	// (0x000416c4) cont_note_pane_ParamLimits

0x8d5c,	// (0x000416c4) cont_note_pane

0xc043,	// (0x000449ab) cont_snote2_single_text_pane_ParamLimits

0xc043,	// (0x000449ab) cont_snote2_single_text_pane

0xc043,	// (0x000449ab) cont_snote2_single_graphic_pane_ParamLimits

0xc043,	// (0x000449ab) cont_snote2_single_graphic_pane

0xd7e2,	// (0x0004614a) cont_note_wait_pane_ParamLimits

0xd7e2,	// (0x0004614a) cont_note_wait_pane

0xd7e2,	// (0x0004614a) cont_note_image_pane_ParamLimits

0xd7e2,	// (0x0004614a) cont_note_image_pane

0x16ab,	// (0x0003a013) popup_note2_window_g1_ParamLimits

0x16ab,	// (0x0003a013) popup_note2_window_g1

0x16dc,	// (0x0003a044) popup_note2_window_t1_ParamLimits

0x16dc,	// (0x0003a044) popup_note2_window_t1

0x1721,	// (0x0003a089) popup_note2_window_t2_ParamLimits

0x1721,	// (0x0003a089) popup_note2_window_t2

0x1766,	// (0x0003a0ce) popup_note2_window_t3_ParamLimits

0x1766,	// (0x0003a0ce) popup_note2_window_t3

0x17ab,	// (0x0003a113) popup_note2_window_t4_ParamLimits

0x17ab,	// (0x0003a113) popup_note2_window_t4

0x8dd4,	// (0x0004173c) popup_note2_window_t5_ParamLimits

0x8dd4,	// (0x0004173c) popup_note2_window_t5

0x0004,

0xfc97,	// (0x000485ff) popup_note2_window_t_ParamLimits

0xfc97,	// (0x000485ff) popup_note2_window_t

0x17da,	// (0x0003a142) popup_note2_image_window_g1_ParamLimits

0x17da,	// (0x0003a142) popup_note2_image_window_g1

0x17e6,	// (0x0003a14e) popup_note2_image_window_g2_ParamLimits

0x17e6,	// (0x0003a14e) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x0004860a) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x0004860a) popup_note2_image_window_g

0x17f8,	// (0x0003a160) popup_note2_image_window_t1_ParamLimits

0x17f8,	// (0x0003a160) popup_note2_image_window_t1

0x1810,	// (0x0003a178) popup_note2_image_window_t2_ParamLimits

0x1810,	// (0x0003a178) popup_note2_image_window_t2

0x1828,	// (0x0003a190) popup_note2_image_window_t3_ParamLimits

0x1828,	// (0x0003a190) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x0004860f) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x0004860f) popup_note2_image_window_t

0xd7f0,	// (0x00046158) popup_note2_wait_window_g1_ParamLimits

0xd7f0,	// (0x00046158) popup_note2_wait_window_g1

0xd7fc,	// (0x00046164) popup_note2_wait_window_g2_ParamLimits

0xd7fc,	// (0x00046164) popup_note2_wait_window_g2

0xd808,	// (0x00046170) popup_note2_wait_window_g3_ParamLimits

0xd808,	// (0x00046170) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x000481e9) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x000481e9) popup_note2_wait_window_g

0x1844,	// (0x0003a1ac) popup_note2_wait_window_t1_ParamLimits

0x1844,	// (0x0003a1ac) popup_note2_wait_window_t1

0x1862,	// (0x0003a1ca) popup_note2_wait_window_t2_ParamLimits

0x1862,	// (0x0003a1ca) popup_note2_wait_window_t2

0x1880,	// (0x0003a1e8) popup_note2_wait_window_t3_ParamLimits

0x1880,	// (0x0003a1e8) popup_note2_wait_window_t3

0x1892,	// (0x0003a1fa) popup_note2_wait_window_t4_ParamLimits

0x1892,	// (0x0003a1fa) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x00048616) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x00048616) popup_note2_wait_window_t

0x18a4,	// (0x0003a20c) wait_bar2_pane_ParamLimits

0x18a4,	// (0x0003a20c) wait_bar2_pane

0x18bc,	// (0x0003a224) popup_snote2_single_text_window_g1_ParamLimits

0x18bc,	// (0x0003a224) popup_snote2_single_text_window_g1

0x18e4,	// (0x0003a24c) popup_snote2_single_text_window_t1_ParamLimits

0x18e4,	// (0x0003a24c) popup_snote2_single_text_window_t1

0x1930,	// (0x0003a298) popup_snote2_single_text_window_t2_ParamLimits

0x1930,	// (0x0003a298) popup_snote2_single_text_window_t2

0x197c,	// (0x0003a2e4) popup_snote2_single_text_window_t3_ParamLimits

0x197c,	// (0x0003a2e4) popup_snote2_single_text_window_t3

0x19bd,	// (0x0003a325) popup_snote2_single_text_window_t4_ParamLimits

0x19bd,	// (0x0003a325) popup_snote2_single_text_window_t4

0x19f3,	// (0x0003a35b) popup_snote2_single_text_window_t5_ParamLimits

0x19f3,	// (0x0003a35b) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x0004861f) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x0004861f) popup_snote2_single_text_window_t

0x1a1e,	// (0x0003a386) popup_snote2_single_graphic_window_g1_ParamLimits

0x1a1e,	// (0x0003a386) popup_snote2_single_graphic_window_g1

0x1a46,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2_ParamLimits

0x1a46,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x0004862a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x0004862a) popup_snote2_single_graphic_window_g

0x1a6e,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1_ParamLimits

0x1a6e,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1

0x1aba,	// (0x0003a422) popup_snote2_single_graphic_window_t2_ParamLimits

0x1aba,	// (0x0003a422) popup_snote2_single_graphic_window_t2

0x197c,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3_ParamLimits

0x197c,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3

0x19bd,	// (0x0003a325) popup_snote2_single_graphic_window_t4_ParamLimits

0x19bd,	// (0x0003a325) popup_snote2_single_graphic_window_t4

0x19f3,	// (0x0003a35b) popup_snote2_single_graphic_window_t5_ParamLimits

0x19f3,	// (0x0003a35b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x0004862f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x0004862f) popup_snote2_single_graphic_window_t

0xecaa,	// (0x00047612) clock_nsta_pane_cp2_t1

0xecaa,	// (0x00047612) clock_nsta_pane_cp2_t2

0x0001,

0xfae2,	// (0x0004844a) clock_nsta_pane_cp2_t

0xefe1,	// (0x00047949) form_field_data_wide_pane_g1_ParamLimits

0xc26f,	// (0x00044bd7) form_field_data_wide_pane_g2_ParamLimits

0xc26f,	// (0x00044bd7) form_field_data_wide_pane_g2

0xc2fa,	// (0x00044c62) form_field_data_wide_pane_g3_ParamLimits

0xc2fa,	// (0x00044c62) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004802c) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004802c) form_field_data_wide_pane_g

0xa5ec,	// (0x00042f54) grid_touch_3_pane_ParamLimits

0xa5ec,	// (0x00042f54) grid_touch_3_pane

0xaa80,	// (0x000433e8) cell_touch_3_pane_ParamLimits

0xaa80,	// (0x000433e8) cell_touch_3_pane

0x0a28,	// (0x00039390) cell_touch_3_pane_g1

0x0a28,	// (0x00039390) cell_touch_3_pane_g2

0x0001,

0xfb67,	// (0x000484cf) cell_touch_3_pane_g

0x8e06,	// (0x0004176e) cont_query_data_pane

0x8e0e,	// (0x00041776) cont_query_data_pane_cp1

0x1b35,	// (0x0003a49d) button_value_adjust_pane_cp7

0x1b3d,	// (0x0003a4a5) query_popup_pane_cp3

0xc863,	// (0x000451cb) bg_popup_sub_pane_cp22_ParamLimits

0x60ee,	// (0x0003ea56) navi_navi_volume_pane_cp2

0x6109,	// (0x0003ea71) popup_side_volume_key_window_g2

0x6118,	// (0x0003ea80) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x000480be) popup_side_volume_key_window_g

0x6135,	// (0x0003ea9d) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x000480c5) popup_side_volume_key_window_t

0xcab3,	// (0x0004541b) popup_side_volume_key_window_ParamLimits

0x47f0,	// (0x0003d158) list_double_graphic_pane_g4_ParamLimits

0x47f0,	// (0x0003d158) list_double_graphic_pane_g4

0x4b73,	// (0x0003d4db) list_single_2heading_msg_pane_ParamLimits

0x4b73,	// (0x0003d4db) list_single_2heading_msg_pane

0x4be8,	// (0x0003d550) list_single_2heading_msg_pane_g1_ParamLimits

0x4be8,	// (0x0003d550) list_single_2heading_msg_pane_g1

0x4bf4,	// (0x0003d55c) list_single_2heading_msg_pane_g2_ParamLimits

0x4bf4,	// (0x0003d55c) list_single_2heading_msg_pane_g2

0x4c07,	// (0x0003d56f) list_single_2heading_msg_pane_g3_ParamLimits

0x4c07,	// (0x0003d56f) list_single_2heading_msg_pane_g3

0x4c13,	// (0x0003d57b) list_single_2heading_msg_pane_g4_ParamLimits

0x4c13,	// (0x0003d57b) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x0004863a) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x0004863a) list_single_2heading_msg_pane_g

0x451a,	// (0x0003ce82) list_single_2heading_msg_pane_t1_ParamLimits

0x451a,	// (0x0003ce82) list_single_2heading_msg_pane_t1

0x4542,	// (0x0003ceaa) list_single_2heading_msg_pane_t2_ParamLimits

0x4542,	// (0x0003ceaa) list_single_2heading_msg_pane_t2

0x45ad,	// (0x0003cf15) list_single_2heading_msg_pane_t3_ParamLimits

0x45ad,	// (0x0003cf15) list_single_2heading_msg_pane_t3

0xf4ee,	// (0x00047e56) list_single_2heading_msg_pane_t4_ParamLimits

0xf4ee,	// (0x00047e56) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x00048643) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x00048643) list_single_2heading_msg_pane_t

0x8970,	// (0x000412d8) title_pane_g4_ParamLimits

0x8970,	// (0x000412d8) title_pane_g4

0x5efc,	// (0x0003e864) title_pane_stacon_g3_ParamLimits

0x5efc,	// (0x0003e864) title_pane_stacon_g3

0x166e,	// (0x00039fd6) list_single_2graphic_im_pane_g4_ParamLimits

0x166e,	// (0x00039fd6) list_single_2graphic_im_pane_g4

0xe123,	// (0x00046a8b) popup_side_volume_key_window_cp

0xe5ef,	// (0x00046f57) main_idle_act2_pane_t1

0x64b8,	// (0x0003ee20) toolbar_button_pane_g10

0x8fd4,	// (0x0004193c) popup_toolbar_window_cp1

0xec9b,	// (0x00047603) clock_nsta_pane_cp_t1

0xec9b,	// (0x00047603) clock_nsta_pane_cp_t2

0x0001,

0xfadd,	// (0x00048445) clock_nsta_pane_cp_t

0x60ee,	// (0x0003ea56) navi_navi_volume_pane_cp2_ParamLimits

0x60fd,	// (0x0003ea65) popup_side_volume_key_window_g1_ParamLimits

0x6109,	// (0x0003ea71) popup_side_volume_key_window_g2_ParamLimits

0x6118,	// (0x0003ea80) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x000480be) popup_side_volume_key_window_g_ParamLimits

0x6975,	// (0x0003f2dd) fep_hwr_aid_pane

0x6a1c,	// (0x0003f384) bg_fep_hwr_top_pane_g4_ParamLimits

0x0aaa,	// (0x00039412) fep_hwr_top_pane_g1_ParamLimits

0x0a98,	// (0x00039400) fep_hwr_top_pane_g2_ParamLimits

0x6a3c,	// (0x0003f3a4) fep_hwr_top_pane_g3_ParamLimits

0xfb32,	// (0x0004849a) fep_hwr_top_pane_g_ParamLimits

0x6a51,	// (0x0003f3b9) fep_hwr_top_text_pane_ParamLimits

0xdf18,	// (0x00046880) aid_touch_tab_arrow_arrow_2

0xdf21,	// (0x00046889) aid_touch_tab_arrow_left_2

0x6989,	// (0x0003f2f1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x69c0,	// (0x0003f328) fep_hwr_prediction_pane

0x0c11,	// (0x00039579) fep_vkb_prediction_pane

0xa867,	// (0x000431cf) fep_vkb_side_pane_g3_ParamLimits

0xa867,	// (0x000431cf) fep_vkb_side_pane_g3

0x6bcc,	// (0x0003f534) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6c38,	// (0x0003f5a0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6c45,	// (0x0003f5ad) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe1,	// (0x00048549) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6d74,	// (0x0003f6dc) fep_hwr_prediction_pane_g1

0x6d7e,	// (0x0003f6e6) fep_hwr_prediction_pane_g2

0x0a90,	// (0x000393f8) fep_hwr_prediction_pane_g3

0x6d86,	// (0x0003f6ee) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x0004864c) fep_hwr_prediction_pane_g

0x1b62,	// (0x0003a4ca) fep_vkb_prediction_pane_g1

0x1b6c,	// (0x0003a4d4) fep_vkb_prediction_pane_g2

0x1b74,	// (0x0003a4dc) fep_vkb_prediction_pane_g3

0x1b7c,	// (0x0003a4e4) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x00048655) fep_vkb_prediction_pane_g

0x67a4,	// (0x0003f10c) slider_set_pane_g3

0x67b8,	// (0x0003f120) slider_set_pane_g4

0x67d0,	// (0x0003f138) slider_set_pane_g5

0x67a4,	// (0x0003f10c) slider_set_pane_g6

0x67e6,	// (0x0003f14e) slider_set_pane_g7

0xe384,	// (0x00046cec) slider_form_pane_g3

0xe38d,	// (0x00046cf5) slider_form_pane_g4

0xe395,	// (0x00046cfd) slider_form_pane_g5

0xe384,	// (0x00046cec) slider_form_pane_g6

0xa474,	// (0x00042ddc) slider_form_pane_g7

0xe88d,	// (0x000471f5) slider_set_pane_vc_g3

0xe896,	// (0x000471fe) slider_set_pane_vc_g4

0xe89f,	// (0x00047207) slider_set_pane_vc_g5

0xe88d,	// (0x000471f5) slider_set_pane_vc_g6

0xe8a8,	// (0x00047210) slider_set_pane_vc_g7

0xe88d,	// (0x000471f5) slider_form_pane_vc_g1

0xe896,	// (0x000471fe) slider_form_pane_vc_g2

0xe89f,	// (0x00047207) slider_form_pane_vc_g3

0xe88d,	// (0x000471f5) slider_form_pane_vc_g4

0xea37,	// (0x0004739f) slider_form_pane_vc_g5

0x0004,

0xfac3,	// (0x0004842b) slider_form_pane_vc_g

0x877c,	// (0x000410e4) main_idle_act3_pane

0x1b84,	// (0x0003a4ec) ai3_links_pane

0xaac9,	// (0x00043431) popup_ai3_data_window_ParamLimits

0xaac9,	// (0x00043431) popup_ai3_data_window

0x877c,	// (0x000410e4) grid_ai3_links_pane

0xaae1,	// (0x00043449) cell_ai3_links_pane_ParamLimits

0xaae1,	// (0x00043449) cell_ai3_links_pane

0x1bbd,	// (0x0003a525) bg_popup_sub_pane_cp11

0x1bca,	// (0x0003a532) cell_ai3_links_pane_g1

0x877c,	// (0x000410e4) bg_popup_sub_pane_cp12

0x1bef,	// (0x0003a557) heading_ai3_data_pane

0x1bf7,	// (0x0003a55f) list_ai3_gene_pane

0x1c03,	// (0x0003a56b) popup_ai3_data_window_g1

0x1c0b,	// (0x0003a573) heading_ai3_data_pane_g1

0x1c13,	// (0x0003a57b) heading_ai3_data_pane_t1

0x1c21,	// (0x0003a589) list_double_ai3_gene_pane_ParamLimits

0x1c21,	// (0x0003a589) list_double_ai3_gene_pane

0x1c2e,	// (0x0003a596) list_single_ai3_gene_pane_ParamLimits

0x1c2e,	// (0x0003a596) list_single_ai3_gene_pane

0x09ed,	// (0x00039355) list_highlight_pane_cp7_ParamLimits

0x09ed,	// (0x00039355) list_highlight_pane_cp7

0x1c3b,	// (0x0003a5a3) list_single_a13_gene_pane_t1_ParamLimits

0x1c3b,	// (0x0003a5a3) list_single_a13_gene_pane_t1

0x1c52,	// (0x0003a5ba) list_single_ai3_gene_pane_g1

0x1c5b,	// (0x0003a5c3) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x0004865e) list_single_ai3_gene_pane_g

0x1c63,	// (0x0003a5cb) list_double_ai3_gene_pane_g1_ParamLimits

0x1c63,	// (0x0003a5cb) list_double_ai3_gene_pane_g1

0x1c6f,	// (0x0003a5d7) list_double_ai3_gene_pane_t1_ParamLimits

0x1c6f,	// (0x0003a5d7) list_double_ai3_gene_pane_t1

0x1c8b,	// (0x0003a5f3) list_double_ai3_gene_pane_t2_ParamLimits

0x1c8b,	// (0x0003a5f3) list_double_ai3_gene_pane_t2

0x1ca0,	// (0x0003a608) list_double_ai3_gene_pane_t3_ParamLimits

0x1ca0,	// (0x0003a608) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x00048663) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x00048663) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf4e4,	// (0x00047e4c) aid_size_min_col_2

0xaab3,	// (0x0004341b) aid_size_min_msg_ParamLimits

0xaab3,	// (0x0004341b) aid_size_min_msg

0xa87b,	// (0x000431e3) fep_vkb_top_text_pane_g2_ParamLimits

0xa87b,	// (0x000431e3) fep_vkb_top_text_pane_g2

0x0001,

0xfb62,	// (0x000484ca) fep_vkb_top_text_pane_g_ParamLimits

0xfb62,	// (0x000484ca) fep_vkb_top_text_pane_g

0x877c,	// (0x000410e4) main_hc_apps_shell_pane

0x1cbd,	// (0x0003a625) grid_hc_apps_pane_ParamLimits

0x1cbd,	// (0x0003a625) grid_hc_apps_pane

0x1ccc,	// (0x0003a634) list_hc_apps_pane

0x1cd4,	// (0x0003a63c) scroll_pane_cp37_ParamLimits

0x1cd4,	// (0x0003a63c) scroll_pane_cp37

0xaafb,	// (0x00043463) cell_hc_apps_pane_ParamLimits

0xaafb,	// (0x00043463) cell_hc_apps_pane

0xabbb,	// (0x00043523) cell_hc_apps_pane_g1_ParamLimits

0xabbb,	// (0x00043523) cell_hc_apps_pane_g1

0x1de2,	// (0x0003a74a) cell_hc_apps_pane_g2_ParamLimits

0x1de2,	// (0x0003a74a) cell_hc_apps_pane_g2

0x1dfe,	// (0x0003a766) cell_hc_apps_pane_g3_ParamLimits

0x1dfe,	// (0x0003a766) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x0004866a) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x0004866a) cell_hc_apps_pane_g

0xabe8,	// (0x00043550) cell_hc_apps_pane_t1_ParamLimits

0xabe8,	// (0x00043550) cell_hc_apps_pane_t1

0x8d5c,	// (0x000416c4) grid_highlight_pane_cp10_ParamLimits

0x8d5c,	// (0x000416c4) grid_highlight_pane_cp10

0xac26,	// (0x0004358e) list_single_hc_apps_pane_ParamLimits

0xac26,	// (0x0004358e) list_single_hc_apps_pane

0x1ed3,	// (0x0003a83b) list_single_hc_apps_pane_g1

0xf513,	// (0x00047e7b) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x00048671) list_single_hc_apps_pane_g

0xf52c,	// (0x00047e94) list_single_hc_apps_pane_g2_copy1

0xf548,	// (0x00047eb0) list_single_hc_apps_pane_t1

0x8a82,	// (0x000413ea) bg_set_opt_pane_cp_ParamLimits

0x5e27,	// (0x0003e78f) setting_slider_pane_t1_ParamLimits

0x5e40,	// (0x0003e7a8) setting_slider_pane_t2_ParamLimits

0x5e59,	// (0x0003e7c1) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00047f0a) setting_slider_pane_t_ParamLimits

0x5e70,	// (0x0003e7d8) slider_set_pane_ParamLimits

0x6396,	// (0x0003ecfe) control_pane_g5_ParamLimits

0x6396,	// (0x0003ecfe) control_pane_g5

0xe346,	// (0x00046cae) slider_set_pane_g1_ParamLimits

0x6798,	// (0x0003f100) slider_set_pane_g2_ParamLimits

0x67a4,	// (0x0003f10c) slider_set_pane_g3_ParamLimits

0x67b8,	// (0x0003f120) slider_set_pane_g4_ParamLimits

0x67d0,	// (0x0003f138) slider_set_pane_g5_ParamLimits

0x67a4,	// (0x0003f10c) slider_set_pane_g6_ParamLimits

0x67e6,	// (0x0003f14e) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x00048305) slider_set_pane_g_ParamLimits

0xcb94,	// (0x000454fc) navi_icon_text_pane_ParamLimits

0x9ae3,	// (0x0004244b) aid_fill_nsta_2_ParamLimits

0x9b17,	// (0x0004247f) aid_touch_tab_arrow_left_ParamLimits

0x9b2d,	// (0x00042495) aid_touch_tab_arrow_right_ParamLimits

0x9bc8,	// (0x00042530) clock_nsta_pane_ParamLimits

0xa21c,	// (0x00042b84) navi_icon_pane_g1_ParamLimits

0xa228,	// (0x00042b90) navi_text_pane_t1_ParamLimits

0xa6b8,	// (0x00043020) navi_icon_text_pane_g1_ParamLimits

0xa6c4,	// (0x0004302c) navi_icon_text_pane_t1_ParamLimits

0x1ed3,	// (0x0003a83b) list_single_hc_apps_pane_g1_ParamLimits

0xf513,	// (0x00047e7b) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x00048671) list_single_hc_apps_pane_g_ParamLimits

0xf52c,	// (0x00047e94) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf548,	// (0x00047eb0) list_single_hc_apps_pane_t1_ParamLimits

0x88d0,	// (0x00041238) popup_toolbar2_fixed_window_ParamLimits

0x88d0,	// (0x00041238) popup_toolbar2_fixed_window

0x9a4c,	// (0x000423b4) popup_toolbar2_float_window

0x877c,	// (0x000410e4) bg_popup_sub_pane_cp27

0x1eec,	// (0x0003a854) grid_toolbar2_float_pane

0x877c,	// (0x000410e4) bg_popup_sub_pane_cp26

0x1eec,	// (0x0003a854) grid_toolbar2_fixed_pane

0xac59,	// (0x000435c1) cell_toolbar2_fixed_pane_ParamLimits

0xac59,	// (0x000435c1) cell_toolbar2_fixed_pane

0xac74,	// (0x000435dc) cell_toolbar2_fixed_pane_g1

0x1f0e,	// (0x0003a876) toolbar2_fixed_button_pane

0xd25a,	// (0x00045bc2) toolbar2_fixed_button_pane_g1

0xd26a,	// (0x00045bd2) toolbar2_fixed_button_pane_g2

0xd262,	// (0x00045bca) toolbar2_fixed_button_pane_g3

0xd27a,	// (0x00045be2) toolbar2_fixed_button_pane_g4

0xd272,	// (0x00045bda) toolbar2_fixed_button_pane_g5

0xd282,	// (0x00045bea) toolbar2_fixed_button_pane_g6

0xd28a,	// (0x00045bf2) toolbar2_fixed_button_pane_g7

0xd29a,	// (0x00045c02) toolbar2_fixed_button_pane_g8

0xd292,	// (0x00045bfa) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x00048207) toolbar2_fixed_button_pane_g

0x1f16,	// (0x0003a87e) cell_toolbar2_float_pane_ParamLimits

0x1f16,	// (0x0003a87e) cell_toolbar2_float_pane

0x1f27,	// (0x0003a88f) cell_toolbar2_float_pane_g1

0x1f0e,	// (0x0003a876) toolbar2_fixed_button_pane_cp

0xa82e,	// (0x00043196) fep_vkb_accented_list_pane_ParamLimits

0xa82e,	// (0x00043196) fep_vkb_accented_list_pane

0x6bac,	// (0x0003f514) bg_popup_fep_shadow_pane_g9

0xcd16,	// (0x0004567e) bg_popup_fep_shadow_pane_cp3

0xc3da,	// (0x00044d42) list_accented_list_pane

0x1f30,	// (0x0003a898) list_single_accented_list_pane_ParamLimits

0x1f30,	// (0x0003a898) list_single_accented_list_pane

0xcd16,	// (0x0004567e) list_highlight_pane_cp10

0x1f41,	// (0x0003a8a9) list_single_accented_list_pane_t1

0x9976,	// (0x000422de) popup_slider_window_ParamLimits

0x9976,	// (0x000422de) popup_slider_window

0x1b45,	// (0x0003a4ad) aid_indentation_list_msg

0xad6d,	// (0x000436d5) bg_popup_window_pane_cp19

0x2065,	// (0x0003a9cd) popup_slider_window_g1

0x2081,	// (0x0003a9e9) popup_slider_window_g2

0x209d,	// (0x0003aa05) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x00048676) popup_slider_window_g

0x20f9,	// (0x0003aa61) popup_slider_window_t1

0x216d,	// (0x0003aad5) small_volume_slider_vertical_pane

0x0a28,	// (0x00039390) small_volume_slider_vertical_pane_g1

0x0a28,	// (0x00039390) small_volume_slider_vertical_pane_g2

0x2189,	// (0x0003aaf1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x00048688) small_volume_slider_vertical_pane_g

0x8834,	// (0x0004119c) area_side_right_pane_ParamLimits

0x8834,	// (0x0004119c) area_side_right_pane

0xae25,	// (0x0004378d) aid_size_side_button_ParamLimits

0xae25,	// (0x0004378d) aid_size_side_button

0xae3e,	// (0x000437a6) grid_sctrl_middle_pane_ParamLimits

0xae3e,	// (0x000437a6) grid_sctrl_middle_pane

0x6dc2,	// (0x0003f72a) sctrl_sk_bottom_pane

0x6dd3,	// (0x0003f73b) sctrl_sk_top_pane

0x6de5,	// (0x0003f74d) aid_touch_sctrl_top

0x6df2,	// (0x0003f75a) bg_sctrl_sk_pane_ParamLimits

0x6df2,	// (0x0003f75a) bg_sctrl_sk_pane

0x6e00,	// (0x0003f768) sctrl_sk_top_pane_g1

0x6e0d,	// (0x0003f775) sctrl_sk_top_pane_t1

0x6de5,	// (0x0003f74d) aid_touch_sctrl_bottom

0x6df2,	// (0x0003f75a) bg_sctrl_sk_pane_cp_ParamLimits

0x6df2,	// (0x0003f75a) bg_sctrl_sk_pane_cp

0x6e28,	// (0x0003f790) sctrl_sk_bottom_pane_g1

0x6e0d,	// (0x0003f775) sctrl_sk_bottom_pane_t1

0xae58,	// (0x000437c0) cell_sctrl_middle_pane_ParamLimits

0xae58,	// (0x000437c0) cell_sctrl_middle_pane

0xae69,	// (0x000437d1) aid_touch_sctrl_middle_ParamLimits

0xae69,	// (0x000437d1) aid_touch_sctrl_middle

0xae76,	// (0x000437de) bg_sctrl_middle_pane_ParamLimits

0xae76,	// (0x000437de) bg_sctrl_middle_pane

0x77ce,	// (0x00040136) cell_sctrl_middle_pane_g1_ParamLimits

0x77ce,	// (0x00040136) cell_sctrl_middle_pane_g1

0xae84,	// (0x000437ec) cell_sctrl_middle_pane_g2_ParamLimits

0xae84,	// (0x000437ec) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x00048694) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x00048694) cell_sctrl_middle_pane_g

0xd25a,	// (0x00045bc2) bg_sctrl_middle_pane_g1

0xd262,	// (0x00045bca) bg_sctrl_middle_pane_g2

0xd26a,	// (0x00045bd2) bg_sctrl_middle_pane_g3

0xd272,	// (0x00045bda) bg_sctrl_middle_pane_g4

0xd27a,	// (0x00045be2) bg_sctrl_middle_pane_g5

0xd282,	// (0x00045bea) bg_sctrl_middle_pane_g6

0xd28a,	// (0x00045bf2) bg_sctrl_middle_pane_g7

0xd292,	// (0x00045bfa) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x00048699) bg_sctrl_middle_pane_g

0xd29a,	// (0x00045c02) bg_sctrl_middle_pane_g8_copy1

0xd25a,	// (0x00045bc2) bg_sctrl_sk_pane_g1

0xd26a,	// (0x00045bd2) bg_sctrl_sk_pane_g2

0xd262,	// (0x00045bca) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x00048207) bg_sctrl_sk_pane_g

0xc201,	// (0x00044b69) aid_size_touch_scroll_bar

0xd27a,	// (0x00045be2) bg_sctrl_sk_pane_g4

0xd272,	// (0x00045bda) bg_sctrl_sk_pane_g5

0xd282,	// (0x00045bea) bg_sctrl_sk_pane_g6

0xd28a,	// (0x00045bf2) bg_sctrl_sk_pane_g7

0xd29a,	// (0x00045c02) bg_sctrl_sk_pane_g8

0xd292,	// (0x00045bfa) bg_sctrl_sk_pane_g9

0xcf9c,	// (0x00045904) popup_fep_china_hwr2_fs_candidate_window

0x94b0,	// (0x00041e18) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x94b0,	// (0x00041e18) popup_fep_china_hwr2_fs_control_window

0x6bcc,	// (0x0003f534) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x0004868f) sctrl_sk_top_pane_g

0xae90,	// (0x000437f8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xae90,	// (0x000437f8) aid_fep_china_hwr2_fs_cell

0xaea4,	// (0x0004380c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaea4,	// (0x0004380c) bg_popup_fep_shadow_pane_cp4

0xaebb,	// (0x00043823) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaebb,	// (0x00043823) bg_popup_fep_shadow_pane_cp5

0xaecd,	// (0x00043835) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaecd,	// (0x00043835) popup_fep_china_hwr2_fs_control_bar_grid

0xaee1,	// (0x00043849) popup_fep_china_hwr2_fs_control_funtion_grid

0x21e5,	// (0x0003ab4d) aid_fep_china_hwr2_fs_candi_cell

0x877c,	// (0x000410e4) bg_popup_fep_shadow_pane_cp6

0x21ef,	// (0x0003ab57) popup_fep_china_hwr2_fs_candidate_grid

0xaee9,	// (0x00043851) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaee9,	// (0x00043851) cell_fep_china_hwr2_fs_funtion_grid

0x0a28,	// (0x00039390) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x2211,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x2211,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1

0x221f,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x221f,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x000486aa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x000486aa) cell_fep_china_hwr2_fs_funtion_grid_g

0xaf01,	// (0x00043869) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaf01,	// (0x00043869) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaf16,	// (0x0004387e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaf16,	// (0x0004387e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x000486af) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x000486af) cell_fep_china_hwr2_fs_funtion_grid_t

0x2266,	// (0x0003abce) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x226e,	// (0x0003abd6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x2276,	// (0x0003abde) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x000486b4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x227e,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x227e,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid

0x2297,	// (0x0003abff) popup_fep_china_hwr2_fs_candidate_grid_g20

0x229f,	// (0x0003ac07) popup_fep_china_hwr2_fs_candidate_grid_g21

0x0a28,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g1

0x0a28,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb67,	// (0x000484cf) cell_fep_china_hwr2_fs_candidate_grid_g

0x22a7,	// (0x0003ac0f) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd0a9,	// (0x00045a11) clock_nsta_pane_cp_24_ParamLimits

0xd0a9,	// (0x00045a11) clock_nsta_pane_cp_24

0xd111,	// (0x00045a79) indicator_nsta_pane_cp_24_ParamLimits

0xd111,	// (0x00045a79) indicator_nsta_pane_cp_24

0xde22,	// (0x0004678a) heading_pane_g1

0x0001,

0xf904,	// (0x0004826c) heading_pane_g

0xe47a,	// (0x00046de2) grid_sct_catagory_button_pane

0xd5c5,	// (0x00045f2d) scroll_pane_cp5_ParamLimits

0xed06,	// (0x0004766e) button_value_adjust_pane_cp5_ParamLimits

0xed06,	// (0x0004766e) button_value_adjust_pane_cp5

0xedc4,	// (0x0004772c) form2_midp_time_pane_ParamLimits

0x22b5,	// (0x0003ac1d) cell_sct_catagory_button_pane_ParamLimits

0x22b5,	// (0x0003ac1d) cell_sct_catagory_button_pane

0x09ed,	// (0x00039355) bg_button_pane_cp01_ParamLimits

0x09ed,	// (0x00039355) bg_button_pane_cp01

0x0a28,	// (0x00039390) cell_sct_catagory_button_pane_g1

0x99ef,	// (0x00042357) popup_tb_extension_window

0xaf32,	// (0x0004389a) aid_size_cell_ext_ParamLimits

0xaf32,	// (0x0004389a) aid_size_cell_ext

0xc043,	// (0x000449ab) bg_tb_trans_pane_cp1_ParamLimits

0xc043,	// (0x000449ab) bg_tb_trans_pane_cp1

0xaf58,	// (0x000438c0) grid_tb_ext_pane_ParamLimits

0xaf58,	// (0x000438c0) grid_tb_ext_pane

0xaf98,	// (0x00043900) cell_tb_ext_pane_ParamLimits

0xaf98,	// (0x00043900) cell_tb_ext_pane

0xafc0,	// (0x00043928) cell_tb_ext_pane_g1_ParamLimits

0xafc0,	// (0x00043928) cell_tb_ext_pane_g1

0x234d,	// (0x0003acb5) cell_tb_ext_pane_t1

0x8d5c,	// (0x000416c4) list_highlight_pane_cp11_ParamLimits

0x8d5c,	// (0x000416c4) list_highlight_pane_cp11

0x5d60,	// (0x0003e6c8) popup_uni_indicator_window_ParamLimits

0x5d60,	// (0x0003e6c8) popup_uni_indicator_window

0xc2e0,	// (0x00044c48) bg_popup_sub_pane_cp14

0x2368,	// (0x0003acd0) list_uniindi_pane

0x2374,	// (0x0003acdc) uniindi_top_pane

0x8d5c,	// (0x000416c4) bg_uniindi_top_pane

0x2393,	// (0x0003acfb) uniindi_top_pane_g1

0x23a9,	// (0x0003ad11) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x000486bb) uniindi_top_pane_g

0x23d3,	// (0x0003ad3b) uniindi_top_pane_t1

0x23fd,	// (0x0003ad65) list_single_uniindi_pane_ParamLimits

0x23fd,	// (0x0003ad65) list_single_uniindi_pane

0x0a28,	// (0x00039390) bg_uniindi_top_pane_g1

0x240f,	// (0x0003ad77) list_single_uniindi_pane_g1

0x2422,	// (0x0003ad8a) list_single_uniindi_pane_t1

0x5be4,	// (0x0003e54c) control_bg_pane

0x2447,	// (0x0003adaf) bg_sctrl_sk_pane_cp1

0x2450,	// (0x0003adb8) bg_sctrl_sk_pane_cp2

0x2459,	// (0x0003adc1) control_bg_pane_g1

0x2462,	// (0x0003adca) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x000486c4) control_bg_pane_g

0xec01,	// (0x00047569) cell_indicator_nsta_pane_g1_ParamLimits

0xa61f,	// (0x00042f87) cell_indicator_nsta_pane_g2_ParamLimits

0xfad8,	// (0x00048440) cell_indicator_nsta_pane_g_ParamLimits

0xf2d7,	// (0x00047c3f) form2_midp_time_pane_t1_ParamLimits

0x0fd2,	// (0x0003993a) main_idle_act4_pane_ParamLimits

0x0fd2,	// (0x0003993a) main_idle_act4_pane

0x99ef,	// (0x00042357) popup_tb_extension_window_ParamLimits

0xaf7f,	// (0x000438e7) tb_ext_find_pane_ParamLimits

0xaf7f,	// (0x000438e7) tb_ext_find_pane

0x246b,	// (0x0003add3) ai_gene_pane_1_cp1

0xcd98,	// (0x00045700) ai_gene_pane_2_cp1

0x2473,	// (0x0003addb) list_single_idle_plugin_calendar_pane

0x247c,	// (0x0003ade4) list_single_idle_plugin_notification_pane

0x2485,	// (0x0003aded) list_single_idle_plugin_player_pane

0xafdd,	// (0x00043945) list_single_idle_plugin_shortcut_pane_ParamLimits

0xafdd,	// (0x00043945) list_single_idle_plugin_shortcut_pane

0xb005,	// (0x0004396d) main_idle_act4_pane_t1

0xb01b,	// (0x00043983) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x000486c9) main_idle_act4_pane_t

0xb033,	// (0x0004399b) middle_sk_idle_act4_pane_ParamLimits

0xb033,	// (0x0004399b) middle_sk_idle_act4_pane

0xb04f,	// (0x000439b7) popup_clock_digital_analogue_window_cp2

0xb076,	// (0x000439de) shortcut_wheel_idle_act4_pane_ParamLimits

0xb076,	// (0x000439de) shortcut_wheel_idle_act4_pane

0x0a28,	// (0x00039390) shortcut_wheel_idle_act4_pane_g1

0x0a28,	// (0x00039390) shortcut_wheel_idle_act4_pane_g2

0x0a28,	// (0x00039390) shortcut_wheel_idle_act4_pane_g3

0x0a28,	// (0x00039390) shortcut_wheel_idle_act4_pane_g4

0x0a28,	// (0x00039390) shortcut_wheel_idle_act4_pane_g5

0x2518,	// (0x0003ae80) shortcut_wheel_idle_act4_pane_g6

0x2520,	// (0x0003ae88) shortcut_wheel_idle_act4_pane_g7

0x2528,	// (0x0003ae90) shortcut_wheel_idle_act4_pane_g8

0x2530,	// (0x0003ae98) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x000486ce) shortcut_wheel_idle_act4_pane_g

0x5053,	// (0x0003d9bb) middle_sk_idle_act4_pane_g1_ParamLimits

0x5053,	// (0x0003d9bb) middle_sk_idle_act4_pane_g1

0xb0f3,	// (0x00043a5b) middle_sk_idle_act4_pane_g2_ParamLimits

0xb0f3,	// (0x00043a5b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x000486f1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x000486f1) middle_sk_idle_act4_pane_g

0xb10b,	// (0x00043a73) middle_sk_idle_act4_pane_t1_ParamLimits

0xb10b,	// (0x00043a73) middle_sk_idle_act4_pane_t1

0xb13a,	// (0x00043aa2) grid_ai_shortcut_pane_ParamLimits

0xb13a,	// (0x00043aa2) grid_ai_shortcut_pane

0xb157,	// (0x00043abf) list_highlight_pane_cp16_ParamLimits

0xb157,	// (0x00043abf) list_highlight_pane_cp16

0xb164,	// (0x00043acc) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb164,	// (0x00043acc) list_single_idle_plugin_shortcut_pane_g1

0xb170,	// (0x00043ad8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb170,	// (0x00043ad8) list_single_idle_plugin_shortcut_pane_g2

0xb18c,	// (0x00043af4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb18c,	// (0x00043af4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x000486f6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x000486f6) list_single_idle_plugin_shortcut_pane_g

0xb1a1,	// (0x00043b09) cell_ai_shortcut_pane_ParamLimits

0xb1a1,	// (0x00043b09) cell_ai_shortcut_pane

0xb1b7,	// (0x00043b1f) cell_ai_shortcut_pane_g1_ParamLimits

0xb1b7,	// (0x00043b1f) cell_ai_shortcut_pane_g1

0x246b,	// (0x0003add3) ai_gene_pane_1_cp2

0x265d,	// (0x0003afc5) ai_gene_pane_2_cp2

0x2665,	// (0x0003afcd) list_highlight_pane_cp15

0x266e,	// (0x0003afd6) list_single_idle_plugin_calendar_pane_g1

0x2665,	// (0x0003afcd) list_highlight_pane_cp17

0x2676,	// (0x0003afde) list_single_idle_plugin_calendar_pane_g1_copy1

0x267e,	// (0x0003afe6) list_single_idle_plugin_player_pane_g1

0xe68f,	// (0x00046ff7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x000486fd) list_single_idle_plugin_player_pane_g

0x2686,	// (0x0003afee) list_single_idle_plugin_player_pane_t1

0x2694,	// (0x0003affc) list_single_idle_plugin_player_pane_t2

0x26a2,	// (0x0003b00a) list_single_idle_plugin_player_pane_t3

0x26b0,	// (0x0003b018) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x00048702) list_single_idle_plugin_player_pane_t

0x26be,	// (0x0003b026) wait_bar_pane_cp15

0x26c6,	// (0x0003b02e) grid_ai_notification_pane

0xe68f,	// (0x00046ff7) list_single_idle_plugin_notification_pane_g1

0xb1d9,	// (0x00043b41) cell_ai_notification_pane_ParamLimits

0xb1d9,	// (0x00043b41) cell_ai_notification_pane

0x26dc,	// (0x0003b044) cell_ai_notification_pane_g1

0x26e4,	// (0x0003b04c) cell_ai_notification_pane_t1

0xb1e6,	// (0x00043b4e) tb_ext_find_button_pane

0xb1ee,	// (0x00043b56) tb_ext_find_pane_g1

0xb1f6,	// (0x00043b5e) tb_ext_find_pane_t1

0xc807,	// (0x0004516f) tb_ext_find_button_pane_g1

0x2710,	// (0x0003b078) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x0004870b) tb_ext_find_button_pane_g

0xb005,	// (0x0004396d) main_idle_act4_pane_t1_ParamLimits

0xb01b,	// (0x00043983) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x000486c9) main_idle_act4_pane_t_ParamLimits

0xb04f,	// (0x000439b7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb066,	// (0x000439ce) sat_plugin_idle_act4_pane_ParamLimits

0xb066,	// (0x000439ce) sat_plugin_idle_act4_pane

0xb204,	// (0x00043b6c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb204,	// (0x00043b6c) sat_plugin_idle_act4_pane_t1

0xb21c,	// (0x00043b84) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb21c,	// (0x00043b84) sat_plugin_idle_act4_pane_t2

0xb234,	// (0x00043b9c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb234,	// (0x00043b9c) sat_plugin_idle_act4_pane_t3

0xb24c,	// (0x00043bb4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb24c,	// (0x00043bb4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x00048710) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x00048710) sat_plugin_idle_act4_pane_t

0x5ca9,	// (0x0003e611) popup_battery_window_ParamLimits

0x5ca9,	// (0x0003e611) popup_battery_window

0x8d5c,	// (0x000416c4) bg_popup_sub_pane_cp25_ParamLimits

0x8d5c,	// (0x000416c4) bg_popup_sub_pane_cp25

0x2765,	// (0x0003b0cd) popup_battery_window_g1_ParamLimits

0x2765,	// (0x0003b0cd) popup_battery_window_g1

0x2771,	// (0x0003b0d9) popup_battery_window_t1_ParamLimits

0x2771,	// (0x0003b0d9) popup_battery_window_t1

0x2783,	// (0x0003b0eb) popup_battery_window_t2_ParamLimits

0x2783,	// (0x0003b0eb) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x00048719) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x00048719) popup_battery_window_t

0x9207,	// (0x00041b6f) midp_canvas_pane_ParamLimits

0x9264,	// (0x00041bcc) midp_keypad_pane_ParamLimits

0x9264,	// (0x00041bcc) midp_keypad_pane

0xc42b,	// (0x00044d93) main_midp_pane_ParamLimits

0xecb9,	// (0x00047621) signal_pane_g2_cp_ParamLimits

0xb264,	// (0x00043bcc) aid_size_cell_midp_keypad_ParamLimits

0xb264,	// (0x00043bcc) aid_size_cell_midp_keypad

0xb282,	// (0x00043bea) midp_keyp_game_grid_pane_ParamLimits

0xb282,	// (0x00043bea) midp_keyp_game_grid_pane

0xb2a9,	// (0x00043c11) midp_keyp_rocker_pane_ParamLimits

0xb2a9,	// (0x00043c11) midp_keyp_rocker_pane

0xb302,	// (0x00043c6a) midp_keyp_sk_left_pane_ParamLimits

0xb302,	// (0x00043c6a) midp_keyp_sk_left_pane

0xb356,	// (0x00043cbe) midp_keyp_sk_right_pane_ParamLimits

0xb356,	// (0x00043cbe) midp_keyp_sk_right_pane

0x877c,	// (0x000410e4) bg_button_pane_cp03

0xb3aa,	// (0x00043d12) midp_keyp_sk_left_pane_g1

0x877c,	// (0x000410e4) bg_button_pane_cp04

0xb3aa,	// (0x00043d12) midp_keyp_sk_right_pane_g1

0x0a28,	// (0x00039390) midp_keyp_rocker_pane_g1

0xb3b3,	// (0x00043d1b) keyp_game_cell_pane_ParamLimits

0xb3b3,	// (0x00043d1b) keyp_game_cell_pane

0x877c,	// (0x000410e4) bg_button_pane_cp02

0xb3d7,	// (0x00043d3f) keyp_game_cell_pane_g1

0x8880,	// (0x000411e8) popup_fep_vkb2_window_ParamLimits

0x8880,	// (0x000411e8) popup_fep_vkb2_window

0xb3e0,	// (0x00043d48) aid_size_cell_vkb2_ParamLimits

0xb3e0,	// (0x00043d48) aid_size_cell_vkb2

0xb416,	// (0x00043d7e) popup_fep_vkb2_window_g1_ParamLimits

0xb416,	// (0x00043d7e) popup_fep_vkb2_window_g1

0xb45d,	// (0x00043dc5) vkb2_area_bottom_pane_ParamLimits

0xb45d,	// (0x00043dc5) vkb2_area_bottom_pane

0xb4b1,	// (0x00043e19) vkb2_area_keypad_pane_ParamLimits

0xb4b1,	// (0x00043e19) vkb2_area_keypad_pane

0xb4f9,	// (0x00043e61) vkb2_area_top_pane_ParamLimits

0xb4f9,	// (0x00043e61) vkb2_area_top_pane

0xb57f,	// (0x00043ee7) vkb2_top_entry_pane_ParamLimits

0xb57f,	// (0x00043ee7) vkb2_top_entry_pane

0xb5ac,	// (0x00043f14) vkb2_top_grid_left_pane_ParamLimits

0xb5ac,	// (0x00043f14) vkb2_top_grid_left_pane

0xb5cc,	// (0x00043f34) vkb2_top_grid_right_pane_ParamLimits

0xb5cc,	// (0x00043f34) vkb2_top_grid_right_pane

0x7090,	// (0x0003f9f8) vkb2_cell_keypad_pane_ParamLimits

0x7090,	// (0x0003f9f8) vkb2_cell_keypad_pane

0xb612,	// (0x00043f7a) vkb2_area_bottom_grid_pane_ParamLimits

0xb612,	// (0x00043f7a) vkb2_area_bottom_grid_pane

0xb63c,	// (0x00043fa4) vkb2_area_bottom_pane_g1_ParamLimits

0xb63c,	// (0x00043fa4) vkb2_area_bottom_pane_g1

0xb662,	// (0x00043fca) vkb2_area_bottom_pane_g2_ParamLimits

0xb662,	// (0x00043fca) vkb2_area_bottom_pane_g2

0xb693,	// (0x00043ffb) vkb2_area_bottom_pane_g3_ParamLimits

0xb693,	// (0x00043ffb) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x0004871e) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x0004871e) vkb2_area_bottom_pane_g

0x723a,	// (0x0003fba2) vkb2_top_cell_left_pane_ParamLimits

0x723a,	// (0x0003fba2) vkb2_top_cell_left_pane

0xb6fd,	// (0x00044065) vkb2_top_entry_pane_g1_ParamLimits

0xb6fd,	// (0x00044065) vkb2_top_entry_pane_g1

0xb70b,	// (0x00044073) vkb2_top_entry_pane_t1_ParamLimits

0xb70b,	// (0x00044073) vkb2_top_entry_pane_t1

0x28f4,	// (0x0003b25c) vkb2_top_entry_pane_t2_ParamLimits

0x28f4,	// (0x0003b25c) vkb2_top_entry_pane_t2

0x2926,	// (0x0003b28e) vkb2_top_entry_pane_t3_ParamLimits

0x2926,	// (0x0003b28e) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x00048725) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x00048725) vkb2_top_entry_pane_t

0xb744,	// (0x000440ac) vkb2_top_grid_right_pane_g1_ParamLimits

0xb744,	// (0x000440ac) vkb2_top_grid_right_pane_g1

0x72dd,	// (0x0003fc45) vkb2_top_grid_right_pane_g2_ParamLimits

0x72dd,	// (0x0003fc45) vkb2_top_grid_right_pane_g2

0x72f5,	// (0x0003fc5d) vkb2_top_grid_right_pane_g3_ParamLimits

0x72f5,	// (0x0003fc5d) vkb2_top_grid_right_pane_g3

0xb75a,	// (0x000440c2) vkb2_top_grid_right_pane_g4_ParamLimits

0xb75a,	// (0x000440c2) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x0004872c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x0004872c) vkb2_top_grid_right_pane_g

0x7323,	// (0x0003fc8b) vkb2_top_cell_left_pane_g1

0x733a,	// (0x0003fca2) vkb2_cell_keypad_pane_g1_ParamLimits

0x733a,	// (0x0003fca2) vkb2_cell_keypad_pane_g1

0x294a,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1_ParamLimits

0x294a,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1

0x7348,	// (0x0003fcb0) vkb2_cell_bottom_grid_pane_ParamLimits

0x7348,	// (0x0003fcb0) vkb2_cell_bottom_grid_pane

0x7381,	// (0x0003fce9) vkb2_cell_bottom_grid_pane_g1

0xb097,	// (0x000439ff) aid_call2_pane_cp02

0xb09f,	// (0x00043a07) aid_call_pane_cp02

0xb0a7,	// (0x00043a0f) clock_digital_number_pane_cp10

0xb0af,	// (0x00043a17) clock_digital_number_pane_cp11

0xb0b7,	// (0x00043a1f) clock_digital_number_pane_cp12

0xb0bf,	// (0x00043a27) clock_digital_number_pane_cp13

0xb0c7,	// (0x00043a2f) clock_digital_separator_pane_cp10

0xc807,	// (0x0004516f) popup_clock_digital_analogue_window_cp2_g1

0xc807,	// (0x0004516f) popup_clock_digital_analogue_window_cp2_g2

0xb0cf,	// (0x00043a37) popup_clock_digital_analogue_window_cp2_g3

0xc807,	// (0x0004516f) popup_clock_digital_analogue_window_cp2_g4

0xb0cf,	// (0x00043a37) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x000486e1) popup_clock_digital_analogue_window_cp2_g

0xb0d7,	// (0x00043a3f) popup_clock_digital_analogue_window_cp2_t1

0xb0e5,	// (0x00043a4d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x000486ec) popup_clock_digital_analogue_window_cp2_t

0x0a28,	// (0x00039390) clock_digital_number_pane_cp10_g1

0x0a28,	// (0x00039390) clock_digital_number_pane_cp10_g2

0x0001,

0xfb67,	// (0x000484cf) clock_digital_number_pane_cp10_g

0x0a28,	// (0x00039390) clock_digital_separator_pane_cp10_g1

0x0a28,	// (0x00039390) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb67,	// (0x000484cf) clock_digital_separator_pane_cp10_g

0x23b5,	// (0x0003ad1d) uniindi_top_pane_g3

0x23c6,	// (0x0003ad2e) uniindi_top_pane_g4

0x711b,	// (0x0003fa83) vkb2_row_keypad_pane_ParamLimits

0x711b,	// (0x0003fa83) vkb2_row_keypad_pane

0x73a1,	// (0x0003fd09) vkb2_cell_t_keypad_pane_ParamLimits

0x73a1,	// (0x0003fd09) vkb2_cell_t_keypad_pane

0x73b1,	// (0x0003fd19) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x73b1,	// (0x0003fd19) vkb2_cell_t_keypad_pane_cp08

0x73c4,	// (0x0003fd2c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x73c4,	// (0x0003fd2c) vkb2_cell_t_keypad_pane_cp09

0x73d8,	// (0x0003fd40) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x73d8,	// (0x0003fd40) vkb2_cell_t_keypad_pane_cp01

0x73e9,	// (0x0003fd51) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x73e9,	// (0x0003fd51) vkb2_cell_t_keypad_pane_cp02

0x73fa,	// (0x0003fd62) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x73fa,	// (0x0003fd62) vkb2_cell_t_keypad_pane_cp03

0x740b,	// (0x0003fd73) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x740b,	// (0x0003fd73) vkb2_cell_t_keypad_pane_cp04

0x741c,	// (0x0003fd84) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x741c,	// (0x0003fd84) vkb2_cell_t_keypad_pane_cp05

0x742d,	// (0x0003fd95) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x742d,	// (0x0003fd95) vkb2_cell_t_keypad_pane_cp06

0x743e,	// (0x0003fda6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x743e,	// (0x0003fda6) vkb2_cell_t_keypad_pane_cp07

0x744f,	// (0x0003fdb7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x744f,	// (0x0003fdb7) vkb2_cell_t_keypad_pane_cp10

0x6bcc,	// (0x0003f534) vkb2_cell_t_keypad_pane_g1

0x2961,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1

0x5be4,	// (0x0003e54c) popup_grid_graphic2_window

0xb770,	// (0x000440d8) aid_size_cell_graphic2_ParamLimits

0xb770,	// (0x000440d8) aid_size_cell_graphic2

0xd7e2,	// (0x0004614a) bg_popup_window_pane_cp21_ParamLimits

0xd7e2,	// (0x0004614a) bg_popup_window_pane_cp21

0xb7a2,	// (0x0004410a) graphic2_pages_pane_ParamLimits

0xb7a2,	// (0x0004410a) graphic2_pages_pane

0xb7f8,	// (0x00044160) grid_graphic2_control_pane_ParamLimits

0xb7f8,	// (0x00044160) grid_graphic2_control_pane

0xb82c,	// (0x00044194) grid_graphic2_pane_ParamLimits

0xb82c,	// (0x00044194) grid_graphic2_pane

0xb89f,	// (0x00044207) cell_graphic2_pane

0x877c,	// (0x000410e4) main_comp_mode_pane

0x1bf7,	// (0x0003a55f) list_ai3_gene_pane_ParamLimits

0xad6d,	// (0x000436d5) bg_popup_window_pane_cp19_ParamLimits

0x2007,	// (0x0003a96f) bg_touch_area_indi_pane_ParamLimits

0x2007,	// (0x0003a96f) bg_touch_area_indi_pane

0x201d,	// (0x0003a985) bg_touch_area_indi_pane_cp01_ParamLimits

0x201d,	// (0x0003a985) bg_touch_area_indi_pane_cp01

0x2033,	// (0x0003a99b) bg_touch_area_indi_pane_cp02_ParamLimits

0x2033,	// (0x0003a99b) bg_touch_area_indi_pane_cp02

0x204b,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03_ParamLimits

0x204b,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03

0x2065,	// (0x0003a9cd) popup_slider_window_g1_ParamLimits

0x2081,	// (0x0003a9e9) popup_slider_window_g2_ParamLimits

0x209d,	// (0x0003aa05) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x00048676) popup_slider_window_g_ParamLimits

0x20f9,	// (0x0003aa61) popup_slider_window_t1_ParamLimits

0x216d,	// (0x0003aad5) small_volume_slider_vertical_pane_ParamLimits

0xb89f,	// (0x00044207) cell_graphic2_pane_ParamLimits

0xb8fa,	// (0x00044262) bg_button_pane_cp10_ParamLimits

0xb8fa,	// (0x00044262) bg_button_pane_cp10

0xb90d,	// (0x00044275) bg_button_pane_cp11_ParamLimits

0xb90d,	// (0x00044275) bg_button_pane_cp11

0xb920,	// (0x00044288) graphic2_pages_pane_g1_ParamLimits

0xb920,	// (0x00044288) graphic2_pages_pane_g1

0xb93b,	// (0x000442a3) graphic2_pages_pane_g2_ParamLimits

0xb93b,	// (0x000442a3) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x0004873a) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x0004873a) graphic2_pages_pane_g

0xb953,	// (0x000442bb) graphic2_pages_pane_t1_ParamLimits

0xb953,	// (0x000442bb) graphic2_pages_pane_t1

0xb96b,	// (0x000442d3) cell_graphic2_control_pane_ParamLimits

0xb96b,	// (0x000442d3) cell_graphic2_control_pane

0xb985,	// (0x000442ed) cell_graphic2_pane_g1_ParamLimits

0xb985,	// (0x000442ed) cell_graphic2_pane_g1

0xb992,	// (0x000442fa) cell_graphic2_pane_g2_ParamLimits

0xb992,	// (0x000442fa) cell_graphic2_pane_g2

0xa821,	// (0x00043189) cell_graphic2_pane_g3_ParamLimits

0xa821,	// (0x00043189) cell_graphic2_pane_g3

0xb99f,	// (0x00044307) cell_graphic2_pane_g4_ParamLimits

0xb99f,	// (0x00044307) cell_graphic2_pane_g4

0xb9ac,	// (0x00044314) cell_graphic2_pane_g5_ParamLimits

0xb9ac,	// (0x00044314) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x0004873f) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x0004873f) cell_graphic2_pane_g

0xb9cc,	// (0x00044334) cell_graphic2_pane_t1_ParamLimits

0xb9cc,	// (0x00044334) cell_graphic2_pane_t1

0xde16,	// (0x0004677e) grid_highlight_pane_cp11_ParamLimits

0xde16,	// (0x0004677e) grid_highlight_pane_cp11

0xc2e0,	// (0x00044c48) bg_button_pane_cp05

0xb9e3,	// (0x0004434b) cell_graphic2_control_pane_g1

0x0a28,	// (0x00039390) bg_touch_area_indi_pane_g1

0x2973,	// (0x0003b2db) aid_cmod_rocker_key_size

0x297d,	// (0x0003b2e5) aid_cmode_itu_key_size

0x2987,	// (0x0003b2ef) main_cmode_video_pane

0x2991,	// (0x0003b2f9) main_comp_mode_itu_pane

0x299d,	// (0x0003b305) main_comp_mode_rocker_pane

0x29a9,	// (0x0003b311) cell_cmode_rocker_pane_ParamLimits

0x29a9,	// (0x0003b311) cell_cmode_rocker_pane

0x29bb,	// (0x0003b323) cell_cmode_itu_pane_ParamLimits

0x29bb,	// (0x0003b323) cell_cmode_itu_pane

0xc2e0,	// (0x00044c48) bg_button_pane_cp06_ParamLimits

0xc2e0,	// (0x00044c48) bg_button_pane_cp06

0x0cc1,	// (0x00039629) cell_cmode_rocker_pane_g1_ParamLimits

0x0cc1,	// (0x00039629) cell_cmode_rocker_pane_g1

0x2211,	// (0x0003ab79) cell_cmode_rocker_pane_g2_ParamLimits

0x2211,	// (0x0003ab79) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x0004874a) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x0004874a) cell_cmode_rocker_pane_g

0x877c,	// (0x000410e4) bg_button_pane_cp07

0x29d0,	// (0x0003b338) cell_cmode_itu_pane_g1

0x29d9,	// (0x0003b341) cell_cmode_itu_pane_t1

0x29e7,	// (0x0003b34f) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x0004874f) cell_cmode_itu_pane_t

0x2437,	// (0x0003ad9f) aid_touch_ctrl_left

0x243f,	// (0x0003ada7) aid_touch_ctrl_right

0x877c,	// (0x000410e4) compa_mode_pane

0xb9f0,	// (0x00044358) aid_cmod_rocker_key_size_cp

0xb9fa,	// (0x00044362) aid_cmode_itu_key_size_cp

0x29f5,	// (0x0003b35d) compa_mode_pane_g1

0x29fd,	// (0x0003b365) compa_mode_pane_g2

0x2a05,	// (0x0003b36d) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x00048754) compa_mode_pane_g

0xba04,	// (0x0004436c) main_comp_mode_itu_pane_cp

0xba0c,	// (0x00044374) main_comp_mode_rocker_pane_cp

0xba14,	// (0x0004437c) cell_cmode_itu_pane_cp_ParamLimits

0xba14,	// (0x0004437c) cell_cmode_itu_pane_cp

0xba29,	// (0x00044391) cell_cmode_rocker_pane_cp_ParamLimits

0xba29,	// (0x00044391) cell_cmode_rocker_pane_cp

0xc2e0,	// (0x00044c48) bg_button_pane_cp06_cp_ParamLimits

0xc2e0,	// (0x00044c48) bg_button_pane_cp06_cp

0x0cc1,	// (0x00039629) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x0cc1,	// (0x00039629) cell_cmode_rocker_pane_g1_cp

0x0a28,	// (0x00039390) cell_cmode_rocker_pane_g2_cp

0x877c,	// (0x000410e4) bg_button_pane_cp07_cp

0xba3b,	// (0x000443a3) cell_cmode_itu_pane_g1_cp

0xba44,	// (0x000443ac) cell_cmode_itu_pane_t1_cp

0xba44,	// (0x000443ac) cell_cmode_itu_pane_t2_cp

0xa46a,	// (0x00042dd2) settings_code_pane_cp2

0x8a82,	// (0x000413ea) bg_popup_window_pane_cp3_ParamLimits

0xbf82,	// (0x000448ea) heading_pane_cp3_ParamLimits

0xbf8e,	// (0x000448f6) listscroll_popup_graphic_pane_ParamLimits

0x6975,	// (0x0003f2dd) fep_hwr_aid_pane_ParamLimits

0x6de5,	// (0x0003f74d) aid_touch_sctrl_top_ParamLimits

0x6e00,	// (0x0003f768) sctrl_sk_top_pane_g1_ParamLimits

0x6bcc,	// (0x0003f534) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x0004868f) sctrl_sk_top_pane_g_ParamLimits

0x6e0d,	// (0x0003f775) sctrl_sk_top_pane_t1_ParamLimits

0x6de5,	// (0x0003f74d) aid_touch_sctrl_bottom_ParamLimits

0x6e0d,	// (0x0003f775) sctrl_sk_bottom_pane_t1_ParamLimits

0x2381,	// (0x0003ace9) aid_area_touch_clock

0xb541,	// (0x00043ea9) aid_vkb2_area_top_pane_cell_ParamLimits

0xb541,	// (0x00043ea9) aid_vkb2_area_top_pane_cell

0xb5ec,	// (0x00043f54) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb5ec,	// (0x00043f54) aid_vkb2_area_bottom_pane_cell

0x28ec,	// (0x0003b254) popup_char_count_window

0x2a0d,	// (0x0003b375) popup_char_count_window_g1

0x2a16,	// (0x0003b37e) popup_char_count_window_g2

0x2a1f,	// (0x0003b387) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x0004875b) popup_char_count_window_g

0x2a28,	// (0x0003b390) popup_char_count_window_t1

0x6ec0,	// (0x0003f828) popup_fep_char_preview_window_ParamLimits

0x6ec0,	// (0x0003f828) popup_fep_char_preview_window

0xb561,	// (0x00043ec9) vkb2_top_candi_pane_ParamLimits

0xb561,	// (0x00043ec9) vkb2_top_candi_pane

0xba52,	// (0x000443ba) cell_vkb2_top_candi_pane_ParamLimits

0xba52,	// (0x000443ba) cell_vkb2_top_candi_pane

0x775d,	// (0x000400c5) bg_popup_fep_char_preview_window_ParamLimits

0x775d,	// (0x000400c5) bg_popup_fep_char_preview_window

0x776b,	// (0x000400d3) popup_fep_char_preview_window_t1_ParamLimits

0x776b,	// (0x000400d3) popup_fep_char_preview_window_t1

0x2a46,	// (0x0003b3ae) bg_popup_fep_char_preview_window_g1

0x2a3e,	// (0x0003b3a6) bg_popup_fep_char_preview_window_g2

0x2a36,	// (0x0003b39e) bg_popup_fep_char_preview_window_g3

0x2a66,	// (0x0003b3ce) bg_popup_fep_char_preview_window_g4

0x2a5e,	// (0x0003b3c6) bg_popup_fep_char_preview_window_g5

0x77a5,	// (0x0004010d) bg_popup_fep_char_preview_window_g6

0x2a56,	// (0x0003b3be) bg_popup_fep_char_preview_window_g7

0x2a4e,	// (0x0003b3b6) bg_popup_fep_char_preview_window_g8

0x2a6e,	// (0x0003b3d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x00048762) bg_popup_fep_char_preview_window_g

0x6bcc,	// (0x0003f534) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6bcc,	// (0x0003f534) cell_vkb2_top_candi_pane_g1

0x6bda,	// (0x0003f542) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6bda,	// (0x0003f542) cell_vkb2_top_candi_pane_g2

0x1d90,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x1d90,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g3

0x77ad,	// (0x00040115) cell_vkb2_top_candi_pane_g4_ParamLimits

0x77ad,	// (0x00040115) cell_vkb2_top_candi_pane_g4

0x100f,	// (0x00039977) cell_vkb2_top_candi_pane_g5_ParamLimits

0x100f,	// (0x00039977) cell_vkb2_top_candi_pane_g5

0x77ce,	// (0x00040136) cell_vkb2_top_candi_pane_g6_ParamLimits

0x77ce,	// (0x00040136) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x00048775) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x00048775) cell_vkb2_top_candi_pane_g

0x77dc,	// (0x00040144) cell_vkb2_top_candi_pane_t1

0x6784,	// (0x0003f0ec) aid_size_touch_slider_mark_ParamLimits

0x6784,	// (0x0003f0ec) aid_size_touch_slider_mark

0xb7de,	// (0x00044146) grid_graphic2_catg_pane_ParamLimits

0xb7de,	// (0x00044146) grid_graphic2_catg_pane

0xb872,	// (0x000441da) popup_grid_graphic2_window_t1_ParamLimits

0xb872,	// (0x000441da) popup_grid_graphic2_window_t1

0xb888,	// (0x000441f0) popup_grid_graphic2_window_t2_ParamLimits

0xb888,	// (0x000441f0) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x00048735) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x00048735) popup_grid_graphic2_window_t

0xc2e0,	// (0x00044c48) bg_button_pane_cp05_ParamLimits

0xb9e3,	// (0x0004434b) cell_graphic2_control_pane_g1_ParamLimits

0xbab8,	// (0x00044420) cell_graphic2_catg_pane_ParamLimits

0xbab8,	// (0x00044420) cell_graphic2_catg_pane

0x877c,	// (0x000410e4) bg_button_pane_cp12

0xbaca,	// (0x00044432) cell_graphic2_catg_pane_g1

0x234d,	// (0x0003acb5) cell_tb_ext_pane_t1_ParamLimits

0x729a,	// (0x0003fc02) vkb2_top_cell_right_narrow_pane_ParamLimits

0x729a,	// (0x0003fc02) vkb2_top_cell_right_narrow_pane

0x72b2,	// (0x0003fc1a) vkb2_top_cell_right_wide_pane_ParamLimits

0x72b2,	// (0x0003fc1a) vkb2_top_cell_right_wide_pane

0x6967,	// (0x0003f2cf) bg_vkb2_func_pane_ParamLimits

0x6967,	// (0x0003f2cf) bg_vkb2_func_pane

0x7323,	// (0x0003fc8b) vkb2_top_cell_left_pane_g1_ParamLimits

0x6967,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6967,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp03

0x7381,	// (0x0003fce9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd262,	// (0x00045bca) bg_vkb2_func_pane_g1

0xd26a,	// (0x00045bd2) bg_vkb2_func_pane_g2

0xd27a,	// (0x00045be2) bg_vkb2_func_pane_g3

0xd272,	// (0x00045bda) bg_vkb2_func_pane_g4

0xd282,	// (0x00045bea) bg_vkb2_func_pane_g5

0xd28a,	// (0x00045bf2) bg_vkb2_func_pane_g6

0xd292,	// (0x00045bfa) bg_vkb2_func_pane_g7

0xd29a,	// (0x00045c02) bg_vkb2_func_pane_g8

0xd25a,	// (0x00045bc2) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x00048782) bg_vkb2_func_pane_g

0x6967,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6967,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp01

0x7323,	// (0x0003fc8b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7323,	// (0x0003fc8b) vkb2_top_cell_right_wide_pane_g1

0x6967,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6967,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp02

0x7381,	// (0x0003fce9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7381,	// (0x0003fce9) vkb2_top_cell_right_narrow_pane_g1

0xaca7,	// (0x0004360f) aid_touch_area_decrease_ParamLimits

0xaca7,	// (0x0004360f) aid_touch_area_decrease

0xace1,	// (0x00043649) aid_touch_area_increase_ParamLimits

0xace1,	// (0x00043649) aid_touch_area_increase

0xad09,	// (0x00043671) aid_touch_area_mute_ParamLimits

0xad09,	// (0x00043671) aid_touch_area_mute

0xad39,	// (0x000436a1) aid_touch_area_slider_ParamLimits

0xad39,	// (0x000436a1) aid_touch_area_slider

0xad79,	// (0x000436e1) popup_slider_window_g4_ParamLimits

0xad79,	// (0x000436e1) popup_slider_window_g4

0xada1,	// (0x00043709) popup_slider_window_g5_ParamLimits

0xada1,	// (0x00043709) popup_slider_window_g5

0xadd5,	// (0x0004373d) popup_slider_window_g6_ParamLimits

0xadd5,	// (0x0004373d) popup_slider_window_g6

0x2127,	// (0x0003aa8f) popup_slider_window_t2_ParamLimits

0x2127,	// (0x0003aa8f) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x00048683) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x00048683) popup_slider_window_t

0xadf1,	// (0x00043759) slider_pane_ParamLimits

0xadf1,	// (0x00043759) slider_pane

0x2a76,	// (0x0003b3de) slider_pane_g1_ParamLimits

0x2a76,	// (0x0003b3de) slider_pane_g1

0x2a8a,	// (0x0003b3f2) slider_pane_g2_ParamLimits

0x2a8a,	// (0x0003b3f2) slider_pane_g2

0x2aa0,	// (0x0003b408) slider_pane_g3_ParamLimits

0x2aa0,	// (0x0003b408) slider_pane_g3

0x0003,

0xfe2d,	// (0x00048795) slider_pane_g_ParamLimits

0xfe2d,	// (0x00048795) slider_pane_g

0x9a37,	// (0x0004239f) popup_tb_float_extension_window_ParamLimits

0x9a37,	// (0x0004239f) popup_tb_float_extension_window

0x2acc,	// (0x0003b434) aid_size_cell_tb_float_ext

0x877c,	// (0x000410e4) bg_popup_sub_window_cp28

0x2ad8,	// (0x0003b440) grid_tb_float_ext_pane

0x2ae2,	// (0x0003b44a) cell_tb_float_ext_pane_ParamLimits

0x2ae2,	// (0x0003b44a) cell_tb_float_ext_pane

0x2afc,	// (0x0003b464) cell_tb_float_ext_pane_g1

0x2b05,	// (0x0003b46d) grid_highlight_pane_cp12

0xa7ff,	// (0x00043167) cell_last_hwr_side_pane_ParamLimits

0xa7ff,	// (0x00043167) cell_last_hwr_side_pane

0x0a28,	// (0x00039390) cell_last_hwr_side_pane_g1

0x2b0e,	// (0x0003b476) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x0004879e) cell_last_hwr_side_pane_g

0xb6c8,	// (0x00044030) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb6c8,	// (0x00044030) vkb2_area_bottom_space_btn_pane

0x6bcc,	// (0x0003f534) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2961,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x77dc,	// (0x00040144) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7816,	// (0x0004017e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7816,	// (0x0004017e) vkb2_area_bottom_space_btn_pane_g1

0x7850,	// (0x000401b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7850,	// (0x000401b8) vkb2_area_bottom_space_btn_pane_g2

0x7886,	// (0x000401ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7886,	// (0x000401ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x000487a3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x000487a3) vkb2_area_bottom_space_btn_pane_g

0x6a2a,	// (0x0003f392) cel_fep_hwr_func_pane_ParamLimits

0x6a2a,	// (0x0003f392) cel_fep_hwr_func_pane

0xa7d4,	// (0x0004313c) cell_hwr_side_button_pane_ParamLimits

0xa7d4,	// (0x0004313c) cell_hwr_side_button_pane

0x2381,	// (0x0003ace9) aid_area_touch_clock_ParamLimits

0x8d5c,	// (0x000416c4) bg_uniindi_top_pane_ParamLimits

0x2393,	// (0x0003acfb) uniindi_top_pane_g1_ParamLimits

0x23a9,	// (0x0003ad11) uniindi_top_pane_g2_ParamLimits

0x23b5,	// (0x0003ad1d) uniindi_top_pane_g3_ParamLimits

0x23c6,	// (0x0003ad2e) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x000486bb) uniindi_top_pane_g_ParamLimits

0x23d3,	// (0x0003ad3b) uniindi_top_pane_t1_ParamLimits

0x8d5c,	// (0x000416c4) bg_vkb2_func_pane_cp01_ParamLimits

0x8d5c,	// (0x000416c4) bg_vkb2_func_pane_cp01

0x2b17,	// (0x0003b47f) cel_fep_hwr_func_pane_g1_ParamLimits

0x2b17,	// (0x0003b47f) cel_fep_hwr_func_pane_g1

0x8d5c,	// (0x000416c4) bg_vkb2_func_pane_cp02_ParamLimits

0x8d5c,	// (0x000416c4) bg_vkb2_func_pane_cp02

0x2b17,	// (0x0003b47f) cell_hwr_side_button_pane_g1_ParamLimits

0x2b17,	// (0x0003b47f) cell_hwr_side_button_pane_g1

0xd172,	// (0x00045ada) status_pane_g4_ParamLimits

0xd172,	// (0x00045ada) status_pane_g4

0xd18a,	// (0x00045af2) status_pane_t1

0xee2c,	// (0x00047794) form2_midp_gauge_slider_cont_pane

0xee34,	// (0x0004779c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa713,	// (0x0004307b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa725,	// (0x0004308d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1a,	// (0x00048482) form2_midp_gauge_slider_pane_t_ParamLimits

0xee46,	// (0x000477ae) form2_midp_slider_pane_ParamLimits

0x6e80,	// (0x0003f7e8) aid_size_cell_func_vkb2_ParamLimits

0x6e80,	// (0x0003f7e8) aid_size_cell_func_vkb2

0x2ab8,	// (0x0003b420) slider_pane_g4_ParamLimits

0x2ab8,	// (0x0003b420) slider_pane_g4

0xbad3,	// (0x0004443b) form2_midp_gauge_slider_pane_t2_cp01

0xbae1,	// (0x00044449) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbae1,	// (0x00044449) form2_midp_gauge_slider_pane_t3_cp01

0x78fb,	// (0x00040263) form2_midp_slider_pane_cp01

0x877c,	// (0x000410e4) navi_smil_pane

0x2b47,	// (0x0003b4af) navi_smil_pane_g1

0x2b4f,	// (0x0003b4b7) navi_smil_pane_t1

0x2b25,	// (0x0003b48d) form2_midp_slider_pane_g1

0x2b2e,	// (0x0003b496) form2_midp_slider_pane_g2

0x2b36,	// (0x0003b49e) form2_midp_slider_pane_g3

0x2b25,	// (0x0003b48d) form2_midp_slider_pane_g4

0xbafe,	// (0x00044466) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x000487ac) form2_midp_slider_pane_g

0x78c0,	// (0x00040228) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x78c0,	// (0x00040228) vkb2_area_bottom_space_btn_pane_g4

0x9c13,	// (0x0004257b) lc0_navi_pane_ParamLimits

0x9c13,	// (0x0004257b) lc0_navi_pane

0x9c7d,	// (0x000425e5) lc0_stat_indi_pane_ParamLimits

0x9c7d,	// (0x000425e5) lc0_stat_indi_pane

0x9c92,	// (0x000425fa) ls0_title_pane_ParamLimits

0x9c92,	// (0x000425fa) ls0_title_pane

0xc2e0,	// (0x00044c48) bg_popup_sub_pane_cp14_ParamLimits

0x2368,	// (0x0003acd0) list_uniindi_pane_ParamLimits

0x2374,	// (0x0003acdc) uniindi_top_pane_ParamLimits

0x240f,	// (0x0003ad77) list_single_uniindi_pane_g1_ParamLimits

0x2422,	// (0x0003ad8a) list_single_uniindi_pane_t1_ParamLimits

0xbb07,	// (0x0004446f) lc0_stat_clock_pane_ParamLimits

0xbb07,	// (0x0004446f) lc0_stat_clock_pane

0xbb14,	// (0x0004447c) lc0_stat_indi_pane_g1_ParamLimits

0xbb14,	// (0x0004447c) lc0_stat_indi_pane_g1

0xbb21,	// (0x00044489) lc0_stat_indi_pane_g2_ParamLimits

0xbb21,	// (0x00044489) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x000487b7) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x000487b7) lc0_stat_indi_pane_g

0xbb2e,	// (0x00044496) lc0_uni_indicator_pane_ParamLimits

0xbb2e,	// (0x00044496) lc0_uni_indicator_pane

0xbb3b,	// (0x000444a3) ls0_title_pane_g1_ParamLimits

0xbb3b,	// (0x000444a3) ls0_title_pane_g1

0xbb4f,	// (0x000444b7) ls0_title_pane_t1_ParamLimits

0xbb4f,	// (0x000444b7) ls0_title_pane_t1

0xbb7d,	// (0x000444e5) lc0_uni_indicator_pane_g1_ParamLimits

0xbb7d,	// (0x000444e5) lc0_uni_indicator_pane_g1

0x2b5d,	// (0x0003b4c5) lc0_stat_clock_pane_t1

0x877c,	// (0x000410e4) main_ai5_pane

0x2b6b,	// (0x0003b4d3) ai5_sk_pane_ParamLimits

0x2b6b,	// (0x0003b4d3) ai5_sk_pane

0xbbac,	// (0x00044514) cell_ai5_widget_pane_ParamLimits

0xbbac,	// (0x00044514) cell_ai5_widget_pane

0x2b78,	// (0x0003b4e0) aid_size_cell_widget_grid

0x2b8c,	// (0x0003b4f4) bg_ai5_widget_pane_ParamLimits

0x2b8c,	// (0x0003b4f4) bg_ai5_widget_pane

0xbc35,	// (0x0004459d) cell_ai5_widget_pane_g2

0xbc45,	// (0x000445ad) cell_ai5_widget_pane_g3

0xbc59,	// (0x000445c1) cell_ai5_widget_pane_g4

0xbc65,	// (0x000445cd) cell_ai5_widget_pane_g5

0xbc71,	// (0x000445d9) cell_ai5_widget_pane_g6

0xbc7d,	// (0x000445e5) cell_ai5_widget_pane_g7

0xbcc5,	// (0x0004462d) cell_ai5_widget_pane_t1_ParamLimits

0xbcc5,	// (0x0004462d) cell_ai5_widget_pane_t1

0xbce2,	// (0x0004464a) cell_ai5_widget_pane_t2_ParamLimits

0xbce2,	// (0x0004464a) cell_ai5_widget_pane_t2

0xbcfa,	// (0x00044662) cell_ai5_widget_pane_t3_ParamLimits

0xbcfa,	// (0x00044662) cell_ai5_widget_pane_t3

0xbd12,	// (0x0004467a) cell_ai5_widget_pane_t4_ParamLimits

0xbd12,	// (0x0004467a) cell_ai5_widget_pane_t4

0xbd2c,	// (0x00044694) cell_ai5_widget_pane_t5_ParamLimits

0xbd2c,	// (0x00044694) cell_ai5_widget_pane_t5

0x2b98,	// (0x0003b500) cell_ai5_widget_pane_t6_ParamLimits

0x2b98,	// (0x0003b500) cell_ai5_widget_pane_t6

0x2baa,	// (0x0003b512) cell_ai5_widget_pane_t7_ParamLimits

0x2baa,	// (0x0003b512) cell_ai5_widget_pane_t7

0xbd4b,	// (0x000446b3) cell_ai5_widget_pane_t8_ParamLimits

0xbd4b,	// (0x000446b3) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x000487d1) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x000487d1) cell_ai5_widget_pane_t

0xbd93,	// (0x000446fb) grid_ai5_widget_pane

0xc2e0,	// (0x00044c48) highlight_cell_ai5_widget_pane_ParamLimits

0xc2e0,	// (0x00044c48) highlight_cell_ai5_widget_pane

0xbda9,	// (0x00044711) ai5_sk_left_pane

0xbdb3,	// (0x0004471b) ai5_sk_middle_pane

0xbdbd,	// (0x00044725) ai5_sk_right_pane

0x2bc3,	// (0x0003b52b) bg_ai5_widget_pane_g1_ParamLimits

0x2bc3,	// (0x0003b52b) bg_ai5_widget_pane_g1

0x2bcf,	// (0x0003b537) bg_ai5_widget_pane_g2_ParamLimits

0x2bcf,	// (0x0003b537) bg_ai5_widget_pane_g2

0x2bdb,	// (0x0003b543) bg_ai5_widget_pane_g3_ParamLimits

0x2bdb,	// (0x0003b543) bg_ai5_widget_pane_g3

0x2be7,	// (0x0003b54f) bg_ai5_widget_pane_g4_ParamLimits

0x2be7,	// (0x0003b54f) bg_ai5_widget_pane_g4

0x2bf3,	// (0x0003b55b) bg_ai5_widget_pane_g5_ParamLimits

0x2bf3,	// (0x0003b55b) bg_ai5_widget_pane_g5

0x2bff,	// (0x0003b567) bg_ai5_widget_pane_g6_ParamLimits

0x2bff,	// (0x0003b567) bg_ai5_widget_pane_g6

0x2c0b,	// (0x0003b573) bg_ai5_widget_pane_g7_ParamLimits

0x2c0b,	// (0x0003b573) bg_ai5_widget_pane_g7

0x2c17,	// (0x0003b57f) bg_ai5_widget_pane_g8_ParamLimits

0x2c17,	// (0x0003b57f) bg_ai5_widget_pane_g8

0x2c23,	// (0x0003b58b) bg_ai5_widget_pane_g9_ParamLimits

0x2c23,	// (0x0003b58b) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x000487e6) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x000487e6) bg_ai5_widget_pane_g

0x2c56,	// (0x0003b5be) cell_shortcut_ai5_widget_pane_ParamLimits

0x2c56,	// (0x0003b5be) cell_shortcut_ai5_widget_pane

0x8b71,	// (0x000414d9) bg_cell_shortcut_ai5_widget_pane

0x2c67,	// (0x0003b5cf) cell_grid_ai5_widget_pane_g1

0x2c70,	// (0x0003b5d8) highlight_cell_shortcut_ai5_widget_pane

0xd262,	// (0x00045bca) ai5_sk_left_pane_g1

0x2c78,	// (0x0003b5e0) ai5_sk_left_pane_g2

0x2c80,	// (0x0003b5e8) ai5_sk_left_pane_g3

0x2c88,	// (0x0003b5f0) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x000487f9) ai5_sk_left_pane_g

0x2c90,	// (0x0003b5f8) ai5_sk_left_pane_t1

0xd26a,	// (0x00045bd2) ai5_sk_right_pane_g1

0x2c9e,	// (0x0003b606) ai5_sk_right_pane_g2

0x2ca6,	// (0x0003b60e) ai5_sk_right_pane_g3

0x2cae,	// (0x0003b616) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x00048802) ai5_sk_right_pane_g

0x2cb6,	// (0x0003b61e) ai5_sk_right_pane_t1

0xd26a,	// (0x00045bd2) ai5_sk_middle_pane_g1

0xd262,	// (0x00045bca) ai5_sk_middle_pane_g2

0xd282,	// (0x00045bea) ai5_sk_middle_pane_g3

0x2ca6,	// (0x0003b60e) ai5_sk_middle_pane_g4

0x2c80,	// (0x0003b5e8) ai5_sk_middle_pane_g5

0x2cc4,	// (0x0003b62c) ai5_sk_middle_pane_g6

0xbdc7,	// (0x0004472f) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x0004880b) ai5_sk_middle_pane_g

0x9aff,	// (0x00042467) aid_touch_area_size_lc0_ParamLimits

0x9aff,	// (0x00042467) aid_touch_area_size_lc0

0x6bfb,	// (0x0003f563) cell_hwr_candidate_pane_t1_ParamLimits

0xd094,	// (0x000459fc) aid_touch_navi_pane

0x9d84,	// (0x000426ec) status_dt_navi_pane_ParamLimits

0x9d84,	// (0x000426ec) status_dt_navi_pane

0x9d9c,	// (0x00042704) status_dt_sta_pane_ParamLimits

0x9d9c,	// (0x00042704) status_dt_sta_pane

0xbdcf,	// (0x00044737) dt_sta_controll_pane

0xbddc,	// (0x00044744) dt_sta_indi_pane

0xbde9,	// (0x00044751) dt_sta_title_pane

0x8d5c,	// (0x000416c4) bg_dt_sta_indi_pane_ParamLimits

0x8d5c,	// (0x000416c4) bg_dt_sta_indi_pane

0xbdfb,	// (0x00044763) dt_sta_battery_pane

0xbe03,	// (0x0004476b) dt_sta_indi_pane_g1

0x2ccc,	// (0x0003b634) dt_sta_indi_pane_g2

0x2cd5,	// (0x0003b63d) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x0004881a) dt_sta_indi_pane_g

0x2cde,	// (0x0003b646) dt_sta_signal_pane

0xc2e0,	// (0x00044c48) bg_dt_sta_title_pane_ParamLimits

0xc2e0,	// (0x00044c48) bg_dt_sta_title_pane

0xdee8,	// (0x00046850) dt_sta_title_pane_g1

0xbe0c,	// (0x00044774) dt_sta_title_pane_t1_ParamLimits

0xbe0c,	// (0x00044774) dt_sta_title_pane_t1

0x877c,	// (0x000410e4) bg_dt_sta_control_pane

0xbe21,	// (0x00044789) dt_sta_controll_pane_g1

0x2ce7,	// (0x0003b64f) bg_dt_sta_title_pane_g1

0x2cf0,	// (0x0003b658) bg_dt_sta_title_pane_g2

0x2cf9,	// (0x0003b661) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x00048821) bg_dt_sta_title_pane_g

0x0a28,	// (0x00039390) bg_dt_sta_indi_pane_g1

0x2d02,	// (0x0003b66a) dt_sta_signal_pane_g1

0x2d0a,	// (0x0003b672) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x00048828) dt_sta_signal_pane_g

0x2d12,	// (0x0003b67a) dt_sta_battery_pane_g1

0x2d1b,	// (0x0003b683) dt_sta_battery_pane_t1

0x0a28,	// (0x00039390) bg_dt_sta_control_pane_g1

0xc885,	// (0x000451ed) fep_china_uni_eep_pane

0xc88d,	// (0x000451f5) fep_china_uni_entry_pane_ParamLimits

0xc89d,	// (0x00045205) popup_fep_china_uni_window_g1_ParamLimits

0xc8ad,	// (0x00045215) popup_fep_china_uni_window_g2_ParamLimits

0xc8ad,	// (0x00045215) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x000480ca) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x000480ca) popup_fep_china_uni_window_g

0x2d2a,	// (0x0003b692) fep_china_uni_eep_pane_g1

0x2d32,	// (0x0003b69a) fep_china_uni_eep_pane_t1

0x2b3e,	// (0x0003b4a6) aid_touch_area_size_smil_player

0xd145,	// (0x00045aad) lc0_clock_pane

0xd17e,	// (0x00045ae6) status_pane_g5_ParamLimits

0xd17e,	// (0x00045ae6) status_pane_g5

0x95cb,	// (0x00041f33) popup_keymap_window

0xd15e,	// (0x00045ac6) status_icon_pane

0xbc45,	// (0x000445ad) cell_ai5_widget_pane_g3_ParamLimits

0xbc59,	// (0x000445c1) cell_ai5_widget_pane_g4_ParamLimits

0xbc65,	// (0x000445cd) cell_ai5_widget_pane_g5_ParamLimits

0xbc89,	// (0x000445f1) cell_ai5_widget_pane_g8_ParamLimits

0xbc89,	// (0x000445f1) cell_ai5_widget_pane_g8

0xbc9d,	// (0x00044605) cell_ai5_widget_pane_g9_ParamLimits

0xbc9d,	// (0x00044605) cell_ai5_widget_pane_g9

0xbcb1,	// (0x00044619) cell_ai5_widget_pane_g10_ParamLimits

0xbcb1,	// (0x00044619) cell_ai5_widget_pane_g10

0x2d41,	// (0x0003b6a9) status_icon_pane_g1

0x877c,	// (0x000410e4) bg_popup_sub_pane_cp13

0x2d49,	// (0x0003b6b1) popup_keymap_window_t1

0x92ff,	// (0x00041c67) control_pane_g6_ParamLimits

0x92ff,	// (0x00041c67) control_pane_g6

0x930c,	// (0x00041c74) control_pane_g7_ParamLimits

0x930c,	// (0x00041c74) control_pane_g7

0x9319,	// (0x00041c81) control_pane_g8_ParamLimits

0x9319,	// (0x00041c81) control_pane_g8

0xbdcf,	// (0x00044737) dt_sta_controll_pane_ParamLimits

0xbddc,	// (0x00044744) dt_sta_indi_pane_ParamLimits

0xbde9,	// (0x00044751) dt_sta_title_pane_ParamLimits

0xc20a,	// (0x00044b72) aid_size_touch_scroll_bar_cale

0x5cbd,	// (0x0003e625) popup_discreet_window_ParamLimits

0x5cbd,	// (0x0003e625) popup_discreet_window

0x88c6,	// (0x0004122e) popup_sk_window

0xd7e2,	// (0x0004614a) bg_popup_sub_pane_cp28_ParamLimits

0xd7e2,	// (0x0004614a) bg_popup_sub_pane_cp28

0x2d57,	// (0x0003b6bf) popup_discreet_window_g1_ParamLimits

0x2d57,	// (0x0003b6bf) popup_discreet_window_g1

0x2d77,	// (0x0003b6df) popup_discreet_window_t1_ParamLimits

0x2d77,	// (0x0003b6df) popup_discreet_window_t1

0x2d95,	// (0x0003b6fd) popup_discreet_window_t2_ParamLimits

0x2d95,	// (0x0003b6fd) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x0004882d) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x0004882d) popup_discreet_window_t

0x7c45,	// (0x000405ad) popup_sk_window_g1

0x7c4f,	// (0x000405b7) popup_sk_window_g2

0x0001,

0xfecc,	// (0x00048834) popup_sk_window_g

0x2df5,	// (0x0003b75d) popup_sk_window_t1

0x2de7,	// (0x0003b74f) popup_sk_window_t1_copy1

0xbc35,	// (0x0004459d) cell_ai5_widget_pane_g2_ParamLimits

0xbd5d,	// (0x000446c5) cell_ai5_widget_pane_t9_ParamLimits

0xbd5d,	// (0x000446c5) cell_ai5_widget_pane_t9

0x877c,	// (0x000410e4) main_fep_fshwr2_pane

0xbe2a,	// (0x00044792) aid_fshwr2_btn_pane

0xbe32,	// (0x0004479a) aid_fshwr2_syb_pane

0xbe3a,	// (0x000447a2) aid_fshwr2_txt_pane

0xbe42,	// (0x000447aa) fshwr2_func_candi_pane

0xbe4c,	// (0x000447b4) fshwr2_hwr_syb_pane

0xbe5a,	// (0x000447c2) fshwr2_icf_pane

0x877c,	// (0x000410e4) fshwr2_icf_bg_pane

0xbe64,	// (0x000447cc) fshwr2_icf_pane_t1_ParamLimits

0xbe64,	// (0x000447cc) fshwr2_icf_pane_t1

0x0a28,	// (0x00039390) fshwr2_func_candi_pane_g1

0x2e17,	// (0x0003b77f) fshwr2_func_candi_row_pane_ParamLimits

0x2e17,	// (0x0003b77f) fshwr2_func_candi_row_pane

0xbe7e,	// (0x000447e6) cell_fshwr2_syb_pane_ParamLimits

0xbe7e,	// (0x000447e6) cell_fshwr2_syb_pane

0x0cc1,	// (0x00039629) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0cc1,	// (0x00039629) fshwr2_hwr_syb_pane_g1

0x877c,	// (0x000410e4) bg_popup_call_pane_cp01

0x2e28,	// (0x0003b790) fshwr2_func_candi_cell_pane_ParamLimits

0x2e28,	// (0x0003b790) fshwr2_func_candi_cell_pane

0x2e59,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2e59,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane

0x2e73,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x2e73,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1

0x2e93,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x2e93,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1

0x877c,	// (0x000410e4) bg_button_pane_cp08

0xcd16,	// (0x0004567e) cell_fshwr2_syb_bg_pane

0xbe98,	// (0x00044800) cell_fshwr2_syb_bg_pane_g1

0x2ea6,	// (0x0003b80e) cell_fshwr2_syb_bg_pane_t1

0xc2e0,	// (0x00044c48) main_tmo_pane

0xa29b,	// (0x00042c03) uni_indicator_pane_g1_ParamLimits

0xa2b0,	// (0x00042c18) uni_indicator_pane_g2_ParamLimits

0xa2c5,	// (0x00042c2d) uni_indicator_pane_g3_ParamLimits

0xe1ac,	// (0x00046b14) uni_indicator_pane_g4_ParamLimits

0xe1ac,	// (0x00046b14) uni_indicator_pane_g4

0xe1c0,	// (0x00046b28) uni_indicator_pane_g5_ParamLimits

0xe1c0,	// (0x00046b28) uni_indicator_pane_g5

0xe1d4,	// (0x00046b3c) uni_indicator_pane_g6_ParamLimits

0xe1d4,	// (0x00046b3c) uni_indicator_pane_g6

0xf95a,	// (0x000482c2) uni_indicator_pane_g_ParamLimits

0xac89,	// (0x000435f1) popup_tmo_note_window_ParamLimits

0xac89,	// (0x000435f1) popup_tmo_note_window

0x877c,	// (0x000410e4) fshwr2_bg_pane

0x2e84,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x2e84,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x00048839) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x00048839) fshwr2_func_candi_cell_pane_g

0x0a28,	// (0x00039390) bg_popup_window_pane_cp01

0x2eb5,	// (0x0003b81d) bg_popup_window_pane_g1_cp01

0x2ebe,	// (0x0003b826) bg_popup_window_pane_cp22_ParamLimits

0x2ebe,	// (0x0003b826) bg_popup_window_pane_cp22

0x2ecc,	// (0x0003b834) listscroll_tmo_link_pane_ParamLimits

0x2ecc,	// (0x0003b834) listscroll_tmo_link_pane

0x2f0c,	// (0x0003b874) popup_tmo_note_window_g1_ParamLimits

0x2f0c,	// (0x0003b874) popup_tmo_note_window_g1

0x2f19,	// (0x0003b881) tmo_note_info_pane_ParamLimits

0x2f19,	// (0x0003b881) tmo_note_info_pane

0xbea0,	// (0x00044808) list_tmo_note_info_pane_g1_ParamLimits

0xbea0,	// (0x00044808) list_tmo_note_info_pane_g1

0x2f33,	// (0x0003b89b) list_tmo_note_info_pane_g2_ParamLimits

0x2f33,	// (0x0003b89b) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x0004883e) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x0004883e) list_tmo_note_info_pane_g

0x2f4f,	// (0x0003b8b7) list_tmo_note_info_text_pane_ParamLimits

0x2f4f,	// (0x0003b8b7) list_tmo_note_info_text_pane

0x2f91,	// (0x0003b8f9) list_tmo_link_pane

0x2f9e,	// (0x0003b906) scroll_pane_cp20

0x2fab,	// (0x0003b913) list_single_tmo_link_pane_ParamLimits

0x2fab,	// (0x0003b913) list_single_tmo_link_pane

0x2fbb,	// (0x0003b923) list_single_tmo_link_pane_t1

0x2fc9,	// (0x0003b931) list_tmo_note_info_text_pane_t1_ParamLimits

0x2fc9,	// (0x0003b931) list_tmo_note_info_text_pane_t1

0x8fde,	// (0x00041946) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8fde,	// (0x00041946) aid_size_touch_scroll_bar_cp01

0x435a,	// (0x0003ccc2) aid_size_touch_slider_marker

0x88b6,	// (0x0004121e) popup_settings_window_ParamLimits

0x88b6,	// (0x0004121e) popup_settings_window

0xf06b,	// (0x000479d3) popup_candi_list_indi_window

0xd094,	// (0x000459fc) aid_touch_navi_pane_ParamLimits

0x6db9,	// (0x0003f721) rs_clock_indi_pane

0x6dc2,	// (0x0003f72a) sctrl_sk_bottom_pane_ParamLimits

0x6dd3,	// (0x0003f73b) sctrl_sk_top_pane_ParamLimits

0x6eda,	// (0x0003f842) popup_fep_tooltip_window

0x2b78,	// (0x0003b4e0) aid_size_cell_widget_grid_ParamLimits

0xbc29,	// (0x00044591) cell_ai5_widget_pane_g1_ParamLimits

0xbc29,	// (0x00044591) cell_ai5_widget_pane_g1

0xbc71,	// (0x000445d9) cell_ai5_widget_pane_g6_ParamLimits

0xbc7d,	// (0x000445e5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x000487bc) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x000487bc) cell_ai5_widget_pane_g

0xbd81,	// (0x000446e9) cell_ai5_widget_pane_t10_ParamLimits

0xbd81,	// (0x000446e9) cell_ai5_widget_pane_t10

0xbd93,	// (0x000446fb) grid_ai5_widget_pane_ParamLimits

0x2c2f,	// (0x0003b597) cell_contacts_ai5_widget_pane_ParamLimits

0x2c2f,	// (0x0003b597) cell_contacts_ai5_widget_pane

0x2daa,	// (0x0003b712) popup_discreet_window_t3_ParamLimits

0x2daa,	// (0x0003b712) popup_discreet_window_t3

0x2e03,	// (0x0003b76b) popup_fshwr2_char_preview_window_ParamLimits

0x2e03,	// (0x0003b76b) popup_fshwr2_char_preview_window

0xbeb7,	// (0x0004481f) tmo_note_info_pane_t1

0xbecc,	// (0x00044834) tmo_note_info_pane_t2

0xbee5,	// (0x0004484d) tmo_note_info_pane_t3

0x2f6d,	// (0x0003b8d5) tmo_note_info_pane_t4

0x2f7f,	// (0x0003b8e7) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x00048843) tmo_note_info_pane_t

0x2f91,	// (0x0003b8f9) list_tmo_link_pane_ParamLimits

0x2f9e,	// (0x0003b906) scroll_pane_cp20_ParamLimits

0x877c,	// (0x000410e4) bg_popup_fep_char_preview_window_cp01

0x2fe2,	// (0x0003b94a) popup_fshwr2_char_preview_window_t1

0x2ff0,	// (0x0003b958) popup_candi_list_indi_window_g1

0x2ff9,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane

0x3005,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1

0x3019,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2

0x3028,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x0004884e) cell_contacts_ai5_widget_pane_g

0x303b,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1

0xc2e0,	// (0x00044c48) highlight_cell_shortcut_ai5_widget_pane_cp01

0x30b5,	// (0x0003ba1d) settings_container_pane

0xcd16,	// (0x0004567e) listscroll_set_pane_copy1

0xe9b1,	// (0x00047319) scroll_pane_cp121_copy1

0x30c1,	// (0x0003ba29) set_content_pane_copy1

0x30c9,	// (0x0003ba31) aid_height_set_list_copy1_ParamLimits

0x30c9,	// (0x0003ba31) aid_height_set_list_copy1

0xcf62,	// (0x000458ca) aid_size_parent_copy1_ParamLimits

0xcf62,	// (0x000458ca) aid_size_parent_copy1

0x30d5,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1_ParamLimits

0x30d5,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1

0xc42b,	// (0x00044d93) list_highlight_pane_cp2_copy1_ParamLimits

0xc42b,	// (0x00044d93) list_highlight_pane_cp2_copy1

0x30e9,	// (0x0003ba51) list_set_pane_copy1_ParamLimits

0x30e9,	// (0x0003ba51) list_set_pane_copy1

0x3050,	// (0x0003b9b8) main_pane_set_t1_copy1_ParamLimits

0x3050,	// (0x0003b9b8) main_pane_set_t1_copy1

0x308a,	// (0x0003b9f2) main_pane_set_t2_copy1_ParamLimits

0x308a,	// (0x0003b9f2) main_pane_set_t2_copy1

0x3196,	// (0x0003bafe) main_pane_set_t3_copy1

0x31a4,	// (0x0003bb0c) main_pane_set_t4_copy1

0x30a9,	// (0x0003ba11) set_content_pane_g1_copy1_ParamLimits

0x30a9,	// (0x0003ba11) set_content_pane_g1_copy1

0x31b2,	// (0x0003bb1a) setting_code_pane_copy1

0x31bc,	// (0x0003bb24) setting_slider_graphic_pane_copy1

0x31bc,	// (0x0003bb24) setting_slider_pane_copy1

0x31c6,	// (0x0003bb2e) setting_text_pane_copy1

0x31d0,	// (0x0003bb38) setting_volume_pane_copy1

0x31d9,	// (0x0003bb41) settings_code_pane_cp2_copy1

0x31e1,	// (0x0003bb49) settings_code_pane_cp_copy1_ParamLimits

0x31e1,	// (0x0003bb49) settings_code_pane_cp_copy1

0x31f5,	// (0x0003bb5d) volume_set_pane_copy1

0x31fd,	// (0x0003bb65) volume_set_pane_g10_copy1

0x3205,	// (0x0003bb6d) volume_set_pane_g1_copy1

0x320d,	// (0x0003bb75) volume_set_pane_g2_copy1

0x3215,	// (0x0003bb7d) volume_set_pane_g3_copy1

0x321d,	// (0x0003bb85) volume_set_pane_g4_copy1

0x3225,	// (0x0003bb8d) volume_set_pane_g5_copy1

0x322d,	// (0x0003bb95) volume_set_pane_g6_copy1

0x3235,	// (0x0003bb9d) volume_set_pane_g7_copy1

0x323d,	// (0x0003bba5) volume_set_pane_g8_copy1

0x3245,	// (0x0003bbad) volume_set_pane_g9_copy1

0x8a82,	// (0x000413ea) bg_set_opt_pane_cp_copy1_ParamLimits

0x8a82,	// (0x000413ea) bg_set_opt_pane_cp_copy1

0x324d,	// (0x0003bbb5) setting_slider_pane_t1_copy1_ParamLimits

0x324d,	// (0x0003bbb5) setting_slider_pane_t1_copy1

0x326b,	// (0x0003bbd3) setting_slider_pane_t2_copy1_ParamLimits

0x326b,	// (0x0003bbd3) setting_slider_pane_t2_copy1

0x3285,	// (0x0003bbed) setting_slider_pane_t3_copy1_ParamLimits

0x3285,	// (0x0003bbed) setting_slider_pane_t3_copy1

0x329d,	// (0x0003bc05) slider_set_pane_copy1_ParamLimits

0x329d,	// (0x0003bc05) slider_set_pane_copy1

0xc33b,	// (0x00044ca3) set_opt_bg_pane_g1_copy2

0xc343,	// (0x00044cab) set_opt_bg_pane_g2_copy2

0x32b3,	// (0x0003bc1b) set_opt_bg_pane_g3_copy2

0xc353,	// (0x00044cbb) set_opt_bg_pane_g4_copy2

0xc35b,	// (0x00044cc3) set_opt_bg_pane_g5_copy2

0xc363,	// (0x00044ccb) set_opt_bg_pane_g6_copy2

0x32bd,	// (0x0003bc25) set_opt_bg_pane_g7_copy2

0x32c5,	// (0x0003bc2d) set_opt_bg_pane_g8_copy2

0x32cf,	// (0x0003bc37) set_opt_bg_pane_g9_copy2

0x7d28,	// (0x00040690) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d28,	// (0x00040690) aid_size_touch_slider_mark_copy1

0x32d9,	// (0x0003bc41) slider_set_pane_g1_copy1

0x7d3c,	// (0x000406a4) slider_set_pane_g2_copy1

0x67a4,	// (0x0003f10c) slider_set_pane_g3_copy1_ParamLimits

0x67a4,	// (0x0003f10c) slider_set_pane_g3_copy1

0x67b8,	// (0x0003f120) slider_set_pane_g4_copy1_ParamLimits

0x67b8,	// (0x0003f120) slider_set_pane_g4_copy1

0x67d0,	// (0x0003f138) slider_set_pane_g5_copy1_ParamLimits

0x67d0,	// (0x0003f138) slider_set_pane_g5_copy1

0x67a4,	// (0x0003f10c) slider_set_pane_g6_copy1_ParamLimits

0x67a4,	// (0x0003f10c) slider_set_pane_g6_copy1

0x7d44,	// (0x000406ac) slider_set_pane_g7_copy1_ParamLimits

0x7d44,	// (0x000406ac) slider_set_pane_g7_copy1

0x8876,	// (0x000411de) bg_set_opt_pane_cp2_copy1

0x32e2,	// (0x0003bc4a) setting_slider_graphic_pane_g1_copy1

0x32eb,	// (0x0003bc53) setting_slider_graphic_pane_t1_copy1

0x32fb,	// (0x0003bc63) setting_slider_graphic_pane_t2_copy1

0x330b,	// (0x0003bc73) slider_set_pane_cp_copy1

0x331b,	// (0x0003bc83) input_focus_pane_cp1_copy1

0x3324,	// (0x0003bc8c) list_set_text_pane_copy1

0x332c,	// (0x0003bc94) setting_text_pane_g1_copy1

0xf576,	// (0x00047ede) set_text_pane_t1_copy1

0x331b,	// (0x0003bc83) input_focus_pane_cp2_copy1

0x332c,	// (0x0003bc94) setting_code_pane_g1_copy1

0x3335,	// (0x0003bc9d) setting_code_pane_t1_copy1

0x3343,	// (0x0003bcab) list_set_graphic_pane_copy1

0x8876,	// (0x000411de) bg_set_opt_pane_cp4_copy1

0xca18,	// (0x00045380) list_set_graphic_pane_g1_copy1_ParamLimits

0xca18,	// (0x00045380) list_set_graphic_pane_g1_copy1

0x3357,	// (0x0003bcbf) list_set_graphic_pane_g2_copy1

0xca30,	// (0x00045398) list_set_graphic_pane_t1_copy1_ParamLimits

0xca30,	// (0x00045398) list_set_graphic_pane_t1_copy1

0x0a28,	// (0x00039390) rs_clock_indi_pane_g1

0x335f,	// (0x0003bcc7) rs_clock_indi_pane_t1

0x336d,	// (0x0003bcd5) rs_indi_pane

0x3375,	// (0x0003bcdd) rs_indi_pane_g1

0x337e,	// (0x0003bce6) rs_indi_pane_g2

0x3387,	// (0x0003bcef) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x00048855) rs_indi_pane_g

0xcd16,	// (0x0004567e) bg_popup_preview_window_pane_cp03

0x3390,	// (0x0003bcf8) popup_fep_tooltip_window_t1

0x16cf,	// (0x0003a037) popup_note2_window_g2_ParamLimits

0x16cf,	// (0x0003a037) popup_note2_window_g2

0x0001,

0xfc92,	// (0x000485fa) popup_note2_window_g_ParamLimits

0xfc92,	// (0x000485fa) popup_note2_window_g

0x1bbd,	// (0x0003a525) bg_popup_sub_pane_cp11_ParamLimits

0x1bca,	// (0x0003a532) cell_ai3_links_pane_g1_ParamLimits

0x1be1,	// (0x0003a549) cell_ai3_links_pane_t1

0xf576,	// (0x00047ede) set_text_pane_t1_copy1_ParamLimits

0xcc25,	// (0x0004558d) cell_graphic_popup_pane_cp2_ParamLimits

0xcc25,	// (0x0004558d) cell_graphic_popup_pane_cp2

0x339e,	// (0x0003bd06) cell_graphic_popup_pane_g1_cp2

0xc01d,	// (0x00044985) cell_graphic_popup_pane_g2_cp2

0x33a6,	// (0x0003bd0e) cell_graphic_popup_pane_g3_cp2

0x33ae,	// (0x0003bd16) cell_graphic_popup_pane_t2_cp2

0xc02e,	// (0x00044996) grid_highlight_pane_cp3_cp2

0xc5d5,	// (0x00044f3d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc2e0,	// (0x00044c48) main_tmo_pane_ParamLimits

0xac7d,	// (0x000435e5) popup_tmo_big_image_note_window

0xbc19,	// (0x00044581) cell_ai5_widget_list_pane

0xbc21,	// (0x00044589) cell_ai5_widget_lrg_icon_pane

0xbeb7,	// (0x0004481f) tmo_note_info_pane_t1_ParamLimits

0xbecc,	// (0x00044834) tmo_note_info_pane_t2_ParamLimits

0xbee5,	// (0x0004484d) tmo_note_info_pane_t3_ParamLimits

0x2f6d,	// (0x0003b8d5) tmo_note_info_pane_t4_ParamLimits

0x2f7f,	// (0x0003b8e7) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x00048843) tmo_note_info_pane_t_ParamLimits

0x30b5,	// (0x0003ba1d) settings_container_pane_ParamLimits

0x3313,	// (0x0003bc7b) indicator_popup_pane_cp5

0x3313,	// (0x0003bc7b) indicator_popup_pane_cp6

0x3343,	// (0x0003bcab) list_set_graphic_pane_copy1_ParamLimits

0x877c,	// (0x000410e4) bg_popup_window_pane_cp23

0x33bc,	// (0x0003bd24) popup_tmo_big_image_note_window_g1

0x33c7,	// (0x0003bd2f) popup_tmo_big_image_note_window_t1

0x33d7,	// (0x0003bd3f) popup_tmo_big_image_note_window_t2

0x33e7,	// (0x0003bd4f) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x0004885c) popup_tmo_big_image_note_window_t

0xbefa,	// (0x00044862) cell_ai5_widget_lrg_icon_pane_g1

0xbf02,	// (0x0004486a) cell_ai5_widget_lrg_icon_pane_t1

0xbf10,	// (0x00044878) cell_ai5_widget_list_row_pane_ParamLimits

0xbf10,	// (0x00044878) cell_ai5_widget_list_row_pane

0xbf29,	// (0x00044891) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbf29,	// (0x00044891) cell_ai5_widget_list_row_pane_g1

0xbf36,	// (0x0004489e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbf36,	// (0x0004489e) cell_ai5_widget_list_row_pane_t1

0xbf4e,	// (0x000448b6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbf4e,	// (0x000448b6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x00048863) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x00048863) cell_ai5_widget_list_row_pane_t

0x5be4,	// (0x0003e54c) main_fep_vtchi_ss_pane

0x33f7,	// (0x0003bd5f) popup_fep_char_pre_window

0x33ff,	// (0x0003bd67) popup_fep_ituss_window

0x340a,	// (0x0003bd72) popup_fep_vkbss_window

0x3413,	// (0x0003bd7b) grid_vkbss_keypad_pane_ParamLimits

0x3413,	// (0x0003bd7b) grid_vkbss_keypad_pane

0x3423,	// (0x0003bd8b) ituss_keypad_pane

0x342b,	// (0x0003bd93) aid_vkbss_key_offset_ParamLimits

0x342b,	// (0x0003bd93) aid_vkbss_key_offset

0x343a,	// (0x0003bda2) cell_vkbss_key_pane_ParamLimits

0x343a,	// (0x0003bda2) cell_vkbss_key_pane

0x3450,	// (0x0003bdb8) bg_cell_vkbss_key_g1_ParamLimits

0x3450,	// (0x0003bdb8) bg_cell_vkbss_key_g1

0x345c,	// (0x0003bdc4) cell_vkbss_key_3p_pane_ParamLimits

0x345c,	// (0x0003bdc4) cell_vkbss_key_3p_pane

0x3476,	// (0x0003bdde) cell_vkbss_key_g1_ParamLimits

0x3476,	// (0x0003bdde) cell_vkbss_key_g1

0x3490,	// (0x0003bdf8) cell_vkbss_key_t1_ParamLimits

0x3490,	// (0x0003bdf8) cell_vkbss_key_t1

0x34bb,	// (0x0003be23) cell_ituss_key_pane_ParamLimits

0x34bb,	// (0x0003be23) cell_ituss_key_pane

0x34ca,	// (0x0003be32) bg_cell_ituss_key_g1_ParamLimits

0x34ca,	// (0x0003be32) bg_cell_ituss_key_g1

0x34d6,	// (0x0003be3e) cell_ituss_key_pane_g1_ParamLimits

0x34d6,	// (0x0003be3e) cell_ituss_key_pane_g1

0x34e2,	// (0x0003be4a) cell_ituss_key_pane_g2_ParamLimits

0x34e2,	// (0x0003be4a) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x00048868) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x00048868) cell_ituss_key_pane_g

0x34f5,	// (0x0003be5d) cell_ituss_key_t1_ParamLimits

0x34f5,	// (0x0003be5d) cell_ituss_key_t1

0x3513,	// (0x0003be7b) cell_ituss_key_t2_ParamLimits

0x3513,	// (0x0003be7b) cell_ituss_key_t2

0x3532,	// (0x0003be9a) cell_ituss_key_t3_ParamLimits

0x3532,	// (0x0003be9a) cell_ituss_key_t3

0x3551,	// (0x0003beb9) cell_ituss_key_t4_ParamLimits

0x3551,	// (0x0003beb9) cell_ituss_key_t4

0x0003,

0xff05,	// (0x0004886d) cell_ituss_key_t_ParamLimits

0xff05,	// (0x0004886d) cell_ituss_key_t

0x3570,	// (0x0003bed8) cell_vkbss_key_3p_pane_g1

0x3578,	// (0x0003bee0) cell_vkbss_key_3p_pane_g2

0x3580,	// (0x0003bee8) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x00048876) cell_vkbss_key_3p_pane_g

0x877c,	// (0x000410e4) bg_popup_fep_char_preview_window_cp02

0x3588,	// (0x0003bef0) popup_fep_char_pre_window_t1

0xbc0f,	// (0x00044577) main_ai5_sk_pane

0x2ff9,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3005,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3019,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3028,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x0004884e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x303b,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc2e0,	// (0x00044c48) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbf60,	// (0x000448c8) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

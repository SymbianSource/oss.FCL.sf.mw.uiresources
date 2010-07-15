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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001f329 };

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
0x6516,	// (0x0002583f) Screen

0x6522,	// (0x0002584b) application_window_ParamLimits

0x6522,	// (0x0002584b) application_window

0x17b3,	// (0x00020adc) screen_g1

0x657e,	// (0x000258a7) area_bottom_pane_ParamLimits

0x657e,	// (0x000258a7) area_bottom_pane

0x663e,	// (0x00025967) area_top_pane_ParamLimits

0x663e,	// (0x00025967) area_top_pane

0x66d2,	// (0x000259fb) main_pane_ParamLimits

0x66d2,	// (0x000259fb) main_pane

0x17bd,	// (0x00020ae6) misc_graphics

0x8421,	// (0x0002774a) battery_pane_ParamLimits

0x8421,	// (0x0002774a) battery_pane

0xa4c8,	// (0x000297f1) bg_status_flat_pane_g8

0xa4d0,	// (0x000297f9) bg_status_flat_pane_g9

0x84e9,	// (0x00027812) context_pane_ParamLimits

0x84e9,	// (0x00027812) context_pane

0x85ff,	// (0x00027928) navi_pane_ParamLimits

0x85ff,	// (0x00027928) navi_pane

0x8683,	// (0x000279ac) signal_pane_ParamLimits

0x8683,	// (0x000279ac) signal_pane

0x0008,

0xf86a,	// (0x0002eb93) bg_status_flat_pane_g

0x86f0,	// (0x00027a19) status_pane_g1_ParamLimits

0x86f0,	// (0x00027a19) status_pane_g1

0x8704,	// (0x00027a2d) status_pane_g2_ParamLimits

0x8704,	// (0x00027a2d) status_pane_g2

0x8710,	// (0x00027a39) status_pane_g3_ParamLimits

0x8710,	// (0x00027a39) status_pane_g3

0x0004,

0xf796,	// (0x0002eabf) status_pane_g_ParamLimits

0xf796,	// (0x0002eabf) status_pane_g

0x8744,	// (0x00027a6d) title_pane_ParamLimits

0x8744,	// (0x00027a6d) title_pane

0x8781,	// (0x00027aaa) uni_indicator_pane_ParamLimits

0x8781,	// (0x00027aaa) uni_indicator_pane

0x7dae,	// (0x000270d7) bg_list_pane_ParamLimits

0x7dae,	// (0x000270d7) bg_list_pane

0x5b1d,	// (0x00024e46) find_pane

0x7dce,	// (0x000270f7) listscroll_app_pane_ParamLimits

0x7dce,	// (0x000270f7) listscroll_app_pane

0x7dda,	// (0x00027103) listscroll_form_pane

0x5b25,	// (0x00024e4e) listscroll_gen_pane_ParamLimits

0x5b25,	// (0x00024e4e) listscroll_gen_pane

0x7de2,	// (0x0002710b) listscroll_set_pane

0x6fa9,	// (0x000262d2) main_idle_act_pane

0x7897,	// (0x00026bc0) main_idle_trad_pane

0x7897,	// (0x00026bc0) main_list_empty_pane

0x7dce,	// (0x000270f7) main_midp_pane

0x7dfc,	// (0x00027125) main_pane_g1_ParamLimits

0x7dfc,	// (0x00027125) main_pane_g1

0x7e0a,	// (0x00027133) popup_ai_message_window_ParamLimits

0x7e0a,	// (0x00027133) popup_ai_message_window

0x7eae,	// (0x000271d7) popup_fep_china_uni_window_ParamLimits

0x7eae,	// (0x000271d7) popup_fep_china_uni_window

0x7f08,	// (0x00027231) popup_fep_japan_candidate_window_ParamLimits

0x7f08,	// (0x00027231) popup_fep_japan_candidate_window

0x7f26,	// (0x0002724f) popup_fep_japan_predictive_window_ParamLimits

0x7f26,	// (0x0002724f) popup_fep_japan_predictive_window

0x7f56,	// (0x0002727f) popup_find_window

0x7f63,	// (0x0002728c) popup_grid_graphic_window_ParamLimits

0x7f63,	// (0x0002728c) popup_grid_graphic_window

0x7f8d,	// (0x000272b6) popup_large_graphic_colour_window

0x7fb3,	// (0x000272dc) popup_menu_window_ParamLimits

0x7fb3,	// (0x000272dc) popup_menu_window

0x816f,	// (0x00027498) popup_note_image_window

0x815b,	// (0x00027484) popup_note_wait_window_ParamLimits

0x815b,	// (0x00027484) popup_note_wait_window

0x815b,	// (0x00027484) popup_note_window_ParamLimits

0x815b,	// (0x00027484) popup_note_window

0x81c5,	// (0x000274ee) popup_query_code_window_ParamLimits

0x81c5,	// (0x000274ee) popup_query_code_window

0x81d9,	// (0x00027502) popup_query_data_code_window_ParamLimits

0x81d9,	// (0x00027502) popup_query_data_code_window

0x81f6,	// (0x0002751f) popup_query_data_window_ParamLimits

0x81f6,	// (0x0002751f) popup_query_data_window

0x8212,	// (0x0002753b) popup_query_sat_info_window_ParamLimits

0x8212,	// (0x0002753b) popup_query_sat_info_window

0x824b,	// (0x00027574) popup_snote_single_graphic_window_ParamLimits

0x824b,	// (0x00027574) popup_snote_single_graphic_window

0x824b,	// (0x00027574) popup_snote_single_text_window_ParamLimits

0x824b,	// (0x00027574) popup_snote_single_text_window

0x8260,	// (0x00027589) popup_sub_window_general

0x8390,	// (0x000276b9) popup_window_general_ParamLimits

0x8390,	// (0x000276b9) popup_window_general

0x83a5,	// (0x000276ce) power_save_pane

0x7c03,	// (0x00026f2c) control_pane_g1_ParamLimits

0x7c03,	// (0x00026f2c) control_pane_g1

0x7c2a,	// (0x00026f53) control_pane_g2_ParamLimits

0x7c2a,	// (0x00026f53) control_pane_g2

0x7c51,	// (0x00026f7a) control_pane_g3_ParamLimits

0x7c51,	// (0x00026f7a) control_pane_g3

0x0007,

0xf77e,	// (0x0002eaa7) control_pane_g_ParamLimits

0xf77e,	// (0x0002eaa7) control_pane_g

0x7ca9,	// (0x00026fd2) control_pane_t1_ParamLimits

0x7ca9,	// (0x00026fd2) control_pane_t1

0x7cfd,	// (0x00027026) control_pane_t2_ParamLimits

0x7cfd,	// (0x00027026) control_pane_t2

0x0002,

0xf78f,	// (0x0002eab8) control_pane_t_ParamLimits

0xf78f,	// (0x0002eab8) control_pane_t

0x7b28,	// (0x00026e51) navi_navi_volume_pane_cp1

0x7b30,	// (0x00026e59) status_small_icon_pane

0x7b38,	// (0x00026e61) status_small_pane_g1_ParamLimits

0x7b38,	// (0x00026e61) status_small_pane_g1

0x7b6c,	// (0x00026e95) status_small_pane_g2_ParamLimits

0x7b6c,	// (0x00026e95) status_small_pane_g2

0x7b78,	// (0x00026ea1) status_small_pane_g3_ParamLimits

0x7b78,	// (0x00026ea1) status_small_pane_g3

0x7b84,	// (0x00026ead) status_small_pane_g4_ParamLimits

0x7b84,	// (0x00026ead) status_small_pane_g4

0x7b90,	// (0x00026eb9) status_small_pane_g5_ParamLimits

0x7b90,	// (0x00026eb9) status_small_pane_g5

0x7b9e,	// (0x00026ec7) status_small_pane_g6_ParamLimits

0x7b9e,	// (0x00026ec7) status_small_pane_g6

0x0007,

0xf76d,	// (0x0002ea96) status_small_pane_g_ParamLimits

0xf76d,	// (0x0002ea96) status_small_pane_g

0x7bcd,	// (0x00026ef6) status_small_pane_t1

0x7bef,	// (0x00026f18) status_small_wait_pane_ParamLimits

0x7bef,	// (0x00026f18) status_small_wait_pane

0x737c,	// (0x000266a5) aid_levels_signal_ParamLimits

0x737c,	// (0x000266a5) aid_levels_signal

0x738e,	// (0x000266b7) signal_pane_g1_ParamLimits

0x738e,	// (0x000266b7) signal_pane_g1

0x73a3,	// (0x000266cc) signal_pane_g2_ParamLimits

0x73a3,	// (0x000266cc) signal_pane_g2

0x0003,

0xf6fe,	// (0x0002ea27) signal_pane_g_ParamLimits

0xf6fe,	// (0x0002ea27) signal_pane_g

0x213c,	// (0x00021465) context_pane_g1

0x6913,	// (0x00025c3c) title_pane_g1

0x693d,	// (0x00025c66) title_pane_t1

0x17d3,	// (0x00020afc) title_pane_t2

0x17f9,	// (0x00020b22) title_pane_t3

0x0002,

0xf557,	// (0x0002e880) title_pane_t

0x8799,	// (0x00027ac2) aid_levels_battery_ParamLimits

0x8799,	// (0x00027ac2) aid_levels_battery

0x87ad,	// (0x00027ad6) battery_pane_g1_ParamLimits

0x87ad,	// (0x00027ad6) battery_pane_g1

0x87c3,	// (0x00027aec) battery_pane_g2_ParamLimits

0x87c3,	// (0x00027aec) battery_pane_g2

0x0001,

0xf7a1,	// (0x0002eaca) battery_pane_g_ParamLimits

0xf7a1,	// (0x0002eaca) battery_pane_g

0xadec,	// (0x0002a115) uni_indicator_pane_g1

0xadff,	// (0x0002a128) uni_indicator_pane_g2

0xae11,	// (0x0002a13a) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0002ec3b) uni_indicator_pane_g

0x7709,	// (0x00026a32) navi_icon_pane_ParamLimits

0x7709,	// (0x00026a32) navi_icon_pane

0x7653,	// (0x0002697c) navi_midp_pane

0x7725,	// (0x00026a4e) navi_navi_pane

0x772f,	// (0x00026a58) navi_text_pane_ParamLimits

0x772f,	// (0x00026a58) navi_text_pane

0x17b3,	// (0x00020adc) status_small_wait_pane_g1

0x1a64,	// (0x00020d8d) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0002ec36) status_small_wait_pane_g

0xab13,	// (0x00029e3c) navi_navi_icon_text_pane

0xab1b,	// (0x00029e44) navi_navi_pane_g1_ParamLimits

0xab1b,	// (0x00029e44) navi_navi_pane_g1

0xab2d,	// (0x00029e56) navi_navi_pane_g2_ParamLimits

0xab2d,	// (0x00029e56) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0002ec04) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0002ec04) navi_navi_pane_g

0xab3f,	// (0x00029e68) navi_navi_tabs_pane

0xab48,	// (0x00029e71) navi_navi_text_pane

0xab13,	// (0x00029e3c) navi_navi_volume_pane

0xaaef,	// (0x00029e18) navi_text_pane_t1

0xaae3,	// (0x00029e0c) navi_icon_pane_g1

0xaa36,	// (0x00029d5f) navi_navi_text_pane_t1

0x8c70,	// (0x00027f99) navi_navi_volume_pane_g1

0x8c78,	// (0x00027fa1) volume_small_pane

0xa99c,	// (0x00029cc5) navi_navi_icon_text_pane_g1

0xa9a4,	// (0x00029ccd) navi_navi_icon_text_pane_t1

0x7725,	// (0x00026a4e) navi_tabs_2_long_pane

0x7725,	// (0x00026a4e) navi_tabs_2_pane

0x7725,	// (0x00026a4e) navi_tabs_3_long_pane

0x7725,	// (0x00026a4e) navi_tabs_3_pane

0x7725,	// (0x00026a4e) navi_tabs_4_pane

0x8c50,	// (0x00027f79) tabs_2_active_pane_ParamLimits

0x8c50,	// (0x00027f79) tabs_2_active_pane

0x8c60,	// (0x00027f89) tabs_2_passive_pane_ParamLimits

0x8c60,	// (0x00027f89) tabs_2_passive_pane

0x8c1e,	// (0x00027f47) tabs_3_active_pane_ParamLimits

0x8c1e,	// (0x00027f47) tabs_3_active_pane

0x8c2e,	// (0x00027f57) tabs_3_passive_pane_ParamLimits

0x8c2e,	// (0x00027f57) tabs_3_passive_pane

0x8c3f,	// (0x00027f68) tabs_3_passive_pane_cp_ParamLimits

0x8c3f,	// (0x00027f68) tabs_3_passive_pane_cp

0x8bda,	// (0x00027f03) tabs_4_active_pane_ParamLimits

0x8bda,	// (0x00027f03) tabs_4_active_pane

0x8beb,	// (0x00027f14) tabs_4_passive_pane_ParamLimits

0x8beb,	// (0x00027f14) tabs_4_passive_pane

0x8bfc,	// (0x00027f25) tabs_4_passive_pane_cp_ParamLimits

0x8bfc,	// (0x00027f25) tabs_4_passive_pane_cp

0x8c0d,	// (0x00027f36) tabs_4_passive_pane_cp2_ParamLimits

0x8c0d,	// (0x00027f36) tabs_4_passive_pane_cp2

0x8bb6,	// (0x00027edf) tabs_2_long_active_pane_ParamLimits

0x8bb6,	// (0x00027edf) tabs_2_long_active_pane

0x8bc8,	// (0x00027ef1) tabs_2_long_passive_pane_ParamLimits

0x8bc8,	// (0x00027ef1) tabs_2_long_passive_pane

0x8b71,	// (0x00027e9a) tabs_3_long_active_pane_ParamLimits

0x8b71,	// (0x00027e9a) tabs_3_long_active_pane

0x8b8a,	// (0x00027eb3) tabs_3_long_passive_pane_ParamLimits

0x8b8a,	// (0x00027eb3) tabs_3_long_passive_pane

0x8b9d,	// (0x00027ec6) tabs_3_long_passive_pane_cp_ParamLimits

0x8b9d,	// (0x00027ec6) tabs_3_long_passive_pane_cp

0x8b17,	// (0x00027e40) volume_small_pane_g1

0x8b20,	// (0x00027e49) volume_small_pane_g2

0x8b29,	// (0x00027e52) volume_small_pane_g3

0x8b32,	// (0x00027e5b) volume_small_pane_g4

0x8b3b,	// (0x00027e64) volume_small_pane_g5

0x8b44,	// (0x00027e6d) volume_small_pane_g6

0x8b4d,	// (0x00027e76) volume_small_pane_g7

0x8b56,	// (0x00027e7f) volume_small_pane_g8

0x8b5f,	// (0x00027e88) volume_small_pane_g9

0x8b68,	// (0x00027e91) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0002ebd0) volume_small_pane_g

0x1819,	// (0x00020b42) bg_active_tab_pane_cp2_ParamLimits

0x1819,	// (0x00020b42) bg_active_tab_pane_cp2

0x69a5,	// (0x00025cce) tabs_3_active_pane_g1

0x69ad,	// (0x00025cd6) tabs_3_active_pane_t1

0x1819,	// (0x00020b42) bg_passive_tab_pane_cp2_ParamLimits

0x1819,	// (0x00020b42) bg_passive_tab_pane_cp2

0x69a5,	// (0x00025cce) tabs_3_passive_pane_g1

0x69ad,	// (0x00025cd6) tabs_3_passive_pane_t1

0x1819,	// (0x00020b42) bg_active_tab_pane_cp3_ParamLimits

0x1819,	// (0x00020b42) bg_active_tab_pane_cp3

0x69bf,	// (0x00025ce8) tabs_4_active_pane_g1

0x69c7,	// (0x00025cf0) tabs_4_active_pane_t1

0x1819,	// (0x00020b42) bg_passive_tab_pane_cp3_ParamLimits

0x1819,	// (0x00020b42) bg_passive_tab_pane_cp3

0x69bf,	// (0x00025ce8) tabs_4_1_passive_pane_g1

0x69c7,	// (0x00025cf0) tabs_4_1_passive_pane_t1

0x7dce,	// (0x000270f7) list_highlight_pane_cp2

0xb054,	// (0x0002a37d) list_set_pane_ParamLimits

0xb054,	// (0x0002a37d) list_set_pane

0xb0f6,	// (0x0002a41f) main_pane_set_t1_ParamLimits

0xb0f6,	// (0x0002a41f) main_pane_set_t1

0xb116,	// (0x0002a43f) main_pane_set_t2_ParamLimits

0xb116,	// (0x0002a43f) main_pane_set_t2

0xb12a,	// (0x0002a453) main_pane_set_t3_ParamLimits

0xb12a,	// (0x0002a453) main_pane_set_t3

0xb13c,	// (0x0002a465) main_pane_set_t4_ParamLimits

0xb13c,	// (0x0002a465) main_pane_set_t4

0x0003,

0xf977,	// (0x0002eca0) main_pane_set_t_ParamLimits

0xf977,	// (0x0002eca0) main_pane_set_t

0xb14e,	// (0x0002a477) setting_code_pane

0xb15a,	// (0x0002a483) setting_slider_graphic_pane

0xb15a,	// (0x0002a483) setting_slider_pane

0xb15a,	// (0x0002a483) setting_text_pane

0xb15a,	// (0x0002a483) setting_volume_pane

0x69d9,	// (0x00025d02) volume_set_pane

0x1819,	// (0x00020b42) bg_set_opt_pane_cp

0x69e1,	// (0x00025d0a) setting_slider_pane_t1

0x69fa,	// (0x00025d23) setting_slider_pane_t2

0x6a14,	// (0x00025d3d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e887) setting_slider_pane_t

0x6a2c,	// (0x00025d55) slider_set_pane

0x17bd,	// (0x00020ae6) bg_set_opt_pane_cp2

0x1827,	// (0x00020b50) setting_slider_graphic_pane_g1

0x6a42,	// (0x00025d6b) setting_slider_graphic_pane_t1

0x6a52,	// (0x00025d7b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e88e) setting_slider_graphic_pane_t

0x6a62,	// (0x00025d8b) slider_set_pane_cp

0x17bd,	// (0x00020ae6) input_focus_pane_cp1

0xb013,	// (0x0002a33c) list_set_text_pane

0x17b3,	// (0x00020adc) setting_text_pane_g1

0x17bd,	// (0x00020ae6) input_focus_pane_cp2

0x17b3,	// (0x00020adc) setting_code_pane_g1

0x1830,	// (0x00020b59) setting_code_pane_t1

0x53cb,	// (0x000246f4) set_text_pane_t1_ParamLimits

0x53cb,	// (0x000246f4) set_text_pane_t1

0x1d09,	// (0x00021032) set_opt_bg_pane_g1

0x1d11,	// (0x0002103a) set_opt_bg_pane_g2

0xafed,	// (0x0002a316) set_opt_bg_pane_g3

0x1d21,	// (0x0002104a) set_opt_bg_pane_g4

0x1d29,	// (0x00021052) set_opt_bg_pane_g5

0x1d31,	// (0x0002105a) set_opt_bg_pane_g6

0xaff7,	// (0x0002a320) set_opt_bg_pane_g7

0xafff,	// (0x0002a328) set_opt_bg_pane_g8

0xb009,	// (0x0002a332) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0002ec8d) set_opt_bg_pane_g

0xafe0,	// (0x0002a309) slider_set_pane_g1

0x8ce5,	// (0x0002800e) slider_set_pane_g2

0x0006,

0xf955,	// (0x0002ec7e) slider_set_pane_g

0x8c81,	// (0x00027faa) volume_set_pane_g1

0x8c89,	// (0x00027fb2) volume_set_pane_g2

0x8c91,	// (0x00027fba) volume_set_pane_g3

0x8c99,	// (0x00027fc2) volume_set_pane_g4

0x8ca1,	// (0x00027fca) volume_set_pane_g5

0x8ca9,	// (0x00027fd2) volume_set_pane_g6

0x8cb1,	// (0x00027fda) volume_set_pane_g7

0x8cb9,	// (0x00027fe2) volume_set_pane_g8

0x8cc1,	// (0x00027fea) volume_set_pane_g9

0x8cc9,	// (0x00027ff2) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0002ec56) volume_set_pane_g

0x6a6a,	// (0x00025d93) indicator_pane_ParamLimits

0x6a6a,	// (0x00025d93) indicator_pane

0x6a76,	// (0x00025d9f) main_idle_pane_g2_ParamLimits

0x6a76,	// (0x00025d9f) main_idle_pane_g2

0x6a9e,	// (0x00025dc7) main_pane_idle_g1_ParamLimits

0x6a9e,	// (0x00025dc7) main_pane_idle_g1

0x1858,	// (0x00020b81) popup_clock_digital_analogue_window_ParamLimits

0x1858,	// (0x00020b81) popup_clock_digital_analogue_window

0x6aab,	// (0x00025dd4) soft_indicator_pane_ParamLimits

0x6aab,	// (0x00025dd4) soft_indicator_pane

0x6ab7,	// (0x00025de0) wallpaper_pane_ParamLimits

0x6ab7,	// (0x00025de0) wallpaper_pane

0x17b3,	// (0x00020adc) wallpaper_pane_g1

0x6ac3,	// (0x00025dec) indicator_pane_g1_ParamLimits

0x6ac3,	// (0x00025dec) indicator_pane_g1

0xb417,	// (0x0002a740) navi_navi_icon_text_pane_srt_g1

0x1886,	// (0x00020baf) soft_indicator_pane_t1

0x18a0,	// (0x00020bc9) aid_ps_area_pane

0x6acf,	// (0x00025df8) aid_ps_clock_pane

0x18b1,	// (0x00020bda) aid_ps_indicator_pane

0x18bd,	// (0x00020be6) indicator_ps_pane_ParamLimits

0x18bd,	// (0x00020be6) indicator_ps_pane

0x18cc,	// (0x00020bf5) power_save_pane_g1_ParamLimits

0x18cc,	// (0x00020bf5) power_save_pane_g1

0x18d8,	// (0x00020c01) power_save_pane_g2_ParamLimits

0x18d8,	// (0x00020c01) power_save_pane_g2

0x6532,	// (0x0002585b) aid_navinavi_width_pane

0x18a0,	// (0x00020bc9) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e893) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e893) power_save_pane_g

0x18e6,	// (0x00020c0f) power_save_pane_t1_ParamLimits

0x18e6,	// (0x00020c0f) power_save_pane_t1

0x6acf,	// (0x00025df8) aid_ps_clock_pane_ParamLimits

0x18b1,	// (0x00020bda) aid_ps_indicator_pane_ParamLimits

0x18f8,	// (0x00020c21) power_save_pane_t4_ParamLimits

0x18f8,	// (0x00020c21) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e898) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e898) power_save_pane_t

0x1922,	// (0x00020c4b) power_save_t3_ParamLimits

0x1922,	// (0x00020c4b) power_save_t3

0x190d,	// (0x00020c36) power_save_t2_ParamLimits

0x190d,	// (0x00020c36) power_save_t2

0x1937,	// (0x00020c60) indicator_ps_pane_g1

0x6add,	// (0x00025e06) ai_gene_pane_ParamLimits

0x6add,	// (0x00025e06) ai_gene_pane

0x6ae9,	// (0x00025e12) ai_links_pane_ParamLimits

0x6ae9,	// (0x00025e12) ai_links_pane

0x6af5,	// (0x00025e1e) indicator_pane_cp1_ParamLimits

0x6af5,	// (0x00025e1e) indicator_pane_cp1

0x6b01,	// (0x00025e2a) main_pane_idle_g1_cp_ParamLimits

0x6b01,	// (0x00025e2a) main_pane_idle_g1_cp

0x6b0d,	// (0x00025e36) popup_ai_links_title_window

0x6b16,	// (0x00025e3f) soft_indicator_pane_cp1_ParamLimits

0x6b16,	// (0x00025e3f) soft_indicator_pane_cp1

0xadda,	// (0x0002a103) ai_links_pane_g1

0xade3,	// (0x0002a10c) grid_ai_links_pane

0xadbd,	// (0x0002a0e6) ai_gene_pane_1

0xadc8,	// (0x0002a0f1) ai_gene_pane_2

0xadd1,	// (0x0002a0fa) list_highlight_pane_cp4

0xada1,	// (0x0002a0ca) cell_ai_link_pane_ParamLimits

0xada1,	// (0x0002a0ca) cell_ai_link_pane

0xad99,	// (0x0002a0c2) cell_ai_link_pane_g1

0x1a64,	// (0x00020d8d) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0002ec31) cell_ai_link_pane_g

0x17bd,	// (0x00020ae6) grid_highlight_cp2

0x17bd,	// (0x00020ae6) bg_popup_sub_pane_cp1

0x194e,	// (0x00020c77) popup_ai_links_title_window_t1

0xace9,	// (0x0002a012) ai_gene_pane_1_g1_ParamLimits

0xace9,	// (0x0002a012) ai_gene_pane_1_g1

0xacf5,	// (0x0002a01e) ai_gene_pane_1_g2_ParamLimits

0xacf5,	// (0x0002a01e) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0002ec27) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0002ec27) ai_gene_pane_1_g

0xad02,	// (0x0002a02b) ai_gene_pane_1_t1_ParamLimits

0xad02,	// (0x0002a02b) ai_gene_pane_1_t1

0xad36,	// (0x0002a05f) grid_ai_soft_ind_pane

0xacd4,	// (0x00029ffd) ai_gene_pane_2_t1_ParamLimits

0xacd4,	// (0x00029ffd) ai_gene_pane_2_t1

0x6b22,	// (0x00025e4b) main_pane_empty_t1_ParamLimits

0x6b22,	// (0x00025e4b) main_pane_empty_t1

0x6b3a,	// (0x00025e63) main_pane_empty_t2_ParamLimits

0x6b3a,	// (0x00025e63) main_pane_empty_t2

0x6b4f,	// (0x00025e78) main_pane_empty_t3_ParamLimits

0x6b4f,	// (0x00025e78) main_pane_empty_t3

0x6b61,	// (0x00025e8a) main_pane_empty_t4_ParamLimits

0x6b61,	// (0x00025e8a) main_pane_empty_t4

0x6b73,	// (0x00025e9c) main_pane_empty_t5_ParamLimits

0x6b73,	// (0x00025e9c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e89d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e89d) main_pane_empty_t

0x1d5a,	// (0x00021083) bg_popup_window_pane_ParamLimits

0x1d5a,	// (0x00021083) bg_popup_window_pane

0xaa44,	// (0x00029d6d) find_popup_pane_cp2_ParamLimits

0xaa44,	// (0x00029d6d) find_popup_pane_cp2

0xaa50,	// (0x00029d79) heading_pane_ParamLimits

0xaa50,	// (0x00029d79) heading_pane

0x17bd,	// (0x00020ae6) bg_popup_sub_pane

0xa9be,	// (0x00029ce7) bg_popup_window_pane_g1_ParamLimits

0xa9be,	// (0x00029ce7) bg_popup_window_pane_g1

0xa9ca,	// (0x00029cf3) bg_popup_window_pane_g2_ParamLimits

0xa9ca,	// (0x00029cf3) bg_popup_window_pane_g2

0xa9d6,	// (0x00029cff) bg_popup_window_pane_g3_ParamLimits

0xa9d6,	// (0x00029cff) bg_popup_window_pane_g3

0xa9e2,	// (0x00029d0b) bg_popup_window_pane_g4_ParamLimits

0xa9e2,	// (0x00029d0b) bg_popup_window_pane_g4

0xa9ee,	// (0x00029d17) bg_popup_window_pane_g5_ParamLimits

0xa9ee,	// (0x00029d17) bg_popup_window_pane_g5

0xa9fa,	// (0x00029d23) bg_popup_window_pane_g6_ParamLimits

0xa9fa,	// (0x00029d23) bg_popup_window_pane_g6

0xaa06,	// (0x00029d2f) bg_popup_window_pane_g7_ParamLimits

0xaa06,	// (0x00029d2f) bg_popup_window_pane_g7

0xaa12,	// (0x00029d3b) bg_popup_window_pane_g8_ParamLimits

0xaa12,	// (0x00029d3b) bg_popup_window_pane_g8

0xaa1e,	// (0x00029d47) bg_popup_window_pane_g9_ParamLimits

0xaa1e,	// (0x00029d47) bg_popup_window_pane_g9

0xaa2a,	// (0x00029d53) bg_popup_window_pane_g10_ParamLimits

0xaa2a,	// (0x00029d53) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0002ebef) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0002ebef) bg_popup_window_pane_g

0xa953,	// (0x00029c7c) bg_popup_heading_pane_ParamLimits

0xa953,	// (0x00029c7c) bg_popup_heading_pane

0x8d6d,	// (0x00028096) tabs_4_passive_pane_cp_srt_ParamLimits

0x8d6d,	// (0x00028096) tabs_4_passive_pane_cp_srt

0x8d7f,	// (0x000280a8) tabs_4_passive_pane_srt_ParamLimits

0xa967,	// (0x00029c90) heading_pane_g2

0x8d7f,	// (0x000280a8) tabs_4_passive_pane_srt

0x7dce,	// (0x000270f7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7dce,	// (0x000270f7) bg_passive_tab_pane_cp3_srt

0xa96f,	// (0x00029c98) heading_pane_t1_ParamLimits

0xa96f,	// (0x00029c98) heading_pane_t1

0xa986,	// (0x00029caf) heading_pane_t2_ParamLimits

0xa986,	// (0x00029caf) heading_pane_t2

0x0001,

0xf8c1,	// (0x0002ebea) heading_pane_t_ParamLimits

0xf8c1,	// (0x0002ebea) heading_pane_t

0xa490,	// (0x000297b9) bg_popup_heading_pane_g1

0xa53f,	// (0x00029868) bg_popup_heading_pane_g2

0xa549,	// (0x00029872) bg_popup_heading_pane_g3

0xa553,	// (0x0002987c) bg_popup_heading_pane_g4

0xa55d,	// (0x00029886) bg_popup_heading_pane_g5

0xa567,	// (0x00029890) bg_popup_heading_pane_g6

0xa56f,	// (0x00029898) bg_popup_heading_pane_g7

0xa577,	// (0x000298a0) bg_popup_heading_pane_g8

0xa581,	// (0x000298aa) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0002eba6) bg_popup_heading_pane_g

0x88c8,	// (0x00027bf1) bg_popup_sub_pane_g1

0x88d0,	// (0x00027bf9) bg_popup_sub_pane_g2

0x88d8,	// (0x00027c01) bg_popup_sub_pane_g3

0x88e0,	// (0x00027c09) bg_popup_sub_pane_g4

0x88e8,	// (0x00027c11) bg_popup_sub_pane_g5

0x88f0,	// (0x00027c19) bg_popup_sub_pane_g6

0x88f8,	// (0x00027c21) bg_popup_sub_pane_g7

0x8900,	// (0x00027c29) bg_popup_sub_pane_g8

0x8908,	// (0x00027c31) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0002eb80) bg_popup_sub_pane_g

0x180b,	// (0x00020b34) bg_popup_window_pane_cp5_ParamLimits

0x180b,	// (0x00020b34) bg_popup_window_pane_cp5

0x196b,	// (0x00020c94) popup_note_window_g1_ParamLimits

0x196b,	// (0x00020c94) popup_note_window_g1

0x1977,	// (0x00020ca0) popup_note_window_t1_ParamLimits

0x1977,	// (0x00020ca0) popup_note_window_t1

0x198d,	// (0x00020cb6) popup_note_window_t2_ParamLimits

0x198d,	// (0x00020cb6) popup_note_window_t2

0x19a3,	// (0x00020ccc) popup_note_window_t3_ParamLimits

0x19a3,	// (0x00020ccc) popup_note_window_t3

0x19b9,	// (0x00020ce2) popup_note_window_t4_ParamLimits

0x19b9,	// (0x00020ce2) popup_note_window_t4

0x19e1,	// (0x00020d0a) popup_note_window_t5_ParamLimits

0x19e1,	// (0x00020d0a) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e8a8) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e8a8) popup_note_window_t

0x1a05,	// (0x00020d2e) bg_popup_window_pane_cp6_ParamLimits

0x1a05,	// (0x00020d2e) bg_popup_window_pane_cp6

0xa40c,	// (0x00029735) popup_note_image_window_g1_ParamLimits

0xa40c,	// (0x00029735) popup_note_image_window_g1

0xa418,	// (0x00029741) popup_note_image_window_g2_ParamLimits

0xa418,	// (0x00029741) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0002eb74) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0002eb74) popup_note_image_window_g

0xa431,	// (0x0002975a) popup_note_image_window_t1_ParamLimits

0xa431,	// (0x0002975a) popup_note_image_window_t1

0xa44a,	// (0x00029773) popup_note_image_window_t2_ParamLimits

0xa44a,	// (0x00029773) popup_note_image_window_t2

0xa463,	// (0x0002978c) popup_note_image_window_t3_ParamLimits

0xa463,	// (0x0002978c) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0002eb79) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0002eb79) popup_note_image_window_t

0xa2d5,	// (0x000295fe) bg_popup_window_pane_cp7_ParamLimits

0xa2d5,	// (0x000295fe) bg_popup_window_pane_cp7

0xa305,	// (0x0002962e) popup_note_wait_window_g1_ParamLimits

0xa305,	// (0x0002962e) popup_note_wait_window_g1

0xa311,	// (0x0002963a) popup_note_wait_window_g2_ParamLimits

0xa311,	// (0x0002963a) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0002eb62) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0002eb62) popup_note_wait_window_g

0xa329,	// (0x00029652) popup_note_wait_window_t1_ParamLimits

0xa329,	// (0x00029652) popup_note_wait_window_t1

0xa350,	// (0x00029679) popup_note_wait_window_t2_ParamLimits

0xa350,	// (0x00029679) popup_note_wait_window_t2

0xa36d,	// (0x00029696) popup_note_wait_window_t3_ParamLimits

0xa36d,	// (0x00029696) popup_note_wait_window_t3

0xa380,	// (0x000296a9) popup_note_wait_window_t4_ParamLimits

0xa380,	// (0x000296a9) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0002eb69) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0002eb69) popup_note_wait_window_t

0xa3a5,	// (0x000296ce) wait_bar_pane_ParamLimits

0xa3a5,	// (0x000296ce) wait_bar_pane

0x17bd,	// (0x00020ae6) wait_anim_pane

0x17bd,	// (0x00020ae6) wait_border_pane

0x17b3,	// (0x00020adc) wait_anim_pane_g1

0x17b3,	// (0x00020adc) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0002ea22) wait_anim_pane_g

0xa281,	// (0x000295aa) wait_border_pane_g1

0xa28c,	// (0x000295b5) wait_border_pane_g2

0xa295,	// (0x000295be) wait_border_pane_g3

0x0002,

0xf832,	// (0x0002eb5b) wait_border_pane_g

0xa0ec,	// (0x00029415) bg_popup_window_pane_cp16_ParamLimits

0xa0ec,	// (0x00029415) bg_popup_window_pane_cp16

0xa1ec,	// (0x00029515) indicator_popup_pane_cp4_ParamLimits

0xa1ec,	// (0x00029515) indicator_popup_pane_cp4

0xa200,	// (0x00029529) popup_query_data_window_t1_ParamLimits

0xa200,	// (0x00029529) popup_query_data_window_t1

0xa212,	// (0x0002953b) popup_query_data_window_t2_ParamLimits

0xa212,	// (0x0002953b) popup_query_data_window_t2

0xa22b,	// (0x00029554) popup_query_data_window_t3_ParamLimits

0xa22b,	// (0x00029554) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0002eb54) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0002eb54) popup_query_data_window_t

0xa245,	// (0x0002956e) query_popup_data_pane_ParamLimits

0xa245,	// (0x0002956e) query_popup_data_pane

0xa259,	// (0x00029582) query_popup_data_pane_cp1_ParamLimits

0xa259,	// (0x00029582) query_popup_data_pane_cp1

0xa0ec,	// (0x00029415) bg_popup_window_pane_cp10_ParamLimits

0xa0ec,	// (0x00029415) bg_popup_window_pane_cp10

0xa11e,	// (0x00029447) indicator_popup_pane_ParamLimits

0xa11e,	// (0x00029447) indicator_popup_pane

0xa140,	// (0x00029469) popup_query_code_window_t1_ParamLimits

0xa140,	// (0x00029469) popup_query_code_window_t1

0xa15a,	// (0x00029483) popup_query_code_window_t2_ParamLimits

0xa15a,	// (0x00029483) popup_query_code_window_t2

0xa1a3,	// (0x000294cc) popup_query_code_window_t3_ParamLimits

0xa1a3,	// (0x000294cc) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0002eb4d) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0002eb4d) popup_query_code_window_t

0xa1d2,	// (0x000294fb) query_popup_pane_ParamLimits

0xa1d2,	// (0x000294fb) query_popup_pane

0x1a05,	// (0x00020d2e) bg_popup_window_pane_cp15_ParamLimits

0x1a05,	// (0x00020d2e) bg_popup_window_pane_cp15

0x6bad,	// (0x00025ed6) indicator_popup_pane_cp1_ParamLimits

0x6bad,	// (0x00025ed6) indicator_popup_pane_cp1

0x6bc0,	// (0x00025ee9) indicator_popup_pane_cp2_ParamLimits

0x6bc0,	// (0x00025ee9) indicator_popup_pane_cp2

0x6bd3,	// (0x00025efc) popup_query_data_code_window_g1_ParamLimits

0x6bd3,	// (0x00025efc) popup_query_data_code_window_g1

0x1a23,	// (0x00020d4c) popup_query_data_code_window_t1_ParamLimits

0x1a23,	// (0x00020d4c) popup_query_data_code_window_t1

0x1a35,	// (0x00020d5e) popup_query_data_code_window_t2_ParamLimits

0x1a35,	// (0x00020d5e) popup_query_data_code_window_t2

0x6be6,	// (0x00025f0f) popup_query_data_code_window_t3_ParamLimits

0x6be6,	// (0x00025f0f) popup_query_data_code_window_t3

0x6bfc,	// (0x00025f25) popup_query_data_code_window_t4_ParamLimits

0x6bfc,	// (0x00025f25) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e8b3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e8b3) popup_query_data_code_window_t

0x76c7,	// (0x000269f0) list_single_midp_graphic_pane_g3

0x6c14,	// (0x00025f3d) query_popup_data_pane_cp2_ParamLimits

0x6c27,	// (0x00025f50) query_popup_pane_cp2_ParamLimits

0x6c27,	// (0x00025f50) query_popup_pane_cp2

0x17bd,	// (0x00020ae6) bg_popup_window_pane_cp11

0xa0d8,	// (0x00029401) heading_pane_cp5

0x1a91,	// (0x00020dba) listscroll_popup_info_pane

0x17bd,	// (0x00020ae6) input_focus_pane_cp3

0x1a47,	// (0x00020d70) query_popup_pane_t1

0x1a55,	// (0x00020d7e) list_popup_info_pane_ParamLimits

0x1a55,	// (0x00020d7e) list_popup_info_pane

0x1a64,	// (0x00020d8d) listscroll_popup_info_pane_g1

0x1a6c,	// (0x00020d95) scroll_pane_cp7

0x6c3a,	// (0x00025f63) popup_info_list_pane_t1_ParamLimits

0x6c3a,	// (0x00025f63) popup_info_list_pane_t1

0x6c54,	// (0x00025f7d) popup_info_list_pane_t2_ParamLimits

0x6c54,	// (0x00025f7d) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e8bc) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e8bc) popup_info_list_pane_t

0x17bd,	// (0x00020ae6) bg_popup_window_pane_cp12

0xb431,	// (0x0002a75a) find_popup_pane

0x1819,	// (0x00020b42) bg_popup_window_pane_cp3

0x1a76,	// (0x00020d9f) heading_pane_cp3

0x1a82,	// (0x00020dab) listscroll_popup_graphic_pane

0x17bd,	// (0x00020ae6) bg_popup_window_pane_cp4

0x6cbe,	// (0x00025fe7) heading_pane_cp4

0x1a91,	// (0x00020dba) listscroll_popup_colour_pane

0x6cc8,	// (0x00025ff1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6cc8,	// (0x00025ff1) cell_large_graphic_colour_none_popup_pane

0x6cdc,	// (0x00026005) grid_large_graphic_colour_popup_pane_ParamLimits

0x6cdc,	// (0x00026005) grid_large_graphic_colour_popup_pane

0x6d04,	// (0x0002602d) listscroll_popup_colour_pane_g1_ParamLimits

0x6d04,	// (0x0002602d) listscroll_popup_colour_pane_g1

0x6d1b,	// (0x00026044) listscroll_popup_colour_pane_g2_ParamLimits

0x6d1b,	// (0x00026044) listscroll_popup_colour_pane_g2

0x6d32,	// (0x0002605b) listscroll_popup_colour_pane_g3_ParamLimits

0x6d32,	// (0x0002605b) listscroll_popup_colour_pane_g3

0x6d42,	// (0x0002606b) listscroll_popup_colour_pane_g4_ParamLimits

0x6d42,	// (0x0002606b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e8c1) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e8c1) listscroll_popup_colour_pane_g

0x1a99,	// (0x00020dc2) scroll_pane_cp6_ParamLimits

0x1a99,	// (0x00020dc2) scroll_pane_cp6

0x6d52,	// (0x0002607b) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d52,	// (0x0002607b) cell_large_graphic_colour_popup_pane

0x6d71,	// (0x0002609a) cell_large_graphic_colour_none_popup_pane_t1

0x17bd,	// (0x00020ae6) grid_highlight_pane_cp5

0x1aab,	// (0x00020dd4) cell_large_graphic_colour_popup_pane_g1

0x1ab3,	// (0x00020ddc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e8ca) cell_large_graphic_colour_popup_pane_g

0x1abb,	// (0x00020de4) cell_large_graphic_colour_popup_pane_g2_copy1

0x1ac4,	// (0x00020ded) grid_highlight_pane_cp4

0x1acc,	// (0x00020df5) bg_popup_window_pane_cp8_ParamLimits

0x1acc,	// (0x00020df5) bg_popup_window_pane_cp8

0x6d80,	// (0x000260a9) popup_snote_single_text_window_g1_ParamLimits

0x6d80,	// (0x000260a9) popup_snote_single_text_window_g1

0x6d92,	// (0x000260bb) popup_snote_single_text_window_t1_ParamLimits

0x6d92,	// (0x000260bb) popup_snote_single_text_window_t1

0x6da5,	// (0x000260ce) popup_snote_single_text_window_t2_ParamLimits

0x6da5,	// (0x000260ce) popup_snote_single_text_window_t2

0x6db8,	// (0x000260e1) popup_snote_single_text_window_t3_ParamLimits

0x6db8,	// (0x000260e1) popup_snote_single_text_window_t3

0x6df1,	// (0x0002611a) popup_snote_single_text_window_t4_ParamLimits

0x6df1,	// (0x0002611a) popup_snote_single_text_window_t4

0x6e25,	// (0x0002614e) popup_snote_single_text_window_t5_ParamLimits

0x6e25,	// (0x0002614e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e8cf) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e8cf) popup_snote_single_text_window_t

0x1ae7,	// (0x00020e10) bg_popup_window_pane_cp9_ParamLimits

0x1ae7,	// (0x00020e10) bg_popup_window_pane_cp9

0x6d80,	// (0x000260a9) popup_snote_single_graphic_window_g1_ParamLimits

0x6d80,	// (0x000260a9) popup_snote_single_graphic_window_g1

0x1af5,	// (0x00020e1e) popup_snote_single_graphic_window_g2_ParamLimits

0x1af5,	// (0x00020e1e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e8da) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e8da) popup_snote_single_graphic_window_g

0x1b01,	// (0x00020e2a) popup_snote_single_graphic_window_t1_ParamLimits

0x1b01,	// (0x00020e2a) popup_snote_single_graphic_window_t1

0x1b14,	// (0x00020e3d) popup_snote_single_graphic_window_t2_ParamLimits

0x1b14,	// (0x00020e3d) popup_snote_single_graphic_window_t2

0x6e54,	// (0x0002617d) popup_snote_single_graphic_window_t3_ParamLimits

0x6e54,	// (0x0002617d) popup_snote_single_graphic_window_t3

0x6e8d,	// (0x000261b6) popup_snote_single_graphic_window_t4_ParamLimits

0x6e8d,	// (0x000261b6) popup_snote_single_graphic_window_t4

0x6ec1,	// (0x000261ea) popup_snote_single_graphic_window_t5_ParamLimits

0x6ec1,	// (0x000261ea) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e8df) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e8df) popup_snote_single_graphic_window_t

0xb373,	// (0x0002a69c) grid_graphic_popup_pane_ParamLimits

0xb373,	// (0x0002a69c) grid_graphic_popup_pane

0xb39d,	// (0x0002a6c6) listscroll_popup_graphic_pane_g1_ParamLimits

0xb39d,	// (0x0002a6c6) listscroll_popup_graphic_pane_g1

0xb3b1,	// (0x0002a6da) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3b1,	// (0x0002a6da) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0002ecca) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0002ecca) listscroll_popup_graphic_pane_g

0xb3c5,	// (0x0002a6ee) scroll_pane_cp5

0xb312,	// (0x0002a63b) cell_graphic_popup_pane_ParamLimits

0xb312,	// (0x0002a63b) cell_graphic_popup_pane

0xb2f3,	// (0x0002a61c) cell_graphic_popup_pane_g1

0xb2fb,	// (0x0002a624) cell_graphic_popup_pane_g2

0x1abb,	// (0x00020de4) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0002ecc3) cell_graphic_popup_pane_g

0xb304,	// (0x0002a62d) cell_graphic_popup_pane_t2

0x1ac4,	// (0x00020ded) grid_highlight_pane_cp3

0x1b39,	// (0x00020e62) list_gen_pane_ParamLimits

0x1b39,	// (0x00020e62) list_gen_pane

0x1b61,	// (0x00020e8a) scroll_pane

0xb24b,	// (0x0002a574) bg_list_pane_g1_ParamLimits

0xb24b,	// (0x0002a574) bg_list_pane_g1

0xb268,	// (0x0002a591) bg_list_pane_g2_ParamLimits

0xb268,	// (0x0002a591) bg_list_pane_g2

0xb27d,	// (0x0002a5a6) bg_list_pane_g3_ParamLimits

0xb27d,	// (0x0002a5a6) bg_list_pane_g3

0xb291,	// (0x0002a5ba) bg_list_pane_g4_ParamLimits

0xb291,	// (0x0002a5ba) bg_list_pane_g4

0xb2a5,	// (0x0002a5ce) bg_list_pane_g5_ParamLimits

0xb2a5,	// (0x0002a5ce) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0002ecb8) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0002ecb8) bg_list_pane_g

0xb1e0,	// (0x0002a509) list_double2_graphic_large_graphic_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double2_graphic_large_graphic_pane

0xb1e0,	// (0x0002a509) list_double2_graphic_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double2_graphic_pane

0xb1e0,	// (0x0002a509) list_double2_large_graphic_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double2_large_graphic_pane

0x5d0a,	// (0x00025033) list_double2_pane_ParamLimits

0x5d0a,	// (0x00025033) list_double2_pane

0xb1e0,	// (0x0002a509) list_double_graphic_heading_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double_graphic_heading_pane

0xb1e0,	// (0x0002a509) list_double_graphic_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double_graphic_pane

0xb1e0,	// (0x0002a509) list_double_heading_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double_heading_pane

0xb1e0,	// (0x0002a509) list_double_large_graphic_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double_large_graphic_pane

0xb1e0,	// (0x0002a509) list_double_number_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double_number_pane

0xb1e0,	// (0x0002a509) list_double_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double_pane

0xb1e0,	// (0x0002a509) list_double_time_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_double_time_pane

0xb1e0,	// (0x0002a509) list_setting_number_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_setting_number_pane

0xb1e0,	// (0x0002a509) list_setting_pane_ParamLimits

0xb1e0,	// (0x0002a509) list_setting_pane

0x5d4b,	// (0x00025074) list_single_2graphic_pane_ParamLimits

0x5d4b,	// (0x00025074) list_single_2graphic_pane

0x5d4b,	// (0x00025074) list_single_graphic_heading_pane_ParamLimits

0x5d4b,	// (0x00025074) list_single_graphic_heading_pane

0x5d4b,	// (0x00025074) list_single_graphic_pane_ParamLimits

0x5d4b,	// (0x00025074) list_single_graphic_pane

0x5d4b,	// (0x00025074) list_single_heading_pane_ParamLimits

0x5d4b,	// (0x00025074) list_single_heading_pane

0x5dad,	// (0x000250d6) list_single_large_graphic_pane_ParamLimits

0x5dad,	// (0x000250d6) list_single_large_graphic_pane

0x5d4b,	// (0x00025074) list_single_number_heading_pane_ParamLimits

0x5d4b,	// (0x00025074) list_single_number_heading_pane

0x5d4b,	// (0x00025074) list_single_number_pane_ParamLimits

0x5d4b,	// (0x00025074) list_single_number_pane

0x5d4b,	// (0x00025074) list_single_pane_ParamLimits

0x5d4b,	// (0x00025074) list_single_pane

0x17bd,	// (0x00020ae6) list_highlight_pane_cp1

0x53f2,	// (0x0002471b) list_single_pane_g1_ParamLimits

0x53f2,	// (0x0002471b) list_single_pane_g1

0x53fe,	// (0x00024727) list_single_pane_g2_ParamLimits

0x53fe,	// (0x00024727) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_single_pane_g

0x5ce1,	// (0x0002500a) list_single_pane_t1_ParamLimits

0x5ce1,	// (0x0002500a) list_single_pane_t1

0x53f2,	// (0x0002471b) list_single_number_pane_g1_ParamLimits

0x53f2,	// (0x0002471b) list_single_number_pane_g1

0x53fe,	// (0x00024727) list_single_number_pane_g2_ParamLimits

0x53fe,	// (0x00024727) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_single_number_pane_g

0x540a,	// (0x00024733) list_single_number_pane_t1_ParamLimits

0x540a,	// (0x00024733) list_single_number_pane_t1

0x5ca3,	// (0x00024fcc) list_single_number_pane_t2_ParamLimits

0x5ca3,	// (0x00024fcc) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0002ec79) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0002ec79) list_single_number_pane_t

0x53e6,	// (0x0002470f) list_single_graphic_pane_g1_ParamLimits

0x53e6,	// (0x0002470f) list_single_graphic_pane_g1

0x53f2,	// (0x0002471b) list_single_graphic_pane_g2_ParamLimits

0x53f2,	// (0x0002471b) list_single_graphic_pane_g2

0x53fe,	// (0x00024727) list_single_graphic_pane_g3_ParamLimits

0x53fe,	// (0x00024727) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e8ea) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e8ea) list_single_graphic_pane_g

0x540a,	// (0x00024733) list_single_graphic_pane_t1_ParamLimits

0x540a,	// (0x00024733) list_single_graphic_pane_t1

0x53f2,	// (0x0002471b) list_single_heading_pane_g1_ParamLimits

0x53f2,	// (0x0002471b) list_single_heading_pane_g1

0x53fe,	// (0x00024727) list_single_heading_pane_g2_ParamLimits

0x53fe,	// (0x00024727) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_single_heading_pane_g

0x5420,	// (0x00024749) list_single_heading_pane_t1_ParamLimits

0x5420,	// (0x00024749) list_single_heading_pane_t1

0x5436,	// (0x0002475f) list_single_heading_pane_t2_ParamLimits

0x5436,	// (0x0002475f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e8f6) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e8f6) list_single_heading_pane_t

0x53f2,	// (0x0002471b) list_single_number_heading_pane_g1_ParamLimits

0x53f2,	// (0x0002471b) list_single_number_heading_pane_g1

0x53fe,	// (0x00024727) list_single_number_heading_pane_g2_ParamLimits

0x53fe,	// (0x00024727) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_single_number_heading_pane_g

0x5420,	// (0x00024749) list_single_number_heading_pane_t1_ParamLimits

0x5420,	// (0x00024749) list_single_number_heading_pane_t1

0x5448,	// (0x00024771) list_single_number_heading_pane_t2_ParamLimits

0x5448,	// (0x00024771) list_single_number_heading_pane_t2

0x545a,	// (0x00024783) list_single_number_heading_pane_t3_ParamLimits

0x545a,	// (0x00024783) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e8fb) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e8fb) list_single_number_heading_pane_t

0x546c,	// (0x00024795) list_single_graphic_heading_pane_g1_ParamLimits

0x546c,	// (0x00024795) list_single_graphic_heading_pane_g1

0x5478,	// (0x000247a1) list_single_graphic_heading_pane_g4_ParamLimits

0x5478,	// (0x000247a1) list_single_graphic_heading_pane_g4

0x53fe,	// (0x00024727) list_single_graphic_heading_pane_g5_ParamLimits

0x53fe,	// (0x00024727) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e902) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e902) list_single_graphic_heading_pane_g

0x5420,	// (0x00024749) list_single_graphic_heading_pane_t1_ParamLimits

0x5420,	// (0x00024749) list_single_graphic_heading_pane_t1

0x5489,	// (0x000247b2) list_single_graphic_heading_pane_t2_ParamLimits

0x5489,	// (0x000247b2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e909) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e909) list_single_graphic_heading_pane_t

0x549b,	// (0x000247c4) list_single_large_graphic_pane_g1_ParamLimits

0x549b,	// (0x000247c4) list_single_large_graphic_pane_g1

0x54a7,	// (0x000247d0) list_single_large_graphic_pane_g2_ParamLimits

0x54a7,	// (0x000247d0) list_single_large_graphic_pane_g2

0x54b3,	// (0x000247dc) list_single_large_graphic_pane_g3_ParamLimits

0x54b3,	// (0x000247dc) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e90e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e90e) list_single_large_graphic_pane_g

0xa28c,	// (0x000295b5) wait_border_pane_g2_copy1

0x54bf,	// (0x000247e8) list_single_large_graphic_pane_g4_cp2

0x54c7,	// (0x000247f0) list_single_large_graphic_pane_t1_ParamLimits

0x54c7,	// (0x000247f0) list_single_large_graphic_pane_t1

0x54dd,	// (0x00024806) list_double_pane_g1_ParamLimits

0x54dd,	// (0x00024806) list_double_pane_g1

0x54e9,	// (0x00024812) list_double_pane_g2_ParamLimits

0x54e9,	// (0x00024812) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e915) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e915) list_double_pane_g

0x54f5,	// (0x0002481e) list_double_pane_t1_ParamLimits

0x54f5,	// (0x0002481e) list_double_pane_t1

0x550b,	// (0x00024834) list_double_pane_t2_ParamLimits

0x550b,	// (0x00024834) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e91a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e91a) list_double_pane_t

0x551d,	// (0x00024846) list_double2_pane_g1_ParamLimits

0x551d,	// (0x00024846) list_double2_pane_g1

0x552e,	// (0x00024857) list_double2_pane_g2_ParamLimits

0x552e,	// (0x00024857) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e91f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e91f) list_double2_pane_g

0x553a,	// (0x00024863) list_double2_pane_t1_ParamLimits

0x553a,	// (0x00024863) list_double2_pane_t1

0x5550,	// (0x00024879) list_double2_pane_t2_ParamLimits

0x5550,	// (0x00024879) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e924) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e924) list_double2_pane_t

0x54dd,	// (0x00024806) list_double_number_pane_g1_ParamLimits

0x54dd,	// (0x00024806) list_double_number_pane_g1

0x54e9,	// (0x00024812) list_double_number_pane_g2_ParamLimits

0x54e9,	// (0x00024812) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e915) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e915) list_double_number_pane_g

0x5562,	// (0x0002488b) list_double_number_pane_t1_ParamLimits

0x5562,	// (0x0002488b) list_double_number_pane_t1

0x5574,	// (0x0002489d) list_double_number_pane_t2_ParamLimits

0x5574,	// (0x0002489d) list_double_number_pane_t2

0x558a,	// (0x000248b3) list_double_number_pane_t3_ParamLimits

0x558a,	// (0x000248b3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e929) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e929) list_double_number_pane_t

0x559c,	// (0x000248c5) list_double_graphic_pane_g1_ParamLimits

0x559c,	// (0x000248c5) list_double_graphic_pane_g1

0x55a8,	// (0x000248d1) list_double_graphic_pane_g2_ParamLimits

0x55a8,	// (0x000248d1) list_double_graphic_pane_g2

0x55b7,	// (0x000248e0) list_double_graphic_pane_g3_ParamLimits

0x55b7,	// (0x000248e0) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e930) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e930) list_double_graphic_pane_g

0x5574,	// (0x0002489d) list_double_graphic_pane_t1_ParamLimits

0x5574,	// (0x0002489d) list_double_graphic_pane_t1

0x558a,	// (0x000248b3) list_double_graphic_pane_t2_ParamLimits

0x558a,	// (0x000248b3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e939) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e939) list_double_graphic_pane_t

0x55cf,	// (0x000248f8) list_double2_graphic_pane_g1_ParamLimits

0x55cf,	// (0x000248f8) list_double2_graphic_pane_g1

0x54dd,	// (0x00024806) list_double2_graphic_pane_g2_ParamLimits

0x54dd,	// (0x00024806) list_double2_graphic_pane_g2

0x54e9,	// (0x00024812) list_double2_graphic_pane_g3_ParamLimits

0x54e9,	// (0x00024812) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e93e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e93e) list_double2_graphic_pane_g

0x55db,	// (0x00024904) list_double2_graphic_pane_t1_ParamLimits

0x55db,	// (0x00024904) list_double2_graphic_pane_t1

0x55f1,	// (0x0002491a) list_double2_graphic_pane_t2_ParamLimits

0x55f1,	// (0x0002491a) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e945) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e945) list_double2_graphic_pane_t

0x5603,	// (0x0002492c) list_double_large_graphic_pane_g1_ParamLimits

0x5603,	// (0x0002492c) list_double_large_graphic_pane_g1

0x5622,	// (0x0002494b) list_double_large_graphic_pane_g2_ParamLimits

0x5622,	// (0x0002494b) list_double_large_graphic_pane_g2

0x54e9,	// (0x00024812) list_double_large_graphic_pane_g3_ParamLimits

0x54e9,	// (0x00024812) list_double_large_graphic_pane_g3

0x5633,	// (0x0002495c) list_double_large_graphic_pane_g4_ParamLimits

0x5633,	// (0x0002495c) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e94a) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e94a) list_double_large_graphic_pane_g

0x565b,	// (0x00024984) list_double_large_graphic_pane_t1_ParamLimits

0x565b,	// (0x00024984) list_double_large_graphic_pane_t1

0x5674,	// (0x0002499d) list_double_large_graphic_pane_t2_ParamLimits

0x5674,	// (0x0002499d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e955) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e955) list_double_large_graphic_pane_t

0x6efa,	// (0x00026223) list_double2_large_graphic_pane_g1_ParamLimits

0x6efa,	// (0x00026223) list_double2_large_graphic_pane_g1

0x5686,	// (0x000249af) list_double2_large_graphic_pane_g2_ParamLimits

0x5686,	// (0x000249af) list_double2_large_graphic_pane_g2

0x5697,	// (0x000249c0) list_double2_large_graphic_pane_g3_ParamLimits

0x5697,	// (0x000249c0) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e95a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e95a) list_double2_large_graphic_pane_g

0x55db,	// (0x00024904) list_double2_large_graphic_pane_t1_ParamLimits

0x55db,	// (0x00024904) list_double2_large_graphic_pane_t1

0x55f1,	// (0x0002491a) list_double2_large_graphic_pane_t2_ParamLimits

0x55f1,	// (0x0002491a) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e945) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e945) list_double2_large_graphic_pane_t

0x56a3,	// (0x000249cc) list_double_heading_pane_g1_ParamLimits

0x56a3,	// (0x000249cc) list_double_heading_pane_g1

0x56b4,	// (0x000249dd) list_double_heading_pane_g2_ParamLimits

0x56b4,	// (0x000249dd) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0002e961) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0002e961) list_double_heading_pane_g

0x56c0,	// (0x000249e9) list_double_heading_pane_t1_ParamLimits

0x56c0,	// (0x000249e9) list_double_heading_pane_t1

0x56d6,	// (0x000249ff) list_double_heading_pane_t2_ParamLimits

0x56d6,	// (0x000249ff) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e966) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e966) list_double_heading_pane_t

0x55cf,	// (0x000248f8) list_double_graphic_heading_pane_g1_ParamLimits

0x55cf,	// (0x000248f8) list_double_graphic_heading_pane_g1

0x56a3,	// (0x000249cc) list_double_graphic_heading_pane_g2_ParamLimits

0x56a3,	// (0x000249cc) list_double_graphic_heading_pane_g2

0x56b4,	// (0x000249dd) list_double_graphic_heading_pane_g3_ParamLimits

0x56b4,	// (0x000249dd) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0002e96b) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0002e96b) list_double_graphic_heading_pane_g

0x56c0,	// (0x000249e9) list_double_graphic_heading_pane_t1_ParamLimits

0x56c0,	// (0x000249e9) list_double_graphic_heading_pane_t1

0x56d6,	// (0x000249ff) list_double_graphic_heading_pane_t2_ParamLimits

0x56d6,	// (0x000249ff) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0002e966) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0002e966) list_double_graphic_heading_pane_t

0x5622,	// (0x0002494b) list_double_time_pane_g1_ParamLimits

0x5622,	// (0x0002494b) list_double_time_pane_g1

0x54e9,	// (0x00024812) list_double_time_pane_g2_ParamLimits

0x54e9,	// (0x00024812) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0002e972) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0002e972) list_double_time_pane_g

0x56e8,	// (0x00024a11) list_double_time_pane_t1_ParamLimits

0x56e8,	// (0x00024a11) list_double_time_pane_t1

0x56fe,	// (0x00024a27) list_double_time_pane_t2_ParamLimits

0x56fe,	// (0x00024a27) list_double_time_pane_t2

0x5710,	// (0x00024a39) list_double_time_pane_t3_ParamLimits

0x5710,	// (0x00024a39) list_double_time_pane_t3

0x5722,	// (0x00024a4b) list_double_time_pane_t4_ParamLimits

0x5722,	// (0x00024a4b) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0002e977) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0002e977) list_double_time_pane_t

0x5734,	// (0x00024a5d) list_setting_pane_g1_ParamLimits

0x5734,	// (0x00024a5d) list_setting_pane_g1

0x56b4,	// (0x000249dd) list_setting_pane_g2_ParamLimits

0x56b4,	// (0x000249dd) list_setting_pane_g2

0x0001,

0xf657,	// (0x0002e980) list_setting_pane_g_ParamLimits

0xf657,	// (0x0002e980) list_setting_pane_g

0x5740,	// (0x00024a69) list_setting_pane_t1_ParamLimits

0x5740,	// (0x00024a69) list_setting_pane_t1

0x5757,	// (0x00024a80) list_setting_pane_t2_ParamLimits

0x5757,	// (0x00024a80) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0002e985) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0002e985) list_setting_pane_t

0x5794,	// (0x00024abd) set_value_pane_cp_ParamLimits

0x5794,	// (0x00024abd) set_value_pane_cp

0x57a0,	// (0x00024ac9) list_setting_number_pane_g1_ParamLimits

0x57a0,	// (0x00024ac9) list_setting_number_pane_g1

0x57ac,	// (0x00024ad5) list_setting_number_pane_g2_ParamLimits

0x57ac,	// (0x00024ad5) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0002e98c) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0002e98c) list_setting_number_pane_g

0x57b8,	// (0x00024ae1) list_setting_number_pane_t1_ParamLimits

0x57b8,	// (0x00024ae1) list_setting_number_pane_t1

0x57cc,	// (0x00024af5) list_setting_number_pane_t2_ParamLimits

0x57cc,	// (0x00024af5) list_setting_number_pane_t2

0x57e3,	// (0x00024b0c) list_setting_number_pane_t3_ParamLimits

0x57e3,	// (0x00024b0c) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0002e991) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0002e991) list_setting_number_pane_t

0x5794,	// (0x00024abd) set_value_pane_ParamLimits

0x5794,	// (0x00024abd) set_value_pane

0x1bc2,	// (0x00020eeb) bg_set_opt_pane_ParamLimits

0x1bc2,	// (0x00020eeb) bg_set_opt_pane

0x5826,	// (0x00024b4f) set_value_pane_t1

0x1bf1,	// (0x00020f1a) slider_set_pane_cp3

0x6f06,	// (0x0002622f) volume_small_pane_cp

0x1bfa,	// (0x00020f23) list_form_gen_pane

0x1c03,	// (0x00020f2c) scroll_pane_cp8

0x583c,	// (0x00024b65) form_field_data_pane_ParamLimits

0x583c,	// (0x00024b65) form_field_data_pane

0x585c,	// (0x00024b85) form_field_data_wide_pane_ParamLimits

0x585c,	// (0x00024b85) form_field_data_wide_pane

0x587d,	// (0x00024ba6) form_field_popup_pane_ParamLimits

0x587d,	// (0x00024ba6) form_field_popup_pane

0x589b,	// (0x00024bc4) form_field_popup_wide_pane_ParamLimits

0x589b,	// (0x00024bc4) form_field_popup_wide_pane

0x58b8,	// (0x00024be1) form_field_slider_pane_ParamLimits

0x58b8,	// (0x00024be1) form_field_slider_pane

0x58cb,	// (0x00024bf4) form_field_slider_wide_pane_ParamLimits

0x58cb,	// (0x00024bf4) form_field_slider_wide_pane

0x1c37,	// (0x00020f60) data_form_pane

0x58e8,	// (0x00024c11) form_field_data_pane_t1

0x1c43,	// (0x00020f6c) input_focus_pane

0x5900,	// (0x00024c29) data_form_wide_pane

0x591d,	// (0x00024c46) form_field_data_wide_pane_t1

0x1ad9,	// (0x00020e02) input_focus_pane_cp6

0x593f,	// (0x00024c68) form_field_popup_pane_t1

0x1c43,	// (0x00020f6c) input_focus_pane_cp7

0x1cb0,	// (0x00020fd9) list_form_pane

0x595f,	// (0x00024c88) form_field_popup_wide_pane_t1

0x1c43,	// (0x00020f6c) input_focus_pane_cp8

0x1cd9,	// (0x00021002) list_form_wide_pane

0x597c,	// (0x00024ca5) form_field_slider_pane_t1_ParamLimits

0x597c,	// (0x00024ca5) form_field_slider_pane_t1

0x5992,	// (0x00024cbb) form_field_slider_pane_t2_ParamLimits

0x5992,	// (0x00024cbb) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0002e9a1) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0002e9a1) form_field_slider_pane_t

0x180b,	// (0x00020b34) input_focus_pane_cp9_ParamLimits

0x180b,	// (0x00020b34) input_focus_pane_cp9

0x59a7,	// (0x00024cd0) slider_cont_pane_ParamLimits

0x59a7,	// (0x00024cd0) slider_cont_pane

0x1ce5,	// (0x0002100e) form_field_slider_wide_pane_t1_ParamLimits

0x1ce5,	// (0x0002100e) form_field_slider_wide_pane_t1

0x59bb,	// (0x00024ce4) form_field_slider_wide_pane_t2_ParamLimits

0x59bb,	// (0x00024ce4) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0002e9a6) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0002e9a6) form_field_slider_wide_pane_t

0x180b,	// (0x00020b34) input_focus_pane_cp10_ParamLimits

0x180b,	// (0x00020b34) input_focus_pane_cp10

0x59cd,	// (0x00024cf6) slider_cont_pane_cp1_ParamLimits

0x59cd,	// (0x00024cf6) slider_cont_pane_cp1

0x59e1,	// (0x00024d0a) slider_form_pane_cp

0x1d09,	// (0x00021032) input_focus_pane_g1

0x1d11,	// (0x0002103a) input_focus_pane_g2

0x1d19,	// (0x00021042) input_focus_pane_g3

0x1d21,	// (0x0002104a) input_focus_pane_g4

0x1d29,	// (0x00021052) input_focus_pane_g5

0x1d31,	// (0x0002105a) input_focus_pane_g6

0x1d39,	// (0x00021062) input_focus_pane_g7

0x1d41,	// (0x0002106a) input_focus_pane_g8

0x1d49,	// (0x00021072) input_focus_pane_g9

0x17b3,	// (0x00020adc) input_focus_pane_g10

0x0009,

0xf682,	// (0x0002e9ab) input_focus_pane_g

0xa295,	// (0x000295be) wait_border_pane_g3_copy1

0x59e9,	// (0x00024d12) data_form_pane_t1

0x17b3,	// (0x00020adc) wait_anim_pane_g1_copy1

0x5cb5,	// (0x00024fde) data_form_wide_pane_t1

0x5a04,	// (0x00024d2d) list_form_graphic_pane_cp_ParamLimits

0x5a04,	// (0x00024d2d) list_form_graphic_pane_cp

0xb184,	// (0x0002a4ad) slider_form_pane_g1

0xb18d,	// (0x0002a4b6) slider_form_pane_g2

0x0006,

0xf980,	// (0x0002eca9) slider_form_pane_g

0x5a18,	// (0x00024d41) list_form_graphic_pane_ParamLimits

0x5a18,	// (0x00024d41) list_form_graphic_pane

0x5a2f,	// (0x00024d58) list_form_graphic_pane_g1

0x5a37,	// (0x00024d60) list_form_graphic_pane_t1_ParamLimits

0x5a37,	// (0x00024d60) list_form_graphic_pane_t1

0x1819,	// (0x00020b42) list_highlight_pane_cp5_ParamLimits

0x1819,	// (0x00020b42) list_highlight_pane_cp5

0x5a4c,	// (0x00024d75) find_pane_g1

0x1d51,	// (0x0002107a) input_find_pane

0x5a55,	// (0x00024d7e) input_find_pane_g1_ParamLimits

0x5a55,	// (0x00024d7e) input_find_pane_g1

0x5a61,	// (0x00024d8a) input_find_pane_t1_ParamLimits

0x5a61,	// (0x00024d8a) input_find_pane_t1

0x5a76,	// (0x00024d9f) input_find_pane_t2_ParamLimits

0x5a76,	// (0x00024d9f) input_find_pane_t2

0x0001,

0xf697,	// (0x0002e9c0) input_find_pane_t_ParamLimits

0xf697,	// (0x0002e9c0) input_find_pane_t

0x1d5a,	// (0x00021083) input_focus_pane_cp5_ParamLimits

0x1d5a,	// (0x00021083) input_focus_pane_cp5

0x1d68,	// (0x00021091) bg_popup_window_pane_cp2_ParamLimits

0x1d68,	// (0x00021091) bg_popup_window_pane_cp2

0x1d75,	// (0x0002109e) listscroll_menu_pane_ParamLimits

0x1d75,	// (0x0002109e) listscroll_menu_pane

0x6f1b,	// (0x00026244) popup_submenu_window_ParamLimits

0x6f1b,	// (0x00026244) popup_submenu_window

0x1d81,	// (0x000210aa) find_popup_pane_g1

0x6f43,	// (0x0002626c) input_popup_find_pane_cp

0x1d5a,	// (0x00021083) input_focus_pane_cp4_ParamLimits

0x1d5a,	// (0x00021083) input_focus_pane_cp4

0x1d89,	// (0x000210b2) input_popup_find_pane_t1_ParamLimits

0x1d89,	// (0x000210b2) input_popup_find_pane_t1

0x17bd,	// (0x00020ae6) bg_popup_sub_pane_cp

0x1db7,	// (0x000210e0) listscroll_popup_sub_pane

0x1dbf,	// (0x000210e8) list_submenu_pane_ParamLimits

0x1dbf,	// (0x000210e8) list_submenu_pane

0x1dd0,	// (0x000210f9) scroll_pane_cp4

0x6f5b,	// (0x00026284) list_single_popup_submenu_pane_ParamLimits

0x6f5b,	// (0x00026284) list_single_popup_submenu_pane

0x21ed,	// (0x00021516) list_single_popup_submenu_pane_g1

0x6f6f,	// (0x00026298) list_single_popup_submenu_pane_t1_ParamLimits

0x6f6f,	// (0x00026298) list_single_popup_submenu_pane_t1

0x1819,	// (0x00020b42) bg_active_tab_pane_cp1_ParamLimits

0x1819,	// (0x00020b42) bg_active_tab_pane_cp1

0x1dd8,	// (0x00021101) tabs_2_active_pane_g1

0x6f84,	// (0x000262ad) tabs_2_active_pane_t1

0x1819,	// (0x00020b42) bg_passive_tab_pane_cp1_ParamLimits

0x1819,	// (0x00020b42) bg_passive_tab_pane_cp1

0x1dd8,	// (0x00021101) tabs_2_passive_pane_g1

0x6f84,	// (0x000262ad) tabs_2_passive_pane_t1

0x21df,	// (0x00021508) bg_active_tab_pane_cp4

0x6f96,	// (0x000262bf) tabs_2_long_active_pane_t1

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp4

0x8935,	// (0x00027c5e) list_single_midp_graphic_pane_g4_ParamLimits

0x21df,	// (0x00021508) bg_active_tab_pane_cp5

0x6fb5,	// (0x000262de) tabs_3_long_active_pane_t1

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp5

0x8935,	// (0x00027c5e) list_single_midp_graphic_pane_g4

0x1819,	// (0x00020b42) bg_popup_window_pane_cp13_ParamLimits

0x1819,	// (0x00020b42) bg_popup_window_pane_cp13

0x1de0,	// (0x00021109) listscroll_popup_fast_pane_ParamLimits

0x1de0,	// (0x00021109) listscroll_popup_fast_pane

0x1dec,	// (0x00021115) grid_popup_fast_pane_ParamLimits

0x1dec,	// (0x00021115) grid_popup_fast_pane

0x1dfe,	// (0x00021127) scroll_pane_cp9_ParamLimits

0x1dfe,	// (0x00021127) scroll_pane_cp9

0xca8f,	// (0x0002bdb8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca8f,	// (0x0002bdb8) list_single_graphic_hl_pane_t1_cp2

0x1e11,	// (0x0002113a) input_focus_pane_cp20_ParamLimits

0x1e11,	// (0x0002113a) input_focus_pane_cp20

0x1e1f,	// (0x00021148) query_popup_data_pane_t1_ParamLimits

0x1e1f,	// (0x00021148) query_popup_data_pane_t1

0x1e32,	// (0x0002115b) query_popup_data_pane_t2_ParamLimits

0x1e32,	// (0x0002115b) query_popup_data_pane_t2

0x1e78,	// (0x000211a1) query_popup_data_pane_t3_ParamLimits

0x1e78,	// (0x000211a1) query_popup_data_pane_t3

0x1eb9,	// (0x000211e2) query_popup_data_pane_t4_ParamLimits

0x1eb9,	// (0x000211e2) query_popup_data_pane_t4

0x1ef5,	// (0x0002121e) query_popup_data_pane_t5_ParamLimits

0x1ef5,	// (0x0002121e) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0002e9c5) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0002e9c5) query_popup_data_pane_t

0x1d09,	// (0x00021032) bg_set_opt_pane_g1

0x1d11,	// (0x0002103a) bg_set_opt_pane_g2

0x1d19,	// (0x00021042) bg_set_opt_pane_g3

0x1d21,	// (0x0002104a) bg_set_opt_pane_g4

0x1d29,	// (0x00021052) bg_set_opt_pane_g5

0x1d31,	// (0x0002105a) bg_set_opt_pane_g6

0x1d39,	// (0x00021062) bg_set_opt_pane_g7

0x1d41,	// (0x0002106a) bg_set_opt_pane_g8

0x1d49,	// (0x00021072) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0002e9d0) bg_set_opt_pane_g

0x74a0,	// (0x000267c9) control_top_pane_stacon_ParamLimits

0x74a0,	// (0x000267c9) control_top_pane_stacon

0x74f3,	// (0x0002681c) signal_pane_stacon_ParamLimits

0x74f3,	// (0x0002681c) signal_pane_stacon

0x3ae9,	// (0x00022e12) stacon_top_pane_g1_ParamLimits

0x3ae9,	// (0x00022e12) stacon_top_pane_g1

0x7518,	// (0x00026841) title_pane_stacon_ParamLimits

0x7518,	// (0x00026841) title_pane_stacon

0x7542,	// (0x0002686b) uni_indicator_pane_stacon_ParamLimits

0x7542,	// (0x0002686b) uni_indicator_pane_stacon

0x7557,	// (0x00026880) battery_pane_stacon_ParamLimits

0x7557,	// (0x00026880) battery_pane_stacon

0x759b,	// (0x000268c4) control_bottom_pane_stacon_ParamLimits

0x759b,	// (0x000268c4) control_bottom_pane_stacon

0x75be,	// (0x000268e7) navi_pane_stacon_ParamLimits

0x75be,	// (0x000268e7) navi_pane_stacon

0x3bd4,	// (0x00022efd) stacon_bottom_pane_g1_ParamLimits

0x3bd4,	// (0x00022efd) stacon_bottom_pane_g1

0x6fe1,	// (0x0002630a) aid_levels_signal_lsc_ParamLimits

0x6fe1,	// (0x0002630a) aid_levels_signal_lsc

0x6ff7,	// (0x00026320) signal_pane_stacon_g1_ParamLimits

0x6ff7,	// (0x00026320) signal_pane_stacon_g1

0x700b,	// (0x00026334) signal_pane_stacon_g2_ParamLimits

0x700b,	// (0x00026334) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0002e9e3) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0002e9e3) signal_pane_stacon_g

0x7040,	// (0x00026369) title_pane_stacon_t1_ParamLimits

0x7040,	// (0x00026369) title_pane_stacon_t1

0x1f4d,	// (0x00021276) uni_indicator_pane_stacon_g1

0x1f57,	// (0x00021280) uni_indicator_pane_stacon_g2

0x1f39,	// (0x00021262) uni_indicator_pane_stacon_g3

0x1f43,	// (0x0002126c) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0002e9ef) uni_indicator_pane_stacon_g

0x7065,	// (0x0002638e) control_top_pane_stacon_g1

0x706d,	// (0x00026396) control_top_pane_stacon_t1_ParamLimits

0x706d,	// (0x00026396) control_top_pane_stacon_t1

0x70a4,	// (0x000263cd) aid_levels_battery_lsc_ParamLimits

0x70a4,	// (0x000263cd) aid_levels_battery_lsc

0x70bb,	// (0x000263e4) battery_pane_stacon_g1_ParamLimits

0x70bb,	// (0x000263e4) battery_pane_stacon_g1

0x70ce,	// (0x000263f7) battery_pane_stacon_g2_ParamLimits

0x70ce,	// (0x000263f7) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0002e9f8) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002e9f8) battery_pane_stacon_g

0x710c,	// (0x00026435) navi_icon_pane_stacon

0x7120,	// (0x00026449) navi_navi_pane_stacon

0x710c,	// (0x00026435) navi_text_pane_stacon

0x7065,	// (0x0002638e) control_bottom_pane_stacon_g1

0x7134,	// (0x0002645d) control_bottom_pane_stacon_t1_ParamLimits

0x7134,	// (0x0002645d) control_bottom_pane_stacon_t1

0x716b,	// (0x00026494) grid_app_pane_ParamLimits

0x716b,	// (0x00026494) grid_app_pane

0x718d,	// (0x000264b6) scroll_pane_cp15_ParamLimits

0x718d,	// (0x000264b6) scroll_pane_cp15

0x71a0,	// (0x000264c9) cell_app_pane_ParamLimits

0x71a0,	// (0x000264c9) cell_app_pane

0x71c8,	// (0x000264f1) cell_app_pane_g1_ParamLimits

0x71c8,	// (0x000264f1) cell_app_pane_g1

0x1f7b,	// (0x000212a4) cell_app_pane_g2_ParamLimits

0x1f7b,	// (0x000212a4) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0002e9fd) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0002e9fd) cell_app_pane_g

0x71ec,	// (0x00026515) cell_app_pane_t1_ParamLimits

0x71ec,	// (0x00026515) cell_app_pane_t1

0x1f87,	// (0x000212b0) grid_highlight_pane_ParamLimits

0x1f87,	// (0x000212b0) grid_highlight_pane

0x1d09,	// (0x00021032) cell_highlight_pane_g1

0x1d11,	// (0x0002103a) cell_highlight_pane_g2

0x1d19,	// (0x00021042) cell_highlight_pane_g3

0x1d21,	// (0x0002104a) cell_highlight_pane_g4

0x1d29,	// (0x00021052) cell_highlight_pane_g5

0x1d31,	// (0x0002105a) cell_highlight_pane_g6

0x1d39,	// (0x00021062) cell_highlight_pane_g7

0x1d41,	// (0x0002106a) cell_highlight_pane_g8

0x1d49,	// (0x00021072) cell_highlight_pane_g9

0x17b3,	// (0x00020adc) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0002e9ab) cell_highlight_pane_g

0x1f98,	// (0x000212c1) bg_scroll_pane

0x7216,	// (0x0002653f) scroll_handle_pane

0x1fdf,	// (0x00021308) scroll_bg_pane_g1

0x1ff4,	// (0x0002131d) scroll_bg_pane_g2

0x200c,	// (0x00021335) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0002ea02) scroll_bg_pane_g

0x723f,	// (0x00026568) scroll_handle_focus_pane_ParamLimits

0x723f,	// (0x00026568) scroll_handle_focus_pane

0x1fdf,	// (0x00021308) scroll_handle_pane_g1

0x2021,	// (0x0002134a) scroll_handle_pane_g2

0x200c,	// (0x00021335) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0002ea09) scroll_handle_pane_g

0x1d5a,	// (0x00021083) bg_popup_sub_pane_cp21_ParamLimits

0x1d5a,	// (0x00021083) bg_popup_sub_pane_cp21

0x724c,	// (0x00026575) popup_fep_japan_predictive_window_t1_ParamLimits

0x724c,	// (0x00026575) popup_fep_japan_predictive_window_t1

0x7266,	// (0x0002658f) popup_fep_japan_predictive_window_t2_ParamLimits

0x7266,	// (0x0002658f) popup_fep_japan_predictive_window_t2

0x7299,	// (0x000265c2) popup_fep_japan_predictive_window_t3_ParamLimits

0x7299,	// (0x000265c2) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0002ea10) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0002ea10) popup_fep_japan_predictive_window_t

0x17bd,	// (0x00020ae6) bg_popup_sub_pane_cp23

0x2646,	// (0x0002196f) listscroll_japin_cand_pane

0x2035,	// (0x0002135e) popup_fep_japan_candidate_window_t1

0x2043,	// (0x0002136c) candidate_pane_ParamLimits

0x2043,	// (0x0002136c) candidate_pane

0x72d0,	// (0x000265f9) scroll_pane_cp30

0x2055,	// (0x0002137e) list_single_popup_jap_candidate_pane_ParamLimits

0x2055,	// (0x0002137e) list_single_popup_jap_candidate_pane

0x17bd,	// (0x00020ae6) list_highlight_pane_cp30

0x206a,	// (0x00021393) list_single_popup_jap_candidate_pane_t1

0x2079,	// (0x000213a2) level_1_signal

0x2086,	// (0x000213af) level_2_signal

0x2093,	// (0x000213bc) level_3_signal

0x20a0,	// (0x000213c9) level_4_signal

0x20ad,	// (0x000213d6) level_5_signal

0x20ba,	// (0x000213e3) level_6_signal

0x20c7,	// (0x000213f0) level_7_signal

0x2079,	// (0x000213a2) level_1_battery

0x2086,	// (0x000213af) level_2_battery

0x2093,	// (0x000213bc) level_3_battery

0x20a0,	// (0x000213c9) level_4_battery

0x20ad,	// (0x000213d6) level_5_battery

0x20ba,	// (0x000213e3) level_6_battery

0x20c7,	// (0x000213f0) level_7_battery

0x20ec,	// (0x00021415) list_menu_pane_ParamLimits

0x20ec,	// (0x00021415) list_menu_pane

0x2102,	// (0x0002142b) scroll_pane_cp25_ParamLimits

0x2102,	// (0x0002142b) scroll_pane_cp25

0x211b,	// (0x00021444) list_double2_graphic_pane_cp2_ParamLimits

0x211b,	// (0x00021444) list_double2_graphic_pane_cp2

0x211b,	// (0x00021444) list_double2_large_graphic_pane_cp2_ParamLimits

0x211b,	// (0x00021444) list_double2_large_graphic_pane_cp2

0x211b,	// (0x00021444) list_double2_pane_cp2_ParamLimits

0x211b,	// (0x00021444) list_double2_pane_cp2

0x211b,	// (0x00021444) list_double_graphic_pane_cp2_ParamLimits

0x211b,	// (0x00021444) list_double_graphic_pane_cp2

0x211b,	// (0x00021444) list_double_large_graphic_pane_cp2_ParamLimits

0x211b,	// (0x00021444) list_double_large_graphic_pane_cp2

0x211b,	// (0x00021444) list_double_number_pane_cp2_ParamLimits

0x211b,	// (0x00021444) list_double_number_pane_cp2

0x211b,	// (0x00021444) list_double_pane_cp2_ParamLimits

0x211b,	// (0x00021444) list_double_pane_cp2

0x730b,	// (0x00026634) list_single_2graphic_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_2graphic_pane_cp2

0x730b,	// (0x00026634) list_single_graphic_heading_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_graphic_heading_pane_cp2

0x730b,	// (0x00026634) list_single_graphic_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_graphic_pane_cp2

0x730b,	// (0x00026634) list_single_heading_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_heading_pane_cp2

0x212b,	// (0x00021454) list_single_large_graphic_pane_cp2_ParamLimits

0x212b,	// (0x00021454) list_single_large_graphic_pane_cp2

0x730b,	// (0x00026634) list_single_number_heading_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_number_heading_pane_cp2

0x730b,	// (0x00026634) list_single_number_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_number_pane_cp2

0x730b,	// (0x00026634) list_single_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_pane_cp2

0x2145,	// (0x0002146e) bg_popup_sub_pane_cp22

0x73e3,	// (0x0002670c) popup_side_volume_key_window_g1

0x7407,	// (0x00026730) popup_side_volume_key_window_t1

0x7423,	// (0x0002674c) volume_small_pane_cp1

0x180b,	// (0x00020b34) bg_popup_sub_pane_cp24_ParamLimits

0x180b,	// (0x00020b34) bg_popup_sub_pane_cp24

0x215b,	// (0x00021484) fep_china_uni_candidate_pane_ParamLimits

0x215b,	// (0x00021484) fep_china_uni_candidate_pane

0x216f,	// (0x00021498) fep_china_uni_entry_pane

0x217f,	// (0x000214a8) popup_fep_china_uni_window_g1

0x742b,	// (0x00026754) fep_china_uni_entry_pane_g1

0x7433,	// (0x0002675c) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0002ea41) fep_china_uni_entry_pane_g

0x219b,	// (0x000214c4) fep_entry_item_pane

0x21a5,	// (0x000214ce) fep_candidate_item_pane

0x743b,	// (0x00026764) fep_china_uni_candidate_pane_g1

0x21ad,	// (0x000214d6) fep_china_uni_candidate_pane_g2

0x21b5,	// (0x000214de) fep_china_uni_candidate_pane_g3

0x7443,	// (0x0002676c) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0002ea46) fep_china_uni_candidate_pane_g

0x17b3,	// (0x00020adc) fep_entry_item_pane_g1

0x21bd,	// (0x000214e6) fep_entry_item_pane_t1_ParamLimits

0x21bd,	// (0x000214e6) fep_entry_item_pane_t1

0x39c3,	// (0x00022cec) fep_candidate_item_pane_t1_ParamLimits

0x39c3,	// (0x00022cec) fep_candidate_item_pane_t1

0x39d8,	// (0x00022d01) fep_candidate_item_pane_t2_ParamLimits

0x39d8,	// (0x00022d01) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0002ea4f) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0002ea4f) fep_candidate_item_pane_t

0x1819,	// (0x00020b42) list_highlight_pane_cp31_ParamLimits

0x1819,	// (0x00020b42) list_highlight_pane_cp31

0x39ea,	// (0x00022d13) level_1_signal_lsc

0x39f3,	// (0x00022d1c) level_2_signal_lsc

0x39fc,	// (0x00022d25) level_3_signal_lsc

0x3a05,	// (0x00022d2e) level_4_signal_lsc

0x3a0e,	// (0x00022d37) level_5_signal_lsc

0x3a17,	// (0x00022d40) level_6_signal_lsc

0x3a20,	// (0x00022d49) level_7_signal_lsc

0x3a20,	// (0x00022d49) level_1_battery_lsc

0x3a29,	// (0x00022d52) level_2_battery_lsc

0x3a32,	// (0x00022d5b) level_3_battery_lsc

0x3a3b,	// (0x00022d64) level_4_battery_lsc

0x3a44,	// (0x00022d6d) level_5_battery_lsc

0x3a4d,	// (0x00022d76) level_6_battery_lsc

0x39ea,	// (0x00022d13) level_7_battery_lsc

0x3a56,	// (0x00022d7f) scroll_handle_focus_pane_g1

0x3a5f,	// (0x00022d88) scroll_handle_focus_pane_g2

0x3a68,	// (0x00022d91) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0002ea54) scroll_handle_focus_pane_g

0x5a8b,	// (0x00024db4) list_single_2graphic_pane_g1_ParamLimits

0x5a8b,	// (0x00024db4) list_single_2graphic_pane_g1

0x5478,	// (0x000247a1) list_single_2graphic_pane_g2_ParamLimits

0x5478,	// (0x000247a1) list_single_2graphic_pane_g2

0x53fe,	// (0x00024727) list_single_2graphic_pane_g3_ParamLimits

0x53fe,	// (0x00024727) list_single_2graphic_pane_g3

0x5a97,	// (0x00024dc0) list_single_2graphic_pane_g4_ParamLimits

0x5a97,	// (0x00024dc0) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0002ea5b) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0002ea5b) list_single_2graphic_pane_g

0x5aa3,	// (0x00024dcc) list_single_2graphic_pane_t1_ParamLimits

0x5aa3,	// (0x00024dcc) list_single_2graphic_pane_t1

0x5ad1,	// (0x00024dfa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5ad1,	// (0x00024dfa) list_double2_graphic_large_graphic_pane_g1

0x5686,	// (0x000249af) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5686,	// (0x000249af) list_double2_graphic_large_graphic_pane_g2

0x5697,	// (0x000249c0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5697,	// (0x000249c0) list_double2_graphic_large_graphic_pane_g3

0x5ae1,	// (0x00024e0a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5ae1,	// (0x00024e0a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0002ea64) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0002ea64) list_double2_graphic_large_graphic_pane_g

0x5aed,	// (0x00024e16) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5aed,	// (0x00024e16) list_double2_graphic_large_graphic_pane_t1

0x5b03,	// (0x00024e2c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5b03,	// (0x00024e2c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0002ea6d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0002ea6d) list_double2_graphic_large_graphic_pane_t

0x761d,	// (0x00026946) popup_fast_swap_window_ParamLimits

0x761d,	// (0x00026946) popup_fast_swap_window

0x7639,	// (0x00026962) popup_side_volume_key_window

0x7653,	// (0x0002697c) stacon_top_pane

0x765d,	// (0x00026986) status_pane_ParamLimits

0x765d,	// (0x00026986) status_pane

0x766b,	// (0x00026994) status_small_pane

0x17bd,	// (0x00020ae6) control_pane

0x17bd,	// (0x00020ae6) stacon_bottom_pane

0x1c03,	// (0x00020f2c) scroll_pane_cp121

0x1bfa,	// (0x00020f23) set_content_pane

0x744b,	// (0x00026774) bg_active_tab_pane_g1_cp1

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp1

0x745d,	// (0x00026786) bg_active_tab_pane_g3_cp1

0x744b,	// (0x00026774) bg_passive_tab_pane_g1_cp1

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp1

0x745d,	// (0x00026786) bg_passive_tab_pane_g3_cp1

0x7466,	// (0x0002678f) bg_active_tab_pane_g1_cp2

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp2

0x746f,	// (0x00026798) bg_active_tab_pane_g3_cp2

0x7466,	// (0x0002678f) bg_passive_tab_pane_g1_cp2

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp2

0x746f,	// (0x00026798) bg_passive_tab_pane_g3_cp2

0x7478,	// (0x000267a1) bg_active_tab_pane_g1_cp3

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp3

0x7481,	// (0x000267aa) bg_active_tab_pane_g3_cp3

0x7478,	// (0x000267a1) bg_passive_tab_pane_g1_cp3

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp3

0x7481,	// (0x000267aa) bg_passive_tab_pane_g3_cp3

0x748a,	// (0x000267b3) bg_active_tab_pane_g1_cp4

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp4

0x7495,	// (0x000267be) bg_active_tab_pane_g3_cp4

0x748a,	// (0x000267b3) bg_passive_tab_pane_g1_cp4

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp4

0x7495,	// (0x000267be) bg_passive_tab_pane_g3_cp4

0x75e1,	// (0x0002690a) bg_active_tab_pane_g1_cp5

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp5

0x75ea,	// (0x00026913) bg_active_tab_pane_g3_cp5

0x75e1,	// (0x0002690a) bg_passive_tab_pane_g1_cp5

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp5

0x75ea,	// (0x00026913) bg_passive_tab_pane_g3_cp5

0x75f3,	// (0x0002691c) list_set_graphic_pane_ParamLimits

0x75f3,	// (0x0002691c) list_set_graphic_pane

0x17bd,	// (0x00020ae6) bg_set_opt_pane_cp4

0x3bf0,	// (0x00022f19) list_set_graphic_pane_g1_ParamLimits

0x3bf0,	// (0x00022f19) list_set_graphic_pane_g1

0x3bfc,	// (0x00022f25) list_set_graphic_pane_g2_ParamLimits

0x3bfc,	// (0x00022f25) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0002ea72) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0002ea72) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0002ee05) volume_small_pane_cp_g

0x7611,	// (0x0002693a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7611,	// (0x0002693a) list_double2_large_graphic_pane_g1_cp2

0x3c1e,	// (0x00022f47) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3c1e,	// (0x00022f47) list_double2_large_graphic_pane_g2_cp2

0x3c2f,	// (0x00022f58) list_double2_large_graphic_pane_g3_cp2

0x3c37,	// (0x00022f60) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3c37,	// (0x00022f60) list_double2_large_graphic_pane_t1_cp2

0x3c4d,	// (0x00022f76) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3c4d,	// (0x00022f76) list_double2_large_graphic_pane_t2_cp2

0xad46,	// (0x0002a06f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad46,	// (0x0002a06f) list_double_large_graphic_pane_g1_cp2

0xad57,	// (0x0002a080) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad57,	// (0x0002a080) list_double_large_graphic_pane_g2_cp2

0x7778,	// (0x00026aa1) list_double_large_graphic_pane_g3_cp2

0xad68,	// (0x0002a091) list_double_large_graphic_pane_g4_cp

0xad70,	// (0x0002a099) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad70,	// (0x0002a099) list_double_large_graphic_pane_t1_cp2

0xad87,	// (0x0002a0b0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad87,	// (0x0002a0b0) list_double_large_graphic_pane_t2_cp2

0x7676,	// (0x0002699f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7676,	// (0x0002699f) list_double2_graphic_pane_g1_cp2

0x7684,	// (0x000269ad) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7684,	// (0x000269ad) list_double2_graphic_pane_g2_cp2

0x7695,	// (0x000269be) list_double2_graphic_pane_g3_cp2

0x769f,	// (0x000269c8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x769f,	// (0x000269c8) list_double2_graphic_pane_t1_cp2

0x76b5,	// (0x000269de) list_double2_graphic_pane_t2_cp2_ParamLimits

0x76b5,	// (0x000269de) list_double2_graphic_pane_t2_cp2

0x21d3,	// (0x000214fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0x21d3,	// (0x000214fc) list_single_number_heading_pane_g1_cp2

0x76c7,	// (0x000269f0) list_single_number_heading_pane_g2_cp2

0x76cf,	// (0x000269f8) list_single_number_heading_pane_t1_cp2_ParamLimits

0x76cf,	// (0x000269f8) list_single_number_heading_pane_t1_cp2

0x76e5,	// (0x00026a0e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x76e5,	// (0x00026a0e) list_single_number_heading_pane_t2_cp2

0x76f7,	// (0x00026a20) list_single_number_heading_pane_t3_cp2_ParamLimits

0x76f7,	// (0x00026a20) list_single_number_heading_pane_t3_cp2

0x21d3,	// (0x000214fc) list_single_heading_pane_g1_cp2_ParamLimits

0x21d3,	// (0x000214fc) list_single_heading_pane_g1_cp2

0x76c7,	// (0x000269f0) list_single_heading_pane_g2_cp2

0x76cf,	// (0x000269f8) list_single_heading_pane_t1_cp2_ParamLimits

0x76cf,	// (0x000269f8) list_single_heading_pane_t1_cp2

0xab50,	// (0x00029e79) list_single_heading_pane_t2_cp2_ParamLimits

0xab50,	// (0x00029e79) list_single_heading_pane_t2_cp2

0xaa98,	// (0x00029dc1) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa98,	// (0x00029dc1) list_double_graphic_pane_g1_cp2

0xaaa4,	// (0x00029dcd) list_double_graphic_pane_g2_cp2_ParamLimits

0xaaa4,	// (0x00029dcd) list_double_graphic_pane_g2_cp2

0xaab3,	// (0x00029ddc) list_double_graphic_pane_g3_cp2

0xaabb,	// (0x00029de4) list_double_graphic_pane_t1_cp2_ParamLimits

0xaabb,	// (0x00029de4) list_double_graphic_pane_t1_cp2

0xaad1,	// (0x00029dfa) list_double_graphic_pane_t2_cp2_ParamLimits

0xaad1,	// (0x00029dfa) list_double_graphic_pane_t2_cp2

0x776c,	// (0x00026a95) list_double_number_pane_g1_cp2_ParamLimits

0x776c,	// (0x00026a95) list_double_number_pane_g1_cp2

0x7778,	// (0x00026aa1) list_double_number_pane_g2_cp2

0xaa5c,	// (0x00029d85) list_double_number_pane_t1_cp2_ParamLimits

0xaa5c,	// (0x00029d85) list_double_number_pane_t1_cp2

0xaa70,	// (0x00029d99) list_double_number_pane_t2_cp2_ParamLimits

0xaa70,	// (0x00029d99) list_double_number_pane_t2_cp2

0xaa86,	// (0x00029daf) list_double_number_pane_t3_cp2_ParamLimits

0xaa86,	// (0x00029daf) list_double_number_pane_t3_cp2

0xa945,	// (0x00029c6e) list_single_graphic_pane_g1_cp2_ParamLimits

0xa945,	// (0x00029c6e) list_single_graphic_pane_g1_cp2

0x77d0,	// (0x00026af9) list_single_graphic_pane_g2_cp2_ParamLimits

0x77d0,	// (0x00026af9) list_single_graphic_pane_g2_cp2

0x77dc,	// (0x00026b05) list_single_graphic_pane_g3_cp2

0xa91b,	// (0x00029c44) list_single_graphic_pane_t1_cp2_ParamLimits

0xa91b,	// (0x00029c44) list_single_graphic_pane_t1_cp2

0x77d0,	// (0x00026af9) list_single_number_pane_g1_cp2_ParamLimits

0x77d0,	// (0x00026af9) list_single_number_pane_g1_cp2

0x77dc,	// (0x00026b05) list_single_number_pane_g2_cp2

0xa91b,	// (0x00029c44) list_single_number_pane_t1_cp2_ParamLimits

0xa91b,	// (0x00029c44) list_single_number_pane_t1_cp2

0xa931,	// (0x00029c5a) list_single_number_pane_t2_cp2_ParamLimits

0xa931,	// (0x00029c5a) list_single_number_pane_t2_cp2

0x3c1e,	// (0x00022f47) list_double2_pane_g1_cp2_ParamLimits

0x3c1e,	// (0x00022f47) list_double2_pane_g1_cp2

0x3c2f,	// (0x00022f58) list_double2_pane_g2_cp2

0x7744,	// (0x00026a6d) list_double2_pane_t1_cp2_ParamLimits

0x7744,	// (0x00026a6d) list_double2_pane_t1_cp2

0x775a,	// (0x00026a83) list_double2_pane_t2_cp2_ParamLimits

0x775a,	// (0x00026a83) list_double2_pane_t2_cp2

0x776c,	// (0x00026a95) list_double_pane_g1_cp2_ParamLimits

0x776c,	// (0x00026a95) list_double_pane_g1_cp2

0x7778,	// (0x00026aa1) list_double_pane_g2_cp2

0x7780,	// (0x00026aa9) list_double_pane_t1_cp2_ParamLimits

0x7780,	// (0x00026aa9) list_double_pane_t1_cp2

0x7796,	// (0x00026abf) list_double_pane_t2_cp2_ParamLimits

0x7796,	// (0x00026abf) list_double_pane_t2_cp2

0x77c0,	// (0x00026ae9) list_single_pane_cp2_g3

0x77d0,	// (0x00026af9) list_single_pane_g1_cp2_ParamLimits

0x77d0,	// (0x00026af9) list_single_pane_g1_cp2

0x77dc,	// (0x00026b05) list_single_pane_g2_cp2

0x77e4,	// (0x00026b0d) list_single_pane_t1_cp2_ParamLimits

0x77e4,	// (0x00026b0d) list_single_pane_t1_cp2

0x77fc,	// (0x00026b25) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x77fc,	// (0x00026b25) list_single_large_graphic_pane_g1_cp2

0x7808,	// (0x00026b31) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7808,	// (0x00026b31) list_single_large_graphic_pane_g2_cp2

0x7814,	// (0x00026b3d) list_single_large_graphic_pane_g3_cp2

0x781c,	// (0x00026b45) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x781c,	// (0x00026b45) list_single_large_graphic_pane_g4_cp1

0x7836,	// (0x00026b5f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7836,	// (0x00026b5f) list_single_large_graphic_pane_t1_cp2

0xa8e7,	// (0x00029c10) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa8e7,	// (0x00029c10) list_single_graphic_heading_pane_g1_cp2

0xa8b4,	// (0x00029bdd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8b4,	// (0x00029bdd) list_single_graphic_heading_pane_g4_cp2

0x77dc,	// (0x00026b05) list_single_graphic_heading_pane_g5_cp2

0xa8f3,	// (0x00029c1c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa8f3,	// (0x00029c1c) list_single_graphic_heading_pane_t1_cp2

0xa909,	// (0x00029c32) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa909,	// (0x00029c32) list_single_graphic_heading_pane_t2_cp2

0xa8a8,	// (0x00029bd1) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8a8,	// (0x00029bd1) list_single_2graphic_pane_g1_cp2

0xa8b4,	// (0x00029bdd) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8b4,	// (0x00029bdd) list_single_2graphic_pane_g2_cp2

0x77dc,	// (0x00026b05) list_single_2graphic_pane_g3_cp2

0xa8c5,	// (0x00029bee) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8c5,	// (0x00029bee) list_single_2graphic_pane_g4_cp2

0xa8d1,	// (0x00029bfa) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8d1,	// (0x00029bfa) list_single_2graphic_pane_t1_cp2

0x17b3,	// (0x00020adc) list_highlight_pane_g10_cp1

0xa490,	// (0x000297b9) list_highlight_pane_g1_cp1

0xa498,	// (0x000297c1) list_highlight_pane_g2_cp1

0xa4a0,	// (0x000297c9) list_highlight_pane_g3_cp1

0xa4a8,	// (0x000297d1) list_highlight_pane_g4_cp1

0xa4b0,	// (0x000297d9) list_highlight_pane_g5_cp1

0xa4b8,	// (0x000297e1) list_highlight_pane_g6_cp1

0xa4c0,	// (0x000297e9) list_highlight_pane_g7_cp1

0xa4c8,	// (0x000297f1) list_highlight_pane_g8_cp1

0xa4d0,	// (0x000297f9) list_highlight_pane_g9_cp1

0xa3b8,	// (0x000296e1) form_field_slider_pane_t3

0xa3c6,	// (0x000296ef) form_field_slider_pane_t4

0xa3d4,	// (0x000296fd) slider_form_pane_ParamLimits

0xa3d4,	// (0x000296fd) slider_form_pane

0x17bd,	// (0x00020ae6) control_abbreviations

0x17bd,	// (0x00020ae6) control_conventions

0x17bd,	// (0x00020ae6) control_definitions

0x17bd,	// (0x00020ae6) format_table_attribute

0xab9a,	// (0x00029ec3) bg_popup_preview_window_pane_g9

0x17bd,	// (0x00020ae6) format_table_data2

0x17bd,	// (0x00020ae6) format_table_data3

0x17bd,	// (0x00020ae6) format_table_data_example

0x0008,

0x17bd,	// (0x00020ae6) intro_purpose

0xf8e0,	// (0x0002ec09) bg_popup_preview_window_pane_g

0x17bd,	// (0x00020ae6) texts_category

0x17bd,	// (0x00020ae6) texts_graphics

0x784c,	// (0x00026b75) text_digital

0x785b,	// (0x00026b84) text_primary

0x786a,	// (0x00026b93) text_primary_small

0x7879,	// (0x00026ba2) text_secondary

0x7888,	// (0x00026bb1) text_title

0xb2c7,	// (0x0002a5f0) bg_passive_tab_pane_g1_cp3_srt

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp3_srt

0xb2d0,	// (0x0002a5f9) bg_passive_tab_pane_g3_cp3_srt

0x1819,	// (0x00020b42) bg_active_tab_pane_cp3_srt_ParamLimits

0x1819,	// (0x00020b42) bg_active_tab_pane_cp3_srt

0xb2d9,	// (0x0002a602) tabs_4_active_pane_srt_g1

0xb2e1,	// (0x0002a60a) tabs_4_active_pane_srt_t1_ParamLimits

0xb2e1,	// (0x0002a60a) tabs_4_active_pane_srt_t1

0xb2c7,	// (0x0002a5f0) bg_active_tab_pane_g1_cp3_copy1

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp3_copy1

0xb2d0,	// (0x0002a5f9) bg_active_tab_pane_g3_cp3_copy1

0x1819,	// (0x00020b42) tabs_2_long_active_pane_srt_ParamLimits

0x1819,	// (0x00020b42) tabs_2_long_active_pane_srt

0x1819,	// (0x00020b42) tabs_2_long_passive_pane_srt_ParamLimits

0x1819,	// (0x00020b42) tabs_2_long_passive_pane_srt

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp4_srt

0xafbb,	// (0x0002a2e4) bg_passive_tab_pane_g1_cp4_srt

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp4_srt

0xafc4,	// (0x0002a2ed) bg_passive_tab_pane_g3_cp4_srt

0x21df,	// (0x00021508) bg_active_tab_pane_cp4_srt_ParamLimits

0x21df,	// (0x00021508) bg_active_tab_pane_cp4_srt

0xafcd,	// (0x0002a2f6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafcd,	// (0x0002a2f6) tabs_2_long_active_pane_srt_t1

0xafbb,	// (0x0002a2e4) bg_active_tab_pane_g1_cp4_srt

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp4_srt

0xafc4,	// (0x0002a2ed) bg_active_tab_pane_g3_cp4_srt

0x180b,	// (0x00020b34) tabs_3_long_active_pane_srt_ParamLimits

0x180b,	// (0x00020b34) tabs_3_long_active_pane_srt

0x180b,	// (0x00020b34) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x180b,	// (0x00020b34) tabs_3_long_passive_pane_cp_srt

0x180b,	// (0x00020b34) tabs_3_long_passive_pane_srt_ParamLimits

0x180b,	// (0x00020b34) tabs_3_long_passive_pane_srt

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp5_srt

0x75e1,	// (0x0002690a) bg_passive_tab_pane_g1_cp5_srt

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp5_srt

0x75ea,	// (0x00026913) bg_passive_tab_pane_g3_cp5_srt

0x21df,	// (0x00021508) bg_active_tab_pane_cp5_srt_ParamLimits

0x21df,	// (0x00021508) bg_active_tab_pane_cp5_srt

0xafa9,	// (0x0002a2d2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafa9,	// (0x0002a2d2) tabs_3_long_active_pane_srt_t1

0x75e1,	// (0x0002690a) bg_active_tab_pane_g1_cp5_srt

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp5_srt

0x75ea,	// (0x00026913) bg_active_tab_pane_g3_cp5_srt

0xaf9b,	// (0x0002a2c4) navi_text_pane_srt_t1

0xaf93,	// (0x0002a2bc) navi_icon_pane_srt_g1

0x7b02,	// (0x00026e2b) midp_editing_number_pane_srt

0x7897,	// (0x00026bc0) midp_ticker_pane_srt

0x7b0a,	// (0x00026e33) midp_ticker_pane_srt_g1

0x7b12,	// (0x00026e3b) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0002ea91) midp_ticker_pane_srt_g

0x7b1a,	// (0x00026e43) midp_ticker_pane_srt_t1

0xaf84,	// (0x0002a2ad) midp_editing_number_pane_t1_copy1

0x789f,	// (0x00026bc8) listscroll_midp_pane

0x789f,	// (0x00026bc8) midp_form_pane

0x7911,	// (0x00026c3a) midp_info_popup_window_ParamLimits

0x7911,	// (0x00026c3a) midp_info_popup_window

0x1d5a,	// (0x00021083) bg_popup_sub_pane_cp50_ParamLimits

0x1d5a,	// (0x00021083) bg_popup_sub_pane_cp50

0xa0cc,	// (0x000293f5) listscroll_midp_info_pane_ParamLimits

0xa0cc,	// (0x000293f5) listscroll_midp_info_pane

0xa0ac,	// (0x000293d5) listscroll_form_midp_pane_ParamLimits

0xa0ac,	// (0x000293d5) listscroll_form_midp_pane

0xa0b8,	// (0x000293e1) scroll_bar_cp050

0xa08c,	// (0x000293b5) list_midp_pane

0xbcfe,	// (0x0002b027) signal_pane_g2_cp

0x9fc6,	// (0x000292ef) listscroll_midp_info_pane_t1_ParamLimits

0x9fc6,	// (0x000292ef) listscroll_midp_info_pane_t1

0x9fde,	// (0x00029307) listscroll_midp_info_pane_t2_ParamLimits

0x9fde,	// (0x00029307) listscroll_midp_info_pane_t2

0xa01c,	// (0x00029345) listscroll_midp_info_pane_t3_ParamLimits

0xa01c,	// (0x00029345) listscroll_midp_info_pane_t3

0xa056,	// (0x0002937f) listscroll_midp_info_pane_t4_ParamLimits

0xa056,	// (0x0002937f) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0002eb44) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0002eb44) listscroll_midp_info_pane_t

0x1dd0,	// (0x000210f9) scroll_pane_cp21

0x9f66,	// (0x0002928f) form_midp_field_choice_group_pane

0x9f6f,	// (0x00029298) form_midp_field_text_pane

0x9fac,	// (0x000292d5) form_midp_field_time_pane

0x9fb4,	// (0x000292dd) form_midp_gauge_slider_pane

0x9fbd,	// (0x000292e6) form_midp_gauge_wait_pane

0x17bd,	// (0x00020ae6) form_midp_image_pane

0x5c70,	// (0x00024f99) list_single_midp_pane_ParamLimits

0x5c70,	// (0x00024f99) list_single_midp_pane

0x9f1b,	// (0x00029244) form_midp_field_text_pane_t1

0x89b4,	// (0x00027cdd) input_focus_pane_cp050

0x9f55,	// (0x0002927e) list_midp_form_text_pane

0x9eea,	// (0x00029213) form_midp_field_choice_group_pane_t1

0x9ef8,	// (0x00029221) input_focus_pane_cp051

0x9f0c,	// (0x00029235) list_midp_choice_pane

0x17bd,	// (0x00020ae6) status_idle_pane

0x9ece,	// (0x000291f7) form_midp_field_time_pane_t1

0x17b3,	// (0x00020adc) wait_anim_pane_g2_copy1

0x9edc,	// (0x00029205) form_midp_field_time_pane_t2

0x0001,

0x79c1,	// (0x00026cea) aid_navinavi_width_2_pane

0xf816,	// (0x0002eb3f) form_midp_field_time_pane_t

0x17bd,	// (0x00020ae6) input_focus_pane_cp052

0x17bd,	// (0x00020ae6) bg_input_focus_pane_cp040

0x9e8e,	// (0x000291b7) form_midp_gauge_slider_pane_t1

0x9e9c,	// (0x000291c5) form_midp_gauge_slider_pane_t2

0x9eaa,	// (0x000291d3) form_midp_gauge_slider_pane_t3

0x9eb8,	// (0x000291e1) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0002eb36) form_midp_gauge_slider_pane_t

0x9ec6,	// (0x000291ef) form_midp_slider_pane

0x1819,	// (0x00020b42) bg_input_focus_pane_cp041_ParamLimits

0x1819,	// (0x00020b42) bg_input_focus_pane_cp041

0x9e5b,	// (0x00029184) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e5b,	// (0x00029184) form_midp_gauge_wait_pane_t1

0x9e6d,	// (0x00029196) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e6d,	// (0x00029196) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0002eb31) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0002eb31) form_midp_gauge_wait_pane_t

0x9e7f,	// (0x000291a8) form_midp_wait_pane_ParamLimits

0x9e7f,	// (0x000291a8) form_midp_wait_pane

0x9e25,	// (0x0002914e) form_midp_image_pane_g1

0x9e2e,	// (0x00029157) form_midp_image_pane_t1

0x9e3d,	// (0x00029166) form_midp_image_pane_t2

0x9e4c,	// (0x00029175) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0002eb2a) form_midp_image_pane_t

0x9e1c,	// (0x00029145) list_single_midp_pane_g1

0x5c61,	// (0x00024f8a) list_single_midp_pane_t1

0x9df3,	// (0x0002911c) list_midp_form_item_pane_ParamLimits

0x9df3,	// (0x0002911c) list_midp_form_item_pane

0x7969,	// (0x00026c92) list_midp_form_item_pane_t1

0x7978,	// (0x00026ca1) midp_ticker_pane_g1

0x7984,	// (0x00026cad) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0002ea77) midp_ticker_pane_g

0x7990,	// (0x00026cb9) midp_ticker_pane_t1

0xb1d1,	// (0x0002a4fa) midp_editing_number_pane_t1

0xb1af,	// (0x0002a4d8) midp_editing_number_pane

0xb1be,	// (0x0002a4e7) midp_ticker_pane

0xaf74,	// (0x0002a29d) ai_message_heading_pane

0x17bd,	// (0x00020ae6) bg_popup_window_pane_cp14

0xaf7c,	// (0x0002a2a5) listscroll_ai_message_pane

0xaefe,	// (0x0002a227) ai_message_heading_pane_g1_ParamLimits

0xaefe,	// (0x0002a227) ai_message_heading_pane_g1

0xaf0a,	// (0x0002a233) ai_message_heading_pane_g2_ParamLimits

0xaf0a,	// (0x0002a233) ai_message_heading_pane_g2

0xaf16,	// (0x0002a23f) ai_message_heading_pane_g3_ParamLimits

0xaf16,	// (0x0002a23f) ai_message_heading_pane_g3

0xaf22,	// (0x0002a24b) ai_message_heading_pane_g4_ParamLimits

0xaf22,	// (0x0002a24b) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0002ec6b) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0002ec6b) ai_message_heading_pane_g

0xaf2e,	// (0x0002a257) ai_message_heading_pane_t1_ParamLimits

0xaf2e,	// (0x0002a257) ai_message_heading_pane_t1

0xaf48,	// (0x0002a271) ai_message_heading_pane_t2_ParamLimits

0xaf48,	// (0x0002a271) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0002ec74) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0002ec74) ai_message_heading_pane_t

0xaf5a,	// (0x0002a283) bg_popup_heading_pane_cp1_ParamLimits

0xaf5a,	// (0x0002a283) bg_popup_heading_pane_cp1

0xaeec,	// (0x0002a215) list_ai_message_pane_ParamLimits

0xaeec,	// (0x0002a215) list_ai_message_pane

0x1dd0,	// (0x000210f9) scroll_pane_cp10

0xae88,	// (0x0002a1b1) list_ai_message_pane_g1

0xae90,	// (0x0002a1b9) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0002ec48) list_ai_message_pane_g

0xae98,	// (0x0002a1c1) list_ai_message_pane_t1_ParamLimits

0xae98,	// (0x0002a1c1) list_ai_message_pane_t1

0xaead,	// (0x0002a1d6) list_ai_message_pane_t2_ParamLimits

0xaead,	// (0x0002a1d6) list_ai_message_pane_t2

0xaec2,	// (0x0002a1eb) list_ai_message_pane_t3_ParamLimits

0xaec2,	// (0x0002a1eb) list_ai_message_pane_t3

0xaed7,	// (0x0002a200) list_ai_message_pane_t4_ParamLimits

0xaed7,	// (0x0002a200) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0002ec4d) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0002ec4d) list_ai_message_pane_t

0xae73,	// (0x0002a19c) cell_ai_soft_ind_pane_ParamLimits

0xae73,	// (0x0002a19c) cell_ai_soft_ind_pane

0x79a2,	// (0x00026ccb) cell_ai_soft_ind_pane_g1_ParamLimits

0x79a2,	// (0x00026ccb) cell_ai_soft_ind_pane_g1

0x17bd,	// (0x00020ae6) grid_highlight_cp1

0x79af,	// (0x00026cd8) text_secondary_cp56_ParamLimits

0x79af,	// (0x00026cd8) text_secondary_cp56

0xae48,	// (0x0002a171) example_general_pane_ParamLimits

0xae48,	// (0x0002a171) example_general_pane

0xae54,	// (0x0002a17d) example_parent_pane_g1_ParamLimits

0xae54,	// (0x0002a17d) example_parent_pane_g1

0xae60,	// (0x0002a189) example_parent_pane_t1_ParamLimits

0xae60,	// (0x0002a189) example_parent_pane_t1

0x817d,	// (0x000274a6) popup_preview_text_window_ParamLimits

0x817d,	// (0x000274a6) popup_preview_text_window

0x77c8,	// (0x00026af1) list_single_pane_cp2_g4

0x1a05,	// (0x00020d2e) bg_popup_preview_window_pane_ParamLimits

0x1a05,	// (0x00020d2e) bg_popup_preview_window_pane

0xaba2,	// (0x00029ecb) popup_preview_text_window_t1_ParamLimits

0xaba2,	// (0x00029ecb) popup_preview_text_window_t1

0xabc0,	// (0x00029ee9) popup_preview_text_window_t2_ParamLimits

0xabc0,	// (0x00029ee9) popup_preview_text_window_t2

0xac09,	// (0x00029f32) popup_preview_text_window_t3_ParamLimits

0xac09,	// (0x00029f32) popup_preview_text_window_t3

0xac4e,	// (0x00029f77) popup_preview_text_window_t4_ParamLimits

0xac4e,	// (0x00029f77) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0002ec1c) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0002ec1c) popup_preview_text_window_t

0xaccc,	// (0x00029ff5) scroll_pane_cp11

0x88c8,	// (0x00027bf1) bg_popup_preview_window_pane_g1

0xab62,	// (0x00029e8b) bg_popup_preview_window_pane_g2

0xab6a,	// (0x00029e93) bg_popup_preview_window_pane_g3

0xab72,	// (0x00029e9b) bg_popup_preview_window_pane_g4

0xab7a,	// (0x00029ea3) bg_popup_preview_window_pane_g5

0xab82,	// (0x00029eab) bg_popup_preview_window_pane_g6

0xab8a,	// (0x00029eb3) bg_popup_preview_window_pane_g7

0xab92,	// (0x00029ebb) bg_popup_preview_window_pane_g8

0x653e,	// (0x00025867) aid_popup_width_pane

0x815b,	// (0x00027484) popup_midp_note_alarm_window_ParamLimits

0x815b,	// (0x00027484) popup_midp_note_alarm_window

0x1c37,	// (0x00020f60) data_form_pane_ParamLimits

0x58de,	// (0x00024c07) form_field_data_pane_g1

0x58e8,	// (0x00024c11) form_field_data_pane_t1_ParamLimits

0x1c43,	// (0x00020f6c) input_focus_pane_ParamLimits

0x5900,	// (0x00024c29) data_form_wide_pane_ParamLimits

0x5911,	// (0x00024c3a) form_field_data_wide_pane_g1

0x591d,	// (0x00024c46) form_field_data_wide_pane_t1_ParamLimits

0x1ad9,	// (0x00020e02) input_focus_pane_cp6_ParamLimits

0x6f4d,	// (0x00026276) input_popup_find_pane_g1_ParamLimits

0x6f4d,	// (0x00026276) input_popup_find_pane_g1

0x70df,	// (0x00026408) aid_navi_side_left_pane

0x70f4,	// (0x0002641d) aid_navi_side_right_pane

0xa58b,	// (0x000298b4) bg_popup_window_pane_cp30_ParamLimits

0xa58b,	// (0x000298b4) bg_popup_window_pane_cp30

0xa605,	// (0x0002992e) popup_midp_note_alarm_window_g1_ParamLimits

0xa605,	// (0x0002992e) popup_midp_note_alarm_window_g1

0xa635,	// (0x0002995e) popup_midp_note_alarm_window_t1_ParamLimits

0xa635,	// (0x0002995e) popup_midp_note_alarm_window_t1

0xa6d6,	// (0x000299ff) popup_midp_note_alarm_window_t2_ParamLimits

0xa6d6,	// (0x000299ff) popup_midp_note_alarm_window_t2

0xa784,	// (0x00029aad) popup_midp_note_alarm_window_t3_ParamLimits

0xa784,	// (0x00029aad) popup_midp_note_alarm_window_t3

0xa7ac,	// (0x00029ad5) popup_midp_note_alarm_window_t4_ParamLimits

0xa7ac,	// (0x00029ad5) popup_midp_note_alarm_window_t4

0xa7cc,	// (0x00029af5) popup_midp_note_alarm_window_t5_ParamLimits

0xa7cc,	// (0x00029af5) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0002ebb9) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0002ebb9) popup_midp_note_alarm_window_t

0xa878,	// (0x00029ba1) wait_bar_pane_cp1_ParamLimits

0xa878,	// (0x00029ba1) wait_bar_pane_cp1

0x17bd,	// (0x00020ae6) wait_anim_pane_copy1

0x17bd,	// (0x00020ae6) wait_border_pane_copy1

0xa281,	// (0x000295aa) wait_border_pane_g1_copy1

0x5937,	// (0x00024c60) form_field_popup_pane_g1

0x593f,	// (0x00024c68) form_field_popup_pane_t1_ParamLimits

0x1c43,	// (0x00020f6c) input_focus_pane_cp7_ParamLimits

0x1cb0,	// (0x00020fd9) list_form_pane_ParamLimits

0x5957,	// (0x00024c80) form_field_popup_wide_pane_g1

0x595f,	// (0x00024c88) form_field_popup_wide_pane_t1_ParamLimits

0x1c43,	// (0x00020f6c) input_focus_pane_cp8_ParamLimits

0x1cd9,	// (0x00021002) list_form_wide_pane_ParamLimits

0xb35b,	// (0x0002a684) aid_size_cell_graphic_pane

0x59e9,	// (0x00024d12) data_form_pane_t1_ParamLimits

0x5cb5,	// (0x00024fde) data_form_wide_pane_t1_ParamLimits

0x8462,	// (0x0002778b) bg_status_flat_pane

0x693d,	// (0x00025c66) title_pane_t1_ParamLimits

0x17d3,	// (0x00020afc) title_pane_t2_ParamLimits

0x17f9,	// (0x00020b22) title_pane_t3_ParamLimits

0xf557,	// (0x0002e880) title_pane_t_ParamLimits

0x2079,	// (0x000213a2) level_1_signal_ParamLimits

0x2086,	// (0x000213af) level_2_signal_ParamLimits

0x2093,	// (0x000213bc) level_3_signal_ParamLimits

0x20a0,	// (0x000213c9) level_4_signal_ParamLimits

0x20ad,	// (0x000213d6) level_5_signal_ParamLimits

0x20ba,	// (0x000213e3) level_6_signal_ParamLimits

0x20c7,	// (0x000213f0) level_7_signal_ParamLimits

0x2079,	// (0x000213a2) level_1_battery_ParamLimits

0x2086,	// (0x000213af) level_2_battery_ParamLimits

0x2093,	// (0x000213bc) level_3_battery_ParamLimits

0x20a0,	// (0x000213c9) level_4_battery_ParamLimits

0x20ad,	// (0x000213d6) level_5_battery_ParamLimits

0x20ba,	// (0x000213e3) level_6_battery_ParamLimits

0x20c7,	// (0x000213f0) level_7_battery_ParamLimits

0xa490,	// (0x000297b9) bg_status_flat_pane_g1

0xa498,	// (0x000297c1) bg_status_flat_pane_g2

0xa4a0,	// (0x000297c9) bg_status_flat_pane_g3

0xa4a8,	// (0x000297d1) bg_status_flat_pane_g4

0xa4b0,	// (0x000297d9) bg_status_flat_pane_g5

0xa4b8,	// (0x000297e1) bg_status_flat_pane_g6

0xa4c0,	// (0x000297e9) bg_status_flat_pane_g7

0x69ad,	// (0x00025cd6) tabs_3_active_pane_t1_ParamLimits

0x69ad,	// (0x00025cd6) tabs_3_passive_pane_t1_ParamLimits

0x69c7,	// (0x00025cf0) tabs_4_active_pane_t1_ParamLimits

0x69c7,	// (0x00025cf0) tabs_4_1_passive_pane_t1_ParamLimits

0x6f84,	// (0x000262ad) tabs_2_active_pane_t1_ParamLimits

0x6f84,	// (0x000262ad) tabs_2_passive_pane_t1_ParamLimits

0x21df,	// (0x00021508) bg_active_tab_pane_cp4_ParamLimits

0x6f96,	// (0x000262bf) tabs_2_long_active_pane_t1_ParamLimits

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp4_ParamLimits

0x895d,	// (0x00027c86) list_single_midp_graphic_pane_t1_ParamLimits

0x21df,	// (0x00021508) bg_active_tab_pane_cp5_ParamLimits

0x6fb5,	// (0x000262de) tabs_3_long_active_pane_t1_ParamLimits

0x6fa9,	// (0x000262d2) bg_passive_tab_pane_cp5_ParamLimits

0x895d,	// (0x00027c86) list_single_midp_graphic_pane_t1

0x8462,	// (0x0002778b) bg_status_flat_pane_ParamLimits

0x852b,	// (0x00027854) indicator_pane_cp2_ParamLimits

0x852b,	// (0x00027854) indicator_pane_cp2

0x8656,	// (0x0002797f) navi_pane_srt_ParamLimits

0x8656,	// (0x0002797f) navi_pane_srt

0x867a,	// (0x000279a3) popup_clock_digital_analogue_window_cp1

0x1877,	// (0x00020ba0) indicator_pane_t1

0x7897,	// (0x00026bc0) copy_highlight_pane

0x7897,	// (0x00026bc0) cursor_graphics_pane

0x7897,	// (0x00026bc0) graphic_within_text_pane

0x7897,	// (0x00026bc0) link_highlight_pane

0xac8f,	// (0x00029fb8) popup_preview_text_window_t5_ParamLimits

0xac8f,	// (0x00029fb8) popup_preview_text_window_t5

0x79c9,	// (0x00026cf2) cursor_digital_pane

0x79c9,	// (0x00026cf2) cursor_primary_pane

0x79da,	// (0x00026d03) cursor_primary_small_pane

0x79e2,	// (0x00026d0b) cursor_secondary_pane

0x79ea,	// (0x00026d13) cursor_title_pane

0x79c9,	// (0x00026cf2) link_highlight_digital_pane

0x79d1,	// (0x00026cfa) link_highlight_primary_pane

0x79da,	// (0x00026d03) link_highlight_primary_small_pane

0x79e2,	// (0x00026d0b) link_highlight_secondary_pane

0x79ea,	// (0x00026d13) link_highlight_title_pane

0x79c9,	// (0x00026cf2) copy_highlight_digital_pane

0x79c9,	// (0x00026cf2) copy_highlight_primary_pane

0x79da,	// (0x00026d03) copy_highlight_primary_small_pane

0x79e2,	// (0x00026d0b) copy_highlight_secondary_pane

0x79ea,	// (0x00026d13) copy_highlight_title_pane

0x79e2,	// (0x00026d0b) graphic_text_digital_pane

0xa52e,	// (0x00029857) graphic_text_primary_pane

0xa537,	// (0x00029860) graphic_text_primary_small_pane

0x79da,	// (0x00026d03) graphic_text_secondary_pane

0x79c9,	// (0x00026cf2) graphic_text_title_pane

0x79f2,	// (0x00026d1b) cursor_primary_pane_g1

0xa520,	// (0x00029849) cursor_text_primary_t1

0xa508,	// (0x00029831) cursor_primary_small_pane_g1

0xa512,	// (0x0002983b) cursor_text_primary_small_t1

0xa4f0,	// (0x00029819) cursor_primary_small_pane_g1_copy1

0xa4fa,	// (0x00029823) cursor_text_primary_small_t1_copy1

0xa4d8,	// (0x00029801) cursor_text_title_t1

0xa4e6,	// (0x0002980f) cursor_title_pane_g1

0x79f2,	// (0x00026d1b) cursor_digital_pane_g1

0x79fc,	// (0x00026d25) cursor_text_digital_t1

0x7a0a,	// (0x00026d33) link_highlight_primary_pane_g1

0xa481,	// (0x000297aa) link_highlight_primary_pane_t1

0x7a0a,	// (0x00026d33) link_highlight_primary_small_pane_g1

0x7a12,	// (0x00026d3b) link_highlight_primary_small_pane_t1

0x7a0a,	// (0x00026d33) link_highlight_secondary_pane_g1

0x7a21,	// (0x00026d4a) link_highlight_secondary_pane_t1

0xa3e6,	// (0x0002970f) link_highlight_title_pane_g1

0xa3fd,	// (0x00029726) link_highlight_title_pane_t1

0xa3e6,	// (0x0002970f) link_highlight_digital_pane_g1

0xa3ee,	// (0x00029717) link_highlight_digital_pane_t1

0xa2a0,	// (0x000295c9) copy_highlight_primary_pane_g1

0xa2c6,	// (0x000295ef) copy_highlight_primary_pane_t1

0xa2a0,	// (0x000295c9) copy_highlight_primary_small_pane_g1

0xa2b7,	// (0x000295e0) copy_highlight_primary_small_pane_t1

0x7a30,	// (0x00026d59) copy_highlight_secondary_pane_g1

0x7a38,	// (0x00026d61) copy_highlight_secondary_pane_t1

0xa2a0,	// (0x000295c9) copy_highlight_title_pane_g1

0xa2a8,	// (0x000295d1) copy_highlight_title_pane_t1

0xa2a0,	// (0x000295c9) copy_highlight_digital_pane_g1

0xb529,	// (0x0002a852) copy_highlight_digital_pane_t1

0xb47d,	// (0x0002a7a6) graphic_text_primary_pane_g1

0xb50d,	// (0x0002a836) graphic_text_primary_pane_t1

0xb51b,	// (0x0002a844) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0002ece8) graphic_text_primary_pane_t

0xb4e9,	// (0x0002a812) graphic_text_primary_small_pane_g1

0xb4f1,	// (0x0002a81a) graphic_text_primary_small_pane_t1

0xb4ff,	// (0x0002a828) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0002ece3) graphic_text_primary_small_pane_t

0xb4c5,	// (0x0002a7ee) graphic_text_secondary_pane_g1

0xb4cd,	// (0x0002a7f6) graphic_text_secondary_pane_t1

0xb4db,	// (0x0002a804) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0002ecde) graphic_text_secondary_pane_t

0xb4a1,	// (0x0002a7ca) graphic_text_title_pane_g1

0xb4a9,	// (0x0002a7d2) graphic_text_title_pane_t1

0xb4b7,	// (0x0002a7e0) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0002ecd9) graphic_text_title_pane_t

0xb47d,	// (0x0002a7a6) graphic_text_digital_pane_g1

0xb485,	// (0x0002a7ae) graphic_text_digital_pane_t1

0xb493,	// (0x0002a7bc) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0002ecd4) graphic_text_digital_pane_t

0x1819,	// (0x00020b42) navi_icon_pane_srt_ParamLimits

0x1819,	// (0x00020b42) navi_icon_pane_srt

0x17bd,	// (0x00020ae6) navi_midp_pane_srt

0x17bd,	// (0x00020ae6) navi_navi_pane_srt

0x1819,	// (0x00020b42) navi_text_pane_srt_ParamLimits

0x1819,	// (0x00020b42) navi_text_pane_srt

0xb448,	// (0x0002a771) navi_navi_icon_text_pane_srt

0xb450,	// (0x0002a779) navi_navi_pane_srt_g1_ParamLimits

0xb450,	// (0x0002a779) navi_navi_pane_srt_g1

0xb462,	// (0x0002a78b) navi_navi_pane_srt_g2_ParamLimits

0xb462,	// (0x0002a78b) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0002eccf) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0002eccf) navi_navi_pane_srt_g

0xb474,	// (0x0002a79d) navi_navi_tabs_pane_srt

0xb448,	// (0x0002a771) navi_navi_text_pane_srt

0xb448,	// (0x0002a771) navi_navi_volume_pane_srt

0xb439,	// (0x0002a762) navi_navi_text_pane_srt_t1

0x8de4,	// (0x0002810d) navi_navi_volume_pane_srt_g1

0x8dec,	// (0x00028115) volume_small_pane_srt_ParamLimits

0x8dec,	// (0x00028115) volume_small_pane_srt

0x7a47,	// (0x00026d70) volume_small_pane_srt_g1_ParamLimits

0x7a47,	// (0x00026d70) volume_small_pane_srt_g1

0x7a57,	// (0x00026d80) volume_small_pane_srt_g2_ParamLimits

0x7a57,	// (0x00026d80) volume_small_pane_srt_g2

0x7a68,	// (0x00026d91) volume_small_pane_srt_g3_ParamLimits

0x7a68,	// (0x00026d91) volume_small_pane_srt_g3

0x7a79,	// (0x00026da2) volume_small_pane_srt_g4_ParamLimits

0x7a79,	// (0x00026da2) volume_small_pane_srt_g4

0x7a8a,	// (0x00026db3) volume_small_pane_srt_g5_ParamLimits

0x7a8a,	// (0x00026db3) volume_small_pane_srt_g5

0x7a9b,	// (0x00026dc4) volume_small_pane_srt_g6_ParamLimits

0x7a9b,	// (0x00026dc4) volume_small_pane_srt_g6

0x7aac,	// (0x00026dd5) volume_small_pane_srt_g7_ParamLimits

0x7aac,	// (0x00026dd5) volume_small_pane_srt_g7

0x7abd,	// (0x00026de6) volume_small_pane_srt_g8_ParamLimits

0x7abd,	// (0x00026de6) volume_small_pane_srt_g8

0x7ace,	// (0x00026df7) volume_small_pane_srt_g9_ParamLimits

0x7ace,	// (0x00026df7) volume_small_pane_srt_g9

0x7adf,	// (0x00026e08) volume_small_pane_srt_g10_ParamLimits

0x7adf,	// (0x00026e08) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0002ea7c) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0002ea7c) volume_small_pane_srt_g

0x6c14,	// (0x00025f3d) query_popup_data_pane_cp2

0xb41f,	// (0x0002a748) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb41f,	// (0x0002a748) navi_navi_icon_text_pane_srt_t1

0xa52e,	// (0x00029857) navi_tabs_2_long_pane_srt

0xa52e,	// (0x00029857) navi_tabs_2_pane_srt

0xa52e,	// (0x00029857) navi_tabs_3_long_pane_srt

0xa52e,	// (0x00029857) navi_tabs_3_pane_srt

0xa52e,	// (0x00029857) navi_tabs_4_pane_srt

0x8dc4,	// (0x000280ed) tabs_2_active_pane_srt_ParamLimits

0x8dc4,	// (0x000280ed) tabs_2_active_pane_srt

0x8dd4,	// (0x000280fd) tabs_2_passive_pane_srt_ParamLimits

0x8dd4,	// (0x000280fd) tabs_2_passive_pane_srt

0x7dce,	// (0x000270f7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7dce,	// (0x000270f7) bg_passive_tab_pane_cp1_srt

0xb3eb,	// (0x0002a714) bg_passive_tab_pane_g1_cp1_srt

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp1_srt

0xb3f4,	// (0x0002a71d) bg_passive_tab_pane_g3_cp1_srt

0x1819,	// (0x00020b42) bg_active_tab_pane_cp1_srt_ParamLimits

0x1819,	// (0x00020b42) bg_active_tab_pane_cp1_srt

0xb3fd,	// (0x0002a726) tabs_2_active_pane_srt_g1

0xb405,	// (0x0002a72e) tabs_2_active_pane_srt_t1_ParamLimits

0xb405,	// (0x0002a72e) tabs_2_active_pane_srt_t1

0xb3eb,	// (0x0002a714) bg_active_tab_pane_g1_cp1_srt

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp1_srt

0xb3f4,	// (0x0002a71d) bg_active_tab_pane_g3_cp1_srt

0x8d91,	// (0x000280ba) tabs_3_active_pane_srt_ParamLimits

0x8d91,	// (0x000280ba) tabs_3_active_pane_srt

0x8da2,	// (0x000280cb) tabs_3_passive_pane_cp_srt_ParamLimits

0x8da2,	// (0x000280cb) tabs_3_passive_pane_cp_srt

0x8db3,	// (0x000280dc) tabs_3_passive_pane_srt_ParamLimits

0x8db3,	// (0x000280dc) tabs_3_passive_pane_srt

0x7dce,	// (0x000270f7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7dce,	// (0x000270f7) bg_passive_tab_pane_cp2_srt

0x7af0,	// (0x00026e19) bg_passive_tab_pane_g1_cp2_srt

0x7454,	// (0x0002677d) bg_passive_tab_pane_g2_cp2_srt

0x7af9,	// (0x00026e22) bg_passive_tab_pane_g3_cp2_srt

0x1819,	// (0x00020b42) bg_active_tab_pane_cp2_srt_ParamLimits

0x1819,	// (0x00020b42) bg_active_tab_pane_cp2_srt

0xb3d1,	// (0x0002a6fa) tabs_3_active_pane_srt_g1

0xb3d9,	// (0x0002a702) tabs_3_active_pane_srt_t1_ParamLimits

0xb3d9,	// (0x0002a702) tabs_3_active_pane_srt_t1

0x7af0,	// (0x00026e19) bg_active_tab_pane_g1_cp2_srt

0x7454,	// (0x0002677d) bg_active_tab_pane_g2_cp2_srt

0x7af9,	// (0x00026e22) bg_active_tab_pane_g3_cp2_srt

0x8d49,	// (0x00028072) tabs_4_active_pane_srt_ParamLimits

0x8d49,	// (0x00028072) tabs_4_active_pane_srt

0x8d5b,	// (0x00028084) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8d5b,	// (0x00028084) tabs_4_passive_pane_cp2_srt

0x7d9e,	// (0x000270c7) aid_size_cell_toolbar

0x6fa9,	// (0x000262d2) main_idle_act_pane_ParamLimits

0x7f8d,	// (0x000272b6) popup_large_graphic_colour_window_ParamLimits

0x82f8,	// (0x00027621) popup_toolbar_window_ParamLimits

0x82f8,	// (0x00027621) popup_toolbar_window

0x5cf7,	// (0x00025020) list_single_graphic_2heading_pane_ParamLimits

0x5cf7,	// (0x00025020) list_single_graphic_2heading_pane

0x1f61,	// (0x0002128a) aid_size_cell_apps_grid_lsc_pane

0x1f73,	// (0x0002129c) aid_size_cell_apps_grid_prt_pane

0x7dce,	// (0x000270f7) bg_wml_button_pane_cp1_ParamLimits

0x7dce,	// (0x000270f7) bg_wml_button_pane_cp1

0x9f1b,	// (0x00029244) form_midp_field_text_pane_t1_ParamLimits

0x89b4,	// (0x00027cdd) input_focus_pane_cp050_ParamLimits

0x9f55,	// (0x0002927e) list_midp_form_text_pane_ParamLimits

0x9ef8,	// (0x00029221) input_focus_pane_cp051_ParamLimits

0x9f0c,	// (0x00029235) list_midp_choice_pane_ParamLimits

0x8af2,	// (0x00027e1b) list_single_2graphic_pane_cp3_ParamLimits

0x8af2,	// (0x00027e1b) list_single_2graphic_pane_cp3

0x9dc0,	// (0x000290e9) list_single_midp_graphic_pane_ParamLimits

0x9dc0,	// (0x000290e9) list_single_midp_graphic_pane

0x5b41,	// (0x00024e6a) list_single_graphic_2heading_pane_g1_ParamLimits

0x5b41,	// (0x00024e6a) list_single_graphic_2heading_pane_g1

0x53f2,	// (0x0002471b) list_single_graphic_2heading_pane_g4_ParamLimits

0x53f2,	// (0x0002471b) list_single_graphic_2heading_pane_g4

0x53fe,	// (0x00024727) list_single_graphic_2heading_pane_g5_ParamLimits

0x53fe,	// (0x00024727) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0002eacf) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0002eacf) list_single_graphic_2heading_pane_g

0x5b4d,	// (0x00024e76) list_single_graphic_2heading_pane_t1_ParamLimits

0x5b4d,	// (0x00024e76) list_single_graphic_2heading_pane_t1

0x5b61,	// (0x00024e8a) list_single_graphic_2heading_pane_t2_ParamLimits

0x5b61,	// (0x00024e8a) list_single_graphic_2heading_pane_t2

0x5b7b,	// (0x00024ea4) list_single_graphic_2heading_pane_t3_ParamLimits

0x5b7b,	// (0x00024ea4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0002ead6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0002ead6) list_single_graphic_2heading_pane_t

0x87d6,	// (0x00027aff) bg_popup_sub_pane_cp2

0x8800,	// (0x00027b29) grid_toobar_pane

0x883c,	// (0x00027b65) cell_toolbar_pane_ParamLimits

0x883c,	// (0x00027b65) cell_toolbar_pane

0x886c,	// (0x00027b95) cell_toolbar_pane_g1_ParamLimits

0x886c,	// (0x00027b95) cell_toolbar_pane_g1

0x8880,	// (0x00027ba9) cell_toolbar_pane_g2_ParamLimits

0x8880,	// (0x00027ba9) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0002eae4) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0002eae4) cell_toolbar_pane_g

0x88a2,	// (0x00027bcb) grid_highlight_pane_cp2_ParamLimits

0x88a2,	// (0x00027bcb) grid_highlight_pane_cp2

0x88bc,	// (0x00027be5) toolbar_button_pane

0x88c8,	// (0x00027bf1) toolbar_button_pane_g1

0x88d0,	// (0x00027bf9) toolbar_button_pane_g2

0x88d8,	// (0x00027c01) toolbar_button_pane_g3

0x88e0,	// (0x00027c09) toolbar_button_pane_g4

0x88e8,	// (0x00027c11) toolbar_button_pane_g5

0x88f0,	// (0x00027c19) toolbar_button_pane_g6

0x88f8,	// (0x00027c21) toolbar_button_pane_g7

0x8900,	// (0x00027c29) toolbar_button_pane_g8

0x8908,	// (0x00027c31) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0002eae9) toolbar_button_pane_g

0x8918,	// (0x00027c41) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8918,	// (0x00027c41) list_single_2graphic_pane_g1_cp3

0x8924,	// (0x00027c4d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8924,	// (0x00027c4d) list_single_2graphic_pane_g2_cp3

0x76c7,	// (0x000269f0) list_single_2graphic_pane_g3_cp3

0x8935,	// (0x00027c5e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8935,	// (0x00027c5e) list_single_2graphic_pane_g4_cp3

0x8941,	// (0x00027c6a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8941,	// (0x00027c6a) list_single_2graphic_pane_t1_cp3

0x21d3,	// (0x000214fc) list_single_midp_graphic_pane_g2_ParamLimits

0x21d3,	// (0x000214fc) list_single_midp_graphic_pane_g2

0x7da6,	// (0x000270cf) aid_zoom_text_primary

0x5b15,	// (0x00024e3e) aid_zoom_text_secondary

0x7baa,	// (0x00026ed3) status_small_pane_g7_ParamLimits

0x7baa,	// (0x00026ed3) status_small_pane_g7

0x7bcd,	// (0x00026ef6) status_small_pane_t1_ParamLimits

0x6920,	// (0x00025c49) title_pane_g2

0x0003,

0xf54e,	// (0x0002e877) title_pane_g

0x6c6e,	// (0x00025f97) aid_size_cell_colour_1_pane_ParamLimits

0x6c6e,	// (0x00025f97) aid_size_cell_colour_1_pane

0x6c82,	// (0x00025fab) aid_size_cell_colour_2_pane_ParamLimits

0x6c82,	// (0x00025fab) aid_size_cell_colour_2_pane

0x6c96,	// (0x00025fbf) aid_size_cell_colour_3_pane_ParamLimits

0x6c96,	// (0x00025fbf) aid_size_cell_colour_3_pane

0x6caa,	// (0x00025fd3) aid_size_cell_colour_4_pane_ParamLimits

0x6caa,	// (0x00025fd3) aid_size_cell_colour_4_pane

0x701c,	// (0x00026345) title_pane_stacon_g1_ParamLimits

0x701c,	// (0x00026345) title_pane_stacon_g1

0xa31d,	// (0x00029646) popup_note_wait_window_g3_ParamLimits

0xa31d,	// (0x00029646) popup_note_wait_window_g3

0xa393,	// (0x000296bc) popup_note_wait_window_t5_ParamLimits

0xa393,	// (0x000296bc) popup_note_wait_window_t5

0x17bd,	// (0x00020ae6) main_feb_china_hwr_fs_writing_pane

0x7e74,	// (0x0002719d) popup_feb_china_hwr_fs_window_ParamLimits

0x7e74,	// (0x0002719d) popup_feb_china_hwr_fs_window

0x899f,	// (0x00027cc8) aid_size_cell_hwr_fs_ParamLimits

0x899f,	// (0x00027cc8) aid_size_cell_hwr_fs

0x89b4,	// (0x00027cdd) bg_popup_sub_pane_cp3_ParamLimits

0x89b4,	// (0x00027cdd) bg_popup_sub_pane_cp3

0x89c0,	// (0x00027ce9) grid_hwr_fs_pane_ParamLimits

0x89c0,	// (0x00027ce9) grid_hwr_fs_pane

0x89d8,	// (0x00027d01) linegrid_hwr_fs_pane_ParamLimits

0x89d8,	// (0x00027d01) linegrid_hwr_fs_pane

0x89e8,	// (0x00027d11) cell_hwr_fs_pane_ParamLimits

0x89e8,	// (0x00027d11) cell_hwr_fs_pane

0x8a0a,	// (0x00027d33) linegrid_hwr_fs_pane_g1_ParamLimits

0x8a0a,	// (0x00027d33) linegrid_hwr_fs_pane_g1

0x8a16,	// (0x00027d3f) linegrid_hwr_fs_pane_g2_ParamLimits

0x8a16,	// (0x00027d3f) linegrid_hwr_fs_pane_g2

0x8a28,	// (0x00027d51) linegrid_hwr_fs_pane_g3_ParamLimits

0x8a28,	// (0x00027d51) linegrid_hwr_fs_pane_g3

0x8a34,	// (0x00027d5d) linegrid_hwr_fs_pane_g4_ParamLimits

0x8a34,	// (0x00027d5d) linegrid_hwr_fs_pane_g4

0x8a4e,	// (0x00027d77) linegrid_hwr_fs_pane_g5_ParamLimits

0x8a4e,	// (0x00027d77) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0002eb0f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0002eb0f) linegrid_hwr_fs_pane_g

0x8a64,	// (0x00027d8d) cell_hwr_fs_pane_g1_ParamLimits

0x8a64,	// (0x00027d8d) cell_hwr_fs_pane_g1

0x8710,	// (0x00027a39) cell_hwr_fs_pane_g2_ParamLimits

0x8710,	// (0x00027a39) cell_hwr_fs_pane_g2

0x8a7a,	// (0x00027da3) cell_hwr_fs_pane_g3_ParamLimits

0x8a7a,	// (0x00027da3) cell_hwr_fs_pane_g3

0x8a87,	// (0x00027db0) cell_hwr_fs_pane_g4_ParamLimits

0x8a87,	// (0x00027db0) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0002eb1a) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0002eb1a) cell_hwr_fs_pane_g

0x8a94,	// (0x00027dbd) cell_hwr_fs_pane_t1

0x17bd,	// (0x00020ae6) grid_highlight_pane_cp6

0x17bd,	// (0x00020ae6) main_idle_act2_pane

0x1db7,	// (0x000210e0) aid_inside_area_popup_secondary

0xa9b2,	// (0x00029cdb) aid_inside_area_window_primary_ParamLimits

0xa9b2,	// (0x00029cdb) aid_inside_area_window_primary

0xb538,	// (0x0002a861) ai2_news_ticker_pane

0xb540,	// (0x0002a869) aid_size_cell_ai1_link_ParamLimits

0xb540,	// (0x0002a869) aid_size_cell_ai1_link

0xb55a,	// (0x0002a883) popup_ai2_data_window_ParamLimits

0xb55a,	// (0x0002a883) popup_ai2_data_window

0xb570,	// (0x0002a899) popup_ai2_link_window_ParamLimits

0xb570,	// (0x0002a899) popup_ai2_link_window

0x89b4,	// (0x00027cdd) bg_popup_sub_pane_cp4_ParamLimits

0x89b4,	// (0x00027cdd) bg_popup_sub_pane_cp4

0xb584,	// (0x0002a8ad) grid_ai2_link_pane_ParamLimits

0xb584,	// (0x0002a8ad) grid_ai2_link_pane

0xb59b,	// (0x0002a8c4) popup_ai2_link_window_g1_ParamLimits

0xb59b,	// (0x0002a8c4) popup_ai2_link_window_g1

0xb5a7,	// (0x0002a8d0) popup_ai2_link_window_g2_ParamLimits

0xb5a7,	// (0x0002a8d0) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0002eced) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0002eced) popup_ai2_link_window_g

0xb5b6,	// (0x0002a8df) ai2_mp_button_pane

0xb5be,	// (0x0002a8e7) ai2_mp_volume_pane

0x9ef8,	// (0x00029221) bg_popup_sub_pane_cp5_ParamLimits

0x9ef8,	// (0x00029221) bg_popup_sub_pane_cp5

0xb5c6,	// (0x0002a8ef) heading_ai2_gene_pane_ParamLimits

0xb5c6,	// (0x0002a8ef) heading_ai2_gene_pane

0xb5d2,	// (0x0002a8fb) list_ai2_gene_pane_ParamLimits

0xb5d2,	// (0x0002a8fb) list_ai2_gene_pane

0xb61a,	// (0x0002a943) cell_ai2_link_pane_ParamLimits

0xb61a,	// (0x0002a943) cell_ai2_link_pane

0xb630,	// (0x0002a959) cell_ai2_link_pane_g1

0x17bd,	// (0x00020ae6) grid_highlight_pane_cp7

0x8e01,	// (0x0002812a) ai2_mp_volume_pane_g1

0xb700,	// (0x0002aa29) ai2_mp_volume_pane_g2

0xb675,	// (0x0002a99e) list_ai2_gene_pane_t1

0xb708,	// (0x0002aa31) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0002ed06) ai2_mp_volume_pane_g

0x8e09,	// (0x00028132) volume_small_pane_cp3

0xb710,	// (0x0002aa39) aid_size_cell_ai2_button

0xb718,	// (0x0002aa41) grid_ai2_button_pane

0xb721,	// (0x0002aa4a) cell_ai2_button_pane_ParamLimits

0xb721,	// (0x0002aa4a) cell_ai2_button_pane

0x17b3,	// (0x00020adc) cell_ai2_button_pane_g1

0x17bd,	// (0x00020ae6) grid_highlight_pane_cp8

0xb6c0,	// (0x0002a9e9) ai2_gene_pane_t1_ParamLimits

0xb6c0,	// (0x0002a9e9) ai2_gene_pane_t1

0x7d94,	// (0x000270bd) aid_height_parent_landscape

0xb01b,	// (0x0002a344) aid_height_set_list

0xb02c,	// (0x0002a355) aid_size_parent

0xb35b,	// (0x0002a684) aid_size_cell_graphic_pane_ParamLimits

0xb5e2,	// (0x0002a90b) popup_ai2_data_window_g1_ParamLimits

0xb5e2,	// (0x0002a90b) popup_ai2_data_window_g1

0xb5ee,	// (0x0002a917) ai2_news_ticker_pane_g1

0xb5f6,	// (0x0002a91f) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0002ecf2) ai2_news_ticker_pane_g

0xb5fe,	// (0x0002a927) ai2_news_ticker_pane_t1

0xb60c,	// (0x0002a935) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0002ecf7) ai2_news_ticker_pane_t

0xb639,	// (0x0002a962) heading_ai2_gene_pane_g1

0xb641,	// (0x0002a96a) heading_ai2_gene_pane_t1_ParamLimits

0xb641,	// (0x0002a96a) heading_ai2_gene_pane_t1

0xb656,	// (0x0002a97f) list_highlight_pane_cp6

0xb65e,	// (0x0002a987) ai2_gene_pane_ParamLimits

0xb65e,	// (0x0002a987) ai2_gene_pane

0xb683,	// (0x0002a9ac) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0002ecfc) list_ai2_gene_pane_t

0xb691,	// (0x0002a9ba) list_highlight_pane_cp8_ParamLimits

0xb691,	// (0x0002a9ba) list_highlight_pane_cp8

0xb6a2,	// (0x0002a9cb) ai2_gene_pane_g1_ParamLimits

0xb6a2,	// (0x0002a9cb) ai2_gene_pane_g1

0xb6b4,	// (0x0002a9dd) ai2_gene_pane_g2_ParamLimits

0xb6b4,	// (0x0002a9dd) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0002ed01) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0002ed01) ai2_gene_pane_g

0x1b84,	// (0x00020ead) scroll_pane_cp12

0x7d49,	// (0x00027072) control_pane_t3_ParamLimits

0x7d49,	// (0x00027072) control_pane_t3

0x7bbe,	// (0x00026ee7) status_small_pane_g8_ParamLimits

0x7bbe,	// (0x00026ee7) status_small_pane_g8

0x7f56,	// (0x0002727f) popup_find_window_ParamLimits

0x816f,	// (0x00027498) popup_note_image_window_ParamLimits

0x5b93,	// (0x00024ebc) list_double2_graphic_pane_vc_g1_ParamLimits

0x5b93,	// (0x00024ebc) list_double2_graphic_pane_vc_g1

0x53f2,	// (0x0002471b) list_double2_graphic_pane_vc_g2_ParamLimits

0x53f2,	// (0x0002471b) list_double2_graphic_pane_vc_g2

0x53fe,	// (0x00024727) list_double2_graphic_pane_vc_g3_ParamLimits

0x53fe,	// (0x00024727) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0002eadd) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0002eadd) list_double2_graphic_pane_vc_g

0x5b9f,	// (0x00024ec8) list_double2_graphic_pane_vc_t1_ParamLimits

0x5b9f,	// (0x00024ec8) list_double2_graphic_pane_vc_t1

0x53f2,	// (0x0002471b) list_single_heading_pane_vc_g1_ParamLimits

0x53f2,	// (0x0002471b) list_single_heading_pane_vc_g1

0x53fe,	// (0x00024727) list_single_heading_pane_vc_g2_ParamLimits

0x53fe,	// (0x00024727) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_single_heading_pane_vc_g

0x5bb5,	// (0x00024ede) list_single_heading_pane_vc_t1_ParamLimits

0x5bb5,	// (0x00024ede) list_single_heading_pane_vc_t1

0x5bcb,	// (0x00024ef4) list_single_heading_pane_vc_t2_ParamLimits

0x5bcb,	// (0x00024ef4) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0002eafe) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0002eafe) list_single_heading_pane_vc_t

0x5bdd,	// (0x00024f06) list_setting_number_pane_vc_g1_ParamLimits

0x5bdd,	// (0x00024f06) list_setting_number_pane_vc_g1

0x5be9,	// (0x00024f12) list_setting_number_pane_vc_g2_ParamLimits

0x5be9,	// (0x00024f12) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002eb03) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002eb03) list_setting_number_pane_vc_g

0x5bf5,	// (0x00024f1e) list_setting_number_pane_vc_t1_ParamLimits

0x5bf5,	// (0x00024f1e) list_setting_number_pane_vc_t1

0x5c09,	// (0x00024f32) list_setting_number_pane_vc_t2_ParamLimits

0x5c09,	// (0x00024f32) list_setting_number_pane_vc_t2

0x5c25,	// (0x00024f4e) list_setting_number_pane_vc_t3_ParamLimits

0x5c25,	// (0x00024f4e) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0002eb08) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0002eb08) list_setting_number_pane_vc_t

0x5c51,	// (0x00024f7a) set_value_pane_vc_ParamLimits

0x5c51,	// (0x00024f7a) set_value_pane_vc

0x5cf7,	// (0x00025020) list_double2_graphic_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double2_graphic_pane_vc

0xb1fc,	// (0x0002a525) list_double2_large_graphic_pane_vc_ParamLimits

0xb1fc,	// (0x0002a525) list_double2_large_graphic_pane_vc

0x5cf7,	// (0x00025020) list_double2_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double2_pane_vc

0x5cf7,	// (0x00025020) list_double_graphic_heading_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double_graphic_heading_pane_vc

0x5cf7,	// (0x00025020) list_double_graphic_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double_graphic_pane_vc

0x5cf7,	// (0x00025020) list_double_heading_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double_heading_pane_vc

0xb20e,	// (0x0002a537) list_double_large_graphic_pane_vc_ParamLimits

0xb20e,	// (0x0002a537) list_double_large_graphic_pane_vc

0x5cf7,	// (0x00025020) list_double_number_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double_number_pane_vc

0x5cf7,	// (0x00025020) list_double_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double_pane_vc

0x5cf7,	// (0x00025020) list_double_time_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_double_time_pane_vc

0x5cf7,	// (0x00025020) list_setting_number_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_setting_number_pane_vc

0x5cf7,	// (0x00025020) list_setting_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_setting_pane_vc

0x5cf7,	// (0x00025020) list_single_graphic_heading_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_single_graphic_heading_pane_vc

0x5cf7,	// (0x00025020) list_single_heading_pane_vc_ParamLimits

0x5cf7,	// (0x00025020) list_single_heading_pane_vc

0x5d29,	// (0x00025052) list_single_number_heading_pane_vc_ParamLimits

0x5d29,	// (0x00025052) list_single_number_heading_pane_vc

0x5dd0,	// (0x000250f9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5dd0,	// (0x000250f9) list_double_graphic_heading_pane_vc_g1

0x53f2,	// (0x0002471b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x53f2,	// (0x0002471b) list_double_graphic_heading_pane_vc_g2

0x53fe,	// (0x00024727) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x53fe,	// (0x00024727) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0002ed0d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0002ed0d) list_double_graphic_heading_pane_vc_g

0x5ddc,	// (0x00025105) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5ddc,	// (0x00025105) list_double_graphic_heading_pane_vc_t1

0x5df0,	// (0x00025119) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5df0,	// (0x00025119) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0002ed14) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0002ed14) list_double_graphic_heading_pane_vc_t

0x5bdd,	// (0x00024f06) list_setting_pane_vc_g1_ParamLimits

0x5bdd,	// (0x00024f06) list_setting_pane_vc_g1

0x5be9,	// (0x00024f12) list_setting_pane_vc_g2_ParamLimits

0x5be9,	// (0x00024f12) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0002eb03) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0002eb03) list_setting_pane_vc_g

0x5e08,	// (0x00025131) list_setting_pane_vc_t1_ParamLimits

0x5e08,	// (0x00025131) list_setting_pane_vc_t1

0x5e24,	// (0x0002514d) list_setting_pane_vc_t2_ParamLimits

0x5e24,	// (0x0002514d) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002ed57) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002ed57) list_setting_pane_vc_t

0x5c51,	// (0x00024f7a) set_value_pane_cp_vc_ParamLimits

0x5c51,	// (0x00024f7a) set_value_pane_cp_vc

0x53f2,	// (0x0002471b) list_single_number_heading_pane_vc_g1_ParamLimits

0x53f2,	// (0x0002471b) list_single_number_heading_pane_vc_g1

0x53fe,	// (0x00024727) list_single_number_heading_pane_vc_g2_ParamLimits

0x53fe,	// (0x00024727) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_single_number_heading_pane_vc_g

0x5e3e,	// (0x00025167) list_single_number_heading_pane_vc_t1_ParamLimits

0x5e3e,	// (0x00025167) list_single_number_heading_pane_vc_t1

0x5e54,	// (0x0002517d) list_single_number_heading_pane_vc_t2_ParamLimits

0x5e54,	// (0x0002517d) list_single_number_heading_pane_vc_t2

0x5e66,	// (0x0002518f) list_single_number_heading_pane_vc_t3_ParamLimits

0x5e66,	// (0x0002518f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0002ed5c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002ed5c) list_single_number_heading_pane_vc_t

0x5e78,	// (0x000251a1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e78,	// (0x000251a1) list_single_graphic_heading_pane_vc_g1

0x53f2,	// (0x0002471b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x53f2,	// (0x0002471b) list_single_graphic_heading_pane_vc_g4

0x53fe,	// (0x00024727) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x53fe,	// (0x00024727) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0002ed63) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0002ed63) list_single_graphic_heading_pane_vc_g

0x5e84,	// (0x000251ad) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5e84,	// (0x000251ad) list_single_graphic_heading_pane_vc_t1

0x5e9a,	// (0x000251c3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5e9a,	// (0x000251c3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0002ed6a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0002ed6a) list_single_graphic_heading_pane_vc_t

0x53f2,	// (0x0002471b) list_double2_pane_vc_g1_ParamLimits

0x53f2,	// (0x0002471b) list_double2_pane_vc_g1

0x53fe,	// (0x00024727) list_double2_pane_vc_g2_ParamLimits

0x53fe,	// (0x00024727) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_double2_pane_vc_g

0x5eac,	// (0x000251d5) list_double2_pane_vc_t1_ParamLimits

0x5eac,	// (0x000251d5) list_double2_pane_vc_t1

0x5ec4,	// (0x000251ed) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5ec4,	// (0x000251ed) list_double2_large_graphic_pane_vc_g1

0x5ed0,	// (0x000251f9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5ed0,	// (0x000251f9) list_double2_large_graphic_pane_vc_g2

0x5edc,	// (0x00025205) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5edc,	// (0x00025205) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x0002ed6f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0002ed6f) list_double2_large_graphic_pane_vc_g

0x5ee8,	// (0x00025211) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ee8,	// (0x00025211) list_double2_large_graphic_pane_vc_t1

0x5efe,	// (0x00025227) list_double_time_pane_vc_g1_ParamLimits

0x5efe,	// (0x00025227) list_double_time_pane_vc_g1

0x5f0a,	// (0x00025233) list_double_time_pane_vc_g2_ParamLimits

0x5f0a,	// (0x00025233) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0002ed76) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0002ed76) list_double_time_pane_vc_g

0x5f16,	// (0x0002523f) list_double_time_pane_vc_t1_ParamLimits

0x5f16,	// (0x0002523f) list_double_time_pane_vc_t1

0x5f3a,	// (0x00025263) list_double_time_pane_vc_t2_ParamLimits

0x5f3a,	// (0x00025263) list_double_time_pane_vc_t2

0x5f89,	// (0x000252b2) list_double_time_pane_vc_t3_ParamLimits

0x5f89,	// (0x000252b2) list_double_time_pane_vc_t3

0x5f9b,	// (0x000252c4) list_double_time_pane_vc_t4_ParamLimits

0x5f9b,	// (0x000252c4) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0002ed7b) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0002ed7b) list_double_time_pane_vc_t

0x53f2,	// (0x0002471b) list_double_pane_vc_g1_ParamLimits

0x53f2,	// (0x0002471b) list_double_pane_vc_g1

0x53fe,	// (0x00024727) list_double_pane_vc_g2_ParamLimits

0x53fe,	// (0x00024727) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_double_pane_vc_g

0x5faf,	// (0x000252d8) list_double_pane_vc_t1_ParamLimits

0x5faf,	// (0x000252d8) list_double_pane_vc_t1

0x5fc3,	// (0x000252ec) list_double_pane_vc_t2_ParamLimits

0x5fc3,	// (0x000252ec) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0002ed84) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002ed84) list_double_pane_vc_t

0x53f2,	// (0x0002471b) list_double_number_pane_vc_g1_ParamLimits

0x53f2,	// (0x0002471b) list_double_number_pane_vc_g1

0x53fe,	// (0x00024727) list_double_number_pane_vc_g2_ParamLimits

0x53fe,	// (0x00024727) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_double_number_pane_vc_g

0x5fdb,	// (0x00025304) list_double_number_pane_vc_t1_ParamLimits

0x5fdb,	// (0x00025304) list_double_number_pane_vc_t1

0x5faf,	// (0x000252d8) list_double_number_pane_vc_t2_ParamLimits

0x5faf,	// (0x000252d8) list_double_number_pane_vc_t2

0x5fed,	// (0x00025316) list_double_number_pane_vc_t3_ParamLimits

0x5fed,	// (0x00025316) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0002ed89) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0002ed89) list_double_number_pane_vc_t

0x6005,	// (0x0002532e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6005,	// (0x0002532e) list_double_large_graphic_pane_vc_g1

0x6027,	// (0x00025350) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6027,	// (0x00025350) list_double_large_graphic_pane_vc_g2

0x603b,	// (0x00025364) list_double_large_graphic_pane_vc_g3_ParamLimits

0x603b,	// (0x00025364) list_double_large_graphic_pane_vc_g3

0x604a,	// (0x00025373) list_double_large_graphic_pane_vc_g4_ParamLimits

0x604a,	// (0x00025373) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0002ed90) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0002ed90) list_double_large_graphic_pane_vc_g

0x6056,	// (0x0002537f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6056,	// (0x0002537f) list_double_large_graphic_pane_vc_t1

0x6072,	// (0x0002539b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6072,	// (0x0002539b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0002ed99) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0002ed99) list_double_large_graphic_pane_vc_t

0x53f2,	// (0x0002471b) list_double_heading_pane_vc_g1_ParamLimits

0x53f2,	// (0x0002471b) list_double_heading_pane_vc_g1

0x53fe,	// (0x00024727) list_double_heading_pane_vc_g2_ParamLimits

0x53fe,	// (0x00024727) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e8f1) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e8f1) list_double_heading_pane_vc_g

0x6094,	// (0x000253bd) list_double_heading_pane_vc_t1_ParamLimits

0x6094,	// (0x000253bd) list_double_heading_pane_vc_t1

0x60a8,	// (0x000253d1) list_double_heading_pane_vc_t2_ParamLimits

0x60a8,	// (0x000253d1) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0002ed9e) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0002ed9e) list_double_heading_pane_vc_t

0x60c0,	// (0x000253e9) list_double_graphic_pane_vc_g1_ParamLimits

0x60c0,	// (0x000253e9) list_double_graphic_pane_vc_g1

0x60d8,	// (0x00025401) list_double_graphic_pane_vc_g2_ParamLimits

0x60d8,	// (0x00025401) list_double_graphic_pane_vc_g2

0x53f2,	// (0x0002471b) list_double_graphic_pane_vc_g3_ParamLimits

0x53f2,	// (0x0002471b) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x0002eda3) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0002eda3) list_double_graphic_pane_vc_g

0x60f5,	// (0x0002541e) list_double_graphic_pane_vc_t1_ParamLimits

0x60f5,	// (0x0002541e) list_double_graphic_pane_vc_t1

0x6114,	// (0x0002543d) list_double_graphic_pane_vc_t2_ParamLimits

0x6114,	// (0x0002543d) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0002edac) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0002edac) list_double_graphic_pane_vc_t

0x654a,	// (0x00025873) aid_size_cell_fastswap

0x6552,	// (0x0002587b) aid_size_cell_touch_ParamLimits

0x6552,	// (0x0002587b) aid_size_cell_touch

0x67ad,	// (0x00025ad6) popup_fast_swap_wide_window_ParamLimits

0x67ad,	// (0x00025ad6) popup_fast_swap_wide_window

0x68b3,	// (0x00025bdc) touch_pane_ParamLimits

0x68b3,	// (0x00025bdc) touch_pane

0x1c0c,	// (0x00020f35) button_value_adjust_pane_cp2

0x5834,	// (0x00024b5d) button_value_adjust_pane_cp4

0x5854,	// (0x00024b7d) form_field_data_pane_cp2

0x5873,	// (0x00024b9c) form_field_data_wide_pane_cp2

0x1f98,	// (0x000212c1) bg_scroll_pane_ParamLimits

0x7216,	// (0x0002653f) scroll_handle_pane_ParamLimits

0x722a,	// (0x00026553) scroll_sc2_down_pane_ParamLimits

0x722a,	// (0x00026553) scroll_sc2_down_pane

0x1fc9,	// (0x000212f2) scroll_sc2_up_pane_ParamLimits

0x1fc9,	// (0x000212f2) scroll_sc2_up_pane

0xbdd7,	// (0x0002b100) grid_wheel_folder_pane_g1_ParamLimits

0xbdd7,	// (0x0002b100) grid_wheel_folder_pane_g1

0x7579,	// (0x000268a2) clock_nsta_pane_cp2_ParamLimits

0x7579,	// (0x000268a2) clock_nsta_pane_cp2

0x789f,	// (0x00026bc8) listscroll_midp_pane_ParamLimits

0x78ab,	// (0x00026bd4) midp_canvas_pane

0x7d8c,	// (0x000270b5) nsta_clock_indic_pane

0x7dda,	// (0x00027103) listscroll_form_pane_vc

0x7dea,	// (0x00027113) listscroll_set_pane_vc_ParamLimits

0x7dea,	// (0x00027113) listscroll_set_pane_vc

0x847e,	// (0x000277a7) clock_nsta_pane

0x84f9,	// (0x00027822) indicator_nsta_pane

0x87d6,	// (0x00027aff) bg_popup_sub_pane_cp2_ParamLimits

0x87ea,	// (0x00027b13) find_pane_cp2_ParamLimits

0x87ea,	// (0x00027b13) find_pane_cp2

0x8800,	// (0x00027b29) grid_toobar_pane_ParamLimits

0x8973,	// (0x00027c9c) list_form_gen_pane_vc_ParamLimits

0x8973,	// (0x00027c9c) list_form_gen_pane_vc

0x8989,	// (0x00027cb2) scroll_pane_cp8_vc_ParamLimits

0x8989,	// (0x00027cb2) scroll_pane_cp8_vc

0x8aa2,	// (0x00027dcb) data_form_wide_pane_vc_ParamLimits

0x8aa2,	// (0x00027dcb) data_form_wide_pane_vc

0x8aae,	// (0x00027dd7) form_field_data_wide_pane_vc_g1

0x8ab6,	// (0x00027ddf) form_field_data_wide_pane_vc_t1_ParamLimits

0x8ab6,	// (0x00027ddf) form_field_data_wide_pane_vc_t1

0x1c43,	// (0x00020f6c) input_focus_pane_cp6_vc_ParamLimits

0x1c43,	// (0x00020f6c) input_focus_pane_cp6_vc

0xa08c,	// (0x000293b5) list_midp_pane_ParamLimits

0xa098,	// (0x000293c1) scroll_pane_cp16_ParamLimits

0xa098,	// (0x000293c1) scroll_pane_cp16

0xa0fa,	// (0x00029423) button_value_adjust_pane_ParamLimits

0xa0fa,	// (0x00029423) button_value_adjust_pane

0xb03e,	// (0x0002a367) button_value_adjust_pane_cp6_ParamLimits

0xb03e,	// (0x0002a367) button_value_adjust_pane_cp6

0xb164,	// (0x0002a48d) settings_code_pane_cp_ParamLimits

0xb164,	// (0x0002a48d) settings_code_pane_cp

0x17b3,	// (0x00020adc) cell_touch_pane_g1

0x17b3,	// (0x00020adc) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0002ea22) cell_touch_pane_g

0xb733,	// (0x0002aa5c) cell_touch_pane_cp_ParamLimits

0xb733,	// (0x0002aa5c) cell_touch_pane_cp

0xb743,	// (0x0002aa6c) cell_touch_pane_ParamLimits

0xb743,	// (0x0002aa6c) cell_touch_pane

0x17b3,	// (0x00020adc) scroll_sc2_down_pane_g1

0x17b3,	// (0x00020adc) scroll_sc2_up_pane_g1

0x17bd,	// (0x00020ae6) bg_set_opt_pane_cp4_vc

0xb755,	// (0x0002aa7e) list_set_graphic_pane_vc_g1_ParamLimits

0xb755,	// (0x0002aa7e) list_set_graphic_pane_vc_g1

0xb761,	// (0x0002aa8a) list_set_graphic_pane_vc_g2_ParamLimits

0xb761,	// (0x0002aa8a) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0002ed19) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0002ed19) list_set_graphic_pane_vc_g

0xb76d,	// (0x0002aa96) text_primary_small_cp13_vc_ParamLimits

0xb76d,	// (0x0002aa96) text_primary_small_cp13_vc

0xb785,	// (0x0002aaae) list_set_graphic_pane_vc_ParamLimits

0xb785,	// (0x0002aaae) list_set_graphic_pane_vc

0x17bd,	// (0x00020ae6) input_focus_pane_cp2_vc

0x17b3,	// (0x00020adc) setting_code_pane_vc_g1

0x1830,	// (0x00020b59) setting_code_pane_vc_t1

0xb798,	// (0x0002aac1) set_text_pane_vc_t1_ParamLimits

0xb798,	// (0x0002aac1) set_text_pane_vc_t1

0x17bd,	// (0x00020ae6) input_focus_pane_cp1_vc

0xb7b4,	// (0x0002aadd) list_set_text_pane_vc

0x17b3,	// (0x00020adc) setting_text_pane_vc_g1

0x17bd,	// (0x00020ae6) bg_set_opt_pane_cp2_vc

0x1827,	// (0x00020b50) setting_slider_graphic_pane_vc_g1

0xb7be,	// (0x0002aae7) setting_slider_graphic_pane_vc_t1

0xb7ce,	// (0x0002aaf7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002ed1e) setting_slider_graphic_pane_vc_t

0xb7de,	// (0x0002ab07) slider_set_pane_cp_vc

0xb7e6,	// (0x0002ab0f) slider_set_pane_vc_g1

0xb7ef,	// (0x0002ab18) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0002ed23) slider_set_pane_vc_g

0x1d09,	// (0x00021032) set_opt_bg_pane_g1_copy1

0x1d11,	// (0x0002103a) set_opt_bg_pane_g2_copy1

0xb81b,	// (0x0002ab44) set_opt_bg_pane_g3_copy1

0x1d21,	// (0x0002104a) set_opt_bg_pane_g4_copy1

0x1d29,	// (0x00021052) set_opt_bg_pane_g5_copy1

0x1d31,	// (0x0002105a) set_opt_bg_pane_g6_copy1

0xb823,	// (0x0002ab4c) set_opt_bg_pane_g7_copy1

0xb82b,	// (0x0002ab54) set_opt_bg_pane_g8_copy1

0xb833,	// (0x0002ab5c) set_opt_bg_pane_g9_copy1

0x17bd,	// (0x00020ae6) bg_set_opt_pane_cp_vc

0xb83b,	// (0x0002ab64) setting_slider_pane_vc_t1

0xb84a,	// (0x0002ab73) setting_slider_pane_vc_t2

0xb85a,	// (0x0002ab83) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0002ed32) setting_slider_pane_vc_t

0xb86a,	// (0x0002ab93) slider_set_pane_vc

0x8b17,	// (0x00027e40) volume_set_pane_vc_g1

0x8e12,	// (0x0002813b) volume_set_pane_vc_g2

0x8e1b,	// (0x00028144) volume_set_pane_vc_g3

0x8e24,	// (0x0002814d) volume_set_pane_vc_g4

0x8e2d,	// (0x00028156) volume_set_pane_vc_g5

0x8e36,	// (0x0002815f) volume_set_pane_vc_g6

0x8e3f,	// (0x00028168) volume_set_pane_vc_g7

0x8e48,	// (0x00028171) volume_set_pane_vc_g8

0x8e51,	// (0x0002817a) volume_set_pane_vc_g9

0x8e5a,	// (0x00028183) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0002ed39) volume_set_pane_vc_g

0xb872,	// (0x0002ab9b) volume_set_pane_vc

0xb87a,	// (0x0002aba3) button_value_adjust_pane_cp1_vc

0xb884,	// (0x0002abad) list_highlight_pane_cp2_vc

0xb88d,	// (0x0002abb6) list_set_pane_vc_ParamLimits

0xb88d,	// (0x0002abb6) list_set_pane_vc

0xb8eb,	// (0x0002ac14) main_pane_set_vc_t1_ParamLimits

0xb8eb,	// (0x0002ac14) main_pane_set_vc_t1

0xb900,	// (0x0002ac29) main_pane_set_vc_t2_ParamLimits

0xb900,	// (0x0002ac29) main_pane_set_vc_t2

0xb912,	// (0x0002ac3b) main_pane_set_vc_t3_ParamLimits

0xb912,	// (0x0002ac3b) main_pane_set_vc_t3

0xb924,	// (0x0002ac4d) main_pane_set_vc_t4_ParamLimits

0xb924,	// (0x0002ac4d) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0002ed4e) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0002ed4e) main_pane_set_vc_t

0xb936,	// (0x0002ac5f) setting_code_pane_vc_ParamLimits

0xb936,	// (0x0002ac5f) setting_code_pane_vc

0xb945,	// (0x0002ac6e) setting_slider_graphic_pane_vc

0xb945,	// (0x0002ac6e) setting_slider_pane_vc

0xb945,	// (0x0002ac6e) setting_text_pane_vc

0xb945,	// (0x0002ac6e) setting_volume_pane_vc

0xb94d,	// (0x0002ac76) scroll_pane_cp121_vc

0x1bfa,	// (0x00020f23) set_content_pane_vc

0xb955,	// (0x0002ac7e) button_value_adjust_pane_g1

0xb95e,	// (0x0002ac87) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0002edb1) button_value_adjust_pane_g

0xb967,	// (0x0002ac90) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb967,	// (0x0002ac90) form_field_slider_wide_pane_vc_t1

0xb97b,	// (0x0002aca4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb97b,	// (0x0002aca4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0002edb6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002edb6) form_field_slider_wide_pane_vc_t

0x180b,	// (0x00020b34) input_focus_pane_cp10_vc_ParamLimits

0x180b,	// (0x00020b34) input_focus_pane_cp10_vc

0xb9a9,	// (0x0002acd2) slider_cont_pane_cp1_vc_ParamLimits

0xb9a9,	// (0x0002acd2) slider_cont_pane_cp1_vc

0xb9bb,	// (0x0002ace4) slider_form_pane_g1_cp2

0xb7ef,	// (0x0002ab18) slider_form_pane_g2_cp2

0xb9e8,	// (0x0002ad11) form_field_slider_pane_vc_t3

0xb9f6,	// (0x0002ad1f) form_field_slider_pane_vc_t4

0xba04,	// (0x0002ad2d) slider_form_pane_vc_ParamLimits

0xba04,	// (0x0002ad2d) slider_form_pane_vc

0xba11,	// (0x0002ad3a) form_field_slider_pane_vc_t1_ParamLimits

0xba11,	// (0x0002ad3a) form_field_slider_pane_vc_t1

0xb97b,	// (0x0002aca4) form_field_slider_pane_vc_t2_ParamLimits

0xb97b,	// (0x0002aca4) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002edc8) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002edc8) form_field_slider_pane_vc_t

0x180b,	// (0x00020b34) input_focus_pane_cp9_vc_ParamLimits

0x180b,	// (0x00020b34) input_focus_pane_cp9_vc

0xba2d,	// (0x0002ad56) slider_cont_pane_vc_ParamLimits

0xba2d,	// (0x0002ad56) slider_cont_pane_vc

0xba41,	// (0x0002ad6a) list_form_graphic_pane_cp_vc_ParamLimits

0xba41,	// (0x0002ad6a) list_form_graphic_pane_cp_vc

0x8aae,	// (0x00027dd7) form_field_popup_wide_pane_vc_g1

0xba56,	// (0x0002ad7f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba56,	// (0x0002ad7f) form_field_popup_wide_pane_vc_t1

0x1c43,	// (0x00020f6c) input_focus_pane_cp8_vc_ParamLimits

0x1c43,	// (0x00020f6c) input_focus_pane_cp8_vc

0xba9b,	// (0x0002adc4) list_form_wide_pane_vc_ParamLimits

0xba9b,	// (0x0002adc4) list_form_wide_pane_vc

0xbaa7,	// (0x0002add0) list_form_graphic_pane_vc_g1

0xbaaf,	// (0x0002add8) list_form_graphic_pane_vc_t1_ParamLimits

0xbaaf,	// (0x0002add8) list_form_graphic_pane_vc_t1

0x1819,	// (0x00020b42) list_highlight_pane_cp5_vc_ParamLimits

0x1819,	// (0x00020b42) list_highlight_pane_cp5_vc

0xbacb,	// (0x0002adf4) list_form_graphic_pane_vc_ParamLimits

0xbacb,	// (0x0002adf4) list_form_graphic_pane_vc

0x8aae,	// (0x00027dd7) form_field_popup_pane_vc_g1

0xbae1,	// (0x0002ae0a) form_field_popup_pane_vc_t1_ParamLimits

0xbae1,	// (0x0002ae0a) form_field_popup_pane_vc_t1

0x1c43,	// (0x00020f6c) input_focus_pane_cp7_vc_ParamLimits

0x1c43,	// (0x00020f6c) input_focus_pane_cp7_vc

0xbaf8,	// (0x0002ae21) list_form_pane_vc_ParamLimits

0xbaf8,	// (0x0002ae21) list_form_pane_vc

0xbb04,	// (0x0002ae2d) data_form_pane_vc_t1_ParamLimits

0xbb04,	// (0x0002ae2d) data_form_pane_vc_t1

0x1d09,	// (0x00021032) input_focus_pane_vc_g1

0x1d11,	// (0x0002103a) input_focus_pane_vc_g2

0x1d19,	// (0x00021042) input_focus_pane_vc_g3

0x1d21,	// (0x0002104a) input_focus_pane_vc_g4

0x1d29,	// (0x00021052) input_focus_pane_vc_g5

0x1d31,	// (0x0002105a) input_focus_pane_vc_g6

0x1d39,	// (0x00021062) input_focus_pane_vc_g7

0x1d41,	// (0x0002106a) input_focus_pane_vc_g8

0x1d49,	// (0x00021072) input_focus_pane_vc_g9

0x17b3,	// (0x00020adc) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0002e9ab) input_focus_pane_vc_g

0x8aa2,	// (0x00027dcb) data_form_pane_vc_ParamLimits

0x8aa2,	// (0x00027dcb) data_form_pane_vc

0x8aae,	// (0x00027dd7) form_field_data_pane_vc_g1

0xbb1f,	// (0x0002ae48) form_field_data_pane_vc_t1_ParamLimits

0xbb1f,	// (0x0002ae48) form_field_data_pane_vc_t1

0x1c43,	// (0x00020f6c) input_focus_pane_vc_ParamLimits

0x1c43,	// (0x00020f6c) input_focus_pane_vc

0xbb39,	// (0x0002ae62) button_value_adjust_pane_cp3_vc

0xbb41,	// (0x0002ae6a) button_value_adjust_pane_cp5_vc

0xbb49,	// (0x0002ae72) form_field_data_pane_vc_ParamLimits

0xbb49,	// (0x0002ae72) form_field_data_pane_vc

0xbb60,	// (0x0002ae89) form_field_data_pane_vc_cp2

0xbb68,	// (0x0002ae91) form_field_data_wide_pane_vc_ParamLimits

0xbb68,	// (0x0002ae91) form_field_data_wide_pane_vc

0xbb7e,	// (0x0002aea7) form_field_data_wide_pane_vc_cp2

0xbb86,	// (0x0002aeaf) form_field_popup_pane_vc_ParamLimits

0xbb86,	// (0x0002aeaf) form_field_popup_pane_vc

0xbb9d,	// (0x0002aec6) form_field_popup_wide_pane_vc_ParamLimits

0xbb9d,	// (0x0002aec6) form_field_popup_wide_pane_vc

0xbbb3,	// (0x0002aedc) form_field_slider_pane_vc_ParamLimits

0xbbb3,	// (0x0002aedc) form_field_slider_pane_vc

0xbbc6,	// (0x0002aeef) form_field_slider_wide_pane_vc_ParamLimits

0xbbc6,	// (0x0002aeef) form_field_slider_wide_pane_vc

0xbbd9,	// (0x0002af02) grid_touch_1_pane_ParamLimits

0xbbd9,	// (0x0002af02) grid_touch_1_pane

0xbbe5,	// (0x0002af0e) grid_touch_2_pane_ParamLimits

0xbbe5,	// (0x0002af0e) grid_touch_2_pane

0x7c51,	// (0x00026f7a) touch_pane_g1_ParamLimits

0x7c51,	// (0x00026f7a) touch_pane_g1

0xbbfd,	// (0x0002af26) cell_app_pane_cp_wide_ParamLimits

0xbbfd,	// (0x0002af26) cell_app_pane_cp_wide

0xbc0e,	// (0x0002af37) grid_popup_fast_wide_pane_ParamLimits

0xbc0e,	// (0x0002af37) grid_popup_fast_wide_pane

0xbc22,	// (0x0002af4b) scroll_pane_cp19_ParamLimits

0xbc22,	// (0x0002af4b) scroll_pane_cp19

0x17bd,	// (0x00020ae6) bg_popup_window_pane_cp20

0xbc36,	// (0x0002af5f) listscroll_popup_fast_wide_pane

0x1819,	// (0x00020b42) grid_indicator_nsta_pane

0xbc3e,	// (0x0002af67) clock_nsta_pane_g1

0xbc47,	// (0x0002af70) clock_nsta_pane_t1

0xbc63,	// (0x0002af8c) cell_indicator_nsta_pane_ParamLimits

0xbc63,	// (0x0002af8c) cell_indicator_nsta_pane

0xbc94,	// (0x0002afbd) cell_indicator_nsta_pane_g1

0xbca2,	// (0x0002afcb) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0002edd9) cell_indicator_nsta_pane_g

0xbcaf,	// (0x0002afd8) clock_nsta_pane_cp

0xbcb8,	// (0x0002afe1) indicator_nsta_pane_cp

0xbcc0,	// (0x0002afe9) nsta_clock_indic_pane_g1

0x186f,	// (0x00020b98) grid_indicator_pane

0x72c8,	// (0x000265f1) scroll_pane_cp29

0x74c8,	// (0x000267f1) indicator_nsta_pane_cp2_ParamLimits

0x74c8,	// (0x000267f1) indicator_nsta_pane_cp2

0x1819,	// (0x00020b42) main_apps_wheel_pane

0x9f6f,	// (0x00029298) form_midp_field_text_pane_ParamLimits

0xa0b8,	// (0x000293e1) scroll_bar_cp050_ParamLimits

0xbd10,	// (0x0002b039) cell_indicator_pane_ParamLimits

0xbd10,	// (0x0002b039) cell_indicator_pane

0xbd29,	// (0x0002b052) cell_indicator_pane_g1

0xbd33,	// (0x0002b05c) grid_wheel_folder_pane_ParamLimits

0xbd33,	// (0x0002b05c) grid_wheel_folder_pane

0xbd49,	// (0x0002b072) list_wheel_apps_pane_ParamLimits

0xbd49,	// (0x0002b072) list_wheel_apps_pane

0xbd5a,	// (0x0002b083) main_apps_wheel_pane_g1_ParamLimits

0xbd5a,	// (0x0002b083) main_apps_wheel_pane_g1

0xbd6e,	// (0x0002b097) main_apps_wheel_pane_g2_ParamLimits

0xbd6e,	// (0x0002b097) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0002edf5) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0002edf5) main_apps_wheel_pane_g

0xbd86,	// (0x0002b0af) main_apps_wheel_pane_t1_ParamLimits

0xbd86,	// (0x0002b0af) main_apps_wheel_pane_t1

0xbda9,	// (0x0002b0d2) list_wheel_apps_pane_g1

0xbdb1,	// (0x0002b0da) list_wheel_apps_pane_g2

0xbdb9,	// (0x0002b0e2) list_wheel_apps_pane_g3

0xbdc3,	// (0x0002b0ec) list_wheel_apps_pane_g4

0xbdcd,	// (0x0002b0f6) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0002edfa) list_wheel_apps_pane_g

0x7717,	// (0x00026a40) navi_icon_text_pane

0x83ad,	// (0x000276d6) aid_fill_nsta

0xbdf0,	// (0x0002b119) navi_icon_text_pane_g1

0xbdfc,	// (0x0002b125) navi_icon_text_pane_t1

0x3c08,	// (0x00022f31) list_set_graphic_pane_t1_ParamLimits

0x3c08,	// (0x00022f31) list_set_graphic_pane_t1

0xa7fb,	// (0x00029b24) popup_midp_note_alarm_window_t6_ParamLimits

0xa7fb,	// (0x00029b24) popup_midp_note_alarm_window_t6

0xa80d,	// (0x00029b36) popup_midp_note_alarm_window_t7_ParamLimits

0xa80d,	// (0x00029b36) popup_midp_note_alarm_window_t7

0xa81f,	// (0x00029b48) popup_midp_note_alarm_window_t8_ParamLimits

0xa81f,	// (0x00029b48) popup_midp_note_alarm_window_t8

0xa831,	// (0x00029b5a) popup_midp_note_alarm_window_t9_ParamLimits

0xa831,	// (0x00029b5a) popup_midp_note_alarm_window_t9

0xa843,	// (0x00029b6c) popup_midp_note_alarm_window_t10_ParamLimits

0xa843,	// (0x00029b6c) popup_midp_note_alarm_window_t10

0xa855,	// (0x00029b7e) popup_midp_note_alarm_window_t11_ParamLimits

0xa855,	// (0x00029b7e) popup_midp_note_alarm_window_t11

0xa867,	// (0x00029b90) scroll_pane_cp17_ParamLimits

0xa867,	// (0x00029b90) scroll_pane_cp17

0x8b17,	// (0x00027e40) volume_small_pane_cp_g1

0x8e63,	// (0x0002818c) volume_small_pane_cp_g2

0x8e6c,	// (0x00028195) volume_small_pane_cp_g3

0x8e75,	// (0x0002819e) volume_small_pane_cp_g4

0x8e7e,	// (0x000281a7) volume_small_pane_cp_g5

0x8e2d,	// (0x00028156) volume_small_pane_cp_g6

0x8e87,	// (0x000281b0) volume_small_pane_cp_g7

0x8e90,	// (0x000281b9) volume_small_pane_cp_g8

0x8e99,	// (0x000281c2) volume_small_pane_cp_g9

0x8ea2,	// (0x000281cb) volume_small_pane_cp_g10

0x7978,	// (0x00026ca1) midp_ticker_pane_g1_ParamLimits

0x7984,	// (0x00026cad) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0002ea77) midp_ticker_pane_g_ParamLimits

0x7990,	// (0x00026cb9) midp_ticker_pane_t1_ParamLimits

0x83c3,	// (0x000276ec) aid_fill_nsta_2

0xa0a4,	// (0x000293cd) list_form2_midp_pane

0xb1af,	// (0x0002a4d8) midp_editing_number_pane_ParamLimits

0xb1be,	// (0x0002a4e7) midp_ticker_pane_ParamLimits

0xbe0e,	// (0x0002b137) form2_midp_field_pane

0xbe32,	// (0x0002b15b) scroll_pane_cp51

0xbe52,	// (0x0002b17b) form2_midp_button_pane_ParamLimits

0xbe52,	// (0x0002b17b) form2_midp_button_pane

0xbe64,	// (0x0002b18d) form2_midp_content_pane_ParamLimits

0xbe64,	// (0x0002b18d) form2_midp_content_pane

0xbe7e,	// (0x0002b1a7) form2_midp_field_choice_group_pane

0xbe86,	// (0x0002b1af) form2_midp_field_pane_g1

0xbe8e,	// (0x0002b1b7) form2_midp_field_pane_g2

0xbe96,	// (0x0002b1bf) form2_midp_field_pane_g3

0xbe9e,	// (0x0002b1c7) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0002ee1f) form2_midp_field_pane_g

0xbea6,	// (0x0002b1cf) form2_midp_gauge_slider_pane

0xbeae,	// (0x0002b1d7) form2_midp_gauge_wait_pane

0xbeb6,	// (0x0002b1df) form2_midp_image_pane_ParamLimits

0xbeb6,	// (0x0002b1df) form2_midp_image_pane

0xbed1,	// (0x0002b1fa) form2_midp_label_pane_ParamLimits

0xbed1,	// (0x0002b1fa) form2_midp_label_pane

0xbeea,	// (0x0002b213) form2_midp_label_pane_cp_ParamLimits

0xbeea,	// (0x0002b213) form2_midp_label_pane_cp

0xbf0b,	// (0x0002b234) form2_midp_string_pane_ParamLimits

0xbf0b,	// (0x0002b234) form2_midp_string_pane

0x613e,	// (0x00025467) form2_midp_text_pane_ParamLimits

0x613e,	// (0x00025467) form2_midp_text_pane

0xbf1d,	// (0x0002b246) form2_midp_time_pane

0xbf2d,	// (0x0002b256) input_focus_pane_cp51_ParamLimits

0xbf2d,	// (0x0002b256) input_focus_pane_cp51

0xbf45,	// (0x0002b26e) form2_midp_label_pane_t1_ParamLimits

0xbf45,	// (0x0002b26e) form2_midp_label_pane_t1

0x6157,	// (0x00025480) form2_mdip_text_pane_t1_ParamLimits

0x6157,	// (0x00025480) form2_mdip_text_pane_t1

0x6175,	// (0x0002549e) form2_midp_time_pane_t1

0xbf8e,	// (0x0002b2b7) form2_midp_gauge_slider_pane_t1

0xbfa0,	// (0x0002b2c9) form2_midp_gauge_slider_pane_t2

0xbfb2,	// (0x0002b2db) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0002ee28) form2_midp_gauge_slider_pane_t

0xbfc4,	// (0x0002b2ed) form2_midp_slider_pane

0xbfd0,	// (0x0002b2f9) form2_midp_gauge_wait_pane_t1

0xbfde,	// (0x0002b307) form2_midp_wait_pane_ParamLimits

0xbfde,	// (0x0002b307) form2_midp_wait_pane

0xc009,	// (0x0002b332) list_single_2graphic_pane_cp4_ParamLimits

0xc009,	// (0x0002b332) list_single_2graphic_pane_cp4

0x9dc0,	// (0x000290e9) list_single_midp_graphic_pane_cp_ParamLimits

0x9dc0,	// (0x000290e9) list_single_midp_graphic_pane_cp

0x17bd,	// (0x00020ae6) list_highlight_pane_cp20

0xc031,	// (0x0002b35a) list_single_2graphic_pane_g1_cp4

0xb639,	// (0x0002a962) list_single_2graphic_pane_g2_cp4

0xc039,	// (0x0002b362) list_single_2graphic_pane_t1_cp4

0x1819,	// (0x00020b42) list_highlight_pane_cp21

0xc048,	// (0x0002b371) list_single_midp_graphic_pane_g4_cp

0xc057,	// (0x0002b380) list_single_midp_graphic_pane_t1_cp

0xc06c,	// (0x0002b395) form2_mdip_string_pane_t1_ParamLimits

0xc06c,	// (0x0002b395) form2_mdip_string_pane_t1

0x17bd,	// (0x00020ae6) bg_wml_button_pane_cp2

0x17b3,	// (0x00020adc) form2_midp_image_pane_g1

0x5646,	// (0x0002496f) list_double_large_graphic_pane_g5_ParamLimits

0x5646,	// (0x0002496f) list_double_large_graphic_pane_g5

0x789f,	// (0x00026bc8) midp_form_pane_ParamLimits

0x1819,	// (0x00020b42) main_apps_wheel_pane_ParamLimits

0x8195,	// (0x000274be) popup_preview_window_ParamLimits

0x8195,	// (0x000274be) popup_preview_window

0x8350,	// (0x00027679) popup_touch_info_window_ParamLimits

0x8350,	// (0x00027679) popup_touch_info_window

0x836e,	// (0x00027697) popup_touch_menu_window_ParamLimits

0x836e,	// (0x00027697) popup_touch_menu_window

0x17a9,	// (0x00020ad2) bg_popup_sub_pane_cp6

0xc173,	// (0x0002b49c) list_touch_menu_pane

0xc17b,	// (0x0002b4a4) list_single_touch_menu_pane_ParamLimits

0xc17b,	// (0x0002b4a4) list_single_touch_menu_pane

0xc191,	// (0x0002b4ba) list_single_touch_menu_pane_t1

0x1819,	// (0x00020b42) bg_popup_sub_pane_cp7_ParamLimits

0x1819,	// (0x00020b42) bg_popup_sub_pane_cp7

0xc19f,	// (0x0002b4c8) heading_sub_pane

0xc1a7,	// (0x0002b4d0) list_touch_info_pane_ParamLimits

0xc1a7,	// (0x0002b4d0) list_touch_info_pane

0xc1b6,	// (0x0002b4df) list_single_touch_info_pane_ParamLimits

0xc1b6,	// (0x0002b4df) list_single_touch_info_pane

0xc1c8,	// (0x0002b4f1) list_single_touch_info_pane_t1

0xc1d6,	// (0x0002b4ff) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0002ee36) list_single_touch_info_pane_t

0x7897,	// (0x00026bc0) bg_popup_heading_pane_cp

0xc1e4,	// (0x0002b50d) heading_sub_pane_t1

0x89b4,	// (0x00027cdd) bg_popup_preview_window_pane_cp_ParamLimits

0x89b4,	// (0x00027cdd) bg_popup_preview_window_pane_cp

0xc19f,	// (0x0002b4c8) heading_preview_pane

0xc1a7,	// (0x0002b4d0) list_preview_pane_ParamLimits

0xc1a7,	// (0x0002b4d0) list_preview_pane

0xc1f2,	// (0x0002b51b) popup_preview_window_g1

0xc1b6,	// (0x0002b4df) list_single_preview_pane_ParamLimits

0xc1b6,	// (0x0002b4df) list_single_preview_pane

0xc1fa,	// (0x0002b523) list_single_preview_pane_g1

0xc202,	// (0x0002b52b) list_single_preview_pane_t1

0xc1c8,	// (0x0002b4f1) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0002ee3b) list_single_preview_pane_t

0xc210,	// (0x0002b539) bg_popup_heading_pane_cp2_ParamLimits

0xc210,	// (0x0002b539) bg_popup_heading_pane_cp2

0xc226,	// (0x0002b54f) heading_preview_pane_g1

0xc22e,	// (0x0002b557) heading_preview_pane_t1_ParamLimits

0xc22e,	// (0x0002b557) heading_preview_pane_t1

0x1886,	// (0x00020baf) soft_indicator_pane_t1_ParamLimits

0x1b61,	// (0x00020e8a) scroll_pane_ParamLimits

0x1fc0,	// (0x000212e9) scroll_sc2_left_pane

0x1fb7,	// (0x000212e0) scroll_sc2_right_pane

0x1fdf,	// (0x00021308) scroll_bg_pane_g1_ParamLimits

0x1ff4,	// (0x0002131d) scroll_bg_pane_g2_ParamLimits

0x200c,	// (0x00021335) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0002ea02) scroll_bg_pane_g_ParamLimits

0x1fdf,	// (0x00021308) scroll_handle_pane_g1_ParamLimits

0x2021,	// (0x0002134a) scroll_handle_pane_g2_ParamLimits

0x200c,	// (0x00021335) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0002ea09) scroll_handle_pane_g_ParamLimits

0x7e18,	// (0x00027141) popup_choice_list_window_ParamLimits

0x7e18,	// (0x00027141) popup_choice_list_window

0x87e2,	// (0x00027b0b) choice_list_pane

0x8894,	// (0x00027bbd) cell_toolbar_pane_t1

0x88bc,	// (0x00027be5) toolbar_button_pane_ParamLimits

0xad21,	// (0x0002a04a) ai_gene_pane_1_t2_ParamLimits

0xad21,	// (0x0002a04a) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0002ec2c) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0002ec2c) ai_gene_pane_1_t

0xc24b,	// (0x0002b574) scroll_sc2_left_pane_g1

0xc24b,	// (0x0002b574) scroll_sc2_right_pane_g1

0x7dce,	// (0x000270f7) bg_popup_sub_pane_cp10

0xc255,	// (0x0002b57e) list_choice_list_pane

0xc26e,	// (0x0002b597) list_single_choice_list_pane_ParamLimits

0xc26e,	// (0x0002b597) list_single_choice_list_pane

0xc281,	// (0x0002b5aa) list_single_choice_list_pane_g1

0x6f6f,	// (0x00026298) list_single_choice_list_pane_t1_ParamLimits

0x6f6f,	// (0x00026298) list_single_choice_list_pane_t1

0xc289,	// (0x0002b5b2) choice_list_pane_g1

0xc291,	// (0x0002b5ba) choice_list_pane_t1

0x17a9,	// (0x00020ad2) input_focus_pane_cp11

0x1f2c,	// (0x00021255) title_pane_stacon_g2_ParamLimits

0x1f2c,	// (0x00021255) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0002e9e8) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002e9e8) title_pane_stacon_g

0x7897,	// (0x00026bc0) cursor_press_pane

0x7ec0,	// (0x000271e9) popup_fep_hwr_window_ParamLimits

0x7ec0,	// (0x000271e9) popup_fep_hwr_window

0x7f38,	// (0x00027261) popup_fep_vkb_window_ParamLimits

0x7f38,	// (0x00027261) popup_fep_vkb_window

0xc29f,	// (0x0002b5c8) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0002ee64) fep_vkb_side_pane_g_ParamLimits

0x8ee4,	// (0x0002820d) fep_hwr_candidate_pane_ParamLimits

0x8ee4,	// (0x0002820d) fep_hwr_candidate_pane

0x8f0e,	// (0x00028237) fep_hwr_side_pane_ParamLimits

0x8f0e,	// (0x00028237) fep_hwr_side_pane

0x8f2e,	// (0x00028257) fep_hwr_top_pane_ParamLimits

0x8f2e,	// (0x00028257) fep_hwr_top_pane

0x8f46,	// (0x0002826f) fep_hwr_write_pane_ParamLimits

0x8f46,	// (0x0002826f) fep_hwr_write_pane

0xfb3b,	// (0x0002ee64) fep_vkb_side_pane_g

0xc2a7,	// (0x0002b5d0) fep_hwr_top_pane_g1

0xc2b9,	// (0x0002b5e2) fep_hwr_top_pane_g2

0x8f72,	// (0x0002829b) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0002ee40) fep_hwr_top_pane_g

0x8f87,	// (0x000282b0) fep_hwr_top_text_pane

0x20e4,	// (0x0002140d) fep_hwr_top_text_pane_g1

0xc2ef,	// (0x0002b618) fep_hwr_top_text_pane_t1

0x907d,	// (0x000283a6) fep_hwr_candidate_pane_g1

0xc534,	// (0x0002b85d) fep_vkb_keypad_pane_g3_ParamLimits

0xc534,	// (0x0002b85d) fep_vkb_keypad_pane_g3

0xc55c,	// (0x0002b885) fep_vkb_keypad_pane_g4_ParamLimits

0xc55c,	// (0x0002b885) fep_vkb_keypad_pane_g4

0xc5cb,	// (0x0002b8f4) fep_vkb_bottom_pane_g2_ParamLimits

0xc5cb,	// (0x0002b8f4) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0002ee6b) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0002ee6b) fep_vkb_bottom_pane_g

0xc24b,	// (0x0002b574) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0002ee75) cell_vkb_side_pane_g

0xc656,	// (0x0002b97f) cell_vkb_side_pane_t1

0xc664,	// (0x0002b98d) cell_vkb_side_pane_t1_copy1

0xc24b,	// (0x0002b574) bg_fep_vkb_candidate_pane_g2

0xc790,	// (0x0002bab9) cell_vkb_candidate_pane_ParamLimits

0xc2fd,	// (0x0002b626) aid_size_cell_vkb_ParamLimits

0xc2fd,	// (0x0002b626) aid_size_cell_vkb

0xc790,	// (0x0002bab9) cell_vkb_candidate_pane

0x9097,	// (0x000283c0) bg_popup_fep_shadow_pane_g1

0xc38b,	// (0x0002b6b4) fep_vkb_bottom_pane_ParamLimits

0xc38b,	// (0x0002b6b4) fep_vkb_bottom_pane

0xc3c1,	// (0x0002b6ea) fep_vkb_candidate_pane_ParamLimits

0xc3c1,	// (0x0002b6ea) fep_vkb_candidate_pane

0xc3dd,	// (0x0002b706) fep_vkb_keypad_pane_ParamLimits

0xc3dd,	// (0x0002b706) fep_vkb_keypad_pane

0xc41c,	// (0x0002b745) fep_vkb_side_pane_ParamLimits

0xc41c,	// (0x0002b745) fep_vkb_side_pane

0xc458,	// (0x0002b781) fep_vkb_top_pane_ParamLimits

0xc458,	// (0x0002b781) fep_vkb_top_pane

0xc48d,	// (0x0002b7b6) fep_vkb_top_pane_g1_ParamLimits

0xc48d,	// (0x0002b7b6) fep_vkb_top_pane_g1

0xc49c,	// (0x0002b7c5) fep_vkb_top_pane_g2_ParamLimits

0xc49c,	// (0x0002b7c5) fep_vkb_top_pane_g2

0xc4ab,	// (0x0002b7d4) fep_vkb_top_pane_g3_ParamLimits

0xc4ab,	// (0x0002b7d4) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0002ee5b) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0002ee5b) fep_vkb_top_pane_g

0xc4c9,	// (0x0002b7f2) fep_vkb_top_text_pane_ParamLimits

0xc4c9,	// (0x0002b7f2) fep_vkb_top_text_pane

0xc4da,	// (0x0002b803) fep_vkb_side_pane_g1_ParamLimits

0xc4da,	// (0x0002b803) fep_vkb_side_pane_g1

0xc523,	// (0x0002b84c) grid_vkb_side_pane_ParamLimits

0xc523,	// (0x0002b84c) grid_vkb_side_pane

0x909f,	// (0x000283c8) bg_popup_fep_shadow_pane_g2

0x90a8,	// (0x000283d1) bg_popup_fep_shadow_pane_g3

0x90b0,	// (0x000283d9) bg_popup_fep_shadow_pane_g4

0x90b9,	// (0x000283e2) bg_popup_fep_shadow_pane_g5

0x90c3,	// (0x000283ec) bg_popup_fep_shadow_pane_g6

0x90cb,	// (0x000283f4) bg_popup_fep_shadow_pane_g7

0x1d29,	// (0x00021052) bg_popup_fep_shadow_pane_g8

0xc57a,	// (0x0002b8a3) grid_vkb_keypad_number_pane_ParamLimits

0xc57a,	// (0x0002b8a3) grid_vkb_keypad_number_pane

0xc58a,	// (0x0002b8b3) grid_vkb_keypad_pane_ParamLimits

0xc58a,	// (0x0002b8b3) grid_vkb_keypad_pane

0xc5b0,	// (0x0002b8d9) fep_vkb_bottom_pane_g1_ParamLimits

0xc5b0,	// (0x0002b8d9) fep_vkb_bottom_pane_g1

0xc5d9,	// (0x0002b902) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5d9,	// (0x0002b902) grid_vkb_keypad_bottom_left_pane

0xc5ee,	// (0x0002b917) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5ee,	// (0x0002b917) grid_vkb_keypad_bottom_right_pane

0xc603,	// (0x0002b92c) fep_vkb_top_text_pane_g1

0xc61e,	// (0x0002b947) fep_vkb_top_text_pane_t1

0xc633,	// (0x0002b95c) cell_vkb_side_pane_ParamLimits

0xc633,	// (0x0002b95c) cell_vkb_side_pane

0xc24b,	// (0x0002b574) cell_vkb_side_pane_g1

0xc672,	// (0x0002b99b) cell_vkb_keypad_pane_ParamLimits

0xc672,	// (0x0002b99b) cell_vkb_keypad_pane

0xc6e7,	// (0x0002ba10) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0002ee88) bg_popup_fep_shadow_pane_g

0xc24b,	// (0x0002b574) cell_hwr_side_pane_g1

0xc24b,	// (0x0002b574) cell_hwr_side_pane_g2

0xc6f1,	// (0x0002ba1a) cell_vkb_keypad_pane_t1

0xc6ff,	// (0x0002ba28) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6ff,	// (0x0002ba28) cell_vkb_keypad_bottom_left_pane

0xc71c,	// (0x0002ba45) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc71c,	// (0x0002ba45) cell_vkb_keypad_bottom_right_pane

0xc24b,	// (0x0002b574) cell_vkb_keypad_bottom_left_pane_g1

0xc24b,	// (0x0002b574) cell_vkb_keypad_bottom_right_pane_g1

0xc755,	// (0x0002ba7e) cell_vkb_keypad_number_pane_ParamLimits

0xc755,	// (0x0002ba7e) cell_vkb_keypad_number_pane

0xc774,	// (0x0002ba9d) cell_vkb_keypad_number_pane_g1

0xc77e,	// (0x0002baa7) cell_vkb_keypad_number_pane_g2

0xc787,	// (0x0002bab0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0002ee7a) cell_vkb_keypad_number_pane_g

0xc6f1,	// (0x0002ba1a) cell_vkb_keypad_number_pane_t1

0xc7ab,	// (0x0002bad4) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x0002ee75) cell_hwr_side_pane_g

0xc7c4,	// (0x0002baed) cell_hwr_side_pane_t1

0x90dd,	// (0x00028406) cell_hwr_side_pane_t1_copy1

0xc4bb,	// (0x0002b7e4) cell_hwr_candidate_pane_g1

0x90eb,	// (0x00028414) cell_hwr_candidate_pane_t1

0xc24b,	// (0x0002b574) cell_vkb_candidate_pane_g2

0xc84a,	// (0x0002bb73) cell_vkb_candidate_pane_t1

0x8eab,	// (0x000281d4) bg_popup_fep_shadow_pane_ParamLimits

0x8eab,	// (0x000281d4) bg_popup_fep_shadow_pane

0x1779,	// (0x00020aa2) bg_fep_hwr_top_pane_g4

0xc2cb,	// (0x0002b5f4) bg_hwr_side_pane_g1_ParamLimits

0xc2cb,	// (0x0002b5f4) bg_hwr_side_pane_g1

0x8fc3,	// (0x000282ec) cell_hwr_side_pane_ParamLimits

0x8fc3,	// (0x000282ec) cell_hwr_side_pane

0x8ffe,	// (0x00028327) fep_hwr_write_pane_g1_ParamLimits

0x8ffe,	// (0x00028327) fep_hwr_write_pane_g1

0x900b,	// (0x00028334) fep_hwr_write_pane_g2_ParamLimits

0x900b,	// (0x00028334) fep_hwr_write_pane_g2

0x9018,	// (0x00028341) fep_hwr_write_pane_g3_ParamLimits

0x9018,	// (0x00028341) fep_hwr_write_pane_g3

0x9026,	// (0x0002834f) fep_hwr_write_pane_g4_ParamLimits

0x9026,	// (0x0002834f) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0002ee47) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0002ee47) fep_hwr_write_pane_g

0x1779,	// (0x00020aa2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1779,	// (0x00020aa2) bg_fep_hwr_candidate_pane_g2

0x903b,	// (0x00028364) cell_hwr_candidate_pane_ParamLimits

0x903b,	// (0x00028364) cell_hwr_candidate_pane

0x907d,	// (0x000283a6) fep_hwr_candidate_pane_g1_ParamLimits

0xc32b,	// (0x0002b654) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc32b,	// (0x0002b654) bg_popup_fep_shadow_pane_cp2

0xc4bb,	// (0x0002b7e4) fep_vkb_top_pane_g4_ParamLimits

0xc4bb,	// (0x0002b7e4) fep_vkb_top_pane_g4

0xc501,	// (0x0002b82a) fep_vkb_side_pane_g2_ParamLimits

0xc501,	// (0x0002b82a) fep_vkb_side_pane_g2

0x5769,	// (0x00024a92) list_setting_pane_t4_ParamLimits

0x5769,	// (0x00024a92) list_setting_pane_t4

0x57fb,	// (0x00024b24) list_setting_number_pane_t5_ParamLimits

0x57fb,	// (0x00024b24) list_setting_number_pane_t5

0x72f7,	// (0x00026620) list_double_heading_pane_cp2_ParamLimits

0x72f7,	// (0x00026620) list_double_heading_pane_cp2

0xc858,	// (0x0002bb81) list_double_heading_pane_g1_cp2_ParamLimits

0xc858,	// (0x0002bb81) list_double_heading_pane_g1_cp2

0xc864,	// (0x0002bb8d) list_double_heading_pane_g2_cp2_ParamLimits

0xc864,	// (0x0002bb8d) list_double_heading_pane_g2_cp2

0xc878,	// (0x0002bba1) list_double_heading_pane_t1_cp2_ParamLimits

0xc878,	// (0x0002bba1) list_double_heading_pane_t1_cp2

0xc88e,	// (0x0002bbb7) list_double_heading_pane_t2_cp2_ParamLimits

0xc88e,	// (0x0002bbb7) list_double_heading_pane_t2_cp2

0x17a1,	// (0x00020aca) aid_value_unit2

0x67f9,	// (0x00025b22) popup_preview_fixed_window

0x195d,	// (0x00020c86) bg_popup_preview_window_pane_cp02

0xc8a0,	// (0x0002bbc9) list_preview_fixed_pane

0xc8e6,	// (0x0002bc0f) list_empty_pane_fp_ParamLimits

0xc8e6,	// (0x0002bc0f) list_empty_pane_fp

0xc8e6,	// (0x0002bc0f) list_single_cale_day_pane_fp_ParamLimits

0xc8e6,	// (0x0002bc0f) list_single_cale_day_pane_fp

0xc8e6,	// (0x0002bc0f) list_single_graphic_heading_pane_fp_ParamLimits

0xc8e6,	// (0x0002bc0f) list_single_graphic_heading_pane_fp

0xc8e6,	// (0x0002bc0f) list_single_graphic_pane_fp_ParamLimits

0xc8e6,	// (0x0002bc0f) list_single_graphic_pane_fp

0xc8e6,	// (0x0002bc0f) list_single_heading_pane_fp_ParamLimits

0xc8e6,	// (0x0002bc0f) list_single_heading_pane_fp

0xc8e6,	// (0x0002bc0f) list_single_pane_fp_ParamLimits

0xc8e6,	// (0x0002bc0f) list_single_pane_fp

0xc8fc,	// (0x0002bc25) list_single_pane_fp_g1_ParamLimits

0xc8fc,	// (0x0002bc25) list_single_pane_fp_g1

0x5734,	// (0x00024a5d) list_single_pane_fp_g2_ParamLimits

0x5734,	// (0x00024a5d) list_single_pane_fp_g2

0x6188,	// (0x000254b1) list_single_pane_fp_g3_ParamLimits

0x6188,	// (0x000254b1) list_single_pane_fp_g3

0xc908,	// (0x0002bc31) list_single_pane_fp_g4_ParamLimits

0xc908,	// (0x0002bc31) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0002eea9) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0002eea9) list_single_pane_fp_g

0x619c,	// (0x000254c5) list_single_pane_fp_t1_ParamLimits

0x619c,	// (0x000254c5) list_single_pane_fp_t1

0x61b3,	// (0x000254dc) list_single_graphic_pane_fp_g1_ParamLimits

0x61b3,	// (0x000254dc) list_single_graphic_pane_fp_g1

0xc8fc,	// (0x0002bc25) list_single_graphic_pane_fp_g2_ParamLimits

0xc8fc,	// (0x0002bc25) list_single_graphic_pane_fp_g2

0x5734,	// (0x00024a5d) list_single_graphic_pane_fp_g3_ParamLimits

0x5734,	// (0x00024a5d) list_single_graphic_pane_fp_g3

0x6188,	// (0x000254b1) list_single_graphic_pane_fp_g4_ParamLimits

0x6188,	// (0x000254b1) list_single_graphic_pane_fp_g4

0xc908,	// (0x0002bc31) list_single_graphic_pane_fp_g5_ParamLimits

0xc908,	// (0x0002bc31) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0002eeb2) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eeb2) list_single_graphic_pane_fp_g

0x61bf,	// (0x000254e8) list_single_graphic_pane_fp_t1_ParamLimits

0x61bf,	// (0x000254e8) list_single_graphic_pane_fp_t1

0x61b3,	// (0x000254dc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x61b3,	// (0x000254dc) list_single_graphic_heading_pane_fp_g1

0xc8fc,	// (0x0002bc25) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8fc,	// (0x0002bc25) list_single_graphic_heading_pane_fp_g2

0x5734,	// (0x00024a5d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5734,	// (0x00024a5d) list_single_graphic_heading_pane_fp_g3

0x6188,	// (0x000254b1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6188,	// (0x000254b1) list_single_graphic_heading_pane_fp_g4

0xc908,	// (0x0002bc31) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc908,	// (0x0002bc31) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002eeb2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eeb2) list_single_graphic_heading_pane_fp_g

0x61d5,	// (0x000254fe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x61d5,	// (0x000254fe) list_single_graphic_heading_pane_fp_t1

0x61eb,	// (0x00025514) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x61eb,	// (0x00025514) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002eebd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002eebd) list_single_graphic_heading_pane_fp_t

0x61fd,	// (0x00025526) list_single_cale_day_pane_fp_g1_ParamLimits

0x61fd,	// (0x00025526) list_single_cale_day_pane_fp_g1

0xc914,	// (0x0002bc3d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc914,	// (0x0002bc3d) list_single_cale_day_pane_fp_g2

0x6235,	// (0x0002555e) list_single_cale_day_pane_fp_g3_ParamLimits

0x6235,	// (0x0002555e) list_single_cale_day_pane_fp_g3

0x625d,	// (0x00025586) list_single_cale_day_pane_fp_g4_ParamLimits

0x625d,	// (0x00025586) list_single_cale_day_pane_fp_g4

0x6281,	// (0x000255aa) list_single_cale_day_pane_fp_g5_ParamLimits

0x6281,	// (0x000255aa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0002eec2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0002eec2) list_single_cale_day_pane_fp_g

0x62a5,	// (0x000255ce) list_single_cale_day_pane_fp_t1_ParamLimits

0x62a5,	// (0x000255ce) list_single_cale_day_pane_fp_t1

0x62cb,	// (0x000255f4) list_single_cale_day_pane_fp_t2_ParamLimits

0x62cb,	// (0x000255f4) list_single_cale_day_pane_fp_t2

0x62e4,	// (0x0002560d) list_single_cale_day_pane_fp_t3_ParamLimits

0x62e4,	// (0x0002560d) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0002eecd) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0002eecd) list_single_cale_day_pane_fp_t

0xc8fc,	// (0x0002bc25) list_empty_pane_fp_g1_ParamLimits

0xc8fc,	// (0x0002bc25) list_empty_pane_fp_g1

0x62fd,	// (0x00025626) list_empty_pane_fp_t1

0x630b,	// (0x00025634) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0002eed4) list_empty_pane_fp_t

0xc8fc,	// (0x0002bc25) list_single_heading_pane_fp_g1_ParamLimits

0xc8fc,	// (0x0002bc25) list_single_heading_pane_fp_g1

0x5734,	// (0x00024a5d) list_single_heading_pane_fp_g2_ParamLimits

0x5734,	// (0x00024a5d) list_single_heading_pane_fp_g2

0x6188,	// (0x000254b1) list_single_heading_pane_fp_g3_ParamLimits

0x6188,	// (0x000254b1) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0002eed9) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0002eed9) list_single_heading_pane_fp_g

0x6319,	// (0x00025642) list_single_heading_pane_fp_t1_ParamLimits

0x6319,	// (0x00025642) list_single_heading_pane_fp_t1

0x632b,	// (0x00025654) list_single_heading_pane_fp_t2_ParamLimits

0x632b,	// (0x00025654) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0002eee0) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0002eee0) list_single_heading_pane_fp_t

0x6fc7,	// (0x000262f0) aid_size_cell_fast

0x1940,	// (0x00020c69) soft_indicator_pane_cp1_t1

0x6fd0,	// (0x000262f9) cell_app_pane_cp2_ParamLimits

0x6fd0,	// (0x000262f9) cell_app_pane_cp2

0x8ecd,	// (0x000281f6) fep_hwr_candidate_drop_down_list_pane

0x1787,	// (0x00020ab0) fep_hwr_candidate_pane_g3_ParamLimits

0x1787,	// (0x00020ab0) fep_hwr_candidate_pane_g3

0x1794,	// (0x00020abd) fep_hwr_candidate_pane_g4_ParamLimits

0x1794,	// (0x00020abd) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0002ee54) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0002ee54) fep_hwr_candidate_pane_g

0xc3b0,	// (0x0002b6d9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3b0,	// (0x0002b6d9) fep_vkb_candidate_drop_down_list_pane

0xc7b3,	// (0x0002badc) fep_vkb_candidate_pane_g3

0xc7bb,	// (0x0002bae4) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0002ee81) fep_vkb_candidate_pane_g

0xc4bb,	// (0x0002b7e4) cell_hwr_candidate_pane_g1_ParamLimits

0xc7d2,	// (0x0002bafb) cell_hwr_candidate_pane_g3_ParamLimits

0xc7d2,	// (0x0002bafb) cell_hwr_candidate_pane_g3

0xc7f3,	// (0x0002bb1c) cell_hwr_candidate_pane_g4_ParamLimits

0xc7f3,	// (0x0002bb1c) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0002ee9b) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0002ee9b) cell_hwr_candidate_pane_g

0xc814,	// (0x0002bb3d) cell_vkb_candidate_pane_g3_ParamLimits

0xc814,	// (0x0002bb3d) cell_vkb_candidate_pane_g3

0xc82f,	// (0x0002bb58) cell_vkb_candidate_pane_g4_ParamLimits

0xc82f,	// (0x0002bb58) cell_vkb_candidate_pane_g4

0xc920,	// (0x0002bc49) cell_app_pane_cp2_g1_ParamLimits

0xc920,	// (0x0002bc49) cell_app_pane_cp2_g1

0xc93e,	// (0x0002bc67) cell_app_pane_cp2_g2_ParamLimits

0xc93e,	// (0x0002bc67) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0002eee5) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0002eee5) cell_app_pane_cp2_g

0xc94a,	// (0x0002bc73) cell_app_pane_cp2_t1_ParamLimits

0xc94a,	// (0x0002bc73) cell_app_pane_cp2_t1

0x1c43,	// (0x00020f6c) grid_highlight_pane_cp1_ParamLimits

0x1c43,	// (0x00020f6c) grid_highlight_pane_cp1

0x9109,	// (0x00028432) cell_hwr_candidate_pane_cp1_ParamLimits

0x9109,	// (0x00028432) cell_hwr_candidate_pane_cp1

0xc4bb,	// (0x0002b7e4) fep_hwr_candidate_drop_down_list_pane_g1

0xc95c,	// (0x0002bc85) fep_hwr_candidate_drop_down_list_pane_g2

0xc969,	// (0x0002bc92) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002eeea) fep_hwr_candidate_drop_down_list_pane_g

0x9128,	// (0x00028451) fep_hwr_candidate_drop_down_list_scroll_pane

0x9131,	// (0x0002845a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9131,	// (0x0002845a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x913e,	// (0x00028467) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x913e,	// (0x00028467) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x914b,	// (0x00028474) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x914b,	// (0x00028474) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc814,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc814,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc82f,	// (0x0002bb58) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc82f,	// (0x0002bb58) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9158,	// (0x00028481) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9158,	// (0x00028481) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9173,	// (0x0002849c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9173,	// (0x0002849c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x918e,	// (0x000284b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x918e,	// (0x000284b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0002eef1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0002eef1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc976,	// (0x0002bc9f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc976,	// (0x0002bc9f) cell_vkb_candidate_pane_cp1

0xc4bb,	// (0x0002b7e4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4bb,	// (0x0002b7e4) fep_vkb_candidate_drop_down_list_pane_g1

0xc95c,	// (0x0002bc85) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc95c,	// (0x0002bc85) fep_vkb_candidate_drop_down_list_pane_g2

0xc969,	// (0x0002bc92) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc969,	// (0x0002bc92) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002eeea) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0002eeea) fep_vkb_candidate_drop_down_list_pane_g

0xc996,	// (0x0002bcbf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc996,	// (0x0002bcbf) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9a3,	// (0x0002bccc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9a3,	// (0x0002bccc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9b0,	// (0x0002bcd9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9b0,	// (0x0002bcd9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9bc,	// (0x0002bce5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9bc,	// (0x0002bce5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7d2,	// (0x0002bafb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7d2,	// (0x0002bafb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7f3,	// (0x0002bb1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7f3,	// (0x0002bb1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9c8,	// (0x0002bcf1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9c8,	// (0x0002bcf1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9e9,	// (0x0002bd12) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9e9,	// (0x0002bd12) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca0a,	// (0x0002bd33) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca0a,	// (0x0002bd33) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0002ef02) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0002ef02) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6913,	// (0x00025c3c) title_pane_g1_ParamLimits

0x6920,	// (0x00025c49) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e877) title_pane_g_ParamLimits

0x20dc,	// (0x00021405) aid_call2_pane

0x20d4,	// (0x000213fd) aid_call_pane

0x20e4,	// (0x0002140d) popup_clock_analogue_window_g1

0x20e4,	// (0x0002140d) popup_clock_analogue_window_g2

0x72d8,	// (0x00026601) popup_clock_analogue_window_g3

0x72e1,	// (0x0002660a) popup_clock_analogue_window_g4

0x17b3,	// (0x00020adc) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0002ea17) popup_clock_analogue_window_g

0x72e9,	// (0x00026612) popup_clock_analogue_window_t1

0x7321,	// (0x0002664a) clock_digital_number_pane_ParamLimits

0x7321,	// (0x0002664a) clock_digital_number_pane

0x732d,	// (0x00026656) clock_digital_number_pane_cp02_ParamLimits

0x732d,	// (0x00026656) clock_digital_number_pane_cp02

0x7339,	// (0x00026662) clock_digital_number_pane_cp03_ParamLimits

0x7339,	// (0x00026662) clock_digital_number_pane_cp03

0x7345,	// (0x0002666e) clock_digital_number_pane_cp04_ParamLimits

0x7345,	// (0x0002666e) clock_digital_number_pane_cp04

0x7351,	// (0x0002667a) clock_digital_separator_pane_ParamLimits

0x7351,	// (0x0002667a) clock_digital_separator_pane

0x735d,	// (0x00026686) popup_clock_digital_window_t1_ParamLimits

0x735d,	// (0x00026686) popup_clock_digital_window_t1

0x17b3,	// (0x00020adc) clock_digital_number_pane_g1

0x17b3,	// (0x00020adc) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0002ea22) clock_digital_number_pane_g

0x17b3,	// (0x00020adc) clock_digital_separator_pane_g1

0x17b3,	// (0x00020adc) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0002ea22) clock_digital_separator_pane_g

0x83ad,	// (0x000276d6) aid_fill_nsta_ParamLimits

0x84f9,	// (0x00027822) indicator_nsta_pane_ParamLimits

0x8672,	// (0x0002799b) popup_clock_analogue_window

0x8672,	// (0x0002799b) popup_clock_digital_window

0x1819,	// (0x00020b42) grid_indicator_nsta_pane_ParamLimits

0xbc55,	// (0x0002af7e) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0002edd4) clock_nsta_pane_t

0x7203,	// (0x0002652c) aid_size_max_handle

0x720d,	// (0x00026536) aid_size_min_handle

0x7897,	// (0x00026bc0) editor_scroll_pane

0xca25,	// (0x0002bd4e) ex_editor_pane

0x1dd0,	// (0x000210f9) scroll_pane_cp13

0x1b8d,	// (0x00020eb6) scroll_pane_cp14

0x2113,	// (0x0002143c) scroll_pane_cp36

0x730b,	// (0x00026634) list_single_graphic_hl_pane_cp2_ParamLimits

0x730b,	// (0x00026634) list_single_graphic_hl_pane_cp2

0xb22c,	// (0x0002a555) list_single_graphic_hl_pane_ParamLimits

0xb22c,	// (0x0002a555) list_single_graphic_hl_pane

0xcfc2,	// (0x0002c2eb) aid_size_min_hl_cp1

0xca2d,	// (0x0002bd56) list_highlight_pane_cp34_ParamLimits

0xca2d,	// (0x0002bd56) list_highlight_pane_cp34

0xca3e,	// (0x0002bd67) list_single_graphic_hl_pane_g1_ParamLimits

0xca3e,	// (0x0002bd67) list_single_graphic_hl_pane_g1

0x6341,	// (0x0002566a) list_single_graphic_hl_pane_g2_ParamLimits

0x6341,	// (0x0002566a) list_single_graphic_hl_pane_g2

0x6341,	// (0x0002566a) list_single_graphic_hl_pane_g3_ParamLimits

0x6341,	// (0x0002566a) list_single_graphic_hl_pane_g3

0x634d,	// (0x00025676) list_single_graphic_hl_pane_g4_ParamLimits

0x634d,	// (0x00025676) list_single_graphic_hl_pane_g4

0x6359,	// (0x00025682) list_single_graphic_hl_pane_g5_ParamLimits

0x6359,	// (0x00025682) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0002ef13) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0002ef13) list_single_graphic_hl_pane_g

0x636d,	// (0x00025696) list_single_graphic_hl_pane_t1_ParamLimits

0x636d,	// (0x00025696) list_single_graphic_hl_pane_t1

0xca4b,	// (0x0002bd74) aid_size_min_hl_cp2

0xca54,	// (0x0002bd7d) list_highlight_pane_cp34_cp2_ParamLimits

0xca54,	// (0x0002bd7d) list_highlight_pane_cp34_cp2

0xca3e,	// (0x0002bd67) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca3e,	// (0x0002bd67) list_single_graphic_hl_pane_g1_cp2

0xca61,	// (0x0002bd8a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca61,	// (0x0002bd8a) list_single_graphic_hl_pane_g2_cp2

0xca6d,	// (0x0002bd96) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca6d,	// (0x0002bd96) list_single_graphic_hl_pane_g3_cp2

0x77d0,	// (0x00026af9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x77d0,	// (0x00026af9) list_single_graphic_hl_pane_g4_cp2

0xca7b,	// (0x0002bda4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca7b,	// (0x0002bda4) list_single_graphic_hl_pane_g5_cp2

0x7c5f,	// (0x00026f88) control_pane_g4_ParamLimits

0x7c5f,	// (0x00026f88) control_pane_g4

0x7dce,	// (0x000270f7) bg_popup_sub_pane_cp10_ParamLimits

0xc255,	// (0x0002b57e) list_choice_list_pane_ParamLimits

0xc264,	// (0x0002b58d) scroll_pane_cp23

0x195d,	// (0x00020c86) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8a0,	// (0x0002bbc9) list_preview_fixed_pane_ParamLimits

0xc8b6,	// (0x0002bbdf) list_preview_fixed_pane_cp_ParamLimits

0xc8b6,	// (0x0002bbdf) list_preview_fixed_pane_cp

0xc8c2,	// (0x0002bbeb) popup_preview_fixed_window_g1_ParamLimits

0xc8c2,	// (0x0002bbeb) popup_preview_fixed_window_g1

0xc8ce,	// (0x0002bbf7) popup_preview_fixed_window_g2_ParamLimits

0xc8ce,	// (0x0002bbf7) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0002eea2) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0002eea2) popup_preview_fixed_window_g

0x70df,	// (0x00026408) aid_navi_side_left_pane_ParamLimits

0x70f4,	// (0x0002641d) aid_navi_side_right_pane_ParamLimits

0x710c,	// (0x00026435) navi_icon_pane_stacon_ParamLimits

0x7120,	// (0x00026449) navi_navi_pane_stacon_ParamLimits

0x710c,	// (0x00026435) navi_text_pane_stacon_ParamLimits

0x17a9,	// (0x00020ad2) main_text_info_pane

0xcaa5,	// (0x0002bdce) listscroll_text_info_pane

0xcaad,	// (0x0002bdd6) list_text_info_pane_ParamLimits

0xcaad,	// (0x0002bdd6) list_text_info_pane

0xcabc,	// (0x0002bde5) scroll_pane_cp24_ParamLimits

0xcabc,	// (0x0002bde5) scroll_pane_cp24

0xcada,	// (0x0002be03) list_text_info_pane_t1_ParamLimits

0xcada,	// (0x0002be03) list_text_info_pane_t1

0x7e34,	// (0x0002715d) popup_fast_swap2_window_ParamLimits

0x7e34,	// (0x0002715d) popup_fast_swap2_window

0xcb0e,	// (0x0002be37) aid_size_cell_fast2

0x17a9,	// (0x00020ad2) bg_popup_window_pane_cp17

0xa0d8,	// (0x00029401) heading_pane_cp2

0x1a91,	// (0x00020dba) listscroll_fast2_pane

0xcb18,	// (0x0002be41) grid_fast2_pane

0xcb22,	// (0x0002be4b) listscroll_fast2_pane_g1

0xcb2a,	// (0x0002be53) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0002ef1e) listscroll_fast2_pane_g

0x1dd0,	// (0x000210f9) scroll_pane_cp26

0xcb34,	// (0x0002be5d) cell_fast2_pane_ParamLimits

0xcb34,	// (0x0002be5d) cell_fast2_pane

0xcb49,	// (0x0002be72) cell_fast2_pane_g1

0xcb52,	// (0x0002be7b) cell_fast2_pane_g2

0xcb5b,	// (0x0002be84) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0002ef23) cell_fast2_pane_g

0x1ac4,	// (0x00020ded) grid_highlight_pane_cp9

0x1ad9,	// (0x00020e02) main_eswt_pane_ParamLimits

0x1ad9,	// (0x00020e02) main_eswt_pane

0xcad1,	// (0x0002bdfa) list_single_text_info_pane

0xcb63,	// (0x0002be8c) eswt_ctrl_button_pane

0xcb63,	// (0x0002be8c) eswt_ctrl_canvas_pane

0xcb6b,	// (0x0002be94) eswt_ctrl_combo_pane

0xcb63,	// (0x0002be8c) eswt_ctrl_default_pane

0xcb63,	// (0x0002be8c) eswt_ctrl_label_pane

0xcb73,	// (0x0002be9c) eswt_ctrl_wait_pane

0xcb7b,	// (0x0002bea4) eswt_shell_pane

0x17a9,	// (0x00020ad2) listscroll_eswt_app_pane

0xcb9b,	// (0x0002bec4) popup_eswt_tasktip_window_ParamLimits

0xcb9b,	// (0x0002bec4) popup_eswt_tasktip_window

0x89b4,	// (0x00027cdd) bg_popup_window_pane_cp18

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_ParamLimits

0xcbac,	// (0x0002bed5) eswt_control_pane_g1

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_ParamLimits

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_ParamLimits

0xcbc6,	// (0x0002beef) eswt_control_pane_g3

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_ParamLimits

0xcbd3,	// (0x0002befc) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x0002ef2a) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x0002ef2a) eswt_control_pane_g

0x1c43,	// (0x00020f6c) bg_button_pane_ParamLimits

0x1c43,	// (0x00020f6c) bg_button_pane

0x1ad9,	// (0x00020e02) common_borders_pane_copy2_ParamLimits

0x1ad9,	// (0x00020e02) common_borders_pane_copy2

0xcbe0,	// (0x0002bf09) control_button_pane_g1_ParamLimits

0xcbe0,	// (0x0002bf09) control_button_pane_g1

0xcbec,	// (0x0002bf15) control_button_pane_g2_ParamLimits

0xcbec,	// (0x0002bf15) control_button_pane_g2

0xcbf8,	// (0x0002bf21) control_button_pane_g3_ParamLimits

0xcbf8,	// (0x0002bf21) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0002ef33) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0002ef33) control_button_pane_g

0xcc0c,	// (0x0002bf35) control_button_pane_t1

0xcc1a,	// (0x0002bf43) control_button_pane_t2

0x0001,

0xfc11,	// (0x0002ef3a) control_button_pane_t

0x88c8,	// (0x00027bf1) bg_button_pane_g1

0x88d0,	// (0x00027bf9) bg_button_pane_g2

0x88d8,	// (0x00027c01) bg_button_pane_g3

0x88e0,	// (0x00027c09) bg_button_pane_g4

0x88e8,	// (0x00027c11) bg_button_pane_g5

0x88f0,	// (0x00027c19) bg_button_pane_g6

0x88f8,	// (0x00027c21) bg_button_pane_g7

0x8900,	// (0x00027c29) bg_button_pane_g8

0x8908,	// (0x00027c31) bg_button_pane_g9

0x0008,

0xf857,	// (0x0002eb80) bg_button_pane_g

0xc210,	// (0x0002b539) common_borders_pane_ParamLimits

0xc210,	// (0x0002b539) common_borders_pane

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy1_ParamLimits

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy1

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy1_ParamLimits

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy1

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy1_ParamLimits

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy1

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy1_ParamLimits

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy1

0xc24b,	// (0x0002b574) bg_eswt_ctrl_canvas_pane_g1

0xc210,	// (0x0002b539) common_borders_pane_cp2_ParamLimits

0xc210,	// (0x0002b539) common_borders_pane_cp2

0xc210,	// (0x0002b539) common_borders_pane_cp3_ParamLimits

0xc210,	// (0x0002b539) common_borders_pane_cp3

0xcc28,	// (0x0002bf51) separator_horizontal_pane

0xcc30,	// (0x0002bf59) separator_vertical_pane

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy2_ParamLimits

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy2

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy2_ParamLimits

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy2

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy2_ParamLimits

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy2

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy2_ParamLimits

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy2

0x17a9,	// (0x00020ad2) common_borders_pane_cp4

0xcc39,	// (0x0002bf62) separator_horizontal_pane_g1

0xcc42,	// (0x0002bf6b) separator_horizontal_pane_g2

0xcc4b,	// (0x0002bf74) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0002ef3f) separator_horizontal_pane_g

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy3_ParamLimits

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy3

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy3_ParamLimits

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy3

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy3_ParamLimits

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy3

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy3_ParamLimits

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy3

0x17a9,	// (0x00020ad2) common_borders_pane_cp5

0xcc54,	// (0x0002bf7d) separator_vertical_pane_g1

0xcc5d,	// (0x0002bf86) separator_vertical_pane_g2

0xcc66,	// (0x0002bf8f) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x0002ef46) separator_vertical_pane_g

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy4_ParamLimits

0xcbac,	// (0x0002bed5) eswt_control_pane_g1_copy4

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy4_ParamLimits

0xcbb9,	// (0x0002bee2) eswt_control_pane_g2_copy4

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy4_ParamLimits

0xcbc6,	// (0x0002beef) eswt_control_pane_g3_copy4

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy4_ParamLimits

0xcbd3,	// (0x0002befc) eswt_control_pane_g4_copy4

0xcc6f,	// (0x0002bf98) eswt_ctrl_combo_button_pane

0xcc77,	// (0x0002bfa0) eswt_ctrl_input_pane

0xcc7f,	// (0x0002bfa8) popup_choice_list_window_cp70

0xcc87,	// (0x0002bfb0) eswt_ctrl_input_pane_t1

0x17a9,	// (0x00020ad2) input_focus_pane_cp70

0xc210,	// (0x0002b539) bg_button_pane_cp70_ParamLimits

0xc210,	// (0x0002b539) bg_button_pane_cp70

0xcc95,	// (0x0002bfbe) eswt_ctrl_combo_button_pane_g1

0xcc9d,	// (0x0002bfc6) wait_bar_pane_cp70

0x89b4,	// (0x00027cdd) bg_popup_window_pane_cp70_ParamLimits

0x89b4,	// (0x00027cdd) bg_popup_window_pane_cp70

0xcca5,	// (0x0002bfce) popup_eswt_tasktip_window_t1

0xccbb,	// (0x0002bfe4) wait_bar_pane_cp71_ParamLimits

0xccbb,	// (0x0002bfe4) wait_bar_pane_cp71

0xccc7,	// (0x0002bff0) grid_eswt_app_pane

0x1fb7,	// (0x000212e0) scroll_pane_cp70

0xccd0,	// (0x0002bff9) cell_eswt_app_pane_ParamLimits

0xccd0,	// (0x0002bff9) cell_eswt_app_pane

0xcd00,	// (0x0002c029) cell_eswt_app_pane_g1_ParamLimits

0xcd00,	// (0x0002c029) cell_eswt_app_pane_g1

0xcd2f,	// (0x0002c058) cell_eswt_app_pane_g2_ParamLimits

0xcd2f,	// (0x0002c058) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x0002ef4d) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x0002ef4d) cell_eswt_app_pane_g

0xcd53,	// (0x0002c07c) cell_eswt_app_pane_t1_ParamLimits

0xcd53,	// (0x0002c07c) cell_eswt_app_pane_t1

0xcd85,	// (0x0002c0ae) grid_highlight_pane_cp70_ParamLimits

0xcd85,	// (0x0002c0ae) grid_highlight_pane_cp70

0x776c,	// (0x00026a95) set_content_pane_g1

0x7be7,	// (0x00026f10) status_small_volume_pane

0x91a9,	// (0x000284d2) status_small_volume_pane_g1

0x91b1,	// (0x000284da) volume_small2_pane

0x91ba,	// (0x000284e3) volume_small2_pane_g1

0x91c3,	// (0x000284ec) volume_small2_pane_g2

0x91cc,	// (0x000284f5) volume_small2_pane_g3

0x91d5,	// (0x000284fe) volume_small2_pane_g4

0x91de,	// (0x00028507) volume_small2_pane_g5

0x91e7,	// (0x00028510) volume_small2_pane_g6

0x91f0,	// (0x00028519) volume_small2_pane_g7

0x91f9,	// (0x00028522) volume_small2_pane_g8

0x9202,	// (0x0002852b) volume_small2_pane_g9

0x920b,	// (0x00028534) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0002ef52) volume_small2_pane_g

0xc603,	// (0x0002b92c) fep_vkb_top_text_pane_g1_ParamLimits

0xc61e,	// (0x0002b947) fep_vkb_top_text_pane_t1_ParamLimits

0xc8da,	// (0x0002bc03) popup_preview_fixed_window_g3_ParamLimits

0xc8da,	// (0x0002bc03) popup_preview_fixed_window_g3

0x82e3,	// (0x0002760c) popup_toolbar_trans_pane

0xb01b,	// (0x0002a344) aid_height_set_list_ParamLimits

0xb02c,	// (0x0002a355) aid_size_parent_ParamLimits

0x7dce,	// (0x000270f7) list_highlight_pane_cp2_ParamLimits

0x776c,	// (0x00026a95) set_content_pane_g1_ParamLimits

0x5d91,	// (0x000250ba) list_single_image_pane_ParamLimits

0x5d91,	// (0x000250ba) list_single_image_pane

0xcd91,	// (0x0002c0ba) aid_size_cell_image_ParamLimits

0xcd91,	// (0x0002c0ba) aid_size_cell_image

0xcd9e,	// (0x0002c0c7) grid_single_image_pane_ParamLimits

0xcd9e,	// (0x0002c0c7) grid_single_image_pane

0xcdac,	// (0x0002c0d5) list_single_image_pane_g1_ParamLimits

0xcdac,	// (0x0002c0d5) list_single_image_pane_g1

0xcdb8,	// (0x0002c0e1) list_single_image_pane_g2_ParamLimits

0xcdb8,	// (0x0002c0e1) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0002ef67) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0002ef67) list_single_image_pane_g

0xcdcc,	// (0x0002c0f5) list_single_image_pane_t1_ParamLimits

0xcdcc,	// (0x0002c0f5) list_single_image_pane_t1

0xcde2,	// (0x0002c10b) cell_image_list_pane_ParamLimits

0xcde2,	// (0x0002c10b) cell_image_list_pane

0xcdf6,	// (0x0002c11f) cell_image_list_pane_g1

0xcdff,	// (0x0002c128) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x0002ef6c) cell_image_list_pane_g

0xce08,	// (0x0002c131) aid_size_cell_tb_trans_pane

0x1c43,	// (0x00020f6c) bg_tb_trans_pane

0xce1a,	// (0x0002c143) grid_tb_trans_pane

0x88c8,	// (0x00027bf1) bg_tb_trans_pane_g1

0x88d0,	// (0x00027bf9) bg_tb_trans_pane_g2

0x88d8,	// (0x00027c01) bg_tb_trans_pane_g3

0x88e0,	// (0x00027c09) bg_tb_trans_pane_g4

0x88e8,	// (0x00027c11) bg_tb_trans_pane_g5

0x8900,	// (0x00027c29) bg_tb_trans_pane_g6

0x8908,	// (0x00027c31) bg_tb_trans_pane_g7

0x88f0,	// (0x00027c19) bg_tb_trans_pane_g8

0x88f8,	// (0x00027c21) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0002ef71) bg_tb_trans_pane_g

0xce2e,	// (0x0002c157) cell_toolbar_trans_pane_ParamLimits

0xce2e,	// (0x0002c157) cell_toolbar_trans_pane

0xc24b,	// (0x0002b574) cell_toolbar_trans_pane_g1

0xbe16,	// (0x0002b13f) list_form2_midp_pane_t1

0xbe24,	// (0x0002b14d) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0002ee1a) list_form2_midp_pane_t

0xbe32,	// (0x0002b15b) scroll_pane_cp51_ParamLimits

0xbfee,	// (0x0002b317) form2_midp_wait_pane_g1

0xbff7,	// (0x0002b320) form2_midp_wait_pane_g2

0xc000,	// (0x0002b329) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0002ee2f) form2_midp_wait_pane_g

0x1819,	// (0x00020b42) list_highlight_pane_cp21_ParamLimits

0xc048,	// (0x0002b371) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc057,	// (0x0002b380) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5d29,	// (0x00025052) list_single_2graphic_im_pane_ParamLimits

0x5d29,	// (0x00025052) list_single_2graphic_im_pane

0xce54,	// (0x0002c17d) list_single_2graphic_im_pane_g1_ParamLimits

0xce54,	// (0x0002c17d) list_single_2graphic_im_pane_g1

0xce65,	// (0x0002c18e) list_single_2graphic_im_pane_g2_ParamLimits

0xce65,	// (0x0002c18e) list_single_2graphic_im_pane_g2

0xce71,	// (0x0002c19a) list_single_2graphic_im_pane_g3_ParamLimits

0xce71,	// (0x0002c19a) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0002ef84) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0002ef84) list_single_2graphic_im_pane_g

0xce91,	// (0x0002c1ba) list_single_2graphic_im_pane_t1_ParamLimits

0xce91,	// (0x0002c1ba) list_single_2graphic_im_pane_t1

0xc8e6,	// (0x0002bc0f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8e6,	// (0x0002bc0f) list_single_graphic_2heading_pane_fp

0x61b3,	// (0x000254dc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x61b3,	// (0x000254dc) list_single_graphic_2heading_pane_fp_g1

0xc8fc,	// (0x0002bc25) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8fc,	// (0x0002bc25) list_single_graphic_2heading_pane_fp_g2

0x5734,	// (0x00024a5d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5734,	// (0x00024a5d) list_single_graphic_2heading_pane_fp_g3

0x6188,	// (0x000254b1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6188,	// (0x000254b1) list_single_graphic_2heading_pane_fp_g4

0xc908,	// (0x0002bc31) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc908,	// (0x0002bc31) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002eeb2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002eeb2) list_single_graphic_2heading_pane_fp_g

0x6383,	// (0x000256ac) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6383,	// (0x000256ac) list_single_graphic_2heading_pane_fp_t1

0x61eb,	// (0x00025514) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x61eb,	// (0x00025514) list_single_graphic_2heading_pane_fp_t2

0x6399,	// (0x000256c2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6399,	// (0x000256c2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x0002ef8d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x0002ef8d) list_single_graphic_2heading_pane_fp_t

0xc2d7,	// (0x0002b600) fep_hwr_write_pane_g5_ParamLimits

0xc2d7,	// (0x0002b600) fep_hwr_write_pane_g5

0xc2e3,	// (0x0002b60c) fep_hwr_write_pane_g6_ParamLimits

0xc2e3,	// (0x0002b60c) fep_hwr_write_pane_g6

0xcb7b,	// (0x0002bea4) eswt_shell_pane_ParamLimits

0x89b4,	// (0x00027cdd) bg_popup_window_pane_cp18_ParamLimits

0xaf74,	// (0x0002a29d) heading_pane_cp70

0xcca5,	// (0x0002bfce) popup_eswt_tasktip_window_t1_ParamLimits

0x8402,	// (0x0002772b) aid_touch_tab_arrow_left

0x8411,	// (0x0002773a) aid_touch_tab_arrow_right

0x6931,	// (0x00025c5a) title_pane_g3_ParamLimits

0x6931,	// (0x00025c5a) title_pane_g3

0x1bda,	// (0x00020f03) set_value_pane_g1

0x82e3,	// (0x0002760c) popup_toolbar_trans_pane_ParamLimits

0xce08,	// (0x0002c131) aid_size_cell_tb_trans_pane_ParamLimits

0x1c43,	// (0x00020f6c) bg_tb_trans_pane_ParamLimits

0xce1a,	// (0x0002c143) grid_tb_trans_pane_ParamLimits

0x195d,	// (0x00020c86) cont_note_pane_ParamLimits

0x195d,	// (0x00020c86) cont_note_pane

0x1ad9,	// (0x00020e02) cont_snote2_single_text_pane_ParamLimits

0x1ad9,	// (0x00020e02) cont_snote2_single_text_pane

0x1ad9,	// (0x00020e02) cont_snote2_single_graphic_pane_ParamLimits

0x1ad9,	// (0x00020e02) cont_snote2_single_graphic_pane

0xa2f7,	// (0x00029620) cont_note_wait_pane_ParamLimits

0xa2f7,	// (0x00029620) cont_note_wait_pane

0xa2f7,	// (0x00029620) cont_note_image_pane_ParamLimits

0xa2f7,	// (0x00029620) cont_note_image_pane

0xcec2,	// (0x0002c1eb) popup_note2_window_g1_ParamLimits

0xcec2,	// (0x0002c1eb) popup_note2_window_g1

0xcef3,	// (0x0002c21c) popup_note2_window_t1_ParamLimits

0xcef3,	// (0x0002c21c) popup_note2_window_t1

0xcf38,	// (0x0002c261) popup_note2_window_t2_ParamLimits

0xcf38,	// (0x0002c261) popup_note2_window_t2

0xcf7d,	// (0x0002c2a6) popup_note2_window_t3_ParamLimits

0xcf7d,	// (0x0002c2a6) popup_note2_window_t3

0xcfcb,	// (0x0002c2f4) popup_note2_window_t4_ParamLimits

0xcfcb,	// (0x0002c2f4) popup_note2_window_t4

0x19e1,	// (0x00020d0a) popup_note2_window_t5_ParamLimits

0x19e1,	// (0x00020d0a) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0002ef99) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0002ef99) popup_note2_window_t

0xcffa,	// (0x0002c323) popup_note2_image_window_g1_ParamLimits

0xcffa,	// (0x0002c323) popup_note2_image_window_g1

0xd006,	// (0x0002c32f) popup_note2_image_window_g2_ParamLimits

0xd006,	// (0x0002c32f) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0002efa4) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0002efa4) popup_note2_image_window_g

0xd018,	// (0x0002c341) popup_note2_image_window_t1_ParamLimits

0xd018,	// (0x0002c341) popup_note2_image_window_t1

0xd030,	// (0x0002c359) popup_note2_image_window_t2_ParamLimits

0xd030,	// (0x0002c359) popup_note2_image_window_t2

0xd048,	// (0x0002c371) popup_note2_image_window_t3_ParamLimits

0xd048,	// (0x0002c371) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0002efa9) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0002efa9) popup_note2_image_window_t

0xa305,	// (0x0002962e) popup_note2_wait_window_g1_ParamLimits

0xa305,	// (0x0002962e) popup_note2_wait_window_g1

0xa311,	// (0x0002963a) popup_note2_wait_window_g2_ParamLimits

0xa311,	// (0x0002963a) popup_note2_wait_window_g2

0xa31d,	// (0x00029646) popup_note2_wait_window_g3_ParamLimits

0xa31d,	// (0x00029646) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0002eb62) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0002eb62) popup_note2_wait_window_g

0xd064,	// (0x0002c38d) popup_note2_wait_window_t1_ParamLimits

0xd064,	// (0x0002c38d) popup_note2_wait_window_t1

0xd082,	// (0x0002c3ab) popup_note2_wait_window_t2_ParamLimits

0xd082,	// (0x0002c3ab) popup_note2_wait_window_t2

0xd0a0,	// (0x0002c3c9) popup_note2_wait_window_t3_ParamLimits

0xd0a0,	// (0x0002c3c9) popup_note2_wait_window_t3

0xd0b2,	// (0x0002c3db) popup_note2_wait_window_t4_ParamLimits

0xd0b2,	// (0x0002c3db) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002efb0) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002efb0) popup_note2_wait_window_t

0xd0c4,	// (0x0002c3ed) wait_bar2_pane_ParamLimits

0xd0c4,	// (0x0002c3ed) wait_bar2_pane

0xd0dc,	// (0x0002c405) popup_snote2_single_text_window_g1_ParamLimits

0xd0dc,	// (0x0002c405) popup_snote2_single_text_window_g1

0xd104,	// (0x0002c42d) popup_snote2_single_text_window_t1_ParamLimits

0xd104,	// (0x0002c42d) popup_snote2_single_text_window_t1

0xd150,	// (0x0002c479) popup_snote2_single_text_window_t2_ParamLimits

0xd150,	// (0x0002c479) popup_snote2_single_text_window_t2

0xd19c,	// (0x0002c4c5) popup_snote2_single_text_window_t3_ParamLimits

0xd19c,	// (0x0002c4c5) popup_snote2_single_text_window_t3

0xd1dd,	// (0x0002c506) popup_snote2_single_text_window_t4_ParamLimits

0xd1dd,	// (0x0002c506) popup_snote2_single_text_window_t4

0xd213,	// (0x0002c53c) popup_snote2_single_text_window_t5_ParamLimits

0xd213,	// (0x0002c53c) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002efb9) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002efb9) popup_snote2_single_text_window_t

0xd23e,	// (0x0002c567) popup_snote2_single_graphic_window_g1_ParamLimits

0xd23e,	// (0x0002c567) popup_snote2_single_graphic_window_g1

0xd266,	// (0x0002c58f) popup_snote2_single_graphic_window_g2_ParamLimits

0xd266,	// (0x0002c58f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002efc4) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002efc4) popup_snote2_single_graphic_window_g

0xd28e,	// (0x0002c5b7) popup_snote2_single_graphic_window_t1_ParamLimits

0xd28e,	// (0x0002c5b7) popup_snote2_single_graphic_window_t1

0xd2da,	// (0x0002c603) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2da,	// (0x0002c603) popup_snote2_single_graphic_window_t2

0xd19c,	// (0x0002c4c5) popup_snote2_single_graphic_window_t3_ParamLimits

0xd19c,	// (0x0002c4c5) popup_snote2_single_graphic_window_t3

0xd1dd,	// (0x0002c506) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1dd,	// (0x0002c506) popup_snote2_single_graphic_window_t4

0xd213,	// (0x0002c53c) popup_snote2_single_graphic_window_t5_ParamLimits

0xd213,	// (0x0002c53c) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002efc9) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002efc9) popup_snote2_single_graphic_window_t

0xbcef,	// (0x0002b018) clock_nsta_pane_cp2_t1

0xbcef,	// (0x0002b018) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0002edf0) clock_nsta_pane_cp2_t

0x5911,	// (0x00024c3a) form_field_data_wide_pane_g1_ParamLimits

0x1c6e,	// (0x00020f97) form_field_data_wide_pane_g2_ParamLimits

0x1c6e,	// (0x00020f97) form_field_data_wide_pane_g2

0x1c7a,	// (0x00020fa3) form_field_data_wide_pane_g3_ParamLimits

0x1c7a,	// (0x00020fa3) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0002e99a) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0002e99a) form_field_data_wide_pane_g

0xbbf1,	// (0x0002af1a) grid_touch_3_pane_ParamLimits

0xbbf1,	// (0x0002af1a) grid_touch_3_pane

0xd326,	// (0x0002c64f) cell_touch_3_pane_ParamLimits

0xd326,	// (0x0002c64f) cell_touch_3_pane

0xc24b,	// (0x0002b574) cell_touch_3_pane_g1

0xc24b,	// (0x0002b574) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0002ee75) cell_touch_3_pane_g

0x1a13,	// (0x00020d3c) cont_query_data_pane

0x1a1b,	// (0x00020d44) cont_query_data_pane_cp1

0xd354,	// (0x0002c67d) button_value_adjust_pane_cp7

0xd35c,	// (0x0002c685) query_popup_pane_cp3

0x2145,	// (0x0002146e) bg_popup_sub_pane_cp22_ParamLimits

0x73d7,	// (0x00026700) navi_navi_volume_pane_cp2

0x73ef,	// (0x00026718) popup_side_volume_key_window_g2

0x73fb,	// (0x00026724) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0002ea30) popup_side_volume_key_window_g

0x7415,	// (0x0002673e) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0002ea37) popup_side_volume_key_window_t

0x7639,	// (0x00026962) popup_side_volume_key_window_ParamLimits

0x55c3,	// (0x000248ec) list_double_graphic_pane_g4_ParamLimits

0x55c3,	// (0x000248ec) list_double_graphic_pane_g4

0x5d6e,	// (0x00025097) list_single_2heading_msg_pane_ParamLimits

0x5d6e,	// (0x00025097) list_single_2heading_msg_pane

0x63b9,	// (0x000256e2) list_single_2heading_msg_pane_g1_ParamLimits

0x63b9,	// (0x000256e2) list_single_2heading_msg_pane_g1

0x53f2,	// (0x0002471b) list_single_2heading_msg_pane_g2_ParamLimits

0x53f2,	// (0x0002471b) list_single_2heading_msg_pane_g2

0x5efe,	// (0x00025227) list_single_2heading_msg_pane_g3_ParamLimits

0x5efe,	// (0x00025227) list_single_2heading_msg_pane_g3

0x63c5,	// (0x000256ee) list_single_2heading_msg_pane_g4_ParamLimits

0x63c5,	// (0x000256ee) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002efd4) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002efd4) list_single_2heading_msg_pane_g

0x63dd,	// (0x00025706) list_single_2heading_msg_pane_t1_ParamLimits

0x63dd,	// (0x00025706) list_single_2heading_msg_pane_t1

0x6405,	// (0x0002572e) list_single_2heading_msg_pane_t2_ParamLimits

0x6405,	// (0x0002572e) list_single_2heading_msg_pane_t2

0x6439,	// (0x00025762) list_single_2heading_msg_pane_t3_ParamLimits

0x6439,	// (0x00025762) list_single_2heading_msg_pane_t3

0x6472,	// (0x0002579b) list_single_2heading_msg_pane_t4_ParamLimits

0x6472,	// (0x0002579b) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002efdd) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002efdd) list_single_2heading_msg_pane_t

0x17c7,	// (0x00020af0) title_pane_g4_ParamLimits

0x17c7,	// (0x00020af0) title_pane_g4

0x7030,	// (0x00026359) title_pane_stacon_g3_ParamLimits

0x7030,	// (0x00026359) title_pane_stacon_g3

0xce85,	// (0x0002c1ae) list_single_2graphic_im_pane_g4_ParamLimits

0xce85,	// (0x0002c1ae) list_single_2graphic_im_pane_g4

0xad3e,	// (0x0002a067) popup_side_volume_key_window_cp

0xb54c,	// (0x0002a875) main_idle_act2_pane_t1

0x8910,	// (0x00027c39) toolbar_button_pane_g10

0x6ef0,	// (0x00026219) popup_toolbar_window_cp1

0xbce0,	// (0x0002b009) clock_nsta_pane_cp_t1

0xbce0,	// (0x0002b009) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0002edeb) clock_nsta_pane_cp_t

0x73d7,	// (0x00026700) navi_navi_volume_pane_cp2_ParamLimits

0x73e3,	// (0x0002670c) popup_side_volume_key_window_g1_ParamLimits

0x73ef,	// (0x00026718) popup_side_volume_key_window_g2_ParamLimits

0x73fb,	// (0x00026724) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0002ea30) popup_side_volume_key_window_g_ParamLimits

0x8eb9,	// (0x000281e2) fep_hwr_aid_pane

0x1779,	// (0x00020aa2) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2a7,	// (0x0002b5d0) fep_hwr_top_pane_g1_ParamLimits

0xc2b9,	// (0x0002b5e2) fep_hwr_top_pane_g2_ParamLimits

0x8f72,	// (0x0002829b) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0002ee40) fep_hwr_top_pane_g_ParamLimits

0x8f87,	// (0x000282b0) fep_hwr_top_text_pane_ParamLimits

0xab01,	// (0x00029e2a) aid_touch_tab_arrow_arrow_2

0xab0a,	// (0x00029e33) aid_touch_tab_arrow_left_2

0x8ecd,	// (0x000281f6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8f04,	// (0x0002822d) fep_hwr_prediction_pane

0xc412,	// (0x0002b73b) fep_vkb_prediction_pane

0xc50f,	// (0x0002b838) fep_vkb_side_pane_g3_ParamLimits

0xc50f,	// (0x0002b838) fep_vkb_side_pane_g3

0xc4bb,	// (0x0002b7e4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc95c,	// (0x0002bc85) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc969,	// (0x0002bc92) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0002eeea) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd381,	// (0x0002c6aa) fep_hwr_prediction_pane_g1

0x9214,	// (0x0002853d) fep_hwr_prediction_pane_g2

0x921c,	// (0x00028545) fep_hwr_prediction_pane_g3

0x9224,	// (0x0002854d) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002efe6) fep_hwr_prediction_pane_g

0xd381,	// (0x0002c6aa) fep_vkb_prediction_pane_g1

0xd38b,	// (0x0002c6b4) fep_vkb_prediction_pane_g2

0xd393,	// (0x0002c6bc) fep_vkb_prediction_pane_g3

0xd39b,	// (0x0002c6c4) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002efef) fep_vkb_prediction_pane_g

0x8cf1,	// (0x0002801a) slider_set_pane_g3

0x8d05,	// (0x0002802e) slider_set_pane_g4

0x8d1d,	// (0x00028046) slider_set_pane_g5

0x8cf1,	// (0x0002801a) slider_set_pane_g6

0x8d33,	// (0x0002805c) slider_set_pane_g7

0xb18d,	// (0x0002a4b6) slider_form_pane_g3

0xb196,	// (0x0002a4bf) slider_form_pane_g4

0xb19e,	// (0x0002a4c7) slider_form_pane_g5

0xb18d,	// (0x0002a4b6) slider_form_pane_g6

0xb1a6,	// (0x0002a4cf) slider_form_pane_g7

0xb7f7,	// (0x0002ab20) slider_set_pane_vc_g3

0xb800,	// (0x0002ab29) slider_set_pane_vc_g4

0xb809,	// (0x0002ab32) slider_set_pane_vc_g5

0xb7f7,	// (0x0002ab20) slider_set_pane_vc_g6

0xb812,	// (0x0002ab3b) slider_set_pane_vc_g7

0xb9c4,	// (0x0002aced) slider_form_pane_vc_g1

0xb9cd,	// (0x0002acf6) slider_form_pane_vc_g2

0xb9d6,	// (0x0002acff) slider_form_pane_vc_g3

0xb9c4,	// (0x0002aced) slider_form_pane_vc_g4

0xb9df,	// (0x0002ad08) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002edbd) slider_form_pane_vc_g

0x17a9,	// (0x00020ad2) main_idle_act3_pane

0xd3a3,	// (0x0002c6cc) ai3_links_pane

0xd3ac,	// (0x0002c6d5) popup_ai3_data_window_ParamLimits

0xd3ac,	// (0x0002c6d5) popup_ai3_data_window

0x17a9,	// (0x00020ad2) grid_ai3_links_pane

0xd3c4,	// (0x0002c6ed) cell_ai3_links_pane_ParamLimits

0xd3c4,	// (0x0002c6ed) cell_ai3_links_pane

0xd3dc,	// (0x0002c705) bg_popup_sub_pane_cp11

0xd3e9,	// (0x0002c712) cell_ai3_links_pane_g1

0x17a9,	// (0x00020ad2) bg_popup_sub_pane_cp12

0xd40e,	// (0x0002c737) heading_ai3_data_pane

0xd416,	// (0x0002c73f) list_ai3_gene_pane

0xd422,	// (0x0002c74b) popup_ai3_data_window_g1

0xd42a,	// (0x0002c753) heading_ai3_data_pane_g1

0xd432,	// (0x0002c75b) heading_ai3_data_pane_t1

0xd440,	// (0x0002c769) list_double_ai3_gene_pane_ParamLimits

0xd440,	// (0x0002c769) list_double_ai3_gene_pane

0xd44d,	// (0x0002c776) list_single_ai3_gene_pane_ParamLimits

0xd44d,	// (0x0002c776) list_single_ai3_gene_pane

0xc210,	// (0x0002b539) list_highlight_pane_cp7_ParamLimits

0xc210,	// (0x0002b539) list_highlight_pane_cp7

0xd45a,	// (0x0002c783) list_single_a13_gene_pane_t1_ParamLimits

0xd45a,	// (0x0002c783) list_single_a13_gene_pane_t1

0xd471,	// (0x0002c79a) list_single_ai3_gene_pane_g1

0xd47a,	// (0x0002c7a3) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002eff8) list_single_ai3_gene_pane_g

0xd482,	// (0x0002c7ab) list_double_ai3_gene_pane_g1_ParamLimits

0xd482,	// (0x0002c7ab) list_double_ai3_gene_pane_g1

0xd48e,	// (0x0002c7b7) list_double_ai3_gene_pane_t1_ParamLimits

0xd48e,	// (0x0002c7b7) list_double_ai3_gene_pane_t1

0xd4aa,	// (0x0002c7d3) list_double_ai3_gene_pane_t2_ParamLimits

0xd4aa,	// (0x0002c7d3) list_double_ai3_gene_pane_t2

0xd4bf,	// (0x0002c7e8) list_double_ai3_gene_pane_t3_ParamLimits

0xd4bf,	// (0x0002c7e8) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002effd) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002effd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63af,	// (0x000256d8) aid_size_min_col_2

0xd36d,	// (0x0002c696) aid_size_min_msg_ParamLimits

0xd36d,	// (0x0002c696) aid_size_min_msg

0xc60f,	// (0x0002b938) fep_vkb_top_text_pane_g2_ParamLimits

0xc60f,	// (0x0002b938) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0002ee70) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0002ee70) fep_vkb_top_text_pane_g

0x17a9,	// (0x00020ad2) main_hc_apps_shell_pane

0xd4dc,	// (0x0002c805) grid_hc_apps_pane_ParamLimits

0xd4dc,	// (0x0002c805) grid_hc_apps_pane

0xd4eb,	// (0x0002c814) list_hc_apps_pane

0xd4f3,	// (0x0002c81c) scroll_pane_cp37_ParamLimits

0xd4f3,	// (0x0002c81c) scroll_pane_cp37

0xd4ff,	// (0x0002c828) cell_hc_apps_pane_ParamLimits

0xd4ff,	// (0x0002c828) cell_hc_apps_pane

0xd5ad,	// (0x0002c8d6) cell_hc_apps_pane_g1_ParamLimits

0xd5ad,	// (0x0002c8d6) cell_hc_apps_pane_g1

0xd5de,	// (0x0002c907) cell_hc_apps_pane_g2_ParamLimits

0xd5de,	// (0x0002c907) cell_hc_apps_pane_g2

0xd5fa,	// (0x0002c923) cell_hc_apps_pane_g3_ParamLimits

0xd5fa,	// (0x0002c923) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002f004) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002f004) cell_hc_apps_pane_g

0xd61c,	// (0x0002c945) cell_hc_apps_pane_t1_ParamLimits

0xd61c,	// (0x0002c945) cell_hc_apps_pane_t1

0x195d,	// (0x00020c86) grid_highlight_pane_cp10_ParamLimits

0x195d,	// (0x00020c86) grid_highlight_pane_cp10

0xd65c,	// (0x0002c985) list_single_hc_apps_pane_ParamLimits

0xd65c,	// (0x0002c985) list_single_hc_apps_pane

0xd6bf,	// (0x0002c9e8) list_single_hc_apps_pane_g1

0x6497,	// (0x000257c0) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002f00b) list_single_hc_apps_pane_g

0x64b0,	// (0x000257d9) list_single_hc_apps_pane_g2_copy1

0x64cc,	// (0x000257f5) list_single_hc_apps_pane_t1

0x1819,	// (0x00020b42) bg_set_opt_pane_cp_ParamLimits

0x69e1,	// (0x00025d0a) setting_slider_pane_t1_ParamLimits

0x69fa,	// (0x00025d23) setting_slider_pane_t2_ParamLimits

0x6a14,	// (0x00025d3d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e887) setting_slider_pane_t_ParamLimits

0x6a2c,	// (0x00025d55) slider_set_pane_ParamLimits

0x7c73,	// (0x00026f9c) control_pane_g5_ParamLimits

0x7c73,	// (0x00026f9c) control_pane_g5

0xafe0,	// (0x0002a309) slider_set_pane_g1_ParamLimits

0x8ce5,	// (0x0002800e) slider_set_pane_g2_ParamLimits

0x8cf1,	// (0x0002801a) slider_set_pane_g3_ParamLimits

0x8d05,	// (0x0002802e) slider_set_pane_g4_ParamLimits

0x8d1d,	// (0x00028046) slider_set_pane_g5_ParamLimits

0x8cf1,	// (0x0002801a) slider_set_pane_g6_ParamLimits

0x8d33,	// (0x0002805c) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0002ec7e) slider_set_pane_g_ParamLimits

0x7717,	// (0x00026a40) navi_icon_text_pane_ParamLimits

0x83c3,	// (0x000276ec) aid_fill_nsta_2_ParamLimits

0x8402,	// (0x0002772b) aid_touch_tab_arrow_left_ParamLimits

0x8411,	// (0x0002773a) aid_touch_tab_arrow_right_ParamLimits

0x847e,	// (0x000277a7) clock_nsta_pane_ParamLimits

0xaae3,	// (0x00029e0c) navi_icon_pane_g1_ParamLimits

0xaaef,	// (0x00029e18) navi_text_pane_t1_ParamLimits

0xbdf0,	// (0x0002b119) navi_icon_text_pane_g1_ParamLimits

0xbdfc,	// (0x0002b125) navi_icon_text_pane_t1_ParamLimits

0xd6bf,	// (0x0002c9e8) list_single_hc_apps_pane_g1_ParamLimits

0x6497,	// (0x000257c0) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002f00b) list_single_hc_apps_pane_g_ParamLimits

0x64b0,	// (0x000257d9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x64cc,	// (0x000257f5) list_single_hc_apps_pane_t1_ParamLimits

0x6825,	// (0x00025b4e) popup_toolbar2_fixed_window_ParamLimits

0x6825,	// (0x00025b4e) popup_toolbar2_fixed_window

0x82d9,	// (0x00027602) popup_toolbar2_float_window

0x17a9,	// (0x00020ad2) bg_popup_sub_pane_cp27

0xd6d8,	// (0x0002ca01) grid_toolbar2_float_pane

0x17a9,	// (0x00020ad2) bg_popup_sub_pane_cp26

0xd6d8,	// (0x0002ca01) grid_toolbar2_fixed_pane

0xd6e0,	// (0x0002ca09) cell_toolbar2_fixed_pane_ParamLimits

0xd6e0,	// (0x0002ca09) cell_toolbar2_fixed_pane

0xd6f0,	// (0x0002ca19) cell_toolbar2_fixed_pane_g1

0x8818,	// (0x00027b41) toolbar2_fixed_button_pane

0x88c8,	// (0x00027bf1) toolbar2_fixed_button_pane_g1

0x88d0,	// (0x00027bf9) toolbar2_fixed_button_pane_g2

0x88d8,	// (0x00027c01) toolbar2_fixed_button_pane_g3

0x88e0,	// (0x00027c09) toolbar2_fixed_button_pane_g4

0x88e8,	// (0x00027c11) toolbar2_fixed_button_pane_g5

0x88f0,	// (0x00027c19) toolbar2_fixed_button_pane_g6

0x88f8,	// (0x00027c21) toolbar2_fixed_button_pane_g7

0x8900,	// (0x00027c29) toolbar2_fixed_button_pane_g8

0x8908,	// (0x00027c31) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0002eb80) toolbar2_fixed_button_pane_g

0xd6f9,	// (0x0002ca22) cell_toolbar2_float_pane_ParamLimits

0xd6f9,	// (0x0002ca22) cell_toolbar2_float_pane

0xd70a,	// (0x0002ca33) cell_toolbar2_float_pane_g1

0x8818,	// (0x00027b41) toolbar2_fixed_button_pane_cp

0xc379,	// (0x0002b6a2) fep_vkb_accented_list_pane_ParamLimits

0xc379,	// (0x0002b6a2) fep_vkb_accented_list_pane

0x90d5,	// (0x000283fe) bg_popup_fep_shadow_pane_g9

0x7897,	// (0x00026bc0) bg_popup_fep_shadow_pane_cp3

0x1db7,	// (0x000210e0) list_accented_list_pane

0xd713,	// (0x0002ca3c) list_single_accented_list_pane_ParamLimits

0xd713,	// (0x0002ca3c) list_single_accented_list_pane

0x7897,	// (0x00026bc0) list_highlight_pane_cp10

0xd724,	// (0x0002ca4d) list_single_accented_list_pane_t1

0x8229,	// (0x00027552) popup_slider_window_ParamLimits

0x8229,	// (0x00027552) popup_slider_window

0xd364,	// (0x0002c68d) aid_indentation_list_msg

0xd7e2,	// (0x0002cb0b) bg_popup_window_pane_cp19

0xd84a,	// (0x0002cb73) popup_slider_window_g1

0xd866,	// (0x0002cb8f) popup_slider_window_g2

0xd882,	// (0x0002cbab) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002f010) popup_slider_window_g

0xd8e8,	// (0x0002cc11) popup_slider_window_t1

0xd95c,	// (0x0002cc85) small_volume_slider_vertical_pane

0xc24b,	// (0x0002b574) small_volume_slider_vertical_pane_g1

0xc24b,	// (0x0002b574) small_volume_slider_vertical_pane_g2

0xd978,	// (0x0002cca1) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002f022) small_volume_slider_vertical_pane_g

0x65f5,	// (0x0002591e) area_side_right_pane_ParamLimits

0x65f5,	// (0x0002591e) area_side_right_pane

0x922c,	// (0x00028555) aid_size_side_button_ParamLimits

0x922c,	// (0x00028555) aid_size_side_button

0x9240,	// (0x00028569) grid_sctrl_middle_pane_ParamLimits

0x9240,	// (0x00028569) grid_sctrl_middle_pane

0x925f,	// (0x00028588) sctrl_sk_bottom_pane

0x9270,	// (0x00028599) sctrl_sk_top_pane

0x9282,	// (0x000285ab) aid_touch_sctrl_top

0x195d,	// (0x00020c86) bg_sctrl_sk_pane_ParamLimits

0x195d,	// (0x00020c86) bg_sctrl_sk_pane

0x928f,	// (0x000285b8) sctrl_sk_top_pane_g1

0x929c,	// (0x000285c5) sctrl_sk_top_pane_t1

0x9282,	// (0x000285ab) aid_touch_sctrl_bottom

0x195d,	// (0x00020c86) bg_sctrl_sk_pane_cp_ParamLimits

0x195d,	// (0x00020c86) bg_sctrl_sk_pane_cp

0x92b7,	// (0x000285e0) sctrl_sk_bottom_pane_g1

0x929c,	// (0x000285c5) sctrl_sk_bottom_pane_t1

0x92c0,	// (0x000285e9) cell_sctrl_middle_pane_ParamLimits

0x92c0,	// (0x000285e9) cell_sctrl_middle_pane

0x92db,	// (0x00028604) aid_touch_sctrl_middle_ParamLimits

0x92db,	// (0x00028604) aid_touch_sctrl_middle

0x1c43,	// (0x00020f6c) bg_sctrl_middle_pane_ParamLimits

0x1c43,	// (0x00020f6c) bg_sctrl_middle_pane

0xc4bb,	// (0x0002b7e4) cell_sctrl_middle_pane_g1_ParamLimits

0xc4bb,	// (0x0002b7e4) cell_sctrl_middle_pane_g1

0x92ed,	// (0x00028616) cell_sctrl_middle_pane_g2_ParamLimits

0x92ed,	// (0x00028616) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002f02e) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002f02e) cell_sctrl_middle_pane_g

0x88c8,	// (0x00027bf1) bg_sctrl_middle_pane_g1

0x88d0,	// (0x00027bf9) bg_sctrl_middle_pane_g2

0x88d8,	// (0x00027c01) bg_sctrl_middle_pane_g3

0x88e0,	// (0x00027c09) bg_sctrl_middle_pane_g4

0x88e8,	// (0x00027c11) bg_sctrl_middle_pane_g5

0x88f0,	// (0x00027c19) bg_sctrl_middle_pane_g6

0x88f8,	// (0x00027c21) bg_sctrl_middle_pane_g7

0x8900,	// (0x00027c29) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002f033) bg_sctrl_middle_pane_g

0x8908,	// (0x00027c31) bg_sctrl_middle_pane_g8_copy1

0x88c8,	// (0x00027bf1) bg_sctrl_sk_pane_g1

0x88d0,	// (0x00027bf9) bg_sctrl_sk_pane_g2

0x88d8,	// (0x00027c01) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0002eb80) bg_sctrl_sk_pane_g

0x1b27,	// (0x00020e50) aid_size_touch_scroll_bar

0x88e0,	// (0x00027c09) bg_sctrl_sk_pane_g4

0x88e8,	// (0x00027c11) bg_sctrl_sk_pane_g5

0x88f0,	// (0x00027c19) bg_sctrl_sk_pane_g6

0x88f8,	// (0x00027c21) bg_sctrl_sk_pane_g7

0x8900,	// (0x00027c29) bg_sctrl_sk_pane_g8

0x8908,	// (0x00027c31) bg_sctrl_sk_pane_g9

0x7e92,	// (0x000271bb) popup_fep_china_hwr2_fs_candidate_window

0x7e9c,	// (0x000271c5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7e9c,	// (0x000271c5) popup_fep_china_hwr2_fs_control_window

0xc4bb,	// (0x0002b7e4) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002f029) sctrl_sk_top_pane_g

0xd981,	// (0x0002ccaa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd981,	// (0x0002ccaa) aid_fep_china_hwr2_fs_cell

0xd993,	// (0x0002ccbc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd993,	// (0x0002ccbc) bg_popup_fep_shadow_pane_cp4

0xd9aa,	// (0x0002ccd3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9aa,	// (0x0002ccd3) bg_popup_fep_shadow_pane_cp5

0xd9bc,	// (0x0002cce5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9bc,	// (0x0002cce5) popup_fep_china_hwr2_fs_control_bar_grid

0xd9cc,	// (0x0002ccf5) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9d4,	// (0x0002ccfd) aid_fep_china_hwr2_fs_candi_cell

0x17a9,	// (0x00020ad2) bg_popup_fep_shadow_pane_cp6

0xd9de,	// (0x0002cd07) popup_fep_china_hwr2_fs_candidate_grid

0xd9e8,	// (0x0002cd11) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9e8,	// (0x0002cd11) cell_fep_china_hwr2_fs_funtion_grid

0xc24b,	// (0x0002b574) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda00,	// (0x0002cd29) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda00,	// (0x0002cd29) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda0e,	// (0x0002cd37) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda0e,	// (0x0002cd37) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002f044) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002f044) cell_fep_china_hwr2_fs_funtion_grid_g

0xda24,	// (0x0002cd4d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda24,	// (0x0002cd4d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda39,	// (0x0002cd62) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda39,	// (0x0002cd62) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002f049) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002f049) cell_fep_china_hwr2_fs_funtion_grid_t

0xda55,	// (0x0002cd7e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda5d,	// (0x0002cd86) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda65,	// (0x0002cd8e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002f04e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda6d,	// (0x0002cd96) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda6d,	// (0x0002cd96) cell_fep_china_hwr2_fs_candidate_grid

0xda86,	// (0x0002cdaf) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda8e,	// (0x0002cdb7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc24b,	// (0x0002b574) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc24b,	// (0x0002b574) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0002ee75) cell_fep_china_hwr2_fs_candidate_grid_g

0xda96,	// (0x0002cdbf) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8491,	// (0x000277ba) clock_nsta_pane_cp_24_ParamLimits

0x8491,	// (0x000277ba) clock_nsta_pane_cp_24

0x850f,	// (0x00027838) indicator_nsta_pane_cp_24_ParamLimits

0x850f,	// (0x00027838) indicator_nsta_pane_cp_24

0xa95f,	// (0x00029c88) heading_pane_g1

0x0001,

0xf8bc,	// (0x0002ebe5) heading_pane_g

0xb395,	// (0x0002a6be) grid_sct_catagory_button_pane

0xb3c5,	// (0x0002a6ee) scroll_pane_cp5_ParamLimits

0xbe3e,	// (0x0002b167) button_value_adjust_pane_cp5_ParamLimits

0xbe3e,	// (0x0002b167) button_value_adjust_pane_cp5

0xbf1d,	// (0x0002b246) form2_midp_time_pane_ParamLimits

0xdaa4,	// (0x0002cdcd) cell_sct_catagory_button_pane_ParamLimits

0xdaa4,	// (0x0002cdcd) cell_sct_catagory_button_pane

0xc210,	// (0x0002b539) bg_button_pane_cp01_ParamLimits

0xc210,	// (0x0002b539) bg_button_pane_cp01

0xc24b,	// (0x0002b574) cell_sct_catagory_button_pane_g1

0x8268,	// (0x00027591) popup_tb_extension_window

0xdab6,	// (0x0002cddf) aid_size_cell_ext_ParamLimits

0xdab6,	// (0x0002cddf) aid_size_cell_ext

0x195d,	// (0x00020c86) bg_tb_trans_pane_cp1_ParamLimits

0x195d,	// (0x00020c86) bg_tb_trans_pane_cp1

0xdad6,	// (0x0002cdff) grid_tb_ext_pane_ParamLimits

0xdad6,	// (0x0002cdff) grid_tb_ext_pane

0xdb06,	// (0x0002ce2f) cell_tb_ext_pane_ParamLimits

0xdb06,	// (0x0002ce2f) cell_tb_ext_pane

0xdb1d,	// (0x0002ce46) cell_tb_ext_pane_g1_ParamLimits

0xdb1d,	// (0x0002ce46) cell_tb_ext_pane_g1

0xdb3a,	// (0x0002ce63) cell_tb_ext_pane_t1

0x195d,	// (0x00020c86) list_highlight_pane_cp11_ParamLimits

0x195d,	// (0x00020c86) list_highlight_pane_cp11

0x6844,	// (0x00025b6d) popup_uni_indicator_window_ParamLimits

0x6844,	// (0x00025b6d) popup_uni_indicator_window

0x1c43,	// (0x00020f6c) bg_popup_sub_pane_cp14

0xdb56,	// (0x0002ce7f) list_uniindi_pane

0xdb62,	// (0x0002ce8b) uniindi_top_pane

0x195d,	// (0x00020c86) bg_uniindi_top_pane

0xdb81,	// (0x0002ceaa) uniindi_top_pane_g1

0xdb97,	// (0x0002cec0) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002f055) uniindi_top_pane_g

0xdbc1,	// (0x0002ceea) uniindi_top_pane_t1

0xdbeb,	// (0x0002cf14) list_single_uniindi_pane_ParamLimits

0xdbeb,	// (0x0002cf14) list_single_uniindi_pane

0xc24b,	// (0x0002b574) bg_uniindi_top_pane_g1

0xdbfd,	// (0x0002cf26) list_single_uniindi_pane_g1

0xdc10,	// (0x0002cf39) list_single_uniindi_pane_t1

0x17a9,	// (0x00020ad2) control_bg_pane

0xdc35,	// (0x0002cf5e) bg_sctrl_sk_pane_cp1

0xdc3e,	// (0x0002cf67) bg_sctrl_sk_pane_cp2

0xdc47,	// (0x0002cf70) control_bg_pane_g1

0xdc50,	// (0x0002cf79) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002f05e) control_bg_pane_g

0xbc94,	// (0x0002afbd) cell_indicator_nsta_pane_g1_ParamLimits

0xbca2,	// (0x0002afcb) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0002edd9) cell_indicator_nsta_pane_g_ParamLimits

0x6175,	// (0x0002549e) form2_midp_time_pane_t1_ParamLimits

0x1ad9,	// (0x00020e02) main_idle_act4_pane_ParamLimits

0x1ad9,	// (0x00020e02) main_idle_act4_pane

0x8268,	// (0x00027591) popup_tb_extension_window_ParamLimits

0xdaf6,	// (0x0002ce1f) tb_ext_find_pane_ParamLimits

0xdaf6,	// (0x0002ce1f) tb_ext_find_pane

0xdc59,	// (0x0002cf82) ai_gene_pane_1_cp1

0x79e2,	// (0x00026d0b) ai_gene_pane_2_cp1

0xdc61,	// (0x0002cf8a) list_single_idle_plugin_calendar_pane

0xdc6a,	// (0x0002cf93) list_single_idle_plugin_notification_pane

0xdc73,	// (0x0002cf9c) list_single_idle_plugin_player_pane

0xdc7c,	// (0x0002cfa5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc7c,	// (0x0002cfa5) list_single_idle_plugin_shortcut_pane

0xdc9e,	// (0x0002cfc7) main_idle_act4_pane_t1

0xdcb0,	// (0x0002cfd9) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002f063) main_idle_act4_pane_t

0xdcc2,	// (0x0002cfeb) middle_sk_idle_act4_pane_ParamLimits

0xdcc2,	// (0x0002cfeb) middle_sk_idle_act4_pane

0xdcd8,	// (0x0002d001) popup_clock_digital_analogue_window_cp2

0xdcf2,	// (0x0002d01b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcf2,	// (0x0002d01b) shortcut_wheel_idle_act4_pane

0xc24b,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g1

0xc24b,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g2

0xc24b,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g3

0xc24b,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g4

0xc24b,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g5

0xdd06,	// (0x0002d02f) shortcut_wheel_idle_act4_pane_g6

0xdd0e,	// (0x0002d037) shortcut_wheel_idle_act4_pane_g7

0xdd16,	// (0x0002d03f) shortcut_wheel_idle_act4_pane_g8

0xdd1e,	// (0x0002d047) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002f068) shortcut_wheel_idle_act4_pane_g

0xc4bb,	// (0x0002b7e4) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4bb,	// (0x0002b7e4) middle_sk_idle_act4_pane_g1

0xdd82,	// (0x0002d0ab) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd82,	// (0x0002d0ab) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002f08b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002f08b) middle_sk_idle_act4_pane_g

0xdd8e,	// (0x0002d0b7) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd8e,	// (0x0002d0b7) middle_sk_idle_act4_pane_t1

0xddab,	// (0x0002d0d4) grid_ai_shortcut_pane_ParamLimits

0xddab,	// (0x0002d0d4) grid_ai_shortcut_pane

0xddc4,	// (0x0002d0ed) list_highlight_pane_cp16_ParamLimits

0xddc4,	// (0x0002d0ed) list_highlight_pane_cp16

0xddd1,	// (0x0002d0fa) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddd1,	// (0x0002d0fa) list_single_idle_plugin_shortcut_pane_g1

0xdddd,	// (0x0002d106) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdddd,	// (0x0002d106) list_single_idle_plugin_shortcut_pane_g2

0xddf5,	// (0x0002d11e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddf5,	// (0x0002d11e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002f090) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002f090) list_single_idle_plugin_shortcut_pane_g

0xde08,	// (0x0002d131) cell_ai_shortcut_pane_ParamLimits

0xde08,	// (0x0002d131) cell_ai_shortcut_pane

0xde2c,	// (0x0002d155) cell_ai_shortcut_pane_g1_ParamLimits

0xde2c,	// (0x0002d155) cell_ai_shortcut_pane_g1

0xdc59,	// (0x0002cf82) ai_gene_pane_1_cp2

0xde4e,	// (0x0002d177) ai_gene_pane_2_cp2

0xde56,	// (0x0002d17f) list_highlight_pane_cp15

0xde5f,	// (0x0002d188) list_single_idle_plugin_calendar_pane_g1

0xde56,	// (0x0002d17f) list_highlight_pane_cp17

0xde67,	// (0x0002d190) list_single_idle_plugin_calendar_pane_g1_copy1

0xde6f,	// (0x0002d198) list_single_idle_plugin_player_pane_g1

0xb5ee,	// (0x0002a917) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002f097) list_single_idle_plugin_player_pane_g

0xde77,	// (0x0002d1a0) list_single_idle_plugin_player_pane_t1

0xde85,	// (0x0002d1ae) list_single_idle_plugin_player_pane_t2

0xde93,	// (0x0002d1bc) list_single_idle_plugin_player_pane_t3

0xdea1,	// (0x0002d1ca) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002f09c) list_single_idle_plugin_player_pane_t

0xdeaf,	// (0x0002d1d8) wait_bar_pane_cp15

0xdeb7,	// (0x0002d1e0) grid_ai_notification_pane

0xb5ee,	// (0x0002a917) list_single_idle_plugin_notification_pane_g1

0xdec0,	// (0x0002d1e9) cell_ai_notification_pane_ParamLimits

0xdec0,	// (0x0002d1e9) cell_ai_notification_pane

0xdecd,	// (0x0002d1f6) cell_ai_notification_pane_g1

0xded5,	// (0x0002d1fe) cell_ai_notification_pane_t1

0xdee3,	// (0x0002d20c) tb_ext_find_button_pane

0xdeeb,	// (0x0002d214) tb_ext_find_pane_g1

0xdef3,	// (0x0002d21c) tb_ext_find_pane_t1

0x20e4,	// (0x0002140d) tb_ext_find_button_pane_g1

0xdf01,	// (0x0002d22a) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002f0a5) tb_ext_find_button_pane_g

0xdc9e,	// (0x0002cfc7) main_idle_act4_pane_t1_ParamLimits

0xdcb0,	// (0x0002cfd9) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002f063) main_idle_act4_pane_t_ParamLimits

0xdcd8,	// (0x0002d001) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdce6,	// (0x0002d00f) sat_plugin_idle_act4_pane_ParamLimits

0xdce6,	// (0x0002d00f) sat_plugin_idle_act4_pane

0xdf0a,	// (0x0002d233) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf0a,	// (0x0002d233) sat_plugin_idle_act4_pane_t1

0xdf1d,	// (0x0002d246) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf1d,	// (0x0002d246) sat_plugin_idle_act4_pane_t2

0xdf30,	// (0x0002d259) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf30,	// (0x0002d259) sat_plugin_idle_act4_pane_t3

0xdf43,	// (0x0002d26c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf43,	// (0x0002d26c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002f0aa) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002f0aa) sat_plugin_idle_act4_pane_t

0x678d,	// (0x00025ab6) popup_battery_window_ParamLimits

0x678d,	// (0x00025ab6) popup_battery_window

0x195d,	// (0x00020c86) bg_popup_sub_pane_cp25_ParamLimits

0x195d,	// (0x00020c86) bg_popup_sub_pane_cp25

0xdf56,	// (0x0002d27f) popup_battery_window_g1_ParamLimits

0xdf56,	// (0x0002d27f) popup_battery_window_g1

0xdf62,	// (0x0002d28b) popup_battery_window_t1_ParamLimits

0xdf62,	// (0x0002d28b) popup_battery_window_t1

0xdf74,	// (0x0002d29d) popup_battery_window_t2_ParamLimits

0xdf74,	// (0x0002d29d) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002f0b3) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002f0b3) popup_battery_window_t

0x78ab,	// (0x00026bd4) midp_canvas_pane_ParamLimits

0x7924,	// (0x00026c4d) midp_keypad_pane_ParamLimits

0x7924,	// (0x00026c4d) midp_keypad_pane

0x7dce,	// (0x000270f7) main_midp_pane_ParamLimits

0xbcfe,	// (0x0002b027) signal_pane_g2_cp_ParamLimits

0xdf91,	// (0x0002d2ba) aid_size_cell_midp_keypad_ParamLimits

0xdf91,	// (0x0002d2ba) aid_size_cell_midp_keypad

0xdfab,	// (0x0002d2d4) midp_keyp_game_grid_pane_ParamLimits

0xdfab,	// (0x0002d2d4) midp_keyp_game_grid_pane

0xdfcb,	// (0x0002d2f4) midp_keyp_rocker_pane_ParamLimits

0xdfcb,	// (0x0002d2f4) midp_keyp_rocker_pane

0xe004,	// (0x0002d32d) midp_keyp_sk_left_pane_ParamLimits

0xe004,	// (0x0002d32d) midp_keyp_sk_left_pane

0xe05e,	// (0x0002d387) midp_keyp_sk_right_pane_ParamLimits

0xe05e,	// (0x0002d387) midp_keyp_sk_right_pane

0x17a9,	// (0x00020ad2) bg_button_pane_cp03

0xe0b8,	// (0x0002d3e1) midp_keyp_sk_left_pane_g1

0x17a9,	// (0x00020ad2) bg_button_pane_cp04

0xe0b8,	// (0x0002d3e1) midp_keyp_sk_right_pane_g1

0xc24b,	// (0x0002b574) midp_keyp_rocker_pane_g1

0xe0c1,	// (0x0002d3ea) keyp_game_cell_pane_ParamLimits

0xe0c1,	// (0x0002d3ea) keyp_game_cell_pane

0x17a9,	// (0x00020ad2) bg_button_pane_cp02

0xe0d4,	// (0x0002d3fd) keyp_game_cell_pane_g1

0x67c3,	// (0x00025aec) popup_fep_vkb2_window_ParamLimits

0x67c3,	// (0x00025aec) popup_fep_vkb2_window

0x930b,	// (0x00028634) aid_size_cell_vkb2_ParamLimits

0x930b,	// (0x00028634) aid_size_cell_vkb2

0x935f,	// (0x00028688) popup_fep_vkb2_window_g1_ParamLimits

0x935f,	// (0x00028688) popup_fep_vkb2_window_g1

0x93a7,	// (0x000286d0) vkb2_area_bottom_pane_ParamLimits

0x93a7,	// (0x000286d0) vkb2_area_bottom_pane

0x93f3,	// (0x0002871c) vkb2_area_keypad_pane_ParamLimits

0x93f3,	// (0x0002871c) vkb2_area_keypad_pane

0x9435,	// (0x0002875e) vkb2_area_top_pane_ParamLimits

0x9435,	// (0x0002875e) vkb2_area_top_pane

0x94af,	// (0x000287d8) vkb2_top_entry_pane_ParamLimits

0x94af,	// (0x000287d8) vkb2_top_entry_pane

0x94d9,	// (0x00028802) vkb2_top_grid_left_pane_ParamLimits

0x94d9,	// (0x00028802) vkb2_top_grid_left_pane

0x94f7,	// (0x00028820) vkb2_top_grid_right_pane_ParamLimits

0x94f7,	// (0x00028820) vkb2_top_grid_right_pane

0x9515,	// (0x0002883e) vkb2_cell_keypad_pane_ParamLimits

0x9515,	// (0x0002883e) vkb2_cell_keypad_pane

0x95e6,	// (0x0002890f) vkb2_area_bottom_grid_pane_ParamLimits

0x95e6,	// (0x0002890f) vkb2_area_bottom_grid_pane

0x960c,	// (0x00028935) vkb2_area_bottom_pane_g1_ParamLimits

0x960c,	// (0x00028935) vkb2_area_bottom_pane_g1

0x9630,	// (0x00028959) vkb2_area_bottom_pane_g2_ParamLimits

0x9630,	// (0x00028959) vkb2_area_bottom_pane_g2

0x965e,	// (0x00028987) vkb2_area_bottom_pane_g3_ParamLimits

0x965e,	// (0x00028987) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002f0b8) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002f0b8) vkb2_area_bottom_pane_g

0x96bf,	// (0x000289e8) vkb2_top_cell_left_pane_ParamLimits

0x96bf,	// (0x000289e8) vkb2_top_cell_left_pane

0xe0e5,	// (0x0002d40e) vkb2_top_entry_pane_g1_ParamLimits

0xe0e5,	// (0x0002d40e) vkb2_top_entry_pane_g1

0xe0f3,	// (0x0002d41c) vkb2_top_entry_pane_t1_ParamLimits

0xe0f3,	// (0x0002d41c) vkb2_top_entry_pane_t1

0xe125,	// (0x0002d44e) vkb2_top_entry_pane_t2_ParamLimits

0xe125,	// (0x0002d44e) vkb2_top_entry_pane_t2

0xe157,	// (0x0002d480) vkb2_top_entry_pane_t3_ParamLimits

0xe157,	// (0x0002d480) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002f0bf) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002f0bf) vkb2_top_entry_pane_t

0x970c,	// (0x00028a35) vkb2_top_grid_right_pane_g1_ParamLimits

0x970c,	// (0x00028a35) vkb2_top_grid_right_pane_g1

0x9722,	// (0x00028a4b) vkb2_top_grid_right_pane_g2_ParamLimits

0x9722,	// (0x00028a4b) vkb2_top_grid_right_pane_g2

0x973a,	// (0x00028a63) vkb2_top_grid_right_pane_g3_ParamLimits

0x973a,	// (0x00028a63) vkb2_top_grid_right_pane_g3

0x9752,	// (0x00028a7b) vkb2_top_grid_right_pane_g4_ParamLimits

0x9752,	// (0x00028a7b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002f0c6) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002f0c6) vkb2_top_grid_right_pane_g

0x9768,	// (0x00028a91) vkb2_top_cell_left_pane_g1

0x977f,	// (0x00028aa8) vkb2_cell_keypad_pane_g1_ParamLimits

0x977f,	// (0x00028aa8) vkb2_cell_keypad_pane_g1

0xe17b,	// (0x0002d4a4) vkb2_cell_keypad_pane_t1_ParamLimits

0xe17b,	// (0x0002d4a4) vkb2_cell_keypad_pane_t1

0x978d,	// (0x00028ab6) vkb2_cell_bottom_grid_pane_ParamLimits

0x978d,	// (0x00028ab6) vkb2_cell_bottom_grid_pane

0x97c6,	// (0x00028aef) vkb2_cell_bottom_grid_pane_g1

0xdd26,	// (0x0002d04f) aid_call2_pane_cp02

0xdd2e,	// (0x0002d057) aid_call_pane_cp02

0xdd36,	// (0x0002d05f) clock_digital_number_pane_cp10

0xdd3e,	// (0x0002d067) clock_digital_number_pane_cp11

0xdd46,	// (0x0002d06f) clock_digital_number_pane_cp12

0xdd4e,	// (0x0002d077) clock_digital_number_pane_cp13

0xdd56,	// (0x0002d07f) clock_digital_separator_pane_cp10

0x20e4,	// (0x0002140d) popup_clock_digital_analogue_window_cp2_g1

0x20e4,	// (0x0002140d) popup_clock_digital_analogue_window_cp2_g2

0xdd5e,	// (0x0002d087) popup_clock_digital_analogue_window_cp2_g3

0x20e4,	// (0x0002140d) popup_clock_digital_analogue_window_cp2_g4

0xdd5e,	// (0x0002d087) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002f07b) popup_clock_digital_analogue_window_cp2_g

0xdd66,	// (0x0002d08f) popup_clock_digital_analogue_window_cp2_t1

0xdd74,	// (0x0002d09d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002f086) popup_clock_digital_analogue_window_cp2_t

0xc24b,	// (0x0002b574) clock_digital_number_pane_cp10_g1

0xc24b,	// (0x0002b574) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002ee75) clock_digital_number_pane_cp10_g

0xc24b,	// (0x0002b574) clock_digital_separator_pane_cp10_g1

0xc24b,	// (0x0002b574) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002ee75) clock_digital_separator_pane_cp10_g

0xdba3,	// (0x0002cecc) uniindi_top_pane_g3

0xdbb4,	// (0x0002cedd) uniindi_top_pane_g4

0x95a0,	// (0x000288c9) vkb2_row_keypad_pane_ParamLimits

0x95a0,	// (0x000288c9) vkb2_row_keypad_pane

0x97e2,	// (0x00028b0b) vkb2_cell_t_keypad_pane_ParamLimits

0x97e2,	// (0x00028b0b) vkb2_cell_t_keypad_pane

0x97f2,	// (0x00028b1b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x97f2,	// (0x00028b1b) vkb2_cell_t_keypad_pane_cp08

0x9805,	// (0x00028b2e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9805,	// (0x00028b2e) vkb2_cell_t_keypad_pane_cp09

0x9819,	// (0x00028b42) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9819,	// (0x00028b42) vkb2_cell_t_keypad_pane_cp01

0x982a,	// (0x00028b53) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x982a,	// (0x00028b53) vkb2_cell_t_keypad_pane_cp02

0x983b,	// (0x00028b64) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x983b,	// (0x00028b64) vkb2_cell_t_keypad_pane_cp03

0x984c,	// (0x00028b75) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x984c,	// (0x00028b75) vkb2_cell_t_keypad_pane_cp04

0x985d,	// (0x00028b86) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x985d,	// (0x00028b86) vkb2_cell_t_keypad_pane_cp05

0x986e,	// (0x00028b97) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x986e,	// (0x00028b97) vkb2_cell_t_keypad_pane_cp06

0x987f,	// (0x00028ba8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x987f,	// (0x00028ba8) vkb2_cell_t_keypad_pane_cp07

0x9890,	// (0x00028bb9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9890,	// (0x00028bb9) vkb2_cell_t_keypad_pane_cp10

0xc4bb,	// (0x0002b7e4) vkb2_cell_t_keypad_pane_g1

0xe192,	// (0x0002d4bb) vkb2_cell_t_keypad_pane_t1

0x17a9,	// (0x00020ad2) popup_grid_graphic2_window

0xe1a4,	// (0x0002d4cd) aid_size_cell_graphic2_ParamLimits

0xe1a4,	// (0x0002d4cd) aid_size_cell_graphic2

0xe1dc,	// (0x0002d505) bg_popup_window_pane_cp21_ParamLimits

0xe1dc,	// (0x0002d505) bg_popup_window_pane_cp21

0xe1ea,	// (0x0002d513) graphic2_pages_pane_ParamLimits

0xe1ea,	// (0x0002d513) graphic2_pages_pane

0xe230,	// (0x0002d559) grid_graphic2_control_pane_ParamLimits

0xe230,	// (0x0002d559) grid_graphic2_control_pane

0xe26e,	// (0x0002d597) grid_graphic2_pane_ParamLimits

0xe26e,	// (0x0002d597) grid_graphic2_pane

0xe2e2,	// (0x0002d60b) cell_graphic2_pane

0x17a9,	// (0x00020ad2) main_comp_mode_pane

0xd416,	// (0x0002c73f) list_ai3_gene_pane_ParamLimits

0xd7e2,	// (0x0002cb0b) bg_popup_window_pane_cp19_ParamLimits

0xd7ee,	// (0x0002cb17) bg_touch_area_indi_pane_ParamLimits

0xd7ee,	// (0x0002cb17) bg_touch_area_indi_pane

0xd804,	// (0x0002cb2d) bg_touch_area_indi_pane_cp01_ParamLimits

0xd804,	// (0x0002cb2d) bg_touch_area_indi_pane_cp01

0xd81a,	// (0x0002cb43) bg_touch_area_indi_pane_cp02_ParamLimits

0xd81a,	// (0x0002cb43) bg_touch_area_indi_pane_cp02

0xd830,	// (0x0002cb59) bg_touch_area_indi_pane_cp03_ParamLimits

0xd830,	// (0x0002cb59) bg_touch_area_indi_pane_cp03

0xd84a,	// (0x0002cb73) popup_slider_window_g1_ParamLimits

0xd866,	// (0x0002cb8f) popup_slider_window_g2_ParamLimits

0xd882,	// (0x0002cbab) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002f010) popup_slider_window_g_ParamLimits

0xd8e8,	// (0x0002cc11) popup_slider_window_t1_ParamLimits

0xd95c,	// (0x0002cc85) small_volume_slider_vertical_pane_ParamLimits

0xe2e2,	// (0x0002d60b) cell_graphic2_pane_ParamLimits

0xe331,	// (0x0002d65a) bg_button_pane_cp10_ParamLimits

0xe331,	// (0x0002d65a) bg_button_pane_cp10

0xe344,	// (0x0002d66d) bg_button_pane_cp11_ParamLimits

0xe344,	// (0x0002d66d) bg_button_pane_cp11

0xe357,	// (0x0002d680) graphic2_pages_pane_g1_ParamLimits

0xe357,	// (0x0002d680) graphic2_pages_pane_g1

0xe372,	// (0x0002d69b) graphic2_pages_pane_g2_ParamLimits

0xe372,	// (0x0002d69b) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002f0d4) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002f0d4) graphic2_pages_pane_g

0xe38a,	// (0x0002d6b3) graphic2_pages_pane_t1_ParamLimits

0xe38a,	// (0x0002d6b3) graphic2_pages_pane_t1

0xe3a2,	// (0x0002d6cb) cell_graphic2_control_pane_ParamLimits

0xe3a2,	// (0x0002d6cb) cell_graphic2_control_pane

0xe3c0,	// (0x0002d6e9) cell_graphic2_pane_g1_ParamLimits

0xe3c0,	// (0x0002d6e9) cell_graphic2_pane_g1

0xe3cd,	// (0x0002d6f6) cell_graphic2_pane_g2_ParamLimits

0xe3cd,	// (0x0002d6f6) cell_graphic2_pane_g2

0xe3da,	// (0x0002d703) cell_graphic2_pane_g3_ParamLimits

0xe3da,	// (0x0002d703) cell_graphic2_pane_g3

0xe3e7,	// (0x0002d710) cell_graphic2_pane_g4_ParamLimits

0xe3e7,	// (0x0002d710) cell_graphic2_pane_g4

0xe3f4,	// (0x0002d71d) cell_graphic2_pane_g5_ParamLimits

0xe3f4,	// (0x0002d71d) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002f0d9) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002f0d9) cell_graphic2_pane_g

0xe40f,	// (0x0002d738) cell_graphic2_pane_t1_ParamLimits

0xe40f,	// (0x0002d738) cell_graphic2_pane_t1

0x89b4,	// (0x00027cdd) grid_highlight_pane_cp11_ParamLimits

0x89b4,	// (0x00027cdd) grid_highlight_pane_cp11

0x195d,	// (0x00020c86) bg_button_pane_cp05

0xe446,	// (0x0002d76f) cell_graphic2_control_pane_g1

0xc24b,	// (0x0002b574) bg_touch_area_indi_pane_g1

0xe46e,	// (0x0002d797) aid_cmod_rocker_key_size

0xe478,	// (0x0002d7a1) aid_cmode_itu_key_size

0xe482,	// (0x0002d7ab) main_cmode_video_pane

0xe48c,	// (0x0002d7b5) main_comp_mode_itu_pane

0xe498,	// (0x0002d7c1) main_comp_mode_rocker_pane

0xe4a4,	// (0x0002d7cd) cell_cmode_rocker_pane_ParamLimits

0xe4a4,	// (0x0002d7cd) cell_cmode_rocker_pane

0xe4b6,	// (0x0002d7df) cell_cmode_itu_pane_ParamLimits

0xe4b6,	// (0x0002d7df) cell_cmode_itu_pane

0x1c43,	// (0x00020f6c) bg_button_pane_cp06_ParamLimits

0x1c43,	// (0x00020f6c) bg_button_pane_cp06

0xc4bb,	// (0x0002b7e4) cell_cmode_rocker_pane_g1_ParamLimits

0xc4bb,	// (0x0002b7e4) cell_cmode_rocker_pane_g1

0xda00,	// (0x0002cd29) cell_cmode_rocker_pane_g2_ParamLimits

0xda00,	// (0x0002cd29) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002f0e9) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002f0e9) cell_cmode_rocker_pane_g

0x17a9,	// (0x00020ad2) bg_button_pane_cp07

0xe4cb,	// (0x0002d7f4) cell_cmode_itu_pane_g1

0xe4d4,	// (0x0002d7fd) cell_cmode_itu_pane_t1

0xe4e2,	// (0x0002d80b) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002f0ee) cell_cmode_itu_pane_t

0xdc25,	// (0x0002cf4e) aid_touch_ctrl_left

0xdc2d,	// (0x0002cf56) aid_touch_ctrl_right

0x17a9,	// (0x00020ad2) compa_mode_pane

0xe4f0,	// (0x0002d819) aid_cmod_rocker_key_size_cp

0xe4fa,	// (0x0002d823) aid_cmode_itu_key_size_cp

0xe504,	// (0x0002d82d) compa_mode_pane_g1

0xe50c,	// (0x0002d835) compa_mode_pane_g2

0xe514,	// (0x0002d83d) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002f0f3) compa_mode_pane_g

0xe51c,	// (0x0002d845) main_comp_mode_itu_pane_cp

0xe524,	// (0x0002d84d) main_comp_mode_rocker_pane_cp

0xe52c,	// (0x0002d855) cell_cmode_itu_pane_cp_ParamLimits

0xe52c,	// (0x0002d855) cell_cmode_itu_pane_cp

0xe541,	// (0x0002d86a) cell_cmode_rocker_pane_cp_ParamLimits

0xe541,	// (0x0002d86a) cell_cmode_rocker_pane_cp

0x1c43,	// (0x00020f6c) bg_button_pane_cp06_cp_ParamLimits

0x1c43,	// (0x00020f6c) bg_button_pane_cp06_cp

0xc4bb,	// (0x0002b7e4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4bb,	// (0x0002b7e4) cell_cmode_rocker_pane_g1_cp

0xc24b,	// (0x0002b574) cell_cmode_rocker_pane_g2_cp

0x17a9,	// (0x00020ad2) bg_button_pane_cp07_cp

0xe553,	// (0x0002d87c) cell_cmode_itu_pane_g1_cp

0xe55c,	// (0x0002d885) cell_cmode_itu_pane_t1_cp

0xe55c,	// (0x0002d885) cell_cmode_itu_pane_t2_cp

0xb17a,	// (0x0002a4a3) settings_code_pane_cp2

0x1819,	// (0x00020b42) bg_popup_window_pane_cp3_ParamLimits

0x1a76,	// (0x00020d9f) heading_pane_cp3_ParamLimits

0x1a82,	// (0x00020dab) listscroll_popup_graphic_pane_ParamLimits

0x8eb9,	// (0x000281e2) fep_hwr_aid_pane_ParamLimits

0x9282,	// (0x000285ab) aid_touch_sctrl_top_ParamLimits

0x928f,	// (0x000285b8) sctrl_sk_top_pane_g1_ParamLimits

0xc4bb,	// (0x0002b7e4) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002f029) sctrl_sk_top_pane_g_ParamLimits

0x929c,	// (0x000285c5) sctrl_sk_top_pane_t1_ParamLimits

0x9282,	// (0x000285ab) aid_touch_sctrl_bottom_ParamLimits

0x929c,	// (0x000285c5) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb6f,	// (0x0002ce98) aid_area_touch_clock

0x9477,	// (0x000287a0) aid_vkb2_area_top_pane_cell_ParamLimits

0x9477,	// (0x000287a0) aid_vkb2_area_top_pane_cell

0x95c2,	// (0x000288eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x95c2,	// (0x000288eb) aid_vkb2_area_bottom_pane_cell

0xe0dd,	// (0x0002d406) popup_char_count_window

0xe56a,	// (0x0002d893) popup_char_count_window_g1

0xe573,	// (0x0002d89c) popup_char_count_window_g2

0xe57c,	// (0x0002d8a5) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002f0fa) popup_char_count_window_g

0xe585,	// (0x0002d8ae) popup_char_count_window_t1

0x933d,	// (0x00028666) popup_fep_char_preview_window_ParamLimits

0x933d,	// (0x00028666) popup_fep_char_preview_window

0x9495,	// (0x000287be) vkb2_top_candi_pane_ParamLimits

0x9495,	// (0x000287be) vkb2_top_candi_pane

0xe593,	// (0x0002d8bc) cell_vkb2_top_candi_pane_ParamLimits

0xe593,	// (0x0002d8bc) cell_vkb2_top_candi_pane

0xa2f7,	// (0x00029620) bg_popup_fep_char_preview_window_ParamLimits

0xa2f7,	// (0x00029620) bg_popup_fep_char_preview_window

0x98a5,	// (0x00028bce) popup_fep_char_preview_window_t1_ParamLimits

0x98a5,	// (0x00028bce) popup_fep_char_preview_window_t1

0xe5e0,	// (0x0002d909) bg_popup_fep_char_preview_window_g1

0xe5e8,	// (0x0002d911) bg_popup_fep_char_preview_window_g2

0xe5f0,	// (0x0002d919) bg_popup_fep_char_preview_window_g3

0xe5f8,	// (0x0002d921) bg_popup_fep_char_preview_window_g4

0xe600,	// (0x0002d929) bg_popup_fep_char_preview_window_g5

0x98df,	// (0x00028c08) bg_popup_fep_char_preview_window_g6

0xe608,	// (0x0002d931) bg_popup_fep_char_preview_window_g7

0xe610,	// (0x0002d939) bg_popup_fep_char_preview_window_g8

0xe618,	// (0x0002d941) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002f101) bg_popup_fep_char_preview_window_g

0xc4bb,	// (0x0002b7e4) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4bb,	// (0x0002b7e4) cell_vkb2_top_candi_pane_g1

0xc7d2,	// (0x0002bafb) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc7d2,	// (0x0002bafb) cell_vkb2_top_candi_pane_g2

0xc7f3,	// (0x0002bb1c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc7f3,	// (0x0002bb1c) cell_vkb2_top_candi_pane_g3

0x98e7,	// (0x00028c10) cell_vkb2_top_candi_pane_g4_ParamLimits

0x98e7,	// (0x00028c10) cell_vkb2_top_candi_pane_g4

0xe620,	// (0x0002d949) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe620,	// (0x0002d949) cell_vkb2_top_candi_pane_g5

0xda00,	// (0x0002cd29) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda00,	// (0x0002cd29) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002f114) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002f114) cell_vkb2_top_candi_pane_g

0x9908,	// (0x00028c31) cell_vkb2_top_candi_pane_t1

0x8cd1,	// (0x00027ffa) aid_size_touch_slider_mark_ParamLimits

0x8cd1,	// (0x00027ffa) aid_size_touch_slider_mark

0xe220,	// (0x0002d549) grid_graphic2_catg_pane_ParamLimits

0xe220,	// (0x0002d549) grid_graphic2_catg_pane

0xe2be,	// (0x0002d5e7) popup_grid_graphic2_window_t1_ParamLimits

0xe2be,	// (0x0002d5e7) popup_grid_graphic2_window_t1

0xe2d0,	// (0x0002d5f9) popup_grid_graphic2_window_t2_ParamLimits

0xe2d0,	// (0x0002d5f9) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002f0cf) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002f0cf) popup_grid_graphic2_window_t

0x195d,	// (0x00020c86) bg_button_pane_cp05_ParamLimits

0xe446,	// (0x0002d76f) cell_graphic2_control_pane_g1_ParamLimits

0xe641,	// (0x0002d96a) cell_graphic2_catg_pane_ParamLimits

0xe641,	// (0x0002d96a) cell_graphic2_catg_pane

0x17a9,	// (0x00020ad2) bg_button_pane_cp12

0xe653,	// (0x0002d97c) cell_graphic2_catg_pane_g1

0xdb3a,	// (0x0002ce63) cell_tb_ext_pane_t1_ParamLimits

0x96df,	// (0x00028a08) vkb2_top_cell_right_narrow_pane_ParamLimits

0x96df,	// (0x00028a08) vkb2_top_cell_right_narrow_pane

0x96f7,	// (0x00028a20) vkb2_top_cell_right_wide_pane_ParamLimits

0x96f7,	// (0x00028a20) vkb2_top_cell_right_wide_pane

0x8eab,	// (0x000281d4) bg_vkb2_func_pane_ParamLimits

0x8eab,	// (0x000281d4) bg_vkb2_func_pane

0x9768,	// (0x00028a91) vkb2_top_cell_left_pane_g1_ParamLimits

0x8eab,	// (0x000281d4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8eab,	// (0x000281d4) bg_vkb2_fuc_pane_cp03

0x97c6,	// (0x00028aef) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x88d0,	// (0x00027bf9) bg_vkb2_func_pane_g1

0x88d8,	// (0x00027c01) bg_vkb2_func_pane_g2

0x88e8,	// (0x00027c11) bg_vkb2_func_pane_g3

0x88e0,	// (0x00027c09) bg_vkb2_func_pane_g4

0x88f0,	// (0x00027c19) bg_vkb2_func_pane_g5

0x88f8,	// (0x00027c21) bg_vkb2_func_pane_g6

0x8900,	// (0x00027c29) bg_vkb2_func_pane_g7

0x8908,	// (0x00027c31) bg_vkb2_func_pane_g8

0x88c8,	// (0x00027bf1) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002f121) bg_vkb2_func_pane_g

0x8eab,	// (0x000281d4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8eab,	// (0x000281d4) bg_vkb2_fuc_pane_cp01

0x9768,	// (0x00028a91) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9768,	// (0x00028a91) vkb2_top_cell_right_wide_pane_g1

0x8eab,	// (0x000281d4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8eab,	// (0x000281d4) bg_vkb2_fuc_pane_cp02

0x97c6,	// (0x00028aef) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x97c6,	// (0x00028aef) vkb2_top_cell_right_narrow_pane_g1

0xd75c,	// (0x0002ca85) aid_touch_area_decrease_ParamLimits

0xd75c,	// (0x0002ca85) aid_touch_area_decrease

0xd780,	// (0x0002caa9) aid_touch_area_increase_ParamLimits

0xd780,	// (0x0002caa9) aid_touch_area_increase

0xd798,	// (0x0002cac1) aid_touch_area_mute_ParamLimits

0xd798,	// (0x0002cac1) aid_touch_area_mute

0xd7b4,	// (0x0002cadd) aid_touch_area_slider_ParamLimits

0xd7b4,	// (0x0002cadd) aid_touch_area_slider

0xd89e,	// (0x0002cbc7) popup_slider_window_g4_ParamLimits

0xd89e,	// (0x0002cbc7) popup_slider_window_g4

0xd8b6,	// (0x0002cbdf) popup_slider_window_g5_ParamLimits

0xd8b6,	// (0x0002cbdf) popup_slider_window_g5

0xd8d8,	// (0x0002cc01) popup_slider_window_g6_ParamLimits

0xd8d8,	// (0x0002cc01) popup_slider_window_g6

0xd916,	// (0x0002cc3f) popup_slider_window_t2_ParamLimits

0xd916,	// (0x0002cc3f) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002f01d) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002f01d) popup_slider_window_t

0xd92e,	// (0x0002cc57) slider_pane_ParamLimits

0xd92e,	// (0x0002cc57) slider_pane

0xe65c,	// (0x0002d985) slider_pane_g1_ParamLimits

0xe65c,	// (0x0002d985) slider_pane_g1

0xe670,	// (0x0002d999) slider_pane_g2_ParamLimits

0xe670,	// (0x0002d999) slider_pane_g2

0xe686,	// (0x0002d9af) slider_pane_g3_ParamLimits

0xe686,	// (0x0002d9af) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002f134) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002f134) slider_pane_g

0x82c4,	// (0x000275ed) popup_tb_float_extension_window_ParamLimits

0x82c4,	// (0x000275ed) popup_tb_float_extension_window

0xe6b2,	// (0x0002d9db) aid_size_cell_tb_float_ext

0x17a9,	// (0x00020ad2) bg_popup_sub_window_cp28

0xe6be,	// (0x0002d9e7) grid_tb_float_ext_pane

0xe6c8,	// (0x0002d9f1) cell_tb_float_ext_pane_ParamLimits

0xe6c8,	// (0x0002d9f1) cell_tb_float_ext_pane

0xe6e2,	// (0x0002da0b) cell_tb_float_ext_pane_g1

0xe6eb,	// (0x0002da14) grid_highlight_pane_cp12

0x8fec,	// (0x00028315) cell_last_hwr_side_pane_ParamLimits

0x8fec,	// (0x00028315) cell_last_hwr_side_pane

0xc24b,	// (0x0002b574) cell_last_hwr_side_pane_g1

0xe6f4,	// (0x0002da1d) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002f13d) cell_last_hwr_side_pane_g

0x968e,	// (0x000289b7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x968e,	// (0x000289b7) vkb2_area_bottom_space_btn_pane

0xc4bb,	// (0x0002b7e4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe192,	// (0x0002d4bb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9908,	// (0x00028c31) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9927,	// (0x00028c50) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9927,	// (0x00028c50) vkb2_area_bottom_space_btn_pane_g1

0x9961,	// (0x00028c8a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9961,	// (0x00028c8a) vkb2_area_bottom_space_btn_pane_g2

0x9997,	// (0x00028cc0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9997,	// (0x00028cc0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002f142) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002f142) vkb2_area_bottom_space_btn_pane_g

0x8f60,	// (0x00028289) cel_fep_hwr_func_pane_ParamLimits

0x8f60,	// (0x00028289) cel_fep_hwr_func_pane

0x8f9c,	// (0x000282c5) cell_hwr_side_button_pane_ParamLimits

0x8f9c,	// (0x000282c5) cell_hwr_side_button_pane

0xdb6f,	// (0x0002ce98) aid_area_touch_clock_ParamLimits

0x195d,	// (0x00020c86) bg_uniindi_top_pane_ParamLimits

0xdb81,	// (0x0002ceaa) uniindi_top_pane_g1_ParamLimits

0xdb97,	// (0x0002cec0) uniindi_top_pane_g2_ParamLimits

0xdba3,	// (0x0002cecc) uniindi_top_pane_g3_ParamLimits

0xdbb4,	// (0x0002cedd) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002f055) uniindi_top_pane_g_ParamLimits

0xdbc1,	// (0x0002ceea) uniindi_top_pane_t1_ParamLimits

0x195d,	// (0x00020c86) bg_vkb2_func_pane_cp01_ParamLimits

0x195d,	// (0x00020c86) bg_vkb2_func_pane_cp01

0xe6fd,	// (0x0002da26) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6fd,	// (0x0002da26) cel_fep_hwr_func_pane_g1

0x195d,	// (0x00020c86) bg_vkb2_func_pane_cp02_ParamLimits

0x195d,	// (0x00020c86) bg_vkb2_func_pane_cp02

0xe6fd,	// (0x0002da26) cell_hwr_side_button_pane_g1_ParamLimits

0xe6fd,	// (0x0002da26) cell_hwr_side_button_pane_g1

0x871c,	// (0x00027a45) status_pane_g4_ParamLimits

0x871c,	// (0x00027a45) status_pane_g4

0x8736,	// (0x00027a5f) status_pane_t1

0xbf86,	// (0x0002b2af) form2_midp_gauge_slider_cont_pane

0xbf8e,	// (0x0002b2b7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfa0,	// (0x0002b2c9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfb2,	// (0x0002b2db) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0002ee28) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfc4,	// (0x0002b2ed) form2_midp_slider_pane_ParamLimits

0x92fd,	// (0x00028626) aid_size_cell_func_vkb2_ParamLimits

0x92fd,	// (0x00028626) aid_size_cell_func_vkb2

0xe69e,	// (0x0002d9c7) slider_pane_g4_ParamLimits

0xe69e,	// (0x0002d9c7) slider_pane_g4

0x99e1,	// (0x00028d0a) form2_midp_gauge_slider_pane_t2_cp01

0x99ef,	// (0x00028d18) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x99ef,	// (0x00028d18) form2_midp_gauge_slider_pane_t3_cp01

0x9a0c,	// (0x00028d35) form2_midp_slider_pane_cp01

0x17a9,	// (0x00020ad2) navi_smil_pane

0xe736,	// (0x0002da5f) navi_smil_pane_g1

0xe73e,	// (0x0002da67) navi_smil_pane_t1

0xe70b,	// (0x0002da34) form2_midp_slider_pane_g1

0xe714,	// (0x0002da3d) form2_midp_slider_pane_g2

0xe71c,	// (0x0002da45) form2_midp_slider_pane_g3

0xe70b,	// (0x0002da34) form2_midp_slider_pane_g4

0xe724,	// (0x0002da4d) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002f14b) form2_midp_slider_pane_g

0x99d1,	// (0x00028cfa) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x99d1,	// (0x00028cfa) vkb2_area_bottom_space_btn_pane_g4

0x854b,	// (0x00027874) lc0_navi_pane_ParamLimits

0x854b,	// (0x00027874) lc0_navi_pane

0x85c1,	// (0x000278ea) lc0_stat_indi_pane_ParamLimits

0x85c1,	// (0x000278ea) lc0_stat_indi_pane

0x85d8,	// (0x00027901) ls0_title_pane_ParamLimits

0x85d8,	// (0x00027901) ls0_title_pane

0x1c43,	// (0x00020f6c) bg_popup_sub_pane_cp14_ParamLimits

0xdb56,	// (0x0002ce7f) list_uniindi_pane_ParamLimits

0xdb62,	// (0x0002ce8b) uniindi_top_pane_ParamLimits

0xdbfd,	// (0x0002cf26) list_single_uniindi_pane_g1_ParamLimits

0xdc10,	// (0x0002cf39) list_single_uniindi_pane_t1_ParamLimits

0x9a15,	// (0x00028d3e) lc0_stat_clock_pane_ParamLimits

0x9a15,	// (0x00028d3e) lc0_stat_clock_pane

0xe74c,	// (0x0002da75) lc0_stat_indi_pane_g1_ParamLimits

0xe74c,	// (0x0002da75) lc0_stat_indi_pane_g1

0xe759,	// (0x0002da82) lc0_stat_indi_pane_g2_ParamLimits

0xe759,	// (0x0002da82) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002f156) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002f156) lc0_stat_indi_pane_g

0x9a22,	// (0x00028d4b) lc0_uni_indicator_pane_ParamLimits

0x9a22,	// (0x00028d4b) lc0_uni_indicator_pane

0xe766,	// (0x0002da8f) ls0_title_pane_g1_ParamLimits

0xe766,	// (0x0002da8f) ls0_title_pane_g1

0xe77a,	// (0x0002daa3) ls0_title_pane_t1_ParamLimits

0xe77a,	// (0x0002daa3) ls0_title_pane_t1

0x9a2f,	// (0x00028d58) lc0_uni_indicator_pane_g1_ParamLimits

0x9a2f,	// (0x00028d58) lc0_uni_indicator_pane_g1

0xe7b0,	// (0x0002dad9) lc0_stat_clock_pane_t1

0x17a9,	// (0x00020ad2) main_ai5_pane

0xe7be,	// (0x0002dae7) ai5_sk_pane_ParamLimits

0xe7be,	// (0x0002dae7) ai5_sk_pane

0xe7cb,	// (0x0002daf4) cell_ai5_widget_pane_ParamLimits

0xe7cb,	// (0x0002daf4) cell_ai5_widget_pane

0xe87d,	// (0x0002dba6) aid_size_cell_widget_grid

0xe88b,	// (0x0002dbb4) bg_ai5_widget_pane_ParamLimits

0xe88b,	// (0x0002dbb4) bg_ai5_widget_pane

0xe903,	// (0x0002dc2c) cell_ai5_widget_pane_g2

0xe917,	// (0x0002dc40) cell_ai5_widget_pane_g3

0xe931,	// (0x0002dc5a) cell_ai5_widget_pane_g4

0xe941,	// (0x0002dc6a) cell_ai5_widget_pane_g5

0xe951,	// (0x0002dc7a) cell_ai5_widget_pane_g6

0xe95d,	// (0x0002dc86) cell_ai5_widget_pane_g7

0xe9a5,	// (0x0002dcce) cell_ai5_widget_pane_t1_ParamLimits

0xe9a5,	// (0x0002dcce) cell_ai5_widget_pane_t1

0xe9c2,	// (0x0002dceb) cell_ai5_widget_pane_t2_ParamLimits

0xe9c2,	// (0x0002dceb) cell_ai5_widget_pane_t2

0xe9da,	// (0x0002dd03) cell_ai5_widget_pane_t3_ParamLimits

0xe9da,	// (0x0002dd03) cell_ai5_widget_pane_t3

0xe9f2,	// (0x0002dd1b) cell_ai5_widget_pane_t4_ParamLimits

0xe9f2,	// (0x0002dd1b) cell_ai5_widget_pane_t4

0xea18,	// (0x0002dd41) cell_ai5_widget_pane_t5_ParamLimits

0xea18,	// (0x0002dd41) cell_ai5_widget_pane_t5

0xea38,	// (0x0002dd61) cell_ai5_widget_pane_t6_ParamLimits

0xea38,	// (0x0002dd61) cell_ai5_widget_pane_t6

0xea4a,	// (0x0002dd73) cell_ai5_widget_pane_t7_ParamLimits

0xea4a,	// (0x0002dd73) cell_ai5_widget_pane_t7

0xea63,	// (0x0002dd8c) cell_ai5_widget_pane_t8_ParamLimits

0xea63,	// (0x0002dd8c) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002f170) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002f170) cell_ai5_widget_pane_t

0xeac2,	// (0x0002ddeb) grid_ai5_widget_pane

0x1c43,	// (0x00020f6c) highlight_cell_ai5_widget_pane_ParamLimits

0x1c43,	// (0x00020f6c) highlight_cell_ai5_widget_pane

0xead0,	// (0x0002ddf9) ai5_sk_left_pane

0xeada,	// (0x0002de03) ai5_sk_middle_pane

0xeae4,	// (0x0002de0d) ai5_sk_right_pane

0xeaee,	// (0x0002de17) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x0002de17) bg_ai5_widget_pane_g1

0xeafa,	// (0x0002de23) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x0002de23) bg_ai5_widget_pane_g2

0xeb06,	// (0x0002de2f) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x0002de2f) bg_ai5_widget_pane_g3

0xeb12,	// (0x0002de3b) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x0002de3b) bg_ai5_widget_pane_g4

0xeb1e,	// (0x0002de47) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x0002de47) bg_ai5_widget_pane_g5

0xeb2a,	// (0x0002de53) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x0002de53) bg_ai5_widget_pane_g6

0xeb36,	// (0x0002de5f) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x0002de5f) bg_ai5_widget_pane_g7

0xeb42,	// (0x0002de6b) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x0002de6b) bg_ai5_widget_pane_g8

0xeb4e,	// (0x0002de77) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x0002de77) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002f185) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002f185) bg_ai5_widget_pane_g

0xeb80,	// (0x0002dea9) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x0002dea9) cell_shortcut_ai5_widget_pane

0x7897,	// (0x00026bc0) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x0002deba) cell_grid_ai5_widget_pane_g1

0x7897,	// (0x00026bc0) highlight_cell_shortcut_ai5_widget_pane

0x88d8,	// (0x00027c01) ai5_sk_left_pane_g1

0xeb9a,	// (0x0002dec3) ai5_sk_left_pane_g2

0xeba2,	// (0x0002decb) ai5_sk_left_pane_g3

0xebaa,	// (0x0002ded3) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002f198) ai5_sk_left_pane_g

0xebb2,	// (0x0002dedb) ai5_sk_left_pane_t1

0x88d0,	// (0x00027bf9) ai5_sk_right_pane_g1

0xebc0,	// (0x0002dee9) ai5_sk_right_pane_g2

0xebc8,	// (0x0002def1) ai5_sk_right_pane_g3

0xebd0,	// (0x0002def9) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002f1a1) ai5_sk_right_pane_g

0xebd8,	// (0x0002df01) ai5_sk_right_pane_t1

0x88d0,	// (0x00027bf9) ai5_sk_middle_pane_g1

0x88d8,	// (0x00027c01) ai5_sk_middle_pane_g2

0x88f0,	// (0x00027c19) ai5_sk_middle_pane_g3

0xebc8,	// (0x0002def1) ai5_sk_middle_pane_g4

0xeba2,	// (0x0002decb) ai5_sk_middle_pane_g5

0xebe6,	// (0x0002df0f) ai5_sk_middle_pane_g6

0xebee,	// (0x0002df17) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002f1aa) ai5_sk_middle_pane_g

0x83d1,	// (0x000276fa) aid_touch_area_size_lc0_ParamLimits

0x83d1,	// (0x000276fa) aid_touch_area_size_lc0

0x90eb,	// (0x00028414) cell_hwr_candidate_pane_t1_ParamLimits

0x83ed,	// (0x00027716) aid_touch_navi_pane

0x86c6,	// (0x000279ef) status_dt_navi_pane_ParamLimits

0x86c6,	// (0x000279ef) status_dt_navi_pane

0x86d3,	// (0x000279fc) status_dt_sta_pane_ParamLimits

0x86d3,	// (0x000279fc) status_dt_sta_pane

0xebf6,	// (0x0002df1f) dt_sta_controll_pane

0xec03,	// (0x0002df2c) dt_sta_indi_pane

0xec14,	// (0x0002df3d) dt_sta_title_pane

0x195d,	// (0x00020c86) bg_dt_sta_indi_pane_ParamLimits

0x195d,	// (0x00020c86) bg_dt_sta_indi_pane

0xec27,	// (0x0002df50) dt_sta_battery_pane

0xec2f,	// (0x0002df58) dt_sta_indi_pane_g1

0xec38,	// (0x0002df61) dt_sta_indi_pane_g2

0xec41,	// (0x0002df6a) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002f1b9) dt_sta_indi_pane_g

0xec4a,	// (0x0002df73) dt_sta_signal_pane

0x1c43,	// (0x00020f6c) bg_dt_sta_title_pane_ParamLimits

0x1c43,	// (0x00020f6c) bg_dt_sta_title_pane

0xaab3,	// (0x00029ddc) dt_sta_title_pane_g1

0xec53,	// (0x0002df7c) dt_sta_title_pane_t1_ParamLimits

0xec53,	// (0x0002df7c) dt_sta_title_pane_t1

0x17a9,	// (0x00020ad2) bg_dt_sta_control_pane

0xec68,	// (0x0002df91) dt_sta_controll_pane_g1

0xec71,	// (0x0002df9a) bg_dt_sta_title_pane_g1

0xec7a,	// (0x0002dfa3) bg_dt_sta_title_pane_g2

0xec83,	// (0x0002dfac) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002f1c0) bg_dt_sta_title_pane_g

0xc24b,	// (0x0002b574) bg_dt_sta_indi_pane_g1

0xec8c,	// (0x0002dfb5) dt_sta_signal_pane_g1

0xec94,	// (0x0002dfbd) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002f1c7) dt_sta_signal_pane_g

0xec9c,	// (0x0002dfc5) dt_sta_battery_pane_g1

0xeca5,	// (0x0002dfce) dt_sta_battery_pane_t1

0xc24b,	// (0x0002b574) bg_dt_sta_control_pane_g1

0x2167,	// (0x00021490) fep_china_uni_eep_pane

0x216f,	// (0x00021498) fep_china_uni_entry_pane_ParamLimits

0x217f,	// (0x000214a8) popup_fep_china_uni_window_g1_ParamLimits

0x218f,	// (0x000214b8) popup_fep_china_uni_window_g2_ParamLimits

0x218f,	// (0x000214b8) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0002ea3c) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0002ea3c) popup_fep_china_uni_window_g

0xecb4,	// (0x0002dfdd) fep_china_uni_eep_pane_g1

0xecbc,	// (0x0002dfe5) fep_china_uni_eep_pane_t1

0xe72d,	// (0x0002da56) aid_touch_area_size_smil_player

0x8543,	// (0x0002786c) lc0_clock_pane

0x872a,	// (0x00027a53) status_pane_g5_ParamLimits

0x872a,	// (0x00027a53) status_pane_g5

0x7f85,	// (0x000272ae) popup_keymap_window

0x86e8,	// (0x00027a11) status_icon_pane

0xe917,	// (0x0002dc40) cell_ai5_widget_pane_g3_ParamLimits

0xe931,	// (0x0002dc5a) cell_ai5_widget_pane_g4_ParamLimits

0xe941,	// (0x0002dc6a) cell_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0002dc92) cell_ai5_widget_pane_g8_ParamLimits

0xe969,	// (0x0002dc92) cell_ai5_widget_pane_g8

0xe97d,	// (0x0002dca6) cell_ai5_widget_pane_g9_ParamLimits

0xe97d,	// (0x0002dca6) cell_ai5_widget_pane_g9

0xe991,	// (0x0002dcba) cell_ai5_widget_pane_g10_ParamLimits

0xe991,	// (0x0002dcba) cell_ai5_widget_pane_g10

0xeccb,	// (0x0002dff4) status_icon_pane_g1

0x17a9,	// (0x00020ad2) bg_popup_sub_pane_cp13

0xecd3,	// (0x0002dffc) popup_keymap_window_t1

0x7c82,	// (0x00026fab) control_pane_g6_ParamLimits

0x7c82,	// (0x00026fab) control_pane_g6

0x7c8f,	// (0x00026fb8) control_pane_g7_ParamLimits

0x7c8f,	// (0x00026fb8) control_pane_g7

0x7c9c,	// (0x00026fc5) control_pane_g8_ParamLimits

0x7c9c,	// (0x00026fc5) control_pane_g8

0xebf6,	// (0x0002df1f) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x0002df2c) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x0002df3d) dt_sta_title_pane_ParamLimits

0x1b30,	// (0x00020e59) aid_size_touch_scroll_bar_cale

0x67a1,	// (0x00025aca) popup_discreet_window_ParamLimits

0x67a1,	// (0x00025aca) popup_discreet_window

0x681b,	// (0x00025b44) popup_sk_window

0xa2f7,	// (0x00029620) bg_popup_sub_pane_cp28_ParamLimits

0xa2f7,	// (0x00029620) bg_popup_sub_pane_cp28

0xece1,	// (0x0002e00a) popup_discreet_window_g1_ParamLimits

0xece1,	// (0x0002e00a) popup_discreet_window_g1

0xed01,	// (0x0002e02a) popup_discreet_window_t1_ParamLimits

0xed01,	// (0x0002e02a) popup_discreet_window_t1

0xed1f,	// (0x0002e048) popup_discreet_window_t2_ParamLimits

0xed1f,	// (0x0002e048) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002f1cc) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002f1cc) popup_discreet_window_t

0x9a43,	// (0x00028d6c) popup_sk_window_g1

0x9a4d,	// (0x00028d76) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002f1d3) popup_sk_window_g

0x9a55,	// (0x00028d7e) popup_sk_window_t1

0x9a63,	// (0x00028d8c) popup_sk_window_t1_copy1

0xe903,	// (0x0002dc2c) cell_ai5_widget_pane_g2_ParamLimits

0xea75,	// (0x0002dd9e) cell_ai5_widget_pane_t9_ParamLimits

0xea75,	// (0x0002dd9e) cell_ai5_widget_pane_t9

0x17a9,	// (0x00020ad2) main_fep_fshwr2_pane

0x9a71,	// (0x00028d9a) aid_fshwr2_btn_pane

0x9a7d,	// (0x00028da6) aid_fshwr2_syb_pane

0x9a8f,	// (0x00028db8) aid_fshwr2_txt_pane

0x9a9b,	// (0x00028dc4) fshwr2_func_candi_pane

0x9ab9,	// (0x00028de2) fshwr2_hwr_syb_pane

0x9ad3,	// (0x00028dfc) fshwr2_icf_pane

0x17a9,	// (0x00020ad2) fshwr2_icf_bg_pane

0x9aff,	// (0x00028e28) fshwr2_icf_pane_t1_ParamLimits

0x9aff,	// (0x00028e28) fshwr2_icf_pane_t1

0x20e4,	// (0x0002140d) fshwr2_func_candi_pane_g1

0xed71,	// (0x0002e09a) fshwr2_func_candi_row_pane_ParamLimits

0xed71,	// (0x0002e09a) fshwr2_func_candi_row_pane

0x9b18,	// (0x00028e41) cell_fshwr2_syb_pane_ParamLimits

0x9b18,	// (0x00028e41) cell_fshwr2_syb_pane

0xe6fd,	// (0x0002da26) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe6fd,	// (0x0002da26) fshwr2_hwr_syb_pane_g1

0x17a9,	// (0x00020ad2) bg_popup_call_pane_cp01

0x9b3b,	// (0x00028e64) fshwr2_func_candi_cell_pane_ParamLimits

0x9b3b,	// (0x00028e64) fshwr2_func_candi_cell_pane

0xa953,	// (0x00029c7c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa953,	// (0x00029c7c) fshwr2_func_candi_cell_bg_pane

0x9b86,	// (0x00028eaf) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9b86,	// (0x00028eaf) fshwr2_func_candi_cell_pane_g1

0x9bae,	// (0x00028ed7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9bae,	// (0x00028ed7) fshwr2_func_candi_cell_pane_t1

0x17a9,	// (0x00020ad2) bg_button_pane_cp08

0xed98,	// (0x0002e0c1) cell_fshwr2_syb_bg_pane

0x9bc1,	// (0x00028eea) cell_fshwr2_syb_bg_pane_g1

0x9bd5,	// (0x00028efe) cell_fshwr2_syb_bg_pane_t1

0x1c43,	// (0x00020f6c) main_tmo_pane

0xadec,	// (0x0002a115) uni_indicator_pane_g1_ParamLimits

0xadff,	// (0x0002a128) uni_indicator_pane_g2_ParamLimits

0xae11,	// (0x0002a13a) uni_indicator_pane_g3_ParamLimits

0xae20,	// (0x0002a149) uni_indicator_pane_g4_ParamLimits

0xae20,	// (0x0002a149) uni_indicator_pane_g4

0xae34,	// (0x0002a15d) uni_indicator_pane_g5_ParamLimits

0xae34,	// (0x0002a15d) uni_indicator_pane_g5

0xae34,	// (0x0002a15d) uni_indicator_pane_g6_ParamLimits

0xae34,	// (0x0002a15d) uni_indicator_pane_g6

0xf912,	// (0x0002ec3b) uni_indicator_pane_g_ParamLimits

0xd73e,	// (0x0002ca67) popup_tmo_note_window_ParamLimits

0xd73e,	// (0x0002ca67) popup_tmo_note_window

0x1c43,	// (0x00020f6c) fshwr2_bg_pane

0x9b9f,	// (0x00028ec8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9b9f,	// (0x00028ec8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002f1d8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002f1d8) fshwr2_func_candi_cell_pane_g

0xc24b,	// (0x0002b574) bg_popup_window_pane_cp01

0x9beb,	// (0x00028f14) bg_popup_window_pane_g1_cp01

0xeda4,	// (0x0002e0cd) bg_popup_window_pane_cp22_ParamLimits

0xeda4,	// (0x0002e0cd) bg_popup_window_pane_cp22

0xedb2,	// (0x0002e0db) listscroll_tmo_link_pane_ParamLimits

0xedb2,	// (0x0002e0db) listscroll_tmo_link_pane

0xedf2,	// (0x0002e11b) popup_tmo_note_window_g1_ParamLimits

0xedf2,	// (0x0002e11b) popup_tmo_note_window_g1

0xedff,	// (0x0002e128) tmo_note_info_pane_ParamLimits

0xedff,	// (0x0002e128) tmo_note_info_pane

0xee19,	// (0x0002e142) list_tmo_note_info_pane_g1_ParamLimits

0xee19,	// (0x0002e142) list_tmo_note_info_pane_g1

0xee30,	// (0x0002e159) list_tmo_note_info_pane_g2_ParamLimits

0xee30,	// (0x0002e159) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002f1dd) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002f1dd) list_tmo_note_info_pane_g

0xee4c,	// (0x0002e175) list_tmo_note_info_text_pane_ParamLimits

0xee4c,	// (0x0002e175) list_tmo_note_info_text_pane

0xeecd,	// (0x0002e1f6) list_tmo_link_pane

0xeeda,	// (0x0002e203) scroll_pane_cp20

0xeee7,	// (0x0002e210) list_single_tmo_link_pane_ParamLimits

0xeee7,	// (0x0002e210) list_single_tmo_link_pane

0xeef7,	// (0x0002e220) list_single_tmo_link_pane_t1

0xef05,	// (0x0002e22e) list_tmo_note_info_text_pane_t1_ParamLimits

0xef05,	// (0x0002e22e) list_tmo_note_info_text_pane_t1

0x6f0f,	// (0x00026238) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6f0f,	// (0x00026238) aid_size_touch_scroll_bar_cp01

0x5974,	// (0x00024c9d) aid_size_touch_slider_marker

0x6803,	// (0x00025b2c) popup_settings_window_ParamLimits

0x6803,	// (0x00025b2c) popup_settings_window

0x5b39,	// (0x00024e62) popup_candi_list_indi_window

0x83ed,	// (0x00027716) aid_touch_navi_pane_ParamLimits

0x9256,	// (0x0002857f) rs_clock_indi_pane

0x925f,	// (0x00028588) sctrl_sk_bottom_pane_ParamLimits

0x9270,	// (0x00028599) sctrl_sk_top_pane_ParamLimits

0x9357,	// (0x00028680) popup_fep_tooltip_window

0xe87d,	// (0x0002dba6) aid_size_cell_widget_grid_ParamLimits

0xe8ee,	// (0x0002dc17) cell_ai5_widget_pane_g1_ParamLimits

0xe8ee,	// (0x0002dc17) cell_ai5_widget_pane_g1

0xe951,	// (0x0002dc7a) cell_ai5_widget_pane_g6_ParamLimits

0xe95d,	// (0x0002dc86) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002f15b) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002f15b) cell_ai5_widget_pane_g

0xeaa4,	// (0x0002ddcd) cell_ai5_widget_pane_t10_ParamLimits

0xeaa4,	// (0x0002ddcd) cell_ai5_widget_pane_t10

0xeac2,	// (0x0002ddeb) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0002de83) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0002de83) cell_contacts_ai5_widget_pane

0xed34,	// (0x0002e05d) popup_discreet_window_t3_ParamLimits

0xed34,	// (0x0002e05d) popup_discreet_window_t3

0x9aeb,	// (0x00028e14) popup_fshwr2_char_preview_window_ParamLimits

0x9aeb,	// (0x00028e14) popup_fshwr2_char_preview_window

0xee6a,	// (0x0002e193) tmo_note_info_pane_t1

0xee7f,	// (0x0002e1a8) tmo_note_info_pane_t2

0xee94,	// (0x0002e1bd) tmo_note_info_pane_t3

0xeea9,	// (0x0002e1d2) tmo_note_info_pane_t4

0xeebb,	// (0x0002e1e4) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002f1e2) tmo_note_info_pane_t

0xeecd,	// (0x0002e1f6) list_tmo_link_pane_ParamLimits

0xeeda,	// (0x0002e203) scroll_pane_cp20_ParamLimits

0x17a9,	// (0x00020ad2) bg_popup_fep_char_preview_window_cp01

0xef1e,	// (0x0002e247) popup_fshwr2_char_preview_window_t1

0xef2c,	// (0x0002e255) popup_candi_list_indi_window_g1

0xef35,	// (0x0002e25e) bg_cell_contacts_ai5_widget_pane

0xef41,	// (0x0002e26a) cell_contacts_ai5_widget_pane_g1

0xc93e,	// (0x0002bc67) cell_contacts_ai5_widget_pane_g2

0xef56,	// (0x0002e27f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002f1ed) cell_contacts_ai5_widget_pane_g

0xef62,	// (0x0002e28b) cell_contacts_ai5_widget_pane_t1

0x1c43,	// (0x00020f6c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd9,	// (0x0002e302) settings_container_pane

0x7897,	// (0x00026bc0) listscroll_set_pane_copy1

0xb94d,	// (0x0002ac76) scroll_pane_cp121_copy1

0xa0a4,	// (0x000293cd) set_content_pane_copy1

0xefe5,	// (0x0002e30e) aid_height_set_list_copy1_ParamLimits

0xefe5,	// (0x0002e30e) aid_height_set_list_copy1

0xb02c,	// (0x0002a355) aid_size_parent_copy1_ParamLimits

0xb02c,	// (0x0002a355) aid_size_parent_copy1

0xeff1,	// (0x0002e31a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff1,	// (0x0002e31a) button_value_adjust_pane_cp6_copy1

0x7dce,	// (0x000270f7) list_highlight_pane_cp2_copy1_ParamLimits

0x7dce,	// (0x000270f7) list_highlight_pane_cp2_copy1

0xf005,	// (0x0002e32e) list_set_pane_copy1_ParamLimits

0xf005,	// (0x0002e32e) list_set_pane_copy1

0xef74,	// (0x0002e29d) main_pane_set_t1_copy1_ParamLimits

0xef74,	// (0x0002e29d) main_pane_set_t1_copy1

0xefae,	// (0x0002e2d7) main_pane_set_t2_copy1_ParamLimits

0xefae,	// (0x0002e2d7) main_pane_set_t2_copy1

0xf0b2,	// (0x0002e3db) main_pane_set_t3_copy1

0xf0c0,	// (0x0002e3e9) main_pane_set_t4_copy1

0xefcd,	// (0x0002e2f6) set_content_pane_g1_copy1_ParamLimits

0xefcd,	// (0x0002e2f6) set_content_pane_g1_copy1

0xf0ce,	// (0x0002e3f7) setting_code_pane_copy1

0xf0d6,	// (0x0002e3ff) setting_slider_graphic_pane_copy1

0xf0d6,	// (0x0002e3ff) setting_slider_pane_copy1

0xf0d6,	// (0x0002e3ff) setting_text_pane_copy1

0xf0d6,	// (0x0002e3ff) setting_volume_pane_copy1

0xf0ce,	// (0x0002e3f7) settings_code_pane_cp2_copy1

0xf0de,	// (0x0002e407) settings_code_pane_cp_copy1_ParamLimits

0xf0de,	// (0x0002e407) settings_code_pane_cp_copy1

0x9bf4,	// (0x00028f1d) volume_set_pane_copy1

0xf0f2,	// (0x0002e41b) volume_set_pane_g10_copy1

0xf0fa,	// (0x0002e423) volume_set_pane_g1_copy1

0xf102,	// (0x0002e42b) volume_set_pane_g2_copy1

0xf10a,	// (0x0002e433) volume_set_pane_g3_copy1

0xf112,	// (0x0002e43b) volume_set_pane_g4_copy1

0xf11a,	// (0x0002e443) volume_set_pane_g5_copy1

0xf122,	// (0x0002e44b) volume_set_pane_g6_copy1

0xf12a,	// (0x0002e453) volume_set_pane_g7_copy1

0xf132,	// (0x0002e45b) volume_set_pane_g8_copy1

0xf13a,	// (0x0002e463) volume_set_pane_g9_copy1

0x1819,	// (0x00020b42) bg_set_opt_pane_cp_copy1_ParamLimits

0x1819,	// (0x00020b42) bg_set_opt_pane_cp_copy1

0x9bfc,	// (0x00028f25) setting_slider_pane_t1_copy1_ParamLimits

0x9bfc,	// (0x00028f25) setting_slider_pane_t1_copy1

0x9c1a,	// (0x00028f43) setting_slider_pane_t2_copy1_ParamLimits

0x9c1a,	// (0x00028f43) setting_slider_pane_t2_copy1

0x9c34,	// (0x00028f5d) setting_slider_pane_t3_copy1_ParamLimits

0x9c34,	// (0x00028f5d) setting_slider_pane_t3_copy1

0x9c4c,	// (0x00028f75) slider_set_pane_copy1_ParamLimits

0x9c4c,	// (0x00028f75) slider_set_pane_copy1

0x1d09,	// (0x00021032) set_opt_bg_pane_g1_copy2

0x1d11,	// (0x0002103a) set_opt_bg_pane_g2_copy2

0xf142,	// (0x0002e46b) set_opt_bg_pane_g3_copy2

0x1d21,	// (0x0002104a) set_opt_bg_pane_g4_copy2

0x1d29,	// (0x00021052) set_opt_bg_pane_g5_copy2

0x1d31,	// (0x0002105a) set_opt_bg_pane_g6_copy2

0xf14c,	// (0x0002e475) set_opt_bg_pane_g7_copy2

0xf154,	// (0x0002e47d) set_opt_bg_pane_g8_copy2

0xf15e,	// (0x0002e487) set_opt_bg_pane_g9_copy2

0x9c62,	// (0x00028f8b) aid_size_touch_slider_mark_copy1_ParamLimits

0x9c62,	// (0x00028f8b) aid_size_touch_slider_mark_copy1

0xf168,	// (0x0002e491) slider_set_pane_g1_copy1

0x9c76,	// (0x00028f9f) slider_set_pane_g2_copy1

0x8cf1,	// (0x0002801a) slider_set_pane_g3_copy1_ParamLimits

0x8cf1,	// (0x0002801a) slider_set_pane_g3_copy1

0x8d05,	// (0x0002802e) slider_set_pane_g4_copy1_ParamLimits

0x8d05,	// (0x0002802e) slider_set_pane_g4_copy1

0x8d1d,	// (0x00028046) slider_set_pane_g5_copy1_ParamLimits

0x8d1d,	// (0x00028046) slider_set_pane_g5_copy1

0x8cf1,	// (0x0002801a) slider_set_pane_g6_copy1_ParamLimits

0x8cf1,	// (0x0002801a) slider_set_pane_g6_copy1

0x9c7e,	// (0x00028fa7) slider_set_pane_g7_copy1_ParamLimits

0x9c7e,	// (0x00028fa7) slider_set_pane_g7_copy1

0x17bd,	// (0x00020ae6) bg_set_opt_pane_cp2_copy1

0xf171,	// (0x0002e49a) setting_slider_graphic_pane_g1_copy1

0xf17a,	// (0x0002e4a3) setting_slider_graphic_pane_t1_copy1

0xf18a,	// (0x0002e4b3) setting_slider_graphic_pane_t2_copy1

0xf19a,	// (0x0002e4c3) slider_set_pane_cp_copy1

0xf1aa,	// (0x0002e4d3) input_focus_pane_cp1_copy1

0xf1b3,	// (0x0002e4dc) list_set_text_pane_copy1

0xf1bb,	// (0x0002e4e4) setting_text_pane_g1_copy1

0x64fa,	// (0x00025823) set_text_pane_t1_copy1

0xf1aa,	// (0x0002e4d3) input_focus_pane_cp2_copy1

0xf1bb,	// (0x0002e4e4) setting_code_pane_g1_copy1

0xf1c4,	// (0x0002e4ed) setting_code_pane_t1_copy1

0xf1d2,	// (0x0002e4fb) list_set_graphic_pane_copy1

0x17bd,	// (0x00020ae6) bg_set_opt_pane_cp4_copy1

0x3bf0,	// (0x00022f19) list_set_graphic_pane_g1_copy1_ParamLimits

0x3bf0,	// (0x00022f19) list_set_graphic_pane_g1_copy1

0xf1e6,	// (0x0002e50f) list_set_graphic_pane_g2_copy1

0x3c08,	// (0x00022f31) list_set_graphic_pane_t1_copy1_ParamLimits

0x3c08,	// (0x00022f31) list_set_graphic_pane_t1_copy1

0xc24b,	// (0x0002b574) rs_clock_indi_pane_g1

0xf1ee,	// (0x0002e517) rs_clock_indi_pane_t1

0xf1fc,	// (0x0002e525) rs_indi_pane

0xf204,	// (0x0002e52d) rs_indi_pane_g1

0xf20d,	// (0x0002e536) rs_indi_pane_g2

0xef2c,	// (0x0002e255) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002f1f4) rs_indi_pane_g

0x7897,	// (0x00026bc0) bg_popup_preview_window_pane_cp03

0xf216,	// (0x0002e53f) popup_fep_tooltip_window_t1

0xcee6,	// (0x0002c20f) popup_note2_window_g2_ParamLimits

0xcee6,	// (0x0002c20f) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0002ef94) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0002ef94) popup_note2_window_g

0xd3dc,	// (0x0002c705) bg_popup_sub_pane_cp11_ParamLimits

0xd3e9,	// (0x0002c712) cell_ai3_links_pane_g1_ParamLimits

0xd400,	// (0x0002c729) cell_ai3_links_pane_t1

0x64fa,	// (0x00025823) set_text_pane_t1_copy1_ParamLimits

0x77a8,	// (0x00026ad1) cell_graphic_popup_pane_cp2_ParamLimits

0x77a8,	// (0x00026ad1) cell_graphic_popup_pane_cp2

0xf224,	// (0x0002e54d) cell_graphic_popup_pane_g1_cp2

0x1ab3,	// (0x00020ddc) cell_graphic_popup_pane_g2_cp2

0xf22c,	// (0x0002e555) cell_graphic_popup_pane_g3_cp2

0xf234,	// (0x0002e55d) cell_graphic_popup_pane_t2_cp2

0x1ac4,	// (0x00020ded) grid_highlight_pane_cp3_cp2

0x1f61,	// (0x0002128a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1c43,	// (0x00020f6c) main_tmo_pane_ParamLimits

0xd732,	// (0x0002ca5b) popup_tmo_big_image_note_window

0xe8dd,	// (0x0002dc06) cell_ai5_widget_list_pane

0xe8e5,	// (0x0002dc0e) cell_ai5_widget_lrg_icon_pane

0xee6a,	// (0x0002e193) tmo_note_info_pane_t1_ParamLimits

0xee7f,	// (0x0002e1a8) tmo_note_info_pane_t2_ParamLimits

0xee94,	// (0x0002e1bd) tmo_note_info_pane_t3_ParamLimits

0xeea9,	// (0x0002e1d2) tmo_note_info_pane_t4_ParamLimits

0xeebb,	// (0x0002e1e4) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002f1e2) tmo_note_info_pane_t_ParamLimits

0xefd9,	// (0x0002e302) settings_container_pane_ParamLimits

0xf1a2,	// (0x0002e4cb) indicator_popup_pane_cp5

0xf1a2,	// (0x0002e4cb) indicator_popup_pane_cp6

0xf1d2,	// (0x0002e4fb) list_set_graphic_pane_copy1_ParamLimits

0x17a9,	// (0x00020ad2) bg_popup_window_pane_cp23

0xf242,	// (0x0002e56b) popup_tmo_big_image_note_window_g1

0xf24b,	// (0x0002e574) popup_tmo_big_image_note_window_t1

0xf25b,	// (0x0002e584) popup_tmo_big_image_note_window_t2

0xf26b,	// (0x0002e594) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002f1fb) popup_tmo_big_image_note_window_t

0xc24b,	// (0x0002b574) cell_ai5_widget_lrg_icon_pane_g1

0xf27b,	// (0x0002e5a4) cell_ai5_widget_lrg_icon_pane_t1

0xf289,	// (0x0002e5b2) cell_ai5_widget_list_row_pane_ParamLimits

0xf289,	// (0x0002e5b2) cell_ai5_widget_list_row_pane

0xf2a0,	// (0x0002e5c9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a0,	// (0x0002e5c9) cell_ai5_widget_list_row_pane_g1

0xf2ad,	// (0x0002e5d6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2ad,	// (0x0002e5d6) cell_ai5_widget_list_row_pane_t1

0xf2d8,	// (0x0002e601) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2d8,	// (0x0002e601) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x0002f202) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002f202) cell_ai5_widget_list_row_pane_t

0x17a9,	// (0x00020ad2) main_fep_vtchi_ss_pane

0xf320,	// (0x0002e649) popup_fep_char_pre_window

0xf328,	// (0x0002e651) popup_fep_ituss_window

0xf354,	// (0x0002e67d) popup_fep_vkbss_window

0xf37e,	// (0x0002e6a7) grid_vkbss_keypad_pane_ParamLimits

0xf37e,	// (0x0002e6a7) grid_vkbss_keypad_pane

0xf38e,	// (0x0002e6b7) ituss_keypad_pane

0x9ca0,	// (0x00028fc9) aid_vkbss_key_offset_ParamLimits

0x9ca0,	// (0x00028fc9) aid_vkbss_key_offset

0x9cac,	// (0x00028fd5) cell_vkbss_key_pane_ParamLimits

0x9cac,	// (0x00028fd5) cell_vkbss_key_pane

0x8704,	// (0x00027a2d) bg_cell_vkbss_key_g1_ParamLimits

0x8704,	// (0x00027a2d) bg_cell_vkbss_key_g1

0xf39d,	// (0x0002e6c6) cell_vkbss_key_3p_pane_ParamLimits

0xf39d,	// (0x0002e6c6) cell_vkbss_key_3p_pane

0xf3b1,	// (0x0002e6da) cell_vkbss_key_g1_ParamLimits

0xf3b1,	// (0x0002e6da) cell_vkbss_key_g1

0xf3c5,	// (0x0002e6ee) cell_vkbss_key_t1_ParamLimits

0xf3c5,	// (0x0002e6ee) cell_vkbss_key_t1

0x9cc2,	// (0x00028feb) cell_ituss_key_pane_ParamLimits

0x9cc2,	// (0x00028feb) cell_ituss_key_pane

0xf3f0,	// (0x0002e719) bg_cell_ituss_key_g1_ParamLimits

0xf3f0,	// (0x0002e719) bg_cell_ituss_key_g1

0xf3fc,	// (0x0002e725) cell_ituss_key_pane_g1_ParamLimits

0xf3fc,	// (0x0002e725) cell_ituss_key_pane_g1

0x9cd3,	// (0x00028ffc) cell_ituss_key_pane_g2_ParamLimits

0x9cd3,	// (0x00028ffc) cell_ituss_key_pane_g2

0x0002,

0xfee0,	// (0x0002f209) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0002f209) cell_ituss_key_pane_g

0x9cff,	// (0x00029028) cell_ituss_key_t1_ParamLimits

0x9cff,	// (0x00029028) cell_ituss_key_t1

0x9d39,	// (0x00029062) cell_ituss_key_t2_ParamLimits

0x9d39,	// (0x00029062) cell_ituss_key_t2

0x9d6a,	// (0x00029093) cell_ituss_key_t3_ParamLimits

0x9d6a,	// (0x00029093) cell_ituss_key_t3

0x9d39,	// (0x00029062) cell_ituss_key_t4_ParamLimits

0x9d39,	// (0x00029062) cell_ituss_key_t4

0x0004,

0xfee7,	// (0x0002f210) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x0002f210) cell_ituss_key_t

0xf422,	// (0x0002e74b) cell_vkbss_key_3p_pane_g1

0xf42a,	// (0x0002e753) cell_vkbss_key_3p_pane_g2

0xf432,	// (0x0002e75b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef2,	// (0x0002f21b) cell_vkbss_key_3p_pane_g

0x7897,	// (0x00026bc0) bg_popup_fep_char_preview_window_cp02

0xf43a,	// (0x0002e763) popup_fep_char_pre_window_t1

0xe873,	// (0x0002db9c) main_ai5_sk_pane

0xef35,	// (0x0002e25e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef41,	// (0x0002e26a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc93e,	// (0x0002bc67) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef56,	// (0x0002e27f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002f1ed) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef62,	// (0x0002e28b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1c43,	// (0x00020f6c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf448,	// (0x0002e771) main_ai5_sk_pane_g1

0xa138,	// (0x00029461) popup_query_code_window_g1

0xf33e,	// (0x0002e667) popup_fep_vkb_icf_pane

0xf368,	// (0x0002e691) popup_fep_vtchi_icf_pane

0xf451,	// (0x0002e77a) bg_icf_pane

0xf45d,	// (0x0002e786) list_vkb_icf_pane

0xf46c,	// (0x0002e795) bg_icf_pane_cp01

0xf47f,	// (0x0002e7a8) vtchi_icf_list_pane

0xf48f,	// (0x0002e7b8) list_vkb_icf_pane_t1_ParamLimits

0xf48f,	// (0x0002e7b8) list_vkb_icf_pane_t1

0xf4b0,	// (0x0002e7d9) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x0002e7d9) vtchi_icf_list_pane_t1

0xf328,	// (0x0002e651) popup_fep_ituss_window_ParamLimits

0xf368,	// (0x0002e691) popup_fep_vtchi_icf_pane_ParamLimits

0xf38e,	// (0x0002e6b7) ituss_keypad_pane_ParamLimits

0x9c94,	// (0x00028fbd) ituss_sks_pane

0xf451,	// (0x0002e77a) bg_icf_pane_ParamLimits

0xf300,	// (0x0002e629) icf_edit_indi_pane_ParamLimits

0xf300,	// (0x0002e629) icf_edit_indi_pane

0xf45d,	// (0x0002e786) list_vkb_icf_pane_ParamLimits

0xf46c,	// (0x0002e795) bg_icf_pane_cp01_ParamLimits

0xf313,	// (0x0002e63c) icf_edit_indi_pane_cp01_ParamLimits

0xf313,	// (0x0002e63c) icf_edit_indi_pane_cp01

0xf487,	// (0x0002e7b0) vtchi_query_pane

0xe6fd,	// (0x0002da26) icf_edit_indi_pane_g1_ParamLimits

0xe6fd,	// (0x0002da26) icf_edit_indi_pane_g1

0xf525,	// (0x0002e84e) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002e84e) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x0002f233) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x0002f233) icf_edit_indi_pane_g

0xf537,	// (0x0002e860) icf_edit_indi_pane_t1

0xf4ce,	// (0x0002e7f7) bg_input_focus_pane_cp042

0x1b27,	// (0x00020e50) vtchi_button_pane

0xf4d7,	// (0x0002e800) vtchi_query_pane_t1

0xf4e5,	// (0x0002e80e) vtchi_query_pane_t2

0xf4f3,	// (0x0002e81c) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x0002f222) vtchi_query_pane_t

0x17a9,	// (0x00020ad2) bg_button_pane_cp13

0xf501,	// (0x0002e82a) vtchi_button_pane_g1

0x9dad,	// (0x000290d6) ituss_sks_pane_g1

0x9db8,	// (0x000290e1) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x0002f229) ituss_sks_pane_g

0xf509,	// (0x0002e832) ituss_sks_pane_t1

0xf517,	// (0x0002e840) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0002f22e) ituss_sks_pane_t

0xbcc8,	// (0x0002aff1) indicator_nsta_pane_cp_g1

0xbcd0,	// (0x0002aff9) indicator_nsta_pane_cp_g2

0xbcd8,	// (0x0002b001) indicator_nsta_pane_cp_g3

0xbcc8,	// (0x0002aff1) indicator_nsta_pane_cp_g4

0xbcd0,	// (0x0002aff9) indicator_nsta_pane_cp_g5

0xbcd8,	// (0x0002b001) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0002edde) indicator_nsta_pane_cp_g

0xe433,	// (0x0002d75c) cell_graphic2_pane_t2_ParamLimits

0xe433,	// (0x0002d75c) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002f0e4) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002f0e4) cell_graphic2_pane_t

0xe460,	// (0x0002d789) cell_graphic2_control_pane_t1

0x73b5,	// (0x000266de) signal_pane_g3_ParamLimits

0x73b5,	// (0x000266de) signal_pane_g3

0x73c7,	// (0x000266f0) signal_pane_g4_ParamLimits

0x73c7,	// (0x000266f0) signal_pane_g4

0xf2ea,	// (0x0002e613) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ea,	// (0x0002e613) cell_ai5_widget_list_row_pane_t3

0xf410,	// (0x0002e739) cell_ituss_key_pane_t1_ParamLimits

0xf410,	// (0x0002e739) cell_ituss_key_pane_t1

0x8aca,	// (0x00027df3) form_field_data_wide_pane_vc_t2_ParamLimits

0x8aca,	// (0x00027df3) form_field_data_wide_pane_vc_t2

0x8ade,	// (0x00027e07) form_field_data_wide_pane_vc_t3_ParamLimits

0x8ade,	// (0x00027e07) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0002eb23) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0002eb23) form_field_data_wide_pane_vc_t

0xb98f,	// (0x0002acb8) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb98f,	// (0x0002acb8) form_field_slider_wide_pane_vc_t3

0xba6d,	// (0x0002ad96) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba6d,	// (0x0002ad96) form_field_popup_wide_pane_vc_t2

0xba84,	// (0x0002adad) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba84,	// (0x0002adad) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0002edcd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0002edcd) form_field_popup_wide_pane_vc_t

0x9a71,	// (0x00028d9a) aid_fshwr2_btn_pane_ParamLimits

0x9a7d,	// (0x00028da6) aid_fshwr2_syb_pane_ParamLimits

0x9a8f,	// (0x00028db8) aid_fshwr2_txt_pane_ParamLimits

0x1c43,	// (0x00020f6c) fshwr2_bg_pane_ParamLimits

0x9a9b,	// (0x00028dc4) fshwr2_func_candi_pane_ParamLimits

0x9ab9,	// (0x00028de2) fshwr2_hwr_syb_pane_ParamLimits

0x9ad3,	// (0x00028dfc) fshwr2_icf_pane_ParamLimits

0x60e9,	// (0x00025412) list_double_graphic_pane_vc_g4_ParamLimits

0x60e9,	// (0x00025412) list_double_graphic_pane_vc_g4

0x9cf3,	// (0x0002901c) cell_ituss_key_pane_g3_ParamLimits

0x9cf3,	// (0x0002901c) cell_ituss_key_pane_g3

0x9d9b,	// (0x000290c4) cell_ituss_key_t5_ParamLimits

0x9d9b,	// (0x000290c4) cell_ituss_key_t5

0xf354,	// (0x0002e67d) popup_fep_vkbss_window_ParamLimits

0xcfc2,	// (0x0002c2eb) aid_cell_ai5_quarter

0xf537,	// (0x0002e860) icf_edit_indi_pane_t1_ParamLimits

0x6b87,	// (0x00025eb0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6b87,	// (0x00025eb0) aid_tch_indicator_popup_pane_cp2

0x6b9a,	// (0x00025ec3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6b9a,	// (0x00025ec3) aid_tch_query_popup_data_pane_cp2

0xa0e0,	// (0x00029409) aid_tch_query_popup_pane_ParamLimits

0xa0e0,	// (0x00029409) aid_tch_query_popup_pane

0xa0e0,	// (0x00029409) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa0e0,	// (0x00029409) aid_tch_query_popup_data_pane_cp1

0xed98,	// (0x0002e0c1) cell_fshwr2_syb_bg_pane_ParamLimits

0x9bc1,	// (0x00028eea) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9bd5,	// (0x00028efe) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf33e,	// (0x0002e667) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

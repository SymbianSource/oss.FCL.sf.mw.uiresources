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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002792d };

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
0x8d0b,	// (0x00030638) Screen

0x8d17,	// (0x00030644) application_window_ParamLimits

0x8d17,	// (0x00030644) application_window

0xc27b,	// (0x00033ba8) screen_g1

0x8d4f,	// (0x0003067c) area_bottom_pane_ParamLimits

0x8d4f,	// (0x0003067c) area_bottom_pane

0xe670,	// (0x00035f9d) area_top_pane_ParamLimits

0xe670,	// (0x00035f9d) area_top_pane

0xe704,	// (0x00036031) main_pane_ParamLimits

0xe704,	// (0x00036031) main_pane

0xc285,	// (0x00033bb2) misc_graphics

0xa517,	// (0x00031e44) battery_pane_ParamLimits

0xa517,	// (0x00031e44) battery_pane

0x297b,	// (0x0002a2a8) bg_status_flat_pane_g8

0x2983,	// (0x0002a2b0) bg_status_flat_pane_g9

0x0880,	// (0x000281ad) context_pane_ParamLimits

0x0880,	// (0x000281ad) context_pane

0xa682,	// (0x00031faf) navi_pane_ParamLimits

0xa682,	// (0x00031faf) navi_pane

0xa700,	// (0x0003202d) signal_pane_ParamLimits

0xa700,	// (0x0003202d) signal_pane

0x0008,

0xf840,	// (0x0003716d) bg_status_flat_pane_g

0xa790,	// (0x000320bd) status_pane_g1_ParamLimits

0xa790,	// (0x000320bd) status_pane_g1

0xa7a6,	// (0x000320d3) status_pane_g2_ParamLimits

0xa7a6,	// (0x000320d3) status_pane_g2

0x0aa7,	// (0x000283d4) status_pane_g3_ParamLimits

0x0aa7,	// (0x000283d4) status_pane_g3

0x0004,

0xf76c,	// (0x00037099) status_pane_g_ParamLimits

0xf76c,	// (0x00037099) status_pane_g

0xa7b2,	// (0x000320df) title_pane_ParamLimits

0xa7b2,	// (0x000320df) title_pane

0xa815,	// (0x00032142) uni_indicator_pane_ParamLimits

0xa815,	// (0x00032142) uni_indicator_pane

0xd09f,	// (0x000349cc) bg_list_pane_ParamLimits

0xd09f,	// (0x000349cc) bg_list_pane

0x9d05,	// (0x00031632) find_pane

0x0d63,	// (0x00028690) listscroll_app_pane_ParamLimits

0x0d63,	// (0x00028690) listscroll_app_pane

0xd0bf,	// (0x000349ec) listscroll_form_pane

0x9d0d,	// (0x0003163a) listscroll_gen_pane_ParamLimits

0x9d0d,	// (0x0003163a) listscroll_gen_pane

0x0199,	// (0x00027ac6) listscroll_set_pane

0x34df,	// (0x0002ae0c) main_idle_act_pane

0xcf53,	// (0x00034880) main_idle_trad_pane

0xcf53,	// (0x00034880) main_list_empty_pane

0xc7d9,	// (0x00034106) main_midp_pane

0xd0d9,	// (0x00034a06) main_pane_g1_ParamLimits

0xd0d9,	// (0x00034a06) main_pane_g1

0x9d21,	// (0x0003164e) popup_ai_message_window_ParamLimits

0x9d21,	// (0x0003164e) popup_ai_message_window

0x9dd2,	// (0x000316ff) popup_fep_china_uni_window_ParamLimits

0x9dd2,	// (0x000316ff) popup_fep_china_uni_window

0x9e2c,	// (0x00031759) popup_fep_japan_candidate_window_ParamLimits

0x9e2c,	// (0x00031759) popup_fep_japan_candidate_window

0x9e4a,	// (0x00031777) popup_fep_japan_predictive_window_ParamLimits

0x9e4a,	// (0x00031777) popup_fep_japan_predictive_window

0x9e5c,	// (0x00031789) popup_find_window

0x9e79,	// (0x000317a6) popup_grid_graphic_window_ParamLimits

0x9e79,	// (0x000317a6) popup_grid_graphic_window

0x0324,	// (0x00027c51) popup_large_graphic_colour_window

0x9f17,	// (0x00031844) popup_menu_window_ParamLimits

0x9f17,	// (0x00031844) popup_menu_window

0xa0e9,	// (0x00031a16) popup_note_image_window

0xa0af,	// (0x000319dc) popup_note_wait_window_ParamLimits

0xa0af,	// (0x000319dc) popup_note_wait_window

0xa101,	// (0x00031a2e) popup_note_window_ParamLimits

0xa101,	// (0x00031a2e) popup_note_window

0xa1b0,	// (0x00031add) popup_query_code_window_ParamLimits

0xa1b0,	// (0x00031add) popup_query_code_window

0xa1ea,	// (0x00031b17) popup_query_data_code_window_ParamLimits

0xa1ea,	// (0x00031b17) popup_query_data_code_window

0xa207,	// (0x00031b34) popup_query_data_window_ParamLimits

0xa207,	// (0x00031b34) popup_query_data_window

0xa289,	// (0x00031bb6) popup_query_sat_info_window_ParamLimits

0xa289,	// (0x00031bb6) popup_query_sat_info_window

0xa320,	// (0x00031c4d) popup_snote_single_graphic_window_ParamLimits

0xa320,	// (0x00031c4d) popup_snote_single_graphic_window

0xa320,	// (0x00031c4d) popup_snote_single_text_window_ParamLimits

0xa320,	// (0x00031c4d) popup_snote_single_text_window

0x05f7,	// (0x00027f24) popup_sub_window_general

0xa47d,	// (0x00031daa) popup_window_general_ParamLimits

0xa47d,	// (0x00031daa) popup_window_general

0x073c,	// (0x00028069) power_save_pane

0x9b5f,	// (0x0003148c) control_pane_g1_ParamLimits

0x9b5f,	// (0x0003148c) control_pane_g1

0x9b88,	// (0x000314b5) control_pane_g2_ParamLimits

0x9b88,	// (0x000314b5) control_pane_g2

0xd089,	// (0x000349b6) control_pane_g3_ParamLimits

0xd089,	// (0x000349b6) control_pane_g3

0x0007,

0xf754,	// (0x00037081) control_pane_g_ParamLimits

0xf754,	// (0x00037081) control_pane_g

0x9bf0,	// (0x0003151d) control_pane_t1_ParamLimits

0x9bf0,	// (0x0003151d) control_pane_t1

0x9c58,	// (0x00031585) control_pane_t2_ParamLimits

0x9c58,	// (0x00031585) control_pane_t2

0x0002,

0xf765,	// (0x00037092) control_pane_t_ParamLimits

0xf765,	// (0x00037092) control_pane_t

0x9ab8,	// (0x000313e5) navi_navi_volume_pane_cp1

0x9ac0,	// (0x000313ed) status_small_icon_pane

0xd055,	// (0x00034982) status_small_pane_g1_ParamLimits

0xd055,	// (0x00034982) status_small_pane_g1

0x9ac8,	// (0x000313f5) status_small_pane_g2_ParamLimits

0x9ac8,	// (0x000313f5) status_small_pane_g2

0x9ad4,	// (0x00031401) status_small_pane_g3_ParamLimits

0x9ad4,	// (0x00031401) status_small_pane_g3

0x9ae0,	// (0x0003140d) status_small_pane_g4_ParamLimits

0x9ae0,	// (0x0003140d) status_small_pane_g4

0x9aec,	// (0x00031419) status_small_pane_g5_ParamLimits

0x9aec,	// (0x00031419) status_small_pane_g5

0x9afa,	// (0x00031427) status_small_pane_g6_ParamLimits

0x9afa,	// (0x00031427) status_small_pane_g6

0x0007,

0xf743,	// (0x00037070) status_small_pane_g_ParamLimits

0xf743,	// (0x00037070) status_small_pane_g

0x9b29,	// (0x00031456) status_small_pane_t1

0x9b4b,	// (0x00031478) status_small_wait_pane_ParamLimits

0x9b4b,	// (0x00031478) status_small_wait_pane

0x9820,	// (0x0003114d) aid_levels_signal_ParamLimits

0x9820,	// (0x0003114d) aid_levels_signal

0x9838,	// (0x00031165) signal_pane_g1_ParamLimits

0x9838,	// (0x00031165) signal_pane_g1

0x9853,	// (0x00031180) signal_pane_g2_ParamLimits

0x9853,	// (0x00031180) signal_pane_g2

0x0003,

0xf6d4,	// (0x00037001) signal_pane_g_ParamLimits

0xf6d4,	// (0x00037001) signal_pane_g

0xcb41,	// (0x0003446e) context_pane_g1

0x8f4d,	// (0x0003087a) title_pane_g1

0x8f84,	// (0x000308b1) title_pane_t1

0xc29b,	// (0x00033bc8) title_pane_t2

0xc2c1,	// (0x00033bee) title_pane_t3

0x0002,

0xf532,	// (0x00036e5f) title_pane_t

0xa83d,	// (0x0003216a) aid_levels_battery_ParamLimits

0xa83d,	// (0x0003216a) aid_levels_battery

0xa859,	// (0x00032186) battery_pane_g1_ParamLimits

0xa859,	// (0x00032186) battery_pane_g1

0xa876,	// (0x000321a3) battery_pane_g2_ParamLimits

0xa876,	// (0x000321a3) battery_pane_g2

0x0001,

0xf777,	// (0x000370a4) battery_pane_g_ParamLimits

0xf777,	// (0x000370a4) battery_pane_g

0xaeec,	// (0x00032819) uni_indicator_pane_g1

0xaf02,	// (0x0003282f) uni_indicator_pane_g2

0xaf18,	// (0x00032845) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x00037215) uni_indicator_pane_g

0xcdea,	// (0x00034717) navi_icon_pane_ParamLimits

0xcdea,	// (0x00034717) navi_icon_pane

0xcd33,	// (0x00034660) navi_midp_pane

0xce06,	// (0x00034733) navi_navi_pane

0xce10,	// (0x0003473d) navi_text_pane_ParamLimits

0xce10,	// (0x0003473d) navi_text_pane

0xc27b,	// (0x00033ba8) status_small_wait_pane_g1

0xc512,	// (0x00033e3f) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x00037210) status_small_wait_pane_g

0xae45,	// (0x00032772) navi_navi_icon_text_pane

0x2fce,	// (0x0002a8fb) navi_navi_pane_g1_ParamLimits

0x2fce,	// (0x0002a8fb) navi_navi_pane_g1

0x2fe0,	// (0x0002a90d) navi_navi_pane_g2_ParamLimits

0x2fe0,	// (0x0002a90d) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x000371de) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x000371de) navi_navi_pane_g

0x2ff2,	// (0x0002a91f) navi_navi_tabs_pane

0x2ffb,	// (0x0002a928) navi_navi_text_pane

0xae45,	// (0x00032772) navi_navi_volume_pane

0x2fa2,	// (0x0002a8cf) navi_text_pane_t1

0x2f96,	// (0x0002a8c3) navi_icon_pane_g1

0x2ee9,	// (0x0002a816) navi_navi_text_pane_t1

0xae31,	// (0x0003275e) navi_navi_volume_pane_g1

0x16f0,	// (0x0002901d) volume_small_pane

0x2e4f,	// (0x0002a77c) navi_navi_icon_text_pane_g1

0xad95,	// (0x000326c2) navi_navi_icon_text_pane_t1

0xce06,	// (0x00034733) navi_tabs_2_long_pane

0xce06,	// (0x00034733) navi_tabs_2_pane

0xce06,	// (0x00034733) navi_tabs_3_long_pane

0xce06,	// (0x00034733) navi_tabs_3_pane

0xce06,	// (0x00034733) navi_tabs_4_pane

0x16c8,	// (0x00028ff5) tabs_2_active_pane_ParamLimits

0x16c8,	// (0x00028ff5) tabs_2_active_pane

0x16d8,	// (0x00029005) tabs_2_passive_pane_ParamLimits

0x16d8,	// (0x00029005) tabs_2_passive_pane

0x1696,	// (0x00028fc3) tabs_3_active_pane_ParamLimits

0x1696,	// (0x00028fc3) tabs_3_active_pane

0x16a6,	// (0x00028fd3) tabs_3_passive_pane_ParamLimits

0x16a6,	// (0x00028fd3) tabs_3_passive_pane

0x16b7,	// (0x00028fe4) tabs_3_passive_pane_cp_ParamLimits

0x16b7,	// (0x00028fe4) tabs_3_passive_pane_cp

0x1652,	// (0x00028f7f) tabs_4_active_pane_ParamLimits

0x1652,	// (0x00028f7f) tabs_4_active_pane

0x1663,	// (0x00028f90) tabs_4_passive_pane_ParamLimits

0x1663,	// (0x00028f90) tabs_4_passive_pane

0x1674,	// (0x00028fa1) tabs_4_passive_pane_cp_ParamLimits

0x1674,	// (0x00028fa1) tabs_4_passive_pane_cp

0x1685,	// (0x00028fb2) tabs_4_passive_pane_cp2_ParamLimits

0x1685,	// (0x00028fb2) tabs_4_passive_pane_cp2

0x162e,	// (0x00028f5b) tabs_2_long_active_pane_ParamLimits

0x162e,	// (0x00028f5b) tabs_2_long_active_pane

0x1640,	// (0x00028f6d) tabs_2_long_passive_pane_ParamLimits

0x1640,	// (0x00028f6d) tabs_2_long_passive_pane

0x15e9,	// (0x00028f16) tabs_3_long_active_pane_ParamLimits

0x15e9,	// (0x00028f16) tabs_3_long_active_pane

0x1602,	// (0x00028f2f) tabs_3_long_passive_pane_ParamLimits

0x1602,	// (0x00028f2f) tabs_3_long_passive_pane

0x1615,	// (0x00028f42) tabs_3_long_passive_pane_cp_ParamLimits

0x1615,	// (0x00028f42) tabs_3_long_passive_pane_cp

0x158f,	// (0x00028ebc) volume_small_pane_g1

0x1598,	// (0x00028ec5) volume_small_pane_g2

0x15a1,	// (0x00028ece) volume_small_pane_g3

0x15aa,	// (0x00028ed7) volume_small_pane_g4

0x15b3,	// (0x00028ee0) volume_small_pane_g5

0x15bc,	// (0x00028ee9) volume_small_pane_g6

0x15c5,	// (0x00028ef2) volume_small_pane_g7

0x15ce,	// (0x00028efb) volume_small_pane_g8

0x15d7,	// (0x00028f04) volume_small_pane_g9

0x15e0,	// (0x00028f0d) volume_small_pane_g10

0x0009,

0xf87d,	// (0x000371aa) volume_small_pane_g

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp2_ParamLimits

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp2

0x9010,	// (0x0003093d) tabs_3_active_pane_g1

0x9018,	// (0x00030945) tabs_3_active_pane_t1

0xc2d3,	// (0x00033c00) bg_passive_tab_pane_cp2_ParamLimits

0xc2d3,	// (0x00033c00) bg_passive_tab_pane_cp2

0x9010,	// (0x0003093d) tabs_3_passive_pane_g1

0x9018,	// (0x00030945) tabs_3_passive_pane_t1

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp3_ParamLimits

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp3

0x902a,	// (0x00030957) tabs_4_active_pane_g1

0x9032,	// (0x0003095f) tabs_4_active_pane_t1

0xc2d3,	// (0x00033c00) bg_passive_tab_pane_cp3_ParamLimits

0xc2d3,	// (0x00033c00) bg_passive_tab_pane_cp3

0x902a,	// (0x00030957) tabs_4_1_passive_pane_g1

0x9032,	// (0x0003095f) tabs_4_1_passive_pane_t1

0xc7d9,	// (0x00034106) list_highlight_pane_cp2

0xb0da,	// (0x00032a07) list_set_pane_ParamLimits

0xb0da,	// (0x00032a07) list_set_pane

0xb174,	// (0x00032aa1) main_pane_set_t1_ParamLimits

0xb174,	// (0x00032aa1) main_pane_set_t1

0xb194,	// (0x00032ac1) main_pane_set_t2_ParamLimits

0xb194,	// (0x00032ac1) main_pane_set_t2

0xb1a8,	// (0x00032ad5) main_pane_set_t3_ParamLimits

0xb1a8,	// (0x00032ad5) main_pane_set_t3

0xb1ba,	// (0x00032ae7) main_pane_set_t4_ParamLimits

0xb1ba,	// (0x00032ae7) main_pane_set_t4

0x0003,

0xf94d,	// (0x0003727a) main_pane_set_t_ParamLimits

0xf94d,	// (0x0003727a) main_pane_set_t

0xb1cc,	// (0x00032af9) setting_code_pane

0xb1d6,	// (0x00032b03) setting_slider_graphic_pane

0xb1d6,	// (0x00032b03) setting_slider_pane

0xb1d6,	// (0x00032b03) setting_text_pane

0xb1d6,	// (0x00032b03) setting_volume_pane

0x9044,	// (0x00030971) volume_set_pane

0xc2e1,	// (0x00033c0e) bg_set_opt_pane_cp

0x904c,	// (0x00030979) setting_slider_pane_t1

0x9065,	// (0x00030992) setting_slider_pane_t2

0x907f,	// (0x000309ac) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00036e66) setting_slider_pane_t

0x9097,	// (0x000309c4) slider_set_pane

0xc285,	// (0x00033bb2) bg_set_opt_pane_cp2

0xc2ef,	// (0x00033c1c) setting_slider_graphic_pane_g1

0x90ad,	// (0x000309da) setting_slider_graphic_pane_t1

0x90bd,	// (0x000309ea) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00036e6d) setting_slider_graphic_pane_t

0x90cd,	// (0x000309fa) slider_set_pane_cp

0xc285,	// (0x00033bb2) input_focus_pane_cp1

0x34c6,	// (0x0002adf3) list_set_text_pane

0xc27b,	// (0x00033ba8) setting_text_pane_g1

0xc285,	// (0x00033bb2) input_focus_pane_cp2

0xc27b,	// (0x00033ba8) setting_code_pane_g1

0xc2f8,	// (0x00033c25) setting_code_pane_t1

0xe7df,	// (0x0003610c) set_text_pane_t1_ParamLimits

0xe7df,	// (0x0003610c) set_text_pane_t1

0xc6ef,	// (0x0003401c) set_opt_bg_pane_g1

0xc6f7,	// (0x00034024) set_opt_bg_pane_g2

0xb08f,	// (0x000329bc) set_opt_bg_pane_g3

0xc707,	// (0x00034034) set_opt_bg_pane_g4

0xc70f,	// (0x0003403c) set_opt_bg_pane_g5

0xc717,	// (0x00034044) set_opt_bg_pane_g6

0xb099,	// (0x000329c6) set_opt_bg_pane_g7

0xb0a1,	// (0x000329ce) set_opt_bg_pane_g8

0xb0ab,	// (0x000329d8) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00037267) set_opt_bg_pane_g

0xb02a,	// (0x00032957) slider_set_pane_g1

0x175d,	// (0x0002908a) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00037258) slider_set_pane_g

0xaf4f,	// (0x0003287c) volume_set_pane_g1

0xaf57,	// (0x00032884) volume_set_pane_g2

0xaf5f,	// (0x0003288c) volume_set_pane_g3

0xaf67,	// (0x00032894) volume_set_pane_g4

0xaf6f,	// (0x0003289c) volume_set_pane_g5

0xaf77,	// (0x000328a4) volume_set_pane_g6

0xaf7f,	// (0x000328ac) volume_set_pane_g7

0xaf87,	// (0x000328b4) volume_set_pane_g8

0xaf8f,	// (0x000328bc) volume_set_pane_g9

0xaf97,	// (0x000328c4) volume_set_pane_g10

0x0009,

0xf903,	// (0x00037230) volume_set_pane_g

0x90d5,	// (0x00030a02) indicator_pane_ParamLimits

0x90d5,	// (0x00030a02) indicator_pane

0x90fd,	// (0x00030a2a) main_idle_pane_g2_ParamLimits

0x90fd,	// (0x00030a2a) main_idle_pane_g2

0x9135,	// (0x00030a62) main_pane_idle_g1_ParamLimits

0x9135,	// (0x00030a62) main_pane_idle_g1

0xc306,	// (0x00033c33) popup_clock_digital_analogue_window_ParamLimits

0xc306,	// (0x00033c33) popup_clock_digital_analogue_window

0x915c,	// (0x00030a89) soft_indicator_pane_ParamLimits

0x915c,	// (0x00030a89) soft_indicator_pane

0x9180,	// (0x00030aad) wallpaper_pane_ParamLimits

0x9180,	// (0x00030aad) wallpaper_pane

0xc27b,	// (0x00033ba8) wallpaper_pane_g1

0x9192,	// (0x00030abf) indicator_pane_g1_ParamLimits

0x9192,	// (0x00030abf) indicator_pane_g1

0x38d9,	// (0x0002b206) navi_navi_icon_text_pane_srt_g1

0xc334,	// (0x00033c61) soft_indicator_pane_t1

0xc34e,	// (0x00033c7b) aid_ps_area_pane

0x91a8,	// (0x00030ad5) aid_ps_clock_pane

0xc35f,	// (0x00033c8c) aid_ps_indicator_pane

0xc36b,	// (0x00033c98) indicator_ps_pane_ParamLimits

0xc36b,	// (0x00033c98) indicator_ps_pane

0xc37a,	// (0x00033ca7) power_save_pane_g1_ParamLimits

0xc37a,	// (0x00033ca7) power_save_pane_g1

0xc386,	// (0x00033cb3) power_save_pane_g2_ParamLimits

0xc386,	// (0x00033cb3) power_save_pane_g2

0xe650,	// (0x00035f7d) aid_navinavi_width_pane

0xc34e,	// (0x00033c7b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00036e72) power_save_pane_g_ParamLimits

0xf545,	// (0x00036e72) power_save_pane_g

0xc394,	// (0x00033cc1) power_save_pane_t1_ParamLimits

0xc394,	// (0x00033cc1) power_save_pane_t1

0x91a8,	// (0x00030ad5) aid_ps_clock_pane_ParamLimits

0xc35f,	// (0x00033c8c) aid_ps_indicator_pane_ParamLimits

0xc3a6,	// (0x00033cd3) power_save_pane_t4_ParamLimits

0xc3a6,	// (0x00033cd3) power_save_pane_t4

0x0001,

0xf54a,	// (0x00036e77) power_save_pane_t_ParamLimits

0xf54a,	// (0x00036e77) power_save_pane_t

0xc3d0,	// (0x00033cfd) power_save_t3_ParamLimits

0xc3d0,	// (0x00033cfd) power_save_t3

0xc3bb,	// (0x00033ce8) power_save_t2_ParamLimits

0xc3bb,	// (0x00033ce8) power_save_t2

0xc3e5,	// (0x00033d12) indicator_ps_pane_g1

0x91b6,	// (0x00030ae3) ai_gene_pane_ParamLimits

0x91b6,	// (0x00030ae3) ai_gene_pane

0x91cd,	// (0x00030afa) ai_links_pane_ParamLimits

0x91cd,	// (0x00030afa) ai_links_pane

0x91e5,	// (0x00030b12) indicator_pane_cp1_ParamLimits

0x91e5,	// (0x00030b12) indicator_pane_cp1

0x91f4,	// (0x00030b21) main_pane_idle_g1_cp_ParamLimits

0x91f4,	// (0x00030b21) main_pane_idle_g1_cp

0x920c,	// (0x00030b39) popup_ai_links_title_window

0x9215,	// (0x00030b42) soft_indicator_pane_cp1_ParamLimits

0x9215,	// (0x00030b42) soft_indicator_pane_cp1

0x328d,	// (0x0002abba) ai_links_pane_g1

0x3296,	// (0x0002abc3) grid_ai_links_pane

0xaee3,	// (0x00032810) ai_gene_pane_1

0x327b,	// (0x0002aba8) ai_gene_pane_2

0x3284,	// (0x0002abb1) list_highlight_pane_cp4

0xaebf,	// (0x000327ec) cell_ai_link_pane_ParamLimits

0xaebf,	// (0x000327ec) cell_ai_link_pane

0x324c,	// (0x0002ab79) cell_ai_link_pane_g1

0xc512,	// (0x00033e3f) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x0003720b) cell_ai_link_pane_g

0xc285,	// (0x00033bb2) grid_highlight_cp2

0xc285,	// (0x00033bb2) bg_popup_sub_pane_cp1

0xc3fc,	// (0x00033d29) popup_ai_links_title_window_t1

0x319c,	// (0x0002aac9) ai_gene_pane_1_g1_ParamLimits

0x319c,	// (0x0002aac9) ai_gene_pane_1_g1

0x31a8,	// (0x0002aad5) ai_gene_pane_1_g2_ParamLimits

0x31a8,	// (0x0002aad5) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x00037201) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x00037201) ai_gene_pane_1_g

0x31b5,	// (0x0002aae2) ai_gene_pane_1_t1_ParamLimits

0x31b5,	// (0x0002aae2) ai_gene_pane_1_t1

0x31e9,	// (0x0002ab16) grid_ai_soft_ind_pane

0x3187,	// (0x0002aab4) ai_gene_pane_2_t1_ParamLimits

0x3187,	// (0x0002aab4) ai_gene_pane_2_t1

0x9229,	// (0x00030b56) main_pane_empty_t1_ParamLimits

0x9229,	// (0x00030b56) main_pane_empty_t1

0x9241,	// (0x00030b6e) main_pane_empty_t2_ParamLimits

0x9241,	// (0x00030b6e) main_pane_empty_t2

0x9256,	// (0x00030b83) main_pane_empty_t3_ParamLimits

0x9256,	// (0x00030b83) main_pane_empty_t3

0x9268,	// (0x00030b95) main_pane_empty_t4_ParamLimits

0x9268,	// (0x00030b95) main_pane_empty_t4

0x927a,	// (0x00030ba7) main_pane_empty_t5_ParamLimits

0x927a,	// (0x00030ba7) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00036e7c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00036e7c) main_pane_empty_t

0xc774,	// (0x000340a1) bg_popup_window_pane_ParamLimits

0xc774,	// (0x000340a1) bg_popup_window_pane

0xae39,	// (0x00032766) find_popup_pane_cp2_ParamLimits

0xae39,	// (0x00032766) find_popup_pane_cp2

0x2f03,	// (0x0002a830) heading_pane_ParamLimits

0x2f03,	// (0x0002a830) heading_pane

0xc285,	// (0x00033bb2) bg_popup_sub_pane

0xadb2,	// (0x000326df) bg_popup_window_pane_g1_ParamLimits

0xadb2,	// (0x000326df) bg_popup_window_pane_g1

0xadc1,	// (0x000326ee) bg_popup_window_pane_g2_ParamLimits

0xadc1,	// (0x000326ee) bg_popup_window_pane_g2

0xadcd,	// (0x000326fa) bg_popup_window_pane_g3_ParamLimits

0xadcd,	// (0x000326fa) bg_popup_window_pane_g3

0xadd9,	// (0x00032706) bg_popup_window_pane_g4_ParamLimits

0xadd9,	// (0x00032706) bg_popup_window_pane_g4

0xade8,	// (0x00032715) bg_popup_window_pane_g5_ParamLimits

0xade8,	// (0x00032715) bg_popup_window_pane_g5

0xadf8,	// (0x00032725) bg_popup_window_pane_g6_ParamLimits

0xadf8,	// (0x00032725) bg_popup_window_pane_g6

0xae04,	// (0x00032731) bg_popup_window_pane_g7_ParamLimits

0xae04,	// (0x00032731) bg_popup_window_pane_g7

0xae13,	// (0x00032740) bg_popup_window_pane_g8_ParamLimits

0xae13,	// (0x00032740) bg_popup_window_pane_g8

0xae22,	// (0x0003274f) bg_popup_window_pane_g9_ParamLimits

0xae22,	// (0x0003274f) bg_popup_window_pane_g9

0x2edd,	// (0x0002a80a) bg_popup_window_pane_g10_ParamLimits

0x2edd,	// (0x0002a80a) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x000371c9) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x000371c9) bg_popup_window_pane_g

0x2e06,	// (0x0002a733) bg_popup_heading_pane_ParamLimits

0x2e06,	// (0x0002a733) bg_popup_heading_pane

0x17e5,	// (0x00029112) tabs_4_passive_pane_cp_srt_ParamLimits

0x17e5,	// (0x00029112) tabs_4_passive_pane_cp_srt

0x17f7,	// (0x00029124) tabs_4_passive_pane_srt_ParamLimits

0x2e1a,	// (0x0002a747) heading_pane_g2

0x17f7,	// (0x00029124) tabs_4_passive_pane_srt

0x0d63,	// (0x00028690) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0d63,	// (0x00028690) bg_passive_tab_pane_cp3_srt

0x2e22,	// (0x0002a74f) heading_pane_t1_ParamLimits

0x2e22,	// (0x0002a74f) heading_pane_t1

0x2e39,	// (0x0002a766) heading_pane_t2_ParamLimits

0x2e39,	// (0x0002a766) heading_pane_t2

0x0001,

0xf897,	// (0x000371c4) heading_pane_t_ParamLimits

0xf897,	// (0x000371c4) heading_pane_t

0x2943,	// (0x0002a270) bg_popup_heading_pane_g1

0x29f2,	// (0x0002a31f) bg_popup_heading_pane_g2

0x29fc,	// (0x0002a329) bg_popup_heading_pane_g3

0x2a06,	// (0x0002a333) bg_popup_heading_pane_g4

0x2a10,	// (0x0002a33d) bg_popup_heading_pane_g5

0x2a1a,	// (0x0002a347) bg_popup_heading_pane_g6

0x2a22,	// (0x0002a34f) bg_popup_heading_pane_g7

0x2a2a,	// (0x0002a357) bg_popup_heading_pane_g8

0x2a34,	// (0x0002a361) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00037180) bg_popup_heading_pane_g

0x0c5f,	// (0x0002858c) bg_popup_sub_pane_g1

0x0c67,	// (0x00028594) bg_popup_sub_pane_g2

0x0c6f,	// (0x0002859c) bg_popup_sub_pane_g3

0x0c77,	// (0x000285a4) bg_popup_sub_pane_g4

0x0c7f,	// (0x000285ac) bg_popup_sub_pane_g5

0x0c87,	// (0x000285b4) bg_popup_sub_pane_g6

0x0c8f,	// (0x000285bc) bg_popup_sub_pane_g7

0x0c97,	// (0x000285c4) bg_popup_sub_pane_g8

0x0c9f,	// (0x000285cc) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x0003715a) bg_popup_sub_pane_g

0xc2d3,	// (0x00033c00) bg_popup_window_pane_cp5_ParamLimits

0xc2d3,	// (0x00033c00) bg_popup_window_pane_cp5

0xc419,	// (0x00033d46) popup_note_window_g1_ParamLimits

0xc419,	// (0x00033d46) popup_note_window_g1

0xc425,	// (0x00033d52) popup_note_window_t1_ParamLimits

0xc425,	// (0x00033d52) popup_note_window_t1

0xc43b,	// (0x00033d68) popup_note_window_t2_ParamLimits

0xc43b,	// (0x00033d68) popup_note_window_t2

0xc451,	// (0x00033d7e) popup_note_window_t3_ParamLimits

0xc451,	// (0x00033d7e) popup_note_window_t3

0xc467,	// (0x00033d94) popup_note_window_t4_ParamLimits

0xc467,	// (0x00033d94) popup_note_window_t4

0xc48f,	// (0x00033dbc) popup_note_window_t5_ParamLimits

0xc48f,	// (0x00033dbc) popup_note_window_t5

0x0004,

0xf55a,	// (0x00036e87) popup_note_window_t_ParamLimits

0xf55a,	// (0x00036e87) popup_note_window_t

0xc4b3,	// (0x00033de0) bg_popup_window_pane_cp6_ParamLimits

0xc4b3,	// (0x00033de0) bg_popup_window_pane_cp6

0x151a,	// (0x00028e47) popup_note_image_window_g1_ParamLimits

0x151a,	// (0x00028e47) popup_note_image_window_g1

0xac57,	// (0x00032584) popup_note_image_window_g2_ParamLimits

0xac57,	// (0x00032584) popup_note_image_window_g2

0x0001,

0xf821,	// (0x0003714e) popup_note_image_window_g_ParamLimits

0xf821,	// (0x0003714e) popup_note_image_window_g

0x153f,	// (0x00028e6c) popup_note_image_window_t1_ParamLimits

0x153f,	// (0x00028e6c) popup_note_image_window_t1

0x1558,	// (0x00028e85) popup_note_image_window_t2_ParamLimits

0x1558,	// (0x00028e85) popup_note_image_window_t2

0x1571,	// (0x00028e9e) popup_note_image_window_t3_ParamLimits

0x1571,	// (0x00028e9e) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00037153) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00037153) popup_note_image_window_t

0x13e3,	// (0x00028d10) bg_popup_window_pane_cp7_ParamLimits

0x13e3,	// (0x00028d10) bg_popup_window_pane_cp7

0x1413,	// (0x00028d40) popup_note_wait_window_g1_ParamLimits

0x1413,	// (0x00028d40) popup_note_wait_window_g1

0x141f,	// (0x00028d4c) popup_note_wait_window_g2_ParamLimits

0x141f,	// (0x00028d4c) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x0003713c) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x0003713c) popup_note_wait_window_g

0x1437,	// (0x00028d64) popup_note_wait_window_t1_ParamLimits

0x1437,	// (0x00028d64) popup_note_wait_window_t1

0xabf8,	// (0x00032525) popup_note_wait_window_t2_ParamLimits

0xabf8,	// (0x00032525) popup_note_wait_window_t2

0xac15,	// (0x00032542) popup_note_wait_window_t3_ParamLimits

0xac15,	// (0x00032542) popup_note_wait_window_t3

0xac28,	// (0x00032555) popup_note_wait_window_t4_ParamLimits

0xac28,	// (0x00032555) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00037143) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00037143) popup_note_wait_window_t

0x14b3,	// (0x00028de0) wait_bar_pane_ParamLimits

0x14b3,	// (0x00028de0) wait_bar_pane

0xc285,	// (0x00033bb2) wait_anim_pane

0xc285,	// (0x00033bb2) wait_border_pane

0xc27b,	// (0x00033ba8) wait_anim_pane_g1

0xc27b,	// (0x00033ba8) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00036ffc) wait_anim_pane_g

0x138f,	// (0x00028cbc) wait_border_pane_g1

0x139a,	// (0x00028cc7) wait_border_pane_g2

0x13a3,	// (0x00028cd0) wait_border_pane_g3

0x0002,

0xf808,	// (0x00037135) wait_border_pane_g

0x11fa,	// (0x00028b27) bg_popup_window_pane_cp16_ParamLimits

0x11fa,	// (0x00028b27) bg_popup_window_pane_cp16

0xaba8,	// (0x000324d5) indicator_popup_pane_cp4_ParamLimits

0xaba8,	// (0x000324d5) indicator_popup_pane_cp4

0x130e,	// (0x00028c3b) popup_query_data_window_t1_ParamLimits

0x130e,	// (0x00028c3b) popup_query_data_window_t1

0x1320,	// (0x00028c4d) popup_query_data_window_t2_ParamLimits

0x1320,	// (0x00028c4d) popup_query_data_window_t2

0x1339,	// (0x00028c66) popup_query_data_window_t3_ParamLimits

0x1339,	// (0x00028c66) popup_query_data_window_t3

0x0002,

0xf801,	// (0x0003712e) popup_query_data_window_t_ParamLimits

0xf801,	// (0x0003712e) popup_query_data_window_t

0xabbc,	// (0x000324e9) query_popup_data_pane_ParamLimits

0xabbc,	// (0x000324e9) query_popup_data_pane

0xabd0,	// (0x000324fd) query_popup_data_pane_cp1_ParamLimits

0xabd0,	// (0x000324fd) query_popup_data_pane_cp1

0x11fa,	// (0x00028b27) bg_popup_window_pane_cp10_ParamLimits

0x11fa,	// (0x00028b27) bg_popup_window_pane_cp10

0xab23,	// (0x00032450) indicator_popup_pane_ParamLimits

0xab23,	// (0x00032450) indicator_popup_pane

0xab45,	// (0x00032472) popup_query_code_window_t1_ParamLimits

0xab45,	// (0x00032472) popup_query_code_window_t1

0xab5f,	// (0x0003248c) popup_query_code_window_t2_ParamLimits

0xab5f,	// (0x0003248c) popup_query_code_window_t2

0x12b1,	// (0x00028bde) popup_query_code_window_t3_ParamLimits

0x12b1,	// (0x00028bde) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00037127) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00037127) popup_query_code_window_t

0x12e0,	// (0x00028c0d) query_popup_pane_ParamLimits

0x12e0,	// (0x00028c0d) query_popup_pane

0xc4b3,	// (0x00033de0) bg_popup_window_pane_cp15_ParamLimits

0xc4b3,	// (0x00033de0) bg_popup_window_pane_cp15

0x92b2,	// (0x00030bdf) indicator_popup_pane_cp1_ParamLimits

0x92b2,	// (0x00030bdf) indicator_popup_pane_cp1

0x92c5,	// (0x00030bf2) indicator_popup_pane_cp2_ParamLimits

0x92c5,	// (0x00030bf2) indicator_popup_pane_cp2

0x92d8,	// (0x00030c05) popup_query_data_code_window_g1_ParamLimits

0x92d8,	// (0x00030c05) popup_query_data_code_window_g1

0xc4d1,	// (0x00033dfe) popup_query_data_code_window_t1_ParamLimits

0xc4d1,	// (0x00033dfe) popup_query_data_code_window_t1

0xc4e3,	// (0x00033e10) popup_query_data_code_window_t2_ParamLimits

0xc4e3,	// (0x00033e10) popup_query_data_code_window_t2

0x92eb,	// (0x00030c18) popup_query_data_code_window_t3_ParamLimits

0x92eb,	// (0x00030c18) popup_query_data_code_window_t3

0x9301,	// (0x00030c2e) popup_query_data_code_window_t4_ParamLimits

0x9301,	// (0x00030c2e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00036e92) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00036e92) popup_query_data_code_window_t

0xcda8,	// (0x000346d5) list_single_midp_graphic_pane_g3

0x9319,	// (0x00030c46) query_popup_data_pane_cp2_ParamLimits

0x932c,	// (0x00030c59) query_popup_pane_cp2_ParamLimits

0x932c,	// (0x00030c59) query_popup_pane_cp2

0xc285,	// (0x00033bb2) bg_popup_window_pane_cp11

0x11de,	// (0x00028b0b) heading_pane_cp5

0x11e6,	// (0x00028b13) listscroll_popup_info_pane

0xc285,	// (0x00033bb2) input_focus_pane_cp3

0xc4f5,	// (0x00033e22) query_popup_pane_t1

0xc503,	// (0x00033e30) list_popup_info_pane_ParamLimits

0xc503,	// (0x00033e30) list_popup_info_pane

0xc512,	// (0x00033e3f) listscroll_popup_info_pane_g1

0xc51a,	// (0x00033e47) scroll_pane_cp7

0x933f,	// (0x00030c6c) popup_info_list_pane_t1_ParamLimits

0x933f,	// (0x00030c6c) popup_info_list_pane_t1

0x9359,	// (0x00030c86) popup_info_list_pane_t2_ParamLimits

0x9359,	// (0x00030c86) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00036e9b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00036e9b) popup_info_list_pane_t

0xc285,	// (0x00033bb2) bg_popup_window_pane_cp12

0xb3ce,	// (0x00032cfb) find_popup_pane

0xc2e1,	// (0x00033c0e) bg_popup_window_pane_cp3

0xc524,	// (0x00033e51) heading_pane_cp3

0xc533,	// (0x00033e60) listscroll_popup_graphic_pane

0xc285,	// (0x00033bb2) bg_popup_window_pane_cp4

0x93c3,	// (0x00030cf0) heading_pane_cp4

0xc543,	// (0x00033e70) listscroll_popup_colour_pane

0x93cd,	// (0x00030cfa) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x93cd,	// (0x00030cfa) cell_large_graphic_colour_none_popup_pane

0x93e1,	// (0x00030d0e) grid_large_graphic_colour_popup_pane_ParamLimits

0x93e1,	// (0x00030d0e) grid_large_graphic_colour_popup_pane

0x9405,	// (0x00030d32) listscroll_popup_colour_pane_g1_ParamLimits

0x9405,	// (0x00030d32) listscroll_popup_colour_pane_g1

0x941c,	// (0x00030d49) listscroll_popup_colour_pane_g2_ParamLimits

0x941c,	// (0x00030d49) listscroll_popup_colour_pane_g2

0x9433,	// (0x00030d60) listscroll_popup_colour_pane_g3_ParamLimits

0x9433,	// (0x00030d60) listscroll_popup_colour_pane_g3

0x9443,	// (0x00030d70) listscroll_popup_colour_pane_g4_ParamLimits

0x9443,	// (0x00030d70) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00036ea0) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00036ea0) listscroll_popup_colour_pane_g

0xc54b,	// (0x00033e78) scroll_pane_cp6_ParamLimits

0xc54b,	// (0x00033e78) scroll_pane_cp6

0x9453,	// (0x00030d80) cell_large_graphic_colour_popup_pane_ParamLimits

0x9453,	// (0x00030d80) cell_large_graphic_colour_popup_pane

0x9472,	// (0x00030d9f) cell_large_graphic_colour_none_popup_pane_t1

0xc285,	// (0x00033bb2) grid_highlight_pane_cp5

0xc55d,	// (0x00033e8a) cell_large_graphic_colour_popup_pane_g1

0xc565,	// (0x00033e92) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00036ea9) cell_large_graphic_colour_popup_pane_g

0xc56d,	// (0x00033e9a) cell_large_graphic_colour_popup_pane_g2_copy1

0xc576,	// (0x00033ea3) grid_highlight_pane_cp4

0xc57e,	// (0x00033eab) bg_popup_window_pane_cp8_ParamLimits

0xc57e,	// (0x00033eab) bg_popup_window_pane_cp8

0x9481,	// (0x00030dae) popup_snote_single_text_window_g1_ParamLimits

0x9481,	// (0x00030dae) popup_snote_single_text_window_g1

0x9493,	// (0x00030dc0) popup_snote_single_text_window_t1_ParamLimits

0x9493,	// (0x00030dc0) popup_snote_single_text_window_t1

0x94a6,	// (0x00030dd3) popup_snote_single_text_window_t2_ParamLimits

0x94a6,	// (0x00030dd3) popup_snote_single_text_window_t2

0x94b9,	// (0x00030de6) popup_snote_single_text_window_t3_ParamLimits

0x94b9,	// (0x00030de6) popup_snote_single_text_window_t3

0x94f2,	// (0x00030e1f) popup_snote_single_text_window_t4_ParamLimits

0x94f2,	// (0x00030e1f) popup_snote_single_text_window_t4

0x9526,	// (0x00030e53) popup_snote_single_text_window_t5_ParamLimits

0x9526,	// (0x00030e53) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00036eae) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00036eae) popup_snote_single_text_window_t

0xc599,	// (0x00033ec6) bg_popup_window_pane_cp9_ParamLimits

0xc599,	// (0x00033ec6) bg_popup_window_pane_cp9

0x9481,	// (0x00030dae) popup_snote_single_graphic_window_g1_ParamLimits

0x9481,	// (0x00030dae) popup_snote_single_graphic_window_g1

0xc5a7,	// (0x00033ed4) popup_snote_single_graphic_window_g2_ParamLimits

0xc5a7,	// (0x00033ed4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00036eb9) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00036eb9) popup_snote_single_graphic_window_g

0xc5b3,	// (0x00033ee0) popup_snote_single_graphic_window_t1_ParamLimits

0xc5b3,	// (0x00033ee0) popup_snote_single_graphic_window_t1

0xc5c6,	// (0x00033ef3) popup_snote_single_graphic_window_t2_ParamLimits

0xc5c6,	// (0x00033ef3) popup_snote_single_graphic_window_t2

0x94b9,	// (0x00030de6) popup_snote_single_graphic_window_t3_ParamLimits

0x94b9,	// (0x00030de6) popup_snote_single_graphic_window_t3

0x94f2,	// (0x00030e1f) popup_snote_single_graphic_window_t4_ParamLimits

0x94f2,	// (0x00030e1f) popup_snote_single_graphic_window_t4

0x9555,	// (0x00030e82) popup_snote_single_graphic_window_t5_ParamLimits

0x9555,	// (0x00030e82) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00036ebe) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00036ebe) popup_snote_single_graphic_window_t

0x3835,	// (0x0002b162) grid_graphic_popup_pane_ParamLimits

0x3835,	// (0x0002b162) grid_graphic_popup_pane

0x385f,	// (0x0002b18c) listscroll_popup_graphic_pane_g1_ParamLimits

0x385f,	// (0x0002b18c) listscroll_popup_graphic_pane_g1

0xb319,	// (0x00032c46) listscroll_popup_graphic_pane_g2_ParamLimits

0xb319,	// (0x00032c46) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x000372a4) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x000372a4) listscroll_popup_graphic_pane_g

0x3887,	// (0x0002b1b4) scroll_pane_cp5

0xb2d8,	// (0x00032c05) cell_graphic_popup_pane_ParamLimits

0xb2d8,	// (0x00032c05) cell_graphic_popup_pane

0x37ac,	// (0x0002b0d9) cell_graphic_popup_pane_g1

0x37b4,	// (0x0002b0e1) cell_graphic_popup_pane_g2

0xc56d,	// (0x00033e9a) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0003729d) cell_graphic_popup_pane_g

0x37bd,	// (0x0002b0ea) cell_graphic_popup_pane_t2

0xc576,	// (0x00033ea3) grid_highlight_pane_cp3

0xc5eb,	// (0x00033f18) list_gen_pane_ParamLimits

0xc5eb,	// (0x00033f18) list_gen_pane

0xc613,	// (0x00033f40) scroll_pane

0xb242,	// (0x00032b6f) bg_list_pane_g1_ParamLimits

0xb242,	// (0x00032b6f) bg_list_pane_g1

0xb25d,	// (0x00032b8a) bg_list_pane_g2_ParamLimits

0xb25d,	// (0x00032b8a) bg_list_pane_g2

0xb270,	// (0x00032b9d) bg_list_pane_g3_ParamLimits

0xb270,	// (0x00032b9d) bg_list_pane_g3

0xb282,	// (0x00032baf) bg_list_pane_g4_ParamLimits

0xb282,	// (0x00032baf) bg_list_pane_g4

0xb294,	// (0x00032bc1) bg_list_pane_g5_ParamLimits

0xb294,	// (0x00032bc1) bg_list_pane_g5

0x0004,

0xf965,	// (0x00037292) bg_list_pane_g_ParamLimits

0xf965,	// (0x00037292) bg_list_pane_g

0xb209,	// (0x00032b36) list_double2_graphic_large_graphic_pane_ParamLimits

0xb209,	// (0x00032b36) list_double2_graphic_large_graphic_pane

0xb209,	// (0x00032b36) list_double2_graphic_pane_ParamLimits

0xb209,	// (0x00032b36) list_double2_graphic_pane

0xb209,	// (0x00032b36) list_double2_large_graphic_pane_ParamLimits

0xb209,	// (0x00032b36) list_double2_large_graphic_pane

0xb209,	// (0x00032b36) list_double2_pane_ParamLimits

0xb209,	// (0x00032b36) list_double2_pane

0xb209,	// (0x00032b36) list_double_graphic_heading_pane_ParamLimits

0xb209,	// (0x00032b36) list_double_graphic_heading_pane

0xb209,	// (0x00032b36) list_double_graphic_pane_ParamLimits

0xb209,	// (0x00032b36) list_double_graphic_pane

0xb209,	// (0x00032b36) list_double_heading_pane_ParamLimits

0xb209,	// (0x00032b36) list_double_heading_pane

0xb209,	// (0x00032b36) list_double_large_graphic_pane_ParamLimits

0xb209,	// (0x00032b36) list_double_large_graphic_pane

0xb209,	// (0x00032b36) list_double_number_pane_ParamLimits

0xb209,	// (0x00032b36) list_double_number_pane

0xb209,	// (0x00032b36) list_double_pane_ParamLimits

0xb209,	// (0x00032b36) list_double_pane

0xb209,	// (0x00032b36) list_double_time_pane_ParamLimits

0xb209,	// (0x00032b36) list_double_time_pane

0xb209,	// (0x00032b36) list_setting_number_pane_ParamLimits

0xb209,	// (0x00032b36) list_setting_number_pane

0xb209,	// (0x00032b36) list_setting_pane_ParamLimits

0xb209,	// (0x00032b36) list_setting_pane

0x95e3,	// (0x00030f10) list_single_2graphic_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_2graphic_pane

0x95e3,	// (0x00030f10) list_single_graphic_heading_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_graphic_heading_pane

0x95e3,	// (0x00030f10) list_single_graphic_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_graphic_pane

0x95e3,	// (0x00030f10) list_single_heading_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_heading_pane

0x95e3,	// (0x00030f10) list_single_large_graphic_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_large_graphic_pane

0x95e3,	// (0x00030f10) list_single_number_heading_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_number_heading_pane

0x95e3,	// (0x00030f10) list_single_number_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_number_pane

0x95e3,	// (0x00030f10) list_single_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_pane

0xc285,	// (0x00033bb2) list_highlight_pane_cp1

0xe806,	// (0x00036133) list_single_pane_g1_ParamLimits

0xe806,	// (0x00036133) list_single_pane_g1

0xe812,	// (0x0003613f) list_single_pane_g2_ParamLimits

0xe812,	// (0x0003613f) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_single_pane_g

0x8b08,	// (0x00030435) list_single_pane_t1_ParamLimits

0x8b08,	// (0x00030435) list_single_pane_t1

0xe806,	// (0x00036133) list_single_number_pane_g1_ParamLimits

0xe806,	// (0x00036133) list_single_number_pane_g1

0xe812,	// (0x0003613f) list_single_number_pane_g2_ParamLimits

0xe812,	// (0x0003613f) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_single_number_pane_g

0xe81e,	// (0x0003614b) list_single_number_pane_t1_ParamLimits

0xe81e,	// (0x0003614b) list_single_number_pane_t1

0x8aca,	// (0x000303f7) list_single_number_pane_t2_ParamLimits

0x8aca,	// (0x000303f7) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00037253) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00037253) list_single_number_pane_t

0xe7fa,	// (0x00036127) list_single_graphic_pane_g1_ParamLimits

0xe7fa,	// (0x00036127) list_single_graphic_pane_g1

0xe806,	// (0x00036133) list_single_graphic_pane_g2_ParamLimits

0xe806,	// (0x00036133) list_single_graphic_pane_g2

0xe812,	// (0x0003613f) list_single_graphic_pane_g3_ParamLimits

0xe812,	// (0x0003613f) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00036ec9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00036ec9) list_single_graphic_pane_g

0xe81e,	// (0x0003614b) list_single_graphic_pane_t1_ParamLimits

0xe81e,	// (0x0003614b) list_single_graphic_pane_t1

0xe806,	// (0x00036133) list_single_heading_pane_g1_ParamLimits

0xe806,	// (0x00036133) list_single_heading_pane_g1

0xe812,	// (0x0003613f) list_single_heading_pane_g2_ParamLimits

0xe812,	// (0x0003613f) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_single_heading_pane_g

0xe834,	// (0x00036161) list_single_heading_pane_t1_ParamLimits

0xe834,	// (0x00036161) list_single_heading_pane_t1

0xe84a,	// (0x00036177) list_single_heading_pane_t2_ParamLimits

0xe84a,	// (0x00036177) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00036ed5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00036ed5) list_single_heading_pane_t

0xe806,	// (0x00036133) list_single_number_heading_pane_g1_ParamLimits

0xe806,	// (0x00036133) list_single_number_heading_pane_g1

0xe812,	// (0x0003613f) list_single_number_heading_pane_g2_ParamLimits

0xe812,	// (0x0003613f) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_single_number_heading_pane_g

0xe834,	// (0x00036161) list_single_number_heading_pane_t1_ParamLimits

0xe834,	// (0x00036161) list_single_number_heading_pane_t1

0xe85c,	// (0x00036189) list_single_number_heading_pane_t2_ParamLimits

0xe85c,	// (0x00036189) list_single_number_heading_pane_t2

0xe86e,	// (0x0003619b) list_single_number_heading_pane_t3_ParamLimits

0xe86e,	// (0x0003619b) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00036eda) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00036eda) list_single_number_heading_pane_t

0xe880,	// (0x000361ad) list_single_graphic_heading_pane_g1_ParamLimits

0xe880,	// (0x000361ad) list_single_graphic_heading_pane_g1

0x8603,	// (0x0002ff30) list_single_graphic_heading_pane_g4_ParamLimits

0x8603,	// (0x0002ff30) list_single_graphic_heading_pane_g4

0xe812,	// (0x0003613f) list_single_graphic_heading_pane_g5_ParamLimits

0xe812,	// (0x0003613f) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00036ee1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00036ee1) list_single_graphic_heading_pane_g

0xe834,	// (0x00036161) list_single_graphic_heading_pane_t1_ParamLimits

0xe834,	// (0x00036161) list_single_graphic_heading_pane_t1

0x8614,	// (0x0002ff41) list_single_graphic_heading_pane_t2_ParamLimits

0x8614,	// (0x0002ff41) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00036ee8) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00036ee8) list_single_graphic_heading_pane_t

0xe88c,	// (0x000361b9) list_single_large_graphic_pane_g1_ParamLimits

0xe88c,	// (0x000361b9) list_single_large_graphic_pane_g1

0xe806,	// (0x00036133) list_single_large_graphic_pane_g2_ParamLimits

0xe806,	// (0x00036133) list_single_large_graphic_pane_g2

0xe812,	// (0x0003613f) list_single_large_graphic_pane_g3_ParamLimits

0xe812,	// (0x0003613f) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00036eed) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00036eed) list_single_large_graphic_pane_g

0x139a,	// (0x00028cc7) wait_border_pane_g2_copy1

0x8626,	// (0x0002ff53) list_single_large_graphic_pane_g4_cp2

0xe81e,	// (0x0003614b) list_single_large_graphic_pane_t1_ParamLimits

0xe81e,	// (0x0003614b) list_single_large_graphic_pane_t1

0xe898,	// (0x000361c5) list_double_pane_g1_ParamLimits

0xe898,	// (0x000361c5) list_double_pane_g1

0xe8a4,	// (0x000361d1) list_double_pane_g2_ParamLimits

0xe8a4,	// (0x000361d1) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00036ef4) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00036ef4) list_double_pane_g

0x862e,	// (0x0002ff5b) list_double_pane_t1_ParamLimits

0x862e,	// (0x0002ff5b) list_double_pane_t1

0x8644,	// (0x0002ff71) list_double_pane_t2_ParamLimits

0x8644,	// (0x0002ff71) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00036ef9) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00036ef9) list_double_pane_t

0x8656,	// (0x0002ff83) list_double2_pane_g1_ParamLimits

0x8656,	// (0x0002ff83) list_double2_pane_g1

0xe8a4,	// (0x000361d1) list_double2_pane_g2_ParamLimits

0xe8a4,	// (0x000361d1) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00036efe) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00036efe) list_double2_pane_g

0x862e,	// (0x0002ff5b) list_double2_pane_t1_ParamLimits

0x862e,	// (0x0002ff5b) list_double2_pane_t1

0x8667,	// (0x0002ff94) list_double2_pane_t2_ParamLimits

0x8667,	// (0x0002ff94) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00036f03) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00036f03) list_double2_pane_t

0xe898,	// (0x000361c5) list_double_number_pane_g1_ParamLimits

0xe898,	// (0x000361c5) list_double_number_pane_g1

0xe8a4,	// (0x000361d1) list_double_number_pane_g2_ParamLimits

0xe8a4,	// (0x000361d1) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00036ef4) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00036ef4) list_double_number_pane_g

0x8679,	// (0x0002ffa6) list_double_number_pane_t1_ParamLimits

0x8679,	// (0x0002ffa6) list_double_number_pane_t1

0x868b,	// (0x0002ffb8) list_double_number_pane_t2_ParamLimits

0x868b,	// (0x0002ffb8) list_double_number_pane_t2

0x86a1,	// (0x0002ffce) list_double_number_pane_t3_ParamLimits

0x86a1,	// (0x0002ffce) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00036f08) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00036f08) list_double_number_pane_t

0x86b3,	// (0x0002ffe0) list_double_graphic_pane_g1_ParamLimits

0x86b3,	// (0x0002ffe0) list_double_graphic_pane_g1

0xe8b0,	// (0x000361dd) list_double_graphic_pane_g2_ParamLimits

0xe8b0,	// (0x000361dd) list_double_graphic_pane_g2

0xe8bf,	// (0x000361ec) list_double_graphic_pane_g3_ParamLimits

0xe8bf,	// (0x000361ec) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00036f0f) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00036f0f) list_double_graphic_pane_g

0x86cb,	// (0x0002fff8) list_double_graphic_pane_t1_ParamLimits

0x86cb,	// (0x0002fff8) list_double_graphic_pane_t1

0x86e1,	// (0x0003000e) list_double_graphic_pane_t2_ParamLimits

0x86e1,	// (0x0003000e) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00036f18) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00036f18) list_double_graphic_pane_t

0x86f3,	// (0x00030020) list_double2_graphic_pane_g1_ParamLimits

0x86f3,	// (0x00030020) list_double2_graphic_pane_g1

0xe8cb,	// (0x000361f8) list_double2_graphic_pane_g2_ParamLimits

0xe8cb,	// (0x000361f8) list_double2_graphic_pane_g2

0xe8d7,	// (0x00036204) list_double2_graphic_pane_g3_ParamLimits

0xe8d7,	// (0x00036204) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00036f1d) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00036f1d) list_double2_graphic_pane_g

0x868b,	// (0x0002ffb8) list_double2_graphic_pane_t1_ParamLimits

0x868b,	// (0x0002ffb8) list_double2_graphic_pane_t1

0x86ff,	// (0x0003002c) list_double2_graphic_pane_t2_ParamLimits

0x86ff,	// (0x0003002c) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036f24) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036f24) list_double2_graphic_pane_t

0x8711,	// (0x0003003e) list_double_large_graphic_pane_g1_ParamLimits

0x8711,	// (0x0003003e) list_double_large_graphic_pane_g1

0x8656,	// (0x0002ff83) list_double_large_graphic_pane_g2_ParamLimits

0x8656,	// (0x0002ff83) list_double_large_graphic_pane_g2

0xe8a4,	// (0x000361d1) list_double_large_graphic_pane_g3_ParamLimits

0xe8a4,	// (0x000361d1) list_double_large_graphic_pane_g3

0x8724,	// (0x00030051) list_double_large_graphic_pane_g4_ParamLimits

0x8724,	// (0x00030051) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00036f29) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00036f29) list_double_large_graphic_pane_g

0x8736,	// (0x00030063) list_double_large_graphic_pane_t1_ParamLimits

0x8736,	// (0x00030063) list_double_large_graphic_pane_t1

0x874f,	// (0x0003007c) list_double_large_graphic_pane_t2_ParamLimits

0x874f,	// (0x0003007c) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00036f34) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00036f34) list_double_large_graphic_pane_t

0x8761,	// (0x0003008e) list_double2_large_graphic_pane_g1_ParamLimits

0x8761,	// (0x0003008e) list_double2_large_graphic_pane_g1

0x8656,	// (0x0002ff83) list_double2_large_graphic_pane_g2_ParamLimits

0x8656,	// (0x0002ff83) list_double2_large_graphic_pane_g2

0xe8a4,	// (0x000361d1) list_double2_large_graphic_pane_g3_ParamLimits

0xe8a4,	// (0x000361d1) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00036f39) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00036f39) list_double2_large_graphic_pane_g

0x868b,	// (0x0002ffb8) list_double2_large_graphic_pane_t1_ParamLimits

0x868b,	// (0x0002ffb8) list_double2_large_graphic_pane_t1

0x86ff,	// (0x0003002c) list_double2_large_graphic_pane_t2_ParamLimits

0x86ff,	// (0x0003002c) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036f24) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036f24) list_double2_large_graphic_pane_t

0x876d,	// (0x0003009a) list_double_heading_pane_g1_ParamLimits

0x876d,	// (0x0003009a) list_double_heading_pane_g1

0xe8f8,	// (0x00036225) list_double_heading_pane_g2_ParamLimits

0xe8f8,	// (0x00036225) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00036f40) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00036f40) list_double_heading_pane_g

0x877e,	// (0x000300ab) list_double_heading_pane_t1_ParamLimits

0x877e,	// (0x000300ab) list_double_heading_pane_t1

0x86ff,	// (0x0003002c) list_double_heading_pane_t2_ParamLimits

0x86ff,	// (0x0003002c) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00036f45) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00036f45) list_double_heading_pane_t

0x8794,	// (0x000300c1) list_double_graphic_heading_pane_g1_ParamLimits

0x8794,	// (0x000300c1) list_double_graphic_heading_pane_g1

0x876d,	// (0x0003009a) list_double_graphic_heading_pane_g2_ParamLimits

0x876d,	// (0x0003009a) list_double_graphic_heading_pane_g2

0xe8f8,	// (0x00036225) list_double_graphic_heading_pane_g3_ParamLimits

0xe8f8,	// (0x00036225) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00036f4a) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00036f4a) list_double_graphic_heading_pane_g

0x877e,	// (0x000300ab) list_double_graphic_heading_pane_t1_ParamLimits

0x877e,	// (0x000300ab) list_double_graphic_heading_pane_t1

0x86ff,	// (0x0003002c) list_double_graphic_heading_pane_t2_ParamLimits

0x86ff,	// (0x0003002c) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00036f45) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00036f45) list_double_graphic_heading_pane_t

0x8656,	// (0x0002ff83) list_double_time_pane_g1_ParamLimits

0x8656,	// (0x0002ff83) list_double_time_pane_g1

0xe8a4,	// (0x000361d1) list_double_time_pane_g2_ParamLimits

0xe8a4,	// (0x000361d1) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00036efe) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00036efe) list_double_time_pane_g

0xe904,	// (0x00036231) list_double_time_pane_t1_ParamLimits

0xe904,	// (0x00036231) list_double_time_pane_t1

0xe91a,	// (0x00036247) list_double_time_pane_t2_ParamLimits

0xe91a,	// (0x00036247) list_double_time_pane_t2

0xe92c,	// (0x00036259) list_double_time_pane_t3_ParamLimits

0xe92c,	// (0x00036259) list_double_time_pane_t3

0xe93e,	// (0x0003626b) list_double_time_pane_t4_ParamLimits

0xe93e,	// (0x0003626b) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00036f51) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00036f51) list_double_time_pane_t

0xe950,	// (0x0003627d) list_setting_pane_g1_ParamLimits

0xe950,	// (0x0003627d) list_setting_pane_g1

0xe95c,	// (0x00036289) list_setting_pane_g2_ParamLimits

0xe95c,	// (0x00036289) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00036f5a) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00036f5a) list_setting_pane_g

0x87a0,	// (0x000300cd) list_setting_pane_t1_ParamLimits

0x87a0,	// (0x000300cd) list_setting_pane_t1

0x87b7,	// (0x000300e4) list_setting_pane_t2_ParamLimits

0x87b7,	// (0x000300e4) list_setting_pane_t2

0x0002,

0xf632,	// (0x00036f5f) list_setting_pane_t_ParamLimits

0xf632,	// (0x00036f5f) list_setting_pane_t

0x87f6,	// (0x00030123) set_value_pane_cp_ParamLimits

0x87f6,	// (0x00030123) set_value_pane_cp

0xe968,	// (0x00036295) list_setting_number_pane_g1_ParamLimits

0xe968,	// (0x00036295) list_setting_number_pane_g1

0xe974,	// (0x000362a1) list_setting_number_pane_g2_ParamLimits

0xe974,	// (0x000362a1) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00036f66) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00036f66) list_setting_number_pane_g

0x8802,	// (0x0003012f) list_setting_number_pane_t1_ParamLimits

0x8802,	// (0x0003012f) list_setting_number_pane_t1

0xe980,	// (0x000362ad) list_setting_number_pane_t2_ParamLimits

0xe980,	// (0x000362ad) list_setting_number_pane_t2

0x8816,	// (0x00030143) list_setting_number_pane_t3_ParamLimits

0x8816,	// (0x00030143) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00036f6b) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00036f6b) list_setting_number_pane_t

0x87f6,	// (0x00030123) set_value_pane_ParamLimits

0x87f6,	// (0x00030123) set_value_pane

0xc647,	// (0x00033f74) bg_set_opt_pane_ParamLimits

0xc647,	// (0x00033f74) bg_set_opt_pane

0x882e,	// (0x0003015b) set_value_pane_t1

0xc668,	// (0x00033f95) slider_set_pane_cp3

0x958e,	// (0x00030ebb) volume_small_pane_cp

0xc671,	// (0x00033f9e) list_form_gen_pane

0xc67a,	// (0x00033fa7) scroll_pane_cp8

0x883c,	// (0x00030169) form_field_data_pane_ParamLimits

0x883c,	// (0x00030169) form_field_data_pane

0x8853,	// (0x00030180) form_field_data_wide_pane_ParamLimits

0x8853,	// (0x00030180) form_field_data_wide_pane

0x8873,	// (0x000301a0) form_field_popup_pane_ParamLimits

0x8873,	// (0x000301a0) form_field_popup_pane

0x888b,	// (0x000301b8) form_field_popup_wide_pane_ParamLimits

0x888b,	// (0x000301b8) form_field_popup_wide_pane

0xe9d2,	// (0x000362ff) form_field_slider_pane_ParamLimits

0xe9d2,	// (0x000362ff) form_field_slider_pane

0x88a8,	// (0x000301d5) form_field_slider_wide_pane_ParamLimits

0x88a8,	// (0x000301d5) form_field_slider_wide_pane

0xc68b,	// (0x00033fb8) data_form_pane

0x88c5,	// (0x000301f2) form_field_data_pane_t1

0xc697,	// (0x00033fc4) input_focus_pane

0x88df,	// (0x0003020c) data_form_wide_pane

0x88fc,	// (0x00030229) form_field_data_wide_pane_t1

0xc58b,	// (0x00033eb8) input_focus_pane_cp6

0x891e,	// (0x0003024b) form_field_popup_pane_t1

0xc697,	// (0x00033fc4) input_focus_pane_cp7

0xc6c5,	// (0x00033ff2) list_form_pane

0x8940,	// (0x0003026d) form_field_popup_wide_pane_t1

0xc697,	// (0x00033fc4) input_focus_pane_cp8

0xc6d1,	// (0x00033ffe) list_form_wide_pane

0x895d,	// (0x0003028a) form_field_slider_pane_t1_ParamLimits

0x895d,	// (0x0003028a) form_field_slider_pane_t1

0x8975,	// (0x000302a2) form_field_slider_pane_t2_ParamLimits

0x8975,	// (0x000302a2) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00036f7b) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00036f7b) form_field_slider_pane_t

0xc2d3,	// (0x00033c00) input_focus_pane_cp9_ParamLimits

0xc2d3,	// (0x00033c00) input_focus_pane_cp9

0x898a,	// (0x000302b7) slider_cont_pane_ParamLimits

0x898a,	// (0x000302b7) slider_cont_pane

0xc6dd,	// (0x0003400a) form_field_slider_wide_pane_t1_ParamLimits

0xc6dd,	// (0x0003400a) form_field_slider_wide_pane_t1

0x899e,	// (0x000302cb) form_field_slider_wide_pane_t2_ParamLimits

0x899e,	// (0x000302cb) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00036f80) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00036f80) form_field_slider_wide_pane_t

0xc2d3,	// (0x00033c00) input_focus_pane_cp10_ParamLimits

0xc2d3,	// (0x00033c00) input_focus_pane_cp10

0x89b0,	// (0x000302dd) slider_cont_pane_cp1_ParamLimits

0x89b0,	// (0x000302dd) slider_cont_pane_cp1

0x89c4,	// (0x000302f1) slider_form_pane_cp

0xc6ef,	// (0x0003401c) input_focus_pane_g1

0xc6f7,	// (0x00034024) input_focus_pane_g2

0xc6ff,	// (0x0003402c) input_focus_pane_g3

0xc707,	// (0x00034034) input_focus_pane_g4

0xc70f,	// (0x0003403c) input_focus_pane_g5

0xc717,	// (0x00034044) input_focus_pane_g6

0xc71f,	// (0x0003404c) input_focus_pane_g7

0xc727,	// (0x00034054) input_focus_pane_g8

0xc72f,	// (0x0003405c) input_focus_pane_g9

0xc27b,	// (0x00033ba8) input_focus_pane_g10

0x0009,

0xf658,	// (0x00036f85) input_focus_pane_g

0x13a3,	// (0x00028cd0) wait_border_pane_g3_copy1

0x89cc,	// (0x000302f9) data_form_pane_t1

0xc27b,	// (0x00033ba8) wait_anim_pane_g1_copy1

0x8adc,	// (0x00030409) data_form_wide_pane_t1

0x89e6,	// (0x00030313) list_form_graphic_pane_cp_ParamLimits

0x89e6,	// (0x00030313) list_form_graphic_pane_cp

0x3637,	// (0x0002af64) slider_form_pane_g1

0x3640,	// (0x0002af6d) slider_form_pane_g2

0x0006,

0xf956,	// (0x00037283) slider_form_pane_g

0x89e6,	// (0x00030313) list_form_graphic_pane_ParamLimits

0x89e6,	// (0x00030313) list_form_graphic_pane

0x89f9,	// (0x00030326) list_form_graphic_pane_g1

0x8a01,	// (0x0003032e) list_form_graphic_pane_t1_ParamLimits

0x8a01,	// (0x0003032e) list_form_graphic_pane_t1

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp5_ParamLimits

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp5

0x8a16,	// (0x00030343) find_pane_g1

0xc737,	// (0x00034064) input_find_pane

0x8a1f,	// (0x0003034c) input_find_pane_g1_ParamLimits

0x8a1f,	// (0x0003034c) input_find_pane_g1

0x8a2b,	// (0x00030358) input_find_pane_t1_ParamLimits

0x8a2b,	// (0x00030358) input_find_pane_t1

0x8a40,	// (0x0003036d) input_find_pane_t2_ParamLimits

0x8a40,	// (0x0003036d) input_find_pane_t2

0x0001,

0xf66d,	// (0x00036f9a) input_find_pane_t_ParamLimits

0xf66d,	// (0x00036f9a) input_find_pane_t

0xc740,	// (0x0003406d) input_focus_pane_cp5_ParamLimits

0xc740,	// (0x0003406d) input_focus_pane_cp5

0xc753,	// (0x00034080) bg_popup_window_pane_cp2_ParamLimits

0xc753,	// (0x00034080) bg_popup_window_pane_cp2

0xc760,	// (0x0003408d) listscroll_menu_pane_ParamLimits

0xc760,	// (0x0003408d) listscroll_menu_pane

0x95a3,	// (0x00030ed0) popup_submenu_window_ParamLimits

0x95a3,	// (0x00030ed0) popup_submenu_window

0xc76c,	// (0x00034099) find_popup_pane_g1

0x95cb,	// (0x00030ef8) input_popup_find_pane_cp

0xc774,	// (0x000340a1) input_focus_pane_cp4_ParamLimits

0xc774,	// (0x000340a1) input_focus_pane_cp4

0xc782,	// (0x000340af) input_popup_find_pane_t1_ParamLimits

0xc782,	// (0x000340af) input_popup_find_pane_t1

0xc285,	// (0x00033bb2) bg_popup_sub_pane_cp

0xc7b0,	// (0x000340dd) listscroll_popup_sub_pane

0xc7b8,	// (0x000340e5) list_submenu_pane_ParamLimits

0xc7b8,	// (0x000340e5) list_submenu_pane

0xc7c9,	// (0x000340f6) scroll_pane_cp4

0x95e3,	// (0x00030f10) list_single_popup_submenu_pane_ParamLimits

0x95e3,	// (0x00030f10) list_single_popup_submenu_pane

0x95f7,	// (0x00030f24) list_single_popup_submenu_pane_g1

0x95ff,	// (0x00030f2c) list_single_popup_submenu_pane_t1_ParamLimits

0x95ff,	// (0x00030f2c) list_single_popup_submenu_pane_t1

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp1_ParamLimits

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp1

0xc7d1,	// (0x000340fe) tabs_2_active_pane_g1

0x9614,	// (0x00030f41) tabs_2_active_pane_t1

0xc2d3,	// (0x00033c00) bg_passive_tab_pane_cp1_ParamLimits

0xc2d3,	// (0x00033c00) bg_passive_tab_pane_cp1

0xc7d1,	// (0x000340fe) tabs_2_passive_pane_g1

0x9614,	// (0x00030f41) tabs_2_passive_pane_t1

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp4

0x9626,	// (0x00030f53) tabs_2_long_active_pane_t1

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp4

0x0ccc,	// (0x000285f9) list_single_midp_graphic_pane_g4_ParamLimits

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp5

0x9639,	// (0x00030f66) tabs_3_long_active_pane_t1

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp5

0x0ccc,	// (0x000285f9) list_single_midp_graphic_pane_g4

0xc2e1,	// (0x00033c0e) bg_popup_window_pane_cp13_ParamLimits

0xc2e1,	// (0x00033c0e) bg_popup_window_pane_cp13

0xc7e5,	// (0x00034112) listscroll_popup_fast_pane_ParamLimits

0xc7e5,	// (0x00034112) listscroll_popup_fast_pane

0xc7f1,	// (0x0003411e) grid_popup_fast_pane_ParamLimits

0xc7f1,	// (0x0003411e) grid_popup_fast_pane

0xc803,	// (0x00034130) scroll_pane_cp9_ParamLimits

0xc803,	// (0x00034130) scroll_pane_cp9

0x4f70,	// (0x0002c89d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f70,	// (0x0002c89d) list_single_graphic_hl_pane_t1_cp2

0xc816,	// (0x00034143) input_focus_pane_cp20_ParamLimits

0xc816,	// (0x00034143) input_focus_pane_cp20

0xc824,	// (0x00034151) query_popup_data_pane_t1_ParamLimits

0xc824,	// (0x00034151) query_popup_data_pane_t1

0xc837,	// (0x00034164) query_popup_data_pane_t2_ParamLimits

0xc837,	// (0x00034164) query_popup_data_pane_t2

0xc87d,	// (0x000341aa) query_popup_data_pane_t3_ParamLimits

0xc87d,	// (0x000341aa) query_popup_data_pane_t3

0xc8be,	// (0x000341eb) query_popup_data_pane_t4_ParamLimits

0xc8be,	// (0x000341eb) query_popup_data_pane_t4

0xc8fa,	// (0x00034227) query_popup_data_pane_t5_ParamLimits

0xc8fa,	// (0x00034227) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00036f9f) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00036f9f) query_popup_data_pane_t

0xc6ef,	// (0x0003401c) bg_set_opt_pane_g1

0xc6f7,	// (0x00034024) bg_set_opt_pane_g2

0xc6ff,	// (0x0003402c) bg_set_opt_pane_g3

0xc707,	// (0x00034034) bg_set_opt_pane_g4

0xc70f,	// (0x0003403c) bg_set_opt_pane_g5

0xc717,	// (0x00034044) bg_set_opt_pane_g6

0xc71f,	// (0x0003404c) bg_set_opt_pane_g7

0xc727,	// (0x00034054) bg_set_opt_pane_g8

0xc72f,	// (0x0003405c) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00036faa) bg_set_opt_pane_g

0xf33f,	// (0x00036c6c) control_top_pane_stacon_ParamLimits

0xf33f,	// (0x00036c6c) control_top_pane_stacon

0xf392,	// (0x00036cbf) signal_pane_stacon_ParamLimits

0xf392,	// (0x00036cbf) signal_pane_stacon

0xcc86,	// (0x000345b3) stacon_top_pane_g1_ParamLimits

0xcc86,	// (0x000345b3) stacon_top_pane_g1

0xf3b7,	// (0x00036ce4) title_pane_stacon_ParamLimits

0xf3b7,	// (0x00036ce4) title_pane_stacon

0xf3e1,	// (0x00036d0e) uni_indicator_pane_stacon_ParamLimits

0xf3e1,	// (0x00036d0e) uni_indicator_pane_stacon

0xf3f6,	// (0x00036d23) battery_pane_stacon_ParamLimits

0xf3f6,	// (0x00036d23) battery_pane_stacon

0xf43a,	// (0x00036d67) control_bottom_pane_stacon_ParamLimits

0xf43a,	// (0x00036d67) control_bottom_pane_stacon

0xf45d,	// (0x00036d8a) navi_pane_stacon_ParamLimits

0xf45d,	// (0x00036d8a) navi_pane_stacon

0xcca8,	// (0x000345d5) stacon_bottom_pane_g1_ParamLimits

0xcca8,	// (0x000345d5) stacon_bottom_pane_g1

0xf102,	// (0x00036a2f) aid_levels_signal_lsc_ParamLimits

0xf102,	// (0x00036a2f) aid_levels_signal_lsc

0xf118,	// (0x00036a45) signal_pane_stacon_g1_ParamLimits

0xf118,	// (0x00036a45) signal_pane_stacon_g1

0xf12c,	// (0x00036a59) signal_pane_stacon_g2_ParamLimits

0xf12c,	// (0x00036a59) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00036fbd) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00036fbd) signal_pane_stacon_g

0xf161,	// (0x00036a8e) title_pane_stacon_t1_ParamLimits

0xf161,	// (0x00036a8e) title_pane_stacon_t1

0xc93e,	// (0x0003426b) uni_indicator_pane_stacon_g1

0xc948,	// (0x00034275) uni_indicator_pane_stacon_g2

0xc952,	// (0x0003427f) uni_indicator_pane_stacon_g3

0xc95c,	// (0x00034289) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00036fc9) uni_indicator_pane_stacon_g

0xf186,	// (0x00036ab3) control_top_pane_stacon_g1

0xf18e,	// (0x00036abb) control_top_pane_stacon_t1_ParamLimits

0xf18e,	// (0x00036abb) control_top_pane_stacon_t1

0xf1c5,	// (0x00036af2) aid_levels_battery_lsc_ParamLimits

0xf1c5,	// (0x00036af2) aid_levels_battery_lsc

0xf1dc,	// (0x00036b09) battery_pane_stacon_g1_ParamLimits

0xf1dc,	// (0x00036b09) battery_pane_stacon_g1

0xf1ef,	// (0x00036b1c) battery_pane_stacon_g2_ParamLimits

0xf1ef,	// (0x00036b1c) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00036fd2) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00036fd2) battery_pane_stacon_g

0xf22d,	// (0x00036b5a) navi_icon_pane_stacon

0xf241,	// (0x00036b6e) navi_navi_pane_stacon

0xf22d,	// (0x00036b5a) navi_text_pane_stacon

0xf186,	// (0x00036ab3) control_bottom_pane_stacon_g1

0xf255,	// (0x00036b82) control_bottom_pane_stacon_t1_ParamLimits

0xf255,	// (0x00036b82) control_bottom_pane_stacon_t1

0x9665,	// (0x00030f92) grid_app_pane_ParamLimits

0x9665,	// (0x00030f92) grid_app_pane

0x969d,	// (0x00030fca) scroll_pane_cp15_ParamLimits

0x969d,	// (0x00030fca) scroll_pane_cp15

0x96b2,	// (0x00030fdf) cell_app_pane_ParamLimits

0x96b2,	// (0x00030fdf) cell_app_pane

0x96f7,	// (0x00031024) cell_app_pane_g1_ParamLimits

0x96f7,	// (0x00031024) cell_app_pane_g1

0xc980,	// (0x000342ad) cell_app_pane_g2_ParamLimits

0xc980,	// (0x000342ad) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00036fd7) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00036fd7) cell_app_pane_g

0x971b,	// (0x00031048) cell_app_pane_t1_ParamLimits

0x971b,	// (0x00031048) cell_app_pane_t1

0xc98c,	// (0x000342b9) grid_highlight_pane_ParamLimits

0xc98c,	// (0x000342b9) grid_highlight_pane

0xc6ef,	// (0x0003401c) cell_highlight_pane_g1

0xc6f7,	// (0x00034024) cell_highlight_pane_g2

0xc6ff,	// (0x0003402c) cell_highlight_pane_g3

0xc707,	// (0x00034034) cell_highlight_pane_g4

0xc70f,	// (0x0003403c) cell_highlight_pane_g5

0xc717,	// (0x00034044) cell_highlight_pane_g6

0xc71f,	// (0x0003404c) cell_highlight_pane_g7

0xc727,	// (0x00034054) cell_highlight_pane_g8

0xc72f,	// (0x0003405c) cell_highlight_pane_g9

0xc27b,	// (0x00033ba8) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00036f85) cell_highlight_pane_g

0xc99d,	// (0x000342ca) bg_scroll_pane

0x973b,	// (0x00031068) scroll_handle_pane

0xc9e4,	// (0x00034311) scroll_bg_pane_g1

0xc9f9,	// (0x00034326) scroll_bg_pane_g2

0xca11,	// (0x0003433e) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00036fdc) scroll_bg_pane_g

0x974f,	// (0x0003107c) scroll_handle_focus_pane_ParamLimits

0x974f,	// (0x0003107c) scroll_handle_focus_pane

0xc9e4,	// (0x00034311) scroll_handle_pane_g1

0xca26,	// (0x00034353) scroll_handle_pane_g2

0xca11,	// (0x0003433e) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00036fe3) scroll_handle_pane_g

0xc774,	// (0x000340a1) bg_popup_sub_pane_cp21_ParamLimits

0xc774,	// (0x000340a1) bg_popup_sub_pane_cp21

0x975c,	// (0x00031089) popup_fep_japan_predictive_window_t1_ParamLimits

0x975c,	// (0x00031089) popup_fep_japan_predictive_window_t1

0x9773,	// (0x000310a0) popup_fep_japan_predictive_window_t2_ParamLimits

0x9773,	// (0x000310a0) popup_fep_japan_predictive_window_t2

0x97a6,	// (0x000310d3) popup_fep_japan_predictive_window_t3_ParamLimits

0x97a6,	// (0x000310d3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00036fea) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00036fea) popup_fep_japan_predictive_window_t

0xc285,	// (0x00033bb2) bg_popup_sub_pane_cp23

0x97dd,	// (0x0003110a) listscroll_japin_cand_pane

0xca3a,	// (0x00034367) popup_fep_japan_candidate_window_t1

0xca48,	// (0x00034375) candidate_pane_ParamLimits

0xca48,	// (0x00034375) candidate_pane

0x97e5,	// (0x00031112) scroll_pane_cp30

0xca5a,	// (0x00034387) list_single_popup_jap_candidate_pane_ParamLimits

0xca5a,	// (0x00034387) list_single_popup_jap_candidate_pane

0xc285,	// (0x00033bb2) list_highlight_pane_cp30

0xca6f,	// (0x0003439c) list_single_popup_jap_candidate_pane_t1

0xca7e,	// (0x000343ab) level_1_signal

0xca8b,	// (0x000343b8) level_2_signal

0xca98,	// (0x000343c5) level_3_signal

0xcaa5,	// (0x000343d2) level_4_signal

0xcab2,	// (0x000343df) level_5_signal

0xcabf,	// (0x000343ec) level_6_signal

0xcacc,	// (0x000343f9) level_7_signal

0xca7e,	// (0x000343ab) level_1_battery

0xca8b,	// (0x000343b8) level_2_battery

0xca98,	// (0x000343c5) level_3_battery

0xcaa5,	// (0x000343d2) level_4_battery

0xcab2,	// (0x000343df) level_5_battery

0xcabf,	// (0x000343ec) level_6_battery

0xcacc,	// (0x000343f9) level_7_battery

0xcaf1,	// (0x0003441e) list_menu_pane_ParamLimits

0xcaf1,	// (0x0003441e) list_menu_pane

0xcb07,	// (0x00034434) scroll_pane_cp25_ParamLimits

0xcb07,	// (0x00034434) scroll_pane_cp25

0x97ed,	// (0x0003111a) list_double2_graphic_pane_cp2_ParamLimits

0x97ed,	// (0x0003111a) list_double2_graphic_pane_cp2

0x97ed,	// (0x0003111a) list_double2_large_graphic_pane_cp2_ParamLimits

0x97ed,	// (0x0003111a) list_double2_large_graphic_pane_cp2

0x97ed,	// (0x0003111a) list_double2_pane_cp2_ParamLimits

0x97ed,	// (0x0003111a) list_double2_pane_cp2

0x97ed,	// (0x0003111a) list_double_graphic_pane_cp2_ParamLimits

0x97ed,	// (0x0003111a) list_double_graphic_pane_cp2

0x97ed,	// (0x0003111a) list_double_large_graphic_pane_cp2_ParamLimits

0x97ed,	// (0x0003111a) list_double_large_graphic_pane_cp2

0x97ed,	// (0x0003111a) list_double_number_pane_cp2_ParamLimits

0x97ed,	// (0x0003111a) list_double_number_pane_cp2

0x97ed,	// (0x0003111a) list_double_pane_cp2_ParamLimits

0x97ed,	// (0x0003111a) list_double_pane_cp2

0x97fc,	// (0x00031129) list_single_2graphic_pane_cp2_ParamLimits

0x97fc,	// (0x00031129) list_single_2graphic_pane_cp2

0x97fc,	// (0x00031129) list_single_graphic_heading_pane_cp2_ParamLimits

0x97fc,	// (0x00031129) list_single_graphic_heading_pane_cp2

0x97fc,	// (0x00031129) list_single_graphic_pane_cp2_ParamLimits

0x97fc,	// (0x00031129) list_single_graphic_pane_cp2

0x97fc,	// (0x00031129) list_single_heading_pane_cp2_ParamLimits

0x97fc,	// (0x00031129) list_single_heading_pane_cp2

0xcb30,	// (0x0003445d) list_single_large_graphic_pane_cp2_ParamLimits

0xcb30,	// (0x0003445d) list_single_large_graphic_pane_cp2

0x97fc,	// (0x00031129) list_single_number_heading_pane_cp2_ParamLimits

0x97fc,	// (0x00031129) list_single_number_heading_pane_cp2

0x97fc,	// (0x00031129) list_single_number_pane_cp2_ParamLimits

0x97fc,	// (0x00031129) list_single_number_pane_cp2

0x980e,	// (0x0003113b) list_single_pane_cp2_ParamLimits

0x980e,	// (0x0003113b) list_single_pane_cp2

0xcb4a,	// (0x00034477) bg_popup_sub_pane_cp22

0xf325,	// (0x00036c52) popup_side_volume_key_window_g1

0xf331,	// (0x00036c5e) popup_side_volume_key_window_t1

0x98d6,	// (0x00031203) volume_small_pane_cp1

0xc2d3,	// (0x00033c00) bg_popup_sub_pane_cp24_ParamLimits

0xc2d3,	// (0x00033c00) bg_popup_sub_pane_cp24

0xcb60,	// (0x0003448d) fep_china_uni_candidate_pane_ParamLimits

0xcb60,	// (0x0003448d) fep_china_uni_candidate_pane

0xcb74,	// (0x000344a1) fep_china_uni_entry_pane

0xcb84,	// (0x000344b1) popup_fep_china_uni_window_g1

0x98de,	// (0x0003120b) fep_china_uni_entry_pane_g1

0x98e6,	// (0x00031213) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x0003701b) fep_china_uni_entry_pane_g

0xcba0,	// (0x000344cd) fep_entry_item_pane

0xcbaa,	// (0x000344d7) fep_candidate_item_pane

0x98ee,	// (0x0003121b) fep_china_uni_candidate_pane_g1

0xcbb2,	// (0x000344df) fep_china_uni_candidate_pane_g2

0xcbba,	// (0x000344e7) fep_china_uni_candidate_pane_g3

0x98f6,	// (0x00031223) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00037020) fep_china_uni_candidate_pane_g

0xc27b,	// (0x00033ba8) fep_entry_item_pane_g1

0xcbc2,	// (0x000344ef) fep_entry_item_pane_t1_ParamLimits

0xcbc2,	// (0x000344ef) fep_entry_item_pane_t1

0xcbd8,	// (0x00034505) fep_candidate_item_pane_t1_ParamLimits

0xcbd8,	// (0x00034505) fep_candidate_item_pane_t1

0xcbed,	// (0x0003451a) fep_candidate_item_pane_t2_ParamLimits

0xcbed,	// (0x0003451a) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00037029) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00037029) fep_candidate_item_pane_t

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp31_ParamLimits

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp31

0xcbff,	// (0x0003452c) level_1_signal_lsc

0xcc08,	// (0x00034535) level_2_signal_lsc

0xcc11,	// (0x0003453e) level_3_signal_lsc

0xcc1a,	// (0x00034547) level_4_signal_lsc

0xcc23,	// (0x00034550) level_5_signal_lsc

0xcc2c,	// (0x00034559) level_6_signal_lsc

0xcc35,	// (0x00034562) level_7_signal_lsc

0xcc35,	// (0x00034562) level_1_battery_lsc

0xcc3e,	// (0x0003456b) level_2_battery_lsc

0xcc47,	// (0x00034574) level_3_battery_lsc

0xcc50,	// (0x0003457d) level_4_battery_lsc

0xcc59,	// (0x00034586) level_5_battery_lsc

0xcc62,	// (0x0003458f) level_6_battery_lsc

0xcbff,	// (0x0003452c) level_7_battery_lsc

0xcc6b,	// (0x00034598) scroll_handle_focus_pane_g1

0xcc74,	// (0x000345a1) scroll_handle_focus_pane_g2

0xcc7d,	// (0x000345aa) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x0003702e) scroll_handle_focus_pane_g

0x8a55,	// (0x00030382) list_single_2graphic_pane_g1_ParamLimits

0x8a55,	// (0x00030382) list_single_2graphic_pane_g1

0x8603,	// (0x0002ff30) list_single_2graphic_pane_g2_ParamLimits

0x8603,	// (0x0002ff30) list_single_2graphic_pane_g2

0xe812,	// (0x0003613f) list_single_2graphic_pane_g3_ParamLimits

0xe812,	// (0x0003613f) list_single_2graphic_pane_g3

0x8a61,	// (0x0003038e) list_single_2graphic_pane_g4_ParamLimits

0x8a61,	// (0x0003038e) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00037035) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00037035) list_single_2graphic_pane_g

0x8a72,	// (0x0003039f) list_single_2graphic_pane_t1_ParamLimits

0x8a72,	// (0x0003039f) list_single_2graphic_pane_t1

0x8aa0,	// (0x000303cd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8aa0,	// (0x000303cd) list_double2_graphic_large_graphic_pane_g1

0x8656,	// (0x0002ff83) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8656,	// (0x0002ff83) list_double2_graphic_large_graphic_pane_g2

0xe8a4,	// (0x000361d1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe8a4,	// (0x000361d1) list_double2_graphic_large_graphic_pane_g3

0xe9e5,	// (0x00036312) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe9e5,	// (0x00036312) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x0003703e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x0003703e) list_double2_graphic_large_graphic_pane_g

0xe9f1,	// (0x0003631e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe9f1,	// (0x0003631e) list_double2_graphic_large_graphic_pane_t1

0xea07,	// (0x00036334) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xea07,	// (0x00036334) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00037047) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00037047) list_double2_graphic_large_graphic_pane_t

0x9971,	// (0x0003129e) popup_fast_swap_window_ParamLimits

0x9971,	// (0x0003129e) popup_fast_swap_window

0x998d,	// (0x000312ba) popup_side_volume_key_window

0xcd33,	// (0x00034660) stacon_top_pane

0xcd3d,	// (0x0003466a) status_pane_ParamLimits

0xcd3d,	// (0x0003466a) status_pane

0x99a7,	// (0x000312d4) status_small_pane

0xc285,	// (0x00033bb2) control_pane

0xc285,	// (0x00033bb2) stacon_bottom_pane

0xc67a,	// (0x00033fa7) scroll_pane_cp121

0xc671,	// (0x00033f9e) set_content_pane

0x98fe,	// (0x0003122b) bg_active_tab_pane_g1_cp1

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp1

0x9910,	// (0x0003123d) bg_active_tab_pane_g3_cp1

0x98fe,	// (0x0003122b) bg_passive_tab_pane_g1_cp1

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp1

0x9910,	// (0x0003123d) bg_passive_tab_pane_g3_cp1

0x9919,	// (0x00031246) bg_active_tab_pane_g1_cp2

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp2

0x9922,	// (0x0003124f) bg_active_tab_pane_g3_cp2

0x9919,	// (0x00031246) bg_passive_tab_pane_g1_cp2

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp2

0x9922,	// (0x0003124f) bg_passive_tab_pane_g3_cp2

0x992b,	// (0x00031258) bg_active_tab_pane_g1_cp3

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp3

0x9934,	// (0x00031261) bg_active_tab_pane_g3_cp3

0x992b,	// (0x00031258) bg_passive_tab_pane_g1_cp3

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp3

0x9934,	// (0x00031261) bg_passive_tab_pane_g3_cp3

0x993d,	// (0x0003126a) bg_active_tab_pane_g1_cp4

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp4

0x9948,	// (0x00031275) bg_active_tab_pane_g3_cp4

0x993d,	// (0x0003126a) bg_passive_tab_pane_g1_cp4

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp4

0x9948,	// (0x00031275) bg_passive_tab_pane_g3_cp4

0x9953,	// (0x00031280) bg_active_tab_pane_g1_cp5

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp5

0x995c,	// (0x00031289) bg_active_tab_pane_g3_cp5

0x9953,	// (0x00031280) bg_passive_tab_pane_g1_cp5

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp5

0x995c,	// (0x00031289) bg_passive_tab_pane_g3_cp5

0x3c47,	// (0x0002b574) list_set_graphic_pane_ParamLimits

0x3c47,	// (0x0002b574) list_set_graphic_pane

0xc285,	// (0x00033bb2) bg_set_opt_pane_cp4

0xccc4,	// (0x000345f1) list_set_graphic_pane_g1_ParamLimits

0xccc4,	// (0x000345f1) list_set_graphic_pane_g1

0xccd0,	// (0x000345fd) list_set_graphic_pane_g2_ParamLimits

0xccd0,	// (0x000345fd) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x0003704c) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x0003704c) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x000373dd) volume_small_pane_cp_g

0x9965,	// (0x00031292) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9965,	// (0x00031292) list_double2_large_graphic_pane_g1_cp2

0xccf2,	// (0x0003461f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xccf2,	// (0x0003461f) list_double2_large_graphic_pane_g2_cp2

0xcd03,	// (0x00034630) list_double2_large_graphic_pane_g3_cp2

0xcd0b,	// (0x00034638) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcd0b,	// (0x00034638) list_double2_large_graphic_pane_t1_cp2

0xcd21,	// (0x0003464e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcd21,	// (0x0003464e) list_double2_large_graphic_pane_t2_cp2

0xaeae,	// (0x000327db) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaeae,	// (0x000327db) list_double_large_graphic_pane_g1_cp2

0x320a,	// (0x0002ab37) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x320a,	// (0x0002ab37) list_double_large_graphic_pane_g2_cp2

0xce59,	// (0x00034786) list_double_large_graphic_pane_g3_cp2

0x321b,	// (0x0002ab48) list_double_large_graphic_pane_g4_cp

0x3223,	// (0x0002ab50) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3223,	// (0x0002ab50) list_double_large_graphic_pane_t1_cp2

0x323a,	// (0x0002ab67) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x323a,	// (0x0002ab67) list_double_large_graphic_pane_t2_cp2

0xcd4b,	// (0x00034678) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcd4b,	// (0x00034678) list_double2_graphic_pane_g1_cp2

0xcd59,	// (0x00034686) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcd59,	// (0x00034686) list_double2_graphic_pane_g2_cp2

0xcd6a,	// (0x00034697) list_double2_graphic_pane_g3_cp2

0xcd74,	// (0x000346a1) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcd74,	// (0x000346a1) list_double2_graphic_pane_t1_cp2

0xcd8a,	// (0x000346b7) list_double2_graphic_pane_t2_cp2_ParamLimits

0xcd8a,	// (0x000346b7) list_double2_graphic_pane_t2_cp2

0xcd9c,	// (0x000346c9) list_single_number_heading_pane_g1_cp2_ParamLimits

0xcd9c,	// (0x000346c9) list_single_number_heading_pane_g1_cp2

0xcda8,	// (0x000346d5) list_single_number_heading_pane_g2_cp2

0xcdb0,	// (0x000346dd) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcdb0,	// (0x000346dd) list_single_number_heading_pane_t1_cp2

0xcdc6,	// (0x000346f3) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcdc6,	// (0x000346f3) list_single_number_heading_pane_t2_cp2

0xcdd8,	// (0x00034705) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcdd8,	// (0x00034705) list_single_number_heading_pane_t3_cp2

0xcd9c,	// (0x000346c9) list_single_heading_pane_g1_cp2_ParamLimits

0xcd9c,	// (0x000346c9) list_single_heading_pane_g1_cp2

0xcda8,	// (0x000346d5) list_single_heading_pane_g2_cp2

0xcdb0,	// (0x000346dd) list_single_heading_pane_t1_cp2_ParamLimits

0xcdb0,	// (0x000346dd) list_single_heading_pane_t1_cp2

0x3003,	// (0x0002a930) list_single_heading_pane_t2_cp2_ParamLimits

0x3003,	// (0x0002a930) list_single_heading_pane_t2_cp2

0x2f4b,	// (0x0002a878) list_double_graphic_pane_g1_cp2_ParamLimits

0x2f4b,	// (0x0002a878) list_double_graphic_pane_g1_cp2

0x2f57,	// (0x0002a884) list_double_graphic_pane_g2_cp2_ParamLimits

0x2f57,	// (0x0002a884) list_double_graphic_pane_g2_cp2

0x2f66,	// (0x0002a893) list_double_graphic_pane_g3_cp2

0x2f6e,	// (0x0002a89b) list_double_graphic_pane_t1_cp2_ParamLimits

0x2f6e,	// (0x0002a89b) list_double_graphic_pane_t1_cp2

0x2f84,	// (0x0002a8b1) list_double_graphic_pane_t2_cp2_ParamLimits

0x2f84,	// (0x0002a8b1) list_double_graphic_pane_t2_cp2

0xce4d,	// (0x0003477a) list_double_number_pane_g1_cp2_ParamLimits

0xce4d,	// (0x0003477a) list_double_number_pane_g1_cp2

0xce59,	// (0x00034786) list_double_number_pane_g2_cp2

0x2f0f,	// (0x0002a83c) list_double_number_pane_t1_cp2_ParamLimits

0x2f0f,	// (0x0002a83c) list_double_number_pane_t1_cp2

0x2f23,	// (0x0002a850) list_double_number_pane_t2_cp2_ParamLimits

0x2f23,	// (0x0002a850) list_double_number_pane_t2_cp2

0x2f39,	// (0x0002a866) list_double_number_pane_t3_cp2_ParamLimits

0x2f39,	// (0x0002a866) list_double_number_pane_t3_cp2

0x2df8,	// (0x0002a725) list_single_graphic_pane_g1_cp2_ParamLimits

0x2df8,	// (0x0002a725) list_single_graphic_pane_g1_cp2

0xceb2,	// (0x000347df) list_single_graphic_pane_g2_cp2_ParamLimits

0xceb2,	// (0x000347df) list_single_graphic_pane_g2_cp2

0xcebe,	// (0x000347eb) list_single_graphic_pane_g3_cp2

0x2dce,	// (0x0002a6fb) list_single_graphic_pane_t1_cp2_ParamLimits

0x2dce,	// (0x0002a6fb) list_single_graphic_pane_t1_cp2

0xceb2,	// (0x000347df) list_single_number_pane_g1_cp2_ParamLimits

0xceb2,	// (0x000347df) list_single_number_pane_g1_cp2

0xcebe,	// (0x000347eb) list_single_number_pane_g2_cp2

0x2dce,	// (0x0002a6fb) list_single_number_pane_t1_cp2_ParamLimits

0x2dce,	// (0x0002a6fb) list_single_number_pane_t1_cp2

0x2de4,	// (0x0002a711) list_single_number_pane_t2_cp2_ParamLimits

0x2de4,	// (0x0002a711) list_single_number_pane_t2_cp2

0xccf2,	// (0x0003461f) list_double2_pane_g1_cp2_ParamLimits

0xccf2,	// (0x0003461f) list_double2_pane_g1_cp2

0xcd03,	// (0x00034630) list_double2_pane_g2_cp2

0xce25,	// (0x00034752) list_double2_pane_t1_cp2_ParamLimits

0xce25,	// (0x00034752) list_double2_pane_t1_cp2

0xce3b,	// (0x00034768) list_double2_pane_t2_cp2_ParamLimits

0xce3b,	// (0x00034768) list_double2_pane_t2_cp2

0xce4d,	// (0x0003477a) list_double_pane_g1_cp2_ParamLimits

0xce4d,	// (0x0003477a) list_double_pane_g1_cp2

0xce59,	// (0x00034786) list_double_pane_g2_cp2

0xce61,	// (0x0003478e) list_double_pane_t1_cp2_ParamLimits

0xce61,	// (0x0003478e) list_double_pane_t1_cp2

0xce77,	// (0x000347a4) list_double_pane_t2_cp2_ParamLimits

0xce77,	// (0x000347a4) list_double_pane_t2_cp2

0x99b2,	// (0x000312df) list_single_pane_cp2_g3

0xceb2,	// (0x000347df) list_single_pane_g1_cp2_ParamLimits

0xceb2,	// (0x000347df) list_single_pane_g1_cp2

0xcebe,	// (0x000347eb) list_single_pane_g2_cp2

0xcec6,	// (0x000347f3) list_single_pane_t1_cp2_ParamLimits

0xcec6,	// (0x000347f3) list_single_pane_t1_cp2

0x99ba,	// (0x000312e7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x99ba,	// (0x000312e7) list_single_large_graphic_pane_g1_cp2

0xcede,	// (0x0003480b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcede,	// (0x0003480b) list_single_large_graphic_pane_g2_cp2

0xceea,	// (0x00034817) list_single_large_graphic_pane_g3_cp2

0x99c6,	// (0x000312f3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x99c6,	// (0x000312f3) list_single_large_graphic_pane_g4_cp1

0xcef2,	// (0x0003481f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcef2,	// (0x0003481f) list_single_large_graphic_pane_t1_cp2

0x2d9a,	// (0x0002a6c7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2d9a,	// (0x0002a6c7) list_single_graphic_heading_pane_g1_cp2

0x2d67,	// (0x0002a694) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2d67,	// (0x0002a694) list_single_graphic_heading_pane_g4_cp2

0xcebe,	// (0x000347eb) list_single_graphic_heading_pane_g5_cp2

0x2da6,	// (0x0002a6d3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2da6,	// (0x0002a6d3) list_single_graphic_heading_pane_t1_cp2

0x2dbc,	// (0x0002a6e9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2dbc,	// (0x0002a6e9) list_single_graphic_heading_pane_t2_cp2

0x2d5b,	// (0x0002a688) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2d5b,	// (0x0002a688) list_single_2graphic_pane_g1_cp2

0x2d67,	// (0x0002a694) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2d67,	// (0x0002a694) list_single_2graphic_pane_g2_cp2

0xcebe,	// (0x000347eb) list_single_2graphic_pane_g3_cp2

0x2d78,	// (0x0002a6a5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2d78,	// (0x0002a6a5) list_single_2graphic_pane_g4_cp2

0x2d84,	// (0x0002a6b1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2d84,	// (0x0002a6b1) list_single_2graphic_pane_t1_cp2

0xc27b,	// (0x00033ba8) list_highlight_pane_g10_cp1

0x2943,	// (0x0002a270) list_highlight_pane_g1_cp1

0x294b,	// (0x0002a278) list_highlight_pane_g2_cp1

0x2953,	// (0x0002a280) list_highlight_pane_g3_cp1

0x295b,	// (0x0002a288) list_highlight_pane_g4_cp1

0x2963,	// (0x0002a290) list_highlight_pane_g5_cp1

0x296b,	// (0x0002a298) list_highlight_pane_g6_cp1

0x2973,	// (0x0002a2a0) list_highlight_pane_g7_cp1

0x297b,	// (0x0002a2a8) list_highlight_pane_g8_cp1

0x2983,	// (0x0002a2b0) list_highlight_pane_g9_cp1

0xac3b,	// (0x00032568) form_field_slider_pane_t3

0xac49,	// (0x00032576) form_field_slider_pane_t4

0x14e2,	// (0x00028e0f) slider_form_pane_ParamLimits

0x14e2,	// (0x00028e0f) slider_form_pane

0xc285,	// (0x00033bb2) control_abbreviations

0xc285,	// (0x00033bb2) control_conventions

0xc285,	// (0x00033bb2) control_definitions

0xc285,	// (0x00033bb2) format_table_attribute

0xae85,	// (0x000327b2) bg_popup_preview_window_pane_g9

0xc285,	// (0x00033bb2) format_table_data2

0xc285,	// (0x00033bb2) format_table_data3

0xc285,	// (0x00033bb2) format_table_data_example

0x0008,

0xc285,	// (0x00033bb2) intro_purpose

0xf8b6,	// (0x000371e3) bg_popup_preview_window_pane_g

0xc285,	// (0x00033bb2) texts_category

0xc285,	// (0x00033bb2) texts_graphics

0xcf08,	// (0x00034835) text_digital

0xcf17,	// (0x00034844) text_primary

0xcf26,	// (0x00034853) text_primary_small

0xcf35,	// (0x00034862) text_secondary

0xcf44,	// (0x00034871) text_title

0xb2a8,	// (0x00032bd5) bg_passive_tab_pane_g1_cp3_srt

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp3_srt

0xb2b1,	// (0x00032bde) bg_passive_tab_pane_g3_cp3_srt

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp3_srt_ParamLimits

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp3_srt

0xb2ba,	// (0x00032be7) tabs_4_active_pane_srt_g1

0xb2c2,	// (0x00032bef) tabs_4_active_pane_srt_t1_ParamLimits

0xb2c2,	// (0x00032bef) tabs_4_active_pane_srt_t1

0xb2a8,	// (0x00032bd5) bg_active_tab_pane_g1_cp3_copy1

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp3_copy1

0xb2b1,	// (0x00032bde) bg_active_tab_pane_g3_cp3_copy1

0xc2e1,	// (0x00033c0e) tabs_2_long_active_pane_srt_ParamLimits

0xc2e1,	// (0x00033c0e) tabs_2_long_active_pane_srt

0xc2e1,	// (0x00033c0e) tabs_2_long_passive_pane_srt_ParamLimits

0xc2e1,	// (0x00033c0e) tabs_2_long_passive_pane_srt

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp4_srt

0xafed,	// (0x0003291a) bg_passive_tab_pane_g1_cp4_srt

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp4_srt

0xaff6,	// (0x00032923) bg_passive_tab_pane_g3_cp4_srt

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp4_srt_ParamLimits

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp4_srt

0xafff,	// (0x0003292c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafff,	// (0x0003292c) tabs_2_long_active_pane_srt_t1

0xafed,	// (0x0003291a) bg_active_tab_pane_g1_cp4_srt

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp4_srt

0xaff6,	// (0x00032923) bg_active_tab_pane_g3_cp4_srt

0xc2d3,	// (0x00033c00) tabs_3_long_active_pane_srt_ParamLimits

0xc2d3,	// (0x00033c00) tabs_3_long_active_pane_srt

0xc2d3,	// (0x00033c00) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc2d3,	// (0x00033c00) tabs_3_long_passive_pane_cp_srt

0xc2d3,	// (0x00033c00) tabs_3_long_passive_pane_srt_ParamLimits

0xc2d3,	// (0x00033c00) tabs_3_long_passive_pane_srt

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp5_srt

0x9953,	// (0x00031280) bg_passive_tab_pane_g1_cp5_srt

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp5_srt

0x995c,	// (0x00031289) bg_passive_tab_pane_g3_cp5_srt

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp5_srt_ParamLimits

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp5_srt

0xafd7,	// (0x00032904) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafd7,	// (0x00032904) tabs_3_long_active_pane_srt_t1

0x9953,	// (0x00031280) bg_active_tab_pane_g1_cp5_srt

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp5_srt

0x995c,	// (0x00031289) bg_active_tab_pane_g3_cp5_srt

0x344e,	// (0x0002ad7b) navi_text_pane_srt_t1

0x3446,	// (0x0002ad73) navi_icon_pane_srt_g1

0xd02f,	// (0x0003495c) midp_editing_number_pane_srt

0xcf53,	// (0x00034880) midp_ticker_pane_srt

0xd037,	// (0x00034964) midp_ticker_pane_srt_g1

0xd03f,	// (0x0003496c) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x0003706b) midp_ticker_pane_srt_g

0xd047,	// (0x00034974) midp_ticker_pane_srt_t1

0x3437,	// (0x0002ad64) midp_editing_number_pane_t1_copy1

0x99e0,	// (0x0003130d) listscroll_midp_pane

0x99e0,	// (0x0003130d) midp_form_pane

0x9a4b,	// (0x00031378) midp_info_popup_window_ParamLimits

0x9a4b,	// (0x00031378) midp_info_popup_window

0xc774,	// (0x000340a1) bg_popup_sub_pane_cp50_ParamLimits

0xc774,	// (0x000340a1) bg_popup_sub_pane_cp50

0x11d2,	// (0x00028aff) listscroll_midp_info_pane_ParamLimits

0x11d2,	// (0x00028aff) listscroll_midp_info_pane

0x11b2,	// (0x00028adf) listscroll_form_midp_pane_ParamLimits

0x11b2,	// (0x00028adf) listscroll_form_midp_pane

0x11be,	// (0x00028aeb) scroll_bar_cp050

0x11b2,	// (0x00028adf) list_midp_pane

0xb4a8,	// (0x00032dd5) signal_pane_g2_cp

0x10cc,	// (0x000289f9) listscroll_midp_info_pane_t1_ParamLimits

0x10cc,	// (0x000289f9) listscroll_midp_info_pane_t1

0xaa75,	// (0x000323a2) listscroll_midp_info_pane_t2_ParamLimits

0xaa75,	// (0x000323a2) listscroll_midp_info_pane_t2

0xaab3,	// (0x000323e0) listscroll_midp_info_pane_t3_ParamLimits

0xaab3,	// (0x000323e0) listscroll_midp_info_pane_t3

0xaaed,	// (0x0003241a) listscroll_midp_info_pane_t4_ParamLimits

0xaaed,	// (0x0003241a) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x0003711e) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x0003711e) listscroll_midp_info_pane_t

0xc7c9,	// (0x000340f6) scroll_pane_cp21

0x106c,	// (0x00028999) form_midp_field_choice_group_pane

0xaa38,	// (0x00032365) form_midp_field_text_pane

0x10b2,	// (0x000289df) form_midp_field_time_pane

0x10ba,	// (0x000289e7) form_midp_gauge_slider_pane

0x10c3,	// (0x000289f0) form_midp_gauge_wait_pane

0xc285,	// (0x00033bb2) form_midp_image_pane

0x8ab2,	// (0x000303df) list_single_midp_pane_ParamLimits

0x8ab2,	// (0x000303df) list_single_midp_pane

0xaa16,	// (0x00032343) form_midp_field_text_pane_t1

0x0d63,	// (0x00028690) input_focus_pane_cp050

0x105b,	// (0x00028988) list_midp_form_text_pane

0x0ff0,	// (0x0002891d) form_midp_field_choice_group_pane_t1

0x0ffe,	// (0x0002892b) input_focus_pane_cp051

0x1012,	// (0x0002893f) list_midp_choice_pane

0xc285,	// (0x00033bb2) status_idle_pane

0x0fd4,	// (0x00028901) form_midp_field_time_pane_t1

0xc27b,	// (0x00033ba8) wait_anim_pane_g2_copy1

0x0fe2,	// (0x0002890f) form_midp_field_time_pane_t2

0x0001,

0xcfb3,	// (0x000348e0) aid_navinavi_width_2_pane

0xf7ec,	// (0x00037119) form_midp_field_time_pane_t

0xc285,	// (0x00033bb2) input_focus_pane_cp052

0xc285,	// (0x00033bb2) bg_input_focus_pane_cp040

0x0f94,	// (0x000288c1) form_midp_gauge_slider_pane_t1

0x0fa2,	// (0x000288cf) form_midp_gauge_slider_pane_t2

0xa9fa,	// (0x00032327) form_midp_gauge_slider_pane_t3

0xaa08,	// (0x00032335) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x00037110) form_midp_gauge_slider_pane_t

0x0fcc,	// (0x000288f9) form_midp_slider_pane

0xc2e1,	// (0x00033c0e) bg_input_focus_pane_cp041_ParamLimits

0xc2e1,	// (0x00033c0e) bg_input_focus_pane_cp041

0x0f61,	// (0x0002888e) form_midp_gauge_wait_pane_t1_ParamLimits

0x0f61,	// (0x0002888e) form_midp_gauge_wait_pane_t1

0x0f73,	// (0x000288a0) form_midp_gauge_wait_pane_t2_ParamLimits

0x0f73,	// (0x000288a0) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x0003710b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x0003710b) form_midp_gauge_wait_pane_t

0x0f85,	// (0x000288b2) form_midp_wait_pane_ParamLimits

0x0f85,	// (0x000288b2) form_midp_wait_pane

0xa9c4,	// (0x000322f1) form_midp_image_pane_g1

0xa9cd,	// (0x000322fa) form_midp_image_pane_t1

0xa9dc,	// (0x00032309) form_midp_image_pane_t2

0xa9eb,	// (0x00032318) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x00037104) form_midp_image_pane_t

0x0f22,	// (0x0002884f) list_single_midp_pane_g1

0xeb25,	// (0x00036452) list_single_midp_pane_t1

0xa9af,	// (0x000322dc) list_midp_form_item_pane_ParamLimits

0xa9af,	// (0x000322dc) list_midp_form_item_pane

0xcf5b,	// (0x00034888) list_midp_form_item_pane_t1

0xcf6a,	// (0x00034897) midp_ticker_pane_g1

0xcf76,	// (0x000348a3) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00037051) midp_ticker_pane_g

0xcf82,	// (0x000348af) midp_ticker_pane_t1

0x3684,	// (0x0002afb1) midp_editing_number_pane_t1

0x3662,	// (0x0002af8f) midp_editing_number_pane

0x3671,	// (0x0002af9e) midp_ticker_pane

0x3427,	// (0x0002ad54) ai_message_heading_pane

0xc285,	// (0x00033bb2) bg_popup_window_pane_cp14

0x342f,	// (0x0002ad5c) listscroll_ai_message_pane

0x33b1,	// (0x0002acde) ai_message_heading_pane_g1_ParamLimits

0x33b1,	// (0x0002acde) ai_message_heading_pane_g1

0xaf9f,	// (0x000328cc) ai_message_heading_pane_g2_ParamLimits

0xaf9f,	// (0x000328cc) ai_message_heading_pane_g2

0x33c9,	// (0x0002acf6) ai_message_heading_pane_g3_ParamLimits

0x33c9,	// (0x0002acf6) ai_message_heading_pane_g3

0x33d5,	// (0x0002ad02) ai_message_heading_pane_g4_ParamLimits

0x33d5,	// (0x0002ad02) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00037245) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00037245) ai_message_heading_pane_g

0xafab,	// (0x000328d8) ai_message_heading_pane_t1_ParamLimits

0xafab,	// (0x000328d8) ai_message_heading_pane_t1

0xafc5,	// (0x000328f2) ai_message_heading_pane_t2_ParamLimits

0xafc5,	// (0x000328f2) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x0003724e) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x0003724e) ai_message_heading_pane_t

0x340d,	// (0x0002ad3a) bg_popup_heading_pane_cp1_ParamLimits

0x340d,	// (0x0002ad3a) bg_popup_heading_pane_cp1

0x339f,	// (0x0002accc) list_ai_message_pane_ParamLimits

0x339f,	// (0x0002accc) list_ai_message_pane

0xc7c9,	// (0x000340f6) scroll_pane_cp10

0x333b,	// (0x0002ac68) list_ai_message_pane_g1

0x3343,	// (0x0002ac70) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x00037222) list_ai_message_pane_g

0x334b,	// (0x0002ac78) list_ai_message_pane_t1_ParamLimits

0x334b,	// (0x0002ac78) list_ai_message_pane_t1

0x3360,	// (0x0002ac8d) list_ai_message_pane_t2_ParamLimits

0x3360,	// (0x0002ac8d) list_ai_message_pane_t2

0x3375,	// (0x0002aca2) list_ai_message_pane_t3_ParamLimits

0x3375,	// (0x0002aca2) list_ai_message_pane_t3

0x338a,	// (0x0002acb7) list_ai_message_pane_t4_ParamLimits

0x338a,	// (0x0002acb7) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00037227) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00037227) list_ai_message_pane_t

0xaf2b,	// (0x00032858) cell_ai_soft_ind_pane_ParamLimits

0xaf2b,	// (0x00032858) cell_ai_soft_ind_pane

0xcf94,	// (0x000348c1) cell_ai_soft_ind_pane_g1_ParamLimits

0xcf94,	// (0x000348c1) cell_ai_soft_ind_pane_g1

0xc285,	// (0x00033bb2) grid_highlight_cp1

0xcfa1,	// (0x000348ce) text_secondary_cp56_ParamLimits

0xcfa1,	// (0x000348ce) text_secondary_cp56

0x32fb,	// (0x0002ac28) example_general_pane_ParamLimits

0x32fb,	// (0x0002ac28) example_general_pane

0x3307,	// (0x0002ac34) example_parent_pane_g1_ParamLimits

0x3307,	// (0x0002ac34) example_parent_pane_g1

0x3313,	// (0x0002ac40) example_parent_pane_t1_ParamLimits

0x3313,	// (0x0002ac40) example_parent_pane_t1

0xa133,	// (0x00031a60) popup_preview_text_window_ParamLimits

0xa133,	// (0x00031a60) popup_preview_text_window

0xceaa,	// (0x000347d7) list_single_pane_cp2_g4

0xc4b3,	// (0x00033de0) bg_popup_preview_window_pane_ParamLimits

0xc4b3,	// (0x00033de0) bg_popup_preview_window_pane

0xae8d,	// (0x000327ba) popup_preview_text_window_t1_ParamLimits

0xae8d,	// (0x000327ba) popup_preview_text_window_t1

0x3073,	// (0x0002a9a0) popup_preview_text_window_t2_ParamLimits

0x3073,	// (0x0002a9a0) popup_preview_text_window_t2

0x30bc,	// (0x0002a9e9) popup_preview_text_window_t3_ParamLimits

0x30bc,	// (0x0002a9e9) popup_preview_text_window_t3

0x3101,	// (0x0002aa2e) popup_preview_text_window_t4_ParamLimits

0x3101,	// (0x0002aa2e) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x000371f6) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x000371f6) popup_preview_text_window_t

0x317f,	// (0x0002aaac) scroll_pane_cp11

0x0c5f,	// (0x0002858c) bg_popup_preview_window_pane_g1

0xae4d,	// (0x0003277a) bg_popup_preview_window_pane_g2

0xae55,	// (0x00032782) bg_popup_preview_window_pane_g3

0xae5d,	// (0x0003278a) bg_popup_preview_window_pane_g4

0xae65,	// (0x00032792) bg_popup_preview_window_pane_g5

0xae6d,	// (0x0003279a) bg_popup_preview_window_pane_g6

0xae75,	// (0x000327a2) bg_popup_preview_window_pane_g7

0xae7d,	// (0x000327aa) bg_popup_preview_window_pane_g8

0xe65c,	// (0x00035f89) aid_popup_width_pane

0xa0af,	// (0x000319dc) popup_midp_note_alarm_window_ParamLimits

0xa0af,	// (0x000319dc) popup_midp_note_alarm_window

0xc68b,	// (0x00033fb8) data_form_pane_ParamLimits

0x88bb,	// (0x000301e8) form_field_data_pane_g1

0x88c5,	// (0x000301f2) form_field_data_pane_t1_ParamLimits

0xc697,	// (0x00033fc4) input_focus_pane_ParamLimits

0x88df,	// (0x0003020c) data_form_wide_pane_ParamLimits

0x88f0,	// (0x0003021d) form_field_data_wide_pane_g1

0x88fc,	// (0x00030229) form_field_data_wide_pane_t1_ParamLimits

0xc58b,	// (0x00033eb8) input_focus_pane_cp6_ParamLimits

0x95d5,	// (0x00030f02) input_popup_find_pane_g1_ParamLimits

0x95d5,	// (0x00030f02) input_popup_find_pane_g1

0xf200,	// (0x00036b2d) aid_navi_side_left_pane

0xf215,	// (0x00036b42) aid_navi_side_right_pane

0x2a3e,	// (0x0002a36b) bg_popup_window_pane_cp30_ParamLimits

0x2a3e,	// (0x0002a36b) bg_popup_window_pane_cp30

0x2ab8,	// (0x0002a3e5) popup_midp_note_alarm_window_g1_ParamLimits

0x2ab8,	// (0x0002a3e5) popup_midp_note_alarm_window_g1

0x2ae8,	// (0x0002a415) popup_midp_note_alarm_window_t1_ParamLimits

0x2ae8,	// (0x0002a415) popup_midp_note_alarm_window_t1

0xac8e,	// (0x000325bb) popup_midp_note_alarm_window_t2_ParamLimits

0xac8e,	// (0x000325bb) popup_midp_note_alarm_window_t2

0xad3c,	// (0x00032669) popup_midp_note_alarm_window_t3_ParamLimits

0xad3c,	// (0x00032669) popup_midp_note_alarm_window_t3

0xad64,	// (0x00032691) popup_midp_note_alarm_window_t4_ParamLimits

0xad64,	// (0x00032691) popup_midp_note_alarm_window_t4

0x2c7f,	// (0x0002a5ac) popup_midp_note_alarm_window_t5_ParamLimits

0x2c7f,	// (0x0002a5ac) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00037193) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00037193) popup_midp_note_alarm_window_t

0x2d2b,	// (0x0002a658) wait_bar_pane_cp1_ParamLimits

0x2d2b,	// (0x0002a658) wait_bar_pane_cp1

0xc285,	// (0x00033bb2) wait_anim_pane_copy1

0xc285,	// (0x00033bb2) wait_border_pane_copy1

0x138f,	// (0x00028cbc) wait_border_pane_g1_copy1

0x8916,	// (0x00030243) form_field_popup_pane_g1

0x891e,	// (0x0003024b) form_field_popup_pane_t1_ParamLimits

0xc697,	// (0x00033fc4) input_focus_pane_cp7_ParamLimits

0xc6c5,	// (0x00033ff2) list_form_pane_ParamLimits

0x8938,	// (0x00030265) form_field_popup_wide_pane_g1

0x8940,	// (0x0003026d) form_field_popup_wide_pane_t1_ParamLimits

0xc697,	// (0x00033fc4) input_focus_pane_cp8_ParamLimits

0xc6d1,	// (0x00033ffe) list_form_wide_pane_ParamLimits

0x381d,	// (0x0002b14a) aid_size_cell_graphic_pane

0x89cc,	// (0x000302f9) data_form_pane_t1_ParamLimits

0x8adc,	// (0x00030409) data_form_wide_pane_t1_ParamLimits

0xa576,	// (0x00031ea3) bg_status_flat_pane

0x8f84,	// (0x000308b1) title_pane_t1_ParamLimits

0xc29b,	// (0x00033bc8) title_pane_t2_ParamLimits

0xc2c1,	// (0x00033bee) title_pane_t3_ParamLimits

0xf532,	// (0x00036e5f) title_pane_t_ParamLimits

0xca7e,	// (0x000343ab) level_1_signal_ParamLimits

0xca8b,	// (0x000343b8) level_2_signal_ParamLimits

0xca98,	// (0x000343c5) level_3_signal_ParamLimits

0xcaa5,	// (0x000343d2) level_4_signal_ParamLimits

0xcab2,	// (0x000343df) level_5_signal_ParamLimits

0xcabf,	// (0x000343ec) level_6_signal_ParamLimits

0xcacc,	// (0x000343f9) level_7_signal_ParamLimits

0xca7e,	// (0x000343ab) level_1_battery_ParamLimits

0xca8b,	// (0x000343b8) level_2_battery_ParamLimits

0xca98,	// (0x000343c5) level_3_battery_ParamLimits

0xcaa5,	// (0x000343d2) level_4_battery_ParamLimits

0xcab2,	// (0x000343df) level_5_battery_ParamLimits

0xcabf,	// (0x000343ec) level_6_battery_ParamLimits

0xcacc,	// (0x000343f9) level_7_battery_ParamLimits

0x2943,	// (0x0002a270) bg_status_flat_pane_g1

0x294b,	// (0x0002a278) bg_status_flat_pane_g2

0x2953,	// (0x0002a280) bg_status_flat_pane_g3

0x295b,	// (0x0002a288) bg_status_flat_pane_g4

0x2963,	// (0x0002a290) bg_status_flat_pane_g5

0x296b,	// (0x0002a298) bg_status_flat_pane_g6

0x2973,	// (0x0002a2a0) bg_status_flat_pane_g7

0x9018,	// (0x00030945) tabs_3_active_pane_t1_ParamLimits

0x9018,	// (0x00030945) tabs_3_passive_pane_t1_ParamLimits

0x9032,	// (0x0003095f) tabs_4_active_pane_t1_ParamLimits

0x9032,	// (0x0003095f) tabs_4_1_passive_pane_t1_ParamLimits

0x9614,	// (0x00030f41) tabs_2_active_pane_t1_ParamLimits

0x9614,	// (0x00030f41) tabs_2_passive_pane_t1_ParamLimits

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp4_ParamLimits

0x9626,	// (0x00030f53) tabs_2_long_active_pane_t1_ParamLimits

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp4_ParamLimits

0x0cf4,	// (0x00028621) list_single_midp_graphic_pane_t1_ParamLimits

0xc2e1,	// (0x00033c0e) bg_active_tab_pane_cp5_ParamLimits

0x9639,	// (0x00030f66) tabs_3_long_active_pane_t1_ParamLimits

0xc7d9,	// (0x00034106) bg_passive_tab_pane_cp5_ParamLimits

0x0cf4,	// (0x00028621) list_single_midp_graphic_pane_t1

0xa576,	// (0x00031ea3) bg_status_flat_pane_ParamLimits

0x08c2,	// (0x000281ef) indicator_pane_cp2_ParamLimits

0x08c2,	// (0x000281ef) indicator_pane_cp2

0xa6f4,	// (0x00032021) navi_pane_srt_ParamLimits

0xa6f4,	// (0x00032021) navi_pane_srt

0x0a11,	// (0x0002833e) popup_clock_digital_analogue_window_cp1

0xc325,	// (0x00033c52) indicator_pane_t1

0xcf53,	// (0x00034880) copy_highlight_pane

0xcf53,	// (0x00034880) cursor_graphics_pane

0xcf53,	// (0x00034880) graphic_within_text_pane

0xcf53,	// (0x00034880) link_highlight_pane

0x3142,	// (0x0002aa6f) popup_preview_text_window_t5_ParamLimits

0x3142,	// (0x0002aa6f) popup_preview_text_window_t5

0xcfbb,	// (0x000348e8) cursor_digital_pane

0xcfbb,	// (0x000348e8) cursor_primary_pane

0xcfcc,	// (0x000348f9) cursor_primary_small_pane

0xcfd4,	// (0x00034901) cursor_secondary_pane

0xcfdc,	// (0x00034909) cursor_title_pane

0xcfbb,	// (0x000348e8) link_highlight_digital_pane

0xcfc3,	// (0x000348f0) link_highlight_primary_pane

0xcfcc,	// (0x000348f9) link_highlight_primary_small_pane

0xcfd4,	// (0x00034901) link_highlight_secondary_pane

0xcfdc,	// (0x00034909) link_highlight_title_pane

0xcfbb,	// (0x000348e8) copy_highlight_digital_pane

0xcfbb,	// (0x000348e8) copy_highlight_primary_pane

0xcfcc,	// (0x000348f9) copy_highlight_primary_small_pane

0xcfd4,	// (0x00034901) copy_highlight_secondary_pane

0xcfdc,	// (0x00034909) copy_highlight_title_pane

0xcfd4,	// (0x00034901) graphic_text_digital_pane

0x29e1,	// (0x0002a30e) graphic_text_primary_pane

0x29ea,	// (0x0002a317) graphic_text_primary_small_pane

0xcfcc,	// (0x000348f9) graphic_text_secondary_pane

0xcfbb,	// (0x000348e8) graphic_text_title_pane

0x9a9c,	// (0x000313c9) cursor_primary_pane_g1

0x29d3,	// (0x0002a300) cursor_text_primary_t1

0xac84,	// (0x000325b1) cursor_primary_small_pane_g1

0x29c5,	// (0x0002a2f2) cursor_text_primary_small_t1

0xac7a,	// (0x000325a7) cursor_primary_small_pane_g1_copy1

0x29ad,	// (0x0002a2da) cursor_text_primary_small_t1_copy1

0x298b,	// (0x0002a2b8) cursor_text_title_t1

0xac70,	// (0x0003259d) cursor_title_pane_g1

0x9a9c,	// (0x000313c9) cursor_digital_pane_g1

0xcfe4,	// (0x00034911) cursor_text_digital_t1

0xcff2,	// (0x0003491f) link_highlight_primary_pane_g1

0x2934,	// (0x0002a261) link_highlight_primary_pane_t1

0xcff2,	// (0x0003491f) link_highlight_primary_small_pane_g1

0xcffa,	// (0x00034927) link_highlight_primary_small_pane_t1

0xcff2,	// (0x0003491f) link_highlight_secondary_pane_g1

0xd009,	// (0x00034936) link_highlight_secondary_pane_t1

0x14f4,	// (0x00028e21) link_highlight_title_pane_g1

0x150b,	// (0x00028e38) link_highlight_title_pane_t1

0x14f4,	// (0x00028e21) link_highlight_digital_pane_g1

0x14fc,	// (0x00028e29) link_highlight_digital_pane_t1

0x13ae,	// (0x00028cdb) copy_highlight_primary_pane_g1

0x13d4,	// (0x00028d01) copy_highlight_primary_pane_t1

0x13ae,	// (0x00028cdb) copy_highlight_primary_small_pane_g1

0x13c5,	// (0x00028cf2) copy_highlight_primary_small_pane_t1

0xd018,	// (0x00034945) copy_highlight_secondary_pane_g1

0xd020,	// (0x0003494d) copy_highlight_secondary_pane_t1

0x13ae,	// (0x00028cdb) copy_highlight_title_pane_g1

0x13b6,	// (0x00028ce3) copy_highlight_title_pane_t1

0x13ae,	// (0x00028cdb) copy_highlight_digital_pane_g1

0x39eb,	// (0x0002b318) copy_highlight_digital_pane_t1

0x393f,	// (0x0002b26c) graphic_text_primary_pane_g1

0x39cf,	// (0x0002b2fc) graphic_text_primary_pane_t1

0x39dd,	// (0x0002b30a) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x000372c2) graphic_text_primary_pane_t

0x39ab,	// (0x0002b2d8) graphic_text_primary_small_pane_g1

0x39b3,	// (0x0002b2e0) graphic_text_primary_small_pane_t1

0x39c1,	// (0x0002b2ee) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x000372bd) graphic_text_primary_small_pane_t

0x3987,	// (0x0002b2b4) graphic_text_secondary_pane_g1

0x398f,	// (0x0002b2bc) graphic_text_secondary_pane_t1

0x399d,	// (0x0002b2ca) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x000372b8) graphic_text_secondary_pane_t

0x3963,	// (0x0002b290) graphic_text_title_pane_g1

0x396b,	// (0x0002b298) graphic_text_title_pane_t1

0x3979,	// (0x0002b2a6) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x000372b3) graphic_text_title_pane_t

0x393f,	// (0x0002b26c) graphic_text_digital_pane_g1

0x3947,	// (0x0002b274) graphic_text_digital_pane_t1

0x3955,	// (0x0002b282) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x000372ae) graphic_text_digital_pane_t

0xc2e1,	// (0x00033c0e) navi_icon_pane_srt_ParamLimits

0xc2e1,	// (0x00033c0e) navi_icon_pane_srt

0xc285,	// (0x00033bb2) navi_midp_pane_srt

0xc285,	// (0x00033bb2) navi_navi_pane_srt

0xc2e1,	// (0x00033c0e) navi_text_pane_srt_ParamLimits

0xc2e1,	// (0x00033c0e) navi_text_pane_srt

0x390a,	// (0x0002b237) navi_navi_icon_text_pane_srt

0x3912,	// (0x0002b23f) navi_navi_pane_srt_g1_ParamLimits

0x3912,	// (0x0002b23f) navi_navi_pane_srt_g1

0x3924,	// (0x0002b251) navi_navi_pane_srt_g2_ParamLimits

0x3924,	// (0x0002b251) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x000372a9) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x000372a9) navi_navi_pane_srt_g

0x3936,	// (0x0002b263) navi_navi_tabs_pane_srt

0x390a,	// (0x0002b237) navi_navi_text_pane_srt

0x390a,	// (0x0002b237) navi_navi_volume_pane_srt

0x38fb,	// (0x0002b228) navi_navi_text_pane_srt_t1

0x185c,	// (0x00029189) navi_navi_volume_pane_srt_g1

0x1864,	// (0x00029191) volume_small_pane_srt_ParamLimits

0x1864,	// (0x00029191) volume_small_pane_srt

0xf480,	// (0x00036dad) volume_small_pane_srt_g1_ParamLimits

0xf480,	// (0x00036dad) volume_small_pane_srt_g1

0xf490,	// (0x00036dbd) volume_small_pane_srt_g2_ParamLimits

0xf490,	// (0x00036dbd) volume_small_pane_srt_g2

0xf4a1,	// (0x00036dce) volume_small_pane_srt_g3_ParamLimits

0xf4a1,	// (0x00036dce) volume_small_pane_srt_g3

0xf4b2,	// (0x00036ddf) volume_small_pane_srt_g4_ParamLimits

0xf4b2,	// (0x00036ddf) volume_small_pane_srt_g4

0xf4c3,	// (0x00036df0) volume_small_pane_srt_g5_ParamLimits

0xf4c3,	// (0x00036df0) volume_small_pane_srt_g5

0xf4d4,	// (0x00036e01) volume_small_pane_srt_g6_ParamLimits

0xf4d4,	// (0x00036e01) volume_small_pane_srt_g6

0xf4e5,	// (0x00036e12) volume_small_pane_srt_g7_ParamLimits

0xf4e5,	// (0x00036e12) volume_small_pane_srt_g7

0xf4f6,	// (0x00036e23) volume_small_pane_srt_g8_ParamLimits

0xf4f6,	// (0x00036e23) volume_small_pane_srt_g8

0xf507,	// (0x00036e34) volume_small_pane_srt_g9_ParamLimits

0xf507,	// (0x00036e34) volume_small_pane_srt_g9

0xf518,	// (0x00036e45) volume_small_pane_srt_g10_ParamLimits

0xf518,	// (0x00036e45) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00037056) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00037056) volume_small_pane_srt_g

0x9319,	// (0x00030c46) query_popup_data_pane_cp2

0x38e1,	// (0x0002b20e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x38e1,	// (0x0002b20e) navi_navi_icon_text_pane_srt_t1

0x29e1,	// (0x0002a30e) navi_tabs_2_long_pane_srt

0x29e1,	// (0x0002a30e) navi_tabs_2_pane_srt

0x29e1,	// (0x0002a30e) navi_tabs_3_long_pane_srt

0x29e1,	// (0x0002a30e) navi_tabs_3_pane_srt

0x29e1,	// (0x0002a30e) navi_tabs_4_pane_srt

0xb3ae,	// (0x00032cdb) tabs_2_active_pane_srt_ParamLimits

0xb3ae,	// (0x00032cdb) tabs_2_active_pane_srt

0xb3be,	// (0x00032ceb) tabs_2_passive_pane_srt_ParamLimits

0xb3be,	// (0x00032ceb) tabs_2_passive_pane_srt

0x0d63,	// (0x00028690) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0d63,	// (0x00028690) bg_passive_tab_pane_cp1_srt

0xb37e,	// (0x00032cab) bg_passive_tab_pane_g1_cp1_srt

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp1_srt

0xb387,	// (0x00032cb4) bg_passive_tab_pane_g3_cp1_srt

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp1_srt_ParamLimits

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp1_srt

0xb390,	// (0x00032cbd) tabs_2_active_pane_srt_g1

0xb398,	// (0x00032cc5) tabs_2_active_pane_srt_t1_ParamLimits

0xb398,	// (0x00032cc5) tabs_2_active_pane_srt_t1

0xb37e,	// (0x00032cab) bg_active_tab_pane_g1_cp1_srt

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp1_srt

0xb387,	// (0x00032cb4) bg_active_tab_pane_g3_cp1_srt

0xb34b,	// (0x00032c78) tabs_3_active_pane_srt_ParamLimits

0xb34b,	// (0x00032c78) tabs_3_active_pane_srt

0xb35c,	// (0x00032c89) tabs_3_passive_pane_cp_srt_ParamLimits

0xb35c,	// (0x00032c89) tabs_3_passive_pane_cp_srt

0xb36d,	// (0x00032c9a) tabs_3_passive_pane_srt_ParamLimits

0xb36d,	// (0x00032c9a) tabs_3_passive_pane_srt

0x0d63,	// (0x00028690) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0d63,	// (0x00028690) bg_passive_tab_pane_cp2_srt

0x9aa6,	// (0x000313d3) bg_passive_tab_pane_g1_cp2_srt

0x9907,	// (0x00031234) bg_passive_tab_pane_g2_cp2_srt

0x9aaf,	// (0x000313dc) bg_passive_tab_pane_g3_cp2_srt

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp2_srt_ParamLimits

0xc2d3,	// (0x00033c00) bg_active_tab_pane_cp2_srt

0xb32d,	// (0x00032c5a) tabs_3_active_pane_srt_g1

0xb335,	// (0x00032c62) tabs_3_active_pane_srt_t1_ParamLimits

0xb335,	// (0x00032c62) tabs_3_active_pane_srt_t1

0x9aa6,	// (0x000313d3) bg_active_tab_pane_g1_cp2_srt

0x9907,	// (0x00031234) bg_active_tab_pane_g2_cp2_srt

0x9aaf,	// (0x000313dc) bg_active_tab_pane_g3_cp2_srt

0x17c1,	// (0x000290ee) tabs_4_active_pane_srt_ParamLimits

0x17c1,	// (0x000290ee) tabs_4_active_pane_srt

0x17d3,	// (0x00029100) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17d3,	// (0x00029100) tabs_4_passive_pane_cp2_srt

0x0189,	// (0x00027ab6) aid_size_cell_toolbar

0x34df,	// (0x0002ae0c) main_idle_act_pane_ParamLimits

0x0324,	// (0x00027c51) popup_large_graphic_colour_window_ParamLimits

0xa3e5,	// (0x00031d12) popup_toolbar_window_ParamLimits

0xa3e5,	// (0x00031d12) popup_toolbar_window

0x3693,	// (0x0002afc0) list_single_graphic_2heading_pane_ParamLimits

0x3693,	// (0x0002afc0) list_single_graphic_2heading_pane

0xc966,	// (0x00034293) aid_size_cell_apps_grid_lsc_pane

0xc978,	// (0x000342a5) aid_size_cell_apps_grid_prt_pane

0xc7d9,	// (0x00034106) bg_wml_button_pane_cp1_ParamLimits

0xc7d9,	// (0x00034106) bg_wml_button_pane_cp1

0xaa16,	// (0x00032343) form_midp_field_text_pane_t1_ParamLimits

0x0d63,	// (0x00028690) input_focus_pane_cp050_ParamLimits

0x105b,	// (0x00028988) list_midp_form_text_pane_ParamLimits

0x0ffe,	// (0x0002892b) input_focus_pane_cp051_ParamLimits

0x1012,	// (0x0002893f) list_midp_choice_pane_ParamLimits

0xa97b,	// (0x000322a8) list_single_2graphic_pane_cp3_ParamLimits

0xa97b,	// (0x000322a8) list_single_2graphic_pane_cp3

0xa98f,	// (0x000322bc) list_single_midp_graphic_pane_ParamLimits

0xa98f,	// (0x000322bc) list_single_midp_graphic_pane

0xea29,	// (0x00036356) list_single_graphic_2heading_pane_g1_ParamLimits

0xea29,	// (0x00036356) list_single_graphic_2heading_pane_g1

0xe806,	// (0x00036133) list_single_graphic_2heading_pane_g4_ParamLimits

0xe806,	// (0x00036133) list_single_graphic_2heading_pane_g4

0xe812,	// (0x0003613f) list_single_graphic_2heading_pane_g5_ParamLimits

0xe812,	// (0x0003613f) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x000370a9) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x000370a9) list_single_graphic_2heading_pane_g

0xea35,	// (0x00036362) list_single_graphic_2heading_pane_t1_ParamLimits

0xea35,	// (0x00036362) list_single_graphic_2heading_pane_t1

0xea49,	// (0x00036376) list_single_graphic_2heading_pane_t2_ParamLimits

0xea49,	// (0x00036376) list_single_graphic_2heading_pane_t2

0xea63,	// (0x00036390) list_single_graphic_2heading_pane_t3_ParamLimits

0xea63,	// (0x00036390) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x000370b0) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x000370b0) list_single_graphic_2heading_pane_t

0x0b6d,	// (0x0002849a) bg_popup_sub_pane_cp2

0x0b97,	// (0x000284c4) grid_toobar_pane

0x0bd3,	// (0x00028500) cell_toolbar_pane_ParamLimits

0x0bd3,	// (0x00028500) cell_toolbar_pane

0x0c03,	// (0x00028530) cell_toolbar_pane_g1_ParamLimits

0x0c03,	// (0x00028530) cell_toolbar_pane_g1

0xa893,	// (0x000321c0) cell_toolbar_pane_g2_ParamLimits

0xa893,	// (0x000321c0) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x000370be) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x000370be) cell_toolbar_pane_g

0x0c39,	// (0x00028566) grid_highlight_pane_cp2_ParamLimits

0x0c39,	// (0x00028566) grid_highlight_pane_cp2

0x0c53,	// (0x00028580) toolbar_button_pane

0x0c5f,	// (0x0002858c) toolbar_button_pane_g1

0x0c67,	// (0x00028594) toolbar_button_pane_g2

0x0c6f,	// (0x0002859c) toolbar_button_pane_g3

0x0c77,	// (0x000285a4) toolbar_button_pane_g4

0x0c7f,	// (0x000285ac) toolbar_button_pane_g5

0x0c87,	// (0x000285b4) toolbar_button_pane_g6

0x0c8f,	// (0x000285bc) toolbar_button_pane_g7

0x0c97,	// (0x000285c4) toolbar_button_pane_g8

0x0c9f,	// (0x000285cc) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x000370c3) toolbar_button_pane_g

0x0caf,	// (0x000285dc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0caf,	// (0x000285dc) list_single_2graphic_pane_g1_cp3

0xa8a7,	// (0x000321d4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa8a7,	// (0x000321d4) list_single_2graphic_pane_g2_cp3

0xcda8,	// (0x000346d5) list_single_2graphic_pane_g3_cp3

0x0ccc,	// (0x000285f9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0ccc,	// (0x000285f9) list_single_2graphic_pane_g4_cp3

0xa8b8,	// (0x000321e5) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa8b8,	// (0x000321e5) list_single_2graphic_pane_t1_cp3

0xcd9c,	// (0x000346c9) list_single_midp_graphic_pane_g2_ParamLimits

0xcd9c,	// (0x000346c9) list_single_midp_graphic_pane_g2

0x0191,	// (0x00027abe) aid_zoom_text_primary

0xea19,	// (0x00036346) aid_zoom_text_secondary

0x9b06,	// (0x00031433) status_small_pane_g7_ParamLimits

0x9b06,	// (0x00031433) status_small_pane_g7

0x9b29,	// (0x00031456) status_small_pane_t1_ParamLimits

0x8f60,	// (0x0003088d) title_pane_g2

0x0003,

0xf529,	// (0x00036e56) title_pane_g

0x9373,	// (0x00030ca0) aid_size_cell_colour_1_pane_ParamLimits

0x9373,	// (0x00030ca0) aid_size_cell_colour_1_pane

0x9387,	// (0x00030cb4) aid_size_cell_colour_2_pane_ParamLimits

0x9387,	// (0x00030cb4) aid_size_cell_colour_2_pane

0x939b,	// (0x00030cc8) aid_size_cell_colour_3_pane_ParamLimits

0x939b,	// (0x00030cc8) aid_size_cell_colour_3_pane

0x93af,	// (0x00030cdc) aid_size_cell_colour_4_pane_ParamLimits

0x93af,	// (0x00030cdc) aid_size_cell_colour_4_pane

0xf13d,	// (0x00036a6a) title_pane_stacon_g1_ParamLimits

0xf13d,	// (0x00036a6a) title_pane_stacon_g1

0x142b,	// (0x00028d58) popup_note_wait_window_g3_ParamLimits

0x142b,	// (0x00028d58) popup_note_wait_window_g3

0x14a1,	// (0x00028dce) popup_note_wait_window_t5_ParamLimits

0x14a1,	// (0x00028dce) popup_note_wait_window_t5

0xc285,	// (0x00033bb2) main_feb_china_hwr_fs_writing_pane

0x9d99,	// (0x000316c6) popup_feb_china_hwr_fs_window_ParamLimits

0x9d99,	// (0x000316c6) popup_feb_china_hwr_fs_window

0xa8d4,	// (0x00032201) aid_size_cell_hwr_fs_ParamLimits

0xa8d4,	// (0x00032201) aid_size_cell_hwr_fs

0x0d63,	// (0x00028690) bg_popup_sub_pane_cp3_ParamLimits

0x0d63,	// (0x00028690) bg_popup_sub_pane_cp3

0xa8e9,	// (0x00032216) grid_hwr_fs_pane_ParamLimits

0xa8e9,	// (0x00032216) grid_hwr_fs_pane

0x0d87,	// (0x000286b4) linegrid_hwr_fs_pane_ParamLimits

0x0d87,	// (0x000286b4) linegrid_hwr_fs_pane

0xa901,	// (0x0003222e) cell_hwr_fs_pane_ParamLimits

0xa901,	// (0x0003222e) cell_hwr_fs_pane

0x0db9,	// (0x000286e6) linegrid_hwr_fs_pane_g1_ParamLimits

0x0db9,	// (0x000286e6) linegrid_hwr_fs_pane_g1

0xa927,	// (0x00032254) linegrid_hwr_fs_pane_g2_ParamLimits

0xa927,	// (0x00032254) linegrid_hwr_fs_pane_g2

0x0dd7,	// (0x00028704) linegrid_hwr_fs_pane_g3_ParamLimits

0x0dd7,	// (0x00028704) linegrid_hwr_fs_pane_g3

0xa939,	// (0x00032266) linegrid_hwr_fs_pane_g4_ParamLimits

0xa939,	// (0x00032266) linegrid_hwr_fs_pane_g4

0x0dfd,	// (0x0002872a) linegrid_hwr_fs_pane_g5_ParamLimits

0x0dfd,	// (0x0002872a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x000370e9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x000370e9) linegrid_hwr_fs_pane_g

0x0e13,	// (0x00028740) cell_hwr_fs_pane_g1_ParamLimits

0x0e13,	// (0x00028740) cell_hwr_fs_pane_g1

0x0aa7,	// (0x000283d4) cell_hwr_fs_pane_g2_ParamLimits

0x0aa7,	// (0x000283d4) cell_hwr_fs_pane_g2

0xa953,	// (0x00032280) cell_hwr_fs_pane_g3_ParamLimits

0xa953,	// (0x00032280) cell_hwr_fs_pane_g3

0xa960,	// (0x0003228d) cell_hwr_fs_pane_g4_ParamLimits

0xa960,	// (0x0003228d) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x000370f4) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x000370f4) cell_hwr_fs_pane_g

0xa96d,	// (0x0003229a) cell_hwr_fs_pane_t1

0xc285,	// (0x00033bb2) grid_highlight_pane_cp6

0xc285,	// (0x00033bb2) main_idle_act2_pane

0xc7b0,	// (0x000340dd) aid_inside_area_popup_secondary

0xada3,	// (0x000326d0) aid_inside_area_window_primary_ParamLimits

0xada3,	// (0x000326d0) aid_inside_area_window_primary

0xb3d6,	// (0x00032d03) ai2_news_ticker_pane

0x3a02,	// (0x0002b32f) aid_size_cell_ai1_link_ParamLimits

0x3a02,	// (0x0002b32f) aid_size_cell_ai1_link

0xb3de,	// (0x00032d0b) popup_ai2_data_window_ParamLimits

0xb3de,	// (0x00032d0b) popup_ai2_data_window

0x3a32,	// (0x0002b35f) popup_ai2_link_window_ParamLimits

0x3a32,	// (0x0002b35f) popup_ai2_link_window

0x0d63,	// (0x00028690) bg_popup_sub_pane_cp4_ParamLimits

0x0d63,	// (0x00028690) bg_popup_sub_pane_cp4

0x3a46,	// (0x0002b373) grid_ai2_link_pane_ParamLimits

0x3a46,	// (0x0002b373) grid_ai2_link_pane

0x3a5d,	// (0x0002b38a) popup_ai2_link_window_g1_ParamLimits

0x3a5d,	// (0x0002b38a) popup_ai2_link_window_g1

0x3a69,	// (0x0002b396) popup_ai2_link_window_g2_ParamLimits

0x3a69,	// (0x0002b396) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x000372c7) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x000372c7) popup_ai2_link_window_g

0x3a78,	// (0x0002b3a5) ai2_mp_button_pane

0x3a80,	// (0x0002b3ad) ai2_mp_volume_pane

0x0ffe,	// (0x0002892b) bg_popup_sub_pane_cp5_ParamLimits

0x0ffe,	// (0x0002892b) bg_popup_sub_pane_cp5

0x3a88,	// (0x0002b3b5) heading_ai2_gene_pane_ParamLimits

0x3a88,	// (0x0002b3b5) heading_ai2_gene_pane

0x3a94,	// (0x0002b3c1) list_ai2_gene_pane_ParamLimits

0x3a94,	// (0x0002b3c1) list_ai2_gene_pane

0x3adc,	// (0x0002b409) cell_ai2_link_pane_ParamLimits

0x3adc,	// (0x0002b409) cell_ai2_link_pane

0x3af2,	// (0x0002b41f) cell_ai2_link_pane_g1

0xc285,	// (0x00033bb2) grid_highlight_pane_cp7

0x1879,	// (0x000291a6) ai2_mp_volume_pane_g1

0x3bc2,	// (0x0002b4ef) ai2_mp_volume_pane_g2

0x3b37,	// (0x0002b464) list_ai2_gene_pane_t1

0x3bca,	// (0x0002b4f7) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x000372e0) ai2_mp_volume_pane_g

0xb3f4,	// (0x00032d21) volume_small_pane_cp3

0x3bd2,	// (0x0002b4ff) aid_size_cell_ai2_button

0x3bda,	// (0x0002b507) grid_ai2_button_pane

0x3be3,	// (0x0002b510) cell_ai2_button_pane_ParamLimits

0x3be3,	// (0x0002b510) cell_ai2_button_pane

0xc27b,	// (0x00033ba8) cell_ai2_button_pane_g1

0xc285,	// (0x00033bb2) grid_highlight_pane_cp8

0x3b82,	// (0x0002b4af) ai2_gene_pane_t1_ParamLimits

0x3b82,	// (0x0002b4af) ai2_gene_pane_t1

0x9cfb,	// (0x00031628) aid_height_parent_landscape

0xb0b5,	// (0x000329e2) aid_height_set_list

0x34df,	// (0x0002ae0c) aid_size_parent

0x381d,	// (0x0002b14a) aid_size_cell_graphic_pane_ParamLimits

0x3aa4,	// (0x0002b3d1) popup_ai2_data_window_g1_ParamLimits

0x3aa4,	// (0x0002b3d1) popup_ai2_data_window_g1

0x3ab0,	// (0x0002b3dd) ai2_news_ticker_pane_g1

0x3ab8,	// (0x0002b3e5) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x000372cc) ai2_news_ticker_pane_g

0x3ac0,	// (0x0002b3ed) ai2_news_ticker_pane_t1

0x3ace,	// (0x0002b3fb) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x000372d1) ai2_news_ticker_pane_t

0x3afb,	// (0x0002b428) heading_ai2_gene_pane_g1

0x3b03,	// (0x0002b430) heading_ai2_gene_pane_t1_ParamLimits

0x3b03,	// (0x0002b430) heading_ai2_gene_pane_t1

0x3b18,	// (0x0002b445) list_highlight_pane_cp6

0x3b20,	// (0x0002b44d) ai2_gene_pane_ParamLimits

0x3b20,	// (0x0002b44d) ai2_gene_pane

0x3b45,	// (0x0002b472) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x000372d6) list_ai2_gene_pane_t

0x3b53,	// (0x0002b480) list_highlight_pane_cp8_ParamLimits

0x3b53,	// (0x0002b480) list_highlight_pane_cp8

0x3b64,	// (0x0002b491) ai2_gene_pane_g1_ParamLimits

0x3b64,	// (0x0002b491) ai2_gene_pane_g1

0x3b76,	// (0x0002b4a3) ai2_gene_pane_g2_ParamLimits

0x3b76,	// (0x0002b4a3) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x000372db) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x000372db) ai2_gene_pane_g

0xc636,	// (0x00033f63) scroll_pane_cp12

0x9cb8,	// (0x000315e5) control_pane_t3_ParamLimits

0x9cb8,	// (0x000315e5) control_pane_t3

0x9b1a,	// (0x00031447) status_small_pane_g8_ParamLimits

0x9b1a,	// (0x00031447) status_small_pane_g8

0x9e5c,	// (0x00031789) popup_find_window_ParamLimits

0xa0e9,	// (0x00031a16) popup_note_image_window_ParamLimits

0xe7fa,	// (0x00036127) list_double2_graphic_pane_vc_g1_ParamLimits

0xe7fa,	// (0x00036127) list_double2_graphic_pane_vc_g1

0xea7b,	// (0x000363a8) list_double2_graphic_pane_vc_g2_ParamLimits

0xea7b,	// (0x000363a8) list_double2_graphic_pane_vc_g2

0xea87,	// (0x000363b4) list_double2_graphic_pane_vc_g3_ParamLimits

0xea87,	// (0x000363b4) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x000370b7) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x000370b7) list_double2_graphic_pane_vc_g

0xe81e,	// (0x0003614b) list_double2_graphic_pane_vc_t1_ParamLimits

0xe81e,	// (0x0003614b) list_double2_graphic_pane_vc_t1

0xe806,	// (0x00036133) list_single_heading_pane_vc_g1_ParamLimits

0xe806,	// (0x00036133) list_single_heading_pane_vc_g1

0xe812,	// (0x0003613f) list_single_heading_pane_vc_g2_ParamLimits

0xe812,	// (0x0003613f) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_single_heading_pane_vc_g

0xea93,	// (0x000363c0) list_single_heading_pane_vc_t1_ParamLimits

0xea93,	// (0x000363c0) list_single_heading_pane_vc_t1

0xeaa9,	// (0x000363d6) list_single_heading_pane_vc_t2_ParamLimits

0xeaa9,	// (0x000363d6) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x000370d8) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x000370d8) list_single_heading_pane_vc_t

0x0d0a,	// (0x00028637) list_setting_number_pane_vc_g1_ParamLimits

0x0d0a,	// (0x00028637) list_setting_number_pane_vc_g1

0x0d16,	// (0x00028643) list_setting_number_pane_vc_g2_ParamLimits

0x0d16,	// (0x00028643) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x000370dd) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x000370dd) list_setting_number_pane_vc_g

0xeabb,	// (0x000363e8) list_setting_number_pane_vc_t1_ParamLimits

0xeabb,	// (0x000363e8) list_setting_number_pane_vc_t1

0xeacf,	// (0x000363fc) list_setting_number_pane_vc_t2_ParamLimits

0xeacf,	// (0x000363fc) list_setting_number_pane_vc_t2

0xeaeb,	// (0x00036418) list_setting_number_pane_vc_t3_ParamLimits

0xeaeb,	// (0x00036418) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x000370e2) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x000370e2) list_setting_number_pane_vc_t

0xeb15,	// (0x00036442) set_value_pane_vc_ParamLimits

0xeb15,	// (0x00036442) set_value_pane_vc

0x3693,	// (0x0002afc0) list_double2_graphic_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double2_graphic_pane_vc

0x3693,	// (0x0002afc0) list_double2_large_graphic_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double2_large_graphic_pane_vc

0x3693,	// (0x0002afc0) list_double2_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double2_pane_vc

0x3693,	// (0x0002afc0) list_double_graphic_heading_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double_graphic_heading_pane_vc

0x3693,	// (0x0002afc0) list_double_graphic_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double_graphic_pane_vc

0x3693,	// (0x0002afc0) list_double_heading_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double_heading_pane_vc

0xeb34,	// (0x00036461) list_double_large_graphic_pane_vc_ParamLimits

0xeb34,	// (0x00036461) list_double_large_graphic_pane_vc

0x3693,	// (0x0002afc0) list_double_number_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double_number_pane_vc

0x3693,	// (0x0002afc0) list_double_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double_pane_vc

0x3693,	// (0x0002afc0) list_double_time_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_double_time_pane_vc

0x3693,	// (0x0002afc0) list_setting_number_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_setting_number_pane_vc

0x3693,	// (0x0002afc0) list_setting_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_setting_pane_vc

0x3693,	// (0x0002afc0) list_single_graphic_heading_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_single_graphic_heading_pane_vc

0x3693,	// (0x0002afc0) list_single_heading_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_single_heading_pane_vc

0x3693,	// (0x0002afc0) list_single_number_heading_pane_vc_ParamLimits

0x3693,	// (0x0002afc0) list_single_number_heading_pane_vc

0xe880,	// (0x000361ad) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe880,	// (0x000361ad) list_double_graphic_heading_pane_vc_g1

0xea7b,	// (0x000363a8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea7b,	// (0x000363a8) list_double_graphic_heading_pane_vc_g2

0xea87,	// (0x000363b4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea87,	// (0x000363b4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x000372e7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x000372e7) list_double_graphic_heading_pane_vc_g

0xeb53,	// (0x00036480) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb53,	// (0x00036480) list_double_graphic_heading_pane_vc_t1

0xeb67,	// (0x00036494) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb67,	// (0x00036494) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x000372ee) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x000372ee) list_double_graphic_heading_pane_vc_t

0x0d0a,	// (0x00028637) list_setting_pane_vc_g1_ParamLimits

0x0d0a,	// (0x00028637) list_setting_pane_vc_g1

0x0d16,	// (0x00028643) list_setting_pane_vc_g2_ParamLimits

0x0d16,	// (0x00028643) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x000370dd) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x000370dd) list_setting_pane_vc_g

0xeb7f,	// (0x000364ac) list_setting_pane_vc_t1_ParamLimits

0xeb7f,	// (0x000364ac) list_setting_pane_vc_t1

0xeb9b,	// (0x000364c8) list_setting_pane_vc_t2_ParamLimits

0xeb9b,	// (0x000364c8) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x00037331) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x00037331) list_setting_pane_vc_t

0xeb15,	// (0x00036442) set_value_pane_cp_vc_ParamLimits

0xeb15,	// (0x00036442) set_value_pane_cp_vc

0xe806,	// (0x00036133) list_single_number_heading_pane_vc_g1_ParamLimits

0xe806,	// (0x00036133) list_single_number_heading_pane_vc_g1

0xe812,	// (0x0003613f) list_single_number_heading_pane_vc_g2_ParamLimits

0xe812,	// (0x0003613f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_single_number_heading_pane_vc_g

0xebb5,	// (0x000364e2) list_single_number_heading_pane_vc_t1_ParamLimits

0xebb5,	// (0x000364e2) list_single_number_heading_pane_vc_t1

0xebcb,	// (0x000364f8) list_single_number_heading_pane_vc_t2_ParamLimits

0xebcb,	// (0x000364f8) list_single_number_heading_pane_vc_t2

0xebdd,	// (0x0003650a) list_single_number_heading_pane_vc_t3_ParamLimits

0xebdd,	// (0x0003650a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x00037336) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00037336) list_single_number_heading_pane_vc_t

0xebef,	// (0x0003651c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xebef,	// (0x0003651c) list_single_graphic_heading_pane_vc_g1

0xe806,	// (0x00036133) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe806,	// (0x00036133) list_single_graphic_heading_pane_vc_g4

0xe812,	// (0x0003613f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe812,	// (0x0003613f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x0003733d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x0003733d) list_single_graphic_heading_pane_vc_g

0xebfb,	// (0x00036528) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xebfb,	// (0x00036528) list_single_graphic_heading_pane_vc_t1

0xec11,	// (0x0003653e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xec11,	// (0x0003653e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x00037344) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x00037344) list_single_graphic_heading_pane_vc_t

0xe806,	// (0x00036133) list_double2_pane_vc_g1_ParamLimits

0xe806,	// (0x00036133) list_double2_pane_vc_g1

0xe812,	// (0x0003613f) list_double2_pane_vc_g2_ParamLimits

0xe812,	// (0x0003613f) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_double2_pane_vc_g

0xec23,	// (0x00036550) list_double2_pane_vc_t1_ParamLimits

0xec23,	// (0x00036550) list_double2_pane_vc_t1

0xe88c,	// (0x000361b9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe88c,	// (0x000361b9) list_double2_large_graphic_pane_vc_g1

0xe806,	// (0x00036133) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe806,	// (0x00036133) list_double2_large_graphic_pane_vc_g2

0xe812,	// (0x0003613f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe812,	// (0x0003613f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00036eed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00036eed) list_double2_large_graphic_pane_vc_g

0xe81e,	// (0x0003614b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe81e,	// (0x0003614b) list_double2_large_graphic_pane_vc_t1

0xec3b,	// (0x00036568) list_double_time_pane_vc_g1_ParamLimits

0xec3b,	// (0x00036568) list_double_time_pane_vc_g1

0xec47,	// (0x00036574) list_double_time_pane_vc_g2_ParamLimits

0xec47,	// (0x00036574) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00037349) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00037349) list_double_time_pane_vc_g

0xec53,	// (0x00036580) list_double_time_pane_vc_t1_ParamLimits

0xec53,	// (0x00036580) list_double_time_pane_vc_t1

0xec77,	// (0x000365a4) list_double_time_pane_vc_t2_ParamLimits

0xec77,	// (0x000365a4) list_double_time_pane_vc_t2

0xecc6,	// (0x000365f3) list_double_time_pane_vc_t3_ParamLimits

0xecc6,	// (0x000365f3) list_double_time_pane_vc_t3

0xecd8,	// (0x00036605) list_double_time_pane_vc_t4_ParamLimits

0xecd8,	// (0x00036605) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x0003734e) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x0003734e) list_double_time_pane_vc_t

0xe806,	// (0x00036133) list_double_pane_vc_g1_ParamLimits

0xe806,	// (0x00036133) list_double_pane_vc_g1

0xe812,	// (0x0003613f) list_double_pane_vc_g2_ParamLimits

0xe812,	// (0x0003613f) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_double_pane_vc_g

0xecec,	// (0x00036619) list_double_pane_vc_t1_ParamLimits

0xecec,	// (0x00036619) list_double_pane_vc_t1

0xed00,	// (0x0003662d) list_double_pane_vc_t2_ParamLimits

0xed00,	// (0x0003662d) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00037357) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00037357) list_double_pane_vc_t

0xe806,	// (0x00036133) list_double_number_pane_vc_g1_ParamLimits

0xe806,	// (0x00036133) list_double_number_pane_vc_g1

0xe812,	// (0x0003613f) list_double_number_pane_vc_g2_ParamLimits

0xe812,	// (0x0003613f) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036ed0) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036ed0) list_double_number_pane_vc_g

0xed18,	// (0x00036645) list_double_number_pane_vc_t1_ParamLimits

0xed18,	// (0x00036645) list_double_number_pane_vc_t1

0xecec,	// (0x00036619) list_double_number_pane_vc_t2_ParamLimits

0xecec,	// (0x00036619) list_double_number_pane_vc_t2

0xed2a,	// (0x00036657) list_double_number_pane_vc_t3_ParamLimits

0xed2a,	// (0x00036657) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x0003735c) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x0003735c) list_double_number_pane_vc_t

0xed42,	// (0x0003666f) list_double_large_graphic_pane_vc_g1_ParamLimits

0xed42,	// (0x0003666f) list_double_large_graphic_pane_vc_g1

0xed5e,	// (0x0003668b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xed5e,	// (0x0003668b) list_double_large_graphic_pane_vc_g2

0xed72,	// (0x0003669f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xed72,	// (0x0003669f) list_double_large_graphic_pane_vc_g3

0xed81,	// (0x000366ae) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed81,	// (0x000366ae) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x00037363) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00037363) list_double_large_graphic_pane_vc_g

0xed8d,	// (0x000366ba) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed8d,	// (0x000366ba) list_double_large_graphic_pane_vc_t1

0xeda9,	// (0x000366d6) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeda9,	// (0x000366d6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x0003736c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x0003736c) list_double_large_graphic_pane_vc_t

0xea7b,	// (0x000363a8) list_double_heading_pane_vc_g1_ParamLimits

0xea7b,	// (0x000363a8) list_double_heading_pane_vc_g1

0xea87,	// (0x000363b4) list_double_heading_pane_vc_g2_ParamLimits

0xea87,	// (0x000363b4) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x00037371) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00037371) list_double_heading_pane_vc_g

0xedcb,	// (0x000366f8) list_double_heading_pane_vc_t1_ParamLimits

0xedcb,	// (0x000366f8) list_double_heading_pane_vc_t1

0xeddf,	// (0x0003670c) list_double_heading_pane_vc_t2_ParamLimits

0xeddf,	// (0x0003670c) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00037376) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00037376) list_double_heading_pane_vc_t

0xedf7,	// (0x00036724) list_double_graphic_pane_vc_g1_ParamLimits

0xedf7,	// (0x00036724) list_double_graphic_pane_vc_g1

0xee0a,	// (0x00036737) list_double_graphic_pane_vc_g2_ParamLimits

0xee0a,	// (0x00036737) list_double_graphic_pane_vc_g2

0xe806,	// (0x00036133) list_double_graphic_pane_vc_g3_ParamLimits

0xe806,	// (0x00036133) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x0003737b) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0003737b) list_double_graphic_pane_vc_g

0xee27,	// (0x00036754) list_double_graphic_pane_vc_t1_ParamLimits

0xee27,	// (0x00036754) list_double_graphic_pane_vc_t1

0xee46,	// (0x00036773) list_double_graphic_pane_vc_t2_ParamLimits

0xee46,	// (0x00036773) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x00037384) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x00037384) list_double_graphic_pane_vc_t

0xe668,	// (0x00035f95) aid_size_cell_fastswap

0x8d27,	// (0x00030654) aid_size_cell_touch_ParamLimits

0x8d27,	// (0x00030654) aid_size_cell_touch

0xe7bf,	// (0x000360ec) popup_fast_swap_wide_window_ParamLimits

0xe7bf,	// (0x000360ec) popup_fast_swap_wide_window

0x8ef7,	// (0x00030824) touch_pane_ParamLimits

0x8ef7,	// (0x00030824) touch_pane

0xc683,	// (0x00033fb0) button_value_adjust_pane_cp2

0xe9c2,	// (0x000362ef) button_value_adjust_pane_cp4

0xe9ca,	// (0x000362f7) form_field_data_pane_cp2

0x8869,	// (0x00030196) form_field_data_wide_pane_cp2

0xc99d,	// (0x000342ca) bg_scroll_pane_ParamLimits

0x973b,	// (0x00031068) scroll_handle_pane_ParamLimits

0xf296,	// (0x00036bc3) scroll_sc2_down_pane_ParamLimits

0xf296,	// (0x00036bc3) scroll_sc2_down_pane

0xc9ce,	// (0x000342fb) scroll_sc2_up_pane_ParamLimits

0xc9ce,	// (0x000342fb) scroll_sc2_up_pane

0xb530,	// (0x00032e5d) grid_wheel_folder_pane_g1_ParamLimits

0xb530,	// (0x00032e5d) grid_wheel_folder_pane_g1

0xf418,	// (0x00036d45) clock_nsta_pane_cp2_ParamLimits

0xf418,	// (0x00036d45) clock_nsta_pane_cp2

0x99e0,	// (0x0003130d) listscroll_midp_pane_ParamLimits

0x99ec,	// (0x00031319) midp_canvas_pane

0xd097,	// (0x000349c4) nsta_clock_indic_pane

0xd0bf,	// (0x000349ec) listscroll_form_pane_vc

0xd0c7,	// (0x000349f4) listscroll_set_pane_vc_ParamLimits

0xd0c7,	// (0x000349f4) listscroll_set_pane_vc

0xa59e,	// (0x00031ecb) clock_nsta_pane

0xa5c8,	// (0x00031ef5) indicator_nsta_pane

0x0b6d,	// (0x0002849a) bg_popup_sub_pane_cp2_ParamLimits

0x0b81,	// (0x000284ae) find_pane_cp2_ParamLimits

0x0b81,	// (0x000284ae) find_pane_cp2

0x0b97,	// (0x000284c4) grid_toobar_pane_ParamLimits

0x0d22,	// (0x0002864f) list_form_gen_pane_vc_ParamLimits

0x0d22,	// (0x0002864f) list_form_gen_pane_vc

0x0d38,	// (0x00028665) scroll_pane_cp8_vc_ParamLimits

0x0d38,	// (0x00028665) scroll_pane_cp8_vc

0x0e51,	// (0x0002877e) data_form_wide_pane_vc_ParamLimits

0x0e51,	// (0x0002877e) data_form_wide_pane_vc

0x0e5d,	// (0x0002878a) form_field_data_wide_pane_vc_g1

0x0e65,	// (0x00028792) form_field_data_wide_pane_vc_t1_ParamLimits

0x0e65,	// (0x00028792) form_field_data_wide_pane_vc_t1

0xc697,	// (0x00033fc4) input_focus_pane_cp6_vc_ParamLimits

0xc697,	// (0x00033fc4) input_focus_pane_cp6_vc

0x11b2,	// (0x00028adf) list_midp_pane_ParamLimits

0x3887,	// (0x0002b1b4) scroll_pane_cp16_ParamLimits

0x3887,	// (0x0002b1b4) scroll_pane_cp16

0x1208,	// (0x00028b35) button_value_adjust_pane_ParamLimits

0x1208,	// (0x00028b35) button_value_adjust_pane

0xb0c6,	// (0x000329f3) button_value_adjust_pane_cp6_ParamLimits

0xb0c6,	// (0x000329f3) button_value_adjust_pane_cp6

0xb1e0,	// (0x00032b0d) settings_code_pane_cp_ParamLimits

0xb1e0,	// (0x00032b0d) settings_code_pane_cp

0xc27b,	// (0x00033ba8) cell_touch_pane_g1

0xc27b,	// (0x00033ba8) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00036ffc) cell_touch_pane_g

0xb3fd,	// (0x00032d2a) cell_touch_pane_cp_ParamLimits

0xb3fd,	// (0x00032d2a) cell_touch_pane_cp

0xb419,	// (0x00032d46) cell_touch_pane_ParamLimits

0xb419,	// (0x00032d46) cell_touch_pane

0xc27b,	// (0x00033ba8) scroll_sc2_down_pane_g1

0xc27b,	// (0x00033ba8) scroll_sc2_up_pane_g1

0xc285,	// (0x00033bb2) bg_set_opt_pane_cp4_vc

0x3c17,	// (0x0002b544) list_set_graphic_pane_vc_g1_ParamLimits

0x3c17,	// (0x0002b544) list_set_graphic_pane_vc_g1

0x3c23,	// (0x0002b550) list_set_graphic_pane_vc_g2_ParamLimits

0x3c23,	// (0x0002b550) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x000372f3) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x000372f3) list_set_graphic_pane_vc_g

0x3c2f,	// (0x0002b55c) text_primary_small_cp13_vc_ParamLimits

0x3c2f,	// (0x0002b55c) text_primary_small_cp13_vc

0x3c47,	// (0x0002b574) list_set_graphic_pane_vc_ParamLimits

0x3c47,	// (0x0002b574) list_set_graphic_pane_vc

0xc285,	// (0x00033bb2) input_focus_pane_cp2_vc

0xc27b,	// (0x00033ba8) setting_code_pane_vc_g1

0xc2f8,	// (0x00033c25) setting_code_pane_vc_t1

0x3c5a,	// (0x0002b587) set_text_pane_vc_t1_ParamLimits

0x3c5a,	// (0x0002b587) set_text_pane_vc_t1

0xc285,	// (0x00033bb2) input_focus_pane_cp1_vc

0x3c77,	// (0x0002b5a4) list_set_text_pane_vc

0xc27b,	// (0x00033ba8) setting_text_pane_vc_g1

0xc285,	// (0x00033bb2) bg_set_opt_pane_cp2_vc

0xc2ef,	// (0x00033c1c) setting_slider_graphic_pane_vc_g1

0x3c81,	// (0x0002b5ae) setting_slider_graphic_pane_vc_t1

0x3c91,	// (0x0002b5be) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x000372f8) setting_slider_graphic_pane_vc_t

0x3ca1,	// (0x0002b5ce) slider_set_pane_cp_vc

0x3ca9,	// (0x0002b5d6) slider_set_pane_vc_g1

0x3cb2,	// (0x0002b5df) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x000372fd) slider_set_pane_vc_g

0xc6ef,	// (0x0003401c) set_opt_bg_pane_g1_copy1

0xc6f7,	// (0x00034024) set_opt_bg_pane_g2_copy1

0x3cde,	// (0x0002b60b) set_opt_bg_pane_g3_copy1

0xc707,	// (0x00034034) set_opt_bg_pane_g4_copy1

0xc70f,	// (0x0003403c) set_opt_bg_pane_g5_copy1

0xc717,	// (0x00034044) set_opt_bg_pane_g6_copy1

0x3ce6,	// (0x0002b613) set_opt_bg_pane_g7_copy1

0x3cf0,	// (0x0002b61d) set_opt_bg_pane_g8_copy1

0x3cf8,	// (0x0002b625) set_opt_bg_pane_g9_copy1

0xc285,	// (0x00033bb2) bg_set_opt_pane_cp_vc

0x3d00,	// (0x0002b62d) setting_slider_pane_vc_t1

0x3d0f,	// (0x0002b63c) setting_slider_pane_vc_t2

0x3d1f,	// (0x0002b64c) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x0003730c) setting_slider_pane_vc_t

0x3d2f,	// (0x0002b65c) slider_set_pane_vc

0x158f,	// (0x00028ebc) volume_set_pane_vc_g1

0x188a,	// (0x000291b7) volume_set_pane_vc_g2

0x1893,	// (0x000291c0) volume_set_pane_vc_g3

0x189c,	// (0x000291c9) volume_set_pane_vc_g4

0x18a5,	// (0x000291d2) volume_set_pane_vc_g5

0x18ae,	// (0x000291db) volume_set_pane_vc_g6

0x18b7,	// (0x000291e4) volume_set_pane_vc_g7

0x18c0,	// (0x000291ed) volume_set_pane_vc_g8

0x18c9,	// (0x000291f6) volume_set_pane_vc_g9

0x18d2,	// (0x000291ff) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x00037313) volume_set_pane_vc_g

0x3d37,	// (0x0002b664) volume_set_pane_vc

0x3d41,	// (0x0002b66e) button_value_adjust_pane_cp1_vc

0x3d4b,	// (0x0002b678) list_highlight_pane_cp2_vc

0x3d54,	// (0x0002b681) list_set_pane_vc_ParamLimits

0x3d54,	// (0x0002b681) list_set_pane_vc

0x3db2,	// (0x0002b6df) main_pane_set_vc_t1_ParamLimits

0x3db2,	// (0x0002b6df) main_pane_set_vc_t1

0x3dc7,	// (0x0002b6f4) main_pane_set_vc_t2_ParamLimits

0x3dc7,	// (0x0002b6f4) main_pane_set_vc_t2

0x3dd9,	// (0x0002b706) main_pane_set_vc_t3_ParamLimits

0x3dd9,	// (0x0002b706) main_pane_set_vc_t3

0x3deb,	// (0x0002b718) main_pane_set_vc_t4_ParamLimits

0x3deb,	// (0x0002b718) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x00037328) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x00037328) main_pane_set_vc_t

0x3dfd,	// (0x0002b72a) setting_code_pane_vc_ParamLimits

0x3dfd,	// (0x0002b72a) setting_code_pane_vc

0x3e0c,	// (0x0002b739) setting_slider_graphic_pane_vc

0x3e0c,	// (0x0002b739) setting_slider_pane_vc

0x3e0c,	// (0x0002b739) setting_text_pane_vc

0x3e0c,	// (0x0002b739) setting_volume_pane_vc

0x3e14,	// (0x0002b741) scroll_pane_cp121_vc

0xc671,	// (0x00033f9e) set_content_pane_vc

0x3e1c,	// (0x0002b749) button_value_adjust_pane_g1

0x3e25,	// (0x0002b752) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x00037389) button_value_adjust_pane_g

0x3e2e,	// (0x0002b75b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e2e,	// (0x0002b75b) form_field_slider_wide_pane_vc_t1

0x3e42,	// (0x0002b76f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3e42,	// (0x0002b76f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x0003738e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x0003738e) form_field_slider_wide_pane_vc_t

0xc2d3,	// (0x00033c00) input_focus_pane_cp10_vc_ParamLimits

0xc2d3,	// (0x00033c00) input_focus_pane_cp10_vc

0x3e70,	// (0x0002b79d) slider_cont_pane_cp1_vc_ParamLimits

0x3e70,	// (0x0002b79d) slider_cont_pane_cp1_vc

0x3e82,	// (0x0002b7af) slider_form_pane_g1_cp2

0x3cb2,	// (0x0002b5df) slider_form_pane_g2_cp2

0x3eaf,	// (0x0002b7dc) form_field_slider_pane_vc_t3

0x3ebd,	// (0x0002b7ea) form_field_slider_pane_vc_t4

0x3ecb,	// (0x0002b7f8) slider_form_pane_vc_ParamLimits

0x3ecb,	// (0x0002b7f8) slider_form_pane_vc

0x3ed8,	// (0x0002b805) form_field_slider_pane_vc_t1_ParamLimits

0x3ed8,	// (0x0002b805) form_field_slider_pane_vc_t1

0x3e42,	// (0x0002b76f) form_field_slider_pane_vc_t2_ParamLimits

0x3e42,	// (0x0002b76f) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x000373a0) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x000373a0) form_field_slider_pane_vc_t

0xc2d3,	// (0x00033c00) input_focus_pane_cp9_vc_ParamLimits

0xc2d3,	// (0x00033c00) input_focus_pane_cp9_vc

0x3ef4,	// (0x0002b821) slider_cont_pane_vc_ParamLimits

0x3ef4,	// (0x0002b821) slider_cont_pane_vc

0x3f08,	// (0x0002b835) list_form_graphic_pane_cp_vc_ParamLimits

0x3f08,	// (0x0002b835) list_form_graphic_pane_cp_vc

0x0e5d,	// (0x0002878a) form_field_popup_wide_pane_vc_g1

0x3f1d,	// (0x0002b84a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f1d,	// (0x0002b84a) form_field_popup_wide_pane_vc_t1

0xc697,	// (0x00033fc4) input_focus_pane_cp8_vc_ParamLimits

0xc697,	// (0x00033fc4) input_focus_pane_cp8_vc

0x3f62,	// (0x0002b88f) list_form_wide_pane_vc_ParamLimits

0x3f62,	// (0x0002b88f) list_form_wide_pane_vc

0x3f6e,	// (0x0002b89b) list_form_graphic_pane_vc_g1

0x3f76,	// (0x0002b8a3) list_form_graphic_pane_vc_t1_ParamLimits

0x3f76,	// (0x0002b8a3) list_form_graphic_pane_vc_t1

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp5_vc_ParamLimits

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp5_vc

0x3f92,	// (0x0002b8bf) list_form_graphic_pane_vc_ParamLimits

0x3f92,	// (0x0002b8bf) list_form_graphic_pane_vc

0x0e5d,	// (0x0002878a) form_field_popup_pane_vc_g1

0x3fa8,	// (0x0002b8d5) form_field_popup_pane_vc_t1_ParamLimits

0x3fa8,	// (0x0002b8d5) form_field_popup_pane_vc_t1

0xc697,	// (0x00033fc4) input_focus_pane_cp7_vc_ParamLimits

0xc697,	// (0x00033fc4) input_focus_pane_cp7_vc

0x3fbf,	// (0x0002b8ec) list_form_pane_vc_ParamLimits

0x3fbf,	// (0x0002b8ec) list_form_pane_vc

0x3fcb,	// (0x0002b8f8) data_form_pane_vc_t1_ParamLimits

0x3fcb,	// (0x0002b8f8) data_form_pane_vc_t1

0xc6ef,	// (0x0003401c) input_focus_pane_vc_g1

0xc6f7,	// (0x00034024) input_focus_pane_vc_g2

0xc6ff,	// (0x0003402c) input_focus_pane_vc_g3

0xc707,	// (0x00034034) input_focus_pane_vc_g4

0xc70f,	// (0x0003403c) input_focus_pane_vc_g5

0xc717,	// (0x00034044) input_focus_pane_vc_g6

0xc71f,	// (0x0003404c) input_focus_pane_vc_g7

0xc727,	// (0x00034054) input_focus_pane_vc_g8

0xc72f,	// (0x0003405c) input_focus_pane_vc_g9

0xc27b,	// (0x00033ba8) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00036f85) input_focus_pane_vc_g

0x0e51,	// (0x0002877e) data_form_pane_vc_ParamLimits

0x0e51,	// (0x0002877e) data_form_pane_vc

0x0e5d,	// (0x0002878a) form_field_data_pane_vc_g1

0x3fe6,	// (0x0002b913) form_field_data_pane_vc_t1_ParamLimits

0x3fe6,	// (0x0002b913) form_field_data_pane_vc_t1

0xc697,	// (0x00033fc4) input_focus_pane_vc_ParamLimits

0xc697,	// (0x00033fc4) input_focus_pane_vc

0x4000,	// (0x0002b92d) button_value_adjust_pane_cp3_vc

0x4008,	// (0x0002b935) button_value_adjust_pane_cp5_vc

0x4010,	// (0x0002b93d) form_field_data_pane_vc_ParamLimits

0x4010,	// (0x0002b93d) form_field_data_pane_vc

0x4027,	// (0x0002b954) form_field_data_pane_vc_cp2

0x402f,	// (0x0002b95c) form_field_data_wide_pane_vc_ParamLimits

0x402f,	// (0x0002b95c) form_field_data_wide_pane_vc

0x4045,	// (0x0002b972) form_field_data_wide_pane_vc_cp2

0x404d,	// (0x0002b97a) form_field_popup_pane_vc_ParamLimits

0x404d,	// (0x0002b97a) form_field_popup_pane_vc

0x4064,	// (0x0002b991) form_field_popup_wide_pane_vc_ParamLimits

0x4064,	// (0x0002b991) form_field_popup_wide_pane_vc

0x407a,	// (0x0002b9a7) form_field_slider_pane_vc_ParamLimits

0x407a,	// (0x0002b9a7) form_field_slider_pane_vc

0x408d,	// (0x0002b9ba) form_field_slider_wide_pane_vc_ParamLimits

0x408d,	// (0x0002b9ba) form_field_slider_wide_pane_vc

0xb436,	// (0x00032d63) grid_touch_1_pane_ParamLimits

0xb436,	// (0x00032d63) grid_touch_1_pane

0xb44a,	// (0x00032d77) grid_touch_2_pane_ParamLimits

0xb44a,	// (0x00032d77) grid_touch_2_pane

0x4171,	// (0x0002ba9e) touch_pane_g1_ParamLimits

0x4171,	// (0x0002ba9e) touch_pane_g1

0x40c4,	// (0x0002b9f1) cell_app_pane_cp_wide_ParamLimits

0x40c4,	// (0x0002b9f1) cell_app_pane_cp_wide

0x40d5,	// (0x0002ba02) grid_popup_fast_wide_pane_ParamLimits

0x40d5,	// (0x0002ba02) grid_popup_fast_wide_pane

0x40e9,	// (0x0002ba16) scroll_pane_cp19_ParamLimits

0x40e9,	// (0x0002ba16) scroll_pane_cp19

0xc285,	// (0x00033bb2) bg_popup_window_pane_cp20

0x40fd,	// (0x0002ba2a) listscroll_popup_fast_wide_pane

0xb474,	// (0x00032da1) grid_indicator_nsta_pane

0x4117,	// (0x0002ba44) clock_nsta_pane_g1

0x4120,	// (0x0002ba4d) clock_nsta_pane_t1

0xb480,	// (0x00032dad) cell_indicator_nsta_pane_ParamLimits

0xb480,	// (0x00032dad) cell_indicator_nsta_pane

0x4171,	// (0x0002ba9e) cell_indicator_nsta_pane_g1

0xb49b,	// (0x00032dc8) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x000373b1) cell_indicator_nsta_pane_g

0x4191,	// (0x0002babe) clock_nsta_pane_cp

0x419a,	// (0x0002bac7) indicator_nsta_pane_cp

0x41a4,	// (0x0002bad1) nsta_clock_indic_pane_g1

0xc31d,	// (0x00033c4a) grid_indicator_pane

0x97d5,	// (0x00031102) scroll_pane_cp29

0xf367,	// (0x00036c94) indicator_nsta_pane_cp2_ParamLimits

0xf367,	// (0x00036c94) indicator_nsta_pane_cp2

0xc2e1,	// (0x00033c0e) main_apps_wheel_pane

0xaa38,	// (0x00032365) form_midp_field_text_pane_ParamLimits

0x11be,	// (0x00028aeb) scroll_bar_cp050_ParamLimits

0x41fd,	// (0x0002bb2a) cell_indicator_pane_ParamLimits

0x41fd,	// (0x0002bb2a) cell_indicator_pane

0x4216,	// (0x0002bb43) cell_indicator_pane_g1

0xb4ba,	// (0x00032de7) grid_wheel_folder_pane_ParamLimits

0xb4ba,	// (0x00032de7) grid_wheel_folder_pane

0xb4c8,	// (0x00032df5) list_wheel_apps_pane_ParamLimits

0xb4c8,	// (0x00032df5) list_wheel_apps_pane

0xb4d6,	// (0x00032e03) main_apps_wheel_pane_g1_ParamLimits

0xb4d6,	// (0x00032e03) main_apps_wheel_pane_g1

0xb4e2,	// (0x00032e0f) main_apps_wheel_pane_g2_ParamLimits

0xb4e2,	// (0x00032e0f) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x000373cd) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x000373cd) main_apps_wheel_pane_g

0xb4f0,	// (0x00032e1d) main_apps_wheel_pane_t1_ParamLimits

0xb4f0,	// (0x00032e1d) main_apps_wheel_pane_t1

0xb504,	// (0x00032e31) list_wheel_apps_pane_g1

0xb50c,	// (0x00032e39) list_wheel_apps_pane_g2

0xb514,	// (0x00032e41) list_wheel_apps_pane_g3

0xb51c,	// (0x00032e49) list_wheel_apps_pane_g4

0xb526,	// (0x00032e53) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x000373d2) list_wheel_apps_pane_g

0xcdf8,	// (0x00034725) navi_icon_text_pane

0xa492,	// (0x00031dbf) aid_fill_nsta

0x42dd,	// (0x0002bc0a) navi_icon_text_pane_g1

0x42e9,	// (0x0002bc16) navi_icon_text_pane_t1

0xccdc,	// (0x00034609) list_set_graphic_pane_t1_ParamLimits

0xccdc,	// (0x00034609) list_set_graphic_pane_t1

0x2cae,	// (0x0002a5db) popup_midp_note_alarm_window_t6_ParamLimits

0x2cae,	// (0x0002a5db) popup_midp_note_alarm_window_t6

0x2cc0,	// (0x0002a5ed) popup_midp_note_alarm_window_t7_ParamLimits

0x2cc0,	// (0x0002a5ed) popup_midp_note_alarm_window_t7

0x2cd2,	// (0x0002a5ff) popup_midp_note_alarm_window_t8_ParamLimits

0x2cd2,	// (0x0002a5ff) popup_midp_note_alarm_window_t8

0x2ce4,	// (0x0002a611) popup_midp_note_alarm_window_t9_ParamLimits

0x2ce4,	// (0x0002a611) popup_midp_note_alarm_window_t9

0x2cf6,	// (0x0002a623) popup_midp_note_alarm_window_t10_ParamLimits

0x2cf6,	// (0x0002a623) popup_midp_note_alarm_window_t10

0x2d08,	// (0x0002a635) popup_midp_note_alarm_window_t11_ParamLimits

0x2d08,	// (0x0002a635) popup_midp_note_alarm_window_t11

0xad84,	// (0x000326b1) scroll_pane_cp17_ParamLimits

0xad84,	// (0x000326b1) scroll_pane_cp17

0x158f,	// (0x00028ebc) volume_small_pane_cp_g1

0x18db,	// (0x00029208) volume_small_pane_cp_g2

0x18e4,	// (0x00029211) volume_small_pane_cp_g3

0x18ed,	// (0x0002921a) volume_small_pane_cp_g4

0x18f6,	// (0x00029223) volume_small_pane_cp_g5

0x18a5,	// (0x000291d2) volume_small_pane_cp_g6

0x18ff,	// (0x0002922c) volume_small_pane_cp_g7

0x1908,	// (0x00029235) volume_small_pane_cp_g8

0x1911,	// (0x0002923e) volume_small_pane_cp_g9

0x191a,	// (0x00029247) volume_small_pane_cp_g10

0xcf6a,	// (0x00034897) midp_ticker_pane_g1_ParamLimits

0xcf76,	// (0x000348a3) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00037051) midp_ticker_pane_g_ParamLimits

0xcf82,	// (0x000348af) midp_ticker_pane_t1_ParamLimits

0xa4b6,	// (0x00031de3) aid_fill_nsta_2

0x11aa,	// (0x00028ad7) list_form2_midp_pane

0x3662,	// (0x0002af8f) midp_editing_number_pane_ParamLimits

0x3671,	// (0x0002af9e) midp_ticker_pane_ParamLimits

0x42fb,	// (0x0002bc28) form2_midp_field_pane

0x431f,	// (0x0002bc4c) scroll_pane_cp51

0x433f,	// (0x0002bc6c) form2_midp_button_pane_ParamLimits

0x433f,	// (0x0002bc6c) form2_midp_button_pane

0x4351,	// (0x0002bc7e) form2_midp_content_pane_ParamLimits

0x4351,	// (0x0002bc7e) form2_midp_content_pane

0x436b,	// (0x0002bc98) form2_midp_field_choice_group_pane

0x4373,	// (0x0002bca0) form2_midp_field_pane_g1

0x437b,	// (0x0002bca8) form2_midp_field_pane_g2

0x4383,	// (0x0002bcb0) form2_midp_field_pane_g3

0x438b,	// (0x0002bcb8) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x000373f7) form2_midp_field_pane_g

0x4393,	// (0x0002bcc0) form2_midp_gauge_slider_pane

0x439b,	// (0x0002bcc8) form2_midp_gauge_wait_pane

0x43a3,	// (0x0002bcd0) form2_midp_image_pane_ParamLimits

0x43a3,	// (0x0002bcd0) form2_midp_image_pane

0xb559,	// (0x00032e86) form2_midp_label_pane_ParamLimits

0xb559,	// (0x00032e86) form2_midp_label_pane

0xb572,	// (0x00032e9f) form2_midp_label_pane_cp_ParamLimits

0xb572,	// (0x00032e9f) form2_midp_label_pane_cp

0x43f8,	// (0x0002bd25) form2_midp_string_pane_ParamLimits

0x43f8,	// (0x0002bd25) form2_midp_string_pane

0xee70,	// (0x0003679d) form2_midp_text_pane_ParamLimits

0xee70,	// (0x0003679d) form2_midp_text_pane

0x440a,	// (0x0002bd37) form2_midp_time_pane

0x441a,	// (0x0002bd47) input_focus_pane_cp51_ParamLimits

0x441a,	// (0x0002bd47) input_focus_pane_cp51

0xb591,	// (0x00032ebe) form2_midp_label_pane_t1_ParamLimits

0xb591,	// (0x00032ebe) form2_midp_label_pane_t1

0xee89,	// (0x000367b6) form2_mdip_text_pane_t1_ParamLimits

0xee89,	// (0x000367b6) form2_mdip_text_pane_t1

0xeea7,	// (0x000367d4) form2_midp_time_pane_t1

0x447b,	// (0x0002bda8) form2_midp_gauge_slider_pane_t1

0xb5d1,	// (0x00032efe) form2_midp_gauge_slider_pane_t2

0xb5e3,	// (0x00032f10) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x00037400) form2_midp_gauge_slider_pane_t

0x44b1,	// (0x0002bdde) form2_midp_slider_pane

0x44bd,	// (0x0002bdea) form2_midp_gauge_wait_pane_t1

0x44cb,	// (0x0002bdf8) form2_midp_wait_pane_ParamLimits

0x44cb,	// (0x0002bdf8) form2_midp_wait_pane

0xb5f5,	// (0x00032f22) list_single_2graphic_pane_cp4_ParamLimits

0xb5f5,	// (0x00032f22) list_single_2graphic_pane_cp4

0xa98f,	// (0x000322bc) list_single_midp_graphic_pane_cp_ParamLimits

0xa98f,	// (0x000322bc) list_single_midp_graphic_pane_cp

0xc285,	// (0x00033bb2) list_highlight_pane_cp20

0x451e,	// (0x0002be4b) list_single_2graphic_pane_g1_cp4

0x3afb,	// (0x0002b428) list_single_2graphic_pane_g2_cp4

0x4526,	// (0x0002be53) list_single_2graphic_pane_t1_cp4

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp21

0x4535,	// (0x0002be62) list_single_midp_graphic_pane_g4_cp

0x4544,	// (0x0002be71) list_single_midp_graphic_pane_t1_cp

0xb60a,	// (0x00032f37) form2_mdip_string_pane_t1_ParamLimits

0xb60a,	// (0x00032f37) form2_mdip_string_pane_t1

0xc285,	// (0x00033bb2) bg_wml_button_pane_cp2

0xc27b,	// (0x00033ba8) form2_midp_image_pane_g1

0xe8e3,	// (0x00036210) list_double_large_graphic_pane_g5_ParamLimits

0xe8e3,	// (0x00036210) list_double_large_graphic_pane_g5

0x99e0,	// (0x0003130d) midp_form_pane_ParamLimits

0xc2e1,	// (0x00033c0e) main_apps_wheel_pane_ParamLimits

0xa170,	// (0x00031a9d) popup_preview_window_ParamLimits

0xa170,	// (0x00031a9d) popup_preview_window

0xa43d,	// (0x00031d6a) popup_touch_info_window_ParamLimits

0xa43d,	// (0x00031d6a) popup_touch_info_window

0xa45b,	// (0x00031d88) popup_touch_menu_window_ParamLimits

0xa45b,	// (0x00031d88) popup_touch_menu_window

0xc271,	// (0x00033b9e) bg_popup_sub_pane_cp6

0x4660,	// (0x0002bf8d) list_touch_menu_pane

0xb680,	// (0x00032fad) list_single_touch_menu_pane_ParamLimits

0xb680,	// (0x00032fad) list_single_touch_menu_pane

0xb694,	// (0x00032fc1) list_single_touch_menu_pane_t1

0xc2e1,	// (0x00033c0e) bg_popup_sub_pane_cp7_ParamLimits

0xc2e1,	// (0x00033c0e) bg_popup_sub_pane_cp7

0x468c,	// (0x0002bfb9) heading_sub_pane

0x4694,	// (0x0002bfc1) list_touch_info_pane_ParamLimits

0x4694,	// (0x0002bfc1) list_touch_info_pane

0x46a3,	// (0x0002bfd0) list_single_touch_info_pane_ParamLimits

0x46a3,	// (0x0002bfd0) list_single_touch_info_pane

0x46b5,	// (0x0002bfe2) list_single_touch_info_pane_t1

0x46c3,	// (0x0002bff0) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x0003740e) list_single_touch_info_pane_t

0xcf53,	// (0x00034880) bg_popup_heading_pane_cp

0x46d1,	// (0x0002bffe) heading_sub_pane_t1

0x0d63,	// (0x00028690) bg_popup_preview_window_pane_cp_ParamLimits

0x0d63,	// (0x00028690) bg_popup_preview_window_pane_cp

0x468c,	// (0x0002bfb9) heading_preview_pane

0x4694,	// (0x0002bfc1) list_preview_pane_ParamLimits

0x4694,	// (0x0002bfc1) list_preview_pane

0x46df,	// (0x0002c00c) popup_preview_window_g1

0x46a3,	// (0x0002bfd0) list_single_preview_pane_ParamLimits

0x46a3,	// (0x0002bfd0) list_single_preview_pane

0x46e7,	// (0x0002c014) list_single_preview_pane_g1

0x46ef,	// (0x0002c01c) list_single_preview_pane_t1

0x46b5,	// (0x0002bfe2) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00037413) list_single_preview_pane_t

0x46fd,	// (0x0002c02a) bg_popup_heading_pane_cp2_ParamLimits

0x46fd,	// (0x0002c02a) bg_popup_heading_pane_cp2

0x4713,	// (0x0002c040) heading_preview_pane_g1

0x471b,	// (0x0002c048) heading_preview_pane_t1_ParamLimits

0x471b,	// (0x0002c048) heading_preview_pane_t1

0xc334,	// (0x00033c61) soft_indicator_pane_t1_ParamLimits

0xc613,	// (0x00033f40) scroll_pane_ParamLimits

0xc9bc,	// (0x000342e9) scroll_sc2_left_pane

0xc9c5,	// (0x000342f2) scroll_sc2_right_pane

0xc9e4,	// (0x00034311) scroll_bg_pane_g1_ParamLimits

0xc9f9,	// (0x00034326) scroll_bg_pane_g2_ParamLimits

0xca11,	// (0x0003433e) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00036fdc) scroll_bg_pane_g_ParamLimits

0xc9e4,	// (0x00034311) scroll_handle_pane_g1_ParamLimits

0xca26,	// (0x00034353) scroll_handle_pane_g2_ParamLimits

0xca11,	// (0x0003433e) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00036fe3) scroll_handle_pane_g_ParamLimits

0x9d3d,	// (0x0003166a) popup_choice_list_window_ParamLimits

0x9d3d,	// (0x0003166a) popup_choice_list_window

0x0b79,	// (0x000284a6) choice_list_pane

0x0c2b,	// (0x00028558) cell_toolbar_pane_t1

0x0c53,	// (0x00028580) toolbar_button_pane_ParamLimits

0x31d4,	// (0x0002ab01) ai_gene_pane_1_t2_ParamLimits

0x31d4,	// (0x0002ab01) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00037206) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00037206) ai_gene_pane_1_t

0x4738,	// (0x0002c065) scroll_sc2_left_pane_g1

0x4738,	// (0x0002c065) scroll_sc2_right_pane_g1

0xc7d9,	// (0x00034106) bg_popup_sub_pane_cp10

0x4742,	// (0x0002c06f) list_choice_list_pane

0xb21c,	// (0x00032b49) list_single_choice_list_pane_ParamLimits

0xb21c,	// (0x00032b49) list_single_choice_list_pane

0xd0e7,	// (0x00034a14) list_single_choice_list_pane_g1

0x95ff,	// (0x00030f2c) list_single_choice_list_pane_t1_ParamLimits

0x95ff,	// (0x00030f2c) list_single_choice_list_pane_t1

0x4776,	// (0x0002c0a3) choice_list_pane_g1

0xb6a2,	// (0x00032fcf) choice_list_pane_t1

0xc271,	// (0x00033b9e) input_focus_pane_cp11

0xc931,	// (0x0003425e) title_pane_stacon_g2_ParamLimits

0xc931,	// (0x0003425e) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00036fc2) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00036fc2) title_pane_stacon_g

0xcf53,	// (0x00034880) cursor_press_pane

0x9de4,	// (0x00031711) popup_fep_hwr_window_ParamLimits

0x9de4,	// (0x00031711) popup_fep_hwr_window

0x02cf,	// (0x00027bfc) popup_fep_vkb_window_ParamLimits

0x02cf,	// (0x00027bfc) popup_fep_vkb_window

0xb6b0,	// (0x00032fdd) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x0003743c) fep_vkb_side_pane_g_ParamLimits

0x195c,	// (0x00029289) fep_hwr_candidate_pane_ParamLimits

0x195c,	// (0x00029289) fep_hwr_candidate_pane

0x1986,	// (0x000292b3) fep_hwr_side_pane_ParamLimits

0x1986,	// (0x000292b3) fep_hwr_side_pane

0x19a6,	// (0x000292d3) fep_hwr_top_pane_ParamLimits

0x19a6,	// (0x000292d3) fep_hwr_top_pane

0x19be,	// (0x000292eb) fep_hwr_write_pane_ParamLimits

0x19be,	// (0x000292eb) fep_hwr_write_pane

0xfb0f,	// (0x0003743c) fep_vkb_side_pane_g

0x4794,	// (0x0002c0c1) fep_hwr_top_pane_g1

0x47a6,	// (0x0002c0d3) fep_hwr_top_pane_g2

0x19ea,	// (0x00029317) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00037418) fep_hwr_top_pane_g

0x19ff,	// (0x0002932c) fep_hwr_top_text_pane

0xcae9,	// (0x00034416) fep_hwr_top_text_pane_g1

0x47dc,	// (0x0002c109) fep_hwr_top_text_pane_t1

0x1af5,	// (0x00029422) fep_hwr_candidate_pane_g1

0x4a21,	// (0x0002c34e) fep_vkb_keypad_pane_g3_ParamLimits

0x4a21,	// (0x0002c34e) fep_vkb_keypad_pane_g3

0x4a49,	// (0x0002c376) fep_vkb_keypad_pane_g4_ParamLimits

0x4a49,	// (0x0002c376) fep_vkb_keypad_pane_g4

0x4ab8,	// (0x0002c3e5) fep_vkb_bottom_pane_g2_ParamLimits

0x4ab8,	// (0x0002c3e5) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x00037443) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x00037443) fep_vkb_bottom_pane_g

0x4738,	// (0x0002c065) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x0003744d) cell_vkb_side_pane_g

0x4b43,	// (0x0002c470) cell_vkb_side_pane_t1

0x4b51,	// (0x0002c47e) cell_vkb_side_pane_t1_copy1

0x4738,	// (0x0002c065) bg_fep_vkb_candidate_pane_g2

0x4c7d,	// (0x0002c5aa) cell_vkb_candidate_pane_ParamLimits

0x47ea,	// (0x0002c117) aid_size_cell_vkb_ParamLimits

0x47ea,	// (0x0002c117) aid_size_cell_vkb

0x4c7d,	// (0x0002c5aa) cell_vkb_candidate_pane

0x1b0f,	// (0x0002943c) bg_popup_fep_shadow_pane_g1

0xb717,	// (0x00033044) fep_vkb_bottom_pane_ParamLimits

0xb717,	// (0x00033044) fep_vkb_bottom_pane

0x48ae,	// (0x0002c1db) fep_vkb_candidate_pane_ParamLimits

0x48ae,	// (0x0002c1db) fep_vkb_candidate_pane

0xb73c,	// (0x00033069) fep_vkb_keypad_pane_ParamLimits

0xb73c,	// (0x00033069) fep_vkb_keypad_pane

0xb771,	// (0x0003309e) fep_vkb_side_pane_ParamLimits

0xb771,	// (0x0003309e) fep_vkb_side_pane

0xb7ad,	// (0x000330da) fep_vkb_top_pane_ParamLimits

0xb7ad,	// (0x000330da) fep_vkb_top_pane

0x497a,	// (0x0002c2a7) fep_vkb_top_pane_g1_ParamLimits

0x497a,	// (0x0002c2a7) fep_vkb_top_pane_g1

0x4989,	// (0x0002c2b6) fep_vkb_top_pane_g2_ParamLimits

0x4989,	// (0x0002c2b6) fep_vkb_top_pane_g2

0x4998,	// (0x0002c2c5) fep_vkb_top_pane_g3_ParamLimits

0x4998,	// (0x0002c2c5) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x00037433) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x00037433) fep_vkb_top_pane_g

0x49b6,	// (0x0002c2e3) fep_vkb_top_text_pane_ParamLimits

0x49b6,	// (0x0002c2e3) fep_vkb_top_text_pane

0xb7e2,	// (0x0003310f) fep_vkb_side_pane_g1_ParamLimits

0xb7e2,	// (0x0003310f) fep_vkb_side_pane_g1

0x4a10,	// (0x0002c33d) grid_vkb_side_pane_ParamLimits

0x4a10,	// (0x0002c33d) grid_vkb_side_pane

0x1b17,	// (0x00029444) bg_popup_fep_shadow_pane_g2

0x1b20,	// (0x0002944d) bg_popup_fep_shadow_pane_g3

0x1b28,	// (0x00029455) bg_popup_fep_shadow_pane_g4

0x1b31,	// (0x0002945e) bg_popup_fep_shadow_pane_g5

0x1b3b,	// (0x00029468) bg_popup_fep_shadow_pane_g6

0x1b43,	// (0x00029470) bg_popup_fep_shadow_pane_g7

0xc70f,	// (0x0003403c) bg_popup_fep_shadow_pane_g8

0x4a67,	// (0x0002c394) grid_vkb_keypad_number_pane_ParamLimits

0x4a67,	// (0x0002c394) grid_vkb_keypad_number_pane

0x4a77,	// (0x0002c3a4) grid_vkb_keypad_pane_ParamLimits

0x4a77,	// (0x0002c3a4) grid_vkb_keypad_pane

0x4a9d,	// (0x0002c3ca) fep_vkb_bottom_pane_g1_ParamLimits

0x4a9d,	// (0x0002c3ca) fep_vkb_bottom_pane_g1

0x4ac6,	// (0x0002c3f3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4ac6,	// (0x0002c3f3) grid_vkb_keypad_bottom_left_pane

0x4adb,	// (0x0002c408) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4adb,	// (0x0002c408) grid_vkb_keypad_bottom_right_pane

0x4af0,	// (0x0002c41d) fep_vkb_top_text_pane_g1

0xb829,	// (0x00033156) fep_vkb_top_text_pane_t1

0xb83b,	// (0x00033168) cell_vkb_side_pane_ParamLimits

0xb83b,	// (0x00033168) cell_vkb_side_pane

0x4738,	// (0x0002c065) cell_vkb_side_pane_g1

0x4b5f,	// (0x0002c48c) cell_vkb_keypad_pane_ParamLimits

0x4b5f,	// (0x0002c48c) cell_vkb_keypad_pane

0x4bd4,	// (0x0002c501) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x00037460) bg_popup_fep_shadow_pane_g

0x4738,	// (0x0002c065) cell_hwr_side_pane_g1

0x4738,	// (0x0002c065) cell_hwr_side_pane_g2

0x4bde,	// (0x0002c50b) cell_vkb_keypad_pane_t1

0xb851,	// (0x0003317e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb851,	// (0x0003317e) cell_vkb_keypad_bottom_left_pane

0xb866,	// (0x00033193) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb866,	// (0x00033193) cell_vkb_keypad_bottom_right_pane

0x4738,	// (0x0002c065) cell_vkb_keypad_bottom_left_pane_g1

0x4738,	// (0x0002c065) cell_vkb_keypad_bottom_right_pane_g1

0x4c42,	// (0x0002c56f) cell_vkb_keypad_number_pane_ParamLimits

0x4c42,	// (0x0002c56f) cell_vkb_keypad_number_pane

0x4c61,	// (0x0002c58e) cell_vkb_keypad_number_pane_g1

0x4c6b,	// (0x0002c598) cell_vkb_keypad_number_pane_g2

0x4c74,	// (0x0002c5a1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x00037452) cell_vkb_keypad_number_pane_g

0x4bde,	// (0x0002c50b) cell_vkb_keypad_number_pane_t1

0x4c98,	// (0x0002c5c5) fep_vkb_candidate_pane_g1

0x0001,

0xfb20,	// (0x0003744d) cell_hwr_side_pane_g

0x4cb1,	// (0x0002c5de) cell_hwr_side_pane_t1

0x1b55,	// (0x00029482) cell_hwr_side_pane_t1_copy1

0x49a8,	// (0x0002c2d5) cell_hwr_candidate_pane_g1

0x1b63,	// (0x00029490) cell_hwr_candidate_pane_t1

0x4738,	// (0x0002c065) cell_vkb_candidate_pane_g2

0x4d37,	// (0x0002c664) cell_vkb_candidate_pane_t1

0x1923,	// (0x00029250) bg_popup_fep_shadow_pane_ParamLimits

0x1923,	// (0x00029250) bg_popup_fep_shadow_pane

0xd0ef,	// (0x00034a1c) bg_fep_hwr_top_pane_g4

0x47b8,	// (0x0002c0e5) bg_hwr_side_pane_g1_ParamLimits

0x47b8,	// (0x0002c0e5) bg_hwr_side_pane_g1

0xb6d0,	// (0x00032ffd) cell_hwr_side_pane_ParamLimits

0xb6d0,	// (0x00032ffd) cell_hwr_side_pane

0x1a76,	// (0x000293a3) fep_hwr_write_pane_g1_ParamLimits

0x1a76,	// (0x000293a3) fep_hwr_write_pane_g1

0x1a83,	// (0x000293b0) fep_hwr_write_pane_g2_ParamLimits

0x1a83,	// (0x000293b0) fep_hwr_write_pane_g2

0x1a90,	// (0x000293bd) fep_hwr_write_pane_g3_ParamLimits

0x1a90,	// (0x000293bd) fep_hwr_write_pane_g3

0xb6f0,	// (0x0003301d) fep_hwr_write_pane_g4_ParamLimits

0xb6f0,	// (0x0003301d) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x0003741f) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x0003741f) fep_hwr_write_pane_g

0xd0ef,	// (0x00034a1c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd0ef,	// (0x00034a1c) bg_fep_hwr_candidate_pane_g2

0x1ab3,	// (0x000293e0) cell_hwr_candidate_pane_ParamLimits

0x1ab3,	// (0x000293e0) cell_hwr_candidate_pane

0x1af5,	// (0x00029422) fep_hwr_candidate_pane_g1_ParamLimits

0x4818,	// (0x0002c145) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4818,	// (0x0002c145) bg_popup_fep_shadow_pane_cp2

0x49a8,	// (0x0002c2d5) fep_vkb_top_pane_g4_ParamLimits

0x49a8,	// (0x0002c2d5) fep_vkb_top_pane_g4

0x49ee,	// (0x0002c31b) fep_vkb_side_pane_g2_ParamLimits

0x49ee,	// (0x0002c31b) fep_vkb_side_pane_g2

0x87cb,	// (0x000300f8) list_setting_pane_t4_ParamLimits

0x87cb,	// (0x000300f8) list_setting_pane_t4

0xe997,	// (0x000362c4) list_setting_number_pane_t5_ParamLimits

0xe997,	// (0x000362c4) list_setting_number_pane_t5

0xcb20,	// (0x0003444d) list_double_heading_pane_cp2_ParamLimits

0xcb20,	// (0x0003444d) list_double_heading_pane_cp2

0xd117,	// (0x00034a44) list_double_heading_pane_g1_cp2_ParamLimits

0xd117,	// (0x00034a44) list_double_heading_pane_g1_cp2

0x4d45,	// (0x0002c672) list_double_heading_pane_g2_cp2_ParamLimits

0x4d45,	// (0x0002c672) list_double_heading_pane_g2_cp2

0x4d59,	// (0x0002c686) list_double_heading_pane_t1_cp2_ParamLimits

0x4d59,	// (0x0002c686) list_double_heading_pane_t1_cp2

0x4d6f,	// (0x0002c69c) list_double_heading_pane_t2_cp2_ParamLimits

0x4d6f,	// (0x0002c69c) list_double_heading_pane_t2_cp2

0xc269,	// (0x00033b96) aid_value_unit2

0xe7d5,	// (0x00036102) popup_preview_fixed_window

0xc40b,	// (0x00033d38) bg_popup_preview_window_pane_cp02

0x4d81,	// (0x0002c6ae) list_preview_fixed_pane

0x4dc7,	// (0x0002c6f4) list_empty_pane_fp_ParamLimits

0x4dc7,	// (0x0002c6f4) list_empty_pane_fp

0x4dc7,	// (0x0002c6f4) list_single_cale_day_pane_fp_ParamLimits

0x4dc7,	// (0x0002c6f4) list_single_cale_day_pane_fp

0x4dc7,	// (0x0002c6f4) list_single_graphic_heading_pane_fp_ParamLimits

0x4dc7,	// (0x0002c6f4) list_single_graphic_heading_pane_fp

0x4dc7,	// (0x0002c6f4) list_single_graphic_pane_fp_ParamLimits

0x4dc7,	// (0x0002c6f4) list_single_graphic_pane_fp

0x4dc7,	// (0x0002c6f4) list_single_heading_pane_fp_ParamLimits

0x4dc7,	// (0x0002c6f4) list_single_heading_pane_fp

0x4dc7,	// (0x0002c6f4) list_single_pane_fp_ParamLimits

0x4dc7,	// (0x0002c6f4) list_single_pane_fp

0x4ddd,	// (0x0002c70a) list_single_pane_fp_g1_ParamLimits

0x4ddd,	// (0x0002c70a) list_single_pane_fp_g1

0xe8cb,	// (0x000361f8) list_single_pane_fp_g2_ParamLimits

0xe8cb,	// (0x000361f8) list_single_pane_fp_g2

0xeeba,	// (0x000367e7) list_single_pane_fp_g3_ParamLimits

0xeeba,	// (0x000367e7) list_single_pane_fp_g3

0x4de9,	// (0x0002c716) list_single_pane_fp_g4_ParamLimits

0x4de9,	// (0x0002c716) list_single_pane_fp_g4

0x0003,

0xfb54,	// (0x00037481) list_single_pane_fp_g_ParamLimits

0xfb54,	// (0x00037481) list_single_pane_fp_g

0xeece,	// (0x000367fb) list_single_pane_fp_t1_ParamLimits

0xeece,	// (0x000367fb) list_single_pane_fp_t1

0xeee5,	// (0x00036812) list_single_graphic_pane_fp_g1_ParamLimits

0xeee5,	// (0x00036812) list_single_graphic_pane_fp_g1

0x4ddd,	// (0x0002c70a) list_single_graphic_pane_fp_g2_ParamLimits

0x4ddd,	// (0x0002c70a) list_single_graphic_pane_fp_g2

0xe8cb,	// (0x000361f8) list_single_graphic_pane_fp_g3_ParamLimits

0xe8cb,	// (0x000361f8) list_single_graphic_pane_fp_g3

0xeeba,	// (0x000367e7) list_single_graphic_pane_fp_g4_ParamLimits

0xeeba,	// (0x000367e7) list_single_graphic_pane_fp_g4

0x4de9,	// (0x0002c716) list_single_graphic_pane_fp_g5_ParamLimits

0x4de9,	// (0x0002c716) list_single_graphic_pane_fp_g5

0x0004,

0xfb5d,	// (0x0003748a) list_single_graphic_pane_fp_g_ParamLimits

0xfb5d,	// (0x0003748a) list_single_graphic_pane_fp_g

0xeef1,	// (0x0003681e) list_single_graphic_pane_fp_t1_ParamLimits

0xeef1,	// (0x0003681e) list_single_graphic_pane_fp_t1

0xeee5,	// (0x00036812) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x00036812) list_single_graphic_heading_pane_fp_g1

0x4ddd,	// (0x0002c70a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4ddd,	// (0x0002c70a) list_single_graphic_heading_pane_fp_g2

0xe8cb,	// (0x000361f8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe8cb,	// (0x000361f8) list_single_graphic_heading_pane_fp_g3

0xeeba,	// (0x000367e7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x000367e7) list_single_graphic_heading_pane_fp_g4

0x4de9,	// (0x0002c716) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4de9,	// (0x0002c716) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x0003748a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x0003748a) list_single_graphic_heading_pane_fp_g

0xef07,	// (0x00036834) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef07,	// (0x00036834) list_single_graphic_heading_pane_fp_t1

0xef1d,	// (0x0003684a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x0003684a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb68,	// (0x00037495) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb68,	// (0x00037495) list_single_graphic_heading_pane_fp_t

0xef2f,	// (0x0003685c) list_single_cale_day_pane_fp_g1_ParamLimits

0xef2f,	// (0x0003685c) list_single_cale_day_pane_fp_g1

0x4df5,	// (0x0002c722) list_single_cale_day_pane_fp_g2_ParamLimits

0x4df5,	// (0x0002c722) list_single_cale_day_pane_fp_g2

0xef67,	// (0x00036894) list_single_cale_day_pane_fp_g3_ParamLimits

0xef67,	// (0x00036894) list_single_cale_day_pane_fp_g3

0xef8f,	// (0x000368bc) list_single_cale_day_pane_fp_g4_ParamLimits

0xef8f,	// (0x000368bc) list_single_cale_day_pane_fp_g4

0xefb3,	// (0x000368e0) list_single_cale_day_pane_fp_g5_ParamLimits

0xefb3,	// (0x000368e0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6d,	// (0x0003749a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6d,	// (0x0003749a) list_single_cale_day_pane_fp_g

0xefd7,	// (0x00036904) list_single_cale_day_pane_fp_t1_ParamLimits

0xefd7,	// (0x00036904) list_single_cale_day_pane_fp_t1

0xeffd,	// (0x0003692a) list_single_cale_day_pane_fp_t2_ParamLimits

0xeffd,	// (0x0003692a) list_single_cale_day_pane_fp_t2

0xf016,	// (0x00036943) list_single_cale_day_pane_fp_t3_ParamLimits

0xf016,	// (0x00036943) list_single_cale_day_pane_fp_t3

0x0002,

0xfb78,	// (0x000374a5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb78,	// (0x000374a5) list_single_cale_day_pane_fp_t

0x4ddd,	// (0x0002c70a) list_empty_pane_fp_g1_ParamLimits

0x4ddd,	// (0x0002c70a) list_empty_pane_fp_g1

0xf02f,	// (0x0003695c) list_empty_pane_fp_t1

0xf03d,	// (0x0003696a) list_empty_pane_fp_t2

0x0001,

0xfb7f,	// (0x000374ac) list_empty_pane_fp_t

0x4ddd,	// (0x0002c70a) list_single_heading_pane_fp_g1_ParamLimits

0x4ddd,	// (0x0002c70a) list_single_heading_pane_fp_g1

0xe8cb,	// (0x000361f8) list_single_heading_pane_fp_g2_ParamLimits

0xe8cb,	// (0x000361f8) list_single_heading_pane_fp_g2

0xeeba,	// (0x000367e7) list_single_heading_pane_fp_g3_ParamLimits

0xeeba,	// (0x000367e7) list_single_heading_pane_fp_g3

0x0002,

0xfb84,	// (0x000374b1) list_single_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x000374b1) list_single_heading_pane_fp_g

0xf04b,	// (0x00036978) list_single_heading_pane_fp_t1_ParamLimits

0xf04b,	// (0x00036978) list_single_heading_pane_fp_t1

0xf05d,	// (0x0003698a) list_single_heading_pane_fp_t2_ParamLimits

0xf05d,	// (0x0003698a) list_single_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x000374b8) list_single_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x000374b8) list_single_heading_pane_fp_t

0x964b,	// (0x00030f78) aid_size_cell_fast

0xc3ee,	// (0x00033d1b) soft_indicator_pane_cp1_t1

0x9654,	// (0x00030f81) cell_app_pane_cp2_ParamLimits

0x9654,	// (0x00030f81) cell_app_pane_cp2

0x1945,	// (0x00029272) fep_hwr_candidate_drop_down_list_pane

0xd0fd,	// (0x00034a2a) fep_hwr_candidate_pane_g3_ParamLimits

0xd0fd,	// (0x00034a2a) fep_hwr_candidate_pane_g3

0xd10a,	// (0x00034a37) fep_hwr_candidate_pane_g4_ParamLimits

0xd10a,	// (0x00034a37) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x0003742c) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x0003742c) fep_hwr_candidate_pane_g

0x489d,	// (0x0002c1ca) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x489d,	// (0x0002c1ca) fep_vkb_candidate_drop_down_list_pane

0x4ca0,	// (0x0002c5cd) fep_vkb_candidate_pane_g3

0x4ca8,	// (0x0002c5d5) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00037459) fep_vkb_candidate_pane_g

0x49a8,	// (0x0002c2d5) cell_hwr_candidate_pane_g1_ParamLimits

0x4cbf,	// (0x0002c5ec) cell_hwr_candidate_pane_g3_ParamLimits

0x4cbf,	// (0x0002c5ec) cell_hwr_candidate_pane_g3

0x4ce0,	// (0x0002c60d) cell_hwr_candidate_pane_g4_ParamLimits

0x4ce0,	// (0x0002c60d) cell_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x00037473) cell_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x00037473) cell_hwr_candidate_pane_g

0x4d01,	// (0x0002c62e) cell_vkb_candidate_pane_g3_ParamLimits

0x4d01,	// (0x0002c62e) cell_vkb_candidate_pane_g3

0x4d1c,	// (0x0002c649) cell_vkb_candidate_pane_g4_ParamLimits

0x4d1c,	// (0x0002c649) cell_vkb_candidate_pane_g4

0xb881,	// (0x000331ae) cell_app_pane_cp2_g1_ParamLimits

0xb881,	// (0x000331ae) cell_app_pane_cp2_g1

0x4e1f,	// (0x0002c74c) cell_app_pane_cp2_g2_ParamLimits

0x4e1f,	// (0x0002c74c) cell_app_pane_cp2_g2

0x0001,

0xfb90,	// (0x000374bd) cell_app_pane_cp2_g_ParamLimits

0xfb90,	// (0x000374bd) cell_app_pane_cp2_g

0x4e2b,	// (0x0002c758) cell_app_pane_cp2_t1_ParamLimits

0x4e2b,	// (0x0002c758) cell_app_pane_cp2_t1

0xc697,	// (0x00033fc4) grid_highlight_pane_cp1_ParamLimits

0xc697,	// (0x00033fc4) grid_highlight_pane_cp1

0x1b81,	// (0x000294ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x1b81,	// (0x000294ae) cell_hwr_candidate_pane_cp1

0x49a8,	// (0x0002c2d5) fep_hwr_candidate_drop_down_list_pane_g1

0x4e3d,	// (0x0002c76a) fep_hwr_candidate_drop_down_list_pane_g2

0x4e4a,	// (0x0002c777) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x000374c2) fep_hwr_candidate_drop_down_list_pane_g

0x1ba0,	// (0x000294cd) fep_hwr_candidate_drop_down_list_scroll_pane

0x1ba9,	// (0x000294d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1ba9,	// (0x000294d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1bb6,	// (0x000294e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1bb6,	// (0x000294e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1bc3,	// (0x000294f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1bc3,	// (0x000294f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d01,	// (0x0002c62e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d01,	// (0x0002c62e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d1c,	// (0x0002c649) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d1c,	// (0x0002c649) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1bd0,	// (0x000294fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1bd0,	// (0x000294fd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1beb,	// (0x00029518) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1beb,	// (0x00029518) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1c06,	// (0x00029533) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1c06,	// (0x00029533) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x000374c9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x000374c9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e57,	// (0x0002c784) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e57,	// (0x0002c784) cell_vkb_candidate_pane_cp1

0x49a8,	// (0x0002c2d5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x49a8,	// (0x0002c2d5) fep_vkb_candidate_drop_down_list_pane_g1

0x4e3d,	// (0x0002c76a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e3d,	// (0x0002c76a) fep_vkb_candidate_drop_down_list_pane_g2

0x4e4a,	// (0x0002c777) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e4a,	// (0x0002c777) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x000374c2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb95,	// (0x000374c2) fep_vkb_candidate_drop_down_list_pane_g

0x4e77,	// (0x0002c7a4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e77,	// (0x0002c7a4) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e84,	// (0x0002c7b1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e84,	// (0x0002c7b1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e91,	// (0x0002c7be) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e91,	// (0x0002c7be) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e9d,	// (0x0002c7ca) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e9d,	// (0x0002c7ca) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4cbf,	// (0x0002c5ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4cbf,	// (0x0002c5ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4ce0,	// (0x0002c60d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ce0,	// (0x0002c60d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ea9,	// (0x0002c7d6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ea9,	// (0x0002c7d6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eca,	// (0x0002c7f7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eca,	// (0x0002c7f7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4eeb,	// (0x0002c818) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4eeb,	// (0x0002c818) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x000374da) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x000374da) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8f4d,	// (0x0003087a) title_pane_g1_ParamLimits

0x8f60,	// (0x0003088d) title_pane_g2_ParamLimits

0xf529,	// (0x00036e56) title_pane_g_ParamLimits

0xcad9,	// (0x00034406) aid_call2_pane

0xcae1,	// (0x0003440e) aid_call_pane

0xcae9,	// (0x00034416) popup_clock_analogue_window_g1

0xcae9,	// (0x00034416) popup_clock_analogue_window_g2

0xf2ab,	// (0x00036bd8) popup_clock_analogue_window_g3

0xf2b4,	// (0x00036be1) popup_clock_analogue_window_g4

0xc27b,	// (0x00033ba8) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00036ff1) popup_clock_analogue_window_g

0xf2bc,	// (0x00036be9) popup_clock_analogue_window_t1

0xf2ca,	// (0x00036bf7) clock_digital_number_pane_ParamLimits

0xf2ca,	// (0x00036bf7) clock_digital_number_pane

0xf2d6,	// (0x00036c03) clock_digital_number_pane_cp02_ParamLimits

0xf2d6,	// (0x00036c03) clock_digital_number_pane_cp02

0xf2e2,	// (0x00036c0f) clock_digital_number_pane_cp03_ParamLimits

0xf2e2,	// (0x00036c0f) clock_digital_number_pane_cp03

0xf2ee,	// (0x00036c1b) clock_digital_number_pane_cp04_ParamLimits

0xf2ee,	// (0x00036c1b) clock_digital_number_pane_cp04

0xf2fa,	// (0x00036c27) clock_digital_separator_pane_ParamLimits

0xf2fa,	// (0x00036c27) clock_digital_separator_pane

0xf306,	// (0x00036c33) popup_clock_digital_window_t1_ParamLimits

0xf306,	// (0x00036c33) popup_clock_digital_window_t1

0xc27b,	// (0x00033ba8) clock_digital_number_pane_g1

0xc27b,	// (0x00033ba8) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00036ffc) clock_digital_number_pane_g

0xc27b,	// (0x00033ba8) clock_digital_separator_pane_g1

0xc27b,	// (0x00033ba8) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00036ffc) clock_digital_separator_pane_g

0xa492,	// (0x00031dbf) aid_fill_nsta_ParamLimits

0xa5c8,	// (0x00031ef5) indicator_nsta_pane_ParamLimits

0x0a09,	// (0x00028336) popup_clock_analogue_window

0x0a09,	// (0x00028336) popup_clock_digital_window

0xb474,	// (0x00032da1) grid_indicator_nsta_pane_ParamLimits

0x412e,	// (0x0002ba5b) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x000373ac) clock_nsta_pane_t

0xf28c,	// (0x00036bb9) aid_size_max_handle

0x9732,	// (0x0003105f) aid_size_min_handle

0xcf53,	// (0x00034880) editor_scroll_pane

0x4f06,	// (0x0002c833) ex_editor_pane

0xc7c9,	// (0x000340f6) scroll_pane_cp13

0xc63f,	// (0x00033f6c) scroll_pane_cp14

0xcb18,	// (0x00034445) scroll_pane_cp36

0x97fc,	// (0x00031129) list_single_graphic_hl_pane_cp2_ParamLimits

0x97fc,	// (0x00031129) list_single_graphic_hl_pane_cp2

0x8b1e,	// (0x0003044b) list_single_graphic_hl_pane_ParamLimits

0x8b1e,	// (0x0003044b) list_single_graphic_hl_pane

0x8b31,	// (0x0003045e) aid_size_min_hl_cp1

0x4f0e,	// (0x0002c83b) list_highlight_pane_cp34_ParamLimits

0x4f0e,	// (0x0002c83b) list_highlight_pane_cp34

0x4f1f,	// (0x0002c84c) list_single_graphic_hl_pane_g1_ParamLimits

0x4f1f,	// (0x0002c84c) list_single_graphic_hl_pane_g1

0x8b3a,	// (0x00030467) list_single_graphic_hl_pane_g2_ParamLimits

0x8b3a,	// (0x00030467) list_single_graphic_hl_pane_g2

0x8b3a,	// (0x00030467) list_single_graphic_hl_pane_g3_ParamLimits

0x8b3a,	// (0x00030467) list_single_graphic_hl_pane_g3

0x8b46,	// (0x00030473) list_single_graphic_hl_pane_g4_ParamLimits

0x8b46,	// (0x00030473) list_single_graphic_hl_pane_g4

0x8b52,	// (0x0003047f) list_single_graphic_hl_pane_g5_ParamLimits

0x8b52,	// (0x0003047f) list_single_graphic_hl_pane_g5

0x0004,

0xfbbe,	// (0x000374eb) list_single_graphic_hl_pane_g_ParamLimits

0xfbbe,	// (0x000374eb) list_single_graphic_hl_pane_g

0x8b66,	// (0x00030493) list_single_graphic_hl_pane_t1_ParamLimits

0x8b66,	// (0x00030493) list_single_graphic_hl_pane_t1

0x4f2c,	// (0x0002c859) aid_size_min_hl_cp2

0x4f35,	// (0x0002c862) list_highlight_pane_cp34_cp2_ParamLimits

0x4f35,	// (0x0002c862) list_highlight_pane_cp34_cp2

0x4f1f,	// (0x0002c84c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f1f,	// (0x0002c84c) list_single_graphic_hl_pane_g1_cp2

0x4f42,	// (0x0002c86f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f42,	// (0x0002c86f) list_single_graphic_hl_pane_g2_cp2

0xb89f,	// (0x000331cc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb89f,	// (0x000331cc) list_single_graphic_hl_pane_g3_cp2

0xceb2,	// (0x000347df) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xceb2,	// (0x000347df) list_single_graphic_hl_pane_g4_cp2

0x4f5c,	// (0x0002c889) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f5c,	// (0x0002c889) list_single_graphic_hl_pane_g5_cp2

0x9bb1,	// (0x000314de) control_pane_g4_ParamLimits

0x9bb1,	// (0x000314de) control_pane_g4

0xc7d9,	// (0x00034106) bg_popup_sub_pane_cp10_ParamLimits

0x4742,	// (0x0002c06f) list_choice_list_pane_ParamLimits

0x4751,	// (0x0002c07e) scroll_pane_cp23

0xc40b,	// (0x00033d38) bg_popup_preview_window_pane_cp02_ParamLimits

0x4d81,	// (0x0002c6ae) list_preview_fixed_pane_ParamLimits

0x4d97,	// (0x0002c6c4) list_preview_fixed_pane_cp_ParamLimits

0x4d97,	// (0x0002c6c4) list_preview_fixed_pane_cp

0x4da3,	// (0x0002c6d0) popup_preview_fixed_window_g1_ParamLimits

0x4da3,	// (0x0002c6d0) popup_preview_fixed_window_g1

0x4daf,	// (0x0002c6dc) popup_preview_fixed_window_g2_ParamLimits

0x4daf,	// (0x0002c6dc) popup_preview_fixed_window_g2

0x0002,

0xfb4d,	// (0x0003747a) popup_preview_fixed_window_g_ParamLimits

0xfb4d,	// (0x0003747a) popup_preview_fixed_window_g

0xf200,	// (0x00036b2d) aid_navi_side_left_pane_ParamLimits

0xf215,	// (0x00036b42) aid_navi_side_right_pane_ParamLimits

0xf22d,	// (0x00036b5a) navi_icon_pane_stacon_ParamLimits

0xf241,	// (0x00036b6e) navi_navi_pane_stacon_ParamLimits

0xf22d,	// (0x00036b5a) navi_text_pane_stacon_ParamLimits

0xc271,	// (0x00033b9e) main_text_info_pane

0x4f86,	// (0x0002c8b3) listscroll_text_info_pane

0x4f8e,	// (0x0002c8bb) list_text_info_pane_ParamLimits

0x4f8e,	// (0x0002c8bb) list_text_info_pane

0x4f9d,	// (0x0002c8ca) scroll_pane_cp24_ParamLimits

0x4f9d,	// (0x0002c8ca) scroll_pane_cp24

0xb8ad,	// (0x000331da) list_text_info_pane_t1_ParamLimits

0xb8ad,	// (0x000331da) list_text_info_pane_t1

0x9d59,	// (0x00031686) popup_fast_swap2_window_ParamLimits

0x9d59,	// (0x00031686) popup_fast_swap2_window

0x4fef,	// (0x0002c91c) aid_size_cell_fast2

0xc271,	// (0x00033b9e) bg_popup_window_pane_cp17

0x11de,	// (0x00028b0b) heading_pane_cp2

0x11e6,	// (0x00028b13) listscroll_fast2_pane

0x4ff9,	// (0x0002c926) grid_fast2_pane

0x5003,	// (0x0002c930) listscroll_fast2_pane_g1

0x500b,	// (0x0002c938) listscroll_fast2_pane_g2

0x0001,

0xfbc9,	// (0x000374f6) listscroll_fast2_pane_g

0xc7c9,	// (0x000340f6) scroll_pane_cp26

0x5015,	// (0x0002c942) cell_fast2_pane_ParamLimits

0x5015,	// (0x0002c942) cell_fast2_pane

0x502a,	// (0x0002c957) cell_fast2_pane_g1

0x5033,	// (0x0002c960) cell_fast2_pane_g2

0x503c,	// (0x0002c969) cell_fast2_pane_g3

0x0002,

0xfbce,	// (0x000374fb) cell_fast2_pane_g

0xc576,	// (0x00033ea3) grid_highlight_pane_cp9

0xc58b,	// (0x00033eb8) main_eswt_pane_ParamLimits

0xc58b,	// (0x00033eb8) main_eswt_pane

0x4fb2,	// (0x0002c8df) list_single_text_info_pane

0x5044,	// (0x0002c971) eswt_ctrl_button_pane

0x5044,	// (0x0002c971) eswt_ctrl_canvas_pane

0xb8c9,	// (0x000331f6) eswt_ctrl_combo_pane

0x5044,	// (0x0002c971) eswt_ctrl_default_pane

0x5044,	// (0x0002c971) eswt_ctrl_label_pane

0x5054,	// (0x0002c981) eswt_ctrl_wait_pane

0xb8d1,	// (0x000331fe) eswt_shell_pane

0xc271,	// (0x00033b9e) listscroll_eswt_app_pane

0x507c,	// (0x0002c9a9) popup_eswt_tasktip_window_ParamLimits

0x507c,	// (0x0002c9a9) popup_eswt_tasktip_window

0x0d63,	// (0x00028690) bg_popup_window_pane_cp18

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_ParamLimits

0x508d,	// (0x0002c9ba) eswt_control_pane_g1

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_ParamLimits

0x509a,	// (0x0002c9c7) eswt_control_pane_g2

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_ParamLimits

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_ParamLimits

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4

0x0003,

0xfbd5,	// (0x00037502) eswt_control_pane_g_ParamLimits

0xfbd5,	// (0x00037502) eswt_control_pane_g

0xc697,	// (0x00033fc4) bg_button_pane_ParamLimits

0xc697,	// (0x00033fc4) bg_button_pane

0xc58b,	// (0x00033eb8) common_borders_pane_copy2_ParamLimits

0xc58b,	// (0x00033eb8) common_borders_pane_copy2

0x50c1,	// (0x0002c9ee) control_button_pane_g1_ParamLimits

0x50c1,	// (0x0002c9ee) control_button_pane_g1

0x50cd,	// (0x0002c9fa) control_button_pane_g2_ParamLimits

0x50cd,	// (0x0002c9fa) control_button_pane_g2

0x50d9,	// (0x0002ca06) control_button_pane_g3_ParamLimits

0x50d9,	// (0x0002ca06) control_button_pane_g3

0x0002,

0xfbde,	// (0x0003750b) control_button_pane_g_ParamLimits

0xfbde,	// (0x0003750b) control_button_pane_g

0x50ed,	// (0x0002ca1a) control_button_pane_t1

0x50fb,	// (0x0002ca28) control_button_pane_t2

0x0001,

0xfbe5,	// (0x00037512) control_button_pane_t

0x0c5f,	// (0x0002858c) bg_button_pane_g1

0x0c67,	// (0x00028594) bg_button_pane_g2

0x0c6f,	// (0x0002859c) bg_button_pane_g3

0x0c77,	// (0x000285a4) bg_button_pane_g4

0x0c7f,	// (0x000285ac) bg_button_pane_g5

0x0c87,	// (0x000285b4) bg_button_pane_g6

0x0c8f,	// (0x000285bc) bg_button_pane_g7

0x0c97,	// (0x000285c4) bg_button_pane_g8

0x0c9f,	// (0x000285cc) bg_button_pane_g9

0x0008,

0xf82d,	// (0x0003715a) bg_button_pane_g

0x46fd,	// (0x0002c02a) common_borders_pane_ParamLimits

0x46fd,	// (0x0002c02a) common_borders_pane

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy1_ParamLimits

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy1

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy1_ParamLimits

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy1

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy1_ParamLimits

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy1

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy1_ParamLimits

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy1

0x4738,	// (0x0002c065) bg_eswt_ctrl_canvas_pane_g1

0x46fd,	// (0x0002c02a) common_borders_pane_cp2_ParamLimits

0x46fd,	// (0x0002c02a) common_borders_pane_cp2

0x46fd,	// (0x0002c02a) common_borders_pane_cp3_ParamLimits

0x46fd,	// (0x0002c02a) common_borders_pane_cp3

0x5109,	// (0x0002ca36) separator_horizontal_pane

0x5111,	// (0x0002ca3e) separator_vertical_pane

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy2_ParamLimits

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy2

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy2_ParamLimits

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy2

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy2_ParamLimits

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy2

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy2_ParamLimits

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy2

0xc271,	// (0x00033b9e) common_borders_pane_cp4

0x511a,	// (0x0002ca47) separator_horizontal_pane_g1

0x5123,	// (0x0002ca50) separator_horizontal_pane_g2

0x512c,	// (0x0002ca59) separator_horizontal_pane_g3

0x0002,

0xfbea,	// (0x00037517) separator_horizontal_pane_g

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy3_ParamLimits

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy3

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy3_ParamLimits

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy3

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy3_ParamLimits

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy3

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy3_ParamLimits

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy3

0xc271,	// (0x00033b9e) common_borders_pane_cp5

0x5135,	// (0x0002ca62) separator_vertical_pane_g1

0x513e,	// (0x0002ca6b) separator_vertical_pane_g2

0x5147,	// (0x0002ca74) separator_vertical_pane_g3

0x0002,

0xfbf1,	// (0x0003751e) separator_vertical_pane_g

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy4_ParamLimits

0x508d,	// (0x0002c9ba) eswt_control_pane_g1_copy4

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy4_ParamLimits

0x509a,	// (0x0002c9c7) eswt_control_pane_g2_copy4

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy4_ParamLimits

0x50a7,	// (0x0002c9d4) eswt_control_pane_g3_copy4

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy4_ParamLimits

0x50b4,	// (0x0002c9e1) eswt_control_pane_g4_copy4

0xb8f1,	// (0x0003321e) eswt_ctrl_combo_button_pane

0xb8f9,	// (0x00033226) eswt_ctrl_input_pane

0xb901,	// (0x0003322e) popup_choice_list_window_cp70

0xb909,	// (0x00033236) eswt_ctrl_input_pane_t1

0xc271,	// (0x00033b9e) input_focus_pane_cp70

0x46fd,	// (0x0002c02a) bg_button_pane_cp70_ParamLimits

0x46fd,	// (0x0002c02a) bg_button_pane_cp70

0xb917,	// (0x00033244) eswt_ctrl_combo_button_pane_g1

0x517e,	// (0x0002caab) wait_bar_pane_cp70

0x0d63,	// (0x00028690) bg_popup_window_pane_cp70_ParamLimits

0x0d63,	// (0x00028690) bg_popup_window_pane_cp70

0x5186,	// (0x0002cab3) popup_eswt_tasktip_window_t1

0x519c,	// (0x0002cac9) wait_bar_pane_cp71_ParamLimits

0x519c,	// (0x0002cac9) wait_bar_pane_cp71

0x51a8,	// (0x0002cad5) grid_eswt_app_pane

0xc9c5,	// (0x000342f2) scroll_pane_cp70

0xb91f,	// (0x0003324c) cell_eswt_app_pane_ParamLimits

0xb91f,	// (0x0003324c) cell_eswt_app_pane

0xb949,	// (0x00033276) cell_eswt_app_pane_g1_ParamLimits

0xb949,	// (0x00033276) cell_eswt_app_pane_g1

0xb978,	// (0x000332a5) cell_eswt_app_pane_g2_ParamLimits

0xb978,	// (0x000332a5) cell_eswt_app_pane_g2

0x0001,

0xfbf8,	// (0x00037525) cell_eswt_app_pane_g_ParamLimits

0xfbf8,	// (0x00037525) cell_eswt_app_pane_g

0xb99c,	// (0x000332c9) cell_eswt_app_pane_t1_ParamLimits

0xb99c,	// (0x000332c9) cell_eswt_app_pane_t1

0x5266,	// (0x0002cb93) grid_highlight_pane_cp70_ParamLimits

0x5266,	// (0x0002cb93) grid_highlight_pane_cp70

0xce4d,	// (0x0003477a) set_content_pane_g1

0x9b43,	// (0x00031470) status_small_volume_pane

0xb9ce,	// (0x000332fb) status_small_volume_pane_g1

0xb9d6,	// (0x00033303) volume_small2_pane

0xb9df,	// (0x0003330c) volume_small2_pane_g1

0xb9e8,	// (0x00033315) volume_small2_pane_g2

0xb9f1,	// (0x0003331e) volume_small2_pane_g3

0xb9fa,	// (0x00033327) volume_small2_pane_g4

0xba03,	// (0x00033330) volume_small2_pane_g5

0xba0c,	// (0x00033339) volume_small2_pane_g6

0xba15,	// (0x00033342) volume_small2_pane_g7

0xba1e,	// (0x0003334b) volume_small2_pane_g8

0xba27,	// (0x00033354) volume_small2_pane_g9

0xba30,	// (0x0003335d) volume_small2_pane_g10

0x0009,

0xfbfd,	// (0x0003752a) volume_small2_pane_g

0x4af0,	// (0x0002c41d) fep_vkb_top_text_pane_g1_ParamLimits

0xb829,	// (0x00033156) fep_vkb_top_text_pane_t1_ParamLimits

0x4dbb,	// (0x0002c6e8) popup_preview_fixed_window_g3_ParamLimits

0x4dbb,	// (0x0002c6e8) popup_preview_fixed_window_g3

0xa3d0,	// (0x00031cfd) popup_toolbar_trans_pane

0xb0b5,	// (0x000329e2) aid_height_set_list_ParamLimits

0x34df,	// (0x0002ae0c) aid_size_parent_ParamLimits

0xc7d9,	// (0x00034106) list_highlight_pane_cp2_ParamLimits

0xce4d,	// (0x0003477a) set_content_pane_g1_ParamLimits

0xb230,	// (0x00032b5d) list_single_image_pane_ParamLimits

0xb230,	// (0x00032b5d) list_single_image_pane

0xba39,	// (0x00033366) aid_size_cell_image_ParamLimits

0xba39,	// (0x00033366) aid_size_cell_image

0xba46,	// (0x00033373) grid_single_image_pane_ParamLimits

0xba46,	// (0x00033373) grid_single_image_pane

0xd123,	// (0x00034a50) list_single_image_pane_g1_ParamLimits

0xd123,	// (0x00034a50) list_single_image_pane_g1

0x528b,	// (0x0002cbb8) list_single_image_pane_g2_ParamLimits

0x528b,	// (0x0002cbb8) list_single_image_pane_g2

0x0001,

0xfc12,	// (0x0003753f) list_single_image_pane_g_ParamLimits

0xfc12,	// (0x0003753f) list_single_image_pane_g

0x529f,	// (0x0002cbcc) list_single_image_pane_t1_ParamLimits

0x529f,	// (0x0002cbcc) list_single_image_pane_t1

0xba52,	// (0x0003337f) cell_image_list_pane_ParamLimits

0xba52,	// (0x0003337f) cell_image_list_pane

0xba66,	// (0x00033393) cell_image_list_pane_g1

0xba6f,	// (0x0003339c) cell_image_list_pane_g2

0x0001,

0xfc17,	// (0x00037544) cell_image_list_pane_g

0xba78,	// (0x000333a5) aid_size_cell_tb_trans_pane

0xc697,	// (0x00033fc4) bg_tb_trans_pane

0xba8a,	// (0x000333b7) grid_tb_trans_pane

0x0c5f,	// (0x0002858c) bg_tb_trans_pane_g1

0x0c67,	// (0x00028594) bg_tb_trans_pane_g2

0x0c6f,	// (0x0002859c) bg_tb_trans_pane_g3

0x0c77,	// (0x000285a4) bg_tb_trans_pane_g4

0x0c7f,	// (0x000285ac) bg_tb_trans_pane_g5

0x0c97,	// (0x000285c4) bg_tb_trans_pane_g6

0x0c9f,	// (0x000285cc) bg_tb_trans_pane_g7

0x0c87,	// (0x000285b4) bg_tb_trans_pane_g8

0x0c8f,	// (0x000285bc) bg_tb_trans_pane_g9

0x0008,

0xfc1c,	// (0x00037549) bg_tb_trans_pane_g

0xba9e,	// (0x000333cb) cell_toolbar_trans_pane_ParamLimits

0xba9e,	// (0x000333cb) cell_toolbar_trans_pane

0x4738,	// (0x0002c065) cell_toolbar_trans_pane_g1

0xb53d,	// (0x00032e6a) list_form2_midp_pane_t1

0xb54b,	// (0x00032e78) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x000373f2) list_form2_midp_pane_t

0x431f,	// (0x0002bc4c) scroll_pane_cp51_ParamLimits

0x44db,	// (0x0002be08) form2_midp_wait_pane_g1

0x44e4,	// (0x0002be11) form2_midp_wait_pane_g2

0x44ed,	// (0x0002be1a) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00037407) form2_midp_wait_pane_g

0xc2e1,	// (0x00033c0e) list_highlight_pane_cp21_ParamLimits

0x4535,	// (0x0002be62) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4544,	// (0x0002be71) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3693,	// (0x0002afc0) list_single_2graphic_im_pane_ParamLimits

0x3693,	// (0x0002afc0) list_single_2graphic_im_pane

0xbac4,	// (0x000333f1) list_single_2graphic_im_pane_g1_ParamLimits

0xbac4,	// (0x000333f1) list_single_2graphic_im_pane_g1

0xbad5,	// (0x00033402) list_single_2graphic_im_pane_g2_ParamLimits

0xbad5,	// (0x00033402) list_single_2graphic_im_pane_g2

0xbae1,	// (0x0003340e) list_single_2graphic_im_pane_g3_ParamLimits

0xbae1,	// (0x0003340e) list_single_2graphic_im_pane_g3

0x0003,

0xfc2f,	// (0x0003755c) list_single_2graphic_im_pane_g_ParamLimits

0xfc2f,	// (0x0003755c) list_single_2graphic_im_pane_g

0xbaf5,	// (0x00033422) list_single_2graphic_im_pane_t1_ParamLimits

0xbaf5,	// (0x00033422) list_single_2graphic_im_pane_t1

0x4dc7,	// (0x0002c6f4) list_single_graphic_2heading_pane_fp_ParamLimits

0x4dc7,	// (0x0002c6f4) list_single_graphic_2heading_pane_fp

0xeee5,	// (0x00036812) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x00036812) list_single_graphic_2heading_pane_fp_g1

0x4ddd,	// (0x0002c70a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4ddd,	// (0x0002c70a) list_single_graphic_2heading_pane_fp_g2

0xe8cb,	// (0x000361f8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe8cb,	// (0x000361f8) list_single_graphic_2heading_pane_fp_g3

0xeeba,	// (0x000367e7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x000367e7) list_single_graphic_2heading_pane_fp_g4

0x4de9,	// (0x0002c716) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4de9,	// (0x0002c716) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x0003748a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x0003748a) list_single_graphic_2heading_pane_fp_g

0xf073,	// (0x000369a0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf073,	// (0x000369a0) list_single_graphic_2heading_pane_fp_t1

0xef1d,	// (0x0003684a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x0003684a) list_single_graphic_2heading_pane_fp_t2

0xf089,	// (0x000369b6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf089,	// (0x000369b6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc38,	// (0x00037565) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc38,	// (0x00037565) list_single_graphic_2heading_pane_fp_t

0x47c4,	// (0x0002c0f1) fep_hwr_write_pane_g5_ParamLimits

0x47c4,	// (0x0002c0f1) fep_hwr_write_pane_g5

0x47d0,	// (0x0002c0fd) fep_hwr_write_pane_g6_ParamLimits

0x47d0,	// (0x0002c0fd) fep_hwr_write_pane_g6

0xb8d1,	// (0x000331fe) eswt_shell_pane_ParamLimits

0x0d63,	// (0x00028690) bg_popup_window_pane_cp18_ParamLimits

0x3427,	// (0x0002ad54) heading_pane_cp70

0x5186,	// (0x0002cab3) popup_eswt_tasktip_window_t1_ParamLimits

0xa4ed,	// (0x00031e1a) aid_touch_tab_arrow_left

0xa503,	// (0x00031e30) aid_touch_tab_arrow_right

0x8f78,	// (0x000308a5) title_pane_g3_ParamLimits

0x8f78,	// (0x000308a5) title_pane_g3

0xc65f,	// (0x00033f8c) set_value_pane_g1

0xa3d0,	// (0x00031cfd) popup_toolbar_trans_pane_ParamLimits

0xba78,	// (0x000333a5) aid_size_cell_tb_trans_pane_ParamLimits

0xc697,	// (0x00033fc4) bg_tb_trans_pane_ParamLimits

0xba8a,	// (0x000333b7) grid_tb_trans_pane_ParamLimits

0xc40b,	// (0x00033d38) cont_note_pane_ParamLimits

0xc40b,	// (0x00033d38) cont_note_pane

0xc58b,	// (0x00033eb8) cont_snote2_single_text_pane_ParamLimits

0xc58b,	// (0x00033eb8) cont_snote2_single_text_pane

0xc58b,	// (0x00033eb8) cont_snote2_single_graphic_pane_ParamLimits

0xc58b,	// (0x00033eb8) cont_snote2_single_graphic_pane

0x1405,	// (0x00028d32) cont_note_wait_pane_ParamLimits

0x1405,	// (0x00028d32) cont_note_wait_pane

0x1405,	// (0x00028d32) cont_note_image_pane_ParamLimits

0x1405,	// (0x00028d32) cont_note_image_pane

0x5395,	// (0x0002ccc2) popup_note2_window_g1_ParamLimits

0x5395,	// (0x0002ccc2) popup_note2_window_g1

0xbb33,	// (0x00033460) popup_note2_window_t1_ParamLimits

0xbb33,	// (0x00033460) popup_note2_window_t1

0xd12f,	// (0x00034a5c) popup_note2_window_t2_ParamLimits

0xd12f,	// (0x00034a5c) popup_note2_window_t2

0xd174,	// (0x00034aa1) popup_note2_window_t3_ParamLimits

0xd174,	// (0x00034aa1) popup_note2_window_t3

0x5495,	// (0x0002cdc2) popup_note2_window_t4_ParamLimits

0x5495,	// (0x0002cdc2) popup_note2_window_t4

0xc48f,	// (0x00033dbc) popup_note2_window_t5_ParamLimits

0xc48f,	// (0x00033dbc) popup_note2_window_t5

0x0004,

0xfc44,	// (0x00037571) popup_note2_window_t_ParamLimits

0xfc44,	// (0x00037571) popup_note2_window_t

0x54c4,	// (0x0002cdf1) popup_note2_image_window_g1_ParamLimits

0x54c4,	// (0x0002cdf1) popup_note2_image_window_g1

0xd1b9,	// (0x00034ae6) popup_note2_image_window_g2_ParamLimits

0xd1b9,	// (0x00034ae6) popup_note2_image_window_g2

0x0001,

0xfc4f,	// (0x0003757c) popup_note2_image_window_g_ParamLimits

0xfc4f,	// (0x0003757c) popup_note2_image_window_g

0x54e2,	// (0x0002ce0f) popup_note2_image_window_t1_ParamLimits

0x54e2,	// (0x0002ce0f) popup_note2_image_window_t1

0x54fa,	// (0x0002ce27) popup_note2_image_window_t2_ParamLimits

0x54fa,	// (0x0002ce27) popup_note2_image_window_t2

0x5512,	// (0x0002ce3f) popup_note2_image_window_t3_ParamLimits

0x5512,	// (0x0002ce3f) popup_note2_image_window_t3

0x0002,

0xfc54,	// (0x00037581) popup_note2_image_window_t_ParamLimits

0xfc54,	// (0x00037581) popup_note2_image_window_t

0x1413,	// (0x00028d40) popup_note2_wait_window_g1_ParamLimits

0x1413,	// (0x00028d40) popup_note2_wait_window_g1

0x141f,	// (0x00028d4c) popup_note2_wait_window_g2_ParamLimits

0x141f,	// (0x00028d4c) popup_note2_wait_window_g2

0x142b,	// (0x00028d58) popup_note2_wait_window_g3_ParamLimits

0x142b,	// (0x00028d58) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x0003713c) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x0003713c) popup_note2_wait_window_g

0x552e,	// (0x0002ce5b) popup_note2_wait_window_t1_ParamLimits

0x552e,	// (0x0002ce5b) popup_note2_wait_window_t1

0x554c,	// (0x0002ce79) popup_note2_wait_window_t2_ParamLimits

0x554c,	// (0x0002ce79) popup_note2_wait_window_t2

0x556a,	// (0x0002ce97) popup_note2_wait_window_t3_ParamLimits

0x556a,	// (0x0002ce97) popup_note2_wait_window_t3

0x557c,	// (0x0002cea9) popup_note2_wait_window_t4_ParamLimits

0x557c,	// (0x0002cea9) popup_note2_wait_window_t4

0x0003,

0xfc5b,	// (0x00037588) popup_note2_wait_window_t_ParamLimits

0xfc5b,	// (0x00037588) popup_note2_wait_window_t

0x558e,	// (0x0002cebb) wait_bar2_pane_ParamLimits

0x558e,	// (0x0002cebb) wait_bar2_pane

0x55a6,	// (0x0002ced3) popup_snote2_single_text_window_g1_ParamLimits

0x55a6,	// (0x0002ced3) popup_snote2_single_text_window_g1

0x55ce,	// (0x0002cefb) popup_snote2_single_text_window_t1_ParamLimits

0x55ce,	// (0x0002cefb) popup_snote2_single_text_window_t1

0x561a,	// (0x0002cf47) popup_snote2_single_text_window_t2_ParamLimits

0x561a,	// (0x0002cf47) popup_snote2_single_text_window_t2

0x5666,	// (0x0002cf93) popup_snote2_single_text_window_t3_ParamLimits

0x5666,	// (0x0002cf93) popup_snote2_single_text_window_t3

0x56a7,	// (0x0002cfd4) popup_snote2_single_text_window_t4_ParamLimits

0x56a7,	// (0x0002cfd4) popup_snote2_single_text_window_t4

0x56dd,	// (0x0002d00a) popup_snote2_single_text_window_t5_ParamLimits

0x56dd,	// (0x0002d00a) popup_snote2_single_text_window_t5

0x0004,

0xfc64,	// (0x00037591) popup_snote2_single_text_window_t_ParamLimits

0xfc64,	// (0x00037591) popup_snote2_single_text_window_t

0xd1cb,	// (0x00034af8) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1cb,	// (0x00034af8) popup_snote2_single_graphic_window_g1

0x5730,	// (0x0002d05d) popup_snote2_single_graphic_window_g2_ParamLimits

0x5730,	// (0x0002d05d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6f,	// (0x0003759c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6f,	// (0x0003759c) popup_snote2_single_graphic_window_g

0x5758,	// (0x0002d085) popup_snote2_single_graphic_window_t1_ParamLimits

0x5758,	// (0x0002d085) popup_snote2_single_graphic_window_t1

0x57a4,	// (0x0002d0d1) popup_snote2_single_graphic_window_t2_ParamLimits

0x57a4,	// (0x0002d0d1) popup_snote2_single_graphic_window_t2

0x5666,	// (0x0002cf93) popup_snote2_single_graphic_window_t3_ParamLimits

0x5666,	// (0x0002cf93) popup_snote2_single_graphic_window_t3

0x56a7,	// (0x0002cfd4) popup_snote2_single_graphic_window_t4_ParamLimits

0x56a7,	// (0x0002cfd4) popup_snote2_single_graphic_window_t4

0x56dd,	// (0x0002d00a) popup_snote2_single_graphic_window_t5_ParamLimits

0x56dd,	// (0x0002d00a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc74,	// (0x000375a1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc74,	// (0x000375a1) popup_snote2_single_graphic_window_t

0x41dc,	// (0x0002bb09) clock_nsta_pane_cp2_t1

0x41dc,	// (0x0002bb09) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x000373c8) clock_nsta_pane_cp2_t

0x88f0,	// (0x0003021d) form_field_data_wide_pane_g1_ParamLimits

0xc6a5,	// (0x00033fd2) form_field_data_wide_pane_g2_ParamLimits

0xc6a5,	// (0x00033fd2) form_field_data_wide_pane_g2

0xc6b1,	// (0x00033fde) form_field_data_wide_pane_g3_ParamLimits

0xc6b1,	// (0x00033fde) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00036f74) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00036f74) form_field_data_wide_pane_g

0xb45e,	// (0x00032d8b) grid_touch_3_pane_ParamLimits

0xb45e,	// (0x00032d8b) grid_touch_3_pane

0xd1f3,	// (0x00034b20) cell_touch_3_pane_ParamLimits

0xd1f3,	// (0x00034b20) cell_touch_3_pane

0x4738,	// (0x0002c065) cell_touch_3_pane_g1

0x4738,	// (0x0002c065) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x0003744d) cell_touch_3_pane_g

0xc4c1,	// (0x00033dee) cont_query_data_pane

0xc4c9,	// (0x00033df6) cont_query_data_pane_cp1

0x581e,	// (0x0002d14b) button_value_adjust_pane_cp7

0x5826,	// (0x0002d153) query_popup_pane_cp3

0xcb4a,	// (0x00034477) bg_popup_sub_pane_cp22_ParamLimits

0x989b,	// (0x000311c8) navi_navi_volume_pane_cp2

0x98aa,	// (0x000311d7) popup_side_volume_key_window_g2

0x98b9,	// (0x000311e6) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0003700a) popup_side_volume_key_window_g

0x98c8,	// (0x000311f5) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00037011) popup_side_volume_key_window_t

0x998d,	// (0x000312ba) popup_side_volume_key_window_ParamLimits

0x86bf,	// (0x0002ffec) list_double_graphic_pane_g4_ParamLimits

0x86bf,	// (0x0002ffec) list_double_graphic_pane_g4

0xb21c,	// (0x00032b49) list_single_2heading_msg_pane_ParamLimits

0xb21c,	// (0x00032b49) list_single_2heading_msg_pane

0x8b7c,	// (0x000304a9) list_single_2heading_msg_pane_g1_ParamLimits

0x8b7c,	// (0x000304a9) list_single_2heading_msg_pane_g1

0x8b88,	// (0x000304b5) list_single_2heading_msg_pane_g2_ParamLimits

0x8b88,	// (0x000304b5) list_single_2heading_msg_pane_g2

0x8b9b,	// (0x000304c8) list_single_2heading_msg_pane_g3_ParamLimits

0x8b9b,	// (0x000304c8) list_single_2heading_msg_pane_g3

0xf0a9,	// (0x000369d6) list_single_2heading_msg_pane_g4_ParamLimits

0xf0a9,	// (0x000369d6) list_single_2heading_msg_pane_g4

0x0003,

0xfc7f,	// (0x000375ac) list_single_2heading_msg_pane_g_ParamLimits

0xfc7f,	// (0x000375ac) list_single_2heading_msg_pane_g

0x8ba7,	// (0x000304d4) list_single_2heading_msg_pane_t1_ParamLimits

0x8ba7,	// (0x000304d4) list_single_2heading_msg_pane_t1

0x8bcf,	// (0x000304fc) list_single_2heading_msg_pane_t2_ParamLimits

0x8bcf,	// (0x000304fc) list_single_2heading_msg_pane_t2

0x8c3a,	// (0x00030567) list_single_2heading_msg_pane_t3_ParamLimits

0x8c3a,	// (0x00030567) list_single_2heading_msg_pane_t3

0xf0c1,	// (0x000369ee) list_single_2heading_msg_pane_t4_ParamLimits

0xf0c1,	// (0x000369ee) list_single_2heading_msg_pane_t4

0x0003,

0xfc88,	// (0x000375b5) list_single_2heading_msg_pane_t_ParamLimits

0xfc88,	// (0x000375b5) list_single_2heading_msg_pane_t

0xc28f,	// (0x00033bbc) title_pane_g4_ParamLimits

0xc28f,	// (0x00033bbc) title_pane_g4

0xf151,	// (0x00036a7e) title_pane_stacon_g3_ParamLimits

0xf151,	// (0x00036a7e) title_pane_stacon_g3

0x5358,	// (0x0002cc85) list_single_2graphic_im_pane_g4_ParamLimits

0x5358,	// (0x0002cc85) list_single_2graphic_im_pane_g4

0xaea6,	// (0x000327d3) popup_side_volume_key_window_cp

0x3a0e,	// (0x0002b33b) main_idle_act2_pane_t1

0x0ca7,	// (0x000285d4) toolbar_button_pane_g10

0x9584,	// (0x00030eb1) popup_toolbar_window_cp1

0x41cd,	// (0x0002bafa) clock_nsta_pane_cp_t1

0x41cd,	// (0x0002bafa) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x000373c3) clock_nsta_pane_cp_t

0x989b,	// (0x000311c8) navi_navi_volume_pane_cp2_ParamLimits

0xf325,	// (0x00036c52) popup_side_volume_key_window_g1_ParamLimits

0x98aa,	// (0x000311d7) popup_side_volume_key_window_g2_ParamLimits

0x98b9,	// (0x000311e6) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0003700a) popup_side_volume_key_window_g_ParamLimits

0x1931,	// (0x0002925e) fep_hwr_aid_pane

0xd0ef,	// (0x00034a1c) bg_fep_hwr_top_pane_g4_ParamLimits

0x4794,	// (0x0002c0c1) fep_hwr_top_pane_g1_ParamLimits

0x47a6,	// (0x0002c0d3) fep_hwr_top_pane_g2_ParamLimits

0x19ea,	// (0x00029317) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00037418) fep_hwr_top_pane_g_ParamLimits

0x19ff,	// (0x0002932c) fep_hwr_top_text_pane_ParamLimits

0x2fb4,	// (0x0002a8e1) aid_touch_tab_arrow_arrow_2

0x2fbd,	// (0x0002a8ea) aid_touch_tab_arrow_left_2

0x1945,	// (0x00029272) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x197c,	// (0x000292a9) fep_hwr_prediction_pane

0x48ff,	// (0x0002c22c) fep_vkb_prediction_pane

0xb809,	// (0x00033136) fep_vkb_side_pane_g3_ParamLimits

0xb809,	// (0x00033136) fep_vkb_side_pane_g3

0x49a8,	// (0x0002c2d5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4e3d,	// (0x0002c76a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4e4a,	// (0x0002c777) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb95,	// (0x000374c2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x584b,	// (0x0002d178) fep_hwr_prediction_pane_g1

0x1c8c,	// (0x000295b9) fep_hwr_prediction_pane_g2

0x1c94,	// (0x000295c1) fep_hwr_prediction_pane_g3

0x1c9c,	// (0x000295c9) fep_hwr_prediction_pane_g4

0x0003,

0xfc91,	// (0x000375be) fep_hwr_prediction_pane_g

0x584b,	// (0x0002d178) fep_vkb_prediction_pane_g1

0x5855,	// (0x0002d182) fep_vkb_prediction_pane_g2

0x585d,	// (0x0002d18a) fep_vkb_prediction_pane_g3

0x5865,	// (0x0002d192) fep_vkb_prediction_pane_g4

0x0003,

0xfc9a,	// (0x000375c7) fep_vkb_prediction_pane_g

0xb037,	// (0x00032964) slider_set_pane_g3

0xb04b,	// (0x00032978) slider_set_pane_g4

0xb063,	// (0x00032990) slider_set_pane_g5

0xb037,	// (0x00032964) slider_set_pane_g6

0xb079,	// (0x000329a6) slider_set_pane_g7

0x3640,	// (0x0002af6d) slider_form_pane_g3

0x3649,	// (0x0002af76) slider_form_pane_g4

0x3651,	// (0x0002af7e) slider_form_pane_g5

0x3640,	// (0x0002af6d) slider_form_pane_g6

0xb200,	// (0x00032b2d) slider_form_pane_g7

0x3cba,	// (0x0002b5e7) slider_set_pane_vc_g3

0x3cc3,	// (0x0002b5f0) slider_set_pane_vc_g4

0x3ccc,	// (0x0002b5f9) slider_set_pane_vc_g5

0x3cba,	// (0x0002b5e7) slider_set_pane_vc_g6

0x3cd5,	// (0x0002b602) slider_set_pane_vc_g7

0x3e8b,	// (0x0002b7b8) slider_form_pane_vc_g1

0x3e94,	// (0x0002b7c1) slider_form_pane_vc_g2

0x3e9d,	// (0x0002b7ca) slider_form_pane_vc_g3

0x3e8b,	// (0x0002b7b8) slider_form_pane_vc_g4

0x3ea6,	// (0x0002b7d3) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x00037395) slider_form_pane_vc_g

0xc271,	// (0x00033b9e) main_idle_act3_pane

0x586d,	// (0x0002d19a) ai3_links_pane

0xd23c,	// (0x00034b69) popup_ai3_data_window_ParamLimits

0xd23c,	// (0x00034b69) popup_ai3_data_window

0xc271,	// (0x00033b9e) grid_ai3_links_pane

0xd254,	// (0x00034b81) cell_ai3_links_pane_ParamLimits

0xd254,	// (0x00034b81) cell_ai3_links_pane

0x58a6,	// (0x0002d1d3) bg_popup_sub_pane_cp11

0x58b3,	// (0x0002d1e0) cell_ai3_links_pane_g1

0xc271,	// (0x00033b9e) bg_popup_sub_pane_cp12

0x58d8,	// (0x0002d205) heading_ai3_data_pane

0x58e0,	// (0x0002d20d) list_ai3_gene_pane

0x58ec,	// (0x0002d219) popup_ai3_data_window_g1

0x58f4,	// (0x0002d221) heading_ai3_data_pane_g1

0x58fc,	// (0x0002d229) heading_ai3_data_pane_t1

0xd26e,	// (0x00034b9b) list_double_ai3_gene_pane_ParamLimits

0xd26e,	// (0x00034b9b) list_double_ai3_gene_pane

0x5917,	// (0x0002d244) list_single_ai3_gene_pane_ParamLimits

0x5917,	// (0x0002d244) list_single_ai3_gene_pane

0x46fd,	// (0x0002c02a) list_highlight_pane_cp7_ParamLimits

0x46fd,	// (0x0002c02a) list_highlight_pane_cp7

0x5924,	// (0x0002d251) list_single_a13_gene_pane_t1_ParamLimits

0x5924,	// (0x0002d251) list_single_a13_gene_pane_t1

0x593b,	// (0x0002d268) list_single_ai3_gene_pane_g1

0x5944,	// (0x0002d271) list_single_ai3_gene_pane_g2

0x0001,

0xfca3,	// (0x000375d0) list_single_ai3_gene_pane_g

0x594c,	// (0x0002d279) list_double_ai3_gene_pane_g1_ParamLimits

0x594c,	// (0x0002d279) list_double_ai3_gene_pane_g1

0xd27b,	// (0x00034ba8) list_double_ai3_gene_pane_t1_ParamLimits

0xd27b,	// (0x00034ba8) list_double_ai3_gene_pane_t1

0x5974,	// (0x0002d2a1) list_double_ai3_gene_pane_t2_ParamLimits

0x5974,	// (0x0002d2a1) list_double_ai3_gene_pane_t2

0x5989,	// (0x0002d2b6) list_double_ai3_gene_pane_t3_ParamLimits

0x5989,	// (0x0002d2b6) list_double_ai3_gene_pane_t3

0x0002,

0xfca8,	// (0x000375d5) list_double_ai3_gene_pane_t_ParamLimits

0xfca8,	// (0x000375d5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf09f,	// (0x000369cc) aid_size_min_col_2

0xd226,	// (0x00034b53) aid_size_min_msg_ParamLimits

0xd226,	// (0x00034b53) aid_size_min_msg

0xb81d,	// (0x0003314a) fep_vkb_top_text_pane_g2_ParamLimits

0xb81d,	// (0x0003314a) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x00037448) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x00037448) fep_vkb_top_text_pane_g

0xc271,	// (0x00033b9e) main_hc_apps_shell_pane

0x59a6,	// (0x0002d2d3) grid_hc_apps_pane_ParamLimits

0x59a6,	// (0x0002d2d3) grid_hc_apps_pane

0x59b8,	// (0x0002d2e5) list_hc_apps_pane

0x59c0,	// (0x0002d2ed) scroll_pane_cp37_ParamLimits

0x59c0,	// (0x0002d2ed) scroll_pane_cp37

0xd297,	// (0x00034bc4) cell_hc_apps_pane_ParamLimits

0xd297,	// (0x00034bc4) cell_hc_apps_pane

0xd355,	// (0x00034c82) cell_hc_apps_pane_g1_ParamLimits

0xd355,	// (0x00034c82) cell_hc_apps_pane_g1

0x5aaa,	// (0x0002d3d7) cell_hc_apps_pane_g2_ParamLimits

0x5aaa,	// (0x0002d3d7) cell_hc_apps_pane_g2

0x5ac6,	// (0x0002d3f3) cell_hc_apps_pane_g3_ParamLimits

0x5ac6,	// (0x0002d3f3) cell_hc_apps_pane_g3

0x0002,

0xfcaf,	// (0x000375dc) cell_hc_apps_pane_g_ParamLimits

0xfcaf,	// (0x000375dc) cell_hc_apps_pane_g

0xd381,	// (0x00034cae) cell_hc_apps_pane_t1_ParamLimits

0xd381,	// (0x00034cae) cell_hc_apps_pane_t1

0xc40b,	// (0x00033d38) grid_highlight_pane_cp10_ParamLimits

0xc40b,	// (0x00033d38) grid_highlight_pane_cp10

0xd3bf,	// (0x00034cec) list_single_hc_apps_pane_ParamLimits

0xd3bf,	// (0x00034cec) list_single_hc_apps_pane

0xd3ef,	// (0x00034d1c) list_single_hc_apps_pane_g1

0x8ca8,	// (0x000305d5) list_single_hc_apps_pane_g2

0x0001,

0xfcb6,	// (0x000375e3) list_single_hc_apps_pane_g

0x8cc1,	// (0x000305ee) list_single_hc_apps_pane_g2_copy1

0x8cdd,	// (0x0003060a) list_single_hc_apps_pane_t1

0xc2e1,	// (0x00033c0e) bg_set_opt_pane_cp_ParamLimits

0x904c,	// (0x00030979) setting_slider_pane_t1_ParamLimits

0x9065,	// (0x00030992) setting_slider_pane_t2_ParamLimits

0x907f,	// (0x000309ac) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00036e66) setting_slider_pane_t_ParamLimits

0x9097,	// (0x000309c4) slider_set_pane_ParamLimits

0x0062,	// (0x0002798f) control_pane_g5_ParamLimits

0x0062,	// (0x0002798f) control_pane_g5

0xb02a,	// (0x00032957) slider_set_pane_g1_ParamLimits

0x175d,	// (0x0002908a) slider_set_pane_g2_ParamLimits

0xb037,	// (0x00032964) slider_set_pane_g3_ParamLimits

0xb04b,	// (0x00032978) slider_set_pane_g4_ParamLimits

0xb063,	// (0x00032990) slider_set_pane_g5_ParamLimits

0xb037,	// (0x00032964) slider_set_pane_g6_ParamLimits

0xb079,	// (0x000329a6) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00037258) slider_set_pane_g_ParamLimits

0xcdf8,	// (0x00034725) navi_icon_text_pane_ParamLimits

0xa4b6,	// (0x00031de3) aid_fill_nsta_2_ParamLimits

0xa4ed,	// (0x00031e1a) aid_touch_tab_arrow_left_ParamLimits

0xa503,	// (0x00031e30) aid_touch_tab_arrow_right_ParamLimits

0xa59e,	// (0x00031ecb) clock_nsta_pane_ParamLimits

0x2f96,	// (0x0002a8c3) navi_icon_pane_g1_ParamLimits

0x2fa2,	// (0x0002a8cf) navi_text_pane_t1_ParamLimits

0x42dd,	// (0x0002bc0a) navi_icon_text_pane_g1_ParamLimits

0x42e9,	// (0x0002bc16) navi_icon_text_pane_t1_ParamLimits

0xd3ef,	// (0x00034d1c) list_single_hc_apps_pane_g1_ParamLimits

0x8ca8,	// (0x000305d5) list_single_hc_apps_pane_g2_ParamLimits

0xfcb6,	// (0x000375e3) list_single_hc_apps_pane_g_ParamLimits

0x8cc1,	// (0x000305ee) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8cdd,	// (0x0003060a) list_single_hc_apps_pane_t1_ParamLimits

0x8e7d,	// (0x000307aa) popup_toolbar2_fixed_window_ParamLimits

0x8e7d,	// (0x000307aa) popup_toolbar2_fixed_window

0xa3c6,	// (0x00031cf3) popup_toolbar2_float_window

0xc271,	// (0x00033b9e) bg_popup_sub_pane_cp27

0x5ba4,	// (0x0002d4d1) grid_toolbar2_float_pane

0xc271,	// (0x00033b9e) bg_popup_sub_pane_cp26

0x5ba4,	// (0x0002d4d1) grid_toolbar2_fixed_pane

0xd408,	// (0x00034d35) cell_toolbar2_fixed_pane_ParamLimits

0xd408,	// (0x00034d35) cell_toolbar2_fixed_pane

0xd422,	// (0x00034d4f) cell_toolbar2_fixed_pane_g1

0x0baf,	// (0x000284dc) toolbar2_fixed_button_pane

0x0c5f,	// (0x0002858c) toolbar2_fixed_button_pane_g1

0x0c67,	// (0x00028594) toolbar2_fixed_button_pane_g2

0x0c6f,	// (0x0002859c) toolbar2_fixed_button_pane_g3

0x0c77,	// (0x000285a4) toolbar2_fixed_button_pane_g4

0x0c7f,	// (0x000285ac) toolbar2_fixed_button_pane_g5

0x0c87,	// (0x000285b4) toolbar2_fixed_button_pane_g6

0x0c8f,	// (0x000285bc) toolbar2_fixed_button_pane_g7

0x0c97,	// (0x000285c4) toolbar2_fixed_button_pane_g8

0x0c9f,	// (0x000285cc) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x0003715a) toolbar2_fixed_button_pane_g

0x5bc5,	// (0x0002d4f2) cell_toolbar2_float_pane_ParamLimits

0x5bc5,	// (0x0002d4f2) cell_toolbar2_float_pane

0x5bd6,	// (0x0002d503) cell_toolbar2_float_pane_g1

0x0baf,	// (0x000284dc) toolbar2_fixed_button_pane_cp

0xb705,	// (0x00033032) fep_vkb_accented_list_pane_ParamLimits

0xb705,	// (0x00033032) fep_vkb_accented_list_pane

0x1b4d,	// (0x0002947a) bg_popup_fep_shadow_pane_g9

0xcf53,	// (0x00034880) bg_popup_fep_shadow_pane_cp3

0xc7b0,	// (0x000340dd) list_accented_list_pane

0x5bdf,	// (0x0002d50c) list_single_accented_list_pane_ParamLimits

0x5bdf,	// (0x0002d50c) list_single_accented_list_pane

0xcf53,	// (0x00034880) list_highlight_pane_cp10

0x5bf0,	// (0x0002d51d) list_single_accented_list_pane_t1

0xa2f0,	// (0x00031c1d) popup_slider_window_ParamLimits

0xa2f0,	// (0x00031c1d) popup_slider_window

0x582e,	// (0x0002d15b) aid_indentation_list_msg

0xd513,	// (0x00034e40) bg_popup_window_pane_cp19

0x5d16,	// (0x0002d643) popup_slider_window_g1

0x5d32,	// (0x0002d65f) popup_slider_window_g2

0x5d4e,	// (0x0002d67b) popup_slider_window_g3

0x0005,

0xfcbb,	// (0x000375e8) popup_slider_window_g

0x5db4,	// (0x0002d6e1) popup_slider_window_t1

0x5e28,	// (0x0002d755) small_volume_slider_vertical_pane

0x4738,	// (0x0002c065) small_volume_slider_vertical_pane_g1

0x4738,	// (0x0002c065) small_volume_slider_vertical_pane_g2

0x5e44,	// (0x0002d771) small_volume_slider_vertical_pane_g3

0x0002,

0xfccd,	// (0x000375fa) small_volume_slider_vertical_pane_g

0x8dcb,	// (0x000306f8) area_side_right_pane_ParamLimits

0x8dcb,	// (0x000306f8) area_side_right_pane

0xbb78,	// (0x000334a5) aid_size_side_button_ParamLimits

0xbb78,	// (0x000334a5) aid_size_side_button

0xbb91,	// (0x000334be) grid_sctrl_middle_pane_ParamLimits

0xbb91,	// (0x000334be) grid_sctrl_middle_pane

0x1cd7,	// (0x00029604) sctrl_sk_bottom_pane

0x1ce8,	// (0x00029615) sctrl_sk_top_pane

0x1cfa,	// (0x00029627) aid_touch_sctrl_top

0xc40b,	// (0x00033d38) bg_sctrl_sk_pane_ParamLimits

0xc40b,	// (0x00033d38) bg_sctrl_sk_pane

0x1d07,	// (0x00029634) sctrl_sk_top_pane_g1

0x1d14,	// (0x00029641) sctrl_sk_top_pane_t1

0x1cfa,	// (0x00029627) aid_touch_sctrl_bottom

0xc40b,	// (0x00033d38) bg_sctrl_sk_pane_cp_ParamLimits

0xc40b,	// (0x00033d38) bg_sctrl_sk_pane_cp

0x1d2f,	// (0x0002965c) sctrl_sk_bottom_pane_g1

0x1d14,	// (0x00029641) sctrl_sk_bottom_pane_t1

0xbbab,	// (0x000334d8) cell_sctrl_middle_pane_ParamLimits

0xbbab,	// (0x000334d8) cell_sctrl_middle_pane

0xbbbc,	// (0x000334e9) aid_touch_sctrl_middle_ParamLimits

0xbbbc,	// (0x000334e9) aid_touch_sctrl_middle

0xbbc9,	// (0x000334f6) bg_sctrl_middle_pane_ParamLimits

0xbbc9,	// (0x000334f6) bg_sctrl_middle_pane

0x5ed5,	// (0x0002d802) cell_sctrl_middle_pane_g1_ParamLimits

0x5ed5,	// (0x0002d802) cell_sctrl_middle_pane_g1

0xbbd7,	// (0x00033504) cell_sctrl_middle_pane_g2_ParamLimits

0xbbd7,	// (0x00033504) cell_sctrl_middle_pane_g2

0x0001,

0xfcd9,	// (0x00037606) cell_sctrl_middle_pane_g_ParamLimits

0xfcd9,	// (0x00037606) cell_sctrl_middle_pane_g

0x0c5f,	// (0x0002858c) bg_sctrl_middle_pane_g1

0x0c67,	// (0x00028594) bg_sctrl_middle_pane_g2

0x0c6f,	// (0x0002859c) bg_sctrl_middle_pane_g3

0x0c77,	// (0x000285a4) bg_sctrl_middle_pane_g4

0x0c7f,	// (0x000285ac) bg_sctrl_middle_pane_g5

0x0c87,	// (0x000285b4) bg_sctrl_middle_pane_g6

0x0c8f,	// (0x000285bc) bg_sctrl_middle_pane_g7

0x0c97,	// (0x000285c4) bg_sctrl_middle_pane_g8

0x0007,

0xfcde,	// (0x0003760b) bg_sctrl_middle_pane_g

0x0c9f,	// (0x000285cc) bg_sctrl_middle_pane_g8_copy1

0x0c5f,	// (0x0002858c) bg_sctrl_sk_pane_g1

0x0c67,	// (0x00028594) bg_sctrl_sk_pane_g2

0x0c6f,	// (0x0002859c) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x0003715a) bg_sctrl_sk_pane_g

0xc5d9,	// (0x00033f06) aid_size_touch_scroll_bar

0x0c77,	// (0x000285a4) bg_sctrl_sk_pane_g4

0x0c7f,	// (0x000285ac) bg_sctrl_sk_pane_g5

0x0c87,	// (0x000285b4) bg_sctrl_sk_pane_g6

0x0c8f,	// (0x000285bc) bg_sctrl_sk_pane_g7

0x0c97,	// (0x000285c4) bg_sctrl_sk_pane_g8

0x0c9f,	// (0x000285cc) bg_sctrl_sk_pane_g9

0x0229,	// (0x00027b56) popup_fep_china_hwr2_fs_candidate_window

0x9db6,	// (0x000316e3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9db6,	// (0x000316e3) popup_fep_china_hwr2_fs_control_window

0x49a8,	// (0x0002c2d5) sctrl_sk_top_pane_g2

0x0001,

0xfcd4,	// (0x00037601) sctrl_sk_top_pane_g

0xd5cb,	// (0x00034ef8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd5cb,	// (0x00034ef8) aid_fep_china_hwr2_fs_cell

0xd5df,	// (0x00034f0c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd5df,	// (0x00034f0c) bg_popup_fep_shadow_pane_cp4

0xd5f6,	// (0x00034f23) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd5f6,	// (0x00034f23) bg_popup_fep_shadow_pane_cp5

0xd608,	// (0x00034f35) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd608,	// (0x00034f35) popup_fep_china_hwr2_fs_control_bar_grid

0xd61c,	// (0x00034f49) popup_fep_china_hwr2_fs_control_funtion_grid

0x5ea9,	// (0x0002d7d6) aid_fep_china_hwr2_fs_candi_cell

0xc271,	// (0x00033b9e) bg_popup_fep_shadow_pane_cp6

0x5eb3,	// (0x0002d7e0) popup_fep_china_hwr2_fs_candidate_grid

0xd624,	// (0x00034f51) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd624,	// (0x00034f51) cell_fep_china_hwr2_fs_funtion_grid

0x4738,	// (0x0002c065) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5ed5,	// (0x0002d802) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5ed5,	// (0x0002d802) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5ee3,	// (0x0002d810) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5ee3,	// (0x0002d810) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcef,	// (0x0003761c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcef,	// (0x0003761c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd63c,	// (0x00034f69) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd63c,	// (0x00034f69) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd651,	// (0x00034f7e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd651,	// (0x00034f7e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf4,	// (0x00037621) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf4,	// (0x00037621) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f2a,	// (0x0002d857) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f32,	// (0x0002d85f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f3a,	// (0x0002d867) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf9,	// (0x00037626) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f42,	// (0x0002d86f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f42,	// (0x0002d86f) cell_fep_china_hwr2_fs_candidate_grid

0x5f5b,	// (0x0002d888) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f63,	// (0x0002d890) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4738,	// (0x0002c065) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4738,	// (0x0002c065) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x0003744d) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f6b,	// (0x0002d898) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0828,	// (0x00028155) clock_nsta_pane_cp_24_ParamLimits

0x0828,	// (0x00028155) clock_nsta_pane_cp_24

0x08a6,	// (0x000281d3) indicator_nsta_pane_cp_24_ParamLimits

0x08a6,	// (0x000281d3) indicator_nsta_pane_cp_24

0x2e12,	// (0x0002a73f) heading_pane_g1

0x0001,

0xf892,	// (0x000371bf) heading_pane_g

0x3857,	// (0x0002b184) grid_sct_catagory_button_pane

0x3887,	// (0x0002b1b4) scroll_pane_cp5_ParamLimits

0x432b,	// (0x0002bc58) button_value_adjust_pane_cp5_ParamLimits

0x432b,	// (0x0002bc58) button_value_adjust_pane_cp5

0x440a,	// (0x0002bd37) form2_midp_time_pane_ParamLimits

0x5f79,	// (0x0002d8a6) cell_sct_catagory_button_pane_ParamLimits

0x5f79,	// (0x0002d8a6) cell_sct_catagory_button_pane

0x46fd,	// (0x0002c02a) bg_button_pane_cp01_ParamLimits

0x46fd,	// (0x0002c02a) bg_button_pane_cp01

0x4738,	// (0x0002c065) cell_sct_catagory_button_pane_g1

0xa369,	// (0x00031c96) popup_tb_extension_window

0xd66d,	// (0x00034f9a) aid_size_cell_ext_ParamLimits

0xd66d,	// (0x00034f9a) aid_size_cell_ext

0xc58b,	// (0x00033eb8) bg_tb_trans_pane_cp1_ParamLimits

0xc58b,	// (0x00033eb8) bg_tb_trans_pane_cp1

0xd693,	// (0x00034fc0) grid_tb_ext_pane_ParamLimits

0xd693,	// (0x00034fc0) grid_tb_ext_pane

0xd6d2,	// (0x00034fff) cell_tb_ext_pane_ParamLimits

0xd6d2,	// (0x00034fff) cell_tb_ext_pane

0xd6fa,	// (0x00035027) cell_tb_ext_pane_g1_ParamLimits

0xd6fa,	// (0x00035027) cell_tb_ext_pane_g1

0x600f,	// (0x0002d93c) cell_tb_ext_pane_t1

0xc40b,	// (0x00033d38) list_highlight_pane_cp11_ParamLimits

0xc40b,	// (0x00033d38) list_highlight_pane_cp11

0x8e92,	// (0x000307bf) popup_uni_indicator_window_ParamLimits

0x8e92,	// (0x000307bf) popup_uni_indicator_window

0xc697,	// (0x00033fc4) bg_popup_sub_pane_cp14

0xd717,	// (0x00035044) list_uniindi_pane

0xd723,	// (0x00035050) uniindi_top_pane

0xc40b,	// (0x00033d38) bg_uniindi_top_pane

0xd742,	// (0x0003506f) uniindi_top_pane_g1

0xd758,	// (0x00035085) uniindi_top_pane_g2

0x0003,

0xfd00,	// (0x0003762d) uniindi_top_pane_g

0xd775,	// (0x000350a2) uniindi_top_pane_t1

0x60c0,	// (0x0002d9ed) list_single_uniindi_pane_ParamLimits

0x60c0,	// (0x0002d9ed) list_single_uniindi_pane

0x4738,	// (0x0002c065) bg_uniindi_top_pane_g1

0x60d3,	// (0x0002da00) list_single_uniindi_pane_g1

0x60e6,	// (0x0002da13) list_single_uniindi_pane_t1

0xc271,	// (0x00033b9e) control_bg_pane

0x610b,	// (0x0002da38) bg_sctrl_sk_pane_cp1

0x6114,	// (0x0002da41) bg_sctrl_sk_pane_cp2

0x611d,	// (0x0002da4a) control_bg_pane_g1

0x6126,	// (0x0002da53) control_bg_pane_g2

0x0001,

0xfd09,	// (0x00037636) control_bg_pane_g

0x4171,	// (0x0002ba9e) cell_indicator_nsta_pane_g1_ParamLimits

0xb49b,	// (0x00032dc8) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x000373b1) cell_indicator_nsta_pane_g_ParamLimits

0xeea7,	// (0x000367d4) form2_midp_time_pane_t1_ParamLimits

0x1923,	// (0x00029250) main_idle_act4_pane_ParamLimits

0x1923,	// (0x00029250) main_idle_act4_pane

0xa369,	// (0x00031c96) popup_tb_extension_window_ParamLimits

0xd6b8,	// (0x00034fe5) tb_ext_find_pane_ParamLimits

0xd6b8,	// (0x00034fe5) tb_ext_find_pane

0x612f,	// (0x0002da5c) ai_gene_pane_1_cp1

0xcfd4,	// (0x00034901) ai_gene_pane_2_cp1

0xd79f,	// (0x000350cc) list_single_idle_plugin_calendar_pane

0x6140,	// (0x0002da6d) list_single_idle_plugin_notification_pane

0x6149,	// (0x0002da76) list_single_idle_plugin_player_pane

0xd7a8,	// (0x000350d5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd7a8,	// (0x000350d5) list_single_idle_plugin_shortcut_pane

0xd7d0,	// (0x000350fd) main_idle_act4_pane_t1

0xd7e7,	// (0x00035114) main_idle_act4_pane_t2

0x0001,

0xfd0e,	// (0x0003763b) main_idle_act4_pane_t

0xd7fe,	// (0x0003512b) middle_sk_idle_act4_pane_ParamLimits

0xd7fe,	// (0x0003512b) middle_sk_idle_act4_pane

0xd81a,	// (0x00035147) popup_clock_digital_analogue_window_cp2

0xd846,	// (0x00035173) shortcut_wheel_idle_act4_pane_ParamLimits

0xd846,	// (0x00035173) shortcut_wheel_idle_act4_pane

0x4738,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g1

0x4738,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g2

0x4738,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g3

0x4738,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g4

0x4738,	// (0x0002c065) shortcut_wheel_idle_act4_pane_g5

0x61dc,	// (0x0002db09) shortcut_wheel_idle_act4_pane_g6

0x61e4,	// (0x0002db11) shortcut_wheel_idle_act4_pane_g7

0x61ec,	// (0x0002db19) shortcut_wheel_idle_act4_pane_g8

0x61f4,	// (0x0002db21) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd13,	// (0x00037640) shortcut_wheel_idle_act4_pane_g

0xd0ef,	// (0x00034a1c) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0ef,	// (0x00034a1c) middle_sk_idle_act4_pane_g1

0xd8c3,	// (0x000351f0) middle_sk_idle_act4_pane_g2_ParamLimits

0xd8c3,	// (0x000351f0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd36,	// (0x00037663) middle_sk_idle_act4_pane_g_ParamLimits

0xfd36,	// (0x00037663) middle_sk_idle_act4_pane_g

0xd8db,	// (0x00035208) middle_sk_idle_act4_pane_t1_ParamLimits

0xd8db,	// (0x00035208) middle_sk_idle_act4_pane_t1

0xd90a,	// (0x00035237) grid_ai_shortcut_pane_ParamLimits

0xd90a,	// (0x00035237) grid_ai_shortcut_pane

0xd927,	// (0x00035254) list_highlight_pane_cp16_ParamLimits

0xd927,	// (0x00035254) list_highlight_pane_cp16

0xd934,	// (0x00035261) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd934,	// (0x00035261) list_single_idle_plugin_shortcut_pane_g1

0xd940,	// (0x0003526d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd940,	// (0x0003526d) list_single_idle_plugin_shortcut_pane_g2

0xd95c,	// (0x00035289) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd95c,	// (0x00035289) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3b,	// (0x00037668) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3b,	// (0x00037668) list_single_idle_plugin_shortcut_pane_g

0xd971,	// (0x0003529e) cell_ai_shortcut_pane_ParamLimits

0xd971,	// (0x0003529e) cell_ai_shortcut_pane

0xd987,	// (0x000352b4) cell_ai_shortcut_pane_g1_ParamLimits

0xd987,	// (0x000352b4) cell_ai_shortcut_pane_g1

0x612f,	// (0x0002da5c) ai_gene_pane_1_cp2

0x6324,	// (0x0002dc51) ai_gene_pane_2_cp2

0x632c,	// (0x0002dc59) list_highlight_pane_cp15

0xd9a9,	// (0x000352d6) list_single_idle_plugin_calendar_pane_g1

0x632c,	// (0x0002dc59) list_highlight_pane_cp17

0x633d,	// (0x0002dc6a) list_single_idle_plugin_calendar_pane_g1_copy1

0x6345,	// (0x0002dc72) list_single_idle_plugin_player_pane_g1

0x3ab0,	// (0x0002b3dd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd42,	// (0x0003766f) list_single_idle_plugin_player_pane_g

0x634d,	// (0x0002dc7a) list_single_idle_plugin_player_pane_t1

0x635b,	// (0x0002dc88) list_single_idle_plugin_player_pane_t2

0x6369,	// (0x0002dc96) list_single_idle_plugin_player_pane_t3

0x6377,	// (0x0002dca4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd47,	// (0x00037674) list_single_idle_plugin_player_pane_t

0x6385,	// (0x0002dcb2) wait_bar_pane_cp15

0x638d,	// (0x0002dcba) grid_ai_notification_pane

0x3ab0,	// (0x0002b3dd) list_single_idle_plugin_notification_pane_g1

0xd9b1,	// (0x000352de) cell_ai_notification_pane_ParamLimits

0xd9b1,	// (0x000352de) cell_ai_notification_pane

0x63a3,	// (0x0002dcd0) cell_ai_notification_pane_g1

0x63ab,	// (0x0002dcd8) cell_ai_notification_pane_t1

0xd9be,	// (0x000352eb) tb_ext_find_button_pane

0xd9c6,	// (0x000352f3) tb_ext_find_pane_g1

0xd9ce,	// (0x000352fb) tb_ext_find_pane_t1

0xcae9,	// (0x00034416) tb_ext_find_button_pane_g1

0xd9dc,	// (0x00035309) tb_ext_find_button_pane_g2

0x0001,

0xfd50,	// (0x0003767d) tb_ext_find_button_pane_g

0xd7d0,	// (0x000350fd) main_idle_act4_pane_t1_ParamLimits

0xd7e7,	// (0x00035114) main_idle_act4_pane_t2_ParamLimits

0xfd0e,	// (0x0003763b) main_idle_act4_pane_t_ParamLimits

0xd81a,	// (0x00035147) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd832,	// (0x0003515f) sat_plugin_idle_act4_pane_ParamLimits

0xd832,	// (0x0003515f) sat_plugin_idle_act4_pane

0xd9e5,	// (0x00035312) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9e5,	// (0x00035312) sat_plugin_idle_act4_pane_t1

0xd9fd,	// (0x0003532a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9fd,	// (0x0003532a) sat_plugin_idle_act4_pane_t2

0xda15,	// (0x00035342) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda15,	// (0x00035342) sat_plugin_idle_act4_pane_t3

0xda2d,	// (0x0003535a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda2d,	// (0x0003535a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd55,	// (0x00037682) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd55,	// (0x00037682) sat_plugin_idle_act4_pane_t

0x8e0d,	// (0x0003073a) popup_battery_window_ParamLimits

0x8e0d,	// (0x0003073a) popup_battery_window

0xc40b,	// (0x00033d38) bg_popup_sub_pane_cp25_ParamLimits

0xc40b,	// (0x00033d38) bg_popup_sub_pane_cp25

0x642c,	// (0x0002dd59) popup_battery_window_g1_ParamLimits

0x642c,	// (0x0002dd59) popup_battery_window_g1

0x6438,	// (0x0002dd65) popup_battery_window_t1_ParamLimits

0x6438,	// (0x0002dd65) popup_battery_window_t1

0x644a,	// (0x0002dd77) popup_battery_window_t2_ParamLimits

0x644a,	// (0x0002dd77) popup_battery_window_t2

0x0001,

0xfd5e,	// (0x0003768b) popup_battery_window_t_ParamLimits

0xfd5e,	// (0x0003768b) popup_battery_window_t

0x99ec,	// (0x00031319) midp_canvas_pane_ParamLimits

0x9a5e,	// (0x0003138b) midp_keypad_pane_ParamLimits

0x9a5e,	// (0x0003138b) midp_keypad_pane

0xc7d9,	// (0x00034106) main_midp_pane_ParamLimits

0xb4a8,	// (0x00032dd5) signal_pane_g2_cp_ParamLimits

0xda45,	// (0x00035372) aid_size_cell_midp_keypad_ParamLimits

0xda45,	// (0x00035372) aid_size_cell_midp_keypad

0xda63,	// (0x00035390) midp_keyp_game_grid_pane_ParamLimits

0xda63,	// (0x00035390) midp_keyp_game_grid_pane

0xda8a,	// (0x000353b7) midp_keyp_rocker_pane_ParamLimits

0xda8a,	// (0x000353b7) midp_keyp_rocker_pane

0xdadb,	// (0x00035408) midp_keyp_sk_left_pane_ParamLimits

0xdadb,	// (0x00035408) midp_keyp_sk_left_pane

0xdb2f,	// (0x0003545c) midp_keyp_sk_right_pane_ParamLimits

0xdb2f,	// (0x0003545c) midp_keyp_sk_right_pane

0xc271,	// (0x00033b9e) bg_button_pane_cp03

0xdb83,	// (0x000354b0) midp_keyp_sk_left_pane_g1

0xc271,	// (0x00033b9e) bg_button_pane_cp04

0xdb83,	// (0x000354b0) midp_keyp_sk_right_pane_g1

0x4738,	// (0x0002c065) midp_keyp_rocker_pane_g1

0xdb8c,	// (0x000354b9) keyp_game_cell_pane_ParamLimits

0xdb8c,	// (0x000354b9) keyp_game_cell_pane

0xc271,	// (0x00033b9e) bg_button_pane_cp02

0xdbb0,	// (0x000354dd) keyp_game_cell_pane_g1

0x8e2d,	// (0x0003075a) popup_fep_vkb2_window_ParamLimits

0x8e2d,	// (0x0003075a) popup_fep_vkb2_window

0xbbe3,	// (0x00033510) aid_size_cell_vkb2_ParamLimits

0xbbe3,	// (0x00033510) aid_size_cell_vkb2

0xbc17,	// (0x00033544) popup_fep_vkb2_window_g1_ParamLimits

0xbc17,	// (0x00033544) popup_fep_vkb2_window_g1

0xbc67,	// (0x00033594) vkb2_area_bottom_pane_ParamLimits

0xbc67,	// (0x00033594) vkb2_area_bottom_pane

0xbcbb,	// (0x000335e8) vkb2_area_keypad_pane_ParamLimits

0xbcbb,	// (0x000335e8) vkb2_area_keypad_pane

0xbd03,	// (0x00033630) vkb2_area_top_pane_ParamLimits

0xbd03,	// (0x00033630) vkb2_area_top_pane

0xbd8f,	// (0x000336bc) vkb2_top_entry_pane_ParamLimits

0xbd8f,	// (0x000336bc) vkb2_top_entry_pane

0xbdbc,	// (0x000336e9) vkb2_top_grid_left_pane_ParamLimits

0xbdbc,	// (0x000336e9) vkb2_top_grid_left_pane

0xbddd,	// (0x0003370a) vkb2_top_grid_right_pane_ParamLimits

0xbddd,	// (0x0003370a) vkb2_top_grid_right_pane

0x1f8c,	// (0x000298b9) vkb2_cell_keypad_pane_ParamLimits

0x1f8c,	// (0x000298b9) vkb2_cell_keypad_pane

0xbe25,	// (0x00033752) vkb2_area_bottom_grid_pane_ParamLimits

0xbe25,	// (0x00033752) vkb2_area_bottom_grid_pane

0xbe4f,	// (0x0003377c) vkb2_area_bottom_pane_g1_ParamLimits

0xbe4f,	// (0x0003377c) vkb2_area_bottom_pane_g1

0xbe75,	// (0x000337a2) vkb2_area_bottom_pane_g2_ParamLimits

0xbe75,	// (0x000337a2) vkb2_area_bottom_pane_g2

0xbea6,	// (0x000337d3) vkb2_area_bottom_pane_g3_ParamLimits

0xbea6,	// (0x000337d3) vkb2_area_bottom_pane_g3

0x0002,

0xfd63,	// (0x00037690) vkb2_area_bottom_pane_g_ParamLimits

0xfd63,	// (0x00037690) vkb2_area_bottom_pane_g

0x2136,	// (0x00029a63) vkb2_top_cell_left_pane_ParamLimits

0x2136,	// (0x00029a63) vkb2_top_cell_left_pane

0xdbb9,	// (0x000354e6) vkb2_top_entry_pane_g1_ParamLimits

0xdbb9,	// (0x000354e6) vkb2_top_entry_pane_g1

0xdbc7,	// (0x000354f4) vkb2_top_entry_pane_t1_ParamLimits

0xdbc7,	// (0x000354f4) vkb2_top_entry_pane_t1

0x65fb,	// (0x0002df28) vkb2_top_entry_pane_t2_ParamLimits

0x65fb,	// (0x0002df28) vkb2_top_entry_pane_t2

0x662d,	// (0x0002df5a) vkb2_top_entry_pane_t3_ParamLimits

0x662d,	// (0x0002df5a) vkb2_top_entry_pane_t3

0x0002,

0xfd6a,	// (0x00037697) vkb2_top_entry_pane_t_ParamLimits

0xfd6a,	// (0x00037697) vkb2_top_entry_pane_t

0xbf10,	// (0x0003383d) vkb2_top_grid_right_pane_g1_ParamLimits

0xbf10,	// (0x0003383d) vkb2_top_grid_right_pane_g1

0x2199,	// (0x00029ac6) vkb2_top_grid_right_pane_g2_ParamLimits

0x2199,	// (0x00029ac6) vkb2_top_grid_right_pane_g2

0x21b1,	// (0x00029ade) vkb2_top_grid_right_pane_g3_ParamLimits

0x21b1,	// (0x00029ade) vkb2_top_grid_right_pane_g3

0xbf26,	// (0x00033853) vkb2_top_grid_right_pane_g4_ParamLimits

0xbf26,	// (0x00033853) vkb2_top_grid_right_pane_g4

0x0003,

0xfd71,	// (0x0003769e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd71,	// (0x0003769e) vkb2_top_grid_right_pane_g

0x21df,	// (0x00029b0c) vkb2_top_cell_left_pane_g1

0x21f6,	// (0x00029b23) vkb2_cell_keypad_pane_g1_ParamLimits

0x21f6,	// (0x00029b23) vkb2_cell_keypad_pane_g1

0x6651,	// (0x0002df7e) vkb2_cell_keypad_pane_t1_ParamLimits

0x6651,	// (0x0002df7e) vkb2_cell_keypad_pane_t1

0x2204,	// (0x00029b31) vkb2_cell_bottom_grid_pane_ParamLimits

0x2204,	// (0x00029b31) vkb2_cell_bottom_grid_pane

0x223d,	// (0x00029b6a) vkb2_cell_bottom_grid_pane_g1

0xd867,	// (0x00035194) aid_call2_pane_cp02

0xd86f,	// (0x0003519c) aid_call_pane_cp02

0xd877,	// (0x000351a4) clock_digital_number_pane_cp10

0xd87f,	// (0x000351ac) clock_digital_number_pane_cp11

0xd887,	// (0x000351b4) clock_digital_number_pane_cp12

0xd88f,	// (0x000351bc) clock_digital_number_pane_cp13

0xd897,	// (0x000351c4) clock_digital_separator_pane_cp10

0xcae9,	// (0x00034416) popup_clock_digital_analogue_window_cp2_g1

0xcae9,	// (0x00034416) popup_clock_digital_analogue_window_cp2_g2

0xd89f,	// (0x000351cc) popup_clock_digital_analogue_window_cp2_g3

0xcae9,	// (0x00034416) popup_clock_digital_analogue_window_cp2_g4

0xd89f,	// (0x000351cc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd26,	// (0x00037653) popup_clock_digital_analogue_window_cp2_g

0xd8a7,	// (0x000351d4) popup_clock_digital_analogue_window_cp2_t1

0xd8b5,	// (0x000351e2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd31,	// (0x0003765e) popup_clock_digital_analogue_window_cp2_t

0x4738,	// (0x0002c065) clock_digital_number_pane_cp10_g1

0x4738,	// (0x0002c065) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x0003744d) clock_digital_number_pane_cp10_g

0x4738,	// (0x0002c065) clock_digital_separator_pane_cp10_g1

0x4738,	// (0x0002c065) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x0003744d) clock_digital_separator_pane_cp10_g

0xd764,	// (0x00035091) uniindi_top_pane_g3

0x6089,	// (0x0002d9b6) uniindi_top_pane_g4

0x2017,	// (0x00029944) vkb2_row_keypad_pane_ParamLimits

0x2017,	// (0x00029944) vkb2_row_keypad_pane

0x225d,	// (0x00029b8a) vkb2_cell_t_keypad_pane_ParamLimits

0x225d,	// (0x00029b8a) vkb2_cell_t_keypad_pane

0x226d,	// (0x00029b9a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x226d,	// (0x00029b9a) vkb2_cell_t_keypad_pane_cp08

0x2280,	// (0x00029bad) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2280,	// (0x00029bad) vkb2_cell_t_keypad_pane_cp09

0x2294,	// (0x00029bc1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2294,	// (0x00029bc1) vkb2_cell_t_keypad_pane_cp01

0x22a5,	// (0x00029bd2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x22a5,	// (0x00029bd2) vkb2_cell_t_keypad_pane_cp02

0x22b6,	// (0x00029be3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x22b6,	// (0x00029be3) vkb2_cell_t_keypad_pane_cp03

0x22c7,	// (0x00029bf4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x22c7,	// (0x00029bf4) vkb2_cell_t_keypad_pane_cp04

0x22d8,	// (0x00029c05) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x22d8,	// (0x00029c05) vkb2_cell_t_keypad_pane_cp05

0x22e9,	// (0x00029c16) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x22e9,	// (0x00029c16) vkb2_cell_t_keypad_pane_cp06

0x22fa,	// (0x00029c27) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x22fa,	// (0x00029c27) vkb2_cell_t_keypad_pane_cp07

0x230b,	// (0x00029c38) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x230b,	// (0x00029c38) vkb2_cell_t_keypad_pane_cp10

0x49a8,	// (0x0002c2d5) vkb2_cell_t_keypad_pane_g1

0x6668,	// (0x0002df95) vkb2_cell_t_keypad_pane_t1

0xc271,	// (0x00033b9e) popup_grid_graphic2_window

0xdc00,	// (0x0003552d) aid_size_cell_graphic2_ParamLimits

0xdc00,	// (0x0003552d) aid_size_cell_graphic2

0xdc3e,	// (0x0003556b) bg_popup_window_pane_cp21_ParamLimits

0xdc3e,	// (0x0003556b) bg_popup_window_pane_cp21

0xdc4c,	// (0x00035579) graphic2_pages_pane_ParamLimits

0xdc4c,	// (0x00035579) graphic2_pages_pane

0xdca2,	// (0x000355cf) grid_graphic2_control_pane_ParamLimits

0xdca2,	// (0x000355cf) grid_graphic2_control_pane

0xdcea,	// (0x00035617) grid_graphic2_pane_ParamLimits

0xdcea,	// (0x00035617) grid_graphic2_pane

0xdd71,	// (0x0003569e) cell_graphic2_pane

0xc271,	// (0x00033b9e) main_comp_mode_pane

0x58e0,	// (0x0002d20d) list_ai3_gene_pane_ParamLimits

0xd513,	// (0x00034e40) bg_popup_window_pane_cp19_ParamLimits

0x5cba,	// (0x0002d5e7) bg_touch_area_indi_pane_ParamLimits

0x5cba,	// (0x0002d5e7) bg_touch_area_indi_pane

0x5cd0,	// (0x0002d5fd) bg_touch_area_indi_pane_cp01_ParamLimits

0x5cd0,	// (0x0002d5fd) bg_touch_area_indi_pane_cp01

0x5ce6,	// (0x0002d613) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ce6,	// (0x0002d613) bg_touch_area_indi_pane_cp02

0x5cfc,	// (0x0002d629) bg_touch_area_indi_pane_cp03_ParamLimits

0x5cfc,	// (0x0002d629) bg_touch_area_indi_pane_cp03

0x5d16,	// (0x0002d643) popup_slider_window_g1_ParamLimits

0x5d32,	// (0x0002d65f) popup_slider_window_g2_ParamLimits

0x5d4e,	// (0x0002d67b) popup_slider_window_g3_ParamLimits

0xfcbb,	// (0x000375e8) popup_slider_window_g_ParamLimits

0x5db4,	// (0x0002d6e1) popup_slider_window_t1_ParamLimits

0x5e28,	// (0x0002d755) small_volume_slider_vertical_pane_ParamLimits

0xdd71,	// (0x0003569e) cell_graphic2_pane_ParamLimits

0xddcc,	// (0x000356f9) bg_button_pane_cp10_ParamLimits

0xddcc,	// (0x000356f9) bg_button_pane_cp10

0xdddf,	// (0x0003570c) bg_button_pane_cp11_ParamLimits

0xdddf,	// (0x0003570c) bg_button_pane_cp11

0xddf2,	// (0x0003571f) graphic2_pages_pane_g1_ParamLimits

0xddf2,	// (0x0003571f) graphic2_pages_pane_g1

0xde0d,	// (0x0003573a) graphic2_pages_pane_g2_ParamLimits

0xde0d,	// (0x0003573a) graphic2_pages_pane_g2

0x0001,

0xfd7f,	// (0x000376ac) graphic2_pages_pane_g_ParamLimits

0xfd7f,	// (0x000376ac) graphic2_pages_pane_g

0xde25,	// (0x00035752) graphic2_pages_pane_t1_ParamLimits

0xde25,	// (0x00035752) graphic2_pages_pane_t1

0xde3d,	// (0x0003576a) cell_graphic2_control_pane_ParamLimits

0xde3d,	// (0x0003576a) cell_graphic2_control_pane

0xde6f,	// (0x0003579c) cell_graphic2_pane_g1_ParamLimits

0xde6f,	// (0x0003579c) cell_graphic2_pane_g1

0xd0fd,	// (0x00034a2a) cell_graphic2_pane_g2_ParamLimits

0xd0fd,	// (0x00034a2a) cell_graphic2_pane_g2

0xde7c,	// (0x000357a9) cell_graphic2_pane_g3_ParamLimits

0xde7c,	// (0x000357a9) cell_graphic2_pane_g3

0xd10a,	// (0x00034a37) cell_graphic2_pane_g4_ParamLimits

0xd10a,	// (0x00034a37) cell_graphic2_pane_g4

0xde89,	// (0x000357b6) cell_graphic2_pane_g5_ParamLimits

0xde89,	// (0x000357b6) cell_graphic2_pane_g5

0x0004,

0xfd84,	// (0x000376b1) cell_graphic2_pane_g_ParamLimits

0xfd84,	// (0x000376b1) cell_graphic2_pane_g

0xdea6,	// (0x000357d3) cell_graphic2_pane_t1_ParamLimits

0xdea6,	// (0x000357d3) cell_graphic2_pane_t1

0x2e06,	// (0x0002a733) grid_highlight_pane_cp11_ParamLimits

0x2e06,	// (0x0002a733) grid_highlight_pane_cp11

0xc40b,	// (0x00033d38) bg_button_pane_cp05

0xdef0,	// (0x0003581d) cell_graphic2_control_pane_g1

0x4738,	// (0x0002c065) bg_touch_area_indi_pane_g1

0x6941,	// (0x0002e26e) aid_cmod_rocker_key_size

0x694b,	// (0x0002e278) aid_cmode_itu_key_size

0x6955,	// (0x0002e282) main_cmode_video_pane

0x695f,	// (0x0002e28c) main_comp_mode_itu_pane

0x696b,	// (0x0002e298) main_comp_mode_rocker_pane

0x6977,	// (0x0002e2a4) cell_cmode_rocker_pane_ParamLimits

0x6977,	// (0x0002e2a4) cell_cmode_rocker_pane

0x6989,	// (0x0002e2b6) cell_cmode_itu_pane_ParamLimits

0x6989,	// (0x0002e2b6) cell_cmode_itu_pane

0xc697,	// (0x00033fc4) bg_button_pane_cp06_ParamLimits

0xc697,	// (0x00033fc4) bg_button_pane_cp06

0x49a8,	// (0x0002c2d5) cell_cmode_rocker_pane_g1_ParamLimits

0x49a8,	// (0x0002c2d5) cell_cmode_rocker_pane_g1

0x5ed5,	// (0x0002d802) cell_cmode_rocker_pane_g2_ParamLimits

0x5ed5,	// (0x0002d802) cell_cmode_rocker_pane_g2

0x0001,

0xfd94,	// (0x000376c1) cell_cmode_rocker_pane_g_ParamLimits

0xfd94,	// (0x000376c1) cell_cmode_rocker_pane_g

0xc271,	// (0x00033b9e) bg_button_pane_cp07

0x699e,	// (0x0002e2cb) cell_cmode_itu_pane_g1

0x69a7,	// (0x0002e2d4) cell_cmode_itu_pane_t1

0x69b5,	// (0x0002e2e2) cell_cmode_itu_pane_t2

0x0001,

0xfd99,	// (0x000376c6) cell_cmode_itu_pane_t

0x60fb,	// (0x0002da28) aid_touch_ctrl_left

0x6103,	// (0x0002da30) aid_touch_ctrl_right

0xc271,	// (0x00033b9e) compa_mode_pane

0xdf16,	// (0x00035843) aid_cmod_rocker_key_size_cp

0xdf20,	// (0x0003584d) aid_cmode_itu_key_size_cp

0x69d7,	// (0x0002e304) compa_mode_pane_g1

0x69df,	// (0x0002e30c) compa_mode_pane_g2

0x69e7,	// (0x0002e314) compa_mode_pane_g3

0x0002,

0xfd9e,	// (0x000376cb) compa_mode_pane_g

0xdf2a,	// (0x00035857) main_comp_mode_itu_pane_cp

0xdf32,	// (0x0003585f) main_comp_mode_rocker_pane_cp

0xdf3a,	// (0x00035867) cell_cmode_itu_pane_cp_ParamLimits

0xdf3a,	// (0x00035867) cell_cmode_itu_pane_cp

0xdf4f,	// (0x0003587c) cell_cmode_rocker_pane_cp_ParamLimits

0xdf4f,	// (0x0003587c) cell_cmode_rocker_pane_cp

0xc697,	// (0x00033fc4) bg_button_pane_cp06_cp_ParamLimits

0xc697,	// (0x00033fc4) bg_button_pane_cp06_cp

0x49a8,	// (0x0002c2d5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x49a8,	// (0x0002c2d5) cell_cmode_rocker_pane_g1_cp

0x4738,	// (0x0002c065) cell_cmode_rocker_pane_g2_cp

0xc271,	// (0x00033b9e) bg_button_pane_cp07_cp

0xdf61,	// (0x0003588e) cell_cmode_itu_pane_g1_cp

0xdf6a,	// (0x00035897) cell_cmode_itu_pane_t1_cp

0xdf6a,	// (0x00035897) cell_cmode_itu_pane_t2_cp

0xb1f6,	// (0x00032b23) settings_code_pane_cp2

0xc2e1,	// (0x00033c0e) bg_popup_window_pane_cp3_ParamLimits

0xc524,	// (0x00033e51) heading_pane_cp3_ParamLimits

0xc533,	// (0x00033e60) listscroll_popup_graphic_pane_ParamLimits

0x1931,	// (0x0002925e) fep_hwr_aid_pane_ParamLimits

0x1cfa,	// (0x00029627) aid_touch_sctrl_top_ParamLimits

0x1d07,	// (0x00029634) sctrl_sk_top_pane_g1_ParamLimits

0x49a8,	// (0x0002c2d5) sctrl_sk_top_pane_g2_ParamLimits

0xfcd4,	// (0x00037601) sctrl_sk_top_pane_g_ParamLimits

0x1d14,	// (0x00029641) sctrl_sk_top_pane_t1_ParamLimits

0x1cfa,	// (0x00029627) aid_touch_sctrl_bottom_ParamLimits

0x1d14,	// (0x00029641) sctrl_sk_bottom_pane_t1_ParamLimits

0xd730,	// (0x0003505d) aid_area_touch_clock

0xbd4f,	// (0x0003367c) aid_vkb2_area_top_pane_cell_ParamLimits

0xbd4f,	// (0x0003367c) aid_vkb2_area_top_pane_cell

0xbdfe,	// (0x0003372b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbdfe,	// (0x0003372b) aid_vkb2_area_bottom_pane_cell

0x65b3,	// (0x0002dee0) popup_char_count_window

0x6a3d,	// (0x0002e36a) popup_char_count_window_g1

0x6a46,	// (0x0002e373) popup_char_count_window_g2

0x6a4f,	// (0x0002e37c) popup_char_count_window_g3

0x0002,

0xfda5,	// (0x000376d2) popup_char_count_window_g

0x6a58,	// (0x0002e385) popup_char_count_window_t1

0x1dad,	// (0x000296da) popup_fep_char_preview_window_ParamLimits

0x1dad,	// (0x000296da) popup_fep_char_preview_window

0xbd6f,	// (0x0003369c) vkb2_top_candi_pane_ParamLimits

0xbd6f,	// (0x0003369c) vkb2_top_candi_pane

0xdf78,	// (0x000358a5) cell_vkb2_top_candi_pane_ParamLimits

0xdf78,	// (0x000358a5) cell_vkb2_top_candi_pane

0x1405,	// (0x00028d32) bg_popup_fep_char_preview_window_ParamLimits

0x1405,	// (0x00028d32) bg_popup_fep_char_preview_window

0x2320,	// (0x00029c4d) popup_fep_char_preview_window_t1_ParamLimits

0x2320,	// (0x00029c4d) popup_fep_char_preview_window_t1

0x6ab0,	// (0x0002e3dd) bg_popup_fep_char_preview_window_g1

0x6ab8,	// (0x0002e3e5) bg_popup_fep_char_preview_window_g2

0x6ac0,	// (0x0002e3ed) bg_popup_fep_char_preview_window_g3

0x6ac8,	// (0x0002e3f5) bg_popup_fep_char_preview_window_g4

0x6ad0,	// (0x0002e3fd) bg_popup_fep_char_preview_window_g5

0x6ad8,	// (0x0002e405) bg_popup_fep_char_preview_window_g6

0x6ae0,	// (0x0002e40d) bg_popup_fep_char_preview_window_g7

0x6ae8,	// (0x0002e415) bg_popup_fep_char_preview_window_g8

0x6af0,	// (0x0002e41d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdac,	// (0x000376d9) bg_popup_fep_char_preview_window_g

0x49a8,	// (0x0002c2d5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49a8,	// (0x0002c2d5) cell_vkb2_top_candi_pane_g1

0x4cbf,	// (0x0002c5ec) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4cbf,	// (0x0002c5ec) cell_vkb2_top_candi_pane_g2

0x4ce0,	// (0x0002c60d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4ce0,	// (0x0002c60d) cell_vkb2_top_candi_pane_g3

0x2362,	// (0x00029c8f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2362,	// (0x00029c8f) cell_vkb2_top_candi_pane_g4

0x6af8,	// (0x0002e425) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6af8,	// (0x0002e425) cell_vkb2_top_candi_pane_g5

0x5ed5,	// (0x0002d802) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5ed5,	// (0x0002d802) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc1,	// (0x000376ee) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc1,	// (0x000376ee) cell_vkb2_top_candi_pane_g

0x2383,	// (0x00029cb0) cell_vkb2_top_candi_pane_t1

0xb016,	// (0x00032943) aid_size_touch_slider_mark_ParamLimits

0xb016,	// (0x00032943) aid_size_touch_slider_mark

0xdc88,	// (0x000355b5) grid_graphic2_catg_pane_ParamLimits

0xdc88,	// (0x000355b5) grid_graphic2_catg_pane

0xdd44,	// (0x00035671) popup_grid_graphic2_window_t1_ParamLimits

0xdd44,	// (0x00035671) popup_grid_graphic2_window_t1

0xdd5a,	// (0x00035687) popup_grid_graphic2_window_t2_ParamLimits

0xdd5a,	// (0x00035687) popup_grid_graphic2_window_t2

0x0001,

0xfd7a,	// (0x000376a7) popup_grid_graphic2_window_t_ParamLimits

0xfd7a,	// (0x000376a7) popup_grid_graphic2_window_t

0xc40b,	// (0x00033d38) bg_button_pane_cp05_ParamLimits

0xdef0,	// (0x0003581d) cell_graphic2_control_pane_g1_ParamLimits

0xdfd8,	// (0x00035905) cell_graphic2_catg_pane_ParamLimits

0xdfd8,	// (0x00035905) cell_graphic2_catg_pane

0xc271,	// (0x00033b9e) bg_button_pane_cp12

0xdfea,	// (0x00035917) cell_graphic2_catg_pane_g1

0x600f,	// (0x0002d93c) cell_tb_ext_pane_t1_ParamLimits

0x2156,	// (0x00029a83) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2156,	// (0x00029a83) vkb2_top_cell_right_narrow_pane

0x216e,	// (0x00029a9b) vkb2_top_cell_right_wide_pane_ParamLimits

0x216e,	// (0x00029a9b) vkb2_top_cell_right_wide_pane

0x1923,	// (0x00029250) bg_vkb2_func_pane_ParamLimits

0x1923,	// (0x00029250) bg_vkb2_func_pane

0x21df,	// (0x00029b0c) vkb2_top_cell_left_pane_g1_ParamLimits

0x1923,	// (0x00029250) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1923,	// (0x00029250) bg_vkb2_fuc_pane_cp03

0x223d,	// (0x00029b6a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0c67,	// (0x00028594) bg_vkb2_func_pane_g1

0x0c6f,	// (0x0002859c) bg_vkb2_func_pane_g2

0x0c7f,	// (0x000285ac) bg_vkb2_func_pane_g3

0x0c77,	// (0x000285a4) bg_vkb2_func_pane_g4

0x0c87,	// (0x000285b4) bg_vkb2_func_pane_g5

0x0c8f,	// (0x000285bc) bg_vkb2_func_pane_g6

0x0c97,	// (0x000285c4) bg_vkb2_func_pane_g7

0x0c9f,	// (0x000285cc) bg_vkb2_func_pane_g8

0x0c5f,	// (0x0002858c) bg_vkb2_func_pane_g9

0x0008,

0xfdce,	// (0x000376fb) bg_vkb2_func_pane_g

0x1923,	// (0x00029250) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1923,	// (0x00029250) bg_vkb2_fuc_pane_cp01

0x21df,	// (0x00029b0c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x21df,	// (0x00029b0c) vkb2_top_cell_right_wide_pane_g1

0x1923,	// (0x00029250) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1923,	// (0x00029250) bg_vkb2_fuc_pane_cp02

0x23a2,	// (0x00029ccf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x23a2,	// (0x00029ccf) vkb2_top_cell_right_narrow_pane_g1

0xd455,	// (0x00034d82) aid_touch_area_decrease_ParamLimits

0xd455,	// (0x00034d82) aid_touch_area_decrease

0xd48f,	// (0x00034dbc) aid_touch_area_increase_ParamLimits

0xd48f,	// (0x00034dbc) aid_touch_area_increase

0xd4b7,	// (0x00034de4) aid_touch_area_mute_ParamLimits

0xd4b7,	// (0x00034de4) aid_touch_area_mute

0xd4df,	// (0x00034e0c) aid_touch_area_slider_ParamLimits

0xd4df,	// (0x00034e0c) aid_touch_area_slider

0xd51f,	// (0x00034e4c) popup_slider_window_g4_ParamLimits

0xd51f,	// (0x00034e4c) popup_slider_window_g4

0xd547,	// (0x00034e74) popup_slider_window_g5_ParamLimits

0xd547,	// (0x00034e74) popup_slider_window_g5

0xd57b,	// (0x00034ea8) popup_slider_window_g6_ParamLimits

0xd57b,	// (0x00034ea8) popup_slider_window_g6

0x5de2,	// (0x0002d70f) popup_slider_window_t2_ParamLimits

0x5de2,	// (0x0002d70f) popup_slider_window_t2

0x0001,

0xfcc8,	// (0x000375f5) popup_slider_window_t_ParamLimits

0xfcc8,	// (0x000375f5) popup_slider_window_t

0xd597,	// (0x00034ec4) slider_pane_ParamLimits

0xd597,	// (0x00034ec4) slider_pane

0x6b34,	// (0x0002e461) slider_pane_g1_ParamLimits

0x6b34,	// (0x0002e461) slider_pane_g1

0x6b48,	// (0x0002e475) slider_pane_g2_ParamLimits

0x6b48,	// (0x0002e475) slider_pane_g2

0x6b5e,	// (0x0002e48b) slider_pane_g3_ParamLimits

0x6b5e,	// (0x0002e48b) slider_pane_g3

0x0003,

0xfde1,	// (0x0003770e) slider_pane_g_ParamLimits

0xfde1,	// (0x0003770e) slider_pane_g

0xa3b1,	// (0x00031cde) popup_tb_float_extension_window_ParamLimits

0xa3b1,	// (0x00031cde) popup_tb_float_extension_window

0x6b8a,	// (0x0002e4b7) aid_size_cell_tb_float_ext

0xc271,	// (0x00033b9e) bg_popup_sub_window_cp28

0xdff3,	// (0x00035920) grid_tb_float_ext_pane

0xdffd,	// (0x0003592a) cell_tb_float_ext_pane_ParamLimits

0xdffd,	// (0x0003592a) cell_tb_float_ext_pane

0xe017,	// (0x00035944) cell_tb_float_ext_pane_g1

0xe020,	// (0x0003594d) grid_highlight_pane_cp12

0xb6e3,	// (0x00033010) cell_last_hwr_side_pane_ParamLimits

0xb6e3,	// (0x00033010) cell_last_hwr_side_pane

0x4738,	// (0x0002c065) cell_last_hwr_side_pane_g1

0x6bcc,	// (0x0002e4f9) cell_last_hwr_side_pane_g2

0x0001,

0xfdea,	// (0x00037717) cell_last_hwr_side_pane_g

0xbedb,	// (0x00033808) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbedb,	// (0x00033808) vkb2_area_bottom_space_btn_pane

0x49a8,	// (0x0002c2d5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6668,	// (0x0002df95) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2383,	// (0x00029cb0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x23c2,	// (0x00029cef) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x23c2,	// (0x00029cef) vkb2_area_bottom_space_btn_pane_g1

0x23fc,	// (0x00029d29) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x23fc,	// (0x00029d29) vkb2_area_bottom_space_btn_pane_g2

0x2432,	// (0x00029d5f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2432,	// (0x00029d5f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdef,	// (0x0003771c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdef,	// (0x0003771c) vkb2_area_bottom_space_btn_pane_g

0x19d8,	// (0x00029305) cel_fep_hwr_func_pane_ParamLimits

0x19d8,	// (0x00029305) cel_fep_hwr_func_pane

0xb6b8,	// (0x00032fe5) cell_hwr_side_button_pane_ParamLimits

0xb6b8,	// (0x00032fe5) cell_hwr_side_button_pane

0xd730,	// (0x0003505d) aid_area_touch_clock_ParamLimits

0xc40b,	// (0x00033d38) bg_uniindi_top_pane_ParamLimits

0xd742,	// (0x0003506f) uniindi_top_pane_g1_ParamLimits

0xd758,	// (0x00035085) uniindi_top_pane_g2_ParamLimits

0xd764,	// (0x00035091) uniindi_top_pane_g3_ParamLimits

0x6089,	// (0x0002d9b6) uniindi_top_pane_g4_ParamLimits

0xfd00,	// (0x0003762d) uniindi_top_pane_g_ParamLimits

0xd775,	// (0x000350a2) uniindi_top_pane_t1_ParamLimits

0xc40b,	// (0x00033d38) bg_vkb2_func_pane_cp01_ParamLimits

0xc40b,	// (0x00033d38) bg_vkb2_func_pane_cp01

0x6bd5,	// (0x0002e502) cel_fep_hwr_func_pane_g1_ParamLimits

0x6bd5,	// (0x0002e502) cel_fep_hwr_func_pane_g1

0xc40b,	// (0x00033d38) bg_vkb2_func_pane_cp02_ParamLimits

0xc40b,	// (0x00033d38) bg_vkb2_func_pane_cp02

0x6bd5,	// (0x0002e502) cell_hwr_side_button_pane_g1_ParamLimits

0x6bd5,	// (0x0002e502) cell_hwr_side_button_pane_g1

0x0ab3,	// (0x000283e0) status_pane_g4_ParamLimits

0x0ab3,	// (0x000283e0) status_pane_g4

0x0acd,	// (0x000283fa) status_pane_t1

0x4473,	// (0x0002bda0) form2_midp_gauge_slider_cont_pane

0x447b,	// (0x0002bda8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb5d1,	// (0x00032efe) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb5e3,	// (0x00032f10) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x00037400) form2_midp_gauge_slider_pane_t_ParamLimits

0x44b1,	// (0x0002bdde) form2_midp_slider_pane_ParamLimits

0x1d75,	// (0x000296a2) aid_size_cell_func_vkb2_ParamLimits

0x1d75,	// (0x000296a2) aid_size_cell_func_vkb2

0x6b76,	// (0x0002e4a3) slider_pane_g4_ParamLimits

0x6b76,	// (0x0002e4a3) slider_pane_g4

0xbf44,	// (0x00033871) form2_midp_gauge_slider_pane_t2_cp01

0xbf52,	// (0x0003387f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf52,	// (0x0003387f) form2_midp_gauge_slider_pane_t3_cp01

0x24a7,	// (0x00029dd4) form2_midp_slider_pane_cp01

0xc271,	// (0x00033b9e) navi_smil_pane

0x6c0e,	// (0x0002e53b) navi_smil_pane_g1

0x6c16,	// (0x0002e543) navi_smil_pane_t1

0x6be3,	// (0x0002e510) form2_midp_slider_pane_g1

0x6bec,	// (0x0002e519) form2_midp_slider_pane_g2

0x6bf4,	// (0x0002e521) form2_midp_slider_pane_g3

0x6be3,	// (0x0002e510) form2_midp_slider_pane_g4

0xe029,	// (0x00035956) form2_midp_slider_pane_g5

0x0004,

0xfdf8,	// (0x00037725) form2_midp_slider_pane_g

0x246c,	// (0x00029d99) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x246c,	// (0x00029d99) vkb2_area_bottom_space_btn_pane_g4

0xa5e9,	// (0x00031f16) lc0_navi_pane_ParamLimits

0xa5e9,	// (0x00031f16) lc0_navi_pane

0xa653,	// (0x00031f80) lc0_stat_indi_pane_ParamLimits

0xa653,	// (0x00031f80) lc0_stat_indi_pane

0xa668,	// (0x00031f95) ls0_title_pane_ParamLimits

0xa668,	// (0x00031f95) ls0_title_pane

0xc697,	// (0x00033fc4) bg_popup_sub_pane_cp14_ParamLimits

0xd717,	// (0x00035044) list_uniindi_pane_ParamLimits

0xd723,	// (0x00035050) uniindi_top_pane_ParamLimits

0x60d3,	// (0x0002da00) list_single_uniindi_pane_g1_ParamLimits

0x60e6,	// (0x0002da13) list_single_uniindi_pane_t1_ParamLimits

0xbf6f,	// (0x0003389c) lc0_stat_clock_pane_ParamLimits

0xbf6f,	// (0x0003389c) lc0_stat_clock_pane

0xe034,	// (0x00035961) lc0_stat_indi_pane_g1_ParamLimits

0xe034,	// (0x00035961) lc0_stat_indi_pane_g1

0xe041,	// (0x0003596e) lc0_stat_indi_pane_g2_ParamLimits

0xe041,	// (0x0003596e) lc0_stat_indi_pane_g2

0x0001,

0xfe03,	// (0x00037730) lc0_stat_indi_pane_g_ParamLimits

0xfe03,	// (0x00037730) lc0_stat_indi_pane_g

0xbf7f,	// (0x000338ac) lc0_uni_indicator_pane_ParamLimits

0xbf7f,	// (0x000338ac) lc0_uni_indicator_pane

0xe04e,	// (0x0003597b) ls0_title_pane_g1_ParamLimits

0xe04e,	// (0x0003597b) ls0_title_pane_g1

0xe062,	// (0x0003598f) ls0_title_pane_t1_ParamLimits

0xe062,	// (0x0003598f) ls0_title_pane_t1

0xbf8f,	// (0x000338bc) lc0_uni_indicator_pane_g1_ParamLimits

0xbf8f,	// (0x000338bc) lc0_uni_indicator_pane_g1

0x6c88,	// (0x0002e5b5) lc0_stat_clock_pane_t1

0xc271,	// (0x00033b9e) main_ai5_pane

0x6c96,	// (0x0002e5c3) ai5_sk_pane_ParamLimits

0x6c96,	// (0x0002e5c3) ai5_sk_pane

0xe090,	// (0x000359bd) cell_ai5_widget_pane_ParamLimits

0xe090,	// (0x000359bd) cell_ai5_widget_pane

0x6d63,	// (0x0002e690) aid_size_cell_widget_grid

0x6d71,	// (0x0002e69e) bg_ai5_widget_pane_ParamLimits

0x6d71,	// (0x0002e69e) bg_ai5_widget_pane

0x6ded,	// (0x0002e71a) cell_ai5_widget_pane_g2

0x6e01,	// (0x0002e72e) cell_ai5_widget_pane_g3

0x6e1b,	// (0x0002e748) cell_ai5_widget_pane_g4

0x6e2b,	// (0x0002e758) cell_ai5_widget_pane_g5

0x6e3b,	// (0x0002e768) cell_ai5_widget_pane_g6

0x6e47,	// (0x0002e774) cell_ai5_widget_pane_g7

0x6eb3,	// (0x0002e7e0) cell_ai5_widget_pane_t1_ParamLimits

0x6eb3,	// (0x0002e7e0) cell_ai5_widget_pane_t1

0x6ed0,	// (0x0002e7fd) cell_ai5_widget_pane_t2_ParamLimits

0x6ed0,	// (0x0002e7fd) cell_ai5_widget_pane_t2

0x6ee8,	// (0x0002e815) cell_ai5_widget_pane_t3_ParamLimits

0x6ee8,	// (0x0002e815) cell_ai5_widget_pane_t3

0x6f00,	// (0x0002e82d) cell_ai5_widget_pane_t4_ParamLimits

0x6f00,	// (0x0002e82d) cell_ai5_widget_pane_t4

0xe0fc,	// (0x00035a29) cell_ai5_widget_pane_t5_ParamLimits

0xe0fc,	// (0x00035a29) cell_ai5_widget_pane_t5

0x6f45,	// (0x0002e872) cell_ai5_widget_pane_t6_ParamLimits

0x6f45,	// (0x0002e872) cell_ai5_widget_pane_t6

0x6f57,	// (0x0002e884) cell_ai5_widget_pane_t7_ParamLimits

0x6f57,	// (0x0002e884) cell_ai5_widget_pane_t7

0x6f76,	// (0x0002e8a3) cell_ai5_widget_pane_t8_ParamLimits

0x6f76,	// (0x0002e8a3) cell_ai5_widget_pane_t8

0x000b,

0xfe23,	// (0x00037750) cell_ai5_widget_pane_t_ParamLimits

0xfe23,	// (0x00037750) cell_ai5_widget_pane_t

0x6ffa,	// (0x0002e927) grid_ai5_widget_pane

0xc697,	// (0x00033fc4) highlight_cell_ai5_widget_pane_ParamLimits

0xc697,	// (0x00033fc4) highlight_cell_ai5_widget_pane

0xe11c,	// (0x00035a49) ai5_sk_left_pane

0xe126,	// (0x00035a53) ai5_sk_middle_pane

0xe130,	// (0x00035a5d) ai5_sk_right_pane

0x7026,	// (0x0002e953) bg_ai5_widget_pane_g1_ParamLimits

0x7026,	// (0x0002e953) bg_ai5_widget_pane_g1

0x7032,	// (0x0002e95f) bg_ai5_widget_pane_g2_ParamLimits

0x7032,	// (0x0002e95f) bg_ai5_widget_pane_g2

0x703e,	// (0x0002e96b) bg_ai5_widget_pane_g3_ParamLimits

0x703e,	// (0x0002e96b) bg_ai5_widget_pane_g3

0x704a,	// (0x0002e977) bg_ai5_widget_pane_g4_ParamLimits

0x704a,	// (0x0002e977) bg_ai5_widget_pane_g4

0x7056,	// (0x0002e983) bg_ai5_widget_pane_g5_ParamLimits

0x7056,	// (0x0002e983) bg_ai5_widget_pane_g5

0x7062,	// (0x0002e98f) bg_ai5_widget_pane_g6_ParamLimits

0x7062,	// (0x0002e98f) bg_ai5_widget_pane_g6

0x706e,	// (0x0002e99b) bg_ai5_widget_pane_g7_ParamLimits

0x706e,	// (0x0002e99b) bg_ai5_widget_pane_g7

0x707a,	// (0x0002e9a7) bg_ai5_widget_pane_g8_ParamLimits

0x707a,	// (0x0002e9a7) bg_ai5_widget_pane_g8

0x7086,	// (0x0002e9b3) bg_ai5_widget_pane_g9_ParamLimits

0x7086,	// (0x0002e9b3) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x00037769) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00037769) bg_ai5_widget_pane_g

0x70b8,	// (0x0002e9e5) cell_shortcut_ai5_widget_pane_ParamLimits

0x70b8,	// (0x0002e9e5) cell_shortcut_ai5_widget_pane

0xcf53,	// (0x00034880) bg_cell_shortcut_ai5_widget_pane

0x70c9,	// (0x0002e9f6) cell_grid_ai5_widget_pane_g1

0xcf53,	// (0x00034880) highlight_cell_shortcut_ai5_widget_pane

0x0c6f,	// (0x0002859c) ai5_sk_left_pane_g1

0x70d2,	// (0x0002e9ff) ai5_sk_left_pane_g2

0x70da,	// (0x0002ea07) ai5_sk_left_pane_g3

0x70e2,	// (0x0002ea0f) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x0003777c) ai5_sk_left_pane_g

0x70ea,	// (0x0002ea17) ai5_sk_left_pane_t1

0x0c67,	// (0x00028594) ai5_sk_right_pane_g1

0x70f8,	// (0x0002ea25) ai5_sk_right_pane_g2

0x7100,	// (0x0002ea2d) ai5_sk_right_pane_g3

0x7108,	// (0x0002ea35) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x00037785) ai5_sk_right_pane_g

0x7110,	// (0x0002ea3d) ai5_sk_right_pane_t1

0x0c67,	// (0x00028594) ai5_sk_middle_pane_g1

0x0c6f,	// (0x0002859c) ai5_sk_middle_pane_g2

0x0c87,	// (0x000285b4) ai5_sk_middle_pane_g3

0x7100,	// (0x0002ea2d) ai5_sk_middle_pane_g4

0x70da,	// (0x0002ea07) ai5_sk_middle_pane_g5

0x711e,	// (0x0002ea4b) ai5_sk_middle_pane_g6

0xe13a,	// (0x00035a67) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0003778e) ai5_sk_middle_pane_g

0xa4d5,	// (0x00031e02) aid_touch_area_size_lc0_ParamLimits

0xa4d5,	// (0x00031e02) aid_touch_area_size_lc0

0x1b63,	// (0x00029490) cell_hwr_candidate_pane_t1_ParamLimits

0x0784,	// (0x000280b1) aid_touch_navi_pane

0xa761,	// (0x0003208e) status_dt_navi_pane_ParamLimits

0xa761,	// (0x0003208e) status_dt_navi_pane

0xa779,	// (0x000320a6) status_dt_sta_pane_ParamLimits

0xa779,	// (0x000320a6) status_dt_sta_pane

0xe142,	// (0x00035a6f) dt_sta_controll_pane

0xe14f,	// (0x00035a7c) dt_sta_indi_pane

0xe15c,	// (0x00035a89) dt_sta_title_pane

0xc40b,	// (0x00033d38) bg_dt_sta_indi_pane_ParamLimits

0xc40b,	// (0x00033d38) bg_dt_sta_indi_pane

0xe16e,	// (0x00035a9b) dt_sta_battery_pane

0xe176,	// (0x00035aa3) dt_sta_indi_pane_g1

0x7170,	// (0x0002ea9d) dt_sta_indi_pane_g2

0x7179,	// (0x0002eaa6) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x0003779d) dt_sta_indi_pane_g

0x7182,	// (0x0002eaaf) dt_sta_signal_pane

0xc697,	// (0x00033fc4) bg_dt_sta_title_pane_ParamLimits

0xc697,	// (0x00033fc4) bg_dt_sta_title_pane

0x2f66,	// (0x0002a893) dt_sta_title_pane_g1

0xe17f,	// (0x00035aac) dt_sta_title_pane_t1_ParamLimits

0xe17f,	// (0x00035aac) dt_sta_title_pane_t1

0xc271,	// (0x00033b9e) bg_dt_sta_control_pane

0xe194,	// (0x00035ac1) dt_sta_controll_pane_g1

0xe19d,	// (0x00035aca) bg_dt_sta_title_pane_g1

0xe1a6,	// (0x00035ad3) bg_dt_sta_title_pane_g2

0xe1af,	// (0x00035adc) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x000377a4) bg_dt_sta_title_pane_g

0x4738,	// (0x0002c065) bg_dt_sta_indi_pane_g1

0x71c4,	// (0x0002eaf1) dt_sta_signal_pane_g1

0x71cc,	// (0x0002eaf9) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x000377ab) dt_sta_signal_pane_g

0x71d4,	// (0x0002eb01) dt_sta_battery_pane_g1

0x71dd,	// (0x0002eb0a) dt_sta_battery_pane_t1

0x4738,	// (0x0002c065) bg_dt_sta_control_pane_g1

0xcb6c,	// (0x00034499) fep_china_uni_eep_pane

0xcb74,	// (0x000344a1) fep_china_uni_entry_pane_ParamLimits

0xcb84,	// (0x000344b1) popup_fep_china_uni_window_g1_ParamLimits

0xcb94,	// (0x000344c1) popup_fep_china_uni_window_g2_ParamLimits

0xcb94,	// (0x000344c1) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00037016) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00037016) popup_fep_china_uni_window_g

0x71ec,	// (0x0002eb19) fep_china_uni_eep_pane_g1

0x71f4,	// (0x0002eb21) fep_china_uni_eep_pane_t1

0x6c05,	// (0x0002e532) aid_touch_area_size_smil_player

0x08da,	// (0x00028207) lc0_clock_pane

0x0ac1,	// (0x000283ee) status_pane_g5_ParamLimits

0x0ac1,	// (0x000283ee) status_pane_g5

0x9f0d,	// (0x0003183a) popup_keymap_window

0x0a7f,	// (0x000283ac) status_icon_pane

0x6e01,	// (0x0002e72e) cell_ai5_widget_pane_g3_ParamLimits

0x6e1b,	// (0x0002e748) cell_ai5_widget_pane_g4_ParamLimits

0x6e2b,	// (0x0002e758) cell_ai5_widget_pane_g5_ParamLimits

0x6e53,	// (0x0002e780) cell_ai5_widget_pane_g8_ParamLimits

0x6e53,	// (0x0002e780) cell_ai5_widget_pane_g8

0x6e67,	// (0x0002e794) cell_ai5_widget_pane_g9_ParamLimits

0x6e67,	// (0x0002e794) cell_ai5_widget_pane_g9

0x6e7b,	// (0x0002e7a8) cell_ai5_widget_pane_g10_ParamLimits

0x6e7b,	// (0x0002e7a8) cell_ai5_widget_pane_g10

0x7203,	// (0x0002eb30) status_icon_pane_g1

0xc271,	// (0x00033b9e) bg_popup_sub_pane_cp13

0x720b,	// (0x0002eb38) popup_keymap_window_t1

0x9bc9,	// (0x000314f6) control_pane_g6_ParamLimits

0x9bc9,	// (0x000314f6) control_pane_g6

0x9bd6,	// (0x00031503) control_pane_g7_ParamLimits

0x9bd6,	// (0x00031503) control_pane_g7

0x9be3,	// (0x00031510) control_pane_g8_ParamLimits

0x9be3,	// (0x00031510) control_pane_g8

0xe142,	// (0x00035a6f) dt_sta_controll_pane_ParamLimits

0xe14f,	// (0x00035a7c) dt_sta_indi_pane_ParamLimits

0xe15c,	// (0x00035a89) dt_sta_title_pane_ParamLimits

0xc5e2,	// (0x00033f0f) aid_size_touch_scroll_bar_cale

0x8e21,	// (0x0003074e) popup_discreet_window_ParamLimits

0x8e21,	// (0x0003074e) popup_discreet_window

0x8e73,	// (0x000307a0) popup_sk_window

0x1405,	// (0x00028d32) bg_popup_sub_pane_cp28_ParamLimits

0x1405,	// (0x00028d32) bg_popup_sub_pane_cp28

0x7219,	// (0x0002eb46) popup_discreet_window_g1_ParamLimits

0x7219,	// (0x0002eb46) popup_discreet_window_g1

0xe1b8,	// (0x00035ae5) popup_discreet_window_t1_ParamLimits

0xe1b8,	// (0x00035ae5) popup_discreet_window_t1

0x7257,	// (0x0002eb84) popup_discreet_window_t2_ParamLimits

0x7257,	// (0x0002eb84) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x000377b0) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x000377b0) popup_discreet_window_t

0x24de,	// (0x00029e0b) popup_sk_window_g1

0x24e8,	// (0x00029e15) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x000377b7) popup_sk_window_g

0xbfba,	// (0x000338e7) popup_sk_window_t1

0xbfc8,	// (0x000338f5) popup_sk_window_t1_copy1

0x6ded,	// (0x0002e71a) cell_ai5_widget_pane_g2_ParamLimits

0x6f88,	// (0x0002e8b5) cell_ai5_widget_pane_t9_ParamLimits

0x6f88,	// (0x0002e8b5) cell_ai5_widget_pane_t9

0xc271,	// (0x00033b9e) main_fep_fshwr2_pane

0xbfd6,	// (0x00033903) aid_fshwr2_btn_pane

0xbfea,	// (0x00033917) aid_fshwr2_syb_pane

0xbffe,	// (0x0003392b) aid_fshwr2_txt_pane

0xc00e,	// (0x0003393b) fshwr2_func_candi_pane

0xc02e,	// (0x0003395b) fshwr2_hwr_syb_pane

0xc050,	// (0x0003397d) fshwr2_icf_pane

0xc271,	// (0x00033b9e) fshwr2_icf_bg_pane

0x25b0,	// (0x00029edd) fshwr2_icf_pane_t1_ParamLimits

0x25b0,	// (0x00029edd) fshwr2_icf_pane_t1

0xcae9,	// (0x00034416) fshwr2_func_candi_pane_g1

0xe1d6,	// (0x00035b03) fshwr2_func_candi_row_pane_ParamLimits

0xe1d6,	// (0x00035b03) fshwr2_func_candi_row_pane

0xc080,	// (0x000339ad) cell_fshwr2_syb_pane_ParamLimits

0xc080,	// (0x000339ad) cell_fshwr2_syb_pane

0x6bd5,	// (0x0002e502) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6bd5,	// (0x0002e502) fshwr2_hwr_syb_pane_g1

0xc271,	// (0x00033b9e) bg_popup_call_pane_cp01

0xc0a6,	// (0x000339d3) fshwr2_func_candi_cell_pane_ParamLimits

0xc0a6,	// (0x000339d3) fshwr2_func_candi_cell_pane

0x11ee,	// (0x00028b1b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x11ee,	// (0x00028b1b) fshwr2_func_candi_cell_bg_pane

0xc0f1,	// (0x00033a1e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc0f1,	// (0x00033a1e) fshwr2_func_candi_cell_pane_g1

0xc128,	// (0x00033a55) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc128,	// (0x00033a55) fshwr2_func_candi_cell_pane_t1

0xc271,	// (0x00033b9e) bg_button_pane_cp08

0xc7d9,	// (0x00034106) cell_fshwr2_syb_bg_pane

0xc143,	// (0x00033a70) cell_fshwr2_syb_bg_pane_g1

0xc156,	// (0x00033a83) cell_fshwr2_syb_bg_pane_t1

0xc697,	// (0x00033fc4) main_tmo_pane

0xaeec,	// (0x00032819) uni_indicator_pane_g1_ParamLimits

0xaf02,	// (0x0003282f) uni_indicator_pane_g2_ParamLimits

0xaf18,	// (0x00032845) uni_indicator_pane_g3_ParamLimits

0x32d3,	// (0x0002ac00) uni_indicator_pane_g4_ParamLimits

0x32d3,	// (0x0002ac00) uni_indicator_pane_g4

0x32e7,	// (0x0002ac14) uni_indicator_pane_g5_ParamLimits

0x32e7,	// (0x0002ac14) uni_indicator_pane_g5

0x32e7,	// (0x0002ac14) uni_indicator_pane_g6_ParamLimits

0x32e7,	// (0x0002ac14) uni_indicator_pane_g6

0xf8e8,	// (0x00037215) uni_indicator_pane_g_ParamLimits

0xd437,	// (0x00034d64) popup_tmo_note_window_ParamLimits

0xd437,	// (0x00034d64) popup_tmo_note_window

0xc697,	// (0x00033fc4) fshwr2_bg_pane

0xc119,	// (0x00033a46) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc119,	// (0x00033a46) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x000377bc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x000377bc) fshwr2_func_candi_cell_pane_g

0x4738,	// (0x0002c065) bg_popup_window_pane_cp01

0x2694,	// (0x00029fc1) bg_popup_window_pane_g1_cp01

0x72d0,	// (0x0002ebfd) bg_popup_window_pane_cp22_ParamLimits

0x72d0,	// (0x0002ebfd) bg_popup_window_pane_cp22

0xe1f9,	// (0x00035b26) listscroll_tmo_link_pane_ParamLimits

0xe1f9,	// (0x00035b26) listscroll_tmo_link_pane

0x731e,	// (0x0002ec4b) popup_tmo_note_window_g1_ParamLimits

0x731e,	// (0x0002ec4b) popup_tmo_note_window_g1

0xe239,	// (0x00035b66) tmo_note_info_pane_ParamLimits

0xe239,	// (0x00035b66) tmo_note_info_pane

0xe253,	// (0x00035b80) list_tmo_note_info_pane_g1_ParamLimits

0xe253,	// (0x00035b80) list_tmo_note_info_pane_g1

0x735c,	// (0x0002ec89) list_tmo_note_info_pane_g2_ParamLimits

0x735c,	// (0x0002ec89) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x000377c1) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x000377c1) list_tmo_note_info_pane_g

0x7378,	// (0x0002eca5) list_tmo_note_info_text_pane_ParamLimits

0x7378,	// (0x0002eca5) list_tmo_note_info_text_pane

0x73f9,	// (0x0002ed26) list_tmo_link_pane

0x7406,	// (0x0002ed33) scroll_pane_cp20

0x7413,	// (0x0002ed40) list_single_tmo_link_pane_ParamLimits

0x7413,	// (0x0002ed40) list_single_tmo_link_pane

0x7423,	// (0x0002ed50) list_single_tmo_link_pane_t1

0x7431,	// (0x0002ed5e) list_tmo_note_info_text_pane_t1_ParamLimits

0x7431,	// (0x0002ed5e) list_tmo_note_info_text_pane_t1

0x9597,	// (0x00030ec4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9597,	// (0x00030ec4) aid_size_touch_scroll_bar_cp01

0x8955,	// (0x00030282) aid_size_touch_slider_marker

0x8e63,	// (0x00030790) popup_settings_window_ParamLimits

0x8e63,	// (0x00030790) popup_settings_window

0xea21,	// (0x0003634e) popup_candi_list_indi_window

0x0784,	// (0x000280b1) aid_touch_navi_pane_ParamLimits

0x1cce,	// (0x000295fb) rs_clock_indi_pane

0x1cd7,	// (0x00029604) sctrl_sk_bottom_pane_ParamLimits

0x1ce8,	// (0x00029615) sctrl_sk_top_pane_ParamLimits

0xbc0f,	// (0x0003353c) popup_fep_tooltip_window

0x6d63,	// (0x0002e690) aid_size_cell_widget_grid_ParamLimits

0x6dd8,	// (0x0002e705) cell_ai5_widget_pane_g1_ParamLimits

0x6dd8,	// (0x0002e705) cell_ai5_widget_pane_g1

0x6e3b,	// (0x0002e768) cell_ai5_widget_pane_g6_ParamLimits

0x6e47,	// (0x0002e774) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe08,	// (0x00037735) cell_ai5_widget_pane_g_ParamLimits

0xfe08,	// (0x00037735) cell_ai5_widget_pane_g

0x6fb7,	// (0x0002e8e4) cell_ai5_widget_pane_t10_ParamLimits

0x6fb7,	// (0x0002e8e4) cell_ai5_widget_pane_t10

0x6ffa,	// (0x0002e927) grid_ai5_widget_pane_ParamLimits

0x7092,	// (0x0002e9bf) cell_contacts_ai5_widget_pane_ParamLimits

0x7092,	// (0x0002e9bf) cell_contacts_ai5_widget_pane

0x726c,	// (0x0002eb99) popup_discreet_window_t3_ParamLimits

0x726c,	// (0x0002eb99) popup_discreet_window_t3

0xc06c,	// (0x00033999) popup_fshwr2_char_preview_window_ParamLimits

0xc06c,	// (0x00033999) popup_fshwr2_char_preview_window

0xe26a,	// (0x00035b97) tmo_note_info_pane_t1

0xe27f,	// (0x00035bac) tmo_note_info_pane_t2

0xe296,	// (0x00035bc3) tmo_note_info_pane_t3

0x73d5,	// (0x0002ed02) tmo_note_info_pane_t4

0x73e7,	// (0x0002ed14) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x000377c6) tmo_note_info_pane_t

0x73f9,	// (0x0002ed26) list_tmo_link_pane_ParamLimits

0x7406,	// (0x0002ed33) scroll_pane_cp20_ParamLimits

0xc271,	// (0x00033b9e) bg_popup_fep_char_preview_window_cp01

0xe2ab,	// (0x00035bd8) popup_fshwr2_char_preview_window_t1

0x7458,	// (0x0002ed85) popup_candi_list_indi_window_g1

0x7461,	// (0x0002ed8e) bg_cell_contacts_ai5_widget_pane

0x746d,	// (0x0002ed9a) cell_contacts_ai5_widget_pane_g1

0x4e1f,	// (0x0002c74c) cell_contacts_ai5_widget_pane_g2

0x7482,	// (0x0002edaf) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x000377d1) cell_contacts_ai5_widget_pane_g

0x748e,	// (0x0002edbb) cell_contacts_ai5_widget_pane_t1

0xc697,	// (0x00033fc4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7505,	// (0x0002ee32) settings_container_pane

0xcf53,	// (0x00034880) listscroll_set_pane_copy1

0x3e14,	// (0x0002b741) scroll_pane_cp121_copy1

0x11aa,	// (0x00028ad7) set_content_pane_copy1

0xe2b9,	// (0x00035be6) aid_height_set_list_copy1_ParamLimits

0xe2b9,	// (0x00035be6) aid_height_set_list_copy1

0x34df,	// (0x0002ae0c) aid_size_parent_copy1_ParamLimits

0x34df,	// (0x0002ae0c) aid_size_parent_copy1

0xe2c5,	// (0x00035bf2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe2c5,	// (0x00035bf2) button_value_adjust_pane_cp6_copy1

0xc7d9,	// (0x00034106) list_highlight_pane_cp2_copy1_ParamLimits

0xc7d9,	// (0x00034106) list_highlight_pane_cp2_copy1

0xe2d9,	// (0x00035c06) list_set_pane_copy1_ParamLimits

0xe2d9,	// (0x00035c06) list_set_pane_copy1

0x74a0,	// (0x0002edcd) main_pane_set_t1_copy1_ParamLimits

0x74a0,	// (0x0002edcd) main_pane_set_t1_copy1

0x74da,	// (0x0002ee07) main_pane_set_t2_copy1_ParamLimits

0x74da,	// (0x0002ee07) main_pane_set_t2_copy1

0xe386,	// (0x00035cb3) main_pane_set_t3_copy1

0xe394,	// (0x00035cc1) main_pane_set_t4_copy1

0x74f9,	// (0x0002ee26) set_content_pane_g1_copy1_ParamLimits

0x74f9,	// (0x0002ee26) set_content_pane_g1_copy1

0xe3a2,	// (0x00035ccf) setting_code_pane_copy1

0x7602,	// (0x0002ef2f) setting_slider_graphic_pane_copy1

0x7602,	// (0x0002ef2f) setting_slider_pane_copy1

0x760a,	// (0x0002ef37) setting_text_pane_copy1

0x760a,	// (0x0002ef37) setting_volume_pane_copy1

0xe3a2,	// (0x00035ccf) settings_code_pane_cp2_copy1

0xe3aa,	// (0x00035cd7) settings_code_pane_cp_copy1_ParamLimits

0xe3aa,	// (0x00035cd7) settings_code_pane_cp_copy1

0xc16c,	// (0x00033a99) volume_set_pane_copy1

0xe3be,	// (0x00035ceb) volume_set_pane_g10_copy1

0xe3c6,	// (0x00035cf3) volume_set_pane_g1_copy1

0xe3ce,	// (0x00035cfb) volume_set_pane_g2_copy1

0xe3d6,	// (0x00035d03) volume_set_pane_g3_copy1

0xe3de,	// (0x00035d0b) volume_set_pane_g4_copy1

0xe3e6,	// (0x00035d13) volume_set_pane_g5_copy1

0xe3ee,	// (0x00035d1b) volume_set_pane_g6_copy1

0xe3f6,	// (0x00035d23) volume_set_pane_g7_copy1

0xe3fe,	// (0x00035d2b) volume_set_pane_g8_copy1

0xe406,	// (0x00035d33) volume_set_pane_g9_copy1

0xc2e1,	// (0x00033c0e) bg_set_opt_pane_cp_copy1_ParamLimits

0xc2e1,	// (0x00033c0e) bg_set_opt_pane_cp_copy1

0xc174,	// (0x00033aa1) setting_slider_pane_t1_copy1_ParamLimits

0xc174,	// (0x00033aa1) setting_slider_pane_t1_copy1

0xc193,	// (0x00033ac0) setting_slider_pane_t2_copy1_ParamLimits

0xc193,	// (0x00033ac0) setting_slider_pane_t2_copy1

0xc1ad,	// (0x00033ada) setting_slider_pane_t3_copy1_ParamLimits

0xc1ad,	// (0x00033ada) setting_slider_pane_t3_copy1

0xc1c5,	// (0x00033af2) slider_set_pane_copy1_ParamLimits

0xc1c5,	// (0x00033af2) slider_set_pane_copy1

0xc6ef,	// (0x0003401c) set_opt_bg_pane_g1_copy2

0xc6f7,	// (0x00034024) set_opt_bg_pane_g2_copy2

0x7676,	// (0x0002efa3) set_opt_bg_pane_g3_copy2

0xc707,	// (0x00034034) set_opt_bg_pane_g4_copy2

0xc70f,	// (0x0003403c) set_opt_bg_pane_g5_copy2

0xc717,	// (0x00034044) set_opt_bg_pane_g6_copy2

0xe40e,	// (0x00035d3b) set_opt_bg_pane_g7_copy2

0x7688,	// (0x0002efb5) set_opt_bg_pane_g8_copy2

0x7692,	// (0x0002efbf) set_opt_bg_pane_g9_copy2

0xc1db,	// (0x00033b08) aid_size_touch_slider_mark_copy1_ParamLimits

0xc1db,	// (0x00033b08) aid_size_touch_slider_mark_copy1

0xe416,	// (0x00035d43) slider_set_pane_g1_copy1

0x2720,	// (0x0002a04d) slider_set_pane_g2_copy1

0xb037,	// (0x00032964) slider_set_pane_g3_copy1_ParamLimits

0xb037,	// (0x00032964) slider_set_pane_g3_copy1

0xb04b,	// (0x00032978) slider_set_pane_g4_copy1_ParamLimits

0xb04b,	// (0x00032978) slider_set_pane_g4_copy1

0xb063,	// (0x00032990) slider_set_pane_g5_copy1_ParamLimits

0xb063,	// (0x00032990) slider_set_pane_g5_copy1

0xb037,	// (0x00032964) slider_set_pane_g6_copy1_ParamLimits

0xb037,	// (0x00032964) slider_set_pane_g6_copy1

0xc1ef,	// (0x00033b1c) slider_set_pane_g7_copy1_ParamLimits

0xc1ef,	// (0x00033b1c) slider_set_pane_g7_copy1

0xc285,	// (0x00033bb2) bg_set_opt_pane_cp2_copy1

0xe41f,	// (0x00035d4c) setting_slider_graphic_pane_g1_copy1

0xe428,	// (0x00035d55) setting_slider_graphic_pane_t1_copy1

0xe438,	// (0x00035d65) setting_slider_graphic_pane_t2_copy1

0xe448,	// (0x00035d75) slider_set_pane_cp_copy1

0x76de,	// (0x0002f00b) input_focus_pane_cp1_copy1

0x76e7,	// (0x0002f014) list_set_text_pane_copy1

0x76ef,	// (0x0002f01c) setting_text_pane_g1_copy1

0xf0e6,	// (0x00036a13) set_text_pane_t1_copy1

0x76de,	// (0x0002f00b) input_focus_pane_cp2_copy1

0x76ef,	// (0x0002f01c) setting_code_pane_g1_copy1

0x76f8,	// (0x0002f025) setting_code_pane_t1_copy1

0x7706,	// (0x0002f033) list_set_graphic_pane_copy1

0xc285,	// (0x00033bb2) bg_set_opt_pane_cp4_copy1

0xccc4,	// (0x000345f1) list_set_graphic_pane_g1_copy1_ParamLimits

0xccc4,	// (0x000345f1) list_set_graphic_pane_g1_copy1

0x771a,	// (0x0002f047) list_set_graphic_pane_g2_copy1

0xccdc,	// (0x00034609) list_set_graphic_pane_t1_copy1_ParamLimits

0xccdc,	// (0x00034609) list_set_graphic_pane_t1_copy1

0x4738,	// (0x0002c065) rs_clock_indi_pane_g1

0x7722,	// (0x0002f04f) rs_clock_indi_pane_t1

0x7730,	// (0x0002f05d) rs_indi_pane

0x7738,	// (0x0002f065) rs_indi_pane_g1

0x7741,	// (0x0002f06e) rs_indi_pane_g2

0x7458,	// (0x0002ed85) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x000377d8) rs_indi_pane_g

0xcf53,	// (0x00034880) bg_popup_preview_window_pane_cp03

0x774a,	// (0x0002f077) popup_fep_tooltip_window_t1

0xbb26,	// (0x00033453) popup_note2_window_g2_ParamLimits

0xbb26,	// (0x00033453) popup_note2_window_g2

0x0001,

0xfc3f,	// (0x0003756c) popup_note2_window_g_ParamLimits

0xfc3f,	// (0x0003756c) popup_note2_window_g

0x58a6,	// (0x0002d1d3) bg_popup_sub_pane_cp11_ParamLimits

0x58b3,	// (0x0002d1e0) cell_ai3_links_pane_g1_ParamLimits

0x58ca,	// (0x0002d1f7) cell_ai3_links_pane_t1

0xf0e6,	// (0x00036a13) set_text_pane_t1_copy1_ParamLimits

0xce89,	// (0x000347b6) cell_graphic_popup_pane_cp2_ParamLimits

0xce89,	// (0x000347b6) cell_graphic_popup_pane_cp2

0xe458,	// (0x00035d85) cell_graphic_popup_pane_g1_cp2

0xc565,	// (0x00033e92) cell_graphic_popup_pane_g2_cp2

0x7760,	// (0x0002f08d) cell_graphic_popup_pane_g3_cp2

0xe460,	// (0x00035d8d) cell_graphic_popup_pane_t2_cp2

0xc576,	// (0x00033ea3) grid_highlight_pane_cp3_cp2

0xc966,	// (0x00034293) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc697,	// (0x00033fc4) main_tmo_pane_ParamLimits

0xd42b,	// (0x00034d58) popup_tmo_big_image_note_window

0x6dc7,	// (0x0002e6f4) cell_ai5_widget_list_pane

0x6dcf,	// (0x0002e6fc) cell_ai5_widget_lrg_icon_pane

0xe26a,	// (0x00035b97) tmo_note_info_pane_t1_ParamLimits

0xe27f,	// (0x00035bac) tmo_note_info_pane_t2_ParamLimits

0xe296,	// (0x00035bc3) tmo_note_info_pane_t3_ParamLimits

0x73d5,	// (0x0002ed02) tmo_note_info_pane_t4_ParamLimits

0x73e7,	// (0x0002ed14) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x000377c6) tmo_note_info_pane_t_ParamLimits

0x7505,	// (0x0002ee32) settings_container_pane_ParamLimits

0xe450,	// (0x00035d7d) indicator_popup_pane_cp5

0xe450,	// (0x00035d7d) indicator_popup_pane_cp6

0x7706,	// (0x0002f033) list_set_graphic_pane_copy1_ParamLimits

0xc271,	// (0x00033b9e) bg_popup_window_pane_cp23

0x7776,	// (0x0002f0a3) popup_tmo_big_image_note_window_g1

0x777f,	// (0x0002f0ac) popup_tmo_big_image_note_window_t1

0x778f,	// (0x0002f0bc) popup_tmo_big_image_note_window_t2

0x779f,	// (0x0002f0cc) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x000377df) popup_tmo_big_image_note_window_t

0x4738,	// (0x0002c065) cell_ai5_widget_lrg_icon_pane_g1

0x77af,	// (0x0002f0dc) cell_ai5_widget_lrg_icon_pane_t1

0x77bd,	// (0x0002f0ea) cell_ai5_widget_list_row_pane_ParamLimits

0x77bd,	// (0x0002f0ea) cell_ai5_widget_list_row_pane

0x77d4,	// (0x0002f101) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x77d4,	// (0x0002f101) cell_ai5_widget_list_row_pane_g1

0xe46e,	// (0x00035d9b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe46e,	// (0x00035d9b) cell_ai5_widget_list_row_pane_t1

0x780c,	// (0x0002f139) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x780c,	// (0x0002f139) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x000377e6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x000377e6) cell_ai5_widget_list_row_pane_t

0xc271,	// (0x00033b9e) main_fep_vtchi_ss_pane

0x785c,	// (0x0002f189) popup_fep_char_pre_window

0x7864,	// (0x0002f191) popup_fep_ituss_window

0xe4c9,	// (0x00035df6) popup_fep_vkbss_window

0xc7d9,	// (0x00034106) grid_vkbss_keypad_pane_ParamLimits

0xc7d9,	// (0x00034106) grid_vkbss_keypad_pane

0x78d0,	// (0x0002f1fd) ituss_keypad_pane

0x2748,	// (0x0002a075) aid_vkbss_key_offset_ParamLimits

0x2748,	// (0x0002a075) aid_vkbss_key_offset

0xc205,	// (0x00033b32) cell_vkbss_key_pane_ParamLimits

0xc205,	// (0x00033b32) cell_vkbss_key_pane

0x78e0,	// (0x0002f20d) bg_cell_vkbss_key_g1_ParamLimits

0x78e0,	// (0x0002f20d) bg_cell_vkbss_key_g1

0xe4d6,	// (0x00035e03) cell_vkbss_key_3p_pane_ParamLimits

0xe4d6,	// (0x00035e03) cell_vkbss_key_3p_pane

0xe50c,	// (0x00035e39) cell_vkbss_key_g1_ParamLimits

0xe50c,	// (0x00035e39) cell_vkbss_key_g1

0xe542,	// (0x00035e6f) cell_vkbss_key_t1_ParamLimits

0xe542,	// (0x00035e6f) cell_vkbss_key_t1

0x27ac,	// (0x0002a0d9) cell_ituss_key_pane_ParamLimits

0x27ac,	// (0x0002a0d9) cell_ituss_key_pane

0x79b4,	// (0x0002f2e1) bg_cell_ituss_key_g1_ParamLimits

0x79b4,	// (0x0002f2e1) bg_cell_ituss_key_g1

0x79c0,	// (0x0002f2ed) cell_ituss_key_pane_g1_ParamLimits

0x79c0,	// (0x0002f2ed) cell_ituss_key_pane_g1

0x27bd,	// (0x0002a0ea) cell_ituss_key_pane_g2_ParamLimits

0x27bd,	// (0x0002a0ea) cell_ituss_key_pane_g2

0x0005,

0xfec0,	// (0x000377ed) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x000377ed) cell_ituss_key_pane_g

0x2841,	// (0x0002a16e) cell_ituss_key_t1_ParamLimits

0x2841,	// (0x0002a16e) cell_ituss_key_t1

0x287b,	// (0x0002a1a8) cell_ituss_key_t2_ParamLimits

0x287b,	// (0x0002a1a8) cell_ituss_key_t2

0x28ad,	// (0x0002a1da) cell_ituss_key_t3_ParamLimits

0x28ad,	// (0x0002a1da) cell_ituss_key_t3

0x28de,	// (0x0002a20b) cell_ituss_key_t4_ParamLimits

0x28de,	// (0x0002a20b) cell_ituss_key_t4

0x0004,

0xfecd,	// (0x000377fa) cell_ituss_key_t_ParamLimits

0xfecd,	// (0x000377fa) cell_ituss_key_t

0xe59e,	// (0x00035ecb) cell_vkbss_key_3p_pane_g1

0xe5a6,	// (0x00035ed3) cell_vkbss_key_3p_pane_g2

0xe5ae,	// (0x00035edb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed8,	// (0x00037805) cell_vkbss_key_3p_pane_g

0xcf53,	// (0x00034880) bg_popup_fep_char_preview_window_cp02

0x79fe,	// (0x0002f32b) popup_fep_char_pre_window_t1

0xe0f2,	// (0x00035a1f) main_ai5_sk_pane

0x7461,	// (0x0002ed8e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x746d,	// (0x0002ed9a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e1f,	// (0x0002c74c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7482,	// (0x0002edaf) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x000377d1) cell_contacts_ai5_widget_pane_g_ParamLimits

0x748e,	// (0x0002edbb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc697,	// (0x00033fc4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe5b6,	// (0x00035ee3) main_ai5_sk_pane_g1

0xab3d,	// (0x0003246a) popup_query_code_window_g1

0xe4ba,	// (0x00035de7) popup_fep_vkb_icf_pane

0x78a7,	// (0x0002f1d4) popup_fep_vtchi_icf_pane

0x7a15,	// (0x0002f342) bg_icf_pane

0x7a15,	// (0x0002f342) list_vkb_icf_pane

0x7a21,	// (0x0002f34e) bg_icf_pane_cp01

0x7a34,	// (0x0002f361) vtchi_icf_list_pane

0xe60b,	// (0x00035f38) list_vkb_icf_pane_t1_ParamLimits

0xe60b,	// (0x00035f38) list_vkb_icf_pane_t1

0x7ab6,	// (0x0002f3e3) vtchi_icf_list_pane_t1_ParamLimits

0x7ab6,	// (0x0002f3e3) vtchi_icf_list_pane_t1

0x7864,	// (0x0002f191) popup_fep_ituss_window_ParamLimits

0x78a7,	// (0x0002f1d4) popup_fep_vtchi_icf_pane_ParamLimits

0x78d0,	// (0x0002f1fd) ituss_keypad_pane_ParamLimits

0x273e,	// (0x0002a06b) ituss_sks_pane

0x7a15,	// (0x0002f342) bg_icf_pane_ParamLimits

0xe49f,	// (0x00035dcc) icf_edit_indi_pane_ParamLimits

0xe49f,	// (0x00035dcc) icf_edit_indi_pane

0x7a15,	// (0x0002f342) list_vkb_icf_pane_ParamLimits

0x7a21,	// (0x0002f34e) bg_icf_pane_cp01_ParamLimits

0x784f,	// (0x0002f17c) icf_edit_indi_pane_cp01_ParamLimits

0x784f,	// (0x0002f17c) icf_edit_indi_pane_cp01

0x7a34,	// (0x0002f361) vtchi_query_pane

0x6bd5,	// (0x0002e502) icf_edit_indi_pane_g1_ParamLimits

0x6bd5,	// (0x0002e502) icf_edit_indi_pane_g1

0xe623,	// (0x00035f50) icf_edit_indi_pane_g2_ParamLimits

0xe623,	// (0x00035f50) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00037830) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00037830) icf_edit_indi_pane_g

0xe637,	// (0x00035f64) icf_edit_indi_pane_t1

0x7ad7,	// (0x0002f404) bg_input_focus_pane_cp042

0xc5d9,	// (0x00033f06) vtchi_button_pane

0x7ae0,	// (0x0002f40d) vtchi_query_pane_t1

0x7aee,	// (0x0002f41b) vtchi_query_pane_t2

0x7afc,	// (0x0002f429) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x0003781f) vtchi_query_pane_t

0xc271,	// (0x00033b9e) bg_button_pane_cp13

0x7b0a,	// (0x0002f437) vtchi_button_pane_g1

0x2921,	// (0x0002a24e) ituss_sks_pane_g1

0x292c,	// (0x0002a259) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x00037826) ituss_sks_pane_g

0x7b12,	// (0x0002f43f) ituss_sks_pane_t1

0x7b20,	// (0x0002f44d) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x0003782b) ituss_sks_pane_t

0x41ac,	// (0x0002bad9) indicator_nsta_pane_cp_g1

0x41b5,	// (0x0002bae2) indicator_nsta_pane_cp_g2

0x41bd,	// (0x0002baea) indicator_nsta_pane_cp_g3

0x41c5,	// (0x0002baf2) indicator_nsta_pane_cp_g4

0x41b5,	// (0x0002bae2) indicator_nsta_pane_cp_g5

0x41bd,	// (0x0002baea) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x000373b6) indicator_nsta_pane_cp_g

0xded1,	// (0x000357fe) cell_graphic2_pane_t2_ParamLimits

0xded1,	// (0x000357fe) cell_graphic2_pane_t2

0x0001,

0xfd8f,	// (0x000376bc) cell_graphic2_pane_t_ParamLimits

0xfd8f,	// (0x000376bc) cell_graphic2_pane_t

0xdf08,	// (0x00035835) cell_graphic2_control_pane_t1

0x986f,	// (0x0003119c) signal_pane_g3_ParamLimits

0x986f,	// (0x0003119c) signal_pane_g3

0x9883,	// (0x000311b0) signal_pane_g4_ParamLimits

0x9883,	// (0x000311b0) signal_pane_g4

0x781e,	// (0x0002f14b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x781e,	// (0x0002f14b) cell_ai5_widget_list_row_pane_t3

0x79d4,	// (0x0002f301) cell_ituss_key_pane_t1_ParamLimits

0x79d4,	// (0x0002f301) cell_ituss_key_pane_t1

0x0e79,	// (0x000287a6) form_field_data_wide_pane_vc_t2_ParamLimits

0x0e79,	// (0x000287a6) form_field_data_wide_pane_vc_t2

0x0e8d,	// (0x000287ba) form_field_data_wide_pane_vc_t3_ParamLimits

0x0e8d,	// (0x000287ba) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x000370fd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x000370fd) form_field_data_wide_pane_vc_t

0x3e56,	// (0x0002b783) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3e56,	// (0x0002b783) form_field_slider_wide_pane_vc_t3

0x3f34,	// (0x0002b861) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3f34,	// (0x0002b861) form_field_popup_wide_pane_vc_t2

0x3f4b,	// (0x0002b878) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3f4b,	// (0x0002b878) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x000373a5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x000373a5) form_field_popup_wide_pane_vc_t

0xbfd6,	// (0x00033903) aid_fshwr2_btn_pane_ParamLimits

0xbfea,	// (0x00033917) aid_fshwr2_syb_pane_ParamLimits

0xbffe,	// (0x0003392b) aid_fshwr2_txt_pane_ParamLimits

0xc697,	// (0x00033fc4) fshwr2_bg_pane_ParamLimits

0xc00e,	// (0x0003393b) fshwr2_func_candi_pane_ParamLimits

0xc02e,	// (0x0003395b) fshwr2_hwr_syb_pane_ParamLimits

0xc050,	// (0x0003397d) fshwr2_icf_pane_ParamLimits

0xee1b,	// (0x00036748) list_double_graphic_pane_vc_g4_ParamLimits

0xee1b,	// (0x00036748) list_double_graphic_pane_vc_g4

0x27dd,	// (0x0002a10a) cell_ituss_key_pane_g3_ParamLimits

0x27dd,	// (0x0002a10a) cell_ituss_key_pane_g3

0x290f,	// (0x0002a23c) cell_ituss_key_t5_ParamLimits

0x290f,	// (0x0002a23c) cell_ituss_key_t5

0xe4c9,	// (0x00035df6) popup_fep_vkbss_window_ParamLimits

0x5e5f,	// (0x0002d78c) aid_cell_ai5_quarter

0xe637,	// (0x00035f64) icf_edit_indi_pane_t1_ParamLimits

0x928c,	// (0x00030bb9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x928c,	// (0x00030bb9) aid_tch_indicator_popup_pane_cp2

0x929f,	// (0x00030bcc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x929f,	// (0x00030bcc) aid_tch_query_popup_data_pane_cp2

0x11ee,	// (0x00028b1b) aid_tch_query_popup_pane_ParamLimits

0x11ee,	// (0x00028b1b) aid_tch_query_popup_pane

0x11ee,	// (0x00028b1b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x11ee,	// (0x00028b1b) aid_tch_query_popup_data_pane_cp1

0xc7d9,	// (0x00034106) cell_fshwr2_syb_bg_pane_ParamLimits

0xc143,	// (0x00033a70) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc156,	// (0x00033a83) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe4ba,	// (0x00035de7) popup_fep_vkb_icf_pane_ParamLimits

0xbf3c,	// (0x00033869) bg_popup_fep_char_preview_window_g10

0x6e8f,	// (0x0002e7bc) cell_ai5_widget_pane_g11_ParamLimits

0x6e8f,	// (0x0002e7bc) cell_ai5_widget_pane_g11

0x6e9b,	// (0x0002e7c8) cell_ai5_widget_pane_g12_ParamLimits

0x6e9b,	// (0x0002e7c8) cell_ai5_widget_pane_g12

0x6ea7,	// (0x0002e7d4) cell_ai5_widget_pane_g13_ParamLimits

0x6ea7,	// (0x0002e7d4) cell_ai5_widget_pane_g13

0x6fd6,	// (0x0002e903) cell_ai5_widget_pane_t11_ParamLimits

0x6fd6,	// (0x0002e903) cell_ai5_widget_pane_t11

0x6fe8,	// (0x0002e915) cell_ai5_widget_pane_t12_ParamLimits

0x6fe8,	// (0x0002e915) cell_ai5_widget_pane_t12

0x27e9,	// (0x0002a116) cell_ituss_key_pane_g4_ParamLimits

0x27e9,	// (0x0002a116) cell_ituss_key_pane_g4

0x2805,	// (0x0002a132) cell_ituss_key_pane_g5_ParamLimits

0x2805,	// (0x0002a132) cell_ituss_key_pane_g5

0x2821,	// (0x0002a14e) cell_ituss_key_pane_g6_ParamLimits

0x2821,	// (0x0002a14e) cell_ituss_key_pane_g6

0x0c5f,	// (0x0002858c) bg_icf_pane_g1

0xe5bf,	// (0x00035eec) bg_icf_pane_g2

0xe5c9,	// (0x00035ef6) bg_icf_pane_g3

0xe5d1,	// (0x00035efe) bg_icf_pane_g4

0xe5db,	// (0x00035f08) bg_icf_pane_g5

0xe5e5,	// (0x00035f12) bg_icf_pane_g6

0xe5ef,	// (0x00035f1c) bg_icf_pane_g7

0xe5f7,	// (0x00035f24) bg_icf_pane_g8

0xe601,	// (0x00035f2e) bg_icf_pane_g9

0x0008,

0xfedf,	// (0x0003780c) bg_icf_pane_g

0x78bd,	// (0x0002f1ea) popup_hyb_candi_window_ParamLimits

0x78bd,	// (0x0002f1ea) popup_hyb_candi_window

0x0d63,	// (0x00028690) bg_popup_sub_pane_cp01_ParamLimits

0x0d63,	// (0x00028690) bg_popup_sub_pane_cp01

0x7b5b,	// (0x0002f488) entry_hyb_candi_pane_ParamLimits

0x7b5b,	// (0x0002f488) entry_hyb_candi_pane

0x7b6a,	// (0x0002f497) grid_hyb_candi_pane_ParamLimits

0x7b6a,	// (0x0002f497) grid_hyb_candi_pane

0x7b7f,	// (0x0002f4ac) grid_hyb_phrase_pane_ParamLimits

0x7b7f,	// (0x0002f4ac) grid_hyb_phrase_pane

0x7b8e,	// (0x0002f4bb) cell_hyb_candi_pane_ParamLimits

0x7b8e,	// (0x0002f4bb) cell_hyb_candi_pane

0x7bb1,	// (0x0002f4de) cell_hyb_candi_scroll_pane

0xcae9,	// (0x00034416) cell_hyb_candi_pane_g1

0x7bba,	// (0x0002f4e7) cell_hyb_candi_pane_t1

0x7bc8,	// (0x0002f4f5) cell_hyb_phrase_pane

0xcae9,	// (0x00034416) cell_hyb_phrase_pane_g1

0x7bd1,	// (0x0002f4fe) cell_hyb_phrase_pane_t1

0x7bdf,	// (0x0002f50c) entry_hyb_candi_pane_t1

0xcf53,	// (0x00034880) input_focus_pane_cp06

0x7bed,	// (0x0002f51a) cell_hyb_candi_scroll_pane_g1

0x7bf5,	// (0x0002f522) cell_hyb_candi_scroll_pane_g1_aid

0x7bfd,	// (0x0002f52a) cell_hyb_candi_scroll_pane_g2

0x7c05,	// (0x0002f532) cell_hyb_candi_scroll_pane_g2_aid

0x7c0d,	// (0x0002f53a) cell_hyb_candi_scroll_pane_g3

0x7c15,	// (0x0002f542) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

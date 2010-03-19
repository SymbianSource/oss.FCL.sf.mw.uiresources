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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00000000 };

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
0xb231,	// (0x0000b231) Screen

0xb23d,	// (0x0000b23d) application_window_ParamLimits

0xb23d,	// (0x0000b23d) application_window

0x002e,	// (0x0000002e) screen_g1

0xb275,	// (0x0000b275) area_bottom_pane_ParamLimits

0xb275,	// (0x0000b275) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc828,	// (0x0000c828) battery_pane_ParamLimits

0xc828,	// (0x0000c828) battery_pane

0x405c,	// (0x0000405c) bg_status_flat_pane_g8

0x4064,	// (0x00004064) bg_status_flat_pane_g9

0x31e3,	// (0x000031e3) context_pane_ParamLimits

0x31e3,	// (0x000031e3) context_pane

0xc993,	// (0x0000c993) navi_pane_ParamLimits

0xc993,	// (0x0000c993) navi_pane

0xca0a,	// (0x0000ca0a) signal_pane_ParamLimits

0xca0a,	// (0x0000ca0a) signal_pane

0x0008,

0xabab,	// (0x0000abab) bg_status_flat_pane_g

0xca9a,	// (0x0000ca9a) status_pane_g1_ParamLimits

0xca9a,	// (0x0000ca9a) status_pane_g1

0xcab0,	// (0x0000cab0) status_pane_g2_ParamLimits

0xcab0,	// (0x0000cab0) status_pane_g2

0x3403,	// (0x00003403) status_pane_g3_ParamLimits

0x3403,	// (0x00003403) status_pane_g3

0x0004,

0xef4d,	// (0x0000ef4d) status_pane_g_ParamLimits

0xef4d,	// (0x0000ef4d) status_pane_g

0xcabc,	// (0x0000cabc) title_pane_ParamLimits

0xcabc,	// (0x0000cabc) title_pane

0xcb1d,	// (0x0000cb1d) uni_indicator_pane_ParamLimits

0xcb1d,	// (0x0000cb1d) uni_indicator_pane

0x2a9a,	// (0x00002a9a) bg_list_pane_ParamLimits

0x2a9a,	// (0x00002a9a) bg_list_pane

0xc0fa,	// (0x0000c0fa) find_pane

0xc102,	// (0x0000c102) listscroll_app_pane_ParamLimits

0xc102,	// (0x0000c102) listscroll_app_pane

0x2ace,	// (0x00002ace) listscroll_form_pane

0xc10e,	// (0x0000c10e) listscroll_gen_pane_ParamLimits

0xc10e,	// (0x0000c10e) listscroll_gen_pane

0x2ace,	// (0x00002ace) listscroll_set_pane

0x4e42,	// (0x00004e42) main_idle_act_pane

0x257a,	// (0x0000257a) main_idle_trad_pane

0x257a,	// (0x0000257a) main_list_empty_pane

0x2afc,	// (0x00002afc) main_midp_pane

0x2b08,	// (0x00002b08) main_pane_g1_ParamLimits

0x2b08,	// (0x00002b08) main_pane_g1

0xc122,	// (0x0000c122) popup_ai_message_window_ParamLimits

0xc122,	// (0x0000c122) popup_ai_message_window

0xc1b3,	// (0x0000c1b3) popup_fep_china_uni_window_ParamLimits

0xc1b3,	// (0x0000c1b3) popup_fep_china_uni_window

0x2c1a,	// (0x00002c1a) popup_fep_japan_candidate_window_ParamLimits

0x2c1a,	// (0x00002c1a) popup_fep_japan_candidate_window

0x2c38,	// (0x00002c38) popup_fep_japan_predictive_window_ParamLimits

0x2c38,	// (0x00002c38) popup_fep_japan_predictive_window

0xc20d,	// (0x0000c20d) popup_find_window

0xc22a,	// (0x0000c22a) popup_grid_graphic_window_ParamLimits

0xc22a,	// (0x0000c22a) popup_grid_graphic_window

0x2c9b,	// (0x00002c9b) popup_large_graphic_colour_window

0xc2bc,	// (0x0000c2bc) popup_menu_window_ParamLimits

0xc2bc,	// (0x0000c2bc) popup_menu_window

0xc488,	// (0x0000c488) popup_note_image_window

0xc44e,	// (0x0000c44e) popup_note_wait_window_ParamLimits

0xc44e,	// (0x0000c44e) popup_note_wait_window

0xc4a0,	// (0x0000c4a0) popup_note_window_ParamLimits

0xc4a0,	// (0x0000c4a0) popup_note_window

0xc546,	// (0x0000c546) popup_query_code_window_ParamLimits

0xc546,	// (0x0000c546) popup_query_code_window

0x2ee5,	// (0x00002ee5) popup_query_data_code_window_ParamLimits

0x2ee5,	// (0x00002ee5) popup_query_data_code_window

0xc580,	// (0x0000c580) popup_query_data_window_ParamLimits

0xc580,	// (0x0000c580) popup_query_data_window

0xc5f6,	// (0x0000c5f6) popup_query_sat_info_window_ParamLimits

0xc5f6,	// (0x0000c5f6) popup_query_sat_info_window

0xc68d,	// (0x0000c68d) popup_snote_single_graphic_window_ParamLimits

0xc68d,	// (0x0000c68d) popup_snote_single_graphic_window

0xc68d,	// (0x0000c68d) popup_snote_single_text_window_ParamLimits

0xc68d,	// (0x0000c68d) popup_snote_single_text_window

0x2f62,	// (0x00002f62) popup_sub_window_general

0x3090,	// (0x00003090) popup_window_general_ParamLimits

0x3090,	// (0x00003090) popup_window_general

0x30a5,	// (0x000030a5) power_save_pane

0xbf89,	// (0x0000bf89) control_pane_g1_ParamLimits

0xbf89,	// (0x0000bf89) control_pane_g1

0x2911,	// (0x00002911) control_pane_g2_ParamLimits

0x2911,	// (0x00002911) control_pane_g2

0x2934,	// (0x00002934) control_pane_g3_ParamLimits

0x2934,	// (0x00002934) control_pane_g3

0x0007,

0xef35,	// (0x0000ef35) control_pane_g_ParamLimits

0xef35,	// (0x0000ef35) control_pane_g

0xbff1,	// (0x0000bff1) control_pane_t1_ParamLimits

0xbff1,	// (0x0000bff1) control_pane_t1

0xc04f,	// (0x0000c04f) control_pane_t2_ParamLimits

0xc04f,	// (0x0000c04f) control_pane_t2

0x0002,

0xef46,	// (0x0000ef46) control_pane_t_ParamLimits

0xef46,	// (0x0000ef46) control_pane_t

0x2809,	// (0x00002809) navi_navi_volume_pane_cp1

0x2812,	// (0x00002812) status_small_icon_pane

0x281a,	// (0x0000281a) status_small_pane_g1_ParamLimits

0x281a,	// (0x0000281a) status_small_pane_g1

0x284e,	// (0x0000284e) status_small_pane_g2_ParamLimits

0x284e,	// (0x0000284e) status_small_pane_g2

0x285a,	// (0x0000285a) status_small_pane_g3_ParamLimits

0x285a,	// (0x0000285a) status_small_pane_g3

0x2866,	// (0x00002866) status_small_pane_g4_ParamLimits

0x2866,	// (0x00002866) status_small_pane_g4

0x2872,	// (0x00002872) status_small_pane_g5_ParamLimits

0x2872,	// (0x00002872) status_small_pane_g5

0x2881,	// (0x00002881) status_small_pane_g6_ParamLimits

0x2881,	// (0x00002881) status_small_pane_g6

0x0007,

0xaab7,	// (0x0000aab7) status_small_pane_g_ParamLimits

0xaab7,	// (0x0000aab7) status_small_pane_g

0x28b1,	// (0x000028b1) status_small_pane_t1

0x28d4,	// (0x000028d4) status_small_wait_pane_ParamLimits

0x28d4,	// (0x000028d4) status_small_wait_pane

0xbd9e,	// (0x0000bd9e) aid_levels_signal_ParamLimits

0xbd9e,	// (0x0000bd9e) aid_levels_signal

0xbdb6,	// (0x0000bdb6) signal_pane_g1_ParamLimits

0xbdb6,	// (0x0000bdb6) signal_pane_g1

0xbdd1,	// (0x0000bdd1) signal_pane_g2_ParamLimits

0xbdd1,	// (0x0000bdd1) signal_pane_g2

0x0001,

0xef19,	// (0x0000ef19) signal_pane_g_ParamLimits

0xef19,	// (0x0000ef19) signal_pane_g

0x1e27,	// (0x00001e27) context_pane_g1

0xb3ee,	// (0x0000b3ee) title_pane_g1

0xb423,	// (0x0000b423) title_pane_t1

0x04b1,	// (0x000004b1) title_pane_t2

0x04d7,	// (0x000004d7) title_pane_t3

0x0002,

0xee4b,	// (0x0000ee4b) title_pane_t

0xcb45,	// (0x0000cb45) aid_levels_battery_ParamLimits

0xcb45,	// (0x0000cb45) aid_levels_battery

0xcb61,	// (0x0000cb61) battery_pane_g1_ParamLimits

0xcb61,	// (0x0000cb61) battery_pane_g1

0xcb7e,	// (0x0000cb7e) battery_pane_g2_ParamLimits

0xcb7e,	// (0x0000cb7e) battery_pane_g2

0x0001,

0xef58,	// (0x0000ef58) battery_pane_g_ParamLimits

0xef58,	// (0x0000ef58) battery_pane_g

0xcf9e,	// (0x0000cf9e) uni_indicator_pane_g1

0xcfb3,	// (0x0000cfb3) uni_indicator_pane_g2

0xcfc8,	// (0x0000cfc8) uni_indicator_pane_g3

0x0005,

0xefa9,	// (0x0000efa9) uni_indicator_pane_g

0x23ea,	// (0x000023ea) navi_icon_pane_ParamLimits

0x23ea,	// (0x000023ea) navi_icon_pane

0x2331,	// (0x00002331) navi_midp_pane

0x2406,	// (0x00002406) navi_navi_pane

0x2410,	// (0x00002410) navi_text_pane_ParamLimits

0x2410,	// (0x00002410) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09a1,	// (0x000009a1) status_small_wait_pane_g2

0x0001,

0xac4e,	// (0x0000ac4e) status_small_wait_pane_g

0xcf3d,	// (0x0000cf3d) navi_navi_icon_text_pane

0xcf45,	// (0x0000cf45) navi_navi_pane_g1_ParamLimits

0xcf45,	// (0x0000cf45) navi_navi_pane_g1

0xcf57,	// (0x0000cf57) navi_navi_pane_g2_ParamLimits

0xcf57,	// (0x0000cf57) navi_navi_pane_g2

0x0001,

0xefa4,	// (0x0000efa4) navi_navi_pane_g_ParamLimits

0xefa4,	// (0x0000efa4) navi_navi_pane_g

0x4845,	// (0x00004845) navi_navi_tabs_pane

0xcf69,	// (0x0000cf69) navi_navi_text_pane

0xcf3d,	// (0x0000cf3d) navi_navi_volume_pane

0xcf2b,	// (0x0000cf2b) navi_text_pane_t1

0xcf1f,	// (0x0000cf1f) navi_icon_pane_g1

0x4736,	// (0x00004736) navi_navi_text_pane_t1

0xcf0e,	// (0x0000cf0e) navi_navi_volume_pane_g1

0xcf16,	// (0x0000cf16) volume_small_pane

0xce6a,	// (0x0000ce6a) navi_navi_icon_text_pane_g1

0xce72,	// (0x0000ce72) navi_navi_icon_text_pane_t1

0x2406,	// (0x00002406) navi_tabs_2_long_pane

0x2406,	// (0x00002406) navi_tabs_2_pane

0x2406,	// (0x00002406) navi_tabs_3_long_pane

0x2406,	// (0x00002406) navi_tabs_3_pane

0x2406,	// (0x00002406) navi_tabs_4_pane

0xce4a,	// (0x0000ce4a) tabs_2_active_pane_ParamLimits

0xce4a,	// (0x0000ce4a) tabs_2_active_pane

0xce5a,	// (0x0000ce5a) tabs_2_passive_pane_ParamLimits

0xce5a,	// (0x0000ce5a) tabs_2_passive_pane

0xce18,	// (0x0000ce18) tabs_3_active_pane_ParamLimits

0xce18,	// (0x0000ce18) tabs_3_active_pane

0xce28,	// (0x0000ce28) tabs_3_passive_pane_ParamLimits

0xce28,	// (0x0000ce28) tabs_3_passive_pane

0xce39,	// (0x0000ce39) tabs_3_passive_pane_cp_ParamLimits

0xce39,	// (0x0000ce39) tabs_3_passive_pane_cp

0xcdd4,	// (0x0000cdd4) tabs_4_active_pane_ParamLimits

0xcdd4,	// (0x0000cdd4) tabs_4_active_pane

0xcde5,	// (0x0000cde5) tabs_4_passive_pane_ParamLimits

0xcde5,	// (0x0000cde5) tabs_4_passive_pane

0xcdf6,	// (0x0000cdf6) tabs_4_passive_pane_cp_ParamLimits

0xcdf6,	// (0x0000cdf6) tabs_4_passive_pane_cp

0xce07,	// (0x0000ce07) tabs_4_passive_pane_cp2_ParamLimits

0xce07,	// (0x0000ce07) tabs_4_passive_pane_cp2

0xcdb4,	// (0x0000cdb4) tabs_2_long_active_pane_ParamLimits

0xcdb4,	// (0x0000cdb4) tabs_2_long_active_pane

0xcdc4,	// (0x0000cdc4) tabs_2_long_passive_pane_ParamLimits

0xcdc4,	// (0x0000cdc4) tabs_2_long_passive_pane

0xcd7f,	// (0x0000cd7f) tabs_3_long_active_pane_ParamLimits

0xcd7f,	// (0x0000cd7f) tabs_3_long_active_pane

0xcd90,	// (0x0000cd90) tabs_3_long_passive_pane_ParamLimits

0xcd90,	// (0x0000cd90) tabs_3_long_passive_pane

0xcda3,	// (0x0000cda3) tabs_3_long_passive_pane_cp_ParamLimits

0xcda3,	// (0x0000cda3) tabs_3_long_passive_pane_cp

0x44b1,	// (0x000044b1) volume_small_pane_g1

0xcd2e,	// (0x0000cd2e) volume_small_pane_g2

0xcd37,	// (0x0000cd37) volume_small_pane_g3

0xcd40,	// (0x0000cd40) volume_small_pane_g4

0xcd49,	// (0x0000cd49) volume_small_pane_g5

0xcd52,	// (0x0000cd52) volume_small_pane_g6

0xcd5b,	// (0x0000cd5b) volume_small_pane_g7

0xcd64,	// (0x0000cd64) volume_small_pane_g8

0xcd6d,	// (0x0000cd6d) volume_small_pane_g9

0xcd76,	// (0x0000cd76) volume_small_pane_g10

0x0009,

0xef7a,	// (0x0000ef7a) volume_small_pane_g

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2

0xb4af,	// (0x0000b4af) tabs_3_active_pane_g1

0xb4b7,	// (0x0000b4b7) tabs_3_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2

0xb4af,	// (0x0000b4af) tabs_3_passive_pane_g1

0xb4b7,	// (0x0000b4b7) tabs_3_passive_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3

0xb4c9,	// (0x0000b4c9) tabs_4_active_pane_g1

0xb4d1,	// (0x0000b4d1) tabs_4_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3

0xb4c9,	// (0x0000b4c9) tabs_4_1_passive_pane_g1

0xb4d1,	// (0x0000b4d1) tabs_4_1_passive_pane_t1

0x2afc,	// (0x00002afc) list_highlight_pane_cp2

0xd067,	// (0x0000d067) list_set_pane_ParamLimits

0xd067,	// (0x0000d067) list_set_pane

0xd101,	// (0x0000d101) main_pane_set_t1_ParamLimits

0xd101,	// (0x0000d101) main_pane_set_t1

0xd121,	// (0x0000d121) main_pane_set_t2_ParamLimits

0xd121,	// (0x0000d121) main_pane_set_t2

0xd135,	// (0x0000d135) main_pane_set_t3_ParamLimits

0xd135,	// (0x0000d135) main_pane_set_t3

0xd147,	// (0x0000d147) main_pane_set_t4_ParamLimits

0xd147,	// (0x0000d147) main_pane_set_t4

0x0003,

0xefbb,	// (0x0000efbb) main_pane_set_t_ParamLimits

0xefbb,	// (0x0000efbb) main_pane_set_t

0xd159,	// (0x0000d159) setting_code_pane

0xd161,	// (0x0000d161) setting_slider_graphic_pane

0xd161,	// (0x0000d161) setting_slider_pane

0xd161,	// (0x0000d161) setting_text_pane

0xd161,	// (0x0000d161) setting_volume_pane

0x052b,	// (0x0000052b) volume_set_pane

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp

0x0533,	// (0x00000533) setting_slider_pane_t1

0x054c,	// (0x0000054c) setting_slider_pane_t2

0x0565,	// (0x00000565) setting_slider_pane_t3

0x0002,

0xa8a7,	// (0x0000a8a7) setting_slider_pane_t

0x057c,	// (0x0000057c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x0592,	// (0x00000592) setting_slider_graphic_pane_g1

0x059b,	// (0x0000059b) setting_slider_graphic_pane_t1

0x05aa,	// (0x000005aa) setting_slider_graphic_pane_t2

0x0001,

0xa8ae,	// (0x0000a8ae) setting_slider_graphic_pane_t

0x05b9,	// (0x000005b9) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e29,	// (0x00004e29) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05c1,	// (0x000005c1) setting_code_pane_t1

0x05cf,	// (0x000005cf) set_text_pane_t1_ParamLimits

0x05cf,	// (0x000005cf) set_text_pane_t1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1

0x1493,	// (0x00001493) set_opt_bg_pane_g2

0x4e09,	// (0x00004e09) set_opt_bg_pane_g3

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6

0x4e11,	// (0x00004e11) set_opt_bg_pane_g7

0x4e19,	// (0x00004e19) set_opt_bg_pane_g8

0x4e21,	// (0x00004e21) set_opt_bg_pane_g9

0x0008,

0xaca5,	// (0x0000aca5) set_opt_bg_pane_g

0x4d98,	// (0x00004d98) slider_set_pane_g1

0x4da5,	// (0x00004da5) slider_set_pane_g2

0x0006,

0xac96,	// (0x0000ac96) slider_set_pane_g

0x4c18,	// (0x00004c18) volume_set_pane_g1

0x4c20,	// (0x00004c20) volume_set_pane_g2

0x4c28,	// (0x00004c28) volume_set_pane_g3

0x4c30,	// (0x00004c30) volume_set_pane_g4

0x4c38,	// (0x00004c38) volume_set_pane_g5

0x4c40,	// (0x00004c40) volume_set_pane_g6

0x4c48,	// (0x00004c48) volume_set_pane_g7

0x4c50,	// (0x00004c50) volume_set_pane_g8

0x4c58,	// (0x00004c58) volume_set_pane_g9

0x4c60,	// (0x00004c60) volume_set_pane_g10

0x0009,

0xac6e,	// (0x0000ac6e) volume_set_pane_g

0xb4e3,	// (0x0000b4e3) indicator_pane_ParamLimits

0xb4e3,	// (0x0000b4e3) indicator_pane

0xb50b,	// (0x0000b50b) main_idle_pane_g2_ParamLimits

0xb50b,	// (0x0000b50b) main_idle_pane_g2

0xb543,	// (0x0000b543) main_pane_idle_g1_ParamLimits

0xb543,	// (0x0000b543) main_pane_idle_g1

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window_ParamLimits

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window

0xb56a,	// (0x0000b56a) soft_indicator_pane_ParamLimits

0xb56a,	// (0x0000b56a) soft_indicator_pane

0xb584,	// (0x0000b584) wallpaper_pane_ParamLimits

0xb584,	// (0x0000b584) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb596,	// (0x0000b596) indicator_pane_g1_ParamLimits

0xb596,	// (0x0000b596) indicator_pane_g1

0x5383,	// (0x00005383) navi_navi_icon_text_pane_srt_g1

0x067c,	// (0x0000067c) soft_indicator_pane_t1

0x0696,	// (0x00000696) aid_ps_area_pane

0xb5af,	// (0x0000b5af) aid_ps_clock_pane

0x06b5,	// (0x000006b5) aid_ps_indicator_pane

0x06c1,	// (0x000006c1) indicator_ps_pane_ParamLimits

0x06c1,	// (0x000006c1) indicator_ps_pane

0x06d0,	// (0x000006d0) power_save_pane_g1_ParamLimits

0x06d0,	// (0x000006d0) power_save_pane_g1

0x06dc,	// (0x000006dc) power_save_pane_g2_ParamLimits

0x06dc,	// (0x000006dc) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x0696,	// (0x00000696) aid_ps_area_pane_ParamLimits

0x0001,

0xa8b3,	// (0x0000a8b3) power_save_pane_g_ParamLimits

0xa8b3,	// (0x0000a8b3) power_save_pane_g

0x06ea,	// (0x000006ea) power_save_pane_t1_ParamLimits

0x06ea,	// (0x000006ea) power_save_pane_t1

0xb5af,	// (0x0000b5af) aid_ps_clock_pane_ParamLimits

0x06b5,	// (0x000006b5) aid_ps_indicator_pane_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4

0x0001,

0xa8b8,	// (0x0000a8b8) power_save_pane_t_ParamLimits

0xa8b8,	// (0x0000a8b8) power_save_pane_t

0x0726,	// (0x00000726) power_save_t3_ParamLimits

0x0726,	// (0x00000726) power_save_t3

0x0711,	// (0x00000711) power_save_t2_ParamLimits

0x0711,	// (0x00000711) power_save_t2

0x073b,	// (0x0000073b) indicator_ps_pane_g1

0xb5bd,	// (0x0000b5bd) ai_gene_pane_ParamLimits

0xb5bd,	// (0x0000b5bd) ai_gene_pane

0xb5d4,	// (0x0000b5d4) ai_links_pane_ParamLimits

0xb5d4,	// (0x0000b5d4) ai_links_pane

0xb5ec,	// (0x0000b5ec) indicator_pane_cp1_ParamLimits

0xb5ec,	// (0x0000b5ec) indicator_pane_cp1

0xb5fb,	// (0x0000b5fb) main_pane_idle_g1_cp_ParamLimits

0xb5fb,	// (0x0000b5fb) main_pane_idle_g1_cp

0x0774,	// (0x00000774) popup_ai_links_title_window

0xb613,	// (0x0000b613) soft_indicator_pane_cp1_ParamLimits

0xb613,	// (0x0000b613) soft_indicator_pane_cp1

0x4ae4,	// (0x00004ae4) ai_links_pane_g1

0x4aed,	// (0x00004aed) grid_ai_links_pane

0xcf95,	// (0x0000cf95) ai_gene_pane_1

0x4ad2,	// (0x00004ad2) ai_gene_pane_2

0x4adb,	// (0x00004adb) list_highlight_pane_cp4

0xcf71,	// (0x0000cf71) cell_ai_link_pane_ParamLimits

0xcf71,	// (0x0000cf71) cell_ai_link_pane

0x4aa3,	// (0x00004aa3) cell_ai_link_pane_g1

0x09a1,	// (0x000009a1) cell_ai_link_pane_g2

0x0001,

0xac49,	// (0x0000ac49) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x0797,	// (0x00000797) popup_ai_links_title_window_t1

0x49f1,	// (0x000049f1) ai_gene_pane_1_g1_ParamLimits

0x49f1,	// (0x000049f1) ai_gene_pane_1_g1

0x49fd,	// (0x000049fd) ai_gene_pane_1_g2_ParamLimits

0x49fd,	// (0x000049fd) ai_gene_pane_1_g2

0x0001,

0xac3f,	// (0x0000ac3f) ai_gene_pane_1_g_ParamLimits

0xac3f,	// (0x0000ac3f) ai_gene_pane_1_g

0x4a0a,	// (0x00004a0a) ai_gene_pane_1_t1_ParamLimits

0x4a0a,	// (0x00004a0a) ai_gene_pane_1_t1

0x4a3e,	// (0x00004a3e) grid_ai_soft_ind_pane

0x49dc,	// (0x000049dc) ai_gene_pane_2_t1_ParamLimits

0x49dc,	// (0x000049dc) ai_gene_pane_2_t1

0xb627,	// (0x0000b627) main_pane_empty_t1_ParamLimits

0xb627,	// (0x0000b627) main_pane_empty_t1

0xb63f,	// (0x0000b63f) main_pane_empty_t2_ParamLimits

0xb63f,	// (0x0000b63f) main_pane_empty_t2

0xb654,	// (0x0000b654) main_pane_empty_t3_ParamLimits

0xb654,	// (0x0000b654) main_pane_empty_t3

0xb666,	// (0x0000b666) main_pane_empty_t4_ParamLimits

0xb666,	// (0x0000b666) main_pane_empty_t4

0xb678,	// (0x0000b678) main_pane_empty_t5_ParamLimits

0xb678,	// (0x0000b678) main_pane_empty_t5

0x0004,

0xee52,	// (0x0000ee52) main_pane_empty_t_ParamLimits

0xee52,	// (0x0000ee52) main_pane_empty_t

0x1584,	// (0x00001584) bg_popup_window_pane_ParamLimits

0x1584,	// (0x00001584) bg_popup_window_pane

0x4744,	// (0x00004744) find_popup_pane_cp2_ParamLimits

0x4744,	// (0x00004744) find_popup_pane_cp2

0x4750,	// (0x00004750) heading_pane_ParamLimits

0x4750,	// (0x00004750) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xce8f,	// (0x0000ce8f) bg_popup_window_pane_g1_ParamLimits

0xce8f,	// (0x0000ce8f) bg_popup_window_pane_g1

0xce9e,	// (0x0000ce9e) bg_popup_window_pane_g2_ParamLimits

0xce9e,	// (0x0000ce9e) bg_popup_window_pane_g2

0xceaa,	// (0x0000ceaa) bg_popup_window_pane_g3_ParamLimits

0xceaa,	// (0x0000ceaa) bg_popup_window_pane_g3

0xceb6,	// (0x0000ceb6) bg_popup_window_pane_g4_ParamLimits

0xceb6,	// (0x0000ceb6) bg_popup_window_pane_g4

0xcec5,	// (0x0000cec5) bg_popup_window_pane_g5_ParamLimits

0xcec5,	// (0x0000cec5) bg_popup_window_pane_g5

0xced5,	// (0x0000ced5) bg_popup_window_pane_g6_ParamLimits

0xced5,	// (0x0000ced5) bg_popup_window_pane_g6

0xcee1,	// (0x0000cee1) bg_popup_window_pane_g7_ParamLimits

0xcee1,	// (0x0000cee1) bg_popup_window_pane_g7

0xcef0,	// (0x0000cef0) bg_popup_window_pane_g8_ParamLimits

0xcef0,	// (0x0000cef0) bg_popup_window_pane_g8

0xceff,	// (0x0000ceff) bg_popup_window_pane_g9_ParamLimits

0xceff,	// (0x0000ceff) bg_popup_window_pane_g9

0x4719,	// (0x00004719) bg_popup_window_pane_g10_ParamLimits

0x4719,	// (0x00004719) bg_popup_window_pane_g10

0x0009,

0xef8f,	// (0x0000ef8f) bg_popup_window_pane_g_ParamLimits

0xef8f,	// (0x0000ef8f) bg_popup_window_pane_g

0x4642,	// (0x00004642) bg_popup_heading_pane_ParamLimits

0x4642,	// (0x00004642) bg_popup_heading_pane

0x52c6,	// (0x000052c6) tabs_4_passive_pane_cp_srt_ParamLimits

0x52c6,	// (0x000052c6) tabs_4_passive_pane_cp_srt

0x52d8,	// (0x000052d8) tabs_4_passive_pane_srt_ParamLimits

0x4656,	// (0x00004656) heading_pane_g2

0x52d8,	// (0x000052d8) tabs_4_passive_pane_srt

0x37b6,	// (0x000037b6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37b6,	// (0x000037b6) bg_passive_tab_pane_cp3_srt

0x465e,	// (0x0000465e) heading_pane_t1_ParamLimits

0x465e,	// (0x0000465e) heading_pane_t1

0x4675,	// (0x00004675) heading_pane_t2_ParamLimits

0x4675,	// (0x00004675) heading_pane_t2

0x0001,

0xac02,	// (0x0000ac02) heading_pane_t_ParamLimits

0xac02,	// (0x0000ac02) heading_pane_t

0x4024,	// (0x00004024) bg_popup_heading_pane_g1

0x40d3,	// (0x000040d3) bg_popup_heading_pane_g2

0x40dd,	// (0x000040dd) bg_popup_heading_pane_g3

0x40e7,	// (0x000040e7) bg_popup_heading_pane_g4

0x40f1,	// (0x000040f1) bg_popup_heading_pane_g5

0x40fb,	// (0x000040fb) bg_popup_heading_pane_g6

0x4103,	// (0x00004103) bg_popup_heading_pane_g7

0x410b,	// (0x0000410b) bg_popup_heading_pane_g8

0x4115,	// (0x00004115) bg_popup_heading_pane_g9

0x0008,

0xabbe,	// (0x0000abbe) bg_popup_heading_pane_g

0x3626,	// (0x00003626) bg_popup_sub_pane_g1

0x362e,	// (0x0000362e) bg_popup_sub_pane_g2

0x3636,	// (0x00003636) bg_popup_sub_pane_g3

0x363e,	// (0x0000363e) bg_popup_sub_pane_g4

0x3646,	// (0x00003646) bg_popup_sub_pane_g5

0x364e,	// (0x0000364e) bg_popup_sub_pane_g6

0x3656,	// (0x00003656) bg_popup_sub_pane_g7

0x365e,	// (0x0000365e) bg_popup_sub_pane_g8

0x3666,	// (0x00003666) bg_popup_sub_pane_g9

0x0008,

0xab98,	// (0x0000ab98) bg_popup_sub_pane_g

0x080b,	// (0x0000080b) bg_popup_window_pane_cp5_ParamLimits

0x080b,	// (0x0000080b) bg_popup_window_pane_cp5

0x0827,	// (0x00000827) popup_note_window_g1_ParamLimits

0x0827,	// (0x00000827) popup_note_window_g1

0x0833,	// (0x00000833) popup_note_window_t1_ParamLimits

0x0833,	// (0x00000833) popup_note_window_t1

0x0845,	// (0x00000845) popup_note_window_t2_ParamLimits

0x0845,	// (0x00000845) popup_note_window_t2

0x0857,	// (0x00000857) popup_note_window_t3_ParamLimits

0x0857,	// (0x00000857) popup_note_window_t3

0x0869,	// (0x00000869) popup_note_window_t4_ParamLimits

0x0869,	// (0x00000869) popup_note_window_t4

0x0891,	// (0x00000891) popup_note_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note_window_t5

0x0004,

0xa8c8,	// (0x0000a8c8) popup_note_window_t_ParamLimits

0xa8c8,	// (0x0000a8c8) popup_note_window_t

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6

0x3f98,	// (0x00003f98) popup_note_image_window_g1_ParamLimits

0x3f98,	// (0x00003f98) popup_note_image_window_g1

0x3fa4,	// (0x00003fa4) popup_note_image_window_g2_ParamLimits

0x3fa4,	// (0x00003fa4) popup_note_image_window_g2

0x0001,

0xab8c,	// (0x0000ab8c) popup_note_image_window_g_ParamLimits

0xab8c,	// (0x0000ab8c) popup_note_image_window_g

0x3fbd,	// (0x00003fbd) popup_note_image_window_t1_ParamLimits

0x3fbd,	// (0x00003fbd) popup_note_image_window_t1

0x3fd6,	// (0x00003fd6) popup_note_image_window_t2_ParamLimits

0x3fd6,	// (0x00003fd6) popup_note_image_window_t2

0x3fef,	// (0x00003fef) popup_note_image_window_t3_ParamLimits

0x3fef,	// (0x00003fef) popup_note_image_window_t3

0x0002,

0xab91,	// (0x0000ab91) popup_note_image_window_t_ParamLimits

0xab91,	// (0x0000ab91) popup_note_image_window_t

0x3e59,	// (0x00003e59) bg_popup_window_pane_cp7_ParamLimits

0x3e59,	// (0x00003e59) bg_popup_window_pane_cp7

0x3e89,	// (0x00003e89) popup_note_wait_window_g1_ParamLimits

0x3e89,	// (0x00003e89) popup_note_wait_window_g1

0x3e95,	// (0x00003e95) popup_note_wait_window_g2_ParamLimits

0x3e95,	// (0x00003e95) popup_note_wait_window_g2

0x0002,

0xab7a,	// (0x0000ab7a) popup_note_wait_window_g_ParamLimits

0xab7a,	// (0x0000ab7a) popup_note_wait_window_g

0x3ead,	// (0x00003ead) popup_note_wait_window_t1_ParamLimits

0x3ead,	// (0x00003ead) popup_note_wait_window_t1

0x3ed4,	// (0x00003ed4) popup_note_wait_window_t2_ParamLimits

0x3ed4,	// (0x00003ed4) popup_note_wait_window_t2

0x3ef1,	// (0x00003ef1) popup_note_wait_window_t3_ParamLimits

0x3ef1,	// (0x00003ef1) popup_note_wait_window_t3

0x3f04,	// (0x00003f04) popup_note_wait_window_t4_ParamLimits

0x3f04,	// (0x00003f04) popup_note_wait_window_t4

0x0004,

0xab81,	// (0x0000ab81) popup_note_wait_window_t_ParamLimits

0xab81,	// (0x0000ab81) popup_note_wait_window_t

0x3f29,	// (0x00003f29) wait_bar_pane_ParamLimits

0x3f29,	// (0x00003f29) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xaa47,	// (0x0000aa47) wait_anim_pane_g

0x3dfd,	// (0x00003dfd) wait_border_pane_g1

0x3e08,	// (0x00003e08) wait_border_pane_g2

0x3e11,	// (0x00003e11) wait_border_pane_g3

0x0002,

0xab73,	// (0x0000ab73) wait_border_pane_g

0x3c6d,	// (0x00003c6d) bg_popup_window_pane_cp16_ParamLimits

0x3c6d,	// (0x00003c6d) bg_popup_window_pane_cp16

0x3d6d,	// (0x00003d6d) indicator_popup_pane_cp4_ParamLimits

0x3d6d,	// (0x00003d6d) indicator_popup_pane_cp4

0x3d81,	// (0x00003d81) popup_query_data_window_t1_ParamLimits

0x3d81,	// (0x00003d81) popup_query_data_window_t1

0x3d93,	// (0x00003d93) popup_query_data_window_t2_ParamLimits

0x3d93,	// (0x00003d93) popup_query_data_window_t2

0x3dac,	// (0x00003dac) popup_query_data_window_t3_ParamLimits

0x3dac,	// (0x00003dac) popup_query_data_window_t3

0x0002,

0xab6c,	// (0x0000ab6c) popup_query_data_window_t_ParamLimits

0xab6c,	// (0x0000ab6c) popup_query_data_window_t

0x3dc6,	// (0x00003dc6) query_popup_data_pane_ParamLimits

0x3dc6,	// (0x00003dc6) query_popup_data_pane

0x3dda,	// (0x00003dda) query_popup_data_pane_cp1_ParamLimits

0x3dda,	// (0x00003dda) query_popup_data_pane_cp1

0x3c6d,	// (0x00003c6d) bg_popup_window_pane_cp10_ParamLimits

0x3c6d,	// (0x00003c6d) bg_popup_window_pane_cp10

0x3c9f,	// (0x00003c9f) indicator_popup_pane_ParamLimits

0x3c9f,	// (0x00003c9f) indicator_popup_pane

0x3cc1,	// (0x00003cc1) popup_query_code_window_t1_ParamLimits

0x3cc1,	// (0x00003cc1) popup_query_code_window_t1

0x3cdb,	// (0x00003cdb) popup_query_code_window_t2_ParamLimits

0x3cdb,	// (0x00003cdb) popup_query_code_window_t2

0x3d24,	// (0x00003d24) popup_query_code_window_t3_ParamLimits

0x3d24,	// (0x00003d24) popup_query_code_window_t3

0x0002,

0xab65,	// (0x0000ab65) popup_query_code_window_t_ParamLimits

0xab65,	// (0x0000ab65) popup_query_code_window_t

0x3d53,	// (0x00003d53) query_popup_pane_ParamLimits

0x3d53,	// (0x00003d53) query_popup_pane

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp15_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp15

0x08d3,	// (0x000008d3) indicator_popup_pane_cp1_ParamLimits

0x08d3,	// (0x000008d3) indicator_popup_pane_cp1

0x08e6,	// (0x000008e6) indicator_popup_pane_cp2_ParamLimits

0x08e6,	// (0x000008e6) indicator_popup_pane_cp2

0x08f9,	// (0x000008f9) popup_query_data_code_window_g1_ParamLimits

0x08f9,	// (0x000008f9) popup_query_data_code_window_g1

0x090c,	// (0x0000090c) popup_query_data_code_window_t1_ParamLimits

0x090c,	// (0x0000090c) popup_query_data_code_window_t1

0x091e,	// (0x0000091e) popup_query_data_code_window_t2_ParamLimits

0x091e,	// (0x0000091e) popup_query_data_code_window_t2

0x0930,	// (0x00000930) popup_query_data_code_window_t3_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t3

0x0946,	// (0x00000946) popup_query_data_code_window_t4_ParamLimits

0x0946,	// (0x00000946) popup_query_data_code_window_t4

0x0003,

0xa8d3,	// (0x0000a8d3) popup_query_data_code_window_t_ParamLimits

0xa8d3,	// (0x0000a8d3) popup_query_data_code_window_t

0x23a6,	// (0x000023a6) list_single_midp_graphic_pane_g3

0x095e,	// (0x0000095e) query_popup_data_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c65,	// (0x00003c65) heading_pane_cp5

0x0a59,	// (0x00000a59) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x0984,	// (0x00000984) query_popup_pane_t1

0x0992,	// (0x00000992) list_popup_info_pane_ParamLimits

0x0992,	// (0x00000992) list_popup_info_pane

0x09a1,	// (0x000009a1) listscroll_popup_info_pane_g1

0x09a9,	// (0x000009a9) scroll_pane_cp7

0x09b3,	// (0x000009b3) popup_info_list_pane_t1_ParamLimits

0x09b3,	// (0x000009b3) popup_info_list_pane_t1

0x09cd,	// (0x000009cd) popup_info_list_pane_t2_ParamLimits

0x09cd,	// (0x000009cd) popup_info_list_pane_t2

0x0001,

0xa8dc,	// (0x0000a8dc) popup_info_list_pane_t_ParamLimits

0xa8dc,	// (0x0000a8dc) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x53ba,	// (0x000053ba) find_popup_pane

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3

0x09e7,	// (0x000009e7) heading_pane_cp3

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb6da,	// (0x0000b6da) heading_pane_cp4

0x0a59,	// (0x00000a59) listscroll_popup_colour_pane

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane

0xb6e2,	// (0x0000b6e2) grid_large_graphic_colour_popup_pane_ParamLimits

0xb6e2,	// (0x0000b6e2) grid_large_graphic_colour_popup_pane

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1_ParamLimits

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2_ParamLimits

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3_ParamLimits

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3

0xb706,	// (0x0000b706) listscroll_popup_colour_pane_g4_ParamLimits

0xb706,	// (0x0000b706) listscroll_popup_colour_pane_g4

0x0003,

0xee5d,	// (0x0000ee5d) listscroll_popup_colour_pane_g_ParamLimits

0xee5d,	// (0x0000ee5d) listscroll_popup_colour_pane_g

0x0ae6,	// (0x00000ae6) scroll_pane_cp6_ParamLimits

0x0ae6,	// (0x00000ae6) scroll_pane_cp6

0xb715,	// (0x0000b715) cell_large_graphic_colour_popup_pane_ParamLimits

0xb715,	// (0x0000b715) cell_large_graphic_colour_popup_pane

0x0b17,	// (0x00000b17) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b26,	// (0x00000b26) cell_large_graphic_colour_popup_pane_g1

0x0b2e,	// (0x00000b2e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa8ea,	// (0x0000a8ea) cell_large_graphic_colour_popup_pane_g

0x0b36,	// (0x00000b36) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp4

0x0b47,	// (0x00000b47) bg_popup_window_pane_cp8_ParamLimits

0x0b47,	// (0x00000b47) bg_popup_window_pane_cp8

0x0b62,	// (0x00000b62) popup_snote_single_text_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_text_window_g1

0x0b74,	// (0x00000b74) popup_snote_single_text_window_t1_ParamLimits

0x0b74,	// (0x00000b74) popup_snote_single_text_window_t1

0x0b87,	// (0x00000b87) popup_snote_single_text_window_t2_ParamLimits

0x0b87,	// (0x00000b87) popup_snote_single_text_window_t2

0x0b9a,	// (0x00000b9a) popup_snote_single_text_window_t3_ParamLimits

0x0b9a,	// (0x00000b9a) popup_snote_single_text_window_t3

0x0bd3,	// (0x00000bd3) popup_snote_single_text_window_t4_ParamLimits

0x0bd3,	// (0x00000bd3) popup_snote_single_text_window_t4

0x0c07,	// (0x00000c07) popup_snote_single_text_window_t5_ParamLimits

0x0c07,	// (0x00000c07) popup_snote_single_text_window_t5

0x0004,

0xa8ef,	// (0x0000a8ef) popup_snote_single_text_window_t_ParamLimits

0xa8ef,	// (0x0000a8ef) popup_snote_single_text_window_t

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9_ParamLimits

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2_ParamLimits

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2

0x0001,

0xa8fa,	// (0x0000a8fa) popup_snote_single_graphic_window_g_ParamLimits

0xa8fa,	// (0x0000a8fa) popup_snote_single_graphic_window_g

0x0c50,	// (0x00000c50) popup_snote_single_graphic_window_t1_ParamLimits

0x0c50,	// (0x00000c50) popup_snote_single_graphic_window_t1

0x0c63,	// (0x00000c63) popup_snote_single_graphic_window_t2_ParamLimits

0x0c63,	// (0x00000c63) popup_snote_single_graphic_window_t2

0x0c76,	// (0x00000c76) popup_snote_single_graphic_window_t3_ParamLimits

0x0c76,	// (0x00000c76) popup_snote_single_graphic_window_t3

0x0caf,	// (0x00000caf) popup_snote_single_graphic_window_t4_ParamLimits

0x0caf,	// (0x00000caf) popup_snote_single_graphic_window_t4

0x0ce3,	// (0x00000ce3) popup_snote_single_graphic_window_t5_ParamLimits

0x0ce3,	// (0x00000ce3) popup_snote_single_graphic_window_t5

0x0004,

0xa8ff,	// (0x0000a8ff) popup_snote_single_graphic_window_t_ParamLimits

0xa8ff,	// (0x0000a8ff) popup_snote_single_graphic_window_t

0x5242,	// (0x00005242) grid_graphic_popup_pane_ParamLimits

0x5242,	// (0x00005242) grid_graphic_popup_pane

0x526e,	// (0x0000526e) listscroll_popup_graphic_pane_g1_ParamLimits

0x526e,	// (0x0000526e) listscroll_popup_graphic_pane_g1

0xd2a2,	// (0x0000d2a2) listscroll_popup_graphic_pane_g2_ParamLimits

0xd2a2,	// (0x0000d2a2) listscroll_popup_graphic_pane_g2

0x0001,

0xefde,	// (0x0000efde) listscroll_popup_graphic_pane_g_ParamLimits

0xefde,	// (0x0000efde) listscroll_popup_graphic_pane_g

0x5296,	// (0x00005296) scroll_pane_cp5

0xd265,	// (0x0000d265) cell_graphic_popup_pane_ParamLimits

0xd265,	// (0x0000d265) cell_graphic_popup_pane

0x51ce,	// (0x000051ce) cell_graphic_popup_pane_g1

0x51d6,	// (0x000051d6) cell_graphic_popup_pane_g2

0x0b36,	// (0x00000b36) cell_graphic_popup_pane_g3

0x0002,

0xacdb,	// (0x0000acdb) cell_graphic_popup_pane_g

0x51df,	// (0x000051df) cell_graphic_popup_pane_t2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3

0x0d24,	// (0x00000d24) list_gen_pane_ParamLimits

0x0d24,	// (0x00000d24) list_gen_pane

0x0d56,	// (0x00000d56) scroll_pane

0xd220,	// (0x0000d220) bg_list_pane_g1_ParamLimits

0xd220,	// (0x0000d220) bg_list_pane_g1

0x514b,	// (0x0000514b) bg_list_pane_g2_ParamLimits

0x514b,	// (0x0000514b) bg_list_pane_g2

0x515e,	// (0x0000515e) bg_list_pane_g3_ParamLimits

0x515e,	// (0x0000515e) bg_list_pane_g3

0x5170,	// (0x00005170) bg_list_pane_g4_ParamLimits

0x5170,	// (0x00005170) bg_list_pane_g4

0xd23b,	// (0x0000d23b) bg_list_pane_g5_ParamLimits

0xd23b,	// (0x0000d23b) bg_list_pane_g5

0x0004,

0xefd3,	// (0x0000efd3) bg_list_pane_g_ParamLimits

0xefd3,	// (0x0000efd3) bg_list_pane_g

0xd1bf,	// (0x0000d1bf) list_double2_graphic_large_graphic_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double2_graphic_large_graphic_pane

0xd1bf,	// (0x0000d1bf) list_double2_graphic_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double2_graphic_pane

0xd1bf,	// (0x0000d1bf) list_double2_large_graphic_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double2_large_graphic_pane

0xd1bf,	// (0x0000d1bf) list_double2_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double2_pane

0xd1bf,	// (0x0000d1bf) list_double_graphic_heading_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double_graphic_heading_pane

0xd1bf,	// (0x0000d1bf) list_double_graphic_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double_graphic_pane

0xd1bf,	// (0x0000d1bf) list_double_heading_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double_heading_pane

0xd1bf,	// (0x0000d1bf) list_double_large_graphic_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double_large_graphic_pane

0xd1bf,	// (0x0000d1bf) list_double_number_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double_number_pane

0xd1bf,	// (0x0000d1bf) list_double_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double_pane

0xd1bf,	// (0x0000d1bf) list_double_time_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_double_time_pane

0xd1bf,	// (0x0000d1bf) list_setting_number_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_setting_number_pane

0xd1bf,	// (0x0000d1bf) list_setting_pane_ParamLimits

0xd1bf,	// (0x0000d1bf) list_setting_pane

0xd1d2,	// (0x0000d1d2) list_single_2graphic_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_2graphic_pane

0xd1d2,	// (0x0000d1d2) list_single_graphic_heading_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_graphic_heading_pane

0xd1d2,	// (0x0000d1d2) list_single_graphic_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_graphic_pane

0xd1d2,	// (0x0000d1d2) list_single_heading_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_heading_pane

0xd1d2,	// (0x0000d1d2) list_single_large_graphic_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_large_graphic_pane

0xd1d2,	// (0x0000d1d2) list_single_number_heading_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_number_heading_pane

0xd1d2,	// (0x0000d1d2) list_single_number_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_number_pane

0xd1d2,	// (0x0000d1d2) list_single_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0e4b,	// (0x00000e4b) list_single_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_pane_g1

0x0e57,	// (0x00000e57) list_single_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_pane_g2

0x0001,

0xab18,	// (0x0000ab18) list_single_pane_g_ParamLimits

0xab18,	// (0x0000ab18) list_single_pane_g

0x59a7,	// (0x000059a7) list_single_pane_t1_ParamLimits

0x59a7,	// (0x000059a7) list_single_pane_t1

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1

0x0e57,	// (0x00000e57) list_single_number_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_pane_g2

0x0001,

0xab18,	// (0x0000ab18) list_single_number_pane_g_ParamLimits

0xab18,	// (0x0000ab18) list_single_number_pane_g

0x35b4,	// (0x000035b4) list_single_number_pane_t1_ParamLimits

0x35b4,	// (0x000035b4) list_single_number_pane_t1

0xd003,	// (0x0000d003) list_single_number_pane_t2_ParamLimits

0xd003,	// (0x0000d003) list_single_number_pane_t2

0x0001,

0xefb6,	// (0x0000efb6) list_single_number_pane_t_ParamLimits

0xefb6,	// (0x0000efb6) list_single_number_pane_t

0xb73e,	// (0x0000b73e) list_single_graphic_pane_g1_ParamLimits

0xb73e,	// (0x0000b73e) list_single_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3

0x0002,

0xee66,	// (0x0000ee66) list_single_graphic_pane_g_ParamLimits

0xee66,	// (0x0000ee66) list_single_graphic_pane_g

0xb74a,	// (0x0000b74a) list_single_graphic_pane_t1_ParamLimits

0xb74a,	// (0x0000b74a) list_single_graphic_pane_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_g2

0x0001,

0xab18,	// (0x0000ab18) list_single_heading_pane_g_ParamLimits

0xab18,	// (0x0000ab18) list_single_heading_pane_g

0x59c9,	// (0x000059c9) list_single_heading_pane_t1_ParamLimits

0x59c9,	// (0x000059c9) list_single_heading_pane_t1

0xb760,	// (0x0000b760) list_single_heading_pane_t2_ParamLimits

0xb760,	// (0x0000b760) list_single_heading_pane_t2

0x0001,

0xee6d,	// (0x0000ee6d) list_single_heading_pane_t_ParamLimits

0xee6d,	// (0x0000ee6d) list_single_heading_pane_t

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2

0x0001,

0xab18,	// (0x0000ab18) list_single_number_heading_pane_g_ParamLimits

0xab18,	// (0x0000ab18) list_single_number_heading_pane_g

0x59c9,	// (0x000059c9) list_single_number_heading_pane_t1_ParamLimits

0x59c9,	// (0x000059c9) list_single_number_heading_pane_t1

0xb772,	// (0x0000b772) list_single_number_heading_pane_t2_ParamLimits

0xb772,	// (0x0000b772) list_single_number_heading_pane_t2

0x5981,	// (0x00005981) list_single_number_heading_pane_t3_ParamLimits

0x5981,	// (0x00005981) list_single_number_heading_pane_t3

0x0002,

0xee72,	// (0x0000ee72) list_single_number_heading_pane_t_ParamLimits

0xee72,	// (0x0000ee72) list_single_number_heading_pane_t

0x34ca,	// (0x000034ca) list_single_graphic_heading_pane_g1_ParamLimits

0x34ca,	// (0x000034ca) list_single_graphic_heading_pane_g1

0xb784,	// (0x0000b784) list_single_graphic_heading_pane_g4_ParamLimits

0xb784,	// (0x0000b784) list_single_graphic_heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5

0x0002,

0xee79,	// (0x0000ee79) list_single_graphic_heading_pane_g_ParamLimits

0xee79,	// (0x0000ee79) list_single_graphic_heading_pane_g

0x59c9,	// (0x000059c9) list_single_graphic_heading_pane_t1_ParamLimits

0x59c9,	// (0x000059c9) list_single_graphic_heading_pane_t1

0xb795,	// (0x0000b795) list_single_graphic_heading_pane_t2_ParamLimits

0xb795,	// (0x0000b795) list_single_graphic_heading_pane_t2

0x0001,

0xee80,	// (0x0000ee80) list_single_graphic_heading_pane_t_ParamLimits

0xee80,	// (0x0000ee80) list_single_graphic_heading_pane_t

0x59bd,	// (0x000059bd) list_single_large_graphic_pane_g1_ParamLimits

0x59bd,	// (0x000059bd) list_single_large_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3

0x0002,

0xad79,	// (0x0000ad79) list_single_large_graphic_pane_g_ParamLimits

0xad79,	// (0x0000ad79) list_single_large_graphic_pane_g

0x3e08,	// (0x00003e08) wait_border_pane_g2_copy1

0xb7a7,	// (0x0000b7a7) list_single_large_graphic_pane_g4_cp2

0x59c9,	// (0x000059c9) list_single_large_graphic_pane_t1_ParamLimits

0x59c9,	// (0x000059c9) list_single_large_graphic_pane_t1

0x0fa7,	// (0x00000fa7) list_double_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_pane_g1

0x0ed2,	// (0x00000ed2) list_double_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_pane_g2

0x0001,

0xa9aa,	// (0x0000a9aa) list_double_pane_g_ParamLimits

0xa9aa,	// (0x0000a9aa) list_double_pane_g

0x0ede,	// (0x00000ede) list_double_pane_t1_ParamLimits

0x0ede,	// (0x00000ede) list_double_pane_t1

0xb7af,	// (0x0000b7af) list_double_pane_t2_ParamLimits

0xb7af,	// (0x0000b7af) list_double_pane_t2

0x0001,

0xee85,	// (0x0000ee85) list_double_pane_t_ParamLimits

0xee85,	// (0x0000ee85) list_double_pane_t

0xb7c1,	// (0x0000b7c1) list_double2_pane_g1_ParamLimits

0xb7c1,	// (0x0000b7c1) list_double2_pane_g1

0xb7d2,	// (0x0000b7d2) list_double2_pane_g2_ParamLimits

0xb7d2,	// (0x0000b7d2) list_double2_pane_g2

0x0001,

0xee8a,	// (0x0000ee8a) list_double2_pane_g_ParamLimits

0xee8a,	// (0x0000ee8a) list_double2_pane_g

0x7574,	// (0x00007574) list_double2_pane_t1_ParamLimits

0x7574,	// (0x00007574) list_double2_pane_t1

0x10d0,	// (0x000010d0) list_double2_pane_t2_ParamLimits

0x10d0,	// (0x000010d0) list_double2_pane_t2

0x0001,

0xee8f,	// (0x0000ee8f) list_double2_pane_t_ParamLimits

0xee8f,	// (0x0000ee8f) list_double2_pane_t

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2

0x0001,

0xa9aa,	// (0x0000a9aa) list_double_number_pane_g_ParamLimits

0xa9aa,	// (0x0000a9aa) list_double_number_pane_g

0xb7de,	// (0x0000b7de) list_double_number_pane_t1_ParamLimits

0xb7de,	// (0x0000b7de) list_double_number_pane_t1

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2_ParamLimits

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2

0xb7f0,	// (0x0000b7f0) list_double_number_pane_t3_ParamLimits

0xb7f0,	// (0x0000b7f0) list_double_number_pane_t3

0x0002,

0xee94,	// (0x0000ee94) list_double_number_pane_t_ParamLimits

0xee94,	// (0x0000ee94) list_double_number_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1

0xb802,	// (0x0000b802) list_double_graphic_pane_g2_ParamLimits

0xb802,	// (0x0000b802) list_double_graphic_pane_g2

0xb811,	// (0x0000b811) list_double_graphic_pane_g3_ParamLimits

0xb811,	// (0x0000b811) list_double_graphic_pane_g3

0x0003,

0xee9b,	// (0x0000ee9b) list_double_graphic_pane_g_ParamLimits

0xee9b,	// (0x0000ee9b) list_double_graphic_pane_g

0xb829,	// (0x0000b829) list_double_graphic_pane_t1_ParamLimits

0xb829,	// (0x0000b829) list_double_graphic_pane_t1

0xb83f,	// (0x0000b83f) list_double_graphic_pane_t2_ParamLimits

0xb83f,	// (0x0000b83f) list_double_graphic_pane_t2

0x0001,

0xeea4,	// (0x0000eea4) list_double_graphic_pane_t_ParamLimits

0xeea4,	// (0x0000eea4) list_double_graphic_pane_t

0xb851,	// (0x0000b851) list_double2_graphic_pane_g1_ParamLimits

0xb851,	// (0x0000b851) list_double2_graphic_pane_g1

0x1375,	// (0x00001375) list_double2_graphic_pane_g2_ParamLimits

0x1375,	// (0x00001375) list_double2_graphic_pane_g2

0xb7d2,	// (0x0000b7d2) list_double2_graphic_pane_g3_ParamLimits

0xb7d2,	// (0x0000b7d2) list_double2_graphic_pane_g3

0x0002,

0xeea9,	// (0x0000eea9) list_double2_graphic_pane_g_ParamLimits

0xeea9,	// (0x0000eea9) list_double2_graphic_pane_g

0xb85d,	// (0x0000b85d) list_double2_graphic_pane_t1_ParamLimits

0xb85d,	// (0x0000b85d) list_double2_graphic_pane_t1

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2_ParamLimits

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2

0x0001,

0xeeb0,	// (0x0000eeb0) list_double2_graphic_pane_t_ParamLimits

0xeeb0,	// (0x0000eeb0) list_double2_graphic_pane_t

0xb873,	// (0x0000b873) list_double_large_graphic_pane_g1_ParamLimits

0xb873,	// (0x0000b873) list_double_large_graphic_pane_g1

0xb89e,	// (0x0000b89e) list_double_large_graphic_pane_g2_ParamLimits

0xb89e,	// (0x0000b89e) list_double_large_graphic_pane_g2

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3

0xb8af,	// (0x0000b8af) list_double_large_graphic_pane_g4_ParamLimits

0xb8af,	// (0x0000b8af) list_double_large_graphic_pane_g4

0x0004,

0xeeb5,	// (0x0000eeb5) list_double_large_graphic_pane_g_ParamLimits

0xeeb5,	// (0x0000eeb5) list_double_large_graphic_pane_g

0xb8c2,	// (0x0000b8c2) list_double_large_graphic_pane_t1_ParamLimits

0xb8c2,	// (0x0000b8c2) list_double_large_graphic_pane_t1

0xb8db,	// (0x0000b8db) list_double_large_graphic_pane_t2_ParamLimits

0xb8db,	// (0x0000b8db) list_double_large_graphic_pane_t2

0x0001,

0xeec0,	// (0x0000eec0) list_double_large_graphic_pane_t_ParamLimits

0xeec0,	// (0x0000eec0) list_double_large_graphic_pane_t

0xb8ed,	// (0x0000b8ed) list_double2_large_graphic_pane_g1_ParamLimits

0xb8ed,	// (0x0000b8ed) list_double2_large_graphic_pane_g1

0xb7c1,	// (0x0000b7c1) list_double2_large_graphic_pane_g2_ParamLimits

0xb7c1,	// (0x0000b7c1) list_double2_large_graphic_pane_g2

0xb7d2,	// (0x0000b7d2) list_double2_large_graphic_pane_g3_ParamLimits

0xb7d2,	// (0x0000b7d2) list_double2_large_graphic_pane_g3

0x0002,

0xeec5,	// (0x0000eec5) list_double2_large_graphic_pane_g_ParamLimits

0xeec5,	// (0x0000eec5) list_double2_large_graphic_pane_g

0xb8f9,	// (0x0000b8f9) list_double2_large_graphic_pane_t1_ParamLimits

0xb8f9,	// (0x0000b8f9) list_double2_large_graphic_pane_t1

0xb90f,	// (0x0000b90f) list_double2_large_graphic_pane_t2_ParamLimits

0xb90f,	// (0x0000b90f) list_double2_large_graphic_pane_t2

0x0001,

0xeecc,	// (0x0000eecc) list_double2_large_graphic_pane_t_ParamLimits

0xeecc,	// (0x0000eecc) list_double2_large_graphic_pane_t

0xb921,	// (0x0000b921) list_double_heading_pane_g1_ParamLimits

0xb921,	// (0x0000b921) list_double_heading_pane_g1

0xb932,	// (0x0000b932) list_double_heading_pane_g2_ParamLimits

0xb932,	// (0x0000b932) list_double_heading_pane_g2

0x0001,

0xeed1,	// (0x0000eed1) list_double_heading_pane_g_ParamLimits

0xeed1,	// (0x0000eed1) list_double_heading_pane_g

0xb93e,	// (0x0000b93e) list_double_heading_pane_t1_ParamLimits

0xb93e,	// (0x0000b93e) list_double_heading_pane_t1

0xb954,	// (0x0000b954) list_double_heading_pane_t2_ParamLimits

0xb954,	// (0x0000b954) list_double_heading_pane_t2

0x0001,

0xeed6,	// (0x0000eed6) list_double_heading_pane_t_ParamLimits

0xeed6,	// (0x0000eed6) list_double_heading_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1

0xb921,	// (0x0000b921) list_double_graphic_heading_pane_g2_ParamLimits

0xb921,	// (0x0000b921) list_double_graphic_heading_pane_g2

0xb932,	// (0x0000b932) list_double_graphic_heading_pane_g3_ParamLimits

0xb932,	// (0x0000b932) list_double_graphic_heading_pane_g3

0x0002,

0xeedb,	// (0x0000eedb) list_double_graphic_heading_pane_g_ParamLimits

0xeedb,	// (0x0000eedb) list_double_graphic_heading_pane_g

0xb966,	// (0x0000b966) list_double_graphic_heading_pane_t1_ParamLimits

0xb966,	// (0x0000b966) list_double_graphic_heading_pane_t1

0xb97c,	// (0x0000b97c) list_double_graphic_heading_pane_t2_ParamLimits

0xb97c,	// (0x0000b97c) list_double_graphic_heading_pane_t2

0x0001,

0xeee2,	// (0x0000eee2) list_double_graphic_heading_pane_t_ParamLimits

0xeee2,	// (0x0000eee2) list_double_graphic_heading_pane_t

0xb89e,	// (0x0000b89e) list_double_time_pane_g1_ParamLimits

0xb89e,	// (0x0000b89e) list_double_time_pane_g1

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2

0x0001,

0xeee7,	// (0x0000eee7) list_double_time_pane_g_ParamLimits

0xeee7,	// (0x0000eee7) list_double_time_pane_g

0x1075,	// (0x00001075) list_double_time_pane_t1_ParamLimits

0x1075,	// (0x00001075) list_double_time_pane_t1

0xb98e,	// (0x0000b98e) list_double_time_pane_t2_ParamLimits

0xb98e,	// (0x0000b98e) list_double_time_pane_t2

0xb9a0,	// (0x0000b9a0) list_double_time_pane_t3_ParamLimits

0xb9a0,	// (0x0000b9a0) list_double_time_pane_t3

0xb9b2,	// (0x0000b9b2) list_double_time_pane_t4_ParamLimits

0xb9b2,	// (0x0000b9b2) list_double_time_pane_t4

0x0003,

0xeeec,	// (0x0000eeec) list_double_time_pane_t_ParamLimits

0xeeec,	// (0x0000eeec) list_double_time_pane_t

0x1375,	// (0x00001375) list_setting_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_pane_g1

0xb7d2,	// (0x0000b7d2) list_setting_pane_g2_ParamLimits

0xb7d2,	// (0x0000b7d2) list_setting_pane_g2

0x0001,

0xeef5,	// (0x0000eef5) list_setting_pane_g_ParamLimits

0xeef5,	// (0x0000eef5) list_setting_pane_g

0xb9c4,	// (0x0000b9c4) list_setting_pane_t1_ParamLimits

0xb9c4,	// (0x0000b9c4) list_setting_pane_t1

0xb9db,	// (0x0000b9db) list_setting_pane_t2_ParamLimits

0xb9db,	// (0x0000b9db) list_setting_pane_t2

0x0002,

0xeefa,	// (0x0000eefa) list_setting_pane_t_ParamLimits

0xeefa,	// (0x0000eefa) list_setting_pane_t

0xba18,	// (0x0000ba18) set_value_pane_cp_ParamLimits

0xba18,	// (0x0000ba18) set_value_pane_cp

0x1375,	// (0x00001375) list_setting_number_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_number_pane_g1

0xb7d2,	// (0x0000b7d2) list_setting_number_pane_g2_ParamLimits

0xb7d2,	// (0x0000b7d2) list_setting_number_pane_g2

0x0001,

0xeef5,	// (0x0000eef5) list_setting_number_pane_g_ParamLimits

0xeef5,	// (0x0000eef5) list_setting_number_pane_g

0xba24,	// (0x0000ba24) list_setting_number_pane_t1_ParamLimits

0xba24,	// (0x0000ba24) list_setting_number_pane_t1

0xba38,	// (0x0000ba38) list_setting_number_pane_t2_ParamLimits

0xba38,	// (0x0000ba38) list_setting_number_pane_t2

0xba4f,	// (0x0000ba4f) list_setting_number_pane_t3_ParamLimits

0xba4f,	// (0x0000ba4f) list_setting_number_pane_t3

0x0003,

0xef01,	// (0x0000ef01) list_setting_number_pane_t_ParamLimits

0xef01,	// (0x0000ef01) list_setting_number_pane_t

0xba18,	// (0x0000ba18) set_value_pane_ParamLimits

0xba18,	// (0x0000ba18) set_value_pane

0x1224,	// (0x00001224) bg_set_opt_pane_ParamLimits

0x1224,	// (0x00001224) bg_set_opt_pane

0x1245,	// (0x00001245) set_value_pane_t1

0x1253,	// (0x00001253) slider_set_pane_cp3

0x125c,	// (0x0000125c) volume_small_pane_cp

0x1265,	// (0x00001265) list_form_gen_pane

0x126e,	// (0x0000126e) scroll_pane_cp8

0xba92,	// (0x0000ba92) form_field_data_pane_ParamLimits

0xba92,	// (0x0000ba92) form_field_data_pane

0xbaa9,	// (0x0000baa9) form_field_data_wide_pane_ParamLimits

0xbaa9,	// (0x0000baa9) form_field_data_wide_pane

0xbac9,	// (0x0000bac9) form_field_popup_pane_ParamLimits

0xbac9,	// (0x0000bac9) form_field_popup_pane

0xbae7,	// (0x0000bae7) form_field_popup_wide_pane_ParamLimits

0xbae7,	// (0x0000bae7) form_field_popup_wide_pane

0x12f9,	// (0x000012f9) form_field_slider_pane_ParamLimits

0x12f9,	// (0x000012f9) form_field_slider_pane

0x130c,	// (0x0000130c) form_field_slider_wide_pane_ParamLimits

0x130c,	// (0x0000130c) form_field_slider_wide_pane

0x131f,	// (0x0000131f) data_form_pane

0xbb08,	// (0x0000bb08) form_field_data_pane_t1

0x134f,	// (0x0000134f) input_focus_pane

0x135d,	// (0x0000135d) data_form_wide_pane

0x1395,	// (0x00001395) form_field_data_wide_pane_t1

0x0b54,	// (0x00000b54) input_focus_pane_cp6

0xbb22,	// (0x0000bb22) form_field_popup_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7

0x13d1,	// (0x000013d1) list_form_pane

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8

0x13fa,	// (0x000013fa) list_form_wide_pane

0xbb44,	// (0x0000bb44) form_field_slider_pane_t1_ParamLimits

0xbb44,	// (0x0000bb44) form_field_slider_pane_t1

0xbb5c,	// (0x0000bb5c) form_field_slider_pane_t2_ParamLimits

0xbb5c,	// (0x0000bb5c) form_field_slider_pane_t2

0x0001,

0xef0a,	// (0x0000ef0a) form_field_slider_pane_t_ParamLimits

0xef0a,	// (0x0000ef0a) form_field_slider_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9

0xbb71,	// (0x0000bb71) slider_cont_pane_ParamLimits

0xbb71,	// (0x0000bb71) slider_cont_pane

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1_ParamLimits

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2_ParamLimits

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2

0x0001,

0xa9cb,	// (0x0000a9cb) form_field_slider_wide_pane_t_ParamLimits

0xa9cb,	// (0x0000a9cb) form_field_slider_wide_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10

0xbb85,	// (0x0000bb85) slider_cont_pane_cp1_ParamLimits

0xbb85,	// (0x0000bb85) slider_cont_pane_cp1

0xbb99,	// (0x0000bb99) slider_form_pane_cp

0x148b,	// (0x0000148b) input_focus_pane_g1

0x1493,	// (0x00001493) input_focus_pane_g2

0x149b,	// (0x0000149b) input_focus_pane_g3

0x14a3,	// (0x000014a3) input_focus_pane_g4

0x14ab,	// (0x000014ab) input_focus_pane_g5

0x14b3,	// (0x000014b3) input_focus_pane_g6

0x14bb,	// (0x000014bb) input_focus_pane_g7

0x14c3,	// (0x000014c3) input_focus_pane_g8

0x14cb,	// (0x000014cb) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xa9d0,	// (0x0000a9d0) input_focus_pane_g

0x3e11,	// (0x00003e11) wait_border_pane_g3_copy1

0xbba1,	// (0x0000bba1) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd194,	// (0x0000d194) data_form_wide_pane_t1

0xbbbb,	// (0x0000bbbb) list_form_graphic_pane_cp_ParamLimits

0xbbbb,	// (0x0000bbbb) list_form_graphic_pane_cp

0x4f96,	// (0x00004f96) slider_form_pane_g1

0x4f9f,	// (0x00004f9f) slider_form_pane_g2

0x0006,

0xefc4,	// (0x0000efc4) slider_form_pane_g

0xbbce,	// (0x0000bbce) list_form_graphic_pane_ParamLimits

0xbbce,	// (0x0000bbce) list_form_graphic_pane

0x151f,	// (0x0000151f) list_form_graphic_pane_g1

0x1527,	// (0x00001527) list_form_graphic_pane_t1_ParamLimits

0x1527,	// (0x00001527) list_form_graphic_pane_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5

0xbbe2,	// (0x0000bbe2) find_pane_g1

0x1545,	// (0x00001545) input_find_pane

0xbbeb,	// (0x0000bbeb) input_find_pane_g1_ParamLimits

0xbbeb,	// (0x0000bbeb) input_find_pane_g1

0xbbf7,	// (0x0000bbf7) input_find_pane_t1_ParamLimits

0xbbf7,	// (0x0000bbf7) input_find_pane_t1

0xbc0c,	// (0x0000bc0c) input_find_pane_t2_ParamLimits

0xbc0c,	// (0x0000bc0c) input_find_pane_t2

0x0001,

0xef0f,	// (0x0000ef0f) input_find_pane_t_ParamLimits

0xef0f,	// (0x0000ef0f) input_find_pane_t

0x1584,	// (0x00001584) input_focus_pane_cp5_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp5

0xbc2d,	// (0x0000bc2d) bg_popup_window_pane_cp2_ParamLimits

0xbc2d,	// (0x0000bc2d) bg_popup_window_pane_cp2

0xbc3a,	// (0x0000bc3a) listscroll_menu_pane_ParamLimits

0xbc3a,	// (0x0000bc3a) listscroll_menu_pane

0xbc46,	// (0x0000bc46) popup_submenu_window_ParamLimits

0xbc46,	// (0x0000bc46) popup_submenu_window

0x15db,	// (0x000015db) find_popup_pane_g1

0x15e3,	// (0x000015e3) input_popup_find_pane_cp

0x1584,	// (0x00001584) input_focus_pane_cp4_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp4

0x15fb,	// (0x000015fb) input_popup_find_pane_t1_ParamLimits

0x15fb,	// (0x000015fb) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1629,	// (0x00001629) listscroll_popup_sub_pane

0x1631,	// (0x00001631) list_submenu_pane_ParamLimits

0x1631,	// (0x00001631) list_submenu_pane

0x1642,	// (0x00001642) scroll_pane_cp4

0x164a,	// (0x0000164a) list_single_popup_submenu_pane_ParamLimits

0x164a,	// (0x0000164a) list_single_popup_submenu_pane

0x165d,	// (0x0000165d) list_single_popup_submenu_pane_g1

0x1665,	// (0x00001665) list_single_popup_submenu_pane_t1_ParamLimits

0x1665,	// (0x00001665) list_single_popup_submenu_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1

0xbc78,	// (0x0000bc78) tabs_2_active_pane_g1

0xbc80,	// (0x0000bc80) tabs_2_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1

0xbc78,	// (0x0000bc78) tabs_2_passive_pane_g1

0xbc80,	// (0x0000bc80) tabs_2_passive_pane_t1

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4

0xbc92,	// (0x0000bc92) tabs_2_long_active_pane_t1

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp4

0x3693,	// (0x00003693) list_single_midp_graphic_pane_g4_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5

0xbca5,	// (0x0000bca5) tabs_3_long_active_pane_t1

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp5

0x3693,	// (0x00003693) list_single_midp_graphic_pane_g4

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane_ParamLimits

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane

0x16eb,	// (0x000016eb) grid_popup_fast_pane_ParamLimits

0x16eb,	// (0x000016eb) grid_popup_fast_pane

0x16fd,	// (0x000016fd) scroll_pane_cp9_ParamLimits

0x16fd,	// (0x000016fd) scroll_pane_cp9

0x71e0,	// (0x000071e0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x71e0,	// (0x000071e0) list_single_graphic_hl_pane_t1_cp2

0x1721,	// (0x00001721) input_focus_pane_cp20_ParamLimits

0x1721,	// (0x00001721) input_focus_pane_cp20

0x172f,	// (0x0000172f) query_popup_data_pane_t1_ParamLimits

0x172f,	// (0x0000172f) query_popup_data_pane_t1

0x1742,	// (0x00001742) query_popup_data_pane_t2_ParamLimits

0x1742,	// (0x00001742) query_popup_data_pane_t2

0x1788,	// (0x00001788) query_popup_data_pane_t3_ParamLimits

0x1788,	// (0x00001788) query_popup_data_pane_t3

0x17c9,	// (0x000017c9) query_popup_data_pane_t4_ParamLimits

0x17c9,	// (0x000017c9) query_popup_data_pane_t4

0x1805,	// (0x00001805) query_popup_data_pane_t5_ParamLimits

0x1805,	// (0x00001805) query_popup_data_pane_t5

0x0004,

0xa9ea,	// (0x0000a9ea) query_popup_data_pane_t_ParamLimits

0xa9ea,	// (0x0000a9ea) query_popup_data_pane_t

0x148b,	// (0x0000148b) bg_set_opt_pane_g1

0x1493,	// (0x00001493) bg_set_opt_pane_g2

0x149b,	// (0x0000149b) bg_set_opt_pane_g3

0x14a3,	// (0x000014a3) bg_set_opt_pane_g4

0x14ab,	// (0x000014ab) bg_set_opt_pane_g5

0x14b3,	// (0x000014b3) bg_set_opt_pane_g6

0x14bb,	// (0x000014bb) bg_set_opt_pane_g7

0x14c3,	// (0x000014c3) bg_set_opt_pane_g8

0x14cb,	// (0x000014cb) bg_set_opt_pane_g9

0x0008,

0xa9f5,	// (0x0000a9f5) bg_set_opt_pane_g

0x20cd,	// (0x000020cd) control_top_pane_stacon_ParamLimits

0x20cd,	// (0x000020cd) control_top_pane_stacon

0x2120,	// (0x00002120) signal_pane_stacon_ParamLimits

0x2120,	// (0x00002120) signal_pane_stacon

0x2145,	// (0x00002145) stacon_top_pane_g1_ParamLimits

0x2145,	// (0x00002145) stacon_top_pane_g1

0x2167,	// (0x00002167) title_pane_stacon_ParamLimits

0x2167,	// (0x00002167) title_pane_stacon

0x2191,	// (0x00002191) uni_indicator_pane_stacon_ParamLimits

0x2191,	// (0x00002191) uni_indicator_pane_stacon

0x21a6,	// (0x000021a6) battery_pane_stacon_ParamLimits

0x21a6,	// (0x000021a6) battery_pane_stacon

0x21ea,	// (0x000021ea) control_bottom_pane_stacon_ParamLimits

0x21ea,	// (0x000021ea) control_bottom_pane_stacon

0x220d,	// (0x0000220d) navi_pane_stacon_ParamLimits

0x220d,	// (0x0000220d) navi_pane_stacon

0x2230,	// (0x00002230) stacon_bottom_pane_g1_ParamLimits

0x2230,	// (0x00002230) stacon_bottom_pane_g1

0x183c,	// (0x0000183c) aid_levels_signal_lsc_ParamLimits

0x183c,	// (0x0000183c) aid_levels_signal_lsc

0x1853,	// (0x00001853) signal_pane_stacon_g1_ParamLimits

0x1853,	// (0x00001853) signal_pane_stacon_g1

0x1867,	// (0x00001867) signal_pane_stacon_g2_ParamLimits

0x1867,	// (0x00001867) signal_pane_stacon_g2

0x0001,

0xaa08,	// (0x0000aa08) signal_pane_stacon_g_ParamLimits

0xaa08,	// (0x0000aa08) signal_pane_stacon_g

0x18a9,	// (0x000018a9) title_pane_stacon_t1_ParamLimits

0x18a9,	// (0x000018a9) title_pane_stacon_t1

0x18ce,	// (0x000018ce) uni_indicator_pane_stacon_g1

0x18d8,	// (0x000018d8) uni_indicator_pane_stacon_g2

0x18e2,	// (0x000018e2) uni_indicator_pane_stacon_g3

0x18ec,	// (0x000018ec) uni_indicator_pane_stacon_g4

0x0003,

0xaa14,	// (0x0000aa14) uni_indicator_pane_stacon_g

0x18f6,	// (0x000018f6) control_top_pane_stacon_g1

0x18fe,	// (0x000018fe) control_top_pane_stacon_t1_ParamLimits

0x18fe,	// (0x000018fe) control_top_pane_stacon_t1

0x1935,	// (0x00001935) aid_levels_battery_lsc_ParamLimits

0x1935,	// (0x00001935) aid_levels_battery_lsc

0x194d,	// (0x0000194d) battery_pane_stacon_g1_ParamLimits

0x194d,	// (0x0000194d) battery_pane_stacon_g1

0x1960,	// (0x00001960) battery_pane_stacon_g2_ParamLimits

0x1960,	// (0x00001960) battery_pane_stacon_g2

0x0001,

0xaa1d,	// (0x0000aa1d) battery_pane_stacon_g_ParamLimits

0xaa1d,	// (0x0000aa1d) battery_pane_stacon_g

0x199e,	// (0x0000199e) navi_icon_pane_stacon

0x19b2,	// (0x000019b2) navi_navi_pane_stacon

0x199e,	// (0x0000199e) navi_text_pane_stacon

0x18f6,	// (0x000018f6) control_bottom_pane_stacon_g1

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1_ParamLimits

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1

0xbcb7,	// (0x0000bcb7) grid_app_pane_ParamLimits

0xbcb7,	// (0x0000bcb7) grid_app_pane

0xbced,	// (0x0000bced) scroll_pane_cp15_ParamLimits

0xbced,	// (0x0000bced) scroll_pane_cp15

0xbd06,	// (0x0000bd06) cell_app_pane_ParamLimits

0xbd06,	// (0x0000bd06) cell_app_pane

0xbd4d,	// (0x0000bd4d) cell_app_pane_g1_ParamLimits

0xbd4d,	// (0x0000bd4d) cell_app_pane_g1

0x1a9c,	// (0x00001a9c) cell_app_pane_g2_ParamLimits

0x1a9c,	// (0x00001a9c) cell_app_pane_g2

0x0001,

0xef14,	// (0x0000ef14) cell_app_pane_g_ParamLimits

0xef14,	// (0x0000ef14) cell_app_pane_g

0x1aa8,	// (0x00001aa8) cell_app_pane_t1_ParamLimits

0x1aa8,	// (0x00001aa8) cell_app_pane_t1

0x1abf,	// (0x00001abf) grid_highlight_pane_ParamLimits

0x1abf,	// (0x00001abf) grid_highlight_pane

0x148b,	// (0x0000148b) cell_highlight_pane_g1

0x1493,	// (0x00001493) cell_highlight_pane_g2

0x149b,	// (0x0000149b) cell_highlight_pane_g3

0x14a3,	// (0x000014a3) cell_highlight_pane_g4

0x14ab,	// (0x000014ab) cell_highlight_pane_g5

0x14b3,	// (0x000014b3) cell_highlight_pane_g6

0x14bb,	// (0x000014bb) cell_highlight_pane_g7

0x14c3,	// (0x000014c3) cell_highlight_pane_g8

0x14cb,	// (0x000014cb) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xa9d0,	// (0x0000a9d0) cell_highlight_pane_g

0x1ae3,	// (0x00001ae3) bg_scroll_pane

0x1b02,	// (0x00001b02) scroll_handle_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1

0x1b68,	// (0x00001b68) scroll_bg_pane_g2

0x1b80,	// (0x00001b80) scroll_bg_pane_g3

0x0002,

0xaa27,	// (0x0000aa27) scroll_bg_pane_g

0x1b95,	// (0x00001b95) scroll_handle_focus_pane_ParamLimits

0x1b95,	// (0x00001b95) scroll_handle_focus_pane

0x1b53,	// (0x00001b53) scroll_handle_pane_g1

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2

0x1b80,	// (0x00001b80) scroll_handle_pane_g3

0x0002,

0xaa2e,	// (0x0000aa2e) scroll_handle_pane_g

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3

0x0002,

0xaa35,	// (0x0000aa35) popup_fep_japan_predictive_window_t_ParamLimits

0xaa35,	// (0x0000aa35) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c37,	// (0x00001c37) listscroll_japin_cand_pane

0x1c3f,	// (0x00001c3f) popup_fep_japan_candidate_window_t1

0x1c4d,	// (0x00001c4d) candidate_pane_ParamLimits

0x1c4d,	// (0x00001c4d) candidate_pane

0x1c5f,	// (0x00001c5f) scroll_pane_cp30

0x1c67,	// (0x00001c67) list_single_popup_jap_candidate_pane_ParamLimits

0x1c67,	// (0x00001c67) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c7b,	// (0x00001c7b) list_single_popup_jap_candidate_pane_t1

0x1c8a,	// (0x00001c8a) level_1_signal

0x1c97,	// (0x00001c97) level_2_signal

0x1ca4,	// (0x00001ca4) level_3_signal

0x1cb1,	// (0x00001cb1) level_4_signal

0x1cbe,	// (0x00001cbe) level_5_signal

0x1ccb,	// (0x00001ccb) level_6_signal

0x1cd8,	// (0x00001cd8) level_7_signal

0x1c8a,	// (0x00001c8a) level_1_battery

0x1c97,	// (0x00001c97) level_2_battery

0x1ca4,	// (0x00001ca4) level_3_battery

0x1cb1,	// (0x00001cb1) level_4_battery

0x1cbe,	// (0x00001cbe) level_5_battery

0x1ccb,	// (0x00001ccb) level_6_battery

0x1cd8,	// (0x00001cd8) level_7_battery

0x1d1c,	// (0x00001d1c) list_menu_pane_ParamLimits

0x1d1c,	// (0x00001d1c) list_menu_pane

0x1d2d,	// (0x00001d2d) scroll_pane_cp25_ParamLimits

0x1d2d,	// (0x00001d2d) scroll_pane_cp25

0x1d46,	// (0x00001d46) list_double2_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double2_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double2_large_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double2_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double2_pane_cp2

0x1d46,	// (0x00001d46) list_double_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double_large_graphic_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_large_graphic_pane_cp2

0x1d46,	// (0x00001d46) list_double_number_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_number_pane_cp2

0x1d46,	// (0x00001d46) list_double_pane_cp2_ParamLimits

0x1d46,	// (0x00001d46) list_double_pane_cp2

0xbd8b,	// (0x0000bd8b) list_single_2graphic_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_2graphic_pane_cp2

0xbd8b,	// (0x0000bd8b) list_single_graphic_heading_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_graphic_heading_pane_cp2

0xbd8b,	// (0x0000bd8b) list_single_graphic_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_graphic_pane_cp2

0xbd8b,	// (0x0000bd8b) list_single_heading_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_heading_pane_cp2

0x1d7f,	// (0x00001d7f) list_single_large_graphic_pane_cp2_ParamLimits

0x1d7f,	// (0x00001d7f) list_single_large_graphic_pane_cp2

0xbd8b,	// (0x0000bd8b) list_single_number_heading_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_number_heading_pane_cp2

0xbd8b,	// (0x0000bd8b) list_single_number_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_number_pane_cp2

0xbd8b,	// (0x0000bd8b) list_single_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_pane_cp2

0x1e30,	// (0x00001e30) bg_popup_sub_pane_cp22

0x1e55,	// (0x00001e55) popup_side_volume_key_window_g1

0x1e7f,	// (0x00001e7f) popup_side_volume_key_window_t1

0x1e9b,	// (0x00001e9b) volume_small_pane_cp1

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24_ParamLimits

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24

0x1ea3,	// (0x00001ea3) fep_china_uni_candidate_pane_ParamLimits

0x1ea3,	// (0x00001ea3) fep_china_uni_candidate_pane

0x1eb7,	// (0x00001eb7) fep_china_uni_entry_pane

0x1ec7,	// (0x00001ec7) popup_fep_china_uni_window_g1

0x1ee3,	// (0x00001ee3) fep_china_uni_entry_pane_g1

0x1eeb,	// (0x00001eeb) fep_china_uni_entry_pane_g2

0x0001,

0xaa62,	// (0x0000aa62) fep_china_uni_entry_pane_g

0x1ef3,	// (0x00001ef3) fep_entry_item_pane

0x1efd,	// (0x00001efd) fep_candidate_item_pane

0x1f05,	// (0x00001f05) fep_china_uni_candidate_pane_g1

0x1f0d,	// (0x00001f0d) fep_china_uni_candidate_pane_g2

0x1f15,	// (0x00001f15) fep_china_uni_candidate_pane_g3

0x1f1d,	// (0x00001f1d) fep_china_uni_candidate_pane_g4

0x0003,

0xaa67,	// (0x0000aa67) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f25,	// (0x00001f25) fep_entry_item_pane_t1_ParamLimits

0x1f25,	// (0x00001f25) fep_entry_item_pane_t1

0x1f3b,	// (0x00001f3b) fep_candidate_item_pane_t1_ParamLimits

0x1f3b,	// (0x00001f3b) fep_candidate_item_pane_t1

0x1f50,	// (0x00001f50) fep_candidate_item_pane_t2_ParamLimits

0x1f50,	// (0x00001f50) fep_candidate_item_pane_t2

0x0001,

0xaa70,	// (0x0000aa70) fep_candidate_item_pane_t_ParamLimits

0xaa70,	// (0x0000aa70) fep_candidate_item_pane_t

0x04e9,	// (0x000004e9) list_highlight_pane_cp31_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp31

0x1f62,	// (0x00001f62) level_1_signal_lsc

0x1f6b,	// (0x00001f6b) level_2_signal_lsc

0x1f74,	// (0x00001f74) level_3_signal_lsc

0x1f7d,	// (0x00001f7d) level_4_signal_lsc

0x1f86,	// (0x00001f86) level_5_signal_lsc

0x1f8f,	// (0x00001f8f) level_6_signal_lsc

0x1f98,	// (0x00001f98) level_7_signal_lsc

0x1f98,	// (0x00001f98) level_1_battery_lsc

0x1fa1,	// (0x00001fa1) level_2_battery_lsc

0x1faa,	// (0x00001faa) level_3_battery_lsc

0x1fb3,	// (0x00001fb3) level_4_battery_lsc

0x1fbc,	// (0x00001fbc) level_5_battery_lsc

0x1fc5,	// (0x00001fc5) level_6_battery_lsc

0x1f62,	// (0x00001f62) level_7_battery_lsc

0x1fce,	// (0x00001fce) scroll_handle_focus_pane_g1

0x1fd7,	// (0x00001fd7) scroll_handle_focus_pane_g2

0x1fe0,	// (0x00001fe0) scroll_handle_focus_pane_g3

0x0002,

0xaa75,	// (0x0000aa75) scroll_handle_focus_pane_g

0xbded,	// (0x0000bded) list_single_2graphic_pane_g1_ParamLimits

0xbded,	// (0x0000bded) list_single_2graphic_pane_g1

0xb784,	// (0x0000b784) list_single_2graphic_pane_g2_ParamLimits

0xb784,	// (0x0000b784) list_single_2graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3

0xbdf9,	// (0x0000bdf9) list_single_2graphic_pane_g4_ParamLimits

0xbdf9,	// (0x0000bdf9) list_single_2graphic_pane_g4

0x0003,

0xef1e,	// (0x0000ef1e) list_single_2graphic_pane_g_ParamLimits

0xef1e,	// (0x0000ef1e) list_single_2graphic_pane_g

0xbe05,	// (0x0000be05) list_single_2graphic_pane_t1_ParamLimits

0xbe05,	// (0x0000be05) list_single_2graphic_pane_t1

0xbe33,	// (0x0000be33) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe33,	// (0x0000be33) list_double2_graphic_large_graphic_pane_g1

0xb7c1,	// (0x0000b7c1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb7c1,	// (0x0000b7c1) list_double2_graphic_large_graphic_pane_g2

0xb7d2,	// (0x0000b7d2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb7d2,	// (0x0000b7d2) list_double2_graphic_large_graphic_pane_g3

0xbe45,	// (0x0000be45) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe45,	// (0x0000be45) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xef27,	// (0x0000ef27) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xef27,	// (0x0000ef27) list_double2_graphic_large_graphic_pane_g

0xbe51,	// (0x0000be51) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe51,	// (0x0000be51) list_double2_graphic_large_graphic_pane_t1

0xbe67,	// (0x0000be67) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe67,	// (0x0000be67) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xef30,	// (0x0000ef30) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xef30,	// (0x0000ef30) list_double2_graphic_large_graphic_pane_t

0x22fb,	// (0x000022fb) popup_fast_swap_window_ParamLimits

0x22fb,	// (0x000022fb) popup_fast_swap_window

0x2317,	// (0x00002317) popup_side_volume_key_window

0x2331,	// (0x00002331) stacon_top_pane

0x233b,	// (0x0000233b) status_pane_ParamLimits

0x233b,	// (0x0000233b) status_pane

0x2331,	// (0x00002331) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x126e,	// (0x0000126e) scroll_pane_cp121

0x1265,	// (0x00001265) set_content_pane

0xbe79,	// (0x0000be79) bg_active_tab_pane_g1_cp1

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp1

0xbe82,	// (0x0000be82) bg_active_tab_pane_g3_cp1

0xbe79,	// (0x0000be79) bg_passive_tab_pane_g1_cp1

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp1

0xbe82,	// (0x0000be82) bg_passive_tab_pane_g3_cp1

0xbe8b,	// (0x0000be8b) bg_active_tab_pane_g1_cp2

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp2

0xbe94,	// (0x0000be94) bg_active_tab_pane_g3_cp2

0xbe8b,	// (0x0000be8b) bg_passive_tab_pane_g1_cp2

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp2

0xbe94,	// (0x0000be94) bg_passive_tab_pane_g3_cp2

0xbe9d,	// (0x0000be9d) bg_active_tab_pane_g1_cp3

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp3

0xbea6,	// (0x0000bea6) bg_active_tab_pane_g3_cp3

0xbe9d,	// (0x0000be9d) bg_passive_tab_pane_g1_cp3

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp3

0xbea6,	// (0x0000bea6) bg_passive_tab_pane_g3_cp3

0xbeaf,	// (0x0000beaf) bg_active_tab_pane_g1_cp4

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp4

0xbeb8,	// (0x0000beb8) bg_active_tab_pane_g3_cp4

0xbeaf,	// (0x0000beaf) bg_passive_tab_pane_g1_cp4

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp4

0xbeb8,	// (0x0000beb8) bg_passive_tab_pane_g3_cp4

0x224c,	// (0x0000224c) bg_active_tab_pane_g1_cp5

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp5

0x2255,	// (0x00002255) bg_active_tab_pane_g3_cp5

0x224c,	// (0x0000224c) bg_passive_tab_pane_g1_cp5

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp5

0x2255,	// (0x00002255) bg_passive_tab_pane_g3_cp5

0xa466,	// (0x0000a466) list_set_graphic_pane_ParamLimits

0xa466,	// (0x0000a466) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x227c,	// (0x0000227c) list_set_graphic_pane_g1_ParamLimits

0x227c,	// (0x0000227c) list_set_graphic_pane_g1

0x2288,	// (0x00002288) list_set_graphic_pane_g2_ParamLimits

0x2288,	// (0x00002288) list_set_graphic_pane_g2

0x0001,

0xaa93,	// (0x0000aa93) list_set_graphic_pane_g_ParamLimits

0xaa93,	// (0x0000aa93) list_set_graphic_pane_g

0x0009,

0xae04,	// (0x0000ae04) volume_small_pane_cp_g

0x22ac,	// (0x000022ac) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22ac,	// (0x000022ac) list_double2_large_graphic_pane_g1_cp2

0x22ba,	// (0x000022ba) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22ba,	// (0x000022ba) list_double2_large_graphic_pane_g2_cp2

0x22cb,	// (0x000022cb) list_double2_large_graphic_pane_g3_cp2

0x22d3,	// (0x000022d3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22d3,	// (0x000022d3) list_double2_large_graphic_pane_t1_cp2

0x22e9,	// (0x000022e9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22e9,	// (0x000022e9) list_double2_large_graphic_pane_t2_cp2

0x4a4e,	// (0x00004a4e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a4e,	// (0x00004a4e) list_double_large_graphic_pane_g1_cp2

0x4a61,	// (0x00004a61) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a61,	// (0x00004a61) list_double_large_graphic_pane_g2_cp2

0x2459,	// (0x00002459) list_double_large_graphic_pane_g3_cp2

0x4a72,	// (0x00004a72) list_double_large_graphic_pane_g4_cp

0x4a7a,	// (0x00004a7a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a7a,	// (0x00004a7a) list_double_large_graphic_pane_t1_cp2

0x4a91,	// (0x00004a91) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a91,	// (0x00004a91) list_double_large_graphic_pane_t2_cp2

0x2349,	// (0x00002349) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2349,	// (0x00002349) list_double2_graphic_pane_g1_cp2

0x2357,	// (0x00002357) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2357,	// (0x00002357) list_double2_graphic_pane_g2_cp2

0x2368,	// (0x00002368) list_double2_graphic_pane_g3_cp2

0x2372,	// (0x00002372) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_graphic_pane_t1_cp2

0x2388,	// (0x00002388) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2388,	// (0x00002388) list_double2_graphic_pane_t2_cp2

0x239a,	// (0x0000239a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x239a,	// (0x0000239a) list_single_number_heading_pane_g1_cp2

0x23a6,	// (0x000023a6) list_single_number_heading_pane_g2_cp2

0x23ae,	// (0x000023ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23ae,	// (0x000023ae) list_single_number_heading_pane_t1_cp2

0x23c4,	// (0x000023c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23c4,	// (0x000023c4) list_single_number_heading_pane_t2_cp2

0x23d8,	// (0x000023d8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23d8,	// (0x000023d8) list_single_number_heading_pane_t3_cp2

0x239a,	// (0x0000239a) list_single_heading_pane_g1_cp2_ParamLimits

0x239a,	// (0x0000239a) list_single_heading_pane_g1_cp2

0x23a6,	// (0x000023a6) list_single_heading_pane_g2_cp2

0x23ae,	// (0x000023ae) list_single_heading_pane_t1_cp2_ParamLimits

0x23ae,	// (0x000023ae) list_single_heading_pane_t1_cp2

0x4856,	// (0x00004856) list_single_heading_pane_t2_cp2_ParamLimits

0x4856,	// (0x00004856) list_single_heading_pane_t2_cp2

0x4798,	// (0x00004798) list_double_graphic_pane_g1_cp2_ParamLimits

0x4798,	// (0x00004798) list_double_graphic_pane_g1_cp2

0x47a4,	// (0x000047a4) list_double_graphic_pane_g2_cp2_ParamLimits

0x47a4,	// (0x000047a4) list_double_graphic_pane_g2_cp2

0x47b3,	// (0x000047b3) list_double_graphic_pane_g3_cp2

0x47bb,	// (0x000047bb) list_double_graphic_pane_t1_cp2_ParamLimits

0x47bb,	// (0x000047bb) list_double_graphic_pane_t1_cp2

0x47d1,	// (0x000047d1) list_double_graphic_pane_t2_cp2_ParamLimits

0x47d1,	// (0x000047d1) list_double_graphic_pane_t2_cp2

0x244d,	// (0x0000244d) list_double_number_pane_g1_cp2_ParamLimits

0x244d,	// (0x0000244d) list_double_number_pane_g1_cp2

0x2459,	// (0x00002459) list_double_number_pane_g2_cp2

0x475c,	// (0x0000475c) list_double_number_pane_t1_cp2_ParamLimits

0x475c,	// (0x0000475c) list_double_number_pane_t1_cp2

0x4770,	// (0x00004770) list_double_number_pane_t2_cp2_ParamLimits

0x4770,	// (0x00004770) list_double_number_pane_t2_cp2

0x4786,	// (0x00004786) list_double_number_pane_t3_cp2_ParamLimits

0x4786,	// (0x00004786) list_double_number_pane_t3_cp2

0x4634,	// (0x00004634) list_single_graphic_pane_g1_cp2_ParamLimits

0x4634,	// (0x00004634) list_single_graphic_pane_g1_cp2

0x24b1,	// (0x000024b1) list_single_graphic_pane_g2_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_graphic_pane_g2_cp2

0x24bd,	// (0x000024bd) list_single_graphic_pane_g3_cp2

0x460a,	// (0x0000460a) list_single_graphic_pane_t1_cp2_ParamLimits

0x460a,	// (0x0000460a) list_single_graphic_pane_t1_cp2

0x24b1,	// (0x000024b1) list_single_number_pane_g1_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_number_pane_g1_cp2

0x24bd,	// (0x000024bd) list_single_number_pane_g2_cp2

0x460a,	// (0x0000460a) list_single_number_pane_t1_cp2_ParamLimits

0x460a,	// (0x0000460a) list_single_number_pane_t1_cp2

0x4620,	// (0x00004620) list_single_number_pane_t2_cp2_ParamLimits

0x4620,	// (0x00004620) list_single_number_pane_t2_cp2

0x22ba,	// (0x000022ba) list_double2_pane_g1_cp2_ParamLimits

0x22ba,	// (0x000022ba) list_double2_pane_g1_cp2

0x22cb,	// (0x000022cb) list_double2_pane_g2_cp2

0x2425,	// (0x00002425) list_double2_pane_t1_cp2_ParamLimits

0x2425,	// (0x00002425) list_double2_pane_t1_cp2

0x243b,	// (0x0000243b) list_double2_pane_t2_cp2_ParamLimits

0x243b,	// (0x0000243b) list_double2_pane_t2_cp2

0x244d,	// (0x0000244d) list_double_pane_g1_cp2_ParamLimits

0x244d,	// (0x0000244d) list_double_pane_g1_cp2

0x2459,	// (0x00002459) list_double_pane_g2_cp2

0x2461,	// (0x00002461) list_double_pane_t1_cp2_ParamLimits

0x2461,	// (0x00002461) list_double_pane_t1_cp2

0x2477,	// (0x00002477) list_double_pane_t2_cp2_ParamLimits

0x2477,	// (0x00002477) list_double_pane_t2_cp2

0x24a1,	// (0x000024a1) list_single_pane_cp2_g3

0x24b1,	// (0x000024b1) list_single_pane_g1_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_pane_g1_cp2

0x24bd,	// (0x000024bd) list_single_pane_g2_cp2

0x24c5,	// (0x000024c5) list_single_pane_t1_cp2_ParamLimits

0x24c5,	// (0x000024c5) list_single_pane_t1_cp2

0x24dd,	// (0x000024dd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_large_graphic_pane_g1_cp2

0x24eb,	// (0x000024eb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x24eb,	// (0x000024eb) list_single_large_graphic_pane_g2_cp2

0x24f7,	// (0x000024f7) list_single_large_graphic_pane_g3_cp2

0x24ff,	// (0x000024ff) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24ff,	// (0x000024ff) list_single_large_graphic_pane_g4_cp1

0x2519,	// (0x00002519) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2519,	// (0x00002519) list_single_large_graphic_pane_t1_cp2

0x447b,	// (0x0000447b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x447b,	// (0x0000447b) list_single_graphic_heading_pane_g1_cp2

0x4448,	// (0x00004448) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4448,	// (0x00004448) list_single_graphic_heading_pane_g4_cp2

0x24bd,	// (0x000024bd) list_single_graphic_heading_pane_g5_cp2

0x4487,	// (0x00004487) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4487,	// (0x00004487) list_single_graphic_heading_pane_t1_cp2

0x449d,	// (0x0000449d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x449d,	// (0x0000449d) list_single_graphic_heading_pane_t2_cp2

0x443c,	// (0x0000443c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x443c,	// (0x0000443c) list_single_2graphic_pane_g1_cp2

0x4448,	// (0x00004448) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4448,	// (0x00004448) list_single_2graphic_pane_g2_cp2

0x24bd,	// (0x000024bd) list_single_2graphic_pane_g3_cp2

0x4459,	// (0x00004459) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4459,	// (0x00004459) list_single_2graphic_pane_g4_cp2

0x4465,	// (0x00004465) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4465,	// (0x00004465) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4024,	// (0x00004024) list_highlight_pane_g1_cp1

0x402c,	// (0x0000402c) list_highlight_pane_g2_cp1

0x4034,	// (0x00004034) list_highlight_pane_g3_cp1

0x403c,	// (0x0000403c) list_highlight_pane_g4_cp1

0x4044,	// (0x00004044) list_highlight_pane_g5_cp1

0x404c,	// (0x0000404c) list_highlight_pane_g6_cp1

0x4054,	// (0x00004054) list_highlight_pane_g7_cp1

0x405c,	// (0x0000405c) list_highlight_pane_g8_cp1

0x4064,	// (0x00004064) list_highlight_pane_g9_cp1

0xccf0,	// (0x0000ccf0) form_field_slider_pane_t3

0xcd00,	// (0x0000cd00) form_field_slider_pane_t4

0x3f58,	// (0x00003f58) slider_form_pane_ParamLimits

0x3f58,	// (0x00003f58) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x48a2,	// (0x000048a2) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xac21,	// (0x0000ac21) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x252f,	// (0x0000252f) text_digital

0x253e,	// (0x0000253e) text_primary

0x254d,	// (0x0000254d) text_primary_small

0x255c,	// (0x0000255c) text_secondary

0x256b,	// (0x0000256b) text_title

0x51a2,	// (0x000051a2) bg_passive_tab_pane_g1_cp3_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp3_srt

0x51ab,	// (0x000051ab) bg_passive_tab_pane_g3_cp3_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt

0x51b4,	// (0x000051b4) tabs_4_active_pane_srt_g1

0xd24f,	// (0x0000d24f) tabs_4_active_pane_srt_t1_ParamLimits

0xd24f,	// (0x0000d24f) tabs_4_active_pane_srt_t1

0x51a2,	// (0x000051a2) bg_active_tab_pane_g1_cp3_copy1

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp3_copy1

0x51ab,	// (0x000051ab) bg_active_tab_pane_g3_cp3_copy1

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp4_srt

0x4d5f,	// (0x00004d5f) bg_passive_tab_pane_g1_cp4_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp4_srt

0x4d68,	// (0x00004d68) bg_passive_tab_pane_g3_cp4_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt

0xd02b,	// (0x0000d02b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd02b,	// (0x0000d02b) tabs_2_long_active_pane_srt_t1

0x4d5f,	// (0x00004d5f) bg_active_tab_pane_g1_cp4_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp4_srt

0x4d68,	// (0x00004d68) bg_active_tab_pane_g3_cp4_srt

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp5_srt

0x224c,	// (0x0000224c) bg_passive_tab_pane_g1_cp5_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp5_srt

0x2255,	// (0x00002255) bg_passive_tab_pane_g3_cp5_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt

0xd015,	// (0x0000d015) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd015,	// (0x0000d015) tabs_3_long_active_pane_srt_t1

0x224c,	// (0x0000224c) bg_active_tab_pane_g1_cp5_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp5_srt

0x2255,	// (0x00002255) bg_active_tab_pane_g3_cp5_srt

0x4d3f,	// (0x00004d3f) navi_text_pane_srt_t1

0x4d37,	// (0x00004d37) navi_icon_pane_srt_g1

0x27e3,	// (0x000027e3) midp_editing_number_pane_srt

0x257a,	// (0x0000257a) midp_ticker_pane_srt

0x27eb,	// (0x000027eb) midp_ticker_pane_srt_g1

0x27f3,	// (0x000027f3) midp_ticker_pane_srt_g2

0x0001,

0xaab2,	// (0x0000aab2) midp_ticker_pane_srt_g

0x27fb,	// (0x000027fb) midp_ticker_pane_srt_t1

0x4d28,	// (0x00004d28) midp_editing_number_pane_t1_copy1

0xbec1,	// (0x0000bec1) listscroll_midp_pane

0xbec1,	// (0x0000bec1) midp_form_pane

0x25f2,	// (0x000025f2) midp_info_popup_window_ParamLimits

0x25f2,	// (0x000025f2) midp_info_popup_window

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50

0x3c59,	// (0x00003c59) listscroll_midp_info_pane_ParamLimits

0x3c59,	// (0x00003c59) listscroll_midp_info_pane

0x3c41,	// (0x00003c41) listscroll_form_midp_pane_ParamLimits

0x3c41,	// (0x00003c41) listscroll_form_midp_pane

0x3c4d,	// (0x00003c4d) scroll_bar_cp050

0xcce4,	// (0x0000cce4) list_midp_pane

0x5e9f,	// (0x00005e9f) signal_pane_g2_cp

0x3b5b,	// (0x00003b5b) listscroll_midp_info_pane_t1_ParamLimits

0x3b5b,	// (0x00003b5b) listscroll_midp_info_pane_t1

0x3b73,	// (0x00003b73) listscroll_midp_info_pane_t2_ParamLimits

0x3b73,	// (0x00003b73) listscroll_midp_info_pane_t2

0x3bb1,	// (0x00003bb1) listscroll_midp_info_pane_t3_ParamLimits

0x3bb1,	// (0x00003bb1) listscroll_midp_info_pane_t3

0x3beb,	// (0x00003beb) listscroll_midp_info_pane_t4_ParamLimits

0x3beb,	// (0x00003beb) listscroll_midp_info_pane_t4

0x0003,

0xab5c,	// (0x0000ab5c) listscroll_midp_info_pane_t_ParamLimits

0xab5c,	// (0x0000ab5c) listscroll_midp_info_pane_t

0x1642,	// (0x00001642) scroll_pane_cp21

0x3aff,	// (0x00003aff) form_midp_field_choice_group_pane

0x3b08,	// (0x00003b08) form_midp_field_text_pane

0x3b41,	// (0x00003b41) form_midp_field_time_pane

0x3b49,	// (0x00003b49) form_midp_gauge_slider_pane

0x3b52,	// (0x00003b52) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xccc8,	// (0x0000ccc8) list_single_midp_pane_ParamLimits

0xccc8,	// (0x0000ccc8) list_single_midp_pane

0xcca4,	// (0x0000cca4) form_midp_field_text_pane_t1

0x37b6,	// (0x000037b6) input_focus_pane_cp050

0x3ab2,	// (0x00003ab2) list_midp_form_text_pane

0x3a42,	// (0x00003a42) form_midp_field_choice_group_pane_t1

0x3a50,	// (0x00003a50) input_focus_pane_cp051

0x3a64,	// (0x00003a64) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a26,	// (0x00003a26) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a34,	// (0x00003a34) form_midp_field_time_pane_t2

0x0001,

0x26a2,	// (0x000026a2) aid_navinavi_width_2_pane

0xab57,	// (0x0000ab57) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39e6,	// (0x000039e6) form_midp_gauge_slider_pane_t1

0x39f4,	// (0x000039f4) form_midp_gauge_slider_pane_t2

0xcc88,	// (0x0000cc88) form_midp_gauge_slider_pane_t3

0xcc96,	// (0x0000cc96) form_midp_gauge_slider_pane_t4

0x0003,

0xef71,	// (0x0000ef71) form_midp_gauge_slider_pane_t

0x3a1e,	// (0x00003a1e) form_midp_slider_pane

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041_ParamLimits

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041

0x39b3,	// (0x000039b3) form_midp_gauge_wait_pane_t1_ParamLimits

0x39b3,	// (0x000039b3) form_midp_gauge_wait_pane_t1

0x39c5,	// (0x000039c5) form_midp_gauge_wait_pane_t2_ParamLimits

0x39c5,	// (0x000039c5) form_midp_gauge_wait_pane_t2

0x0001,

0xab49,	// (0x0000ab49) form_midp_gauge_wait_pane_t_ParamLimits

0xab49,	// (0x0000ab49) form_midp_gauge_wait_pane_t

0x39d7,	// (0x000039d7) form_midp_wait_pane_ParamLimits

0x39d7,	// (0x000039d7) form_midp_wait_pane

0x397d,	// (0x0000397d) form_midp_image_pane_g1

0x3986,	// (0x00003986) form_midp_image_pane_t1

0x3995,	// (0x00003995) form_midp_image_pane_t2

0x39a4,	// (0x000039a4) form_midp_image_pane_t3

0x0002,

0xab42,	// (0x0000ab42) form_midp_image_pane_t

0x3965,	// (0x00003965) list_single_midp_pane_g1

0x396e,	// (0x0000396e) list_single_midp_pane_t1

0xcc71,	// (0x0000cc71) list_midp_form_item_pane_ParamLimits

0xcc71,	// (0x0000cc71) list_midp_form_item_pane

0x264a,	// (0x0000264a) list_midp_form_item_pane_t1

0x2659,	// (0x00002659) midp_ticker_pane_g1

0x2665,	// (0x00002665) midp_ticker_pane_g2

0x0001,

0xaa98,	// (0x0000aa98) midp_ticker_pane_g

0xbf6d,	// (0x0000bf6d) midp_ticker_pane_t1

0xd1b0,	// (0x0000d1b0) midp_editing_number_pane_t1

0x4ff4,	// (0x00004ff4) midp_editing_number_pane

0x5003,	// (0x00005003) midp_ticker_pane

0x4cf0,	// (0x00004cf0) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4cf8,	// (0x00004cf8) listscroll_ai_message_pane

0x4c7a,	// (0x00004c7a) ai_message_heading_pane_g1_ParamLimits

0x4c7a,	// (0x00004c7a) ai_message_heading_pane_g1

0x4c86,	// (0x00004c86) ai_message_heading_pane_g2_ParamLimits

0x4c86,	// (0x00004c86) ai_message_heading_pane_g2

0x4c92,	// (0x00004c92) ai_message_heading_pane_g3_ParamLimits

0x4c92,	// (0x00004c92) ai_message_heading_pane_g3

0x4c9e,	// (0x00004c9e) ai_message_heading_pane_g4_ParamLimits

0x4c9e,	// (0x00004c9e) ai_message_heading_pane_g4

0x0003,

0xac83,	// (0x0000ac83) ai_message_heading_pane_g_ParamLimits

0xac83,	// (0x0000ac83) ai_message_heading_pane_g

0x4caa,	// (0x00004caa) ai_message_heading_pane_t1_ParamLimits

0x4caa,	// (0x00004caa) ai_message_heading_pane_t1

0x4cc4,	// (0x00004cc4) ai_message_heading_pane_t2_ParamLimits

0x4cc4,	// (0x00004cc4) ai_message_heading_pane_t2

0x0001,

0xac8c,	// (0x0000ac8c) ai_message_heading_pane_t_ParamLimits

0xac8c,	// (0x0000ac8c) ai_message_heading_pane_t

0x4cd6,	// (0x00004cd6) bg_popup_heading_pane_cp1_ParamLimits

0x4cd6,	// (0x00004cd6) bg_popup_heading_pane_cp1

0x4c68,	// (0x00004c68) list_ai_message_pane_ParamLimits

0x4c68,	// (0x00004c68) list_ai_message_pane

0x1642,	// (0x00001642) scroll_pane_cp10

0x4bb4,	// (0x00004bb4) list_ai_message_pane_g1

0x4bbc,	// (0x00004bbc) list_ai_message_pane_g2

0x0001,

0xac60,	// (0x0000ac60) list_ai_message_pane_g

0x4bc4,	// (0x00004bc4) list_ai_message_pane_t1_ParamLimits

0x4bc4,	// (0x00004bc4) list_ai_message_pane_t1

0x4bd9,	// (0x00004bd9) list_ai_message_pane_t2_ParamLimits

0x4bd9,	// (0x00004bd9) list_ai_message_pane_t2

0x4bee,	// (0x00004bee) list_ai_message_pane_t3_ParamLimits

0x4bee,	// (0x00004bee) list_ai_message_pane_t3

0x4c03,	// (0x00004c03) list_ai_message_pane_t4_ParamLimits

0x4c03,	// (0x00004c03) list_ai_message_pane_t4

0x0003,

0xac65,	// (0x0000ac65) list_ai_message_pane_t_ParamLimits

0xac65,	// (0x0000ac65) list_ai_message_pane_t

0xcfde,	// (0x0000cfde) cell_ai_soft_ind_pane_ParamLimits

0xcfde,	// (0x0000cfde) cell_ai_soft_ind_pane

0x2683,	// (0x00002683) cell_ai_soft_ind_pane_g1_ParamLimits

0x2683,	// (0x00002683) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x2690,	// (0x00002690) text_secondary_cp56_ParamLimits

0x2690,	// (0x00002690) text_secondary_cp56

0x4b73,	// (0x00004b73) example_general_pane_ParamLimits

0x4b73,	// (0x00004b73) example_general_pane

0x4b7f,	// (0x00004b7f) example_parent_pane_g1_ParamLimits

0x4b7f,	// (0x00004b7f) example_parent_pane_g1

0x4b8b,	// (0x00004b8b) example_parent_pane_t1_ParamLimits

0x4b8b,	// (0x00004b8b) example_parent_pane_t1

0xc4d2,	// (0x0000c4d2) popup_preview_text_window_ParamLimits

0xc4d2,	// (0x0000c4d2) popup_preview_text_window

0x24a9,	// (0x000024a9) list_single_pane_cp2_g4

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane

0x48aa,	// (0x000048aa) popup_preview_text_window_t1_ParamLimits

0x48aa,	// (0x000048aa) popup_preview_text_window_t1

0x48c8,	// (0x000048c8) popup_preview_text_window_t2_ParamLimits

0x48c8,	// (0x000048c8) popup_preview_text_window_t2

0x4911,	// (0x00004911) popup_preview_text_window_t3_ParamLimits

0x4911,	// (0x00004911) popup_preview_text_window_t3

0x4956,	// (0x00004956) popup_preview_text_window_t4_ParamLimits

0x4956,	// (0x00004956) popup_preview_text_window_t4

0x0004,

0xac34,	// (0x0000ac34) popup_preview_text_window_t_ParamLimits

0xac34,	// (0x0000ac34) popup_preview_text_window_t

0x49d4,	// (0x000049d4) scroll_pane_cp11

0x3626,	// (0x00003626) bg_popup_preview_window_pane_g1

0x486a,	// (0x0000486a) bg_popup_preview_window_pane_g2

0x4872,	// (0x00004872) bg_popup_preview_window_pane_g3

0x487a,	// (0x0000487a) bg_popup_preview_window_pane_g4

0x4882,	// (0x00004882) bg_popup_preview_window_pane_g5

0x488a,	// (0x0000488a) bg_popup_preview_window_pane_g6

0x4892,	// (0x00004892) bg_popup_preview_window_pane_g7

0x489a,	// (0x0000489a) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc44e,	// (0x0000c44e) popup_midp_note_alarm_window_ParamLimits

0xc44e,	// (0x0000c44e) popup_midp_note_alarm_window

0x131f,	// (0x0000131f) data_form_pane_ParamLimits

0xbafe,	// (0x0000bafe) form_field_data_pane_g1

0xbb08,	// (0x0000bb08) form_field_data_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_ParamLimits

0x135d,	// (0x0000135d) data_form_wide_pane_ParamLimits

0x1369,	// (0x00001369) form_field_data_wide_pane_g1

0x1395,	// (0x00001395) form_field_data_wide_pane_t1_ParamLimits

0x0b54,	// (0x00000b54) input_focus_pane_cp6_ParamLimits

0xbc6a,	// (0x0000bc6a) input_popup_find_pane_g1_ParamLimits

0xbc6a,	// (0x0000bc6a) input_popup_find_pane_g1

0x1971,	// (0x00001971) aid_navi_side_left_pane

0x1986,	// (0x00001986) aid_navi_side_right_pane

0x411f,	// (0x0000411f) bg_popup_window_pane_cp30_ParamLimits

0x411f,	// (0x0000411f) bg_popup_window_pane_cp30

0x4199,	// (0x00004199) popup_midp_note_alarm_window_g1_ParamLimits

0x4199,	// (0x00004199) popup_midp_note_alarm_window_g1

0x41c9,	// (0x000041c9) popup_midp_note_alarm_window_t1_ParamLimits

0x41c9,	// (0x000041c9) popup_midp_note_alarm_window_t1

0x426a,	// (0x0000426a) popup_midp_note_alarm_window_t2_ParamLimits

0x426a,	// (0x0000426a) popup_midp_note_alarm_window_t2

0x4318,	// (0x00004318) popup_midp_note_alarm_window_t3_ParamLimits

0x4318,	// (0x00004318) popup_midp_note_alarm_window_t3

0x4340,	// (0x00004340) popup_midp_note_alarm_window_t4_ParamLimits

0x4340,	// (0x00004340) popup_midp_note_alarm_window_t4

0x4360,	// (0x00004360) popup_midp_note_alarm_window_t5_ParamLimits

0x4360,	// (0x00004360) popup_midp_note_alarm_window_t5

0x000a,

0xabd1,	// (0x0000abd1) popup_midp_note_alarm_window_t_ParamLimits

0xabd1,	// (0x0000abd1) popup_midp_note_alarm_window_t

0x440c,	// (0x0000440c) wait_bar_pane_cp1_ParamLimits

0x440c,	// (0x0000440c) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3dfd,	// (0x00003dfd) wait_border_pane_g1_copy1

0x13af,	// (0x000013af) form_field_popup_pane_g1

0xbb22,	// (0x0000bb22) form_field_popup_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_ParamLimits

0x13d1,	// (0x000013d1) list_form_pane_ParamLimits

0x13dd,	// (0x000013dd) form_field_popup_wide_pane_g1

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_ParamLimits

0x13fa,	// (0x000013fa) list_form_wide_pane_ParamLimits

0x522c,	// (0x0000522c) aid_size_cell_graphic_pane

0xbba1,	// (0x0000bba1) data_form_pane_t1_ParamLimits

0xd194,	// (0x0000d194) data_form_wide_pane_t1_ParamLimits

0xc887,	// (0x0000c887) bg_status_flat_pane

0xb423,	// (0x0000b423) title_pane_t1_ParamLimits

0x04b1,	// (0x000004b1) title_pane_t2_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t3_ParamLimits

0xee4b,	// (0x0000ee4b) title_pane_t_ParamLimits

0x1c8a,	// (0x00001c8a) level_1_signal_ParamLimits

0x1c97,	// (0x00001c97) level_2_signal_ParamLimits

0x1ca4,	// (0x00001ca4) level_3_signal_ParamLimits

0x1cb1,	// (0x00001cb1) level_4_signal_ParamLimits

0x1cbe,	// (0x00001cbe) level_5_signal_ParamLimits

0x1ccb,	// (0x00001ccb) level_6_signal_ParamLimits

0x1cd8,	// (0x00001cd8) level_7_signal_ParamLimits

0x1c8a,	// (0x00001c8a) level_1_battery_ParamLimits

0x1c97,	// (0x00001c97) level_2_battery_ParamLimits

0x1ca4,	// (0x00001ca4) level_3_battery_ParamLimits

0x1cb1,	// (0x00001cb1) level_4_battery_ParamLimits

0x1cbe,	// (0x00001cbe) level_5_battery_ParamLimits

0x1ccb,	// (0x00001ccb) level_6_battery_ParamLimits

0x1cd8,	// (0x00001cd8) level_7_battery_ParamLimits

0x4024,	// (0x00004024) bg_status_flat_pane_g1

0x402c,	// (0x0000402c) bg_status_flat_pane_g2

0x4034,	// (0x00004034) bg_status_flat_pane_g3

0x403c,	// (0x0000403c) bg_status_flat_pane_g4

0x4044,	// (0x00004044) bg_status_flat_pane_g5

0x404c,	// (0x0000404c) bg_status_flat_pane_g6

0x4054,	// (0x00004054) bg_status_flat_pane_g7

0xb4b7,	// (0x0000b4b7) tabs_3_active_pane_t1_ParamLimits

0xb4b7,	// (0x0000b4b7) tabs_3_passive_pane_t1_ParamLimits

0xb4d1,	// (0x0000b4d1) tabs_4_active_pane_t1_ParamLimits

0xb4d1,	// (0x0000b4d1) tabs_4_1_passive_pane_t1_ParamLimits

0xbc80,	// (0x0000bc80) tabs_2_active_pane_t1_ParamLimits

0xbc80,	// (0x0000bc80) tabs_2_passive_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_ParamLimits

0xbc92,	// (0x0000bc92) tabs_2_long_active_pane_t1_ParamLimits

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp4_ParamLimits

0x36e3,	// (0x000036e3) list_single_midp_graphic_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_ParamLimits

0xbca5,	// (0x0000bca5) tabs_3_long_active_pane_t1_ParamLimits

0x2afc,	// (0x00002afc) bg_passive_tab_pane_cp5_ParamLimits

0x36e3,	// (0x000036e3) list_single_midp_graphic_pane_t1

0xc887,	// (0x0000c887) bg_status_flat_pane_ParamLimits

0x3225,	// (0x00003225) indicator_pane_cp2_ParamLimits

0x3225,	// (0x00003225) indicator_pane_cp2

0xc9fe,	// (0x0000c9fe) navi_pane_srt_ParamLimits

0xc9fe,	// (0x0000c9fe) navi_pane_srt

0x336d,	// (0x0000336d) popup_clock_digital_analogue_window_cp1

0x066d,	// (0x0000066d) indicator_pane_t1

0x257a,	// (0x0000257a) copy_highlight_pane

0x257a,	// (0x0000257a) cursor_graphics_pane

0x257a,	// (0x0000257a) graphic_within_text_pane

0x257a,	// (0x0000257a) link_highlight_pane

0x4997,	// (0x00004997) popup_preview_text_window_t5_ParamLimits

0x4997,	// (0x00004997) popup_preview_text_window_t5

0x26aa,	// (0x000026aa) cursor_digital_pane

0x26aa,	// (0x000026aa) cursor_primary_pane

0x26bb,	// (0x000026bb) cursor_primary_small_pane

0x26c3,	// (0x000026c3) cursor_secondary_pane

0x26cb,	// (0x000026cb) cursor_title_pane

0x26aa,	// (0x000026aa) link_highlight_digital_pane

0x26b2,	// (0x000026b2) link_highlight_primary_pane

0x26bb,	// (0x000026bb) link_highlight_primary_small_pane

0x26c3,	// (0x000026c3) link_highlight_secondary_pane

0x26cb,	// (0x000026cb) link_highlight_title_pane

0x26aa,	// (0x000026aa) copy_highlight_digital_pane

0x26aa,	// (0x000026aa) copy_highlight_primary_pane

0x26bb,	// (0x000026bb) copy_highlight_primary_small_pane

0x26c3,	// (0x000026c3) copy_highlight_secondary_pane

0x26cb,	// (0x000026cb) copy_highlight_title_pane

0x26c3,	// (0x000026c3) graphic_text_digital_pane

0x40c2,	// (0x000040c2) graphic_text_primary_pane

0x40cb,	// (0x000040cb) graphic_text_primary_small_pane

0x26bb,	// (0x000026bb) graphic_text_secondary_pane

0x26aa,	// (0x000026aa) graphic_text_title_pane

0xbf7f,	// (0x0000bf7f) cursor_primary_pane_g1

0x40b4,	// (0x000040b4) cursor_text_primary_t1

0xcd24,	// (0x0000cd24) cursor_primary_small_pane_g1

0x40a6,	// (0x000040a6) cursor_text_primary_small_t1

0xcd1a,	// (0x0000cd1a) cursor_primary_small_pane_g1_copy1

0x408e,	// (0x0000408e) cursor_text_primary_small_t1_copy1

0x406c,	// (0x0000406c) cursor_text_title_t1

0xcd10,	// (0x0000cd10) cursor_title_pane_g1

0xbf7f,	// (0x0000bf7f) cursor_digital_pane_g1

0x26dd,	// (0x000026dd) cursor_text_digital_t1

0x400d,	// (0x0000400d) link_highlight_primary_pane_g1

0x4015,	// (0x00004015) link_highlight_primary_pane_t1

0x26eb,	// (0x000026eb) link_highlight_primary_small_pane_g1

0x26f3,	// (0x000026f3) link_highlight_primary_small_pane_t1

0x26eb,	// (0x000026eb) link_highlight_secondary_pane_g1

0x2702,	// (0x00002702) link_highlight_secondary_pane_t1

0x3f81,	// (0x00003f81) link_highlight_title_pane_g1

0x3f89,	// (0x00003f89) link_highlight_title_pane_t1

0x3f6a,	// (0x00003f6a) link_highlight_digital_pane_g1

0x3f72,	// (0x00003f72) link_highlight_digital_pane_t1

0x3e42,	// (0x00003e42) copy_highlight_primary_pane_g1

0x3e4a,	// (0x00003e4a) copy_highlight_primary_pane_t1

0x3e1c,	// (0x00003e1c) copy_highlight_primary_small_pane_g1

0x3e33,	// (0x00003e33) copy_highlight_primary_small_pane_t1

0x2711,	// (0x00002711) copy_highlight_secondary_pane_g1

0x2719,	// (0x00002719) copy_highlight_secondary_pane_t1

0x3e1c,	// (0x00003e1c) copy_highlight_title_pane_g1

0x3e24,	// (0x00003e24) copy_highlight_title_pane_t1

0x3e42,	// (0x00003e42) copy_highlight_digital_pane_g1

0x54b2,	// (0x000054b2) copy_highlight_digital_pane_t1

0x5406,	// (0x00005406) graphic_text_primary_pane_g1

0x5496,	// (0x00005496) graphic_text_primary_pane_t1

0x54a4,	// (0x000054a4) graphic_text_primary_pane_t2

0x0001,

0xad00,	// (0x0000ad00) graphic_text_primary_pane_t

0x5472,	// (0x00005472) graphic_text_primary_small_pane_g1

0x547a,	// (0x0000547a) graphic_text_primary_small_pane_t1

0x5488,	// (0x00005488) graphic_text_primary_small_pane_t2

0x0001,

0xacfb,	// (0x0000acfb) graphic_text_primary_small_pane_t

0x544e,	// (0x0000544e) graphic_text_secondary_pane_g1

0x5456,	// (0x00005456) graphic_text_secondary_pane_t1

0x5464,	// (0x00005464) graphic_text_secondary_pane_t2

0x0001,

0xacf6,	// (0x0000acf6) graphic_text_secondary_pane_t

0x542a,	// (0x0000542a) graphic_text_title_pane_g1

0x5432,	// (0x00005432) graphic_text_title_pane_t1

0x5440,	// (0x00005440) graphic_text_title_pane_t2

0x0001,

0xacf1,	// (0x0000acf1) graphic_text_title_pane_t

0x5406,	// (0x00005406) graphic_text_digital_pane_g1

0x540e,	// (0x0000540e) graphic_text_digital_pane_t1

0x541c,	// (0x0000541c) graphic_text_digital_pane_t2

0x0001,

0xacec,	// (0x0000acec) graphic_text_digital_pane_t

0x04e9,	// (0x000004e9) navi_icon_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04e9,	// (0x000004e9) navi_text_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_text_pane_srt

0x53d1,	// (0x000053d1) navi_navi_icon_text_pane_srt

0x53d9,	// (0x000053d9) navi_navi_pane_srt_g1_ParamLimits

0x53d9,	// (0x000053d9) navi_navi_pane_srt_g1

0x53eb,	// (0x000053eb) navi_navi_pane_srt_g2_ParamLimits

0x53eb,	// (0x000053eb) navi_navi_pane_srt_g2

0x0001,

0xace7,	// (0x0000ace7) navi_navi_pane_srt_g_ParamLimits

0xace7,	// (0x0000ace7) navi_navi_pane_srt_g

0x53fd,	// (0x000053fd) navi_navi_tabs_pane_srt

0x53d1,	// (0x000053d1) navi_navi_text_pane_srt

0x53d1,	// (0x000053d1) navi_navi_volume_pane_srt

0x53c2,	// (0x000053c2) navi_navi_text_pane_srt_t1

0x539d,	// (0x0000539d) navi_navi_volume_pane_srt_g1

0x53a5,	// (0x000053a5) volume_small_pane_srt_ParamLimits

0x53a5,	// (0x000053a5) volume_small_pane_srt

0x2728,	// (0x00002728) volume_small_pane_srt_g1_ParamLimits

0x2728,	// (0x00002728) volume_small_pane_srt_g1

0x2738,	// (0x00002738) volume_small_pane_srt_g2_ParamLimits

0x2738,	// (0x00002738) volume_small_pane_srt_g2

0x2749,	// (0x00002749) volume_small_pane_srt_g3_ParamLimits

0x2749,	// (0x00002749) volume_small_pane_srt_g3

0x275a,	// (0x0000275a) volume_small_pane_srt_g4_ParamLimits

0x275a,	// (0x0000275a) volume_small_pane_srt_g4

0x276b,	// (0x0000276b) volume_small_pane_srt_g5_ParamLimits

0x276b,	// (0x0000276b) volume_small_pane_srt_g5

0x277c,	// (0x0000277c) volume_small_pane_srt_g6_ParamLimits

0x277c,	// (0x0000277c) volume_small_pane_srt_g6

0x278d,	// (0x0000278d) volume_small_pane_srt_g7_ParamLimits

0x278d,	// (0x0000278d) volume_small_pane_srt_g7

0x279e,	// (0x0000279e) volume_small_pane_srt_g8_ParamLimits

0x279e,	// (0x0000279e) volume_small_pane_srt_g8

0x27af,	// (0x000027af) volume_small_pane_srt_g9_ParamLimits

0x27af,	// (0x000027af) volume_small_pane_srt_g9

0x27c0,	// (0x000027c0) volume_small_pane_srt_g10_ParamLimits

0x27c0,	// (0x000027c0) volume_small_pane_srt_g10

0x0009,

0xaa9d,	// (0x0000aa9d) volume_small_pane_srt_g_ParamLimits

0xaa9d,	// (0x0000aa9d) volume_small_pane_srt_g

0x095e,	// (0x0000095e) query_popup_data_pane_cp2

0x538b,	// (0x0000538b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x538b,	// (0x0000538b) navi_navi_icon_text_pane_srt_t1

0x40c2,	// (0x000040c2) navi_tabs_2_long_pane_srt

0x40c2,	// (0x000040c2) navi_tabs_2_pane_srt

0x40c2,	// (0x000040c2) navi_tabs_3_long_pane_srt

0x40c2,	// (0x000040c2) navi_tabs_3_pane_srt

0x40c2,	// (0x000040c2) navi_tabs_4_pane_srt

0x5363,	// (0x00005363) tabs_2_active_pane_srt_ParamLimits

0x5363,	// (0x00005363) tabs_2_active_pane_srt

0x5373,	// (0x00005373) tabs_2_passive_pane_srt_ParamLimits

0x5373,	// (0x00005373) tabs_2_passive_pane_srt

0x37b6,	// (0x000037b6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37b6,	// (0x000037b6) bg_passive_tab_pane_cp1_srt

0x5337,	// (0x00005337) bg_passive_tab_pane_g1_cp1_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp1_srt

0x5340,	// (0x00005340) bg_passive_tab_pane_g3_cp1_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt

0x5349,	// (0x00005349) tabs_2_active_pane_srt_g1

0xd2cc,	// (0x0000d2cc) tabs_2_active_pane_srt_t1_ParamLimits

0xd2cc,	// (0x0000d2cc) tabs_2_active_pane_srt_t1

0x5337,	// (0x00005337) bg_active_tab_pane_g1_cp1_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp1_srt

0x5340,	// (0x00005340) bg_active_tab_pane_g3_cp1_srt

0x5304,	// (0x00005304) tabs_3_active_pane_srt_ParamLimits

0x5304,	// (0x00005304) tabs_3_active_pane_srt

0x5315,	// (0x00005315) tabs_3_passive_pane_cp_srt_ParamLimits

0x5315,	// (0x00005315) tabs_3_passive_pane_cp_srt

0x5326,	// (0x00005326) tabs_3_passive_pane_srt_ParamLimits

0x5326,	// (0x00005326) tabs_3_passive_pane_srt

0x37b6,	// (0x000037b6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37b6,	// (0x000037b6) bg_passive_tab_pane_cp2_srt

0x27d1,	// (0x000027d1) bg_passive_tab_pane_g1_cp2_srt

0x2081,	// (0x00002081) bg_passive_tab_pane_g2_cp2_srt

0x27da,	// (0x000027da) bg_passive_tab_pane_g3_cp2_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt

0x52ea,	// (0x000052ea) tabs_3_active_pane_srt_g1

0xd2b6,	// (0x0000d2b6) tabs_3_active_pane_srt_t1_ParamLimits

0xd2b6,	// (0x0000d2b6) tabs_3_active_pane_srt_t1

0x27d1,	// (0x000027d1) bg_active_tab_pane_g1_cp2_srt

0x2081,	// (0x00002081) bg_active_tab_pane_g2_cp2_srt

0x27da,	// (0x000027da) bg_active_tab_pane_g3_cp2_srt

0x52a2,	// (0x000052a2) tabs_4_active_pane_srt_ParamLimits

0x52a2,	// (0x000052a2) tabs_4_active_pane_srt

0x52b4,	// (0x000052b4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52b4,	// (0x000052b4) tabs_4_passive_pane_cp2_srt

0x2a82,	// (0x00002a82) aid_size_cell_toolbar

0x4e42,	// (0x00004e42) main_idle_act_pane_ParamLimits

0x2c9b,	// (0x00002c9b) popup_large_graphic_colour_window_ParamLimits

0xc752,	// (0x0000c752) popup_toolbar_window_ParamLimits

0xc752,	// (0x0000c752) popup_toolbar_window

0x5044,	// (0x00005044) list_single_graphic_2heading_pane_ParamLimits

0x5044,	// (0x00005044) list_single_graphic_2heading_pane

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane

0x1a0f,	// (0x00001a0f) aid_size_cell_apps_grid_prt_pane

0x2afc,	// (0x00002afc) bg_wml_button_pane_cp1_ParamLimits

0x2afc,	// (0x00002afc) bg_wml_button_pane_cp1

0xcca4,	// (0x0000cca4) form_midp_field_text_pane_t1_ParamLimits

0x37b6,	// (0x000037b6) input_focus_pane_cp050_ParamLimits

0x3ab2,	// (0x00003ab2) list_midp_form_text_pane_ParamLimits

0x3a50,	// (0x00003a50) input_focus_pane_cp051_ParamLimits

0x3a64,	// (0x00003a64) list_midp_choice_pane_ParamLimits

0xcc39,	// (0x0000cc39) list_single_2graphic_pane_cp3_ParamLimits

0xcc39,	// (0x0000cc39) list_single_2graphic_pane_cp3

0xcc4f,	// (0x0000cc4f) list_single_midp_graphic_pane_ParamLimits

0xcc4f,	// (0x0000cc4f) list_single_midp_graphic_pane

0x34ca,	// (0x000034ca) list_single_graphic_2heading_pane_g1_ParamLimits

0x34ca,	// (0x000034ca) list_single_graphic_2heading_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5

0x0002,

0xaaf0,	// (0x0000aaf0) list_single_graphic_2heading_pane_g_ParamLimits

0xaaf0,	// (0x0000aaf0) list_single_graphic_2heading_pane_g

0x34d6,	// (0x000034d6) list_single_graphic_2heading_pane_t1_ParamLimits

0x34d6,	// (0x000034d6) list_single_graphic_2heading_pane_t1

0x34ea,	// (0x000034ea) list_single_graphic_2heading_pane_t2_ParamLimits

0x34ea,	// (0x000034ea) list_single_graphic_2heading_pane_t2

0x3506,	// (0x00003506) list_single_graphic_2heading_pane_t3_ParamLimits

0x3506,	// (0x00003506) list_single_graphic_2heading_pane_t3

0x0002,

0xaaf7,	// (0x0000aaf7) list_single_graphic_2heading_pane_t_ParamLimits

0xaaf7,	// (0x0000aaf7) list_single_graphic_2heading_pane_t

0x351e,	// (0x0000351e) bg_popup_sub_pane_cp2

0x3548,	// (0x00003548) grid_toobar_pane

0x3584,	// (0x00003584) cell_toolbar_pane_ParamLimits

0x3584,	// (0x00003584) cell_toolbar_pane

0x35ca,	// (0x000035ca) cell_toolbar_pane_g1_ParamLimits

0x35ca,	// (0x000035ca) cell_toolbar_pane_g1

0x35de,	// (0x000035de) cell_toolbar_pane_g2_ParamLimits

0x35de,	// (0x000035de) cell_toolbar_pane_g2

0x0001,

0xaafe,	// (0x0000aafe) cell_toolbar_pane_g_ParamLimits

0xaafe,	// (0x0000aafe) cell_toolbar_pane_g

0x3600,	// (0x00003600) grid_highlight_pane_cp2_ParamLimits

0x3600,	// (0x00003600) grid_highlight_pane_cp2

0x361a,	// (0x0000361a) toolbar_button_pane

0x3626,	// (0x00003626) toolbar_button_pane_g1

0x362e,	// (0x0000362e) toolbar_button_pane_g2

0x3636,	// (0x00003636) toolbar_button_pane_g3

0x363e,	// (0x0000363e) toolbar_button_pane_g4

0x3646,	// (0x00003646) toolbar_button_pane_g5

0x364e,	// (0x0000364e) toolbar_button_pane_g6

0x3656,	// (0x00003656) toolbar_button_pane_g7

0x365e,	// (0x0000365e) toolbar_button_pane_g8

0x3666,	// (0x00003666) toolbar_button_pane_g9

0x0009,

0xab03,	// (0x0000ab03) toolbar_button_pane_g

0x3676,	// (0x00003676) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3676,	// (0x00003676) list_single_2graphic_pane_g1_cp3

0xcb9b,	// (0x0000cb9b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcb9b,	// (0x0000cb9b) list_single_2graphic_pane_g2_cp3

0x23a6,	// (0x000023a6) list_single_2graphic_pane_g3_cp3

0x3693,	// (0x00003693) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3693,	// (0x00003693) list_single_2graphic_pane_g4_cp3

0x369f,	// (0x0000369f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x369f,	// (0x0000369f) list_single_2graphic_pane_t1_cp3

0x239a,	// (0x0000239a) list_single_midp_graphic_pane_g2_ParamLimits

0x239a,	// (0x0000239a) list_single_midp_graphic_pane_g2

0x2a8a,	// (0x00002a8a) aid_zoom_text_primary

0x2a92,	// (0x00002a92) aid_zoom_text_secondary

0x288e,	// (0x0000288e) status_small_pane_g7_ParamLimits

0x288e,	// (0x0000288e) status_small_pane_g7

0x28b1,	// (0x000028b1) status_small_pane_t1_ParamLimits

0xb3ff,	// (0x0000b3ff) title_pane_g2

0x0003,

0xee42,	// (0x0000ee42) title_pane_g

0xb68a,	// (0x0000b68a) aid_size_cell_colour_1_pane_ParamLimits

0xb68a,	// (0x0000b68a) aid_size_cell_colour_1_pane

0xb69e,	// (0x0000b69e) aid_size_cell_colour_2_pane_ParamLimits

0xb69e,	// (0x0000b69e) aid_size_cell_colour_2_pane

0xb6b2,	// (0x0000b6b2) aid_size_cell_colour_3_pane_ParamLimits

0xb6b2,	// (0x0000b6b2) aid_size_cell_colour_3_pane

0xb6c6,	// (0x0000b6c6) aid_size_cell_colour_4_pane_ParamLimits

0xb6c6,	// (0x0000b6c6) aid_size_cell_colour_4_pane

0x1878,	// (0x00001878) title_pane_stacon_g1_ParamLimits

0x1878,	// (0x00001878) title_pane_stacon_g1

0x3ea1,	// (0x00003ea1) popup_note_wait_window_g3_ParamLimits

0x3ea1,	// (0x00003ea1) popup_note_wait_window_g3

0x3f17,	// (0x00003f17) popup_note_wait_window_t5_ParamLimits

0x3f17,	// (0x00003f17) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc17a,	// (0x0000c17a) popup_feb_china_hwr_fs_window_ParamLimits

0xc17a,	// (0x0000c17a) popup_feb_china_hwr_fs_window

0xcbac,	// (0x0000cbac) aid_size_cell_hwr_fs_ParamLimits

0xcbac,	// (0x0000cbac) aid_size_cell_hwr_fs

0x37b6,	// (0x000037b6) bg_popup_sub_pane_cp3_ParamLimits

0x37b6,	// (0x000037b6) bg_popup_sub_pane_cp3

0xcbc1,	// (0x0000cbc1) grid_hwr_fs_pane_ParamLimits

0xcbc1,	// (0x0000cbc1) grid_hwr_fs_pane

0x37da,	// (0x000037da) linegrid_hwr_fs_pane_ParamLimits

0x37da,	// (0x000037da) linegrid_hwr_fs_pane

0xcbd9,	// (0x0000cbd9) cell_hwr_fs_pane_ParamLimits

0xcbd9,	// (0x0000cbd9) cell_hwr_fs_pane

0x380c,	// (0x0000380c) linegrid_hwr_fs_pane_g1_ParamLimits

0x380c,	// (0x0000380c) linegrid_hwr_fs_pane_g1

0xcbff,	// (0x0000cbff) linegrid_hwr_fs_pane_g2_ParamLimits

0xcbff,	// (0x0000cbff) linegrid_hwr_fs_pane_g2

0x382a,	// (0x0000382a) linegrid_hwr_fs_pane_g3_ParamLimits

0x382a,	// (0x0000382a) linegrid_hwr_fs_pane_g3

0x3836,	// (0x00003836) linegrid_hwr_fs_pane_g4_ParamLimits

0x3836,	// (0x00003836) linegrid_hwr_fs_pane_g4

0x3850,	// (0x00003850) linegrid_hwr_fs_pane_g5_ParamLimits

0x3850,	// (0x00003850) linegrid_hwr_fs_pane_g5

0x0004,

0xef5d,	// (0x0000ef5d) linegrid_hwr_fs_pane_g_ParamLimits

0xef5d,	// (0x0000ef5d) linegrid_hwr_fs_pane_g

0x3866,	// (0x00003866) cell_hwr_fs_pane_g1_ParamLimits

0x3866,	// (0x00003866) cell_hwr_fs_pane_g1

0x3403,	// (0x00003403) cell_hwr_fs_pane_g2_ParamLimits

0x3403,	// (0x00003403) cell_hwr_fs_pane_g2

0xcc11,	// (0x0000cc11) cell_hwr_fs_pane_g3_ParamLimits

0xcc11,	// (0x0000cc11) cell_hwr_fs_pane_g3

0xcc1e,	// (0x0000cc1e) cell_hwr_fs_pane_g4_ParamLimits

0xcc1e,	// (0x0000cc1e) cell_hwr_fs_pane_g4

0x0003,

0xef68,	// (0x0000ef68) cell_hwr_fs_pane_g_ParamLimits

0xef68,	// (0x0000ef68) cell_hwr_fs_pane_g

0xcc2b,	// (0x0000cc2b) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1629,	// (0x00001629) aid_inside_area_popup_secondary

0xce80,	// (0x0000ce80) aid_inside_area_window_primary_ParamLimits

0xce80,	// (0x0000ce80) aid_inside_area_window_primary

0x54c1,	// (0x000054c1) ai2_news_ticker_pane

0x54c9,	// (0x000054c9) aid_size_cell_ai1_link_ParamLimits

0x54c9,	// (0x000054c9) aid_size_cell_ai1_link

0x54e3,	// (0x000054e3) popup_ai2_data_window_ParamLimits

0x54e3,	// (0x000054e3) popup_ai2_data_window

0x54f7,	// (0x000054f7) popup_ai2_link_window_ParamLimits

0x54f7,	// (0x000054f7) popup_ai2_link_window

0x37b6,	// (0x000037b6) bg_popup_sub_pane_cp4_ParamLimits

0x37b6,	// (0x000037b6) bg_popup_sub_pane_cp4

0x550b,	// (0x0000550b) grid_ai2_link_pane_ParamLimits

0x550b,	// (0x0000550b) grid_ai2_link_pane

0x5522,	// (0x00005522) popup_ai2_link_window_g1_ParamLimits

0x5522,	// (0x00005522) popup_ai2_link_window_g1

0x552e,	// (0x0000552e) popup_ai2_link_window_g2_ParamLimits

0x552e,	// (0x0000552e) popup_ai2_link_window_g2

0x0001,

0xad05,	// (0x0000ad05) popup_ai2_link_window_g_ParamLimits

0xad05,	// (0x0000ad05) popup_ai2_link_window_g

0x553d,	// (0x0000553d) ai2_mp_button_pane

0x5545,	// (0x00005545) ai2_mp_volume_pane

0x3a50,	// (0x00003a50) bg_popup_sub_pane_cp5_ParamLimits

0x3a50,	// (0x00003a50) bg_popup_sub_pane_cp5

0x554d,	// (0x0000554d) heading_ai2_gene_pane_ParamLimits

0x554d,	// (0x0000554d) heading_ai2_gene_pane

0x5559,	// (0x00005559) list_ai2_gene_pane_ParamLimits

0x5559,	// (0x00005559) list_ai2_gene_pane

0x55a1,	// (0x000055a1) cell_ai2_link_pane_ParamLimits

0x55a1,	// (0x000055a1) cell_ai2_link_pane

0x55b7,	// (0x000055b7) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5688,	// (0x00005688) ai2_mp_volume_pane_g1

0x5690,	// (0x00005690) ai2_mp_volume_pane_g2

0x55fd,	// (0x000055fd) list_ai2_gene_pane_t1

0x5698,	// (0x00005698) ai2_mp_volume_pane_g3

0x0002,

0xad1e,	// (0x0000ad1e) ai2_mp_volume_pane_g

0x56a0,	// (0x000056a0) volume_small_pane_cp3

0x56a9,	// (0x000056a9) aid_size_cell_ai2_button

0x56b1,	// (0x000056b1) grid_ai2_button_pane

0x56ba,	// (0x000056ba) cell_ai2_button_pane_ParamLimits

0x56ba,	// (0x000056ba) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5648,	// (0x00005648) ai2_gene_pane_t1_ParamLimits

0x5648,	// (0x00005648) ai2_gene_pane_t1

0xc0f0,	// (0x0000c0f0) aid_height_parent_landscape

0xd042,	// (0x0000d042) aid_height_set_list

0x4e42,	// (0x00004e42) aid_size_parent

0x522c,	// (0x0000522c) aid_size_cell_graphic_pane_ParamLimits

0x5569,	// (0x00005569) popup_ai2_data_window_g1_ParamLimits

0x5569,	// (0x00005569) popup_ai2_data_window_g1

0x5575,	// (0x00005575) ai2_news_ticker_pane_g1

0x557d,	// (0x0000557d) ai2_news_ticker_pane_g2

0x0001,

0xad0a,	// (0x0000ad0a) ai2_news_ticker_pane_g

0x5585,	// (0x00005585) ai2_news_ticker_pane_t1

0x5593,	// (0x00005593) ai2_news_ticker_pane_t2

0x0001,

0xad0f,	// (0x0000ad0f) ai2_news_ticker_pane_t

0x55c0,	// (0x000055c0) heading_ai2_gene_pane_g1

0x55c8,	// (0x000055c8) heading_ai2_gene_pane_t1_ParamLimits

0x55c8,	// (0x000055c8) heading_ai2_gene_pane_t1

0x55dd,	// (0x000055dd) list_highlight_pane_cp6

0x55e5,	// (0x000055e5) ai2_gene_pane_ParamLimits

0x55e5,	// (0x000055e5) ai2_gene_pane

0x560b,	// (0x0000560b) list_ai2_gene_pane_t2

0x0001,

0xad14,	// (0x0000ad14) list_ai2_gene_pane_t

0x5619,	// (0x00005619) list_highlight_pane_cp8_ParamLimits

0x5619,	// (0x00005619) list_highlight_pane_cp8

0x562a,	// (0x0000562a) ai2_gene_pane_g1_ParamLimits

0x562a,	// (0x0000562a) ai2_gene_pane_g1

0x563c,	// (0x0000563c) ai2_gene_pane_g2_ParamLimits

0x563c,	// (0x0000563c) ai2_gene_pane_g2

0x0001,

0xad19,	// (0x0000ad19) ai2_gene_pane_g_ParamLimits

0xad19,	// (0x0000ad19) ai2_gene_pane_g

0x0d79,	// (0x00000d79) scroll_pane_cp12

0xc0ad,	// (0x0000c0ad) control_pane_t3_ParamLimits

0xc0ad,	// (0x0000c0ad) control_pane_t3

0x28a2,	// (0x000028a2) status_small_pane_g8_ParamLimits

0x28a2,	// (0x000028a2) status_small_pane_g8

0xc20d,	// (0x0000c20d) popup_find_window_ParamLimits

0xc488,	// (0x0000c488) popup_note_image_window_ParamLimits

0x34ca,	// (0x000034ca) list_double2_graphic_pane_vc_g1_ParamLimits

0x34ca,	// (0x000034ca) list_double2_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3

0x0002,

0xaaf0,	// (0x0000aaf0) list_double2_graphic_pane_vc_g_ParamLimits

0xaaf0,	// (0x0000aaf0) list_double2_graphic_pane_vc_g

0x35b4,	// (0x000035b4) list_double2_graphic_pane_vc_t1_ParamLimits

0x35b4,	// (0x000035b4) list_double2_graphic_pane_vc_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2

0x0001,

0xab18,	// (0x0000ab18) list_single_heading_pane_vc_g_ParamLimits

0xab18,	// (0x0000ab18) list_single_heading_pane_vc_g

0x36b9,	// (0x000036b9) list_single_heading_pane_vc_t1_ParamLimits

0x36b9,	// (0x000036b9) list_single_heading_pane_vc_t1

0x36cf,	// (0x000036cf) list_single_heading_pane_vc_t2_ParamLimits

0x36cf,	// (0x000036cf) list_single_heading_pane_vc_t2

0x0001,

0xab1d,	// (0x0000ab1d) list_single_heading_pane_vc_t_ParamLimits

0xab1d,	// (0x0000ab1d) list_single_heading_pane_vc_t

0x36f9,	// (0x000036f9) list_setting_number_pane_vc_g1_ParamLimits

0x36f9,	// (0x000036f9) list_setting_number_pane_vc_g1

0x3705,	// (0x00003705) list_setting_number_pane_vc_g2_ParamLimits

0x3705,	// (0x00003705) list_setting_number_pane_vc_g2

0x0001,

0xab22,	// (0x0000ab22) list_setting_number_pane_vc_g_ParamLimits

0xab22,	// (0x0000ab22) list_setting_number_pane_vc_g

0x3711,	// (0x00003711) list_setting_number_pane_vc_t1_ParamLimits

0x3711,	// (0x00003711) list_setting_number_pane_vc_t1

0x3725,	// (0x00003725) list_setting_number_pane_vc_t2_ParamLimits

0x3725,	// (0x00003725) list_setting_number_pane_vc_t2

0x3741,	// (0x00003741) list_setting_number_pane_vc_t3_ParamLimits

0x3741,	// (0x00003741) list_setting_number_pane_vc_t3

0x0002,

0xab27,	// (0x0000ab27) list_setting_number_pane_vc_t_ParamLimits

0xab27,	// (0x0000ab27) list_setting_number_pane_vc_t

0x3769,	// (0x00003769) set_value_pane_vc_ParamLimits

0x3769,	// (0x00003769) set_value_pane_vc

0x5044,	// (0x00005044) list_double2_graphic_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double2_graphic_pane_vc

0x5044,	// (0x00005044) list_double2_large_graphic_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double2_large_graphic_pane_vc

0x5044,	// (0x00005044) list_double2_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double2_pane_vc

0x5044,	// (0x00005044) list_double_graphic_heading_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double_graphic_heading_pane_vc

0x5044,	// (0x00005044) list_double_graphic_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double_graphic_pane_vc

0x5044,	// (0x00005044) list_double_heading_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double_heading_pane_vc

0x5044,	// (0x00005044) list_double_large_graphic_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double_large_graphic_pane_vc

0x5044,	// (0x00005044) list_double_number_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double_number_pane_vc

0x5044,	// (0x00005044) list_double_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double_pane_vc

0x5044,	// (0x00005044) list_double_time_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_double_time_pane_vc

0x5044,	// (0x00005044) list_setting_number_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_setting_number_pane_vc

0x5044,	// (0x00005044) list_setting_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_setting_pane_vc

0x5044,	// (0x00005044) list_single_graphic_heading_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_single_graphic_heading_pane_vc

0x5044,	// (0x00005044) list_single_heading_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_single_heading_pane_vc

0x5044,	// (0x00005044) list_single_number_heading_pane_vc_ParamLimits

0x5044,	// (0x00005044) list_single_number_heading_pane_vc

0x34ca,	// (0x000034ca) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x34ca,	// (0x000034ca) list_double_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaaf0,	// (0x0000aaf0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaaf0,	// (0x0000aaf0) list_double_graphic_heading_pane_vc_g

0x56ee,	// (0x000056ee) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56ee,	// (0x000056ee) list_double_graphic_heading_pane_vc_t1

0x36b9,	// (0x000036b9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36b9,	// (0x000036b9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xad25,	// (0x0000ad25) list_double_graphic_heading_pane_vc_t_ParamLimits

0xad25,	// (0x0000ad25) list_double_graphic_heading_pane_vc_t

0x36f9,	// (0x000036f9) list_setting_pane_vc_g1_ParamLimits

0x36f9,	// (0x000036f9) list_setting_pane_vc_g1

0x3705,	// (0x00003705) list_setting_pane_vc_g2_ParamLimits

0x3705,	// (0x00003705) list_setting_pane_vc_g2

0x0001,

0xab22,	// (0x0000ab22) list_setting_pane_vc_g_ParamLimits

0xab22,	// (0x0000ab22) list_setting_pane_vc_g

0x5937,	// (0x00005937) list_setting_pane_vc_t1_ParamLimits

0x5937,	// (0x00005937) list_setting_pane_vc_t1

0x594b,	// (0x0000594b) list_setting_pane_vc_t2_ParamLimits

0x594b,	// (0x0000594b) list_setting_pane_vc_t2

0x0001,

0xad68,	// (0x0000ad68) list_setting_pane_vc_t_ParamLimits

0xad68,	// (0x0000ad68) list_setting_pane_vc_t

0x3769,	// (0x00003769) set_value_pane_cp_vc_ParamLimits

0x3769,	// (0x00003769) set_value_pane_cp_vc

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2

0x0001,

0xab18,	// (0x0000ab18) list_single_number_heading_pane_vc_g_ParamLimits

0xab18,	// (0x0000ab18) list_single_number_heading_pane_vc_g

0x36b9,	// (0x000036b9) list_single_number_heading_pane_vc_t1_ParamLimits

0x36b9,	// (0x000036b9) list_single_number_heading_pane_vc_t1

0x596d,	// (0x0000596d) list_single_number_heading_pane_vc_t2_ParamLimits

0x596d,	// (0x0000596d) list_single_number_heading_pane_vc_t2

0x5981,	// (0x00005981) list_single_number_heading_pane_vc_t3_ParamLimits

0x5981,	// (0x00005981) list_single_number_heading_pane_vc_t3

0x0002,

0xad6d,	// (0x0000ad6d) list_single_number_heading_pane_vc_t_ParamLimits

0xad6d,	// (0x0000ad6d) list_single_number_heading_pane_vc_t

0x34ca,	// (0x000034ca) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34ca,	// (0x000034ca) list_single_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5

0x0002,

0xaaf0,	// (0x0000aaf0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xaaf0,	// (0x0000aaf0) list_single_graphic_heading_pane_vc_g

0x36b9,	// (0x000036b9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36b9,	// (0x000036b9) list_single_graphic_heading_pane_vc_t1

0x5993,	// (0x00005993) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5993,	// (0x00005993) list_single_graphic_heading_pane_vc_t2

0x0001,

0xad74,	// (0x0000ad74) list_single_graphic_heading_pane_vc_t_ParamLimits

0xad74,	// (0x0000ad74) list_single_graphic_heading_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2

0x0001,

0xab18,	// (0x0000ab18) list_double2_pane_vc_g_ParamLimits

0xab18,	// (0x0000ab18) list_double2_pane_vc_g

0x59a7,	// (0x000059a7) list_double2_pane_vc_t1_ParamLimits

0x59a7,	// (0x000059a7) list_double2_pane_vc_t1

0x59bd,	// (0x000059bd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59bd,	// (0x000059bd) list_double2_large_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3

0x0002,

0xad79,	// (0x0000ad79) list_double2_large_graphic_pane_vc_g_ParamLimits

0xad79,	// (0x0000ad79) list_double2_large_graphic_pane_vc_g

0x59c9,	// (0x000059c9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59c9,	// (0x000059c9) list_double2_large_graphic_pane_vc_t1

0x59df,	// (0x000059df) list_double_time_pane_vc_g1_ParamLimits

0x59df,	// (0x000059df) list_double_time_pane_vc_g1

0x59eb,	// (0x000059eb) list_double_time_pane_vc_g2_ParamLimits

0x59eb,	// (0x000059eb) list_double_time_pane_vc_g2

0x0001,

0xad80,	// (0x0000ad80) list_double_time_pane_vc_g_ParamLimits

0xad80,	// (0x0000ad80) list_double_time_pane_vc_g

0x59f7,	// (0x000059f7) list_double_time_pane_vc_t1_ParamLimits

0x59f7,	// (0x000059f7) list_double_time_pane_vc_t1

0x5a10,	// (0x00005a10) list_double_time_pane_vc_t2_ParamLimits

0x5a10,	// (0x00005a10) list_double_time_pane_vc_t2

0x5a30,	// (0x00005a30) list_double_time_pane_vc_t3_ParamLimits

0x5a30,	// (0x00005a30) list_double_time_pane_vc_t3

0x5a48,	// (0x00005a48) list_double_time_pane_vc_t4_ParamLimits

0x5a48,	// (0x00005a48) list_double_time_pane_vc_t4

0x0003,

0xad85,	// (0x0000ad85) list_double_time_pane_vc_t_ParamLimits

0xad85,	// (0x0000ad85) list_double_time_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_pane_vc_g2

0x0001,

0xab18,	// (0x0000ab18) list_double_pane_vc_g_ParamLimits

0xab18,	// (0x0000ab18) list_double_pane_vc_g

0x5a5c,	// (0x00005a5c) list_double_pane_vc_t1_ParamLimits

0x5a5c,	// (0x00005a5c) list_double_pane_vc_t1

0x5a6e,	// (0x00005a6e) list_double_pane_vc_t2_ParamLimits

0x5a6e,	// (0x00005a6e) list_double_pane_vc_t2

0x0001,

0xad8e,	// (0x0000ad8e) list_double_pane_vc_t_ParamLimits

0xad8e,	// (0x0000ad8e) list_double_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2

0x0001,

0xab18,	// (0x0000ab18) list_double_number_pane_vc_g_ParamLimits

0xab18,	// (0x0000ab18) list_double_number_pane_vc_g

0x5a86,	// (0x00005a86) list_double_number_pane_vc_t1_ParamLimits

0x5a86,	// (0x00005a86) list_double_number_pane_vc_t1

0x5a9a,	// (0x00005a9a) list_double_number_pane_vc_t2_ParamLimits

0x5a9a,	// (0x00005a9a) list_double_number_pane_vc_t2

0x5a6e,	// (0x00005a6e) list_double_number_pane_vc_t3_ParamLimits

0x5a6e,	// (0x00005a6e) list_double_number_pane_vc_t3

0x0002,

0xad93,	// (0x0000ad93) list_double_number_pane_vc_t_ParamLimits

0xad93,	// (0x0000ad93) list_double_number_pane_vc_t

0x5aac,	// (0x00005aac) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5aac,	// (0x00005aac) list_double_large_graphic_pane_vc_g1

0x5ab8,	// (0x00005ab8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ab8,	// (0x00005ab8) list_double_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3

0x5ac7,	// (0x00005ac7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ac7,	// (0x00005ac7) list_double_large_graphic_pane_vc_g4

0x0003,

0xad9a,	// (0x0000ad9a) list_double_large_graphic_pane_vc_g_ParamLimits

0xad9a,	// (0x0000ad9a) list_double_large_graphic_pane_vc_g

0x5ad3,	// (0x00005ad3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5ad3,	// (0x00005ad3) list_double_large_graphic_pane_vc_t1

0x5ae5,	// (0x00005ae5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5ae5,	// (0x00005ae5) list_double_large_graphic_pane_vc_t2

0x0001,

0xada3,	// (0x0000ada3) list_double_large_graphic_pane_vc_t_ParamLimits

0xada3,	// (0x0000ada3) list_double_large_graphic_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2

0x0001,

0xab18,	// (0x0000ab18) list_double_heading_pane_vc_g_ParamLimits

0xab18,	// (0x0000ab18) list_double_heading_pane_vc_g

0x5afe,	// (0x00005afe) list_double_heading_pane_vc_t1_ParamLimits

0x5afe,	// (0x00005afe) list_double_heading_pane_vc_t1

0x36b9,	// (0x000036b9) list_double_heading_pane_vc_t2_ParamLimits

0x36b9,	// (0x000036b9) list_double_heading_pane_vc_t2

0x0001,

0xada8,	// (0x0000ada8) list_double_heading_pane_vc_t_ParamLimits

0xada8,	// (0x0000ada8) list_double_heading_pane_vc_t

0x34ca,	// (0x000034ca) list_double_graphic_pane_vc_g1_ParamLimits

0x34ca,	// (0x000034ca) list_double_graphic_pane_vc_g1

0x5b12,	// (0x00005b12) list_double_graphic_pane_vc_g2_ParamLimits

0x5b12,	// (0x00005b12) list_double_graphic_pane_vc_g2

0x5b21,	// (0x00005b21) list_double_graphic_pane_vc_g3_ParamLimits

0x5b21,	// (0x00005b21) list_double_graphic_pane_vc_g3

0x0002,

0xadad,	// (0x0000adad) list_double_graphic_pane_vc_g_ParamLimits

0xadad,	// (0x0000adad) list_double_graphic_pane_vc_g

0x5b2d,	// (0x00005b2d) list_double_graphic_pane_vc_t1_ParamLimits

0x5b2d,	// (0x00005b2d) list_double_graphic_pane_vc_t1

0x5a6e,	// (0x00005a6e) list_double_graphic_pane_vc_t2_ParamLimits

0x5a6e,	// (0x00005a6e) list_double_graphic_pane_vc_t2

0x0001,

0xadb4,	// (0x0000adb4) list_double_graphic_pane_vc_t_ParamLimits

0xadb4,	// (0x0000adb4) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb24d,	// (0x0000b24d) aid_size_cell_touch_ParamLimits

0xb24d,	// (0x0000b24d) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb398,	// (0x0000b398) touch_pane_ParamLimits

0xb398,	// (0x0000b398) touch_pane

0x1277,	// (0x00001277) button_value_adjust_pane_cp2

0x1277,	// (0x00001277) button_value_adjust_pane_cp4

0x1297,	// (0x00001297) form_field_data_pane_cp2

0xbabf,	// (0x0000babf) form_field_data_wide_pane_cp2

0x1ae3,	// (0x00001ae3) bg_scroll_pane_ParamLimits

0x1b02,	// (0x00001b02) scroll_handle_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane

0xd403,	// (0x0000d403) grid_wheel_folder_pane_g1_ParamLimits

0xd403,	// (0x0000d403) grid_wheel_folder_pane_g1

0x21c8,	// (0x000021c8) clock_nsta_pane_cp2_ParamLimits

0x21c8,	// (0x000021c8) clock_nsta_pane_cp2

0xbec1,	// (0x0000bec1) listscroll_midp_pane_ParamLimits

0xbed2,	// (0x0000bed2) midp_canvas_pane

0x2a70,	// (0x00002a70) nsta_clock_indic_pane

0x2ace,	// (0x00002ace) listscroll_form_pane_vc

0x2aea,	// (0x00002aea) listscroll_set_pane_vc_ParamLimits

0x2aea,	// (0x00002aea) listscroll_set_pane_vc

0xc8af,	// (0x0000c8af) clock_nsta_pane

0xc8d9,	// (0x0000c8d9) indicator_nsta_pane

0x351e,	// (0x0000351e) bg_popup_sub_pane_cp2_ParamLimits

0x3532,	// (0x00003532) find_pane_cp2_ParamLimits

0x3532,	// (0x00003532) find_pane_cp2

0x3548,	// (0x00003548) grid_toobar_pane_ParamLimits

0x3775,	// (0x00003775) list_form_gen_pane_vc_ParamLimits

0x3775,	// (0x00003775) list_form_gen_pane_vc

0x378b,	// (0x0000378b) scroll_pane_cp8_vc_ParamLimits

0x378b,	// (0x0000378b) scroll_pane_cp8_vc

0x38a4,	// (0x000038a4) data_form_wide_pane_vc_ParamLimits

0x38a4,	// (0x000038a4) data_form_wide_pane_vc

0x38b0,	// (0x000038b0) form_field_data_wide_pane_vc_g1

0x38b8,	// (0x000038b8) form_field_data_wide_pane_vc_t1_ParamLimits

0x38b8,	// (0x000038b8) form_field_data_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc

0xcce4,	// (0x0000cce4) list_midp_pane_ParamLimits

0x5296,	// (0x00005296) scroll_pane_cp16_ParamLimits

0x5296,	// (0x00005296) scroll_pane_cp16

0x3c7b,	// (0x00003c7b) button_value_adjust_pane_ParamLimits

0x3c7b,	// (0x00003c7b) button_value_adjust_pane

0xd053,	// (0x0000d053) button_value_adjust_pane_cp6_ParamLimits

0xd053,	// (0x0000d053) button_value_adjust_pane_cp6

0xd169,	// (0x0000d169) settings_code_pane_cp_ParamLimits

0xd169,	// (0x0000d169) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xaa47,	// (0x0000aa47) cell_touch_pane_g

0xd2e2,	// (0x0000d2e2) cell_touch_pane_cp_ParamLimits

0xd2e2,	// (0x0000d2e2) cell_touch_pane_cp

0xd2fe,	// (0x0000d2fe) cell_touch_pane_ParamLimits

0xd2fe,	// (0x0000d2fe) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5702,	// (0x00005702) list_set_graphic_pane_vc_g1_ParamLimits

0x5702,	// (0x00005702) list_set_graphic_pane_vc_g1

0x570e,	// (0x0000570e) list_set_graphic_pane_vc_g2_ParamLimits

0x570e,	// (0x0000570e) list_set_graphic_pane_vc_g2

0x0001,

0xad2a,	// (0x0000ad2a) list_set_graphic_pane_vc_g_ParamLimits

0xad2a,	// (0x0000ad2a) list_set_graphic_pane_vc_g

0x571a,	// (0x0000571a) text_primary_small_cp13_vc_ParamLimits

0x571a,	// (0x0000571a) text_primary_small_cp13_vc

0x5732,	// (0x00005732) list_set_graphic_pane_vc_ParamLimits

0x5732,	// (0x00005732) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5746,	// (0x00005746) setting_code_pane_vc_t1

0x5754,	// (0x00005754) set_text_pane_vc_t1_ParamLimits

0x5754,	// (0x00005754) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5773,	// (0x00005773) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x577d,	// (0x0000577d) setting_slider_graphic_pane_vc_g1

0x5785,	// (0x00005785) setting_slider_graphic_pane_vc_t1

0x5793,	// (0x00005793) setting_slider_graphic_pane_vc_t2

0x0001,

0xad2f,	// (0x0000ad2f) setting_slider_graphic_pane_vc_t

0x57a1,	// (0x000057a1) slider_set_pane_cp_vc

0x57a9,	// (0x000057a9) slider_set_pane_vc_g1

0x57b2,	// (0x000057b2) slider_set_pane_vc_g2

0x0006,

0xad34,	// (0x0000ad34) slider_set_pane_vc_g

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy1

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy1

0x57de,	// (0x000057de) set_opt_bg_pane_g3_copy1

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy1

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy1

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy1

0x57e6,	// (0x000057e6) set_opt_bg_pane_g7_copy1

0x57f0,	// (0x000057f0) set_opt_bg_pane_g8_copy1

0x57f8,	// (0x000057f8) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5800,	// (0x00005800) setting_slider_pane_vc_t1

0x5785,	// (0x00005785) setting_slider_pane_vc_t2

0x5793,	// (0x00005793) setting_slider_pane_vc_t3

0x0002,

0xad43,	// (0x0000ad43) setting_slider_pane_vc_t

0x57a1,	// (0x000057a1) slider_set_pane_vc

0x44b1,	// (0x000044b1) volume_set_pane_vc_g1

0x580f,	// (0x0000580f) volume_set_pane_vc_g2

0x5818,	// (0x00005818) volume_set_pane_vc_g3

0x5821,	// (0x00005821) volume_set_pane_vc_g4

0x582a,	// (0x0000582a) volume_set_pane_vc_g5

0x5833,	// (0x00005833) volume_set_pane_vc_g6

0x583c,	// (0x0000583c) volume_set_pane_vc_g7

0x5845,	// (0x00005845) volume_set_pane_vc_g8

0x584e,	// (0x0000584e) volume_set_pane_vc_g9

0x5857,	// (0x00005857) volume_set_pane_vc_g10

0x0009,

0xad4a,	// (0x0000ad4a) volume_set_pane_vc_g

0x5860,	// (0x00005860) volume_set_pane_vc

0x5868,	// (0x00005868) button_value_adjust_pane_cp1_vc

0x5872,	// (0x00005872) list_highlight_pane_cp2_vc

0x587b,	// (0x0000587b) list_set_pane_vc_ParamLimits

0x587b,	// (0x0000587b) list_set_pane_vc

0x58cd,	// (0x000058cd) main_pane_set_vc_t1_ParamLimits

0x58cd,	// (0x000058cd) main_pane_set_vc_t1

0x58e2,	// (0x000058e2) main_pane_set_vc_t2_ParamLimits

0x58e2,	// (0x000058e2) main_pane_set_vc_t2

0x58f4,	// (0x000058f4) main_pane_set_vc_t3_ParamLimits

0x58f4,	// (0x000058f4) main_pane_set_vc_t3

0x5906,	// (0x00005906) main_pane_set_vc_t4_ParamLimits

0x5906,	// (0x00005906) main_pane_set_vc_t4

0x0003,

0xad5f,	// (0x0000ad5f) main_pane_set_vc_t_ParamLimits

0xad5f,	// (0x0000ad5f) main_pane_set_vc_t

0x5918,	// (0x00005918) setting_code_pane_vc_ParamLimits

0x5918,	// (0x00005918) setting_code_pane_vc

0x5927,	// (0x00005927) setting_slider_graphic_pane_vc

0x5927,	// (0x00005927) setting_slider_pane_vc

0x5927,	// (0x00005927) setting_text_pane_vc

0x5927,	// (0x00005927) setting_volume_pane_vc

0x592f,	// (0x0000592f) scroll_pane_cp121_vc

0x1265,	// (0x00001265) set_content_pane_vc

0x5b3f,	// (0x00005b3f) button_value_adjust_pane_g1

0x5b48,	// (0x00005b48) button_value_adjust_pane_g2

0x0001,

0xadb9,	// (0x0000adb9) button_value_adjust_pane_g

0x5b51,	// (0x00005b51) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b51,	// (0x00005b51) form_field_slider_wide_pane_vc_t1

0x5b65,	// (0x00005b65) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b65,	// (0x00005b65) form_field_slider_wide_pane_vc_t2

0x0001,

0xadbe,	// (0x0000adbe) form_field_slider_wide_pane_vc_t_ParamLimits

0xadbe,	// (0x0000adbe) form_field_slider_wide_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc

0x5b77,	// (0x00005b77) slider_cont_pane_cp1_vc_ParamLimits

0x5b77,	// (0x00005b77) slider_cont_pane_cp1_vc

0x57a9,	// (0x000057a9) slider_form_pane_g1_cp2

0x57b2,	// (0x000057b2) slider_form_pane_g2_cp2

0x5b90,	// (0x00005b90) form_field_slider_pane_vc_t3

0x5b9e,	// (0x00005b9e) form_field_slider_pane_vc_t4

0x5bac,	// (0x00005bac) slider_form_pane_vc_ParamLimits

0x5bac,	// (0x00005bac) slider_form_pane_vc

0x5bb9,	// (0x00005bb9) form_field_slider_pane_vc_t1_ParamLimits

0x5bb9,	// (0x00005bb9) form_field_slider_pane_vc_t1

0x5b65,	// (0x00005b65) form_field_slider_pane_vc_t2_ParamLimits

0x5b65,	// (0x00005b65) form_field_slider_pane_vc_t2

0x0001,

0xadce,	// (0x0000adce) form_field_slider_pane_vc_t_ParamLimits

0xadce,	// (0x0000adce) form_field_slider_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc

0x5bd5,	// (0x00005bd5) slider_cont_pane_vc_ParamLimits

0x5bd5,	// (0x00005bd5) slider_cont_pane_vc

0x5be7,	// (0x00005be7) list_form_graphic_pane_cp_vc_ParamLimits

0x5be7,	// (0x00005be7) list_form_graphic_pane_cp_vc

0x38b0,	// (0x000038b0) form_field_popup_wide_pane_vc_g1

0x5bfc,	// (0x00005bfc) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5bfc,	// (0x00005bfc) form_field_popup_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc

0x5c13,	// (0x00005c13) list_form_wide_pane_vc_ParamLimits

0x5c13,	// (0x00005c13) list_form_wide_pane_vc

0x5c1f,	// (0x00005c1f) list_form_graphic_pane_vc_g1

0x5c27,	// (0x00005c27) list_form_graphic_pane_vc_t1_ParamLimits

0x5c27,	// (0x00005c27) list_form_graphic_pane_vc_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc

0x5c43,	// (0x00005c43) list_form_graphic_pane_vc_ParamLimits

0x5c43,	// (0x00005c43) list_form_graphic_pane_vc

0x38b0,	// (0x000038b0) form_field_popup_pane_vc_g1

0x5c59,	// (0x00005c59) form_field_popup_pane_vc_t1_ParamLimits

0x5c59,	// (0x00005c59) form_field_popup_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc

0x5c70,	// (0x00005c70) list_form_pane_vc_ParamLimits

0x5c70,	// (0x00005c70) list_form_pane_vc

0x5c7c,	// (0x00005c7c) data_form_pane_vc_t1_ParamLimits

0x5c7c,	// (0x00005c7c) data_form_pane_vc_t1

0x148b,	// (0x0000148b) input_focus_pane_vc_g1

0x1493,	// (0x00001493) input_focus_pane_vc_g2

0x149b,	// (0x0000149b) input_focus_pane_vc_g3

0x14a3,	// (0x000014a3) input_focus_pane_vc_g4

0x14ab,	// (0x000014ab) input_focus_pane_vc_g5

0x14b3,	// (0x000014b3) input_focus_pane_vc_g6

0x14bb,	// (0x000014bb) input_focus_pane_vc_g7

0x14c3,	// (0x000014c3) input_focus_pane_vc_g8

0x14cb,	// (0x000014cb) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xa9d0,	// (0x0000a9d0) input_focus_pane_vc_g

0x38a4,	// (0x000038a4) data_form_pane_vc_ParamLimits

0x38a4,	// (0x000038a4) data_form_pane_vc

0x38b0,	// (0x000038b0) form_field_data_pane_vc_g1

0x5c97,	// (0x00005c97) form_field_data_pane_vc_t1_ParamLimits

0x5c97,	// (0x00005c97) form_field_data_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_vc

0x5cb1,	// (0x00005cb1) button_value_adjust_pane_cp3_vc

0x5cb9,	// (0x00005cb9) button_value_adjust_pane_cp5_vc

0x5cc1,	// (0x00005cc1) form_field_data_pane_vc_ParamLimits

0x5cc1,	// (0x00005cc1) form_field_data_pane_vc

0x5cd8,	// (0x00005cd8) form_field_data_pane_vc_cp2

0x5ce0,	// (0x00005ce0) form_field_data_wide_pane_vc_ParamLimits

0x5ce0,	// (0x00005ce0) form_field_data_wide_pane_vc

0x5cf6,	// (0x00005cf6) form_field_data_wide_pane_vc_cp2

0x5cfe,	// (0x00005cfe) form_field_popup_pane_vc_ParamLimits

0x5cfe,	// (0x00005cfe) form_field_popup_pane_vc

0x5d15,	// (0x00005d15) form_field_popup_wide_pane_vc_ParamLimits

0x5d15,	// (0x00005d15) form_field_popup_wide_pane_vc

0x5d2b,	// (0x00005d2b) form_field_slider_pane_vc_ParamLimits

0x5d2b,	// (0x00005d2b) form_field_slider_pane_vc

0x5d3e,	// (0x00005d3e) form_field_slider_wide_pane_vc_ParamLimits

0x5d3e,	// (0x00005d3e) form_field_slider_wide_pane_vc

0xd31c,	// (0x0000d31c) grid_touch_1_pane_ParamLimits

0xd31c,	// (0x0000d31c) grid_touch_1_pane

0xd330,	// (0x0000d330) grid_touch_2_pane_ParamLimits

0xd330,	// (0x0000d330) grid_touch_2_pane

0x5e13,	// (0x00005e13) touch_pane_g1_ParamLimits

0x5e13,	// (0x00005e13) touch_pane_g1

0x5d75,	// (0x00005d75) cell_app_pane_cp_wide_ParamLimits

0x5d75,	// (0x00005d75) cell_app_pane_cp_wide

0x5d86,	// (0x00005d86) grid_popup_fast_wide_pane_ParamLimits

0x5d86,	// (0x00005d86) grid_popup_fast_wide_pane

0x5d9a,	// (0x00005d9a) scroll_pane_cp19_ParamLimits

0x5d9a,	// (0x00005d9a) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5dae,	// (0x00005dae) listscroll_popup_fast_wide_pane

0x1694,	// (0x00001694) grid_indicator_nsta_pane

0x5db6,	// (0x00005db6) clock_nsta_pane_g1

0x5dbf,	// (0x00005dbf) clock_nsta_pane_t1

0xd35a,	// (0x0000d35a) cell_indicator_nsta_pane_ParamLimits

0xd35a,	// (0x0000d35a) cell_indicator_nsta_pane

0x5e13,	// (0x00005e13) cell_indicator_nsta_pane_g1

0xd377,	// (0x0000d377) cell_indicator_nsta_pane_g2

0x0001,

0xefe3,	// (0x0000efe3) cell_indicator_nsta_pane_g

0x5e37,	// (0x00005e37) clock_nsta_pane_cp

0x5e3f,	// (0x00005e3f) indicator_nsta_pane_cp

0x5e48,	// (0x00005e48) nsta_clock_indic_pane_g1

0x0659,	// (0x00000659) grid_indicator_pane

0x1c2f,	// (0x00001c2f) scroll_pane_cp29

0x20f5,	// (0x000020f5) indicator_nsta_pane_cp2_ParamLimits

0x20f5,	// (0x000020f5) indicator_nsta_pane_cp2

0x04e9,	// (0x000004e9) main_apps_wheel_pane

0x3b08,	// (0x00003b08) form_midp_field_text_pane_ParamLimits

0x3c4d,	// (0x00003c4d) scroll_bar_cp050_ParamLimits

0x5eb1,	// (0x00005eb1) cell_indicator_pane_ParamLimits

0x5eb1,	// (0x00005eb1) cell_indicator_pane

0x5ece,	// (0x00005ece) cell_indicator_pane_g1

0xd38d,	// (0x0000d38d) grid_wheel_folder_pane_ParamLimits

0xd38d,	// (0x0000d38d) grid_wheel_folder_pane

0xd39b,	// (0x0000d39b) list_wheel_apps_pane_ParamLimits

0xd39b,	// (0x0000d39b) list_wheel_apps_pane

0xd3a9,	// (0x0000d3a9) main_apps_wheel_pane_g1_ParamLimits

0xd3a9,	// (0x0000d3a9) main_apps_wheel_pane_g1

0xd3b5,	// (0x0000d3b5) main_apps_wheel_pane_g2_ParamLimits

0xd3b5,	// (0x0000d3b5) main_apps_wheel_pane_g2

0x0001,

0xefe8,	// (0x0000efe8) main_apps_wheel_pane_g_ParamLimits

0xefe8,	// (0x0000efe8) main_apps_wheel_pane_g

0xd3c3,	// (0x0000d3c3) main_apps_wheel_pane_t1_ParamLimits

0xd3c3,	// (0x0000d3c3) main_apps_wheel_pane_t1

0xd3d7,	// (0x0000d3d7) list_wheel_apps_pane_g1

0xd3df,	// (0x0000d3df) list_wheel_apps_pane_g2

0xd3e7,	// (0x0000d3e7) list_wheel_apps_pane_g3

0xd3ef,	// (0x0000d3ef) list_wheel_apps_pane_g4

0xd3f9,	// (0x0000d3f9) list_wheel_apps_pane_g5

0x0004,

0xefed,	// (0x0000efed) list_wheel_apps_pane_g

0x23f8,	// (0x000023f8) navi_icon_text_pane

0xc7aa,	// (0x0000c7aa) aid_fill_nsta

0xd410,	// (0x0000d410) navi_icon_text_pane_g1

0xd41c,	// (0x0000d41c) navi_icon_text_pane_t1

0x2294,	// (0x00002294) list_set_graphic_pane_t1_ParamLimits

0x2294,	// (0x00002294) list_set_graphic_pane_t1

0x438f,	// (0x0000438f) popup_midp_note_alarm_window_t6_ParamLimits

0x438f,	// (0x0000438f) popup_midp_note_alarm_window_t6

0x43a1,	// (0x000043a1) popup_midp_note_alarm_window_t7_ParamLimits

0x43a1,	// (0x000043a1) popup_midp_note_alarm_window_t7

0x43b3,	// (0x000043b3) popup_midp_note_alarm_window_t8_ParamLimits

0x43b3,	// (0x000043b3) popup_midp_note_alarm_window_t8

0x43c5,	// (0x000043c5) popup_midp_note_alarm_window_t9_ParamLimits

0x43c5,	// (0x000043c5) popup_midp_note_alarm_window_t9

0x43d7,	// (0x000043d7) popup_midp_note_alarm_window_t10_ParamLimits

0x43d7,	// (0x000043d7) popup_midp_note_alarm_window_t10

0x43e9,	// (0x000043e9) popup_midp_note_alarm_window_t11_ParamLimits

0x43e9,	// (0x000043e9) popup_midp_note_alarm_window_t11

0x43fb,	// (0x000043fb) scroll_pane_cp17_ParamLimits

0x43fb,	// (0x000043fb) scroll_pane_cp17

0x44b1,	// (0x000044b1) volume_small_pane_cp_g1

0x5fb7,	// (0x00005fb7) volume_small_pane_cp_g2

0x5fc0,	// (0x00005fc0) volume_small_pane_cp_g3

0x5fc9,	// (0x00005fc9) volume_small_pane_cp_g4

0x5fd2,	// (0x00005fd2) volume_small_pane_cp_g5

0x5fdb,	// (0x00005fdb) volume_small_pane_cp_g6

0x5fe4,	// (0x00005fe4) volume_small_pane_cp_g7

0x5fed,	// (0x00005fed) volume_small_pane_cp_g8

0x5ff6,	// (0x00005ff6) volume_small_pane_cp_g9

0x5fff,	// (0x00005fff) volume_small_pane_cp_g10

0x2659,	// (0x00002659) midp_ticker_pane_g1_ParamLimits

0x2665,	// (0x00002665) midp_ticker_pane_g2_ParamLimits

0xaa98,	// (0x0000aa98) midp_ticker_pane_g_ParamLimits

0xbf6d,	// (0x0000bf6d) midp_ticker_pane_t1_ParamLimits

0xc7ca,	// (0x0000c7ca) aid_fill_nsta_2

0x3c39,	// (0x00003c39) list_form2_midp_pane

0x4ff4,	// (0x00004ff4) midp_editing_number_pane_ParamLimits

0x5003,	// (0x00005003) midp_ticker_pane_ParamLimits

0x6008,	// (0x00006008) form2_midp_field_pane

0x602c,	// (0x0000602c) scroll_pane_cp51

0x604c,	// (0x0000604c) form2_midp_button_pane_ParamLimits

0x604c,	// (0x0000604c) form2_midp_button_pane

0x605e,	// (0x0000605e) form2_midp_content_pane_ParamLimits

0x605e,	// (0x0000605e) form2_midp_content_pane

0x6078,	// (0x00006078) form2_midp_field_choice_group_pane

0x6080,	// (0x00006080) form2_midp_field_pane_g1

0x6088,	// (0x00006088) form2_midp_field_pane_g2

0x6090,	// (0x00006090) form2_midp_field_pane_g3

0x6098,	// (0x00006098) form2_midp_field_pane_g4

0x0003,

0xae1e,	// (0x0000ae1e) form2_midp_field_pane_g

0x60a0,	// (0x000060a0) form2_midp_gauge_slider_pane

0x60a8,	// (0x000060a8) form2_midp_gauge_wait_pane

0x60b0,	// (0x000060b0) form2_midp_image_pane_ParamLimits

0x60b0,	// (0x000060b0) form2_midp_image_pane

0x60cb,	// (0x000060cb) form2_midp_label_pane_ParamLimits

0x60cb,	// (0x000060cb) form2_midp_label_pane

0xd44a,	// (0x0000d44a) form2_midp_label_pane_cp_ParamLimits

0xd44a,	// (0x0000d44a) form2_midp_label_pane_cp

0x6105,	// (0x00006105) form2_midp_string_pane_ParamLimits

0x6105,	// (0x00006105) form2_midp_string_pane

0x6117,	// (0x00006117) form2_midp_text_pane_ParamLimits

0x6117,	// (0x00006117) form2_midp_text_pane

0x6130,	// (0x00006130) form2_midp_time_pane

0x6140,	// (0x00006140) input_focus_pane_cp51_ParamLimits

0x6140,	// (0x00006140) input_focus_pane_cp51

0x6158,	// (0x00006158) form2_midp_label_pane_t1_ParamLimits

0x6158,	// (0x00006158) form2_midp_label_pane_t1

0x6198,	// (0x00006198) form2_mdip_text_pane_t1_ParamLimits

0x6198,	// (0x00006198) form2_mdip_text_pane_t1

0x61b4,	// (0x000061b4) form2_midp_time_pane_t1

0x61cf,	// (0x000061cf) form2_midp_gauge_slider_pane_t1

0xd46b,	// (0x0000d46b) form2_midp_gauge_slider_pane_t2

0xd47d,	// (0x0000d47d) form2_midp_gauge_slider_pane_t3

0x0002,

0xeffd,	// (0x0000effd) form2_midp_gauge_slider_pane_t

0x6205,	// (0x00006205) form2_midp_slider_pane

0x6211,	// (0x00006211) form2_midp_gauge_wait_pane_t1

0x621f,	// (0x0000621f) form2_midp_wait_pane_ParamLimits

0x621f,	// (0x0000621f) form2_midp_wait_pane

0xd48f,	// (0x0000d48f) list_single_2graphic_pane_cp4_ParamLimits

0xd48f,	// (0x0000d48f) list_single_2graphic_pane_cp4

0xcc4f,	// (0x0000cc4f) list_single_midp_graphic_pane_cp_ParamLimits

0xcc4f,	// (0x0000cc4f) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6279,	// (0x00006279) list_single_2graphic_pane_g1_cp4

0x55c0,	// (0x000055c0) list_single_2graphic_pane_g2_cp4

0x6281,	// (0x00006281) list_single_2graphic_pane_t1_cp4

0x04e9,	// (0x000004e9) list_highlight_pane_cp21

0x6290,	// (0x00006290) list_single_midp_graphic_pane_g4_cp

0x629f,	// (0x0000629f) list_single_midp_graphic_pane_t1_cp

0xd4a6,	// (0x0000d4a6) form2_mdip_string_pane_t1_ParamLimits

0xd4a6,	// (0x0000d4a6) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5_ParamLimits

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5

0xbec1,	// (0x0000bec1) midp_form_pane_ParamLimits

0x04e9,	// (0x000004e9) main_apps_wheel_pane_ParamLimits

0xc506,	// (0x0000c506) popup_preview_window_ParamLimits

0xc506,	// (0x0000c506) popup_preview_window

0x3052,	// (0x00003052) popup_touch_info_window_ParamLimits

0x3052,	// (0x00003052) popup_touch_info_window

0x3070,	// (0x00003070) popup_touch_menu_window_ParamLimits

0x3070,	// (0x00003070) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x63ee,	// (0x000063ee) list_touch_menu_pane

0x63f6,	// (0x000063f6) list_single_touch_menu_pane_ParamLimits

0x63f6,	// (0x000063f6) list_single_touch_menu_pane

0x640b,	// (0x0000640b) list_single_touch_menu_pane_t1

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7

0x6419,	// (0x00006419) heading_sub_pane

0x6421,	// (0x00006421) list_touch_info_pane_ParamLimits

0x6421,	// (0x00006421) list_touch_info_pane

0x6430,	// (0x00006430) list_single_touch_info_pane_ParamLimits

0x6430,	// (0x00006430) list_single_touch_info_pane

0x6442,	// (0x00006442) list_single_touch_info_pane_t1

0x6450,	// (0x00006450) list_single_touch_info_pane_t2

0x0001,

0xae35,	// (0x0000ae35) list_single_touch_info_pane_t

0x257a,	// (0x0000257a) bg_popup_heading_pane_cp

0x645e,	// (0x0000645e) heading_sub_pane_t1

0x37b6,	// (0x000037b6) bg_popup_preview_window_pane_cp_ParamLimits

0x37b6,	// (0x000037b6) bg_popup_preview_window_pane_cp

0x6419,	// (0x00006419) heading_preview_pane

0x6421,	// (0x00006421) list_preview_pane_ParamLimits

0x6421,	// (0x00006421) list_preview_pane

0x646c,	// (0x0000646c) popup_preview_window_g1

0x6430,	// (0x00006430) list_single_preview_pane_ParamLimits

0x6430,	// (0x00006430) list_single_preview_pane

0x6474,	// (0x00006474) list_single_preview_pane_g1

0x647c,	// (0x0000647c) list_single_preview_pane_t1

0x6442,	// (0x00006442) list_single_preview_pane_t2

0x0001,

0xae3a,	// (0x0000ae3a) list_single_preview_pane_t

0x648a,	// (0x0000648a) bg_popup_heading_pane_cp2_ParamLimits

0x648a,	// (0x0000648a) bg_popup_heading_pane_cp2

0x64a0,	// (0x000064a0) heading_preview_pane_g1

0x64a8,	// (0x000064a8) heading_preview_pane_t1_ParamLimits

0x64a8,	// (0x000064a8) heading_preview_pane_t1

0x067c,	// (0x0000067c) soft_indicator_pane_t1_ParamLimits

0x0d56,	// (0x00000d56) scroll_pane_ParamLimits

0x1b2b,	// (0x00001b2b) scroll_sc2_left_pane

0x1b34,	// (0x00001b34) scroll_sc2_right_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1_ParamLimits

0x1b68,	// (0x00001b68) scroll_bg_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_bg_pane_g3_ParamLimits

0xaa27,	// (0x0000aa27) scroll_bg_pane_g_ParamLimits

0x1b53,	// (0x00001b53) scroll_handle_pane_g1_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_handle_pane_g3_ParamLimits

0xaa2e,	// (0x0000aa2e) scroll_handle_pane_g_ParamLimits

0x2b2c,	// (0x00002b2c) popup_choice_list_window_ParamLimits

0x2b2c,	// (0x00002b2c) popup_choice_list_window

0x352a,	// (0x0000352a) choice_list_pane

0x35f2,	// (0x000035f2) cell_toolbar_pane_t1

0x361a,	// (0x0000361a) toolbar_button_pane_ParamLimits

0x4a29,	// (0x00004a29) ai_gene_pane_1_t2_ParamLimits

0x4a29,	// (0x00004a29) ai_gene_pane_1_t2

0x0001,

0xac44,	// (0x0000ac44) ai_gene_pane_1_t_ParamLimits

0xac44,	// (0x0000ac44) ai_gene_pane_1_t

0x64c5,	// (0x000064c5) scroll_sc2_left_pane_g1

0x64c5,	// (0x000064c5) scroll_sc2_right_pane_g1

0x2afc,	// (0x00002afc) bg_popup_sub_pane_cp10

0x64cf,	// (0x000064cf) list_choice_list_pane

0x64e6,	// (0x000064e6) list_single_choice_list_pane_ParamLimits

0x64e6,	// (0x000064e6) list_single_choice_list_pane

0x64fa,	// (0x000064fa) list_single_choice_list_pane_g1

0x6502,	// (0x00006502) list_single_choice_list_pane_t1_ParamLimits

0x6502,	// (0x00006502) list_single_choice_list_pane_t1

0x6517,	// (0x00006517) choice_list_pane_g1

0x651f,	// (0x0000651f) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x188c,	// (0x0000188c) title_pane_stacon_g2_ParamLimits

0x188c,	// (0x0000188c) title_pane_stacon_g2

0x0002,

0xaa0d,	// (0x0000aa0d) title_pane_stacon_g_ParamLimits

0xaa0d,	// (0x0000aa0d) title_pane_stacon_g

0x257a,	// (0x0000257a) cursor_press_pane

0xc1c5,	// (0x0000c1c5) popup_fep_hwr_window_ParamLimits

0xc1c5,	// (0x0000c1c5) popup_fep_hwr_window

0x2c4a,	// (0x00002c4a) popup_fep_vkb_window_ParamLimits

0x2c4a,	// (0x00002c4a) popup_fep_vkb_window

0x652d,	// (0x0000652d) cursor_press_pane_g1

0x0002,

0xf011,	// (0x0000f011) fep_vkb_side_pane_g_ParamLimits

0x656e,	// (0x0000656e) fep_hwr_candidate_pane_ParamLimits

0x656e,	// (0x0000656e) fep_hwr_candidate_pane

0x6598,	// (0x00006598) fep_hwr_side_pane_ParamLimits

0x6598,	// (0x00006598) fep_hwr_side_pane

0x65b8,	// (0x000065b8) fep_hwr_top_pane_ParamLimits

0x65b8,	// (0x000065b8) fep_hwr_top_pane

0x65d0,	// (0x000065d0) fep_hwr_write_pane_ParamLimits

0x65d0,	// (0x000065d0) fep_hwr_write_pane

0xf011,	// (0x0000f011) fep_vkb_side_pane_g

0x660a,	// (0x0000660a) fep_hwr_top_pane_g1

0x661c,	// (0x0000661c) fep_hwr_top_pane_g2

0x662e,	// (0x0000662e) fep_hwr_top_pane_g3

0x0002,

0xae3f,	// (0x0000ae3f) fep_hwr_top_pane_g

0x6643,	// (0x00006643) fep_hwr_top_text_pane

0x1cf5,	// (0x00001cf5) fep_hwr_top_text_pane_g1

0x671b,	// (0x0000671b) fep_hwr_top_text_pane_t1

0x676b,	// (0x0000676b) fep_hwr_candidate_pane_g1

0x69eb,	// (0x000069eb) fep_vkb_keypad_pane_g3_ParamLimits

0x69eb,	// (0x000069eb) fep_vkb_keypad_pane_g3

0x6a13,	// (0x00006a13) fep_vkb_keypad_pane_g4_ParamLimits

0x6a13,	// (0x00006a13) fep_vkb_keypad_pane_g4

0x6a82,	// (0x00006a82) fep_vkb_bottom_pane_g2_ParamLimits

0x6a82,	// (0x00006a82) fep_vkb_bottom_pane_g2

0x0001,

0xae6a,	// (0x0000ae6a) fep_vkb_bottom_pane_g_ParamLimits

0xae6a,	// (0x0000ae6a) fep_vkb_bottom_pane_g

0x64c5,	// (0x000064c5) cell_vkb_side_pane_g2

0x0001,

0xae74,	// (0x0000ae74) cell_vkb_side_pane_g

0x6b0d,	// (0x00006b0d) cell_vkb_side_pane_t1

0x6b1b,	// (0x00006b1b) cell_vkb_side_pane_t1_copy1

0x64c5,	// (0x000064c5) bg_fep_vkb_candidate_pane_g2

0x6c4d,	// (0x00006c4d) cell_vkb_candidate_pane_ParamLimits

0x679f,	// (0x0000679f) aid_size_cell_vkb_ParamLimits

0x679f,	// (0x0000679f) aid_size_cell_vkb

0x6c4d,	// (0x00006c4d) cell_vkb_candidate_pane

0x6c83,	// (0x00006c83) bg_popup_fep_shadow_pane_g1

0x682d,	// (0x0000682d) fep_vkb_bottom_pane_ParamLimits

0x682d,	// (0x0000682d) fep_vkb_bottom_pane

0x686a,	// (0x0000686a) fep_vkb_candidate_pane_ParamLimits

0x686a,	// (0x0000686a) fep_vkb_candidate_pane

0x6886,	// (0x00006886) fep_vkb_keypad_pane_ParamLimits

0x6886,	// (0x00006886) fep_vkb_keypad_pane

0x68cc,	// (0x000068cc) fep_vkb_side_pane_ParamLimits

0x68cc,	// (0x000068cc) fep_vkb_side_pane

0x6908,	// (0x00006908) fep_vkb_top_pane_ParamLimits

0x6908,	// (0x00006908) fep_vkb_top_pane

0x6944,	// (0x00006944) fep_vkb_top_pane_g1_ParamLimits

0x6944,	// (0x00006944) fep_vkb_top_pane_g1

0x6953,	// (0x00006953) fep_vkb_top_pane_g2_ParamLimits

0x6953,	// (0x00006953) fep_vkb_top_pane_g2

0x6962,	// (0x00006962) fep_vkb_top_pane_g3_ParamLimits

0x6962,	// (0x00006962) fep_vkb_top_pane_g3

0x0003,

0xae5a,	// (0x0000ae5a) fep_vkb_top_pane_g_ParamLimits

0xae5a,	// (0x0000ae5a) fep_vkb_top_pane_g

0x6980,	// (0x00006980) fep_vkb_top_text_pane_ParamLimits

0x6980,	// (0x00006980) fep_vkb_top_text_pane

0xd58b,	// (0x0000d58b) fep_vkb_side_pane_g1_ParamLimits

0xd58b,	// (0x0000d58b) fep_vkb_side_pane_g1

0x69da,	// (0x000069da) grid_vkb_side_pane_ParamLimits

0x69da,	// (0x000069da) grid_vkb_side_pane

0x6c8b,	// (0x00006c8b) bg_popup_fep_shadow_pane_g2

0x6c94,	// (0x00006c94) bg_popup_fep_shadow_pane_g3

0x6c9c,	// (0x00006c9c) bg_popup_fep_shadow_pane_g4

0x6ca5,	// (0x00006ca5) bg_popup_fep_shadow_pane_g5

0x6caf,	// (0x00006caf) bg_popup_fep_shadow_pane_g6

0x6cb7,	// (0x00006cb7) bg_popup_fep_shadow_pane_g7

0x14ab,	// (0x000014ab) bg_popup_fep_shadow_pane_g8

0x6a31,	// (0x00006a31) grid_vkb_keypad_number_pane_ParamLimits

0x6a31,	// (0x00006a31) grid_vkb_keypad_number_pane

0x6a41,	// (0x00006a41) grid_vkb_keypad_pane_ParamLimits

0x6a41,	// (0x00006a41) grid_vkb_keypad_pane

0x6a67,	// (0x00006a67) fep_vkb_bottom_pane_g1_ParamLimits

0x6a67,	// (0x00006a67) fep_vkb_bottom_pane_g1

0x6a90,	// (0x00006a90) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a90,	// (0x00006a90) grid_vkb_keypad_bottom_left_pane

0x6aa5,	// (0x00006aa5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6aa5,	// (0x00006aa5) grid_vkb_keypad_bottom_right_pane

0x6aba,	// (0x00006aba) fep_vkb_top_text_pane_g1

0xd5d2,	// (0x0000d5d2) fep_vkb_top_text_pane_t1

0xd5e4,	// (0x0000d5e4) cell_vkb_side_pane_ParamLimits

0xd5e4,	// (0x0000d5e4) cell_vkb_side_pane

0x64c5,	// (0x000064c5) cell_vkb_side_pane_g1

0x6b29,	// (0x00006b29) cell_vkb_keypad_pane_ParamLimits

0x6b29,	// (0x00006b29) cell_vkb_keypad_pane

0x6ba4,	// (0x00006ba4) cell_vkb_keypad_pane_g1

0x0008,

0xae87,	// (0x0000ae87) bg_popup_fep_shadow_pane_g

0x64c5,	// (0x000064c5) cell_hwr_side_pane_g1

0x64c5,	// (0x000064c5) cell_hwr_side_pane_g2

0x6bae,	// (0x00006bae) cell_vkb_keypad_pane_t1

0xd5fa,	// (0x0000d5fa) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd5fa,	// (0x0000d5fa) cell_vkb_keypad_bottom_left_pane

0xd60f,	// (0x0000d60f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd60f,	// (0x0000d60f) cell_vkb_keypad_bottom_right_pane

0x64c5,	// (0x000064c5) cell_vkb_keypad_bottom_left_pane_g1

0x64c5,	// (0x000064c5) cell_vkb_keypad_bottom_right_pane_g1

0x6c12,	// (0x00006c12) cell_vkb_keypad_number_pane_ParamLimits

0x6c12,	// (0x00006c12) cell_vkb_keypad_number_pane

0x6c31,	// (0x00006c31) cell_vkb_keypad_number_pane_g1

0x6c3b,	// (0x00006c3b) cell_vkb_keypad_number_pane_g2

0x6c44,	// (0x00006c44) cell_vkb_keypad_number_pane_g3

0x0002,

0xae79,	// (0x0000ae79) cell_vkb_keypad_number_pane_g

0x6bae,	// (0x00006bae) cell_vkb_keypad_number_pane_t1

0x6c6a,	// (0x00006c6a) fep_vkb_candidate_pane_g1

0x0001,

0xae74,	// (0x0000ae74) cell_hwr_side_pane_g

0x6cc9,	// (0x00006cc9) cell_hwr_side_pane_t1

0x6cd7,	// (0x00006cd7) cell_hwr_side_pane_t1_copy1

0x6972,	// (0x00006972) cell_hwr_candidate_pane_g1

0x6d27,	// (0x00006d27) cell_hwr_candidate_pane_t1

0x64c5,	// (0x000064c5) cell_vkb_candidate_pane_g2

0x6d7b,	// (0x00006d7b) cell_vkb_candidate_pane_t1

0x6535,	// (0x00006535) bg_popup_fep_shadow_pane_ParamLimits

0x6535,	// (0x00006535) bg_popup_fep_shadow_pane

0x65ea,	// (0x000065ea) bg_fep_hwr_top_pane_g4

0x6658,	// (0x00006658) bg_hwr_side_pane_g1_ParamLimits

0x6658,	// (0x00006658) bg_hwr_side_pane_g1

0xd544,	// (0x0000d544) cell_hwr_side_pane_ParamLimits

0xd544,	// (0x0000d544) cell_hwr_side_pane

0x66c6,	// (0x000066c6) fep_hwr_write_pane_g1_ParamLimits

0x66c6,	// (0x000066c6) fep_hwr_write_pane_g1

0x66d3,	// (0x000066d3) fep_hwr_write_pane_g2_ParamLimits

0x66d3,	// (0x000066d3) fep_hwr_write_pane_g2

0x66e0,	// (0x000066e0) fep_hwr_write_pane_g3_ParamLimits

0x66e0,	// (0x000066e0) fep_hwr_write_pane_g3

0xd564,	// (0x0000d564) fep_hwr_write_pane_g4_ParamLimits

0xd564,	// (0x0000d564) fep_hwr_write_pane_g4

0x0005,

0xf004,	// (0x0000f004) fep_hwr_write_pane_g_ParamLimits

0xf004,	// (0x0000f004) fep_hwr_write_pane_g

0x65ea,	// (0x000065ea) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65ea,	// (0x000065ea) bg_fep_hwr_candidate_pane_g2

0x6729,	// (0x00006729) cell_hwr_candidate_pane_ParamLimits

0x6729,	// (0x00006729) cell_hwr_candidate_pane

0x676b,	// (0x0000676b) fep_hwr_candidate_pane_g1_ParamLimits

0x67cd,	// (0x000067cd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x67cd,	// (0x000067cd) bg_popup_fep_shadow_pane_cp2

0x6972,	// (0x00006972) fep_vkb_top_pane_g4_ParamLimits

0x6972,	// (0x00006972) fep_vkb_top_pane_g4

0x69b8,	// (0x000069b8) fep_vkb_side_pane_g2_ParamLimits

0x69b8,	// (0x000069b8) fep_vkb_side_pane_g2

0xb9ed,	// (0x0000b9ed) list_setting_pane_t4_ParamLimits

0xb9ed,	// (0x0000b9ed) list_setting_pane_t4

0xba67,	// (0x0000ba67) list_setting_number_pane_t5_ParamLimits

0xba67,	// (0x0000ba67) list_setting_number_pane_t5

0xbd7a,	// (0x0000bd7a) list_double_heading_pane_cp2_ParamLimits

0xbd7a,	// (0x0000bd7a) list_double_heading_pane_cp2

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2_ParamLimits

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2_ParamLimits

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2

0x6d89,	// (0x00006d89) list_double_heading_pane_t1_cp2_ParamLimits

0x6d89,	// (0x00006d89) list_double_heading_pane_t1_cp2

0x6d9f,	// (0x00006d9f) list_double_heading_pane_t2_cp2_ParamLimits

0x6d9f,	// (0x00006d9f) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02

0x6db1,	// (0x00006db1) list_preview_fixed_pane

0x6df7,	// (0x00006df7) list_empty_pane_fp_ParamLimits

0x6df7,	// (0x00006df7) list_empty_pane_fp

0x6df7,	// (0x00006df7) list_single_cale_day_pane_fp_ParamLimits

0x6df7,	// (0x00006df7) list_single_cale_day_pane_fp

0x6df7,	// (0x00006df7) list_single_graphic_heading_pane_fp_ParamLimits

0x6df7,	// (0x00006df7) list_single_graphic_heading_pane_fp

0x6df7,	// (0x00006df7) list_single_graphic_pane_fp_ParamLimits

0x6df7,	// (0x00006df7) list_single_graphic_pane_fp

0x6df7,	// (0x00006df7) list_single_heading_pane_fp_ParamLimits

0x6df7,	// (0x00006df7) list_single_heading_pane_fp

0x6df7,	// (0x00006df7) list_single_pane_fp_ParamLimits

0x6df7,	// (0x00006df7) list_single_pane_fp

0x6e0e,	// (0x00006e0e) list_single_pane_fp_g1_ParamLimits

0x6e0e,	// (0x00006e0e) list_single_pane_fp_g1

0x1375,	// (0x00001375) list_single_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_pane_fp_g2

0x1381,	// (0x00001381) list_single_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_pane_fp_g3

0x6e1a,	// (0x00006e1a) list_single_pane_fp_g4_ParamLimits

0x6e1a,	// (0x00006e1a) list_single_pane_fp_g4

0x0003,

0xaea8,	// (0x0000aea8) list_single_pane_fp_g_ParamLimits

0xaea8,	// (0x0000aea8) list_single_pane_fp_g

0x6e26,	// (0x00006e26) list_single_pane_fp_t1_ParamLimits

0x6e26,	// (0x00006e26) list_single_pane_fp_t1

0x6e3d,	// (0x00006e3d) list_single_graphic_pane_fp_g1_ParamLimits

0x6e3d,	// (0x00006e3d) list_single_graphic_pane_fp_g1

0x6e0e,	// (0x00006e0e) list_single_graphic_pane_fp_g2_ParamLimits

0x6e0e,	// (0x00006e0e) list_single_graphic_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4

0x6e1a,	// (0x00006e1a) list_single_graphic_pane_fp_g5_ParamLimits

0x6e1a,	// (0x00006e1a) list_single_graphic_pane_fp_g5

0x0004,

0xaeb1,	// (0x0000aeb1) list_single_graphic_pane_fp_g_ParamLimits

0xaeb1,	// (0x0000aeb1) list_single_graphic_pane_fp_g

0x6e49,	// (0x00006e49) list_single_graphic_pane_fp_t1_ParamLimits

0x6e49,	// (0x00006e49) list_single_graphic_pane_fp_t1

0x6e3d,	// (0x00006e3d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e3d,	// (0x00006e3d) list_single_graphic_heading_pane_fp_g1

0x6e0e,	// (0x00006e0e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6e0e,	// (0x00006e0e) list_single_graphic_heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4

0x6e1a,	// (0x00006e1a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6e1a,	// (0x00006e1a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xaeb1,	// (0x0000aeb1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xaeb1,	// (0x0000aeb1) list_single_graphic_heading_pane_fp_g

0x6e5f,	// (0x00006e5f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e5f,	// (0x00006e5f) list_single_graphic_heading_pane_fp_t1

0x6e75,	// (0x00006e75) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e75,	// (0x00006e75) list_single_graphic_heading_pane_fp_t2

0x0001,

0xaebc,	// (0x0000aebc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xaebc,	// (0x0000aebc) list_single_graphic_heading_pane_fp_t

0x6e87,	// (0x00006e87) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e87,	// (0x00006e87) list_single_cale_day_pane_fp_g1

0x6ebf,	// (0x00006ebf) list_single_cale_day_pane_fp_g2_ParamLimits

0x6ebf,	// (0x00006ebf) list_single_cale_day_pane_fp_g2

0x6ecb,	// (0x00006ecb) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ecb,	// (0x00006ecb) list_single_cale_day_pane_fp_g3

0x6ef3,	// (0x00006ef3) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ef3,	// (0x00006ef3) list_single_cale_day_pane_fp_g4

0x6f17,	// (0x00006f17) list_single_cale_day_pane_fp_g5_ParamLimits

0x6f17,	// (0x00006f17) list_single_cale_day_pane_fp_g5

0x0004,

0xaec1,	// (0x0000aec1) list_single_cale_day_pane_fp_g_ParamLimits

0xaec1,	// (0x0000aec1) list_single_cale_day_pane_fp_g

0x6f3b,	// (0x00006f3b) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f3b,	// (0x00006f3b) list_single_cale_day_pane_fp_t1

0x6f61,	// (0x00006f61) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f61,	// (0x00006f61) list_single_cale_day_pane_fp_t2

0x6f7a,	// (0x00006f7a) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f7a,	// (0x00006f7a) list_single_cale_day_pane_fp_t3

0x0002,

0xaecc,	// (0x0000aecc) list_single_cale_day_pane_fp_t_ParamLimits

0xaecc,	// (0x0000aecc) list_single_cale_day_pane_fp_t

0x6e0e,	// (0x00006e0e) list_empty_pane_fp_g1_ParamLimits

0x6e0e,	// (0x00006e0e) list_empty_pane_fp_g1

0x6f93,	// (0x00006f93) list_empty_pane_fp_t1

0x6fa1,	// (0x00006fa1) list_empty_pane_fp_t2

0x0001,

0xaed3,	// (0x0000aed3) list_empty_pane_fp_t

0x6e0e,	// (0x00006e0e) list_single_heading_pane_fp_g1_ParamLimits

0x6e0e,	// (0x00006e0e) list_single_heading_pane_fp_g1

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3

0x0002,

0xaed8,	// (0x0000aed8) list_single_heading_pane_fp_g_ParamLimits

0xaed8,	// (0x0000aed8) list_single_heading_pane_fp_g

0x6faf,	// (0x00006faf) list_single_heading_pane_fp_t1_ParamLimits

0x6faf,	// (0x00006faf) list_single_heading_pane_fp_t1

0x6fc1,	// (0x00006fc1) list_single_heading_pane_fp_t2_ParamLimits

0x6fc1,	// (0x00006fc1) list_single_heading_pane_fp_t2

0x0001,

0xaedf,	// (0x0000aedf) list_single_heading_pane_fp_t_ParamLimits

0xaedf,	// (0x0000aedf) list_single_heading_pane_fp_t

0x16d3,	// (0x000016d3) aid_size_cell_fast

0x0789,	// (0x00000789) soft_indicator_pane_cp1_t1

0x1710,	// (0x00001710) cell_app_pane_cp2_ParamLimits

0x1710,	// (0x00001710) cell_app_pane_cp2

0x6557,	// (0x00006557) fep_hwr_candidate_drop_down_list_pane

0x6785,	// (0x00006785) fep_hwr_candidate_pane_g3_ParamLimits

0x6785,	// (0x00006785) fep_hwr_candidate_pane_g3

0x6792,	// (0x00006792) fep_hwr_candidate_pane_g4_ParamLimits

0x6792,	// (0x00006792) fep_hwr_candidate_pane_g4

0x0002,

0xae53,	// (0x0000ae53) fep_hwr_candidate_pane_g_ParamLimits

0xae53,	// (0x0000ae53) fep_hwr_candidate_pane_g

0x6859,	// (0x00006859) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6859,	// (0x00006859) fep_vkb_candidate_drop_down_list_pane

0x6c72,	// (0x00006c72) fep_vkb_candidate_pane_g3

0x6c7a,	// (0x00006c7a) fep_vkb_candidate_pane_g4

0x0002,

0xae80,	// (0x0000ae80) fep_vkb_candidate_pane_g

0x6972,	// (0x00006972) cell_hwr_candidate_pane_g1_ParamLimits

0x6ce5,	// (0x00006ce5) cell_hwr_candidate_pane_g3_ParamLimits

0x6ce5,	// (0x00006ce5) cell_hwr_candidate_pane_g3

0x6d06,	// (0x00006d06) cell_hwr_candidate_pane_g4_ParamLimits

0x6d06,	// (0x00006d06) cell_hwr_candidate_pane_g4

0x0002,

0xae9a,	// (0x0000ae9a) cell_hwr_candidate_pane_g_ParamLimits

0xae9a,	// (0x0000ae9a) cell_hwr_candidate_pane_g

0x6d45,	// (0x00006d45) cell_vkb_candidate_pane_g3_ParamLimits

0x6d45,	// (0x00006d45) cell_vkb_candidate_pane_g3

0x6d60,	// (0x00006d60) cell_vkb_candidate_pane_g4_ParamLimits

0x6d60,	// (0x00006d60) cell_vkb_candidate_pane_g4

0x6fd7,	// (0x00006fd7) cell_app_pane_cp2_g1_ParamLimits

0x6fd7,	// (0x00006fd7) cell_app_pane_cp2_g1

0x6ff5,	// (0x00006ff5) cell_app_pane_cp2_g2_ParamLimits

0x6ff5,	// (0x00006ff5) cell_app_pane_cp2_g2

0x0001,

0xaee4,	// (0x0000aee4) cell_app_pane_cp2_g_ParamLimits

0xaee4,	// (0x0000aee4) cell_app_pane_cp2_g

0x7001,	// (0x00007001) cell_app_pane_cp2_t1_ParamLimits

0x7001,	// (0x00007001) cell_app_pane_cp2_t1

0x134f,	// (0x0000134f) grid_highlight_pane_cp1_ParamLimits

0x134f,	// (0x0000134f) grid_highlight_pane_cp1

0x7013,	// (0x00007013) cell_hwr_candidate_pane_cp1_ParamLimits

0x7013,	// (0x00007013) cell_hwr_candidate_pane_cp1

0x6972,	// (0x00006972) fep_hwr_candidate_drop_down_list_pane_g1

0x7032,	// (0x00007032) fep_hwr_candidate_drop_down_list_pane_g2

0x703f,	// (0x0000703f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xaee9,	// (0x0000aee9) fep_hwr_candidate_drop_down_list_pane_g

0x704c,	// (0x0000704c) fep_hwr_candidate_drop_down_list_scroll_pane

0x7055,	// (0x00007055) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7055,	// (0x00007055) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7062,	// (0x00007062) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7062,	// (0x00007062) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x706f,	// (0x0000706f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x706f,	// (0x0000706f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d45,	// (0x00006d45) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d45,	// (0x00006d45) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d60,	// (0x00006d60) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d60,	// (0x00006d60) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x707c,	// (0x0000707c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x707c,	// (0x0000707c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7097,	// (0x00007097) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7097,	// (0x00007097) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x70b2,	// (0x000070b2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70b2,	// (0x000070b2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaef0,	// (0x0000aef0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaef0,	// (0x0000aef0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x70cd,	// (0x000070cd) cell_vkb_candidate_pane_cp1_ParamLimits

0x70cd,	// (0x000070cd) cell_vkb_candidate_pane_cp1

0x6972,	// (0x00006972) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6972,	// (0x00006972) fep_vkb_candidate_drop_down_list_pane_g1

0x7032,	// (0x00007032) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7032,	// (0x00007032) fep_vkb_candidate_drop_down_list_pane_g2

0x703f,	// (0x0000703f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x703f,	// (0x0000703f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xaee9,	// (0x0000aee9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xaee9,	// (0x0000aee9) fep_vkb_candidate_drop_down_list_pane_g

0x70ed,	// (0x000070ed) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x70ed,	// (0x000070ed) fep_vkb_candidate_drop_down_list_scroll_pane

0x70fa,	// (0x000070fa) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70fa,	// (0x000070fa) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7107,	// (0x00007107) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7107,	// (0x00007107) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7113,	// (0x00007113) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7113,	// (0x00007113) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6ce5,	// (0x00006ce5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ce5,	// (0x00006ce5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d06,	// (0x00006d06) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d06,	// (0x00006d06) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x711f,	// (0x0000711f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x711f,	// (0x0000711f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7140,	// (0x00007140) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7140,	// (0x00007140) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x70b2,	// (0x000070b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70b2,	// (0x000070b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaf01,	// (0x0000af01) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaf01,	// (0x0000af01) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb3ee,	// (0x0000b3ee) title_pane_g1_ParamLimits

0xb3ff,	// (0x0000b3ff) title_pane_g2_ParamLimits

0xee42,	// (0x0000ee42) title_pane_g_ParamLimits

0x1ce5,	// (0x00001ce5) aid_call2_pane

0x1ced,	// (0x00001ced) aid_call_pane

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g1

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g2

0x1cfd,	// (0x00001cfd) popup_clock_analogue_window_g3

0x1d06,	// (0x00001d06) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xaa3c,	// (0x0000aa3c) popup_clock_analogue_window_g

0x1d0e,	// (0x00001d0e) popup_clock_analogue_window_t1

0x1d90,	// (0x00001d90) clock_digital_number_pane_ParamLimits

0x1d90,	// (0x00001d90) clock_digital_number_pane

0x1d9c,	// (0x00001d9c) clock_digital_number_pane_cp02_ParamLimits

0x1d9c,	// (0x00001d9c) clock_digital_number_pane_cp02

0x1da8,	// (0x00001da8) clock_digital_number_pane_cp03_ParamLimits

0x1da8,	// (0x00001da8) clock_digital_number_pane_cp03

0x1db4,	// (0x00001db4) clock_digital_number_pane_cp04_ParamLimits

0x1db4,	// (0x00001db4) clock_digital_number_pane_cp04

0x1dc0,	// (0x00001dc0) clock_digital_separator_pane_ParamLimits

0x1dc0,	// (0x00001dc0) clock_digital_separator_pane

0x1dcc,	// (0x00001dcc) popup_clock_digital_window_t1_ParamLimits

0x1dcc,	// (0x00001dcc) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xaa47,	// (0x0000aa47) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xaa47,	// (0x0000aa47) clock_digital_separator_pane_g

0xc7aa,	// (0x0000c7aa) aid_fill_nsta_ParamLimits

0xc8d9,	// (0x0000c8d9) indicator_nsta_pane_ParamLimits

0x3365,	// (0x00003365) popup_clock_analogue_window

0x3365,	// (0x00003365) popup_clock_digital_window

0x1694,	// (0x00001694) grid_indicator_nsta_pane_ParamLimits

0x5dcd,	// (0x00005dcd) clock_nsta_pane_t2

0x0001,

0xadd3,	// (0x0000add3) clock_nsta_pane_t

0x1ad0,	// (0x00001ad0) aid_size_max_handle

0xbd71,	// (0x0000bd71) aid_size_min_handle

0x257a,	// (0x0000257a) editor_scroll_pane

0x7161,	// (0x00007161) ex_editor_pane

0x1642,	// (0x00001642) scroll_pane_cp13

0x0d82,	// (0x00000d82) scroll_pane_cp14

0x1d3e,	// (0x00001d3e) scroll_pane_cp36

0xbd8b,	// (0x0000bd8b) list_single_graphic_hl_pane_cp2_ParamLimits

0xbd8b,	// (0x0000bd8b) list_single_graphic_hl_pane_cp2

0xd1fa,	// (0x0000d1fa) list_single_graphic_hl_pane_ParamLimits

0xd1fa,	// (0x0000d1fa) list_single_graphic_hl_pane

0x7169,	// (0x00007169) aid_size_min_hl_cp1

0x7172,	// (0x00007172) list_highlight_pane_cp34_ParamLimits

0x7172,	// (0x00007172) list_highlight_pane_cp34

0x7183,	// (0x00007183) list_single_graphic_hl_pane_g1_ParamLimits

0x7183,	// (0x00007183) list_single_graphic_hl_pane_g1

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4_ParamLimits

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4

0xd62a,	// (0x0000d62a) list_single_graphic_hl_pane_g5_ParamLimits

0xd62a,	// (0x0000d62a) list_single_graphic_hl_pane_g5

0x0004,

0xf01d,	// (0x0000f01d) list_single_graphic_hl_pane_g_ParamLimits

0xf01d,	// (0x0000f01d) list_single_graphic_hl_pane_g

0xd63e,	// (0x0000d63e) list_single_graphic_hl_pane_t1_ParamLimits

0xd63e,	// (0x0000d63e) list_single_graphic_hl_pane_t1

0x71b0,	// (0x000071b0) aid_size_min_hl_cp2

0x71b9,	// (0x000071b9) list_highlight_pane_cp34_cp2_ParamLimits

0x71b9,	// (0x000071b9) list_highlight_pane_cp34_cp2

0x7183,	// (0x00007183) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7183,	// (0x00007183) list_single_graphic_hl_pane_g1_cp2

0x71c6,	// (0x000071c6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x71c6,	// (0x000071c6) list_single_graphic_hl_pane_g2_cp2

0x71d2,	// (0x000071d2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x71d2,	// (0x000071d2) list_single_graphic_hl_pane_g3_cp2

0x24b1,	// (0x000024b1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x24b1,	// (0x000024b1) list_single_graphic_hl_pane_g4_cp2

0x719c,	// (0x0000719c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x719c,	// (0x0000719c) list_single_graphic_hl_pane_g5_cp2

0xbfb2,	// (0x0000bfb2) control_pane_g4_ParamLimits

0xbfb2,	// (0x0000bfb2) control_pane_g4

0x2afc,	// (0x00002afc) bg_popup_sub_pane_cp10_ParamLimits

0x64cf,	// (0x000064cf) list_choice_list_pane_ParamLimits

0x64de,	// (0x000064de) scroll_pane_cp23

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02_ParamLimits

0x6db1,	// (0x00006db1) list_preview_fixed_pane_ParamLimits

0x6dc7,	// (0x00006dc7) list_preview_fixed_pane_cp_ParamLimits

0x6dc7,	// (0x00006dc7) list_preview_fixed_pane_cp

0x6dd3,	// (0x00006dd3) popup_preview_fixed_window_g1_ParamLimits

0x6dd3,	// (0x00006dd3) popup_preview_fixed_window_g1

0x6ddf,	// (0x00006ddf) popup_preview_fixed_window_g2_ParamLimits

0x6ddf,	// (0x00006ddf) popup_preview_fixed_window_g2

0x0002,

0xaea1,	// (0x0000aea1) popup_preview_fixed_window_g_ParamLimits

0xaea1,	// (0x0000aea1) popup_preview_fixed_window_g

0x1971,	// (0x00001971) aid_navi_side_left_pane_ParamLimits

0x1986,	// (0x00001986) aid_navi_side_right_pane_ParamLimits

0x199e,	// (0x0000199e) navi_icon_pane_stacon_ParamLimits

0x19b2,	// (0x000019b2) navi_navi_pane_stacon_ParamLimits

0x199e,	// (0x0000199e) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x71f6,	// (0x000071f6) listscroll_text_info_pane

0x71fe,	// (0x000071fe) list_text_info_pane_ParamLimits

0x71fe,	// (0x000071fe) list_text_info_pane

0x720d,	// (0x0000720d) scroll_pane_cp24_ParamLimits

0x720d,	// (0x0000720d) scroll_pane_cp24

0xd654,	// (0x0000d654) list_text_info_pane_t1_ParamLimits

0xd654,	// (0x0000d654) list_text_info_pane_t1

0xc13a,	// (0x0000c13a) popup_fast_swap2_window_ParamLimits

0xc13a,	// (0x0000c13a) popup_fast_swap2_window

0x7264,	// (0x00007264) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c65,	// (0x00003c65) heading_pane_cp2

0x0a59,	// (0x00000a59) listscroll_fast2_pane

0x726e,	// (0x0000726e) grid_fast2_pane

0x7278,	// (0x00007278) listscroll_fast2_pane_g1

0x7280,	// (0x00007280) listscroll_fast2_pane_g2

0x0001,

0xaf1d,	// (0x0000af1d) listscroll_fast2_pane_g

0x1642,	// (0x00001642) scroll_pane_cp26

0x728a,	// (0x0000728a) cell_fast2_pane_ParamLimits

0x728a,	// (0x0000728a) cell_fast2_pane

0x729f,	// (0x0000729f) cell_fast2_pane_g1

0x72a8,	// (0x000072a8) cell_fast2_pane_g2

0x72b1,	// (0x000072b1) cell_fast2_pane_g3

0x0002,

0xaf22,	// (0x0000af22) cell_fast2_pane_g

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp9

0x0b54,	// (0x00000b54) main_eswt_pane_ParamLimits

0x0b54,	// (0x00000b54) main_eswt_pane

0x7222,	// (0x00007222) list_single_text_info_pane

0x72b9,	// (0x000072b9) eswt_ctrl_button_pane

0x72b9,	// (0x000072b9) eswt_ctrl_canvas_pane

0x72c1,	// (0x000072c1) eswt_ctrl_combo_pane

0x72b9,	// (0x000072b9) eswt_ctrl_default_pane

0x72b9,	// (0x000072b9) eswt_ctrl_label_pane

0x72c9,	// (0x000072c9) eswt_ctrl_wait_pane

0x72d1,	// (0x000072d1) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x72f1,	// (0x000072f1) popup_eswt_tasktip_window_ParamLimits

0x72f1,	// (0x000072f1) popup_eswt_tasktip_window

0x37b6,	// (0x000037b6) bg_popup_window_pane_cp18

0x7302,	// (0x00007302) eswt_control_pane_g1_ParamLimits

0x7302,	// (0x00007302) eswt_control_pane_g1

0x730f,	// (0x0000730f) eswt_control_pane_g2_ParamLimits

0x730f,	// (0x0000730f) eswt_control_pane_g2

0x731c,	// (0x0000731c) eswt_control_pane_g3_ParamLimits

0x731c,	// (0x0000731c) eswt_control_pane_g3

0x7329,	// (0x00007329) eswt_control_pane_g4_ParamLimits

0x7329,	// (0x00007329) eswt_control_pane_g4

0x0003,

0xaf29,	// (0x0000af29) eswt_control_pane_g_ParamLimits

0xaf29,	// (0x0000af29) eswt_control_pane_g

0x134f,	// (0x0000134f) bg_button_pane_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane

0x0b54,	// (0x00000b54) common_borders_pane_copy2_ParamLimits

0x0b54,	// (0x00000b54) common_borders_pane_copy2

0x7336,	// (0x00007336) control_button_pane_g1_ParamLimits

0x7336,	// (0x00007336) control_button_pane_g1

0x7342,	// (0x00007342) control_button_pane_g2_ParamLimits

0x7342,	// (0x00007342) control_button_pane_g2

0x734e,	// (0x0000734e) control_button_pane_g3_ParamLimits

0x734e,	// (0x0000734e) control_button_pane_g3

0x0002,

0xaf32,	// (0x0000af32) control_button_pane_g_ParamLimits

0xaf32,	// (0x0000af32) control_button_pane_g

0x7362,	// (0x00007362) control_button_pane_t1

0x7370,	// (0x00007370) control_button_pane_t2

0x0001,

0xaf39,	// (0x0000af39) control_button_pane_t

0x3626,	// (0x00003626) bg_button_pane_g1

0x362e,	// (0x0000362e) bg_button_pane_g2

0x3636,	// (0x00003636) bg_button_pane_g3

0x363e,	// (0x0000363e) bg_button_pane_g4

0x3646,	// (0x00003646) bg_button_pane_g5

0x364e,	// (0x0000364e) bg_button_pane_g6

0x3656,	// (0x00003656) bg_button_pane_g7

0x365e,	// (0x0000365e) bg_button_pane_g8

0x3666,	// (0x00003666) bg_button_pane_g9

0x0008,

0xab98,	// (0x0000ab98) bg_button_pane_g

0x648a,	// (0x0000648a) common_borders_pane_ParamLimits

0x648a,	// (0x0000648a) common_borders_pane

0x7302,	// (0x00007302) eswt_control_pane_g1_copy1_ParamLimits

0x7302,	// (0x00007302) eswt_control_pane_g1_copy1

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy1_ParamLimits

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy1

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy1_ParamLimits

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy1

0x7329,	// (0x00007329) eswt_control_pane_g4_copy1_ParamLimits

0x7329,	// (0x00007329) eswt_control_pane_g4_copy1

0x64c5,	// (0x000064c5) bg_eswt_ctrl_canvas_pane_g1

0x648a,	// (0x0000648a) common_borders_pane_cp2_ParamLimits

0x648a,	// (0x0000648a) common_borders_pane_cp2

0x648a,	// (0x0000648a) common_borders_pane_cp3_ParamLimits

0x648a,	// (0x0000648a) common_borders_pane_cp3

0x737e,	// (0x0000737e) separator_horizontal_pane

0x7386,	// (0x00007386) separator_vertical_pane

0x7302,	// (0x00007302) eswt_control_pane_g1_copy2_ParamLimits

0x7302,	// (0x00007302) eswt_control_pane_g1_copy2

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy2_ParamLimits

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy2

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy2_ParamLimits

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy2

0x7329,	// (0x00007329) eswt_control_pane_g4_copy2_ParamLimits

0x7329,	// (0x00007329) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x738f,	// (0x0000738f) separator_horizontal_pane_g1

0x7398,	// (0x00007398) separator_horizontal_pane_g2

0x73a1,	// (0x000073a1) separator_horizontal_pane_g3

0x0002,

0xaf3e,	// (0x0000af3e) separator_horizontal_pane_g

0x7302,	// (0x00007302) eswt_control_pane_g1_copy3_ParamLimits

0x7302,	// (0x00007302) eswt_control_pane_g1_copy3

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy3_ParamLimits

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy3

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy3_ParamLimits

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy3

0x7329,	// (0x00007329) eswt_control_pane_g4_copy3_ParamLimits

0x7329,	// (0x00007329) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x73aa,	// (0x000073aa) separator_vertical_pane_g1

0x73b3,	// (0x000073b3) separator_vertical_pane_g2

0x73bc,	// (0x000073bc) separator_vertical_pane_g3

0x0002,

0xaf45,	// (0x0000af45) separator_vertical_pane_g

0x7302,	// (0x00007302) eswt_control_pane_g1_copy4_ParamLimits

0x7302,	// (0x00007302) eswt_control_pane_g1_copy4

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy4_ParamLimits

0x730f,	// (0x0000730f) eswt_control_pane_g2_copy4

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy4_ParamLimits

0x731c,	// (0x0000731c) eswt_control_pane_g3_copy4

0x7329,	// (0x00007329) eswt_control_pane_g4_copy4_ParamLimits

0x7329,	// (0x00007329) eswt_control_pane_g4_copy4

0xd672,	// (0x0000d672) eswt_ctrl_combo_button_pane

0xd67a,	// (0x0000d67a) eswt_ctrl_input_pane

0xd682,	// (0x0000d682) popup_choice_list_window_cp70

0xd68a,	// (0x0000d68a) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x648a,	// (0x0000648a) bg_button_pane_cp70_ParamLimits

0x648a,	// (0x0000648a) bg_button_pane_cp70

0xd698,	// (0x0000d698) eswt_ctrl_combo_button_pane_g1

0x73f3,	// (0x000073f3) wait_bar_pane_cp70

0x37b6,	// (0x000037b6) bg_popup_window_pane_cp70_ParamLimits

0x37b6,	// (0x000037b6) bg_popup_window_pane_cp70

0x73fb,	// (0x000073fb) popup_eswt_tasktip_window_t1

0x7411,	// (0x00007411) wait_bar_pane_cp71_ParamLimits

0x7411,	// (0x00007411) wait_bar_pane_cp71

0x741d,	// (0x0000741d) grid_eswt_app_pane

0x1b34,	// (0x00001b34) scroll_pane_cp70

0xd6a0,	// (0x0000d6a0) cell_eswt_app_pane_ParamLimits

0xd6a0,	// (0x0000d6a0) cell_eswt_app_pane

0xd6ca,	// (0x0000d6ca) cell_eswt_app_pane_g1_ParamLimits

0xd6ca,	// (0x0000d6ca) cell_eswt_app_pane_g1

0xd6f9,	// (0x0000d6f9) cell_eswt_app_pane_g2_ParamLimits

0xd6f9,	// (0x0000d6f9) cell_eswt_app_pane_g2

0x0001,

0xf028,	// (0x0000f028) cell_eswt_app_pane_g_ParamLimits

0xf028,	// (0x0000f028) cell_eswt_app_pane_g

0xd722,	// (0x0000d722) cell_eswt_app_pane_t1_ParamLimits

0xd722,	// (0x0000d722) cell_eswt_app_pane_t1

0x74e4,	// (0x000074e4) grid_highlight_pane_cp70_ParamLimits

0x74e4,	// (0x000074e4) grid_highlight_pane_cp70

0x244d,	// (0x0000244d) set_content_pane_g1

0x28cb,	// (0x000028cb) status_small_volume_pane

0x74f0,	// (0x000074f0) status_small_volume_pane_g1

0x74f8,	// (0x000074f8) volume_small2_pane

0x7501,	// (0x00007501) volume_small2_pane_g1

0x750a,	// (0x0000750a) volume_small2_pane_g2

0x7513,	// (0x00007513) volume_small2_pane_g3

0x751c,	// (0x0000751c) volume_small2_pane_g4

0x7525,	// (0x00007525) volume_small2_pane_g5

0x752e,	// (0x0000752e) volume_small2_pane_g6

0x7537,	// (0x00007537) volume_small2_pane_g7

0x7540,	// (0x00007540) volume_small2_pane_g8

0x7549,	// (0x00007549) volume_small2_pane_g9

0x7552,	// (0x00007552) volume_small2_pane_g10

0x0009,

0xaf51,	// (0x0000af51) volume_small2_pane_g

0x6aba,	// (0x00006aba) fep_vkb_top_text_pane_g1_ParamLimits

0xd5d2,	// (0x0000d5d2) fep_vkb_top_text_pane_t1_ParamLimits

0x6deb,	// (0x00006deb) popup_preview_fixed_window_g3_ParamLimits

0x6deb,	// (0x00006deb) popup_preview_fixed_window_g3

0xc73d,	// (0x0000c73d) popup_toolbar_trans_pane

0xd042,	// (0x0000d042) aid_height_set_list_ParamLimits

0x4e42,	// (0x00004e42) aid_size_parent_ParamLimits

0x2afc,	// (0x00002afc) list_highlight_pane_cp2_ParamLimits

0x244d,	// (0x0000244d) set_content_pane_g1_ParamLimits

0xd20d,	// (0x0000d20d) list_single_image_pane_ParamLimits

0xd20d,	// (0x0000d20d) list_single_image_pane

0xd754,	// (0x0000d754) aid_size_cell_image_ParamLimits

0xd754,	// (0x0000d754) aid_size_cell_image

0xd761,	// (0x0000d761) grid_single_image_pane_ParamLimits

0xd761,	// (0x0000d761) grid_single_image_pane

0x1375,	// (0x00001375) list_single_image_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_single_image_pane_g1

0x1381,	// (0x00001381) list_single_image_pane_g2_ParamLimits

0x1381,	// (0x00001381) list_single_image_pane_g2

0x0001,

0xaf66,	// (0x0000af66) list_single_image_pane_g_ParamLimits

0xaf66,	// (0x0000af66) list_single_image_pane_g

0x7574,	// (0x00007574) list_single_image_pane_t1_ParamLimits

0x7574,	// (0x00007574) list_single_image_pane_t1

0xd76d,	// (0x0000d76d) cell_image_list_pane_ParamLimits

0xd76d,	// (0x0000d76d) cell_image_list_pane

0xd781,	// (0x0000d781) cell_image_list_pane_g1

0xd78a,	// (0x0000d78a) cell_image_list_pane_g2

0x0001,

0xf02d,	// (0x0000f02d) cell_image_list_pane_g

0x75b0,	// (0x000075b0) aid_size_cell_tb_trans_pane

0x134f,	// (0x0000134f) bg_tb_trans_pane

0x75c2,	// (0x000075c2) grid_tb_trans_pane

0x3626,	// (0x00003626) bg_tb_trans_pane_g1

0x362e,	// (0x0000362e) bg_tb_trans_pane_g2

0x3636,	// (0x00003636) bg_tb_trans_pane_g3

0x363e,	// (0x0000363e) bg_tb_trans_pane_g4

0x3646,	// (0x00003646) bg_tb_trans_pane_g5

0x365e,	// (0x0000365e) bg_tb_trans_pane_g6

0x3666,	// (0x00003666) bg_tb_trans_pane_g7

0x364e,	// (0x0000364e) bg_tb_trans_pane_g8

0x3656,	// (0x00003656) bg_tb_trans_pane_g9

0x0008,

0xaf70,	// (0x0000af70) bg_tb_trans_pane_g

0x75d6,	// (0x000075d6) cell_toolbar_trans_pane_ParamLimits

0x75d6,	// (0x000075d6) cell_toolbar_trans_pane

0x64c5,	// (0x000064c5) cell_toolbar_trans_pane_g1

0xd42e,	// (0x0000d42e) list_form2_midp_pane_t1

0xd43c,	// (0x0000d43c) list_form2_midp_pane_t2

0x0001,

0xeff8,	// (0x0000eff8) list_form2_midp_pane_t

0x602c,	// (0x0000602c) scroll_pane_cp51_ParamLimits

0x622f,	// (0x0000622f) form2_midp_wait_pane_g1

0x6238,	// (0x00006238) form2_midp_wait_pane_g2

0x6241,	// (0x00006241) form2_midp_wait_pane_g3

0x0002,

0xae2e,	// (0x0000ae2e) form2_midp_wait_pane_g

0x04e9,	// (0x000004e9) list_highlight_pane_cp21_ParamLimits

0x6290,	// (0x00006290) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x629f,	// (0x0000629f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5044,	// (0x00005044) list_single_2graphic_im_pane_ParamLimits

0x5044,	// (0x00005044) list_single_2graphic_im_pane

0xd793,	// (0x0000d793) list_single_2graphic_im_pane_g1_ParamLimits

0xd793,	// (0x0000d793) list_single_2graphic_im_pane_g1

0xd7a4,	// (0x0000d7a4) list_single_2graphic_im_pane_g2_ParamLimits

0xd7a4,	// (0x0000d7a4) list_single_2graphic_im_pane_g2

0xd7b0,	// (0x0000d7b0) list_single_2graphic_im_pane_g3_ParamLimits

0xd7b0,	// (0x0000d7b0) list_single_2graphic_im_pane_g3

0x0003,

0xf032,	// (0x0000f032) list_single_2graphic_im_pane_g_ParamLimits

0xf032,	// (0x0000f032) list_single_2graphic_im_pane_g

0xd7c4,	// (0x0000d7c4) list_single_2graphic_im_pane_t1_ParamLimits

0xd7c4,	// (0x0000d7c4) list_single_2graphic_im_pane_t1

0x6df7,	// (0x00006df7) list_single_graphic_2heading_pane_fp_ParamLimits

0x6df7,	// (0x00006df7) list_single_graphic_2heading_pane_fp

0x6e3d,	// (0x00006e3d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e3d,	// (0x00006e3d) list_single_graphic_2heading_pane_fp_g1

0x6e0e,	// (0x00006e0e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6e0e,	// (0x00006e0e) list_single_graphic_2heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4

0x6e1a,	// (0x00006e1a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6e1a,	// (0x00006e1a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xaeb1,	// (0x0000aeb1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xaeb1,	// (0x0000aeb1) list_single_graphic_2heading_pane_fp_g

0x766a,	// (0x0000766a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x766a,	// (0x0000766a) list_single_graphic_2heading_pane_fp_t1

0x6e75,	// (0x00006e75) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e75,	// (0x00006e75) list_single_graphic_2heading_pane_fp_t2

0x7680,	// (0x00007680) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7680,	// (0x00007680) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xaf8c,	// (0x0000af8c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xaf8c,	// (0x0000af8c) list_single_graphic_2heading_pane_fp_t

0x6703,	// (0x00006703) fep_hwr_write_pane_g5_ParamLimits

0x6703,	// (0x00006703) fep_hwr_write_pane_g5

0x670f,	// (0x0000670f) fep_hwr_write_pane_g6_ParamLimits

0x670f,	// (0x0000670f) fep_hwr_write_pane_g6

0x72d1,	// (0x000072d1) eswt_shell_pane_ParamLimits

0x37b6,	// (0x000037b6) bg_popup_window_pane_cp18_ParamLimits

0x4cf0,	// (0x00004cf0) heading_pane_cp70

0x73fb,	// (0x000073fb) popup_eswt_tasktip_window_t1_ParamLimits

0xc7fe,	// (0x0000c7fe) aid_touch_tab_arrow_left

0xc814,	// (0x0000c814) aid_touch_tab_arrow_right

0xb417,	// (0x0000b417) title_pane_g3_ParamLimits

0xb417,	// (0x0000b417) title_pane_g3

0x123c,	// (0x0000123c) set_value_pane_g1

0xc73d,	// (0x0000c73d) popup_toolbar_trans_pane_ParamLimits

0x75b0,	// (0x000075b0) aid_size_cell_tb_trans_pane_ParamLimits

0x134f,	// (0x0000134f) bg_tb_trans_pane_ParamLimits

0x75c2,	// (0x000075c2) grid_tb_trans_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane

0x3e7b,	// (0x00003e7b) cont_note_wait_pane_ParamLimits

0x3e7b,	// (0x00003e7b) cont_note_wait_pane

0x3e7b,	// (0x00003e7b) cont_note_image_pane_ParamLimits

0x3e7b,	// (0x00003e7b) cont_note_image_pane

0x7696,	// (0x00007696) popup_note2_window_g1_ParamLimits

0x7696,	// (0x00007696) popup_note2_window_g1

0x76c7,	// (0x000076c7) popup_note2_window_t1_ParamLimits

0x76c7,	// (0x000076c7) popup_note2_window_t1

0x770c,	// (0x0000770c) popup_note2_window_t2_ParamLimits

0x770c,	// (0x0000770c) popup_note2_window_t2

0x7751,	// (0x00007751) popup_note2_window_t3_ParamLimits

0x7751,	// (0x00007751) popup_note2_window_t3

0x7796,	// (0x00007796) popup_note2_window_t4_ParamLimits

0x7796,	// (0x00007796) popup_note2_window_t4

0x0891,	// (0x00000891) popup_note2_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note2_window_t5

0x0004,

0xaf98,	// (0x0000af98) popup_note2_window_t_ParamLimits

0xaf98,	// (0x0000af98) popup_note2_window_t

0x77c5,	// (0x000077c5) popup_note2_image_window_g1_ParamLimits

0x77c5,	// (0x000077c5) popup_note2_image_window_g1

0x77d1,	// (0x000077d1) popup_note2_image_window_g2_ParamLimits

0x77d1,	// (0x000077d1) popup_note2_image_window_g2

0x0001,

0xafa3,	// (0x0000afa3) popup_note2_image_window_g_ParamLimits

0xafa3,	// (0x0000afa3) popup_note2_image_window_g

0x77e3,	// (0x000077e3) popup_note2_image_window_t1_ParamLimits

0x77e3,	// (0x000077e3) popup_note2_image_window_t1

0x77fb,	// (0x000077fb) popup_note2_image_window_t2_ParamLimits

0x77fb,	// (0x000077fb) popup_note2_image_window_t2

0x7813,	// (0x00007813) popup_note2_image_window_t3_ParamLimits

0x7813,	// (0x00007813) popup_note2_image_window_t3

0x0002,

0xafa8,	// (0x0000afa8) popup_note2_image_window_t_ParamLimits

0xafa8,	// (0x0000afa8) popup_note2_image_window_t

0x3e89,	// (0x00003e89) popup_note2_wait_window_g1_ParamLimits

0x3e89,	// (0x00003e89) popup_note2_wait_window_g1

0x3e95,	// (0x00003e95) popup_note2_wait_window_g2_ParamLimits

0x3e95,	// (0x00003e95) popup_note2_wait_window_g2

0x3ea1,	// (0x00003ea1) popup_note2_wait_window_g3_ParamLimits

0x3ea1,	// (0x00003ea1) popup_note2_wait_window_g3

0x0002,

0xab7a,	// (0x0000ab7a) popup_note2_wait_window_g_ParamLimits

0xab7a,	// (0x0000ab7a) popup_note2_wait_window_g

0x782f,	// (0x0000782f) popup_note2_wait_window_t1_ParamLimits

0x782f,	// (0x0000782f) popup_note2_wait_window_t1

0x784d,	// (0x0000784d) popup_note2_wait_window_t2_ParamLimits

0x784d,	// (0x0000784d) popup_note2_wait_window_t2

0x786b,	// (0x0000786b) popup_note2_wait_window_t3_ParamLimits

0x786b,	// (0x0000786b) popup_note2_wait_window_t3

0x787d,	// (0x0000787d) popup_note2_wait_window_t4_ParamLimits

0x787d,	// (0x0000787d) popup_note2_wait_window_t4

0x0003,

0xafaf,	// (0x0000afaf) popup_note2_wait_window_t_ParamLimits

0xafaf,	// (0x0000afaf) popup_note2_wait_window_t

0x788f,	// (0x0000788f) wait_bar2_pane_ParamLimits

0x788f,	// (0x0000788f) wait_bar2_pane

0x78a7,	// (0x000078a7) popup_snote2_single_text_window_g1_ParamLimits

0x78a7,	// (0x000078a7) popup_snote2_single_text_window_g1

0x78cf,	// (0x000078cf) popup_snote2_single_text_window_t1_ParamLimits

0x78cf,	// (0x000078cf) popup_snote2_single_text_window_t1

0x791b,	// (0x0000791b) popup_snote2_single_text_window_t2_ParamLimits

0x791b,	// (0x0000791b) popup_snote2_single_text_window_t2

0x7967,	// (0x00007967) popup_snote2_single_text_window_t3_ParamLimits

0x7967,	// (0x00007967) popup_snote2_single_text_window_t3

0x79a8,	// (0x000079a8) popup_snote2_single_text_window_t4_ParamLimits

0x79a8,	// (0x000079a8) popup_snote2_single_text_window_t4

0x79de,	// (0x000079de) popup_snote2_single_text_window_t5_ParamLimits

0x79de,	// (0x000079de) popup_snote2_single_text_window_t5

0x0004,

0xafb8,	// (0x0000afb8) popup_snote2_single_text_window_t_ParamLimits

0xafb8,	// (0x0000afb8) popup_snote2_single_text_window_t

0x7a09,	// (0x00007a09) popup_snote2_single_graphic_window_g1_ParamLimits

0x7a09,	// (0x00007a09) popup_snote2_single_graphic_window_g1

0x7a31,	// (0x00007a31) popup_snote2_single_graphic_window_g2_ParamLimits

0x7a31,	// (0x00007a31) popup_snote2_single_graphic_window_g2

0x0001,

0xafc3,	// (0x0000afc3) popup_snote2_single_graphic_window_g_ParamLimits

0xafc3,	// (0x0000afc3) popup_snote2_single_graphic_window_g

0x7a59,	// (0x00007a59) popup_snote2_single_graphic_window_t1_ParamLimits

0x7a59,	// (0x00007a59) popup_snote2_single_graphic_window_t1

0x7aa5,	// (0x00007aa5) popup_snote2_single_graphic_window_t2_ParamLimits

0x7aa5,	// (0x00007aa5) popup_snote2_single_graphic_window_t2

0x7967,	// (0x00007967) popup_snote2_single_graphic_window_t3_ParamLimits

0x7967,	// (0x00007967) popup_snote2_single_graphic_window_t3

0x79a8,	// (0x000079a8) popup_snote2_single_graphic_window_t4_ParamLimits

0x79a8,	// (0x000079a8) popup_snote2_single_graphic_window_t4

0x79de,	// (0x000079de) popup_snote2_single_graphic_window_t5_ParamLimits

0x79de,	// (0x000079de) popup_snote2_single_graphic_window_t5

0x0004,

0xafc8,	// (0x0000afc8) popup_snote2_single_graphic_window_t_ParamLimits

0xafc8,	// (0x0000afc8) popup_snote2_single_graphic_window_t

0x5e90,	// (0x00005e90) clock_nsta_pane_cp2_t1

0x5e90,	// (0x00005e90) clock_nsta_pane_cp2_t2

0x0001,

0xadef,	// (0x0000adef) clock_nsta_pane_cp2_t

0x1369,	// (0x00001369) form_field_data_wide_pane_g1_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2

0x1381,	// (0x00001381) form_field_data_wide_pane_g3_ParamLimits

0x1381,	// (0x00001381) form_field_data_wide_pane_g3

0x0002,

0xa9bf,	// (0x0000a9bf) form_field_data_wide_pane_g_ParamLimits

0xa9bf,	// (0x0000a9bf) form_field_data_wide_pane_g

0xd344,	// (0x0000d344) grid_touch_3_pane_ParamLimits

0xd344,	// (0x0000d344) grid_touch_3_pane

0xd7f5,	// (0x0000d7f5) cell_touch_3_pane_ParamLimits

0xd7f5,	// (0x0000d7f5) cell_touch_3_pane

0x64c5,	// (0x000064c5) cell_touch_3_pane_g1

0x64c5,	// (0x000064c5) cell_touch_3_pane_g2

0x0001,

0xae74,	// (0x0000ae74) cell_touch_3_pane_g

0x08c3,	// (0x000008c3) cont_query_data_pane

0x08cb,	// (0x000008cb) cont_query_data_pane_cp1

0x7b20,	// (0x00007b20) button_value_adjust_pane_cp7

0x7b28,	// (0x00007b28) query_popup_pane_cp3

0x1e30,	// (0x00001e30) bg_popup_sub_pane_cp22_ParamLimits

0x1e46,	// (0x00001e46) navi_navi_volume_pane_cp2

0x1e61,	// (0x00001e61) popup_side_volume_key_window_g2

0x1e70,	// (0x00001e70) popup_side_volume_key_window_g3

0x0002,

0xaa51,	// (0x0000aa51) popup_side_volume_key_window_g

0x1e8d,	// (0x00001e8d) popup_side_volume_key_window_t2

0x0001,

0xaa58,	// (0x0000aa58) popup_side_volume_key_window_t

0x2317,	// (0x00002317) popup_side_volume_key_window_ParamLimits

0xb81d,	// (0x0000b81d) list_double_graphic_pane_g4_ParamLimits

0xb81d,	// (0x0000b81d) list_double_graphic_pane_g4

0xd1e6,	// (0x0000d1e6) list_single_2heading_msg_pane_ParamLimits

0xd1e6,	// (0x0000d1e6) list_single_2heading_msg_pane

0xd83e,	// (0x0000d83e) list_single_2heading_msg_pane_g1_ParamLimits

0xd83e,	// (0x0000d83e) list_single_2heading_msg_pane_g1

0xd84a,	// (0x0000d84a) list_single_2heading_msg_pane_g2_ParamLimits

0xd84a,	// (0x0000d84a) list_single_2heading_msg_pane_g2

0xd85d,	// (0x0000d85d) list_single_2heading_msg_pane_g3_ParamLimits

0xd85d,	// (0x0000d85d) list_single_2heading_msg_pane_g3

0xd869,	// (0x0000d869) list_single_2heading_msg_pane_g4_ParamLimits

0xd869,	// (0x0000d869) list_single_2heading_msg_pane_g4

0x0003,

0xf03b,	// (0x0000f03b) list_single_2heading_msg_pane_g_ParamLimits

0xf03b,	// (0x0000f03b) list_single_2heading_msg_pane_g

0xd881,	// (0x0000d881) list_single_2heading_msg_pane_t1_ParamLimits

0xd881,	// (0x0000d881) list_single_2heading_msg_pane_t1

0xd8a9,	// (0x0000d8a9) list_single_2heading_msg_pane_t2_ParamLimits

0xd8a9,	// (0x0000d8a9) list_single_2heading_msg_pane_t2

0xd914,	// (0x0000d914) list_single_2heading_msg_pane_t3_ParamLimits

0xd914,	// (0x0000d914) list_single_2heading_msg_pane_t3

0x7c1c,	// (0x00007c1c) list_single_2heading_msg_pane_t4_ParamLimits

0x7c1c,	// (0x00007c1c) list_single_2heading_msg_pane_t4

0x0003,

0xf044,	// (0x0000f044) list_single_2heading_msg_pane_t_ParamLimits

0xf044,	// (0x0000f044) list_single_2heading_msg_pane_t

0x043d,	// (0x0000043d) title_pane_g4_ParamLimits

0x043d,	// (0x0000043d) title_pane_g4

0x1899,	// (0x00001899) title_pane_stacon_g3_ParamLimits

0x1899,	// (0x00001899) title_pane_stacon_g3

0x762d,	// (0x0000762d) list_single_2graphic_im_pane_g4_ParamLimits

0x762d,	// (0x0000762d) list_single_2graphic_im_pane_g4

0x4a46,	// (0x00004a46) popup_side_volume_key_window_cp

0x54d5,	// (0x000054d5) main_idle_act2_pane_t1

0x366e,	// (0x0000366e) toolbar_button_pane_g10

0xb734,	// (0x0000b734) popup_toolbar_window_cp1

0x5e81,	// (0x00005e81) clock_nsta_pane_cp_t1

0x5e81,	// (0x00005e81) clock_nsta_pane_cp_t2

0x0001,

0xadea,	// (0x0000adea) clock_nsta_pane_cp_t

0x1e46,	// (0x00001e46) navi_navi_volume_pane_cp2_ParamLimits

0x1e55,	// (0x00001e55) popup_side_volume_key_window_g1_ParamLimits

0x1e61,	// (0x00001e61) popup_side_volume_key_window_g2_ParamLimits

0x1e70,	// (0x00001e70) popup_side_volume_key_window_g3_ParamLimits

0xaa51,	// (0x0000aa51) popup_side_volume_key_window_g_ParamLimits

0x6543,	// (0x00006543) fep_hwr_aid_pane

0x65ea,	// (0x000065ea) bg_fep_hwr_top_pane_g4_ParamLimits

0x660a,	// (0x0000660a) fep_hwr_top_pane_g1_ParamLimits

0x661c,	// (0x0000661c) fep_hwr_top_pane_g2_ParamLimits

0x662e,	// (0x0000662e) fep_hwr_top_pane_g3_ParamLimits

0xae3f,	// (0x0000ae3f) fep_hwr_top_pane_g_ParamLimits

0x6643,	// (0x00006643) fep_hwr_top_text_pane_ParamLimits

0x4807,	// (0x00004807) aid_touch_tab_arrow_arrow_2

0x4810,	// (0x00004810) aid_touch_tab_arrow_left_2

0x6557,	// (0x00006557) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x658e,	// (0x0000658e) fep_hwr_prediction_pane

0x68c2,	// (0x000068c2) fep_vkb_prediction_pane

0xd5b2,	// (0x0000d5b2) fep_vkb_side_pane_g3_ParamLimits

0xd5b2,	// (0x0000d5b2) fep_vkb_side_pane_g3

0x6972,	// (0x00006972) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7032,	// (0x00007032) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x703f,	// (0x0000703f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xaee9,	// (0x0000aee9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7c41,	// (0x00007c41) fep_hwr_prediction_pane_g1

0x7c4b,	// (0x00007c4b) fep_hwr_prediction_pane_g2

0x7c53,	// (0x00007c53) fep_hwr_prediction_pane_g3

0x7c5b,	// (0x00007c5b) fep_hwr_prediction_pane_g4

0x0003,

0xafe5,	// (0x0000afe5) fep_hwr_prediction_pane_g

0x7c41,	// (0x00007c41) fep_vkb_prediction_pane_g1

0x7c63,	// (0x00007c63) fep_vkb_prediction_pane_g2

0x7c6b,	// (0x00007c6b) fep_vkb_prediction_pane_g3

0x7c73,	// (0x00007c73) fep_vkb_prediction_pane_g4

0x0003,

0xafee,	// (0x0000afee) fep_vkb_prediction_pane_g

0x4db1,	// (0x00004db1) slider_set_pane_g3

0x4dc5,	// (0x00004dc5) slider_set_pane_g4

0x4ddd,	// (0x00004ddd) slider_set_pane_g5

0x4db1,	// (0x00004db1) slider_set_pane_g6

0x4df3,	// (0x00004df3) slider_set_pane_g7

0x4f9f,	// (0x00004f9f) slider_form_pane_g3

0x4fa8,	// (0x00004fa8) slider_form_pane_g4

0x4fb0,	// (0x00004fb0) slider_form_pane_g5

0x4f9f,	// (0x00004f9f) slider_form_pane_g6

0xd189,	// (0x0000d189) slider_form_pane_g7

0x57ba,	// (0x000057ba) slider_set_pane_vc_g3

0x57c3,	// (0x000057c3) slider_set_pane_vc_g4

0x57cc,	// (0x000057cc) slider_set_pane_vc_g5

0x57ba,	// (0x000057ba) slider_set_pane_vc_g6

0x57d5,	// (0x000057d5) slider_set_pane_vc_g7

0x57ba,	// (0x000057ba) slider_form_pane_vc_g1

0x57c3,	// (0x000057c3) slider_form_pane_vc_g2

0x57cc,	// (0x000057cc) slider_form_pane_vc_g3

0x57ba,	// (0x000057ba) slider_form_pane_vc_g4

0x5b87,	// (0x00005b87) slider_form_pane_vc_g5

0x0004,

0xadc3,	// (0x0000adc3) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c7b,	// (0x00007c7b) ai3_links_pane

0xd982,	// (0x0000d982) popup_ai3_data_window_ParamLimits

0xd982,	// (0x0000d982) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xd99a,	// (0x0000d99a) cell_ai3_links_pane_ParamLimits

0xd99a,	// (0x0000d99a) cell_ai3_links_pane

0x7cb4,	// (0x00007cb4) bg_popup_sub_pane_cp11

0x7cc1,	// (0x00007cc1) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7ce6,	// (0x00007ce6) heading_ai3_data_pane

0x7cee,	// (0x00007cee) list_ai3_gene_pane

0x7cfa,	// (0x00007cfa) popup_ai3_data_window_g1

0x7d02,	// (0x00007d02) heading_ai3_data_pane_g1

0x7d0a,	// (0x00007d0a) heading_ai3_data_pane_t1

0x7d18,	// (0x00007d18) list_double_ai3_gene_pane_ParamLimits

0x7d18,	// (0x00007d18) list_double_ai3_gene_pane

0x7d25,	// (0x00007d25) list_single_ai3_gene_pane_ParamLimits

0x7d25,	// (0x00007d25) list_single_ai3_gene_pane

0x648a,	// (0x0000648a) list_highlight_pane_cp7_ParamLimits

0x648a,	// (0x0000648a) list_highlight_pane_cp7

0x7d32,	// (0x00007d32) list_single_a13_gene_pane_t1_ParamLimits

0x7d32,	// (0x00007d32) list_single_a13_gene_pane_t1

0x7d49,	// (0x00007d49) list_single_ai3_gene_pane_g1

0x7d52,	// (0x00007d52) list_single_ai3_gene_pane_g2

0x0001,

0xaff7,	// (0x0000aff7) list_single_ai3_gene_pane_g

0x7d5a,	// (0x00007d5a) list_double_ai3_gene_pane_g1_ParamLimits

0x7d5a,	// (0x00007d5a) list_double_ai3_gene_pane_g1

0x7d66,	// (0x00007d66) list_double_ai3_gene_pane_t1_ParamLimits

0x7d66,	// (0x00007d66) list_double_ai3_gene_pane_t1

0x7d82,	// (0x00007d82) list_double_ai3_gene_pane_t2_ParamLimits

0x7d82,	// (0x00007d82) list_double_ai3_gene_pane_t2

0x7d97,	// (0x00007d97) list_double_ai3_gene_pane_t3_ParamLimits

0x7d97,	// (0x00007d97) list_double_ai3_gene_pane_t3

0x0002,

0xaffc,	// (0x0000affc) list_double_ai3_gene_pane_t_ParamLimits

0xaffc,	// (0x0000affc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b39,	// (0x00007b39) aid_size_min_col_2

0xd828,	// (0x0000d828) aid_size_min_msg_ParamLimits

0xd828,	// (0x0000d828) aid_size_min_msg

0xd5c6,	// (0x0000d5c6) fep_vkb_top_text_pane_g2_ParamLimits

0xd5c6,	// (0x0000d5c6) fep_vkb_top_text_pane_g2

0x0001,

0xf018,	// (0x0000f018) fep_vkb_top_text_pane_g_ParamLimits

0xf018,	// (0x0000f018) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7db4,	// (0x00007db4) grid_hc_apps_pane_ParamLimits

0x7db4,	// (0x00007db4) grid_hc_apps_pane

0x7dc3,	// (0x00007dc3) list_hc_apps_pane

0x7dcb,	// (0x00007dcb) scroll_pane_cp37_ParamLimits

0x7dcb,	// (0x00007dcb) scroll_pane_cp37

0xd9b4,	// (0x0000d9b4) cell_hc_apps_pane_ParamLimits

0xd9b4,	// (0x0000d9b4) cell_hc_apps_pane

0xda74,	// (0x0000da74) cell_hc_apps_pane_g1_ParamLimits

0xda74,	// (0x0000da74) cell_hc_apps_pane_g1

0x7eb8,	// (0x00007eb8) cell_hc_apps_pane_g2_ParamLimits

0x7eb8,	// (0x00007eb8) cell_hc_apps_pane_g2

0x7ed4,	// (0x00007ed4) cell_hc_apps_pane_g3_ParamLimits

0x7ed4,	// (0x00007ed4) cell_hc_apps_pane_g3

0x0002,

0xf04d,	// (0x0000f04d) cell_hc_apps_pane_g_ParamLimits

0xf04d,	// (0x0000f04d) cell_hc_apps_pane_g

0xdaa1,	// (0x0000daa1) cell_hc_apps_pane_t1_ParamLimits

0xdaa1,	// (0x0000daa1) cell_hc_apps_pane_t1

0x0819,	// (0x00000819) grid_highlight_pane_cp10_ParamLimits

0x0819,	// (0x00000819) grid_highlight_pane_cp10

0xdadf,	// (0x0000dadf) list_single_hc_apps_pane_ParamLimits

0xdadf,	// (0x0000dadf) list_single_hc_apps_pane

0x7fa9,	// (0x00007fa9) list_single_hc_apps_pane_g1

0x7fc2,	// (0x00007fc2) list_single_hc_apps_pane_g2

0x0001,

0xb00a,	// (0x0000b00a) list_single_hc_apps_pane_g

0x7fdb,	// (0x00007fdb) list_single_hc_apps_pane_g2_copy1

0x7ff7,	// (0x00007ff7) list_single_hc_apps_pane_t1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_ParamLimits

0x0533,	// (0x00000533) setting_slider_pane_t1_ParamLimits

0x054c,	// (0x0000054c) setting_slider_pane_t2_ParamLimits

0x0565,	// (0x00000565) setting_slider_pane_t3_ParamLimits

0xa8a7,	// (0x0000a8a7) setting_slider_pane_t_ParamLimits

0x057c,	// (0x0000057c) slider_set_pane_ParamLimits

0x2957,	// (0x00002957) control_pane_g5_ParamLimits

0x2957,	// (0x00002957) control_pane_g5

0x4d98,	// (0x00004d98) slider_set_pane_g1_ParamLimits

0x4da5,	// (0x00004da5) slider_set_pane_g2_ParamLimits

0x4db1,	// (0x00004db1) slider_set_pane_g3_ParamLimits

0x4dc5,	// (0x00004dc5) slider_set_pane_g4_ParamLimits

0x4ddd,	// (0x00004ddd) slider_set_pane_g5_ParamLimits

0x4db1,	// (0x00004db1) slider_set_pane_g6_ParamLimits

0x4df3,	// (0x00004df3) slider_set_pane_g7_ParamLimits

0xac96,	// (0x0000ac96) slider_set_pane_g_ParamLimits

0x23f8,	// (0x000023f8) navi_icon_text_pane_ParamLimits

0xc7ca,	// (0x0000c7ca) aid_fill_nsta_2_ParamLimits

0xc7fe,	// (0x0000c7fe) aid_touch_tab_arrow_left_ParamLimits

0xc814,	// (0x0000c814) aid_touch_tab_arrow_right_ParamLimits

0xc8af,	// (0x0000c8af) clock_nsta_pane_ParamLimits

0xcf1f,	// (0x0000cf1f) navi_icon_pane_g1_ParamLimits

0xcf2b,	// (0x0000cf2b) navi_text_pane_t1_ParamLimits

0xd410,	// (0x0000d410) navi_icon_text_pane_g1_ParamLimits

0xd41c,	// (0x0000d41c) navi_icon_text_pane_t1_ParamLimits

0x7fa9,	// (0x00007fa9) list_single_hc_apps_pane_g1_ParamLimits

0x7fc2,	// (0x00007fc2) list_single_hc_apps_pane_g2_ParamLimits

0xb00a,	// (0x0000b00a) list_single_hc_apps_pane_g_ParamLimits

0x7fdb,	// (0x00007fdb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ff7,	// (0x00007ff7) list_single_hc_apps_pane_t1_ParamLimits

0xb383,	// (0x0000b383) popup_toolbar2_fixed_window_ParamLimits

0xb383,	// (0x0000b383) popup_toolbar2_fixed_window

0xc733,	// (0x0000c733) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8025,	// (0x00008025) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8025,	// (0x00008025) grid_toolbar2_fixed_pane

0xdb12,	// (0x0000db12) cell_toolbar2_fixed_pane_ParamLimits

0xdb12,	// (0x0000db12) cell_toolbar2_fixed_pane

0xdb2d,	// (0x0000db2d) cell_toolbar2_fixed_pane_g1

0x8047,	// (0x00008047) toolbar2_fixed_button_pane

0x3626,	// (0x00003626) toolbar2_fixed_button_pane_g1

0x362e,	// (0x0000362e) toolbar2_fixed_button_pane_g2

0x3636,	// (0x00003636) toolbar2_fixed_button_pane_g3

0x363e,	// (0x0000363e) toolbar2_fixed_button_pane_g4

0x3646,	// (0x00003646) toolbar2_fixed_button_pane_g5

0x364e,	// (0x0000364e) toolbar2_fixed_button_pane_g6

0x3656,	// (0x00003656) toolbar2_fixed_button_pane_g7

0x365e,	// (0x0000365e) toolbar2_fixed_button_pane_g8

0x3666,	// (0x00003666) toolbar2_fixed_button_pane_g9

0x0008,

0xab98,	// (0x0000ab98) toolbar2_fixed_button_pane_g

0x804f,	// (0x0000804f) cell_toolbar2_float_pane_ParamLimits

0x804f,	// (0x0000804f) cell_toolbar2_float_pane

0x8060,	// (0x00008060) cell_toolbar2_float_pane_g1

0x8047,	// (0x00008047) toolbar2_fixed_button_pane_cp

0xd579,	// (0x0000d579) fep_vkb_accented_list_pane_ParamLimits

0xd579,	// (0x0000d579) fep_vkb_accented_list_pane

0x6cc1,	// (0x00006cc1) bg_popup_fep_shadow_pane_g9

0x257a,	// (0x0000257a) bg_popup_fep_shadow_pane_cp3

0x1629,	// (0x00001629) list_accented_list_pane

0x8069,	// (0x00008069) list_single_accented_list_pane_ParamLimits

0x8069,	// (0x00008069) list_single_accented_list_pane

0x257a,	// (0x0000257a) list_highlight_pane_cp10

0x807a,	// (0x0000807a) list_single_accented_list_pane_t1

0xc65d,	// (0x0000c65d) popup_slider_window_ParamLimits

0xc65d,	// (0x0000c65d) popup_slider_window

0x7b30,	// (0x00007b30) aid_indentation_list_msg

0xdc26,	// (0x0000dc26) bg_popup_window_pane_cp19

0x819e,	// (0x0000819e) popup_slider_window_g1

0x81ba,	// (0x000081ba) popup_slider_window_g2

0x81d6,	// (0x000081d6) popup_slider_window_g3

0x0005,

0xf054,	// (0x0000f054) popup_slider_window_g

0x8232,	// (0x00008232) popup_slider_window_t1

0x82a6,	// (0x000082a6) small_volume_slider_vertical_pane

0x64c5,	// (0x000064c5) small_volume_slider_vertical_pane_g1

0x64c5,	// (0x000064c5) small_volume_slider_vertical_pane_g2

0x82c2,	// (0x000082c2) small_volume_slider_vertical_pane_g3

0x0002,

0xb021,	// (0x0000b021) small_volume_slider_vertical_pane_g

0xb2f1,	// (0x0000b2f1) area_side_right_pane_ParamLimits

0xb2f1,	// (0x0000b2f1) area_side_right_pane

0xdcde,	// (0x0000dcde) aid_size_side_button_ParamLimits

0xdcde,	// (0x0000dcde) aid_size_side_button

0xdcf7,	// (0x0000dcf7) grid_sctrl_middle_pane_ParamLimits

0xdcf7,	// (0x0000dcf7) grid_sctrl_middle_pane

0x82ff,	// (0x000082ff) sctrl_sk_bottom_pane

0x8310,	// (0x00008310) sctrl_sk_top_pane

0x8322,	// (0x00008322) aid_touch_sctrl_top

0x0819,	// (0x00000819) bg_sctrl_sk_pane_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane

0x832f,	// (0x0000832f) sctrl_sk_top_pane_g1

0x833c,	// (0x0000833c) sctrl_sk_top_pane_t1

0x8322,	// (0x00008322) aid_touch_sctrl_bottom

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp

0x8357,	// (0x00008357) sctrl_sk_bottom_pane_g1

0x833c,	// (0x0000833c) sctrl_sk_bottom_pane_t1

0xdd11,	// (0x0000dd11) cell_sctrl_middle_pane_ParamLimits

0xdd11,	// (0x0000dd11) cell_sctrl_middle_pane

0xdd22,	// (0x0000dd22) aid_touch_sctrl_middle_ParamLimits

0xdd22,	// (0x0000dd22) aid_touch_sctrl_middle

0xdd2f,	// (0x0000dd2f) bg_sctrl_middle_pane_ParamLimits

0xdd2f,	// (0x0000dd2f) bg_sctrl_middle_pane

0x8420,	// (0x00008420) cell_sctrl_middle_pane_g1_ParamLimits

0x8420,	// (0x00008420) cell_sctrl_middle_pane_g1

0xdd3d,	// (0x0000dd3d) cell_sctrl_middle_pane_g2_ParamLimits

0xdd3d,	// (0x0000dd3d) cell_sctrl_middle_pane_g2

0x0001,

0xf061,	// (0x0000f061) cell_sctrl_middle_pane_g_ParamLimits

0xf061,	// (0x0000f061) cell_sctrl_middle_pane_g

0x3626,	// (0x00003626) bg_sctrl_middle_pane_g1

0x362e,	// (0x0000362e) bg_sctrl_middle_pane_g2

0x3636,	// (0x00003636) bg_sctrl_middle_pane_g3

0x363e,	// (0x0000363e) bg_sctrl_middle_pane_g4

0x3646,	// (0x00003646) bg_sctrl_middle_pane_g5

0x364e,	// (0x0000364e) bg_sctrl_middle_pane_g6

0x3656,	// (0x00003656) bg_sctrl_middle_pane_g7

0x365e,	// (0x0000365e) bg_sctrl_middle_pane_g8

0x0007,

0xb032,	// (0x0000b032) bg_sctrl_middle_pane_g

0x3666,	// (0x00003666) bg_sctrl_middle_pane_g8_copy1

0x3626,	// (0x00003626) bg_sctrl_sk_pane_g1

0x362e,	// (0x0000362e) bg_sctrl_sk_pane_g2

0x3636,	// (0x00003636) bg_sctrl_sk_pane_g3

0x0008,

0xab98,	// (0x0000ab98) bg_sctrl_sk_pane_g

0x0d12,	// (0x00000d12) aid_size_touch_scroll_bar

0x363e,	// (0x0000363e) bg_sctrl_sk_pane_g4

0x3646,	// (0x00003646) bg_sctrl_sk_pane_g5

0x364e,	// (0x0000364e) bg_sctrl_sk_pane_g6

0x3656,	// (0x00003656) bg_sctrl_sk_pane_g7

0x365e,	// (0x0000365e) bg_sctrl_sk_pane_g8

0x3666,	// (0x00003666) bg_sctrl_sk_pane_g9

0x2ba4,	// (0x00002ba4) popup_fep_china_hwr2_fs_candidate_window

0xc197,	// (0x0000c197) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc197,	// (0x0000c197) popup_fep_china_hwr2_fs_control_window

0x6972,	// (0x00006972) sctrl_sk_top_pane_g2

0x0001,

0xb028,	// (0x0000b028) sctrl_sk_top_pane_g

0xdd49,	// (0x0000dd49) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdd49,	// (0x0000dd49) aid_fep_china_hwr2_fs_cell

0xdd5d,	// (0x0000dd5d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdd5d,	// (0x0000dd5d) bg_popup_fep_shadow_pane_cp4

0xdd74,	// (0x0000dd74) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdd74,	// (0x0000dd74) bg_popup_fep_shadow_pane_cp5

0xdd86,	// (0x0000dd86) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdd86,	// (0x0000dd86) popup_fep_china_hwr2_fs_control_bar_grid

0xdd9a,	// (0x0000dd9a) popup_fep_china_hwr2_fs_control_funtion_grid

0x83f4,	// (0x000083f4) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x83fe,	// (0x000083fe) popup_fep_china_hwr2_fs_candidate_grid

0xdda2,	// (0x0000dda2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdda2,	// (0x0000dda2) cell_fep_china_hwr2_fs_funtion_grid

0x64c5,	// (0x000064c5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8420,	// (0x00008420) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8420,	// (0x00008420) cell_fep_china_hwr2_fs_funtion_grid_g1

0x842e,	// (0x0000842e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x842e,	// (0x0000842e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb043,	// (0x0000b043) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb043,	// (0x0000b043) cell_fep_china_hwr2_fs_funtion_grid_g

0xddba,	// (0x0000ddba) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xddba,	// (0x0000ddba) cell_fep_china_hwr2_fs_funtion_grid_t1

0xddcf,	// (0x0000ddcf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xddcf,	// (0x0000ddcf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf066,	// (0x0000f066) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf066,	// (0x0000f066) cell_fep_china_hwr2_fs_funtion_grid_t

0x8475,	// (0x00008475) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x847d,	// (0x0000847d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8485,	// (0x00008485) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb04d,	// (0x0000b04d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x848d,	// (0x0000848d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x848d,	// (0x0000848d) cell_fep_china_hwr2_fs_candidate_grid

0x84a6,	// (0x000084a6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x84ae,	// (0x000084ae) popup_fep_china_hwr2_fs_candidate_grid_g21

0x64c5,	// (0x000064c5) cell_fep_china_hwr2_fs_candidate_grid_g1

0x64c5,	// (0x000064c5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xae74,	// (0x0000ae74) cell_fep_china_hwr2_fs_candidate_grid_g

0x84b6,	// (0x000084b6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x318b,	// (0x0000318b) clock_nsta_pane_cp_24_ParamLimits

0x318b,	// (0x0000318b) clock_nsta_pane_cp_24

0x3209,	// (0x00003209) indicator_nsta_pane_cp_24_ParamLimits

0x3209,	// (0x00003209) indicator_nsta_pane_cp_24

0x464e,	// (0x0000464e) heading_pane_g1

0x0001,

0xabfd,	// (0x0000abfd) heading_pane_g

0x5264,	// (0x00005264) grid_sct_catagory_button_pane

0x5296,	// (0x00005296) scroll_pane_cp5_ParamLimits

0x6038,	// (0x00006038) button_value_adjust_pane_cp5_ParamLimits

0x6038,	// (0x00006038) button_value_adjust_pane_cp5

0x6130,	// (0x00006130) form2_midp_time_pane_ParamLimits

0x84c4,	// (0x000084c4) cell_sct_catagory_button_pane_ParamLimits

0x84c4,	// (0x000084c4) cell_sct_catagory_button_pane

0x648a,	// (0x0000648a) bg_button_pane_cp01_ParamLimits

0x648a,	// (0x0000648a) bg_button_pane_cp01

0x64c5,	// (0x000064c5) cell_sct_catagory_button_pane_g1

0xc6d6,	// (0x0000c6d6) popup_tb_extension_window

0xddeb,	// (0x0000ddeb) aid_size_cell_ext_ParamLimits

0xddeb,	// (0x0000ddeb) aid_size_cell_ext

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1_ParamLimits

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1

0xde11,	// (0x0000de11) grid_tb_ext_pane_ParamLimits

0xde11,	// (0x0000de11) grid_tb_ext_pane

0xde51,	// (0x0000de51) cell_tb_ext_pane_ParamLimits

0xde51,	// (0x0000de51) cell_tb_ext_pane

0xde79,	// (0x0000de79) cell_tb_ext_pane_g1_ParamLimits

0xde79,	// (0x0000de79) cell_tb_ext_pane_g1

0x855c,	// (0x0000855c) cell_tb_ext_pane_t1

0x0819,	// (0x00000819) list_highlight_pane_cp11_ParamLimits

0x0819,	// (0x00000819) list_highlight_pane_cp11

0x0354,	// (0x00000354) popup_uni_indicator_window_ParamLimits

0x0354,	// (0x00000354) popup_uni_indicator_window

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14

0x8577,	// (0x00008577) list_uniindi_pane

0x8583,	// (0x00008583) uniindi_top_pane

0x0819,	// (0x00000819) bg_uniindi_top_pane

0x85a2,	// (0x000085a2) uniindi_top_pane_g1

0x85b8,	// (0x000085b8) uniindi_top_pane_g2

0x0003,

0xb054,	// (0x0000b054) uniindi_top_pane_g

0x85e2,	// (0x000085e2) uniindi_top_pane_t1

0x860c,	// (0x0000860c) list_single_uniindi_pane_ParamLimits

0x860c,	// (0x0000860c) list_single_uniindi_pane

0x64c5,	// (0x000064c5) bg_uniindi_top_pane_g1

0x861e,	// (0x0000861e) list_single_uniindi_pane_g1

0x8631,	// (0x00008631) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8656,	// (0x00008656) bg_sctrl_sk_pane_cp1

0x865f,	// (0x0000865f) bg_sctrl_sk_pane_cp2

0x8668,	// (0x00008668) control_bg_pane_g1

0x8671,	// (0x00008671) control_bg_pane_g2

0x0001,

0xb05d,	// (0x0000b05d) control_bg_pane_g

0x5e13,	// (0x00005e13) cell_indicator_nsta_pane_g1_ParamLimits

0xd377,	// (0x0000d377) cell_indicator_nsta_pane_g2_ParamLimits

0xefe3,	// (0x0000efe3) cell_indicator_nsta_pane_g_ParamLimits

0x61b4,	// (0x000061b4) form2_midp_time_pane_t1_ParamLimits

0x6535,	// (0x00006535) main_idle_act4_pane_ParamLimits

0x6535,	// (0x00006535) main_idle_act4_pane

0xc6d6,	// (0x0000c6d6) popup_tb_extension_window_ParamLimits

0xde38,	// (0x0000de38) tb_ext_find_pane_ParamLimits

0xde38,	// (0x0000de38) tb_ext_find_pane

0x867a,	// (0x0000867a) ai_gene_pane_1_cp1

0x26c3,	// (0x000026c3) ai_gene_pane_2_cp1

0x8682,	// (0x00008682) list_single_idle_plugin_calendar_pane

0x868b,	// (0x0000868b) list_single_idle_plugin_notification_pane

0x8694,	// (0x00008694) list_single_idle_plugin_player_pane

0xde96,	// (0x0000de96) list_single_idle_plugin_shortcut_pane_ParamLimits

0xde96,	// (0x0000de96) list_single_idle_plugin_shortcut_pane

0xdebe,	// (0x0000debe) main_idle_act4_pane_t1

0xded4,	// (0x0000ded4) main_idle_act4_pane_t2

0x0001,

0xf06b,	// (0x0000f06b) main_idle_act4_pane_t

0xdeec,	// (0x0000deec) middle_sk_idle_act4_pane_ParamLimits

0xdeec,	// (0x0000deec) middle_sk_idle_act4_pane

0xdf08,	// (0x0000df08) popup_clock_digital_analogue_window_cp2

0xdf2f,	// (0x0000df2f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdf2f,	// (0x0000df2f) shortcut_wheel_idle_act4_pane

0x64c5,	// (0x000064c5) shortcut_wheel_idle_act4_pane_g1

0x64c5,	// (0x000064c5) shortcut_wheel_idle_act4_pane_g2

0x64c5,	// (0x000064c5) shortcut_wheel_idle_act4_pane_g3

0x64c5,	// (0x000064c5) shortcut_wheel_idle_act4_pane_g4

0x64c5,	// (0x000064c5) shortcut_wheel_idle_act4_pane_g5

0x8727,	// (0x00008727) shortcut_wheel_idle_act4_pane_g6

0x872f,	// (0x0000872f) shortcut_wheel_idle_act4_pane_g7

0x8737,	// (0x00008737) shortcut_wheel_idle_act4_pane_g8

0x873f,	// (0x0000873f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb067,	// (0x0000b067) shortcut_wheel_idle_act4_pane_g

0x65ea,	// (0x000065ea) middle_sk_idle_act4_pane_g1_ParamLimits

0x65ea,	// (0x000065ea) middle_sk_idle_act4_pane_g1

0xdfac,	// (0x0000dfac) middle_sk_idle_act4_pane_g2_ParamLimits

0xdfac,	// (0x0000dfac) middle_sk_idle_act4_pane_g2

0x0001,

0xf080,	// (0x0000f080) middle_sk_idle_act4_pane_g_ParamLimits

0xf080,	// (0x0000f080) middle_sk_idle_act4_pane_g

0xdfc4,	// (0x0000dfc4) middle_sk_idle_act4_pane_t1_ParamLimits

0xdfc4,	// (0x0000dfc4) middle_sk_idle_act4_pane_t1

0xdff3,	// (0x0000dff3) grid_ai_shortcut_pane_ParamLimits

0xdff3,	// (0x0000dff3) grid_ai_shortcut_pane

0xe010,	// (0x0000e010) list_highlight_pane_cp16_ParamLimits

0xe010,	// (0x0000e010) list_highlight_pane_cp16

0xe01d,	// (0x0000e01d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe01d,	// (0x0000e01d) list_single_idle_plugin_shortcut_pane_g1

0xe029,	// (0x0000e029) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe029,	// (0x0000e029) list_single_idle_plugin_shortcut_pane_g2

0xe045,	// (0x0000e045) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe045,	// (0x0000e045) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf085,	// (0x0000f085) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf085,	// (0x0000f085) list_single_idle_plugin_shortcut_pane_g

0xe05a,	// (0x0000e05a) cell_ai_shortcut_pane_ParamLimits

0xe05a,	// (0x0000e05a) cell_ai_shortcut_pane

0xe070,	// (0x0000e070) cell_ai_shortcut_pane_g1_ParamLimits

0xe070,	// (0x0000e070) cell_ai_shortcut_pane_g1

0x867a,	// (0x0000867a) ai_gene_pane_1_cp2

0x886c,	// (0x0000886c) ai_gene_pane_2_cp2

0x8874,	// (0x00008874) list_highlight_pane_cp15

0x887d,	// (0x0000887d) list_single_idle_plugin_calendar_pane_g1

0x8874,	// (0x00008874) list_highlight_pane_cp17

0x8885,	// (0x00008885) list_single_idle_plugin_calendar_pane_g1_copy1

0x888d,	// (0x0000888d) list_single_idle_plugin_player_pane_g1

0x5575,	// (0x00005575) list_single_idle_plugin_player_pane_g2

0x0001,

0xb096,	// (0x0000b096) list_single_idle_plugin_player_pane_g

0x8895,	// (0x00008895) list_single_idle_plugin_player_pane_t1

0x88a3,	// (0x000088a3) list_single_idle_plugin_player_pane_t2

0x88b1,	// (0x000088b1) list_single_idle_plugin_player_pane_t3

0x88bf,	// (0x000088bf) list_single_idle_plugin_player_pane_t4

0x0003,

0xb09b,	// (0x0000b09b) list_single_idle_plugin_player_pane_t

0x88cd,	// (0x000088cd) wait_bar_pane_cp15

0x88d5,	// (0x000088d5) grid_ai_notification_pane

0x5575,	// (0x00005575) list_single_idle_plugin_notification_pane_g1

0xe092,	// (0x0000e092) cell_ai_notification_pane_ParamLimits

0xe092,	// (0x0000e092) cell_ai_notification_pane

0x88eb,	// (0x000088eb) cell_ai_notification_pane_g1

0x88f3,	// (0x000088f3) cell_ai_notification_pane_t1

0xe09f,	// (0x0000e09f) tb_ext_find_button_pane

0xe0a7,	// (0x0000e0a7) tb_ext_find_pane_g1

0xe0af,	// (0x0000e0af) tb_ext_find_pane_t1

0x1cf5,	// (0x00001cf5) tb_ext_find_button_pane_g1

0x891f,	// (0x0000891f) tb_ext_find_button_pane_g2

0x0001,

0xb0a4,	// (0x0000b0a4) tb_ext_find_button_pane_g

0xdebe,	// (0x0000debe) main_idle_act4_pane_t1_ParamLimits

0xded4,	// (0x0000ded4) main_idle_act4_pane_t2_ParamLimits

0xf06b,	// (0x0000f06b) main_idle_act4_pane_t_ParamLimits

0xdf08,	// (0x0000df08) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdf1f,	// (0x0000df1f) sat_plugin_idle_act4_pane_ParamLimits

0xdf1f,	// (0x0000df1f) sat_plugin_idle_act4_pane

0xe0bd,	// (0x0000e0bd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe0bd,	// (0x0000e0bd) sat_plugin_idle_act4_pane_t1

0xe0d5,	// (0x0000e0d5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe0d5,	// (0x0000e0d5) sat_plugin_idle_act4_pane_t2

0xe0ed,	// (0x0000e0ed) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe0ed,	// (0x0000e0ed) sat_plugin_idle_act4_pane_t3

0xe105,	// (0x0000e105) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe105,	// (0x0000e105) sat_plugin_idle_act4_pane_t4

0x0003,

0xf08c,	// (0x0000f08c) sat_plugin_idle_act4_pane_t_ParamLimits

0xf08c,	// (0x0000f08c) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25_ParamLimits

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25

0x8974,	// (0x00008974) popup_battery_window_g1_ParamLimits

0x8974,	// (0x00008974) popup_battery_window_g1

0x8980,	// (0x00008980) popup_battery_window_t1_ParamLimits

0x8980,	// (0x00008980) popup_battery_window_t1

0x8992,	// (0x00008992) popup_battery_window_t2_ParamLimits

0x8992,	// (0x00008992) popup_battery_window_t2

0x0001,

0xb0b2,	// (0x0000b0b2) popup_battery_window_t_ParamLimits

0xb0b2,	// (0x0000b0b2) popup_battery_window_t

0xbed2,	// (0x0000bed2) midp_canvas_pane_ParamLimits

0xbf2f,	// (0x0000bf2f) midp_keypad_pane_ParamLimits

0xbf2f,	// (0x0000bf2f) midp_keypad_pane

0x2afc,	// (0x00002afc) main_midp_pane_ParamLimits

0x5e9f,	// (0x00005e9f) signal_pane_g2_cp_ParamLimits

0xe11d,	// (0x0000e11d) aid_size_cell_midp_keypad_ParamLimits

0xe11d,	// (0x0000e11d) aid_size_cell_midp_keypad

0xe13b,	// (0x0000e13b) midp_keyp_game_grid_pane_ParamLimits

0xe13b,	// (0x0000e13b) midp_keyp_game_grid_pane

0xe162,	// (0x0000e162) midp_keyp_rocker_pane_ParamLimits

0xe162,	// (0x0000e162) midp_keyp_rocker_pane

0xe1bb,	// (0x0000e1bb) midp_keyp_sk_left_pane_ParamLimits

0xe1bb,	// (0x0000e1bb) midp_keyp_sk_left_pane

0xe20f,	// (0x0000e20f) midp_keyp_sk_right_pane_ParamLimits

0xe20f,	// (0x0000e20f) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe263,	// (0x0000e263) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe263,	// (0x0000e263) midp_keyp_sk_right_pane_g1

0x64c5,	// (0x000064c5) midp_keyp_rocker_pane_g1

0xe26c,	// (0x0000e26c) keyp_game_cell_pane_ParamLimits

0xe26c,	// (0x0000e26c) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe290,	// (0x0000e290) keyp_game_cell_pane_g1

0xb333,	// (0x0000b333) popup_fep_vkb2_window_ParamLimits

0xb333,	// (0x0000b333) popup_fep_vkb2_window

0xe299,	// (0x0000e299) aid_size_cell_vkb2_ParamLimits

0xe299,	// (0x0000e299) aid_size_cell_vkb2

0xe2cf,	// (0x0000e2cf) popup_fep_vkb2_window_g1_ParamLimits

0xe2cf,	// (0x0000e2cf) popup_fep_vkb2_window_g1

0xe316,	// (0x0000e316) vkb2_area_bottom_pane_ParamLimits

0xe316,	// (0x0000e316) vkb2_area_bottom_pane

0xe36a,	// (0x0000e36a) vkb2_area_keypad_pane_ParamLimits

0xe36a,	// (0x0000e36a) vkb2_area_keypad_pane

0xe3b2,	// (0x0000e3b2) vkb2_area_top_pane_ParamLimits

0xe3b2,	// (0x0000e3b2) vkb2_area_top_pane

0xe438,	// (0x0000e438) vkb2_top_entry_pane_ParamLimits

0xe438,	// (0x0000e438) vkb2_top_entry_pane

0xe465,	// (0x0000e465) vkb2_top_grid_left_pane_ParamLimits

0xe465,	// (0x0000e465) vkb2_top_grid_left_pane

0xe485,	// (0x0000e485) vkb2_top_grid_right_pane_ParamLimits

0xe485,	// (0x0000e485) vkb2_top_grid_right_pane

0x8d0b,	// (0x00008d0b) vkb2_cell_keypad_pane_ParamLimits

0x8d0b,	// (0x00008d0b) vkb2_cell_keypad_pane

0xe4cb,	// (0x0000e4cb) vkb2_area_bottom_grid_pane_ParamLimits

0xe4cb,	// (0x0000e4cb) vkb2_area_bottom_grid_pane

0xe4f5,	// (0x0000e4f5) vkb2_area_bottom_pane_g1_ParamLimits

0xe4f5,	// (0x0000e4f5) vkb2_area_bottom_pane_g1

0xe51b,	// (0x0000e51b) vkb2_area_bottom_pane_g2_ParamLimits

0xe51b,	// (0x0000e51b) vkb2_area_bottom_pane_g2

0xe54c,	// (0x0000e54c) vkb2_area_bottom_pane_g3_ParamLimits

0xe54c,	// (0x0000e54c) vkb2_area_bottom_pane_g3

0x0002,

0xf095,	// (0x0000f095) vkb2_area_bottom_pane_g_ParamLimits

0xf095,	// (0x0000f095) vkb2_area_bottom_pane_g

0x8eb5,	// (0x00008eb5) vkb2_top_cell_left_pane_ParamLimits

0x8eb5,	// (0x00008eb5) vkb2_top_cell_left_pane

0xe5b6,	// (0x0000e5b6) vkb2_top_entry_pane_g1_ParamLimits

0xe5b6,	// (0x0000e5b6) vkb2_top_entry_pane_g1

0xe5c4,	// (0x0000e5c4) vkb2_top_entry_pane_t1_ParamLimits

0xe5c4,	// (0x0000e5c4) vkb2_top_entry_pane_t1

0x8f1d,	// (0x00008f1d) vkb2_top_entry_pane_t2_ParamLimits

0x8f1d,	// (0x00008f1d) vkb2_top_entry_pane_t2

0x8f4f,	// (0x00008f4f) vkb2_top_entry_pane_t3_ParamLimits

0x8f4f,	// (0x00008f4f) vkb2_top_entry_pane_t3

0x0002,

0xf09c,	// (0x0000f09c) vkb2_top_entry_pane_t_ParamLimits

0xf09c,	// (0x0000f09c) vkb2_top_entry_pane_t

0xe5fd,	// (0x0000e5fd) vkb2_top_grid_right_pane_g1_ParamLimits

0xe5fd,	// (0x0000e5fd) vkb2_top_grid_right_pane_g1

0x8fb6,	// (0x00008fb6) vkb2_top_grid_right_pane_g2_ParamLimits

0x8fb6,	// (0x00008fb6) vkb2_top_grid_right_pane_g2

0x8fce,	// (0x00008fce) vkb2_top_grid_right_pane_g3_ParamLimits

0x8fce,	// (0x00008fce) vkb2_top_grid_right_pane_g3

0xe613,	// (0x0000e613) vkb2_top_grid_right_pane_g4_ParamLimits

0xe613,	// (0x0000e613) vkb2_top_grid_right_pane_g4

0x0003,

0xf0a3,	// (0x0000f0a3) vkb2_top_grid_right_pane_g_ParamLimits

0xf0a3,	// (0x0000f0a3) vkb2_top_grid_right_pane_g

0x8ffc,	// (0x00008ffc) vkb2_top_cell_left_pane_g1

0x9013,	// (0x00009013) vkb2_cell_keypad_pane_g1_ParamLimits

0x9013,	// (0x00009013) vkb2_cell_keypad_pane_g1

0x9021,	// (0x00009021) vkb2_cell_keypad_pane_t1_ParamLimits

0x9021,	// (0x00009021) vkb2_cell_keypad_pane_t1

0x9038,	// (0x00009038) vkb2_cell_bottom_grid_pane_ParamLimits

0x9038,	// (0x00009038) vkb2_cell_bottom_grid_pane

0x9071,	// (0x00009071) vkb2_cell_bottom_grid_pane_g1

0xdf50,	// (0x0000df50) aid_call2_pane_cp02

0xdf58,	// (0x0000df58) aid_call_pane_cp02

0xdf60,	// (0x0000df60) clock_digital_number_pane_cp10

0xdf68,	// (0x0000df68) clock_digital_number_pane_cp11

0xdf70,	// (0x0000df70) clock_digital_number_pane_cp12

0xdf78,	// (0x0000df78) clock_digital_number_pane_cp13

0xdf80,	// (0x0000df80) clock_digital_separator_pane_cp10

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g1

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g2

0xdf88,	// (0x0000df88) popup_clock_digital_analogue_window_cp2_g3

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g4

0xdf88,	// (0x0000df88) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf070,	// (0x0000f070) popup_clock_digital_analogue_window_cp2_g

0xdf90,	// (0x0000df90) popup_clock_digital_analogue_window_cp2_t1

0xdf9e,	// (0x0000df9e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf07b,	// (0x0000f07b) popup_clock_digital_analogue_window_cp2_t

0x64c5,	// (0x000064c5) clock_digital_number_pane_cp10_g1

0x64c5,	// (0x000064c5) clock_digital_number_pane_cp10_g2

0x0001,

0xae74,	// (0x0000ae74) clock_digital_number_pane_cp10_g

0x64c5,	// (0x000064c5) clock_digital_separator_pane_cp10_g1

0x64c5,	// (0x000064c5) clock_digital_separator_pane_cp10_g2

0x0001,

0xae74,	// (0x0000ae74) clock_digital_separator_pane_cp10_g

0x85c4,	// (0x000085c4) uniindi_top_pane_g3

0x85d5,	// (0x000085d5) uniindi_top_pane_g4

0x8d96,	// (0x00008d96) vkb2_row_keypad_pane_ParamLimits

0x8d96,	// (0x00008d96) vkb2_row_keypad_pane

0x9091,	// (0x00009091) vkb2_cell_t_keypad_pane_ParamLimits

0x9091,	// (0x00009091) vkb2_cell_t_keypad_pane

0x90a1,	// (0x000090a1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x90a1,	// (0x000090a1) vkb2_cell_t_keypad_pane_cp08

0x90b4,	// (0x000090b4) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x90b4,	// (0x000090b4) vkb2_cell_t_keypad_pane_cp09

0x90c8,	// (0x000090c8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x90c8,	// (0x000090c8) vkb2_cell_t_keypad_pane_cp01

0x90d9,	// (0x000090d9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90d9,	// (0x000090d9) vkb2_cell_t_keypad_pane_cp02

0x90ea,	// (0x000090ea) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x90ea,	// (0x000090ea) vkb2_cell_t_keypad_pane_cp03

0x90fb,	// (0x000090fb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x90fb,	// (0x000090fb) vkb2_cell_t_keypad_pane_cp04

0x910c,	// (0x0000910c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x910c,	// (0x0000910c) vkb2_cell_t_keypad_pane_cp05

0x911d,	// (0x0000911d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x911d,	// (0x0000911d) vkb2_cell_t_keypad_pane_cp06

0x912e,	// (0x0000912e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x912e,	// (0x0000912e) vkb2_cell_t_keypad_pane_cp07

0x913f,	// (0x0000913f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x913f,	// (0x0000913f) vkb2_cell_t_keypad_pane_cp10

0x6972,	// (0x00006972) vkb2_cell_t_keypad_pane_g1

0x9154,	// (0x00009154) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe629,	// (0x0000e629) aid_size_cell_graphic2_ParamLimits

0xe629,	// (0x0000e629) aid_size_cell_graphic2

0x3e7b,	// (0x00003e7b) bg_popup_window_pane_cp21_ParamLimits

0x3e7b,	// (0x00003e7b) bg_popup_window_pane_cp21

0xe65b,	// (0x0000e65b) graphic2_pages_pane_ParamLimits

0xe65b,	// (0x0000e65b) graphic2_pages_pane

0xe6b1,	// (0x0000e6b1) grid_graphic2_control_pane_ParamLimits

0xe6b1,	// (0x0000e6b1) grid_graphic2_control_pane

0xe6e5,	// (0x0000e6e5) grid_graphic2_pane_ParamLimits

0xe6e5,	// (0x0000e6e5) grid_graphic2_pane

0xe758,	// (0x0000e758) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7cee,	// (0x00007cee) list_ai3_gene_pane_ParamLimits

0xdc26,	// (0x0000dc26) bg_popup_window_pane_cp19_ParamLimits

0x8140,	// (0x00008140) bg_touch_area_indi_pane_ParamLimits

0x8140,	// (0x00008140) bg_touch_area_indi_pane

0x8156,	// (0x00008156) bg_touch_area_indi_pane_cp01_ParamLimits

0x8156,	// (0x00008156) bg_touch_area_indi_pane_cp01

0x816c,	// (0x0000816c) bg_touch_area_indi_pane_cp02_ParamLimits

0x816c,	// (0x0000816c) bg_touch_area_indi_pane_cp02

0x8184,	// (0x00008184) bg_touch_area_indi_pane_cp03_ParamLimits

0x8184,	// (0x00008184) bg_touch_area_indi_pane_cp03

0x819e,	// (0x0000819e) popup_slider_window_g1_ParamLimits

0x81ba,	// (0x000081ba) popup_slider_window_g2_ParamLimits

0x81d6,	// (0x000081d6) popup_slider_window_g3_ParamLimits

0xf054,	// (0x0000f054) popup_slider_window_g_ParamLimits

0x8232,	// (0x00008232) popup_slider_window_t1_ParamLimits

0x82a6,	// (0x000082a6) small_volume_slider_vertical_pane_ParamLimits

0xe758,	// (0x0000e758) cell_graphic2_pane_ParamLimits

0xe7b3,	// (0x0000e7b3) bg_button_pane_cp10_ParamLimits

0xe7b3,	// (0x0000e7b3) bg_button_pane_cp10

0xe7c6,	// (0x0000e7c6) bg_button_pane_cp11_ParamLimits

0xe7c6,	// (0x0000e7c6) bg_button_pane_cp11

0xe7d9,	// (0x0000e7d9) graphic2_pages_pane_g1_ParamLimits

0xe7d9,	// (0x0000e7d9) graphic2_pages_pane_g1

0xe7f4,	// (0x0000e7f4) graphic2_pages_pane_g2_ParamLimits

0xe7f4,	// (0x0000e7f4) graphic2_pages_pane_g2

0x0001,

0xf0b1,	// (0x0000f0b1) graphic2_pages_pane_g_ParamLimits

0xf0b1,	// (0x0000f0b1) graphic2_pages_pane_g

0xe80c,	// (0x0000e80c) graphic2_pages_pane_t1_ParamLimits

0xe80c,	// (0x0000e80c) graphic2_pages_pane_t1

0xe824,	// (0x0000e824) cell_graphic2_control_pane_ParamLimits

0xe824,	// (0x0000e824) cell_graphic2_control_pane

0xe83e,	// (0x0000e83e) cell_graphic2_pane_g1_ParamLimits

0xe83e,	// (0x0000e83e) cell_graphic2_pane_g1

0x6785,	// (0x00006785) cell_graphic2_pane_g2_ParamLimits

0x6785,	// (0x00006785) cell_graphic2_pane_g2

0xe84b,	// (0x0000e84b) cell_graphic2_pane_g3_ParamLimits

0xe84b,	// (0x0000e84b) cell_graphic2_pane_g3

0x6792,	// (0x00006792) cell_graphic2_pane_g4_ParamLimits

0x6792,	// (0x00006792) cell_graphic2_pane_g4

0xe858,	// (0x0000e858) cell_graphic2_pane_g5_ParamLimits

0xe858,	// (0x0000e858) cell_graphic2_pane_g5

0x0004,

0xf0b6,	// (0x0000f0b6) cell_graphic2_pane_g_ParamLimits

0xf0b6,	// (0x0000f0b6) cell_graphic2_pane_g

0xe878,	// (0x0000e878) cell_graphic2_pane_t1_ParamLimits

0xe878,	// (0x0000e878) cell_graphic2_pane_t1

0x4642,	// (0x00004642) grid_highlight_pane_cp11_ParamLimits

0x4642,	// (0x00004642) grid_highlight_pane_cp11

0x134f,	// (0x0000134f) bg_button_pane_cp05

0xe8ad,	// (0x0000e8ad) cell_graphic2_control_pane_g1

0x64c5,	// (0x000064c5) bg_touch_area_indi_pane_g1

0x93c3,	// (0x000093c3) aid_cmod_rocker_key_size

0x93cd,	// (0x000093cd) aid_cmode_itu_key_size

0x93d7,	// (0x000093d7) main_cmode_video_pane

0x93e1,	// (0x000093e1) main_comp_mode_itu_pane

0x93ed,	// (0x000093ed) main_comp_mode_rocker_pane

0x93f9,	// (0x000093f9) cell_cmode_rocker_pane_ParamLimits

0x93f9,	// (0x000093f9) cell_cmode_rocker_pane

0x940b,	// (0x0000940b) cell_cmode_itu_pane_ParamLimits

0x940b,	// (0x0000940b) cell_cmode_itu_pane

0x134f,	// (0x0000134f) bg_button_pane_cp06_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06

0x6972,	// (0x00006972) cell_cmode_rocker_pane_g1_ParamLimits

0x6972,	// (0x00006972) cell_cmode_rocker_pane_g1

0x8420,	// (0x00008420) cell_cmode_rocker_pane_g2_ParamLimits

0x8420,	// (0x00008420) cell_cmode_rocker_pane_g2

0x0001,

0xb0e8,	// (0x0000b0e8) cell_cmode_rocker_pane_g_ParamLimits

0xb0e8,	// (0x0000b0e8) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9420,	// (0x00009420) cell_cmode_itu_pane_g1

0x9429,	// (0x00009429) cell_cmode_itu_pane_t1

0x9437,	// (0x00009437) cell_cmode_itu_pane_t2

0x0001,

0xb0ed,	// (0x0000b0ed) cell_cmode_itu_pane_t

0x8646,	// (0x00008646) aid_touch_ctrl_left

0x864e,	// (0x0000864e) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xe8ba,	// (0x0000e8ba) aid_cmod_rocker_key_size_cp

0xe8c4,	// (0x0000e8c4) aid_cmode_itu_key_size_cp

0x9459,	// (0x00009459) compa_mode_pane_g1

0x9461,	// (0x00009461) compa_mode_pane_g2

0x9469,	// (0x00009469) compa_mode_pane_g3

0x0002,

0xb0f2,	// (0x0000b0f2) compa_mode_pane_g

0xe8ce,	// (0x0000e8ce) main_comp_mode_itu_pane_cp

0xe8d6,	// (0x0000e8d6) main_comp_mode_rocker_pane_cp

0xe8de,	// (0x0000e8de) cell_cmode_itu_pane_cp_ParamLimits

0xe8de,	// (0x0000e8de) cell_cmode_itu_pane_cp

0xe8f3,	// (0x0000e8f3) cell_cmode_rocker_pane_cp_ParamLimits

0xe8f3,	// (0x0000e8f3) cell_cmode_rocker_pane_cp

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp

0x6972,	// (0x00006972) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6972,	// (0x00006972) cell_cmode_rocker_pane_g1_cp

0x64c5,	// (0x000064c5) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xe905,	// (0x0000e905) cell_cmode_itu_pane_g1_cp

0xe90e,	// (0x0000e90e) cell_cmode_itu_pane_t1_cp

0xe90e,	// (0x0000e90e) cell_cmode_itu_pane_t2_cp

0xd17f,	// (0x0000d17f) settings_code_pane_cp2

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3_ParamLimits

0x09e7,	// (0x000009e7) heading_pane_cp3_ParamLimits

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane_ParamLimits

0x6543,	// (0x00006543) fep_hwr_aid_pane_ParamLimits

0x8322,	// (0x00008322) aid_touch_sctrl_top_ParamLimits

0x832f,	// (0x0000832f) sctrl_sk_top_pane_g1_ParamLimits

0x6972,	// (0x00006972) sctrl_sk_top_pane_g2_ParamLimits

0xb028,	// (0x0000b028) sctrl_sk_top_pane_g_ParamLimits

0x833c,	// (0x0000833c) sctrl_sk_top_pane_t1_ParamLimits

0x8322,	// (0x00008322) aid_touch_sctrl_bottom_ParamLimits

0x833c,	// (0x0000833c) sctrl_sk_bottom_pane_t1_ParamLimits

0x8590,	// (0x00008590) aid_area_touch_clock

0xe3fa,	// (0x0000e3fa) aid_vkb2_area_top_pane_cell_ParamLimits

0xe3fa,	// (0x0000e3fa) aid_vkb2_area_top_pane_cell

0xe4a5,	// (0x0000e4a5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe4a5,	// (0x0000e4a5) aid_vkb2_area_bottom_pane_cell

0x8ed5,	// (0x00008ed5) popup_char_count_window

0x94bf,	// (0x000094bf) popup_char_count_window_g1

0x94c8,	// (0x000094c8) popup_char_count_window_g2

0x94d1,	// (0x000094d1) popup_char_count_window_g3

0x0002,

0xb0f9,	// (0x0000b0f9) popup_char_count_window_g

0x94da,	// (0x000094da) popup_char_count_window_t1

0x8b3b,	// (0x00008b3b) popup_fep_char_preview_window_ParamLimits

0x8b3b,	// (0x00008b3b) popup_fep_char_preview_window

0xe41a,	// (0x0000e41a) vkb2_top_candi_pane_ParamLimits

0xe41a,	// (0x0000e41a) vkb2_top_candi_pane

0xe91c,	// (0x0000e91c) cell_vkb2_top_candi_pane_ParamLimits

0xe91c,	// (0x0000e91c) cell_vkb2_top_candi_pane

0x3e7b,	// (0x00003e7b) bg_popup_fep_char_preview_window_ParamLimits

0x3e7b,	// (0x00003e7b) bg_popup_fep_char_preview_window

0x9535,	// (0x00009535) popup_fep_char_preview_window_t1_ParamLimits

0x9535,	// (0x00009535) popup_fep_char_preview_window_t1

0x956f,	// (0x0000956f) bg_popup_fep_char_preview_window_g1

0x9577,	// (0x00009577) bg_popup_fep_char_preview_window_g2

0x957f,	// (0x0000957f) bg_popup_fep_char_preview_window_g3

0x9587,	// (0x00009587) bg_popup_fep_char_preview_window_g4

0x958f,	// (0x0000958f) bg_popup_fep_char_preview_window_g5

0x9597,	// (0x00009597) bg_popup_fep_char_preview_window_g6

0x959f,	// (0x0000959f) bg_popup_fep_char_preview_window_g7

0x95a7,	// (0x000095a7) bg_popup_fep_char_preview_window_g8

0x95af,	// (0x000095af) bg_popup_fep_char_preview_window_g9

0x0008,

0xb100,	// (0x0000b100) bg_popup_fep_char_preview_window_g

0x6972,	// (0x00006972) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6972,	// (0x00006972) cell_vkb2_top_candi_pane_g1

0x6ce5,	// (0x00006ce5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6ce5,	// (0x00006ce5) cell_vkb2_top_candi_pane_g2

0x6d06,	// (0x00006d06) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d06,	// (0x00006d06) cell_vkb2_top_candi_pane_g3

0x95b7,	// (0x000095b7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x95b7,	// (0x000095b7) cell_vkb2_top_candi_pane_g4

0x95d8,	// (0x000095d8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x95d8,	// (0x000095d8) cell_vkb2_top_candi_pane_g5

0x8420,	// (0x00008420) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8420,	// (0x00008420) cell_vkb2_top_candi_pane_g6

0x0005,

0xb113,	// (0x0000b113) cell_vkb2_top_candi_pane_g_ParamLimits

0xb113,	// (0x0000b113) cell_vkb2_top_candi_pane_g

0x95f9,	// (0x000095f9) cell_vkb2_top_candi_pane_t1

0x4d84,	// (0x00004d84) aid_size_touch_slider_mark_ParamLimits

0x4d84,	// (0x00004d84) aid_size_touch_slider_mark

0xe697,	// (0x0000e697) grid_graphic2_catg_pane_ParamLimits

0xe697,	// (0x0000e697) grid_graphic2_catg_pane

0xe72b,	// (0x0000e72b) popup_grid_graphic2_window_t1_ParamLimits

0xe72b,	// (0x0000e72b) popup_grid_graphic2_window_t1

0xe741,	// (0x0000e741) popup_grid_graphic2_window_t2_ParamLimits

0xe741,	// (0x0000e741) popup_grid_graphic2_window_t2

0x0001,

0xf0ac,	// (0x0000f0ac) popup_grid_graphic2_window_t_ParamLimits

0xf0ac,	// (0x0000f0ac) popup_grid_graphic2_window_t

0x134f,	// (0x0000134f) bg_button_pane_cp05_ParamLimits

0xe8ad,	// (0x0000e8ad) cell_graphic2_control_pane_g1_ParamLimits

0xe982,	// (0x0000e982) cell_graphic2_catg_pane_ParamLimits

0xe982,	// (0x0000e982) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xe994,	// (0x0000e994) cell_graphic2_catg_pane_g1

0x855c,	// (0x0000855c) cell_tb_ext_pane_t1_ParamLimits

0x8f73,	// (0x00008f73) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f73,	// (0x00008f73) vkb2_top_cell_right_narrow_pane

0x8f8b,	// (0x00008f8b) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f8b,	// (0x00008f8b) vkb2_top_cell_right_wide_pane

0x6535,	// (0x00006535) bg_vkb2_func_pane_ParamLimits

0x6535,	// (0x00006535) bg_vkb2_func_pane

0x8ffc,	// (0x00008ffc) vkb2_top_cell_left_pane_g1_ParamLimits

0x6535,	// (0x00006535) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6535,	// (0x00006535) bg_vkb2_fuc_pane_cp03

0x9071,	// (0x00009071) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x362e,	// (0x0000362e) bg_vkb2_func_pane_g1

0x3636,	// (0x00003636) bg_vkb2_func_pane_g2

0x3646,	// (0x00003646) bg_vkb2_func_pane_g3

0x363e,	// (0x0000363e) bg_vkb2_func_pane_g4

0x364e,	// (0x0000364e) bg_vkb2_func_pane_g5

0x3656,	// (0x00003656) bg_vkb2_func_pane_g6

0x365e,	// (0x0000365e) bg_vkb2_func_pane_g7

0x3666,	// (0x00003666) bg_vkb2_func_pane_g8

0x3626,	// (0x00003626) bg_vkb2_func_pane_g9

0x0008,

0xb120,	// (0x0000b120) bg_vkb2_func_pane_g

0x6535,	// (0x00006535) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6535,	// (0x00006535) bg_vkb2_fuc_pane_cp01

0x8ffc,	// (0x00008ffc) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8ffc,	// (0x00008ffc) vkb2_top_cell_right_wide_pane_g1

0x6535,	// (0x00006535) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6535,	// (0x00006535) bg_vkb2_fuc_pane_cp02

0x9071,	// (0x00009071) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9071,	// (0x00009071) vkb2_top_cell_right_narrow_pane_g1

0xdb60,	// (0x0000db60) aid_touch_area_decrease_ParamLimits

0xdb60,	// (0x0000db60) aid_touch_area_decrease

0xdb9a,	// (0x0000db9a) aid_touch_area_increase_ParamLimits

0xdb9a,	// (0x0000db9a) aid_touch_area_increase

0xdbc2,	// (0x0000dbc2) aid_touch_area_mute_ParamLimits

0xdbc2,	// (0x0000dbc2) aid_touch_area_mute

0xdbf2,	// (0x0000dbf2) aid_touch_area_slider_ParamLimits

0xdbf2,	// (0x0000dbf2) aid_touch_area_slider

0xdc32,	// (0x0000dc32) popup_slider_window_g4_ParamLimits

0xdc32,	// (0x0000dc32) popup_slider_window_g4

0xdc5a,	// (0x0000dc5a) popup_slider_window_g5_ParamLimits

0xdc5a,	// (0x0000dc5a) popup_slider_window_g5

0xdc8e,	// (0x0000dc8e) popup_slider_window_g6_ParamLimits

0xdc8e,	// (0x0000dc8e) popup_slider_window_g6

0x8260,	// (0x00008260) popup_slider_window_t2_ParamLimits

0x8260,	// (0x00008260) popup_slider_window_t2

0x0001,

0xb01c,	// (0x0000b01c) popup_slider_window_t_ParamLimits

0xb01c,	// (0x0000b01c) popup_slider_window_t

0xdcaa,	// (0x0000dcaa) slider_pane_ParamLimits

0xdcaa,	// (0x0000dcaa) slider_pane

0x9633,	// (0x00009633) slider_pane_g1_ParamLimits

0x9633,	// (0x00009633) slider_pane_g1

0x9647,	// (0x00009647) slider_pane_g2_ParamLimits

0x9647,	// (0x00009647) slider_pane_g2

0x965d,	// (0x0000965d) slider_pane_g3_ParamLimits

0x965d,	// (0x0000965d) slider_pane_g3

0x0003,

0xb133,	// (0x0000b133) slider_pane_g_ParamLimits

0xb133,	// (0x0000b133) slider_pane_g

0xc71e,	// (0x0000c71e) popup_tb_float_extension_window_ParamLimits

0xc71e,	// (0x0000c71e) popup_tb_float_extension_window

0x9689,	// (0x00009689) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x9695,	// (0x00009695) grid_tb_float_ext_pane

0x969f,	// (0x0000969f) cell_tb_float_ext_pane_ParamLimits

0x969f,	// (0x0000969f) cell_tb_float_ext_pane

0x96b9,	// (0x000096b9) cell_tb_float_ext_pane_g1

0x96c2,	// (0x000096c2) grid_highlight_pane_cp12

0xd557,	// (0x0000d557) cell_last_hwr_side_pane_ParamLimits

0xd557,	// (0x0000d557) cell_last_hwr_side_pane

0x64c5,	// (0x000064c5) cell_last_hwr_side_pane_g1

0x96cb,	// (0x000096cb) cell_last_hwr_side_pane_g2

0x0001,

0xb13c,	// (0x0000b13c) cell_last_hwr_side_pane_g

0xe581,	// (0x0000e581) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe581,	// (0x0000e581) vkb2_area_bottom_space_btn_pane

0x6972,	// (0x00006972) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9154,	// (0x00009154) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x95f9,	// (0x000095f9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x96d4,	// (0x000096d4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x96d4,	// (0x000096d4) vkb2_area_bottom_space_btn_pane_g1

0x970e,	// (0x0000970e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x970e,	// (0x0000970e) vkb2_area_bottom_space_btn_pane_g2

0x9744,	// (0x00009744) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9744,	// (0x00009744) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb141,	// (0x0000b141) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb141,	// (0x0000b141) vkb2_area_bottom_space_btn_pane_g

0x65f8,	// (0x000065f8) cel_fep_hwr_func_pane_ParamLimits

0x65f8,	// (0x000065f8) cel_fep_hwr_func_pane

0xd52c,	// (0x0000d52c) cell_hwr_side_button_pane_ParamLimits

0xd52c,	// (0x0000d52c) cell_hwr_side_button_pane

0x8590,	// (0x00008590) aid_area_touch_clock_ParamLimits

0x0819,	// (0x00000819) bg_uniindi_top_pane_ParamLimits

0x85a2,	// (0x000085a2) uniindi_top_pane_g1_ParamLimits

0x85b8,	// (0x000085b8) uniindi_top_pane_g2_ParamLimits

0x85c4,	// (0x000085c4) uniindi_top_pane_g3_ParamLimits

0x85d5,	// (0x000085d5) uniindi_top_pane_g4_ParamLimits

0xb054,	// (0x0000b054) uniindi_top_pane_g_ParamLimits

0x85e2,	// (0x000085e2) uniindi_top_pane_t1_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01

0x978e,	// (0x0000978e) cel_fep_hwr_func_pane_g1_ParamLimits

0x978e,	// (0x0000978e) cel_fep_hwr_func_pane_g1

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02

0x978e,	// (0x0000978e) cell_hwr_side_button_pane_g1_ParamLimits

0x978e,	// (0x0000978e) cell_hwr_side_button_pane_g1

0x340f,	// (0x0000340f) status_pane_g4_ParamLimits

0x340f,	// (0x0000340f) status_pane_g4

0x3427,	// (0x00003427) status_pane_t1

0x61c7,	// (0x000061c7) form2_midp_gauge_slider_cont_pane

0x61cf,	// (0x000061cf) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd46b,	// (0x0000d46b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd47d,	// (0x0000d47d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xeffd,	// (0x0000effd) form2_midp_gauge_slider_pane_t_ParamLimits

0x6205,	// (0x00006205) form2_midp_slider_pane_ParamLimits

0x8afb,	// (0x00008afb) aid_size_cell_func_vkb2_ParamLimits

0x8afb,	// (0x00008afb) aid_size_cell_func_vkb2

0x9675,	// (0x00009675) slider_pane_g4_ParamLimits

0x9675,	// (0x00009675) slider_pane_g4

0xe99d,	// (0x0000e99d) form2_midp_gauge_slider_pane_t2_cp01

0xe9ab,	// (0x0000e9ab) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe9ab,	// (0x0000e9ab) form2_midp_gauge_slider_pane_t3_cp01

0x97c7,	// (0x000097c7) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x97fb,	// (0x000097fb) navi_smil_pane_g1

0x9803,	// (0x00009803) navi_smil_pane_t1

0x97d0,	// (0x000097d0) form2_midp_slider_pane_g1

0x97d9,	// (0x000097d9) form2_midp_slider_pane_g2

0x97e1,	// (0x000097e1) form2_midp_slider_pane_g3

0x97d0,	// (0x000097d0) form2_midp_slider_pane_g4

0xe9c8,	// (0x0000e9c8) form2_midp_slider_pane_g5

0x0004,

0xf0c6,	// (0x0000f0c6) form2_midp_slider_pane_g

0x977e,	// (0x0000977e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x977e,	// (0x0000977e) vkb2_area_bottom_space_btn_pane_g4

0xc8fa,	// (0x0000c8fa) lc0_navi_pane_ParamLimits

0xc8fa,	// (0x0000c8fa) lc0_navi_pane

0xc964,	// (0x0000c964) lc0_stat_indi_pane_ParamLimits

0xc964,	// (0x0000c964) lc0_stat_indi_pane

0xc979,	// (0x0000c979) ls0_title_pane_ParamLimits

0xc979,	// (0x0000c979) ls0_title_pane

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14_ParamLimits

0x8577,	// (0x00008577) list_uniindi_pane_ParamLimits

0x8583,	// (0x00008583) uniindi_top_pane_ParamLimits

0x861e,	// (0x0000861e) list_single_uniindi_pane_g1_ParamLimits

0x8631,	// (0x00008631) list_single_uniindi_pane_t1_ParamLimits

0xe9d1,	// (0x0000e9d1) lc0_stat_clock_pane_ParamLimits

0xe9d1,	// (0x0000e9d1) lc0_stat_clock_pane

0xe9de,	// (0x0000e9de) lc0_stat_indi_pane_g1_ParamLimits

0xe9de,	// (0x0000e9de) lc0_stat_indi_pane_g1

0xe9eb,	// (0x0000e9eb) lc0_stat_indi_pane_g2_ParamLimits

0xe9eb,	// (0x0000e9eb) lc0_stat_indi_pane_g2

0x0001,

0xf0d1,	// (0x0000f0d1) lc0_stat_indi_pane_g_ParamLimits

0xf0d1,	// (0x0000f0d1) lc0_stat_indi_pane_g

0xe9f8,	// (0x0000e9f8) lc0_uni_indicator_pane_ParamLimits

0xe9f8,	// (0x0000e9f8) lc0_uni_indicator_pane

0xea05,	// (0x0000ea05) ls0_title_pane_g1_ParamLimits

0xea05,	// (0x0000ea05) ls0_title_pane_g1

0xea19,	// (0x0000ea19) ls0_title_pane_t1_ParamLimits

0xea19,	// (0x0000ea19) ls0_title_pane_t1

0xea47,	// (0x0000ea47) lc0_uni_indicator_pane_g1_ParamLimits

0xea47,	// (0x0000ea47) lc0_uni_indicator_pane_g1

0x98a5,	// (0x000098a5) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x98b3,	// (0x000098b3) ai5_sk_pane_ParamLimits

0x98b3,	// (0x000098b3) ai5_sk_pane

0xea76,	// (0x0000ea76) cell_ai5_widget_pane_ParamLimits

0xea76,	// (0x0000ea76) cell_ai5_widget_pane

0x994e,	// (0x0000994e) aid_size_cell_widget_grid

0x9962,	// (0x00009962) bg_ai5_widget_pane_ParamLimits

0x9962,	// (0x00009962) bg_ai5_widget_pane

0xeaff,	// (0x0000eaff) cell_ai5_widget_pane_g2

0xeb0f,	// (0x0000eb0f) cell_ai5_widget_pane_g3

0xeb2e,	// (0x0000eb2e) cell_ai5_widget_pane_g4

0xeb3a,	// (0x0000eb3a) cell_ai5_widget_pane_g5

0xeb46,	// (0x0000eb46) cell_ai5_widget_pane_g6

0xeb52,	// (0x0000eb52) cell_ai5_widget_pane_g7

0xeb9a,	// (0x0000eb9a) cell_ai5_widget_pane_t1_ParamLimits

0xeb9a,	// (0x0000eb9a) cell_ai5_widget_pane_t1

0xebb7,	// (0x0000ebb7) cell_ai5_widget_pane_t2_ParamLimits

0xebb7,	// (0x0000ebb7) cell_ai5_widget_pane_t2

0xebcf,	// (0x0000ebcf) cell_ai5_widget_pane_t3_ParamLimits

0xebcf,	// (0x0000ebcf) cell_ai5_widget_pane_t3

0xebe7,	// (0x0000ebe7) cell_ai5_widget_pane_t4_ParamLimits

0xebe7,	// (0x0000ebe7) cell_ai5_widget_pane_t4

0xec01,	// (0x0000ec01) cell_ai5_widget_pane_t5_ParamLimits

0xec01,	// (0x0000ec01) cell_ai5_widget_pane_t5

0x9aab,	// (0x00009aab) cell_ai5_widget_pane_t6_ParamLimits

0x9aab,	// (0x00009aab) cell_ai5_widget_pane_t6

0x9abd,	// (0x00009abd) cell_ai5_widget_pane_t7_ParamLimits

0x9abd,	// (0x00009abd) cell_ai5_widget_pane_t7

0xec20,	// (0x0000ec20) cell_ai5_widget_pane_t8_ParamLimits

0xec20,	// (0x0000ec20) cell_ai5_widget_pane_t8

0x0009,

0xf0eb,	// (0x0000f0eb) cell_ai5_widget_pane_t_ParamLimits

0xf0eb,	// (0x0000f0eb) cell_ai5_widget_pane_t

0xec6c,	// (0x0000ec6c) grid_ai5_widget_pane

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane

0xec82,	// (0x0000ec82) ai5_sk_left_pane

0xec8c,	// (0x0000ec8c) ai5_sk_middle_pane

0xec96,	// (0x0000ec96) ai5_sk_right_pane

0x9b56,	// (0x00009b56) bg_ai5_widget_pane_g1_ParamLimits

0x9b56,	// (0x00009b56) bg_ai5_widget_pane_g1

0x9b62,	// (0x00009b62) bg_ai5_widget_pane_g2_ParamLimits

0x9b62,	// (0x00009b62) bg_ai5_widget_pane_g2

0x9b6e,	// (0x00009b6e) bg_ai5_widget_pane_g3_ParamLimits

0x9b6e,	// (0x00009b6e) bg_ai5_widget_pane_g3

0x9b7a,	// (0x00009b7a) bg_ai5_widget_pane_g4_ParamLimits

0x9b7a,	// (0x00009b7a) bg_ai5_widget_pane_g4

0x9b86,	// (0x00009b86) bg_ai5_widget_pane_g5_ParamLimits

0x9b86,	// (0x00009b86) bg_ai5_widget_pane_g5

0x9b92,	// (0x00009b92) bg_ai5_widget_pane_g6_ParamLimits

0x9b92,	// (0x00009b92) bg_ai5_widget_pane_g6

0x9b9e,	// (0x00009b9e) bg_ai5_widget_pane_g7_ParamLimits

0x9b9e,	// (0x00009b9e) bg_ai5_widget_pane_g7

0x9baa,	// (0x00009baa) bg_ai5_widget_pane_g8_ParamLimits

0x9baa,	// (0x00009baa) bg_ai5_widget_pane_g8

0x9bb6,	// (0x00009bb6) bg_ai5_widget_pane_g9_ParamLimits

0x9bb6,	// (0x00009bb6) bg_ai5_widget_pane_g9

0x0008,

0xb184,	// (0x0000b184) bg_ai5_widget_pane_g_ParamLimits

0xb184,	// (0x0000b184) bg_ai5_widget_pane_g

0x9be9,	// (0x00009be9) cell_shortcut_ai5_widget_pane_ParamLimits

0x9be9,	// (0x00009be9) cell_shortcut_ai5_widget_pane

0x0659,	// (0x00000659) bg_cell_shortcut_ai5_widget_pane

0x9bfa,	// (0x00009bfa) cell_grid_ai5_widget_pane_g1

0x9c03,	// (0x00009c03) highlight_cell_shortcut_ai5_widget_pane

0x3636,	// (0x00003636) ai5_sk_left_pane_g1

0x9c0b,	// (0x00009c0b) ai5_sk_left_pane_g2

0x9c13,	// (0x00009c13) ai5_sk_left_pane_g3

0x9c1b,	// (0x00009c1b) ai5_sk_left_pane_g4

0x0003,

0xb197,	// (0x0000b197) ai5_sk_left_pane_g

0x9c23,	// (0x00009c23) ai5_sk_left_pane_t1

0x362e,	// (0x0000362e) ai5_sk_right_pane_g1

0x9c31,	// (0x00009c31) ai5_sk_right_pane_g2

0x9c39,	// (0x00009c39) ai5_sk_right_pane_g3

0x9c41,	// (0x00009c41) ai5_sk_right_pane_g4

0x0003,

0xb1a0,	// (0x0000b1a0) ai5_sk_right_pane_g

0x9c49,	// (0x00009c49) ai5_sk_right_pane_t1

0x362e,	// (0x0000362e) ai5_sk_middle_pane_g1

0x3636,	// (0x00003636) ai5_sk_middle_pane_g2

0x364e,	// (0x0000364e) ai5_sk_middle_pane_g3

0x9c39,	// (0x00009c39) ai5_sk_middle_pane_g4

0x9c13,	// (0x00009c13) ai5_sk_middle_pane_g5

0x9c57,	// (0x00009c57) ai5_sk_middle_pane_g6

0xeca0,	// (0x0000eca0) ai5_sk_middle_pane_g7

0x0006,

0xf100,	// (0x0000f100) ai5_sk_middle_pane_g

0xc7e6,	// (0x0000c7e6) aid_touch_area_size_lc0_ParamLimits

0xc7e6,	// (0x0000c7e6) aid_touch_area_size_lc0

0x6d27,	// (0x00006d27) cell_hwr_candidate_pane_t1_ParamLimits

0x30ed,	// (0x000030ed) aid_touch_navi_pane

0xca6b,	// (0x0000ca6b) status_dt_navi_pane_ParamLimits

0xca6b,	// (0x0000ca6b) status_dt_navi_pane

0xca83,	// (0x0000ca83) status_dt_sta_pane_ParamLimits

0xca83,	// (0x0000ca83) status_dt_sta_pane

0xeca8,	// (0x0000eca8) dt_sta_controll_pane

0xecb5,	// (0x0000ecb5) dt_sta_indi_pane

0xecc2,	// (0x0000ecc2) dt_sta_title_pane

0x0819,	// (0x00000819) bg_dt_sta_indi_pane_ParamLimits

0x0819,	// (0x00000819) bg_dt_sta_indi_pane

0xecd4,	// (0x0000ecd4) dt_sta_battery_pane

0xecdc,	// (0x0000ecdc) dt_sta_indi_pane_g1

0x9ca9,	// (0x00009ca9) dt_sta_indi_pane_g2

0x9cb2,	// (0x00009cb2) dt_sta_indi_pane_g3

0x0002,

0xf10f,	// (0x0000f10f) dt_sta_indi_pane_g

0x9cbb,	// (0x00009cbb) dt_sta_signal_pane

0x134f,	// (0x0000134f) bg_dt_sta_title_pane_ParamLimits

0x134f,	// (0x0000134f) bg_dt_sta_title_pane

0x47b3,	// (0x000047b3) dt_sta_title_pane_g1

0xece5,	// (0x0000ece5) dt_sta_title_pane_t1_ParamLimits

0xece5,	// (0x0000ece5) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xecfa,	// (0x0000ecfa) dt_sta_controll_pane_g1

0x9ce2,	// (0x00009ce2) bg_dt_sta_title_pane_g1

0x9ceb,	// (0x00009ceb) bg_dt_sta_title_pane_g2

0x9cf4,	// (0x00009cf4) bg_dt_sta_title_pane_g3

0x0002,

0xb1bf,	// (0x0000b1bf) bg_dt_sta_title_pane_g

0x64c5,	// (0x000064c5) bg_dt_sta_indi_pane_g1

0x9cfd,	// (0x00009cfd) dt_sta_signal_pane_g1

0x9d05,	// (0x00009d05) dt_sta_signal_pane_g2

0x0001,

0xb1c6,	// (0x0000b1c6) dt_sta_signal_pane_g

0x9d0d,	// (0x00009d0d) dt_sta_battery_pane_g1

0x9d16,	// (0x00009d16) dt_sta_battery_pane_t1

0x64c5,	// (0x000064c5) bg_dt_sta_control_pane_g1

0x1eaf,	// (0x00001eaf) fep_china_uni_eep_pane

0x1eb7,	// (0x00001eb7) fep_china_uni_entry_pane_ParamLimits

0x1ec7,	// (0x00001ec7) popup_fep_china_uni_window_g1_ParamLimits

0x1ed7,	// (0x00001ed7) popup_fep_china_uni_window_g2_ParamLimits

0x1ed7,	// (0x00001ed7) popup_fep_china_uni_window_g2

0x0001,

0xaa5d,	// (0x0000aa5d) popup_fep_china_uni_window_g_ParamLimits

0xaa5d,	// (0x0000aa5d) popup_fep_china_uni_window_g

0x9d25,	// (0x00009d25) fep_china_uni_eep_pane_g1

0x9d2d,	// (0x00009d2d) fep_china_uni_eep_pane_t1

0x97f2,	// (0x000097f2) aid_touch_area_size_smil_player

0x323d,	// (0x0000323d) lc0_clock_pane

0x341b,	// (0x0000341b) status_pane_g5_ParamLimits

0x341b,	// (0x0000341b) status_pane_g5

0xc2b2,	// (0x0000c2b2) popup_keymap_window

0x33db,	// (0x000033db) status_icon_pane

0xeb0f,	// (0x0000eb0f) cell_ai5_widget_pane_g3_ParamLimits

0xeb2e,	// (0x0000eb2e) cell_ai5_widget_pane_g4_ParamLimits

0xeb3a,	// (0x0000eb3a) cell_ai5_widget_pane_g5_ParamLimits

0xeb5e,	// (0x0000eb5e) cell_ai5_widget_pane_g8_ParamLimits

0xeb5e,	// (0x0000eb5e) cell_ai5_widget_pane_g8

0xeb72,	// (0x0000eb72) cell_ai5_widget_pane_g9_ParamLimits

0xeb72,	// (0x0000eb72) cell_ai5_widget_pane_g9

0xeb86,	// (0x0000eb86) cell_ai5_widget_pane_g10_ParamLimits

0xeb86,	// (0x0000eb86) cell_ai5_widget_pane_g10

0x9d3c,	// (0x00009d3c) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9d44,	// (0x00009d44) popup_keymap_window_t1

0xbfca,	// (0x0000bfca) control_pane_g6_ParamLimits

0xbfca,	// (0x0000bfca) control_pane_g6

0xbfd7,	// (0x0000bfd7) control_pane_g7_ParamLimits

0xbfd7,	// (0x0000bfd7) control_pane_g7

0xbfe4,	// (0x0000bfe4) control_pane_g8_ParamLimits

0xbfe4,	// (0x0000bfe4) control_pane_g8

0xeca8,	// (0x0000eca8) dt_sta_controll_pane_ParamLimits

0xecb5,	// (0x0000ecb5) dt_sta_indi_pane_ParamLimits

0xecc2,	// (0x0000ecc2) dt_sta_title_pane_ParamLimits

0x0d1b,	// (0x00000d1b) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb379,	// (0x0000b379) popup_sk_window

0x3e7b,	// (0x00003e7b) bg_popup_sub_pane_cp28_ParamLimits

0x3e7b,	// (0x00003e7b) bg_popup_sub_pane_cp28

0x9d52,	// (0x00009d52) popup_discreet_window_g1_ParamLimits

0x9d52,	// (0x00009d52) popup_discreet_window_g1

0x9d72,	// (0x00009d72) popup_discreet_window_t1_ParamLimits

0x9d72,	// (0x00009d72) popup_discreet_window_t1

0x9d90,	// (0x00009d90) popup_discreet_window_t2_ParamLimits

0x9d90,	// (0x00009d90) popup_discreet_window_t2

0x0002,

0xb1cb,	// (0x0000b1cb) popup_discreet_window_t_ParamLimits

0xb1cb,	// (0x0000b1cb) popup_discreet_window_t

0x9de2,	// (0x00009de2) popup_sk_window_g1

0x9dec,	// (0x00009dec) popup_sk_window_g2

0x0001,

0xb1d2,	// (0x0000b1d2) popup_sk_window_g

0x9df6,	// (0x00009df6) popup_sk_window_t1

0x9e04,	// (0x00009e04) popup_sk_window_t1_copy1

0xeaff,	// (0x0000eaff) cell_ai5_widget_pane_g2_ParamLimits

0xec32,	// (0x0000ec32) cell_ai5_widget_pane_t9_ParamLimits

0xec32,	// (0x0000ec32) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xed03,	// (0x0000ed03) aid_fshwr2_btn_pane

0xed0b,	// (0x0000ed0b) aid_fshwr2_syb_pane

0xed13,	// (0x0000ed13) aid_fshwr2_txt_pane

0xed1b,	// (0x0000ed1b) fshwr2_func_candi_pane

0xed25,	// (0x0000ed25) fshwr2_hwr_syb_pane

0xed33,	// (0x0000ed33) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xed3d,	// (0x0000ed3d) fshwr2_icf_pane_t1_ParamLimits

0xed3d,	// (0x0000ed3d) fshwr2_icf_pane_t1

0x64c5,	// (0x000064c5) fshwr2_func_candi_pane_g1

0x9e77,	// (0x00009e77) fshwr2_func_candi_row_pane_ParamLimits

0x9e77,	// (0x00009e77) fshwr2_func_candi_row_pane

0xed57,	// (0x0000ed57) cell_fshwr2_syb_pane_ParamLimits

0xed57,	// (0x0000ed57) cell_fshwr2_syb_pane

0x6972,	// (0x00006972) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6972,	// (0x00006972) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9ea4,	// (0x00009ea4) fshwr2_func_candi_cell_pane_ParamLimits

0x9ea4,	// (0x00009ea4) fshwr2_func_candi_cell_pane

0x9ed5,	// (0x00009ed5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9ed5,	// (0x00009ed5) fshwr2_func_candi_cell_bg_pane

0x9eef,	// (0x00009eef) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9eef,	// (0x00009eef) fshwr2_func_candi_cell_pane_g1

0x9f0f,	// (0x00009f0f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f0f,	// (0x00009f0f) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x257a,	// (0x0000257a) cell_fshwr2_syb_bg_pane

0xed71,	// (0x0000ed71) cell_fshwr2_syb_bg_pane_g1

0x9f2a,	// (0x00009f2a) cell_fshwr2_syb_bg_pane_t1

0x134f,	// (0x0000134f) main_tmo_pane

0xcf9e,	// (0x0000cf9e) uni_indicator_pane_g1_ParamLimits

0xcfb3,	// (0x0000cfb3) uni_indicator_pane_g2_ParamLimits

0xcfc8,	// (0x0000cfc8) uni_indicator_pane_g3_ParamLimits

0x4b37,	// (0x00004b37) uni_indicator_pane_g4_ParamLimits

0x4b37,	// (0x00004b37) uni_indicator_pane_g4

0x4b4b,	// (0x00004b4b) uni_indicator_pane_g5_ParamLimits

0x4b4b,	// (0x00004b4b) uni_indicator_pane_g5

0x4b5f,	// (0x00004b5f) uni_indicator_pane_g6_ParamLimits

0x4b5f,	// (0x00004b5f) uni_indicator_pane_g6

0xefa9,	// (0x0000efa9) uni_indicator_pane_g_ParamLimits

0xdb42,	// (0x0000db42) popup_tmo_note_window_ParamLimits

0xdb42,	// (0x0000db42) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9f00,	// (0x00009f00) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f00,	// (0x00009f00) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb1d7,	// (0x0000b1d7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb1d7,	// (0x0000b1d7) fshwr2_func_candi_cell_pane_g

0x64c5,	// (0x000064c5) bg_popup_window_pane_cp01

0x9f39,	// (0x00009f39) bg_popup_window_pane_g1_cp01

0x9f42,	// (0x00009f42) bg_popup_window_pane_cp22_ParamLimits

0x9f42,	// (0x00009f42) bg_popup_window_pane_cp22

0x9f50,	// (0x00009f50) listscroll_tmo_link_pane_ParamLimits

0x9f50,	// (0x00009f50) listscroll_tmo_link_pane

0x9f90,	// (0x00009f90) popup_tmo_note_window_g1_ParamLimits

0x9f90,	// (0x00009f90) popup_tmo_note_window_g1

0x9f9d,	// (0x00009f9d) tmo_note_info_pane_ParamLimits

0x9f9d,	// (0x00009f9d) tmo_note_info_pane

0xed79,	// (0x0000ed79) list_tmo_note_info_pane_g1_ParamLimits

0xed79,	// (0x0000ed79) list_tmo_note_info_pane_g1

0x9fce,	// (0x00009fce) list_tmo_note_info_pane_g2_ParamLimits

0x9fce,	// (0x00009fce) list_tmo_note_info_pane_g2

0x0001,

0xf116,	// (0x0000f116) list_tmo_note_info_pane_g_ParamLimits

0xf116,	// (0x0000f116) list_tmo_note_info_pane_g

0x9fea,	// (0x00009fea) list_tmo_note_info_text_pane_ParamLimits

0x9fea,	// (0x00009fea) list_tmo_note_info_text_pane

0xa06f,	// (0x0000a06f) list_tmo_link_pane

0xa07c,	// (0x0000a07c) scroll_pane_cp20

0xa089,	// (0x0000a089) list_single_tmo_link_pane_ParamLimits

0xa089,	// (0x0000a089) list_single_tmo_link_pane

0xa099,	// (0x0000a099) list_single_tmo_link_pane_t1

0xa0a7,	// (0x0000a0a7) list_tmo_note_info_text_pane_t1_ParamLimits

0xa0a7,	// (0x0000a0a7) list_tmo_note_info_text_pane_t1

0xbc21,	// (0x0000bc21) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbc21,	// (0x0000bc21) aid_size_touch_scroll_bar_cp01

0xbb3c,	// (0x0000bb3c) aid_size_touch_slider_marker

0xb369,	// (0x0000b369) popup_settings_window_ParamLimits

0xb369,	// (0x0000b369) popup_settings_window

0x2b24,	// (0x00002b24) popup_candi_list_indi_window

0x30ed,	// (0x000030ed) aid_touch_navi_pane_ParamLimits

0x82f6,	// (0x000082f6) rs_clock_indi_pane

0x82ff,	// (0x000082ff) sctrl_sk_bottom_pane_ParamLimits

0x8310,	// (0x00008310) sctrl_sk_top_pane_ParamLimits

0x8b55,	// (0x00008b55) popup_fep_tooltip_window

0x994e,	// (0x0000994e) aid_size_cell_widget_grid_ParamLimits

0xeaf3,	// (0x0000eaf3) cell_ai5_widget_pane_g1_ParamLimits

0xeaf3,	// (0x0000eaf3) cell_ai5_widget_pane_g1

0xeb46,	// (0x0000eb46) cell_ai5_widget_pane_g6_ParamLimits

0xeb52,	// (0x0000eb52) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf0d6,	// (0x0000f0d6) cell_ai5_widget_pane_g_ParamLimits

0xf0d6,	// (0x0000f0d6) cell_ai5_widget_pane_g

0xec56,	// (0x0000ec56) cell_ai5_widget_pane_t10_ParamLimits

0xec56,	// (0x0000ec56) cell_ai5_widget_pane_t10

0xec6c,	// (0x0000ec6c) grid_ai5_widget_pane_ParamLimits

0x9bc2,	// (0x00009bc2) cell_contacts_ai5_widget_pane_ParamLimits

0x9bc2,	// (0x00009bc2) cell_contacts_ai5_widget_pane

0x9da5,	// (0x00009da5) popup_discreet_window_t3_ParamLimits

0x9da5,	// (0x00009da5) popup_discreet_window_t3

0x9e4c,	// (0x00009e4c) popup_fshwr2_char_preview_window_ParamLimits

0x9e4c,	// (0x00009e4c) popup_fshwr2_char_preview_window

0xed90,	// (0x0000ed90) tmo_note_info_pane_t1

0xeda5,	// (0x0000eda5) tmo_note_info_pane_t2

0xedbe,	// (0x0000edbe) tmo_note_info_pane_t3

0xa04b,	// (0x0000a04b) tmo_note_info_pane_t4

0xa05d,	// (0x0000a05d) tmo_note_info_pane_t5

0x0004,

0xf11b,	// (0x0000f11b) tmo_note_info_pane_t

0xa06f,	// (0x0000a06f) list_tmo_link_pane_ParamLimits

0xa07c,	// (0x0000a07c) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa0c0,	// (0x0000a0c0) popup_fshwr2_char_preview_window_t1

0xa0ce,	// (0x0000a0ce) popup_candi_list_indi_window_g1

0xa0d7,	// (0x0000a0d7) bg_cell_contacts_ai5_widget_pane

0xa0e3,	// (0x0000a0e3) cell_contacts_ai5_widget_pane_g1

0xa0f7,	// (0x0000a0f7) cell_contacts_ai5_widget_pane_g2

0xa106,	// (0x0000a106) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb1ec,	// (0x0000b1ec) cell_contacts_ai5_widget_pane_g

0xa119,	// (0x0000a119) cell_contacts_ai5_widget_pane_t1

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa193,	// (0x0000a193) settings_container_pane

0x257a,	// (0x0000257a) listscroll_set_pane_copy1

0x592f,	// (0x0000592f) scroll_pane_cp121_copy1

0xa19f,	// (0x0000a19f) set_content_pane_copy1

0xa1a7,	// (0x0000a1a7) aid_height_set_list_copy1_ParamLimits

0xa1a7,	// (0x0000a1a7) aid_height_set_list_copy1

0x4e42,	// (0x00004e42) aid_size_parent_copy1_ParamLimits

0x4e42,	// (0x00004e42) aid_size_parent_copy1

0xa1b3,	// (0x0000a1b3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa1b3,	// (0x0000a1b3) button_value_adjust_pane_cp6_copy1

0x2afc,	// (0x00002afc) list_highlight_pane_cp2_copy1_ParamLimits

0x2afc,	// (0x00002afc) list_highlight_pane_cp2_copy1

0xa1c7,	// (0x0000a1c7) list_set_pane_copy1_ParamLimits

0xa1c7,	// (0x0000a1c7) list_set_pane_copy1

0xa12e,	// (0x0000a12e) main_pane_set_t1_copy1_ParamLimits

0xa12e,	// (0x0000a12e) main_pane_set_t1_copy1

0xa168,	// (0x0000a168) main_pane_set_t2_copy1_ParamLimits

0xa168,	// (0x0000a168) main_pane_set_t2_copy1

0xa274,	// (0x0000a274) main_pane_set_t3_copy1

0xa282,	// (0x0000a282) main_pane_set_t4_copy1

0xa187,	// (0x0000a187) set_content_pane_g1_copy1_ParamLimits

0xa187,	// (0x0000a187) set_content_pane_g1_copy1

0xa290,	// (0x0000a290) setting_code_pane_copy1

0xa29a,	// (0x0000a29a) setting_slider_graphic_pane_copy1

0xa29a,	// (0x0000a29a) setting_slider_pane_copy1

0xa29a,	// (0x0000a29a) setting_text_pane_copy1

0xa2a4,	// (0x0000a2a4) setting_volume_pane_copy1

0xa2ad,	// (0x0000a2ad) settings_code_pane_cp2_copy1

0xa2b5,	// (0x0000a2b5) settings_code_pane_cp_copy1_ParamLimits

0xa2b5,	// (0x0000a2b5) settings_code_pane_cp_copy1

0xa2c9,	// (0x0000a2c9) volume_set_pane_copy1

0xa2d1,	// (0x0000a2d1) volume_set_pane_g10_copy1

0xa2d9,	// (0x0000a2d9) volume_set_pane_g1_copy1

0xa2e1,	// (0x0000a2e1) volume_set_pane_g2_copy1

0xa2e9,	// (0x0000a2e9) volume_set_pane_g3_copy1

0xa2f1,	// (0x0000a2f1) volume_set_pane_g4_copy1

0xa2f9,	// (0x0000a2f9) volume_set_pane_g5_copy1

0xa301,	// (0x0000a301) volume_set_pane_g6_copy1

0xa309,	// (0x0000a309) volume_set_pane_g7_copy1

0xa311,	// (0x0000a311) volume_set_pane_g8_copy1

0xa319,	// (0x0000a319) volume_set_pane_g9_copy1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1

0xa321,	// (0x0000a321) setting_slider_pane_t1_copy1_ParamLimits

0xa321,	// (0x0000a321) setting_slider_pane_t1_copy1

0xa33f,	// (0x0000a33f) setting_slider_pane_t2_copy1_ParamLimits

0xa33f,	// (0x0000a33f) setting_slider_pane_t2_copy1

0xa359,	// (0x0000a359) setting_slider_pane_t3_copy1_ParamLimits

0xa359,	// (0x0000a359) setting_slider_pane_t3_copy1

0xa371,	// (0x0000a371) slider_set_pane_copy1_ParamLimits

0xa371,	// (0x0000a371) slider_set_pane_copy1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy2

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy2

0xa387,	// (0x0000a387) set_opt_bg_pane_g3_copy2

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy2

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy2

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy2

0xa391,	// (0x0000a391) set_opt_bg_pane_g7_copy2

0xa399,	// (0x0000a399) set_opt_bg_pane_g8_copy2

0xa3a3,	// (0x0000a3a3) set_opt_bg_pane_g9_copy2

0xa3ad,	// (0x0000a3ad) aid_size_touch_slider_mark_copy1_ParamLimits

0xa3ad,	// (0x0000a3ad) aid_size_touch_slider_mark_copy1

0xa3c1,	// (0x0000a3c1) slider_set_pane_g1_copy1

0xa3ca,	// (0x0000a3ca) slider_set_pane_g2_copy1

0x4db1,	// (0x00004db1) slider_set_pane_g3_copy1_ParamLimits

0x4db1,	// (0x00004db1) slider_set_pane_g3_copy1

0x4dc5,	// (0x00004dc5) slider_set_pane_g4_copy1_ParamLimits

0x4dc5,	// (0x00004dc5) slider_set_pane_g4_copy1

0x4ddd,	// (0x00004ddd) slider_set_pane_g5_copy1_ParamLimits

0x4ddd,	// (0x00004ddd) slider_set_pane_g5_copy1

0x4db1,	// (0x00004db1) slider_set_pane_g6_copy1_ParamLimits

0x4db1,	// (0x00004db1) slider_set_pane_g6_copy1

0xa3d2,	// (0x0000a3d2) slider_set_pane_g7_copy1_ParamLimits

0xa3d2,	// (0x0000a3d2) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa3e8,	// (0x0000a3e8) setting_slider_graphic_pane_g1_copy1

0xa3f1,	// (0x0000a3f1) setting_slider_graphic_pane_t1_copy1

0xa401,	// (0x0000a401) setting_slider_graphic_pane_t2_copy1

0xa411,	// (0x0000a411) slider_set_pane_cp_copy1

0xa421,	// (0x0000a421) input_focus_pane_cp1_copy1

0xa42a,	// (0x0000a42a) list_set_text_pane_copy1

0xa432,	// (0x0000a432) setting_text_pane_g1_copy1

0xa43b,	// (0x0000a43b) set_text_pane_t1_copy1

0xa421,	// (0x0000a421) input_focus_pane_cp2_copy1

0xa432,	// (0x0000a432) setting_code_pane_g1_copy1

0xa458,	// (0x0000a458) setting_code_pane_t1_copy1

0xa466,	// (0x0000a466) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x227c,	// (0x0000227c) list_set_graphic_pane_g1_copy1_ParamLimits

0x227c,	// (0x0000227c) list_set_graphic_pane_g1_copy1

0xa47a,	// (0x0000a47a) list_set_graphic_pane_g2_copy1

0x2294,	// (0x00002294) list_set_graphic_pane_t1_copy1_ParamLimits

0x2294,	// (0x00002294) list_set_graphic_pane_t1_copy1

0x64c5,	// (0x000064c5) rs_clock_indi_pane_g1

0xa482,	// (0x0000a482) rs_clock_indi_pane_t1

0xa490,	// (0x0000a490) rs_indi_pane

0xa498,	// (0x0000a498) rs_indi_pane_g1

0xa4a1,	// (0x0000a4a1) rs_indi_pane_g2

0xa4aa,	// (0x0000a4aa) rs_indi_pane_g3

0x0002,

0xb1f3,	// (0x0000b1f3) rs_indi_pane_g

0x257a,	// (0x0000257a) bg_popup_preview_window_pane_cp03

0xa4b3,	// (0x0000a4b3) popup_fep_tooltip_window_t1

0x76ba,	// (0x000076ba) popup_note2_window_g2_ParamLimits

0x76ba,	// (0x000076ba) popup_note2_window_g2

0x0001,

0xaf93,	// (0x0000af93) popup_note2_window_g_ParamLimits

0xaf93,	// (0x0000af93) popup_note2_window_g

0x7cb4,	// (0x00007cb4) bg_popup_sub_pane_cp11_ParamLimits

0x7cc1,	// (0x00007cc1) cell_ai3_links_pane_g1_ParamLimits

0x7cd8,	// (0x00007cd8) cell_ai3_links_pane_t1

0xa43b,	// (0x0000a43b) set_text_pane_t1_copy1_ParamLimits

0x2489,	// (0x00002489) cell_graphic_popup_pane_cp2_ParamLimits

0x2489,	// (0x00002489) cell_graphic_popup_pane_cp2

0xa4c1,	// (0x0000a4c1) cell_graphic_popup_pane_g1_cp2

0x0b2e,	// (0x00000b2e) cell_graphic_popup_pane_g2_cp2

0xa4c9,	// (0x0000a4c9) cell_graphic_popup_pane_g3_cp2

0xa4d1,	// (0x0000a4d1) cell_graphic_popup_pane_t2_cp2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3_cp2

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x134f,	// (0x0000134f) main_tmo_pane_ParamLimits

0xdb36,	// (0x0000db36) popup_tmo_big_image_note_window

0xeae3,	// (0x0000eae3) cell_ai5_widget_list_pane

0xeaeb,	// (0x0000eaeb) cell_ai5_widget_lrg_icon_pane

0xed90,	// (0x0000ed90) tmo_note_info_pane_t1_ParamLimits

0xeda5,	// (0x0000eda5) tmo_note_info_pane_t2_ParamLimits

0xedbe,	// (0x0000edbe) tmo_note_info_pane_t3_ParamLimits

0xa04b,	// (0x0000a04b) tmo_note_info_pane_t4_ParamLimits

0xa05d,	// (0x0000a05d) tmo_note_info_pane_t5_ParamLimits

0xf11b,	// (0x0000f11b) tmo_note_info_pane_t_ParamLimits

0xa193,	// (0x0000a193) settings_container_pane_ParamLimits

0xa419,	// (0x0000a419) indicator_popup_pane_cp5

0xa419,	// (0x0000a419) indicator_popup_pane_cp6

0xa466,	// (0x0000a466) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa4df,	// (0x0000a4df) popup_tmo_big_image_note_window_g1

0xa4ea,	// (0x0000a4ea) popup_tmo_big_image_note_window_t1

0xa4fa,	// (0x0000a4fa) popup_tmo_big_image_note_window_t2

0xa50a,	// (0x0000a50a) popup_tmo_big_image_note_window_t3

0x0002,

0xb1fa,	// (0x0000b1fa) popup_tmo_big_image_note_window_t

0xedd3,	// (0x0000edd3) cell_ai5_widget_lrg_icon_pane_g1

0xeddb,	// (0x0000eddb) cell_ai5_widget_lrg_icon_pane_t1

0xede9,	// (0x0000ede9) cell_ai5_widget_list_row_pane_ParamLimits

0xede9,	// (0x0000ede9) cell_ai5_widget_list_row_pane

0xee02,	// (0x0000ee02) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xee02,	// (0x0000ee02) cell_ai5_widget_list_row_pane_g1

0xee0f,	// (0x0000ee0f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xee0f,	// (0x0000ee0f) cell_ai5_widget_list_row_pane_t1

0xee27,	// (0x0000ee27) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xee27,	// (0x0000ee27) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf126,	// (0x0000f126) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf126,	// (0x0000f126) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa580,	// (0x0000a580) popup_fep_char_pre_window

0xa588,	// (0x0000a588) popup_fep_ituss_window

0xa5a9,	// (0x0000a5a9) popup_fep_vkbss_window

0xa5c8,	// (0x0000a5c8) grid_vkbss_keypad_pane_ParamLimits

0xa5c8,	// (0x0000a5c8) grid_vkbss_keypad_pane

0xa5d8,	// (0x0000a5d8) ituss_keypad_pane

0xa5f0,	// (0x0000a5f0) aid_vkbss_key_offset_ParamLimits

0xa5f0,	// (0x0000a5f0) aid_vkbss_key_offset

0xa5fc,	// (0x0000a5fc) cell_vkbss_key_pane_ParamLimits

0xa5fc,	// (0x0000a5fc) cell_vkbss_key_pane

0xa612,	// (0x0000a612) bg_cell_vkbss_key_g1_ParamLimits

0xa612,	// (0x0000a612) bg_cell_vkbss_key_g1

0xa61e,	// (0x0000a61e) cell_vkbss_key_3p_pane_ParamLimits

0xa61e,	// (0x0000a61e) cell_vkbss_key_3p_pane

0xa638,	// (0x0000a638) cell_vkbss_key_g1_ParamLimits

0xa638,	// (0x0000a638) cell_vkbss_key_g1

0xa652,	// (0x0000a652) cell_vkbss_key_t1_ParamLimits

0xa652,	// (0x0000a652) cell_vkbss_key_t1

0xa67d,	// (0x0000a67d) cell_ituss_key_pane_ParamLimits

0xa67d,	// (0x0000a67d) cell_ituss_key_pane

0xa68d,	// (0x0000a68d) bg_cell_ituss_key_g1_ParamLimits

0xa68d,	// (0x0000a68d) bg_cell_ituss_key_g1

0xa699,	// (0x0000a699) cell_ituss_key_pane_g1_ParamLimits

0xa699,	// (0x0000a699) cell_ituss_key_pane_g1

0xa6a5,	// (0x0000a6a5) cell_ituss_key_pane_g2_ParamLimits

0xa6a5,	// (0x0000a6a5) cell_ituss_key_pane_g2

0x0001,

0xb206,	// (0x0000b206) cell_ituss_key_pane_g_ParamLimits

0xb206,	// (0x0000b206) cell_ituss_key_pane_g

0xa6be,	// (0x0000a6be) cell_ituss_key_t1_ParamLimits

0xa6be,	// (0x0000a6be) cell_ituss_key_t1

0xa6ec,	// (0x0000a6ec) cell_ituss_key_t2_ParamLimits

0xa6ec,	// (0x0000a6ec) cell_ituss_key_t2

0xa71d,	// (0x0000a71d) cell_ituss_key_t3_ParamLimits

0xa71d,	// (0x0000a71d) cell_ituss_key_t3

0xa74e,	// (0x0000a74e) cell_ituss_key_t4_ParamLimits

0xa74e,	// (0x0000a74e) cell_ituss_key_t4

0x0003,

0xb20b,	// (0x0000b20b) cell_ituss_key_t_ParamLimits

0xb20b,	// (0x0000b20b) cell_ituss_key_t

0xa77f,	// (0x0000a77f) cell_vkbss_key_3p_pane_g1

0xa787,	// (0x0000a787) cell_vkbss_key_3p_pane_g2

0xa78f,	// (0x0000a78f) cell_vkbss_key_3p_pane_g3

0x0002,

0xb214,	// (0x0000b214) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa797,	// (0x0000a797) popup_fep_char_pre_window_t1

0xead9,	// (0x0000ead9) main_ai5_sk_pane

0xa0d7,	// (0x0000a0d7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa0e3,	// (0x0000a0e3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa0f7,	// (0x0000a0f7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa106,	// (0x0000a106) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb1ec,	// (0x0000b1ec) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa119,	// (0x0000a119) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee39,	// (0x0000ee39) main_ai5_sk_pane_g1

0x3cb9,	// (0x00003cb9) popup_query_code_window_g1

0xa59e,	// (0x0000a59e) popup_fep_vkb_icf_pane

0xa5b2,	// (0x0000a5b2) popup_fep_vtchi_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane

0xa7be,	// (0x0000a7be) list_vkb_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane_cp01

0x8047,	// (0x00008047) vtchi_icf_list_pane

0xa7de,	// (0x0000a7de) list_vkb_icf_pane_t1_ParamLimits

0xa7de,	// (0x0000a7de) list_vkb_icf_pane_t1

0xa7f8,	// (0x0000a7f8) vtchi_icf_list_pane_t1_ParamLimits

0xa7f8,	// (0x0000a7f8) vtchi_icf_list_pane_t1

0xa588,	// (0x0000a588) popup_fep_ituss_window_ParamLimits

0xa5b2,	// (0x0000a5b2) popup_fep_vtchi_icf_pane_ParamLimits

0xa5d8,	// (0x0000a5d8) ituss_keypad_pane_ParamLimits

0xa5e7,	// (0x0000a5e7) ituss_sks_pane

0x134f,	// (0x0000134f) bg_icf_pane_ParamLimits

0xa7af,	// (0x0000a7af) icf_edit_indi_pane_ParamLimits

0xa7af,	// (0x0000a7af) icf_edit_indi_pane

0xa7be,	// (0x0000a7be) list_vkb_icf_pane_ParamLimits

0x134f,	// (0x0000134f) bg_icf_pane_cp01_ParamLimits

0xa7ca,	// (0x0000a7ca) icf_edit_indi_pane_cp01_ParamLimits

0xa7ca,	// (0x0000a7ca) icf_edit_indi_pane_cp01

0xa7d6,	// (0x0000a7d6) vtchi_query_pane

0x6972,	// (0x00006972) icf_edit_indi_pane_g1_ParamLimits

0x6972,	// (0x00006972) icf_edit_indi_pane_g1

0xa81d,	// (0x0000a81d) icf_edit_indi_pane_g2_ParamLimits

0xa81d,	// (0x0000a81d) icf_edit_indi_pane_g2

0x0001,

0xb21b,	// (0x0000b21b) icf_edit_indi_pane_g_ParamLimits

0xb21b,	// (0x0000b21b) icf_edit_indi_pane_g

0xa829,	// (0x0000a829) icf_edit_indi_pane_t1

0xa837,	// (0x0000a837) bg_input_focus_pane_cp042

0x0d12,	// (0x00000d12) vtchi_button_pane

0xa840,	// (0x0000a840) vtchi_query_pane_t1

0xa84e,	// (0x0000a84e) vtchi_query_pane_t2

0xa85c,	// (0x0000a85c) vtchi_query_pane_t3

0x0002,

0xb220,	// (0x0000b220) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa86a,	// (0x0000a86a) vtchi_button_pane_g1

0x8668,	// (0x00008668) ituss_sks_pane_g1

0xa872,	// (0x0000a872) ituss_sks_pane_g2

0x0001,

0xb227,	// (0x0000b227) ituss_sks_pane_g

0xa87b,	// (0x0000a87b) ituss_sks_pane_t1

0xa889,	// (0x0000a889) ituss_sks_pane_t2

0x0001,

0xb22c,	// (0x0000b22c) ituss_sks_pane_t

0x5e50,	// (0x00005e50) indicator_nsta_pane_cp_g1

0x5e59,	// (0x00005e59) indicator_nsta_pane_cp_g2

0x5e61,	// (0x00005e61) indicator_nsta_pane_cp_g3

0x5e69,	// (0x00005e69) indicator_nsta_pane_cp_g4

0x5e71,	// (0x00005e71) indicator_nsta_pane_cp_g5

0x5e79,	// (0x00005e79) indicator_nsta_pane_cp_g6

0x0005,

0xaddd,	// (0x0000addd) indicator_nsta_pane_cp_g

0xe88f,	// (0x0000e88f) cell_graphic2_pane_t2_ParamLimits

0xe88f,	// (0x0000e88f) cell_graphic2_pane_t2

0x0001,

0xf0c1,	// (0x0000f0c1) cell_graphic2_pane_t_ParamLimits

0xf0c1,	// (0x0000f0c1) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

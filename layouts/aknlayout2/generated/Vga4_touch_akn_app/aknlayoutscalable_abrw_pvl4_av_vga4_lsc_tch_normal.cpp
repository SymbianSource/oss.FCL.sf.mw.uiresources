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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00013819 };

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
0xa5c2,	// (0x0001dddb) Screen

0xa5ce,	// (0x0001dde7) application_window_ParamLimits

0xa5ce,	// (0x0001dde7) application_window

0xc6f9,	// (0x0001ff12) screen_g1

0x92e9,	// (0x0001cb02) area_bottom_pane_ParamLimits

0x92e9,	// (0x0001cb02) area_bottom_pane

0xdfb1,	// (0x000217ca) area_top_pane_ParamLimits

0xdfb1,	// (0x000217ca) area_top_pane

0xe04f,	// (0x00021868) main_pane_ParamLimits

0xe04f,	// (0x00021868) main_pane

0xc703,	// (0x0001ff1c) misc_graphics

0xb3e7,	// (0x0001ec00) battery_pane_ParamLimits

0xb3e7,	// (0x0001ec00) battery_pane

0x2dc6,	// (0x000165df) bg_status_flat_pane_g8

0x2dce,	// (0x000165e7) bg_status_flat_pane_g9

0x20ad,	// (0x000158c6) context_pane_ParamLimits

0x20ad,	// (0x000158c6) context_pane

0xb55e,	// (0x0001ed77) navi_pane_ParamLimits

0xb55e,	// (0x0001ed77) navi_pane

0xb5e8,	// (0x0001ee01) signal_pane_ParamLimits

0xb5e8,	// (0x0001ee01) signal_pane

0x0008,

0xf84a,	// (0x00023063) bg_status_flat_pane_g

0xb678,	// (0x0001ee91) status_pane_g1_ParamLimits

0xb678,	// (0x0001ee91) status_pane_g1

0xb68e,	// (0x0001eea7) status_pane_g2_ParamLimits

0xb68e,	// (0x0001eea7) status_pane_g2

0x22e6,	// (0x00015aff) status_pane_g3_ParamLimits

0x22e6,	// (0x00015aff) status_pane_g3

0x0004,

0xf776,	// (0x00022f8f) status_pane_g_ParamLimits

0xf776,	// (0x00022f8f) status_pane_g

0xb69a,	// (0x0001eeb3) title_pane_ParamLimits

0xb69a,	// (0x0001eeb3) title_pane

0xb701,	// (0x0001ef1a) uni_indicator_pane_ParamLimits

0xb701,	// (0x0001ef1a) uni_indicator_pane

0x1f07,	// (0x00015720) bg_list_pane_ParamLimits

0x1f07,	// (0x00015720) bg_list_pane

0xb358,	// (0x0001eb71) find_pane

0x25cb,	// (0x00015de4) listscroll_app_pane_ParamLimits

0x25cb,	// (0x00015de4) listscroll_app_pane

0x1f3b,	// (0x00015754) listscroll_form_pane

0x95dd,	// (0x0001cdf6) listscroll_gen_pane_ParamLimits

0x95dd,	// (0x0001cdf6) listscroll_gen_pane

0xeb73,	// (0x0002238c) listscroll_set_pane

0x398b,	// (0x000171a4) main_idle_act_pane

0x1c00,	// (0x00015419) main_idle_trad_pane

0x1c00,	// (0x00015419) main_list_empty_pane

0x1f2f,	// (0x00015748) main_midp_pane

0x1f55,	// (0x0001576e) main_pane_g1_ParamLimits

0x1f55,	// (0x0001576e) main_pane_g1

0x95f1,	// (0x0001ce0a) popup_ai_message_window_ParamLimits

0x95f1,	// (0x0001ce0a) popup_ai_message_window

0x9691,	// (0x0001ceaa) popup_fep_china_uni_window_ParamLimits

0x9691,	// (0x0001ceaa) popup_fep_china_uni_window

0xebb5,	// (0x000223ce) popup_fep_japan_candidate_window_ParamLimits

0xebb5,	// (0x000223ce) popup_fep_japan_candidate_window

0xebdf,	// (0x000223f8) popup_fep_japan_predictive_window_ParamLimits

0xebdf,	// (0x000223f8) popup_fep_japan_predictive_window

0x96f1,	// (0x0001cf0a) popup_find_window

0x970e,	// (0x0001cf27) popup_grid_graphic_window_ParamLimits

0x970e,	// (0x0001cf27) popup_grid_graphic_window

0xec15,	// (0x0002242e) popup_large_graphic_colour_window

0x97b8,	// (0x0001cfd1) popup_menu_window_ParamLimits

0x97b8,	// (0x0001cfd1) popup_menu_window

0x99a8,	// (0x0001d1c1) popup_note_image_window

0x9968,	// (0x0001d181) popup_note_wait_window_ParamLimits

0x9968,	// (0x0001d181) popup_note_wait_window

0x99c0,	// (0x0001d1d9) popup_note_window_ParamLimits

0x99c0,	// (0x0001d1d9) popup_note_window

0x9a6e,	// (0x0001d287) popup_query_code_window_ParamLimits

0x9a6e,	// (0x0001d287) popup_query_code_window

0xec3b,	// (0x00022454) popup_query_data_code_window_ParamLimits

0xec3b,	// (0x00022454) popup_query_data_code_window

0x9aae,	// (0x0001d2c7) popup_query_data_window_ParamLimits

0x9aae,	// (0x0001d2c7) popup_query_data_window

0x9b42,	// (0x0001d35b) popup_query_sat_info_window_ParamLimits

0x9b42,	// (0x0001d35b) popup_query_sat_info_window

0x9bed,	// (0x0001d406) popup_snote_single_graphic_window_ParamLimits

0x9bed,	// (0x0001d406) popup_snote_single_graphic_window

0x9bed,	// (0x0001d406) popup_snote_single_text_window_ParamLimits

0x9bed,	// (0x0001d406) popup_snote_single_text_window

0xec5e,	// (0x00022477) popup_sub_window_general

0xecb4,	// (0x000224cd) popup_window_general_ParamLimits

0xecb4,	// (0x000224cd) popup_window_general

0x1f6b,	// (0x00015784) power_save_pane

0xeb07,	// (0x00022320) control_pane_g1_ParamLimits

0xeb07,	// (0x00022320) control_pane_g1

0xeb2a,	// (0x00022343) control_pane_g2_ParamLimits

0xeb2a,	// (0x00022343) control_pane_g2

0x1eca,	// (0x000156e3) control_pane_g3_ParamLimits

0x1eca,	// (0x000156e3) control_pane_g3

0x0007,

0xf75e,	// (0x00022f77) control_pane_g_ParamLimits

0xf75e,	// (0x00022f77) control_pane_g

0x94f4,	// (0x0001cd0d) control_pane_t1_ParamLimits

0x94f4,	// (0x0001cd0d) control_pane_t1

0x9544,	// (0x0001cd5d) control_pane_t2_ParamLimits

0x9544,	// (0x0001cd5d) control_pane_t2

0x0002,

0xf76f,	// (0x00022f88) control_pane_t_ParamLimits

0xf76f,	// (0x00022f88) control_pane_t

0x1def,	// (0x00015608) navi_navi_volume_pane_cp1

0x1df7,	// (0x00015610) status_small_icon_pane

0x1dff,	// (0x00015618) status_small_pane_g1_ParamLimits

0x1dff,	// (0x00015618) status_small_pane_g1

0x1e33,	// (0x0001564c) status_small_pane_g2_ParamLimits

0x1e33,	// (0x0001564c) status_small_pane_g2

0x1e3f,	// (0x00015658) status_small_pane_g3_ParamLimits

0x1e3f,	// (0x00015658) status_small_pane_g3

0xb320,	// (0x0001eb39) status_small_pane_g4_ParamLimits

0xb320,	// (0x0001eb39) status_small_pane_g4

0xb32e,	// (0x0001eb47) status_small_pane_g5_ParamLimits

0xb32e,	// (0x0001eb47) status_small_pane_g5

0x1e65,	// (0x0001567e) status_small_pane_g6_ParamLimits

0x1e65,	// (0x0001567e) status_small_pane_g6

0x0007,

0xf74d,	// (0x00022f66) status_small_pane_g_ParamLimits

0xf74d,	// (0x00022f66) status_small_pane_g

0x1e94,	// (0x000156ad) status_small_pane_t1

0xb344,	// (0x0001eb5d) status_small_wait_pane_ParamLimits

0xb344,	// (0x0001eb5d) status_small_wait_pane

0xb10c,	// (0x0001e925) aid_levels_signal_ParamLimits

0xb10c,	// (0x0001e925) aid_levels_signal

0xb124,	// (0x0001e93d) signal_pane_g1_ParamLimits

0xb124,	// (0x0001e93d) signal_pane_g1

0xb13f,	// (0x0001e958) signal_pane_g2_ParamLimits

0xb13f,	// (0x0001e958) signal_pane_g2

0x0003,

0xf6de,	// (0x00022ef7) signal_pane_g_ParamLimits

0xf6de,	// (0x00022ef7) signal_pane_g

0x1636,	// (0x00014e4f) context_pane_g1

0xa5de,	// (0x0001ddf7) title_pane_g1

0xa621,	// (0x0001de3a) title_pane_t1

0xc719,	// (0x0001ff32) title_pane_t2

0xc73f,	// (0x0001ff58) title_pane_t3

0x0002,

0xf532,	// (0x00022d4b) title_pane_t

0xb729,	// (0x0001ef42) aid_levels_battery_ParamLimits

0xb729,	// (0x0001ef42) aid_levels_battery

0xb745,	// (0x0001ef5e) battery_pane_g1_ParamLimits

0xb745,	// (0x0001ef5e) battery_pane_g1

0xb762,	// (0x0001ef7b) battery_pane_g2_ParamLimits

0xb762,	// (0x0001ef7b) battery_pane_g2

0x0001,

0xf781,	// (0x00022f9a) battery_pane_g_ParamLimits

0xf781,	// (0x00022f9a) battery_pane_g

0xb9b1,	// (0x0001f1ca) uni_indicator_pane_g1

0xb9c7,	// (0x0001f1e0) uni_indicator_pane_g2

0xb9dd,	// (0x0001f1f6) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x0002310b) uni_indicator_pane_g

0x1a63,	// (0x0001527c) navi_icon_pane_ParamLimits

0x1a63,	// (0x0001527c) navi_icon_pane

0x19aa,	// (0x000151c3) navi_midp_pane

0x1a7f,	// (0x00015298) navi_navi_pane

0x1a89,	// (0x000152a2) navi_text_pane_ParamLimits

0x1a89,	// (0x000152a2) navi_text_pane

0xc6f9,	// (0x0001ff12) status_small_wait_pane_g1

0xca7a,	// (0x00020293) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x00023106) status_small_wait_pane_g

0xb950,	// (0x0001f169) navi_navi_icon_text_pane

0xb958,	// (0x0001f171) navi_navi_pane_g1_ParamLimits

0xb958,	// (0x0001f171) navi_navi_pane_g1

0xb96a,	// (0x0001f183) navi_navi_pane_g2_ParamLimits

0xb96a,	// (0x0001f183) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x000230d4) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x000230d4) navi_navi_pane_g

0x344f,	// (0x00016c68) navi_navi_tabs_pane

0xb97c,	// (0x0001f195) navi_navi_text_pane

0xb950,	// (0x0001f169) navi_navi_volume_pane

0xb93e,	// (0x0001f157) navi_text_pane_t1

0xb932,	// (0x0001f14b) navi_icon_pane_g1

0x3346,	// (0x00016b5f) navi_navi_text_pane_t1

0x9ecc,	// (0x0001d6e5) navi_navi_volume_pane_g1

0x9ed4,	// (0x0001d6ed) volume_small_pane

0xb88e,	// (0x0001f0a7) navi_navi_icon_text_pane_g1

0xb896,	// (0x0001f0af) navi_navi_icon_text_pane_t1

0x1a7f,	// (0x00015298) navi_tabs_2_long_pane

0x1a7f,	// (0x00015298) navi_tabs_2_pane

0x1a7f,	// (0x00015298) navi_tabs_3_long_pane

0x1a7f,	// (0x00015298) navi_tabs_3_pane

0x1a7f,	// (0x00015298) navi_tabs_4_pane

0x9eac,	// (0x0001d6c5) tabs_2_active_pane_ParamLimits

0x9eac,	// (0x0001d6c5) tabs_2_active_pane

0x9ebc,	// (0x0001d6d5) tabs_2_passive_pane_ParamLimits

0x9ebc,	// (0x0001d6d5) tabs_2_passive_pane

0x9e7a,	// (0x0001d693) tabs_3_active_pane_ParamLimits

0x9e7a,	// (0x0001d693) tabs_3_active_pane

0x9e8a,	// (0x0001d6a3) tabs_3_passive_pane_ParamLimits

0x9e8a,	// (0x0001d6a3) tabs_3_passive_pane

0x9e9b,	// (0x0001d6b4) tabs_3_passive_pane_cp_ParamLimits

0x9e9b,	// (0x0001d6b4) tabs_3_passive_pane_cp

0x9e36,	// (0x0001d64f) tabs_4_active_pane_ParamLimits

0x9e36,	// (0x0001d64f) tabs_4_active_pane

0x9e47,	// (0x0001d660) tabs_4_passive_pane_ParamLimits

0x9e47,	// (0x0001d660) tabs_4_passive_pane

0x9e58,	// (0x0001d671) tabs_4_passive_pane_cp_ParamLimits

0x9e58,	// (0x0001d671) tabs_4_passive_pane_cp

0x9e69,	// (0x0001d682) tabs_4_passive_pane_cp2_ParamLimits

0x9e69,	// (0x0001d682) tabs_4_passive_pane_cp2

0x9e12,	// (0x0001d62b) tabs_2_long_active_pane_ParamLimits

0x9e12,	// (0x0001d62b) tabs_2_long_active_pane

0x9e24,	// (0x0001d63d) tabs_2_long_passive_pane_ParamLimits

0x9e24,	// (0x0001d63d) tabs_2_long_passive_pane

0x9dd9,	// (0x0001d5f2) tabs_3_long_active_pane_ParamLimits

0x9dd9,	// (0x0001d5f2) tabs_3_long_active_pane

0x9dec,	// (0x0001d605) tabs_3_long_passive_pane_ParamLimits

0x9dec,	// (0x0001d605) tabs_3_long_passive_pane

0x9dff,	// (0x0001d618) tabs_3_long_passive_pane_cp_ParamLimits

0x9dff,	// (0x0001d618) tabs_3_long_passive_pane_cp

0xee12,	// (0x0002262b) volume_small_pane_g1

0x9d88,	// (0x0001d5a1) volume_small_pane_g2

0x9d91,	// (0x0001d5aa) volume_small_pane_g3

0x9d9a,	// (0x0001d5b3) volume_small_pane_g4

0x9da3,	// (0x0001d5bc) volume_small_pane_g5

0x9dac,	// (0x0001d5c5) volume_small_pane_g6

0x9db5,	// (0x0001d5ce) volume_small_pane_g7

0x9dbe,	// (0x0001d5d7) volume_small_pane_g8

0x9dc7,	// (0x0001d5e0) volume_small_pane_g9

0x9dd0,	// (0x0001d5e9) volume_small_pane_g10

0x0009,

0xf887,	// (0x000230a0) volume_small_pane_g

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp2_ParamLimits

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp2

0xa6ad,	// (0x0001dec6) tabs_3_active_pane_g1

0xa6b5,	// (0x0001dece) tabs_3_active_pane_t1

0xc751,	// (0x0001ff6a) bg_passive_tab_pane_cp2_ParamLimits

0xc751,	// (0x0001ff6a) bg_passive_tab_pane_cp2

0xa6ad,	// (0x0001dec6) tabs_3_passive_pane_g1

0xa6b5,	// (0x0001dece) tabs_3_passive_pane_t1

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp3_ParamLimits

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp3

0xa6c7,	// (0x0001dee0) tabs_4_active_pane_g1

0xa6cf,	// (0x0001dee8) tabs_4_active_pane_t1

0xc751,	// (0x0001ff6a) bg_passive_tab_pane_cp3_ParamLimits

0xc751,	// (0x0001ff6a) bg_passive_tab_pane_cp3

0xa6c7,	// (0x0001dee0) tabs_4_1_passive_pane_g1

0xa6cf,	// (0x0001dee8) tabs_4_1_passive_pane_t1

0x1f2f,	// (0x00015748) list_highlight_pane_cp2

0xba70,	// (0x0001f289) list_set_pane_ParamLimits

0xba70,	// (0x0001f289) list_set_pane

0xbb32,	// (0x0001f34b) main_pane_set_t1_ParamLimits

0xbb32,	// (0x0001f34b) main_pane_set_t1

0xbb52,	// (0x0001f36b) main_pane_set_t2_ParamLimits

0xbb52,	// (0x0001f36b) main_pane_set_t2

0xbb66,	// (0x0001f37f) main_pane_set_t3_ParamLimits

0xbb66,	// (0x0001f37f) main_pane_set_t3

0xbb7a,	// (0x0001f393) main_pane_set_t4_ParamLimits

0xbb7a,	// (0x0001f393) main_pane_set_t4

0x0003,

0xf957,	// (0x00023170) main_pane_set_t_ParamLimits

0xf957,	// (0x00023170) main_pane_set_t

0xbb8e,	// (0x0001f3a7) setting_code_pane

0x3ad9,	// (0x000172f2) setting_slider_graphic_pane

0x3ad9,	// (0x000172f2) setting_slider_pane

0x3ad9,	// (0x000172f2) setting_text_pane

0x3ad9,	// (0x000172f2) setting_volume_pane

0xe15e,	// (0x00021977) volume_set_pane

0xc75f,	// (0x0001ff78) bg_set_opt_pane_cp

0xe168,	// (0x00021981) setting_slider_pane_t1

0xe181,	// (0x0002199a) setting_slider_pane_t2

0xe19b,	// (0x000219b4) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00022d52) setting_slider_pane_t

0xe1b3,	// (0x000219cc) slider_set_pane

0xc703,	// (0x0001ff1c) bg_set_opt_pane_cp2

0xc76d,	// (0x0001ff86) setting_slider_graphic_pane_g1

0xe1c9,	// (0x000219e2) setting_slider_graphic_pane_t1

0xe1d9,	// (0x000219f2) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00022d59) setting_slider_graphic_pane_t

0xe1e9,	// (0x00021a02) slider_set_pane_cp

0xc703,	// (0x0001ff1c) input_focus_pane_cp1

0x3972,	// (0x0001718b) list_set_text_pane

0xc6f9,	// (0x0001ff12) setting_text_pane_g1

0xc703,	// (0x0001ff1c) input_focus_pane_cp2

0xc6f9,	// (0x0001ff12) setting_code_pane_g1

0xc776,	// (0x0001ff8f) setting_code_pane_t1

0xc784,	// (0x0001ff9d) set_text_pane_t1_ParamLimits

0xc784,	// (0x0001ff9d) set_text_pane_t1

0xe36b,	// (0x00021b84) set_opt_bg_pane_g1

0xe373,	// (0x00021b8c) set_opt_bg_pane_g2

0x394a,	// (0x00017163) set_opt_bg_pane_g3

0xe383,	// (0x00021b9c) set_opt_bg_pane_g4

0xe38b,	// (0x00021ba4) set_opt_bg_pane_g5

0xe393,	// (0x00021bac) set_opt_bg_pane_g6

0x3954,	// (0x0001716d) set_opt_bg_pane_g7

0x395e,	// (0x00017177) set_opt_bg_pane_g8

0x3968,	// (0x00017181) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x0002315d) set_opt_bg_pane_g

0x393d,	// (0x00017156) slider_set_pane_g1

0xeef2,	// (0x0002270b) slider_set_pane_g2

0x0006,

0xf935,	// (0x0002314e) slider_set_pane_g

0xee7a,	// (0x00022693) volume_set_pane_g1

0xee84,	// (0x0002269d) volume_set_pane_g2

0xee8e,	// (0x000226a7) volume_set_pane_g3

0xee98,	// (0x000226b1) volume_set_pane_g4

0xeea2,	// (0x000226bb) volume_set_pane_g5

0xeeac,	// (0x000226c5) volume_set_pane_g6

0xeeb6,	// (0x000226cf) volume_set_pane_g7

0xeec0,	// (0x000226d9) volume_set_pane_g8

0xeeca,	// (0x000226e3) volume_set_pane_g9

0xeed4,	// (0x000226ed) volume_set_pane_g10

0x0009,

0xf90d,	// (0x00023126) volume_set_pane_g

0xa6e1,	// (0x0001defa) indicator_pane_ParamLimits

0xa6e1,	// (0x0001defa) indicator_pane

0xa70d,	// (0x0001df26) main_idle_pane_g2_ParamLimits

0xa70d,	// (0x0001df26) main_idle_pane_g2

0xa745,	// (0x0001df5e) main_pane_idle_g1_ParamLimits

0xa745,	// (0x0001df5e) main_pane_idle_g1

0xc79e,	// (0x0001ffb7) popup_clock_digital_analogue_window_ParamLimits

0xc79e,	// (0x0001ffb7) popup_clock_digital_analogue_window

0xa76f,	// (0x0001df88) soft_indicator_pane_ParamLimits

0xa76f,	// (0x0001df88) soft_indicator_pane

0xa78b,	// (0x0001dfa4) wallpaper_pane_ParamLimits

0xa78b,	// (0x0001dfa4) wallpaper_pane

0xc6f9,	// (0x0001ff12) wallpaper_pane_g1

0xa79d,	// (0x0001dfb6) indicator_pane_g1_ParamLimits

0xa79d,	// (0x0001dfb6) indicator_pane_g1

0x3e43,	// (0x0001765c) navi_navi_icon_text_pane_srt_g1

0xc7cc,	// (0x0001ffe5) soft_indicator_pane_t1

0xc7e6,	// (0x0001ffff) aid_ps_area_pane

0xa7b6,	// (0x0001dfcf) aid_ps_clock_pane

0xc7f7,	// (0x00020010) aid_ps_indicator_pane

0xc803,	// (0x0002001c) indicator_ps_pane_ParamLimits

0xc803,	// (0x0002001c) indicator_ps_pane

0xc812,	// (0x0002002b) power_save_pane_g1_ParamLimits

0xc812,	// (0x0002002b) power_save_pane_g1

0xc81e,	// (0x00020037) power_save_pane_g2_ParamLimits

0xc81e,	// (0x00020037) power_save_pane_g2

0xdf91,	// (0x000217aa) aid_navinavi_width_pane

0xc7e6,	// (0x0001ffff) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00022d5e) power_save_pane_g_ParamLimits

0xf545,	// (0x00022d5e) power_save_pane_g

0xc82c,	// (0x00020045) power_save_pane_t1_ParamLimits

0xc82c,	// (0x00020045) power_save_pane_t1

0xa7b6,	// (0x0001dfcf) aid_ps_clock_pane_ParamLimits

0xc7f7,	// (0x00020010) aid_ps_indicator_pane_ParamLimits

0xc83e,	// (0x00020057) power_save_pane_t4_ParamLimits

0xc83e,	// (0x00020057) power_save_pane_t4

0x0001,

0xf54a,	// (0x00022d63) power_save_pane_t_ParamLimits

0xf54a,	// (0x00022d63) power_save_pane_t

0xc868,	// (0x00020081) power_save_t3_ParamLimits

0xc868,	// (0x00020081) power_save_t3

0xc853,	// (0x0002006c) power_save_t2_ParamLimits

0xc853,	// (0x0002006c) power_save_t2

0xc87d,	// (0x00020096) indicator_ps_pane_g1

0xa7c4,	// (0x0001dfdd) ai_gene_pane_ParamLimits

0xa7c4,	// (0x0001dfdd) ai_gene_pane

0xa7db,	// (0x0001dff4) ai_links_pane_ParamLimits

0xa7db,	// (0x0001dff4) ai_links_pane

0xa7f3,	// (0x0001e00c) indicator_pane_cp1_ParamLimits

0xa7f3,	// (0x0001e00c) indicator_pane_cp1

0xa802,	// (0x0001e01b) main_pane_idle_g1_cp_ParamLimits

0xa802,	// (0x0001e01b) main_pane_idle_g1_cp

0xc886,	// (0x0002009f) popup_ai_links_title_window

0xa81a,	// (0x0001e033) soft_indicator_pane_cp1_ParamLimits

0xa81a,	// (0x0001e033) soft_indicator_pane_cp1

0x36fe,	// (0x00016f17) ai_links_pane_g1

0x3707,	// (0x00016f20) grid_ai_links_pane

0xb9a8,	// (0x0001f1c1) ai_gene_pane_1

0x36ec,	// (0x00016f05) ai_gene_pane_2

0x36f5,	// (0x00016f0e) list_highlight_pane_cp4

0xb984,	// (0x0001f19d) cell_ai_link_pane_ParamLimits

0xb984,	// (0x0001f19d) cell_ai_link_pane

0x36bb,	// (0x00016ed4) cell_ai_link_pane_g1

0xca7a,	// (0x00020293) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x00023101) cell_ai_link_pane_g

0xc703,	// (0x0001ff1c) grid_highlight_cp2

0xc703,	// (0x0001ff1c) bg_popup_sub_pane_cp1

0xc89d,	// (0x000200b6) popup_ai_links_title_window_t1

0x3607,	// (0x00016e20) ai_gene_pane_1_g1_ParamLimits

0x3607,	// (0x00016e20) ai_gene_pane_1_g1

0x3613,	// (0x00016e2c) ai_gene_pane_1_g2_ParamLimits

0x3613,	// (0x00016e2c) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x000230f7) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x000230f7) ai_gene_pane_1_g

0x3620,	// (0x00016e39) ai_gene_pane_1_t1_ParamLimits

0x3620,	// (0x00016e39) ai_gene_pane_1_t1

0x3654,	// (0x00016e6d) grid_ai_soft_ind_pane

0x35f2,	// (0x00016e0b) ai_gene_pane_2_t1_ParamLimits

0x35f2,	// (0x00016e0b) ai_gene_pane_2_t1

0xa82e,	// (0x0001e047) main_pane_empty_t1_ParamLimits

0xa82e,	// (0x0001e047) main_pane_empty_t1

0xa846,	// (0x0001e05f) main_pane_empty_t2_ParamLimits

0xa846,	// (0x0001e05f) main_pane_empty_t2

0xa85b,	// (0x0001e074) main_pane_empty_t3_ParamLimits

0xa85b,	// (0x0001e074) main_pane_empty_t3

0xa86d,	// (0x0001e086) main_pane_empty_t4_ParamLimits

0xa86d,	// (0x0001e086) main_pane_empty_t4

0xa87f,	// (0x0001e098) main_pane_empty_t5_ParamLimits

0xa87f,	// (0x0001e098) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00022d68) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00022d68) main_pane_empty_t

0xe429,	// (0x00021c42) bg_popup_window_pane_ParamLimits

0xe429,	// (0x00021c42) bg_popup_window_pane

0x3354,	// (0x00016b6d) find_popup_pane_cp2_ParamLimits

0x3354,	// (0x00016b6d) find_popup_pane_cp2

0x3360,	// (0x00016b79) heading_pane_ParamLimits

0x3360,	// (0x00016b79) heading_pane

0xc703,	// (0x0001ff1c) bg_popup_sub_pane

0xb8b3,	// (0x0001f0cc) bg_popup_window_pane_g1_ParamLimits

0xb8b3,	// (0x0001f0cc) bg_popup_window_pane_g1

0xb8c2,	// (0x0001f0db) bg_popup_window_pane_g2_ParamLimits

0xb8c2,	// (0x0001f0db) bg_popup_window_pane_g2

0xb8ce,	// (0x0001f0e7) bg_popup_window_pane_g3_ParamLimits

0xb8ce,	// (0x0001f0e7) bg_popup_window_pane_g3

0xb8da,	// (0x0001f0f3) bg_popup_window_pane_g4_ParamLimits

0xb8da,	// (0x0001f0f3) bg_popup_window_pane_g4

0xb8e9,	// (0x0001f102) bg_popup_window_pane_g5_ParamLimits

0xb8e9,	// (0x0001f102) bg_popup_window_pane_g5

0xb8f9,	// (0x0001f112) bg_popup_window_pane_g6_ParamLimits

0xb8f9,	// (0x0001f112) bg_popup_window_pane_g6

0xb905,	// (0x0001f11e) bg_popup_window_pane_g7_ParamLimits

0xb905,	// (0x0001f11e) bg_popup_window_pane_g7

0xb914,	// (0x0001f12d) bg_popup_window_pane_g8_ParamLimits

0xb914,	// (0x0001f12d) bg_popup_window_pane_g8

0xb923,	// (0x0001f13c) bg_popup_window_pane_g9_ParamLimits

0xb923,	// (0x0001f13c) bg_popup_window_pane_g9

0x333a,	// (0x00016b53) bg_popup_window_pane_g10_ParamLimits

0x333a,	// (0x00016b53) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x000230bf) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x000230bf) bg_popup_window_pane_g

0x3263,	// (0x00016a7c) bg_popup_heading_pane_ParamLimits

0x3263,	// (0x00016a7c) bg_popup_heading_pane

0xef7a,	// (0x00022793) tabs_4_passive_pane_cp_srt_ParamLimits

0xef7a,	// (0x00022793) tabs_4_passive_pane_cp_srt

0xef8c,	// (0x000227a5) tabs_4_passive_pane_srt_ParamLimits

0x3277,	// (0x00016a90) heading_pane_g2

0xef8c,	// (0x000227a5) tabs_4_passive_pane_srt

0x25cb,	// (0x00015de4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x25cb,	// (0x00015de4) bg_passive_tab_pane_cp3_srt

0x327f,	// (0x00016a98) heading_pane_t1_ParamLimits

0x327f,	// (0x00016a98) heading_pane_t1

0x3296,	// (0x00016aaf) heading_pane_t2_ParamLimits

0x3296,	// (0x00016aaf) heading_pane_t2

0x0001,

0xf8a1,	// (0x000230ba) heading_pane_t_ParamLimits

0xf8a1,	// (0x000230ba) heading_pane_t

0x2d8e,	// (0x000165a7) bg_popup_heading_pane_g1

0x2e3d,	// (0x00016656) bg_popup_heading_pane_g2

0x2e47,	// (0x00016660) bg_popup_heading_pane_g3

0x2e51,	// (0x0001666a) bg_popup_heading_pane_g4

0x2e5b,	// (0x00016674) bg_popup_heading_pane_g5

0x2e65,	// (0x0001667e) bg_popup_heading_pane_g6

0x2e6d,	// (0x00016686) bg_popup_heading_pane_g7

0x2e75,	// (0x0001668e) bg_popup_heading_pane_g8

0x2e7f,	// (0x00016698) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x00023076) bg_popup_heading_pane_g

0x24a7,	// (0x00015cc0) bg_popup_sub_pane_g1

0x24b7,	// (0x00015cd0) bg_popup_sub_pane_g2

0x24af,	// (0x00015cc8) bg_popup_sub_pane_g3

0x24c7,	// (0x00015ce0) bg_popup_sub_pane_g4

0x24bf,	// (0x00015cd8) bg_popup_sub_pane_g5

0x24cf,	// (0x00015ce8) bg_popup_sub_pane_g6

0x24d7,	// (0x00015cf0) bg_popup_sub_pane_g7

0x24e7,	// (0x00015d00) bg_popup_sub_pane_g8

0x24df,	// (0x00015cf8) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x00023050) bg_popup_sub_pane_g

0xc751,	// (0x0001ff6a) bg_popup_window_pane_cp5_ParamLimits

0xc751,	// (0x0001ff6a) bg_popup_window_pane_cp5

0xc8ba,	// (0x000200d3) popup_note_window_g1_ParamLimits

0xc8ba,	// (0x000200d3) popup_note_window_g1

0xc8c6,	// (0x000200df) popup_note_window_t1_ParamLimits

0xc8c6,	// (0x000200df) popup_note_window_t1

0xc8dc,	// (0x000200f5) popup_note_window_t2_ParamLimits

0xc8dc,	// (0x000200f5) popup_note_window_t2

0xc8f2,	// (0x0002010b) popup_note_window_t3_ParamLimits

0xc8f2,	// (0x0002010b) popup_note_window_t3

0xc908,	// (0x00020121) popup_note_window_t4_ParamLimits

0xc908,	// (0x00020121) popup_note_window_t4

0xc930,	// (0x00020149) popup_note_window_t5_ParamLimits

0xc930,	// (0x00020149) popup_note_window_t5

0x0004,

0xf55a,	// (0x00022d73) popup_note_window_t_ParamLimits

0xf55a,	// (0x00022d73) popup_note_window_t

0xc97a,	// (0x00020193) bg_popup_window_pane_cp6_ParamLimits

0xc97a,	// (0x00020193) bg_popup_window_pane_cp6

0x2d0a,	// (0x00016523) popup_note_image_window_g1_ParamLimits

0x2d0a,	// (0x00016523) popup_note_image_window_g1

0x2d16,	// (0x0001652f) popup_note_image_window_g2_ParamLimits

0x2d16,	// (0x0001652f) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x00023044) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x00023044) popup_note_image_window_g

0x2d2f,	// (0x00016548) popup_note_image_window_t1_ParamLimits

0x2d2f,	// (0x00016548) popup_note_image_window_t1

0x2d48,	// (0x00016561) popup_note_image_window_t2_ParamLimits

0x2d48,	// (0x00016561) popup_note_image_window_t2

0x2d61,	// (0x0001657a) popup_note_image_window_t3_ParamLimits

0x2d61,	// (0x0001657a) popup_note_image_window_t3

0x0002,

0xf830,	// (0x00023049) popup_note_image_window_t_ParamLimits

0xf830,	// (0x00023049) popup_note_image_window_t

0x2bca,	// (0x000163e3) bg_popup_window_pane_cp7_ParamLimits

0x2bca,	// (0x000163e3) bg_popup_window_pane_cp7

0x2bfa,	// (0x00016413) popup_note_wait_window_g1_ParamLimits

0x2bfa,	// (0x00016413) popup_note_wait_window_g1

0x2c06,	// (0x0001641f) popup_note_wait_window_g2_ParamLimits

0x2c06,	// (0x0001641f) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x00023032) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x00023032) popup_note_wait_window_g

0x2c1e,	// (0x00016437) popup_note_wait_window_t1_ParamLimits

0x2c1e,	// (0x00016437) popup_note_wait_window_t1

0x2c45,	// (0x0001645e) popup_note_wait_window_t2_ParamLimits

0x2c45,	// (0x0001645e) popup_note_wait_window_t2

0x2c63,	// (0x0001647c) popup_note_wait_window_t3_ParamLimits

0x2c63,	// (0x0001647c) popup_note_wait_window_t3

0x2c76,	// (0x0001648f) popup_note_wait_window_t4_ParamLimits

0x2c76,	// (0x0001648f) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x00023039) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x00023039) popup_note_wait_window_t

0x2c9b,	// (0x000164b4) wait_bar_pane_ParamLimits

0x2c9b,	// (0x000164b4) wait_bar_pane

0xc703,	// (0x0001ff1c) wait_anim_pane

0xc703,	// (0x0001ff1c) wait_border_pane

0xc6f9,	// (0x0001ff12) wait_anim_pane_g1

0xc6f9,	// (0x0001ff12) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00022ef2) wait_anim_pane_g

0x2b6e,	// (0x00016387) wait_border_pane_g1

0x2b79,	// (0x00016392) wait_border_pane_g2

0x2b82,	// (0x0001639b) wait_border_pane_g3

0x0002,

0xf812,	// (0x0002302b) wait_border_pane_g

0x29d8,	// (0x000161f1) bg_popup_window_pane_cp16_ParamLimits

0x29d8,	// (0x000161f1) bg_popup_window_pane_cp16

0x2ad8,	// (0x000162f1) indicator_popup_pane_cp4_ParamLimits

0x2ad8,	// (0x000162f1) indicator_popup_pane_cp4

0x2aec,	// (0x00016305) popup_query_data_window_t1_ParamLimits

0x2aec,	// (0x00016305) popup_query_data_window_t1

0x2afe,	// (0x00016317) popup_query_data_window_t2_ParamLimits

0x2afe,	// (0x00016317) popup_query_data_window_t2

0x2b17,	// (0x00016330) popup_query_data_window_t3_ParamLimits

0x2b17,	// (0x00016330) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x00023024) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x00023024) popup_query_data_window_t

0x2b31,	// (0x0001634a) query_popup_data_pane_ParamLimits

0x2b31,	// (0x0001634a) query_popup_data_pane

0x2b45,	// (0x0001635e) query_popup_data_pane_cp1_ParamLimits

0x2b45,	// (0x0001635e) query_popup_data_pane_cp1

0x29d8,	// (0x000161f1) bg_popup_window_pane_cp10_ParamLimits

0x29d8,	// (0x000161f1) bg_popup_window_pane_cp10

0x2a0a,	// (0x00016223) indicator_popup_pane_ParamLimits

0x2a0a,	// (0x00016223) indicator_popup_pane

0x2a2c,	// (0x00016245) popup_query_code_window_t1_ParamLimits

0x2a2c,	// (0x00016245) popup_query_code_window_t1

0x2a46,	// (0x0001625f) popup_query_code_window_t2_ParamLimits

0x2a46,	// (0x0001625f) popup_query_code_window_t2

0x2a8f,	// (0x000162a8) popup_query_code_window_t3_ParamLimits

0x2a8f,	// (0x000162a8) popup_query_code_window_t3

0x0002,

0xf804,	// (0x0002301d) popup_query_code_window_t_ParamLimits

0xf804,	// (0x0002301d) popup_query_code_window_t

0x2abe,	// (0x000162d7) query_popup_pane_ParamLimits

0x2abe,	// (0x000162d7) query_popup_pane

0xc97a,	// (0x00020193) bg_popup_window_pane_cp15_ParamLimits

0xc97a,	// (0x00020193) bg_popup_window_pane_cp15

0xc99a,	// (0x000201b3) indicator_popup_pane_cp1_ParamLimits

0xc99a,	// (0x000201b3) indicator_popup_pane_cp1

0xc9ad,	// (0x000201c6) indicator_popup_pane_cp2_ParamLimits

0xc9ad,	// (0x000201c6) indicator_popup_pane_cp2

0xc9c8,	// (0x000201e1) popup_query_data_code_window_g1_ParamLimits

0xc9c8,	// (0x000201e1) popup_query_data_code_window_g1

0xc9db,	// (0x000201f4) popup_query_data_code_window_t1_ParamLimits

0xc9db,	// (0x000201f4) popup_query_data_code_window_t1

0xc9ed,	// (0x00020206) popup_query_data_code_window_t2_ParamLimits

0xc9ed,	// (0x00020206) popup_query_data_code_window_t2

0xc9ff,	// (0x00020218) popup_query_data_code_window_t3_ParamLimits

0xc9ff,	// (0x00020218) popup_query_data_code_window_t3

0xca15,	// (0x0002022e) popup_query_data_code_window_t4_ParamLimits

0xca15,	// (0x0002022e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00022d7e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00022d7e) popup_query_data_code_window_t

0xed7d,	// (0x00022596) list_single_midp_graphic_pane_g3

0xca2f,	// (0x00020248) query_popup_data_pane_cp2_ParamLimits

0xca42,	// (0x0002025b) query_popup_pane_cp2_ParamLimits

0xca42,	// (0x0002025b) query_popup_pane_cp2

0xc703,	// (0x0001ff1c) bg_popup_window_pane_cp11

0x29bc,	// (0x000161d5) heading_pane_cp5

0x29c4,	// (0x000161dd) listscroll_popup_info_pane

0xc703,	// (0x0001ff1c) input_focus_pane_cp3

0xca5d,	// (0x00020276) query_popup_pane_t1

0xca6b,	// (0x00020284) list_popup_info_pane_ParamLimits

0xca6b,	// (0x00020284) list_popup_info_pane

0xca7a,	// (0x00020293) listscroll_popup_info_pane_g1

0xca82,	// (0x0002029b) scroll_pane_cp7

0xca8c,	// (0x000202a5) popup_info_list_pane_t1_ParamLimits

0xca8c,	// (0x000202a5) popup_info_list_pane_t1

0xcaa6,	// (0x000202bf) popup_info_list_pane_t2_ParamLimits

0xcaa6,	// (0x000202bf) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00022d87) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00022d87) popup_info_list_pane_t

0xc703,	// (0x0001ff1c) bg_popup_window_pane_cp12

0x3e5d,	// (0x00017676) find_popup_pane

0xc75f,	// (0x0001ff78) bg_popup_window_pane_cp3

0xcac0,	// (0x000202d9) heading_pane_cp3

0xcacf,	// (0x000202e8) listscroll_popup_graphic_pane

0xc703,	// (0x0001ff1c) bg_popup_window_pane_cp4

0xa8e1,	// (0x0001e0fa) heading_pane_cp4

0xcadf,	// (0x000202f8) listscroll_popup_colour_pane

0xa8eb,	// (0x0001e104) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa8eb,	// (0x0001e104) cell_large_graphic_colour_none_popup_pane

0xa8ff,	// (0x0001e118) grid_large_graphic_colour_popup_pane_ParamLimits

0xa8ff,	// (0x0001e118) grid_large_graphic_colour_popup_pane

0xa927,	// (0x0001e140) listscroll_popup_colour_pane_g1_ParamLimits

0xa927,	// (0x0001e140) listscroll_popup_colour_pane_g1

0xa93e,	// (0x0001e157) listscroll_popup_colour_pane_g2_ParamLimits

0xa93e,	// (0x0001e157) listscroll_popup_colour_pane_g2

0xa955,	// (0x0001e16e) listscroll_popup_colour_pane_g3_ParamLimits

0xa955,	// (0x0001e16e) listscroll_popup_colour_pane_g3

0xa965,	// (0x0001e17e) listscroll_popup_colour_pane_g4_ParamLimits

0xa965,	// (0x0001e17e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00022d8c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00022d8c) listscroll_popup_colour_pane_g

0xcae7,	// (0x00020300) scroll_pane_cp6_ParamLimits

0xcae7,	// (0x00020300) scroll_pane_cp6

0xa975,	// (0x0001e18e) cell_large_graphic_colour_popup_pane_ParamLimits

0xa975,	// (0x0001e18e) cell_large_graphic_colour_popup_pane

0xcaf9,	// (0x00020312) cell_large_graphic_colour_none_popup_pane_t1

0xc703,	// (0x0001ff1c) grid_highlight_pane_cp5

0xcb08,	// (0x00020321) cell_large_graphic_colour_popup_pane_g1

0xcb10,	// (0x00020329) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00022d95) cell_large_graphic_colour_popup_pane_g

0xcb18,	// (0x00020331) cell_large_graphic_colour_popup_pane_g2_copy1

0xcb21,	// (0x0002033a) grid_highlight_pane_cp4

0xcb29,	// (0x00020342) bg_popup_window_pane_cp8_ParamLimits

0xcb29,	// (0x00020342) bg_popup_window_pane_cp8

0xcb44,	// (0x0002035d) popup_snote_single_text_window_g1_ParamLimits

0xcb44,	// (0x0002035d) popup_snote_single_text_window_g1

0xcb56,	// (0x0002036f) popup_snote_single_text_window_t1_ParamLimits

0xcb56,	// (0x0002036f) popup_snote_single_text_window_t1

0xcb69,	// (0x00020382) popup_snote_single_text_window_t2_ParamLimits

0xcb69,	// (0x00020382) popup_snote_single_text_window_t2

0xcb7c,	// (0x00020395) popup_snote_single_text_window_t3_ParamLimits

0xcb7c,	// (0x00020395) popup_snote_single_text_window_t3

0xcbb5,	// (0x000203ce) popup_snote_single_text_window_t4_ParamLimits

0xcbb5,	// (0x000203ce) popup_snote_single_text_window_t4

0xcbe9,	// (0x00020402) popup_snote_single_text_window_t5_ParamLimits

0xcbe9,	// (0x00020402) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00022d9a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00022d9a) popup_snote_single_text_window_t

0xcc18,	// (0x00020431) bg_popup_window_pane_cp9_ParamLimits

0xcc18,	// (0x00020431) bg_popup_window_pane_cp9

0xcb44,	// (0x0002035d) popup_snote_single_graphic_window_g1_ParamLimits

0xcb44,	// (0x0002035d) popup_snote_single_graphic_window_g1

0xcc26,	// (0x0002043f) popup_snote_single_graphic_window_g2_ParamLimits

0xcc26,	// (0x0002043f) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00022da5) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00022da5) popup_snote_single_graphic_window_g

0xcc32,	// (0x0002044b) popup_snote_single_graphic_window_t1_ParamLimits

0xcc32,	// (0x0002044b) popup_snote_single_graphic_window_t1

0xcc45,	// (0x0002045e) popup_snote_single_graphic_window_t2_ParamLimits

0xcc45,	// (0x0002045e) popup_snote_single_graphic_window_t2

0xcc58,	// (0x00020471) popup_snote_single_graphic_window_t3_ParamLimits

0xcc58,	// (0x00020471) popup_snote_single_graphic_window_t3

0xcc91,	// (0x000204aa) popup_snote_single_graphic_window_t4_ParamLimits

0xcc91,	// (0x000204aa) popup_snote_single_graphic_window_t4

0xccc5,	// (0x000204de) popup_snote_single_graphic_window_t5_ParamLimits

0xccc5,	// (0x000204de) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00022daa) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00022daa) popup_snote_single_graphic_window_t

0x3d9b,	// (0x000175b4) grid_graphic_popup_pane_ParamLimits

0x3d9b,	// (0x000175b4) grid_graphic_popup_pane

0x3dc9,	// (0x000175e2) listscroll_popup_graphic_pane_g1_ParamLimits

0x3dc9,	// (0x000175e2) listscroll_popup_graphic_pane_g1

0xbcdf,	// (0x0001f4f8) listscroll_popup_graphic_pane_g2_ParamLimits

0xbcdf,	// (0x0001f4f8) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x0002319a) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x0002319a) listscroll_popup_graphic_pane_g

0x3df1,	// (0x0001760a) scroll_pane_cp5

0xbc97,	// (0x0001f4b0) cell_graphic_popup_pane_ParamLimits

0xbc97,	// (0x0001f4b0) cell_graphic_popup_pane

0x3d14,	// (0x0001752d) cell_graphic_popup_pane_g1

0x3d1c,	// (0x00017535) cell_graphic_popup_pane_g2

0xcb18,	// (0x00020331) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x00023193) cell_graphic_popup_pane_g

0x3d25,	// (0x0001753e) cell_graphic_popup_pane_t2

0xcb21,	// (0x0002033a) grid_highlight_pane_cp3

0xcd06,	// (0x0002051f) list_gen_pane_ParamLimits

0xcd06,	// (0x0002051f) list_gen_pane

0xcd2e,	// (0x00020547) scroll_pane

0xbc4e,	// (0x0001f467) bg_list_pane_g1_ParamLimits

0xbc4e,	// (0x0001f467) bg_list_pane_g1

0x3c89,	// (0x000174a2) bg_list_pane_g2_ParamLimits

0x3c89,	// (0x000174a2) bg_list_pane_g2

0x3c9e,	// (0x000174b7) bg_list_pane_g3_ParamLimits

0x3c9e,	// (0x000174b7) bg_list_pane_g3

0x3cb2,	// (0x000174cb) bg_list_pane_g4_ParamLimits

0x3cb2,	// (0x000174cb) bg_list_pane_g4

0xbc6b,	// (0x0001f484) bg_list_pane_g5_ParamLimits

0xbc6b,	// (0x0001f484) bg_list_pane_g5

0x0004,

0xf96f,	// (0x00023188) bg_list_pane_g_ParamLimits

0xf96f,	// (0x00023188) bg_list_pane_g

0xbbe8,	// (0x0001f401) list_double2_graphic_large_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double2_graphic_large_graphic_pane

0xbbe8,	// (0x0001f401) list_double2_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double2_graphic_pane

0xbbe8,	// (0x0001f401) list_double2_large_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double2_large_graphic_pane

0xbbe8,	// (0x0001f401) list_double2_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double2_pane

0xbbe8,	// (0x0001f401) list_double_graphic_heading_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double_graphic_heading_pane

0xbbe8,	// (0x0001f401) list_double_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double_graphic_pane

0xbbe8,	// (0x0001f401) list_double_heading_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double_heading_pane

0xbbe8,	// (0x0001f401) list_double_large_graphic_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double_large_graphic_pane

0xbbe8,	// (0x0001f401) list_double_number_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double_number_pane

0xbbe8,	// (0x0001f401) list_double_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double_pane

0xbbe8,	// (0x0001f401) list_double_time_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_double_time_pane

0xbbe8,	// (0x0001f401) list_setting_number_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_setting_number_pane

0xbbe8,	// (0x0001f401) list_setting_pane_ParamLimits

0xbbe8,	// (0x0001f401) list_setting_pane

0xbbfc,	// (0x0001f415) list_single_2graphic_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_2graphic_pane

0xbbfc,	// (0x0001f415) list_single_graphic_heading_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_graphic_heading_pane

0xbbfc,	// (0x0001f415) list_single_graphic_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_graphic_pane

0xbbfc,	// (0x0001f415) list_single_heading_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_heading_pane

0xbbfc,	// (0x0001f415) list_single_large_graphic_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_large_graphic_pane

0xbbfc,	// (0x0001f415) list_single_number_heading_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_number_heading_pane

0xbbfc,	// (0x0001f415) list_single_number_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_number_pane

0xbbfc,	// (0x0001f415) list_single_pane_ParamLimits

0xbbfc,	// (0x0001f415) list_single_pane

0xc703,	// (0x0001ff1c) list_highlight_pane_cp1

0x241d,	// (0x00015c36) list_single_pane_g1_ParamLimits

0x241d,	// (0x00015c36) list_single_pane_g1

0x2429,	// (0x00015c42) list_single_pane_g2_ParamLimits

0x2429,	// (0x00015c42) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_single_pane_g

0x448a,	// (0x00017ca3) list_single_pane_t1_ParamLimits

0x448a,	// (0x00017ca3) list_single_pane_t1

0x241d,	// (0x00015c36) list_single_number_pane_g1_ParamLimits

0x241d,	// (0x00015c36) list_single_number_pane_g1

0x2429,	// (0x00015c42) list_single_number_pane_g2_ParamLimits

0x2429,	// (0x00015c42) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_single_number_pane_g

0x2435,	// (0x00015c4e) list_single_number_pane_t1_ParamLimits

0x2435,	// (0x00015c4e) list_single_number_pane_t1

0x4583,	// (0x00017d9c) list_single_number_pane_t2_ParamLimits

0x4583,	// (0x00017d9c) list_single_number_pane_t2

0x0001,

0xf930,	// (0x00023149) list_single_number_pane_t_ParamLimits

0xf930,	// (0x00023149) list_single_number_pane_t

0xa9a0,	// (0x0001e1b9) list_single_graphic_pane_g1_ParamLimits

0xa9a0,	// (0x0001e1b9) list_single_graphic_pane_g1

0x241d,	// (0x00015c36) list_single_graphic_pane_g2_ParamLimits

0x241d,	// (0x00015c36) list_single_graphic_pane_g2

0x2429,	// (0x00015c42) list_single_graphic_pane_g3_ParamLimits

0x2429,	// (0x00015c42) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00022db5) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00022db5) list_single_graphic_pane_g

0xa9ac,	// (0x0001e1c5) list_single_graphic_pane_t1_ParamLimits

0xa9ac,	// (0x0001e1c5) list_single_graphic_pane_t1

0x241d,	// (0x00015c36) list_single_heading_pane_g1_ParamLimits

0x241d,	// (0x00015c36) list_single_heading_pane_g1

0x2429,	// (0x00015c42) list_single_heading_pane_g2_ParamLimits

0x2429,	// (0x00015c42) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_single_heading_pane_g

0x443a,	// (0x00017c53) list_single_heading_pane_t1_ParamLimits

0x443a,	// (0x00017c53) list_single_heading_pane_t1

0xa9c2,	// (0x0001e1db) list_single_heading_pane_t2_ParamLimits

0xa9c2,	// (0x0001e1db) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00022dc1) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00022dc1) list_single_heading_pane_t

0x241d,	// (0x00015c36) list_single_number_heading_pane_g1_ParamLimits

0x241d,	// (0x00015c36) list_single_number_heading_pane_g1

0x2429,	// (0x00015c42) list_single_number_heading_pane_g2_ParamLimits

0x2429,	// (0x00015c42) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_single_number_heading_pane_g

0x443a,	// (0x00017c53) list_single_number_heading_pane_t1_ParamLimits

0x443a,	// (0x00017c53) list_single_number_heading_pane_t1

0xa9d4,	// (0x0001e1ed) list_single_number_heading_pane_t2_ParamLimits

0xa9d4,	// (0x0001e1ed) list_single_number_heading_pane_t2

0x4466,	// (0x00017c7f) list_single_number_heading_pane_t3_ParamLimits

0x4466,	// (0x00017c7f) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00022dc6) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00022dc6) list_single_number_heading_pane_t

0x2411,	// (0x00015c2a) list_single_graphic_heading_pane_g1_ParamLimits

0x2411,	// (0x00015c2a) list_single_graphic_heading_pane_g1

0xa9e6,	// (0x0001e1ff) list_single_graphic_heading_pane_g4_ParamLimits

0xa9e6,	// (0x0001e1ff) list_single_graphic_heading_pane_g4

0x2429,	// (0x00015c42) list_single_graphic_heading_pane_g5_ParamLimits

0x2429,	// (0x00015c42) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00022dcd) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00022dcd) list_single_graphic_heading_pane_g

0x443a,	// (0x00017c53) list_single_graphic_heading_pane_t1_ParamLimits

0x443a,	// (0x00017c53) list_single_graphic_heading_pane_t1

0xa9f7,	// (0x0001e210) list_single_graphic_heading_pane_t2_ParamLimits

0xa9f7,	// (0x0001e210) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00022dd4) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00022dd4) list_single_graphic_heading_pane_t

0x44a0,	// (0x00017cb9) list_single_large_graphic_pane_g1_ParamLimits

0x44a0,	// (0x00017cb9) list_single_large_graphic_pane_g1

0x241d,	// (0x00015c36) list_single_large_graphic_pane_g2_ParamLimits

0x241d,	// (0x00015c36) list_single_large_graphic_pane_g2

0x2429,	// (0x00015c42) list_single_large_graphic_pane_g3_ParamLimits

0x2429,	// (0x00015c42) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00022dd9) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00022dd9) list_single_large_graphic_pane_g

0x2b79,	// (0x00016392) wait_border_pane_g2_copy1

0xaa09,	// (0x0001e222) list_single_large_graphic_pane_g4_cp2

0x44ac,	// (0x00017cc5) list_single_large_graphic_pane_t1_ParamLimits

0x44ac,	// (0x00017cc5) list_single_large_graphic_pane_t1

0xaa11,	// (0x0001e22a) list_double_pane_g1_ParamLimits

0xaa11,	// (0x0001e22a) list_double_pane_g1

0xaa1d,	// (0x0001e236) list_double_pane_g2_ParamLimits

0xaa1d,	// (0x0001e236) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00022de0) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00022de0) list_double_pane_g

0xaa29,	// (0x0001e242) list_double_pane_t1_ParamLimits

0xaa29,	// (0x0001e242) list_double_pane_t1

0xaa3f,	// (0x0001e258) list_double_pane_t2_ParamLimits

0xaa3f,	// (0x0001e258) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00022de5) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00022de5) list_double_pane_t

0xaa51,	// (0x0001e26a) list_double2_pane_g1_ParamLimits

0xaa51,	// (0x0001e26a) list_double2_pane_g1

0xaa62,	// (0x0001e27b) list_double2_pane_g2_ParamLimits

0xaa62,	// (0x0001e27b) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00022dea) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00022dea) list_double2_pane_g

0xaa6e,	// (0x0001e287) list_double2_pane_t1_ParamLimits

0xaa6e,	// (0x0001e287) list_double2_pane_t1

0xaa84,	// (0x0001e29d) list_double2_pane_t2_ParamLimits

0xaa84,	// (0x0001e29d) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00022def) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00022def) list_double2_pane_t

0xaa11,	// (0x0001e22a) list_double_number_pane_g1_ParamLimits

0xaa11,	// (0x0001e22a) list_double_number_pane_g1

0xaa1d,	// (0x0001e236) list_double_number_pane_g2_ParamLimits

0xaa1d,	// (0x0001e236) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00022de0) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00022de0) list_double_number_pane_g

0xaa96,	// (0x0001e2af) list_double_number_pane_t1_ParamLimits

0xaa96,	// (0x0001e2af) list_double_number_pane_t1

0xaaa8,	// (0x0001e2c1) list_double_number_pane_t2_ParamLimits

0xaaa8,	// (0x0001e2c1) list_double_number_pane_t2

0xaabe,	// (0x0001e2d7) list_double_number_pane_t3_ParamLimits

0xaabe,	// (0x0001e2d7) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00022df4) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00022df4) list_double_number_pane_t

0xaad0,	// (0x0001e2e9) list_double_graphic_pane_g1_ParamLimits

0xaad0,	// (0x0001e2e9) list_double_graphic_pane_g1

0xaadc,	// (0x0001e2f5) list_double_graphic_pane_g2_ParamLimits

0xaadc,	// (0x0001e2f5) list_double_graphic_pane_g2

0x41db,	// (0x000179f4) list_double_graphic_pane_g3_ParamLimits

0x41db,	// (0x000179f4) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00022dfb) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00022dfb) list_double_graphic_pane_g

0xaaf7,	// (0x0001e310) list_double_graphic_pane_t1_ParamLimits

0xaaf7,	// (0x0001e310) list_double_graphic_pane_t1

0xab0d,	// (0x0001e326) list_double_graphic_pane_t2_ParamLimits

0xab0d,	// (0x0001e326) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00022e04) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00022e04) list_double_graphic_pane_t

0xcd62,	// (0x0002057b) list_double2_graphic_pane_g1_ParamLimits

0xcd62,	// (0x0002057b) list_double2_graphic_pane_g1

0xab1f,	// (0x0001e338) list_double2_graphic_pane_g2_ParamLimits

0xab1f,	// (0x0001e338) list_double2_graphic_pane_g2

0xaa62,	// (0x0001e27b) list_double2_graphic_pane_g3_ParamLimits

0xaa62,	// (0x0001e27b) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00022e09) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00022e09) list_double2_graphic_pane_g

0xab2b,	// (0x0001e344) list_double2_graphic_pane_t1_ParamLimits

0xab2b,	// (0x0001e344) list_double2_graphic_pane_t1

0xab41,	// (0x0001e35a) list_double2_graphic_pane_t2_ParamLimits

0xab41,	// (0x0001e35a) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00022e10) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00022e10) list_double2_graphic_pane_t

0xab53,	// (0x0001e36c) list_double_large_graphic_pane_g1_ParamLimits

0xab53,	// (0x0001e36c) list_double_large_graphic_pane_g1

0xab72,	// (0x0001e38b) list_double_large_graphic_pane_g2_ParamLimits

0xab72,	// (0x0001e38b) list_double_large_graphic_pane_g2

0xaa1d,	// (0x0001e236) list_double_large_graphic_pane_g3_ParamLimits

0xaa1d,	// (0x0001e236) list_double_large_graphic_pane_g3

0xab83,	// (0x0001e39c) list_double_large_graphic_pane_g4_ParamLimits

0xab83,	// (0x0001e39c) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00022e15) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00022e15) list_double_large_graphic_pane_g

0xab96,	// (0x0001e3af) list_double_large_graphic_pane_t1_ParamLimits

0xab96,	// (0x0001e3af) list_double_large_graphic_pane_t1

0xabaf,	// (0x0001e3c8) list_double_large_graphic_pane_t2_ParamLimits

0xabaf,	// (0x0001e3c8) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00022e20) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00022e20) list_double_large_graphic_pane_t

0xabc1,	// (0x0001e3da) list_double2_large_graphic_pane_g1_ParamLimits

0xabc1,	// (0x0001e3da) list_double2_large_graphic_pane_g1

0xaa51,	// (0x0001e26a) list_double2_large_graphic_pane_g2_ParamLimits

0xaa51,	// (0x0001e26a) list_double2_large_graphic_pane_g2

0xaa62,	// (0x0001e27b) list_double2_large_graphic_pane_g3_ParamLimits

0xaa62,	// (0x0001e27b) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00022e25) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00022e25) list_double2_large_graphic_pane_g

0xabcd,	// (0x0001e3e6) list_double2_large_graphic_pane_t1_ParamLimits

0xabcd,	// (0x0001e3e6) list_double2_large_graphic_pane_t1

0xabe3,	// (0x0001e3fc) list_double2_large_graphic_pane_t2_ParamLimits

0xabe3,	// (0x0001e3fc) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00022e2c) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00022e2c) list_double2_large_graphic_pane_t

0xabf5,	// (0x0001e40e) list_double_heading_pane_g1_ParamLimits

0xabf5,	// (0x0001e40e) list_double_heading_pane_g1

0xac06,	// (0x0001e41f) list_double_heading_pane_g2_ParamLimits

0xac06,	// (0x0001e41f) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00022e31) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00022e31) list_double_heading_pane_g

0xac12,	// (0x0001e42b) list_double_heading_pane_t1_ParamLimits

0xac12,	// (0x0001e42b) list_double_heading_pane_t1

0xac28,	// (0x0001e441) list_double_heading_pane_t2_ParamLimits

0xac28,	// (0x0001e441) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00022e36) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00022e36) list_double_heading_pane_t

0xac3a,	// (0x0001e453) list_double_graphic_heading_pane_g1_ParamLimits

0xac3a,	// (0x0001e453) list_double_graphic_heading_pane_g1

0xabf5,	// (0x0001e40e) list_double_graphic_heading_pane_g2_ParamLimits

0xabf5,	// (0x0001e40e) list_double_graphic_heading_pane_g2

0xac06,	// (0x0001e41f) list_double_graphic_heading_pane_g3_ParamLimits

0xac06,	// (0x0001e41f) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00022e3b) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00022e3b) list_double_graphic_heading_pane_g

0xac46,	// (0x0001e45f) list_double_graphic_heading_pane_t1_ParamLimits

0xac46,	// (0x0001e45f) list_double_graphic_heading_pane_t1

0xac5c,	// (0x0001e475) list_double_graphic_heading_pane_t2_ParamLimits

0xac5c,	// (0x0001e475) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00022e42) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00022e42) list_double_graphic_heading_pane_t

0xab72,	// (0x0001e38b) list_double_time_pane_g1_ParamLimits

0xab72,	// (0x0001e38b) list_double_time_pane_g1

0xaa1d,	// (0x0001e236) list_double_time_pane_g2_ParamLimits

0xaa1d,	// (0x0001e236) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00022e47) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00022e47) list_double_time_pane_g

0xac6e,	// (0x0001e487) list_double_time_pane_t1_ParamLimits

0xac6e,	// (0x0001e487) list_double_time_pane_t1

0xac84,	// (0x0001e49d) list_double_time_pane_t2_ParamLimits

0xac84,	// (0x0001e49d) list_double_time_pane_t2

0xac96,	// (0x0001e4af) list_double_time_pane_t3_ParamLimits

0xac96,	// (0x0001e4af) list_double_time_pane_t3

0xaca8,	// (0x0001e4c1) list_double_time_pane_t4_ParamLimits

0xaca8,	// (0x0001e4c1) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00022e4c) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00022e4c) list_double_time_pane_t

0xab1f,	// (0x0001e338) list_setting_pane_g1_ParamLimits

0xab1f,	// (0x0001e338) list_setting_pane_g1

0xaa62,	// (0x0001e27b) list_setting_pane_g2_ParamLimits

0xaa62,	// (0x0001e27b) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00022e55) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00022e55) list_setting_pane_g

0xacba,	// (0x0001e4d3) list_setting_pane_t1_ParamLimits

0xacba,	// (0x0001e4d3) list_setting_pane_t1

0xacd1,	// (0x0001e4ea) list_setting_pane_t2_ParamLimits

0xacd1,	// (0x0001e4ea) list_setting_pane_t2

0x0002,

0xf641,	// (0x00022e5a) list_setting_pane_t_ParamLimits

0xf641,	// (0x00022e5a) list_setting_pane_t

0xad10,	// (0x0001e529) set_value_pane_cp_ParamLimits

0xad10,	// (0x0001e529) set_value_pane_cp

0xab1f,	// (0x0001e338) list_setting_number_pane_g1_ParamLimits

0xab1f,	// (0x0001e338) list_setting_number_pane_g1

0xaa62,	// (0x0001e27b) list_setting_number_pane_g2_ParamLimits

0xaa62,	// (0x0001e27b) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x00022e55) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x00022e55) list_setting_number_pane_g

0xad1e,	// (0x0001e537) list_setting_number_pane_t1_ParamLimits

0xad1e,	// (0x0001e537) list_setting_number_pane_t1

0xad32,	// (0x0001e54b) list_setting_number_pane_t2_ParamLimits

0xad32,	// (0x0001e54b) list_setting_number_pane_t2

0xad49,	// (0x0001e562) list_setting_number_pane_t3_ParamLimits

0xad49,	// (0x0001e562) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00022e61) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00022e61) list_setting_number_pane_t

0xad10,	// (0x0001e529) set_value_pane_ParamLimits

0xad10,	// (0x0001e529) set_value_pane

0xe1f1,	// (0x00021a0a) bg_set_opt_pane_ParamLimits

0xe1f1,	// (0x00021a0a) bg_set_opt_pane

0xe212,	// (0x00021a2b) set_value_pane_t1

0xe220,	// (0x00021a39) slider_set_pane_cp3

0xe229,	// (0x00021a42) volume_small_pane_cp

0xe232,	// (0x00021a4b) list_form_gen_pane

0xe23b,	// (0x00021a54) scroll_pane_cp8

0xad8c,	// (0x0001e5a5) form_field_data_pane_ParamLimits

0xad8c,	// (0x0001e5a5) form_field_data_pane

0xada7,	// (0x0001e5c0) form_field_data_wide_pane_ParamLimits

0xada7,	// (0x0001e5c0) form_field_data_wide_pane

0xe25c,	// (0x00021a75) form_field_popup_pane_ParamLimits

0xe25c,	// (0x00021a75) form_field_popup_pane

0xadcb,	// (0x0001e5e4) form_field_popup_wide_pane_ParamLimits

0xadcb,	// (0x0001e5e4) form_field_popup_wide_pane

0xe27e,	// (0x00021a97) form_field_slider_pane_ParamLimits

0xe27e,	// (0x00021a97) form_field_slider_pane

0xe291,	// (0x00021aaa) form_field_slider_wide_pane_ParamLimits

0xe291,	// (0x00021aaa) form_field_slider_wide_pane

0xe2a4,	// (0x00021abd) data_form_pane

0xadf6,	// (0x0001e60f) form_field_data_pane_t1

0xe2b0,	// (0x00021ac9) input_focus_pane

0xe2be,	// (0x00021ad7) data_form_wide_pane

0xe2f6,	// (0x00021b0f) form_field_data_wide_pane_t1

0xcb36,	// (0x0002034f) input_focus_pane_cp6

0xae10,	// (0x0001e629) form_field_popup_pane_t1

0xe2b0,	// (0x00021ac9) input_focus_pane_cp7

0xe315,	// (0x00021b2e) list_form_pane

0xe329,	// (0x00021b42) form_field_popup_wide_pane_t1

0xe2b0,	// (0x00021ac9) input_focus_pane_cp8

0xe33b,	// (0x00021b54) list_form_wide_pane

0xae32,	// (0x0001e64b) form_field_slider_pane_t1_ParamLimits

0xae32,	// (0x0001e64b) form_field_slider_pane_t1

0xae4a,	// (0x0001e663) form_field_slider_pane_t2_ParamLimits

0xae4a,	// (0x0001e663) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00022e71) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00022e71) form_field_slider_pane_t

0xc751,	// (0x0001ff6a) input_focus_pane_cp9_ParamLimits

0xc751,	// (0x0001ff6a) input_focus_pane_cp9

0xae5f,	// (0x0001e678) slider_cont_pane_ParamLimits

0xae5f,	// (0x0001e678) slider_cont_pane

0xe347,	// (0x00021b60) form_field_slider_wide_pane_t1_ParamLimits

0xe347,	// (0x00021b60) form_field_slider_wide_pane_t1

0xe359,	// (0x00021b72) form_field_slider_wide_pane_t2_ParamLimits

0xe359,	// (0x00021b72) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00022e76) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00022e76) form_field_slider_wide_pane_t

0xc751,	// (0x0001ff6a) input_focus_pane_cp10_ParamLimits

0xc751,	// (0x0001ff6a) input_focus_pane_cp10

0xae73,	// (0x0001e68c) slider_cont_pane_cp1_ParamLimits

0xae73,	// (0x0001e68c) slider_cont_pane_cp1

0xae87,	// (0x0001e6a0) slider_form_pane_cp

0xe36b,	// (0x00021b84) input_focus_pane_g1

0xe373,	// (0x00021b8c) input_focus_pane_g2

0xe37b,	// (0x00021b94) input_focus_pane_g3

0xe383,	// (0x00021b9c) input_focus_pane_g4

0xe38b,	// (0x00021ba4) input_focus_pane_g5

0xe393,	// (0x00021bac) input_focus_pane_g6

0xe39b,	// (0x00021bb4) input_focus_pane_g7

0xe3a3,	// (0x00021bbc) input_focus_pane_g8

0xe3ab,	// (0x00021bc4) input_focus_pane_g9

0xc6f9,	// (0x0001ff12) input_focus_pane_g10

0x0009,

0xf662,	// (0x00022e7b) input_focus_pane_g

0x2b82,	// (0x0001639b) wait_border_pane_g3_copy1

0xae8f,	// (0x0001e6a8) data_form_pane_t1

0xc6f9,	// (0x0001ff12) wait_anim_pane_g1_copy1

0xbbbd,	// (0x0001f3d6) data_form_wide_pane_t1

0xe3b3,	// (0x00021bcc) list_form_graphic_pane_cp_ParamLimits

0xe3b3,	// (0x00021bcc) list_form_graphic_pane_cp

0x3b01,	// (0x0001731a) slider_form_pane_g1

0x3b0a,	// (0x00017323) slider_form_pane_g2

0x0006,

0xf960,	// (0x00023179) slider_form_pane_g

0xe3b3,	// (0x00021bcc) list_form_graphic_pane_ParamLimits

0xe3b3,	// (0x00021bcc) list_form_graphic_pane

0xe3c5,	// (0x00021bde) list_form_graphic_pane_g1

0xe3cd,	// (0x00021be6) list_form_graphic_pane_t1_ParamLimits

0xe3cd,	// (0x00021be6) list_form_graphic_pane_t1

0xc75f,	// (0x0001ff78) list_highlight_pane_cp5_ParamLimits

0xc75f,	// (0x0001ff78) list_highlight_pane_cp5

0xaeab,	// (0x0001e6c4) find_pane_g1

0xe3e2,	// (0x00021bfb) input_find_pane

0xaeb4,	// (0x0001e6cd) input_find_pane_g1_ParamLimits

0xaeb4,	// (0x0001e6cd) input_find_pane_g1

0xaec0,	// (0x0001e6d9) input_find_pane_t1_ParamLimits

0xaec0,	// (0x0001e6d9) input_find_pane_t1

0xaed5,	// (0x0001e6ee) input_find_pane_t2_ParamLimits

0xaed5,	// (0x0001e6ee) input_find_pane_t2

0x0001,

0xf677,	// (0x00022e90) input_find_pane_t_ParamLimits

0xf677,	// (0x00022e90) input_find_pane_t

0xe3eb,	// (0x00021c04) input_focus_pane_cp5_ParamLimits

0xe3eb,	// (0x00021c04) input_focus_pane_cp5

0xe3fe,	// (0x00021c17) bg_popup_window_pane_cp2_ParamLimits

0xe3fe,	// (0x00021c17) bg_popup_window_pane_cp2

0xe40b,	// (0x00021c24) listscroll_menu_pane_ParamLimits

0xe40b,	// (0x00021c24) listscroll_menu_pane

0xaef6,	// (0x0001e70f) popup_submenu_window_ParamLimits

0xaef6,	// (0x0001e70f) popup_submenu_window

0xe417,	// (0x00021c30) find_popup_pane_g1

0xe41f,	// (0x00021c38) input_popup_find_pane_cp

0xe429,	// (0x00021c42) input_focus_pane_cp4_ParamLimits

0xe429,	// (0x00021c42) input_focus_pane_cp4

0xe437,	// (0x00021c50) input_popup_find_pane_t1_ParamLimits

0xe437,	// (0x00021c50) input_popup_find_pane_t1

0xc703,	// (0x0001ff1c) bg_popup_sub_pane_cp

0xe465,	// (0x00021c7e) listscroll_popup_sub_pane

0xe46d,	// (0x00021c86) list_submenu_pane_ParamLimits

0xe46d,	// (0x00021c86) list_submenu_pane

0xe47e,	// (0x00021c97) scroll_pane_cp4

0xe486,	// (0x00021c9f) list_single_popup_submenu_pane_ParamLimits

0xe486,	// (0x00021c9f) list_single_popup_submenu_pane

0xe49b,	// (0x00021cb4) list_single_popup_submenu_pane_g1

0xe4a3,	// (0x00021cbc) list_single_popup_submenu_pane_t1_ParamLimits

0xe4a3,	// (0x00021cbc) list_single_popup_submenu_pane_t1

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp1_ParamLimits

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp1

0xaf34,	// (0x0001e74d) tabs_2_active_pane_g1

0xaf3c,	// (0x0001e755) tabs_2_active_pane_t1

0xc751,	// (0x0001ff6a) bg_passive_tab_pane_cp1_ParamLimits

0xc751,	// (0x0001ff6a) bg_passive_tab_pane_cp1

0xaf34,	// (0x0001e74d) tabs_2_passive_pane_g1

0xaf3c,	// (0x0001e755) tabs_2_passive_pane_t1

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp4

0xaf4e,	// (0x0001e767) tabs_2_long_active_pane_t1

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp4

0xed85,	// (0x0002259e) list_single_midp_graphic_pane_g4_ParamLimits

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp5

0xaf61,	// (0x0001e77a) tabs_3_long_active_pane_t1

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp5

0xed85,	// (0x0002259e) list_single_midp_graphic_pane_g4

0xc75f,	// (0x0001ff78) bg_popup_window_pane_cp13_ParamLimits

0xc75f,	// (0x0001ff78) bg_popup_window_pane_cp13

0xe4c1,	// (0x00021cda) listscroll_popup_fast_pane_ParamLimits

0xe4c1,	// (0x00021cda) listscroll_popup_fast_pane

0xe4d0,	// (0x00021ce9) grid_popup_fast_pane_ParamLimits

0xe4d0,	// (0x00021ce9) grid_popup_fast_pane

0xe4e2,	// (0x00021cfb) scroll_pane_cp9_ParamLimits

0xe4e2,	// (0x00021cfb) scroll_pane_cp9

0x5a71,	// (0x0001928a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5a71,	// (0x0001928a) list_single_graphic_hl_pane_t1_cp2

0xe506,	// (0x00021d1f) input_focus_pane_cp20_ParamLimits

0xe506,	// (0x00021d1f) input_focus_pane_cp20

0xe514,	// (0x00021d2d) query_popup_data_pane_t1_ParamLimits

0xe514,	// (0x00021d2d) query_popup_data_pane_t1

0xe527,	// (0x00021d40) query_popup_data_pane_t2_ParamLimits

0xe527,	// (0x00021d40) query_popup_data_pane_t2

0xe56d,	// (0x00021d86) query_popup_data_pane_t3_ParamLimits

0xe56d,	// (0x00021d86) query_popup_data_pane_t3

0xe5ae,	// (0x00021dc7) query_popup_data_pane_t4_ParamLimits

0xe5ae,	// (0x00021dc7) query_popup_data_pane_t4

0xe5ea,	// (0x00021e03) query_popup_data_pane_t5_ParamLimits

0xe5ea,	// (0x00021e03) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00022e95) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00022e95) query_popup_data_pane_t

0xe36b,	// (0x00021b84) bg_set_opt_pane_g1

0xe373,	// (0x00021b8c) bg_set_opt_pane_g2

0xe37b,	// (0x00021b94) bg_set_opt_pane_g3

0xe383,	// (0x00021b9c) bg_set_opt_pane_g4

0xe38b,	// (0x00021ba4) bg_set_opt_pane_g5

0xe393,	// (0x00021bac) bg_set_opt_pane_g6

0xe39b,	// (0x00021bb4) bg_set_opt_pane_g7

0xe3a3,	// (0x00021bbc) bg_set_opt_pane_g8

0xe3ab,	// (0x00021bc4) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00022ea0) bg_set_opt_pane_g

0xe911,	// (0x0002212a) control_top_pane_stacon_ParamLimits

0xe911,	// (0x0002212a) control_top_pane_stacon

0xe964,	// (0x0002217d) signal_pane_stacon_ParamLimits

0xe964,	// (0x0002217d) signal_pane_stacon

0x1889,	// (0x000150a2) stacon_top_pane_g1_ParamLimits

0x1889,	// (0x000150a2) stacon_top_pane_g1

0xe989,	// (0x000221a2) title_pane_stacon_ParamLimits

0xe989,	// (0x000221a2) title_pane_stacon

0xe9b3,	// (0x000221cc) uni_indicator_pane_stacon_ParamLimits

0xe9b3,	// (0x000221cc) uni_indicator_pane_stacon

0xe9c8,	// (0x000221e1) battery_pane_stacon_ParamLimits

0xe9c8,	// (0x000221e1) battery_pane_stacon

0xea0c,	// (0x00022225) control_bottom_pane_stacon_ParamLimits

0xea0c,	// (0x00022225) control_bottom_pane_stacon

0xea2f,	// (0x00022248) navi_pane_stacon_ParamLimits

0xea2f,	// (0x00022248) navi_pane_stacon

0x18ab,	// (0x000150c4) stacon_bottom_pane_g1_ParamLimits

0x18ab,	// (0x000150c4) stacon_bottom_pane_g1

0xe621,	// (0x00021e3a) aid_levels_signal_lsc_ParamLimits

0xe621,	// (0x00021e3a) aid_levels_signal_lsc

0xe638,	// (0x00021e51) signal_pane_stacon_g1_ParamLimits

0xe638,	// (0x00021e51) signal_pane_stacon_g1

0xe64c,	// (0x00021e65) signal_pane_stacon_g2_ParamLimits

0xe64c,	// (0x00021e65) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00022eb3) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00022eb3) signal_pane_stacon_g

0xe68e,	// (0x00021ea7) title_pane_stacon_t1_ParamLimits

0xe68e,	// (0x00021ea7) title_pane_stacon_t1

0xe6b3,	// (0x00021ecc) uni_indicator_pane_stacon_g1

0xe6bd,	// (0x00021ed6) uni_indicator_pane_stacon_g2

0xe6c7,	// (0x00021ee0) uni_indicator_pane_stacon_g3

0xe6d1,	// (0x00021eea) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00022ebf) uni_indicator_pane_stacon_g

0xe6db,	// (0x00021ef4) control_top_pane_stacon_g1

0xe6e3,	// (0x00021efc) control_top_pane_stacon_t1_ParamLimits

0xe6e3,	// (0x00021efc) control_top_pane_stacon_t1

0xe71a,	// (0x00021f33) aid_levels_battery_lsc_ParamLimits

0xe71a,	// (0x00021f33) aid_levels_battery_lsc

0xe732,	// (0x00021f4b) battery_pane_stacon_g1_ParamLimits

0xe732,	// (0x00021f4b) battery_pane_stacon_g1

0xe744,	// (0x00021f5d) battery_pane_stacon_g2_ParamLimits

0xe744,	// (0x00021f5d) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00022ec8) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00022ec8) battery_pane_stacon_g

0xe782,	// (0x00021f9b) navi_icon_pane_stacon

0xe796,	// (0x00021faf) navi_navi_pane_stacon

0xe782,	// (0x00021f9b) navi_text_pane_stacon

0xe7ac,	// (0x00021fc5) control_bottom_pane_stacon_g1

0xe7b4,	// (0x00021fcd) control_bottom_pane_stacon_t1_ParamLimits

0xe7b4,	// (0x00021fcd) control_bottom_pane_stacon_t1

0xaf73,	// (0x0001e78c) grid_app_pane_ParamLimits

0xaf73,	// (0x0001e78c) grid_app_pane

0xafab,	// (0x0001e7c4) scroll_pane_cp15_ParamLimits

0xafab,	// (0x0001e7c4) scroll_pane_cp15

0xafc0,	// (0x0001e7d9) cell_app_pane_ParamLimits

0xafc0,	// (0x0001e7d9) cell_app_pane

0xb00b,	// (0x0001e824) cell_app_pane_g1_ParamLimits

0xb00b,	// (0x0001e824) cell_app_pane_g1

0x1301,	// (0x00014b1a) cell_app_pane_g2_ParamLimits

0x1301,	// (0x00014b1a) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00022ecd) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00022ecd) cell_app_pane_g

0xb02f,	// (0x0001e848) cell_app_pane_t1_ParamLimits

0xb02f,	// (0x0001e848) cell_app_pane_t1

0x133e,	// (0x00014b57) grid_highlight_pane_ParamLimits

0x133e,	// (0x00014b57) grid_highlight_pane

0xe36b,	// (0x00021b84) cell_highlight_pane_g1

0xe373,	// (0x00021b8c) cell_highlight_pane_g2

0xe37b,	// (0x00021b94) cell_highlight_pane_g3

0xe383,	// (0x00021b9c) cell_highlight_pane_g4

0xe38b,	// (0x00021ba4) cell_highlight_pane_g5

0xe393,	// (0x00021bac) cell_highlight_pane_g6

0xe39b,	// (0x00021bb4) cell_highlight_pane_g7

0xe3a3,	// (0x00021bbc) cell_highlight_pane_g8

0xe3ab,	// (0x00021bc4) cell_highlight_pane_g9

0xc6f9,	// (0x0001ff12) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00022e7b) cell_highlight_pane_g

0x134f,	// (0x00014b68) bg_scroll_pane

0xe80f,	// (0x00022028) scroll_handle_pane

0x1396,	// (0x00014baf) scroll_bg_pane_g1

0x13ab,	// (0x00014bc4) scroll_bg_pane_g2

0x13c3,	// (0x00014bdc) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00022ed2) scroll_bg_pane_g

0x13d8,	// (0x00014bf1) scroll_handle_focus_pane_ParamLimits

0x13d8,	// (0x00014bf1) scroll_handle_focus_pane

0x1396,	// (0x00014baf) scroll_handle_pane_g1

0x13e5,	// (0x00014bfe) scroll_handle_pane_g2

0x13c3,	// (0x00014bdc) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00022ed9) scroll_handle_pane_g

0xe429,	// (0x00021c42) bg_popup_sub_pane_cp21_ParamLimits

0xe429,	// (0x00021c42) bg_popup_sub_pane_cp21

0x13f9,	// (0x00014c12) popup_fep_japan_predictive_window_t1_ParamLimits

0x13f9,	// (0x00014c12) popup_fep_japan_predictive_window_t1

0x1410,	// (0x00014c29) popup_fep_japan_predictive_window_t2_ParamLimits

0x1410,	// (0x00014c29) popup_fep_japan_predictive_window_t2

0x1443,	// (0x00014c5c) popup_fep_japan_predictive_window_t3_ParamLimits

0x1443,	// (0x00014c5c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00022ee0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00022ee0) popup_fep_japan_predictive_window_t

0xc703,	// (0x0001ff1c) bg_popup_sub_pane_cp23

0x147a,	// (0x00014c93) listscroll_japin_cand_pane

0x1482,	// (0x00014c9b) popup_fep_japan_candidate_window_t1

0x1490,	// (0x00014ca9) candidate_pane_ParamLimits

0x1490,	// (0x00014ca9) candidate_pane

0x14a2,	// (0x00014cbb) scroll_pane_cp30

0x14ac,	// (0x00014cc5) list_single_popup_jap_candidate_pane_ParamLimits

0x14ac,	// (0x00014cc5) list_single_popup_jap_candidate_pane

0xc703,	// (0x0001ff1c) list_highlight_pane_cp30

0x14c0,	// (0x00014cd9) list_single_popup_jap_candidate_pane_t1

0xb060,	// (0x0001e879) level_1_signal

0xb072,	// (0x0001e88b) level_2_signal

0xb085,	// (0x0001e89e) level_3_signal

0xb098,	// (0x0001e8b1) level_4_signal

0xb0ab,	// (0x0001e8c4) level_5_signal

0xb0be,	// (0x0001e8d7) level_6_signal

0xb0d1,	// (0x0001e8ea) level_7_signal

0xb060,	// (0x0001e879) level_1_battery

0xb072,	// (0x0001e88b) level_2_battery

0xb085,	// (0x0001e89e) level_3_battery

0xb098,	// (0x0001e8b1) level_4_battery

0xb0ab,	// (0x0001e8c4) level_5_battery

0xb0be,	// (0x0001e8d7) level_6_battery

0xb0d1,	// (0x0001e8ea) level_7_battery

0x1542,	// (0x00014d5b) list_menu_pane_ParamLimits

0x1542,	// (0x00014d5b) list_menu_pane

0x1558,	// (0x00014d71) scroll_pane_cp25_ParamLimits

0x1558,	// (0x00014d71) scroll_pane_cp25

0x1571,	// (0x00014d8a) list_double2_graphic_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double2_graphic_pane_cp2

0x1571,	// (0x00014d8a) list_double2_large_graphic_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double2_large_graphic_pane_cp2

0x1571,	// (0x00014d8a) list_double2_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double2_pane_cp2

0x1571,	// (0x00014d8a) list_double_graphic_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double_graphic_pane_cp2

0x1571,	// (0x00014d8a) list_double_large_graphic_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double_large_graphic_pane_cp2

0x1571,	// (0x00014d8a) list_double_number_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double_number_pane_cp2

0x1571,	// (0x00014d8a) list_double_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double_pane_cp2

0xb0e4,	// (0x0001e8fd) list_single_2graphic_pane_cp2_ParamLimits

0xb0e4,	// (0x0001e8fd) list_single_2graphic_pane_cp2

0xb0e4,	// (0x0001e8fd) list_single_graphic_heading_pane_cp2_ParamLimits

0xb0e4,	// (0x0001e8fd) list_single_graphic_heading_pane_cp2

0xb0e4,	// (0x0001e8fd) list_single_graphic_pane_cp2_ParamLimits

0xb0e4,	// (0x0001e8fd) list_single_graphic_pane_cp2

0xb0e4,	// (0x0001e8fd) list_single_heading_pane_cp2_ParamLimits

0xb0e4,	// (0x0001e8fd) list_single_heading_pane_cp2

0x15b4,	// (0x00014dcd) list_single_large_graphic_pane_cp2_ParamLimits

0x15b4,	// (0x00014dcd) list_single_large_graphic_pane_cp2

0xb0e4,	// (0x0001e8fd) list_single_number_heading_pane_cp2_ParamLimits

0xb0e4,	// (0x0001e8fd) list_single_number_heading_pane_cp2

0xb0e4,	// (0x0001e8fd) list_single_number_pane_cp2_ParamLimits

0xb0e4,	// (0x0001e8fd) list_single_number_pane_cp2

0xb0f8,	// (0x0001e911) list_single_pane_cp2_ParamLimits

0xb0f8,	// (0x0001e911) list_single_pane_cp2

0x163f,	// (0x00014e58) bg_popup_sub_pane_cp22

0xe8c1,	// (0x000220da) popup_side_volume_key_window_g1

0xe8eb,	// (0x00022104) popup_side_volume_key_window_t1

0xe909,	// (0x00022122) volume_small_pane_cp1

0xc751,	// (0x0001ff6a) bg_popup_sub_pane_cp24_ParamLimits

0xc751,	// (0x0001ff6a) bg_popup_sub_pane_cp24

0x1655,	// (0x00014e6e) fep_china_uni_candidate_pane_ParamLimits

0x1655,	// (0x00014e6e) fep_china_uni_candidate_pane

0x1669,	// (0x00014e82) fep_china_uni_entry_pane

0x1679,	// (0x00014e92) popup_fep_china_uni_window_g1

0x1695,	// (0x00014eae) fep_china_uni_entry_pane_g1

0x169f,	// (0x00014eb8) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00022f11) fep_china_uni_entry_pane_g

0x16a9,	// (0x00014ec2) fep_entry_item_pane

0x16b3,	// (0x00014ecc) fep_candidate_item_pane

0x16bb,	// (0x00014ed4) fep_china_uni_candidate_pane_g1

0x16c5,	// (0x00014ede) fep_china_uni_candidate_pane_g2

0x16cd,	// (0x00014ee6) fep_china_uni_candidate_pane_g3

0x16d5,	// (0x00014eee) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00022f16) fep_china_uni_candidate_pane_g

0xc6f9,	// (0x0001ff12) fep_entry_item_pane_g1

0x16df,	// (0x00014ef8) fep_entry_item_pane_t1_ParamLimits

0x16df,	// (0x00014ef8) fep_entry_item_pane_t1

0x16f5,	// (0x00014f0e) fep_candidate_item_pane_t1_ParamLimits

0x16f5,	// (0x00014f0e) fep_candidate_item_pane_t1

0x170a,	// (0x00014f23) fep_candidate_item_pane_t2_ParamLimits

0x170a,	// (0x00014f23) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00022f1f) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00022f1f) fep_candidate_item_pane_t

0xc75f,	// (0x0001ff78) list_highlight_pane_cp31_ParamLimits

0xc75f,	// (0x0001ff78) list_highlight_pane_cp31

0x171c,	// (0x00014f35) level_1_signal_lsc

0x1725,	// (0x00014f3e) level_2_signal_lsc

0x172e,	// (0x00014f47) level_3_signal_lsc

0x1737,	// (0x00014f50) level_4_signal_lsc

0x1740,	// (0x00014f59) level_5_signal_lsc

0x1749,	// (0x00014f62) level_6_signal_lsc

0x1752,	// (0x00014f6b) level_7_signal_lsc

0x1752,	// (0x00014f6b) level_1_battery_lsc

0x175b,	// (0x00014f74) level_2_battery_lsc

0x1764,	// (0x00014f7d) level_3_battery_lsc

0x176d,	// (0x00014f86) level_4_battery_lsc

0x1776,	// (0x00014f8f) level_5_battery_lsc

0x177f,	// (0x00014f98) level_6_battery_lsc

0x171c,	// (0x00014f35) level_7_battery_lsc

0x1788,	// (0x00014fa1) scroll_handle_focus_pane_g1

0x1791,	// (0x00014faa) scroll_handle_focus_pane_g2

0x179a,	// (0x00014fb3) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00022f24) scroll_handle_focus_pane_g

0xb187,	// (0x0001e9a0) list_single_2graphic_pane_g1_ParamLimits

0xb187,	// (0x0001e9a0) list_single_2graphic_pane_g1

0xa9e6,	// (0x0001e1ff) list_single_2graphic_pane_g2_ParamLimits

0xa9e6,	// (0x0001e1ff) list_single_2graphic_pane_g2

0x2429,	// (0x00015c42) list_single_2graphic_pane_g3_ParamLimits

0x2429,	// (0x00015c42) list_single_2graphic_pane_g3

0xb193,	// (0x0001e9ac) list_single_2graphic_pane_g4_ParamLimits

0xb193,	// (0x0001e9ac) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00022f2b) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00022f2b) list_single_2graphic_pane_g

0xb1a4,	// (0x0001e9bd) list_single_2graphic_pane_t1_ParamLimits

0xb1a4,	// (0x0001e9bd) list_single_2graphic_pane_t1

0xb1d2,	// (0x0001e9eb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb1d2,	// (0x0001e9eb) list_double2_graphic_large_graphic_pane_g1

0xaa51,	// (0x0001e26a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaa51,	// (0x0001e26a) list_double2_graphic_large_graphic_pane_g2

0xaa62,	// (0x0001e27b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xaa62,	// (0x0001e27b) list_double2_graphic_large_graphic_pane_g3

0xb1e4,	// (0x0001e9fd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb1e4,	// (0x0001e9fd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00022f34) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00022f34) list_double2_graphic_large_graphic_pane_g

0xb1f0,	// (0x0001ea09) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb1f0,	// (0x0001ea09) list_double2_graphic_large_graphic_pane_t1

0xb206,	// (0x0001ea1f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb206,	// (0x0001ea1f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00022f3d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00022f3d) list_double2_graphic_large_graphic_pane_t

0x196e,	// (0x00015187) popup_fast_swap_window_ParamLimits

0x196e,	// (0x00015187) popup_fast_swap_window

0x198c,	// (0x000151a5) popup_side_volume_key_window

0x19aa,	// (0x000151c3) stacon_top_pane

0x19b4,	// (0x000151cd) status_pane_ParamLimits

0x19b4,	// (0x000151cd) status_pane

0xc6ef,	// (0x0001ff08) status_small_pane

0xc703,	// (0x0001ff1c) control_pane

0xc703,	// (0x0001ff1c) stacon_bottom_pane

0xe23b,	// (0x00021a54) scroll_pane_cp121

0xe232,	// (0x00021a4b) set_content_pane

0xb218,	// (0x0001ea31) bg_active_tab_pane_g1_cp1

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp1

0xb221,	// (0x0001ea3a) bg_active_tab_pane_g3_cp1

0xb218,	// (0x0001ea31) bg_passive_tab_pane_g1_cp1

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp1

0xb221,	// (0x0001ea3a) bg_passive_tab_pane_g3_cp1

0xb22a,	// (0x0001ea43) bg_active_tab_pane_g1_cp2

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp2

0xb233,	// (0x0001ea4c) bg_active_tab_pane_g3_cp2

0xb22a,	// (0x0001ea43) bg_passive_tab_pane_g1_cp2

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp2

0xb233,	// (0x0001ea4c) bg_passive_tab_pane_g3_cp2

0xb23c,	// (0x0001ea55) bg_active_tab_pane_g1_cp3

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp3

0xb245,	// (0x0001ea5e) bg_active_tab_pane_g3_cp3

0xb23c,	// (0x0001ea55) bg_passive_tab_pane_g1_cp3

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp3

0xb245,	// (0x0001ea5e) bg_passive_tab_pane_g3_cp3

0xb24e,	// (0x0001ea67) bg_active_tab_pane_g1_cp4

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp4

0xb257,	// (0x0001ea70) bg_active_tab_pane_g3_cp4

0xb24e,	// (0x0001ea67) bg_passive_tab_pane_g1_cp4

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp4

0xb257,	// (0x0001ea70) bg_passive_tab_pane_g3_cp4

0x18c7,	// (0x000150e0) bg_active_tab_pane_g1_cp5

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp5

0x18d0,	// (0x000150e9) bg_active_tab_pane_g3_cp5

0x18c7,	// (0x000150e0) bg_passive_tab_pane_g1_cp5

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp5

0x18d0,	// (0x000150e9) bg_passive_tab_pane_g3_cp5

0x41ff,	// (0x00017a18) list_set_graphic_pane_ParamLimits

0x41ff,	// (0x00017a18) list_set_graphic_pane

0xc703,	// (0x0001ff1c) bg_set_opt_pane_cp4

0x18ef,	// (0x00015108) list_set_graphic_pane_g1_ParamLimits

0x18ef,	// (0x00015108) list_set_graphic_pane_g1

0x18fb,	// (0x00015114) list_set_graphic_pane_g2_ParamLimits

0x18fb,	// (0x00015114) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00022f42) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00022f42) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x000232cc) volume_small_pane_cp_g

0x191f,	// (0x00015138) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x191f,	// (0x00015138) list_double2_large_graphic_pane_g1_cp2

0x192d,	// (0x00015146) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x192d,	// (0x00015146) list_double2_large_graphic_pane_g2_cp2

0x193e,	// (0x00015157) list_double2_large_graphic_pane_g3_cp2

0x1946,	// (0x0001515f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1946,	// (0x0001515f) list_double2_large_graphic_pane_t1_cp2

0x195c,	// (0x00015175) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x195c,	// (0x00015175) list_double2_large_graphic_pane_t2_cp2

0x3666,	// (0x00016e7f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3666,	// (0x00016e7f) list_double_large_graphic_pane_g1_cp2

0x3679,	// (0x00016e92) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3679,	// (0x00016e92) list_double_large_graphic_pane_g2_cp2

0x1ad2,	// (0x000152eb) list_double_large_graphic_pane_g3_cp2

0x368a,	// (0x00016ea3) list_double_large_graphic_pane_g4_cp

0x3692,	// (0x00016eab) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3692,	// (0x00016eab) list_double_large_graphic_pane_t1_cp2

0x36a9,	// (0x00016ec2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x36a9,	// (0x00016ec2) list_double_large_graphic_pane_t2_cp2

0x19c2,	// (0x000151db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x19c2,	// (0x000151db) list_double2_graphic_pane_g1_cp2

0x19d0,	// (0x000151e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x19d0,	// (0x000151e9) list_double2_graphic_pane_g2_cp2

0x19e1,	// (0x000151fa) list_double2_graphic_pane_g3_cp2

0x19eb,	// (0x00015204) list_double2_graphic_pane_t1_cp2_ParamLimits

0x19eb,	// (0x00015204) list_double2_graphic_pane_t1_cp2

0x1a01,	// (0x0001521a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1a01,	// (0x0001521a) list_double2_graphic_pane_t2_cp2

0x1a13,	// (0x0001522c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1a13,	// (0x0001522c) list_single_number_heading_pane_g1_cp2

0x1a1f,	// (0x00015238) list_single_number_heading_pane_g2_cp2

0x1a27,	// (0x00015240) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1a27,	// (0x00015240) list_single_number_heading_pane_t1_cp2

0x1a3d,	// (0x00015256) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1a3d,	// (0x00015256) list_single_number_heading_pane_t2_cp2

0x1a51,	// (0x0001526a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1a51,	// (0x0001526a) list_single_number_heading_pane_t3_cp2

0x1a13,	// (0x0001522c) list_single_heading_pane_g1_cp2_ParamLimits

0x1a13,	// (0x0001522c) list_single_heading_pane_g1_cp2

0x1a1f,	// (0x00015238) list_single_heading_pane_g2_cp2

0x1a27,	// (0x00015240) list_single_heading_pane_t1_cp2_ParamLimits

0x1a27,	// (0x00015240) list_single_heading_pane_t1_cp2

0x3460,	// (0x00016c79) list_single_heading_pane_t2_cp2_ParamLimits

0x3460,	// (0x00016c79) list_single_heading_pane_t2_cp2

0x33a8,	// (0x00016bc1) list_double_graphic_pane_g1_cp2_ParamLimits

0x33a8,	// (0x00016bc1) list_double_graphic_pane_g1_cp2

0x33b4,	// (0x00016bcd) list_double_graphic_pane_g2_cp2_ParamLimits

0x33b4,	// (0x00016bcd) list_double_graphic_pane_g2_cp2

0x33c3,	// (0x00016bdc) list_double_graphic_pane_g3_cp2

0x33cb,	// (0x00016be4) list_double_graphic_pane_t1_cp2_ParamLimits

0x33cb,	// (0x00016be4) list_double_graphic_pane_t1_cp2

0x33e1,	// (0x00016bfa) list_double_graphic_pane_t2_cp2_ParamLimits

0x33e1,	// (0x00016bfa) list_double_graphic_pane_t2_cp2

0x1ac6,	// (0x000152df) list_double_number_pane_g1_cp2_ParamLimits

0x1ac6,	// (0x000152df) list_double_number_pane_g1_cp2

0x1ad2,	// (0x000152eb) list_double_number_pane_g2_cp2

0x336c,	// (0x00016b85) list_double_number_pane_t1_cp2_ParamLimits

0x336c,	// (0x00016b85) list_double_number_pane_t1_cp2

0x3380,	// (0x00016b99) list_double_number_pane_t2_cp2_ParamLimits

0x3380,	// (0x00016b99) list_double_number_pane_t2_cp2

0x3396,	// (0x00016baf) list_double_number_pane_t3_cp2_ParamLimits

0x3396,	// (0x00016baf) list_double_number_pane_t3_cp2

0x3255,	// (0x00016a6e) list_single_graphic_pane_g1_cp2_ParamLimits

0x3255,	// (0x00016a6e) list_single_graphic_pane_g1_cp2

0x1b37,	// (0x00015350) list_single_graphic_pane_g2_cp2_ParamLimits

0x1b37,	// (0x00015350) list_single_graphic_pane_g2_cp2

0x1b43,	// (0x0001535c) list_single_graphic_pane_g3_cp2

0x322b,	// (0x00016a44) list_single_graphic_pane_t1_cp2_ParamLimits

0x322b,	// (0x00016a44) list_single_graphic_pane_t1_cp2

0x1b37,	// (0x00015350) list_single_number_pane_g1_cp2_ParamLimits

0x1b37,	// (0x00015350) list_single_number_pane_g1_cp2

0x1b43,	// (0x0001535c) list_single_number_pane_g2_cp2

0x322b,	// (0x00016a44) list_single_number_pane_t1_cp2_ParamLimits

0x322b,	// (0x00016a44) list_single_number_pane_t1_cp2

0x3241,	// (0x00016a5a) list_single_number_pane_t2_cp2_ParamLimits

0x3241,	// (0x00016a5a) list_single_number_pane_t2_cp2

0x192d,	// (0x00015146) list_double2_pane_g1_cp2_ParamLimits

0x192d,	// (0x00015146) list_double2_pane_g1_cp2

0x193e,	// (0x00015157) list_double2_pane_g2_cp2

0x1a9e,	// (0x000152b7) list_double2_pane_t1_cp2_ParamLimits

0x1a9e,	// (0x000152b7) list_double2_pane_t1_cp2

0x1ab4,	// (0x000152cd) list_double2_pane_t2_cp2_ParamLimits

0x1ab4,	// (0x000152cd) list_double2_pane_t2_cp2

0x1ac6,	// (0x000152df) list_double_pane_g1_cp2_ParamLimits

0x1ac6,	// (0x000152df) list_double_pane_g1_cp2

0x1ad2,	// (0x000152eb) list_double_pane_g2_cp2

0x1ada,	// (0x000152f3) list_double_pane_t1_cp2_ParamLimits

0x1ada,	// (0x000152f3) list_double_pane_t1_cp2

0x1af0,	// (0x00015309) list_double_pane_t2_cp2_ParamLimits

0x1af0,	// (0x00015309) list_double_pane_t2_cp2

0x1b27,	// (0x00015340) list_single_pane_cp2_g3

0x1b37,	// (0x00015350) list_single_pane_g1_cp2_ParamLimits

0x1b37,	// (0x00015350) list_single_pane_g1_cp2

0x1b43,	// (0x0001535c) list_single_pane_g2_cp2

0x1b4b,	// (0x00015364) list_single_pane_t1_cp2_ParamLimits

0x1b4b,	// (0x00015364) list_single_pane_t1_cp2

0x1b63,	// (0x0001537c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1b63,	// (0x0001537c) list_single_large_graphic_pane_g1_cp2

0x1b71,	// (0x0001538a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1b71,	// (0x0001538a) list_single_large_graphic_pane_g2_cp2

0x1b7d,	// (0x00015396) list_single_large_graphic_pane_g3_cp2

0x1b85,	// (0x0001539e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1b85,	// (0x0001539e) list_single_large_graphic_pane_g4_cp1

0x1b9f,	// (0x000153b8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1b9f,	// (0x000153b8) list_single_large_graphic_pane_t1_cp2

0x31f5,	// (0x00016a0e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x31f5,	// (0x00016a0e) list_single_graphic_heading_pane_g1_cp2

0x31c2,	// (0x000169db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x31c2,	// (0x000169db) list_single_graphic_heading_pane_g4_cp2

0x1b43,	// (0x0001535c) list_single_graphic_heading_pane_g5_cp2

0x3201,	// (0x00016a1a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3201,	// (0x00016a1a) list_single_graphic_heading_pane_t1_cp2

0x3217,	// (0x00016a30) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3217,	// (0x00016a30) list_single_graphic_heading_pane_t2_cp2

0x31b6,	// (0x000169cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0x31b6,	// (0x000169cf) list_single_2graphic_pane_g1_cp2

0x31c2,	// (0x000169db) list_single_2graphic_pane_g2_cp2_ParamLimits

0x31c2,	// (0x000169db) list_single_2graphic_pane_g2_cp2

0x1b43,	// (0x0001535c) list_single_2graphic_pane_g3_cp2

0x31d3,	// (0x000169ec) list_single_2graphic_pane_g4_cp2_ParamLimits

0x31d3,	// (0x000169ec) list_single_2graphic_pane_g4_cp2

0x31df,	// (0x000169f8) list_single_2graphic_pane_t1_cp2_ParamLimits

0x31df,	// (0x000169f8) list_single_2graphic_pane_t1_cp2

0xc6f9,	// (0x0001ff12) list_highlight_pane_g10_cp1

0x2d8e,	// (0x000165a7) list_highlight_pane_g1_cp1

0x2d96,	// (0x000165af) list_highlight_pane_g2_cp1

0x2d9e,	// (0x000165b7) list_highlight_pane_g3_cp1

0x2da6,	// (0x000165bf) list_highlight_pane_g4_cp1

0x2dae,	// (0x000165c7) list_highlight_pane_g5_cp1

0x2db6,	// (0x000165cf) list_highlight_pane_g6_cp1

0x2dbe,	// (0x000165d7) list_highlight_pane_g7_cp1

0x2dc6,	// (0x000165df) list_highlight_pane_g8_cp1

0x2dce,	// (0x000165e7) list_highlight_pane_g9_cp1

0xb854,	// (0x0001f06d) form_field_slider_pane_t3

0xb862,	// (0x0001f07b) form_field_slider_pane_t4

0x2cca,	// (0x000164e3) slider_form_pane_ParamLimits

0x2cca,	// (0x000164e3) slider_form_pane

0xc703,	// (0x0001ff1c) control_abbreviations

0xc703,	// (0x0001ff1c) control_conventions

0xc703,	// (0x0001ff1c) control_definitions

0xc703,	// (0x0001ff1c) format_table_attribute

0x34b6,	// (0x00016ccf) bg_popup_preview_window_pane_g9

0xc703,	// (0x0001ff1c) format_table_data2

0xc703,	// (0x0001ff1c) format_table_data3

0xc703,	// (0x0001ff1c) format_table_data_example

0x0008,

0xc703,	// (0x0001ff1c) intro_purpose

0xf8c0,	// (0x000230d9) bg_popup_preview_window_pane_g

0xc703,	// (0x0001ff1c) texts_category

0xc703,	// (0x0001ff1c) texts_graphics

0x1bb5,	// (0x000153ce) text_digital

0x1bc4,	// (0x000153dd) text_primary

0x1bd3,	// (0x000153ec) text_primary_small

0x1be2,	// (0x000153fb) text_secondary

0x1bf1,	// (0x0001540a) text_title

0x3ce8,	// (0x00017501) bg_passive_tab_pane_g1_cp3_srt

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp3_srt

0x3cf1,	// (0x0001750a) bg_passive_tab_pane_g3_cp3_srt

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp3_srt_ParamLimits

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp3_srt

0x3cfa,	// (0x00017513) tabs_4_active_pane_srt_g1

0xbc81,	// (0x0001f49a) tabs_4_active_pane_srt_t1_ParamLimits

0xbc81,	// (0x0001f49a) tabs_4_active_pane_srt_t1

0x3ce8,	// (0x00017501) bg_active_tab_pane_g1_cp3_copy1

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp3_copy1

0x3cf1,	// (0x0001750a) bg_active_tab_pane_g3_cp3_copy1

0xc75f,	// (0x0001ff78) tabs_2_long_active_pane_srt_ParamLimits

0xc75f,	// (0x0001ff78) tabs_2_long_active_pane_srt

0xc75f,	// (0x0001ff78) tabs_2_long_passive_pane_srt_ParamLimits

0xc75f,	// (0x0001ff78) tabs_2_long_passive_pane_srt

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp4_srt

0x3918,	// (0x00017131) bg_passive_tab_pane_g1_cp4_srt

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp4_srt

0x3921,	// (0x0001713a) bg_passive_tab_pane_g3_cp4_srt

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp4_srt_ParamLimits

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp4_srt

0xba34,	// (0x0001f24d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xba34,	// (0x0001f24d) tabs_2_long_active_pane_srt_t1

0x3918,	// (0x00017131) bg_active_tab_pane_g1_cp4_srt

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp4_srt

0x3921,	// (0x0001713a) bg_active_tab_pane_g3_cp4_srt

0xc751,	// (0x0001ff6a) tabs_3_long_active_pane_srt_ParamLimits

0xc751,	// (0x0001ff6a) tabs_3_long_active_pane_srt

0xc751,	// (0x0001ff6a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc751,	// (0x0001ff6a) tabs_3_long_passive_pane_cp_srt

0xc751,	// (0x0001ff6a) tabs_3_long_passive_pane_srt_ParamLimits

0xc751,	// (0x0001ff6a) tabs_3_long_passive_pane_srt

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp5_srt

0x18c7,	// (0x000150e0) bg_passive_tab_pane_g1_cp5_srt

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp5_srt

0x18d0,	// (0x000150e9) bg_passive_tab_pane_g3_cp5_srt

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp5_srt_ParamLimits

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp5_srt

0xba1e,	// (0x0001f237) tabs_3_long_active_pane_srt_t1_ParamLimits

0xba1e,	// (0x0001f237) tabs_3_long_active_pane_srt_t1

0x18c7,	// (0x000150e0) bg_active_tab_pane_g1_cp5_srt

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp5_srt

0x18d0,	// (0x000150e9) bg_active_tab_pane_g3_cp5_srt

0x38f8,	// (0x00017111) navi_text_pane_srt_t1

0x38f0,	// (0x00017109) navi_icon_pane_srt_g1

0x1dc9,	// (0x000155e2) midp_editing_number_pane_srt

0x1c00,	// (0x00015419) midp_ticker_pane_srt

0x1dd1,	// (0x000155ea) midp_ticker_pane_srt_g1

0x1dd9,	// (0x000155f2) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00022f61) midp_ticker_pane_srt_g

0x1de1,	// (0x000155fa) midp_ticker_pane_srt_t1

0x38e1,	// (0x000170fa) midp_editing_number_pane_t1_copy1

0xb260,	// (0x0001ea79) listscroll_midp_pane

0xb260,	// (0x0001ea79) midp_form_pane

0x1c77,	// (0x00015490) midp_info_popup_window_ParamLimits

0x1c77,	// (0x00015490) midp_info_popup_window

0xe429,	// (0x00021c42) bg_popup_sub_pane_cp50_ParamLimits

0xe429,	// (0x00021c42) bg_popup_sub_pane_cp50

0x29b0,	// (0x000161c9) listscroll_midp_info_pane_ParamLimits

0x29b0,	// (0x000161c9) listscroll_midp_info_pane

0x2990,	// (0x000161a9) listscroll_form_midp_pane_ParamLimits

0x2990,	// (0x000161a9) listscroll_form_midp_pane

0x299c,	// (0x000161b5) scroll_bar_cp050

0x2990,	// (0x000161a9) list_midp_pane

0x4aab,	// (0x000182c4) signal_pane_g2_cp

0x28aa,	// (0x000160c3) listscroll_midp_info_pane_t1_ParamLimits

0x28aa,	// (0x000160c3) listscroll_midp_info_pane_t1

0x28c2,	// (0x000160db) listscroll_midp_info_pane_t2_ParamLimits

0x28c2,	// (0x000160db) listscroll_midp_info_pane_t2

0x2900,	// (0x00016119) listscroll_midp_info_pane_t3_ParamLimits

0x2900,	// (0x00016119) listscroll_midp_info_pane_t3

0x293a,	// (0x00016153) listscroll_midp_info_pane_t4_ParamLimits

0x293a,	// (0x00016153) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x00023014) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x00023014) listscroll_midp_info_pane_t

0xe47e,	// (0x00021c97) scroll_pane_cp21

0x2844,	// (0x0001605d) form_midp_field_choice_group_pane

0x284d,	// (0x00016066) form_midp_field_text_pane

0x2890,	// (0x000160a9) form_midp_field_time_pane

0x2898,	// (0x000160b1) form_midp_gauge_slider_pane

0x28a1,	// (0x000160ba) form_midp_gauge_wait_pane

0xc703,	// (0x0001ff1c) form_midp_image_pane

0xb837,	// (0x0001f050) list_single_midp_pane_ParamLimits

0xb837,	// (0x0001f050) list_single_midp_pane

0xb812,	// (0x0001f02b) form_midp_field_text_pane_t1

0x25cb,	// (0x00015de4) input_focus_pane_cp050

0x2813,	// (0x0001602c) list_midp_form_text_pane

0x27b7,	// (0x00015fd0) form_midp_field_choice_group_pane_t1

0x27c5,	// (0x00015fde) input_focus_pane_cp051

0x27d9,	// (0x00015ff2) list_midp_choice_pane

0xc703,	// (0x0001ff1c) status_idle_pane

0x279b,	// (0x00015fb4) form_midp_field_time_pane_t1

0xc6f9,	// (0x0001ff12) wait_anim_pane_g2_copy1

0x27a9,	// (0x00015fc2) form_midp_field_time_pane_t2

0x0001,

0x1d27,	// (0x00015540) aid_navinavi_width_2_pane

0xf7f6,	// (0x0002300f) form_midp_field_time_pane_t

0xc703,	// (0x0001ff1c) input_focus_pane_cp052

0xc703,	// (0x0001ff1c) bg_input_focus_pane_cp040

0x275b,	// (0x00015f74) form_midp_gauge_slider_pane_t1

0x2769,	// (0x00015f82) form_midp_gauge_slider_pane_t2

0xb7f6,	// (0x0001f00f) form_midp_gauge_slider_pane_t3

0xb804,	// (0x0001f01d) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x00023006) form_midp_gauge_slider_pane_t

0x2793,	// (0x00015fac) form_midp_slider_pane

0xc75f,	// (0x0001ff78) bg_input_focus_pane_cp041_ParamLimits

0xc75f,	// (0x0001ff78) bg_input_focus_pane_cp041

0x2728,	// (0x00015f41) form_midp_gauge_wait_pane_t1_ParamLimits

0x2728,	// (0x00015f41) form_midp_gauge_wait_pane_t1

0x273a,	// (0x00015f53) form_midp_gauge_wait_pane_t2_ParamLimits

0x273a,	// (0x00015f53) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x00023001) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x00023001) form_midp_gauge_wait_pane_t

0x274c,	// (0x00015f65) form_midp_wait_pane_ParamLimits

0x274c,	// (0x00015f65) form_midp_wait_pane

0x26f0,	// (0x00015f09) form_midp_image_pane_g1

0x26f9,	// (0x00015f12) form_midp_image_pane_t1

0x2708,	// (0x00015f21) form_midp_image_pane_t2

0x2717,	// (0x00015f30) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x00022ffa) form_midp_image_pane_t

0x26d8,	// (0x00015ef1) list_single_midp_pane_g1

0x26e1,	// (0x00015efa) list_single_midp_pane_t1

0xb7df,	// (0x0001eff8) list_midp_form_item_pane_ParamLimits

0xb7df,	// (0x0001eff8) list_midp_form_item_pane

0x1ccf,	// (0x000154e8) list_midp_form_item_pane_t1

0x1cde,	// (0x000154f7) midp_ticker_pane_g1

0x1cea,	// (0x00015503) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00022f47) midp_ticker_pane_g

0xb304,	// (0x0001eb1d) midp_ticker_pane_t1

0xbbd9,	// (0x0001f3f2) midp_editing_number_pane_t1

0x3b61,	// (0x0001737a) midp_editing_number_pane

0x3b70,	// (0x00017389) midp_ticker_pane

0x38a9,	// (0x000170c2) ai_message_heading_pane

0xc703,	// (0x0001ff1c) bg_popup_window_pane_cp14

0x38b1,	// (0x000170ca) listscroll_ai_message_pane

0x382f,	// (0x00017048) ai_message_heading_pane_g1_ParamLimits

0x382f,	// (0x00017048) ai_message_heading_pane_g1

0x383b,	// (0x00017054) ai_message_heading_pane_g2_ParamLimits

0x383b,	// (0x00017054) ai_message_heading_pane_g2

0x3849,	// (0x00017062) ai_message_heading_pane_g3_ParamLimits

0x3849,	// (0x00017062) ai_message_heading_pane_g3

0x3855,	// (0x0001706e) ai_message_heading_pane_g4_ParamLimits

0x3855,	// (0x0001706e) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x0002313b) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x0002313b) ai_message_heading_pane_g

0x3861,	// (0x0001707a) ai_message_heading_pane_t1_ParamLimits

0x3861,	// (0x0001707a) ai_message_heading_pane_t1

0x387b,	// (0x00017094) ai_message_heading_pane_t2_ParamLimits

0x387b,	// (0x00017094) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x00023144) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x00023144) ai_message_heading_pane_t

0x388f,	// (0x000170a8) bg_popup_heading_pane_cp1_ParamLimits

0x388f,	// (0x000170a8) bg_popup_heading_pane_cp1

0x381d,	// (0x00017036) list_ai_message_pane_ParamLimits

0x381d,	// (0x00017036) list_ai_message_pane

0xe47e,	// (0x00021c97) scroll_pane_cp10

0x37b9,	// (0x00016fd2) list_ai_message_pane_g1

0x37c1,	// (0x00016fda) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x00023118) list_ai_message_pane_g

0x37c9,	// (0x00016fe2) list_ai_message_pane_t1_ParamLimits

0x37c9,	// (0x00016fe2) list_ai_message_pane_t1

0x37de,	// (0x00016ff7) list_ai_message_pane_t2_ParamLimits

0x37de,	// (0x00016ff7) list_ai_message_pane_t2

0x37f3,	// (0x0001700c) list_ai_message_pane_t3_ParamLimits

0x37f3,	// (0x0001700c) list_ai_message_pane_t3

0x3808,	// (0x00017021) list_ai_message_pane_t4_ParamLimits

0x3808,	// (0x00017021) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x0002311d) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x0002311d) list_ai_message_pane_t

0xba04,	// (0x0001f21d) cell_ai_soft_ind_pane_ParamLimits

0xba04,	// (0x0001f21d) cell_ai_soft_ind_pane

0x1d08,	// (0x00015521) cell_ai_soft_ind_pane_g1_ParamLimits

0x1d08,	// (0x00015521) cell_ai_soft_ind_pane_g1

0xc703,	// (0x0001ff1c) grid_highlight_cp1

0x1d15,	// (0x0001552e) text_secondary_cp56_ParamLimits

0x1d15,	// (0x0001552e) text_secondary_cp56

0x3777,	// (0x00016f90) example_general_pane_ParamLimits

0x3777,	// (0x00016f90) example_general_pane

0x3783,	// (0x00016f9c) example_parent_pane_g1_ParamLimits

0x3783,	// (0x00016f9c) example_parent_pane_g1

0x378f,	// (0x00016fa8) example_parent_pane_t1_ParamLimits

0x378f,	// (0x00016fa8) example_parent_pane_t1

0x99f8,	// (0x0001d211) popup_preview_text_window_ParamLimits

0x99f8,	// (0x0001d211) popup_preview_text_window

0x1b2f,	// (0x00015348) list_single_pane_cp2_g4

0xc97a,	// (0x00020193) bg_popup_preview_window_pane_ParamLimits

0xc97a,	// (0x00020193) bg_popup_preview_window_pane

0x34c0,	// (0x00016cd9) popup_preview_text_window_t1_ParamLimits

0x34c0,	// (0x00016cd9) popup_preview_text_window_t1

0x34de,	// (0x00016cf7) popup_preview_text_window_t2_ParamLimits

0x34de,	// (0x00016cf7) popup_preview_text_window_t2

0x3527,	// (0x00016d40) popup_preview_text_window_t3_ParamLimits

0x3527,	// (0x00016d40) popup_preview_text_window_t3

0x356c,	// (0x00016d85) popup_preview_text_window_t4_ParamLimits

0x356c,	// (0x00016d85) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x000230ec) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x000230ec) popup_preview_text_window_t

0x35ea,	// (0x00016e03) scroll_pane_cp11

0x24a7,	// (0x00015cc0) bg_popup_preview_window_pane_g1

0x3474,	// (0x00016c8d) bg_popup_preview_window_pane_g2

0x347e,	// (0x00016c97) bg_popup_preview_window_pane_g3

0x3488,	// (0x00016ca1) bg_popup_preview_window_pane_g4

0x3492,	// (0x00016cab) bg_popup_preview_window_pane_g5

0x349c,	// (0x00016cb5) bg_popup_preview_window_pane_g6

0x34a4,	// (0x00016cbd) bg_popup_preview_window_pane_g7

0x34ac,	// (0x00016cc5) bg_popup_preview_window_pane_g8

0xdf9d,	// (0x000217b6) aid_popup_width_pane

0x9968,	// (0x0001d181) popup_midp_note_alarm_window_ParamLimits

0x9968,	// (0x0001d181) popup_midp_note_alarm_window

0xe2a4,	// (0x00021abd) data_form_pane_ParamLimits

0xadec,	// (0x0001e605) form_field_data_pane_g1

0xadf6,	// (0x0001e60f) form_field_data_pane_t1_ParamLimits

0xe2b0,	// (0x00021ac9) input_focus_pane_ParamLimits

0xe2be,	// (0x00021ad7) data_form_wide_pane_ParamLimits

0xe2ca,	// (0x00021ae3) form_field_data_wide_pane_g1

0xe2f6,	// (0x00021b0f) form_field_data_wide_pane_t1_ParamLimits

0xcb36,	// (0x0002034f) input_focus_pane_cp6_ParamLimits

0xaf26,	// (0x0001e73f) input_popup_find_pane_g1_ParamLimits

0xaf26,	// (0x0001e73f) input_popup_find_pane_g1

0xe755,	// (0x00021f6e) aid_navi_side_left_pane

0xe76a,	// (0x00021f83) aid_navi_side_right_pane

0x2e89,	// (0x000166a2) bg_popup_window_pane_cp30_ParamLimits

0x2e89,	// (0x000166a2) bg_popup_window_pane_cp30

0x2f03,	// (0x0001671c) popup_midp_note_alarm_window_g1_ParamLimits

0x2f03,	// (0x0001671c) popup_midp_note_alarm_window_g1

0x2f33,	// (0x0001674c) popup_midp_note_alarm_window_t1_ParamLimits

0x2f33,	// (0x0001674c) popup_midp_note_alarm_window_t1

0x2fd4,	// (0x000167ed) popup_midp_note_alarm_window_t2_ParamLimits

0x2fd4,	// (0x000167ed) popup_midp_note_alarm_window_t2

0x3082,	// (0x0001689b) popup_midp_note_alarm_window_t3_ParamLimits

0x3082,	// (0x0001689b) popup_midp_note_alarm_window_t3

0x30b4,	// (0x000168cd) popup_midp_note_alarm_window_t4_ParamLimits

0x30b4,	// (0x000168cd) popup_midp_note_alarm_window_t4

0x30da,	// (0x000168f3) popup_midp_note_alarm_window_t5_ParamLimits

0x30da,	// (0x000168f3) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x00023089) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x00023089) popup_midp_note_alarm_window_t

0x3186,	// (0x0001699f) wait_bar_pane_cp1_ParamLimits

0x3186,	// (0x0001699f) wait_bar_pane_cp1

0xc703,	// (0x0001ff1c) wait_anim_pane_copy1

0xc703,	// (0x0001ff1c) wait_border_pane_copy1

0x2b6e,	// (0x00016387) wait_border_pane_g1_copy1

0xe30d,	// (0x00021b26) form_field_popup_pane_g1

0xae10,	// (0x0001e629) form_field_popup_pane_t1_ParamLimits

0xe2b0,	// (0x00021ac9) input_focus_pane_cp7_ParamLimits

0xe315,	// (0x00021b2e) list_form_pane_ParamLimits

0xe321,	// (0x00021b3a) form_field_popup_wide_pane_g1

0xe329,	// (0x00021b42) form_field_popup_wide_pane_t1_ParamLimits

0xe2b0,	// (0x00021ac9) input_focus_pane_cp8_ParamLimits

0xe33b,	// (0x00021b54) list_form_wide_pane_ParamLimits

0x3d83,	// (0x0001759c) aid_size_cell_graphic_pane

0xae8f,	// (0x0001e6a8) data_form_pane_t1_ParamLimits

0xbbbd,	// (0x0001f3d6) data_form_wide_pane_t1_ParamLimits

0xb446,	// (0x0001ec5f) bg_status_flat_pane

0xa621,	// (0x0001de3a) title_pane_t1_ParamLimits

0xc719,	// (0x0001ff32) title_pane_t2_ParamLimits

0xc73f,	// (0x0001ff58) title_pane_t3_ParamLimits

0xf532,	// (0x00022d4b) title_pane_t_ParamLimits

0xb060,	// (0x0001e879) level_1_signal_ParamLimits

0xb072,	// (0x0001e88b) level_2_signal_ParamLimits

0xb085,	// (0x0001e89e) level_3_signal_ParamLimits

0xb098,	// (0x0001e8b1) level_4_signal_ParamLimits

0xb0ab,	// (0x0001e8c4) level_5_signal_ParamLimits

0xb0be,	// (0x0001e8d7) level_6_signal_ParamLimits

0xb0d1,	// (0x0001e8ea) level_7_signal_ParamLimits

0xb060,	// (0x0001e879) level_1_battery_ParamLimits

0xb072,	// (0x0001e88b) level_2_battery_ParamLimits

0xb085,	// (0x0001e89e) level_3_battery_ParamLimits

0xb098,	// (0x0001e8b1) level_4_battery_ParamLimits

0xb0ab,	// (0x0001e8c4) level_5_battery_ParamLimits

0xb0be,	// (0x0001e8d7) level_6_battery_ParamLimits

0xb0d1,	// (0x0001e8ea) level_7_battery_ParamLimits

0x2d8e,	// (0x000165a7) bg_status_flat_pane_g1

0x2d96,	// (0x000165af) bg_status_flat_pane_g2

0x2d9e,	// (0x000165b7) bg_status_flat_pane_g3

0x2da6,	// (0x000165bf) bg_status_flat_pane_g4

0x2dae,	// (0x000165c7) bg_status_flat_pane_g5

0x2db6,	// (0x000165cf) bg_status_flat_pane_g6

0x2dbe,	// (0x000165d7) bg_status_flat_pane_g7

0xa6b5,	// (0x0001dece) tabs_3_active_pane_t1_ParamLimits

0xa6b5,	// (0x0001dece) tabs_3_passive_pane_t1_ParamLimits

0xa6cf,	// (0x0001dee8) tabs_4_active_pane_t1_ParamLimits

0xa6cf,	// (0x0001dee8) tabs_4_1_passive_pane_t1_ParamLimits

0xaf3c,	// (0x0001e755) tabs_2_active_pane_t1_ParamLimits

0xaf3c,	// (0x0001e755) tabs_2_passive_pane_t1_ParamLimits

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp4_ParamLimits

0xaf4e,	// (0x0001e767) tabs_2_long_active_pane_t1_ParamLimits

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp4_ParamLimits

0xedb8,	// (0x000225d1) list_single_midp_graphic_pane_t1_ParamLimits

0xc75f,	// (0x0001ff78) bg_active_tab_pane_cp5_ParamLimits

0xaf61,	// (0x0001e77a) tabs_3_long_active_pane_t1_ParamLimits

0x1f2f,	// (0x00015748) bg_passive_tab_pane_cp5_ParamLimits

0xedb8,	// (0x000225d1) list_single_midp_graphic_pane_t1

0xb446,	// (0x0001ec5f) bg_status_flat_pane_ParamLimits

0x20f1,	// (0x0001590a) indicator_pane_cp2_ParamLimits

0x20f1,	// (0x0001590a) indicator_pane_cp2

0xb5dc,	// (0x0001edf5) navi_pane_srt_ParamLimits

0xb5dc,	// (0x0001edf5) navi_pane_srt

0x2258,	// (0x00015a71) popup_clock_digital_analogue_window_cp1

0xc7bd,	// (0x0001ffd6) indicator_pane_t1

0x1c00,	// (0x00015419) copy_highlight_pane

0x1c00,	// (0x00015419) cursor_graphics_pane

0x1c00,	// (0x00015419) graphic_within_text_pane

0x1c00,	// (0x00015419) link_highlight_pane

0x35ad,	// (0x00016dc6) popup_preview_text_window_t5_ParamLimits

0x35ad,	// (0x00016dc6) popup_preview_text_window_t5

0x1d31,	// (0x0001554a) cursor_digital_pane

0x1d31,	// (0x0001554a) cursor_primary_pane

0x1d42,	// (0x0001555b) cursor_primary_small_pane

0x1d4a,	// (0x00015563) cursor_secondary_pane

0x1d52,	// (0x0001556b) cursor_title_pane

0x1d31,	// (0x0001554a) link_highlight_digital_pane

0x1d39,	// (0x00015552) link_highlight_primary_pane

0x1d42,	// (0x0001555b) link_highlight_primary_small_pane

0x1d4a,	// (0x00015563) link_highlight_secondary_pane

0x1d52,	// (0x0001556b) link_highlight_title_pane

0x1d31,	// (0x0001554a) copy_highlight_digital_pane

0x1d31,	// (0x0001554a) copy_highlight_primary_pane

0x1d42,	// (0x0001555b) copy_highlight_primary_small_pane

0x1d4a,	// (0x00015563) copy_highlight_secondary_pane

0x1d52,	// (0x0001556b) copy_highlight_title_pane

0x1d4a,	// (0x00015563) graphic_text_digital_pane

0x2e2c,	// (0x00016645) graphic_text_primary_pane

0x2e35,	// (0x0001664e) graphic_text_primary_small_pane

0x1d42,	// (0x0001555b) graphic_text_secondary_pane

0x1d31,	// (0x0001554a) graphic_text_title_pane

0xb316,	// (0x0001eb2f) cursor_primary_pane_g1

0x2e1e,	// (0x00016637) cursor_text_primary_t1

0xb884,	// (0x0001f09d) cursor_primary_small_pane_g1

0x2e10,	// (0x00016629) cursor_text_primary_small_t1

0xb87a,	// (0x0001f093) cursor_primary_small_pane_g1_copy1

0x2df8,	// (0x00016611) cursor_text_primary_small_t1_copy1

0x2dd6,	// (0x000165ef) cursor_text_title_t1

0xb870,	// (0x0001f089) cursor_title_pane_g1

0xb316,	// (0x0001eb2f) cursor_digital_pane_g1

0x1d64,	// (0x0001557d) cursor_text_digital_t1

0x1d72,	// (0x0001558b) link_highlight_primary_pane_g1

0x2d7f,	// (0x00016598) link_highlight_primary_pane_t1

0x1d72,	// (0x0001558b) link_highlight_primary_small_pane_g1

0x1d7a,	// (0x00015593) link_highlight_primary_small_pane_t1

0x1d89,	// (0x000155a2) link_highlight_secondary_pane_g1

0x1d91,	// (0x000155aa) link_highlight_secondary_pane_t1

0x2cf3,	// (0x0001650c) link_highlight_title_pane_g1

0x2cfb,	// (0x00016514) link_highlight_title_pane_t1

0x2cdc,	// (0x000164f5) link_highlight_digital_pane_g1

0x2ce4,	// (0x000164fd) link_highlight_digital_pane_t1

0x2ba4,	// (0x000163bd) copy_highlight_primary_pane_g1

0x2bbb,	// (0x000163d4) copy_highlight_primary_pane_t1

0x2ba4,	// (0x000163bd) copy_highlight_primary_small_pane_g1

0x2bac,	// (0x000163c5) copy_highlight_primary_small_pane_t1

0x1da0,	// (0x000155b9) copy_highlight_secondary_pane_g1

0x1da8,	// (0x000155c1) copy_highlight_secondary_pane_t1

0x2b8d,	// (0x000163a6) copy_highlight_title_pane_g1

0x2b95,	// (0x000163ae) copy_highlight_title_pane_t1

0x2ba4,	// (0x000163bd) copy_highlight_digital_pane_g1

0x3f55,	// (0x0001776e) copy_highlight_digital_pane_t1

0x3ea9,	// (0x000176c2) graphic_text_primary_pane_g1

0x3f39,	// (0x00017752) graphic_text_primary_pane_t1

0x3f47,	// (0x00017760) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x000231b8) graphic_text_primary_pane_t

0x3f15,	// (0x0001772e) graphic_text_primary_small_pane_g1

0x3f1d,	// (0x00017736) graphic_text_primary_small_pane_t1

0x3f2b,	// (0x00017744) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x000231b3) graphic_text_primary_small_pane_t

0x3ef1,	// (0x0001770a) graphic_text_secondary_pane_g1

0x3ef9,	// (0x00017712) graphic_text_secondary_pane_t1

0x3f07,	// (0x00017720) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x000231ae) graphic_text_secondary_pane_t

0x3ecd,	// (0x000176e6) graphic_text_title_pane_g1

0x3ed5,	// (0x000176ee) graphic_text_title_pane_t1

0x3ee3,	// (0x000176fc) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x000231a9) graphic_text_title_pane_t

0x3ea9,	// (0x000176c2) graphic_text_digital_pane_g1

0x3eb1,	// (0x000176ca) graphic_text_digital_pane_t1

0x3ebf,	// (0x000176d8) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x000231a4) graphic_text_digital_pane_t

0xc75f,	// (0x0001ff78) navi_icon_pane_srt_ParamLimits

0xc75f,	// (0x0001ff78) navi_icon_pane_srt

0xc703,	// (0x0001ff1c) navi_midp_pane_srt

0xc703,	// (0x0001ff1c) navi_navi_pane_srt

0xc75f,	// (0x0001ff78) navi_text_pane_srt_ParamLimits

0xc75f,	// (0x0001ff78) navi_text_pane_srt

0x3e74,	// (0x0001768d) navi_navi_icon_text_pane_srt

0x3e7c,	// (0x00017695) navi_navi_pane_srt_g1_ParamLimits

0x3e7c,	// (0x00017695) navi_navi_pane_srt_g1

0x3e8e,	// (0x000176a7) navi_navi_pane_srt_g2_ParamLimits

0x3e8e,	// (0x000176a7) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x0002319f) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x0002319f) navi_navi_pane_srt_g

0x3ea0,	// (0x000176b9) navi_navi_tabs_pane_srt

0x3e74,	// (0x0001768d) navi_navi_text_pane_srt

0x3e74,	// (0x0001768d) navi_navi_volume_pane_srt

0x3e65,	// (0x0001767e) navi_navi_text_pane_srt_t1

0xeff1,	// (0x0002280a) navi_navi_volume_pane_srt_g1

0xeff9,	// (0x00022812) volume_small_pane_srt_ParamLimits

0xeff9,	// (0x00022812) volume_small_pane_srt

0xea52,	// (0x0002226b) volume_small_pane_srt_g1_ParamLimits

0xea52,	// (0x0002226b) volume_small_pane_srt_g1

0xea62,	// (0x0002227b) volume_small_pane_srt_g2_ParamLimits

0xea62,	// (0x0002227b) volume_small_pane_srt_g2

0xea7f,	// (0x00022298) volume_small_pane_srt_g3_ParamLimits

0xea7f,	// (0x00022298) volume_small_pane_srt_g3

0xea90,	// (0x000222a9) volume_small_pane_srt_g4_ParamLimits

0xea90,	// (0x000222a9) volume_small_pane_srt_g4

0xeaa1,	// (0x000222ba) volume_small_pane_srt_g5_ParamLimits

0xeaa1,	// (0x000222ba) volume_small_pane_srt_g5

0xeab2,	// (0x000222cb) volume_small_pane_srt_g6_ParamLimits

0xeab2,	// (0x000222cb) volume_small_pane_srt_g6

0xeac3,	// (0x000222dc) volume_small_pane_srt_g7_ParamLimits

0xeac3,	// (0x000222dc) volume_small_pane_srt_g7

0xead4,	// (0x000222ed) volume_small_pane_srt_g8_ParamLimits

0xead4,	// (0x000222ed) volume_small_pane_srt_g8

0xeae5,	// (0x000222fe) volume_small_pane_srt_g9_ParamLimits

0xeae5,	// (0x000222fe) volume_small_pane_srt_g9

0xeaf6,	// (0x0002230f) volume_small_pane_srt_g10_ParamLimits

0xeaf6,	// (0x0002230f) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00022f4c) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00022f4c) volume_small_pane_srt_g

0xca2f,	// (0x00020248) query_popup_data_pane_cp2

0x3e4b,	// (0x00017664) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e4b,	// (0x00017664) navi_navi_icon_text_pane_srt_t1

0x2e2c,	// (0x00016645) navi_tabs_2_long_pane_srt

0x2e2c,	// (0x00016645) navi_tabs_2_pane_srt

0x2e2c,	// (0x00016645) navi_tabs_3_long_pane_srt

0x2e2c,	// (0x00016645) navi_tabs_3_pane_srt

0x2e2c,	// (0x00016645) navi_tabs_4_pane_srt

0xefd1,	// (0x000227ea) tabs_2_active_pane_srt_ParamLimits

0xefd1,	// (0x000227ea) tabs_2_active_pane_srt

0xefe1,	// (0x000227fa) tabs_2_passive_pane_srt_ParamLimits

0xefe1,	// (0x000227fa) tabs_2_passive_pane_srt

0x25cb,	// (0x00015de4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x25cb,	// (0x00015de4) bg_passive_tab_pane_cp1_srt

0x3e17,	// (0x00017630) bg_passive_tab_pane_g1_cp1_srt

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp1_srt

0x3e20,	// (0x00017639) bg_passive_tab_pane_g3_cp1_srt

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp1_srt_ParamLimits

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp1_srt

0x3e29,	// (0x00017642) tabs_2_active_pane_srt_g1

0xbd09,	// (0x0001f522) tabs_2_active_pane_srt_t1_ParamLimits

0xbd09,	// (0x0001f522) tabs_2_active_pane_srt_t1

0x3e17,	// (0x00017630) bg_active_tab_pane_g1_cp1_srt

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp1_srt

0x3e20,	// (0x00017639) bg_active_tab_pane_g3_cp1_srt

0xef9e,	// (0x000227b7) tabs_3_active_pane_srt_ParamLimits

0xef9e,	// (0x000227b7) tabs_3_active_pane_srt

0xefaf,	// (0x000227c8) tabs_3_passive_pane_cp_srt_ParamLimits

0xefaf,	// (0x000227c8) tabs_3_passive_pane_cp_srt

0xefc0,	// (0x000227d9) tabs_3_passive_pane_srt_ParamLimits

0xefc0,	// (0x000227d9) tabs_3_passive_pane_srt

0x25cb,	// (0x00015de4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x25cb,	// (0x00015de4) bg_passive_tab_pane_cp2_srt

0x1db7,	// (0x000155d0) bg_passive_tab_pane_g1_cp2_srt

0x183d,	// (0x00015056) bg_passive_tab_pane_g2_cp2_srt

0x1dc0,	// (0x000155d9) bg_passive_tab_pane_g3_cp2_srt

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp2_srt_ParamLimits

0xc751,	// (0x0001ff6a) bg_active_tab_pane_cp2_srt

0x3dfd,	// (0x00017616) tabs_3_active_pane_srt_g1

0xbcf3,	// (0x0001f50c) tabs_3_active_pane_srt_t1_ParamLimits

0xbcf3,	// (0x0001f50c) tabs_3_active_pane_srt_t1

0x1db7,	// (0x000155d0) bg_active_tab_pane_g1_cp2_srt

0x183d,	// (0x00015056) bg_active_tab_pane_g2_cp2_srt

0x1dc0,	// (0x000155d9) bg_active_tab_pane_g3_cp2_srt

0xef56,	// (0x0002276f) tabs_4_active_pane_srt_ParamLimits

0xef56,	// (0x0002276f) tabs_4_active_pane_srt

0xef68,	// (0x00022781) tabs_4_passive_pane_cp2_srt_ParamLimits

0xef68,	// (0x00022781) tabs_4_passive_pane_cp2_srt

0xeb5b,	// (0x00022374) aid_size_cell_toolbar

0x398b,	// (0x000171a4) main_idle_act_pane_ParamLimits

0xec15,	// (0x0002242e) popup_large_graphic_colour_window_ParamLimits

0x9cbe,	// (0x0001d4d7) popup_toolbar_window_ParamLimits

0x9cbe,	// (0x0001d4d7) popup_toolbar_window

0x3ba9,	// (0x000173c2) list_single_graphic_2heading_pane_ParamLimits

0x3ba9,	// (0x000173c2) list_single_graphic_2heading_pane

0xe7eb,	// (0x00022004) aid_size_cell_apps_grid_lsc_pane

0xe7fd,	// (0x00022016) aid_size_cell_apps_grid_prt_pane

0x1f2f,	// (0x00015748) bg_wml_button_pane_cp1_ParamLimits

0x1f2f,	// (0x00015748) bg_wml_button_pane_cp1

0xb812,	// (0x0001f02b) form_midp_field_text_pane_t1_ParamLimits

0x25cb,	// (0x00015de4) input_focus_pane_cp050_ParamLimits

0x2813,	// (0x0001602c) list_midp_form_text_pane_ParamLimits

0x27c5,	// (0x00015fde) input_focus_pane_cp051_ParamLimits

0x27d9,	// (0x00015ff2) list_midp_choice_pane_ParamLimits

0xb7ab,	// (0x0001efc4) list_single_2graphic_pane_cp3_ParamLimits

0xb7ab,	// (0x0001efc4) list_single_2graphic_pane_cp3

0xb7be,	// (0x0001efd7) list_single_midp_graphic_pane_ParamLimits

0xb7be,	// (0x0001efd7) list_single_midp_graphic_pane

0xeccd,	// (0x000224e6) list_single_graphic_2heading_pane_g1_ParamLimits

0xeccd,	// (0x000224e6) list_single_graphic_2heading_pane_g1

0xecd9,	// (0x000224f2) list_single_graphic_2heading_pane_g4_ParamLimits

0xecd9,	// (0x000224f2) list_single_graphic_2heading_pane_g4

0xece5,	// (0x000224fe) list_single_graphic_2heading_pane_g5_ParamLimits

0xece5,	// (0x000224fe) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00022f9f) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00022f9f) list_single_graphic_2heading_pane_g

0xecf1,	// (0x0002250a) list_single_graphic_2heading_pane_t1_ParamLimits

0xecf1,	// (0x0002250a) list_single_graphic_2heading_pane_t1

0xed05,	// (0x0002251e) list_single_graphic_2heading_pane_t2_ParamLimits

0xed05,	// (0x0002251e) list_single_graphic_2heading_pane_t2

0xed21,	// (0x0002253a) list_single_graphic_2heading_pane_t3_ParamLimits

0xed21,	// (0x0002253a) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00022fa6) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00022fa6) list_single_graphic_2heading_pane_t

0x23ab,	// (0x00015bc4) bg_popup_sub_pane_cp2

0x23d5,	// (0x00015bee) grid_toobar_pane

0xed39,	// (0x00022552) cell_toolbar_pane_ParamLimits

0xed39,	// (0x00022552) cell_toolbar_pane

0x244b,	// (0x00015c64) cell_toolbar_pane_g1_ParamLimits

0x244b,	// (0x00015c64) cell_toolbar_pane_g1

0x245f,	// (0x00015c78) cell_toolbar_pane_g2_ParamLimits

0x245f,	// (0x00015c78) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00022fb4) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00022fb4) cell_toolbar_pane_g

0x2481,	// (0x00015c9a) grid_highlight_pane_cp2_ParamLimits

0x2481,	// (0x00015c9a) grid_highlight_pane_cp2

0x249b,	// (0x00015cb4) toolbar_button_pane

0x24a7,	// (0x00015cc0) toolbar_button_pane_g1

0x24af,	// (0x00015cc8) toolbar_button_pane_g2

0x24b7,	// (0x00015cd0) toolbar_button_pane_g3

0x24bf,	// (0x00015cd8) toolbar_button_pane_g4

0x24c7,	// (0x00015ce0) toolbar_button_pane_g5

0x24cf,	// (0x00015ce8) toolbar_button_pane_g6

0x24d7,	// (0x00015cf0) toolbar_button_pane_g7

0x24df,	// (0x00015cf8) toolbar_button_pane_g8

0x24e7,	// (0x00015d00) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00022fb9) toolbar_button_pane_g

0xed71,	// (0x0002258a) list_single_2graphic_pane_g1_cp3_ParamLimits

0xed71,	// (0x0002258a) list_single_2graphic_pane_g1_cp3

0x9d16,	// (0x0001d52f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9d16,	// (0x0001d52f) list_single_2graphic_pane_g2_cp3

0xed7d,	// (0x00022596) list_single_2graphic_pane_g3_cp3

0xed85,	// (0x0002259e) list_single_2graphic_pane_g4_cp3_ParamLimits

0xed85,	// (0x0002259e) list_single_2graphic_pane_g4_cp3

0xed91,	// (0x000225aa) list_single_2graphic_pane_t1_cp3_ParamLimits

0xed91,	// (0x000225aa) list_single_2graphic_pane_t1_cp3

0xedac,	// (0x000225c5) list_single_midp_graphic_pane_g2_ParamLimits

0xedac,	// (0x000225c5) list_single_midp_graphic_pane_g2

0xeb63,	// (0x0002237c) aid_zoom_text_primary

0xeb6b,	// (0x00022384) aid_zoom_text_secondary

0x1e71,	// (0x0001568a) status_small_pane_g7_ParamLimits

0x1e71,	// (0x0001568a) status_small_pane_g7

0x1e94,	// (0x000156ad) status_small_pane_t1_ParamLimits

0xa5f1,	// (0x0001de0a) title_pane_g2

0x0003,

0xf529,	// (0x00022d42) title_pane_g

0xa891,	// (0x0001e0aa) aid_size_cell_colour_1_pane_ParamLimits

0xa891,	// (0x0001e0aa) aid_size_cell_colour_1_pane

0xa8a5,	// (0x0001e0be) aid_size_cell_colour_2_pane_ParamLimits

0xa8a5,	// (0x0001e0be) aid_size_cell_colour_2_pane

0xa8b9,	// (0x0001e0d2) aid_size_cell_colour_3_pane_ParamLimits

0xa8b9,	// (0x0001e0d2) aid_size_cell_colour_3_pane

0xa8cd,	// (0x0001e0e6) aid_size_cell_colour_4_pane_ParamLimits

0xa8cd,	// (0x0001e0e6) aid_size_cell_colour_4_pane

0xe65d,	// (0x00021e76) title_pane_stacon_g1_ParamLimits

0xe65d,	// (0x00021e76) title_pane_stacon_g1

0x2c12,	// (0x0001642b) popup_note_wait_window_g3_ParamLimits

0x2c12,	// (0x0001642b) popup_note_wait_window_g3

0x2c89,	// (0x000164a2) popup_note_wait_window_t5_ParamLimits

0x2c89,	// (0x000164a2) popup_note_wait_window_t5

0xc703,	// (0x0001ff1c) main_feb_china_hwr_fs_writing_pane

0x964f,	// (0x0001ce68) popup_feb_china_hwr_fs_window_ParamLimits

0x964f,	// (0x0001ce68) popup_feb_china_hwr_fs_window

0x9d27,	// (0x0001d540) aid_size_cell_hwr_fs_ParamLimits

0x9d27,	// (0x0001d540) aid_size_cell_hwr_fs

0x25cb,	// (0x00015de4) bg_popup_sub_pane_cp3_ParamLimits

0x25cb,	// (0x00015de4) bg_popup_sub_pane_cp3

0x9d3c,	// (0x0001d555) grid_hwr_fs_pane_ParamLimits

0x9d3c,	// (0x0001d555) grid_hwr_fs_pane

0xedce,	// (0x000225e7) linegrid_hwr_fs_pane_ParamLimits

0xedce,	// (0x000225e7) linegrid_hwr_fs_pane

0x9d54,	// (0x0001d56d) cell_hwr_fs_pane_ParamLimits

0x9d54,	// (0x0001d56d) cell_hwr_fs_pane

0x25d7,	// (0x00015df0) linegrid_hwr_fs_pane_g1_ParamLimits

0x25d7,	// (0x00015df0) linegrid_hwr_fs_pane_g1

0xb77f,	// (0x0001ef98) linegrid_hwr_fs_pane_g2_ParamLimits

0xb77f,	// (0x0001ef98) linegrid_hwr_fs_pane_g2

0x25f5,	// (0x00015e0e) linegrid_hwr_fs_pane_g3_ParamLimits

0x25f5,	// (0x00015e0e) linegrid_hwr_fs_pane_g3

0xedde,	// (0x000225f7) linegrid_hwr_fs_pane_g4_ParamLimits

0xedde,	// (0x000225f7) linegrid_hwr_fs_pane_g4

0xedfc,	// (0x00022615) linegrid_hwr_fs_pane_g5_ParamLimits

0xedfc,	// (0x00022615) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x00022fdf) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x00022fdf) linegrid_hwr_fs_pane_g

0x2601,	// (0x00015e1a) cell_hwr_fs_pane_g1_ParamLimits

0x2601,	// (0x00015e1a) cell_hwr_fs_pane_g1

0x22e6,	// (0x00015aff) cell_hwr_fs_pane_g2_ParamLimits

0x22e6,	// (0x00015aff) cell_hwr_fs_pane_g2

0xb791,	// (0x0001efaa) cell_hwr_fs_pane_g3_ParamLimits

0xb791,	// (0x0001efaa) cell_hwr_fs_pane_g3

0xb79e,	// (0x0001efb7) cell_hwr_fs_pane_g4_ParamLimits

0xb79e,	// (0x0001efb7) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x00022fea) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x00022fea) cell_hwr_fs_pane_g

0x9d7a,	// (0x0001d593) cell_hwr_fs_pane_t1

0xc703,	// (0x0001ff1c) grid_highlight_pane_cp6

0xc703,	// (0x0001ff1c) main_idle_act2_pane

0xe465,	// (0x00021c7e) aid_inside_area_popup_secondary

0xb8a4,	// (0x0001f0bd) aid_inside_area_window_primary_ParamLimits

0xb8a4,	// (0x0001f0bd) aid_inside_area_window_primary

0x3f64,	// (0x0001777d) ai2_news_ticker_pane

0x3f6c,	// (0x00017785) aid_size_cell_ai1_link_ParamLimits

0x3f6c,	// (0x00017785) aid_size_cell_ai1_link

0x3f86,	// (0x0001779f) popup_ai2_data_window_ParamLimits

0x3f86,	// (0x0001779f) popup_ai2_data_window

0x3fa4,	// (0x000177bd) popup_ai2_link_window_ParamLimits

0x3fa4,	// (0x000177bd) popup_ai2_link_window

0x25cb,	// (0x00015de4) bg_popup_sub_pane_cp4_ParamLimits

0x25cb,	// (0x00015de4) bg_popup_sub_pane_cp4

0x3fba,	// (0x000177d3) grid_ai2_link_pane_ParamLimits

0x3fba,	// (0x000177d3) grid_ai2_link_pane

0x3fd1,	// (0x000177ea) popup_ai2_link_window_g1_ParamLimits

0x3fd1,	// (0x000177ea) popup_ai2_link_window_g1

0x3fdd,	// (0x000177f6) popup_ai2_link_window_g2_ParamLimits

0x3fdd,	// (0x000177f6) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x000231bd) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x000231bd) popup_ai2_link_window_g

0x3fee,	// (0x00017807) ai2_mp_button_pane

0x3ff6,	// (0x0001780f) ai2_mp_volume_pane

0x27c5,	// (0x00015fde) bg_popup_sub_pane_cp5_ParamLimits

0x27c5,	// (0x00015fde) bg_popup_sub_pane_cp5

0x3ffe,	// (0x00017817) heading_ai2_gene_pane_ParamLimits

0x3ffe,	// (0x00017817) heading_ai2_gene_pane

0x400a,	// (0x00017823) list_ai2_gene_pane_ParamLimits

0x400a,	// (0x00017823) list_ai2_gene_pane

0x4052,	// (0x0001786b) cell_ai2_link_pane_ParamLimits

0x4052,	// (0x0001786b) cell_ai2_link_pane

0x4068,	// (0x00017881) cell_ai2_link_pane_g1

0xc703,	// (0x0001ff1c) grid_highlight_pane_cp7

0xf00e,	// (0x00022827) ai2_mp_volume_pane_g1

0x413b,	// (0x00017954) ai2_mp_volume_pane_g2

0x40b0,	// (0x000178c9) list_ai2_gene_pane_t1

0x4143,	// (0x0001795c) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x000231d6) ai2_mp_volume_pane_g

0xf016,	// (0x0002282f) volume_small_pane_cp3

0x414b,	// (0x00017964) aid_size_cell_ai2_button

0x4153,	// (0x0001796c) grid_ai2_button_pane

0x415c,	// (0x00017975) cell_ai2_button_pane_ParamLimits

0x415c,	// (0x00017975) cell_ai2_button_pane

0xc6f9,	// (0x0001ff12) cell_ai2_button_pane_g1

0xc703,	// (0x0001ff1c) grid_highlight_pane_cp8

0x40fb,	// (0x00017914) ai2_gene_pane_t1_ParamLimits

0x40fb,	// (0x00017914) ai2_gene_pane_t1

0x95d3,	// (0x0001cdec) aid_height_parent_landscape

0xba4b,	// (0x0001f264) aid_height_set_list

0x398b,	// (0x000171a4) aid_size_parent

0x3d83,	// (0x0001759c) aid_size_cell_graphic_pane_ParamLimits

0x401a,	// (0x00017833) popup_ai2_data_window_g1_ParamLimits

0x401a,	// (0x00017833) popup_ai2_data_window_g1

0x4026,	// (0x0001783f) ai2_news_ticker_pane_g1

0x402e,	// (0x00017847) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x000231c2) ai2_news_ticker_pane_g

0x4036,	// (0x0001784f) ai2_news_ticker_pane_t1

0x4044,	// (0x0001785d) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x000231c7) ai2_news_ticker_pane_t

0x4071,	// (0x0001788a) heading_ai2_gene_pane_g1

0x4079,	// (0x00017892) heading_ai2_gene_pane_t1_ParamLimits

0x4079,	// (0x00017892) heading_ai2_gene_pane_t1

0x408e,	// (0x000178a7) list_highlight_pane_cp6

0x4096,	// (0x000178af) ai2_gene_pane_ParamLimits

0x4096,	// (0x000178af) ai2_gene_pane

0x40be,	// (0x000178d7) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x000231cc) list_ai2_gene_pane_t

0x40cc,	// (0x000178e5) list_highlight_pane_cp8_ParamLimits

0x40cc,	// (0x000178e5) list_highlight_pane_cp8

0x40dd,	// (0x000178f6) ai2_gene_pane_g1_ParamLimits

0x40dd,	// (0x000178f6) ai2_gene_pane_g1

0x40ef,	// (0x00017908) ai2_gene_pane_g2_ParamLimits

0x40ef,	// (0x00017908) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x000231d1) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x000231d1) ai2_gene_pane_g

0xcd51,	// (0x0002056a) scroll_pane_cp12

0x9592,	// (0x0001cdab) control_pane_t3_ParamLimits

0x9592,	// (0x0001cdab) control_pane_t3

0x1e85,	// (0x0001569e) status_small_pane_g8_ParamLimits

0x1e85,	// (0x0001569e) status_small_pane_g8

0x96f1,	// (0x0001cf0a) popup_find_window_ParamLimits

0x99a8,	// (0x0001d1c1) popup_note_image_window_ParamLimits

0x2411,	// (0x00015c2a) list_double2_graphic_pane_vc_g1_ParamLimits

0x2411,	// (0x00015c2a) list_double2_graphic_pane_vc_g1

0x241d,	// (0x00015c36) list_double2_graphic_pane_vc_g2_ParamLimits

0x241d,	// (0x00015c36) list_double2_graphic_pane_vc_g2

0x2429,	// (0x00015c42) list_double2_graphic_pane_vc_g3_ParamLimits

0x2429,	// (0x00015c42) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00022fad) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00022fad) list_double2_graphic_pane_vc_g

0x2435,	// (0x00015c4e) list_double2_graphic_pane_vc_t1_ParamLimits

0x2435,	// (0x00015c4e) list_double2_graphic_pane_vc_t1

0x241d,	// (0x00015c36) list_single_heading_pane_vc_g1_ParamLimits

0x241d,	// (0x00015c36) list_single_heading_pane_vc_g1

0x2429,	// (0x00015c42) list_single_heading_pane_vc_g2_ParamLimits

0x2429,	// (0x00015c42) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_single_heading_pane_vc_g

0x24ef,	// (0x00015d08) list_single_heading_pane_vc_t1_ParamLimits

0x24ef,	// (0x00015d08) list_single_heading_pane_vc_t1

0x2505,	// (0x00015d1e) list_single_heading_pane_vc_t2_ParamLimits

0x2505,	// (0x00015d1e) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x00022fce) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x00022fce) list_single_heading_pane_vc_t

0x2517,	// (0x00015d30) list_setting_number_pane_vc_g1_ParamLimits

0x2517,	// (0x00015d30) list_setting_number_pane_vc_g1

0x2523,	// (0x00015d3c) list_setting_number_pane_vc_g2_ParamLimits

0x2523,	// (0x00015d3c) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x00022fd3) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x00022fd3) list_setting_number_pane_vc_g

0x252f,	// (0x00015d48) list_setting_number_pane_vc_t1_ParamLimits

0x252f,	// (0x00015d48) list_setting_number_pane_vc_t1

0x2543,	// (0x00015d5c) list_setting_number_pane_vc_t2_ParamLimits

0x2543,	// (0x00015d5c) list_setting_number_pane_vc_t2

0x255f,	// (0x00015d78) list_setting_number_pane_vc_t3_ParamLimits

0x255f,	// (0x00015d78) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x00022fd8) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x00022fd8) list_setting_number_pane_vc_t

0x258d,	// (0x00015da6) set_value_pane_vc_ParamLimits

0x258d,	// (0x00015da6) set_value_pane_vc

0x3ba9,	// (0x000173c2) list_double2_graphic_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double2_graphic_pane_vc

0x3ba9,	// (0x000173c2) list_double2_large_graphic_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double2_large_graphic_pane_vc

0x3ba9,	// (0x000173c2) list_double2_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double2_pane_vc

0x3ba9,	// (0x000173c2) list_double_graphic_heading_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double_graphic_heading_pane_vc

0x3ba9,	// (0x000173c2) list_double_graphic_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double_graphic_pane_vc

0x3ba9,	// (0x000173c2) list_double_heading_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double_heading_pane_vc

0x3bbd,	// (0x000173d6) list_double_large_graphic_pane_vc_ParamLimits

0x3bbd,	// (0x000173d6) list_double_large_graphic_pane_vc

0x3ba9,	// (0x000173c2) list_double_number_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double_number_pane_vc

0x3ba9,	// (0x000173c2) list_double_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double_pane_vc

0x3ba9,	// (0x000173c2) list_double_time_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_double_time_pane_vc

0x3ba9,	// (0x000173c2) list_setting_number_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_setting_number_pane_vc

0x3ba9,	// (0x000173c2) list_setting_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_setting_pane_vc

0x3ba9,	// (0x000173c2) list_single_graphic_heading_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_single_graphic_heading_pane_vc

0x3ba9,	// (0x000173c2) list_single_heading_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_single_heading_pane_vc

0x3ba9,	// (0x000173c2) list_single_number_heading_pane_vc_ParamLimits

0x3ba9,	// (0x000173c2) list_single_number_heading_pane_vc

0x2411,	// (0x00015c2a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2411,	// (0x00015c2a) list_double_graphic_heading_pane_vc_g1

0x1b71,	// (0x0001538a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1b71,	// (0x0001538a) list_double_graphic_heading_pane_vc_g2

0x418f,	// (0x000179a8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x418f,	// (0x000179a8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x000231dd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x000231dd) list_double_graphic_heading_pane_vc_g

0x419b,	// (0x000179b4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x419b,	// (0x000179b4) list_double_graphic_heading_pane_vc_t1

0x41b1,	// (0x000179ca) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x41b1,	// (0x000179ca) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x000231e4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x000231e4) list_double_graphic_heading_pane_vc_t

0x2517,	// (0x00015d30) list_setting_pane_vc_g1_ParamLimits

0x2517,	// (0x00015d30) list_setting_pane_vc_g1

0x2523,	// (0x00015d3c) list_setting_pane_vc_g2_ParamLimits

0x2523,	// (0x00015d3c) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x00022fd3) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x00022fd3) list_setting_pane_vc_g

0x4402,	// (0x00017c1b) list_setting_pane_vc_t1_ParamLimits

0x4402,	// (0x00017c1b) list_setting_pane_vc_t1

0x441e,	// (0x00017c37) list_setting_pane_vc_t2_ParamLimits

0x441e,	// (0x00017c37) list_setting_pane_vc_t2

0x0001,

0xfa0e,	// (0x00023227) list_setting_pane_vc_t_ParamLimits

0xfa0e,	// (0x00023227) list_setting_pane_vc_t

0x258d,	// (0x00015da6) set_value_pane_cp_vc_ParamLimits

0x258d,	// (0x00015da6) set_value_pane_cp_vc

0x241d,	// (0x00015c36) list_single_number_heading_pane_vc_g1_ParamLimits

0x241d,	// (0x00015c36) list_single_number_heading_pane_vc_g1

0x2429,	// (0x00015c42) list_single_number_heading_pane_vc_g2_ParamLimits

0x2429,	// (0x00015c42) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_single_number_heading_pane_vc_g

0x443a,	// (0x00017c53) list_single_number_heading_pane_vc_t1_ParamLimits

0x443a,	// (0x00017c53) list_single_number_heading_pane_vc_t1

0x4450,	// (0x00017c69) list_single_number_heading_pane_vc_t2_ParamLimits

0x4450,	// (0x00017c69) list_single_number_heading_pane_vc_t2

0x4466,	// (0x00017c7f) list_single_number_heading_pane_vc_t3_ParamLimits

0x4466,	// (0x00017c7f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa13,	// (0x0002322c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x0002322c) list_single_number_heading_pane_vc_t

0x2411,	// (0x00015c2a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2411,	// (0x00015c2a) list_single_graphic_heading_pane_vc_g1

0x241d,	// (0x00015c36) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x241d,	// (0x00015c36) list_single_graphic_heading_pane_vc_g4

0x2429,	// (0x00015c42) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2429,	// (0x00015c42) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x00022fad) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x00022fad) list_single_graphic_heading_pane_vc_g

0x443a,	// (0x00017c53) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x443a,	// (0x00017c53) list_single_graphic_heading_pane_vc_t1

0x4478,	// (0x00017c91) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4478,	// (0x00017c91) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1a,	// (0x00023233) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x00023233) list_single_graphic_heading_pane_vc_t

0x241d,	// (0x00015c36) list_double2_pane_vc_g1_ParamLimits

0x241d,	// (0x00015c36) list_double2_pane_vc_g1

0x2429,	// (0x00015c42) list_double2_pane_vc_g2_ParamLimits

0x2429,	// (0x00015c42) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_double2_pane_vc_g

0x448a,	// (0x00017ca3) list_double2_pane_vc_t1_ParamLimits

0x448a,	// (0x00017ca3) list_double2_pane_vc_t1

0x44a0,	// (0x00017cb9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x44a0,	// (0x00017cb9) list_double2_large_graphic_pane_vc_g1

0x241d,	// (0x00015c36) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x241d,	// (0x00015c36) list_double2_large_graphic_pane_vc_g2

0x2429,	// (0x00015c42) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2429,	// (0x00015c42) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00022dd9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00022dd9) list_double2_large_graphic_pane_vc_g

0x44ac,	// (0x00017cc5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x44ac,	// (0x00017cc5) list_double2_large_graphic_pane_vc_t1

0x44c2,	// (0x00017cdb) list_double_time_pane_vc_g1_ParamLimits

0x44c2,	// (0x00017cdb) list_double_time_pane_vc_g1

0x44ce,	// (0x00017ce7) list_double_time_pane_vc_g2_ParamLimits

0x44ce,	// (0x00017ce7) list_double_time_pane_vc_g2

0x0001,

0xfa1f,	// (0x00023238) list_double_time_pane_vc_g_ParamLimits

0xfa1f,	// (0x00023238) list_double_time_pane_vc_g

0x44da,	// (0x00017cf3) list_double_time_pane_vc_t1_ParamLimits

0x44da,	// (0x00017cf3) list_double_time_pane_vc_t1

0x450a,	// (0x00017d23) list_double_time_pane_vc_t2_ParamLimits

0x450a,	// (0x00017d23) list_double_time_pane_vc_t2

0x4533,	// (0x00017d4c) list_double_time_pane_vc_t3_ParamLimits

0x4533,	// (0x00017d4c) list_double_time_pane_vc_t3

0x4545,	// (0x00017d5e) list_double_time_pane_vc_t4_ParamLimits

0x4545,	// (0x00017d5e) list_double_time_pane_vc_t4

0x0003,

0xfa24,	// (0x0002323d) list_double_time_pane_vc_t_ParamLimits

0xfa24,	// (0x0002323d) list_double_time_pane_vc_t

0x241d,	// (0x00015c36) list_double_pane_vc_g1_ParamLimits

0x241d,	// (0x00015c36) list_double_pane_vc_g1

0x2429,	// (0x00015c42) list_double_pane_vc_g2_ParamLimits

0x2429,	// (0x00015c42) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_double_pane_vc_g

0x4559,	// (0x00017d72) list_double_pane_vc_t1_ParamLimits

0x4559,	// (0x00017d72) list_double_pane_vc_t1

0x456d,	// (0x00017d86) list_double_pane_vc_t2_ParamLimits

0x456d,	// (0x00017d86) list_double_pane_vc_t2

0x0001,

0xfa2d,	// (0x00023246) list_double_pane_vc_t_ParamLimits

0xfa2d,	// (0x00023246) list_double_pane_vc_t

0x241d,	// (0x00015c36) list_double_number_pane_vc_g1_ParamLimits

0x241d,	// (0x00015c36) list_double_number_pane_vc_g1

0x2429,	// (0x00015c42) list_double_number_pane_vc_g2_ParamLimits

0x2429,	// (0x00015c42) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022dbc) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022dbc) list_double_number_pane_vc_g

0x4583,	// (0x00017d9c) list_double_number_pane_vc_t1_ParamLimits

0x4583,	// (0x00017d9c) list_double_number_pane_vc_t1

0x4595,	// (0x00017dae) list_double_number_pane_vc_t2_ParamLimits

0x4595,	// (0x00017dae) list_double_number_pane_vc_t2

0x456d,	// (0x00017d86) list_double_number_pane_vc_t3_ParamLimits

0x456d,	// (0x00017d86) list_double_number_pane_vc_t3

0x0002,

0xfa32,	// (0x0002324b) list_double_number_pane_vc_t_ParamLimits

0xfa32,	// (0x0002324b) list_double_number_pane_vc_t

0x45a9,	// (0x00017dc2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x45a9,	// (0x00017dc2) list_double_large_graphic_pane_vc_g1

0x45cb,	// (0x00017de4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x45cb,	// (0x00017de4) list_double_large_graphic_pane_vc_g2

0x45df,	// (0x00017df8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x45df,	// (0x00017df8) list_double_large_graphic_pane_vc_g3

0x45ee,	// (0x00017e07) list_double_large_graphic_pane_vc_g4_ParamLimits

0x45ee,	// (0x00017e07) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa39,	// (0x00023252) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa39,	// (0x00023252) list_double_large_graphic_pane_vc_g

0x45fa,	// (0x00017e13) list_double_large_graphic_pane_vc_t1_ParamLimits

0x45fa,	// (0x00017e13) list_double_large_graphic_pane_vc_t1

0x4616,	// (0x00017e2f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4616,	// (0x00017e2f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x0002325b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa42,	// (0x0002325b) list_double_large_graphic_pane_vc_t

0x1b71,	// (0x0001538a) list_double_heading_pane_vc_g1_ParamLimits

0x1b71,	// (0x0001538a) list_double_heading_pane_vc_g1

0x418f,	// (0x000179a8) list_double_heading_pane_vc_g2_ParamLimits

0x418f,	// (0x000179a8) list_double_heading_pane_vc_g2

0x0001,

0xfa47,	// (0x00023260) list_double_heading_pane_vc_g_ParamLimits

0xfa47,	// (0x00023260) list_double_heading_pane_vc_g

0x4636,	// (0x00017e4f) list_double_heading_pane_vc_t1_ParamLimits

0x4636,	// (0x00017e4f) list_double_heading_pane_vc_t1

0x4648,	// (0x00017e61) list_double_heading_pane_vc_t2_ParamLimits

0x4648,	// (0x00017e61) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00023265) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00023265) list_double_heading_pane_vc_t

0x4660,	// (0x00017e79) list_double_graphic_pane_vc_g1_ParamLimits

0x4660,	// (0x00017e79) list_double_graphic_pane_vc_g1

0x466c,	// (0x00017e85) list_double_graphic_pane_vc_g2_ParamLimits

0x466c,	// (0x00017e85) list_double_graphic_pane_vc_g2

0x241d,	// (0x00015c36) list_double_graphic_pane_vc_g3_ParamLimits

0x241d,	// (0x00015c36) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x0002326a) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x0002326a) list_double_graphic_pane_vc_g

0x4689,	// (0x00017ea2) list_double_graphic_pane_vc_t1_ParamLimits

0x4689,	// (0x00017ea2) list_double_graphic_pane_vc_t1

0x46b3,	// (0x00017ecc) list_double_graphic_pane_vc_t2_ParamLimits

0x46b3,	// (0x00017ecc) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00023273) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00023273) list_double_graphic_pane_vc_t

0xdfa9,	// (0x000217c2) aid_size_cell_fastswap

0x92c1,	// (0x0001cada) aid_size_cell_touch_ParamLimits

0x92c1,	// (0x0001cada) aid_size_cell_touch

0xe130,	// (0x00021949) popup_fast_swap_wide_window_ParamLimits

0xe130,	// (0x00021949) popup_fast_swap_wide_window

0x947f,	// (0x0001cc98) touch_pane_ParamLimits

0x947f,	// (0x0001cc98) touch_pane

0xe244,	// (0x00021a5d) button_value_adjust_pane_cp2

0xe24c,	// (0x00021a65) button_value_adjust_pane_cp4

0xe254,	// (0x00021a6d) form_field_data_pane_cp2

0xadc1,	// (0x0001e5da) form_field_data_wide_pane_cp2

0x134f,	// (0x00014b68) bg_scroll_pane_ParamLimits

0xe80f,	// (0x00022028) scroll_handle_pane_ParamLimits

0xe823,	// (0x0002203c) scroll_sc2_down_pane_ParamLimits

0xe823,	// (0x0002203c) scroll_sc2_down_pane

0x1380,	// (0x00014b99) scroll_sc2_up_pane_ParamLimits

0x1380,	// (0x00014b99) scroll_sc2_up_pane

0xbe4b,	// (0x0001f664) grid_wheel_folder_pane_g1_ParamLimits

0xbe4b,	// (0x0001f664) grid_wheel_folder_pane_g1

0xe9ea,	// (0x00022203) clock_nsta_pane_cp2_ParamLimits

0xe9ea,	// (0x00022203) clock_nsta_pane_cp2

0xb260,	// (0x0001ea79) listscroll_midp_pane_ParamLimits

0xb26c,	// (0x0001ea85) midp_canvas_pane

0x1eff,	// (0x00015718) nsta_clock_indic_pane

0x1f3b,	// (0x00015754) listscroll_form_pane_vc

0x1f43,	// (0x0001575c) listscroll_set_pane_vc_ParamLimits

0x1f43,	// (0x0001575c) listscroll_set_pane_vc

0xb46e,	// (0x0001ec87) clock_nsta_pane

0xb498,	// (0x0001ecb1) indicator_nsta_pane

0x23ab,	// (0x00015bc4) bg_popup_sub_pane_cp2_ParamLimits

0x23bf,	// (0x00015bd8) find_pane_cp2_ParamLimits

0x23bf,	// (0x00015bd8) find_pane_cp2

0x23d5,	// (0x00015bee) grid_toobar_pane_ParamLimits

0x259f,	// (0x00015db8) list_form_gen_pane_vc_ParamLimits

0x259f,	// (0x00015db8) list_form_gen_pane_vc

0x25b5,	// (0x00015dce) scroll_pane_cp8_vc_ParamLimits

0x25b5,	// (0x00015dce) scroll_pane_cp8_vc

0x2631,	// (0x00015e4a) data_form_wide_pane_vc_ParamLimits

0x2631,	// (0x00015e4a) data_form_wide_pane_vc

0x263d,	// (0x00015e56) form_field_data_wide_pane_vc_g1

0x2645,	// (0x00015e5e) form_field_data_wide_pane_vc_t1_ParamLimits

0x2645,	// (0x00015e5e) form_field_data_wide_pane_vc_t1

0xe2b0,	// (0x00021ac9) input_focus_pane_cp6_vc_ParamLimits

0xe2b0,	// (0x00021ac9) input_focus_pane_cp6_vc

0x2990,	// (0x000161a9) list_midp_pane_ParamLimits

0x3df1,	// (0x0001760a) scroll_pane_cp16_ParamLimits

0x3df1,	// (0x0001760a) scroll_pane_cp16

0x29e6,	// (0x000161ff) button_value_adjust_pane_ParamLimits

0x29e6,	// (0x000161ff) button_value_adjust_pane

0xba5c,	// (0x0001f275) button_value_adjust_pane_cp6_ParamLimits

0xba5c,	// (0x0001f275) button_value_adjust_pane_cp6

0xbb98,	// (0x0001f3b1) settings_code_pane_cp_ParamLimits

0xbb98,	// (0x0001f3b1) settings_code_pane_cp

0xc6f9,	// (0x0001ff12) cell_touch_pane_g1

0xc6f9,	// (0x0001ff12) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00022ef2) cell_touch_pane_g

0xbd1f,	// (0x0001f538) cell_touch_pane_cp_ParamLimits

0xbd1f,	// (0x0001f538) cell_touch_pane_cp

0xbd3b,	// (0x0001f554) cell_touch_pane_ParamLimits

0xbd3b,	// (0x0001f554) cell_touch_pane

0xc6f9,	// (0x0001ff12) scroll_sc2_down_pane_g1

0xc6f9,	// (0x0001ff12) scroll_sc2_up_pane_g1

0xc703,	// (0x0001ff1c) bg_set_opt_pane_cp4_vc

0x41cf,	// (0x000179e8) list_set_graphic_pane_vc_g1_ParamLimits

0x41cf,	// (0x000179e8) list_set_graphic_pane_vc_g1

0x41db,	// (0x000179f4) list_set_graphic_pane_vc_g2_ParamLimits

0x41db,	// (0x000179f4) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x000231e9) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x000231e9) list_set_graphic_pane_vc_g

0x41e7,	// (0x00017a00) text_primary_small_cp13_vc_ParamLimits

0x41e7,	// (0x00017a00) text_primary_small_cp13_vc

0x41ff,	// (0x00017a18) list_set_graphic_pane_vc_ParamLimits

0x41ff,	// (0x00017a18) list_set_graphic_pane_vc

0xc703,	// (0x0001ff1c) input_focus_pane_cp2_vc

0xc6f9,	// (0x0001ff12) setting_code_pane_vc_g1

0xc776,	// (0x0001ff8f) setting_code_pane_vc_t1

0x4212,	// (0x00017a2b) set_text_pane_vc_t1_ParamLimits

0x4212,	// (0x00017a2b) set_text_pane_vc_t1

0xc703,	// (0x0001ff1c) input_focus_pane_cp1_vc

0x4233,	// (0x00017a4c) list_set_text_pane_vc

0xc6f9,	// (0x0001ff12) setting_text_pane_vc_g1

0xc703,	// (0x0001ff1c) bg_set_opt_pane_cp2_vc

0xc76d,	// (0x0001ff86) setting_slider_graphic_pane_vc_g1

0x423d,	// (0x00017a56) setting_slider_graphic_pane_vc_t1

0x424f,	// (0x00017a68) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x000231ee) setting_slider_graphic_pane_vc_t

0x4261,	// (0x00017a7a) slider_set_pane_cp_vc

0x426b,	// (0x00017a84) slider_set_pane_vc_g1

0x4274,	// (0x00017a8d) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x000231f3) slider_set_pane_vc_g

0xe36b,	// (0x00021b84) set_opt_bg_pane_g1_copy1

0xe373,	// (0x00021b8c) set_opt_bg_pane_g2_copy1

0x42a0,	// (0x00017ab9) set_opt_bg_pane_g3_copy1

0xe383,	// (0x00021b9c) set_opt_bg_pane_g4_copy1

0xe38b,	// (0x00021ba4) set_opt_bg_pane_g5_copy1

0xe393,	// (0x00021bac) set_opt_bg_pane_g6_copy1

0x42aa,	// (0x00017ac3) set_opt_bg_pane_g7_copy1

0x42b4,	// (0x00017acd) set_opt_bg_pane_g8_copy1

0x42be,	// (0x00017ad7) set_opt_bg_pane_g9_copy1

0xc703,	// (0x0001ff1c) bg_set_opt_pane_cp_vc

0x42c8,	// (0x00017ae1) setting_slider_pane_vc_t1

0x42d7,	// (0x00017af0) setting_slider_pane_vc_t2

0x42e9,	// (0x00017b02) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x00023202) setting_slider_pane_vc_t

0x42fb,	// (0x00017b14) slider_set_pane_vc

0xee12,	// (0x0002262b) volume_set_pane_vc_g1

0xee1b,	// (0x00022634) volume_set_pane_vc_g2

0xee24,	// (0x0002263d) volume_set_pane_vc_g3

0xee2d,	// (0x00022646) volume_set_pane_vc_g4

0xee36,	// (0x0002264f) volume_set_pane_vc_g5

0xee3f,	// (0x00022658) volume_set_pane_vc_g6

0xee48,	// (0x00022661) volume_set_pane_vc_g7

0xee51,	// (0x0002266a) volume_set_pane_vc_g8

0xee5a,	// (0x00022673) volume_set_pane_vc_g9

0xee63,	// (0x0002267c) volume_set_pane_vc_g10

0x0009,

0xf9f0,	// (0x00023209) volume_set_pane_vc_g

0x4305,	// (0x00017b1e) volume_set_pane_vc

0x430f,	// (0x00017b28) button_value_adjust_pane_cp1_vc

0x4319,	// (0x00017b32) list_highlight_pane_cp2_vc

0x4322,	// (0x00017b3b) list_set_pane_vc_ParamLimits

0x4322,	// (0x00017b3b) list_set_pane_vc

0x4390,	// (0x00017ba9) main_pane_set_vc_t1_ParamLimits

0x4390,	// (0x00017ba9) main_pane_set_vc_t1

0x43a5,	// (0x00017bbe) main_pane_set_vc_t2_ParamLimits

0x43a5,	// (0x00017bbe) main_pane_set_vc_t2

0x43b7,	// (0x00017bd0) main_pane_set_vc_t3_ParamLimits

0x43b7,	// (0x00017bd0) main_pane_set_vc_t3

0x43cb,	// (0x00017be4) main_pane_set_vc_t4_ParamLimits

0x43cb,	// (0x00017be4) main_pane_set_vc_t4

0x0003,

0xfa05,	// (0x0002321e) main_pane_set_vc_t_ParamLimits

0xfa05,	// (0x0002321e) main_pane_set_vc_t

0x43df,	// (0x00017bf8) setting_code_pane_vc_ParamLimits

0x43df,	// (0x00017bf8) setting_code_pane_vc

0x43f0,	// (0x00017c09) setting_slider_graphic_pane_vc

0x43f0,	// (0x00017c09) setting_slider_pane_vc

0x43f0,	// (0x00017c09) setting_text_pane_vc

0x43f0,	// (0x00017c09) setting_volume_pane_vc

0x43fa,	// (0x00017c13) scroll_pane_cp121_vc

0xe232,	// (0x00021a4b) set_content_pane_vc

0x46d1,	// (0x00017eea) button_value_adjust_pane_g1

0x46da,	// (0x00017ef3) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00023278) button_value_adjust_pane_g

0x46e3,	// (0x00017efc) form_field_slider_wide_pane_vc_t1_ParamLimits

0x46e3,	// (0x00017efc) form_field_slider_wide_pane_vc_t1

0x46f5,	// (0x00017f0e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x46f5,	// (0x00017f0e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x0002327d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x0002327d) form_field_slider_wide_pane_vc_t

0xc751,	// (0x0001ff6a) input_focus_pane_cp10_vc_ParamLimits

0xc751,	// (0x0001ff6a) input_focus_pane_cp10_vc

0x4721,	// (0x00017f3a) slider_cont_pane_cp1_vc_ParamLimits

0x4721,	// (0x00017f3a) slider_cont_pane_cp1_vc

0x4733,	// (0x00017f4c) slider_form_pane_g1_cp2

0x4274,	// (0x00017a8d) slider_form_pane_g2_cp2

0x4760,	// (0x00017f79) form_field_slider_pane_vc_t3

0x476e,	// (0x00017f87) form_field_slider_pane_vc_t4

0x477c,	// (0x00017f95) slider_form_pane_vc_ParamLimits

0x477c,	// (0x00017f95) slider_form_pane_vc

0x4789,	// (0x00017fa2) form_field_slider_pane_vc_t1_ParamLimits

0x4789,	// (0x00017fa2) form_field_slider_pane_vc_t1

0x46f5,	// (0x00017f0e) form_field_slider_pane_vc_t2_ParamLimits

0x46f5,	// (0x00017f0e) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x0002328f) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x0002328f) form_field_slider_pane_vc_t

0xc751,	// (0x0001ff6a) input_focus_pane_cp9_vc_ParamLimits

0xc751,	// (0x0001ff6a) input_focus_pane_cp9_vc

0x479f,	// (0x00017fb8) slider_cont_pane_vc_ParamLimits

0x479f,	// (0x00017fb8) slider_cont_pane_vc

0x47b3,	// (0x00017fcc) list_form_graphic_pane_cp_vc_ParamLimits

0x47b3,	// (0x00017fcc) list_form_graphic_pane_cp_vc

0x263d,	// (0x00015e56) form_field_popup_wide_pane_vc_g1

0x47c8,	// (0x00017fe1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x47c8,	// (0x00017fe1) form_field_popup_wide_pane_vc_t1

0xe2b0,	// (0x00021ac9) input_focus_pane_cp8_vc_ParamLimits

0xe2b0,	// (0x00021ac9) input_focus_pane_cp8_vc

0x480d,	// (0x00018026) list_form_wide_pane_vc_ParamLimits

0x480d,	// (0x00018026) list_form_wide_pane_vc

0x4819,	// (0x00018032) list_form_graphic_pane_vc_g1

0x4821,	// (0x0001803a) list_form_graphic_pane_vc_t1_ParamLimits

0x4821,	// (0x0001803a) list_form_graphic_pane_vc_t1

0xc75f,	// (0x0001ff78) list_highlight_pane_cp5_vc_ParamLimits

0xc75f,	// (0x0001ff78) list_highlight_pane_cp5_vc

0x483d,	// (0x00018056) list_form_graphic_pane_vc_ParamLimits

0x483d,	// (0x00018056) list_form_graphic_pane_vc

0x263d,	// (0x00015e56) form_field_popup_pane_vc_g1

0x4853,	// (0x0001806c) form_field_popup_pane_vc_t1_ParamLimits

0x4853,	// (0x0001806c) form_field_popup_pane_vc_t1

0xe2b0,	// (0x00021ac9) input_focus_pane_cp7_vc_ParamLimits

0xe2b0,	// (0x00021ac9) input_focus_pane_cp7_vc

0x486a,	// (0x00018083) list_form_pane_vc_ParamLimits

0x486a,	// (0x00018083) list_form_pane_vc

0x4876,	// (0x0001808f) data_form_pane_vc_t1_ParamLimits

0x4876,	// (0x0001808f) data_form_pane_vc_t1

0xe36b,	// (0x00021b84) input_focus_pane_vc_g1

0xe373,	// (0x00021b8c) input_focus_pane_vc_g2

0xe37b,	// (0x00021b94) input_focus_pane_vc_g3

0xe383,	// (0x00021b9c) input_focus_pane_vc_g4

0xe38b,	// (0x00021ba4) input_focus_pane_vc_g5

0xe393,	// (0x00021bac) input_focus_pane_vc_g6

0xe39b,	// (0x00021bb4) input_focus_pane_vc_g7

0xe3a3,	// (0x00021bbc) input_focus_pane_vc_g8

0xe3ab,	// (0x00021bc4) input_focus_pane_vc_g9

0xc6f9,	// (0x0001ff12) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00022e7b) input_focus_pane_vc_g

0x2631,	// (0x00015e4a) data_form_pane_vc_ParamLimits

0x2631,	// (0x00015e4a) data_form_pane_vc

0x263d,	// (0x00015e56) form_field_data_pane_vc_g1

0x4893,	// (0x000180ac) form_field_data_pane_vc_t1_ParamLimits

0x4893,	// (0x000180ac) form_field_data_pane_vc_t1

0xe2b0,	// (0x00021ac9) input_focus_pane_vc_ParamLimits

0xe2b0,	// (0x00021ac9) input_focus_pane_vc

0x48ad,	// (0x000180c6) button_value_adjust_pane_cp3_vc

0x48b5,	// (0x000180ce) button_value_adjust_pane_cp5_vc

0x48bd,	// (0x000180d6) form_field_data_pane_vc_ParamLimits

0x48bd,	// (0x000180d6) form_field_data_pane_vc

0x48d8,	// (0x000180f1) form_field_data_pane_vc_cp2

0x48e0,	// (0x000180f9) form_field_data_wide_pane_vc_ParamLimits

0x48e0,	// (0x000180f9) form_field_data_wide_pane_vc

0x48fa,	// (0x00018113) form_field_data_wide_pane_vc_cp2

0x4902,	// (0x0001811b) form_field_popup_pane_vc_ParamLimits

0x4902,	// (0x0001811b) form_field_popup_pane_vc

0x491d,	// (0x00018136) form_field_popup_wide_pane_vc_ParamLimits

0x491d,	// (0x00018136) form_field_popup_wide_pane_vc

0x4937,	// (0x00018150) form_field_slider_pane_vc_ParamLimits

0x4937,	// (0x00018150) form_field_slider_pane_vc

0x494a,	// (0x00018163) form_field_slider_wide_pane_vc_ParamLimits

0x494a,	// (0x00018163) form_field_slider_wide_pane_vc

0xbd59,	// (0x0001f572) grid_touch_1_pane_ParamLimits

0xbd59,	// (0x0001f572) grid_touch_1_pane

0xbd6d,	// (0x0001f586) grid_touch_2_pane_ParamLimits

0xbd6d,	// (0x0001f586) grid_touch_2_pane

0x4a30,	// (0x00018249) touch_pane_g1_ParamLimits

0x4a30,	// (0x00018249) touch_pane_g1

0x4983,	// (0x0001819c) cell_app_pane_cp_wide_ParamLimits

0x4983,	// (0x0001819c) cell_app_pane_cp_wide

0x4994,	// (0x000181ad) grid_popup_fast_wide_pane_ParamLimits

0x4994,	// (0x000181ad) grid_popup_fast_wide_pane

0x49a8,	// (0x000181c1) scroll_pane_cp19_ParamLimits

0x49a8,	// (0x000181c1) scroll_pane_cp19

0xc703,	// (0x0001ff1c) bg_popup_window_pane_cp20

0x49bc,	// (0x000181d5) listscroll_popup_fast_wide_pane

0xbd99,	// (0x0001f5b2) grid_indicator_nsta_pane

0x49d6,	// (0x000181ef) clock_nsta_pane_g1

0x49df,	// (0x000181f8) clock_nsta_pane_t1

0xbda5,	// (0x0001f5be) cell_indicator_nsta_pane_ParamLimits

0xbda5,	// (0x0001f5be) cell_indicator_nsta_pane

0x4a30,	// (0x00018249) cell_indicator_nsta_pane_g1

0xbdc0,	// (0x0001f5d9) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x000232a0) cell_indicator_nsta_pane_g

0x4a51,	// (0x0001826a) clock_nsta_pane_cp

0x4a5a,	// (0x00018273) indicator_nsta_pane_cp

0x4a64,	// (0x0001827d) nsta_clock_indic_pane_g1

0xc7b5,	// (0x0001ffce) grid_indicator_pane

0x1472,	// (0x00014c8b) scroll_pane_cp29

0xe939,	// (0x00022152) indicator_nsta_pane_cp2_ParamLimits

0xe939,	// (0x00022152) indicator_nsta_pane_cp2

0xc75f,	// (0x0001ff78) main_apps_wheel_pane

0x284d,	// (0x00016066) form_midp_field_text_pane_ParamLimits

0x299c,	// (0x000161b5) scroll_bar_cp050_ParamLimits

0x4abd,	// (0x000182d6) cell_indicator_pane_ParamLimits

0x4abd,	// (0x000182d6) cell_indicator_pane

0x4ad5,	// (0x000182ee) cell_indicator_pane_g1

0xbdcd,	// (0x0001f5e6) grid_wheel_folder_pane_ParamLimits

0xbdcd,	// (0x0001f5e6) grid_wheel_folder_pane

0xbddb,	// (0x0001f5f4) list_wheel_apps_pane_ParamLimits

0xbddb,	// (0x0001f5f4) list_wheel_apps_pane

0xbde9,	// (0x0001f602) main_apps_wheel_pane_g1_ParamLimits

0xbde9,	// (0x0001f602) main_apps_wheel_pane_g1

0xbdf9,	// (0x0001f612) main_apps_wheel_pane_g2_ParamLimits

0xbdf9,	// (0x0001f612) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x000232bc) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x000232bc) main_apps_wheel_pane_g

0xbe09,	// (0x0001f622) main_apps_wheel_pane_t1_ParamLimits

0xbe09,	// (0x0001f622) main_apps_wheel_pane_t1

0xbe21,	// (0x0001f63a) list_wheel_apps_pane_g1

0xbe29,	// (0x0001f642) list_wheel_apps_pane_g2

0xbe31,	// (0x0001f64a) list_wheel_apps_pane_g3

0xbe39,	// (0x0001f652) list_wheel_apps_pane_g4

0xbe41,	// (0x0001f65a) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x000232c1) list_wheel_apps_pane_g

0x1a71,	// (0x0001528a) navi_icon_text_pane

0xb360,	// (0x0001eb79) aid_fill_nsta

0xbe5c,	// (0x0001f675) navi_icon_text_pane_g1

0xbe68,	// (0x0001f681) navi_icon_text_pane_t1

0x1907,	// (0x00015120) list_set_graphic_pane_t1_ParamLimits

0x1907,	// (0x00015120) list_set_graphic_pane_t1

0x3109,	// (0x00016922) popup_midp_note_alarm_window_t6_ParamLimits

0x3109,	// (0x00016922) popup_midp_note_alarm_window_t6

0x311b,	// (0x00016934) popup_midp_note_alarm_window_t7_ParamLimits

0x311b,	// (0x00016934) popup_midp_note_alarm_window_t7

0x312d,	// (0x00016946) popup_midp_note_alarm_window_t8_ParamLimits

0x312d,	// (0x00016946) popup_midp_note_alarm_window_t8

0x313f,	// (0x00016958) popup_midp_note_alarm_window_t9_ParamLimits

0x313f,	// (0x00016958) popup_midp_note_alarm_window_t9

0x3151,	// (0x0001696a) popup_midp_note_alarm_window_t10_ParamLimits

0x3151,	// (0x0001696a) popup_midp_note_alarm_window_t10

0x3163,	// (0x0001697c) popup_midp_note_alarm_window_t11_ParamLimits

0x3163,	// (0x0001697c) popup_midp_note_alarm_window_t11

0x3175,	// (0x0001698e) scroll_pane_cp17_ParamLimits

0x3175,	// (0x0001698e) scroll_pane_cp17

0xee12,	// (0x0002262b) volume_small_pane_cp_g1

0xf01f,	// (0x00022838) volume_small_pane_cp_g2

0xf028,	// (0x00022841) volume_small_pane_cp_g3

0xf031,	// (0x0002284a) volume_small_pane_cp_g4

0xf03a,	// (0x00022853) volume_small_pane_cp_g5

0xf043,	// (0x0002285c) volume_small_pane_cp_g6

0xf04c,	// (0x00022865) volume_small_pane_cp_g7

0xf055,	// (0x0002286e) volume_small_pane_cp_g8

0xf05e,	// (0x00022877) volume_small_pane_cp_g9

0xf067,	// (0x00022880) volume_small_pane_cp_g10

0x1cde,	// (0x000154f7) midp_ticker_pane_g1_ParamLimits

0x1cea,	// (0x00015503) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00022f47) midp_ticker_pane_g_ParamLimits

0xb304,	// (0x0001eb1d) midp_ticker_pane_t1_ParamLimits

0xb384,	// (0x0001eb9d) aid_fill_nsta_2

0x2988,	// (0x000161a1) list_form2_midp_pane

0x3b61,	// (0x0001737a) midp_editing_number_pane_ParamLimits

0x3b70,	// (0x00017389) midp_ticker_pane_ParamLimits

0x4bc8,	// (0x000183e1) form2_midp_field_pane

0x4bec,	// (0x00018405) scroll_pane_cp51

0x4c0c,	// (0x00018425) form2_midp_button_pane_ParamLimits

0x4c0c,	// (0x00018425) form2_midp_button_pane

0x4c1e,	// (0x00018437) form2_midp_content_pane_ParamLimits

0x4c1e,	// (0x00018437) form2_midp_content_pane

0x4c38,	// (0x00018451) form2_midp_field_choice_group_pane

0x4c40,	// (0x00018459) form2_midp_field_pane_g1

0x4c48,	// (0x00018461) form2_midp_field_pane_g2

0x4c50,	// (0x00018469) form2_midp_field_pane_g3

0x4c58,	// (0x00018471) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x000232e6) form2_midp_field_pane_g

0x4c60,	// (0x00018479) form2_midp_gauge_slider_pane

0x4c68,	// (0x00018481) form2_midp_gauge_wait_pane

0x4c70,	// (0x00018489) form2_midp_image_pane_ParamLimits

0x4c70,	// (0x00018489) form2_midp_image_pane

0x4c8b,	// (0x000184a4) form2_midp_label_pane_ParamLimits

0x4c8b,	// (0x000184a4) form2_midp_label_pane

0xbe96,	// (0x0001f6af) form2_midp_label_pane_cp_ParamLimits

0xbe96,	// (0x0001f6af) form2_midp_label_pane_cp

0x4ccb,	// (0x000184e4) form2_midp_string_pane_ParamLimits

0x4ccb,	// (0x000184e4) form2_midp_string_pane

0xbeb7,	// (0x0001f6d0) form2_midp_text_pane_ParamLimits

0xbeb7,	// (0x0001f6d0) form2_midp_text_pane

0x4cfe,	// (0x00018517) form2_midp_time_pane

0x4d0e,	// (0x00018527) input_focus_pane_cp51_ParamLimits

0x4d0e,	// (0x00018527) input_focus_pane_cp51

0x4d26,	// (0x0001853f) form2_midp_label_pane_t1_ParamLimits

0x4d26,	// (0x0001853f) form2_midp_label_pane_t1

0xbed8,	// (0x0001f6f1) form2_mdip_text_pane_t1_ParamLimits

0xbed8,	// (0x0001f6f1) form2_mdip_text_pane_t1

0x4d8b,	// (0x000185a4) form2_midp_time_pane_t1

0x4da6,	// (0x000185bf) form2_midp_gauge_slider_pane_t1

0xbef4,	// (0x0001f70d) form2_midp_gauge_slider_pane_t2

0xbf06,	// (0x0001f71f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x000232ef) form2_midp_gauge_slider_pane_t

0x4ddc,	// (0x000185f5) form2_midp_slider_pane

0x4de8,	// (0x00018601) form2_midp_gauge_wait_pane_t1

0x4df6,	// (0x0001860f) form2_midp_wait_pane_ParamLimits

0x4df6,	// (0x0001860f) form2_midp_wait_pane

0x2684,	// (0x00015e9d) list_single_2graphic_pane_cp4_ParamLimits

0x2684,	// (0x00015e9d) list_single_2graphic_pane_cp4

0xb7be,	// (0x0001efd7) list_single_midp_graphic_pane_cp_ParamLimits

0xb7be,	// (0x0001efd7) list_single_midp_graphic_pane_cp

0xc703,	// (0x0001ff1c) list_highlight_pane_cp20

0x4e3a,	// (0x00018653) list_single_2graphic_pane_g1_cp4

0x4071,	// (0x0001788a) list_single_2graphic_pane_g2_cp4

0x4e42,	// (0x0001865b) list_single_2graphic_pane_t1_cp4

0xc75f,	// (0x0001ff78) list_highlight_pane_cp21

0x4e51,	// (0x0001866a) list_single_midp_graphic_pane_g4_cp

0x4e60,	// (0x00018679) list_single_midp_graphic_pane_t1_cp

0xbf18,	// (0x0001f731) form2_mdip_string_pane_t1_ParamLimits

0xbf18,	// (0x0001f731) form2_mdip_string_pane_t1

0xc703,	// (0x0001ff1c) bg_wml_button_pane_cp2

0xc6f9,	// (0x0001ff12) form2_midp_image_pane_g1

0xcd6e,	// (0x00020587) list_double_large_graphic_pane_g5_ParamLimits

0xcd6e,	// (0x00020587) list_double_large_graphic_pane_g5

0xb260,	// (0x0001ea79) midp_form_pane_ParamLimits

0xc75f,	// (0x0001ff78) main_apps_wheel_pane_ParamLimits

0x9a2e,	// (0x0001d247) popup_preview_window_ParamLimits

0x9a2e,	// (0x0001d247) popup_preview_window

0xec66,	// (0x0002247f) popup_touch_info_window_ParamLimits

0xec66,	// (0x0002247f) popup_touch_info_window

0xec88,	// (0x000224a1) popup_touch_menu_window_ParamLimits

0xec88,	// (0x000224a1) popup_touch_menu_window

0xc6ef,	// (0x0001ff08) bg_popup_sub_pane_cp6

0x4f11,	// (0x0001872a) list_touch_menu_pane

0x4f19,	// (0x00018732) list_single_touch_menu_pane_ParamLimits

0x4f19,	// (0x00018732) list_single_touch_menu_pane

0x4f31,	// (0x0001874a) list_single_touch_menu_pane_t1

0xc75f,	// (0x0001ff78) bg_popup_sub_pane_cp7_ParamLimits

0xc75f,	// (0x0001ff78) bg_popup_sub_pane_cp7

0x4f3f,	// (0x00018758) heading_sub_pane

0x4f47,	// (0x00018760) list_touch_info_pane_ParamLimits

0x4f47,	// (0x00018760) list_touch_info_pane

0x4f56,	// (0x0001876f) list_single_touch_info_pane_ParamLimits

0x4f56,	// (0x0001876f) list_single_touch_info_pane

0x4f68,	// (0x00018781) list_single_touch_info_pane_t1

0x4f76,	// (0x0001878f) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x000232fd) list_single_touch_info_pane_t

0x1c00,	// (0x00015419) bg_popup_heading_pane_cp

0x4f84,	// (0x0001879d) heading_sub_pane_t1

0x25cb,	// (0x00015de4) bg_popup_preview_window_pane_cp_ParamLimits

0x25cb,	// (0x00015de4) bg_popup_preview_window_pane_cp

0x4f3f,	// (0x00018758) heading_preview_pane

0x4f47,	// (0x00018760) list_preview_pane_ParamLimits

0x4f47,	// (0x00018760) list_preview_pane

0x4f92,	// (0x000187ab) popup_preview_window_g1

0x4f56,	// (0x0001876f) list_single_preview_pane_ParamLimits

0x4f56,	// (0x0001876f) list_single_preview_pane

0x4f9a,	// (0x000187b3) list_single_preview_pane_g1

0x4fa2,	// (0x000187bb) list_single_preview_pane_t1

0x4f68,	// (0x00018781) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x00023302) list_single_preview_pane_t

0x4fb0,	// (0x000187c9) bg_popup_heading_pane_cp2_ParamLimits

0x4fb0,	// (0x000187c9) bg_popup_heading_pane_cp2

0x4fc6,	// (0x000187df) heading_preview_pane_g1

0x4fce,	// (0x000187e7) heading_preview_pane_t1_ParamLimits

0x4fce,	// (0x000187e7) heading_preview_pane_t1

0xc7cc,	// (0x0001ffe5) soft_indicator_pane_t1_ParamLimits

0xcd2e,	// (0x00020547) scroll_pane_ParamLimits

0x136e,	// (0x00014b87) scroll_sc2_left_pane

0x1377,	// (0x00014b90) scroll_sc2_right_pane

0x1396,	// (0x00014baf) scroll_bg_pane_g1_ParamLimits

0x13ab,	// (0x00014bc4) scroll_bg_pane_g2_ParamLimits

0x13c3,	// (0x00014bdc) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00022ed2) scroll_bg_pane_g_ParamLimits

0x1396,	// (0x00014baf) scroll_handle_pane_g1_ParamLimits

0x13e5,	// (0x00014bfe) scroll_handle_pane_g2_ParamLimits

0x13c3,	// (0x00014bdc) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00022ed9) scroll_handle_pane_g_ParamLimits

0xeb89,	// (0x000223a2) popup_choice_list_window_ParamLimits

0xeb89,	// (0x000223a2) popup_choice_list_window

0x23b7,	// (0x00015bd0) choice_list_pane

0x2473,	// (0x00015c8c) cell_toolbar_pane_t1

0x249b,	// (0x00015cb4) toolbar_button_pane_ParamLimits

0x363f,	// (0x00016e58) ai_gene_pane_1_t2_ParamLimits

0x363f,	// (0x00016e58) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x000230fc) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x000230fc) ai_gene_pane_1_t

0x4feb,	// (0x00018804) scroll_sc2_left_pane_g1

0x4feb,	// (0x00018804) scroll_sc2_right_pane_g1

0x1f2f,	// (0x00015748) bg_popup_sub_pane_cp10

0x4ff5,	// (0x0001880e) list_choice_list_pane

0x500e,	// (0x00018827) list_single_choice_list_pane_ParamLimits

0x500e,	// (0x00018827) list_single_choice_list_pane

0x5026,	// (0x0001883f) list_single_choice_list_pane_g1

0xe4a3,	// (0x00021cbc) list_single_choice_list_pane_t1_ParamLimits

0xe4a3,	// (0x00021cbc) list_single_choice_list_pane_t1

0x502e,	// (0x00018847) choice_list_pane_g1

0x5036,	// (0x0001884f) choice_list_pane_t1

0xc6ef,	// (0x0001ff08) input_focus_pane_cp11

0xe671,	// (0x00021e8a) title_pane_stacon_g2_ParamLimits

0xe671,	// (0x00021e8a) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00022eb8) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00022eb8) title_pane_stacon_g

0x1c00,	// (0x00015419) cursor_press_pane

0x96a5,	// (0x0001cebe) popup_fep_hwr_window_ParamLimits

0x96a5,	// (0x0001cebe) popup_fep_hwr_window

0xebf3,	// (0x0002240c) popup_fep_vkb_window_ParamLimits

0xebf3,	// (0x0002240c) popup_fep_vkb_window

0x5044,	// (0x0001885d) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x0002332b) fep_vkb_side_pane_g_ParamLimits

0xf09b,	// (0x000228b4) fep_hwr_candidate_pane_ParamLimits

0xf09b,	// (0x000228b4) fep_hwr_candidate_pane

0xf0c5,	// (0x000228de) fep_hwr_side_pane_ParamLimits

0xf0c5,	// (0x000228de) fep_hwr_side_pane

0xf0e7,	// (0x00022900) fep_hwr_top_pane_ParamLimits

0xf0e7,	// (0x00022900) fep_hwr_top_pane

0xf0ff,	// (0x00022918) fep_hwr_write_pane_ParamLimits

0xf0ff,	// (0x00022918) fep_hwr_write_pane

0xfb12,	// (0x0002332b) fep_vkb_side_pane_g

0x504c,	// (0x00018865) fep_hwr_top_pane_g1

0x505e,	// (0x00018877) fep_hwr_top_pane_g2

0xf139,	// (0x00022952) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x00023307) fep_hwr_top_pane_g

0xf14e,	// (0x00022967) fep_hwr_top_text_pane

0x153a,	// (0x00014d53) fep_hwr_top_text_pane_g1

0x5094,	// (0x000188ad) fep_hwr_top_text_pane_t1

0xf1dd,	// (0x000229f6) fep_hwr_candidate_pane_g1

0x52df,	// (0x00018af8) fep_vkb_keypad_pane_g3_ParamLimits

0x52df,	// (0x00018af8) fep_vkb_keypad_pane_g3

0x530b,	// (0x00018b24) fep_vkb_keypad_pane_g4_ParamLimits

0x530b,	// (0x00018b24) fep_vkb_keypad_pane_g4

0x5382,	// (0x00018b9b) fep_vkb_bottom_pane_g2_ParamLimits

0x5382,	// (0x00018b9b) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00023332) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00023332) fep_vkb_bottom_pane_g

0x4feb,	// (0x00018804) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x0002333c) cell_vkb_side_pane_g

0x540d,	// (0x00018c26) cell_vkb_side_pane_t1

0x541b,	// (0x00018c34) cell_vkb_side_pane_t1_copy1

0x4feb,	// (0x00018804) bg_fep_vkb_candidate_pane_g2

0x555f,	// (0x00018d78) cell_vkb_candidate_pane_ParamLimits

0x50a2,	// (0x000188bb) aid_size_cell_vkb_ParamLimits

0x50a2,	// (0x000188bb) aid_size_cell_vkb

0x555f,	// (0x00018d78) cell_vkb_candidate_pane

0xf204,	// (0x00022a1d) bg_popup_fep_shadow_pane_g1

0xbfae,	// (0x0001f7c7) fep_vkb_bottom_pane_ParamLimits

0xbfae,	// (0x0001f7c7) fep_vkb_bottom_pane

0x5171,	// (0x0001898a) fep_vkb_candidate_pane_ParamLimits

0x5171,	// (0x0001898a) fep_vkb_candidate_pane

0xbfda,	// (0x0001f7f3) fep_vkb_keypad_pane_ParamLimits

0xbfda,	// (0x0001f7f3) fep_vkb_keypad_pane

0xc001,	// (0x0001f81a) fep_vkb_side_pane_ParamLimits

0xc001,	// (0x0001f81a) fep_vkb_side_pane

0xc03d,	// (0x0001f856) fep_vkb_top_pane_ParamLimits

0xc03d,	// (0x0001f856) fep_vkb_top_pane

0x5238,	// (0x00018a51) fep_vkb_top_pane_g1_ParamLimits

0x5238,	// (0x00018a51) fep_vkb_top_pane_g1

0x5247,	// (0x00018a60) fep_vkb_top_pane_g2_ParamLimits

0x5247,	// (0x00018a60) fep_vkb_top_pane_g2

0x5256,	// (0x00018a6f) fep_vkb_top_pane_g3_ParamLimits

0x5256,	// (0x00018a6f) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x00023322) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x00023322) fep_vkb_top_pane_g

0x5274,	// (0x00018a8d) fep_vkb_top_text_pane_ParamLimits

0x5274,	// (0x00018a8d) fep_vkb_top_text_pane

0xc079,	// (0x0001f892) fep_vkb_side_pane_g1_ParamLimits

0xc079,	// (0x0001f892) fep_vkb_side_pane_g1

0x52ce,	// (0x00018ae7) grid_vkb_side_pane_ParamLimits

0x52ce,	// (0x00018ae7) grid_vkb_side_pane

0xf20c,	// (0x00022a25) bg_popup_fep_shadow_pane_g2

0xf215,	// (0x00022a2e) bg_popup_fep_shadow_pane_g3

0xf21d,	// (0x00022a36) bg_popup_fep_shadow_pane_g4

0xf226,	// (0x00022a3f) bg_popup_fep_shadow_pane_g5

0xf230,	// (0x00022a49) bg_popup_fep_shadow_pane_g6

0xf238,	// (0x00022a51) bg_popup_fep_shadow_pane_g7

0xe383,	// (0x00021b9c) bg_popup_fep_shadow_pane_g8

0x532d,	// (0x00018b46) grid_vkb_keypad_number_pane_ParamLimits

0x532d,	// (0x00018b46) grid_vkb_keypad_number_pane

0x5341,	// (0x00018b5a) grid_vkb_keypad_pane_ParamLimits

0x5341,	// (0x00018b5a) grid_vkb_keypad_pane

0x5367,	// (0x00018b80) fep_vkb_bottom_pane_g1_ParamLimits

0x5367,	// (0x00018b80) fep_vkb_bottom_pane_g1

0x5390,	// (0x00018ba9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5390,	// (0x00018ba9) grid_vkb_keypad_bottom_left_pane

0x53a5,	// (0x00018bbe) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x53a5,	// (0x00018bbe) grid_vkb_keypad_bottom_right_pane

0x53ba,	// (0x00018bd3) fep_vkb_top_text_pane_g1

0xc0c0,	// (0x0001f8d9) fep_vkb_top_text_pane_t1

0xc0d2,	// (0x0001f8eb) cell_vkb_side_pane_ParamLimits

0xc0d2,	// (0x0001f8eb) cell_vkb_side_pane

0x4feb,	// (0x00018804) cell_vkb_side_pane_g1

0x5429,	// (0x00018c42) cell_vkb_keypad_pane_ParamLimits

0x5429,	// (0x00018c42) cell_vkb_keypad_pane

0x54b6,	// (0x00018ccf) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x0002334f) bg_popup_fep_shadow_pane_g

0xf24a,	// (0x00022a63) cell_hwr_side_pane_g1

0xf24a,	// (0x00022a63) cell_hwr_side_pane_g2

0x54c0,	// (0x00018cd9) cell_vkb_keypad_pane_t1

0xc0e8,	// (0x0001f901) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc0e8,	// (0x0001f901) cell_vkb_keypad_bottom_left_pane

0xc0fd,	// (0x0001f916) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc0fd,	// (0x0001f916) cell_vkb_keypad_bottom_right_pane

0x4feb,	// (0x00018804) cell_vkb_keypad_bottom_left_pane_g1

0x4feb,	// (0x00018804) cell_vkb_keypad_bottom_right_pane_g1

0x5524,	// (0x00018d3d) cell_vkb_keypad_number_pane_ParamLimits

0x5524,	// (0x00018d3d) cell_vkb_keypad_number_pane

0x5543,	// (0x00018d5c) cell_vkb_keypad_number_pane_g1

0x554d,	// (0x00018d66) cell_vkb_keypad_number_pane_g2

0x5556,	// (0x00018d6f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00023341) cell_vkb_keypad_number_pane_g

0x54c0,	// (0x00018cd9) cell_vkb_keypad_number_pane_t1

0x5580,	// (0x00018d99) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00023362) cell_hwr_side_pane_g

0x5599,	// (0x00018db2) cell_hwr_side_pane_t1

0xf254,	// (0x00022a6d) cell_hwr_side_pane_t1_copy1

0xf262,	// (0x00022a7b) cell_hwr_candidate_pane_g1

0xf291,	// (0x00022aaa) cell_hwr_candidate_pane_t1

0x4feb,	// (0x00018804) cell_vkb_candidate_pane_g2

0x55dd,	// (0x00018df6) cell_vkb_candidate_pane_t1

0xee6c,	// (0x00022685) bg_popup_fep_shadow_pane_ParamLimits

0xee6c,	// (0x00022685) bg_popup_fep_shadow_pane

0xf119,	// (0x00022932) bg_fep_hwr_top_pane_g4

0x5070,	// (0x00018889) bg_hwr_side_pane_g1_ParamLimits

0x5070,	// (0x00018889) bg_hwr_side_pane_g1

0x9ef5,	// (0x0001d70e) cell_hwr_side_pane_ParamLimits

0x9ef5,	// (0x0001d70e) cell_hwr_side_pane

0xf163,	// (0x0002297c) fep_hwr_write_pane_g1_ParamLimits

0xf163,	// (0x0002297c) fep_hwr_write_pane_g1

0xf170,	// (0x00022989) fep_hwr_write_pane_g2_ParamLimits

0xf170,	// (0x00022989) fep_hwr_write_pane_g2

0xf17d,	// (0x00022996) fep_hwr_write_pane_g3_ParamLimits

0xf17d,	// (0x00022996) fep_hwr_write_pane_g3

0x9f15,	// (0x0001d72e) fep_hwr_write_pane_g4_ParamLimits

0x9f15,	// (0x0001d72e) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x0002330e) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x0002330e) fep_hwr_write_pane_g

0xf119,	// (0x00022932) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf119,	// (0x00022932) bg_fep_hwr_candidate_pane_g2

0xf18b,	// (0x000229a4) cell_hwr_candidate_pane_ParamLimits

0xf18b,	// (0x000229a4) cell_hwr_candidate_pane

0xf1dd,	// (0x000229f6) fep_hwr_candidate_pane_g1_ParamLimits

0x50d0,	// (0x000188e9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x50d0,	// (0x000188e9) bg_popup_fep_shadow_pane_cp2

0x5266,	// (0x00018a7f) fep_vkb_top_pane_g4_ParamLimits

0x5266,	// (0x00018a7f) fep_vkb_top_pane_g4

0x52ac,	// (0x00018ac5) fep_vkb_side_pane_g2_ParamLimits

0x52ac,	// (0x00018ac5) fep_vkb_side_pane_g2

0xace5,	// (0x0001e4fe) list_setting_pane_t4_ParamLimits

0xace5,	// (0x0001e4fe) list_setting_pane_t4

0xad61,	// (0x0001e57a) list_setting_number_pane_t5_ParamLimits

0xad61,	// (0x0001e57a) list_setting_number_pane_t5

0x1571,	// (0x00014d8a) list_double_heading_pane_cp2_ParamLimits

0x1571,	// (0x00014d8a) list_double_heading_pane_cp2

0x55eb,	// (0x00018e04) list_double_heading_pane_g1_cp2_ParamLimits

0x55eb,	// (0x00018e04) list_double_heading_pane_g1_cp2

0x55f7,	// (0x00018e10) list_double_heading_pane_g2_cp2_ParamLimits

0x55f7,	// (0x00018e10) list_double_heading_pane_g2_cp2

0x560b,	// (0x00018e24) list_double_heading_pane_t1_cp2_ParamLimits

0x560b,	// (0x00018e24) list_double_heading_pane_t1_cp2

0x5621,	// (0x00018e3a) list_double_heading_pane_t2_cp2_ParamLimits

0x5621,	// (0x00018e3a) list_double_heading_pane_t2_cp2

0xc6e7,	// (0x0001ff00) aid_value_unit2

0xe154,	// (0x0002196d) popup_preview_fixed_window

0xc8ac,	// (0x000200c5) bg_popup_preview_window_pane_cp02

0x5633,	// (0x00018e4c) list_preview_fixed_pane

0x5679,	// (0x00018e92) list_empty_pane_fp_ParamLimits

0x5679,	// (0x00018e92) list_empty_pane_fp

0x5679,	// (0x00018e92) list_single_cale_day_pane_fp_ParamLimits

0x5679,	// (0x00018e92) list_single_cale_day_pane_fp

0x5679,	// (0x00018e92) list_single_graphic_heading_pane_fp_ParamLimits

0x5679,	// (0x00018e92) list_single_graphic_heading_pane_fp

0x5679,	// (0x00018e92) list_single_graphic_pane_fp_ParamLimits

0x5679,	// (0x00018e92) list_single_graphic_pane_fp

0x5679,	// (0x00018e92) list_single_heading_pane_fp_ParamLimits

0x5679,	// (0x00018e92) list_single_heading_pane_fp

0x5679,	// (0x00018e92) list_single_pane_fp_ParamLimits

0x5679,	// (0x00018e92) list_single_pane_fp

0x5692,	// (0x00018eab) list_single_pane_fp_g1_ParamLimits

0x5692,	// (0x00018eab) list_single_pane_fp_g1

0xea73,	// (0x0002228c) list_single_pane_fp_g2_ParamLimits

0xea73,	// (0x0002228c) list_single_pane_fp_g2

0x569e,	// (0x00018eb7) list_single_pane_fp_g3_ParamLimits

0x569e,	// (0x00018eb7) list_single_pane_fp_g3

0x56b2,	// (0x00018ecb) list_single_pane_fp_g4_ParamLimits

0x56b2,	// (0x00018ecb) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x00023375) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x00023375) list_single_pane_fp_g

0x56be,	// (0x00018ed7) list_single_pane_fp_t1_ParamLimits

0x56be,	// (0x00018ed7) list_single_pane_fp_t1

0x56d5,	// (0x00018eee) list_single_graphic_pane_fp_g1_ParamLimits

0x56d5,	// (0x00018eee) list_single_graphic_pane_fp_g1

0x5692,	// (0x00018eab) list_single_graphic_pane_fp_g2_ParamLimits

0x5692,	// (0x00018eab) list_single_graphic_pane_fp_g2

0xea73,	// (0x0002228c) list_single_graphic_pane_fp_g3_ParamLimits

0xea73,	// (0x0002228c) list_single_graphic_pane_fp_g3

0x569e,	// (0x00018eb7) list_single_graphic_pane_fp_g4_ParamLimits

0x569e,	// (0x00018eb7) list_single_graphic_pane_fp_g4

0x56b2,	// (0x00018ecb) list_single_graphic_pane_fp_g5_ParamLimits

0x56b2,	// (0x00018ecb) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x0002337e) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x0002337e) list_single_graphic_pane_fp_g

0x56e1,	// (0x00018efa) list_single_graphic_pane_fp_t1_ParamLimits

0x56e1,	// (0x00018efa) list_single_graphic_pane_fp_t1

0x56d5,	// (0x00018eee) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x56d5,	// (0x00018eee) list_single_graphic_heading_pane_fp_g1

0x5692,	// (0x00018eab) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5692,	// (0x00018eab) list_single_graphic_heading_pane_fp_g2

0xea73,	// (0x0002228c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xea73,	// (0x0002228c) list_single_graphic_heading_pane_fp_g3

0x569e,	// (0x00018eb7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x569e,	// (0x00018eb7) list_single_graphic_heading_pane_fp_g4

0x56b2,	// (0x00018ecb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x56b2,	// (0x00018ecb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0002337e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0002337e) list_single_graphic_heading_pane_fp_g

0x56f7,	// (0x00018f10) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x56f7,	// (0x00018f10) list_single_graphic_heading_pane_fp_t1

0x570d,	// (0x00018f26) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x570d,	// (0x00018f26) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x00023389) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x00023389) list_single_graphic_heading_pane_fp_t

0x571f,	// (0x00018f38) list_single_cale_day_pane_fp_g1_ParamLimits

0x571f,	// (0x00018f38) list_single_cale_day_pane_fp_g1

0x5757,	// (0x00018f70) list_single_cale_day_pane_fp_g2_ParamLimits

0x5757,	// (0x00018f70) list_single_cale_day_pane_fp_g2

0x5763,	// (0x00018f7c) list_single_cale_day_pane_fp_g3_ParamLimits

0x5763,	// (0x00018f7c) list_single_cale_day_pane_fp_g3

0x578b,	// (0x00018fa4) list_single_cale_day_pane_fp_g4_ParamLimits

0x578b,	// (0x00018fa4) list_single_cale_day_pane_fp_g4

0x57af,	// (0x00018fc8) list_single_cale_day_pane_fp_g5_ParamLimits

0x57af,	// (0x00018fc8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x0002338e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x0002338e) list_single_cale_day_pane_fp_g

0x57d3,	// (0x00018fec) list_single_cale_day_pane_fp_t1_ParamLimits

0x57d3,	// (0x00018fec) list_single_cale_day_pane_fp_t1

0x57f9,	// (0x00019012) list_single_cale_day_pane_fp_t2_ParamLimits

0x57f9,	// (0x00019012) list_single_cale_day_pane_fp_t2

0x5812,	// (0x0001902b) list_single_cale_day_pane_fp_t3_ParamLimits

0x5812,	// (0x0001902b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x00023399) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x00023399) list_single_cale_day_pane_fp_t

0x5692,	// (0x00018eab) list_empty_pane_fp_g1_ParamLimits

0x5692,	// (0x00018eab) list_empty_pane_fp_g1

0x582b,	// (0x00019044) list_empty_pane_fp_t1

0x5839,	// (0x00019052) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x000233a0) list_empty_pane_fp_t

0x5692,	// (0x00018eab) list_single_heading_pane_fp_g1_ParamLimits

0x5692,	// (0x00018eab) list_single_heading_pane_fp_g1

0xea73,	// (0x0002228c) list_single_heading_pane_fp_g2_ParamLimits

0xea73,	// (0x0002228c) list_single_heading_pane_fp_g2

0x569e,	// (0x00018eb7) list_single_heading_pane_fp_g3_ParamLimits

0x569e,	// (0x00018eb7) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x000233a5) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x000233a5) list_single_heading_pane_fp_g

0x5847,	// (0x00019060) list_single_heading_pane_fp_t1_ParamLimits

0x5847,	// (0x00019060) list_single_heading_pane_fp_t1

0x5859,	// (0x00019072) list_single_heading_pane_fp_t2_ParamLimits

0x5859,	// (0x00019072) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x000233ac) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x000233ac) list_single_heading_pane_fp_t

0xe4b8,	// (0x00021cd1) aid_size_cell_fast

0xc88f,	// (0x000200a8) soft_indicator_pane_cp1_t1

0xe4f5,	// (0x00021d0e) cell_app_pane_cp2_ParamLimits

0xe4f5,	// (0x00021d0e) cell_app_pane_cp2

0xf084,	// (0x0002289d) fep_hwr_candidate_drop_down_list_pane

0xf1f7,	// (0x00022a10) fep_hwr_candidate_pane_g3_ParamLimits

0xf1f7,	// (0x00022a10) fep_hwr_candidate_pane_g3

0xcd83,	// (0x0002059c) fep_hwr_candidate_pane_g4_ParamLimits

0xcd83,	// (0x0002059c) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x0002331b) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x0002331b) fep_hwr_candidate_pane_g

0x5160,	// (0x00018979) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5160,	// (0x00018979) fep_vkb_candidate_drop_down_list_pane

0x5588,	// (0x00018da1) fep_vkb_candidate_pane_g3

0x5590,	// (0x00018da9) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00023348) fep_vkb_candidate_pane_g

0xf262,	// (0x00022a7b) cell_hwr_candidate_pane_g1_ParamLimits

0xf270,	// (0x00022a89) cell_hwr_candidate_pane_g3_ParamLimits

0xf270,	// (0x00022a89) cell_hwr_candidate_pane_g3

0x5da2,	// (0x000195bb) cell_hwr_candidate_pane_g4_ParamLimits

0x5da2,	// (0x000195bb) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x00023367) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x00023367) cell_hwr_candidate_pane_g

0x55a7,	// (0x00018dc0) cell_vkb_candidate_pane_g3_ParamLimits

0x55a7,	// (0x00018dc0) cell_vkb_candidate_pane_g3

0x55c2,	// (0x00018ddb) cell_vkb_candidate_pane_g4_ParamLimits

0x55c2,	// (0x00018ddb) cell_vkb_candidate_pane_g4

0x586f,	// (0x00019088) cell_app_pane_cp2_g1_ParamLimits

0x586f,	// (0x00019088) cell_app_pane_cp2_g1

0x588d,	// (0x000190a6) cell_app_pane_cp2_g2_ParamLimits

0x588d,	// (0x000190a6) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x000233b1) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x000233b1) cell_app_pane_cp2_g

0x5899,	// (0x000190b2) cell_app_pane_cp2_t1_ParamLimits

0x5899,	// (0x000190b2) cell_app_pane_cp2_t1

0xe2b0,	// (0x00021ac9) grid_highlight_pane_cp1_ParamLimits

0xe2b0,	// (0x00021ac9) grid_highlight_pane_cp1

0xf2af,	// (0x00022ac8) cell_hwr_candidate_pane_cp1_ParamLimits

0xf2af,	// (0x00022ac8) cell_hwr_candidate_pane_cp1

0xf262,	// (0x00022a7b) fep_hwr_candidate_drop_down_list_pane_g1

0xf2d3,	// (0x00022aec) fep_hwr_candidate_drop_down_list_pane_g2

0xf2e0,	// (0x00022af9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x000233b6) fep_hwr_candidate_drop_down_list_pane_g

0xf2ed,	// (0x00022b06) fep_hwr_candidate_drop_down_list_scroll_pane

0xf2f6,	// (0x00022b0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf2f6,	// (0x00022b0f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xf303,	// (0x00022b1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf303,	// (0x00022b1c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xf310,	// (0x00022b29) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf310,	// (0x00022b29) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf31d,	// (0x00022b36) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf31d,	// (0x00022b36) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf338,	// (0x00022b51) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf338,	// (0x00022b51) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xf353,	// (0x00022b6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf353,	// (0x00022b6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf36e,	// (0x00022b87) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf36e,	// (0x00022b87) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf389,	// (0x00022ba2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf389,	// (0x00022ba2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x000233bd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x000233bd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x58ab,	// (0x000190c4) cell_vkb_candidate_pane_cp1_ParamLimits

0x58ab,	// (0x000190c4) cell_vkb_candidate_pane_cp1

0x5266,	// (0x00018a7f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5266,	// (0x00018a7f) fep_vkb_candidate_drop_down_list_pane_g1

0x58d1,	// (0x000190ea) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x58d1,	// (0x000190ea) fep_vkb_candidate_drop_down_list_pane_g2

0x58de,	// (0x000190f7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x58de,	// (0x000190f7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x000233ce) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x000233ce) fep_vkb_candidate_drop_down_list_pane_g

0x58eb,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x58eb,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane

0x58f8,	// (0x00019111) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x58f8,	// (0x00019111) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5905,	// (0x0001911e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5905,	// (0x0001911e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5911,	// (0x0001912a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5911,	// (0x0001912a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x591d,	// (0x00019136) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x591d,	// (0x00019136) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x593e,	// (0x00019157) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x593e,	// (0x00019157) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x595f,	// (0x00019178) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x595f,	// (0x00019178) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5980,	// (0x00019199) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5980,	// (0x00019199) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x59a1,	// (0x000191ba) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x59a1,	// (0x000191ba) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x000233d5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x000233d5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa5de,	// (0x0001ddf7) title_pane_g1_ParamLimits

0xa5f1,	// (0x0001de0a) title_pane_g2_ParamLimits

0xf529,	// (0x00022d42) title_pane_g_ParamLimits

0x152a,	// (0x00014d43) aid_call2_pane

0x1532,	// (0x00014d4b) aid_call_pane

0x153a,	// (0x00014d53) popup_clock_analogue_window_g1

0x153a,	// (0x00014d53) popup_clock_analogue_window_g2

0xe838,	// (0x00022051) popup_clock_analogue_window_g3

0xe841,	// (0x0002205a) popup_clock_analogue_window_g4

0xc6f9,	// (0x0001ff12) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00022ee7) popup_clock_analogue_window_g

0xe849,	// (0x00022062) popup_clock_analogue_window_t1

0xe857,	// (0x00022070) clock_digital_number_pane_ParamLimits

0xe857,	// (0x00022070) clock_digital_number_pane

0xe863,	// (0x0002207c) clock_digital_number_pane_cp02_ParamLimits

0xe863,	// (0x0002207c) clock_digital_number_pane_cp02

0xe86f,	// (0x00022088) clock_digital_number_pane_cp03_ParamLimits

0xe86f,	// (0x00022088) clock_digital_number_pane_cp03

0xe87b,	// (0x00022094) clock_digital_number_pane_cp04_ParamLimits

0xe87b,	// (0x00022094) clock_digital_number_pane_cp04

0xe887,	// (0x000220a0) clock_digital_separator_pane_ParamLimits

0xe887,	// (0x000220a0) clock_digital_separator_pane

0xe893,	// (0x000220ac) popup_clock_digital_window_t1_ParamLimits

0xe893,	// (0x000220ac) popup_clock_digital_window_t1

0xc6f9,	// (0x0001ff12) clock_digital_number_pane_g1

0xc6f9,	// (0x0001ff12) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00022ef2) clock_digital_number_pane_g

0xc6f9,	// (0x0001ff12) clock_digital_separator_pane_g1

0xc6f9,	// (0x0001ff12) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00022ef2) clock_digital_separator_pane_g

0xb360,	// (0x0001eb79) aid_fill_nsta_ParamLimits

0xb498,	// (0x0001ecb1) indicator_nsta_pane_ParamLimits

0x2250,	// (0x00015a69) popup_clock_analogue_window

0x2250,	// (0x00015a69) popup_clock_digital_window

0xbd99,	// (0x0001f5b2) grid_indicator_nsta_pane_ParamLimits

0x49ed,	// (0x00018206) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x0002329b) clock_nsta_pane_t

0xe805,	// (0x0002201e) aid_size_max_handle

0x94d5,	// (0x0001ccee) aid_size_min_handle

0x1c00,	// (0x00015419) editor_scroll_pane

0x59bc,	// (0x000191d5) ex_editor_pane

0xe47e,	// (0x00021c97) scroll_pane_cp13

0xcd5a,	// (0x00020573) scroll_pane_cp14

0x1569,	// (0x00014d82) scroll_pane_cp36

0xb0e4,	// (0x0001e8fd) list_single_graphic_hl_pane_cp2_ParamLimits

0xb0e4,	// (0x0001e8fd) list_single_graphic_hl_pane_cp2

0xbc26,	// (0x0001f43f) list_single_graphic_hl_pane_ParamLimits

0xbc26,	// (0x0001f43f) list_single_graphic_hl_pane

0x59c4,	// (0x000191dd) aid_size_min_hl_cp1

0x59cd,	// (0x000191e6) list_highlight_pane_cp34_ParamLimits

0x59cd,	// (0x000191e6) list_highlight_pane_cp34

0x59de,	// (0x000191f7) list_single_graphic_hl_pane_g1_ParamLimits

0x59de,	// (0x000191f7) list_single_graphic_hl_pane_g1

0xc118,	// (0x0001f931) list_single_graphic_hl_pane_g2_ParamLimits

0xc118,	// (0x0001f931) list_single_graphic_hl_pane_g2

0xc118,	// (0x0001f931) list_single_graphic_hl_pane_g3_ParamLimits

0xc118,	// (0x0001f931) list_single_graphic_hl_pane_g3

0x1b37,	// (0x00015350) list_single_graphic_hl_pane_g4_ParamLimits

0x1b37,	// (0x00015350) list_single_graphic_hl_pane_g4

0xc124,	// (0x0001f93d) list_single_graphic_hl_pane_g5_ParamLimits

0xc124,	// (0x0001f93d) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x000233e6) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x000233e6) list_single_graphic_hl_pane_g

0x322b,	// (0x00016a44) list_single_graphic_hl_pane_t1_ParamLimits

0x322b,	// (0x00016a44) list_single_graphic_hl_pane_t1

0x5a21,	// (0x0001923a) aid_size_min_hl_cp2

0x5a2a,	// (0x00019243) list_highlight_pane_cp34_cp2_ParamLimits

0x5a2a,	// (0x00019243) list_highlight_pane_cp34_cp2

0x59de,	// (0x000191f7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x59de,	// (0x000191f7) list_single_graphic_hl_pane_g1_cp2

0x5a37,	// (0x00019250) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a37,	// (0x00019250) list_single_graphic_hl_pane_g2_cp2

0x5a43,	// (0x0001925c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5a43,	// (0x0001925c) list_single_graphic_hl_pane_g3_cp2

0x5a51,	// (0x0001926a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5a51,	// (0x0001926a) list_single_graphic_hl_pane_g4_cp2

0x5a5d,	// (0x00019276) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5a5d,	// (0x00019276) list_single_graphic_hl_pane_g5_cp2

0x94de,	// (0x0001ccf7) control_pane_g4_ParamLimits

0x94de,	// (0x0001ccf7) control_pane_g4

0x1f2f,	// (0x00015748) bg_popup_sub_pane_cp10_ParamLimits

0x4ff5,	// (0x0001880e) list_choice_list_pane_ParamLimits

0x5004,	// (0x0001881d) scroll_pane_cp23

0xc8ac,	// (0x000200c5) bg_popup_preview_window_pane_cp02_ParamLimits

0x5633,	// (0x00018e4c) list_preview_fixed_pane_ParamLimits

0x5649,	// (0x00018e62) list_preview_fixed_pane_cp_ParamLimits

0x5649,	// (0x00018e62) list_preview_fixed_pane_cp

0x5655,	// (0x00018e6e) popup_preview_fixed_window_g1_ParamLimits

0x5655,	// (0x00018e6e) popup_preview_fixed_window_g1

0x5661,	// (0x00018e7a) popup_preview_fixed_window_g2_ParamLimits

0x5661,	// (0x00018e7a) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x0002336e) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x0002336e) popup_preview_fixed_window_g

0xe755,	// (0x00021f6e) aid_navi_side_left_pane_ParamLimits

0xe76a,	// (0x00021f83) aid_navi_side_right_pane_ParamLimits

0xe782,	// (0x00021f9b) navi_icon_pane_stacon_ParamLimits

0xe796,	// (0x00021faf) navi_navi_pane_stacon_ParamLimits

0xe782,	// (0x00021f9b) navi_text_pane_stacon_ParamLimits

0xe045,	// (0x0002185e) main_text_info_pane

0x5a87,	// (0x000192a0) listscroll_text_info_pane

0x5a8f,	// (0x000192a8) list_text_info_pane_ParamLimits

0x5a8f,	// (0x000192a8) list_text_info_pane

0x5a9e,	// (0x000192b7) scroll_pane_cp24_ParamLimits

0x5a9e,	// (0x000192b7) scroll_pane_cp24

0xc138,	// (0x0001f951) list_text_info_pane_t1_ParamLimits

0xc138,	// (0x0001f951) list_text_info_pane_t1

0x9609,	// (0x0001ce22) popup_fast_swap2_window_ParamLimits

0x9609,	// (0x0001ce22) popup_fast_swap2_window

0x5ae1,	// (0x000192fa) aid_size_cell_fast2

0xc6ef,	// (0x0001ff08) bg_popup_window_pane_cp17

0x5aeb,	// (0x00019304) heading_pane_cp2

0x5af3,	// (0x0001930c) listscroll_fast2_pane

0x5afb,	// (0x00019314) grid_fast2_pane

0x5b05,	// (0x0001931e) listscroll_fast2_pane_g1

0x5b0f,	// (0x00019328) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x000233f1) listscroll_fast2_pane_g

0xe47e,	// (0x00021c97) scroll_pane_cp26

0x5b19,	// (0x00019332) cell_fast2_pane_ParamLimits

0x5b19,	// (0x00019332) cell_fast2_pane

0x5b30,	// (0x00019349) cell_fast2_pane_g1

0x5b39,	// (0x00019352) cell_fast2_pane_g2

0x5b42,	// (0x0001935b) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x000233f6) cell_fast2_pane_g

0xcb21,	// (0x0002033a) grid_highlight_pane_cp9

0xeb7b,	// (0x00022394) main_eswt_pane_ParamLimits

0xeb7b,	// (0x00022394) main_eswt_pane

0x5ab3,	// (0x000192cc) list_single_text_info_pane

0x5b4a,	// (0x00019363) eswt_ctrl_button_pane

0x5b4a,	// (0x00019363) eswt_ctrl_canvas_pane

0x5b52,	// (0x0001936b) eswt_ctrl_combo_pane

0x5b4a,	// (0x00019363) eswt_ctrl_default_pane

0x5b4a,	// (0x00019363) eswt_ctrl_label_pane

0x5b5a,	// (0x00019373) eswt_ctrl_wait_pane

0x5b62,	// (0x0001937b) eswt_shell_pane

0xc6ef,	// (0x0001ff08) listscroll_eswt_app_pane

0x5b82,	// (0x0001939b) popup_eswt_tasktip_window_ParamLimits

0x5b82,	// (0x0001939b) popup_eswt_tasktip_window

0x25cb,	// (0x00015de4) bg_popup_window_pane_cp18

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_ParamLimits

0x5b9b,	// (0x000193b4) eswt_control_pane_g1

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_ParamLimits

0x5ba8,	// (0x000193c1) eswt_control_pane_g2

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_ParamLimits

0x5bb5,	// (0x000193ce) eswt_control_pane_g3

0x5bc2,	// (0x000193db) eswt_control_pane_g4_ParamLimits

0x5bc2,	// (0x000193db) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x000233fd) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x000233fd) eswt_control_pane_g

0xe2b0,	// (0x00021ac9) bg_button_pane_ParamLimits

0xe2b0,	// (0x00021ac9) bg_button_pane

0xcb36,	// (0x0002034f) common_borders_pane_copy2_ParamLimits

0xcb36,	// (0x0002034f) common_borders_pane_copy2

0x5bcf,	// (0x000193e8) control_button_pane_g1_ParamLimits

0x5bcf,	// (0x000193e8) control_button_pane_g1

0x5bdb,	// (0x000193f4) control_button_pane_g2_ParamLimits

0x5bdb,	// (0x000193f4) control_button_pane_g2

0x5be7,	// (0x00019400) control_button_pane_g3_ParamLimits

0x5be7,	// (0x00019400) control_button_pane_g3

0x0002,

0xfbed,	// (0x00023406) control_button_pane_g_ParamLimits

0xfbed,	// (0x00023406) control_button_pane_g

0x5bfb,	// (0x00019414) control_button_pane_t1

0x5c09,	// (0x00019422) control_button_pane_t2

0x0001,

0xfbf4,	// (0x0002340d) control_button_pane_t

0x24a7,	// (0x00015cc0) bg_button_pane_g1

0x24b7,	// (0x00015cd0) bg_button_pane_g2

0x24af,	// (0x00015cc8) bg_button_pane_g3

0x24c7,	// (0x00015ce0) bg_button_pane_g4

0x24bf,	// (0x00015cd8) bg_button_pane_g5

0x24cf,	// (0x00015ce8) bg_button_pane_g6

0x24d7,	// (0x00015cf0) bg_button_pane_g7

0x24e7,	// (0x00015d00) bg_button_pane_g8

0x24df,	// (0x00015cf8) bg_button_pane_g9

0x0008,

0xf837,	// (0x00023050) bg_button_pane_g

0x4fb0,	// (0x000187c9) common_borders_pane_ParamLimits

0x4fb0,	// (0x000187c9) common_borders_pane

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy1_ParamLimits

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy1

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy1_ParamLimits

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy1

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy1_ParamLimits

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy1

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy1_ParamLimits

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy1

0x4feb,	// (0x00018804) bg_eswt_ctrl_canvas_pane_g1

0x4fb0,	// (0x000187c9) common_borders_pane_cp2_ParamLimits

0x4fb0,	// (0x000187c9) common_borders_pane_cp2

0x4fb0,	// (0x000187c9) common_borders_pane_cp3_ParamLimits

0x4fb0,	// (0x000187c9) common_borders_pane_cp3

0x5c17,	// (0x00019430) separator_horizontal_pane

0x5c1f,	// (0x00019438) separator_vertical_pane

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy2_ParamLimits

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy2

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy2_ParamLimits

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy2

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy2_ParamLimits

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy2

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy2_ParamLimits

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy2

0xc6ef,	// (0x0001ff08) common_borders_pane_cp4

0x5c28,	// (0x00019441) separator_horizontal_pane_g1

0x5c31,	// (0x0001944a) separator_horizontal_pane_g2

0x5c3a,	// (0x00019453) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x00023412) separator_horizontal_pane_g

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy3_ParamLimits

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy3

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy3_ParamLimits

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy3

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy3_ParamLimits

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy3

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy3_ParamLimits

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy3

0xc6ef,	// (0x0001ff08) common_borders_pane_cp5

0x5c43,	// (0x0001945c) separator_vertical_pane_g1

0x5c4c,	// (0x00019465) separator_vertical_pane_g2

0x5c55,	// (0x0001946e) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x00023419) separator_vertical_pane_g

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy4_ParamLimits

0x5b9b,	// (0x000193b4) eswt_control_pane_g1_copy4

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy4_ParamLimits

0x5ba8,	// (0x000193c1) eswt_control_pane_g2_copy4

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy4_ParamLimits

0x5bb5,	// (0x000193ce) eswt_control_pane_g3_copy4

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy4_ParamLimits

0x5bc2,	// (0x000193db) eswt_control_pane_g4_copy4

0xc15a,	// (0x0001f973) eswt_ctrl_combo_button_pane

0xc162,	// (0x0001f97b) eswt_ctrl_input_pane

0xc16a,	// (0x0001f983) popup_choice_list_window_cp70

0xc172,	// (0x0001f98b) eswt_ctrl_input_pane_t1

0xc6ef,	// (0x0001ff08) input_focus_pane_cp70

0x4fb0,	// (0x000187c9) bg_button_pane_cp70_ParamLimits

0x4fb0,	// (0x000187c9) bg_button_pane_cp70

0xc180,	// (0x0001f999) eswt_ctrl_combo_button_pane_g1

0x5c8c,	// (0x000194a5) wait_bar_pane_cp70

0x25cb,	// (0x00015de4) bg_popup_window_pane_cp70_ParamLimits

0x25cb,	// (0x00015de4) bg_popup_window_pane_cp70

0x5c94,	// (0x000194ad) popup_eswt_tasktip_window_t1

0x5caa,	// (0x000194c3) wait_bar_pane_cp71_ParamLimits

0x5caa,	// (0x000194c3) wait_bar_pane_cp71

0x5cb6,	// (0x000194cf) grid_eswt_app_pane

0x136e,	// (0x00014b87) scroll_pane_cp70

0xc188,	// (0x0001f9a1) cell_eswt_app_pane_ParamLimits

0xc188,	// (0x0001f9a1) cell_eswt_app_pane

0xc1ba,	// (0x0001f9d3) cell_eswt_app_pane_g1_ParamLimits

0xc1ba,	// (0x0001f9d3) cell_eswt_app_pane_g1

0xc1e9,	// (0x0001fa02) cell_eswt_app_pane_g2_ParamLimits

0xc1e9,	// (0x0001fa02) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x00023420) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x00023420) cell_eswt_app_pane_g

0xc212,	// (0x0001fa2b) cell_eswt_app_pane_t1_ParamLimits

0xc212,	// (0x0001fa2b) cell_eswt_app_pane_t1

0x5d7b,	// (0x00019594) grid_highlight_pane_cp70_ParamLimits

0x5d7b,	// (0x00019594) grid_highlight_pane_cp70

0x1ac6,	// (0x000152df) set_content_pane_g1

0xb33c,	// (0x0001eb55) status_small_volume_pane

0x9f2a,	// (0x0001d743) status_small_volume_pane_g1

0x9f32,	// (0x0001d74b) volume_small2_pane

0x9f3b,	// (0x0001d754) volume_small2_pane_g1

0x9f44,	// (0x0001d75d) volume_small2_pane_g2

0x9f4d,	// (0x0001d766) volume_small2_pane_g3

0x9f56,	// (0x0001d76f) volume_small2_pane_g4

0x9f5f,	// (0x0001d778) volume_small2_pane_g5

0x9f68,	// (0x0001d781) volume_small2_pane_g6

0x9f71,	// (0x0001d78a) volume_small2_pane_g7

0x9f7a,	// (0x0001d793) volume_small2_pane_g8

0x9f83,	// (0x0001d79c) volume_small2_pane_g9

0x9f8c,	// (0x0001d7a5) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x00023425) volume_small2_pane_g

0x53ba,	// (0x00018bd3) fep_vkb_top_text_pane_g1_ParamLimits

0xc0c0,	// (0x0001f8d9) fep_vkb_top_text_pane_t1_ParamLimits

0x566d,	// (0x00018e86) popup_preview_fixed_window_g3_ParamLimits

0x566d,	// (0x00018e86) popup_preview_fixed_window_g3

0x9ca9,	// (0x0001d4c2) popup_toolbar_trans_pane

0xba4b,	// (0x0001f264) aid_height_set_list_ParamLimits

0x398b,	// (0x000171a4) aid_size_parent_ParamLimits

0x1f2f,	// (0x00015748) list_highlight_pane_cp2_ParamLimits

0x1ac6,	// (0x000152df) set_content_pane_g1_ParamLimits

0xbc3a,	// (0x0001f453) list_single_image_pane_ParamLimits

0xbc3a,	// (0x0001f453) list_single_image_pane

0xc244,	// (0x0001fa5d) aid_size_cell_image_ParamLimits

0xc244,	// (0x0001fa5d) aid_size_cell_image

0xc251,	// (0x0001fa6a) grid_single_image_pane_ParamLimits

0xc251,	// (0x0001fa6a) grid_single_image_pane

0xe2d6,	// (0x00021aef) list_single_image_pane_g1_ParamLimits

0xe2d6,	// (0x00021aef) list_single_image_pane_g1

0xe2e2,	// (0x00021afb) list_single_image_pane_g2_ParamLimits

0xe2e2,	// (0x00021afb) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x0002343a) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x0002343a) list_single_image_pane_g

0x5dc3,	// (0x000195dc) list_single_image_pane_t1_ParamLimits

0x5dc3,	// (0x000195dc) list_single_image_pane_t1

0xc25f,	// (0x0001fa78) cell_image_list_pane_ParamLimits

0xc25f,	// (0x0001fa78) cell_image_list_pane

0xc275,	// (0x0001fa8e) cell_image_list_pane_g1

0xc27e,	// (0x0001fa97) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x0002343f) cell_image_list_pane_g

0x5e03,	// (0x0001961c) aid_size_cell_tb_trans_pane

0xe2b0,	// (0x00021ac9) bg_tb_trans_pane

0x5e15,	// (0x0001962e) grid_tb_trans_pane

0x24a7,	// (0x00015cc0) bg_tb_trans_pane_g1

0x24b7,	// (0x00015cd0) bg_tb_trans_pane_g2

0x24af,	// (0x00015cc8) bg_tb_trans_pane_g3

0x24c7,	// (0x00015ce0) bg_tb_trans_pane_g4

0x24bf,	// (0x00015cd8) bg_tb_trans_pane_g5

0x24e7,	// (0x00015d00) bg_tb_trans_pane_g6

0x24df,	// (0x00015cf8) bg_tb_trans_pane_g7

0x24cf,	// (0x00015ce8) bg_tb_trans_pane_g8

0x24d7,	// (0x00015cf0) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x00023444) bg_tb_trans_pane_g

0x5e29,	// (0x00019642) cell_toolbar_trans_pane_ParamLimits

0x5e29,	// (0x00019642) cell_toolbar_trans_pane

0x4feb,	// (0x00018804) cell_toolbar_trans_pane_g1

0xbe7a,	// (0x0001f693) list_form2_midp_pane_t1

0xbe88,	// (0x0001f6a1) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x000232e1) list_form2_midp_pane_t

0x4bec,	// (0x00018405) scroll_pane_cp51_ParamLimits

0x4e06,	// (0x0001861f) form2_midp_wait_pane_g1

0x4e0f,	// (0x00018628) form2_midp_wait_pane_g2

0x4e18,	// (0x00018631) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x000232f6) form2_midp_wait_pane_g

0xc75f,	// (0x0001ff78) list_highlight_pane_cp21_ParamLimits

0x4e51,	// (0x0001866a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4e60,	// (0x00018679) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3ba9,	// (0x000173c2) list_single_2graphic_im_pane_ParamLimits

0x3ba9,	// (0x000173c2) list_single_2graphic_im_pane

0xc287,	// (0x0001faa0) list_single_2graphic_im_pane_g1_ParamLimits

0xc287,	// (0x0001faa0) list_single_2graphic_im_pane_g1

0xc298,	// (0x0001fab1) list_single_2graphic_im_pane_g2_ParamLimits

0xc298,	// (0x0001fab1) list_single_2graphic_im_pane_g2

0xc2a4,	// (0x0001fabd) list_single_2graphic_im_pane_g3_ParamLimits

0xc2a4,	// (0x0001fabd) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x00023457) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x00023457) list_single_2graphic_im_pane_g

0xc2b8,	// (0x0001fad1) list_single_2graphic_im_pane_t1_ParamLimits

0xc2b8,	// (0x0001fad1) list_single_2graphic_im_pane_t1

0x5679,	// (0x00018e92) list_single_graphic_2heading_pane_fp_ParamLimits

0x5679,	// (0x00018e92) list_single_graphic_2heading_pane_fp

0x56d5,	// (0x00018eee) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x56d5,	// (0x00018eee) list_single_graphic_2heading_pane_fp_g1

0x5692,	// (0x00018eab) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5692,	// (0x00018eab) list_single_graphic_2heading_pane_fp_g2

0xea73,	// (0x0002228c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xea73,	// (0x0002228c) list_single_graphic_2heading_pane_fp_g3

0x569e,	// (0x00018eb7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x569e,	// (0x00018eb7) list_single_graphic_2heading_pane_fp_g4

0x56b2,	// (0x00018ecb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x56b2,	// (0x00018ecb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0002337e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0002337e) list_single_graphic_2heading_pane_fp_g

0x5ebd,	// (0x000196d6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5ebd,	// (0x000196d6) list_single_graphic_2heading_pane_fp_t1

0x570d,	// (0x00018f26) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x570d,	// (0x00018f26) list_single_graphic_2heading_pane_fp_t2

0x5ed3,	// (0x000196ec) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5ed3,	// (0x000196ec) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x00023460) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x00023460) list_single_graphic_2heading_pane_fp_t

0x507c,	// (0x00018895) fep_hwr_write_pane_g5_ParamLimits

0x507c,	// (0x00018895) fep_hwr_write_pane_g5

0x5088,	// (0x000188a1) fep_hwr_write_pane_g6_ParamLimits

0x5088,	// (0x000188a1) fep_hwr_write_pane_g6

0x5b62,	// (0x0001937b) eswt_shell_pane_ParamLimits

0x25cb,	// (0x00015de4) bg_popup_window_pane_cp18_ParamLimits

0x5b93,	// (0x000193ac) heading_pane_cp70

0x5c94,	// (0x000194ad) popup_eswt_tasktip_window_t1_ParamLimits

0xb3bd,	// (0x0001ebd6) aid_touch_tab_arrow_left

0xb3d3,	// (0x0001ebec) aid_touch_tab_arrow_right

0xa615,	// (0x0001de2e) title_pane_g3_ParamLimits

0xa615,	// (0x0001de2e) title_pane_g3

0xe209,	// (0x00021a22) set_value_pane_g1

0x9ca9,	// (0x0001d4c2) popup_toolbar_trans_pane_ParamLimits

0x5e03,	// (0x0001961c) aid_size_cell_tb_trans_pane_ParamLimits

0xe2b0,	// (0x00021ac9) bg_tb_trans_pane_ParamLimits

0x5e15,	// (0x0001962e) grid_tb_trans_pane_ParamLimits

0xc8ac,	// (0x000200c5) cont_note_pane_ParamLimits

0xc8ac,	// (0x000200c5) cont_note_pane

0xcb36,	// (0x0002034f) cont_snote2_single_text_pane_ParamLimits

0xcb36,	// (0x0002034f) cont_snote2_single_text_pane

0xcb36,	// (0x0002034f) cont_snote2_single_graphic_pane_ParamLimits

0xcb36,	// (0x0002034f) cont_snote2_single_graphic_pane

0x2bec,	// (0x00016405) cont_note_wait_pane_ParamLimits

0x2bec,	// (0x00016405) cont_note_wait_pane

0x2bec,	// (0x00016405) cont_note_image_pane_ParamLimits

0x2bec,	// (0x00016405) cont_note_image_pane

0x5ee9,	// (0x00019702) popup_note2_window_g1_ParamLimits

0x5ee9,	// (0x00019702) popup_note2_window_g1

0x5f1a,	// (0x00019733) popup_note2_window_t1_ParamLimits

0x5f1a,	// (0x00019733) popup_note2_window_t1

0x5f5f,	// (0x00019778) popup_note2_window_t2_ParamLimits

0x5f5f,	// (0x00019778) popup_note2_window_t2

0x5fa4,	// (0x000197bd) popup_note2_window_t3_ParamLimits

0x5fa4,	// (0x000197bd) popup_note2_window_t3

0x5fe9,	// (0x00019802) popup_note2_window_t4_ParamLimits

0x5fe9,	// (0x00019802) popup_note2_window_t4

0xc930,	// (0x00020149) popup_note2_window_t5_ParamLimits

0xc930,	// (0x00020149) popup_note2_window_t5

0x0004,

0xfc53,	// (0x0002346c) popup_note2_window_t_ParamLimits

0xfc53,	// (0x0002346c) popup_note2_window_t

0x6018,	// (0x00019831) popup_note2_image_window_g1_ParamLimits

0x6018,	// (0x00019831) popup_note2_image_window_g1

0x6024,	// (0x0001983d) popup_note2_image_window_g2_ParamLimits

0x6024,	// (0x0001983d) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x00023477) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x00023477) popup_note2_image_window_g

0x6036,	// (0x0001984f) popup_note2_image_window_t1_ParamLimits

0x6036,	// (0x0001984f) popup_note2_image_window_t1

0x604e,	// (0x00019867) popup_note2_image_window_t2_ParamLimits

0x604e,	// (0x00019867) popup_note2_image_window_t2

0x6066,	// (0x0001987f) popup_note2_image_window_t3_ParamLimits

0x6066,	// (0x0001987f) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x0002347c) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x0002347c) popup_note2_image_window_t

0x2bfa,	// (0x00016413) popup_note2_wait_window_g1_ParamLimits

0x2bfa,	// (0x00016413) popup_note2_wait_window_g1

0x6082,	// (0x0001989b) popup_note2_wait_window_g2_ParamLimits

0x6082,	// (0x0001989b) popup_note2_wait_window_g2

0x2c12,	// (0x0001642b) popup_note2_wait_window_g3_ParamLimits

0x2c12,	// (0x0001642b) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x00023483) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x00023483) popup_note2_wait_window_g

0x608e,	// (0x000198a7) popup_note2_wait_window_t1_ParamLimits

0x608e,	// (0x000198a7) popup_note2_wait_window_t1

0x60ac,	// (0x000198c5) popup_note2_wait_window_t2_ParamLimits

0x60ac,	// (0x000198c5) popup_note2_wait_window_t2

0x60ca,	// (0x000198e3) popup_note2_wait_window_t3_ParamLimits

0x60ca,	// (0x000198e3) popup_note2_wait_window_t3

0x60dc,	// (0x000198f5) popup_note2_wait_window_t4_ParamLimits

0x60dc,	// (0x000198f5) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x0002348a) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x0002348a) popup_note2_wait_window_t

0x60ee,	// (0x00019907) wait_bar2_pane_ParamLimits

0x60ee,	// (0x00019907) wait_bar2_pane

0x6106,	// (0x0001991f) popup_snote2_single_text_window_g1_ParamLimits

0x6106,	// (0x0001991f) popup_snote2_single_text_window_g1

0x612e,	// (0x00019947) popup_snote2_single_text_window_t1_ParamLimits

0x612e,	// (0x00019947) popup_snote2_single_text_window_t1

0x617a,	// (0x00019993) popup_snote2_single_text_window_t2_ParamLimits

0x617a,	// (0x00019993) popup_snote2_single_text_window_t2

0x61c6,	// (0x000199df) popup_snote2_single_text_window_t3_ParamLimits

0x61c6,	// (0x000199df) popup_snote2_single_text_window_t3

0x6207,	// (0x00019a20) popup_snote2_single_text_window_t4_ParamLimits

0x6207,	// (0x00019a20) popup_snote2_single_text_window_t4

0x623d,	// (0x00019a56) popup_snote2_single_text_window_t5_ParamLimits

0x623d,	// (0x00019a56) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x00023493) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x00023493) popup_snote2_single_text_window_t

0x6268,	// (0x00019a81) popup_snote2_single_graphic_window_g1_ParamLimits

0x6268,	// (0x00019a81) popup_snote2_single_graphic_window_g1

0x6290,	// (0x00019aa9) popup_snote2_single_graphic_window_g2_ParamLimits

0x6290,	// (0x00019aa9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x0002349e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x0002349e) popup_snote2_single_graphic_window_g

0x62b8,	// (0x00019ad1) popup_snote2_single_graphic_window_t1_ParamLimits

0x62b8,	// (0x00019ad1) popup_snote2_single_graphic_window_t1

0x6304,	// (0x00019b1d) popup_snote2_single_graphic_window_t2_ParamLimits

0x6304,	// (0x00019b1d) popup_snote2_single_graphic_window_t2

0x61c6,	// (0x000199df) popup_snote2_single_graphic_window_t3_ParamLimits

0x61c6,	// (0x000199df) popup_snote2_single_graphic_window_t3

0x6207,	// (0x00019a20) popup_snote2_single_graphic_window_t4_ParamLimits

0x6207,	// (0x00019a20) popup_snote2_single_graphic_window_t4

0x623d,	// (0x00019a56) popup_snote2_single_graphic_window_t5_ParamLimits

0x623d,	// (0x00019a56) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x000234a3) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x000234a3) popup_snote2_single_graphic_window_t

0x4a9c,	// (0x000182b5) clock_nsta_pane_cp2_t1

0x4a9c,	// (0x000182b5) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x000232b7) clock_nsta_pane_cp2_t

0xe2ca,	// (0x00021ae3) form_field_data_wide_pane_g1_ParamLimits

0xe2d6,	// (0x00021aef) form_field_data_wide_pane_g2_ParamLimits

0xe2d6,	// (0x00021aef) form_field_data_wide_pane_g2

0xe2e2,	// (0x00021afb) form_field_data_wide_pane_g3_ParamLimits

0xe2e2,	// (0x00021afb) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00022e6a) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00022e6a) form_field_data_wide_pane_g

0xbd83,	// (0x0001f59c) grid_touch_3_pane_ParamLimits

0xbd83,	// (0x0001f59c) grid_touch_3_pane

0xc2e9,	// (0x0001fb02) cell_touch_3_pane_ParamLimits

0xc2e9,	// (0x0001fb02) cell_touch_3_pane

0x4feb,	// (0x00018804) cell_touch_3_pane_g1

0x4feb,	// (0x00018804) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x0002333c) cell_touch_3_pane_g

0xc988,	// (0x000201a1) cont_query_data_pane

0xc990,	// (0x000201a9) cont_query_data_pane_cp1

0x6383,	// (0x00019b9c) button_value_adjust_pane_cp7

0x638b,	// (0x00019ba4) query_popup_pane_cp3

0x163f,	// (0x00014e58) bg_popup_sub_pane_cp22_ParamLimits

0xe8b2,	// (0x000220cb) navi_navi_volume_pane_cp2

0xe8cd,	// (0x000220e6) popup_side_volume_key_window_g2

0xe8dc,	// (0x000220f5) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00022f00) popup_side_volume_key_window_g

0xe8f9,	// (0x00022112) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00022f07) popup_side_volume_key_window_t

0x198c,	// (0x000151a5) popup_side_volume_key_window_ParamLimits

0xaaeb,	// (0x0001e304) list_double_graphic_pane_g4_ParamLimits

0xaaeb,	// (0x0001e304) list_double_graphic_pane_g4

0xbc11,	// (0x0001f42a) list_single_2heading_msg_pane_ParamLimits

0xbc11,	// (0x0001f42a) list_single_2heading_msg_pane

0xc335,	// (0x0001fb4e) list_single_2heading_msg_pane_g1_ParamLimits

0xc335,	// (0x0001fb4e) list_single_2heading_msg_pane_g1

0xc341,	// (0x0001fb5a) list_single_2heading_msg_pane_g2_ParamLimits

0xc341,	// (0x0001fb5a) list_single_2heading_msg_pane_g2

0xc354,	// (0x0001fb6d) list_single_2heading_msg_pane_g3_ParamLimits

0xc354,	// (0x0001fb6d) list_single_2heading_msg_pane_g3

0xc360,	// (0x0001fb79) list_single_2heading_msg_pane_g4_ParamLimits

0xc360,	// (0x0001fb79) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x000234ae) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x000234ae) list_single_2heading_msg_pane_g

0xc378,	// (0x0001fb91) list_single_2heading_msg_pane_t1_ParamLimits

0xc378,	// (0x0001fb91) list_single_2heading_msg_pane_t1

0xc3a0,	// (0x0001fbb9) list_single_2heading_msg_pane_t2_ParamLimits

0xc3a0,	// (0x0001fbb9) list_single_2heading_msg_pane_t2

0xc40b,	// (0x0001fc24) list_single_2heading_msg_pane_t3_ParamLimits

0xc40b,	// (0x0001fc24) list_single_2heading_msg_pane_t3

0x6488,	// (0x00019ca1) list_single_2heading_msg_pane_t4_ParamLimits

0x6488,	// (0x00019ca1) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x000234b7) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x000234b7) list_single_2heading_msg_pane_t

0xc70d,	// (0x0001ff26) title_pane_g4_ParamLimits

0xc70d,	// (0x0001ff26) title_pane_g4

0xe67e,	// (0x00021e97) title_pane_stacon_g3_ParamLimits

0xe67e,	// (0x00021e97) title_pane_stacon_g3

0x5e80,	// (0x00019699) list_single_2graphic_im_pane_g4_ParamLimits

0x5e80,	// (0x00019699) list_single_2graphic_im_pane_g4

0x365c,	// (0x00016e75) popup_side_volume_key_window_cp

0x3f78,	// (0x00017791) main_idle_act2_pane_t1

0xed69,	// (0x00022582) toolbar_button_pane_g10

0xa996,	// (0x0001e1af) popup_toolbar_window_cp1

0x4a8d,	// (0x000182a6) clock_nsta_pane_cp_t1

0x4a8d,	// (0x000182a6) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x000232b2) clock_nsta_pane_cp_t

0xe8b2,	// (0x000220cb) navi_navi_volume_pane_cp2_ParamLimits

0xe8c1,	// (0x000220da) popup_side_volume_key_window_g1_ParamLimits

0xe8cd,	// (0x000220e6) popup_side_volume_key_window_g2_ParamLimits

0xe8dc,	// (0x000220f5) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00022f00) popup_side_volume_key_window_g_ParamLimits

0xf070,	// (0x00022889) fep_hwr_aid_pane

0xf119,	// (0x00022932) bg_fep_hwr_top_pane_g4_ParamLimits

0x504c,	// (0x00018865) fep_hwr_top_pane_g1_ParamLimits

0x505e,	// (0x00018877) fep_hwr_top_pane_g2_ParamLimits

0xf139,	// (0x00022952) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x00023307) fep_hwr_top_pane_g_ParamLimits

0xf14e,	// (0x00022967) fep_hwr_top_text_pane_ParamLimits

0x3411,	// (0x00016c2a) aid_touch_tab_arrow_arrow_2

0x341a,	// (0x00016c33) aid_touch_tab_arrow_left_2

0xf084,	// (0x0002289d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xf0bb,	// (0x000228d4) fep_hwr_prediction_pane

0x51b4,	// (0x000189cd) fep_vkb_prediction_pane

0xc0a0,	// (0x0001f8b9) fep_vkb_side_pane_g3_ParamLimits

0xc0a0,	// (0x0001f8b9) fep_vkb_side_pane_g3

0xf262,	// (0x00022a7b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf2d3,	// (0x00022aec) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf2e0,	// (0x00022af9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x000233b6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf3a4,	// (0x00022bbd) fep_hwr_prediction_pane_g1

0xf3ae,	// (0x00022bc7) fep_hwr_prediction_pane_g2

0xf3b6,	// (0x00022bcf) fep_hwr_prediction_pane_g3

0xf3be,	// (0x00022bd7) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x000234c0) fep_hwr_prediction_pane_g

0x64ad,	// (0x00019cc6) fep_vkb_prediction_pane_g1

0x64b7,	// (0x00019cd0) fep_vkb_prediction_pane_g2

0x64bf,	// (0x00019cd8) fep_vkb_prediction_pane_g3

0x64c7,	// (0x00019ce0) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x000234c9) fep_vkb_prediction_pane_g

0xeefe,	// (0x00022717) slider_set_pane_g3

0xef12,	// (0x0002272b) slider_set_pane_g4

0xef2a,	// (0x00022743) slider_set_pane_g5

0xeefe,	// (0x00022717) slider_set_pane_g6

0xef40,	// (0x00022759) slider_set_pane_g7

0x3b0a,	// (0x00017323) slider_form_pane_g3

0x3b13,	// (0x0001732c) slider_form_pane_g4

0x3b1b,	// (0x00017334) slider_form_pane_g5

0x3b0a,	// (0x00017323) slider_form_pane_g6

0xbbb4,	// (0x0001f3cd) slider_form_pane_g7

0x427c,	// (0x00017a95) slider_set_pane_vc_g3

0x4285,	// (0x00017a9e) slider_set_pane_vc_g4

0x428e,	// (0x00017aa7) slider_set_pane_vc_g5

0x427c,	// (0x00017a95) slider_set_pane_vc_g6

0x4297,	// (0x00017ab0) slider_set_pane_vc_g7

0x473c,	// (0x00017f55) slider_form_pane_vc_g1

0x4745,	// (0x00017f5e) slider_form_pane_vc_g2

0x474e,	// (0x00017f67) slider_form_pane_vc_g3

0x473c,	// (0x00017f55) slider_form_pane_vc_g4

0x4757,	// (0x00017f70) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00023284) slider_form_pane_vc_g

0xe045,	// (0x0002185e) main_idle_act3_pane

0x64cf,	// (0x00019ce8) ai3_links_pane

0xc479,	// (0x0001fc92) popup_ai3_data_window_ParamLimits

0xc479,	// (0x0001fc92) popup_ai3_data_window

0xc6ef,	// (0x0001ff08) grid_ai3_links_pane

0xc497,	// (0x0001fcb0) cell_ai3_links_pane_ParamLimits

0xc497,	// (0x0001fcb0) cell_ai3_links_pane

0x6510,	// (0x00019d29) bg_popup_sub_pane_cp11

0x651d,	// (0x00019d36) cell_ai3_links_pane_g1

0xc6ef,	// (0x0001ff08) bg_popup_sub_pane_cp12

0x6542,	// (0x00019d5b) heading_ai3_data_pane

0x654a,	// (0x00019d63) list_ai3_gene_pane

0x6556,	// (0x00019d6f) popup_ai3_data_window_g1

0x655e,	// (0x00019d77) heading_ai3_data_pane_g1

0x6566,	// (0x00019d7f) heading_ai3_data_pane_t1

0x6574,	// (0x00019d8d) list_double_ai3_gene_pane_ParamLimits

0x6574,	// (0x00019d8d) list_double_ai3_gene_pane

0x6581,	// (0x00019d9a) list_single_ai3_gene_pane_ParamLimits

0x6581,	// (0x00019d9a) list_single_ai3_gene_pane

0x4fb0,	// (0x000187c9) list_highlight_pane_cp7_ParamLimits

0x4fb0,	// (0x000187c9) list_highlight_pane_cp7

0x658e,	// (0x00019da7) list_single_a13_gene_pane_t1_ParamLimits

0x658e,	// (0x00019da7) list_single_a13_gene_pane_t1

0x65a5,	// (0x00019dbe) list_single_ai3_gene_pane_g1

0x65ae,	// (0x00019dc7) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x000234d2) list_single_ai3_gene_pane_g

0x65b6,	// (0x00019dcf) list_double_ai3_gene_pane_g1_ParamLimits

0x65b6,	// (0x00019dcf) list_double_ai3_gene_pane_g1

0x65c2,	// (0x00019ddb) list_double_ai3_gene_pane_t1_ParamLimits

0x65c2,	// (0x00019ddb) list_double_ai3_gene_pane_t1

0x65de,	// (0x00019df7) list_double_ai3_gene_pane_t2_ParamLimits

0x65de,	// (0x00019df7) list_double_ai3_gene_pane_t2

0x65f3,	// (0x00019e0c) list_double_ai3_gene_pane_t3_ParamLimits

0x65f3,	// (0x00019e0c) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x000234d7) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x000234d7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x639c,	// (0x00019bb5) aid_size_min_col_2

0xc31f,	// (0x0001fb38) aid_size_min_msg_ParamLimits

0xc31f,	// (0x0001fb38) aid_size_min_msg

0xc0b4,	// (0x0001f8cd) fep_vkb_top_text_pane_g2_ParamLimits

0xc0b4,	// (0x0001f8cd) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00023337) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00023337) fep_vkb_top_text_pane_g

0xe045,	// (0x0002185e) main_hc_apps_shell_pane

0x6610,	// (0x00019e29) grid_hc_apps_pane_ParamLimits

0x6610,	// (0x00019e29) grid_hc_apps_pane

0x6622,	// (0x00019e3b) list_hc_apps_pane

0x662a,	// (0x00019e43) scroll_pane_cp37_ParamLimits

0x662a,	// (0x00019e43) scroll_pane_cp37

0xc4b1,	// (0x0001fcca) cell_hc_apps_pane_ParamLimits

0xc4b1,	// (0x0001fcca) cell_hc_apps_pane

0xc577,	// (0x0001fd90) cell_hc_apps_pane_g1_ParamLimits

0xc577,	// (0x0001fd90) cell_hc_apps_pane_g1

0x6716,	// (0x00019f2f) cell_hc_apps_pane_g2_ParamLimits

0x6716,	// (0x00019f2f) cell_hc_apps_pane_g2

0x6732,	// (0x00019f4b) cell_hc_apps_pane_g3_ParamLimits

0x6732,	// (0x00019f4b) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x000234de) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x000234de) cell_hc_apps_pane_g

0xc5a3,	// (0x0001fdbc) cell_hc_apps_pane_t1_ParamLimits

0xc5a3,	// (0x0001fdbc) cell_hc_apps_pane_t1

0xc8ac,	// (0x000200c5) grid_highlight_pane_cp10_ParamLimits

0xc8ac,	// (0x000200c5) grid_highlight_pane_cp10

0xc5e1,	// (0x0001fdfa) list_single_hc_apps_pane_ParamLimits

0xc5e1,	// (0x0001fdfa) list_single_hc_apps_pane

0xc614,	// (0x0001fe2d) list_single_hc_apps_pane_g1

0xc62d,	// (0x0001fe46) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x000234e5) list_single_hc_apps_pane_g

0xc646,	// (0x0001fe5f) list_single_hc_apps_pane_g2_copy1

0xc662,	// (0x0001fe7b) list_single_hc_apps_pane_t1

0xc75f,	// (0x0001ff78) bg_set_opt_pane_cp_ParamLimits

0xe168,	// (0x00021981) setting_slider_pane_t1_ParamLimits

0xe181,	// (0x0002199a) setting_slider_pane_t2_ParamLimits

0xe19b,	// (0x000219b4) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00022d52) setting_slider_pane_t_ParamLimits

0xe1b3,	// (0x000219cc) slider_set_pane_ParamLimits

0xeb4c,	// (0x00022365) control_pane_g5_ParamLimits

0xeb4c,	// (0x00022365) control_pane_g5

0x393d,	// (0x00017156) slider_set_pane_g1_ParamLimits

0xeef2,	// (0x0002270b) slider_set_pane_g2_ParamLimits

0xeefe,	// (0x00022717) slider_set_pane_g3_ParamLimits

0xef12,	// (0x0002272b) slider_set_pane_g4_ParamLimits

0xef2a,	// (0x00022743) slider_set_pane_g5_ParamLimits

0xeefe,	// (0x00022717) slider_set_pane_g6_ParamLimits

0xef40,	// (0x00022759) slider_set_pane_g7_ParamLimits

0xf935,	// (0x0002314e) slider_set_pane_g_ParamLimits

0x1a71,	// (0x0001528a) navi_icon_text_pane_ParamLimits

0xb384,	// (0x0001eb9d) aid_fill_nsta_2_ParamLimits

0xb3bd,	// (0x0001ebd6) aid_touch_tab_arrow_left_ParamLimits

0xb3d3,	// (0x0001ebec) aid_touch_tab_arrow_right_ParamLimits

0xb46e,	// (0x0001ec87) clock_nsta_pane_ParamLimits

0xb932,	// (0x0001f14b) navi_icon_pane_g1_ParamLimits

0xb93e,	// (0x0001f157) navi_text_pane_t1_ParamLimits

0xbe5c,	// (0x0001f675) navi_icon_text_pane_g1_ParamLimits

0xbe68,	// (0x0001f681) navi_icon_text_pane_t1_ParamLimits

0xc614,	// (0x0001fe2d) list_single_hc_apps_pane_g1_ParamLimits

0xc62d,	// (0x0001fe46) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x000234e5) list_single_hc_apps_pane_g_ParamLimits

0xc646,	// (0x0001fe5f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc662,	// (0x0001fe7b) list_single_hc_apps_pane_t1_ParamLimits

0x93fb,	// (0x0001cc14) popup_toolbar2_fixed_window_ParamLimits

0x93fb,	// (0x0001cc14) popup_toolbar2_fixed_window

0x9c9f,	// (0x0001d4b8) popup_toolbar2_float_window

0xc6ef,	// (0x0001ff08) bg_popup_sub_pane_cp27

0x684f,	// (0x0001a068) grid_toolbar2_float_pane

0xc6ef,	// (0x0001ff08) bg_popup_sub_pane_cp26

0x684f,	// (0x0001a068) grid_toolbar2_fixed_pane

0xc690,	// (0x0001fea9) cell_toolbar2_fixed_pane_ParamLimits

0xc690,	// (0x0001fea9) cell_toolbar2_fixed_pane

0xc6aa,	// (0x0001fec3) cell_toolbar2_fixed_pane_g1

0x6870,	// (0x0001a089) toolbar2_fixed_button_pane

0x24a7,	// (0x00015cc0) toolbar2_fixed_button_pane_g1

0x24b7,	// (0x00015cd0) toolbar2_fixed_button_pane_g2

0x24af,	// (0x00015cc8) toolbar2_fixed_button_pane_g3

0x24c7,	// (0x00015ce0) toolbar2_fixed_button_pane_g4

0x24bf,	// (0x00015cd8) toolbar2_fixed_button_pane_g5

0x24cf,	// (0x00015ce8) toolbar2_fixed_button_pane_g6

0x24d7,	// (0x00015cf0) toolbar2_fixed_button_pane_g7

0x24e7,	// (0x00015d00) toolbar2_fixed_button_pane_g8

0x24df,	// (0x00015cf8) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x00023050) toolbar2_fixed_button_pane_g

0x6878,	// (0x0001a091) cell_toolbar2_float_pane_ParamLimits

0x6878,	// (0x0001a091) cell_toolbar2_float_pane

0x6889,	// (0x0001a0a2) cell_toolbar2_float_pane_g1

0x6870,	// (0x0001a089) toolbar2_fixed_button_pane_cp

0xbf9c,	// (0x0001f7b5) fep_vkb_accented_list_pane_ParamLimits

0xbf9c,	// (0x0001f7b5) fep_vkb_accented_list_pane

0xf242,	// (0x00022a5b) bg_popup_fep_shadow_pane_g9

0x1c00,	// (0x00015419) bg_popup_fep_shadow_pane_cp3

0xe465,	// (0x00021c7e) list_accented_list_pane

0x6892,	// (0x0001a0ab) list_single_accented_list_pane_ParamLimits

0x6892,	// (0x0001a0ab) list_single_accented_list_pane

0x1c00,	// (0x00015419) list_highlight_pane_cp10

0x68a3,	// (0x0001a0bc) list_single_accented_list_pane_t1

0x9bbb,	// (0x0001d3d4) popup_slider_window_ParamLimits

0x9bbb,	// (0x0001d3d4) popup_slider_window

0x6393,	// (0x00019bac) aid_indentation_list_msg

0xce7e,	// (0x00020697) bg_popup_window_pane_cp19

0x69df,	// (0x0001a1f8) popup_slider_window_g1

0x69fb,	// (0x0001a214) popup_slider_window_g2

0x6a17,	// (0x0001a230) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x000234ea) popup_slider_window_g

0x6a7d,	// (0x0001a296) popup_slider_window_t1

0x6af1,	// (0x0001a30a) small_volume_slider_vertical_pane

0x4feb,	// (0x00018804) small_volume_slider_vertical_pane_g1

0x4feb,	// (0x00018804) small_volume_slider_vertical_pane_g2

0x6b0d,	// (0x0001a326) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x000234fc) small_volume_slider_vertical_pane_g

0x9365,	// (0x0001cb7e) area_side_right_pane_ParamLimits

0x9365,	// (0x0001cb7e) area_side_right_pane

0x9f95,	// (0x0001d7ae) aid_size_side_button_ParamLimits

0x9f95,	// (0x0001d7ae) aid_size_side_button

0x9fae,	// (0x0001d7c7) grid_sctrl_middle_pane_ParamLimits

0x9fae,	// (0x0001d7c7) grid_sctrl_middle_pane

0xf3cf,	// (0x00022be8) sctrl_sk_bottom_pane

0xf3e0,	// (0x00022bf9) sctrl_sk_top_pane

0xf3f2,	// (0x00022c0b) aid_touch_sctrl_top

0xf3ff,	// (0x00022c18) bg_sctrl_sk_pane_ParamLimits

0xf3ff,	// (0x00022c18) bg_sctrl_sk_pane

0xf40d,	// (0x00022c26) sctrl_sk_top_pane_g1

0xf41a,	// (0x00022c33) sctrl_sk_top_pane_t1

0xf3f2,	// (0x00022c0b) aid_touch_sctrl_bottom

0xf3ff,	// (0x00022c18) bg_sctrl_sk_pane_cp_ParamLimits

0xf3ff,	// (0x00022c18) bg_sctrl_sk_pane_cp

0xf435,	// (0x00022c4e) sctrl_sk_bottom_pane_g1

0xf41a,	// (0x00022c33) sctrl_sk_bottom_pane_t1

0x9fc8,	// (0x0001d7e1) cell_sctrl_middle_pane_ParamLimits

0x9fc8,	// (0x0001d7e1) cell_sctrl_middle_pane

0x9fdb,	// (0x0001d7f4) aid_touch_sctrl_middle_ParamLimits

0x9fdb,	// (0x0001d7f4) aid_touch_sctrl_middle

0x9fe8,	// (0x0001d801) bg_sctrl_middle_pane_ParamLimits

0x9fe8,	// (0x0001d801) bg_sctrl_middle_pane

0x0317,	// (0x00013b30) cell_sctrl_middle_pane_g1_ParamLimits

0x0317,	// (0x00013b30) cell_sctrl_middle_pane_g1

0x9ff6,	// (0x0001d80f) cell_sctrl_middle_pane_g2_ParamLimits

0x9ff6,	// (0x0001d80f) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x00023508) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x00023508) cell_sctrl_middle_pane_g

0x24a7,	// (0x00015cc0) bg_sctrl_middle_pane_g1

0x24af,	// (0x00015cc8) bg_sctrl_middle_pane_g2

0x24b7,	// (0x00015cd0) bg_sctrl_middle_pane_g3

0x24bf,	// (0x00015cd8) bg_sctrl_middle_pane_g4

0x24c7,	// (0x00015ce0) bg_sctrl_middle_pane_g5

0x24cf,	// (0x00015ce8) bg_sctrl_middle_pane_g6

0x24d7,	// (0x00015cf0) bg_sctrl_middle_pane_g7

0x24df,	// (0x00015cf8) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x0002350d) bg_sctrl_middle_pane_g

0x24e7,	// (0x00015d00) bg_sctrl_middle_pane_g8_copy1

0x24a7,	// (0x00015cc0) bg_sctrl_sk_pane_g1

0x24b7,	// (0x00015cd0) bg_sctrl_sk_pane_g2

0x24af,	// (0x00015cc8) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x00023050) bg_sctrl_sk_pane_g

0xccf4,	// (0x0002050d) aid_size_touch_scroll_bar

0x24c7,	// (0x00015ce0) bg_sctrl_sk_pane_g4

0x24bf,	// (0x00015cd8) bg_sctrl_sk_pane_g5

0x24cf,	// (0x00015ce8) bg_sctrl_sk_pane_g6

0x24d7,	// (0x00015cf0) bg_sctrl_sk_pane_g7

0x24e7,	// (0x00015d00) bg_sctrl_sk_pane_g8

0x24df,	// (0x00015cf8) bg_sctrl_sk_pane_g9

0xebab,	// (0x000223c4) popup_fep_china_hwr2_fs_candidate_window

0x966d,	// (0x0001ce86) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x966d,	// (0x0001ce86) popup_fep_china_hwr2_fs_control_window

0xf262,	// (0x00022a7b) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x00023503) sctrl_sk_top_pane_g

0xcf36,	// (0x0002074f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcf36,	// (0x0002074f) aid_fep_china_hwr2_fs_cell

0xcf4c,	// (0x00020765) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcf4c,	// (0x00020765) bg_popup_fep_shadow_pane_cp4

0xcf63,	// (0x0002077c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcf63,	// (0x0002077c) bg_popup_fep_shadow_pane_cp5

0xcf75,	// (0x0002078e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf75,	// (0x0002078e) popup_fep_china_hwr2_fs_control_bar_grid

0xcf89,	// (0x000207a2) popup_fep_china_hwr2_fs_control_funtion_grid

0x6b6c,	// (0x0001a385) aid_fep_china_hwr2_fs_candi_cell

0xc6ef,	// (0x0001ff08) bg_popup_fep_shadow_pane_cp6

0x6b76,	// (0x0001a38f) popup_fep_china_hwr2_fs_candidate_grid

0xcf91,	// (0x000207aa) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf91,	// (0x000207aa) cell_fep_china_hwr2_fs_funtion_grid

0x4feb,	// (0x00018804) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6b98,	// (0x0001a3b1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6b98,	// (0x0001a3b1) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6ba6,	// (0x0001a3bf) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6ba6,	// (0x0001a3bf) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x0002351e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x0002351e) cell_fep_china_hwr2_fs_funtion_grid_g

0xcfa9,	// (0x000207c2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcfa9,	// (0x000207c2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcfbe,	// (0x000207d7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcfbe,	// (0x000207d7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x00023523) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x00023523) cell_fep_china_hwr2_fs_funtion_grid_t

0x6bed,	// (0x0001a406) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6bf5,	// (0x0001a40e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6bfd,	// (0x0001a416) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x00023528) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6c05,	// (0x0001a41e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6c05,	// (0x0001a41e) cell_fep_china_hwr2_fs_candidate_grid

0x6c24,	// (0x0001a43d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6c2c,	// (0x0001a445) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4feb,	// (0x00018804) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4feb,	// (0x00018804) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x0002333c) cell_fep_china_hwr2_fs_candidate_grid_g

0x6c34,	// (0x0001a44d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2055,	// (0x0001586e) clock_nsta_pane_cp_24_ParamLimits

0x2055,	// (0x0001586e) clock_nsta_pane_cp_24

0x20d5,	// (0x000158ee) indicator_nsta_pane_cp_24_ParamLimits

0x20d5,	// (0x000158ee) indicator_nsta_pane_cp_24

0x326f,	// (0x00016a88) heading_pane_g1

0x0001,

0xf89c,	// (0x000230b5) heading_pane_g

0x3dbf,	// (0x000175d8) grid_sct_catagory_button_pane

0x3df1,	// (0x0001760a) scroll_pane_cp5_ParamLimits

0x4bf8,	// (0x00018411) button_value_adjust_pane_cp5_ParamLimits

0x4bf8,	// (0x00018411) button_value_adjust_pane_cp5

0x4cfe,	// (0x00018517) form2_midp_time_pane_ParamLimits

0x6c42,	// (0x0001a45b) cell_sct_catagory_button_pane_ParamLimits

0x6c42,	// (0x0001a45b) cell_sct_catagory_button_pane

0x4fb0,	// (0x000187c9) bg_button_pane_cp01_ParamLimits

0x4fb0,	// (0x000187c9) bg_button_pane_cp01

0x4feb,	// (0x00018804) cell_sct_catagory_button_pane_g1

0x9c3c,	// (0x0001d455) popup_tb_extension_window

0xcfda,	// (0x000207f3) aid_size_cell_ext_ParamLimits

0xcfda,	// (0x000207f3) aid_size_cell_ext

0xcb36,	// (0x0002034f) bg_tb_trans_pane_cp1_ParamLimits

0xcb36,	// (0x0002034f) bg_tb_trans_pane_cp1

0xd000,	// (0x00020819) grid_tb_ext_pane_ParamLimits

0xd000,	// (0x00020819) grid_tb_ext_pane

0xd03d,	// (0x00020856) cell_tb_ext_pane_ParamLimits

0xd03d,	// (0x00020856) cell_tb_ext_pane

0xd065,	// (0x0002087e) cell_tb_ext_pane_g1_ParamLimits

0xd065,	// (0x0002087e) cell_tb_ext_pane_g1

0x6cd6,	// (0x0001a4ef) cell_tb_ext_pane_t1

0xc8ac,	// (0x000200c5) list_highlight_pane_cp11_ParamLimits

0xc8ac,	// (0x000200c5) list_highlight_pane_cp11

0x9410,	// (0x0001cc29) popup_uni_indicator_window_ParamLimits

0x9410,	// (0x0001cc29) popup_uni_indicator_window

0xe2b0,	// (0x00021ac9) bg_popup_sub_pane_cp14

0x6cf1,	// (0x0001a50a) list_uniindi_pane

0x6cfd,	// (0x0001a516) uniindi_top_pane

0xc8ac,	// (0x000200c5) bg_uniindi_top_pane

0x6d1e,	// (0x0001a537) uniindi_top_pane_g1

0x6d34,	// (0x0001a54d) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x0002352f) uniindi_top_pane_g

0x6d5e,	// (0x0001a577) uniindi_top_pane_t1

0x6d8a,	// (0x0001a5a3) list_single_uniindi_pane_ParamLimits

0x6d8a,	// (0x0001a5a3) list_single_uniindi_pane

0x4feb,	// (0x00018804) bg_uniindi_top_pane_g1

0x6d9d,	// (0x0001a5b6) list_single_uniindi_pane_g1

0x6db0,	// (0x0001a5c9) list_single_uniindi_pane_t1

0xe045,	// (0x0002185e) control_bg_pane

0x6dd5,	// (0x0001a5ee) bg_sctrl_sk_pane_cp1

0x6dde,	// (0x0001a5f7) bg_sctrl_sk_pane_cp2

0x6de7,	// (0x0001a600) control_bg_pane_g1

0x6df0,	// (0x0001a609) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x00023538) control_bg_pane_g

0x4a30,	// (0x00018249) cell_indicator_nsta_pane_g1_ParamLimits

0xbdc0,	// (0x0001f5d9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x000232a0) cell_indicator_nsta_pane_g_ParamLimits

0x4d8b,	// (0x000185a4) form2_midp_time_pane_t1_ParamLimits

0xee6c,	// (0x00022685) main_idle_act4_pane_ParamLimits

0xee6c,	// (0x00022685) main_idle_act4_pane

0x9c3c,	// (0x0001d455) popup_tb_extension_window_ParamLimits

0xd025,	// (0x0002083e) tb_ext_find_pane_ParamLimits

0xd025,	// (0x0002083e) tb_ext_find_pane

0x6df9,	// (0x0001a612) ai_gene_pane_1_cp1

0x1d4a,	// (0x00015563) ai_gene_pane_2_cp1

0x6e01,	// (0x0001a61a) list_single_idle_plugin_calendar_pane

0x6e0a,	// (0x0001a623) list_single_idle_plugin_notification_pane

0x6e13,	// (0x0001a62c) list_single_idle_plugin_player_pane

0xd082,	// (0x0002089b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd082,	// (0x0002089b) list_single_idle_plugin_shortcut_pane

0xd0aa,	// (0x000208c3) main_idle_act4_pane_t1

0xd0c2,	// (0x000208db) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x0002353d) main_idle_act4_pane_t

0xd0da,	// (0x000208f3) middle_sk_idle_act4_pane_ParamLimits

0xd0da,	// (0x000208f3) middle_sk_idle_act4_pane

0xd0f6,	// (0x0002090f) popup_clock_digital_analogue_window_cp2

0xd11d,	// (0x00020936) shortcut_wheel_idle_act4_pane_ParamLimits

0xd11d,	// (0x00020936) shortcut_wheel_idle_act4_pane

0x4feb,	// (0x00018804) shortcut_wheel_idle_act4_pane_g1

0x4feb,	// (0x00018804) shortcut_wheel_idle_act4_pane_g2

0x4feb,	// (0x00018804) shortcut_wheel_idle_act4_pane_g3

0x4feb,	// (0x00018804) shortcut_wheel_idle_act4_pane_g4

0x4feb,	// (0x00018804) shortcut_wheel_idle_act4_pane_g5

0x6ea6,	// (0x0001a6bf) shortcut_wheel_idle_act4_pane_g6

0x6eae,	// (0x0001a6c7) shortcut_wheel_idle_act4_pane_g7

0x6eb6,	// (0x0001a6cf) shortcut_wheel_idle_act4_pane_g8

0x6ebe,	// (0x0001a6d7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x00023542) shortcut_wheel_idle_act4_pane_g

0xc6bf,	// (0x0001fed8) middle_sk_idle_act4_pane_g1_ParamLimits

0xc6bf,	// (0x0001fed8) middle_sk_idle_act4_pane_g1

0xd19a,	// (0x000209b3) middle_sk_idle_act4_pane_g2_ParamLimits

0xd19a,	// (0x000209b3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x00023565) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x00023565) middle_sk_idle_act4_pane_g

0xd1b2,	// (0x000209cb) middle_sk_idle_act4_pane_t1_ParamLimits

0xd1b2,	// (0x000209cb) middle_sk_idle_act4_pane_t1

0xd1e1,	// (0x000209fa) grid_ai_shortcut_pane_ParamLimits

0xd1e1,	// (0x000209fa) grid_ai_shortcut_pane

0xd1fe,	// (0x00020a17) list_highlight_pane_cp16_ParamLimits

0xd1fe,	// (0x00020a17) list_highlight_pane_cp16

0xd20b,	// (0x00020a24) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd20b,	// (0x00020a24) list_single_idle_plugin_shortcut_pane_g1

0xd217,	// (0x00020a30) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd217,	// (0x00020a30) list_single_idle_plugin_shortcut_pane_g2

0xd235,	// (0x00020a4e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd235,	// (0x00020a4e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x0002356a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x0002356a) list_single_idle_plugin_shortcut_pane_g

0xd24a,	// (0x00020a63) cell_ai_shortcut_pane_ParamLimits

0xd24a,	// (0x00020a63) cell_ai_shortcut_pane

0xd260,	// (0x00020a79) cell_ai_shortcut_pane_g1_ParamLimits

0xd260,	// (0x00020a79) cell_ai_shortcut_pane_g1

0x6df9,	// (0x0001a612) ai_gene_pane_1_cp2

0x6fef,	// (0x0001a808) ai_gene_pane_2_cp2

0x6ff7,	// (0x0001a810) list_highlight_pane_cp15

0x7000,	// (0x0001a819) list_single_idle_plugin_calendar_pane_g1

0x6ff7,	// (0x0001a810) list_highlight_pane_cp17

0x7008,	// (0x0001a821) list_single_idle_plugin_calendar_pane_g1_copy1

0x7010,	// (0x0001a829) list_single_idle_plugin_player_pane_g1

0x4026,	// (0x0001783f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x00023571) list_single_idle_plugin_player_pane_g

0x7018,	// (0x0001a831) list_single_idle_plugin_player_pane_t1

0x7026,	// (0x0001a83f) list_single_idle_plugin_player_pane_t2

0x7034,	// (0x0001a84d) list_single_idle_plugin_player_pane_t3

0x7042,	// (0x0001a85b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x00023576) list_single_idle_plugin_player_pane_t

0x7050,	// (0x0001a869) wait_bar_pane_cp15

0x7058,	// (0x0001a871) grid_ai_notification_pane

0x4026,	// (0x0001783f) list_single_idle_plugin_notification_pane_g1

0xd282,	// (0x00020a9b) cell_ai_notification_pane_ParamLimits

0xd282,	// (0x00020a9b) cell_ai_notification_pane

0x706e,	// (0x0001a887) cell_ai_notification_pane_g1

0x7076,	// (0x0001a88f) cell_ai_notification_pane_t1

0xd28f,	// (0x00020aa8) tb_ext_find_button_pane

0xd297,	// (0x00020ab0) tb_ext_find_pane_g1

0xd29f,	// (0x00020ab8) tb_ext_find_pane_t1

0x153a,	// (0x00014d53) tb_ext_find_button_pane_g1

0x70a2,	// (0x0001a8bb) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x0002357f) tb_ext_find_button_pane_g

0xd0aa,	// (0x000208c3) main_idle_act4_pane_t1_ParamLimits

0xd0c2,	// (0x000208db) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x0002353d) main_idle_act4_pane_t_ParamLimits

0xd0f6,	// (0x0002090f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd10d,	// (0x00020926) sat_plugin_idle_act4_pane_ParamLimits

0xd10d,	// (0x00020926) sat_plugin_idle_act4_pane

0xd2ad,	// (0x00020ac6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd2ad,	// (0x00020ac6) sat_plugin_idle_act4_pane_t1

0xd2c5,	// (0x00020ade) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd2c5,	// (0x00020ade) sat_plugin_idle_act4_pane_t2

0xd2dd,	// (0x00020af6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd2dd,	// (0x00020af6) sat_plugin_idle_act4_pane_t3

0xd2f5,	// (0x00020b0e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd2f5,	// (0x00020b0e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x00023584) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x00023584) sat_plugin_idle_act4_pane_t

0xe10a,	// (0x00021923) popup_battery_window_ParamLimits

0xe10a,	// (0x00021923) popup_battery_window

0xc8ac,	// (0x000200c5) bg_popup_sub_pane_cp25_ParamLimits

0xc8ac,	// (0x000200c5) bg_popup_sub_pane_cp25

0x70f7,	// (0x0001a910) popup_battery_window_g1_ParamLimits

0x70f7,	// (0x0001a910) popup_battery_window_g1

0x7103,	// (0x0001a91c) popup_battery_window_t1_ParamLimits

0x7103,	// (0x0001a91c) popup_battery_window_t1

0x7115,	// (0x0001a92e) popup_battery_window_t2_ParamLimits

0x7115,	// (0x0001a92e) popup_battery_window_t2

0x0001,

0xfd74,	// (0x0002358d) popup_battery_window_t_ParamLimits

0xfd74,	// (0x0002358d) popup_battery_window_t

0xb26c,	// (0x0001ea85) midp_canvas_pane_ParamLimits

0xb2c8,	// (0x0001eae1) midp_keypad_pane_ParamLimits

0xb2c8,	// (0x0001eae1) midp_keypad_pane

0x1f2f,	// (0x00015748) main_midp_pane_ParamLimits

0x4aab,	// (0x000182c4) signal_pane_g2_cp_ParamLimits

0xd30d,	// (0x00020b26) aid_size_cell_midp_keypad_ParamLimits

0xd30d,	// (0x00020b26) aid_size_cell_midp_keypad

0xd32b,	// (0x00020b44) midp_keyp_game_grid_pane_ParamLimits

0xd32b,	// (0x00020b44) midp_keyp_game_grid_pane

0xd352,	// (0x00020b6b) midp_keyp_rocker_pane_ParamLimits

0xd352,	// (0x00020b6b) midp_keyp_rocker_pane

0xd3a1,	// (0x00020bba) midp_keyp_sk_left_pane_ParamLimits

0xd3a1,	// (0x00020bba) midp_keyp_sk_left_pane

0xd3f7,	// (0x00020c10) midp_keyp_sk_right_pane_ParamLimits

0xd3f7,	// (0x00020c10) midp_keyp_sk_right_pane

0xc6ef,	// (0x0001ff08) bg_button_pane_cp03

0xd44d,	// (0x00020c66) midp_keyp_sk_left_pane_g1

0xc6ef,	// (0x0001ff08) bg_button_pane_cp04

0xd44d,	// (0x00020c66) midp_keyp_sk_right_pane_g1

0x4feb,	// (0x00018804) midp_keyp_rocker_pane_g1

0xd455,	// (0x00020c6e) keyp_game_cell_pane_ParamLimits

0xd455,	// (0x00020c6e) keyp_game_cell_pane

0xc6ef,	// (0x0001ff08) bg_button_pane_cp02

0xd47b,	// (0x00020c94) keyp_game_cell_pane_g1

0x93a7,	// (0x0001cbc0) popup_fep_vkb2_window_ParamLimits

0x93a7,	// (0x0001cbc0) popup_fep_vkb2_window

0xa002,	// (0x0001d81b) aid_size_cell_vkb2_ParamLimits

0xa002,	// (0x0001d81b) aid_size_cell_vkb2

0xa02e,	// (0x0001d847) popup_fep_vkb2_window_g1_ParamLimits

0xa02e,	// (0x0001d847) popup_fep_vkb2_window_g1

0xa07e,	// (0x0001d897) vkb2_area_bottom_pane_ParamLimits

0xa07e,	// (0x0001d897) vkb2_area_bottom_pane

0xa0da,	// (0x0001d8f3) vkb2_area_keypad_pane_ParamLimits

0xa0da,	// (0x0001d8f3) vkb2_area_keypad_pane

0xa128,	// (0x0001d941) vkb2_area_top_pane_ParamLimits

0xa128,	// (0x0001d941) vkb2_area_top_pane

0xa1b5,	// (0x0001d9ce) vkb2_top_entry_pane_ParamLimits

0xa1b5,	// (0x0001d9ce) vkb2_top_entry_pane

0xa1e2,	// (0x0001d9fb) vkb2_top_grid_left_pane_ParamLimits

0xa1e2,	// (0x0001d9fb) vkb2_top_grid_left_pane

0xa203,	// (0x0001da1c) vkb2_top_grid_right_pane_ParamLimits

0xa203,	// (0x0001da1c) vkb2_top_grid_right_pane

0xf47c,	// (0x00022c95) vkb2_cell_keypad_pane_ParamLimits

0xf47c,	// (0x00022c95) vkb2_cell_keypad_pane

0xa24b,	// (0x0001da64) vkb2_area_bottom_grid_pane_ParamLimits

0xa24b,	// (0x0001da64) vkb2_area_bottom_grid_pane

0xa275,	// (0x0001da8e) vkb2_area_bottom_pane_g1_ParamLimits

0xa275,	// (0x0001da8e) vkb2_area_bottom_pane_g1

0xa29b,	// (0x0001dab4) vkb2_area_bottom_pane_g2_ParamLimits

0xa29b,	// (0x0001dab4) vkb2_area_bottom_pane_g2

0xa2cc,	// (0x0001dae5) vkb2_area_bottom_pane_g3_ParamLimits

0xa2cc,	// (0x0001dae5) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x00023592) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x00023592) vkb2_area_bottom_pane_g

0x00b8,	// (0x000138d1) vkb2_top_cell_left_pane_ParamLimits

0x00b8,	// (0x000138d1) vkb2_top_cell_left_pane

0xd484,	// (0x00020c9d) vkb2_top_entry_pane_g1_ParamLimits

0xd484,	// (0x00020c9d) vkb2_top_entry_pane_g1

0xd492,	// (0x00020cab) vkb2_top_entry_pane_t1_ParamLimits

0xd492,	// (0x00020cab) vkb2_top_entry_pane_t1

0x72bf,	// (0x0001aad8) vkb2_top_entry_pane_t2_ParamLimits

0x72bf,	// (0x0001aad8) vkb2_top_entry_pane_t2

0x72f1,	// (0x0001ab0a) vkb2_top_entry_pane_t3_ParamLimits

0x72f1,	// (0x0001ab0a) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x00023599) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x00023599) vkb2_top_entry_pane_t

0xa336,	// (0x0001db4f) vkb2_top_grid_right_pane_g1_ParamLimits

0xa336,	// (0x0001db4f) vkb2_top_grid_right_pane_g1

0x011b,	// (0x00013934) vkb2_top_grid_right_pane_g2_ParamLimits

0x011b,	// (0x00013934) vkb2_top_grid_right_pane_g2

0x0133,	// (0x0001394c) vkb2_top_grid_right_pane_g3_ParamLimits

0x0133,	// (0x0001394c) vkb2_top_grid_right_pane_g3

0xa34c,	// (0x0001db65) vkb2_top_grid_right_pane_g4_ParamLimits

0xa34c,	// (0x0001db65) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x000235a0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x000235a0) vkb2_top_grid_right_pane_g

0x0161,	// (0x0001397a) vkb2_top_cell_left_pane_g1

0x0178,	// (0x00013991) vkb2_cell_keypad_pane_g1_ParamLimits

0x0178,	// (0x00013991) vkb2_cell_keypad_pane_g1

0x7315,	// (0x0001ab2e) vkb2_cell_keypad_pane_t1_ParamLimits

0x7315,	// (0x0001ab2e) vkb2_cell_keypad_pane_t1

0x0186,	// (0x0001399f) vkb2_cell_bottom_grid_pane_ParamLimits

0x0186,	// (0x0001399f) vkb2_cell_bottom_grid_pane

0x01bf,	// (0x000139d8) vkb2_cell_bottom_grid_pane_g1

0xd13e,	// (0x00020957) aid_call2_pane_cp02

0xd146,	// (0x0002095f) aid_call_pane_cp02

0xd14e,	// (0x00020967) clock_digital_number_pane_cp10

0xd156,	// (0x0002096f) clock_digital_number_pane_cp11

0xd15e,	// (0x00020977) clock_digital_number_pane_cp12

0xd166,	// (0x0002097f) clock_digital_number_pane_cp13

0xd16e,	// (0x00020987) clock_digital_separator_pane_cp10

0x153a,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g1

0x153a,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g2

0xd176,	// (0x0002098f) popup_clock_digital_analogue_window_cp2_g3

0x153a,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g4

0xd176,	// (0x0002098f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x00023555) popup_clock_digital_analogue_window_cp2_g

0xd17e,	// (0x00020997) popup_clock_digital_analogue_window_cp2_t1

0xd18c,	// (0x000209a5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x00023560) popup_clock_digital_analogue_window_cp2_t

0x4feb,	// (0x00018804) clock_digital_number_pane_cp10_g1

0x4feb,	// (0x00018804) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x0002333c) clock_digital_number_pane_cp10_g

0x4feb,	// (0x00018804) clock_digital_separator_pane_cp10_g1

0x4feb,	// (0x00018804) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x0002333c) clock_digital_separator_pane_cp10_g

0x6d40,	// (0x0001a559) uniindi_top_pane_g3

0x6d51,	// (0x0001a56a) uniindi_top_pane_g4

0xf507,	// (0x00022d20) vkb2_row_keypad_pane_ParamLimits

0xf507,	// (0x00022d20) vkb2_row_keypad_pane

0x01db,	// (0x000139f4) vkb2_cell_t_keypad_pane_ParamLimits

0x01db,	// (0x000139f4) vkb2_cell_t_keypad_pane

0x01eb,	// (0x00013a04) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x01eb,	// (0x00013a04) vkb2_cell_t_keypad_pane_cp08

0x0200,	// (0x00013a19) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x0200,	// (0x00013a19) vkb2_cell_t_keypad_pane_cp09

0x0214,	// (0x00013a2d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x0214,	// (0x00013a2d) vkb2_cell_t_keypad_pane_cp01

0x0225,	// (0x00013a3e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x0225,	// (0x00013a3e) vkb2_cell_t_keypad_pane_cp02

0x0236,	// (0x00013a4f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x0236,	// (0x00013a4f) vkb2_cell_t_keypad_pane_cp03

0x0247,	// (0x00013a60) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x0247,	// (0x00013a60) vkb2_cell_t_keypad_pane_cp04

0x0258,	// (0x00013a71) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x0258,	// (0x00013a71) vkb2_cell_t_keypad_pane_cp05

0x0269,	// (0x00013a82) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x0269,	// (0x00013a82) vkb2_cell_t_keypad_pane_cp06

0x027c,	// (0x00013a95) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x027c,	// (0x00013a95) vkb2_cell_t_keypad_pane_cp07

0x0291,	// (0x00013aaa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x0291,	// (0x00013aaa) vkb2_cell_t_keypad_pane_cp10

0xf262,	// (0x00022a7b) vkb2_cell_t_keypad_pane_g1

0x732c,	// (0x0001ab45) vkb2_cell_t_keypad_pane_t1

0xe045,	// (0x0002185e) popup_grid_graphic2_window

0xd4cb,	// (0x00020ce4) aid_size_cell_graphic2_ParamLimits

0xd4cb,	// (0x00020ce4) aid_size_cell_graphic2

0xd509,	// (0x00020d22) bg_popup_window_pane_cp21_ParamLimits

0xd509,	// (0x00020d22) bg_popup_window_pane_cp21

0xd517,	// (0x00020d30) graphic2_pages_pane_ParamLimits

0xd517,	// (0x00020d30) graphic2_pages_pane

0xd56f,	// (0x00020d88) grid_graphic2_control_pane_ParamLimits

0xd56f,	// (0x00020d88) grid_graphic2_control_pane

0xd5b7,	// (0x00020dd0) grid_graphic2_pane_ParamLimits

0xd5b7,	// (0x00020dd0) grid_graphic2_pane

0xd642,	// (0x00020e5b) cell_graphic2_pane

0xe045,	// (0x0002185e) main_comp_mode_pane

0x654a,	// (0x00019d63) list_ai3_gene_pane_ParamLimits

0xce7e,	// (0x00020697) bg_popup_window_pane_cp19_ParamLimits

0x697f,	// (0x0001a198) bg_touch_area_indi_pane_ParamLimits

0x697f,	// (0x0001a198) bg_touch_area_indi_pane

0x6995,	// (0x0001a1ae) bg_touch_area_indi_pane_cp01_ParamLimits

0x6995,	// (0x0001a1ae) bg_touch_area_indi_pane_cp01

0x69ab,	// (0x0001a1c4) bg_touch_area_indi_pane_cp02_ParamLimits

0x69ab,	// (0x0001a1c4) bg_touch_area_indi_pane_cp02

0x69c5,	// (0x0001a1de) bg_touch_area_indi_pane_cp03_ParamLimits

0x69c5,	// (0x0001a1de) bg_touch_area_indi_pane_cp03

0x69df,	// (0x0001a1f8) popup_slider_window_g1_ParamLimits

0x69fb,	// (0x0001a214) popup_slider_window_g2_ParamLimits

0x6a17,	// (0x0001a230) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x000234ea) popup_slider_window_g_ParamLimits

0x6a7d,	// (0x0001a296) popup_slider_window_t1_ParamLimits

0x6af1,	// (0x0001a30a) small_volume_slider_vertical_pane_ParamLimits

0xd642,	// (0x00020e5b) cell_graphic2_pane_ParamLimits

0xd6a4,	// (0x00020ebd) bg_button_pane_cp10_ParamLimits

0xd6a4,	// (0x00020ebd) bg_button_pane_cp10

0xd6b7,	// (0x00020ed0) bg_button_pane_cp11_ParamLimits

0xd6b7,	// (0x00020ed0) bg_button_pane_cp11

0xd6ca,	// (0x00020ee3) graphic2_pages_pane_g1_ParamLimits

0xd6ca,	// (0x00020ee3) graphic2_pages_pane_g1

0xd6e5,	// (0x00020efe) graphic2_pages_pane_g2_ParamLimits

0xd6e5,	// (0x00020efe) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x000235ae) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x000235ae) graphic2_pages_pane_g

0xd6fd,	// (0x00020f16) graphic2_pages_pane_t1_ParamLimits

0xd6fd,	// (0x00020f16) graphic2_pages_pane_t1

0xd715,	// (0x00020f2e) cell_graphic2_control_pane_ParamLimits

0xd715,	// (0x00020f2e) cell_graphic2_control_pane

0xd749,	// (0x00020f62) cell_graphic2_pane_g1_ParamLimits

0xd749,	// (0x00020f62) cell_graphic2_pane_g1

0xc6cd,	// (0x0001fee6) cell_graphic2_pane_g2_ParamLimits

0xc6cd,	// (0x0001fee6) cell_graphic2_pane_g2

0xcd83,	// (0x0002059c) cell_graphic2_pane_g3_ParamLimits

0xcd83,	// (0x0002059c) cell_graphic2_pane_g3

0xc6da,	// (0x0001fef3) cell_graphic2_pane_g4_ParamLimits

0xc6da,	// (0x0001fef3) cell_graphic2_pane_g4

0xd756,	// (0x00020f6f) cell_graphic2_pane_g5_ParamLimits

0xd756,	// (0x00020f6f) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x000235b3) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x000235b3) cell_graphic2_pane_g

0xd772,	// (0x00020f8b) cell_graphic2_pane_t1_ParamLimits

0xd772,	// (0x00020f8b) cell_graphic2_pane_t1

0x3263,	// (0x00016a7c) grid_highlight_pane_cp11_ParamLimits

0x3263,	// (0x00016a7c) grid_highlight_pane_cp11

0xc8ac,	// (0x000200c5) bg_button_pane_cp05

0xd7bb,	// (0x00020fd4) cell_graphic2_control_pane_g1

0x4feb,	// (0x00018804) bg_touch_area_indi_pane_g1

0x760f,	// (0x0001ae28) aid_cmod_rocker_key_size

0x7619,	// (0x0001ae32) aid_cmode_itu_key_size

0x7623,	// (0x0001ae3c) main_cmode_video_pane

0x762d,	// (0x0001ae46) main_comp_mode_itu_pane

0x7639,	// (0x0001ae52) main_comp_mode_rocker_pane

0x7645,	// (0x0001ae5e) cell_cmode_rocker_pane_ParamLimits

0x7645,	// (0x0001ae5e) cell_cmode_rocker_pane

0x7659,	// (0x0001ae72) cell_cmode_itu_pane_ParamLimits

0x7659,	// (0x0001ae72) cell_cmode_itu_pane

0xe2b0,	// (0x00021ac9) bg_button_pane_cp06_ParamLimits

0xe2b0,	// (0x00021ac9) bg_button_pane_cp06

0x5266,	// (0x00018a7f) cell_cmode_rocker_pane_g1_ParamLimits

0x5266,	// (0x00018a7f) cell_cmode_rocker_pane_g1

0x6b98,	// (0x0001a3b1) cell_cmode_rocker_pane_g2_ParamLimits

0x6b98,	// (0x0001a3b1) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x000235c3) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x000235c3) cell_cmode_rocker_pane_g

0xc6ef,	// (0x0001ff08) bg_button_pane_cp07

0x7670,	// (0x0001ae89) cell_cmode_itu_pane_g1

0x7679,	// (0x0001ae92) cell_cmode_itu_pane_t1

0x7687,	// (0x0001aea0) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x000235c8) cell_cmode_itu_pane_t

0x6dc5,	// (0x0001a5de) aid_touch_ctrl_left

0x6dcd,	// (0x0001a5e6) aid_touch_ctrl_right

0xc6ef,	// (0x0001ff08) compa_mode_pane

0xd7e3,	// (0x00020ffc) aid_cmod_rocker_key_size_cp

0xd7ed,	// (0x00021006) aid_cmode_itu_key_size_cp

0x76a9,	// (0x0001aec2) compa_mode_pane_g1

0x76b1,	// (0x0001aeca) compa_mode_pane_g2

0x76b9,	// (0x0001aed2) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x000235cd) compa_mode_pane_g

0xd7f7,	// (0x00021010) main_comp_mode_itu_pane_cp

0xd7ff,	// (0x00021018) main_comp_mode_rocker_pane_cp

0xd807,	// (0x00021020) cell_cmode_itu_pane_cp_ParamLimits

0xd807,	// (0x00021020) cell_cmode_itu_pane_cp

0xd81c,	// (0x00021035) cell_cmode_rocker_pane_cp_ParamLimits

0xd81c,	// (0x00021035) cell_cmode_rocker_pane_cp

0xe2b0,	// (0x00021ac9) bg_button_pane_cp06_cp_ParamLimits

0xe2b0,	// (0x00021ac9) bg_button_pane_cp06_cp

0x5266,	// (0x00018a7f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5266,	// (0x00018a7f) cell_cmode_rocker_pane_g1_cp

0x4feb,	// (0x00018804) cell_cmode_rocker_pane_g2_cp

0xc6ef,	// (0x0001ff08) bg_button_pane_cp07_cp

0xd82e,	// (0x00021047) cell_cmode_itu_pane_g1_cp

0xd837,	// (0x00021050) cell_cmode_itu_pane_t1_cp

0xd837,	// (0x00021050) cell_cmode_itu_pane_t2_cp

0xbbac,	// (0x0001f3c5) settings_code_pane_cp2

0xc75f,	// (0x0001ff78) bg_popup_window_pane_cp3_ParamLimits

0xcac0,	// (0x000202d9) heading_pane_cp3_ParamLimits

0xcacf,	// (0x000202e8) listscroll_popup_graphic_pane_ParamLimits

0xf070,	// (0x00022889) fep_hwr_aid_pane_ParamLimits

0xf3f2,	// (0x00022c0b) aid_touch_sctrl_top_ParamLimits

0xf40d,	// (0x00022c26) sctrl_sk_top_pane_g1_ParamLimits

0xf262,	// (0x00022a7b) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x00023503) sctrl_sk_top_pane_g_ParamLimits

0xf41a,	// (0x00022c33) sctrl_sk_top_pane_t1_ParamLimits

0xf3f2,	// (0x00022c0b) aid_touch_sctrl_bottom_ParamLimits

0xf41a,	// (0x00022c33) sctrl_sk_bottom_pane_t1_ParamLimits

0x6d0a,	// (0x0001a523) aid_area_touch_clock

0xa174,	// (0x0001d98d) aid_vkb2_area_top_pane_cell_ParamLimits

0xa174,	// (0x0001d98d) aid_vkb2_area_top_pane_cell

0xa224,	// (0x0001da3d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa224,	// (0x0001da3d) aid_vkb2_area_bottom_pane_cell

0x7277,	// (0x0001aa90) popup_char_count_window

0x770f,	// (0x0001af28) popup_char_count_window_g1

0x7718,	// (0x0001af31) popup_char_count_window_g2

0x7721,	// (0x0001af3a) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x000235d4) popup_char_count_window_g

0x772a,	// (0x0001af43) popup_char_count_window_t1

0xf44c,	// (0x00022c65) popup_fep_char_preview_window_ParamLimits

0xf44c,	// (0x00022c65) popup_fep_char_preview_window

0xa194,	// (0x0001d9ad) vkb2_top_candi_pane_ParamLimits

0xa194,	// (0x0001d9ad) vkb2_top_candi_pane

0xd845,	// (0x0002105e) cell_vkb2_top_candi_pane_ParamLimits

0xd845,	// (0x0002105e) cell_vkb2_top_candi_pane

0x02a6,	// (0x00013abf) bg_popup_fep_char_preview_window_ParamLimits

0x02a6,	// (0x00013abf) bg_popup_fep_char_preview_window

0x02b4,	// (0x00013acd) popup_fep_char_preview_window_t1_ParamLimits

0x02b4,	// (0x00013acd) popup_fep_char_preview_window_t1

0x7786,	// (0x0001af9f) bg_popup_fep_char_preview_window_g1

0x778e,	// (0x0001afa7) bg_popup_fep_char_preview_window_g2

0x7796,	// (0x0001afaf) bg_popup_fep_char_preview_window_g3

0x779e,	// (0x0001afb7) bg_popup_fep_char_preview_window_g4

0x77a6,	// (0x0001afbf) bg_popup_fep_char_preview_window_g5

0x77ae,	// (0x0001afc7) bg_popup_fep_char_preview_window_g6

0x77b6,	// (0x0001afcf) bg_popup_fep_char_preview_window_g7

0x77be,	// (0x0001afd7) bg_popup_fep_char_preview_window_g8

0x77c6,	// (0x0001afdf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x000235db) bg_popup_fep_char_preview_window_g

0xf262,	// (0x00022a7b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf262,	// (0x00022a7b) cell_vkb2_top_candi_pane_g1

0xf270,	// (0x00022a89) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf270,	// (0x00022a89) cell_vkb2_top_candi_pane_g2

0x5da2,	// (0x000195bb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5da2,	// (0x000195bb) cell_vkb2_top_candi_pane_g3

0x02f6,	// (0x00013b0f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x02f6,	// (0x00013b0f) cell_vkb2_top_candi_pane_g4

0x593e,	// (0x00019157) cell_vkb2_top_candi_pane_g5_ParamLimits

0x593e,	// (0x00019157) cell_vkb2_top_candi_pane_g5

0x0317,	// (0x00013b30) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0317,	// (0x00013b30) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x000235f0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x000235f0) cell_vkb2_top_candi_pane_g

0x0325,	// (0x00013b3e) cell_vkb2_top_candi_pane_t1

0xeede,	// (0x000226f7) aid_size_touch_slider_mark_ParamLimits

0xeede,	// (0x000226f7) aid_size_touch_slider_mark

0xd553,	// (0x00020d6c) grid_graphic2_catg_pane_ParamLimits

0xd553,	// (0x00020d6c) grid_graphic2_catg_pane

0xd611,	// (0x00020e2a) popup_grid_graphic2_window_t1_ParamLimits

0xd611,	// (0x00020e2a) popup_grid_graphic2_window_t1

0xd627,	// (0x00020e40) popup_grid_graphic2_window_t2_ParamLimits

0xd627,	// (0x00020e40) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x000235a9) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x000235a9) popup_grid_graphic2_window_t

0xc8ac,	// (0x000200c5) bg_button_pane_cp05_ParamLimits

0xd7bb,	// (0x00020fd4) cell_graphic2_control_pane_g1_ParamLimits

0xd8a9,	// (0x000210c2) cell_graphic2_catg_pane_ParamLimits

0xd8a9,	// (0x000210c2) cell_graphic2_catg_pane

0xc6ef,	// (0x0001ff08) bg_button_pane_cp12

0xd8bb,	// (0x000210d4) cell_graphic2_catg_pane_g1

0x6cd6,	// (0x0001a4ef) cell_tb_ext_pane_t1_ParamLimits

0x00d8,	// (0x000138f1) vkb2_top_cell_right_narrow_pane_ParamLimits

0x00d8,	// (0x000138f1) vkb2_top_cell_right_narrow_pane

0x00f0,	// (0x00013909) vkb2_top_cell_right_wide_pane_ParamLimits

0x00f0,	// (0x00013909) vkb2_top_cell_right_wide_pane

0xee6c,	// (0x00022685) bg_vkb2_func_pane_ParamLimits

0xee6c,	// (0x00022685) bg_vkb2_func_pane

0x0161,	// (0x0001397a) vkb2_top_cell_left_pane_g1_ParamLimits

0xee6c,	// (0x00022685) bg_vkb2_fuc_pane_cp03_ParamLimits

0xee6c,	// (0x00022685) bg_vkb2_fuc_pane_cp03

0x01bf,	// (0x000139d8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x24af,	// (0x00015cc8) bg_vkb2_func_pane_g1

0x24b7,	// (0x00015cd0) bg_vkb2_func_pane_g2

0x24c7,	// (0x00015ce0) bg_vkb2_func_pane_g3

0x24bf,	// (0x00015cd8) bg_vkb2_func_pane_g4

0x24cf,	// (0x00015ce8) bg_vkb2_func_pane_g5

0x24d7,	// (0x00015cf0) bg_vkb2_func_pane_g6

0x24df,	// (0x00015cf8) bg_vkb2_func_pane_g7

0x24e7,	// (0x00015d00) bg_vkb2_func_pane_g8

0x24a7,	// (0x00015cc0) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x000235fd) bg_vkb2_func_pane_g

0xee6c,	// (0x00022685) bg_vkb2_fuc_pane_cp01_ParamLimits

0xee6c,	// (0x00022685) bg_vkb2_fuc_pane_cp01

0x0161,	// (0x0001397a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x0161,	// (0x0001397a) vkb2_top_cell_right_wide_pane_g1

0xee6c,	// (0x00022685) bg_vkb2_fuc_pane_cp02_ParamLimits

0xee6c,	// (0x00022685) bg_vkb2_fuc_pane_cp02

0x0343,	// (0x00013b5c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x0343,	// (0x00013b5c) vkb2_top_cell_right_narrow_pane_g1

0xcdc0,	// (0x000205d9) aid_touch_area_decrease_ParamLimits

0xcdc0,	// (0x000205d9) aid_touch_area_decrease

0xcdfa,	// (0x00020613) aid_touch_area_increase_ParamLimits

0xcdfa,	// (0x00020613) aid_touch_area_increase

0xce22,	// (0x0002063b) aid_touch_area_mute_ParamLimits

0xce22,	// (0x0002063b) aid_touch_area_mute

0xce4a,	// (0x00020663) aid_touch_area_slider_ParamLimits

0xce4a,	// (0x00020663) aid_touch_area_slider

0xce8a,	// (0x000206a3) popup_slider_window_g4_ParamLimits

0xce8a,	// (0x000206a3) popup_slider_window_g4

0xceb2,	// (0x000206cb) popup_slider_window_g5_ParamLimits

0xceb2,	// (0x000206cb) popup_slider_window_g5

0xcee6,	// (0x000206ff) popup_slider_window_g6_ParamLimits

0xcee6,	// (0x000206ff) popup_slider_window_g6

0x6aab,	// (0x0001a2c4) popup_slider_window_t2_ParamLimits

0x6aab,	// (0x0001a2c4) popup_slider_window_t2

0x0001,

0xfcde,	// (0x000234f7) popup_slider_window_t_ParamLimits

0xfcde,	// (0x000234f7) popup_slider_window_t

0xcf02,	// (0x0002071b) slider_pane_ParamLimits

0xcf02,	// (0x0002071b) slider_pane

0x77e9,	// (0x0001b002) slider_pane_g1_ParamLimits

0x77e9,	// (0x0001b002) slider_pane_g1

0x77fd,	// (0x0001b016) slider_pane_g2_ParamLimits

0x77fd,	// (0x0001b016) slider_pane_g2

0x7813,	// (0x0001b02c) slider_pane_g3_ParamLimits

0x7813,	// (0x0001b02c) slider_pane_g3

0x0003,

0xfdf7,	// (0x00023610) slider_pane_g_ParamLimits

0xfdf7,	// (0x00023610) slider_pane_g

0x9c88,	// (0x0001d4a1) popup_tb_float_extension_window_ParamLimits

0x9c88,	// (0x0001d4a1) popup_tb_float_extension_window

0x783f,	// (0x0001b058) aid_size_cell_tb_float_ext

0xc6ef,	// (0x0001ff08) bg_popup_sub_window_cp28

0x784b,	// (0x0001b064) grid_tb_float_ext_pane

0x7857,	// (0x0001b070) cell_tb_float_ext_pane_ParamLimits

0x7857,	// (0x0001b070) cell_tb_float_ext_pane

0x7873,	// (0x0001b08c) cell_tb_float_ext_pane_g1

0x787c,	// (0x0001b095) grid_highlight_pane_cp12

0x9f08,	// (0x0001d721) cell_last_hwr_side_pane_ParamLimits

0x9f08,	// (0x0001d721) cell_last_hwr_side_pane

0x4feb,	// (0x00018804) cell_last_hwr_side_pane_g1

0x7885,	// (0x0001b09e) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x00023619) cell_last_hwr_side_pane_g

0xa301,	// (0x0001db1a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa301,	// (0x0001db1a) vkb2_area_bottom_space_btn_pane

0xf262,	// (0x00022a7b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x732c,	// (0x0001ab45) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x0325,	// (0x00013b3e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x035f,	// (0x00013b78) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x035f,	// (0x00013b78) vkb2_area_bottom_space_btn_pane_g1

0x0399,	// (0x00013bb2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x0399,	// (0x00013bb2) vkb2_area_bottom_space_btn_pane_g2

0x03cf,	// (0x00013be8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x03cf,	// (0x00013be8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0002361e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0002361e) vkb2_area_bottom_space_btn_pane_g

0xf127,	// (0x00022940) cel_fep_hwr_func_pane_ParamLimits

0xf127,	// (0x00022940) cel_fep_hwr_func_pane

0x9edd,	// (0x0001d6f6) cell_hwr_side_button_pane_ParamLimits

0x9edd,	// (0x0001d6f6) cell_hwr_side_button_pane

0x6d0a,	// (0x0001a523) aid_area_touch_clock_ParamLimits

0xc8ac,	// (0x000200c5) bg_uniindi_top_pane_ParamLimits

0x6d1e,	// (0x0001a537) uniindi_top_pane_g1_ParamLimits

0x6d34,	// (0x0001a54d) uniindi_top_pane_g2_ParamLimits

0x6d40,	// (0x0001a559) uniindi_top_pane_g3_ParamLimits

0x6d51,	// (0x0001a56a) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x0002352f) uniindi_top_pane_g_ParamLimits

0x6d5e,	// (0x0001a577) uniindi_top_pane_t1_ParamLimits

0xc8ac,	// (0x000200c5) bg_vkb2_func_pane_cp01_ParamLimits

0xc8ac,	// (0x000200c5) bg_vkb2_func_pane_cp01

0x788e,	// (0x0001b0a7) cel_fep_hwr_func_pane_g1_ParamLimits

0x788e,	// (0x0001b0a7) cel_fep_hwr_func_pane_g1

0xc8ac,	// (0x000200c5) bg_vkb2_func_pane_cp02_ParamLimits

0xc8ac,	// (0x000200c5) bg_vkb2_func_pane_cp02

0x788e,	// (0x0001b0a7) cell_hwr_side_button_pane_g1_ParamLimits

0x788e,	// (0x0001b0a7) cell_hwr_side_button_pane_g1

0x22f2,	// (0x00015b0b) status_pane_g4_ParamLimits

0x22f2,	// (0x00015b0b) status_pane_g4

0x230c,	// (0x00015b25) status_pane_t1

0x4d9e,	// (0x000185b7) form2_midp_gauge_slider_cont_pane

0x4da6,	// (0x000185bf) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbef4,	// (0x0001f70d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf06,	// (0x0001f71f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x000232ef) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ddc,	// (0x000185f5) form2_midp_slider_pane_ParamLimits

0xf43e,	// (0x00022c57) aid_size_cell_func_vkb2_ParamLimits

0xf43e,	// (0x00022c57) aid_size_cell_func_vkb2

0x782b,	// (0x0001b044) slider_pane_g4_ParamLimits

0x782b,	// (0x0001b044) slider_pane_g4

0xa36a,	// (0x0001db83) form2_midp_gauge_slider_pane_t2_cp01

0xa378,	// (0x0001db91) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa378,	// (0x0001db91) form2_midp_gauge_slider_pane_t3_cp01

0x0444,	// (0x00013c5d) form2_midp_slider_pane_cp01

0xc6ef,	// (0x0001ff08) navi_smil_pane

0x78c7,	// (0x0001b0e0) navi_smil_pane_g1

0x78cf,	// (0x0001b0e8) navi_smil_pane_t1

0x789c,	// (0x0001b0b5) form2_midp_slider_pane_g1

0x78a5,	// (0x0001b0be) form2_midp_slider_pane_g2

0x78ad,	// (0x0001b0c6) form2_midp_slider_pane_g3

0x789c,	// (0x0001b0b5) form2_midp_slider_pane_g4

0xd8c4,	// (0x000210dd) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x00023627) form2_midp_slider_pane_g

0x0409,	// (0x00013c22) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x0409,	// (0x00013c22) vkb2_area_bottom_space_btn_pane_g4

0xb4b9,	// (0x0001ecd2) lc0_navi_pane_ParamLimits

0xb4b9,	// (0x0001ecd2) lc0_navi_pane

0xb529,	// (0x0001ed42) lc0_stat_indi_pane_ParamLimits

0xb529,	// (0x0001ed42) lc0_stat_indi_pane

0xb53e,	// (0x0001ed57) ls0_title_pane_ParamLimits

0xb53e,	// (0x0001ed57) ls0_title_pane

0xe2b0,	// (0x00021ac9) bg_popup_sub_pane_cp14_ParamLimits

0x6cf1,	// (0x0001a50a) list_uniindi_pane_ParamLimits

0x6cfd,	// (0x0001a516) uniindi_top_pane_ParamLimits

0x6d9d,	// (0x0001a5b6) list_single_uniindi_pane_g1_ParamLimits

0x6db0,	// (0x0001a5c9) list_single_uniindi_pane_t1_ParamLimits

0xa395,	// (0x0001dbae) lc0_stat_clock_pane_ParamLimits

0xa395,	// (0x0001dbae) lc0_stat_clock_pane

0xd8cd,	// (0x000210e6) lc0_stat_indi_pane_g1_ParamLimits

0xd8cd,	// (0x000210e6) lc0_stat_indi_pane_g1

0xd8da,	// (0x000210f3) lc0_stat_indi_pane_g2_ParamLimits

0xd8da,	// (0x000210f3) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x00023632) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x00023632) lc0_stat_indi_pane_g

0xa3a2,	// (0x0001dbbb) lc0_uni_indicator_pane_ParamLimits

0xa3a2,	// (0x0001dbbb) lc0_uni_indicator_pane

0xd8e7,	// (0x00021100) ls0_title_pane_g1_ParamLimits

0xd8e7,	// (0x00021100) ls0_title_pane_g1

0xd8fb,	// (0x00021114) ls0_title_pane_t1_ParamLimits

0xd8fb,	// (0x00021114) ls0_title_pane_t1

0xa3af,	// (0x0001dbc8) lc0_uni_indicator_pane_g1_ParamLimits

0xa3af,	// (0x0001dbc8) lc0_uni_indicator_pane_g1

0x7941,	// (0x0001b15a) lc0_stat_clock_pane_t1

0xe045,	// (0x0002185e) main_ai5_pane

0x794f,	// (0x0001b168) ai5_sk_pane_ParamLimits

0x794f,	// (0x0001b168) ai5_sk_pane

0xd929,	// (0x00021142) cell_ai5_widget_pane_ParamLimits

0xd929,	// (0x00021142) cell_ai5_widget_pane

0xd9a8,	// (0x000211c1) aid_size_cell_widget_grid

0x7a09,	// (0x0001b222) bg_ai5_widget_pane_ParamLimits

0x7a09,	// (0x0001b222) bg_ai5_widget_pane

0xd9dc,	// (0x000211f5) cell_ai5_widget_pane_g2

0xd9f0,	// (0x00021209) cell_ai5_widget_pane_g3

0xda0a,	// (0x00021223) cell_ai5_widget_pane_g4

0xda1a,	// (0x00021233) cell_ai5_widget_pane_g5

0xda2a,	// (0x00021243) cell_ai5_widget_pane_g6

0xda36,	// (0x0002124f) cell_ai5_widget_pane_g7

0xdaa2,	// (0x000212bb) cell_ai5_widget_pane_t1_ParamLimits

0xdaa2,	// (0x000212bb) cell_ai5_widget_pane_t1

0xdabf,	// (0x000212d8) cell_ai5_widget_pane_t2_ParamLimits

0xdabf,	// (0x000212d8) cell_ai5_widget_pane_t2

0xdad7,	// (0x000212f0) cell_ai5_widget_pane_t3_ParamLimits

0xdad7,	// (0x000212f0) cell_ai5_widget_pane_t3

0xdaef,	// (0x00021308) cell_ai5_widget_pane_t4_ParamLimits

0xdaef,	// (0x00021308) cell_ai5_widget_pane_t4

0xdb15,	// (0x0002132e) cell_ai5_widget_pane_t5_ParamLimits

0xdb15,	// (0x0002132e) cell_ai5_widget_pane_t5

0x7bde,	// (0x0001b3f7) cell_ai5_widget_pane_t6_ParamLimits

0x7bde,	// (0x0001b3f7) cell_ai5_widget_pane_t6

0x7bf0,	// (0x0001b409) cell_ai5_widget_pane_t7_ParamLimits

0x7bf0,	// (0x0001b409) cell_ai5_widget_pane_t7

0xdb35,	// (0x0002134e) cell_ai5_widget_pane_t8_ParamLimits

0xdb35,	// (0x0002134e) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x00023652) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x00023652) cell_ai5_widget_pane_t

0xdbb9,	// (0x000213d2) grid_ai5_widget_pane

0xe2b0,	// (0x00021ac9) highlight_cell_ai5_widget_pane_ParamLimits

0xe2b0,	// (0x00021ac9) highlight_cell_ai5_widget_pane

0xdbc7,	// (0x000213e0) ai5_sk_left_pane

0xdbd1,	// (0x000213ea) ai5_sk_middle_pane

0xdbdb,	// (0x000213f4) ai5_sk_right_pane

0x7cbf,	// (0x0001b4d8) bg_ai5_widget_pane_g1_ParamLimits

0x7cbf,	// (0x0001b4d8) bg_ai5_widget_pane_g1

0x7ccb,	// (0x0001b4e4) bg_ai5_widget_pane_g2_ParamLimits

0x7ccb,	// (0x0001b4e4) bg_ai5_widget_pane_g2

0x7cd7,	// (0x0001b4f0) bg_ai5_widget_pane_g3_ParamLimits

0x7cd7,	// (0x0001b4f0) bg_ai5_widget_pane_g3

0x7ce3,	// (0x0001b4fc) bg_ai5_widget_pane_g4_ParamLimits

0x7ce3,	// (0x0001b4fc) bg_ai5_widget_pane_g4

0x7cef,	// (0x0001b508) bg_ai5_widget_pane_g5_ParamLimits

0x7cef,	// (0x0001b508) bg_ai5_widget_pane_g5

0x7cfb,	// (0x0001b514) bg_ai5_widget_pane_g6_ParamLimits

0x7cfb,	// (0x0001b514) bg_ai5_widget_pane_g6

0x7d07,	// (0x0001b520) bg_ai5_widget_pane_g7_ParamLimits

0x7d07,	// (0x0001b520) bg_ai5_widget_pane_g7

0x7d13,	// (0x0001b52c) bg_ai5_widget_pane_g8_ParamLimits

0x7d13,	// (0x0001b52c) bg_ai5_widget_pane_g8

0x7d1f,	// (0x0001b538) bg_ai5_widget_pane_g9_ParamLimits

0x7d1f,	// (0x0001b538) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x0002366b) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0002366b) bg_ai5_widget_pane_g

0xdc0f,	// (0x00021428) cell_shortcut_ai5_widget_pane_ParamLimits

0xdc0f,	// (0x00021428) cell_shortcut_ai5_widget_pane

0x1c00,	// (0x00015419) bg_cell_shortcut_ai5_widget_pane

0x7d6a,	// (0x0001b583) cell_grid_ai5_widget_pane_g1

0x1c00,	// (0x00015419) highlight_cell_shortcut_ai5_widget_pane

0x24af,	// (0x00015cc8) ai5_sk_left_pane_g1

0x7d73,	// (0x0001b58c) ai5_sk_left_pane_g2

0x7d7b,	// (0x0001b594) ai5_sk_left_pane_g3

0x7d83,	// (0x0001b59c) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x0002367e) ai5_sk_left_pane_g

0x7d8b,	// (0x0001b5a4) ai5_sk_left_pane_t1

0x24b7,	// (0x00015cd0) ai5_sk_right_pane_g1

0x7d99,	// (0x0001b5b2) ai5_sk_right_pane_g2

0x7da1,	// (0x0001b5ba) ai5_sk_right_pane_g3

0x7da9,	// (0x0001b5c2) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x00023687) ai5_sk_right_pane_g

0x7db1,	// (0x0001b5ca) ai5_sk_right_pane_t1

0x24b7,	// (0x00015cd0) ai5_sk_middle_pane_g1

0x24af,	// (0x00015cc8) ai5_sk_middle_pane_g2

0x24cf,	// (0x00015ce8) ai5_sk_middle_pane_g3

0x7da1,	// (0x0001b5ba) ai5_sk_middle_pane_g4

0x7d7b,	// (0x0001b594) ai5_sk_middle_pane_g5

0x7dbf,	// (0x0001b5d8) ai5_sk_middle_pane_g6

0xdc22,	// (0x0002143b) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x00023690) ai5_sk_middle_pane_g

0xb3a3,	// (0x0001ebbc) aid_touch_area_size_lc0_ParamLimits

0xb3a3,	// (0x0001ebbc) aid_touch_area_size_lc0

0xf291,	// (0x00022aaa) cell_hwr_candidate_pane_t1_ParamLimits

0x1fb5,	// (0x000157ce) aid_touch_navi_pane

0xb649,	// (0x0001ee62) status_dt_navi_pane_ParamLimits

0xb649,	// (0x0001ee62) status_dt_navi_pane

0xb661,	// (0x0001ee7a) status_dt_sta_pane_ParamLimits

0xb661,	// (0x0001ee7a) status_dt_sta_pane

0xdc2a,	// (0x00021443) dt_sta_controll_pane

0xdc37,	// (0x00021450) dt_sta_indi_pane

0xdc44,	// (0x0002145d) dt_sta_title_pane

0xc8ac,	// (0x000200c5) bg_dt_sta_indi_pane_ParamLimits

0xc8ac,	// (0x000200c5) bg_dt_sta_indi_pane

0xdc56,	// (0x0002146f) dt_sta_battery_pane

0xdc5e,	// (0x00021477) dt_sta_indi_pane_g1

0xdc67,	// (0x00021480) dt_sta_indi_pane_g2

0xdc70,	// (0x00021489) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x0002369f) dt_sta_indi_pane_g

0xdc79,	// (0x00021492) dt_sta_signal_pane

0xe2b0,	// (0x00021ac9) bg_dt_sta_title_pane_ParamLimits

0xe2b0,	// (0x00021ac9) bg_dt_sta_title_pane

0xdc82,	// (0x0002149b) dt_sta_title_pane_g1

0xdc8a,	// (0x000214a3) dt_sta_title_pane_t1_ParamLimits

0xdc8a,	// (0x000214a3) dt_sta_title_pane_t1

0xc6ef,	// (0x0001ff08) bg_dt_sta_control_pane

0xdc9f,	// (0x000214b8) dt_sta_controll_pane_g1

0xdca8,	// (0x000214c1) bg_dt_sta_title_pane_g1

0xdcb1,	// (0x000214ca) bg_dt_sta_title_pane_g2

0xdcba,	// (0x000214d3) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x000236a6) bg_dt_sta_title_pane_g

0x4feb,	// (0x00018804) bg_dt_sta_indi_pane_g1

0x7e6d,	// (0x0001b686) dt_sta_signal_pane_g1

0x7e75,	// (0x0001b68e) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x000236ad) dt_sta_signal_pane_g

0x7e7d,	// (0x0001b696) dt_sta_battery_pane_g1

0x7e86,	// (0x0001b69f) dt_sta_battery_pane_t1

0x4feb,	// (0x00018804) bg_dt_sta_control_pane_g1

0x1661,	// (0x00014e7a) fep_china_uni_eep_pane

0x1669,	// (0x00014e82) fep_china_uni_entry_pane_ParamLimits

0x1679,	// (0x00014e92) popup_fep_china_uni_window_g1_ParamLimits

0x1689,	// (0x00014ea2) popup_fep_china_uni_window_g2_ParamLimits

0x1689,	// (0x00014ea2) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00022f0c) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00022f0c) popup_fep_china_uni_window_g

0x7e95,	// (0x0001b6ae) fep_china_uni_eep_pane_g1

0x7e9d,	// (0x0001b6b6) fep_china_uni_eep_pane_t1

0x78be,	// (0x0001b0d7) aid_touch_area_size_smil_player

0x2109,	// (0x00015922) lc0_clock_pane

0x2300,	// (0x00015b19) status_pane_g5_ParamLimits

0x2300,	// (0x00015b19) status_pane_g5

0x97ae,	// (0x0001cfc7) popup_keymap_window

0x22c6,	// (0x00015adf) status_icon_pane

0xd9f0,	// (0x00021209) cell_ai5_widget_pane_g3_ParamLimits

0xda0a,	// (0x00021223) cell_ai5_widget_pane_g4_ParamLimits

0xda1a,	// (0x00021233) cell_ai5_widget_pane_g5_ParamLimits

0xda42,	// (0x0002125b) cell_ai5_widget_pane_g8_ParamLimits

0xda42,	// (0x0002125b) cell_ai5_widget_pane_g8

0xda56,	// (0x0002126f) cell_ai5_widget_pane_g9_ParamLimits

0xda56,	// (0x0002126f) cell_ai5_widget_pane_g9

0xda6a,	// (0x00021283) cell_ai5_widget_pane_g10_ParamLimits

0xda6a,	// (0x00021283) cell_ai5_widget_pane_g10

0x7eac,	// (0x0001b6c5) status_icon_pane_g1

0xc6ef,	// (0x0001ff08) bg_popup_sub_pane_cp13

0x7eb4,	// (0x0001b6cd) popup_keymap_window_t1

0x1ed8,	// (0x000156f1) control_pane_g6_ParamLimits

0x1ed8,	// (0x000156f1) control_pane_g6

0x1ee5,	// (0x000156fe) control_pane_g7_ParamLimits

0x1ee5,	// (0x000156fe) control_pane_g7

0x1ef2,	// (0x0001570b) control_pane_g8_ParamLimits

0x1ef2,	// (0x0001570b) control_pane_g8

0xdc2a,	// (0x00021443) dt_sta_controll_pane_ParamLimits

0xdc37,	// (0x00021450) dt_sta_indi_pane_ParamLimits

0xdc44,	// (0x0002145d) dt_sta_title_pane_ParamLimits

0xccfd,	// (0x00020516) aid_size_touch_scroll_bar_cale

0xe122,	// (0x0002193b) popup_discreet_window_ParamLimits

0xe122,	// (0x0002193b) popup_discreet_window

0x93f1,	// (0x0001cc0a) popup_sk_window

0x2bec,	// (0x00016405) bg_popup_sub_pane_cp28_ParamLimits

0x2bec,	// (0x00016405) bg_popup_sub_pane_cp28

0x7ec2,	// (0x0001b6db) popup_discreet_window_g1_ParamLimits

0x7ec2,	// (0x0001b6db) popup_discreet_window_g1

0x7ee2,	// (0x0001b6fb) popup_discreet_window_t1_ParamLimits

0x7ee2,	// (0x0001b6fb) popup_discreet_window_t1

0x7f00,	// (0x0001b719) popup_discreet_window_t2_ParamLimits

0x7f00,	// (0x0001b719) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x000236b2) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x000236b2) popup_discreet_window_t

0x047a,	// (0x00013c93) popup_sk_window_g1

0x0484,	// (0x00013c9d) popup_sk_window_g2

0x0001,

0xfea0,	// (0x000236b9) popup_sk_window_g

0x048c,	// (0x00013ca5) popup_sk_window_t1

0x049a,	// (0x00013cb3) popup_sk_window_t1_copy1

0xd9dc,	// (0x000211f5) cell_ai5_widget_pane_g2_ParamLimits

0xdb47,	// (0x00021360) cell_ai5_widget_pane_t9_ParamLimits

0xdb47,	// (0x00021360) cell_ai5_widget_pane_t9

0xc6ef,	// (0x0001ff08) main_fep_fshwr2_pane

0xa3ce,	// (0x0001dbe7) aid_fshwr2_btn_pane

0xa3e2,	// (0x0001dbfb) aid_fshwr2_syb_pane

0xa3f6,	// (0x0001dc0f) aid_fshwr2_txt_pane

0xa406,	// (0x0001dc1f) fshwr2_func_candi_pane

0xa428,	// (0x0001dc41) fshwr2_hwr_syb_pane

0xa44c,	// (0x0001dc65) fshwr2_icf_pane

0xe045,	// (0x0002185e) fshwr2_icf_bg_pane

0x0546,	// (0x00013d5f) fshwr2_icf_pane_t1_ParamLimits

0x0546,	// (0x00013d5f) fshwr2_icf_pane_t1

0x153a,	// (0x00014d53) fshwr2_func_candi_pane_g1

0xdcc3,	// (0x000214dc) fshwr2_func_candi_row_pane_ParamLimits

0xdcc3,	// (0x000214dc) fshwr2_func_candi_row_pane

0xa47c,	// (0x0001dc95) cell_fshwr2_syb_pane_ParamLimits

0xa47c,	// (0x0001dc95) cell_fshwr2_syb_pane

0x057f,	// (0x00013d98) fshwr2_hwr_syb_pane_g1_ParamLimits

0x057f,	// (0x00013d98) fshwr2_hwr_syb_pane_g1

0xe045,	// (0x0002185e) bg_popup_call_pane_cp01

0xa4a4,	// (0x0001dcbd) fshwr2_func_candi_cell_pane_ParamLimits

0xa4a4,	// (0x0001dcbd) fshwr2_func_candi_cell_pane

0x29cc,	// (0x000161e5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x29cc,	// (0x000161e5) fshwr2_func_candi_cell_bg_pane

0xa4ef,	// (0x0001dd08) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa4ef,	// (0x0001dd08) fshwr2_func_candi_cell_pane_g1

0xa526,	// (0x0001dd3f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa526,	// (0x0001dd3f) fshwr2_func_candi_cell_pane_t1

0xe045,	// (0x0002185e) bg_button_pane_cp08

0x1f2f,	// (0x00015748) cell_fshwr2_syb_bg_pane

0xa541,	// (0x0001dd5a) cell_fshwr2_syb_bg_pane_g1

0xa555,	// (0x0001dd6e) cell_fshwr2_syb_bg_pane_t1

0xe2b0,	// (0x00021ac9) main_tmo_pane

0xb9b1,	// (0x0001f1ca) uni_indicator_pane_g1_ParamLimits

0xb9c7,	// (0x0001f1e0) uni_indicator_pane_g2_ParamLimits

0xb9dd,	// (0x0001f1f6) uni_indicator_pane_g3_ParamLimits

0xb9f0,	// (0x0001f209) uni_indicator_pane_g4_ParamLimits

0xb9f0,	// (0x0001f209) uni_indicator_pane_g4

0x3763,	// (0x00016f7c) uni_indicator_pane_g5_ParamLimits

0x3763,	// (0x00016f7c) uni_indicator_pane_g5

0x3763,	// (0x00016f7c) uni_indicator_pane_g6_ParamLimits

0x3763,	// (0x00016f7c) uni_indicator_pane_g6

0xf8f2,	// (0x0002310b) uni_indicator_pane_g_ParamLimits

0xcd90,	// (0x000205a9) popup_tmo_note_window_ParamLimits

0xcd90,	// (0x000205a9) popup_tmo_note_window

0xf46e,	// (0x00022c87) fshwr2_bg_pane

0xa517,	// (0x0001dd30) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa517,	// (0x0001dd30) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x000236be) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x000236be) fshwr2_func_candi_cell_pane_g

0xf24a,	// (0x00022a63) bg_popup_window_pane_cp01

0x0646,	// (0x00013e5f) bg_popup_window_pane_g1_cp01

0x7f75,	// (0x0001b78e) bg_popup_window_pane_cp22_ParamLimits

0x7f75,	// (0x0001b78e) bg_popup_window_pane_cp22

0x7f83,	// (0x0001b79c) listscroll_tmo_link_pane_ParamLimits

0x7f83,	// (0x0001b79c) listscroll_tmo_link_pane

0x7fc3,	// (0x0001b7dc) popup_tmo_note_window_g1_ParamLimits

0x7fc3,	// (0x0001b7dc) popup_tmo_note_window_g1

0x7fd0,	// (0x0001b7e9) tmo_note_info_pane_ParamLimits

0x7fd0,	// (0x0001b7e9) tmo_note_info_pane

0xdcea,	// (0x00021503) list_tmo_note_info_pane_g1_ParamLimits

0xdcea,	// (0x00021503) list_tmo_note_info_pane_g1

0x8001,	// (0x0001b81a) list_tmo_note_info_pane_g2_ParamLimits

0x8001,	// (0x0001b81a) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x000236c3) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x000236c3) list_tmo_note_info_pane_g

0x801d,	// (0x0001b836) list_tmo_note_info_text_pane_ParamLimits

0x801d,	// (0x0001b836) list_tmo_note_info_text_pane

0x80a2,	// (0x0001b8bb) list_tmo_link_pane

0x80af,	// (0x0001b8c8) scroll_pane_cp20

0x80bc,	// (0x0001b8d5) list_single_tmo_link_pane_ParamLimits

0x80bc,	// (0x0001b8d5) list_single_tmo_link_pane

0x80cc,	// (0x0001b8e5) list_single_tmo_link_pane_t1

0x80da,	// (0x0001b8f3) list_tmo_note_info_text_pane_t1_ParamLimits

0x80da,	// (0x0001b8f3) list_tmo_note_info_text_pane_t1

0xaeea,	// (0x0001e703) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaeea,	// (0x0001e703) aid_size_touch_scroll_bar_cp01

0xae2a,	// (0x0001e643) aid_size_touch_slider_marker

0x93e1,	// (0x0001cbfa) popup_settings_window_ParamLimits

0x93e1,	// (0x0001cbfa) popup_settings_window

0x1f63,	// (0x0001577c) popup_candi_list_indi_window

0x1fb5,	// (0x000157ce) aid_touch_navi_pane_ParamLimits

0xf3c6,	// (0x00022bdf) rs_clock_indi_pane

0xf3cf,	// (0x00022be8) sctrl_sk_bottom_pane_ParamLimits

0xf3e0,	// (0x00022bf9) sctrl_sk_top_pane_ParamLimits

0xf466,	// (0x00022c7f) popup_fep_tooltip_window

0xd9a8,	// (0x000211c1) aid_size_cell_widget_grid_ParamLimits

0xd9c7,	// (0x000211e0) cell_ai5_widget_pane_g1_ParamLimits

0xd9c7,	// (0x000211e0) cell_ai5_widget_pane_g1

0xda2a,	// (0x00021243) cell_ai5_widget_pane_g6_ParamLimits

0xda36,	// (0x0002124f) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x00023637) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x00023637) cell_ai5_widget_pane_g

0xdb76,	// (0x0002138f) cell_ai5_widget_pane_t10_ParamLimits

0xdb76,	// (0x0002138f) cell_ai5_widget_pane_t10

0xdbb9,	// (0x000213d2) grid_ai5_widget_pane_ParamLimits

0xdbe5,	// (0x000213fe) cell_contacts_ai5_widget_pane_ParamLimits

0xdbe5,	// (0x000213fe) cell_contacts_ai5_widget_pane

0x7f15,	// (0x0001b72e) popup_discreet_window_t3_ParamLimits

0x7f15,	// (0x0001b72e) popup_discreet_window_t3

0xa468,	// (0x0001dc81) popup_fshwr2_char_preview_window_ParamLimits

0xa468,	// (0x0001dc81) popup_fshwr2_char_preview_window

0xdd01,	// (0x0002151a) tmo_note_info_pane_t1

0xdd16,	// (0x0002152f) tmo_note_info_pane_t2

0xdd2f,	// (0x00021548) tmo_note_info_pane_t3

0x807e,	// (0x0001b897) tmo_note_info_pane_t4

0x8090,	// (0x0001b8a9) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x000236c8) tmo_note_info_pane_t

0x80a2,	// (0x0001b8bb) list_tmo_link_pane_ParamLimits

0x80af,	// (0x0001b8c8) scroll_pane_cp20_ParamLimits

0xe045,	// (0x0002185e) bg_popup_fep_char_preview_window_cp01

0x80f3,	// (0x0001b90c) popup_fshwr2_char_preview_window_t1

0x8101,	// (0x0001b91a) popup_candi_list_indi_window_g1

0x810a,	// (0x0001b923) bg_cell_contacts_ai5_widget_pane

0xdd44,	// (0x0002155d) cell_contacts_ai5_widget_pane_g1

0x812b,	// (0x0001b944) cell_contacts_ai5_widget_pane_g2

0x8137,	// (0x0001b950) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x000236d3) cell_contacts_ai5_widget_pane_g

0x8143,	// (0x0001b95c) cell_contacts_ai5_widget_pane_t1

0xe2b0,	// (0x00021ac9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x81ba,	// (0x0001b9d3) settings_container_pane

0x1c00,	// (0x00015419) listscroll_set_pane_copy1

0x43fa,	// (0x00017c13) scroll_pane_cp121_copy1

0x81c6,	// (0x0001b9df) set_content_pane_copy1

0x81ce,	// (0x0001b9e7) aid_height_set_list_copy1_ParamLimits

0x81ce,	// (0x0001b9e7) aid_height_set_list_copy1

0x398b,	// (0x000171a4) aid_size_parent_copy1_ParamLimits

0x398b,	// (0x000171a4) aid_size_parent_copy1

0x81da,	// (0x0001b9f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0x81da,	// (0x0001b9f3) button_value_adjust_pane_cp6_copy1

0x1f2f,	// (0x00015748) list_highlight_pane_cp2_copy1_ParamLimits

0x1f2f,	// (0x00015748) list_highlight_pane_cp2_copy1

0x81ee,	// (0x0001ba07) list_set_pane_copy1_ParamLimits

0x81ee,	// (0x0001ba07) list_set_pane_copy1

0x8155,	// (0x0001b96e) main_pane_set_t1_copy1_ParamLimits

0x8155,	// (0x0001b96e) main_pane_set_t1_copy1

0x818f,	// (0x0001b9a8) main_pane_set_t2_copy1_ParamLimits

0x818f,	// (0x0001b9a8) main_pane_set_t2_copy1

0x82af,	// (0x0001bac8) main_pane_set_t3_copy1

0x82bd,	// (0x0001bad6) main_pane_set_t4_copy1

0x81ae,	// (0x0001b9c7) set_content_pane_g1_copy1_ParamLimits

0x81ae,	// (0x0001b9c7) set_content_pane_g1_copy1

0x82cb,	// (0x0001bae4) setting_code_pane_copy1

0x82d3,	// (0x0001baec) setting_slider_graphic_pane_copy1

0x82d3,	// (0x0001baec) setting_slider_pane_copy1

0x82db,	// (0x0001baf4) setting_text_pane_copy1

0x82db,	// (0x0001baf4) setting_volume_pane_copy1

0x82cb,	// (0x0001bae4) settings_code_pane_cp2_copy1

0x82e3,	// (0x0001bafc) settings_code_pane_cp_copy1_ParamLimits

0x82e3,	// (0x0001bafc) settings_code_pane_cp_copy1

0x064f,	// (0x00013e68) volume_set_pane_copy1

0x82f7,	// (0x0001bb10) volume_set_pane_g10_copy1

0x8303,	// (0x0001bb1c) volume_set_pane_g1_copy1

0x830d,	// (0x0001bb26) volume_set_pane_g2_copy1

0x8317,	// (0x0001bb30) volume_set_pane_g3_copy1

0x8321,	// (0x0001bb3a) volume_set_pane_g4_copy1

0x832b,	// (0x0001bb44) volume_set_pane_g5_copy1

0x8335,	// (0x0001bb4e) volume_set_pane_g6_copy1

0x833f,	// (0x0001bb58) volume_set_pane_g7_copy1

0x8349,	// (0x0001bb62) volume_set_pane_g8_copy1

0x8353,	// (0x0001bb6c) volume_set_pane_g9_copy1

0xc75f,	// (0x0001ff78) bg_set_opt_pane_cp_copy1_ParamLimits

0xc75f,	// (0x0001ff78) bg_set_opt_pane_cp_copy1

0x065b,	// (0x00013e74) setting_slider_pane_t1_copy1_ParamLimits

0x065b,	// (0x00013e74) setting_slider_pane_t1_copy1

0x067a,	// (0x00013e93) setting_slider_pane_t2_copy1_ParamLimits

0x067a,	// (0x00013e93) setting_slider_pane_t2_copy1

0x0694,	// (0x00013ead) setting_slider_pane_t3_copy1_ParamLimits

0x0694,	// (0x00013ead) setting_slider_pane_t3_copy1

0x06ac,	// (0x00013ec5) slider_set_pane_copy1_ParamLimits

0x06ac,	// (0x00013ec5) slider_set_pane_copy1

0xe36b,	// (0x00021b84) set_opt_bg_pane_g1_copy2

0xe373,	// (0x00021b8c) set_opt_bg_pane_g2_copy2

0x835f,	// (0x0001bb78) set_opt_bg_pane_g3_copy2

0xe383,	// (0x00021b9c) set_opt_bg_pane_g4_copy2

0xe38b,	// (0x00021ba4) set_opt_bg_pane_g5_copy2

0xe393,	// (0x00021bac) set_opt_bg_pane_g6_copy2

0x8369,	// (0x0001bb82) set_opt_bg_pane_g7_copy2

0x8373,	// (0x0001bb8c) set_opt_bg_pane_g8_copy2

0x837d,	// (0x0001bb96) set_opt_bg_pane_g9_copy2

0x06c2,	// (0x00013edb) aid_size_touch_slider_mark_copy1_ParamLimits

0x06c2,	// (0x00013edb) aid_size_touch_slider_mark_copy1

0x8387,	// (0x0001bba0) slider_set_pane_g1_copy1

0x06d6,	// (0x00013eef) slider_set_pane_g2_copy1

0xeefe,	// (0x00022717) slider_set_pane_g3_copy1_ParamLimits

0xeefe,	// (0x00022717) slider_set_pane_g3_copy1

0xef12,	// (0x0002272b) slider_set_pane_g4_copy1_ParamLimits

0xef12,	// (0x0002272b) slider_set_pane_g4_copy1

0xef2a,	// (0x00022743) slider_set_pane_g5_copy1_ParamLimits

0xef2a,	// (0x00022743) slider_set_pane_g5_copy1

0xeefe,	// (0x00022717) slider_set_pane_g6_copy1_ParamLimits

0xeefe,	// (0x00022717) slider_set_pane_g6_copy1

0x06de,	// (0x00013ef7) slider_set_pane_g7_copy1_ParamLimits

0x06de,	// (0x00013ef7) slider_set_pane_g7_copy1

0xc703,	// (0x0001ff1c) bg_set_opt_pane_cp2_copy1

0x8390,	// (0x0001bba9) setting_slider_graphic_pane_g1_copy1

0x8399,	// (0x0001bbb2) setting_slider_graphic_pane_t1_copy1

0x83a9,	// (0x0001bbc2) setting_slider_graphic_pane_t2_copy1

0x83b9,	// (0x0001bbd2) slider_set_pane_cp_copy1

0x83c9,	// (0x0001bbe2) input_focus_pane_cp1_copy1

0x83d2,	// (0x0001bbeb) list_set_text_pane_copy1

0x83da,	// (0x0001bbf3) setting_text_pane_g1_copy1

0xc784,	// (0x0001ff9d) set_text_pane_t1_copy1

0x83c9,	// (0x0001bbe2) input_focus_pane_cp2_copy1

0x83da,	// (0x0001bbf3) setting_code_pane_g1_copy1

0x83e3,	// (0x0001bbfc) setting_code_pane_t1_copy1

0x41ff,	// (0x00017a18) list_set_graphic_pane_copy1

0xc703,	// (0x0001ff1c) bg_set_opt_pane_cp4_copy1

0x18ef,	// (0x00015108) list_set_graphic_pane_g1_copy1_ParamLimits

0x18ef,	// (0x00015108) list_set_graphic_pane_g1_copy1

0x83f1,	// (0x0001bc0a) list_set_graphic_pane_g2_copy1

0x1907,	// (0x00015120) list_set_graphic_pane_t1_copy1_ParamLimits

0x1907,	// (0x00015120) list_set_graphic_pane_t1_copy1

0x4feb,	// (0x00018804) rs_clock_indi_pane_g1

0x83f9,	// (0x0001bc12) rs_clock_indi_pane_t1

0x8407,	// (0x0001bc20) rs_indi_pane

0x840f,	// (0x0001bc28) rs_indi_pane_g1

0x8418,	// (0x0001bc31) rs_indi_pane_g2

0x8101,	// (0x0001b91a) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x000236da) rs_indi_pane_g

0x1c00,	// (0x00015419) bg_popup_preview_window_pane_cp03

0x8421,	// (0x0001bc3a) popup_fep_tooltip_window_t1

0x5f0d,	// (0x00019726) popup_note2_window_g2_ParamLimits

0x5f0d,	// (0x00019726) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x00023467) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x00023467) popup_note2_window_g

0x6510,	// (0x00019d29) bg_popup_sub_pane_cp11_ParamLimits

0x651d,	// (0x00019d36) cell_ai3_links_pane_g1_ParamLimits

0x6534,	// (0x00019d4d) cell_ai3_links_pane_t1

0xc784,	// (0x0001ff9d) set_text_pane_t1_copy1_ParamLimits

0x1b02,	// (0x0001531b) cell_graphic_popup_pane_cp2_ParamLimits

0x1b02,	// (0x0001531b) cell_graphic_popup_pane_cp2

0x842f,	// (0x0001bc48) cell_graphic_popup_pane_g1_cp2

0xcb10,	// (0x00020329) cell_graphic_popup_pane_g2_cp2

0x8437,	// (0x0001bc50) cell_graphic_popup_pane_g3_cp2

0x843f,	// (0x0001bc58) cell_graphic_popup_pane_t2_cp2

0xcb21,	// (0x0002033a) grid_highlight_pane_cp3_cp2

0xe7eb,	// (0x00022004) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe2b0,	// (0x00021ac9) main_tmo_pane_ParamLimits

0xc6b3,	// (0x0001fecc) popup_tmo_big_image_note_window

0xd9b6,	// (0x000211cf) cell_ai5_widget_list_pane

0xd9be,	// (0x000211d7) cell_ai5_widget_lrg_icon_pane

0xdd01,	// (0x0002151a) tmo_note_info_pane_t1_ParamLimits

0xdd16,	// (0x0002152f) tmo_note_info_pane_t2_ParamLimits

0xdd2f,	// (0x00021548) tmo_note_info_pane_t3_ParamLimits

0x807e,	// (0x0001b897) tmo_note_info_pane_t4_ParamLimits

0x8090,	// (0x0001b8a9) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x000236c8) tmo_note_info_pane_t_ParamLimits

0x81ba,	// (0x0001b9d3) settings_container_pane_ParamLimits

0x83c1,	// (0x0001bbda) indicator_popup_pane_cp5

0x83c1,	// (0x0001bbda) indicator_popup_pane_cp6

0x41ff,	// (0x00017a18) list_set_graphic_pane_copy1_ParamLimits

0xc6ef,	// (0x0001ff08) bg_popup_window_pane_cp23

0x844d,	// (0x0001bc66) popup_tmo_big_image_note_window_g1

0x8459,	// (0x0001bc72) popup_tmo_big_image_note_window_t1

0x8469,	// (0x0001bc82) popup_tmo_big_image_note_window_t2

0x8479,	// (0x0001bc92) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x000236e1) popup_tmo_big_image_note_window_t

0x4feb,	// (0x00018804) cell_ai5_widget_lrg_icon_pane_g1

0xdd59,	// (0x00021572) cell_ai5_widget_lrg_icon_pane_t1

0xdd67,	// (0x00021580) cell_ai5_widget_list_row_pane_ParamLimits

0xdd67,	// (0x00021580) cell_ai5_widget_list_row_pane

0xdd7f,	// (0x00021598) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdd7f,	// (0x00021598) cell_ai5_widget_list_row_pane_g1

0xdd8c,	// (0x000215a5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdd8c,	// (0x000215a5) cell_ai5_widget_list_row_pane_t1

0xddb7,	// (0x000215d0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xddb7,	// (0x000215d0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x000236e8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x000236e8) cell_ai5_widget_list_row_pane_t

0xe045,	// (0x0002185e) main_fep_vtchi_ss_pane

0x8537,	// (0x0001bd50) popup_fep_char_pre_window

0x853f,	// (0x0001bd58) popup_fep_ituss_window

0xde09,	// (0x00021622) popup_fep_vkbss_window

0x1f2f,	// (0x00015748) grid_vkbss_keypad_pane_ParamLimits

0x1f2f,	// (0x00015748) grid_vkbss_keypad_pane

0x85ad,	// (0x0001bdc6) ituss_keypad_pane

0x06fe,	// (0x00013f17) aid_vkbss_key_offset_ParamLimits

0x06fe,	// (0x00013f17) aid_vkbss_key_offset

0xa56b,	// (0x0001dd84) cell_vkbss_key_pane_ParamLimits

0xa56b,	// (0x0001dd84) cell_vkbss_key_pane

0x85b9,	// (0x0001bdd2) bg_cell_vkbss_key_g1_ParamLimits

0x85b9,	// (0x0001bdd2) bg_cell_vkbss_key_g1

0xde18,	// (0x00021631) cell_vkbss_key_3p_pane_ParamLimits

0xde18,	// (0x00021631) cell_vkbss_key_3p_pane

0xde4e,	// (0x00021667) cell_vkbss_key_g1_ParamLimits

0xde4e,	// (0x00021667) cell_vkbss_key_g1

0xde84,	// (0x0002169d) cell_vkbss_key_t1_ParamLimits

0xde84,	// (0x0002169d) cell_vkbss_key_t1

0x076c,	// (0x00013f85) cell_ituss_key_pane_ParamLimits

0x076c,	// (0x00013f85) cell_ituss_key_pane

0x868d,	// (0x0001bea6) bg_cell_ituss_key_g1_ParamLimits

0x868d,	// (0x0001bea6) bg_cell_ituss_key_g1

0x8699,	// (0x0001beb2) cell_ituss_key_pane_g1_ParamLimits

0x8699,	// (0x0001beb2) cell_ituss_key_pane_g1

0x077d,	// (0x00013f96) cell_ituss_key_pane_g2_ParamLimits

0x077d,	// (0x00013f96) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x000236ef) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x000236ef) cell_ituss_key_pane_g

0x0801,	// (0x0001401a) cell_ituss_key_t1_ParamLimits

0x0801,	// (0x0001401a) cell_ituss_key_t1

0x083b,	// (0x00014054) cell_ituss_key_t2_ParamLimits

0x083b,	// (0x00014054) cell_ituss_key_t2

0x086d,	// (0x00014086) cell_ituss_key_t3_ParamLimits

0x086d,	// (0x00014086) cell_ituss_key_t3

0x089e,	// (0x000140b7) cell_ituss_key_t4_ParamLimits

0x089e,	// (0x000140b7) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x000236fc) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x000236fc) cell_ituss_key_t

0xdee0,	// (0x000216f9) cell_vkbss_key_3p_pane_g1

0xdee8,	// (0x00021701) cell_vkbss_key_3p_pane_g2

0xdef0,	// (0x00021709) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00023707) cell_vkbss_key_3p_pane_g

0x1c00,	// (0x00015419) bg_popup_fep_char_preview_window_cp02

0x86d7,	// (0x0001bef0) popup_fep_char_pre_window_t1

0xd995,	// (0x000211ae) main_ai5_sk_pane

0x810a,	// (0x0001b923) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xdd44,	// (0x0002155d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x812b,	// (0x0001b944) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8137,	// (0x0001b950) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x000236d3) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8143,	// (0x0001b95c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe2b0,	// (0x00021ac9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdef8,	// (0x00021711) main_ai5_sk_pane_g1

0x2a24,	// (0x0001623d) popup_query_code_window_g1

0xddfa,	// (0x00021613) popup_fep_vkb_icf_pane

0x8584,	// (0x0001bd9d) popup_fep_vtchi_icf_pane

0x86ee,	// (0x0001bf07) bg_icf_pane

0x86ee,	// (0x0001bf07) list_vkb_icf_pane

0x86fa,	// (0x0001bf13) bg_icf_pane_cp01

0x870d,	// (0x0001bf26) vtchi_icf_list_pane

0xdf4d,	// (0x00021766) list_vkb_icf_pane_t1_ParamLimits

0xdf4d,	// (0x00021766) list_vkb_icf_pane_t1

0x8786,	// (0x0001bf9f) vtchi_icf_list_pane_t1_ParamLimits

0x8786,	// (0x0001bf9f) vtchi_icf_list_pane_t1

0x853f,	// (0x0001bd58) popup_fep_ituss_window_ParamLimits

0x8584,	// (0x0001bd9d) popup_fep_vtchi_icf_pane_ParamLimits

0x85ad,	// (0x0001bdc6) ituss_keypad_pane_ParamLimits

0x06f4,	// (0x00013f0d) ituss_sks_pane

0x86ee,	// (0x0001bf07) bg_icf_pane_ParamLimits

0xdddf,	// (0x000215f8) icf_edit_indi_pane_ParamLimits

0xdddf,	// (0x000215f8) icf_edit_indi_pane

0x86ee,	// (0x0001bf07) list_vkb_icf_pane_ParamLimits

0x86fa,	// (0x0001bf13) bg_icf_pane_cp01_ParamLimits

0x852a,	// (0x0001bd43) icf_edit_indi_pane_cp01_ParamLimits

0x852a,	// (0x0001bd43) icf_edit_indi_pane_cp01

0x870d,	// (0x0001bf26) vtchi_query_pane

0x788e,	// (0x0001b0a7) icf_edit_indi_pane_g1_ParamLimits

0x788e,	// (0x0001b0a7) icf_edit_indi_pane_g1

0xdf64,	// (0x0002177d) icf_edit_indi_pane_g2_ParamLimits

0xdf64,	// (0x0002177d) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00023732) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00023732) icf_edit_indi_pane_g

0xdf78,	// (0x00021791) icf_edit_indi_pane_t1

0x879f,	// (0x0001bfb8) bg_input_focus_pane_cp042

0xccf4,	// (0x0002050d) vtchi_button_pane

0x87a8,	// (0x0001bfc1) vtchi_query_pane_t1

0x87b6,	// (0x0001bfcf) vtchi_query_pane_t2

0x87c4,	// (0x0001bfdd) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00023721) vtchi_query_pane_t

0xe045,	// (0x0002185e) bg_button_pane_cp13

0x87d2,	// (0x0001bfeb) vtchi_button_pane_g1

0x08e1,	// (0x000140fa) ituss_sks_pane_g1

0x08ec,	// (0x00014105) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00023728) ituss_sks_pane_g

0x87da,	// (0x0001bff3) ituss_sks_pane_t1

0x87e8,	// (0x0001c001) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0002372d) ituss_sks_pane_t

0x4a6c,	// (0x00018285) indicator_nsta_pane_cp_g1

0x4a75,	// (0x0001828e) indicator_nsta_pane_cp_g2

0x4a7d,	// (0x00018296) indicator_nsta_pane_cp_g3

0x4a85,	// (0x0001829e) indicator_nsta_pane_cp_g4

0x4a75,	// (0x0001828e) indicator_nsta_pane_cp_g5

0x4a7d,	// (0x00018296) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x000232a5) indicator_nsta_pane_cp_g

0xd79d,	// (0x00020fb6) cell_graphic2_pane_t2_ParamLimits

0xd79d,	// (0x00020fb6) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x000235be) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x000235be) cell_graphic2_pane_t

0xd7d5,	// (0x00020fee) cell_graphic2_control_pane_t1

0xb15b,	// (0x0001e974) signal_pane_g3_ParamLimits

0xb15b,	// (0x0001e974) signal_pane_g3

0xb16f,	// (0x0001e988) signal_pane_g4_ParamLimits

0xb16f,	// (0x0001e988) signal_pane_g4

0xddc9,	// (0x000215e2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xddc9,	// (0x000215e2) cell_ai5_widget_list_row_pane_t3

0x86ad,	// (0x0001bec6) cell_ituss_key_pane_t1_ParamLimits

0x86ad,	// (0x0001bec6) cell_ituss_key_pane_t1

0x265c,	// (0x00015e75) form_field_data_wide_pane_vc_t2_ParamLimits

0x265c,	// (0x00015e75) form_field_data_wide_pane_vc_t2

0x2670,	// (0x00015e89) form_field_data_wide_pane_vc_t3_ParamLimits

0x2670,	// (0x00015e89) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x00022ff3) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x00022ff3) form_field_data_wide_pane_vc_t

0x4709,	// (0x00017f22) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4709,	// (0x00017f22) form_field_slider_wide_pane_vc_t3

0x47df,	// (0x00017ff8) form_field_popup_wide_pane_vc_t2_ParamLimits

0x47df,	// (0x00017ff8) form_field_popup_wide_pane_vc_t2

0x47f6,	// (0x0001800f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x47f6,	// (0x0001800f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00023294) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00023294) form_field_popup_wide_pane_vc_t

0xa3ce,	// (0x0001dbe7) aid_fshwr2_btn_pane_ParamLimits

0xa3e2,	// (0x0001dbfb) aid_fshwr2_syb_pane_ParamLimits

0xa3f6,	// (0x0001dc0f) aid_fshwr2_txt_pane_ParamLimits

0xf46e,	// (0x00022c87) fshwr2_bg_pane_ParamLimits

0xa406,	// (0x0001dc1f) fshwr2_func_candi_pane_ParamLimits

0xa428,	// (0x0001dc41) fshwr2_hwr_syb_pane_ParamLimits

0xa44c,	// (0x0001dc65) fshwr2_icf_pane_ParamLimits

0x467d,	// (0x00017e96) list_double_graphic_pane_vc_g4_ParamLimits

0x467d,	// (0x00017e96) list_double_graphic_pane_vc_g4

0x079d,	// (0x00013fb6) cell_ituss_key_pane_g3_ParamLimits

0x079d,	// (0x00013fb6) cell_ituss_key_pane_g3

0x08cf,	// (0x000140e8) cell_ituss_key_t5_ParamLimits

0x08cf,	// (0x000140e8) cell_ituss_key_t5

0xde09,	// (0x00021622) popup_fep_vkbss_window_ParamLimits

0xd99f,	// (0x000211b8) aid_cell_ai5_quarter

0xdf78,	// (0x00021791) icf_edit_indi_pane_t1_ParamLimits

0xc954,	// (0x0002016d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xc954,	// (0x0002016d) aid_tch_indicator_popup_pane_cp2

0xc967,	// (0x00020180) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xc967,	// (0x00020180) aid_tch_query_popup_data_pane_cp2

0x29cc,	// (0x000161e5) aid_tch_query_popup_pane_ParamLimits

0x29cc,	// (0x000161e5) aid_tch_query_popup_pane

0x29cc,	// (0x000161e5) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x29cc,	// (0x000161e5) aid_tch_query_popup_data_pane_cp1

0x1f2f,	// (0x00015748) cell_fshwr2_syb_bg_pane_ParamLimits

0xa541,	// (0x0001dd5a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xa555,	// (0x0001dd6e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xddfa,	// (0x00021613) popup_fep_vkb_icf_pane_ParamLimits

0xa362,	// (0x0001db7b) bg_popup_fep_char_preview_window_g10

0xda7e,	// (0x00021297) cell_ai5_widget_pane_g11_ParamLimits

0xda7e,	// (0x00021297) cell_ai5_widget_pane_g11

0xda8a,	// (0x000212a3) cell_ai5_widget_pane_g12_ParamLimits

0xda8a,	// (0x000212a3) cell_ai5_widget_pane_g12

0xda96,	// (0x000212af) cell_ai5_widget_pane_g13_ParamLimits

0xda96,	// (0x000212af) cell_ai5_widget_pane_g13

0xdb95,	// (0x000213ae) cell_ai5_widget_pane_t11_ParamLimits

0xdb95,	// (0x000213ae) cell_ai5_widget_pane_t11

0xdba7,	// (0x000213c0) cell_ai5_widget_pane_t12_ParamLimits

0xdba7,	// (0x000213c0) cell_ai5_widget_pane_t12

0x07a9,	// (0x00013fc2) cell_ituss_key_pane_g4_ParamLimits

0x07a9,	// (0x00013fc2) cell_ituss_key_pane_g4

0x07c5,	// (0x00013fde) cell_ituss_key_pane_g5_ParamLimits

0x07c5,	// (0x00013fde) cell_ituss_key_pane_g5

0x07e1,	// (0x00013ffa) cell_ituss_key_pane_g6_ParamLimits

0x07e1,	// (0x00013ffa) cell_ituss_key_pane_g6

0x24a7,	// (0x00015cc0) bg_icf_pane_g1

0xdf01,	// (0x0002171a) bg_icf_pane_g2

0xdf0b,	// (0x00021724) bg_icf_pane_g3

0xdf13,	// (0x0002172c) bg_icf_pane_g4

0xdf1d,	// (0x00021736) bg_icf_pane_g5

0xdf27,	// (0x00021740) bg_icf_pane_g6

0xdf31,	// (0x0002174a) bg_icf_pane_g7

0xdf39,	// (0x00021752) bg_icf_pane_g8

0xdf43,	// (0x0002175c) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x0002370e) bg_icf_pane_g

0x859a,	// (0x0001bdb3) popup_hyb_candi_window_ParamLimits

0x859a,	// (0x0001bdb3) popup_hyb_candi_window

0x25cb,	// (0x00015de4) bg_popup_sub_pane_cp01_ParamLimits

0x25cb,	// (0x00015de4) bg_popup_sub_pane_cp01

0x8823,	// (0x0001c03c) entry_hyb_candi_pane_ParamLimits

0x8823,	// (0x0001c03c) entry_hyb_candi_pane

0x8832,	// (0x0001c04b) grid_hyb_candi_pane_ParamLimits

0x8832,	// (0x0001c04b) grid_hyb_candi_pane

0x8847,	// (0x0001c060) grid_hyb_phrase_pane_ParamLimits

0x8847,	// (0x0001c060) grid_hyb_phrase_pane

0x8856,	// (0x0001c06f) cell_hyb_candi_pane_ParamLimits

0x8856,	// (0x0001c06f) cell_hyb_candi_pane

0xccfd,	// (0x00020516) cell_hyb_candi_scroll_pane

0x153a,	// (0x00014d53) cell_hyb_candi_pane_g1

0x8872,	// (0x0001c08b) cell_hyb_candi_pane_t1

0x8880,	// (0x0001c099) cell_hyb_phrase_pane

0x153a,	// (0x00014d53) cell_hyb_phrase_pane_g1

0x8889,	// (0x0001c0a2) cell_hyb_phrase_pane_t1

0x8897,	// (0x0001c0b0) entry_hyb_candi_pane_t1

0x1c00,	// (0x00015419) input_focus_pane_cp06

0x88a5,	// (0x0001c0be) cell_hyb_candi_scroll_pane_g1

0x88ad,	// (0x0001c0c6) cell_hyb_candi_scroll_pane_g1_aid

0x88b5,	// (0x0001c0ce) cell_hyb_candi_scroll_pane_g2

0x88bd,	// (0x0001c0d6) cell_hyb_candi_scroll_pane_g2_aid

0x88c5,	// (0x0001c0de) cell_hyb_candi_scroll_pane_g3

0x88cd,	// (0x0001c0e6) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal

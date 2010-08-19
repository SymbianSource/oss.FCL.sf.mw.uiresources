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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00039262 };

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
0x857f,	// (0x000417e1) Screen

0x858b,	// (0x000417ed) application_window_ParamLimits

0x858b,	// (0x000417ed) application_window

0xb43b,	// (0x0004469d) screen_g1

0x85c3,	// (0x00041825) area_bottom_pane_ParamLimits

0x85c3,	// (0x00041825) area_bottom_pane

0xda50,	// (0x00046cb2) area_top_pane_ParamLimits

0xda50,	// (0x00046cb2) area_top_pane

0xefa4,	// (0x00048206) main_pane_ParamLimits

0xefa4,	// (0x00048206) main_pane

0xb445,	// (0x000446a7) misc_graphics

0xa247,	// (0x000434a9) battery_pane_ParamLimits

0xa247,	// (0x000434a9) battery_pane

0x28ed,	// (0x0003bb4f) bg_status_flat_pane_g8

0x28f5,	// (0x0003bb57) bg_status_flat_pane_g9

0x0529,	// (0x0003978b) context_pane_ParamLimits

0x0529,	// (0x0003978b) context_pane

0xa3b2,	// (0x00043614) navi_pane_ParamLimits

0xa3b2,	// (0x00043614) navi_pane

0xa430,	// (0x00043692) signal_pane_ParamLimits

0xa430,	// (0x00043692) signal_pane

0x0008,

0xf840,	// (0x00048aa2) bg_status_flat_pane_g

0xa4c0,	// (0x00043722) status_pane_g1_ParamLimits

0xa4c0,	// (0x00043722) status_pane_g1

0xa4d6,	// (0x00043738) status_pane_g2_ParamLimits

0xa4d6,	// (0x00043738) status_pane_g2

0x1eee,	// (0x0003b150) status_pane_g3_ParamLimits

0x1eee,	// (0x0003b150) status_pane_g3

0x0004,

0xf76c,	// (0x000489ce) status_pane_g_ParamLimits

0xf76c,	// (0x000489ce) status_pane_g

0xa4e2,	// (0x00043744) title_pane_ParamLimits

0xa4e2,	// (0x00043744) title_pane

0xa545,	// (0x000437a7) uni_indicator_pane_ParamLimits

0xa545,	// (0x000437a7) uni_indicator_pane

0xc23e,	// (0x000454a0) bg_list_pane_ParamLimits

0xc23e,	// (0x000454a0) bg_list_pane

0x9a35,	// (0x00042c97) find_pane

0x2102,	// (0x0003b364) listscroll_app_pane_ParamLimits

0x2102,	// (0x0003b364) listscroll_app_pane

0xc25e,	// (0x000454c0) listscroll_form_pane

0x9a3d,	// (0x00042c9f) listscroll_gen_pane_ParamLimits

0x9a3d,	// (0x00042c9f) listscroll_gen_pane

0xf4c5,	// (0x00048727) listscroll_set_pane

0x3451,	// (0x0003c6b3) main_idle_act_pane

0xc0f2,	// (0x00045354) main_idle_trad_pane

0xc0f2,	// (0x00045354) main_list_empty_pane

0xb999,	// (0x00044bfb) main_midp_pane

0xc278,	// (0x000454da) main_pane_g1_ParamLimits

0xc278,	// (0x000454da) main_pane_g1

0x9a51,	// (0x00042cb3) popup_ai_message_window_ParamLimits

0x9a51,	// (0x00042cb3) popup_ai_message_window

0x9b02,	// (0x00042d64) popup_fep_china_uni_window_ParamLimits

0x9b02,	// (0x00042d64) popup_fep_china_uni_window

0x9b5c,	// (0x00042dbe) popup_fep_japan_candidate_window_ParamLimits

0x9b5c,	// (0x00042dbe) popup_fep_japan_candidate_window

0x9b7a,	// (0x00042ddc) popup_fep_japan_predictive_window_ParamLimits

0x9b7a,	// (0x00042ddc) popup_fep_japan_predictive_window

0x9b8c,	// (0x00042dee) popup_find_window

0x9ba9,	// (0x00042e0b) popup_grid_graphic_window_ParamLimits

0x9ba9,	// (0x00042e0b) popup_grid_graphic_window

0xf503,	// (0x00048765) popup_large_graphic_colour_window

0x9c47,	// (0x00042ea9) popup_menu_window_ParamLimits

0x9c47,	// (0x00042ea9) popup_menu_window

0x9e19,	// (0x0004307b) popup_note_image_window

0x9ddf,	// (0x00043041) popup_note_wait_window_ParamLimits

0x9ddf,	// (0x00043041) popup_note_wait_window

0x9e31,	// (0x00043093) popup_note_window_ParamLimits

0x9e31,	// (0x00043093) popup_note_window

0x9ee0,	// (0x00043142) popup_query_code_window_ParamLimits

0x9ee0,	// (0x00043142) popup_query_code_window

0x9f1a,	// (0x0004317c) popup_query_data_code_window_ParamLimits

0x9f1a,	// (0x0004317c) popup_query_data_code_window

0x9f37,	// (0x00043199) popup_query_data_window_ParamLimits

0x9f37,	// (0x00043199) popup_query_data_window

0x9fb9,	// (0x0004321b) popup_query_sat_info_window_ParamLimits

0x9fb9,	// (0x0004321b) popup_query_sat_info_window

0xa050,	// (0x000432b2) popup_snote_single_graphic_window_ParamLimits

0xa050,	// (0x000432b2) popup_snote_single_graphic_window

0xa050,	// (0x000432b2) popup_snote_single_text_window_ParamLimits

0xa050,	// (0x000432b2) popup_snote_single_text_window

0x02a0,	// (0x00039502) popup_sub_window_general

0xa1ad,	// (0x0004340f) popup_window_general_ParamLimits

0xa1ad,	// (0x0004340f) popup_window_general

0x03e5,	// (0x00039647) power_save_pane

0x9893,	// (0x00042af5) control_pane_g1_ParamLimits

0x9893,	// (0x00042af5) control_pane_g1

0x98bc,	// (0x00042b1e) control_pane_g2_ParamLimits

0x98bc,	// (0x00042b1e) control_pane_g2

0xc228,	// (0x0004548a) control_pane_g3_ParamLimits

0xc228,	// (0x0004548a) control_pane_g3

0x0007,

0xf754,	// (0x000489b6) control_pane_g_ParamLimits

0xf754,	// (0x000489b6) control_pane_g

0x9924,	// (0x00042b86) control_pane_t1_ParamLimits

0x9924,	// (0x00042b86) control_pane_t1

0x998a,	// (0x00042bec) control_pane_t2_ParamLimits

0x998a,	// (0x00042bec) control_pane_t2

0x0002,

0xf765,	// (0x000489c7) control_pane_t_ParamLimits

0xf765,	// (0x000489c7) control_pane_t

0x97ec,	// (0x00042a4e) navi_navi_volume_pane_cp1

0x97f4,	// (0x00042a56) status_small_icon_pane

0xc1f4,	// (0x00045456) status_small_pane_g1_ParamLimits

0xc1f4,	// (0x00045456) status_small_pane_g1

0x97fc,	// (0x00042a5e) status_small_pane_g2_ParamLimits

0x97fc,	// (0x00042a5e) status_small_pane_g2

0x9808,	// (0x00042a6a) status_small_pane_g3_ParamLimits

0x9808,	// (0x00042a6a) status_small_pane_g3

0x9814,	// (0x00042a76) status_small_pane_g4_ParamLimits

0x9814,	// (0x00042a76) status_small_pane_g4

0x9820,	// (0x00042a82) status_small_pane_g5_ParamLimits

0x9820,	// (0x00042a82) status_small_pane_g5

0x982e,	// (0x00042a90) status_small_pane_g6_ParamLimits

0x982e,	// (0x00042a90) status_small_pane_g6

0x0007,

0xf743,	// (0x000489a5) status_small_pane_g_ParamLimits

0xf743,	// (0x000489a5) status_small_pane_g

0x985d,	// (0x00042abf) status_small_pane_t1

0x987f,	// (0x00042ae1) status_small_wait_pane_ParamLimits

0x987f,	// (0x00042ae1) status_small_wait_pane

0x94d4,	// (0x00042736) aid_levels_signal_ParamLimits

0x94d4,	// (0x00042736) aid_levels_signal

0x94ec,	// (0x0004274e) signal_pane_g1_ParamLimits

0x94ec,	// (0x0004274e) signal_pane_g1

0x9507,	// (0x00042769) signal_pane_g2_ParamLimits

0x9507,	// (0x00042769) signal_pane_g2

0x0003,

0xf6d4,	// (0x00048936) signal_pane_g_ParamLimits

0xf6d4,	// (0x00048936) signal_pane_g

0xbd01,	// (0x00044f63) context_pane_g1

0x87c1,	// (0x00041a23) title_pane_g1

0x87f8,	// (0x00041a5a) title_pane_t1

0xb45b,	// (0x000446bd) title_pane_t2

0xb481,	// (0x000446e3) title_pane_t3

0x0002,

0xf532,	// (0x00048794) title_pane_t

0xa56d,	// (0x000437cf) aid_levels_battery_ParamLimits

0xa56d,	// (0x000437cf) aid_levels_battery

0xa589,	// (0x000437eb) battery_pane_g1_ParamLimits

0xa589,	// (0x000437eb) battery_pane_g1

0xa5a6,	// (0x00043808) battery_pane_g2_ParamLimits

0xa5a6,	// (0x00043808) battery_pane_g2

0x0001,

0xf777,	// (0x000489d9) battery_pane_g_ParamLimits

0xf777,	// (0x000489d9) battery_pane_g

0xc572,	// (0x000457d4) uni_indicator_pane_g1

0xc588,	// (0x000457ea) uni_indicator_pane_g2

0xc59e,	// (0x00045800) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x00048b4a) uni_indicator_pane_g

0xbfaa,	// (0x0004520c) navi_icon_pane_ParamLimits

0xbfaa,	// (0x0004520c) navi_icon_pane

0xbef3,	// (0x00045155) navi_midp_pane

0xbfc6,	// (0x00045228) navi_navi_pane

0xbfd0,	// (0x00045232) navi_text_pane_ParamLimits

0xbfd0,	// (0x00045232) navi_text_pane

0xb43b,	// (0x0004469d) status_small_wait_pane_g1

0xb6d2,	// (0x00044934) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x00048b45) status_small_wait_pane_g

0xc4cb,	// (0x0004572d) navi_navi_icon_text_pane

0x2f40,	// (0x0003c1a2) navi_navi_pane_g1_ParamLimits

0x2f40,	// (0x0003c1a2) navi_navi_pane_g1

0x2f52,	// (0x0003c1b4) navi_navi_pane_g2_ParamLimits

0x2f52,	// (0x0003c1b4) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00048b13) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00048b13) navi_navi_pane_g

0x2f64,	// (0x0003c1c6) navi_navi_tabs_pane

0x2f6d,	// (0x0003c1cf) navi_navi_text_pane

0xc4cb,	// (0x0004572d) navi_navi_volume_pane

0x2f14,	// (0x0003c176) navi_text_pane_t1

0x2f08,	// (0x0003c16a) navi_icon_pane_g1

0x2e5b,	// (0x0003c0bd) navi_navi_text_pane_t1

0xa940,	// (0x00043ba2) navi_navi_volume_pane_g1

0x096e,	// (0x00039bd0) volume_small_pane

0x2dc1,	// (0x0003c023) navi_navi_icon_text_pane_g1

0xc423,	// (0x00045685) navi_navi_icon_text_pane_t1

0xbfc6,	// (0x00045228) navi_tabs_2_long_pane

0xbfc6,	// (0x00045228) navi_tabs_2_pane

0xbfc6,	// (0x00045228) navi_tabs_3_long_pane

0xbfc6,	// (0x00045228) navi_tabs_3_pane

0xbfc6,	// (0x00045228) navi_tabs_4_pane

0x0946,	// (0x00039ba8) tabs_2_active_pane_ParamLimits

0x0946,	// (0x00039ba8) tabs_2_active_pane

0x0956,	// (0x00039bb8) tabs_2_passive_pane_ParamLimits

0x0956,	// (0x00039bb8) tabs_2_passive_pane

0x0914,	// (0x00039b76) tabs_3_active_pane_ParamLimits

0x0914,	// (0x00039b76) tabs_3_active_pane

0x0924,	// (0x00039b86) tabs_3_passive_pane_ParamLimits

0x0924,	// (0x00039b86) tabs_3_passive_pane

0x0935,	// (0x00039b97) tabs_3_passive_pane_cp_ParamLimits

0x0935,	// (0x00039b97) tabs_3_passive_pane_cp

0x08d0,	// (0x00039b32) tabs_4_active_pane_ParamLimits

0x08d0,	// (0x00039b32) tabs_4_active_pane

0x08e1,	// (0x00039b43) tabs_4_passive_pane_ParamLimits

0x08e1,	// (0x00039b43) tabs_4_passive_pane

0x08f2,	// (0x00039b54) tabs_4_passive_pane_cp_ParamLimits

0x08f2,	// (0x00039b54) tabs_4_passive_pane_cp

0x0903,	// (0x00039b65) tabs_4_passive_pane_cp2_ParamLimits

0x0903,	// (0x00039b65) tabs_4_passive_pane_cp2

0x08ac,	// (0x00039b0e) tabs_2_long_active_pane_ParamLimits

0x08ac,	// (0x00039b0e) tabs_2_long_active_pane

0x08be,	// (0x00039b20) tabs_2_long_passive_pane_ParamLimits

0x08be,	// (0x00039b20) tabs_2_long_passive_pane

0x0867,	// (0x00039ac9) tabs_3_long_active_pane_ParamLimits

0x0867,	// (0x00039ac9) tabs_3_long_active_pane

0x0880,	// (0x00039ae2) tabs_3_long_passive_pane_ParamLimits

0x0880,	// (0x00039ae2) tabs_3_long_passive_pane

0x0893,	// (0x00039af5) tabs_3_long_passive_pane_cp_ParamLimits

0x0893,	// (0x00039af5) tabs_3_long_passive_pane_cp

0x080d,	// (0x00039a6f) volume_small_pane_g1

0x0816,	// (0x00039a78) volume_small_pane_g2

0x081f,	// (0x00039a81) volume_small_pane_g3

0x0828,	// (0x00039a8a) volume_small_pane_g4

0x0831,	// (0x00039a93) volume_small_pane_g5

0x083a,	// (0x00039a9c) volume_small_pane_g6

0x0843,	// (0x00039aa5) volume_small_pane_g7

0x084c,	// (0x00039aae) volume_small_pane_g8

0x0855,	// (0x00039ab7) volume_small_pane_g9

0x085e,	// (0x00039ac0) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00048adf) volume_small_pane_g

0xb493,	// (0x000446f5) bg_active_tab_pane_cp2_ParamLimits

0xb493,	// (0x000446f5) bg_active_tab_pane_cp2

0x8884,	// (0x00041ae6) tabs_3_active_pane_g1

0x888c,	// (0x00041aee) tabs_3_active_pane_t1

0xb493,	// (0x000446f5) bg_passive_tab_pane_cp2_ParamLimits

0xb493,	// (0x000446f5) bg_passive_tab_pane_cp2

0x8884,	// (0x00041ae6) tabs_3_passive_pane_g1

0x888c,	// (0x00041aee) tabs_3_passive_pane_t1

0xb493,	// (0x000446f5) bg_active_tab_pane_cp3_ParamLimits

0xb493,	// (0x000446f5) bg_active_tab_pane_cp3

0x889e,	// (0x00041b00) tabs_4_active_pane_g1

0x88a6,	// (0x00041b08) tabs_4_active_pane_t1

0xb493,	// (0x000446f5) bg_passive_tab_pane_cp3_ParamLimits

0xb493,	// (0x000446f5) bg_passive_tab_pane_cp3

0x889e,	// (0x00041b00) tabs_4_1_passive_pane_g1

0x88a6,	// (0x00041b08) tabs_4_1_passive_pane_t1

0xb999,	// (0x00044bfb) list_highlight_pane_cp2

0xc6a4,	// (0x00045906) list_set_pane_ParamLimits

0xc6a4,	// (0x00045906) list_set_pane

0xc73e,	// (0x000459a0) main_pane_set_t1_ParamLimits

0xc73e,	// (0x000459a0) main_pane_set_t1

0xc75e,	// (0x000459c0) main_pane_set_t2_ParamLimits

0xc75e,	// (0x000459c0) main_pane_set_t2

0xc772,	// (0x000459d4) main_pane_set_t3_ParamLimits

0xc772,	// (0x000459d4) main_pane_set_t3

0xc784,	// (0x000459e6) main_pane_set_t4_ParamLimits

0xc784,	// (0x000459e6) main_pane_set_t4

0x0003,

0xf94d,	// (0x00048baf) main_pane_set_t_ParamLimits

0xf94d,	// (0x00048baf) main_pane_set_t

0xc796,	// (0x000459f8) setting_code_pane

0xc7a0,	// (0x00045a02) setting_slider_graphic_pane

0xc7a0,	// (0x00045a02) setting_slider_pane

0xc7a0,	// (0x00045a02) setting_text_pane

0xc7a0,	// (0x00045a02) setting_volume_pane

0x88b8,	// (0x00041b1a) volume_set_pane

0xb4a1,	// (0x00044703) bg_set_opt_pane_cp

0x88c0,	// (0x00041b22) setting_slider_pane_t1

0x88d9,	// (0x00041b3b) setting_slider_pane_t2

0x88f3,	// (0x00041b55) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004879b) setting_slider_pane_t

0x890b,	// (0x00041b6d) slider_set_pane

0xb445,	// (0x000446a7) bg_set_opt_pane_cp2

0xb4af,	// (0x00044711) setting_slider_graphic_pane_g1

0x8921,	// (0x00041b83) setting_slider_graphic_pane_t1

0x8931,	// (0x00041b93) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000487a2) setting_slider_graphic_pane_t

0x8941,	// (0x00041ba3) slider_set_pane_cp

0xb445,	// (0x000446a7) input_focus_pane_cp1

0x3438,	// (0x0003c69a) list_set_text_pane

0xb43b,	// (0x0004469d) setting_text_pane_g1

0xb445,	// (0x000446a7) input_focus_pane_cp2

0xb43b,	// (0x0004469d) setting_code_pane_g1

0xb4b8,	// (0x0004471a) setting_code_pane_t1

0xdae4,	// (0x00046d46) set_text_pane_t1_ParamLimits

0xdae4,	// (0x00046d46) set_text_pane_t1

0xb8af,	// (0x00044b11) set_opt_bg_pane_g1

0xb8b7,	// (0x00044b19) set_opt_bg_pane_g2

0xc659,	// (0x000458bb) set_opt_bg_pane_g3

0xb8c7,	// (0x00044b29) set_opt_bg_pane_g4

0xb8cf,	// (0x00044b31) set_opt_bg_pane_g5

0xb8d7,	// (0x00044b39) set_opt_bg_pane_g6

0xc663,	// (0x000458c5) set_opt_bg_pane_g7

0xc66b,	// (0x000458cd) set_opt_bg_pane_g8

0xc675,	// (0x000458d7) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00048b9c) set_opt_bg_pane_g

0xc64c,	// (0x000458ae) slider_set_pane_g1

0x09ed,	// (0x00039c4f) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00048b8d) slider_set_pane_g

0xa948,	// (0x00043baa) volume_set_pane_g1

0xa950,	// (0x00043bb2) volume_set_pane_g2

0xa958,	// (0x00043bba) volume_set_pane_g3

0xa960,	// (0x00043bc2) volume_set_pane_g4

0xa968,	// (0x00043bca) volume_set_pane_g5

0xa970,	// (0x00043bd2) volume_set_pane_g6

0xa978,	// (0x00043bda) volume_set_pane_g7

0xa980,	// (0x00043be2) volume_set_pane_g8

0xa988,	// (0x00043bea) volume_set_pane_g9

0xa990,	// (0x00043bf2) volume_set_pane_g10

0x0009,

0xf903,	// (0x00048b65) volume_set_pane_g

0x8949,	// (0x00041bab) indicator_pane_ParamLimits

0x8949,	// (0x00041bab) indicator_pane

0x8971,	// (0x00041bd3) main_idle_pane_g2_ParamLimits

0x8971,	// (0x00041bd3) main_idle_pane_g2

0x89a9,	// (0x00041c0b) main_pane_idle_g1_ParamLimits

0x89a9,	// (0x00041c0b) main_pane_idle_g1

0xb4c6,	// (0x00044728) popup_clock_digital_analogue_window_ParamLimits

0xb4c6,	// (0x00044728) popup_clock_digital_analogue_window

0x89d0,	// (0x00041c32) soft_indicator_pane_ParamLimits

0x89d0,	// (0x00041c32) soft_indicator_pane

0x89f4,	// (0x00041c56) wallpaper_pane_ParamLimits

0x89f4,	// (0x00041c56) wallpaper_pane

0xb43b,	// (0x0004469d) wallpaper_pane_g1

0x8a06,	// (0x00041c68) indicator_pane_g1_ParamLimits

0x8a06,	// (0x00041c68) indicator_pane_g1

0x384b,	// (0x0003caad) navi_navi_icon_text_pane_srt_g1

0xb4f4,	// (0x00044756) soft_indicator_pane_t1

0xb50e,	// (0x00044770) aid_ps_area_pane

0x8a1c,	// (0x00041c7e) aid_ps_clock_pane

0xb51f,	// (0x00044781) aid_ps_indicator_pane

0xb52b,	// (0x0004478d) indicator_ps_pane_ParamLimits

0xb52b,	// (0x0004478d) indicator_ps_pane

0xb53a,	// (0x0004479c) power_save_pane_g1_ParamLimits

0xb53a,	// (0x0004479c) power_save_pane_g1

0xb546,	// (0x000447a8) power_save_pane_g2_ParamLimits

0xb546,	// (0x000447a8) power_save_pane_g2

0xda30,	// (0x00046c92) aid_navinavi_width_pane

0xb50e,	// (0x00044770) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000487a7) power_save_pane_g_ParamLimits

0xf545,	// (0x000487a7) power_save_pane_g

0xb554,	// (0x000447b6) power_save_pane_t1_ParamLimits

0xb554,	// (0x000447b6) power_save_pane_t1

0x8a1c,	// (0x00041c7e) aid_ps_clock_pane_ParamLimits

0xb51f,	// (0x00044781) aid_ps_indicator_pane_ParamLimits

0xb566,	// (0x000447c8) power_save_pane_t4_ParamLimits

0xb566,	// (0x000447c8) power_save_pane_t4

0x0001,

0xf54a,	// (0x000487ac) power_save_pane_t_ParamLimits

0xf54a,	// (0x000487ac) power_save_pane_t

0xb590,	// (0x000447f2) power_save_t3_ParamLimits

0xb590,	// (0x000447f2) power_save_t3

0xb57b,	// (0x000447dd) power_save_t2_ParamLimits

0xb57b,	// (0x000447dd) power_save_t2

0xb5a5,	// (0x00044807) indicator_ps_pane_g1

0x8a2a,	// (0x00041c8c) ai_gene_pane_ParamLimits

0x8a2a,	// (0x00041c8c) ai_gene_pane

0x8a41,	// (0x00041ca3) ai_links_pane_ParamLimits

0x8a41,	// (0x00041ca3) ai_links_pane

0x8a59,	// (0x00041cbb) indicator_pane_cp1_ParamLimits

0x8a59,	// (0x00041cbb) indicator_pane_cp1

0x8a68,	// (0x00041cca) main_pane_idle_g1_cp_ParamLimits

0x8a68,	// (0x00041cca) main_pane_idle_g1_cp

0x8a80,	// (0x00041ce2) popup_ai_links_title_window

0x8a89,	// (0x00041ceb) soft_indicator_pane_cp1_ParamLimits

0x8a89,	// (0x00041ceb) soft_indicator_pane_cp1

0x31ff,	// (0x0003c461) ai_links_pane_g1

0x3208,	// (0x0003c46a) grid_ai_links_pane

0xc569,	// (0x000457cb) ai_gene_pane_1

0x31ed,	// (0x0003c44f) ai_gene_pane_2

0x31f6,	// (0x0003c458) list_highlight_pane_cp4

0xc545,	// (0x000457a7) cell_ai_link_pane_ParamLimits

0xc545,	// (0x000457a7) cell_ai_link_pane

0x31be,	// (0x0003c420) cell_ai_link_pane_g1

0xb6d2,	// (0x00044934) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00048b40) cell_ai_link_pane_g

0xb445,	// (0x000446a7) grid_highlight_cp2

0xb445,	// (0x000446a7) bg_popup_sub_pane_cp1

0xb5bc,	// (0x0004481e) popup_ai_links_title_window_t1

0x310e,	// (0x0003c370) ai_gene_pane_1_g1_ParamLimits

0x310e,	// (0x0003c370) ai_gene_pane_1_g1

0x311a,	// (0x0003c37c) ai_gene_pane_1_g2_ParamLimits

0x311a,	// (0x0003c37c) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x00048b36) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x00048b36) ai_gene_pane_1_g

0x3127,	// (0x0003c389) ai_gene_pane_1_t1_ParamLimits

0x3127,	// (0x0003c389) ai_gene_pane_1_t1

0x315b,	// (0x0003c3bd) grid_ai_soft_ind_pane

0x30f9,	// (0x0003c35b) ai_gene_pane_2_t1_ParamLimits

0x30f9,	// (0x0003c35b) ai_gene_pane_2_t1

0x8a9d,	// (0x00041cff) main_pane_empty_t1_ParamLimits

0x8a9d,	// (0x00041cff) main_pane_empty_t1

0x8ab5,	// (0x00041d17) main_pane_empty_t2_ParamLimits

0x8ab5,	// (0x00041d17) main_pane_empty_t2

0x8aca,	// (0x00041d2c) main_pane_empty_t3_ParamLimits

0x8aca,	// (0x00041d2c) main_pane_empty_t3

0x8adc,	// (0x00041d3e) main_pane_empty_t4_ParamLimits

0x8adc,	// (0x00041d3e) main_pane_empty_t4

0x8aee,	// (0x00041d50) main_pane_empty_t5_ParamLimits

0x8aee,	// (0x00041d50) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000487b1) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000487b1) main_pane_empty_t

0xb934,	// (0x00044b96) bg_popup_window_pane_ParamLimits

0xb934,	// (0x00044b96) bg_popup_window_pane

0xc4bf,	// (0x00045721) find_popup_pane_cp2_ParamLimits

0xc4bf,	// (0x00045721) find_popup_pane_cp2

0x2e75,	// (0x0003c0d7) heading_pane_ParamLimits

0x2e75,	// (0x0003c0d7) heading_pane

0xb445,	// (0x000446a7) bg_popup_sub_pane

0xc440,	// (0x000456a2) bg_popup_window_pane_g1_ParamLimits

0xc440,	// (0x000456a2) bg_popup_window_pane_g1

0xc44f,	// (0x000456b1) bg_popup_window_pane_g2_ParamLimits

0xc44f,	// (0x000456b1) bg_popup_window_pane_g2

0xc45b,	// (0x000456bd) bg_popup_window_pane_g3_ParamLimits

0xc45b,	// (0x000456bd) bg_popup_window_pane_g3

0xc467,	// (0x000456c9) bg_popup_window_pane_g4_ParamLimits

0xc467,	// (0x000456c9) bg_popup_window_pane_g4

0xc476,	// (0x000456d8) bg_popup_window_pane_g5_ParamLimits

0xc476,	// (0x000456d8) bg_popup_window_pane_g5

0xc486,	// (0x000456e8) bg_popup_window_pane_g6_ParamLimits

0xc486,	// (0x000456e8) bg_popup_window_pane_g6

0xc492,	// (0x000456f4) bg_popup_window_pane_g7_ParamLimits

0xc492,	// (0x000456f4) bg_popup_window_pane_g7

0xc4a1,	// (0x00045703) bg_popup_window_pane_g8_ParamLimits

0xc4a1,	// (0x00045703) bg_popup_window_pane_g8

0xc4b0,	// (0x00045712) bg_popup_window_pane_g9_ParamLimits

0xc4b0,	// (0x00045712) bg_popup_window_pane_g9

0x2e4f,	// (0x0003c0b1) bg_popup_window_pane_g10_ParamLimits

0x2e4f,	// (0x0003c0b1) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00048afe) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00048afe) bg_popup_window_pane_g

0x2d78,	// (0x0003bfda) bg_popup_heading_pane_ParamLimits

0x2d78,	// (0x0003bfda) bg_popup_heading_pane

0x0b3e,	// (0x00039da0) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b3e,	// (0x00039da0) tabs_4_passive_pane_cp_srt

0x0b50,	// (0x00039db2) tabs_4_passive_pane_srt_ParamLimits

0x2d8c,	// (0x0003bfee) heading_pane_g2

0x0b50,	// (0x00039db2) tabs_4_passive_pane_srt

0x2102,	// (0x0003b364) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2102,	// (0x0003b364) bg_passive_tab_pane_cp3_srt

0x2d94,	// (0x0003bff6) heading_pane_t1_ParamLimits

0x2d94,	// (0x0003bff6) heading_pane_t1

0x2dab,	// (0x0003c00d) heading_pane_t2_ParamLimits

0x2dab,	// (0x0003c00d) heading_pane_t2

0x0001,

0xf897,	// (0x00048af9) heading_pane_t_ParamLimits

0xf897,	// (0x00048af9) heading_pane_t

0x28b5,	// (0x0003bb17) bg_popup_heading_pane_g1

0x2964,	// (0x0003bbc6) bg_popup_heading_pane_g2

0x296e,	// (0x0003bbd0) bg_popup_heading_pane_g3

0x2978,	// (0x0003bbda) bg_popup_heading_pane_g4

0x2982,	// (0x0003bbe4) bg_popup_heading_pane_g5

0x298c,	// (0x0003bbee) bg_popup_heading_pane_g6

0x2994,	// (0x0003bbf6) bg_popup_heading_pane_g7

0x299c,	// (0x0003bbfe) bg_popup_heading_pane_g8

0x29a6,	// (0x0003bc08) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00048ab5) bg_popup_heading_pane_g

0x2076,	// (0x0003b2d8) bg_popup_sub_pane_g1

0x2086,	// (0x0003b2e8) bg_popup_sub_pane_g2

0x207e,	// (0x0003b2e0) bg_popup_sub_pane_g3

0x2096,	// (0x0003b2f8) bg_popup_sub_pane_g4

0x208e,	// (0x0003b2f0) bg_popup_sub_pane_g5

0x209e,	// (0x0003b300) bg_popup_sub_pane_g6

0x20a6,	// (0x0003b308) bg_popup_sub_pane_g7

0x20b6,	// (0x0003b318) bg_popup_sub_pane_g8

0x20ae,	// (0x0003b310) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00048a8f) bg_popup_sub_pane_g

0xb493,	// (0x000446f5) bg_popup_window_pane_cp5_ParamLimits

0xb493,	// (0x000446f5) bg_popup_window_pane_cp5

0xb5d9,	// (0x0004483b) popup_note_window_g1_ParamLimits

0xb5d9,	// (0x0004483b) popup_note_window_g1

0xb5e5,	// (0x00044847) popup_note_window_t1_ParamLimits

0xb5e5,	// (0x00044847) popup_note_window_t1

0xb5fb,	// (0x0004485d) popup_note_window_t2_ParamLimits

0xb5fb,	// (0x0004485d) popup_note_window_t2

0xb611,	// (0x00044873) popup_note_window_t3_ParamLimits

0xb611,	// (0x00044873) popup_note_window_t3

0xb627,	// (0x00044889) popup_note_window_t4_ParamLimits

0xb627,	// (0x00044889) popup_note_window_t4

0xb64f,	// (0x000448b1) popup_note_window_t5_ParamLimits

0xb64f,	// (0x000448b1) popup_note_window_t5

0x0004,

0xf55a,	// (0x000487bc) popup_note_window_t_ParamLimits

0xf55a,	// (0x000487bc) popup_note_window_t

0xb673,	// (0x000448d5) bg_popup_window_pane_cp6_ParamLimits

0xb673,	// (0x000448d5) bg_popup_window_pane_cp6

0x2831,	// (0x0003ba93) popup_note_image_window_g1_ParamLimits

0x2831,	// (0x0003ba93) popup_note_image_window_g1

0xc2e5,	// (0x00045547) popup_note_image_window_g2_ParamLimits

0xc2e5,	// (0x00045547) popup_note_image_window_g2

0x0001,

0xf821,	// (0x00048a83) popup_note_image_window_g_ParamLimits

0xf821,	// (0x00048a83) popup_note_image_window_g

0x2856,	// (0x0003bab8) popup_note_image_window_t1_ParamLimits

0x2856,	// (0x0003bab8) popup_note_image_window_t1

0x286f,	// (0x0003bad1) popup_note_image_window_t2_ParamLimits

0x286f,	// (0x0003bad1) popup_note_image_window_t2

0x2888,	// (0x0003baea) popup_note_image_window_t3_ParamLimits

0x2888,	// (0x0003baea) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00048a88) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00048a88) popup_note_image_window_t

0x26fa,	// (0x0003b95c) bg_popup_window_pane_cp7_ParamLimits

0x26fa,	// (0x0003b95c) bg_popup_window_pane_cp7

0x272a,	// (0x0003b98c) popup_note_wait_window_g1_ParamLimits

0x272a,	// (0x0003b98c) popup_note_wait_window_g1

0x2736,	// (0x0003b998) popup_note_wait_window_g2_ParamLimits

0x2736,	// (0x0003b998) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x00048a71) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x00048a71) popup_note_wait_window_g

0x274e,	// (0x0003b9b0) popup_note_wait_window_t1_ParamLimits

0x274e,	// (0x0003b9b0) popup_note_wait_window_t1

0xc286,	// (0x000454e8) popup_note_wait_window_t2_ParamLimits

0xc286,	// (0x000454e8) popup_note_wait_window_t2

0xc2a3,	// (0x00045505) popup_note_wait_window_t3_ParamLimits

0xc2a3,	// (0x00045505) popup_note_wait_window_t3

0xc2b6,	// (0x00045518) popup_note_wait_window_t4_ParamLimits

0xc2b6,	// (0x00045518) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00048a78) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00048a78) popup_note_wait_window_t

0x27ca,	// (0x0003ba2c) wait_bar_pane_ParamLimits

0x27ca,	// (0x0003ba2c) wait_bar_pane

0xb445,	// (0x000446a7) wait_anim_pane

0xb445,	// (0x000446a7) wait_border_pane

0xb43b,	// (0x0004469d) wait_anim_pane_g1

0xb43b,	// (0x0004469d) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00048931) wait_anim_pane_g

0x26a6,	// (0x0003b908) wait_border_pane_g1

0x26b1,	// (0x0003b913) wait_border_pane_g2

0x26ba,	// (0x0003b91c) wait_border_pane_g3

0x0002,

0xf808,	// (0x00048a6a) wait_border_pane_g

0x2511,	// (0x0003b773) bg_popup_window_pane_cp16_ParamLimits

0x2511,	// (0x0003b773) bg_popup_window_pane_cp16

0xa8f0,	// (0x00043b52) indicator_popup_pane_cp4_ParamLimits

0xa8f0,	// (0x00043b52) indicator_popup_pane_cp4

0x2625,	// (0x0003b887) popup_query_data_window_t1_ParamLimits

0x2625,	// (0x0003b887) popup_query_data_window_t1

0x2637,	// (0x0003b899) popup_query_data_window_t2_ParamLimits

0x2637,	// (0x0003b899) popup_query_data_window_t2

0x2650,	// (0x0003b8b2) popup_query_data_window_t3_ParamLimits

0x2650,	// (0x0003b8b2) popup_query_data_window_t3

0x0002,

0xf801,	// (0x00048a63) popup_query_data_window_t_ParamLimits

0xf801,	// (0x00048a63) popup_query_data_window_t

0xa904,	// (0x00043b66) query_popup_data_pane_ParamLimits

0xa904,	// (0x00043b66) query_popup_data_pane

0xa918,	// (0x00043b7a) query_popup_data_pane_cp1_ParamLimits

0xa918,	// (0x00043b7a) query_popup_data_pane_cp1

0x2511,	// (0x0003b773) bg_popup_window_pane_cp10_ParamLimits

0x2511,	// (0x0003b773) bg_popup_window_pane_cp10

0xa86b,	// (0x00043acd) indicator_popup_pane_ParamLimits

0xa86b,	// (0x00043acd) indicator_popup_pane

0xa88d,	// (0x00043aef) popup_query_code_window_t1_ParamLimits

0xa88d,	// (0x00043aef) popup_query_code_window_t1

0xa8a7,	// (0x00043b09) popup_query_code_window_t2_ParamLimits

0xa8a7,	// (0x00043b09) popup_query_code_window_t2

0x25c8,	// (0x0003b82a) popup_query_code_window_t3_ParamLimits

0x25c8,	// (0x0003b82a) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00048a5c) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00048a5c) popup_query_code_window_t

0x25f7,	// (0x0003b859) query_popup_pane_ParamLimits

0x25f7,	// (0x0003b859) query_popup_pane

0xb673,	// (0x000448d5) bg_popup_window_pane_cp15_ParamLimits

0xb673,	// (0x000448d5) bg_popup_window_pane_cp15

0x8b26,	// (0x00041d88) indicator_popup_pane_cp1_ParamLimits

0x8b26,	// (0x00041d88) indicator_popup_pane_cp1

0x8b39,	// (0x00041d9b) indicator_popup_pane_cp2_ParamLimits

0x8b39,	// (0x00041d9b) indicator_popup_pane_cp2

0x8b4c,	// (0x00041dae) popup_query_data_code_window_g1_ParamLimits

0x8b4c,	// (0x00041dae) popup_query_data_code_window_g1

0xb691,	// (0x000448f3) popup_query_data_code_window_t1_ParamLimits

0xb691,	// (0x000448f3) popup_query_data_code_window_t1

0xb6a3,	// (0x00044905) popup_query_data_code_window_t2_ParamLimits

0xb6a3,	// (0x00044905) popup_query_data_code_window_t2

0x8b5f,	// (0x00041dc1) popup_query_data_code_window_t3_ParamLimits

0x8b5f,	// (0x00041dc1) popup_query_data_code_window_t3

0x8b75,	// (0x00041dd7) popup_query_data_code_window_t4_ParamLimits

0x8b75,	// (0x00041dd7) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000487c7) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000487c7) popup_query_data_code_window_t

0x06eb,	// (0x0003994d) list_single_midp_graphic_pane_g3

0x8b8d,	// (0x00041def) query_popup_data_pane_cp2_ParamLimits

0x8ba0,	// (0x00041e02) query_popup_pane_cp2_ParamLimits

0x8ba0,	// (0x00041e02) query_popup_pane_cp2

0xb445,	// (0x000446a7) bg_popup_window_pane_cp11

0x24f5,	// (0x0003b757) heading_pane_cp5

0x24fd,	// (0x0003b75f) listscroll_popup_info_pane

0xb445,	// (0x000446a7) input_focus_pane_cp3

0xb6b5,	// (0x00044917) query_popup_pane_t1

0xb6c3,	// (0x00044925) list_popup_info_pane_ParamLimits

0xb6c3,	// (0x00044925) list_popup_info_pane

0xb6d2,	// (0x00044934) listscroll_popup_info_pane_g1

0xb6da,	// (0x0004493c) scroll_pane_cp7

0x8bb3,	// (0x00041e15) popup_info_list_pane_t1_ParamLimits

0x8bb3,	// (0x00041e15) popup_info_list_pane_t1

0x8bcd,	// (0x00041e2f) popup_info_list_pane_t2_ParamLimits

0x8bcd,	// (0x00041e2f) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000487d0) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000487d0) popup_info_list_pane_t

0xb445,	// (0x000446a7) bg_popup_window_pane_cp12

0xc953,	// (0x00045bb5) find_popup_pane

0xb4a1,	// (0x00044703) bg_popup_window_pane_cp3

0xb6e4,	// (0x00044946) heading_pane_cp3

0xb6f3,	// (0x00044955) listscroll_popup_graphic_pane

0xb445,	// (0x000446a7) bg_popup_window_pane_cp4

0x8c37,	// (0x00041e99) heading_pane_cp4

0xb703,	// (0x00044965) listscroll_popup_colour_pane

0x8c41,	// (0x00041ea3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8c41,	// (0x00041ea3) cell_large_graphic_colour_none_popup_pane

0x8c55,	// (0x00041eb7) grid_large_graphic_colour_popup_pane_ParamLimits

0x8c55,	// (0x00041eb7) grid_large_graphic_colour_popup_pane

0x8c79,	// (0x00041edb) listscroll_popup_colour_pane_g1_ParamLimits

0x8c79,	// (0x00041edb) listscroll_popup_colour_pane_g1

0x8c90,	// (0x00041ef2) listscroll_popup_colour_pane_g2_ParamLimits

0x8c90,	// (0x00041ef2) listscroll_popup_colour_pane_g2

0x8ca7,	// (0x00041f09) listscroll_popup_colour_pane_g3_ParamLimits

0x8ca7,	// (0x00041f09) listscroll_popup_colour_pane_g3

0x8cb7,	// (0x00041f19) listscroll_popup_colour_pane_g4_ParamLimits

0x8cb7,	// (0x00041f19) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000487d5) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000487d5) listscroll_popup_colour_pane_g

0xb70b,	// (0x0004496d) scroll_pane_cp6_ParamLimits

0xb70b,	// (0x0004496d) scroll_pane_cp6

0x8cc7,	// (0x00041f29) cell_large_graphic_colour_popup_pane_ParamLimits

0x8cc7,	// (0x00041f29) cell_large_graphic_colour_popup_pane

0x8ce6,	// (0x00041f48) cell_large_graphic_colour_none_popup_pane_t1

0xb445,	// (0x000446a7) grid_highlight_pane_cp5

0xb71d,	// (0x0004497f) cell_large_graphic_colour_popup_pane_g1

0xb725,	// (0x00044987) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000487de) cell_large_graphic_colour_popup_pane_g

0xb72d,	// (0x0004498f) cell_large_graphic_colour_popup_pane_g2_copy1

0xb736,	// (0x00044998) grid_highlight_pane_cp4

0xb73e,	// (0x000449a0) bg_popup_window_pane_cp8_ParamLimits

0xb73e,	// (0x000449a0) bg_popup_window_pane_cp8

0x8cf5,	// (0x00041f57) popup_snote_single_text_window_g1_ParamLimits

0x8cf5,	// (0x00041f57) popup_snote_single_text_window_g1

0x8d07,	// (0x00041f69) popup_snote_single_text_window_t1_ParamLimits

0x8d07,	// (0x00041f69) popup_snote_single_text_window_t1

0x8d1a,	// (0x00041f7c) popup_snote_single_text_window_t2_ParamLimits

0x8d1a,	// (0x00041f7c) popup_snote_single_text_window_t2

0x8d2d,	// (0x00041f8f) popup_snote_single_text_window_t3_ParamLimits

0x8d2d,	// (0x00041f8f) popup_snote_single_text_window_t3

0x8d66,	// (0x00041fc8) popup_snote_single_text_window_t4_ParamLimits

0x8d66,	// (0x00041fc8) popup_snote_single_text_window_t4

0x8d9a,	// (0x00041ffc) popup_snote_single_text_window_t5_ParamLimits

0x8d9a,	// (0x00041ffc) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000487e3) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000487e3) popup_snote_single_text_window_t

0xb759,	// (0x000449bb) bg_popup_window_pane_cp9_ParamLimits

0xb759,	// (0x000449bb) bg_popup_window_pane_cp9

0x8cf5,	// (0x00041f57) popup_snote_single_graphic_window_g1_ParamLimits

0x8cf5,	// (0x00041f57) popup_snote_single_graphic_window_g1

0xb767,	// (0x000449c9) popup_snote_single_graphic_window_g2_ParamLimits

0xb767,	// (0x000449c9) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000487ee) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000487ee) popup_snote_single_graphic_window_g

0xb773,	// (0x000449d5) popup_snote_single_graphic_window_t1_ParamLimits

0xb773,	// (0x000449d5) popup_snote_single_graphic_window_t1

0xb786,	// (0x000449e8) popup_snote_single_graphic_window_t2_ParamLimits

0xb786,	// (0x000449e8) popup_snote_single_graphic_window_t2

0x8d2d,	// (0x00041f8f) popup_snote_single_graphic_window_t3_ParamLimits

0x8d2d,	// (0x00041f8f) popup_snote_single_graphic_window_t3

0x8d66,	// (0x00041fc8) popup_snote_single_graphic_window_t4_ParamLimits

0x8d66,	// (0x00041fc8) popup_snote_single_graphic_window_t4

0x8dc9,	// (0x0004202b) popup_snote_single_graphic_window_t5_ParamLimits

0x8dc9,	// (0x0004202b) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000487f3) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000487f3) popup_snote_single_graphic_window_t

0x37a7,	// (0x0003ca09) grid_graphic_popup_pane_ParamLimits

0x37a7,	// (0x0003ca09) grid_graphic_popup_pane

0x37d1,	// (0x0003ca33) listscroll_popup_graphic_pane_g1_ParamLimits

0x37d1,	// (0x0003ca33) listscroll_popup_graphic_pane_g1

0xc8f1,	// (0x00045b53) listscroll_popup_graphic_pane_g2_ParamLimits

0xc8f1,	// (0x00045b53) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x00048bd9) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x00048bd9) listscroll_popup_graphic_pane_g

0x37f9,	// (0x0003ca5b) scroll_pane_cp5

0xc8b0,	// (0x00045b12) cell_graphic_popup_pane_ParamLimits

0xc8b0,	// (0x00045b12) cell_graphic_popup_pane

0x371e,	// (0x0003c980) cell_graphic_popup_pane_g1

0x3726,	// (0x0003c988) cell_graphic_popup_pane_g2

0xb72d,	// (0x0004498f) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x00048bd2) cell_graphic_popup_pane_g

0xc8a2,	// (0x00045b04) cell_graphic_popup_pane_t2

0xb736,	// (0x00044998) grid_highlight_pane_cp3

0xb7ab,	// (0x00044a0d) list_gen_pane_ParamLimits

0xb7ab,	// (0x00044a0d) list_gen_pane

0xb7d3,	// (0x00044a35) scroll_pane

0xc80c,	// (0x00045a6e) bg_list_pane_g1_ParamLimits

0xc80c,	// (0x00045a6e) bg_list_pane_g1

0xc827,	// (0x00045a89) bg_list_pane_g2_ParamLimits

0xc827,	// (0x00045a89) bg_list_pane_g2

0xc83a,	// (0x00045a9c) bg_list_pane_g3_ParamLimits

0xc83a,	// (0x00045a9c) bg_list_pane_g3

0xc84c,	// (0x00045aae) bg_list_pane_g4_ParamLimits

0xc84c,	// (0x00045aae) bg_list_pane_g4

0xc85e,	// (0x00045ac0) bg_list_pane_g5_ParamLimits

0xc85e,	// (0x00045ac0) bg_list_pane_g5

0x0004,

0xf965,	// (0x00048bc7) bg_list_pane_g_ParamLimits

0xf965,	// (0x00048bc7) bg_list_pane_g

0xc7d3,	// (0x00045a35) list_double2_graphic_large_graphic_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double2_graphic_large_graphic_pane

0xc7d3,	// (0x00045a35) list_double2_graphic_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double2_graphic_pane

0xc7d3,	// (0x00045a35) list_double2_large_graphic_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double2_large_graphic_pane

0xc7d3,	// (0x00045a35) list_double2_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double2_pane

0xc7d3,	// (0x00045a35) list_double_graphic_heading_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double_graphic_heading_pane

0xc7d3,	// (0x00045a35) list_double_graphic_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double_graphic_pane

0xc7d3,	// (0x00045a35) list_double_heading_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double_heading_pane

0xc7d3,	// (0x00045a35) list_double_large_graphic_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double_large_graphic_pane

0xc7d3,	// (0x00045a35) list_double_number_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double_number_pane

0xc7d3,	// (0x00045a35) list_double_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double_pane

0xc7d3,	// (0x00045a35) list_double_time_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_double_time_pane

0xc7d3,	// (0x00045a35) list_setting_number_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_setting_number_pane

0xc7d3,	// (0x00045a35) list_setting_pane_ParamLimits

0xc7d3,	// (0x00045a35) list_setting_pane

0x92a9,	// (0x0004250b) list_single_2graphic_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_2graphic_pane

0x92a9,	// (0x0004250b) list_single_graphic_heading_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_graphic_heading_pane

0x92a9,	// (0x0004250b) list_single_graphic_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_graphic_pane

0x92a9,	// (0x0004250b) list_single_heading_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_heading_pane

0x92a9,	// (0x0004250b) list_single_large_graphic_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_large_graphic_pane

0x92a9,	// (0x0004250b) list_single_number_heading_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_number_heading_pane

0x92a9,	// (0x0004250b) list_single_number_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_number_pane

0x92a9,	// (0x0004250b) list_single_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_pane

0xb445,	// (0x000446a7) list_highlight_pane_cp1

0xdb0b,	// (0x00046d6d) list_single_pane_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_pane_g1

0xdb17,	// (0x00046d79) list_single_pane_g2_ParamLimits

0xdb17,	// (0x00046d79) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00048805) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00048805) list_single_pane_g

0xaa42,	// (0x00043ca4) list_single_pane_t1_ParamLimits

0xaa42,	// (0x00043ca4) list_single_pane_t1

0xdb0b,	// (0x00046d6d) list_single_number_pane_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_number_pane_g1

0xdb17,	// (0x00046d79) list_single_number_pane_g2_ParamLimits

0xdb17,	// (0x00046d79) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00048805) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00048805) list_single_number_pane_g

0xdb23,	// (0x00046d85) list_single_number_pane_t1_ParamLimits

0xdb23,	// (0x00046d85) list_single_number_pane_t1

0xa998,	// (0x00043bfa) list_single_number_pane_t2_ParamLimits

0xa998,	// (0x00043bfa) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00048b88) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00048b88) list_single_number_pane_t

0xdaff,	// (0x00046d61) list_single_graphic_pane_g1_ParamLimits

0xdaff,	// (0x00046d61) list_single_graphic_pane_g1

0xdb0b,	// (0x00046d6d) list_single_graphic_pane_g2_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_graphic_pane_g2

0xdb17,	// (0x00046d79) list_single_graphic_pane_g3_ParamLimits

0xdb17,	// (0x00046d79) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000487fe) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000487fe) list_single_graphic_pane_g

0xdb23,	// (0x00046d85) list_single_graphic_pane_t1_ParamLimits

0xdb23,	// (0x00046d85) list_single_graphic_pane_t1

0xdb0b,	// (0x00046d6d) list_single_heading_pane_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_heading_pane_g1

0xdb17,	// (0x00046d79) list_single_heading_pane_g2_ParamLimits

0xdb17,	// (0x00046d79) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00048805) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00048805) list_single_heading_pane_g

0xdb39,	// (0x00046d9b) list_single_heading_pane_t1_ParamLimits

0xdb39,	// (0x00046d9b) list_single_heading_pane_t1

0xdb4f,	// (0x00046db1) list_single_heading_pane_t2_ParamLimits

0xdb4f,	// (0x00046db1) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004880a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004880a) list_single_heading_pane_t

0xdb0b,	// (0x00046d6d) list_single_number_heading_pane_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_number_heading_pane_g1

0xdb17,	// (0x00046d79) list_single_number_heading_pane_g2_ParamLimits

0xdb17,	// (0x00046d79) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00048805) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00048805) list_single_number_heading_pane_g

0xdb39,	// (0x00046d9b) list_single_number_heading_pane_t1_ParamLimits

0xdb39,	// (0x00046d9b) list_single_number_heading_pane_t1

0xdb61,	// (0x00046dc3) list_single_number_heading_pane_t2_ParamLimits

0xdb61,	// (0x00046dc3) list_single_number_heading_pane_t2

0xdb73,	// (0x00046dd5) list_single_number_heading_pane_t3_ParamLimits

0xdb73,	// (0x00046dd5) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0004880f) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0004880f) list_single_number_heading_pane_t

0xdb85,	// (0x00046de7) list_single_graphic_heading_pane_g1_ParamLimits

0xdb85,	// (0x00046de7) list_single_graphic_heading_pane_g1

0x8e02,	// (0x00042064) list_single_graphic_heading_pane_g4_ParamLimits

0x8e02,	// (0x00042064) list_single_graphic_heading_pane_g4

0xdb17,	// (0x00046d79) list_single_graphic_heading_pane_g5_ParamLimits

0xdb17,	// (0x00046d79) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00048816) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00048816) list_single_graphic_heading_pane_g

0xdb39,	// (0x00046d9b) list_single_graphic_heading_pane_t1_ParamLimits

0xdb39,	// (0x00046d9b) list_single_graphic_heading_pane_t1

0x8e13,	// (0x00042075) list_single_graphic_heading_pane_t2_ParamLimits

0x8e13,	// (0x00042075) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0004881d) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0004881d) list_single_graphic_heading_pane_t

0xdb91,	// (0x00046df3) list_single_large_graphic_pane_g1_ParamLimits

0xdb91,	// (0x00046df3) list_single_large_graphic_pane_g1

0xdb0b,	// (0x00046d6d) list_single_large_graphic_pane_g2_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_large_graphic_pane_g2

0xdb17,	// (0x00046d79) list_single_large_graphic_pane_g3_ParamLimits

0xdb17,	// (0x00046d79) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00048822) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00048822) list_single_large_graphic_pane_g

0x26b1,	// (0x0003b913) wait_border_pane_g2_copy1

0x8e25,	// (0x00042087) list_single_large_graphic_pane_g4_cp2

0xdb23,	// (0x00046d85) list_single_large_graphic_pane_t1_ParamLimits

0xdb23,	// (0x00046d85) list_single_large_graphic_pane_t1

0xdb9d,	// (0x00046dff) list_double_pane_g1_ParamLimits

0xdb9d,	// (0x00046dff) list_double_pane_g1

0xdba9,	// (0x00046e0b) list_double_pane_g2_ParamLimits

0xdba9,	// (0x00046e0b) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00048829) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00048829) list_double_pane_g

0x8e2d,	// (0x0004208f) list_double_pane_t1_ParamLimits

0x8e2d,	// (0x0004208f) list_double_pane_t1

0x8e43,	// (0x000420a5) list_double_pane_t2_ParamLimits

0x8e43,	// (0x000420a5) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0004882e) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0004882e) list_double_pane_t

0x8e55,	// (0x000420b7) list_double2_pane_g1_ParamLimits

0x8e55,	// (0x000420b7) list_double2_pane_g1

0xdba9,	// (0x00046e0b) list_double2_pane_g2_ParamLimits

0xdba9,	// (0x00046e0b) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00048833) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00048833) list_double2_pane_g

0x8e2d,	// (0x0004208f) list_double2_pane_t1_ParamLimits

0x8e2d,	// (0x0004208f) list_double2_pane_t1

0x8e66,	// (0x000420c8) list_double2_pane_t2_ParamLimits

0x8e66,	// (0x000420c8) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00048838) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00048838) list_double2_pane_t

0xdb9d,	// (0x00046dff) list_double_number_pane_g1_ParamLimits

0xdb9d,	// (0x00046dff) list_double_number_pane_g1

0xdba9,	// (0x00046e0b) list_double_number_pane_g2_ParamLimits

0xdba9,	// (0x00046e0b) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00048829) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00048829) list_double_number_pane_g

0x8e78,	// (0x000420da) list_double_number_pane_t1_ParamLimits

0x8e78,	// (0x000420da) list_double_number_pane_t1

0x8e8a,	// (0x000420ec) list_double_number_pane_t2_ParamLimits

0x8e8a,	// (0x000420ec) list_double_number_pane_t2

0x8ea0,	// (0x00042102) list_double_number_pane_t3_ParamLimits

0x8ea0,	// (0x00042102) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0004883d) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0004883d) list_double_number_pane_t

0x8eb2,	// (0x00042114) list_double_graphic_pane_g1_ParamLimits

0x8eb2,	// (0x00042114) list_double_graphic_pane_g1

0xdbb5,	// (0x00046e17) list_double_graphic_pane_g2_ParamLimits

0xdbb5,	// (0x00046e17) list_double_graphic_pane_g2

0xdbc4,	// (0x00046e26) list_double_graphic_pane_g3_ParamLimits

0xdbc4,	// (0x00046e26) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00048844) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00048844) list_double_graphic_pane_g

0x8eca,	// (0x0004212c) list_double_graphic_pane_t1_ParamLimits

0x8eca,	// (0x0004212c) list_double_graphic_pane_t1

0x8ee0,	// (0x00042142) list_double_graphic_pane_t2_ParamLimits

0x8ee0,	// (0x00042142) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0004884d) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0004884d) list_double_graphic_pane_t

0x8ef2,	// (0x00042154) list_double2_graphic_pane_g1_ParamLimits

0x8ef2,	// (0x00042154) list_double2_graphic_pane_g1

0xdbd0,	// (0x00046e32) list_double2_graphic_pane_g2_ParamLimits

0xdbd0,	// (0x00046e32) list_double2_graphic_pane_g2

0xdbdc,	// (0x00046e3e) list_double2_graphic_pane_g3_ParamLimits

0xdbdc,	// (0x00046e3e) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00048852) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00048852) list_double2_graphic_pane_g

0x8e8a,	// (0x000420ec) list_double2_graphic_pane_t1_ParamLimits

0x8e8a,	// (0x000420ec) list_double2_graphic_pane_t1

0x8efe,	// (0x00042160) list_double2_graphic_pane_t2_ParamLimits

0x8efe,	// (0x00042160) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048859) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048859) list_double2_graphic_pane_t

0x8f10,	// (0x00042172) list_double_large_graphic_pane_g1_ParamLimits

0x8f10,	// (0x00042172) list_double_large_graphic_pane_g1

0x8e55,	// (0x000420b7) list_double_large_graphic_pane_g2_ParamLimits

0x8e55,	// (0x000420b7) list_double_large_graphic_pane_g2

0xdba9,	// (0x00046e0b) list_double_large_graphic_pane_g3_ParamLimits

0xdba9,	// (0x00046e0b) list_double_large_graphic_pane_g3

0x8f23,	// (0x00042185) list_double_large_graphic_pane_g4_ParamLimits

0x8f23,	// (0x00042185) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0004885e) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0004885e) list_double_large_graphic_pane_g

0x8f35,	// (0x00042197) list_double_large_graphic_pane_t1_ParamLimits

0x8f35,	// (0x00042197) list_double_large_graphic_pane_t1

0x8f4e,	// (0x000421b0) list_double_large_graphic_pane_t2_ParamLimits

0x8f4e,	// (0x000421b0) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00048869) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00048869) list_double_large_graphic_pane_t

0x8f60,	// (0x000421c2) list_double2_large_graphic_pane_g1_ParamLimits

0x8f60,	// (0x000421c2) list_double2_large_graphic_pane_g1

0x8e55,	// (0x000420b7) list_double2_large_graphic_pane_g2_ParamLimits

0x8e55,	// (0x000420b7) list_double2_large_graphic_pane_g2

0xdba9,	// (0x00046e0b) list_double2_large_graphic_pane_g3_ParamLimits

0xdba9,	// (0x00046e0b) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0004886e) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004886e) list_double2_large_graphic_pane_g

0x8e8a,	// (0x000420ec) list_double2_large_graphic_pane_t1_ParamLimits

0x8e8a,	// (0x000420ec) list_double2_large_graphic_pane_t1

0x8efe,	// (0x00042160) list_double2_large_graphic_pane_t2_ParamLimits

0x8efe,	// (0x00042160) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048859) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048859) list_double2_large_graphic_pane_t

0x8f6c,	// (0x000421ce) list_double_heading_pane_g1_ParamLimits

0x8f6c,	// (0x000421ce) list_double_heading_pane_g1

0xdbfd,	// (0x00046e5f) list_double_heading_pane_g2_ParamLimits

0xdbfd,	// (0x00046e5f) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00048875) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00048875) list_double_heading_pane_g

0x8f7d,	// (0x000421df) list_double_heading_pane_t1_ParamLimits

0x8f7d,	// (0x000421df) list_double_heading_pane_t1

0x8efe,	// (0x00042160) list_double_heading_pane_t2_ParamLimits

0x8efe,	// (0x00042160) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0004887a) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0004887a) list_double_heading_pane_t

0x8f93,	// (0x000421f5) list_double_graphic_heading_pane_g1_ParamLimits

0x8f93,	// (0x000421f5) list_double_graphic_heading_pane_g1

0x8f6c,	// (0x000421ce) list_double_graphic_heading_pane_g2_ParamLimits

0x8f6c,	// (0x000421ce) list_double_graphic_heading_pane_g2

0xdbfd,	// (0x00046e5f) list_double_graphic_heading_pane_g3_ParamLimits

0xdbfd,	// (0x00046e5f) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0004887f) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0004887f) list_double_graphic_heading_pane_g

0x8f7d,	// (0x000421df) list_double_graphic_heading_pane_t1_ParamLimits

0x8f7d,	// (0x000421df) list_double_graphic_heading_pane_t1

0x8efe,	// (0x00042160) list_double_graphic_heading_pane_t2_ParamLimits

0x8efe,	// (0x00042160) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0004887a) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0004887a) list_double_graphic_heading_pane_t

0x8e55,	// (0x000420b7) list_double_time_pane_g1_ParamLimits

0x8e55,	// (0x000420b7) list_double_time_pane_g1

0xdba9,	// (0x00046e0b) list_double_time_pane_g2_ParamLimits

0xdba9,	// (0x00046e0b) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00048833) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00048833) list_double_time_pane_g

0xdc09,	// (0x00046e6b) list_double_time_pane_t1_ParamLimits

0xdc09,	// (0x00046e6b) list_double_time_pane_t1

0xdc1f,	// (0x00046e81) list_double_time_pane_t2_ParamLimits

0xdc1f,	// (0x00046e81) list_double_time_pane_t2

0xdc31,	// (0x00046e93) list_double_time_pane_t3_ParamLimits

0xdc31,	// (0x00046e93) list_double_time_pane_t3

0xdc43,	// (0x00046ea5) list_double_time_pane_t4_ParamLimits

0xdc43,	// (0x00046ea5) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00048886) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00048886) list_double_time_pane_t

0xdc55,	// (0x00046eb7) list_setting_pane_g1_ParamLimits

0xdc55,	// (0x00046eb7) list_setting_pane_g1

0xdc61,	// (0x00046ec3) list_setting_pane_g2_ParamLimits

0xdc61,	// (0x00046ec3) list_setting_pane_g2

0x0001,

0xf62d,	// (0x0004888f) list_setting_pane_g_ParamLimits

0xf62d,	// (0x0004888f) list_setting_pane_g

0x8f9f,	// (0x00042201) list_setting_pane_t1_ParamLimits

0x8f9f,	// (0x00042201) list_setting_pane_t1

0x8fb6,	// (0x00042218) list_setting_pane_t2_ParamLimits

0x8fb6,	// (0x00042218) list_setting_pane_t2

0x0002,

0xf632,	// (0x00048894) list_setting_pane_t_ParamLimits

0xf632,	// (0x00048894) list_setting_pane_t

0x8ff5,	// (0x00042257) set_value_pane_cp_ParamLimits

0x8ff5,	// (0x00042257) set_value_pane_cp

0xdc6d,	// (0x00046ecf) list_setting_number_pane_g1_ParamLimits

0xdc6d,	// (0x00046ecf) list_setting_number_pane_g1

0xdc79,	// (0x00046edb) list_setting_number_pane_g2_ParamLimits

0xdc79,	// (0x00046edb) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x0004889b) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x0004889b) list_setting_number_pane_g

0x9001,	// (0x00042263) list_setting_number_pane_t1_ParamLimits

0x9001,	// (0x00042263) list_setting_number_pane_t1

0xdc85,	// (0x00046ee7) list_setting_number_pane_t2_ParamLimits

0xdc85,	// (0x00046ee7) list_setting_number_pane_t2

0x9015,	// (0x00042277) list_setting_number_pane_t3_ParamLimits

0x9015,	// (0x00042277) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x000488a0) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x000488a0) list_setting_number_pane_t

0x8ff5,	// (0x00042257) set_value_pane_ParamLimits

0x8ff5,	// (0x00042257) set_value_pane

0xb807,	// (0x00044a69) bg_set_opt_pane_ParamLimits

0xb807,	// (0x00044a69) bg_set_opt_pane

0x902d,	// (0x0004228f) set_value_pane_t1

0xb828,	// (0x00044a8a) slider_set_pane_cp3

0x903b,	// (0x0004229d) volume_small_pane_cp

0xb831,	// (0x00044a93) list_form_gen_pane

0xb83a,	// (0x00044a9c) scroll_pane_cp8

0x9044,	// (0x000422a6) form_field_data_pane_ParamLimits

0x9044,	// (0x000422a6) form_field_data_pane

0x905b,	// (0x000422bd) form_field_data_wide_pane_ParamLimits

0x905b,	// (0x000422bd) form_field_data_wide_pane

0x907b,	// (0x000422dd) form_field_popup_pane_ParamLimits

0x907b,	// (0x000422dd) form_field_popup_pane

0x9093,	// (0x000422f5) form_field_popup_wide_pane_ParamLimits

0x9093,	// (0x000422f5) form_field_popup_wide_pane

0xdcd7,	// (0x00046f39) form_field_slider_pane_ParamLimits

0xdcd7,	// (0x00046f39) form_field_slider_pane

0x90b0,	// (0x00042312) form_field_slider_wide_pane_ParamLimits

0x90b0,	// (0x00042312) form_field_slider_wide_pane

0xb84b,	// (0x00044aad) data_form_pane

0x90cd,	// (0x0004232f) form_field_data_pane_t1

0xb857,	// (0x00044ab9) input_focus_pane

0x90e7,	// (0x00042349) data_form_wide_pane

0x9104,	// (0x00042366) form_field_data_wide_pane_t1

0xb74b,	// (0x000449ad) input_focus_pane_cp6

0x9126,	// (0x00042388) form_field_popup_pane_t1

0xb857,	// (0x00044ab9) input_focus_pane_cp7

0xb885,	// (0x00044ae7) list_form_pane

0x9148,	// (0x000423aa) form_field_popup_wide_pane_t1

0xb857,	// (0x00044ab9) input_focus_pane_cp8

0xb891,	// (0x00044af3) list_form_wide_pane

0x9165,	// (0x000423c7) form_field_slider_pane_t1_ParamLimits

0x9165,	// (0x000423c7) form_field_slider_pane_t1

0x917d,	// (0x000423df) form_field_slider_pane_t2_ParamLimits

0x917d,	// (0x000423df) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x000488b0) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x000488b0) form_field_slider_pane_t

0xb493,	// (0x000446f5) input_focus_pane_cp9_ParamLimits

0xb493,	// (0x000446f5) input_focus_pane_cp9

0x9192,	// (0x000423f4) slider_cont_pane_ParamLimits

0x9192,	// (0x000423f4) slider_cont_pane

0xb89d,	// (0x00044aff) form_field_slider_wide_pane_t1_ParamLimits

0xb89d,	// (0x00044aff) form_field_slider_wide_pane_t1

0x91a6,	// (0x00042408) form_field_slider_wide_pane_t2_ParamLimits

0x91a6,	// (0x00042408) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x000488b5) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x000488b5) form_field_slider_wide_pane_t

0xb493,	// (0x000446f5) input_focus_pane_cp10_ParamLimits

0xb493,	// (0x000446f5) input_focus_pane_cp10

0x91b8,	// (0x0004241a) slider_cont_pane_cp1_ParamLimits

0x91b8,	// (0x0004241a) slider_cont_pane_cp1

0x91cc,	// (0x0004242e) slider_form_pane_cp

0xb8af,	// (0x00044b11) input_focus_pane_g1

0xb8b7,	// (0x00044b19) input_focus_pane_g2

0xb8bf,	// (0x00044b21) input_focus_pane_g3

0xb8c7,	// (0x00044b29) input_focus_pane_g4

0xb8cf,	// (0x00044b31) input_focus_pane_g5

0xb8d7,	// (0x00044b39) input_focus_pane_g6

0xb8df,	// (0x00044b41) input_focus_pane_g7

0xb8e7,	// (0x00044b49) input_focus_pane_g8

0xb8ef,	// (0x00044b51) input_focus_pane_g9

0xb43b,	// (0x0004469d) input_focus_pane_g10

0x0009,

0xf658,	// (0x000488ba) input_focus_pane_g

0x26ba,	// (0x0003b91c) wait_border_pane_g3_copy1

0x91d4,	// (0x00042436) data_form_pane_t1

0xb43b,	// (0x0004469d) wait_anim_pane_g1_copy1

0xaa16,	// (0x00043c78) data_form_wide_pane_t1

0x91ee,	// (0x00042450) list_form_graphic_pane_cp_ParamLimits

0x91ee,	// (0x00042450) list_form_graphic_pane_cp

0x35a9,	// (0x0003c80b) slider_form_pane_g1

0x35b2,	// (0x0003c814) slider_form_pane_g2

0x0006,

0xf956,	// (0x00048bb8) slider_form_pane_g

0x91ee,	// (0x00042450) list_form_graphic_pane_ParamLimits

0x91ee,	// (0x00042450) list_form_graphic_pane

0x9201,	// (0x00042463) list_form_graphic_pane_g1

0x9209,	// (0x0004246b) list_form_graphic_pane_t1_ParamLimits

0x9209,	// (0x0004246b) list_form_graphic_pane_t1

0xb4a1,	// (0x00044703) list_highlight_pane_cp5_ParamLimits

0xb4a1,	// (0x00044703) list_highlight_pane_cp5

0x921e,	// (0x00042480) find_pane_g1

0xb8f7,	// (0x00044b59) input_find_pane

0x9227,	// (0x00042489) input_find_pane_g1_ParamLimits

0x9227,	// (0x00042489) input_find_pane_g1

0x9233,	// (0x00042495) input_find_pane_t1_ParamLimits

0x9233,	// (0x00042495) input_find_pane_t1

0x9248,	// (0x000424aa) input_find_pane_t2_ParamLimits

0x9248,	// (0x000424aa) input_find_pane_t2

0x0001,

0xf66d,	// (0x000488cf) input_find_pane_t_ParamLimits

0xf66d,	// (0x000488cf) input_find_pane_t

0xb900,	// (0x00044b62) input_focus_pane_cp5_ParamLimits

0xb900,	// (0x00044b62) input_focus_pane_cp5

0xb913,	// (0x00044b75) bg_popup_window_pane_cp2_ParamLimits

0xb913,	// (0x00044b75) bg_popup_window_pane_cp2

0xb920,	// (0x00044b82) listscroll_menu_pane_ParamLimits

0xb920,	// (0x00044b82) listscroll_menu_pane

0x9269,	// (0x000424cb) popup_submenu_window_ParamLimits

0x9269,	// (0x000424cb) popup_submenu_window

0xb92c,	// (0x00044b8e) find_popup_pane_g1

0x9291,	// (0x000424f3) input_popup_find_pane_cp

0xb934,	// (0x00044b96) input_focus_pane_cp4_ParamLimits

0xb934,	// (0x00044b96) input_focus_pane_cp4

0xb942,	// (0x00044ba4) input_popup_find_pane_t1_ParamLimits

0xb942,	// (0x00044ba4) input_popup_find_pane_t1

0xb445,	// (0x000446a7) bg_popup_sub_pane_cp

0xb970,	// (0x00044bd2) listscroll_popup_sub_pane

0xb978,	// (0x00044bda) list_submenu_pane_ParamLimits

0xb978,	// (0x00044bda) list_submenu_pane

0xb989,	// (0x00044beb) scroll_pane_cp4

0x92a9,	// (0x0004250b) list_single_popup_submenu_pane_ParamLimits

0x92a9,	// (0x0004250b) list_single_popup_submenu_pane

0x92bd,	// (0x0004251f) list_single_popup_submenu_pane_g1

0x92c5,	// (0x00042527) list_single_popup_submenu_pane_t1_ParamLimits

0x92c5,	// (0x00042527) list_single_popup_submenu_pane_t1

0xb493,	// (0x000446f5) bg_active_tab_pane_cp1_ParamLimits

0xb493,	// (0x000446f5) bg_active_tab_pane_cp1

0xb991,	// (0x00044bf3) tabs_2_active_pane_g1

0x92da,	// (0x0004253c) tabs_2_active_pane_t1

0xb493,	// (0x000446f5) bg_passive_tab_pane_cp1_ParamLimits

0xb493,	// (0x000446f5) bg_passive_tab_pane_cp1

0xb991,	// (0x00044bf3) tabs_2_passive_pane_g1

0x92da,	// (0x0004253c) tabs_2_passive_pane_t1

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp4

0x92ec,	// (0x0004254e) tabs_2_long_active_pane_t1

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp4

0x06f3,	// (0x00039955) list_single_midp_graphic_pane_g4_ParamLimits

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp5

0x92ff,	// (0x00042561) tabs_3_long_active_pane_t1

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp5

0x06f3,	// (0x00039955) list_single_midp_graphic_pane_g4

0xb4a1,	// (0x00044703) bg_popup_window_pane_cp13_ParamLimits

0xb4a1,	// (0x00044703) bg_popup_window_pane_cp13

0xb9a5,	// (0x00044c07) listscroll_popup_fast_pane_ParamLimits

0xb9a5,	// (0x00044c07) listscroll_popup_fast_pane

0xb9b1,	// (0x00044c13) grid_popup_fast_pane_ParamLimits

0xb9b1,	// (0x00044c13) grid_popup_fast_pane

0xb9c3,	// (0x00044c25) scroll_pane_cp9_ParamLimits

0xb9c3,	// (0x00044c25) scroll_pane_cp9

0x4eeb,	// (0x0003e14d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4eeb,	// (0x0003e14d) list_single_graphic_hl_pane_t1_cp2

0xb9d6,	// (0x00044c38) input_focus_pane_cp20_ParamLimits

0xb9d6,	// (0x00044c38) input_focus_pane_cp20

0xb9e4,	// (0x00044c46) query_popup_data_pane_t1_ParamLimits

0xb9e4,	// (0x00044c46) query_popup_data_pane_t1

0xb9f7,	// (0x00044c59) query_popup_data_pane_t2_ParamLimits

0xb9f7,	// (0x00044c59) query_popup_data_pane_t2

0xba3d,	// (0x00044c9f) query_popup_data_pane_t3_ParamLimits

0xba3d,	// (0x00044c9f) query_popup_data_pane_t3

0xba7e,	// (0x00044ce0) query_popup_data_pane_t4_ParamLimits

0xba7e,	// (0x00044ce0) query_popup_data_pane_t4

0xbaba,	// (0x00044d1c) query_popup_data_pane_t5_ParamLimits

0xbaba,	// (0x00044d1c) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x000488d4) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x000488d4) query_popup_data_pane_t

0xb8af,	// (0x00044b11) bg_set_opt_pane_g1

0xb8b7,	// (0x00044b19) bg_set_opt_pane_g2

0xb8bf,	// (0x00044b21) bg_set_opt_pane_g3

0xb8c7,	// (0x00044b29) bg_set_opt_pane_g4

0xb8cf,	// (0x00044b31) bg_set_opt_pane_g5

0xb8d7,	// (0x00044b39) bg_set_opt_pane_g6

0xb8df,	// (0x00044b41) bg_set_opt_pane_g7

0xb8e7,	// (0x00044b49) bg_set_opt_pane_g8

0xb8ef,	// (0x00044b51) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x000488df) bg_set_opt_pane_g

0xf2bc,	// (0x0004851e) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x0004851e) control_top_pane_stacon

0xf30f,	// (0x00048571) signal_pane_stacon_ParamLimits

0xf30f,	// (0x00048571) signal_pane_stacon

0xbe46,	// (0x000450a8) stacon_top_pane_g1_ParamLimits

0xbe46,	// (0x000450a8) stacon_top_pane_g1

0xf334,	// (0x00048596) title_pane_stacon_ParamLimits

0xf334,	// (0x00048596) title_pane_stacon

0xf35e,	// (0x000485c0) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x000485c0) uni_indicator_pane_stacon

0xf373,	// (0x000485d5) battery_pane_stacon_ParamLimits

0xf373,	// (0x000485d5) battery_pane_stacon

0xf3b7,	// (0x00048619) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x00048619) control_bottom_pane_stacon

0xf3da,	// (0x0004863c) navi_pane_stacon_ParamLimits

0xf3da,	// (0x0004863c) navi_pane_stacon

0xbe68,	// (0x000450ca) stacon_bottom_pane_g1_ParamLimits

0xbe68,	// (0x000450ca) stacon_bottom_pane_g1

0xf07f,	// (0x000482e1) aid_levels_signal_lsc_ParamLimits

0xf07f,	// (0x000482e1) aid_levels_signal_lsc

0xf095,	// (0x000482f7) signal_pane_stacon_g1_ParamLimits

0xf095,	// (0x000482f7) signal_pane_stacon_g1

0xf0a9,	// (0x0004830b) signal_pane_stacon_g2_ParamLimits

0xf0a9,	// (0x0004830b) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x000488f2) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x000488f2) signal_pane_stacon_g

0xf0de,	// (0x00048340) title_pane_stacon_t1_ParamLimits

0xf0de,	// (0x00048340) title_pane_stacon_t1

0xbafe,	// (0x00044d60) uni_indicator_pane_stacon_g1

0xbb08,	// (0x00044d6a) uni_indicator_pane_stacon_g2

0xbb12,	// (0x00044d74) uni_indicator_pane_stacon_g3

0xbb1c,	// (0x00044d7e) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x000488fe) uni_indicator_pane_stacon_g

0xf103,	// (0x00048365) control_top_pane_stacon_g1

0xf10b,	// (0x0004836d) control_top_pane_stacon_t1_ParamLimits

0xf10b,	// (0x0004836d) control_top_pane_stacon_t1

0xf142,	// (0x000483a4) aid_levels_battery_lsc_ParamLimits

0xf142,	// (0x000483a4) aid_levels_battery_lsc

0xf159,	// (0x000483bb) battery_pane_stacon_g1_ParamLimits

0xf159,	// (0x000483bb) battery_pane_stacon_g1

0xf16c,	// (0x000483ce) battery_pane_stacon_g2_ParamLimits

0xf16c,	// (0x000483ce) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00048907) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00048907) battery_pane_stacon_g

0xf1aa,	// (0x0004840c) navi_icon_pane_stacon

0xf1be,	// (0x00048420) navi_navi_pane_stacon

0xf1aa,	// (0x0004840c) navi_text_pane_stacon

0xf103,	// (0x00048365) control_bottom_pane_stacon_g1

0xf1d2,	// (0x00048434) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x00048434) control_bottom_pane_stacon_t1

0x932b,	// (0x0004258d) grid_app_pane_ParamLimits

0x932b,	// (0x0004258d) grid_app_pane

0x9363,	// (0x000425c5) scroll_pane_cp15_ParamLimits

0x9363,	// (0x000425c5) scroll_pane_cp15

0x9378,	// (0x000425da) cell_app_pane_ParamLimits

0x9378,	// (0x000425da) cell_app_pane

0x93bd,	// (0x0004261f) cell_app_pane_g1_ParamLimits

0x93bd,	// (0x0004261f) cell_app_pane_g1

0xbb40,	// (0x00044da2) cell_app_pane_g2_ParamLimits

0xbb40,	// (0x00044da2) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x0004890c) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x0004890c) cell_app_pane_g

0x93e1,	// (0x00042643) cell_app_pane_t1_ParamLimits

0x93e1,	// (0x00042643) cell_app_pane_t1

0xbb4c,	// (0x00044dae) grid_highlight_pane_ParamLimits

0xbb4c,	// (0x00044dae) grid_highlight_pane

0xb8af,	// (0x00044b11) cell_highlight_pane_g1

0xb8b7,	// (0x00044b19) cell_highlight_pane_g2

0xb8bf,	// (0x00044b21) cell_highlight_pane_g3

0xb8c7,	// (0x00044b29) cell_highlight_pane_g4

0xb8cf,	// (0x00044b31) cell_highlight_pane_g5

0xb8d7,	// (0x00044b39) cell_highlight_pane_g6

0xb8df,	// (0x00044b41) cell_highlight_pane_g7

0xb8e7,	// (0x00044b49) cell_highlight_pane_g8

0xb8ef,	// (0x00044b51) cell_highlight_pane_g9

0xb43b,	// (0x0004469d) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x000488ba) cell_highlight_pane_g

0xbb5d,	// (0x00044dbf) bg_scroll_pane

0x9401,	// (0x00042663) scroll_handle_pane

0xbba4,	// (0x00044e06) scroll_bg_pane_g1

0xbbb9,	// (0x00044e1b) scroll_bg_pane_g2

0xbbd1,	// (0x00044e33) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00048911) scroll_bg_pane_g

0x9415,	// (0x00042677) scroll_handle_focus_pane_ParamLimits

0x9415,	// (0x00042677) scroll_handle_focus_pane

0xbba4,	// (0x00044e06) scroll_handle_pane_g1

0xbbe6,	// (0x00044e48) scroll_handle_pane_g2

0xbbd1,	// (0x00044e33) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00048918) scroll_handle_pane_g

0xb934,	// (0x00044b96) bg_popup_sub_pane_cp21_ParamLimits

0xb934,	// (0x00044b96) bg_popup_sub_pane_cp21

0x9422,	// (0x00042684) popup_fep_japan_predictive_window_t1_ParamLimits

0x9422,	// (0x00042684) popup_fep_japan_predictive_window_t1

0x9439,	// (0x0004269b) popup_fep_japan_predictive_window_t2_ParamLimits

0x9439,	// (0x0004269b) popup_fep_japan_predictive_window_t2

0x946c,	// (0x000426ce) popup_fep_japan_predictive_window_t3_ParamLimits

0x946c,	// (0x000426ce) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x0004891f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x0004891f) popup_fep_japan_predictive_window_t

0xb445,	// (0x000446a7) bg_popup_sub_pane_cp23

0x94a3,	// (0x00042705) listscroll_japin_cand_pane

0xbbfa,	// (0x00044e5c) popup_fep_japan_candidate_window_t1

0xbc08,	// (0x00044e6a) candidate_pane_ParamLimits

0xbc08,	// (0x00044e6a) candidate_pane

0x94ab,	// (0x0004270d) scroll_pane_cp30

0xbc1a,	// (0x00044e7c) list_single_popup_jap_candidate_pane_ParamLimits

0xbc1a,	// (0x00044e7c) list_single_popup_jap_candidate_pane

0xb445,	// (0x000446a7) list_highlight_pane_cp30

0xbc2f,	// (0x00044e91) list_single_popup_jap_candidate_pane_t1

0xbc3e,	// (0x00044ea0) level_1_signal

0xbc4b,	// (0x00044ead) level_2_signal

0xbc58,	// (0x00044eba) level_3_signal

0xbc65,	// (0x00044ec7) level_4_signal

0xbc72,	// (0x00044ed4) level_5_signal

0xbc7f,	// (0x00044ee1) level_6_signal

0xbc8c,	// (0x00044eee) level_7_signal

0xbc3e,	// (0x00044ea0) level_1_battery

0xbc4b,	// (0x00044ead) level_2_battery

0xbc58,	// (0x00044eba) level_3_battery

0xbc65,	// (0x00044ec7) level_4_battery

0xbc72,	// (0x00044ed4) level_5_battery

0xbc7f,	// (0x00044ee1) level_6_battery

0xbc8c,	// (0x00044eee) level_7_battery

0xbcb1,	// (0x00044f13) list_menu_pane_ParamLimits

0xbcb1,	// (0x00044f13) list_menu_pane

0xbcc7,	// (0x00044f29) scroll_pane_cp25_ParamLimits

0xbcc7,	// (0x00044f29) scroll_pane_cp25

0x94b3,	// (0x00042715) list_double2_graphic_pane_cp2_ParamLimits

0x94b3,	// (0x00042715) list_double2_graphic_pane_cp2

0x94b3,	// (0x00042715) list_double2_large_graphic_pane_cp2_ParamLimits

0x94b3,	// (0x00042715) list_double2_large_graphic_pane_cp2

0x94b3,	// (0x00042715) list_double2_pane_cp2_ParamLimits

0x94b3,	// (0x00042715) list_double2_pane_cp2

0x94b3,	// (0x00042715) list_double_graphic_pane_cp2_ParamLimits

0x94b3,	// (0x00042715) list_double_graphic_pane_cp2

0x94b3,	// (0x00042715) list_double_large_graphic_pane_cp2_ParamLimits

0x94b3,	// (0x00042715) list_double_large_graphic_pane_cp2

0x94b3,	// (0x00042715) list_double_number_pane_cp2_ParamLimits

0x94b3,	// (0x00042715) list_double_number_pane_cp2

0x94b3,	// (0x00042715) list_double_pane_cp2_ParamLimits

0x94b3,	// (0x00042715) list_double_pane_cp2

0x94c2,	// (0x00042724) list_single_2graphic_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_2graphic_pane_cp2

0x94c2,	// (0x00042724) list_single_graphic_heading_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_graphic_heading_pane_cp2

0x94c2,	// (0x00042724) list_single_graphic_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_graphic_pane_cp2

0x94c2,	// (0x00042724) list_single_heading_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_heading_pane_cp2

0xbcf0,	// (0x00044f52) list_single_large_graphic_pane_cp2_ParamLimits

0xbcf0,	// (0x00044f52) list_single_large_graphic_pane_cp2

0x94c2,	// (0x00042724) list_single_number_heading_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_number_heading_pane_cp2

0x94c2,	// (0x00042724) list_single_number_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_number_pane_cp2

0x94c2,	// (0x00042724) list_single_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_pane_cp2

0xbd0a,	// (0x00044f6c) bg_popup_sub_pane_cp22

0xf2a2,	// (0x00048504) popup_side_volume_key_window_g1

0xf2ae,	// (0x00048510) popup_side_volume_key_window_t1

0x958a,	// (0x000427ec) volume_small_pane_cp1

0xb493,	// (0x000446f5) bg_popup_sub_pane_cp24_ParamLimits

0xb493,	// (0x000446f5) bg_popup_sub_pane_cp24

0xbd20,	// (0x00044f82) fep_china_uni_candidate_pane_ParamLimits

0xbd20,	// (0x00044f82) fep_china_uni_candidate_pane

0xbd34,	// (0x00044f96) fep_china_uni_entry_pane

0xbd44,	// (0x00044fa6) popup_fep_china_uni_window_g1

0x9592,	// (0x000427f4) fep_china_uni_entry_pane_g1

0x959a,	// (0x000427fc) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00048950) fep_china_uni_entry_pane_g

0xbd60,	// (0x00044fc2) fep_entry_item_pane

0xbd6a,	// (0x00044fcc) fep_candidate_item_pane

0x95a2,	// (0x00042804) fep_china_uni_candidate_pane_g1

0xbd72,	// (0x00044fd4) fep_china_uni_candidate_pane_g2

0xbd7a,	// (0x00044fdc) fep_china_uni_candidate_pane_g3

0x95aa,	// (0x0004280c) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00048955) fep_china_uni_candidate_pane_g

0xb43b,	// (0x0004469d) fep_entry_item_pane_g1

0xbd82,	// (0x00044fe4) fep_entry_item_pane_t1_ParamLimits

0xbd82,	// (0x00044fe4) fep_entry_item_pane_t1

0xbd98,	// (0x00044ffa) fep_candidate_item_pane_t1_ParamLimits

0xbd98,	// (0x00044ffa) fep_candidate_item_pane_t1

0xbdad,	// (0x0004500f) fep_candidate_item_pane_t2_ParamLimits

0xbdad,	// (0x0004500f) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x0004895e) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x0004895e) fep_candidate_item_pane_t

0xb4a1,	// (0x00044703) list_highlight_pane_cp31_ParamLimits

0xb4a1,	// (0x00044703) list_highlight_pane_cp31

0xbdbf,	// (0x00045021) level_1_signal_lsc

0xbdc8,	// (0x0004502a) level_2_signal_lsc

0xbdd1,	// (0x00045033) level_3_signal_lsc

0xbdda,	// (0x0004503c) level_4_signal_lsc

0xbde3,	// (0x00045045) level_5_signal_lsc

0xbdec,	// (0x0004504e) level_6_signal_lsc

0xbdf5,	// (0x00045057) level_7_signal_lsc

0xbdf5,	// (0x00045057) level_1_battery_lsc

0xbdfe,	// (0x00045060) level_2_battery_lsc

0xbe07,	// (0x00045069) level_3_battery_lsc

0xbe10,	// (0x00045072) level_4_battery_lsc

0xbe19,	// (0x0004507b) level_5_battery_lsc

0xbe22,	// (0x00045084) level_6_battery_lsc

0xbdbf,	// (0x00045021) level_7_battery_lsc

0xbe2b,	// (0x0004508d) scroll_handle_focus_pane_g1

0xbe34,	// (0x00045096) scroll_handle_focus_pane_g2

0xbe3d,	// (0x0004509f) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00048963) scroll_handle_focus_pane_g

0x95b2,	// (0x00042814) list_single_2graphic_pane_g1_ParamLimits

0x95b2,	// (0x00042814) list_single_2graphic_pane_g1

0x8e02,	// (0x00042064) list_single_2graphic_pane_g2_ParamLimits

0x8e02,	// (0x00042064) list_single_2graphic_pane_g2

0xdb17,	// (0x00046d79) list_single_2graphic_pane_g3_ParamLimits

0xdb17,	// (0x00046d79) list_single_2graphic_pane_g3

0x95be,	// (0x00042820) list_single_2graphic_pane_g4_ParamLimits

0x95be,	// (0x00042820) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x0004896a) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x0004896a) list_single_2graphic_pane_g

0x95cf,	// (0x00042831) list_single_2graphic_pane_t1_ParamLimits

0x95cf,	// (0x00042831) list_single_2graphic_pane_t1

0x95fd,	// (0x0004285f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x95fd,	// (0x0004285f) list_double2_graphic_large_graphic_pane_g1

0x8e55,	// (0x000420b7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8e55,	// (0x000420b7) list_double2_graphic_large_graphic_pane_g2

0xdba9,	// (0x00046e0b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdba9,	// (0x00046e0b) list_double2_graphic_large_graphic_pane_g3

0xdcea,	// (0x00046f4c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xdcea,	// (0x00046f4c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00048973) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00048973) list_double2_graphic_large_graphic_pane_g

0xdcf6,	// (0x00046f58) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xdcf6,	// (0x00046f58) list_double2_graphic_large_graphic_pane_t1

0xdd0c,	// (0x00046f6e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xdd0c,	// (0x00046f6e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x0004897c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x0004897c) list_double2_graphic_large_graphic_pane_t

0x9682,	// (0x000428e4) popup_fast_swap_window_ParamLimits

0x9682,	// (0x000428e4) popup_fast_swap_window

0x969e,	// (0x00042900) popup_side_volume_key_window

0xbef3,	// (0x00045155) stacon_top_pane

0xbefd,	// (0x0004515f) status_pane_ParamLimits

0xbefd,	// (0x0004515f) status_pane

0x96b8,	// (0x0004291a) status_small_pane

0xb445,	// (0x000446a7) control_pane

0xb445,	// (0x000446a7) stacon_bottom_pane

0xb83a,	// (0x00044a9c) scroll_pane_cp121

0xb831,	// (0x00044a93) set_content_pane

0x960f,	// (0x00042871) bg_active_tab_pane_g1_cp1

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp1

0x9621,	// (0x00042883) bg_active_tab_pane_g3_cp1

0x960f,	// (0x00042871) bg_passive_tab_pane_g1_cp1

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp1

0x9621,	// (0x00042883) bg_passive_tab_pane_g3_cp1

0x962a,	// (0x0004288c) bg_active_tab_pane_g1_cp2

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp2

0x9633,	// (0x00042895) bg_active_tab_pane_g3_cp2

0x962a,	// (0x0004288c) bg_passive_tab_pane_g1_cp2

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp2

0x9633,	// (0x00042895) bg_passive_tab_pane_g3_cp2

0x963c,	// (0x0004289e) bg_active_tab_pane_g1_cp3

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp3

0x9645,	// (0x000428a7) bg_active_tab_pane_g3_cp3

0x963c,	// (0x0004289e) bg_passive_tab_pane_g1_cp3

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp3

0x9645,	// (0x000428a7) bg_passive_tab_pane_g3_cp3

0x964e,	// (0x000428b0) bg_active_tab_pane_g1_cp4

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp4

0x9659,	// (0x000428bb) bg_active_tab_pane_g3_cp4

0x964e,	// (0x000428b0) bg_passive_tab_pane_g1_cp4

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp4

0x9659,	// (0x000428bb) bg_passive_tab_pane_g3_cp4

0x9664,	// (0x000428c6) bg_active_tab_pane_g1_cp5

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp5

0x966d,	// (0x000428cf) bg_active_tab_pane_g3_cp5

0x9664,	// (0x000428c6) bg_passive_tab_pane_g1_cp5

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp5

0x966d,	// (0x000428cf) bg_passive_tab_pane_g3_cp5

0x3bb9,	// (0x0003ce1b) list_set_graphic_pane_ParamLimits

0x3bb9,	// (0x0003ce1b) list_set_graphic_pane

0xb445,	// (0x000446a7) bg_set_opt_pane_cp4

0xbe84,	// (0x000450e6) list_set_graphic_pane_g1_ParamLimits

0xbe84,	// (0x000450e6) list_set_graphic_pane_g1

0xbe90,	// (0x000450f2) list_set_graphic_pane_g2_ParamLimits

0xbe90,	// (0x000450f2) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00048981) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00048981) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x00048d12) volume_small_pane_cp_g

0x9676,	// (0x000428d8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9676,	// (0x000428d8) list_double2_large_graphic_pane_g1_cp2

0xbeb2,	// (0x00045114) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbeb2,	// (0x00045114) list_double2_large_graphic_pane_g2_cp2

0xbec3,	// (0x00045125) list_double2_large_graphic_pane_g3_cp2

0xbecb,	// (0x0004512d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbecb,	// (0x0004512d) list_double2_large_graphic_pane_t1_cp2

0xbee1,	// (0x00045143) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbee1,	// (0x00045143) list_double2_large_graphic_pane_t2_cp2

0xc534,	// (0x00045796) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc534,	// (0x00045796) list_double_large_graphic_pane_g1_cp2

0x317c,	// (0x0003c3de) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x317c,	// (0x0003c3de) list_double_large_graphic_pane_g2_cp2

0xc019,	// (0x0004527b) list_double_large_graphic_pane_g3_cp2

0x318d,	// (0x0003c3ef) list_double_large_graphic_pane_g4_cp

0x3195,	// (0x0003c3f7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3195,	// (0x0003c3f7) list_double_large_graphic_pane_t1_cp2

0x31ac,	// (0x0003c40e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x31ac,	// (0x0003c40e) list_double_large_graphic_pane_t2_cp2

0xbf0b,	// (0x0004516d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbf0b,	// (0x0004516d) list_double2_graphic_pane_g1_cp2

0xbf19,	// (0x0004517b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbf19,	// (0x0004517b) list_double2_graphic_pane_g2_cp2

0xbf2a,	// (0x0004518c) list_double2_graphic_pane_g3_cp2

0xbf34,	// (0x00045196) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbf34,	// (0x00045196) list_double2_graphic_pane_t1_cp2

0xbf4a,	// (0x000451ac) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbf4a,	// (0x000451ac) list_double2_graphic_pane_t2_cp2

0xbf5c,	// (0x000451be) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbf5c,	// (0x000451be) list_single_number_heading_pane_g1_cp2

0xbf68,	// (0x000451ca) list_single_number_heading_pane_g2_cp2

0xbf70,	// (0x000451d2) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbf70,	// (0x000451d2) list_single_number_heading_pane_t1_cp2

0xbf86,	// (0x000451e8) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbf86,	// (0x000451e8) list_single_number_heading_pane_t2_cp2

0xbf98,	// (0x000451fa) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbf98,	// (0x000451fa) list_single_number_heading_pane_t3_cp2

0xbf5c,	// (0x000451be) list_single_heading_pane_g1_cp2_ParamLimits

0xbf5c,	// (0x000451be) list_single_heading_pane_g1_cp2

0xbf68,	// (0x000451ca) list_single_heading_pane_g2_cp2

0xbf70,	// (0x000451d2) list_single_heading_pane_t1_cp2_ParamLimits

0xbf70,	// (0x000451d2) list_single_heading_pane_t1_cp2

0x2f75,	// (0x0003c1d7) list_single_heading_pane_t2_cp2_ParamLimits

0x2f75,	// (0x0003c1d7) list_single_heading_pane_t2_cp2

0x2ebd,	// (0x0003c11f) list_double_graphic_pane_g1_cp2_ParamLimits

0x2ebd,	// (0x0003c11f) list_double_graphic_pane_g1_cp2

0x2ec9,	// (0x0003c12b) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ec9,	// (0x0003c12b) list_double_graphic_pane_g2_cp2

0x2ed8,	// (0x0003c13a) list_double_graphic_pane_g3_cp2

0x2ee0,	// (0x0003c142) list_double_graphic_pane_t1_cp2_ParamLimits

0x2ee0,	// (0x0003c142) list_double_graphic_pane_t1_cp2

0x2ef6,	// (0x0003c158) list_double_graphic_pane_t2_cp2_ParamLimits

0x2ef6,	// (0x0003c158) list_double_graphic_pane_t2_cp2

0xc00d,	// (0x0004526f) list_double_number_pane_g1_cp2_ParamLimits

0xc00d,	// (0x0004526f) list_double_number_pane_g1_cp2

0xc019,	// (0x0004527b) list_double_number_pane_g2_cp2

0x2e81,	// (0x0003c0e3) list_double_number_pane_t1_cp2_ParamLimits

0x2e81,	// (0x0003c0e3) list_double_number_pane_t1_cp2

0x2e95,	// (0x0003c0f7) list_double_number_pane_t2_cp2_ParamLimits

0x2e95,	// (0x0003c0f7) list_double_number_pane_t2_cp2

0x2eab,	// (0x0003c10d) list_double_number_pane_t3_cp2_ParamLimits

0x2eab,	// (0x0003c10d) list_double_number_pane_t3_cp2

0x2d6a,	// (0x0003bfcc) list_single_graphic_pane_g1_cp2_ParamLimits

0x2d6a,	// (0x0003bfcc) list_single_graphic_pane_g1_cp2

0xc051,	// (0x000452b3) list_single_graphic_pane_g2_cp2_ParamLimits

0xc051,	// (0x000452b3) list_single_graphic_pane_g2_cp2

0xc05d,	// (0x000452bf) list_single_graphic_pane_g3_cp2

0x2d40,	// (0x0003bfa2) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d40,	// (0x0003bfa2) list_single_graphic_pane_t1_cp2

0xc051,	// (0x000452b3) list_single_number_pane_g1_cp2_ParamLimits

0xc051,	// (0x000452b3) list_single_number_pane_g1_cp2

0xc05d,	// (0x000452bf) list_single_number_pane_g2_cp2

0x2d40,	// (0x0003bfa2) list_single_number_pane_t1_cp2_ParamLimits

0x2d40,	// (0x0003bfa2) list_single_number_pane_t1_cp2

0x2d56,	// (0x0003bfb8) list_single_number_pane_t2_cp2_ParamLimits

0x2d56,	// (0x0003bfb8) list_single_number_pane_t2_cp2

0xbeb2,	// (0x00045114) list_double2_pane_g1_cp2_ParamLimits

0xbeb2,	// (0x00045114) list_double2_pane_g1_cp2

0xbec3,	// (0x00045125) list_double2_pane_g2_cp2

0xbfe5,	// (0x00045247) list_double2_pane_t1_cp2_ParamLimits

0xbfe5,	// (0x00045247) list_double2_pane_t1_cp2

0xbffb,	// (0x0004525d) list_double2_pane_t2_cp2_ParamLimits

0xbffb,	// (0x0004525d) list_double2_pane_t2_cp2

0xc00d,	// (0x0004526f) list_double_pane_g1_cp2_ParamLimits

0xc00d,	// (0x0004526f) list_double_pane_g1_cp2

0xc019,	// (0x0004527b) list_double_pane_g2_cp2

0xc021,	// (0x00045283) list_double_pane_t1_cp2_ParamLimits

0xc021,	// (0x00045283) list_double_pane_t1_cp2

0xc037,	// (0x00045299) list_double_pane_t2_cp2_ParamLimits

0xc037,	// (0x00045299) list_double_pane_t2_cp2

0x96e6,	// (0x00042948) list_single_pane_cp2_g3

0xc051,	// (0x000452b3) list_single_pane_g1_cp2_ParamLimits

0xc051,	// (0x000452b3) list_single_pane_g1_cp2

0xc05d,	// (0x000452bf) list_single_pane_g2_cp2

0xc065,	// (0x000452c7) list_single_pane_t1_cp2_ParamLimits

0xc065,	// (0x000452c7) list_single_pane_t1_cp2

0x96ee,	// (0x00042950) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x96ee,	// (0x00042950) list_single_large_graphic_pane_g1_cp2

0xc07d,	// (0x000452df) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc07d,	// (0x000452df) list_single_large_graphic_pane_g2_cp2

0xc089,	// (0x000452eb) list_single_large_graphic_pane_g3_cp2

0x96fa,	// (0x0004295c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x96fa,	// (0x0004295c) list_single_large_graphic_pane_g4_cp1

0xc091,	// (0x000452f3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc091,	// (0x000452f3) list_single_large_graphic_pane_t1_cp2

0x2d0c,	// (0x0003bf6e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2d0c,	// (0x0003bf6e) list_single_graphic_heading_pane_g1_cp2

0x2cd9,	// (0x0003bf3b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2cd9,	// (0x0003bf3b) list_single_graphic_heading_pane_g4_cp2

0xc05d,	// (0x000452bf) list_single_graphic_heading_pane_g5_cp2

0x2d18,	// (0x0003bf7a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2d18,	// (0x0003bf7a) list_single_graphic_heading_pane_t1_cp2

0x2d2e,	// (0x0003bf90) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2d2e,	// (0x0003bf90) list_single_graphic_heading_pane_t2_cp2

0x2ccd,	// (0x0003bf2f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2ccd,	// (0x0003bf2f) list_single_2graphic_pane_g1_cp2

0x2cd9,	// (0x0003bf3b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2cd9,	// (0x0003bf3b) list_single_2graphic_pane_g2_cp2

0xc05d,	// (0x000452bf) list_single_2graphic_pane_g3_cp2

0x2cea,	// (0x0003bf4c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2cea,	// (0x0003bf4c) list_single_2graphic_pane_g4_cp2

0x2cf6,	// (0x0003bf58) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2cf6,	// (0x0003bf58) list_single_2graphic_pane_t1_cp2

0xb43b,	// (0x0004469d) list_highlight_pane_g10_cp1

0x28b5,	// (0x0003bb17) list_highlight_pane_g1_cp1

0x28bd,	// (0x0003bb1f) list_highlight_pane_g2_cp1

0x28c5,	// (0x0003bb27) list_highlight_pane_g3_cp1

0x28cd,	// (0x0003bb2f) list_highlight_pane_g4_cp1

0x28d5,	// (0x0003bb37) list_highlight_pane_g5_cp1

0x28dd,	// (0x0003bb3f) list_highlight_pane_g6_cp1

0x28e5,	// (0x0003bb47) list_highlight_pane_g7_cp1

0x28ed,	// (0x0003bb4f) list_highlight_pane_g8_cp1

0x28f5,	// (0x0003bb57) list_highlight_pane_g9_cp1

0xc2c9,	// (0x0004552b) form_field_slider_pane_t3

0xc2d7,	// (0x00045539) form_field_slider_pane_t4

0x27f9,	// (0x0003ba5b) slider_form_pane_ParamLimits

0x27f9,	// (0x0003ba5b) slider_form_pane

0xb445,	// (0x000446a7) control_abbreviations

0xb445,	// (0x000446a7) control_conventions

0xb445,	// (0x000446a7) control_definitions

0xb445,	// (0x000446a7) format_table_attribute

0xc50b,	// (0x0004576d) bg_popup_preview_window_pane_g9

0xb445,	// (0x000446a7) format_table_data2

0xb445,	// (0x000446a7) format_table_data3

0xb445,	// (0x000446a7) format_table_data_example

0x0008,

0xb445,	// (0x000446a7) intro_purpose

0xf8b6,	// (0x00048b18) bg_popup_preview_window_pane_g

0xb445,	// (0x000446a7) texts_category

0xb445,	// (0x000446a7) texts_graphics

0xc0a7,	// (0x00045309) text_digital

0xc0b6,	// (0x00045318) text_primary

0xc0c5,	// (0x00045327) text_primary_small

0xc0d4,	// (0x00045336) text_secondary

0xc0e3,	// (0x00045345) text_title

0xc872,	// (0x00045ad4) bg_passive_tab_pane_g1_cp3_srt

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp3_srt

0xc87b,	// (0x00045add) bg_passive_tab_pane_g3_cp3_srt

0xb493,	// (0x000446f5) bg_active_tab_pane_cp3_srt_ParamLimits

0xb493,	// (0x000446f5) bg_active_tab_pane_cp3_srt

0xc884,	// (0x00045ae6) tabs_4_active_pane_srt_g1

0xc88c,	// (0x00045aee) tabs_4_active_pane_srt_t1_ParamLimits

0xc88c,	// (0x00045aee) tabs_4_active_pane_srt_t1

0xc872,	// (0x00045ad4) bg_active_tab_pane_g1_cp3_copy1

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp3_copy1

0xc87b,	// (0x00045add) bg_active_tab_pane_g3_cp3_copy1

0xb4a1,	// (0x00044703) tabs_2_long_active_pane_srt_ParamLimits

0xb4a1,	// (0x00044703) tabs_2_long_active_pane_srt

0xb4a1,	// (0x00044703) tabs_2_long_passive_pane_srt_ParamLimits

0xb4a1,	// (0x00044703) tabs_2_long_passive_pane_srt

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp4_srt

0xc623,	// (0x00045885) bg_passive_tab_pane_g1_cp4_srt

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp4_srt

0xc62c,	// (0x0004588e) bg_passive_tab_pane_g3_cp4_srt

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp4_srt_ParamLimits

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp4_srt

0xc635,	// (0x00045897) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc635,	// (0x00045897) tabs_2_long_active_pane_srt_t1

0xc623,	// (0x00045885) bg_active_tab_pane_g1_cp4_srt

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp4_srt

0xc62c,	// (0x0004588e) bg_active_tab_pane_g3_cp4_srt

0xb493,	// (0x000446f5) tabs_3_long_active_pane_srt_ParamLimits

0xb493,	// (0x000446f5) tabs_3_long_active_pane_srt

0xb493,	// (0x000446f5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb493,	// (0x000446f5) tabs_3_long_passive_pane_cp_srt

0xb493,	// (0x000446f5) tabs_3_long_passive_pane_srt_ParamLimits

0xb493,	// (0x000446f5) tabs_3_long_passive_pane_srt

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp5_srt

0x9664,	// (0x000428c6) bg_passive_tab_pane_g1_cp5_srt

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp5_srt

0x966d,	// (0x000428cf) bg_passive_tab_pane_g3_cp5_srt

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp5_srt_ParamLimits

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp5_srt

0xc60d,	// (0x0004586f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc60d,	// (0x0004586f) tabs_3_long_active_pane_srt_t1

0x9664,	// (0x000428c6) bg_active_tab_pane_g1_cp5_srt

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp5_srt

0x966d,	// (0x000428cf) bg_active_tab_pane_g3_cp5_srt

0x33c0,	// (0x0003c622) navi_text_pane_srt_t1

0x33b8,	// (0x0003c61a) navi_icon_pane_srt_g1

0xc1ce,	// (0x00045430) midp_editing_number_pane_srt

0xc0f2,	// (0x00045354) midp_ticker_pane_srt

0xc1d6,	// (0x00045438) midp_ticker_pane_srt_g1

0xc1de,	// (0x00045440) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x000489a0) midp_ticker_pane_srt_g

0xc1e6,	// (0x00045448) midp_ticker_pane_srt_t1

0x33a9,	// (0x0003c60b) midp_editing_number_pane_t1_copy1

0x9714,	// (0x00042976) listscroll_midp_pane

0x9714,	// (0x00042976) midp_form_pane

0x977f,	// (0x000429e1) midp_info_popup_window_ParamLimits

0x977f,	// (0x000429e1) midp_info_popup_window

0xb934,	// (0x00044b96) bg_popup_sub_pane_cp50_ParamLimits

0xb934,	// (0x00044b96) bg_popup_sub_pane_cp50

0x24e9,	// (0x0003b74b) listscroll_midp_info_pane_ParamLimits

0x24e9,	// (0x0003b74b) listscroll_midp_info_pane

0x24c9,	// (0x0003b72b) listscroll_form_midp_pane_ParamLimits

0x24c9,	// (0x0003b72b) listscroll_form_midp_pane

0x24d5,	// (0x0003b737) scroll_bar_cp050

0x24c9,	// (0x0003b72b) list_midp_pane

0xca24,	// (0x00045c86) signal_pane_g2_cp

0x23e3,	// (0x0003b645) listscroll_midp_info_pane_t1_ParamLimits

0x23e3,	// (0x0003b645) listscroll_midp_info_pane_t1

0xa7bd,	// (0x00043a1f) listscroll_midp_info_pane_t2_ParamLimits

0xa7bd,	// (0x00043a1f) listscroll_midp_info_pane_t2

0xa7fb,	// (0x00043a5d) listscroll_midp_info_pane_t3_ParamLimits

0xa7fb,	// (0x00043a5d) listscroll_midp_info_pane_t3

0xa835,	// (0x00043a97) listscroll_midp_info_pane_t4_ParamLimits

0xa835,	// (0x00043a97) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x00048a53) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x00048a53) listscroll_midp_info_pane_t

0xb989,	// (0x00044beb) scroll_pane_cp21

0x2383,	// (0x0003b5e5) form_midp_field_choice_group_pane

0xa780,	// (0x000439e2) form_midp_field_text_pane

0x23c9,	// (0x0003b62b) form_midp_field_time_pane

0x23d1,	// (0x0003b633) form_midp_gauge_slider_pane

0x23da,	// (0x0003b63c) form_midp_gauge_wait_pane

0xb445,	// (0x000446a7) form_midp_image_pane

0xa768,	// (0x000439ca) list_single_midp_pane_ParamLimits

0xa768,	// (0x000439ca) list_single_midp_pane

0xa746,	// (0x000439a8) form_midp_field_text_pane_t1

0x2102,	// (0x0003b364) input_focus_pane_cp050

0x2372,	// (0x0003b5d4) list_midp_form_text_pane

0x2307,	// (0x0003b569) form_midp_field_choice_group_pane_t1

0x2315,	// (0x0003b577) input_focus_pane_cp051

0x2329,	// (0x0003b58b) list_midp_choice_pane

0xb445,	// (0x000446a7) status_idle_pane

0x22eb,	// (0x0003b54d) form_midp_field_time_pane_t1

0xb43b,	// (0x0004469d) wait_anim_pane_g2_copy1

0x22f9,	// (0x0003b55b) form_midp_field_time_pane_t2

0x0001,

0xc152,	// (0x000453b4) aid_navinavi_width_2_pane

0xf7ec,	// (0x00048a4e) form_midp_field_time_pane_t

0xb445,	// (0x000446a7) input_focus_pane_cp052

0xb445,	// (0x000446a7) bg_input_focus_pane_cp040

0x22ab,	// (0x0003b50d) form_midp_gauge_slider_pane_t1

0x22b9,	// (0x0003b51b) form_midp_gauge_slider_pane_t2

0xa72a,	// (0x0004398c) form_midp_gauge_slider_pane_t3

0xa738,	// (0x0004399a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x00048a45) form_midp_gauge_slider_pane_t

0x22e3,	// (0x0003b545) form_midp_slider_pane

0xb4a1,	// (0x00044703) bg_input_focus_pane_cp041_ParamLimits

0xb4a1,	// (0x00044703) bg_input_focus_pane_cp041

0x2278,	// (0x0003b4da) form_midp_gauge_wait_pane_t1_ParamLimits

0x2278,	// (0x0003b4da) form_midp_gauge_wait_pane_t1

0x228a,	// (0x0003b4ec) form_midp_gauge_wait_pane_t2_ParamLimits

0x228a,	// (0x0003b4ec) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00048a40) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00048a40) form_midp_gauge_wait_pane_t

0x229c,	// (0x0003b4fe) form_midp_wait_pane_ParamLimits

0x229c,	// (0x0003b4fe) form_midp_wait_pane

0xa6f4,	// (0x00043956) form_midp_image_pane_g1

0xa6fd,	// (0x0004395f) form_midp_image_pane_t1

0xa70c,	// (0x0004396e) form_midp_image_pane_t2

0xa71b,	// (0x0004397d) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x00048a39) form_midp_image_pane_t

0x2239,	// (0x0003b49b) list_single_midp_pane_g1

0xde42,	// (0x000470a4) list_single_midp_pane_t1

0xa6df,	// (0x00043941) list_midp_form_item_pane_ParamLimits

0xa6df,	// (0x00043941) list_midp_form_item_pane

0xc0fa,	// (0x0004535c) list_midp_form_item_pane_t1

0xc109,	// (0x0004536b) midp_ticker_pane_g1

0xc115,	// (0x00045377) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00048986) midp_ticker_pane_g

0xc121,	// (0x00045383) midp_ticker_pane_t1

0x35f6,	// (0x0003c858) midp_editing_number_pane_t1

0x35d4,	// (0x0003c836) midp_editing_number_pane

0x35e3,	// (0x0003c845) midp_ticker_pane

0x3399,	// (0x0003c5fb) ai_message_heading_pane

0xb445,	// (0x000446a7) bg_popup_window_pane_cp14

0x33a1,	// (0x0003c603) listscroll_ai_message_pane

0x3323,	// (0x0003c585) ai_message_heading_pane_g1_ParamLimits

0x3323,	// (0x0003c585) ai_message_heading_pane_g1

0xc5d5,	// (0x00045837) ai_message_heading_pane_g2_ParamLimits

0xc5d5,	// (0x00045837) ai_message_heading_pane_g2

0x333b,	// (0x0003c59d) ai_message_heading_pane_g3_ParamLimits

0x333b,	// (0x0003c59d) ai_message_heading_pane_g3

0x3347,	// (0x0003c5a9) ai_message_heading_pane_g4_ParamLimits

0x3347,	// (0x0003c5a9) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00048b7a) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00048b7a) ai_message_heading_pane_g

0xc5e1,	// (0x00045843) ai_message_heading_pane_t1_ParamLimits

0xc5e1,	// (0x00045843) ai_message_heading_pane_t1

0xc5fb,	// (0x0004585d) ai_message_heading_pane_t2_ParamLimits

0xc5fb,	// (0x0004585d) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x00048b83) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x00048b83) ai_message_heading_pane_t

0x337f,	// (0x0003c5e1) bg_popup_heading_pane_cp1_ParamLimits

0x337f,	// (0x0003c5e1) bg_popup_heading_pane_cp1

0x3311,	// (0x0003c573) list_ai_message_pane_ParamLimits

0x3311,	// (0x0003c573) list_ai_message_pane

0xb989,	// (0x00044beb) scroll_pane_cp10

0x32ad,	// (0x0003c50f) list_ai_message_pane_g1

0x32b5,	// (0x0003c517) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x00048b57) list_ai_message_pane_g

0x32bd,	// (0x0003c51f) list_ai_message_pane_t1_ParamLimits

0x32bd,	// (0x0003c51f) list_ai_message_pane_t1

0x32d2,	// (0x0003c534) list_ai_message_pane_t2_ParamLimits

0x32d2,	// (0x0003c534) list_ai_message_pane_t2

0x32e7,	// (0x0003c549) list_ai_message_pane_t3_ParamLimits

0x32e7,	// (0x0003c549) list_ai_message_pane_t3

0x32fc,	// (0x0003c55e) list_ai_message_pane_t4_ParamLimits

0x32fc,	// (0x0003c55e) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00048b5c) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00048b5c) list_ai_message_pane_t

0xc5b1,	// (0x00045813) cell_ai_soft_ind_pane_ParamLimits

0xc5b1,	// (0x00045813) cell_ai_soft_ind_pane

0xc133,	// (0x00045395) cell_ai_soft_ind_pane_g1_ParamLimits

0xc133,	// (0x00045395) cell_ai_soft_ind_pane_g1

0xb445,	// (0x000446a7) grid_highlight_cp1

0xc140,	// (0x000453a2) text_secondary_cp56_ParamLimits

0xc140,	// (0x000453a2) text_secondary_cp56

0x326d,	// (0x0003c4cf) example_general_pane_ParamLimits

0x326d,	// (0x0003c4cf) example_general_pane

0x3279,	// (0x0003c4db) example_parent_pane_g1_ParamLimits

0x3279,	// (0x0003c4db) example_parent_pane_g1

0x3285,	// (0x0003c4e7) example_parent_pane_t1_ParamLimits

0x3285,	// (0x0003c4e7) example_parent_pane_t1

0x9e63,	// (0x000430c5) popup_preview_text_window_ParamLimits

0x9e63,	// (0x000430c5) popup_preview_text_window

0xc049,	// (0x000452ab) list_single_pane_cp2_g4

0xb673,	// (0x000448d5) bg_popup_preview_window_pane_ParamLimits

0xb673,	// (0x000448d5) bg_popup_preview_window_pane

0xc513,	// (0x00045775) popup_preview_text_window_t1_ParamLimits

0xc513,	// (0x00045775) popup_preview_text_window_t1

0x2fe5,	// (0x0003c247) popup_preview_text_window_t2_ParamLimits

0x2fe5,	// (0x0003c247) popup_preview_text_window_t2

0x302e,	// (0x0003c290) popup_preview_text_window_t3_ParamLimits

0x302e,	// (0x0003c290) popup_preview_text_window_t3

0x3073,	// (0x0003c2d5) popup_preview_text_window_t4_ParamLimits

0x3073,	// (0x0003c2d5) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x00048b2b) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x00048b2b) popup_preview_text_window_t

0x30f1,	// (0x0003c353) scroll_pane_cp11

0x2076,	// (0x0003b2d8) bg_popup_preview_window_pane_g1

0xc4d3,	// (0x00045735) bg_popup_preview_window_pane_g2

0xc4db,	// (0x0004573d) bg_popup_preview_window_pane_g3

0xc4e3,	// (0x00045745) bg_popup_preview_window_pane_g4

0xc4eb,	// (0x0004574d) bg_popup_preview_window_pane_g5

0xc4f3,	// (0x00045755) bg_popup_preview_window_pane_g6

0xc4fb,	// (0x0004575d) bg_popup_preview_window_pane_g7

0xc503,	// (0x00045765) bg_popup_preview_window_pane_g8

0xda3c,	// (0x00046c9e) aid_popup_width_pane

0x9ddf,	// (0x00043041) popup_midp_note_alarm_window_ParamLimits

0x9ddf,	// (0x00043041) popup_midp_note_alarm_window

0xb84b,	// (0x00044aad) data_form_pane_ParamLimits

0x90c3,	// (0x00042325) form_field_data_pane_g1

0x90cd,	// (0x0004232f) form_field_data_pane_t1_ParamLimits

0xb857,	// (0x00044ab9) input_focus_pane_ParamLimits

0x90e7,	// (0x00042349) data_form_wide_pane_ParamLimits

0x90f8,	// (0x0004235a) form_field_data_wide_pane_g1

0x9104,	// (0x00042366) form_field_data_wide_pane_t1_ParamLimits

0xb74b,	// (0x000449ad) input_focus_pane_cp6_ParamLimits

0x929b,	// (0x000424fd) input_popup_find_pane_g1_ParamLimits

0x929b,	// (0x000424fd) input_popup_find_pane_g1

0xf17d,	// (0x000483df) aid_navi_side_left_pane

0xf192,	// (0x000483f4) aid_navi_side_right_pane

0x29b0,	// (0x0003bc12) bg_popup_window_pane_cp30_ParamLimits

0x29b0,	// (0x0003bc12) bg_popup_window_pane_cp30

0x2a2a,	// (0x0003bc8c) popup_midp_note_alarm_window_g1_ParamLimits

0x2a2a,	// (0x0003bc8c) popup_midp_note_alarm_window_g1

0x2a5a,	// (0x0003bcbc) popup_midp_note_alarm_window_t1_ParamLimits

0x2a5a,	// (0x0003bcbc) popup_midp_note_alarm_window_t1

0xc31c,	// (0x0004557e) popup_midp_note_alarm_window_t2_ParamLimits

0xc31c,	// (0x0004557e) popup_midp_note_alarm_window_t2

0xc3ca,	// (0x0004562c) popup_midp_note_alarm_window_t3_ParamLimits

0xc3ca,	// (0x0004562c) popup_midp_note_alarm_window_t3

0xc3f2,	// (0x00045654) popup_midp_note_alarm_window_t4_ParamLimits

0xc3f2,	// (0x00045654) popup_midp_note_alarm_window_t4

0x2bf1,	// (0x0003be53) popup_midp_note_alarm_window_t5_ParamLimits

0x2bf1,	// (0x0003be53) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00048ac8) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00048ac8) popup_midp_note_alarm_window_t

0x2c9d,	// (0x0003beff) wait_bar_pane_cp1_ParamLimits

0x2c9d,	// (0x0003beff) wait_bar_pane_cp1

0xb445,	// (0x000446a7) wait_anim_pane_copy1

0xb445,	// (0x000446a7) wait_border_pane_copy1

0x26a6,	// (0x0003b908) wait_border_pane_g1_copy1

0x911e,	// (0x00042380) form_field_popup_pane_g1

0x9126,	// (0x00042388) form_field_popup_pane_t1_ParamLimits

0xb857,	// (0x00044ab9) input_focus_pane_cp7_ParamLimits

0xb885,	// (0x00044ae7) list_form_pane_ParamLimits

0x9140,	// (0x000423a2) form_field_popup_wide_pane_g1

0x9148,	// (0x000423aa) form_field_popup_wide_pane_t1_ParamLimits

0xb857,	// (0x00044ab9) input_focus_pane_cp8_ParamLimits

0xb891,	// (0x00044af3) list_form_wide_pane_ParamLimits

0x378f,	// (0x0003c9f1) aid_size_cell_graphic_pane

0x91d4,	// (0x00042436) data_form_pane_t1_ParamLimits

0xaa16,	// (0x00043c78) data_form_wide_pane_t1_ParamLimits

0xa2a6,	// (0x00043508) bg_status_flat_pane

0x87f8,	// (0x00041a5a) title_pane_t1_ParamLimits

0xb45b,	// (0x000446bd) title_pane_t2_ParamLimits

0xb481,	// (0x000446e3) title_pane_t3_ParamLimits

0xf532,	// (0x00048794) title_pane_t_ParamLimits

0xbc3e,	// (0x00044ea0) level_1_signal_ParamLimits

0xbc4b,	// (0x00044ead) level_2_signal_ParamLimits

0xbc58,	// (0x00044eba) level_3_signal_ParamLimits

0xbc65,	// (0x00044ec7) level_4_signal_ParamLimits

0xbc72,	// (0x00044ed4) level_5_signal_ParamLimits

0xbc7f,	// (0x00044ee1) level_6_signal_ParamLimits

0xbc8c,	// (0x00044eee) level_7_signal_ParamLimits

0xbc3e,	// (0x00044ea0) level_1_battery_ParamLimits

0xbc4b,	// (0x00044ead) level_2_battery_ParamLimits

0xbc58,	// (0x00044eba) level_3_battery_ParamLimits

0xbc65,	// (0x00044ec7) level_4_battery_ParamLimits

0xbc72,	// (0x00044ed4) level_5_battery_ParamLimits

0xbc7f,	// (0x00044ee1) level_6_battery_ParamLimits

0xbc8c,	// (0x00044eee) level_7_battery_ParamLimits

0x28b5,	// (0x0003bb17) bg_status_flat_pane_g1

0x28bd,	// (0x0003bb1f) bg_status_flat_pane_g2

0x28c5,	// (0x0003bb27) bg_status_flat_pane_g3

0x28cd,	// (0x0003bb2f) bg_status_flat_pane_g4

0x28d5,	// (0x0003bb37) bg_status_flat_pane_g5

0x28dd,	// (0x0003bb3f) bg_status_flat_pane_g6

0x28e5,	// (0x0003bb47) bg_status_flat_pane_g7

0x888c,	// (0x00041aee) tabs_3_active_pane_t1_ParamLimits

0x888c,	// (0x00041aee) tabs_3_passive_pane_t1_ParamLimits

0x88a6,	// (0x00041b08) tabs_4_active_pane_t1_ParamLimits

0x88a6,	// (0x00041b08) tabs_4_1_passive_pane_t1_ParamLimits

0x92da,	// (0x0004253c) tabs_2_active_pane_t1_ParamLimits

0x92da,	// (0x0004253c) tabs_2_passive_pane_t1_ParamLimits

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp4_ParamLimits

0x92ec,	// (0x0004254e) tabs_2_long_active_pane_t1_ParamLimits

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp4_ParamLimits

0x0727,	// (0x00039989) list_single_midp_graphic_pane_t1_ParamLimits

0xb4a1,	// (0x00044703) bg_active_tab_pane_cp5_ParamLimits

0x92ff,	// (0x00042561) tabs_3_long_active_pane_t1_ParamLimits

0xb999,	// (0x00044bfb) bg_passive_tab_pane_cp5_ParamLimits

0x0727,	// (0x00039989) list_single_midp_graphic_pane_t1

0xa2a6,	// (0x00043508) bg_status_flat_pane_ParamLimits

0x056b,	// (0x000397cd) indicator_pane_cp2_ParamLimits

0x056b,	// (0x000397cd) indicator_pane_cp2

0xa424,	// (0x00043686) navi_pane_srt_ParamLimits

0xa424,	// (0x00043686) navi_pane_srt

0x1e58,	// (0x0003b0ba) popup_clock_digital_analogue_window_cp1

0xb4e5,	// (0x00044747) indicator_pane_t1

0xc0f2,	// (0x00045354) copy_highlight_pane

0xc0f2,	// (0x00045354) cursor_graphics_pane

0xc0f2,	// (0x00045354) graphic_within_text_pane

0xc0f2,	// (0x00045354) link_highlight_pane

0x30b4,	// (0x0003c316) popup_preview_text_window_t5_ParamLimits

0x30b4,	// (0x0003c316) popup_preview_text_window_t5

0xc15a,	// (0x000453bc) cursor_digital_pane

0xc15a,	// (0x000453bc) cursor_primary_pane

0xc16b,	// (0x000453cd) cursor_primary_small_pane

0xc173,	// (0x000453d5) cursor_secondary_pane

0xc17b,	// (0x000453dd) cursor_title_pane

0xc15a,	// (0x000453bc) link_highlight_digital_pane

0xc162,	// (0x000453c4) link_highlight_primary_pane

0xc16b,	// (0x000453cd) link_highlight_primary_small_pane

0xc173,	// (0x000453d5) link_highlight_secondary_pane

0xc17b,	// (0x000453dd) link_highlight_title_pane

0xc15a,	// (0x000453bc) copy_highlight_digital_pane

0xc15a,	// (0x000453bc) copy_highlight_primary_pane

0xc16b,	// (0x000453cd) copy_highlight_primary_small_pane

0xc173,	// (0x000453d5) copy_highlight_secondary_pane

0xc17b,	// (0x000453dd) copy_highlight_title_pane

0xc173,	// (0x000453d5) graphic_text_digital_pane

0x2953,	// (0x0003bbb5) graphic_text_primary_pane

0x295c,	// (0x0003bbbe) graphic_text_primary_small_pane

0xc16b,	// (0x000453cd) graphic_text_secondary_pane

0xc15a,	// (0x000453bc) graphic_text_title_pane

0x97d0,	// (0x00042a32) cursor_primary_pane_g1

0x2945,	// (0x0003bba7) cursor_text_primary_t1

0xc312,	// (0x00045574) cursor_primary_small_pane_g1

0x2937,	// (0x0003bb99) cursor_text_primary_small_t1

0xc308,	// (0x0004556a) cursor_primary_small_pane_g1_copy1

0x291f,	// (0x0003bb81) cursor_text_primary_small_t1_copy1

0x28fd,	// (0x0003bb5f) cursor_text_title_t1

0xc2fe,	// (0x00045560) cursor_title_pane_g1

0x97d0,	// (0x00042a32) cursor_digital_pane_g1

0xc183,	// (0x000453e5) cursor_text_digital_t1

0xc191,	// (0x000453f3) link_highlight_primary_pane_g1

0x28a6,	// (0x0003bb08) link_highlight_primary_pane_t1

0xc191,	// (0x000453f3) link_highlight_primary_small_pane_g1

0xc199,	// (0x000453fb) link_highlight_primary_small_pane_t1

0xc191,	// (0x000453f3) link_highlight_secondary_pane_g1

0xc1a8,	// (0x0004540a) link_highlight_secondary_pane_t1

0x280b,	// (0x0003ba6d) link_highlight_title_pane_g1

0x2822,	// (0x0003ba84) link_highlight_title_pane_t1

0x280b,	// (0x0003ba6d) link_highlight_digital_pane_g1

0x2813,	// (0x0003ba75) link_highlight_digital_pane_t1

0x26c5,	// (0x0003b927) copy_highlight_primary_pane_g1

0x26eb,	// (0x0003b94d) copy_highlight_primary_pane_t1

0x26c5,	// (0x0003b927) copy_highlight_primary_small_pane_g1

0x26dc,	// (0x0003b93e) copy_highlight_primary_small_pane_t1

0xc1b7,	// (0x00045419) copy_highlight_secondary_pane_g1

0xc1bf,	// (0x00045421) copy_highlight_secondary_pane_t1

0x26c5,	// (0x0003b927) copy_highlight_title_pane_g1

0x26cd,	// (0x0003b92f) copy_highlight_title_pane_t1

0x26c5,	// (0x0003b927) copy_highlight_digital_pane_g1

0x395d,	// (0x0003cbbf) copy_highlight_digital_pane_t1

0x38b1,	// (0x0003cb13) graphic_text_primary_pane_g1

0x3941,	// (0x0003cba3) graphic_text_primary_pane_t1

0x394f,	// (0x0003cbb1) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x00048bf7) graphic_text_primary_pane_t

0x391d,	// (0x0003cb7f) graphic_text_primary_small_pane_g1

0x3925,	// (0x0003cb87) graphic_text_primary_small_pane_t1

0x3933,	// (0x0003cb95) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00048bf2) graphic_text_primary_small_pane_t

0x38f9,	// (0x0003cb5b) graphic_text_secondary_pane_g1

0x3901,	// (0x0003cb63) graphic_text_secondary_pane_t1

0x390f,	// (0x0003cb71) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00048bed) graphic_text_secondary_pane_t

0x38d5,	// (0x0003cb37) graphic_text_title_pane_g1

0x38dd,	// (0x0003cb3f) graphic_text_title_pane_t1

0x38eb,	// (0x0003cb4d) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x00048be8) graphic_text_title_pane_t

0x38b1,	// (0x0003cb13) graphic_text_digital_pane_g1

0x38b9,	// (0x0003cb1b) graphic_text_digital_pane_t1

0x38c7,	// (0x0003cb29) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00048be3) graphic_text_digital_pane_t

0xb4a1,	// (0x00044703) navi_icon_pane_srt_ParamLimits

0xb4a1,	// (0x00044703) navi_icon_pane_srt

0xb445,	// (0x000446a7) navi_midp_pane_srt

0xb445,	// (0x000446a7) navi_navi_pane_srt

0xb4a1,	// (0x00044703) navi_text_pane_srt_ParamLimits

0xb4a1,	// (0x00044703) navi_text_pane_srt

0x387c,	// (0x0003cade) navi_navi_icon_text_pane_srt

0x3884,	// (0x0003cae6) navi_navi_pane_srt_g1_ParamLimits

0x3884,	// (0x0003cae6) navi_navi_pane_srt_g1

0x3896,	// (0x0003caf8) navi_navi_pane_srt_g2_ParamLimits

0x3896,	// (0x0003caf8) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00048bde) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00048bde) navi_navi_pane_srt_g

0x38a8,	// (0x0003cb0a) navi_navi_tabs_pane_srt

0x387c,	// (0x0003cade) navi_navi_text_pane_srt

0x387c,	// (0x0003cade) navi_navi_volume_pane_srt

0x386d,	// (0x0003cacf) navi_navi_text_pane_srt_t1

0x0bb5,	// (0x00039e17) navi_navi_volume_pane_srt_g1

0x0bbd,	// (0x00039e1f) volume_small_pane_srt_ParamLimits

0x0bbd,	// (0x00039e1f) volume_small_pane_srt

0xf3fd,	// (0x0004865f) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x0004865f) volume_small_pane_srt_g1

0xf40d,	// (0x0004866f) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x0004866f) volume_small_pane_srt_g2

0xf41e,	// (0x00048680) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x00048680) volume_small_pane_srt_g3

0xf42f,	// (0x00048691) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x00048691) volume_small_pane_srt_g4

0xf440,	// (0x000486a2) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x000486a2) volume_small_pane_srt_g5

0xf451,	// (0x000486b3) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x000486b3) volume_small_pane_srt_g6

0xf462,	// (0x000486c4) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x000486c4) volume_small_pane_srt_g7

0xf473,	// (0x000486d5) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x000486d5) volume_small_pane_srt_g8

0xf484,	// (0x000486e6) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x000486e6) volume_small_pane_srt_g9

0xf495,	// (0x000486f7) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x000486f7) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x0004898b) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x0004898b) volume_small_pane_srt_g

0x8b8d,	// (0x00041def) query_popup_data_pane_cp2

0x3853,	// (0x0003cab5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3853,	// (0x0003cab5) navi_navi_icon_text_pane_srt_t1

0x2953,	// (0x0003bbb5) navi_tabs_2_long_pane_srt

0x2953,	// (0x0003bbb5) navi_tabs_2_pane_srt

0x2953,	// (0x0003bbb5) navi_tabs_3_long_pane_srt

0x2953,	// (0x0003bbb5) navi_tabs_3_pane_srt

0x2953,	// (0x0003bbb5) navi_tabs_4_pane_srt

0xaa9e,	// (0x00043d00) tabs_2_active_pane_srt_ParamLimits

0xaa9e,	// (0x00043d00) tabs_2_active_pane_srt

0xaaae,	// (0x00043d10) tabs_2_passive_pane_srt_ParamLimits

0xaaae,	// (0x00043d10) tabs_2_passive_pane_srt

0x2102,	// (0x0003b364) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2102,	// (0x0003b364) bg_passive_tab_pane_cp1_srt

0xc923,	// (0x00045b85) bg_passive_tab_pane_g1_cp1_srt

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp1_srt

0xc92c,	// (0x00045b8e) bg_passive_tab_pane_g3_cp1_srt

0xb493,	// (0x000446f5) bg_active_tab_pane_cp1_srt_ParamLimits

0xb493,	// (0x000446f5) bg_active_tab_pane_cp1_srt

0xc935,	// (0x00045b97) tabs_2_active_pane_srt_g1

0xc93d,	// (0x00045b9f) tabs_2_active_pane_srt_t1_ParamLimits

0xc93d,	// (0x00045b9f) tabs_2_active_pane_srt_t1

0xc923,	// (0x00045b85) bg_active_tab_pane_g1_cp1_srt

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp1_srt

0xc92c,	// (0x00045b8e) bg_active_tab_pane_g3_cp1_srt

0xaa6b,	// (0x00043ccd) tabs_3_active_pane_srt_ParamLimits

0xaa6b,	// (0x00043ccd) tabs_3_active_pane_srt

0xaa7c,	// (0x00043cde) tabs_3_passive_pane_cp_srt_ParamLimits

0xaa7c,	// (0x00043cde) tabs_3_passive_pane_cp_srt

0xaa8d,	// (0x00043cef) tabs_3_passive_pane_srt_ParamLimits

0xaa8d,	// (0x00043cef) tabs_3_passive_pane_srt

0x2102,	// (0x0003b364) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2102,	// (0x0003b364) bg_passive_tab_pane_cp2_srt

0x97da,	// (0x00042a3c) bg_passive_tab_pane_g1_cp2_srt

0x9618,	// (0x0004287a) bg_passive_tab_pane_g2_cp2_srt

0x97e3,	// (0x00042a45) bg_passive_tab_pane_g3_cp2_srt

0xb493,	// (0x000446f5) bg_active_tab_pane_cp2_srt_ParamLimits

0xb493,	// (0x000446f5) bg_active_tab_pane_cp2_srt

0xc905,	// (0x00045b67) tabs_3_active_pane_srt_g1

0xc90d,	// (0x00045b6f) tabs_3_active_pane_srt_t1_ParamLimits

0xc90d,	// (0x00045b6f) tabs_3_active_pane_srt_t1

0x97da,	// (0x00042a3c) bg_active_tab_pane_g1_cp2_srt

0x9618,	// (0x0004287a) bg_active_tab_pane_g2_cp2_srt

0x97e3,	// (0x00042a45) bg_active_tab_pane_g3_cp2_srt

0x0b1a,	// (0x00039d7c) tabs_4_active_pane_srt_ParamLimits

0x0b1a,	// (0x00039d7c) tabs_4_active_pane_srt

0x0b2c,	// (0x00039d8e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b2c,	// (0x00039d8e) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x00048717) aid_size_cell_toolbar

0x3451,	// (0x0003c6b3) main_idle_act_pane_ParamLimits

0xf503,	// (0x00048765) popup_large_graphic_colour_window_ParamLimits

0xa115,	// (0x00043377) popup_toolbar_window_ParamLimits

0xa115,	// (0x00043377) popup_toolbar_window

0x3605,	// (0x0003c867) list_single_graphic_2heading_pane_ParamLimits

0x3605,	// (0x0003c867) list_single_graphic_2heading_pane

0xbb26,	// (0x00044d88) aid_size_cell_apps_grid_lsc_pane

0xbb38,	// (0x00044d9a) aid_size_cell_apps_grid_prt_pane

0xb999,	// (0x00044bfb) bg_wml_button_pane_cp1_ParamLimits

0xb999,	// (0x00044bfb) bg_wml_button_pane_cp1

0xa746,	// (0x000439a8) form_midp_field_text_pane_t1_ParamLimits

0x2102,	// (0x0003b364) input_focus_pane_cp050_ParamLimits

0x2372,	// (0x0003b5d4) list_midp_form_text_pane_ParamLimits

0x2315,	// (0x0003b577) input_focus_pane_cp051_ParamLimits

0x2329,	// (0x0003b58b) list_midp_choice_pane_ParamLimits

0xa6ab,	// (0x0004390d) list_single_2graphic_pane_cp3_ParamLimits

0xa6ab,	// (0x0004390d) list_single_2graphic_pane_cp3

0xa6bf,	// (0x00043921) list_single_midp_graphic_pane_ParamLimits

0xa6bf,	// (0x00043921) list_single_midp_graphic_pane

0xdd2e,	// (0x00046f90) list_single_graphic_2heading_pane_g1_ParamLimits

0xdd2e,	// (0x00046f90) list_single_graphic_2heading_pane_g1

0xdd3a,	// (0x00046f9c) list_single_graphic_2heading_pane_g4_ParamLimits

0xdd3a,	// (0x00046f9c) list_single_graphic_2heading_pane_g4

0xdd46,	// (0x00046fa8) list_single_graphic_2heading_pane_g5_ParamLimits

0xdd46,	// (0x00046fa8) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x000489de) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x000489de) list_single_graphic_2heading_pane_g

0xdd52,	// (0x00046fb4) list_single_graphic_2heading_pane_t1_ParamLimits

0xdd52,	// (0x00046fb4) list_single_graphic_2heading_pane_t1

0xdd66,	// (0x00046fc8) list_single_graphic_2heading_pane_t2_ParamLimits

0xdd66,	// (0x00046fc8) list_single_graphic_2heading_pane_t2

0xdd80,	// (0x00046fe2) list_single_graphic_2heading_pane_t3_ParamLimits

0xdd80,	// (0x00046fe2) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x000489e5) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x000489e5) list_single_graphic_2heading_pane_t

0x1fb4,	// (0x0003b216) bg_popup_sub_pane_cp2

0x1fde,	// (0x0003b240) grid_toobar_pane

0x0696,	// (0x000398f8) cell_toolbar_pane_ParamLimits

0x0696,	// (0x000398f8) cell_toolbar_pane

0x201a,	// (0x0003b27c) cell_toolbar_pane_g1_ParamLimits

0x201a,	// (0x0003b27c) cell_toolbar_pane_g1

0xa5c3,	// (0x00043825) cell_toolbar_pane_g2_ParamLimits

0xa5c3,	// (0x00043825) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x000489f3) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x000489f3) cell_toolbar_pane_g

0x2050,	// (0x0003b2b2) grid_highlight_pane_cp2_ParamLimits

0x2050,	// (0x0003b2b2) grid_highlight_pane_cp2

0x206a,	// (0x0003b2cc) toolbar_button_pane

0x2076,	// (0x0003b2d8) toolbar_button_pane_g1

0x207e,	// (0x0003b2e0) toolbar_button_pane_g2

0x2086,	// (0x0003b2e8) toolbar_button_pane_g3

0x208e,	// (0x0003b2f0) toolbar_button_pane_g4

0x2096,	// (0x0003b2f8) toolbar_button_pane_g5

0x209e,	// (0x0003b300) toolbar_button_pane_g6

0x20a6,	// (0x0003b308) toolbar_button_pane_g7

0x20ae,	// (0x0003b310) toolbar_button_pane_g8

0x20b6,	// (0x0003b318) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x000489f8) toolbar_button_pane_g

0x06ce,	// (0x00039930) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06ce,	// (0x00039930) list_single_2graphic_pane_g1_cp3

0xa5d7,	// (0x00043839) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa5d7,	// (0x00043839) list_single_2graphic_pane_g2_cp3

0x06eb,	// (0x0003994d) list_single_2graphic_pane_g3_cp3

0x06f3,	// (0x00039955) list_single_2graphic_pane_g4_cp3_ParamLimits

0x06f3,	// (0x00039955) list_single_2graphic_pane_g4_cp3

0xa5e8,	// (0x0004384a) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa5e8,	// (0x0004384a) list_single_2graphic_pane_t1_cp3

0x071b,	// (0x0003997d) list_single_midp_graphic_pane_g2_ParamLimits

0x071b,	// (0x0003997d) list_single_midp_graphic_pane_g2

0xf4bd,	// (0x0004871f) aid_zoom_text_primary

0xdd1e,	// (0x00046f80) aid_zoom_text_secondary

0x983a,	// (0x00042a9c) status_small_pane_g7_ParamLimits

0x983a,	// (0x00042a9c) status_small_pane_g7

0x985d,	// (0x00042abf) status_small_pane_t1_ParamLimits

0x87d4,	// (0x00041a36) title_pane_g2

0x0003,

0xf529,	// (0x0004878b) title_pane_g

0x8be7,	// (0x00041e49) aid_size_cell_colour_1_pane_ParamLimits

0x8be7,	// (0x00041e49) aid_size_cell_colour_1_pane

0x8bfb,	// (0x00041e5d) aid_size_cell_colour_2_pane_ParamLimits

0x8bfb,	// (0x00041e5d) aid_size_cell_colour_2_pane

0x8c0f,	// (0x00041e71) aid_size_cell_colour_3_pane_ParamLimits

0x8c0f,	// (0x00041e71) aid_size_cell_colour_3_pane

0x8c23,	// (0x00041e85) aid_size_cell_colour_4_pane_ParamLimits

0x8c23,	// (0x00041e85) aid_size_cell_colour_4_pane

0xf0ba,	// (0x0004831c) title_pane_stacon_g1_ParamLimits

0xf0ba,	// (0x0004831c) title_pane_stacon_g1

0x2742,	// (0x0003b9a4) popup_note_wait_window_g3_ParamLimits

0x2742,	// (0x0003b9a4) popup_note_wait_window_g3

0x27b8,	// (0x0003ba1a) popup_note_wait_window_t5_ParamLimits

0x27b8,	// (0x0003ba1a) popup_note_wait_window_t5

0xb445,	// (0x000446a7) main_feb_china_hwr_fs_writing_pane

0x9ac9,	// (0x00042d2b) popup_feb_china_hwr_fs_window_ParamLimits

0x9ac9,	// (0x00042d2b) popup_feb_china_hwr_fs_window

0xa604,	// (0x00043866) aid_size_cell_hwr_fs_ParamLimits

0xa604,	// (0x00043866) aid_size_cell_hwr_fs

0x2102,	// (0x0003b364) bg_popup_sub_pane_cp3_ParamLimits

0x2102,	// (0x0003b364) bg_popup_sub_pane_cp3

0xa619,	// (0x0004387b) grid_hwr_fs_pane_ParamLimits

0xa619,	// (0x0004387b) grid_hwr_fs_pane

0x076a,	// (0x000399cc) linegrid_hwr_fs_pane_ParamLimits

0x076a,	// (0x000399cc) linegrid_hwr_fs_pane

0xa631,	// (0x00043893) cell_hwr_fs_pane_ParamLimits

0xa631,	// (0x00043893) cell_hwr_fs_pane

0x210e,	// (0x0003b370) linegrid_hwr_fs_pane_g1_ParamLimits

0x210e,	// (0x0003b370) linegrid_hwr_fs_pane_g1

0xa657,	// (0x000438b9) linegrid_hwr_fs_pane_g2_ParamLimits

0xa657,	// (0x000438b9) linegrid_hwr_fs_pane_g2

0x212c,	// (0x0003b38e) linegrid_hwr_fs_pane_g3_ParamLimits

0x212c,	// (0x0003b38e) linegrid_hwr_fs_pane_g3

0xa669,	// (0x000438cb) linegrid_hwr_fs_pane_g4_ParamLimits

0xa669,	// (0x000438cb) linegrid_hwr_fs_pane_g4

0x07b6,	// (0x00039a18) linegrid_hwr_fs_pane_g5_ParamLimits

0x07b6,	// (0x00039a18) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00048a1e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00048a1e) linegrid_hwr_fs_pane_g

0x2138,	// (0x0003b39a) cell_hwr_fs_pane_g1_ParamLimits

0x2138,	// (0x0003b39a) cell_hwr_fs_pane_g1

0x1eee,	// (0x0003b150) cell_hwr_fs_pane_g2_ParamLimits

0x1eee,	// (0x0003b150) cell_hwr_fs_pane_g2

0xa683,	// (0x000438e5) cell_hwr_fs_pane_g3_ParamLimits

0xa683,	// (0x000438e5) cell_hwr_fs_pane_g3

0xa690,	// (0x000438f2) cell_hwr_fs_pane_g4_ParamLimits

0xa690,	// (0x000438f2) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x00048a29) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x00048a29) cell_hwr_fs_pane_g

0xa69d,	// (0x000438ff) cell_hwr_fs_pane_t1

0xb445,	// (0x000446a7) grid_highlight_pane_cp6

0xb445,	// (0x000446a7) main_idle_act2_pane

0xb970,	// (0x00044bd2) aid_inside_area_popup_secondary

0xc431,	// (0x00045693) aid_inside_area_window_primary_ParamLimits

0xc431,	// (0x00045693) aid_inside_area_window_primary

0xc95b,	// (0x00045bbd) ai2_news_ticker_pane

0x3974,	// (0x0003cbd6) aid_size_cell_ai1_link_ParamLimits

0x3974,	// (0x0003cbd6) aid_size_cell_ai1_link

0xc963,	// (0x00045bc5) popup_ai2_data_window_ParamLimits

0xc963,	// (0x00045bc5) popup_ai2_data_window

0x39a4,	// (0x0003cc06) popup_ai2_link_window_ParamLimits

0x39a4,	// (0x0003cc06) popup_ai2_link_window

0x2102,	// (0x0003b364) bg_popup_sub_pane_cp4_ParamLimits

0x2102,	// (0x0003b364) bg_popup_sub_pane_cp4

0x39b8,	// (0x0003cc1a) grid_ai2_link_pane_ParamLimits

0x39b8,	// (0x0003cc1a) grid_ai2_link_pane

0x39cf,	// (0x0003cc31) popup_ai2_link_window_g1_ParamLimits

0x39cf,	// (0x0003cc31) popup_ai2_link_window_g1

0x39db,	// (0x0003cc3d) popup_ai2_link_window_g2_ParamLimits

0x39db,	// (0x0003cc3d) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00048bfc) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00048bfc) popup_ai2_link_window_g

0x39ea,	// (0x0003cc4c) ai2_mp_button_pane

0x39f2,	// (0x0003cc54) ai2_mp_volume_pane

0x2315,	// (0x0003b577) bg_popup_sub_pane_cp5_ParamLimits

0x2315,	// (0x0003b577) bg_popup_sub_pane_cp5

0x39fa,	// (0x0003cc5c) heading_ai2_gene_pane_ParamLimits

0x39fa,	// (0x0003cc5c) heading_ai2_gene_pane

0x3a06,	// (0x0003cc68) list_ai2_gene_pane_ParamLimits

0x3a06,	// (0x0003cc68) list_ai2_gene_pane

0x3a4e,	// (0x0003ccb0) cell_ai2_link_pane_ParamLimits

0x3a4e,	// (0x0003ccb0) cell_ai2_link_pane

0x3a64,	// (0x0003ccc6) cell_ai2_link_pane_g1

0xb445,	// (0x000446a7) grid_highlight_pane_cp7

0x0bd2,	// (0x00039e34) ai2_mp_volume_pane_g1

0x3b34,	// (0x0003cd96) ai2_mp_volume_pane_g2

0x3aa9,	// (0x0003cd0b) list_ai2_gene_pane_t1

0x3b3c,	// (0x0003cd9e) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x00048c15) ai2_mp_volume_pane_g

0xaabe,	// (0x00043d20) volume_small_pane_cp3

0x3b44,	// (0x0003cda6) aid_size_cell_ai2_button

0x3b4c,	// (0x0003cdae) grid_ai2_button_pane

0x3b55,	// (0x0003cdb7) cell_ai2_button_pane_ParamLimits

0x3b55,	// (0x0003cdb7) cell_ai2_button_pane

0xb43b,	// (0x0004469d) cell_ai2_button_pane_g1

0xb445,	// (0x000446a7) grid_highlight_pane_cp8

0x3af4,	// (0x0003cd56) ai2_gene_pane_t1_ParamLimits

0x3af4,	// (0x0003cd56) ai2_gene_pane_t1

0x9a2b,	// (0x00042c8d) aid_height_parent_landscape

0xc67f,	// (0x000458e1) aid_height_set_list

0x3451,	// (0x0003c6b3) aid_size_parent

0x378f,	// (0x0003c9f1) aid_size_cell_graphic_pane_ParamLimits

0x3a16,	// (0x0003cc78) popup_ai2_data_window_g1_ParamLimits

0x3a16,	// (0x0003cc78) popup_ai2_data_window_g1

0x3a22,	// (0x0003cc84) ai2_news_ticker_pane_g1

0x3a2a,	// (0x0003cc8c) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00048c01) ai2_news_ticker_pane_g

0x3a32,	// (0x0003cc94) ai2_news_ticker_pane_t1

0x3a40,	// (0x0003cca2) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x00048c06) ai2_news_ticker_pane_t

0x3a6d,	// (0x0003cccf) heading_ai2_gene_pane_g1

0x3a75,	// (0x0003ccd7) heading_ai2_gene_pane_t1_ParamLimits

0x3a75,	// (0x0003ccd7) heading_ai2_gene_pane_t1

0x3a8a,	// (0x0003ccec) list_highlight_pane_cp6

0x3a92,	// (0x0003ccf4) ai2_gene_pane_ParamLimits

0x3a92,	// (0x0003ccf4) ai2_gene_pane

0x3ab7,	// (0x0003cd19) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00048c0b) list_ai2_gene_pane_t

0x3ac5,	// (0x0003cd27) list_highlight_pane_cp8_ParamLimits

0x3ac5,	// (0x0003cd27) list_highlight_pane_cp8

0x3ad6,	// (0x0003cd38) ai2_gene_pane_g1_ParamLimits

0x3ad6,	// (0x0003cd38) ai2_gene_pane_g1

0x3ae8,	// (0x0003cd4a) ai2_gene_pane_g2_ParamLimits

0x3ae8,	// (0x0003cd4a) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00048c10) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00048c10) ai2_gene_pane_g

0xb7f6,	// (0x00044a58) scroll_pane_cp12

0x99e8,	// (0x00042c4a) control_pane_t3_ParamLimits

0x99e8,	// (0x00042c4a) control_pane_t3

0x984e,	// (0x00042ab0) status_small_pane_g8_ParamLimits

0x984e,	// (0x00042ab0) status_small_pane_g8

0x9b8c,	// (0x00042dee) popup_find_window_ParamLimits

0x9e19,	// (0x0004307b) popup_note_image_window_ParamLimits

0xdaff,	// (0x00046d61) list_double2_graphic_pane_vc_g1_ParamLimits

0xdaff,	// (0x00046d61) list_double2_graphic_pane_vc_g1

0xdd98,	// (0x00046ffa) list_double2_graphic_pane_vc_g2_ParamLimits

0xdd98,	// (0x00046ffa) list_double2_graphic_pane_vc_g2

0xdda4,	// (0x00047006) list_double2_graphic_pane_vc_g3_ParamLimits

0xdda4,	// (0x00047006) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x000489ec) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x000489ec) list_double2_graphic_pane_vc_g

0xdb23,	// (0x00046d85) list_double2_graphic_pane_vc_t1_ParamLimits

0xdb23,	// (0x00046d85) list_double2_graphic_pane_vc_t1

0xdb0b,	// (0x00046d6d) list_single_heading_pane_vc_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_heading_pane_vc_g1

0xdb17,	// (0x00046d79) list_single_heading_pane_vc_g2_ParamLimits

0xdb17,	// (0x00046d79) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048805) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048805) list_single_heading_pane_vc_g

0xddb0,	// (0x00047012) list_single_heading_pane_vc_t1_ParamLimits

0xddb0,	// (0x00047012) list_single_heading_pane_vc_t1

0xddc6,	// (0x00047028) list_single_heading_pane_vc_t2_ParamLimits

0xddc6,	// (0x00047028) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00048a0d) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00048a0d) list_single_heading_pane_vc_t

0x20be,	// (0x0003b320) list_setting_number_pane_vc_g1_ParamLimits

0x20be,	// (0x0003b320) list_setting_number_pane_vc_g1

0x20ca,	// (0x0003b32c) list_setting_number_pane_vc_g2_ParamLimits

0x20ca,	// (0x0003b32c) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048a12) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048a12) list_setting_number_pane_vc_g

0xddd8,	// (0x0004703a) list_setting_number_pane_vc_t1_ParamLimits

0xddd8,	// (0x0004703a) list_setting_number_pane_vc_t1

0xddec,	// (0x0004704e) list_setting_number_pane_vc_t2_ParamLimits

0xddec,	// (0x0004704e) list_setting_number_pane_vc_t2

0xde08,	// (0x0004706a) list_setting_number_pane_vc_t3_ParamLimits

0xde08,	// (0x0004706a) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x00048a17) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x00048a17) list_setting_number_pane_vc_t

0xde32,	// (0x00047094) set_value_pane_vc_ParamLimits

0xde32,	// (0x00047094) set_value_pane_vc

0x3605,	// (0x0003c867) list_double2_graphic_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double2_graphic_pane_vc

0x3605,	// (0x0003c867) list_double2_large_graphic_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double2_large_graphic_pane_vc

0x3605,	// (0x0003c867) list_double2_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double2_pane_vc

0x3605,	// (0x0003c867) list_double_graphic_heading_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double_graphic_heading_pane_vc

0x3605,	// (0x0003c867) list_double_graphic_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double_graphic_pane_vc

0x3605,	// (0x0003c867) list_double_heading_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double_heading_pane_vc

0xde51,	// (0x000470b3) list_double_large_graphic_pane_vc_ParamLimits

0xde51,	// (0x000470b3) list_double_large_graphic_pane_vc

0x3605,	// (0x0003c867) list_double_number_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double_number_pane_vc

0x3605,	// (0x0003c867) list_double_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double_pane_vc

0x3605,	// (0x0003c867) list_double_time_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_double_time_pane_vc

0x3605,	// (0x0003c867) list_setting_number_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_setting_number_pane_vc

0x3605,	// (0x0003c867) list_setting_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_setting_pane_vc

0x3605,	// (0x0003c867) list_single_graphic_heading_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_single_graphic_heading_pane_vc

0x3605,	// (0x0003c867) list_single_heading_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_single_heading_pane_vc

0x3605,	// (0x0003c867) list_single_number_heading_pane_vc_ParamLimits

0x3605,	// (0x0003c867) list_single_number_heading_pane_vc

0xdb85,	// (0x00046de7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdb85,	// (0x00046de7) list_double_graphic_heading_pane_vc_g1

0xdd98,	// (0x00046ffa) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdd98,	// (0x00046ffa) list_double_graphic_heading_pane_vc_g2

0xdda4,	// (0x00047006) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdda4,	// (0x00047006) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00048c1c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00048c1c) list_double_graphic_heading_pane_vc_g

0xde70,	// (0x000470d2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xde70,	// (0x000470d2) list_double_graphic_heading_pane_vc_t1

0xde84,	// (0x000470e6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xde84,	// (0x000470e6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00048c23) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00048c23) list_double_graphic_heading_pane_vc_t

0x20be,	// (0x0003b320) list_setting_pane_vc_g1_ParamLimits

0x20be,	// (0x0003b320) list_setting_pane_vc_g1

0x20ca,	// (0x0003b32c) list_setting_pane_vc_g2_ParamLimits

0x20ca,	// (0x0003b32c) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048a12) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048a12) list_setting_pane_vc_g

0xde9c,	// (0x000470fe) list_setting_pane_vc_t1_ParamLimits

0xde9c,	// (0x000470fe) list_setting_pane_vc_t1

0xdeb8,	// (0x0004711a) list_setting_pane_vc_t2_ParamLimits

0xdeb8,	// (0x0004711a) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x00048c66) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x00048c66) list_setting_pane_vc_t

0xde32,	// (0x00047094) set_value_pane_cp_vc_ParamLimits

0xde32,	// (0x00047094) set_value_pane_cp_vc

0xdb0b,	// (0x00046d6d) list_single_number_heading_pane_vc_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_number_heading_pane_vc_g1

0xdb17,	// (0x00046d79) list_single_number_heading_pane_vc_g2_ParamLimits

0xdb17,	// (0x00046d79) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048805) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048805) list_single_number_heading_pane_vc_g

0xded2,	// (0x00047134) list_single_number_heading_pane_vc_t1_ParamLimits

0xded2,	// (0x00047134) list_single_number_heading_pane_vc_t1

0xdee8,	// (0x0004714a) list_single_number_heading_pane_vc_t2_ParamLimits

0xdee8,	// (0x0004714a) list_single_number_heading_pane_vc_t2

0xdefa,	// (0x0004715c) list_single_number_heading_pane_vc_t3_ParamLimits

0xdefa,	// (0x0004715c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x00048c6b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00048c6b) list_single_number_heading_pane_vc_t

0xdf0c,	// (0x0004716e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdf0c,	// (0x0004716e) list_single_graphic_heading_pane_vc_g1

0xdb0b,	// (0x00046d6d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdb0b,	// (0x00046d6d) list_single_graphic_heading_pane_vc_g4

0xdb17,	// (0x00046d79) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdb17,	// (0x00046d79) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x00048c72) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x00048c72) list_single_graphic_heading_pane_vc_g

0xdf18,	// (0x0004717a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdf18,	// (0x0004717a) list_single_graphic_heading_pane_vc_t1

0xdf2e,	// (0x00047190) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdf2e,	// (0x00047190) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x00048c79) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x00048c79) list_single_graphic_heading_pane_vc_t

0xdb0b,	// (0x00046d6d) list_double2_pane_vc_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_double2_pane_vc_g1

0xdb17,	// (0x00046d79) list_double2_pane_vc_g2_ParamLimits

0xdb17,	// (0x00046d79) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048805) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048805) list_double2_pane_vc_g

0xdf40,	// (0x000471a2) list_double2_pane_vc_t1_ParamLimits

0xdf40,	// (0x000471a2) list_double2_pane_vc_t1

0xdb91,	// (0x00046df3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xdb91,	// (0x00046df3) list_double2_large_graphic_pane_vc_g1

0xdb0b,	// (0x00046d6d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdb0b,	// (0x00046d6d) list_double2_large_graphic_pane_vc_g2

0xdb17,	// (0x00046d79) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdb17,	// (0x00046d79) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00048822) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00048822) list_double2_large_graphic_pane_vc_g

0xdb23,	// (0x00046d85) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdb23,	// (0x00046d85) list_double2_large_graphic_pane_vc_t1

0xdf58,	// (0x000471ba) list_double_time_pane_vc_g1_ParamLimits

0xdf58,	// (0x000471ba) list_double_time_pane_vc_g1

0xdf64,	// (0x000471c6) list_double_time_pane_vc_g2_ParamLimits

0xdf64,	// (0x000471c6) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00048c7e) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00048c7e) list_double_time_pane_vc_g

0xdf70,	// (0x000471d2) list_double_time_pane_vc_t1_ParamLimits

0xdf70,	// (0x000471d2) list_double_time_pane_vc_t1

0xdf94,	// (0x000471f6) list_double_time_pane_vc_t2_ParamLimits

0xdf94,	// (0x000471f6) list_double_time_pane_vc_t2

0xdfe3,	// (0x00047245) list_double_time_pane_vc_t3_ParamLimits

0xdfe3,	// (0x00047245) list_double_time_pane_vc_t3

0xdff5,	// (0x00047257) list_double_time_pane_vc_t4_ParamLimits

0xdff5,	// (0x00047257) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x00048c83) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x00048c83) list_double_time_pane_vc_t

0xdb0b,	// (0x00046d6d) list_double_pane_vc_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_double_pane_vc_g1

0xdb17,	// (0x00046d79) list_double_pane_vc_g2_ParamLimits

0xdb17,	// (0x00046d79) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048805) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048805) list_double_pane_vc_g

0xe009,	// (0x0004726b) list_double_pane_vc_t1_ParamLimits

0xe009,	// (0x0004726b) list_double_pane_vc_t1

0xe01d,	// (0x0004727f) list_double_pane_vc_t2_ParamLimits

0xe01d,	// (0x0004727f) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00048c8c) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00048c8c) list_double_pane_vc_t

0xdb0b,	// (0x00046d6d) list_double_number_pane_vc_g1_ParamLimits

0xdb0b,	// (0x00046d6d) list_double_number_pane_vc_g1

0xdb17,	// (0x00046d79) list_double_number_pane_vc_g2_ParamLimits

0xdb17,	// (0x00046d79) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048805) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048805) list_double_number_pane_vc_g

0xe035,	// (0x00047297) list_double_number_pane_vc_t1_ParamLimits

0xe035,	// (0x00047297) list_double_number_pane_vc_t1

0xe009,	// (0x0004726b) list_double_number_pane_vc_t2_ParamLimits

0xe009,	// (0x0004726b) list_double_number_pane_vc_t2

0xe047,	// (0x000472a9) list_double_number_pane_vc_t3_ParamLimits

0xe047,	// (0x000472a9) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x00048c91) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x00048c91) list_double_number_pane_vc_t

0xe05f,	// (0x000472c1) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe05f,	// (0x000472c1) list_double_large_graphic_pane_vc_g1

0xe07b,	// (0x000472dd) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe07b,	// (0x000472dd) list_double_large_graphic_pane_vc_g2

0xe08f,	// (0x000472f1) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe08f,	// (0x000472f1) list_double_large_graphic_pane_vc_g3

0xe09e,	// (0x00047300) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe09e,	// (0x00047300) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x00048c98) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00048c98) list_double_large_graphic_pane_vc_g

0xe0aa,	// (0x0004730c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe0aa,	// (0x0004730c) list_double_large_graphic_pane_vc_t1

0xe0c6,	// (0x00047328) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe0c6,	// (0x00047328) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x00048ca1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x00048ca1) list_double_large_graphic_pane_vc_t

0xdd98,	// (0x00046ffa) list_double_heading_pane_vc_g1_ParamLimits

0xdd98,	// (0x00046ffa) list_double_heading_pane_vc_g1

0xdda4,	// (0x00047006) list_double_heading_pane_vc_g2_ParamLimits

0xdda4,	// (0x00047006) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x00048ca6) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00048ca6) list_double_heading_pane_vc_g

0xe0e8,	// (0x0004734a) list_double_heading_pane_vc_t1_ParamLimits

0xe0e8,	// (0x0004734a) list_double_heading_pane_vc_t1

0xe0fc,	// (0x0004735e) list_double_heading_pane_vc_t2_ParamLimits

0xe0fc,	// (0x0004735e) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00048cab) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00048cab) list_double_heading_pane_vc_t

0xe114,	// (0x00047376) list_double_graphic_pane_vc_g1_ParamLimits

0xe114,	// (0x00047376) list_double_graphic_pane_vc_g1

0xe127,	// (0x00047389) list_double_graphic_pane_vc_g2_ParamLimits

0xe127,	// (0x00047389) list_double_graphic_pane_vc_g2

0xdb0b,	// (0x00046d6d) list_double_graphic_pane_vc_g3_ParamLimits

0xdb0b,	// (0x00046d6d) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x00048cb0) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x00048cb0) list_double_graphic_pane_vc_g

0xe144,	// (0x000473a6) list_double_graphic_pane_vc_t1_ParamLimits

0xe144,	// (0x000473a6) list_double_graphic_pane_vc_t1

0xe163,	// (0x000473c5) list_double_graphic_pane_vc_t2_ParamLimits

0xe163,	// (0x000473c5) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x00048cb9) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x00048cb9) list_double_graphic_pane_vc_t

0xda48,	// (0x00046caa) aid_size_cell_fastswap

0x859b,	// (0x000417fd) aid_size_cell_touch_ParamLimits

0x859b,	// (0x000417fd) aid_size_cell_touch

0xf05f,	// (0x000482c1) popup_fast_swap_wide_window_ParamLimits

0xf05f,	// (0x000482c1) popup_fast_swap_wide_window

0x876b,	// (0x000419cd) touch_pane_ParamLimits

0x876b,	// (0x000419cd) touch_pane

0xb843,	// (0x00044aa5) button_value_adjust_pane_cp2

0xdcc7,	// (0x00046f29) button_value_adjust_pane_cp4

0xdccf,	// (0x00046f31) form_field_data_pane_cp2

0x9071,	// (0x000422d3) form_field_data_wide_pane_cp2

0xbb5d,	// (0x00044dbf) bg_scroll_pane_ParamLimits

0x9401,	// (0x00042663) scroll_handle_pane_ParamLimits

0xf213,	// (0x00048475) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x00048475) scroll_sc2_down_pane

0xbb8e,	// (0x00044df0) scroll_sc2_up_pane_ParamLimits

0xbb8e,	// (0x00044df0) scroll_sc2_up_pane

0xcaac,	// (0x00045d0e) grid_wheel_folder_pane_g1_ParamLimits

0xcaac,	// (0x00045d0e) grid_wheel_folder_pane_g1

0xf395,	// (0x000485f7) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x000485f7) clock_nsta_pane_cp2

0x9714,	// (0x00042976) listscroll_midp_pane_ParamLimits

0x9720,	// (0x00042982) midp_canvas_pane

0xc236,	// (0x00045498) nsta_clock_indic_pane

0xc25e,	// (0x000454c0) listscroll_form_pane_vc

0xc266,	// (0x000454c8) listscroll_set_pane_vc_ParamLimits

0xc266,	// (0x000454c8) listscroll_set_pane_vc

0xa2ce,	// (0x00043530) clock_nsta_pane

0xa2f8,	// (0x0004355a) indicator_nsta_pane

0x1fb4,	// (0x0003b216) bg_popup_sub_pane_cp2_ParamLimits

0x1fc8,	// (0x0003b22a) find_pane_cp2_ParamLimits

0x1fc8,	// (0x0003b22a) find_pane_cp2

0x1fde,	// (0x0003b240) grid_toobar_pane_ParamLimits

0x20d6,	// (0x0003b338) list_form_gen_pane_vc_ParamLimits

0x20d6,	// (0x0003b338) list_form_gen_pane_vc

0x20ec,	// (0x0003b34e) scroll_pane_cp8_vc_ParamLimits

0x20ec,	// (0x0003b34e) scroll_pane_cp8_vc

0x2168,	// (0x0003b3ca) data_form_wide_pane_vc_ParamLimits

0x2168,	// (0x0003b3ca) data_form_wide_pane_vc

0x2174,	// (0x0003b3d6) form_field_data_wide_pane_vc_g1

0x217c,	// (0x0003b3de) form_field_data_wide_pane_vc_t1_ParamLimits

0x217c,	// (0x0003b3de) form_field_data_wide_pane_vc_t1

0xb857,	// (0x00044ab9) input_focus_pane_cp6_vc_ParamLimits

0xb857,	// (0x00044ab9) input_focus_pane_cp6_vc

0x24c9,	// (0x0003b72b) list_midp_pane_ParamLimits

0x37f9,	// (0x0003ca5b) scroll_pane_cp16_ParamLimits

0x37f9,	// (0x0003ca5b) scroll_pane_cp16

0x251f,	// (0x0003b781) button_value_adjust_pane_ParamLimits

0x251f,	// (0x0003b781) button_value_adjust_pane

0xc690,	// (0x000458f2) button_value_adjust_pane_cp6_ParamLimits

0xc690,	// (0x000458f2) button_value_adjust_pane_cp6

0xc7aa,	// (0x00045a0c) settings_code_pane_cp_ParamLimits

0xc7aa,	// (0x00045a0c) settings_code_pane_cp

0xb43b,	// (0x0004469d) cell_touch_pane_g1

0xb43b,	// (0x0004469d) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00048931) cell_touch_pane_g

0xc979,	// (0x00045bdb) cell_touch_pane_cp_ParamLimits

0xc979,	// (0x00045bdb) cell_touch_pane_cp

0xc995,	// (0x00045bf7) cell_touch_pane_ParamLimits

0xc995,	// (0x00045bf7) cell_touch_pane

0xb43b,	// (0x0004469d) scroll_sc2_down_pane_g1

0xb43b,	// (0x0004469d) scroll_sc2_up_pane_g1

0xb445,	// (0x000446a7) bg_set_opt_pane_cp4_vc

0x3b89,	// (0x0003cdeb) list_set_graphic_pane_vc_g1_ParamLimits

0x3b89,	// (0x0003cdeb) list_set_graphic_pane_vc_g1

0x3b95,	// (0x0003cdf7) list_set_graphic_pane_vc_g2_ParamLimits

0x3b95,	// (0x0003cdf7) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x00048c28) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x00048c28) list_set_graphic_pane_vc_g

0x3ba1,	// (0x0003ce03) text_primary_small_cp13_vc_ParamLimits

0x3ba1,	// (0x0003ce03) text_primary_small_cp13_vc

0x3bb9,	// (0x0003ce1b) list_set_graphic_pane_vc_ParamLimits

0x3bb9,	// (0x0003ce1b) list_set_graphic_pane_vc

0xb445,	// (0x000446a7) input_focus_pane_cp2_vc

0xb43b,	// (0x0004469d) setting_code_pane_vc_g1

0xb4b8,	// (0x0004471a) setting_code_pane_vc_t1

0x3bcc,	// (0x0003ce2e) set_text_pane_vc_t1_ParamLimits

0x3bcc,	// (0x0003ce2e) set_text_pane_vc_t1

0xb445,	// (0x000446a7) input_focus_pane_cp1_vc

0x3be9,	// (0x0003ce4b) list_set_text_pane_vc

0xb43b,	// (0x0004469d) setting_text_pane_vc_g1

0xb445,	// (0x000446a7) bg_set_opt_pane_cp2_vc

0xb4af,	// (0x00044711) setting_slider_graphic_pane_vc_g1

0x3bf3,	// (0x0003ce55) setting_slider_graphic_pane_vc_t1

0x3c03,	// (0x0003ce65) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00048c2d) setting_slider_graphic_pane_vc_t

0x3c13,	// (0x0003ce75) slider_set_pane_cp_vc

0x3c1b,	// (0x0003ce7d) slider_set_pane_vc_g1

0x3c24,	// (0x0003ce86) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x00048c32) slider_set_pane_vc_g

0xb8af,	// (0x00044b11) set_opt_bg_pane_g1_copy1

0xb8b7,	// (0x00044b19) set_opt_bg_pane_g2_copy1

0x3c50,	// (0x0003ceb2) set_opt_bg_pane_g3_copy1

0xb8c7,	// (0x00044b29) set_opt_bg_pane_g4_copy1

0xb8cf,	// (0x00044b31) set_opt_bg_pane_g5_copy1

0xb8d7,	// (0x00044b39) set_opt_bg_pane_g6_copy1

0x3c58,	// (0x0003ceba) set_opt_bg_pane_g7_copy1

0x3c62,	// (0x0003cec4) set_opt_bg_pane_g8_copy1

0x3c6a,	// (0x0003cecc) set_opt_bg_pane_g9_copy1

0xb445,	// (0x000446a7) bg_set_opt_pane_cp_vc

0x3c72,	// (0x0003ced4) setting_slider_pane_vc_t1

0x3c81,	// (0x0003cee3) setting_slider_pane_vc_t2

0x3c91,	// (0x0003cef3) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x00048c41) setting_slider_pane_vc_t

0x3ca1,	// (0x0003cf03) slider_set_pane_vc

0x080d,	// (0x00039a6f) volume_set_pane_vc_g1

0x0be3,	// (0x00039e45) volume_set_pane_vc_g2

0x0bec,	// (0x00039e4e) volume_set_pane_vc_g3

0x0bf5,	// (0x00039e57) volume_set_pane_vc_g4

0x0bfe,	// (0x00039e60) volume_set_pane_vc_g5

0x0c07,	// (0x00039e69) volume_set_pane_vc_g6

0x0c10,	// (0x00039e72) volume_set_pane_vc_g7

0x0c19,	// (0x00039e7b) volume_set_pane_vc_g8

0x0c22,	// (0x00039e84) volume_set_pane_vc_g9

0x0c2b,	// (0x00039e8d) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x00048c48) volume_set_pane_vc_g

0x3ca9,	// (0x0003cf0b) volume_set_pane_vc

0x3cb3,	// (0x0003cf15) button_value_adjust_pane_cp1_vc

0x3cbd,	// (0x0003cf1f) list_highlight_pane_cp2_vc

0x3cc6,	// (0x0003cf28) list_set_pane_vc_ParamLimits

0x3cc6,	// (0x0003cf28) list_set_pane_vc

0x3d24,	// (0x0003cf86) main_pane_set_vc_t1_ParamLimits

0x3d24,	// (0x0003cf86) main_pane_set_vc_t1

0x3d39,	// (0x0003cf9b) main_pane_set_vc_t2_ParamLimits

0x3d39,	// (0x0003cf9b) main_pane_set_vc_t2

0x3d4b,	// (0x0003cfad) main_pane_set_vc_t3_ParamLimits

0x3d4b,	// (0x0003cfad) main_pane_set_vc_t3

0x3d5d,	// (0x0003cfbf) main_pane_set_vc_t4_ParamLimits

0x3d5d,	// (0x0003cfbf) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x00048c5d) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x00048c5d) main_pane_set_vc_t

0x3d6f,	// (0x0003cfd1) setting_code_pane_vc_ParamLimits

0x3d6f,	// (0x0003cfd1) setting_code_pane_vc

0x3d7e,	// (0x0003cfe0) setting_slider_graphic_pane_vc

0x3d7e,	// (0x0003cfe0) setting_slider_pane_vc

0x3d7e,	// (0x0003cfe0) setting_text_pane_vc

0x3d7e,	// (0x0003cfe0) setting_volume_pane_vc

0x3d86,	// (0x0003cfe8) scroll_pane_cp121_vc

0xb831,	// (0x00044a93) set_content_pane_vc

0x3d8e,	// (0x0003cff0) button_value_adjust_pane_g1

0x3d97,	// (0x0003cff9) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x00048cbe) button_value_adjust_pane_g

0x3da0,	// (0x0003d002) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3da0,	// (0x0003d002) form_field_slider_wide_pane_vc_t1

0x3db4,	// (0x0003d016) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3db4,	// (0x0003d016) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x00048cc3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x00048cc3) form_field_slider_wide_pane_vc_t

0xb493,	// (0x000446f5) input_focus_pane_cp10_vc_ParamLimits

0xb493,	// (0x000446f5) input_focus_pane_cp10_vc

0x3de2,	// (0x0003d044) slider_cont_pane_cp1_vc_ParamLimits

0x3de2,	// (0x0003d044) slider_cont_pane_cp1_vc

0x3df4,	// (0x0003d056) slider_form_pane_g1_cp2

0x3c24,	// (0x0003ce86) slider_form_pane_g2_cp2

0x3e21,	// (0x0003d083) form_field_slider_pane_vc_t3

0x3e2f,	// (0x0003d091) form_field_slider_pane_vc_t4

0x3e3d,	// (0x0003d09f) slider_form_pane_vc_ParamLimits

0x3e3d,	// (0x0003d09f) slider_form_pane_vc

0x3e4a,	// (0x0003d0ac) form_field_slider_pane_vc_t1_ParamLimits

0x3e4a,	// (0x0003d0ac) form_field_slider_pane_vc_t1

0x3db4,	// (0x0003d016) form_field_slider_pane_vc_t2_ParamLimits

0x3db4,	// (0x0003d016) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x00048cd5) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x00048cd5) form_field_slider_pane_vc_t

0xb493,	// (0x000446f5) input_focus_pane_cp9_vc_ParamLimits

0xb493,	// (0x000446f5) input_focus_pane_cp9_vc

0x3e66,	// (0x0003d0c8) slider_cont_pane_vc_ParamLimits

0x3e66,	// (0x0003d0c8) slider_cont_pane_vc

0x3e7a,	// (0x0003d0dc) list_form_graphic_pane_cp_vc_ParamLimits

0x3e7a,	// (0x0003d0dc) list_form_graphic_pane_cp_vc

0x2174,	// (0x0003b3d6) form_field_popup_wide_pane_vc_g1

0x3e8f,	// (0x0003d0f1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e8f,	// (0x0003d0f1) form_field_popup_wide_pane_vc_t1

0xb857,	// (0x00044ab9) input_focus_pane_cp8_vc_ParamLimits

0xb857,	// (0x00044ab9) input_focus_pane_cp8_vc

0x3ed4,	// (0x0003d136) list_form_wide_pane_vc_ParamLimits

0x3ed4,	// (0x0003d136) list_form_wide_pane_vc

0x3ee0,	// (0x0003d142) list_form_graphic_pane_vc_g1

0x3ee8,	// (0x0003d14a) list_form_graphic_pane_vc_t1_ParamLimits

0x3ee8,	// (0x0003d14a) list_form_graphic_pane_vc_t1

0xb4a1,	// (0x00044703) list_highlight_pane_cp5_vc_ParamLimits

0xb4a1,	// (0x00044703) list_highlight_pane_cp5_vc

0x3f04,	// (0x0003d166) list_form_graphic_pane_vc_ParamLimits

0x3f04,	// (0x0003d166) list_form_graphic_pane_vc

0x2174,	// (0x0003b3d6) form_field_popup_pane_vc_g1

0x3f1a,	// (0x0003d17c) form_field_popup_pane_vc_t1_ParamLimits

0x3f1a,	// (0x0003d17c) form_field_popup_pane_vc_t1

0xb857,	// (0x00044ab9) input_focus_pane_cp7_vc_ParamLimits

0xb857,	// (0x00044ab9) input_focus_pane_cp7_vc

0x3f31,	// (0x0003d193) list_form_pane_vc_ParamLimits

0x3f31,	// (0x0003d193) list_form_pane_vc

0x3f3d,	// (0x0003d19f) data_form_pane_vc_t1_ParamLimits

0x3f3d,	// (0x0003d19f) data_form_pane_vc_t1

0xb8af,	// (0x00044b11) input_focus_pane_vc_g1

0xb8b7,	// (0x00044b19) input_focus_pane_vc_g2

0xb8bf,	// (0x00044b21) input_focus_pane_vc_g3

0xb8c7,	// (0x00044b29) input_focus_pane_vc_g4

0xb8cf,	// (0x00044b31) input_focus_pane_vc_g5

0xb8d7,	// (0x00044b39) input_focus_pane_vc_g6

0xb8df,	// (0x00044b41) input_focus_pane_vc_g7

0xb8e7,	// (0x00044b49) input_focus_pane_vc_g8

0xb8ef,	// (0x00044b51) input_focus_pane_vc_g9

0xb43b,	// (0x0004469d) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x000488ba) input_focus_pane_vc_g

0x2168,	// (0x0003b3ca) data_form_pane_vc_ParamLimits

0x2168,	// (0x0003b3ca) data_form_pane_vc

0x2174,	// (0x0003b3d6) form_field_data_pane_vc_g1

0x3f58,	// (0x0003d1ba) form_field_data_pane_vc_t1_ParamLimits

0x3f58,	// (0x0003d1ba) form_field_data_pane_vc_t1

0xb857,	// (0x00044ab9) input_focus_pane_vc_ParamLimits

0xb857,	// (0x00044ab9) input_focus_pane_vc

0x3f72,	// (0x0003d1d4) button_value_adjust_pane_cp3_vc

0x3f7a,	// (0x0003d1dc) button_value_adjust_pane_cp5_vc

0x3f82,	// (0x0003d1e4) form_field_data_pane_vc_ParamLimits

0x3f82,	// (0x0003d1e4) form_field_data_pane_vc

0x3f99,	// (0x0003d1fb) form_field_data_pane_vc_cp2

0x3fa1,	// (0x0003d203) form_field_data_wide_pane_vc_ParamLimits

0x3fa1,	// (0x0003d203) form_field_data_wide_pane_vc

0x3fb7,	// (0x0003d219) form_field_data_wide_pane_vc_cp2

0x3fbf,	// (0x0003d221) form_field_popup_pane_vc_ParamLimits

0x3fbf,	// (0x0003d221) form_field_popup_pane_vc

0x3fd6,	// (0x0003d238) form_field_popup_wide_pane_vc_ParamLimits

0x3fd6,	// (0x0003d238) form_field_popup_wide_pane_vc

0x3fec,	// (0x0003d24e) form_field_slider_pane_vc_ParamLimits

0x3fec,	// (0x0003d24e) form_field_slider_pane_vc

0x3fff,	// (0x0003d261) form_field_slider_wide_pane_vc_ParamLimits

0x3fff,	// (0x0003d261) form_field_slider_wide_pane_vc

0xc9b2,	// (0x00045c14) grid_touch_1_pane_ParamLimits

0xc9b2,	// (0x00045c14) grid_touch_1_pane

0xc9c6,	// (0x00045c28) grid_touch_2_pane_ParamLimits

0xc9c6,	// (0x00045c28) grid_touch_2_pane

0x40e3,	// (0x0003d345) touch_pane_g1_ParamLimits

0x40e3,	// (0x0003d345) touch_pane_g1

0x4036,	// (0x0003d298) cell_app_pane_cp_wide_ParamLimits

0x4036,	// (0x0003d298) cell_app_pane_cp_wide

0x4047,	// (0x0003d2a9) grid_popup_fast_wide_pane_ParamLimits

0x4047,	// (0x0003d2a9) grid_popup_fast_wide_pane

0x405b,	// (0x0003d2bd) scroll_pane_cp19_ParamLimits

0x405b,	// (0x0003d2bd) scroll_pane_cp19

0xb445,	// (0x000446a7) bg_popup_window_pane_cp20

0x406f,	// (0x0003d2d1) listscroll_popup_fast_wide_pane

0xc9f0,	// (0x00045c52) grid_indicator_nsta_pane

0x4089,	// (0x0003d2eb) clock_nsta_pane_g1

0x4092,	// (0x0003d2f4) clock_nsta_pane_t1

0xc9fc,	// (0x00045c5e) cell_indicator_nsta_pane_ParamLimits

0xc9fc,	// (0x00045c5e) cell_indicator_nsta_pane

0x40e3,	// (0x0003d345) cell_indicator_nsta_pane_g1

0xca17,	// (0x00045c79) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x00048ce6) cell_indicator_nsta_pane_g

0x4103,	// (0x0003d365) clock_nsta_pane_cp

0x410c,	// (0x0003d36e) indicator_nsta_pane_cp

0x4116,	// (0x0003d378) nsta_clock_indic_pane_g1

0xb4dd,	// (0x0004473f) grid_indicator_pane

0x949b,	// (0x000426fd) scroll_pane_cp29

0xf2e4,	// (0x00048546) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x00048546) indicator_nsta_pane_cp2

0xb4a1,	// (0x00044703) main_apps_wheel_pane

0xa780,	// (0x000439e2) form_midp_field_text_pane_ParamLimits

0x24d5,	// (0x0003b737) scroll_bar_cp050_ParamLimits

0x416f,	// (0x0003d3d1) cell_indicator_pane_ParamLimits

0x416f,	// (0x0003d3d1) cell_indicator_pane

0x4188,	// (0x0003d3ea) cell_indicator_pane_g1

0xca36,	// (0x00045c98) grid_wheel_folder_pane_ParamLimits

0xca36,	// (0x00045c98) grid_wheel_folder_pane

0xca44,	// (0x00045ca6) list_wheel_apps_pane_ParamLimits

0xca44,	// (0x00045ca6) list_wheel_apps_pane

0xca52,	// (0x00045cb4) main_apps_wheel_pane_g1_ParamLimits

0xca52,	// (0x00045cb4) main_apps_wheel_pane_g1

0xca5e,	// (0x00045cc0) main_apps_wheel_pane_g2_ParamLimits

0xca5e,	// (0x00045cc0) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x00048d02) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x00048d02) main_apps_wheel_pane_g

0xca6c,	// (0x00045cce) main_apps_wheel_pane_t1_ParamLimits

0xca6c,	// (0x00045cce) main_apps_wheel_pane_t1

0xca80,	// (0x00045ce2) list_wheel_apps_pane_g1

0xca88,	// (0x00045cea) list_wheel_apps_pane_g2

0xca90,	// (0x00045cf2) list_wheel_apps_pane_g3

0xca98,	// (0x00045cfa) list_wheel_apps_pane_g4

0xcaa2,	// (0x00045d04) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x00048d07) list_wheel_apps_pane_g

0xbfb8,	// (0x0004521a) navi_icon_text_pane

0xa1c2,	// (0x00043424) aid_fill_nsta

0x424f,	// (0x0003d4b1) navi_icon_text_pane_g1

0x425b,	// (0x0003d4bd) navi_icon_text_pane_t1

0xbe9c,	// (0x000450fe) list_set_graphic_pane_t1_ParamLimits

0xbe9c,	// (0x000450fe) list_set_graphic_pane_t1

0x2c20,	// (0x0003be82) popup_midp_note_alarm_window_t6_ParamLimits

0x2c20,	// (0x0003be82) popup_midp_note_alarm_window_t6

0x2c32,	// (0x0003be94) popup_midp_note_alarm_window_t7_ParamLimits

0x2c32,	// (0x0003be94) popup_midp_note_alarm_window_t7

0x2c44,	// (0x0003bea6) popup_midp_note_alarm_window_t8_ParamLimits

0x2c44,	// (0x0003bea6) popup_midp_note_alarm_window_t8

0x2c56,	// (0x0003beb8) popup_midp_note_alarm_window_t9_ParamLimits

0x2c56,	// (0x0003beb8) popup_midp_note_alarm_window_t9

0x2c68,	// (0x0003beca) popup_midp_note_alarm_window_t10_ParamLimits

0x2c68,	// (0x0003beca) popup_midp_note_alarm_window_t10

0x2c7a,	// (0x0003bedc) popup_midp_note_alarm_window_t11_ParamLimits

0x2c7a,	// (0x0003bedc) popup_midp_note_alarm_window_t11

0xc412,	// (0x00045674) scroll_pane_cp17_ParamLimits

0xc412,	// (0x00045674) scroll_pane_cp17

0x080d,	// (0x00039a6f) volume_small_pane_cp_g1

0x0c34,	// (0x00039e96) volume_small_pane_cp_g2

0x0c3d,	// (0x00039e9f) volume_small_pane_cp_g3

0x0c46,	// (0x00039ea8) volume_small_pane_cp_g4

0x0c4f,	// (0x00039eb1) volume_small_pane_cp_g5

0x0bfe,	// (0x00039e60) volume_small_pane_cp_g6

0x0c58,	// (0x00039eba) volume_small_pane_cp_g7

0x0c61,	// (0x00039ec3) volume_small_pane_cp_g8

0x0c6a,	// (0x00039ecc) volume_small_pane_cp_g9

0x0c73,	// (0x00039ed5) volume_small_pane_cp_g10

0xc109,	// (0x0004536b) midp_ticker_pane_g1_ParamLimits

0xc115,	// (0x00045377) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00048986) midp_ticker_pane_g_ParamLimits

0xc121,	// (0x00045383) midp_ticker_pane_t1_ParamLimits

0xa1e6,	// (0x00043448) aid_fill_nsta_2

0x24c1,	// (0x0003b723) list_form2_midp_pane

0x35d4,	// (0x0003c836) midp_editing_number_pane_ParamLimits

0x35e3,	// (0x0003c845) midp_ticker_pane_ParamLimits

0x426d,	// (0x0003d4cf) form2_midp_field_pane

0x4291,	// (0x0003d4f3) scroll_pane_cp51

0x42b1,	// (0x0003d513) form2_midp_button_pane_ParamLimits

0x42b1,	// (0x0003d513) form2_midp_button_pane

0x42c3,	// (0x0003d525) form2_midp_content_pane_ParamLimits

0x42c3,	// (0x0003d525) form2_midp_content_pane

0x42dd,	// (0x0003d53f) form2_midp_field_choice_group_pane

0x42e5,	// (0x0003d547) form2_midp_field_pane_g1

0x42ed,	// (0x0003d54f) form2_midp_field_pane_g2

0x42f5,	// (0x0003d557) form2_midp_field_pane_g3

0x42fd,	// (0x0003d55f) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x00048d2c) form2_midp_field_pane_g

0x4305,	// (0x0003d567) form2_midp_gauge_slider_pane

0x430d,	// (0x0003d56f) form2_midp_gauge_wait_pane

0x4315,	// (0x0003d577) form2_midp_image_pane_ParamLimits

0x4315,	// (0x0003d577) form2_midp_image_pane

0xcad5,	// (0x00045d37) form2_midp_label_pane_ParamLimits

0xcad5,	// (0x00045d37) form2_midp_label_pane

0xcaee,	// (0x00045d50) form2_midp_label_pane_cp_ParamLimits

0xcaee,	// (0x00045d50) form2_midp_label_pane_cp

0x436a,	// (0x0003d5cc) form2_midp_string_pane_ParamLimits

0x436a,	// (0x0003d5cc) form2_midp_string_pane

0xe18d,	// (0x000473ef) form2_midp_text_pane_ParamLimits

0xe18d,	// (0x000473ef) form2_midp_text_pane

0x437c,	// (0x0003d5de) form2_midp_time_pane

0x438c,	// (0x0003d5ee) input_focus_pane_cp51_ParamLimits

0x438c,	// (0x0003d5ee) input_focus_pane_cp51

0xcb0d,	// (0x00045d6f) form2_midp_label_pane_t1_ParamLimits

0xcb0d,	// (0x00045d6f) form2_midp_label_pane_t1

0xe1a6,	// (0x00047408) form2_mdip_text_pane_t1_ParamLimits

0xe1a6,	// (0x00047408) form2_mdip_text_pane_t1

0xe1c4,	// (0x00047426) form2_midp_time_pane_t1

0x43ed,	// (0x0003d64f) form2_midp_gauge_slider_pane_t1

0xcb4d,	// (0x00045daf) form2_midp_gauge_slider_pane_t2

0xcb5f,	// (0x00045dc1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x00048d35) form2_midp_gauge_slider_pane_t

0x4423,	// (0x0003d685) form2_midp_slider_pane

0x442f,	// (0x0003d691) form2_midp_gauge_wait_pane_t1

0x443d,	// (0x0003d69f) form2_midp_wait_pane_ParamLimits

0x443d,	// (0x0003d69f) form2_midp_wait_pane

0xcb71,	// (0x00045dd3) list_single_2graphic_pane_cp4_ParamLimits

0xcb71,	// (0x00045dd3) list_single_2graphic_pane_cp4

0xa6bf,	// (0x00043921) list_single_midp_graphic_pane_cp_ParamLimits

0xa6bf,	// (0x00043921) list_single_midp_graphic_pane_cp

0xb445,	// (0x000446a7) list_highlight_pane_cp20

0x4490,	// (0x0003d6f2) list_single_2graphic_pane_g1_cp4

0x3a6d,	// (0x0003cccf) list_single_2graphic_pane_g2_cp4

0x4498,	// (0x0003d6fa) list_single_2graphic_pane_t1_cp4

0xb4a1,	// (0x00044703) list_highlight_pane_cp21

0x44a7,	// (0x0003d709) list_single_midp_graphic_pane_g4_cp

0x44b6,	// (0x0003d718) list_single_midp_graphic_pane_t1_cp

0xcb86,	// (0x00045de8) form2_mdip_string_pane_t1_ParamLimits

0xcb86,	// (0x00045de8) form2_mdip_string_pane_t1

0xb445,	// (0x000446a7) bg_wml_button_pane_cp2

0xb43b,	// (0x0004469d) form2_midp_image_pane_g1

0xdbe8,	// (0x00046e4a) list_double_large_graphic_pane_g5_ParamLimits

0xdbe8,	// (0x00046e4a) list_double_large_graphic_pane_g5

0x9714,	// (0x00042976) midp_form_pane_ParamLimits

0xb4a1,	// (0x00044703) main_apps_wheel_pane_ParamLimits

0x9ea0,	// (0x00043102) popup_preview_window_ParamLimits

0x9ea0,	// (0x00043102) popup_preview_window

0xa16d,	// (0x000433cf) popup_touch_info_window_ParamLimits

0xa16d,	// (0x000433cf) popup_touch_info_window

0xa18b,	// (0x000433ed) popup_touch_menu_window_ParamLimits

0xa18b,	// (0x000433ed) popup_touch_menu_window

0xb431,	// (0x00044693) bg_popup_sub_pane_cp6

0x45d2,	// (0x0003d834) list_touch_menu_pane

0xcbfc,	// (0x00045e5e) list_single_touch_menu_pane_ParamLimits

0xcbfc,	// (0x00045e5e) list_single_touch_menu_pane

0xcc10,	// (0x00045e72) list_single_touch_menu_pane_t1

0xb4a1,	// (0x00044703) bg_popup_sub_pane_cp7_ParamLimits

0xb4a1,	// (0x00044703) bg_popup_sub_pane_cp7

0x45fe,	// (0x0003d860) heading_sub_pane

0x4606,	// (0x0003d868) list_touch_info_pane_ParamLimits

0x4606,	// (0x0003d868) list_touch_info_pane

0x4615,	// (0x0003d877) list_single_touch_info_pane_ParamLimits

0x4615,	// (0x0003d877) list_single_touch_info_pane

0x4627,	// (0x0003d889) list_single_touch_info_pane_t1

0x4635,	// (0x0003d897) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x00048d43) list_single_touch_info_pane_t

0xc0f2,	// (0x00045354) bg_popup_heading_pane_cp

0x4643,	// (0x0003d8a5) heading_sub_pane_t1

0x2102,	// (0x0003b364) bg_popup_preview_window_pane_cp_ParamLimits

0x2102,	// (0x0003b364) bg_popup_preview_window_pane_cp

0x45fe,	// (0x0003d860) heading_preview_pane

0x4606,	// (0x0003d868) list_preview_pane_ParamLimits

0x4606,	// (0x0003d868) list_preview_pane

0x4651,	// (0x0003d8b3) popup_preview_window_g1

0x4615,	// (0x0003d877) list_single_preview_pane_ParamLimits

0x4615,	// (0x0003d877) list_single_preview_pane

0x4659,	// (0x0003d8bb) list_single_preview_pane_g1

0x4661,	// (0x0003d8c3) list_single_preview_pane_t1

0x4627,	// (0x0003d889) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00048d48) list_single_preview_pane_t

0x466f,	// (0x0003d8d1) bg_popup_heading_pane_cp2_ParamLimits

0x466f,	// (0x0003d8d1) bg_popup_heading_pane_cp2

0x4685,	// (0x0003d8e7) heading_preview_pane_g1

0x468d,	// (0x0003d8ef) heading_preview_pane_t1_ParamLimits

0x468d,	// (0x0003d8ef) heading_preview_pane_t1

0xb4f4,	// (0x00044756) soft_indicator_pane_t1_ParamLimits

0xb7d3,	// (0x00044a35) scroll_pane_ParamLimits

0xbb7c,	// (0x00044dde) scroll_sc2_left_pane

0xbb85,	// (0x00044de7) scroll_sc2_right_pane

0xbba4,	// (0x00044e06) scroll_bg_pane_g1_ParamLimits

0xbbb9,	// (0x00044e1b) scroll_bg_pane_g2_ParamLimits

0xbbd1,	// (0x00044e33) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00048911) scroll_bg_pane_g_ParamLimits

0xbba4,	// (0x00044e06) scroll_handle_pane_g1_ParamLimits

0xbbe6,	// (0x00044e48) scroll_handle_pane_g2_ParamLimits

0xbbd1,	// (0x00044e33) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00048918) scroll_handle_pane_g_ParamLimits

0x9a6d,	// (0x00042ccf) popup_choice_list_window_ParamLimits

0x9a6d,	// (0x00042ccf) popup_choice_list_window

0x1fc0,	// (0x0003b222) choice_list_pane

0x2042,	// (0x0003b2a4) cell_toolbar_pane_t1

0x206a,	// (0x0003b2cc) toolbar_button_pane_ParamLimits

0x3146,	// (0x0003c3a8) ai_gene_pane_1_t2_ParamLimits

0x3146,	// (0x0003c3a8) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00048b3b) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00048b3b) ai_gene_pane_1_t

0x46aa,	// (0x0003d90c) scroll_sc2_left_pane_g1

0x46aa,	// (0x0003d90c) scroll_sc2_right_pane_g1

0xb999,	// (0x00044bfb) bg_popup_sub_pane_cp10

0x46b4,	// (0x0003d916) list_choice_list_pane

0xc7e6,	// (0x00045a48) list_single_choice_list_pane_ParamLimits

0xc7e6,	// (0x00045a48) list_single_choice_list_pane

0xcc1e,	// (0x00045e80) list_single_choice_list_pane_g1

0x92c5,	// (0x00042527) list_single_choice_list_pane_t1_ParamLimits

0x92c5,	// (0x00042527) list_single_choice_list_pane_t1

0x46e8,	// (0x0003d94a) choice_list_pane_g1

0xcc26,	// (0x00045e88) choice_list_pane_t1

0xb431,	// (0x00044693) input_focus_pane_cp11

0xbaf1,	// (0x00044d53) title_pane_stacon_g2_ParamLimits

0xbaf1,	// (0x00044d53) title_pane_stacon_g2

0x0002,

0xf695,	// (0x000488f7) title_pane_stacon_g_ParamLimits

0xf695,	// (0x000488f7) title_pane_stacon_g

0xc0f2,	// (0x00045354) cursor_press_pane

0x9b14,	// (0x00042d76) popup_fep_hwr_window_ParamLimits

0x9b14,	// (0x00042d76) popup_fep_hwr_window

0xf4e5,	// (0x00048747) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x00048747) popup_fep_vkb_window

0xcc34,	// (0x00045e96) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x00048d71) fep_vkb_side_pane_g_ParamLimits

0x0cb5,	// (0x00039f17) fep_hwr_candidate_pane_ParamLimits

0x0cb5,	// (0x00039f17) fep_hwr_candidate_pane

0x0cdf,	// (0x00039f41) fep_hwr_side_pane_ParamLimits

0x0cdf,	// (0x00039f41) fep_hwr_side_pane

0x0cff,	// (0x00039f61) fep_hwr_top_pane_ParamLimits

0x0cff,	// (0x00039f61) fep_hwr_top_pane

0x0d17,	// (0x00039f79) fep_hwr_write_pane_ParamLimits

0x0d17,	// (0x00039f79) fep_hwr_write_pane

0xfb0f,	// (0x00048d71) fep_vkb_side_pane_g

0x4706,	// (0x0003d968) fep_hwr_top_pane_g1

0x4718,	// (0x0003d97a) fep_hwr_top_pane_g2

0x0d51,	// (0x00039fb3) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00048d4d) fep_hwr_top_pane_g

0x0d66,	// (0x00039fc8) fep_hwr_top_text_pane

0xbca9,	// (0x00044f0b) fep_hwr_top_text_pane_g1

0x474e,	// (0x0003d9b0) fep_hwr_top_text_pane_t1

0x0e5c,	// (0x0003a0be) fep_hwr_candidate_pane_g1

0x4993,	// (0x0003dbf5) fep_vkb_keypad_pane_g3_ParamLimits

0x4993,	// (0x0003dbf5) fep_vkb_keypad_pane_g3

0x49bb,	// (0x0003dc1d) fep_vkb_keypad_pane_g4_ParamLimits

0x49bb,	// (0x0003dc1d) fep_vkb_keypad_pane_g4

0x4a2a,	// (0x0003dc8c) fep_vkb_bottom_pane_g2_ParamLimits

0x4a2a,	// (0x0003dc8c) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x00048d78) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x00048d78) fep_vkb_bottom_pane_g

0x46aa,	// (0x0003d90c) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x00048d82) cell_vkb_side_pane_g

0x4ab5,	// (0x0003dd17) cell_vkb_side_pane_t1

0x4ac3,	// (0x0003dd25) cell_vkb_side_pane_t1_copy1

0x46aa,	// (0x0003d90c) bg_fep_vkb_candidate_pane_g2

0x4bef,	// (0x0003de51) cell_vkb_candidate_pane_ParamLimits

0x475c,	// (0x0003d9be) aid_size_cell_vkb_ParamLimits

0x475c,	// (0x0003d9be) aid_size_cell_vkb

0x4bef,	// (0x0003de51) cell_vkb_candidate_pane

0x0e83,	// (0x0003a0e5) bg_popup_fep_shadow_pane_g1

0xcc4e,	// (0x00045eb0) fep_vkb_bottom_pane_ParamLimits

0xcc4e,	// (0x00045eb0) fep_vkb_bottom_pane

0x4820,	// (0x0003da82) fep_vkb_candidate_pane_ParamLimits

0x4820,	// (0x0003da82) fep_vkb_candidate_pane

0xcc73,	// (0x00045ed5) fep_vkb_keypad_pane_ParamLimits

0xcc73,	// (0x00045ed5) fep_vkb_keypad_pane

0xcca8,	// (0x00045f0a) fep_vkb_side_pane_ParamLimits

0xcca8,	// (0x00045f0a) fep_vkb_side_pane

0xcce4,	// (0x00045f46) fep_vkb_top_pane_ParamLimits

0xcce4,	// (0x00045f46) fep_vkb_top_pane

0x48ec,	// (0x0003db4e) fep_vkb_top_pane_g1_ParamLimits

0x48ec,	// (0x0003db4e) fep_vkb_top_pane_g1

0x48fb,	// (0x0003db5d) fep_vkb_top_pane_g2_ParamLimits

0x48fb,	// (0x0003db5d) fep_vkb_top_pane_g2

0x490a,	// (0x0003db6c) fep_vkb_top_pane_g3_ParamLimits

0x490a,	// (0x0003db6c) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x00048d68) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x00048d68) fep_vkb_top_pane_g

0x4928,	// (0x0003db8a) fep_vkb_top_text_pane_ParamLimits

0x4928,	// (0x0003db8a) fep_vkb_top_text_pane

0xcd19,	// (0x00045f7b) fep_vkb_side_pane_g1_ParamLimits

0xcd19,	// (0x00045f7b) fep_vkb_side_pane_g1

0x4982,	// (0x0003dbe4) grid_vkb_side_pane_ParamLimits

0x4982,	// (0x0003dbe4) grid_vkb_side_pane

0x0e8b,	// (0x0003a0ed) bg_popup_fep_shadow_pane_g2

0x0e94,	// (0x0003a0f6) bg_popup_fep_shadow_pane_g3

0x0e9c,	// (0x0003a0fe) bg_popup_fep_shadow_pane_g4

0x0ea5,	// (0x0003a107) bg_popup_fep_shadow_pane_g5

0x0eaf,	// (0x0003a111) bg_popup_fep_shadow_pane_g6

0x0eb7,	// (0x0003a119) bg_popup_fep_shadow_pane_g7

0xb8c7,	// (0x00044b29) bg_popup_fep_shadow_pane_g8

0x49d9,	// (0x0003dc3b) grid_vkb_keypad_number_pane_ParamLimits

0x49d9,	// (0x0003dc3b) grid_vkb_keypad_number_pane

0x49e9,	// (0x0003dc4b) grid_vkb_keypad_pane_ParamLimits

0x49e9,	// (0x0003dc4b) grid_vkb_keypad_pane

0x4a0f,	// (0x0003dc71) fep_vkb_bottom_pane_g1_ParamLimits

0x4a0f,	// (0x0003dc71) fep_vkb_bottom_pane_g1

0x4a38,	// (0x0003dc9a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4a38,	// (0x0003dc9a) grid_vkb_keypad_bottom_left_pane

0x4a4d,	// (0x0003dcaf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4a4d,	// (0x0003dcaf) grid_vkb_keypad_bottom_right_pane

0x4a62,	// (0x0003dcc4) fep_vkb_top_text_pane_g1

0xcd60,	// (0x00045fc2) fep_vkb_top_text_pane_t1

0xcd72,	// (0x00045fd4) cell_vkb_side_pane_ParamLimits

0xcd72,	// (0x00045fd4) cell_vkb_side_pane

0x46aa,	// (0x0003d90c) cell_vkb_side_pane_g1

0x4ad1,	// (0x0003dd33) cell_vkb_keypad_pane_ParamLimits

0x4ad1,	// (0x0003dd33) cell_vkb_keypad_pane

0x4b46,	// (0x0003dda8) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x00048d95) bg_popup_fep_shadow_pane_g

0x0ec9,	// (0x0003a12b) cell_hwr_side_pane_g1

0x0ec9,	// (0x0003a12b) cell_hwr_side_pane_g2

0x4b50,	// (0x0003ddb2) cell_vkb_keypad_pane_t1

0xcd88,	// (0x00045fea) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd88,	// (0x00045fea) cell_vkb_keypad_bottom_left_pane

0xcd9d,	// (0x00045fff) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd9d,	// (0x00045fff) cell_vkb_keypad_bottom_right_pane

0x46aa,	// (0x0003d90c) cell_vkb_keypad_bottom_left_pane_g1

0x46aa,	// (0x0003d90c) cell_vkb_keypad_bottom_right_pane_g1

0x4bb4,	// (0x0003de16) cell_vkb_keypad_number_pane_ParamLimits

0x4bb4,	// (0x0003de16) cell_vkb_keypad_number_pane

0x4bd3,	// (0x0003de35) cell_vkb_keypad_number_pane_g1

0x4bdd,	// (0x0003de3f) cell_vkb_keypad_number_pane_g2

0x4be6,	// (0x0003de48) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x00048d87) cell_vkb_keypad_number_pane_g

0x4b50,	// (0x0003ddb2) cell_vkb_keypad_number_pane_t1

0x4c0a,	// (0x0003de6c) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x00048da8) cell_hwr_side_pane_g

0x4c23,	// (0x0003de85) cell_hwr_side_pane_t1

0x0ed3,	// (0x0003a135) cell_hwr_side_pane_t1_copy1

0x0ee1,	// (0x0003a143) cell_hwr_candidate_pane_g1

0x0f10,	// (0x0003a172) cell_hwr_candidate_pane_t1

0x46aa,	// (0x0003d90c) cell_vkb_candidate_pane_g2

0x4c67,	// (0x0003dec9) cell_vkb_candidate_pane_t1

0x0c7c,	// (0x00039ede) bg_popup_fep_shadow_pane_ParamLimits

0x0c7c,	// (0x00039ede) bg_popup_fep_shadow_pane

0x0d31,	// (0x00039f93) bg_fep_hwr_top_pane_g4

0x472a,	// (0x0003d98c) bg_hwr_side_pane_g1_ParamLimits

0x472a,	// (0x0003d98c) bg_hwr_side_pane_g1

0xaadf,	// (0x00043d41) cell_hwr_side_pane_ParamLimits

0xaadf,	// (0x00043d41) cell_hwr_side_pane

0x0ddd,	// (0x0003a03f) fep_hwr_write_pane_g1_ParamLimits

0x0ddd,	// (0x0003a03f) fep_hwr_write_pane_g1

0x0dea,	// (0x0003a04c) fep_hwr_write_pane_g2_ParamLimits

0x0dea,	// (0x0003a04c) fep_hwr_write_pane_g2

0x0df7,	// (0x0003a059) fep_hwr_write_pane_g3_ParamLimits

0x0df7,	// (0x0003a059) fep_hwr_write_pane_g3

0xaaff,	// (0x00043d61) fep_hwr_write_pane_g4_ParamLimits

0xaaff,	// (0x00043d61) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x00048d54) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x00048d54) fep_hwr_write_pane_g

0x0d31,	// (0x00039f93) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d31,	// (0x00039f93) bg_fep_hwr_candidate_pane_g2

0x0e1a,	// (0x0003a07c) cell_hwr_candidate_pane_ParamLimits

0x0e1a,	// (0x0003a07c) cell_hwr_candidate_pane

0x0e5c,	// (0x0003a0be) fep_hwr_candidate_pane_g1_ParamLimits

0x478a,	// (0x0003d9ec) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x478a,	// (0x0003d9ec) bg_popup_fep_shadow_pane_cp2

0x491a,	// (0x0003db7c) fep_vkb_top_pane_g4_ParamLimits

0x491a,	// (0x0003db7c) fep_vkb_top_pane_g4

0x4960,	// (0x0003dbc2) fep_vkb_side_pane_g2_ParamLimits

0x4960,	// (0x0003dbc2) fep_vkb_side_pane_g2

0x8fca,	// (0x0004222c) list_setting_pane_t4_ParamLimits

0x8fca,	// (0x0004222c) list_setting_pane_t4

0xdc9c,	// (0x00046efe) list_setting_number_pane_t5_ParamLimits

0xdc9c,	// (0x00046efe) list_setting_number_pane_t5

0xbce0,	// (0x00044f42) list_double_heading_pane_cp2_ParamLimits

0xbce0,	// (0x00044f42) list_double_heading_pane_cp2

0xcdb8,	// (0x0004601a) list_double_heading_pane_g1_cp2_ParamLimits

0xcdb8,	// (0x0004601a) list_double_heading_pane_g1_cp2

0x4c75,	// (0x0003ded7) list_double_heading_pane_g2_cp2_ParamLimits

0x4c75,	// (0x0003ded7) list_double_heading_pane_g2_cp2

0x4c89,	// (0x0003deeb) list_double_heading_pane_t1_cp2_ParamLimits

0x4c89,	// (0x0003deeb) list_double_heading_pane_t1_cp2

0x4c9f,	// (0x0003df01) list_double_heading_pane_t2_cp2_ParamLimits

0x4c9f,	// (0x0003df01) list_double_heading_pane_t2_cp2

0xb429,	// (0x0004468b) aid_value_unit2

0xf075,	// (0x000482d7) popup_preview_fixed_window

0xb5cb,	// (0x0004482d) bg_popup_preview_window_pane_cp02

0x4cb1,	// (0x0003df13) list_preview_fixed_pane

0x4cf7,	// (0x0003df59) list_empty_pane_fp_ParamLimits

0x4cf7,	// (0x0003df59) list_empty_pane_fp

0x4cf7,	// (0x0003df59) list_single_cale_day_pane_fp_ParamLimits

0x4cf7,	// (0x0003df59) list_single_cale_day_pane_fp

0x4cf7,	// (0x0003df59) list_single_graphic_heading_pane_fp_ParamLimits

0x4cf7,	// (0x0003df59) list_single_graphic_heading_pane_fp

0x4cf7,	// (0x0003df59) list_single_graphic_pane_fp_ParamLimits

0x4cf7,	// (0x0003df59) list_single_graphic_pane_fp

0x4cf7,	// (0x0003df59) list_single_heading_pane_fp_ParamLimits

0x4cf7,	// (0x0003df59) list_single_heading_pane_fp

0x4cf7,	// (0x0003df59) list_single_pane_fp_ParamLimits

0x4cf7,	// (0x0003df59) list_single_pane_fp

0x4d0d,	// (0x0003df6f) list_single_pane_fp_g1_ParamLimits

0x4d0d,	// (0x0003df6f) list_single_pane_fp_g1

0xdbd0,	// (0x00046e32) list_single_pane_fp_g2_ParamLimits

0xdbd0,	// (0x00046e32) list_single_pane_fp_g2

0xe1e4,	// (0x00047446) list_single_pane_fp_g3_ParamLimits

0xe1e4,	// (0x00047446) list_single_pane_fp_g3

0x4d19,	// (0x0003df7b) list_single_pane_fp_g4_ParamLimits

0x4d19,	// (0x0003df7b) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x00048dbb) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x00048dbb) list_single_pane_fp_g

0xe1f8,	// (0x0004745a) list_single_pane_fp_t1_ParamLimits

0xe1f8,	// (0x0004745a) list_single_pane_fp_t1

0xe20f,	// (0x00047471) list_single_graphic_pane_fp_g1_ParamLimits

0xe20f,	// (0x00047471) list_single_graphic_pane_fp_g1

0x4d0d,	// (0x0003df6f) list_single_graphic_pane_fp_g2_ParamLimits

0x4d0d,	// (0x0003df6f) list_single_graphic_pane_fp_g2

0xdbd0,	// (0x00046e32) list_single_graphic_pane_fp_g3_ParamLimits

0xdbd0,	// (0x00046e32) list_single_graphic_pane_fp_g3

0xe1e4,	// (0x00047446) list_single_graphic_pane_fp_g4_ParamLimits

0xe1e4,	// (0x00047446) list_single_graphic_pane_fp_g4

0x4d19,	// (0x0003df7b) list_single_graphic_pane_fp_g5_ParamLimits

0x4d19,	// (0x0003df7b) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x00048dc4) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x00048dc4) list_single_graphic_pane_fp_g

0xe21b,	// (0x0004747d) list_single_graphic_pane_fp_t1_ParamLimits

0xe21b,	// (0x0004747d) list_single_graphic_pane_fp_t1

0xe20f,	// (0x00047471) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe20f,	// (0x00047471) list_single_graphic_heading_pane_fp_g1

0x4d0d,	// (0x0003df6f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4d0d,	// (0x0003df6f) list_single_graphic_heading_pane_fp_g2

0xdbd0,	// (0x00046e32) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xdbd0,	// (0x00046e32) list_single_graphic_heading_pane_fp_g3

0xe1e4,	// (0x00047446) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe1e4,	// (0x00047446) list_single_graphic_heading_pane_fp_g4

0x4d19,	// (0x0003df7b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4d19,	// (0x0003df7b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x00048dc4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x00048dc4) list_single_graphic_heading_pane_fp_g

0xe231,	// (0x00047493) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe231,	// (0x00047493) list_single_graphic_heading_pane_fp_t1

0xe247,	// (0x000474a9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe247,	// (0x000474a9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x00048dcf) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x00048dcf) list_single_graphic_heading_pane_fp_t

0xe259,	// (0x000474bb) list_single_cale_day_pane_fp_g1_ParamLimits

0xe259,	// (0x000474bb) list_single_cale_day_pane_fp_g1

0x4d25,	// (0x0003df87) list_single_cale_day_pane_fp_g2_ParamLimits

0x4d25,	// (0x0003df87) list_single_cale_day_pane_fp_g2

0xe291,	// (0x000474f3) list_single_cale_day_pane_fp_g3_ParamLimits

0xe291,	// (0x000474f3) list_single_cale_day_pane_fp_g3

0xe2b9,	// (0x0004751b) list_single_cale_day_pane_fp_g4_ParamLimits

0xe2b9,	// (0x0004751b) list_single_cale_day_pane_fp_g4

0xe2dd,	// (0x0004753f) list_single_cale_day_pane_fp_g5_ParamLimits

0xe2dd,	// (0x0004753f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x00048dd4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x00048dd4) list_single_cale_day_pane_fp_g

0xe301,	// (0x00047563) list_single_cale_day_pane_fp_t1_ParamLimits

0xe301,	// (0x00047563) list_single_cale_day_pane_fp_t1

0xe327,	// (0x00047589) list_single_cale_day_pane_fp_t2_ParamLimits

0xe327,	// (0x00047589) list_single_cale_day_pane_fp_t2

0xe340,	// (0x000475a2) list_single_cale_day_pane_fp_t3_ParamLimits

0xe340,	// (0x000475a2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x00048ddf) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x00048ddf) list_single_cale_day_pane_fp_t

0x4d0d,	// (0x0003df6f) list_empty_pane_fp_g1_ParamLimits

0x4d0d,	// (0x0003df6f) list_empty_pane_fp_g1

0xe359,	// (0x000475bb) list_empty_pane_fp_t1

0xe367,	// (0x000475c9) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x00048de6) list_empty_pane_fp_t

0x4d0d,	// (0x0003df6f) list_single_heading_pane_fp_g1_ParamLimits

0x4d0d,	// (0x0003df6f) list_single_heading_pane_fp_g1

0xdbd0,	// (0x00046e32) list_single_heading_pane_fp_g2_ParamLimits

0xdbd0,	// (0x00046e32) list_single_heading_pane_fp_g2

0xe1e4,	// (0x00047446) list_single_heading_pane_fp_g3_ParamLimits

0xe1e4,	// (0x00047446) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x00048deb) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00048deb) list_single_heading_pane_fp_g

0xe375,	// (0x000475d7) list_single_heading_pane_fp_t1_ParamLimits

0xe375,	// (0x000475d7) list_single_heading_pane_fp_t1

0xe387,	// (0x000475e9) list_single_heading_pane_fp_t2_ParamLimits

0xe387,	// (0x000475e9) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00048df2) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00048df2) list_single_heading_pane_fp_t

0x9311,	// (0x00042573) aid_size_cell_fast

0xb5ae,	// (0x00044810) soft_indicator_pane_cp1_t1

0x931a,	// (0x0004257c) cell_app_pane_cp2_ParamLimits

0x931a,	// (0x0004257c) cell_app_pane_cp2

0x0c9e,	// (0x00039f00) fep_hwr_candidate_drop_down_list_pane

0x0e76,	// (0x0003a0d8) fep_hwr_candidate_pane_g3_ParamLimits

0x0e76,	// (0x0003a0d8) fep_hwr_candidate_pane_g3

0xe1d7,	// (0x00047439) fep_hwr_candidate_pane_g4_ParamLimits

0xe1d7,	// (0x00047439) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x00048d61) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x00048d61) fep_hwr_candidate_pane_g

0x480f,	// (0x0003da71) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x480f,	// (0x0003da71) fep_vkb_candidate_drop_down_list_pane

0x4c12,	// (0x0003de74) fep_vkb_candidate_pane_g3

0x4c1a,	// (0x0003de7c) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00048d8e) fep_vkb_candidate_pane_g

0x0ee1,	// (0x0003a143) cell_hwr_candidate_pane_g1_ParamLimits

0x0eef,	// (0x0003a151) cell_hwr_candidate_pane_g3_ParamLimits

0x0eef,	// (0x0003a151) cell_hwr_candidate_pane_g3

0x6a25,	// (0x0003fc87) cell_hwr_candidate_pane_g4_ParamLimits

0x6a25,	// (0x0003fc87) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x00048dad) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x00048dad) cell_hwr_candidate_pane_g

0x4c31,	// (0x0003de93) cell_vkb_candidate_pane_g3_ParamLimits

0x4c31,	// (0x0003de93) cell_vkb_candidate_pane_g3

0x4c4c,	// (0x0003deae) cell_vkb_candidate_pane_g4_ParamLimits

0x4c4c,	// (0x0003deae) cell_vkb_candidate_pane_g4

0xcdc4,	// (0x00046026) cell_app_pane_cp2_g1_ParamLimits

0xcdc4,	// (0x00046026) cell_app_pane_cp2_g1

0x4d4f,	// (0x0003dfb1) cell_app_pane_cp2_g2_ParamLimits

0x4d4f,	// (0x0003dfb1) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x00048df7) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x00048df7) cell_app_pane_cp2_g

0x4d5b,	// (0x0003dfbd) cell_app_pane_cp2_t1_ParamLimits

0x4d5b,	// (0x0003dfbd) cell_app_pane_cp2_t1

0xb857,	// (0x00044ab9) grid_highlight_pane_cp1_ParamLimits

0xb857,	// (0x00044ab9) grid_highlight_pane_cp1

0x0f2e,	// (0x0003a190) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f2e,	// (0x0003a190) cell_hwr_candidate_pane_cp1

0x0ee1,	// (0x0003a143) fep_hwr_candidate_drop_down_list_pane_g1

0x0f4d,	// (0x0003a1af) fep_hwr_candidate_drop_down_list_pane_g2

0x0f5a,	// (0x0003a1bc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x00048dfc) fep_hwr_candidate_drop_down_list_pane_g

0x0f67,	// (0x0003a1c9) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f70,	// (0x0003a1d2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f70,	// (0x0003a1d2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f7d,	// (0x0003a1df) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f7d,	// (0x0003a1df) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f8a,	// (0x0003a1ec) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f8a,	// (0x0003a1ec) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f97,	// (0x0003a1f9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f97,	// (0x0003a1f9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0fb2,	// (0x0003a214) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0fb2,	// (0x0003a214) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fcd,	// (0x0003a22f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fcd,	// (0x0003a22f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0fe8,	// (0x0003a24a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0fe8,	// (0x0003a24a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1003,	// (0x0003a265) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1003,	// (0x0003a265) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x00048e03) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x00048e03) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4d6d,	// (0x0003dfcf) cell_vkb_candidate_pane_cp1_ParamLimits

0x4d6d,	// (0x0003dfcf) cell_vkb_candidate_pane_cp1

0x491a,	// (0x0003db7c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x491a,	// (0x0003db7c) fep_vkb_candidate_drop_down_list_pane_g1

0x4d8d,	// (0x0003dfef) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4d8d,	// (0x0003dfef) fep_vkb_candidate_drop_down_list_pane_g2

0x4d9a,	// (0x0003dffc) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4d9a,	// (0x0003dffc) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00048e14) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x00048e14) fep_vkb_candidate_drop_down_list_pane_g

0x4da7,	// (0x0003e009) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4da7,	// (0x0003e009) fep_vkb_candidate_drop_down_list_scroll_pane

0x4db4,	// (0x0003e016) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4db4,	// (0x0003e016) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4dc1,	// (0x0003e023) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4dc1,	// (0x0003e023) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4dcd,	// (0x0003e02f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4dcd,	// (0x0003e02f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4dd9,	// (0x0003e03b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4dd9,	// (0x0003e03b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4dfa,	// (0x0003e05c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4dfa,	// (0x0003e05c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e1b,	// (0x0003e07d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e1b,	// (0x0003e07d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4e3c,	// (0x0003e09e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4e3c,	// (0x0003e09e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4e5d,	// (0x0003e0bf) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4e5d,	// (0x0003e0bf) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x00048e1b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x00048e1b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x87c1,	// (0x00041a23) title_pane_g1_ParamLimits

0x87d4,	// (0x00041a36) title_pane_g2_ParamLimits

0xf529,	// (0x0004878b) title_pane_g_ParamLimits

0xbc99,	// (0x00044efb) aid_call2_pane

0xbca1,	// (0x00044f03) aid_call_pane

0xbca9,	// (0x00044f0b) popup_clock_analogue_window_g1

0xbca9,	// (0x00044f0b) popup_clock_analogue_window_g2

0xf228,	// (0x0004848a) popup_clock_analogue_window_g3

0xf231,	// (0x00048493) popup_clock_analogue_window_g4

0xb43b,	// (0x0004469d) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00048926) popup_clock_analogue_window_g

0xf239,	// (0x0004849b) popup_clock_analogue_window_t1

0xf247,	// (0x000484a9) clock_digital_number_pane_ParamLimits

0xf247,	// (0x000484a9) clock_digital_number_pane

0xf253,	// (0x000484b5) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x000484b5) clock_digital_number_pane_cp02

0xf25f,	// (0x000484c1) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x000484c1) clock_digital_number_pane_cp03

0xf26b,	// (0x000484cd) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x000484cd) clock_digital_number_pane_cp04

0xf277,	// (0x000484d9) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x000484d9) clock_digital_separator_pane

0xf283,	// (0x000484e5) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x000484e5) popup_clock_digital_window_t1

0xb43b,	// (0x0004469d) clock_digital_number_pane_g1

0xb43b,	// (0x0004469d) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00048931) clock_digital_number_pane_g

0xb43b,	// (0x0004469d) clock_digital_separator_pane_g1

0xb43b,	// (0x0004469d) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00048931) clock_digital_separator_pane_g

0xa1c2,	// (0x00043424) aid_fill_nsta_ParamLimits

0xa2f8,	// (0x0004355a) indicator_nsta_pane_ParamLimits

0x1e50,	// (0x0003b0b2) popup_clock_analogue_window

0x1e50,	// (0x0003b0b2) popup_clock_digital_window

0xc9f0,	// (0x00045c52) grid_indicator_nsta_pane_ParamLimits

0x40a0,	// (0x0003d302) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x00048ce1) clock_nsta_pane_t

0xf209,	// (0x0004846b) aid_size_max_handle

0x93f8,	// (0x0004265a) aid_size_min_handle

0xc0f2,	// (0x00045354) editor_scroll_pane

0x4e78,	// (0x0003e0da) ex_editor_pane

0xb989,	// (0x00044beb) scroll_pane_cp13

0xb7ff,	// (0x00044a61) scroll_pane_cp14

0xbcd8,	// (0x00044f3a) scroll_pane_cp36

0x94c2,	// (0x00042724) list_single_graphic_hl_pane_cp2_ParamLimits

0x94c2,	// (0x00042724) list_single_graphic_hl_pane_cp2

0xaa58,	// (0x00043cba) list_single_graphic_hl_pane_ParamLimits

0xaa58,	// (0x00043cba) list_single_graphic_hl_pane

0xab14,	// (0x00043d76) aid_size_min_hl_cp1

0x4e89,	// (0x0003e0eb) list_highlight_pane_cp34_ParamLimits

0x4e89,	// (0x0003e0eb) list_highlight_pane_cp34

0x4e9a,	// (0x0003e0fc) list_single_graphic_hl_pane_g1_ParamLimits

0x4e9a,	// (0x0003e0fc) list_single_graphic_hl_pane_g1

0xab1d,	// (0x00043d7f) list_single_graphic_hl_pane_g2_ParamLimits

0xab1d,	// (0x00043d7f) list_single_graphic_hl_pane_g2

0xab1d,	// (0x00043d7f) list_single_graphic_hl_pane_g3_ParamLimits

0xab1d,	// (0x00043d7f) list_single_graphic_hl_pane_g3

0xab29,	// (0x00043d8b) list_single_graphic_hl_pane_g4_ParamLimits

0xab29,	// (0x00043d8b) list_single_graphic_hl_pane_g4

0xab35,	// (0x00043d97) list_single_graphic_hl_pane_g5_ParamLimits

0xab35,	// (0x00043d97) list_single_graphic_hl_pane_g5

0x0004,

0xfbca,	// (0x00048e2c) list_single_graphic_hl_pane_g_ParamLimits

0xfbca,	// (0x00048e2c) list_single_graphic_hl_pane_g

0xab49,	// (0x00043dab) list_single_graphic_hl_pane_t1_ParamLimits

0xab49,	// (0x00043dab) list_single_graphic_hl_pane_t1

0x4ea7,	// (0x0003e109) aid_size_min_hl_cp2

0x4eb0,	// (0x0003e112) list_highlight_pane_cp34_cp2_ParamLimits

0x4eb0,	// (0x0003e112) list_highlight_pane_cp34_cp2

0x4e9a,	// (0x0003e0fc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4e9a,	// (0x0003e0fc) list_single_graphic_hl_pane_g1_cp2

0x4ebd,	// (0x0003e11f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4ebd,	// (0x0003e11f) list_single_graphic_hl_pane_g2_cp2

0xcde2,	// (0x00046044) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcde2,	// (0x00046044) list_single_graphic_hl_pane_g3_cp2

0xc051,	// (0x000452b3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc051,	// (0x000452b3) list_single_graphic_hl_pane_g4_cp2

0x4ed7,	// (0x0003e139) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4ed7,	// (0x0003e139) list_single_graphic_hl_pane_g5_cp2

0x98e5,	// (0x00042b47) control_pane_g4_ParamLimits

0x98e5,	// (0x00042b47) control_pane_g4

0xb999,	// (0x00044bfb) bg_popup_sub_pane_cp10_ParamLimits

0x46b4,	// (0x0003d916) list_choice_list_pane_ParamLimits

0x46c3,	// (0x0003d925) scroll_pane_cp23

0xb5cb,	// (0x0004482d) bg_popup_preview_window_pane_cp02_ParamLimits

0x4cb1,	// (0x0003df13) list_preview_fixed_pane_ParamLimits

0x4cc7,	// (0x0003df29) list_preview_fixed_pane_cp_ParamLimits

0x4cc7,	// (0x0003df29) list_preview_fixed_pane_cp

0x4cd3,	// (0x0003df35) popup_preview_fixed_window_g1_ParamLimits

0x4cd3,	// (0x0003df35) popup_preview_fixed_window_g1

0x4cdf,	// (0x0003df41) popup_preview_fixed_window_g2_ParamLimits

0x4cdf,	// (0x0003df41) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x00048db4) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x00048db4) popup_preview_fixed_window_g

0xf17d,	// (0x000483df) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x000483f4) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x0004840c) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x00048420) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x0004840c) navi_text_pane_stacon_ParamLimits

0xef9a,	// (0x000481fc) main_text_info_pane

0x4f01,	// (0x0003e163) listscroll_text_info_pane

0x4f09,	// (0x0003e16b) list_text_info_pane_ParamLimits

0x4f09,	// (0x0003e16b) list_text_info_pane

0x4f18,	// (0x0003e17a) scroll_pane_cp24_ParamLimits

0x4f18,	// (0x0003e17a) scroll_pane_cp24

0xcdf0,	// (0x00046052) list_text_info_pane_t1_ParamLimits

0xcdf0,	// (0x00046052) list_text_info_pane_t1

0x9a89,	// (0x00042ceb) popup_fast_swap2_window_ParamLimits

0x9a89,	// (0x00042ceb) popup_fast_swap2_window

0x4f6a,	// (0x0003e1cc) aid_size_cell_fast2

0xb431,	// (0x00044693) bg_popup_window_pane_cp17

0x24f5,	// (0x0003b757) heading_pane_cp2

0x24fd,	// (0x0003b75f) listscroll_fast2_pane

0x4f74,	// (0x0003e1d6) grid_fast2_pane

0x4f7e,	// (0x0003e1e0) listscroll_fast2_pane_g1

0x4f86,	// (0x0003e1e8) listscroll_fast2_pane_g2

0x0001,

0xfbd5,	// (0x00048e37) listscroll_fast2_pane_g

0xb989,	// (0x00044beb) scroll_pane_cp26

0x4f90,	// (0x0003e1f2) cell_fast2_pane_ParamLimits

0x4f90,	// (0x0003e1f2) cell_fast2_pane

0x4fa5,	// (0x0003e207) cell_fast2_pane_g1

0x4fae,	// (0x0003e210) cell_fast2_pane_g2

0x4fb7,	// (0x0003e219) cell_fast2_pane_g3

0x0002,

0xfbda,	// (0x00048e3c) cell_fast2_pane_g

0xb736,	// (0x00044998) grid_highlight_pane_cp9

0xf4cd,	// (0x0004872f) main_eswt_pane_ParamLimits

0xf4cd,	// (0x0004872f) main_eswt_pane

0x4f2d,	// (0x0003e18f) list_single_text_info_pane

0x4fbf,	// (0x0003e221) eswt_ctrl_button_pane

0x4fbf,	// (0x0003e221) eswt_ctrl_canvas_pane

0xce0c,	// (0x0004606e) eswt_ctrl_combo_pane

0x4fbf,	// (0x0003e221) eswt_ctrl_default_pane

0x4fbf,	// (0x0003e221) eswt_ctrl_label_pane

0x4fcf,	// (0x0003e231) eswt_ctrl_wait_pane

0xce14,	// (0x00046076) eswt_shell_pane

0xb431,	// (0x00044693) listscroll_eswt_app_pane

0x4ff7,	// (0x0003e259) popup_eswt_tasktip_window_ParamLimits

0x4ff7,	// (0x0003e259) popup_eswt_tasktip_window

0x2102,	// (0x0003b364) bg_popup_window_pane_cp18

0x5008,	// (0x0003e26a) eswt_control_pane_g1_ParamLimits

0x5008,	// (0x0003e26a) eswt_control_pane_g1

0x5015,	// (0x0003e277) eswt_control_pane_g2_ParamLimits

0x5015,	// (0x0003e277) eswt_control_pane_g2

0x5022,	// (0x0003e284) eswt_control_pane_g3_ParamLimits

0x5022,	// (0x0003e284) eswt_control_pane_g3

0x502f,	// (0x0003e291) eswt_control_pane_g4_ParamLimits

0x502f,	// (0x0003e291) eswt_control_pane_g4

0x0003,

0xfbe1,	// (0x00048e43) eswt_control_pane_g_ParamLimits

0xfbe1,	// (0x00048e43) eswt_control_pane_g

0xb857,	// (0x00044ab9) bg_button_pane_ParamLimits

0xb857,	// (0x00044ab9) bg_button_pane

0xb74b,	// (0x000449ad) common_borders_pane_copy2_ParamLimits

0xb74b,	// (0x000449ad) common_borders_pane_copy2

0x503c,	// (0x0003e29e) control_button_pane_g1_ParamLimits

0x503c,	// (0x0003e29e) control_button_pane_g1

0x5048,	// (0x0003e2aa) control_button_pane_g2_ParamLimits

0x5048,	// (0x0003e2aa) control_button_pane_g2

0x5054,	// (0x0003e2b6) control_button_pane_g3_ParamLimits

0x5054,	// (0x0003e2b6) control_button_pane_g3

0x0002,

0xfbea,	// (0x00048e4c) control_button_pane_g_ParamLimits

0xfbea,	// (0x00048e4c) control_button_pane_g

0x5068,	// (0x0003e2ca) control_button_pane_t1

0x5076,	// (0x0003e2d8) control_button_pane_t2

0x0001,

0xfbf1,	// (0x00048e53) control_button_pane_t

0x2076,	// (0x0003b2d8) bg_button_pane_g1

0x2086,	// (0x0003b2e8) bg_button_pane_g2

0x207e,	// (0x0003b2e0) bg_button_pane_g3

0x2096,	// (0x0003b2f8) bg_button_pane_g4

0x208e,	// (0x0003b2f0) bg_button_pane_g5

0x209e,	// (0x0003b300) bg_button_pane_g6

0x20a6,	// (0x0003b308) bg_button_pane_g7

0x20b6,	// (0x0003b318) bg_button_pane_g8

0x20ae,	// (0x0003b310) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00048a8f) bg_button_pane_g

0x466f,	// (0x0003d8d1) common_borders_pane_ParamLimits

0x466f,	// (0x0003d8d1) common_borders_pane

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy1_ParamLimits

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy1

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy1_ParamLimits

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy1

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy1_ParamLimits

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy1

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy1_ParamLimits

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy1

0x46aa,	// (0x0003d90c) bg_eswt_ctrl_canvas_pane_g1

0x466f,	// (0x0003d8d1) common_borders_pane_cp2_ParamLimits

0x466f,	// (0x0003d8d1) common_borders_pane_cp2

0x466f,	// (0x0003d8d1) common_borders_pane_cp3_ParamLimits

0x466f,	// (0x0003d8d1) common_borders_pane_cp3

0x5084,	// (0x0003e2e6) separator_horizontal_pane

0x508c,	// (0x0003e2ee) separator_vertical_pane

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy2_ParamLimits

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy2

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy2_ParamLimits

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy2

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy2_ParamLimits

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy2

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy2_ParamLimits

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy2

0xb431,	// (0x00044693) common_borders_pane_cp4

0x5095,	// (0x0003e2f7) separator_horizontal_pane_g1

0x509e,	// (0x0003e300) separator_horizontal_pane_g2

0x50a7,	// (0x0003e309) separator_horizontal_pane_g3

0x0002,

0xfbf6,	// (0x00048e58) separator_horizontal_pane_g

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy3_ParamLimits

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy3

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy3_ParamLimits

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy3

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy3_ParamLimits

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy3

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy3_ParamLimits

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy3

0xb431,	// (0x00044693) common_borders_pane_cp5

0x50b0,	// (0x0003e312) separator_vertical_pane_g1

0x50b9,	// (0x0003e31b) separator_vertical_pane_g2

0x50c2,	// (0x0003e324) separator_vertical_pane_g3

0x0002,

0xfbfd,	// (0x00048e5f) separator_vertical_pane_g

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy4_ParamLimits

0x5008,	// (0x0003e26a) eswt_control_pane_g1_copy4

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy4_ParamLimits

0x5015,	// (0x0003e277) eswt_control_pane_g2_copy4

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy4_ParamLimits

0x5022,	// (0x0003e284) eswt_control_pane_g3_copy4

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy4_ParamLimits

0x502f,	// (0x0003e291) eswt_control_pane_g4_copy4

0xce34,	// (0x00046096) eswt_ctrl_combo_button_pane

0xce3c,	// (0x0004609e) eswt_ctrl_input_pane

0xce44,	// (0x000460a6) popup_choice_list_window_cp70

0xce4c,	// (0x000460ae) eswt_ctrl_input_pane_t1

0xb431,	// (0x00044693) input_focus_pane_cp70

0x466f,	// (0x0003d8d1) bg_button_pane_cp70_ParamLimits

0x466f,	// (0x0003d8d1) bg_button_pane_cp70

0xce5a,	// (0x000460bc) eswt_ctrl_combo_button_pane_g1

0x50f9,	// (0x0003e35b) wait_bar_pane_cp70

0x2102,	// (0x0003b364) bg_popup_window_pane_cp70_ParamLimits

0x2102,	// (0x0003b364) bg_popup_window_pane_cp70

0x5101,	// (0x0003e363) popup_eswt_tasktip_window_t1

0x5117,	// (0x0003e379) wait_bar_pane_cp71_ParamLimits

0x5117,	// (0x0003e379) wait_bar_pane_cp71

0x5123,	// (0x0003e385) grid_eswt_app_pane

0xbb7c,	// (0x00044dde) scroll_pane_cp70

0xce62,	// (0x000460c4) cell_eswt_app_pane_ParamLimits

0xce62,	// (0x000460c4) cell_eswt_app_pane

0xce8c,	// (0x000460ee) cell_eswt_app_pane_g1_ParamLimits

0xce8c,	// (0x000460ee) cell_eswt_app_pane_g1

0xcebb,	// (0x0004611d) cell_eswt_app_pane_g2_ParamLimits

0xcebb,	// (0x0004611d) cell_eswt_app_pane_g2

0x0001,

0xfc04,	// (0x00048e66) cell_eswt_app_pane_g_ParamLimits

0xfc04,	// (0x00048e66) cell_eswt_app_pane_g

0xcedf,	// (0x00046141) cell_eswt_app_pane_t1_ParamLimits

0xcedf,	// (0x00046141) cell_eswt_app_pane_t1

0x51e1,	// (0x0003e443) grid_highlight_pane_cp70_ParamLimits

0x51e1,	// (0x0003e443) grid_highlight_pane_cp70

0xc00d,	// (0x0004526f) set_content_pane_g1

0x9877,	// (0x00042ad9) status_small_volume_pane

0xab5f,	// (0x00043dc1) status_small_volume_pane_g1

0xab67,	// (0x00043dc9) volume_small2_pane

0xab70,	// (0x00043dd2) volume_small2_pane_g1

0xab79,	// (0x00043ddb) volume_small2_pane_g2

0xab82,	// (0x00043de4) volume_small2_pane_g3

0xab8b,	// (0x00043ded) volume_small2_pane_g4

0xab94,	// (0x00043df6) volume_small2_pane_g5

0xab9d,	// (0x00043dff) volume_small2_pane_g6

0xaba6,	// (0x00043e08) volume_small2_pane_g7

0xabaf,	// (0x00043e11) volume_small2_pane_g8

0xabb8,	// (0x00043e1a) volume_small2_pane_g9

0xabc1,	// (0x00043e23) volume_small2_pane_g10

0x0009,

0xfc09,	// (0x00048e6b) volume_small2_pane_g

0x4a62,	// (0x0003dcc4) fep_vkb_top_text_pane_g1_ParamLimits

0xcd60,	// (0x00045fc2) fep_vkb_top_text_pane_t1_ParamLimits

0x4ceb,	// (0x0003df4d) popup_preview_fixed_window_g3_ParamLimits

0x4ceb,	// (0x0003df4d) popup_preview_fixed_window_g3

0xa100,	// (0x00043362) popup_toolbar_trans_pane

0xc67f,	// (0x000458e1) aid_height_set_list_ParamLimits

0x3451,	// (0x0003c6b3) aid_size_parent_ParamLimits

0xb999,	// (0x00044bfb) list_highlight_pane_cp2_ParamLimits

0xc00d,	// (0x0004526f) set_content_pane_g1_ParamLimits

0xc7fa,	// (0x00045a5c) list_single_image_pane_ParamLimits

0xc7fa,	// (0x00045a5c) list_single_image_pane

0xcf11,	// (0x00046173) aid_size_cell_image_ParamLimits

0xcf11,	// (0x00046173) aid_size_cell_image

0xcf1e,	// (0x00046180) grid_single_image_pane_ParamLimits

0xcf1e,	// (0x00046180) grid_single_image_pane

0xcf2a,	// (0x0004618c) list_single_image_pane_g1_ParamLimits

0xcf2a,	// (0x0004618c) list_single_image_pane_g1

0x5206,	// (0x0003e468) list_single_image_pane_g2_ParamLimits

0x5206,	// (0x0003e468) list_single_image_pane_g2

0x0001,

0xfc1e,	// (0x00048e80) list_single_image_pane_g_ParamLimits

0xfc1e,	// (0x00048e80) list_single_image_pane_g

0x521a,	// (0x0003e47c) list_single_image_pane_t1_ParamLimits

0x521a,	// (0x0003e47c) list_single_image_pane_t1

0xcf36,	// (0x00046198) cell_image_list_pane_ParamLimits

0xcf36,	// (0x00046198) cell_image_list_pane

0xcf4a,	// (0x000461ac) cell_image_list_pane_g1

0xcf53,	// (0x000461b5) cell_image_list_pane_g2

0x0001,

0xfc23,	// (0x00048e85) cell_image_list_pane_g

0xcf5c,	// (0x000461be) aid_size_cell_tb_trans_pane

0xb857,	// (0x00044ab9) bg_tb_trans_pane

0xcf6e,	// (0x000461d0) grid_tb_trans_pane

0x2076,	// (0x0003b2d8) bg_tb_trans_pane_g1

0x2086,	// (0x0003b2e8) bg_tb_trans_pane_g2

0x207e,	// (0x0003b2e0) bg_tb_trans_pane_g3

0x2096,	// (0x0003b2f8) bg_tb_trans_pane_g4

0x208e,	// (0x0003b2f0) bg_tb_trans_pane_g5

0x20b6,	// (0x0003b318) bg_tb_trans_pane_g6

0x20ae,	// (0x0003b310) bg_tb_trans_pane_g7

0x209e,	// (0x0003b300) bg_tb_trans_pane_g8

0x20a6,	// (0x0003b308) bg_tb_trans_pane_g9

0x0008,

0xfc28,	// (0x00048e8a) bg_tb_trans_pane_g

0xcf82,	// (0x000461e4) cell_toolbar_trans_pane_ParamLimits

0xcf82,	// (0x000461e4) cell_toolbar_trans_pane

0x46aa,	// (0x0003d90c) cell_toolbar_trans_pane_g1

0xcab9,	// (0x00045d1b) list_form2_midp_pane_t1

0xcac7,	// (0x00045d29) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x00048d27) list_form2_midp_pane_t

0x4291,	// (0x0003d4f3) scroll_pane_cp51_ParamLimits

0x444d,	// (0x0003d6af) form2_midp_wait_pane_g1

0x4456,	// (0x0003d6b8) form2_midp_wait_pane_g2

0x445f,	// (0x0003d6c1) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00048d3c) form2_midp_wait_pane_g

0xb4a1,	// (0x00044703) list_highlight_pane_cp21_ParamLimits

0x44a7,	// (0x0003d709) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x44b6,	// (0x0003d718) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3605,	// (0x0003c867) list_single_2graphic_im_pane_ParamLimits

0x3605,	// (0x0003c867) list_single_2graphic_im_pane

0xcfa8,	// (0x0004620a) list_single_2graphic_im_pane_g1_ParamLimits

0xcfa8,	// (0x0004620a) list_single_2graphic_im_pane_g1

0xcfb9,	// (0x0004621b) list_single_2graphic_im_pane_g2_ParamLimits

0xcfb9,	// (0x0004621b) list_single_2graphic_im_pane_g2

0xcfc5,	// (0x00046227) list_single_2graphic_im_pane_g3_ParamLimits

0xcfc5,	// (0x00046227) list_single_2graphic_im_pane_g3

0x0003,

0xfc3b,	// (0x00048e9d) list_single_2graphic_im_pane_g_ParamLimits

0xfc3b,	// (0x00048e9d) list_single_2graphic_im_pane_g

0xcfd9,	// (0x0004623b) list_single_2graphic_im_pane_t1_ParamLimits

0xcfd9,	// (0x0004623b) list_single_2graphic_im_pane_t1

0x4cf7,	// (0x0003df59) list_single_graphic_2heading_pane_fp_ParamLimits

0x4cf7,	// (0x0003df59) list_single_graphic_2heading_pane_fp

0xe20f,	// (0x00047471) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe20f,	// (0x00047471) list_single_graphic_2heading_pane_fp_g1

0x4d0d,	// (0x0003df6f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4d0d,	// (0x0003df6f) list_single_graphic_2heading_pane_fp_g2

0xdbd0,	// (0x00046e32) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xdbd0,	// (0x00046e32) list_single_graphic_2heading_pane_fp_g3

0xe1e4,	// (0x00047446) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe1e4,	// (0x00047446) list_single_graphic_2heading_pane_fp_g4

0x4d19,	// (0x0003df7b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4d19,	// (0x0003df7b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x00048dc4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x00048dc4) list_single_graphic_2heading_pane_fp_g

0xe39d,	// (0x000475ff) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe39d,	// (0x000475ff) list_single_graphic_2heading_pane_fp_t1

0xe247,	// (0x000474a9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe247,	// (0x000474a9) list_single_graphic_2heading_pane_fp_t2

0xe3b3,	// (0x00047615) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe3b3,	// (0x00047615) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc44,	// (0x00048ea6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc44,	// (0x00048ea6) list_single_graphic_2heading_pane_fp_t

0x4736,	// (0x0003d998) fep_hwr_write_pane_g5_ParamLimits

0x4736,	// (0x0003d998) fep_hwr_write_pane_g5

0x4742,	// (0x0003d9a4) fep_hwr_write_pane_g6_ParamLimits

0x4742,	// (0x0003d9a4) fep_hwr_write_pane_g6

0xce14,	// (0x00046076) eswt_shell_pane_ParamLimits

0x2102,	// (0x0003b364) bg_popup_window_pane_cp18_ParamLimits

0x3399,	// (0x0003c5fb) heading_pane_cp70

0x5101,	// (0x0003e363) popup_eswt_tasktip_window_t1_ParamLimits

0xa21d,	// (0x0004347f) aid_touch_tab_arrow_left

0xa233,	// (0x00043495) aid_touch_tab_arrow_right

0x87ec,	// (0x00041a4e) title_pane_g3_ParamLimits

0x87ec,	// (0x00041a4e) title_pane_g3

0xb81f,	// (0x00044a81) set_value_pane_g1

0xa100,	// (0x00043362) popup_toolbar_trans_pane_ParamLimits

0xcf5c,	// (0x000461be) aid_size_cell_tb_trans_pane_ParamLimits

0xb857,	// (0x00044ab9) bg_tb_trans_pane_ParamLimits

0xcf6e,	// (0x000461d0) grid_tb_trans_pane_ParamLimits

0xb5cb,	// (0x0004482d) cont_note_pane_ParamLimits

0xb5cb,	// (0x0004482d) cont_note_pane

0xb74b,	// (0x000449ad) cont_snote2_single_text_pane_ParamLimits

0xb74b,	// (0x000449ad) cont_snote2_single_text_pane

0xb74b,	// (0x000449ad) cont_snote2_single_graphic_pane_ParamLimits

0xb74b,	// (0x000449ad) cont_snote2_single_graphic_pane

0x271c,	// (0x0003b97e) cont_note_wait_pane_ParamLimits

0x271c,	// (0x0003b97e) cont_note_wait_pane

0x271c,	// (0x0003b97e) cont_note_image_pane_ParamLimits

0x271c,	// (0x0003b97e) cont_note_image_pane

0x5310,	// (0x0003e572) popup_note2_window_g1_ParamLimits

0x5310,	// (0x0003e572) popup_note2_window_g1

0xd017,	// (0x00046279) popup_note2_window_t1_ParamLimits

0xd017,	// (0x00046279) popup_note2_window_t1

0xd05c,	// (0x000462be) popup_note2_window_t2_ParamLimits

0xd05c,	// (0x000462be) popup_note2_window_t2

0xd0a1,	// (0x00046303) popup_note2_window_t3_ParamLimits

0xd0a1,	// (0x00046303) popup_note2_window_t3

0x5410,	// (0x0003e672) popup_note2_window_t4_ParamLimits

0x5410,	// (0x0003e672) popup_note2_window_t4

0xb64f,	// (0x000448b1) popup_note2_window_t5_ParamLimits

0xb64f,	// (0x000448b1) popup_note2_window_t5

0x0004,

0xfc50,	// (0x00048eb2) popup_note2_window_t_ParamLimits

0xfc50,	// (0x00048eb2) popup_note2_window_t

0x543f,	// (0x0003e6a1) popup_note2_image_window_g1_ParamLimits

0x543f,	// (0x0003e6a1) popup_note2_image_window_g1

0xd0e6,	// (0x00046348) popup_note2_image_window_g2_ParamLimits

0xd0e6,	// (0x00046348) popup_note2_image_window_g2

0x0001,

0xfc5b,	// (0x00048ebd) popup_note2_image_window_g_ParamLimits

0xfc5b,	// (0x00048ebd) popup_note2_image_window_g

0x545d,	// (0x0003e6bf) popup_note2_image_window_t1_ParamLimits

0x545d,	// (0x0003e6bf) popup_note2_image_window_t1

0x5475,	// (0x0003e6d7) popup_note2_image_window_t2_ParamLimits

0x5475,	// (0x0003e6d7) popup_note2_image_window_t2

0x548d,	// (0x0003e6ef) popup_note2_image_window_t3_ParamLimits

0x548d,	// (0x0003e6ef) popup_note2_image_window_t3

0x0002,

0xfc60,	// (0x00048ec2) popup_note2_image_window_t_ParamLimits

0xfc60,	// (0x00048ec2) popup_note2_image_window_t

0x272a,	// (0x0003b98c) popup_note2_wait_window_g1_ParamLimits

0x272a,	// (0x0003b98c) popup_note2_wait_window_g1

0x2736,	// (0x0003b998) popup_note2_wait_window_g2_ParamLimits

0x2736,	// (0x0003b998) popup_note2_wait_window_g2

0x2742,	// (0x0003b9a4) popup_note2_wait_window_g3_ParamLimits

0x2742,	// (0x0003b9a4) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x00048a71) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x00048a71) popup_note2_wait_window_g

0x54a9,	// (0x0003e70b) popup_note2_wait_window_t1_ParamLimits

0x54a9,	// (0x0003e70b) popup_note2_wait_window_t1

0x54c7,	// (0x0003e729) popup_note2_wait_window_t2_ParamLimits

0x54c7,	// (0x0003e729) popup_note2_wait_window_t2

0x54e5,	// (0x0003e747) popup_note2_wait_window_t3_ParamLimits

0x54e5,	// (0x0003e747) popup_note2_wait_window_t3

0x54f7,	// (0x0003e759) popup_note2_wait_window_t4_ParamLimits

0x54f7,	// (0x0003e759) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x00048ec9) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x00048ec9) popup_note2_wait_window_t

0x5509,	// (0x0003e76b) wait_bar2_pane_ParamLimits

0x5509,	// (0x0003e76b) wait_bar2_pane

0x5521,	// (0x0003e783) popup_snote2_single_text_window_g1_ParamLimits

0x5521,	// (0x0003e783) popup_snote2_single_text_window_g1

0x5549,	// (0x0003e7ab) popup_snote2_single_text_window_t1_ParamLimits

0x5549,	// (0x0003e7ab) popup_snote2_single_text_window_t1

0x5595,	// (0x0003e7f7) popup_snote2_single_text_window_t2_ParamLimits

0x5595,	// (0x0003e7f7) popup_snote2_single_text_window_t2

0x55e1,	// (0x0003e843) popup_snote2_single_text_window_t3_ParamLimits

0x55e1,	// (0x0003e843) popup_snote2_single_text_window_t3

0x5622,	// (0x0003e884) popup_snote2_single_text_window_t4_ParamLimits

0x5622,	// (0x0003e884) popup_snote2_single_text_window_t4

0x5658,	// (0x0003e8ba) popup_snote2_single_text_window_t5_ParamLimits

0x5658,	// (0x0003e8ba) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x00048ed2) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x00048ed2) popup_snote2_single_text_window_t

0xd0f8,	// (0x0004635a) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0f8,	// (0x0004635a) popup_snote2_single_graphic_window_g1

0x56ab,	// (0x0003e90d) popup_snote2_single_graphic_window_g2_ParamLimits

0x56ab,	// (0x0003e90d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x00048edd) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x00048edd) popup_snote2_single_graphic_window_g

0x56d3,	// (0x0003e935) popup_snote2_single_graphic_window_t1_ParamLimits

0x56d3,	// (0x0003e935) popup_snote2_single_graphic_window_t1

0x571f,	// (0x0003e981) popup_snote2_single_graphic_window_t2_ParamLimits

0x571f,	// (0x0003e981) popup_snote2_single_graphic_window_t2

0x55e1,	// (0x0003e843) popup_snote2_single_graphic_window_t3_ParamLimits

0x55e1,	// (0x0003e843) popup_snote2_single_graphic_window_t3

0x5622,	// (0x0003e884) popup_snote2_single_graphic_window_t4_ParamLimits

0x5622,	// (0x0003e884) popup_snote2_single_graphic_window_t4

0x5658,	// (0x0003e8ba) popup_snote2_single_graphic_window_t5_ParamLimits

0x5658,	// (0x0003e8ba) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x00048ee2) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x00048ee2) popup_snote2_single_graphic_window_t

0x414e,	// (0x0003d3b0) clock_nsta_pane_cp2_t1

0x414e,	// (0x0003d3b0) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x00048cfd) clock_nsta_pane_cp2_t

0x90f8,	// (0x0004235a) form_field_data_wide_pane_g1_ParamLimits

0xb865,	// (0x00044ac7) form_field_data_wide_pane_g2_ParamLimits

0xb865,	// (0x00044ac7) form_field_data_wide_pane_g2

0xb871,	// (0x00044ad3) form_field_data_wide_pane_g3_ParamLimits

0xb871,	// (0x00044ad3) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x000488a9) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x000488a9) form_field_data_wide_pane_g

0xc9da,	// (0x00045c3c) grid_touch_3_pane_ParamLimits

0xc9da,	// (0x00045c3c) grid_touch_3_pane

0xd120,	// (0x00046382) cell_touch_3_pane_ParamLimits

0xd120,	// (0x00046382) cell_touch_3_pane

0x46aa,	// (0x0003d90c) cell_touch_3_pane_g1

0x46aa,	// (0x0003d90c) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x00048d82) cell_touch_3_pane_g

0xb681,	// (0x000448e3) cont_query_data_pane

0xb689,	// (0x000448eb) cont_query_data_pane_cp1

0x5799,	// (0x0003e9fb) button_value_adjust_pane_cp7

0x57a1,	// (0x0003ea03) query_popup_pane_cp3

0xbd0a,	// (0x00044f6c) bg_popup_sub_pane_cp22_ParamLimits

0x954f,	// (0x000427b1) navi_navi_volume_pane_cp2

0x955e,	// (0x000427c0) popup_side_volume_key_window_g2

0x956d,	// (0x000427cf) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x0004893f) popup_side_volume_key_window_g

0x957c,	// (0x000427de) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00048946) popup_side_volume_key_window_t

0x969e,	// (0x00042900) popup_side_volume_key_window_ParamLimits

0x8ebe,	// (0x00042120) list_double_graphic_pane_g4_ParamLimits

0x8ebe,	// (0x00042120) list_double_graphic_pane_g4

0xc7e6,	// (0x00045a48) list_single_2heading_msg_pane_ParamLimits

0xc7e6,	// (0x00045a48) list_single_2heading_msg_pane

0xabca,	// (0x00043e2c) list_single_2heading_msg_pane_g1_ParamLimits

0xabca,	// (0x00043e2c) list_single_2heading_msg_pane_g1

0xabd6,	// (0x00043e38) list_single_2heading_msg_pane_g2_ParamLimits

0xabd6,	// (0x00043e38) list_single_2heading_msg_pane_g2

0xabe9,	// (0x00043e4b) list_single_2heading_msg_pane_g3_ParamLimits

0xabe9,	// (0x00043e4b) list_single_2heading_msg_pane_g3

0xe3d3,	// (0x00047635) list_single_2heading_msg_pane_g4_ParamLimits

0xe3d3,	// (0x00047635) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x00048eed) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x00048eed) list_single_2heading_msg_pane_g

0xabf5,	// (0x00043e57) list_single_2heading_msg_pane_t1_ParamLimits

0xabf5,	// (0x00043e57) list_single_2heading_msg_pane_t1

0xac1d,	// (0x00043e7f) list_single_2heading_msg_pane_t2_ParamLimits

0xac1d,	// (0x00043e7f) list_single_2heading_msg_pane_t2

0xac88,	// (0x00043eea) list_single_2heading_msg_pane_t3_ParamLimits

0xac88,	// (0x00043eea) list_single_2heading_msg_pane_t3

0xe3eb,	// (0x0004764d) list_single_2heading_msg_pane_t4_ParamLimits

0xe3eb,	// (0x0004764d) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x00048ef6) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x00048ef6) list_single_2heading_msg_pane_t

0xb44f,	// (0x000446b1) title_pane_g4_ParamLimits

0xb44f,	// (0x000446b1) title_pane_g4

0xf0ce,	// (0x00048330) title_pane_stacon_g3_ParamLimits

0xf0ce,	// (0x00048330) title_pane_stacon_g3

0x52d3,	// (0x0003e535) list_single_2graphic_im_pane_g4_ParamLimits

0x52d3,	// (0x0003e535) list_single_2graphic_im_pane_g4

0xc52c,	// (0x0004578e) popup_side_volume_key_window_cp

0x3980,	// (0x0003cbe2) main_idle_act2_pane_t1

0x06c6,	// (0x00039928) toolbar_button_pane_g10

0x8df8,	// (0x0004205a) popup_toolbar_window_cp1

0x413f,	// (0x0003d3a1) clock_nsta_pane_cp_t1

0x413f,	// (0x0003d3a1) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x00048cf8) clock_nsta_pane_cp_t

0x954f,	// (0x000427b1) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x00048504) popup_side_volume_key_window_g1_ParamLimits

0x955e,	// (0x000427c0) popup_side_volume_key_window_g2_ParamLimits

0x956d,	// (0x000427cf) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x0004893f) popup_side_volume_key_window_g_ParamLimits

0x0c8a,	// (0x00039eec) fep_hwr_aid_pane

0x0d31,	// (0x00039f93) bg_fep_hwr_top_pane_g4_ParamLimits

0x4706,	// (0x0003d968) fep_hwr_top_pane_g1_ParamLimits

0x4718,	// (0x0003d97a) fep_hwr_top_pane_g2_ParamLimits

0x0d51,	// (0x00039fb3) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00048d4d) fep_hwr_top_pane_g_ParamLimits

0x0d66,	// (0x00039fc8) fep_hwr_top_text_pane_ParamLimits

0x2f26,	// (0x0003c188) aid_touch_tab_arrow_arrow_2

0x2f2f,	// (0x0003c191) aid_touch_tab_arrow_left_2

0x0c9e,	// (0x00039f00) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0cd5,	// (0x00039f37) fep_hwr_prediction_pane

0x4871,	// (0x0003dad3) fep_vkb_prediction_pane

0xcd40,	// (0x00045fa2) fep_vkb_side_pane_g3_ParamLimits

0xcd40,	// (0x00045fa2) fep_vkb_side_pane_g3

0x0ee1,	// (0x0003a143) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f4d,	// (0x0003a1af) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f5a,	// (0x0003a1bc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x00048dfc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1160,	// (0x0003a3c2) fep_hwr_prediction_pane_g1

0x116a,	// (0x0003a3cc) fep_hwr_prediction_pane_g2

0x1172,	// (0x0003a3d4) fep_hwr_prediction_pane_g3

0x117a,	// (0x0003a3dc) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x00048eff) fep_hwr_prediction_pane_g

0x57c6,	// (0x0003ea28) fep_vkb_prediction_pane_g1

0x57d0,	// (0x0003ea32) fep_vkb_prediction_pane_g2

0x57d8,	// (0x0003ea3a) fep_vkb_prediction_pane_g3

0x57e0,	// (0x0003ea42) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x00048f08) fep_vkb_prediction_pane_g

0xa9be,	// (0x00043c20) slider_set_pane_g3

0xa9d2,	// (0x00043c34) slider_set_pane_g4

0xa9ea,	// (0x00043c4c) slider_set_pane_g5

0xa9be,	// (0x00043c20) slider_set_pane_g6

0xaa00,	// (0x00043c62) slider_set_pane_g7

0x35b2,	// (0x0003c814) slider_form_pane_g3

0x35bb,	// (0x0003c81d) slider_form_pane_g4

0x35c3,	// (0x0003c825) slider_form_pane_g5

0x35b2,	// (0x0003c814) slider_form_pane_g6

0xc7ca,	// (0x00045a2c) slider_form_pane_g7

0x3c2c,	// (0x0003ce8e) slider_set_pane_vc_g3

0x3c35,	// (0x0003ce97) slider_set_pane_vc_g4

0x3c3e,	// (0x0003cea0) slider_set_pane_vc_g5

0x3c2c,	// (0x0003ce8e) slider_set_pane_vc_g6

0x3c47,	// (0x0003cea9) slider_set_pane_vc_g7

0x3dfd,	// (0x0003d05f) slider_form_pane_vc_g1

0x3e06,	// (0x0003d068) slider_form_pane_vc_g2

0x3e0f,	// (0x0003d071) slider_form_pane_vc_g3

0x3dfd,	// (0x0003d05f) slider_form_pane_vc_g4

0x3e18,	// (0x0003d07a) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x00048cca) slider_form_pane_vc_g

0xef9a,	// (0x000481fc) main_idle_act3_pane

0x57e8,	// (0x0003ea4a) ai3_links_pane

0xd169,	// (0x000463cb) popup_ai3_data_window_ParamLimits

0xd169,	// (0x000463cb) popup_ai3_data_window

0xb431,	// (0x00044693) grid_ai3_links_pane

0xd181,	// (0x000463e3) cell_ai3_links_pane_ParamLimits

0xd181,	// (0x000463e3) cell_ai3_links_pane

0x5821,	// (0x0003ea83) bg_popup_sub_pane_cp11

0x582e,	// (0x0003ea90) cell_ai3_links_pane_g1

0xb431,	// (0x00044693) bg_popup_sub_pane_cp12

0x5853,	// (0x0003eab5) heading_ai3_data_pane

0x585b,	// (0x0003eabd) list_ai3_gene_pane

0x5867,	// (0x0003eac9) popup_ai3_data_window_g1

0x586f,	// (0x0003ead1) heading_ai3_data_pane_g1

0x5877,	// (0x0003ead9) heading_ai3_data_pane_t1

0xd19b,	// (0x000463fd) list_double_ai3_gene_pane_ParamLimits

0xd19b,	// (0x000463fd) list_double_ai3_gene_pane

0x5892,	// (0x0003eaf4) list_single_ai3_gene_pane_ParamLimits

0x5892,	// (0x0003eaf4) list_single_ai3_gene_pane

0x466f,	// (0x0003d8d1) list_highlight_pane_cp7_ParamLimits

0x466f,	// (0x0003d8d1) list_highlight_pane_cp7

0x589f,	// (0x0003eb01) list_single_a13_gene_pane_t1_ParamLimits

0x589f,	// (0x0003eb01) list_single_a13_gene_pane_t1

0x58b6,	// (0x0003eb18) list_single_ai3_gene_pane_g1

0x58bf,	// (0x0003eb21) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x00048f11) list_single_ai3_gene_pane_g

0x58c7,	// (0x0003eb29) list_double_ai3_gene_pane_g1_ParamLimits

0x58c7,	// (0x0003eb29) list_double_ai3_gene_pane_g1

0xd1a8,	// (0x0004640a) list_double_ai3_gene_pane_t1_ParamLimits

0xd1a8,	// (0x0004640a) list_double_ai3_gene_pane_t1

0x58ef,	// (0x0003eb51) list_double_ai3_gene_pane_t2_ParamLimits

0x58ef,	// (0x0003eb51) list_double_ai3_gene_pane_t2

0x5904,	// (0x0003eb66) list_double_ai3_gene_pane_t3_ParamLimits

0x5904,	// (0x0003eb66) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x00048f16) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x00048f16) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe3c9,	// (0x0004762b) aid_size_min_col_2

0xd153,	// (0x000463b5) aid_size_min_msg_ParamLimits

0xd153,	// (0x000463b5) aid_size_min_msg

0xcd54,	// (0x00045fb6) fep_vkb_top_text_pane_g2_ParamLimits

0xcd54,	// (0x00045fb6) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x00048d7d) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x00048d7d) fep_vkb_top_text_pane_g

0xef9a,	// (0x000481fc) main_hc_apps_shell_pane

0x5921,	// (0x0003eb83) grid_hc_apps_pane_ParamLimits

0x5921,	// (0x0003eb83) grid_hc_apps_pane

0x5933,	// (0x0003eb95) list_hc_apps_pane

0x593b,	// (0x0003eb9d) scroll_pane_cp37_ParamLimits

0x593b,	// (0x0003eb9d) scroll_pane_cp37

0xd1c4,	// (0x00046426) cell_hc_apps_pane_ParamLimits

0xd1c4,	// (0x00046426) cell_hc_apps_pane

0xd282,	// (0x000464e4) cell_hc_apps_pane_g1_ParamLimits

0xd282,	// (0x000464e4) cell_hc_apps_pane_g1

0x5a25,	// (0x0003ec87) cell_hc_apps_pane_g2_ParamLimits

0x5a25,	// (0x0003ec87) cell_hc_apps_pane_g2

0x5a41,	// (0x0003eca3) cell_hc_apps_pane_g3_ParamLimits

0x5a41,	// (0x0003eca3) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x00048f1d) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x00048f1d) cell_hc_apps_pane_g

0xd2ae,	// (0x00046510) cell_hc_apps_pane_t1_ParamLimits

0xd2ae,	// (0x00046510) cell_hc_apps_pane_t1

0xb5cb,	// (0x0004482d) grid_highlight_pane_cp10_ParamLimits

0xb5cb,	// (0x0004482d) grid_highlight_pane_cp10

0xd2ec,	// (0x0004654e) list_single_hc_apps_pane_ParamLimits

0xd2ec,	// (0x0004654e) list_single_hc_apps_pane

0xd31c,	// (0x0004657e) list_single_hc_apps_pane_g1

0xacf6,	// (0x00043f58) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x00048f24) list_single_hc_apps_pane_g

0xad0f,	// (0x00043f71) list_single_hc_apps_pane_g2_copy1

0xad2b,	// (0x00043f8d) list_single_hc_apps_pane_t1

0xb4a1,	// (0x00044703) bg_set_opt_pane_cp_ParamLimits

0x88c0,	// (0x00041b22) setting_slider_pane_t1_ParamLimits

0x88d9,	// (0x00041b3b) setting_slider_pane_t2_ParamLimits

0x88f3,	// (0x00041b55) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004879b) setting_slider_pane_t_ParamLimits

0x890b,	// (0x00041b6d) slider_set_pane_ParamLimits

0xf4a6,	// (0x00048708) control_pane_g5_ParamLimits

0xf4a6,	// (0x00048708) control_pane_g5

0xc64c,	// (0x000458ae) slider_set_pane_g1_ParamLimits

0x09ed,	// (0x00039c4f) slider_set_pane_g2_ParamLimits

0xa9be,	// (0x00043c20) slider_set_pane_g3_ParamLimits

0xa9d2,	// (0x00043c34) slider_set_pane_g4_ParamLimits

0xa9ea,	// (0x00043c4c) slider_set_pane_g5_ParamLimits

0xa9be,	// (0x00043c20) slider_set_pane_g6_ParamLimits

0xaa00,	// (0x00043c62) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00048b8d) slider_set_pane_g_ParamLimits

0xbfb8,	// (0x0004521a) navi_icon_text_pane_ParamLimits

0xa1e6,	// (0x00043448) aid_fill_nsta_2_ParamLimits

0xa21d,	// (0x0004347f) aid_touch_tab_arrow_left_ParamLimits

0xa233,	// (0x00043495) aid_touch_tab_arrow_right_ParamLimits

0xa2ce,	// (0x00043530) clock_nsta_pane_ParamLimits

0x2f08,	// (0x0003c16a) navi_icon_pane_g1_ParamLimits

0x2f14,	// (0x0003c176) navi_text_pane_t1_ParamLimits

0x424f,	// (0x0003d4b1) navi_icon_text_pane_g1_ParamLimits

0x425b,	// (0x0003d4bd) navi_icon_text_pane_t1_ParamLimits

0xd31c,	// (0x0004657e) list_single_hc_apps_pane_g1_ParamLimits

0xacf6,	// (0x00043f58) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x00048f24) list_single_hc_apps_pane_g_ParamLimits

0xad0f,	// (0x00043f71) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xad2b,	// (0x00043f8d) list_single_hc_apps_pane_t1_ParamLimits

0x86f1,	// (0x00041953) popup_toolbar2_fixed_window_ParamLimits

0x86f1,	// (0x00041953) popup_toolbar2_fixed_window

0xa0f6,	// (0x00043358) popup_toolbar2_float_window

0xb431,	// (0x00044693) bg_popup_sub_pane_cp27

0x5b1f,	// (0x0003ed81) grid_toolbar2_float_pane

0xb431,	// (0x00044693) bg_popup_sub_pane_cp26

0x5b1f,	// (0x0003ed81) grid_toolbar2_fixed_pane

0xd335,	// (0x00046597) cell_toolbar2_fixed_pane_ParamLimits

0xd335,	// (0x00046597) cell_toolbar2_fixed_pane

0xd34f,	// (0x000465b1) cell_toolbar2_fixed_pane_g1

0x01eb,	// (0x0003944d) toolbar2_fixed_button_pane

0x2076,	// (0x0003b2d8) toolbar2_fixed_button_pane_g1

0x2086,	// (0x0003b2e8) toolbar2_fixed_button_pane_g2

0x207e,	// (0x0003b2e0) toolbar2_fixed_button_pane_g3

0x2096,	// (0x0003b2f8) toolbar2_fixed_button_pane_g4

0x208e,	// (0x0003b2f0) toolbar2_fixed_button_pane_g5

0x209e,	// (0x0003b300) toolbar2_fixed_button_pane_g6

0x20a6,	// (0x0003b308) toolbar2_fixed_button_pane_g7

0x20b6,	// (0x0003b318) toolbar2_fixed_button_pane_g8

0x20ae,	// (0x0003b310) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00048a8f) toolbar2_fixed_button_pane_g

0x5b40,	// (0x0003eda2) cell_toolbar2_float_pane_ParamLimits

0x5b40,	// (0x0003eda2) cell_toolbar2_float_pane

0x5b51,	// (0x0003edb3) cell_toolbar2_float_pane_g1

0x01eb,	// (0x0003944d) toolbar2_fixed_button_pane_cp

0xcc3c,	// (0x00045e9e) fep_vkb_accented_list_pane_ParamLimits

0xcc3c,	// (0x00045e9e) fep_vkb_accented_list_pane

0x0ec1,	// (0x0003a123) bg_popup_fep_shadow_pane_g9

0xc0f2,	// (0x00045354) bg_popup_fep_shadow_pane_cp3

0xb970,	// (0x00044bd2) list_accented_list_pane

0x5b5a,	// (0x0003edbc) list_single_accented_list_pane_ParamLimits

0x5b5a,	// (0x0003edbc) list_single_accented_list_pane

0xc0f2,	// (0x00045354) list_highlight_pane_cp10

0x5b6b,	// (0x0003edcd) list_single_accented_list_pane_t1

0xa020,	// (0x00043282) popup_slider_window_ParamLimits

0xa020,	// (0x00043282) popup_slider_window

0x57a9,	// (0x0003ea0b) aid_indentation_list_msg

0xd440,	// (0x000466a2) bg_popup_window_pane_cp19

0x5c91,	// (0x0003eef3) popup_slider_window_g1

0x5cad,	// (0x0003ef0f) popup_slider_window_g2

0x5cc9,	// (0x0003ef2b) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x00048f29) popup_slider_window_g

0x5d2f,	// (0x0003ef91) popup_slider_window_t1

0x5da3,	// (0x0003f005) small_volume_slider_vertical_pane

0x46aa,	// (0x0003d90c) small_volume_slider_vertical_pane_g1

0x46aa,	// (0x0003d90c) small_volume_slider_vertical_pane_g2

0x5dbf,	// (0x0003f021) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x00048f3b) small_volume_slider_vertical_pane_g

0x863f,	// (0x000418a1) area_side_right_pane_ParamLimits

0x863f,	// (0x000418a1) area_side_right_pane

0xad59,	// (0x00043fbb) aid_size_side_button_ParamLimits

0xad59,	// (0x00043fbb) aid_size_side_button

0xad72,	// (0x00043fd4) grid_sctrl_middle_pane_ParamLimits

0xad72,	// (0x00043fd4) grid_sctrl_middle_pane

0x1218,	// (0x0003a47a) sctrl_sk_bottom_pane

0x1229,	// (0x0003a48b) sctrl_sk_top_pane

0x123b,	// (0x0003a49d) aid_touch_sctrl_top

0x1248,	// (0x0003a4aa) bg_sctrl_sk_pane_ParamLimits

0x1248,	// (0x0003a4aa) bg_sctrl_sk_pane

0x1256,	// (0x0003a4b8) sctrl_sk_top_pane_g1

0x1263,	// (0x0003a4c5) sctrl_sk_top_pane_t1

0x123b,	// (0x0003a49d) aid_touch_sctrl_bottom

0x1248,	// (0x0003a4aa) bg_sctrl_sk_pane_cp_ParamLimits

0x1248,	// (0x0003a4aa) bg_sctrl_sk_pane_cp

0x127e,	// (0x0003a4e0) sctrl_sk_bottom_pane_g1

0x1263,	// (0x0003a4c5) sctrl_sk_bottom_pane_t1

0xad8c,	// (0x00043fee) cell_sctrl_middle_pane_ParamLimits

0xad8c,	// (0x00043fee) cell_sctrl_middle_pane

0xad9d,	// (0x00043fff) aid_touch_sctrl_middle_ParamLimits

0xad9d,	// (0x00043fff) aid_touch_sctrl_middle

0xadaa,	// (0x0004400c) bg_sctrl_middle_pane_ParamLimits

0xadaa,	// (0x0004400c) bg_sctrl_middle_pane

0x18eb,	// (0x0003ab4d) cell_sctrl_middle_pane_g1_ParamLimits

0x18eb,	// (0x0003ab4d) cell_sctrl_middle_pane_g1

0xadb8,	// (0x0004401a) cell_sctrl_middle_pane_g2_ParamLimits

0xadb8,	// (0x0004401a) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x00048f47) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x00048f47) cell_sctrl_middle_pane_g

0x2076,	// (0x0003b2d8) bg_sctrl_middle_pane_g1

0x207e,	// (0x0003b2e0) bg_sctrl_middle_pane_g2

0x2086,	// (0x0003b2e8) bg_sctrl_middle_pane_g3

0x208e,	// (0x0003b2f0) bg_sctrl_middle_pane_g4

0x2096,	// (0x0003b2f8) bg_sctrl_middle_pane_g5

0x209e,	// (0x0003b300) bg_sctrl_middle_pane_g6

0x20a6,	// (0x0003b308) bg_sctrl_middle_pane_g7

0x20ae,	// (0x0003b310) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x00048f4c) bg_sctrl_middle_pane_g

0x20b6,	// (0x0003b318) bg_sctrl_middle_pane_g8_copy1

0x2076,	// (0x0003b2d8) bg_sctrl_sk_pane_g1

0x2086,	// (0x0003b2e8) bg_sctrl_sk_pane_g2

0x207e,	// (0x0003b2e0) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00048a8f) bg_sctrl_sk_pane_g

0xb799,	// (0x000449fb) aid_size_touch_scroll_bar

0x2096,	// (0x0003b2f8) bg_sctrl_sk_pane_g4

0x208e,	// (0x0003b2f0) bg_sctrl_sk_pane_g5

0x209e,	// (0x0003b300) bg_sctrl_sk_pane_g6

0x20a6,	// (0x0003b308) bg_sctrl_sk_pane_g7

0x20b6,	// (0x0003b318) bg_sctrl_sk_pane_g8

0x20ae,	// (0x0003b310) bg_sctrl_sk_pane_g9

0xf4db,	// (0x0004873d) popup_fep_china_hwr2_fs_candidate_window

0x9ae6,	// (0x00042d48) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9ae6,	// (0x00042d48) popup_fep_china_hwr2_fs_control_window

0x0ee1,	// (0x0003a143) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x00048f42) sctrl_sk_top_pane_g

0xd4f8,	// (0x0004675a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd4f8,	// (0x0004675a) aid_fep_china_hwr2_fs_cell

0xd50c,	// (0x0004676e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd50c,	// (0x0004676e) bg_popup_fep_shadow_pane_cp4

0xd523,	// (0x00046785) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd523,	// (0x00046785) bg_popup_fep_shadow_pane_cp5

0xd535,	// (0x00046797) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd535,	// (0x00046797) popup_fep_china_hwr2_fs_control_bar_grid

0xd549,	// (0x000467ab) popup_fep_china_hwr2_fs_control_funtion_grid

0x5e1b,	// (0x0003f07d) aid_fep_china_hwr2_fs_candi_cell

0xb431,	// (0x00044693) bg_popup_fep_shadow_pane_cp6

0x5e25,	// (0x0003f087) popup_fep_china_hwr2_fs_candidate_grid

0xd551,	// (0x000467b3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd551,	// (0x000467b3) cell_fep_china_hwr2_fs_funtion_grid

0x46aa,	// (0x0003d90c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5e47,	// (0x0003f0a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5e47,	// (0x0003f0a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5e55,	// (0x0003f0b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5e55,	// (0x0003f0b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x00048f5d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x00048f5d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd569,	// (0x000467cb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd569,	// (0x000467cb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd57e,	// (0x000467e0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd57e,	// (0x000467e0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x00048f62) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x00048f62) cell_fep_china_hwr2_fs_funtion_grid_t

0x5e9c,	// (0x0003f0fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5ea4,	// (0x0003f106) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5eac,	// (0x0003f10e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x00048f67) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5eb4,	// (0x0003f116) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5eb4,	// (0x0003f116) cell_fep_china_hwr2_fs_candidate_grid

0x5ecd,	// (0x0003f12f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5ed5,	// (0x0003f137) popup_fep_china_hwr2_fs_candidate_grid_g21

0x46aa,	// (0x0003d90c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x46aa,	// (0x0003d90c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x00048d82) cell_fep_china_hwr2_fs_candidate_grid_g

0x5edd,	// (0x0003f13f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x04d1,	// (0x00039733) clock_nsta_pane_cp_24_ParamLimits

0x04d1,	// (0x00039733) clock_nsta_pane_cp_24

0x054f,	// (0x000397b1) indicator_nsta_pane_cp_24_ParamLimits

0x054f,	// (0x000397b1) indicator_nsta_pane_cp_24

0x2d84,	// (0x0003bfe6) heading_pane_g1

0x0001,

0xf892,	// (0x00048af4) heading_pane_g

0x37c9,	// (0x0003ca2b) grid_sct_catagory_button_pane

0x37f9,	// (0x0003ca5b) scroll_pane_cp5_ParamLimits

0x429d,	// (0x0003d4ff) button_value_adjust_pane_cp5_ParamLimits

0x429d,	// (0x0003d4ff) button_value_adjust_pane_cp5

0x437c,	// (0x0003d5de) form2_midp_time_pane_ParamLimits

0x5eeb,	// (0x0003f14d) cell_sct_catagory_button_pane_ParamLimits

0x5eeb,	// (0x0003f14d) cell_sct_catagory_button_pane

0x466f,	// (0x0003d8d1) bg_button_pane_cp01_ParamLimits

0x466f,	// (0x0003d8d1) bg_button_pane_cp01

0x46aa,	// (0x0003d90c) cell_sct_catagory_button_pane_g1

0xa099,	// (0x000432fb) popup_tb_extension_window

0xd59a,	// (0x000467fc) aid_size_cell_ext_ParamLimits

0xd59a,	// (0x000467fc) aid_size_cell_ext

0xb74b,	// (0x000449ad) bg_tb_trans_pane_cp1_ParamLimits

0xb74b,	// (0x000449ad) bg_tb_trans_pane_cp1

0xd5c0,	// (0x00046822) grid_tb_ext_pane_ParamLimits

0xd5c0,	// (0x00046822) grid_tb_ext_pane

0xd5ff,	// (0x00046861) cell_tb_ext_pane_ParamLimits

0xd5ff,	// (0x00046861) cell_tb_ext_pane

0xd627,	// (0x00046889) cell_tb_ext_pane_g1_ParamLimits

0xd627,	// (0x00046889) cell_tb_ext_pane_g1

0x5f81,	// (0x0003f1e3) cell_tb_ext_pane_t1

0xb5cb,	// (0x0004482d) list_highlight_pane_cp11_ParamLimits

0xb5cb,	// (0x0004482d) list_highlight_pane_cp11

0x8706,	// (0x00041968) popup_uni_indicator_window_ParamLimits

0x8706,	// (0x00041968) popup_uni_indicator_window

0xb857,	// (0x00044ab9) bg_popup_sub_pane_cp14

0xd644,	// (0x000468a6) list_uniindi_pane

0xd650,	// (0x000468b2) uniindi_top_pane

0xb5cb,	// (0x0004482d) bg_uniindi_top_pane

0xd66f,	// (0x000468d1) uniindi_top_pane_g1

0xd685,	// (0x000468e7) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x00048f6e) uniindi_top_pane_g

0xd6a2,	// (0x00046904) uniindi_top_pane_t1

0x6032,	// (0x0003f294) list_single_uniindi_pane_ParamLimits

0x6032,	// (0x0003f294) list_single_uniindi_pane

0x46aa,	// (0x0003d90c) bg_uniindi_top_pane_g1

0x6045,	// (0x0003f2a7) list_single_uniindi_pane_g1

0x6058,	// (0x0003f2ba) list_single_uniindi_pane_t1

0xef9a,	// (0x000481fc) control_bg_pane

0x607d,	// (0x0003f2df) bg_sctrl_sk_pane_cp1

0x6086,	// (0x0003f2e8) bg_sctrl_sk_pane_cp2

0x608f,	// (0x0003f2f1) control_bg_pane_g1

0x6098,	// (0x0003f2fa) control_bg_pane_g2

0x0001,

0xfd15,	// (0x00048f77) control_bg_pane_g

0x40e3,	// (0x0003d345) cell_indicator_nsta_pane_g1_ParamLimits

0xca17,	// (0x00045c79) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x00048ce6) cell_indicator_nsta_pane_g_ParamLimits

0xe1c4,	// (0x00047426) form2_midp_time_pane_t1_ParamLimits

0x0c7c,	// (0x00039ede) main_idle_act4_pane_ParamLimits

0x0c7c,	// (0x00039ede) main_idle_act4_pane

0xa099,	// (0x000432fb) popup_tb_extension_window_ParamLimits

0xd5e5,	// (0x00046847) tb_ext_find_pane_ParamLimits

0xd5e5,	// (0x00046847) tb_ext_find_pane

0x60a1,	// (0x0003f303) ai_gene_pane_1_cp1

0xc173,	// (0x000453d5) ai_gene_pane_2_cp1

0xd6cc,	// (0x0004692e) list_single_idle_plugin_calendar_pane

0x60b2,	// (0x0003f314) list_single_idle_plugin_notification_pane

0x60bb,	// (0x0003f31d) list_single_idle_plugin_player_pane

0xd6d5,	// (0x00046937) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd6d5,	// (0x00046937) list_single_idle_plugin_shortcut_pane

0xd6fd,	// (0x0004695f) main_idle_act4_pane_t1

0xd714,	// (0x00046976) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x00048f7c) main_idle_act4_pane_t

0xd72b,	// (0x0004698d) middle_sk_idle_act4_pane_ParamLimits

0xd72b,	// (0x0004698d) middle_sk_idle_act4_pane

0xd747,	// (0x000469a9) popup_clock_digital_analogue_window_cp2

0xd773,	// (0x000469d5) shortcut_wheel_idle_act4_pane_ParamLimits

0xd773,	// (0x000469d5) shortcut_wheel_idle_act4_pane

0x46aa,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g1

0x46aa,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g2

0x46aa,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g3

0x46aa,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g4

0x46aa,	// (0x0003d90c) shortcut_wheel_idle_act4_pane_g5

0x614e,	// (0x0003f3b0) shortcut_wheel_idle_act4_pane_g6

0x6156,	// (0x0003f3b8) shortcut_wheel_idle_act4_pane_g7

0x615e,	// (0x0003f3c0) shortcut_wheel_idle_act4_pane_g8

0x6166,	// (0x0003f3c8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x00048f81) shortcut_wheel_idle_act4_pane_g

0xd7f0,	// (0x00046a52) middle_sk_idle_act4_pane_g1_ParamLimits

0xd7f0,	// (0x00046a52) middle_sk_idle_act4_pane_g1

0xd7fe,	// (0x00046a60) middle_sk_idle_act4_pane_g2_ParamLimits

0xd7fe,	// (0x00046a60) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x00048fa4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x00048fa4) middle_sk_idle_act4_pane_g

0xd816,	// (0x00046a78) middle_sk_idle_act4_pane_t1_ParamLimits

0xd816,	// (0x00046a78) middle_sk_idle_act4_pane_t1

0xd845,	// (0x00046aa7) grid_ai_shortcut_pane_ParamLimits

0xd845,	// (0x00046aa7) grid_ai_shortcut_pane

0xd862,	// (0x00046ac4) list_highlight_pane_cp16_ParamLimits

0xd862,	// (0x00046ac4) list_highlight_pane_cp16

0xd86f,	// (0x00046ad1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd86f,	// (0x00046ad1) list_single_idle_plugin_shortcut_pane_g1

0xd87b,	// (0x00046add) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd87b,	// (0x00046add) list_single_idle_plugin_shortcut_pane_g2

0xd897,	// (0x00046af9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd897,	// (0x00046af9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x00048fa9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x00048fa9) list_single_idle_plugin_shortcut_pane_g

0xd8ac,	// (0x00046b0e) cell_ai_shortcut_pane_ParamLimits

0xd8ac,	// (0x00046b0e) cell_ai_shortcut_pane

0xd8c2,	// (0x00046b24) cell_ai_shortcut_pane_g1_ParamLimits

0xd8c2,	// (0x00046b24) cell_ai_shortcut_pane_g1

0x60a1,	// (0x0003f303) ai_gene_pane_1_cp2

0x6296,	// (0x0003f4f8) ai_gene_pane_2_cp2

0x629e,	// (0x0003f500) list_highlight_pane_cp15

0xd8e4,	// (0x00046b46) list_single_idle_plugin_calendar_pane_g1

0x629e,	// (0x0003f500) list_highlight_pane_cp17

0x62af,	// (0x0003f511) list_single_idle_plugin_calendar_pane_g1_copy1

0x62b7,	// (0x0003f519) list_single_idle_plugin_player_pane_g1

0x3a22,	// (0x0003cc84) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x00048fb0) list_single_idle_plugin_player_pane_g

0x62bf,	// (0x0003f521) list_single_idle_plugin_player_pane_t1

0x62cd,	// (0x0003f52f) list_single_idle_plugin_player_pane_t2

0x62db,	// (0x0003f53d) list_single_idle_plugin_player_pane_t3

0x62e9,	// (0x0003f54b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x00048fb5) list_single_idle_plugin_player_pane_t

0x62f7,	// (0x0003f559) wait_bar_pane_cp15

0x62ff,	// (0x0003f561) grid_ai_notification_pane

0x3a22,	// (0x0003cc84) list_single_idle_plugin_notification_pane_g1

0xd8ec,	// (0x00046b4e) cell_ai_notification_pane_ParamLimits

0xd8ec,	// (0x00046b4e) cell_ai_notification_pane

0x6315,	// (0x0003f577) cell_ai_notification_pane_g1

0x631d,	// (0x0003f57f) cell_ai_notification_pane_t1

0xd8f9,	// (0x00046b5b) tb_ext_find_button_pane

0xd901,	// (0x00046b63) tb_ext_find_pane_g1

0xd909,	// (0x00046b6b) tb_ext_find_pane_t1

0xbca9,	// (0x00044f0b) tb_ext_find_button_pane_g1

0xd917,	// (0x00046b79) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x00048fbe) tb_ext_find_button_pane_g

0xd6fd,	// (0x0004695f) main_idle_act4_pane_t1_ParamLimits

0xd714,	// (0x00046976) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x00048f7c) main_idle_act4_pane_t_ParamLimits

0xd747,	// (0x000469a9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd75f,	// (0x000469c1) sat_plugin_idle_act4_pane_ParamLimits

0xd75f,	// (0x000469c1) sat_plugin_idle_act4_pane

0xd920,	// (0x00046b82) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd920,	// (0x00046b82) sat_plugin_idle_act4_pane_t1

0xd938,	// (0x00046b9a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd938,	// (0x00046b9a) sat_plugin_idle_act4_pane_t2

0xd950,	// (0x00046bb2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd950,	// (0x00046bb2) sat_plugin_idle_act4_pane_t3

0xd968,	// (0x00046bca) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd968,	// (0x00046bca) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x00048fc3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x00048fc3) sat_plugin_idle_act4_pane_t

0x8681,	// (0x000418e3) popup_battery_window_ParamLimits

0x8681,	// (0x000418e3) popup_battery_window

0xb5cb,	// (0x0004482d) bg_popup_sub_pane_cp25_ParamLimits

0xb5cb,	// (0x0004482d) bg_popup_sub_pane_cp25

0x639e,	// (0x0003f600) popup_battery_window_g1_ParamLimits

0x639e,	// (0x0003f600) popup_battery_window_g1

0x63aa,	// (0x0003f60c) popup_battery_window_t1_ParamLimits

0x63aa,	// (0x0003f60c) popup_battery_window_t1

0x63bc,	// (0x0003f61e) popup_battery_window_t2_ParamLimits

0x63bc,	// (0x0003f61e) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x00048fcc) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x00048fcc) popup_battery_window_t

0x9720,	// (0x00042982) midp_canvas_pane_ParamLimits

0x9792,	// (0x000429f4) midp_keypad_pane_ParamLimits

0x9792,	// (0x000429f4) midp_keypad_pane

0xb999,	// (0x00044bfb) main_midp_pane_ParamLimits

0xca24,	// (0x00045c86) signal_pane_g2_cp_ParamLimits

0xd980,	// (0x00046be2) aid_size_cell_midp_keypad_ParamLimits

0xd980,	// (0x00046be2) aid_size_cell_midp_keypad

0xd99e,	// (0x00046c00) midp_keyp_game_grid_pane_ParamLimits

0xd99e,	// (0x00046c00) midp_keyp_game_grid_pane

0xd9c5,	// (0x00046c27) midp_keyp_rocker_pane_ParamLimits

0xd9c5,	// (0x00046c27) midp_keyp_rocker_pane

0xe410,	// (0x00047672) midp_keyp_sk_left_pane_ParamLimits

0xe410,	// (0x00047672) midp_keyp_sk_left_pane

0xe464,	// (0x000476c6) midp_keyp_sk_right_pane_ParamLimits

0xe464,	// (0x000476c6) midp_keyp_sk_right_pane

0xb431,	// (0x00044693) bg_button_pane_cp03

0xe4b8,	// (0x0004771a) midp_keyp_sk_left_pane_g1

0xb431,	// (0x00044693) bg_button_pane_cp04

0xe4b8,	// (0x0004771a) midp_keyp_sk_right_pane_g1

0x46aa,	// (0x0003d90c) midp_keyp_rocker_pane_g1

0xe4c1,	// (0x00047723) keyp_game_cell_pane_ParamLimits

0xe4c1,	// (0x00047723) keyp_game_cell_pane

0xb431,	// (0x00044693) bg_button_pane_cp02

0xe4e5,	// (0x00047747) keyp_game_cell_pane_g1

0x86a1,	// (0x00041903) popup_fep_vkb2_window_ParamLimits

0x86a1,	// (0x00041903) popup_fep_vkb2_window

0xadc4,	// (0x00044026) aid_size_cell_vkb2_ParamLimits

0xadc4,	// (0x00044026) aid_size_cell_vkb2

0xae02,	// (0x00044064) popup_fep_vkb2_window_g1_ParamLimits

0xae02,	// (0x00044064) popup_fep_vkb2_window_g1

0xae52,	// (0x000440b4) vkb2_area_bottom_pane_ParamLimits

0xae52,	// (0x000440b4) vkb2_area_bottom_pane

0xaea6,	// (0x00044108) vkb2_area_keypad_pane_ParamLimits

0xaea6,	// (0x00044108) vkb2_area_keypad_pane

0xaeee,	// (0x00044150) vkb2_area_top_pane_ParamLimits

0xaeee,	// (0x00044150) vkb2_area_top_pane

0xaf74,	// (0x000441d6) vkb2_top_entry_pane_ParamLimits

0xaf74,	// (0x000441d6) vkb2_top_entry_pane

0xafa1,	// (0x00044203) vkb2_top_grid_left_pane_ParamLimits

0xafa1,	// (0x00044203) vkb2_top_grid_left_pane

0xafc1,	// (0x00044223) vkb2_top_grid_right_pane_ParamLimits

0xafc1,	// (0x00044223) vkb2_top_grid_right_pane

0x14ea,	// (0x0003a74c) vkb2_cell_keypad_pane_ParamLimits

0x14ea,	// (0x0003a74c) vkb2_cell_keypad_pane

0xb007,	// (0x00044269) vkb2_area_bottom_grid_pane_ParamLimits

0xb007,	// (0x00044269) vkb2_area_bottom_grid_pane

0xb031,	// (0x00044293) vkb2_area_bottom_pane_g1_ParamLimits

0xb031,	// (0x00044293) vkb2_area_bottom_pane_g1

0xb057,	// (0x000442b9) vkb2_area_bottom_pane_g2_ParamLimits

0xb057,	// (0x000442b9) vkb2_area_bottom_pane_g2

0xb088,	// (0x000442ea) vkb2_area_bottom_pane_g3_ParamLimits

0xb088,	// (0x000442ea) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x00048fd1) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x00048fd1) vkb2_area_bottom_pane_g

0x1694,	// (0x0003a8f6) vkb2_top_cell_left_pane_ParamLimits

0x1694,	// (0x0003a8f6) vkb2_top_cell_left_pane

0xe4ee,	// (0x00047750) vkb2_top_entry_pane_g1_ParamLimits

0xe4ee,	// (0x00047750) vkb2_top_entry_pane_g1

0xe4fc,	// (0x0004775e) vkb2_top_entry_pane_t1_ParamLimits

0xe4fc,	// (0x0004775e) vkb2_top_entry_pane_t1

0x656d,	// (0x0003f7cf) vkb2_top_entry_pane_t2_ParamLimits

0x656d,	// (0x0003f7cf) vkb2_top_entry_pane_t2

0x659f,	// (0x0003f801) vkb2_top_entry_pane_t3_ParamLimits

0x659f,	// (0x0003f801) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x00048fd8) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x00048fd8) vkb2_top_entry_pane_t

0xb0f2,	// (0x00044354) vkb2_top_grid_right_pane_g1_ParamLimits

0xb0f2,	// (0x00044354) vkb2_top_grid_right_pane_g1

0x16f7,	// (0x0003a959) vkb2_top_grid_right_pane_g2_ParamLimits

0x16f7,	// (0x0003a959) vkb2_top_grid_right_pane_g2

0x170f,	// (0x0003a971) vkb2_top_grid_right_pane_g3_ParamLimits

0x170f,	// (0x0003a971) vkb2_top_grid_right_pane_g3

0xb108,	// (0x0004436a) vkb2_top_grid_right_pane_g4_ParamLimits

0xb108,	// (0x0004436a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x00048fdf) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x00048fdf) vkb2_top_grid_right_pane_g

0x173d,	// (0x0003a99f) vkb2_top_cell_left_pane_g1

0x1754,	// (0x0003a9b6) vkb2_cell_keypad_pane_g1_ParamLimits

0x1754,	// (0x0003a9b6) vkb2_cell_keypad_pane_g1

0x65c3,	// (0x0003f825) vkb2_cell_keypad_pane_t1_ParamLimits

0x65c3,	// (0x0003f825) vkb2_cell_keypad_pane_t1

0x1762,	// (0x0003a9c4) vkb2_cell_bottom_grid_pane_ParamLimits

0x1762,	// (0x0003a9c4) vkb2_cell_bottom_grid_pane

0x179b,	// (0x0003a9fd) vkb2_cell_bottom_grid_pane_g1

0xd794,	// (0x000469f6) aid_call2_pane_cp02

0xd79c,	// (0x000469fe) aid_call_pane_cp02

0xd7a4,	// (0x00046a06) clock_digital_number_pane_cp10

0xd7ac,	// (0x00046a0e) clock_digital_number_pane_cp11

0xd7b4,	// (0x00046a16) clock_digital_number_pane_cp12

0xd7bc,	// (0x00046a1e) clock_digital_number_pane_cp13

0xd7c4,	// (0x00046a26) clock_digital_separator_pane_cp10

0xbca9,	// (0x00044f0b) popup_clock_digital_analogue_window_cp2_g1

0xbca9,	// (0x00044f0b) popup_clock_digital_analogue_window_cp2_g2

0xd7cc,	// (0x00046a2e) popup_clock_digital_analogue_window_cp2_g3

0xbca9,	// (0x00044f0b) popup_clock_digital_analogue_window_cp2_g4

0xd7cc,	// (0x00046a2e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x00048f94) popup_clock_digital_analogue_window_cp2_g

0xd7d4,	// (0x00046a36) popup_clock_digital_analogue_window_cp2_t1

0xd7e2,	// (0x00046a44) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x00048f9f) popup_clock_digital_analogue_window_cp2_t

0x46aa,	// (0x0003d90c) clock_digital_number_pane_cp10_g1

0x46aa,	// (0x0003d90c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x00048d82) clock_digital_number_pane_cp10_g

0x46aa,	// (0x0003d90c) clock_digital_separator_pane_cp10_g1

0x46aa,	// (0x0003d90c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x00048d82) clock_digital_separator_pane_cp10_g

0xd691,	// (0x000468f3) uniindi_top_pane_g3

0x5ffb,	// (0x0003f25d) uniindi_top_pane_g4

0x1575,	// (0x0003a7d7) vkb2_row_keypad_pane_ParamLimits

0x1575,	// (0x0003a7d7) vkb2_row_keypad_pane

0x17b7,	// (0x0003aa19) vkb2_cell_t_keypad_pane_ParamLimits

0x17b7,	// (0x0003aa19) vkb2_cell_t_keypad_pane

0x17c7,	// (0x0003aa29) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17c7,	// (0x0003aa29) vkb2_cell_t_keypad_pane_cp08

0x17da,	// (0x0003aa3c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17da,	// (0x0003aa3c) vkb2_cell_t_keypad_pane_cp09

0x17ee,	// (0x0003aa50) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17ee,	// (0x0003aa50) vkb2_cell_t_keypad_pane_cp01

0x17ff,	// (0x0003aa61) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x17ff,	// (0x0003aa61) vkb2_cell_t_keypad_pane_cp02

0x1810,	// (0x0003aa72) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1810,	// (0x0003aa72) vkb2_cell_t_keypad_pane_cp03

0x1821,	// (0x0003aa83) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1821,	// (0x0003aa83) vkb2_cell_t_keypad_pane_cp04

0x1832,	// (0x0003aa94) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1832,	// (0x0003aa94) vkb2_cell_t_keypad_pane_cp05

0x1843,	// (0x0003aaa5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1843,	// (0x0003aaa5) vkb2_cell_t_keypad_pane_cp06

0x1854,	// (0x0003aab6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1854,	// (0x0003aab6) vkb2_cell_t_keypad_pane_cp07

0x1865,	// (0x0003aac7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1865,	// (0x0003aac7) vkb2_cell_t_keypad_pane_cp10

0x0ee1,	// (0x0003a143) vkb2_cell_t_keypad_pane_g1

0x65da,	// (0x0003f83c) vkb2_cell_t_keypad_pane_t1

0xef9a,	// (0x000481fc) popup_grid_graphic2_window

0xe535,	// (0x00047797) aid_size_cell_graphic2_ParamLimits

0xe535,	// (0x00047797) aid_size_cell_graphic2

0xe573,	// (0x000477d5) bg_popup_window_pane_cp21_ParamLimits

0xe573,	// (0x000477d5) bg_popup_window_pane_cp21

0xe581,	// (0x000477e3) graphic2_pages_pane_ParamLimits

0xe581,	// (0x000477e3) graphic2_pages_pane

0xe5d7,	// (0x00047839) grid_graphic2_control_pane_ParamLimits

0xe5d7,	// (0x00047839) grid_graphic2_control_pane

0xe61f,	// (0x00047881) grid_graphic2_pane_ParamLimits

0xe61f,	// (0x00047881) grid_graphic2_pane

0xe6a6,	// (0x00047908) cell_graphic2_pane

0xef9a,	// (0x000481fc) main_comp_mode_pane

0x585b,	// (0x0003eabd) list_ai3_gene_pane_ParamLimits

0xd440,	// (0x000466a2) bg_popup_window_pane_cp19_ParamLimits

0x5c35,	// (0x0003ee97) bg_touch_area_indi_pane_ParamLimits

0x5c35,	// (0x0003ee97) bg_touch_area_indi_pane

0x5c4b,	// (0x0003eead) bg_touch_area_indi_pane_cp01_ParamLimits

0x5c4b,	// (0x0003eead) bg_touch_area_indi_pane_cp01

0x5c61,	// (0x0003eec3) bg_touch_area_indi_pane_cp02_ParamLimits

0x5c61,	// (0x0003eec3) bg_touch_area_indi_pane_cp02

0x5c77,	// (0x0003eed9) bg_touch_area_indi_pane_cp03_ParamLimits

0x5c77,	// (0x0003eed9) bg_touch_area_indi_pane_cp03

0x5c91,	// (0x0003eef3) popup_slider_window_g1_ParamLimits

0x5cad,	// (0x0003ef0f) popup_slider_window_g2_ParamLimits

0x5cc9,	// (0x0003ef2b) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x00048f29) popup_slider_window_g_ParamLimits

0x5d2f,	// (0x0003ef91) popup_slider_window_t1_ParamLimits

0x5da3,	// (0x0003f005) small_volume_slider_vertical_pane_ParamLimits

0xe6a6,	// (0x00047908) cell_graphic2_pane_ParamLimits

0xe701,	// (0x00047963) bg_button_pane_cp10_ParamLimits

0xe701,	// (0x00047963) bg_button_pane_cp10

0xe714,	// (0x00047976) bg_button_pane_cp11_ParamLimits

0xe714,	// (0x00047976) bg_button_pane_cp11

0xe727,	// (0x00047989) graphic2_pages_pane_g1_ParamLimits

0xe727,	// (0x00047989) graphic2_pages_pane_g1

0xe742,	// (0x000479a4) graphic2_pages_pane_g2_ParamLimits

0xe742,	// (0x000479a4) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x00048fed) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x00048fed) graphic2_pages_pane_g

0xe75a,	// (0x000479bc) graphic2_pages_pane_t1_ParamLimits

0xe75a,	// (0x000479bc) graphic2_pages_pane_t1

0xe772,	// (0x000479d4) cell_graphic2_control_pane_ParamLimits

0xe772,	// (0x000479d4) cell_graphic2_control_pane

0xe7a4,	// (0x00047a06) cell_graphic2_pane_g1_ParamLimits

0xe7a4,	// (0x00047a06) cell_graphic2_pane_g1

0xda16,	// (0x00046c78) cell_graphic2_pane_g2_ParamLimits

0xda16,	// (0x00046c78) cell_graphic2_pane_g2

0xe1d7,	// (0x00047439) cell_graphic2_pane_g3_ParamLimits

0xe1d7,	// (0x00047439) cell_graphic2_pane_g3

0xda23,	// (0x00046c85) cell_graphic2_pane_g4_ParamLimits

0xda23,	// (0x00046c85) cell_graphic2_pane_g4

0xe7b1,	// (0x00047a13) cell_graphic2_pane_g5_ParamLimits

0xe7b1,	// (0x00047a13) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x00048ff2) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x00048ff2) cell_graphic2_pane_g

0xe7ce,	// (0x00047a30) cell_graphic2_pane_t1_ParamLimits

0xe7ce,	// (0x00047a30) cell_graphic2_pane_t1

0x2d78,	// (0x0003bfda) grid_highlight_pane_cp11_ParamLimits

0x2d78,	// (0x0003bfda) grid_highlight_pane_cp11

0xb5cb,	// (0x0004482d) bg_button_pane_cp05

0xe818,	// (0x00047a7a) cell_graphic2_control_pane_g1

0x46aa,	// (0x0003d90c) bg_touch_area_indi_pane_g1

0x68b3,	// (0x0003fb15) aid_cmod_rocker_key_size

0x68bd,	// (0x0003fb1f) aid_cmode_itu_key_size

0x68c7,	// (0x0003fb29) main_cmode_video_pane

0x68d1,	// (0x0003fb33) main_comp_mode_itu_pane

0x68dd,	// (0x0003fb3f) main_comp_mode_rocker_pane

0x68e9,	// (0x0003fb4b) cell_cmode_rocker_pane_ParamLimits

0x68e9,	// (0x0003fb4b) cell_cmode_rocker_pane

0x68fb,	// (0x0003fb5d) cell_cmode_itu_pane_ParamLimits

0x68fb,	// (0x0003fb5d) cell_cmode_itu_pane

0xb857,	// (0x00044ab9) bg_button_pane_cp06_ParamLimits

0xb857,	// (0x00044ab9) bg_button_pane_cp06

0x491a,	// (0x0003db7c) cell_cmode_rocker_pane_g1_ParamLimits

0x491a,	// (0x0003db7c) cell_cmode_rocker_pane_g1

0x5e47,	// (0x0003f0a9) cell_cmode_rocker_pane_g2_ParamLimits

0x5e47,	// (0x0003f0a9) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x00049002) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x00049002) cell_cmode_rocker_pane_g

0xb431,	// (0x00044693) bg_button_pane_cp07

0x6910,	// (0x0003fb72) cell_cmode_itu_pane_g1

0x6919,	// (0x0003fb7b) cell_cmode_itu_pane_t1

0x6927,	// (0x0003fb89) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x00049007) cell_cmode_itu_pane_t

0x606d,	// (0x0003f2cf) aid_touch_ctrl_left

0x6075,	// (0x0003f2d7) aid_touch_ctrl_right

0xb431,	// (0x00044693) compa_mode_pane

0xe83e,	// (0x00047aa0) aid_cmod_rocker_key_size_cp

0xe848,	// (0x00047aaa) aid_cmode_itu_key_size_cp

0x6949,	// (0x0003fbab) compa_mode_pane_g1

0x6951,	// (0x0003fbb3) compa_mode_pane_g2

0x6959,	// (0x0003fbbb) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0004900c) compa_mode_pane_g

0xe852,	// (0x00047ab4) main_comp_mode_itu_pane_cp

0xe85a,	// (0x00047abc) main_comp_mode_rocker_pane_cp

0xe862,	// (0x00047ac4) cell_cmode_itu_pane_cp_ParamLimits

0xe862,	// (0x00047ac4) cell_cmode_itu_pane_cp

0xe877,	// (0x00047ad9) cell_cmode_rocker_pane_cp_ParamLimits

0xe877,	// (0x00047ad9) cell_cmode_rocker_pane_cp

0xb857,	// (0x00044ab9) bg_button_pane_cp06_cp_ParamLimits

0xb857,	// (0x00044ab9) bg_button_pane_cp06_cp

0x491a,	// (0x0003db7c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x491a,	// (0x0003db7c) cell_cmode_rocker_pane_g1_cp

0x46aa,	// (0x0003d90c) cell_cmode_rocker_pane_g2_cp

0xb431,	// (0x00044693) bg_button_pane_cp07_cp

0xe889,	// (0x00047aeb) cell_cmode_itu_pane_g1_cp

0xe892,	// (0x00047af4) cell_cmode_itu_pane_t1_cp

0xe892,	// (0x00047af4) cell_cmode_itu_pane_t2_cp

0xc7c0,	// (0x00045a22) settings_code_pane_cp2

0xb4a1,	// (0x00044703) bg_popup_window_pane_cp3_ParamLimits

0xb6e4,	// (0x00044946) heading_pane_cp3_ParamLimits

0xb6f3,	// (0x00044955) listscroll_popup_graphic_pane_ParamLimits

0x0c8a,	// (0x00039eec) fep_hwr_aid_pane_ParamLimits

0x123b,	// (0x0003a49d) aid_touch_sctrl_top_ParamLimits

0x1256,	// (0x0003a4b8) sctrl_sk_top_pane_g1_ParamLimits

0x0ee1,	// (0x0003a143) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x00048f42) sctrl_sk_top_pane_g_ParamLimits

0x1263,	// (0x0003a4c5) sctrl_sk_top_pane_t1_ParamLimits

0x123b,	// (0x0003a49d) aid_touch_sctrl_bottom_ParamLimits

0x1263,	// (0x0003a4c5) sctrl_sk_bottom_pane_t1_ParamLimits

0xd65d,	// (0x000468bf) aid_area_touch_clock

0xaf36,	// (0x00044198) aid_vkb2_area_top_pane_cell_ParamLimits

0xaf36,	// (0x00044198) aid_vkb2_area_top_pane_cell

0xafe1,	// (0x00044243) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xafe1,	// (0x00044243) aid_vkb2_area_bottom_pane_cell

0x6525,	// (0x0003f787) popup_char_count_window

0x69af,	// (0x0003fc11) popup_char_count_window_g1

0x69b8,	// (0x0003fc1a) popup_char_count_window_g2

0x69c1,	// (0x0003fc23) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x00049013) popup_char_count_window_g

0x69ca,	// (0x0003fc2c) popup_char_count_window_t1

0x1312,	// (0x0003a574) popup_fep_char_preview_window_ParamLimits

0x1312,	// (0x0003a574) popup_fep_char_preview_window

0xaf56,	// (0x000441b8) vkb2_top_candi_pane_ParamLimits

0xaf56,	// (0x000441b8) vkb2_top_candi_pane

0xe8a0,	// (0x00047b02) cell_vkb2_top_candi_pane_ParamLimits

0xe8a0,	// (0x00047b02) cell_vkb2_top_candi_pane

0x187a,	// (0x0003aadc) bg_popup_fep_char_preview_window_ParamLimits

0x187a,	// (0x0003aadc) bg_popup_fep_char_preview_window

0x1888,	// (0x0003aaea) popup_fep_char_preview_window_t1_ParamLimits

0x1888,	// (0x0003aaea) popup_fep_char_preview_window_t1

0x6a46,	// (0x0003fca8) bg_popup_fep_char_preview_window_g1

0x6a4e,	// (0x0003fcb0) bg_popup_fep_char_preview_window_g2

0x6a56,	// (0x0003fcb8) bg_popup_fep_char_preview_window_g3

0x6a5e,	// (0x0003fcc0) bg_popup_fep_char_preview_window_g4

0x6a66,	// (0x0003fcc8) bg_popup_fep_char_preview_window_g5

0x6a6e,	// (0x0003fcd0) bg_popup_fep_char_preview_window_g6

0x6a76,	// (0x0003fcd8) bg_popup_fep_char_preview_window_g7

0x6a7e,	// (0x0003fce0) bg_popup_fep_char_preview_window_g8

0x6a86,	// (0x0003fce8) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb8,	// (0x0004901a) bg_popup_fep_char_preview_window_g

0x0ee1,	// (0x0003a143) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ee1,	// (0x0003a143) cell_vkb2_top_candi_pane_g1

0x0eef,	// (0x0003a151) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0eef,	// (0x0003a151) cell_vkb2_top_candi_pane_g2

0x6a25,	// (0x0003fc87) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6a25,	// (0x0003fc87) cell_vkb2_top_candi_pane_g3

0x18ca,	// (0x0003ab2c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18ca,	// (0x0003ab2c) cell_vkb2_top_candi_pane_g4

0x4dfa,	// (0x0003e05c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4dfa,	// (0x0003e05c) cell_vkb2_top_candi_pane_g5

0x18eb,	// (0x0003ab4d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18eb,	// (0x0003ab4d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcd,	// (0x0004902f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcd,	// (0x0004902f) cell_vkb2_top_candi_pane_g

0x18f9,	// (0x0003ab5b) cell_vkb2_top_candi_pane_t1

0xa9aa,	// (0x00043c0c) aid_size_touch_slider_mark_ParamLimits

0xa9aa,	// (0x00043c0c) aid_size_touch_slider_mark

0xe5bd,	// (0x0004781f) grid_graphic2_catg_pane_ParamLimits

0xe5bd,	// (0x0004781f) grid_graphic2_catg_pane

0xe679,	// (0x000478db) popup_grid_graphic2_window_t1_ParamLimits

0xe679,	// (0x000478db) popup_grid_graphic2_window_t1

0xe68f,	// (0x000478f1) popup_grid_graphic2_window_t2_ParamLimits

0xe68f,	// (0x000478f1) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x00048fe8) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x00048fe8) popup_grid_graphic2_window_t

0xb5cb,	// (0x0004482d) bg_button_pane_cp05_ParamLimits

0xe818,	// (0x00047a7a) cell_graphic2_control_pane_g1_ParamLimits

0xe906,	// (0x00047b68) cell_graphic2_catg_pane_ParamLimits

0xe906,	// (0x00047b68) cell_graphic2_catg_pane

0xb431,	// (0x00044693) bg_button_pane_cp12

0xe918,	// (0x00047b7a) cell_graphic2_catg_pane_g1

0x5f81,	// (0x0003f1e3) cell_tb_ext_pane_t1_ParamLimits

0x16b4,	// (0x0003a916) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16b4,	// (0x0003a916) vkb2_top_cell_right_narrow_pane

0x16cc,	// (0x0003a92e) vkb2_top_cell_right_wide_pane_ParamLimits

0x16cc,	// (0x0003a92e) vkb2_top_cell_right_wide_pane

0x0c7c,	// (0x00039ede) bg_vkb2_func_pane_ParamLimits

0x0c7c,	// (0x00039ede) bg_vkb2_func_pane

0x173d,	// (0x0003a99f) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c7c,	// (0x00039ede) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c7c,	// (0x00039ede) bg_vkb2_fuc_pane_cp03

0x179b,	// (0x0003a9fd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x207e,	// (0x0003b2e0) bg_vkb2_func_pane_g1

0x2086,	// (0x0003b2e8) bg_vkb2_func_pane_g2

0x2096,	// (0x0003b2f8) bg_vkb2_func_pane_g3

0x208e,	// (0x0003b2f0) bg_vkb2_func_pane_g4

0x209e,	// (0x0003b300) bg_vkb2_func_pane_g5

0x20a6,	// (0x0003b308) bg_vkb2_func_pane_g6

0x20ae,	// (0x0003b310) bg_vkb2_func_pane_g7

0x20b6,	// (0x0003b318) bg_vkb2_func_pane_g8

0x2076,	// (0x0003b2d8) bg_vkb2_func_pane_g9

0x0008,

0xfdda,	// (0x0004903c) bg_vkb2_func_pane_g

0x0c7c,	// (0x00039ede) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c7c,	// (0x00039ede) bg_vkb2_fuc_pane_cp01

0x173d,	// (0x0003a99f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x173d,	// (0x0003a99f) vkb2_top_cell_right_wide_pane_g1

0x0c7c,	// (0x00039ede) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c7c,	// (0x00039ede) bg_vkb2_fuc_pane_cp02

0x179b,	// (0x0003a9fd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x179b,	// (0x0003a9fd) vkb2_top_cell_right_narrow_pane_g1

0xd382,	// (0x000465e4) aid_touch_area_decrease_ParamLimits

0xd382,	// (0x000465e4) aid_touch_area_decrease

0xd3bc,	// (0x0004661e) aid_touch_area_increase_ParamLimits

0xd3bc,	// (0x0004661e) aid_touch_area_increase

0xd3e4,	// (0x00046646) aid_touch_area_mute_ParamLimits

0xd3e4,	// (0x00046646) aid_touch_area_mute

0xd40c,	// (0x0004666e) aid_touch_area_slider_ParamLimits

0xd40c,	// (0x0004666e) aid_touch_area_slider

0xd44c,	// (0x000466ae) popup_slider_window_g4_ParamLimits

0xd44c,	// (0x000466ae) popup_slider_window_g4

0xd474,	// (0x000466d6) popup_slider_window_g5_ParamLimits

0xd474,	// (0x000466d6) popup_slider_window_g5

0xd4a8,	// (0x0004670a) popup_slider_window_g6_ParamLimits

0xd4a8,	// (0x0004670a) popup_slider_window_g6

0x5d5d,	// (0x0003efbf) popup_slider_window_t2_ParamLimits

0x5d5d,	// (0x0003efbf) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x00048f36) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x00048f36) popup_slider_window_t

0xd4c4,	// (0x00046726) slider_pane_ParamLimits

0xd4c4,	// (0x00046726) slider_pane

0x6aa9,	// (0x0003fd0b) slider_pane_g1_ParamLimits

0x6aa9,	// (0x0003fd0b) slider_pane_g1

0x6abd,	// (0x0003fd1f) slider_pane_g2_ParamLimits

0x6abd,	// (0x0003fd1f) slider_pane_g2

0x6ad3,	// (0x0003fd35) slider_pane_g3_ParamLimits

0x6ad3,	// (0x0003fd35) slider_pane_g3

0x0003,

0xfded,	// (0x0004904f) slider_pane_g_ParamLimits

0xfded,	// (0x0004904f) slider_pane_g

0xa0e1,	// (0x00043343) popup_tb_float_extension_window_ParamLimits

0xa0e1,	// (0x00043343) popup_tb_float_extension_window

0x6aff,	// (0x0003fd61) aid_size_cell_tb_float_ext

0xb431,	// (0x00044693) bg_popup_sub_window_cp28

0xe921,	// (0x00047b83) grid_tb_float_ext_pane

0xe92b,	// (0x00047b8d) cell_tb_float_ext_pane_ParamLimits

0xe92b,	// (0x00047b8d) cell_tb_float_ext_pane

0xe945,	// (0x00047ba7) cell_tb_float_ext_pane_g1

0xe94e,	// (0x00047bb0) grid_highlight_pane_cp12

0xaaf2,	// (0x00043d54) cell_last_hwr_side_pane_ParamLimits

0xaaf2,	// (0x00043d54) cell_last_hwr_side_pane

0x46aa,	// (0x0003d90c) cell_last_hwr_side_pane_g1

0x6b41,	// (0x0003fda3) cell_last_hwr_side_pane_g2

0x0001,

0xfdf6,	// (0x00049058) cell_last_hwr_side_pane_g

0xb0bd,	// (0x0004431f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb0bd,	// (0x0004431f) vkb2_area_bottom_space_btn_pane

0x0ee1,	// (0x0003a143) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x65da,	// (0x0003f83c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x18f9,	// (0x0003ab5b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1918,	// (0x0003ab7a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1918,	// (0x0003ab7a) vkb2_area_bottom_space_btn_pane_g1

0x1952,	// (0x0003abb4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1952,	// (0x0003abb4) vkb2_area_bottom_space_btn_pane_g2

0x1988,	// (0x0003abea) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1988,	// (0x0003abea) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfb,	// (0x0004905d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfb,	// (0x0004905d) vkb2_area_bottom_space_btn_pane_g

0x0d3f,	// (0x00039fa1) cel_fep_hwr_func_pane_ParamLimits

0x0d3f,	// (0x00039fa1) cel_fep_hwr_func_pane

0xaac7,	// (0x00043d29) cell_hwr_side_button_pane_ParamLimits

0xaac7,	// (0x00043d29) cell_hwr_side_button_pane

0xd65d,	// (0x000468bf) aid_area_touch_clock_ParamLimits

0xb5cb,	// (0x0004482d) bg_uniindi_top_pane_ParamLimits

0xd66f,	// (0x000468d1) uniindi_top_pane_g1_ParamLimits

0xd685,	// (0x000468e7) uniindi_top_pane_g2_ParamLimits

0xd691,	// (0x000468f3) uniindi_top_pane_g3_ParamLimits

0x5ffb,	// (0x0003f25d) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x00048f6e) uniindi_top_pane_g_ParamLimits

0xd6a2,	// (0x00046904) uniindi_top_pane_t1_ParamLimits

0xb5cb,	// (0x0004482d) bg_vkb2_func_pane_cp01_ParamLimits

0xb5cb,	// (0x0004482d) bg_vkb2_func_pane_cp01

0x6b4a,	// (0x0003fdac) cel_fep_hwr_func_pane_g1_ParamLimits

0x6b4a,	// (0x0003fdac) cel_fep_hwr_func_pane_g1

0xb5cb,	// (0x0004482d) bg_vkb2_func_pane_cp02_ParamLimits

0xb5cb,	// (0x0004482d) bg_vkb2_func_pane_cp02

0x6b4a,	// (0x0003fdac) cell_hwr_side_button_pane_g1_ParamLimits

0x6b4a,	// (0x0003fdac) cell_hwr_side_button_pane_g1

0x1efa,	// (0x0003b15c) status_pane_g4_ParamLimits

0x1efa,	// (0x0003b15c) status_pane_g4

0x1f14,	// (0x0003b176) status_pane_t1

0x43e5,	// (0x0003d647) form2_midp_gauge_slider_cont_pane

0x43ed,	// (0x0003d64f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb4d,	// (0x00045daf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb5f,	// (0x00045dc1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x00048d35) form2_midp_gauge_slider_pane_t_ParamLimits

0x4423,	// (0x0003d685) form2_midp_slider_pane_ParamLimits

0x12d2,	// (0x0003a534) aid_size_cell_func_vkb2_ParamLimits

0x12d2,	// (0x0003a534) aid_size_cell_func_vkb2

0x6aeb,	// (0x0003fd4d) slider_pane_g4_ParamLimits

0x6aeb,	// (0x0003fd4d) slider_pane_g4

0xb126,	// (0x00044388) form2_midp_gauge_slider_pane_t2_cp01

0xb134,	// (0x00044396) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb134,	// (0x00044396) form2_midp_gauge_slider_pane_t3_cp01

0x19fd,	// (0x0003ac5f) form2_midp_slider_pane_cp01

0xb431,	// (0x00044693) navi_smil_pane

0x6b83,	// (0x0003fde5) navi_smil_pane_g1

0x6b8b,	// (0x0003fded) navi_smil_pane_t1

0x6b58,	// (0x0003fdba) form2_midp_slider_pane_g1

0x6b61,	// (0x0003fdc3) form2_midp_slider_pane_g2

0x6b69,	// (0x0003fdcb) form2_midp_slider_pane_g3

0x6b58,	// (0x0003fdba) form2_midp_slider_pane_g4

0xe957,	// (0x00047bb9) form2_midp_slider_pane_g5

0x0004,

0xfe04,	// (0x00049066) form2_midp_slider_pane_g

0x19c2,	// (0x0003ac24) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19c2,	// (0x0003ac24) vkb2_area_bottom_space_btn_pane_g4

0xa319,	// (0x0004357b) lc0_navi_pane_ParamLimits

0xa319,	// (0x0004357b) lc0_navi_pane

0xa383,	// (0x000435e5) lc0_stat_indi_pane_ParamLimits

0xa383,	// (0x000435e5) lc0_stat_indi_pane

0xa398,	// (0x000435fa) ls0_title_pane_ParamLimits

0xa398,	// (0x000435fa) ls0_title_pane

0xb857,	// (0x00044ab9) bg_popup_sub_pane_cp14_ParamLimits

0xd644,	// (0x000468a6) list_uniindi_pane_ParamLimits

0xd650,	// (0x000468b2) uniindi_top_pane_ParamLimits

0x6045,	// (0x0003f2a7) list_single_uniindi_pane_g1_ParamLimits

0x6058,	// (0x0003f2ba) list_single_uniindi_pane_t1_ParamLimits

0xb151,	// (0x000443b3) lc0_stat_clock_pane_ParamLimits

0xb151,	// (0x000443b3) lc0_stat_clock_pane

0xe962,	// (0x00047bc4) lc0_stat_indi_pane_g1_ParamLimits

0xe962,	// (0x00047bc4) lc0_stat_indi_pane_g1

0xe96f,	// (0x00047bd1) lc0_stat_indi_pane_g2_ParamLimits

0xe96f,	// (0x00047bd1) lc0_stat_indi_pane_g2

0x0001,

0xfe0f,	// (0x00049071) lc0_stat_indi_pane_g_ParamLimits

0xfe0f,	// (0x00049071) lc0_stat_indi_pane_g

0xb161,	// (0x000443c3) lc0_uni_indicator_pane_ParamLimits

0xb161,	// (0x000443c3) lc0_uni_indicator_pane

0xe97c,	// (0x00047bde) ls0_title_pane_g1_ParamLimits

0xe97c,	// (0x00047bde) ls0_title_pane_g1

0xe990,	// (0x00047bf2) ls0_title_pane_t1_ParamLimits

0xe990,	// (0x00047bf2) ls0_title_pane_t1

0xb171,	// (0x000443d3) lc0_uni_indicator_pane_g1_ParamLimits

0xb171,	// (0x000443d3) lc0_uni_indicator_pane_g1

0x6bfd,	// (0x0003fe5f) lc0_stat_clock_pane_t1

0xef9a,	// (0x000481fc) main_ai5_pane

0x6c0b,	// (0x0003fe6d) ai5_sk_pane_ParamLimits

0x6c0b,	// (0x0003fe6d) ai5_sk_pane

0xe9be,	// (0x00047c20) cell_ai5_widget_pane_ParamLimits

0xe9be,	// (0x00047c20) cell_ai5_widget_pane

0x6cd8,	// (0x0003ff3a) aid_size_cell_widget_grid

0x6ce6,	// (0x0003ff48) bg_ai5_widget_pane_ParamLimits

0x6ce6,	// (0x0003ff48) bg_ai5_widget_pane

0x6d62,	// (0x0003ffc4) cell_ai5_widget_pane_g2

0x6d76,	// (0x0003ffd8) cell_ai5_widget_pane_g3

0x6d90,	// (0x0003fff2) cell_ai5_widget_pane_g4

0x6da0,	// (0x00040002) cell_ai5_widget_pane_g5

0x6db0,	// (0x00040012) cell_ai5_widget_pane_g6

0x6dbc,	// (0x0004001e) cell_ai5_widget_pane_g7

0x6e28,	// (0x0004008a) cell_ai5_widget_pane_t1_ParamLimits

0x6e28,	// (0x0004008a) cell_ai5_widget_pane_t1

0x6e45,	// (0x000400a7) cell_ai5_widget_pane_t2_ParamLimits

0x6e45,	// (0x000400a7) cell_ai5_widget_pane_t2

0x6e5d,	// (0x000400bf) cell_ai5_widget_pane_t3_ParamLimits

0x6e5d,	// (0x000400bf) cell_ai5_widget_pane_t3

0x6e75,	// (0x000400d7) cell_ai5_widget_pane_t4_ParamLimits

0x6e75,	// (0x000400d7) cell_ai5_widget_pane_t4

0xea2a,	// (0x00047c8c) cell_ai5_widget_pane_t5_ParamLimits

0xea2a,	// (0x00047c8c) cell_ai5_widget_pane_t5

0x6eba,	// (0x0004011c) cell_ai5_widget_pane_t6_ParamLimits

0x6eba,	// (0x0004011c) cell_ai5_widget_pane_t6

0x6ecc,	// (0x0004012e) cell_ai5_widget_pane_t7_ParamLimits

0x6ecc,	// (0x0004012e) cell_ai5_widget_pane_t7

0x6eeb,	// (0x0004014d) cell_ai5_widget_pane_t8_ParamLimits

0x6eeb,	// (0x0004014d) cell_ai5_widget_pane_t8

0x000b,

0xfe2f,	// (0x00049091) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x00049091) cell_ai5_widget_pane_t

0x6f6f,	// (0x000401d1) grid_ai5_widget_pane

0xb857,	// (0x00044ab9) highlight_cell_ai5_widget_pane_ParamLimits

0xb857,	// (0x00044ab9) highlight_cell_ai5_widget_pane

0xea4a,	// (0x00047cac) ai5_sk_left_pane

0xea54,	// (0x00047cb6) ai5_sk_middle_pane

0xea5e,	// (0x00047cc0) ai5_sk_right_pane

0x6f9b,	// (0x000401fd) bg_ai5_widget_pane_g1_ParamLimits

0x6f9b,	// (0x000401fd) bg_ai5_widget_pane_g1

0x6fa7,	// (0x00040209) bg_ai5_widget_pane_g2_ParamLimits

0x6fa7,	// (0x00040209) bg_ai5_widget_pane_g2

0x6fb3,	// (0x00040215) bg_ai5_widget_pane_g3_ParamLimits

0x6fb3,	// (0x00040215) bg_ai5_widget_pane_g3

0x6fbf,	// (0x00040221) bg_ai5_widget_pane_g4_ParamLimits

0x6fbf,	// (0x00040221) bg_ai5_widget_pane_g4

0x6fcb,	// (0x0004022d) bg_ai5_widget_pane_g5_ParamLimits

0x6fcb,	// (0x0004022d) bg_ai5_widget_pane_g5

0x6fd7,	// (0x00040239) bg_ai5_widget_pane_g6_ParamLimits

0x6fd7,	// (0x00040239) bg_ai5_widget_pane_g6

0x6fe3,	// (0x00040245) bg_ai5_widget_pane_g7_ParamLimits

0x6fe3,	// (0x00040245) bg_ai5_widget_pane_g7

0x6fef,	// (0x00040251) bg_ai5_widget_pane_g8_ParamLimits

0x6fef,	// (0x00040251) bg_ai5_widget_pane_g8

0x6ffb,	// (0x0004025d) bg_ai5_widget_pane_g9_ParamLimits

0x6ffb,	// (0x0004025d) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x000490aa) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x000490aa) bg_ai5_widget_pane_g

0x702d,	// (0x0004028f) cell_shortcut_ai5_widget_pane_ParamLimits

0x702d,	// (0x0004028f) cell_shortcut_ai5_widget_pane

0xc0f2,	// (0x00045354) bg_cell_shortcut_ai5_widget_pane

0x703e,	// (0x000402a0) cell_grid_ai5_widget_pane_g1

0xc0f2,	// (0x00045354) highlight_cell_shortcut_ai5_widget_pane

0x207e,	// (0x0003b2e0) ai5_sk_left_pane_g1

0x7047,	// (0x000402a9) ai5_sk_left_pane_g2

0x704f,	// (0x000402b1) ai5_sk_left_pane_g3

0x7057,	// (0x000402b9) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x000490bd) ai5_sk_left_pane_g

0x705f,	// (0x000402c1) ai5_sk_left_pane_t1

0x2086,	// (0x0003b2e8) ai5_sk_right_pane_g1

0x706d,	// (0x000402cf) ai5_sk_right_pane_g2

0x7075,	// (0x000402d7) ai5_sk_right_pane_g3

0x707d,	// (0x000402df) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x000490c6) ai5_sk_right_pane_g

0x7085,	// (0x000402e7) ai5_sk_right_pane_t1

0x2086,	// (0x0003b2e8) ai5_sk_middle_pane_g1

0x207e,	// (0x0003b2e0) ai5_sk_middle_pane_g2

0x209e,	// (0x0003b300) ai5_sk_middle_pane_g3

0x7075,	// (0x000402d7) ai5_sk_middle_pane_g4

0x704f,	// (0x000402b1) ai5_sk_middle_pane_g5

0x7093,	// (0x000402f5) ai5_sk_middle_pane_g6

0xea68,	// (0x00047cca) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x000490cf) ai5_sk_middle_pane_g

0xa205,	// (0x00043467) aid_touch_area_size_lc0_ParamLimits

0xa205,	// (0x00043467) aid_touch_area_size_lc0

0x0f10,	// (0x0003a172) cell_hwr_candidate_pane_t1_ParamLimits

0x042d,	// (0x0003968f) aid_touch_navi_pane

0xa491,	// (0x000436f3) status_dt_navi_pane_ParamLimits

0xa491,	// (0x000436f3) status_dt_navi_pane

0xa4a9,	// (0x0004370b) status_dt_sta_pane_ParamLimits

0xa4a9,	// (0x0004370b) status_dt_sta_pane

0xea70,	// (0x00047cd2) dt_sta_controll_pane

0xea7d,	// (0x00047cdf) dt_sta_indi_pane

0xea8a,	// (0x00047cec) dt_sta_title_pane

0xb5cb,	// (0x0004482d) bg_dt_sta_indi_pane_ParamLimits

0xb5cb,	// (0x0004482d) bg_dt_sta_indi_pane

0xea9c,	// (0x00047cfe) dt_sta_battery_pane

0xeaa4,	// (0x00047d06) dt_sta_indi_pane_g1

0x70e5,	// (0x00040347) dt_sta_indi_pane_g2

0x70ee,	// (0x00040350) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x000490de) dt_sta_indi_pane_g

0x70f7,	// (0x00040359) dt_sta_signal_pane

0xb857,	// (0x00044ab9) bg_dt_sta_title_pane_ParamLimits

0xb857,	// (0x00044ab9) bg_dt_sta_title_pane

0x2ed8,	// (0x0003c13a) dt_sta_title_pane_g1

0xeaad,	// (0x00047d0f) dt_sta_title_pane_t1_ParamLimits

0xeaad,	// (0x00047d0f) dt_sta_title_pane_t1

0xb431,	// (0x00044693) bg_dt_sta_control_pane

0xeac2,	// (0x00047d24) dt_sta_controll_pane_g1

0xeacb,	// (0x00047d2d) bg_dt_sta_title_pane_g1

0xead4,	// (0x00047d36) bg_dt_sta_title_pane_g2

0xeadd,	// (0x00047d3f) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x000490e5) bg_dt_sta_title_pane_g

0x46aa,	// (0x0003d90c) bg_dt_sta_indi_pane_g1

0x7139,	// (0x0004039b) dt_sta_signal_pane_g1

0x7141,	// (0x000403a3) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x000490ec) dt_sta_signal_pane_g

0x7149,	// (0x000403ab) dt_sta_battery_pane_g1

0x7152,	// (0x000403b4) dt_sta_battery_pane_t1

0x46aa,	// (0x0003d90c) bg_dt_sta_control_pane_g1

0xbd2c,	// (0x00044f8e) fep_china_uni_eep_pane

0xbd34,	// (0x00044f96) fep_china_uni_entry_pane_ParamLimits

0xbd44,	// (0x00044fa6) popup_fep_china_uni_window_g1_ParamLimits

0xbd54,	// (0x00044fb6) popup_fep_china_uni_window_g2_ParamLimits

0xbd54,	// (0x00044fb6) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x0004894b) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x0004894b) popup_fep_china_uni_window_g

0x7161,	// (0x000403c3) fep_china_uni_eep_pane_g1

0x7169,	// (0x000403cb) fep_china_uni_eep_pane_t1

0x6b7a,	// (0x0003fddc) aid_touch_area_size_smil_player

0x0583,	// (0x000397e5) lc0_clock_pane

0x1f08,	// (0x0003b16a) status_pane_g5_ParamLimits

0x1f08,	// (0x0003b16a) status_pane_g5

0x9c3d,	// (0x00042e9f) popup_keymap_window

0x1ec6,	// (0x0003b128) status_icon_pane

0x6d76,	// (0x0003ffd8) cell_ai5_widget_pane_g3_ParamLimits

0x6d90,	// (0x0003fff2) cell_ai5_widget_pane_g4_ParamLimits

0x6da0,	// (0x00040002) cell_ai5_widget_pane_g5_ParamLimits

0x6dc8,	// (0x0004002a) cell_ai5_widget_pane_g8_ParamLimits

0x6dc8,	// (0x0004002a) cell_ai5_widget_pane_g8

0x6ddc,	// (0x0004003e) cell_ai5_widget_pane_g9_ParamLimits

0x6ddc,	// (0x0004003e) cell_ai5_widget_pane_g9

0x6df0,	// (0x00040052) cell_ai5_widget_pane_g10_ParamLimits

0x6df0,	// (0x00040052) cell_ai5_widget_pane_g10

0x7178,	// (0x000403da) status_icon_pane_g1

0xb431,	// (0x00044693) bg_popup_sub_pane_cp13

0x7180,	// (0x000403e2) popup_keymap_window_t1

0x98fd,	// (0x00042b5f) control_pane_g6_ParamLimits

0x98fd,	// (0x00042b5f) control_pane_g6

0x990a,	// (0x00042b6c) control_pane_g7_ParamLimits

0x990a,	// (0x00042b6c) control_pane_g7

0x9917,	// (0x00042b79) control_pane_g8_ParamLimits

0x9917,	// (0x00042b79) control_pane_g8

0xea70,	// (0x00047cd2) dt_sta_controll_pane_ParamLimits

0xea7d,	// (0x00047cdf) dt_sta_indi_pane_ParamLimits

0xea8a,	// (0x00047cec) dt_sta_title_pane_ParamLimits

0xb7a2,	// (0x00044a04) aid_size_touch_scroll_bar_cale

0x8695,	// (0x000418f7) popup_discreet_window_ParamLimits

0x8695,	// (0x000418f7) popup_discreet_window

0x86e7,	// (0x00041949) popup_sk_window

0x271c,	// (0x0003b97e) bg_popup_sub_pane_cp28_ParamLimits

0x271c,	// (0x0003b97e) bg_popup_sub_pane_cp28

0x718e,	// (0x000403f0) popup_discreet_window_g1_ParamLimits

0x718e,	// (0x000403f0) popup_discreet_window_g1

0xeae6,	// (0x00047d48) popup_discreet_window_t1_ParamLimits

0xeae6,	// (0x00047d48) popup_discreet_window_t1

0x71cc,	// (0x0004042e) popup_discreet_window_t2_ParamLimits

0x71cc,	// (0x0004042e) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x000490f1) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x000490f1) popup_discreet_window_t

0x1a34,	// (0x0003ac96) popup_sk_window_g1

0x1a3e,	// (0x0003aca0) popup_sk_window_g2

0x0001,

0xfe96,	// (0x000490f8) popup_sk_window_g

0xb19c,	// (0x000443fe) popup_sk_window_t1

0xb1aa,	// (0x0004440c) popup_sk_window_t1_copy1

0x6d62,	// (0x0003ffc4) cell_ai5_widget_pane_g2_ParamLimits

0x6efd,	// (0x0004015f) cell_ai5_widget_pane_t9_ParamLimits

0x6efd,	// (0x0004015f) cell_ai5_widget_pane_t9

0xb431,	// (0x00044693) main_fep_fshwr2_pane

0xb1b8,	// (0x0004441a) aid_fshwr2_btn_pane

0xb1cc,	// (0x0004442e) aid_fshwr2_syb_pane

0xb1e0,	// (0x00044442) aid_fshwr2_txt_pane

0xb1f0,	// (0x00044452) fshwr2_func_candi_pane

0xb210,	// (0x00044472) fshwr2_hwr_syb_pane

0xb234,	// (0x00044496) fshwr2_icf_pane

0xef9a,	// (0x000481fc) fshwr2_icf_bg_pane

0x1af6,	// (0x0003ad58) fshwr2_icf_pane_t1_ParamLimits

0x1af6,	// (0x0003ad58) fshwr2_icf_pane_t1

0xbca9,	// (0x00044f0b) fshwr2_func_candi_pane_g1

0xeb04,	// (0x00047d66) fshwr2_func_candi_row_pane_ParamLimits

0xeb04,	// (0x00047d66) fshwr2_func_candi_row_pane

0xb264,	// (0x000444c6) cell_fshwr2_syb_pane_ParamLimits

0xb264,	// (0x000444c6) cell_fshwr2_syb_pane

0x1b32,	// (0x0003ad94) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b32,	// (0x0003ad94) fshwr2_hwr_syb_pane_g1

0xef9a,	// (0x000481fc) bg_popup_call_pane_cp01

0xb28a,	// (0x000444ec) fshwr2_func_candi_cell_pane_ParamLimits

0xb28a,	// (0x000444ec) fshwr2_func_candi_cell_pane

0x2505,	// (0x0003b767) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2505,	// (0x0003b767) fshwr2_func_candi_cell_bg_pane

0xb2d5,	// (0x00044537) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb2d5,	// (0x00044537) fshwr2_func_candi_cell_pane_g1

0xb30c,	// (0x0004456e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb30c,	// (0x0004456e) fshwr2_func_candi_cell_pane_t1

0xef9a,	// (0x000481fc) bg_button_pane_cp08

0xb999,	// (0x00044bfb) cell_fshwr2_syb_bg_pane

0xb327,	// (0x00044589) cell_fshwr2_syb_bg_pane_g1

0xb33a,	// (0x0004459c) cell_fshwr2_syb_bg_pane_t1

0xb857,	// (0x00044ab9) main_tmo_pane

0xc572,	// (0x000457d4) uni_indicator_pane_g1_ParamLimits

0xc588,	// (0x000457ea) uni_indicator_pane_g2_ParamLimits

0xc59e,	// (0x00045800) uni_indicator_pane_g3_ParamLimits

0x3245,	// (0x0003c4a7) uni_indicator_pane_g4_ParamLimits

0x3245,	// (0x0003c4a7) uni_indicator_pane_g4

0x3259,	// (0x0003c4bb) uni_indicator_pane_g5_ParamLimits

0x3259,	// (0x0003c4bb) uni_indicator_pane_g5

0x3259,	// (0x0003c4bb) uni_indicator_pane_g6_ParamLimits

0x3259,	// (0x0003c4bb) uni_indicator_pane_g6

0xf8e8,	// (0x00048b4a) uni_indicator_pane_g_ParamLimits

0xd364,	// (0x000465c6) popup_tmo_note_window_ParamLimits

0xd364,	// (0x000465c6) popup_tmo_note_window

0x12b4,	// (0x0003a516) fshwr2_bg_pane

0xb2fd,	// (0x0004455f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb2fd,	// (0x0004455f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x000490fd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x000490fd) fshwr2_func_candi_cell_pane_g

0x0ec9,	// (0x0003a12b) bg_popup_window_pane_cp01

0x1be8,	// (0x0003ae4a) bg_popup_window_pane_g1_cp01

0x7245,	// (0x000404a7) bg_popup_window_pane_cp22_ParamLimits

0x7245,	// (0x000404a7) bg_popup_window_pane_cp22

0xeb27,	// (0x00047d89) listscroll_tmo_link_pane_ParamLimits

0xeb27,	// (0x00047d89) listscroll_tmo_link_pane

0x7293,	// (0x000404f5) popup_tmo_note_window_g1_ParamLimits

0x7293,	// (0x000404f5) popup_tmo_note_window_g1

0xeb67,	// (0x00047dc9) tmo_note_info_pane_ParamLimits

0xeb67,	// (0x00047dc9) tmo_note_info_pane

0xeb81,	// (0x00047de3) list_tmo_note_info_pane_g1_ParamLimits

0xeb81,	// (0x00047de3) list_tmo_note_info_pane_g1

0x72d1,	// (0x00040533) list_tmo_note_info_pane_g2_ParamLimits

0x72d1,	// (0x00040533) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x00049102) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x00049102) list_tmo_note_info_pane_g

0x72ed,	// (0x0004054f) list_tmo_note_info_text_pane_ParamLimits

0x72ed,	// (0x0004054f) list_tmo_note_info_text_pane

0x736e,	// (0x000405d0) list_tmo_link_pane

0x737b,	// (0x000405dd) scroll_pane_cp20

0x7388,	// (0x000405ea) list_single_tmo_link_pane_ParamLimits

0x7388,	// (0x000405ea) list_single_tmo_link_pane

0x7398,	// (0x000405fa) list_single_tmo_link_pane_t1

0x73a6,	// (0x00040608) list_tmo_note_info_text_pane_t1_ParamLimits

0x73a6,	// (0x00040608) list_tmo_note_info_text_pane_t1

0x925d,	// (0x000424bf) aid_size_touch_scroll_bar_cp01_ParamLimits

0x925d,	// (0x000424bf) aid_size_touch_scroll_bar_cp01

0x915d,	// (0x000423bf) aid_size_touch_slider_marker

0x86d7,	// (0x00041939) popup_settings_window_ParamLimits

0x86d7,	// (0x00041939) popup_settings_window

0xdd26,	// (0x00046f88) popup_candi_list_indi_window

0x042d,	// (0x0003968f) aid_touch_navi_pane_ParamLimits

0x120f,	// (0x0003a471) rs_clock_indi_pane

0x1218,	// (0x0003a47a) sctrl_sk_bottom_pane_ParamLimits

0x1229,	// (0x0003a48b) sctrl_sk_top_pane_ParamLimits

0xadfa,	// (0x0004405c) popup_fep_tooltip_window

0x6cd8,	// (0x0003ff3a) aid_size_cell_widget_grid_ParamLimits

0x6d4d,	// (0x0003ffaf) cell_ai5_widget_pane_g1_ParamLimits

0x6d4d,	// (0x0003ffaf) cell_ai5_widget_pane_g1

0x6db0,	// (0x00040012) cell_ai5_widget_pane_g6_ParamLimits

0x6dbc,	// (0x0004001e) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe14,	// (0x00049076) cell_ai5_widget_pane_g_ParamLimits

0xfe14,	// (0x00049076) cell_ai5_widget_pane_g

0x6f2c,	// (0x0004018e) cell_ai5_widget_pane_t10_ParamLimits

0x6f2c,	// (0x0004018e) cell_ai5_widget_pane_t10

0x6f6f,	// (0x000401d1) grid_ai5_widget_pane_ParamLimits

0x7007,	// (0x00040269) cell_contacts_ai5_widget_pane_ParamLimits

0x7007,	// (0x00040269) cell_contacts_ai5_widget_pane

0x71e1,	// (0x00040443) popup_discreet_window_t3_ParamLimits

0x71e1,	// (0x00040443) popup_discreet_window_t3

0xb250,	// (0x000444b2) popup_fshwr2_char_preview_window_ParamLimits

0xb250,	// (0x000444b2) popup_fshwr2_char_preview_window

0xeb98,	// (0x00047dfa) tmo_note_info_pane_t1

0xebad,	// (0x00047e0f) tmo_note_info_pane_t2

0xebc4,	// (0x00047e26) tmo_note_info_pane_t3

0x734a,	// (0x000405ac) tmo_note_info_pane_t4

0x735c,	// (0x000405be) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x00049107) tmo_note_info_pane_t

0x736e,	// (0x000405d0) list_tmo_link_pane_ParamLimits

0x737b,	// (0x000405dd) scroll_pane_cp20_ParamLimits

0xef9a,	// (0x000481fc) bg_popup_fep_char_preview_window_cp01

0xebd9,	// (0x00047e3b) popup_fshwr2_char_preview_window_t1

0x73cd,	// (0x0004062f) popup_candi_list_indi_window_g1

0x73d6,	// (0x00040638) bg_cell_contacts_ai5_widget_pane

0x73e2,	// (0x00040644) cell_contacts_ai5_widget_pane_g1

0x4d4f,	// (0x0003dfb1) cell_contacts_ai5_widget_pane_g2

0x73f7,	// (0x00040659) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x00049112) cell_contacts_ai5_widget_pane_g

0x7403,	// (0x00040665) cell_contacts_ai5_widget_pane_t1

0xb857,	// (0x00044ab9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x747a,	// (0x000406dc) settings_container_pane

0xc0f2,	// (0x00045354) listscroll_set_pane_copy1

0x3d86,	// (0x0003cfe8) scroll_pane_cp121_copy1

0x24c1,	// (0x0003b723) set_content_pane_copy1

0xebe7,	// (0x00047e49) aid_height_set_list_copy1_ParamLimits

0xebe7,	// (0x00047e49) aid_height_set_list_copy1

0x3451,	// (0x0003c6b3) aid_size_parent_copy1_ParamLimits

0x3451,	// (0x0003c6b3) aid_size_parent_copy1

0xebf3,	// (0x00047e55) button_value_adjust_pane_cp6_copy1_ParamLimits

0xebf3,	// (0x00047e55) button_value_adjust_pane_cp6_copy1

0xb999,	// (0x00044bfb) list_highlight_pane_cp2_copy1_ParamLimits

0xb999,	// (0x00044bfb) list_highlight_pane_cp2_copy1

0xec07,	// (0x00047e69) list_set_pane_copy1_ParamLimits

0xec07,	// (0x00047e69) list_set_pane_copy1

0x7415,	// (0x00040677) main_pane_set_t1_copy1_ParamLimits

0x7415,	// (0x00040677) main_pane_set_t1_copy1

0x744f,	// (0x000406b1) main_pane_set_t2_copy1_ParamLimits

0x744f,	// (0x000406b1) main_pane_set_t2_copy1

0xecb4,	// (0x00047f16) main_pane_set_t3_copy1

0xecc2,	// (0x00047f24) main_pane_set_t4_copy1

0x746e,	// (0x000406d0) set_content_pane_g1_copy1_ParamLimits

0x746e,	// (0x000406d0) set_content_pane_g1_copy1

0xecd0,	// (0x00047f32) setting_code_pane_copy1

0x7577,	// (0x000407d9) setting_slider_graphic_pane_copy1

0x7577,	// (0x000407d9) setting_slider_pane_copy1

0x757f,	// (0x000407e1) setting_text_pane_copy1

0x757f,	// (0x000407e1) setting_volume_pane_copy1

0xecd0,	// (0x00047f32) settings_code_pane_cp2_copy1

0xecd8,	// (0x00047f3a) settings_code_pane_cp_copy1_ParamLimits

0xecd8,	// (0x00047f3a) settings_code_pane_cp_copy1

0xb350,	// (0x000445b2) volume_set_pane_copy1

0xecec,	// (0x00047f4e) volume_set_pane_g10_copy1

0xecf4,	// (0x00047f56) volume_set_pane_g1_copy1

0xecfc,	// (0x00047f5e) volume_set_pane_g2_copy1

0xed04,	// (0x00047f66) volume_set_pane_g3_copy1

0xed0c,	// (0x00047f6e) volume_set_pane_g4_copy1

0xed14,	// (0x00047f76) volume_set_pane_g5_copy1

0xed1c,	// (0x00047f7e) volume_set_pane_g6_copy1

0xed24,	// (0x00047f86) volume_set_pane_g7_copy1

0xed2c,	// (0x00047f8e) volume_set_pane_g8_copy1

0xed34,	// (0x00047f96) volume_set_pane_g9_copy1

0xb4a1,	// (0x00044703) bg_set_opt_pane_cp_copy1_ParamLimits

0xb4a1,	// (0x00044703) bg_set_opt_pane_cp_copy1

0xb358,	// (0x000445ba) setting_slider_pane_t1_copy1_ParamLimits

0xb358,	// (0x000445ba) setting_slider_pane_t1_copy1

0xb377,	// (0x000445d9) setting_slider_pane_t2_copy1_ParamLimits

0xb377,	// (0x000445d9) setting_slider_pane_t2_copy1

0xb391,	// (0x000445f3) setting_slider_pane_t3_copy1_ParamLimits

0xb391,	// (0x000445f3) setting_slider_pane_t3_copy1

0xb3a9,	// (0x0004460b) slider_set_pane_copy1_ParamLimits

0xb3a9,	// (0x0004460b) slider_set_pane_copy1

0xb8af,	// (0x00044b11) set_opt_bg_pane_g1_copy2

0xb8b7,	// (0x00044b19) set_opt_bg_pane_g2_copy2

0x75eb,	// (0x0004084d) set_opt_bg_pane_g3_copy2

0xb8c7,	// (0x00044b29) set_opt_bg_pane_g4_copy2

0xb8cf,	// (0x00044b31) set_opt_bg_pane_g5_copy2

0xb8d7,	// (0x00044b39) set_opt_bg_pane_g6_copy2

0xed3c,	// (0x00047f9e) set_opt_bg_pane_g7_copy2

0x75fd,	// (0x0004085f) set_opt_bg_pane_g8_copy2

0x7607,	// (0x00040869) set_opt_bg_pane_g9_copy2

0xb3bf,	// (0x00044621) aid_size_touch_slider_mark_copy1_ParamLimits

0xb3bf,	// (0x00044621) aid_size_touch_slider_mark_copy1

0xed44,	// (0x00047fa6) slider_set_pane_g1_copy1

0x1c74,	// (0x0003aed6) slider_set_pane_g2_copy1

0xa9be,	// (0x00043c20) slider_set_pane_g3_copy1_ParamLimits

0xa9be,	// (0x00043c20) slider_set_pane_g3_copy1

0xa9d2,	// (0x00043c34) slider_set_pane_g4_copy1_ParamLimits

0xa9d2,	// (0x00043c34) slider_set_pane_g4_copy1

0xa9ea,	// (0x00043c4c) slider_set_pane_g5_copy1_ParamLimits

0xa9ea,	// (0x00043c4c) slider_set_pane_g5_copy1

0xa9be,	// (0x00043c20) slider_set_pane_g6_copy1_ParamLimits

0xa9be,	// (0x00043c20) slider_set_pane_g6_copy1

0xb3d3,	// (0x00044635) slider_set_pane_g7_copy1_ParamLimits

0xb3d3,	// (0x00044635) slider_set_pane_g7_copy1

0xb445,	// (0x000446a7) bg_set_opt_pane_cp2_copy1

0xed4d,	// (0x00047faf) setting_slider_graphic_pane_g1_copy1

0xed56,	// (0x00047fb8) setting_slider_graphic_pane_t1_copy1

0xed66,	// (0x00047fc8) setting_slider_graphic_pane_t2_copy1

0xed76,	// (0x00047fd8) slider_set_pane_cp_copy1

0x7653,	// (0x000408b5) input_focus_pane_cp1_copy1

0x765c,	// (0x000408be) list_set_text_pane_copy1

0x7664,	// (0x000408c6) setting_text_pane_g1_copy1

0xed86,	// (0x00047fe8) set_text_pane_t1_copy1

0x7653,	// (0x000408b5) input_focus_pane_cp2_copy1

0x7664,	// (0x000408c6) setting_code_pane_g1_copy1

0x766d,	// (0x000408cf) setting_code_pane_t1_copy1

0x767b,	// (0x000408dd) list_set_graphic_pane_copy1

0xb445,	// (0x000446a7) bg_set_opt_pane_cp4_copy1

0xbe84,	// (0x000450e6) list_set_graphic_pane_g1_copy1_ParamLimits

0xbe84,	// (0x000450e6) list_set_graphic_pane_g1_copy1

0x768f,	// (0x000408f1) list_set_graphic_pane_g2_copy1

0xbe9c,	// (0x000450fe) list_set_graphic_pane_t1_copy1_ParamLimits

0xbe9c,	// (0x000450fe) list_set_graphic_pane_t1_copy1

0x46aa,	// (0x0003d90c) rs_clock_indi_pane_g1

0x7697,	// (0x000408f9) rs_clock_indi_pane_t1

0x76a5,	// (0x00040907) rs_indi_pane

0x76ad,	// (0x0004090f) rs_indi_pane_g1

0x76b6,	// (0x00040918) rs_indi_pane_g2

0x73cd,	// (0x0004062f) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x00049119) rs_indi_pane_g

0xc0f2,	// (0x00045354) bg_popup_preview_window_pane_cp03

0x76bf,	// (0x00040921) popup_fep_tooltip_window_t1

0xd00a,	// (0x0004626c) popup_note2_window_g2_ParamLimits

0xd00a,	// (0x0004626c) popup_note2_window_g2

0x0001,

0xfc4b,	// (0x00048ead) popup_note2_window_g_ParamLimits

0xfc4b,	// (0x00048ead) popup_note2_window_g

0x5821,	// (0x0003ea83) bg_popup_sub_pane_cp11_ParamLimits

0x582e,	// (0x0003ea90) cell_ai3_links_pane_g1_ParamLimits

0x5845,	// (0x0003eaa7) cell_ai3_links_pane_t1

0xed86,	// (0x00047fe8) set_text_pane_t1_copy1_ParamLimits

0x96c3,	// (0x00042925) cell_graphic_popup_pane_cp2_ParamLimits

0x96c3,	// (0x00042925) cell_graphic_popup_pane_cp2

0xeda2,	// (0x00048004) cell_graphic_popup_pane_g1_cp2

0xb725,	// (0x00044987) cell_graphic_popup_pane_g2_cp2

0x76d5,	// (0x00040937) cell_graphic_popup_pane_g3_cp2

0xedaa,	// (0x0004800c) cell_graphic_popup_pane_t2_cp2

0xb736,	// (0x00044998) grid_highlight_pane_cp3_cp2

0xbb26,	// (0x00044d88) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb857,	// (0x00044ab9) main_tmo_pane_ParamLimits

0xd358,	// (0x000465ba) popup_tmo_big_image_note_window

0x6d3c,	// (0x0003ff9e) cell_ai5_widget_list_pane

0x6d44,	// (0x0003ffa6) cell_ai5_widget_lrg_icon_pane

0xeb98,	// (0x00047dfa) tmo_note_info_pane_t1_ParamLimits

0xebad,	// (0x00047e0f) tmo_note_info_pane_t2_ParamLimits

0xebc4,	// (0x00047e26) tmo_note_info_pane_t3_ParamLimits

0x734a,	// (0x000405ac) tmo_note_info_pane_t4_ParamLimits

0x735c,	// (0x000405be) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x00049107) tmo_note_info_pane_t_ParamLimits

0x747a,	// (0x000406dc) settings_container_pane_ParamLimits

0xed7e,	// (0x00047fe0) indicator_popup_pane_cp5

0xed7e,	// (0x00047fe0) indicator_popup_pane_cp6

0x767b,	// (0x000408dd) list_set_graphic_pane_copy1_ParamLimits

0xb431,	// (0x00044693) bg_popup_window_pane_cp23

0x76eb,	// (0x0004094d) popup_tmo_big_image_note_window_g1

0x76f4,	// (0x00040956) popup_tmo_big_image_note_window_t1

0x7704,	// (0x00040966) popup_tmo_big_image_note_window_t2

0x7714,	// (0x00040976) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x00049120) popup_tmo_big_image_note_window_t

0x46aa,	// (0x0003d90c) cell_ai5_widget_lrg_icon_pane_g1

0x7724,	// (0x00040986) cell_ai5_widget_lrg_icon_pane_t1

0x7732,	// (0x00040994) cell_ai5_widget_list_row_pane_ParamLimits

0x7732,	// (0x00040994) cell_ai5_widget_list_row_pane

0x7749,	// (0x000409ab) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7749,	// (0x000409ab) cell_ai5_widget_list_row_pane_g1

0xedb8,	// (0x0004801a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xedb8,	// (0x0004801a) cell_ai5_widget_list_row_pane_t1

0x7781,	// (0x000409e3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7781,	// (0x000409e3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x00049127) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x00049127) cell_ai5_widget_list_row_pane_t

0xef9a,	// (0x000481fc) main_fep_vtchi_ss_pane

0x77d1,	// (0x00040a33) popup_fep_char_pre_window

0x77d9,	// (0x00040a3b) popup_fep_ituss_window

0xee13,	// (0x00048075) popup_fep_vkbss_window

0xb999,	// (0x00044bfb) grid_vkbss_keypad_pane_ParamLimits

0xb999,	// (0x00044bfb) grid_vkbss_keypad_pane

0x7845,	// (0x00040aa7) ituss_keypad_pane

0x1c9e,	// (0x0003af00) aid_vkbss_key_offset_ParamLimits

0x1c9e,	// (0x0003af00) aid_vkbss_key_offset

0xb3e9,	// (0x0004464b) cell_vkbss_key_pane_ParamLimits

0xb3e9,	// (0x0004464b) cell_vkbss_key_pane

0x7854,	// (0x00040ab6) bg_cell_vkbss_key_g1_ParamLimits

0x7854,	// (0x00040ab6) bg_cell_vkbss_key_g1

0xee20,	// (0x00048082) cell_vkbss_key_3p_pane_ParamLimits

0xee20,	// (0x00048082) cell_vkbss_key_3p_pane

0xee56,	// (0x000480b8) cell_vkbss_key_g1_ParamLimits

0xee56,	// (0x000480b8) cell_vkbss_key_g1

0xee8c,	// (0x000480ee) cell_vkbss_key_t1_ParamLimits

0xee8c,	// (0x000480ee) cell_vkbss_key_t1

0x1cde,	// (0x0003af40) cell_ituss_key_pane_ParamLimits

0x1cde,	// (0x0003af40) cell_ituss_key_pane

0x7928,	// (0x00040b8a) bg_cell_ituss_key_g1_ParamLimits

0x7928,	// (0x00040b8a) bg_cell_ituss_key_g1

0x7934,	// (0x00040b96) cell_ituss_key_pane_g1_ParamLimits

0x7934,	// (0x00040b96) cell_ituss_key_pane_g1

0x1cef,	// (0x0003af51) cell_ituss_key_pane_g2_ParamLimits

0x1cef,	// (0x0003af51) cell_ituss_key_pane_g2

0x0005,

0xfecc,	// (0x0004912e) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x0004912e) cell_ituss_key_pane_g

0x1d73,	// (0x0003afd5) cell_ituss_key_t1_ParamLimits

0x1d73,	// (0x0003afd5) cell_ituss_key_t1

0x1dad,	// (0x0003b00f) cell_ituss_key_t2_ParamLimits

0x1dad,	// (0x0003b00f) cell_ituss_key_t2

0x1dde,	// (0x0003b040) cell_ituss_key_t3_ParamLimits

0x1dde,	// (0x0003b040) cell_ituss_key_t3

0x1dad,	// (0x0003b00f) cell_ituss_key_t4_ParamLimits

0x1dad,	// (0x0003b00f) cell_ituss_key_t4

0x0004,

0xfed9,	// (0x0004913b) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0004913b) cell_ituss_key_t

0xeee8,	// (0x0004814a) cell_vkbss_key_3p_pane_g1

0xeef0,	// (0x00048152) cell_vkbss_key_3p_pane_g2

0xeef8,	// (0x0004815a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee4,	// (0x00049146) cell_vkbss_key_3p_pane_g

0xc0f2,	// (0x00045354) bg_popup_fep_char_preview_window_cp02

0x7972,	// (0x00040bd4) popup_fep_char_pre_window_t1

0xea20,	// (0x00047c82) main_ai5_sk_pane

0x73d6,	// (0x00040638) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x73e2,	// (0x00040644) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4d4f,	// (0x0003dfb1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x73f7,	// (0x00040659) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x00049112) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7403,	// (0x00040665) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb857,	// (0x00044ab9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xef00,	// (0x00048162) main_ai5_sk_pane_g1

0xa885,	// (0x00043ae7) popup_query_code_window_g1

0xee04,	// (0x00048066) popup_fep_vkb_icf_pane

0x781c,	// (0x00040a7e) popup_fep_vtchi_icf_pane

0xb999,	// (0x00044bfb) bg_icf_pane

0xb999,	// (0x00044bfb) list_vkb_icf_pane

0x7989,	// (0x00040beb) bg_icf_pane_cp01

0x799c,	// (0x00040bfe) vtchi_icf_list_pane

0xef55,	// (0x000481b7) list_vkb_icf_pane_t1_ParamLimits

0xef55,	// (0x000481b7) list_vkb_icf_pane_t1

0x7a26,	// (0x00040c88) vtchi_icf_list_pane_t1_ParamLimits

0x7a26,	// (0x00040c88) vtchi_icf_list_pane_t1

0x77d9,	// (0x00040a3b) popup_fep_ituss_window_ParamLimits

0x781c,	// (0x00040a7e) popup_fep_vtchi_icf_pane_ParamLimits

0x7845,	// (0x00040aa7) ituss_keypad_pane_ParamLimits

0x1c92,	// (0x0003aef4) ituss_sks_pane

0xb999,	// (0x00044bfb) bg_icf_pane_ParamLimits

0xede9,	// (0x0004804b) icf_edit_indi_pane_ParamLimits

0xede9,	// (0x0004804b) icf_edit_indi_pane

0xb999,	// (0x00044bfb) list_vkb_icf_pane_ParamLimits

0x7989,	// (0x00040beb) bg_icf_pane_cp01_ParamLimits

0x77c4,	// (0x00040a26) icf_edit_indi_pane_cp01_ParamLimits

0x77c4,	// (0x00040a26) icf_edit_indi_pane_cp01

0x79a4,	// (0x00040c06) vtchi_query_pane

0x6b4a,	// (0x0003fdac) icf_edit_indi_pane_g1_ParamLimits

0x6b4a,	// (0x0003fdac) icf_edit_indi_pane_g1

0xef6d,	// (0x000481cf) icf_edit_indi_pane_g2_ParamLimits

0xef6d,	// (0x000481cf) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x00049171) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x00049171) icf_edit_indi_pane_g

0xef81,	// (0x000481e3) icf_edit_indi_pane_t1

0x7a47,	// (0x00040ca9) bg_input_focus_pane_cp042

0xb799,	// (0x000449fb) vtchi_button_pane

0x7a50,	// (0x00040cb2) vtchi_query_pane_t1

0x7a5e,	// (0x00040cc0) vtchi_query_pane_t2

0x7a6c,	// (0x00040cce) vtchi_query_pane_t3

0x0002,

0xfefe,	// (0x00049160) vtchi_query_pane_t

0xef9a,	// (0x000481fc) bg_button_pane_cp13

0x7a7a,	// (0x00040cdc) vtchi_button_pane_g1

0x1e21,	// (0x0003b083) ituss_sks_pane_g1

0x1e2c,	// (0x0003b08e) ituss_sks_pane_g2

0x0001,

0xff05,	// (0x00049167) ituss_sks_pane_g

0x7a82,	// (0x00040ce4) ituss_sks_pane_t1

0x7a90,	// (0x00040cf2) ituss_sks_pane_t2

0x0001,

0xff0a,	// (0x0004916c) ituss_sks_pane_t

0x411e,	// (0x0003d380) indicator_nsta_pane_cp_g1

0x4127,	// (0x0003d389) indicator_nsta_pane_cp_g2

0x412f,	// (0x0003d391) indicator_nsta_pane_cp_g3

0x4137,	// (0x0003d399) indicator_nsta_pane_cp_g4

0x4127,	// (0x0003d389) indicator_nsta_pane_cp_g5

0x412f,	// (0x0003d391) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x00048ceb) indicator_nsta_pane_cp_g

0xe7f9,	// (0x00047a5b) cell_graphic2_pane_t2_ParamLimits

0xe7f9,	// (0x00047a5b) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x00048ffd) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x00048ffd) cell_graphic2_pane_t

0xe830,	// (0x00047a92) cell_graphic2_control_pane_t1

0x9523,	// (0x00042785) signal_pane_g3_ParamLimits

0x9523,	// (0x00042785) signal_pane_g3

0x9537,	// (0x00042799) signal_pane_g4_ParamLimits

0x9537,	// (0x00042799) signal_pane_g4

0x7793,	// (0x000409f5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7793,	// (0x000409f5) cell_ai5_widget_list_row_pane_t3

0x7948,	// (0x00040baa) cell_ituss_key_pane_t1_ParamLimits

0x7948,	// (0x00040baa) cell_ituss_key_pane_t1

0x2190,	// (0x0003b3f2) form_field_data_wide_pane_vc_t2_ParamLimits

0x2190,	// (0x0003b3f2) form_field_data_wide_pane_vc_t2

0x21a4,	// (0x0003b406) form_field_data_wide_pane_vc_t3_ParamLimits

0x21a4,	// (0x0003b406) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00048a32) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00048a32) form_field_data_wide_pane_vc_t

0x3dc8,	// (0x0003d02a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3dc8,	// (0x0003d02a) form_field_slider_wide_pane_vc_t3

0x3ea6,	// (0x0003d108) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3ea6,	// (0x0003d108) form_field_popup_wide_pane_vc_t2

0x3ebd,	// (0x0003d11f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3ebd,	// (0x0003d11f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x00048cda) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x00048cda) form_field_popup_wide_pane_vc_t

0xb1b8,	// (0x0004441a) aid_fshwr2_btn_pane_ParamLimits

0xb1cc,	// (0x0004442e) aid_fshwr2_syb_pane_ParamLimits

0xb1e0,	// (0x00044442) aid_fshwr2_txt_pane_ParamLimits

0x12b4,	// (0x0003a516) fshwr2_bg_pane_ParamLimits

0xb1f0,	// (0x00044452) fshwr2_func_candi_pane_ParamLimits

0xb210,	// (0x00044472) fshwr2_hwr_syb_pane_ParamLimits

0xb234,	// (0x00044496) fshwr2_icf_pane_ParamLimits

0xe138,	// (0x0004739a) list_double_graphic_pane_vc_g4_ParamLimits

0xe138,	// (0x0004739a) list_double_graphic_pane_vc_g4

0x1d0f,	// (0x0003af71) cell_ituss_key_pane_g3_ParamLimits

0x1d0f,	// (0x0003af71) cell_ituss_key_pane_g3

0x1e0f,	// (0x0003b071) cell_ituss_key_t5_ParamLimits

0x1e0f,	// (0x0003b071) cell_ituss_key_t5

0xee13,	// (0x00048075) popup_fep_vkbss_window_ParamLimits

0x4e80,	// (0x0003e0e2) aid_cell_ai5_quarter

0xef81,	// (0x000481e3) icf_edit_indi_pane_t1_ParamLimits

0x8b00,	// (0x00041d62) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8b00,	// (0x00041d62) aid_tch_indicator_popup_pane_cp2

0x8b13,	// (0x00041d75) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8b13,	// (0x00041d75) aid_tch_query_popup_data_pane_cp2

0x2505,	// (0x0003b767) aid_tch_query_popup_pane_ParamLimits

0x2505,	// (0x0003b767) aid_tch_query_popup_pane

0x2505,	// (0x0003b767) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2505,	// (0x0003b767) aid_tch_query_popup_data_pane_cp1

0xb999,	// (0x00044bfb) cell_fshwr2_syb_bg_pane_ParamLimits

0xb327,	// (0x00044589) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb33a,	// (0x0004459c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xee04,	// (0x00048066) popup_fep_vkb_icf_pane_ParamLimits

0xb11e,	// (0x00044380) bg_popup_fep_char_preview_window_g10

0x6e04,	// (0x00040066) cell_ai5_widget_pane_g11_ParamLimits

0x6e04,	// (0x00040066) cell_ai5_widget_pane_g11

0x6e10,	// (0x00040072) cell_ai5_widget_pane_g12_ParamLimits

0x6e10,	// (0x00040072) cell_ai5_widget_pane_g12

0x6e1c,	// (0x0004007e) cell_ai5_widget_pane_g13_ParamLimits

0x6e1c,	// (0x0004007e) cell_ai5_widget_pane_g13

0x6f4b,	// (0x000401ad) cell_ai5_widget_pane_t11_ParamLimits

0x6f4b,	// (0x000401ad) cell_ai5_widget_pane_t11

0x6f5d,	// (0x000401bf) cell_ai5_widget_pane_t12_ParamLimits

0x6f5d,	// (0x000401bf) cell_ai5_widget_pane_t12

0x1d1b,	// (0x0003af7d) cell_ituss_key_pane_g4_ParamLimits

0x1d1b,	// (0x0003af7d) cell_ituss_key_pane_g4

0x1d37,	// (0x0003af99) cell_ituss_key_pane_g5_ParamLimits

0x1d37,	// (0x0003af99) cell_ituss_key_pane_g5

0x1d53,	// (0x0003afb5) cell_ituss_key_pane_g6_ParamLimits

0x1d53,	// (0x0003afb5) cell_ituss_key_pane_g6

0x2076,	// (0x0003b2d8) bg_icf_pane_g1

0xef09,	// (0x0004816b) bg_icf_pane_g2

0xef13,	// (0x00048175) bg_icf_pane_g3

0xef1b,	// (0x0004817d) bg_icf_pane_g4

0xef25,	// (0x00048187) bg_icf_pane_g5

0xef2f,	// (0x00048191) bg_icf_pane_g6

0xef39,	// (0x0004819b) bg_icf_pane_g7

0xef41,	// (0x000481a3) bg_icf_pane_g8

0xef4b,	// (0x000481ad) bg_icf_pane_g9

0x0008,

0xfeeb,	// (0x0004914d) bg_icf_pane_g

0x7832,	// (0x00040a94) popup_hyb_candi_window_ParamLimits

0x7832,	// (0x00040a94) popup_hyb_candi_window

0x2102,	// (0x0003b364) bg_popup_sub_pane_cp01_ParamLimits

0x2102,	// (0x0003b364) bg_popup_sub_pane_cp01

0x7acb,	// (0x00040d2d) entry_hyb_candi_pane_ParamLimits

0x7acb,	// (0x00040d2d) entry_hyb_candi_pane

0x7ada,	// (0x00040d3c) grid_hyb_candi_pane_ParamLimits

0x7ada,	// (0x00040d3c) grid_hyb_candi_pane

0x7aef,	// (0x00040d51) grid_hyb_phrase_pane_ParamLimits

0x7aef,	// (0x00040d51) grid_hyb_phrase_pane

0x7afe,	// (0x00040d60) cell_hyb_candi_pane_ParamLimits

0x7afe,	// (0x00040d60) cell_hyb_candi_pane

0x7b21,	// (0x00040d83) cell_hyb_candi_scroll_pane

0xbca9,	// (0x00044f0b) cell_hyb_candi_pane_g1

0x7b2a,	// (0x00040d8c) cell_hyb_candi_pane_t1

0x7b38,	// (0x00040d9a) cell_hyb_phrase_pane

0xbca9,	// (0x00044f0b) cell_hyb_phrase_pane_g1

0x7b41,	// (0x00040da3) cell_hyb_phrase_pane_t1

0x7b4f,	// (0x00040db1) entry_hyb_candi_pane_t1

0xc0f2,	// (0x00045354) input_focus_pane_cp06

0x7b5d,	// (0x00040dbf) cell_hyb_candi_scroll_pane_g1

0x7b65,	// (0x00040dc7) cell_hyb_candi_scroll_pane_g1_aid

0x7b6d,	// (0x00040dcf) cell_hyb_candi_scroll_pane_g2

0x7b75,	// (0x00040dd7) cell_hyb_candi_scroll_pane_g2_aid

0x7b7d,	// (0x00040ddf) cell_hyb_candi_scroll_pane_g3

0x7b85,	// (0x00040de7) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

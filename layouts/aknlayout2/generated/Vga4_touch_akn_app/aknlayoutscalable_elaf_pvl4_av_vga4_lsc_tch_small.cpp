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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00025a35 };

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
0x9e4e,	// (0x0002f883) Screen

0x9e62,	// (0x0002f897) application_window_ParamLimits

0x9e62,	// (0x0002f897) application_window

0x9e7c,	// (0x0002f8b1) screen_g1

0x9eae,	// (0x0002f8e3) area_bottom_pane_ParamLimits

0x9eae,	// (0x0002f8e3) area_bottom_pane

0xf204,	// (0x00034c39) area_top_pane_ParamLimits

0xf204,	// (0x00034c39) area_top_pane

0xf298,	// (0x00034ccd) main_pane_ParamLimits

0xf298,	// (0x00034ccd) main_pane

0x9f6c,	// (0x0002f9a1) misc_graphics

0xb285,	// (0x00030cba) battery_pane_ParamLimits

0xb285,	// (0x00030cba) battery_pane

0x33ec,	// (0x00028e21) bg_status_flat_pane_g8

0x33f4,	// (0x00028e29) bg_status_flat_pane_g9

0x162e,	// (0x00027063) context_pane_ParamLimits

0x162e,	// (0x00027063) context_pane

0xb3fc,	// (0x00030e31) navi_pane_ParamLimits

0xb3fc,	// (0x00030e31) navi_pane

0xb486,	// (0x00030ebb) signal_pane_ParamLimits

0xb486,	// (0x00030ebb) signal_pane

0x0008,

0xf87a,	// (0x000352af) bg_status_flat_pane_g

0xb516,	// (0x00030f4b) status_pane_g1_ParamLimits

0xb516,	// (0x00030f4b) status_pane_g1

0xb52c,	// (0x00030f61) status_pane_g2_ParamLimits

0xb52c,	// (0x00030f61) status_pane_g2

0x186f,	// (0x000272a4) status_pane_g3_ParamLimits

0x186f,	// (0x000272a4) status_pane_g3

0x0004,

0xf7a6,	// (0x000351db) status_pane_g_ParamLimits

0xf7a6,	// (0x000351db) status_pane_g

0xb538,	// (0x00030f6d) title_pane_ParamLimits

0xb538,	// (0x00030f6d) title_pane

0xb59b,	// (0x00030fd0) uni_indicator_pane_ParamLimits

0xb59b,	// (0x00030fd0) uni_indicator_pane

0x0e4f,	// (0x00026884) bg_list_pane_ParamLimits

0x0e4f,	// (0x00026884) bg_list_pane

0x9bcb,	// (0x0002f600) find_pane

0xaacf,	// (0x00030504) listscroll_app_pane_ParamLimits

0xaacf,	// (0x00030504) listscroll_app_pane

0x0e83,	// (0x000268b8) listscroll_form_pane

0x9bd3,	// (0x0002f608) listscroll_gen_pane_ParamLimits

0x9bd3,	// (0x0002f608) listscroll_gen_pane

0x0e9f,	// (0x000268d4) listscroll_set_pane

0x3f8c,	// (0x000299c1) main_idle_act_pane

0x0944,	// (0x00026379) main_idle_trad_pane

0x0944,	// (0x00026379) main_list_empty_pane

0x0eb9,	// (0x000268ee) main_midp_pane

0x0ec5,	// (0x000268fa) main_pane_g1_ParamLimits

0x0ec5,	// (0x000268fa) main_pane_g1

0xaadf,	// (0x00030514) popup_ai_message_window_ParamLimits

0xaadf,	// (0x00030514) popup_ai_message_window

0xab7f,	// (0x000305b4) popup_fep_china_uni_window_ParamLimits

0xab7f,	// (0x000305b4) popup_fep_china_uni_window

0x0fe7,	// (0x00026a1c) popup_fep_japan_candidate_window_ParamLimits

0x0fe7,	// (0x00026a1c) popup_fep_japan_candidate_window

0x1011,	// (0x00026a46) popup_fep_japan_predictive_window_ParamLimits

0x1011,	// (0x00026a46) popup_fep_japan_predictive_window

0xabdf,	// (0x00030614) popup_find_window

0xabfc,	// (0x00030631) popup_grid_graphic_window_ParamLimits

0xabfc,	// (0x00030631) popup_grid_graphic_window

0x1082,	// (0x00026ab7) popup_large_graphic_colour_window

0xaca0,	// (0x000306d5) popup_menu_window_ParamLimits

0xaca0,	// (0x000306d5) popup_menu_window

0xae90,	// (0x000308c5) popup_note_image_window

0xae50,	// (0x00030885) popup_note_wait_window_ParamLimits

0xae50,	// (0x00030885) popup_note_wait_window

0xaea8,	// (0x000308dd) popup_note_window_ParamLimits

0xaea8,	// (0x000308dd) popup_note_window

0xaf56,	// (0x0003098b) popup_query_code_window_ParamLimits

0xaf56,	// (0x0003098b) popup_query_code_window

0x12ee,	// (0x00026d23) popup_query_data_code_window_ParamLimits

0x12ee,	// (0x00026d23) popup_query_data_code_window

0xaf96,	// (0x000309cb) popup_query_data_window_ParamLimits

0xaf96,	// (0x000309cb) popup_query_data_window

0xb02a,	// (0x00030a5f) popup_query_sat_info_window_ParamLimits

0xb02a,	// (0x00030a5f) popup_query_sat_info_window

0xb0d5,	// (0x00030b0a) popup_snote_single_graphic_window_ParamLimits

0xb0d5,	// (0x00030b0a) popup_snote_single_graphic_window

0xb0d5,	// (0x00030b0a) popup_snote_single_text_window_ParamLimits

0xb0d5,	// (0x00030b0a) popup_snote_single_text_window

0x1389,	// (0x00026dbe) popup_sub_window_general

0x14cf,	// (0x00026f04) popup_window_general_ParamLimits

0x14cf,	// (0x00026f04) popup_window_general

0x14e8,	// (0x00026f1d) power_save_pane

0xa93d,	// (0x00030372) control_pane_g1_ParamLimits

0xa93d,	// (0x00030372) control_pane_g1

0xa966,	// (0x0003039b) control_pane_g2_ParamLimits

0xa966,	// (0x0003039b) control_pane_g2

0x0cfc,	// (0x00026731) control_pane_g3_ParamLimits

0x0cfc,	// (0x00026731) control_pane_g3

0x0007,

0xf78e,	// (0x000351c3) control_pane_g_ParamLimits

0xf78e,	// (0x000351c3) control_pane_g

0xa9c8,	// (0x000303fd) control_pane_t1_ParamLimits

0xa9c8,	// (0x000303fd) control_pane_t1

0xaa26,	// (0x0003045b) control_pane_t2_ParamLimits

0xaa26,	// (0x0003045b) control_pane_t2

0x0002,

0xf79f,	// (0x000351d4) control_pane_t_ParamLimits

0xf79f,	// (0x000351d4) control_pane_t

0x0bcf,	// (0x00026604) navi_navi_volume_pane_cp1

0x0bd8,	// (0x0002660d) status_small_icon_pane

0x0be0,	// (0x00026615) status_small_pane_g1_ParamLimits

0x0be0,	// (0x00026615) status_small_pane_g1

0x0c14,	// (0x00026649) status_small_pane_g2_ParamLimits

0x0c14,	// (0x00026649) status_small_pane_g2

0x0c20,	// (0x00026655) status_small_pane_g3_ParamLimits

0x0c20,	// (0x00026655) status_small_pane_g3

0x0c2c,	// (0x00026661) status_small_pane_g4_ParamLimits

0x0c2c,	// (0x00026661) status_small_pane_g4

0x0c38,	// (0x0002666d) status_small_pane_g5_ParamLimits

0x0c38,	// (0x0002666d) status_small_pane_g5

0x0c47,	// (0x0002667c) status_small_pane_g6_ParamLimits

0x0c47,	// (0x0002667c) status_small_pane_g6

0x0007,

0xf77d,	// (0x000351b2) status_small_pane_g_ParamLimits

0xf77d,	// (0x000351b2) status_small_pane_g

0x0c77,	// (0x000266ac) status_small_pane_t1

0x0c9a,	// (0x000266cf) status_small_wait_pane_ParamLimits

0x0c9a,	// (0x000266cf) status_small_wait_pane

0xa713,	// (0x00030148) aid_levels_signal_ParamLimits

0xa713,	// (0x00030148) aid_levels_signal

0xa72b,	// (0x00030160) signal_pane_g1_ParamLimits

0xa72b,	// (0x00030160) signal_pane_g1

0xa746,	// (0x0003017b) signal_pane_g2_ParamLimits

0xa746,	// (0x0003017b) signal_pane_g2

0x0003,

0xf70e,	// (0x00035143) signal_pane_g_ParamLimits

0xf70e,	// (0x00035143) signal_pane_g

0xd60c,	// (0x00033041) context_pane_g1

0xa0a4,	// (0x0002fad9) title_pane_g1

0xa0e7,	// (0x0002fb1c) title_pane_t1

0xa173,	// (0x0002fba8) title_pane_t2

0xa199,	// (0x0002fbce) title_pane_t3

0x0002,

0xf55d,	// (0x00034f92) title_pane_t

0xb5c3,	// (0x00030ff8) aid_levels_battery_ParamLimits

0xb5c3,	// (0x00030ff8) aid_levels_battery

0xb5df,	// (0x00031014) battery_pane_g1_ParamLimits

0xb5df,	// (0x00031014) battery_pane_g1

0xb5fc,	// (0x00031031) battery_pane_g2_ParamLimits

0xb5fc,	// (0x00031031) battery_pane_g2

0x0001,

0xf7b1,	// (0x000351e6) battery_pane_g_ParamLimits

0xf7b1,	// (0x000351e6) battery_pane_g

0xba8b,	// (0x000314c0) uni_indicator_pane_g1

0xbaa2,	// (0x000314d7) uni_indicator_pane_g2

0xbab8,	// (0x000314ed) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00035357) uni_indicator_pane_g

0x07b2,	// (0x000261e7) navi_icon_pane_ParamLimits

0x07b2,	// (0x000261e7) navi_icon_pane

0x06f9,	// (0x0002612e) navi_midp_pane

0x07ce,	// (0x00026203) navi_navi_pane

0x07d8,	// (0x0002620d) navi_text_pane_ParamLimits

0x07d8,	// (0x0002620d) navi_text_pane

0x9e7c,	// (0x0002f8b1) status_small_wait_pane_g1

0xcd99,	// (0x000327ce) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00035352) status_small_wait_pane_g

0xb9f2,	// (0x00031427) navi_navi_icon_text_pane

0xb9fa,	// (0x0003142f) navi_navi_pane_g1_ParamLimits

0xb9fa,	// (0x0003142f) navi_navi_pane_g1

0xba0c,	// (0x00031441) navi_navi_pane_g2_ParamLimits

0xba0c,	// (0x00031441) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x00035320) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x00035320) navi_navi_pane_g

0x3a75,	// (0x000294aa) navi_navi_tabs_pane

0xba1e,	// (0x00031453) navi_navi_text_pane

0xb9f2,	// (0x00031427) navi_navi_volume_pane

0xb9e0,	// (0x00031415) navi_text_pane_t1

0xb9d4,	// (0x00031409) navi_icon_pane_g1

0x396c,	// (0x000293a1) navi_navi_text_pane_t1

0xb9af,	// (0x000313e4) navi_navi_volume_pane_g1

0xb9b7,	// (0x000313ec) volume_small_pane

0xb90b,	// (0x00031340) navi_navi_icon_text_pane_g1

0xb913,	// (0x00031348) navi_navi_icon_text_pane_t1

0x07ce,	// (0x00026203) navi_tabs_2_long_pane

0x07ce,	// (0x00026203) navi_tabs_2_pane

0x07ce,	// (0x00026203) navi_tabs_3_long_pane

0x07ce,	// (0x00026203) navi_tabs_3_pane

0x07ce,	// (0x00026203) navi_tabs_4_pane

0xb8c9,	// (0x000312fe) tabs_2_active_pane_ParamLimits

0xb8c9,	// (0x000312fe) tabs_2_active_pane

0xb8d9,	// (0x0003130e) tabs_2_passive_pane_ParamLimits

0xb8d9,	// (0x0003130e) tabs_2_passive_pane

0xb897,	// (0x000312cc) tabs_3_active_pane_ParamLimits

0xb897,	// (0x000312cc) tabs_3_active_pane

0xb8a7,	// (0x000312dc) tabs_3_passive_pane_ParamLimits

0xb8a7,	// (0x000312dc) tabs_3_passive_pane

0xb8b8,	// (0x000312ed) tabs_3_passive_pane_cp_ParamLimits

0xb8b8,	// (0x000312ed) tabs_3_passive_pane_cp

0xb853,	// (0x00031288) tabs_4_active_pane_ParamLimits

0xb853,	// (0x00031288) tabs_4_active_pane

0xb864,	// (0x00031299) tabs_4_passive_pane_ParamLimits

0xb864,	// (0x00031299) tabs_4_passive_pane

0xb875,	// (0x000312aa) tabs_4_passive_pane_cp_ParamLimits

0xb875,	// (0x000312aa) tabs_4_passive_pane_cp

0xb886,	// (0x000312bb) tabs_4_passive_pane_cp2_ParamLimits

0xb886,	// (0x000312bb) tabs_4_passive_pane_cp2

0xb82f,	// (0x00031264) tabs_2_long_active_pane_ParamLimits

0xb82f,	// (0x00031264) tabs_2_long_active_pane

0xb841,	// (0x00031276) tabs_2_long_passive_pane_ParamLimits

0xb841,	// (0x00031276) tabs_2_long_passive_pane

0xb7e4,	// (0x00031219) tabs_3_long_active_pane_ParamLimits

0xb7e4,	// (0x00031219) tabs_3_long_active_pane

0xb7fd,	// (0x00031232) tabs_3_long_passive_pane_ParamLimits

0xb7fd,	// (0x00031232) tabs_3_long_passive_pane

0xb816,	// (0x0003124b) tabs_3_long_passive_pane_cp_ParamLimits

0xb816,	// (0x0003124b) tabs_3_long_passive_pane_cp

0x1b77,	// (0x000275ac) volume_small_pane_g1

0xb793,	// (0x000311c8) volume_small_pane_g2

0xb79c,	// (0x000311d1) volume_small_pane_g3

0xb7a5,	// (0x000311da) volume_small_pane_g4

0xb7ae,	// (0x000311e3) volume_small_pane_g5

0xb7b7,	// (0x000311ec) volume_small_pane_g6

0xb7c0,	// (0x000311f5) volume_small_pane_g7

0xb7c9,	// (0x000311fe) volume_small_pane_g8

0xb7d2,	// (0x00031207) volume_small_pane_g9

0xb7db,	// (0x00031210) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x000352ec) volume_small_pane_g

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp2_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp2

0xa1b9,	// (0x0002fbee) tabs_3_active_pane_g1

0xa1c1,	// (0x0002fbf6) tabs_3_active_pane_t1

0xa1ab,	// (0x0002fbe0) bg_passive_tab_pane_cp2_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_passive_tab_pane_cp2

0xa1b9,	// (0x0002fbee) tabs_3_passive_pane_g1

0xa1c1,	// (0x0002fbf6) tabs_3_passive_pane_t1

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp3_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp3

0xa1d3,	// (0x0002fc08) tabs_4_active_pane_g1

0xa1db,	// (0x0002fc10) tabs_4_active_pane_t1

0xa1ab,	// (0x0002fbe0) bg_passive_tab_pane_cp3_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_passive_tab_pane_cp3

0xa1d3,	// (0x0002fc08) tabs_4_1_passive_pane_g1

0xa1db,	// (0x0002fc10) tabs_4_1_passive_pane_t1

0x0eb9,	// (0x000268ee) list_highlight_pane_cp2

0xbb4d,	// (0x00031582) list_set_pane_ParamLimits

0xbb4d,	// (0x00031582) list_set_pane

0xbc15,	// (0x0003164a) main_pane_set_t1_ParamLimits

0xbc15,	// (0x0003164a) main_pane_set_t1

0xbc35,	// (0x0003166a) main_pane_set_t2_ParamLimits

0xbc35,	// (0x0003166a) main_pane_set_t2

0xbc49,	// (0x0003167e) main_pane_set_t3_ParamLimits

0xbc49,	// (0x0003167e) main_pane_set_t3

0xbc5d,	// (0x00031692) main_pane_set_t4_ParamLimits

0xbc5d,	// (0x00031692) main_pane_set_t4

0x0003,

0xf987,	// (0x000353bc) main_pane_set_t_ParamLimits

0xf987,	// (0x000353bc) main_pane_set_t

0xbc71,	// (0x000316a6) setting_code_pane

0x40e0,	// (0x00029b15) setting_slider_graphic_pane

0x40e0,	// (0x00029b15) setting_slider_pane

0x40e0,	// (0x00029b15) setting_text_pane

0x40e0,	// (0x00029b15) setting_volume_pane

0xf4c1,	// (0x00034ef6) volume_set_pane

0xa1ed,	// (0x0002fc22) bg_set_opt_pane_cp

0xf4cb,	// (0x00034f00) setting_slider_pane_t1

0xf4e4,	// (0x00034f19) setting_slider_pane_t2

0xf4fe,	// (0x00034f33) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00034f99) setting_slider_pane_t

0xf516,	// (0x00034f4b) slider_set_pane

0x9f6c,	// (0x0002f9a1) bg_set_opt_pane_cp2

0xa1fb,	// (0x0002fc30) setting_slider_graphic_pane_g1

0xf52c,	// (0x00034f61) setting_slider_graphic_pane_t1

0xf53c,	// (0x00034f71) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00034fa0) setting_slider_graphic_pane_t

0xf54c,	// (0x00034f81) slider_set_pane_cp

0x9f6c,	// (0x0002f9a1) input_focus_pane_cp1

0x3f73,	// (0x000299a8) list_set_text_pane

0x9e7c,	// (0x0002f8b1) setting_text_pane_g1

0x9f6c,	// (0x0002f9a1) input_focus_pane_cp2

0x9e7c,	// (0x0002f8b1) setting_code_pane_g1

0xa204,	// (0x0002fc39) setting_code_pane_t1

0xeab9,	// (0x000344ee) set_text_pane_t1_ParamLimits

0xeab9,	// (0x000344ee) set_text_pane_t1

0xd12e,	// (0x00032b63) set_opt_bg_pane_g1

0xd136,	// (0x00032b6b) set_opt_bg_pane_g2

0x3f4b,	// (0x00029980) set_opt_bg_pane_g3

0xd146,	// (0x00032b7b) set_opt_bg_pane_g4

0xd14e,	// (0x00032b83) set_opt_bg_pane_g5

0xd156,	// (0x00032b8b) set_opt_bg_pane_g6

0x3f55,	// (0x0002998a) set_opt_bg_pane_g7

0x3f5f,	// (0x00029994) set_opt_bg_pane_g8

0x3f69,	// (0x0002999e) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x000353a9) set_opt_bg_pane_g

0x3f3e,	// (0x00029973) slider_set_pane_g1

0x1d5b,	// (0x00027790) slider_set_pane_g2

0x0006,

0xf965,	// (0x0003539a) slider_set_pane_g

0x1ce3,	// (0x00027718) volume_set_pane_g1

0x1ced,	// (0x00027722) volume_set_pane_g2

0x1cf7,	// (0x0002772c) volume_set_pane_g3

0x1d01,	// (0x00027736) volume_set_pane_g4

0x1d0b,	// (0x00027740) volume_set_pane_g5

0x1d15,	// (0x0002774a) volume_set_pane_g6

0x1d1f,	// (0x00027754) volume_set_pane_g7

0x1d29,	// (0x0002775e) volume_set_pane_g8

0x1d33,	// (0x00027768) volume_set_pane_g9

0x1d3d,	// (0x00027772) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00035372) volume_set_pane_g

0xa212,	// (0x0002fc47) indicator_pane_ParamLimits

0xa212,	// (0x0002fc47) indicator_pane

0xa23e,	// (0x0002fc73) main_idle_pane_g2_ParamLimits

0xa23e,	// (0x0002fc73) main_idle_pane_g2

0xa276,	// (0x0002fcab) main_pane_idle_g1_ParamLimits

0xa276,	// (0x0002fcab) main_pane_idle_g1

0xa2a4,	// (0x0002fcd9) popup_clock_digital_analogue_window_ParamLimits

0xa2a4,	// (0x0002fcd9) popup_clock_digital_analogue_window

0xa2bb,	// (0x0002fcf0) soft_indicator_pane_ParamLimits

0xa2bb,	// (0x0002fcf0) soft_indicator_pane

0xa2d7,	// (0x0002fd0c) wallpaper_pane_ParamLimits

0xa2d7,	// (0x0002fd0c) wallpaper_pane

0x9e7c,	// (0x0002f8b1) wallpaper_pane_g1

0xa2f1,	// (0x0002fd26) indicator_pane_g1_ParamLimits

0xa2f1,	// (0x0002fd26) indicator_pane_g1

0x439a,	// (0x00029dcf) navi_navi_icon_text_pane_srt_g1

0xa319,	// (0x0002fd4e) soft_indicator_pane_t1

0xcb2b,	// (0x00032560) aid_ps_area_pane

0xa333,	// (0x0002fd68) aid_ps_clock_pane

0xcb3c,	// (0x00032571) aid_ps_indicator_pane

0xcb48,	// (0x0003257d) indicator_ps_pane_ParamLimits

0xcb48,	// (0x0003257d) indicator_ps_pane

0xcb57,	// (0x0003258c) power_save_pane_g1_ParamLimits

0xcb57,	// (0x0003258c) power_save_pane_g1

0xcb63,	// (0x00032598) power_save_pane_g2_ParamLimits

0xcb63,	// (0x00032598) power_save_pane_g2

0xf1e4,	// (0x00034c19) aid_navinavi_width_pane

0xcb2b,	// (0x00032560) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00034fa5) power_save_pane_g_ParamLimits

0xf570,	// (0x00034fa5) power_save_pane_g

0xcb71,	// (0x000325a6) power_save_pane_t1_ParamLimits

0xcb71,	// (0x000325a6) power_save_pane_t1

0xa333,	// (0x0002fd68) aid_ps_clock_pane_ParamLimits

0xcb3c,	// (0x00032571) aid_ps_indicator_pane_ParamLimits

0xcb83,	// (0x000325b8) power_save_pane_t4_ParamLimits

0xcb83,	// (0x000325b8) power_save_pane_t4

0x0001,

0xf575,	// (0x00034faa) power_save_pane_t_ParamLimits

0xf575,	// (0x00034faa) power_save_pane_t

0xcbad,	// (0x000325e2) power_save_t3_ParamLimits

0xcbad,	// (0x000325e2) power_save_t3

0xcb98,	// (0x000325cd) power_save_t2_ParamLimits

0xcb98,	// (0x000325cd) power_save_t2

0xcbc2,	// (0x000325f7) indicator_ps_pane_g1

0xa341,	// (0x0002fd76) ai_gene_pane_ParamLimits

0xa341,	// (0x0002fd76) ai_gene_pane

0xa358,	// (0x0002fd8d) ai_links_pane_ParamLimits

0xa358,	// (0x0002fd8d) ai_links_pane

0xa370,	// (0x0002fda5) indicator_pane_cp1_ParamLimits

0xa370,	// (0x0002fda5) indicator_pane_cp1

0xa37f,	// (0x0002fdb4) main_pane_idle_g1_cp_ParamLimits

0xa37f,	// (0x0002fdb4) main_pane_idle_g1_cp

0xcbcb,	// (0x00032600) popup_ai_links_title_window

0xa397,	// (0x0002fdcc) soft_indicator_pane_cp1_ParamLimits

0xa397,	// (0x0002fdcc) soft_indicator_pane_cp1

0x3d24,	// (0x00029759) ai_links_pane_g1

0x3d2d,	// (0x00029762) grid_ai_links_pane

0xba82,	// (0x000314b7) ai_gene_pane_1

0x3d12,	// (0x00029747) ai_gene_pane_2

0x3d1b,	// (0x00029750) list_highlight_pane_cp4

0xba5e,	// (0x00031493) cell_ai_link_pane_ParamLimits

0xba5e,	// (0x00031493) cell_ai_link_pane

0x3ce1,	// (0x00029716) cell_ai_link_pane_g1

0xcd99,	// (0x000327ce) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0003534d) cell_ai_link_pane_g

0x9f6c,	// (0x0002f9a1) grid_highlight_cp2

0x9f6c,	// (0x0002f9a1) bg_popup_sub_pane_cp1

0xcbe2,	// (0x00032617) popup_ai_links_title_window_t1

0x3c2d,	// (0x00029662) ai_gene_pane_1_g1_ParamLimits

0x3c2d,	// (0x00029662) ai_gene_pane_1_g1

0x3c39,	// (0x0002966e) ai_gene_pane_1_g2_ParamLimits

0x3c39,	// (0x0002966e) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00035343) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00035343) ai_gene_pane_1_g

0x3c46,	// (0x0002967b) ai_gene_pane_1_t1_ParamLimits

0x3c46,	// (0x0002967b) ai_gene_pane_1_t1

0x3c7a,	// (0x000296af) grid_ai_soft_ind_pane

0x3c18,	// (0x0002964d) ai_gene_pane_2_t1_ParamLimits

0x3c18,	// (0x0002964d) ai_gene_pane_2_t1

0xa3ab,	// (0x0002fde0) main_pane_empty_t1_ParamLimits

0xa3ab,	// (0x0002fde0) main_pane_empty_t1

0xa3c3,	// (0x0002fdf8) main_pane_empty_t2_ParamLimits

0xa3c3,	// (0x0002fdf8) main_pane_empty_t2

0xa3d8,	// (0x0002fe0d) main_pane_empty_t3_ParamLimits

0xa3d8,	// (0x0002fe0d) main_pane_empty_t3

0xa3ea,	// (0x0002fe1f) main_pane_empty_t4_ParamLimits

0xa3ea,	// (0x0002fe1f) main_pane_empty_t4

0xa3fc,	// (0x0002fe31) main_pane_empty_t5_ParamLimits

0xa3fc,	// (0x0002fe31) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00034faf) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00034faf) main_pane_empty_t

0xd17f,	// (0x00032bb4) bg_popup_window_pane_ParamLimits

0xd17f,	// (0x00032bb4) bg_popup_window_pane

0x397a,	// (0x000293af) find_popup_pane_cp2_ParamLimits

0x397a,	// (0x000293af) find_popup_pane_cp2

0x3986,	// (0x000293bb) heading_pane_ParamLimits

0x3986,	// (0x000293bb) heading_pane

0x9f6c,	// (0x0002f9a1) bg_popup_sub_pane

0xb930,	// (0x00031365) bg_popup_window_pane_g1_ParamLimits

0xb930,	// (0x00031365) bg_popup_window_pane_g1

0xb93f,	// (0x00031374) bg_popup_window_pane_g2_ParamLimits

0xb93f,	// (0x00031374) bg_popup_window_pane_g2

0xb94b,	// (0x00031380) bg_popup_window_pane_g3_ParamLimits

0xb94b,	// (0x00031380) bg_popup_window_pane_g3

0xb957,	// (0x0003138c) bg_popup_window_pane_g4_ParamLimits

0xb957,	// (0x0003138c) bg_popup_window_pane_g4

0xb966,	// (0x0003139b) bg_popup_window_pane_g5_ParamLimits

0xb966,	// (0x0003139b) bg_popup_window_pane_g5

0xb976,	// (0x000313ab) bg_popup_window_pane_g6_ParamLimits

0xb976,	// (0x000313ab) bg_popup_window_pane_g6

0xb982,	// (0x000313b7) bg_popup_window_pane_g7_ParamLimits

0xb982,	// (0x000313b7) bg_popup_window_pane_g7

0xb991,	// (0x000313c6) bg_popup_window_pane_g8_ParamLimits

0xb991,	// (0x000313c6) bg_popup_window_pane_g8

0xb9a0,	// (0x000313d5) bg_popup_window_pane_g9_ParamLimits

0xb9a0,	// (0x000313d5) bg_popup_window_pane_g9

0x3960,	// (0x00029395) bg_popup_window_pane_g10_ParamLimits

0x3960,	// (0x00029395) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0003530b) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0003530b) bg_popup_window_pane_g

0x3889,	// (0x000292be) bg_popup_heading_pane_ParamLimits

0x3889,	// (0x000292be) bg_popup_heading_pane

0x1da1,	// (0x000277d6) tabs_4_passive_pane_cp_srt_ParamLimits

0x1da1,	// (0x000277d6) tabs_4_passive_pane_cp_srt

0x1db3,	// (0x000277e8) tabs_4_passive_pane_srt_ParamLimits

0x389d,	// (0x000292d2) heading_pane_g2

0x1db3,	// (0x000277e8) tabs_4_passive_pane_srt

0x2c36,	// (0x0002866b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2c36,	// (0x0002866b) bg_passive_tab_pane_cp3_srt

0x38a5,	// (0x000292da) heading_pane_t1_ParamLimits

0x38a5,	// (0x000292da) heading_pane_t1

0x38bc,	// (0x000292f1) heading_pane_t2_ParamLimits

0x38bc,	// (0x000292f1) heading_pane_t2

0x0001,

0xf8d1,	// (0x00035306) heading_pane_t_ParamLimits

0xf8d1,	// (0x00035306) heading_pane_t

0x33b4,	// (0x00028de9) bg_popup_heading_pane_g1

0x3463,	// (0x00028e98) bg_popup_heading_pane_g2

0x346d,	// (0x00028ea2) bg_popup_heading_pane_g3

0x3477,	// (0x00028eac) bg_popup_heading_pane_g4

0x3481,	// (0x00028eb6) bg_popup_heading_pane_g5

0x348b,	// (0x00028ec0) bg_popup_heading_pane_g6

0x3493,	// (0x00028ec8) bg_popup_heading_pane_g7

0x349b,	// (0x00028ed0) bg_popup_heading_pane_g8

0x34a5,	// (0x00028eda) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x000352c2) bg_popup_heading_pane_g

0x1a2a,	// (0x0002745f) bg_popup_sub_pane_g1

0x1a32,	// (0x00027467) bg_popup_sub_pane_g2

0x1a3a,	// (0x0002746f) bg_popup_sub_pane_g3

0x1a42,	// (0x00027477) bg_popup_sub_pane_g4

0x1a4a,	// (0x0002747f) bg_popup_sub_pane_g5

0x1a52,	// (0x00027487) bg_popup_sub_pane_g6

0x1a5a,	// (0x0002748f) bg_popup_sub_pane_g7

0x1a62,	// (0x00027497) bg_popup_sub_pane_g8

0x1a6a,	// (0x0002749f) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0003529c) bg_popup_sub_pane_g

0xa1ab,	// (0x0002fbe0) bg_popup_window_pane_cp5_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_popup_window_pane_cp5

0xcbff,	// (0x00032634) popup_note_window_g1_ParamLimits

0xcbff,	// (0x00032634) popup_note_window_g1

0xcc0b,	// (0x00032640) popup_note_window_t1_ParamLimits

0xcc0b,	// (0x00032640) popup_note_window_t1

0xcc21,	// (0x00032656) popup_note_window_t2_ParamLimits

0xcc21,	// (0x00032656) popup_note_window_t2

0xcc37,	// (0x0003266c) popup_note_window_t3_ParamLimits

0xcc37,	// (0x0003266c) popup_note_window_t3

0xcc4d,	// (0x00032682) popup_note_window_t4_ParamLimits

0xcc4d,	// (0x00032682) popup_note_window_t4

0xcc75,	// (0x000326aa) popup_note_window_t5_ParamLimits

0xcc75,	// (0x000326aa) popup_note_window_t5

0x0004,

0xf585,	// (0x00034fba) popup_note_window_t_ParamLimits

0xf585,	// (0x00034fba) popup_note_window_t

0xcc99,	// (0x000326ce) bg_popup_window_pane_cp6_ParamLimits

0xcc99,	// (0x000326ce) bg_popup_window_pane_cp6

0x3330,	// (0x00028d65) popup_note_image_window_g1_ParamLimits

0x3330,	// (0x00028d65) popup_note_image_window_g1

0x333c,	// (0x00028d71) popup_note_image_window_g2_ParamLimits

0x333c,	// (0x00028d71) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00035290) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00035290) popup_note_image_window_g

0x3355,	// (0x00028d8a) popup_note_image_window_t1_ParamLimits

0x3355,	// (0x00028d8a) popup_note_image_window_t1

0x336e,	// (0x00028da3) popup_note_image_window_t2_ParamLimits

0x336e,	// (0x00028da3) popup_note_image_window_t2

0x3387,	// (0x00028dbc) popup_note_image_window_t3_ParamLimits

0x3387,	// (0x00028dbc) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00035295) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00035295) popup_note_image_window_t

0x31f0,	// (0x00028c25) bg_popup_window_pane_cp7_ParamLimits

0x31f0,	// (0x00028c25) bg_popup_window_pane_cp7

0x3220,	// (0x00028c55) popup_note_wait_window_g1_ParamLimits

0x3220,	// (0x00028c55) popup_note_wait_window_g1

0x322c,	// (0x00028c61) popup_note_wait_window_g2_ParamLimits

0x322c,	// (0x00028c61) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0003527e) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0003527e) popup_note_wait_window_g

0x3244,	// (0x00028c79) popup_note_wait_window_t1_ParamLimits

0x3244,	// (0x00028c79) popup_note_wait_window_t1

0x326b,	// (0x00028ca0) popup_note_wait_window_t2_ParamLimits

0x326b,	// (0x00028ca0) popup_note_wait_window_t2

0x3289,	// (0x00028cbe) popup_note_wait_window_t3_ParamLimits

0x3289,	// (0x00028cbe) popup_note_wait_window_t3

0x329c,	// (0x00028cd1) popup_note_wait_window_t4_ParamLimits

0x329c,	// (0x00028cd1) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00035285) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00035285) popup_note_wait_window_t

0x32c1,	// (0x00028cf6) wait_bar_pane_ParamLimits

0x32c1,	// (0x00028cf6) wait_bar_pane

0x9f6c,	// (0x0002f9a1) wait_anim_pane

0x9f6c,	// (0x0002f9a1) wait_border_pane

0x9e7c,	// (0x0002f8b1) wait_anim_pane_g1

0x9e7c,	// (0x0002f8b1) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003513e) wait_anim_pane_g

0x3194,	// (0x00028bc9) wait_border_pane_g1

0x319f,	// (0x00028bd4) wait_border_pane_g2

0x31a8,	// (0x00028bdd) wait_border_pane_g3

0x0002,

0xf842,	// (0x00035277) wait_border_pane_g

0x2ffe,	// (0x00028a33) bg_popup_window_pane_cp16_ParamLimits

0x2ffe,	// (0x00028a33) bg_popup_window_pane_cp16

0x30fe,	// (0x00028b33) indicator_popup_pane_cp4_ParamLimits

0x30fe,	// (0x00028b33) indicator_popup_pane_cp4

0x3112,	// (0x00028b47) popup_query_data_window_t1_ParamLimits

0x3112,	// (0x00028b47) popup_query_data_window_t1

0x3124,	// (0x00028b59) popup_query_data_window_t2_ParamLimits

0x3124,	// (0x00028b59) popup_query_data_window_t2

0x313d,	// (0x00028b72) popup_query_data_window_t3_ParamLimits

0x313d,	// (0x00028b72) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00035270) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00035270) popup_query_data_window_t

0x3157,	// (0x00028b8c) query_popup_data_pane_ParamLimits

0x3157,	// (0x00028b8c) query_popup_data_pane

0x316b,	// (0x00028ba0) query_popup_data_pane_cp1_ParamLimits

0x316b,	// (0x00028ba0) query_popup_data_pane_cp1

0x2ffe,	// (0x00028a33) bg_popup_window_pane_cp10_ParamLimits

0x2ffe,	// (0x00028a33) bg_popup_window_pane_cp10

0x3030,	// (0x00028a65) indicator_popup_pane_ParamLimits

0x3030,	// (0x00028a65) indicator_popup_pane

0x3052,	// (0x00028a87) popup_query_code_window_t1_ParamLimits

0x3052,	// (0x00028a87) popup_query_code_window_t1

0x306c,	// (0x00028aa1) popup_query_code_window_t2_ParamLimits

0x306c,	// (0x00028aa1) popup_query_code_window_t2

0x30b5,	// (0x00028aea) popup_query_code_window_t3_ParamLimits

0x30b5,	// (0x00028aea) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00035269) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00035269) popup_query_code_window_t

0x30e4,	// (0x00028b19) query_popup_pane_ParamLimits

0x30e4,	// (0x00028b19) query_popup_pane

0xcc99,	// (0x000326ce) bg_popup_window_pane_cp15_ParamLimits

0xcc99,	// (0x000326ce) bg_popup_window_pane_cp15

0xccb9,	// (0x000326ee) indicator_popup_pane_cp1_ParamLimits

0xccb9,	// (0x000326ee) indicator_popup_pane_cp1

0xcccc,	// (0x00032701) indicator_popup_pane_cp2_ParamLimits

0xcccc,	// (0x00032701) indicator_popup_pane_cp2

0xcce7,	// (0x0003271c) popup_query_data_code_window_g1_ParamLimits

0xcce7,	// (0x0003271c) popup_query_data_code_window_g1

0xccfa,	// (0x0003272f) popup_query_data_code_window_t1_ParamLimits

0xccfa,	// (0x0003272f) popup_query_data_code_window_t1

0xcd0c,	// (0x00032741) popup_query_data_code_window_t2_ParamLimits

0xcd0c,	// (0x00032741) popup_query_data_code_window_t2

0xcd1e,	// (0x00032753) popup_query_data_code_window_t3_ParamLimits

0xcd1e,	// (0x00032753) popup_query_data_code_window_t3

0xcd34,	// (0x00032769) popup_query_data_code_window_t4_ParamLimits

0xcd34,	// (0x00032769) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00034fc5) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00034fc5) popup_query_data_code_window_t

0x076e,	// (0x000261a3) list_single_midp_graphic_pane_g3

0xcd4e,	// (0x00032783) query_popup_data_pane_cp2_ParamLimits

0xcd61,	// (0x00032796) query_popup_pane_cp2_ParamLimits

0xcd61,	// (0x00032796) query_popup_pane_cp2

0x9f6c,	// (0x0002f9a1) bg_popup_window_pane_cp11

0x2ff6,	// (0x00028a2b) heading_pane_cp5

0xcdf7,	// (0x0003282c) listscroll_popup_info_pane

0x9f6c,	// (0x0002f9a1) input_focus_pane_cp3

0xcd7c,	// (0x000327b1) query_popup_pane_t1

0xcd8a,	// (0x000327bf) list_popup_info_pane_ParamLimits

0xcd8a,	// (0x000327bf) list_popup_info_pane

0xcd99,	// (0x000327ce) listscroll_popup_info_pane_g1

0xcda1,	// (0x000327d6) scroll_pane_cp7

0xcdab,	// (0x000327e0) popup_info_list_pane_t1_ParamLimits

0xcdab,	// (0x000327e0) popup_info_list_pane_t1

0xcdc5,	// (0x000327fa) popup_info_list_pane_t2_ParamLimits

0xcdc5,	// (0x000327fa) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00034fce) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00034fce) popup_info_list_pane_t

0x9f6c,	// (0x0002f9a1) bg_popup_window_pane_cp12

0x43b4,	// (0x00029de9) find_popup_pane

0xa1ed,	// (0x0002fc22) bg_popup_window_pane_cp3

0xcddf,	// (0x00032814) heading_pane_cp3

0xcdeb,	// (0x00032820) listscroll_popup_graphic_pane

0x9f6c,	// (0x0002f9a1) bg_popup_window_pane_cp4

0xa45e,	// (0x0002fe93) heading_pane_cp4

0xcdf7,	// (0x0003282c) listscroll_popup_colour_pane

0xa468,	// (0x0002fe9d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa468,	// (0x0002fe9d) cell_large_graphic_colour_none_popup_pane

0xa47c,	// (0x0002feb1) grid_large_graphic_colour_popup_pane_ParamLimits

0xa47c,	// (0x0002feb1) grid_large_graphic_colour_popup_pane

0xa4a0,	// (0x0002fed5) listscroll_popup_colour_pane_g1_ParamLimits

0xa4a0,	// (0x0002fed5) listscroll_popup_colour_pane_g1

0xa4b7,	// (0x0002feec) listscroll_popup_colour_pane_g2_ParamLimits

0xa4b7,	// (0x0002feec) listscroll_popup_colour_pane_g2

0xa4ce,	// (0x0002ff03) listscroll_popup_colour_pane_g3_ParamLimits

0xa4ce,	// (0x0002ff03) listscroll_popup_colour_pane_g3

0xa4de,	// (0x0002ff13) listscroll_popup_colour_pane_g4_ParamLimits

0xa4de,	// (0x0002ff13) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00034fd3) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00034fd3) listscroll_popup_colour_pane_g

0xcdff,	// (0x00032834) scroll_pane_cp6_ParamLimits

0xcdff,	// (0x00032834) scroll_pane_cp6

0xa4ee,	// (0x0002ff23) cell_large_graphic_colour_popup_pane_ParamLimits

0xa4ee,	// (0x0002ff23) cell_large_graphic_colour_popup_pane

0xce11,	// (0x00032846) cell_large_graphic_colour_none_popup_pane_t1

0x9f6c,	// (0x0002f9a1) grid_highlight_pane_cp5

0xce20,	// (0x00032855) cell_large_graphic_colour_popup_pane_g1

0xce28,	// (0x0003285d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00034fdc) cell_large_graphic_colour_popup_pane_g

0xce30,	// (0x00032865) cell_large_graphic_colour_popup_pane_g2_copy1

0xce39,	// (0x0003286e) grid_highlight_pane_cp4

0xce41,	// (0x00032876) bg_popup_window_pane_cp8_ParamLimits

0xce41,	// (0x00032876) bg_popup_window_pane_cp8

0xce5c,	// (0x00032891) popup_snote_single_text_window_g1_ParamLimits

0xce5c,	// (0x00032891) popup_snote_single_text_window_g1

0xce6e,	// (0x000328a3) popup_snote_single_text_window_t1_ParamLimits

0xce6e,	// (0x000328a3) popup_snote_single_text_window_t1

0xce81,	// (0x000328b6) popup_snote_single_text_window_t2_ParamLimits

0xce81,	// (0x000328b6) popup_snote_single_text_window_t2

0xce94,	// (0x000328c9) popup_snote_single_text_window_t3_ParamLimits

0xce94,	// (0x000328c9) popup_snote_single_text_window_t3

0xcecd,	// (0x00032902) popup_snote_single_text_window_t4_ParamLimits

0xcecd,	// (0x00032902) popup_snote_single_text_window_t4

0xcf01,	// (0x00032936) popup_snote_single_text_window_t5_ParamLimits

0xcf01,	// (0x00032936) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00034fe1) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00034fe1) popup_snote_single_text_window_t

0xcf30,	// (0x00032965) bg_popup_window_pane_cp9_ParamLimits

0xcf30,	// (0x00032965) bg_popup_window_pane_cp9

0xce5c,	// (0x00032891) popup_snote_single_graphic_window_g1_ParamLimits

0xce5c,	// (0x00032891) popup_snote_single_graphic_window_g1

0xcf3e,	// (0x00032973) popup_snote_single_graphic_window_g2_ParamLimits

0xcf3e,	// (0x00032973) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00034fec) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00034fec) popup_snote_single_graphic_window_g

0xcf4a,	// (0x0003297f) popup_snote_single_graphic_window_t1_ParamLimits

0xcf4a,	// (0x0003297f) popup_snote_single_graphic_window_t1

0xcf5d,	// (0x00032992) popup_snote_single_graphic_window_t2_ParamLimits

0xcf5d,	// (0x00032992) popup_snote_single_graphic_window_t2

0xcf70,	// (0x000329a5) popup_snote_single_graphic_window_t3_ParamLimits

0xcf70,	// (0x000329a5) popup_snote_single_graphic_window_t3

0xcfa9,	// (0x000329de) popup_snote_single_graphic_window_t4_ParamLimits

0xcfa9,	// (0x000329de) popup_snote_single_graphic_window_t4

0xcfdd,	// (0x00032a12) popup_snote_single_graphic_window_t5_ParamLimits

0xcfdd,	// (0x00032a12) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00034ff1) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00034ff1) popup_snote_single_graphic_window_t

0x42f2,	// (0x00029d27) grid_graphic_popup_pane_ParamLimits

0x42f2,	// (0x00029d27) grid_graphic_popup_pane

0x4320,	// (0x00029d55) listscroll_popup_graphic_pane_g1_ParamLimits

0x4320,	// (0x00029d55) listscroll_popup_graphic_pane_g1

0xbd8a,	// (0x000317bf) listscroll_popup_graphic_pane_g2_ParamLimits

0xbd8a,	// (0x000317bf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x000353e6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x000353e6) listscroll_popup_graphic_pane_g

0x4348,	// (0x00029d7d) scroll_pane_cp5

0xbd49,	// (0x0003177e) cell_graphic_popup_pane_ParamLimits

0xbd49,	// (0x0003177e) cell_graphic_popup_pane

0x427b,	// (0x00029cb0) cell_graphic_popup_pane_g1

0x4283,	// (0x00029cb8) cell_graphic_popup_pane_g2

0xce30,	// (0x00032865) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x000353df) cell_graphic_popup_pane_g

0x428c,	// (0x00029cc1) cell_graphic_popup_pane_t2

0xce39,	// (0x0003286e) grid_highlight_pane_cp3

0xd01e,	// (0x00032a53) list_gen_pane_ParamLimits

0xd01e,	// (0x00032a53) list_gen_pane

0xd046,	// (0x00032a7b) scroll_pane

0xbd00,	// (0x00031735) bg_list_pane_g1_ParamLimits

0xbd00,	// (0x00031735) bg_list_pane_g1

0x41f0,	// (0x00029c25) bg_list_pane_g2_ParamLimits

0x41f0,	// (0x00029c25) bg_list_pane_g2

0x4205,	// (0x00029c3a) bg_list_pane_g3_ParamLimits

0x4205,	// (0x00029c3a) bg_list_pane_g3

0x4219,	// (0x00029c4e) bg_list_pane_g4_ParamLimits

0x4219,	// (0x00029c4e) bg_list_pane_g4

0xbd1d,	// (0x00031752) bg_list_pane_g5_ParamLimits

0xbd1d,	// (0x00031752) bg_list_pane_g5

0x0004,

0xf99f,	// (0x000353d4) bg_list_pane_g_ParamLimits

0xf99f,	// (0x000353d4) bg_list_pane_g

0xbcaf,	// (0x000316e4) list_double2_graphic_large_graphic_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double2_graphic_large_graphic_pane

0xbcaf,	// (0x000316e4) list_double2_graphic_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double2_graphic_pane

0xbcaf,	// (0x000316e4) list_double2_large_graphic_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double2_large_graphic_pane

0xbcc3,	// (0x000316f8) list_double2_pane_ParamLimits

0xbcc3,	// (0x000316f8) list_double2_pane

0xbcaf,	// (0x000316e4) list_double_graphic_heading_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double_graphic_heading_pane

0xbcaf,	// (0x000316e4) list_double_graphic_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double_graphic_pane

0xbcaf,	// (0x000316e4) list_double_heading_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double_heading_pane

0xbcaf,	// (0x000316e4) list_double_large_graphic_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double_large_graphic_pane

0xbcaf,	// (0x000316e4) list_double_number_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double_number_pane

0xbcaf,	// (0x000316e4) list_double_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double_pane

0xbcaf,	// (0x000316e4) list_double_time_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_double_time_pane

0xbcaf,	// (0x000316e4) list_setting_number_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_setting_number_pane

0xbcaf,	// (0x000316e4) list_setting_pane_ParamLimits

0xbcaf,	// (0x000316e4) list_setting_pane

0x9c45,	// (0x0002f67a) list_single_2graphic_pane_ParamLimits

0x9c45,	// (0x0002f67a) list_single_2graphic_pane

0x9c45,	// (0x0002f67a) list_single_graphic_heading_pane_ParamLimits

0x9c45,	// (0x0002f67a) list_single_graphic_heading_pane

0x9c45,	// (0x0002f67a) list_single_graphic_pane_ParamLimits

0x9c45,	// (0x0002f67a) list_single_graphic_pane

0x9c45,	// (0x0002f67a) list_single_heading_pane_ParamLimits

0x9c45,	// (0x0002f67a) list_single_heading_pane

0xbcc3,	// (0x000316f8) list_single_large_graphic_pane_ParamLimits

0xbcc3,	// (0x000316f8) list_single_large_graphic_pane

0x9c45,	// (0x0002f67a) list_single_number_heading_pane_ParamLimits

0x9c45,	// (0x0002f67a) list_single_number_heading_pane

0x9c45,	// (0x0002f67a) list_single_number_pane_ParamLimits

0x9c45,	// (0x0002f67a) list_single_number_pane

0x9c45,	// (0x0002f67a) list_single_pane_ParamLimits

0x9c45,	// (0x0002f67a) list_single_pane

0x9f6c,	// (0x0002f9a1) list_highlight_pane_cp1

0xead4,	// (0x00034509) list_single_pane_g1_ParamLimits

0xead4,	// (0x00034509) list_single_pane_g1

0xeae0,	// (0x00034515) list_single_pane_g2_ParamLimits

0xeae0,	// (0x00034515) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00035003) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00035003) list_single_pane_g

0xedaf,	// (0x000347e4) list_single_pane_t1_ParamLimits

0xedaf,	// (0x000347e4) list_single_pane_t1

0xead4,	// (0x00034509) list_single_number_pane_g1_ParamLimits

0xead4,	// (0x00034509) list_single_number_pane_g1

0xeae0,	// (0x00034515) list_single_number_pane_g2_ParamLimits

0xeae0,	// (0x00034515) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00035003) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00035003) list_single_number_pane_g

0xecd8,	// (0x0003470d) list_single_number_pane_t1_ParamLimits

0xecd8,	// (0x0003470d) list_single_number_pane_t1

0x9c07,	// (0x0002f63c) list_single_number_pane_t2_ParamLimits

0x9c07,	// (0x0002f63c) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00035395) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00035395) list_single_number_pane_t

0x9584,	// (0x0002efb9) list_single_graphic_pane_g1_ParamLimits

0x9584,	// (0x0002efb9) list_single_graphic_pane_g1

0xead4,	// (0x00034509) list_single_graphic_pane_g2_ParamLimits

0xead4,	// (0x00034509) list_single_graphic_pane_g2

0xeae0,	// (0x00034515) list_single_graphic_pane_g3_ParamLimits

0xeae0,	// (0x00034515) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00034ffc) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00034ffc) list_single_graphic_pane_g

0x9590,	// (0x0002efc5) list_single_graphic_pane_t1_ParamLimits

0x9590,	// (0x0002efc5) list_single_graphic_pane_t1

0xead4,	// (0x00034509) list_single_heading_pane_g1_ParamLimits

0xead4,	// (0x00034509) list_single_heading_pane_g1

0xeae0,	// (0x00034515) list_single_heading_pane_g2_ParamLimits

0xeae0,	// (0x00034515) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00035003) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00035003) list_single_heading_pane_g

0x95a6,	// (0x0002efdb) list_single_heading_pane_t1_ParamLimits

0x95a6,	// (0x0002efdb) list_single_heading_pane_t1

0x95bc,	// (0x0002eff1) list_single_heading_pane_t2_ParamLimits

0x95bc,	// (0x0002eff1) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00035008) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00035008) list_single_heading_pane_t

0xead4,	// (0x00034509) list_single_number_heading_pane_g1_ParamLimits

0xead4,	// (0x00034509) list_single_number_heading_pane_g1

0xeae0,	// (0x00034515) list_single_number_heading_pane_g2_ParamLimits

0xeae0,	// (0x00034515) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00035003) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00035003) list_single_number_heading_pane_g

0x95a6,	// (0x0002efdb) list_single_number_heading_pane_t1_ParamLimits

0x95a6,	// (0x0002efdb) list_single_number_heading_pane_t1

0x95ce,	// (0x0002f003) list_single_number_heading_pane_t2_ParamLimits

0x95ce,	// (0x0002f003) list_single_number_heading_pane_t2

0xeaec,	// (0x00034521) list_single_number_heading_pane_t3_ParamLimits

0xeaec,	// (0x00034521) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003500d) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003500d) list_single_number_heading_pane_t

0xeafe,	// (0x00034533) list_single_graphic_heading_pane_g1_ParamLimits

0xeafe,	// (0x00034533) list_single_graphic_heading_pane_g1

0x95e0,	// (0x0002f015) list_single_graphic_heading_pane_g4_ParamLimits

0x95e0,	// (0x0002f015) list_single_graphic_heading_pane_g4

0xeae0,	// (0x00034515) list_single_graphic_heading_pane_g5_ParamLimits

0xeae0,	// (0x00034515) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00035014) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00035014) list_single_graphic_heading_pane_g

0x95a6,	// (0x0002efdb) list_single_graphic_heading_pane_t1_ParamLimits

0x95a6,	// (0x0002efdb) list_single_graphic_heading_pane_t1

0x95f1,	// (0x0002f026) list_single_graphic_heading_pane_t2_ParamLimits

0x95f1,	// (0x0002f026) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003501b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003501b) list_single_graphic_heading_pane_t

0xeb0a,	// (0x0003453f) list_single_large_graphic_pane_g1_ParamLimits

0xeb0a,	// (0x0003453f) list_single_large_graphic_pane_g1

0xeb16,	// (0x0003454b) list_single_large_graphic_pane_g2_ParamLimits

0xeb16,	// (0x0003454b) list_single_large_graphic_pane_g2

0xeb22,	// (0x00034557) list_single_large_graphic_pane_g3_ParamLimits

0xeb22,	// (0x00034557) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00035020) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00035020) list_single_large_graphic_pane_g

0x319f,	// (0x00028bd4) wait_border_pane_g2_copy1

0x9603,	// (0x0002f038) list_single_large_graphic_pane_g4_cp2

0xeb2e,	// (0x00034563) list_single_large_graphic_pane_t1_ParamLimits

0xeb2e,	// (0x00034563) list_single_large_graphic_pane_t1

0x960b,	// (0x0002f040) list_double_pane_g1_ParamLimits

0x960b,	// (0x0002f040) list_double_pane_g1

0x9617,	// (0x0002f04c) list_double_pane_g2_ParamLimits

0x9617,	// (0x0002f04c) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00035027) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00035027) list_double_pane_g

0x9623,	// (0x0002f058) list_double_pane_t1_ParamLimits

0x9623,	// (0x0002f058) list_double_pane_t1

0x9639,	// (0x0002f06e) list_double_pane_t2_ParamLimits

0x9639,	// (0x0002f06e) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003502c) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003502c) list_double_pane_t

0x964b,	// (0x0002f080) list_double2_pane_g1_ParamLimits

0x964b,	// (0x0002f080) list_double2_pane_g1

0x965c,	// (0x0002f091) list_double2_pane_g2_ParamLimits

0x965c,	// (0x0002f091) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00035031) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00035031) list_double2_pane_g

0x9668,	// (0x0002f09d) list_double2_pane_t1_ParamLimits

0x9668,	// (0x0002f09d) list_double2_pane_t1

0x967e,	// (0x0002f0b3) list_double2_pane_t2_ParamLimits

0x967e,	// (0x0002f0b3) list_double2_pane_t2

0x0001,

0xf601,	// (0x00035036) list_double2_pane_t_ParamLimits

0xf601,	// (0x00035036) list_double2_pane_t

0x960b,	// (0x0002f040) list_double_number_pane_g1_ParamLimits

0x960b,	// (0x0002f040) list_double_number_pane_g1

0x9617,	// (0x0002f04c) list_double_number_pane_g2_ParamLimits

0x9617,	// (0x0002f04c) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00035027) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00035027) list_double_number_pane_g

0x9690,	// (0x0002f0c5) list_double_number_pane_t1_ParamLimits

0x9690,	// (0x0002f0c5) list_double_number_pane_t1

0x96a2,	// (0x0002f0d7) list_double_number_pane_t2_ParamLimits

0x96a2,	// (0x0002f0d7) list_double_number_pane_t2

0x96b8,	// (0x0002f0ed) list_double_number_pane_t3_ParamLimits

0x96b8,	// (0x0002f0ed) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003503b) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003503b) list_double_number_pane_t

0x96ca,	// (0x0002f0ff) list_double_graphic_pane_g1_ParamLimits

0x96ca,	// (0x0002f0ff) list_double_graphic_pane_g1

0x96d6,	// (0x0002f10b) list_double_graphic_pane_g2_ParamLimits

0x96d6,	// (0x0002f10b) list_double_graphic_pane_g2

0x96e5,	// (0x0002f11a) list_double_graphic_pane_g3_ParamLimits

0x96e5,	// (0x0002f11a) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00035042) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00035042) list_double_graphic_pane_g

0x96fd,	// (0x0002f132) list_double_graphic_pane_t1_ParamLimits

0x96fd,	// (0x0002f132) list_double_graphic_pane_t1

0x9713,	// (0x0002f148) list_double_graphic_pane_t2_ParamLimits

0x9713,	// (0x0002f148) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003504b) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003504b) list_double_graphic_pane_t

0x9725,	// (0x0002f15a) list_double2_graphic_pane_g1_ParamLimits

0x9725,	// (0x0002f15a) list_double2_graphic_pane_g1

0x9731,	// (0x0002f166) list_double2_graphic_pane_g2_ParamLimits

0x9731,	// (0x0002f166) list_double2_graphic_pane_g2

0x973d,	// (0x0002f172) list_double2_graphic_pane_g3_ParamLimits

0x973d,	// (0x0002f172) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00035050) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00035050) list_double2_graphic_pane_g

0x9749,	// (0x0002f17e) list_double2_graphic_pane_t1_ParamLimits

0x9749,	// (0x0002f17e) list_double2_graphic_pane_t1

0x975f,	// (0x0002f194) list_double2_graphic_pane_t2_ParamLimits

0x975f,	// (0x0002f194) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00035057) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00035057) list_double2_graphic_pane_t

0x9771,	// (0x0002f1a6) list_double_large_graphic_pane_g1_ParamLimits

0x9771,	// (0x0002f1a6) list_double_large_graphic_pane_g1

0x979c,	// (0x0002f1d1) list_double_large_graphic_pane_g2_ParamLimits

0x979c,	// (0x0002f1d1) list_double_large_graphic_pane_g2

0x9617,	// (0x0002f04c) list_double_large_graphic_pane_g3_ParamLimits

0x9617,	// (0x0002f04c) list_double_large_graphic_pane_g3

0x97ad,	// (0x0002f1e2) list_double_large_graphic_pane_g4_ParamLimits

0x97ad,	// (0x0002f1e2) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003505c) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003505c) list_double_large_graphic_pane_g

0x97c0,	// (0x0002f1f5) list_double_large_graphic_pane_t1_ParamLimits

0x97c0,	// (0x0002f1f5) list_double_large_graphic_pane_t1

0x97d9,	// (0x0002f20e) list_double_large_graphic_pane_t2_ParamLimits

0x97d9,	// (0x0002f20e) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00035067) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00035067) list_double_large_graphic_pane_t

0x97eb,	// (0x0002f220) list_double2_large_graphic_pane_g1_ParamLimits

0x97eb,	// (0x0002f220) list_double2_large_graphic_pane_g1

0x97f7,	// (0x0002f22c) list_double2_large_graphic_pane_g2_ParamLimits

0x97f7,	// (0x0002f22c) list_double2_large_graphic_pane_g2

0x9808,	// (0x0002f23d) list_double2_large_graphic_pane_g3_ParamLimits

0x9808,	// (0x0002f23d) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003506c) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003506c) list_double2_large_graphic_pane_g

0x9814,	// (0x0002f249) list_double2_large_graphic_pane_t1_ParamLimits

0x9814,	// (0x0002f249) list_double2_large_graphic_pane_t1

0x982a,	// (0x0002f25f) list_double2_large_graphic_pane_t2_ParamLimits

0x982a,	// (0x0002f25f) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00035073) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00035073) list_double2_large_graphic_pane_t

0x983c,	// (0x0002f271) list_double_heading_pane_g1_ParamLimits

0x983c,	// (0x0002f271) list_double_heading_pane_g1

0x984d,	// (0x0002f282) list_double_heading_pane_g2_ParamLimits

0x984d,	// (0x0002f282) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00035078) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00035078) list_double_heading_pane_g

0x9859,	// (0x0002f28e) list_double_heading_pane_t1_ParamLimits

0x9859,	// (0x0002f28e) list_double_heading_pane_t1

0x986f,	// (0x0002f2a4) list_double_heading_pane_t2_ParamLimits

0x986f,	// (0x0002f2a4) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003507d) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003507d) list_double_heading_pane_t

0x9881,	// (0x0002f2b6) list_double_graphic_heading_pane_g1_ParamLimits

0x9881,	// (0x0002f2b6) list_double_graphic_heading_pane_g1

0x983c,	// (0x0002f271) list_double_graphic_heading_pane_g2_ParamLimits

0x983c,	// (0x0002f271) list_double_graphic_heading_pane_g2

0x984d,	// (0x0002f282) list_double_graphic_heading_pane_g3_ParamLimits

0x984d,	// (0x0002f282) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00035082) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00035082) list_double_graphic_heading_pane_g

0x988d,	// (0x0002f2c2) list_double_graphic_heading_pane_t1_ParamLimits

0x988d,	// (0x0002f2c2) list_double_graphic_heading_pane_t1

0x975f,	// (0x0002f194) list_double_graphic_heading_pane_t2_ParamLimits

0x975f,	// (0x0002f194) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00035089) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00035089) list_double_graphic_heading_pane_t

0x979c,	// (0x0002f1d1) list_double_time_pane_g1_ParamLimits

0x979c,	// (0x0002f1d1) list_double_time_pane_g1

0x9617,	// (0x0002f04c) list_double_time_pane_g2_ParamLimits

0x9617,	// (0x0002f04c) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003508e) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003508e) list_double_time_pane_g

0x98a3,	// (0x0002f2d8) list_double_time_pane_t1_ParamLimits

0x98a3,	// (0x0002f2d8) list_double_time_pane_t1

0x98b9,	// (0x0002f2ee) list_double_time_pane_t2_ParamLimits

0x98b9,	// (0x0002f2ee) list_double_time_pane_t2

0x98cb,	// (0x0002f300) list_double_time_pane_t3_ParamLimits

0x98cb,	// (0x0002f300) list_double_time_pane_t3

0x98dd,	// (0x0002f312) list_double_time_pane_t4_ParamLimits

0x98dd,	// (0x0002f312) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00035093) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00035093) list_double_time_pane_t

0x98ef,	// (0x0002f324) list_setting_pane_g1_ParamLimits

0x98ef,	// (0x0002f324) list_setting_pane_g1

0x984d,	// (0x0002f282) list_setting_pane_g2_ParamLimits

0x984d,	// (0x0002f282) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003509c) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003509c) list_setting_pane_g

0x98fb,	// (0x0002f330) list_setting_pane_t1_ParamLimits

0x98fb,	// (0x0002f330) list_setting_pane_t1

0x9912,	// (0x0002f347) list_setting_pane_t2_ParamLimits

0x9912,	// (0x0002f347) list_setting_pane_t2

0x0002,

0xf66c,	// (0x000350a1) list_setting_pane_t_ParamLimits

0xf66c,	// (0x000350a1) list_setting_pane_t

0x9951,	// (0x0002f386) set_value_pane_cp_ParamLimits

0x9951,	// (0x0002f386) set_value_pane_cp

0x995f,	// (0x0002f394) list_setting_number_pane_g1_ParamLimits

0x995f,	// (0x0002f394) list_setting_number_pane_g1

0x996b,	// (0x0002f3a0) list_setting_number_pane_g2_ParamLimits

0x996b,	// (0x0002f3a0) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x000350a8) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x000350a8) list_setting_number_pane_g

0x9977,	// (0x0002f3ac) list_setting_number_pane_t1_ParamLimits

0x9977,	// (0x0002f3ac) list_setting_number_pane_t1

0x998b,	// (0x0002f3c0) list_setting_number_pane_t2_ParamLimits

0x998b,	// (0x0002f3c0) list_setting_number_pane_t2

0x99a2,	// (0x0002f3d7) list_setting_number_pane_t3_ParamLimits

0x99a2,	// (0x0002f3d7) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x000350ad) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x000350ad) list_setting_number_pane_t

0x9951,	// (0x0002f386) set_value_pane_ParamLimits

0x9951,	// (0x0002f386) set_value_pane

0xd07a,	// (0x00032aaf) bg_set_opt_pane_ParamLimits

0xd07a,	// (0x00032aaf) bg_set_opt_pane

0xeb59,	// (0x0003458e) set_value_pane_t1

0xd09b,	// (0x00032ad0) slider_set_pane_cp3

0xd0a4,	// (0x00032ad9) volume_small_pane_cp

0xd0ad,	// (0x00032ae2) list_form_gen_pane

0xd0b6,	// (0x00032aeb) scroll_pane_cp8

0x99e5,	// (0x0002f41a) form_field_data_pane_ParamLimits

0x99e5,	// (0x0002f41a) form_field_data_pane

0x9a00,	// (0x0002f435) form_field_data_wide_pane_ParamLimits

0x9a00,	// (0x0002f435) form_field_data_wide_pane

0xeb77,	// (0x000345ac) form_field_popup_pane_ParamLimits

0xeb77,	// (0x000345ac) form_field_popup_pane

0x9a22,	// (0x0002f457) form_field_popup_wide_pane_ParamLimits

0x9a22,	// (0x0002f457) form_field_popup_wide_pane

0xeb99,	// (0x000345ce) form_field_slider_pane_ParamLimits

0xeb99,	// (0x000345ce) form_field_slider_pane

0xebac,	// (0x000345e1) form_field_slider_wide_pane_ParamLimits

0xebac,	// (0x000345e1) form_field_slider_wide_pane

0xd0c7,	// (0x00032afc) data_form_pane

0x9a4d,	// (0x0002f482) form_field_data_pane_t1

0xd0d3,	// (0x00032b08) input_focus_pane

0xebbf,	// (0x000345f4) data_form_wide_pane

0xebdc,	// (0x00034611) form_field_data_wide_pane_t1

0xce4e,	// (0x00032883) input_focus_pane_cp6

0x9a67,	// (0x0002f49c) form_field_popup_pane_t1

0xd0d3,	// (0x00032b08) input_focus_pane_cp7

0xd101,	// (0x00032b36) list_form_pane

0xec06,	// (0x0003463b) form_field_popup_wide_pane_t1

0xd0d3,	// (0x00032b08) input_focus_pane_cp8

0xd10d,	// (0x00032b42) list_form_wide_pane

0x9a89,	// (0x0002f4be) form_field_slider_pane_t1_ParamLimits

0x9a89,	// (0x0002f4be) form_field_slider_pane_t1

0x9aa1,	// (0x0002f4d6) form_field_slider_pane_t2_ParamLimits

0x9aa1,	// (0x0002f4d6) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x000350bd) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x000350bd) form_field_slider_pane_t

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp9_ParamLimits

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp9

0x9ab6,	// (0x0002f4eb) slider_cont_pane_ParamLimits

0x9ab6,	// (0x0002f4eb) slider_cont_pane

0xd11c,	// (0x00032b51) form_field_slider_wide_pane_t1_ParamLimits

0xd11c,	// (0x00032b51) form_field_slider_wide_pane_t1

0xec1b,	// (0x00034650) form_field_slider_wide_pane_t2_ParamLimits

0xec1b,	// (0x00034650) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x000350c2) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x000350c2) form_field_slider_wide_pane_t

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp10_ParamLimits

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp10

0x9aca,	// (0x0002f4ff) slider_cont_pane_cp1_ParamLimits

0x9aca,	// (0x0002f4ff) slider_cont_pane_cp1

0x9ade,	// (0x0002f513) slider_form_pane_cp

0xd12e,	// (0x00032b63) input_focus_pane_g1

0xd136,	// (0x00032b6b) input_focus_pane_g2

0xd13e,	// (0x00032b73) input_focus_pane_g3

0xd146,	// (0x00032b7b) input_focus_pane_g4

0xd14e,	// (0x00032b83) input_focus_pane_g5

0xd156,	// (0x00032b8b) input_focus_pane_g6

0xd15e,	// (0x00032b93) input_focus_pane_g7

0xd166,	// (0x00032b9b) input_focus_pane_g8

0xd16e,	// (0x00032ba3) input_focus_pane_g9

0x9e7c,	// (0x0002f8b1) input_focus_pane_g10

0x0009,

0xf692,	// (0x000350c7) input_focus_pane_g

0x31a8,	// (0x00028bdd) wait_border_pane_g3_copy1

0x9ae6,	// (0x0002f51b) data_form_pane_t1

0x9e7c,	// (0x0002f8b1) wait_anim_pane_g1_copy1

0x9c19,	// (0x0002f64e) data_form_wide_pane_t1

0xec2d,	// (0x00034662) list_form_graphic_pane_cp_ParamLimits

0xec2d,	// (0x00034662) list_form_graphic_pane_cp

0x4108,	// (0x00029b3d) slider_form_pane_g1

0x4111,	// (0x00029b46) slider_form_pane_g2

0x0006,

0xf990,	// (0x000353c5) slider_form_pane_g

0xec2d,	// (0x00034662) list_form_graphic_pane_ParamLimits

0xec2d,	// (0x00034662) list_form_graphic_pane

0xec3f,	// (0x00034674) list_form_graphic_pane_g1

0xec47,	// (0x0003467c) list_form_graphic_pane_t1_ParamLimits

0xec47,	// (0x0003467c) list_form_graphic_pane_t1

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp5_ParamLimits

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp5

0x9b00,	// (0x0002f535) find_pane_g1

0xd176,	// (0x00032bab) input_find_pane

0x9b09,	// (0x0002f53e) input_find_pane_g1_ParamLimits

0x9b09,	// (0x0002f53e) input_find_pane_g1

0x9b15,	// (0x0002f54a) input_find_pane_t1_ParamLimits

0x9b15,	// (0x0002f54a) input_find_pane_t1

0x9b2a,	// (0x0002f55f) input_find_pane_t2_ParamLimits

0x9b2a,	// (0x0002f55f) input_find_pane_t2

0x0001,

0xf6a7,	// (0x000350dc) input_find_pane_t_ParamLimits

0xf6a7,	// (0x000350dc) input_find_pane_t

0xd17f,	// (0x00032bb4) input_focus_pane_cp5_ParamLimits

0xd17f,	// (0x00032bb4) input_focus_pane_cp5

0xd18d,	// (0x00032bc2) bg_popup_window_pane_cp2_ParamLimits

0xd18d,	// (0x00032bc2) bg_popup_window_pane_cp2

0xd19a,	// (0x00032bcf) listscroll_menu_pane_ParamLimits

0xd19a,	// (0x00032bcf) listscroll_menu_pane

0xa525,	// (0x0002ff5a) popup_submenu_window_ParamLimits

0xa525,	// (0x0002ff5a) popup_submenu_window

0xd1a6,	// (0x00032bdb) find_popup_pane_g1

0xd1ae,	// (0x00032be3) input_popup_find_pane_cp

0xd17f,	// (0x00032bb4) input_focus_pane_cp4_ParamLimits

0xd17f,	// (0x00032bb4) input_focus_pane_cp4

0xd1b8,	// (0x00032bed) input_popup_find_pane_t1_ParamLimits

0xd1b8,	// (0x00032bed) input_popup_find_pane_t1

0x9f6c,	// (0x0002f9a1) bg_popup_sub_pane_cp

0xd1e6,	// (0x00032c1b) listscroll_popup_sub_pane

0xd1ee,	// (0x00032c23) list_submenu_pane_ParamLimits

0xd1ee,	// (0x00032c23) list_submenu_pane

0xd1ff,	// (0x00032c34) scroll_pane_cp4

0xd207,	// (0x00032c3c) list_single_popup_submenu_pane_ParamLimits

0xd207,	// (0x00032c3c) list_single_popup_submenu_pane

0xd21c,	// (0x00032c51) list_single_popup_submenu_pane_g1

0xd224,	// (0x00032c59) list_single_popup_submenu_pane_t1_ParamLimits

0xd224,	// (0x00032c59) list_single_popup_submenu_pane_t1

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp1_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp1

0xa563,	// (0x0002ff98) tabs_2_active_pane_g1

0xa56b,	// (0x0002ffa0) tabs_2_active_pane_t1

0xa1ab,	// (0x0002fbe0) bg_passive_tab_pane_cp1_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_passive_tab_pane_cp1

0xa563,	// (0x0002ff98) tabs_2_passive_pane_g1

0xa56b,	// (0x0002ffa0) tabs_2_passive_pane_t1

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp4

0xa57d,	// (0x0002ffb2) tabs_2_long_active_pane_t1

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp4

0x1a97,	// (0x000274cc) list_single_midp_graphic_pane_g4_ParamLimits

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp5

0xa590,	// (0x0002ffc5) tabs_3_long_active_pane_t1

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp5

0x1a97,	// (0x000274cc) list_single_midp_graphic_pane_g4

0xa1ed,	// (0x0002fc22) bg_popup_window_pane_cp13_ParamLimits

0xa1ed,	// (0x0002fc22) bg_popup_window_pane_cp13

0xd242,	// (0x00032c77) listscroll_popup_fast_pane_ParamLimits

0xd242,	// (0x00032c77) listscroll_popup_fast_pane

0xd251,	// (0x00032c86) grid_popup_fast_pane_ParamLimits

0xd251,	// (0x00032c86) grid_popup_fast_pane

0xd263,	// (0x00032c98) scroll_pane_cp9_ParamLimits

0xd263,	// (0x00032c98) scroll_pane_cp9

0x5aaf,	// (0x0002b4e4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5aaf,	// (0x0002b4e4) list_single_graphic_hl_pane_t1_cp2

0xd287,	// (0x00032cbc) input_focus_pane_cp20_ParamLimits

0xd287,	// (0x00032cbc) input_focus_pane_cp20

0xd295,	// (0x00032cca) query_popup_data_pane_t1_ParamLimits

0xd295,	// (0x00032cca) query_popup_data_pane_t1

0xd2a8,	// (0x00032cdd) query_popup_data_pane_t2_ParamLimits

0xd2a8,	// (0x00032cdd) query_popup_data_pane_t2

0xd2ee,	// (0x00032d23) query_popup_data_pane_t3_ParamLimits

0xd2ee,	// (0x00032d23) query_popup_data_pane_t3

0xd32f,	// (0x00032d64) query_popup_data_pane_t4_ParamLimits

0xd32f,	// (0x00032d64) query_popup_data_pane_t4

0xd36b,	// (0x00032da0) query_popup_data_pane_t5_ParamLimits

0xd36b,	// (0x00032da0) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x000350e1) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x000350e1) query_popup_data_pane_t

0xd12e,	// (0x00032b63) bg_set_opt_pane_g1

0xd136,	// (0x00032b6b) bg_set_opt_pane_g2

0xd13e,	// (0x00032b73) bg_set_opt_pane_g3

0xd146,	// (0x00032b7b) bg_set_opt_pane_g4

0xd14e,	// (0x00032b83) bg_set_opt_pane_g5

0xd156,	// (0x00032b8b) bg_set_opt_pane_g6

0xd15e,	// (0x00032b93) bg_set_opt_pane_g7

0xd166,	// (0x00032b9b) bg_set_opt_pane_g8

0xd16e,	// (0x00032ba3) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x000350ec) bg_set_opt_pane_g

0x0495,	// (0x00025eca) control_top_pane_stacon_ParamLimits

0x0495,	// (0x00025eca) control_top_pane_stacon

0x04e8,	// (0x00025f1d) signal_pane_stacon_ParamLimits

0x04e8,	// (0x00025f1d) signal_pane_stacon

0x050d,	// (0x00025f42) stacon_top_pane_g1_ParamLimits

0x050d,	// (0x00025f42) stacon_top_pane_g1

0x052f,	// (0x00025f64) title_pane_stacon_ParamLimits

0x052f,	// (0x00025f64) title_pane_stacon

0x0559,	// (0x00025f8e) uni_indicator_pane_stacon_ParamLimits

0x0559,	// (0x00025f8e) uni_indicator_pane_stacon

0x0571,	// (0x00025fa6) battery_pane_stacon_ParamLimits

0x0571,	// (0x00025fa6) battery_pane_stacon

0x05b5,	// (0x00025fea) control_bottom_pane_stacon_ParamLimits

0x05b5,	// (0x00025fea) control_bottom_pane_stacon

0x05d8,	// (0x0002600d) navi_pane_stacon_ParamLimits

0x05d8,	// (0x0002600d) navi_pane_stacon

0x05fb,	// (0x00026030) stacon_bottom_pane_g1_ParamLimits

0x05fb,	// (0x00026030) stacon_bottom_pane_g1

0x002a,	// (0x00025a5f) aid_levels_signal_lsc_ParamLimits

0x002a,	// (0x00025a5f) aid_levels_signal_lsc

0x0041,	// (0x00025a76) signal_pane_stacon_g1_ParamLimits

0x0041,	// (0x00025a76) signal_pane_stacon_g1

0x0055,	// (0x00025a8a) signal_pane_stacon_g2_ParamLimits

0x0055,	// (0x00025a8a) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000350ff) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000350ff) signal_pane_stacon_g

0x008a,	// (0x00025abf) title_pane_stacon_t1_ParamLimits

0x008a,	// (0x00025abf) title_pane_stacon_t1

0xd3af,	// (0x00032de4) uni_indicator_pane_stacon_g1

0xd3b9,	// (0x00032dee) uni_indicator_pane_stacon_g2

0xd3c3,	// (0x00032df8) uni_indicator_pane_stacon_g3

0xd3cd,	// (0x00032e02) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003510b) uni_indicator_pane_stacon_g

0x00af,	// (0x00025ae4) control_top_pane_stacon_g1

0x00b7,	// (0x00025aec) control_top_pane_stacon_t1_ParamLimits

0x00b7,	// (0x00025aec) control_top_pane_stacon_t1

0x00ee,	// (0x00025b23) aid_levels_battery_lsc_ParamLimits

0x00ee,	// (0x00025b23) aid_levels_battery_lsc

0x0106,	// (0x00025b3b) battery_pane_stacon_g1_ParamLimits

0x0106,	// (0x00025b3b) battery_pane_stacon_g1

0x0119,	// (0x00025b4e) battery_pane_stacon_g2_ParamLimits

0x0119,	// (0x00025b4e) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00035114) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00035114) battery_pane_stacon_g

0x0157,	// (0x00025b8c) navi_icon_pane_stacon

0x016b,	// (0x00025ba0) navi_navi_pane_stacon

0x0157,	// (0x00025b8c) navi_text_pane_stacon

0x00af,	// (0x00025ae4) control_bottom_pane_stacon_g1

0x0181,	// (0x00025bb6) control_bottom_pane_stacon_t1_ParamLimits

0x0181,	// (0x00025bb6) control_bottom_pane_stacon_t1

0xa5a2,	// (0x0002ffd7) grid_app_pane_ParamLimits

0xa5a2,	// (0x0002ffd7) grid_app_pane

0xa5da,	// (0x0003000f) scroll_pane_cp15_ParamLimits

0xa5da,	// (0x0003000f) scroll_pane_cp15

0xa5ef,	// (0x00030024) cell_app_pane_ParamLimits

0xa5ef,	// (0x00030024) cell_app_pane

0xa63c,	// (0x00030071) cell_app_pane_g1_ParamLimits

0xa63c,	// (0x00030071) cell_app_pane_g1

0xd3f1,	// (0x00032e26) cell_app_pane_g2_ParamLimits

0xd3f1,	// (0x00032e26) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00035119) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00035119) cell_app_pane_g

0xd3fd,	// (0x00032e32) cell_app_pane_t1_ParamLimits

0xd3fd,	// (0x00032e32) cell_app_pane_t1

0xd414,	// (0x00032e49) grid_highlight_pane_ParamLimits

0xd414,	// (0x00032e49) grid_highlight_pane

0xd12e,	// (0x00032b63) cell_highlight_pane_g1

0xd136,	// (0x00032b6b) cell_highlight_pane_g2

0xd13e,	// (0x00032b73) cell_highlight_pane_g3

0xd146,	// (0x00032b7b) cell_highlight_pane_g4

0xd14e,	// (0x00032b83) cell_highlight_pane_g5

0xd156,	// (0x00032b8b) cell_highlight_pane_g6

0xd15e,	// (0x00032b93) cell_highlight_pane_g7

0xd166,	// (0x00032b9b) cell_highlight_pane_g8

0xd16e,	// (0x00032ba3) cell_highlight_pane_g9

0x9e7c,	// (0x0002f8b1) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x000350c7) cell_highlight_pane_g

0xd425,	// (0x00032e5a) bg_scroll_pane

0x024e,	// (0x00025c83) scroll_handle_pane

0xd46c,	// (0x00032ea1) scroll_bg_pane_g1

0xd481,	// (0x00032eb6) scroll_bg_pane_g2

0xd499,	// (0x00032ece) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003511e) scroll_bg_pane_g

0xd4ae,	// (0x00032ee3) scroll_handle_focus_pane_ParamLimits

0xd4ae,	// (0x00032ee3) scroll_handle_focus_pane

0xd46c,	// (0x00032ea1) scroll_handle_pane_g1

0xd4bb,	// (0x00032ef0) scroll_handle_pane_g2

0xd499,	// (0x00032ece) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00035125) scroll_handle_pane_g

0xd17f,	// (0x00032bb4) bg_popup_sub_pane_cp21_ParamLimits

0xd17f,	// (0x00032bb4) bg_popup_sub_pane_cp21

0xd4cf,	// (0x00032f04) popup_fep_japan_predictive_window_t1_ParamLimits

0xd4cf,	// (0x00032f04) popup_fep_japan_predictive_window_t1

0xd4e6,	// (0x00032f1b) popup_fep_japan_predictive_window_t2_ParamLimits

0xd4e6,	// (0x00032f1b) popup_fep_japan_predictive_window_t2

0xd519,	// (0x00032f4e) popup_fep_japan_predictive_window_t3_ParamLimits

0xd519,	// (0x00032f4e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003512c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003512c) popup_fep_japan_predictive_window_t

0x9f6c,	// (0x0002f9a1) bg_popup_sub_pane_cp23

0xd550,	// (0x00032f85) listscroll_japin_cand_pane

0xd558,	// (0x00032f8d) popup_fep_japan_candidate_window_t1

0xd566,	// (0x00032f9b) candidate_pane_ParamLimits

0xd566,	// (0x00032f9b) candidate_pane

0xd578,	// (0x00032fad) scroll_pane_cp30

0xd582,	// (0x00032fb7) list_single_popup_jap_candidate_pane_ParamLimits

0xd582,	// (0x00032fb7) list_single_popup_jap_candidate_pane

0x9f6c,	// (0x0002f9a1) list_highlight_pane_cp30

0xd596,	// (0x00032fcb) list_single_popup_jap_candidate_pane_t1

0xa665,	// (0x0003009a) level_1_signal

0xa677,	// (0x000300ac) level_2_signal

0xa68a,	// (0x000300bf) level_3_signal

0xa69d,	// (0x000300d2) level_4_signal

0xa6b0,	// (0x000300e5) level_5_signal

0xa6c3,	// (0x000300f8) level_6_signal

0xa6d6,	// (0x0003010b) level_7_signal

0xa665,	// (0x0003009a) level_1_battery

0xa677,	// (0x000300ac) level_2_battery

0xa68a,	// (0x000300bf) level_3_battery

0xa69d,	// (0x000300d2) level_4_battery

0xa6b0,	// (0x000300e5) level_5_battery

0xa6c3,	// (0x000300f8) level_6_battery

0xa6d6,	// (0x0003010b) level_7_battery

0xd5bd,	// (0x00032ff2) list_menu_pane_ParamLimits

0xd5bd,	// (0x00032ff2) list_menu_pane

0xd5d3,	// (0x00033008) scroll_pane_cp25_ParamLimits

0xd5d3,	// (0x00033008) scroll_pane_cp25

0xd5ec,	// (0x00033021) list_double2_graphic_pane_cp2_ParamLimits

0xd5ec,	// (0x00033021) list_double2_graphic_pane_cp2

0xd5ec,	// (0x00033021) list_double2_large_graphic_pane_cp2_ParamLimits

0xd5ec,	// (0x00033021) list_double2_large_graphic_pane_cp2

0xd5ec,	// (0x00033021) list_double2_pane_cp2_ParamLimits

0xd5ec,	// (0x00033021) list_double2_pane_cp2

0xd5ec,	// (0x00033021) list_double_graphic_pane_cp2_ParamLimits

0xd5ec,	// (0x00033021) list_double_graphic_pane_cp2

0xd5ec,	// (0x00033021) list_double_large_graphic_pane_cp2_ParamLimits

0xd5ec,	// (0x00033021) list_double_large_graphic_pane_cp2

0xd5ec,	// (0x00033021) list_double_number_pane_cp2_ParamLimits

0xd5ec,	// (0x00033021) list_double_number_pane_cp2

0xd5ec,	// (0x00033021) list_double_pane_cp2_ParamLimits

0xd5ec,	// (0x00033021) list_double_pane_cp2

0xa6fc,	// (0x00030131) list_single_2graphic_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_2graphic_pane_cp2

0xa6fc,	// (0x00030131) list_single_graphic_heading_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_graphic_heading_pane_cp2

0xa6fc,	// (0x00030131) list_single_graphic_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_graphic_pane_cp2

0xa6fc,	// (0x00030131) list_single_heading_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_heading_pane_cp2

0xd5fc,	// (0x00033031) list_single_large_graphic_pane_cp2_ParamLimits

0xd5fc,	// (0x00033031) list_single_large_graphic_pane_cp2

0xa6fc,	// (0x00030131) list_single_number_heading_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_number_heading_pane_cp2

0xa6fc,	// (0x00030131) list_single_number_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_number_pane_cp2

0xa6fc,	// (0x00030131) list_single_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_pane_cp2

0xd615,	// (0x0003304a) bg_popup_sub_pane_cp22

0x03f0,	// (0x00025e25) popup_side_volume_key_window_g1

0x041a,	// (0x00025e4f) popup_side_volume_key_window_t1

0x0438,	// (0x00025e6d) volume_small_pane_cp1

0xa1ab,	// (0x0002fbe0) bg_popup_sub_pane_cp24_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_popup_sub_pane_cp24

0xd62b,	// (0x00033060) fep_china_uni_candidate_pane_ParamLimits

0xd62b,	// (0x00033060) fep_china_uni_candidate_pane

0xd63f,	// (0x00033074) fep_china_uni_entry_pane

0xd64f,	// (0x00033084) popup_fep_china_uni_window_g1

0xd66b,	// (0x000330a0) fep_china_uni_entry_pane_g1

0xd675,	// (0x000330aa) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0003515d) fep_china_uni_entry_pane_g

0xd67f,	// (0x000330b4) fep_entry_item_pane

0xd689,	// (0x000330be) fep_candidate_item_pane

0xd691,	// (0x000330c6) fep_china_uni_candidate_pane_g1

0xd69b,	// (0x000330d0) fep_china_uni_candidate_pane_g2

0xd6a3,	// (0x000330d8) fep_china_uni_candidate_pane_g3

0xd6ab,	// (0x000330e0) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00035162) fep_china_uni_candidate_pane_g

0x9e7c,	// (0x0002f8b1) fep_entry_item_pane_g1

0xd6b5,	// (0x000330ea) fep_entry_item_pane_t1_ParamLimits

0xd6b5,	// (0x000330ea) fep_entry_item_pane_t1

0xd6cb,	// (0x00033100) fep_candidate_item_pane_t1_ParamLimits

0xd6cb,	// (0x00033100) fep_candidate_item_pane_t1

0xd6e0,	// (0x00033115) fep_candidate_item_pane_t2_ParamLimits

0xd6e0,	// (0x00033115) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0003516b) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0003516b) fep_candidate_item_pane_t

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp31_ParamLimits

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp31

0xd6f2,	// (0x00033127) level_1_signal_lsc

0xd6fb,	// (0x00033130) level_2_signal_lsc

0xd704,	// (0x00033139) level_3_signal_lsc

0xd70d,	// (0x00033142) level_4_signal_lsc

0xd716,	// (0x0003314b) level_5_signal_lsc

0xd71f,	// (0x00033154) level_6_signal_lsc

0xd728,	// (0x0003315d) level_7_signal_lsc

0xd728,	// (0x0003315d) level_1_battery_lsc

0xd731,	// (0x00033166) level_2_battery_lsc

0xd73a,	// (0x0003316f) level_3_battery_lsc

0xd743,	// (0x00033178) level_4_battery_lsc

0xd74c,	// (0x00033181) level_5_battery_lsc

0xd755,	// (0x0003318a) level_6_battery_lsc

0xd6f2,	// (0x00033127) level_7_battery_lsc

0xd75e,	// (0x00033193) scroll_handle_focus_pane_g1

0xd767,	// (0x0003319c) scroll_handle_focus_pane_g2

0xd770,	// (0x000331a5) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00035170) scroll_handle_focus_pane_g

0x9b3f,	// (0x0002f574) list_single_2graphic_pane_g1_ParamLimits

0x9b3f,	// (0x0002f574) list_single_2graphic_pane_g1

0x95e0,	// (0x0002f015) list_single_2graphic_pane_g2_ParamLimits

0x95e0,	// (0x0002f015) list_single_2graphic_pane_g2

0xeae0,	// (0x00034515) list_single_2graphic_pane_g3_ParamLimits

0xeae0,	// (0x00034515) list_single_2graphic_pane_g3

0x9b4b,	// (0x0002f580) list_single_2graphic_pane_g4_ParamLimits

0x9b4b,	// (0x0002f580) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00035177) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00035177) list_single_2graphic_pane_g

0x9b57,	// (0x0002f58c) list_single_2graphic_pane_t1_ParamLimits

0x9b57,	// (0x0002f58c) list_single_2graphic_pane_t1

0x9b85,	// (0x0002f5ba) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9b85,	// (0x0002f5ba) list_double2_graphic_large_graphic_pane_g1

0x97f7,	// (0x0002f22c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x97f7,	// (0x0002f22c) list_double2_graphic_large_graphic_pane_g2

0x9808,	// (0x0002f23d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9808,	// (0x0002f23d) list_double2_graphic_large_graphic_pane_g3

0x9b97,	// (0x0002f5cc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9b97,	// (0x0002f5cc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00035180) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00035180) list_double2_graphic_large_graphic_pane_g

0x9ba3,	// (0x0002f5d8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9ba3,	// (0x0002f5d8) list_double2_graphic_large_graphic_pane_t1

0x9bb9,	// (0x0002f5ee) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9bb9,	// (0x0002f5ee) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00035189) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00035189) list_double2_graphic_large_graphic_pane_t

0x06bd,	// (0x000260f2) popup_fast_swap_window_ParamLimits

0x06bd,	// (0x000260f2) popup_fast_swap_window

0x06db,	// (0x00026110) popup_side_volume_key_window

0x06f9,	// (0x0002612e) stacon_top_pane

0x0703,	// (0x00026138) status_pane_ParamLimits

0x0703,	// (0x00026138) status_pane

0x06f9,	// (0x0002612e) status_small_pane

0x9f6c,	// (0x0002f9a1) control_pane

0x9f6c,	// (0x0002f9a1) stacon_bottom_pane

0xd0b6,	// (0x00032aeb) scroll_pane_cp121

0xd0ad,	// (0x00032ae2) set_content_pane

0xa78e,	// (0x000301c3) bg_active_tab_pane_g1_cp1

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp1

0xa797,	// (0x000301cc) bg_active_tab_pane_g3_cp1

0xa78e,	// (0x000301c3) bg_passive_tab_pane_g1_cp1

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp1

0xa797,	// (0x000301cc) bg_passive_tab_pane_g3_cp1

0xa7a0,	// (0x000301d5) bg_active_tab_pane_g1_cp2

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp2

0xa7a9,	// (0x000301de) bg_active_tab_pane_g3_cp2

0xa7a0,	// (0x000301d5) bg_passive_tab_pane_g1_cp2

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp2

0xa7a9,	// (0x000301de) bg_passive_tab_pane_g3_cp2

0xa7b2,	// (0x000301e7) bg_active_tab_pane_g1_cp3

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp3

0xa7bb,	// (0x000301f0) bg_active_tab_pane_g3_cp3

0xa7b2,	// (0x000301e7) bg_passive_tab_pane_g1_cp3

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp3

0xa7bb,	// (0x000301f0) bg_passive_tab_pane_g3_cp3

0xa7c4,	// (0x000301f9) bg_active_tab_pane_g1_cp4

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp4

0xa7cd,	// (0x00030202) bg_active_tab_pane_g3_cp4

0xa7c4,	// (0x000301f9) bg_passive_tab_pane_g1_cp4

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp4

0xa7cd,	// (0x00030202) bg_passive_tab_pane_g3_cp4

0x0617,	// (0x0002604c) bg_active_tab_pane_g1_cp5

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp5

0x0620,	// (0x00026055) bg_active_tab_pane_g3_cp5

0x0617,	// (0x0002604c) bg_passive_tab_pane_g1_cp5

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp5

0x0620,	// (0x00026055) bg_passive_tab_pane_g3_cp5

0x470a,	// (0x0002a13f) list_set_graphic_pane_ParamLimits

0x470a,	// (0x0002a13f) list_set_graphic_pane

0x9f6c,	// (0x0002f9a1) bg_set_opt_pane_cp4

0xa7d6,	// (0x0003020b) list_set_graphic_pane_g1_ParamLimits

0xa7d6,	// (0x0003020b) list_set_graphic_pane_g1

0xa7e2,	// (0x00030217) list_set_graphic_pane_g2_ParamLimits

0xa7e2,	// (0x00030217) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003518e) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003518e) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x00035511) volume_small_pane_cp_g

0xa806,	// (0x0003023b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa806,	// (0x0003023b) list_double2_large_graphic_pane_g1_cp2

0xa814,	// (0x00030249) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa814,	// (0x00030249) list_double2_large_graphic_pane_g2_cp2

0x068d,	// (0x000260c2) list_double2_large_graphic_pane_g3_cp2

0x0695,	// (0x000260ca) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0695,	// (0x000260ca) list_double2_large_graphic_pane_t1_cp2

0x06ab,	// (0x000260e0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x06ab,	// (0x000260e0) list_double2_large_graphic_pane_t2_cp2

0xba3a,	// (0x0003146f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xba3a,	// (0x0003146f) list_double_large_graphic_pane_g1_cp2

0xba4d,	// (0x00031482) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xba4d,	// (0x00031482) list_double_large_graphic_pane_g2_cp2

0x0821,	// (0x00026256) list_double_large_graphic_pane_g3_cp2

0x3cb0,	// (0x000296e5) list_double_large_graphic_pane_g4_cp

0x3cb8,	// (0x000296ed) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3cb8,	// (0x000296ed) list_double_large_graphic_pane_t1_cp2

0x3ccf,	// (0x00029704) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3ccf,	// (0x00029704) list_double_large_graphic_pane_t2_cp2

0xa825,	// (0x0003025a) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa825,	// (0x0003025a) list_double2_graphic_pane_g1_cp2

0xa833,	// (0x00030268) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa833,	// (0x00030268) list_double2_graphic_pane_g2_cp2

0xa844,	// (0x00030279) list_double2_graphic_pane_g3_cp2

0x073a,	// (0x0002616f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x073a,	// (0x0002616f) list_double2_graphic_pane_t1_cp2

0x0750,	// (0x00026185) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0750,	// (0x00026185) list_double2_graphic_pane_t2_cp2

0x0762,	// (0x00026197) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0762,	// (0x00026197) list_single_number_heading_pane_g1_cp2

0x076e,	// (0x000261a3) list_single_number_heading_pane_g2_cp2

0x0776,	// (0x000261ab) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0776,	// (0x000261ab) list_single_number_heading_pane_t1_cp2

0xa84e,	// (0x00030283) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa84e,	// (0x00030283) list_single_number_heading_pane_t2_cp2

0x07a0,	// (0x000261d5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x07a0,	// (0x000261d5) list_single_number_heading_pane_t3_cp2

0x0762,	// (0x00026197) list_single_heading_pane_g1_cp2_ParamLimits

0x0762,	// (0x00026197) list_single_heading_pane_g1_cp2

0x076e,	// (0x000261a3) list_single_heading_pane_g2_cp2

0x0776,	// (0x000261ab) list_single_heading_pane_t1_cp2_ParamLimits

0x0776,	// (0x000261ab) list_single_heading_pane_t1_cp2

0xba26,	// (0x0003145b) list_single_heading_pane_t2_cp2_ParamLimits

0xba26,	// (0x0003145b) list_single_heading_pane_t2_cp2

0x39ce,	// (0x00029403) list_double_graphic_pane_g1_cp2_ParamLimits

0x39ce,	// (0x00029403) list_double_graphic_pane_g1_cp2

0x39da,	// (0x0002940f) list_double_graphic_pane_g2_cp2_ParamLimits

0x39da,	// (0x0002940f) list_double_graphic_pane_g2_cp2

0x39e9,	// (0x0002941e) list_double_graphic_pane_g3_cp2

0x39f1,	// (0x00029426) list_double_graphic_pane_t1_cp2_ParamLimits

0x39f1,	// (0x00029426) list_double_graphic_pane_t1_cp2

0x3a07,	// (0x0002943c) list_double_graphic_pane_t2_cp2_ParamLimits

0x3a07,	// (0x0002943c) list_double_graphic_pane_t2_cp2

0x0815,	// (0x0002624a) list_double_number_pane_g1_cp2_ParamLimits

0x0815,	// (0x0002624a) list_double_number_pane_g1_cp2

0x0821,	// (0x00026256) list_double_number_pane_g2_cp2

0xb9c0,	// (0x000313f5) list_double_number_pane_t1_cp2_ParamLimits

0xb9c0,	// (0x000313f5) list_double_number_pane_t1_cp2

0x39a6,	// (0x000293db) list_double_number_pane_t2_cp2_ParamLimits

0x39a6,	// (0x000293db) list_double_number_pane_t2_cp2

0x39bc,	// (0x000293f1) list_double_number_pane_t3_cp2_ParamLimits

0x39bc,	// (0x000293f1) list_double_number_pane_t3_cp2

0xb8fd,	// (0x00031332) list_single_graphic_pane_g1_cp2_ParamLimits

0xb8fd,	// (0x00031332) list_single_graphic_pane_g1_cp2

0x087b,	// (0x000262b0) list_single_graphic_pane_g2_cp2_ParamLimits

0x087b,	// (0x000262b0) list_single_graphic_pane_g2_cp2

0x0887,	// (0x000262bc) list_single_graphic_pane_g3_cp2

0x3851,	// (0x00029286) list_single_graphic_pane_t1_cp2_ParamLimits

0x3851,	// (0x00029286) list_single_graphic_pane_t1_cp2

0x087b,	// (0x000262b0) list_single_number_pane_g1_cp2_ParamLimits

0x087b,	// (0x000262b0) list_single_number_pane_g1_cp2

0x0887,	// (0x000262bc) list_single_number_pane_g2_cp2

0x3851,	// (0x00029286) list_single_number_pane_t1_cp2_ParamLimits

0x3851,	// (0x00029286) list_single_number_pane_t1_cp2

0xb8e9,	// (0x0003131e) list_single_number_pane_t2_cp2_ParamLimits

0xb8e9,	// (0x0003131e) list_single_number_pane_t2_cp2

0xa814,	// (0x00030249) list_double2_pane_g1_cp2_ParamLimits

0xa814,	// (0x00030249) list_double2_pane_g1_cp2

0x068d,	// (0x000260c2) list_double2_pane_g2_cp2

0x07ed,	// (0x00026222) list_double2_pane_t1_cp2_ParamLimits

0x07ed,	// (0x00026222) list_double2_pane_t1_cp2

0x0803,	// (0x00026238) list_double2_pane_t2_cp2_ParamLimits

0x0803,	// (0x00026238) list_double2_pane_t2_cp2

0x0815,	// (0x0002624a) list_double_pane_g1_cp2_ParamLimits

0x0815,	// (0x0002624a) list_double_pane_g1_cp2

0x0821,	// (0x00026256) list_double_pane_g2_cp2

0x0829,	// (0x0002625e) list_double_pane_t1_cp2_ParamLimits

0x0829,	// (0x0002625e) list_double_pane_t1_cp2

0x083f,	// (0x00026274) list_double_pane_t2_cp2_ParamLimits

0x083f,	// (0x00026274) list_double_pane_t2_cp2

0x086b,	// (0x000262a0) list_single_pane_cp2_g3

0x087b,	// (0x000262b0) list_single_pane_g1_cp2_ParamLimits

0x087b,	// (0x000262b0) list_single_pane_g1_cp2

0x0887,	// (0x000262bc) list_single_pane_g2_cp2

0x088f,	// (0x000262c4) list_single_pane_t1_cp2_ParamLimits

0x088f,	// (0x000262c4) list_single_pane_t1_cp2

0xa87c,	// (0x000302b1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa87c,	// (0x000302b1) list_single_large_graphic_pane_g1_cp2

0x08b5,	// (0x000262ea) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x08b5,	// (0x000262ea) list_single_large_graphic_pane_g2_cp2

0x08c1,	// (0x000262f6) list_single_large_graphic_pane_g3_cp2

0x08c9,	// (0x000262fe) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x08c9,	// (0x000262fe) list_single_large_graphic_pane_g4_cp1

0x08e3,	// (0x00026318) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x08e3,	// (0x00026318) list_single_large_graphic_pane_t1_cp2

0x381b,	// (0x00029250) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x381b,	// (0x00029250) list_single_graphic_heading_pane_g1_cp2

0xb76e,	// (0x000311a3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb76e,	// (0x000311a3) list_single_graphic_heading_pane_g4_cp2

0x0887,	// (0x000262bc) list_single_graphic_heading_pane_g5_cp2

0x3827,	// (0x0002925c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3827,	// (0x0002925c) list_single_graphic_heading_pane_t1_cp2

0xb77f,	// (0x000311b4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb77f,	// (0x000311b4) list_single_graphic_heading_pane_t2_cp2

0x37dc,	// (0x00029211) list_single_2graphic_pane_g1_cp2_ParamLimits

0x37dc,	// (0x00029211) list_single_2graphic_pane_g1_cp2

0xb76e,	// (0x000311a3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb76e,	// (0x000311a3) list_single_2graphic_pane_g2_cp2

0x0887,	// (0x000262bc) list_single_2graphic_pane_g3_cp2

0x37f9,	// (0x0002922e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x37f9,	// (0x0002922e) list_single_2graphic_pane_g4_cp2

0x3805,	// (0x0002923a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3805,	// (0x0002923a) list_single_2graphic_pane_t1_cp2

0x9e7c,	// (0x0002f8b1) list_highlight_pane_g10_cp1

0x33b4,	// (0x00028de9) list_highlight_pane_g1_cp1

0x33bc,	// (0x00028df1) list_highlight_pane_g2_cp1

0x33c4,	// (0x00028df9) list_highlight_pane_g3_cp1

0x33cc,	// (0x00028e01) list_highlight_pane_g4_cp1

0x33d4,	// (0x00028e09) list_highlight_pane_g5_cp1

0x33dc,	// (0x00028e11) list_highlight_pane_g6_cp1

0x33e4,	// (0x00028e19) list_highlight_pane_g7_cp1

0x33ec,	// (0x00028e21) list_highlight_pane_g8_cp1

0x33f4,	// (0x00028e29) list_highlight_pane_g9_cp1

0xb734,	// (0x00031169) form_field_slider_pane_t3

0xb742,	// (0x00031177) form_field_slider_pane_t4

0x32f0,	// (0x00028d25) slider_form_pane_ParamLimits

0x32f0,	// (0x00028d25) slider_form_pane

0x9f6c,	// (0x0002f9a1) control_abbreviations

0x9f6c,	// (0x0002f9a1) control_conventions

0x9f6c,	// (0x0002f9a1) control_definitions

0x9f6c,	// (0x0002f9a1) format_table_attribute

0x3adc,	// (0x00029511) bg_popup_preview_window_pane_g9

0x9f6c,	// (0x0002f9a1) format_table_data2

0x9f6c,	// (0x0002f9a1) format_table_data3

0x9f6c,	// (0x0002f9a1) format_table_data_example

0x0008,

0x9f6c,	// (0x0002f9a1) intro_purpose

0xf8f0,	// (0x00035325) bg_popup_preview_window_pane_g

0x9f6c,	// (0x0002f9a1) texts_category

0x9f6c,	// (0x0002f9a1) texts_graphics

0x08f9,	// (0x0002632e) text_digital

0x0908,	// (0x0002633d) text_primary

0x0917,	// (0x0002634c) text_primary_small

0x0926,	// (0x0002635b) text_secondary

0x0935,	// (0x0002636a) text_title

0x424f,	// (0x00029c84) bg_passive_tab_pane_g1_cp3_srt

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp3_srt

0x4258,	// (0x00029c8d) bg_passive_tab_pane_g3_cp3_srt

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp3_srt_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp3_srt

0x4261,	// (0x00029c96) tabs_4_active_pane_srt_g1

0xbd33,	// (0x00031768) tabs_4_active_pane_srt_t1_ParamLimits

0xbd33,	// (0x00031768) tabs_4_active_pane_srt_t1

0x424f,	// (0x00029c84) bg_active_tab_pane_g1_cp3_copy1

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp3_copy1

0x4258,	// (0x00029c8d) bg_active_tab_pane_g3_cp3_copy1

0xa1ed,	// (0x0002fc22) tabs_2_long_active_pane_srt_ParamLimits

0xa1ed,	// (0x0002fc22) tabs_2_long_active_pane_srt

0xa1ed,	// (0x0002fc22) tabs_2_long_passive_pane_srt_ParamLimits

0xa1ed,	// (0x0002fc22) tabs_2_long_passive_pane_srt

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp4_srt

0x3f19,	// (0x0002994e) bg_passive_tab_pane_g1_cp4_srt

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp4_srt

0x3f22,	// (0x00029957) bg_passive_tab_pane_g3_cp4_srt

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp4_srt_ParamLimits

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp4_srt

0xbb11,	// (0x00031546) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbb11,	// (0x00031546) tabs_2_long_active_pane_srt_t1

0x3f19,	// (0x0002994e) bg_active_tab_pane_g1_cp4_srt

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp4_srt

0x3f22,	// (0x00029957) bg_active_tab_pane_g3_cp4_srt

0xa1ab,	// (0x0002fbe0) tabs_3_long_active_pane_srt_ParamLimits

0xa1ab,	// (0x0002fbe0) tabs_3_long_active_pane_srt

0xa1ab,	// (0x0002fbe0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa1ab,	// (0x0002fbe0) tabs_3_long_passive_pane_cp_srt

0xa1ab,	// (0x0002fbe0) tabs_3_long_passive_pane_srt_ParamLimits

0xa1ab,	// (0x0002fbe0) tabs_3_long_passive_pane_srt

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp5_srt

0x0617,	// (0x0002604c) bg_passive_tab_pane_g1_cp5_srt

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp5_srt

0x0620,	// (0x00026055) bg_passive_tab_pane_g3_cp5_srt

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp5_srt_ParamLimits

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp5_srt

0xbafb,	// (0x00031530) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbafb,	// (0x00031530) tabs_3_long_active_pane_srt_t1

0x0617,	// (0x0002604c) bg_active_tab_pane_g1_cp5_srt

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp5_srt

0x0620,	// (0x00026055) bg_active_tab_pane_g3_cp5_srt

0x3ef9,	// (0x0002992e) navi_text_pane_srt_t1

0x3ef1,	// (0x00029926) navi_icon_pane_srt_g1

0x0ba9,	// (0x000265de) midp_editing_number_pane_srt

0x0944,	// (0x00026379) midp_ticker_pane_srt

0x0bb1,	// (0x000265e6) midp_ticker_pane_srt_g1

0x0bb9,	// (0x000265ee) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x000351ad) midp_ticker_pane_srt_g

0x0bc1,	// (0x000265f6) midp_ticker_pane_srt_t1

0x3ee2,	// (0x00029917) midp_editing_number_pane_t1_copy1

0x0eb9,	// (0x000268ee) listscroll_midp_pane

0x0eb9,	// (0x000268ee) midp_form_pane

0x09ae,	// (0x000263e3) midp_info_popup_window_ParamLimits

0x09ae,	// (0x000263e3) midp_info_popup_window

0xd17f,	// (0x00032bb4) bg_popup_sub_pane_cp50_ParamLimits

0xd17f,	// (0x00032bb4) bg_popup_sub_pane_cp50

0x2fea,	// (0x00028a1f) listscroll_midp_info_pane_ParamLimits

0x2fea,	// (0x00028a1f) listscroll_midp_info_pane

0x2fd2,	// (0x00028a07) listscroll_form_midp_pane_ParamLimits

0x2fd2,	// (0x00028a07) listscroll_form_midp_pane

0x2fde,	// (0x00028a13) scroll_bar_cp050

0xb728,	// (0x0003115d) list_midp_pane

0x4cea,	// (0x0002a71f) signal_pane_g2_cp

0x2eec,	// (0x00028921) listscroll_midp_info_pane_t1_ParamLimits

0x2eec,	// (0x00028921) listscroll_midp_info_pane_t1

0x2f04,	// (0x00028939) listscroll_midp_info_pane_t2_ParamLimits

0x2f04,	// (0x00028939) listscroll_midp_info_pane_t2

0x2f42,	// (0x00028977) listscroll_midp_info_pane_t3_ParamLimits

0x2f42,	// (0x00028977) listscroll_midp_info_pane_t3

0x2f7c,	// (0x000289b1) listscroll_midp_info_pane_t4_ParamLimits

0x2f7c,	// (0x000289b1) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00035260) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00035260) listscroll_midp_info_pane_t

0xd1ff,	// (0x00032c34) scroll_pane_cp21

0x2e86,	// (0x000288bb) form_midp_field_choice_group_pane

0x2e8f,	// (0x000288c4) form_midp_field_text_pane

0x2ed2,	// (0x00028907) form_midp_field_time_pane

0x2eda,	// (0x0002890f) form_midp_gauge_slider_pane

0x2ee3,	// (0x00028918) form_midp_gauge_wait_pane

0x9f6c,	// (0x0002f9a1) form_midp_image_pane

0x9be7,	// (0x0002f61c) list_single_midp_pane_ParamLimits

0x9be7,	// (0x0002f61c) list_single_midp_pane

0xb700,	// (0x00031135) form_midp_field_text_pane_t1

0x2c36,	// (0x0002866b) input_focus_pane_cp050

0x2e75,	// (0x000288aa) list_midp_form_text_pane

0x2e19,	// (0x0002884e) form_midp_field_choice_group_pane_t1

0x2e27,	// (0x0002885c) input_focus_pane_cp051

0x2e3b,	// (0x00028870) list_midp_choice_pane

0x9f6c,	// (0x0002f9a1) status_idle_pane

0x2dfd,	// (0x00028832) form_midp_field_time_pane_t1

0x9e7c,	// (0x0002f8b1) wait_anim_pane_g2_copy1

0x2e0b,	// (0x00028840) form_midp_field_time_pane_t2

0x0001,

0x0a5e,	// (0x00026493) aid_navinavi_width_2_pane

0xf826,	// (0x0003525b) form_midp_field_time_pane_t

0x9f6c,	// (0x0002f9a1) input_focus_pane_cp052

0x9f6c,	// (0x0002f9a1) bg_input_focus_pane_cp040

0x2dbd,	// (0x000287f2) form_midp_gauge_slider_pane_t1

0x2dcb,	// (0x00028800) form_midp_gauge_slider_pane_t2

0xb6e4,	// (0x00031119) form_midp_gauge_slider_pane_t3

0xb6f2,	// (0x00031127) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00035252) form_midp_gauge_slider_pane_t

0x2df5,	// (0x0002882a) form_midp_slider_pane

0xa1ed,	// (0x0002fc22) bg_input_focus_pane_cp041_ParamLimits

0xa1ed,	// (0x0002fc22) bg_input_focus_pane_cp041

0x2d8a,	// (0x000287bf) form_midp_gauge_wait_pane_t1_ParamLimits

0x2d8a,	// (0x000287bf) form_midp_gauge_wait_pane_t1

0x2d9c,	// (0x000287d1) form_midp_gauge_wait_pane_t2_ParamLimits

0x2d9c,	// (0x000287d1) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0003524d) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0003524d) form_midp_gauge_wait_pane_t

0x2dae,	// (0x000287e3) form_midp_wait_pane_ParamLimits

0x2dae,	// (0x000287e3) form_midp_wait_pane

0x2d52,	// (0x00028787) form_midp_image_pane_g1

0x2d5b,	// (0x00028790) form_midp_image_pane_t1

0x2d6a,	// (0x0002879f) form_midp_image_pane_t2

0x2d79,	// (0x000287ae) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00035246) form_midp_image_pane_t

0x2d49,	// (0x0002877e) list_single_midp_pane_g1

0xeda0,	// (0x000347d5) list_single_midp_pane_t1

0xb6cd,	// (0x00031102) list_midp_form_item_pane_ParamLimits

0xb6cd,	// (0x00031102) list_midp_form_item_pane

0x0a06,	// (0x0002643b) list_midp_form_item_pane_t1

0x0a15,	// (0x0002644a) midp_ticker_pane_g1

0x0a21,	// (0x00026456) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00035193) midp_ticker_pane_g

0xa921,	// (0x00030356) midp_ticker_pane_t1

0xbca0,	// (0x000316d5) midp_editing_number_pane_t1

0x4133,	// (0x00029b68) midp_editing_number_pane

0x4142,	// (0x00029b77) midp_ticker_pane

0x3ed2,	// (0x00029907) ai_message_heading_pane

0x9f6c,	// (0x0002f9a1) bg_popup_window_pane_cp14

0x3eda,	// (0x0002990f) listscroll_ai_message_pane

0x3e58,	// (0x0002988d) ai_message_heading_pane_g1_ParamLimits

0x3e58,	// (0x0002988d) ai_message_heading_pane_g1

0x3e64,	// (0x00029899) ai_message_heading_pane_g2_ParamLimits

0x3e64,	// (0x00029899) ai_message_heading_pane_g2

0x3e72,	// (0x000298a7) ai_message_heading_pane_g3_ParamLimits

0x3e72,	// (0x000298a7) ai_message_heading_pane_g3

0x3e7e,	// (0x000298b3) ai_message_heading_pane_g4_ParamLimits

0x3e7e,	// (0x000298b3) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00035387) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00035387) ai_message_heading_pane_g

0x3e8a,	// (0x000298bf) ai_message_heading_pane_t1_ParamLimits

0x3e8a,	// (0x000298bf) ai_message_heading_pane_t1

0x3ea4,	// (0x000298d9) ai_message_heading_pane_t2_ParamLimits

0x3ea4,	// (0x000298d9) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00035390) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00035390) ai_message_heading_pane_t

0x3eb8,	// (0x000298ed) bg_popup_heading_pane_cp1_ParamLimits

0x3eb8,	// (0x000298ed) bg_popup_heading_pane_cp1

0x3e46,	// (0x0002987b) list_ai_message_pane_ParamLimits

0x3e46,	// (0x0002987b) list_ai_message_pane

0xd1ff,	// (0x00032c34) scroll_pane_cp10

0x3de2,	// (0x00029817) list_ai_message_pane_g1

0x3dea,	// (0x0002981f) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00035364) list_ai_message_pane_g

0x3df2,	// (0x00029827) list_ai_message_pane_t1_ParamLimits

0x3df2,	// (0x00029827) list_ai_message_pane_t1

0x3e07,	// (0x0002983c) list_ai_message_pane_t2_ParamLimits

0x3e07,	// (0x0002983c) list_ai_message_pane_t2

0x3e1c,	// (0x00029851) list_ai_message_pane_t3_ParamLimits

0x3e1c,	// (0x00029851) list_ai_message_pane_t3

0x3e31,	// (0x00029866) list_ai_message_pane_t4_ParamLimits

0x3e31,	// (0x00029866) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00035369) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00035369) list_ai_message_pane_t

0xbae1,	// (0x00031516) cell_ai_soft_ind_pane_ParamLimits

0xbae1,	// (0x00031516) cell_ai_soft_ind_pane

0x0a3f,	// (0x00026474) cell_ai_soft_ind_pane_g1_ParamLimits

0x0a3f,	// (0x00026474) cell_ai_soft_ind_pane_g1

0x9f6c,	// (0x0002f9a1) grid_highlight_cp1

0x0a4c,	// (0x00026481) text_secondary_cp56_ParamLimits

0x0a4c,	// (0x00026481) text_secondary_cp56

0x3da0,	// (0x000297d5) example_general_pane_ParamLimits

0x3da0,	// (0x000297d5) example_general_pane

0x3dac,	// (0x000297e1) example_parent_pane_g1_ParamLimits

0x3dac,	// (0x000297e1) example_parent_pane_g1

0x3db8,	// (0x000297ed) example_parent_pane_t1_ParamLimits

0x3db8,	// (0x000297ed) example_parent_pane_t1

0xaee0,	// (0x00030915) popup_preview_text_window_ParamLimits

0xaee0,	// (0x00030915) popup_preview_text_window

0x0873,	// (0x000262a8) list_single_pane_cp2_g4

0xcc99,	// (0x000326ce) bg_popup_preview_window_pane_ParamLimits

0xcc99,	// (0x000326ce) bg_popup_preview_window_pane

0x3ae6,	// (0x0002951b) popup_preview_text_window_t1_ParamLimits

0x3ae6,	// (0x0002951b) popup_preview_text_window_t1

0x3b04,	// (0x00029539) popup_preview_text_window_t2_ParamLimits

0x3b04,	// (0x00029539) popup_preview_text_window_t2

0x3b4d,	// (0x00029582) popup_preview_text_window_t3_ParamLimits

0x3b4d,	// (0x00029582) popup_preview_text_window_t3

0x3b92,	// (0x000295c7) popup_preview_text_window_t4_ParamLimits

0x3b92,	// (0x000295c7) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00035338) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00035338) popup_preview_text_window_t

0x3c10,	// (0x00029645) scroll_pane_cp11

0x1a2a,	// (0x0002745f) bg_popup_preview_window_pane_g1

0x3a9a,	// (0x000294cf) bg_popup_preview_window_pane_g2

0x3aa4,	// (0x000294d9) bg_popup_preview_window_pane_g3

0x3aae,	// (0x000294e3) bg_popup_preview_window_pane_g4

0x3ab8,	// (0x000294ed) bg_popup_preview_window_pane_g5

0x3ac2,	// (0x000294f7) bg_popup_preview_window_pane_g6

0x3aca,	// (0x000294ff) bg_popup_preview_window_pane_g7

0x3ad2,	// (0x00029507) bg_popup_preview_window_pane_g8

0xf1f0,	// (0x00034c25) aid_popup_width_pane

0xae50,	// (0x00030885) popup_midp_note_alarm_window_ParamLimits

0xae50,	// (0x00030885) popup_midp_note_alarm_window

0xd0c7,	// (0x00032afc) data_form_pane_ParamLimits

0x9a43,	// (0x0002f478) form_field_data_pane_g1

0x9a4d,	// (0x0002f482) form_field_data_pane_t1_ParamLimits

0xd0d3,	// (0x00032b08) input_focus_pane_ParamLimits

0xebbf,	// (0x000345f4) data_form_wide_pane_ParamLimits

0xebd0,	// (0x00034605) form_field_data_wide_pane_g1

0xebdc,	// (0x00034611) form_field_data_wide_pane_t1_ParamLimits

0xce4e,	// (0x00032883) input_focus_pane_cp6_ParamLimits

0xa555,	// (0x0002ff8a) input_popup_find_pane_g1_ParamLimits

0xa555,	// (0x0002ff8a) input_popup_find_pane_g1

0x012a,	// (0x00025b5f) aid_navi_side_left_pane

0x013f,	// (0x00025b74) aid_navi_side_right_pane

0x34af,	// (0x00028ee4) bg_popup_window_pane_cp30_ParamLimits

0x34af,	// (0x00028ee4) bg_popup_window_pane_cp30

0x3529,	// (0x00028f5e) popup_midp_note_alarm_window_g1_ParamLimits

0x3529,	// (0x00028f5e) popup_midp_note_alarm_window_g1

0x3559,	// (0x00028f8e) popup_midp_note_alarm_window_t1_ParamLimits

0x3559,	// (0x00028f8e) popup_midp_note_alarm_window_t1

0x35fa,	// (0x0002902f) popup_midp_note_alarm_window_t2_ParamLimits

0x35fa,	// (0x0002902f) popup_midp_note_alarm_window_t2

0x36a8,	// (0x000290dd) popup_midp_note_alarm_window_t3_ParamLimits

0x36a8,	// (0x000290dd) popup_midp_note_alarm_window_t3

0x36da,	// (0x0002910f) popup_midp_note_alarm_window_t4_ParamLimits

0x36da,	// (0x0002910f) popup_midp_note_alarm_window_t4

0x3700,	// (0x00029135) popup_midp_note_alarm_window_t5_ParamLimits

0x3700,	// (0x00029135) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x000352d5) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x000352d5) popup_midp_note_alarm_window_t

0x37ac,	// (0x000291e1) wait_bar_pane_cp1_ParamLimits

0x37ac,	// (0x000291e1) wait_bar_pane_cp1

0x9f6c,	// (0x0002f9a1) wait_anim_pane_copy1

0x9f6c,	// (0x0002f9a1) wait_border_pane_copy1

0x3194,	// (0x00028bc9) wait_border_pane_g1_copy1

0xebf6,	// (0x0003462b) form_field_popup_pane_g1

0x9a67,	// (0x0002f49c) form_field_popup_pane_t1_ParamLimits

0xd0d3,	// (0x00032b08) input_focus_pane_cp7_ParamLimits

0xd101,	// (0x00032b36) list_form_pane_ParamLimits

0xebfe,	// (0x00034633) form_field_popup_wide_pane_g1

0xec06,	// (0x0003463b) form_field_popup_wide_pane_t1_ParamLimits

0xd0d3,	// (0x00032b08) input_focus_pane_cp8_ParamLimits

0xd10d,	// (0x00032b42) list_form_wide_pane_ParamLimits

0x42dc,	// (0x00029d11) aid_size_cell_graphic_pane

0x9ae6,	// (0x0002f51b) data_form_pane_t1_ParamLimits

0x9c19,	// (0x0002f64e) data_form_wide_pane_t1_ParamLimits

0xb2e4,	// (0x00030d19) bg_status_flat_pane

0xa0e7,	// (0x0002fb1c) title_pane_t1_ParamLimits

0xa173,	// (0x0002fba8) title_pane_t2_ParamLimits

0xa199,	// (0x0002fbce) title_pane_t3_ParamLimits

0xf55d,	// (0x00034f92) title_pane_t_ParamLimits

0xa665,	// (0x0003009a) level_1_signal_ParamLimits

0xa677,	// (0x000300ac) level_2_signal_ParamLimits

0xa68a,	// (0x000300bf) level_3_signal_ParamLimits

0xa69d,	// (0x000300d2) level_4_signal_ParamLimits

0xa6b0,	// (0x000300e5) level_5_signal_ParamLimits

0xa6c3,	// (0x000300f8) level_6_signal_ParamLimits

0xa6d6,	// (0x0003010b) level_7_signal_ParamLimits

0xa665,	// (0x0003009a) level_1_battery_ParamLimits

0xa677,	// (0x000300ac) level_2_battery_ParamLimits

0xa68a,	// (0x000300bf) level_3_battery_ParamLimits

0xa69d,	// (0x000300d2) level_4_battery_ParamLimits

0xa6b0,	// (0x000300e5) level_5_battery_ParamLimits

0xa6c3,	// (0x000300f8) level_6_battery_ParamLimits

0xa6d6,	// (0x0003010b) level_7_battery_ParamLimits

0x33b4,	// (0x00028de9) bg_status_flat_pane_g1

0x33bc,	// (0x00028df1) bg_status_flat_pane_g2

0x33c4,	// (0x00028df9) bg_status_flat_pane_g3

0x33cc,	// (0x00028e01) bg_status_flat_pane_g4

0x33d4,	// (0x00028e09) bg_status_flat_pane_g5

0x33dc,	// (0x00028e11) bg_status_flat_pane_g6

0x33e4,	// (0x00028e19) bg_status_flat_pane_g7

0xa1c1,	// (0x0002fbf6) tabs_3_active_pane_t1_ParamLimits

0xa1c1,	// (0x0002fbf6) tabs_3_passive_pane_t1_ParamLimits

0xa1db,	// (0x0002fc10) tabs_4_active_pane_t1_ParamLimits

0xa1db,	// (0x0002fc10) tabs_4_1_passive_pane_t1_ParamLimits

0xa56b,	// (0x0002ffa0) tabs_2_active_pane_t1_ParamLimits

0xa56b,	// (0x0002ffa0) tabs_2_passive_pane_t1_ParamLimits

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp4_ParamLimits

0xa57d,	// (0x0002ffb2) tabs_2_long_active_pane_t1_ParamLimits

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp4_ParamLimits

0x1abe,	// (0x000274f3) list_single_midp_graphic_pane_t1_ParamLimits

0xa1ed,	// (0x0002fc22) bg_active_tab_pane_cp5_ParamLimits

0xa590,	// (0x0002ffc5) tabs_3_long_active_pane_t1_ParamLimits

0x0eb9,	// (0x000268ee) bg_passive_tab_pane_cp5_ParamLimits

0x1abe,	// (0x000274f3) list_single_midp_graphic_pane_t1

0xb2e4,	// (0x00030d19) bg_status_flat_pane_ParamLimits

0x1672,	// (0x000270a7) indicator_pane_cp2_ParamLimits

0x1672,	// (0x000270a7) indicator_pane_cp2

0xb47a,	// (0x00030eaf) navi_pane_srt_ParamLimits

0xb47a,	// (0x00030eaf) navi_pane_srt

0x17d9,	// (0x0002720e) popup_clock_digital_analogue_window_cp1

0xa30a,	// (0x0002fd3f) indicator_pane_t1

0x0944,	// (0x00026379) copy_highlight_pane

0x0944,	// (0x00026379) cursor_graphics_pane

0x0944,	// (0x00026379) graphic_within_text_pane

0x0944,	// (0x00026379) link_highlight_pane

0x3bd3,	// (0x00029608) popup_preview_text_window_t5_ParamLimits

0x3bd3,	// (0x00029608) popup_preview_text_window_t5

0x0a68,	// (0x0002649d) cursor_digital_pane

0x0a68,	// (0x0002649d) cursor_primary_pane

0x0a79,	// (0x000264ae) cursor_primary_small_pane

0x0a81,	// (0x000264b6) cursor_secondary_pane

0x0a89,	// (0x000264be) cursor_title_pane

0x0a68,	// (0x0002649d) link_highlight_digital_pane

0x0a70,	// (0x000264a5) link_highlight_primary_pane

0x0a79,	// (0x000264ae) link_highlight_primary_small_pane

0x0a81,	// (0x000264b6) link_highlight_secondary_pane

0x0a89,	// (0x000264be) link_highlight_title_pane

0x0a68,	// (0x0002649d) copy_highlight_digital_pane

0x0a68,	// (0x0002649d) copy_highlight_primary_pane

0x0a79,	// (0x000264ae) copy_highlight_primary_small_pane

0x0a81,	// (0x000264b6) copy_highlight_secondary_pane

0x0a89,	// (0x000264be) copy_highlight_title_pane

0x0a81,	// (0x000264b6) graphic_text_digital_pane

0x3452,	// (0x00028e87) graphic_text_primary_pane

0x345b,	// (0x00028e90) graphic_text_primary_small_pane

0x0a79,	// (0x000264ae) graphic_text_secondary_pane

0x0a68,	// (0x0002649d) graphic_text_title_pane

0xa933,	// (0x00030368) cursor_primary_pane_g1

0x3444,	// (0x00028e79) cursor_text_primary_t1

0xb764,	// (0x00031199) cursor_primary_small_pane_g1

0x3436,	// (0x00028e6b) cursor_text_primary_small_t1

0xb75a,	// (0x0003118f) cursor_primary_small_pane_g1_copy1

0x341e,	// (0x00028e53) cursor_text_primary_small_t1_copy1

0x33fc,	// (0x00028e31) cursor_text_title_t1

0xb750,	// (0x00031185) cursor_title_pane_g1

0xa933,	// (0x00030368) cursor_digital_pane_g1

0x0a9b,	// (0x000264d0) cursor_text_digital_t1

0x0aa9,	// (0x000264de) link_highlight_primary_pane_g1

0x33a5,	// (0x00028dda) link_highlight_primary_pane_t1

0x0aa9,	// (0x000264de) link_highlight_primary_small_pane_g1

0x0ab1,	// (0x000264e6) link_highlight_primary_small_pane_t1

0x0ac0,	// (0x000264f5) link_highlight_secondary_pane_g1

0x0ac8,	// (0x000264fd) link_highlight_secondary_pane_t1

0x3319,	// (0x00028d4e) link_highlight_title_pane_g1

0x3321,	// (0x00028d56) link_highlight_title_pane_t1

0x3302,	// (0x00028d37) link_highlight_digital_pane_g1

0x330a,	// (0x00028d3f) link_highlight_digital_pane_t1

0x31ca,	// (0x00028bff) copy_highlight_primary_pane_g1

0x31e1,	// (0x00028c16) copy_highlight_primary_pane_t1

0x31ca,	// (0x00028bff) copy_highlight_primary_small_pane_g1

0x31d2,	// (0x00028c07) copy_highlight_primary_small_pane_t1

0x0ad7,	// (0x0002650c) copy_highlight_secondary_pane_g1

0x0adf,	// (0x00026514) copy_highlight_secondary_pane_t1

0x31b3,	// (0x00028be8) copy_highlight_title_pane_g1

0x31bb,	// (0x00028bf0) copy_highlight_title_pane_t1

0x31ca,	// (0x00028bff) copy_highlight_digital_pane_g1

0x44ac,	// (0x00029ee1) copy_highlight_digital_pane_t1

0x4400,	// (0x00029e35) graphic_text_primary_pane_g1

0x4490,	// (0x00029ec5) graphic_text_primary_pane_t1

0x449e,	// (0x00029ed3) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00035404) graphic_text_primary_pane_t

0x446c,	// (0x00029ea1) graphic_text_primary_small_pane_g1

0x4474,	// (0x00029ea9) graphic_text_primary_small_pane_t1

0x4482,	// (0x00029eb7) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x000353ff) graphic_text_primary_small_pane_t

0x4448,	// (0x00029e7d) graphic_text_secondary_pane_g1

0x4450,	// (0x00029e85) graphic_text_secondary_pane_t1

0x445e,	// (0x00029e93) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x000353fa) graphic_text_secondary_pane_t

0x4424,	// (0x00029e59) graphic_text_title_pane_g1

0x442c,	// (0x00029e61) graphic_text_title_pane_t1

0x443a,	// (0x00029e6f) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x000353f5) graphic_text_title_pane_t

0x4400,	// (0x00029e35) graphic_text_digital_pane_g1

0x4408,	// (0x00029e3d) graphic_text_digital_pane_t1

0x4416,	// (0x00029e4b) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x000353f0) graphic_text_digital_pane_t

0xa1ed,	// (0x0002fc22) navi_icon_pane_srt_ParamLimits

0xa1ed,	// (0x0002fc22) navi_icon_pane_srt

0x9f6c,	// (0x0002f9a1) navi_midp_pane_srt

0x9f6c,	// (0x0002f9a1) navi_navi_pane_srt

0xa1ed,	// (0x0002fc22) navi_text_pane_srt_ParamLimits

0xa1ed,	// (0x0002fc22) navi_text_pane_srt

0x43cb,	// (0x00029e00) navi_navi_icon_text_pane_srt

0x43d3,	// (0x00029e08) navi_navi_pane_srt_g1_ParamLimits

0x43d3,	// (0x00029e08) navi_navi_pane_srt_g1

0x43e5,	// (0x00029e1a) navi_navi_pane_srt_g2_ParamLimits

0x43e5,	// (0x00029e1a) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x000353eb) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x000353eb) navi_navi_pane_srt_g

0x43f7,	// (0x00029e2c) navi_navi_tabs_pane_srt

0x43cb,	// (0x00029e00) navi_navi_text_pane_srt

0x43cb,	// (0x00029e00) navi_navi_volume_pane_srt

0x43bc,	// (0x00029df1) navi_navi_text_pane_srt_t1

0x1e18,	// (0x0002784d) navi_navi_volume_pane_srt_g1

0x1e20,	// (0x00027855) volume_small_pane_srt_ParamLimits

0x1e20,	// (0x00027855) volume_small_pane_srt

0x0aee,	// (0x00026523) volume_small_pane_srt_g1_ParamLimits

0x0aee,	// (0x00026523) volume_small_pane_srt_g1

0x0afe,	// (0x00026533) volume_small_pane_srt_g2_ParamLimits

0x0afe,	// (0x00026533) volume_small_pane_srt_g2

0x0b0f,	// (0x00026544) volume_small_pane_srt_g3_ParamLimits

0x0b0f,	// (0x00026544) volume_small_pane_srt_g3

0x0b20,	// (0x00026555) volume_small_pane_srt_g4_ParamLimits

0x0b20,	// (0x00026555) volume_small_pane_srt_g4

0x0b31,	// (0x00026566) volume_small_pane_srt_g5_ParamLimits

0x0b31,	// (0x00026566) volume_small_pane_srt_g5

0x0b42,	// (0x00026577) volume_small_pane_srt_g6_ParamLimits

0x0b42,	// (0x00026577) volume_small_pane_srt_g6

0x0b53,	// (0x00026588) volume_small_pane_srt_g7_ParamLimits

0x0b53,	// (0x00026588) volume_small_pane_srt_g7

0x0b64,	// (0x00026599) volume_small_pane_srt_g8_ParamLimits

0x0b64,	// (0x00026599) volume_small_pane_srt_g8

0x0b75,	// (0x000265aa) volume_small_pane_srt_g9_ParamLimits

0x0b75,	// (0x000265aa) volume_small_pane_srt_g9

0x0b86,	// (0x000265bb) volume_small_pane_srt_g10_ParamLimits

0x0b86,	// (0x000265bb) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00035198) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00035198) volume_small_pane_srt_g

0xcd4e,	// (0x00032783) query_popup_data_pane_cp2

0x43a2,	// (0x00029dd7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x43a2,	// (0x00029dd7) navi_navi_icon_text_pane_srt_t1

0x3452,	// (0x00028e87) navi_tabs_2_long_pane_srt

0x3452,	// (0x00028e87) navi_tabs_2_pane_srt

0x3452,	// (0x00028e87) navi_tabs_3_long_pane_srt

0x3452,	// (0x00028e87) navi_tabs_3_pane_srt

0x3452,	// (0x00028e87) navi_tabs_4_pane_srt

0x1df8,	// (0x0002782d) tabs_2_active_pane_srt_ParamLimits

0x1df8,	// (0x0002782d) tabs_2_active_pane_srt

0x1e08,	// (0x0002783d) tabs_2_passive_pane_srt_ParamLimits

0x1e08,	// (0x0002783d) tabs_2_passive_pane_srt

0x2c36,	// (0x0002866b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2c36,	// (0x0002866b) bg_passive_tab_pane_cp1_srt

0x436e,	// (0x00029da3) bg_passive_tab_pane_g1_cp1_srt

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp1_srt

0x4377,	// (0x00029dac) bg_passive_tab_pane_g3_cp1_srt

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp1_srt_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp1_srt

0x4380,	// (0x00029db5) tabs_2_active_pane_srt_g1

0xbdb4,	// (0x000317e9) tabs_2_active_pane_srt_t1_ParamLimits

0xbdb4,	// (0x000317e9) tabs_2_active_pane_srt_t1

0x436e,	// (0x00029da3) bg_active_tab_pane_g1_cp1_srt

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp1_srt

0x4377,	// (0x00029dac) bg_active_tab_pane_g3_cp1_srt

0x1dc5,	// (0x000277fa) tabs_3_active_pane_srt_ParamLimits

0x1dc5,	// (0x000277fa) tabs_3_active_pane_srt

0x1dd6,	// (0x0002780b) tabs_3_passive_pane_cp_srt_ParamLimits

0x1dd6,	// (0x0002780b) tabs_3_passive_pane_cp_srt

0x1de7,	// (0x0002781c) tabs_3_passive_pane_srt_ParamLimits

0x1de7,	// (0x0002781c) tabs_3_passive_pane_srt

0x2c36,	// (0x0002866b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2c36,	// (0x0002866b) bg_passive_tab_pane_cp2_srt

0x0b97,	// (0x000265cc) bg_passive_tab_pane_g1_cp2_srt

0x0449,	// (0x00025e7e) bg_passive_tab_pane_g2_cp2_srt

0x0ba0,	// (0x000265d5) bg_passive_tab_pane_g3_cp2_srt

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp2_srt_ParamLimits

0xa1ab,	// (0x0002fbe0) bg_active_tab_pane_cp2_srt

0x4354,	// (0x00029d89) tabs_3_active_pane_srt_g1

0xbd9e,	// (0x000317d3) tabs_3_active_pane_srt_t1_ParamLimits

0xbd9e,	// (0x000317d3) tabs_3_active_pane_srt_t1

0x0b97,	// (0x000265cc) bg_active_tab_pane_g1_cp2_srt

0x0449,	// (0x00025e7e) bg_active_tab_pane_g2_cp2_srt

0x0ba0,	// (0x000265d5) bg_active_tab_pane_g3_cp2_srt

0x1d7d,	// (0x000277b2) tabs_4_active_pane_srt_ParamLimits

0x1d7d,	// (0x000277b2) tabs_4_active_pane_srt

0x1d8f,	// (0x000277c4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d8f,	// (0x000277c4) tabs_4_passive_pane_cp2_srt

0x0e3f,	// (0x00026874) aid_size_cell_toolbar

0x3f8c,	// (0x000299c1) main_idle_act_pane_ParamLimits

0x1082,	// (0x00026ab7) popup_large_graphic_colour_window_ParamLimits

0xb1a6,	// (0x00030bdb) popup_toolbar_window_ParamLimits

0xb1a6,	// (0x00030bdb) popup_toolbar_window

0xedc5,	// (0x000347fa) list_single_graphic_2heading_pane_ParamLimits

0xedc5,	// (0x000347fa) list_single_graphic_2heading_pane

0xd3d7,	// (0x00032e0c) aid_size_cell_apps_grid_lsc_pane

0xd3e9,	// (0x00032e1e) aid_size_cell_apps_grid_prt_pane

0x0eb9,	// (0x000268ee) bg_wml_button_pane_cp1_ParamLimits

0x0eb9,	// (0x000268ee) bg_wml_button_pane_cp1

0xb700,	// (0x00031135) form_midp_field_text_pane_t1_ParamLimits

0x2c36,	// (0x0002866b) input_focus_pane_cp050_ParamLimits

0x2e75,	// (0x000288aa) list_midp_form_text_pane_ParamLimits

0x2e27,	// (0x0002885c) input_focus_pane_cp051_ParamLimits

0x2e3b,	// (0x00028870) list_midp_choice_pane_ParamLimits

0xb6b7,	// (0x000310ec) list_single_2graphic_pane_cp3_ParamLimits

0xb6b7,	// (0x000310ec) list_single_2graphic_pane_cp3

0x500d,	// (0x0002aa42) list_single_midp_graphic_pane_ParamLimits

0x500d,	// (0x0002aa42) list_single_midp_graphic_pane

0xec6c,	// (0x000346a1) list_single_graphic_2heading_pane_g1_ParamLimits

0xec6c,	// (0x000346a1) list_single_graphic_2heading_pane_g1

0xead4,	// (0x00034509) list_single_graphic_2heading_pane_g4_ParamLimits

0xead4,	// (0x00034509) list_single_graphic_2heading_pane_g4

0xeae0,	// (0x00034515) list_single_graphic_2heading_pane_g5_ParamLimits

0xeae0,	// (0x00034515) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x000351eb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x000351eb) list_single_graphic_2heading_pane_g

0xec78,	// (0x000346ad) list_single_graphic_2heading_pane_t1_ParamLimits

0xec78,	// (0x000346ad) list_single_graphic_2heading_pane_t1

0xec8c,	// (0x000346c1) list_single_graphic_2heading_pane_t2_ParamLimits

0xec8c,	// (0x000346c1) list_single_graphic_2heading_pane_t2

0xeca8,	// (0x000346dd) list_single_graphic_2heading_pane_t3_ParamLimits

0xeca8,	// (0x000346dd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x000351f2) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x000351f2) list_single_graphic_2heading_pane_t

0x1938,	// (0x0002736d) bg_popup_sub_pane_cp2

0x1962,	// (0x00027397) grid_toobar_pane

0x199e,	// (0x000273d3) cell_toolbar_pane_ParamLimits

0x199e,	// (0x000273d3) cell_toolbar_pane

0x19ce,	// (0x00027403) cell_toolbar_pane_g1_ParamLimits

0x19ce,	// (0x00027403) cell_toolbar_pane_g1

0x19e2,	// (0x00027417) cell_toolbar_pane_g2_ParamLimits

0x19e2,	// (0x00027417) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00035200) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00035200) cell_toolbar_pane_g

0x1a04,	// (0x00027439) grid_highlight_pane_cp2_ParamLimits

0x1a04,	// (0x00027439) grid_highlight_pane_cp2

0x1a1e,	// (0x00027453) toolbar_button_pane

0x1a2a,	// (0x0002745f) toolbar_button_pane_g1

0x1a32,	// (0x00027467) toolbar_button_pane_g2

0x1a3a,	// (0x0002746f) toolbar_button_pane_g3

0x1a42,	// (0x00027477) toolbar_button_pane_g4

0x1a4a,	// (0x0002747f) toolbar_button_pane_g5

0x1a52,	// (0x00027487) toolbar_button_pane_g6

0x1a5a,	// (0x0002748f) toolbar_button_pane_g7

0x1a62,	// (0x00027497) toolbar_button_pane_g8

0x1a6a,	// (0x0002749f) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00035205) toolbar_button_pane_g

0x1a7a,	// (0x000274af) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a7a,	// (0x000274af) list_single_2graphic_pane_g1_cp3

0xb619,	// (0x0003104e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb619,	// (0x0003104e) list_single_2graphic_pane_g2_cp3

0x076e,	// (0x000261a3) list_single_2graphic_pane_g3_cp3

0x1a97,	// (0x000274cc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1a97,	// (0x000274cc) list_single_2graphic_pane_g4_cp3

0x1aa3,	// (0x000274d8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1aa3,	// (0x000274d8) list_single_2graphic_pane_t1_cp3

0x0762,	// (0x00026197) list_single_midp_graphic_pane_g2_ParamLimits

0x0762,	// (0x00026197) list_single_midp_graphic_pane_g2

0x0e47,	// (0x0002687c) aid_zoom_text_primary

0xec5c,	// (0x00034691) aid_zoom_text_secondary

0x0c54,	// (0x00026689) status_small_pane_g7_ParamLimits

0x0c54,	// (0x00026689) status_small_pane_g7

0x0c77,	// (0x000266ac) status_small_pane_t1_ParamLimits

0xa0b7,	// (0x0002faec) title_pane_g2

0x0003,

0xf554,	// (0x00034f89) title_pane_g

0xa40e,	// (0x0002fe43) aid_size_cell_colour_1_pane_ParamLimits

0xa40e,	// (0x0002fe43) aid_size_cell_colour_1_pane

0xa422,	// (0x0002fe57) aid_size_cell_colour_2_pane_ParamLimits

0xa422,	// (0x0002fe57) aid_size_cell_colour_2_pane

0xa436,	// (0x0002fe6b) aid_size_cell_colour_3_pane_ParamLimits

0xa436,	// (0x0002fe6b) aid_size_cell_colour_3_pane

0xa44a,	// (0x0002fe7f) aid_size_cell_colour_4_pane_ParamLimits

0xa44a,	// (0x0002fe7f) aid_size_cell_colour_4_pane

0x0066,	// (0x00025a9b) title_pane_stacon_g1_ParamLimits

0x0066,	// (0x00025a9b) title_pane_stacon_g1

0x3238,	// (0x00028c6d) popup_note_wait_window_g3_ParamLimits

0x3238,	// (0x00028c6d) popup_note_wait_window_g3

0x32af,	// (0x00028ce4) popup_note_wait_window_t5_ParamLimits

0x32af,	// (0x00028ce4) popup_note_wait_window_t5

0x9f6c,	// (0x0002f9a1) main_feb_china_hwr_fs_writing_pane

0xab3d,	// (0x00030572) popup_feb_china_hwr_fs_window_ParamLimits

0xab3d,	// (0x00030572) popup_feb_china_hwr_fs_window

0xb62a,	// (0x0003105f) aid_size_cell_hwr_fs_ParamLimits

0xb62a,	// (0x0003105f) aid_size_cell_hwr_fs

0x2c36,	// (0x0002866b) bg_popup_sub_pane_cp3_ParamLimits

0x2c36,	// (0x0002866b) bg_popup_sub_pane_cp3

0xb63f,	// (0x00031074) grid_hwr_fs_pane_ParamLimits

0xb63f,	// (0x00031074) grid_hwr_fs_pane

0x1b01,	// (0x00027536) linegrid_hwr_fs_pane_ParamLimits

0x1b01,	// (0x00027536) linegrid_hwr_fs_pane

0xb657,	// (0x0003108c) cell_hwr_fs_pane_ParamLimits

0xb657,	// (0x0003108c) cell_hwr_fs_pane

0x2c42,	// (0x00028677) linegrid_hwr_fs_pane_g1_ParamLimits

0x2c42,	// (0x00028677) linegrid_hwr_fs_pane_g1

0xb67d,	// (0x000310b2) linegrid_hwr_fs_pane_g2_ParamLimits

0xb67d,	// (0x000310b2) linegrid_hwr_fs_pane_g2

0x2c60,	// (0x00028695) linegrid_hwr_fs_pane_g3_ParamLimits

0x2c60,	// (0x00028695) linegrid_hwr_fs_pane_g3

0x1b35,	// (0x0002756a) linegrid_hwr_fs_pane_g4_ParamLimits

0x1b35,	// (0x0002756a) linegrid_hwr_fs_pane_g4

0x1b53,	// (0x00027588) linegrid_hwr_fs_pane_g5_ParamLimits

0x1b53,	// (0x00027588) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0003522b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003522b) linegrid_hwr_fs_pane_g

0x2c6c,	// (0x000286a1) cell_hwr_fs_pane_g1_ParamLimits

0x2c6c,	// (0x000286a1) cell_hwr_fs_pane_g1

0x186f,	// (0x000272a4) cell_hwr_fs_pane_g2_ParamLimits

0x186f,	// (0x000272a4) cell_hwr_fs_pane_g2

0xb68f,	// (0x000310c4) cell_hwr_fs_pane_g3_ParamLimits

0xb68f,	// (0x000310c4) cell_hwr_fs_pane_g3

0xb69c,	// (0x000310d1) cell_hwr_fs_pane_g4_ParamLimits

0xb69c,	// (0x000310d1) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00035236) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00035236) cell_hwr_fs_pane_g

0xb6a9,	// (0x000310de) cell_hwr_fs_pane_t1

0x9f6c,	// (0x0002f9a1) grid_highlight_pane_cp6

0x9f6c,	// (0x0002f9a1) main_idle_act2_pane

0xd1e6,	// (0x00032c1b) aid_inside_area_popup_secondary

0xb921,	// (0x00031356) aid_inside_area_window_primary_ParamLimits

0xb921,	// (0x00031356) aid_inside_area_window_primary

0x44bb,	// (0x00029ef0) ai2_news_ticker_pane

0x44c3,	// (0x00029ef8) aid_size_cell_ai1_link_ParamLimits

0x44c3,	// (0x00029ef8) aid_size_cell_ai1_link

0x44dd,	// (0x00029f12) popup_ai2_data_window_ParamLimits

0x44dd,	// (0x00029f12) popup_ai2_data_window

0x44fb,	// (0x00029f30) popup_ai2_link_window_ParamLimits

0x44fb,	// (0x00029f30) popup_ai2_link_window

0x2c36,	// (0x0002866b) bg_popup_sub_pane_cp4_ParamLimits

0x2c36,	// (0x0002866b) bg_popup_sub_pane_cp4

0x4511,	// (0x00029f46) grid_ai2_link_pane_ParamLimits

0x4511,	// (0x00029f46) grid_ai2_link_pane

0x4528,	// (0x00029f5d) popup_ai2_link_window_g1_ParamLimits

0x4528,	// (0x00029f5d) popup_ai2_link_window_g1

0x4534,	// (0x00029f69) popup_ai2_link_window_g2_ParamLimits

0x4534,	// (0x00029f69) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00035409) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00035409) popup_ai2_link_window_g

0x4545,	// (0x00029f7a) ai2_mp_button_pane

0x454d,	// (0x00029f82) ai2_mp_volume_pane

0x2e27,	// (0x0002885c) bg_popup_sub_pane_cp5_ParamLimits

0x2e27,	// (0x0002885c) bg_popup_sub_pane_cp5

0x4555,	// (0x00029f8a) heading_ai2_gene_pane_ParamLimits

0x4555,	// (0x00029f8a) heading_ai2_gene_pane

0x4561,	// (0x00029f96) list_ai2_gene_pane_ParamLimits

0x4561,	// (0x00029f96) list_ai2_gene_pane

0x45a9,	// (0x00029fde) cell_ai2_link_pane_ParamLimits

0x45a9,	// (0x00029fde) cell_ai2_link_pane

0x45bf,	// (0x00029ff4) cell_ai2_link_pane_g1

0x9f6c,	// (0x0002f9a1) grid_highlight_pane_cp7

0x1e35,	// (0x0002786a) ai2_mp_volume_pane_g1

0x4692,	// (0x0002a0c7) ai2_mp_volume_pane_g2

0x4607,	// (0x0002a03c) list_ai2_gene_pane_t1

0x469a,	// (0x0002a0cf) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00035422) ai2_mp_volume_pane_g

0x1e3d,	// (0x00027872) volume_small_pane_cp3

0x46a2,	// (0x0002a0d7) aid_size_cell_ai2_button

0x46aa,	// (0x0002a0df) grid_ai2_button_pane

0x46b3,	// (0x0002a0e8) cell_ai2_button_pane_ParamLimits

0x46b3,	// (0x0002a0e8) cell_ai2_button_pane

0x9e7c,	// (0x0002f8b1) cell_ai2_button_pane_g1

0x9f6c,	// (0x0002f9a1) grid_highlight_pane_cp8

0x4652,	// (0x0002a087) ai2_gene_pane_t1_ParamLimits

0x4652,	// (0x0002a087) ai2_gene_pane_t1

0xaac5,	// (0x000304fa) aid_height_parent_landscape

0xbb28,	// (0x0003155d) aid_height_set_list

0x3f8c,	// (0x000299c1) aid_size_parent

0x42dc,	// (0x00029d11) aid_size_cell_graphic_pane_ParamLimits

0x4571,	// (0x00029fa6) popup_ai2_data_window_g1_ParamLimits

0x4571,	// (0x00029fa6) popup_ai2_data_window_g1

0x457d,	// (0x00029fb2) ai2_news_ticker_pane_g1

0x4585,	// (0x00029fba) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0003540e) ai2_news_ticker_pane_g

0x458d,	// (0x00029fc2) ai2_news_ticker_pane_t1

0x459b,	// (0x00029fd0) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x00035413) ai2_news_ticker_pane_t

0x45c8,	// (0x00029ffd) heading_ai2_gene_pane_g1

0x45d0,	// (0x0002a005) heading_ai2_gene_pane_t1_ParamLimits

0x45d0,	// (0x0002a005) heading_ai2_gene_pane_t1

0x45e5,	// (0x0002a01a) list_highlight_pane_cp6

0x45ed,	// (0x0002a022) ai2_gene_pane_ParamLimits

0x45ed,	// (0x0002a022) ai2_gene_pane

0x4615,	// (0x0002a04a) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00035418) list_ai2_gene_pane_t

0x4623,	// (0x0002a058) list_highlight_pane_cp8_ParamLimits

0x4623,	// (0x0002a058) list_highlight_pane_cp8

0x4634,	// (0x0002a069) ai2_gene_pane_g1_ParamLimits

0x4634,	// (0x0002a069) ai2_gene_pane_g1

0x4646,	// (0x0002a07b) ai2_gene_pane_g2_ParamLimits

0x4646,	// (0x0002a07b) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0003541d) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0003541d) ai2_gene_pane_g

0xd069,	// (0x00032a9e) scroll_pane_cp12

0xaa84,	// (0x000304b9) control_pane_t3_ParamLimits

0xaa84,	// (0x000304b9) control_pane_t3

0x0c68,	// (0x0002669d) status_small_pane_g8_ParamLimits

0x0c68,	// (0x0002669d) status_small_pane_g8

0xabdf,	// (0x00030614) popup_find_window_ParamLimits

0xae90,	// (0x000308c5) popup_note_image_window_ParamLimits

0xeafe,	// (0x00034533) list_double2_graphic_pane_vc_g1_ParamLimits

0xeafe,	// (0x00034533) list_double2_graphic_pane_vc_g1

0xecc0,	// (0x000346f5) list_double2_graphic_pane_vc_g2_ParamLimits

0xecc0,	// (0x000346f5) list_double2_graphic_pane_vc_g2

0xeccc,	// (0x00034701) list_double2_graphic_pane_vc_g3_ParamLimits

0xeccc,	// (0x00034701) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x000351f9) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x000351f9) list_double2_graphic_pane_vc_g

0xecd8,	// (0x0003470d) list_double2_graphic_pane_vc_t1_ParamLimits

0xecd8,	// (0x0003470d) list_double2_graphic_pane_vc_t1

0xead4,	// (0x00034509) list_single_heading_pane_vc_g1_ParamLimits

0xead4,	// (0x00034509) list_single_heading_pane_vc_g1

0xeae0,	// (0x00034515) list_single_heading_pane_vc_g2_ParamLimits

0xeae0,	// (0x00034515) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00035003) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00035003) list_single_heading_pane_vc_g

0xecee,	// (0x00034723) list_single_heading_pane_vc_t1_ParamLimits

0xecee,	// (0x00034723) list_single_heading_pane_vc_t1

0xed06,	// (0x0003473b) list_single_heading_pane_vc_t2_ParamLimits

0xed06,	// (0x0003473b) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0003521a) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0003521a) list_single_heading_pane_vc_t

0xed18,	// (0x0003474d) list_setting_number_pane_vc_g1_ParamLimits

0xed18,	// (0x0003474d) list_setting_number_pane_vc_g1

0xed24,	// (0x00034759) list_setting_number_pane_vc_g2_ParamLimits

0xed24,	// (0x00034759) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003521f) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003521f) list_setting_number_pane_vc_g

0xed30,	// (0x00034765) list_setting_number_pane_vc_t1_ParamLimits

0xed30,	// (0x00034765) list_setting_number_pane_vc_t1

0xed44,	// (0x00034779) list_setting_number_pane_vc_t2_ParamLimits

0xed44,	// (0x00034779) list_setting_number_pane_vc_t2

0xed60,	// (0x00034795) list_setting_number_pane_vc_t3_ParamLimits

0xed60,	// (0x00034795) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00035224) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00035224) list_setting_number_pane_vc_t

0xed8e,	// (0x000347c3) set_value_pane_vc_ParamLimits

0xed8e,	// (0x000347c3) set_value_pane_vc

0xedc5,	// (0x000347fa) list_double2_graphic_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double2_graphic_pane_vc

0x4164,	// (0x00029b99) list_double2_large_graphic_pane_vc_ParamLimits

0x4164,	// (0x00029b99) list_double2_large_graphic_pane_vc

0xedc5,	// (0x000347fa) list_double2_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double2_pane_vc

0xedc5,	// (0x000347fa) list_double_graphic_heading_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double_graphic_heading_pane_vc

0xedc5,	// (0x000347fa) list_double_graphic_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double_graphic_pane_vc

0xedc5,	// (0x000347fa) list_double_heading_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double_heading_pane_vc

0x4164,	// (0x00029b99) list_double_large_graphic_pane_vc_ParamLimits

0x4164,	// (0x00029b99) list_double_large_graphic_pane_vc

0xedc5,	// (0x000347fa) list_double_number_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double_number_pane_vc

0xedc5,	// (0x000347fa) list_double_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double_pane_vc

0xedc5,	// (0x000347fa) list_double_time_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_double_time_pane_vc

0xedc5,	// (0x000347fa) list_setting_number_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_setting_number_pane_vc

0xedc5,	// (0x000347fa) list_setting_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_setting_pane_vc

0xedc5,	// (0x000347fa) list_single_graphic_heading_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_single_graphic_heading_pane_vc

0xedc5,	// (0x000347fa) list_single_heading_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_single_heading_pane_vc

0xedc5,	// (0x000347fa) list_single_number_heading_pane_vc_ParamLimits

0xedc5,	// (0x000347fa) list_single_number_heading_pane_vc

0xeafe,	// (0x00034533) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeafe,	// (0x00034533) list_double_graphic_heading_pane_vc_g1

0xead4,	// (0x00034509) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xead4,	// (0x00034509) list_double_graphic_heading_pane_vc_g2

0xeae0,	// (0x00034515) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeae0,	// (0x00034515) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x00035429) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00035429) list_double_graphic_heading_pane_vc_g

0xedda,	// (0x0003480f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedda,	// (0x0003480f) list_double_graphic_heading_pane_vc_t1

0xedf0,	// (0x00034825) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xedf0,	// (0x00034825) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x00035430) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x00035430) list_double_graphic_heading_pane_vc_t

0xed18,	// (0x0003474d) list_setting_pane_vc_g1_ParamLimits

0xed18,	// (0x0003474d) list_setting_pane_vc_g1

0xed24,	// (0x00034759) list_setting_pane_vc_g2_ParamLimits

0xed24,	// (0x00034759) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003521f) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003521f) list_setting_pane_vc_g

0xee0e,	// (0x00034843) list_setting_pane_vc_t1_ParamLimits

0xee0e,	// (0x00034843) list_setting_pane_vc_t1

0xee2a,	// (0x0003485f) list_setting_pane_vc_t2_ParamLimits

0xee2a,	// (0x0003485f) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x00035473) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x00035473) list_setting_pane_vc_t

0xed8e,	// (0x000347c3) set_value_pane_cp_vc_ParamLimits

0xed8e,	// (0x000347c3) set_value_pane_cp_vc

0xead4,	// (0x00034509) list_single_number_heading_pane_vc_g1_ParamLimits

0xead4,	// (0x00034509) list_single_number_heading_pane_vc_g1

0xeae0,	// (0x00034515) list_single_number_heading_pane_vc_g2_ParamLimits

0xeae0,	// (0x00034515) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00035003) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00035003) list_single_number_heading_pane_vc_g

0xecee,	// (0x00034723) list_single_number_heading_pane_vc_t1_ParamLimits

0xecee,	// (0x00034723) list_single_number_heading_pane_vc_t1

0xee46,	// (0x0003487b) list_single_number_heading_pane_vc_t2_ParamLimits

0xee46,	// (0x0003487b) list_single_number_heading_pane_vc_t2

0xeaec,	// (0x00034521) list_single_number_heading_pane_vc_t3_ParamLimits

0xeaec,	// (0x00034521) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x00035478) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00035478) list_single_number_heading_pane_vc_t

0xeafe,	// (0x00034533) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeafe,	// (0x00034533) list_single_graphic_heading_pane_vc_g1

0xead4,	// (0x00034509) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xead4,	// (0x00034509) list_single_graphic_heading_pane_vc_g4

0xeae0,	// (0x00034515) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeae0,	// (0x00034515) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x00035429) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00035429) list_single_graphic_heading_pane_vc_g

0xecee,	// (0x00034723) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xecee,	// (0x00034723) list_single_graphic_heading_pane_vc_t1

0xee58,	// (0x0003488d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee58,	// (0x0003488d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0003547f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0003547f) list_single_graphic_heading_pane_vc_t

0xead4,	// (0x00034509) list_double2_pane_vc_g1_ParamLimits

0xead4,	// (0x00034509) list_double2_pane_vc_g1

0xeae0,	// (0x00034515) list_double2_pane_vc_g2_ParamLimits

0xeae0,	// (0x00034515) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00035003) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00035003) list_double2_pane_vc_g

0xedaf,	// (0x000347e4) list_double2_pane_vc_t1_ParamLimits

0xedaf,	// (0x000347e4) list_double2_pane_vc_t1

0xeb0a,	// (0x0003453f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xeb0a,	// (0x0003453f) list_double2_large_graphic_pane_vc_g1

0xeb16,	// (0x0003454b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeb16,	// (0x0003454b) list_double2_large_graphic_pane_vc_g2

0xeb22,	// (0x00034557) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeb22,	// (0x00034557) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00035020) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00035020) list_double2_large_graphic_pane_vc_g

0xeb2e,	// (0x00034563) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeb2e,	// (0x00034563) list_double2_large_graphic_pane_vc_t1

0xee6a,	// (0x0003489f) list_double_time_pane_vc_g1_ParamLimits

0xee6a,	// (0x0003489f) list_double_time_pane_vc_g1

0xee76,	// (0x000348ab) list_double_time_pane_vc_g2_ParamLimits

0xee76,	// (0x000348ab) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00035484) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00035484) list_double_time_pane_vc_g

0xee82,	// (0x000348b7) list_double_time_pane_vc_t1_ParamLimits

0xee82,	// (0x000348b7) list_double_time_pane_vc_t1

0xeeac,	// (0x000348e1) list_double_time_pane_vc_t2_ParamLimits

0xeeac,	// (0x000348e1) list_double_time_pane_vc_t2

0xeef5,	// (0x0003492a) list_double_time_pane_vc_t3_ParamLimits

0xeef5,	// (0x0003492a) list_double_time_pane_vc_t3

0xef07,	// (0x0003493c) list_double_time_pane_vc_t4_ParamLimits

0xef07,	// (0x0003493c) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x00035489) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x00035489) list_double_time_pane_vc_t

0xead4,	// (0x00034509) list_double_pane_vc_g1_ParamLimits

0xead4,	// (0x00034509) list_double_pane_vc_g1

0xeae0,	// (0x00034515) list_double_pane_vc_g2_ParamLimits

0xeae0,	// (0x00034515) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00035003) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00035003) list_double_pane_vc_g

0xef2c,	// (0x00034961) list_double_pane_vc_t1_ParamLimits

0xef2c,	// (0x00034961) list_double_pane_vc_t1

0xef40,	// (0x00034975) list_double_pane_vc_t2_ParamLimits

0xef40,	// (0x00034975) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00035492) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00035492) list_double_pane_vc_t

0xead4,	// (0x00034509) list_double_number_pane_vc_g1_ParamLimits

0xead4,	// (0x00034509) list_double_number_pane_vc_g1

0xeae0,	// (0x00034515) list_double_number_pane_vc_g2_ParamLimits

0xeae0,	// (0x00034515) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00035003) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00035003) list_double_number_pane_vc_g

0xef56,	// (0x0003498b) list_double_number_pane_vc_t1_ParamLimits

0xef56,	// (0x0003498b) list_double_number_pane_vc_t1

0xef6a,	// (0x0003499f) list_double_number_pane_vc_t2_ParamLimits

0xef6a,	// (0x0003499f) list_double_number_pane_vc_t2

0xef7e,	// (0x000349b3) list_double_number_pane_vc_t3_ParamLimits

0xef7e,	// (0x000349b3) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00035497) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00035497) list_double_number_pane_vc_t

0xef94,	// (0x000349c9) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef94,	// (0x000349c9) list_double_large_graphic_pane_vc_g1

0xefa5,	// (0x000349da) list_double_large_graphic_pane_vc_g2_ParamLimits

0xefa5,	// (0x000349da) list_double_large_graphic_pane_vc_g2

0xeb22,	// (0x00034557) list_double_large_graphic_pane_vc_g3_ParamLimits

0xeb22,	// (0x00034557) list_double_large_graphic_pane_vc_g3

0xefb4,	// (0x000349e9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xefb4,	// (0x000349e9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0003549e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0003549e) list_double_large_graphic_pane_vc_g

0xefc0,	// (0x000349f5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xefc0,	// (0x000349f5) list_double_large_graphic_pane_vc_t1

0xefd9,	// (0x00034a0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xefd9,	// (0x00034a0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x000354a7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x000354a7) list_double_large_graphic_pane_vc_t

0xead4,	// (0x00034509) list_double_heading_pane_vc_g1_ParamLimits

0xead4,	// (0x00034509) list_double_heading_pane_vc_g1

0xeae0,	// (0x00034515) list_double_heading_pane_vc_g2_ParamLimits

0xeae0,	// (0x00034515) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00035003) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00035003) list_double_heading_pane_vc_g

0xeff0,	// (0x00034a25) list_double_heading_pane_vc_t1_ParamLimits

0xeff0,	// (0x00034a25) list_double_heading_pane_vc_t1

0xecee,	// (0x00034723) list_double_heading_pane_vc_t2_ParamLimits

0xecee,	// (0x00034723) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x000354ac) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x000354ac) list_double_heading_pane_vc_t

0xf002,	// (0x00034a37) list_double_graphic_pane_vc_g1_ParamLimits

0xf002,	// (0x00034a37) list_double_graphic_pane_vc_g1

0xf012,	// (0x00034a47) list_double_graphic_pane_vc_g2_ParamLimits

0xf012,	// (0x00034a47) list_double_graphic_pane_vc_g2

0xf021,	// (0x00034a56) list_double_graphic_pane_vc_g3_ParamLimits

0xf021,	// (0x00034a56) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x000354b1) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x000354b1) list_double_graphic_pane_vc_g

0xf02d,	// (0x00034a62) list_double_graphic_pane_vc_t1_ParamLimits

0xf02d,	// (0x00034a62) list_double_graphic_pane_vc_t1

0xf041,	// (0x00034a76) list_double_graphic_pane_vc_t2_ParamLimits

0xf041,	// (0x00034a76) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x000354b8) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x000354b8) list_double_graphic_pane_vc_t

0xf1fc,	// (0x00034c31) aid_size_cell_fastswap

0x9e86,	// (0x0002f8bb) aid_size_cell_touch_ParamLimits

0x9e86,	// (0x0002f8bb) aid_size_cell_touch

0xf379,	// (0x00034dae) popup_fast_swap_wide_window_ParamLimits

0xf379,	// (0x00034dae) popup_fast_swap_wide_window

0xa04e,	// (0x0002fa83) touch_pane_ParamLimits

0xa04e,	// (0x0002fa83) touch_pane

0xd0bf,	// (0x00032af4) button_value_adjust_pane_cp2

0xeb67,	// (0x0003459c) button_value_adjust_pane_cp4

0xeb6f,	// (0x000345a4) form_field_data_pane_cp2

0x9a18,	// (0x0002f44d) form_field_data_wide_pane_cp2

0xd425,	// (0x00032e5a) bg_scroll_pane_ParamLimits

0x024e,	// (0x00025c83) scroll_handle_pane_ParamLimits

0x0262,	// (0x00025c97) scroll_sc2_down_pane_ParamLimits

0x0262,	// (0x00025c97) scroll_sc2_down_pane

0xd456,	// (0x00032e8b) scroll_sc2_up_pane_ParamLimits

0xd456,	// (0x00032e8b) scroll_sc2_up_pane

0xbef5,	// (0x0003192a) grid_wheel_folder_pane_g1_ParamLimits

0xbef5,	// (0x0003192a) grid_wheel_folder_pane_g1

0x0593,	// (0x00025fc8) clock_nsta_pane_cp2_ParamLimits

0x0593,	// (0x00025fc8) clock_nsta_pane_cp2

0x0eb9,	// (0x000268ee) listscroll_midp_pane_ParamLimits

0xa88a,	// (0x000302bf) midp_canvas_pane

0x0e2d,	// (0x00026862) nsta_clock_indic_pane

0x0e83,	// (0x000268b8) listscroll_form_pane_vc

0x0ea7,	// (0x000268dc) listscroll_set_pane_vc_ParamLimits

0x0ea7,	// (0x000268dc) listscroll_set_pane_vc

0xb30c,	// (0x00030d41) clock_nsta_pane

0xb336,	// (0x00030d6b) indicator_nsta_pane

0x1938,	// (0x0002736d) bg_popup_sub_pane_cp2_ParamLimits

0x194c,	// (0x00027381) find_pane_cp2_ParamLimits

0x194c,	// (0x00027381) find_pane_cp2

0x1962,	// (0x00027397) grid_toobar_pane_ParamLimits

0x2c0a,	// (0x0002863f) list_form_gen_pane_vc_ParamLimits

0x2c0a,	// (0x0002863f) list_form_gen_pane_vc

0x2c20,	// (0x00028655) scroll_pane_cp8_vc_ParamLimits

0x2c20,	// (0x00028655) scroll_pane_cp8_vc

0x2c9c,	// (0x000286d1) data_form_wide_pane_vc_ParamLimits

0x2c9c,	// (0x000286d1) data_form_wide_pane_vc

0x2ca8,	// (0x000286dd) form_field_data_wide_pane_vc_g1

0x2cb0,	// (0x000286e5) form_field_data_wide_pane_vc_t1_ParamLimits

0x2cb0,	// (0x000286e5) form_field_data_wide_pane_vc_t1

0xd0d3,	// (0x00032b08) input_focus_pane_cp6_vc_ParamLimits

0xd0d3,	// (0x00032b08) input_focus_pane_cp6_vc

0xb728,	// (0x0003115d) list_midp_pane_ParamLimits

0x4348,	// (0x00029d7d) scroll_pane_cp16_ParamLimits

0x4348,	// (0x00029d7d) scroll_pane_cp16

0x300c,	// (0x00028a41) button_value_adjust_pane_ParamLimits

0x300c,	// (0x00028a41) button_value_adjust_pane

0xbb39,	// (0x0003156e) button_value_adjust_pane_cp6_ParamLimits

0xbb39,	// (0x0003156e) button_value_adjust_pane_cp6

0xbc7b,	// (0x000316b0) settings_code_pane_cp_ParamLimits

0xbc7b,	// (0x000316b0) settings_code_pane_cp

0x9e7c,	// (0x0002f8b1) cell_touch_pane_g1

0x9e7c,	// (0x0002f8b1) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003513e) cell_touch_pane_g

0xbdca,	// (0x000317ff) cell_touch_pane_cp_ParamLimits

0xbdca,	// (0x000317ff) cell_touch_pane_cp

0xbde6,	// (0x0003181b) cell_touch_pane_ParamLimits

0xbde6,	// (0x0003181b) cell_touch_pane

0x9e7c,	// (0x0002f8b1) scroll_sc2_down_pane_g1

0x9e7c,	// (0x0002f8b1) scroll_sc2_up_pane_g1

0x9f6c,	// (0x0002f9a1) bg_set_opt_pane_cp4_vc

0x46e6,	// (0x0002a11b) list_set_graphic_pane_vc_g1_ParamLimits

0x46e6,	// (0x0002a11b) list_set_graphic_pane_vc_g1

0xd779,	// (0x000331ae) list_set_graphic_pane_vc_g2_ParamLimits

0xd779,	// (0x000331ae) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x00035435) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x00035435) list_set_graphic_pane_vc_g

0x46f2,	// (0x0002a127) text_primary_small_cp13_vc_ParamLimits

0x46f2,	// (0x0002a127) text_primary_small_cp13_vc

0x470a,	// (0x0002a13f) list_set_graphic_pane_vc_ParamLimits

0x470a,	// (0x0002a13f) list_set_graphic_pane_vc

0x9f6c,	// (0x0002f9a1) input_focus_pane_cp2_vc

0x9e7c,	// (0x0002f8b1) setting_code_pane_vc_g1

0xa204,	// (0x0002fc39) setting_code_pane_vc_t1

0x471f,	// (0x0002a154) set_text_pane_vc_t1_ParamLimits

0x471f,	// (0x0002a154) set_text_pane_vc_t1

0x9f6c,	// (0x0002f9a1) input_focus_pane_cp1_vc

0x473d,	// (0x0002a172) list_set_text_pane_vc

0x9e7c,	// (0x0002f8b1) setting_text_pane_vc_g1

0x9f6c,	// (0x0002f9a1) bg_set_opt_pane_cp2_vc

0xa1fb,	// (0x0002fc30) setting_slider_graphic_pane_vc_g1

0x4747,	// (0x0002a17c) setting_slider_graphic_pane_vc_t1

0x4759,	// (0x0002a18e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0003543a) setting_slider_graphic_pane_vc_t

0x476b,	// (0x0002a1a0) slider_set_pane_cp_vc

0x4775,	// (0x0002a1aa) slider_set_pane_vc_g1

0x477e,	// (0x0002a1b3) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0003543f) slider_set_pane_vc_g

0xd12e,	// (0x00032b63) set_opt_bg_pane_g1_copy1

0xd136,	// (0x00032b6b) set_opt_bg_pane_g2_copy1

0x47aa,	// (0x0002a1df) set_opt_bg_pane_g3_copy1

0xd146,	// (0x00032b7b) set_opt_bg_pane_g4_copy1

0xd14e,	// (0x00032b83) set_opt_bg_pane_g5_copy1

0xd156,	// (0x00032b8b) set_opt_bg_pane_g6_copy1

0x47b4,	// (0x0002a1e9) set_opt_bg_pane_g7_copy1

0x47be,	// (0x0002a1f3) set_opt_bg_pane_g8_copy1

0x47c8,	// (0x0002a1fd) set_opt_bg_pane_g9_copy1

0x9f6c,	// (0x0002f9a1) bg_set_opt_pane_cp_vc

0x47d2,	// (0x0002a207) setting_slider_pane_vc_t1

0x47e1,	// (0x0002a216) setting_slider_pane_vc_t2

0x47f3,	// (0x0002a228) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0003544e) setting_slider_pane_vc_t

0x4805,	// (0x0002a23a) slider_set_pane_vc

0x1b77,	// (0x000275ac) volume_set_pane_vc_g1

0x1b80,	// (0x000275b5) volume_set_pane_vc_g2

0x1b89,	// (0x000275be) volume_set_pane_vc_g3

0x1b92,	// (0x000275c7) volume_set_pane_vc_g4

0x1b9b,	// (0x000275d0) volume_set_pane_vc_g5

0x1ba4,	// (0x000275d9) volume_set_pane_vc_g6

0x1bad,	// (0x000275e2) volume_set_pane_vc_g7

0x1bb6,	// (0x000275eb) volume_set_pane_vc_g8

0x1bbf,	// (0x000275f4) volume_set_pane_vc_g9

0x1bc8,	// (0x000275fd) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x00035455) volume_set_pane_vc_g

0x480f,	// (0x0002a244) volume_set_pane_vc

0x4819,	// (0x0002a24e) button_value_adjust_pane_cp1_vc

0x4823,	// (0x0002a258) list_highlight_pane_cp2_vc

0x482c,	// (0x0002a261) list_set_pane_vc_ParamLimits

0x482c,	// (0x0002a261) list_set_pane_vc

0x489c,	// (0x0002a2d1) main_pane_set_vc_t1_ParamLimits

0x489c,	// (0x0002a2d1) main_pane_set_vc_t1

0x48b1,	// (0x0002a2e6) main_pane_set_vc_t2_ParamLimits

0x48b1,	// (0x0002a2e6) main_pane_set_vc_t2

0x48c3,	// (0x0002a2f8) main_pane_set_vc_t3_ParamLimits

0x48c3,	// (0x0002a2f8) main_pane_set_vc_t3

0x48d7,	// (0x0002a30c) main_pane_set_vc_t4_ParamLimits

0x48d7,	// (0x0002a30c) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0003546a) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0003546a) main_pane_set_vc_t

0x48eb,	// (0x0002a320) setting_code_pane_vc_ParamLimits

0x48eb,	// (0x0002a320) setting_code_pane_vc

0x48fc,	// (0x0002a331) setting_slider_graphic_pane_vc

0x48fc,	// (0x0002a331) setting_slider_pane_vc

0x48fc,	// (0x0002a331) setting_text_pane_vc

0x48fc,	// (0x0002a331) setting_volume_pane_vc

0x4906,	// (0x0002a33b) scroll_pane_cp121_vc

0xd0ad,	// (0x00032ae2) set_content_pane_vc

0x490e,	// (0x0002a343) button_value_adjust_pane_g1

0x4917,	// (0x0002a34c) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x000354bd) button_value_adjust_pane_g

0x4920,	// (0x0002a355) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4920,	// (0x0002a355) form_field_slider_wide_pane_vc_t1

0x4932,	// (0x0002a367) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4932,	// (0x0002a367) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x000354c2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x000354c2) form_field_slider_wide_pane_vc_t

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp10_vc_ParamLimits

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp10_vc

0x495e,	// (0x0002a393) slider_cont_pane_cp1_vc_ParamLimits

0x495e,	// (0x0002a393) slider_cont_pane_cp1_vc

0x4970,	// (0x0002a3a5) slider_form_pane_g1_cp2

0x477e,	// (0x0002a1b3) slider_form_pane_g2_cp2

0x499d,	// (0x0002a3d2) form_field_slider_pane_vc_t3

0x49ab,	// (0x0002a3e0) form_field_slider_pane_vc_t4

0x49b9,	// (0x0002a3ee) slider_form_pane_vc_ParamLimits

0x49b9,	// (0x0002a3ee) slider_form_pane_vc

0x49c6,	// (0x0002a3fb) form_field_slider_pane_vc_t1_ParamLimits

0x49c6,	// (0x0002a3fb) form_field_slider_pane_vc_t1

0x4932,	// (0x0002a367) form_field_slider_pane_vc_t2_ParamLimits

0x4932,	// (0x0002a367) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x000354d4) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x000354d4) form_field_slider_pane_vc_t

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp9_vc_ParamLimits

0xa1ab,	// (0x0002fbe0) input_focus_pane_cp9_vc

0x49dc,	// (0x0002a411) slider_cont_pane_vc_ParamLimits

0x49dc,	// (0x0002a411) slider_cont_pane_vc

0x49f0,	// (0x0002a425) list_form_graphic_pane_cp_vc_ParamLimits

0x49f0,	// (0x0002a425) list_form_graphic_pane_cp_vc

0x2ca8,	// (0x000286dd) form_field_popup_wide_pane_vc_g1

0x4a05,	// (0x0002a43a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4a05,	// (0x0002a43a) form_field_popup_wide_pane_vc_t1

0xd0d3,	// (0x00032b08) input_focus_pane_cp8_vc_ParamLimits

0xd0d3,	// (0x00032b08) input_focus_pane_cp8_vc

0x4a4a,	// (0x0002a47f) list_form_wide_pane_vc_ParamLimits

0x4a4a,	// (0x0002a47f) list_form_wide_pane_vc

0x4a56,	// (0x0002a48b) list_form_graphic_pane_vc_g1

0x4a5e,	// (0x0002a493) list_form_graphic_pane_vc_t1_ParamLimits

0x4a5e,	// (0x0002a493) list_form_graphic_pane_vc_t1

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp5_vc_ParamLimits

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp5_vc

0x4a7a,	// (0x0002a4af) list_form_graphic_pane_vc_ParamLimits

0x4a7a,	// (0x0002a4af) list_form_graphic_pane_vc

0x2ca8,	// (0x000286dd) form_field_popup_pane_vc_g1

0x4a90,	// (0x0002a4c5) form_field_popup_pane_vc_t1_ParamLimits

0x4a90,	// (0x0002a4c5) form_field_popup_pane_vc_t1

0xd0d3,	// (0x00032b08) input_focus_pane_cp7_vc_ParamLimits

0xd0d3,	// (0x00032b08) input_focus_pane_cp7_vc

0x4aa7,	// (0x0002a4dc) list_form_pane_vc_ParamLimits

0x4aa7,	// (0x0002a4dc) list_form_pane_vc

0x4ab3,	// (0x0002a4e8) data_form_pane_vc_t1_ParamLimits

0x4ab3,	// (0x0002a4e8) data_form_pane_vc_t1

0xd12e,	// (0x00032b63) input_focus_pane_vc_g1

0xd136,	// (0x00032b6b) input_focus_pane_vc_g2

0xd13e,	// (0x00032b73) input_focus_pane_vc_g3

0xd146,	// (0x00032b7b) input_focus_pane_vc_g4

0xd14e,	// (0x00032b83) input_focus_pane_vc_g5

0xd156,	// (0x00032b8b) input_focus_pane_vc_g6

0xd15e,	// (0x00032b93) input_focus_pane_vc_g7

0xd166,	// (0x00032b9b) input_focus_pane_vc_g8

0xd16e,	// (0x00032ba3) input_focus_pane_vc_g9

0x9e7c,	// (0x0002f8b1) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x000350c7) input_focus_pane_vc_g

0x2c9c,	// (0x000286d1) data_form_pane_vc_ParamLimits

0x2c9c,	// (0x000286d1) data_form_pane_vc

0x2ca8,	// (0x000286dd) form_field_data_pane_vc_g1

0x4ad0,	// (0x0002a505) form_field_data_pane_vc_t1_ParamLimits

0x4ad0,	// (0x0002a505) form_field_data_pane_vc_t1

0xd0d3,	// (0x00032b08) input_focus_pane_vc_ParamLimits

0xd0d3,	// (0x00032b08) input_focus_pane_vc

0x4aea,	// (0x0002a51f) button_value_adjust_pane_cp3_vc

0x4af2,	// (0x0002a527) button_value_adjust_pane_cp5_vc

0x4afa,	// (0x0002a52f) form_field_data_pane_vc_ParamLimits

0x4afa,	// (0x0002a52f) form_field_data_pane_vc

0x4b15,	// (0x0002a54a) form_field_data_pane_vc_cp2

0x4b1d,	// (0x0002a552) form_field_data_wide_pane_vc_ParamLimits

0x4b1d,	// (0x0002a552) form_field_data_wide_pane_vc

0x4b37,	// (0x0002a56c) form_field_data_wide_pane_vc_cp2

0x4b3f,	// (0x0002a574) form_field_popup_pane_vc_ParamLimits

0x4b3f,	// (0x0002a574) form_field_popup_pane_vc

0x4b5a,	// (0x0002a58f) form_field_popup_wide_pane_vc_ParamLimits

0x4b5a,	// (0x0002a58f) form_field_popup_wide_pane_vc

0x4b74,	// (0x0002a5a9) form_field_slider_pane_vc_ParamLimits

0x4b74,	// (0x0002a5a9) form_field_slider_pane_vc

0x4b87,	// (0x0002a5bc) form_field_slider_wide_pane_vc_ParamLimits

0x4b87,	// (0x0002a5bc) form_field_slider_wide_pane_vc

0xbe04,	// (0x00031839) grid_touch_1_pane_ParamLimits

0xbe04,	// (0x00031839) grid_touch_1_pane

0xbe18,	// (0x0003184d) grid_touch_2_pane_ParamLimits

0xbe18,	// (0x0003184d) grid_touch_2_pane

0x4c5e,	// (0x0002a693) touch_pane_g1_ParamLimits

0x4c5e,	// (0x0002a693) touch_pane_g1

0x4bc0,	// (0x0002a5f5) cell_app_pane_cp_wide_ParamLimits

0x4bc0,	// (0x0002a5f5) cell_app_pane_cp_wide

0x4bd1,	// (0x0002a606) grid_popup_fast_wide_pane_ParamLimits

0x4bd1,	// (0x0002a606) grid_popup_fast_wide_pane

0x4be5,	// (0x0002a61a) scroll_pane_cp19_ParamLimits

0x4be5,	// (0x0002a61a) scroll_pane_cp19

0x9f6c,	// (0x0002f9a1) bg_popup_window_pane_cp20

0x4bf9,	// (0x0002a62e) listscroll_popup_fast_wide_pane

0xd785,	// (0x000331ba) grid_indicator_nsta_pane

0x4c01,	// (0x0002a636) clock_nsta_pane_g1

0x4c0a,	// (0x0002a63f) clock_nsta_pane_t1

0xbe44,	// (0x00031879) cell_indicator_nsta_pane_ParamLimits

0xbe44,	// (0x00031879) cell_indicator_nsta_pane

0x4c5e,	// (0x0002a693) cell_indicator_nsta_pane_g1

0xbe61,	// (0x00031896) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x000354e5) cell_indicator_nsta_pane_g

0x4c82,	// (0x0002a6b7) clock_nsta_pane_cp

0x4c8a,	// (0x0002a6bf) indicator_nsta_pane_cp

0x4c93,	// (0x0002a6c8) nsta_clock_indic_pane_g1

0xa2e9,	// (0x0002fd1e) grid_indicator_pane

0xd548,	// (0x00032f7d) scroll_pane_cp29

0x04bd,	// (0x00025ef2) indicator_nsta_pane_cp2_ParamLimits

0x04bd,	// (0x00025ef2) indicator_nsta_pane_cp2

0xa1ed,	// (0x0002fc22) main_apps_wheel_pane

0x2e8f,	// (0x000288c4) form_midp_field_text_pane_ParamLimits

0x2fde,	// (0x00028a13) scroll_bar_cp050_ParamLimits

0x4cfc,	// (0x0002a731) cell_indicator_pane_ParamLimits

0x4cfc,	// (0x0002a731) cell_indicator_pane

0x4d14,	// (0x0002a749) cell_indicator_pane_g1

0xbe77,	// (0x000318ac) grid_wheel_folder_pane_ParamLimits

0xbe77,	// (0x000318ac) grid_wheel_folder_pane

0xbe85,	// (0x000318ba) list_wheel_apps_pane_ParamLimits

0xbe85,	// (0x000318ba) list_wheel_apps_pane

0xbe93,	// (0x000318c8) main_apps_wheel_pane_g1_ParamLimits

0xbe93,	// (0x000318c8) main_apps_wheel_pane_g1

0xbea3,	// (0x000318d8) main_apps_wheel_pane_g2_ParamLimits

0xbea3,	// (0x000318d8) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00035501) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00035501) main_apps_wheel_pane_g

0xbeb3,	// (0x000318e8) main_apps_wheel_pane_t1_ParamLimits

0xbeb3,	// (0x000318e8) main_apps_wheel_pane_t1

0xbecb,	// (0x00031900) list_wheel_apps_pane_g1

0xbed3,	// (0x00031908) list_wheel_apps_pane_g2

0xbedb,	// (0x00031910) list_wheel_apps_pane_g3

0xbee3,	// (0x00031918) list_wheel_apps_pane_g4

0xbeeb,	// (0x00031920) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00035506) list_wheel_apps_pane_g

0x07c0,	// (0x000261f5) navi_icon_text_pane

0xb1fe,	// (0x00030c33) aid_fill_nsta

0xbf08,	// (0x0003193d) navi_icon_text_pane_g1

0xbf14,	// (0x00031949) navi_icon_text_pane_t1

0xa7ee,	// (0x00030223) list_set_graphic_pane_t1_ParamLimits

0xa7ee,	// (0x00030223) list_set_graphic_pane_t1

0x372f,	// (0x00029164) popup_midp_note_alarm_window_t6_ParamLimits

0x372f,	// (0x00029164) popup_midp_note_alarm_window_t6

0x3741,	// (0x00029176) popup_midp_note_alarm_window_t7_ParamLimits

0x3741,	// (0x00029176) popup_midp_note_alarm_window_t7

0x3753,	// (0x00029188) popup_midp_note_alarm_window_t8_ParamLimits

0x3753,	// (0x00029188) popup_midp_note_alarm_window_t8

0x3765,	// (0x0002919a) popup_midp_note_alarm_window_t9_ParamLimits

0x3765,	// (0x0002919a) popup_midp_note_alarm_window_t9

0x3777,	// (0x000291ac) popup_midp_note_alarm_window_t10_ParamLimits

0x3777,	// (0x000291ac) popup_midp_note_alarm_window_t10

0x3789,	// (0x000291be) popup_midp_note_alarm_window_t11_ParamLimits

0x3789,	// (0x000291be) popup_midp_note_alarm_window_t11

0x379b,	// (0x000291d0) scroll_pane_cp17_ParamLimits

0x379b,	// (0x000291d0) scroll_pane_cp17

0x1b77,	// (0x000275ac) volume_small_pane_cp_g1

0x1e46,	// (0x0002787b) volume_small_pane_cp_g2

0x1e4f,	// (0x00027884) volume_small_pane_cp_g3

0x1e58,	// (0x0002788d) volume_small_pane_cp_g4

0x1e61,	// (0x00027896) volume_small_pane_cp_g5

0x1e6a,	// (0x0002789f) volume_small_pane_cp_g6

0x1e73,	// (0x000278a8) volume_small_pane_cp_g7

0x1e7c,	// (0x000278b1) volume_small_pane_cp_g8

0x1e85,	// (0x000278ba) volume_small_pane_cp_g9

0x1e8e,	// (0x000278c3) volume_small_pane_cp_g10

0x0a15,	// (0x0002644a) midp_ticker_pane_g1_ParamLimits

0x0a21,	// (0x00026456) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00035193) midp_ticker_pane_g_ParamLimits

0xa921,	// (0x00030356) midp_ticker_pane_t1_ParamLimits

0xb222,	// (0x00030c57) aid_fill_nsta_2

0x2fca,	// (0x000289ff) list_form2_midp_pane

0x4133,	// (0x00029b68) midp_editing_number_pane_ParamLimits

0x4142,	// (0x00029b77) midp_ticker_pane_ParamLimits

0x4e07,	// (0x0002a83c) form2_midp_field_pane

0x4e2b,	// (0x0002a860) scroll_pane_cp51

0x4e4b,	// (0x0002a880) form2_midp_button_pane_ParamLimits

0x4e4b,	// (0x0002a880) form2_midp_button_pane

0x4e5d,	// (0x0002a892) form2_midp_content_pane_ParamLimits

0x4e5d,	// (0x0002a892) form2_midp_content_pane

0x4e77,	// (0x0002a8ac) form2_midp_field_choice_group_pane

0x4e7f,	// (0x0002a8b4) form2_midp_field_pane_g1

0x4e87,	// (0x0002a8bc) form2_midp_field_pane_g2

0x4e8f,	// (0x0002a8c4) form2_midp_field_pane_g3

0x4e97,	// (0x0002a8cc) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0003552b) form2_midp_field_pane_g

0x4e9f,	// (0x0002a8d4) form2_midp_gauge_slider_pane

0x4ea7,	// (0x0002a8dc) form2_midp_gauge_wait_pane

0x4eaf,	// (0x0002a8e4) form2_midp_image_pane_ParamLimits

0x4eaf,	// (0x0002a8e4) form2_midp_image_pane

0x4eca,	// (0x0002a8ff) form2_midp_label_pane_ParamLimits

0x4eca,	// (0x0002a8ff) form2_midp_label_pane

0xbf42,	// (0x00031977) form2_midp_label_pane_cp_ParamLimits

0xbf42,	// (0x00031977) form2_midp_label_pane_cp

0x4f0a,	// (0x0002a93f) form2_midp_string_pane_ParamLimits

0x4f0a,	// (0x0002a93f) form2_midp_string_pane

0xf057,	// (0x00034a8c) form2_midp_text_pane_ParamLimits

0xf057,	// (0x00034a8c) form2_midp_text_pane

0x4f1c,	// (0x0002a951) form2_midp_time_pane

0x4f2c,	// (0x0002a961) input_focus_pane_cp51_ParamLimits

0x4f2c,	// (0x0002a961) input_focus_pane_cp51

0x4f44,	// (0x0002a979) form2_midp_label_pane_t1_ParamLimits

0x4f44,	// (0x0002a979) form2_midp_label_pane_t1

0xf078,	// (0x00034aad) form2_mdip_text_pane_t1_ParamLimits

0xf078,	// (0x00034aad) form2_mdip_text_pane_t1

0xf09c,	// (0x00034ad1) form2_midp_time_pane_t1

0x4f92,	// (0x0002a9c7) form2_midp_gauge_slider_pane_t1

0xbf63,	// (0x00031998) form2_midp_gauge_slider_pane_t2

0xbf75,	// (0x000319aa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00035534) form2_midp_gauge_slider_pane_t

0x4fc8,	// (0x0002a9fd) form2_midp_slider_pane

0x4fd4,	// (0x0002aa09) form2_midp_gauge_wait_pane_t1

0x4fe2,	// (0x0002aa17) form2_midp_wait_pane_ParamLimits

0x4fe2,	// (0x0002aa17) form2_midp_wait_pane

0x2cef,	// (0x00028724) list_single_2graphic_pane_cp4_ParamLimits

0x2cef,	// (0x00028724) list_single_2graphic_pane_cp4

0x500d,	// (0x0002aa42) list_single_midp_graphic_pane_cp_ParamLimits

0x500d,	// (0x0002aa42) list_single_midp_graphic_pane_cp

0x9f6c,	// (0x0002f9a1) list_highlight_pane_cp20

0x5031,	// (0x0002aa66) list_single_2graphic_pane_g1_cp4

0x45c8,	// (0x00029ffd) list_single_2graphic_pane_g2_cp4

0x5039,	// (0x0002aa6e) list_single_2graphic_pane_t1_cp4

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp21

0x5048,	// (0x0002aa7d) list_single_midp_graphic_pane_g4_cp

0x5057,	// (0x0002aa8c) list_single_midp_graphic_pane_t1_cp

0xbf87,	// (0x000319bc) form2_mdip_string_pane_t1_ParamLimits

0xbf87,	// (0x000319bc) form2_mdip_string_pane_t1

0x9f6c,	// (0x0002f9a1) bg_wml_button_pane_cp2

0x9e7c,	// (0x0002f8b1) form2_midp_image_pane_g1

0xeb44,	// (0x00034579) list_double_large_graphic_pane_g5_ParamLimits

0xeb44,	// (0x00034579) list_double_large_graphic_pane_g5

0x0eb9,	// (0x000268ee) midp_form_pane_ParamLimits

0xa1ed,	// (0x0002fc22) main_apps_wheel_pane_ParamLimits

0xaf16,	// (0x0003094b) popup_preview_window_ParamLimits

0xaf16,	// (0x0003094b) popup_preview_window

0x1481,	// (0x00026eb6) popup_touch_info_window_ParamLimits

0x1481,	// (0x00026eb6) popup_touch_info_window

0x14a3,	// (0x00026ed8) popup_touch_menu_window_ParamLimits

0x14a3,	// (0x00026ed8) popup_touch_menu_window

0x9e72,	// (0x0002f8a7) bg_popup_sub_pane_cp6

0x5111,	// (0x0002ab46) list_touch_menu_pane

0x5119,	// (0x0002ab4e) list_single_touch_menu_pane_ParamLimits

0x5119,	// (0x0002ab4e) list_single_touch_menu_pane

0x5131,	// (0x0002ab66) list_single_touch_menu_pane_t1

0xa1ed,	// (0x0002fc22) bg_popup_sub_pane_cp7_ParamLimits

0xa1ed,	// (0x0002fc22) bg_popup_sub_pane_cp7

0x513f,	// (0x0002ab74) heading_sub_pane

0x5147,	// (0x0002ab7c) list_touch_info_pane_ParamLimits

0x5147,	// (0x0002ab7c) list_touch_info_pane

0x5156,	// (0x0002ab8b) list_single_touch_info_pane_ParamLimits

0x5156,	// (0x0002ab8b) list_single_touch_info_pane

0x5168,	// (0x0002ab9d) list_single_touch_info_pane_t1

0x5176,	// (0x0002abab) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00035542) list_single_touch_info_pane_t

0x0944,	// (0x00026379) bg_popup_heading_pane_cp

0x5184,	// (0x0002abb9) heading_sub_pane_t1

0x2c36,	// (0x0002866b) bg_popup_preview_window_pane_cp_ParamLimits

0x2c36,	// (0x0002866b) bg_popup_preview_window_pane_cp

0x513f,	// (0x0002ab74) heading_preview_pane

0x5147,	// (0x0002ab7c) list_preview_pane_ParamLimits

0x5147,	// (0x0002ab7c) list_preview_pane

0x5192,	// (0x0002abc7) popup_preview_window_g1

0x5156,	// (0x0002ab8b) list_single_preview_pane_ParamLimits

0x5156,	// (0x0002ab8b) list_single_preview_pane

0x519a,	// (0x0002abcf) list_single_preview_pane_g1

0x51a2,	// (0x0002abd7) list_single_preview_pane_t1

0x5168,	// (0x0002ab9d) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00035547) list_single_preview_pane_t

0x51b0,	// (0x0002abe5) bg_popup_heading_pane_cp2_ParamLimits

0x51b0,	// (0x0002abe5) bg_popup_heading_pane_cp2

0x51c6,	// (0x0002abfb) heading_preview_pane_g1

0x51ce,	// (0x0002ac03) heading_preview_pane_t1_ParamLimits

0x51ce,	// (0x0002ac03) heading_preview_pane_t1

0xa319,	// (0x0002fd4e) soft_indicator_pane_t1_ParamLimits

0xd046,	// (0x00032a7b) scroll_pane_ParamLimits

0xd444,	// (0x00032e79) scroll_sc2_left_pane

0xd44d,	// (0x00032e82) scroll_sc2_right_pane

0xd46c,	// (0x00032ea1) scroll_bg_pane_g1_ParamLimits

0xd481,	// (0x00032eb6) scroll_bg_pane_g2_ParamLimits

0xd499,	// (0x00032ece) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003511e) scroll_bg_pane_g_ParamLimits

0xd46c,	// (0x00032ea1) scroll_handle_pane_g1_ParamLimits

0xd4bb,	// (0x00032ef0) scroll_handle_pane_g2_ParamLimits

0xd499,	// (0x00032ece) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00035125) scroll_handle_pane_g_ParamLimits

0x0ee1,	// (0x00026916) popup_choice_list_window_ParamLimits

0x0ee1,	// (0x00026916) popup_choice_list_window

0x1944,	// (0x00027379) choice_list_pane

0x19f6,	// (0x0002742b) cell_toolbar_pane_t1

0x1a1e,	// (0x00027453) toolbar_button_pane_ParamLimits

0x3c65,	// (0x0002969a) ai_gene_pane_1_t2_ParamLimits

0x3c65,	// (0x0002969a) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00035348) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00035348) ai_gene_pane_1_t

0x51eb,	// (0x0002ac20) scroll_sc2_left_pane_g1

0x51eb,	// (0x0002ac20) scroll_sc2_right_pane_g1

0x0eb9,	// (0x000268ee) bg_popup_sub_pane_cp10

0x51f5,	// (0x0002ac2a) list_choice_list_pane

0x520e,	// (0x0002ac43) list_single_choice_list_pane_ParamLimits

0x520e,	// (0x0002ac43) list_single_choice_list_pane

0x5226,	// (0x0002ac5b) list_single_choice_list_pane_g1

0xd224,	// (0x00032c59) list_single_choice_list_pane_t1_ParamLimits

0xd224,	// (0x00032c59) list_single_choice_list_pane_t1

0x522e,	// (0x0002ac63) choice_list_pane_g1

0x5236,	// (0x0002ac6b) choice_list_pane_t1

0x9e72,	// (0x0002f8a7) input_focus_pane_cp11

0xd3a2,	// (0x00032dd7) title_pane_stacon_g2_ParamLimits

0xd3a2,	// (0x00032dd7) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00035104) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00035104) title_pane_stacon_g

0x0944,	// (0x00026379) cursor_press_pane

0xab93,	// (0x000305c8) popup_fep_hwr_window_ParamLimits

0xab93,	// (0x000305c8) popup_fep_hwr_window

0x1025,	// (0x00026a5a) popup_fep_vkb_window_ParamLimits

0x1025,	// (0x00026a5a) popup_fep_vkb_window

0x5244,	// (0x0002ac79) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00035570) fep_vkb_side_pane_g_ParamLimits

0x1ec2,	// (0x000278f7) fep_hwr_candidate_pane_ParamLimits

0x1ec2,	// (0x000278f7) fep_hwr_candidate_pane

0x1eec,	// (0x00027921) fep_hwr_side_pane_ParamLimits

0x1eec,	// (0x00027921) fep_hwr_side_pane

0x1f0e,	// (0x00027943) fep_hwr_top_pane_ParamLimits

0x1f0e,	// (0x00027943) fep_hwr_top_pane

0x1f26,	// (0x0002795b) fep_hwr_write_pane_ParamLimits

0x1f26,	// (0x0002795b) fep_hwr_write_pane

0xfb3b,	// (0x00035570) fep_vkb_side_pane_g

0x524c,	// (0x0002ac81) fep_hwr_top_pane_g1

0x525e,	// (0x0002ac93) fep_hwr_top_pane_g2

0x1f52,	// (0x00027987) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0003554c) fep_hwr_top_pane_g

0x1f67,	// (0x0002799c) fep_hwr_top_text_pane

0xd5b5,	// (0x00032fea) fep_hwr_top_text_pane_g1

0x5294,	// (0x0002acc9) fep_hwr_top_text_pane_t1

0x2071,	// (0x00027aa6) fep_hwr_candidate_pane_g1

0x54df,	// (0x0002af14) fep_vkb_keypad_pane_g3_ParamLimits

0x54df,	// (0x0002af14) fep_vkb_keypad_pane_g3

0x550b,	// (0x0002af40) fep_vkb_keypad_pane_g4_ParamLimits

0x550b,	// (0x0002af40) fep_vkb_keypad_pane_g4

0x5582,	// (0x0002afb7) fep_vkb_bottom_pane_g2_ParamLimits

0x5582,	// (0x0002afb7) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00035577) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00035577) fep_vkb_bottom_pane_g

0x51eb,	// (0x0002ac20) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00035581) cell_vkb_side_pane_g

0x560d,	// (0x0002b042) cell_vkb_side_pane_t1

0x561b,	// (0x0002b050) cell_vkb_side_pane_t1_copy1

0x51eb,	// (0x0002ac20) bg_fep_vkb_candidate_pane_g2

0x575f,	// (0x0002b194) cell_vkb_candidate_pane_ParamLimits

0x52a2,	// (0x0002acd7) aid_size_cell_vkb_ParamLimits

0x52a2,	// (0x0002acd7) aid_size_cell_vkb

0x575f,	// (0x0002b194) cell_vkb_candidate_pane

0x208b,	// (0x00027ac0) bg_popup_fep_shadow_pane_g1

0xc0a4,	// (0x00031ad9) fep_vkb_bottom_pane_ParamLimits

0xc0a4,	// (0x00031ad9) fep_vkb_bottom_pane

0x5371,	// (0x0002ada6) fep_vkb_candidate_pane_ParamLimits

0x5371,	// (0x0002ada6) fep_vkb_candidate_pane

0xc0d0,	// (0x00031b05) fep_vkb_keypad_pane_ParamLimits

0xc0d0,	// (0x00031b05) fep_vkb_keypad_pane

0xc0f7,	// (0x00031b2c) fep_vkb_side_pane_ParamLimits

0xc0f7,	// (0x00031b2c) fep_vkb_side_pane

0xc133,	// (0x00031b68) fep_vkb_top_pane_ParamLimits

0xc133,	// (0x00031b68) fep_vkb_top_pane

0x5438,	// (0x0002ae6d) fep_vkb_top_pane_g1_ParamLimits

0x5438,	// (0x0002ae6d) fep_vkb_top_pane_g1

0x5447,	// (0x0002ae7c) fep_vkb_top_pane_g2_ParamLimits

0x5447,	// (0x0002ae7c) fep_vkb_top_pane_g2

0x5456,	// (0x0002ae8b) fep_vkb_top_pane_g3_ParamLimits

0x5456,	// (0x0002ae8b) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00035567) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00035567) fep_vkb_top_pane_g

0x5474,	// (0x0002aea9) fep_vkb_top_text_pane_ParamLimits

0x5474,	// (0x0002aea9) fep_vkb_top_text_pane

0xc16f,	// (0x00031ba4) fep_vkb_side_pane_g1_ParamLimits

0xc16f,	// (0x00031ba4) fep_vkb_side_pane_g1

0x54ce,	// (0x0002af03) grid_vkb_side_pane_ParamLimits

0x54ce,	// (0x0002af03) grid_vkb_side_pane

0x2093,	// (0x00027ac8) bg_popup_fep_shadow_pane_g2

0x209c,	// (0x00027ad1) bg_popup_fep_shadow_pane_g3

0x20a4,	// (0x00027ad9) bg_popup_fep_shadow_pane_g4

0x20ad,	// (0x00027ae2) bg_popup_fep_shadow_pane_g5

0x20b7,	// (0x00027aec) bg_popup_fep_shadow_pane_g6

0x20bf,	// (0x00027af4) bg_popup_fep_shadow_pane_g7

0xd14e,	// (0x00032b83) bg_popup_fep_shadow_pane_g8

0x552d,	// (0x0002af62) grid_vkb_keypad_number_pane_ParamLimits

0x552d,	// (0x0002af62) grid_vkb_keypad_number_pane

0x5541,	// (0x0002af76) grid_vkb_keypad_pane_ParamLimits

0x5541,	// (0x0002af76) grid_vkb_keypad_pane

0x5567,	// (0x0002af9c) fep_vkb_bottom_pane_g1_ParamLimits

0x5567,	// (0x0002af9c) fep_vkb_bottom_pane_g1

0x5590,	// (0x0002afc5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5590,	// (0x0002afc5) grid_vkb_keypad_bottom_left_pane

0x55a5,	// (0x0002afda) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x55a5,	// (0x0002afda) grid_vkb_keypad_bottom_right_pane

0x55ba,	// (0x0002afef) fep_vkb_top_text_pane_g1

0xc1b6,	// (0x00031beb) fep_vkb_top_text_pane_t1

0xc1c8,	// (0x00031bfd) cell_vkb_side_pane_ParamLimits

0xc1c8,	// (0x00031bfd) cell_vkb_side_pane

0x51eb,	// (0x0002ac20) cell_vkb_side_pane_g1

0x5629,	// (0x0002b05e) cell_vkb_keypad_pane_ParamLimits

0x5629,	// (0x0002b05e) cell_vkb_keypad_pane

0x56b6,	// (0x0002b0eb) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00035594) bg_popup_fep_shadow_pane_g

0x51eb,	// (0x0002ac20) cell_hwr_side_pane_g1

0x51eb,	// (0x0002ac20) cell_hwr_side_pane_g2

0x56c0,	// (0x0002b0f5) cell_vkb_keypad_pane_t1

0xc1de,	// (0x00031c13) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1de,	// (0x00031c13) cell_vkb_keypad_bottom_left_pane

0xc1f3,	// (0x00031c28) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1f3,	// (0x00031c28) cell_vkb_keypad_bottom_right_pane

0x51eb,	// (0x0002ac20) cell_vkb_keypad_bottom_left_pane_g1

0x51eb,	// (0x0002ac20) cell_vkb_keypad_bottom_right_pane_g1

0x5724,	// (0x0002b159) cell_vkb_keypad_number_pane_ParamLimits

0x5724,	// (0x0002b159) cell_vkb_keypad_number_pane

0x5743,	// (0x0002b178) cell_vkb_keypad_number_pane_g1

0x574d,	// (0x0002b182) cell_vkb_keypad_number_pane_g2

0x5756,	// (0x0002b18b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00035586) cell_vkb_keypad_number_pane_g

0x56c0,	// (0x0002b0f5) cell_vkb_keypad_number_pane_t1

0x5780,	// (0x0002b1b5) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x00035581) cell_hwr_side_pane_g

0x5799,	// (0x0002b1ce) cell_hwr_side_pane_t1

0x20d1,	// (0x00027b06) cell_hwr_side_pane_t1_copy1

0x5466,	// (0x0002ae9b) cell_hwr_candidate_pane_g1

0x20df,	// (0x00027b14) cell_hwr_candidate_pane_t1

0x51eb,	// (0x0002ac20) cell_vkb_candidate_pane_g2

0x581f,	// (0x0002b254) cell_vkb_candidate_pane_t1

0x8722,	// (0x0002e157) bg_popup_fep_shadow_pane_ParamLimits

0x8722,	// (0x0002e157) bg_popup_fep_shadow_pane

0xc01d,	// (0x00031a52) bg_fep_hwr_top_pane_g4

0x5270,	// (0x0002aca5) bg_hwr_side_pane_g1_ParamLimits

0x5270,	// (0x0002aca5) bg_hwr_side_pane_g1

0xc043,	// (0x00031a78) cell_hwr_side_pane_ParamLimits

0xc043,	// (0x00031a78) cell_hwr_side_pane

0x1fe2,	// (0x00027a17) fep_hwr_write_pane_g1_ParamLimits

0x1fe2,	// (0x00027a17) fep_hwr_write_pane_g1

0x1fef,	// (0x00027a24) fep_hwr_write_pane_g2_ParamLimits

0x1fef,	// (0x00027a24) fep_hwr_write_pane_g2

0x1ffc,	// (0x00027a31) fep_hwr_write_pane_g3_ParamLimits

0x1ffc,	// (0x00027a31) fep_hwr_write_pane_g3

0xc063,	// (0x00031a98) fep_hwr_write_pane_g4_ParamLimits

0xc063,	// (0x00031a98) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00035553) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00035553) fep_hwr_write_pane_g

0xc01d,	// (0x00031a52) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc01d,	// (0x00031a52) bg_fep_hwr_candidate_pane_g2

0x201f,	// (0x00027a54) cell_hwr_candidate_pane_ParamLimits

0x201f,	// (0x00027a54) cell_hwr_candidate_pane

0x2071,	// (0x00027aa6) fep_hwr_candidate_pane_g1_ParamLimits

0x52d0,	// (0x0002ad05) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x52d0,	// (0x0002ad05) bg_popup_fep_shadow_pane_cp2

0x5466,	// (0x0002ae9b) fep_vkb_top_pane_g4_ParamLimits

0x5466,	// (0x0002ae9b) fep_vkb_top_pane_g4

0x54ac,	// (0x0002aee1) fep_vkb_side_pane_g2_ParamLimits

0x54ac,	// (0x0002aee1) fep_vkb_side_pane_g2

0x9926,	// (0x0002f35b) list_setting_pane_t4_ParamLimits

0x9926,	// (0x0002f35b) list_setting_pane_t4

0x99ba,	// (0x0002f3ef) list_setting_number_pane_t5_ParamLimits

0x99ba,	// (0x0002f3ef) list_setting_number_pane_t5

0xa6e9,	// (0x0003011e) list_double_heading_pane_cp2_ParamLimits

0xa6e9,	// (0x0003011e) list_double_heading_pane_cp2

0x582d,	// (0x0002b262) list_double_heading_pane_g1_cp2_ParamLimits

0x582d,	// (0x0002b262) list_double_heading_pane_g1_cp2

0x5839,	// (0x0002b26e) list_double_heading_pane_g2_cp2_ParamLimits

0x5839,	// (0x0002b26e) list_double_heading_pane_g2_cp2

0x584d,	// (0x0002b282) list_double_heading_pane_t1_cp2_ParamLimits

0x584d,	// (0x0002b282) list_double_heading_pane_t1_cp2

0x5863,	// (0x0002b298) list_double_heading_pane_t2_cp2_ParamLimits

0x5863,	// (0x0002b298) list_double_heading_pane_t2_cp2

0x9e5a,	// (0x0002f88f) aid_value_unit2

0xf39d,	// (0x00034dd2) popup_preview_fixed_window

0xcbf1,	// (0x00032626) bg_popup_preview_window_pane_cp02

0x5875,	// (0x0002b2aa) list_preview_fixed_pane

0x58bb,	// (0x0002b2f0) list_empty_pane_fp_ParamLimits

0x58bb,	// (0x0002b2f0) list_empty_pane_fp

0x58bb,	// (0x0002b2f0) list_single_cale_day_pane_fp_ParamLimits

0x58bb,	// (0x0002b2f0) list_single_cale_day_pane_fp

0x58bb,	// (0x0002b2f0) list_single_graphic_heading_pane_fp_ParamLimits

0x58bb,	// (0x0002b2f0) list_single_graphic_heading_pane_fp

0x58bb,	// (0x0002b2f0) list_single_graphic_pane_fp_ParamLimits

0x58bb,	// (0x0002b2f0) list_single_graphic_pane_fp

0x58bb,	// (0x0002b2f0) list_single_heading_pane_fp_ParamLimits

0x58bb,	// (0x0002b2f0) list_single_heading_pane_fp

0x58bb,	// (0x0002b2f0) list_single_pane_fp_ParamLimits

0x58bb,	// (0x0002b2f0) list_single_pane_fp

0x58d4,	// (0x0002b309) list_single_pane_fp_g1_ParamLimits

0x58d4,	// (0x0002b309) list_single_pane_fp_g1

0xf0af,	// (0x00034ae4) list_single_pane_fp_g2_ParamLimits

0xf0af,	// (0x00034ae4) list_single_pane_fp_g2

0xf0bb,	// (0x00034af0) list_single_pane_fp_g3_ParamLimits

0xf0bb,	// (0x00034af0) list_single_pane_fp_g3

0x58e0,	// (0x0002b315) list_single_pane_fp_g4_ParamLimits

0x58e0,	// (0x0002b315) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x000355b5) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x000355b5) list_single_pane_fp_g

0xf0cf,	// (0x00034b04) list_single_pane_fp_t1_ParamLimits

0xf0cf,	// (0x00034b04) list_single_pane_fp_t1

0xf0e6,	// (0x00034b1b) list_single_graphic_pane_fp_g1_ParamLimits

0xf0e6,	// (0x00034b1b) list_single_graphic_pane_fp_g1

0x58d4,	// (0x0002b309) list_single_graphic_pane_fp_g2_ParamLimits

0x58d4,	// (0x0002b309) list_single_graphic_pane_fp_g2

0xf0af,	// (0x00034ae4) list_single_graphic_pane_fp_g3_ParamLimits

0xf0af,	// (0x00034ae4) list_single_graphic_pane_fp_g3

0xf0bb,	// (0x00034af0) list_single_graphic_pane_fp_g4_ParamLimits

0xf0bb,	// (0x00034af0) list_single_graphic_pane_fp_g4

0x58e0,	// (0x0002b315) list_single_graphic_pane_fp_g5_ParamLimits

0x58e0,	// (0x0002b315) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x000355be) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x000355be) list_single_graphic_pane_fp_g

0xf0f2,	// (0x00034b27) list_single_graphic_pane_fp_t1_ParamLimits

0xf0f2,	// (0x00034b27) list_single_graphic_pane_fp_t1

0xf0e6,	// (0x00034b1b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf0e6,	// (0x00034b1b) list_single_graphic_heading_pane_fp_g1

0x58d4,	// (0x0002b309) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x58d4,	// (0x0002b309) list_single_graphic_heading_pane_fp_g2

0xf0af,	// (0x00034ae4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf0af,	// (0x00034ae4) list_single_graphic_heading_pane_fp_g3

0xf0bb,	// (0x00034af0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf0bb,	// (0x00034af0) list_single_graphic_heading_pane_fp_g4

0x58e0,	// (0x0002b315) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x58e0,	// (0x0002b315) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x000355be) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x000355be) list_single_graphic_heading_pane_fp_g

0xf108,	// (0x00034b3d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf108,	// (0x00034b3d) list_single_graphic_heading_pane_fp_t1

0xf11e,	// (0x00034b53) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf11e,	// (0x00034b53) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x000355c9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x000355c9) list_single_graphic_heading_pane_fp_t

0xf130,	// (0x00034b65) list_single_cale_day_pane_fp_g1_ParamLimits

0xf130,	// (0x00034b65) list_single_cale_day_pane_fp_g1

0x58ec,	// (0x0002b321) list_single_cale_day_pane_fp_g2_ParamLimits

0x58ec,	// (0x0002b321) list_single_cale_day_pane_fp_g2

0xf168,	// (0x00034b9d) list_single_cale_day_pane_fp_g3_ParamLimits

0xf168,	// (0x00034b9d) list_single_cale_day_pane_fp_g3

0xf190,	// (0x00034bc5) list_single_cale_day_pane_fp_g4_ParamLimits

0xf190,	// (0x00034bc5) list_single_cale_day_pane_fp_g4

0xf1b4,	// (0x00034be9) list_single_cale_day_pane_fp_g5_ParamLimits

0xf1b4,	// (0x00034be9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x000355ce) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x000355ce) list_single_cale_day_pane_fp_g

0xf3a7,	// (0x00034ddc) list_single_cale_day_pane_fp_t1_ParamLimits

0xf3a7,	// (0x00034ddc) list_single_cale_day_pane_fp_t1

0xf3cd,	// (0x00034e02) list_single_cale_day_pane_fp_t2_ParamLimits

0xf3cd,	// (0x00034e02) list_single_cale_day_pane_fp_t2

0xf3e6,	// (0x00034e1b) list_single_cale_day_pane_fp_t3_ParamLimits

0xf3e6,	// (0x00034e1b) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x000355d9) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x000355d9) list_single_cale_day_pane_fp_t

0x58d4,	// (0x0002b309) list_empty_pane_fp_g1_ParamLimits

0x58d4,	// (0x0002b309) list_empty_pane_fp_g1

0xf3ff,	// (0x00034e34) list_empty_pane_fp_t1

0xf40d,	// (0x00034e42) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x000355e0) list_empty_pane_fp_t

0x58d4,	// (0x0002b309) list_single_heading_pane_fp_g1_ParamLimits

0x58d4,	// (0x0002b309) list_single_heading_pane_fp_g1

0xf0af,	// (0x00034ae4) list_single_heading_pane_fp_g2_ParamLimits

0xf0af,	// (0x00034ae4) list_single_heading_pane_fp_g2

0xf0bb,	// (0x00034af0) list_single_heading_pane_fp_g3_ParamLimits

0xf0bb,	// (0x00034af0) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x000355e5) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x000355e5) list_single_heading_pane_fp_g

0xf41b,	// (0x00034e50) list_single_heading_pane_fp_t1_ParamLimits

0xf41b,	// (0x00034e50) list_single_heading_pane_fp_t1

0xf42d,	// (0x00034e62) list_single_heading_pane_fp_t2_ParamLimits

0xf42d,	// (0x00034e62) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x000355ec) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x000355ec) list_single_heading_pane_fp_t

0xd239,	// (0x00032c6e) aid_size_cell_fast

0xcbd4,	// (0x00032609) soft_indicator_pane_cp1_t1

0xd276,	// (0x00032cab) cell_app_pane_cp2_ParamLimits

0xd276,	// (0x00032cab) cell_app_pane_cp2

0x1eab,	// (0x000278e0) fep_hwr_candidate_drop_down_list_pane

0xc078,	// (0x00031aad) fep_hwr_candidate_pane_g3_ParamLimits

0xc078,	// (0x00031aad) fep_hwr_candidate_pane_g3

0xc085,	// (0x00031aba) fep_hwr_candidate_pane_g4_ParamLimits

0xc085,	// (0x00031aba) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00035560) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00035560) fep_hwr_candidate_pane_g

0x5360,	// (0x0002ad95) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5360,	// (0x0002ad95) fep_vkb_candidate_drop_down_list_pane

0x5788,	// (0x0002b1bd) fep_vkb_candidate_pane_g3

0x5790,	// (0x0002b1c5) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0003558d) fep_vkb_candidate_pane_g

0x5466,	// (0x0002ae9b) cell_hwr_candidate_pane_g1_ParamLimits

0x57a7,	// (0x0002b1dc) cell_hwr_candidate_pane_g3_ParamLimits

0x57a7,	// (0x0002b1dc) cell_hwr_candidate_pane_g3

0x57c8,	// (0x0002b1fd) cell_hwr_candidate_pane_g4_ParamLimits

0x57c8,	// (0x0002b1fd) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x000355a7) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x000355a7) cell_hwr_candidate_pane_g

0x57e9,	// (0x0002b21e) cell_vkb_candidate_pane_g3_ParamLimits

0x57e9,	// (0x0002b21e) cell_vkb_candidate_pane_g3

0x5804,	// (0x0002b239) cell_vkb_candidate_pane_g4_ParamLimits

0x5804,	// (0x0002b239) cell_vkb_candidate_pane_g4

0x58f8,	// (0x0002b32d) cell_app_pane_cp2_g1_ParamLimits

0x58f8,	// (0x0002b32d) cell_app_pane_cp2_g1

0x5916,	// (0x0002b34b) cell_app_pane_cp2_g2_ParamLimits

0x5916,	// (0x0002b34b) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x000355f1) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x000355f1) cell_app_pane_cp2_g

0x5922,	// (0x0002b357) cell_app_pane_cp2_t1_ParamLimits

0x5922,	// (0x0002b357) cell_app_pane_cp2_t1

0xd0d3,	// (0x00032b08) grid_highlight_pane_cp1_ParamLimits

0xd0d3,	// (0x00032b08) grid_highlight_pane_cp1

0x20fd,	// (0x00027b32) cell_hwr_candidate_pane_cp1_ParamLimits

0x20fd,	// (0x00027b32) cell_hwr_candidate_pane_cp1

0x5466,	// (0x0002ae9b) fep_hwr_candidate_drop_down_list_pane_g1

0x5934,	// (0x0002b369) fep_hwr_candidate_drop_down_list_pane_g2

0x5941,	// (0x0002b376) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x000355f6) fep_hwr_candidate_drop_down_list_pane_g

0x2121,	// (0x00027b56) fep_hwr_candidate_drop_down_list_scroll_pane

0x212a,	// (0x00027b5f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x212a,	// (0x00027b5f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2137,	// (0x00027b6c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2137,	// (0x00027b6c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2144,	// (0x00027b79) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2144,	// (0x00027b79) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x57e9,	// (0x0002b21e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x57e9,	// (0x0002b21e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5804,	// (0x0002b239) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5804,	// (0x0002b239) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2151,	// (0x00027b86) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2151,	// (0x00027b86) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x216c,	// (0x00027ba1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x216c,	// (0x00027ba1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2187,	// (0x00027bbc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2187,	// (0x00027bbc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x000355fd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x000355fd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x594e,	// (0x0002b383) cell_vkb_candidate_pane_cp1_ParamLimits

0x594e,	// (0x0002b383) cell_vkb_candidate_pane_cp1

0x5466,	// (0x0002ae9b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5466,	// (0x0002ae9b) fep_vkb_candidate_drop_down_list_pane_g1

0x5934,	// (0x0002b369) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5934,	// (0x0002b369) fep_vkb_candidate_drop_down_list_pane_g2

0x5941,	// (0x0002b376) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5941,	// (0x0002b376) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x000355f6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x000355f6) fep_vkb_candidate_drop_down_list_pane_g

0x5974,	// (0x0002b3a9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5974,	// (0x0002b3a9) fep_vkb_candidate_drop_down_list_scroll_pane

0x5981,	// (0x0002b3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5981,	// (0x0002b3b6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x598e,	// (0x0002b3c3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x598e,	// (0x0002b3c3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x599a,	// (0x0002b3cf) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x599a,	// (0x0002b3cf) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x57a7,	// (0x0002b1dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x57a7,	// (0x0002b1dc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x57c8,	// (0x0002b1fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x57c8,	// (0x0002b1fd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x59a6,	// (0x0002b3db) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x59a6,	// (0x0002b3db) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x59c7,	// (0x0002b3fc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x59c7,	// (0x0002b3fc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x59e8,	// (0x0002b41d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x59e8,	// (0x0002b41d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0003560e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0003560e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa0a4,	// (0x0002fad9) title_pane_g1_ParamLimits

0xa0b7,	// (0x0002faec) title_pane_g2_ParamLimits

0xf554,	// (0x00034f89) title_pane_g_ParamLimits

0xd5a5,	// (0x00032fda) aid_call2_pane

0xd5ad,	// (0x00032fe2) aid_call_pane

0xd5b5,	// (0x00032fea) popup_clock_analogue_window_g1

0xd5b5,	// (0x00032fea) popup_clock_analogue_window_g2

0x02d2,	// (0x00025d07) popup_clock_analogue_window_g3

0x02db,	// (0x00025d10) popup_clock_analogue_window_g4

0x9e7c,	// (0x0002f8b1) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00035133) popup_clock_analogue_window_g

0x02e3,	// (0x00025d18) popup_clock_analogue_window_t1

0x0324,	// (0x00025d59) clock_digital_number_pane_ParamLimits

0x0324,	// (0x00025d59) clock_digital_number_pane

0x0330,	// (0x00025d65) clock_digital_number_pane_cp02_ParamLimits

0x0330,	// (0x00025d65) clock_digital_number_pane_cp02

0x033c,	// (0x00025d71) clock_digital_number_pane_cp03_ParamLimits

0x033c,	// (0x00025d71) clock_digital_number_pane_cp03

0x0348,	// (0x00025d7d) clock_digital_number_pane_cp04_ParamLimits

0x0348,	// (0x00025d7d) clock_digital_number_pane_cp04

0x0354,	// (0x00025d89) clock_digital_separator_pane_ParamLimits

0x0354,	// (0x00025d89) clock_digital_separator_pane

0x0360,	// (0x00025d95) popup_clock_digital_window_t1_ParamLimits

0x0360,	// (0x00025d95) popup_clock_digital_window_t1

0x9e7c,	// (0x0002f8b1) clock_digital_number_pane_g1

0x9e7c,	// (0x0002f8b1) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003513e) clock_digital_number_pane_g

0x9e7c,	// (0x0002f8b1) clock_digital_separator_pane_g1

0x9e7c,	// (0x0002f8b1) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003513e) clock_digital_separator_pane_g

0xb1fe,	// (0x00030c33) aid_fill_nsta_ParamLimits

0xb336,	// (0x00030d6b) indicator_nsta_pane_ParamLimits

0x17d1,	// (0x00027206) popup_clock_analogue_window

0x17d1,	// (0x00027206) popup_clock_digital_window

0xd785,	// (0x000331ba) grid_indicator_nsta_pane_ParamLimits

0x4c18,	// (0x0002a64d) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x000354e0) clock_nsta_pane_t

0x023b,	// (0x00025c70) aid_size_max_handle

0xa65c,	// (0x00030091) aid_size_min_handle

0x0944,	// (0x00026379) editor_scroll_pane

0x5a03,	// (0x0002b438) ex_editor_pane

0xd1ff,	// (0x00032c34) scroll_pane_cp13

0xd072,	// (0x00032aa7) scroll_pane_cp14

0xd5e4,	// (0x00033019) scroll_pane_cp36

0xa6fc,	// (0x00030131) list_single_graphic_hl_pane_cp2_ParamLimits

0xa6fc,	// (0x00030131) list_single_graphic_hl_pane_cp2

0xbcd8,	// (0x0003170d) list_single_graphic_hl_pane_ParamLimits

0xbcd8,	// (0x0003170d) list_single_graphic_hl_pane

0xf443,	// (0x00034e78) aid_size_min_hl_cp1

0x5a0b,	// (0x0002b440) list_highlight_pane_cp34_ParamLimits

0x5a0b,	// (0x0002b440) list_highlight_pane_cp34

0x5a1c,	// (0x0002b451) list_single_graphic_hl_pane_g1_ParamLimits

0x5a1c,	// (0x0002b451) list_single_graphic_hl_pane_g1

0x9c71,	// (0x0002f6a6) list_single_graphic_hl_pane_g2_ParamLimits

0x9c71,	// (0x0002f6a6) list_single_graphic_hl_pane_g2

0x9c71,	// (0x0002f6a6) list_single_graphic_hl_pane_g3_ParamLimits

0x9c71,	// (0x0002f6a6) list_single_graphic_hl_pane_g3

0xf1d8,	// (0x00034c0d) list_single_graphic_hl_pane_g4_ParamLimits

0xf1d8,	// (0x00034c0d) list_single_graphic_hl_pane_g4

0x9c7d,	// (0x0002f6b2) list_single_graphic_hl_pane_g5_ParamLimits

0x9c7d,	// (0x0002f6b2) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x0003561f) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x0003561f) list_single_graphic_hl_pane_g

0x9c91,	// (0x0002f6c6) list_single_graphic_hl_pane_t1_ParamLimits

0x9c91,	// (0x0002f6c6) list_single_graphic_hl_pane_t1

0x5a29,	// (0x0002b45e) aid_size_min_hl_cp2

0x5a32,	// (0x0002b467) list_highlight_pane_cp34_cp2_ParamLimits

0x5a32,	// (0x0002b467) list_highlight_pane_cp34_cp2

0x5a1c,	// (0x0002b451) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5a1c,	// (0x0002b451) list_single_graphic_hl_pane_g1_cp2

0x5a3f,	// (0x0002b474) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a3f,	// (0x0002b474) list_single_graphic_hl_pane_g2_cp2

0xc20e,	// (0x00031c43) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc20e,	// (0x00031c43) list_single_graphic_hl_pane_g3_cp2

0xd793,	// (0x000331c8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd793,	// (0x000331c8) list_single_graphic_hl_pane_g4_cp2

0x5a9b,	// (0x0002b4d0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5a9b,	// (0x0002b4d0) list_single_graphic_hl_pane_g5_cp2

0xa98b,	// (0x000303c0) control_pane_g4_ParamLimits

0xa98b,	// (0x000303c0) control_pane_g4

0x0eb9,	// (0x000268ee) bg_popup_sub_pane_cp10_ParamLimits

0x51f5,	// (0x0002ac2a) list_choice_list_pane_ParamLimits

0x5204,	// (0x0002ac39) scroll_pane_cp23

0xcbf1,	// (0x00032626) bg_popup_preview_window_pane_cp02_ParamLimits

0x5875,	// (0x0002b2aa) list_preview_fixed_pane_ParamLimits

0x588b,	// (0x0002b2c0) list_preview_fixed_pane_cp_ParamLimits

0x588b,	// (0x0002b2c0) list_preview_fixed_pane_cp

0x5897,	// (0x0002b2cc) popup_preview_fixed_window_g1_ParamLimits

0x5897,	// (0x0002b2cc) popup_preview_fixed_window_g1

0x58a3,	// (0x0002b2d8) popup_preview_fixed_window_g2_ParamLimits

0x58a3,	// (0x0002b2d8) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x000355ae) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x000355ae) popup_preview_fixed_window_g

0x012a,	// (0x00025b5f) aid_navi_side_left_pane_ParamLimits

0x013f,	// (0x00025b74) aid_navi_side_right_pane_ParamLimits

0x0157,	// (0x00025b8c) navi_icon_pane_stacon_ParamLimits

0x016b,	// (0x00025ba0) navi_navi_pane_stacon_ParamLimits

0x0157,	// (0x00025b8c) navi_text_pane_stacon_ParamLimits

0x9e72,	// (0x0002f8a7) main_text_info_pane

0x5ac5,	// (0x0002b4fa) listscroll_text_info_pane

0x5acd,	// (0x0002b502) list_text_info_pane_ParamLimits

0x5acd,	// (0x0002b502) list_text_info_pane

0x5adc,	// (0x0002b511) scroll_pane_cp24_ParamLimits

0x5adc,	// (0x0002b511) scroll_pane_cp24

0xc21c,	// (0x00031c51) list_text_info_pane_t1_ParamLimits

0xc21c,	// (0x00031c51) list_text_info_pane_t1

0xaaf7,	// (0x0003052c) popup_fast_swap2_window_ParamLimits

0xaaf7,	// (0x0003052c) popup_fast_swap2_window

0x5b1f,	// (0x0002b554) aid_size_cell_fast2

0x9e72,	// (0x0002f8a7) bg_popup_window_pane_cp17

0x2ff6,	// (0x00028a2b) heading_pane_cp2

0xcdf7,	// (0x0003282c) listscroll_fast2_pane

0x5b29,	// (0x0002b55e) grid_fast2_pane

0x5b33,	// (0x0002b568) listscroll_fast2_pane_g1

0x5b3d,	// (0x0002b572) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x0003562a) listscroll_fast2_pane_g

0xd1ff,	// (0x00032c34) scroll_pane_cp26

0x5b47,	// (0x0002b57c) cell_fast2_pane_ParamLimits

0x5b47,	// (0x0002b57c) cell_fast2_pane

0x5b5e,	// (0x0002b593) cell_fast2_pane_g1

0x5b67,	// (0x0002b59c) cell_fast2_pane_g2

0x5b70,	// (0x0002b5a5) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x0003562f) cell_fast2_pane_g

0xce39,	// (0x0003286e) grid_highlight_pane_cp9

0xce4e,	// (0x00032883) main_eswt_pane_ParamLimits

0xce4e,	// (0x00032883) main_eswt_pane

0x5af1,	// (0x0002b526) list_single_text_info_pane

0x5b78,	// (0x0002b5ad) eswt_ctrl_button_pane

0x5b78,	// (0x0002b5ad) eswt_ctrl_canvas_pane

0x5b80,	// (0x0002b5b5) eswt_ctrl_combo_pane

0x5b78,	// (0x0002b5ad) eswt_ctrl_default_pane

0x5b78,	// (0x0002b5ad) eswt_ctrl_label_pane

0x5b88,	// (0x0002b5bd) eswt_ctrl_wait_pane

0x5b90,	// (0x0002b5c5) eswt_shell_pane

0x9e72,	// (0x0002f8a7) listscroll_eswt_app_pane

0x5bb0,	// (0x0002b5e5) popup_eswt_tasktip_window_ParamLimits

0x5bb0,	// (0x0002b5e5) popup_eswt_tasktip_window

0x2c36,	// (0x0002866b) bg_popup_window_pane_cp18

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_ParamLimits

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1

0x5bce,	// (0x0002b603) eswt_control_pane_g2_ParamLimits

0x5bce,	// (0x0002b603) eswt_control_pane_g2

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_ParamLimits

0x5bdb,	// (0x0002b610) eswt_control_pane_g3

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_ParamLimits

0x5be8,	// (0x0002b61d) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x00035636) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x00035636) eswt_control_pane_g

0xd0d3,	// (0x00032b08) bg_button_pane_ParamLimits

0xd0d3,	// (0x00032b08) bg_button_pane

0xce4e,	// (0x00032883) common_borders_pane_copy2_ParamLimits

0xce4e,	// (0x00032883) common_borders_pane_copy2

0x5bf5,	// (0x0002b62a) control_button_pane_g1_ParamLimits

0x5bf5,	// (0x0002b62a) control_button_pane_g1

0x5c01,	// (0x0002b636) control_button_pane_g2_ParamLimits

0x5c01,	// (0x0002b636) control_button_pane_g2

0x5c0d,	// (0x0002b642) control_button_pane_g3_ParamLimits

0x5c0d,	// (0x0002b642) control_button_pane_g3

0x0002,

0xfc0a,	// (0x0003563f) control_button_pane_g_ParamLimits

0xfc0a,	// (0x0003563f) control_button_pane_g

0x5c21,	// (0x0002b656) control_button_pane_t1

0x5c2f,	// (0x0002b664) control_button_pane_t2

0x0001,

0xfc11,	// (0x00035646) control_button_pane_t

0x1a2a,	// (0x0002745f) bg_button_pane_g1

0x1a32,	// (0x00027467) bg_button_pane_g2

0x1a3a,	// (0x0002746f) bg_button_pane_g3

0x1a42,	// (0x00027477) bg_button_pane_g4

0x1a4a,	// (0x0002747f) bg_button_pane_g5

0x1a52,	// (0x00027487) bg_button_pane_g6

0x1a5a,	// (0x0002748f) bg_button_pane_g7

0x1a62,	// (0x00027497) bg_button_pane_g8

0x1a6a,	// (0x0002749f) bg_button_pane_g9

0x0008,

0xf867,	// (0x0003529c) bg_button_pane_g

0x51b0,	// (0x0002abe5) common_borders_pane_ParamLimits

0x51b0,	// (0x0002abe5) common_borders_pane

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy1_ParamLimits

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy1

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy1_ParamLimits

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy1

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy1_ParamLimits

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy1

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy1_ParamLimits

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy1

0x51eb,	// (0x0002ac20) bg_eswt_ctrl_canvas_pane_g1

0x51b0,	// (0x0002abe5) common_borders_pane_cp2_ParamLimits

0x51b0,	// (0x0002abe5) common_borders_pane_cp2

0x51b0,	// (0x0002abe5) common_borders_pane_cp3_ParamLimits

0x51b0,	// (0x0002abe5) common_borders_pane_cp3

0x5c3d,	// (0x0002b672) separator_horizontal_pane

0x5c45,	// (0x0002b67a) separator_vertical_pane

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy2_ParamLimits

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy2

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy2_ParamLimits

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy2

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy2_ParamLimits

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy2

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy2_ParamLimits

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy2

0x9e72,	// (0x0002f8a7) common_borders_pane_cp4

0x5c4e,	// (0x0002b683) separator_horizontal_pane_g1

0x5c57,	// (0x0002b68c) separator_horizontal_pane_g2

0x5c60,	// (0x0002b695) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x0003564b) separator_horizontal_pane_g

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy3_ParamLimits

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy3

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy3_ParamLimits

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy3

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy3_ParamLimits

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy3

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy3_ParamLimits

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy3

0x9e72,	// (0x0002f8a7) common_borders_pane_cp5

0x5c69,	// (0x0002b69e) separator_vertical_pane_g1

0x5c72,	// (0x0002b6a7) separator_vertical_pane_g2

0x5c7b,	// (0x0002b6b0) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x00035652) separator_vertical_pane_g

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy4_ParamLimits

0x5bc1,	// (0x0002b5f6) eswt_control_pane_g1_copy4

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy4_ParamLimits

0x5bce,	// (0x0002b603) eswt_control_pane_g2_copy4

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy4_ParamLimits

0x5bdb,	// (0x0002b610) eswt_control_pane_g3_copy4

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy4_ParamLimits

0x5be8,	// (0x0002b61d) eswt_control_pane_g4_copy4

0xc23e,	// (0x00031c73) eswt_ctrl_combo_button_pane

0xc246,	// (0x00031c7b) eswt_ctrl_input_pane

0xc24e,	// (0x00031c83) popup_choice_list_window_cp70

0xc256,	// (0x00031c8b) eswt_ctrl_input_pane_t1

0x9e72,	// (0x0002f8a7) input_focus_pane_cp70

0x51b0,	// (0x0002abe5) bg_button_pane_cp70_ParamLimits

0x51b0,	// (0x0002abe5) bg_button_pane_cp70

0xc264,	// (0x00031c99) eswt_ctrl_combo_button_pane_g1

0x5cb2,	// (0x0002b6e7) wait_bar_pane_cp70

0x2c36,	// (0x0002866b) bg_popup_window_pane_cp70_ParamLimits

0x2c36,	// (0x0002866b) bg_popup_window_pane_cp70

0x5cba,	// (0x0002b6ef) popup_eswt_tasktip_window_t1

0x5cd0,	// (0x0002b705) wait_bar_pane_cp71_ParamLimits

0x5cd0,	// (0x0002b705) wait_bar_pane_cp71

0x5cdc,	// (0x0002b711) grid_eswt_app_pane

0xd44d,	// (0x00032e82) scroll_pane_cp70

0xc26c,	// (0x00031ca1) cell_eswt_app_pane_ParamLimits

0xc26c,	// (0x00031ca1) cell_eswt_app_pane

0xc29e,	// (0x00031cd3) cell_eswt_app_pane_g1_ParamLimits

0xc29e,	// (0x00031cd3) cell_eswt_app_pane_g1

0xc2cd,	// (0x00031d02) cell_eswt_app_pane_g2_ParamLimits

0xc2cd,	// (0x00031d02) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x00035659) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x00035659) cell_eswt_app_pane_g

0xc2f6,	// (0x00031d2b) cell_eswt_app_pane_t1_ParamLimits

0xc2f6,	// (0x00031d2b) cell_eswt_app_pane_t1

0x5da1,	// (0x0002b7d6) grid_highlight_pane_cp70_ParamLimits

0x5da1,	// (0x0002b7d6) grid_highlight_pane_cp70

0x0815,	// (0x0002624a) set_content_pane_g1

0x0c91,	// (0x000266c6) status_small_volume_pane

0x21a2,	// (0x00027bd7) status_small_volume_pane_g1

0x21aa,	// (0x00027bdf) volume_small2_pane

0x21b3,	// (0x00027be8) volume_small2_pane_g1

0x21bc,	// (0x00027bf1) volume_small2_pane_g2

0x21c5,	// (0x00027bfa) volume_small2_pane_g3

0x21ce,	// (0x00027c03) volume_small2_pane_g4

0x21d7,	// (0x00027c0c) volume_small2_pane_g5

0x21e0,	// (0x00027c15) volume_small2_pane_g6

0x21e9,	// (0x00027c1e) volume_small2_pane_g7

0x21f2,	// (0x00027c27) volume_small2_pane_g8

0x21fb,	// (0x00027c30) volume_small2_pane_g9

0x2204,	// (0x00027c39) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x0003565e) volume_small2_pane_g

0x55ba,	// (0x0002afef) fep_vkb_top_text_pane_g1_ParamLimits

0xc1b6,	// (0x00031beb) fep_vkb_top_text_pane_t1_ParamLimits

0x58af,	// (0x0002b2e4) popup_preview_fixed_window_g3_ParamLimits

0x58af,	// (0x0002b2e4) popup_preview_fixed_window_g3

0xb191,	// (0x00030bc6) popup_toolbar_trans_pane

0xbb28,	// (0x0003155d) aid_height_set_list_ParamLimits

0x3f8c,	// (0x000299c1) aid_size_parent_ParamLimits

0x0eb9,	// (0x000268ee) list_highlight_pane_cp2_ParamLimits

0x0815,	// (0x0002624a) set_content_pane_g1_ParamLimits

0xbcec,	// (0x00031721) list_single_image_pane_ParamLimits

0xbcec,	// (0x00031721) list_single_image_pane

0xc328,	// (0x00031d5d) aid_size_cell_image_ParamLimits

0xc328,	// (0x00031d5d) aid_size_cell_image

0xc335,	// (0x00031d6a) grid_single_image_pane_ParamLimits

0xc335,	// (0x00031d6a) grid_single_image_pane

0xd0e1,	// (0x00032b16) list_single_image_pane_g1_ParamLimits

0xd0e1,	// (0x00032b16) list_single_image_pane_g1

0xd0ed,	// (0x00032b22) list_single_image_pane_g2_ParamLimits

0xd0ed,	// (0x00032b22) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x00035673) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x00035673) list_single_image_pane_g

0x5dc8,	// (0x0002b7fd) list_single_image_pane_t1_ParamLimits

0x5dc8,	// (0x0002b7fd) list_single_image_pane_t1

0xc343,	// (0x00031d78) cell_image_list_pane_ParamLimits

0xc343,	// (0x00031d78) cell_image_list_pane

0xc357,	// (0x00031d8c) cell_image_list_pane_g1

0xc360,	// (0x00031d95) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x00035678) cell_image_list_pane_g

0x5e06,	// (0x0002b83b) aid_size_cell_tb_trans_pane

0xd0d3,	// (0x00032b08) bg_tb_trans_pane

0x5e18,	// (0x0002b84d) grid_tb_trans_pane

0x1a2a,	// (0x0002745f) bg_tb_trans_pane_g1

0x1a32,	// (0x00027467) bg_tb_trans_pane_g2

0x1a3a,	// (0x0002746f) bg_tb_trans_pane_g3

0x1a42,	// (0x00027477) bg_tb_trans_pane_g4

0x1a4a,	// (0x0002747f) bg_tb_trans_pane_g5

0x1a62,	// (0x00027497) bg_tb_trans_pane_g6

0x1a6a,	// (0x0002749f) bg_tb_trans_pane_g7

0x1a52,	// (0x00027487) bg_tb_trans_pane_g8

0x1a5a,	// (0x0002748f) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x0003567d) bg_tb_trans_pane_g

0x5e2c,	// (0x0002b861) cell_toolbar_trans_pane_ParamLimits

0x5e2c,	// (0x0002b861) cell_toolbar_trans_pane

0x51eb,	// (0x0002ac20) cell_toolbar_trans_pane_g1

0xbf26,	// (0x0003195b) list_form2_midp_pane_t1

0xbf34,	// (0x00031969) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00035526) list_form2_midp_pane_t

0x4e2b,	// (0x0002a860) scroll_pane_cp51_ParamLimits

0x4ff2,	// (0x0002aa27) form2_midp_wait_pane_g1

0x4ffb,	// (0x0002aa30) form2_midp_wait_pane_g2

0x5004,	// (0x0002aa39) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0003553b) form2_midp_wait_pane_g

0xa1ed,	// (0x0002fc22) list_highlight_pane_cp21_ParamLimits

0x5048,	// (0x0002aa7d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5057,	// (0x0002aa8c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xedc5,	// (0x000347fa) list_single_2graphic_im_pane_ParamLimits

0xedc5,	// (0x000347fa) list_single_2graphic_im_pane

0xc369,	// (0x00031d9e) list_single_2graphic_im_pane_g1_ParamLimits

0xc369,	// (0x00031d9e) list_single_2graphic_im_pane_g1

0xc37a,	// (0x00031daf) list_single_2graphic_im_pane_g2_ParamLimits

0xc37a,	// (0x00031daf) list_single_2graphic_im_pane_g2

0xc386,	// (0x00031dbb) list_single_2graphic_im_pane_g3_ParamLimits

0xc386,	// (0x00031dbb) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x00035690) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x00035690) list_single_2graphic_im_pane_g

0xc39a,	// (0x00031dcf) list_single_2graphic_im_pane_t1_ParamLimits

0xc39a,	// (0x00031dcf) list_single_2graphic_im_pane_t1

0x58bb,	// (0x0002b2f0) list_single_graphic_2heading_pane_fp_ParamLimits

0x58bb,	// (0x0002b2f0) list_single_graphic_2heading_pane_fp

0xf0e6,	// (0x00034b1b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf0e6,	// (0x00034b1b) list_single_graphic_2heading_pane_fp_g1

0x58d4,	// (0x0002b309) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x58d4,	// (0x0002b309) list_single_graphic_2heading_pane_fp_g2

0xf0af,	// (0x00034ae4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf0af,	// (0x00034ae4) list_single_graphic_2heading_pane_fp_g3

0xf0bb,	// (0x00034af0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf0bb,	// (0x00034af0) list_single_graphic_2heading_pane_fp_g4

0x58e0,	// (0x0002b315) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x58e0,	// (0x0002b315) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x000355be) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x000355be) list_single_graphic_2heading_pane_fp_g

0xf44c,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf44c,	// (0x00034e81) list_single_graphic_2heading_pane_fp_t1

0xf11e,	// (0x00034b53) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf11e,	// (0x00034b53) list_single_graphic_2heading_pane_fp_t2

0xf462,	// (0x00034e97) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf462,	// (0x00034e97) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x00035699) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x00035699) list_single_graphic_2heading_pane_fp_t

0x527c,	// (0x0002acb1) fep_hwr_write_pane_g5_ParamLimits

0x527c,	// (0x0002acb1) fep_hwr_write_pane_g5

0x5288,	// (0x0002acbd) fep_hwr_write_pane_g6_ParamLimits

0x5288,	// (0x0002acbd) fep_hwr_write_pane_g6

0x5b90,	// (0x0002b5c5) eswt_shell_pane_ParamLimits

0x2c36,	// (0x0002866b) bg_popup_window_pane_cp18_ParamLimits

0x3ed2,	// (0x00029907) heading_pane_cp70

0x5cba,	// (0x0002b6ef) popup_eswt_tasktip_window_t1_ParamLimits

0xb25b,	// (0x00030c90) aid_touch_tab_arrow_left

0xb271,	// (0x00030ca6) aid_touch_tab_arrow_right

0xa0cf,	// (0x0002fb04) title_pane_g3_ParamLimits

0xa0cf,	// (0x0002fb04) title_pane_g3

0xd092,	// (0x00032ac7) set_value_pane_g1

0xb191,	// (0x00030bc6) popup_toolbar_trans_pane_ParamLimits

0x5e06,	// (0x0002b83b) aid_size_cell_tb_trans_pane_ParamLimits

0xd0d3,	// (0x00032b08) bg_tb_trans_pane_ParamLimits

0x5e18,	// (0x0002b84d) grid_tb_trans_pane_ParamLimits

0xcbf1,	// (0x00032626) cont_note_pane_ParamLimits

0xcbf1,	// (0x00032626) cont_note_pane

0xce4e,	// (0x00032883) cont_snote2_single_text_pane_ParamLimits

0xce4e,	// (0x00032883) cont_snote2_single_text_pane

0xce4e,	// (0x00032883) cont_snote2_single_graphic_pane_ParamLimits

0xce4e,	// (0x00032883) cont_snote2_single_graphic_pane

0x3212,	// (0x00028c47) cont_note_wait_pane_ParamLimits

0x3212,	// (0x00028c47) cont_note_wait_pane

0x3212,	// (0x00028c47) cont_note_image_pane_ParamLimits

0x3212,	// (0x00028c47) cont_note_image_pane

0x5ec0,	// (0x0002b8f5) popup_note2_window_g1_ParamLimits

0x5ec0,	// (0x0002b8f5) popup_note2_window_g1

0x5ef1,	// (0x0002b926) popup_note2_window_t1_ParamLimits

0x5ef1,	// (0x0002b926) popup_note2_window_t1

0x5f36,	// (0x0002b96b) popup_note2_window_t2_ParamLimits

0x5f36,	// (0x0002b96b) popup_note2_window_t2

0x5f7b,	// (0x0002b9b0) popup_note2_window_t3_ParamLimits

0x5f7b,	// (0x0002b9b0) popup_note2_window_t3

0x5fc0,	// (0x0002b9f5) popup_note2_window_t4_ParamLimits

0x5fc0,	// (0x0002b9f5) popup_note2_window_t4

0xcc75,	// (0x000326aa) popup_note2_window_t5_ParamLimits

0xcc75,	// (0x000326aa) popup_note2_window_t5

0x0004,

0xfc70,	// (0x000356a5) popup_note2_window_t_ParamLimits

0xfc70,	// (0x000356a5) popup_note2_window_t

0x5fef,	// (0x0002ba24) popup_note2_image_window_g1_ParamLimits

0x5fef,	// (0x0002ba24) popup_note2_image_window_g1

0x5ffb,	// (0x0002ba30) popup_note2_image_window_g2_ParamLimits

0x5ffb,	// (0x0002ba30) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x000356b0) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x000356b0) popup_note2_image_window_g

0x600d,	// (0x0002ba42) popup_note2_image_window_t1_ParamLimits

0x600d,	// (0x0002ba42) popup_note2_image_window_t1

0x6025,	// (0x0002ba5a) popup_note2_image_window_t2_ParamLimits

0x6025,	// (0x0002ba5a) popup_note2_image_window_t2

0x603d,	// (0x0002ba72) popup_note2_image_window_t3_ParamLimits

0x603d,	// (0x0002ba72) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x000356b5) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x000356b5) popup_note2_image_window_t

0x3220,	// (0x00028c55) popup_note2_wait_window_g1_ParamLimits

0x3220,	// (0x00028c55) popup_note2_wait_window_g1

0x6059,	// (0x0002ba8e) popup_note2_wait_window_g2_ParamLimits

0x6059,	// (0x0002ba8e) popup_note2_wait_window_g2

0x3238,	// (0x00028c6d) popup_note2_wait_window_g3_ParamLimits

0x3238,	// (0x00028c6d) popup_note2_wait_window_g3

0x0002,

0xfc87,	// (0x000356bc) popup_note2_wait_window_g_ParamLimits

0xfc87,	// (0x000356bc) popup_note2_wait_window_g

0x6065,	// (0x0002ba9a) popup_note2_wait_window_t1_ParamLimits

0x6065,	// (0x0002ba9a) popup_note2_wait_window_t1

0x6083,	// (0x0002bab8) popup_note2_wait_window_t2_ParamLimits

0x6083,	// (0x0002bab8) popup_note2_wait_window_t2

0x60a1,	// (0x0002bad6) popup_note2_wait_window_t3_ParamLimits

0x60a1,	// (0x0002bad6) popup_note2_wait_window_t3

0x60b3,	// (0x0002bae8) popup_note2_wait_window_t4_ParamLimits

0x60b3,	// (0x0002bae8) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x000356c3) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x000356c3) popup_note2_wait_window_t

0x60c5,	// (0x0002bafa) wait_bar2_pane_ParamLimits

0x60c5,	// (0x0002bafa) wait_bar2_pane

0x60dd,	// (0x0002bb12) popup_snote2_single_text_window_g1_ParamLimits

0x60dd,	// (0x0002bb12) popup_snote2_single_text_window_g1

0x6105,	// (0x0002bb3a) popup_snote2_single_text_window_t1_ParamLimits

0x6105,	// (0x0002bb3a) popup_snote2_single_text_window_t1

0x6151,	// (0x0002bb86) popup_snote2_single_text_window_t2_ParamLimits

0x6151,	// (0x0002bb86) popup_snote2_single_text_window_t2

0x619d,	// (0x0002bbd2) popup_snote2_single_text_window_t3_ParamLimits

0x619d,	// (0x0002bbd2) popup_snote2_single_text_window_t3

0x61de,	// (0x0002bc13) popup_snote2_single_text_window_t4_ParamLimits

0x61de,	// (0x0002bc13) popup_snote2_single_text_window_t4

0x6214,	// (0x0002bc49) popup_snote2_single_text_window_t5_ParamLimits

0x6214,	// (0x0002bc49) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x000356cc) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x000356cc) popup_snote2_single_text_window_t

0x623f,	// (0x0002bc74) popup_snote2_single_graphic_window_g1_ParamLimits

0x623f,	// (0x0002bc74) popup_snote2_single_graphic_window_g1

0x6267,	// (0x0002bc9c) popup_snote2_single_graphic_window_g2_ParamLimits

0x6267,	// (0x0002bc9c) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x000356d7) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x000356d7) popup_snote2_single_graphic_window_g

0x628f,	// (0x0002bcc4) popup_snote2_single_graphic_window_t1_ParamLimits

0x628f,	// (0x0002bcc4) popup_snote2_single_graphic_window_t1

0x62db,	// (0x0002bd10) popup_snote2_single_graphic_window_t2_ParamLimits

0x62db,	// (0x0002bd10) popup_snote2_single_graphic_window_t2

0x619d,	// (0x0002bbd2) popup_snote2_single_graphic_window_t3_ParamLimits

0x619d,	// (0x0002bbd2) popup_snote2_single_graphic_window_t3

0x61de,	// (0x0002bc13) popup_snote2_single_graphic_window_t4_ParamLimits

0x61de,	// (0x0002bc13) popup_snote2_single_graphic_window_t4

0x6214,	// (0x0002bc49) popup_snote2_single_graphic_window_t5_ParamLimits

0x6214,	// (0x0002bc49) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x000356dc) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x000356dc) popup_snote2_single_graphic_window_t

0x4cdb,	// (0x0002a710) clock_nsta_pane_cp2_t1

0x4cdb,	// (0x0002a710) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x000354fc) clock_nsta_pane_cp2_t

0xebd0,	// (0x00034605) form_field_data_wide_pane_g1_ParamLimits

0xd0e1,	// (0x00032b16) form_field_data_wide_pane_g2_ParamLimits

0xd0e1,	// (0x00032b16) form_field_data_wide_pane_g2

0xd0ed,	// (0x00032b22) form_field_data_wide_pane_g3_ParamLimits

0xd0ed,	// (0x00032b22) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x000350b6) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x000350b6) form_field_data_wide_pane_g

0xbe2e,	// (0x00031863) grid_touch_3_pane_ParamLimits

0xbe2e,	// (0x00031863) grid_touch_3_pane

0xc3cb,	// (0x00031e00) cell_touch_3_pane_ParamLimits

0xc3cb,	// (0x00031e00) cell_touch_3_pane

0x51eb,	// (0x0002ac20) cell_touch_3_pane_g1

0x51eb,	// (0x0002ac20) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00035581) cell_touch_3_pane_g

0xcca7,	// (0x000326dc) cont_query_data_pane

0xccaf,	// (0x000326e4) cont_query_data_pane_cp1

0x635a,	// (0x0002bd8f) button_value_adjust_pane_cp7

0x6362,	// (0x0002bd97) query_popup_pane_cp3

0xd615,	// (0x0003304a) bg_popup_sub_pane_cp22_ParamLimits

0x03e1,	// (0x00025e16) navi_navi_volume_pane_cp2

0x03fc,	// (0x00025e31) popup_side_volume_key_window_g2

0x040b,	// (0x00025e40) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0003514c) popup_side_volume_key_window_g

0x0428,	// (0x00025e5d) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00035153) popup_side_volume_key_window_t

0x06db,	// (0x00026110) popup_side_volume_key_window_ParamLimits

0x96f1,	// (0x0002f126) list_double_graphic_pane_g4_ParamLimits

0x96f1,	// (0x0002f126) list_double_graphic_pane_g4

0x9c5b,	// (0x0002f690) list_single_2heading_msg_pane_ParamLimits

0x9c5b,	// (0x0002f690) list_single_2heading_msg_pane

0x9ca7,	// (0x0002f6dc) list_single_2heading_msg_pane_g1_ParamLimits

0x9ca7,	// (0x0002f6dc) list_single_2heading_msg_pane_g1

0x9cb3,	// (0x0002f6e8) list_single_2heading_msg_pane_g2_ParamLimits

0x9cb3,	// (0x0002f6e8) list_single_2heading_msg_pane_g2

0x9cc6,	// (0x0002f6fb) list_single_2heading_msg_pane_g3_ParamLimits

0x9cc6,	// (0x0002f6fb) list_single_2heading_msg_pane_g3

0x9cd2,	// (0x0002f707) list_single_2heading_msg_pane_g4_ParamLimits

0x9cd2,	// (0x0002f707) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x000356e7) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x000356e7) list_single_2heading_msg_pane_g

0x9cea,	// (0x0002f71f) list_single_2heading_msg_pane_t1_ParamLimits

0x9cea,	// (0x0002f71f) list_single_2heading_msg_pane_t1

0x9d12,	// (0x0002f747) list_single_2heading_msg_pane_t2_ParamLimits

0x9d12,	// (0x0002f747) list_single_2heading_msg_pane_t2

0x9d7d,	// (0x0002f7b2) list_single_2heading_msg_pane_t3_ParamLimits

0x9d7d,	// (0x0002f7b2) list_single_2heading_msg_pane_t3

0xf482,	// (0x00034eb7) list_single_2heading_msg_pane_t4_ParamLimits

0xf482,	// (0x00034eb7) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x000356f0) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x000356f0) list_single_2heading_msg_pane_t

0xa0db,	// (0x0002fb10) title_pane_g4_ParamLimits

0xa0db,	// (0x0002fb10) title_pane_g4

0x007a,	// (0x00025aaf) title_pane_stacon_g3_ParamLimits

0x007a,	// (0x00025aaf) title_pane_stacon_g3

0x5e83,	// (0x0002b8b8) list_single_2graphic_im_pane_g4_ParamLimits

0x5e83,	// (0x0002b8b8) list_single_2graphic_im_pane_g4

0x3c82,	// (0x000296b7) popup_side_volume_key_window_cp

0x44cf,	// (0x00029f04) main_idle_act2_pane_t1

0x1a72,	// (0x000274a7) toolbar_button_pane_g10

0xa50f,	// (0x0002ff44) popup_toolbar_window_cp1

0x4ccc,	// (0x0002a701) clock_nsta_pane_cp_t1

0x4ccc,	// (0x0002a701) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x000354f7) clock_nsta_pane_cp_t

0x03e1,	// (0x00025e16) navi_navi_volume_pane_cp2_ParamLimits

0x03f0,	// (0x00025e25) popup_side_volume_key_window_g1_ParamLimits

0x03fc,	// (0x00025e31) popup_side_volume_key_window_g2_ParamLimits

0x040b,	// (0x00025e40) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0003514c) popup_side_volume_key_window_g_ParamLimits

0x1e97,	// (0x000278cc) fep_hwr_aid_pane

0xc01d,	// (0x00031a52) bg_fep_hwr_top_pane_g4_ParamLimits

0x524c,	// (0x0002ac81) fep_hwr_top_pane_g1_ParamLimits

0x525e,	// (0x0002ac93) fep_hwr_top_pane_g2_ParamLimits

0x1f52,	// (0x00027987) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0003554c) fep_hwr_top_pane_g_ParamLimits

0x1f67,	// (0x0002799c) fep_hwr_top_text_pane_ParamLimits

0x3a37,	// (0x0002946c) aid_touch_tab_arrow_arrow_2

0x3a40,	// (0x00029475) aid_touch_tab_arrow_left_2

0x1eab,	// (0x000278e0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1ee2,	// (0x00027917) fep_hwr_prediction_pane

0x53b4,	// (0x0002ade9) fep_vkb_prediction_pane

0xc196,	// (0x00031bcb) fep_vkb_side_pane_g3_ParamLimits

0xc196,	// (0x00031bcb) fep_vkb_side_pane_g3

0x5466,	// (0x0002ae9b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5934,	// (0x0002b369) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5941,	// (0x0002b376) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x000355f6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6389,	// (0x0002bdbe) fep_hwr_prediction_pane_g1

0x220d,	// (0x00027c42) fep_hwr_prediction_pane_g2

0x2215,	// (0x00027c4a) fep_hwr_prediction_pane_g3

0x221d,	// (0x00027c52) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x000356f9) fep_hwr_prediction_pane_g

0x6389,	// (0x0002bdbe) fep_vkb_prediction_pane_g1

0x6393,	// (0x0002bdc8) fep_vkb_prediction_pane_g2

0x639b,	// (0x0002bdd0) fep_vkb_prediction_pane_g3

0x63a3,	// (0x0002bdd8) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x00035702) fep_vkb_prediction_pane_g

0x5a59,	// (0x0002b48e) slider_set_pane_g3

0x5a6d,	// (0x0002b4a2) slider_set_pane_g4

0x5a85,	// (0x0002b4ba) slider_set_pane_g5

0x5a59,	// (0x0002b48e) slider_set_pane_g6

0x1d67,	// (0x0002779c) slider_set_pane_g7

0x4111,	// (0x00029b46) slider_form_pane_g3

0x411a,	// (0x00029b4f) slider_form_pane_g4

0x4122,	// (0x00029b57) slider_form_pane_g5

0x4111,	// (0x00029b46) slider_form_pane_g6

0xbc97,	// (0x000316cc) slider_form_pane_g7

0x4786,	// (0x0002a1bb) slider_set_pane_vc_g3

0x478f,	// (0x0002a1c4) slider_set_pane_vc_g4

0x4798,	// (0x0002a1cd) slider_set_pane_vc_g5

0x4786,	// (0x0002a1bb) slider_set_pane_vc_g6

0x47a1,	// (0x0002a1d6) slider_set_pane_vc_g7

0x4979,	// (0x0002a3ae) slider_form_pane_vc_g1

0x4982,	// (0x0002a3b7) slider_form_pane_vc_g2

0x498b,	// (0x0002a3c0) slider_form_pane_vc_g3

0x4979,	// (0x0002a3ae) slider_form_pane_vc_g4

0x4994,	// (0x0002a3c9) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x000354c9) slider_form_pane_vc_g

0x9e72,	// (0x0002f8a7) main_idle_act3_pane

0x63ab,	// (0x0002bde0) ai3_links_pane

0xc415,	// (0x00031e4a) popup_ai3_data_window_ParamLimits

0xc415,	// (0x00031e4a) popup_ai3_data_window

0x9e72,	// (0x0002f8a7) grid_ai3_links_pane

0xc433,	// (0x00031e68) cell_ai3_links_pane_ParamLimits

0xc433,	// (0x00031e68) cell_ai3_links_pane

0x63ec,	// (0x0002be21) bg_popup_sub_pane_cp11

0x63f9,	// (0x0002be2e) cell_ai3_links_pane_g1

0x9e72,	// (0x0002f8a7) bg_popup_sub_pane_cp12

0x641e,	// (0x0002be53) heading_ai3_data_pane

0x6426,	// (0x0002be5b) list_ai3_gene_pane

0x6432,	// (0x0002be67) popup_ai3_data_window_g1

0x643a,	// (0x0002be6f) heading_ai3_data_pane_g1

0x6442,	// (0x0002be77) heading_ai3_data_pane_t1

0x6450,	// (0x0002be85) list_double_ai3_gene_pane_ParamLimits

0x6450,	// (0x0002be85) list_double_ai3_gene_pane

0x645d,	// (0x0002be92) list_single_ai3_gene_pane_ParamLimits

0x645d,	// (0x0002be92) list_single_ai3_gene_pane

0x51b0,	// (0x0002abe5) list_highlight_pane_cp7_ParamLimits

0x51b0,	// (0x0002abe5) list_highlight_pane_cp7

0x646a,	// (0x0002be9f) list_single_a13_gene_pane_t1_ParamLimits

0x646a,	// (0x0002be9f) list_single_a13_gene_pane_t1

0x6481,	// (0x0002beb6) list_single_ai3_gene_pane_g1

0x648a,	// (0x0002bebf) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x0003570b) list_single_ai3_gene_pane_g

0x6492,	// (0x0002bec7) list_double_ai3_gene_pane_g1_ParamLimits

0x6492,	// (0x0002bec7) list_double_ai3_gene_pane_g1

0x649e,	// (0x0002bed3) list_double_ai3_gene_pane_t1_ParamLimits

0x649e,	// (0x0002bed3) list_double_ai3_gene_pane_t1

0x64ba,	// (0x0002beef) list_double_ai3_gene_pane_t2_ParamLimits

0x64ba,	// (0x0002beef) list_double_ai3_gene_pane_t2

0x64cf,	// (0x0002bf04) list_double_ai3_gene_pane_t3_ParamLimits

0x64cf,	// (0x0002bf04) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x00035710) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x00035710) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf478,	// (0x00034ead) aid_size_min_col_2

0xc3ff,	// (0x00031e34) aid_size_min_msg_ParamLimits

0xc3ff,	// (0x00031e34) aid_size_min_msg

0xc1aa,	// (0x00031bdf) fep_vkb_top_text_pane_g2_ParamLimits

0xc1aa,	// (0x00031bdf) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0003557c) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0003557c) fep_vkb_top_text_pane_g

0x9e72,	// (0x0002f8a7) main_hc_apps_shell_pane

0x64ec,	// (0x0002bf21) grid_hc_apps_pane_ParamLimits

0x64ec,	// (0x0002bf21) grid_hc_apps_pane

0x64fb,	// (0x0002bf30) list_hc_apps_pane

0x6503,	// (0x0002bf38) scroll_pane_cp37_ParamLimits

0x6503,	// (0x0002bf38) scroll_pane_cp37

0xc44d,	// (0x00031e82) cell_hc_apps_pane_ParamLimits

0xc44d,	// (0x00031e82) cell_hc_apps_pane

0xc517,	// (0x00031f4c) cell_hc_apps_pane_g1_ParamLimits

0xc517,	// (0x00031f4c) cell_hc_apps_pane_g1

0x65f8,	// (0x0002c02d) cell_hc_apps_pane_g2_ParamLimits

0x65f8,	// (0x0002c02d) cell_hc_apps_pane_g2

0x6614,	// (0x0002c049) cell_hc_apps_pane_g3_ParamLimits

0x6614,	// (0x0002c049) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x00035717) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x00035717) cell_hc_apps_pane_g

0xc544,	// (0x00031f79) cell_hc_apps_pane_t1_ParamLimits

0xc544,	// (0x00031f79) cell_hc_apps_pane_t1

0xcbf1,	// (0x00032626) grid_highlight_pane_cp10_ParamLimits

0xcbf1,	// (0x00032626) grid_highlight_pane_cp10

0xc584,	// (0x00031fb9) list_single_hc_apps_pane_ParamLimits

0xc584,	// (0x00031fb9) list_single_hc_apps_pane

0xc5be,	// (0x00031ff3) list_single_hc_apps_pane_g1

0x9deb,	// (0x0002f820) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x0003571e) list_single_hc_apps_pane_g

0x9e04,	// (0x0002f839) list_single_hc_apps_pane_g2_copy1

0x9e20,	// (0x0002f855) list_single_hc_apps_pane_t1

0xa1ed,	// (0x0002fc22) bg_set_opt_pane_cp_ParamLimits

0xf4cb,	// (0x00034f00) setting_slider_pane_t1_ParamLimits

0xf4e4,	// (0x00034f19) setting_slider_pane_t2_ParamLimits

0xf4fe,	// (0x00034f33) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00034f99) setting_slider_pane_t_ParamLimits

0xf516,	// (0x00034f4b) slider_set_pane_ParamLimits

0x0d1e,	// (0x00026753) control_pane_g5_ParamLimits

0x0d1e,	// (0x00026753) control_pane_g5

0x3f3e,	// (0x00029973) slider_set_pane_g1_ParamLimits

0x1d5b,	// (0x00027790) slider_set_pane_g2_ParamLimits

0x5a59,	// (0x0002b48e) slider_set_pane_g3_ParamLimits

0x5a6d,	// (0x0002b4a2) slider_set_pane_g4_ParamLimits

0x5a85,	// (0x0002b4ba) slider_set_pane_g5_ParamLimits

0x5a59,	// (0x0002b48e) slider_set_pane_g6_ParamLimits

0x1d67,	// (0x0002779c) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0003539a) slider_set_pane_g_ParamLimits

0x07c0,	// (0x000261f5) navi_icon_text_pane_ParamLimits

0xb222,	// (0x00030c57) aid_fill_nsta_2_ParamLimits

0xb25b,	// (0x00030c90) aid_touch_tab_arrow_left_ParamLimits

0xb271,	// (0x00030ca6) aid_touch_tab_arrow_right_ParamLimits

0xb30c,	// (0x00030d41) clock_nsta_pane_ParamLimits

0xb9d4,	// (0x00031409) navi_icon_pane_g1_ParamLimits

0xb9e0,	// (0x00031415) navi_text_pane_t1_ParamLimits

0xbf08,	// (0x0003193d) navi_icon_text_pane_g1_ParamLimits

0xbf14,	// (0x00031949) navi_icon_text_pane_t1_ParamLimits

0xc5be,	// (0x00031ff3) list_single_hc_apps_pane_g1_ParamLimits

0x9deb,	// (0x0002f820) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x0003571e) list_single_hc_apps_pane_g_ParamLimits

0x9e04,	// (0x0002f839) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9e20,	// (0x0002f855) list_single_hc_apps_pane_t1_ParamLimits

0x9fca,	// (0x0002f9ff) popup_toolbar2_fixed_window_ParamLimits

0x9fca,	// (0x0002f9ff) popup_toolbar2_fixed_window

0xb187,	// (0x00030bbc) popup_toolbar2_float_window

0x9e72,	// (0x0002f8a7) bg_popup_sub_pane_cp27

0x66ce,	// (0x0002c103) grid_toolbar2_float_pane

0x9e72,	// (0x0002f8a7) bg_popup_sub_pane_cp26

0x66ce,	// (0x0002c103) grid_toolbar2_fixed_pane

0xc5d7,	// (0x0003200c) cell_toolbar2_fixed_pane_ParamLimits

0xc5d7,	// (0x0003200c) cell_toolbar2_fixed_pane

0xc5f4,	// (0x00032029) cell_toolbar2_fixed_pane_g1

0x66ef,	// (0x0002c124) toolbar2_fixed_button_pane

0x1a2a,	// (0x0002745f) toolbar2_fixed_button_pane_g1

0x1a32,	// (0x00027467) toolbar2_fixed_button_pane_g2

0x1a3a,	// (0x0002746f) toolbar2_fixed_button_pane_g3

0x1a42,	// (0x00027477) toolbar2_fixed_button_pane_g4

0x1a4a,	// (0x0002747f) toolbar2_fixed_button_pane_g5

0x1a52,	// (0x00027487) toolbar2_fixed_button_pane_g6

0x1a5a,	// (0x0002748f) toolbar2_fixed_button_pane_g7

0x1a62,	// (0x00027497) toolbar2_fixed_button_pane_g8

0x1a6a,	// (0x0002749f) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0003529c) toolbar2_fixed_button_pane_g

0x66f7,	// (0x0002c12c) cell_toolbar2_float_pane_ParamLimits

0x66f7,	// (0x0002c12c) cell_toolbar2_float_pane

0x6708,	// (0x0002c13d) cell_toolbar2_float_pane_g1

0x66ef,	// (0x0002c124) toolbar2_fixed_button_pane_cp

0xc092,	// (0x00031ac7) fep_vkb_accented_list_pane_ParamLimits

0xc092,	// (0x00031ac7) fep_vkb_accented_list_pane

0x20c9,	// (0x00027afe) bg_popup_fep_shadow_pane_g9

0x0944,	// (0x00026379) bg_popup_fep_shadow_pane_cp3

0xd1e6,	// (0x00032c1b) list_accented_list_pane

0x6711,	// (0x0002c146) list_single_accented_list_pane_ParamLimits

0x6711,	// (0x0002c146) list_single_accented_list_pane

0x0944,	// (0x00026379) list_highlight_pane_cp10

0x6722,	// (0x0002c157) list_single_accented_list_pane_t1

0xb0a3,	// (0x00030ad8) popup_slider_window_ParamLimits

0xb0a3,	// (0x00030ad8) popup_slider_window

0x636a,	// (0x0002bd9f) aid_indentation_list_msg

0xd8a1,	// (0x000332d6) bg_popup_window_pane_cp19

0x685c,	// (0x0002c291) popup_slider_window_g1

0x6878,	// (0x0002c2ad) popup_slider_window_g2

0x6894,	// (0x0002c2c9) popup_slider_window_g3

0x0005,

0xfcee,	// (0x00035723) popup_slider_window_g

0x68f0,	// (0x0002c325) popup_slider_window_t1

0x6964,	// (0x0002c399) small_volume_slider_vertical_pane

0x51eb,	// (0x0002ac20) small_volume_slider_vertical_pane_g1

0x51eb,	// (0x0002ac20) small_volume_slider_vertical_pane_g2

0x6980,	// (0x0002c3b5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x00035735) small_volume_slider_vertical_pane_g

0x9f2a,	// (0x0002f95f) area_side_right_pane_ParamLimits

0x9f2a,	// (0x0002f95f) area_side_right_pane

0xc5fd,	// (0x00032032) aid_size_side_button_ParamLimits

0xc5fd,	// (0x00032032) aid_size_side_button

0xc616,	// (0x0003204b) grid_sctrl_middle_pane_ParamLimits

0xc616,	// (0x0003204b) grid_sctrl_middle_pane

0x2259,	// (0x00027c8e) sctrl_sk_bottom_pane

0x226a,	// (0x00027c9f) sctrl_sk_top_pane

0x227c,	// (0x00027cb1) aid_touch_sctrl_top

0xcbf1,	// (0x00032626) bg_sctrl_sk_pane_ParamLimits

0xcbf1,	// (0x00032626) bg_sctrl_sk_pane

0x2289,	// (0x00027cbe) sctrl_sk_top_pane_g1

0x2296,	// (0x00027ccb) sctrl_sk_top_pane_t1

0x227c,	// (0x00027cb1) aid_touch_sctrl_bottom

0xcbf1,	// (0x00032626) bg_sctrl_sk_pane_cp_ParamLimits

0xcbf1,	// (0x00032626) bg_sctrl_sk_pane_cp

0x22b1,	// (0x00027ce6) sctrl_sk_bottom_pane_g1

0x2296,	// (0x00027ccb) sctrl_sk_bottom_pane_t1

0xc630,	// (0x00032065) cell_sctrl_middle_pane_ParamLimits

0xc630,	// (0x00032065) cell_sctrl_middle_pane

0xc643,	// (0x00032078) aid_touch_sctrl_middle_ParamLimits

0xc643,	// (0x00032078) aid_touch_sctrl_middle

0xc650,	// (0x00032085) bg_sctrl_middle_pane_ParamLimits

0xc650,	// (0x00032085) bg_sctrl_middle_pane

0x6a0b,	// (0x0002c440) cell_sctrl_middle_pane_g1_ParamLimits

0x6a0b,	// (0x0002c440) cell_sctrl_middle_pane_g1

0xc65e,	// (0x00032093) cell_sctrl_middle_pane_g2_ParamLimits

0xc65e,	// (0x00032093) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x00035741) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x00035741) cell_sctrl_middle_pane_g

0x1a2a,	// (0x0002745f) bg_sctrl_middle_pane_g1

0x1a32,	// (0x00027467) bg_sctrl_middle_pane_g2

0x1a3a,	// (0x0002746f) bg_sctrl_middle_pane_g3

0x1a42,	// (0x00027477) bg_sctrl_middle_pane_g4

0x1a4a,	// (0x0002747f) bg_sctrl_middle_pane_g5

0x1a52,	// (0x00027487) bg_sctrl_middle_pane_g6

0x1a5a,	// (0x0002748f) bg_sctrl_middle_pane_g7

0x1a62,	// (0x00027497) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x00035746) bg_sctrl_middle_pane_g

0x1a6a,	// (0x0002749f) bg_sctrl_middle_pane_g8_copy1

0x1a2a,	// (0x0002745f) bg_sctrl_sk_pane_g1

0x1a32,	// (0x00027467) bg_sctrl_sk_pane_g2

0x1a3a,	// (0x0002746f) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0003529c) bg_sctrl_sk_pane_g

0xd00c,	// (0x00032a41) aid_size_touch_scroll_bar

0x1a42,	// (0x00027477) bg_sctrl_sk_pane_g4

0x1a4a,	// (0x0002747f) bg_sctrl_sk_pane_g5

0x1a52,	// (0x00027487) bg_sctrl_sk_pane_g6

0x1a5a,	// (0x0002748f) bg_sctrl_sk_pane_g7

0x1a62,	// (0x00027497) bg_sctrl_sk_pane_g8

0x1a6a,	// (0x0002749f) bg_sctrl_sk_pane_g9

0x0f67,	// (0x0002699c) popup_fep_china_hwr2_fs_candidate_window

0xab5b,	// (0x00030590) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xab5b,	// (0x00030590) popup_fep_china_hwr2_fs_control_window

0x5466,	// (0x0002ae9b) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x0003573c) sctrl_sk_top_pane_g

0xd959,	// (0x0003338e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd959,	// (0x0003338e) aid_fep_china_hwr2_fs_cell

0xd96f,	// (0x000333a4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd96f,	// (0x000333a4) bg_popup_fep_shadow_pane_cp4

0xd986,	// (0x000333bb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd986,	// (0x000333bb) bg_popup_fep_shadow_pane_cp5

0xd998,	// (0x000333cd) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd998,	// (0x000333cd) popup_fep_china_hwr2_fs_control_bar_grid

0xd9ac,	// (0x000333e1) popup_fep_china_hwr2_fs_control_funtion_grid

0x69df,	// (0x0002c414) aid_fep_china_hwr2_fs_candi_cell

0x9e72,	// (0x0002f8a7) bg_popup_fep_shadow_pane_cp6

0x69e9,	// (0x0002c41e) popup_fep_china_hwr2_fs_candidate_grid

0xd9b4,	// (0x000333e9) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9b4,	// (0x000333e9) cell_fep_china_hwr2_fs_funtion_grid

0x51eb,	// (0x0002ac20) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6a0b,	// (0x0002c440) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6a0b,	// (0x0002c440) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6a19,	// (0x0002c44e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6a19,	// (0x0002c44e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x00035757) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x00035757) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9cc,	// (0x00033401) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9cc,	// (0x00033401) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9e1,	// (0x00033416) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9e1,	// (0x00033416) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x0003575c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x0003575c) cell_fep_china_hwr2_fs_funtion_grid_t

0x6a60,	// (0x0002c495) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6a68,	// (0x0002c49d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6a70,	// (0x0002c4a5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x00035761) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6a78,	// (0x0002c4ad) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6a78,	// (0x0002c4ad) cell_fep_china_hwr2_fs_candidate_grid

0x6a97,	// (0x0002c4cc) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6a9f,	// (0x0002c4d4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x51eb,	// (0x0002ac20) cell_fep_china_hwr2_fs_candidate_grid_g1

0x51eb,	// (0x0002ac20) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00035581) cell_fep_china_hwr2_fs_candidate_grid_g

0x6aa7,	// (0x0002c4dc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x15d6,	// (0x0002700b) clock_nsta_pane_cp_24_ParamLimits

0x15d6,	// (0x0002700b) clock_nsta_pane_cp_24

0x1656,	// (0x0002708b) indicator_nsta_pane_cp_24_ParamLimits

0x1656,	// (0x0002708b) indicator_nsta_pane_cp_24

0x3895,	// (0x000292ca) heading_pane_g1

0x0001,

0xf8cc,	// (0x00035301) heading_pane_g

0x4316,	// (0x00029d4b) grid_sct_catagory_button_pane

0x4348,	// (0x00029d7d) scroll_pane_cp5_ParamLimits

0x4e37,	// (0x0002a86c) button_value_adjust_pane_cp5_ParamLimits

0x4e37,	// (0x0002a86c) button_value_adjust_pane_cp5

0x4f1c,	// (0x0002a951) form2_midp_time_pane_ParamLimits

0x6ab5,	// (0x0002c4ea) cell_sct_catagory_button_pane_ParamLimits

0x6ab5,	// (0x0002c4ea) cell_sct_catagory_button_pane

0x51b0,	// (0x0002abe5) bg_button_pane_cp01_ParamLimits

0x51b0,	// (0x0002abe5) bg_button_pane_cp01

0x51eb,	// (0x0002ac20) cell_sct_catagory_button_pane_g1

0xb124,	// (0x00030b59) popup_tb_extension_window

0xd9fd,	// (0x00033432) aid_size_cell_ext_ParamLimits

0xd9fd,	// (0x00033432) aid_size_cell_ext

0xce4e,	// (0x00032883) bg_tb_trans_pane_cp1_ParamLimits

0xce4e,	// (0x00032883) bg_tb_trans_pane_cp1

0xda23,	// (0x00033458) grid_tb_ext_pane_ParamLimits

0xda23,	// (0x00033458) grid_tb_ext_pane

0xda63,	// (0x00033498) cell_tb_ext_pane_ParamLimits

0xda63,	// (0x00033498) cell_tb_ext_pane

0xda8b,	// (0x000334c0) cell_tb_ext_pane_g1_ParamLimits

0xda8b,	// (0x000334c0) cell_tb_ext_pane_g1

0x6b4b,	// (0x0002c580) cell_tb_ext_pane_t1

0xcbf1,	// (0x00032626) list_highlight_pane_cp11_ParamLimits

0xcbf1,	// (0x00032626) list_highlight_pane_cp11

0x9fdf,	// (0x0002fa14) popup_uni_indicator_window_ParamLimits

0x9fdf,	// (0x0002fa14) popup_uni_indicator_window

0xd0d3,	// (0x00032b08) bg_popup_sub_pane_cp14

0x6b66,	// (0x0002c59b) list_uniindi_pane

0x6b72,	// (0x0002c5a7) uniindi_top_pane

0xcbf1,	// (0x00032626) bg_uniindi_top_pane

0x6b93,	// (0x0002c5c8) uniindi_top_pane_g1

0x6ba9,	// (0x0002c5de) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x00035768) uniindi_top_pane_g

0x6bd3,	// (0x0002c608) uniindi_top_pane_t1

0x6bff,	// (0x0002c634) list_single_uniindi_pane_ParamLimits

0x6bff,	// (0x0002c634) list_single_uniindi_pane

0x51eb,	// (0x0002ac20) bg_uniindi_top_pane_g1

0x6c11,	// (0x0002c646) list_single_uniindi_pane_g1

0x6c24,	// (0x0002c659) list_single_uniindi_pane_t1

0x9e72,	// (0x0002f8a7) control_bg_pane

0x6c49,	// (0x0002c67e) bg_sctrl_sk_pane_cp1

0x6c52,	// (0x0002c687) bg_sctrl_sk_pane_cp2

0x6c5b,	// (0x0002c690) control_bg_pane_g1

0x6c64,	// (0x0002c699) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x00035771) control_bg_pane_g

0x4c5e,	// (0x0002a693) cell_indicator_nsta_pane_g1_ParamLimits

0xbe61,	// (0x00031896) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x000354e5) cell_indicator_nsta_pane_g_ParamLimits

0xf09c,	// (0x00034ad1) form2_midp_time_pane_t1_ParamLimits

0x8722,	// (0x0002e157) main_idle_act4_pane_ParamLimits

0x8722,	// (0x0002e157) main_idle_act4_pane

0xb124,	// (0x00030b59) popup_tb_extension_window_ParamLimits

0xda4b,	// (0x00033480) tb_ext_find_pane_ParamLimits

0xda4b,	// (0x00033480) tb_ext_find_pane

0x6c6d,	// (0x0002c6a2) ai_gene_pane_1_cp1

0x0a81,	// (0x000264b6) ai_gene_pane_2_cp1

0x6c75,	// (0x0002c6aa) list_single_idle_plugin_calendar_pane

0x6c7e,	// (0x0002c6b3) list_single_idle_plugin_notification_pane

0x6c87,	// (0x0002c6bc) list_single_idle_plugin_player_pane

0xdaa8,	// (0x000334dd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaa8,	// (0x000334dd) list_single_idle_plugin_shortcut_pane

0xdad0,	// (0x00033505) main_idle_act4_pane_t1

0xdae8,	// (0x0003351d) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x00035776) main_idle_act4_pane_t

0xdb00,	// (0x00033535) middle_sk_idle_act4_pane_ParamLimits

0xdb00,	// (0x00033535) middle_sk_idle_act4_pane

0xdb1c,	// (0x00033551) popup_clock_digital_analogue_window_cp2

0xdb43,	// (0x00033578) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb43,	// (0x00033578) shortcut_wheel_idle_act4_pane

0x51eb,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g1

0x51eb,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g2

0x51eb,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g3

0x51eb,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g4

0x51eb,	// (0x0002ac20) shortcut_wheel_idle_act4_pane_g5

0x6d1a,	// (0x0002c74f) shortcut_wheel_idle_act4_pane_g6

0x6d22,	// (0x0002c757) shortcut_wheel_idle_act4_pane_g7

0x6d2a,	// (0x0002c75f) shortcut_wheel_idle_act4_pane_g8

0x6d32,	// (0x0002c767) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x0003577b) shortcut_wheel_idle_act4_pane_g

0xc01d,	// (0x00031a52) middle_sk_idle_act4_pane_g1_ParamLimits

0xc01d,	// (0x00031a52) middle_sk_idle_act4_pane_g1

0xdbc0,	// (0x000335f5) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbc0,	// (0x000335f5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x0003579e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x0003579e) middle_sk_idle_act4_pane_g

0xdbd8,	// (0x0003360d) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbd8,	// (0x0003360d) middle_sk_idle_act4_pane_t1

0xdc07,	// (0x0003363c) grid_ai_shortcut_pane_ParamLimits

0xdc07,	// (0x0003363c) grid_ai_shortcut_pane

0xdc24,	// (0x00033659) list_highlight_pane_cp16_ParamLimits

0xdc24,	// (0x00033659) list_highlight_pane_cp16

0xdc31,	// (0x00033666) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc31,	// (0x00033666) list_single_idle_plugin_shortcut_pane_g1

0xdc3d,	// (0x00033672) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc3d,	// (0x00033672) list_single_idle_plugin_shortcut_pane_g2

0xdc5b,	// (0x00033690) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc5b,	// (0x00033690) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x000357a3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x000357a3) list_single_idle_plugin_shortcut_pane_g

0xdc70,	// (0x000336a5) cell_ai_shortcut_pane_ParamLimits

0xdc70,	// (0x000336a5) cell_ai_shortcut_pane

0xdc86,	// (0x000336bb) cell_ai_shortcut_pane_g1_ParamLimits

0xdc86,	// (0x000336bb) cell_ai_shortcut_pane_g1

0x6c6d,	// (0x0002c6a2) ai_gene_pane_1_cp2

0x6e63,	// (0x0002c898) ai_gene_pane_2_cp2

0x6e6b,	// (0x0002c8a0) list_highlight_pane_cp15

0x6e74,	// (0x0002c8a9) list_single_idle_plugin_calendar_pane_g1

0x6e6b,	// (0x0002c8a0) list_highlight_pane_cp17

0x6e7c,	// (0x0002c8b1) list_single_idle_plugin_calendar_pane_g1_copy1

0x6e84,	// (0x0002c8b9) list_single_idle_plugin_player_pane_g1

0x457d,	// (0x00029fb2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x000357aa) list_single_idle_plugin_player_pane_g

0x6e8c,	// (0x0002c8c1) list_single_idle_plugin_player_pane_t1

0x6e9a,	// (0x0002c8cf) list_single_idle_plugin_player_pane_t2

0x6ea8,	// (0x0002c8dd) list_single_idle_plugin_player_pane_t3

0x6eb6,	// (0x0002c8eb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x000357af) list_single_idle_plugin_player_pane_t

0x6ec4,	// (0x0002c8f9) wait_bar_pane_cp15

0x6ecc,	// (0x0002c901) grid_ai_notification_pane

0x457d,	// (0x00029fb2) list_single_idle_plugin_notification_pane_g1

0xdca8,	// (0x000336dd) cell_ai_notification_pane_ParamLimits

0xdca8,	// (0x000336dd) cell_ai_notification_pane

0x6ee2,	// (0x0002c917) cell_ai_notification_pane_g1

0x6eea,	// (0x0002c91f) cell_ai_notification_pane_t1

0xdcb5,	// (0x000336ea) tb_ext_find_button_pane

0xdcbd,	// (0x000336f2) tb_ext_find_pane_g1

0xdcc5,	// (0x000336fa) tb_ext_find_pane_t1

0xd5b5,	// (0x00032fea) tb_ext_find_button_pane_g1

0x6f16,	// (0x0002c94b) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x000357b8) tb_ext_find_button_pane_g

0xdad0,	// (0x00033505) main_idle_act4_pane_t1_ParamLimits

0xdae8,	// (0x0003351d) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x00035776) main_idle_act4_pane_t_ParamLimits

0xdb1c,	// (0x00033551) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb33,	// (0x00033568) sat_plugin_idle_act4_pane_ParamLimits

0xdb33,	// (0x00033568) sat_plugin_idle_act4_pane

0xdcd3,	// (0x00033708) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcd3,	// (0x00033708) sat_plugin_idle_act4_pane_t1

0xdceb,	// (0x00033720) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdceb,	// (0x00033720) sat_plugin_idle_act4_pane_t2

0xdd03,	// (0x00033738) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd03,	// (0x00033738) sat_plugin_idle_act4_pane_t3

0xdd1b,	// (0x00033750) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd1b,	// (0x00033750) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x000357bd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x000357bd) sat_plugin_idle_act4_pane_t

0xf353,	// (0x00034d88) popup_battery_window_ParamLimits

0xf353,	// (0x00034d88) popup_battery_window

0xcbf1,	// (0x00032626) bg_popup_sub_pane_cp25_ParamLimits

0xcbf1,	// (0x00032626) bg_popup_sub_pane_cp25

0x6f6b,	// (0x0002c9a0) popup_battery_window_g1_ParamLimits

0x6f6b,	// (0x0002c9a0) popup_battery_window_g1

0x6f77,	// (0x0002c9ac) popup_battery_window_t1_ParamLimits

0x6f77,	// (0x0002c9ac) popup_battery_window_t1

0x6f89,	// (0x0002c9be) popup_battery_window_t2_ParamLimits

0x6f89,	// (0x0002c9be) popup_battery_window_t2

0x0001,

0xfd91,	// (0x000357c6) popup_battery_window_t_ParamLimits

0xfd91,	// (0x000357c6) popup_battery_window_t

0xa88a,	// (0x000302bf) midp_canvas_pane_ParamLimits

0xa8e5,	// (0x0003031a) midp_keypad_pane_ParamLimits

0xa8e5,	// (0x0003031a) midp_keypad_pane

0x0eb9,	// (0x000268ee) main_midp_pane_ParamLimits

0x4cea,	// (0x0002a71f) signal_pane_g2_cp_ParamLimits

0xdd33,	// (0x00033768) aid_size_cell_midp_keypad_ParamLimits

0xdd33,	// (0x00033768) aid_size_cell_midp_keypad

0xdd51,	// (0x00033786) midp_keyp_game_grid_pane_ParamLimits

0xdd51,	// (0x00033786) midp_keyp_game_grid_pane

0xdd78,	// (0x000337ad) midp_keyp_rocker_pane_ParamLimits

0xdd78,	// (0x000337ad) midp_keyp_rocker_pane

0xddb7,	// (0x000337ec) midp_keyp_sk_left_pane_ParamLimits

0xddb7,	// (0x000337ec) midp_keyp_sk_left_pane

0xde0b,	// (0x00033840) midp_keyp_sk_right_pane_ParamLimits

0xde0b,	// (0x00033840) midp_keyp_sk_right_pane

0x9e72,	// (0x0002f8a7) bg_button_pane_cp03

0xde5f,	// (0x00033894) midp_keyp_sk_left_pane_g1

0x9e72,	// (0x0002f8a7) bg_button_pane_cp04

0xde5f,	// (0x00033894) midp_keyp_sk_right_pane_g1

0x51eb,	// (0x0002ac20) midp_keyp_rocker_pane_g1

0xde68,	// (0x0003389d) keyp_game_cell_pane_ParamLimits

0xde68,	// (0x0003389d) keyp_game_cell_pane

0x9e72,	// (0x0002f8a7) bg_button_pane_cp02

0xde8e,	// (0x000338c3) keyp_game_cell_pane_g1

0x9f76,	// (0x0002f9ab) popup_fep_vkb2_window_ParamLimits

0x9f76,	// (0x0002f9ab) popup_fep_vkb2_window

0xc66a,	// (0x0003209f) aid_size_cell_vkb2_ParamLimits

0xc66a,	// (0x0003209f) aid_size_cell_vkb2

0xc6a0,	// (0x000320d5) popup_fep_vkb2_window_g1_ParamLimits

0xc6a0,	// (0x000320d5) popup_fep_vkb2_window_g1

0xc6f0,	// (0x00032125) vkb2_area_bottom_pane_ParamLimits

0xc6f0,	// (0x00032125) vkb2_area_bottom_pane

0xc74c,	// (0x00032181) vkb2_area_keypad_pane_ParamLimits

0xc74c,	// (0x00032181) vkb2_area_keypad_pane

0xc79a,	// (0x000321cf) vkb2_area_top_pane_ParamLimits

0xc79a,	// (0x000321cf) vkb2_area_top_pane

0xc820,	// (0x00032255) vkb2_top_entry_pane_ParamLimits

0xc820,	// (0x00032255) vkb2_top_entry_pane

0xc84d,	// (0x00032282) vkb2_top_grid_left_pane_ParamLimits

0xc84d,	// (0x00032282) vkb2_top_grid_left_pane

0xc86d,	// (0x000322a2) vkb2_top_grid_right_pane_ParamLimits

0xc86d,	// (0x000322a2) vkb2_top_grid_right_pane

0x251d,	// (0x00027f52) vkb2_cell_keypad_pane_ParamLimits

0x251d,	// (0x00027f52) vkb2_cell_keypad_pane

0xc8b3,	// (0x000322e8) vkb2_area_bottom_grid_pane_ParamLimits

0xc8b3,	// (0x000322e8) vkb2_area_bottom_grid_pane

0xc8dd,	// (0x00032312) vkb2_area_bottom_pane_g1_ParamLimits

0xc8dd,	// (0x00032312) vkb2_area_bottom_pane_g1

0xc903,	// (0x00032338) vkb2_area_bottom_pane_g2_ParamLimits

0xc903,	// (0x00032338) vkb2_area_bottom_pane_g2

0xc934,	// (0x00032369) vkb2_area_bottom_pane_g3_ParamLimits

0xc934,	// (0x00032369) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x000357cb) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x000357cb) vkb2_area_bottom_pane_g

0x26c7,	// (0x000280fc) vkb2_top_cell_left_pane_ParamLimits

0x26c7,	// (0x000280fc) vkb2_top_cell_left_pane

0xde97,	// (0x000338cc) vkb2_top_entry_pane_g1_ParamLimits

0xde97,	// (0x000338cc) vkb2_top_entry_pane_g1

0xdea5,	// (0x000338da) vkb2_top_entry_pane_t1_ParamLimits

0xdea5,	// (0x000338da) vkb2_top_entry_pane_t1

0x712c,	// (0x0002cb61) vkb2_top_entry_pane_t2_ParamLimits

0x712c,	// (0x0002cb61) vkb2_top_entry_pane_t2

0x715e,	// (0x0002cb93) vkb2_top_entry_pane_t3_ParamLimits

0x715e,	// (0x0002cb93) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x000357d2) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x000357d2) vkb2_top_entry_pane_t

0xc99e,	// (0x000323d3) vkb2_top_grid_right_pane_g1_ParamLimits

0xc99e,	// (0x000323d3) vkb2_top_grid_right_pane_g1

0x272a,	// (0x0002815f) vkb2_top_grid_right_pane_g2_ParamLimits

0x272a,	// (0x0002815f) vkb2_top_grid_right_pane_g2

0x2742,	// (0x00028177) vkb2_top_grid_right_pane_g3_ParamLimits

0x2742,	// (0x00028177) vkb2_top_grid_right_pane_g3

0xc9b4,	// (0x000323e9) vkb2_top_grid_right_pane_g4_ParamLimits

0xc9b4,	// (0x000323e9) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x000357d9) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x000357d9) vkb2_top_grid_right_pane_g

0x2770,	// (0x000281a5) vkb2_top_cell_left_pane_g1

0x2787,	// (0x000281bc) vkb2_cell_keypad_pane_g1_ParamLimits

0x2787,	// (0x000281bc) vkb2_cell_keypad_pane_g1

0x7182,	// (0x0002cbb7) vkb2_cell_keypad_pane_t1_ParamLimits

0x7182,	// (0x0002cbb7) vkb2_cell_keypad_pane_t1

0x2795,	// (0x000281ca) vkb2_cell_bottom_grid_pane_ParamLimits

0x2795,	// (0x000281ca) vkb2_cell_bottom_grid_pane

0x27ce,	// (0x00028203) vkb2_cell_bottom_grid_pane_g1

0xdb64,	// (0x00033599) aid_call2_pane_cp02

0xdb6c,	// (0x000335a1) aid_call_pane_cp02

0xdb74,	// (0x000335a9) clock_digital_number_pane_cp10

0xdb7c,	// (0x000335b1) clock_digital_number_pane_cp11

0xdb84,	// (0x000335b9) clock_digital_number_pane_cp12

0xdb8c,	// (0x000335c1) clock_digital_number_pane_cp13

0xdb94,	// (0x000335c9) clock_digital_separator_pane_cp10

0xd5b5,	// (0x00032fea) popup_clock_digital_analogue_window_cp2_g1

0xd5b5,	// (0x00032fea) popup_clock_digital_analogue_window_cp2_g2

0xdb9c,	// (0x000335d1) popup_clock_digital_analogue_window_cp2_g3

0xd5b5,	// (0x00032fea) popup_clock_digital_analogue_window_cp2_g4

0xdb9c,	// (0x000335d1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x0003578e) popup_clock_digital_analogue_window_cp2_g

0xdba4,	// (0x000335d9) popup_clock_digital_analogue_window_cp2_t1

0xdbb2,	// (0x000335e7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x00035799) popup_clock_digital_analogue_window_cp2_t

0x51eb,	// (0x0002ac20) clock_digital_number_pane_cp10_g1

0x51eb,	// (0x0002ac20) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00035581) clock_digital_number_pane_cp10_g

0x51eb,	// (0x0002ac20) clock_digital_separator_pane_cp10_g1

0x51eb,	// (0x0002ac20) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00035581) clock_digital_separator_pane_cp10_g

0x6bb5,	// (0x0002c5ea) uniindi_top_pane_g3

0x6bc6,	// (0x0002c5fb) uniindi_top_pane_g4

0x25a8,	// (0x00027fdd) vkb2_row_keypad_pane_ParamLimits

0x25a8,	// (0x00027fdd) vkb2_row_keypad_pane

0x27ea,	// (0x0002821f) vkb2_cell_t_keypad_pane_ParamLimits

0x27ea,	// (0x0002821f) vkb2_cell_t_keypad_pane

0x27fa,	// (0x0002822f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x27fa,	// (0x0002822f) vkb2_cell_t_keypad_pane_cp08

0x280f,	// (0x00028244) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x280f,	// (0x00028244) vkb2_cell_t_keypad_pane_cp09

0x2823,	// (0x00028258) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2823,	// (0x00028258) vkb2_cell_t_keypad_pane_cp01

0x2834,	// (0x00028269) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2834,	// (0x00028269) vkb2_cell_t_keypad_pane_cp02

0x2845,	// (0x0002827a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2845,	// (0x0002827a) vkb2_cell_t_keypad_pane_cp03

0x2856,	// (0x0002828b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2856,	// (0x0002828b) vkb2_cell_t_keypad_pane_cp04

0x2867,	// (0x0002829c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2867,	// (0x0002829c) vkb2_cell_t_keypad_pane_cp05

0x2878,	// (0x000282ad) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2878,	// (0x000282ad) vkb2_cell_t_keypad_pane_cp06

0x288b,	// (0x000282c0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x288b,	// (0x000282c0) vkb2_cell_t_keypad_pane_cp07

0x28a0,	// (0x000282d5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x28a0,	// (0x000282d5) vkb2_cell_t_keypad_pane_cp10

0x5466,	// (0x0002ae9b) vkb2_cell_t_keypad_pane_g1

0x7199,	// (0x0002cbce) vkb2_cell_t_keypad_pane_t1

0x9e72,	// (0x0002f8a7) popup_grid_graphic2_window

0xdede,	// (0x00033913) aid_size_cell_graphic2_ParamLimits

0xdede,	// (0x00033913) aid_size_cell_graphic2

0xdf1c,	// (0x00033951) bg_popup_window_pane_cp21_ParamLimits

0xdf1c,	// (0x00033951) bg_popup_window_pane_cp21

0xdf2a,	// (0x0003395f) graphic2_pages_pane_ParamLimits

0xdf2a,	// (0x0003395f) graphic2_pages_pane

0xdf82,	// (0x000339b7) grid_graphic2_control_pane_ParamLimits

0xdf82,	// (0x000339b7) grid_graphic2_control_pane

0xdfca,	// (0x000339ff) grid_graphic2_pane_ParamLimits

0xdfca,	// (0x000339ff) grid_graphic2_pane

0xe055,	// (0x00033a8a) cell_graphic2_pane

0x9e72,	// (0x0002f8a7) main_comp_mode_pane

0x6426,	// (0x0002be5b) list_ai3_gene_pane_ParamLimits

0xd8a1,	// (0x000332d6) bg_popup_window_pane_cp19_ParamLimits

0x67fa,	// (0x0002c22f) bg_touch_area_indi_pane_ParamLimits

0x67fa,	// (0x0002c22f) bg_touch_area_indi_pane

0x6810,	// (0x0002c245) bg_touch_area_indi_pane_cp01_ParamLimits

0x6810,	// (0x0002c245) bg_touch_area_indi_pane_cp01

0x6828,	// (0x0002c25d) bg_touch_area_indi_pane_cp02_ParamLimits

0x6828,	// (0x0002c25d) bg_touch_area_indi_pane_cp02

0x6842,	// (0x0002c277) bg_touch_area_indi_pane_cp03_ParamLimits

0x6842,	// (0x0002c277) bg_touch_area_indi_pane_cp03

0x685c,	// (0x0002c291) popup_slider_window_g1_ParamLimits

0x6878,	// (0x0002c2ad) popup_slider_window_g2_ParamLimits

0x6894,	// (0x0002c2c9) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x00035723) popup_slider_window_g_ParamLimits

0x68f0,	// (0x0002c325) popup_slider_window_t1_ParamLimits

0x6964,	// (0x0002c399) small_volume_slider_vertical_pane_ParamLimits

0xe055,	// (0x00033a8a) cell_graphic2_pane_ParamLimits

0xe0b8,	// (0x00033aed) bg_button_pane_cp10_ParamLimits

0xe0b8,	// (0x00033aed) bg_button_pane_cp10

0xe0cb,	// (0x00033b00) bg_button_pane_cp11_ParamLimits

0xe0cb,	// (0x00033b00) bg_button_pane_cp11

0xe0de,	// (0x00033b13) graphic2_pages_pane_g1_ParamLimits

0xe0de,	// (0x00033b13) graphic2_pages_pane_g1

0xe0f9,	// (0x00033b2e) graphic2_pages_pane_g2_ParamLimits

0xe0f9,	// (0x00033b2e) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x000357e7) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x000357e7) graphic2_pages_pane_g

0xe111,	// (0x00033b46) graphic2_pages_pane_t1_ParamLimits

0xe111,	// (0x00033b46) graphic2_pages_pane_t1

0xe129,	// (0x00033b5e) cell_graphic2_control_pane_ParamLimits

0xe129,	// (0x00033b5e) cell_graphic2_control_pane

0xe15d,	// (0x00033b92) cell_graphic2_pane_g1_ParamLimits

0xe15d,	// (0x00033b92) cell_graphic2_pane_g1

0xc078,	// (0x00031aad) cell_graphic2_pane_g2_ParamLimits

0xc078,	// (0x00031aad) cell_graphic2_pane_g2

0xc9ca,	// (0x000323ff) cell_graphic2_pane_g3_ParamLimits

0xc9ca,	// (0x000323ff) cell_graphic2_pane_g3

0xc085,	// (0x00031aba) cell_graphic2_pane_g4_ParamLimits

0xc085,	// (0x00031aba) cell_graphic2_pane_g4

0xe16a,	// (0x00033b9f) cell_graphic2_pane_g5_ParamLimits

0xe16a,	// (0x00033b9f) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x000357ec) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x000357ec) cell_graphic2_pane_g

0xe18a,	// (0x00033bbf) cell_graphic2_pane_t1_ParamLimits

0xe18a,	// (0x00033bbf) cell_graphic2_pane_t1

0x3889,	// (0x000292be) grid_highlight_pane_cp11_ParamLimits

0x3889,	// (0x000292be) grid_highlight_pane_cp11

0xcbf1,	// (0x00032626) bg_button_pane_cp05

0xe1bf,	// (0x00033bf4) cell_graphic2_control_pane_g1

0x51eb,	// (0x0002ac20) bg_touch_area_indi_pane_g1

0x7473,	// (0x0002cea8) aid_cmod_rocker_key_size

0x747d,	// (0x0002ceb2) aid_cmode_itu_key_size

0x7487,	// (0x0002cebc) main_cmode_video_pane

0x7491,	// (0x0002cec6) main_comp_mode_itu_pane

0x749d,	// (0x0002ced2) main_comp_mode_rocker_pane

0x74a9,	// (0x0002cede) cell_cmode_rocker_pane_ParamLimits

0x74a9,	// (0x0002cede) cell_cmode_rocker_pane

0x74bd,	// (0x0002cef2) cell_cmode_itu_pane_ParamLimits

0x74bd,	// (0x0002cef2) cell_cmode_itu_pane

0xd0d3,	// (0x00032b08) bg_button_pane_cp06_ParamLimits

0xd0d3,	// (0x00032b08) bg_button_pane_cp06

0x5466,	// (0x0002ae9b) cell_cmode_rocker_pane_g1_ParamLimits

0x5466,	// (0x0002ae9b) cell_cmode_rocker_pane_g1

0x6a0b,	// (0x0002c440) cell_cmode_rocker_pane_g2_ParamLimits

0x6a0b,	// (0x0002c440) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x000357fc) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x000357fc) cell_cmode_rocker_pane_g

0x9e72,	// (0x0002f8a7) bg_button_pane_cp07

0x74d4,	// (0x0002cf09) cell_cmode_itu_pane_g1

0x74dd,	// (0x0002cf12) cell_cmode_itu_pane_t1

0x74eb,	// (0x0002cf20) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x00035801) cell_cmode_itu_pane_t

0x6c39,	// (0x0002c66e) aid_touch_ctrl_left

0x6c41,	// (0x0002c676) aid_touch_ctrl_right

0x9e72,	// (0x0002f8a7) compa_mode_pane

0xe1e5,	// (0x00033c1a) aid_cmod_rocker_key_size_cp

0xe1ef,	// (0x00033c24) aid_cmode_itu_key_size_cp

0x750d,	// (0x0002cf42) compa_mode_pane_g1

0x7515,	// (0x0002cf4a) compa_mode_pane_g2

0x751d,	// (0x0002cf52) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x00035806) compa_mode_pane_g

0xe1f9,	// (0x00033c2e) main_comp_mode_itu_pane_cp

0xe201,	// (0x00033c36) main_comp_mode_rocker_pane_cp

0xe209,	// (0x00033c3e) cell_cmode_itu_pane_cp_ParamLimits

0xe209,	// (0x00033c3e) cell_cmode_itu_pane_cp

0xe21e,	// (0x00033c53) cell_cmode_rocker_pane_cp_ParamLimits

0xe21e,	// (0x00033c53) cell_cmode_rocker_pane_cp

0xd0d3,	// (0x00032b08) bg_button_pane_cp06_cp_ParamLimits

0xd0d3,	// (0x00032b08) bg_button_pane_cp06_cp

0x5466,	// (0x0002ae9b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5466,	// (0x0002ae9b) cell_cmode_rocker_pane_g1_cp

0x51eb,	// (0x0002ac20) cell_cmode_rocker_pane_g2_cp

0x9e72,	// (0x0002f8a7) bg_button_pane_cp07_cp

0xe230,	// (0x00033c65) cell_cmode_itu_pane_g1_cp

0xe239,	// (0x00033c6e) cell_cmode_itu_pane_t1_cp

0xe239,	// (0x00033c6e) cell_cmode_itu_pane_t2_cp

0xbc8f,	// (0x000316c4) settings_code_pane_cp2

0xa1ed,	// (0x0002fc22) bg_popup_window_pane_cp3_ParamLimits

0xcddf,	// (0x00032814) heading_pane_cp3_ParamLimits

0xcdeb,	// (0x00032820) listscroll_popup_graphic_pane_ParamLimits

0x1e97,	// (0x000278cc) fep_hwr_aid_pane_ParamLimits

0x227c,	// (0x00027cb1) aid_touch_sctrl_top_ParamLimits

0x2289,	// (0x00027cbe) sctrl_sk_top_pane_g1_ParamLimits

0x5466,	// (0x0002ae9b) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x0003573c) sctrl_sk_top_pane_g_ParamLimits

0x2296,	// (0x00027ccb) sctrl_sk_top_pane_t1_ParamLimits

0x227c,	// (0x00027cb1) aid_touch_sctrl_bottom_ParamLimits

0x2296,	// (0x00027ccb) sctrl_sk_bottom_pane_t1_ParamLimits

0x6b7f,	// (0x0002c5b4) aid_area_touch_clock

0xc7e2,	// (0x00032217) aid_vkb2_area_top_pane_cell_ParamLimits

0xc7e2,	// (0x00032217) aid_vkb2_area_top_pane_cell

0xc88d,	// (0x000322c2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc88d,	// (0x000322c2) aid_vkb2_area_bottom_pane_cell

0x70e4,	// (0x0002cb19) popup_char_count_window

0x7573,	// (0x0002cfa8) popup_char_count_window_g1

0x757c,	// (0x0002cfb1) popup_char_count_window_g2

0x7585,	// (0x0002cfba) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x0003580d) popup_char_count_window_g

0x758e,	// (0x0002cfc3) popup_char_count_window_t1

0x2339,	// (0x00027d6e) popup_fep_char_preview_window_ParamLimits

0x2339,	// (0x00027d6e) popup_fep_char_preview_window

0xc802,	// (0x00032237) vkb2_top_candi_pane_ParamLimits

0xc802,	// (0x00032237) vkb2_top_candi_pane

0xe247,	// (0x00033c7c) cell_vkb2_top_candi_pane_ParamLimits

0xe247,	// (0x00033c7c) cell_vkb2_top_candi_pane

0x3212,	// (0x00028c47) bg_popup_fep_char_preview_window_ParamLimits

0x3212,	// (0x00028c47) bg_popup_fep_char_preview_window

0x28b5,	// (0x000282ea) popup_fep_char_preview_window_t1_ParamLimits

0x28b5,	// (0x000282ea) popup_fep_char_preview_window_t1

0x75ed,	// (0x0002d022) bg_popup_fep_char_preview_window_g1

0x75f5,	// (0x0002d02a) bg_popup_fep_char_preview_window_g2

0x75fd,	// (0x0002d032) bg_popup_fep_char_preview_window_g3

0x7605,	// (0x0002d03a) bg_popup_fep_char_preview_window_g4

0x760d,	// (0x0002d042) bg_popup_fep_char_preview_window_g5

0x28ef,	// (0x00028324) bg_popup_fep_char_preview_window_g6

0x7615,	// (0x0002d04a) bg_popup_fep_char_preview_window_g7

0x761d,	// (0x0002d052) bg_popup_fep_char_preview_window_g8

0x7625,	// (0x0002d05a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x00035814) bg_popup_fep_char_preview_window_g

0x5466,	// (0x0002ae9b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5466,	// (0x0002ae9b) cell_vkb2_top_candi_pane_g1

0x57a7,	// (0x0002b1dc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x57a7,	// (0x0002b1dc) cell_vkb2_top_candi_pane_g2

0x57c8,	// (0x0002b1fd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x57c8,	// (0x0002b1fd) cell_vkb2_top_candi_pane_g3

0x28f7,	// (0x0002832c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x28f7,	// (0x0002832c) cell_vkb2_top_candi_pane_g4

0x762d,	// (0x0002d062) cell_vkb2_top_candi_pane_g5_ParamLimits

0x762d,	// (0x0002d062) cell_vkb2_top_candi_pane_g5

0x6a0b,	// (0x0002c440) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6a0b,	// (0x0002c440) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x00035827) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x00035827) cell_vkb2_top_candi_pane_g

0x2918,	// (0x0002834d) cell_vkb2_top_candi_pane_t1

0x1d47,	// (0x0002777c) aid_size_touch_slider_mark_ParamLimits

0x1d47,	// (0x0002777c) aid_size_touch_slider_mark

0xdf66,	// (0x0003399b) grid_graphic2_catg_pane_ParamLimits

0xdf66,	// (0x0003399b) grid_graphic2_catg_pane

0xe024,	// (0x00033a59) popup_grid_graphic2_window_t1_ParamLimits

0xe024,	// (0x00033a59) popup_grid_graphic2_window_t1

0xe03a,	// (0x00033a6f) popup_grid_graphic2_window_t2_ParamLimits

0xe03a,	// (0x00033a6f) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x000357e2) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x000357e2) popup_grid_graphic2_window_t

0xcbf1,	// (0x00032626) bg_button_pane_cp05_ParamLimits

0xe1bf,	// (0x00033bf4) cell_graphic2_control_pane_g1_ParamLimits

0xe2b1,	// (0x00033ce6) cell_graphic2_catg_pane_ParamLimits

0xe2b1,	// (0x00033ce6) cell_graphic2_catg_pane

0x9e72,	// (0x0002f8a7) bg_button_pane_cp12

0xe2c3,	// (0x00033cf8) cell_graphic2_catg_pane_g1

0x6b4b,	// (0x0002c580) cell_tb_ext_pane_t1_ParamLimits

0x26e7,	// (0x0002811c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x26e7,	// (0x0002811c) vkb2_top_cell_right_narrow_pane

0x26ff,	// (0x00028134) vkb2_top_cell_right_wide_pane_ParamLimits

0x26ff,	// (0x00028134) vkb2_top_cell_right_wide_pane

0x8722,	// (0x0002e157) bg_vkb2_func_pane_ParamLimits

0x8722,	// (0x0002e157) bg_vkb2_func_pane

0x2770,	// (0x000281a5) vkb2_top_cell_left_pane_g1_ParamLimits

0x8722,	// (0x0002e157) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8722,	// (0x0002e157) bg_vkb2_fuc_pane_cp03

0x27ce,	// (0x00028203) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1a32,	// (0x00027467) bg_vkb2_func_pane_g1

0x1a3a,	// (0x0002746f) bg_vkb2_func_pane_g2

0x1a4a,	// (0x0002747f) bg_vkb2_func_pane_g3

0x1a42,	// (0x00027477) bg_vkb2_func_pane_g4

0x1a52,	// (0x00027487) bg_vkb2_func_pane_g5

0x1a5a,	// (0x0002748f) bg_vkb2_func_pane_g6

0x1a62,	// (0x00027497) bg_vkb2_func_pane_g7

0x1a6a,	// (0x0002749f) bg_vkb2_func_pane_g8

0x1a2a,	// (0x0002745f) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x00035834) bg_vkb2_func_pane_g

0x8722,	// (0x0002e157) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8722,	// (0x0002e157) bg_vkb2_fuc_pane_cp01

0x2770,	// (0x000281a5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2770,	// (0x000281a5) vkb2_top_cell_right_wide_pane_g1

0x8722,	// (0x0002e157) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8722,	// (0x0002e157) bg_vkb2_fuc_pane_cp02

0x27ce,	// (0x00028203) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x27ce,	// (0x00028203) vkb2_top_cell_right_narrow_pane_g1

0xd7db,	// (0x00033210) aid_touch_area_decrease_ParamLimits

0xd7db,	// (0x00033210) aid_touch_area_decrease

0xd815,	// (0x0003324a) aid_touch_area_increase_ParamLimits

0xd815,	// (0x0003324a) aid_touch_area_increase

0xd83d,	// (0x00033272) aid_touch_area_mute_ParamLimits

0xd83d,	// (0x00033272) aid_touch_area_mute

0xd86d,	// (0x000332a2) aid_touch_area_slider_ParamLimits

0xd86d,	// (0x000332a2) aid_touch_area_slider

0xd8ad,	// (0x000332e2) popup_slider_window_g4_ParamLimits

0xd8ad,	// (0x000332e2) popup_slider_window_g4

0xd8d5,	// (0x0003330a) popup_slider_window_g5_ParamLimits

0xd8d5,	// (0x0003330a) popup_slider_window_g5

0xd909,	// (0x0003333e) popup_slider_window_g6_ParamLimits

0xd909,	// (0x0003333e) popup_slider_window_g6

0x691e,	// (0x0002c353) popup_slider_window_t2_ParamLimits

0x691e,	// (0x0002c353) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x00035730) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x00035730) popup_slider_window_t

0xd925,	// (0x0003335a) slider_pane_ParamLimits

0xd925,	// (0x0003335a) slider_pane

0x7669,	// (0x0002d09e) slider_pane_g1_ParamLimits

0x7669,	// (0x0002d09e) slider_pane_g1

0x767d,	// (0x0002d0b2) slider_pane_g2_ParamLimits

0x767d,	// (0x0002d0b2) slider_pane_g2

0x7693,	// (0x0002d0c8) slider_pane_g3_ParamLimits

0x7693,	// (0x0002d0c8) slider_pane_g3

0x0003,

0xfe12,	// (0x00035847) slider_pane_g_ParamLimits

0xfe12,	// (0x00035847) slider_pane_g

0xb170,	// (0x00030ba5) popup_tb_float_extension_window_ParamLimits

0xb170,	// (0x00030ba5) popup_tb_float_extension_window

0x76bf,	// (0x0002d0f4) aid_size_cell_tb_float_ext

0x9e72,	// (0x0002f8a7) bg_popup_sub_window_cp28

0x76cb,	// (0x0002d100) grid_tb_float_ext_pane

0x76d7,	// (0x0002d10c) cell_tb_float_ext_pane_ParamLimits

0x76d7,	// (0x0002d10c) cell_tb_float_ext_pane

0x76f3,	// (0x0002d128) cell_tb_float_ext_pane_g1

0x76fc,	// (0x0002d131) grid_highlight_pane_cp12

0xc056,	// (0x00031a8b) cell_last_hwr_side_pane_ParamLimits

0xc056,	// (0x00031a8b) cell_last_hwr_side_pane

0x51eb,	// (0x0002ac20) cell_last_hwr_side_pane_g1

0x7705,	// (0x0002d13a) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x00035850) cell_last_hwr_side_pane_g

0xc969,	// (0x0003239e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc969,	// (0x0003239e) vkb2_area_bottom_space_btn_pane

0x5466,	// (0x0002ae9b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7199,	// (0x0002cbce) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2918,	// (0x0002834d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2936,	// (0x0002836b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2936,	// (0x0002836b) vkb2_area_bottom_space_btn_pane_g1

0x2970,	// (0x000283a5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2970,	// (0x000283a5) vkb2_area_bottom_space_btn_pane_g2

0x29a6,	// (0x000283db) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x29a6,	// (0x000283db) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x00035855) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x00035855) vkb2_area_bottom_space_btn_pane_g

0x1f40,	// (0x00027975) cel_fep_hwr_func_pane_ParamLimits

0x1f40,	// (0x00027975) cel_fep_hwr_func_pane

0xc02b,	// (0x00031a60) cell_hwr_side_button_pane_ParamLimits

0xc02b,	// (0x00031a60) cell_hwr_side_button_pane

0x6b7f,	// (0x0002c5b4) aid_area_touch_clock_ParamLimits

0xcbf1,	// (0x00032626) bg_uniindi_top_pane_ParamLimits

0x6b93,	// (0x0002c5c8) uniindi_top_pane_g1_ParamLimits

0x6ba9,	// (0x0002c5de) uniindi_top_pane_g2_ParamLimits

0x6bb5,	// (0x0002c5ea) uniindi_top_pane_g3_ParamLimits

0x6bc6,	// (0x0002c5fb) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x00035768) uniindi_top_pane_g_ParamLimits

0x6bd3,	// (0x0002c608) uniindi_top_pane_t1_ParamLimits

0xcbf1,	// (0x00032626) bg_vkb2_func_pane_cp01_ParamLimits

0xcbf1,	// (0x00032626) bg_vkb2_func_pane_cp01

0x770e,	// (0x0002d143) cel_fep_hwr_func_pane_g1_ParamLimits

0x770e,	// (0x0002d143) cel_fep_hwr_func_pane_g1

0xcbf1,	// (0x00032626) bg_vkb2_func_pane_cp02_ParamLimits

0xcbf1,	// (0x00032626) bg_vkb2_func_pane_cp02

0x770e,	// (0x0002d143) cell_hwr_side_button_pane_g1_ParamLimits

0x770e,	// (0x0002d143) cell_hwr_side_button_pane_g1

0x187b,	// (0x000272b0) status_pane_g4_ParamLimits

0x187b,	// (0x000272b0) status_pane_g4

0x1895,	// (0x000272ca) status_pane_t1

0x4f8a,	// (0x0002a9bf) form2_midp_gauge_slider_cont_pane

0x4f92,	// (0x0002a9c7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbf63,	// (0x00031998) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf75,	// (0x000319aa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00035534) form2_midp_gauge_slider_pane_t_ParamLimits

0x4fc8,	// (0x0002a9fd) form2_midp_slider_pane_ParamLimits

0x22f9,	// (0x00027d2e) aid_size_cell_func_vkb2_ParamLimits

0x22f9,	// (0x00027d2e) aid_size_cell_func_vkb2

0x76ab,	// (0x0002d0e0) slider_pane_g4_ParamLimits

0x76ab,	// (0x0002d0e0) slider_pane_g4

0xc9d7,	// (0x0003240c) form2_midp_gauge_slider_pane_t2_cp01

0xc9e5,	// (0x0003241a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc9e5,	// (0x0003241a) form2_midp_gauge_slider_pane_t3_cp01

0x2a1b,	// (0x00028450) form2_midp_slider_pane_cp01

0x9e72,	// (0x0002f8a7) navi_smil_pane

0x7747,	// (0x0002d17c) navi_smil_pane_g1

0x774f,	// (0x0002d184) navi_smil_pane_t1

0x771c,	// (0x0002d151) form2_midp_slider_pane_g1

0x7725,	// (0x0002d15a) form2_midp_slider_pane_g2

0x772d,	// (0x0002d162) form2_midp_slider_pane_g3

0x771c,	// (0x0002d151) form2_midp_slider_pane_g4

0xe2cc,	// (0x00033d01) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0003585e) form2_midp_slider_pane_g

0x29e0,	// (0x00028415) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x29e0,	// (0x00028415) vkb2_area_bottom_space_btn_pane_g4

0xb357,	// (0x00030d8c) lc0_navi_pane_ParamLimits

0xb357,	// (0x00030d8c) lc0_navi_pane

0xb3c7,	// (0x00030dfc) lc0_stat_indi_pane_ParamLimits

0xb3c7,	// (0x00030dfc) lc0_stat_indi_pane

0xb3dc,	// (0x00030e11) ls0_title_pane_ParamLimits

0xb3dc,	// (0x00030e11) ls0_title_pane

0xd0d3,	// (0x00032b08) bg_popup_sub_pane_cp14_ParamLimits

0x6b66,	// (0x0002c59b) list_uniindi_pane_ParamLimits

0x6b72,	// (0x0002c5a7) uniindi_top_pane_ParamLimits

0x6c11,	// (0x0002c646) list_single_uniindi_pane_g1_ParamLimits

0x6c24,	// (0x0002c659) list_single_uniindi_pane_t1_ParamLimits

0xca02,	// (0x00032437) lc0_stat_clock_pane_ParamLimits

0xca02,	// (0x00032437) lc0_stat_clock_pane

0xe2d5,	// (0x00033d0a) lc0_stat_indi_pane_g1_ParamLimits

0xe2d5,	// (0x00033d0a) lc0_stat_indi_pane_g1

0xe2e2,	// (0x00033d17) lc0_stat_indi_pane_g2_ParamLimits

0xe2e2,	// (0x00033d17) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x00035869) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x00035869) lc0_stat_indi_pane_g

0xca0f,	// (0x00032444) lc0_uni_indicator_pane_ParamLimits

0xca0f,	// (0x00032444) lc0_uni_indicator_pane

0xe2ef,	// (0x00033d24) ls0_title_pane_g1_ParamLimits

0xe2ef,	// (0x00033d24) ls0_title_pane_g1

0xe303,	// (0x00033d38) ls0_title_pane_t1_ParamLimits

0xe303,	// (0x00033d38) ls0_title_pane_t1

0xca1c,	// (0x00032451) lc0_uni_indicator_pane_g1_ParamLimits

0xca1c,	// (0x00032451) lc0_uni_indicator_pane_g1

0x77c1,	// (0x0002d1f6) lc0_stat_clock_pane_t1

0x9e72,	// (0x0002f8a7) main_ai5_pane

0x77cf,	// (0x0002d204) ai5_sk_pane_ParamLimits

0x77cf,	// (0x0002d204) ai5_sk_pane

0xe331,	// (0x00033d66) cell_ai5_widget_pane_ParamLimits

0xe331,	// (0x00033d66) cell_ai5_widget_pane

0x7d78,	// (0x0002d7ad) aid_size_cell_widget_grid

0x7d86,	// (0x0002d7bb) bg_ai5_widget_pane_ParamLimits

0x7d86,	// (0x0002d7bb) bg_ai5_widget_pane

0x7dfa,	// (0x0002d82f) cell_ai5_widget_pane_g2

0x7e0a,	// (0x0002d83f) cell_ai5_widget_pane_g3

0x7e21,	// (0x0002d856) cell_ai5_widget_pane_g4

0x7e2d,	// (0x0002d862) cell_ai5_widget_pane_g5

0xe688,	// (0x000340bd) cell_ai5_widget_pane_g6

0xe694,	// (0x000340c9) cell_ai5_widget_pane_g7

0x7e8d,	// (0x0002d8c2) cell_ai5_widget_pane_t1_ParamLimits

0x7e8d,	// (0x0002d8c2) cell_ai5_widget_pane_t1

0x7eaa,	// (0x0002d8df) cell_ai5_widget_pane_t2_ParamLimits

0x7eaa,	// (0x0002d8df) cell_ai5_widget_pane_t2

0x7ec2,	// (0x0002d8f7) cell_ai5_widget_pane_t3_ParamLimits

0x7ec2,	// (0x0002d8f7) cell_ai5_widget_pane_t3

0x7eda,	// (0x0002d90f) cell_ai5_widget_pane_t4_ParamLimits

0x7eda,	// (0x0002d90f) cell_ai5_widget_pane_t4

0x7ef7,	// (0x0002d92c) cell_ai5_widget_pane_t5_ParamLimits

0x7ef7,	// (0x0002d92c) cell_ai5_widget_pane_t5

0x7f16,	// (0x0002d94b) cell_ai5_widget_pane_t6_ParamLimits

0x7f16,	// (0x0002d94b) cell_ai5_widget_pane_t6

0x7f28,	// (0x0002d95d) cell_ai5_widget_pane_t7_ParamLimits

0x7f28,	// (0x0002d95d) cell_ai5_widget_pane_t7

0x7f41,	// (0x0002d976) cell_ai5_widget_pane_t8_ParamLimits

0x7f41,	// (0x0002d976) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x00035883) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x00035883) cell_ai5_widget_pane_t

0x7f95,	// (0x0002d9ca) grid_ai5_widget_pane

0xd0d3,	// (0x00032b08) highlight_cell_ai5_widget_pane_ParamLimits

0xd0d3,	// (0x00032b08) highlight_cell_ai5_widget_pane

0xe6a0,	// (0x000340d5) ai5_sk_left_pane

0xe6aa,	// (0x000340df) ai5_sk_middle_pane

0xe6b4,	// (0x000340e9) ai5_sk_right_pane

0x7fc7,	// (0x0002d9fc) bg_ai5_widget_pane_g1_ParamLimits

0x7fc7,	// (0x0002d9fc) bg_ai5_widget_pane_g1

0x7fd3,	// (0x0002da08) bg_ai5_widget_pane_g2_ParamLimits

0x7fd3,	// (0x0002da08) bg_ai5_widget_pane_g2

0x7fdf,	// (0x0002da14) bg_ai5_widget_pane_g3_ParamLimits

0x7fdf,	// (0x0002da14) bg_ai5_widget_pane_g3

0x7feb,	// (0x0002da20) bg_ai5_widget_pane_g4_ParamLimits

0x7feb,	// (0x0002da20) bg_ai5_widget_pane_g4

0x7ff7,	// (0x0002da2c) bg_ai5_widget_pane_g5_ParamLimits

0x7ff7,	// (0x0002da2c) bg_ai5_widget_pane_g5

0x8003,	// (0x0002da38) bg_ai5_widget_pane_g6_ParamLimits

0x8003,	// (0x0002da38) bg_ai5_widget_pane_g6

0x800f,	// (0x0002da44) bg_ai5_widget_pane_g7_ParamLimits

0x800f,	// (0x0002da44) bg_ai5_widget_pane_g7

0x801b,	// (0x0002da50) bg_ai5_widget_pane_g8_ParamLimits

0x801b,	// (0x0002da50) bg_ai5_widget_pane_g8

0x8027,	// (0x0002da5c) bg_ai5_widget_pane_g9_ParamLimits

0x8027,	// (0x0002da5c) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x00035898) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x00035898) bg_ai5_widget_pane_g

0x805d,	// (0x0002da92) cell_shortcut_ai5_widget_pane_ParamLimits

0x805d,	// (0x0002da92) cell_shortcut_ai5_widget_pane

0x0944,	// (0x00026379) bg_cell_shortcut_ai5_widget_pane

0x8070,	// (0x0002daa5) cell_grid_ai5_widget_pane_g1

0x8079,	// (0x0002daae) highlight_cell_shortcut_ai5_widget_pane

0x1a3a,	// (0x0002746f) ai5_sk_left_pane_g1

0x8081,	// (0x0002dab6) ai5_sk_left_pane_g2

0x8089,	// (0x0002dabe) ai5_sk_left_pane_g3

0x8091,	// (0x0002dac6) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x000358ab) ai5_sk_left_pane_g

0x8099,	// (0x0002dace) ai5_sk_left_pane_t1

0x1a32,	// (0x00027467) ai5_sk_right_pane_g1

0x80a7,	// (0x0002dadc) ai5_sk_right_pane_g2

0x80af,	// (0x0002dae4) ai5_sk_right_pane_g3

0x80b7,	// (0x0002daec) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x000358b4) ai5_sk_right_pane_g

0x80bf,	// (0x0002daf4) ai5_sk_right_pane_t1

0x1a32,	// (0x00027467) ai5_sk_middle_pane_g1

0x1a3a,	// (0x0002746f) ai5_sk_middle_pane_g2

0x1a52,	// (0x00027487) ai5_sk_middle_pane_g3

0x80af,	// (0x0002dae4) ai5_sk_middle_pane_g4

0x8089,	// (0x0002dabe) ai5_sk_middle_pane_g5

0x80cd,	// (0x0002db02) ai5_sk_middle_pane_g6

0xe6be,	// (0x000340f3) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x000358bd) ai5_sk_middle_pane_g

0xb241,	// (0x00030c76) aid_touch_area_size_lc0_ParamLimits

0xb241,	// (0x00030c76) aid_touch_area_size_lc0

0x20df,	// (0x00027b14) cell_hwr_candidate_pane_t1_ParamLimits

0x1532,	// (0x00026f67) aid_touch_navi_pane

0xb4e7,	// (0x00030f1c) status_dt_navi_pane_ParamLimits

0xb4e7,	// (0x00030f1c) status_dt_navi_pane

0xb4ff,	// (0x00030f34) status_dt_sta_pane_ParamLimits

0xb4ff,	// (0x00030f34) status_dt_sta_pane

0xe6c6,	// (0x000340fb) dt_sta_controll_pane

0xe6d3,	// (0x00034108) dt_sta_indi_pane

0xe6e0,	// (0x00034115) dt_sta_title_pane

0xcbf1,	// (0x00032626) bg_dt_sta_indi_pane_ParamLimits

0xcbf1,	// (0x00032626) bg_dt_sta_indi_pane

0xe6f2,	// (0x00034127) dt_sta_battery_pane

0xe6fa,	// (0x0003412f) dt_sta_indi_pane_g1

0xe703,	// (0x00034138) dt_sta_indi_pane_g2

0xe70c,	// (0x00034141) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x000358cc) dt_sta_indi_pane_g

0xe715,	// (0x0003414a) dt_sta_signal_pane

0xd0d3,	// (0x00032b08) bg_dt_sta_title_pane_ParamLimits

0xd0d3,	// (0x00032b08) bg_dt_sta_title_pane

0xe71e,	// (0x00034153) dt_sta_title_pane_g1

0xe726,	// (0x0003415b) dt_sta_title_pane_t1_ParamLimits

0xe726,	// (0x0003415b) dt_sta_title_pane_t1

0x9e72,	// (0x0002f8a7) bg_dt_sta_control_pane

0xe73b,	// (0x00034170) dt_sta_controll_pane_g1

0xe744,	// (0x00034179) bg_dt_sta_title_pane_g1

0xe74d,	// (0x00034182) bg_dt_sta_title_pane_g2

0xe756,	// (0x0003418b) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x000358d3) bg_dt_sta_title_pane_g

0x51eb,	// (0x0002ac20) bg_dt_sta_indi_pane_g1

0x817b,	// (0x0002dbb0) dt_sta_signal_pane_g1

0x8183,	// (0x0002dbb8) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x000358da) dt_sta_signal_pane_g

0x818b,	// (0x0002dbc0) dt_sta_battery_pane_g1

0x8194,	// (0x0002dbc9) dt_sta_battery_pane_t1

0x51eb,	// (0x0002ac20) bg_dt_sta_control_pane_g1

0xd637,	// (0x0003306c) fep_china_uni_eep_pane

0xd63f,	// (0x00033074) fep_china_uni_entry_pane_ParamLimits

0xd64f,	// (0x00033084) popup_fep_china_uni_window_g1_ParamLimits

0xd65f,	// (0x00033094) popup_fep_china_uni_window_g2_ParamLimits

0xd65f,	// (0x00033094) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00035158) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00035158) popup_fep_china_uni_window_g

0x81a3,	// (0x0002dbd8) fep_china_uni_eep_pane_g1

0x81ab,	// (0x0002dbe0) fep_china_uni_eep_pane_t1

0x773e,	// (0x0002d173) aid_touch_area_size_smil_player

0x168a,	// (0x000270bf) lc0_clock_pane

0x1889,	// (0x000272be) status_pane_g5_ParamLimits

0x1889,	// (0x000272be) status_pane_g5

0xac96,	// (0x000306cb) popup_keymap_window

0x1847,	// (0x0002727c) status_icon_pane

0x7e0a,	// (0x0002d83f) cell_ai5_widget_pane_g3_ParamLimits

0x7e21,	// (0x0002d856) cell_ai5_widget_pane_g4_ParamLimits

0x7e2d,	// (0x0002d862) cell_ai5_widget_pane_g5_ParamLimits

0x7e51,	// (0x0002d886) cell_ai5_widget_pane_g8_ParamLimits

0x7e51,	// (0x0002d886) cell_ai5_widget_pane_g8

0x7e65,	// (0x0002d89a) cell_ai5_widget_pane_g9_ParamLimits

0x7e65,	// (0x0002d89a) cell_ai5_widget_pane_g9

0x7e79,	// (0x0002d8ae) cell_ai5_widget_pane_g10_ParamLimits

0x7e79,	// (0x0002d8ae) cell_ai5_widget_pane_g10

0x81ba,	// (0x0002dbef) status_icon_pane_g1

0x9e72,	// (0x0002f8a7) bg_popup_sub_pane_cp13

0x81c2,	// (0x0002dbf7) popup_keymap_window_t1

0xa9a1,	// (0x000303d6) control_pane_g6_ParamLimits

0xa9a1,	// (0x000303d6) control_pane_g6

0xa9ae,	// (0x000303e3) control_pane_g7_ParamLimits

0xa9ae,	// (0x000303e3) control_pane_g7

0xa9bb,	// (0x000303f0) control_pane_g8_ParamLimits

0xa9bb,	// (0x000303f0) control_pane_g8

0xe6c6,	// (0x000340fb) dt_sta_controll_pane_ParamLimits

0xe6d3,	// (0x00034108) dt_sta_indi_pane_ParamLimits

0xe6e0,	// (0x00034115) dt_sta_title_pane_ParamLimits

0xd015,	// (0x00032a4a) aid_size_touch_scroll_bar_cale

0xf36b,	// (0x00034da0) popup_discreet_window_ParamLimits

0xf36b,	// (0x00034da0) popup_discreet_window

0x9fc0,	// (0x0002f9f5) popup_sk_window

0x3212,	// (0x00028c47) bg_popup_sub_pane_cp28_ParamLimits

0x3212,	// (0x00028c47) bg_popup_sub_pane_cp28

0x81d0,	// (0x0002dc05) popup_discreet_window_g1_ParamLimits

0x81d0,	// (0x0002dc05) popup_discreet_window_g1

0x81f0,	// (0x0002dc25) popup_discreet_window_t1_ParamLimits

0x81f0,	// (0x0002dc25) popup_discreet_window_t1

0x820e,	// (0x0002dc43) popup_discreet_window_t2_ParamLimits

0x820e,	// (0x0002dc43) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x000358df) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x000358df) popup_discreet_window_t

0x2a51,	// (0x00028486) popup_sk_window_g1

0x2a5b,	// (0x00028490) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x000358e6) popup_sk_window_g

0x2a65,	// (0x0002849a) popup_sk_window_t1

0x2a75,	// (0x000284aa) popup_sk_window_t1_copy1

0x7dfa,	// (0x0002d82f) cell_ai5_widget_pane_g2_ParamLimits

0x7f53,	// (0x0002d988) cell_ai5_widget_pane_t9_ParamLimits

0x7f53,	// (0x0002d988) cell_ai5_widget_pane_t9

0x9e72,	// (0x0002f8a7) main_fep_fshwr2_pane

0xca3b,	// (0x00032470) aid_fshwr2_btn_pane

0xca4c,	// (0x00032481) aid_fshwr2_syb_pane

0xca5d,	// (0x00032492) aid_fshwr2_txt_pane

0xca69,	// (0x0003249e) fshwr2_func_candi_pane

0xca8a,	// (0x000324bf) fshwr2_hwr_syb_pane

0xcaa7,	// (0x000324dc) fshwr2_icf_pane

0x9e72,	// (0x0002f8a7) fshwr2_icf_bg_pane

0x8260,	// (0x0002dc95) fshwr2_icf_pane_t1_ParamLimits

0x8260,	// (0x0002dc95) fshwr2_icf_pane_t1

0xd5b5,	// (0x00032fea) fshwr2_func_candi_pane_g1

0xe75f,	// (0x00034194) fshwr2_func_candi_row_pane_ParamLimits

0xe75f,	// (0x00034194) fshwr2_func_candi_row_pane

0xe76f,	// (0x000341a4) cell_fshwr2_syb_pane_ParamLimits

0xe76f,	// (0x000341a4) cell_fshwr2_syb_pane

0x5466,	// (0x0002ae9b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5466,	// (0x0002ae9b) fshwr2_hwr_syb_pane_g1

0x9e72,	// (0x0002f8a7) bg_popup_call_pane_cp01

0xe789,	// (0x000341be) fshwr2_func_candi_cell_pane_ParamLimits

0xe789,	// (0x000341be) fshwr2_func_candi_cell_pane

0x82ca,	// (0x0002dcff) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x82ca,	// (0x0002dcff) fshwr2_func_candi_cell_bg_pane

0xe7b1,	// (0x000341e6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe7b1,	// (0x000341e6) fshwr2_func_candi_cell_pane_g1

0x82f6,	// (0x0002dd2b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x82f6,	// (0x0002dd2b) fshwr2_func_candi_cell_pane_t1

0x9e72,	// (0x0002f8a7) bg_button_pane_cp08

0x0944,	// (0x00026379) cell_fshwr2_syb_bg_pane

0xe7d1,	// (0x00034206) cell_fshwr2_syb_bg_pane_g1

0xe7d9,	// (0x0003420e) cell_fshwr2_syb_bg_pane_t1

0xd0d3,	// (0x00032b08) main_tmo_pane

0xba8b,	// (0x000314c0) uni_indicator_pane_g1_ParamLimits

0xbaa2,	// (0x000314d7) uni_indicator_pane_g2_ParamLimits

0xbab8,	// (0x000314ed) uni_indicator_pane_g3_ParamLimits

0xbacd,	// (0x00031502) uni_indicator_pane_g4_ParamLimits

0xbacd,	// (0x00031502) uni_indicator_pane_g4

0x3d8c,	// (0x000297c1) uni_indicator_pane_g5_ParamLimits

0x3d8c,	// (0x000297c1) uni_indicator_pane_g5

0x3d8c,	// (0x000297c1) uni_indicator_pane_g6_ParamLimits

0x3d8c,	// (0x000297c1) uni_indicator_pane_g6

0xf922,	// (0x00035357) uni_indicator_pane_g_ParamLimits

0xd7ab,	// (0x000331e0) popup_tmo_note_window_ParamLimits

0xd7ab,	// (0x000331e0) popup_tmo_note_window

0xd0d3,	// (0x00032b08) fshwr2_bg_pane

0xe7c2,	// (0x000341f7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe7c2,	// (0x000341f7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x000358eb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x000358eb) fshwr2_func_candi_cell_pane_g

0x51eb,	// (0x0002ac20) bg_popup_window_pane_cp01

0x8320,	// (0x0002dd55) bg_popup_window_pane_g1_cp01

0x8329,	// (0x0002dd5e) bg_popup_window_pane_cp22_ParamLimits

0x8329,	// (0x0002dd5e) bg_popup_window_pane_cp22

0x8337,	// (0x0002dd6c) listscroll_tmo_link_pane_ParamLimits

0x8337,	// (0x0002dd6c) listscroll_tmo_link_pane

0x8377,	// (0x0002ddac) popup_tmo_note_window_g1_ParamLimits

0x8377,	// (0x0002ddac) popup_tmo_note_window_g1

0x8384,	// (0x0002ddb9) tmo_note_info_pane_ParamLimits

0x8384,	// (0x0002ddb9) tmo_note_info_pane

0xe7e8,	// (0x0003421d) list_tmo_note_info_pane_g1_ParamLimits

0xe7e8,	// (0x0003421d) list_tmo_note_info_pane_g1

0x83b5,	// (0x0002ddea) list_tmo_note_info_pane_g2_ParamLimits

0x83b5,	// (0x0002ddea) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x000358f0) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x000358f0) list_tmo_note_info_pane_g

0x83d1,	// (0x0002de06) list_tmo_note_info_text_pane_ParamLimits

0x83d1,	// (0x0002de06) list_tmo_note_info_text_pane

0x8456,	// (0x0002de8b) list_tmo_link_pane

0x8463,	// (0x0002de98) scroll_pane_cp20

0x8470,	// (0x0002dea5) list_single_tmo_link_pane_ParamLimits

0x8470,	// (0x0002dea5) list_single_tmo_link_pane

0x8480,	// (0x0002deb5) list_single_tmo_link_pane_t1

0x848e,	// (0x0002dec3) list_tmo_note_info_text_pane_t1_ParamLimits

0x848e,	// (0x0002dec3) list_tmo_note_info_text_pane_t1

0xa519,	// (0x0002ff4e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa519,	// (0x0002ff4e) aid_size_touch_scroll_bar_cp01

0x9a81,	// (0x0002f4b6) aid_size_touch_slider_marker

0x9fb0,	// (0x0002f9e5) popup_settings_window_ParamLimits

0x9fb0,	// (0x0002f9e5) popup_settings_window

0xec64,	// (0x00034699) popup_candi_list_indi_window

0x1532,	// (0x00026f67) aid_touch_navi_pane_ParamLimits

0x2250,	// (0x00027c85) rs_clock_indi_pane

0x2259,	// (0x00027c8e) sctrl_sk_bottom_pane_ParamLimits

0x226a,	// (0x00027c9f) sctrl_sk_top_pane_ParamLimits

0x2353,	// (0x00027d88) popup_fep_tooltip_window

0x7d78,	// (0x0002d7ad) aid_size_cell_widget_grid_ParamLimits

0x7de5,	// (0x0002d81a) cell_ai5_widget_pane_g1_ParamLimits

0x7de5,	// (0x0002d81a) cell_ai5_widget_pane_g1

0xe688,	// (0x000340bd) cell_ai5_widget_pane_g6_ParamLimits

0xe694,	// (0x000340c9) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0003586e) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0003586e) cell_ai5_widget_pane_g

0x7f77,	// (0x0002d9ac) cell_ai5_widget_pane_t10_ParamLimits

0x7f77,	// (0x0002d9ac) cell_ai5_widget_pane_t10

0x7f95,	// (0x0002d9ca) grid_ai5_widget_pane_ParamLimits

0x8033,	// (0x0002da68) cell_contacts_ai5_widget_pane_ParamLimits

0x8033,	// (0x0002da68) cell_contacts_ai5_widget_pane

0x8223,	// (0x0002dc58) popup_discreet_window_t3_ParamLimits

0x8223,	// (0x0002dc58) popup_discreet_window_t3

0xcabf,	// (0x000324f4) popup_fshwr2_char_preview_window_ParamLimits

0xcabf,	// (0x000324f4) popup_fshwr2_char_preview_window

0xe7ff,	// (0x00034234) tmo_note_info_pane_t1

0xe814,	// (0x00034249) tmo_note_info_pane_t2

0xe82d,	// (0x00034262) tmo_note_info_pane_t3

0x8432,	// (0x0002de67) tmo_note_info_pane_t4

0x8444,	// (0x0002de79) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x000358f5) tmo_note_info_pane_t

0x8456,	// (0x0002de8b) list_tmo_link_pane_ParamLimits

0x8463,	// (0x0002de98) scroll_pane_cp20_ParamLimits

0x9e72,	// (0x0002f8a7) bg_popup_fep_char_preview_window_cp01

0x84a7,	// (0x0002dedc) popup_fshwr2_char_preview_window_t1

0x84b5,	// (0x0002deea) popup_candi_list_indi_window_g1

0x84be,	// (0x0002def3) bg_cell_contacts_ai5_widget_pane

0x84ca,	// (0x0002deff) cell_contacts_ai5_widget_pane_g1

0x84de,	// (0x0002df13) cell_contacts_ai5_widget_pane_g2

0x84ea,	// (0x0002df1f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x00035900) cell_contacts_ai5_widget_pane_g

0x84fd,	// (0x0002df32) cell_contacts_ai5_widget_pane_t1

0xd0d3,	// (0x00032b08) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe8a7,	// (0x000342dc) settings_container_pane

0x0944,	// (0x00026379) listscroll_set_pane_copy1

0x4906,	// (0x0002a33b) scroll_pane_cp121_copy1

0x8583,	// (0x0002dfb8) set_content_pane_copy1

0xe8b3,	// (0x000342e8) aid_height_set_list_copy1_ParamLimits

0xe8b3,	// (0x000342e8) aid_height_set_list_copy1

0x3f8c,	// (0x000299c1) aid_size_parent_copy1_ParamLimits

0x3f8c,	// (0x000299c1) aid_size_parent_copy1

0xe8bf,	// (0x000342f4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8bf,	// (0x000342f4) button_value_adjust_pane_cp6_copy1

0x0eb9,	// (0x000268ee) list_highlight_pane_cp2_copy1_ParamLimits

0x0eb9,	// (0x000268ee) list_highlight_pane_cp2_copy1

0xe8d3,	// (0x00034308) list_set_pane_copy1_ParamLimits

0xe8d3,	// (0x00034308) list_set_pane_copy1

0xe842,	// (0x00034277) main_pane_set_t1_copy1_ParamLimits

0xe842,	// (0x00034277) main_pane_set_t1_copy1

0xe87c,	// (0x000342b1) main_pane_set_t2_copy1_ParamLimits

0xe87c,	// (0x000342b1) main_pane_set_t2_copy1

0xe99a,	// (0x000343cf) main_pane_set_t3_copy1

0xe9a8,	// (0x000343dd) main_pane_set_t4_copy1

0xe89b,	// (0x000342d0) set_content_pane_g1_copy1_ParamLimits

0xe89b,	// (0x000342d0) set_content_pane_g1_copy1

0xe9b6,	// (0x000343eb) setting_code_pane_copy1

0x8696,	// (0x0002e0cb) setting_slider_graphic_pane_copy1

0x8696,	// (0x0002e0cb) setting_slider_pane_copy1

0x8696,	// (0x0002e0cb) setting_text_pane_copy1

0x8696,	// (0x0002e0cb) setting_volume_pane_copy1

0xe9b6,	// (0x000343eb) settings_code_pane_cp2_copy1

0xe9be,	// (0x000343f3) settings_code_pane_cp_copy1_ParamLimits

0xe9be,	// (0x000343f3) settings_code_pane_cp_copy1

0xcad7,	// (0x0003250c) volume_set_pane_copy1

0xe9d2,	// (0x00034407) volume_set_pane_g10_copy1

0xe9de,	// (0x00034413) volume_set_pane_g1_copy1

0xe9e8,	// (0x0003441d) volume_set_pane_g2_copy1

0xe9f2,	// (0x00034427) volume_set_pane_g3_copy1

0xe9fc,	// (0x00034431) volume_set_pane_g4_copy1

0xea06,	// (0x0003443b) volume_set_pane_g5_copy1

0xea10,	// (0x00034445) volume_set_pane_g6_copy1

0xea1a,	// (0x0003444f) volume_set_pane_g7_copy1

0xea24,	// (0x00034459) volume_set_pane_g8_copy1

0xea2e,	// (0x00034463) volume_set_pane_g9_copy1

0xa1ed,	// (0x0002fc22) bg_set_opt_pane_cp_copy1_ParamLimits

0xa1ed,	// (0x0002fc22) bg_set_opt_pane_cp_copy1

0x2b0c,	// (0x00028541) setting_slider_pane_t1_copy1_ParamLimits

0x2b0c,	// (0x00028541) setting_slider_pane_t1_copy1

0xcae3,	// (0x00032518) setting_slider_pane_t2_copy1_ParamLimits

0xcae3,	// (0x00032518) setting_slider_pane_t2_copy1

0xcafd,	// (0x00032532) setting_slider_pane_t3_copy1_ParamLimits

0xcafd,	// (0x00032532) setting_slider_pane_t3_copy1

0xcb15,	// (0x0003254a) slider_set_pane_copy1_ParamLimits

0xcb15,	// (0x0003254a) slider_set_pane_copy1

0xd12e,	// (0x00032b63) set_opt_bg_pane_g1_copy2

0xd136,	// (0x00032b6b) set_opt_bg_pane_g2_copy2

0x8718,	// (0x0002e14d) set_opt_bg_pane_g3_copy2

0xd146,	// (0x00032b7b) set_opt_bg_pane_g4_copy2

0xd14e,	// (0x00032b83) set_opt_bg_pane_g5_copy2

0xd156,	// (0x00032b8b) set_opt_bg_pane_g6_copy2

0xea38,	// (0x0003446d) set_opt_bg_pane_g7_copy2

0x873a,	// (0x0002e16f) set_opt_bg_pane_g8_copy2

0x8744,	// (0x0002e179) set_opt_bg_pane_g9_copy2

0x874e,	// (0x0002e183) aid_size_touch_slider_mark_copy1_ParamLimits

0x874e,	// (0x0002e183) aid_size_touch_slider_mark_copy1

0x8762,	// (0x0002e197) slider_set_pane_g1_copy1

0x876b,	// (0x0002e1a0) slider_set_pane_g2_copy1

0x5a59,	// (0x0002b48e) slider_set_pane_g3_copy1_ParamLimits

0x5a59,	// (0x0002b48e) slider_set_pane_g3_copy1

0x5a6d,	// (0x0002b4a2) slider_set_pane_g4_copy1_ParamLimits

0x5a6d,	// (0x0002b4a2) slider_set_pane_g4_copy1

0x5a85,	// (0x0002b4ba) slider_set_pane_g5_copy1_ParamLimits

0x5a85,	// (0x0002b4ba) slider_set_pane_g5_copy1

0x5a59,	// (0x0002b48e) slider_set_pane_g6_copy1_ParamLimits

0x5a59,	// (0x0002b48e) slider_set_pane_g6_copy1

0xea42,	// (0x00034477) slider_set_pane_g7_copy1_ParamLimits

0xea42,	// (0x00034477) slider_set_pane_g7_copy1

0x9f6c,	// (0x0002f9a1) bg_set_opt_pane_cp2_copy1

0x8789,	// (0x0002e1be) setting_slider_graphic_pane_g1_copy1

0xea58,	// (0x0003448d) setting_slider_graphic_pane_t1_copy1

0xea68,	// (0x0003449d) setting_slider_graphic_pane_t2_copy1

0xea78,	// (0x000344ad) slider_set_pane_cp_copy1

0x87c2,	// (0x0002e1f7) input_focus_pane_cp1_copy1

0x87cb,	// (0x0002e200) list_set_text_pane_copy1

0x87d3,	// (0x0002e208) setting_text_pane_g1_copy1

0xf4a7,	// (0x00034edc) set_text_pane_t1_copy1

0x87c2,	// (0x0002e1f7) input_focus_pane_cp2_copy1

0x87d3,	// (0x0002e208) setting_code_pane_g1_copy1

0xea80,	// (0x000344b5) setting_code_pane_t1_copy1

0xea8e,	// (0x000344c3) list_set_graphic_pane_copy1

0x9f6c,	// (0x0002f9a1) bg_set_opt_pane_cp4_copy1

0xa7d6,	// (0x0003020b) list_set_graphic_pane_g1_copy1_ParamLimits

0xa7d6,	// (0x0003020b) list_set_graphic_pane_g1_copy1

0xeaa0,	// (0x000344d5) list_set_graphic_pane_g2_copy1

0xa7ee,	// (0x00030223) list_set_graphic_pane_t1_copy1_ParamLimits

0xa7ee,	// (0x00030223) list_set_graphic_pane_t1_copy1

0x51eb,	// (0x0002ac20) rs_clock_indi_pane_g1

0x8804,	// (0x0002e239) rs_clock_indi_pane_t1

0x8812,	// (0x0002e247) rs_indi_pane

0x881a,	// (0x0002e24f) rs_indi_pane_g1

0x8823,	// (0x0002e258) rs_indi_pane_g2

0x882c,	// (0x0002e261) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x00035907) rs_indi_pane_g

0x0944,	// (0x00026379) bg_popup_preview_window_pane_cp03

0x8835,	// (0x0002e26a) popup_fep_tooltip_window_t1

0x5ee4,	// (0x0002b919) popup_note2_window_g2_ParamLimits

0x5ee4,	// (0x0002b919) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x000356a0) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x000356a0) popup_note2_window_g

0x63ec,	// (0x0002be21) bg_popup_sub_pane_cp11_ParamLimits

0x63f9,	// (0x0002be2e) cell_ai3_links_pane_g1_ParamLimits

0x6410,	// (0x0002be45) cell_ai3_links_pane_t1

0xf4a7,	// (0x00034edc) set_text_pane_t1_copy1_ParamLimits

0xa862,	// (0x00030297) cell_graphic_popup_pane_cp2_ParamLimits

0xa862,	// (0x00030297) cell_graphic_popup_pane_cp2

0xeaa8,	// (0x000344dd) cell_graphic_popup_pane_g1_cp2

0xce28,	// (0x0003285d) cell_graphic_popup_pane_g2_cp2

0x884b,	// (0x0002e280) cell_graphic_popup_pane_g3_cp2

0x8853,	// (0x0002e288) cell_graphic_popup_pane_t2_cp2

0xce39,	// (0x0003286e) grid_highlight_pane_cp3_cp2

0xd3d7,	// (0x00032e0c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd0d3,	// (0x00032b08) main_tmo_pane_ParamLimits

0xd79f,	// (0x000331d4) popup_tmo_big_image_note_window

0x7dd4,	// (0x0002d809) cell_ai5_widget_list_pane

0x7ddc,	// (0x0002d811) cell_ai5_widget_lrg_icon_pane

0xe7ff,	// (0x00034234) tmo_note_info_pane_t1_ParamLimits

0xe814,	// (0x00034249) tmo_note_info_pane_t2_ParamLimits

0xe82d,	// (0x00034262) tmo_note_info_pane_t3_ParamLimits

0x8432,	// (0x0002de67) tmo_note_info_pane_t4_ParamLimits

0x8444,	// (0x0002de79) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x000358f5) tmo_note_info_pane_t_ParamLimits

0xe8a7,	// (0x000342dc) settings_container_pane_ParamLimits

0x87ba,	// (0x0002e1ef) indicator_popup_pane_cp5

0x87ba,	// (0x0002e1ef) indicator_popup_pane_cp6

0xea8e,	// (0x000344c3) list_set_graphic_pane_copy1_ParamLimits

0x9e72,	// (0x0002f8a7) bg_popup_window_pane_cp23

0x8861,	// (0x0002e296) popup_tmo_big_image_note_window_g1

0x886d,	// (0x0002e2a2) popup_tmo_big_image_note_window_t1

0x887d,	// (0x0002e2b2) popup_tmo_big_image_note_window_t2

0x888d,	// (0x0002e2c2) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x0003590e) popup_tmo_big_image_note_window_t

0x51eb,	// (0x0002ac20) cell_ai5_widget_lrg_icon_pane_g1

0x889d,	// (0x0002e2d2) cell_ai5_widget_lrg_icon_pane_t1

0x88ab,	// (0x0002e2e0) cell_ai5_widget_list_row_pane_ParamLimits

0x88ab,	// (0x0002e2e0) cell_ai5_widget_list_row_pane

0x88c4,	// (0x0002e2f9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x88c4,	// (0x0002e2f9) cell_ai5_widget_list_row_pane_g1

0x88d1,	// (0x0002e306) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x88d1,	// (0x0002e306) cell_ai5_widget_list_row_pane_t1

0x88fc,	// (0x0002e331) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x88fc,	// (0x0002e331) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee0,	// (0x00035915) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x00035915) cell_ai5_widget_list_row_pane_t

0x9e72,	// (0x0002f8a7) main_fep_vtchi_ss_pane

0x2b81,	// (0x000285b6) popup_fep_char_pre_window

0x2b89,	// (0x000285be) popup_fep_ituss_window

0x2baa,	// (0x000285df) popup_fep_vkbss_window

0x8924,	// (0x0002e359) grid_vkbss_keypad_pane_ParamLimits

0x8924,	// (0x0002e359) grid_vkbss_keypad_pane

0x8934,	// (0x0002e369) ituss_keypad_pane

0x2bd7,	// (0x0002860c) aid_vkbss_key_offset_ParamLimits

0x2bd7,	// (0x0002860c) aid_vkbss_key_offset

0x2be3,	// (0x00028618) cell_vkbss_key_pane_ParamLimits

0x2be3,	// (0x00028618) cell_vkbss_key_pane

0x8944,	// (0x0002e379) bg_cell_vkbss_key_g1_ParamLimits

0x8944,	// (0x0002e379) bg_cell_vkbss_key_g1

0x8950,	// (0x0002e385) cell_vkbss_key_3p_pane_ParamLimits

0x8950,	// (0x0002e385) cell_vkbss_key_3p_pane

0x896a,	// (0x0002e39f) cell_vkbss_key_g1_ParamLimits

0x896a,	// (0x0002e39f) cell_vkbss_key_g1

0x8984,	// (0x0002e3b9) cell_vkbss_key_t1_ParamLimits

0x8984,	// (0x0002e3b9) cell_vkbss_key_t1

0x2bf9,	// (0x0002862e) cell_ituss_key_pane_ParamLimits

0x2bf9,	// (0x0002862e) cell_ituss_key_pane

0x89af,	// (0x0002e3e4) bg_cell_ituss_key_g1_ParamLimits

0x89af,	// (0x0002e3e4) bg_cell_ituss_key_g1

0x89bb,	// (0x0002e3f0) cell_ituss_key_pane_g1_ParamLimits

0x89bb,	// (0x0002e3f0) cell_ituss_key_pane_g1

0x89cf,	// (0x0002e404) cell_ituss_key_pane_g2_ParamLimits

0x89cf,	// (0x0002e404) cell_ituss_key_pane_g2

0x0001,

0xfee7,	// (0x0003591c) cell_ituss_key_pane_g_ParamLimits

0xfee7,	// (0x0003591c) cell_ituss_key_pane_g

0x8a01,	// (0x0002e436) cell_ituss_key_t1_ParamLimits

0x8a01,	// (0x0002e436) cell_ituss_key_t1

0x8a3f,	// (0x0002e474) cell_ituss_key_t2_ParamLimits

0x8a3f,	// (0x0002e474) cell_ituss_key_t2

0x8a70,	// (0x0002e4a5) cell_ituss_key_t3_ParamLimits

0x8a70,	// (0x0002e4a5) cell_ituss_key_t3

0x8aa1,	// (0x0002e4d6) cell_ituss_key_t4_ParamLimits

0x8aa1,	// (0x0002e4d6) cell_ituss_key_t4

0x0003,

0xfeec,	// (0x00035921) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x00035921) cell_ituss_key_t

0x8ad2,	// (0x0002e507) cell_vkbss_key_3p_pane_g1

0x8ada,	// (0x0002e50f) cell_vkbss_key_3p_pane_g2

0x8ae2,	// (0x0002e517) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x0003592a) cell_vkbss_key_3p_pane_g

0x9e72,	// (0x0002f8a7) bg_popup_fep_char_preview_window_cp02

0x8aea,	// (0x0002e51f) popup_fep_char_pre_window_t1

0xe67e,	// (0x000340b3) main_ai5_sk_pane

0x84be,	// (0x0002def3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x84ca,	// (0x0002deff) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x84de,	// (0x0002df13) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x84ea,	// (0x0002df1f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x00035900) cell_contacts_ai5_widget_pane_g_ParamLimits

0x84fd,	// (0x0002df32) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd0d3,	// (0x00032b08) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeab0,	// (0x000344e5) main_ai5_sk_pane_g1

0x304a,	// (0x00028a7f) popup_query_code_window_g1

0x2b9f,	// (0x000285d4) popup_fep_vkb_icf_pane

0x2bb5,	// (0x000285ea) popup_fep_vtchi_icf_pane

0xd0d3,	// (0x00032b08) bg_icf_pane

0x8b02,	// (0x0002e537) list_vkb_icf_pane

0xd0d3,	// (0x00032b08) bg_icf_pane_cp01

0x8b0e,	// (0x0002e543) vtchi_icf_list_pane

0x8b1f,	// (0x0002e554) list_vkb_icf_pane_t1_ParamLimits

0x8b1f,	// (0x0002e554) list_vkb_icf_pane_t1

0x8b35,	// (0x0002e56a) vtchi_icf_list_pane_t1_ParamLimits

0x8b35,	// (0x0002e56a) vtchi_icf_list_pane_t1

0x2b89,	// (0x000285be) popup_fep_ituss_window_ParamLimits

0x2bb5,	// (0x000285ea) popup_fep_vtchi_icf_pane_ParamLimits

0x8934,	// (0x0002e369) ituss_keypad_pane_ParamLimits

0x2bcb,	// (0x00028600) ituss_sks_pane

0xd0d3,	// (0x00032b08) bg_icf_pane_ParamLimits

0x2b72,	// (0x000285a7) icf_edit_indi_pane_ParamLimits

0x2b72,	// (0x000285a7) icf_edit_indi_pane

0x8b02,	// (0x0002e537) list_vkb_icf_pane_ParamLimits

0xd0d3,	// (0x00032b08) bg_icf_pane_cp01_ParamLimits

0x2b72,	// (0x000285a7) icf_edit_indi_pane_cp01_ParamLimits

0x2b72,	// (0x000285a7) icf_edit_indi_pane_cp01

0x8b16,	// (0x0002e54b) vtchi_query_pane

0x5466,	// (0x0002ae9b) icf_edit_indi_pane_g1_ParamLimits

0x5466,	// (0x0002ae9b) icf_edit_indi_pane_g1

0x8bb7,	// (0x0002e5ec) icf_edit_indi_pane_g2_ParamLimits

0x8bb7,	// (0x0002e5ec) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00035942) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00035942) icf_edit_indi_pane_g

0x8bc6,	// (0x0002e5fb) icf_edit_indi_pane_t1

0x8b4d,	// (0x0002e582) bg_input_focus_pane_cp042

0xd00c,	// (0x00032a41) vtchi_button_pane

0x8b56,	// (0x0002e58b) vtchi_query_pane_t1

0x8b64,	// (0x0002e599) vtchi_query_pane_t2

0x8b72,	// (0x0002e5a7) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00035931) vtchi_query_pane_t

0x9e72,	// (0x0002f8a7) bg_button_pane_cp13

0x8b80,	// (0x0002e5b5) vtchi_button_pane_g1

0x8b88,	// (0x0002e5bd) ituss_sks_pane_g1

0x8b93,	// (0x0002e5c8) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00035938) ituss_sks_pane_g

0x8b9b,	// (0x0002e5d0) ituss_sks_pane_t1

0x8ba9,	// (0x0002e5de) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0003593d) ituss_sks_pane_t

0x4c9b,	// (0x0002a6d0) indicator_nsta_pane_cp_g1

0x4ca4,	// (0x0002a6d9) indicator_nsta_pane_cp_g2

0x4cac,	// (0x0002a6e1) indicator_nsta_pane_cp_g3

0x4cb4,	// (0x0002a6e9) indicator_nsta_pane_cp_g4

0x4cbc,	// (0x0002a6f1) indicator_nsta_pane_cp_g5

0x4cc4,	// (0x0002a6f9) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x000354ea) indicator_nsta_pane_cp_g

0xe1a1,	// (0x00033bd6) cell_graphic2_pane_t2_ParamLimits

0xe1a1,	// (0x00033bd6) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x000357f7) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x000357f7) cell_graphic2_pane_t

0xe1d7,	// (0x00033c0c) cell_graphic2_control_pane_t1

0xa762,	// (0x00030197) signal_pane_g3_ParamLimits

0xa762,	// (0x00030197) signal_pane_g3

0xa776,	// (0x000301ab) signal_pane_g4_ParamLimits

0xa776,	// (0x000301ab) signal_pane_g4

0x890e,	// (0x0002e343) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x890e,	// (0x0002e343) cell_ai5_widget_list_row_pane_t3

0x89ef,	// (0x0002e424) cell_ituss_key_pane_t1_ParamLimits

0x89ef,	// (0x0002e424) cell_ituss_key_pane_t1

0x2cc7,	// (0x000286fc) form_field_data_wide_pane_vc_t2_ParamLimits

0x2cc7,	// (0x000286fc) form_field_data_wide_pane_vc_t2

0x2cdb,	// (0x00028710) form_field_data_wide_pane_vc_t3_ParamLimits

0x2cdb,	// (0x00028710) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0003523f) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0003523f) form_field_data_wide_pane_vc_t

0x4946,	// (0x0002a37b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4946,	// (0x0002a37b) form_field_slider_wide_pane_vc_t3

0x4a1c,	// (0x0002a451) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4a1c,	// (0x0002a451) form_field_popup_wide_pane_vc_t2

0x4a33,	// (0x0002a468) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4a33,	// (0x0002a468) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x000354d9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x000354d9) form_field_popup_wide_pane_vc_t

0xca3b,	// (0x00032470) aid_fshwr2_btn_pane_ParamLimits

0xca4c,	// (0x00032481) aid_fshwr2_syb_pane_ParamLimits

0xca5d,	// (0x00032492) aid_fshwr2_txt_pane_ParamLimits

0xd0d3,	// (0x00032b08) fshwr2_bg_pane_ParamLimits

0xca69,	// (0x0003249e) fshwr2_func_candi_pane_ParamLimits

0xca8a,	// (0x000324bf) fshwr2_hwr_syb_pane_ParamLimits

0xcaa7,	// (0x000324dc) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00002ba8 };

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
0x8d1d,	// (0x0000b8c5) Screen

0x8d29,	// (0x0000b8d1) application_window_ParamLimits

0x8d29,	// (0x0000b8d1) application_window

0xe0f3,	// (0x00010c9b) screen_g1

0x8d61,	// (0x0000b909) area_bottom_pane_ParamLimits

0x8d61,	// (0x0000b909) area_bottom_pane

0x8e1f,	// (0x0000b9c7) area_top_pane_ParamLimits

0x8e1f,	// (0x0000b9c7) area_top_pane

0x8eb3,	// (0x0000ba5b) main_pane_ParamLimits

0x8eb3,	// (0x0000ba5b) main_pane

0xe11d,	// (0x00010cc5) misc_graphics

0xac0f,	// (0x0000d7b7) battery_pane_ParamLimits

0xac0f,	// (0x0000d7b7) battery_pane

0x14d2,	// (0x0000407a) bg_status_flat_pane_g8

0x14da,	// (0x00004082) bg_status_flat_pane_g9

0x0627,	// (0x000031cf) context_pane_ParamLimits

0x0627,	// (0x000031cf) context_pane

0xad7a,	// (0x0000d922) navi_pane_ParamLimits

0xad7a,	// (0x0000d922) navi_pane

0xadf8,	// (0x0000d9a0) signal_pane_ParamLimits

0xadf8,	// (0x0000d9a0) signal_pane

0x0008,

0xf834,	// (0x000123dc) bg_status_flat_pane_g

0xae88,	// (0x0000da30) status_pane_g1_ParamLimits

0xae88,	// (0x0000da30) status_pane_g1

0xae9e,	// (0x0000da46) status_pane_g2_ParamLimits

0xae9e,	// (0x0000da46) status_pane_g2

0x084e,	// (0x000033f6) status_pane_g3_ParamLimits

0x084e,	// (0x000033f6) status_pane_g3

0x0004,

0xf767,	// (0x0001230f) status_pane_g_ParamLimits

0xf767,	// (0x0001230f) status_pane_g

0xaeaa,	// (0x0000da52) title_pane_ParamLimits

0xaeaa,	// (0x0000da52) title_pane

0xaf0d,	// (0x0000dab5) uni_indicator_pane_ParamLimits

0xaf0d,	// (0x0000dab5) uni_indicator_pane

0xf4c7,	// (0x0001206f) bg_list_pane_ParamLimits

0xf4c7,	// (0x0001206f) bg_list_pane

0xa3fd,	// (0x0000cfa5) find_pane

0x0c1e,	// (0x000037c6) listscroll_app_pane_ParamLimits

0x0c1e,	// (0x000037c6) listscroll_app_pane

0xf4e7,	// (0x0001208f) listscroll_form_pane

0xa405,	// (0x0000cfad) listscroll_gen_pane_ParamLimits

0xa405,	// (0x0000cfad) listscroll_gen_pane

0xf4ef,	// (0x00012097) listscroll_set_pane

0x227a,	// (0x00004e22) main_idle_act_pane

0xf27f,	// (0x00011e27) main_idle_trad_pane

0xf27f,	// (0x00011e27) main_list_empty_pane

0xf45e,	// (0x00012006) main_midp_pane

0xf509,	// (0x000120b1) main_pane_g1_ParamLimits

0xf509,	// (0x000120b1) main_pane_g1

0xa419,	// (0x0000cfc1) popup_ai_message_window_ParamLimits

0xa419,	// (0x0000cfc1) popup_ai_message_window

0xa4ca,	// (0x0000d072) popup_fep_china_uni_window_ParamLimits

0xa4ca,	// (0x0000d072) popup_fep_china_uni_window

0xa524,	// (0x0000d0cc) popup_fep_japan_candidate_window_ParamLimits

0xa524,	// (0x0000d0cc) popup_fep_japan_candidate_window

0xa542,	// (0x0000d0ea) popup_fep_japan_predictive_window_ParamLimits

0xa542,	// (0x0000d0ea) popup_fep_japan_predictive_window

0xa554,	// (0x0000d0fc) popup_find_window

0xa571,	// (0x0000d119) popup_grid_graphic_window_ParamLimits

0xa571,	// (0x0000d119) popup_grid_graphic_window

0x00cb,	// (0x00002c73) popup_large_graphic_colour_window

0xa60f,	// (0x0000d1b7) popup_menu_window_ParamLimits

0xa60f,	// (0x0000d1b7) popup_menu_window

0xa7e1,	// (0x0000d389) popup_note_image_window

0xa7a7,	// (0x0000d34f) popup_note_wait_window_ParamLimits

0xa7a7,	// (0x0000d34f) popup_note_wait_window

0xa7f9,	// (0x0000d3a1) popup_note_window_ParamLimits

0xa7f9,	// (0x0000d3a1) popup_note_window

0xa8a8,	// (0x0000d450) popup_query_code_window_ParamLimits

0xa8a8,	// (0x0000d450) popup_query_code_window

0xa8e2,	// (0x0000d48a) popup_query_data_code_window_ParamLimits

0xa8e2,	// (0x0000d48a) popup_query_data_code_window

0xa8ff,	// (0x0000d4a7) popup_query_data_window_ParamLimits

0xa8ff,	// (0x0000d4a7) popup_query_data_window

0xa981,	// (0x0000d529) popup_query_sat_info_window_ParamLimits

0xa981,	// (0x0000d529) popup_query_sat_info_window

0xaa18,	// (0x0000d5c0) popup_snote_single_graphic_window_ParamLimits

0xaa18,	// (0x0000d5c0) popup_snote_single_graphic_window

0xaa18,	// (0x0000d5c0) popup_snote_single_text_window_ParamLimits

0xaa18,	// (0x0000d5c0) popup_snote_single_text_window

0x039e,	// (0x00002f46) popup_sub_window_general

0xab75,	// (0x0000d71d) popup_window_general_ParamLimits

0xab75,	// (0x0000d71d) popup_window_general

0x04e3,	// (0x0000308b) power_save_pane

0xa257,	// (0x0000cdff) control_pane_g1_ParamLimits

0xa257,	// (0x0000cdff) control_pane_g1

0xa280,	// (0x0000ce28) control_pane_g2_ParamLimits

0xa280,	// (0x0000ce28) control_pane_g2

0xf48a,	// (0x00012032) control_pane_g3_ParamLimits

0xf48a,	// (0x00012032) control_pane_g3

0x0007,

0xf74f,	// (0x000122f7) control_pane_g_ParamLimits

0xf74f,	// (0x000122f7) control_pane_g

0xa2e8,	// (0x0000ce90) control_pane_t1_ParamLimits

0xa2e8,	// (0x0000ce90) control_pane_t1

0xa350,	// (0x0000cef8) control_pane_t2_ParamLimits

0xa350,	// (0x0000cef8) control_pane_t2

0x0002,

0xf760,	// (0x00012308) control_pane_t_ParamLimits

0xf760,	// (0x00012308) control_pane_t

0xa1ce,	// (0x0000cd76) navi_navi_volume_pane_cp1

0xa1d6,	// (0x0000cd7e) status_small_icon_pane

0xf42a,	// (0x00011fd2) status_small_pane_g1_ParamLimits

0xf42a,	// (0x00011fd2) status_small_pane_g1

0xa1de,	// (0x0000cd86) status_small_pane_g2_ParamLimits

0xa1de,	// (0x0000cd86) status_small_pane_g2

0xf46a,	// (0x00012012) status_small_pane_g3_ParamLimits

0xf46a,	// (0x00012012) status_small_pane_g3

0xa1ea,	// (0x0000cd92) status_small_pane_g4_ParamLimits

0xa1ea,	// (0x0000cd92) status_small_pane_g4

0xa1f8,	// (0x0000cda0) status_small_pane_g5_ParamLimits

0xa1f8,	// (0x0000cda0) status_small_pane_g5

0xa206,	// (0x0000cdae) status_small_pane_g6_ParamLimits

0xa206,	// (0x0000cdae) status_small_pane_g6

0x0007,

0xf73e,	// (0x000122e6) status_small_pane_g_ParamLimits

0xf73e,	// (0x000122e6) status_small_pane_g

0xa221,	// (0x0000cdc9) status_small_pane_t1

0xa243,	// (0x0000cdeb) status_small_wait_pane_ParamLimits

0xa243,	// (0x0000cdeb) status_small_wait_pane

0x9eb5,	// (0x0000ca5d) aid_levels_signal_ParamLimits

0x9eb5,	// (0x0000ca5d) aid_levels_signal

0x9ecd,	// (0x0000ca75) signal_pane_g1_ParamLimits

0x9ecd,	// (0x0000ca75) signal_pane_g1

0x9ee8,	// (0x0000ca90) signal_pane_g2_ParamLimits

0x9ee8,	// (0x0000ca90) signal_pane_g2

0x0003,

0xf6cf,	// (0x00012277) signal_pane_g_ParamLimits

0xf6cf,	// (0x00012277) signal_pane_g

0xed0a,	// (0x000118b2) context_pane_g1

0x90ae,	// (0x0000bc56) title_pane_g1

0x90e5,	// (0x0000bc8d) title_pane_t1

0xe153,	// (0x00010cfb) title_pane_t2

0xe179,	// (0x00010d21) title_pane_t3

0x0002,

0xf532,	// (0x000120da) title_pane_t

0xaf35,	// (0x0000dadd) aid_levels_battery_ParamLimits

0xaf35,	// (0x0000dadd) aid_levels_battery

0xaf51,	// (0x0000daf9) battery_pane_g1_ParamLimits

0xaf51,	// (0x0000daf9) battery_pane_g1

0xaf6e,	// (0x0000db16) battery_pane_g2_ParamLimits

0xaf6e,	// (0x0000db16) battery_pane_g2

0x0001,

0xf772,	// (0x0001231a) battery_pane_g_ParamLimits

0xf772,	// (0x0001231a) battery_pane_g

0xb5fb,	// (0x0000e1a3) uni_indicator_pane_g1

0xb611,	// (0x0000e1b9) uni_indicator_pane_g2

0xb627,	// (0x0000e1cf) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x00012484) uni_indicator_pane_g

0xf116,	// (0x00011cbe) navi_icon_pane_ParamLimits

0xf116,	// (0x00011cbe) navi_icon_pane

0xf06b,	// (0x00011c13) navi_midp_pane

0xf132,	// (0x00011cda) navi_navi_pane

0xf13c,	// (0x00011ce4) navi_text_pane_ParamLimits

0xf13c,	// (0x00011ce4) navi_text_pane

0xe0f3,	// (0x00010c9b) status_small_wait_pane_g1

0xe3e4,	// (0x00010f8c) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x0001247f) status_small_wait_pane_g

0xb554,	// (0x0000e0fc) navi_navi_icon_text_pane

0x1c8f,	// (0x00004837) navi_navi_pane_g1_ParamLimits

0x1c8f,	// (0x00004837) navi_navi_pane_g1

0x1ca1,	// (0x00004849) navi_navi_pane_g2_ParamLimits

0x1ca1,	// (0x00004849) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x0001244d) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x0001244d) navi_navi_pane_g

0x1cb3,	// (0x0000485b) navi_navi_tabs_pane

0x1cbc,	// (0x00004864) navi_navi_text_pane

0xb554,	// (0x0000e0fc) navi_navi_volume_pane

0x1c63,	// (0x0000480b) navi_text_pane_t1

0x1c57,	// (0x000047ff) navi_icon_pane_g1

0x1baa,	// (0x00004752) navi_navi_text_pane_t1

0xb540,	// (0x0000e0e8) navi_navi_volume_pane_g1

0x1ba1,	// (0x00004749) volume_small_pane

0x1aff,	// (0x000046a7) navi_navi_icon_text_pane_g1

0xb4a4,	// (0x0000e04c) navi_navi_icon_text_pane_t1

0xf132,	// (0x00011cda) navi_tabs_2_long_pane

0xf132,	// (0x00011cda) navi_tabs_2_pane

0xf132,	// (0x00011cda) navi_tabs_3_long_pane

0xf132,	// (0x00011cda) navi_tabs_3_pane

0xf132,	// (0x00011cda) navi_tabs_4_pane

0x1a5e,	// (0x00004606) tabs_2_active_pane_ParamLimits

0x1a5e,	// (0x00004606) tabs_2_active_pane

0x1a6e,	// (0x00004616) tabs_2_passive_pane_ParamLimits

0x1a6e,	// (0x00004616) tabs_2_passive_pane

0x1a2c,	// (0x000045d4) tabs_3_active_pane_ParamLimits

0x1a2c,	// (0x000045d4) tabs_3_active_pane

0x1a3c,	// (0x000045e4) tabs_3_passive_pane_ParamLimits

0x1a3c,	// (0x000045e4) tabs_3_passive_pane

0x1a4d,	// (0x000045f5) tabs_3_passive_pane_cp_ParamLimits

0x1a4d,	// (0x000045f5) tabs_3_passive_pane_cp

0x19e8,	// (0x00004590) tabs_4_active_pane_ParamLimits

0x19e8,	// (0x00004590) tabs_4_active_pane

0x19f9,	// (0x000045a1) tabs_4_passive_pane_ParamLimits

0x19f9,	// (0x000045a1) tabs_4_passive_pane

0x1a0a,	// (0x000045b2) tabs_4_passive_pane_cp_ParamLimits

0x1a0a,	// (0x000045b2) tabs_4_passive_pane_cp

0x1a1b,	// (0x000045c3) tabs_4_passive_pane_cp2_ParamLimits

0x1a1b,	// (0x000045c3) tabs_4_passive_pane_cp2

0x19c4,	// (0x0000456c) tabs_2_long_active_pane_ParamLimits

0x19c4,	// (0x0000456c) tabs_2_long_active_pane

0x19d6,	// (0x0000457e) tabs_2_long_passive_pane_ParamLimits

0x19d6,	// (0x0000457e) tabs_2_long_passive_pane

0x197f,	// (0x00004527) tabs_3_long_active_pane_ParamLimits

0x197f,	// (0x00004527) tabs_3_long_active_pane

0x1998,	// (0x00004540) tabs_3_long_passive_pane_ParamLimits

0x1998,	// (0x00004540) tabs_3_long_passive_pane

0x19ab,	// (0x00004553) tabs_3_long_passive_pane_cp_ParamLimits

0x19ab,	// (0x00004553) tabs_3_long_passive_pane_cp

0x1925,	// (0x000044cd) volume_small_pane_g1

0x192e,	// (0x000044d6) volume_small_pane_g2

0x1937,	// (0x000044df) volume_small_pane_g3

0x1940,	// (0x000044e8) volume_small_pane_g4

0x1949,	// (0x000044f1) volume_small_pane_g5

0x1952,	// (0x000044fa) volume_small_pane_g6

0x195b,	// (0x00004503) volume_small_pane_g7

0x1964,	// (0x0000450c) volume_small_pane_g8

0x196d,	// (0x00004515) volume_small_pane_g9

0x1976,	// (0x0000451e) volume_small_pane_g10

0x0009,

0xf871,	// (0x00012419) volume_small_pane_g

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp2_ParamLimits

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp2

0x9171,	// (0x0000bd19) tabs_3_active_pane_g1

0x9179,	// (0x0000bd21) tabs_3_active_pane_t1

0xe18b,	// (0x00010d33) bg_passive_tab_pane_cp2_ParamLimits

0xe18b,	// (0x00010d33) bg_passive_tab_pane_cp2

0x9171,	// (0x0000bd19) tabs_3_passive_pane_g1

0x9179,	// (0x0000bd21) tabs_3_passive_pane_t1

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp3_ParamLimits

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp3

0x918b,	// (0x0000bd33) tabs_4_active_pane_g1

0x9193,	// (0x0000bd3b) tabs_4_active_pane_t1

0xe18b,	// (0x00010d33) bg_passive_tab_pane_cp3_ParamLimits

0xe18b,	// (0x00010d33) bg_passive_tab_pane_cp3

0x918b,	// (0x0000bd33) tabs_4_1_passive_pane_g1

0x9193,	// (0x0000bd3b) tabs_4_1_passive_pane_t1

0xf45e,	// (0x00012006) list_highlight_pane_cp2

0xb803,	// (0x0000e3ab) list_set_pane_ParamLimits

0xb803,	// (0x0000e3ab) list_set_pane

0xb89d,	// (0x0000e445) main_pane_set_t1_ParamLimits

0xb89d,	// (0x0000e445) main_pane_set_t1

0xb8bd,	// (0x0000e465) main_pane_set_t2_ParamLimits

0xb8bd,	// (0x0000e465) main_pane_set_t2

0xb8d1,	// (0x0000e479) main_pane_set_t3_ParamLimits

0xb8d1,	// (0x0000e479) main_pane_set_t3

0xb8e3,	// (0x0000e48b) main_pane_set_t4_ParamLimits

0xb8e3,	// (0x0000e48b) main_pane_set_t4

0x0003,

0xf941,	// (0x000124e9) main_pane_set_t_ParamLimits

0xf941,	// (0x000124e9) main_pane_set_t

0xb8f5,	// (0x0000e49d) setting_code_pane

0xb8ff,	// (0x0000e4a7) setting_slider_graphic_pane

0xb8ff,	// (0x0000e4a7) setting_slider_pane

0xb8ff,	// (0x0000e4a7) setting_text_pane

0xb8ff,	// (0x0000e4a7) setting_volume_pane

0x91a5,	// (0x0000bd4d) volume_set_pane

0xe199,	// (0x00010d41) bg_set_opt_pane_cp

0x91ad,	// (0x0000bd55) setting_slider_pane_t1

0x91c6,	// (0x0000bd6e) setting_slider_pane_t2

0x91e0,	// (0x0000bd88) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000120e1) setting_slider_pane_t

0x91f8,	// (0x0000bda0) slider_set_pane

0xe11d,	// (0x00010cc5) bg_set_opt_pane_cp2

0xe1a7,	// (0x00010d4f) setting_slider_graphic_pane_g1

0x920e,	// (0x0000bdb6) setting_slider_graphic_pane_t1

0x921e,	// (0x0000bdc6) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000120e8) setting_slider_graphic_pane_t

0x922e,	// (0x0000bdd6) slider_set_pane_cp

0xe11d,	// (0x00010cc5) input_focus_pane_cp1

0x2261,	// (0x00004e09) list_set_text_pane

0xe0f3,	// (0x00010c9b) setting_text_pane_g1

0xe11d,	// (0x00010cc5) input_focus_pane_cp2

0xe0f3,	// (0x00010c9b) setting_code_pane_g1

0xe1b0,	// (0x00010d58) setting_code_pane_t1

0xe1be,	// (0x00010d66) set_text_pane_t1_ParamLimits

0xe1be,	// (0x00010d66) set_text_pane_t1

0xe681,	// (0x00011229) set_opt_bg_pane_g1

0xe689,	// (0x00011231) set_opt_bg_pane_g2

0xb7b8,	// (0x0000e360) set_opt_bg_pane_g3

0xe699,	// (0x00011241) set_opt_bg_pane_g4

0xe6a1,	// (0x00011249) set_opt_bg_pane_g5

0xe6a9,	// (0x00011251) set_opt_bg_pane_g6

0xb7c2,	// (0x0000e36a) set_opt_bg_pane_g7

0xb7ca,	// (0x0000e372) set_opt_bg_pane_g8

0xb7d4,	// (0x0000e37c) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x000124d6) set_opt_bg_pane_g

0xb753,	// (0x0000e2fb) slider_set_pane_g1

0x21d7,	// (0x00004d7f) slider_set_pane_g2

0x0006,

0xf91f,	// (0x000124c7) slider_set_pane_g

0xb666,	// (0x0000e20e) volume_set_pane_g1

0xb66e,	// (0x0000e216) volume_set_pane_g2

0xb676,	// (0x0000e21e) volume_set_pane_g3

0xb67e,	// (0x0000e226) volume_set_pane_g4

0xb686,	// (0x0000e22e) volume_set_pane_g5

0xb68e,	// (0x0000e236) volume_set_pane_g6

0xb696,	// (0x0000e23e) volume_set_pane_g7

0xb69e,	// (0x0000e246) volume_set_pane_g8

0xb6a6,	// (0x0000e24e) volume_set_pane_g9

0xb6ae,	// (0x0000e256) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x0001249f) volume_set_pane_g

0x9236,	// (0x0000bdde) indicator_pane_ParamLimits

0x9236,	// (0x0000bdde) indicator_pane

0x925e,	// (0x0000be06) main_idle_pane_g2_ParamLimits

0x925e,	// (0x0000be06) main_idle_pane_g2

0x9296,	// (0x0000be3e) main_pane_idle_g1_ParamLimits

0x9296,	// (0x0000be3e) main_pane_idle_g1

0xe1d8,	// (0x00010d80) popup_clock_digital_analogue_window_ParamLimits

0xe1d8,	// (0x00010d80) popup_clock_digital_analogue_window

0x92bd,	// (0x0000be65) soft_indicator_pane_ParamLimits

0x92bd,	// (0x0000be65) soft_indicator_pane

0x92e1,	// (0x0000be89) wallpaper_pane_ParamLimits

0x92e1,	// (0x0000be89) wallpaper_pane

0xe0f3,	// (0x00010c9b) wallpaper_pane_g1

0x92f3,	// (0x0000be9b) indicator_pane_g1_ParamLimits

0x92f3,	// (0x0000be9b) indicator_pane_g1

0x27ed,	// (0x00005395) navi_navi_icon_text_pane_srt_g1

0xe206,	// (0x00010dae) soft_indicator_pane_t1

0xe220,	// (0x00010dc8) aid_ps_area_pane

0x9309,	// (0x0000beb1) aid_ps_clock_pane

0xe231,	// (0x00010dd9) aid_ps_indicator_pane

0xe23d,	// (0x00010de5) indicator_ps_pane_ParamLimits

0xe23d,	// (0x00010de5) indicator_ps_pane

0xe24c,	// (0x00010df4) power_save_pane_g1_ParamLimits

0xe24c,	// (0x00010df4) power_save_pane_g1

0xe258,	// (0x00010e00) power_save_pane_g2_ParamLimits

0xe258,	// (0x00010e00) power_save_pane_g2

0xe0fd,	// (0x00010ca5) aid_navinavi_width_pane

0xe220,	// (0x00010dc8) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000120ed) power_save_pane_g_ParamLimits

0xf545,	// (0x000120ed) power_save_pane_g

0xe266,	// (0x00010e0e) power_save_pane_t1_ParamLimits

0xe266,	// (0x00010e0e) power_save_pane_t1

0x9309,	// (0x0000beb1) aid_ps_clock_pane_ParamLimits

0xe231,	// (0x00010dd9) aid_ps_indicator_pane_ParamLimits

0xe278,	// (0x00010e20) power_save_pane_t4_ParamLimits

0xe278,	// (0x00010e20) power_save_pane_t4

0x0001,

0xf54a,	// (0x000120f2) power_save_pane_t_ParamLimits

0xf54a,	// (0x000120f2) power_save_pane_t

0xe2a2,	// (0x00010e4a) power_save_t3_ParamLimits

0xe2a2,	// (0x00010e4a) power_save_t3

0xe28d,	// (0x00010e35) power_save_t2_ParamLimits

0xe28d,	// (0x00010e35) power_save_t2

0xe2b7,	// (0x00010e5f) indicator_ps_pane_g1

0x9317,	// (0x0000bebf) ai_gene_pane_ParamLimits

0x9317,	// (0x0000bebf) ai_gene_pane

0x932e,	// (0x0000bed6) ai_links_pane_ParamLimits

0x932e,	// (0x0000bed6) ai_links_pane

0x9346,	// (0x0000beee) indicator_pane_cp1_ParamLimits

0x9346,	// (0x0000beee) indicator_pane_cp1

0x9355,	// (0x0000befd) main_pane_idle_g1_cp_ParamLimits

0x9355,	// (0x0000befd) main_pane_idle_g1_cp

0x936d,	// (0x0000bf15) popup_ai_links_title_window

0x9376,	// (0x0000bf1e) soft_indicator_pane_cp1_ParamLimits

0x9376,	// (0x0000bf1e) soft_indicator_pane_cp1

0x1f4e,	// (0x00004af6) ai_links_pane_g1

0x1f57,	// (0x00004aff) grid_ai_links_pane

0xb5f2,	// (0x0000e19a) ai_gene_pane_1

0x1f3c,	// (0x00004ae4) ai_gene_pane_2

0x1f45,	// (0x00004aed) list_highlight_pane_cp4

0xb5ce,	// (0x0000e176) cell_ai_link_pane_ParamLimits

0xb5ce,	// (0x0000e176) cell_ai_link_pane

0x1f0d,	// (0x00004ab5) cell_ai_link_pane_g1

0xe3e4,	// (0x00010f8c) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x0001247a) cell_ai_link_pane_g

0xe11d,	// (0x00010cc5) grid_highlight_cp2

0xe11d,	// (0x00010cc5) bg_popup_sub_pane_cp1

0xe2ce,	// (0x00010e76) popup_ai_links_title_window_t1

0x1e5d,	// (0x00004a05) ai_gene_pane_1_g1_ParamLimits

0x1e5d,	// (0x00004a05) ai_gene_pane_1_g1

0x1e69,	// (0x00004a11) ai_gene_pane_1_g2_ParamLimits

0x1e69,	// (0x00004a11) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x00012470) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x00012470) ai_gene_pane_1_g

0x1e76,	// (0x00004a1e) ai_gene_pane_1_t1_ParamLimits

0x1e76,	// (0x00004a1e) ai_gene_pane_1_t1

0x1eaa,	// (0x00004a52) grid_ai_soft_ind_pane

0x1e48,	// (0x000049f0) ai_gene_pane_2_t1_ParamLimits

0x1e48,	// (0x000049f0) ai_gene_pane_2_t1

0x938a,	// (0x0000bf32) main_pane_empty_t1_ParamLimits

0x938a,	// (0x0000bf32) main_pane_empty_t1

0x93a2,	// (0x0000bf4a) main_pane_empty_t2_ParamLimits

0x93a2,	// (0x0000bf4a) main_pane_empty_t2

0x93b7,	// (0x0000bf5f) main_pane_empty_t3_ParamLimits

0x93b7,	// (0x0000bf5f) main_pane_empty_t3

0x93c9,	// (0x0000bf71) main_pane_empty_t4_ParamLimits

0x93c9,	// (0x0000bf71) main_pane_empty_t4

0x93db,	// (0x0000bf83) main_pane_empty_t5_ParamLimits

0x93db,	// (0x0000bf83) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000120f7) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000120f7) main_pane_empty_t

0xe706,	// (0x000112ae) bg_popup_window_pane_ParamLimits

0xe706,	// (0x000112ae) bg_popup_window_pane

0xb548,	// (0x0000e0f0) find_popup_pane_cp2_ParamLimits

0xb548,	// (0x0000e0f0) find_popup_pane_cp2

0x1bc4,	// (0x0000476c) heading_pane_ParamLimits

0x1bc4,	// (0x0000476c) heading_pane

0xe11d,	// (0x00010cc5) bg_popup_sub_pane

0xb4c1,	// (0x0000e069) bg_popup_window_pane_g1_ParamLimits

0xb4c1,	// (0x0000e069) bg_popup_window_pane_g1

0xb4d0,	// (0x0000e078) bg_popup_window_pane_g2_ParamLimits

0xb4d0,	// (0x0000e078) bg_popup_window_pane_g2

0xb4dc,	// (0x0000e084) bg_popup_window_pane_g3_ParamLimits

0xb4dc,	// (0x0000e084) bg_popup_window_pane_g3

0xb4e8,	// (0x0000e090) bg_popup_window_pane_g4_ParamLimits

0xb4e8,	// (0x0000e090) bg_popup_window_pane_g4

0xb4f7,	// (0x0000e09f) bg_popup_window_pane_g5_ParamLimits

0xb4f7,	// (0x0000e09f) bg_popup_window_pane_g5

0xb507,	// (0x0000e0af) bg_popup_window_pane_g6_ParamLimits

0xb507,	// (0x0000e0af) bg_popup_window_pane_g6

0xb513,	// (0x0000e0bb) bg_popup_window_pane_g7_ParamLimits

0xb513,	// (0x0000e0bb) bg_popup_window_pane_g7

0xb522,	// (0x0000e0ca) bg_popup_window_pane_g8_ParamLimits

0xb522,	// (0x0000e0ca) bg_popup_window_pane_g8

0xb531,	// (0x0000e0d9) bg_popup_window_pane_g9_ParamLimits

0xb531,	// (0x0000e0d9) bg_popup_window_pane_g9

0x1b8d,	// (0x00004735) bg_popup_window_pane_g10_ParamLimits

0x1b8d,	// (0x00004735) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x00012438) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x00012438) bg_popup_window_pane_g

0x1ab6,	// (0x0000465e) bg_popup_heading_pane_ParamLimits

0x1ab6,	// (0x0000465e) bg_popup_heading_pane

0x2730,	// (0x000052d8) tabs_4_passive_pane_cp_srt_ParamLimits

0x2730,	// (0x000052d8) tabs_4_passive_pane_cp_srt

0x2742,	// (0x000052ea) tabs_4_passive_pane_srt_ParamLimits

0x1aca,	// (0x00004672) heading_pane_g2

0x2742,	// (0x000052ea) tabs_4_passive_pane_srt

0x0c1e,	// (0x000037c6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0c1e,	// (0x000037c6) bg_passive_tab_pane_cp3_srt

0x1ad2,	// (0x0000467a) heading_pane_t1_ParamLimits

0x1ad2,	// (0x0000467a) heading_pane_t1

0x1ae9,	// (0x00004691) heading_pane_t2_ParamLimits

0x1ae9,	// (0x00004691) heading_pane_t2

0x0001,

0xf88b,	// (0x00012433) heading_pane_t_ParamLimits

0xf88b,	// (0x00012433) heading_pane_t

0x149a,	// (0x00004042) bg_popup_heading_pane_g1

0x1549,	// (0x000040f1) bg_popup_heading_pane_g2

0x1553,	// (0x000040fb) bg_popup_heading_pane_g3

0x155d,	// (0x00004105) bg_popup_heading_pane_g4

0x1567,	// (0x0000410f) bg_popup_heading_pane_g5

0x1571,	// (0x00004119) bg_popup_heading_pane_g6

0x1579,	// (0x00004121) bg_popup_heading_pane_g7

0x1581,	// (0x00004129) bg_popup_heading_pane_g8

0x158b,	// (0x00004133) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x000123ef) bg_popup_heading_pane_g

0x0a86,	// (0x0000362e) bg_popup_sub_pane_g1

0x0a8e,	// (0x00003636) bg_popup_sub_pane_g2

0x0a96,	// (0x0000363e) bg_popup_sub_pane_g3

0x0a9e,	// (0x00003646) bg_popup_sub_pane_g4

0x0aa6,	// (0x0000364e) bg_popup_sub_pane_g5

0x0aae,	// (0x00003656) bg_popup_sub_pane_g6

0x0ab6,	// (0x0000365e) bg_popup_sub_pane_g7

0x0abe,	// (0x00003666) bg_popup_sub_pane_g8

0x0ac6,	// (0x0000366e) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x000123c9) bg_popup_sub_pane_g

0xe18b,	// (0x00010d33) bg_popup_window_pane_cp5_ParamLimits

0xe18b,	// (0x00010d33) bg_popup_window_pane_cp5

0xe2eb,	// (0x00010e93) popup_note_window_g1_ParamLimits

0xe2eb,	// (0x00010e93) popup_note_window_g1

0xe2f7,	// (0x00010e9f) popup_note_window_t1_ParamLimits

0xe2f7,	// (0x00010e9f) popup_note_window_t1

0xe30d,	// (0x00010eb5) popup_note_window_t2_ParamLimits

0xe30d,	// (0x00010eb5) popup_note_window_t2

0xe323,	// (0x00010ecb) popup_note_window_t3_ParamLimits

0xe323,	// (0x00010ecb) popup_note_window_t3

0xe339,	// (0x00010ee1) popup_note_window_t4_ParamLimits

0xe339,	// (0x00010ee1) popup_note_window_t4

0xe361,	// (0x00010f09) popup_note_window_t5_ParamLimits

0xe361,	// (0x00010f09) popup_note_window_t5

0x0004,

0xf55a,	// (0x00012102) popup_note_window_t_ParamLimits

0xf55a,	// (0x00012102) popup_note_window_t

0xe385,	// (0x00010f2d) bg_popup_window_pane_cp6_ParamLimits

0xe385,	// (0x00010f2d) bg_popup_window_pane_cp6

0x1416,	// (0x00003fbe) popup_note_image_window_g1_ParamLimits

0x1416,	// (0x00003fbe) popup_note_image_window_g1

0xb366,	// (0x0000df0e) popup_note_image_window_g2_ParamLimits

0xb366,	// (0x0000df0e) popup_note_image_window_g2

0x0001,

0xf815,	// (0x000123bd) popup_note_image_window_g_ParamLimits

0xf815,	// (0x000123bd) popup_note_image_window_g

0x143b,	// (0x00003fe3) popup_note_image_window_t1_ParamLimits

0x143b,	// (0x00003fe3) popup_note_image_window_t1

0x1454,	// (0x00003ffc) popup_note_image_window_t2_ParamLimits

0x1454,	// (0x00003ffc) popup_note_image_window_t2

0x146d,	// (0x00004015) popup_note_image_window_t3_ParamLimits

0x146d,	// (0x00004015) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x000123c2) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x000123c2) popup_note_image_window_t

0x12df,	// (0x00003e87) bg_popup_window_pane_cp7_ParamLimits

0x12df,	// (0x00003e87) bg_popup_window_pane_cp7

0x130f,	// (0x00003eb7) popup_note_wait_window_g1_ParamLimits

0x130f,	// (0x00003eb7) popup_note_wait_window_g1

0x131b,	// (0x00003ec3) popup_note_wait_window_g2_ParamLimits

0x131b,	// (0x00003ec3) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x000123ab) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x000123ab) popup_note_wait_window_g

0x1333,	// (0x00003edb) popup_note_wait_window_t1_ParamLimits

0x1333,	// (0x00003edb) popup_note_wait_window_t1

0xb307,	// (0x0000deaf) popup_note_wait_window_t2_ParamLimits

0xb307,	// (0x0000deaf) popup_note_wait_window_t2

0xb324,	// (0x0000decc) popup_note_wait_window_t3_ParamLimits

0xb324,	// (0x0000decc) popup_note_wait_window_t3

0xb337,	// (0x0000dedf) popup_note_wait_window_t4_ParamLimits

0xb337,	// (0x0000dedf) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x000123b2) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x000123b2) popup_note_wait_window_t

0x13af,	// (0x00003f57) wait_bar_pane_ParamLimits

0x13af,	// (0x00003f57) wait_bar_pane

0xe11d,	// (0x00010cc5) wait_anim_pane

0xe11d,	// (0x00010cc5) wait_border_pane

0xe0f3,	// (0x00010c9b) wait_anim_pane_g1

0xe0f3,	// (0x00010c9b) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x00012272) wait_anim_pane_g

0x128b,	// (0x00003e33) wait_border_pane_g1

0x1296,	// (0x00003e3e) wait_border_pane_g2

0x129f,	// (0x00003e47) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x000123a4) wait_border_pane_g

0x10f6,	// (0x00003c9e) bg_popup_window_pane_cp16_ParamLimits

0x10f6,	// (0x00003c9e) bg_popup_window_pane_cp16

0xb2b7,	// (0x0000de5f) indicator_popup_pane_cp4_ParamLimits

0xb2b7,	// (0x0000de5f) indicator_popup_pane_cp4

0x120a,	// (0x00003db2) popup_query_data_window_t1_ParamLimits

0x120a,	// (0x00003db2) popup_query_data_window_t1

0x121c,	// (0x00003dc4) popup_query_data_window_t2_ParamLimits

0x121c,	// (0x00003dc4) popup_query_data_window_t2

0x1235,	// (0x00003ddd) popup_query_data_window_t3_ParamLimits

0x1235,	// (0x00003ddd) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x0001239d) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x0001239d) popup_query_data_window_t

0xb2cb,	// (0x0000de73) query_popup_data_pane_ParamLimits

0xb2cb,	// (0x0000de73) query_popup_data_pane

0xb2df,	// (0x0000de87) query_popup_data_pane_cp1_ParamLimits

0xb2df,	// (0x0000de87) query_popup_data_pane_cp1

0x10f6,	// (0x00003c9e) bg_popup_window_pane_cp10_ParamLimits

0x10f6,	// (0x00003c9e) bg_popup_window_pane_cp10

0xb232,	// (0x0000ddda) indicator_popup_pane_ParamLimits

0xb232,	// (0x0000ddda) indicator_popup_pane

0xb254,	// (0x0000ddfc) popup_query_code_window_t1_ParamLimits

0xb254,	// (0x0000ddfc) popup_query_code_window_t1

0xb26e,	// (0x0000de16) popup_query_code_window_t2_ParamLimits

0xb26e,	// (0x0000de16) popup_query_code_window_t2

0x11ad,	// (0x00003d55) popup_query_code_window_t3_ParamLimits

0x11ad,	// (0x00003d55) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x00012396) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x00012396) popup_query_code_window_t

0x11dc,	// (0x00003d84) query_popup_pane_ParamLimits

0x11dc,	// (0x00003d84) query_popup_pane

0xe385,	// (0x00010f2d) bg_popup_window_pane_cp15_ParamLimits

0xe385,	// (0x00010f2d) bg_popup_window_pane_cp15

0x9413,	// (0x0000bfbb) indicator_popup_pane_cp1_ParamLimits

0x9413,	// (0x0000bfbb) indicator_popup_pane_cp1

0x9426,	// (0x0000bfce) indicator_popup_pane_cp2_ParamLimits

0x9426,	// (0x0000bfce) indicator_popup_pane_cp2

0x9439,	// (0x0000bfe1) popup_query_data_code_window_g1_ParamLimits

0x9439,	// (0x0000bfe1) popup_query_data_code_window_g1

0xe3a3,	// (0x00010f4b) popup_query_data_code_window_t1_ParamLimits

0xe3a3,	// (0x00010f4b) popup_query_data_code_window_t1

0xe3b5,	// (0x00010f5d) popup_query_data_code_window_t2_ParamLimits

0xe3b5,	// (0x00010f5d) popup_query_data_code_window_t2

0x944c,	// (0x0000bff4) popup_query_data_code_window_t3_ParamLimits

0x944c,	// (0x0000bff4) popup_query_data_code_window_t3

0x9462,	// (0x0000c00a) popup_query_data_code_window_t4_ParamLimits

0x9462,	// (0x0000c00a) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001210d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001210d) popup_query_data_code_window_t

0xf0d4,	// (0x00011c7c) list_single_midp_graphic_pane_g3

0x947a,	// (0x0000c022) query_popup_data_pane_cp2_ParamLimits

0x948d,	// (0x0000c035) query_popup_pane_cp2_ParamLimits

0x948d,	// (0x0000c035) query_popup_pane_cp2

0xe11d,	// (0x00010cc5) bg_popup_window_pane_cp11

0x10da,	// (0x00003c82) heading_pane_cp5

0x10e2,	// (0x00003c8a) listscroll_popup_info_pane

0xe11d,	// (0x00010cc5) input_focus_pane_cp3

0xe3c7,	// (0x00010f6f) query_popup_pane_t1

0xe3d5,	// (0x00010f7d) list_popup_info_pane_ParamLimits

0xe3d5,	// (0x00010f7d) list_popup_info_pane

0xe3e4,	// (0x00010f8c) listscroll_popup_info_pane_g1

0xe3ec,	// (0x00010f94) scroll_pane_cp7

0x94a0,	// (0x0000c048) popup_info_list_pane_t1_ParamLimits

0x94a0,	// (0x0000c048) popup_info_list_pane_t1

0x94ba,	// (0x0000c062) popup_info_list_pane_t2_ParamLimits

0x94ba,	// (0x0000c062) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00012116) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00012116) popup_info_list_pane_t

0xe11d,	// (0x00010cc5) bg_popup_window_pane_cp12

0xbb37,	// (0x0000e6df) find_popup_pane

0xe199,	// (0x00010d41) bg_popup_window_pane_cp3

0xe3f6,	// (0x00010f9e) heading_pane_cp3

0xe405,	// (0x00010fad) listscroll_popup_graphic_pane

0xe11d,	// (0x00010cc5) bg_popup_window_pane_cp4

0x9524,	// (0x0000c0cc) heading_pane_cp4

0xe415,	// (0x00010fbd) listscroll_popup_colour_pane

0x952e,	// (0x0000c0d6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x952e,	// (0x0000c0d6) cell_large_graphic_colour_none_popup_pane

0x9542,	// (0x0000c0ea) grid_large_graphic_colour_popup_pane_ParamLimits

0x9542,	// (0x0000c0ea) grid_large_graphic_colour_popup_pane

0x9566,	// (0x0000c10e) listscroll_popup_colour_pane_g1_ParamLimits

0x9566,	// (0x0000c10e) listscroll_popup_colour_pane_g1

0x957d,	// (0x0000c125) listscroll_popup_colour_pane_g2_ParamLimits

0x957d,	// (0x0000c125) listscroll_popup_colour_pane_g2

0x9591,	// (0x0000c139) listscroll_popup_colour_pane_g3_ParamLimits

0x9591,	// (0x0000c139) listscroll_popup_colour_pane_g3

0x95a1,	// (0x0000c149) listscroll_popup_colour_pane_g4_ParamLimits

0x95a1,	// (0x0000c149) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001211b) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001211b) listscroll_popup_colour_pane_g

0xe41d,	// (0x00010fc5) scroll_pane_cp6_ParamLimits

0xe41d,	// (0x00010fc5) scroll_pane_cp6

0x95b1,	// (0x0000c159) cell_large_graphic_colour_popup_pane_ParamLimits

0x95b1,	// (0x0000c159) cell_large_graphic_colour_popup_pane

0x95d0,	// (0x0000c178) cell_large_graphic_colour_none_popup_pane_t1

0xe11d,	// (0x00010cc5) grid_highlight_pane_cp5

0xe42f,	// (0x00010fd7) cell_large_graphic_colour_popup_pane_g1

0xe437,	// (0x00010fdf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00012124) cell_large_graphic_colour_popup_pane_g

0xe43f,	// (0x00010fe7) cell_large_graphic_colour_popup_pane_g2_copy1

0xe448,	// (0x00010ff0) grid_highlight_pane_cp4

0xe450,	// (0x00010ff8) bg_popup_window_pane_cp8_ParamLimits

0xe450,	// (0x00010ff8) bg_popup_window_pane_cp8

0x95df,	// (0x0000c187) popup_snote_single_text_window_g1_ParamLimits

0x95df,	// (0x0000c187) popup_snote_single_text_window_g1

0x95f1,	// (0x0000c199) popup_snote_single_text_window_t1_ParamLimits

0x95f1,	// (0x0000c199) popup_snote_single_text_window_t1

0x9604,	// (0x0000c1ac) popup_snote_single_text_window_t2_ParamLimits

0x9604,	// (0x0000c1ac) popup_snote_single_text_window_t2

0x9617,	// (0x0000c1bf) popup_snote_single_text_window_t3_ParamLimits

0x9617,	// (0x0000c1bf) popup_snote_single_text_window_t3

0x9650,	// (0x0000c1f8) popup_snote_single_text_window_t4_ParamLimits

0x9650,	// (0x0000c1f8) popup_snote_single_text_window_t4

0x9684,	// (0x0000c22c) popup_snote_single_text_window_t5_ParamLimits

0x9684,	// (0x0000c22c) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00012129) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00012129) popup_snote_single_text_window_t

0xe46b,	// (0x00011013) bg_popup_window_pane_cp9_ParamLimits

0xe46b,	// (0x00011013) bg_popup_window_pane_cp9

0x95df,	// (0x0000c187) popup_snote_single_graphic_window_g1_ParamLimits

0x95df,	// (0x0000c187) popup_snote_single_graphic_window_g1

0xe479,	// (0x00011021) popup_snote_single_graphic_window_g2_ParamLimits

0xe479,	// (0x00011021) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00012134) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00012134) popup_snote_single_graphic_window_g

0xe485,	// (0x0001102d) popup_snote_single_graphic_window_t1_ParamLimits

0xe485,	// (0x0001102d) popup_snote_single_graphic_window_t1

0xe498,	// (0x00011040) popup_snote_single_graphic_window_t2_ParamLimits

0xe498,	// (0x00011040) popup_snote_single_graphic_window_t2

0x9617,	// (0x0000c1bf) popup_snote_single_graphic_window_t3_ParamLimits

0x9617,	// (0x0000c1bf) popup_snote_single_graphic_window_t3

0x9650,	// (0x0000c1f8) popup_snote_single_graphic_window_t4_ParamLimits

0x9650,	// (0x0000c1f8) popup_snote_single_graphic_window_t4

0x96b3,	// (0x0000c25b) popup_snote_single_graphic_window_t5_ParamLimits

0x96b3,	// (0x0000c25b) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00012139) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00012139) popup_snote_single_graphic_window_t

0x26ae,	// (0x00005256) grid_graphic_popup_pane_ParamLimits

0x26ae,	// (0x00005256) grid_graphic_popup_pane

0x26d8,	// (0x00005280) listscroll_popup_graphic_pane_g1_ParamLimits

0x26d8,	// (0x00005280) listscroll_popup_graphic_pane_g1

0xba82,	// (0x0000e62a) listscroll_popup_graphic_pane_g2_ParamLimits

0xba82,	// (0x0000e62a) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x00012513) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x00012513) listscroll_popup_graphic_pane_g

0x2700,	// (0x000052a8) scroll_pane_cp5

0xba41,	// (0x0000e5e9) cell_graphic_popup_pane_ParamLimits

0xba41,	// (0x0000e5e9) cell_graphic_popup_pane

0x2625,	// (0x000051cd) cell_graphic_popup_pane_g1

0x262d,	// (0x000051d5) cell_graphic_popup_pane_g2

0xe43f,	// (0x00010fe7) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x0001250c) cell_graphic_popup_pane_g

0x2636,	// (0x000051de) cell_graphic_popup_pane_t2

0xe448,	// (0x00010ff0) grid_highlight_pane_cp3

0xe4bd,	// (0x00011065) list_gen_pane_ParamLimits

0xe4bd,	// (0x00011065) list_gen_pane

0xe4e5,	// (0x0001108d) scroll_pane

0xb9ab,	// (0x0000e553) bg_list_pane_g1_ParamLimits

0xb9ab,	// (0x0000e553) bg_list_pane_g1

0xb9c6,	// (0x0000e56e) bg_list_pane_g2_ParamLimits

0xb9c6,	// (0x0000e56e) bg_list_pane_g2

0xb9d9,	// (0x0000e581) bg_list_pane_g3_ParamLimits

0xb9d9,	// (0x0000e581) bg_list_pane_g3

0xb9eb,	// (0x0000e593) bg_list_pane_g4_ParamLimits

0xb9eb,	// (0x0000e593) bg_list_pane_g4

0xb9fd,	// (0x0000e5a5) bg_list_pane_g5_ParamLimits

0xb9fd,	// (0x0000e5a5) bg_list_pane_g5

0x0004,

0xf959,	// (0x00012501) bg_list_pane_g_ParamLimits

0xf959,	// (0x00012501) bg_list_pane_g

0xb94e,	// (0x0000e4f6) list_double2_graphic_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double2_graphic_large_graphic_pane

0xb94e,	// (0x0000e4f6) list_double2_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double2_graphic_pane

0xb94e,	// (0x0000e4f6) list_double2_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double2_large_graphic_pane

0xb961,	// (0x0000e509) list_double2_pane_ParamLimits

0xb961,	// (0x0000e509) list_double2_pane

0xb94e,	// (0x0000e4f6) list_double_graphic_heading_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double_graphic_heading_pane

0xb94e,	// (0x0000e4f6) list_double_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double_graphic_pane

0xb94e,	// (0x0000e4f6) list_double_heading_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double_heading_pane

0xb94e,	// (0x0000e4f6) list_double_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double_large_graphic_pane

0xb94e,	// (0x0000e4f6) list_double_number_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double_number_pane

0xb94e,	// (0x0000e4f6) list_double_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double_pane

0xb94e,	// (0x0000e4f6) list_double_time_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_double_time_pane

0xb94e,	// (0x0000e4f6) list_setting_number_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_setting_number_pane

0xb94e,	// (0x0000e4f6) list_setting_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_setting_pane

0x9c78,	// (0x0000c820) list_single_2graphic_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_2graphic_pane

0x9c78,	// (0x0000c820) list_single_graphic_heading_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_graphic_heading_pane

0x9c78,	// (0x0000c820) list_single_graphic_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_graphic_pane

0x9c78,	// (0x0000c820) list_single_heading_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_heading_pane

0xb94e,	// (0x0000e4f6) list_single_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4f6) list_single_large_graphic_pane

0x9c78,	// (0x0000c820) list_single_number_heading_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_number_heading_pane

0x9c78,	// (0x0000c820) list_single_number_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_number_pane

0x9c78,	// (0x0000c820) list_single_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_pane

0xe11d,	// (0x00010cc5) list_highlight_pane_cp1

0xf185,	// (0x00011d2d) list_single_pane_g1_ParamLimits

0xf185,	// (0x00011d2d) list_single_pane_g1

0x0920,	// (0x000034c8) list_single_pane_g2_ParamLimits

0x0920,	// (0x000034c8) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001214b) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001214b) list_single_pane_g

0x47d6,	// (0x0000737e) list_single_pane_t1_ParamLimits

0x47d6,	// (0x0000737e) list_single_pane_t1

0xf185,	// (0x00011d2d) list_single_number_pane_g1_ParamLimits

0xf185,	// (0x00011d2d) list_single_number_pane_g1

0x0920,	// (0x000034c8) list_single_number_pane_g2_ParamLimits

0x0920,	// (0x000034c8) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001214b) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001214b) list_single_number_pane_g

0x0a14,	// (0x000035bc) list_single_number_pane_t1_ParamLimits

0x0a14,	// (0x000035bc) list_single_number_pane_t1

0xb6ee,	// (0x0000e296) list_single_number_pane_t2_ParamLimits

0xb6ee,	// (0x0000e296) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x000124c2) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x000124c2) list_single_number_pane_t

0x0a08,	// (0x000035b0) list_single_graphic_pane_g1_ParamLimits

0x0a08,	// (0x000035b0) list_single_graphic_pane_g1

0xf185,	// (0x00011d2d) list_single_graphic_pane_g2_ParamLimits

0xf185,	// (0x00011d2d) list_single_graphic_pane_g2

0x0920,	// (0x000034c8) list_single_graphic_pane_g3_ParamLimits

0x0920,	// (0x000034c8) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00012144) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00012144) list_single_graphic_pane_g

0x0a14,	// (0x000035bc) list_single_graphic_pane_t1_ParamLimits

0x0a14,	// (0x000035bc) list_single_graphic_pane_t1

0xf185,	// (0x00011d2d) list_single_heading_pane_g1_ParamLimits

0xf185,	// (0x00011d2d) list_single_heading_pane_g1

0x0920,	// (0x000034c8) list_single_heading_pane_g2_ParamLimits

0x0920,	// (0x000034c8) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001214b) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001214b) list_single_heading_pane_g

0x2e1d,	// (0x000059c5) list_single_heading_pane_t1_ParamLimits

0x2e1d,	// (0x000059c5) list_single_heading_pane_t1

0x96ec,	// (0x0000c294) list_single_heading_pane_t2_ParamLimits

0x96ec,	// (0x0000c294) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00012150) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00012150) list_single_heading_pane_t

0xf185,	// (0x00011d2d) list_single_number_heading_pane_g1_ParamLimits

0xf185,	// (0x00011d2d) list_single_number_heading_pane_g1

0x0920,	// (0x000034c8) list_single_number_heading_pane_g2_ParamLimits

0x0920,	// (0x000034c8) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001214b) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001214b) list_single_number_heading_pane_g

0x2e1d,	// (0x000059c5) list_single_number_heading_pane_t1_ParamLimits

0x2e1d,	// (0x000059c5) list_single_number_heading_pane_t1

0x96fe,	// (0x0000c2a6) list_single_number_heading_pane_t2_ParamLimits

0x96fe,	// (0x0000c2a6) list_single_number_heading_pane_t2

0x9710,	// (0x0000c2b8) list_single_number_heading_pane_t3_ParamLimits

0x9710,	// (0x0000c2b8) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00012155) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00012155) list_single_number_heading_pane_t

0x9722,	// (0x0000c2ca) list_single_graphic_heading_pane_g1_ParamLimits

0x9722,	// (0x0000c2ca) list_single_graphic_heading_pane_g1

0x972e,	// (0x0000c2d6) list_single_graphic_heading_pane_g4_ParamLimits

0x972e,	// (0x0000c2d6) list_single_graphic_heading_pane_g4

0x0920,	// (0x000034c8) list_single_graphic_heading_pane_g5_ParamLimits

0x0920,	// (0x000034c8) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001215c) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001215c) list_single_graphic_heading_pane_g

0x2e1d,	// (0x000059c5) list_single_graphic_heading_pane_t1_ParamLimits

0x2e1d,	// (0x000059c5) list_single_graphic_heading_pane_t1

0x973f,	// (0x0000c2e7) list_single_graphic_heading_pane_t2_ParamLimits

0x973f,	// (0x0000c2e7) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00012163) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00012163) list_single_graphic_heading_pane_t

0x2e91,	// (0x00005a39) list_single_large_graphic_pane_g1_ParamLimits

0x2e91,	// (0x00005a39) list_single_large_graphic_pane_g1

0x2e9d,	// (0x00005a45) list_single_large_graphic_pane_g2_ParamLimits

0x2e9d,	// (0x00005a45) list_single_large_graphic_pane_g2

0x2ea9,	// (0x00005a51) list_single_large_graphic_pane_g3_ParamLimits

0x2ea9,	// (0x00005a51) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00012168) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00012168) list_single_large_graphic_pane_g

0x1296,	// (0x00003e3e) wait_border_pane_g2_copy1

0x9751,	// (0x0000c2f9) list_single_large_graphic_pane_g4_cp2

0x2eb5,	// (0x00005a5d) list_single_large_graphic_pane_t1_ParamLimits

0x2eb5,	// (0x00005a5d) list_single_large_graphic_pane_t1

0xeda5,	// (0x0001194d) list_double_pane_g1_ParamLimits

0xeda5,	// (0x0001194d) list_double_pane_g1

0xe519,	// (0x000110c1) list_double_pane_g2_ParamLimits

0xe519,	// (0x000110c1) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001216f) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001216f) list_double_pane_g

0x9759,	// (0x0000c301) list_double_pane_t1_ParamLimits

0x9759,	// (0x0000c301) list_double_pane_t1

0x976f,	// (0x0000c317) list_double_pane_t2_ParamLimits

0x976f,	// (0x0000c317) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00012174) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00012174) list_double_pane_t

0x9781,	// (0x0000c329) list_double2_pane_g1_ParamLimits

0x9781,	// (0x0000c329) list_double2_pane_g1

0x9792,	// (0x0000c33a) list_double2_pane_g2_ParamLimits

0x9792,	// (0x0000c33a) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00012179) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00012179) list_double2_pane_g

0x979e,	// (0x0000c346) list_double2_pane_t1_ParamLimits

0x979e,	// (0x0000c346) list_double2_pane_t1

0x97b4,	// (0x0000c35c) list_double2_pane_t2_ParamLimits

0x97b4,	// (0x0000c35c) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001217e) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001217e) list_double2_pane_t

0xeda5,	// (0x0001194d) list_double_number_pane_g1_ParamLimits

0xeda5,	// (0x0001194d) list_double_number_pane_g1

0xe519,	// (0x000110c1) list_double_number_pane_g2_ParamLimits

0xe519,	// (0x000110c1) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001216f) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001216f) list_double_number_pane_g

0x97c6,	// (0x0000c36e) list_double_number_pane_t1_ParamLimits

0x97c6,	// (0x0000c36e) list_double_number_pane_t1

0x97d8,	// (0x0000c380) list_double_number_pane_t2_ParamLimits

0x97d8,	// (0x0000c380) list_double_number_pane_t2

0x97ee,	// (0x0000c396) list_double_number_pane_t3_ParamLimits

0x97ee,	// (0x0000c396) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00012183) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00012183) list_double_number_pane_t

0x9800,	// (0x0000c3a8) list_double_graphic_pane_g1_ParamLimits

0x9800,	// (0x0000c3a8) list_double_graphic_pane_g1

0x980c,	// (0x0000c3b4) list_double_graphic_pane_g2_ParamLimits

0x980c,	// (0x0000c3b4) list_double_graphic_pane_g2

0x981b,	// (0x0000c3c3) list_double_graphic_pane_g3_ParamLimits

0x981b,	// (0x0000c3c3) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001218a) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001218a) list_double_graphic_pane_g

0x9759,	// (0x0000c301) list_double_graphic_pane_t1_ParamLimits

0x9759,	// (0x0000c301) list_double_graphic_pane_t1

0x976f,	// (0x0000c317) list_double_graphic_pane_t2_ParamLimits

0x976f,	// (0x0000c317) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x00012174) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x00012174) list_double_graphic_pane_t

0x9833,	// (0x0000c3db) list_double2_graphic_pane_g1_ParamLimits

0x9833,	// (0x0000c3db) list_double2_graphic_pane_g1

0x983f,	// (0x0000c3e7) list_double2_graphic_pane_g2_ParamLimits

0x983f,	// (0x0000c3e7) list_double2_graphic_pane_g2

0x984b,	// (0x0000c3f3) list_double2_graphic_pane_g3_ParamLimits

0x984b,	// (0x0000c3f3) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00012193) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00012193) list_double2_graphic_pane_g

0x9857,	// (0x0000c3ff) list_double2_graphic_pane_t1_ParamLimits

0x9857,	// (0x0000c3ff) list_double2_graphic_pane_t1

0x986d,	// (0x0000c415) list_double2_graphic_pane_t2_ParamLimits

0x986d,	// (0x0000c415) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x0001219a) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x0001219a) list_double2_graphic_pane_t

0x987f,	// (0x0000c427) list_double_large_graphic_pane_g1_ParamLimits

0x987f,	// (0x0000c427) list_double_large_graphic_pane_g1

0x989e,	// (0x0000c446) list_double_large_graphic_pane_g2_ParamLimits

0x989e,	// (0x0000c446) list_double_large_graphic_pane_g2

0xe519,	// (0x000110c1) list_double_large_graphic_pane_g3_ParamLimits

0xe519,	// (0x000110c1) list_double_large_graphic_pane_g3

0x98af,	// (0x0000c457) list_double_large_graphic_pane_g4_ParamLimits

0x98af,	// (0x0000c457) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x0001219f) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x0001219f) list_double_large_graphic_pane_g

0x98c1,	// (0x0000c469) list_double_large_graphic_pane_t1_ParamLimits

0x98c1,	// (0x0000c469) list_double_large_graphic_pane_t1

0x98da,	// (0x0000c482) list_double_large_graphic_pane_t2_ParamLimits

0x98da,	// (0x0000c482) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x000121aa) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x000121aa) list_double_large_graphic_pane_t

0x98ec,	// (0x0000c494) list_double2_large_graphic_pane_g1_ParamLimits

0x98ec,	// (0x0000c494) list_double2_large_graphic_pane_g1

0x98f8,	// (0x0000c4a0) list_double2_large_graphic_pane_g2_ParamLimits

0x98f8,	// (0x0000c4a0) list_double2_large_graphic_pane_g2

0x984b,	// (0x0000c3f3) list_double2_large_graphic_pane_g3_ParamLimits

0x984b,	// (0x0000c3f3) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x000121af) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x000121af) list_double2_large_graphic_pane_g

0x9857,	// (0x0000c3ff) list_double2_large_graphic_pane_t1_ParamLimits

0x9857,	// (0x0000c3ff) list_double2_large_graphic_pane_t1

0x986d,	// (0x0000c415) list_double2_large_graphic_pane_t2_ParamLimits

0x986d,	// (0x0000c415) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x0001219a) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x0001219a) list_double2_large_graphic_pane_t

0x9909,	// (0x0000c4b1) list_double_heading_pane_g1_ParamLimits

0x9909,	// (0x0000c4b1) list_double_heading_pane_g1

0x991a,	// (0x0000c4c2) list_double_heading_pane_g2_ParamLimits

0x991a,	// (0x0000c4c2) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x000121b6) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x000121b6) list_double_heading_pane_g

0x9926,	// (0x0000c4ce) list_double_heading_pane_t1_ParamLimits

0x9926,	// (0x0000c4ce) list_double_heading_pane_t1

0x986d,	// (0x0000c415) list_double_heading_pane_t2_ParamLimits

0x986d,	// (0x0000c415) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x000121bb) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x000121bb) list_double_heading_pane_t

0x993c,	// (0x0000c4e4) list_double_graphic_heading_pane_g1_ParamLimits

0x993c,	// (0x0000c4e4) list_double_graphic_heading_pane_g1

0x9909,	// (0x0000c4b1) list_double_graphic_heading_pane_g2_ParamLimits

0x9909,	// (0x0000c4b1) list_double_graphic_heading_pane_g2

0x991a,	// (0x0000c4c2) list_double_graphic_heading_pane_g3_ParamLimits

0x991a,	// (0x0000c4c2) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x000121c0) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x000121c0) list_double_graphic_heading_pane_g

0x9926,	// (0x0000c4ce) list_double_graphic_heading_pane_t1_ParamLimits

0x9926,	// (0x0000c4ce) list_double_graphic_heading_pane_t1

0x986d,	// (0x0000c415) list_double_graphic_heading_pane_t2_ParamLimits

0x986d,	// (0x0000c415) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x000121bb) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x000121bb) list_double_graphic_heading_pane_t

0x989e,	// (0x0000c446) list_double_time_pane_g1_ParamLimits

0x989e,	// (0x0000c446) list_double_time_pane_g1

0xe519,	// (0x000110c1) list_double_time_pane_g2_ParamLimits

0xe519,	// (0x000110c1) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x000121c7) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x000121c7) list_double_time_pane_g

0x9948,	// (0x0000c4f0) list_double_time_pane_t1_ParamLimits

0x9948,	// (0x0000c4f0) list_double_time_pane_t1

0x995e,	// (0x0000c506) list_double_time_pane_t2_ParamLimits

0x995e,	// (0x0000c506) list_double_time_pane_t2

0x9970,	// (0x0000c518) list_double_time_pane_t3_ParamLimits

0x9970,	// (0x0000c518) list_double_time_pane_t3

0x9982,	// (0x0000c52a) list_double_time_pane_t4_ParamLimits

0x9982,	// (0x0000c52a) list_double_time_pane_t4

0x0003,

0xf624,	// (0x000121cc) list_double_time_pane_t_ParamLimits

0xf624,	// (0x000121cc) list_double_time_pane_t

0x983f,	// (0x0000c3e7) list_setting_pane_g1_ParamLimits

0x983f,	// (0x0000c3e7) list_setting_pane_g1

0x984b,	// (0x0000c3f3) list_setting_pane_g2_ParamLimits

0x984b,	// (0x0000c3f3) list_setting_pane_g2

0x0001,

0xf62d,	// (0x000121d5) list_setting_pane_g_ParamLimits

0xf62d,	// (0x000121d5) list_setting_pane_g

0x9994,	// (0x0000c53c) list_setting_pane_t1_ParamLimits

0x9994,	// (0x0000c53c) list_setting_pane_t1

0x99ab,	// (0x0000c553) list_setting_pane_t2_ParamLimits

0x99ab,	// (0x0000c553) list_setting_pane_t2

0x0002,

0xf632,	// (0x000121da) list_setting_pane_t_ParamLimits

0xf632,	// (0x000121da) list_setting_pane_t

0x99ea,	// (0x0000c592) set_value_pane_cp_ParamLimits

0x99ea,	// (0x0000c592) set_value_pane_cp

0x983f,	// (0x0000c3e7) list_setting_number_pane_g1_ParamLimits

0x983f,	// (0x0000c3e7) list_setting_number_pane_g1

0x984b,	// (0x0000c3f3) list_setting_number_pane_g2_ParamLimits

0x984b,	// (0x0000c3f3) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x000121d5) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x000121d5) list_setting_number_pane_g

0x99f6,	// (0x0000c59e) list_setting_number_pane_t1_ParamLimits

0x99f6,	// (0x0000c59e) list_setting_number_pane_t1

0x9a0a,	// (0x0000c5b2) list_setting_number_pane_t2_ParamLimits

0x9a0a,	// (0x0000c5b2) list_setting_number_pane_t2

0x9a21,	// (0x0000c5c9) list_setting_number_pane_t3_ParamLimits

0x9a21,	// (0x0000c5c9) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x000121e1) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x000121e1) list_setting_number_pane_t

0x99ea,	// (0x0000c592) set_value_pane_ParamLimits

0x99ea,	// (0x0000c592) set_value_pane

0xe53a,	// (0x000110e2) bg_set_opt_pane_ParamLimits

0xe53a,	// (0x000110e2) bg_set_opt_pane

0xe55b,	// (0x00011103) set_value_pane_t1

0xe569,	// (0x00011111) slider_set_pane_cp3

0x9a64,	// (0x0000c60c) volume_small_pane_cp

0xe572,	// (0x0001111a) list_form_gen_pane

0xe57b,	// (0x00011123) scroll_pane_cp8

0x9a6d,	// (0x0000c615) form_field_data_pane_ParamLimits

0x9a6d,	// (0x0000c615) form_field_data_pane

0x9a84,	// (0x0000c62c) form_field_data_wide_pane_ParamLimits

0x9a84,	// (0x0000c62c) form_field_data_wide_pane

0x9aa4,	// (0x0000c64c) form_field_popup_pane_ParamLimits

0x9aa4,	// (0x0000c64c) form_field_popup_pane

0x9ac4,	// (0x0000c66c) form_field_popup_wide_pane_ParamLimits

0x9ac4,	// (0x0000c66c) form_field_popup_wide_pane

0xe59c,	// (0x00011144) form_field_slider_pane_ParamLimits

0xe59c,	// (0x00011144) form_field_slider_pane

0x9adb,	// (0x0000c683) form_field_slider_wide_pane_ParamLimits

0x9adb,	// (0x0000c683) form_field_slider_wide_pane

0xe5af,	// (0x00011157) data_form_pane

0x9af8,	// (0x0000c6a0) form_field_data_pane_t1

0xe5bb,	// (0x00011163) input_focus_pane

0xe5c9,	// (0x00011171) data_form_wide_pane

0xe606,	// (0x000111ae) form_field_data_wide_pane_t1

0xe45d,	// (0x00011005) input_focus_pane_cp6

0x9b12,	// (0x0000c6ba) form_field_popup_pane_t1

0xe5bb,	// (0x00011163) input_focus_pane_cp7

0xe628,	// (0x000111d0) list_form_pane

0xe63c,	// (0x000111e4) form_field_popup_wide_pane_t1

0xe5bb,	// (0x00011163) input_focus_pane_cp8

0xe651,	// (0x000111f9) list_form_wide_pane

0x9b34,	// (0x0000c6dc) form_field_slider_pane_t1_ParamLimits

0x9b34,	// (0x0000c6dc) form_field_slider_pane_t1

0x9b4c,	// (0x0000c6f4) form_field_slider_pane_t2_ParamLimits

0x9b4c,	// (0x0000c6f4) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x000121f1) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x000121f1) form_field_slider_pane_t

0xe18b,	// (0x00010d33) input_focus_pane_cp9_ParamLimits

0xe18b,	// (0x00010d33) input_focus_pane_cp9

0x9b61,	// (0x0000c709) slider_cont_pane_ParamLimits

0x9b61,	// (0x0000c709) slider_cont_pane

0xe65d,	// (0x00011205) form_field_slider_wide_pane_t1_ParamLimits

0xe65d,	// (0x00011205) form_field_slider_wide_pane_t1

0xe66f,	// (0x00011217) form_field_slider_wide_pane_t2_ParamLimits

0xe66f,	// (0x00011217) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x000121f6) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x000121f6) form_field_slider_wide_pane_t

0xe18b,	// (0x00010d33) input_focus_pane_cp10_ParamLimits

0xe18b,	// (0x00010d33) input_focus_pane_cp10

0x9b75,	// (0x0000c71d) slider_cont_pane_cp1_ParamLimits

0x9b75,	// (0x0000c71d) slider_cont_pane_cp1

0x9b89,	// (0x0000c731) slider_form_pane_cp

0xe681,	// (0x00011229) input_focus_pane_g1

0xe689,	// (0x00011231) input_focus_pane_g2

0xe691,	// (0x00011239) input_focus_pane_g3

0xe699,	// (0x00011241) input_focus_pane_g4

0xe6a1,	// (0x00011249) input_focus_pane_g5

0xe6a9,	// (0x00011251) input_focus_pane_g6

0xe6b1,	// (0x00011259) input_focus_pane_g7

0xe6b9,	// (0x00011261) input_focus_pane_g8

0xe6c1,	// (0x00011269) input_focus_pane_g9

0xe0f3,	// (0x00010c9b) input_focus_pane_g10

0x0009,

0xf653,	// (0x000121fb) input_focus_pane_g

0x129f,	// (0x00003e47) wait_border_pane_g3_copy1

0x9b91,	// (0x0000c739) data_form_pane_t1

0xe0f3,	// (0x00010c9b) wait_anim_pane_g1_copy1

0xb932,	// (0x0000e4da) data_form_wide_pane_t1

0x9bab,	// (0x0000c753) list_form_graphic_pane_cp_ParamLimits

0x9bab,	// (0x0000c753) list_form_graphic_pane_cp

0x23d2,	// (0x00004f7a) slider_form_pane_g1

0x23db,	// (0x00004f83) slider_form_pane_g2

0x0006,

0xf94a,	// (0x000124f2) slider_form_pane_g

0x9bbd,	// (0x0000c765) list_form_graphic_pane_ParamLimits

0x9bbd,	// (0x0000c765) list_form_graphic_pane

0x9bd0,	// (0x0000c778) list_form_graphic_pane_g1

0x9bd8,	// (0x0000c780) list_form_graphic_pane_t1_ParamLimits

0x9bd8,	// (0x0000c780) list_form_graphic_pane_t1

0xe199,	// (0x00010d41) list_highlight_pane_cp5_ParamLimits

0xe199,	// (0x00010d41) list_highlight_pane_cp5

0x9bed,	// (0x0000c795) find_pane_g1

0xe6c9,	// (0x00011271) input_find_pane

0x9bf6,	// (0x0000c79e) input_find_pane_g1_ParamLimits

0x9bf6,	// (0x0000c79e) input_find_pane_g1

0x9c02,	// (0x0000c7aa) input_find_pane_t1_ParamLimits

0x9c02,	// (0x0000c7aa) input_find_pane_t1

0x9c17,	// (0x0000c7bf) input_find_pane_t2_ParamLimits

0x9c17,	// (0x0000c7bf) input_find_pane_t2

0x0001,

0xf668,	// (0x00012210) input_find_pane_t_ParamLimits

0xf668,	// (0x00012210) input_find_pane_t

0xe6d2,	// (0x0001127a) input_focus_pane_cp5_ParamLimits

0xe6d2,	// (0x0001127a) input_focus_pane_cp5

0xe6e5,	// (0x0001128d) bg_popup_window_pane_cp2_ParamLimits

0xe6e5,	// (0x0001128d) bg_popup_window_pane_cp2

0xe6f2,	// (0x0001129a) listscroll_menu_pane_ParamLimits

0xe6f2,	// (0x0001129a) listscroll_menu_pane

0x9c38,	// (0x0000c7e0) popup_submenu_window_ParamLimits

0x9c38,	// (0x0000c7e0) popup_submenu_window

0xe6fe,	// (0x000112a6) find_popup_pane_g1

0x9c60,	// (0x0000c808) input_popup_find_pane_cp

0xe706,	// (0x000112ae) input_focus_pane_cp4_ParamLimits

0xe706,	// (0x000112ae) input_focus_pane_cp4

0xe714,	// (0x000112bc) input_popup_find_pane_t1_ParamLimits

0xe714,	// (0x000112bc) input_popup_find_pane_t1

0xe11d,	// (0x00010cc5) bg_popup_sub_pane_cp

0xe742,	// (0x000112ea) listscroll_popup_sub_pane

0xe74a,	// (0x000112f2) list_submenu_pane_ParamLimits

0xe74a,	// (0x000112f2) list_submenu_pane

0xe75b,	// (0x00011303) scroll_pane_cp4

0x9c78,	// (0x0000c820) list_single_popup_submenu_pane_ParamLimits

0x9c78,	// (0x0000c820) list_single_popup_submenu_pane

0x9c8c,	// (0x0000c834) list_single_popup_submenu_pane_g1

0x9c94,	// (0x0000c83c) list_single_popup_submenu_pane_t1_ParamLimits

0x9c94,	// (0x0000c83c) list_single_popup_submenu_pane_t1

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp1_ParamLimits

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp1

0xe763,	// (0x0001130b) tabs_2_active_pane_g1

0x9ca9,	// (0x0000c851) tabs_2_active_pane_t1

0xe18b,	// (0x00010d33) bg_passive_tab_pane_cp1_ParamLimits

0xe18b,	// (0x00010d33) bg_passive_tab_pane_cp1

0xe763,	// (0x0001130b) tabs_2_passive_pane_g1

0x9ca9,	// (0x0000c851) tabs_2_passive_pane_t1

0xe199,	// (0x00010d41) bg_active_tab_pane_cp4

0x9cbb,	// (0x0000c863) tabs_2_long_active_pane_t1

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp4

0x0af3,	// (0x0000369b) list_single_midp_graphic_pane_g4_ParamLimits

0xe199,	// (0x00010d41) bg_active_tab_pane_cp5

0x9cce,	// (0x0000c876) tabs_3_long_active_pane_t1

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp5

0x0af3,	// (0x0000369b) list_single_midp_graphic_pane_g4

0xe199,	// (0x00010d41) bg_popup_window_pane_cp13_ParamLimits

0xe199,	// (0x00010d41) bg_popup_window_pane_cp13

0xe76b,	// (0x00011313) listscroll_popup_fast_pane_ParamLimits

0xe76b,	// (0x00011313) listscroll_popup_fast_pane

0xe777,	// (0x0001131f) grid_popup_fast_pane_ParamLimits

0xe777,	// (0x0001131f) grid_popup_fast_pane

0xe789,	// (0x00011331) scroll_pane_cp9_ParamLimits

0xe789,	// (0x00011331) scroll_pane_cp9

0x47d6,	// (0x0000737e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x47d6,	// (0x0000737e) list_single_graphic_hl_pane_t1_cp2

0xe79c,	// (0x00011344) input_focus_pane_cp20_ParamLimits

0xe79c,	// (0x00011344) input_focus_pane_cp20

0xe7aa,	// (0x00011352) query_popup_data_pane_t1_ParamLimits

0xe7aa,	// (0x00011352) query_popup_data_pane_t1

0xe7bd,	// (0x00011365) query_popup_data_pane_t2_ParamLimits

0xe7bd,	// (0x00011365) query_popup_data_pane_t2

0xe803,	// (0x000113ab) query_popup_data_pane_t3_ParamLimits

0xe803,	// (0x000113ab) query_popup_data_pane_t3

0xe864,	// (0x0001140c) query_popup_data_pane_t4_ParamLimits

0xe864,	// (0x0001140c) query_popup_data_pane_t4

0xe8a0,	// (0x00011448) query_popup_data_pane_t5_ParamLimits

0xe8a0,	// (0x00011448) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x00012215) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x00012215) query_popup_data_pane_t

0xe681,	// (0x00011229) bg_set_opt_pane_g1

0xe689,	// (0x00011231) bg_set_opt_pane_g2

0xe691,	// (0x00011239) bg_set_opt_pane_g3

0xe699,	// (0x00011241) bg_set_opt_pane_g4

0xe6a1,	// (0x00011249) bg_set_opt_pane_g5

0xe6a9,	// (0x00011251) bg_set_opt_pane_g6

0xe6b1,	// (0x00011259) bg_set_opt_pane_g7

0xe6b9,	// (0x00011261) bg_set_opt_pane_g8

0xe6c1,	// (0x00011269) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x00012220) bg_set_opt_pane_g

0xee7d,	// (0x00011a25) control_top_pane_stacon_ParamLimits

0xee7d,	// (0x00011a25) control_top_pane_stacon

0xeed0,	// (0x00011a78) signal_pane_stacon_ParamLimits

0xeed0,	// (0x00011a78) signal_pane_stacon

0xeef5,	// (0x00011a9d) stacon_top_pane_g1_ParamLimits

0xeef5,	// (0x00011a9d) stacon_top_pane_g1

0xef17,	// (0x00011abf) title_pane_stacon_ParamLimits

0xef17,	// (0x00011abf) title_pane_stacon

0xef41,	// (0x00011ae9) uni_indicator_pane_stacon_ParamLimits

0xef41,	// (0x00011ae9) uni_indicator_pane_stacon

0xef56,	// (0x00011afe) battery_pane_stacon_ParamLimits

0xef56,	// (0x00011afe) battery_pane_stacon

0xef9a,	// (0x00011b42) control_bottom_pane_stacon_ParamLimits

0xef9a,	// (0x00011b42) control_bottom_pane_stacon

0xefbd,	// (0x00011b65) navi_pane_stacon_ParamLimits

0xefbd,	// (0x00011b65) navi_pane_stacon

0xefe0,	// (0x00011b88) stacon_bottom_pane_g1_ParamLimits

0xefe0,	// (0x00011b88) stacon_bottom_pane_g1

0xe8d7,	// (0x0001147f) aid_levels_signal_lsc_ParamLimits

0xe8d7,	// (0x0001147f) aid_levels_signal_lsc

0xe8ed,	// (0x00011495) signal_pane_stacon_g1_ParamLimits

0xe8ed,	// (0x00011495) signal_pane_stacon_g1

0xe901,	// (0x000114a9) signal_pane_stacon_g2_ParamLimits

0xe901,	// (0x000114a9) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x00012233) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x00012233) signal_pane_stacon_g

0xe943,	// (0x000114eb) title_pane_stacon_t1_ParamLimits

0xe943,	// (0x000114eb) title_pane_stacon_t1

0xe968,	// (0x00011510) uni_indicator_pane_stacon_g1

0xe972,	// (0x0001151a) uni_indicator_pane_stacon_g2

0xe97c,	// (0x00011524) uni_indicator_pane_stacon_g3

0xe986,	// (0x0001152e) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x0001223f) uni_indicator_pane_stacon_g

0xe990,	// (0x00011538) control_top_pane_stacon_g1

0xe998,	// (0x00011540) control_top_pane_stacon_t1_ParamLimits

0xe998,	// (0x00011540) control_top_pane_stacon_t1

0xe9cf,	// (0x00011577) aid_levels_battery_lsc_ParamLimits

0xe9cf,	// (0x00011577) aid_levels_battery_lsc

0xe9e6,	// (0x0001158e) battery_pane_stacon_g1_ParamLimits

0xe9e6,	// (0x0001158e) battery_pane_stacon_g1

0xe9f9,	// (0x000115a1) battery_pane_stacon_g2_ParamLimits

0xe9f9,	// (0x000115a1) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x00012248) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x00012248) battery_pane_stacon_g

0xea37,	// (0x000115df) navi_icon_pane_stacon

0xea4b,	// (0x000115f3) navi_navi_pane_stacon

0xea37,	// (0x000115df) navi_text_pane_stacon

0xe990,	// (0x00011538) control_bottom_pane_stacon_g1

0xea5f,	// (0x00011607) control_bottom_pane_stacon_t1_ParamLimits

0xea5f,	// (0x00011607) control_bottom_pane_stacon_t1

0x9cfa,	// (0x0000c8a2) grid_app_pane_ParamLimits

0x9cfa,	// (0x0000c8a2) grid_app_pane

0x9d32,	// (0x0000c8da) scroll_pane_cp15_ParamLimits

0x9d32,	// (0x0000c8da) scroll_pane_cp15

0x9d47,	// (0x0000c8ef) cell_app_pane_ParamLimits

0x9d47,	// (0x0000c8ef) cell_app_pane

0x9d8c,	// (0x0000c934) cell_app_pane_g1_ParamLimits

0x9d8c,	// (0x0000c934) cell_app_pane_g1

0xeab0,	// (0x00011658) cell_app_pane_g2_ParamLimits

0xeab0,	// (0x00011658) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x0001224d) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x0001224d) cell_app_pane_g

0x9db0,	// (0x0000c958) cell_app_pane_t1_ParamLimits

0x9db0,	// (0x0000c958) cell_app_pane_t1

0xeabc,	// (0x00011664) grid_highlight_pane_ParamLimits

0xeabc,	// (0x00011664) grid_highlight_pane

0xe681,	// (0x00011229) cell_highlight_pane_g1

0xe689,	// (0x00011231) cell_highlight_pane_g2

0xe691,	// (0x00011239) cell_highlight_pane_g3

0xe699,	// (0x00011241) cell_highlight_pane_g4

0xe6a1,	// (0x00011249) cell_highlight_pane_g5

0xe6a9,	// (0x00011251) cell_highlight_pane_g6

0xe6b1,	// (0x00011259) cell_highlight_pane_g7

0xe6b9,	// (0x00011261) cell_highlight_pane_g8

0xe6c1,	// (0x00011269) cell_highlight_pane_g9

0xe0f3,	// (0x00010c9b) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x000121fb) cell_highlight_pane_g

0xead7,	// (0x0001167f) bg_scroll_pane

0x9dd0,	// (0x0000c978) scroll_handle_pane

0xeb33,	// (0x000116db) scroll_bg_pane_g1

0xeb48,	// (0x000116f0) scroll_bg_pane_g2

0xeb60,	// (0x00011708) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x00012252) scroll_bg_pane_g

0x9de4,	// (0x0000c98c) scroll_handle_focus_pane_ParamLimits

0x9de4,	// (0x0000c98c) scroll_handle_focus_pane

0xeb33,	// (0x000116db) scroll_handle_pane_g1

0xeb75,	// (0x0001171d) scroll_handle_pane_g2

0xeb60,	// (0x00011708) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x00012259) scroll_handle_pane_g

0xe706,	// (0x000112ae) bg_popup_sub_pane_cp21_ParamLimits

0xe706,	// (0x000112ae) bg_popup_sub_pane_cp21

0x9df1,	// (0x0000c999) popup_fep_japan_predictive_window_t1_ParamLimits

0x9df1,	// (0x0000c999) popup_fep_japan_predictive_window_t1

0x9e08,	// (0x0000c9b0) popup_fep_japan_predictive_window_t2_ParamLimits

0x9e08,	// (0x0000c9b0) popup_fep_japan_predictive_window_t2

0x9e3b,	// (0x0000c9e3) popup_fep_japan_predictive_window_t3_ParamLimits

0x9e3b,	// (0x0000c9e3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x00012260) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x00012260) popup_fep_japan_predictive_window_t

0xe11d,	// (0x00010cc5) bg_popup_sub_pane_cp23

0x9e72,	// (0x0000ca1a) listscroll_japin_cand_pane

0xeb89,	// (0x00011731) popup_fep_japan_candidate_window_t1

0xeb97,	// (0x0001173f) candidate_pane_ParamLimits

0xeb97,	// (0x0001173f) candidate_pane

0x9e7a,	// (0x0000ca22) scroll_pane_cp30

0xeba9,	// (0x00011751) list_single_popup_jap_candidate_pane_ParamLimits

0xeba9,	// (0x00011751) list_single_popup_jap_candidate_pane

0xe11d,	// (0x00010cc5) list_highlight_pane_cp30

0xebbe,	// (0x00011766) list_single_popup_jap_candidate_pane_t1

0xebcd,	// (0x00011775) level_1_signal

0xebda,	// (0x00011782) level_2_signal

0xebe7,	// (0x0001178f) level_3_signal

0xebf4,	// (0x0001179c) level_4_signal

0xec01,	// (0x000117a9) level_5_signal

0xec0e,	// (0x000117b6) level_6_signal

0xec1b,	// (0x000117c3) level_7_signal

0xebcd,	// (0x00011775) level_1_battery

0xebda,	// (0x00011782) level_2_battery

0xebe7,	// (0x0001178f) level_3_battery

0xebf4,	// (0x0001179c) level_4_battery

0xec01,	// (0x000117a9) level_5_battery

0xec0e,	// (0x000117b6) level_6_battery

0xec1b,	// (0x000117c3) level_7_battery

0xec5f,	// (0x00011807) list_menu_pane_ParamLimits

0xec5f,	// (0x00011807) list_menu_pane

0xec75,	// (0x0001181d) scroll_pane_cp25_ParamLimits

0xec75,	// (0x0001181d) scroll_pane_cp25

0x9e82,	// (0x0000ca2a) list_double2_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca2a) list_double2_graphic_pane_cp2

0x9e82,	// (0x0000ca2a) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca2a) list_double2_large_graphic_pane_cp2

0x9e82,	// (0x0000ca2a) list_double2_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca2a) list_double2_pane_cp2

0x9e82,	// (0x0000ca2a) list_double_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca2a) list_double_graphic_pane_cp2

0x9e82,	// (0x0000ca2a) list_double_large_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca2a) list_double_large_graphic_pane_cp2

0x9e82,	// (0x0000ca2a) list_double_number_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca2a) list_double_number_pane_cp2

0x9e82,	// (0x0000ca2a) list_double_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca2a) list_double_pane_cp2

0x9e91,	// (0x0000ca39) list_single_2graphic_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca39) list_single_2graphic_pane_cp2

0x9e91,	// (0x0000ca39) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca39) list_single_graphic_heading_pane_cp2

0x9e91,	// (0x0000ca39) list_single_graphic_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca39) list_single_graphic_pane_cp2

0x9e91,	// (0x0000ca39) list_single_heading_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca39) list_single_heading_pane_cp2

0xec9e,	// (0x00011846) list_single_large_graphic_pane_cp2_ParamLimits

0xec9e,	// (0x00011846) list_single_large_graphic_pane_cp2

0x9e91,	// (0x0000ca39) list_single_number_heading_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca39) list_single_number_heading_pane_cp2

0x9e91,	// (0x0000ca39) list_single_number_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca39) list_single_number_pane_cp2

0x9ea3,	// (0x0000ca4b) list_single_pane_cp2_ParamLimits

0x9ea3,	// (0x0000ca4b) list_single_pane_cp2

0xed13,	// (0x000118bb) bg_popup_sub_pane_cp22

0xed29,	// (0x000118d1) popup_side_volume_key_window_g1

0xed35,	// (0x000118dd) popup_side_volume_key_window_t1

0x9f6b,	// (0x0000cb13) volume_small_pane_cp1

0xe18b,	// (0x00010d33) bg_popup_sub_pane_cp24_ParamLimits

0xe18b,	// (0x00010d33) bg_popup_sub_pane_cp24

0xed43,	// (0x000118eb) fep_china_uni_candidate_pane_ParamLimits

0xed43,	// (0x000118eb) fep_china_uni_candidate_pane

0xed57,	// (0x000118ff) fep_china_uni_entry_pane

0xed67,	// (0x0001190f) popup_fep_china_uni_window_g1

0x9f73,	// (0x0000cb1b) fep_china_uni_entry_pane_g1

0x9f7b,	// (0x0000cb23) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x00012291) fep_china_uni_entry_pane_g

0xed83,	// (0x0001192b) fep_entry_item_pane

0xed8d,	// (0x00011935) fep_candidate_item_pane

0x9f83,	// (0x0000cb2b) fep_china_uni_candidate_pane_g1

0xed95,	// (0x0001193d) fep_china_uni_candidate_pane_g2

0xedb1,	// (0x00011959) fep_china_uni_candidate_pane_g3

0x9f8b,	// (0x0000cb33) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x00012296) fep_china_uni_candidate_pane_g

0xe0f3,	// (0x00010c9b) fep_entry_item_pane_g1

0xedb9,	// (0x00011961) fep_entry_item_pane_t1_ParamLimits

0xedb9,	// (0x00011961) fep_entry_item_pane_t1

0xedcf,	// (0x00011977) fep_candidate_item_pane_t1_ParamLimits

0xedcf,	// (0x00011977) fep_candidate_item_pane_t1

0xede4,	// (0x0001198c) fep_candidate_item_pane_t2_ParamLimits

0xede4,	// (0x0001198c) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x0001229f) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x0001229f) fep_candidate_item_pane_t

0xe199,	// (0x00010d41) list_highlight_pane_cp31_ParamLimits

0xe199,	// (0x00010d41) list_highlight_pane_cp31

0xedf6,	// (0x0001199e) level_1_signal_lsc

0xedff,	// (0x000119a7) level_2_signal_lsc

0xee08,	// (0x000119b0) level_3_signal_lsc

0xee11,	// (0x000119b9) level_4_signal_lsc

0xee1a,	// (0x000119c2) level_5_signal_lsc

0xee23,	// (0x000119cb) level_6_signal_lsc

0xee2c,	// (0x000119d4) level_7_signal_lsc

0xee2c,	// (0x000119d4) level_1_battery_lsc

0xee35,	// (0x000119dd) level_2_battery_lsc

0xee3e,	// (0x000119e6) level_3_battery_lsc

0xee47,	// (0x000119ef) level_4_battery_lsc

0xee50,	// (0x000119f8) level_5_battery_lsc

0xee59,	// (0x00011a01) level_6_battery_lsc

0xedf6,	// (0x0001199e) level_7_battery_lsc

0xee62,	// (0x00011a0a) scroll_handle_focus_pane_g1

0xee6b,	// (0x00011a13) scroll_handle_focus_pane_g2

0xee74,	// (0x00011a1c) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x000122a4) scroll_handle_focus_pane_g

0x9f93,	// (0x0000cb3b) list_single_2graphic_pane_g1_ParamLimits

0x9f93,	// (0x0000cb3b) list_single_2graphic_pane_g1

0x972e,	// (0x0000c2d6) list_single_2graphic_pane_g2_ParamLimits

0x972e,	// (0x0000c2d6) list_single_2graphic_pane_g2

0x0920,	// (0x000034c8) list_single_2graphic_pane_g3_ParamLimits

0x0920,	// (0x000034c8) list_single_2graphic_pane_g3

0x9f9f,	// (0x0000cb47) list_single_2graphic_pane_g4_ParamLimits

0x9f9f,	// (0x0000cb47) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x000122ab) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x000122ab) list_single_2graphic_pane_g

0x9fab,	// (0x0000cb53) list_single_2graphic_pane_t1_ParamLimits

0x9fab,	// (0x0000cb53) list_single_2graphic_pane_t1

0x9fd9,	// (0x0000cb81) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9fd9,	// (0x0000cb81) list_double2_graphic_large_graphic_pane_g1

0x98f8,	// (0x0000c4a0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x98f8,	// (0x0000c4a0) list_double2_graphic_large_graphic_pane_g2

0x984b,	// (0x0000c3f3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x984b,	// (0x0000c3f3) list_double2_graphic_large_graphic_pane_g3

0x9feb,	// (0x0000cb93) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9feb,	// (0x0000cb93) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x000122b4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x000122b4) list_double2_graphic_large_graphic_pane_g

0x9ff7,	// (0x0000cb9f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9ff7,	// (0x0000cb9f) list_double2_graphic_large_graphic_pane_t1

0xa00d,	// (0x0000cbb5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa00d,	// (0x0000cbb5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x000122bd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x000122bd) list_double2_graphic_large_graphic_pane_t

0xa092,	// (0x0000cc3a) popup_fast_swap_window_ParamLimits

0xa092,	// (0x0000cc3a) popup_fast_swap_window

0xa0ae,	// (0x0000cc56) popup_side_volume_key_window

0xf06b,	// (0x00011c13) stacon_top_pane

0xf075,	// (0x00011c1d) status_pane_ParamLimits

0xf075,	// (0x00011c1d) status_pane

0xe0e9,	// (0x00010c91) status_small_pane

0xe11d,	// (0x00010cc5) control_pane

0xe11d,	// (0x00010cc5) stacon_bottom_pane

0xe57b,	// (0x00011123) scroll_pane_cp121

0xe572,	// (0x0001111a) set_content_pane

0xa01f,	// (0x0000cbc7) bg_active_tab_pane_g1_cp1

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp1

0xa031,	// (0x0000cbd9) bg_active_tab_pane_g3_cp1

0xa01f,	// (0x0000cbc7) bg_passive_tab_pane_g1_cp1

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp1

0xa031,	// (0x0000cbd9) bg_passive_tab_pane_g3_cp1

0xa03a,	// (0x0000cbe2) bg_active_tab_pane_g1_cp2

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp2

0xa043,	// (0x0000cbeb) bg_active_tab_pane_g3_cp2

0xa03a,	// (0x0000cbe2) bg_passive_tab_pane_g1_cp2

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp2

0xa043,	// (0x0000cbeb) bg_passive_tab_pane_g3_cp2

0xa04c,	// (0x0000cbf4) bg_active_tab_pane_g1_cp3

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp3

0xa055,	// (0x0000cbfd) bg_active_tab_pane_g3_cp3

0xa04c,	// (0x0000cbf4) bg_passive_tab_pane_g1_cp3

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp3

0xa055,	// (0x0000cbfd) bg_passive_tab_pane_g3_cp3

0xa05e,	// (0x0000cc06) bg_active_tab_pane_g1_cp4

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp4

0xa069,	// (0x0000cc11) bg_active_tab_pane_g3_cp4

0xa05e,	// (0x0000cc06) bg_passive_tab_pane_g1_cp4

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp4

0xa069,	// (0x0000cc11) bg_passive_tab_pane_g3_cp4

0xa074,	// (0x0000cc1c) bg_active_tab_pane_g1_cp5

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp5

0xa07d,	// (0x0000cc25) bg_active_tab_pane_g3_cp5

0xa074,	// (0x0000cc1c) bg_passive_tab_pane_g1_cp5

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp5

0xa07d,	// (0x0000cc25) bg_passive_tab_pane_g3_cp5

0x2bc1,	// (0x00005769) list_set_graphic_pane_ParamLimits

0x2bc1,	// (0x00005769) list_set_graphic_pane

0xe11d,	// (0x00010cc5) bg_set_opt_pane_cp4

0xeffc,	// (0x00011ba4) list_set_graphic_pane_g1_ParamLimits

0xeffc,	// (0x00011ba4) list_set_graphic_pane_g1

0xf008,	// (0x00011bb0) list_set_graphic_pane_g2_ParamLimits

0xf008,	// (0x00011bb0) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x000122c2) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x000122c2) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x00012647) volume_small_pane_cp_g

0xa086,	// (0x0000cc2e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa086,	// (0x0000cc2e) list_double2_large_graphic_pane_g1_cp2

0xf02a,	// (0x00011bd2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf02a,	// (0x00011bd2) list_double2_large_graphic_pane_g2_cp2

0xf03b,	// (0x00011be3) list_double2_large_graphic_pane_g3_cp2

0xf043,	// (0x00011beb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf043,	// (0x00011beb) list_double2_large_graphic_pane_t1_cp2

0xf059,	// (0x00011c01) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf059,	// (0x00011c01) list_double2_large_graphic_pane_t2_cp2

0xb5bd,	// (0x0000e165) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb5bd,	// (0x0000e165) list_double_large_graphic_pane_g1_cp2

0x1ecb,	// (0x00004a73) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1ecb,	// (0x00004a73) list_double_large_graphic_pane_g2_cp2

0xf191,	// (0x00011d39) list_double_large_graphic_pane_g3_cp2

0x1edc,	// (0x00004a84) list_double_large_graphic_pane_g4_cp

0x1ee4,	// (0x00004a8c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1ee4,	// (0x00004a8c) list_double_large_graphic_pane_t1_cp2

0x1efb,	// (0x00004aa3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1efb,	// (0x00004aa3) list_double_large_graphic_pane_t2_cp2

0xf083,	// (0x00011c2b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf083,	// (0x00011c2b) list_double2_graphic_pane_g1_cp2

0xf091,	// (0x00011c39) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf091,	// (0x00011c39) list_double2_graphic_pane_g2_cp2

0xf0a2,	// (0x00011c4a) list_double2_graphic_pane_g3_cp2

0xf0ac,	// (0x00011c54) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf0ac,	// (0x00011c54) list_double2_graphic_pane_t1_cp2

0xf0c2,	// (0x00011c6a) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf0c2,	// (0x00011c6a) list_double2_graphic_pane_t2_cp2

0xeda5,	// (0x0001194d) list_single_number_heading_pane_g1_cp2_ParamLimits

0xeda5,	// (0x0001194d) list_single_number_heading_pane_g1_cp2

0xf0d4,	// (0x00011c7c) list_single_number_heading_pane_g2_cp2

0xf0dc,	// (0x00011c84) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf0dc,	// (0x00011c84) list_single_number_heading_pane_t1_cp2

0xf0f2,	// (0x00011c9a) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf0f2,	// (0x00011c9a) list_single_number_heading_pane_t2_cp2

0xf104,	// (0x00011cac) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf104,	// (0x00011cac) list_single_number_heading_pane_t3_cp2

0xeda5,	// (0x0001194d) list_single_heading_pane_g1_cp2_ParamLimits

0xeda5,	// (0x0001194d) list_single_heading_pane_g1_cp2

0xf0d4,	// (0x00011c7c) list_single_heading_pane_g2_cp2

0xf0dc,	// (0x00011c84) list_single_heading_pane_t1_cp2_ParamLimits

0xf0dc,	// (0x00011c84) list_single_heading_pane_t1_cp2

0x1cc4,	// (0x0000486c) list_single_heading_pane_t2_cp2_ParamLimits

0x1cc4,	// (0x0000486c) list_single_heading_pane_t2_cp2

0x1c0c,	// (0x000047b4) list_double_graphic_pane_g1_cp2_ParamLimits

0x1c0c,	// (0x000047b4) list_double_graphic_pane_g1_cp2

0x1c18,	// (0x000047c0) list_double_graphic_pane_g2_cp2_ParamLimits

0x1c18,	// (0x000047c0) list_double_graphic_pane_g2_cp2

0x1c27,	// (0x000047cf) list_double_graphic_pane_g3_cp2

0x1c2f,	// (0x000047d7) list_double_graphic_pane_t1_cp2_ParamLimits

0x1c2f,	// (0x000047d7) list_double_graphic_pane_t1_cp2

0x1c45,	// (0x000047ed) list_double_graphic_pane_t2_cp2_ParamLimits

0x1c45,	// (0x000047ed) list_double_graphic_pane_t2_cp2

0xf179,	// (0x00011d21) list_double_number_pane_g1_cp2_ParamLimits

0xf179,	// (0x00011d21) list_double_number_pane_g1_cp2

0xf191,	// (0x00011d39) list_double_number_pane_g2_cp2

0x1bd0,	// (0x00004778) list_double_number_pane_t1_cp2_ParamLimits

0x1bd0,	// (0x00004778) list_double_number_pane_t1_cp2

0x1be4,	// (0x0000478c) list_double_number_pane_t2_cp2_ParamLimits

0x1be4,	// (0x0000478c) list_double_number_pane_t2_cp2

0x1bfa,	// (0x000047a2) list_double_number_pane_t3_cp2_ParamLimits

0x1bfa,	// (0x000047a2) list_double_number_pane_t3_cp2

0x1aa8,	// (0x00004650) list_single_graphic_pane_g1_cp2_ParamLimits

0x1aa8,	// (0x00004650) list_single_graphic_pane_g1_cp2

0xf185,	// (0x00011d2d) list_single_graphic_pane_g2_cp2_ParamLimits

0xf185,	// (0x00011d2d) list_single_graphic_pane_g2_cp2

0xf1ea,	// (0x00011d92) list_single_graphic_pane_g3_cp2

0x1a7e,	// (0x00004626) list_single_graphic_pane_t1_cp2_ParamLimits

0x1a7e,	// (0x00004626) list_single_graphic_pane_t1_cp2

0xf185,	// (0x00011d2d) list_single_number_pane_g1_cp2_ParamLimits

0xf185,	// (0x00011d2d) list_single_number_pane_g1_cp2

0xf1ea,	// (0x00011d92) list_single_number_pane_g2_cp2

0x1a7e,	// (0x00004626) list_single_number_pane_t1_cp2_ParamLimits

0x1a7e,	// (0x00004626) list_single_number_pane_t1_cp2

0x1a94,	// (0x0000463c) list_single_number_pane_t2_cp2_ParamLimits

0x1a94,	// (0x0000463c) list_single_number_pane_t2_cp2

0xf02a,	// (0x00011bd2) list_double2_pane_g1_cp2_ParamLimits

0xf02a,	// (0x00011bd2) list_double2_pane_g1_cp2

0xf03b,	// (0x00011be3) list_double2_pane_g2_cp2

0xf151,	// (0x00011cf9) list_double2_pane_t1_cp2_ParamLimits

0xf151,	// (0x00011cf9) list_double2_pane_t1_cp2

0xf167,	// (0x00011d0f) list_double2_pane_t2_cp2_ParamLimits

0xf167,	// (0x00011d0f) list_double2_pane_t2_cp2

0xf179,	// (0x00011d21) list_double_pane_g1_cp2_ParamLimits

0xf179,	// (0x00011d21) list_double_pane_g1_cp2

0xf191,	// (0x00011d39) list_double_pane_g2_cp2

0xf199,	// (0x00011d41) list_double_pane_t1_cp2_ParamLimits

0xf199,	// (0x00011d41) list_double_pane_t1_cp2

0xf1af,	// (0x00011d57) list_double_pane_t2_cp2_ParamLimits

0xf1af,	// (0x00011d57) list_double_pane_t2_cp2

0xa0c8,	// (0x0000cc70) list_single_pane_cp2_g3

0xf185,	// (0x00011d2d) list_single_pane_g1_cp2_ParamLimits

0xf185,	// (0x00011d2d) list_single_pane_g1_cp2

0xf1ea,	// (0x00011d92) list_single_pane_g2_cp2

0xf1f2,	// (0x00011d9a) list_single_pane_t1_cp2_ParamLimits

0xf1f2,	// (0x00011d9a) list_single_pane_t1_cp2

0xa0d0,	// (0x0000cc78) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa0d0,	// (0x0000cc78) list_single_large_graphic_pane_g1_cp2

0xf20a,	// (0x00011db2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf20a,	// (0x00011db2) list_single_large_graphic_pane_g2_cp2

0xf216,	// (0x00011dbe) list_single_large_graphic_pane_g3_cp2

0xa0dc,	// (0x0000cc84) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa0dc,	// (0x0000cc84) list_single_large_graphic_pane_g4_cp1

0xf21e,	// (0x00011dc6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf21e,	// (0x00011dc6) list_single_large_graphic_pane_t1_cp2

0x18f1,	// (0x00004499) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x18f1,	// (0x00004499) list_single_graphic_heading_pane_g1_cp2

0x18be,	// (0x00004466) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x18be,	// (0x00004466) list_single_graphic_heading_pane_g4_cp2

0xf1ea,	// (0x00011d92) list_single_graphic_heading_pane_g5_cp2

0x18fd,	// (0x000044a5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x18fd,	// (0x000044a5) list_single_graphic_heading_pane_t1_cp2

0x1913,	// (0x000044bb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1913,	// (0x000044bb) list_single_graphic_heading_pane_t2_cp2

0x18b2,	// (0x0000445a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x18b2,	// (0x0000445a) list_single_2graphic_pane_g1_cp2

0x18be,	// (0x00004466) list_single_2graphic_pane_g2_cp2_ParamLimits

0x18be,	// (0x00004466) list_single_2graphic_pane_g2_cp2

0xf1ea,	// (0x00011d92) list_single_2graphic_pane_g3_cp2

0x18cf,	// (0x00004477) list_single_2graphic_pane_g4_cp2_ParamLimits

0x18cf,	// (0x00004477) list_single_2graphic_pane_g4_cp2

0x18db,	// (0x00004483) list_single_2graphic_pane_t1_cp2_ParamLimits

0x18db,	// (0x00004483) list_single_2graphic_pane_t1_cp2

0xe0f3,	// (0x00010c9b) list_highlight_pane_g10_cp1

0x149a,	// (0x00004042) list_highlight_pane_g1_cp1

0x14a2,	// (0x0000404a) list_highlight_pane_g2_cp1

0x14aa,	// (0x00004052) list_highlight_pane_g3_cp1

0x14b2,	// (0x0000405a) list_highlight_pane_g4_cp1

0x14ba,	// (0x00004062) list_highlight_pane_g5_cp1

0x14c2,	// (0x0000406a) list_highlight_pane_g6_cp1

0x14ca,	// (0x00004072) list_highlight_pane_g7_cp1

0x14d2,	// (0x0000407a) list_highlight_pane_g8_cp1

0x14da,	// (0x00004082) list_highlight_pane_g9_cp1

0xb34a,	// (0x0000def2) form_field_slider_pane_t3

0xb358,	// (0x0000df00) form_field_slider_pane_t4

0x13de,	// (0x00003f86) slider_form_pane_ParamLimits

0x13de,	// (0x00003f86) slider_form_pane

0xe11d,	// (0x00010cc5) control_abbreviations

0xe11d,	// (0x00010cc5) control_conventions

0xe11d,	// (0x00010cc5) control_definitions

0xe11d,	// (0x00010cc5) format_table_attribute

0xb594,	// (0x0000e13c) bg_popup_preview_window_pane_g9

0xe11d,	// (0x00010cc5) format_table_data2

0xe11d,	// (0x00010cc5) format_table_data3

0xe11d,	// (0x00010cc5) format_table_data_example

0x0008,

0xe11d,	// (0x00010cc5) intro_purpose

0xf8aa,	// (0x00012452) bg_popup_preview_window_pane_g

0xe11d,	// (0x00010cc5) texts_category

0xe11d,	// (0x00010cc5) texts_graphics

0xf234,	// (0x00011ddc) text_digital

0xf243,	// (0x00011deb) text_primary

0xf252,	// (0x00011dfa) text_primary_small

0xf261,	// (0x00011e09) text_secondary

0xf270,	// (0x00011e18) text_title

0xba11,	// (0x0000e5b9) bg_passive_tab_pane_g1_cp3_srt

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp3_srt

0xba1a,	// (0x0000e5c2) bg_passive_tab_pane_g3_cp3_srt

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp3_srt_ParamLimits

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp3_srt

0xba23,	// (0x0000e5cb) tabs_4_active_pane_srt_g1

0xba2b,	// (0x0000e5d3) tabs_4_active_pane_srt_t1_ParamLimits

0xba2b,	// (0x0000e5d3) tabs_4_active_pane_srt_t1

0xba11,	// (0x0000e5b9) bg_active_tab_pane_g1_cp3_copy1

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp3_copy1

0xba1a,	// (0x0000e5c2) bg_active_tab_pane_g3_cp3_copy1

0xe199,	// (0x00010d41) tabs_2_long_active_pane_srt_ParamLimits

0xe199,	// (0x00010d41) tabs_2_long_active_pane_srt

0xe199,	// (0x00010d41) tabs_2_long_passive_pane_srt_ParamLimits

0xe199,	// (0x00010d41) tabs_2_long_passive_pane_srt

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp4_srt_ParamLimits

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp4_srt

0xb716,	// (0x0000e2be) bg_passive_tab_pane_g1_cp4_srt

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp4_srt

0xb71f,	// (0x0000e2c7) bg_passive_tab_pane_g3_cp4_srt

0xe199,	// (0x00010d41) bg_active_tab_pane_cp4_srt_ParamLimits

0xe199,	// (0x00010d41) bg_active_tab_pane_cp4_srt

0xb728,	// (0x0000e2d0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb728,	// (0x0000e2d0) tabs_2_long_active_pane_srt_t1

0xb716,	// (0x0000e2be) bg_active_tab_pane_g1_cp4_srt

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp4_srt

0xb71f,	// (0x0000e2c7) bg_active_tab_pane_g3_cp4_srt

0xe18b,	// (0x00010d33) tabs_3_long_active_pane_srt_ParamLimits

0xe18b,	// (0x00010d33) tabs_3_long_active_pane_srt

0xe18b,	// (0x00010d33) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe18b,	// (0x00010d33) tabs_3_long_passive_pane_cp_srt

0xe18b,	// (0x00010d33) tabs_3_long_passive_pane_srt_ParamLimits

0xe18b,	// (0x00010d33) tabs_3_long_passive_pane_srt

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp5_srt_ParamLimits

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp5_srt

0xa074,	// (0x0000cc1c) bg_passive_tab_pane_g1_cp5_srt

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp5_srt

0xa07d,	// (0x0000cc25) bg_passive_tab_pane_g3_cp5_srt

0xe199,	// (0x00010d41) bg_active_tab_pane_cp5_srt_ParamLimits

0xe199,	// (0x00010d41) bg_active_tab_pane_cp5_srt

0xb700,	// (0x0000e2a8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb700,	// (0x0000e2a8) tabs_3_long_active_pane_srt_t1

0xa074,	// (0x0000cc1c) bg_active_tab_pane_g1_cp5_srt

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp5_srt

0xa07d,	// (0x0000cc25) bg_active_tab_pane_g3_cp5_srt

0x2171,	// (0x00004d19) navi_text_pane_srt_t1

0x2169,	// (0x00004d11) navi_icon_pane_srt_g1

0xf404,	// (0x00011fac) midp_editing_number_pane_srt

0xf27f,	// (0x00011e27) midp_ticker_pane_srt

0xf40c,	// (0x00011fb4) midp_ticker_pane_srt_g1

0xf414,	// (0x00011fbc) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x000122e1) midp_ticker_pane_srt_g

0xf41c,	// (0x00011fc4) midp_ticker_pane_srt_t1

0x215a,	// (0x00004d02) midp_editing_number_pane_t1_copy1

0xa0f6,	// (0x0000cc9e) listscroll_midp_pane

0xa0f6,	// (0x0000cc9e) midp_form_pane

0xa161,	// (0x0000cd09) midp_info_popup_window_ParamLimits

0xa161,	// (0x0000cd09) midp_info_popup_window

0xe706,	// (0x000112ae) bg_popup_sub_pane_cp50_ParamLimits

0xe706,	// (0x000112ae) bg_popup_sub_pane_cp50

0x10ce,	// (0x00003c76) listscroll_midp_info_pane_ParamLimits

0x10ce,	// (0x00003c76) listscroll_midp_info_pane

0x10ae,	// (0x00003c56) listscroll_form_midp_pane_ParamLimits

0x10ae,	// (0x00003c56) listscroll_form_midp_pane

0x10ba,	// (0x00003c62) scroll_bar_cp050

0x10ae,	// (0x00003c56) list_midp_pane

0xbc11,	// (0x0000e7b9) signal_pane_g2_cp

0x0fc8,	// (0x00003b70) listscroll_midp_info_pane_t1_ParamLimits

0x0fc8,	// (0x00003b70) listscroll_midp_info_pane_t1

0xb184,	// (0x0000dd2c) listscroll_midp_info_pane_t2_ParamLimits

0xb184,	// (0x0000dd2c) listscroll_midp_info_pane_t2

0xb1c2,	// (0x0000dd6a) listscroll_midp_info_pane_t3_ParamLimits

0xb1c2,	// (0x0000dd6a) listscroll_midp_info_pane_t3

0xb1fc,	// (0x0000dda4) listscroll_midp_info_pane_t4_ParamLimits

0xb1fc,	// (0x0000dda4) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x0001238d) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x0001238d) listscroll_midp_info_pane_t

0xe75b,	// (0x00011303) scroll_pane_cp21

0x0f68,	// (0x00003b10) form_midp_field_choice_group_pane

0xb147,	// (0x0000dcef) form_midp_field_text_pane

0x0fae,	// (0x00003b56) form_midp_field_time_pane

0x0fb6,	// (0x00003b5e) form_midp_gauge_slider_pane

0x0fbf,	// (0x00003b67) form_midp_gauge_wait_pane

0xe11d,	// (0x00010cc5) form_midp_image_pane

0xb130,	// (0x0000dcd8) list_single_midp_pane_ParamLimits

0xb130,	// (0x0000dcd8) list_single_midp_pane

0xb10e,	// (0x0000dcb6) form_midp_field_text_pane_t1

0x0c1e,	// (0x000037c6) input_focus_pane_cp050

0x0f25,	// (0x00003acd) list_midp_form_text_pane

0x0eba,	// (0x00003a62) form_midp_field_choice_group_pane_t1

0x0ec8,	// (0x00003a70) input_focus_pane_cp051

0x0edc,	// (0x00003a84) list_midp_choice_pane

0xe11d,	// (0x00010cc5) status_idle_pane

0x0e9e,	// (0x00003a46) form_midp_field_time_pane_t1

0xe0f3,	// (0x00010c9b) wait_anim_pane_g2_copy1

0x0eac,	// (0x00003a54) form_midp_field_time_pane_t2

0x0001,

0xf2df,	// (0x00011e87) aid_navinavi_width_2_pane

0xf7e0,	// (0x00012388) form_midp_field_time_pane_t

0xe11d,	// (0x00010cc5) input_focus_pane_cp052

0xe11d,	// (0x00010cc5) bg_input_focus_pane_cp040

0x0e5e,	// (0x00003a06) form_midp_gauge_slider_pane_t1

0x0e6c,	// (0x00003a14) form_midp_gauge_slider_pane_t2

0xb0f2,	// (0x0000dc9a) form_midp_gauge_slider_pane_t3

0xb100,	// (0x0000dca8) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x0001237f) form_midp_gauge_slider_pane_t

0x0e96,	// (0x00003a3e) form_midp_slider_pane

0xe199,	// (0x00010d41) bg_input_focus_pane_cp041_ParamLimits

0xe199,	// (0x00010d41) bg_input_focus_pane_cp041

0x0e2b,	// (0x000039d3) form_midp_gauge_wait_pane_t1_ParamLimits

0x0e2b,	// (0x000039d3) form_midp_gauge_wait_pane_t1

0x0e3d,	// (0x000039e5) form_midp_gauge_wait_pane_t2_ParamLimits

0x0e3d,	// (0x000039e5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x0001237a) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x0001237a) form_midp_gauge_wait_pane_t

0x0e4f,	// (0x000039f7) form_midp_wait_pane_ParamLimits

0x0e4f,	// (0x000039f7) form_midp_wait_pane

0xb0bc,	// (0x0000dc64) form_midp_image_pane_g1

0xb0c5,	// (0x0000dc6d) form_midp_image_pane_t1

0xb0d4,	// (0x0000dc7c) form_midp_image_pane_t2

0xb0e3,	// (0x0000dc8b) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x00012373) form_midp_image_pane_t

0x0ddd,	// (0x00003985) list_single_midp_pane_g1

0x0de6,	// (0x0000398e) list_single_midp_pane_t1

0xb0a7,	// (0x0000dc4f) list_midp_form_item_pane_ParamLimits

0xb0a7,	// (0x0000dc4f) list_midp_form_item_pane

0xf287,	// (0x00011e2f) list_midp_form_item_pane_t1

0xf296,	// (0x00011e3e) midp_ticker_pane_g1

0xf2a2,	// (0x00011e4a) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x000122c7) midp_ticker_pane_g

0xf2ae,	// (0x00011e56) midp_ticker_pane_t1

0x2452,	// (0x00004ffa) midp_editing_number_pane_t1

0x2430,	// (0x00004fd8) midp_editing_number_pane

0x243f,	// (0x00004fe7) midp_ticker_pane

0x2138,	// (0x00004ce0) ai_message_heading_pane

0xe11d,	// (0x00010cc5) bg_popup_window_pane_cp14

0x2140,	// (0x00004ce8) listscroll_ai_message_pane

0x20c2,	// (0x00004c6a) ai_message_heading_pane_g1_ParamLimits

0x20c2,	// (0x00004c6a) ai_message_heading_pane_g1

0xb6b6,	// (0x0000e25e) ai_message_heading_pane_g2_ParamLimits

0xb6b6,	// (0x0000e25e) ai_message_heading_pane_g2

0x20da,	// (0x00004c82) ai_message_heading_pane_g3_ParamLimits

0x20da,	// (0x00004c82) ai_message_heading_pane_g3

0x20e6,	// (0x00004c8e) ai_message_heading_pane_g4_ParamLimits

0x20e6,	// (0x00004c8e) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x000124b4) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x000124b4) ai_message_heading_pane_g

0xb6c2,	// (0x0000e26a) ai_message_heading_pane_t1_ParamLimits

0xb6c2,	// (0x0000e26a) ai_message_heading_pane_t1

0xb6dc,	// (0x0000e284) ai_message_heading_pane_t2_ParamLimits

0xb6dc,	// (0x0000e284) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x000124bd) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x000124bd) ai_message_heading_pane_t

0x211e,	// (0x00004cc6) bg_popup_heading_pane_cp1_ParamLimits

0x211e,	// (0x00004cc6) bg_popup_heading_pane_cp1

0x20b0,	// (0x00004c58) list_ai_message_pane_ParamLimits

0x20b0,	// (0x00004c58) list_ai_message_pane

0xe75b,	// (0x00011303) scroll_pane_cp10

0xb65e,	// (0x0000e206) list_ai_message_pane_g1

0x2004,	// (0x00004bac) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x00012491) list_ai_message_pane_g

0x200c,	// (0x00004bb4) list_ai_message_pane_t1_ParamLimits

0x200c,	// (0x00004bb4) list_ai_message_pane_t1

0x2021,	// (0x00004bc9) list_ai_message_pane_t2_ParamLimits

0x2021,	// (0x00004bc9) list_ai_message_pane_t2

0x2036,	// (0x00004bde) list_ai_message_pane_t3_ParamLimits

0x2036,	// (0x00004bde) list_ai_message_pane_t3

0x204b,	// (0x00004bf3) list_ai_message_pane_t4_ParamLimits

0x204b,	// (0x00004bf3) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x00012496) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x00012496) list_ai_message_pane_t

0xb63a,	// (0x0000e1e2) cell_ai_soft_ind_pane_ParamLimits

0xb63a,	// (0x0000e1e2) cell_ai_soft_ind_pane

0xf2c0,	// (0x00011e68) cell_ai_soft_ind_pane_g1_ParamLimits

0xf2c0,	// (0x00011e68) cell_ai_soft_ind_pane_g1

0xe11d,	// (0x00010cc5) grid_highlight_cp1

0xf2cd,	// (0x00011e75) text_secondary_cp56_ParamLimits

0xf2cd,	// (0x00011e75) text_secondary_cp56

0x1fbc,	// (0x00004b64) example_general_pane_ParamLimits

0x1fbc,	// (0x00004b64) example_general_pane

0x1fc8,	// (0x00004b70) example_parent_pane_g1_ParamLimits

0x1fc8,	// (0x00004b70) example_parent_pane_g1

0x1fd4,	// (0x00004b7c) example_parent_pane_t1_ParamLimits

0x1fd4,	// (0x00004b7c) example_parent_pane_t1

0xa82b,	// (0x0000d3d3) popup_preview_text_window_ParamLimits

0xa82b,	// (0x0000d3d3) popup_preview_text_window

0xf1e2,	// (0x00011d8a) list_single_pane_cp2_g4

0xe385,	// (0x00010f2d) bg_popup_preview_window_pane_ParamLimits

0xe385,	// (0x00010f2d) bg_popup_preview_window_pane

0xb59c,	// (0x0000e144) popup_preview_text_window_t1_ParamLimits

0xb59c,	// (0x0000e144) popup_preview_text_window_t1

0x1d34,	// (0x000048dc) popup_preview_text_window_t2_ParamLimits

0x1d34,	// (0x000048dc) popup_preview_text_window_t2

0x1d7d,	// (0x00004925) popup_preview_text_window_t3_ParamLimits

0x1d7d,	// (0x00004925) popup_preview_text_window_t3

0x1dc2,	// (0x0000496a) popup_preview_text_window_t4_ParamLimits

0x1dc2,	// (0x0000496a) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x00012465) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x00012465) popup_preview_text_window_t

0x1e40,	// (0x000049e8) scroll_pane_cp11

0x0a86,	// (0x0000362e) bg_popup_preview_window_pane_g1

0xb55c,	// (0x0000e104) bg_popup_preview_window_pane_g2

0xb564,	// (0x0000e10c) bg_popup_preview_window_pane_g3

0xb56c,	// (0x0000e114) bg_popup_preview_window_pane_g4

0xb574,	// (0x0000e11c) bg_popup_preview_window_pane_g5

0xb57c,	// (0x0000e124) bg_popup_preview_window_pane_g6

0xb584,	// (0x0000e12c) bg_popup_preview_window_pane_g7

0xb58c,	// (0x0000e134) bg_popup_preview_window_pane_g8

0xe109,	// (0x00010cb1) aid_popup_width_pane

0xa7a7,	// (0x0000d34f) popup_midp_note_alarm_window_ParamLimits

0xa7a7,	// (0x0000d34f) popup_midp_note_alarm_window

0xe5af,	// (0x00011157) data_form_pane_ParamLimits

0x9aee,	// (0x0000c696) form_field_data_pane_g1

0x9af8,	// (0x0000c6a0) form_field_data_pane_t1_ParamLimits

0xe5bb,	// (0x00011163) input_focus_pane_ParamLimits

0xe5c9,	// (0x00011171) data_form_wide_pane_ParamLimits

0xe5da,	// (0x00011182) form_field_data_wide_pane_g1

0xe606,	// (0x000111ae) form_field_data_wide_pane_t1_ParamLimits

0xe45d,	// (0x00011005) input_focus_pane_cp6_ParamLimits

0x9c6a,	// (0x0000c812) input_popup_find_pane_g1_ParamLimits

0x9c6a,	// (0x0000c812) input_popup_find_pane_g1

0xea0a,	// (0x000115b2) aid_navi_side_left_pane

0xea1f,	// (0x000115c7) aid_navi_side_right_pane

0x1595,	// (0x0000413d) bg_popup_window_pane_cp30_ParamLimits

0x1595,	// (0x0000413d) bg_popup_window_pane_cp30

0x160f,	// (0x000041b7) popup_midp_note_alarm_window_g1_ParamLimits

0x160f,	// (0x000041b7) popup_midp_note_alarm_window_g1

0x163f,	// (0x000041e7) popup_midp_note_alarm_window_t1_ParamLimits

0x163f,	// (0x000041e7) popup_midp_note_alarm_window_t1

0xb39d,	// (0x0000df45) popup_midp_note_alarm_window_t2_ParamLimits

0xb39d,	// (0x0000df45) popup_midp_note_alarm_window_t2

0xb44b,	// (0x0000dff3) popup_midp_note_alarm_window_t3_ParamLimits

0xb44b,	// (0x0000dff3) popup_midp_note_alarm_window_t3

0xb473,	// (0x0000e01b) popup_midp_note_alarm_window_t4_ParamLimits

0xb473,	// (0x0000e01b) popup_midp_note_alarm_window_t4

0x17d6,	// (0x0000437e) popup_midp_note_alarm_window_t5_ParamLimits

0x17d6,	// (0x0000437e) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x00012402) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x00012402) popup_midp_note_alarm_window_t

0x1882,	// (0x0000442a) wait_bar_pane_cp1_ParamLimits

0x1882,	// (0x0000442a) wait_bar_pane_cp1

0xe11d,	// (0x00010cc5) wait_anim_pane_copy1

0xe11d,	// (0x00010cc5) wait_border_pane_copy1

0x128b,	// (0x00003e33) wait_border_pane_g1_copy1

0xe620,	// (0x000111c8) form_field_popup_pane_g1

0x9b12,	// (0x0000c6ba) form_field_popup_pane_t1_ParamLimits

0xe5bb,	// (0x00011163) input_focus_pane_cp7_ParamLimits

0xe628,	// (0x000111d0) list_form_pane_ParamLimits

0xe634,	// (0x000111dc) form_field_popup_wide_pane_g1

0xe63c,	// (0x000111e4) form_field_popup_wide_pane_t1_ParamLimits

0xe5bb,	// (0x00011163) input_focus_pane_cp8_ParamLimits

0xe651,	// (0x000111f9) list_form_wide_pane_ParamLimits

0x2696,	// (0x0000523e) aid_size_cell_graphic_pane

0x9b91,	// (0x0000c739) data_form_pane_t1_ParamLimits

0xb932,	// (0x0000e4da) data_form_wide_pane_t1_ParamLimits

0xac6e,	// (0x0000d816) bg_status_flat_pane

0x90e5,	// (0x0000bc8d) title_pane_t1_ParamLimits

0xe153,	// (0x00010cfb) title_pane_t2_ParamLimits

0xe179,	// (0x00010d21) title_pane_t3_ParamLimits

0xf532,	// (0x000120da) title_pane_t_ParamLimits

0xebcd,	// (0x00011775) level_1_signal_ParamLimits

0xebda,	// (0x00011782) level_2_signal_ParamLimits

0xebe7,	// (0x0001178f) level_3_signal_ParamLimits

0xebf4,	// (0x0001179c) level_4_signal_ParamLimits

0xec01,	// (0x000117a9) level_5_signal_ParamLimits

0xec0e,	// (0x000117b6) level_6_signal_ParamLimits

0xec1b,	// (0x000117c3) level_7_signal_ParamLimits

0xebcd,	// (0x00011775) level_1_battery_ParamLimits

0xebda,	// (0x00011782) level_2_battery_ParamLimits

0xebe7,	// (0x0001178f) level_3_battery_ParamLimits

0xebf4,	// (0x0001179c) level_4_battery_ParamLimits

0xec01,	// (0x000117a9) level_5_battery_ParamLimits

0xec0e,	// (0x000117b6) level_6_battery_ParamLimits

0xec1b,	// (0x000117c3) level_7_battery_ParamLimits

0x149a,	// (0x00004042) bg_status_flat_pane_g1

0x14a2,	// (0x0000404a) bg_status_flat_pane_g2

0x14aa,	// (0x00004052) bg_status_flat_pane_g3

0x14b2,	// (0x0000405a) bg_status_flat_pane_g4

0x14ba,	// (0x00004062) bg_status_flat_pane_g5

0x14c2,	// (0x0000406a) bg_status_flat_pane_g6

0x14ca,	// (0x00004072) bg_status_flat_pane_g7

0x9179,	// (0x0000bd21) tabs_3_active_pane_t1_ParamLimits

0x9179,	// (0x0000bd21) tabs_3_passive_pane_t1_ParamLimits

0x9193,	// (0x0000bd3b) tabs_4_active_pane_t1_ParamLimits

0x9193,	// (0x0000bd3b) tabs_4_1_passive_pane_t1_ParamLimits

0x9ca9,	// (0x0000c851) tabs_2_active_pane_t1_ParamLimits

0x9ca9,	// (0x0000c851) tabs_2_passive_pane_t1_ParamLimits

0xe199,	// (0x00010d41) bg_active_tab_pane_cp4_ParamLimits

0x9cbb,	// (0x0000c863) tabs_2_long_active_pane_t1_ParamLimits

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp4_ParamLimits

0x0b43,	// (0x000036eb) list_single_midp_graphic_pane_t1_ParamLimits

0xe199,	// (0x00010d41) bg_active_tab_pane_cp5_ParamLimits

0x9cce,	// (0x0000c876) tabs_3_long_active_pane_t1_ParamLimits

0xf45e,	// (0x00012006) bg_passive_tab_pane_cp5_ParamLimits

0x0b43,	// (0x000036eb) list_single_midp_graphic_pane_t1

0xac6e,	// (0x0000d816) bg_status_flat_pane_ParamLimits

0x0669,	// (0x00003211) indicator_pane_cp2_ParamLimits

0x0669,	// (0x00003211) indicator_pane_cp2

0xadec,	// (0x0000d994) navi_pane_srt_ParamLimits

0xadec,	// (0x0000d994) navi_pane_srt

0x07b8,	// (0x00003360) popup_clock_digital_analogue_window_cp1

0xe1f7,	// (0x00010d9f) indicator_pane_t1

0xf27f,	// (0x00011e27) copy_highlight_pane

0xf27f,	// (0x00011e27) cursor_graphics_pane

0xf27f,	// (0x00011e27) graphic_within_text_pane

0xf27f,	// (0x00011e27) link_highlight_pane

0x1e03,	// (0x000049ab) popup_preview_text_window_t5_ParamLimits

0x1e03,	// (0x000049ab) popup_preview_text_window_t5

0xf2e7,	// (0x00011e8f) cursor_digital_pane

0xf2e7,	// (0x00011e8f) cursor_primary_pane

0xf2f8,	// (0x00011ea0) cursor_primary_small_pane

0xf300,	// (0x00011ea8) cursor_secondary_pane

0xf308,	// (0x00011eb0) cursor_title_pane

0xf2e7,	// (0x00011e8f) link_highlight_digital_pane

0xf2ef,	// (0x00011e97) link_highlight_primary_pane

0xf2f8,	// (0x00011ea0) link_highlight_primary_small_pane

0xf300,	// (0x00011ea8) link_highlight_secondary_pane

0xf308,	// (0x00011eb0) link_highlight_title_pane

0xf2e7,	// (0x00011e8f) copy_highlight_digital_pane

0xf2e7,	// (0x00011e8f) copy_highlight_primary_pane

0xf2f8,	// (0x00011ea0) copy_highlight_primary_small_pane

0xf300,	// (0x00011ea8) copy_highlight_secondary_pane

0xf308,	// (0x00011eb0) copy_highlight_title_pane

0xf300,	// (0x00011ea8) graphic_text_digital_pane

0x1538,	// (0x000040e0) graphic_text_primary_pane

0x1541,	// (0x000040e9) graphic_text_primary_small_pane

0xf2f8,	// (0x00011ea0) graphic_text_secondary_pane

0xf2e7,	// (0x00011e8f) graphic_text_title_pane

0xa1b2,	// (0x0000cd5a) cursor_primary_pane_g1

0x152a,	// (0x000040d2) cursor_text_primary_t1

0xb393,	// (0x0000df3b) cursor_primary_small_pane_g1

0x151c,	// (0x000040c4) cursor_text_primary_small_t1

0xb389,	// (0x0000df31) cursor_primary_small_pane_g1_copy1

0x1504,	// (0x000040ac) cursor_text_primary_small_t1_copy1

0x14e2,	// (0x0000408a) cursor_text_title_t1

0xb37f,	// (0x0000df27) cursor_title_pane_g1

0xa1b2,	// (0x0000cd5a) cursor_digital_pane_g1

0xf310,	// (0x00011eb8) cursor_text_digital_t1

0xf31e,	// (0x00011ec6) link_highlight_primary_pane_g1

0x148b,	// (0x00004033) link_highlight_primary_pane_t1

0xf31e,	// (0x00011ec6) link_highlight_primary_small_pane_g1

0xf326,	// (0x00011ece) link_highlight_primary_small_pane_t1

0xf31e,	// (0x00011ec6) link_highlight_secondary_pane_g1

0xf335,	// (0x00011edd) link_highlight_secondary_pane_t1

0x13f0,	// (0x00003f98) link_highlight_title_pane_g1

0x1407,	// (0x00003faf) link_highlight_title_pane_t1

0x13f0,	// (0x00003f98) link_highlight_digital_pane_g1

0x13f8,	// (0x00003fa0) link_highlight_digital_pane_t1

0x12aa,	// (0x00003e52) copy_highlight_primary_pane_g1

0x12d0,	// (0x00003e78) copy_highlight_primary_pane_t1

0x12aa,	// (0x00003e52) copy_highlight_primary_small_pane_g1

0x12c1,	// (0x00003e69) copy_highlight_primary_small_pane_t1

0xf344,	// (0x00011eec) copy_highlight_secondary_pane_g1

0xf34c,	// (0x00011ef4) copy_highlight_secondary_pane_t1

0x12aa,	// (0x00003e52) copy_highlight_title_pane_g1

0x12b2,	// (0x00003e5a) copy_highlight_title_pane_t1

0x12aa,	// (0x00003e52) copy_highlight_digital_pane_g1

0x291c,	// (0x000054c4) copy_highlight_digital_pane_t1

0x2870,	// (0x00005418) graphic_text_primary_pane_g1

0x2900,	// (0x000054a8) graphic_text_primary_pane_t1

0x290e,	// (0x000054b6) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x00012531) graphic_text_primary_pane_t

0x28dc,	// (0x00005484) graphic_text_primary_small_pane_g1

0x28e4,	// (0x0000548c) graphic_text_primary_small_pane_t1

0x28f2,	// (0x0000549a) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x0001252c) graphic_text_primary_small_pane_t

0x28b8,	// (0x00005460) graphic_text_secondary_pane_g1

0x28c0,	// (0x00005468) graphic_text_secondary_pane_t1

0x28ce,	// (0x00005476) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x00012527) graphic_text_secondary_pane_t

0x2894,	// (0x0000543c) graphic_text_title_pane_g1

0x289c,	// (0x00005444) graphic_text_title_pane_t1

0x28aa,	// (0x00005452) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x00012522) graphic_text_title_pane_t

0x2870,	// (0x00005418) graphic_text_digital_pane_g1

0x2878,	// (0x00005420) graphic_text_digital_pane_t1

0x2886,	// (0x0000542e) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x0001251d) graphic_text_digital_pane_t

0xe199,	// (0x00010d41) navi_icon_pane_srt_ParamLimits

0xe199,	// (0x00010d41) navi_icon_pane_srt

0xe11d,	// (0x00010cc5) navi_midp_pane_srt

0xe11d,	// (0x00010cc5) navi_navi_pane_srt

0xe199,	// (0x00010d41) navi_text_pane_srt_ParamLimits

0xe199,	// (0x00010d41) navi_text_pane_srt

0x283b,	// (0x000053e3) navi_navi_icon_text_pane_srt

0x2843,	// (0x000053eb) navi_navi_pane_srt_g1_ParamLimits

0x2843,	// (0x000053eb) navi_navi_pane_srt_g1

0x2855,	// (0x000053fd) navi_navi_pane_srt_g2_ParamLimits

0x2855,	// (0x000053fd) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x00012518) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x00012518) navi_navi_pane_srt_g

0x2867,	// (0x0000540f) navi_navi_tabs_pane_srt

0x283b,	// (0x000053e3) navi_navi_text_pane_srt

0x283b,	// (0x000053e3) navi_navi_volume_pane_srt

0x282c,	// (0x000053d4) navi_navi_text_pane_srt_t1

0x2807,	// (0x000053af) navi_navi_volume_pane_srt_g1

0x280f,	// (0x000053b7) volume_small_pane_srt_ParamLimits

0x280f,	// (0x000053b7) volume_small_pane_srt

0xf35b,	// (0x00011f03) volume_small_pane_srt_g1_ParamLimits

0xf35b,	// (0x00011f03) volume_small_pane_srt_g1

0xf36b,	// (0x00011f13) volume_small_pane_srt_g2_ParamLimits

0xf36b,	// (0x00011f13) volume_small_pane_srt_g2

0xf37c,	// (0x00011f24) volume_small_pane_srt_g3_ParamLimits

0xf37c,	// (0x00011f24) volume_small_pane_srt_g3

0xf38d,	// (0x00011f35) volume_small_pane_srt_g4_ParamLimits

0xf38d,	// (0x00011f35) volume_small_pane_srt_g4

0xf39e,	// (0x00011f46) volume_small_pane_srt_g5_ParamLimits

0xf39e,	// (0x00011f46) volume_small_pane_srt_g5

0xf3af,	// (0x00011f57) volume_small_pane_srt_g6_ParamLimits

0xf3af,	// (0x00011f57) volume_small_pane_srt_g6

0xf3c0,	// (0x00011f68) volume_small_pane_srt_g7_ParamLimits

0xf3c0,	// (0x00011f68) volume_small_pane_srt_g7

0xf3d1,	// (0x00011f79) volume_small_pane_srt_g8_ParamLimits

0xf3d1,	// (0x00011f79) volume_small_pane_srt_g8

0xf3e2,	// (0x00011f8a) volume_small_pane_srt_g9_ParamLimits

0xf3e2,	// (0x00011f8a) volume_small_pane_srt_g9

0xf3f3,	// (0x00011f9b) volume_small_pane_srt_g10_ParamLimits

0xf3f3,	// (0x00011f9b) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x000122cc) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x000122cc) volume_small_pane_srt_g

0x947a,	// (0x0000c022) query_popup_data_pane_cp2

0x27f5,	// (0x0000539d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x27f5,	// (0x0000539d) navi_navi_icon_text_pane_srt_t1

0x1538,	// (0x000040e0) navi_tabs_2_long_pane_srt

0x1538,	// (0x000040e0) navi_tabs_2_pane_srt

0x1538,	// (0x000040e0) navi_tabs_3_long_pane_srt

0x1538,	// (0x000040e0) navi_tabs_3_pane_srt

0x1538,	// (0x000040e0) navi_tabs_4_pane_srt

0xbb17,	// (0x0000e6bf) tabs_2_active_pane_srt_ParamLimits

0xbb17,	// (0x0000e6bf) tabs_2_active_pane_srt

0xbb27,	// (0x0000e6cf) tabs_2_passive_pane_srt_ParamLimits

0xbb27,	// (0x0000e6cf) tabs_2_passive_pane_srt

0x0c1e,	// (0x000037c6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0c1e,	// (0x000037c6) bg_passive_tab_pane_cp1_srt

0xbae7,	// (0x0000e68f) bg_passive_tab_pane_g1_cp1_srt

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp1_srt

0xbaf0,	// (0x0000e698) bg_passive_tab_pane_g3_cp1_srt

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp1_srt_ParamLimits

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp1_srt

0xbaf9,	// (0x0000e6a1) tabs_2_active_pane_srt_g1

0xbb01,	// (0x0000e6a9) tabs_2_active_pane_srt_t1_ParamLimits

0xbb01,	// (0x0000e6a9) tabs_2_active_pane_srt_t1

0xbae7,	// (0x0000e68f) bg_active_tab_pane_g1_cp1_srt

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp1_srt

0xbaf0,	// (0x0000e698) bg_active_tab_pane_g3_cp1_srt

0xbab4,	// (0x0000e65c) tabs_3_active_pane_srt_ParamLimits

0xbab4,	// (0x0000e65c) tabs_3_active_pane_srt

0xbac5,	// (0x0000e66d) tabs_3_passive_pane_cp_srt_ParamLimits

0xbac5,	// (0x0000e66d) tabs_3_passive_pane_cp_srt

0xbad6,	// (0x0000e67e) tabs_3_passive_pane_srt_ParamLimits

0xbad6,	// (0x0000e67e) tabs_3_passive_pane_srt

0x0c1e,	// (0x000037c6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0c1e,	// (0x000037c6) bg_passive_tab_pane_cp2_srt

0xa1bc,	// (0x0000cd64) bg_passive_tab_pane_g1_cp2_srt

0xa028,	// (0x0000cbd0) bg_passive_tab_pane_g2_cp2_srt

0xa1c5,	// (0x0000cd6d) bg_passive_tab_pane_g3_cp2_srt

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp2_srt_ParamLimits

0xe18b,	// (0x00010d33) bg_active_tab_pane_cp2_srt

0xba96,	// (0x0000e63e) tabs_3_active_pane_srt_g1

0xba9e,	// (0x0000e646) tabs_3_active_pane_srt_t1_ParamLimits

0xba9e,	// (0x0000e646) tabs_3_active_pane_srt_t1

0xa1bc,	// (0x0000cd64) bg_active_tab_pane_g1_cp2_srt

0xa028,	// (0x0000cbd0) bg_active_tab_pane_g2_cp2_srt

0xa1c5,	// (0x0000cd6d) bg_active_tab_pane_g3_cp2_srt

0x270c,	// (0x000052b4) tabs_4_active_pane_srt_ParamLimits

0x270c,	// (0x000052b4) tabs_4_active_pane_srt

0x271e,	// (0x000052c6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x271e,	// (0x000052c6) tabs_4_passive_pane_cp2_srt

0xf4af,	// (0x00012057) aid_size_cell_toolbar

0x227a,	// (0x00004e22) main_idle_act_pane_ParamLimits

0x00cb,	// (0x00002c73) popup_large_graphic_colour_window_ParamLimits

0xaadd,	// (0x0000d685) popup_toolbar_window_ParamLimits

0xaadd,	// (0x0000d685) popup_toolbar_window

0x247d,	// (0x00005025) list_single_graphic_2heading_pane_ParamLimits

0x247d,	// (0x00005025) list_single_graphic_2heading_pane

0xea96,	// (0x0001163e) aid_size_cell_apps_grid_lsc_pane

0xeaa8,	// (0x00011650) aid_size_cell_apps_grid_prt_pane

0xf45e,	// (0x00012006) bg_wml_button_pane_cp1_ParamLimits

0xf45e,	// (0x00012006) bg_wml_button_pane_cp1

0xb10e,	// (0x0000dcb6) form_midp_field_text_pane_t1_ParamLimits

0x0c1e,	// (0x000037c6) input_focus_pane_cp050_ParamLimits

0x0f25,	// (0x00003acd) list_midp_form_text_pane_ParamLimits

0x0ec8,	// (0x00003a70) input_focus_pane_cp051_ParamLimits

0x0edc,	// (0x00003a84) list_midp_choice_pane_ParamLimits

0xb073,	// (0x0000dc1b) list_single_2graphic_pane_cp3_ParamLimits

0xb073,	// (0x0000dc1b) list_single_2graphic_pane_cp3

0xb087,	// (0x0000dc2f) list_single_midp_graphic_pane_ParamLimits

0xb087,	// (0x0000dc2f) list_single_midp_graphic_pane

0x0914,	// (0x000034bc) list_single_graphic_2heading_pane_g1_ParamLimits

0x0914,	// (0x000034bc) list_single_graphic_2heading_pane_g1

0xf185,	// (0x00011d2d) list_single_graphic_2heading_pane_g4_ParamLimits

0xf185,	// (0x00011d2d) list_single_graphic_2heading_pane_g4

0x0920,	// (0x000034c8) list_single_graphic_2heading_pane_g5_ParamLimits

0x0920,	// (0x000034c8) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x0001231f) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x0001231f) list_single_graphic_2heading_pane_g

0x092c,	// (0x000034d4) list_single_graphic_2heading_pane_t1_ParamLimits

0x092c,	// (0x000034d4) list_single_graphic_2heading_pane_t1

0x0940,	// (0x000034e8) list_single_graphic_2heading_pane_t2_ParamLimits

0x0940,	// (0x000034e8) list_single_graphic_2heading_pane_t2

0x095a,	// (0x00003502) list_single_graphic_2heading_pane_t3_ParamLimits

0x095a,	// (0x00003502) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x00012326) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x00012326) list_single_graphic_2heading_pane_t

0x0972,	// (0x0000351a) bg_popup_sub_pane_cp2

0x099c,	// (0x00003544) grid_toobar_pane

0x09d8,	// (0x00003580) cell_toolbar_pane_ParamLimits

0x09d8,	// (0x00003580) cell_toolbar_pane

0x0a2a,	// (0x000035d2) cell_toolbar_pane_g1_ParamLimits

0x0a2a,	// (0x000035d2) cell_toolbar_pane_g1

0xaf8b,	// (0x0000db33) cell_toolbar_pane_g2_ParamLimits

0xaf8b,	// (0x0000db33) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x0001232d) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x0001232d) cell_toolbar_pane_g

0x0a60,	// (0x00003608) grid_highlight_pane_cp2_ParamLimits

0x0a60,	// (0x00003608) grid_highlight_pane_cp2

0x0a7a,	// (0x00003622) toolbar_button_pane

0x0a86,	// (0x0000362e) toolbar_button_pane_g1

0x0a8e,	// (0x00003636) toolbar_button_pane_g2

0x0a96,	// (0x0000363e) toolbar_button_pane_g3

0x0a9e,	// (0x00003646) toolbar_button_pane_g4

0x0aa6,	// (0x0000364e) toolbar_button_pane_g5

0x0aae,	// (0x00003656) toolbar_button_pane_g6

0x0ab6,	// (0x0000365e) toolbar_button_pane_g7

0x0abe,	// (0x00003666) toolbar_button_pane_g8

0x0ac6,	// (0x0000366e) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x00012332) toolbar_button_pane_g

0x0ad6,	// (0x0000367e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0ad6,	// (0x0000367e) list_single_2graphic_pane_g1_cp3

0xaf9f,	// (0x0000db47) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf9f,	// (0x0000db47) list_single_2graphic_pane_g2_cp3

0xf0d4,	// (0x00011c7c) list_single_2graphic_pane_g3_cp3

0x0af3,	// (0x0000369b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0af3,	// (0x0000369b) list_single_2graphic_pane_g4_cp3

0xafb0,	// (0x0000db58) list_single_2graphic_pane_t1_cp3_ParamLimits

0xafb0,	// (0x0000db58) list_single_2graphic_pane_t1_cp3

0xeda5,	// (0x0001194d) list_single_midp_graphic_pane_g2_ParamLimits

0xeda5,	// (0x0001194d) list_single_midp_graphic_pane_g2

0xf4b7,	// (0x0001205f) aid_zoom_text_primary

0xf4bf,	// (0x00012067) aid_zoom_text_secondary

0xf476,	// (0x0001201e) status_small_pane_g7_ParamLimits

0xf476,	// (0x0001201e) status_small_pane_g7

0xa221,	// (0x0000cdc9) status_small_pane_t1_ParamLimits

0x90c1,	// (0x0000bc69) title_pane_g2

0x0003,

0xf529,	// (0x000120d1) title_pane_g

0x94d4,	// (0x0000c07c) aid_size_cell_colour_1_pane_ParamLimits

0x94d4,	// (0x0000c07c) aid_size_cell_colour_1_pane

0x94e8,	// (0x0000c090) aid_size_cell_colour_2_pane_ParamLimits

0x94e8,	// (0x0000c090) aid_size_cell_colour_2_pane

0x94fc,	// (0x0000c0a4) aid_size_cell_colour_3_pane_ParamLimits

0x94fc,	// (0x0000c0a4) aid_size_cell_colour_3_pane

0x9510,	// (0x0000c0b8) aid_size_cell_colour_4_pane_ParamLimits

0x9510,	// (0x0000c0b8) aid_size_cell_colour_4_pane

0xe912,	// (0x000114ba) title_pane_stacon_g1_ParamLimits

0xe912,	// (0x000114ba) title_pane_stacon_g1

0x1327,	// (0x00003ecf) popup_note_wait_window_g3_ParamLimits

0x1327,	// (0x00003ecf) popup_note_wait_window_g3

0x139d,	// (0x00003f45) popup_note_wait_window_t5_ParamLimits

0x139d,	// (0x00003f45) popup_note_wait_window_t5

0xe11d,	// (0x00010cc5) main_feb_china_hwr_fs_writing_pane

0xa491,	// (0x0000d039) popup_feb_china_hwr_fs_window_ParamLimits

0xa491,	// (0x0000d039) popup_feb_china_hwr_fs_window

0xafcc,	// (0x0000db74) aid_size_cell_hwr_fs_ParamLimits

0xafcc,	// (0x0000db74) aid_size_cell_hwr_fs

0x0c1e,	// (0x000037c6) bg_popup_sub_pane_cp3_ParamLimits

0x0c1e,	// (0x000037c6) bg_popup_sub_pane_cp3

0xafe1,	// (0x0000db89) grid_hwr_fs_pane_ParamLimits

0xafe1,	// (0x0000db89) grid_hwr_fs_pane

0x0c42,	// (0x000037ea) linegrid_hwr_fs_pane_ParamLimits

0x0c42,	// (0x000037ea) linegrid_hwr_fs_pane

0xaff9,	// (0x0000dba1) cell_hwr_fs_pane_ParamLimits

0xaff9,	// (0x0000dba1) cell_hwr_fs_pane

0x0c74,	// (0x0000381c) linegrid_hwr_fs_pane_g1_ParamLimits

0x0c74,	// (0x0000381c) linegrid_hwr_fs_pane_g1

0xb01f,	// (0x0000dbc7) linegrid_hwr_fs_pane_g2_ParamLimits

0xb01f,	// (0x0000dbc7) linegrid_hwr_fs_pane_g2

0x0c92,	// (0x0000383a) linegrid_hwr_fs_pane_g3_ParamLimits

0x0c92,	// (0x0000383a) linegrid_hwr_fs_pane_g3

0xb031,	// (0x0000dbd9) linegrid_hwr_fs_pane_g4_ParamLimits

0xb031,	// (0x0000dbd9) linegrid_hwr_fs_pane_g4

0x0cb8,	// (0x00003860) linegrid_hwr_fs_pane_g5_ParamLimits

0x0cb8,	// (0x00003860) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x00012358) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x00012358) linegrid_hwr_fs_pane_g

0x0cce,	// (0x00003876) cell_hwr_fs_pane_g1_ParamLimits

0x0cce,	// (0x00003876) cell_hwr_fs_pane_g1

0x084e,	// (0x000033f6) cell_hwr_fs_pane_g2_ParamLimits

0x084e,	// (0x000033f6) cell_hwr_fs_pane_g2

0xb04b,	// (0x0000dbf3) cell_hwr_fs_pane_g3_ParamLimits

0xb04b,	// (0x0000dbf3) cell_hwr_fs_pane_g3

0xb058,	// (0x0000dc00) cell_hwr_fs_pane_g4_ParamLimits

0xb058,	// (0x0000dc00) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x00012363) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x00012363) cell_hwr_fs_pane_g

0xb065,	// (0x0000dc0d) cell_hwr_fs_pane_t1

0xe11d,	// (0x00010cc5) grid_highlight_pane_cp6

0xe11d,	// (0x00010cc5) main_idle_act2_pane

0xe742,	// (0x000112ea) aid_inside_area_popup_secondary

0xb4b2,	// (0x0000e05a) aid_inside_area_window_primary_ParamLimits

0xb4b2,	// (0x0000e05a) aid_inside_area_window_primary

0xbb3f,	// (0x0000e6e7) ai2_news_ticker_pane

0x2933,	// (0x000054db) aid_size_cell_ai1_link_ParamLimits

0x2933,	// (0x000054db) aid_size_cell_ai1_link

0xbb47,	// (0x0000e6ef) popup_ai2_data_window_ParamLimits

0xbb47,	// (0x0000e6ef) popup_ai2_data_window

0x2963,	// (0x0000550b) popup_ai2_link_window_ParamLimits

0x2963,	// (0x0000550b) popup_ai2_link_window

0x0c1e,	// (0x000037c6) bg_popup_sub_pane_cp4_ParamLimits

0x0c1e,	// (0x000037c6) bg_popup_sub_pane_cp4

0x2977,	// (0x0000551f) grid_ai2_link_pane_ParamLimits

0x2977,	// (0x0000551f) grid_ai2_link_pane

0x298e,	// (0x00005536) popup_ai2_link_window_g1_ParamLimits

0x298e,	// (0x00005536) popup_ai2_link_window_g1

0x299a,	// (0x00005542) popup_ai2_link_window_g2_ParamLimits

0x299a,	// (0x00005542) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x00012536) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x00012536) popup_ai2_link_window_g

0x29a9,	// (0x00005551) ai2_mp_button_pane

0x29b1,	// (0x00005559) ai2_mp_volume_pane

0x0ec8,	// (0x00003a70) bg_popup_sub_pane_cp5_ParamLimits

0x0ec8,	// (0x00003a70) bg_popup_sub_pane_cp5

0x29b9,	// (0x00005561) heading_ai2_gene_pane_ParamLimits

0x29b9,	// (0x00005561) heading_ai2_gene_pane

0x29c5,	// (0x0000556d) list_ai2_gene_pane_ParamLimits

0x29c5,	// (0x0000556d) list_ai2_gene_pane

0x2a0d,	// (0x000055b5) cell_ai2_link_pane_ParamLimits

0x2a0d,	// (0x000055b5) cell_ai2_link_pane

0x2a23,	// (0x000055cb) cell_ai2_link_pane_g1

0xe11d,	// (0x00010cc5) grid_highlight_pane_cp7

0x2af3,	// (0x0000569b) ai2_mp_volume_pane_g1

0x2afb,	// (0x000056a3) ai2_mp_volume_pane_g2

0x2a68,	// (0x00005610) list_ai2_gene_pane_t1

0x2b03,	// (0x000056ab) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x0001254f) ai2_mp_volume_pane_g

0xbb5d,	// (0x0000e705) volume_small_pane_cp3

0x2b14,	// (0x000056bc) aid_size_cell_ai2_button

0x2b1c,	// (0x000056c4) grid_ai2_button_pane

0x2b25,	// (0x000056cd) cell_ai2_button_pane_ParamLimits

0x2b25,	// (0x000056cd) cell_ai2_button_pane

0xe0f3,	// (0x00010c9b) cell_ai2_button_pane_g1

0xe11d,	// (0x00010cc5) grid_highlight_pane_cp8

0x2ab3,	// (0x0000565b) ai2_gene_pane_t1_ParamLimits

0x2ab3,	// (0x0000565b) ai2_gene_pane_t1

0xa3f3,	// (0x0000cf9b) aid_height_parent_landscape

0xb7de,	// (0x0000e386) aid_height_set_list

0x227a,	// (0x00004e22) aid_size_parent

0x2696,	// (0x0000523e) aid_size_cell_graphic_pane_ParamLimits

0x29d5,	// (0x0000557d) popup_ai2_data_window_g1_ParamLimits

0x29d5,	// (0x0000557d) popup_ai2_data_window_g1

0x29e1,	// (0x00005589) ai2_news_ticker_pane_g1

0x29e9,	// (0x00005591) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x0001253b) ai2_news_ticker_pane_g

0x29f1,	// (0x00005599) ai2_news_ticker_pane_t1

0x29ff,	// (0x000055a7) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x00012540) ai2_news_ticker_pane_t

0x2a2c,	// (0x000055d4) heading_ai2_gene_pane_g1

0x2a34,	// (0x000055dc) heading_ai2_gene_pane_t1_ParamLimits

0x2a34,	// (0x000055dc) heading_ai2_gene_pane_t1

0x2a49,	// (0x000055f1) list_highlight_pane_cp6

0x2a51,	// (0x000055f9) ai2_gene_pane_ParamLimits

0x2a51,	// (0x000055f9) ai2_gene_pane

0x2a76,	// (0x0000561e) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x00012545) list_ai2_gene_pane_t

0x2a84,	// (0x0000562c) list_highlight_pane_cp8_ParamLimits

0x2a84,	// (0x0000562c) list_highlight_pane_cp8

0x2a95,	// (0x0000563d) ai2_gene_pane_g1_ParamLimits

0x2a95,	// (0x0000563d) ai2_gene_pane_g1

0x2aa7,	// (0x0000564f) ai2_gene_pane_g2_ParamLimits

0x2aa7,	// (0x0000564f) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x0001254a) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x0001254a) ai2_gene_pane_g

0xe508,	// (0x000110b0) scroll_pane_cp12

0xa3b0,	// (0x0000cf58) control_pane_t3_ParamLimits

0xa3b0,	// (0x0000cf58) control_pane_t3

0xa212,	// (0x0000cdba) status_small_pane_g8_ParamLimits

0xa212,	// (0x0000cdba) status_small_pane_g8

0xa554,	// (0x0000d0fc) popup_find_window_ParamLimits

0xa7e1,	// (0x0000d389) popup_note_image_window_ParamLimits

0x0a08,	// (0x000035b0) list_double2_graphic_pane_vc_g1_ParamLimits

0x0a08,	// (0x000035b0) list_double2_graphic_pane_vc_g1

0xf185,	// (0x00011d2d) list_double2_graphic_pane_vc_g2_ParamLimits

0xf185,	// (0x00011d2d) list_double2_graphic_pane_vc_g2

0x0920,	// (0x000034c8) list_double2_graphic_pane_vc_g3_ParamLimits

0x0920,	// (0x000034c8) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x00012144) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x00012144) list_double2_graphic_pane_vc_g

0x0a14,	// (0x000035bc) list_double2_graphic_pane_vc_t1_ParamLimits

0x0a14,	// (0x000035bc) list_double2_graphic_pane_vc_t1

0xf185,	// (0x00011d2d) list_single_heading_pane_vc_g1_ParamLimits

0xf185,	// (0x00011d2d) list_single_heading_pane_vc_g1

0x0920,	// (0x000034c8) list_single_heading_pane_vc_g2_ParamLimits

0x0920,	// (0x000034c8) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001214b) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001214b) list_single_heading_pane_vc_g

0x0b1b,	// (0x000036c3) list_single_heading_pane_vc_t1_ParamLimits

0x0b1b,	// (0x000036c3) list_single_heading_pane_vc_t1

0x0b31,	// (0x000036d9) list_single_heading_pane_vc_t2_ParamLimits

0x0b31,	// (0x000036d9) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x00012347) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x00012347) list_single_heading_pane_vc_t

0x0b59,	// (0x00003701) list_setting_number_pane_vc_g1_ParamLimits

0x0b59,	// (0x00003701) list_setting_number_pane_vc_g1

0x0b65,	// (0x0000370d) list_setting_number_pane_vc_g2_ParamLimits

0x0b65,	// (0x0000370d) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001234c) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001234c) list_setting_number_pane_vc_g

0x0b71,	// (0x00003719) list_setting_number_pane_vc_t1_ParamLimits

0x0b71,	// (0x00003719) list_setting_number_pane_vc_t1

0x0b85,	// (0x0000372d) list_setting_number_pane_vc_t2_ParamLimits

0x0b85,	// (0x0000372d) list_setting_number_pane_vc_t2

0x0ba1,	// (0x00003749) list_setting_number_pane_vc_t3_ParamLimits

0x0ba1,	// (0x00003749) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x00012351) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x00012351) list_setting_number_pane_vc_t

0x0bcd,	// (0x00003775) set_value_pane_vc_ParamLimits

0x0bcd,	// (0x00003775) set_value_pane_vc

0x247d,	// (0x00005025) list_double2_graphic_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double2_graphic_pane_vc

0x2490,	// (0x00005038) list_double2_large_graphic_pane_vc_ParamLimits

0x2490,	// (0x00005038) list_double2_large_graphic_pane_vc

0x247d,	// (0x00005025) list_double2_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double2_pane_vc

0x247d,	// (0x00005025) list_double_graphic_heading_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double_graphic_heading_pane_vc

0x247d,	// (0x00005025) list_double_graphic_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double_graphic_pane_vc

0x247d,	// (0x00005025) list_double_heading_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double_heading_pane_vc

0x24a2,	// (0x0000504a) list_double_large_graphic_pane_vc_ParamLimits

0x24a2,	// (0x0000504a) list_double_large_graphic_pane_vc

0x247d,	// (0x00005025) list_double_number_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double_number_pane_vc

0x247d,	// (0x00005025) list_double_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double_pane_vc

0x247d,	// (0x00005025) list_double_time_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_double_time_pane_vc

0x247d,	// (0x00005025) list_setting_number_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_setting_number_pane_vc

0x247d,	// (0x00005025) list_setting_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_setting_pane_vc

0x247d,	// (0x00005025) list_single_graphic_heading_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_single_graphic_heading_pane_vc

0x247d,	// (0x00005025) list_single_heading_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_single_heading_pane_vc

0x247d,	// (0x00005025) list_single_number_heading_pane_vc_ParamLimits

0x247d,	// (0x00005025) list_single_number_heading_pane_vc

0x2b59,	// (0x00005701) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2b59,	// (0x00005701) list_double_graphic_heading_pane_vc_g1

0xf185,	// (0x00011d2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf185,	// (0x00011d2d) list_double_graphic_heading_pane_vc_g2

0x0920,	// (0x000034c8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0920,	// (0x000034c8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x00012556) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x00012556) list_double_graphic_heading_pane_vc_g

0x2b65,	// (0x0000570d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2b65,	// (0x0000570d) list_double_graphic_heading_pane_vc_t1

0x2b79,	// (0x00005721) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2b79,	// (0x00005721) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x0001255d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x0001255d) list_double_graphic_heading_pane_vc_t

0x0b59,	// (0x00003701) list_setting_pane_vc_g1_ParamLimits

0x0b59,	// (0x00003701) list_setting_pane_vc_g1

0x0b65,	// (0x0000370d) list_setting_pane_vc_g2_ParamLimits

0x0b65,	// (0x0000370d) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001234c) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001234c) list_setting_pane_vc_g

0x2de7,	// (0x0000598f) list_setting_pane_vc_t1_ParamLimits

0x2de7,	// (0x0000598f) list_setting_pane_vc_t1

0x2e03,	// (0x000059ab) list_setting_pane_vc_t2_ParamLimits

0x2e03,	// (0x000059ab) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x000125a0) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x000125a0) list_setting_pane_vc_t

0x0bcd,	// (0x00003775) set_value_pane_cp_vc_ParamLimits

0x0bcd,	// (0x00003775) set_value_pane_cp_vc

0xf185,	// (0x00011d2d) list_single_number_heading_pane_vc_g1_ParamLimits

0xf185,	// (0x00011d2d) list_single_number_heading_pane_vc_g1

0x0920,	// (0x000034c8) list_single_number_heading_pane_vc_g2_ParamLimits

0x0920,	// (0x000034c8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001214b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001214b) list_single_number_heading_pane_vc_g

0x2e1d,	// (0x000059c5) list_single_number_heading_pane_vc_t1_ParamLimits

0x2e1d,	// (0x000059c5) list_single_number_heading_pane_vc_t1

0x2e33,	// (0x000059db) list_single_number_heading_pane_vc_t2_ParamLimits

0x2e33,	// (0x000059db) list_single_number_heading_pane_vc_t2

0x2e49,	// (0x000059f1) list_single_number_heading_pane_vc_t3_ParamLimits

0x2e49,	// (0x000059f1) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x000125a5) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x000125a5) list_single_number_heading_pane_vc_t

0x2e5b,	// (0x00005a03) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2e5b,	// (0x00005a03) list_single_graphic_heading_pane_vc_g1

0xf185,	// (0x00011d2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf185,	// (0x00011d2d) list_single_graphic_heading_pane_vc_g4

0x0920,	// (0x000034c8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0920,	// (0x000034c8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x000125ac) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x000125ac) list_single_graphic_heading_pane_vc_g

0x2e1d,	// (0x000059c5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2e1d,	// (0x000059c5) list_single_graphic_heading_pane_vc_t1

0x2e67,	// (0x00005a0f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2e67,	// (0x00005a0f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x000125b3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x000125b3) list_single_graphic_heading_pane_vc_t

0xf185,	// (0x00011d2d) list_double2_pane_vc_g1_ParamLimits

0xf185,	// (0x00011d2d) list_double2_pane_vc_g1

0x0920,	// (0x000034c8) list_double2_pane_vc_g2_ParamLimits

0x0920,	// (0x000034c8) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001214b) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001214b) list_double2_pane_vc_g

0x2e79,	// (0x00005a21) list_double2_pane_vc_t1_ParamLimits

0x2e79,	// (0x00005a21) list_double2_pane_vc_t1

0x2e91,	// (0x00005a39) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2e91,	// (0x00005a39) list_double2_large_graphic_pane_vc_g1

0x2e9d,	// (0x00005a45) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2e9d,	// (0x00005a45) list_double2_large_graphic_pane_vc_g2

0x2ea9,	// (0x00005a51) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2ea9,	// (0x00005a51) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00012168) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00012168) list_double2_large_graphic_pane_vc_g

0x2eb5,	// (0x00005a5d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2eb5,	// (0x00005a5d) list_double2_large_graphic_pane_vc_t1

0x2ecb,	// (0x00005a73) list_double_time_pane_vc_g1_ParamLimits

0x2ecb,	// (0x00005a73) list_double_time_pane_vc_g1

0x2ed7,	// (0x00005a7f) list_double_time_pane_vc_g2_ParamLimits

0x2ed7,	// (0x00005a7f) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x000125b8) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x000125b8) list_double_time_pane_vc_g

0x2ee3,	// (0x00005a8b) list_double_time_pane_vc_t1_ParamLimits

0x2ee3,	// (0x00005a8b) list_double_time_pane_vc_t1

0x2f07,	// (0x00005aaf) list_double_time_pane_vc_t2_ParamLimits

0x2f07,	// (0x00005aaf) list_double_time_pane_vc_t2

0x2f36,	// (0x00005ade) list_double_time_pane_vc_t3_ParamLimits

0x2f36,	// (0x00005ade) list_double_time_pane_vc_t3

0x2f48,	// (0x00005af0) list_double_time_pane_vc_t4_ParamLimits

0x2f48,	// (0x00005af0) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x000125bd) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x000125bd) list_double_time_pane_vc_t

0xf185,	// (0x00011d2d) list_double_pane_vc_g1_ParamLimits

0xf185,	// (0x00011d2d) list_double_pane_vc_g1

0x0920,	// (0x000034c8) list_double_pane_vc_g2_ParamLimits

0x0920,	// (0x000034c8) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001214b) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001214b) list_double_pane_vc_g

0x2f5c,	// (0x00005b04) list_double_pane_vc_t1_ParamLimits

0x2f5c,	// (0x00005b04) list_double_pane_vc_t1

0x2f70,	// (0x00005b18) list_double_pane_vc_t2_ParamLimits

0x2f70,	// (0x00005b18) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x000125c6) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x000125c6) list_double_pane_vc_t

0xf185,	// (0x00011d2d) list_double_number_pane_vc_g1_ParamLimits

0xf185,	// (0x00011d2d) list_double_number_pane_vc_g1

0x0920,	// (0x000034c8) list_double_number_pane_vc_g2_ParamLimits

0x0920,	// (0x000034c8) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001214b) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001214b) list_double_number_pane_vc_g

0x2f88,	// (0x00005b30) list_double_number_pane_vc_t1_ParamLimits

0x2f88,	// (0x00005b30) list_double_number_pane_vc_t1

0x2f5c,	// (0x00005b04) list_double_number_pane_vc_t2_ParamLimits

0x2f5c,	// (0x00005b04) list_double_number_pane_vc_t2

0x2f9a,	// (0x00005b42) list_double_number_pane_vc_t3_ParamLimits

0x2f9a,	// (0x00005b42) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x000125cb) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x000125cb) list_double_number_pane_vc_t

0x2fb2,	// (0x00005b5a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2fb2,	// (0x00005b5a) list_double_large_graphic_pane_vc_g1

0x2fce,	// (0x00005b76) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2fce,	// (0x00005b76) list_double_large_graphic_pane_vc_g2

0x2fe2,	// (0x00005b8a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2fe2,	// (0x00005b8a) list_double_large_graphic_pane_vc_g3

0x2ff1,	// (0x00005b99) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2ff1,	// (0x00005b99) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x000125d2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x000125d2) list_double_large_graphic_pane_vc_g

0x3000,	// (0x00005ba8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3000,	// (0x00005ba8) list_double_large_graphic_pane_vc_t1

0x301c,	// (0x00005bc4) list_double_large_graphic_pane_vc_t2_ParamLimits

0x301c,	// (0x00005bc4) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x000125db) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x000125db) list_double_large_graphic_pane_vc_t

0xf185,	// (0x00011d2d) list_double_heading_pane_vc_g1_ParamLimits

0xf185,	// (0x00011d2d) list_double_heading_pane_vc_g1

0x0920,	// (0x000034c8) list_double_heading_pane_vc_g2_ParamLimits

0x0920,	// (0x000034c8) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001214b) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001214b) list_double_heading_pane_vc_g

0x303e,	// (0x00005be6) list_double_heading_pane_vc_t1_ParamLimits

0x303e,	// (0x00005be6) list_double_heading_pane_vc_t1

0x3052,	// (0x00005bfa) list_double_heading_pane_vc_t2_ParamLimits

0x3052,	// (0x00005bfa) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x000125e0) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000125e0) list_double_heading_pane_vc_t

0x306a,	// (0x00005c12) list_double_graphic_pane_vc_g1_ParamLimits

0x306a,	// (0x00005c12) list_double_graphic_pane_vc_g1

0x307d,	// (0x00005c25) list_double_graphic_pane_vc_g2_ParamLimits

0x307d,	// (0x00005c25) list_double_graphic_pane_vc_g2

0xf185,	// (0x00011d2d) list_double_graphic_pane_vc_g3_ParamLimits

0xf185,	// (0x00011d2d) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x000125e5) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x000125e5) list_double_graphic_pane_vc_g

0x309a,	// (0x00005c42) list_double_graphic_pane_vc_t1_ParamLimits

0x309a,	// (0x00005c42) list_double_graphic_pane_vc_t1

0x30b9,	// (0x00005c61) list_double_graphic_pane_vc_t2_ParamLimits

0x30b9,	// (0x00005c61) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x000125ee) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x000125ee) list_double_graphic_pane_vc_t

0xe115,	// (0x00010cbd) aid_size_cell_fastswap

0x8d39,	// (0x0000b8e1) aid_size_cell_touch_ParamLimits

0x8d39,	// (0x0000b8e1) aid_size_cell_touch

0xe127,	// (0x00010ccf) popup_fast_swap_wide_window_ParamLimits

0xe127,	// (0x00010ccf) popup_fast_swap_wide_window

0x9058,	// (0x0000bc00) touch_pane_ParamLimits

0x9058,	// (0x0000bc00) touch_pane

0xe584,	// (0x0001112c) button_value_adjust_pane_cp2

0xe58c,	// (0x00011134) button_value_adjust_pane_cp4

0xe594,	// (0x0001113c) form_field_data_pane_cp2

0x9a9a,	// (0x0000c642) form_field_data_wide_pane_cp2

0xead7,	// (0x0001167f) bg_scroll_pane_ParamLimits

0x9dd0,	// (0x0000c978) scroll_handle_pane_ParamLimits

0xeaf6,	// (0x0001169e) scroll_sc2_down_pane_ParamLimits

0xeaf6,	// (0x0001169e) scroll_sc2_down_pane

0xeb1d,	// (0x000116c5) scroll_sc2_up_pane_ParamLimits

0xeb1d,	// (0x000116c5) scroll_sc2_up_pane

0xbc99,	// (0x0000e841) grid_wheel_folder_pane_g1_ParamLimits

0xbc99,	// (0x0000e841) grid_wheel_folder_pane_g1

0xef78,	// (0x00011b20) clock_nsta_pane_cp2_ParamLimits

0xef78,	// (0x00011b20) clock_nsta_pane_cp2

0xa0f6,	// (0x0000cc9e) listscroll_midp_pane_ParamLimits

0xa102,	// (0x0000ccaa) midp_canvas_pane

0xf4a7,	// (0x0001204f) nsta_clock_indic_pane

0xf4e7,	// (0x0001208f) listscroll_form_pane_vc

0xf4f7,	// (0x0001209f) listscroll_set_pane_vc_ParamLimits

0xf4f7,	// (0x0001209f) listscroll_set_pane_vc

0xac96,	// (0x0000d83e) clock_nsta_pane

0xacc0,	// (0x0000d868) indicator_nsta_pane

0x0972,	// (0x0000351a) bg_popup_sub_pane_cp2_ParamLimits

0x0986,	// (0x0000352e) find_pane_cp2_ParamLimits

0x0986,	// (0x0000352e) find_pane_cp2

0x099c,	// (0x00003544) grid_toobar_pane_ParamLimits

0x0bdd,	// (0x00003785) list_form_gen_pane_vc_ParamLimits

0x0bdd,	// (0x00003785) list_form_gen_pane_vc

0x0bf3,	// (0x0000379b) scroll_pane_cp8_vc_ParamLimits

0x0bf3,	// (0x0000379b) scroll_pane_cp8_vc

0x0d0c,	// (0x000038b4) data_form_wide_pane_vc_ParamLimits

0x0d0c,	// (0x000038b4) data_form_wide_pane_vc

0x0d18,	// (0x000038c0) form_field_data_wide_pane_vc_g1

0x0d20,	// (0x000038c8) form_field_data_wide_pane_vc_t1_ParamLimits

0x0d20,	// (0x000038c8) form_field_data_wide_pane_vc_t1

0xe5bb,	// (0x00011163) input_focus_pane_cp6_vc_ParamLimits

0xe5bb,	// (0x00011163) input_focus_pane_cp6_vc

0x10ae,	// (0x00003c56) list_midp_pane_ParamLimits

0x2700,	// (0x000052a8) scroll_pane_cp16_ParamLimits

0x2700,	// (0x000052a8) scroll_pane_cp16

0x1104,	// (0x00003cac) button_value_adjust_pane_ParamLimits

0x1104,	// (0x00003cac) button_value_adjust_pane

0xb7ef,	// (0x0000e397) button_value_adjust_pane_cp6_ParamLimits

0xb7ef,	// (0x0000e397) button_value_adjust_pane_cp6

0xb909,	// (0x0000e4b1) settings_code_pane_cp_ParamLimits

0xb909,	// (0x0000e4b1) settings_code_pane_cp

0xe0f3,	// (0x00010c9b) cell_touch_pane_g1

0xe0f3,	// (0x00010c9b) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x00012272) cell_touch_pane_g

0xbb66,	// (0x0000e70e) cell_touch_pane_cp_ParamLimits

0xbb66,	// (0x0000e70e) cell_touch_pane_cp

0xbb82,	// (0x0000e72a) cell_touch_pane_ParamLimits

0xbb82,	// (0x0000e72a) cell_touch_pane

0xe0f3,	// (0x00010c9b) scroll_sc2_down_pane_g1

0xe0f3,	// (0x00010c9b) scroll_sc2_up_pane_g1

0xe11d,	// (0x00010cc5) bg_set_opt_pane_cp4_vc

0x2b91,	// (0x00005739) list_set_graphic_pane_vc_g1_ParamLimits

0x2b91,	// (0x00005739) list_set_graphic_pane_vc_g1

0x2b9d,	// (0x00005745) list_set_graphic_pane_vc_g2_ParamLimits

0x2b9d,	// (0x00005745) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x00012562) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x00012562) list_set_graphic_pane_vc_g

0x2ba9,	// (0x00005751) text_primary_small_cp13_vc_ParamLimits

0x2ba9,	// (0x00005751) text_primary_small_cp13_vc

0x2bc1,	// (0x00005769) list_set_graphic_pane_vc_ParamLimits

0x2bc1,	// (0x00005769) list_set_graphic_pane_vc

0xe11d,	// (0x00010cc5) input_focus_pane_cp2_vc

0xe0f3,	// (0x00010c9b) setting_code_pane_vc_g1

0xe1b0,	// (0x00010d58) setting_code_pane_vc_t1

0x2bd4,	// (0x0000577c) set_text_pane_vc_t1_ParamLimits

0x2bd4,	// (0x0000577c) set_text_pane_vc_t1

0xe11d,	// (0x00010cc5) input_focus_pane_cp1_vc

0x2bf1,	// (0x00005799) list_set_text_pane_vc

0xe0f3,	// (0x00010c9b) setting_text_pane_vc_g1

0xe11d,	// (0x00010cc5) bg_set_opt_pane_cp2_vc

0xe1a7,	// (0x00010d4f) setting_slider_graphic_pane_vc_g1

0x2bfb,	// (0x000057a3) setting_slider_graphic_pane_vc_t1

0x2c0b,	// (0x000057b3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x00012567) setting_slider_graphic_pane_vc_t

0x2c1b,	// (0x000057c3) slider_set_pane_cp_vc

0x2c23,	// (0x000057cb) slider_set_pane_vc_g1

0x2c2c,	// (0x000057d4) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x0001256c) slider_set_pane_vc_g

0xe681,	// (0x00011229) set_opt_bg_pane_g1_copy1

0xe689,	// (0x00011231) set_opt_bg_pane_g2_copy1

0x2c58,	// (0x00005800) set_opt_bg_pane_g3_copy1

0xe699,	// (0x00011241) set_opt_bg_pane_g4_copy1

0xe6a1,	// (0x00011249) set_opt_bg_pane_g5_copy1

0xe6a9,	// (0x00011251) set_opt_bg_pane_g6_copy1

0x2c60,	// (0x00005808) set_opt_bg_pane_g7_copy1

0x2c6a,	// (0x00005812) set_opt_bg_pane_g8_copy1

0x2c72,	// (0x0000581a) set_opt_bg_pane_g9_copy1

0xe11d,	// (0x00010cc5) bg_set_opt_pane_cp_vc

0x2c7a,	// (0x00005822) setting_slider_pane_vc_t1

0x2c89,	// (0x00005831) setting_slider_pane_vc_t2

0x2c99,	// (0x00005841) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x0001257b) setting_slider_pane_vc_t

0x2ca9,	// (0x00005851) slider_set_pane_vc

0x1925,	// (0x000044cd) volume_set_pane_vc_g1

0x2cb1,	// (0x00005859) volume_set_pane_vc_g2

0x2cba,	// (0x00005862) volume_set_pane_vc_g3

0x2cc3,	// (0x0000586b) volume_set_pane_vc_g4

0x2ccc,	// (0x00005874) volume_set_pane_vc_g5

0x2cd5,	// (0x0000587d) volume_set_pane_vc_g6

0x2cde,	// (0x00005886) volume_set_pane_vc_g7

0x2ce7,	// (0x0000588f) volume_set_pane_vc_g8

0x2cf0,	// (0x00005898) volume_set_pane_vc_g9

0x2cf9,	// (0x000058a1) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x00012582) volume_set_pane_vc_g

0x2d02,	// (0x000058aa) volume_set_pane_vc

0x2d0c,	// (0x000058b4) button_value_adjust_pane_cp1_vc

0x2d16,	// (0x000058be) list_highlight_pane_cp2_vc

0x2d1f,	// (0x000058c7) list_set_pane_vc_ParamLimits

0x2d1f,	// (0x000058c7) list_set_pane_vc

0x2d7d,	// (0x00005925) main_pane_set_vc_t1_ParamLimits

0x2d7d,	// (0x00005925) main_pane_set_vc_t1

0x2d92,	// (0x0000593a) main_pane_set_vc_t2_ParamLimits

0x2d92,	// (0x0000593a) main_pane_set_vc_t2

0x2da4,	// (0x0000594c) main_pane_set_vc_t3_ParamLimits

0x2da4,	// (0x0000594c) main_pane_set_vc_t3

0x2db6,	// (0x0000595e) main_pane_set_vc_t4_ParamLimits

0x2db6,	// (0x0000595e) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x00012597) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x00012597) main_pane_set_vc_t

0x2dc8,	// (0x00005970) setting_code_pane_vc_ParamLimits

0x2dc8,	// (0x00005970) setting_code_pane_vc

0x2dd7,	// (0x0000597f) setting_slider_graphic_pane_vc

0x2dd7,	// (0x0000597f) setting_slider_pane_vc

0x2dd7,	// (0x0000597f) setting_text_pane_vc

0x2dd7,	// (0x0000597f) setting_volume_pane_vc

0x2ddf,	// (0x00005987) scroll_pane_cp121_vc

0xe572,	// (0x0001111a) set_content_pane_vc

0x30e3,	// (0x00005c8b) button_value_adjust_pane_g1

0x30ec,	// (0x00005c94) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x000125f3) button_value_adjust_pane_g

0x30f5,	// (0x00005c9d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x30f5,	// (0x00005c9d) form_field_slider_wide_pane_vc_t1

0x3109,	// (0x00005cb1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3109,	// (0x00005cb1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x000125f8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x000125f8) form_field_slider_wide_pane_vc_t

0xe18b,	// (0x00010d33) input_focus_pane_cp10_vc_ParamLimits

0xe18b,	// (0x00010d33) input_focus_pane_cp10_vc

0x3137,	// (0x00005cdf) slider_cont_pane_cp1_vc_ParamLimits

0x3137,	// (0x00005cdf) slider_cont_pane_cp1_vc

0x3149,	// (0x00005cf1) slider_form_pane_g1_cp2

0x2c2c,	// (0x000057d4) slider_form_pane_g2_cp2

0x3176,	// (0x00005d1e) form_field_slider_pane_vc_t3

0x3184,	// (0x00005d2c) form_field_slider_pane_vc_t4

0x3192,	// (0x00005d3a) slider_form_pane_vc_ParamLimits

0x3192,	// (0x00005d3a) slider_form_pane_vc

0x319f,	// (0x00005d47) form_field_slider_pane_vc_t1_ParamLimits

0x319f,	// (0x00005d47) form_field_slider_pane_vc_t1

0x3109,	// (0x00005cb1) form_field_slider_pane_vc_t2_ParamLimits

0x3109,	// (0x00005cb1) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x0001260a) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x0001260a) form_field_slider_pane_vc_t

0xe18b,	// (0x00010d33) input_focus_pane_cp9_vc_ParamLimits

0xe18b,	// (0x00010d33) input_focus_pane_cp9_vc

0x31bb,	// (0x00005d63) slider_cont_pane_vc_ParamLimits

0x31bb,	// (0x00005d63) slider_cont_pane_vc

0x31cf,	// (0x00005d77) list_form_graphic_pane_cp_vc_ParamLimits

0x31cf,	// (0x00005d77) list_form_graphic_pane_cp_vc

0x0d18,	// (0x000038c0) form_field_popup_wide_pane_vc_g1

0x31e4,	// (0x00005d8c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x31e4,	// (0x00005d8c) form_field_popup_wide_pane_vc_t1

0xe5bb,	// (0x00011163) input_focus_pane_cp8_vc_ParamLimits

0xe5bb,	// (0x00011163) input_focus_pane_cp8_vc

0x3229,	// (0x00005dd1) list_form_wide_pane_vc_ParamLimits

0x3229,	// (0x00005dd1) list_form_wide_pane_vc

0x3235,	// (0x00005ddd) list_form_graphic_pane_vc_g1

0x323d,	// (0x00005de5) list_form_graphic_pane_vc_t1_ParamLimits

0x323d,	// (0x00005de5) list_form_graphic_pane_vc_t1

0xe199,	// (0x00010d41) list_highlight_pane_cp5_vc_ParamLimits

0xe199,	// (0x00010d41) list_highlight_pane_cp5_vc

0x3259,	// (0x00005e01) list_form_graphic_pane_vc_ParamLimits

0x3259,	// (0x00005e01) list_form_graphic_pane_vc

0x0d18,	// (0x000038c0) form_field_popup_pane_vc_g1

0x326f,	// (0x00005e17) form_field_popup_pane_vc_t1_ParamLimits

0x326f,	// (0x00005e17) form_field_popup_pane_vc_t1

0xe5bb,	// (0x00011163) input_focus_pane_cp7_vc_ParamLimits

0xe5bb,	// (0x00011163) input_focus_pane_cp7_vc

0x3286,	// (0x00005e2e) list_form_pane_vc_ParamLimits

0x3286,	// (0x00005e2e) list_form_pane_vc

0x3292,	// (0x00005e3a) data_form_pane_vc_t1_ParamLimits

0x3292,	// (0x00005e3a) data_form_pane_vc_t1

0xe681,	// (0x00011229) input_focus_pane_vc_g1

0xe689,	// (0x00011231) input_focus_pane_vc_g2

0xe691,	// (0x00011239) input_focus_pane_vc_g3

0xe699,	// (0x00011241) input_focus_pane_vc_g4

0xe6a1,	// (0x00011249) input_focus_pane_vc_g5

0xe6a9,	// (0x00011251) input_focus_pane_vc_g6

0xe6b1,	// (0x00011259) input_focus_pane_vc_g7

0xe6b9,	// (0x00011261) input_focus_pane_vc_g8

0xe6c1,	// (0x00011269) input_focus_pane_vc_g9

0xe0f3,	// (0x00010c9b) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x000121fb) input_focus_pane_vc_g

0x0d0c,	// (0x000038b4) data_form_pane_vc_ParamLimits

0x0d0c,	// (0x000038b4) data_form_pane_vc

0x0d18,	// (0x000038c0) form_field_data_pane_vc_g1

0x32ad,	// (0x00005e55) form_field_data_pane_vc_t1_ParamLimits

0x32ad,	// (0x00005e55) form_field_data_pane_vc_t1

0xe5bb,	// (0x00011163) input_focus_pane_vc_ParamLimits

0xe5bb,	// (0x00011163) input_focus_pane_vc

0x32c7,	// (0x00005e6f) button_value_adjust_pane_cp3_vc

0x32cf,	// (0x00005e77) button_value_adjust_pane_cp5_vc

0x32d7,	// (0x00005e7f) form_field_data_pane_vc_ParamLimits

0x32d7,	// (0x00005e7f) form_field_data_pane_vc

0x32ee,	// (0x00005e96) form_field_data_pane_vc_cp2

0x32f6,	// (0x00005e9e) form_field_data_wide_pane_vc_ParamLimits

0x32f6,	// (0x00005e9e) form_field_data_wide_pane_vc

0x330c,	// (0x00005eb4) form_field_data_wide_pane_vc_cp2

0x3314,	// (0x00005ebc) form_field_popup_pane_vc_ParamLimits

0x3314,	// (0x00005ebc) form_field_popup_pane_vc

0x332b,	// (0x00005ed3) form_field_popup_wide_pane_vc_ParamLimits

0x332b,	// (0x00005ed3) form_field_popup_wide_pane_vc

0x3341,	// (0x00005ee9) form_field_slider_pane_vc_ParamLimits

0x3341,	// (0x00005ee9) form_field_slider_pane_vc

0x3354,	// (0x00005efc) form_field_slider_wide_pane_vc_ParamLimits

0x3354,	// (0x00005efc) form_field_slider_wide_pane_vc

0xbb9f,	// (0x0000e747) grid_touch_1_pane_ParamLimits

0xbb9f,	// (0x0000e747) grid_touch_1_pane

0xbbb3,	// (0x0000e75b) grid_touch_2_pane_ParamLimits

0xbbb3,	// (0x0000e75b) grid_touch_2_pane

0x3438,	// (0x00005fe0) touch_pane_g1_ParamLimits

0x3438,	// (0x00005fe0) touch_pane_g1

0x338b,	// (0x00005f33) cell_app_pane_cp_wide_ParamLimits

0x338b,	// (0x00005f33) cell_app_pane_cp_wide

0x339c,	// (0x00005f44) grid_popup_fast_wide_pane_ParamLimits

0x339c,	// (0x00005f44) grid_popup_fast_wide_pane

0x33b0,	// (0x00005f58) scroll_pane_cp19_ParamLimits

0x33b0,	// (0x00005f58) scroll_pane_cp19

0xe11d,	// (0x00010cc5) bg_popup_window_pane_cp20

0x33c4,	// (0x00005f6c) listscroll_popup_fast_wide_pane

0xbbdd,	// (0x0000e785) grid_indicator_nsta_pane

0x33de,	// (0x00005f86) clock_nsta_pane_g1

0x33e7,	// (0x00005f8f) clock_nsta_pane_t1

0xbbe9,	// (0x0000e791) cell_indicator_nsta_pane_ParamLimits

0xbbe9,	// (0x0000e791) cell_indicator_nsta_pane

0x3438,	// (0x00005fe0) cell_indicator_nsta_pane_g1

0xbc04,	// (0x0000e7ac) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x0001261b) cell_indicator_nsta_pane_g

0x3458,	// (0x00006000) clock_nsta_pane_cp

0x3461,	// (0x00006009) indicator_nsta_pane_cp

0x346b,	// (0x00006013) nsta_clock_indic_pane_g1

0xe1ef,	// (0x00010d97) grid_indicator_pane

0x9e6a,	// (0x0000ca12) scroll_pane_cp29

0xeea5,	// (0x00011a4d) indicator_nsta_pane_cp2_ParamLimits

0xeea5,	// (0x00011a4d) indicator_nsta_pane_cp2

0xe199,	// (0x00010d41) main_apps_wheel_pane

0xb147,	// (0x0000dcef) form_midp_field_text_pane_ParamLimits

0x10ba,	// (0x00003c62) scroll_bar_cp050_ParamLimits

0x34c4,	// (0x0000606c) cell_indicator_pane_ParamLimits

0x34c4,	// (0x0000606c) cell_indicator_pane

0x34dd,	// (0x00006085) cell_indicator_pane_g1

0xbc23,	// (0x0000e7cb) grid_wheel_folder_pane_ParamLimits

0xbc23,	// (0x0000e7cb) grid_wheel_folder_pane

0xbc31,	// (0x0000e7d9) list_wheel_apps_pane_ParamLimits

0xbc31,	// (0x0000e7d9) list_wheel_apps_pane

0xbc3f,	// (0x0000e7e7) main_apps_wheel_pane_g1_ParamLimits

0xbc3f,	// (0x0000e7e7) main_apps_wheel_pane_g1

0xbc4b,	// (0x0000e7f3) main_apps_wheel_pane_g2_ParamLimits

0xbc4b,	// (0x0000e7f3) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x00012637) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x00012637) main_apps_wheel_pane_g

0xbc59,	// (0x0000e801) main_apps_wheel_pane_t1_ParamLimits

0xbc59,	// (0x0000e801) main_apps_wheel_pane_t1

0xbc6d,	// (0x0000e815) list_wheel_apps_pane_g1

0xbc75,	// (0x0000e81d) list_wheel_apps_pane_g2

0xbc7d,	// (0x0000e825) list_wheel_apps_pane_g3

0xbc85,	// (0x0000e82d) list_wheel_apps_pane_g4

0xbc8f,	// (0x0000e837) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x0001263c) list_wheel_apps_pane_g

0xf124,	// (0x00011ccc) navi_icon_text_pane

0xab8a,	// (0x0000d732) aid_fill_nsta

0x35a4,	// (0x0000614c) navi_icon_text_pane_g1

0x35b0,	// (0x00006158) navi_icon_text_pane_t1

0xf014,	// (0x00011bbc) list_set_graphic_pane_t1_ParamLimits

0xf014,	// (0x00011bbc) list_set_graphic_pane_t1

0x1805,	// (0x000043ad) popup_midp_note_alarm_window_t6_ParamLimits

0x1805,	// (0x000043ad) popup_midp_note_alarm_window_t6

0x1817,	// (0x000043bf) popup_midp_note_alarm_window_t7_ParamLimits

0x1817,	// (0x000043bf) popup_midp_note_alarm_window_t7

0x1829,	// (0x000043d1) popup_midp_note_alarm_window_t8_ParamLimits

0x1829,	// (0x000043d1) popup_midp_note_alarm_window_t8

0x183b,	// (0x000043e3) popup_midp_note_alarm_window_t9_ParamLimits

0x183b,	// (0x000043e3) popup_midp_note_alarm_window_t9

0x184d,	// (0x000043f5) popup_midp_note_alarm_window_t10_ParamLimits

0x184d,	// (0x000043f5) popup_midp_note_alarm_window_t10

0x185f,	// (0x00004407) popup_midp_note_alarm_window_t11_ParamLimits

0x185f,	// (0x00004407) popup_midp_note_alarm_window_t11

0xb493,	// (0x0000e03b) scroll_pane_cp17_ParamLimits

0xb493,	// (0x0000e03b) scroll_pane_cp17

0x1925,	// (0x000044cd) volume_small_pane_cp_g1

0x35c2,	// (0x0000616a) volume_small_pane_cp_g2

0x35cb,	// (0x00006173) volume_small_pane_cp_g3

0x35d4,	// (0x0000617c) volume_small_pane_cp_g4

0x35dd,	// (0x00006185) volume_small_pane_cp_g5

0x2ccc,	// (0x00005874) volume_small_pane_cp_g6

0x35e6,	// (0x0000618e) volume_small_pane_cp_g7

0x35ef,	// (0x00006197) volume_small_pane_cp_g8

0x35f8,	// (0x000061a0) volume_small_pane_cp_g9

0x3601,	// (0x000061a9) volume_small_pane_cp_g10

0xf296,	// (0x00011e3e) midp_ticker_pane_g1_ParamLimits

0xf2a2,	// (0x00011e4a) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x000122c7) midp_ticker_pane_g_ParamLimits

0xf2ae,	// (0x00011e56) midp_ticker_pane_t1_ParamLimits

0xabae,	// (0x0000d756) aid_fill_nsta_2

0x10a6,	// (0x00003c4e) list_form2_midp_pane

0x2430,	// (0x00004fd8) midp_editing_number_pane_ParamLimits

0x243f,	// (0x00004fe7) midp_ticker_pane_ParamLimits

0x360a,	// (0x000061b2) form2_midp_field_pane

0x362e,	// (0x000061d6) scroll_pane_cp51

0x364e,	// (0x000061f6) form2_midp_button_pane_ParamLimits

0x364e,	// (0x000061f6) form2_midp_button_pane

0x3660,	// (0x00006208) form2_midp_content_pane_ParamLimits

0x3660,	// (0x00006208) form2_midp_content_pane

0x367a,	// (0x00006222) form2_midp_field_choice_group_pane

0x3682,	// (0x0000622a) form2_midp_field_pane_g1

0x368a,	// (0x00006232) form2_midp_field_pane_g2

0x3692,	// (0x0000623a) form2_midp_field_pane_g3

0x369a,	// (0x00006242) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x00012661) form2_midp_field_pane_g

0x36a2,	// (0x0000624a) form2_midp_gauge_slider_pane

0x36aa,	// (0x00006252) form2_midp_gauge_wait_pane

0x36b2,	// (0x0000625a) form2_midp_image_pane_ParamLimits

0x36b2,	// (0x0000625a) form2_midp_image_pane

0xbcc2,	// (0x0000e86a) form2_midp_label_pane_ParamLimits

0xbcc2,	// (0x0000e86a) form2_midp_label_pane

0xbcdb,	// (0x0000e883) form2_midp_label_pane_cp_ParamLimits

0xbcdb,	// (0x0000e883) form2_midp_label_pane_cp

0x3707,	// (0x000062af) form2_midp_string_pane_ParamLimits

0x3707,	// (0x000062af) form2_midp_string_pane

0xbcfa,	// (0x0000e8a2) form2_midp_text_pane_ParamLimits

0xbcfa,	// (0x0000e8a2) form2_midp_text_pane

0x3734,	// (0x000062dc) form2_midp_time_pane

0x3744,	// (0x000062ec) input_focus_pane_cp51_ParamLimits

0x3744,	// (0x000062ec) input_focus_pane_cp51

0xbd13,	// (0x0000e8bb) form2_midp_label_pane_t1_ParamLimits

0xbd13,	// (0x0000e8bb) form2_midp_label_pane_t1

0xbd53,	// (0x0000e8fb) form2_mdip_text_pane_t1_ParamLimits

0xbd53,	// (0x0000e8fb) form2_mdip_text_pane_t1

0x37bc,	// (0x00006364) form2_midp_time_pane_t1

0x37d7,	// (0x0000637f) form2_midp_gauge_slider_pane_t1

0xbd6f,	// (0x0000e917) form2_midp_gauge_slider_pane_t2

0xbd81,	// (0x0000e929) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x0001266a) form2_midp_gauge_slider_pane_t

0x380d,	// (0x000063b5) form2_midp_slider_pane

0x3819,	// (0x000063c1) form2_midp_gauge_wait_pane_t1

0x3827,	// (0x000063cf) form2_midp_wait_pane_ParamLimits

0x3827,	// (0x000063cf) form2_midp_wait_pane

0xbd93,	// (0x0000e93b) list_single_2graphic_pane_cp4_ParamLimits

0xbd93,	// (0x0000e93b) list_single_2graphic_pane_cp4

0xb087,	// (0x0000dc2f) list_single_midp_graphic_pane_cp_ParamLimits

0xb087,	// (0x0000dc2f) list_single_midp_graphic_pane_cp

0xe11d,	// (0x00010cc5) list_highlight_pane_cp20

0x387a,	// (0x00006422) list_single_2graphic_pane_g1_cp4

0x2a2c,	// (0x000055d4) list_single_2graphic_pane_g2_cp4

0x3882,	// (0x0000642a) list_single_2graphic_pane_t1_cp4

0xe199,	// (0x00010d41) list_highlight_pane_cp21

0x3891,	// (0x00006439) list_single_midp_graphic_pane_g4_cp

0x38a0,	// (0x00006448) list_single_midp_graphic_pane_t1_cp

0xbda8,	// (0x0000e950) form2_mdip_string_pane_t1_ParamLimits

0xbda8,	// (0x0000e950) form2_mdip_string_pane_t1

0xe11d,	// (0x00010cc5) bg_wml_button_pane_cp2

0xe0f3,	// (0x00010c9b) form2_midp_image_pane_g1

0xe525,	// (0x000110cd) list_double_large_graphic_pane_g5_ParamLimits

0xe525,	// (0x000110cd) list_double_large_graphic_pane_g5

0xa0f6,	// (0x0000cc9e) midp_form_pane_ParamLimits

0xe199,	// (0x00010d41) main_apps_wheel_pane_ParamLimits

0xa868,	// (0x0000d410) popup_preview_window_ParamLimits

0xa868,	// (0x0000d410) popup_preview_window

0xab35,	// (0x0000d6dd) popup_touch_info_window_ParamLimits

0xab35,	// (0x0000d6dd) popup_touch_info_window

0xab53,	// (0x0000d6fb) popup_touch_menu_window_ParamLimits

0xab53,	// (0x0000d6fb) popup_touch_menu_window

0xe0e9,	// (0x00010c91) bg_popup_sub_pane_cp6

0x39bc,	// (0x00006564) list_touch_menu_pane

0xbe1e,	// (0x0000e9c6) list_single_touch_menu_pane_ParamLimits

0xbe1e,	// (0x0000e9c6) list_single_touch_menu_pane

0xbe32,	// (0x0000e9da) list_single_touch_menu_pane_t1

0xe199,	// (0x00010d41) bg_popup_sub_pane_cp7_ParamLimits

0xe199,	// (0x00010d41) bg_popup_sub_pane_cp7

0x39e8,	// (0x00006590) heading_sub_pane

0x39f0,	// (0x00006598) list_touch_info_pane_ParamLimits

0x39f0,	// (0x00006598) list_touch_info_pane

0x39ff,	// (0x000065a7) list_single_touch_info_pane_ParamLimits

0x39ff,	// (0x000065a7) list_single_touch_info_pane

0x3a11,	// (0x000065b9) list_single_touch_info_pane_t1

0x3a1f,	// (0x000065c7) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x00012678) list_single_touch_info_pane_t

0xf27f,	// (0x00011e27) bg_popup_heading_pane_cp

0x3a2d,	// (0x000065d5) heading_sub_pane_t1

0x0c1e,	// (0x000037c6) bg_popup_preview_window_pane_cp_ParamLimits

0x0c1e,	// (0x000037c6) bg_popup_preview_window_pane_cp

0x39e8,	// (0x00006590) heading_preview_pane

0x39f0,	// (0x00006598) list_preview_pane_ParamLimits

0x39f0,	// (0x00006598) list_preview_pane

0x3a3b,	// (0x000065e3) popup_preview_window_g1

0x39ff,	// (0x000065a7) list_single_preview_pane_ParamLimits

0x39ff,	// (0x000065a7) list_single_preview_pane

0x3a43,	// (0x000065eb) list_single_preview_pane_g1

0x3a4b,	// (0x000065f3) list_single_preview_pane_t1

0x3a11,	// (0x000065b9) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x0001267d) list_single_preview_pane_t

0x3a59,	// (0x00006601) bg_popup_heading_pane_cp2_ParamLimits

0x3a59,	// (0x00006601) bg_popup_heading_pane_cp2

0x3a6f,	// (0x00006617) heading_preview_pane_g1

0x3a77,	// (0x0000661f) heading_preview_pane_t1_ParamLimits

0x3a77,	// (0x0000661f) heading_preview_pane_t1

0xe206,	// (0x00010dae) soft_indicator_pane_t1_ParamLimits

0xe4e5,	// (0x0001108d) scroll_pane_ParamLimits

0xeb0b,	// (0x000116b3) scroll_sc2_left_pane

0xeb14,	// (0x000116bc) scroll_sc2_right_pane

0xeb33,	// (0x000116db) scroll_bg_pane_g1_ParamLimits

0xeb48,	// (0x000116f0) scroll_bg_pane_g2_ParamLimits

0xeb60,	// (0x00011708) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x00012252) scroll_bg_pane_g_ParamLimits

0xeb33,	// (0x000116db) scroll_handle_pane_g1_ParamLimits

0xeb75,	// (0x0001171d) scroll_handle_pane_g2_ParamLimits

0xeb60,	// (0x00011708) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x00012259) scroll_handle_pane_g_ParamLimits

0xa435,	// (0x0000cfdd) popup_choice_list_window_ParamLimits

0xa435,	// (0x0000cfdd) popup_choice_list_window

0x097e,	// (0x00003526) choice_list_pane

0x0a52,	// (0x000035fa) cell_toolbar_pane_t1

0x0a7a,	// (0x00003622) toolbar_button_pane_ParamLimits

0x1e95,	// (0x00004a3d) ai_gene_pane_1_t2_ParamLimits

0x1e95,	// (0x00004a3d) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x00012475) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x00012475) ai_gene_pane_1_t

0x3a94,	// (0x0000663c) scroll_sc2_left_pane_g1

0x3a94,	// (0x0000663c) scroll_sc2_right_pane_g1

0xf45e,	// (0x00012006) bg_popup_sub_pane_cp10

0x3a9e,	// (0x00006646) list_choice_list_pane

0xb973,	// (0x0000e51b) list_single_choice_list_pane_ParamLimits

0xb973,	// (0x0000e51b) list_single_choice_list_pane

0xe844,	// (0x000113ec) list_single_choice_list_pane_g1

0x9c94,	// (0x0000c83c) list_single_choice_list_pane_t1_ParamLimits

0x9c94,	// (0x0000c83c) list_single_choice_list_pane_t1

0x3ad2,	// (0x0000667a) choice_list_pane_g1

0xbe40,	// (0x0000e9e8) choice_list_pane_t1

0xe0e9,	// (0x00010c91) input_focus_pane_cp11

0xe926,	// (0x000114ce) title_pane_stacon_g2_ParamLimits

0xe926,	// (0x000114ce) title_pane_stacon_g2

0x0002,

0xf690,	// (0x00012238) title_pane_stacon_g_ParamLimits

0xf690,	// (0x00012238) title_pane_stacon_g

0xf27f,	// (0x00011e27) cursor_press_pane

0xa4dc,	// (0x0000d084) popup_fep_hwr_window_ParamLimits

0xa4dc,	// (0x0000d084) popup_fep_hwr_window

0x0076,	// (0x00002c1e) popup_fep_vkb_window_ParamLimits

0x0076,	// (0x00002c1e) popup_fep_vkb_window

0xbe4e,	// (0x0000e9f6) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x000126a6) fep_vkb_side_pane_g_ParamLimits

0x3b29,	// (0x000066d1) fep_hwr_candidate_pane_ParamLimits

0x3b29,	// (0x000066d1) fep_hwr_candidate_pane

0x3b53,	// (0x000066fb) fep_hwr_side_pane_ParamLimits

0x3b53,	// (0x000066fb) fep_hwr_side_pane

0x3b73,	// (0x0000671b) fep_hwr_top_pane_ParamLimits

0x3b73,	// (0x0000671b) fep_hwr_top_pane

0x3b8b,	// (0x00006733) fep_hwr_write_pane_ParamLimits

0x3b8b,	// (0x00006733) fep_hwr_write_pane

0xfafe,	// (0x000126a6) fep_vkb_side_pane_g

0x3bc5,	// (0x0000676d) fep_hwr_top_pane_g1

0x3bd7,	// (0x0000677f) fep_hwr_top_pane_g2

0x3be9,	// (0x00006791) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x00012682) fep_hwr_top_pane_g

0x3bfe,	// (0x000067a6) fep_hwr_top_text_pane

0xec38,	// (0x000117e0) fep_hwr_top_text_pane_g1

0x3cd6,	// (0x0000687e) fep_hwr_top_text_pane_t1

0x3d26,	// (0x000068ce) fep_hwr_candidate_pane_g1

0x3f91,	// (0x00006b39) fep_vkb_keypad_pane_g3_ParamLimits

0x3f91,	// (0x00006b39) fep_vkb_keypad_pane_g3

0x3fb9,	// (0x00006b61) fep_vkb_keypad_pane_g4_ParamLimits

0x3fb9,	// (0x00006b61) fep_vkb_keypad_pane_g4

0x4028,	// (0x00006bd0) fep_vkb_bottom_pane_g2_ParamLimits

0x4028,	// (0x00006bd0) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x000126ad) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x000126ad) fep_vkb_bottom_pane_g

0x3a94,	// (0x0000663c) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x000126b7) cell_vkb_side_pane_g

0x40b3,	// (0x00006c5b) cell_vkb_side_pane_t1

0x40c1,	// (0x00006c69) cell_vkb_side_pane_t1_copy1

0x3a94,	// (0x0000663c) bg_fep_vkb_candidate_pane_g2

0x41ed,	// (0x00006d95) cell_vkb_candidate_pane_ParamLimits

0x3d5a,	// (0x00006902) aid_size_cell_vkb_ParamLimits

0x3d5a,	// (0x00006902) aid_size_cell_vkb

0x41ed,	// (0x00006d95) cell_vkb_candidate_pane

0x4221,	// (0x00006dc9) bg_popup_fep_shadow_pane_g1

0xbeb5,	// (0x0000ea5d) fep_vkb_bottom_pane_ParamLimits

0xbeb5,	// (0x0000ea5d) fep_vkb_bottom_pane

0x3e1e,	// (0x000069c6) fep_vkb_candidate_pane_ParamLimits

0x3e1e,	// (0x000069c6) fep_vkb_candidate_pane

0xbeda,	// (0x0000ea82) fep_vkb_keypad_pane_ParamLimits

0xbeda,	// (0x0000ea82) fep_vkb_keypad_pane

0xbf0f,	// (0x0000eab7) fep_vkb_side_pane_ParamLimits

0xbf0f,	// (0x0000eab7) fep_vkb_side_pane

0xbf4b,	// (0x0000eaf3) fep_vkb_top_pane_ParamLimits

0xbf4b,	// (0x0000eaf3) fep_vkb_top_pane

0x3eea,	// (0x00006a92) fep_vkb_top_pane_g1_ParamLimits

0x3eea,	// (0x00006a92) fep_vkb_top_pane_g1

0x3ef9,	// (0x00006aa1) fep_vkb_top_pane_g2_ParamLimits

0x3ef9,	// (0x00006aa1) fep_vkb_top_pane_g2

0x3f08,	// (0x00006ab0) fep_vkb_top_pane_g3_ParamLimits

0x3f08,	// (0x00006ab0) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x0001269d) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x0001269d) fep_vkb_top_pane_g

0x3f26,	// (0x00006ace) fep_vkb_top_text_pane_ParamLimits

0x3f26,	// (0x00006ace) fep_vkb_top_text_pane

0xbf80,	// (0x0000eb28) fep_vkb_side_pane_g1_ParamLimits

0xbf80,	// (0x0000eb28) fep_vkb_side_pane_g1

0x3f80,	// (0x00006b28) grid_vkb_side_pane_ParamLimits

0x3f80,	// (0x00006b28) grid_vkb_side_pane

0x4229,	// (0x00006dd1) bg_popup_fep_shadow_pane_g2

0x4232,	// (0x00006dda) bg_popup_fep_shadow_pane_g3

0x423a,	// (0x00006de2) bg_popup_fep_shadow_pane_g4

0x4243,	// (0x00006deb) bg_popup_fep_shadow_pane_g5

0x424d,	// (0x00006df5) bg_popup_fep_shadow_pane_g6

0x4255,	// (0x00006dfd) bg_popup_fep_shadow_pane_g7

0xe6a1,	// (0x00011249) bg_popup_fep_shadow_pane_g8

0x3fd7,	// (0x00006b7f) grid_vkb_keypad_number_pane_ParamLimits

0x3fd7,	// (0x00006b7f) grid_vkb_keypad_number_pane

0x3fe7,	// (0x00006b8f) grid_vkb_keypad_pane_ParamLimits

0x3fe7,	// (0x00006b8f) grid_vkb_keypad_pane

0x400d,	// (0x00006bb5) fep_vkb_bottom_pane_g1_ParamLimits

0x400d,	// (0x00006bb5) fep_vkb_bottom_pane_g1

0x4036,	// (0x00006bde) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4036,	// (0x00006bde) grid_vkb_keypad_bottom_left_pane

0x404b,	// (0x00006bf3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x404b,	// (0x00006bf3) grid_vkb_keypad_bottom_right_pane

0x4060,	// (0x00006c08) fep_vkb_top_text_pane_g1

0xbfc7,	// (0x0000eb6f) fep_vkb_top_text_pane_t1

0xbfd9,	// (0x0000eb81) cell_vkb_side_pane_ParamLimits

0xbfd9,	// (0x0000eb81) cell_vkb_side_pane

0x3a94,	// (0x0000663c) cell_vkb_side_pane_g1

0x40cf,	// (0x00006c77) cell_vkb_keypad_pane_ParamLimits

0x40cf,	// (0x00006c77) cell_vkb_keypad_pane

0x4144,	// (0x00006cec) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x000126ca) bg_popup_fep_shadow_pane_g

0x3a94,	// (0x0000663c) cell_hwr_side_pane_g1

0x3a94,	// (0x0000663c) cell_hwr_side_pane_g2

0x414e,	// (0x00006cf6) cell_vkb_keypad_pane_t1

0xbfef,	// (0x0000eb97) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbfef,	// (0x0000eb97) cell_vkb_keypad_bottom_left_pane

0xc004,	// (0x0000ebac) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc004,	// (0x0000ebac) cell_vkb_keypad_bottom_right_pane

0x3a94,	// (0x0000663c) cell_vkb_keypad_bottom_left_pane_g1

0x3a94,	// (0x0000663c) cell_vkb_keypad_bottom_right_pane_g1

0x41b2,	// (0x00006d5a) cell_vkb_keypad_number_pane_ParamLimits

0x41b2,	// (0x00006d5a) cell_vkb_keypad_number_pane

0x41d1,	// (0x00006d79) cell_vkb_keypad_number_pane_g1

0x41db,	// (0x00006d83) cell_vkb_keypad_number_pane_g2

0x41e4,	// (0x00006d8c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x000126bc) cell_vkb_keypad_number_pane_g

0x414e,	// (0x00006cf6) cell_vkb_keypad_number_pane_t1

0x4208,	// (0x00006db0) fep_vkb_candidate_pane_g1

0x0001,

0xfb0f,	// (0x000126b7) cell_hwr_side_pane_g

0x4267,	// (0x00006e0f) cell_hwr_side_pane_t1

0x4275,	// (0x00006e1d) cell_hwr_side_pane_t1_copy1

0x3f18,	// (0x00006ac0) cell_hwr_candidate_pane_g1

0x42c5,	// (0x00006e6d) cell_hwr_candidate_pane_t1

0x3a94,	// (0x0000663c) cell_vkb_candidate_pane_g2

0x4319,	// (0x00006ec1) cell_vkb_candidate_pane_t1

0x3af0,	// (0x00006698) bg_popup_fep_shadow_pane_ParamLimits

0x3af0,	// (0x00006698) bg_popup_fep_shadow_pane

0x3ba5,	// (0x0000674d) bg_fep_hwr_top_pane_g4

0x3c13,	// (0x000067bb) bg_hwr_side_pane_g1_ParamLimits

0x3c13,	// (0x000067bb) bg_hwr_side_pane_g1

0xbe6e,	// (0x0000ea16) cell_hwr_side_pane_ParamLimits

0xbe6e,	// (0x0000ea16) cell_hwr_side_pane

0x3c81,	// (0x00006829) fep_hwr_write_pane_g1_ParamLimits

0x3c81,	// (0x00006829) fep_hwr_write_pane_g1

0x3c8e,	// (0x00006836) fep_hwr_write_pane_g2_ParamLimits

0x3c8e,	// (0x00006836) fep_hwr_write_pane_g2

0x3c9b,	// (0x00006843) fep_hwr_write_pane_g3_ParamLimits

0x3c9b,	// (0x00006843) fep_hwr_write_pane_g3

0xbe8e,	// (0x0000ea36) fep_hwr_write_pane_g4_ParamLimits

0xbe8e,	// (0x0000ea36) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x00012689) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x00012689) fep_hwr_write_pane_g

0x3ba5,	// (0x0000674d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3ba5,	// (0x0000674d) bg_fep_hwr_candidate_pane_g2

0x3ce4,	// (0x0000688c) cell_hwr_candidate_pane_ParamLimits

0x3ce4,	// (0x0000688c) cell_hwr_candidate_pane

0x3d26,	// (0x000068ce) fep_hwr_candidate_pane_g1_ParamLimits

0x3d88,	// (0x00006930) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3d88,	// (0x00006930) bg_popup_fep_shadow_pane_cp2

0x3f18,	// (0x00006ac0) fep_vkb_top_pane_g4_ParamLimits

0x3f18,	// (0x00006ac0) fep_vkb_top_pane_g4

0x3f5e,	// (0x00006b06) fep_vkb_side_pane_g2_ParamLimits

0x3f5e,	// (0x00006b06) fep_vkb_side_pane_g2

0x99bf,	// (0x0000c567) list_setting_pane_t4_ParamLimits

0x99bf,	// (0x0000c567) list_setting_pane_t4

0x9a39,	// (0x0000c5e1) list_setting_number_pane_t5_ParamLimits

0x9a39,	// (0x0000c5e1) list_setting_number_pane_t5

0xec8e,	// (0x00011836) list_double_heading_pane_cp2_ParamLimits

0xec8e,	// (0x00011836) list_double_heading_pane_cp2

0xe84c,	// (0x000113f4) list_double_heading_pane_g1_cp2_ParamLimits

0xe84c,	// (0x000113f4) list_double_heading_pane_g1_cp2

0x4327,	// (0x00006ecf) list_double_heading_pane_g2_cp2_ParamLimits

0x4327,	// (0x00006ecf) list_double_heading_pane_g2_cp2

0x433b,	// (0x00006ee3) list_double_heading_pane_t1_cp2_ParamLimits

0x433b,	// (0x00006ee3) list_double_heading_pane_t1_cp2

0x4351,	// (0x00006ef9) list_double_heading_pane_t2_cp2_ParamLimits

0x4351,	// (0x00006ef9) list_double_heading_pane_t2_cp2

0xe0e1,	// (0x00010c89) aid_value_unit2

0xe13d,	// (0x00010ce5) popup_preview_fixed_window

0xe2dd,	// (0x00010e85) bg_popup_preview_window_pane_cp02

0x4363,	// (0x00006f0b) list_preview_fixed_pane

0x43a9,	// (0x00006f51) list_empty_pane_fp_ParamLimits

0x43a9,	// (0x00006f51) list_empty_pane_fp

0x43a9,	// (0x00006f51) list_single_cale_day_pane_fp_ParamLimits

0x43a9,	// (0x00006f51) list_single_cale_day_pane_fp

0x43a9,	// (0x00006f51) list_single_graphic_heading_pane_fp_ParamLimits

0x43a9,	// (0x00006f51) list_single_graphic_heading_pane_fp

0x43a9,	// (0x00006f51) list_single_graphic_pane_fp_ParamLimits

0x43a9,	// (0x00006f51) list_single_graphic_pane_fp

0x43a9,	// (0x00006f51) list_single_heading_pane_fp_ParamLimits

0x43a9,	// (0x00006f51) list_single_heading_pane_fp

0x43a9,	// (0x00006f51) list_single_pane_fp_ParamLimits

0x43a9,	// (0x00006f51) list_single_pane_fp

0x43bf,	// (0x00006f67) list_single_pane_fp_g1_ParamLimits

0x43bf,	// (0x00006f67) list_single_pane_fp_g1

0xe858,	// (0x00011400) list_single_pane_fp_g2_ParamLimits

0xe858,	// (0x00011400) list_single_pane_fp_g2

0x43cb,	// (0x00006f73) list_single_pane_fp_g3_ParamLimits

0x43cb,	// (0x00006f73) list_single_pane_fp_g3

0x43df,	// (0x00006f87) list_single_pane_fp_g4_ParamLimits

0x43df,	// (0x00006f87) list_single_pane_fp_g4

0x0003,

0xfb43,	// (0x000126eb) list_single_pane_fp_g_ParamLimits

0xfb43,	// (0x000126eb) list_single_pane_fp_g

0x43eb,	// (0x00006f93) list_single_pane_fp_t1_ParamLimits

0x43eb,	// (0x00006f93) list_single_pane_fp_t1

0x4402,	// (0x00006faa) list_single_graphic_pane_fp_g1_ParamLimits

0x4402,	// (0x00006faa) list_single_graphic_pane_fp_g1

0x43bf,	// (0x00006f67) list_single_graphic_pane_fp_g2_ParamLimits

0x43bf,	// (0x00006f67) list_single_graphic_pane_fp_g2

0xe858,	// (0x00011400) list_single_graphic_pane_fp_g3_ParamLimits

0xe858,	// (0x00011400) list_single_graphic_pane_fp_g3

0x43cb,	// (0x00006f73) list_single_graphic_pane_fp_g4_ParamLimits

0x43cb,	// (0x00006f73) list_single_graphic_pane_fp_g4

0x43df,	// (0x00006f87) list_single_graphic_pane_fp_g5_ParamLimits

0x43df,	// (0x00006f87) list_single_graphic_pane_fp_g5

0x0004,

0xfb4c,	// (0x000126f4) list_single_graphic_pane_fp_g_ParamLimits

0xfb4c,	// (0x000126f4) list_single_graphic_pane_fp_g

0x440e,	// (0x00006fb6) list_single_graphic_pane_fp_t1_ParamLimits

0x440e,	// (0x00006fb6) list_single_graphic_pane_fp_t1

0x4402,	// (0x00006faa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4402,	// (0x00006faa) list_single_graphic_heading_pane_fp_g1

0x43bf,	// (0x00006f67) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x43bf,	// (0x00006f67) list_single_graphic_heading_pane_fp_g2

0xe858,	// (0x00011400) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe858,	// (0x00011400) list_single_graphic_heading_pane_fp_g3

0x43cb,	// (0x00006f73) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x43cb,	// (0x00006f73) list_single_graphic_heading_pane_fp_g4

0x43df,	// (0x00006f87) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x43df,	// (0x00006f87) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x000126f4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x000126f4) list_single_graphic_heading_pane_fp_g

0x4424,	// (0x00006fcc) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4424,	// (0x00006fcc) list_single_graphic_heading_pane_fp_t1

0x443a,	// (0x00006fe2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x443a,	// (0x00006fe2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb57,	// (0x000126ff) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb57,	// (0x000126ff) list_single_graphic_heading_pane_fp_t

0x444c,	// (0x00006ff4) list_single_cale_day_pane_fp_g1_ParamLimits

0x444c,	// (0x00006ff4) list_single_cale_day_pane_fp_g1

0x4484,	// (0x0000702c) list_single_cale_day_pane_fp_g2_ParamLimits

0x4484,	// (0x0000702c) list_single_cale_day_pane_fp_g2

0x4490,	// (0x00007038) list_single_cale_day_pane_fp_g3_ParamLimits

0x4490,	// (0x00007038) list_single_cale_day_pane_fp_g3

0x44b8,	// (0x00007060) list_single_cale_day_pane_fp_g4_ParamLimits

0x44b8,	// (0x00007060) list_single_cale_day_pane_fp_g4

0x44dc,	// (0x00007084) list_single_cale_day_pane_fp_g5_ParamLimits

0x44dc,	// (0x00007084) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5c,	// (0x00012704) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5c,	// (0x00012704) list_single_cale_day_pane_fp_g

0x4500,	// (0x000070a8) list_single_cale_day_pane_fp_t1_ParamLimits

0x4500,	// (0x000070a8) list_single_cale_day_pane_fp_t1

0x4526,	// (0x000070ce) list_single_cale_day_pane_fp_t2_ParamLimits

0x4526,	// (0x000070ce) list_single_cale_day_pane_fp_t2

0x453f,	// (0x000070e7) list_single_cale_day_pane_fp_t3_ParamLimits

0x453f,	// (0x000070e7) list_single_cale_day_pane_fp_t3

0x0002,

0xfb67,	// (0x0001270f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb67,	// (0x0001270f) list_single_cale_day_pane_fp_t

0x43bf,	// (0x00006f67) list_empty_pane_fp_g1_ParamLimits

0x43bf,	// (0x00006f67) list_empty_pane_fp_g1

0x4558,	// (0x00007100) list_empty_pane_fp_t1

0x4566,	// (0x0000710e) list_empty_pane_fp_t2

0x0001,

0xfb6e,	// (0x00012716) list_empty_pane_fp_t

0x43bf,	// (0x00006f67) list_single_heading_pane_fp_g1_ParamLimits

0x43bf,	// (0x00006f67) list_single_heading_pane_fp_g1

0xe858,	// (0x00011400) list_single_heading_pane_fp_g2_ParamLimits

0xe858,	// (0x00011400) list_single_heading_pane_fp_g2

0x43cb,	// (0x00006f73) list_single_heading_pane_fp_g3_ParamLimits

0x43cb,	// (0x00006f73) list_single_heading_pane_fp_g3

0x0002,

0xfb73,	// (0x0001271b) list_single_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0001271b) list_single_heading_pane_fp_g

0x4574,	// (0x0000711c) list_single_heading_pane_fp_t1_ParamLimits

0x4574,	// (0x0000711c) list_single_heading_pane_fp_t1

0x4586,	// (0x0000712e) list_single_heading_pane_fp_t2_ParamLimits

0x4586,	// (0x0000712e) list_single_heading_pane_fp_t2

0x0001,

0xfb7a,	// (0x00012722) list_single_heading_pane_fp_t_ParamLimits

0xfb7a,	// (0x00012722) list_single_heading_pane_fp_t

0x9ce0,	// (0x0000c888) aid_size_cell_fast

0xe2c0,	// (0x00010e68) soft_indicator_pane_cp1_t1

0x9ce9,	// (0x0000c891) cell_app_pane_cp2_ParamLimits

0x9ce9,	// (0x0000c891) cell_app_pane_cp2

0x3b12,	// (0x000066ba) fep_hwr_candidate_drop_down_list_pane

0x3d40,	// (0x000068e8) fep_hwr_candidate_pane_g3_ParamLimits

0x3d40,	// (0x000068e8) fep_hwr_candidate_pane_g3

0x3d4d,	// (0x000068f5) fep_hwr_candidate_pane_g4_ParamLimits

0x3d4d,	// (0x000068f5) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x00012696) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x00012696) fep_hwr_candidate_pane_g

0x3e0d,	// (0x000069b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3e0d,	// (0x000069b5) fep_vkb_candidate_drop_down_list_pane

0x4210,	// (0x00006db8) fep_vkb_candidate_pane_g3

0x4218,	// (0x00006dc0) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x000126c3) fep_vkb_candidate_pane_g

0x3f18,	// (0x00006ac0) cell_hwr_candidate_pane_g1_ParamLimits

0x4283,	// (0x00006e2b) cell_hwr_candidate_pane_g3_ParamLimits

0x4283,	// (0x00006e2b) cell_hwr_candidate_pane_g3

0x42a4,	// (0x00006e4c) cell_hwr_candidate_pane_g4_ParamLimits

0x42a4,	// (0x00006e4c) cell_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000126dd) cell_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000126dd) cell_hwr_candidate_pane_g

0x42e3,	// (0x00006e8b) cell_vkb_candidate_pane_g3_ParamLimits

0x42e3,	// (0x00006e8b) cell_vkb_candidate_pane_g3

0x42fe,	// (0x00006ea6) cell_vkb_candidate_pane_g4_ParamLimits

0x42fe,	// (0x00006ea6) cell_vkb_candidate_pane_g4

0xc01f,	// (0x0000ebc7) cell_app_pane_cp2_g1_ParamLimits

0xc01f,	// (0x0000ebc7) cell_app_pane_cp2_g1

0x45ba,	// (0x00007162) cell_app_pane_cp2_g2_ParamLimits

0x45ba,	// (0x00007162) cell_app_pane_cp2_g2

0x0001,

0xfb7f,	// (0x00012727) cell_app_pane_cp2_g_ParamLimits

0xfb7f,	// (0x00012727) cell_app_pane_cp2_g

0x45c6,	// (0x0000716e) cell_app_pane_cp2_t1_ParamLimits

0x45c6,	// (0x0000716e) cell_app_pane_cp2_t1

0xe5bb,	// (0x00011163) grid_highlight_pane_cp1_ParamLimits

0xe5bb,	// (0x00011163) grid_highlight_pane_cp1

0x45d8,	// (0x00007180) cell_hwr_candidate_pane_cp1_ParamLimits

0x45d8,	// (0x00007180) cell_hwr_candidate_pane_cp1

0x3f18,	// (0x00006ac0) fep_hwr_candidate_drop_down_list_pane_g1

0x45f7,	// (0x0000719f) fep_hwr_candidate_drop_down_list_pane_g2

0x4604,	// (0x000071ac) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x0001272c) fep_hwr_candidate_drop_down_list_pane_g

0x4611,	// (0x000071b9) fep_hwr_candidate_drop_down_list_scroll_pane

0x461a,	// (0x000071c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x461a,	// (0x000071c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4627,	// (0x000071cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4627,	// (0x000071cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x4634,	// (0x000071dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4634,	// (0x000071dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x42e3,	// (0x00006e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x42e3,	// (0x00006e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x42fe,	// (0x00006ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x42fe,	// (0x00006ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4641,	// (0x000071e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4641,	// (0x000071e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x465c,	// (0x00007204) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x465c,	// (0x00007204) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4677,	// (0x0000721f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4677,	// (0x0000721f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8b,	// (0x00012733) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8b,	// (0x00012733) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4692,	// (0x0000723a) cell_vkb_candidate_pane_cp1_ParamLimits

0x4692,	// (0x0000723a) cell_vkb_candidate_pane_cp1

0x3f18,	// (0x00006ac0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3f18,	// (0x00006ac0) fep_vkb_candidate_drop_down_list_pane_g1

0x45f7,	// (0x0000719f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x45f7,	// (0x0000719f) fep_vkb_candidate_drop_down_list_pane_g2

0x4604,	// (0x000071ac) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4604,	// (0x000071ac) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x0001272c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb84,	// (0x0001272c) fep_vkb_candidate_drop_down_list_pane_g

0x46b2,	// (0x0000725a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x46b2,	// (0x0000725a) fep_vkb_candidate_drop_down_list_scroll_pane

0x46bf,	// (0x00007267) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x46bf,	// (0x00007267) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x46cc,	// (0x00007274) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x46cc,	// (0x00007274) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x46d8,	// (0x00007280) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x46d8,	// (0x00007280) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4283,	// (0x00006e2b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4283,	// (0x00006e2b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x42a4,	// (0x00006e4c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x42a4,	// (0x00006e4c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x46e4,	// (0x0000728c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x46e4,	// (0x0000728c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4705,	// (0x000072ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4705,	// (0x000072ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4726,	// (0x000072ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4726,	// (0x000072ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x00012744) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x00012744) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90ae,	// (0x0000bc56) title_pane_g1_ParamLimits

0x90c1,	// (0x0000bc69) title_pane_g2_ParamLimits

0xf529,	// (0x000120d1) title_pane_g_ParamLimits

0xec28,	// (0x000117d0) aid_call2_pane

0xec30,	// (0x000117d8) aid_call_pane

0xec38,	// (0x000117e0) popup_clock_analogue_window_g1

0xec38,	// (0x000117e0) popup_clock_analogue_window_g2

0xec40,	// (0x000117e8) popup_clock_analogue_window_g3

0xec49,	// (0x000117f1) popup_clock_analogue_window_g4

0xe0f3,	// (0x00010c9b) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x00012267) popup_clock_analogue_window_g

0xec51,	// (0x000117f9) popup_clock_analogue_window_t1

0xecaf,	// (0x00011857) clock_digital_number_pane_ParamLimits

0xecaf,	// (0x00011857) clock_digital_number_pane

0xecbb,	// (0x00011863) clock_digital_number_pane_cp02_ParamLimits

0xecbb,	// (0x00011863) clock_digital_number_pane_cp02

0xecc7,	// (0x0001186f) clock_digital_number_pane_cp03_ParamLimits

0xecc7,	// (0x0001186f) clock_digital_number_pane_cp03

0xecd3,	// (0x0001187b) clock_digital_number_pane_cp04_ParamLimits

0xecd3,	// (0x0001187b) clock_digital_number_pane_cp04

0xecdf,	// (0x00011887) clock_digital_separator_pane_ParamLimits

0xecdf,	// (0x00011887) clock_digital_separator_pane

0xeceb,	// (0x00011893) popup_clock_digital_window_t1_ParamLimits

0xeceb,	// (0x00011893) popup_clock_digital_window_t1

0xe0f3,	// (0x00010c9b) clock_digital_number_pane_g1

0xe0f3,	// (0x00010c9b) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x00012272) clock_digital_number_pane_g

0xe0f3,	// (0x00010c9b) clock_digital_separator_pane_g1

0xe0f3,	// (0x00010c9b) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x00012272) clock_digital_separator_pane_g

0xab8a,	// (0x0000d732) aid_fill_nsta_ParamLimits

0xacc0,	// (0x0000d868) indicator_nsta_pane_ParamLimits

0x07b0,	// (0x00003358) popup_clock_analogue_window

0x07b0,	// (0x00003358) popup_clock_digital_window

0xbbdd,	// (0x0000e785) grid_indicator_nsta_pane_ParamLimits

0x33f5,	// (0x00005f9d) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x00012616) clock_nsta_pane_t

0xeacd,	// (0x00011675) aid_size_max_handle

0x9dc7,	// (0x0000c96f) aid_size_min_handle

0xf27f,	// (0x00011e27) editor_scroll_pane

0x4741,	// (0x000072e9) ex_editor_pane

0xe75b,	// (0x00011303) scroll_pane_cp13

0xe511,	// (0x000110b9) scroll_pane_cp14

0xec86,	// (0x0001182e) scroll_pane_cp36

0x9e91,	// (0x0000ca39) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca39) list_single_graphic_hl_pane_cp2

0xb987,	// (0x0000e52f) list_single_graphic_hl_pane_ParamLimits

0xb987,	// (0x0000e52f) list_single_graphic_hl_pane

0x700a,	// (0x00009bb2) aid_size_min_hl_cp1

0x4752,	// (0x000072fa) list_highlight_pane_cp34_ParamLimits

0x4752,	// (0x000072fa) list_highlight_pane_cp34

0x4763,	// (0x0000730b) list_single_graphic_hl_pane_g1_ParamLimits

0x4763,	// (0x0000730b) list_single_graphic_hl_pane_g1

0xc03d,	// (0x0000ebe5) list_single_graphic_hl_pane_g2_ParamLimits

0xc03d,	// (0x0000ebe5) list_single_graphic_hl_pane_g2

0xc03d,	// (0x0000ebe5) list_single_graphic_hl_pane_g3_ParamLimits

0xc03d,	// (0x0000ebe5) list_single_graphic_hl_pane_g3

0xf20a,	// (0x00011db2) list_single_graphic_hl_pane_g4_ParamLimits

0xf20a,	// (0x00011db2) list_single_graphic_hl_pane_g4

0xc049,	// (0x0000ebf1) list_single_graphic_hl_pane_g5_ParamLimits

0xc049,	// (0x0000ebf1) list_single_graphic_hl_pane_g5

0x0004,

0xfbad,	// (0x00012755) list_single_graphic_hl_pane_g_ParamLimits

0xfbad,	// (0x00012755) list_single_graphic_hl_pane_g

0xc05d,	// (0x0000ec05) list_single_graphic_hl_pane_t1_ParamLimits

0xc05d,	// (0x0000ec05) list_single_graphic_hl_pane_t1

0x47a6,	// (0x0000734e) aid_size_min_hl_cp2

0x47af,	// (0x00007357) list_highlight_pane_cp34_cp2_ParamLimits

0x47af,	// (0x00007357) list_highlight_pane_cp34_cp2

0x4763,	// (0x0000730b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4763,	// (0x0000730b) list_single_graphic_hl_pane_g1_cp2

0x47bc,	// (0x00007364) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x47bc,	// (0x00007364) list_single_graphic_hl_pane_g2_cp2

0xc073,	// (0x0000ec1b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc073,	// (0x0000ec1b) list_single_graphic_hl_pane_g3_cp2

0xf185,	// (0x00011d2d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf185,	// (0x00011d2d) list_single_graphic_hl_pane_g4_cp2

0x477c,	// (0x00007324) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x477c,	// (0x00007324) list_single_graphic_hl_pane_g5_cp2

0xa2a9,	// (0x0000ce51) control_pane_g4_ParamLimits

0xa2a9,	// (0x0000ce51) control_pane_g4

0xf45e,	// (0x00012006) bg_popup_sub_pane_cp10_ParamLimits

0x3a9e,	// (0x00006646) list_choice_list_pane_ParamLimits

0x3aad,	// (0x00006655) scroll_pane_cp23

0xe2dd,	// (0x00010e85) bg_popup_preview_window_pane_cp02_ParamLimits

0x4363,	// (0x00006f0b) list_preview_fixed_pane_ParamLimits

0x4379,	// (0x00006f21) list_preview_fixed_pane_cp_ParamLimits

0x4379,	// (0x00006f21) list_preview_fixed_pane_cp

0x4385,	// (0x00006f2d) popup_preview_fixed_window_g1_ParamLimits

0x4385,	// (0x00006f2d) popup_preview_fixed_window_g1

0x4391,	// (0x00006f39) popup_preview_fixed_window_g2_ParamLimits

0x4391,	// (0x00006f39) popup_preview_fixed_window_g2

0x0002,

0xfb3c,	// (0x000126e4) popup_preview_fixed_window_g_ParamLimits

0xfb3c,	// (0x000126e4) popup_preview_fixed_window_g

0xea0a,	// (0x000115b2) aid_navi_side_left_pane_ParamLimits

0xea1f,	// (0x000115c7) aid_navi_side_right_pane_ParamLimits

0xea37,	// (0x000115df) navi_icon_pane_stacon_ParamLimits

0xea4b,	// (0x000115f3) navi_navi_pane_stacon_ParamLimits

0xea37,	// (0x000115df) navi_text_pane_stacon_ParamLimits

0xe0e9,	// (0x00010c91) main_text_info_pane

0x47ec,	// (0x00007394) listscroll_text_info_pane

0x47f4,	// (0x0000739c) list_text_info_pane_ParamLimits

0x47f4,	// (0x0000739c) list_text_info_pane

0x4803,	// (0x000073ab) scroll_pane_cp24_ParamLimits

0x4803,	// (0x000073ab) scroll_pane_cp24

0xc081,	// (0x0000ec29) list_text_info_pane_t1_ParamLimits

0xc081,	// (0x0000ec29) list_text_info_pane_t1

0xa451,	// (0x0000cff9) popup_fast_swap2_window_ParamLimits

0xa451,	// (0x0000cff9) popup_fast_swap2_window

0x4855,	// (0x000073fd) aid_size_cell_fast2

0xe0e9,	// (0x00010c91) bg_popup_window_pane_cp17

0x485f,	// (0x00007407) heading_pane_cp2

0x4867,	// (0x0000740f) listscroll_fast2_pane

0x486f,	// (0x00007417) grid_fast2_pane

0x4879,	// (0x00007421) listscroll_fast2_pane_g1

0x4881,	// (0x00007429) listscroll_fast2_pane_g2

0x0001,

0xfbb8,	// (0x00012760) listscroll_fast2_pane_g

0xe75b,	// (0x00011303) scroll_pane_cp26

0x488b,	// (0x00007433) cell_fast2_pane_ParamLimits

0x488b,	// (0x00007433) cell_fast2_pane

0x48a0,	// (0x00007448) cell_fast2_pane_g1

0x48a9,	// (0x00007451) cell_fast2_pane_g2

0x48b2,	// (0x0000745a) cell_fast2_pane_g3

0x0002,

0xfbbd,	// (0x00012765) cell_fast2_pane_g

0xe448,	// (0x00010ff0) grid_highlight_pane_cp9

0xe45d,	// (0x00011005) main_eswt_pane_ParamLimits

0xe45d,	// (0x00011005) main_eswt_pane

0x4818,	// (0x000073c0) list_single_text_info_pane

0x48ba,	// (0x00007462) eswt_ctrl_button_pane

0x48ba,	// (0x00007462) eswt_ctrl_canvas_pane

0xc09d,	// (0x0000ec45) eswt_ctrl_combo_pane

0x48ba,	// (0x00007462) eswt_ctrl_default_pane

0x48ba,	// (0x00007462) eswt_ctrl_label_pane

0x48ca,	// (0x00007472) eswt_ctrl_wait_pane

0xc0a5,	// (0x0000ec4d) eswt_shell_pane

0xe0e9,	// (0x00010c91) listscroll_eswt_app_pane

0x48f2,	// (0x0000749a) popup_eswt_tasktip_window_ParamLimits

0x48f2,	// (0x0000749a) popup_eswt_tasktip_window

0x0c1e,	// (0x000037c6) bg_popup_window_pane_cp18

0x490b,	// (0x000074b3) eswt_control_pane_g1_ParamLimits

0x490b,	// (0x000074b3) eswt_control_pane_g1

0x4918,	// (0x000074c0) eswt_control_pane_g2_ParamLimits

0x4918,	// (0x000074c0) eswt_control_pane_g2

0x4925,	// (0x000074cd) eswt_control_pane_g3_ParamLimits

0x4925,	// (0x000074cd) eswt_control_pane_g3

0x4932,	// (0x000074da) eswt_control_pane_g4_ParamLimits

0x4932,	// (0x000074da) eswt_control_pane_g4

0x0003,

0xfbc4,	// (0x0001276c) eswt_control_pane_g_ParamLimits

0xfbc4,	// (0x0001276c) eswt_control_pane_g

0xe5bb,	// (0x00011163) bg_button_pane_ParamLimits

0xe5bb,	// (0x00011163) bg_button_pane

0xe45d,	// (0x00011005) common_borders_pane_copy2_ParamLimits

0xe45d,	// (0x00011005) common_borders_pane_copy2

0x493f,	// (0x000074e7) control_button_pane_g1_ParamLimits

0x493f,	// (0x000074e7) control_button_pane_g1

0x494b,	// (0x000074f3) control_button_pane_g2_ParamLimits

0x494b,	// (0x000074f3) control_button_pane_g2

0x4957,	// (0x000074ff) control_button_pane_g3_ParamLimits

0x4957,	// (0x000074ff) control_button_pane_g3

0x0002,

0xfbcd,	// (0x00012775) control_button_pane_g_ParamLimits

0xfbcd,	// (0x00012775) control_button_pane_g

0x496b,	// (0x00007513) control_button_pane_t1

0x4979,	// (0x00007521) control_button_pane_t2

0x0001,

0xfbd4,	// (0x0001277c) control_button_pane_t

0x0a86,	// (0x0000362e) bg_button_pane_g1

0x0a8e,	// (0x00003636) bg_button_pane_g2

0x0a96,	// (0x0000363e) bg_button_pane_g3

0x0a9e,	// (0x00003646) bg_button_pane_g4

0x0aa6,	// (0x0000364e) bg_button_pane_g5

0x0aae,	// (0x00003656) bg_button_pane_g6

0x0ab6,	// (0x0000365e) bg_button_pane_g7

0x0abe,	// (0x00003666) bg_button_pane_g8

0x0ac6,	// (0x0000366e) bg_button_pane_g9

0x0008,

0xf821,	// (0x000123c9) bg_button_pane_g

0x3a59,	// (0x00006601) common_borders_pane_ParamLimits

0x3a59,	// (0x00006601) common_borders_pane

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy1_ParamLimits

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy1

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy1_ParamLimits

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy1

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy1_ParamLimits

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy1

0x4932,	// (0x000074da) eswt_control_pane_g4_copy1_ParamLimits

0x4932,	// (0x000074da) eswt_control_pane_g4_copy1

0x3a94,	// (0x0000663c) bg_eswt_ctrl_canvas_pane_g1

0x3a59,	// (0x00006601) common_borders_pane_cp2_ParamLimits

0x3a59,	// (0x00006601) common_borders_pane_cp2

0x3a59,	// (0x00006601) common_borders_pane_cp3_ParamLimits

0x3a59,	// (0x00006601) common_borders_pane_cp3

0x4987,	// (0x0000752f) separator_horizontal_pane

0x498f,	// (0x00007537) separator_vertical_pane

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy2_ParamLimits

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy2

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy2_ParamLimits

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy2

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy2_ParamLimits

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy2

0x4932,	// (0x000074da) eswt_control_pane_g4_copy2_ParamLimits

0x4932,	// (0x000074da) eswt_control_pane_g4_copy2

0xe0e9,	// (0x00010c91) common_borders_pane_cp4

0x4998,	// (0x00007540) separator_horizontal_pane_g1

0x49a1,	// (0x00007549) separator_horizontal_pane_g2

0x49aa,	// (0x00007552) separator_horizontal_pane_g3

0x0002,

0xfbd9,	// (0x00012781) separator_horizontal_pane_g

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy3_ParamLimits

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy3

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy3_ParamLimits

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy3

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy3_ParamLimits

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy3

0x4932,	// (0x000074da) eswt_control_pane_g4_copy3_ParamLimits

0x4932,	// (0x000074da) eswt_control_pane_g4_copy3

0xe0e9,	// (0x00010c91) common_borders_pane_cp5

0x49b3,	// (0x0000755b) separator_vertical_pane_g1

0x49bc,	// (0x00007564) separator_vertical_pane_g2

0x49c5,	// (0x0000756d) separator_vertical_pane_g3

0x0002,

0xfbe0,	// (0x00012788) separator_vertical_pane_g

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy4_ParamLimits

0x490b,	// (0x000074b3) eswt_control_pane_g1_copy4

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy4_ParamLimits

0x4918,	// (0x000074c0) eswt_control_pane_g2_copy4

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy4_ParamLimits

0x4925,	// (0x000074cd) eswt_control_pane_g3_copy4

0x4932,	// (0x000074da) eswt_control_pane_g4_copy4_ParamLimits

0x4932,	// (0x000074da) eswt_control_pane_g4_copy4

0xc0c5,	// (0x0000ec6d) eswt_ctrl_combo_button_pane

0xc0cd,	// (0x0000ec75) eswt_ctrl_input_pane

0xc0d5,	// (0x0000ec7d) popup_choice_list_window_cp70

0xc0dd,	// (0x0000ec85) eswt_ctrl_input_pane_t1

0xe0e9,	// (0x00010c91) input_focus_pane_cp70

0x3a59,	// (0x00006601) bg_button_pane_cp70_ParamLimits

0x3a59,	// (0x00006601) bg_button_pane_cp70

0xc0eb,	// (0x0000ec93) eswt_ctrl_combo_button_pane_g1

0x49fc,	// (0x000075a4) wait_bar_pane_cp70

0x0c1e,	// (0x000037c6) bg_popup_window_pane_cp70_ParamLimits

0x0c1e,	// (0x000037c6) bg_popup_window_pane_cp70

0x4a04,	// (0x000075ac) popup_eswt_tasktip_window_t1

0x4a1a,	// (0x000075c2) wait_bar_pane_cp71_ParamLimits

0x4a1a,	// (0x000075c2) wait_bar_pane_cp71

0x4a26,	// (0x000075ce) grid_eswt_app_pane

0xeb14,	// (0x000116bc) scroll_pane_cp70

0xc0f3,	// (0x0000ec9b) cell_eswt_app_pane_ParamLimits

0xc0f3,	// (0x0000ec9b) cell_eswt_app_pane

0xc11d,	// (0x0000ecc5) cell_eswt_app_pane_g1_ParamLimits

0xc11d,	// (0x0000ecc5) cell_eswt_app_pane_g1

0xc14c,	// (0x0000ecf4) cell_eswt_app_pane_g2_ParamLimits

0xc14c,	// (0x0000ecf4) cell_eswt_app_pane_g2

0x0001,

0xfbe7,	// (0x0001278f) cell_eswt_app_pane_g_ParamLimits

0xfbe7,	// (0x0001278f) cell_eswt_app_pane_g

0xc170,	// (0x0000ed18) cell_eswt_app_pane_t1_ParamLimits

0xc170,	// (0x0000ed18) cell_eswt_app_pane_t1

0x4ae4,	// (0x0000768c) grid_highlight_pane_cp70_ParamLimits

0x4ae4,	// (0x0000768c) grid_highlight_pane_cp70

0xf179,	// (0x00011d21) set_content_pane_g1

0xa23b,	// (0x0000cde3) status_small_volume_pane

0xc1a2,	// (0x0000ed4a) status_small_volume_pane_g1

0xc1aa,	// (0x0000ed52) volume_small2_pane

0xc1b3,	// (0x0000ed5b) volume_small2_pane_g1

0xc1bc,	// (0x0000ed64) volume_small2_pane_g2

0xc1c5,	// (0x0000ed6d) volume_small2_pane_g3

0xc1ce,	// (0x0000ed76) volume_small2_pane_g4

0xc1d7,	// (0x0000ed7f) volume_small2_pane_g5

0xc1e0,	// (0x0000ed88) volume_small2_pane_g6

0xc1e9,	// (0x0000ed91) volume_small2_pane_g7

0xc1f2,	// (0x0000ed9a) volume_small2_pane_g8

0xc1fb,	// (0x0000eda3) volume_small2_pane_g9

0xc204,	// (0x0000edac) volume_small2_pane_g10

0x0009,

0xfbec,	// (0x00012794) volume_small2_pane_g

0x4060,	// (0x00006c08) fep_vkb_top_text_pane_g1_ParamLimits

0xbfc7,	// (0x0000eb6f) fep_vkb_top_text_pane_t1_ParamLimits

0x439d,	// (0x00006f45) popup_preview_fixed_window_g3_ParamLimits

0x439d,	// (0x00006f45) popup_preview_fixed_window_g3

0xaac8,	// (0x0000d670) popup_toolbar_trans_pane

0xb7de,	// (0x0000e386) aid_height_set_list_ParamLimits

0x227a,	// (0x00004e22) aid_size_parent_ParamLimits

0xf45e,	// (0x00012006) list_highlight_pane_cp2_ParamLimits

0xf179,	// (0x00011d21) set_content_pane_g1_ParamLimits

0xb999,	// (0x0000e541) list_single_image_pane_ParamLimits

0xb999,	// (0x0000e541) list_single_image_pane

0xc20d,	// (0x0000edb5) aid_size_cell_image_ParamLimits

0xc20d,	// (0x0000edb5) aid_size_cell_image

0xc21a,	// (0x0000edc2) grid_single_image_pane_ParamLimits

0xc21a,	// (0x0000edc2) grid_single_image_pane

0xe858,	// (0x00011400) list_single_image_pane_g1_ParamLimits

0xe858,	// (0x00011400) list_single_image_pane_g1

0x43cb,	// (0x00006f73) list_single_image_pane_g2_ParamLimits

0x43cb,	// (0x00006f73) list_single_image_pane_g2

0x0001,

0xfc01,	// (0x000127a9) list_single_image_pane_g_ParamLimits

0xfc01,	// (0x000127a9) list_single_image_pane_g

0x4b74,	// (0x0000771c) list_single_image_pane_t1_ParamLimits

0x4b74,	// (0x0000771c) list_single_image_pane_t1

0xc226,	// (0x0000edce) cell_image_list_pane_ParamLimits

0xc226,	// (0x0000edce) cell_image_list_pane

0xc23a,	// (0x0000ede2) cell_image_list_pane_g1

0xc243,	// (0x0000edeb) cell_image_list_pane_g2

0x0001,

0xfc06,	// (0x000127ae) cell_image_list_pane_g

0xc24c,	// (0x0000edf4) aid_size_cell_tb_trans_pane

0xe5bb,	// (0x00011163) bg_tb_trans_pane

0xc25e,	// (0x0000ee06) grid_tb_trans_pane

0x0a86,	// (0x0000362e) bg_tb_trans_pane_g1

0x0a8e,	// (0x00003636) bg_tb_trans_pane_g2

0x0a96,	// (0x0000363e) bg_tb_trans_pane_g3

0x0a9e,	// (0x00003646) bg_tb_trans_pane_g4

0x0aa6,	// (0x0000364e) bg_tb_trans_pane_g5

0x0abe,	// (0x00003666) bg_tb_trans_pane_g6

0x0ac6,	// (0x0000366e) bg_tb_trans_pane_g7

0x0aae,	// (0x00003656) bg_tb_trans_pane_g8

0x0ab6,	// (0x0000365e) bg_tb_trans_pane_g9

0x0008,

0xfc0b,	// (0x000127b3) bg_tb_trans_pane_g

0xc272,	// (0x0000ee1a) cell_toolbar_trans_pane_ParamLimits

0xc272,	// (0x0000ee1a) cell_toolbar_trans_pane

0x3a94,	// (0x0000663c) cell_toolbar_trans_pane_g1

0xbca6,	// (0x0000e84e) list_form2_midp_pane_t1

0xbcb4,	// (0x0000e85c) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x0001265c) list_form2_midp_pane_t

0x362e,	// (0x000061d6) scroll_pane_cp51_ParamLimits

0x3837,	// (0x000063df) form2_midp_wait_pane_g1

0x3840,	// (0x000063e8) form2_midp_wait_pane_g2

0x3849,	// (0x000063f1) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x00012671) form2_midp_wait_pane_g

0xe199,	// (0x00010d41) list_highlight_pane_cp21_ParamLimits

0x3891,	// (0x00006439) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x38a0,	// (0x00006448) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x247d,	// (0x00005025) list_single_2graphic_im_pane_ParamLimits

0x247d,	// (0x00005025) list_single_2graphic_im_pane

0xc298,	// (0x0000ee40) list_single_2graphic_im_pane_g1_ParamLimits

0xc298,	// (0x0000ee40) list_single_2graphic_im_pane_g1

0xc2a9,	// (0x0000ee51) list_single_2graphic_im_pane_g2_ParamLimits

0xc2a9,	// (0x0000ee51) list_single_2graphic_im_pane_g2

0xc2b5,	// (0x0000ee5d) list_single_2graphic_im_pane_g3_ParamLimits

0xc2b5,	// (0x0000ee5d) list_single_2graphic_im_pane_g3

0x0003,

0xfc1e,	// (0x000127c6) list_single_2graphic_im_pane_g_ParamLimits

0xfc1e,	// (0x000127c6) list_single_2graphic_im_pane_g

0xc2c9,	// (0x0000ee71) list_single_2graphic_im_pane_t1_ParamLimits

0xc2c9,	// (0x0000ee71) list_single_2graphic_im_pane_t1

0x43a9,	// (0x00006f51) list_single_graphic_2heading_pane_fp_ParamLimits

0x43a9,	// (0x00006f51) list_single_graphic_2heading_pane_fp

0x4402,	// (0x00006faa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4402,	// (0x00006faa) list_single_graphic_2heading_pane_fp_g1

0x43bf,	// (0x00006f67) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x43bf,	// (0x00006f67) list_single_graphic_2heading_pane_fp_g2

0xe858,	// (0x00011400) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe858,	// (0x00011400) list_single_graphic_2heading_pane_fp_g3

0x43cb,	// (0x00006f73) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x43cb,	// (0x00006f73) list_single_graphic_2heading_pane_fp_g4

0x43df,	// (0x00006f87) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x43df,	// (0x00006f87) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x000126f4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x000126f4) list_single_graphic_2heading_pane_fp_g

0x4c6a,	// (0x00007812) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4c6a,	// (0x00007812) list_single_graphic_2heading_pane_fp_t1

0x443a,	// (0x00006fe2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x443a,	// (0x00006fe2) list_single_graphic_2heading_pane_fp_t2

0x4c80,	// (0x00007828) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4c80,	// (0x00007828) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc27,	// (0x000127cf) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc27,	// (0x000127cf) list_single_graphic_2heading_pane_fp_t

0x3cbe,	// (0x00006866) fep_hwr_write_pane_g5_ParamLimits

0x3cbe,	// (0x00006866) fep_hwr_write_pane_g5

0x3cca,	// (0x00006872) fep_hwr_write_pane_g6_ParamLimits

0x3cca,	// (0x00006872) fep_hwr_write_pane_g6

0xc0a5,	// (0x0000ec4d) eswt_shell_pane_ParamLimits

0x0c1e,	// (0x000037c6) bg_popup_window_pane_cp18_ParamLimits

0x4903,	// (0x000074ab) heading_pane_cp70

0x4a04,	// (0x000075ac) popup_eswt_tasktip_window_t1_ParamLimits

0xabe5,	// (0x0000d78d) aid_touch_tab_arrow_left

0xabfb,	// (0x0000d7a3) aid_touch_tab_arrow_right

0x90d9,	// (0x0000bc81) title_pane_g3_ParamLimits

0x90d9,	// (0x0000bc81) title_pane_g3

0xe552,	// (0x000110fa) set_value_pane_g1

0xaac8,	// (0x0000d670) popup_toolbar_trans_pane_ParamLimits

0xc24c,	// (0x0000edf4) aid_size_cell_tb_trans_pane_ParamLimits

0xe5bb,	// (0x00011163) bg_tb_trans_pane_ParamLimits

0xc25e,	// (0x0000ee06) grid_tb_trans_pane_ParamLimits

0xe2dd,	// (0x00010e85) cont_note_pane_ParamLimits

0xe2dd,	// (0x00010e85) cont_note_pane

0xe45d,	// (0x00011005) cont_snote2_single_text_pane_ParamLimits

0xe45d,	// (0x00011005) cont_snote2_single_text_pane

0xe45d,	// (0x00011005) cont_snote2_single_graphic_pane_ParamLimits

0xe45d,	// (0x00011005) cont_snote2_single_graphic_pane

0x1301,	// (0x00003ea9) cont_note_wait_pane_ParamLimits

0x1301,	// (0x00003ea9) cont_note_wait_pane

0x1301,	// (0x00003ea9) cont_note_image_pane_ParamLimits

0x1301,	// (0x00003ea9) cont_note_image_pane

0x4c96,	// (0x0000783e) popup_note2_window_g1_ParamLimits

0x4c96,	// (0x0000783e) popup_note2_window_g1

0xc307,	// (0x0000eeaf) popup_note2_window_t1_ParamLimits

0xc307,	// (0x0000eeaf) popup_note2_window_t1

0xc34c,	// (0x0000eef4) popup_note2_window_t2_ParamLimits

0xc34c,	// (0x0000eef4) popup_note2_window_t2

0xc391,	// (0x0000ef39) popup_note2_window_t3_ParamLimits

0xc391,	// (0x0000ef39) popup_note2_window_t3

0x4d96,	// (0x0000793e) popup_note2_window_t4_ParamLimits

0x4d96,	// (0x0000793e) popup_note2_window_t4

0xe361,	// (0x00010f09) popup_note2_window_t5_ParamLimits

0xe361,	// (0x00010f09) popup_note2_window_t5

0x0004,

0xfc33,	// (0x000127db) popup_note2_window_t_ParamLimits

0xfc33,	// (0x000127db) popup_note2_window_t

0x4dc5,	// (0x0000796d) popup_note2_image_window_g1_ParamLimits

0x4dc5,	// (0x0000796d) popup_note2_image_window_g1

0xc3d6,	// (0x0000ef7e) popup_note2_image_window_g2_ParamLimits

0xc3d6,	// (0x0000ef7e) popup_note2_image_window_g2

0x0001,

0xfc3e,	// (0x000127e6) popup_note2_image_window_g_ParamLimits

0xfc3e,	// (0x000127e6) popup_note2_image_window_g

0x4de3,	// (0x0000798b) popup_note2_image_window_t1_ParamLimits

0x4de3,	// (0x0000798b) popup_note2_image_window_t1

0x4dfb,	// (0x000079a3) popup_note2_image_window_t2_ParamLimits

0x4dfb,	// (0x000079a3) popup_note2_image_window_t2

0x4e13,	// (0x000079bb) popup_note2_image_window_t3_ParamLimits

0x4e13,	// (0x000079bb) popup_note2_image_window_t3

0x0002,

0xfc43,	// (0x000127eb) popup_note2_image_window_t_ParamLimits

0xfc43,	// (0x000127eb) popup_note2_image_window_t

0x130f,	// (0x00003eb7) popup_note2_wait_window_g1_ParamLimits

0x130f,	// (0x00003eb7) popup_note2_wait_window_g1

0x131b,	// (0x00003ec3) popup_note2_wait_window_g2_ParamLimits

0x131b,	// (0x00003ec3) popup_note2_wait_window_g2

0x1327,	// (0x00003ecf) popup_note2_wait_window_g3_ParamLimits

0x1327,	// (0x00003ecf) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x000123ab) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x000123ab) popup_note2_wait_window_g

0x4e2f,	// (0x000079d7) popup_note2_wait_window_t1_ParamLimits

0x4e2f,	// (0x000079d7) popup_note2_wait_window_t1

0x4e4d,	// (0x000079f5) popup_note2_wait_window_t2_ParamLimits

0x4e4d,	// (0x000079f5) popup_note2_wait_window_t2

0x4e6b,	// (0x00007a13) popup_note2_wait_window_t3_ParamLimits

0x4e6b,	// (0x00007a13) popup_note2_wait_window_t3

0x4e7d,	// (0x00007a25) popup_note2_wait_window_t4_ParamLimits

0x4e7d,	// (0x00007a25) popup_note2_wait_window_t4

0x0003,

0xfc4a,	// (0x000127f2) popup_note2_wait_window_t_ParamLimits

0xfc4a,	// (0x000127f2) popup_note2_wait_window_t

0x4e8f,	// (0x00007a37) wait_bar2_pane_ParamLimits

0x4e8f,	// (0x00007a37) wait_bar2_pane

0x4ea7,	// (0x00007a4f) popup_snote2_single_text_window_g1_ParamLimits

0x4ea7,	// (0x00007a4f) popup_snote2_single_text_window_g1

0x4ecf,	// (0x00007a77) popup_snote2_single_text_window_t1_ParamLimits

0x4ecf,	// (0x00007a77) popup_snote2_single_text_window_t1

0x4f1b,	// (0x00007ac3) popup_snote2_single_text_window_t2_ParamLimits

0x4f1b,	// (0x00007ac3) popup_snote2_single_text_window_t2

0x4f67,	// (0x00007b0f) popup_snote2_single_text_window_t3_ParamLimits

0x4f67,	// (0x00007b0f) popup_snote2_single_text_window_t3

0x4fa8,	// (0x00007b50) popup_snote2_single_text_window_t4_ParamLimits

0x4fa8,	// (0x00007b50) popup_snote2_single_text_window_t4

0x4fde,	// (0x00007b86) popup_snote2_single_text_window_t5_ParamLimits

0x4fde,	// (0x00007b86) popup_snote2_single_text_window_t5

0x0004,

0xfc53,	// (0x000127fb) popup_snote2_single_text_window_t_ParamLimits

0xfc53,	// (0x000127fb) popup_snote2_single_text_window_t

0xc3e8,	// (0x0000ef90) popup_snote2_single_graphic_window_g1_ParamLimits

0xc3e8,	// (0x0000ef90) popup_snote2_single_graphic_window_g1

0x5031,	// (0x00007bd9) popup_snote2_single_graphic_window_g2_ParamLimits

0x5031,	// (0x00007bd9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc5e,	// (0x00012806) popup_snote2_single_graphic_window_g_ParamLimits

0xfc5e,	// (0x00012806) popup_snote2_single_graphic_window_g

0x5059,	// (0x00007c01) popup_snote2_single_graphic_window_t1_ParamLimits

0x5059,	// (0x00007c01) popup_snote2_single_graphic_window_t1

0x50a5,	// (0x00007c4d) popup_snote2_single_graphic_window_t2_ParamLimits

0x50a5,	// (0x00007c4d) popup_snote2_single_graphic_window_t2

0x4f67,	// (0x00007b0f) popup_snote2_single_graphic_window_t3_ParamLimits

0x4f67,	// (0x00007b0f) popup_snote2_single_graphic_window_t3

0x4fa8,	// (0x00007b50) popup_snote2_single_graphic_window_t4_ParamLimits

0x4fa8,	// (0x00007b50) popup_snote2_single_graphic_window_t4

0x4fde,	// (0x00007b86) popup_snote2_single_graphic_window_t5_ParamLimits

0x4fde,	// (0x00007b86) popup_snote2_single_graphic_window_t5

0x0004,

0xfc63,	// (0x0001280b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc63,	// (0x0001280b) popup_snote2_single_graphic_window_t

0x34a3,	// (0x0000604b) clock_nsta_pane_cp2_t1

0x34a3,	// (0x0000604b) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x00012632) clock_nsta_pane_cp2_t

0xe5da,	// (0x00011182) form_field_data_wide_pane_g1_ParamLimits

0xe5e6,	// (0x0001118e) form_field_data_wide_pane_g2_ParamLimits

0xe5e6,	// (0x0001118e) form_field_data_wide_pane_g2

0xe5f2,	// (0x0001119a) form_field_data_wide_pane_g3_ParamLimits

0xe5f2,	// (0x0001119a) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x000121ea) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x000121ea) form_field_data_wide_pane_g

0xbbc7,	// (0x0000e76f) grid_touch_3_pane_ParamLimits

0xbbc7,	// (0x0000e76f) grid_touch_3_pane

0xc410,	// (0x0000efb8) cell_touch_3_pane_ParamLimits

0xc410,	// (0x0000efb8) cell_touch_3_pane

0x3a94,	// (0x0000663c) cell_touch_3_pane_g1

0x3a94,	// (0x0000663c) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x000126b7) cell_touch_3_pane_g

0xe393,	// (0x00010f3b) cont_query_data_pane

0xe39b,	// (0x00010f43) cont_query_data_pane_cp1

0x511f,	// (0x00007cc7) button_value_adjust_pane_cp7

0x5127,	// (0x00007ccf) query_popup_pane_cp3

0xed13,	// (0x000118bb) bg_popup_sub_pane_cp22_ParamLimits

0x9f30,	// (0x0000cad8) navi_navi_volume_pane_cp2

0x9f3f,	// (0x0000cae7) popup_side_volume_key_window_g2

0x9f4e,	// (0x0000caf6) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x00012280) popup_side_volume_key_window_g

0x9f5d,	// (0x0000cb05) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x00012287) popup_side_volume_key_window_t

0xa0ae,	// (0x0000cc56) popup_side_volume_key_window_ParamLimits

0x9827,	// (0x0000c3cf) list_double_graphic_pane_g4_ParamLimits

0x9827,	// (0x0000c3cf) list_double_graphic_pane_g4

0xb973,	// (0x0000e51b) list_single_2heading_msg_pane_ParamLimits

0xb973,	// (0x0000e51b) list_single_2heading_msg_pane

0xc459,	// (0x0000f001) list_single_2heading_msg_pane_g1_ParamLimits

0xc459,	// (0x0000f001) list_single_2heading_msg_pane_g1

0xc465,	// (0x0000f00d) list_single_2heading_msg_pane_g2_ParamLimits

0xc465,	// (0x0000f00d) list_single_2heading_msg_pane_g2

0xc478,	// (0x0000f020) list_single_2heading_msg_pane_g3_ParamLimits

0xc478,	// (0x0000f020) list_single_2heading_msg_pane_g3

0xc484,	// (0x0000f02c) list_single_2heading_msg_pane_g4_ParamLimits

0xc484,	// (0x0000f02c) list_single_2heading_msg_pane_g4

0x0003,

0xfc6e,	// (0x00012816) list_single_2heading_msg_pane_g_ParamLimits

0xfc6e,	// (0x00012816) list_single_2heading_msg_pane_g

0xc49c,	// (0x0000f044) list_single_2heading_msg_pane_t1_ParamLimits

0xc49c,	// (0x0000f044) list_single_2heading_msg_pane_t1

0xc4c4,	// (0x0000f06c) list_single_2heading_msg_pane_t2_ParamLimits

0xc4c4,	// (0x0000f06c) list_single_2heading_msg_pane_t2

0xc52f,	// (0x0000f0d7) list_single_2heading_msg_pane_t3_ParamLimits

0xc52f,	// (0x0000f0d7) list_single_2heading_msg_pane_t3

0x5216,	// (0x00007dbe) list_single_2heading_msg_pane_t4_ParamLimits

0x5216,	// (0x00007dbe) list_single_2heading_msg_pane_t4

0x0003,

0xfc77,	// (0x0001281f) list_single_2heading_msg_pane_t_ParamLimits

0xfc77,	// (0x0001281f) list_single_2heading_msg_pane_t

0xe147,	// (0x00010cef) title_pane_g4_ParamLimits

0xe147,	// (0x00010cef) title_pane_g4

0xe933,	// (0x000114db) title_pane_stacon_g3_ParamLimits

0xe933,	// (0x000114db) title_pane_stacon_g3

0x4c2d,	// (0x000077d5) list_single_2graphic_im_pane_g4_ParamLimits

0x4c2d,	// (0x000077d5) list_single_2graphic_im_pane_g4

0xb5b5,	// (0x0000e15d) popup_side_volume_key_window_cp

0x293f,	// (0x000054e7) main_idle_act2_pane_t1

0x0ace,	// (0x00003676) toolbar_button_pane_g10

0x96e2,	// (0x0000c28a) popup_toolbar_window_cp1

0x3494,	// (0x0000603c) clock_nsta_pane_cp_t1

0x3494,	// (0x0000603c) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x0001262d) clock_nsta_pane_cp_t

0x9f30,	// (0x0000cad8) navi_navi_volume_pane_cp2_ParamLimits

0xed29,	// (0x000118d1) popup_side_volume_key_window_g1_ParamLimits

0x9f3f,	// (0x0000cae7) popup_side_volume_key_window_g2_ParamLimits

0x9f4e,	// (0x0000caf6) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x00012280) popup_side_volume_key_window_g_ParamLimits

0x3afe,	// (0x000066a6) fep_hwr_aid_pane

0x3ba5,	// (0x0000674d) bg_fep_hwr_top_pane_g4_ParamLimits

0x3bc5,	// (0x0000676d) fep_hwr_top_pane_g1_ParamLimits

0x3bd7,	// (0x0000677f) fep_hwr_top_pane_g2_ParamLimits

0x3be9,	// (0x00006791) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x00012682) fep_hwr_top_pane_g_ParamLimits

0x3bfe,	// (0x000067a6) fep_hwr_top_text_pane_ParamLimits

0x1c75,	// (0x0000481d) aid_touch_tab_arrow_arrow_2

0x1c7e,	// (0x00004826) aid_touch_tab_arrow_left_2

0x3b12,	// (0x000066ba) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3b49,	// (0x000066f1) fep_hwr_prediction_pane

0x3e6f,	// (0x00006a17) fep_vkb_prediction_pane

0xbfa7,	// (0x0000eb4f) fep_vkb_side_pane_g3_ParamLimits

0xbfa7,	// (0x0000eb4f) fep_vkb_side_pane_g3

0x3f18,	// (0x00006ac0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x45f7,	// (0x0000719f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4604,	// (0x000071ac) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb84,	// (0x0001272c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x523b,	// (0x00007de3) fep_hwr_prediction_pane_g1

0x5245,	// (0x00007ded) fep_hwr_prediction_pane_g2

0x524d,	// (0x00007df5) fep_hwr_prediction_pane_g3

0x5255,	// (0x00007dfd) fep_hwr_prediction_pane_g4

0x0003,

0xfc80,	// (0x00012828) fep_hwr_prediction_pane_g

0x523b,	// (0x00007de3) fep_vkb_prediction_pane_g1

0x525d,	// (0x00007e05) fep_vkb_prediction_pane_g2

0x5265,	// (0x00007e0d) fep_vkb_prediction_pane_g3

0x526d,	// (0x00007e15) fep_vkb_prediction_pane_g4

0x0003,

0xfc89,	// (0x00012831) fep_vkb_prediction_pane_g

0xb760,	// (0x0000e308) slider_set_pane_g3

0xb774,	// (0x0000e31c) slider_set_pane_g4

0xb78c,	// (0x0000e334) slider_set_pane_g5

0xb760,	// (0x0000e308) slider_set_pane_g6

0xb7a2,	// (0x0000e34a) slider_set_pane_g7

0x23db,	// (0x00004f83) slider_form_pane_g3

0x23e4,	// (0x00004f8c) slider_form_pane_g4

0x23ec,	// (0x00004f94) slider_form_pane_g5

0x23db,	// (0x00004f83) slider_form_pane_g6

0xb929,	// (0x0000e4d1) slider_form_pane_g7

0x2c34,	// (0x000057dc) slider_set_pane_vc_g3

0x2c3d,	// (0x000057e5) slider_set_pane_vc_g4

0x2c46,	// (0x000057ee) slider_set_pane_vc_g5

0x2c34,	// (0x000057dc) slider_set_pane_vc_g6

0x2c4f,	// (0x000057f7) slider_set_pane_vc_g7

0x3152,	// (0x00005cfa) slider_form_pane_vc_g1

0x315b,	// (0x00005d03) slider_form_pane_vc_g2

0x3164,	// (0x00005d0c) slider_form_pane_vc_g3

0x3152,	// (0x00005cfa) slider_form_pane_vc_g4

0x316d,	// (0x00005d15) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x000125ff) slider_form_pane_vc_g

0xe0e9,	// (0x00010c91) main_idle_act3_pane

0x5275,	// (0x00007e1d) ai3_links_pane

0xc59d,	// (0x0000f145) popup_ai3_data_window_ParamLimits

0xc59d,	// (0x0000f145) popup_ai3_data_window

0xe0e9,	// (0x00010c91) grid_ai3_links_pane

0xc5b5,	// (0x0000f15d) cell_ai3_links_pane_ParamLimits

0xc5b5,	// (0x0000f15d) cell_ai3_links_pane

0x52ae,	// (0x00007e56) bg_popup_sub_pane_cp11

0x52bb,	// (0x00007e63) cell_ai3_links_pane_g1

0xe0e9,	// (0x00010c91) bg_popup_sub_pane_cp12

0x52e0,	// (0x00007e88) heading_ai3_data_pane

0x52e8,	// (0x00007e90) list_ai3_gene_pane

0x52f4,	// (0x00007e9c) popup_ai3_data_window_g1

0x52fc,	// (0x00007ea4) heading_ai3_data_pane_g1

0x5304,	// (0x00007eac) heading_ai3_data_pane_t1

0xc5cf,	// (0x0000f177) list_double_ai3_gene_pane_ParamLimits

0xc5cf,	// (0x0000f177) list_double_ai3_gene_pane

0x531f,	// (0x00007ec7) list_single_ai3_gene_pane_ParamLimits

0x531f,	// (0x00007ec7) list_single_ai3_gene_pane

0x3a59,	// (0x00006601) list_highlight_pane_cp7_ParamLimits

0x3a59,	// (0x00006601) list_highlight_pane_cp7

0x532c,	// (0x00007ed4) list_single_a13_gene_pane_t1_ParamLimits

0x532c,	// (0x00007ed4) list_single_a13_gene_pane_t1

0x5343,	// (0x00007eeb) list_single_ai3_gene_pane_g1

0x534c,	// (0x00007ef4) list_single_ai3_gene_pane_g2

0x0001,

0xfc92,	// (0x0001283a) list_single_ai3_gene_pane_g

0x5354,	// (0x00007efc) list_double_ai3_gene_pane_g1_ParamLimits

0x5354,	// (0x00007efc) list_double_ai3_gene_pane_g1

0xc5dc,	// (0x0000f184) list_double_ai3_gene_pane_t1_ParamLimits

0xc5dc,	// (0x0000f184) list_double_ai3_gene_pane_t1

0x537c,	// (0x00007f24) list_double_ai3_gene_pane_t2_ParamLimits

0x537c,	// (0x00007f24) list_double_ai3_gene_pane_t2

0x5391,	// (0x00007f39) list_double_ai3_gene_pane_t3_ParamLimits

0x5391,	// (0x00007f39) list_double_ai3_gene_pane_t3

0x0002,

0xfc97,	// (0x0001283f) list_double_ai3_gene_pane_t_ParamLimits

0xfc97,	// (0x0001283f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5138,	// (0x00007ce0) aid_size_min_col_2

0xc443,	// (0x0000efeb) aid_size_min_msg_ParamLimits

0xc443,	// (0x0000efeb) aid_size_min_msg

0xbfbb,	// (0x0000eb63) fep_vkb_top_text_pane_g2_ParamLimits

0xbfbb,	// (0x0000eb63) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x000126b2) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x000126b2) fep_vkb_top_text_pane_g

0xe0e9,	// (0x00010c91) main_hc_apps_shell_pane

0x53ae,	// (0x00007f56) grid_hc_apps_pane_ParamLimits

0x53ae,	// (0x00007f56) grid_hc_apps_pane

0x53c0,	// (0x00007f68) list_hc_apps_pane

0x53c8,	// (0x00007f70) scroll_pane_cp37_ParamLimits

0x53c8,	// (0x00007f70) scroll_pane_cp37

0xc5f8,	// (0x0000f1a0) cell_hc_apps_pane_ParamLimits

0xc5f8,	// (0x0000f1a0) cell_hc_apps_pane

0xc6b6,	// (0x0000f25e) cell_hc_apps_pane_g1_ParamLimits

0xc6b6,	// (0x0000f25e) cell_hc_apps_pane_g1

0x54b2,	// (0x0000805a) cell_hc_apps_pane_g2_ParamLimits

0x54b2,	// (0x0000805a) cell_hc_apps_pane_g2

0x54ce,	// (0x00008076) cell_hc_apps_pane_g3_ParamLimits

0x54ce,	// (0x00008076) cell_hc_apps_pane_g3

0x0002,

0xfc9e,	// (0x00012846) cell_hc_apps_pane_g_ParamLimits

0xfc9e,	// (0x00012846) cell_hc_apps_pane_g

0xc6e2,	// (0x0000f28a) cell_hc_apps_pane_t1_ParamLimits

0xc6e2,	// (0x0000f28a) cell_hc_apps_pane_t1

0xe2dd,	// (0x00010e85) grid_highlight_pane_cp10_ParamLimits

0xe2dd,	// (0x00010e85) grid_highlight_pane_cp10

0xc720,	// (0x0000f2c8) list_single_hc_apps_pane_ParamLimits

0xc720,	// (0x0000f2c8) list_single_hc_apps_pane

0xc750,	// (0x0000f2f8) list_single_hc_apps_pane_g1

0xc769,	// (0x0000f311) list_single_hc_apps_pane_g2

0x0001,

0xfca5,	// (0x0001284d) list_single_hc_apps_pane_g

0xc782,	// (0x0000f32a) list_single_hc_apps_pane_g2_copy1

0xc79e,	// (0x0000f346) list_single_hc_apps_pane_t1

0xe199,	// (0x00010d41) bg_set_opt_pane_cp_ParamLimits

0x91ad,	// (0x0000bd55) setting_slider_pane_t1_ParamLimits

0x91c6,	// (0x0000bd6e) setting_slider_pane_t2_ParamLimits

0x91e0,	// (0x0000bd88) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000120e1) setting_slider_pane_t_ParamLimits

0x91f8,	// (0x0000bda0) slider_set_pane_ParamLimits

0xf498,	// (0x00012040) control_pane_g5_ParamLimits

0xf498,	// (0x00012040) control_pane_g5

0xb753,	// (0x0000e2fb) slider_set_pane_g1_ParamLimits

0x21d7,	// (0x00004d7f) slider_set_pane_g2_ParamLimits

0xb760,	// (0x0000e308) slider_set_pane_g3_ParamLimits

0xb774,	// (0x0000e31c) slider_set_pane_g4_ParamLimits

0xb78c,	// (0x0000e334) slider_set_pane_g5_ParamLimits

0xb760,	// (0x0000e308) slider_set_pane_g6_ParamLimits

0xb7a2,	// (0x0000e34a) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x000124c7) slider_set_pane_g_ParamLimits

0xf124,	// (0x00011ccc) navi_icon_text_pane_ParamLimits

0xabae,	// (0x0000d756) aid_fill_nsta_2_ParamLimits

0xabe5,	// (0x0000d78d) aid_touch_tab_arrow_left_ParamLimits

0xabfb,	// (0x0000d7a3) aid_touch_tab_arrow_right_ParamLimits

0xac96,	// (0x0000d83e) clock_nsta_pane_ParamLimits

0x1c57,	// (0x000047ff) navi_icon_pane_g1_ParamLimits

0x1c63,	// (0x0000480b) navi_text_pane_t1_ParamLimits

0x35a4,	// (0x0000614c) navi_icon_text_pane_g1_ParamLimits

0x35b0,	// (0x00006158) navi_icon_text_pane_t1_ParamLimits

0xc750,	// (0x0000f2f8) list_single_hc_apps_pane_g1_ParamLimits

0xc769,	// (0x0000f311) list_single_hc_apps_pane_g2_ParamLimits

0xfca5,	// (0x0001284d) list_single_hc_apps_pane_g_ParamLimits

0xc782,	// (0x0000f32a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc79e,	// (0x0000f346) list_single_hc_apps_pane_t1_ParamLimits

0x8fde,	// (0x0000bb86) popup_toolbar2_fixed_window_ParamLimits

0x8fde,	// (0x0000bb86) popup_toolbar2_fixed_window

0xaabe,	// (0x0000d666) popup_toolbar2_float_window

0xe0e9,	// (0x00010c91) bg_popup_sub_pane_cp27

0x560f,	// (0x000081b7) grid_toolbar2_float_pane

0xe0e9,	// (0x00010c91) bg_popup_sub_pane_cp26

0x560f,	// (0x000081b7) grid_toolbar2_fixed_pane

0xc7cc,	// (0x0000f374) cell_toolbar2_fixed_pane_ParamLimits

0xc7cc,	// (0x0000f374) cell_toolbar2_fixed_pane

0xc7e6,	// (0x0000f38e) cell_toolbar2_fixed_pane_g1

0x09b4,	// (0x0000355c) toolbar2_fixed_button_pane

0x0a86,	// (0x0000362e) toolbar2_fixed_button_pane_g1

0x0a8e,	// (0x00003636) toolbar2_fixed_button_pane_g2

0x0a96,	// (0x0000363e) toolbar2_fixed_button_pane_g3

0x0a9e,	// (0x00003646) toolbar2_fixed_button_pane_g4

0x0aa6,	// (0x0000364e) toolbar2_fixed_button_pane_g5

0x0aae,	// (0x00003656) toolbar2_fixed_button_pane_g6

0x0ab6,	// (0x0000365e) toolbar2_fixed_button_pane_g7

0x0abe,	// (0x00003666) toolbar2_fixed_button_pane_g8

0x0ac6,	// (0x0000366e) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x000123c9) toolbar2_fixed_button_pane_g

0x5630,	// (0x000081d8) cell_toolbar2_float_pane_ParamLimits

0x5630,	// (0x000081d8) cell_toolbar2_float_pane

0x5641,	// (0x000081e9) cell_toolbar2_float_pane_g1

0x09b4,	// (0x0000355c) toolbar2_fixed_button_pane_cp

0xbea3,	// (0x0000ea4b) fep_vkb_accented_list_pane_ParamLimits

0xbea3,	// (0x0000ea4b) fep_vkb_accented_list_pane

0x425f,	// (0x00006e07) bg_popup_fep_shadow_pane_g9

0xf27f,	// (0x00011e27) bg_popup_fep_shadow_pane_cp3

0xe742,	// (0x000112ea) list_accented_list_pane

0x564a,	// (0x000081f2) list_single_accented_list_pane_ParamLimits

0x564a,	// (0x000081f2) list_single_accented_list_pane

0xf27f,	// (0x00011e27) list_highlight_pane_cp10

0x565b,	// (0x00008203) list_single_accented_list_pane_t1

0xa9e8,	// (0x0000d590) popup_slider_window_ParamLimits

0xa9e8,	// (0x0000d590) popup_slider_window

0x512f,	// (0x00007cd7) aid_indentation_list_msg

0xc8d7,	// (0x0000f47f) bg_popup_window_pane_cp19

0x5781,	// (0x00008329) popup_slider_window_g1

0x579d,	// (0x00008345) popup_slider_window_g2

0x57b9,	// (0x00008361) popup_slider_window_g3

0x0005,

0xfcaa,	// (0x00012852) popup_slider_window_g

0x581f,	// (0x000083c7) popup_slider_window_t1

0x5893,	// (0x0000843b) small_volume_slider_vertical_pane

0x3a94,	// (0x0000663c) small_volume_slider_vertical_pane_g1

0x3a94,	// (0x0000663c) small_volume_slider_vertical_pane_g2

0x58af,	// (0x00008457) small_volume_slider_vertical_pane_g3

0x0002,

0xfcbc,	// (0x00012864) small_volume_slider_vertical_pane_g

0x8ddd,	// (0x0000b985) area_side_right_pane_ParamLimits

0x8ddd,	// (0x0000b985) area_side_right_pane

0xc96d,	// (0x0000f515) aid_size_side_button_ParamLimits

0xc96d,	// (0x0000f515) aid_size_side_button

0xc986,	// (0x0000f52e) grid_sctrl_middle_pane_ParamLimits

0xc986,	// (0x0000f52e) grid_sctrl_middle_pane

0x58eb,	// (0x00008493) sctrl_sk_bottom_pane

0x58fc,	// (0x000084a4) sctrl_sk_top_pane

0x590e,	// (0x000084b6) aid_touch_sctrl_top

0xe2dd,	// (0x00010e85) bg_sctrl_sk_pane_ParamLimits

0xe2dd,	// (0x00010e85) bg_sctrl_sk_pane

0x591b,	// (0x000084c3) sctrl_sk_top_pane_g1

0x5928,	// (0x000084d0) sctrl_sk_top_pane_t1

0x590e,	// (0x000084b6) aid_touch_sctrl_bottom

0xe2dd,	// (0x00010e85) bg_sctrl_sk_pane_cp_ParamLimits

0xe2dd,	// (0x00010e85) bg_sctrl_sk_pane_cp

0x5943,	// (0x000084eb) sctrl_sk_bottom_pane_g1

0x5928,	// (0x000084d0) sctrl_sk_bottom_pane_t1

0xc9a0,	// (0x0000f548) cell_sctrl_middle_pane_ParamLimits

0xc9a0,	// (0x0000f548) cell_sctrl_middle_pane

0xc9b1,	// (0x0000f559) aid_touch_sctrl_middle_ParamLimits

0xc9b1,	// (0x0000f559) aid_touch_sctrl_middle

0xc9be,	// (0x0000f566) bg_sctrl_middle_pane_ParamLimits

0xc9be,	// (0x0000f566) bg_sctrl_middle_pane

0x5a08,	// (0x000085b0) cell_sctrl_middle_pane_g1_ParamLimits

0x5a08,	// (0x000085b0) cell_sctrl_middle_pane_g1

0xc9cc,	// (0x0000f574) cell_sctrl_middle_pane_g2_ParamLimits

0xc9cc,	// (0x0000f574) cell_sctrl_middle_pane_g2

0x0001,

0xfcc8,	// (0x00012870) cell_sctrl_middle_pane_g_ParamLimits

0xfcc8,	// (0x00012870) cell_sctrl_middle_pane_g

0x0a86,	// (0x0000362e) bg_sctrl_middle_pane_g1

0x0a8e,	// (0x00003636) bg_sctrl_middle_pane_g2

0x0a96,	// (0x0000363e) bg_sctrl_middle_pane_g3

0x0a9e,	// (0x00003646) bg_sctrl_middle_pane_g4

0x0aa6,	// (0x0000364e) bg_sctrl_middle_pane_g5

0x0aae,	// (0x00003656) bg_sctrl_middle_pane_g6

0x0ab6,	// (0x0000365e) bg_sctrl_middle_pane_g7

0x0abe,	// (0x00003666) bg_sctrl_middle_pane_g8

0x0007,

0xfccd,	// (0x00012875) bg_sctrl_middle_pane_g

0x0ac6,	// (0x0000366e) bg_sctrl_middle_pane_g8_copy1

0x0a86,	// (0x0000362e) bg_sctrl_sk_pane_g1

0x0a8e,	// (0x00003636) bg_sctrl_sk_pane_g2

0x0a96,	// (0x0000363e) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x000123c9) bg_sctrl_sk_pane_g

0xe4ab,	// (0x00011053) aid_size_touch_scroll_bar

0x0a9e,	// (0x00003646) bg_sctrl_sk_pane_g4

0x0aa6,	// (0x0000364e) bg_sctrl_sk_pane_g5

0x0aae,	// (0x00003656) bg_sctrl_sk_pane_g6

0x0ab6,	// (0x0000365e) bg_sctrl_sk_pane_g7

0x0abe,	// (0x00003666) bg_sctrl_sk_pane_g8

0x0ac6,	// (0x0000366e) bg_sctrl_sk_pane_g9

0xf51f,	// (0x000120c7) popup_fep_china_hwr2_fs_candidate_window

0xa4ae,	// (0x0000d056) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa4ae,	// (0x0000d056) popup_fep_china_hwr2_fs_control_window

0x3f18,	// (0x00006ac0) sctrl_sk_top_pane_g2

0x0001,

0xfcc3,	// (0x0001286b) sctrl_sk_top_pane_g

0xc9d8,	// (0x0000f580) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc9d8,	// (0x0000f580) aid_fep_china_hwr2_fs_cell

0xc9ec,	// (0x0000f594) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc9ec,	// (0x0000f594) bg_popup_fep_shadow_pane_cp4

0xca03,	// (0x0000f5ab) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xca03,	// (0x0000f5ab) bg_popup_fep_shadow_pane_cp5

0xca15,	// (0x0000f5bd) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xca15,	// (0x0000f5bd) popup_fep_china_hwr2_fs_control_bar_grid

0xed9d,	// (0x00011945) popup_fep_china_hwr2_fs_control_funtion_grid

0x59dc,	// (0x00008584) aid_fep_china_hwr2_fs_candi_cell

0xe0e9,	// (0x00010c91) bg_popup_fep_shadow_pane_cp6

0x59e6,	// (0x0000858e) popup_fep_china_hwr2_fs_candidate_grid

0xca29,	// (0x0000f5d1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xca29,	// (0x0000f5d1) cell_fep_china_hwr2_fs_funtion_grid

0x3a94,	// (0x0000663c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5a08,	// (0x000085b0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5a08,	// (0x000085b0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5a16,	// (0x000085be) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5a16,	// (0x000085be) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcde,	// (0x00012886) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcde,	// (0x00012886) cell_fep_china_hwr2_fs_funtion_grid_g

0xca41,	// (0x0000f5e9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xca41,	// (0x0000f5e9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xca56,	// (0x0000f5fe) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xca56,	// (0x0000f5fe) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce3,	// (0x0001288b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce3,	// (0x0001288b) cell_fep_china_hwr2_fs_funtion_grid_t

0x5a5d,	// (0x00008605) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5a65,	// (0x0000860d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5a6d,	// (0x00008615) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce8,	// (0x00012890) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5a75,	// (0x0000861d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5a75,	// (0x0000861d) cell_fep_china_hwr2_fs_candidate_grid

0x5a8e,	// (0x00008636) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5a96,	// (0x0000863e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3a94,	// (0x0000663c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3a94,	// (0x0000663c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x000126b7) cell_fep_china_hwr2_fs_candidate_grid_g

0x5a9e,	// (0x00008646) cell_fep_china_hwr2_fs_candidate_grid_t1

0x05cf,	// (0x00003177) clock_nsta_pane_cp_24_ParamLimits

0x05cf,	// (0x00003177) clock_nsta_pane_cp_24

0x064d,	// (0x000031f5) indicator_nsta_pane_cp_24_ParamLimits

0x064d,	// (0x000031f5) indicator_nsta_pane_cp_24

0x1ac2,	// (0x0000466a) heading_pane_g1

0x0001,

0xf886,	// (0x0001242e) heading_pane_g

0x26d0,	// (0x00005278) grid_sct_catagory_button_pane

0x2700,	// (0x000052a8) scroll_pane_cp5_ParamLimits

0x363a,	// (0x000061e2) button_value_adjust_pane_cp5_ParamLimits

0x363a,	// (0x000061e2) button_value_adjust_pane_cp5

0x3734,	// (0x000062dc) form2_midp_time_pane_ParamLimits

0x5aac,	// (0x00008654) cell_sct_catagory_button_pane_ParamLimits

0x5aac,	// (0x00008654) cell_sct_catagory_button_pane

0x3a59,	// (0x00006601) bg_button_pane_cp01_ParamLimits

0x3a59,	// (0x00006601) bg_button_pane_cp01

0x3a94,	// (0x0000663c) cell_sct_catagory_button_pane_g1

0xaa61,	// (0x0000d609) popup_tb_extension_window

0xca72,	// (0x0000f61a) aid_size_cell_ext_ParamLimits

0xca72,	// (0x0000f61a) aid_size_cell_ext

0xe45d,	// (0x00011005) bg_tb_trans_pane_cp1_ParamLimits

0xe45d,	// (0x00011005) bg_tb_trans_pane_cp1

0xca98,	// (0x0000f640) grid_tb_ext_pane_ParamLimits

0xca98,	// (0x0000f640) grid_tb_ext_pane

0xcad7,	// (0x0000f67f) cell_tb_ext_pane_ParamLimits

0xcad7,	// (0x0000f67f) cell_tb_ext_pane

0xcaff,	// (0x0000f6a7) cell_tb_ext_pane_g1_ParamLimits

0xcaff,	// (0x0000f6a7) cell_tb_ext_pane_g1

0x5b42,	// (0x000086ea) cell_tb_ext_pane_t1

0xe2dd,	// (0x00010e85) list_highlight_pane_cp11_ParamLimits

0xe2dd,	// (0x00010e85) list_highlight_pane_cp11

0x8ff3,	// (0x0000bb9b) popup_uni_indicator_window_ParamLimits

0x8ff3,	// (0x0000bb9b) popup_uni_indicator_window

0xe5bb,	// (0x00011163) bg_popup_sub_pane_cp14

0xcb1c,	// (0x0000f6c4) list_uniindi_pane

0xcb28,	// (0x0000f6d0) uniindi_top_pane

0xe2dd,	// (0x00010e85) bg_uniindi_top_pane

0xcb47,	// (0x0000f6ef) uniindi_top_pane_g1

0xcb5d,	// (0x0000f705) uniindi_top_pane_g2

0x0003,

0xfcef,	// (0x00012897) uniindi_top_pane_g

0xcb7a,	// (0x0000f722) uniindi_top_pane_t1

0x5bf3,	// (0x0000879b) list_single_uniindi_pane_ParamLimits

0x5bf3,	// (0x0000879b) list_single_uniindi_pane

0x3a94,	// (0x0000663c) bg_uniindi_top_pane_g1

0x5c06,	// (0x000087ae) list_single_uniindi_pane_g1

0x5c19,	// (0x000087c1) list_single_uniindi_pane_t1

0xe0e9,	// (0x00010c91) control_bg_pane

0x5c3e,	// (0x000087e6) bg_sctrl_sk_pane_cp1

0x5c47,	// (0x000087ef) bg_sctrl_sk_pane_cp2

0x5c50,	// (0x000087f8) control_bg_pane_g1

0x5c59,	// (0x00008801) control_bg_pane_g2

0x0001,

0xfcf8,	// (0x000128a0) control_bg_pane_g

0x3438,	// (0x00005fe0) cell_indicator_nsta_pane_g1_ParamLimits

0xbc04,	// (0x0000e7ac) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x0001261b) cell_indicator_nsta_pane_g_ParamLimits

0x37bc,	// (0x00006364) form2_midp_time_pane_t1_ParamLimits

0x3af0,	// (0x00006698) main_idle_act4_pane_ParamLimits

0x3af0,	// (0x00006698) main_idle_act4_pane

0xaa61,	// (0x0000d609) popup_tb_extension_window_ParamLimits

0xcabd,	// (0x0000f665) tb_ext_find_pane_ParamLimits

0xcabd,	// (0x0000f665) tb_ext_find_pane

0x5c62,	// (0x0000880a) ai_gene_pane_1_cp1

0xf300,	// (0x00011ea8) ai_gene_pane_2_cp1

0xcba4,	// (0x0000f74c) list_single_idle_plugin_calendar_pane

0x5c73,	// (0x0000881b) list_single_idle_plugin_notification_pane

0x5c7c,	// (0x00008824) list_single_idle_plugin_player_pane

0xcbad,	// (0x0000f755) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcbad,	// (0x0000f755) list_single_idle_plugin_shortcut_pane

0xcbd5,	// (0x0000f77d) main_idle_act4_pane_t1

0xcbec,	// (0x0000f794) main_idle_act4_pane_t2

0x0001,

0xfcfd,	// (0x000128a5) main_idle_act4_pane_t

0xcc03,	// (0x0000f7ab) middle_sk_idle_act4_pane_ParamLimits

0xcc03,	// (0x0000f7ab) middle_sk_idle_act4_pane

0xcc1f,	// (0x0000f7c7) popup_clock_digital_analogue_window_cp2

0xcc4b,	// (0x0000f7f3) shortcut_wheel_idle_act4_pane_ParamLimits

0xcc4b,	// (0x0000f7f3) shortcut_wheel_idle_act4_pane

0x3a94,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g1

0x3a94,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g2

0x3a94,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g3

0x3a94,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g4

0x3a94,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g5

0x5d0f,	// (0x000088b7) shortcut_wheel_idle_act4_pane_g6

0x5d17,	// (0x000088bf) shortcut_wheel_idle_act4_pane_g7

0x5d1f,	// (0x000088c7) shortcut_wheel_idle_act4_pane_g8

0x5d27,	// (0x000088cf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd02,	// (0x000128aa) shortcut_wheel_idle_act4_pane_g

0x3ba5,	// (0x0000674d) middle_sk_idle_act4_pane_g1_ParamLimits

0x3ba5,	// (0x0000674d) middle_sk_idle_act4_pane_g1

0xccc8,	// (0x0000f870) middle_sk_idle_act4_pane_g2_ParamLimits

0xccc8,	// (0x0000f870) middle_sk_idle_act4_pane_g2

0x0001,

0xfd25,	// (0x000128cd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd25,	// (0x000128cd) middle_sk_idle_act4_pane_g

0xcce0,	// (0x0000f888) middle_sk_idle_act4_pane_t1_ParamLimits

0xcce0,	// (0x0000f888) middle_sk_idle_act4_pane_t1

0xcd0f,	// (0x0000f8b7) grid_ai_shortcut_pane_ParamLimits

0xcd0f,	// (0x0000f8b7) grid_ai_shortcut_pane

0xcd2c,	// (0x0000f8d4) list_highlight_pane_cp16_ParamLimits

0xcd2c,	// (0x0000f8d4) list_highlight_pane_cp16

0xcd39,	// (0x0000f8e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcd39,	// (0x0000f8e1) list_single_idle_plugin_shortcut_pane_g1

0xcd45,	// (0x0000f8ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcd45,	// (0x0000f8ed) list_single_idle_plugin_shortcut_pane_g2

0xcd61,	// (0x0000f909) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcd61,	// (0x0000f909) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd2a,	// (0x000128d2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd2a,	// (0x000128d2) list_single_idle_plugin_shortcut_pane_g

0xcd76,	// (0x0000f91e) cell_ai_shortcut_pane_ParamLimits

0xcd76,	// (0x0000f91e) cell_ai_shortcut_pane

0xcd8c,	// (0x0000f934) cell_ai_shortcut_pane_g1_ParamLimits

0xcd8c,	// (0x0000f934) cell_ai_shortcut_pane_g1

0x5c62,	// (0x0000880a) ai_gene_pane_1_cp2

0x5e57,	// (0x000089ff) ai_gene_pane_2_cp2

0x5e5f,	// (0x00008a07) list_highlight_pane_cp15

0xcdae,	// (0x0000f956) list_single_idle_plugin_calendar_pane_g1

0x5e5f,	// (0x00008a07) list_highlight_pane_cp17

0x5e70,	// (0x00008a18) list_single_idle_plugin_calendar_pane_g1_copy1

0x5e78,	// (0x00008a20) list_single_idle_plugin_player_pane_g1

0x29e1,	// (0x00005589) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd31,	// (0x000128d9) list_single_idle_plugin_player_pane_g

0x5e80,	// (0x00008a28) list_single_idle_plugin_player_pane_t1

0x5e8e,	// (0x00008a36) list_single_idle_plugin_player_pane_t2

0x5e9c,	// (0x00008a44) list_single_idle_plugin_player_pane_t3

0x5eaa,	// (0x00008a52) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd36,	// (0x000128de) list_single_idle_plugin_player_pane_t

0x5eb8,	// (0x00008a60) wait_bar_pane_cp15

0x5ec0,	// (0x00008a68) grid_ai_notification_pane

0x29e1,	// (0x00005589) list_single_idle_plugin_notification_pane_g1

0xcdb6,	// (0x0000f95e) cell_ai_notification_pane_ParamLimits

0xcdb6,	// (0x0000f95e) cell_ai_notification_pane

0x5ed6,	// (0x00008a7e) cell_ai_notification_pane_g1

0x5ede,	// (0x00008a86) cell_ai_notification_pane_t1

0xcdc3,	// (0x0000f96b) tb_ext_find_button_pane

0xcdcb,	// (0x0000f973) tb_ext_find_pane_g1

0xcdd3,	// (0x0000f97b) tb_ext_find_pane_t1

0xec38,	// (0x000117e0) tb_ext_find_button_pane_g1

0xcde1,	// (0x0000f989) tb_ext_find_button_pane_g2

0x0001,

0xfd3f,	// (0x000128e7) tb_ext_find_button_pane_g

0xcbd5,	// (0x0000f77d) main_idle_act4_pane_t1_ParamLimits

0xcbec,	// (0x0000f794) main_idle_act4_pane_t2_ParamLimits

0xfcfd,	// (0x000128a5) main_idle_act4_pane_t_ParamLimits

0xcc1f,	// (0x0000f7c7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcc37,	// (0x0000f7df) sat_plugin_idle_act4_pane_ParamLimits

0xcc37,	// (0x0000f7df) sat_plugin_idle_act4_pane

0xcdea,	// (0x0000f992) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcdea,	// (0x0000f992) sat_plugin_idle_act4_pane_t1

0xce02,	// (0x0000f9aa) sat_plugin_idle_act4_pane_t2_ParamLimits

0xce02,	// (0x0000f9aa) sat_plugin_idle_act4_pane_t2

0xce1a,	// (0x0000f9c2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xce1a,	// (0x0000f9c2) sat_plugin_idle_act4_pane_t3

0xce32,	// (0x0000f9da) sat_plugin_idle_act4_pane_t4_ParamLimits

0xce32,	// (0x0000f9da) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd44,	// (0x000128ec) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd44,	// (0x000128ec) sat_plugin_idle_act4_pane_t

0x8f6e,	// (0x0000bb16) popup_battery_window_ParamLimits

0x8f6e,	// (0x0000bb16) popup_battery_window

0xe2dd,	// (0x00010e85) bg_popup_sub_pane_cp25_ParamLimits

0xe2dd,	// (0x00010e85) bg_popup_sub_pane_cp25

0x5f5f,	// (0x00008b07) popup_battery_window_g1_ParamLimits

0x5f5f,	// (0x00008b07) popup_battery_window_g1

0x5f6b,	// (0x00008b13) popup_battery_window_t1_ParamLimits

0x5f6b,	// (0x00008b13) popup_battery_window_t1

0x5f7d,	// (0x00008b25) popup_battery_window_t2_ParamLimits

0x5f7d,	// (0x00008b25) popup_battery_window_t2

0x0001,

0xfd4d,	// (0x000128f5) popup_battery_window_t_ParamLimits

0xfd4d,	// (0x000128f5) popup_battery_window_t

0xa102,	// (0x0000ccaa) midp_canvas_pane_ParamLimits

0xa174,	// (0x0000cd1c) midp_keypad_pane_ParamLimits

0xa174,	// (0x0000cd1c) midp_keypad_pane

0xf45e,	// (0x00012006) main_midp_pane_ParamLimits

0xbc11,	// (0x0000e7b9) signal_pane_g2_cp_ParamLimits

0xce4a,	// (0x0000f9f2) aid_size_cell_midp_keypad_ParamLimits

0xce4a,	// (0x0000f9f2) aid_size_cell_midp_keypad

0xce68,	// (0x0000fa10) midp_keyp_game_grid_pane_ParamLimits

0xce68,	// (0x0000fa10) midp_keyp_game_grid_pane

0xce8f,	// (0x0000fa37) midp_keyp_rocker_pane_ParamLimits

0xce8f,	// (0x0000fa37) midp_keyp_rocker_pane

0xcee0,	// (0x0000fa88) midp_keyp_sk_left_pane_ParamLimits

0xcee0,	// (0x0000fa88) midp_keyp_sk_left_pane

0xcf34,	// (0x0000fadc) midp_keyp_sk_right_pane_ParamLimits

0xcf34,	// (0x0000fadc) midp_keyp_sk_right_pane

0xe0e9,	// (0x00010c91) bg_button_pane_cp03

0xcf88,	// (0x0000fb30) midp_keyp_sk_left_pane_g1

0xe0e9,	// (0x00010c91) bg_button_pane_cp04

0xcf88,	// (0x0000fb30) midp_keyp_sk_right_pane_g1

0x3a94,	// (0x0000663c) midp_keyp_rocker_pane_g1

0xcf91,	// (0x0000fb39) keyp_game_cell_pane_ParamLimits

0xcf91,	// (0x0000fb39) keyp_game_cell_pane

0xe0e9,	// (0x00010c91) bg_button_pane_cp02

0xcfb5,	// (0x0000fb5d) keyp_game_cell_pane_g1

0x8f8e,	// (0x0000bb36) popup_fep_vkb2_window_ParamLimits

0x8f8e,	// (0x0000bb36) popup_fep_vkb2_window

0xcfbe,	// (0x0000fb66) aid_size_cell_vkb2_ParamLimits

0xcfbe,	// (0x0000fb66) aid_size_cell_vkb2

0xcff2,	// (0x0000fb9a) popup_fep_vkb2_window_g1_ParamLimits

0xcff2,	// (0x0000fb9a) popup_fep_vkb2_window_g1

0xd042,	// (0x0000fbea) vkb2_area_bottom_pane_ParamLimits

0xd042,	// (0x0000fbea) vkb2_area_bottom_pane

0xd096,	// (0x0000fc3e) vkb2_area_keypad_pane_ParamLimits

0xd096,	// (0x0000fc3e) vkb2_area_keypad_pane

0xd0de,	// (0x0000fc86) vkb2_area_top_pane_ParamLimits

0xd0de,	// (0x0000fc86) vkb2_area_top_pane

0xd16a,	// (0x0000fd12) vkb2_top_entry_pane_ParamLimits

0xd16a,	// (0x0000fd12) vkb2_top_entry_pane

0xd197,	// (0x0000fd3f) vkb2_top_grid_left_pane_ParamLimits

0xd197,	// (0x0000fd3f) vkb2_top_grid_left_pane

0xd1b8,	// (0x0000fd60) vkb2_top_grid_right_pane_ParamLimits

0xd1b8,	// (0x0000fd60) vkb2_top_grid_right_pane

0x62fd,	// (0x00008ea5) vkb2_cell_keypad_pane_ParamLimits

0x62fd,	// (0x00008ea5) vkb2_cell_keypad_pane

0xd200,	// (0x0000fda8) vkb2_area_bottom_grid_pane_ParamLimits

0xd200,	// (0x0000fda8) vkb2_area_bottom_grid_pane

0xd22a,	// (0x0000fdd2) vkb2_area_bottom_pane_g1_ParamLimits

0xd22a,	// (0x0000fdd2) vkb2_area_bottom_pane_g1

0xd250,	// (0x0000fdf8) vkb2_area_bottom_pane_g2_ParamLimits

0xd250,	// (0x0000fdf8) vkb2_area_bottom_pane_g2

0xd281,	// (0x0000fe29) vkb2_area_bottom_pane_g3_ParamLimits

0xd281,	// (0x0000fe29) vkb2_area_bottom_pane_g3

0x0002,

0xfd52,	// (0x000128fa) vkb2_area_bottom_pane_g_ParamLimits

0xfd52,	// (0x000128fa) vkb2_area_bottom_pane_g

0x64a7,	// (0x0000904f) vkb2_top_cell_left_pane_ParamLimits

0x64a7,	// (0x0000904f) vkb2_top_cell_left_pane

0xd2eb,	// (0x0000fe93) vkb2_top_entry_pane_g1_ParamLimits

0xd2eb,	// (0x0000fe93) vkb2_top_entry_pane_g1

0xd2f9,	// (0x0000fea1) vkb2_top_entry_pane_t1_ParamLimits

0xd2f9,	// (0x0000fea1) vkb2_top_entry_pane_t1

0x650f,	// (0x000090b7) vkb2_top_entry_pane_t2_ParamLimits

0x650f,	// (0x000090b7) vkb2_top_entry_pane_t2

0x6541,	// (0x000090e9) vkb2_top_entry_pane_t3_ParamLimits

0x6541,	// (0x000090e9) vkb2_top_entry_pane_t3

0x0002,

0xfd59,	// (0x00012901) vkb2_top_entry_pane_t_ParamLimits

0xfd59,	// (0x00012901) vkb2_top_entry_pane_t

0xd332,	// (0x0000feda) vkb2_top_grid_right_pane_g1_ParamLimits

0xd332,	// (0x0000feda) vkb2_top_grid_right_pane_g1

0x65a8,	// (0x00009150) vkb2_top_grid_right_pane_g2_ParamLimits

0x65a8,	// (0x00009150) vkb2_top_grid_right_pane_g2

0x65c0,	// (0x00009168) vkb2_top_grid_right_pane_g3_ParamLimits

0x65c0,	// (0x00009168) vkb2_top_grid_right_pane_g3

0xd348,	// (0x0000fef0) vkb2_top_grid_right_pane_g4_ParamLimits

0xd348,	// (0x0000fef0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd60,	// (0x00012908) vkb2_top_grid_right_pane_g_ParamLimits

0xfd60,	// (0x00012908) vkb2_top_grid_right_pane_g

0x65ee,	// (0x00009196) vkb2_top_cell_left_pane_g1

0x6610,	// (0x000091b8) vkb2_cell_keypad_pane_g1_ParamLimits

0x6610,	// (0x000091b8) vkb2_cell_keypad_pane_g1

0x661e,	// (0x000091c6) vkb2_cell_keypad_pane_t1_ParamLimits

0x661e,	// (0x000091c6) vkb2_cell_keypad_pane_t1

0x6635,	// (0x000091dd) vkb2_cell_bottom_grid_pane_ParamLimits

0x6635,	// (0x000091dd) vkb2_cell_bottom_grid_pane

0x666e,	// (0x00009216) vkb2_cell_bottom_grid_pane_g1

0xcc6c,	// (0x0000f814) aid_call2_pane_cp02

0xcc74,	// (0x0000f81c) aid_call_pane_cp02

0xcc7c,	// (0x0000f824) clock_digital_number_pane_cp10

0xcc84,	// (0x0000f82c) clock_digital_number_pane_cp11

0xcc8c,	// (0x0000f834) clock_digital_number_pane_cp12

0xcc94,	// (0x0000f83c) clock_digital_number_pane_cp13

0xcc9c,	// (0x0000f844) clock_digital_separator_pane_cp10

0xec38,	// (0x000117e0) popup_clock_digital_analogue_window_cp2_g1

0xec38,	// (0x000117e0) popup_clock_digital_analogue_window_cp2_g2

0xcca4,	// (0x0000f84c) popup_clock_digital_analogue_window_cp2_g3

0xec38,	// (0x000117e0) popup_clock_digital_analogue_window_cp2_g4

0xcca4,	// (0x0000f84c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd15,	// (0x000128bd) popup_clock_digital_analogue_window_cp2_g

0xccac,	// (0x0000f854) popup_clock_digital_analogue_window_cp2_t1

0xccba,	// (0x0000f862) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd20,	// (0x000128c8) popup_clock_digital_analogue_window_cp2_t

0x3a94,	// (0x0000663c) clock_digital_number_pane_cp10_g1

0x3a94,	// (0x0000663c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000126b7) clock_digital_number_pane_cp10_g

0x3a94,	// (0x0000663c) clock_digital_separator_pane_cp10_g1

0x3a94,	// (0x0000663c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000126b7) clock_digital_separator_pane_cp10_g

0xcb69,	// (0x0000f711) uniindi_top_pane_g3

0x5bbc,	// (0x00008764) uniindi_top_pane_g4

0x6388,	// (0x00008f30) vkb2_row_keypad_pane_ParamLimits

0x6388,	// (0x00008f30) vkb2_row_keypad_pane

0x668e,	// (0x00009236) vkb2_cell_t_keypad_pane_ParamLimits

0x668e,	// (0x00009236) vkb2_cell_t_keypad_pane

0x669e,	// (0x00009246) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x669e,	// (0x00009246) vkb2_cell_t_keypad_pane_cp08

0x66b1,	// (0x00009259) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x66b1,	// (0x00009259) vkb2_cell_t_keypad_pane_cp09

0x66c5,	// (0x0000926d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x66c5,	// (0x0000926d) vkb2_cell_t_keypad_pane_cp01

0x66d6,	// (0x0000927e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x66d6,	// (0x0000927e) vkb2_cell_t_keypad_pane_cp02

0x66e7,	// (0x0000928f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x66e7,	// (0x0000928f) vkb2_cell_t_keypad_pane_cp03

0x66f8,	// (0x000092a0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x66f8,	// (0x000092a0) vkb2_cell_t_keypad_pane_cp04

0x6709,	// (0x000092b1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6709,	// (0x000092b1) vkb2_cell_t_keypad_pane_cp05

0x671a,	// (0x000092c2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x671a,	// (0x000092c2) vkb2_cell_t_keypad_pane_cp06

0x672b,	// (0x000092d3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x672b,	// (0x000092d3) vkb2_cell_t_keypad_pane_cp07

0x673c,	// (0x000092e4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x673c,	// (0x000092e4) vkb2_cell_t_keypad_pane_cp10

0x3f18,	// (0x00006ac0) vkb2_cell_t_keypad_pane_g1

0x6751,	// (0x000092f9) vkb2_cell_t_keypad_pane_t1

0xe0e9,	// (0x00010c91) popup_grid_graphic2_window

0xd35e,	// (0x0000ff06) aid_size_cell_graphic2_ParamLimits

0xd35e,	// (0x0000ff06) aid_size_cell_graphic2

0xd39c,	// (0x0000ff44) bg_popup_window_pane_cp21_ParamLimits

0xd39c,	// (0x0000ff44) bg_popup_window_pane_cp21

0xd3aa,	// (0x0000ff52) graphic2_pages_pane_ParamLimits

0xd3aa,	// (0x0000ff52) graphic2_pages_pane

0xd400,	// (0x0000ffa8) grid_graphic2_control_pane_ParamLimits

0xd400,	// (0x0000ffa8) grid_graphic2_control_pane

0xd448,	// (0x0000fff0) grid_graphic2_pane_ParamLimits

0xd448,	// (0x0000fff0) grid_graphic2_pane

0xd4cf,	// (0x00010077) cell_graphic2_pane

0xe0e9,	// (0x00010c91) main_comp_mode_pane

0x52e8,	// (0x00007e90) list_ai3_gene_pane_ParamLimits

0xc8d7,	// (0x0000f47f) bg_popup_window_pane_cp19_ParamLimits

0x5725,	// (0x000082cd) bg_touch_area_indi_pane_ParamLimits

0x5725,	// (0x000082cd) bg_touch_area_indi_pane

0x573b,	// (0x000082e3) bg_touch_area_indi_pane_cp01_ParamLimits

0x573b,	// (0x000082e3) bg_touch_area_indi_pane_cp01

0x5751,	// (0x000082f9) bg_touch_area_indi_pane_cp02_ParamLimits

0x5751,	// (0x000082f9) bg_touch_area_indi_pane_cp02

0x5767,	// (0x0000830f) bg_touch_area_indi_pane_cp03_ParamLimits

0x5767,	// (0x0000830f) bg_touch_area_indi_pane_cp03

0x5781,	// (0x00008329) popup_slider_window_g1_ParamLimits

0x579d,	// (0x00008345) popup_slider_window_g2_ParamLimits

0x57b9,	// (0x00008361) popup_slider_window_g3_ParamLimits

0xfcaa,	// (0x00012852) popup_slider_window_g_ParamLimits

0x581f,	// (0x000083c7) popup_slider_window_t1_ParamLimits

0x5893,	// (0x0000843b) small_volume_slider_vertical_pane_ParamLimits

0xd4cf,	// (0x00010077) cell_graphic2_pane_ParamLimits

0xd52a,	// (0x000100d2) bg_button_pane_cp10_ParamLimits

0xd52a,	// (0x000100d2) bg_button_pane_cp10

0xd53d,	// (0x000100e5) bg_button_pane_cp11_ParamLimits

0xd53d,	// (0x000100e5) bg_button_pane_cp11

0xd550,	// (0x000100f8) graphic2_pages_pane_g1_ParamLimits

0xd550,	// (0x000100f8) graphic2_pages_pane_g1

0xd56b,	// (0x00010113) graphic2_pages_pane_g2_ParamLimits

0xd56b,	// (0x00010113) graphic2_pages_pane_g2

0x0001,

0xfd6e,	// (0x00012916) graphic2_pages_pane_g_ParamLimits

0xfd6e,	// (0x00012916) graphic2_pages_pane_g

0xd583,	// (0x0001012b) graphic2_pages_pane_t1_ParamLimits

0xd583,	// (0x0001012b) graphic2_pages_pane_t1

0xd59b,	// (0x00010143) cell_graphic2_control_pane_ParamLimits

0xd59b,	// (0x00010143) cell_graphic2_control_pane

0xd5cd,	// (0x00010175) cell_graphic2_pane_g1_ParamLimits

0xd5cd,	// (0x00010175) cell_graphic2_pane_g1

0x3d40,	// (0x000068e8) cell_graphic2_pane_g2_ParamLimits

0x3d40,	// (0x000068e8) cell_graphic2_pane_g2

0xd5da,	// (0x00010182) cell_graphic2_pane_g3_ParamLimits

0xd5da,	// (0x00010182) cell_graphic2_pane_g3

0x3d4d,	// (0x000068f5) cell_graphic2_pane_g4_ParamLimits

0x3d4d,	// (0x000068f5) cell_graphic2_pane_g4

0xd5e7,	// (0x0001018f) cell_graphic2_pane_g5_ParamLimits

0xd5e7,	// (0x0001018f) cell_graphic2_pane_g5

0x0004,

0xfd73,	// (0x0001291b) cell_graphic2_pane_g_ParamLimits

0xfd73,	// (0x0001291b) cell_graphic2_pane_g

0xd604,	// (0x000101ac) cell_graphic2_pane_t1_ParamLimits

0xd604,	// (0x000101ac) cell_graphic2_pane_t1

0x1ab6,	// (0x0000465e) grid_highlight_pane_cp11_ParamLimits

0x1ab6,	// (0x0000465e) grid_highlight_pane_cp11

0xe2dd,	// (0x00010e85) bg_button_pane_cp05

0xd64e,	// (0x000101f6) cell_graphic2_control_pane_g1

0x3a94,	// (0x0000663c) bg_touch_area_indi_pane_g1

0x6a2a,	// (0x000095d2) aid_cmod_rocker_key_size

0x6a34,	// (0x000095dc) aid_cmode_itu_key_size

0x6a3e,	// (0x000095e6) main_cmode_video_pane

0x6a48,	// (0x000095f0) main_comp_mode_itu_pane

0x6a54,	// (0x000095fc) main_comp_mode_rocker_pane

0x6a60,	// (0x00009608) cell_cmode_rocker_pane_ParamLimits

0x6a60,	// (0x00009608) cell_cmode_rocker_pane

0x6a72,	// (0x0000961a) cell_cmode_itu_pane_ParamLimits

0x6a72,	// (0x0000961a) cell_cmode_itu_pane

0xe5bb,	// (0x00011163) bg_button_pane_cp06_ParamLimits

0xe5bb,	// (0x00011163) bg_button_pane_cp06

0x3f18,	// (0x00006ac0) cell_cmode_rocker_pane_g1_ParamLimits

0x3f18,	// (0x00006ac0) cell_cmode_rocker_pane_g1

0x5a08,	// (0x000085b0) cell_cmode_rocker_pane_g2_ParamLimits

0x5a08,	// (0x000085b0) cell_cmode_rocker_pane_g2

0x0001,

0xfd83,	// (0x0001292b) cell_cmode_rocker_pane_g_ParamLimits

0xfd83,	// (0x0001292b) cell_cmode_rocker_pane_g

0xe0e9,	// (0x00010c91) bg_button_pane_cp07

0x6a87,	// (0x0000962f) cell_cmode_itu_pane_g1

0x6a90,	// (0x00009638) cell_cmode_itu_pane_t1

0x6a9e,	// (0x00009646) cell_cmode_itu_pane_t2

0x0001,

0xfd88,	// (0x00012930) cell_cmode_itu_pane_t

0x5c2e,	// (0x000087d6) aid_touch_ctrl_left

0x5c36,	// (0x000087de) aid_touch_ctrl_right

0xe0e9,	// (0x00010c91) compa_mode_pane

0xd674,	// (0x0001021c) aid_cmod_rocker_key_size_cp

0xd67e,	// (0x00010226) aid_cmode_itu_key_size_cp

0x6ac0,	// (0x00009668) compa_mode_pane_g1

0x6ac8,	// (0x00009670) compa_mode_pane_g2

0x6ad0,	// (0x00009678) compa_mode_pane_g3

0x0002,

0xfd8d,	// (0x00012935) compa_mode_pane_g

0xd688,	// (0x00010230) main_comp_mode_itu_pane_cp

0xd690,	// (0x00010238) main_comp_mode_rocker_pane_cp

0xd698,	// (0x00010240) cell_cmode_itu_pane_cp_ParamLimits

0xd698,	// (0x00010240) cell_cmode_itu_pane_cp

0xd6ad,	// (0x00010255) cell_cmode_rocker_pane_cp_ParamLimits

0xd6ad,	// (0x00010255) cell_cmode_rocker_pane_cp

0xe5bb,	// (0x00011163) bg_button_pane_cp06_cp_ParamLimits

0xe5bb,	// (0x00011163) bg_button_pane_cp06_cp

0x3f18,	// (0x00006ac0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3f18,	// (0x00006ac0) cell_cmode_rocker_pane_g1_cp

0x3a94,	// (0x0000663c) cell_cmode_rocker_pane_g2_cp

0xe0e9,	// (0x00010c91) bg_button_pane_cp07_cp

0xd6bf,	// (0x00010267) cell_cmode_itu_pane_g1_cp

0xd6c8,	// (0x00010270) cell_cmode_itu_pane_t1_cp

0xd6c8,	// (0x00010270) cell_cmode_itu_pane_t2_cp

0xb91f,	// (0x0000e4c7) settings_code_pane_cp2

0xe199,	// (0x00010d41) bg_popup_window_pane_cp3_ParamLimits

0xe3f6,	// (0x00010f9e) heading_pane_cp3_ParamLimits

0xe405,	// (0x00010fad) listscroll_popup_graphic_pane_ParamLimits

0x3afe,	// (0x000066a6) fep_hwr_aid_pane_ParamLimits

0x590e,	// (0x000084b6) aid_touch_sctrl_top_ParamLimits

0x591b,	// (0x000084c3) sctrl_sk_top_pane_g1_ParamLimits

0x3f18,	// (0x00006ac0) sctrl_sk_top_pane_g2_ParamLimits

0xfcc3,	// (0x0001286b) sctrl_sk_top_pane_g_ParamLimits

0x5928,	// (0x000084d0) sctrl_sk_top_pane_t1_ParamLimits

0x590e,	// (0x000084b6) aid_touch_sctrl_bottom_ParamLimits

0x5928,	// (0x000084d0) sctrl_sk_bottom_pane_t1_ParamLimits

0xcb35,	// (0x0000f6dd) aid_area_touch_clock

0xd12a,	// (0x0000fcd2) aid_vkb2_area_top_pane_cell_ParamLimits

0xd12a,	// (0x0000fcd2) aid_vkb2_area_top_pane_cell

0xd1d9,	// (0x0000fd81) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd1d9,	// (0x0000fd81) aid_vkb2_area_bottom_pane_cell

0x64c7,	// (0x0000906f) popup_char_count_window

0x6b26,	// (0x000096ce) popup_char_count_window_g1

0x6b2f,	// (0x000096d7) popup_char_count_window_g2

0x6b38,	// (0x000096e0) popup_char_count_window_g3

0x0002,

0xfd94,	// (0x0001293c) popup_char_count_window_g

0x6b41,	// (0x000096e9) popup_char_count_window_t1

0x611e,	// (0x00008cc6) popup_fep_char_preview_window_ParamLimits

0x611e,	// (0x00008cc6) popup_fep_char_preview_window

0xd14a,	// (0x0000fcf2) vkb2_top_candi_pane_ParamLimits

0xd14a,	// (0x0000fcf2) vkb2_top_candi_pane

0xd6d6,	// (0x0001027e) cell_vkb2_top_candi_pane_ParamLimits

0xd6d6,	// (0x0001027e) cell_vkb2_top_candi_pane

0x1301,	// (0x00003ea9) bg_popup_fep_char_preview_window_ParamLimits

0x1301,	// (0x00003ea9) bg_popup_fep_char_preview_window

0x6b99,	// (0x00009741) popup_fep_char_preview_window_t1_ParamLimits

0x6b99,	// (0x00009741) popup_fep_char_preview_window_t1

0x6bd3,	// (0x0000977b) bg_popup_fep_char_preview_window_g1

0x6bdb,	// (0x00009783) bg_popup_fep_char_preview_window_g2

0x6be3,	// (0x0000978b) bg_popup_fep_char_preview_window_g3

0x6beb,	// (0x00009793) bg_popup_fep_char_preview_window_g4

0x6bf3,	// (0x0000979b) bg_popup_fep_char_preview_window_g5

0x6bfb,	// (0x000097a3) bg_popup_fep_char_preview_window_g6

0x6c03,	// (0x000097ab) bg_popup_fep_char_preview_window_g7

0x6c0b,	// (0x000097b3) bg_popup_fep_char_preview_window_g8

0x6c13,	// (0x000097bb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9b,	// (0x00012943) bg_popup_fep_char_preview_window_g

0x3f18,	// (0x00006ac0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3f18,	// (0x00006ac0) cell_vkb2_top_candi_pane_g1

0x4283,	// (0x00006e2b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4283,	// (0x00006e2b) cell_vkb2_top_candi_pane_g2

0x42a4,	// (0x00006e4c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x42a4,	// (0x00006e4c) cell_vkb2_top_candi_pane_g3

0x6c23,	// (0x000097cb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6c23,	// (0x000097cb) cell_vkb2_top_candi_pane_g4

0x6c44,	// (0x000097ec) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6c44,	// (0x000097ec) cell_vkb2_top_candi_pane_g5

0x5a08,	// (0x000085b0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5a08,	// (0x000085b0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb0,	// (0x00012958) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb0,	// (0x00012958) cell_vkb2_top_candi_pane_g

0x6c65,	// (0x0000980d) cell_vkb2_top_candi_pane_t1

0xb73f,	// (0x0000e2e7) aid_size_touch_slider_mark_ParamLimits

0xb73f,	// (0x0000e2e7) aid_size_touch_slider_mark

0xd3e6,	// (0x0000ff8e) grid_graphic2_catg_pane_ParamLimits

0xd3e6,	// (0x0000ff8e) grid_graphic2_catg_pane

0xd4a2,	// (0x0001004a) popup_grid_graphic2_window_t1_ParamLimits

0xd4a2,	// (0x0001004a) popup_grid_graphic2_window_t1

0xd4b8,	// (0x00010060) popup_grid_graphic2_window_t2_ParamLimits

0xd4b8,	// (0x00010060) popup_grid_graphic2_window_t2

0x0001,

0xfd69,	// (0x00012911) popup_grid_graphic2_window_t_ParamLimits

0xfd69,	// (0x00012911) popup_grid_graphic2_window_t

0xe2dd,	// (0x00010e85) bg_button_pane_cp05_ParamLimits

0xd64e,	// (0x000101f6) cell_graphic2_control_pane_g1_ParamLimits

0xd73e,	// (0x000102e6) cell_graphic2_catg_pane_ParamLimits

0xd73e,	// (0x000102e6) cell_graphic2_catg_pane

0xe0e9,	// (0x00010c91) bg_button_pane_cp12

0xd750,	// (0x000102f8) cell_graphic2_catg_pane_g1

0x5b42,	// (0x000086ea) cell_tb_ext_pane_t1_ParamLimits

0x6565,	// (0x0000910d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6565,	// (0x0000910d) vkb2_top_cell_right_narrow_pane

0x657d,	// (0x00009125) vkb2_top_cell_right_wide_pane_ParamLimits

0x657d,	// (0x00009125) vkb2_top_cell_right_wide_pane

0x3af0,	// (0x00006698) bg_vkb2_func_pane_ParamLimits

0x3af0,	// (0x00006698) bg_vkb2_func_pane

0x65ee,	// (0x00009196) vkb2_top_cell_left_pane_g1_ParamLimits

0x3af0,	// (0x00006698) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3af0,	// (0x00006698) bg_vkb2_fuc_pane_cp03

0x666e,	// (0x00009216) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0a8e,	// (0x00003636) bg_vkb2_func_pane_g1

0x0a96,	// (0x0000363e) bg_vkb2_func_pane_g2

0x0aa6,	// (0x0000364e) bg_vkb2_func_pane_g3

0x0a9e,	// (0x00003646) bg_vkb2_func_pane_g4

0x0aae,	// (0x00003656) bg_vkb2_func_pane_g5

0x0ab6,	// (0x0000365e) bg_vkb2_func_pane_g6

0x0abe,	// (0x00003666) bg_vkb2_func_pane_g7

0x0ac6,	// (0x0000366e) bg_vkb2_func_pane_g8

0x0a86,	// (0x0000362e) bg_vkb2_func_pane_g9

0x0008,

0xfdbd,	// (0x00012965) bg_vkb2_func_pane_g

0x3af0,	// (0x00006698) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3af0,	// (0x00006698) bg_vkb2_fuc_pane_cp01

0x65ee,	// (0x00009196) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x65ee,	// (0x00009196) vkb2_top_cell_right_wide_pane_g1

0x3af0,	// (0x00006698) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3af0,	// (0x00006698) bg_vkb2_fuc_pane_cp02

0x6c9f,	// (0x00009847) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c9f,	// (0x00009847) vkb2_top_cell_right_narrow_pane_g1

0xc819,	// (0x0000f3c1) aid_touch_area_decrease_ParamLimits

0xc819,	// (0x0000f3c1) aid_touch_area_decrease

0xc853,	// (0x0000f3fb) aid_touch_area_increase_ParamLimits

0xc853,	// (0x0000f3fb) aid_touch_area_increase

0xc87b,	// (0x0000f423) aid_touch_area_mute_ParamLimits

0xc87b,	// (0x0000f423) aid_touch_area_mute

0xc8a3,	// (0x0000f44b) aid_touch_area_slider_ParamLimits

0xc8a3,	// (0x0000f44b) aid_touch_area_slider

0xc8e3,	// (0x0000f48b) popup_slider_window_g4_ParamLimits

0xc8e3,	// (0x0000f48b) popup_slider_window_g4

0xc8fd,	// (0x0000f4a5) popup_slider_window_g5_ParamLimits

0xc8fd,	// (0x0000f4a5) popup_slider_window_g5

0xc923,	// (0x0000f4cb) popup_slider_window_g6_ParamLimits

0xc923,	// (0x0000f4cb) popup_slider_window_g6

0x584d,	// (0x000083f5) popup_slider_window_t2_ParamLimits

0x584d,	// (0x000083f5) popup_slider_window_t2

0x0001,

0xfcb7,	// (0x0001285f) popup_slider_window_t_ParamLimits

0xfcb7,	// (0x0001285f) popup_slider_window_t

0xc939,	// (0x0000f4e1) slider_pane_ParamLimits

0xc939,	// (0x0000f4e1) slider_pane

0x6cbf,	// (0x00009867) slider_pane_g1_ParamLimits

0x6cbf,	// (0x00009867) slider_pane_g1

0x6cd3,	// (0x0000987b) slider_pane_g2_ParamLimits

0x6cd3,	// (0x0000987b) slider_pane_g2

0x6ce9,	// (0x00009891) slider_pane_g3_ParamLimits

0x6ce9,	// (0x00009891) slider_pane_g3

0x0003,

0xfdd0,	// (0x00012978) slider_pane_g_ParamLimits

0xfdd0,	// (0x00012978) slider_pane_g

0xaaa9,	// (0x0000d651) popup_tb_float_extension_window_ParamLimits

0xaaa9,	// (0x0000d651) popup_tb_float_extension_window

0x6d15,	// (0x000098bd) aid_size_cell_tb_float_ext

0xe0e9,	// (0x00010c91) bg_popup_sub_window_cp28

0xd759,	// (0x00010301) grid_tb_float_ext_pane

0xd763,	// (0x0001030b) cell_tb_float_ext_pane_ParamLimits

0xd763,	// (0x0001030b) cell_tb_float_ext_pane

0xd77d,	// (0x00010325) cell_tb_float_ext_pane_g1

0xd786,	// (0x0001032e) grid_highlight_pane_cp12

0xbe81,	// (0x0000ea29) cell_last_hwr_side_pane_ParamLimits

0xbe81,	// (0x0000ea29) cell_last_hwr_side_pane

0x3a94,	// (0x0000663c) cell_last_hwr_side_pane_g1

0x6d57,	// (0x000098ff) cell_last_hwr_side_pane_g2

0x0001,

0xfdd9,	// (0x00012981) cell_last_hwr_side_pane_g

0xd2b6,	// (0x0000fe5e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd2b6,	// (0x0000fe5e) vkb2_area_bottom_space_btn_pane

0x3f18,	// (0x00006ac0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6751,	// (0x000092f9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6c65,	// (0x0000980d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6d60,	// (0x00009908) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6d60,	// (0x00009908) vkb2_area_bottom_space_btn_pane_g1

0x6d9a,	// (0x00009942) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6d9a,	// (0x00009942) vkb2_area_bottom_space_btn_pane_g2

0x6dd0,	// (0x00009978) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6dd0,	// (0x00009978) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdde,	// (0x00012986) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdde,	// (0x00012986) vkb2_area_bottom_space_btn_pane_g

0x3bb3,	// (0x0000675b) cel_fep_hwr_func_pane_ParamLimits

0x3bb3,	// (0x0000675b) cel_fep_hwr_func_pane

0xbe56,	// (0x0000e9fe) cell_hwr_side_button_pane_ParamLimits

0xbe56,	// (0x0000e9fe) cell_hwr_side_button_pane

0xcb35,	// (0x0000f6dd) aid_area_touch_clock_ParamLimits

0xe2dd,	// (0x00010e85) bg_uniindi_top_pane_ParamLimits

0xcb47,	// (0x0000f6ef) uniindi_top_pane_g1_ParamLimits

0xcb5d,	// (0x0000f705) uniindi_top_pane_g2_ParamLimits

0xcb69,	// (0x0000f711) uniindi_top_pane_g3_ParamLimits

0x5bbc,	// (0x00008764) uniindi_top_pane_g4_ParamLimits

0xfcef,	// (0x00012897) uniindi_top_pane_g_ParamLimits

0xcb7a,	// (0x0000f722) uniindi_top_pane_t1_ParamLimits

0xe2dd,	// (0x00010e85) bg_vkb2_func_pane_cp01_ParamLimits

0xe2dd,	// (0x00010e85) bg_vkb2_func_pane_cp01

0x6e1a,	// (0x000099c2) cel_fep_hwr_func_pane_g1_ParamLimits

0x6e1a,	// (0x000099c2) cel_fep_hwr_func_pane_g1

0xe2dd,	// (0x00010e85) bg_vkb2_func_pane_cp02_ParamLimits

0xe2dd,	// (0x00010e85) bg_vkb2_func_pane_cp02

0x6e1a,	// (0x000099c2) cell_hwr_side_button_pane_g1_ParamLimits

0x6e1a,	// (0x000099c2) cell_hwr_side_button_pane_g1

0x085a,	// (0x00003402) status_pane_g4_ParamLimits

0x085a,	// (0x00003402) status_pane_g4

0x0874,	// (0x0000341c) status_pane_t1

0x37cf,	// (0x00006377) form2_midp_gauge_slider_cont_pane

0x37d7,	// (0x0000637f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd6f,	// (0x0000e917) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd81,	// (0x0000e929) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x0001266a) form2_midp_gauge_slider_pane_t_ParamLimits

0x380d,	// (0x000063b5) form2_midp_slider_pane_ParamLimits

0x60e6,	// (0x00008c8e) aid_size_cell_func_vkb2_ParamLimits

0x60e6,	// (0x00008c8e) aid_size_cell_func_vkb2

0x6d01,	// (0x000098a9) slider_pane_g4_ParamLimits

0x6d01,	// (0x000098a9) slider_pane_g4

0xd78f,	// (0x00010337) form2_midp_gauge_slider_pane_t2_cp01

0xd79d,	// (0x00010345) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd79d,	// (0x00010345) form2_midp_gauge_slider_pane_t3_cp01

0x6e53,	// (0x000099fb) form2_midp_slider_pane_cp01

0xe0e9,	// (0x00010c91) navi_smil_pane

0x6e87,	// (0x00009a2f) navi_smil_pane_g1

0x6e8f,	// (0x00009a37) navi_smil_pane_t1

0x6e5c,	// (0x00009a04) form2_midp_slider_pane_g1

0x6e65,	// (0x00009a0d) form2_midp_slider_pane_g2

0x6e6d,	// (0x00009a15) form2_midp_slider_pane_g3

0x6e5c,	// (0x00009a04) form2_midp_slider_pane_g4

0xd7ba,	// (0x00010362) form2_midp_slider_pane_g5

0x0004,

0xfde7,	// (0x0001298f) form2_midp_slider_pane_g

0x6e0a,	// (0x000099b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6e0a,	// (0x000099b2) vkb2_area_bottom_space_btn_pane_g4

0xace1,	// (0x0000d889) lc0_navi_pane_ParamLimits

0xace1,	// (0x0000d889) lc0_navi_pane

0xad4b,	// (0x0000d8f3) lc0_stat_indi_pane_ParamLimits

0xad4b,	// (0x0000d8f3) lc0_stat_indi_pane

0xad60,	// (0x0000d908) ls0_title_pane_ParamLimits

0xad60,	// (0x0000d908) ls0_title_pane

0xe5bb,	// (0x00011163) bg_popup_sub_pane_cp14_ParamLimits

0xcb1c,	// (0x0000f6c4) list_uniindi_pane_ParamLimits

0xcb28,	// (0x0000f6d0) uniindi_top_pane_ParamLimits

0x5c06,	// (0x000087ae) list_single_uniindi_pane_g1_ParamLimits

0x5c19,	// (0x000087c1) list_single_uniindi_pane_t1_ParamLimits

0xd7c5,	// (0x0001036d) lc0_stat_clock_pane_ParamLimits

0xd7c5,	// (0x0001036d) lc0_stat_clock_pane

0xd7d5,	// (0x0001037d) lc0_stat_indi_pane_g1_ParamLimits

0xd7d5,	// (0x0001037d) lc0_stat_indi_pane_g1

0xd7e2,	// (0x0001038a) lc0_stat_indi_pane_g2_ParamLimits

0xd7e2,	// (0x0001038a) lc0_stat_indi_pane_g2

0x0001,

0xfdf2,	// (0x0001299a) lc0_stat_indi_pane_g_ParamLimits

0xfdf2,	// (0x0001299a) lc0_stat_indi_pane_g

0xd7ef,	// (0x00010397) lc0_uni_indicator_pane_ParamLimits

0xd7ef,	// (0x00010397) lc0_uni_indicator_pane

0xd7ff,	// (0x000103a7) ls0_title_pane_g1_ParamLimits

0xd7ff,	// (0x000103a7) ls0_title_pane_g1

0xd813,	// (0x000103bb) ls0_title_pane_t1_ParamLimits

0xd813,	// (0x000103bb) ls0_title_pane_t1

0xd841,	// (0x000103e9) lc0_uni_indicator_pane_g1_ParamLimits

0xd841,	// (0x000103e9) lc0_uni_indicator_pane_g1

0x6f2f,	// (0x00009ad7) lc0_stat_clock_pane_t1

0xe0e9,	// (0x00010c91) main_ai5_pane

0x6f3d,	// (0x00009ae5) ai5_sk_pane_ParamLimits

0x6f3d,	// (0x00009ae5) ai5_sk_pane

0xd86c,	// (0x00010414) cell_ai5_widget_pane_ParamLimits

0xd86c,	// (0x00010414) cell_ai5_widget_pane

0x7013,	// (0x00009bbb) aid_size_cell_widget_grid

0x7021,	// (0x00009bc9) bg_ai5_widget_pane_ParamLimits

0x7021,	// (0x00009bc9) bg_ai5_widget_pane

0x709d,	// (0x00009c45) cell_ai5_widget_pane_g2

0x70b1,	// (0x00009c59) cell_ai5_widget_pane_g3

0x70cb,	// (0x00009c73) cell_ai5_widget_pane_g4

0x70db,	// (0x00009c83) cell_ai5_widget_pane_g5

0x70eb,	// (0x00009c93) cell_ai5_widget_pane_g6

0x70f7,	// (0x00009c9f) cell_ai5_widget_pane_g7

0x7163,	// (0x00009d0b) cell_ai5_widget_pane_t1_ParamLimits

0x7163,	// (0x00009d0b) cell_ai5_widget_pane_t1

0x7180,	// (0x00009d28) cell_ai5_widget_pane_t2_ParamLimits

0x7180,	// (0x00009d28) cell_ai5_widget_pane_t2

0x7198,	// (0x00009d40) cell_ai5_widget_pane_t3_ParamLimits

0x7198,	// (0x00009d40) cell_ai5_widget_pane_t3

0x71b0,	// (0x00009d58) cell_ai5_widget_pane_t4_ParamLimits

0x71b0,	// (0x00009d58) cell_ai5_widget_pane_t4

0xd8d8,	// (0x00010480) cell_ai5_widget_pane_t5_ParamLimits

0xd8d8,	// (0x00010480) cell_ai5_widget_pane_t5

0x71f5,	// (0x00009d9d) cell_ai5_widget_pane_t6_ParamLimits

0x71f5,	// (0x00009d9d) cell_ai5_widget_pane_t6

0x7207,	// (0x00009daf) cell_ai5_widget_pane_t7_ParamLimits

0x7207,	// (0x00009daf) cell_ai5_widget_pane_t7

0x7226,	// (0x00009dce) cell_ai5_widget_pane_t8_ParamLimits

0x7226,	// (0x00009dce) cell_ai5_widget_pane_t8

0x000b,

0xfe12,	// (0x000129ba) cell_ai5_widget_pane_t_ParamLimits

0xfe12,	// (0x000129ba) cell_ai5_widget_pane_t

0x72aa,	// (0x00009e52) grid_ai5_widget_pane

0xe5bb,	// (0x00011163) highlight_cell_ai5_widget_pane_ParamLimits

0xe5bb,	// (0x00011163) highlight_cell_ai5_widget_pane

0xd8f8,	// (0x000104a0) ai5_sk_left_pane

0xd902,	// (0x000104aa) ai5_sk_middle_pane

0xd90c,	// (0x000104b4) ai5_sk_right_pane

0x72d6,	// (0x00009e7e) bg_ai5_widget_pane_g1_ParamLimits

0x72d6,	// (0x00009e7e) bg_ai5_widget_pane_g1

0x72e2,	// (0x00009e8a) bg_ai5_widget_pane_g2_ParamLimits

0x72e2,	// (0x00009e8a) bg_ai5_widget_pane_g2

0x72ee,	// (0x00009e96) bg_ai5_widget_pane_g3_ParamLimits

0x72ee,	// (0x00009e96) bg_ai5_widget_pane_g3

0x72fa,	// (0x00009ea2) bg_ai5_widget_pane_g4_ParamLimits

0x72fa,	// (0x00009ea2) bg_ai5_widget_pane_g4

0x7306,	// (0x00009eae) bg_ai5_widget_pane_g5_ParamLimits

0x7306,	// (0x00009eae) bg_ai5_widget_pane_g5

0x7312,	// (0x00009eba) bg_ai5_widget_pane_g6_ParamLimits

0x7312,	// (0x00009eba) bg_ai5_widget_pane_g6

0x731e,	// (0x00009ec6) bg_ai5_widget_pane_g7_ParamLimits

0x731e,	// (0x00009ec6) bg_ai5_widget_pane_g7

0x732a,	// (0x00009ed2) bg_ai5_widget_pane_g8_ParamLimits

0x732a,	// (0x00009ed2) bg_ai5_widget_pane_g8

0x7336,	// (0x00009ede) bg_ai5_widget_pane_g9_ParamLimits

0x7336,	// (0x00009ede) bg_ai5_widget_pane_g9

0x0008,

0xfe2b,	// (0x000129d3) bg_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x000129d3) bg_ai5_widget_pane_g

0x7368,	// (0x00009f10) cell_shortcut_ai5_widget_pane_ParamLimits

0x7368,	// (0x00009f10) cell_shortcut_ai5_widget_pane

0xf27f,	// (0x00011e27) bg_cell_shortcut_ai5_widget_pane

0x7379,	// (0x00009f21) cell_grid_ai5_widget_pane_g1

0xf27f,	// (0x00011e27) highlight_cell_shortcut_ai5_widget_pane

0x0a96,	// (0x0000363e) ai5_sk_left_pane_g1

0x7382,	// (0x00009f2a) ai5_sk_left_pane_g2

0x738a,	// (0x00009f32) ai5_sk_left_pane_g3

0x7392,	// (0x00009f3a) ai5_sk_left_pane_g4

0x0003,

0xfe3e,	// (0x000129e6) ai5_sk_left_pane_g

0x739a,	// (0x00009f42) ai5_sk_left_pane_t1

0x0a8e,	// (0x00003636) ai5_sk_right_pane_g1

0x73a8,	// (0x00009f50) ai5_sk_right_pane_g2

0x73b0,	// (0x00009f58) ai5_sk_right_pane_g3

0x73b8,	// (0x00009f60) ai5_sk_right_pane_g4

0x0003,

0xfe47,	// (0x000129ef) ai5_sk_right_pane_g

0x73c0,	// (0x00009f68) ai5_sk_right_pane_t1

0x0a8e,	// (0x00003636) ai5_sk_middle_pane_g1

0x0a96,	// (0x0000363e) ai5_sk_middle_pane_g2

0x0aae,	// (0x00003656) ai5_sk_middle_pane_g3

0x73b0,	// (0x00009f58) ai5_sk_middle_pane_g4

0x738a,	// (0x00009f32) ai5_sk_middle_pane_g5

0x73ce,	// (0x00009f76) ai5_sk_middle_pane_g6

0xd916,	// (0x000104be) ai5_sk_middle_pane_g7

0x0006,

0xfe50,	// (0x000129f8) ai5_sk_middle_pane_g

0xabcd,	// (0x0000d775) aid_touch_area_size_lc0_ParamLimits

0xabcd,	// (0x0000d775) aid_touch_area_size_lc0

0x42c5,	// (0x00006e6d) cell_hwr_candidate_pane_t1_ParamLimits

0x052b,	// (0x000030d3) aid_touch_navi_pane

0xae59,	// (0x0000da01) status_dt_navi_pane_ParamLimits

0xae59,	// (0x0000da01) status_dt_navi_pane

0xae71,	// (0x0000da19) status_dt_sta_pane_ParamLimits

0xae71,	// (0x0000da19) status_dt_sta_pane

0xd91e,	// (0x000104c6) dt_sta_controll_pane

0xd92b,	// (0x000104d3) dt_sta_indi_pane

0xd938,	// (0x000104e0) dt_sta_title_pane

0xe2dd,	// (0x00010e85) bg_dt_sta_indi_pane_ParamLimits

0xe2dd,	// (0x00010e85) bg_dt_sta_indi_pane

0xd94a,	// (0x000104f2) dt_sta_battery_pane

0xd952,	// (0x000104fa) dt_sta_indi_pane_g1

0x7420,	// (0x00009fc8) dt_sta_indi_pane_g2

0x7429,	// (0x00009fd1) dt_sta_indi_pane_g3

0x0002,

0xfe5f,	// (0x00012a07) dt_sta_indi_pane_g

0x7432,	// (0x00009fda) dt_sta_signal_pane

0xe5bb,	// (0x00011163) bg_dt_sta_title_pane_ParamLimits

0xe5bb,	// (0x00011163) bg_dt_sta_title_pane

0x1c27,	// (0x000047cf) dt_sta_title_pane_g1

0xd95b,	// (0x00010503) dt_sta_title_pane_t1_ParamLimits

0xd95b,	// (0x00010503) dt_sta_title_pane_t1

0xe0e9,	// (0x00010c91) bg_dt_sta_control_pane

0xd970,	// (0x00010518) dt_sta_controll_pane_g1

0xd979,	// (0x00010521) bg_dt_sta_title_pane_g1

0xd982,	// (0x0001052a) bg_dt_sta_title_pane_g2

0xd98b,	// (0x00010533) bg_dt_sta_title_pane_g3

0x0002,

0xfe66,	// (0x00012a0e) bg_dt_sta_title_pane_g

0x3a94,	// (0x0000663c) bg_dt_sta_indi_pane_g1

0x7474,	// (0x0000a01c) dt_sta_signal_pane_g1

0x747c,	// (0x0000a024) dt_sta_signal_pane_g2

0x0001,

0xfe6d,	// (0x00012a15) dt_sta_signal_pane_g

0x7484,	// (0x0000a02c) dt_sta_battery_pane_g1

0x748d,	// (0x0000a035) dt_sta_battery_pane_t1

0x3a94,	// (0x0000663c) bg_dt_sta_control_pane_g1

0xed4f,	// (0x000118f7) fep_china_uni_eep_pane

0xed57,	// (0x000118ff) fep_china_uni_entry_pane_ParamLimits

0xed67,	// (0x0001190f) popup_fep_china_uni_window_g1_ParamLimits

0xed77,	// (0x0001191f) popup_fep_china_uni_window_g2_ParamLimits

0xed77,	// (0x0001191f) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x0001228c) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x0001228c) popup_fep_china_uni_window_g

0x749c,	// (0x0000a044) fep_china_uni_eep_pane_g1

0x74a4,	// (0x0000a04c) fep_china_uni_eep_pane_t1

0x6e7e,	// (0x00009a26) aid_touch_area_size_smil_player

0x0681,	// (0x00003229) lc0_clock_pane

0x0868,	// (0x00003410) status_pane_g5_ParamLimits

0x0868,	// (0x00003410) status_pane_g5

0xa605,	// (0x0000d1ad) popup_keymap_window

0x0826,	// (0x000033ce) status_icon_pane

0x70b1,	// (0x00009c59) cell_ai5_widget_pane_g3_ParamLimits

0x70cb,	// (0x00009c73) cell_ai5_widget_pane_g4_ParamLimits

0x70db,	// (0x00009c83) cell_ai5_widget_pane_g5_ParamLimits

0x7103,	// (0x00009cab) cell_ai5_widget_pane_g8_ParamLimits

0x7103,	// (0x00009cab) cell_ai5_widget_pane_g8

0x7117,	// (0x00009cbf) cell_ai5_widget_pane_g9_ParamLimits

0x7117,	// (0x00009cbf) cell_ai5_widget_pane_g9

0x712b,	// (0x00009cd3) cell_ai5_widget_pane_g10_ParamLimits

0x712b,	// (0x00009cd3) cell_ai5_widget_pane_g10

0x74b3,	// (0x0000a05b) status_icon_pane_g1

0xe0e9,	// (0x00010c91) bg_popup_sub_pane_cp13

0x74bb,	// (0x0000a063) popup_keymap_window_t1

0xa2c1,	// (0x0000ce69) control_pane_g6_ParamLimits

0xa2c1,	// (0x0000ce69) control_pane_g6

0xa2ce,	// (0x0000ce76) control_pane_g7_ParamLimits

0xa2ce,	// (0x0000ce76) control_pane_g7

0xa2db,	// (0x0000ce83) control_pane_g8_ParamLimits

0xa2db,	// (0x0000ce83) control_pane_g8

0xd91e,	// (0x000104c6) dt_sta_controll_pane_ParamLimits

0xd92b,	// (0x000104d3) dt_sta_indi_pane_ParamLimits

0xd938,	// (0x000104e0) dt_sta_title_pane_ParamLimits

0xe4b4,	// (0x0001105c) aid_size_touch_scroll_bar_cale

0x8f82,	// (0x0000bb2a) popup_discreet_window_ParamLimits

0x8f82,	// (0x0000bb2a) popup_discreet_window

0x8fd4,	// (0x0000bb7c) popup_sk_window

0x1301,	// (0x00003ea9) bg_popup_sub_pane_cp28_ParamLimits

0x1301,	// (0x00003ea9) bg_popup_sub_pane_cp28

0x74c9,	// (0x0000a071) popup_discreet_window_g1_ParamLimits

0x74c9,	// (0x0000a071) popup_discreet_window_g1

0xd994,	// (0x0001053c) popup_discreet_window_t1_ParamLimits

0xd994,	// (0x0001053c) popup_discreet_window_t1

0x7507,	// (0x0000a0af) popup_discreet_window_t2_ParamLimits

0x7507,	// (0x0000a0af) popup_discreet_window_t2

0x0002,

0xfe72,	// (0x00012a1a) popup_discreet_window_t_ParamLimits

0xfe72,	// (0x00012a1a) popup_discreet_window_t

0x7559,	// (0x0000a101) popup_sk_window_g1

0x7563,	// (0x0000a10b) popup_sk_window_g2

0x0001,

0xfe79,	// (0x00012a21) popup_sk_window_g

0xd9b2,	// (0x0001055a) popup_sk_window_t1

0xd9c0,	// (0x00010568) popup_sk_window_t1_copy1

0x709d,	// (0x00009c45) cell_ai5_widget_pane_g2_ParamLimits

0x7238,	// (0x00009de0) cell_ai5_widget_pane_t9_ParamLimits

0x7238,	// (0x00009de0) cell_ai5_widget_pane_t9

0xe0e9,	// (0x00010c91) main_fep_fshwr2_pane

0xd9ce,	// (0x00010576) aid_fshwr2_btn_pane

0xd9e2,	// (0x0001058a) aid_fshwr2_syb_pane

0xd9f6,	// (0x0001059e) aid_fshwr2_txt_pane

0xda06,	// (0x000105ae) fshwr2_func_candi_pane

0xda26,	// (0x000105ce) fshwr2_hwr_syb_pane

0xda48,	// (0x000105f0) fshwr2_icf_pane

0xe0e9,	// (0x00010c91) fshwr2_icf_bg_pane

0x762b,	// (0x0000a1d3) fshwr2_icf_pane_t1_ParamLimits

0x762b,	// (0x0000a1d3) fshwr2_icf_pane_t1

0xec38,	// (0x000117e0) fshwr2_func_candi_pane_g1

0xda78,	// (0x00010620) fshwr2_func_candi_row_pane_ParamLimits

0xda78,	// (0x00010620) fshwr2_func_candi_row_pane

0xda9b,	// (0x00010643) cell_fshwr2_syb_pane_ParamLimits

0xda9b,	// (0x00010643) cell_fshwr2_syb_pane

0x6e1a,	// (0x000099c2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6e1a,	// (0x000099c2) fshwr2_hwr_syb_pane_g1

0xe0e9,	// (0x00010c91) bg_popup_call_pane_cp01

0xdac1,	// (0x00010669) fshwr2_func_candi_cell_pane_ParamLimits

0xdac1,	// (0x00010669) fshwr2_func_candi_cell_pane

0x10ea,	// (0x00003c92) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x10ea,	// (0x00003c92) fshwr2_func_candi_cell_bg_pane

0xdb0c,	// (0x000106b4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdb0c,	// (0x000106b4) fshwr2_func_candi_cell_pane_g1

0xdb43,	// (0x000106eb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdb43,	// (0x000106eb) fshwr2_func_candi_cell_pane_t1

0xe0e9,	// (0x00010c91) bg_button_pane_cp08

0xf45e,	// (0x00012006) cell_fshwr2_syb_bg_pane

0xdb5e,	// (0x00010706) cell_fshwr2_syb_bg_pane_g1

0xdb71,	// (0x00010719) cell_fshwr2_syb_bg_pane_t1

0xe5bb,	// (0x00011163) main_tmo_pane

0xb5fb,	// (0x0000e1a3) uni_indicator_pane_g1_ParamLimits

0xb611,	// (0x0000e1b9) uni_indicator_pane_g2_ParamLimits

0xb627,	// (0x0000e1cf) uni_indicator_pane_g3_ParamLimits

0x1f94,	// (0x00004b3c) uni_indicator_pane_g4_ParamLimits

0x1f94,	// (0x00004b3c) uni_indicator_pane_g4

0x1fa8,	// (0x00004b50) uni_indicator_pane_g5_ParamLimits

0x1fa8,	// (0x00004b50) uni_indicator_pane_g5

0x1fa8,	// (0x00004b50) uni_indicator_pane_g6_ParamLimits

0x1fa8,	// (0x00004b50) uni_indicator_pane_g6

0xf8dc,	// (0x00012484) uni_indicator_pane_g_ParamLimits

0xc7fb,	// (0x0000f3a3) popup_tmo_note_window_ParamLimits

0xc7fb,	// (0x0000f3a3) popup_tmo_note_window

0xe5bb,	// (0x00011163) fshwr2_bg_pane

0xdb34,	// (0x000106dc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdb34,	// (0x000106dc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7e,	// (0x00012a26) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7e,	// (0x00012a26) fshwr2_func_candi_cell_pane_g

0x3a94,	// (0x0000663c) bg_popup_window_pane_cp01

0x7736,	// (0x0000a2de) bg_popup_window_pane_g1_cp01

0x773f,	// (0x0000a2e7) bg_popup_window_pane_cp22_ParamLimits

0x773f,	// (0x0000a2e7) bg_popup_window_pane_cp22

0xdb87,	// (0x0001072f) listscroll_tmo_link_pane_ParamLimits

0xdb87,	// (0x0001072f) listscroll_tmo_link_pane

0x778d,	// (0x0000a335) popup_tmo_note_window_g1_ParamLimits

0x778d,	// (0x0000a335) popup_tmo_note_window_g1

0xdbc7,	// (0x0001076f) tmo_note_info_pane_ParamLimits

0xdbc7,	// (0x0001076f) tmo_note_info_pane

0xdbe1,	// (0x00010789) list_tmo_note_info_pane_g1_ParamLimits

0xdbe1,	// (0x00010789) list_tmo_note_info_pane_g1

0x77cb,	// (0x0000a373) list_tmo_note_info_pane_g2_ParamLimits

0x77cb,	// (0x0000a373) list_tmo_note_info_pane_g2

0x0001,

0xfe83,	// (0x00012a2b) list_tmo_note_info_pane_g_ParamLimits

0xfe83,	// (0x00012a2b) list_tmo_note_info_pane_g

0x77e7,	// (0x0000a38f) list_tmo_note_info_text_pane_ParamLimits

0x77e7,	// (0x0000a38f) list_tmo_note_info_text_pane

0x7868,	// (0x0000a410) list_tmo_link_pane

0x7875,	// (0x0000a41d) scroll_pane_cp20

0x7882,	// (0x0000a42a) list_single_tmo_link_pane_ParamLimits

0x7882,	// (0x0000a42a) list_single_tmo_link_pane

0x7892,	// (0x0000a43a) list_single_tmo_link_pane_t1

0x78a0,	// (0x0000a448) list_tmo_note_info_text_pane_t1_ParamLimits

0x78a0,	// (0x0000a448) list_tmo_note_info_text_pane_t1

0x9c2c,	// (0x0000c7d4) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9c2c,	// (0x0000c7d4) aid_size_touch_scroll_bar_cp01

0x9b2c,	// (0x0000c6d4) aid_size_touch_slider_marker

0x8fc4,	// (0x0000bb6c) popup_settings_window_ParamLimits

0x8fc4,	// (0x0000bb6c) popup_settings_window

0xf517,	// (0x000120bf) popup_candi_list_indi_window

0x052b,	// (0x000030d3) aid_touch_navi_pane_ParamLimits

0x58e2,	// (0x0000848a) rs_clock_indi_pane

0x58eb,	// (0x00008493) sctrl_sk_bottom_pane_ParamLimits

0x58fc,	// (0x000084a4) sctrl_sk_top_pane_ParamLimits

0xcfea,	// (0x0000fb92) popup_fep_tooltip_window

0x7013,	// (0x00009bbb) aid_size_cell_widget_grid_ParamLimits

0x7088,	// (0x00009c30) cell_ai5_widget_pane_g1_ParamLimits

0x7088,	// (0x00009c30) cell_ai5_widget_pane_g1

0x70eb,	// (0x00009c93) cell_ai5_widget_pane_g6_ParamLimits

0x70f7,	// (0x00009c9f) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdf7,	// (0x0001299f) cell_ai5_widget_pane_g_ParamLimits

0xfdf7,	// (0x0001299f) cell_ai5_widget_pane_g

0x7267,	// (0x00009e0f) cell_ai5_widget_pane_t10_ParamLimits

0x7267,	// (0x00009e0f) cell_ai5_widget_pane_t10

0x72aa,	// (0x00009e52) grid_ai5_widget_pane_ParamLimits

0x7342,	// (0x00009eea) cell_contacts_ai5_widget_pane_ParamLimits

0x7342,	// (0x00009eea) cell_contacts_ai5_widget_pane

0x751c,	// (0x0000a0c4) popup_discreet_window_t3_ParamLimits

0x751c,	// (0x0000a0c4) popup_discreet_window_t3

0xda64,	// (0x0001060c) popup_fshwr2_char_preview_window_ParamLimits

0xda64,	// (0x0001060c) popup_fshwr2_char_preview_window

0xdbf8,	// (0x000107a0) tmo_note_info_pane_t1

0xdc0d,	// (0x000107b5) tmo_note_info_pane_t2

0xdc24,	// (0x000107cc) tmo_note_info_pane_t3

0x7844,	// (0x0000a3ec) tmo_note_info_pane_t4

0x7856,	// (0x0000a3fe) tmo_note_info_pane_t5

0x0004,

0xfe88,	// (0x00012a30) tmo_note_info_pane_t

0x7868,	// (0x0000a410) list_tmo_link_pane_ParamLimits

0x7875,	// (0x0000a41d) scroll_pane_cp20_ParamLimits

0xe0e9,	// (0x00010c91) bg_popup_fep_char_preview_window_cp01

0xdc39,	// (0x000107e1) popup_fshwr2_char_preview_window_t1

0x78c7,	// (0x0000a46f) popup_candi_list_indi_window_g1

0x78d0,	// (0x0000a478) bg_cell_contacts_ai5_widget_pane

0x78dc,	// (0x0000a484) cell_contacts_ai5_widget_pane_g1

0x45ba,	// (0x00007162) cell_contacts_ai5_widget_pane_g2

0x78f1,	// (0x0000a499) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe93,	// (0x00012a3b) cell_contacts_ai5_widget_pane_g

0x78fd,	// (0x0000a4a5) cell_contacts_ai5_widget_pane_t1

0xe5bb,	// (0x00011163) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7974,	// (0x0000a51c) settings_container_pane

0xf27f,	// (0x00011e27) listscroll_set_pane_copy1

0x2ddf,	// (0x00005987) scroll_pane_cp121_copy1

0x10a6,	// (0x00003c4e) set_content_pane_copy1

0xdc47,	// (0x000107ef) aid_height_set_list_copy1_ParamLimits

0xdc47,	// (0x000107ef) aid_height_set_list_copy1

0x227a,	// (0x00004e22) aid_size_parent_copy1_ParamLimits

0x227a,	// (0x00004e22) aid_size_parent_copy1

0xdc53,	// (0x000107fb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdc53,	// (0x000107fb) button_value_adjust_pane_cp6_copy1

0xf45e,	// (0x00012006) list_highlight_pane_cp2_copy1_ParamLimits

0xf45e,	// (0x00012006) list_highlight_pane_cp2_copy1

0xdc67,	// (0x0001080f) list_set_pane_copy1_ParamLimits

0xdc67,	// (0x0001080f) list_set_pane_copy1

0x790f,	// (0x0000a4b7) main_pane_set_t1_copy1_ParamLimits

0x790f,	// (0x0000a4b7) main_pane_set_t1_copy1

0x7949,	// (0x0000a4f1) main_pane_set_t2_copy1_ParamLimits

0x7949,	// (0x0000a4f1) main_pane_set_t2_copy1

0xdd14,	// (0x000108bc) main_pane_set_t3_copy1

0xdd22,	// (0x000108ca) main_pane_set_t4_copy1

0x7968,	// (0x0000a510) set_content_pane_g1_copy1_ParamLimits

0x7968,	// (0x0000a510) set_content_pane_g1_copy1

0xdd30,	// (0x000108d8) setting_code_pane_copy1

0x7a71,	// (0x0000a619) setting_slider_graphic_pane_copy1

0x7a71,	// (0x0000a619) setting_slider_pane_copy1

0x7a79,	// (0x0000a621) setting_text_pane_copy1

0x7a79,	// (0x0000a621) setting_volume_pane_copy1

0xdd30,	// (0x000108d8) settings_code_pane_cp2_copy1

0xdd38,	// (0x000108e0) settings_code_pane_cp_copy1_ParamLimits

0xdd38,	// (0x000108e0) settings_code_pane_cp_copy1

0xdd4c,	// (0x000108f4) volume_set_pane_copy1

0xdd54,	// (0x000108fc) volume_set_pane_g10_copy1

0xdd5c,	// (0x00010904) volume_set_pane_g1_copy1

0xdd64,	// (0x0001090c) volume_set_pane_g2_copy1

0xdd6c,	// (0x00010914) volume_set_pane_g3_copy1

0xdd74,	// (0x0001091c) volume_set_pane_g4_copy1

0xdd7c,	// (0x00010924) volume_set_pane_g5_copy1

0xdd84,	// (0x0001092c) volume_set_pane_g6_copy1

0xdd8c,	// (0x00010934) volume_set_pane_g7_copy1

0xdd94,	// (0x0001093c) volume_set_pane_g8_copy1

0xdd9c,	// (0x00010944) volume_set_pane_g9_copy1

0xe199,	// (0x00010d41) bg_set_opt_pane_cp_copy1_ParamLimits

0xe199,	// (0x00010d41) bg_set_opt_pane_cp_copy1

0xdda4,	// (0x0001094c) setting_slider_pane_t1_copy1_ParamLimits

0xdda4,	// (0x0001094c) setting_slider_pane_t1_copy1

0xddc3,	// (0x0001096b) setting_slider_pane_t2_copy1_ParamLimits

0xddc3,	// (0x0001096b) setting_slider_pane_t2_copy1

0xdddd,	// (0x00010985) setting_slider_pane_t3_copy1_ParamLimits

0xdddd,	// (0x00010985) setting_slider_pane_t3_copy1

0xddf5,	// (0x0001099d) slider_set_pane_copy1_ParamLimits

0xddf5,	// (0x0001099d) slider_set_pane_copy1

0xe681,	// (0x00011229) set_opt_bg_pane_g1_copy2

0xe689,	// (0x00011231) set_opt_bg_pane_g2_copy2

0x7b54,	// (0x0000a6fc) set_opt_bg_pane_g3_copy2

0xe699,	// (0x00011241) set_opt_bg_pane_g4_copy2

0xe6a1,	// (0x00011249) set_opt_bg_pane_g5_copy2

0xe6a9,	// (0x00011251) set_opt_bg_pane_g6_copy2

0xde0b,	// (0x000109b3) set_opt_bg_pane_g7_copy2

0x7b66,	// (0x0000a70e) set_opt_bg_pane_g8_copy2

0x7b70,	// (0x0000a718) set_opt_bg_pane_g9_copy2

0xde13,	// (0x000109bb) aid_size_touch_slider_mark_copy1_ParamLimits

0xde13,	// (0x000109bb) aid_size_touch_slider_mark_copy1

0xde27,	// (0x000109cf) slider_set_pane_g1_copy1

0x7b97,	// (0x0000a73f) slider_set_pane_g2_copy1

0xb760,	// (0x0000e308) slider_set_pane_g3_copy1_ParamLimits

0xb760,	// (0x0000e308) slider_set_pane_g3_copy1

0xb774,	// (0x0000e31c) slider_set_pane_g4_copy1_ParamLimits

0xb774,	// (0x0000e31c) slider_set_pane_g4_copy1

0xb78c,	// (0x0000e334) slider_set_pane_g5_copy1_ParamLimits

0xb78c,	// (0x0000e334) slider_set_pane_g5_copy1

0xb760,	// (0x0000e308) slider_set_pane_g6_copy1_ParamLimits

0xb760,	// (0x0000e308) slider_set_pane_g6_copy1

0xde30,	// (0x000109d8) slider_set_pane_g7_copy1_ParamLimits

0xde30,	// (0x000109d8) slider_set_pane_g7_copy1

0xe11d,	// (0x00010cc5) bg_set_opt_pane_cp2_copy1

0xde46,	// (0x000109ee) setting_slider_graphic_pane_g1_copy1

0xde4f,	// (0x000109f7) setting_slider_graphic_pane_t1_copy1

0xde5f,	// (0x00010a07) setting_slider_graphic_pane_t2_copy1

0xde6f,	// (0x00010a17) slider_set_pane_cp_copy1

0x7bee,	// (0x0000a796) input_focus_pane_cp1_copy1

0x7bf7,	// (0x0000a79f) list_set_text_pane_copy1

0x7bff,	// (0x0000a7a7) setting_text_pane_g1_copy1

0x7c08,	// (0x0000a7b0) set_text_pane_t1_copy1

0x7bee,	// (0x0000a796) input_focus_pane_cp2_copy1

0x7bff,	// (0x0000a7a7) setting_code_pane_g1_copy1

0x7c23,	// (0x0000a7cb) setting_code_pane_t1_copy1

0x7c31,	// (0x0000a7d9) list_set_graphic_pane_copy1

0xe11d,	// (0x00010cc5) bg_set_opt_pane_cp4_copy1

0xeffc,	// (0x00011ba4) list_set_graphic_pane_g1_copy1_ParamLimits

0xeffc,	// (0x00011ba4) list_set_graphic_pane_g1_copy1

0x7c45,	// (0x0000a7ed) list_set_graphic_pane_g2_copy1

0xf014,	// (0x00011bbc) list_set_graphic_pane_t1_copy1_ParamLimits

0xf014,	// (0x00011bbc) list_set_graphic_pane_t1_copy1

0x3a94,	// (0x0000663c) rs_clock_indi_pane_g1

0x7c4d,	// (0x0000a7f5) rs_clock_indi_pane_t1

0x7c5b,	// (0x0000a803) rs_indi_pane

0x7c63,	// (0x0000a80b) rs_indi_pane_g1

0x7c6c,	// (0x0000a814) rs_indi_pane_g2

0x78c7,	// (0x0000a46f) rs_indi_pane_g3

0x0002,

0xfe9a,	// (0x00012a42) rs_indi_pane_g

0xf27f,	// (0x00011e27) bg_popup_preview_window_pane_cp03

0x7c75,	// (0x0000a81d) popup_fep_tooltip_window_t1

0xc2fa,	// (0x0000eea2) popup_note2_window_g2_ParamLimits

0xc2fa,	// (0x0000eea2) popup_note2_window_g2

0x0001,

0xfc2e,	// (0x000127d6) popup_note2_window_g_ParamLimits

0xfc2e,	// (0x000127d6) popup_note2_window_g

0x52ae,	// (0x00007e56) bg_popup_sub_pane_cp11_ParamLimits

0x52bb,	// (0x00007e63) cell_ai3_links_pane_g1_ParamLimits

0x52d2,	// (0x00007e7a) cell_ai3_links_pane_t1

0x7c08,	// (0x0000a7b0) set_text_pane_t1_copy1_ParamLimits

0xf1c1,	// (0x00011d69) cell_graphic_popup_pane_cp2_ParamLimits

0xf1c1,	// (0x00011d69) cell_graphic_popup_pane_cp2

0xde7f,	// (0x00010a27) cell_graphic_popup_pane_g1_cp2

0xe437,	// (0x00010fdf) cell_graphic_popup_pane_g2_cp2

0x7c8b,	// (0x0000a833) cell_graphic_popup_pane_g3_cp2

0xde87,	// (0x00010a2f) cell_graphic_popup_pane_t2_cp2

0xe448,	// (0x00010ff0) grid_highlight_pane_cp3_cp2

0xea96,	// (0x0001163e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe5bb,	// (0x00011163) main_tmo_pane_ParamLimits

0xc7ef,	// (0x0000f397) popup_tmo_big_image_note_window

0x7077,	// (0x00009c1f) cell_ai5_widget_list_pane

0x707f,	// (0x00009c27) cell_ai5_widget_lrg_icon_pane

0xdbf8,	// (0x000107a0) tmo_note_info_pane_t1_ParamLimits

0xdc0d,	// (0x000107b5) tmo_note_info_pane_t2_ParamLimits

0xdc24,	// (0x000107cc) tmo_note_info_pane_t3_ParamLimits

0x7844,	// (0x0000a3ec) tmo_note_info_pane_t4_ParamLimits

0x7856,	// (0x0000a3fe) tmo_note_info_pane_t5_ParamLimits

0xfe88,	// (0x00012a30) tmo_note_info_pane_t_ParamLimits

0x7974,	// (0x0000a51c) settings_container_pane_ParamLimits

0xde77,	// (0x00010a1f) indicator_popup_pane_cp5

0xde77,	// (0x00010a1f) indicator_popup_pane_cp6

0x7c31,	// (0x0000a7d9) list_set_graphic_pane_copy1_ParamLimits

0xe0e9,	// (0x00010c91) bg_popup_window_pane_cp23

0x7ca1,	// (0x0000a849) popup_tmo_big_image_note_window_g1

0x7caa,	// (0x0000a852) popup_tmo_big_image_note_window_t1

0x7cba,	// (0x0000a862) popup_tmo_big_image_note_window_t2

0x7cca,	// (0x0000a872) popup_tmo_big_image_note_window_t3

0x0002,

0xfea1,	// (0x00012a49) popup_tmo_big_image_note_window_t

0x3a94,	// (0x0000663c) cell_ai5_widget_lrg_icon_pane_g1

0x7cda,	// (0x0000a882) cell_ai5_widget_lrg_icon_pane_t1

0x7ce8,	// (0x0000a890) cell_ai5_widget_list_row_pane_ParamLimits

0x7ce8,	// (0x0000a890) cell_ai5_widget_list_row_pane

0x7cff,	// (0x0000a8a7) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7cff,	// (0x0000a8a7) cell_ai5_widget_list_row_pane_g1

0xde95,	// (0x00010a3d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xde95,	// (0x00010a3d) cell_ai5_widget_list_row_pane_t1

0x7d37,	// (0x0000a8df) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7d37,	// (0x0000a8df) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea8,	// (0x00012a50) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea8,	// (0x00012a50) cell_ai5_widget_list_row_pane_t

0xe0e9,	// (0x00010c91) main_fep_vtchi_ss_pane

0x7d87,	// (0x0000a92f) popup_fep_char_pre_window

0x7d8f,	// (0x0000a937) popup_fep_ituss_window

0xdef0,	// (0x00010a98) popup_fep_vkbss_window

0xf45e,	// (0x00012006) grid_vkbss_keypad_pane_ParamLimits

0xf45e,	// (0x00012006) grid_vkbss_keypad_pane

0x7dfb,	// (0x0000a9a3) ituss_keypad_pane

0x7e15,	// (0x0000a9bd) aid_vkbss_key_offset_ParamLimits

0x7e15,	// (0x0000a9bd) aid_vkbss_key_offset

0xdefd,	// (0x00010aa5) cell_vkbss_key_pane_ParamLimits

0xdefd,	// (0x00010aa5) cell_vkbss_key_pane

0x7e6c,	// (0x0000aa14) bg_cell_vkbss_key_g1_ParamLimits

0x7e6c,	// (0x0000aa14) bg_cell_vkbss_key_g1

0xdf67,	// (0x00010b0f) cell_vkbss_key_3p_pane_ParamLimits

0xdf67,	// (0x00010b0f) cell_vkbss_key_3p_pane

0xdf9d,	// (0x00010b45) cell_vkbss_key_g1_ParamLimits

0xdf9d,	// (0x00010b45) cell_vkbss_key_g1

0xdfd3,	// (0x00010b7b) cell_vkbss_key_t1_ParamLimits

0xdfd3,	// (0x00010b7b) cell_vkbss_key_t1

0x7f40,	// (0x0000aae8) cell_ituss_key_pane_ParamLimits

0x7f40,	// (0x0000aae8) cell_ituss_key_pane

0x7f51,	// (0x0000aaf9) bg_cell_ituss_key_g1_ParamLimits

0x7f51,	// (0x0000aaf9) bg_cell_ituss_key_g1

0x7f5d,	// (0x0000ab05) cell_ituss_key_pane_g1_ParamLimits

0x7f5d,	// (0x0000ab05) cell_ituss_key_pane_g1

0x7f71,	// (0x0000ab19) cell_ituss_key_pane_g2_ParamLimits

0x7f71,	// (0x0000ab19) cell_ituss_key_pane_g2

0x0005,

0xfeaf,	// (0x00012a57) cell_ituss_key_pane_g_ParamLimits

0xfeaf,	// (0x00012a57) cell_ituss_key_pane_g

0x8007,	// (0x0000abaf) cell_ituss_key_t1_ParamLimits

0x8007,	// (0x0000abaf) cell_ituss_key_t1

0x8041,	// (0x0000abe9) cell_ituss_key_t2_ParamLimits

0x8041,	// (0x0000abe9) cell_ituss_key_t2

0x8073,	// (0x0000ac1b) cell_ituss_key_t3_ParamLimits

0x8073,	// (0x0000ac1b) cell_ituss_key_t3

0x80a4,	// (0x0000ac4c) cell_ituss_key_t4_ParamLimits

0x80a4,	// (0x0000ac4c) cell_ituss_key_t4

0x0004,

0xfebc,	// (0x00012a64) cell_ituss_key_t_ParamLimits

0xfebc,	// (0x00012a64) cell_ituss_key_t

0xe02f,	// (0x00010bd7) cell_vkbss_key_3p_pane_g1

0xe037,	// (0x00010bdf) cell_vkbss_key_3p_pane_g2

0xe03f,	// (0x00010be7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec7,	// (0x00012a6f) cell_vkbss_key_3p_pane_g

0xf27f,	// (0x00011e27) bg_popup_fep_char_preview_window_cp02

0x80ff,	// (0x0000aca7) popup_fep_char_pre_window_t1

0xd8ce,	// (0x00010476) main_ai5_sk_pane

0x78d0,	// (0x0000a478) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x78dc,	// (0x0000a484) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x45ba,	// (0x00007162) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x78f1,	// (0x0000a499) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe93,	// (0x00012a3b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x78fd,	// (0x0000a4a5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe5bb,	// (0x00011163) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe047,	// (0x00010bef) main_ai5_sk_pane_g1

0xb24c,	// (0x0000ddf4) popup_query_code_window_g1

0xdee1,	// (0x00010a89) popup_fep_vkb_icf_pane

0x7dd2,	// (0x0000a97a) popup_fep_vtchi_icf_pane

0x8116,	// (0x0000acbe) bg_icf_pane

0x8116,	// (0x0000acbe) list_vkb_icf_pane

0x8122,	// (0x0000acca) bg_icf_pane_cp01

0x8135,	// (0x0000acdd) vtchi_icf_list_pane

0xe09c,	// (0x00010c44) list_vkb_icf_pane_t1_ParamLimits

0xe09c,	// (0x00010c44) list_vkb_icf_pane_t1

0x81ba,	// (0x0000ad62) vtchi_icf_list_pane_t1_ParamLimits

0x81ba,	// (0x0000ad62) vtchi_icf_list_pane_t1

0x7d8f,	// (0x0000a937) popup_fep_ituss_window_ParamLimits

0x7dd2,	// (0x0000a97a) popup_fep_vtchi_icf_pane_ParamLimits

0x7dfb,	// (0x0000a9a3) ituss_keypad_pane_ParamLimits

0x7e0b,	// (0x0000a9b3) ituss_sks_pane

0x8116,	// (0x0000acbe) bg_icf_pane_ParamLimits

0xdec6,	// (0x00010a6e) icf_edit_indi_pane_ParamLimits

0xdec6,	// (0x00010a6e) icf_edit_indi_pane

0x8116,	// (0x0000acbe) list_vkb_icf_pane_ParamLimits

0x8122,	// (0x0000acca) bg_icf_pane_cp01_ParamLimits

0x7d7a,	// (0x0000a922) icf_edit_indi_pane_cp01_ParamLimits

0x7d7a,	// (0x0000a922) icf_edit_indi_pane_cp01

0x8135,	// (0x0000acdd) vtchi_query_pane

0x6e1a,	// (0x000099c2) icf_edit_indi_pane_g1_ParamLimits

0x6e1a,	// (0x000099c2) icf_edit_indi_pane_g1

0xe0b4,	// (0x00010c5c) icf_edit_indi_pane_g2_ParamLimits

0xe0b4,	// (0x00010c5c) icf_edit_indi_pane_g2

0x0001,

0xfef2,	// (0x00012a9a) icf_edit_indi_pane_g_ParamLimits

0xfef2,	// (0x00012a9a) icf_edit_indi_pane_g

0xe0c8,	// (0x00010c70) icf_edit_indi_pane_t1

0x81de,	// (0x0000ad86) bg_input_focus_pane_cp042

0xe4ab,	// (0x00011053) vtchi_button_pane

0x81e7,	// (0x0000ad8f) vtchi_query_pane_t1

0x81f5,	// (0x0000ad9d) vtchi_query_pane_t2

0x8203,	// (0x0000adab) vtchi_query_pane_t3

0x0002,

0xfee1,	// (0x00012a89) vtchi_query_pane_t

0xe0e9,	// (0x00010c91) bg_button_pane_cp13

0x8211,	// (0x0000adb9) vtchi_button_pane_g1

0x8219,	// (0x0000adc1) ituss_sks_pane_g1

0x8224,	// (0x0000adcc) ituss_sks_pane_g2

0x0001,

0xfee8,	// (0x00012a90) ituss_sks_pane_g

0x822c,	// (0x0000add4) ituss_sks_pane_t1

0x823a,	// (0x0000ade2) ituss_sks_pane_t2

0x0001,

0xfeed,	// (0x00012a95) ituss_sks_pane_t

0x3473,	// (0x0000601b) indicator_nsta_pane_cp_g1

0x347c,	// (0x00006024) indicator_nsta_pane_cp_g2

0x3484,	// (0x0000602c) indicator_nsta_pane_cp_g3

0x348c,	// (0x00006034) indicator_nsta_pane_cp_g4

0x347c,	// (0x00006024) indicator_nsta_pane_cp_g5

0x3484,	// (0x0000602c) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x00012620) indicator_nsta_pane_cp_g

0xd62f,	// (0x000101d7) cell_graphic2_pane_t2_ParamLimits

0xd62f,	// (0x000101d7) cell_graphic2_pane_t2

0x0001,

0xfd7e,	// (0x00012926) cell_graphic2_pane_t_ParamLimits

0xfd7e,	// (0x00012926) cell_graphic2_pane_t

0xd666,	// (0x0001020e) cell_graphic2_control_pane_t1

0x9f04,	// (0x0000caac) signal_pane_g3_ParamLimits

0x9f04,	// (0x0000caac) signal_pane_g3

0x9f18,	// (0x0000cac0) signal_pane_g4_ParamLimits

0x9f18,	// (0x0000cac0) signal_pane_g4

0x7d49,	// (0x0000a8f1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7d49,	// (0x0000a8f1) cell_ai5_widget_list_row_pane_t3

0x7ff5,	// (0x0000ab9d) cell_ituss_key_pane_t1_ParamLimits

0x7ff5,	// (0x0000ab9d) cell_ituss_key_pane_t1

0x0d34,	// (0x000038dc) form_field_data_wide_pane_vc_t2_ParamLimits

0x0d34,	// (0x000038dc) form_field_data_wide_pane_vc_t2

0x0d48,	// (0x000038f0) form_field_data_wide_pane_vc_t3_ParamLimits

0x0d48,	// (0x000038f0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001236c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001236c) form_field_data_wide_pane_vc_t

0x311d,	// (0x00005cc5) form_field_slider_wide_pane_vc_t3_ParamLimits

0x311d,	// (0x00005cc5) form_field_slider_wide_pane_vc_t3

0x31fb,	// (0x00005da3) form_field_popup_wide_pane_vc_t2_ParamLimits

0x31fb,	// (0x00005da3) form_field_popup_wide_pane_vc_t2

0x3212,	// (0x00005dba) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3212,	// (0x00005dba) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x0001260f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x0001260f) form_field_popup_wide_pane_vc_t

0xd9ce,	// (0x00010576) aid_fshwr2_btn_pane_ParamLimits

0xd9e2,	// (0x0001058a) aid_fshwr2_syb_pane_ParamLimits

0xd9f6,	// (0x0001059e) aid_fshwr2_txt_pane_ParamLimits

0xe5bb,	// (0x00011163) fshwr2_bg_pane_ParamLimits

0xda06,	// (0x000105ae) fshwr2_func_candi_pane_ParamLimits

0xda26,	// (0x000105ce) fshwr2_hwr_syb_pane_ParamLimits

0xda48,	// (0x000105f0) fshwr2_icf_pane_ParamLimits

0x308e,	// (0x00005c36) list_double_graphic_pane_vc_g4_ParamLimits

0x308e,	// (0x00005c36) list_double_graphic_pane_vc_g4

0x7f91,	// (0x0000ab39) cell_ituss_key_pane_g3_ParamLimits

0x7f91,	// (0x0000ab39) cell_ituss_key_pane_g3

0x80d5,	// (0x0000ac7d) cell_ituss_key_t5_ParamLimits

0x80d5,	// (0x0000ac7d) cell_ituss_key_t5

0xdef0,	// (0x00010a98) popup_fep_vkbss_window_ParamLimits

0x700a,	// (0x00009bb2) aid_cell_ai5_quarter

0xe0c8,	// (0x00010c70) icf_edit_indi_pane_t1_ParamLimits

0x93ed,	// (0x0000bf95) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x93ed,	// (0x0000bf95) aid_tch_indicator_popup_pane_cp2

0x9400,	// (0x0000bfa8) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9400,	// (0x0000bfa8) aid_tch_query_popup_data_pane_cp2

0x10ea,	// (0x00003c92) aid_tch_query_popup_pane_ParamLimits

0x10ea,	// (0x00003c92) aid_tch_query_popup_pane

0x10ea,	// (0x00003c92) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x10ea,	// (0x00003c92) aid_tch_query_popup_data_pane_cp1

0xf45e,	// (0x00012006) cell_fshwr2_syb_bg_pane_ParamLimits

0xdb5e,	// (0x00010706) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xdb71,	// (0x00010719) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xdee1,	// (0x00010a89) popup_fep_vkb_icf_pane_ParamLimits

0xd736,	// (0x000102de) bg_popup_fep_char_preview_window_g10

0x713f,	// (0x00009ce7) cell_ai5_widget_pane_g11_ParamLimits

0x713f,	// (0x00009ce7) cell_ai5_widget_pane_g11

0x714b,	// (0x00009cf3) cell_ai5_widget_pane_g12_ParamLimits

0x714b,	// (0x00009cf3) cell_ai5_widget_pane_g12

0x7157,	// (0x00009cff) cell_ai5_widget_pane_g13_ParamLimits

0x7157,	// (0x00009cff) cell_ai5_widget_pane_g13

0x7286,	// (0x00009e2e) cell_ai5_widget_pane_t11_ParamLimits

0x7286,	// (0x00009e2e) cell_ai5_widget_pane_t11

0x7298,	// (0x00009e40) cell_ai5_widget_pane_t12_ParamLimits

0x7298,	// (0x00009e40) cell_ai5_widget_pane_t12

0x7f9d,	// (0x0000ab45) cell_ituss_key_pane_g4_ParamLimits

0x7f9d,	// (0x0000ab45) cell_ituss_key_pane_g4

0x7fb9,	// (0x0000ab61) cell_ituss_key_pane_g5_ParamLimits

0x7fb9,	// (0x0000ab61) cell_ituss_key_pane_g5

0x7fd5,	// (0x0000ab7d) cell_ituss_key_pane_g6_ParamLimits

0x7fd5,	// (0x0000ab7d) cell_ituss_key_pane_g6

0x0a86,	// (0x0000362e) bg_icf_pane_g1

0xe050,	// (0x00010bf8) bg_icf_pane_g2

0xe05a,	// (0x00010c02) bg_icf_pane_g3

0xe062,	// (0x00010c0a) bg_icf_pane_g4

0xe06c,	// (0x00010c14) bg_icf_pane_g5

0xe076,	// (0x00010c1e) bg_icf_pane_g6

0xe080,	// (0x00010c28) bg_icf_pane_g7

0xe088,	// (0x00010c30) bg_icf_pane_g8

0xe092,	// (0x00010c3a) bg_icf_pane_g9

0x0008,

0xfece,	// (0x00012a76) bg_icf_pane_g

0x7de8,	// (0x0000a990) popup_hyb_candi_window_ParamLimits

0x7de8,	// (0x0000a990) popup_hyb_candi_window

0x0c1e,	// (0x000037c6) bg_popup_sub_pane_cp01_ParamLimits

0x0c1e,	// (0x000037c6) bg_popup_sub_pane_cp01

0x8275,	// (0x0000ae1d) entry_hyb_candi_pane_ParamLimits

0x8275,	// (0x0000ae1d) entry_hyb_candi_pane

0x8284,	// (0x0000ae2c) grid_hyb_candi_pane_ParamLimits

0x8284,	// (0x0000ae2c) grid_hyb_candi_pane

0x8299,	// (0x0000ae41) grid_hyb_phrase_pane_ParamLimits

0x8299,	// (0x0000ae41) grid_hyb_phrase_pane

0x82a8,	// (0x0000ae50) cell_hyb_candi_pane_ParamLimits

0x82a8,	// (0x0000ae50) cell_hyb_candi_pane

0x82cb,	// (0x0000ae73) cell_hyb_candi_scroll_pane

0xec38,	// (0x000117e0) cell_hyb_candi_pane_g1

0x82d4,	// (0x0000ae7c) cell_hyb_candi_pane_t1

0x82e2,	// (0x0000ae8a) cell_hyb_phrase_pane

0xec38,	// (0x000117e0) cell_hyb_phrase_pane_g1

0x82eb,	// (0x0000ae93) cell_hyb_phrase_pane_t1

0x82f9,	// (0x0000aea1) entry_hyb_candi_pane_t1

0xf27f,	// (0x00011e27) input_focus_pane_cp06

0x8307,	// (0x0000aeaf) cell_hyb_candi_scroll_pane_g1

0x830f,	// (0x0000aeb7) cell_hyb_candi_scroll_pane_g1_aid

0x8317,	// (0x0000aebf) cell_hyb_candi_scroll_pane_g2

0x831f,	// (0x0000aec7) cell_hyb_candi_scroll_pane_g2_aid

0x8327,	// (0x0000aecf) cell_hyb_candi_scroll_pane_g3

0x832f,	// (0x0000aed7) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

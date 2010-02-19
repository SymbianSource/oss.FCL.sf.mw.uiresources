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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000004c4 };

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
0xae63,	// (0x0000b327) Screen

0xae6f,	// (0x0000b333) application_window_ParamLimits

0xae6f,	// (0x0000b333) application_window

0xf316,	// (0x0000f7da) screen_g1

0xaea7,	// (0x0000b36b) area_bottom_pane_ParamLimits

0xaea7,	// (0x0000b36b) area_bottom_pane

0xf340,	// (0x0000f804) area_top_pane_ParamLimits

0xf340,	// (0x0000f804) area_top_pane

0xf3d4,	// (0x0000f898) main_pane_ParamLimits

0xf3d4,	// (0x0000f898) main_pane

0xf48f,	// (0x0000f953) misc_graphics

0xc6da,	// (0x0000cb9e) battery_pane_ParamLimits

0xc6da,	// (0x0000cb9e) battery_pane

0x3c86,	// (0x0000414a) bg_status_flat_pane_g8

0x3c8e,	// (0x00004152) bg_status_flat_pane_g9

0x2e6f,	// (0x00003333) context_pane_ParamLimits

0x2e6f,	// (0x00003333) context_pane

0xc851,	// (0x0000cd15) navi_pane_ParamLimits

0xc851,	// (0x0000cd15) navi_pane

0xc8db,	// (0x0000cd9f) signal_pane_ParamLimits

0xc8db,	// (0x0000cd9f) signal_pane

0x0008,

0xf879,	// (0x0000fd3d) bg_status_flat_pane_g

0xc96b,	// (0x0000ce2f) status_pane_g1_ParamLimits

0xc96b,	// (0x0000ce2f) status_pane_g1

0xc981,	// (0x0000ce45) status_pane_g2_ParamLimits

0xc981,	// (0x0000ce45) status_pane_g2

0x30b0,	// (0x00003574) status_pane_g3_ParamLimits

0x30b0,	// (0x00003574) status_pane_g3

0x0004,

0xf7b3,	// (0x0000fc77) status_pane_g_ParamLimits

0xf7b3,	// (0x0000fc77) status_pane_g

0xc98d,	// (0x0000ce51) title_pane_ParamLimits

0xc98d,	// (0x0000ce51) title_pane

0xc9f0,	// (0x0000ceb4) uni_indicator_pane_ParamLimits

0xc9f0,	// (0x0000ceb4) uni_indicator_pane

0x2694,	// (0x00002b58) bg_list_pane_ParamLimits

0x2694,	// (0x00002b58) bg_list_pane

0xbf12,	// (0x0000c3d6) find_pane

0xbf1a,	// (0x0000c3de) listscroll_app_pane_ParamLimits

0xbf1a,	// (0x0000c3de) listscroll_app_pane

0x26c8,	// (0x00002b8c) listscroll_form_pane

0xbf26,	// (0x0000c3ea) listscroll_gen_pane_ParamLimits

0xbf26,	// (0x0000c3ea) listscroll_gen_pane

0x26c8,	// (0x00002b8c) listscroll_set_pane

0x4aaf,	// (0x00004f73) main_idle_act_pane

0x2175,	// (0x00002639) main_idle_trad_pane

0x2175,	// (0x00002639) main_list_empty_pane

0x26f6,	// (0x00002bba) main_midp_pane

0x2702,	// (0x00002bc6) main_pane_g1_ParamLimits

0x2702,	// (0x00002bc6) main_pane_g1

0xbf3a,	// (0x0000c3fe) popup_ai_message_window_ParamLimits

0xbf3a,	// (0x0000c3fe) popup_ai_message_window

0xbfda,	// (0x0000c49e) popup_fep_china_uni_window_ParamLimits

0xbfda,	// (0x0000c49e) popup_fep_china_uni_window

0x2828,	// (0x00002cec) popup_fep_japan_candidate_window_ParamLimits

0x2828,	// (0x00002cec) popup_fep_japan_candidate_window

0x2852,	// (0x00002d16) popup_fep_japan_predictive_window_ParamLimits

0x2852,	// (0x00002d16) popup_fep_japan_predictive_window

0xc03a,	// (0x0000c4fe) popup_find_window

0xc057,	// (0x0000c51b) popup_grid_graphic_window_ParamLimits

0xc057,	// (0x0000c51b) popup_grid_graphic_window

0x28c3,	// (0x00002d87) popup_large_graphic_colour_window

0xc0fb,	// (0x0000c5bf) popup_menu_window_ParamLimits

0xc0fb,	// (0x0000c5bf) popup_menu_window

0xc2e7,	// (0x0000c7ab) popup_note_image_window

0xc2a7,	// (0x0000c76b) popup_note_wait_window_ParamLimits

0xc2a7,	// (0x0000c76b) popup_note_wait_window

0xc2ff,	// (0x0000c7c3) popup_note_window_ParamLimits

0xc2ff,	// (0x0000c7c3) popup_note_window

0xc3ad,	// (0x0000c871) popup_query_code_window_ParamLimits

0xc3ad,	// (0x0000c871) popup_query_code_window

0x2b2f,	// (0x00002ff3) popup_query_data_code_window_ParamLimits

0x2b2f,	// (0x00002ff3) popup_query_data_code_window

0xc3ed,	// (0x0000c8b1) popup_query_data_window_ParamLimits

0xc3ed,	// (0x0000c8b1) popup_query_data_window

0xc481,	// (0x0000c945) popup_query_sat_info_window_ParamLimits

0xc481,	// (0x0000c945) popup_query_sat_info_window

0xc52c,	// (0x0000c9f0) popup_snote_single_graphic_window_ParamLimits

0xc52c,	// (0x0000c9f0) popup_snote_single_graphic_window

0xc52c,	// (0x0000c9f0) popup_snote_single_text_window_ParamLimits

0xc52c,	// (0x0000c9f0) popup_snote_single_text_window

0x2bca,	// (0x0000308e) popup_sub_window_general

0x2d10,	// (0x000031d4) popup_window_general_ParamLimits

0x2d10,	// (0x000031d4) popup_window_general

0x2d29,	// (0x000031ed) power_save_pane

0xbd80,	// (0x0000c244) control_pane_g1_ParamLimits

0xbd80,	// (0x0000c244) control_pane_g1

0xbda9,	// (0x0000c26d) control_pane_g2_ParamLimits

0xbda9,	// (0x0000c26d) control_pane_g2

0x2539,	// (0x000029fd) control_pane_g3_ParamLimits

0x2539,	// (0x000029fd) control_pane_g3

0x0007,

0xf79b,	// (0x0000fc5f) control_pane_g_ParamLimits

0xf79b,	// (0x0000fc5f) control_pane_g

0xbe0b,	// (0x0000c2cf) control_pane_t1_ParamLimits

0xbe0b,	// (0x0000c2cf) control_pane_t1

0xbe69,	// (0x0000c32d) control_pane_t2_ParamLimits

0xbe69,	// (0x0000c32d) control_pane_t2

0x0002,

0xf7ac,	// (0x0000fc70) control_pane_t_ParamLimits

0xf7ac,	// (0x0000fc70) control_pane_t

0x240c,	// (0x000028d0) navi_navi_volume_pane_cp1

0x2415,	// (0x000028d9) status_small_icon_pane

0x241d,	// (0x000028e1) status_small_pane_g1_ParamLimits

0x241d,	// (0x000028e1) status_small_pane_g1

0x2451,	// (0x00002915) status_small_pane_g2_ParamLimits

0x2451,	// (0x00002915) status_small_pane_g2

0x245d,	// (0x00002921) status_small_pane_g3_ParamLimits

0x245d,	// (0x00002921) status_small_pane_g3

0x2469,	// (0x0000292d) status_small_pane_g4_ParamLimits

0x2469,	// (0x0000292d) status_small_pane_g4

0x2475,	// (0x00002939) status_small_pane_g5_ParamLimits

0x2475,	// (0x00002939) status_small_pane_g5

0x2484,	// (0x00002948) status_small_pane_g6_ParamLimits

0x2484,	// (0x00002948) status_small_pane_g6

0x0007,

0xf78a,	// (0x0000fc4e) status_small_pane_g_ParamLimits

0xf78a,	// (0x0000fc4e) status_small_pane_g

0x24b4,	// (0x00002978) status_small_pane_t1

0x24d7,	// (0x0000299b) status_small_wait_pane_ParamLimits

0x24d7,	// (0x0000299b) status_small_wait_pane

0xbb2f,	// (0x0000bff3) aid_levels_signal_ParamLimits

0xbb2f,	// (0x0000bff3) aid_levels_signal

0xbb47,	// (0x0000c00b) signal_pane_g1_ParamLimits

0xbb47,	// (0x0000c00b) signal_pane_g1

0xbb62,	// (0x0000c026) signal_pane_g2_ParamLimits

0xbb62,	// (0x0000c026) signal_pane_g2

0x0003,

0xf71b,	// (0x0000fbdf) signal_pane_g_ParamLimits

0xf71b,	// (0x0000fbdf) signal_pane_g

0x1a19,	// (0x00001edd) context_pane_g1

0xb024,	// (0x0000b4e8) title_pane_g1

0xb05b,	// (0x0000b51f) title_pane_t1

0x0013,	// (0x000004d7) title_pane_t2

0x0039,	// (0x000004fd) title_pane_t3

0x0002,

0xf56f,	// (0x0000fa33) title_pane_t

0xca18,	// (0x0000cedc) aid_levels_battery_ParamLimits

0xca18,	// (0x0000cedc) aid_levels_battery

0xca34,	// (0x0000cef8) battery_pane_g1_ParamLimits

0xca34,	// (0x0000cef8) battery_pane_g1

0xca51,	// (0x0000cf15) battery_pane_g2_ParamLimits

0xca51,	// (0x0000cf15) battery_pane_g2

0x0001,

0xf7be,	// (0x0000fc82) battery_pane_g_ParamLimits

0xf7be,	// (0x0000fc82) battery_pane_g

0xce85,	// (0x0000d349) uni_indicator_pane_g1

0xce9a,	// (0x0000d35e) uni_indicator_pane_g2

0xceaf,	// (0x0000d373) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0000fde5) uni_indicator_pane_g

0x1fe3,	// (0x000024a7) navi_icon_pane_ParamLimits

0x1fe3,	// (0x000024a7) navi_icon_pane

0x1f2a,	// (0x000023ee) navi_midp_pane

0x1fff,	// (0x000024c3) navi_navi_pane

0x2009,	// (0x000024cd) navi_text_pane_ParamLimits

0x2009,	// (0x000024cd) navi_text_pane

0xf316,	// (0x0000f7da) status_small_wait_pane_g1

0x0527,	// (0x000009eb) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0000fde0) status_small_wait_pane_g

0xce24,	// (0x0000d2e8) navi_navi_icon_text_pane

0xce2c,	// (0x0000d2f0) navi_navi_pane_g1_ParamLimits

0xce2c,	// (0x0000d2f0) navi_navi_pane_g1

0xce3e,	// (0x0000d302) navi_navi_pane_g2_ParamLimits

0xce3e,	// (0x0000d302) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0000fdae) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0000fdae) navi_navi_pane_g

0x4481,	// (0x00004945) navi_navi_tabs_pane

0xce50,	// (0x0000d314) navi_navi_text_pane

0xce24,	// (0x0000d2e8) navi_navi_volume_pane

0xce12,	// (0x0000d2d6) navi_text_pane_t1

0xce06,	// (0x0000d2ca) navi_icon_pane_g1

0x4372,	// (0x00004836) navi_navi_text_pane_t1

0xcdf5,	// (0x0000d2b9) navi_navi_volume_pane_g1

0xcdfd,	// (0x0000d2c1) volume_small_pane

0xcd51,	// (0x0000d215) navi_navi_icon_text_pane_g1

0xcd59,	// (0x0000d21d) navi_navi_icon_text_pane_t1

0x1fff,	// (0x000024c3) navi_tabs_2_long_pane

0x1fff,	// (0x000024c3) navi_tabs_2_pane

0x1fff,	// (0x000024c3) navi_tabs_3_long_pane

0x1fff,	// (0x000024c3) navi_tabs_3_pane

0x1fff,	// (0x000024c3) navi_tabs_4_pane

0xcd31,	// (0x0000d1f5) tabs_2_active_pane_ParamLimits

0xcd31,	// (0x0000d1f5) tabs_2_active_pane

0xcd41,	// (0x0000d205) tabs_2_passive_pane_ParamLimits

0xcd41,	// (0x0000d205) tabs_2_passive_pane

0xccff,	// (0x0000d1c3) tabs_3_active_pane_ParamLimits

0xccff,	// (0x0000d1c3) tabs_3_active_pane

0xcd0f,	// (0x0000d1d3) tabs_3_passive_pane_ParamLimits

0xcd0f,	// (0x0000d1d3) tabs_3_passive_pane

0xcd20,	// (0x0000d1e4) tabs_3_passive_pane_cp_ParamLimits

0xcd20,	// (0x0000d1e4) tabs_3_passive_pane_cp

0xccbb,	// (0x0000d17f) tabs_4_active_pane_ParamLimits

0xccbb,	// (0x0000d17f) tabs_4_active_pane

0xcccc,	// (0x0000d190) tabs_4_passive_pane_ParamLimits

0xcccc,	// (0x0000d190) tabs_4_passive_pane

0xccdd,	// (0x0000d1a1) tabs_4_passive_pane_cp_ParamLimits

0xccdd,	// (0x0000d1a1) tabs_4_passive_pane_cp

0xccee,	// (0x0000d1b2) tabs_4_passive_pane_cp2_ParamLimits

0xccee,	// (0x0000d1b2) tabs_4_passive_pane_cp2

0xcc97,	// (0x0000d15b) tabs_2_long_active_pane_ParamLimits

0xcc97,	// (0x0000d15b) tabs_2_long_active_pane

0xcca9,	// (0x0000d16d) tabs_2_long_passive_pane_ParamLimits

0xcca9,	// (0x0000d16d) tabs_2_long_passive_pane

0xcc4c,	// (0x0000d110) tabs_3_long_active_pane_ParamLimits

0xcc4c,	// (0x0000d110) tabs_3_long_active_pane

0xcc65,	// (0x0000d129) tabs_3_long_passive_pane_ParamLimits

0xcc65,	// (0x0000d129) tabs_3_long_passive_pane

0xcc7e,	// (0x0000d142) tabs_3_long_passive_pane_cp_ParamLimits

0xcc7e,	// (0x0000d142) tabs_3_long_passive_pane_cp

0x40eb,	// (0x000045af) volume_small_pane_g1

0xcbfb,	// (0x0000d0bf) volume_small_pane_g2

0xcc04,	// (0x0000d0c8) volume_small_pane_g3

0xcc0d,	// (0x0000d0d1) volume_small_pane_g4

0xcc16,	// (0x0000d0da) volume_small_pane_g5

0xcc1f,	// (0x0000d0e3) volume_small_pane_g6

0xcc28,	// (0x0000d0ec) volume_small_pane_g7

0xcc31,	// (0x0000d0f5) volume_small_pane_g8

0xcc3a,	// (0x0000d0fe) volume_small_pane_g9

0xcc43,	// (0x0000d107) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0000fd7a) volume_small_pane_g

0x0371,	// (0x00000835) bg_active_tab_pane_cp2_ParamLimits

0x0371,	// (0x00000835) bg_active_tab_pane_cp2

0xb0e7,	// (0x0000b5ab) tabs_3_active_pane_g1

0xb0ef,	// (0x0000b5b3) tabs_3_active_pane_t1

0x0371,	// (0x00000835) bg_passive_tab_pane_cp2_ParamLimits

0x0371,	// (0x00000835) bg_passive_tab_pane_cp2

0xb0e7,	// (0x0000b5ab) tabs_3_passive_pane_g1

0xb0ef,	// (0x0000b5b3) tabs_3_passive_pane_t1

0x0371,	// (0x00000835) bg_active_tab_pane_cp3_ParamLimits

0x0371,	// (0x00000835) bg_active_tab_pane_cp3

0xb101,	// (0x0000b5c5) tabs_4_active_pane_g1

0xb109,	// (0x0000b5cd) tabs_4_active_pane_t1

0x0371,	// (0x00000835) bg_passive_tab_pane_cp3_ParamLimits

0x0371,	// (0x00000835) bg_passive_tab_pane_cp3

0xb101,	// (0x0000b5c5) tabs_4_1_passive_pane_g1

0xb109,	// (0x0000b5cd) tabs_4_1_passive_pane_t1

0x26f6,	// (0x00002bba) list_highlight_pane_cp2

0xcf7f,	// (0x0000d443) list_set_pane_ParamLimits

0xcf7f,	// (0x0000d443) list_set_pane

0xd047,	// (0x0000d50b) main_pane_set_t1_ParamLimits

0xd047,	// (0x0000d50b) main_pane_set_t1

0xd067,	// (0x0000d52b) main_pane_set_t2_ParamLimits

0xd067,	// (0x0000d52b) main_pane_set_t2

0xd07b,	// (0x0000d53f) main_pane_set_t3_ParamLimits

0xd07b,	// (0x0000d53f) main_pane_set_t3

0xd08f,	// (0x0000d553) main_pane_set_t4_ParamLimits

0xd08f,	// (0x0000d553) main_pane_set_t4

0x0003,

0xf986,	// (0x0000fe4a) main_pane_set_t_ParamLimits

0xf986,	// (0x0000fe4a) main_pane_set_t

0xd0a3,	// (0x0000d567) setting_code_pane

0x4c0f,	// (0x000050d3) setting_slider_graphic_pane

0x4c0f,	// (0x000050d3) setting_slider_pane

0x4c0f,	// (0x000050d3) setting_text_pane

0x4c0f,	// (0x000050d3) setting_volume_pane

0x008d,	// (0x00000551) volume_set_pane

0x004b,	// (0x0000050f) bg_set_opt_pane_cp

0x0097,	// (0x0000055b) setting_slider_pane_t1

0x00ad,	// (0x00000571) setting_slider_pane_t2

0x00c7,	// (0x0000058b) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0000fa3a) setting_slider_pane_t

0x00df,	// (0x000005a3) slider_set_pane

0xf48f,	// (0x0000f953) bg_set_opt_pane_cp2

0x00f5,	// (0x000005b9) setting_slider_graphic_pane_g1

0x00fe,	// (0x000005c2) setting_slider_graphic_pane_t1

0x010e,	// (0x000005d2) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0000fa41) setting_slider_graphic_pane_t

0x011e,	// (0x000005e2) slider_set_pane_cp

0xf48f,	// (0x0000f953) input_focus_pane_cp1

0x4a96,	// (0x00004f5a) list_set_text_pane

0xf316,	// (0x0000f7da) setting_text_pane_g1

0xf48f,	// (0x0000f953) input_focus_pane_cp2

0xf316,	// (0x0000f7da) setting_code_pane_g1

0x0126,	// (0x000005ea) setting_code_pane_t1

0x0134,	// (0x000005f8) set_text_pane_t1_ParamLimits

0x0134,	// (0x000005f8) set_text_pane_t1

0x1053,	// (0x00001517) set_opt_bg_pane_g1

0x105b,	// (0x0000151f) set_opt_bg_pane_g2

0x4a6e,	// (0x00004f32) set_opt_bg_pane_g3

0x106b,	// (0x0000152f) set_opt_bg_pane_g4

0x1073,	// (0x00001537) set_opt_bg_pane_g5

0x107b,	// (0x0000153f) set_opt_bg_pane_g6

0x4a78,	// (0x00004f3c) set_opt_bg_pane_g7

0x4a82,	// (0x00004f46) set_opt_bg_pane_g8

0x4a8c,	// (0x00004f50) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0000fe37) set_opt_bg_pane_g

0x49fd,	// (0x00004ec1) slider_set_pane_g1

0x4a0a,	// (0x00004ece) slider_set_pane_g2

0x0006,

0xf964,	// (0x0000fe28) slider_set_pane_g

0x4865,	// (0x00004d29) volume_set_pane_g1

0x486f,	// (0x00004d33) volume_set_pane_g2

0x4879,	// (0x00004d3d) volume_set_pane_g3

0x4883,	// (0x00004d47) volume_set_pane_g4

0x488d,	// (0x00004d51) volume_set_pane_g5

0x4897,	// (0x00004d5b) volume_set_pane_g6

0x48a1,	// (0x00004d65) volume_set_pane_g7

0x48ab,	// (0x00004d6f) volume_set_pane_g8

0x48b5,	// (0x00004d79) volume_set_pane_g9

0x48bf,	// (0x00004d83) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0000fe00) volume_set_pane_g

0xb11b,	// (0x0000b5df) indicator_pane_ParamLimits

0xb11b,	// (0x0000b5df) indicator_pane

0xb147,	// (0x0000b60b) main_idle_pane_g2_ParamLimits

0xb147,	// (0x0000b60b) main_idle_pane_g2

0xb17f,	// (0x0000b643) main_pane_idle_g1_ParamLimits

0xb17f,	// (0x0000b643) main_pane_idle_g1

0x0190,	// (0x00000654) popup_clock_digital_analogue_window_ParamLimits

0x0190,	// (0x00000654) popup_clock_digital_analogue_window

0xb1ad,	// (0x0000b671) soft_indicator_pane_ParamLimits

0xb1ad,	// (0x0000b671) soft_indicator_pane

0xb1c9,	// (0x0000b68d) wallpaper_pane_ParamLimits

0xb1c9,	// (0x0000b68d) wallpaper_pane

0xf316,	// (0x0000f7da) wallpaper_pane_g1

0xb1db,	// (0x0000b69f) indicator_pane_g1_ParamLimits

0xb1db,	// (0x0000b69f) indicator_pane_g1

0x4fcf,	// (0x00005493) navi_navi_icon_text_pane_srt_g1

0x01e4,	// (0x000006a8) soft_indicator_pane_t1

0x01fe,	// (0x000006c2) aid_ps_area_pane

0xb1f4,	// (0x0000b6b8) aid_ps_clock_pane

0x021d,	// (0x000006e1) aid_ps_indicator_pane

0x0229,	// (0x000006ed) indicator_ps_pane_ParamLimits

0x0229,	// (0x000006ed) indicator_ps_pane

0x0238,	// (0x000006fc) power_save_pane_g1_ParamLimits

0x0238,	// (0x000006fc) power_save_pane_g1

0x0244,	// (0x00000708) power_save_pane_g2_ParamLimits

0x0244,	// (0x00000708) power_save_pane_g2

0xf320,	// (0x0000f7e4) aid_navinavi_width_pane

0x01fe,	// (0x000006c2) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0000fa46) power_save_pane_g_ParamLimits

0xf582,	// (0x0000fa46) power_save_pane_g

0x0252,	// (0x00000716) power_save_pane_t1_ParamLimits

0x0252,	// (0x00000716) power_save_pane_t1

0xb1f4,	// (0x0000b6b8) aid_ps_clock_pane_ParamLimits

0x021d,	// (0x000006e1) aid_ps_indicator_pane_ParamLimits

0x0264,	// (0x00000728) power_save_pane_t4_ParamLimits

0x0264,	// (0x00000728) power_save_pane_t4

0x0001,

0xf587,	// (0x0000fa4b) power_save_pane_t_ParamLimits

0xf587,	// (0x0000fa4b) power_save_pane_t

0x028e,	// (0x00000752) power_save_t3_ParamLimits

0x028e,	// (0x00000752) power_save_t3

0x0279,	// (0x0000073d) power_save_t2_ParamLimits

0x0279,	// (0x0000073d) power_save_t2

0x02a3,	// (0x00000767) indicator_ps_pane_g1

0xb202,	// (0x0000b6c6) ai_gene_pane_ParamLimits

0xb202,	// (0x0000b6c6) ai_gene_pane

0xb219,	// (0x0000b6dd) ai_links_pane_ParamLimits

0xb219,	// (0x0000b6dd) ai_links_pane

0xb231,	// (0x0000b6f5) indicator_pane_cp1_ParamLimits

0xb231,	// (0x0000b6f5) indicator_pane_cp1

0xb240,	// (0x0000b704) main_pane_idle_g1_cp_ParamLimits

0xb240,	// (0x0000b704) main_pane_idle_g1_cp

0x02dc,	// (0x000007a0) popup_ai_links_title_window

0xb258,	// (0x0000b71c) soft_indicator_pane_cp1_ParamLimits

0xb258,	// (0x0000b71c) soft_indicator_pane_cp1

0x4730,	// (0x00004bf4) ai_links_pane_g1

0x4739,	// (0x00004bfd) grid_ai_links_pane

0xce7c,	// (0x0000d340) ai_gene_pane_1

0x471e,	// (0x00004be2) ai_gene_pane_2

0x4727,	// (0x00004beb) list_highlight_pane_cp4

0xce58,	// (0x0000d31c) cell_ai_link_pane_ParamLimits

0xce58,	// (0x0000d31c) cell_ai_link_pane

0x46ed,	// (0x00004bb1) cell_ai_link_pane_g1

0x0527,	// (0x000009eb) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0000fddb) cell_ai_link_pane_g

0xf48f,	// (0x0000f953) grid_highlight_cp2

0xf48f,	// (0x0000f953) bg_popup_sub_pane_cp1

0x02ff,	// (0x000007c3) popup_ai_links_title_window_t1

0x4639,	// (0x00004afd) ai_gene_pane_1_g1_ParamLimits

0x4639,	// (0x00004afd) ai_gene_pane_1_g1

0x4645,	// (0x00004b09) ai_gene_pane_1_g2_ParamLimits

0x4645,	// (0x00004b09) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0000fdd1) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0000fdd1) ai_gene_pane_1_g

0x4652,	// (0x00004b16) ai_gene_pane_1_t1_ParamLimits

0x4652,	// (0x00004b16) ai_gene_pane_1_t1

0x4686,	// (0x00004b4a) grid_ai_soft_ind_pane

0x4624,	// (0x00004ae8) ai_gene_pane_2_t1_ParamLimits

0x4624,	// (0x00004ae8) ai_gene_pane_2_t1

0xb26c,	// (0x0000b730) main_pane_empty_t1_ParamLimits

0xb26c,	// (0x0000b730) main_pane_empty_t1

0xb284,	// (0x0000b748) main_pane_empty_t2_ParamLimits

0xb284,	// (0x0000b748) main_pane_empty_t2

0xb299,	// (0x0000b75d) main_pane_empty_t3_ParamLimits

0xb299,	// (0x0000b75d) main_pane_empty_t3

0xb2ab,	// (0x0000b76f) main_pane_empty_t4_ParamLimits

0xb2ab,	// (0x0000b76f) main_pane_empty_t4

0xb2bd,	// (0x0000b781) main_pane_empty_t5_ParamLimits

0xb2bd,	// (0x0000b781) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0000fa50) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0000fa50) main_pane_empty_t

0x1131,	// (0x000015f5) bg_popup_window_pane_ParamLimits

0x1131,	// (0x000015f5) bg_popup_window_pane

0x4380,	// (0x00004844) find_popup_pane_cp2_ParamLimits

0x4380,	// (0x00004844) find_popup_pane_cp2

0x438c,	// (0x00004850) heading_pane_ParamLimits

0x438c,	// (0x00004850) heading_pane

0xf48f,	// (0x0000f953) bg_popup_sub_pane

0xcd76,	// (0x0000d23a) bg_popup_window_pane_g1_ParamLimits

0xcd76,	// (0x0000d23a) bg_popup_window_pane_g1

0xcd85,	// (0x0000d249) bg_popup_window_pane_g2_ParamLimits

0xcd85,	// (0x0000d249) bg_popup_window_pane_g2

0xcd91,	// (0x0000d255) bg_popup_window_pane_g3_ParamLimits

0xcd91,	// (0x0000d255) bg_popup_window_pane_g3

0xcd9d,	// (0x0000d261) bg_popup_window_pane_g4_ParamLimits

0xcd9d,	// (0x0000d261) bg_popup_window_pane_g4

0xcdac,	// (0x0000d270) bg_popup_window_pane_g5_ParamLimits

0xcdac,	// (0x0000d270) bg_popup_window_pane_g5

0xcdbc,	// (0x0000d280) bg_popup_window_pane_g6_ParamLimits

0xcdbc,	// (0x0000d280) bg_popup_window_pane_g6

0xcdc8,	// (0x0000d28c) bg_popup_window_pane_g7_ParamLimits

0xcdc8,	// (0x0000d28c) bg_popup_window_pane_g7

0xcdd7,	// (0x0000d29b) bg_popup_window_pane_g8_ParamLimits

0xcdd7,	// (0x0000d29b) bg_popup_window_pane_g8

0xcde6,	// (0x0000d2aa) bg_popup_window_pane_g9_ParamLimits

0xcde6,	// (0x0000d2aa) bg_popup_window_pane_g9

0x4355,	// (0x00004819) bg_popup_window_pane_g10_ParamLimits

0x4355,	// (0x00004819) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0000fd99) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0000fd99) bg_popup_window_pane_g

0x427e,	// (0x00004742) bg_popup_heading_pane_ParamLimits

0x427e,	// (0x00004742) bg_popup_heading_pane

0x4f12,	// (0x000053d6) tabs_4_passive_pane_cp_srt_ParamLimits

0x4f12,	// (0x000053d6) tabs_4_passive_pane_cp_srt

0x4f24,	// (0x000053e8) tabs_4_passive_pane_srt_ParamLimits

0x4292,	// (0x00004756) heading_pane_g2

0x4f24,	// (0x000053e8) tabs_4_passive_pane_srt

0x3474,	// (0x00003938) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3474,	// (0x00003938) bg_passive_tab_pane_cp3_srt

0x429a,	// (0x0000475e) heading_pane_t1_ParamLimits

0x429a,	// (0x0000475e) heading_pane_t1

0x42b1,	// (0x00004775) heading_pane_t2_ParamLimits

0x42b1,	// (0x00004775) heading_pane_t2

0x0001,

0xf8d0,	// (0x0000fd94) heading_pane_t_ParamLimits

0xf8d0,	// (0x0000fd94) heading_pane_t

0x3c4e,	// (0x00004112) bg_popup_heading_pane_g1

0x3cfd,	// (0x000041c1) bg_popup_heading_pane_g2

0x3d07,	// (0x000041cb) bg_popup_heading_pane_g3

0x3d11,	// (0x000041d5) bg_popup_heading_pane_g4

0x3d1b,	// (0x000041df) bg_popup_heading_pane_g5

0x3d25,	// (0x000041e9) bg_popup_heading_pane_g6

0x3d2d,	// (0x000041f1) bg_popup_heading_pane_g7

0x3d35,	// (0x000041f9) bg_popup_heading_pane_g8

0x3d3f,	// (0x00004203) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0000fd50) bg_popup_heading_pane_g

0x32e1,	// (0x000037a5) bg_popup_sub_pane_g1

0x32e9,	// (0x000037ad) bg_popup_sub_pane_g2

0x32f1,	// (0x000037b5) bg_popup_sub_pane_g3

0x32f9,	// (0x000037bd) bg_popup_sub_pane_g4

0x3301,	// (0x000037c5) bg_popup_sub_pane_g5

0x3309,	// (0x000037cd) bg_popup_sub_pane_g6

0x3311,	// (0x000037d5) bg_popup_sub_pane_g7

0x3319,	// (0x000037dd) bg_popup_sub_pane_g8

0x3321,	// (0x000037e5) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0000fd2a) bg_popup_sub_pane_g

0x0371,	// (0x00000835) bg_popup_window_pane_cp5_ParamLimits

0x0371,	// (0x00000835) bg_popup_window_pane_cp5

0x038d,	// (0x00000851) popup_note_window_g1_ParamLimits

0x038d,	// (0x00000851) popup_note_window_g1

0x0399,	// (0x0000085d) popup_note_window_t1_ParamLimits

0x0399,	// (0x0000085d) popup_note_window_t1

0x03af,	// (0x00000873) popup_note_window_t2_ParamLimits

0x03af,	// (0x00000873) popup_note_window_t2

0x03c5,	// (0x00000889) popup_note_window_t3_ParamLimits

0x03c5,	// (0x00000889) popup_note_window_t3

0x03db,	// (0x0000089f) popup_note_window_t4_ParamLimits

0x03db,	// (0x0000089f) popup_note_window_t4

0x0403,	// (0x000008c7) popup_note_window_t5_ParamLimits

0x0403,	// (0x000008c7) popup_note_window_t5

0x0004,

0xf597,	// (0x0000fa5b) popup_note_window_t_ParamLimits

0xf597,	// (0x0000fa5b) popup_note_window_t

0x0427,	// (0x000008eb) bg_popup_window_pane_cp6_ParamLimits

0x0427,	// (0x000008eb) bg_popup_window_pane_cp6

0x3bca,	// (0x0000408e) popup_note_image_window_g1_ParamLimits

0x3bca,	// (0x0000408e) popup_note_image_window_g1

0x3bd6,	// (0x0000409a) popup_note_image_window_g2_ParamLimits

0x3bd6,	// (0x0000409a) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0000fd1e) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0000fd1e) popup_note_image_window_g

0x3bef,	// (0x000040b3) popup_note_image_window_t1_ParamLimits

0x3bef,	// (0x000040b3) popup_note_image_window_t1

0x3c08,	// (0x000040cc) popup_note_image_window_t2_ParamLimits

0x3c08,	// (0x000040cc) popup_note_image_window_t2

0x3c21,	// (0x000040e5) popup_note_image_window_t3_ParamLimits

0x3c21,	// (0x000040e5) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0000fd23) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0000fd23) popup_note_image_window_t

0x3a8a,	// (0x00003f4e) bg_popup_window_pane_cp7_ParamLimits

0x3a8a,	// (0x00003f4e) bg_popup_window_pane_cp7

0x3aba,	// (0x00003f7e) popup_note_wait_window_g1_ParamLimits

0x3aba,	// (0x00003f7e) popup_note_wait_window_g1

0x3ac6,	// (0x00003f8a) popup_note_wait_window_g2_ParamLimits

0x3ac6,	// (0x00003f8a) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0000fd0c) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0000fd0c) popup_note_wait_window_g

0x3ade,	// (0x00003fa2) popup_note_wait_window_t1_ParamLimits

0x3ade,	// (0x00003fa2) popup_note_wait_window_t1

0x3b05,	// (0x00003fc9) popup_note_wait_window_t2_ParamLimits

0x3b05,	// (0x00003fc9) popup_note_wait_window_t2

0x3b23,	// (0x00003fe7) popup_note_wait_window_t3_ParamLimits

0x3b23,	// (0x00003fe7) popup_note_wait_window_t3

0x3b36,	// (0x00003ffa) popup_note_wait_window_t4_ParamLimits

0x3b36,	// (0x00003ffa) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0000fd13) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0000fd13) popup_note_wait_window_t

0x3b5b,	// (0x0000401f) wait_bar_pane_ParamLimits

0x3b5b,	// (0x0000401f) wait_bar_pane

0xf48f,	// (0x0000f953) wait_anim_pane

0xf48f,	// (0x0000f953) wait_border_pane

0xf316,	// (0x0000f7da) wait_anim_pane_g1

0xf316,	// (0x0000f7da) wait_anim_pane_g2

0x0001,

0xf716,	// (0x0000fbda) wait_anim_pane_g

0x3a2e,	// (0x00003ef2) wait_border_pane_g1

0x3a39,	// (0x00003efd) wait_border_pane_g2

0x3a42,	// (0x00003f06) wait_border_pane_g3

0x0002,

0xf841,	// (0x0000fd05) wait_border_pane_g

0x3898,	// (0x00003d5c) bg_popup_window_pane_cp16_ParamLimits

0x3898,	// (0x00003d5c) bg_popup_window_pane_cp16

0x3998,	// (0x00003e5c) indicator_popup_pane_cp4_ParamLimits

0x3998,	// (0x00003e5c) indicator_popup_pane_cp4

0x39ac,	// (0x00003e70) popup_query_data_window_t1_ParamLimits

0x39ac,	// (0x00003e70) popup_query_data_window_t1

0x39be,	// (0x00003e82) popup_query_data_window_t2_ParamLimits

0x39be,	// (0x00003e82) popup_query_data_window_t2

0x39d7,	// (0x00003e9b) popup_query_data_window_t3_ParamLimits

0x39d7,	// (0x00003e9b) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0000fcfe) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0000fcfe) popup_query_data_window_t

0x39f1,	// (0x00003eb5) query_popup_data_pane_ParamLimits

0x39f1,	// (0x00003eb5) query_popup_data_pane

0x3a05,	// (0x00003ec9) query_popup_data_pane_cp1_ParamLimits

0x3a05,	// (0x00003ec9) query_popup_data_pane_cp1

0x3898,	// (0x00003d5c) bg_popup_window_pane_cp10_ParamLimits

0x3898,	// (0x00003d5c) bg_popup_window_pane_cp10

0x38ca,	// (0x00003d8e) indicator_popup_pane_ParamLimits

0x38ca,	// (0x00003d8e) indicator_popup_pane

0x38ec,	// (0x00003db0) popup_query_code_window_t1_ParamLimits

0x38ec,	// (0x00003db0) popup_query_code_window_t1

0x3906,	// (0x00003dca) popup_query_code_window_t2_ParamLimits

0x3906,	// (0x00003dca) popup_query_code_window_t2

0x394f,	// (0x00003e13) popup_query_code_window_t3_ParamLimits

0x394f,	// (0x00003e13) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0000fcf7) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0000fcf7) popup_query_code_window_t

0x397e,	// (0x00003e42) query_popup_pane_ParamLimits

0x397e,	// (0x00003e42) query_popup_pane

0x0427,	// (0x000008eb) bg_popup_window_pane_cp15_ParamLimits

0x0427,	// (0x000008eb) bg_popup_window_pane_cp15

0x0447,	// (0x0000090b) indicator_popup_pane_cp1_ParamLimits

0x0447,	// (0x0000090b) indicator_popup_pane_cp1

0x045a,	// (0x0000091e) indicator_popup_pane_cp2_ParamLimits

0x045a,	// (0x0000091e) indicator_popup_pane_cp2

0x0475,	// (0x00000939) popup_query_data_code_window_g1_ParamLimits

0x0475,	// (0x00000939) popup_query_data_code_window_g1

0x0488,	// (0x0000094c) popup_query_data_code_window_t1_ParamLimits

0x0488,	// (0x0000094c) popup_query_data_code_window_t1

0x049a,	// (0x0000095e) popup_query_data_code_window_t2_ParamLimits

0x049a,	// (0x0000095e) popup_query_data_code_window_t2

0x04ac,	// (0x00000970) popup_query_data_code_window_t3_ParamLimits

0x04ac,	// (0x00000970) popup_query_data_code_window_t3

0x04c2,	// (0x00000986) popup_query_data_code_window_t4_ParamLimits

0x04c2,	// (0x00000986) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0000fa66) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0000fa66) popup_query_data_code_window_t

0x1f9f,	// (0x00002463) list_single_midp_graphic_pane_g3

0x04dc,	// (0x000009a0) query_popup_data_pane_cp2_ParamLimits

0x04ef,	// (0x000009b3) query_popup_pane_cp2_ParamLimits

0x04ef,	// (0x000009b3) query_popup_pane_cp2

0xf48f,	// (0x0000f953) bg_popup_window_pane_cp11

0x3890,	// (0x00003d54) heading_pane_cp5

0x05df,	// (0x00000aa3) listscroll_popup_info_pane

0xf48f,	// (0x0000f953) input_focus_pane_cp3

0x050a,	// (0x000009ce) query_popup_pane_t1

0x0518,	// (0x000009dc) list_popup_info_pane_ParamLimits

0x0518,	// (0x000009dc) list_popup_info_pane

0x0527,	// (0x000009eb) listscroll_popup_info_pane_g1

0x052f,	// (0x000009f3) scroll_pane_cp7

0x0539,	// (0x000009fd) popup_info_list_pane_t1_ParamLimits

0x0539,	// (0x000009fd) popup_info_list_pane_t1

0x0553,	// (0x00000a17) popup_info_list_pane_t2_ParamLimits

0x0553,	// (0x00000a17) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0000fa6f) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0000fa6f) popup_info_list_pane_t

0xf48f,	// (0x0000f953) bg_popup_window_pane_cp12

0x5006,	// (0x000054ca) find_popup_pane

0x004b,	// (0x0000050f) bg_popup_window_pane_cp3

0x056d,	// (0x00000a31) heading_pane_cp3

0x0579,	// (0x00000a3d) listscroll_popup_graphic_pane

0xf48f,	// (0x0000f953) bg_popup_window_pane_cp4

0xb31f,	// (0x0000b7e3) heading_pane_cp4

0x05df,	// (0x00000aa3) listscroll_popup_colour_pane

0xb329,	// (0x0000b7ed) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb329,	// (0x0000b7ed) cell_large_graphic_colour_none_popup_pane

0xb33d,	// (0x0000b801) grid_large_graphic_colour_popup_pane_ParamLimits

0xb33d,	// (0x0000b801) grid_large_graphic_colour_popup_pane

0xb369,	// (0x0000b82d) listscroll_popup_colour_pane_g1_ParamLimits

0xb369,	// (0x0000b82d) listscroll_popup_colour_pane_g1

0xb380,	// (0x0000b844) listscroll_popup_colour_pane_g2_ParamLimits

0xb380,	// (0x0000b844) listscroll_popup_colour_pane_g2

0xb397,	// (0x0000b85b) listscroll_popup_colour_pane_g3_ParamLimits

0xb397,	// (0x0000b85b) listscroll_popup_colour_pane_g3

0xb3a7,	// (0x0000b86b) listscroll_popup_colour_pane_g4_ParamLimits

0xb3a7,	// (0x0000b86b) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0000fa74) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0000fa74) listscroll_popup_colour_pane_g

0x0679,	// (0x00000b3d) scroll_pane_cp6_ParamLimits

0x0679,	// (0x00000b3d) scroll_pane_cp6

0xb3bb,	// (0x0000b87f) cell_large_graphic_colour_popup_pane_ParamLimits

0xb3bb,	// (0x0000b87f) cell_large_graphic_colour_popup_pane

0x06b0,	// (0x00000b74) cell_large_graphic_colour_none_popup_pane_t1

0xf48f,	// (0x0000f953) grid_highlight_pane_cp5

0x06bf,	// (0x00000b83) cell_large_graphic_colour_popup_pane_g1

0x06c7,	// (0x00000b8b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0000fa7d) cell_large_graphic_colour_popup_pane_g

0x06cf,	// (0x00000b93) cell_large_graphic_colour_popup_pane_g2_copy1

0x06d8,	// (0x00000b9c) grid_highlight_pane_cp4

0x06e0,	// (0x00000ba4) bg_popup_window_pane_cp8_ParamLimits

0x06e0,	// (0x00000ba4) bg_popup_window_pane_cp8

0x06fb,	// (0x00000bbf) popup_snote_single_text_window_g1_ParamLimits

0x06fb,	// (0x00000bbf) popup_snote_single_text_window_g1

0x070d,	// (0x00000bd1) popup_snote_single_text_window_t1_ParamLimits

0x070d,	// (0x00000bd1) popup_snote_single_text_window_t1

0x0720,	// (0x00000be4) popup_snote_single_text_window_t2_ParamLimits

0x0720,	// (0x00000be4) popup_snote_single_text_window_t2

0x0733,	// (0x00000bf7) popup_snote_single_text_window_t3_ParamLimits

0x0733,	// (0x00000bf7) popup_snote_single_text_window_t3

0x076c,	// (0x00000c30) popup_snote_single_text_window_t4_ParamLimits

0x076c,	// (0x00000c30) popup_snote_single_text_window_t4

0x07a0,	// (0x00000c64) popup_snote_single_text_window_t5_ParamLimits

0x07a0,	// (0x00000c64) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0000fa82) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0000fa82) popup_snote_single_text_window_t

0x07cf,	// (0x00000c93) bg_popup_window_pane_cp9_ParamLimits

0x07cf,	// (0x00000c93) bg_popup_window_pane_cp9

0x06fb,	// (0x00000bbf) popup_snote_single_graphic_window_g1_ParamLimits

0x06fb,	// (0x00000bbf) popup_snote_single_graphic_window_g1

0x07dd,	// (0x00000ca1) popup_snote_single_graphic_window_g2_ParamLimits

0x07dd,	// (0x00000ca1) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0000fa8d) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0000fa8d) popup_snote_single_graphic_window_g

0x07e9,	// (0x00000cad) popup_snote_single_graphic_window_t1_ParamLimits

0x07e9,	// (0x00000cad) popup_snote_single_graphic_window_t1

0x07fc,	// (0x00000cc0) popup_snote_single_graphic_window_t2_ParamLimits

0x07fc,	// (0x00000cc0) popup_snote_single_graphic_window_t2

0x080f,	// (0x00000cd3) popup_snote_single_graphic_window_t3_ParamLimits

0x080f,	// (0x00000cd3) popup_snote_single_graphic_window_t3

0x0848,	// (0x00000d0c) popup_snote_single_graphic_window_t4_ParamLimits

0x0848,	// (0x00000d0c) popup_snote_single_graphic_window_t4

0x087c,	// (0x00000d40) popup_snote_single_graphic_window_t5_ParamLimits

0x087c,	// (0x00000d40) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0000fa92) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0000fa92) popup_snote_single_graphic_window_t

0x4e8c,	// (0x00005350) grid_graphic_popup_pane_ParamLimits

0x4e8c,	// (0x00005350) grid_graphic_popup_pane

0x4eba,	// (0x0000537e) listscroll_popup_graphic_pane_g1_ParamLimits

0x4eba,	// (0x0000537e) listscroll_popup_graphic_pane_g1

0xd1e5,	// (0x0000d6a9) listscroll_popup_graphic_pane_g2_ParamLimits

0xd1e5,	// (0x0000d6a9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0000fe74) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0000fe74) listscroll_popup_graphic_pane_g

0x4ee2,	// (0x000053a6) scroll_pane_cp5

0xd1a5,	// (0x0000d669) cell_graphic_popup_pane_ParamLimits

0xd1a5,	// (0x0000d669) cell_graphic_popup_pane

0x4e15,	// (0x000052d9) cell_graphic_popup_pane_g1

0x4e1d,	// (0x000052e1) cell_graphic_popup_pane_g2

0x06cf,	// (0x00000b93) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0000fe6d) cell_graphic_popup_pane_g

0x4e26,	// (0x000052ea) cell_graphic_popup_pane_t2

0x06d8,	// (0x00000b9c) grid_highlight_pane_cp3

0x08bd,	// (0x00000d81) list_gen_pane_ParamLimits

0x08bd,	// (0x00000d81) list_gen_pane

0x08ef,	// (0x00000db3) scroll_pane

0xd160,	// (0x0000d624) bg_list_pane_g1_ParamLimits

0xd160,	// (0x0000d624) bg_list_pane_g1

0x4d92,	// (0x00005256) bg_list_pane_g2_ParamLimits

0x4d92,	// (0x00005256) bg_list_pane_g2

0x4da5,	// (0x00005269) bg_list_pane_g3_ParamLimits

0x4da5,	// (0x00005269) bg_list_pane_g3

0x4db7,	// (0x0000527b) bg_list_pane_g4_ParamLimits

0x4db7,	// (0x0000527b) bg_list_pane_g4

0xd17b,	// (0x0000d63f) bg_list_pane_g5_ParamLimits

0xd17b,	// (0x0000d63f) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0000fe62) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0000fe62) bg_list_pane_g

0xd0fd,	// (0x0000d5c1) list_double2_graphic_large_graphic_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double2_graphic_large_graphic_pane

0xd0fd,	// (0x0000d5c1) list_double2_graphic_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double2_graphic_pane

0xd0fd,	// (0x0000d5c1) list_double2_large_graphic_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double2_large_graphic_pane

0xd0fd,	// (0x0000d5c1) list_double2_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double2_pane

0xd0fd,	// (0x0000d5c1) list_double_graphic_heading_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double_graphic_heading_pane

0xd0fd,	// (0x0000d5c1) list_double_graphic_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double_graphic_pane

0xd0fd,	// (0x0000d5c1) list_double_heading_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double_heading_pane

0xd0fd,	// (0x0000d5c1) list_double_large_graphic_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double_large_graphic_pane

0xd0fd,	// (0x0000d5c1) list_double_number_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double_number_pane

0xd0fd,	// (0x0000d5c1) list_double_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double_pane

0xd0fd,	// (0x0000d5c1) list_double_time_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_double_time_pane

0xd0fd,	// (0x0000d5c1) list_setting_number_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_setting_number_pane

0xd0fd,	// (0x0000d5c1) list_setting_pane_ParamLimits

0xd0fd,	// (0x0000d5c1) list_setting_pane

0xd111,	// (0x0000d5d5) list_single_2graphic_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_2graphic_pane

0xd111,	// (0x0000d5d5) list_single_graphic_heading_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_graphic_heading_pane

0xd111,	// (0x0000d5d5) list_single_graphic_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_graphic_pane

0xd111,	// (0x0000d5d5) list_single_heading_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_heading_pane

0xd111,	// (0x0000d5d5) list_single_large_graphic_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_large_graphic_pane

0xd111,	// (0x0000d5d5) list_single_number_heading_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_number_heading_pane

0xd111,	// (0x0000d5d5) list_single_number_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_number_pane

0xd111,	// (0x0000d5d5) list_single_pane_ParamLimits

0xd111,	// (0x0000d5d5) list_single_pane

0xf48f,	// (0x0000f953) list_highlight_pane_cp1

0x20e6,	// (0x000025aa) list_single_pane_g1_ParamLimits

0x20e6,	// (0x000025aa) list_single_pane_g1

0x3185,	// (0x00003649) list_single_pane_g2_ParamLimits

0x3185,	// (0x00003649) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_single_pane_g

0x55e8,	// (0x00005aac) list_single_pane_t1_ParamLimits

0x55e8,	// (0x00005aac) list_single_pane_t1

0x20e6,	// (0x000025aa) list_single_number_pane_g1_ParamLimits

0x20e6,	// (0x000025aa) list_single_number_pane_g1

0x3185,	// (0x00003649) list_single_number_pane_g2_ParamLimits

0x3185,	// (0x00003649) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_single_number_pane_g

0x326f,	// (0x00003733) list_single_number_pane_t1_ParamLimits

0x326f,	// (0x00003733) list_single_number_pane_t1

0xcf1b,	// (0x0000d3df) list_single_number_pane_t2_ParamLimits

0xcf1b,	// (0x0000d3df) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0000fe23) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0000fe23) list_single_number_pane_t

0x6d59,	// (0x0000721d) list_single_graphic_pane_g1_ParamLimits

0x6d59,	// (0x0000721d) list_single_graphic_pane_g1

0x20e6,	// (0x000025aa) list_single_graphic_pane_g2_ParamLimits

0x20e6,	// (0x000025aa) list_single_graphic_pane_g2

0x3185,	// (0x00003649) list_single_graphic_pane_g3_ParamLimits

0x3185,	// (0x00003649) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0000fa9d) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0000fa9d) list_single_graphic_pane_g

0xb3e6,	// (0x0000b8aa) list_single_graphic_pane_t1_ParamLimits

0xb3e6,	// (0x0000b8aa) list_single_graphic_pane_t1

0x20e6,	// (0x000025aa) list_single_heading_pane_g1_ParamLimits

0x20e6,	// (0x000025aa) list_single_heading_pane_g1

0x3185,	// (0x00003649) list_single_heading_pane_g2_ParamLimits

0x3185,	// (0x00003649) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_single_heading_pane_g

0x560a,	// (0x00005ace) list_single_heading_pane_t1_ParamLimits

0x560a,	// (0x00005ace) list_single_heading_pane_t1

0xb3fc,	// (0x0000b8c0) list_single_heading_pane_t2_ParamLimits

0xb3fc,	// (0x0000b8c0) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0000faa9) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0000faa9) list_single_heading_pane_t

0x20e6,	// (0x000025aa) list_single_number_heading_pane_g1_ParamLimits

0x20e6,	// (0x000025aa) list_single_number_heading_pane_g1

0x3185,	// (0x00003649) list_single_number_heading_pane_g2_ParamLimits

0x3185,	// (0x00003649) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_single_number_heading_pane_g

0x560a,	// (0x00005ace) list_single_number_heading_pane_t1_ParamLimits

0x560a,	// (0x00005ace) list_single_number_heading_pane_t1

0xb40e,	// (0x0000b8d2) list_single_number_heading_pane_t2_ParamLimits

0xb40e,	// (0x0000b8d2) list_single_number_heading_pane_t2

0x55c4,	// (0x00005a88) list_single_number_heading_pane_t3_ParamLimits

0x55c4,	// (0x00005a88) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0000faae) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0000faae) list_single_number_heading_pane_t

0x3179,	// (0x0000363d) list_single_graphic_heading_pane_g1_ParamLimits

0x3179,	// (0x0000363d) list_single_graphic_heading_pane_g1

0xb420,	// (0x0000b8e4) list_single_graphic_heading_pane_g4_ParamLimits

0xb420,	// (0x0000b8e4) list_single_graphic_heading_pane_g4

0x3185,	// (0x00003649) list_single_graphic_heading_pane_g5_ParamLimits

0x3185,	// (0x00003649) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0000fab5) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0000fab5) list_single_graphic_heading_pane_g

0x560a,	// (0x00005ace) list_single_graphic_heading_pane_t1_ParamLimits

0x560a,	// (0x00005ace) list_single_graphic_heading_pane_t1

0xb431,	// (0x0000b8f5) list_single_graphic_heading_pane_t2_ParamLimits

0xb431,	// (0x0000b8f5) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0000fabc) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0000fabc) list_single_graphic_heading_pane_t

0x55fe,	// (0x00005ac2) list_single_large_graphic_pane_g1_ParamLimits

0x55fe,	// (0x00005ac2) list_single_large_graphic_pane_g1

0x20e6,	// (0x000025aa) list_single_large_graphic_pane_g2_ParamLimits

0x20e6,	// (0x000025aa) list_single_large_graphic_pane_g2

0x3185,	// (0x00003649) list_single_large_graphic_pane_g3_ParamLimits

0x3185,	// (0x00003649) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0000fac1) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0000fac1) list_single_large_graphic_pane_g

0x3a39,	// (0x00003efd) wait_border_pane_g2_copy1

0xb443,	// (0x0000b907) list_single_large_graphic_pane_g4_cp2

0x560a,	// (0x00005ace) list_single_large_graphic_pane_t1_ParamLimits

0x560a,	// (0x00005ace) list_single_large_graphic_pane_t1

0xb44b,	// (0x0000b90f) list_double_pane_g1_ParamLimits

0xb44b,	// (0x0000b90f) list_double_pane_g1

0xb457,	// (0x0000b91b) list_double_pane_g2_ParamLimits

0xb457,	// (0x0000b91b) list_double_pane_g2

0x0001,

0xf604,	// (0x0000fac8) list_double_pane_g_ParamLimits

0xf604,	// (0x0000fac8) list_double_pane_g

0xb463,	// (0x0000b927) list_double_pane_t1_ParamLimits

0xb463,	// (0x0000b927) list_double_pane_t1

0xb479,	// (0x0000b93d) list_double_pane_t2_ParamLimits

0xb479,	// (0x0000b93d) list_double_pane_t2

0x0001,

0xf609,	// (0x0000facd) list_double_pane_t_ParamLimits

0xf609,	// (0x0000facd) list_double_pane_t

0xb48b,	// (0x0000b94f) list_double2_pane_g1_ParamLimits

0xb48b,	// (0x0000b94f) list_double2_pane_g1

0xb49c,	// (0x0000b960) list_double2_pane_g2_ParamLimits

0xb49c,	// (0x0000b960) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0000fad2) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0000fad2) list_double2_pane_g

0xb4a8,	// (0x0000b96c) list_double2_pane_t1_ParamLimits

0xb4a8,	// (0x0000b96c) list_double2_pane_t1

0xb4be,	// (0x0000b982) list_double2_pane_t2_ParamLimits

0xb4be,	// (0x0000b982) list_double2_pane_t2

0x0001,

0xf613,	// (0x0000fad7) list_double2_pane_t_ParamLimits

0xf613,	// (0x0000fad7) list_double2_pane_t

0xb44b,	// (0x0000b90f) list_double_number_pane_g1_ParamLimits

0xb44b,	// (0x0000b90f) list_double_number_pane_g1

0xb457,	// (0x0000b91b) list_double_number_pane_g2_ParamLimits

0xb457,	// (0x0000b91b) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0000fac8) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0000fac8) list_double_number_pane_g

0xb4d0,	// (0x0000b994) list_double_number_pane_t1_ParamLimits

0xb4d0,	// (0x0000b994) list_double_number_pane_t1

0xb4e2,	// (0x0000b9a6) list_double_number_pane_t2_ParamLimits

0xb4e2,	// (0x0000b9a6) list_double_number_pane_t2

0xb4f8,	// (0x0000b9bc) list_double_number_pane_t3_ParamLimits

0xb4f8,	// (0x0000b9bc) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0000fadc) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0000fadc) list_double_number_pane_t

0xb50a,	// (0x0000b9ce) list_double_graphic_pane_g1_ParamLimits

0xb50a,	// (0x0000b9ce) list_double_graphic_pane_g1

0xb516,	// (0x0000b9da) list_double_graphic_pane_g2_ParamLimits

0xb516,	// (0x0000b9da) list_double_graphic_pane_g2

0xb525,	// (0x0000b9e9) list_double_graphic_pane_g3_ParamLimits

0xb525,	// (0x0000b9e9) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0000fae3) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0000fae3) list_double_graphic_pane_g

0xb53d,	// (0x0000ba01) list_double_graphic_pane_t1_ParamLimits

0xb53d,	// (0x0000ba01) list_double_graphic_pane_t1

0xb553,	// (0x0000ba17) list_double_graphic_pane_t2_ParamLimits

0xb553,	// (0x0000ba17) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0000faec) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0000faec) list_double_graphic_pane_t

0x40b5,	// (0x00004579) list_double2_graphic_pane_g1_ParamLimits

0x40b5,	// (0x00004579) list_double2_graphic_pane_g1

0x1f93,	// (0x00002457) list_double2_graphic_pane_g2_ParamLimits

0x1f93,	// (0x00002457) list_double2_graphic_pane_g2

0xb49c,	// (0x0000b960) list_double2_graphic_pane_g3_ParamLimits

0xb49c,	// (0x0000b960) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0000faf1) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0000faf1) list_double2_graphic_pane_g

0xb565,	// (0x0000ba29) list_double2_graphic_pane_t1_ParamLimits

0xb565,	// (0x0000ba29) list_double2_graphic_pane_t1

0xb57b,	// (0x0000ba3f) list_double2_graphic_pane_t2_ParamLimits

0xb57b,	// (0x0000ba3f) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0000faf8) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0000faf8) list_double2_graphic_pane_t

0xb58d,	// (0x0000ba51) list_double_large_graphic_pane_g1_ParamLimits

0xb58d,	// (0x0000ba51) list_double_large_graphic_pane_g1

0xb5b8,	// (0x0000ba7c) list_double_large_graphic_pane_g2_ParamLimits

0xb5b8,	// (0x0000ba7c) list_double_large_graphic_pane_g2

0xb457,	// (0x0000b91b) list_double_large_graphic_pane_g3_ParamLimits

0xb457,	// (0x0000b91b) list_double_large_graphic_pane_g3

0xb5c9,	// (0x0000ba8d) list_double_large_graphic_pane_g4_ParamLimits

0xb5c9,	// (0x0000ba8d) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0000fafd) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0000fafd) list_double_large_graphic_pane_g

0xb5dc,	// (0x0000baa0) list_double_large_graphic_pane_t1_ParamLimits

0xb5dc,	// (0x0000baa0) list_double_large_graphic_pane_t1

0xb5f5,	// (0x0000bab9) list_double_large_graphic_pane_t2_ParamLimits

0xb5f5,	// (0x0000bab9) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0000fb08) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0000fb08) list_double_large_graphic_pane_t

0xb607,	// (0x0000bacb) list_double2_large_graphic_pane_g1_ParamLimits

0xb607,	// (0x0000bacb) list_double2_large_graphic_pane_g1

0xb48b,	// (0x0000b94f) list_double2_large_graphic_pane_g2_ParamLimits

0xb48b,	// (0x0000b94f) list_double2_large_graphic_pane_g2

0xb49c,	// (0x0000b960) list_double2_large_graphic_pane_g3_ParamLimits

0xb49c,	// (0x0000b960) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0000fb0d) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0000fb0d) list_double2_large_graphic_pane_g

0xb613,	// (0x0000bad7) list_double2_large_graphic_pane_t1_ParamLimits

0xb613,	// (0x0000bad7) list_double2_large_graphic_pane_t1

0xb629,	// (0x0000baed) list_double2_large_graphic_pane_t2_ParamLimits

0xb629,	// (0x0000baed) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0000fb14) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0000fb14) list_double2_large_graphic_pane_t

0xb63b,	// (0x0000baff) list_double_heading_pane_g1_ParamLimits

0xb63b,	// (0x0000baff) list_double_heading_pane_g1

0xb64c,	// (0x0000bb10) list_double_heading_pane_g2_ParamLimits

0xb64c,	// (0x0000bb10) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0000fb19) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0000fb19) list_double_heading_pane_g

0xb658,	// (0x0000bb1c) list_double_heading_pane_t1_ParamLimits

0xb658,	// (0x0000bb1c) list_double_heading_pane_t1

0xb66e,	// (0x0000bb32) list_double_heading_pane_t2_ParamLimits

0xb66e,	// (0x0000bb32) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0000fb1e) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0000fb1e) list_double_heading_pane_t

0x0b34,	// (0x00000ff8) list_double_graphic_heading_pane_g1_ParamLimits

0x0b34,	// (0x00000ff8) list_double_graphic_heading_pane_g1

0xb63b,	// (0x0000baff) list_double_graphic_heading_pane_g2_ParamLimits

0xb63b,	// (0x0000baff) list_double_graphic_heading_pane_g2

0xb64c,	// (0x0000bb10) list_double_graphic_heading_pane_g3_ParamLimits

0xb64c,	// (0x0000bb10) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0000fb23) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0000fb23) list_double_graphic_heading_pane_g

0xb680,	// (0x0000bb44) list_double_graphic_heading_pane_t1_ParamLimits

0xb680,	// (0x0000bb44) list_double_graphic_heading_pane_t1

0xb696,	// (0x0000bb5a) list_double_graphic_heading_pane_t2_ParamLimits

0xb696,	// (0x0000bb5a) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0000fb2a) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0000fb2a) list_double_graphic_heading_pane_t

0xb5b8,	// (0x0000ba7c) list_double_time_pane_g1_ParamLimits

0xb5b8,	// (0x0000ba7c) list_double_time_pane_g1

0xb457,	// (0x0000b91b) list_double_time_pane_g2_ParamLimits

0xb457,	// (0x0000b91b) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0000fb2f) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0000fb2f) list_double_time_pane_g

0xb6a8,	// (0x0000bb6c) list_double_time_pane_t1_ParamLimits

0xb6a8,	// (0x0000bb6c) list_double_time_pane_t1

0xb6be,	// (0x0000bb82) list_double_time_pane_t2_ParamLimits

0xb6be,	// (0x0000bb82) list_double_time_pane_t2

0xb6d0,	// (0x0000bb94) list_double_time_pane_t3_ParamLimits

0xb6d0,	// (0x0000bb94) list_double_time_pane_t3

0xb6e2,	// (0x0000bba6) list_double_time_pane_t4_ParamLimits

0xb6e2,	// (0x0000bba6) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0000fb34) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0000fb34) list_double_time_pane_t

0x1f93,	// (0x00002457) list_setting_pane_g1_ParamLimits

0x1f93,	// (0x00002457) list_setting_pane_g1

0xb49c,	// (0x0000b960) list_setting_pane_g2_ParamLimits

0xb49c,	// (0x0000b960) list_setting_pane_g2

0x0001,

0xf679,	// (0x0000fb3d) list_setting_pane_g_ParamLimits

0xf679,	// (0x0000fb3d) list_setting_pane_g

0xb6f4,	// (0x0000bbb8) list_setting_pane_t1_ParamLimits

0xb6f4,	// (0x0000bbb8) list_setting_pane_t1

0xb70b,	// (0x0000bbcf) list_setting_pane_t2_ParamLimits

0xb70b,	// (0x0000bbcf) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0000fb42) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0000fb42) list_setting_pane_t

0xb74a,	// (0x0000bc0e) set_value_pane_cp_ParamLimits

0xb74a,	// (0x0000bc0e) set_value_pane_cp

0x1f93,	// (0x00002457) list_setting_number_pane_g1_ParamLimits

0x1f93,	// (0x00002457) list_setting_number_pane_g1

0xb49c,	// (0x0000b960) list_setting_number_pane_g2_ParamLimits

0xb49c,	// (0x0000b960) list_setting_number_pane_g2

0x0001,

0xf679,	// (0x0000fb3d) list_setting_number_pane_g_ParamLimits

0xf679,	// (0x0000fb3d) list_setting_number_pane_g

0xb758,	// (0x0000bc1c) list_setting_number_pane_t1_ParamLimits

0xb758,	// (0x0000bc1c) list_setting_number_pane_t1

0xb76c,	// (0x0000bc30) list_setting_number_pane_t2_ParamLimits

0xb76c,	// (0x0000bc30) list_setting_number_pane_t2

0xb783,	// (0x0000bc47) list_setting_number_pane_t3_ParamLimits

0xb783,	// (0x0000bc47) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0000fb49) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0000fb49) list_setting_number_pane_t

0xb74a,	// (0x0000bc0e) set_value_pane_ParamLimits

0xb74a,	// (0x0000bc0e) set_value_pane

0x0dce,	// (0x00001292) bg_set_opt_pane_ParamLimits

0x0dce,	// (0x00001292) bg_set_opt_pane

0x0def,	// (0x000012b3) set_value_pane_t1

0x0dfd,	// (0x000012c1) slider_set_pane_cp3

0x0e06,	// (0x000012ca) volume_small_pane_cp

0x0e0f,	// (0x000012d3) list_form_gen_pane

0x0e18,	// (0x000012dc) scroll_pane_cp8

0xb7c6,	// (0x0000bc8a) form_field_data_pane_ParamLimits

0xb7c6,	// (0x0000bc8a) form_field_data_pane

0xb7e1,	// (0x0000bca5) form_field_data_wide_pane_ParamLimits

0xb7e1,	// (0x0000bca5) form_field_data_wide_pane

0xb805,	// (0x0000bcc9) form_field_popup_pane_ParamLimits

0xb805,	// (0x0000bcc9) form_field_popup_pane

0x0ea0,	// (0x00001364) form_field_popup_wide_pane_ParamLimits

0x0ea0,	// (0x00001364) form_field_popup_wide_pane

0x0ec1,	// (0x00001385) form_field_slider_pane_ParamLimits

0x0ec1,	// (0x00001385) form_field_slider_pane

0x0ed4,	// (0x00001398) form_field_slider_wide_pane_ParamLimits

0x0ed4,	// (0x00001398) form_field_slider_wide_pane

0x0ee7,	// (0x000013ab) data_form_pane

0xb831,	// (0x0000bcf5) form_field_data_pane_t1

0x0f17,	// (0x000013db) input_focus_pane

0x0f25,	// (0x000013e9) data_form_wide_pane

0x0f5d,	// (0x00001421) form_field_data_wide_pane_t1

0x06ed,	// (0x00000bb1) input_focus_pane_cp6

0xb84b,	// (0x0000bd0f) form_field_popup_pane_t1

0x0f17,	// (0x000013db) input_focus_pane_cp7

0x0f99,	// (0x0000145d) list_form_pane

0x0fad,	// (0x00001471) form_field_popup_wide_pane_t1

0x0f17,	// (0x000013db) input_focus_pane_cp8

0x0fc2,	// (0x00001486) list_form_wide_pane

0xb86d,	// (0x0000bd31) form_field_slider_pane_t1_ParamLimits

0xb86d,	// (0x0000bd31) form_field_slider_pane_t1

0xb885,	// (0x0000bd49) form_field_slider_pane_t2_ParamLimits

0xb885,	// (0x0000bd49) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0000fb59) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0000fb59) form_field_slider_pane_t

0x0371,	// (0x00000835) input_focus_pane_cp9_ParamLimits

0x0371,	// (0x00000835) input_focus_pane_cp9

0xb89a,	// (0x0000bd5e) slider_cont_pane_ParamLimits

0xb89a,	// (0x0000bd5e) slider_cont_pane

0x1013,	// (0x000014d7) form_field_slider_wide_pane_t1_ParamLimits

0x1013,	// (0x000014d7) form_field_slider_wide_pane_t1

0x1025,	// (0x000014e9) form_field_slider_wide_pane_t2_ParamLimits

0x1025,	// (0x000014e9) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x0000fb5e) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x0000fb5e) form_field_slider_wide_pane_t

0x0371,	// (0x00000835) input_focus_pane_cp10_ParamLimits

0x0371,	// (0x00000835) input_focus_pane_cp10

0xb8ae,	// (0x0000bd72) slider_cont_pane_cp1_ParamLimits

0xb8ae,	// (0x0000bd72) slider_cont_pane_cp1

0xb8c2,	// (0x0000bd86) slider_form_pane_cp

0x1053,	// (0x00001517) input_focus_pane_g1

0x105b,	// (0x0000151f) input_focus_pane_g2

0x1063,	// (0x00001527) input_focus_pane_g3

0x106b,	// (0x0000152f) input_focus_pane_g4

0x1073,	// (0x00001537) input_focus_pane_g5

0x107b,	// (0x0000153f) input_focus_pane_g6

0x1083,	// (0x00001547) input_focus_pane_g7

0x108b,	// (0x0000154f) input_focus_pane_g8

0x1093,	// (0x00001557) input_focus_pane_g9

0xf316,	// (0x0000f7da) input_focus_pane_g10

0x0009,

0xf69f,	// (0x0000fb63) input_focus_pane_g

0x3a42,	// (0x00003f06) wait_border_pane_g3_copy1

0xb8ca,	// (0x0000bd8e) data_form_pane_t1

0xf316,	// (0x0000f7da) wait_anim_pane_g1_copy1

0xd0d2,	// (0x0000d596) data_form_wide_pane_t1

0x10ba,	// (0x0000157e) list_form_graphic_pane_cp_ParamLimits

0x10ba,	// (0x0000157e) list_form_graphic_pane_cp

0x4c37,	// (0x000050fb) slider_form_pane_g1

0x4c40,	// (0x00005104) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0000fe53) slider_form_pane_g

0xb8e6,	// (0x0000bdaa) list_form_graphic_pane_ParamLimits

0xb8e6,	// (0x0000bdaa) list_form_graphic_pane

0x10cc,	// (0x00001590) list_form_graphic_pane_g1

0x10d4,	// (0x00001598) list_form_graphic_pane_t1_ParamLimits

0x10d4,	// (0x00001598) list_form_graphic_pane_t1

0x004b,	// (0x0000050f) list_highlight_pane_cp5_ParamLimits

0x004b,	// (0x0000050f) list_highlight_pane_cp5

0xb8f7,	// (0x0000bdbb) find_pane_g1

0x10f2,	// (0x000015b6) input_find_pane

0xb900,	// (0x0000bdc4) input_find_pane_g1_ParamLimits

0xb900,	// (0x0000bdc4) input_find_pane_g1

0xb90c,	// (0x0000bdd0) input_find_pane_t1_ParamLimits

0xb90c,	// (0x0000bdd0) input_find_pane_t1

0xb921,	// (0x0000bde5) input_find_pane_t2_ParamLimits

0xb921,	// (0x0000bde5) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0000fb78) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0000fb78) input_find_pane_t

0x1131,	// (0x000015f5) input_focus_pane_cp5_ParamLimits

0x1131,	// (0x000015f5) input_focus_pane_cp5

0xb942,	// (0x0000be06) bg_popup_window_pane_cp2_ParamLimits

0xb942,	// (0x0000be06) bg_popup_window_pane_cp2

0xb94f,	// (0x0000be13) listscroll_menu_pane_ParamLimits

0xb94f,	// (0x0000be13) listscroll_menu_pane

0xb95b,	// (0x0000be1f) popup_submenu_window_ParamLimits

0xb95b,	// (0x0000be1f) popup_submenu_window

0x1194,	// (0x00001658) find_popup_pane_g1

0x119c,	// (0x00001660) input_popup_find_pane_cp

0x1131,	// (0x000015f5) input_focus_pane_cp4_ParamLimits

0x1131,	// (0x000015f5) input_focus_pane_cp4

0x11b4,	// (0x00001678) input_popup_find_pane_t1_ParamLimits

0x11b4,	// (0x00001678) input_popup_find_pane_t1

0xf48f,	// (0x0000f953) bg_popup_sub_pane_cp

0x11e2,	// (0x000016a6) listscroll_popup_sub_pane

0x11ea,	// (0x000016ae) list_submenu_pane_ParamLimits

0x11ea,	// (0x000016ae) list_submenu_pane

0x11fb,	// (0x000016bf) scroll_pane_cp4

0x1203,	// (0x000016c7) list_single_popup_submenu_pane_ParamLimits

0x1203,	// (0x000016c7) list_single_popup_submenu_pane

0x1218,	// (0x000016dc) list_single_popup_submenu_pane_g1

0x1220,	// (0x000016e4) list_single_popup_submenu_pane_t1_ParamLimits

0x1220,	// (0x000016e4) list_single_popup_submenu_pane_t1

0x0371,	// (0x00000835) bg_active_tab_pane_cp1_ParamLimits

0x0371,	// (0x00000835) bg_active_tab_pane_cp1

0xb999,	// (0x0000be5d) tabs_2_active_pane_g1

0xb9a1,	// (0x0000be65) tabs_2_active_pane_t1

0x0371,	// (0x00000835) bg_passive_tab_pane_cp1_ParamLimits

0x0371,	// (0x00000835) bg_passive_tab_pane_cp1

0xb999,	// (0x0000be5d) tabs_2_passive_pane_g1

0xb9a1,	// (0x0000be65) tabs_2_passive_pane_t1

0x004b,	// (0x0000050f) bg_active_tab_pane_cp4

0xb9b3,	// (0x0000be77) tabs_2_long_active_pane_t1

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp4

0x334e,	// (0x00003812) list_single_midp_graphic_pane_g4_ParamLimits

0x004b,	// (0x0000050f) bg_active_tab_pane_cp5

0xb9c6,	// (0x0000be8a) tabs_3_long_active_pane_t1

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp5

0x334e,	// (0x00003812) list_single_midp_graphic_pane_g4

0x004b,	// (0x0000050f) bg_popup_window_pane_cp13_ParamLimits

0x004b,	// (0x0000050f) bg_popup_window_pane_cp13

0x1297,	// (0x0000175b) listscroll_popup_fast_pane_ParamLimits

0x1297,	// (0x0000175b) listscroll_popup_fast_pane

0x12a6,	// (0x0000176a) grid_popup_fast_pane_ParamLimits

0x12a6,	// (0x0000176a) grid_popup_fast_pane

0x12b8,	// (0x0000177c) scroll_pane_cp9_ParamLimits

0x12b8,	// (0x0000177c) scroll_pane_cp9

0x6dd3,	// (0x00007297) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6dd3,	// (0x00007297) list_single_graphic_hl_pane_t1_cp2

0x12dc,	// (0x000017a0) input_focus_pane_cp20_ParamLimits

0x12dc,	// (0x000017a0) input_focus_pane_cp20

0x12ea,	// (0x000017ae) query_popup_data_pane_t1_ParamLimits

0x12ea,	// (0x000017ae) query_popup_data_pane_t1

0x12fd,	// (0x000017c1) query_popup_data_pane_t2_ParamLimits

0x12fd,	// (0x000017c1) query_popup_data_pane_t2

0x1343,	// (0x00001807) query_popup_data_pane_t3_ParamLimits

0x1343,	// (0x00001807) query_popup_data_pane_t3

0x1384,	// (0x00001848) query_popup_data_pane_t4_ParamLimits

0x1384,	// (0x00001848) query_popup_data_pane_t4

0x13c0,	// (0x00001884) query_popup_data_pane_t5_ParamLimits

0x13c0,	// (0x00001884) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x0000fb7d) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x0000fb7d) query_popup_data_pane_t

0x1053,	// (0x00001517) bg_set_opt_pane_g1

0x105b,	// (0x0000151f) bg_set_opt_pane_g2

0x1063,	// (0x00001527) bg_set_opt_pane_g3

0x106b,	// (0x0000152f) bg_set_opt_pane_g4

0x1073,	// (0x00001537) bg_set_opt_pane_g5

0x107b,	// (0x0000153f) bg_set_opt_pane_g6

0x1083,	// (0x00001547) bg_set_opt_pane_g7

0x108b,	// (0x0000154f) bg_set_opt_pane_g8

0x1093,	// (0x00001557) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0000fb88) bg_set_opt_pane_g

0x1cc6,	// (0x0000218a) control_top_pane_stacon_ParamLimits

0x1cc6,	// (0x0000218a) control_top_pane_stacon

0x1d19,	// (0x000021dd) signal_pane_stacon_ParamLimits

0x1d19,	// (0x000021dd) signal_pane_stacon

0x1d3e,	// (0x00002202) stacon_top_pane_g1_ParamLimits

0x1d3e,	// (0x00002202) stacon_top_pane_g1

0x1d60,	// (0x00002224) title_pane_stacon_ParamLimits

0x1d60,	// (0x00002224) title_pane_stacon

0x1d8a,	// (0x0000224e) uni_indicator_pane_stacon_ParamLimits

0x1d8a,	// (0x0000224e) uni_indicator_pane_stacon

0x1da2,	// (0x00002266) battery_pane_stacon_ParamLimits

0x1da2,	// (0x00002266) battery_pane_stacon

0x1de6,	// (0x000022aa) control_bottom_pane_stacon_ParamLimits

0x1de6,	// (0x000022aa) control_bottom_pane_stacon

0x1e09,	// (0x000022cd) navi_pane_stacon_ParamLimits

0x1e09,	// (0x000022cd) navi_pane_stacon

0x1e2c,	// (0x000022f0) stacon_bottom_pane_g1_ParamLimits

0x1e2c,	// (0x000022f0) stacon_bottom_pane_g1

0x13f7,	// (0x000018bb) aid_levels_signal_lsc_ParamLimits

0x13f7,	// (0x000018bb) aid_levels_signal_lsc

0x140e,	// (0x000018d2) signal_pane_stacon_g1_ParamLimits

0x140e,	// (0x000018d2) signal_pane_stacon_g1

0x1422,	// (0x000018e6) signal_pane_stacon_g2_ParamLimits

0x1422,	// (0x000018e6) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0000fb9b) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0000fb9b) signal_pane_stacon_g

0x1464,	// (0x00001928) title_pane_stacon_t1_ParamLimits

0x1464,	// (0x00001928) title_pane_stacon_t1

0x1489,	// (0x0000194d) uni_indicator_pane_stacon_g1

0x1493,	// (0x00001957) uni_indicator_pane_stacon_g2

0x149d,	// (0x00001961) uni_indicator_pane_stacon_g3

0x14a7,	// (0x0000196b) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0000fba7) uni_indicator_pane_stacon_g

0x14b1,	// (0x00001975) control_top_pane_stacon_g1

0x14b9,	// (0x0000197d) control_top_pane_stacon_t1_ParamLimits

0x14b9,	// (0x0000197d) control_top_pane_stacon_t1

0x14f0,	// (0x000019b4) aid_levels_battery_lsc_ParamLimits

0x14f0,	// (0x000019b4) aid_levels_battery_lsc

0x1508,	// (0x000019cc) battery_pane_stacon_g1_ParamLimits

0x1508,	// (0x000019cc) battery_pane_stacon_g1

0x151b,	// (0x000019df) battery_pane_stacon_g2_ParamLimits

0x151b,	// (0x000019df) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x0000fbb0) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x0000fbb0) battery_pane_stacon_g

0x1559,	// (0x00001a1d) navi_icon_pane_stacon

0x156d,	// (0x00001a31) navi_navi_pane_stacon

0x1559,	// (0x00001a1d) navi_text_pane_stacon

0x14b1,	// (0x00001975) control_bottom_pane_stacon_g1

0x1583,	// (0x00001a47) control_bottom_pane_stacon_t1_ParamLimits

0x1583,	// (0x00001a47) control_bottom_pane_stacon_t1

0xb9d8,	// (0x0000be9c) grid_app_pane_ParamLimits

0xb9d8,	// (0x0000be9c) grid_app_pane

0xba10,	// (0x0000bed4) scroll_pane_cp15_ParamLimits

0xba10,	// (0x0000bed4) scroll_pane_cp15

0xba29,	// (0x0000beed) cell_app_pane_ParamLimits

0xba29,	// (0x0000beed) cell_app_pane

0xba6a,	// (0x0000bf2e) cell_app_pane_g1_ParamLimits

0xba6a,	// (0x0000bf2e) cell_app_pane_g1

0x165d,	// (0x00001b21) cell_app_pane_g2_ParamLimits

0x165d,	// (0x00001b21) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x0000fbb5) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x0000fbb5) cell_app_pane_g

0x1669,	// (0x00001b2d) cell_app_pane_t1_ParamLimits

0x1669,	// (0x00001b2d) cell_app_pane_t1

0x167b,	// (0x00001b3f) grid_highlight_pane_ParamLimits

0x167b,	// (0x00001b3f) grid_highlight_pane

0x1053,	// (0x00001517) cell_highlight_pane_g1

0x105b,	// (0x0000151f) cell_highlight_pane_g2

0x1063,	// (0x00001527) cell_highlight_pane_g3

0x106b,	// (0x0000152f) cell_highlight_pane_g4

0x1073,	// (0x00001537) cell_highlight_pane_g5

0x107b,	// (0x0000153f) cell_highlight_pane_g6

0x1083,	// (0x00001547) cell_highlight_pane_g7

0x108b,	// (0x0000154f) cell_highlight_pane_g8

0x1093,	// (0x00001557) cell_highlight_pane_g9

0xf316,	// (0x0000f7da) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x0000fb63) cell_highlight_pane_g

0x169f,	// (0x00001b63) bg_scroll_pane

0x16be,	// (0x00001b82) scroll_handle_pane

0x170f,	// (0x00001bd3) scroll_bg_pane_g1

0x1724,	// (0x00001be8) scroll_bg_pane_g2

0x173c,	// (0x00001c00) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x0000fbba) scroll_bg_pane_g

0x1751,	// (0x00001c15) scroll_handle_focus_pane_ParamLimits

0x1751,	// (0x00001c15) scroll_handle_focus_pane

0x170f,	// (0x00001bd3) scroll_handle_pane_g1

0x175e,	// (0x00001c22) scroll_handle_pane_g2

0x173c,	// (0x00001c00) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x0000fbc1) scroll_handle_pane_g

0x1131,	// (0x000015f5) bg_popup_sub_pane_cp21_ParamLimits

0x1131,	// (0x000015f5) bg_popup_sub_pane_cp21

0x1772,	// (0x00001c36) popup_fep_japan_predictive_window_t1_ParamLimits

0x1772,	// (0x00001c36) popup_fep_japan_predictive_window_t1

0x1789,	// (0x00001c4d) popup_fep_japan_predictive_window_t2_ParamLimits

0x1789,	// (0x00001c4d) popup_fep_japan_predictive_window_t2

0x17bc,	// (0x00001c80) popup_fep_japan_predictive_window_t3_ParamLimits

0x17bc,	// (0x00001c80) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x0000fbc8) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x0000fbc8) popup_fep_japan_predictive_window_t

0xf48f,	// (0x0000f953) bg_popup_sub_pane_cp23

0x17f3,	// (0x00001cb7) listscroll_japin_cand_pane

0x17fb,	// (0x00001cbf) popup_fep_japan_candidate_window_t1

0x1809,	// (0x00001ccd) candidate_pane_ParamLimits

0x1809,	// (0x00001ccd) candidate_pane

0x181b,	// (0x00001cdf) scroll_pane_cp30

0x1825,	// (0x00001ce9) list_single_popup_jap_candidate_pane_ParamLimits

0x1825,	// (0x00001ce9) list_single_popup_jap_candidate_pane

0xf48f,	// (0x0000f953) list_highlight_pane_cp30

0x1839,	// (0x00001cfd) list_single_popup_jap_candidate_pane_t1

0xba97,	// (0x0000bf5b) level_1_signal

0xbaa9,	// (0x0000bf6d) level_2_signal

0xbabc,	// (0x0000bf80) level_3_signal

0xbacf,	// (0x0000bf93) level_4_signal

0xbae2,	// (0x0000bfa6) level_5_signal

0xbaf5,	// (0x0000bfb9) level_6_signal

0xbb08,	// (0x0000bfcc) level_7_signal

0xba97,	// (0x0000bf5b) level_1_battery

0xbaa9,	// (0x0000bf6d) level_2_battery

0xbabc,	// (0x0000bf80) level_3_battery

0xbacf,	// (0x0000bf93) level_4_battery

0xbae2,	// (0x0000bfa6) level_5_battery

0xbaf5,	// (0x0000bfb9) level_6_battery

0xbb08,	// (0x0000bfcc) level_7_battery

0x18da,	// (0x00001d9e) list_menu_pane_ParamLimits

0x18da,	// (0x00001d9e) list_menu_pane

0x18f0,	// (0x00001db4) scroll_pane_cp25_ParamLimits

0x18f0,	// (0x00001db4) scroll_pane_cp25

0x1909,	// (0x00001dcd) list_double2_graphic_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double2_graphic_pane_cp2

0x1909,	// (0x00001dcd) list_double2_large_graphic_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double2_large_graphic_pane_cp2

0x1909,	// (0x00001dcd) list_double2_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double2_pane_cp2

0x1909,	// (0x00001dcd) list_double_graphic_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double_graphic_pane_cp2

0x1909,	// (0x00001dcd) list_double_large_graphic_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double_large_graphic_pane_cp2

0x1909,	// (0x00001dcd) list_double_number_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double_number_pane_cp2

0x1909,	// (0x00001dcd) list_double_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double_pane_cp2

0xbb1b,	// (0x0000bfdf) list_single_2graphic_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_2graphic_pane_cp2

0xbb1b,	// (0x0000bfdf) list_single_graphic_heading_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_graphic_heading_pane_cp2

0xbb1b,	// (0x0000bfdf) list_single_graphic_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_graphic_pane_cp2

0xbb1b,	// (0x0000bfdf) list_single_heading_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_heading_pane_cp2

0x194c,	// (0x00001e10) list_single_large_graphic_pane_cp2_ParamLimits

0x194c,	// (0x00001e10) list_single_large_graphic_pane_cp2

0xbb1b,	// (0x0000bfdf) list_single_number_heading_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_number_heading_pane_cp2

0xbb1b,	// (0x0000bfdf) list_single_number_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_number_pane_cp2

0xbb1b,	// (0x0000bfdf) list_single_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_pane_cp2

0x1a22,	// (0x00001ee6) bg_popup_sub_pane_cp22

0x1a47,	// (0x00001f0b) popup_side_volume_key_window_g1

0x1a71,	// (0x00001f35) popup_side_volume_key_window_t1

0x1a8f,	// (0x00001f53) volume_small_pane_cp1

0x0371,	// (0x00000835) bg_popup_sub_pane_cp24_ParamLimits

0x0371,	// (0x00000835) bg_popup_sub_pane_cp24

0x1a97,	// (0x00001f5b) fep_china_uni_candidate_pane_ParamLimits

0x1a97,	// (0x00001f5b) fep_china_uni_candidate_pane

0x1aab,	// (0x00001f6f) fep_china_uni_entry_pane

0x1abb,	// (0x00001f7f) popup_fep_china_uni_window_g1

0x1ad7,	// (0x00001f9b) fep_china_uni_entry_pane_g1

0x1ae1,	// (0x00001fa5) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0000fbf9) fep_china_uni_entry_pane_g

0x1aeb,	// (0x00001faf) fep_entry_item_pane

0x1af5,	// (0x00001fb9) fep_candidate_item_pane

0x1afd,	// (0x00001fc1) fep_china_uni_candidate_pane_g1

0x1b07,	// (0x00001fcb) fep_china_uni_candidate_pane_g2

0x1b0f,	// (0x00001fd3) fep_china_uni_candidate_pane_g3

0x1b17,	// (0x00001fdb) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0000fbfe) fep_china_uni_candidate_pane_g

0xf316,	// (0x0000f7da) fep_entry_item_pane_g1

0x1b21,	// (0x00001fe5) fep_entry_item_pane_t1_ParamLimits

0x1b21,	// (0x00001fe5) fep_entry_item_pane_t1

0x1b37,	// (0x00001ffb) fep_candidate_item_pane_t1_ParamLimits

0x1b37,	// (0x00001ffb) fep_candidate_item_pane_t1

0x1b4c,	// (0x00002010) fep_candidate_item_pane_t2_ParamLimits

0x1b4c,	// (0x00002010) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0000fc07) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0000fc07) fep_candidate_item_pane_t

0x004b,	// (0x0000050f) list_highlight_pane_cp31_ParamLimits

0x004b,	// (0x0000050f) list_highlight_pane_cp31

0x1b5e,	// (0x00002022) level_1_signal_lsc

0x1b67,	// (0x0000202b) level_2_signal_lsc

0x1b70,	// (0x00002034) level_3_signal_lsc

0x1b79,	// (0x0000203d) level_4_signal_lsc

0x1b82,	// (0x00002046) level_5_signal_lsc

0x1b8b,	// (0x0000204f) level_6_signal_lsc

0x1b94,	// (0x00002058) level_7_signal_lsc

0x1b94,	// (0x00002058) level_1_battery_lsc

0x1b9d,	// (0x00002061) level_2_battery_lsc

0x1ba6,	// (0x0000206a) level_3_battery_lsc

0x1baf,	// (0x00002073) level_4_battery_lsc

0x1bb8,	// (0x0000207c) level_5_battery_lsc

0x1bc1,	// (0x00002085) level_6_battery_lsc

0x1b5e,	// (0x00002022) level_7_battery_lsc

0x1bca,	// (0x0000208e) scroll_handle_focus_pane_g1

0x1bd3,	// (0x00002097) scroll_handle_focus_pane_g2

0x1bdc,	// (0x000020a0) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0000fc0c) scroll_handle_focus_pane_g

0xbbaa,	// (0x0000c06e) list_single_2graphic_pane_g1_ParamLimits

0xbbaa,	// (0x0000c06e) list_single_2graphic_pane_g1

0xb420,	// (0x0000b8e4) list_single_2graphic_pane_g2_ParamLimits

0xb420,	// (0x0000b8e4) list_single_2graphic_pane_g2

0x3185,	// (0x00003649) list_single_2graphic_pane_g3_ParamLimits

0x3185,	// (0x00003649) list_single_2graphic_pane_g3

0xbbb6,	// (0x0000c07a) list_single_2graphic_pane_g4_ParamLimits

0xbbb6,	// (0x0000c07a) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0000fc13) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0000fc13) list_single_2graphic_pane_g

0xbbc7,	// (0x0000c08b) list_single_2graphic_pane_t1_ParamLimits

0xbbc7,	// (0x0000c08b) list_single_2graphic_pane_t1

0xbbf5,	// (0x0000c0b9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbbf5,	// (0x0000c0b9) list_double2_graphic_large_graphic_pane_g1

0xb48b,	// (0x0000b94f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb48b,	// (0x0000b94f) list_double2_graphic_large_graphic_pane_g2

0xb49c,	// (0x0000b960) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb49c,	// (0x0000b960) list_double2_graphic_large_graphic_pane_g3

0x334e,	// (0x00003812) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x334e,	// (0x00003812) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0000fc1c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0000fc1c) list_double2_graphic_large_graphic_pane_g

0xbc07,	// (0x0000c0cb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbc07,	// (0x0000c0cb) list_double2_graphic_large_graphic_pane_t1

0xbc1d,	// (0x0000c0e1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbc1d,	// (0x0000c0e1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0000fc25) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0000fc25) list_double2_graphic_large_graphic_pane_t

0x1eee,	// (0x000023b2) popup_fast_swap_window_ParamLimits

0x1eee,	// (0x000023b2) popup_fast_swap_window

0x1f0c,	// (0x000023d0) popup_side_volume_key_window

0x1f2a,	// (0x000023ee) stacon_top_pane

0x1f34,	// (0x000023f8) status_pane_ParamLimits

0x1f34,	// (0x000023f8) status_pane

0x1f2a,	// (0x000023ee) status_small_pane

0xf48f,	// (0x0000f953) control_pane

0xf48f,	// (0x0000f953) stacon_bottom_pane

0x0e18,	// (0x000012dc) scroll_pane_cp121

0x0e0f,	// (0x000012d3) set_content_pane

0xbc2f,	// (0x0000c0f3) bg_active_tab_pane_g1_cp1

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp1

0xbc38,	// (0x0000c0fc) bg_active_tab_pane_g3_cp1

0xbc2f,	// (0x0000c0f3) bg_passive_tab_pane_g1_cp1

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp1

0xbc38,	// (0x0000c0fc) bg_passive_tab_pane_g3_cp1

0xbc41,	// (0x0000c105) bg_active_tab_pane_g1_cp2

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp2

0xbc4a,	// (0x0000c10e) bg_active_tab_pane_g3_cp2

0xbc41,	// (0x0000c105) bg_passive_tab_pane_g1_cp2

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp2

0xbc4a,	// (0x0000c10e) bg_passive_tab_pane_g3_cp2

0xbc53,	// (0x0000c117) bg_active_tab_pane_g1_cp3

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp3

0xbc5c,	// (0x0000c120) bg_active_tab_pane_g3_cp3

0xbc53,	// (0x0000c117) bg_passive_tab_pane_g1_cp3

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp3

0xbc5c,	// (0x0000c120) bg_passive_tab_pane_g3_cp3

0xbc65,	// (0x0000c129) bg_active_tab_pane_g1_cp4

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp4

0xbc6e,	// (0x0000c132) bg_active_tab_pane_g3_cp4

0xbc65,	// (0x0000c129) bg_passive_tab_pane_g1_cp4

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp4

0xbc6e,	// (0x0000c132) bg_passive_tab_pane_g3_cp4

0x1e48,	// (0x0000230c) bg_active_tab_pane_g1_cp5

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp5

0x1e51,	// (0x00002315) bg_active_tab_pane_g3_cp5

0x1e48,	// (0x0000230c) bg_passive_tab_pane_g1_cp5

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp5

0x1e51,	// (0x00002315) bg_passive_tab_pane_g3_cp5

0xbc77,	// (0x0000c13b) list_set_graphic_pane_ParamLimits

0xbc77,	// (0x0000c13b) list_set_graphic_pane

0xf48f,	// (0x0000f953) bg_set_opt_pane_cp4

0xbc8c,	// (0x0000c150) list_set_graphic_pane_g1_ParamLimits

0xbc8c,	// (0x0000c150) list_set_graphic_pane_g1

0xbc98,	// (0x0000c15c) list_set_graphic_pane_g2_ParamLimits

0xbc98,	// (0x0000c15c) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0000fc2a) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0000fc2a) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0000ff9b) volume_small_pane_cp_g

0x1e9f,	// (0x00002363) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1e9f,	// (0x00002363) list_double2_large_graphic_pane_g1_cp2

0x1ead,	// (0x00002371) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1ead,	// (0x00002371) list_double2_large_graphic_pane_g2_cp2

0x1ebe,	// (0x00002382) list_double2_large_graphic_pane_g3_cp2

0x1ec6,	// (0x0000238a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1ec6,	// (0x0000238a) list_double2_large_graphic_pane_t1_cp2

0x1edc,	// (0x000023a0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1edc,	// (0x000023a0) list_double2_large_graphic_pane_t2_cp2

0x4698,	// (0x00004b5c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4698,	// (0x00004b5c) list_double_large_graphic_pane_g1_cp2

0x46ab,	// (0x00004b6f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x46ab,	// (0x00004b6f) list_double_large_graphic_pane_g2_cp2

0x2052,	// (0x00002516) list_double_large_graphic_pane_g3_cp2

0x46bc,	// (0x00004b80) list_double_large_graphic_pane_g4_cp

0x46c4,	// (0x00004b88) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x46c4,	// (0x00004b88) list_double_large_graphic_pane_t1_cp2

0x46db,	// (0x00004b9f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x46db,	// (0x00004b9f) list_double_large_graphic_pane_t2_cp2

0x1f42,	// (0x00002406) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1f42,	// (0x00002406) list_double2_graphic_pane_g1_cp2

0x1f50,	// (0x00002414) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1f50,	// (0x00002414) list_double2_graphic_pane_g2_cp2

0x1f61,	// (0x00002425) list_double2_graphic_pane_g3_cp2

0x1f6b,	// (0x0000242f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1f6b,	// (0x0000242f) list_double2_graphic_pane_t1_cp2

0x1f81,	// (0x00002445) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1f81,	// (0x00002445) list_double2_graphic_pane_t2_cp2

0x1f93,	// (0x00002457) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1f93,	// (0x00002457) list_single_number_heading_pane_g1_cp2

0x1f9f,	// (0x00002463) list_single_number_heading_pane_g2_cp2

0x1fa7,	// (0x0000246b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1fa7,	// (0x0000246b) list_single_number_heading_pane_t1_cp2

0x1fbd,	// (0x00002481) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1fbd,	// (0x00002481) list_single_number_heading_pane_t2_cp2

0x1fd1,	// (0x00002495) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1fd1,	// (0x00002495) list_single_number_heading_pane_t3_cp2

0x1f93,	// (0x00002457) list_single_heading_pane_g1_cp2_ParamLimits

0x1f93,	// (0x00002457) list_single_heading_pane_g1_cp2

0x1f9f,	// (0x00002463) list_single_heading_pane_g2_cp2

0x1fa7,	// (0x0000246b) list_single_heading_pane_t1_cp2_ParamLimits

0x1fa7,	// (0x0000246b) list_single_heading_pane_t1_cp2

0x4492,	// (0x00004956) list_single_heading_pane_t2_cp2_ParamLimits

0x4492,	// (0x00004956) list_single_heading_pane_t2_cp2

0x43d4,	// (0x00004898) list_double_graphic_pane_g1_cp2_ParamLimits

0x43d4,	// (0x00004898) list_double_graphic_pane_g1_cp2

0x43e0,	// (0x000048a4) list_double_graphic_pane_g2_cp2_ParamLimits

0x43e0,	// (0x000048a4) list_double_graphic_pane_g2_cp2

0x43ef,	// (0x000048b3) list_double_graphic_pane_g3_cp2

0x43f7,	// (0x000048bb) list_double_graphic_pane_t1_cp2_ParamLimits

0x43f7,	// (0x000048bb) list_double_graphic_pane_t1_cp2

0x440d,	// (0x000048d1) list_double_graphic_pane_t2_cp2_ParamLimits

0x440d,	// (0x000048d1) list_double_graphic_pane_t2_cp2

0x2046,	// (0x0000250a) list_double_number_pane_g1_cp2_ParamLimits

0x2046,	// (0x0000250a) list_double_number_pane_g1_cp2

0x2052,	// (0x00002516) list_double_number_pane_g2_cp2

0x4398,	// (0x0000485c) list_double_number_pane_t1_cp2_ParamLimits

0x4398,	// (0x0000485c) list_double_number_pane_t1_cp2

0x43ac,	// (0x00004870) list_double_number_pane_t2_cp2_ParamLimits

0x43ac,	// (0x00004870) list_double_number_pane_t2_cp2

0x43c2,	// (0x00004886) list_double_number_pane_t3_cp2_ParamLimits

0x43c2,	// (0x00004886) list_double_number_pane_t3_cp2

0x4270,	// (0x00004734) list_single_graphic_pane_g1_cp2_ParamLimits

0x4270,	// (0x00004734) list_single_graphic_pane_g1_cp2

0x20ac,	// (0x00002570) list_single_graphic_pane_g2_cp2_ParamLimits

0x20ac,	// (0x00002570) list_single_graphic_pane_g2_cp2

0x20b8,	// (0x0000257c) list_single_graphic_pane_g3_cp2

0x4246,	// (0x0000470a) list_single_graphic_pane_t1_cp2_ParamLimits

0x4246,	// (0x0000470a) list_single_graphic_pane_t1_cp2

0x20ac,	// (0x00002570) list_single_number_pane_g1_cp2_ParamLimits

0x20ac,	// (0x00002570) list_single_number_pane_g1_cp2

0x20b8,	// (0x0000257c) list_single_number_pane_g2_cp2

0x4246,	// (0x0000470a) list_single_number_pane_t1_cp2_ParamLimits

0x4246,	// (0x0000470a) list_single_number_pane_t1_cp2

0x425c,	// (0x00004720) list_single_number_pane_t2_cp2_ParamLimits

0x425c,	// (0x00004720) list_single_number_pane_t2_cp2

0x1ead,	// (0x00002371) list_double2_pane_g1_cp2_ParamLimits

0x1ead,	// (0x00002371) list_double2_pane_g1_cp2

0x1ebe,	// (0x00002382) list_double2_pane_g2_cp2

0x201e,	// (0x000024e2) list_double2_pane_t1_cp2_ParamLimits

0x201e,	// (0x000024e2) list_double2_pane_t1_cp2

0x2034,	// (0x000024f8) list_double2_pane_t2_cp2_ParamLimits

0x2034,	// (0x000024f8) list_double2_pane_t2_cp2

0x2046,	// (0x0000250a) list_double_pane_g1_cp2_ParamLimits

0x2046,	// (0x0000250a) list_double_pane_g1_cp2

0x2052,	// (0x00002516) list_double_pane_g2_cp2

0x205a,	// (0x0000251e) list_double_pane_t1_cp2_ParamLimits

0x205a,	// (0x0000251e) list_double_pane_t1_cp2

0x2070,	// (0x00002534) list_double_pane_t2_cp2_ParamLimits

0x2070,	// (0x00002534) list_double_pane_t2_cp2

0x209c,	// (0x00002560) list_single_pane_cp2_g3

0x20ac,	// (0x00002570) list_single_pane_g1_cp2_ParamLimits

0x20ac,	// (0x00002570) list_single_pane_g1_cp2

0x20b8,	// (0x0000257c) list_single_pane_g2_cp2

0x20c0,	// (0x00002584) list_single_pane_t1_cp2_ParamLimits

0x20c0,	// (0x00002584) list_single_pane_t1_cp2

0x20d8,	// (0x0000259c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x20d8,	// (0x0000259c) list_single_large_graphic_pane_g1_cp2

0x20e6,	// (0x000025aa) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x20e6,	// (0x000025aa) list_single_large_graphic_pane_g2_cp2

0x20f2,	// (0x000025b6) list_single_large_graphic_pane_g3_cp2

0x20fa,	// (0x000025be) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x20fa,	// (0x000025be) list_single_large_graphic_pane_g4_cp1

0x2114,	// (0x000025d8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2114,	// (0x000025d8) list_single_large_graphic_pane_t1_cp2

0x40b5,	// (0x00004579) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x40b5,	// (0x00004579) list_single_graphic_heading_pane_g1_cp2

0x4082,	// (0x00004546) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4082,	// (0x00004546) list_single_graphic_heading_pane_g4_cp2

0x20b8,	// (0x0000257c) list_single_graphic_heading_pane_g5_cp2

0x40c1,	// (0x00004585) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x40c1,	// (0x00004585) list_single_graphic_heading_pane_t1_cp2

0x40d7,	// (0x0000459b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x40d7,	// (0x0000459b) list_single_graphic_heading_pane_t2_cp2

0x4076,	// (0x0000453a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4076,	// (0x0000453a) list_single_2graphic_pane_g1_cp2

0x4082,	// (0x00004546) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4082,	// (0x00004546) list_single_2graphic_pane_g2_cp2

0x20b8,	// (0x0000257c) list_single_2graphic_pane_g3_cp2

0x4093,	// (0x00004557) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4093,	// (0x00004557) list_single_2graphic_pane_g4_cp2

0x409f,	// (0x00004563) list_single_2graphic_pane_t1_cp2_ParamLimits

0x409f,	// (0x00004563) list_single_2graphic_pane_t1_cp2

0xf316,	// (0x0000f7da) list_highlight_pane_g10_cp1

0x3c4e,	// (0x00004112) list_highlight_pane_g1_cp1

0x3c56,	// (0x0000411a) list_highlight_pane_g2_cp1

0x3c5e,	// (0x00004122) list_highlight_pane_g3_cp1

0x3c66,	// (0x0000412a) list_highlight_pane_g4_cp1

0x3c6e,	// (0x00004132) list_highlight_pane_g5_cp1

0x3c76,	// (0x0000413a) list_highlight_pane_g6_cp1

0x3c7e,	// (0x00004142) list_highlight_pane_g7_cp1

0x3c86,	// (0x0000414a) list_highlight_pane_g8_cp1

0x3c8e,	// (0x00004152) list_highlight_pane_g9_cp1

0xcbc1,	// (0x0000d085) form_field_slider_pane_t3

0xcbcf,	// (0x0000d093) form_field_slider_pane_t4

0x3b8a,	// (0x0000404e) slider_form_pane_ParamLimits

0x3b8a,	// (0x0000404e) slider_form_pane

0xf48f,	// (0x0000f953) control_abbreviations

0xf48f,	// (0x0000f953) control_conventions

0xf48f,	// (0x0000f953) control_definitions

0xf48f,	// (0x0000f953) format_table_attribute

0x44e8,	// (0x000049ac) bg_popup_preview_window_pane_g9

0xf48f,	// (0x0000f953) format_table_data2

0xf48f,	// (0x0000f953) format_table_data3

0xf48f,	// (0x0000f953) format_table_data_example

0x0008,

0xf48f,	// (0x0000f953) intro_purpose

0xf8ef,	// (0x0000fdb3) bg_popup_preview_window_pane_g

0xf48f,	// (0x0000f953) texts_category

0xf48f,	// (0x0000f953) texts_graphics

0x212a,	// (0x000025ee) text_digital

0x2139,	// (0x000025fd) text_primary

0x2148,	// (0x0000260c) text_primary_small

0x2157,	// (0x0000261b) text_secondary

0x2166,	// (0x0000262a) text_title

0x4de9,	// (0x000052ad) bg_passive_tab_pane_g1_cp3_srt

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp3_srt

0x4df2,	// (0x000052b6) bg_passive_tab_pane_g3_cp3_srt

0x0371,	// (0x00000835) bg_active_tab_pane_cp3_srt_ParamLimits

0x0371,	// (0x00000835) bg_active_tab_pane_cp3_srt

0x4dfb,	// (0x000052bf) tabs_4_active_pane_srt_g1

0xd18f,	// (0x0000d653) tabs_4_active_pane_srt_t1_ParamLimits

0xd18f,	// (0x0000d653) tabs_4_active_pane_srt_t1

0x4de9,	// (0x000052ad) bg_active_tab_pane_g1_cp3_copy1

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp3_copy1

0x4df2,	// (0x000052b6) bg_active_tab_pane_g3_cp3_copy1

0x004b,	// (0x0000050f) tabs_2_long_active_pane_srt_ParamLimits

0x004b,	// (0x0000050f) tabs_2_long_active_pane_srt

0x004b,	// (0x0000050f) tabs_2_long_passive_pane_srt_ParamLimits

0x004b,	// (0x0000050f) tabs_2_long_passive_pane_srt

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp4_srt_ParamLimits

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp4_srt

0x49c4,	// (0x00004e88) bg_passive_tab_pane_g1_cp4_srt

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp4_srt

0x49cd,	// (0x00004e91) bg_passive_tab_pane_g3_cp4_srt

0x004b,	// (0x0000050f) bg_active_tab_pane_cp4_srt_ParamLimits

0x004b,	// (0x0000050f) bg_active_tab_pane_cp4_srt

0xcf43,	// (0x0000d407) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcf43,	// (0x0000d407) tabs_2_long_active_pane_srt_t1

0x49c4,	// (0x00004e88) bg_active_tab_pane_g1_cp4_srt

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp4_srt

0x49cd,	// (0x00004e91) bg_active_tab_pane_g3_cp4_srt

0x0371,	// (0x00000835) tabs_3_long_active_pane_srt_ParamLimits

0x0371,	// (0x00000835) tabs_3_long_active_pane_srt

0x0371,	// (0x00000835) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0371,	// (0x00000835) tabs_3_long_passive_pane_cp_srt

0x0371,	// (0x00000835) tabs_3_long_passive_pane_srt_ParamLimits

0x0371,	// (0x00000835) tabs_3_long_passive_pane_srt

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp5_srt_ParamLimits

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp5_srt

0x1e48,	// (0x0000230c) bg_passive_tab_pane_g1_cp5_srt

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp5_srt

0x1e51,	// (0x00002315) bg_passive_tab_pane_g3_cp5_srt

0x004b,	// (0x0000050f) bg_active_tab_pane_cp5_srt_ParamLimits

0x004b,	// (0x0000050f) bg_active_tab_pane_cp5_srt

0xcf2d,	// (0x0000d3f1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcf2d,	// (0x0000d3f1) tabs_3_long_active_pane_srt_t1

0x1e48,	// (0x0000230c) bg_active_tab_pane_g1_cp5_srt

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp5_srt

0x1e51,	// (0x00002315) bg_active_tab_pane_g3_cp5_srt

0x49a4,	// (0x00004e68) navi_text_pane_srt_t1

0x499c,	// (0x00004e60) navi_icon_pane_srt_g1

0x23e6,	// (0x000028aa) midp_editing_number_pane_srt

0x2175,	// (0x00002639) midp_ticker_pane_srt

0x23ee,	// (0x000028b2) midp_ticker_pane_srt_g1

0x23f6,	// (0x000028ba) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0000fc49) midp_ticker_pane_srt_g

0x23fe,	// (0x000028c2) midp_ticker_pane_srt_t1

0x498d,	// (0x00004e51) midp_editing_number_pane_t1_copy1

0xbcbc,	// (0x0000c180) listscroll_midp_pane

0xbcbc,	// (0x0000c180) midp_form_pane

0x21eb,	// (0x000026af) midp_info_popup_window_ParamLimits

0x21eb,	// (0x000026af) midp_info_popup_window

0x1131,	// (0x000015f5) bg_popup_sub_pane_cp50_ParamLimits

0x1131,	// (0x000015f5) bg_popup_sub_pane_cp50

0x3884,	// (0x00003d48) listscroll_midp_info_pane_ParamLimits

0x3884,	// (0x00003d48) listscroll_midp_info_pane

0x386c,	// (0x00003d30) listscroll_form_midp_pane_ParamLimits

0x386c,	// (0x00003d30) listscroll_form_midp_pane

0x3878,	// (0x00003d3c) scroll_bar_cp050

0xcbb5,	// (0x0000d079) list_midp_pane

0x5af5,	// (0x00005fb9) signal_pane_g2_cp

0x3786,	// (0x00003c4a) listscroll_midp_info_pane_t1_ParamLimits

0x3786,	// (0x00003c4a) listscroll_midp_info_pane_t1

0x379e,	// (0x00003c62) listscroll_midp_info_pane_t2_ParamLimits

0x379e,	// (0x00003c62) listscroll_midp_info_pane_t2

0x37dc,	// (0x00003ca0) listscroll_midp_info_pane_t3_ParamLimits

0x37dc,	// (0x00003ca0) listscroll_midp_info_pane_t3

0x3816,	// (0x00003cda) listscroll_midp_info_pane_t4_ParamLimits

0x3816,	// (0x00003cda) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0000fcee) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0000fcee) listscroll_midp_info_pane_t

0x11fb,	// (0x000016bf) scroll_pane_cp21

0x3720,	// (0x00003be4) form_midp_field_choice_group_pane

0x3729,	// (0x00003bed) form_midp_field_text_pane

0x376c,	// (0x00003c30) form_midp_field_time_pane

0x3774,	// (0x00003c38) form_midp_gauge_slider_pane

0x377d,	// (0x00003c41) form_midp_gauge_wait_pane

0xf48f,	// (0x0000f953) form_midp_image_pane

0xcb9e,	// (0x0000d062) list_single_midp_pane_ParamLimits

0xcb9e,	// (0x0000d062) list_single_midp_pane

0xcb7c,	// (0x0000d040) form_midp_field_text_pane_t1

0x3474,	// (0x00003938) input_focus_pane_cp050

0x36fc,	// (0x00003bc0) list_midp_form_text_pane

0x36ad,	// (0x00003b71) form_midp_field_choice_group_pane_t1

0x36bb,	// (0x00003b7f) input_focus_pane_cp051

0x36cf,	// (0x00003b93) list_midp_choice_pane

0xf48f,	// (0x0000f953) status_idle_pane

0x3691,	// (0x00003b55) form_midp_field_time_pane_t1

0xf316,	// (0x0000f7da) wait_anim_pane_g2_copy1

0x369f,	// (0x00003b63) form_midp_field_time_pane_t2

0x0001,

0x229b,	// (0x0000275f) aid_navinavi_width_2_pane

0xf825,	// (0x0000fce9) form_midp_field_time_pane_t

0xf48f,	// (0x0000f953) input_focus_pane_cp052

0xf48f,	// (0x0000f953) bg_input_focus_pane_cp040

0x3651,	// (0x00003b15) form_midp_gauge_slider_pane_t1

0x365f,	// (0x00003b23) form_midp_gauge_slider_pane_t2

0xcb60,	// (0x0000d024) form_midp_gauge_slider_pane_t3

0xcb6e,	// (0x0000d032) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0000fce0) form_midp_gauge_slider_pane_t

0x3689,	// (0x00003b4d) form_midp_slider_pane

0x004b,	// (0x0000050f) bg_input_focus_pane_cp041_ParamLimits

0x004b,	// (0x0000050f) bg_input_focus_pane_cp041

0x361e,	// (0x00003ae2) form_midp_gauge_wait_pane_t1_ParamLimits

0x361e,	// (0x00003ae2) form_midp_gauge_wait_pane_t1

0x3630,	// (0x00003af4) form_midp_gauge_wait_pane_t2_ParamLimits

0x3630,	// (0x00003af4) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0000fcdb) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0000fcdb) form_midp_gauge_wait_pane_t

0x3642,	// (0x00003b06) form_midp_wait_pane_ParamLimits

0x3642,	// (0x00003b06) form_midp_wait_pane

0x35e8,	// (0x00003aac) form_midp_image_pane_g1

0x35f1,	// (0x00003ab5) form_midp_image_pane_t1

0x3600,	// (0x00003ac4) form_midp_image_pane_t2

0xcb4f,	// (0x0000d013) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0000fcd4) form_midp_image_pane_t

0x35d0,	// (0x00003a94) list_single_midp_pane_g1

0x35d9,	// (0x00003a9d) list_single_midp_pane_t1

0xcb3c,	// (0x0000d000) list_midp_form_item_pane_ParamLimits

0xcb3c,	// (0x0000d000) list_midp_form_item_pane

0x2243,	// (0x00002707) list_midp_form_item_pane_t1

0x2252,	// (0x00002716) midp_ticker_pane_g1

0x225e,	// (0x00002722) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0000fc2f) midp_ticker_pane_g

0xbd64,	// (0x0000c228) midp_ticker_pane_t1

0xd0ee,	// (0x0000d5b2) midp_editing_number_pane_t1

0x4c97,	// (0x0000515b) midp_editing_number_pane

0x4ca6,	// (0x0000516a) midp_ticker_pane

0x4955,	// (0x00004e19) ai_message_heading_pane

0xf48f,	// (0x0000f953) bg_popup_window_pane_cp14

0x495d,	// (0x00004e21) listscroll_ai_message_pane

0x48db,	// (0x00004d9f) ai_message_heading_pane_g1_ParamLimits

0x48db,	// (0x00004d9f) ai_message_heading_pane_g1

0x48e7,	// (0x00004dab) ai_message_heading_pane_g2_ParamLimits

0x48e7,	// (0x00004dab) ai_message_heading_pane_g2

0x48f5,	// (0x00004db9) ai_message_heading_pane_g3_ParamLimits

0x48f5,	// (0x00004db9) ai_message_heading_pane_g3

0x4901,	// (0x00004dc5) ai_message_heading_pane_g4_ParamLimits

0x4901,	// (0x00004dc5) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0000fe15) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0000fe15) ai_message_heading_pane_g

0x490d,	// (0x00004dd1) ai_message_heading_pane_t1_ParamLimits

0x490d,	// (0x00004dd1) ai_message_heading_pane_t1

0x4927,	// (0x00004deb) ai_message_heading_pane_t2_ParamLimits

0x4927,	// (0x00004deb) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0000fe1e) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0000fe1e) ai_message_heading_pane_t

0x493b,	// (0x00004dff) bg_popup_heading_pane_cp1_ParamLimits

0x493b,	// (0x00004dff) bg_popup_heading_pane_cp1

0x48c9,	// (0x00004d8d) list_ai_message_pane_ParamLimits

0x48c9,	// (0x00004d8d) list_ai_message_pane

0x11fb,	// (0x000016bf) scroll_pane_cp10

0x4801,	// (0x00004cc5) list_ai_message_pane_g1

0x4809,	// (0x00004ccd) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0000fdf2) list_ai_message_pane_g

0x4811,	// (0x00004cd5) list_ai_message_pane_t1_ParamLimits

0x4811,	// (0x00004cd5) list_ai_message_pane_t1

0x4826,	// (0x00004cea) list_ai_message_pane_t2_ParamLimits

0x4826,	// (0x00004cea) list_ai_message_pane_t2

0x483b,	// (0x00004cff) list_ai_message_pane_t3_ParamLimits

0x483b,	// (0x00004cff) list_ai_message_pane_t3

0x4850,	// (0x00004d14) list_ai_message_pane_t4_ParamLimits

0x4850,	// (0x00004d14) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0000fdf7) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0000fdf7) list_ai_message_pane_t

0xcf01,	// (0x0000d3c5) cell_ai_soft_ind_pane_ParamLimits

0xcf01,	// (0x0000d3c5) cell_ai_soft_ind_pane

0x227c,	// (0x00002740) cell_ai_soft_ind_pane_g1_ParamLimits

0x227c,	// (0x00002740) cell_ai_soft_ind_pane_g1

0xf48f,	// (0x0000f953) grid_highlight_cp1

0x2289,	// (0x0000274d) text_secondary_cp56_ParamLimits

0x2289,	// (0x0000274d) text_secondary_cp56

0x47bf,	// (0x00004c83) example_general_pane_ParamLimits

0x47bf,	// (0x00004c83) example_general_pane

0x47cb,	// (0x00004c8f) example_parent_pane_g1_ParamLimits

0x47cb,	// (0x00004c8f) example_parent_pane_g1

0x47d7,	// (0x00004c9b) example_parent_pane_t1_ParamLimits

0x47d7,	// (0x00004c9b) example_parent_pane_t1

0xc337,	// (0x0000c7fb) popup_preview_text_window_ParamLimits

0xc337,	// (0x0000c7fb) popup_preview_text_window

0x20a4,	// (0x00002568) list_single_pane_cp2_g4

0x0427,	// (0x000008eb) bg_popup_preview_window_pane_ParamLimits

0x0427,	// (0x000008eb) bg_popup_preview_window_pane

0x44f2,	// (0x000049b6) popup_preview_text_window_t1_ParamLimits

0x44f2,	// (0x000049b6) popup_preview_text_window_t1

0x4510,	// (0x000049d4) popup_preview_text_window_t2_ParamLimits

0x4510,	// (0x000049d4) popup_preview_text_window_t2

0x4559,	// (0x00004a1d) popup_preview_text_window_t3_ParamLimits

0x4559,	// (0x00004a1d) popup_preview_text_window_t3

0x459e,	// (0x00004a62) popup_preview_text_window_t4_ParamLimits

0x459e,	// (0x00004a62) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0000fdc6) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0000fdc6) popup_preview_text_window_t

0x461c,	// (0x00004ae0) scroll_pane_cp11

0x32e1,	// (0x000037a5) bg_popup_preview_window_pane_g1

0x44a6,	// (0x0000496a) bg_popup_preview_window_pane_g2

0x44b0,	// (0x00004974) bg_popup_preview_window_pane_g3

0x44ba,	// (0x0000497e) bg_popup_preview_window_pane_g4

0x44c4,	// (0x00004988) bg_popup_preview_window_pane_g5

0x44ce,	// (0x00004992) bg_popup_preview_window_pane_g6

0x44d6,	// (0x0000499a) bg_popup_preview_window_pane_g7

0x44de,	// (0x000049a2) bg_popup_preview_window_pane_g8

0xf32c,	// (0x0000f7f0) aid_popup_width_pane

0xc2a7,	// (0x0000c76b) popup_midp_note_alarm_window_ParamLimits

0xc2a7,	// (0x0000c76b) popup_midp_note_alarm_window

0x0ee7,	// (0x000013ab) data_form_pane_ParamLimits

0xb827,	// (0x0000bceb) form_field_data_pane_g1

0xb831,	// (0x0000bcf5) form_field_data_pane_t1_ParamLimits

0x0f17,	// (0x000013db) input_focus_pane_ParamLimits

0x0f25,	// (0x000013e9) data_form_wide_pane_ParamLimits

0x0f31,	// (0x000013f5) form_field_data_wide_pane_g1

0x0f5d,	// (0x00001421) form_field_data_wide_pane_t1_ParamLimits

0x06ed,	// (0x00000bb1) input_focus_pane_cp6_ParamLimits

0xb98b,	// (0x0000be4f) input_popup_find_pane_g1_ParamLimits

0xb98b,	// (0x0000be4f) input_popup_find_pane_g1

0x152c,	// (0x000019f0) aid_navi_side_left_pane

0x1541,	// (0x00001a05) aid_navi_side_right_pane

0x3d49,	// (0x0000420d) bg_popup_window_pane_cp30_ParamLimits

0x3d49,	// (0x0000420d) bg_popup_window_pane_cp30

0x3dc3,	// (0x00004287) popup_midp_note_alarm_window_g1_ParamLimits

0x3dc3,	// (0x00004287) popup_midp_note_alarm_window_g1

0x3df3,	// (0x000042b7) popup_midp_note_alarm_window_t1_ParamLimits

0x3df3,	// (0x000042b7) popup_midp_note_alarm_window_t1

0x3e94,	// (0x00004358) popup_midp_note_alarm_window_t2_ParamLimits

0x3e94,	// (0x00004358) popup_midp_note_alarm_window_t2

0x3f42,	// (0x00004406) popup_midp_note_alarm_window_t3_ParamLimits

0x3f42,	// (0x00004406) popup_midp_note_alarm_window_t3

0x3f74,	// (0x00004438) popup_midp_note_alarm_window_t4_ParamLimits

0x3f74,	// (0x00004438) popup_midp_note_alarm_window_t4

0x3f9a,	// (0x0000445e) popup_midp_note_alarm_window_t5_ParamLimits

0x3f9a,	// (0x0000445e) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0000fd63) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0000fd63) popup_midp_note_alarm_window_t

0x4046,	// (0x0000450a) wait_bar_pane_cp1_ParamLimits

0x4046,	// (0x0000450a) wait_bar_pane_cp1

0xf48f,	// (0x0000f953) wait_anim_pane_copy1

0xf48f,	// (0x0000f953) wait_border_pane_copy1

0x3a2e,	// (0x00003ef2) wait_border_pane_g1_copy1

0x0f77,	// (0x0000143b) form_field_popup_pane_g1

0xb84b,	// (0x0000bd0f) form_field_popup_pane_t1_ParamLimits

0x0f17,	// (0x000013db) input_focus_pane_cp7_ParamLimits

0x0f99,	// (0x0000145d) list_form_pane_ParamLimits

0x0fa5,	// (0x00001469) form_field_popup_wide_pane_g1

0x0fad,	// (0x00001471) form_field_popup_wide_pane_t1_ParamLimits

0x0f17,	// (0x000013db) input_focus_pane_cp8_ParamLimits

0x0fc2,	// (0x00001486) list_form_wide_pane_ParamLimits

0x4e76,	// (0x0000533a) aid_size_cell_graphic_pane

0xb8ca,	// (0x0000bd8e) data_form_pane_t1_ParamLimits

0xd0d2,	// (0x0000d596) data_form_wide_pane_t1_ParamLimits

0xc739,	// (0x0000cbfd) bg_status_flat_pane

0xb05b,	// (0x0000b51f) title_pane_t1_ParamLimits

0x0013,	// (0x000004d7) title_pane_t2_ParamLimits

0x0039,	// (0x000004fd) title_pane_t3_ParamLimits

0xf56f,	// (0x0000fa33) title_pane_t_ParamLimits

0xba97,	// (0x0000bf5b) level_1_signal_ParamLimits

0xbaa9,	// (0x0000bf6d) level_2_signal_ParamLimits

0xbabc,	// (0x0000bf80) level_3_signal_ParamLimits

0xbacf,	// (0x0000bf93) level_4_signal_ParamLimits

0xbae2,	// (0x0000bfa6) level_5_signal_ParamLimits

0xbaf5,	// (0x0000bfb9) level_6_signal_ParamLimits

0xbb08,	// (0x0000bfcc) level_7_signal_ParamLimits

0xba97,	// (0x0000bf5b) level_1_battery_ParamLimits

0xbaa9,	// (0x0000bf6d) level_2_battery_ParamLimits

0xbabc,	// (0x0000bf80) level_3_battery_ParamLimits

0xbacf,	// (0x0000bf93) level_4_battery_ParamLimits

0xbae2,	// (0x0000bfa6) level_5_battery_ParamLimits

0xbaf5,	// (0x0000bfb9) level_6_battery_ParamLimits

0xbb08,	// (0x0000bfcc) level_7_battery_ParamLimits

0x3c4e,	// (0x00004112) bg_status_flat_pane_g1

0x3c56,	// (0x0000411a) bg_status_flat_pane_g2

0x3c5e,	// (0x00004122) bg_status_flat_pane_g3

0x3c66,	// (0x0000412a) bg_status_flat_pane_g4

0x3c6e,	// (0x00004132) bg_status_flat_pane_g5

0x3c76,	// (0x0000413a) bg_status_flat_pane_g6

0x3c7e,	// (0x00004142) bg_status_flat_pane_g7

0xb0ef,	// (0x0000b5b3) tabs_3_active_pane_t1_ParamLimits

0xb0ef,	// (0x0000b5b3) tabs_3_passive_pane_t1_ParamLimits

0xb109,	// (0x0000b5cd) tabs_4_active_pane_t1_ParamLimits

0xb109,	// (0x0000b5cd) tabs_4_1_passive_pane_t1_ParamLimits

0xb9a1,	// (0x0000be65) tabs_2_active_pane_t1_ParamLimits

0xb9a1,	// (0x0000be65) tabs_2_passive_pane_t1_ParamLimits

0x004b,	// (0x0000050f) bg_active_tab_pane_cp4_ParamLimits

0xb9b3,	// (0x0000be77) tabs_2_long_active_pane_t1_ParamLimits

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp4_ParamLimits

0x339f,	// (0x00003863) list_single_midp_graphic_pane_t1_ParamLimits

0x004b,	// (0x0000050f) bg_active_tab_pane_cp5_ParamLimits

0xb9c6,	// (0x0000be8a) tabs_3_long_active_pane_t1_ParamLimits

0x26f6,	// (0x00002bba) bg_passive_tab_pane_cp5_ParamLimits

0x339f,	// (0x00003863) list_single_midp_graphic_pane_t1

0xc739,	// (0x0000cbfd) bg_status_flat_pane_ParamLimits

0x2eb3,	// (0x00003377) indicator_pane_cp2_ParamLimits

0x2eb3,	// (0x00003377) indicator_pane_cp2

0xc8cf,	// (0x0000cd93) navi_pane_srt_ParamLimits

0xc8cf,	// (0x0000cd93) navi_pane_srt

0x301a,	// (0x000034de) popup_clock_digital_analogue_window_cp1

0x01d5,	// (0x00000699) indicator_pane_t1

0x2175,	// (0x00002639) copy_highlight_pane

0x2175,	// (0x00002639) cursor_graphics_pane

0x2175,	// (0x00002639) graphic_within_text_pane

0x2175,	// (0x00002639) link_highlight_pane

0x45df,	// (0x00004aa3) popup_preview_text_window_t5_ParamLimits

0x45df,	// (0x00004aa3) popup_preview_text_window_t5

0x22a5,	// (0x00002769) cursor_digital_pane

0x22a5,	// (0x00002769) cursor_primary_pane

0x22b6,	// (0x0000277a) cursor_primary_small_pane

0x22be,	// (0x00002782) cursor_secondary_pane

0x22c6,	// (0x0000278a) cursor_title_pane

0x22a5,	// (0x00002769) link_highlight_digital_pane

0x22ad,	// (0x00002771) link_highlight_primary_pane

0x22b6,	// (0x0000277a) link_highlight_primary_small_pane

0x22be,	// (0x00002782) link_highlight_secondary_pane

0x22c6,	// (0x0000278a) link_highlight_title_pane

0x22a5,	// (0x00002769) copy_highlight_digital_pane

0x22a5,	// (0x00002769) copy_highlight_primary_pane

0x22b6,	// (0x0000277a) copy_highlight_primary_small_pane

0x22be,	// (0x00002782) copy_highlight_secondary_pane

0x22c6,	// (0x0000278a) copy_highlight_title_pane

0x22be,	// (0x00002782) graphic_text_digital_pane

0x3cec,	// (0x000041b0) graphic_text_primary_pane

0x3cf5,	// (0x000041b9) graphic_text_primary_small_pane

0x22b6,	// (0x0000277a) graphic_text_secondary_pane

0x22a5,	// (0x00002769) graphic_text_title_pane

0xbd76,	// (0x0000c23a) cursor_primary_pane_g1

0x3cde,	// (0x000041a2) cursor_text_primary_t1

0xcbf1,	// (0x0000d0b5) cursor_primary_small_pane_g1

0x3cd0,	// (0x00004194) cursor_text_primary_small_t1

0xcbe7,	// (0x0000d0ab) cursor_primary_small_pane_g1_copy1

0x3cb8,	// (0x0000417c) cursor_text_primary_small_t1_copy1

0x3c96,	// (0x0000415a) cursor_text_title_t1

0xcbdd,	// (0x0000d0a1) cursor_title_pane_g1

0xbd76,	// (0x0000c23a) cursor_digital_pane_g1

0x22d8,	// (0x0000279c) cursor_text_digital_t1

0x22e6,	// (0x000027aa) link_highlight_primary_pane_g1

0x3c3f,	// (0x00004103) link_highlight_primary_pane_t1

0x22e6,	// (0x000027aa) link_highlight_primary_small_pane_g1

0x22ee,	// (0x000027b2) link_highlight_primary_small_pane_t1

0x22fd,	// (0x000027c1) link_highlight_secondary_pane_g1

0x2305,	// (0x000027c9) link_highlight_secondary_pane_t1

0x3bb3,	// (0x00004077) link_highlight_title_pane_g1

0x3bbb,	// (0x0000407f) link_highlight_title_pane_t1

0x3b9c,	// (0x00004060) link_highlight_digital_pane_g1

0x3ba4,	// (0x00004068) link_highlight_digital_pane_t1

0x3a64,	// (0x00003f28) copy_highlight_primary_pane_g1

0x3a7b,	// (0x00003f3f) copy_highlight_primary_pane_t1

0x3a64,	// (0x00003f28) copy_highlight_primary_small_pane_g1

0x3a6c,	// (0x00003f30) copy_highlight_primary_small_pane_t1

0x2314,	// (0x000027d8) copy_highlight_secondary_pane_g1

0x231c,	// (0x000027e0) copy_highlight_secondary_pane_t1

0x3a4d,	// (0x00003f11) copy_highlight_title_pane_g1

0x3a55,	// (0x00003f19) copy_highlight_title_pane_t1

0x3a64,	// (0x00003f28) copy_highlight_digital_pane_g1

0x50fe,	// (0x000055c2) copy_highlight_digital_pane_t1

0x5052,	// (0x00005516) graphic_text_primary_pane_g1

0x50e2,	// (0x000055a6) graphic_text_primary_pane_t1

0x50f0,	// (0x000055b4) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0000fe92) graphic_text_primary_pane_t

0x50be,	// (0x00005582) graphic_text_primary_small_pane_g1

0x50c6,	// (0x0000558a) graphic_text_primary_small_pane_t1

0x50d4,	// (0x00005598) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0000fe8d) graphic_text_primary_small_pane_t

0x509a,	// (0x0000555e) graphic_text_secondary_pane_g1

0x50a2,	// (0x00005566) graphic_text_secondary_pane_t1

0x50b0,	// (0x00005574) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0000fe88) graphic_text_secondary_pane_t

0x5076,	// (0x0000553a) graphic_text_title_pane_g1

0x507e,	// (0x00005542) graphic_text_title_pane_t1

0x508c,	// (0x00005550) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0000fe83) graphic_text_title_pane_t

0x5052,	// (0x00005516) graphic_text_digital_pane_g1

0x505a,	// (0x0000551e) graphic_text_digital_pane_t1

0x5068,	// (0x0000552c) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0000fe7e) graphic_text_digital_pane_t

0x004b,	// (0x0000050f) navi_icon_pane_srt_ParamLimits

0x004b,	// (0x0000050f) navi_icon_pane_srt

0xf48f,	// (0x0000f953) navi_midp_pane_srt

0xf48f,	// (0x0000f953) navi_navi_pane_srt

0x004b,	// (0x0000050f) navi_text_pane_srt_ParamLimits

0x004b,	// (0x0000050f) navi_text_pane_srt

0x501d,	// (0x000054e1) navi_navi_icon_text_pane_srt

0x5025,	// (0x000054e9) navi_navi_pane_srt_g1_ParamLimits

0x5025,	// (0x000054e9) navi_navi_pane_srt_g1

0x5037,	// (0x000054fb) navi_navi_pane_srt_g2_ParamLimits

0x5037,	// (0x000054fb) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0000fe79) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0000fe79) navi_navi_pane_srt_g

0x5049,	// (0x0000550d) navi_navi_tabs_pane_srt

0x501d,	// (0x000054e1) navi_navi_text_pane_srt

0x501d,	// (0x000054e1) navi_navi_volume_pane_srt

0x500e,	// (0x000054d2) navi_navi_text_pane_srt_t1

0x4fe9,	// (0x000054ad) navi_navi_volume_pane_srt_g1

0x4ff1,	// (0x000054b5) volume_small_pane_srt_ParamLimits

0x4ff1,	// (0x000054b5) volume_small_pane_srt

0x232b,	// (0x000027ef) volume_small_pane_srt_g1_ParamLimits

0x232b,	// (0x000027ef) volume_small_pane_srt_g1

0x233b,	// (0x000027ff) volume_small_pane_srt_g2_ParamLimits

0x233b,	// (0x000027ff) volume_small_pane_srt_g2

0x234c,	// (0x00002810) volume_small_pane_srt_g3_ParamLimits

0x234c,	// (0x00002810) volume_small_pane_srt_g3

0x235d,	// (0x00002821) volume_small_pane_srt_g4_ParamLimits

0x235d,	// (0x00002821) volume_small_pane_srt_g4

0x236e,	// (0x00002832) volume_small_pane_srt_g5_ParamLimits

0x236e,	// (0x00002832) volume_small_pane_srt_g5

0x237f,	// (0x00002843) volume_small_pane_srt_g6_ParamLimits

0x237f,	// (0x00002843) volume_small_pane_srt_g6

0x2390,	// (0x00002854) volume_small_pane_srt_g7_ParamLimits

0x2390,	// (0x00002854) volume_small_pane_srt_g7

0x23a1,	// (0x00002865) volume_small_pane_srt_g8_ParamLimits

0x23a1,	// (0x00002865) volume_small_pane_srt_g8

0x23b2,	// (0x00002876) volume_small_pane_srt_g9_ParamLimits

0x23b2,	// (0x00002876) volume_small_pane_srt_g9

0x23c3,	// (0x00002887) volume_small_pane_srt_g10_ParamLimits

0x23c3,	// (0x00002887) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0000fc34) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0000fc34) volume_small_pane_srt_g

0x04dc,	// (0x000009a0) query_popup_data_pane_cp2

0x4fd7,	// (0x0000549b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4fd7,	// (0x0000549b) navi_navi_icon_text_pane_srt_t1

0x3cec,	// (0x000041b0) navi_tabs_2_long_pane_srt

0x3cec,	// (0x000041b0) navi_tabs_2_pane_srt

0x3cec,	// (0x000041b0) navi_tabs_3_long_pane_srt

0x3cec,	// (0x000041b0) navi_tabs_3_pane_srt

0x3cec,	// (0x000041b0) navi_tabs_4_pane_srt

0x4faf,	// (0x00005473) tabs_2_active_pane_srt_ParamLimits

0x4faf,	// (0x00005473) tabs_2_active_pane_srt

0x4fbf,	// (0x00005483) tabs_2_passive_pane_srt_ParamLimits

0x4fbf,	// (0x00005483) tabs_2_passive_pane_srt

0x3474,	// (0x00003938) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3474,	// (0x00003938) bg_passive_tab_pane_cp1_srt

0x4f83,	// (0x00005447) bg_passive_tab_pane_g1_cp1_srt

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp1_srt

0x4f8c,	// (0x00005450) bg_passive_tab_pane_g3_cp1_srt

0x0371,	// (0x00000835) bg_active_tab_pane_cp1_srt_ParamLimits

0x0371,	// (0x00000835) bg_active_tab_pane_cp1_srt

0x4f95,	// (0x00005459) tabs_2_active_pane_srt_g1

0xd20f,	// (0x0000d6d3) tabs_2_active_pane_srt_t1_ParamLimits

0xd20f,	// (0x0000d6d3) tabs_2_active_pane_srt_t1

0x4f83,	// (0x00005447) bg_active_tab_pane_g1_cp1_srt

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp1_srt

0x4f8c,	// (0x00005450) bg_active_tab_pane_g3_cp1_srt

0x4f50,	// (0x00005414) tabs_3_active_pane_srt_ParamLimits

0x4f50,	// (0x00005414) tabs_3_active_pane_srt

0x4f61,	// (0x00005425) tabs_3_passive_pane_cp_srt_ParamLimits

0x4f61,	// (0x00005425) tabs_3_passive_pane_cp_srt

0x4f72,	// (0x00005436) tabs_3_passive_pane_srt_ParamLimits

0x4f72,	// (0x00005436) tabs_3_passive_pane_srt

0x3474,	// (0x00003938) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3474,	// (0x00003938) bg_passive_tab_pane_cp2_srt

0x23d4,	// (0x00002898) bg_passive_tab_pane_g1_cp2_srt

0x1c7a,	// (0x0000213e) bg_passive_tab_pane_g2_cp2_srt

0x23dd,	// (0x000028a1) bg_passive_tab_pane_g3_cp2_srt

0x0371,	// (0x00000835) bg_active_tab_pane_cp2_srt_ParamLimits

0x0371,	// (0x00000835) bg_active_tab_pane_cp2_srt

0x4f36,	// (0x000053fa) tabs_3_active_pane_srt_g1

0xd1f9,	// (0x0000d6bd) tabs_3_active_pane_srt_t1_ParamLimits

0xd1f9,	// (0x0000d6bd) tabs_3_active_pane_srt_t1

0x23d4,	// (0x00002898) bg_active_tab_pane_g1_cp2_srt

0x1c7a,	// (0x0000213e) bg_active_tab_pane_g2_cp2_srt

0x23dd,	// (0x000028a1) bg_active_tab_pane_g3_cp2_srt

0x4eee,	// (0x000053b2) tabs_4_active_pane_srt_ParamLimits

0x4eee,	// (0x000053b2) tabs_4_active_pane_srt

0x4f00,	// (0x000053c4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4f00,	// (0x000053c4) tabs_4_passive_pane_cp2_srt

0x267c,	// (0x00002b40) aid_size_cell_toolbar

0x4aaf,	// (0x00004f73) main_idle_act_pane_ParamLimits

0x28c3,	// (0x00002d87) popup_large_graphic_colour_window_ParamLimits

0xc5fd,	// (0x0000cac1) popup_toolbar_window_ParamLimits

0xc5fd,	// (0x0000cac1) popup_toolbar_window

0x4cdc,	// (0x000051a0) list_single_graphic_2heading_pane_ParamLimits

0x4cdc,	// (0x000051a0) list_single_graphic_2heading_pane

0x15ba,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane

0x15cc,	// (0x00001a90) aid_size_cell_apps_grid_prt_pane

0x26f6,	// (0x00002bba) bg_wml_button_pane_cp1_ParamLimits

0x26f6,	// (0x00002bba) bg_wml_button_pane_cp1

0xcb7c,	// (0x0000d040) form_midp_field_text_pane_t1_ParamLimits

0x3474,	// (0x00003938) input_focus_pane_cp050_ParamLimits

0x36fc,	// (0x00003bc0) list_midp_form_text_pane_ParamLimits

0x36bb,	// (0x00003b7f) input_focus_pane_cp051_ParamLimits

0x36cf,	// (0x00003b93) list_midp_choice_pane_ParamLimits

0xcb0c,	// (0x0000cfd0) list_single_2graphic_pane_cp3_ParamLimits

0xcb0c,	// (0x0000cfd0) list_single_2graphic_pane_cp3

0xcb1e,	// (0x0000cfe2) list_single_midp_graphic_pane_ParamLimits

0xcb1e,	// (0x0000cfe2) list_single_midp_graphic_pane

0x3179,	// (0x0000363d) list_single_graphic_2heading_pane_g1_ParamLimits

0x3179,	// (0x0000363d) list_single_graphic_2heading_pane_g1

0x20e6,	// (0x000025aa) list_single_graphic_2heading_pane_g4_ParamLimits

0x20e6,	// (0x000025aa) list_single_graphic_2heading_pane_g4

0x3185,	// (0x00003649) list_single_graphic_2heading_pane_g5_ParamLimits

0x3185,	// (0x00003649) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0000fc87) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0000fc87) list_single_graphic_2heading_pane_g

0x3191,	// (0x00003655) list_single_graphic_2heading_pane_t1_ParamLimits

0x3191,	// (0x00003655) list_single_graphic_2heading_pane_t1

0x31a5,	// (0x00003669) list_single_graphic_2heading_pane_t2_ParamLimits

0x31a5,	// (0x00003669) list_single_graphic_2heading_pane_t2

0x31c1,	// (0x00003685) list_single_graphic_2heading_pane_t3_ParamLimits

0x31c1,	// (0x00003685) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0000fc8e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0000fc8e) list_single_graphic_2heading_pane_t

0x31d9,	// (0x0000369d) bg_popup_sub_pane_cp2

0x3203,	// (0x000036c7) grid_toobar_pane

0x323f,	// (0x00003703) cell_toolbar_pane_ParamLimits

0x323f,	// (0x00003703) cell_toolbar_pane

0x3285,	// (0x00003749) cell_toolbar_pane_g1_ParamLimits

0x3285,	// (0x00003749) cell_toolbar_pane_g1

0x3299,	// (0x0000375d) cell_toolbar_pane_g2_ParamLimits

0x3299,	// (0x0000375d) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0000fc95) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0000fc95) cell_toolbar_pane_g

0x32bb,	// (0x0000377f) grid_highlight_pane_cp2_ParamLimits

0x32bb,	// (0x0000377f) grid_highlight_pane_cp2

0x32d5,	// (0x00003799) toolbar_button_pane

0x32e1,	// (0x000037a5) toolbar_button_pane_g1

0x32e9,	// (0x000037ad) toolbar_button_pane_g2

0x32f1,	// (0x000037b5) toolbar_button_pane_g3

0x32f9,	// (0x000037bd) toolbar_button_pane_g4

0x3301,	// (0x000037c5) toolbar_button_pane_g5

0x3309,	// (0x000037cd) toolbar_button_pane_g6

0x3311,	// (0x000037d5) toolbar_button_pane_g7

0x3319,	// (0x000037dd) toolbar_button_pane_g8

0x3321,	// (0x000037e5) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0000fc9a) toolbar_button_pane_g

0x3331,	// (0x000037f5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3331,	// (0x000037f5) list_single_2graphic_pane_g1_cp3

0xca6e,	// (0x0000cf32) list_single_2graphic_pane_g2_cp3_ParamLimits

0xca6e,	// (0x0000cf32) list_single_2graphic_pane_g2_cp3

0x1f9f,	// (0x00002463) list_single_2graphic_pane_g3_cp3

0x334e,	// (0x00003812) list_single_2graphic_pane_g4_cp3_ParamLimits

0x334e,	// (0x00003812) list_single_2graphic_pane_g4_cp3

0x335a,	// (0x0000381e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x335a,	// (0x0000381e) list_single_2graphic_pane_t1_cp3

0x1f93,	// (0x00002457) list_single_midp_graphic_pane_g2_ParamLimits

0x1f93,	// (0x00002457) list_single_midp_graphic_pane_g2

0x2684,	// (0x00002b48) aid_zoom_text_primary

0x268c,	// (0x00002b50) aid_zoom_text_secondary

0x2491,	// (0x00002955) status_small_pane_g7_ParamLimits

0x2491,	// (0x00002955) status_small_pane_g7

0x24b4,	// (0x00002978) status_small_pane_t1_ParamLimits

0xb037,	// (0x0000b4fb) title_pane_g2

0x0003,

0xf566,	// (0x0000fa2a) title_pane_g

0xb2cf,	// (0x0000b793) aid_size_cell_colour_1_pane_ParamLimits

0xb2cf,	// (0x0000b793) aid_size_cell_colour_1_pane

0xb2e3,	// (0x0000b7a7) aid_size_cell_colour_2_pane_ParamLimits

0xb2e3,	// (0x0000b7a7) aid_size_cell_colour_2_pane

0xb2f7,	// (0x0000b7bb) aid_size_cell_colour_3_pane_ParamLimits

0xb2f7,	// (0x0000b7bb) aid_size_cell_colour_3_pane

0xb30b,	// (0x0000b7cf) aid_size_cell_colour_4_pane_ParamLimits

0xb30b,	// (0x0000b7cf) aid_size_cell_colour_4_pane

0x1433,	// (0x000018f7) title_pane_stacon_g1_ParamLimits

0x1433,	// (0x000018f7) title_pane_stacon_g1

0x3ad2,	// (0x00003f96) popup_note_wait_window_g3_ParamLimits

0x3ad2,	// (0x00003f96) popup_note_wait_window_g3

0x3b49,	// (0x0000400d) popup_note_wait_window_t5_ParamLimits

0x3b49,	// (0x0000400d) popup_note_wait_window_t5

0xf48f,	// (0x0000f953) main_feb_china_hwr_fs_writing_pane

0xbf98,	// (0x0000c45c) popup_feb_china_hwr_fs_window_ParamLimits

0xbf98,	// (0x0000c45c) popup_feb_china_hwr_fs_window

0xca7f,	// (0x0000cf43) aid_size_cell_hwr_fs_ParamLimits

0xca7f,	// (0x0000cf43) aid_size_cell_hwr_fs

0x3474,	// (0x00003938) bg_popup_sub_pane_cp3_ParamLimits

0x3474,	// (0x00003938) bg_popup_sub_pane_cp3

0xca94,	// (0x0000cf58) grid_hwr_fs_pane_ParamLimits

0xca94,	// (0x0000cf58) grid_hwr_fs_pane

0x3498,	// (0x0000395c) linegrid_hwr_fs_pane_ParamLimits

0x3498,	// (0x0000395c) linegrid_hwr_fs_pane

0xcaac,	// (0x0000cf70) cell_hwr_fs_pane_ParamLimits

0xcaac,	// (0x0000cf70) cell_hwr_fs_pane

0x34cc,	// (0x00003990) linegrid_hwr_fs_pane_g1_ParamLimits

0x34cc,	// (0x00003990) linegrid_hwr_fs_pane_g1

0xcad2,	// (0x0000cf96) linegrid_hwr_fs_pane_g2_ParamLimits

0xcad2,	// (0x0000cf96) linegrid_hwr_fs_pane_g2

0x34ea,	// (0x000039ae) linegrid_hwr_fs_pane_g3_ParamLimits

0x34ea,	// (0x000039ae) linegrid_hwr_fs_pane_g3

0x34f6,	// (0x000039ba) linegrid_hwr_fs_pane_g4_ParamLimits

0x34f6,	// (0x000039ba) linegrid_hwr_fs_pane_g4

0x3514,	// (0x000039d8) linegrid_hwr_fs_pane_g5_ParamLimits

0x3514,	// (0x000039d8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0000fcc0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0000fcc0) linegrid_hwr_fs_pane_g

0x352a,	// (0x000039ee) cell_hwr_fs_pane_g1_ParamLimits

0x352a,	// (0x000039ee) cell_hwr_fs_pane_g1

0x30b0,	// (0x00003574) cell_hwr_fs_pane_g2_ParamLimits

0x30b0,	// (0x00003574) cell_hwr_fs_pane_g2

0xcae4,	// (0x0000cfa8) cell_hwr_fs_pane_g3_ParamLimits

0xcae4,	// (0x0000cfa8) cell_hwr_fs_pane_g3

0xcaf1,	// (0x0000cfb5) cell_hwr_fs_pane_g4_ParamLimits

0xcaf1,	// (0x0000cfb5) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0000fccb) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0000fccb) cell_hwr_fs_pane_g

0xcafe,	// (0x0000cfc2) cell_hwr_fs_pane_t1

0xf48f,	// (0x0000f953) grid_highlight_pane_cp6

0xf48f,	// (0x0000f953) main_idle_act2_pane

0x11e2,	// (0x000016a6) aid_inside_area_popup_secondary

0xcd67,	// (0x0000d22b) aid_inside_area_window_primary_ParamLimits

0xcd67,	// (0x0000d22b) aid_inside_area_window_primary

0x510d,	// (0x000055d1) ai2_news_ticker_pane

0x5115,	// (0x000055d9) aid_size_cell_ai1_link_ParamLimits

0x5115,	// (0x000055d9) aid_size_cell_ai1_link

0x512f,	// (0x000055f3) popup_ai2_data_window_ParamLimits

0x512f,	// (0x000055f3) popup_ai2_data_window

0x514d,	// (0x00005611) popup_ai2_link_window_ParamLimits

0x514d,	// (0x00005611) popup_ai2_link_window

0x3474,	// (0x00003938) bg_popup_sub_pane_cp4_ParamLimits

0x3474,	// (0x00003938) bg_popup_sub_pane_cp4

0x5163,	// (0x00005627) grid_ai2_link_pane_ParamLimits

0x5163,	// (0x00005627) grid_ai2_link_pane

0x517a,	// (0x0000563e) popup_ai2_link_window_g1_ParamLimits

0x517a,	// (0x0000563e) popup_ai2_link_window_g1

0x5186,	// (0x0000564a) popup_ai2_link_window_g2_ParamLimits

0x5186,	// (0x0000564a) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0000fe97) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0000fe97) popup_ai2_link_window_g

0x5197,	// (0x0000565b) ai2_mp_button_pane

0x519f,	// (0x00005663) ai2_mp_volume_pane

0x36bb,	// (0x00003b7f) bg_popup_sub_pane_cp5_ParamLimits

0x36bb,	// (0x00003b7f) bg_popup_sub_pane_cp5

0x51a7,	// (0x0000566b) heading_ai2_gene_pane_ParamLimits

0x51a7,	// (0x0000566b) heading_ai2_gene_pane

0x51b3,	// (0x00005677) list_ai2_gene_pane_ParamLimits

0x51b3,	// (0x00005677) list_ai2_gene_pane

0x51fb,	// (0x000056bf) cell_ai2_link_pane_ParamLimits

0x51fb,	// (0x000056bf) cell_ai2_link_pane

0x5211,	// (0x000056d5) cell_ai2_link_pane_g1

0xf48f,	// (0x0000f953) grid_highlight_pane_cp7

0x52e4,	// (0x000057a8) ai2_mp_volume_pane_g1

0x52ec,	// (0x000057b0) ai2_mp_volume_pane_g2

0x5259,	// (0x0000571d) list_ai2_gene_pane_t1

0x52f4,	// (0x000057b8) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0000feb0) ai2_mp_volume_pane_g

0x52fc,	// (0x000057c0) volume_small_pane_cp3

0x5305,	// (0x000057c9) aid_size_cell_ai2_button

0x530d,	// (0x000057d1) grid_ai2_button_pane

0x5316,	// (0x000057da) cell_ai2_button_pane_ParamLimits

0x5316,	// (0x000057da) cell_ai2_button_pane

0xf316,	// (0x0000f7da) cell_ai2_button_pane_g1

0xf48f,	// (0x0000f953) grid_highlight_pane_cp8

0x52a4,	// (0x00005768) ai2_gene_pane_t1_ParamLimits

0x52a4,	// (0x00005768) ai2_gene_pane_t1

0xbf08,	// (0x0000c3cc) aid_height_parent_landscape

0xcf5a,	// (0x0000d41e) aid_height_set_list

0x4aaf,	// (0x00004f73) aid_size_parent

0x4e76,	// (0x0000533a) aid_size_cell_graphic_pane_ParamLimits

0x51c3,	// (0x00005687) popup_ai2_data_window_g1_ParamLimits

0x51c3,	// (0x00005687) popup_ai2_data_window_g1

0x51cf,	// (0x00005693) ai2_news_ticker_pane_g1

0x51d7,	// (0x0000569b) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0000fe9c) ai2_news_ticker_pane_g

0x51df,	// (0x000056a3) ai2_news_ticker_pane_t1

0x51ed,	// (0x000056b1) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0000fea1) ai2_news_ticker_pane_t

0x521a,	// (0x000056de) heading_ai2_gene_pane_g1

0x5222,	// (0x000056e6) heading_ai2_gene_pane_t1_ParamLimits

0x5222,	// (0x000056e6) heading_ai2_gene_pane_t1

0x5237,	// (0x000056fb) list_highlight_pane_cp6

0x523f,	// (0x00005703) ai2_gene_pane_ParamLimits

0x523f,	// (0x00005703) ai2_gene_pane

0x5267,	// (0x0000572b) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0000fea6) list_ai2_gene_pane_t

0x5275,	// (0x00005739) list_highlight_pane_cp8_ParamLimits

0x5275,	// (0x00005739) list_highlight_pane_cp8

0x5286,	// (0x0000574a) ai2_gene_pane_g1_ParamLimits

0x5286,	// (0x0000574a) ai2_gene_pane_g1

0x5298,	// (0x0000575c) ai2_gene_pane_g2_ParamLimits

0x5298,	// (0x0000575c) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0000feab) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0000feab) ai2_gene_pane_g

0x0912,	// (0x00000dd6) scroll_pane_cp12

0xbec7,	// (0x0000c38b) control_pane_t3_ParamLimits

0xbec7,	// (0x0000c38b) control_pane_t3

0x24a5,	// (0x00002969) status_small_pane_g8_ParamLimits

0x24a5,	// (0x00002969) status_small_pane_g8

0xc03a,	// (0x0000c4fe) popup_find_window_ParamLimits

0xc2e7,	// (0x0000c7ab) popup_note_image_window_ParamLimits

0x3179,	// (0x0000363d) list_double2_graphic_pane_vc_g1_ParamLimits

0x3179,	// (0x0000363d) list_double2_graphic_pane_vc_g1

0x20e6,	// (0x000025aa) list_double2_graphic_pane_vc_g2_ParamLimits

0x20e6,	// (0x000025aa) list_double2_graphic_pane_vc_g2

0x3185,	// (0x00003649) list_double2_graphic_pane_vc_g3_ParamLimits

0x3185,	// (0x00003649) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0000fc87) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0000fc87) list_double2_graphic_pane_vc_g

0x326f,	// (0x00003733) list_double2_graphic_pane_vc_t1_ParamLimits

0x326f,	// (0x00003733) list_double2_graphic_pane_vc_t1

0x20e6,	// (0x000025aa) list_single_heading_pane_vc_g1_ParamLimits

0x20e6,	// (0x000025aa) list_single_heading_pane_vc_g1

0x3185,	// (0x00003649) list_single_heading_pane_vc_g2_ParamLimits

0x3185,	// (0x00003649) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_single_heading_pane_vc_g

0x3375,	// (0x00003839) list_single_heading_pane_vc_t1_ParamLimits

0x3375,	// (0x00003839) list_single_heading_pane_vc_t1

0x338d,	// (0x00003851) list_single_heading_pane_vc_t2_ParamLimits

0x338d,	// (0x00003851) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0000fcaf) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0000fcaf) list_single_heading_pane_vc_t

0x33b5,	// (0x00003879) list_setting_number_pane_vc_g1_ParamLimits

0x33b5,	// (0x00003879) list_setting_number_pane_vc_g1

0x33c1,	// (0x00003885) list_setting_number_pane_vc_g2_ParamLimits

0x33c1,	// (0x00003885) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0000fcb4) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0000fcb4) list_setting_number_pane_vc_g

0x33cd,	// (0x00003891) list_setting_number_pane_vc_t1_ParamLimits

0x33cd,	// (0x00003891) list_setting_number_pane_vc_t1

0x33e1,	// (0x000038a5) list_setting_number_pane_vc_t2_ParamLimits

0x33e1,	// (0x000038a5) list_setting_number_pane_vc_t2

0x33fd,	// (0x000038c1) list_setting_number_pane_vc_t3_ParamLimits

0x33fd,	// (0x000038c1) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0000fcb9) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0000fcb9) list_setting_number_pane_vc_t

0x3425,	// (0x000038e9) set_value_pane_vc_ParamLimits

0x3425,	// (0x000038e9) set_value_pane_vc

0x4cdc,	// (0x000051a0) list_double2_graphic_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double2_graphic_pane_vc

0x4cdc,	// (0x000051a0) list_double2_large_graphic_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double2_large_graphic_pane_vc

0x4cdc,	// (0x000051a0) list_double2_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double2_pane_vc

0x4cdc,	// (0x000051a0) list_double_graphic_heading_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double_graphic_heading_pane_vc

0x4cdc,	// (0x000051a0) list_double_graphic_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double_graphic_pane_vc

0x4cdc,	// (0x000051a0) list_double_heading_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double_heading_pane_vc

0x4cdc,	// (0x000051a0) list_double_large_graphic_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double_large_graphic_pane_vc

0x4cdc,	// (0x000051a0) list_double_number_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double_number_pane_vc

0x4cdc,	// (0x000051a0) list_double_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double_pane_vc

0x4cdc,	// (0x000051a0) list_double_time_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_double_time_pane_vc

0x4cdc,	// (0x000051a0) list_setting_number_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_setting_number_pane_vc

0x4cdc,	// (0x000051a0) list_setting_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_setting_pane_vc

0x4cdc,	// (0x000051a0) list_single_graphic_heading_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_single_graphic_heading_pane_vc

0x4cdc,	// (0x000051a0) list_single_heading_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_single_heading_pane_vc

0x4cdc,	// (0x000051a0) list_single_number_heading_pane_vc_ParamLimits

0x4cdc,	// (0x000051a0) list_single_number_heading_pane_vc

0x3179,	// (0x0000363d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3179,	// (0x0000363d) list_double_graphic_heading_pane_vc_g1

0x5349,	// (0x0000580d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5349,	// (0x0000580d) list_double_graphic_heading_pane_vc_g2

0x5355,	// (0x00005819) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5355,	// (0x00005819) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0000feb7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0000feb7) list_double_graphic_heading_pane_vc_g

0x5361,	// (0x00005825) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5361,	// (0x00005825) list_double_graphic_heading_pane_vc_t1

0x3375,	// (0x00003839) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3375,	// (0x00003839) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0000febe) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0000febe) list_double_graphic_heading_pane_vc_t

0x33b5,	// (0x00003879) list_setting_pane_vc_g1_ParamLimits

0x33b5,	// (0x00003879) list_setting_pane_vc_g1

0x33c1,	// (0x00003885) list_setting_pane_vc_g2_ParamLimits

0x33c1,	// (0x00003885) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0000fcb4) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0000fcb4) list_setting_pane_vc_g

0x557c,	// (0x00005a40) list_setting_pane_vc_t1_ParamLimits

0x557c,	// (0x00005a40) list_setting_pane_vc_t1

0x5590,	// (0x00005a54) list_setting_pane_vc_t2_ParamLimits

0x5590,	// (0x00005a54) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0000ff01) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0000ff01) list_setting_pane_vc_t

0x3425,	// (0x000038e9) set_value_pane_cp_vc_ParamLimits

0x3425,	// (0x000038e9) set_value_pane_cp_vc

0x20e6,	// (0x000025aa) list_single_number_heading_pane_vc_g1_ParamLimits

0x20e6,	// (0x000025aa) list_single_number_heading_pane_vc_g1

0x3185,	// (0x00003649) list_single_number_heading_pane_vc_g2_ParamLimits

0x3185,	// (0x00003649) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_single_number_heading_pane_vc_g

0x3375,	// (0x00003839) list_single_number_heading_pane_vc_t1_ParamLimits

0x3375,	// (0x00003839) list_single_number_heading_pane_vc_t1

0x55b2,	// (0x00005a76) list_single_number_heading_pane_vc_t2_ParamLimits

0x55b2,	// (0x00005a76) list_single_number_heading_pane_vc_t2

0x55c4,	// (0x00005a88) list_single_number_heading_pane_vc_t3_ParamLimits

0x55c4,	// (0x00005a88) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0000ff06) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0000ff06) list_single_number_heading_pane_vc_t

0x3179,	// (0x0000363d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3179,	// (0x0000363d) list_single_graphic_heading_pane_vc_g1

0x20e6,	// (0x000025aa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x20e6,	// (0x000025aa) list_single_graphic_heading_pane_vc_g4

0x3185,	// (0x00003649) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3185,	// (0x00003649) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0000fc87) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0000fc87) list_single_graphic_heading_pane_vc_g

0x3375,	// (0x00003839) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3375,	// (0x00003839) list_single_graphic_heading_pane_vc_t1

0x55d6,	// (0x00005a9a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x55d6,	// (0x00005a9a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0000ff0d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0000ff0d) list_single_graphic_heading_pane_vc_t

0x20e6,	// (0x000025aa) list_double2_pane_vc_g1_ParamLimits

0x20e6,	// (0x000025aa) list_double2_pane_vc_g1

0x3185,	// (0x00003649) list_double2_pane_vc_g2_ParamLimits

0x3185,	// (0x00003649) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_double2_pane_vc_g

0x55e8,	// (0x00005aac) list_double2_pane_vc_t1_ParamLimits

0x55e8,	// (0x00005aac) list_double2_pane_vc_t1

0x55fe,	// (0x00005ac2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x55fe,	// (0x00005ac2) list_double2_large_graphic_pane_vc_g1

0x20e6,	// (0x000025aa) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x20e6,	// (0x000025aa) list_double2_large_graphic_pane_vc_g2

0x3185,	// (0x00003649) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3185,	// (0x00003649) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x0000fac1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x0000fac1) list_double2_large_graphic_pane_vc_g

0x560a,	// (0x00005ace) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x560a,	// (0x00005ace) list_double2_large_graphic_pane_vc_t1

0x5620,	// (0x00005ae4) list_double_time_pane_vc_g1_ParamLimits

0x5620,	// (0x00005ae4) list_double_time_pane_vc_g1

0x562c,	// (0x00005af0) list_double_time_pane_vc_g2_ParamLimits

0x562c,	// (0x00005af0) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0000ff12) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0000ff12) list_double_time_pane_vc_g

0x5638,	// (0x00005afc) list_double_time_pane_vc_t1_ParamLimits

0x5638,	// (0x00005afc) list_double_time_pane_vc_t1

0x5653,	// (0x00005b17) list_double_time_pane_vc_t2_ParamLimits

0x5653,	// (0x00005b17) list_double_time_pane_vc_t2

0x5671,	// (0x00005b35) list_double_time_pane_vc_t3_ParamLimits

0x5671,	// (0x00005b35) list_double_time_pane_vc_t3

0x5689,	// (0x00005b4d) list_double_time_pane_vc_t4_ParamLimits

0x5689,	// (0x00005b4d) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0000ff17) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0000ff17) list_double_time_pane_vc_t

0x20e6,	// (0x000025aa) list_double_pane_vc_g1_ParamLimits

0x20e6,	// (0x000025aa) list_double_pane_vc_g1

0x3185,	// (0x00003649) list_double_pane_vc_g2_ParamLimits

0x3185,	// (0x00003649) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_double_pane_vc_g

0x569d,	// (0x00005b61) list_double_pane_vc_t1_ParamLimits

0x569d,	// (0x00005b61) list_double_pane_vc_t1

0x56b1,	// (0x00005b75) list_double_pane_vc_t2_ParamLimits

0x56b1,	// (0x00005b75) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0000ff20) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0000ff20) list_double_pane_vc_t

0x20e6,	// (0x000025aa) list_double_number_pane_vc_g1_ParamLimits

0x20e6,	// (0x000025aa) list_double_number_pane_vc_g1

0x3185,	// (0x00003649) list_double_number_pane_vc_g2_ParamLimits

0x3185,	// (0x00003649) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x0000faa4) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x0000faa4) list_double_number_pane_vc_g

0x56c7,	// (0x00005b8b) list_double_number_pane_vc_t1_ParamLimits

0x56c7,	// (0x00005b8b) list_double_number_pane_vc_t1

0x56db,	// (0x00005b9f) list_double_number_pane_vc_t2_ParamLimits

0x56db,	// (0x00005b9f) list_double_number_pane_vc_t2

0x56b1,	// (0x00005b75) list_double_number_pane_vc_t3_ParamLimits

0x56b1,	// (0x00005b75) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0000ff25) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0000ff25) list_double_number_pane_vc_t

0x56ef,	// (0x00005bb3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x56ef,	// (0x00005bb3) list_double_large_graphic_pane_vc_g1

0x56fb,	// (0x00005bbf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x56fb,	// (0x00005bbf) list_double_large_graphic_pane_vc_g2

0x3185,	// (0x00003649) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3185,	// (0x00003649) list_double_large_graphic_pane_vc_g3

0x570a,	// (0x00005bce) list_double_large_graphic_pane_vc_g4_ParamLimits

0x570a,	// (0x00005bce) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0000ff2c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0000ff2c) list_double_large_graphic_pane_vc_g

0x5716,	// (0x00005bda) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5716,	// (0x00005bda) list_double_large_graphic_pane_vc_t1

0x572a,	// (0x00005bee) list_double_large_graphic_pane_vc_t2_ParamLimits

0x572a,	// (0x00005bee) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0000ff35) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0000ff35) list_double_large_graphic_pane_vc_t

0x5349,	// (0x0000580d) list_double_heading_pane_vc_g1_ParamLimits

0x5349,	// (0x0000580d) list_double_heading_pane_vc_g1

0x5355,	// (0x00005819) list_double_heading_pane_vc_g2_ParamLimits

0x5355,	// (0x00005819) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0000ff3a) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0000ff3a) list_double_heading_pane_vc_g

0x5741,	// (0x00005c05) list_double_heading_pane_vc_t1_ParamLimits

0x5741,	// (0x00005c05) list_double_heading_pane_vc_t1

0x3375,	// (0x00003839) list_double_heading_pane_vc_t2_ParamLimits

0x3375,	// (0x00003839) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0000ff3f) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0000ff3f) list_double_heading_pane_vc_t

0x3179,	// (0x0000363d) list_double_graphic_pane_vc_g1_ParamLimits

0x3179,	// (0x0000363d) list_double_graphic_pane_vc_g1

0x5753,	// (0x00005c17) list_double_graphic_pane_vc_g2_ParamLimits

0x5753,	// (0x00005c17) list_double_graphic_pane_vc_g2

0x5762,	// (0x00005c26) list_double_graphic_pane_vc_g3_ParamLimits

0x5762,	// (0x00005c26) list_double_graphic_pane_vc_g3

0x0002,

0xfa80,	// (0x0000ff44) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0000ff44) list_double_graphic_pane_vc_g

0x576e,	// (0x00005c32) list_double_graphic_pane_vc_t1_ParamLimits

0x576e,	// (0x00005c32) list_double_graphic_pane_vc_t1

0x56b1,	// (0x00005b75) list_double_graphic_pane_vc_t2_ParamLimits

0x56b1,	// (0x00005b75) list_double_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0000ff4b) list_double_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0000ff4b) list_double_graphic_pane_vc_t

0xf338,	// (0x0000f7fc) aid_size_cell_fastswap

0xae7f,	// (0x0000b343) aid_size_cell_touch_ParamLimits

0xae7f,	// (0x0000b343) aid_size_cell_touch

0xf4bf,	// (0x0000f983) popup_fast_swap_wide_window_ParamLimits

0xf4bf,	// (0x0000f983) popup_fast_swap_wide_window

0xafce,	// (0x0000b492) touch_pane_ParamLimits

0xafce,	// (0x0000b492) touch_pane

0x0e21,	// (0x000012e5) button_value_adjust_pane_cp2

0x0e29,	// (0x000012ed) button_value_adjust_pane_cp4

0x0e4f,	// (0x00001313) form_field_data_pane_cp2

0xb7fb,	// (0x0000bcbf) form_field_data_wide_pane_cp2

0x169f,	// (0x00001b63) bg_scroll_pane_ParamLimits

0x16be,	// (0x00001b82) scroll_handle_pane_ParamLimits

0x16d2,	// (0x00001b96) scroll_sc2_down_pane_ParamLimits

0x16d2,	// (0x00001b96) scroll_sc2_down_pane

0x16f9,	// (0x00001bbd) scroll_sc2_up_pane_ParamLimits

0x16f9,	// (0x00001bbd) scroll_sc2_up_pane

0xd350,	// (0x0000d814) grid_wheel_folder_pane_g1_ParamLimits

0xd350,	// (0x0000d814) grid_wheel_folder_pane_g1

0x1dc4,	// (0x00002288) clock_nsta_pane_cp2_ParamLimits

0x1dc4,	// (0x00002288) clock_nsta_pane_cp2

0xbcbc,	// (0x0000c180) listscroll_midp_pane_ParamLimits

0xbccd,	// (0x0000c191) midp_canvas_pane

0x266a,	// (0x00002b2e) nsta_clock_indic_pane

0x26c8,	// (0x00002b8c) listscroll_form_pane_vc

0x26e4,	// (0x00002ba8) listscroll_set_pane_vc_ParamLimits

0x26e4,	// (0x00002ba8) listscroll_set_pane_vc

0xc761,	// (0x0000cc25) clock_nsta_pane

0xc78b,	// (0x0000cc4f) indicator_nsta_pane

0x31d9,	// (0x0000369d) bg_popup_sub_pane_cp2_ParamLimits

0x31ed,	// (0x000036b1) find_pane_cp2_ParamLimits

0x31ed,	// (0x000036b1) find_pane_cp2

0x3203,	// (0x000036c7) grid_toobar_pane_ParamLimits

0x3433,	// (0x000038f7) list_form_gen_pane_vc_ParamLimits

0x3433,	// (0x000038f7) list_form_gen_pane_vc

0x3449,	// (0x0000390d) scroll_pane_cp8_vc_ParamLimits

0x3449,	// (0x0000390d) scroll_pane_cp8_vc

0x3568,	// (0x00003a2c) data_form_wide_pane_vc_ParamLimits

0x3568,	// (0x00003a2c) data_form_wide_pane_vc

0x3574,	// (0x00003a38) form_field_data_wide_pane_vc_g1

0x357c,	// (0x00003a40) form_field_data_wide_pane_vc_t1_ParamLimits

0x357c,	// (0x00003a40) form_field_data_wide_pane_vc_t1

0x0f17,	// (0x000013db) input_focus_pane_cp6_vc_ParamLimits

0x0f17,	// (0x000013db) input_focus_pane_cp6_vc

0xcbb5,	// (0x0000d079) list_midp_pane_ParamLimits

0x4ee2,	// (0x000053a6) scroll_pane_cp16_ParamLimits

0x4ee2,	// (0x000053a6) scroll_pane_cp16

0x38a6,	// (0x00003d6a) button_value_adjust_pane_ParamLimits

0x38a6,	// (0x00003d6a) button_value_adjust_pane

0xcf6b,	// (0x0000d42f) button_value_adjust_pane_cp6_ParamLimits

0xcf6b,	// (0x0000d42f) button_value_adjust_pane_cp6

0xd0ad,	// (0x0000d571) settings_code_pane_cp_ParamLimits

0xd0ad,	// (0x0000d571) settings_code_pane_cp

0xf316,	// (0x0000f7da) cell_touch_pane_g1

0xf316,	// (0x0000f7da) cell_touch_pane_g2

0x0001,

0xf716,	// (0x0000fbda) cell_touch_pane_g

0xd225,	// (0x0000d6e9) cell_touch_pane_cp_ParamLimits

0xd225,	// (0x0000d6e9) cell_touch_pane_cp

0xd241,	// (0x0000d705) cell_touch_pane_ParamLimits

0xd241,	// (0x0000d705) cell_touch_pane

0xf316,	// (0x0000f7da) scroll_sc2_down_pane_g1

0xf316,	// (0x0000f7da) scroll_sc2_up_pane_g1

0xf48f,	// (0x0000f953) bg_set_opt_pane_cp4_vc

0x5373,	// (0x00005837) list_set_graphic_pane_vc_g1_ParamLimits

0x5373,	// (0x00005837) list_set_graphic_pane_vc_g1

0x537f,	// (0x00005843) list_set_graphic_pane_vc_g2_ParamLimits

0x537f,	// (0x00005843) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0000fec3) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0000fec3) list_set_graphic_pane_vc_g

0x538b,	// (0x0000584f) text_primary_small_cp13_vc_ParamLimits

0x538b,	// (0x0000584f) text_primary_small_cp13_vc

0x53a3,	// (0x00005867) list_set_graphic_pane_vc_ParamLimits

0x53a3,	// (0x00005867) list_set_graphic_pane_vc

0xf48f,	// (0x0000f953) input_focus_pane_cp2_vc

0xf316,	// (0x0000f7da) setting_code_pane_vc_g1

0x53b7,	// (0x0000587b) setting_code_pane_vc_t1

0x53c5,	// (0x00005889) set_text_pane_vc_t1_ParamLimits

0x53c5,	// (0x00005889) set_text_pane_vc_t1

0xf48f,	// (0x0000f953) input_focus_pane_cp1_vc

0x53e3,	// (0x000058a7) list_set_text_pane_vc

0xf316,	// (0x0000f7da) setting_text_pane_vc_g1

0xf48f,	// (0x0000f953) bg_set_opt_pane_cp2_vc

0x53ed,	// (0x000058b1) setting_slider_graphic_pane_vc_g1

0x53f5,	// (0x000058b9) setting_slider_graphic_pane_vc_t1

0x5403,	// (0x000058c7) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0000fec8) setting_slider_graphic_pane_vc_t

0x5411,	// (0x000058d5) slider_set_pane_cp_vc

0x5419,	// (0x000058dd) slider_set_pane_vc_g1

0x5422,	// (0x000058e6) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0000fecd) slider_set_pane_vc_g

0x1053,	// (0x00001517) set_opt_bg_pane_g1_copy1

0x105b,	// (0x0000151f) set_opt_bg_pane_g2_copy1

0x544e,	// (0x00005912) set_opt_bg_pane_g3_copy1

0x106b,	// (0x0000152f) set_opt_bg_pane_g4_copy1

0x1073,	// (0x00001537) set_opt_bg_pane_g5_copy1

0x107b,	// (0x0000153f) set_opt_bg_pane_g6_copy1

0x5458,	// (0x0000591c) set_opt_bg_pane_g7_copy1

0x5462,	// (0x00005926) set_opt_bg_pane_g8_copy1

0x546c,	// (0x00005930) set_opt_bg_pane_g9_copy1

0xf48f,	// (0x0000f953) bg_set_opt_pane_cp_vc

0x5476,	// (0x0000593a) setting_slider_pane_vc_t1

0x53f5,	// (0x000058b9) setting_slider_pane_vc_t2

0x5403,	// (0x000058c7) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0000fedc) setting_slider_pane_vc_t

0x5411,	// (0x000058d5) slider_set_pane_vc

0x40eb,	// (0x000045af) volume_set_pane_vc_g1

0x40f4,	// (0x000045b8) volume_set_pane_vc_g2

0x40fd,	// (0x000045c1) volume_set_pane_vc_g3

0x4106,	// (0x000045ca) volume_set_pane_vc_g4

0x410f,	// (0x000045d3) volume_set_pane_vc_g5

0x4118,	// (0x000045dc) volume_set_pane_vc_g6

0x4121,	// (0x000045e5) volume_set_pane_vc_g7

0x412a,	// (0x000045ee) volume_set_pane_vc_g8

0x4133,	// (0x000045f7) volume_set_pane_vc_g9

0x413c,	// (0x00004600) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0000fee3) volume_set_pane_vc_g

0x5485,	// (0x00005949) volume_set_pane_vc

0x548d,	// (0x00005951) button_value_adjust_pane_cp1_vc

0x5497,	// (0x0000595b) list_highlight_pane_cp2_vc

0x54a0,	// (0x00005964) list_set_pane_vc_ParamLimits

0x54a0,	// (0x00005964) list_set_pane_vc

0x550a,	// (0x000059ce) main_pane_set_vc_t1_ParamLimits

0x550a,	// (0x000059ce) main_pane_set_vc_t1

0x551f,	// (0x000059e3) main_pane_set_vc_t2_ParamLimits

0x551f,	// (0x000059e3) main_pane_set_vc_t2

0x5531,	// (0x000059f5) main_pane_set_vc_t3_ParamLimits

0x5531,	// (0x000059f5) main_pane_set_vc_t3

0x5545,	// (0x00005a09) main_pane_set_vc_t4_ParamLimits

0x5545,	// (0x00005a09) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0000fef8) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0000fef8) main_pane_set_vc_t

0x5559,	// (0x00005a1d) setting_code_pane_vc_ParamLimits

0x5559,	// (0x00005a1d) setting_code_pane_vc

0x556a,	// (0x00005a2e) setting_slider_graphic_pane_vc

0x556a,	// (0x00005a2e) setting_slider_pane_vc

0x556a,	// (0x00005a2e) setting_text_pane_vc

0x556a,	// (0x00005a2e) setting_volume_pane_vc

0x5574,	// (0x00005a38) scroll_pane_cp121_vc

0x0e0f,	// (0x000012d3) set_content_pane_vc

0x5782,	// (0x00005c46) button_value_adjust_pane_g1

0x578b,	// (0x00005c4f) button_value_adjust_pane_g2

0x0001,

0xfa8c,	// (0x0000ff50) button_value_adjust_pane_g

0x5794,	// (0x00005c58) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5794,	// (0x00005c58) form_field_slider_wide_pane_vc_t1

0x57a8,	// (0x00005c6c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x57a8,	// (0x00005c6c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa91,	// (0x0000ff55) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0000ff55) form_field_slider_wide_pane_vc_t

0x0371,	// (0x00000835) input_focus_pane_cp10_vc_ParamLimits

0x0371,	// (0x00000835) input_focus_pane_cp10_vc

0x57ba,	// (0x00005c7e) slider_cont_pane_cp1_vc_ParamLimits

0x57ba,	// (0x00005c7e) slider_cont_pane_cp1_vc

0x5419,	// (0x000058dd) slider_form_pane_g1_cp2

0x5422,	// (0x000058e6) slider_form_pane_g2_cp2

0x57d3,	// (0x00005c97) form_field_slider_pane_vc_t3

0x57e1,	// (0x00005ca5) form_field_slider_pane_vc_t4

0x57ef,	// (0x00005cb3) slider_form_pane_vc_ParamLimits

0x57ef,	// (0x00005cb3) slider_form_pane_vc

0x57fc,	// (0x00005cc0) form_field_slider_pane_vc_t1_ParamLimits

0x57fc,	// (0x00005cc0) form_field_slider_pane_vc_t1

0x57a8,	// (0x00005c6c) form_field_slider_pane_vc_t2_ParamLimits

0x57a8,	// (0x00005c6c) form_field_slider_pane_vc_t2

0x0001,

0xfaa1,	// (0x0000ff65) form_field_slider_pane_vc_t_ParamLimits

0xfaa1,	// (0x0000ff65) form_field_slider_pane_vc_t

0x0371,	// (0x00000835) input_focus_pane_cp9_vc_ParamLimits

0x0371,	// (0x00000835) input_focus_pane_cp9_vc

0x5818,	// (0x00005cdc) slider_cont_pane_vc_ParamLimits

0x5818,	// (0x00005cdc) slider_cont_pane_vc

0x582a,	// (0x00005cee) list_form_graphic_pane_cp_vc_ParamLimits

0x582a,	// (0x00005cee) list_form_graphic_pane_cp_vc

0x3574,	// (0x00003a38) form_field_popup_wide_pane_vc_g1

0x583f,	// (0x00005d03) form_field_popup_wide_pane_vc_t1_ParamLimits

0x583f,	// (0x00005d03) form_field_popup_wide_pane_vc_t1

0x0f17,	// (0x000013db) input_focus_pane_cp8_vc_ParamLimits

0x0f17,	// (0x000013db) input_focus_pane_cp8_vc

0x5856,	// (0x00005d1a) list_form_wide_pane_vc_ParamLimits

0x5856,	// (0x00005d1a) list_form_wide_pane_vc

0x5862,	// (0x00005d26) list_form_graphic_pane_vc_g1

0x586a,	// (0x00005d2e) list_form_graphic_pane_vc_t1_ParamLimits

0x586a,	// (0x00005d2e) list_form_graphic_pane_vc_t1

0x004b,	// (0x0000050f) list_highlight_pane_cp5_vc_ParamLimits

0x004b,	// (0x0000050f) list_highlight_pane_cp5_vc

0x5886,	// (0x00005d4a) list_form_graphic_pane_vc_ParamLimits

0x5886,	// (0x00005d4a) list_form_graphic_pane_vc

0x3574,	// (0x00003a38) form_field_popup_pane_vc_g1

0x589c,	// (0x00005d60) form_field_popup_pane_vc_t1_ParamLimits

0x589c,	// (0x00005d60) form_field_popup_pane_vc_t1

0x0f17,	// (0x000013db) input_focus_pane_cp7_vc_ParamLimits

0x0f17,	// (0x000013db) input_focus_pane_cp7_vc

0x58b3,	// (0x00005d77) list_form_pane_vc_ParamLimits

0x58b3,	// (0x00005d77) list_form_pane_vc

0x58bf,	// (0x00005d83) data_form_pane_vc_t1_ParamLimits

0x58bf,	// (0x00005d83) data_form_pane_vc_t1

0x1053,	// (0x00001517) input_focus_pane_vc_g1

0x105b,	// (0x0000151f) input_focus_pane_vc_g2

0x1063,	// (0x00001527) input_focus_pane_vc_g3

0x106b,	// (0x0000152f) input_focus_pane_vc_g4

0x1073,	// (0x00001537) input_focus_pane_vc_g5

0x107b,	// (0x0000153f) input_focus_pane_vc_g6

0x1083,	// (0x00001547) input_focus_pane_vc_g7

0x108b,	// (0x0000154f) input_focus_pane_vc_g8

0x1093,	// (0x00001557) input_focus_pane_vc_g9

0xf316,	// (0x0000f7da) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x0000fb63) input_focus_pane_vc_g

0x3568,	// (0x00003a2c) data_form_pane_vc_ParamLimits

0x3568,	// (0x00003a2c) data_form_pane_vc

0x3574,	// (0x00003a38) form_field_data_pane_vc_g1

0x58dc,	// (0x00005da0) form_field_data_pane_vc_t1_ParamLimits

0x58dc,	// (0x00005da0) form_field_data_pane_vc_t1

0x0f17,	// (0x000013db) input_focus_pane_vc_ParamLimits

0x0f17,	// (0x000013db) input_focus_pane_vc

0x58f6,	// (0x00005dba) button_value_adjust_pane_cp3_vc

0x58fe,	// (0x00005dc2) button_value_adjust_pane_cp5_vc

0x5906,	// (0x00005dca) form_field_data_pane_vc_ParamLimits

0x5906,	// (0x00005dca) form_field_data_pane_vc

0x5921,	// (0x00005de5) form_field_data_pane_vc_cp2

0x5929,	// (0x00005ded) form_field_data_wide_pane_vc_ParamLimits

0x5929,	// (0x00005ded) form_field_data_wide_pane_vc

0x5943,	// (0x00005e07) form_field_data_wide_pane_vc_cp2

0x594b,	// (0x00005e0f) form_field_popup_pane_vc_ParamLimits

0x594b,	// (0x00005e0f) form_field_popup_pane_vc

0x5966,	// (0x00005e2a) form_field_popup_wide_pane_vc_ParamLimits

0x5966,	// (0x00005e2a) form_field_popup_wide_pane_vc

0x5980,	// (0x00005e44) form_field_slider_pane_vc_ParamLimits

0x5980,	// (0x00005e44) form_field_slider_pane_vc

0x5993,	// (0x00005e57) form_field_slider_wide_pane_vc_ParamLimits

0x5993,	// (0x00005e57) form_field_slider_wide_pane_vc

0xd25f,	// (0x0000d723) grid_touch_1_pane_ParamLimits

0xd25f,	// (0x0000d723) grid_touch_1_pane

0xd273,	// (0x0000d737) grid_touch_2_pane_ParamLimits

0xd273,	// (0x0000d737) grid_touch_2_pane

0x5a6a,	// (0x00005f2e) touch_pane_g1_ParamLimits

0x5a6a,	// (0x00005f2e) touch_pane_g1

0x59cc,	// (0x00005e90) cell_app_pane_cp_wide_ParamLimits

0x59cc,	// (0x00005e90) cell_app_pane_cp_wide

0x59dd,	// (0x00005ea1) grid_popup_fast_wide_pane_ParamLimits

0x59dd,	// (0x00005ea1) grid_popup_fast_wide_pane

0x59f1,	// (0x00005eb5) scroll_pane_cp19_ParamLimits

0x59f1,	// (0x00005eb5) scroll_pane_cp19

0xf48f,	// (0x0000f953) bg_popup_window_pane_cp20

0x5a05,	// (0x00005ec9) listscroll_popup_fast_wide_pane

0x124f,	// (0x00001713) grid_indicator_nsta_pane

0x5a0d,	// (0x00005ed1) clock_nsta_pane_g1

0x5a16,	// (0x00005eda) clock_nsta_pane_t1

0xd29f,	// (0x0000d763) cell_indicator_nsta_pane_ParamLimits

0xd29f,	// (0x0000d763) cell_indicator_nsta_pane

0x5a6a,	// (0x00005f2e) cell_indicator_nsta_pane_g1

0xd2bc,	// (0x0000d780) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0000ff6f) cell_indicator_nsta_pane_g

0x5a8e,	// (0x00005f52) clock_nsta_pane_cp

0x5a96,	// (0x00005f5a) indicator_nsta_pane_cp

0x5a9e,	// (0x00005f62) nsta_clock_indic_pane_g1

0x01c1,	// (0x00000685) grid_indicator_pane

0x17eb,	// (0x00001caf) scroll_pane_cp29

0x1cee,	// (0x000021b2) indicator_nsta_pane_cp2_ParamLimits

0x1cee,	// (0x000021b2) indicator_nsta_pane_cp2

0x004b,	// (0x0000050f) main_apps_wheel_pane

0x3729,	// (0x00003bed) form_midp_field_text_pane_ParamLimits

0x3878,	// (0x00003d3c) scroll_bar_cp050_ParamLimits

0x5b07,	// (0x00005fcb) cell_indicator_pane_ParamLimits

0x5b07,	// (0x00005fcb) cell_indicator_pane

0x5b1f,	// (0x00005fe3) cell_indicator_pane_g1

0xd2d2,	// (0x0000d796) grid_wheel_folder_pane_ParamLimits

0xd2d2,	// (0x0000d796) grid_wheel_folder_pane

0xd2e0,	// (0x0000d7a4) list_wheel_apps_pane_ParamLimits

0xd2e0,	// (0x0000d7a4) list_wheel_apps_pane

0xd2ee,	// (0x0000d7b2) main_apps_wheel_pane_g1_ParamLimits

0xd2ee,	// (0x0000d7b2) main_apps_wheel_pane_g1

0xd2fe,	// (0x0000d7c2) main_apps_wheel_pane_g2_ParamLimits

0xd2fe,	// (0x0000d7c2) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0000ff8b) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0000ff8b) main_apps_wheel_pane_g

0xd30e,	// (0x0000d7d2) main_apps_wheel_pane_t1_ParamLimits

0xd30e,	// (0x0000d7d2) main_apps_wheel_pane_t1

0xd326,	// (0x0000d7ea) list_wheel_apps_pane_g1

0xd32e,	// (0x0000d7f2) list_wheel_apps_pane_g2

0xd336,	// (0x0000d7fa) list_wheel_apps_pane_g3

0xd33e,	// (0x0000d802) list_wheel_apps_pane_g4

0xd346,	// (0x0000d80a) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0000ff90) list_wheel_apps_pane_g

0x1ff1,	// (0x000024b5) navi_icon_text_pane

0xc655,	// (0x0000cb19) aid_fill_nsta

0xd363,	// (0x0000d827) navi_icon_text_pane_g1

0xd36f,	// (0x0000d833) navi_icon_text_pane_t1

0xbca4,	// (0x0000c168) list_set_graphic_pane_t1_ParamLimits

0xbca4,	// (0x0000c168) list_set_graphic_pane_t1

0x3fc9,	// (0x0000448d) popup_midp_note_alarm_window_t6_ParamLimits

0x3fc9,	// (0x0000448d) popup_midp_note_alarm_window_t6

0x3fdb,	// (0x0000449f) popup_midp_note_alarm_window_t7_ParamLimits

0x3fdb,	// (0x0000449f) popup_midp_note_alarm_window_t7

0x3fed,	// (0x000044b1) popup_midp_note_alarm_window_t8_ParamLimits

0x3fed,	// (0x000044b1) popup_midp_note_alarm_window_t8

0x3fff,	// (0x000044c3) popup_midp_note_alarm_window_t9_ParamLimits

0x3fff,	// (0x000044c3) popup_midp_note_alarm_window_t9

0x4011,	// (0x000044d5) popup_midp_note_alarm_window_t10_ParamLimits

0x4011,	// (0x000044d5) popup_midp_note_alarm_window_t10

0x4023,	// (0x000044e7) popup_midp_note_alarm_window_t11_ParamLimits

0x4023,	// (0x000044e7) popup_midp_note_alarm_window_t11

0x4035,	// (0x000044f9) scroll_pane_cp17_ParamLimits

0x4035,	// (0x000044f9) scroll_pane_cp17

0x40eb,	// (0x000045af) volume_small_pane_cp_g1

0x5c18,	// (0x000060dc) volume_small_pane_cp_g2

0x5c21,	// (0x000060e5) volume_small_pane_cp_g3

0x5c2a,	// (0x000060ee) volume_small_pane_cp_g4

0x5c33,	// (0x000060f7) volume_small_pane_cp_g5

0x5c3c,	// (0x00006100) volume_small_pane_cp_g6

0x5c45,	// (0x00006109) volume_small_pane_cp_g7

0x5c4e,	// (0x00006112) volume_small_pane_cp_g8

0x5c57,	// (0x0000611b) volume_small_pane_cp_g9

0x5c60,	// (0x00006124) volume_small_pane_cp_g10

0x2252,	// (0x00002716) midp_ticker_pane_g1_ParamLimits

0x225e,	// (0x00002722) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0000fc2f) midp_ticker_pane_g_ParamLimits

0xbd64,	// (0x0000c228) midp_ticker_pane_t1_ParamLimits

0xc679,	// (0x0000cb3d) aid_fill_nsta_2

0x3864,	// (0x00003d28) list_form2_midp_pane

0x4c97,	// (0x0000515b) midp_editing_number_pane_ParamLimits

0x4ca6,	// (0x0000516a) midp_ticker_pane_ParamLimits

0x5c69,	// (0x0000612d) form2_midp_field_pane

0x5c8d,	// (0x00006151) scroll_pane_cp51

0x5cad,	// (0x00006171) form2_midp_button_pane_ParamLimits

0x5cad,	// (0x00006171) form2_midp_button_pane

0x5cbf,	// (0x00006183) form2_midp_content_pane_ParamLimits

0x5cbf,	// (0x00006183) form2_midp_content_pane

0x5cd9,	// (0x0000619d) form2_midp_field_choice_group_pane

0x5ce1,	// (0x000061a5) form2_midp_field_pane_g1

0x5ce9,	// (0x000061ad) form2_midp_field_pane_g2

0x5cf1,	// (0x000061b5) form2_midp_field_pane_g3

0x5cf9,	// (0x000061bd) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0000ffb5) form2_midp_field_pane_g

0x5d01,	// (0x000061c5) form2_midp_gauge_slider_pane

0x5d09,	// (0x000061cd) form2_midp_gauge_wait_pane

0x5d11,	// (0x000061d5) form2_midp_image_pane_ParamLimits

0x5d11,	// (0x000061d5) form2_midp_image_pane

0xd39d,	// (0x0000d861) form2_midp_label_pane_ParamLimits

0xd39d,	// (0x0000d861) form2_midp_label_pane

0xd3bc,	// (0x0000d880) form2_midp_label_pane_cp_ParamLimits

0xd3bc,	// (0x0000d880) form2_midp_label_pane_cp

0x5d64,	// (0x00006228) form2_midp_string_pane_ParamLimits

0x5d64,	// (0x00006228) form2_midp_string_pane

0xd3dd,	// (0x0000d8a1) form2_midp_text_pane_ParamLimits

0xd3dd,	// (0x0000d8a1) form2_midp_text_pane

0x5d8f,	// (0x00006253) form2_midp_time_pane

0x5d9f,	// (0x00006263) input_focus_pane_cp51_ParamLimits

0x5d9f,	// (0x00006263) input_focus_pane_cp51

0xd3fe,	// (0x0000d8c2) form2_midp_label_pane_t1_ParamLimits

0xd3fe,	// (0x0000d8c2) form2_midp_label_pane_t1

0xd43b,	// (0x0000d8ff) form2_mdip_text_pane_t1_ParamLimits

0xd43b,	// (0x0000d8ff) form2_mdip_text_pane_t1

0x5e04,	// (0x000062c8) form2_midp_time_pane_t1

0x5e1f,	// (0x000062e3) form2_midp_gauge_slider_pane_t1

0xd454,	// (0x0000d918) form2_midp_gauge_slider_pane_t2

0xd466,	// (0x0000d92a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0000ffbe) form2_midp_gauge_slider_pane_t

0x5e55,	// (0x00006319) form2_midp_slider_pane

0x5e61,	// (0x00006325) form2_midp_gauge_wait_pane_t1

0x5e6f,	// (0x00006333) form2_midp_wait_pane_ParamLimits

0x5e6f,	// (0x00006333) form2_midp_wait_pane

0xd478,	// (0x0000d93c) list_single_2graphic_pane_cp4_ParamLimits

0xd478,	// (0x0000d93c) list_single_2graphic_pane_cp4

0xcb1e,	// (0x0000cfe2) list_single_midp_graphic_pane_cp_ParamLimits

0xcb1e,	// (0x0000cfe2) list_single_midp_graphic_pane_cp

0xf48f,	// (0x0000f953) list_highlight_pane_cp20

0x5eab,	// (0x0000636f) list_single_2graphic_pane_g1_cp4

0x521a,	// (0x000056de) list_single_2graphic_pane_g2_cp4

0x5eb3,	// (0x00006377) list_single_2graphic_pane_t1_cp4

0x004b,	// (0x0000050f) list_highlight_pane_cp21

0x5ec2,	// (0x00006386) list_single_midp_graphic_pane_g4_cp

0x5ed1,	// (0x00006395) list_single_midp_graphic_pane_t1_cp

0xd48b,	// (0x0000d94f) form2_mdip_string_pane_t1_ParamLimits

0xd48b,	// (0x0000d94f) form2_mdip_string_pane_t1

0xf48f,	// (0x0000f953) bg_wml_button_pane_cp2

0xf316,	// (0x0000f7da) form2_midp_image_pane_g1

0x0bc3,	// (0x00001087) list_double_large_graphic_pane_g5_ParamLimits

0x0bc3,	// (0x00001087) list_double_large_graphic_pane_g5

0xbcbc,	// (0x0000c180) midp_form_pane_ParamLimits

0x004b,	// (0x0000050f) main_apps_wheel_pane_ParamLimits

0xc36d,	// (0x0000c831) popup_preview_window_ParamLimits

0xc36d,	// (0x0000c831) popup_preview_window

0x2cc2,	// (0x00003186) popup_touch_info_window_ParamLimits

0x2cc2,	// (0x00003186) popup_touch_info_window

0x2ce4,	// (0x000031a8) popup_touch_menu_window_ParamLimits

0x2ce4,	// (0x000031a8) popup_touch_menu_window

0xf30c,	// (0x0000f7d0) bg_popup_sub_pane_cp6

0x5f40,	// (0x00006404) list_touch_menu_pane

0x5f48,	// (0x0000640c) list_single_touch_menu_pane_ParamLimits

0x5f48,	// (0x0000640c) list_single_touch_menu_pane

0x5f63,	// (0x00006427) list_single_touch_menu_pane_t1

0x004b,	// (0x0000050f) bg_popup_sub_pane_cp7_ParamLimits

0x004b,	// (0x0000050f) bg_popup_sub_pane_cp7

0x5f71,	// (0x00006435) heading_sub_pane

0x5f79,	// (0x0000643d) list_touch_info_pane_ParamLimits

0x5f79,	// (0x0000643d) list_touch_info_pane

0x5f88,	// (0x0000644c) list_single_touch_info_pane_ParamLimits

0x5f88,	// (0x0000644c) list_single_touch_info_pane

0x5f9a,	// (0x0000645e) list_single_touch_info_pane_t1

0x5fa8,	// (0x0000646c) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0000ffcc) list_single_touch_info_pane_t

0x2175,	// (0x00002639) bg_popup_heading_pane_cp

0x5fb6,	// (0x0000647a) heading_sub_pane_t1

0x3474,	// (0x00003938) bg_popup_preview_window_pane_cp_ParamLimits

0x3474,	// (0x00003938) bg_popup_preview_window_pane_cp

0x5f71,	// (0x00006435) heading_preview_pane

0x5f79,	// (0x0000643d) list_preview_pane_ParamLimits

0x5f79,	// (0x0000643d) list_preview_pane

0x5fc4,	// (0x00006488) popup_preview_window_g1

0x5f88,	// (0x0000644c) list_single_preview_pane_ParamLimits

0x5f88,	// (0x0000644c) list_single_preview_pane

0x5fcc,	// (0x00006490) list_single_preview_pane_g1

0x5fd4,	// (0x00006498) list_single_preview_pane_t1

0x5f9a,	// (0x0000645e) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0000ffd1) list_single_preview_pane_t

0x5fe2,	// (0x000064a6) bg_popup_heading_pane_cp2_ParamLimits

0x5fe2,	// (0x000064a6) bg_popup_heading_pane_cp2

0x5ff8,	// (0x000064bc) heading_preview_pane_g1

0x6000,	// (0x000064c4) heading_preview_pane_t1_ParamLimits

0x6000,	// (0x000064c4) heading_preview_pane_t1

0x01e4,	// (0x000006a8) soft_indicator_pane_t1_ParamLimits

0x08ef,	// (0x00000db3) scroll_pane_ParamLimits

0x16e7,	// (0x00001bab) scroll_sc2_left_pane

0x16f0,	// (0x00001bb4) scroll_sc2_right_pane

0x170f,	// (0x00001bd3) scroll_bg_pane_g1_ParamLimits

0x1724,	// (0x00001be8) scroll_bg_pane_g2_ParamLimits

0x173c,	// (0x00001c00) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x0000fbba) scroll_bg_pane_g_ParamLimits

0x170f,	// (0x00001bd3) scroll_handle_pane_g1_ParamLimits

0x175e,	// (0x00001c22) scroll_handle_pane_g2_ParamLimits

0x173c,	// (0x00001c00) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x0000fbc1) scroll_handle_pane_g_ParamLimits

0x2726,	// (0x00002bea) popup_choice_list_window_ParamLimits

0x2726,	// (0x00002bea) popup_choice_list_window

0x31e5,	// (0x000036a9) choice_list_pane

0x32ad,	// (0x00003771) cell_toolbar_pane_t1

0x32d5,	// (0x00003799) toolbar_button_pane_ParamLimits

0x4671,	// (0x00004b35) ai_gene_pane_1_t2_ParamLimits

0x4671,	// (0x00004b35) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0000fdd6) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0000fdd6) ai_gene_pane_1_t

0x601d,	// (0x000064e1) scroll_sc2_left_pane_g1

0x601d,	// (0x000064e1) scroll_sc2_right_pane_g1

0x26f6,	// (0x00002bba) bg_popup_sub_pane_cp10

0x6027,	// (0x000064eb) list_choice_list_pane

0x603e,	// (0x00006502) list_single_choice_list_pane_ParamLimits

0x603e,	// (0x00006502) list_single_choice_list_pane

0x6052,	// (0x00006516) list_single_choice_list_pane_g1

0x605a,	// (0x0000651e) list_single_choice_list_pane_t1_ParamLimits

0x605a,	// (0x0000651e) list_single_choice_list_pane_t1

0x606f,	// (0x00006533) choice_list_pane_g1

0x6077,	// (0x0000653b) choice_list_pane_t1

0xf30c,	// (0x0000f7d0) input_focus_pane_cp11

0x1447,	// (0x0000190b) title_pane_stacon_g2_ParamLimits

0x1447,	// (0x0000190b) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x0000fba0) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0000fba0) title_pane_stacon_g

0x2175,	// (0x00002639) cursor_press_pane

0xbfee,	// (0x0000c4b2) popup_fep_hwr_window_ParamLimits

0xbfee,	// (0x0000c4b2) popup_fep_hwr_window

0x2866,	// (0x00002d2a) popup_fep_vkb_window_ParamLimits

0x2866,	// (0x00002d2a) popup_fep_vkb_window

0x6085,	// (0x00006549) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0000fffa) fep_vkb_side_pane_g_ParamLimits

0x60c6,	// (0x0000658a) fep_hwr_candidate_pane_ParamLimits

0x60c6,	// (0x0000658a) fep_hwr_candidate_pane

0x60f0,	// (0x000065b4) fep_hwr_side_pane_ParamLimits

0x60f0,	// (0x000065b4) fep_hwr_side_pane

0x6112,	// (0x000065d6) fep_hwr_top_pane_ParamLimits

0x6112,	// (0x000065d6) fep_hwr_top_pane

0x612a,	// (0x000065ee) fep_hwr_write_pane_ParamLimits

0x612a,	// (0x000065ee) fep_hwr_write_pane

0xfb36,	// (0x0000fffa) fep_vkb_side_pane_g

0x6164,	// (0x00006628) fep_hwr_top_pane_g1

0x6176,	// (0x0000663a) fep_hwr_top_pane_g2

0x6188,	// (0x0000664c) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0000ffd6) fep_hwr_top_pane_g

0x619d,	// (0x00006661) fep_hwr_top_text_pane

0x18b3,	// (0x00001d77) fep_hwr_top_text_pane_g1

0x6279,	// (0x0000673d) fep_hwr_top_text_pane_t1

0x62d9,	// (0x0000679d) fep_hwr_candidate_pane_g1

0x654a,	// (0x00006a0e) fep_vkb_keypad_pane_g3_ParamLimits

0x654a,	// (0x00006a0e) fep_vkb_keypad_pane_g3

0x6576,	// (0x00006a3a) fep_vkb_keypad_pane_g4_ParamLimits

0x6576,	// (0x00006a3a) fep_vkb_keypad_pane_g4

0x65ed,	// (0x00006ab1) fep_vkb_bottom_pane_g2_ParamLimits

0x65ed,	// (0x00006ab1) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x00010001) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x00010001) fep_vkb_bottom_pane_g

0x601d,	// (0x000064e1) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0001000b) cell_vkb_side_pane_g

0x6678,	// (0x00006b3c) cell_vkb_side_pane_t1

0x6686,	// (0x00006b4a) cell_vkb_side_pane_t1_copy1

0x601d,	// (0x000064e1) bg_fep_vkb_candidate_pane_g2

0x67ca,	// (0x00006c8e) cell_vkb_candidate_pane_ParamLimits

0x630d,	// (0x000067d1) aid_size_cell_vkb_ParamLimits

0x630d,	// (0x000067d1) aid_size_cell_vkb

0x67ca,	// (0x00006c8e) cell_vkb_candidate_pane

0x6804,	// (0x00006cc8) bg_popup_fep_shadow_pane_g1

0xd55c,	// (0x0000da20) fep_vkb_bottom_pane_ParamLimits

0xd55c,	// (0x0000da20) fep_vkb_bottom_pane

0x63dc,	// (0x000068a0) fep_vkb_candidate_pane_ParamLimits

0x63dc,	// (0x000068a0) fep_vkb_candidate_pane

0xd588,	// (0x0000da4c) fep_vkb_keypad_pane_ParamLimits

0xd588,	// (0x0000da4c) fep_vkb_keypad_pane

0xd5af,	// (0x0000da73) fep_vkb_side_pane_ParamLimits

0xd5af,	// (0x0000da73) fep_vkb_side_pane

0xd5eb,	// (0x0000daaf) fep_vkb_top_pane_ParamLimits

0xd5eb,	// (0x0000daaf) fep_vkb_top_pane

0x64a3,	// (0x00006967) fep_vkb_top_pane_g1_ParamLimits

0x64a3,	// (0x00006967) fep_vkb_top_pane_g1

0x64b2,	// (0x00006976) fep_vkb_top_pane_g2_ParamLimits

0x64b2,	// (0x00006976) fep_vkb_top_pane_g2

0x64c1,	// (0x00006985) fep_vkb_top_pane_g3_ParamLimits

0x64c1,	// (0x00006985) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0000fff1) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0000fff1) fep_vkb_top_pane_g

0x64df,	// (0x000069a3) fep_vkb_top_text_pane_ParamLimits

0x64df,	// (0x000069a3) fep_vkb_top_text_pane

0xd627,	// (0x0000daeb) fep_vkb_side_pane_g1_ParamLimits

0xd627,	// (0x0000daeb) fep_vkb_side_pane_g1

0x6539,	// (0x000069fd) grid_vkb_side_pane_ParamLimits

0x6539,	// (0x000069fd) grid_vkb_side_pane

0x680c,	// (0x00006cd0) bg_popup_fep_shadow_pane_g2

0x6815,	// (0x00006cd9) bg_popup_fep_shadow_pane_g3

0x681d,	// (0x00006ce1) bg_popup_fep_shadow_pane_g4

0x6826,	// (0x00006cea) bg_popup_fep_shadow_pane_g5

0x6830,	// (0x00006cf4) bg_popup_fep_shadow_pane_g6

0x6838,	// (0x00006cfc) bg_popup_fep_shadow_pane_g7

0x1073,	// (0x00001537) bg_popup_fep_shadow_pane_g8

0x6598,	// (0x00006a5c) grid_vkb_keypad_number_pane_ParamLimits

0x6598,	// (0x00006a5c) grid_vkb_keypad_number_pane

0x65ac,	// (0x00006a70) grid_vkb_keypad_pane_ParamLimits

0x65ac,	// (0x00006a70) grid_vkb_keypad_pane

0x65d2,	// (0x00006a96) fep_vkb_bottom_pane_g1_ParamLimits

0x65d2,	// (0x00006a96) fep_vkb_bottom_pane_g1

0x65fb,	// (0x00006abf) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x65fb,	// (0x00006abf) grid_vkb_keypad_bottom_left_pane

0x6610,	// (0x00006ad4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6610,	// (0x00006ad4) grid_vkb_keypad_bottom_right_pane

0x6625,	// (0x00006ae9) fep_vkb_top_text_pane_g1

0xd66e,	// (0x0000db32) fep_vkb_top_text_pane_t1

0xd680,	// (0x0000db44) cell_vkb_side_pane_ParamLimits

0xd680,	// (0x0000db44) cell_vkb_side_pane

0x601d,	// (0x000064e1) cell_vkb_side_pane_g1

0x6694,	// (0x00006b58) cell_vkb_keypad_pane_ParamLimits

0x6694,	// (0x00006b58) cell_vkb_keypad_pane

0x6721,	// (0x00006be5) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0001001e) bg_popup_fep_shadow_pane_g

0x601d,	// (0x000064e1) cell_hwr_side_pane_g1

0x601d,	// (0x000064e1) cell_hwr_side_pane_g2

0x672b,	// (0x00006bef) cell_vkb_keypad_pane_t1

0xd696,	// (0x0000db5a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd696,	// (0x0000db5a) cell_vkb_keypad_bottom_left_pane

0xd6ab,	// (0x0000db6f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd6ab,	// (0x0000db6f) cell_vkb_keypad_bottom_right_pane

0x601d,	// (0x000064e1) cell_vkb_keypad_bottom_left_pane_g1

0x601d,	// (0x000064e1) cell_vkb_keypad_bottom_right_pane_g1

0x678f,	// (0x00006c53) cell_vkb_keypad_number_pane_ParamLimits

0x678f,	// (0x00006c53) cell_vkb_keypad_number_pane

0x67ae,	// (0x00006c72) cell_vkb_keypad_number_pane_g1

0x67b8,	// (0x00006c7c) cell_vkb_keypad_number_pane_g2

0x67c1,	// (0x00006c85) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x00010010) cell_vkb_keypad_number_pane_g

0x672b,	// (0x00006bef) cell_vkb_keypad_number_pane_t1

0x67eb,	// (0x00006caf) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x0001000b) cell_hwr_side_pane_g

0x684a,	// (0x00006d0e) cell_hwr_side_pane_t1

0x6858,	// (0x00006d1c) cell_hwr_side_pane_t1_copy1

0x64d1,	// (0x00006995) cell_hwr_candidate_pane_g1

0x68a8,	// (0x00006d6c) cell_hwr_candidate_pane_t1

0x601d,	// (0x000064e1) cell_vkb_candidate_pane_g2

0x68fc,	// (0x00006dc0) cell_vkb_candidate_pane_t1

0x608d,	// (0x00006551) bg_popup_fep_shadow_pane_ParamLimits

0x608d,	// (0x00006551) bg_popup_fep_shadow_pane

0x6144,	// (0x00006608) bg_fep_hwr_top_pane_g4

0x61b2,	// (0x00006676) bg_hwr_side_pane_g1_ParamLimits

0x61b2,	// (0x00006676) bg_hwr_side_pane_g1

0xd515,	// (0x0000d9d9) cell_hwr_side_pane_ParamLimits

0xd515,	// (0x0000d9d9) cell_hwr_side_pane

0x6224,	// (0x000066e8) fep_hwr_write_pane_g1_ParamLimits

0x6224,	// (0x000066e8) fep_hwr_write_pane_g1

0x6231,	// (0x000066f5) fep_hwr_write_pane_g2_ParamLimits

0x6231,	// (0x000066f5) fep_hwr_write_pane_g2

0x623e,	// (0x00006702) fep_hwr_write_pane_g3_ParamLimits

0x623e,	// (0x00006702) fep_hwr_write_pane_g3

0xd535,	// (0x0000d9f9) fep_hwr_write_pane_g4_ParamLimits

0xd535,	// (0x0000d9f9) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0000ffdd) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0000ffdd) fep_hwr_write_pane_g

0x6144,	// (0x00006608) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6144,	// (0x00006608) bg_fep_hwr_candidate_pane_g2

0x6287,	// (0x0000674b) cell_hwr_candidate_pane_ParamLimits

0x6287,	// (0x0000674b) cell_hwr_candidate_pane

0x62d9,	// (0x0000679d) fep_hwr_candidate_pane_g1_ParamLimits

0x633b,	// (0x000067ff) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x633b,	// (0x000067ff) bg_popup_fep_shadow_pane_cp2

0x64d1,	// (0x00006995) fep_vkb_top_pane_g4_ParamLimits

0x64d1,	// (0x00006995) fep_vkb_top_pane_g4

0x6517,	// (0x000069db) fep_vkb_side_pane_g2_ParamLimits

0x6517,	// (0x000069db) fep_vkb_side_pane_g2

0xb71f,	// (0x0000bbe3) list_setting_pane_t4_ParamLimits

0xb71f,	// (0x0000bbe3) list_setting_pane_t4

0xb79b,	// (0x0000bc5f) list_setting_number_pane_t5_ParamLimits

0xb79b,	// (0x0000bc5f) list_setting_number_pane_t5

0x1909,	// (0x00001dcd) list_double_heading_pane_cp2_ParamLimits

0x1909,	// (0x00001dcd) list_double_heading_pane_cp2

0x0f3d,	// (0x00001401) list_double_heading_pane_g1_cp2_ParamLimits

0x0f3d,	// (0x00001401) list_double_heading_pane_g1_cp2

0x0f49,	// (0x0000140d) list_double_heading_pane_g2_cp2_ParamLimits

0x0f49,	// (0x0000140d) list_double_heading_pane_g2_cp2

0x690a,	// (0x00006dce) list_double_heading_pane_t1_cp2_ParamLimits

0x690a,	// (0x00006dce) list_double_heading_pane_t1_cp2

0x6920,	// (0x00006de4) list_double_heading_pane_t2_cp2_ParamLimits

0x6920,	// (0x00006de4) list_double_heading_pane_t2_cp2

0xf304,	// (0x0000f7c8) aid_value_unit2

0xf4e3,	// (0x0000f9a7) popup_preview_fixed_window

0x037f,	// (0x00000843) bg_popup_preview_window_pane_cp02

0x6932,	// (0x00006df6) list_preview_fixed_pane

0x6978,	// (0x00006e3c) list_empty_pane_fp_ParamLimits

0x6978,	// (0x00006e3c) list_empty_pane_fp

0x6978,	// (0x00006e3c) list_single_cale_day_pane_fp_ParamLimits

0x6978,	// (0x00006e3c) list_single_cale_day_pane_fp

0x6978,	// (0x00006e3c) list_single_graphic_heading_pane_fp_ParamLimits

0x6978,	// (0x00006e3c) list_single_graphic_heading_pane_fp

0x6978,	// (0x00006e3c) list_single_graphic_pane_fp_ParamLimits

0x6978,	// (0x00006e3c) list_single_graphic_pane_fp

0x6978,	// (0x00006e3c) list_single_heading_pane_fp_ParamLimits

0x6978,	// (0x00006e3c) list_single_heading_pane_fp

0x6978,	// (0x00006e3c) list_single_pane_fp_ParamLimits

0x6978,	// (0x00006e3c) list_single_pane_fp

0x6991,	// (0x00006e55) list_single_pane_fp_g1_ParamLimits

0x6991,	// (0x00006e55) list_single_pane_fp_g1

0x699d,	// (0x00006e61) list_single_pane_fp_g2_ParamLimits

0x699d,	// (0x00006e61) list_single_pane_fp_g2

0x69a9,	// (0x00006e6d) list_single_pane_fp_g3_ParamLimits

0x69a9,	// (0x00006e6d) list_single_pane_fp_g3

0x69bd,	// (0x00006e81) list_single_pane_fp_g4_ParamLimits

0x69bd,	// (0x00006e81) list_single_pane_fp_g4

0x0003,

0xfb7b,	// (0x0001003f) list_single_pane_fp_g_ParamLimits

0xfb7b,	// (0x0001003f) list_single_pane_fp_g

0x69c9,	// (0x00006e8d) list_single_pane_fp_t1_ParamLimits

0x69c9,	// (0x00006e8d) list_single_pane_fp_t1

0x69e0,	// (0x00006ea4) list_single_graphic_pane_fp_g1_ParamLimits

0x69e0,	// (0x00006ea4) list_single_graphic_pane_fp_g1

0x6991,	// (0x00006e55) list_single_graphic_pane_fp_g2_ParamLimits

0x6991,	// (0x00006e55) list_single_graphic_pane_fp_g2

0x699d,	// (0x00006e61) list_single_graphic_pane_fp_g3_ParamLimits

0x699d,	// (0x00006e61) list_single_graphic_pane_fp_g3

0x69a9,	// (0x00006e6d) list_single_graphic_pane_fp_g4_ParamLimits

0x69a9,	// (0x00006e6d) list_single_graphic_pane_fp_g4

0x69bd,	// (0x00006e81) list_single_graphic_pane_fp_g5_ParamLimits

0x69bd,	// (0x00006e81) list_single_graphic_pane_fp_g5

0x0004,

0xfb84,	// (0x00010048) list_single_graphic_pane_fp_g_ParamLimits

0xfb84,	// (0x00010048) list_single_graphic_pane_fp_g

0x69ec,	// (0x00006eb0) list_single_graphic_pane_fp_t1_ParamLimits

0x69ec,	// (0x00006eb0) list_single_graphic_pane_fp_t1

0x69e0,	// (0x00006ea4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x69e0,	// (0x00006ea4) list_single_graphic_heading_pane_fp_g1

0x6991,	// (0x00006e55) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6991,	// (0x00006e55) list_single_graphic_heading_pane_fp_g2

0x699d,	// (0x00006e61) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x699d,	// (0x00006e61) list_single_graphic_heading_pane_fp_g3

0x69a9,	// (0x00006e6d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x69a9,	// (0x00006e6d) list_single_graphic_heading_pane_fp_g4

0x69bd,	// (0x00006e81) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x69bd,	// (0x00006e81) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb84,	// (0x00010048) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x00010048) list_single_graphic_heading_pane_fp_g

0x6a02,	// (0x00006ec6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6a02,	// (0x00006ec6) list_single_graphic_heading_pane_fp_t1

0x6a18,	// (0x00006edc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6a18,	// (0x00006edc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x00010053) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x00010053) list_single_graphic_heading_pane_fp_t

0x6a2a,	// (0x00006eee) list_single_cale_day_pane_fp_g1_ParamLimits

0x6a2a,	// (0x00006eee) list_single_cale_day_pane_fp_g1

0x6a62,	// (0x00006f26) list_single_cale_day_pane_fp_g2_ParamLimits

0x6a62,	// (0x00006f26) list_single_cale_day_pane_fp_g2

0x6a6e,	// (0x00006f32) list_single_cale_day_pane_fp_g3_ParamLimits

0x6a6e,	// (0x00006f32) list_single_cale_day_pane_fp_g3

0x6a96,	// (0x00006f5a) list_single_cale_day_pane_fp_g4_ParamLimits

0x6a96,	// (0x00006f5a) list_single_cale_day_pane_fp_g4

0x6aba,	// (0x00006f7e) list_single_cale_day_pane_fp_g5_ParamLimits

0x6aba,	// (0x00006f7e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb94,	// (0x00010058) list_single_cale_day_pane_fp_g_ParamLimits

0xfb94,	// (0x00010058) list_single_cale_day_pane_fp_g

0x6ade,	// (0x00006fa2) list_single_cale_day_pane_fp_t1_ParamLimits

0x6ade,	// (0x00006fa2) list_single_cale_day_pane_fp_t1

0x6b04,	// (0x00006fc8) list_single_cale_day_pane_fp_t2_ParamLimits

0x6b04,	// (0x00006fc8) list_single_cale_day_pane_fp_t2

0x6b1d,	// (0x00006fe1) list_single_cale_day_pane_fp_t3_ParamLimits

0x6b1d,	// (0x00006fe1) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9f,	// (0x00010063) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9f,	// (0x00010063) list_single_cale_day_pane_fp_t

0x6991,	// (0x00006e55) list_empty_pane_fp_g1_ParamLimits

0x6991,	// (0x00006e55) list_empty_pane_fp_g1

0x6b36,	// (0x00006ffa) list_empty_pane_fp_t1

0x6b44,	// (0x00007008) list_empty_pane_fp_t2

0x0001,

0xfba6,	// (0x0001006a) list_empty_pane_fp_t

0x6991,	// (0x00006e55) list_single_heading_pane_fp_g1_ParamLimits

0x6991,	// (0x00006e55) list_single_heading_pane_fp_g1

0x699d,	// (0x00006e61) list_single_heading_pane_fp_g2_ParamLimits

0x699d,	// (0x00006e61) list_single_heading_pane_fp_g2

0x69a9,	// (0x00006e6d) list_single_heading_pane_fp_g3_ParamLimits

0x69a9,	// (0x00006e6d) list_single_heading_pane_fp_g3

0x0002,

0xfbab,	// (0x0001006f) list_single_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001006f) list_single_heading_pane_fp_g

0x6b52,	// (0x00007016) list_single_heading_pane_fp_t1_ParamLimits

0x6b52,	// (0x00007016) list_single_heading_pane_fp_t1

0x6b64,	// (0x00007028) list_single_heading_pane_fp_t2_ParamLimits

0x6b64,	// (0x00007028) list_single_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x00010076) list_single_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x00010076) list_single_heading_pane_fp_t

0x128e,	// (0x00001752) aid_size_cell_fast

0x02f1,	// (0x000007b5) soft_indicator_pane_cp1_t1

0x12cb,	// (0x0000178f) cell_app_pane_cp2_ParamLimits

0x12cb,	// (0x0000178f) cell_app_pane_cp2

0x60af,	// (0x00006573) fep_hwr_candidate_drop_down_list_pane

0x62f3,	// (0x000067b7) fep_hwr_candidate_pane_g3_ParamLimits

0x62f3,	// (0x000067b7) fep_hwr_candidate_pane_g3

0x6300,	// (0x000067c4) fep_hwr_candidate_pane_g4_ParamLimits

0x6300,	// (0x000067c4) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0000ffea) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0000ffea) fep_hwr_candidate_pane_g

0x63cb,	// (0x0000688f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x63cb,	// (0x0000688f) fep_vkb_candidate_drop_down_list_pane

0x67f3,	// (0x00006cb7) fep_vkb_candidate_pane_g3

0x67fb,	// (0x00006cbf) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x00010017) fep_vkb_candidate_pane_g

0x64d1,	// (0x00006995) cell_hwr_candidate_pane_g1_ParamLimits

0x6866,	// (0x00006d2a) cell_hwr_candidate_pane_g3_ParamLimits

0x6866,	// (0x00006d2a) cell_hwr_candidate_pane_g3

0x6887,	// (0x00006d4b) cell_hwr_candidate_pane_g4_ParamLimits

0x6887,	// (0x00006d4b) cell_hwr_candidate_pane_g4

0x0002,

0xfb6d,	// (0x00010031) cell_hwr_candidate_pane_g_ParamLimits

0xfb6d,	// (0x00010031) cell_hwr_candidate_pane_g

0x68c6,	// (0x00006d8a) cell_vkb_candidate_pane_g3_ParamLimits

0x68c6,	// (0x00006d8a) cell_vkb_candidate_pane_g3

0x68e1,	// (0x00006da5) cell_vkb_candidate_pane_g4_ParamLimits

0x68e1,	// (0x00006da5) cell_vkb_candidate_pane_g4

0x6b7a,	// (0x0000703e) cell_app_pane_cp2_g1_ParamLimits

0x6b7a,	// (0x0000703e) cell_app_pane_cp2_g1

0x6b98,	// (0x0000705c) cell_app_pane_cp2_g2_ParamLimits

0x6b98,	// (0x0000705c) cell_app_pane_cp2_g2

0x0001,

0xfbb7,	// (0x0001007b) cell_app_pane_cp2_g_ParamLimits

0xfbb7,	// (0x0001007b) cell_app_pane_cp2_g

0x6ba4,	// (0x00007068) cell_app_pane_cp2_t1_ParamLimits

0x6ba4,	// (0x00007068) cell_app_pane_cp2_t1

0x0f17,	// (0x000013db) grid_highlight_pane_cp1_ParamLimits

0x0f17,	// (0x000013db) grid_highlight_pane_cp1

0x6bb6,	// (0x0000707a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6bb6,	// (0x0000707a) cell_hwr_candidate_pane_cp1

0x64d1,	// (0x00006995) fep_hwr_candidate_drop_down_list_pane_g1

0x6bda,	// (0x0000709e) fep_hwr_candidate_drop_down_list_pane_g2

0x6be7,	// (0x000070ab) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x00010080) fep_hwr_candidate_drop_down_list_pane_g

0x6bf4,	// (0x000070b8) fep_hwr_candidate_drop_down_list_scroll_pane

0x6bfd,	// (0x000070c1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6bfd,	// (0x000070c1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6c0a,	// (0x000070ce) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6c0a,	// (0x000070ce) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6c17,	// (0x000070db) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6c17,	// (0x000070db) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x68c6,	// (0x00006d8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x68c6,	// (0x00006d8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x68e1,	// (0x00006da5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x68e1,	// (0x00006da5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6c24,	// (0x000070e8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6c24,	// (0x000070e8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6c3f,	// (0x00007103) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6c3f,	// (0x00007103) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6c5a,	// (0x0000711e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6c5a,	// (0x0000711e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc3,	// (0x00010087) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc3,	// (0x00010087) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6c75,	// (0x00007139) cell_vkb_candidate_pane_cp1_ParamLimits

0x6c75,	// (0x00007139) cell_vkb_candidate_pane_cp1

0x64d1,	// (0x00006995) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x64d1,	// (0x00006995) fep_vkb_candidate_drop_down_list_pane_g1

0x6bda,	// (0x0000709e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6bda,	// (0x0000709e) fep_vkb_candidate_drop_down_list_pane_g2

0x6be7,	// (0x000070ab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6be7,	// (0x000070ab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x00010080) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbc,	// (0x00010080) fep_vkb_candidate_drop_down_list_pane_g

0x6c9b,	// (0x0000715f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6c9b,	// (0x0000715f) fep_vkb_candidate_drop_down_list_scroll_pane

0x6ca8,	// (0x0000716c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ca8,	// (0x0000716c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6cb5,	// (0x00007179) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6cb5,	// (0x00007179) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6cc1,	// (0x00007185) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6cc1,	// (0x00007185) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6866,	// (0x00006d2a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6866,	// (0x00006d2a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6887,	// (0x00006d4b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6887,	// (0x00006d4b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6ccd,	// (0x00007191) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6ccd,	// (0x00007191) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6cee,	// (0x000071b2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6cee,	// (0x000071b2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6d0f,	// (0x000071d3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d0f,	// (0x000071d3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x00010098) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x00010098) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb024,	// (0x0000b4e8) title_pane_g1_ParamLimits

0xb037,	// (0x0000b4fb) title_pane_g2_ParamLimits

0xf566,	// (0x0000fa2a) title_pane_g_ParamLimits

0x18a3,	// (0x00001d67) aid_call2_pane

0x18ab,	// (0x00001d6f) aid_call_pane

0x18b3,	// (0x00001d77) popup_clock_analogue_window_g1

0x18b3,	// (0x00001d77) popup_clock_analogue_window_g2

0x18bb,	// (0x00001d7f) popup_clock_analogue_window_g3

0x18c4,	// (0x00001d88) popup_clock_analogue_window_g4

0xf316,	// (0x0000f7da) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x0000fbcf) popup_clock_analogue_window_g

0x18cc,	// (0x00001d90) popup_clock_analogue_window_t1

0x195c,	// (0x00001e20) clock_digital_number_pane_ParamLimits

0x195c,	// (0x00001e20) clock_digital_number_pane

0x1968,	// (0x00001e2c) clock_digital_number_pane_cp02_ParamLimits

0x1968,	// (0x00001e2c) clock_digital_number_pane_cp02

0x1974,	// (0x00001e38) clock_digital_number_pane_cp03_ParamLimits

0x1974,	// (0x00001e38) clock_digital_number_pane_cp03

0x1980,	// (0x00001e44) clock_digital_number_pane_cp04_ParamLimits

0x1980,	// (0x00001e44) clock_digital_number_pane_cp04

0x198c,	// (0x00001e50) clock_digital_separator_pane_ParamLimits

0x198c,	// (0x00001e50) clock_digital_separator_pane

0x1998,	// (0x00001e5c) popup_clock_digital_window_t1_ParamLimits

0x1998,	// (0x00001e5c) popup_clock_digital_window_t1

0xf316,	// (0x0000f7da) clock_digital_number_pane_g1

0xf316,	// (0x0000f7da) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x0000fbda) clock_digital_number_pane_g

0xf316,	// (0x0000f7da) clock_digital_separator_pane_g1

0xf316,	// (0x0000f7da) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x0000fbda) clock_digital_separator_pane_g

0xc655,	// (0x0000cb19) aid_fill_nsta_ParamLimits

0xc78b,	// (0x0000cc4f) indicator_nsta_pane_ParamLimits

0x3012,	// (0x000034d6) popup_clock_analogue_window

0x3012,	// (0x000034d6) popup_clock_digital_window

0x124f,	// (0x00001713) grid_indicator_nsta_pane_ParamLimits

0x5a24,	// (0x00005ee8) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0000ff6a) clock_nsta_pane_t

0x168c,	// (0x00001b50) aid_size_max_handle

0xba8e,	// (0x0000bf52) aid_size_min_handle

0x2175,	// (0x00002639) editor_scroll_pane

0x6d2a,	// (0x000071ee) ex_editor_pane

0x11fb,	// (0x000016bf) scroll_pane_cp13

0x091b,	// (0x00000ddf) scroll_pane_cp14

0x1901,	// (0x00001dc5) scroll_pane_cp36

0xbb1b,	// (0x0000bfdf) list_single_graphic_hl_pane_cp2_ParamLimits

0xbb1b,	// (0x0000bfdf) list_single_graphic_hl_pane_cp2

0xd13b,	// (0x0000d5ff) list_single_graphic_hl_pane_ParamLimits

0xd13b,	// (0x0000d5ff) list_single_graphic_hl_pane

0x6d32,	// (0x000071f6) aid_size_min_hl_cp1

0x6d3b,	// (0x000071ff) list_highlight_pane_cp34_ParamLimits

0x6d3b,	// (0x000071ff) list_highlight_pane_cp34

0x6d4c,	// (0x00007210) list_single_graphic_hl_pane_g1_ParamLimits

0x6d4c,	// (0x00007210) list_single_graphic_hl_pane_g1

0x0923,	// (0x00000de7) list_single_graphic_hl_pane_g2_ParamLimits

0x0923,	// (0x00000de7) list_single_graphic_hl_pane_g2

0x0923,	// (0x00000de7) list_single_graphic_hl_pane_g3_ParamLimits

0x0923,	// (0x00000de7) list_single_graphic_hl_pane_g3

0x092f,	// (0x00000df3) list_single_graphic_hl_pane_g4_ParamLimits

0x092f,	// (0x00000df3) list_single_graphic_hl_pane_g4

0x6dbf,	// (0x00007283) list_single_graphic_hl_pane_g5_ParamLimits

0x6dbf,	// (0x00007283) list_single_graphic_hl_pane_g5

0x0004,

0xfbe5,	// (0x000100a9) list_single_graphic_hl_pane_g_ParamLimits

0xfbe5,	// (0x000100a9) list_single_graphic_hl_pane_g

0xd6c6,	// (0x0000db8a) list_single_graphic_hl_pane_t1_ParamLimits

0xd6c6,	// (0x0000db8a) list_single_graphic_hl_pane_t1

0x6d8f,	// (0x00007253) aid_size_min_hl_cp2

0x6d98,	// (0x0000725c) list_highlight_pane_cp34_cp2_ParamLimits

0x6d98,	// (0x0000725c) list_highlight_pane_cp34_cp2

0x6d4c,	// (0x00007210) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6d4c,	// (0x00007210) list_single_graphic_hl_pane_g1_cp2

0x6da5,	// (0x00007269) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6da5,	// (0x00007269) list_single_graphic_hl_pane_g2_cp2

0x6db1,	// (0x00007275) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6db1,	// (0x00007275) list_single_graphic_hl_pane_g3_cp2

0x092f,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x092f,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2

0x6dbf,	// (0x00007283) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6dbf,	// (0x00007283) list_single_graphic_hl_pane_g5_cp2

0xbdce,	// (0x0000c292) control_pane_g4_ParamLimits

0xbdce,	// (0x0000c292) control_pane_g4

0x26f6,	// (0x00002bba) bg_popup_sub_pane_cp10_ParamLimits

0x6027,	// (0x000064eb) list_choice_list_pane_ParamLimits

0x6036,	// (0x000064fa) scroll_pane_cp23

0x037f,	// (0x00000843) bg_popup_preview_window_pane_cp02_ParamLimits

0x6932,	// (0x00006df6) list_preview_fixed_pane_ParamLimits

0x6948,	// (0x00006e0c) list_preview_fixed_pane_cp_ParamLimits

0x6948,	// (0x00006e0c) list_preview_fixed_pane_cp

0x6954,	// (0x00006e18) popup_preview_fixed_window_g1_ParamLimits

0x6954,	// (0x00006e18) popup_preview_fixed_window_g1

0x6960,	// (0x00006e24) popup_preview_fixed_window_g2_ParamLimits

0x6960,	// (0x00006e24) popup_preview_fixed_window_g2

0x0002,

0xfb74,	// (0x00010038) popup_preview_fixed_window_g_ParamLimits

0xfb74,	// (0x00010038) popup_preview_fixed_window_g

0x152c,	// (0x000019f0) aid_navi_side_left_pane_ParamLimits

0x1541,	// (0x00001a05) aid_navi_side_right_pane_ParamLimits

0x1559,	// (0x00001a1d) navi_icon_pane_stacon_ParamLimits

0x156d,	// (0x00001a31) navi_navi_pane_stacon_ParamLimits

0x1559,	// (0x00001a1d) navi_text_pane_stacon_ParamLimits

0xf30c,	// (0x0000f7d0) main_text_info_pane

0x6de9,	// (0x000072ad) listscroll_text_info_pane

0x6df1,	// (0x000072b5) list_text_info_pane_ParamLimits

0x6df1,	// (0x000072b5) list_text_info_pane

0x6e00,	// (0x000072c4) scroll_pane_cp24_ParamLimits

0x6e00,	// (0x000072c4) scroll_pane_cp24

0xd6dc,	// (0x0000dba0) list_text_info_pane_t1_ParamLimits

0xd6dc,	// (0x0000dba0) list_text_info_pane_t1

0xbf52,	// (0x0000c416) popup_fast_swap2_window_ParamLimits

0xbf52,	// (0x0000c416) popup_fast_swap2_window

0x6e43,	// (0x00007307) aid_size_cell_fast2

0xf30c,	// (0x0000f7d0) bg_popup_window_pane_cp17

0x3890,	// (0x00003d54) heading_pane_cp2

0x05df,	// (0x00000aa3) listscroll_fast2_pane

0x6e4d,	// (0x00007311) grid_fast2_pane

0x6e57,	// (0x0000731b) listscroll_fast2_pane_g1

0x6e61,	// (0x00007325) listscroll_fast2_pane_g2

0x0001,

0xfbf0,	// (0x000100b4) listscroll_fast2_pane_g

0x11fb,	// (0x000016bf) scroll_pane_cp26

0x6e6b,	// (0x0000732f) cell_fast2_pane_ParamLimits

0x6e6b,	// (0x0000732f) cell_fast2_pane

0x6e82,	// (0x00007346) cell_fast2_pane_g1

0x6e8b,	// (0x0000734f) cell_fast2_pane_g2

0x6e94,	// (0x00007358) cell_fast2_pane_g3

0x0002,

0xfbf5,	// (0x000100b9) cell_fast2_pane_g

0x06d8,	// (0x00000b9c) grid_highlight_pane_cp9

0x06ed,	// (0x00000bb1) main_eswt_pane_ParamLimits

0x06ed,	// (0x00000bb1) main_eswt_pane

0x6e15,	// (0x000072d9) list_single_text_info_pane

0x6e9c,	// (0x00007360) eswt_ctrl_button_pane

0x6e9c,	// (0x00007360) eswt_ctrl_canvas_pane

0x6ea4,	// (0x00007368) eswt_ctrl_combo_pane

0x6e9c,	// (0x00007360) eswt_ctrl_default_pane

0x6e9c,	// (0x00007360) eswt_ctrl_label_pane

0x6eac,	// (0x00007370) eswt_ctrl_wait_pane

0x6eb4,	// (0x00007378) eswt_shell_pane

0xf30c,	// (0x0000f7d0) listscroll_eswt_app_pane

0x6ed4,	// (0x00007398) popup_eswt_tasktip_window_ParamLimits

0x6ed4,	// (0x00007398) popup_eswt_tasktip_window

0x3474,	// (0x00003938) bg_popup_window_pane_cp18

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_ParamLimits

0x6ee5,	// (0x000073a9) eswt_control_pane_g1

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_ParamLimits

0x6ef2,	// (0x000073b6) eswt_control_pane_g2

0x6eff,	// (0x000073c3) eswt_control_pane_g3_ParamLimits

0x6eff,	// (0x000073c3) eswt_control_pane_g3

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_ParamLimits

0x6f0c,	// (0x000073d0) eswt_control_pane_g4

0x0003,

0xfbfc,	// (0x000100c0) eswt_control_pane_g_ParamLimits

0xfbfc,	// (0x000100c0) eswt_control_pane_g

0x0f17,	// (0x000013db) bg_button_pane_ParamLimits

0x0f17,	// (0x000013db) bg_button_pane

0x06ed,	// (0x00000bb1) common_borders_pane_copy2_ParamLimits

0x06ed,	// (0x00000bb1) common_borders_pane_copy2

0x6f19,	// (0x000073dd) control_button_pane_g1_ParamLimits

0x6f19,	// (0x000073dd) control_button_pane_g1

0x6f25,	// (0x000073e9) control_button_pane_g2_ParamLimits

0x6f25,	// (0x000073e9) control_button_pane_g2

0x6f31,	// (0x000073f5) control_button_pane_g3_ParamLimits

0x6f31,	// (0x000073f5) control_button_pane_g3

0x0002,

0xfc05,	// (0x000100c9) control_button_pane_g_ParamLimits

0xfc05,	// (0x000100c9) control_button_pane_g

0x6f45,	// (0x00007409) control_button_pane_t1

0x6f53,	// (0x00007417) control_button_pane_t2

0x0001,

0xfc0c,	// (0x000100d0) control_button_pane_t

0x32e1,	// (0x000037a5) bg_button_pane_g1

0x32e9,	// (0x000037ad) bg_button_pane_g2

0x32f1,	// (0x000037b5) bg_button_pane_g3

0x32f9,	// (0x000037bd) bg_button_pane_g4

0x3301,	// (0x000037c5) bg_button_pane_g5

0x3309,	// (0x000037cd) bg_button_pane_g6

0x3311,	// (0x000037d5) bg_button_pane_g7

0x3319,	// (0x000037dd) bg_button_pane_g8

0x3321,	// (0x000037e5) bg_button_pane_g9

0x0008,

0xf866,	// (0x0000fd2a) bg_button_pane_g

0x5fe2,	// (0x000064a6) common_borders_pane_ParamLimits

0x5fe2,	// (0x000064a6) common_borders_pane

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy1_ParamLimits

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy1

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy1_ParamLimits

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy1

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy1_ParamLimits

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy1

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy1_ParamLimits

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy1

0x601d,	// (0x000064e1) bg_eswt_ctrl_canvas_pane_g1

0x5fe2,	// (0x000064a6) common_borders_pane_cp2_ParamLimits

0x5fe2,	// (0x000064a6) common_borders_pane_cp2

0x5fe2,	// (0x000064a6) common_borders_pane_cp3_ParamLimits

0x5fe2,	// (0x000064a6) common_borders_pane_cp3

0x6f61,	// (0x00007425) separator_horizontal_pane

0x6f69,	// (0x0000742d) separator_vertical_pane

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy2_ParamLimits

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy2

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy2_ParamLimits

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy2

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy2_ParamLimits

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy2

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy2_ParamLimits

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy2

0xf30c,	// (0x0000f7d0) common_borders_pane_cp4

0x6f72,	// (0x00007436) separator_horizontal_pane_g1

0x6f7b,	// (0x0000743f) separator_horizontal_pane_g2

0x6f84,	// (0x00007448) separator_horizontal_pane_g3

0x0002,

0xfc11,	// (0x000100d5) separator_horizontal_pane_g

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy3_ParamLimits

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy3

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy3_ParamLimits

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy3

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy3_ParamLimits

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy3

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy3_ParamLimits

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy3

0xf30c,	// (0x0000f7d0) common_borders_pane_cp5

0x6f8d,	// (0x00007451) separator_vertical_pane_g1

0x6f96,	// (0x0000745a) separator_vertical_pane_g2

0x6f9f,	// (0x00007463) separator_vertical_pane_g3

0x0002,

0xfc18,	// (0x000100dc) separator_vertical_pane_g

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy4_ParamLimits

0x6ee5,	// (0x000073a9) eswt_control_pane_g1_copy4

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy4_ParamLimits

0x6ef2,	// (0x000073b6) eswt_control_pane_g2_copy4

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy4_ParamLimits

0x6eff,	// (0x000073c3) eswt_control_pane_g3_copy4

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy4_ParamLimits

0x6f0c,	// (0x000073d0) eswt_control_pane_g4_copy4

0xd6fe,	// (0x0000dbc2) eswt_ctrl_combo_button_pane

0xd706,	// (0x0000dbca) eswt_ctrl_input_pane

0xd70e,	// (0x0000dbd2) popup_choice_list_window_cp70

0xd716,	// (0x0000dbda) eswt_ctrl_input_pane_t1

0xf30c,	// (0x0000f7d0) input_focus_pane_cp70

0x5fe2,	// (0x000064a6) bg_button_pane_cp70_ParamLimits

0x5fe2,	// (0x000064a6) bg_button_pane_cp70

0xd724,	// (0x0000dbe8) eswt_ctrl_combo_button_pane_g1

0x6fd6,	// (0x0000749a) wait_bar_pane_cp70

0x3474,	// (0x00003938) bg_popup_window_pane_cp70_ParamLimits

0x3474,	// (0x00003938) bg_popup_window_pane_cp70

0x6fde,	// (0x000074a2) popup_eswt_tasktip_window_t1

0x6ff4,	// (0x000074b8) wait_bar_pane_cp71_ParamLimits

0x6ff4,	// (0x000074b8) wait_bar_pane_cp71

0x7000,	// (0x000074c4) grid_eswt_app_pane

0x16f0,	// (0x00001bb4) scroll_pane_cp70

0xd72c,	// (0x0000dbf0) cell_eswt_app_pane_ParamLimits

0xd72c,	// (0x0000dbf0) cell_eswt_app_pane

0xd75e,	// (0x0000dc22) cell_eswt_app_pane_g1_ParamLimits

0xd75e,	// (0x0000dc22) cell_eswt_app_pane_g1

0xd78d,	// (0x0000dc51) cell_eswt_app_pane_g2_ParamLimits

0xd78d,	// (0x0000dc51) cell_eswt_app_pane_g2

0x0001,

0xfc1f,	// (0x000100e3) cell_eswt_app_pane_g_ParamLimits

0xfc1f,	// (0x000100e3) cell_eswt_app_pane_g

0xd7b6,	// (0x0000dc7a) cell_eswt_app_pane_t1_ParamLimits

0xd7b6,	// (0x0000dc7a) cell_eswt_app_pane_t1

0x70c5,	// (0x00007589) grid_highlight_pane_cp70_ParamLimits

0x70c5,	// (0x00007589) grid_highlight_pane_cp70

0x4bf9,	// (0x000050bd) set_content_pane_g1

0x24ce,	// (0x00002992) status_small_volume_pane

0x70d1,	// (0x00007595) status_small_volume_pane_g1

0x70d9,	// (0x0000759d) volume_small2_pane

0x70e2,	// (0x000075a6) volume_small2_pane_g1

0x70eb,	// (0x000075af) volume_small2_pane_g2

0x70f4,	// (0x000075b8) volume_small2_pane_g3

0x70fd,	// (0x000075c1) volume_small2_pane_g4

0x7106,	// (0x000075ca) volume_small2_pane_g5

0x710f,	// (0x000075d3) volume_small2_pane_g6

0x7118,	// (0x000075dc) volume_small2_pane_g7

0x7121,	// (0x000075e5) volume_small2_pane_g8

0x712a,	// (0x000075ee) volume_small2_pane_g9

0x7133,	// (0x000075f7) volume_small2_pane_g10

0x0009,

0xfc24,	// (0x000100e8) volume_small2_pane_g

0x6625,	// (0x00006ae9) fep_vkb_top_text_pane_g1_ParamLimits

0xd66e,	// (0x0000db32) fep_vkb_top_text_pane_t1_ParamLimits

0x696c,	// (0x00006e30) popup_preview_fixed_window_g3_ParamLimits

0x696c,	// (0x00006e30) popup_preview_fixed_window_g3

0xc5e8,	// (0x0000caac) popup_toolbar_trans_pane

0xcf5a,	// (0x0000d41e) aid_height_set_list_ParamLimits

0x4aaf,	// (0x00004f73) aid_size_parent_ParamLimits

0x26f6,	// (0x00002bba) list_highlight_pane_cp2_ParamLimits

0x4bf9,	// (0x000050bd) set_content_pane_g1_ParamLimits

0xd14f,	// (0x0000d613) list_single_image_pane_ParamLimits

0xd14f,	// (0x0000d613) list_single_image_pane

0xd7e8,	// (0x0000dcac) aid_size_cell_image_ParamLimits

0xd7e8,	// (0x0000dcac) aid_size_cell_image

0xd7f5,	// (0x0000dcb9) grid_single_image_pane_ParamLimits

0xd7f5,	// (0x0000dcb9) grid_single_image_pane

0x0f3d,	// (0x00001401) list_single_image_pane_g1_ParamLimits

0x0f3d,	// (0x00001401) list_single_image_pane_g1

0x0f49,	// (0x0000140d) list_single_image_pane_g2_ParamLimits

0x0f49,	// (0x0000140d) list_single_image_pane_g2

0x0001,

0xfc39,	// (0x000100fd) list_single_image_pane_g_ParamLimits

0xfc39,	// (0x000100fd) list_single_image_pane_g

0x7157,	// (0x0000761b) list_single_image_pane_t1_ParamLimits

0x7157,	// (0x0000761b) list_single_image_pane_t1

0xd803,	// (0x0000dcc7) cell_image_list_pane_ParamLimits

0xd803,	// (0x0000dcc7) cell_image_list_pane

0xd81d,	// (0x0000dce1) cell_image_list_pane_g1

0xd826,	// (0x0000dcea) cell_image_list_pane_g2

0x0001,

0xfc3e,	// (0x00010102) cell_image_list_pane_g

0x7195,	// (0x00007659) aid_size_cell_tb_trans_pane

0x0f17,	// (0x000013db) bg_tb_trans_pane

0x71a7,	// (0x0000766b) grid_tb_trans_pane

0x32e1,	// (0x000037a5) bg_tb_trans_pane_g1

0x32e9,	// (0x000037ad) bg_tb_trans_pane_g2

0x32f1,	// (0x000037b5) bg_tb_trans_pane_g3

0x32f9,	// (0x000037bd) bg_tb_trans_pane_g4

0x3301,	// (0x000037c5) bg_tb_trans_pane_g5

0x3319,	// (0x000037dd) bg_tb_trans_pane_g6

0x3321,	// (0x000037e5) bg_tb_trans_pane_g7

0x3309,	// (0x000037cd) bg_tb_trans_pane_g8

0x3311,	// (0x000037d5) bg_tb_trans_pane_g9

0x0008,

0xfc43,	// (0x00010107) bg_tb_trans_pane_g

0x71bb,	// (0x0000767f) cell_toolbar_trans_pane_ParamLimits

0x71bb,	// (0x0000767f) cell_toolbar_trans_pane

0x601d,	// (0x000064e1) cell_toolbar_trans_pane_g1

0xd381,	// (0x0000d845) list_form2_midp_pane_t1

0xd38f,	// (0x0000d853) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0000ffb0) list_form2_midp_pane_t

0x5c8d,	// (0x00006151) scroll_pane_cp51_ParamLimits

0x5e7f,	// (0x00006343) form2_midp_wait_pane_g1

0x5e88,	// (0x0000634c) form2_midp_wait_pane_g2

0x5e91,	// (0x00006355) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0000ffc5) form2_midp_wait_pane_g

0x004b,	// (0x0000050f) list_highlight_pane_cp21_ParamLimits

0x5ec2,	// (0x00006386) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5ed1,	// (0x00006395) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4cdc,	// (0x000051a0) list_single_2graphic_im_pane_ParamLimits

0x4cdc,	// (0x000051a0) list_single_2graphic_im_pane

0xd82f,	// (0x0000dcf3) list_single_2graphic_im_pane_g1_ParamLimits

0xd82f,	// (0x0000dcf3) list_single_2graphic_im_pane_g1

0xd840,	// (0x0000dd04) list_single_2graphic_im_pane_g2_ParamLimits

0xd840,	// (0x0000dd04) list_single_2graphic_im_pane_g2

0xd84c,	// (0x0000dd10) list_single_2graphic_im_pane_g3_ParamLimits

0xd84c,	// (0x0000dd10) list_single_2graphic_im_pane_g3

0x0003,

0xfc56,	// (0x0001011a) list_single_2graphic_im_pane_g_ParamLimits

0xfc56,	// (0x0001011a) list_single_2graphic_im_pane_g

0xd860,	// (0x0000dd24) list_single_2graphic_im_pane_t1_ParamLimits

0xd860,	// (0x0000dd24) list_single_2graphic_im_pane_t1

0x6978,	// (0x00006e3c) list_single_graphic_2heading_pane_fp_ParamLimits

0x6978,	// (0x00006e3c) list_single_graphic_2heading_pane_fp

0x69e0,	// (0x00006ea4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x69e0,	// (0x00006ea4) list_single_graphic_2heading_pane_fp_g1

0x6991,	// (0x00006e55) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6991,	// (0x00006e55) list_single_graphic_2heading_pane_fp_g2

0x699d,	// (0x00006e61) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x699d,	// (0x00006e61) list_single_graphic_2heading_pane_fp_g3

0x69a9,	// (0x00006e6d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x69a9,	// (0x00006e6d) list_single_graphic_2heading_pane_fp_g4

0x69bd,	// (0x00006e81) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x69bd,	// (0x00006e81) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb84,	// (0x00010048) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb84,	// (0x00010048) list_single_graphic_2heading_pane_fp_g

0x724f,	// (0x00007713) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x724f,	// (0x00007713) list_single_graphic_2heading_pane_fp_t1

0x6a18,	// (0x00006edc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6a18,	// (0x00006edc) list_single_graphic_2heading_pane_fp_t2

0x7265,	// (0x00007729) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7265,	// (0x00007729) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5f,	// (0x00010123) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5f,	// (0x00010123) list_single_graphic_2heading_pane_fp_t

0x6261,	// (0x00006725) fep_hwr_write_pane_g5_ParamLimits

0x6261,	// (0x00006725) fep_hwr_write_pane_g5

0x626d,	// (0x00006731) fep_hwr_write_pane_g6_ParamLimits

0x626d,	// (0x00006731) fep_hwr_write_pane_g6

0x6eb4,	// (0x00007378) eswt_shell_pane_ParamLimits

0x3474,	// (0x00003938) bg_popup_window_pane_cp18_ParamLimits

0x4955,	// (0x00004e19) heading_pane_cp70

0x6fde,	// (0x000074a2) popup_eswt_tasktip_window_t1_ParamLimits

0xc6b2,	// (0x0000cb76) aid_touch_tab_arrow_left

0xc6c6,	// (0x0000cb8a) aid_touch_tab_arrow_right

0xb04f,	// (0x0000b513) title_pane_g3_ParamLimits

0xb04f,	// (0x0000b513) title_pane_g3

0x0de6,	// (0x000012aa) set_value_pane_g1

0xc5e8,	// (0x0000caac) popup_toolbar_trans_pane_ParamLimits

0x7195,	// (0x00007659) aid_size_cell_tb_trans_pane_ParamLimits

0x0f17,	// (0x000013db) bg_tb_trans_pane_ParamLimits

0x71a7,	// (0x0000766b) grid_tb_trans_pane_ParamLimits

0x037f,	// (0x00000843) cont_note_pane_ParamLimits

0x037f,	// (0x00000843) cont_note_pane

0x06ed,	// (0x00000bb1) cont_snote2_single_text_pane_ParamLimits

0x06ed,	// (0x00000bb1) cont_snote2_single_text_pane

0x06ed,	// (0x00000bb1) cont_snote2_single_graphic_pane_ParamLimits

0x06ed,	// (0x00000bb1) cont_snote2_single_graphic_pane

0x3aac,	// (0x00003f70) cont_note_wait_pane_ParamLimits

0x3aac,	// (0x00003f70) cont_note_wait_pane

0x3aac,	// (0x00003f70) cont_note_image_pane_ParamLimits

0x3aac,	// (0x00003f70) cont_note_image_pane

0x727b,	// (0x0000773f) popup_note2_window_g1_ParamLimits

0x727b,	// (0x0000773f) popup_note2_window_g1

0x72ac,	// (0x00007770) popup_note2_window_t1_ParamLimits

0x72ac,	// (0x00007770) popup_note2_window_t1

0x72f1,	// (0x000077b5) popup_note2_window_t2_ParamLimits

0x72f1,	// (0x000077b5) popup_note2_window_t2

0x7336,	// (0x000077fa) popup_note2_window_t3_ParamLimits

0x7336,	// (0x000077fa) popup_note2_window_t3

0x737b,	// (0x0000783f) popup_note2_window_t4_ParamLimits

0x737b,	// (0x0000783f) popup_note2_window_t4

0x0403,	// (0x000008c7) popup_note2_window_t5_ParamLimits

0x0403,	// (0x000008c7) popup_note2_window_t5

0x0004,

0xfc6b,	// (0x0001012f) popup_note2_window_t_ParamLimits

0xfc6b,	// (0x0001012f) popup_note2_window_t

0x73aa,	// (0x0000786e) popup_note2_image_window_g1_ParamLimits

0x73aa,	// (0x0000786e) popup_note2_image_window_g1

0x73b6,	// (0x0000787a) popup_note2_image_window_g2_ParamLimits

0x73b6,	// (0x0000787a) popup_note2_image_window_g2

0x0001,

0xfc76,	// (0x0001013a) popup_note2_image_window_g_ParamLimits

0xfc76,	// (0x0001013a) popup_note2_image_window_g

0x73c8,	// (0x0000788c) popup_note2_image_window_t1_ParamLimits

0x73c8,	// (0x0000788c) popup_note2_image_window_t1

0x73e0,	// (0x000078a4) popup_note2_image_window_t2_ParamLimits

0x73e0,	// (0x000078a4) popup_note2_image_window_t2

0x73f8,	// (0x000078bc) popup_note2_image_window_t3_ParamLimits

0x73f8,	// (0x000078bc) popup_note2_image_window_t3

0x0002,

0xfc7b,	// (0x0001013f) popup_note2_image_window_t_ParamLimits

0xfc7b,	// (0x0001013f) popup_note2_image_window_t

0x3aba,	// (0x00003f7e) popup_note2_wait_window_g1_ParamLimits

0x3aba,	// (0x00003f7e) popup_note2_wait_window_g1

0x7414,	// (0x000078d8) popup_note2_wait_window_g2_ParamLimits

0x7414,	// (0x000078d8) popup_note2_wait_window_g2

0x3ad2,	// (0x00003f96) popup_note2_wait_window_g3_ParamLimits

0x3ad2,	// (0x00003f96) popup_note2_wait_window_g3

0x0002,

0xfc82,	// (0x00010146) popup_note2_wait_window_g_ParamLimits

0xfc82,	// (0x00010146) popup_note2_wait_window_g

0x7420,	// (0x000078e4) popup_note2_wait_window_t1_ParamLimits

0x7420,	// (0x000078e4) popup_note2_wait_window_t1

0x743e,	// (0x00007902) popup_note2_wait_window_t2_ParamLimits

0x743e,	// (0x00007902) popup_note2_wait_window_t2

0x745c,	// (0x00007920) popup_note2_wait_window_t3_ParamLimits

0x745c,	// (0x00007920) popup_note2_wait_window_t3

0x746e,	// (0x00007932) popup_note2_wait_window_t4_ParamLimits

0x746e,	// (0x00007932) popup_note2_wait_window_t4

0x0003,

0xfc89,	// (0x0001014d) popup_note2_wait_window_t_ParamLimits

0xfc89,	// (0x0001014d) popup_note2_wait_window_t

0x7480,	// (0x00007944) wait_bar2_pane_ParamLimits

0x7480,	// (0x00007944) wait_bar2_pane

0x7498,	// (0x0000795c) popup_snote2_single_text_window_g1_ParamLimits

0x7498,	// (0x0000795c) popup_snote2_single_text_window_g1

0x74c0,	// (0x00007984) popup_snote2_single_text_window_t1_ParamLimits

0x74c0,	// (0x00007984) popup_snote2_single_text_window_t1

0x750c,	// (0x000079d0) popup_snote2_single_text_window_t2_ParamLimits

0x750c,	// (0x000079d0) popup_snote2_single_text_window_t2

0x7558,	// (0x00007a1c) popup_snote2_single_text_window_t3_ParamLimits

0x7558,	// (0x00007a1c) popup_snote2_single_text_window_t3

0x7599,	// (0x00007a5d) popup_snote2_single_text_window_t4_ParamLimits

0x7599,	// (0x00007a5d) popup_snote2_single_text_window_t4

0x75cf,	// (0x00007a93) popup_snote2_single_text_window_t5_ParamLimits

0x75cf,	// (0x00007a93) popup_snote2_single_text_window_t5

0x0004,

0xfc92,	// (0x00010156) popup_snote2_single_text_window_t_ParamLimits

0xfc92,	// (0x00010156) popup_snote2_single_text_window_t

0x75fa,	// (0x00007abe) popup_snote2_single_graphic_window_g1_ParamLimits

0x75fa,	// (0x00007abe) popup_snote2_single_graphic_window_g1

0x7622,	// (0x00007ae6) popup_snote2_single_graphic_window_g2_ParamLimits

0x7622,	// (0x00007ae6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9d,	// (0x00010161) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9d,	// (0x00010161) popup_snote2_single_graphic_window_g

0x764a,	// (0x00007b0e) popup_snote2_single_graphic_window_t1_ParamLimits

0x764a,	// (0x00007b0e) popup_snote2_single_graphic_window_t1

0x7696,	// (0x00007b5a) popup_snote2_single_graphic_window_t2_ParamLimits

0x7696,	// (0x00007b5a) popup_snote2_single_graphic_window_t2

0x7558,	// (0x00007a1c) popup_snote2_single_graphic_window_t3_ParamLimits

0x7558,	// (0x00007a1c) popup_snote2_single_graphic_window_t3

0x7599,	// (0x00007a5d) popup_snote2_single_graphic_window_t4_ParamLimits

0x7599,	// (0x00007a5d) popup_snote2_single_graphic_window_t4

0x75cf,	// (0x00007a93) popup_snote2_single_graphic_window_t5_ParamLimits

0x75cf,	// (0x00007a93) popup_snote2_single_graphic_window_t5

0x0004,

0xfca2,	// (0x00010166) popup_snote2_single_graphic_window_t_ParamLimits

0xfca2,	// (0x00010166) popup_snote2_single_graphic_window_t

0x5ae6,	// (0x00005faa) clock_nsta_pane_cp2_t1

0x5ae6,	// (0x00005faa) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0000ff86) clock_nsta_pane_cp2_t

0x0f31,	// (0x000013f5) form_field_data_wide_pane_g1_ParamLimits

0x0f3d,	// (0x00001401) form_field_data_wide_pane_g2_ParamLimits

0x0f3d,	// (0x00001401) form_field_data_wide_pane_g2

0x0f49,	// (0x0000140d) form_field_data_wide_pane_g3_ParamLimits

0x0f49,	// (0x0000140d) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x0000fb52) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x0000fb52) form_field_data_wide_pane_g

0xd289,	// (0x0000d74d) grid_touch_3_pane_ParamLimits

0xd289,	// (0x0000d74d) grid_touch_3_pane

0xd891,	// (0x0000dd55) cell_touch_3_pane_ParamLimits

0xd891,	// (0x0000dd55) cell_touch_3_pane

0x601d,	// (0x000064e1) cell_touch_3_pane_g1

0x601d,	// (0x000064e1) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0001000b) cell_touch_3_pane_g

0x0435,	// (0x000008f9) cont_query_data_pane

0x043d,	// (0x00000901) cont_query_data_pane_cp1

0x7715,	// (0x00007bd9) button_value_adjust_pane_cp7

0x771d,	// (0x00007be1) query_popup_pane_cp3

0x1a22,	// (0x00001ee6) bg_popup_sub_pane_cp22_ParamLimits

0x1a38,	// (0x00001efc) navi_navi_volume_pane_cp2

0x1a53,	// (0x00001f17) popup_side_volume_key_window_g2

0x1a62,	// (0x00001f26) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0000fbe8) popup_side_volume_key_window_g

0x1a7f,	// (0x00001f43) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0000fbef) popup_side_volume_key_window_t

0x1f0c,	// (0x000023d0) popup_side_volume_key_window_ParamLimits

0xb531,	// (0x0000b9f5) list_double_graphic_pane_g4_ParamLimits

0xb531,	// (0x0000b9f5) list_double_graphic_pane_g4

0xd126,	// (0x0000d5ea) list_single_2heading_msg_pane_ParamLimits

0xd126,	// (0x0000d5ea) list_single_2heading_msg_pane

0xd8db,	// (0x0000dd9f) list_single_2heading_msg_pane_g1_ParamLimits

0xd8db,	// (0x0000dd9f) list_single_2heading_msg_pane_g1

0xd8e7,	// (0x0000ddab) list_single_2heading_msg_pane_g2_ParamLimits

0xd8e7,	// (0x0000ddab) list_single_2heading_msg_pane_g2

0xd8fa,	// (0x0000ddbe) list_single_2heading_msg_pane_g3_ParamLimits

0xd8fa,	// (0x0000ddbe) list_single_2heading_msg_pane_g3

0xd906,	// (0x0000ddca) list_single_2heading_msg_pane_g4_ParamLimits

0xd906,	// (0x0000ddca) list_single_2heading_msg_pane_g4

0x0003,

0xfcad,	// (0x00010171) list_single_2heading_msg_pane_g_ParamLimits

0xfcad,	// (0x00010171) list_single_2heading_msg_pane_g

0xd91e,	// (0x0000dde2) list_single_2heading_msg_pane_t1_ParamLimits

0xd91e,	// (0x0000dde2) list_single_2heading_msg_pane_t1

0xd946,	// (0x0000de0a) list_single_2heading_msg_pane_t2_ParamLimits

0xd946,	// (0x0000de0a) list_single_2heading_msg_pane_t2

0xd9b1,	// (0x0000de75) list_single_2heading_msg_pane_t3_ParamLimits

0xd9b1,	// (0x0000de75) list_single_2heading_msg_pane_t3

0x780e,	// (0x00007cd2) list_single_2heading_msg_pane_t4_ParamLimits

0x780e,	// (0x00007cd2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb6,	// (0x0001017a) list_single_2heading_msg_pane_t_ParamLimits

0xfcb6,	// (0x0001017a) list_single_2heading_msg_pane_t

0xf55a,	// (0x0000fa1e) title_pane_g4_ParamLimits

0xf55a,	// (0x0000fa1e) title_pane_g4

0x1454,	// (0x00001918) title_pane_stacon_g3_ParamLimits

0x1454,	// (0x00001918) title_pane_stacon_g3

0x7212,	// (0x000076d6) list_single_2graphic_im_pane_g4_ParamLimits

0x7212,	// (0x000076d6) list_single_2graphic_im_pane_g4

0x468e,	// (0x00004b52) popup_side_volume_key_window_cp

0x5121,	// (0x000055e5) main_idle_act2_pane_t1

0x3329,	// (0x000037ed) toolbar_button_pane_g10

0xb3dc,	// (0x0000b8a0) popup_toolbar_window_cp1

0x5ad7,	// (0x00005f9b) clock_nsta_pane_cp_t1

0x5ad7,	// (0x00005f9b) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0000ff81) clock_nsta_pane_cp_t

0x1a38,	// (0x00001efc) navi_navi_volume_pane_cp2_ParamLimits

0x1a47,	// (0x00001f0b) popup_side_volume_key_window_g1_ParamLimits

0x1a53,	// (0x00001f17) popup_side_volume_key_window_g2_ParamLimits

0x1a62,	// (0x00001f26) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0000fbe8) popup_side_volume_key_window_g_ParamLimits

0x609b,	// (0x0000655f) fep_hwr_aid_pane

0x6144,	// (0x00006608) bg_fep_hwr_top_pane_g4_ParamLimits

0x6164,	// (0x00006628) fep_hwr_top_pane_g1_ParamLimits

0x6176,	// (0x0000663a) fep_hwr_top_pane_g2_ParamLimits

0x6188,	// (0x0000664c) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0000ffd6) fep_hwr_top_pane_g_ParamLimits

0x619d,	// (0x00006661) fep_hwr_top_text_pane_ParamLimits

0x4443,	// (0x00004907) aid_touch_tab_arrow_arrow_2

0x444c,	// (0x00004910) aid_touch_tab_arrow_left_2

0x60af,	// (0x00006573) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x60e6,	// (0x000065aa) fep_hwr_prediction_pane

0x641f,	// (0x000068e3) fep_vkb_prediction_pane

0xd64e,	// (0x0000db12) fep_vkb_side_pane_g3_ParamLimits

0xd64e,	// (0x0000db12) fep_vkb_side_pane_g3

0x64d1,	// (0x00006995) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6bda,	// (0x0000709e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6be7,	// (0x000070ab) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbc,	// (0x00010080) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7833,	// (0x00007cf7) fep_hwr_prediction_pane_g1

0x783d,	// (0x00007d01) fep_hwr_prediction_pane_g2

0x7845,	// (0x00007d09) fep_hwr_prediction_pane_g3

0x784d,	// (0x00007d11) fep_hwr_prediction_pane_g4

0x0003,

0xfcbf,	// (0x00010183) fep_hwr_prediction_pane_g

0x7833,	// (0x00007cf7) fep_vkb_prediction_pane_g1

0x7855,	// (0x00007d19) fep_vkb_prediction_pane_g2

0x785d,	// (0x00007d21) fep_vkb_prediction_pane_g3

0x7865,	// (0x00007d29) fep_vkb_prediction_pane_g4

0x0003,

0xfcc8,	// (0x0001018c) fep_vkb_prediction_pane_g

0x4a16,	// (0x00004eda) slider_set_pane_g3

0x4a2a,	// (0x00004eee) slider_set_pane_g4

0x4a42,	// (0x00004f06) slider_set_pane_g5

0x4a16,	// (0x00004eda) slider_set_pane_g6

0x4a58,	// (0x00004f1c) slider_set_pane_g7

0x4c40,	// (0x00005104) slider_form_pane_g3

0x4c49,	// (0x0000510d) slider_form_pane_g4

0x4c51,	// (0x00005115) slider_form_pane_g5

0x4c40,	// (0x00005104) slider_form_pane_g6

0xd0c9,	// (0x0000d58d) slider_form_pane_g7

0x542a,	// (0x000058ee) slider_set_pane_vc_g3

0x5433,	// (0x000058f7) slider_set_pane_vc_g4

0x543c,	// (0x00005900) slider_set_pane_vc_g5

0x542a,	// (0x000058ee) slider_set_pane_vc_g6

0x5445,	// (0x00005909) slider_set_pane_vc_g7

0x542a,	// (0x000058ee) slider_form_pane_vc_g1

0x5433,	// (0x000058f7) slider_form_pane_vc_g2

0x543c,	// (0x00005900) slider_form_pane_vc_g3

0x542a,	// (0x000058ee) slider_form_pane_vc_g4

0x57ca,	// (0x00005c8e) slider_form_pane_vc_g5

0x0004,

0xfa96,	// (0x0000ff5a) slider_form_pane_vc_g

0xf30c,	// (0x0000f7d0) main_idle_act3_pane

0x786d,	// (0x00007d31) ai3_links_pane

0xda1f,	// (0x0000dee3) popup_ai3_data_window_ParamLimits

0xda1f,	// (0x0000dee3) popup_ai3_data_window

0xf30c,	// (0x0000f7d0) grid_ai3_links_pane

0xda3d,	// (0x0000df01) cell_ai3_links_pane_ParamLimits

0xda3d,	// (0x0000df01) cell_ai3_links_pane

0x78ae,	// (0x00007d72) bg_popup_sub_pane_cp11

0x78bb,	// (0x00007d7f) cell_ai3_links_pane_g1

0xf30c,	// (0x0000f7d0) bg_popup_sub_pane_cp12

0x78e0,	// (0x00007da4) heading_ai3_data_pane

0x78e8,	// (0x00007dac) list_ai3_gene_pane

0x78f4,	// (0x00007db8) popup_ai3_data_window_g1

0x78fc,	// (0x00007dc0) heading_ai3_data_pane_g1

0x7904,	// (0x00007dc8) heading_ai3_data_pane_t1

0x7912,	// (0x00007dd6) list_double_ai3_gene_pane_ParamLimits

0x7912,	// (0x00007dd6) list_double_ai3_gene_pane

0x791f,	// (0x00007de3) list_single_ai3_gene_pane_ParamLimits

0x791f,	// (0x00007de3) list_single_ai3_gene_pane

0x5fe2,	// (0x000064a6) list_highlight_pane_cp7_ParamLimits

0x5fe2,	// (0x000064a6) list_highlight_pane_cp7

0x792c,	// (0x00007df0) list_single_a13_gene_pane_t1_ParamLimits

0x792c,	// (0x00007df0) list_single_a13_gene_pane_t1

0x7943,	// (0x00007e07) list_single_ai3_gene_pane_g1

0x794c,	// (0x00007e10) list_single_ai3_gene_pane_g2

0x0001,

0xfcd1,	// (0x00010195) list_single_ai3_gene_pane_g

0x7954,	// (0x00007e18) list_double_ai3_gene_pane_g1_ParamLimits

0x7954,	// (0x00007e18) list_double_ai3_gene_pane_g1

0x7960,	// (0x00007e24) list_double_ai3_gene_pane_t1_ParamLimits

0x7960,	// (0x00007e24) list_double_ai3_gene_pane_t1

0x797c,	// (0x00007e40) list_double_ai3_gene_pane_t2_ParamLimits

0x797c,	// (0x00007e40) list_double_ai3_gene_pane_t2

0x7991,	// (0x00007e55) list_double_ai3_gene_pane_t3_ParamLimits

0x7991,	// (0x00007e55) list_double_ai3_gene_pane_t3

0x0002,

0xfcd6,	// (0x0001019a) list_double_ai3_gene_pane_t_ParamLimits

0xfcd6,	// (0x0001019a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x772e,	// (0x00007bf2) aid_size_min_col_2

0xd8c5,	// (0x0000dd89) aid_size_min_msg_ParamLimits

0xd8c5,	// (0x0000dd89) aid_size_min_msg

0xd662,	// (0x0000db26) fep_vkb_top_text_pane_g2_ParamLimits

0xd662,	// (0x0000db26) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x00010006) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x00010006) fep_vkb_top_text_pane_g

0xf30c,	// (0x0000f7d0) main_hc_apps_shell_pane

0x79ae,	// (0x00007e72) grid_hc_apps_pane_ParamLimits

0x79ae,	// (0x00007e72) grid_hc_apps_pane

0x79bd,	// (0x00007e81) list_hc_apps_pane

0x79c5,	// (0x00007e89) scroll_pane_cp37_ParamLimits

0x79c5,	// (0x00007e89) scroll_pane_cp37

0xda57,	// (0x0000df1b) cell_hc_apps_pane_ParamLimits

0xda57,	// (0x0000df1b) cell_hc_apps_pane

0xdb21,	// (0x0000dfe5) cell_hc_apps_pane_g1_ParamLimits

0xdb21,	// (0x0000dfe5) cell_hc_apps_pane_g1

0x7aba,	// (0x00007f7e) cell_hc_apps_pane_g2_ParamLimits

0x7aba,	// (0x00007f7e) cell_hc_apps_pane_g2

0x7ad6,	// (0x00007f9a) cell_hc_apps_pane_g3_ParamLimits

0x7ad6,	// (0x00007f9a) cell_hc_apps_pane_g3

0x0002,

0xfcdd,	// (0x000101a1) cell_hc_apps_pane_g_ParamLimits

0xfcdd,	// (0x000101a1) cell_hc_apps_pane_g

0xdb4e,	// (0x0000e012) cell_hc_apps_pane_t1_ParamLimits

0xdb4e,	// (0x0000e012) cell_hc_apps_pane_t1

0x037f,	// (0x00000843) grid_highlight_pane_cp10_ParamLimits

0x037f,	// (0x00000843) grid_highlight_pane_cp10

0xdb8e,	// (0x0000e052) list_single_hc_apps_pane_ParamLimits

0xdb8e,	// (0x0000e052) list_single_hc_apps_pane

0xdbc8,	// (0x0000e08c) list_single_hc_apps_pane_g1

0xdbe1,	// (0x0000e0a5) list_single_hc_apps_pane_g2

0x0001,

0xfce4,	// (0x000101a8) list_single_hc_apps_pane_g

0xdbfa,	// (0x0000e0be) list_single_hc_apps_pane_g2_copy1

0xdc16,	// (0x0000e0da) list_single_hc_apps_pane_t1

0x004b,	// (0x0000050f) bg_set_opt_pane_cp_ParamLimits

0x0097,	// (0x0000055b) setting_slider_pane_t1_ParamLimits

0x00ad,	// (0x00000571) setting_slider_pane_t2_ParamLimits

0x00c7,	// (0x0000058b) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0000fa3a) setting_slider_pane_t_ParamLimits

0x00df,	// (0x000005a3) slider_set_pane_ParamLimits

0x255b,	// (0x00002a1f) control_pane_g5_ParamLimits

0x255b,	// (0x00002a1f) control_pane_g5

0x49fd,	// (0x00004ec1) slider_set_pane_g1_ParamLimits

0x4a0a,	// (0x00004ece) slider_set_pane_g2_ParamLimits

0x4a16,	// (0x00004eda) slider_set_pane_g3_ParamLimits

0x4a2a,	// (0x00004eee) slider_set_pane_g4_ParamLimits

0x4a42,	// (0x00004f06) slider_set_pane_g5_ParamLimits

0x4a16,	// (0x00004eda) slider_set_pane_g6_ParamLimits

0x4a58,	// (0x00004f1c) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0000fe28) slider_set_pane_g_ParamLimits

0x1ff1,	// (0x000024b5) navi_icon_text_pane_ParamLimits

0xc679,	// (0x0000cb3d) aid_fill_nsta_2_ParamLimits

0xc6b2,	// (0x0000cb76) aid_touch_tab_arrow_left_ParamLimits

0xc6c6,	// (0x0000cb8a) aid_touch_tab_arrow_right_ParamLimits

0xc761,	// (0x0000cc25) clock_nsta_pane_ParamLimits

0xce06,	// (0x0000d2ca) navi_icon_pane_g1_ParamLimits

0xce12,	// (0x0000d2d6) navi_text_pane_t1_ParamLimits

0xd363,	// (0x0000d827) navi_icon_text_pane_g1_ParamLimits

0xd36f,	// (0x0000d833) navi_icon_text_pane_t1_ParamLimits

0xdbc8,	// (0x0000e08c) list_single_hc_apps_pane_g1_ParamLimits

0xdbe1,	// (0x0000e0a5) list_single_hc_apps_pane_g2_ParamLimits

0xfce4,	// (0x000101a8) list_single_hc_apps_pane_g_ParamLimits

0xdbfa,	// (0x0000e0be) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdc16,	// (0x0000e0da) list_single_hc_apps_pane_t1_ParamLimits

0xafb9,	// (0x0000b47d) popup_toolbar2_fixed_window_ParamLimits

0xafb9,	// (0x0000b47d) popup_toolbar2_fixed_window

0xc5de,	// (0x0000caa2) popup_toolbar2_float_window

0xf30c,	// (0x0000f7d0) bg_popup_sub_pane_cp27

0x7bf3,	// (0x000080b7) grid_toolbar2_float_pane

0xf30c,	// (0x0000f7d0) bg_popup_sub_pane_cp26

0x7bf3,	// (0x000080b7) grid_toolbar2_fixed_pane

0xdc44,	// (0x0000e108) cell_toolbar2_fixed_pane_ParamLimits

0xdc44,	// (0x0000e108) cell_toolbar2_fixed_pane

0xdc61,	// (0x0000e125) cell_toolbar2_fixed_pane_g1

0x7c14,	// (0x000080d8) toolbar2_fixed_button_pane

0x32e1,	// (0x000037a5) toolbar2_fixed_button_pane_g1

0x32e9,	// (0x000037ad) toolbar2_fixed_button_pane_g2

0x32f1,	// (0x000037b5) toolbar2_fixed_button_pane_g3

0x32f9,	// (0x000037bd) toolbar2_fixed_button_pane_g4

0x3301,	// (0x000037c5) toolbar2_fixed_button_pane_g5

0x3309,	// (0x000037cd) toolbar2_fixed_button_pane_g6

0x3311,	// (0x000037d5) toolbar2_fixed_button_pane_g7

0x3319,	// (0x000037dd) toolbar2_fixed_button_pane_g8

0x3321,	// (0x000037e5) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0000fd2a) toolbar2_fixed_button_pane_g

0x7c1c,	// (0x000080e0) cell_toolbar2_float_pane_ParamLimits

0x7c1c,	// (0x000080e0) cell_toolbar2_float_pane

0x7c2d,	// (0x000080f1) cell_toolbar2_float_pane_g1

0x7c14,	// (0x000080d8) toolbar2_fixed_button_pane_cp

0xd54a,	// (0x0000da0e) fep_vkb_accented_list_pane_ParamLimits

0xd54a,	// (0x0000da0e) fep_vkb_accented_list_pane

0x6842,	// (0x00006d06) bg_popup_fep_shadow_pane_g9

0x2175,	// (0x00002639) bg_popup_fep_shadow_pane_cp3

0x11e2,	// (0x000016a6) list_accented_list_pane

0x7c36,	// (0x000080fa) list_single_accented_list_pane_ParamLimits

0x7c36,	// (0x000080fa) list_single_accented_list_pane

0x2175,	// (0x00002639) list_highlight_pane_cp10

0x7c47,	// (0x0000810b) list_single_accented_list_pane_t1

0xc4fa,	// (0x0000c9be) popup_slider_window_ParamLimits

0xc4fa,	// (0x0000c9be) popup_slider_window

0x7725,	// (0x00007be9) aid_indentation_list_msg

0xdd6c,	// (0x0000e230) bg_popup_window_pane_cp19

0x7d81,	// (0x00008245) popup_slider_window_g1

0x7d9d,	// (0x00008261) popup_slider_window_g2

0x7db9,	// (0x0000827d) popup_slider_window_g3

0x0005,

0xfce9,	// (0x000101ad) popup_slider_window_g

0x7e15,	// (0x000082d9) popup_slider_window_t1

0x7e89,	// (0x0000834d) small_volume_slider_vertical_pane

0x601d,	// (0x000064e1) small_volume_slider_vertical_pane_g1

0x601d,	// (0x000064e1) small_volume_slider_vertical_pane_g2

0x7ea5,	// (0x00008369) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfb,	// (0x000101bf) small_volume_slider_vertical_pane_g

0xaf23,	// (0x0000b3e7) area_side_right_pane_ParamLimits

0xaf23,	// (0x0000b3e7) area_side_right_pane

0xde24,	// (0x0000e2e8) aid_size_side_button_ParamLimits

0xde24,	// (0x0000e2e8) aid_size_side_button

0xde3d,	// (0x0000e301) grid_sctrl_middle_pane_ParamLimits

0xde3d,	// (0x0000e301) grid_sctrl_middle_pane

0x7ee2,	// (0x000083a6) sctrl_sk_bottom_pane

0x7ef3,	// (0x000083b7) sctrl_sk_top_pane

0x7f05,	// (0x000083c9) aid_touch_sctrl_top

0x037f,	// (0x00000843) bg_sctrl_sk_pane_ParamLimits

0x037f,	// (0x00000843) bg_sctrl_sk_pane

0x7f12,	// (0x000083d6) sctrl_sk_top_pane_g1

0x7f1f,	// (0x000083e3) sctrl_sk_top_pane_t1

0x7f05,	// (0x000083c9) aid_touch_sctrl_bottom

0x037f,	// (0x00000843) bg_sctrl_sk_pane_cp_ParamLimits

0x037f,	// (0x00000843) bg_sctrl_sk_pane_cp

0x7f3a,	// (0x000083fe) sctrl_sk_bottom_pane_g1

0x7f1f,	// (0x000083e3) sctrl_sk_bottom_pane_t1

0xde57,	// (0x0000e31b) cell_sctrl_middle_pane_ParamLimits

0xde57,	// (0x0000e31b) cell_sctrl_middle_pane

0xde6a,	// (0x0000e32e) aid_touch_sctrl_middle_ParamLimits

0xde6a,	// (0x0000e32e) aid_touch_sctrl_middle

0xde77,	// (0x0000e33b) bg_sctrl_middle_pane_ParamLimits

0xde77,	// (0x0000e33b) bg_sctrl_middle_pane

0x8008,	// (0x000084cc) cell_sctrl_middle_pane_g1_ParamLimits

0x8008,	// (0x000084cc) cell_sctrl_middle_pane_g1

0xde85,	// (0x0000e349) cell_sctrl_middle_pane_g2_ParamLimits

0xde85,	// (0x0000e349) cell_sctrl_middle_pane_g2

0x0001,

0xfd07,	// (0x000101cb) cell_sctrl_middle_pane_g_ParamLimits

0xfd07,	// (0x000101cb) cell_sctrl_middle_pane_g

0x32e1,	// (0x000037a5) bg_sctrl_middle_pane_g1

0x32e9,	// (0x000037ad) bg_sctrl_middle_pane_g2

0x32f1,	// (0x000037b5) bg_sctrl_middle_pane_g3

0x32f9,	// (0x000037bd) bg_sctrl_middle_pane_g4

0x3301,	// (0x000037c5) bg_sctrl_middle_pane_g5

0x3309,	// (0x000037cd) bg_sctrl_middle_pane_g6

0x3311,	// (0x000037d5) bg_sctrl_middle_pane_g7

0x3319,	// (0x000037dd) bg_sctrl_middle_pane_g8

0x0007,

0xfd0c,	// (0x000101d0) bg_sctrl_middle_pane_g

0x3321,	// (0x000037e5) bg_sctrl_middle_pane_g8_copy1

0x32e1,	// (0x000037a5) bg_sctrl_sk_pane_g1

0x32e9,	// (0x000037ad) bg_sctrl_sk_pane_g2

0x32f1,	// (0x000037b5) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0000fd2a) bg_sctrl_sk_pane_g

0x08ab,	// (0x00000d6f) aid_size_touch_scroll_bar

0x32f9,	// (0x000037bd) bg_sctrl_sk_pane_g4

0x3301,	// (0x000037c5) bg_sctrl_sk_pane_g5

0x3309,	// (0x000037cd) bg_sctrl_sk_pane_g6

0x3311,	// (0x000037d5) bg_sctrl_sk_pane_g7

0x3319,	// (0x000037dd) bg_sctrl_sk_pane_g8

0x3321,	// (0x000037e5) bg_sctrl_sk_pane_g9

0x27a8,	// (0x00002c6c) popup_fep_china_hwr2_fs_candidate_window

0xbfb6,	// (0x0000c47a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbfb6,	// (0x0000c47a) popup_fep_china_hwr2_fs_control_window

0x64d1,	// (0x00006995) sctrl_sk_top_pane_g2

0x0001,

0xfd02,	// (0x000101c6) sctrl_sk_top_pane_g

0xde91,	// (0x0000e355) aid_fep_china_hwr2_fs_cell_ParamLimits

0xde91,	// (0x0000e355) aid_fep_china_hwr2_fs_cell

0xdea7,	// (0x0000e36b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdea7,	// (0x0000e36b) bg_popup_fep_shadow_pane_cp4

0xdebe,	// (0x0000e382) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdebe,	// (0x0000e382) bg_popup_fep_shadow_pane_cp5

0xded0,	// (0x0000e394) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xded0,	// (0x0000e394) popup_fep_china_hwr2_fs_control_bar_grid

0xdee4,	// (0x0000e3a8) popup_fep_china_hwr2_fs_control_funtion_grid

0x7fdc,	// (0x000084a0) aid_fep_china_hwr2_fs_candi_cell

0xf30c,	// (0x0000f7d0) bg_popup_fep_shadow_pane_cp6

0x7fe6,	// (0x000084aa) popup_fep_china_hwr2_fs_candidate_grid

0xdeec,	// (0x0000e3b0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdeec,	// (0x0000e3b0) cell_fep_china_hwr2_fs_funtion_grid

0x601d,	// (0x000064e1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8008,	// (0x000084cc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8008,	// (0x000084cc) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8016,	// (0x000084da) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8016,	// (0x000084da) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1d,	// (0x000101e1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1d,	// (0x000101e1) cell_fep_china_hwr2_fs_funtion_grid_g

0xdf04,	// (0x0000e3c8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdf04,	// (0x0000e3c8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdf19,	// (0x0000e3dd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdf19,	// (0x0000e3dd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd22,	// (0x000101e6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd22,	// (0x000101e6) cell_fep_china_hwr2_fs_funtion_grid_t

0x805d,	// (0x00008521) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8065,	// (0x00008529) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x806d,	// (0x00008531) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd27,	// (0x000101eb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8075,	// (0x00008539) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8075,	// (0x00008539) cell_fep_china_hwr2_fs_candidate_grid

0x8094,	// (0x00008558) popup_fep_china_hwr2_fs_candidate_grid_g20

0x809c,	// (0x00008560) popup_fep_china_hwr2_fs_candidate_grid_g21

0x601d,	// (0x000064e1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x601d,	// (0x000064e1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0001000b) cell_fep_china_hwr2_fs_candidate_grid_g

0x80a4,	// (0x00008568) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e17,	// (0x000032db) clock_nsta_pane_cp_24_ParamLimits

0x2e17,	// (0x000032db) clock_nsta_pane_cp_24

0x2e97,	// (0x0000335b) indicator_nsta_pane_cp_24_ParamLimits

0x2e97,	// (0x0000335b) indicator_nsta_pane_cp_24

0x428a,	// (0x0000474e) heading_pane_g1

0x0001,

0xf8cb,	// (0x0000fd8f) heading_pane_g

0x4eb0,	// (0x00005374) grid_sct_catagory_button_pane

0x4ee2,	// (0x000053a6) scroll_pane_cp5_ParamLimits

0x5c99,	// (0x0000615d) button_value_adjust_pane_cp5_ParamLimits

0x5c99,	// (0x0000615d) button_value_adjust_pane_cp5

0x5d8f,	// (0x00006253) form2_midp_time_pane_ParamLimits

0x80b2,	// (0x00008576) cell_sct_catagory_button_pane_ParamLimits

0x80b2,	// (0x00008576) cell_sct_catagory_button_pane

0x5fe2,	// (0x000064a6) bg_button_pane_cp01_ParamLimits

0x5fe2,	// (0x000064a6) bg_button_pane_cp01

0x601d,	// (0x000064e1) cell_sct_catagory_button_pane_g1

0xc57b,	// (0x0000ca3f) popup_tb_extension_window

0xdf35,	// (0x0000e3f9) aid_size_cell_ext_ParamLimits

0xdf35,	// (0x0000e3f9) aid_size_cell_ext

0x06ed,	// (0x00000bb1) bg_tb_trans_pane_cp1_ParamLimits

0x06ed,	// (0x00000bb1) bg_tb_trans_pane_cp1

0xdf5b,	// (0x0000e41f) grid_tb_ext_pane_ParamLimits

0xdf5b,	// (0x0000e41f) grid_tb_ext_pane

0xdf9b,	// (0x0000e45f) cell_tb_ext_pane_ParamLimits

0xdf9b,	// (0x0000e45f) cell_tb_ext_pane

0xdfc3,	// (0x0000e487) cell_tb_ext_pane_g1_ParamLimits

0xdfc3,	// (0x0000e487) cell_tb_ext_pane_g1

0x8148,	// (0x0000860c) cell_tb_ext_pane_t1

0x037f,	// (0x00000843) list_highlight_pane_cp11_ParamLimits

0x037f,	// (0x00000843) list_highlight_pane_cp11

0xf4ed,	// (0x0000f9b1) popup_uni_indicator_window_ParamLimits

0xf4ed,	// (0x0000f9b1) popup_uni_indicator_window

0x0f17,	// (0x000013db) bg_popup_sub_pane_cp14

0x8163,	// (0x00008627) list_uniindi_pane

0x816f,	// (0x00008633) uniindi_top_pane

0x037f,	// (0x00000843) bg_uniindi_top_pane

0x8190,	// (0x00008654) uniindi_top_pane_g1

0x81a6,	// (0x0000866a) uniindi_top_pane_g2

0x0003,

0xfd2e,	// (0x000101f2) uniindi_top_pane_g

0x81d0,	// (0x00008694) uniindi_top_pane_t1

0x81fc,	// (0x000086c0) list_single_uniindi_pane_ParamLimits

0x81fc,	// (0x000086c0) list_single_uniindi_pane

0x601d,	// (0x000064e1) bg_uniindi_top_pane_g1

0x820e,	// (0x000086d2) list_single_uniindi_pane_g1

0x8221,	// (0x000086e5) list_single_uniindi_pane_t1

0xf30c,	// (0x0000f7d0) control_bg_pane

0x8246,	// (0x0000870a) bg_sctrl_sk_pane_cp1

0x824f,	// (0x00008713) bg_sctrl_sk_pane_cp2

0x8258,	// (0x0000871c) control_bg_pane_g1

0x8261,	// (0x00008725) control_bg_pane_g2

0x0001,

0xfd37,	// (0x000101fb) control_bg_pane_g

0x5a6a,	// (0x00005f2e) cell_indicator_nsta_pane_g1_ParamLimits

0xd2bc,	// (0x0000d780) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0000ff6f) cell_indicator_nsta_pane_g_ParamLimits

0x5e04,	// (0x000062c8) form2_midp_time_pane_t1_ParamLimits

0x608d,	// (0x00006551) main_idle_act4_pane_ParamLimits

0x608d,	// (0x00006551) main_idle_act4_pane

0xc57b,	// (0x0000ca3f) popup_tb_extension_window_ParamLimits

0xdf83,	// (0x0000e447) tb_ext_find_pane_ParamLimits

0xdf83,	// (0x0000e447) tb_ext_find_pane

0x826a,	// (0x0000872e) ai_gene_pane_1_cp1

0x22be,	// (0x00002782) ai_gene_pane_2_cp1

0x8272,	// (0x00008736) list_single_idle_plugin_calendar_pane

0x827b,	// (0x0000873f) list_single_idle_plugin_notification_pane

0x8284,	// (0x00008748) list_single_idle_plugin_player_pane

0xdfe0,	// (0x0000e4a4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdfe0,	// (0x0000e4a4) list_single_idle_plugin_shortcut_pane

0xe008,	// (0x0000e4cc) main_idle_act4_pane_t1

0xe020,	// (0x0000e4e4) main_idle_act4_pane_t2

0x0001,

0xfd3c,	// (0x00010200) main_idle_act4_pane_t

0xe038,	// (0x0000e4fc) middle_sk_idle_act4_pane_ParamLimits

0xe038,	// (0x0000e4fc) middle_sk_idle_act4_pane

0xe054,	// (0x0000e518) popup_clock_digital_analogue_window_cp2

0xe07b,	// (0x0000e53f) shortcut_wheel_idle_act4_pane_ParamLimits

0xe07b,	// (0x0000e53f) shortcut_wheel_idle_act4_pane

0x601d,	// (0x000064e1) shortcut_wheel_idle_act4_pane_g1

0x601d,	// (0x000064e1) shortcut_wheel_idle_act4_pane_g2

0x601d,	// (0x000064e1) shortcut_wheel_idle_act4_pane_g3

0x601d,	// (0x000064e1) shortcut_wheel_idle_act4_pane_g4

0x601d,	// (0x000064e1) shortcut_wheel_idle_act4_pane_g5

0x8317,	// (0x000087db) shortcut_wheel_idle_act4_pane_g6

0x831f,	// (0x000087e3) shortcut_wheel_idle_act4_pane_g7

0x8327,	// (0x000087eb) shortcut_wheel_idle_act4_pane_g8

0x832f,	// (0x000087f3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd41,	// (0x00010205) shortcut_wheel_idle_act4_pane_g

0x6144,	// (0x00006608) middle_sk_idle_act4_pane_g1_ParamLimits

0x6144,	// (0x00006608) middle_sk_idle_act4_pane_g1

0xe0f8,	// (0x0000e5bc) middle_sk_idle_act4_pane_g2_ParamLimits

0xe0f8,	// (0x0000e5bc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd64,	// (0x00010228) middle_sk_idle_act4_pane_g_ParamLimits

0xfd64,	// (0x00010228) middle_sk_idle_act4_pane_g

0xe110,	// (0x0000e5d4) middle_sk_idle_act4_pane_t1_ParamLimits

0xe110,	// (0x0000e5d4) middle_sk_idle_act4_pane_t1

0xe13f,	// (0x0000e603) grid_ai_shortcut_pane_ParamLimits

0xe13f,	// (0x0000e603) grid_ai_shortcut_pane

0xe15c,	// (0x0000e620) list_highlight_pane_cp16_ParamLimits

0xe15c,	// (0x0000e620) list_highlight_pane_cp16

0xe169,	// (0x0000e62d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe169,	// (0x0000e62d) list_single_idle_plugin_shortcut_pane_g1

0xe175,	// (0x0000e639) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe175,	// (0x0000e639) list_single_idle_plugin_shortcut_pane_g2

0xe193,	// (0x0000e657) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe193,	// (0x0000e657) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd69,	// (0x0001022d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd69,	// (0x0001022d) list_single_idle_plugin_shortcut_pane_g

0xe1a8,	// (0x0000e66c) cell_ai_shortcut_pane_ParamLimits

0xe1a8,	// (0x0000e66c) cell_ai_shortcut_pane

0xe1be,	// (0x0000e682) cell_ai_shortcut_pane_g1_ParamLimits

0xe1be,	// (0x0000e682) cell_ai_shortcut_pane_g1

0x826a,	// (0x0000872e) ai_gene_pane_1_cp2

0x8460,	// (0x00008924) ai_gene_pane_2_cp2

0x8468,	// (0x0000892c) list_highlight_pane_cp15

0x8471,	// (0x00008935) list_single_idle_plugin_calendar_pane_g1

0x8468,	// (0x0000892c) list_highlight_pane_cp17

0x8479,	// (0x0000893d) list_single_idle_plugin_calendar_pane_g1_copy1

0x8481,	// (0x00008945) list_single_idle_plugin_player_pane_g1

0x51cf,	// (0x00005693) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd70,	// (0x00010234) list_single_idle_plugin_player_pane_g

0x8489,	// (0x0000894d) list_single_idle_plugin_player_pane_t1

0x8497,	// (0x0000895b) list_single_idle_plugin_player_pane_t2

0x84a5,	// (0x00008969) list_single_idle_plugin_player_pane_t3

0x84b3,	// (0x00008977) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd75,	// (0x00010239) list_single_idle_plugin_player_pane_t

0x84c1,	// (0x00008985) wait_bar_pane_cp15

0x84c9,	// (0x0000898d) grid_ai_notification_pane

0x51cf,	// (0x00005693) list_single_idle_plugin_notification_pane_g1

0xe1e0,	// (0x0000e6a4) cell_ai_notification_pane_ParamLimits

0xe1e0,	// (0x0000e6a4) cell_ai_notification_pane

0x84df,	// (0x000089a3) cell_ai_notification_pane_g1

0x84e7,	// (0x000089ab) cell_ai_notification_pane_t1

0xe1ed,	// (0x0000e6b1) tb_ext_find_button_pane

0xe1f5,	// (0x0000e6b9) tb_ext_find_pane_g1

0xe1fd,	// (0x0000e6c1) tb_ext_find_pane_t1

0x18b3,	// (0x00001d77) tb_ext_find_button_pane_g1

0x8513,	// (0x000089d7) tb_ext_find_button_pane_g2

0x0001,

0xfd7e,	// (0x00010242) tb_ext_find_button_pane_g

0xe008,	// (0x0000e4cc) main_idle_act4_pane_t1_ParamLimits

0xe020,	// (0x0000e4e4) main_idle_act4_pane_t2_ParamLimits

0xfd3c,	// (0x00010200) main_idle_act4_pane_t_ParamLimits

0xe054,	// (0x0000e518) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe06b,	// (0x0000e52f) sat_plugin_idle_act4_pane_ParamLimits

0xe06b,	// (0x0000e52f) sat_plugin_idle_act4_pane

0xe20b,	// (0x0000e6cf) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe20b,	// (0x0000e6cf) sat_plugin_idle_act4_pane_t1

0xe223,	// (0x0000e6e7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe223,	// (0x0000e6e7) sat_plugin_idle_act4_pane_t2

0xe23b,	// (0x0000e6ff) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe23b,	// (0x0000e6ff) sat_plugin_idle_act4_pane_t3

0xe253,	// (0x0000e717) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe253,	// (0x0000e717) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd83,	// (0x00010247) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd83,	// (0x00010247) sat_plugin_idle_act4_pane_t

0xf499,	// (0x0000f95d) popup_battery_window_ParamLimits

0xf499,	// (0x0000f95d) popup_battery_window

0x037f,	// (0x00000843) bg_popup_sub_pane_cp25_ParamLimits

0x037f,	// (0x00000843) bg_popup_sub_pane_cp25

0x8568,	// (0x00008a2c) popup_battery_window_g1_ParamLimits

0x8568,	// (0x00008a2c) popup_battery_window_g1

0x8574,	// (0x00008a38) popup_battery_window_t1_ParamLimits

0x8574,	// (0x00008a38) popup_battery_window_t1

0x8586,	// (0x00008a4a) popup_battery_window_t2_ParamLimits

0x8586,	// (0x00008a4a) popup_battery_window_t2

0x0001,

0xfd8c,	// (0x00010250) popup_battery_window_t_ParamLimits

0xfd8c,	// (0x00010250) popup_battery_window_t

0xbccd,	// (0x0000c191) midp_canvas_pane_ParamLimits

0xbd28,	// (0x0000c1ec) midp_keypad_pane_ParamLimits

0xbd28,	// (0x0000c1ec) midp_keypad_pane

0x26f6,	// (0x00002bba) main_midp_pane_ParamLimits

0x5af5,	// (0x00005fb9) signal_pane_g2_cp_ParamLimits

0xe26b,	// (0x0000e72f) aid_size_cell_midp_keypad_ParamLimits

0xe26b,	// (0x0000e72f) aid_size_cell_midp_keypad

0xe289,	// (0x0000e74d) midp_keyp_game_grid_pane_ParamLimits

0xe289,	// (0x0000e74d) midp_keyp_game_grid_pane

0xe2b0,	// (0x0000e774) midp_keyp_rocker_pane_ParamLimits

0xe2b0,	// (0x0000e774) midp_keyp_rocker_pane

0xe2f5,	// (0x0000e7b9) midp_keyp_sk_left_pane_ParamLimits

0xe2f5,	// (0x0000e7b9) midp_keyp_sk_left_pane

0xe349,	// (0x0000e80d) midp_keyp_sk_right_pane_ParamLimits

0xe349,	// (0x0000e80d) midp_keyp_sk_right_pane

0xf30c,	// (0x0000f7d0) bg_button_pane_cp03

0xe39d,	// (0x0000e861) midp_keyp_sk_left_pane_g1

0xf30c,	// (0x0000f7d0) bg_button_pane_cp04

0xe39d,	// (0x0000e861) midp_keyp_sk_right_pane_g1

0x601d,	// (0x000064e1) midp_keyp_rocker_pane_g1

0xe3a6,	// (0x0000e86a) keyp_game_cell_pane_ParamLimits

0xe3a6,	// (0x0000e86a) keyp_game_cell_pane

0xf30c,	// (0x0000f7d0) bg_button_pane_cp02

0xe3cc,	// (0x0000e890) keyp_game_cell_pane_g1

0xaf65,	// (0x0000b429) popup_fep_vkb2_window_ParamLimits

0xaf65,	// (0x0000b429) popup_fep_vkb2_window

0xe3d5,	// (0x0000e899) aid_size_cell_vkb2_ParamLimits

0xe3d5,	// (0x0000e899) aid_size_cell_vkb2

0xe403,	// (0x0000e8c7) popup_fep_vkb2_window_g1_ParamLimits

0xe403,	// (0x0000e8c7) popup_fep_vkb2_window_g1

0xe453,	// (0x0000e917) vkb2_area_bottom_pane_ParamLimits

0xe453,	// (0x0000e917) vkb2_area_bottom_pane

0xe4af,	// (0x0000e973) vkb2_area_keypad_pane_ParamLimits

0xe4af,	// (0x0000e973) vkb2_area_keypad_pane

0xe4fd,	// (0x0000e9c1) vkb2_area_top_pane_ParamLimits

0xe4fd,	// (0x0000e9c1) vkb2_area_top_pane

0xe583,	// (0x0000ea47) vkb2_top_entry_pane_ParamLimits

0xe583,	// (0x0000ea47) vkb2_top_entry_pane

0xe5b0,	// (0x0000ea74) vkb2_top_grid_left_pane_ParamLimits

0xe5b0,	// (0x0000ea74) vkb2_top_grid_left_pane

0xe5d0,	// (0x0000ea94) vkb2_top_grid_right_pane_ParamLimits

0xe5d0,	// (0x0000ea94) vkb2_top_grid_right_pane

0x8901,	// (0x00008dc5) vkb2_cell_keypad_pane_ParamLimits

0x8901,	// (0x00008dc5) vkb2_cell_keypad_pane

0xe616,	// (0x0000eada) vkb2_area_bottom_grid_pane_ParamLimits

0xe616,	// (0x0000eada) vkb2_area_bottom_grid_pane

0xe640,	// (0x0000eb04) vkb2_area_bottom_pane_g1_ParamLimits

0xe640,	// (0x0000eb04) vkb2_area_bottom_pane_g1

0xe666,	// (0x0000eb2a) vkb2_area_bottom_pane_g2_ParamLimits

0xe666,	// (0x0000eb2a) vkb2_area_bottom_pane_g2

0xe697,	// (0x0000eb5b) vkb2_area_bottom_pane_g3_ParamLimits

0xe697,	// (0x0000eb5b) vkb2_area_bottom_pane_g3

0x0002,

0xfd91,	// (0x00010255) vkb2_area_bottom_pane_g_ParamLimits

0xfd91,	// (0x00010255) vkb2_area_bottom_pane_g

0x8a90,	// (0x00008f54) vkb2_top_cell_left_pane_ParamLimits

0x8a90,	// (0x00008f54) vkb2_top_cell_left_pane

0xe701,	// (0x0000ebc5) vkb2_top_entry_pane_g1_ParamLimits

0xe701,	// (0x0000ebc5) vkb2_top_entry_pane_g1

0xe70f,	// (0x0000ebd3) vkb2_top_entry_pane_t1_ParamLimits

0xe70f,	// (0x0000ebd3) vkb2_top_entry_pane_t1

0x8ade,	// (0x00008fa2) vkb2_top_entry_pane_t2_ParamLimits

0x8ade,	// (0x00008fa2) vkb2_top_entry_pane_t2

0x8af6,	// (0x00008fba) vkb2_top_entry_pane_t3_ParamLimits

0x8af6,	// (0x00008fba) vkb2_top_entry_pane_t3

0x0002,

0xfd98,	// (0x0001025c) vkb2_top_entry_pane_t_ParamLimits

0xfd98,	// (0x0001025c) vkb2_top_entry_pane_t

0xe748,	// (0x0000ec0c) vkb2_top_grid_right_pane_g1_ParamLimits

0xe748,	// (0x0000ec0c) vkb2_top_grid_right_pane_g1

0x8b4f,	// (0x00009013) vkb2_top_grid_right_pane_g2_ParamLimits

0x8b4f,	// (0x00009013) vkb2_top_grid_right_pane_g2

0x8b67,	// (0x0000902b) vkb2_top_grid_right_pane_g3_ParamLimits

0x8b67,	// (0x0000902b) vkb2_top_grid_right_pane_g3

0xe75e,	// (0x0000ec22) vkb2_top_grid_right_pane_g4_ParamLimits

0xe75e,	// (0x0000ec22) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9f,	// (0x00010263) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9f,	// (0x00010263) vkb2_top_grid_right_pane_g

0x8b95,	// (0x00009059) vkb2_top_cell_left_pane_g1

0x8bac,	// (0x00009070) vkb2_cell_keypad_pane_g1_ParamLimits

0x8bac,	// (0x00009070) vkb2_cell_keypad_pane_g1

0x8bd0,	// (0x00009094) vkb2_cell_keypad_pane_t1_ParamLimits

0x8bd0,	// (0x00009094) vkb2_cell_keypad_pane_t1

0x8be7,	// (0x000090ab) vkb2_cell_bottom_grid_pane_ParamLimits

0x8be7,	// (0x000090ab) vkb2_cell_bottom_grid_pane

0x8c20,	// (0x000090e4) vkb2_cell_bottom_grid_pane_g1

0xe09c,	// (0x0000e560) aid_call2_pane_cp02

0xe0a4,	// (0x0000e568) aid_call_pane_cp02

0xe0ac,	// (0x0000e570) clock_digital_number_pane_cp10

0xe0b4,	// (0x0000e578) clock_digital_number_pane_cp11

0xe0bc,	// (0x0000e580) clock_digital_number_pane_cp12

0xe0c4,	// (0x0000e588) clock_digital_number_pane_cp13

0xe0cc,	// (0x0000e590) clock_digital_separator_pane_cp10

0x18b3,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g1

0x18b3,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g2

0xe0d4,	// (0x0000e598) popup_clock_digital_analogue_window_cp2_g3

0x18b3,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g4

0xe0d4,	// (0x0000e598) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd54,	// (0x00010218) popup_clock_digital_analogue_window_cp2_g

0xe0dc,	// (0x0000e5a0) popup_clock_digital_analogue_window_cp2_t1

0xe0ea,	// (0x0000e5ae) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5f,	// (0x00010223) popup_clock_digital_analogue_window_cp2_t

0x601d,	// (0x000064e1) clock_digital_number_pane_cp10_g1

0x601d,	// (0x000064e1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0001000b) clock_digital_number_pane_cp10_g

0x601d,	// (0x000064e1) clock_digital_separator_pane_cp10_g1

0x601d,	// (0x000064e1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0001000b) clock_digital_separator_pane_cp10_g

0x81b2,	// (0x00008676) uniindi_top_pane_g3

0x81c3,	// (0x00008687) uniindi_top_pane_g4

0x8971,	// (0x00008e35) vkb2_row_keypad_pane_ParamLimits

0x8971,	// (0x00008e35) vkb2_row_keypad_pane

0x8c3c,	// (0x00009100) vkb2_cell_t_keypad_pane_ParamLimits

0x8c3c,	// (0x00009100) vkb2_cell_t_keypad_pane

0x8c4c,	// (0x00009110) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8c4c,	// (0x00009110) vkb2_cell_t_keypad_pane_cp08

0x8c61,	// (0x00009125) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8c61,	// (0x00009125) vkb2_cell_t_keypad_pane_cp09

0x8c75,	// (0x00009139) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8c75,	// (0x00009139) vkb2_cell_t_keypad_pane_cp01

0x8c86,	// (0x0000914a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8c86,	// (0x0000914a) vkb2_cell_t_keypad_pane_cp02

0x8c97,	// (0x0000915b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8c97,	// (0x0000915b) vkb2_cell_t_keypad_pane_cp03

0x8ca8,	// (0x0000916c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8ca8,	// (0x0000916c) vkb2_cell_t_keypad_pane_cp04

0x8cb9,	// (0x0000917d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8cb9,	// (0x0000917d) vkb2_cell_t_keypad_pane_cp05

0x8cca,	// (0x0000918e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8cca,	// (0x0000918e) vkb2_cell_t_keypad_pane_cp06

0x8cdd,	// (0x000091a1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8cdd,	// (0x000091a1) vkb2_cell_t_keypad_pane_cp07

0x8cf2,	// (0x000091b6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8cf2,	// (0x000091b6) vkb2_cell_t_keypad_pane_cp10

0x64d1,	// (0x00006995) vkb2_cell_t_keypad_pane_g1

0x8d07,	// (0x000091cb) vkb2_cell_t_keypad_pane_t1

0xf30c,	// (0x0000f7d0) popup_grid_graphic2_window

0xe774,	// (0x0000ec38) aid_size_cell_graphic2_ParamLimits

0xe774,	// (0x0000ec38) aid_size_cell_graphic2

0xe7b2,	// (0x0000ec76) bg_popup_window_pane_cp21_ParamLimits

0xe7b2,	// (0x0000ec76) bg_popup_window_pane_cp21

0xe7c0,	// (0x0000ec84) graphic2_pages_pane_ParamLimits

0xe7c0,	// (0x0000ec84) graphic2_pages_pane

0xe818,	// (0x0000ecdc) grid_graphic2_control_pane_ParamLimits

0xe818,	// (0x0000ecdc) grid_graphic2_control_pane

0xe860,	// (0x0000ed24) grid_graphic2_pane_ParamLimits

0xe860,	// (0x0000ed24) grid_graphic2_pane

0xe8eb,	// (0x0000edaf) cell_graphic2_pane

0xf30c,	// (0x0000f7d0) main_comp_mode_pane

0x78e8,	// (0x00007dac) list_ai3_gene_pane_ParamLimits

0xdd6c,	// (0x0000e230) bg_popup_window_pane_cp19_ParamLimits

0x7d1f,	// (0x000081e3) bg_touch_area_indi_pane_ParamLimits

0x7d1f,	// (0x000081e3) bg_touch_area_indi_pane

0x7d35,	// (0x000081f9) bg_touch_area_indi_pane_cp01_ParamLimits

0x7d35,	// (0x000081f9) bg_touch_area_indi_pane_cp01

0x7d4d,	// (0x00008211) bg_touch_area_indi_pane_cp02_ParamLimits

0x7d4d,	// (0x00008211) bg_touch_area_indi_pane_cp02

0x7d67,	// (0x0000822b) bg_touch_area_indi_pane_cp03_ParamLimits

0x7d67,	// (0x0000822b) bg_touch_area_indi_pane_cp03

0x7d81,	// (0x00008245) popup_slider_window_g1_ParamLimits

0x7d9d,	// (0x00008261) popup_slider_window_g2_ParamLimits

0x7db9,	// (0x0000827d) popup_slider_window_g3_ParamLimits

0xfce9,	// (0x000101ad) popup_slider_window_g_ParamLimits

0x7e15,	// (0x000082d9) popup_slider_window_t1_ParamLimits

0x7e89,	// (0x0000834d) small_volume_slider_vertical_pane_ParamLimits

0xe8eb,	// (0x0000edaf) cell_graphic2_pane_ParamLimits

0xe94e,	// (0x0000ee12) bg_button_pane_cp10_ParamLimits

0xe94e,	// (0x0000ee12) bg_button_pane_cp10

0xe961,	// (0x0000ee25) bg_button_pane_cp11_ParamLimits

0xe961,	// (0x0000ee25) bg_button_pane_cp11

0xe974,	// (0x0000ee38) graphic2_pages_pane_g1_ParamLimits

0xe974,	// (0x0000ee38) graphic2_pages_pane_g1

0xe98f,	// (0x0000ee53) graphic2_pages_pane_g2_ParamLimits

0xe98f,	// (0x0000ee53) graphic2_pages_pane_g2

0x0001,

0xfdad,	// (0x00010271) graphic2_pages_pane_g_ParamLimits

0xfdad,	// (0x00010271) graphic2_pages_pane_g

0xe9a7,	// (0x0000ee6b) graphic2_pages_pane_t1_ParamLimits

0xe9a7,	// (0x0000ee6b) graphic2_pages_pane_t1

0xe9bf,	// (0x0000ee83) cell_graphic2_control_pane_ParamLimits

0xe9bf,	// (0x0000ee83) cell_graphic2_control_pane

0xe9db,	// (0x0000ee9f) cell_graphic2_pane_g1_ParamLimits

0xe9db,	// (0x0000ee9f) cell_graphic2_pane_g1

0x62f3,	// (0x000067b7) cell_graphic2_pane_g2_ParamLimits

0x62f3,	// (0x000067b7) cell_graphic2_pane_g2

0xe9e8,	// (0x0000eeac) cell_graphic2_pane_g3_ParamLimits

0xe9e8,	// (0x0000eeac) cell_graphic2_pane_g3

0x6300,	// (0x000067c4) cell_graphic2_pane_g4_ParamLimits

0x6300,	// (0x000067c4) cell_graphic2_pane_g4

0xe9f5,	// (0x0000eeb9) cell_graphic2_pane_g5_ParamLimits

0xe9f5,	// (0x0000eeb9) cell_graphic2_pane_g5

0x0004,

0xfdb2,	// (0x00010276) cell_graphic2_pane_g_ParamLimits

0xfdb2,	// (0x00010276) cell_graphic2_pane_g

0xea15,	// (0x0000eed9) cell_graphic2_pane_t1_ParamLimits

0xea15,	// (0x0000eed9) cell_graphic2_pane_t1

0x427e,	// (0x00004742) grid_highlight_pane_cp11_ParamLimits

0x427e,	// (0x00004742) grid_highlight_pane_cp11

0x037f,	// (0x00000843) bg_button_pane_cp05

0xea4a,	// (0x0000ef0e) cell_graphic2_control_pane_g1

0x601d,	// (0x000064e1) bg_touch_area_indi_pane_g1

0x8fd8,	// (0x0000949c) aid_cmod_rocker_key_size

0x8fe2,	// (0x000094a6) aid_cmode_itu_key_size

0x8fec,	// (0x000094b0) main_cmode_video_pane

0x8ff6,	// (0x000094ba) main_comp_mode_itu_pane

0x9002,	// (0x000094c6) main_comp_mode_rocker_pane

0x900e,	// (0x000094d2) cell_cmode_rocker_pane_ParamLimits

0x900e,	// (0x000094d2) cell_cmode_rocker_pane

0x9022,	// (0x000094e6) cell_cmode_itu_pane_ParamLimits

0x9022,	// (0x000094e6) cell_cmode_itu_pane

0x0f17,	// (0x000013db) bg_button_pane_cp06_ParamLimits

0x0f17,	// (0x000013db) bg_button_pane_cp06

0x64d1,	// (0x00006995) cell_cmode_rocker_pane_g1_ParamLimits

0x64d1,	// (0x00006995) cell_cmode_rocker_pane_g1

0x8008,	// (0x000084cc) cell_cmode_rocker_pane_g2_ParamLimits

0x8008,	// (0x000084cc) cell_cmode_rocker_pane_g2

0x0001,

0xfdc2,	// (0x00010286) cell_cmode_rocker_pane_g_ParamLimits

0xfdc2,	// (0x00010286) cell_cmode_rocker_pane_g

0xf30c,	// (0x0000f7d0) bg_button_pane_cp07

0x9039,	// (0x000094fd) cell_cmode_itu_pane_g1

0x9042,	// (0x00009506) cell_cmode_itu_pane_t1

0x9050,	// (0x00009514) cell_cmode_itu_pane_t2

0x0001,

0xfdc7,	// (0x0001028b) cell_cmode_itu_pane_t

0x8236,	// (0x000086fa) aid_touch_ctrl_left

0x823e,	// (0x00008702) aid_touch_ctrl_right

0xf30c,	// (0x0000f7d0) compa_mode_pane

0xea72,	// (0x0000ef36) aid_cmod_rocker_key_size_cp

0xea7c,	// (0x0000ef40) aid_cmode_itu_key_size_cp

0x9072,	// (0x00009536) compa_mode_pane_g1

0x907a,	// (0x0000953e) compa_mode_pane_g2

0x9082,	// (0x00009546) compa_mode_pane_g3

0x0002,

0xfdcc,	// (0x00010290) compa_mode_pane_g

0xea86,	// (0x0000ef4a) main_comp_mode_itu_pane_cp

0xea8e,	// (0x0000ef52) main_comp_mode_rocker_pane_cp

0xea96,	// (0x0000ef5a) cell_cmode_itu_pane_cp_ParamLimits

0xea96,	// (0x0000ef5a) cell_cmode_itu_pane_cp

0xeaab,	// (0x0000ef6f) cell_cmode_rocker_pane_cp_ParamLimits

0xeaab,	// (0x0000ef6f) cell_cmode_rocker_pane_cp

0x0f17,	// (0x000013db) bg_button_pane_cp06_cp_ParamLimits

0x0f17,	// (0x000013db) bg_button_pane_cp06_cp

0x64d1,	// (0x00006995) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x64d1,	// (0x00006995) cell_cmode_rocker_pane_g1_cp

0x601d,	// (0x000064e1) cell_cmode_rocker_pane_g2_cp

0xf30c,	// (0x0000f7d0) bg_button_pane_cp07_cp

0xeabd,	// (0x0000ef81) cell_cmode_itu_pane_g1_cp

0xeac6,	// (0x0000ef8a) cell_cmode_itu_pane_t1_cp

0xeac6,	// (0x0000ef8a) cell_cmode_itu_pane_t2_cp

0xd0c1,	// (0x0000d585) settings_code_pane_cp2

0x004b,	// (0x0000050f) bg_popup_window_pane_cp3_ParamLimits

0x056d,	// (0x00000a31) heading_pane_cp3_ParamLimits

0x0579,	// (0x00000a3d) listscroll_popup_graphic_pane_ParamLimits

0x609b,	// (0x0000655f) fep_hwr_aid_pane_ParamLimits

0x7f05,	// (0x000083c9) aid_touch_sctrl_top_ParamLimits

0x7f12,	// (0x000083d6) sctrl_sk_top_pane_g1_ParamLimits

0x64d1,	// (0x00006995) sctrl_sk_top_pane_g2_ParamLimits

0xfd02,	// (0x000101c6) sctrl_sk_top_pane_g_ParamLimits

0x7f1f,	// (0x000083e3) sctrl_sk_top_pane_t1_ParamLimits

0x7f05,	// (0x000083c9) aid_touch_sctrl_bottom_ParamLimits

0x7f1f,	// (0x000083e3) sctrl_sk_bottom_pane_t1_ParamLimits

0x817c,	// (0x00008640) aid_area_touch_clock

0xe545,	// (0x0000ea09) aid_vkb2_area_top_pane_cell_ParamLimits

0xe545,	// (0x0000ea09) aid_vkb2_area_top_pane_cell

0xe5f0,	// (0x0000eab4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe5f0,	// (0x0000eab4) aid_vkb2_area_bottom_pane_cell

0x8ab0,	// (0x00008f74) popup_char_count_window

0x90d8,	// (0x0000959c) popup_char_count_window_g1

0x90e1,	// (0x000095a5) popup_char_count_window_g2

0x90ea,	// (0x000095ae) popup_char_count_window_g3

0x0002,

0xfdd3,	// (0x00010297) popup_char_count_window_g

0x90f3,	// (0x000095b7) popup_char_count_window_t1

0x871d,	// (0x00008be1) popup_fep_char_preview_window_ParamLimits

0x871d,	// (0x00008be1) popup_fep_char_preview_window

0xe565,	// (0x0000ea29) vkb2_top_candi_pane_ParamLimits

0xe565,	// (0x0000ea29) vkb2_top_candi_pane

0xead4,	// (0x0000ef98) cell_vkb2_top_candi_pane_ParamLimits

0xead4,	// (0x0000ef98) cell_vkb2_top_candi_pane

0x3aac,	// (0x00003f70) bg_popup_fep_char_preview_window_ParamLimits

0x3aac,	// (0x00003f70) bg_popup_fep_char_preview_window

0x9152,	// (0x00009616) popup_fep_char_preview_window_t1_ParamLimits

0x9152,	// (0x00009616) popup_fep_char_preview_window_t1

0x918c,	// (0x00009650) bg_popup_fep_char_preview_window_g1

0x9194,	// (0x00009658) bg_popup_fep_char_preview_window_g2

0x919c,	// (0x00009660) bg_popup_fep_char_preview_window_g3

0x91a4,	// (0x00009668) bg_popup_fep_char_preview_window_g4

0x91ac,	// (0x00009670) bg_popup_fep_char_preview_window_g5

0x91b4,	// (0x00009678) bg_popup_fep_char_preview_window_g6

0x91bc,	// (0x00009680) bg_popup_fep_char_preview_window_g7

0x91c4,	// (0x00009688) bg_popup_fep_char_preview_window_g8

0x91cc,	// (0x00009690) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdda,	// (0x0001029e) bg_popup_fep_char_preview_window_g

0x64d1,	// (0x00006995) cell_vkb2_top_candi_pane_g1_ParamLimits

0x64d1,	// (0x00006995) cell_vkb2_top_candi_pane_g1

0x6866,	// (0x00006d2a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6866,	// (0x00006d2a) cell_vkb2_top_candi_pane_g2

0x6887,	// (0x00006d4b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6887,	// (0x00006d4b) cell_vkb2_top_candi_pane_g3

0x91d4,	// (0x00009698) cell_vkb2_top_candi_pane_g4_ParamLimits

0x91d4,	// (0x00009698) cell_vkb2_top_candi_pane_g4

0x91f5,	// (0x000096b9) cell_vkb2_top_candi_pane_g5_ParamLimits

0x91f5,	// (0x000096b9) cell_vkb2_top_candi_pane_g5

0x8008,	// (0x000084cc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8008,	// (0x000084cc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfded,	// (0x000102b1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfded,	// (0x000102b1) cell_vkb2_top_candi_pane_g

0x9216,	// (0x000096da) cell_vkb2_top_candi_pane_t1

0x49e9,	// (0x00004ead) aid_size_touch_slider_mark_ParamLimits

0x49e9,	// (0x00004ead) aid_size_touch_slider_mark

0xe7fc,	// (0x0000ecc0) grid_graphic2_catg_pane_ParamLimits

0xe7fc,	// (0x0000ecc0) grid_graphic2_catg_pane

0xe8ba,	// (0x0000ed7e) popup_grid_graphic2_window_t1_ParamLimits

0xe8ba,	// (0x0000ed7e) popup_grid_graphic2_window_t1

0xe8d0,	// (0x0000ed94) popup_grid_graphic2_window_t2_ParamLimits

0xe8d0,	// (0x0000ed94) popup_grid_graphic2_window_t2

0x0001,

0xfda8,	// (0x0001026c) popup_grid_graphic2_window_t_ParamLimits

0xfda8,	// (0x0001026c) popup_grid_graphic2_window_t

0x037f,	// (0x00000843) bg_button_pane_cp05_ParamLimits

0xea4a,	// (0x0000ef0e) cell_graphic2_control_pane_g1_ParamLimits

0xeb28,	// (0x0000efec) cell_graphic2_catg_pane_ParamLimits

0xeb28,	// (0x0000efec) cell_graphic2_catg_pane

0xf30c,	// (0x0000f7d0) bg_button_pane_cp12

0xeb3a,	// (0x0000effe) cell_graphic2_catg_pane_g1

0x8148,	// (0x0000860c) cell_tb_ext_pane_t1_ParamLimits

0x8b0c,	// (0x00008fd0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8b0c,	// (0x00008fd0) vkb2_top_cell_right_narrow_pane

0x8b24,	// (0x00008fe8) vkb2_top_cell_right_wide_pane_ParamLimits

0x8b24,	// (0x00008fe8) vkb2_top_cell_right_wide_pane

0x608d,	// (0x00006551) bg_vkb2_func_pane_ParamLimits

0x608d,	// (0x00006551) bg_vkb2_func_pane

0x8b95,	// (0x00009059) vkb2_top_cell_left_pane_g1_ParamLimits

0x608d,	// (0x00006551) bg_vkb2_fuc_pane_cp03_ParamLimits

0x608d,	// (0x00006551) bg_vkb2_fuc_pane_cp03

0x8c20,	// (0x000090e4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x32e9,	// (0x000037ad) bg_vkb2_func_pane_g1

0x32f1,	// (0x000037b5) bg_vkb2_func_pane_g2

0x3301,	// (0x000037c5) bg_vkb2_func_pane_g3

0x32f9,	// (0x000037bd) bg_vkb2_func_pane_g4

0x3309,	// (0x000037cd) bg_vkb2_func_pane_g5

0x3311,	// (0x000037d5) bg_vkb2_func_pane_g6

0x3319,	// (0x000037dd) bg_vkb2_func_pane_g7

0x3321,	// (0x000037e5) bg_vkb2_func_pane_g8

0x32e1,	// (0x000037a5) bg_vkb2_func_pane_g9

0x0008,

0xfdfa,	// (0x000102be) bg_vkb2_func_pane_g

0x608d,	// (0x00006551) bg_vkb2_fuc_pane_cp01_ParamLimits

0x608d,	// (0x00006551) bg_vkb2_fuc_pane_cp01

0x8b95,	// (0x00009059) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8b95,	// (0x00009059) vkb2_top_cell_right_wide_pane_g1

0x608d,	// (0x00006551) bg_vkb2_fuc_pane_cp02_ParamLimits

0x608d,	// (0x00006551) bg_vkb2_fuc_pane_cp02

0x8c20,	// (0x000090e4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8c20,	// (0x000090e4) vkb2_top_cell_right_narrow_pane_g1

0xdca6,	// (0x0000e16a) aid_touch_area_decrease_ParamLimits

0xdca6,	// (0x0000e16a) aid_touch_area_decrease

0xdce0,	// (0x0000e1a4) aid_touch_area_increase_ParamLimits

0xdce0,	// (0x0000e1a4) aid_touch_area_increase

0xdd08,	// (0x0000e1cc) aid_touch_area_mute_ParamLimits

0xdd08,	// (0x0000e1cc) aid_touch_area_mute

0xdd38,	// (0x0000e1fc) aid_touch_area_slider_ParamLimits

0xdd38,	// (0x0000e1fc) aid_touch_area_slider

0xdd78,	// (0x0000e23c) popup_slider_window_g4_ParamLimits

0xdd78,	// (0x0000e23c) popup_slider_window_g4

0xdda0,	// (0x0000e264) popup_slider_window_g5_ParamLimits

0xdda0,	// (0x0000e264) popup_slider_window_g5

0xddd4,	// (0x0000e298) popup_slider_window_g6_ParamLimits

0xddd4,	// (0x0000e298) popup_slider_window_g6

0x7e43,	// (0x00008307) popup_slider_window_t2_ParamLimits

0x7e43,	// (0x00008307) popup_slider_window_t2

0x0001,

0xfcf6,	// (0x000101ba) popup_slider_window_t_ParamLimits

0xfcf6,	// (0x000101ba) popup_slider_window_t

0xddf0,	// (0x0000e2b4) slider_pane_ParamLimits

0xddf0,	// (0x0000e2b4) slider_pane

0x924f,	// (0x00009713) slider_pane_g1_ParamLimits

0x924f,	// (0x00009713) slider_pane_g1

0x9263,	// (0x00009727) slider_pane_g2_ParamLimits

0x9263,	// (0x00009727) slider_pane_g2

0x9279,	// (0x0000973d) slider_pane_g3_ParamLimits

0x9279,	// (0x0000973d) slider_pane_g3

0x0003,

0xfe0d,	// (0x000102d1) slider_pane_g_ParamLimits

0xfe0d,	// (0x000102d1) slider_pane_g

0xc5c7,	// (0x0000ca8b) popup_tb_float_extension_window_ParamLimits

0xc5c7,	// (0x0000ca8b) popup_tb_float_extension_window

0x92a5,	// (0x00009769) aid_size_cell_tb_float_ext

0xf30c,	// (0x0000f7d0) bg_popup_sub_window_cp28

0x92b1,	// (0x00009775) grid_tb_float_ext_pane

0x92bd,	// (0x00009781) cell_tb_float_ext_pane_ParamLimits

0x92bd,	// (0x00009781) cell_tb_float_ext_pane

0x92d9,	// (0x0000979d) cell_tb_float_ext_pane_g1

0x92e2,	// (0x000097a6) grid_highlight_pane_cp12

0xd528,	// (0x0000d9ec) cell_last_hwr_side_pane_ParamLimits

0xd528,	// (0x0000d9ec) cell_last_hwr_side_pane

0x601d,	// (0x000064e1) cell_last_hwr_side_pane_g1

0x92eb,	// (0x000097af) cell_last_hwr_side_pane_g2

0x0001,

0xfe16,	// (0x000102da) cell_last_hwr_side_pane_g

0xe6cc,	// (0x0000eb90) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe6cc,	// (0x0000eb90) vkb2_area_bottom_space_btn_pane

0x64d1,	// (0x00006995) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8d07,	// (0x000091cb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9216,	// (0x000096da) cell_vkb2_top_candi_pane_t1_ParamLimits

0x92f4,	// (0x000097b8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x92f4,	// (0x000097b8) vkb2_area_bottom_space_btn_pane_g1

0x932e,	// (0x000097f2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x932e,	// (0x000097f2) vkb2_area_bottom_space_btn_pane_g2

0x9364,	// (0x00009828) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9364,	// (0x00009828) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1b,	// (0x000102df) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1b,	// (0x000102df) vkb2_area_bottom_space_btn_pane_g

0x6152,	// (0x00006616) cel_fep_hwr_func_pane_ParamLimits

0x6152,	// (0x00006616) cel_fep_hwr_func_pane

0xd4fd,	// (0x0000d9c1) cell_hwr_side_button_pane_ParamLimits

0xd4fd,	// (0x0000d9c1) cell_hwr_side_button_pane

0x817c,	// (0x00008640) aid_area_touch_clock_ParamLimits

0x037f,	// (0x00000843) bg_uniindi_top_pane_ParamLimits

0x8190,	// (0x00008654) uniindi_top_pane_g1_ParamLimits

0x81a6,	// (0x0000866a) uniindi_top_pane_g2_ParamLimits

0x81b2,	// (0x00008676) uniindi_top_pane_g3_ParamLimits

0x81c3,	// (0x00008687) uniindi_top_pane_g4_ParamLimits

0xfd2e,	// (0x000101f2) uniindi_top_pane_g_ParamLimits

0x81d0,	// (0x00008694) uniindi_top_pane_t1_ParamLimits

0x037f,	// (0x00000843) bg_vkb2_func_pane_cp01_ParamLimits

0x037f,	// (0x00000843) bg_vkb2_func_pane_cp01

0x93ae,	// (0x00009872) cel_fep_hwr_func_pane_g1_ParamLimits

0x93ae,	// (0x00009872) cel_fep_hwr_func_pane_g1

0x037f,	// (0x00000843) bg_vkb2_func_pane_cp02_ParamLimits

0x037f,	// (0x00000843) bg_vkb2_func_pane_cp02

0x93ae,	// (0x00009872) cell_hwr_side_button_pane_g1_ParamLimits

0x93ae,	// (0x00009872) cell_hwr_side_button_pane_g1

0x30bc,	// (0x00003580) status_pane_g4_ParamLimits

0x30bc,	// (0x00003580) status_pane_g4

0x30d6,	// (0x0000359a) status_pane_t1

0x5e17,	// (0x000062db) form2_midp_gauge_slider_cont_pane

0x5e1f,	// (0x000062e3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd454,	// (0x0000d918) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd466,	// (0x0000d92a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0000ffbe) form2_midp_gauge_slider_pane_t_ParamLimits

0x5e55,	// (0x00006319) form2_midp_slider_pane_ParamLimits

0x86e5,	// (0x00008ba9) aid_size_cell_func_vkb2_ParamLimits

0x86e5,	// (0x00008ba9) aid_size_cell_func_vkb2

0x9291,	// (0x00009755) slider_pane_g4_ParamLimits

0x9291,	// (0x00009755) slider_pane_g4

0xeb43,	// (0x0000f007) form2_midp_gauge_slider_pane_t2_cp01

0xeb51,	// (0x0000f015) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeb51,	// (0x0000f015) form2_midp_gauge_slider_pane_t3_cp01

0x93e7,	// (0x000098ab) form2_midp_slider_pane_cp01

0xf30c,	// (0x0000f7d0) navi_smil_pane

0x941b,	// (0x000098df) navi_smil_pane_g1

0x9423,	// (0x000098e7) navi_smil_pane_t1

0x93f0,	// (0x000098b4) form2_midp_slider_pane_g1

0x93f9,	// (0x000098bd) form2_midp_slider_pane_g2

0x9401,	// (0x000098c5) form2_midp_slider_pane_g3

0x93f0,	// (0x000098b4) form2_midp_slider_pane_g4

0xeb6e,	// (0x0000f032) form2_midp_slider_pane_g5

0x0004,

0xfe24,	// (0x000102e8) form2_midp_slider_pane_g

0x939e,	// (0x00009862) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x939e,	// (0x00009862) vkb2_area_bottom_space_btn_pane_g4

0xc7ac,	// (0x0000cc70) lc0_navi_pane_ParamLimits

0xc7ac,	// (0x0000cc70) lc0_navi_pane

0xc81c,	// (0x0000cce0) lc0_stat_indi_pane_ParamLimits

0xc81c,	// (0x0000cce0) lc0_stat_indi_pane

0xc831,	// (0x0000ccf5) ls0_title_pane_ParamLimits

0xc831,	// (0x0000ccf5) ls0_title_pane

0x0f17,	// (0x000013db) bg_popup_sub_pane_cp14_ParamLimits

0x8163,	// (0x00008627) list_uniindi_pane_ParamLimits

0x816f,	// (0x00008633) uniindi_top_pane_ParamLimits

0x820e,	// (0x000086d2) list_single_uniindi_pane_g1_ParamLimits

0x8221,	// (0x000086e5) list_single_uniindi_pane_t1_ParamLimits

0xeb77,	// (0x0000f03b) lc0_stat_clock_pane_ParamLimits

0xeb77,	// (0x0000f03b) lc0_stat_clock_pane

0xeb84,	// (0x0000f048) lc0_stat_indi_pane_g1_ParamLimits

0xeb84,	// (0x0000f048) lc0_stat_indi_pane_g1

0xeb91,	// (0x0000f055) lc0_stat_indi_pane_g2_ParamLimits

0xeb91,	// (0x0000f055) lc0_stat_indi_pane_g2

0x0001,

0xfe2f,	// (0x000102f3) lc0_stat_indi_pane_g_ParamLimits

0xfe2f,	// (0x000102f3) lc0_stat_indi_pane_g

0xeb9e,	// (0x0000f062) lc0_uni_indicator_pane_ParamLimits

0xeb9e,	// (0x0000f062) lc0_uni_indicator_pane

0xebab,	// (0x0000f06f) ls0_title_pane_g1_ParamLimits

0xebab,	// (0x0000f06f) ls0_title_pane_g1

0xebbf,	// (0x0000f083) ls0_title_pane_t1_ParamLimits

0xebbf,	// (0x0000f083) ls0_title_pane_t1

0xebed,	// (0x0000f0b1) lc0_uni_indicator_pane_g1_ParamLimits

0xebed,	// (0x0000f0b1) lc0_uni_indicator_pane_g1

0x94c2,	// (0x00009986) lc0_stat_clock_pane_t1

0xf30c,	// (0x0000f7d0) main_ai5_pane

0x94d0,	// (0x00009994) ai5_sk_pane_ParamLimits

0x94d0,	// (0x00009994) ai5_sk_pane

0xec0c,	// (0x0000f0d0) cell_ai5_widget_pane_ParamLimits

0xec0c,	// (0x0000f0d0) cell_ai5_widget_pane

0x9553,	// (0x00009a17) aid_size_cell_widget_grid

0x9567,	// (0x00009a2b) bg_ai5_widget_pane_ParamLimits

0x9567,	// (0x00009a2b) bg_ai5_widget_pane

0xec99,	// (0x0000f15d) cell_ai5_widget_pane_g2

0xeca9,	// (0x0000f16d) cell_ai5_widget_pane_g3

0xecc8,	// (0x0000f18c) cell_ai5_widget_pane_g4

0xecd4,	// (0x0000f198) cell_ai5_widget_pane_g5

0xece0,	// (0x0000f1a4) cell_ai5_widget_pane_g6

0xecec,	// (0x0000f1b0) cell_ai5_widget_pane_g7

0xed34,	// (0x0000f1f8) cell_ai5_widget_pane_t1_ParamLimits

0xed34,	// (0x0000f1f8) cell_ai5_widget_pane_t1

0xed51,	// (0x0000f215) cell_ai5_widget_pane_t2_ParamLimits

0xed51,	// (0x0000f215) cell_ai5_widget_pane_t2

0xed69,	// (0x0000f22d) cell_ai5_widget_pane_t3_ParamLimits

0xed69,	// (0x0000f22d) cell_ai5_widget_pane_t3

0xed81,	// (0x0000f245) cell_ai5_widget_pane_t4_ParamLimits

0xed81,	// (0x0000f245) cell_ai5_widget_pane_t4

0xed9b,	// (0x0000f25f) cell_ai5_widget_pane_t5_ParamLimits

0xed9b,	// (0x0000f25f) cell_ai5_widget_pane_t5

0x96b2,	// (0x00009b76) cell_ai5_widget_pane_t6_ParamLimits

0x96b2,	// (0x00009b76) cell_ai5_widget_pane_t6

0x96c4,	// (0x00009b88) cell_ai5_widget_pane_t7_ParamLimits

0x96c4,	// (0x00009b88) cell_ai5_widget_pane_t7

0xedba,	// (0x0000f27e) cell_ai5_widget_pane_t8_ParamLimits

0xedba,	// (0x0000f27e) cell_ai5_widget_pane_t8

0x0009,

0xfe49,	// (0x0001030d) cell_ai5_widget_pane_t_ParamLimits

0xfe49,	// (0x0001030d) cell_ai5_widget_pane_t

0xee06,	// (0x0000f2ca) grid_ai5_widget_pane

0x0f17,	// (0x000013db) highlight_cell_ai5_widget_pane_ParamLimits

0x0f17,	// (0x000013db) highlight_cell_ai5_widget_pane

0xee1d,	// (0x0000f2e1) ai5_sk_left_pane

0xee27,	// (0x0000f2eb) ai5_sk_middle_pane

0xee31,	// (0x0000f2f5) ai5_sk_right_pane

0x975e,	// (0x00009c22) bg_ai5_widget_pane_g1_ParamLimits

0x975e,	// (0x00009c22) bg_ai5_widget_pane_g1

0x976a,	// (0x00009c2e) bg_ai5_widget_pane_g2_ParamLimits

0x976a,	// (0x00009c2e) bg_ai5_widget_pane_g2

0x9776,	// (0x00009c3a) bg_ai5_widget_pane_g3_ParamLimits

0x9776,	// (0x00009c3a) bg_ai5_widget_pane_g3

0x9782,	// (0x00009c46) bg_ai5_widget_pane_g4_ParamLimits

0x9782,	// (0x00009c46) bg_ai5_widget_pane_g4

0x978e,	// (0x00009c52) bg_ai5_widget_pane_g5_ParamLimits

0x978e,	// (0x00009c52) bg_ai5_widget_pane_g5

0x979a,	// (0x00009c5e) bg_ai5_widget_pane_g6_ParamLimits

0x979a,	// (0x00009c5e) bg_ai5_widget_pane_g6

0x97a6,	// (0x00009c6a) bg_ai5_widget_pane_g7_ParamLimits

0x97a6,	// (0x00009c6a) bg_ai5_widget_pane_g7

0x97b2,	// (0x00009c76) bg_ai5_widget_pane_g8_ParamLimits

0x97b2,	// (0x00009c76) bg_ai5_widget_pane_g8

0x97be,	// (0x00009c82) bg_ai5_widget_pane_g9_ParamLimits

0x97be,	// (0x00009c82) bg_ai5_widget_pane_g9

0x0008,

0xfe5e,	// (0x00010322) bg_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x00010322) bg_ai5_widget_pane_g

0x97e5,	// (0x00009ca9) cell_shortcut_ai5_widget_pane_ParamLimits

0x97e5,	// (0x00009ca9) cell_shortcut_ai5_widget_pane

0x01c1,	// (0x00000685) bg_cell_shortcut_ai5_widget_pane

0x97f7,	// (0x00009cbb) cell_grid_ai5_widget_pane_g1

0x9800,	// (0x00009cc4) highlight_cell_shortcut_ai5_widget_pane

0x32f1,	// (0x000037b5) ai5_sk_left_pane_g1

0x9808,	// (0x00009ccc) ai5_sk_left_pane_g2

0x9810,	// (0x00009cd4) ai5_sk_left_pane_g3

0x9818,	// (0x00009cdc) ai5_sk_left_pane_g4

0x0003,

0xfe71,	// (0x00010335) ai5_sk_left_pane_g

0x9820,	// (0x00009ce4) ai5_sk_left_pane_t1

0x32e9,	// (0x000037ad) ai5_sk_right_pane_g1

0x982e,	// (0x00009cf2) ai5_sk_right_pane_g2

0x9836,	// (0x00009cfa) ai5_sk_right_pane_g3

0x983e,	// (0x00009d02) ai5_sk_right_pane_g4

0x0003,

0xfe7a,	// (0x0001033e) ai5_sk_right_pane_g

0x9846,	// (0x00009d0a) ai5_sk_right_pane_t1

0x32e9,	// (0x000037ad) ai5_sk_middle_pane_g1

0x32f1,	// (0x000037b5) ai5_sk_middle_pane_g2

0x3309,	// (0x000037cd) ai5_sk_middle_pane_g3

0x9836,	// (0x00009cfa) ai5_sk_middle_pane_g4

0x9810,	// (0x00009cd4) ai5_sk_middle_pane_g5

0x9854,	// (0x00009d18) ai5_sk_middle_pane_g6

0xee56,	// (0x0000f31a) ai5_sk_middle_pane_g7

0x0006,

0xfe83,	// (0x00010347) ai5_sk_middle_pane_g

0xc698,	// (0x0000cb5c) aid_touch_area_size_lc0_ParamLimits

0xc698,	// (0x0000cb5c) aid_touch_area_size_lc0

0x68a8,	// (0x00006d6c) cell_hwr_candidate_pane_t1_ParamLimits

0x2d73,	// (0x00003237) aid_touch_navi_pane

0xc93c,	// (0x0000ce00) status_dt_navi_pane_ParamLimits

0xc93c,	// (0x0000ce00) status_dt_navi_pane

0xc954,	// (0x0000ce18) status_dt_sta_pane_ParamLimits

0xc954,	// (0x0000ce18) status_dt_sta_pane

0xee5e,	// (0x0000f322) dt_sta_controll_pane

0xee6b,	// (0x0000f32f) dt_sta_indi_pane

0xee78,	// (0x0000f33c) dt_sta_title_pane

0x037f,	// (0x00000843) bg_dt_sta_indi_pane_ParamLimits

0x037f,	// (0x00000843) bg_dt_sta_indi_pane

0xee8a,	// (0x0000f34e) dt_sta_battery_pane

0xee92,	// (0x0000f356) dt_sta_indi_pane_g1

0xee9b,	// (0x0000f35f) dt_sta_indi_pane_g2

0xeea4,	// (0x0000f368) dt_sta_indi_pane_g3

0x0002,

0xfe92,	// (0x00010356) dt_sta_indi_pane_g

0xeead,	// (0x0000f371) dt_sta_signal_pane

0x0f17,	// (0x000013db) bg_dt_sta_title_pane_ParamLimits

0x0f17,	// (0x000013db) bg_dt_sta_title_pane

0xeeb6,	// (0x0000f37a) dt_sta_title_pane_g1

0xeebe,	// (0x0000f382) dt_sta_title_pane_t1_ParamLimits

0xeebe,	// (0x0000f382) dt_sta_title_pane_t1

0xf30c,	// (0x0000f7d0) bg_dt_sta_control_pane

0xeed3,	// (0x0000f397) dt_sta_controll_pane_g1

0xeedc,	// (0x0000f3a0) bg_dt_sta_title_pane_g1

0xeee5,	// (0x0000f3a9) bg_dt_sta_title_pane_g2

0xeeee,	// (0x0000f3b2) bg_dt_sta_title_pane_g3

0x0002,

0xfe99,	// (0x0001035d) bg_dt_sta_title_pane_g

0x601d,	// (0x000064e1) bg_dt_sta_indi_pane_g1

0x9902,	// (0x00009dc6) dt_sta_signal_pane_g1

0x990a,	// (0x00009dce) dt_sta_signal_pane_g2

0x0001,

0xfea0,	// (0x00010364) dt_sta_signal_pane_g

0x9912,	// (0x00009dd6) dt_sta_battery_pane_g1

0x991b,	// (0x00009ddf) dt_sta_battery_pane_t1

0x601d,	// (0x000064e1) bg_dt_sta_control_pane_g1

0x1aa3,	// (0x00001f67) fep_china_uni_eep_pane

0x1aab,	// (0x00001f6f) fep_china_uni_entry_pane_ParamLimits

0x1abb,	// (0x00001f7f) popup_fep_china_uni_window_g1_ParamLimits

0x1acb,	// (0x00001f8f) popup_fep_china_uni_window_g2_ParamLimits

0x1acb,	// (0x00001f8f) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0000fbf4) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0000fbf4) popup_fep_china_uni_window_g

0x992a,	// (0x00009dee) fep_china_uni_eep_pane_g1

0x9932,	// (0x00009df6) fep_china_uni_eep_pane_t1

0x9412,	// (0x000098d6) aid_touch_area_size_smil_player

0x2ecb,	// (0x0000338f) lc0_clock_pane

0x30ca,	// (0x0000358e) status_pane_g5_ParamLimits

0x30ca,	// (0x0000358e) status_pane_g5

0xc0f1,	// (0x0000c5b5) popup_keymap_window

0x3088,	// (0x0000354c) status_icon_pane

0xeca9,	// (0x0000f16d) cell_ai5_widget_pane_g3_ParamLimits

0xecc8,	// (0x0000f18c) cell_ai5_widget_pane_g4_ParamLimits

0xecd4,	// (0x0000f198) cell_ai5_widget_pane_g5_ParamLimits

0xecf8,	// (0x0000f1bc) cell_ai5_widget_pane_g8_ParamLimits

0xecf8,	// (0x0000f1bc) cell_ai5_widget_pane_g8

0xed0c,	// (0x0000f1d0) cell_ai5_widget_pane_g9_ParamLimits

0xed0c,	// (0x0000f1d0) cell_ai5_widget_pane_g9

0xed20,	// (0x0000f1e4) cell_ai5_widget_pane_g10_ParamLimits

0xed20,	// (0x0000f1e4) cell_ai5_widget_pane_g10

0x9941,	// (0x00009e05) status_icon_pane_g1

0xf30c,	// (0x0000f7d0) bg_popup_sub_pane_cp13

0x9949,	// (0x00009e0d) popup_keymap_window_t1

0xbde4,	// (0x0000c2a8) control_pane_g6_ParamLimits

0xbde4,	// (0x0000c2a8) control_pane_g6

0xbdf1,	// (0x0000c2b5) control_pane_g7_ParamLimits

0xbdf1,	// (0x0000c2b5) control_pane_g7

0xbdfe,	// (0x0000c2c2) control_pane_g8_ParamLimits

0xbdfe,	// (0x0000c2c2) control_pane_g8

0xee5e,	// (0x0000f322) dt_sta_controll_pane_ParamLimits

0xee6b,	// (0x0000f32f) dt_sta_indi_pane_ParamLimits

0xee78,	// (0x0000f33c) dt_sta_title_pane_ParamLimits

0x08b4,	// (0x00000d78) aid_size_touch_scroll_bar_cale

0xf4b1,	// (0x0000f975) popup_discreet_window_ParamLimits

0xf4b1,	// (0x0000f975) popup_discreet_window

0xafaf,	// (0x0000b473) popup_sk_window

0x3aac,	// (0x00003f70) bg_popup_sub_pane_cp28_ParamLimits

0x3aac,	// (0x00003f70) bg_popup_sub_pane_cp28

0x9957,	// (0x00009e1b) popup_discreet_window_g1_ParamLimits

0x9957,	// (0x00009e1b) popup_discreet_window_g1

0x9977,	// (0x00009e3b) popup_discreet_window_t1_ParamLimits

0x9977,	// (0x00009e3b) popup_discreet_window_t1

0x9995,	// (0x00009e59) popup_discreet_window_t2_ParamLimits

0x9995,	// (0x00009e59) popup_discreet_window_t2

0x0002,

0xfea5,	// (0x00010369) popup_discreet_window_t_ParamLimits

0xfea5,	// (0x00010369) popup_discreet_window_t

0x99e7,	// (0x00009eab) popup_sk_window_g1

0x99f1,	// (0x00009eb5) popup_sk_window_g2

0x0001,

0xfeac,	// (0x00010370) popup_sk_window_g

0x99fb,	// (0x00009ebf) popup_sk_window_t1

0x9a09,	// (0x00009ecd) popup_sk_window_t1_copy1

0xec99,	// (0x0000f15d) cell_ai5_widget_pane_g2_ParamLimits

0xedcc,	// (0x0000f290) cell_ai5_widget_pane_t9_ParamLimits

0xedcc,	// (0x0000f290) cell_ai5_widget_pane_t9

0xf30c,	// (0x0000f7d0) main_fep_fshwr2_pane

0xeef7,	// (0x0000f3bb) aid_fshwr2_btn_pane

0xeeff,	// (0x0000f3c3) aid_fshwr2_syb_pane

0xef07,	// (0x0000f3cb) aid_fshwr2_txt_pane

0xef0f,	// (0x0000f3d3) fshwr2_func_candi_pane

0xef19,	// (0x0000f3dd) fshwr2_hwr_syb_pane

0xef25,	// (0x0000f3e9) fshwr2_icf_pane

0xf30c,	// (0x0000f7d0) fshwr2_icf_bg_pane

0xef2f,	// (0x0000f3f3) fshwr2_icf_pane_t1_ParamLimits

0xef2f,	// (0x0000f3f3) fshwr2_icf_pane_t1

0x601d,	// (0x000064e1) fshwr2_func_candi_pane_g1

0x9a7c,	// (0x00009f40) fshwr2_func_candi_row_pane_ParamLimits

0x9a7c,	// (0x00009f40) fshwr2_func_candi_row_pane

0xef47,	// (0x0000f40b) cell_fshwr2_syb_pane_ParamLimits

0xef47,	// (0x0000f40b) cell_fshwr2_syb_pane

0x64d1,	// (0x00006995) fshwr2_hwr_syb_pane_g1_ParamLimits

0x64d1,	// (0x00006995) fshwr2_hwr_syb_pane_g1

0xf30c,	// (0x0000f7d0) bg_popup_call_pane_cp01

0x9aa7,	// (0x00009f6b) fshwr2_func_candi_cell_pane_ParamLimits

0x9aa7,	// (0x00009f6b) fshwr2_func_candi_cell_pane

0x9ad9,	// (0x00009f9d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9ad9,	// (0x00009f9d) fshwr2_func_candi_cell_bg_pane

0x9af3,	// (0x00009fb7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9af3,	// (0x00009fb7) fshwr2_func_candi_cell_pane_g1

0x9b13,	// (0x00009fd7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9b13,	// (0x00009fd7) fshwr2_func_candi_cell_pane_t1

0xf30c,	// (0x0000f7d0) bg_button_pane_cp08

0x2175,	// (0x00002639) cell_fshwr2_syb_bg_pane

0xef60,	// (0x0000f424) cell_fshwr2_syb_bg_pane_g1

0xef68,	// (0x0000f42c) cell_fshwr2_syb_bg_pane_t1

0x0f17,	// (0x000013db) main_tmo_pane

0xce85,	// (0x0000d349) uni_indicator_pane_g1_ParamLimits

0xce9a,	// (0x0000d35e) uni_indicator_pane_g2_ParamLimits

0xceaf,	// (0x0000d373) uni_indicator_pane_g3_ParamLimits

0xcec5,	// (0x0000d389) uni_indicator_pane_g4_ParamLimits

0xcec5,	// (0x0000d389) uni_indicator_pane_g4

0xced9,	// (0x0000d39d) uni_indicator_pane_g5_ParamLimits

0xced9,	// (0x0000d39d) uni_indicator_pane_g5

0xceed,	// (0x0000d3b1) uni_indicator_pane_g6_ParamLimits

0xceed,	// (0x0000d3b1) uni_indicator_pane_g6

0xf921,	// (0x0000fde5) uni_indicator_pane_g_ParamLimits

0xdc76,	// (0x0000e13a) popup_tmo_note_window_ParamLimits

0xdc76,	// (0x0000e13a) popup_tmo_note_window

0xf30c,	// (0x0000f7d0) fshwr2_bg_pane

0x9b04,	// (0x00009fc8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9b04,	// (0x00009fc8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb1,	// (0x00010375) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb1,	// (0x00010375) fshwr2_func_candi_cell_pane_g

0x601d,	// (0x000064e1) bg_popup_window_pane_cp01

0x9b3d,	// (0x0000a001) bg_popup_window_pane_g1_cp01

0x9b46,	// (0x0000a00a) bg_popup_window_pane_cp22_ParamLimits

0x9b46,	// (0x0000a00a) bg_popup_window_pane_cp22

0x9b54,	// (0x0000a018) listscroll_tmo_link_pane_ParamLimits

0x9b54,	// (0x0000a018) listscroll_tmo_link_pane

0x9b94,	// (0x0000a058) popup_tmo_note_window_g1_ParamLimits

0x9b94,	// (0x0000a058) popup_tmo_note_window_g1

0x9ba1,	// (0x0000a065) tmo_note_info_pane_ParamLimits

0x9ba1,	// (0x0000a065) tmo_note_info_pane

0xef77,	// (0x0000f43b) list_tmo_note_info_pane_g1_ParamLimits

0xef77,	// (0x0000f43b) list_tmo_note_info_pane_g1

0x9bd2,	// (0x0000a096) list_tmo_note_info_pane_g2_ParamLimits

0x9bd2,	// (0x0000a096) list_tmo_note_info_pane_g2

0x0001,

0xfeb6,	// (0x0001037a) list_tmo_note_info_pane_g_ParamLimits

0xfeb6,	// (0x0001037a) list_tmo_note_info_pane_g

0x9bee,	// (0x0000a0b2) list_tmo_note_info_text_pane_ParamLimits

0x9bee,	// (0x0000a0b2) list_tmo_note_info_text_pane

0x9c73,	// (0x0000a137) list_tmo_link_pane

0x9c80,	// (0x0000a144) scroll_pane_cp20

0x9c8d,	// (0x0000a151) list_single_tmo_link_pane_ParamLimits

0x9c8d,	// (0x0000a151) list_single_tmo_link_pane

0x9c9d,	// (0x0000a161) list_single_tmo_link_pane_t1

0x9cab,	// (0x0000a16f) list_tmo_note_info_text_pane_t1_ParamLimits

0x9cab,	// (0x0000a16f) list_tmo_note_info_text_pane_t1

0xb936,	// (0x0000bdfa) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb936,	// (0x0000bdfa) aid_size_touch_scroll_bar_cp01

0xb865,	// (0x0000bd29) aid_size_touch_slider_marker

0xaf9f,	// (0x0000b463) popup_settings_window_ParamLimits

0xaf9f,	// (0x0000b463) popup_settings_window

0x271e,	// (0x00002be2) popup_candi_list_indi_window

0x2d73,	// (0x00003237) aid_touch_navi_pane_ParamLimits

0x7ed9,	// (0x0000839d) rs_clock_indi_pane

0x7ee2,	// (0x000083a6) sctrl_sk_bottom_pane_ParamLimits

0x7ef3,	// (0x000083b7) sctrl_sk_top_pane_ParamLimits

0x8737,	// (0x00008bfb) popup_fep_tooltip_window

0x9553,	// (0x00009a17) aid_size_cell_widget_grid_ParamLimits

0xec8d,	// (0x0000f151) cell_ai5_widget_pane_g1_ParamLimits

0xec8d,	// (0x0000f151) cell_ai5_widget_pane_g1

0xece0,	// (0x0000f1a4) cell_ai5_widget_pane_g6_ParamLimits

0xecec,	// (0x0000f1b0) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe34,	// (0x000102f8) cell_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x000102f8) cell_ai5_widget_pane_g

0xedf0,	// (0x0000f2b4) cell_ai5_widget_pane_t10_ParamLimits

0xedf0,	// (0x0000f2b4) cell_ai5_widget_pane_t10

0xee06,	// (0x0000f2ca) grid_ai5_widget_pane_ParamLimits

0xee3b,	// (0x0000f2ff) cell_contacts_ai5_widget_pane_ParamLimits

0xee3b,	// (0x0000f2ff) cell_contacts_ai5_widget_pane

0x99aa,	// (0x00009e6e) popup_discreet_window_t3_ParamLimits

0x99aa,	// (0x00009e6e) popup_discreet_window_t3

0x9a4d,	// (0x00009f11) popup_fshwr2_char_preview_window_ParamLimits

0x9a4d,	// (0x00009f11) popup_fshwr2_char_preview_window

0xef8e,	// (0x0000f452) tmo_note_info_pane_t1

0xefa3,	// (0x0000f467) tmo_note_info_pane_t2

0xefbc,	// (0x0000f480) tmo_note_info_pane_t3

0x9c4f,	// (0x0000a113) tmo_note_info_pane_t4

0x9c61,	// (0x0000a125) tmo_note_info_pane_t5

0x0004,

0xfebb,	// (0x0001037f) tmo_note_info_pane_t

0x9c73,	// (0x0000a137) list_tmo_link_pane_ParamLimits

0x9c80,	// (0x0000a144) scroll_pane_cp20_ParamLimits

0xf30c,	// (0x0000f7d0) bg_popup_fep_char_preview_window_cp01

0x9cc4,	// (0x0000a188) popup_fshwr2_char_preview_window_t1

0x9cd2,	// (0x0000a196) popup_candi_list_indi_window_g1

0x9cdb,	// (0x0000a19f) bg_cell_contacts_ai5_widget_pane

0x9ce7,	// (0x0000a1ab) cell_contacts_ai5_widget_pane_g1

0x9cfb,	// (0x0000a1bf) cell_contacts_ai5_widget_pane_g2

0x9d0a,	// (0x0000a1ce) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec6,	// (0x0001038a) cell_contacts_ai5_widget_pane_g

0x9d1d,	// (0x0000a1e1) cell_contacts_ai5_widget_pane_t1

0x0f17,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf036,	// (0x0000f4fa) settings_container_pane

0x2175,	// (0x00002639) listscroll_set_pane_copy1

0x5574,	// (0x00005a38) scroll_pane_cp121_copy1

0x9da3,	// (0x0000a267) set_content_pane_copy1

0xf042,	// (0x0000f506) aid_height_set_list_copy1_ParamLimits

0xf042,	// (0x0000f506) aid_height_set_list_copy1

0x4aaf,	// (0x00004f73) aid_size_parent_copy1_ParamLimits

0x4aaf,	// (0x00004f73) aid_size_parent_copy1

0xf04e,	// (0x0000f512) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf04e,	// (0x0000f512) button_value_adjust_pane_cp6_copy1

0x26f6,	// (0x00002bba) list_highlight_pane_cp2_copy1_ParamLimits

0x26f6,	// (0x00002bba) list_highlight_pane_cp2_copy1

0xf062,	// (0x0000f526) list_set_pane_copy1_ParamLimits

0xf062,	// (0x0000f526) list_set_pane_copy1

0xefd1,	// (0x0000f495) main_pane_set_t1_copy1_ParamLimits

0xefd1,	// (0x0000f495) main_pane_set_t1_copy1

0xf00b,	// (0x0000f4cf) main_pane_set_t2_copy1_ParamLimits

0xf00b,	// (0x0000f4cf) main_pane_set_t2_copy1

0xf129,	// (0x0000f5ed) main_pane_set_t3_copy1

0xf137,	// (0x0000f5fb) main_pane_set_t4_copy1

0xf02a,	// (0x0000f4ee) set_content_pane_g1_copy1_ParamLimits

0xf02a,	// (0x0000f4ee) set_content_pane_g1_copy1

0xf145,	// (0x0000f609) setting_code_pane_copy1

0x9eb8,	// (0x0000a37c) setting_slider_graphic_pane_copy1

0x9eb8,	// (0x0000a37c) setting_slider_pane_copy1

0x9eb8,	// (0x0000a37c) setting_text_pane_copy1

0x9ec2,	// (0x0000a386) setting_volume_pane_copy1

0xf14f,	// (0x0000f613) settings_code_pane_cp2_copy1

0xf157,	// (0x0000f61b) settings_code_pane_cp_copy1_ParamLimits

0xf157,	// (0x0000f61b) settings_code_pane_cp_copy1

0xf16b,	// (0x0000f62f) volume_set_pane_copy1

0xf177,	// (0x0000f63b) volume_set_pane_g10_copy1

0xf183,	// (0x0000f647) volume_set_pane_g1_copy1

0xf18d,	// (0x0000f651) volume_set_pane_g2_copy1

0xf197,	// (0x0000f65b) volume_set_pane_g3_copy1

0xf1a1,	// (0x0000f665) volume_set_pane_g4_copy1

0xf1ab,	// (0x0000f66f) volume_set_pane_g5_copy1

0xf1b5,	// (0x0000f679) volume_set_pane_g6_copy1

0xf1bf,	// (0x0000f683) volume_set_pane_g7_copy1

0xf1c9,	// (0x0000f68d) volume_set_pane_g8_copy1

0xf1d3,	// (0x0000f697) volume_set_pane_g9_copy1

0x004b,	// (0x0000050f) bg_set_opt_pane_cp_copy1_ParamLimits

0x004b,	// (0x0000050f) bg_set_opt_pane_cp_copy1

0x9f59,	// (0x0000a41d) setting_slider_pane_t1_copy1_ParamLimits

0x9f59,	// (0x0000a41d) setting_slider_pane_t1_copy1

0xf1dd,	// (0x0000f6a1) setting_slider_pane_t2_copy1_ParamLimits

0xf1dd,	// (0x0000f6a1) setting_slider_pane_t2_copy1

0xf1f7,	// (0x0000f6bb) setting_slider_pane_t3_copy1_ParamLimits

0xf1f7,	// (0x0000f6bb) setting_slider_pane_t3_copy1

0xf20f,	// (0x0000f6d3) slider_set_pane_copy1_ParamLimits

0xf20f,	// (0x0000f6d3) slider_set_pane_copy1

0x1053,	// (0x00001517) set_opt_bg_pane_g1_copy2

0x105b,	// (0x0000151f) set_opt_bg_pane_g2_copy2

0x9fbf,	// (0x0000a483) set_opt_bg_pane_g3_copy2

0x106b,	// (0x0000152f) set_opt_bg_pane_g4_copy2

0x1073,	// (0x00001537) set_opt_bg_pane_g5_copy2

0x107b,	// (0x0000153f) set_opt_bg_pane_g6_copy2

0xf225,	// (0x0000f6e9) set_opt_bg_pane_g7_copy2

0x9fd3,	// (0x0000a497) set_opt_bg_pane_g8_copy2

0x9fdd,	// (0x0000a4a1) set_opt_bg_pane_g9_copy2

0x9fe7,	// (0x0000a4ab) aid_size_touch_slider_mark_copy1_ParamLimits

0x9fe7,	// (0x0000a4ab) aid_size_touch_slider_mark_copy1

0x9ffb,	// (0x0000a4bf) slider_set_pane_g1_copy1

0xa004,	// (0x0000a4c8) slider_set_pane_g2_copy1

0x4a16,	// (0x00004eda) slider_set_pane_g3_copy1_ParamLimits

0x4a16,	// (0x00004eda) slider_set_pane_g3_copy1

0x4a2a,	// (0x00004eee) slider_set_pane_g4_copy1_ParamLimits

0x4a2a,	// (0x00004eee) slider_set_pane_g4_copy1

0x4a42,	// (0x00004f06) slider_set_pane_g5_copy1_ParamLimits

0x4a42,	// (0x00004f06) slider_set_pane_g5_copy1

0x4a16,	// (0x00004eda) slider_set_pane_g6_copy1_ParamLimits

0x4a16,	// (0x00004eda) slider_set_pane_g6_copy1

0xf22f,	// (0x0000f6f3) slider_set_pane_g7_copy1_ParamLimits

0xf22f,	// (0x0000f6f3) slider_set_pane_g7_copy1

0xf48f,	// (0x0000f953) bg_set_opt_pane_cp2_copy1

0xa022,	// (0x0000a4e6) setting_slider_graphic_pane_g1_copy1

0xf245,	// (0x0000f709) setting_slider_graphic_pane_t1_copy1

0xf255,	// (0x0000f719) setting_slider_graphic_pane_t2_copy1

0xf265,	// (0x0000f729) slider_set_pane_cp_copy1

0xa05b,	// (0x0000a51f) input_focus_pane_cp1_copy1

0xa064,	// (0x0000a528) list_set_text_pane_copy1

0xa06c,	// (0x0000a530) setting_text_pane_g1_copy1

0x0134,	// (0x000005f8) set_text_pane_t1_copy1

0xa05b,	// (0x0000a51f) input_focus_pane_cp2_copy1

0xa06c,	// (0x0000a530) setting_code_pane_g1_copy1

0xf26d,	// (0x0000f731) setting_code_pane_t1_copy1

0xf27b,	// (0x0000f73f) list_set_graphic_pane_copy1

0xf48f,	// (0x0000f953) bg_set_opt_pane_cp4_copy1

0xbc8c,	// (0x0000c150) list_set_graphic_pane_g1_copy1_ParamLimits

0xbc8c,	// (0x0000c150) list_set_graphic_pane_g1_copy1

0xf28d,	// (0x0000f751) list_set_graphic_pane_g2_copy1

0xbca4,	// (0x0000c168) list_set_graphic_pane_t1_copy1_ParamLimits

0xbca4,	// (0x0000c168) list_set_graphic_pane_t1_copy1

0x601d,	// (0x000064e1) rs_clock_indi_pane_g1

0xa0b6,	// (0x0000a57a) rs_clock_indi_pane_t1

0xa0c4,	// (0x0000a588) rs_indi_pane

0xa0cc,	// (0x0000a590) rs_indi_pane_g1

0xa0d5,	// (0x0000a599) rs_indi_pane_g2

0xa0de,	// (0x0000a5a2) rs_indi_pane_g3

0x0002,

0xfecd,	// (0x00010391) rs_indi_pane_g

0x2175,	// (0x00002639) bg_popup_preview_window_pane_cp03

0xa0e7,	// (0x0000a5ab) popup_fep_tooltip_window_t1

0x729f,	// (0x00007763) popup_note2_window_g2_ParamLimits

0x729f,	// (0x00007763) popup_note2_window_g2

0x0001,

0xfc66,	// (0x0001012a) popup_note2_window_g_ParamLimits

0xfc66,	// (0x0001012a) popup_note2_window_g

0x78ae,	// (0x00007d72) bg_popup_sub_pane_cp11_ParamLimits

0x78bb,	// (0x00007d7f) cell_ai3_links_pane_g1_ParamLimits

0x78d2,	// (0x00007d96) cell_ai3_links_pane_t1

0x0134,	// (0x000005f8) set_text_pane_t1_copy1_ParamLimits

0x2082,	// (0x00002546) cell_graphic_popup_pane_cp2_ParamLimits

0x2082,	// (0x00002546) cell_graphic_popup_pane_cp2

0xa0f5,	// (0x0000a5b9) cell_graphic_popup_pane_g1_cp2

0x06c7,	// (0x00000b8b) cell_graphic_popup_pane_g2_cp2

0xa0fd,	// (0x0000a5c1) cell_graphic_popup_pane_g3_cp2

0xa105,	// (0x0000a5c9) cell_graphic_popup_pane_t2_cp2

0x06d8,	// (0x00000b9c) grid_highlight_pane_cp3_cp2

0x15ba,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0f17,	// (0x000013db) main_tmo_pane_ParamLimits

0xdc6a,	// (0x0000e12e) popup_tmo_big_image_note_window

0xec7d,	// (0x0000f141) cell_ai5_widget_list_pane

0xec85,	// (0x0000f149) cell_ai5_widget_lrg_icon_pane

0xef8e,	// (0x0000f452) tmo_note_info_pane_t1_ParamLimits

0xefa3,	// (0x0000f467) tmo_note_info_pane_t2_ParamLimits

0xefbc,	// (0x0000f480) tmo_note_info_pane_t3_ParamLimits

0x9c4f,	// (0x0000a113) tmo_note_info_pane_t4_ParamLimits

0x9c61,	// (0x0000a125) tmo_note_info_pane_t5_ParamLimits

0xfebb,	// (0x0001037f) tmo_note_info_pane_t_ParamLimits

0xf036,	// (0x0000f4fa) settings_container_pane_ParamLimits

0xa053,	// (0x0000a517) indicator_popup_pane_cp5

0xa053,	// (0x0000a517) indicator_popup_pane_cp6

0xf27b,	// (0x0000f73f) list_set_graphic_pane_copy1_ParamLimits

0xf30c,	// (0x0000f7d0) bg_popup_window_pane_cp23

0xa113,	// (0x0000a5d7) popup_tmo_big_image_note_window_g1

0xa11f,	// (0x0000a5e3) popup_tmo_big_image_note_window_t1

0xa12f,	// (0x0000a5f3) popup_tmo_big_image_note_window_t2

0xa13f,	// (0x0000a603) popup_tmo_big_image_note_window_t3

0x0002,

0xfed4,	// (0x00010398) popup_tmo_big_image_note_window_t

0xf295,	// (0x0000f759) cell_ai5_widget_lrg_icon_pane_g1

0xf29d,	// (0x0000f761) cell_ai5_widget_lrg_icon_pane_t1

0xf2ab,	// (0x0000f76f) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ab,	// (0x0000f76f) cell_ai5_widget_list_row_pane

0xf2c4,	// (0x0000f788) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c4,	// (0x0000f788) cell_ai5_widget_list_row_pane_g1

0xf2d1,	// (0x0000f795) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2d1,	// (0x0000f795) cell_ai5_widget_list_row_pane_t1

0xf2e9,	// (0x0000f7ad) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e9,	// (0x0000f7ad) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedb,	// (0x0001039f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedb,	// (0x0001039f) cell_ai5_widget_list_row_pane_t

0xf30c,	// (0x0000f7d0) main_fep_vtchi_ss_pane

0xa1b5,	// (0x0000a679) popup_fep_char_pre_window

0xa1bd,	// (0x0000a681) popup_fep_ituss_window

0xa1d7,	// (0x0000a69b) popup_fep_vkbss_window

0xa1f7,	// (0x0000a6bb) grid_vkbss_keypad_pane_ParamLimits

0xa1f7,	// (0x0000a6bb) grid_vkbss_keypad_pane

0xa207,	// (0x0000a6cb) ituss_keypad_pane

0xa21d,	// (0x0000a6e1) aid_vkbss_key_offset_ParamLimits

0xa21d,	// (0x0000a6e1) aid_vkbss_key_offset

0xa229,	// (0x0000a6ed) cell_vkbss_key_pane_ParamLimits

0xa229,	// (0x0000a6ed) cell_vkbss_key_pane

0xa23f,	// (0x0000a703) bg_cell_vkbss_key_g1_ParamLimits

0xa23f,	// (0x0000a703) bg_cell_vkbss_key_g1

0xa24b,	// (0x0000a70f) cell_vkbss_key_3p_pane_ParamLimits

0xa24b,	// (0x0000a70f) cell_vkbss_key_3p_pane

0xa265,	// (0x0000a729) cell_vkbss_key_g1_ParamLimits

0xa265,	// (0x0000a729) cell_vkbss_key_g1

0xa27f,	// (0x0000a743) cell_vkbss_key_t1_ParamLimits

0xa27f,	// (0x0000a743) cell_vkbss_key_t1

0xa2aa,	// (0x0000a76e) cell_ituss_key_pane_ParamLimits

0xa2aa,	// (0x0000a76e) cell_ituss_key_pane

0xa2ba,	// (0x0000a77e) bg_cell_ituss_key_g1_ParamLimits

0xa2ba,	// (0x0000a77e) bg_cell_ituss_key_g1

0xa2c6,	// (0x0000a78a) cell_ituss_key_pane_g1_ParamLimits

0xa2c6,	// (0x0000a78a) cell_ituss_key_pane_g1

0xa2d2,	// (0x0000a796) cell_ituss_key_pane_g2_ParamLimits

0xa2d2,	// (0x0000a796) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x000103a4) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x000103a4) cell_ituss_key_pane_g

0xa2eb,	// (0x0000a7af) cell_ituss_key_t1_ParamLimits

0xa2eb,	// (0x0000a7af) cell_ituss_key_t1

0xa319,	// (0x0000a7dd) cell_ituss_key_t2_ParamLimits

0xa319,	// (0x0000a7dd) cell_ituss_key_t2

0xa34a,	// (0x0000a80e) cell_ituss_key_t3_ParamLimits

0xa34a,	// (0x0000a80e) cell_ituss_key_t3

0xa37b,	// (0x0000a83f) cell_ituss_key_t4_ParamLimits

0xa37b,	// (0x0000a83f) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x000103a9) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x000103a9) cell_ituss_key_t

0xa3ac,	// (0x0000a870) cell_vkbss_key_3p_pane_g1

0xa3b4,	// (0x0000a878) cell_vkbss_key_3p_pane_g2

0xa3bc,	// (0x0000a880) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x000103b2) cell_vkbss_key_3p_pane_g

0xf30c,	// (0x0000f7d0) bg_popup_fep_char_preview_window_cp02

0xa3c4,	// (0x0000a888) popup_fep_char_pre_window_t1

0xec73,	// (0x0000f137) main_ai5_sk_pane

0x9cdb,	// (0x0000a19f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9ce7,	// (0x0000a1ab) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9cfb,	// (0x0000a1bf) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9d0a,	// (0x0000a1ce) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec6,	// (0x0001038a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9d1d,	// (0x0000a1e1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0f17,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2fb,	// (0x0000f7bf) main_ai5_sk_pane_g1

0x38e4,	// (0x00003da8) popup_query_code_window_g1

0xa1cc,	// (0x0000a690) popup_fep_vkb_icf_pane

0xa1e2,	// (0x0000a6a6) popup_fep_vtchi_icf_pane

0x0f17,	// (0x000013db) bg_icf_pane

0xa3eb,	// (0x0000a8af) list_vkb_icf_pane

0x0f17,	// (0x000013db) bg_icf_pane_cp01

0xa403,	// (0x0000a8c7) vtchi_icf_list_pane

0xa413,	// (0x0000a8d7) list_vkb_icf_pane_t1_ParamLimits

0xa413,	// (0x0000a8d7) list_vkb_icf_pane_t1

0xa42a,	// (0x0000a8ee) vtchi_icf_list_pane_t1_ParamLimits

0xa42a,	// (0x0000a8ee) vtchi_icf_list_pane_t1

0xa1bd,	// (0x0000a681) popup_fep_ituss_window_ParamLimits

0xa1e2,	// (0x0000a6a6) popup_fep_vtchi_icf_pane_ParamLimits

0xa207,	// (0x0000a6cb) ituss_keypad_pane_ParamLimits

0xa213,	// (0x0000a6d7) ituss_sks_pane

0x0f17,	// (0x000013db) bg_icf_pane_ParamLimits

0xa3dc,	// (0x0000a8a0) icf_edit_indi_pane_ParamLimits

0xa3dc,	// (0x0000a8a0) icf_edit_indi_pane

0xa3eb,	// (0x0000a8af) list_vkb_icf_pane_ParamLimits

0x0f17,	// (0x000013db) bg_icf_pane_cp01_ParamLimits

0xa3f7,	// (0x0000a8bb) icf_edit_indi_pane_cp01_ParamLimits

0xa3f7,	// (0x0000a8bb) icf_edit_indi_pane_cp01

0xa40b,	// (0x0000a8cf) vtchi_query_pane

0x64d1,	// (0x00006995) icf_edit_indi_pane_g1_ParamLimits

0x64d1,	// (0x00006995) icf_edit_indi_pane_g1

0xa443,	// (0x0000a907) icf_edit_indi_pane_g2_ParamLimits

0xa443,	// (0x0000a907) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x000103b9) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x000103b9) icf_edit_indi_pane_g

0xa44f,	// (0x0000a913) icf_edit_indi_pane_t1

0xa45d,	// (0x0000a921) bg_input_focus_pane_cp042

0x08ab,	// (0x00000d6f) vtchi_button_pane

0xa466,	// (0x0000a92a) vtchi_query_pane_t1

0xa474,	// (0x0000a938) vtchi_query_pane_t2

0xa482,	// (0x0000a946) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x000103be) vtchi_query_pane_t

0xf30c,	// (0x0000f7d0) bg_button_pane_cp13

0xa490,	// (0x0000a954) vtchi_button_pane_g1

0xa498,	// (0x0000a95c) ituss_sks_pane_g1

0xa4a3,	// (0x0000a967) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x000103c5) ituss_sks_pane_g

0xa4ab,	// (0x0000a96f) ituss_sks_pane_t1

0xa4b9,	// (0x0000a97d) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x000103ca) ituss_sks_pane_t

0x5aa6,	// (0x00005f6a) indicator_nsta_pane_cp_g1

0x5aaf,	// (0x00005f73) indicator_nsta_pane_cp_g2

0x5ab7,	// (0x00005f7b) indicator_nsta_pane_cp_g3

0x5abf,	// (0x00005f83) indicator_nsta_pane_cp_g4

0x5ac7,	// (0x00005f8b) indicator_nsta_pane_cp_g5

0x5acf,	// (0x00005f93) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0000ff74) indicator_nsta_pane_cp_g

0xea2c,	// (0x0000eef0) cell_graphic2_pane_t2_ParamLimits

0xea2c,	// (0x0000eef0) cell_graphic2_pane_t2

0x0001,

0xfdbd,	// (0x00010281) cell_graphic2_pane_t_ParamLimits

0xfdbd,	// (0x00010281) cell_graphic2_pane_t

0xea64,	// (0x0000ef28) cell_graphic2_control_pane_t1

0xbb7e,	// (0x0000c042) signal_pane_g3_ParamLimits

0xbb7e,	// (0x0000c042) signal_pane_g3

0xbb92,	// (0x0000c056) signal_pane_g4_ParamLimits

0xbb92,	// (0x0000c056) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

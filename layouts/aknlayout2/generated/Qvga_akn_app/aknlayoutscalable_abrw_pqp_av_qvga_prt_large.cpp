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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00033e91 };

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
0x4ce7,	// (0x00038b78) Screen

0x4cf1,	// (0x00038b82) application_window_ParamLimits

0x4cf1,	// (0x00038b82) application_window

0xe889,	// (0x0004271a) screen_g1

0x4cff,	// (0x00038b90) area_bottom_pane_ParamLimits

0x4cff,	// (0x00038b90) area_bottom_pane

0xe893,	// (0x00042724) area_top_pane_ParamLimits

0xe893,	// (0x00042724) area_top_pane

0xb29e,	// (0x0003f12f) main_pane_ParamLimits

0xb29e,	// (0x0003f12f) main_pane

0xe90b,	// (0x0004279c) misc_graphics

0x540e,	// (0x0003929f) battery_pane_ParamLimits

0x540e,	// (0x0003929f) battery_pane

0x2c3c,	// (0x00036acd) bg_status_flat_pane_g8

0x2c44,	// (0x00036ad5) bg_status_flat_pane_g9

0x2377,	// (0x00036208) context_pane_ParamLimits

0x2377,	// (0x00036208) context_pane

0x5546,	// (0x000393d7) navi_pane_ParamLimits

0x5546,	// (0x000393d7) navi_pane

0x55b2,	// (0x00039443) signal_pane_ParamLimits

0x55b2,	// (0x00039443) signal_pane

0x0008,

0xf852,	// (0x000436e3) bg_status_flat_pane_g

0x5613,	// (0x000394a4) status_pane_g1_ParamLimits

0x5613,	// (0x000394a4) status_pane_g1

0x561f,	// (0x000394b0) status_pane_g2_ParamLimits

0x561f,	// (0x000394b0) status_pane_g2

0x23dd,	// (0x0003626e) status_pane_g3_ParamLimits

0x23dd,	// (0x0003626e) status_pane_g3

0x0004,

0xf780,	// (0x00043611) status_pane_g_ParamLimits

0xf780,	// (0x00043611) status_pane_g

0x562b,	// (0x000394bc) title_pane_ParamLimits

0x562b,	// (0x000394bc) title_pane

0x5668,	// (0x000394f9) uni_indicator_pane_ParamLimits

0x5668,	// (0x000394f9) uni_indicator_pane

0x22ce,	// (0x0003615f) bg_list_pane_ParamLimits

0x22ce,	// (0x0003615f) bg_list_pane

0x01c0,	// (0x00034051) find_pane

0x53b1,	// (0x00039242) listscroll_app_pane_ParamLimits

0x53b1,	// (0x00039242) listscroll_app_pane

0x22ee,	// (0x0003617f) listscroll_form_pane

0x01c8,	// (0x00034059) listscroll_gen_pane_ParamLimits

0x01c8,	// (0x00034059) listscroll_gen_pane

0xba95,	// (0x0003f926) listscroll_set_pane

0x5055,	// (0x00038ee6) main_idle_act_pane

0x2139,	// (0x00035fca) main_idle_trad_pane

0x2139,	// (0x00035fca) main_list_empty_pane

0x01e5,	// (0x00034076) main_midp_pane

0x2308,	// (0x00036199) main_pane_g1_ParamLimits

0x2308,	// (0x00036199) main_pane_g1

0xbaab,	// (0x0003f93c) popup_ai_message_window_ParamLimits

0xbaab,	// (0x0003f93c) popup_ai_message_window

0xbb41,	// (0x0003f9d2) popup_fep_china_uni_window_ParamLimits

0xbb41,	// (0x0003f9d2) popup_fep_china_uni_window

0xbb7f,	// (0x0003fa10) popup_fep_japan_candidate_window_ParamLimits

0xbb7f,	// (0x0003fa10) popup_fep_japan_candidate_window

0xbb9d,	// (0x0003fa2e) popup_fep_japan_predictive_window_ParamLimits

0xbb9d,	// (0x0003fa2e) popup_fep_japan_predictive_window

0xbbc9,	// (0x0003fa5a) popup_find_window

0xbbd6,	// (0x0003fa67) popup_grid_graphic_window_ParamLimits

0xbbd6,	// (0x0003fa67) popup_grid_graphic_window

0xbbf4,	// (0x0003fa85) popup_large_graphic_colour_window

0xbc13,	// (0x0003faa4) popup_menu_window_ParamLimits

0xbc13,	// (0x0003faa4) popup_menu_window

0xbd4b,	// (0x0003fbdc) popup_note_image_window

0xbd39,	// (0x0003fbca) popup_note_wait_window_ParamLimits

0xbd39,	// (0x0003fbca) popup_note_wait_window

0xbd39,	// (0x0003fbca) popup_note_window_ParamLimits

0xbd39,	// (0x0003fbca) popup_note_window

0xbd9f,	// (0x0003fc30) popup_query_code_window_ParamLimits

0xbd9f,	// (0x0003fc30) popup_query_code_window

0xbdb1,	// (0x0003fc42) popup_query_data_code_window_ParamLimits

0xbdb1,	// (0x0003fc42) popup_query_data_code_window

0xbdc6,	// (0x0003fc57) popup_query_data_window_ParamLimits

0xbdc6,	// (0x0003fc57) popup_query_data_window

0xbddc,	// (0x0003fc6d) popup_query_sat_info_window_ParamLimits

0xbddc,	// (0x0003fc6d) popup_query_sat_info_window

0xbe0d,	// (0x0003fc9e) popup_snote_single_graphic_window_ParamLimits

0xbe0d,	// (0x0003fc9e) popup_snote_single_graphic_window

0xbe0d,	// (0x0003fc9e) popup_snote_single_text_window_ParamLimits

0xbe0d,	// (0x0003fc9e) popup_snote_single_text_window

0xbe20,	// (0x0003fcb1) popup_sub_window_general

0xbf24,	// (0x0003fdb5) popup_window_general_ParamLimits

0xbf24,	// (0x0003fdb5) popup_window_general

0x2316,	// (0x000361a7) power_save_pane

0xb931,	// (0x0003f7c2) control_pane_g1_ParamLimits

0xb931,	// (0x0003f7c2) control_pane_g1

0xb952,	// (0x0003f7e3) control_pane_g2_ParamLimits

0xb952,	// (0x0003f7e3) control_pane_g2

0x22c0,	// (0x00036151) control_pane_g3_ParamLimits

0x22c0,	// (0x00036151) control_pane_g3

0x0007,

0xf768,	// (0x000435f9) control_pane_g_ParamLimits

0xf768,	// (0x000435f9) control_pane_g

0xb994,	// (0x0003f825) control_pane_t1_ParamLimits

0xb994,	// (0x0003f825) control_pane_t1

0xb9e6,	// (0x0003f877) control_pane_t2_ParamLimits

0xb9e6,	// (0x0003f877) control_pane_t2

0x0002,

0xf779,	// (0x0004360a) control_pane_t_ParamLimits

0xf779,	// (0x0004360a) control_pane_t

0x2268,	// (0x000360f9) navi_navi_volume_pane_cp1

0x2270,	// (0x00036101) status_small_icon_pane

0x2278,	// (0x00036109) status_small_pane_g1_ParamLimits

0x2278,	// (0x00036109) status_small_pane_g1

0x5309,	// (0x0003919a) status_small_pane_g2_ParamLimits

0x5309,	// (0x0003919a) status_small_pane_g2

0x5315,	// (0x000391a6) status_small_pane_g3_ParamLimits

0x5315,	// (0x000391a6) status_small_pane_g3

0x5321,	// (0x000391b2) status_small_pane_g4_ParamLimits

0x5321,	// (0x000391b2) status_small_pane_g4

0x532d,	// (0x000391be) status_small_pane_g5_ParamLimits

0x532d,	// (0x000391be) status_small_pane_g5

0x22ac,	// (0x0003613d) status_small_pane_g6_ParamLimits

0x22ac,	// (0x0003613d) status_small_pane_g6

0x0007,

0xf757,	// (0x000435e8) status_small_pane_g_ParamLimits

0xf757,	// (0x000435e8) status_small_pane_g

0x535c,	// (0x000391ed) status_small_pane_t1

0x5376,	// (0x00039207) status_small_wait_pane_ParamLimits

0x5376,	// (0x00039207) status_small_wait_pane

0x5190,	// (0x00039021) aid_levels_signal_ParamLimits

0x5190,	// (0x00039021) aid_levels_signal

0x51a1,	// (0x00039032) signal_pane_g1_ParamLimits

0x51a1,	// (0x00039032) signal_pane_g1

0x51b7,	// (0x00039048) signal_pane_g2_ParamLimits

0x51b7,	// (0x00039048) signal_pane_g2

0x0003,

0xf6e8,	// (0x00043579) signal_pane_g_ParamLimits

0xf6e8,	// (0x00043579) signal_pane_g

0x1cde,	// (0x00035b6f) context_pane_g1

0x4d64,	// (0x00038bf5) title_pane_g1

0x4d8e,	// (0x00038c1f) title_pane_t1

0xe921,	// (0x000427b2) title_pane_t2

0xe947,	// (0x000427d8) title_pane_t3

0x0002,

0xf532,	// (0x000433c3) title_pane_t

0x567e,	// (0x0003950f) aid_levels_battery_ParamLimits

0x567e,	// (0x0003950f) aid_levels_battery

0x5691,	// (0x00039522) battery_pane_g1_ParamLimits

0x5691,	// (0x00039522) battery_pane_g1

0x56a6,	// (0x00039537) battery_pane_g2_ParamLimits

0x56a6,	// (0x00039537) battery_pane_g2

0x0001,

0xf78b,	// (0x0004361c) battery_pane_g_ParamLimits

0xf78b,	// (0x0004361c) battery_pane_g

0x5802,	// (0x00039693) uni_indicator_pane_g1

0x5816,	// (0x000396a7) uni_indicator_pane_g2

0x582b,	// (0x000396bc) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0004378b) uni_indicator_pane_g

0xf0d2,	// (0x00042f63) navi_icon_pane_ParamLimits

0xf0d2,	// (0x00042f63) navi_icon_pane

0xe90b,	// (0x0004279c) navi_midp_pane

0xe90b,	// (0x0004279c) navi_navi_pane

0xf0d2,	// (0x00042f63) navi_text_pane_ParamLimits

0xf0d2,	// (0x00042f63) navi_text_pane

0xe889,	// (0x0004271a) status_small_wait_pane_g1

0xec5c,	// (0x00042aed) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x00043786) status_small_wait_pane_g

0x31a6,	// (0x00037037) navi_navi_icon_text_pane

0x31c0,	// (0x00037051) navi_navi_pane_g1_ParamLimits

0x31c0,	// (0x00037051) navi_navi_pane_g1

0x31ae,	// (0x0003703f) navi_navi_pane_g2_ParamLimits

0x31ae,	// (0x0003703f) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x00043754) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x00043754) navi_navi_pane_g

0x31d2,	// (0x00037063) navi_navi_tabs_pane

0x31a6,	// (0x00037037) navi_navi_text_pane

0x31a6,	// (0x00037037) navi_navi_volume_pane

0x3182,	// (0x00037013) navi_text_pane_t1

0x3176,	// (0x00037007) navi_icon_pane_g1

0x30ca,	// (0x00036f5b) navi_navi_text_pane_t1

0xc1ab,	// (0x0004003c) navi_navi_volume_pane_g1

0xc1b3,	// (0x00040044) volume_small_pane

0x574f,	// (0x000395e0) navi_navi_icon_text_pane_g1

0x5757,	// (0x000395e8) navi_navi_icon_text_pane_t1

0x2c84,	// (0x00036b15) navi_tabs_2_long_pane

0x2c84,	// (0x00036b15) navi_tabs_2_pane

0x2c84,	// (0x00036b15) navi_tabs_3_long_pane

0x2c84,	// (0x00036b15) navi_tabs_3_pane

0x2c84,	// (0x00036b15) navi_tabs_4_pane

0xc18b,	// (0x0004001c) tabs_2_active_pane_ParamLimits

0xc18b,	// (0x0004001c) tabs_2_active_pane

0xc19b,	// (0x0004002c) tabs_2_passive_pane_ParamLimits

0xc19b,	// (0x0004002c) tabs_2_passive_pane

0xc159,	// (0x0003ffea) tabs_3_active_pane_ParamLimits

0xc159,	// (0x0003ffea) tabs_3_active_pane

0xc169,	// (0x0003fffa) tabs_3_passive_pane_ParamLimits

0xc169,	// (0x0003fffa) tabs_3_passive_pane

0xc17a,	// (0x0004000b) tabs_3_passive_pane_cp_ParamLimits

0xc17a,	// (0x0004000b) tabs_3_passive_pane_cp

0xc115,	// (0x0003ffa6) tabs_4_active_pane_ParamLimits

0xc115,	// (0x0003ffa6) tabs_4_active_pane

0xc126,	// (0x0003ffb7) tabs_4_passive_pane_ParamLimits

0xc126,	// (0x0003ffb7) tabs_4_passive_pane

0xc137,	// (0x0003ffc8) tabs_4_passive_pane_cp_ParamLimits

0xc137,	// (0x0003ffc8) tabs_4_passive_pane_cp

0xc148,	// (0x0003ffd9) tabs_4_passive_pane_cp2_ParamLimits

0xc148,	// (0x0003ffd9) tabs_4_passive_pane_cp2

0xc0f5,	// (0x0003ff86) tabs_2_long_active_pane_ParamLimits

0xc0f5,	// (0x0003ff86) tabs_2_long_active_pane

0xc105,	// (0x0003ff96) tabs_2_long_passive_pane_ParamLimits

0xc105,	// (0x0003ff96) tabs_2_long_passive_pane

0xc0c0,	// (0x0003ff51) tabs_3_long_active_pane_ParamLimits

0xc0c0,	// (0x0003ff51) tabs_3_long_active_pane

0xc0d1,	// (0x0003ff62) tabs_3_long_passive_pane_ParamLimits

0xc0d1,	// (0x0003ff62) tabs_3_long_passive_pane

0xc0e4,	// (0x0003ff75) tabs_3_long_passive_pane_cp_ParamLimits

0xc0e4,	// (0x0003ff75) tabs_3_long_passive_pane_cp

0xc066,	// (0x0003fef7) volume_small_pane_g1

0xc06f,	// (0x0003ff00) volume_small_pane_g2

0xc078,	// (0x0003ff09) volume_small_pane_g3

0xc081,	// (0x0003ff12) volume_small_pane_g4

0xc08a,	// (0x0003ff1b) volume_small_pane_g5

0xc093,	// (0x0003ff24) volume_small_pane_g6

0xc09c,	// (0x0003ff2d) volume_small_pane_g7

0xc0a5,	// (0x0003ff36) volume_small_pane_g8

0xc0ae,	// (0x0003ff3f) volume_small_pane_g9

0xc0b7,	// (0x0003ff48) volume_small_pane_g10

0x0009,

0xf88f,	// (0x00043720) volume_small_pane_g

0xe959,	// (0x000427ea) bg_active_tab_pane_cp2_ParamLimits

0xe959,	// (0x000427ea) bg_active_tab_pane_cp2

0xe967,	// (0x000427f8) tabs_3_active_pane_g1

0x4df6,	// (0x00038c87) tabs_3_active_pane_t1

0xe959,	// (0x000427ea) bg_passive_tab_pane_cp2_ParamLimits

0xe959,	// (0x000427ea) bg_passive_tab_pane_cp2

0xe967,	// (0x000427f8) tabs_3_passive_pane_g1

0x4df6,	// (0x00038c87) tabs_3_passive_pane_t1

0xe959,	// (0x000427ea) bg_active_tab_pane_cp3_ParamLimits

0xe959,	// (0x000427ea) bg_active_tab_pane_cp3

0x4e08,	// (0x00038c99) tabs_4_active_pane_g1

0x4e10,	// (0x00038ca1) tabs_4_active_pane_t1

0xe959,	// (0x000427ea) bg_passive_tab_pane_cp3_ParamLimits

0xe959,	// (0x000427ea) bg_passive_tab_pane_cp3

0x4e08,	// (0x00038c99) tabs_4_1_passive_pane_g1

0x4e10,	// (0x00038ca1) tabs_4_1_passive_pane_t1

0x01e5,	// (0x00034076) list_highlight_pane_cp2

0x5874,	// (0x00039705) list_set_pane_ParamLimits

0x5874,	// (0x00039705) list_set_pane

0x5902,	// (0x00039793) main_pane_set_t1_ParamLimits

0x5902,	// (0x00039793) main_pane_set_t1

0x5922,	// (0x000397b3) main_pane_set_t2_ParamLimits

0x5922,	// (0x000397b3) main_pane_set_t2

0x5934,	// (0x000397c5) main_pane_set_t3_ParamLimits

0x5934,	// (0x000397c5) main_pane_set_t3

0x5946,	// (0x000397d7) main_pane_set_t4_ParamLimits

0x5946,	// (0x000397d7) main_pane_set_t4

0x0003,

0xf95f,	// (0x000437f0) main_pane_set_t_ParamLimits

0xf95f,	// (0x000437f0) main_pane_set_t

0x5958,	// (0x000397e9) setting_code_pane

0x5960,	// (0x000397f1) setting_slider_graphic_pane

0x5960,	// (0x000397f1) setting_slider_pane

0x5960,	// (0x000397f1) setting_text_pane

0x5960,	// (0x000397f1) setting_volume_pane

0xb49d,	// (0x0003f32e) volume_set_pane

0xe959,	// (0x000427ea) bg_set_opt_pane_cp

0xb4a5,	// (0x0003f336) setting_slider_pane_t1

0xb4bb,	// (0x0003f34c) setting_slider_pane_t2

0xb4d4,	// (0x0003f365) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000433ca) setting_slider_pane_t

0xb4eb,	// (0x0003f37c) slider_set_pane

0xe90b,	// (0x0004279c) bg_set_opt_pane_cp2

0xe96f,	// (0x00042800) setting_slider_graphic_pane_g1

0xb501,	// (0x0003f392) setting_slider_graphic_pane_t1

0xb510,	// (0x0003f3a1) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000433d1) setting_slider_graphic_pane_t

0xb51f,	// (0x0003f3b0) slider_set_pane_cp

0xe90b,	// (0x0004279c) input_focus_pane_cp1

0x35f3,	// (0x00037484) list_set_text_pane

0xe889,	// (0x0004271a) setting_text_pane_g1

0xe90b,	// (0x0004279c) input_focus_pane_cp2

0xe889,	// (0x0004271a) setting_code_pane_g1

0xe978,	// (0x00042809) setting_code_pane_t1

0xda88,	// (0x00041919) set_text_pane_t1_ParamLimits

0xda88,	// (0x00041919) set_text_pane_t1

0xf020,	// (0x00042eb1) set_opt_bg_pane_g1

0xf028,	// (0x00042eb9) set_opt_bg_pane_g2

0x5840,	// (0x000396d1) set_opt_bg_pane_g3

0xf038,	// (0x00042ec9) set_opt_bg_pane_g4

0xf040,	// (0x00042ed1) set_opt_bg_pane_g5

0xf048,	// (0x00042ed9) set_opt_bg_pane_g6

0x5848,	// (0x000396d9) set_opt_bg_pane_g7

0x5850,	// (0x000396e1) set_opt_bg_pane_g8

0x5858,	// (0x000396e9) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x000437dd) set_opt_bg_pane_g

0x35e6,	// (0x00037477) slider_set_pane_g1

0xc220,	// (0x000400b1) slider_set_pane_g2

0x0006,

0xf93d,	// (0x000437ce) slider_set_pane_g

0xc1bc,	// (0x0004004d) volume_set_pane_g1

0xc1c4,	// (0x00040055) volume_set_pane_g2

0xc1cc,	// (0x0004005d) volume_set_pane_g3

0xc1d4,	// (0x00040065) volume_set_pane_g4

0xc1dc,	// (0x0004006d) volume_set_pane_g5

0xc1e4,	// (0x00040075) volume_set_pane_g6

0xc1ec,	// (0x0004007d) volume_set_pane_g7

0xc1f4,	// (0x00040085) volume_set_pane_g8

0xc1fc,	// (0x0004008d) volume_set_pane_g9

0xc204,	// (0x00040095) volume_set_pane_g10

0x0009,

0xf915,	// (0x000437a6) volume_set_pane_g

0x4e22,	// (0x00038cb3) indicator_pane_ParamLimits

0x4e22,	// (0x00038cb3) indicator_pane

0x4e2e,	// (0x00038cbf) main_idle_pane_g2_ParamLimits

0x4e2e,	// (0x00038cbf) main_idle_pane_g2

0x4e52,	// (0x00038ce3) main_pane_idle_g1_ParamLimits

0x4e52,	// (0x00038ce3) main_pane_idle_g1

0xe986,	// (0x00042817) popup_clock_digital_analogue_window_ParamLimits

0xe986,	// (0x00042817) popup_clock_digital_analogue_window

0x4e5f,	// (0x00038cf0) soft_indicator_pane_ParamLimits

0x4e5f,	// (0x00038cf0) soft_indicator_pane

0x4e6b,	// (0x00038cfc) wallpaper_pane_ParamLimits

0x4e6b,	// (0x00038cfc) wallpaper_pane

0xe889,	// (0x0004271a) wallpaper_pane_g1

0x4e77,	// (0x00038d08) indicator_pane_g1_ParamLimits

0x4e77,	// (0x00038d08) indicator_pane_g1

0x3716,	// (0x000375a7) navi_navi_icon_text_pane_srt_g1

0xe9b4,	// (0x00042845) soft_indicator_pane_t1

0xe9ce,	// (0x0004285f) aid_ps_area_pane

0x4e83,	// (0x00038d14) aid_ps_clock_pane

0xe9df,	// (0x00042870) aid_ps_indicator_pane

0xe9eb,	// (0x0004287c) indicator_ps_pane_ParamLimits

0xe9eb,	// (0x0004287c) indicator_ps_pane

0xe9fa,	// (0x0004288b) power_save_pane_g1_ParamLimits

0xe9fa,	// (0x0004288b) power_save_pane_g1

0xea06,	// (0x00042897) power_save_pane_g2_ParamLimits

0xea06,	// (0x00042897) power_save_pane_g2

0xb210,	// (0x0003f0a1) aid_navinavi_width_pane

0xe9ce,	// (0x0004285f) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000433d6) power_save_pane_g_ParamLimits

0xf545,	// (0x000433d6) power_save_pane_g

0xea14,	// (0x000428a5) power_save_pane_t1_ParamLimits

0xea14,	// (0x000428a5) power_save_pane_t1

0x4e83,	// (0x00038d14) aid_ps_clock_pane_ParamLimits

0xe9df,	// (0x00042870) aid_ps_indicator_pane_ParamLimits

0xea26,	// (0x000428b7) power_save_pane_t4_ParamLimits

0xea26,	// (0x000428b7) power_save_pane_t4

0x0001,

0xf54a,	// (0x000433db) power_save_pane_t_ParamLimits

0xf54a,	// (0x000433db) power_save_pane_t

0xea50,	// (0x000428e1) power_save_t3_ParamLimits

0xea50,	// (0x000428e1) power_save_t3

0xea3b,	// (0x000428cc) power_save_t2_ParamLimits

0xea3b,	// (0x000428cc) power_save_t2

0xea65,	// (0x000428f6) indicator_ps_pane_g1

0x4e8f,	// (0x00038d20) ai_gene_pane_ParamLimits

0x4e8f,	// (0x00038d20) ai_gene_pane

0x4e9b,	// (0x00038d2c) ai_links_pane_ParamLimits

0x4e9b,	// (0x00038d2c) ai_links_pane

0x4ea7,	// (0x00038d38) indicator_pane_cp1_ParamLimits

0x4ea7,	// (0x00038d38) indicator_pane_cp1

0x4eb3,	// (0x00038d44) main_pane_idle_g1_cp_ParamLimits

0x4eb3,	// (0x00038d44) main_pane_idle_g1_cp

0xea6e,	// (0x000428ff) popup_ai_links_title_window

0x4ebf,	// (0x00038d50) soft_indicator_pane_cp1_ParamLimits

0x4ebf,	// (0x00038d50) soft_indicator_pane_cp1

0x343c,	// (0x000372cd) ai_links_pane_g1

0x3445,	// (0x000372d6) grid_ai_links_pane

0x57f9,	// (0x0003968a) ai_gene_pane_1

0x342a,	// (0x000372bb) ai_gene_pane_2

0x3433,	// (0x000372c4) list_highlight_pane_cp4

0x57dd,	// (0x0003966e) cell_ai_link_pane_ParamLimits

0x57dd,	// (0x0003966e) cell_ai_link_pane

0x3422,	// (0x000372b3) cell_ai_link_pane_g1

0xec5c,	// (0x00042aed) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x00043781) cell_ai_link_pane_g

0xe90b,	// (0x0004279c) grid_highlight_cp2

0xe90b,	// (0x0004279c) bg_popup_sub_pane_cp1

0xea85,	// (0x00042916) popup_ai_links_title_window_t1

0x3374,	// (0x00037205) ai_gene_pane_1_g1_ParamLimits

0x3374,	// (0x00037205) ai_gene_pane_1_g1

0x3380,	// (0x00037211) ai_gene_pane_1_g2_ParamLimits

0x3380,	// (0x00037211) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x00043777) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x00043777) ai_gene_pane_1_g

0x338d,	// (0x0003721e) ai_gene_pane_1_t1_ParamLimits

0x338d,	// (0x0003721e) ai_gene_pane_1_t1

0x33c1,	// (0x00037252) grid_ai_soft_ind_pane

0x335f,	// (0x000371f0) ai_gene_pane_2_t1_ParamLimits

0x335f,	// (0x000371f0) ai_gene_pane_2_t1

0x4ecb,	// (0x00038d5c) main_pane_empty_t1_ParamLimits

0x4ecb,	// (0x00038d5c) main_pane_empty_t1

0x4ee8,	// (0x00038d79) main_pane_empty_t2_ParamLimits

0x4ee8,	// (0x00038d79) main_pane_empty_t2

0x4f00,	// (0x00038d91) main_pane_empty_t3_ParamLimits

0x4f00,	// (0x00038d91) main_pane_empty_t3

0x4f13,	// (0x00038da4) main_pane_empty_t4_ParamLimits

0x4f13,	// (0x00038da4) main_pane_empty_t4

0x4f26,	// (0x00038db7) main_pane_empty_t5_ParamLimits

0x4f26,	// (0x00038db7) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000433e0) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000433e0) main_pane_empty_t

0xf0d2,	// (0x00042f63) bg_popup_window_pane_ParamLimits

0xf0d2,	// (0x00042f63) bg_popup_window_pane

0x30d9,	// (0x00036f6a) find_popup_pane_cp2_ParamLimits

0x30d9,	// (0x00036f6a) find_popup_pane_cp2

0x30e5,	// (0x00036f76) heading_pane_ParamLimits

0x30e5,	// (0x00036f76) heading_pane

0xe90b,	// (0x0004279c) bg_popup_sub_pane

0x5771,	// (0x00039602) bg_popup_window_pane_g1_ParamLimits

0x5771,	// (0x00039602) bg_popup_window_pane_g1

0x577d,	// (0x0003960e) bg_popup_window_pane_g2_ParamLimits

0x577d,	// (0x0003960e) bg_popup_window_pane_g2

0x5789,	// (0x0003961a) bg_popup_window_pane_g3_ParamLimits

0x5789,	// (0x0003961a) bg_popup_window_pane_g3

0x5795,	// (0x00039626) bg_popup_window_pane_g4_ParamLimits

0x5795,	// (0x00039626) bg_popup_window_pane_g4

0x57a1,	// (0x00039632) bg_popup_window_pane_g5_ParamLimits

0x57a1,	// (0x00039632) bg_popup_window_pane_g5

0x57ad,	// (0x0003963e) bg_popup_window_pane_g6_ParamLimits

0x57ad,	// (0x0003963e) bg_popup_window_pane_g6

0x57b9,	// (0x0003964a) bg_popup_window_pane_g7_ParamLimits

0x57b9,	// (0x0003964a) bg_popup_window_pane_g7

0x57c5,	// (0x00039656) bg_popup_window_pane_g8_ParamLimits

0x57c5,	// (0x00039656) bg_popup_window_pane_g8

0x57d1,	// (0x00039662) bg_popup_window_pane_g9_ParamLimits

0x57d1,	// (0x00039662) bg_popup_window_pane_g9

0x30be,	// (0x00036f4f) bg_popup_window_pane_g10_ParamLimits

0x30be,	// (0x00036f4f) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0004373f) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0004373f) bg_popup_window_pane_g

0x3075,	// (0x00036f06) bg_popup_heading_pane_ParamLimits

0x3075,	// (0x00036f06) bg_popup_heading_pane

0xc2a8,	// (0x00040139) tabs_4_passive_pane_cp_srt_ParamLimits

0xc2a8,	// (0x00040139) tabs_4_passive_pane_cp_srt

0xc2ba,	// (0x0004014b) tabs_4_passive_pane_srt_ParamLimits

0x3089,	// (0x00036f1a) heading_pane_g2

0xc2ba,	// (0x0004014b) tabs_4_passive_pane_srt

0x01e5,	// (0x00034076) bg_passive_tab_pane_cp3_srt_ParamLimits

0x01e5,	// (0x00034076) bg_passive_tab_pane_cp3_srt

0x3091,	// (0x00036f22) heading_pane_t1_ParamLimits

0x3091,	// (0x00036f22) heading_pane_t1

0x30a8,	// (0x00036f39) heading_pane_t2_ParamLimits

0x30a8,	// (0x00036f39) heading_pane_t2

0x0001,

0xf8a9,	// (0x0004373a) heading_pane_t_ParamLimits

0xf8a9,	// (0x0004373a) heading_pane_t

0x2c04,	// (0x00036a95) bg_popup_heading_pane_g1

0x2c95,	// (0x00036b26) bg_popup_heading_pane_g2

0x2c9d,	// (0x00036b2e) bg_popup_heading_pane_g3

0x2ca5,	// (0x00036b36) bg_popup_heading_pane_g4

0x2cad,	// (0x00036b3e) bg_popup_heading_pane_g5

0x2cb5,	// (0x00036b46) bg_popup_heading_pane_g6

0x2cbd,	// (0x00036b4e) bg_popup_heading_pane_g7

0x2cc5,	// (0x00036b56) bg_popup_heading_pane_g8

0x2ccd,	// (0x00036b5e) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x000436f6) bg_popup_heading_pane_g

0x24c5,	// (0x00036356) bg_popup_sub_pane_g1

0x24cd,	// (0x0003635e) bg_popup_sub_pane_g2

0x24d5,	// (0x00036366) bg_popup_sub_pane_g3

0x24dd,	// (0x0003636e) bg_popup_sub_pane_g4

0x24e5,	// (0x00036376) bg_popup_sub_pane_g5

0x24ed,	// (0x0003637e) bg_popup_sub_pane_g6

0x24f5,	// (0x00036386) bg_popup_sub_pane_g7

0x24fd,	// (0x0003638e) bg_popup_sub_pane_g8

0x2505,	// (0x00036396) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x000436d0) bg_popup_sub_pane_g

0xea94,	// (0x00042925) bg_popup_window_pane_cp5_ParamLimits

0xea94,	// (0x00042925) bg_popup_window_pane_cp5

0xeab0,	// (0x00042941) popup_note_window_g1_ParamLimits

0xeab0,	// (0x00042941) popup_note_window_g1

0xeabc,	// (0x0004294d) popup_note_window_t1_ParamLimits

0xeabc,	// (0x0004294d) popup_note_window_t1

0xead2,	// (0x00042963) popup_note_window_t2_ParamLimits

0xead2,	// (0x00042963) popup_note_window_t2

0xeae8,	// (0x00042979) popup_note_window_t3_ParamLimits

0xeae8,	// (0x00042979) popup_note_window_t3

0xeafe,	// (0x0004298f) popup_note_window_t4_ParamLimits

0xeafe,	// (0x0004298f) popup_note_window_t4

0xeb26,	// (0x000429b7) popup_note_window_t5_ParamLimits

0xeb26,	// (0x000429b7) popup_note_window_t5

0x0004,

0xf55a,	// (0x000433eb) popup_note_window_t_ParamLimits

0xf55a,	// (0x000433eb) popup_note_window_t

0xeb70,	// (0x00042a01) bg_popup_window_pane_cp6_ParamLimits

0xeb70,	// (0x00042a01) bg_popup_window_pane_cp6

0x2b80,	// (0x00036a11) popup_note_image_window_g1_ParamLimits

0x2b80,	// (0x00036a11) popup_note_image_window_g1

0x2b8c,	// (0x00036a1d) popup_note_image_window_g2_ParamLimits

0x2b8c,	// (0x00036a1d) popup_note_image_window_g2

0x0001,

0xf833,	// (0x000436c4) popup_note_image_window_g_ParamLimits

0xf833,	// (0x000436c4) popup_note_image_window_g

0x2ba5,	// (0x00036a36) popup_note_image_window_t1_ParamLimits

0x2ba5,	// (0x00036a36) popup_note_image_window_t1

0x2bbe,	// (0x00036a4f) popup_note_image_window_t2_ParamLimits

0x2bbe,	// (0x00036a4f) popup_note_image_window_t2

0x2bd7,	// (0x00036a68) popup_note_image_window_t3_ParamLimits

0x2bd7,	// (0x00036a68) popup_note_image_window_t3

0x0002,

0xf838,	// (0x000436c9) popup_note_image_window_t_ParamLimits

0xf838,	// (0x000436c9) popup_note_image_window_t

0x2a6b,	// (0x000368fc) bg_popup_window_pane_cp7_ParamLimits

0x2a6b,	// (0x000368fc) bg_popup_window_pane_cp7

0x2a9b,	// (0x0003692c) popup_note_wait_window_g1_ParamLimits

0x2a9b,	// (0x0003692c) popup_note_wait_window_g1

0x2aa7,	// (0x00036938) popup_note_wait_window_g2_ParamLimits

0x2aa7,	// (0x00036938) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x000436b2) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x000436b2) popup_note_wait_window_g

0x2abf,	// (0x00036950) popup_note_wait_window_t1_ParamLimits

0x2abf,	// (0x00036950) popup_note_wait_window_t1

0x2ae6,	// (0x00036977) popup_note_wait_window_t2_ParamLimits

0x2ae6,	// (0x00036977) popup_note_wait_window_t2

0x2b03,	// (0x00036994) popup_note_wait_window_t3_ParamLimits

0x2b03,	// (0x00036994) popup_note_wait_window_t3

0x2b16,	// (0x000369a7) popup_note_wait_window_t4_ParamLimits

0x2b16,	// (0x000369a7) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x000436b9) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x000436b9) popup_note_wait_window_t

0x2b3b,	// (0x000369cc) wait_bar_pane_ParamLimits

0x2b3b,	// (0x000369cc) wait_bar_pane

0xe90b,	// (0x0004279c) wait_anim_pane

0xe90b,	// (0x0004279c) wait_border_pane

0xe889,	// (0x0004271a) wait_anim_pane_g1

0xe889,	// (0x0004271a) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00043574) wait_anim_pane_g

0x2a1b,	// (0x000368ac) wait_border_pane_g1

0x2a24,	// (0x000368b5) wait_border_pane_g2

0x2a2d,	// (0x000368be) wait_border_pane_g3

0x0002,

0xf81a,	// (0x000436ab) wait_border_pane_g

0x288b,	// (0x0003671c) bg_popup_window_pane_cp16_ParamLimits

0x288b,	// (0x0003671c) bg_popup_window_pane_cp16

0x298b,	// (0x0003681c) indicator_popup_pane_cp4_ParamLimits

0x298b,	// (0x0003681c) indicator_popup_pane_cp4

0x299f,	// (0x00036830) popup_query_data_window_t1_ParamLimits

0x299f,	// (0x00036830) popup_query_data_window_t1

0x29b1,	// (0x00036842) popup_query_data_window_t2_ParamLimits

0x29b1,	// (0x00036842) popup_query_data_window_t2

0x29ca,	// (0x0003685b) popup_query_data_window_t3_ParamLimits

0x29ca,	// (0x0003685b) popup_query_data_window_t3

0x0002,

0xf813,	// (0x000436a4) popup_query_data_window_t_ParamLimits

0xf813,	// (0x000436a4) popup_query_data_window_t

0x29e4,	// (0x00036875) query_popup_data_pane_ParamLimits

0x29e4,	// (0x00036875) query_popup_data_pane

0x29f8,	// (0x00036889) query_popup_data_pane_cp1_ParamLimits

0x29f8,	// (0x00036889) query_popup_data_pane_cp1

0x288b,	// (0x0003671c) bg_popup_window_pane_cp10_ParamLimits

0x288b,	// (0x0003671c) bg_popup_window_pane_cp10

0x28bd,	// (0x0003674e) indicator_popup_pane_ParamLimits

0x28bd,	// (0x0003674e) indicator_popup_pane

0x28df,	// (0x00036770) popup_query_code_window_t1_ParamLimits

0x28df,	// (0x00036770) popup_query_code_window_t1

0x28f9,	// (0x0003678a) popup_query_code_window_t2_ParamLimits

0x28f9,	// (0x0003678a) popup_query_code_window_t2

0x2942,	// (0x000367d3) popup_query_code_window_t3_ParamLimits

0x2942,	// (0x000367d3) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0004369d) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0004369d) popup_query_code_window_t

0x2971,	// (0x00036802) query_popup_pane_ParamLimits

0x2971,	// (0x00036802) query_popup_pane

0xeb70,	// (0x00042a01) bg_popup_window_pane_cp15_ParamLimits

0xeb70,	// (0x00042a01) bg_popup_window_pane_cp15

0xeb8e,	// (0x00042a1f) indicator_popup_pane_cp1_ParamLimits

0xeb8e,	// (0x00042a1f) indicator_popup_pane_cp1

0xeba1,	// (0x00042a32) indicator_popup_pane_cp2_ParamLimits

0xeba1,	// (0x00042a32) indicator_popup_pane_cp2

0xebb4,	// (0x00042a45) popup_query_data_code_window_g1_ParamLimits

0xebb4,	// (0x00042a45) popup_query_data_code_window_g1

0xebc7,	// (0x00042a58) popup_query_data_code_window_t1_ParamLimits

0xebc7,	// (0x00042a58) popup_query_data_code_window_t1

0xebd9,	// (0x00042a6a) popup_query_data_code_window_t2_ParamLimits

0xebd9,	// (0x00042a6a) popup_query_data_code_window_t2

0xebeb,	// (0x00042a7c) popup_query_data_code_window_t3_ParamLimits

0xebeb,	// (0x00042a7c) popup_query_data_code_window_t3

0xec01,	// (0x00042a92) popup_query_data_code_window_t4_ParamLimits

0xec01,	// (0x00042a92) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000433f6) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000433f6) popup_query_data_code_window_t

0xbf81,	// (0x0003fe12) list_single_midp_graphic_pane_g3

0xec19,	// (0x00042aaa) query_popup_data_pane_cp2_ParamLimits

0xec2c,	// (0x00042abd) query_popup_pane_cp2_ParamLimits

0xec2c,	// (0x00042abd) query_popup_pane_cp2

0xe90b,	// (0x0004279c) bg_popup_window_pane_cp11

0x286f,	// (0x00036700) heading_pane_cp5

0x2877,	// (0x00036708) listscroll_popup_info_pane

0xe90b,	// (0x0004279c) input_focus_pane_cp3

0xec3f,	// (0x00042ad0) query_popup_pane_t1

0xec4d,	// (0x00042ade) list_popup_info_pane_ParamLimits

0xec4d,	// (0x00042ade) list_popup_info_pane

0xec5c,	// (0x00042aed) listscroll_popup_info_pane_g1

0xec64,	// (0x00042af5) scroll_pane_cp7

0xec6c,	// (0x00042afd) popup_info_list_pane_t1_ParamLimits

0xec6c,	// (0x00042afd) popup_info_list_pane_t1

0xec86,	// (0x00042b17) popup_info_list_pane_t2_ParamLimits

0xec86,	// (0x00042b17) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000433ff) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000433ff) popup_info_list_pane_t

0xe90b,	// (0x0004279c) bg_popup_window_pane_cp12

0x3730,	// (0x000375c1) find_popup_pane

0xe959,	// (0x000427ea) bg_popup_window_pane_cp3

0xeca0,	// (0x00042b31) heading_pane_cp3

0xecaf,	// (0x00042b40) listscroll_popup_graphic_pane

0xe90b,	// (0x0004279c) bg_popup_window_pane_cp4

0x4f89,	// (0x00038e1a) heading_pane_cp4

0xecbe,	// (0x00042b4f) listscroll_popup_colour_pane

0xecc6,	// (0x00042b57) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xecc6,	// (0x00042b57) cell_large_graphic_colour_none_popup_pane

0x4f91,	// (0x00038e22) grid_large_graphic_colour_popup_pane_ParamLimits

0x4f91,	// (0x00038e22) grid_large_graphic_colour_popup_pane

0x4fad,	// (0x00038e3e) listscroll_popup_colour_pane_g1_ParamLimits

0x4fad,	// (0x00038e3e) listscroll_popup_colour_pane_g1

0x4fc4,	// (0x00038e55) listscroll_popup_colour_pane_g2_ParamLimits

0x4fc4,	// (0x00038e55) listscroll_popup_colour_pane_g2

0xecd6,	// (0x00042b67) listscroll_popup_colour_pane_g3_ParamLimits

0xecd6,	// (0x00042b67) listscroll_popup_colour_pane_g3

0x4fd8,	// (0x00038e69) listscroll_popup_colour_pane_g4_ParamLimits

0x4fd8,	// (0x00038e69) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00043404) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00043404) listscroll_popup_colour_pane_g

0xece6,	// (0x00042b77) scroll_pane_cp6_ParamLimits

0xece6,	// (0x00042b77) scroll_pane_cp6

0x4fe7,	// (0x00038e78) cell_large_graphic_colour_popup_pane_ParamLimits

0x4fe7,	// (0x00038e78) cell_large_graphic_colour_popup_pane

0xecf8,	// (0x00042b89) cell_large_graphic_colour_none_popup_pane_t1

0xe90b,	// (0x0004279c) grid_highlight_pane_cp5

0xed07,	// (0x00042b98) cell_large_graphic_colour_popup_pane_g1

0xed0f,	// (0x00042ba0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004340d) cell_large_graphic_colour_popup_pane_g

0xed17,	// (0x00042ba8) cell_large_graphic_colour_popup_pane_g2_copy1

0xed20,	// (0x00042bb1) grid_highlight_pane_cp4

0xed28,	// (0x00042bb9) bg_popup_window_pane_cp8_ParamLimits

0xed28,	// (0x00042bb9) bg_popup_window_pane_cp8

0xed43,	// (0x00042bd4) popup_snote_single_text_window_g1_ParamLimits

0xed43,	// (0x00042bd4) popup_snote_single_text_window_g1

0xed55,	// (0x00042be6) popup_snote_single_text_window_t1_ParamLimits

0xed55,	// (0x00042be6) popup_snote_single_text_window_t1

0xed68,	// (0x00042bf9) popup_snote_single_text_window_t2_ParamLimits

0xed68,	// (0x00042bf9) popup_snote_single_text_window_t2

0xed7b,	// (0x00042c0c) popup_snote_single_text_window_t3_ParamLimits

0xed7b,	// (0x00042c0c) popup_snote_single_text_window_t3

0xedb4,	// (0x00042c45) popup_snote_single_text_window_t4_ParamLimits

0xedb4,	// (0x00042c45) popup_snote_single_text_window_t4

0xede8,	// (0x00042c79) popup_snote_single_text_window_t5_ParamLimits

0xede8,	// (0x00042c79) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00043412) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00043412) popup_snote_single_text_window_t

0xee17,	// (0x00042ca8) bg_popup_window_pane_cp9_ParamLimits

0xee17,	// (0x00042ca8) bg_popup_window_pane_cp9

0xed43,	// (0x00042bd4) popup_snote_single_graphic_window_g1_ParamLimits

0xed43,	// (0x00042bd4) popup_snote_single_graphic_window_g1

0xee25,	// (0x00042cb6) popup_snote_single_graphic_window_g2_ParamLimits

0xee25,	// (0x00042cb6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004341d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004341d) popup_snote_single_graphic_window_g

0xee31,	// (0x00042cc2) popup_snote_single_graphic_window_t1_ParamLimits

0xee31,	// (0x00042cc2) popup_snote_single_graphic_window_t1

0xee44,	// (0x00042cd5) popup_snote_single_graphic_window_t2_ParamLimits

0xee44,	// (0x00042cd5) popup_snote_single_graphic_window_t2

0xed7b,	// (0x00042c0c) popup_snote_single_graphic_window_t3_ParamLimits

0xed7b,	// (0x00042c0c) popup_snote_single_graphic_window_t3

0xedb4,	// (0x00042c45) popup_snote_single_graphic_window_t4_ParamLimits

0xedb4,	// (0x00042c45) popup_snote_single_graphic_window_t4

0xede8,	// (0x00042c79) popup_snote_single_graphic_window_t5_ParamLimits

0xede8,	// (0x00042c79) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00043422) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00043422) popup_snote_single_graphic_window_t

0x6202,	// (0x0003a093) grid_graphic_popup_pane_ParamLimits

0x6202,	// (0x0003a093) grid_graphic_popup_pane

0x6225,	// (0x0003a0b6) listscroll_popup_graphic_pane_g1_ParamLimits

0x6225,	// (0x0003a0b6) listscroll_popup_graphic_pane_g1

0x6239,	// (0x0003a0ca) listscroll_popup_graphic_pane_g2_ParamLimits

0x6239,	// (0x0003a0ca) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0004381a) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0004381a) listscroll_popup_graphic_pane_g

0x36e8,	// (0x00037579) scroll_pane_cp5

0x59e0,	// (0x00039871) cell_graphic_popup_pane_ParamLimits

0x59e0,	// (0x00039871) cell_graphic_popup_pane

0x36b3,	// (0x00037544) cell_graphic_popup_pane_g1

0x36bb,	// (0x0003754c) cell_graphic_popup_pane_g2

0xed17,	// (0x00042ba8) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x00043813) cell_graphic_popup_pane_g

0x36c4,	// (0x00037555) cell_graphic_popup_pane_t2

0xed20,	// (0x00042bb1) grid_highlight_pane_cp3

0xee69,	// (0x00042cfa) list_gen_pane_ParamLimits

0xee69,	// (0x00042cfa) list_gen_pane

0xee92,	// (0x00042d23) scroll_pane

0x59b1,	// (0x00039842) bg_list_pane_g1_ParamLimits

0x59b1,	// (0x00039842) bg_list_pane_g1

0x3662,	// (0x000374f3) bg_list_pane_g2_ParamLimits

0x3662,	// (0x000374f3) bg_list_pane_g2

0x3675,	// (0x00037506) bg_list_pane_g3_ParamLimits

0x3675,	// (0x00037506) bg_list_pane_g3

0x3687,	// (0x00037518) bg_list_pane_g4_ParamLimits

0x3687,	// (0x00037518) bg_list_pane_g4

0x59c8,	// (0x00039859) bg_list_pane_g5_ParamLimits

0x59c8,	// (0x00039859) bg_list_pane_g5

0x0004,

0xf977,	// (0x00043808) bg_list_pane_g_ParamLimits

0xf977,	// (0x00043808) bg_list_pane_g

0x598d,	// (0x0003981e) list_double2_graphic_large_graphic_pane_ParamLimits

0x598d,	// (0x0003981e) list_double2_graphic_large_graphic_pane

0x598d,	// (0x0003981e) list_double2_graphic_pane_ParamLimits

0x598d,	// (0x0003981e) list_double2_graphic_pane

0x598d,	// (0x0003981e) list_double2_large_graphic_pane_ParamLimits

0x598d,	// (0x0003981e) list_double2_large_graphic_pane

0x598d,	// (0x0003981e) list_double2_pane_ParamLimits

0x598d,	// (0x0003981e) list_double2_pane

0x598d,	// (0x0003981e) list_double_graphic_heading_pane_ParamLimits

0x598d,	// (0x0003981e) list_double_graphic_heading_pane

0x598d,	// (0x0003981e) list_double_graphic_pane_ParamLimits

0x598d,	// (0x0003981e) list_double_graphic_pane

0x598d,	// (0x0003981e) list_double_heading_pane_ParamLimits

0x598d,	// (0x0003981e) list_double_heading_pane

0x598d,	// (0x0003981e) list_double_large_graphic_pane_ParamLimits

0x598d,	// (0x0003981e) list_double_large_graphic_pane

0x598d,	// (0x0003981e) list_double_number_pane_ParamLimits

0x598d,	// (0x0003981e) list_double_number_pane

0x598d,	// (0x0003981e) list_double_pane_ParamLimits

0x598d,	// (0x0003981e) list_double_pane

0x598d,	// (0x0003981e) list_double_time_pane_ParamLimits

0x598d,	// (0x0003981e) list_double_time_pane

0x598d,	// (0x0003981e) list_setting_number_pane_ParamLimits

0x598d,	// (0x0003981e) list_setting_number_pane

0x598d,	// (0x0003981e) list_setting_pane_ParamLimits

0x598d,	// (0x0003981e) list_setting_pane

0x09ec,	// (0x0003487d) list_single_2graphic_pane_ParamLimits

0x09ec,	// (0x0003487d) list_single_2graphic_pane

0x09ec,	// (0x0003487d) list_single_graphic_heading_pane_ParamLimits

0x09ec,	// (0x0003487d) list_single_graphic_heading_pane

0x09ec,	// (0x0003487d) list_single_graphic_pane_ParamLimits

0x09ec,	// (0x0003487d) list_single_graphic_pane

0x09ec,	// (0x0003487d) list_single_heading_pane_ParamLimits

0x09ec,	// (0x0003487d) list_single_heading_pane

0x0a02,	// (0x00034893) list_single_large_graphic_pane_ParamLimits

0x0a02,	// (0x00034893) list_single_large_graphic_pane

0x09ec,	// (0x0003487d) list_single_number_heading_pane_ParamLimits

0x09ec,	// (0x0003487d) list_single_number_heading_pane

0x09ec,	// (0x0003487d) list_single_number_pane_ParamLimits

0x09ec,	// (0x0003487d) list_single_number_pane

0x09ec,	// (0x0003487d) list_single_pane_ParamLimits

0x09ec,	// (0x0003487d) list_single_pane

0xe90b,	// (0x0004279c) list_highlight_pane_cp1

0xeec7,	// (0x00042d58) list_single_pane_g1_ParamLimits

0xeec7,	// (0x00042d58) list_single_pane_g1

0xeed3,	// (0x00042d64) list_single_pane_g2_ParamLimits

0xeed3,	// (0x00042d64) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0004343e) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0004343e) list_single_pane_g

0xe2cc,	// (0x0004215d) list_single_pane_t1_ParamLimits

0xe2cc,	// (0x0004215d) list_single_pane_t1

0xeec7,	// (0x00042d58) list_single_number_pane_g1_ParamLimits

0xeec7,	// (0x00042d58) list_single_number_pane_g1

0xeed3,	// (0x00042d64) list_single_number_pane_g2_ParamLimits

0xeed3,	// (0x00042d64) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0004343e) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0004343e) list_single_number_pane_g

0xdaaf,	// (0x00041940) list_single_number_pane_t1_ParamLimits

0xdaaf,	// (0x00041940) list_single_number_pane_t1

0xe28b,	// (0x0004211c) list_single_number_pane_t2_ParamLimits

0xe28b,	// (0x0004211c) list_single_number_pane_t2

0x0001,

0xf938,	// (0x000437c9) list_single_number_pane_t_ParamLimits

0xf938,	// (0x000437c9) list_single_number_pane_t

0xdaa3,	// (0x00041934) list_single_graphic_pane_g1_ParamLimits

0xdaa3,	// (0x00041934) list_single_graphic_pane_g1

0xeec7,	// (0x00042d58) list_single_graphic_pane_g2_ParamLimits

0xeec7,	// (0x00042d58) list_single_graphic_pane_g2

0xeed3,	// (0x00042d64) list_single_graphic_pane_g3_ParamLimits

0xeed3,	// (0x00042d64) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004342d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004342d) list_single_graphic_pane_g

0xdaaf,	// (0x00041940) list_single_graphic_pane_t1_ParamLimits

0xdaaf,	// (0x00041940) list_single_graphic_pane_t1

0xdac5,	// (0x00041956) list_single_heading_pane_g1_ParamLimits

0xdac5,	// (0x00041956) list_single_heading_pane_g1

0xeed3,	// (0x00042d64) list_single_heading_pane_g2_ParamLimits

0xeed3,	// (0x00042d64) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00043434) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00043434) list_single_heading_pane_g

0xdad8,	// (0x00041969) list_single_heading_pane_t1_ParamLimits

0xdad8,	// (0x00041969) list_single_heading_pane_t1

0xeedf,	// (0x00042d70) list_single_heading_pane_t2_ParamLimits

0xeedf,	// (0x00042d70) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00043439) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00043439) list_single_heading_pane_t

0xeec7,	// (0x00042d58) list_single_number_heading_pane_g1_ParamLimits

0xeec7,	// (0x00042d58) list_single_number_heading_pane_g1

0xeed3,	// (0x00042d64) list_single_number_heading_pane_g2_ParamLimits

0xeed3,	// (0x00042d64) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0004343e) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0004343e) list_single_number_heading_pane_g

0xdaee,	// (0x0004197f) list_single_number_heading_pane_t1_ParamLimits

0xdaee,	// (0x0004197f) list_single_number_heading_pane_t1

0xdb04,	// (0x00041995) list_single_number_heading_pane_t2_ParamLimits

0xdb04,	// (0x00041995) list_single_number_heading_pane_t2

0xdb16,	// (0x000419a7) list_single_number_heading_pane_t3_ParamLimits

0xdb16,	// (0x000419a7) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00043443) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00043443) list_single_number_heading_pane_t

0xdb28,	// (0x000419b9) list_single_graphic_heading_pane_g1_ParamLimits

0xdb28,	// (0x000419b9) list_single_graphic_heading_pane_g1

0xeef1,	// (0x00042d82) list_single_graphic_heading_pane_g4_ParamLimits

0xeef1,	// (0x00042d82) list_single_graphic_heading_pane_g4

0xeed3,	// (0x00042d64) list_single_graphic_heading_pane_g5_ParamLimits

0xeed3,	// (0x00042d64) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0004344a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0004344a) list_single_graphic_heading_pane_g

0xdaee,	// (0x0004197f) list_single_graphic_heading_pane_t1_ParamLimits

0xdaee,	// (0x0004197f) list_single_graphic_heading_pane_t1

0xdb3c,	// (0x000419cd) list_single_graphic_heading_pane_t2_ParamLimits

0xdb3c,	// (0x000419cd) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00043451) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00043451) list_single_graphic_heading_pane_t

0xef00,	// (0x00042d91) list_single_large_graphic_pane_g1_ParamLimits

0xef00,	// (0x00042d91) list_single_large_graphic_pane_g1

0xef0c,	// (0x00042d9d) list_single_large_graphic_pane_g2_ParamLimits

0xef0c,	// (0x00042d9d) list_single_large_graphic_pane_g2

0xef18,	// (0x00042da9) list_single_large_graphic_pane_g3_ParamLimits

0xef18,	// (0x00042da9) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00043456) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00043456) list_single_large_graphic_pane_g

0x2a24,	// (0x000368b5) wait_border_pane_g2_copy1

0xef24,	// (0x00042db5) list_single_large_graphic_pane_g4_cp2

0xdb54,	// (0x000419e5) list_single_large_graphic_pane_t1_ParamLimits

0xdb54,	// (0x000419e5) list_single_large_graphic_pane_t1

0xef2c,	// (0x00042dbd) list_double_pane_g1_ParamLimits

0xef2c,	// (0x00042dbd) list_double_pane_g1

0xef38,	// (0x00042dc9) list_double_pane_g2_ParamLimits

0xef38,	// (0x00042dc9) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0004345d) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0004345d) list_double_pane_g

0xdb6a,	// (0x000419fb) list_double_pane_t1_ParamLimits

0xdb6a,	// (0x000419fb) list_double_pane_t1

0xdb80,	// (0x00041a11) list_double_pane_t2_ParamLimits

0xdb80,	// (0x00041a11) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00043462) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00043462) list_double_pane_t

0xdb92,	// (0x00041a23) list_double2_pane_g1_ParamLimits

0xdb92,	// (0x00041a23) list_double2_pane_g1

0xdba1,	// (0x00041a32) list_double2_pane_g2_ParamLimits

0xdba1,	// (0x00041a32) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00043467) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00043467) list_double2_pane_g

0xdbad,	// (0x00041a3e) list_double2_pane_t1_ParamLimits

0xdbad,	// (0x00041a3e) list_double2_pane_t1

0xdbc3,	// (0x00041a54) list_double2_pane_t2_ParamLimits

0xdbc3,	// (0x00041a54) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0004346c) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0004346c) list_double2_pane_t

0xef2c,	// (0x00042dbd) list_double_number_pane_g1_ParamLimits

0xef2c,	// (0x00042dbd) list_double_number_pane_g1

0xef38,	// (0x00042dc9) list_double_number_pane_g2_ParamLimits

0xef38,	// (0x00042dc9) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0004345d) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0004345d) list_double_number_pane_g

0xdbd5,	// (0x00041a66) list_double_number_pane_t1_ParamLimits

0xdbd5,	// (0x00041a66) list_double_number_pane_t1

0xdbe7,	// (0x00041a78) list_double_number_pane_t2_ParamLimits

0xdbe7,	// (0x00041a78) list_double_number_pane_t2

0xdbfd,	// (0x00041a8e) list_double_number_pane_t3_ParamLimits

0xdbfd,	// (0x00041a8e) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00043471) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00043471) list_double_number_pane_t

0xdc0f,	// (0x00041aa0) list_double_graphic_pane_g1_ParamLimits

0xdc0f,	// (0x00041aa0) list_double_graphic_pane_g1

0xdc1b,	// (0x00041aac) list_double_graphic_pane_g2_ParamLimits

0xdc1b,	// (0x00041aac) list_double_graphic_pane_g2

0xdc2a,	// (0x00041abb) list_double_graphic_pane_g3_ParamLimits

0xdc2a,	// (0x00041abb) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00043478) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00043478) list_double_graphic_pane_g

0xdc36,	// (0x00041ac7) list_double_graphic_pane_t1_ParamLimits

0xdc36,	// (0x00041ac7) list_double_graphic_pane_t1

0xdc4c,	// (0x00041add) list_double_graphic_pane_t2_ParamLimits

0xdc4c,	// (0x00041add) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00043481) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00043481) list_double_graphic_pane_t

0xdc5e,	// (0x00041aef) list_double2_graphic_pane_g1_ParamLimits

0xdc5e,	// (0x00041aef) list_double2_graphic_pane_g1

0xef50,	// (0x00042de1) list_double2_graphic_pane_g2_ParamLimits

0xef50,	// (0x00042de1) list_double2_graphic_pane_g2

0xef5c,	// (0x00042ded) list_double2_graphic_pane_g3_ParamLimits

0xef5c,	// (0x00042ded) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00043486) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00043486) list_double2_graphic_pane_g

0xdc6a,	// (0x00041afb) list_double2_graphic_pane_t1_ParamLimits

0xdc6a,	// (0x00041afb) list_double2_graphic_pane_t1

0xdc80,	// (0x00041b11) list_double2_graphic_pane_t2_ParamLimits

0xdc80,	// (0x00041b11) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0004348d) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0004348d) list_double2_graphic_pane_t

0xdc92,	// (0x00041b23) list_double_large_graphic_pane_g1_ParamLimits

0xdc92,	// (0x00041b23) list_double_large_graphic_pane_g1

0xdcbb,	// (0x00041b4c) list_double_large_graphic_pane_g2_ParamLimits

0xdcbb,	// (0x00041b4c) list_double_large_graphic_pane_g2

0xef38,	// (0x00042dc9) list_double_large_graphic_pane_g3_ParamLimits

0xef38,	// (0x00042dc9) list_double_large_graphic_pane_g3

0xdccf,	// (0x00041b60) list_double_large_graphic_pane_g4_ParamLimits

0xdccf,	// (0x00041b60) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00043492) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00043492) list_double_large_graphic_pane_g

0xdce0,	// (0x00041b71) list_double_large_graphic_pane_t1_ParamLimits

0xdce0,	// (0x00041b71) list_double_large_graphic_pane_t1

0xdcf9,	// (0x00041b8a) list_double_large_graphic_pane_t2_ParamLimits

0xdcf9,	// (0x00041b8a) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0004349d) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0004349d) list_double_large_graphic_pane_t

0xef7d,	// (0x00042e0e) list_double2_large_graphic_pane_g1_ParamLimits

0xef7d,	// (0x00042e0e) list_double2_large_graphic_pane_g1

0xdd0b,	// (0x00041b9c) list_double2_large_graphic_pane_g2_ParamLimits

0xdd0b,	// (0x00041b9c) list_double2_large_graphic_pane_g2

0xef5c,	// (0x00042ded) list_double2_large_graphic_pane_g3_ParamLimits

0xef5c,	// (0x00042ded) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000434a2) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000434a2) list_double2_large_graphic_pane_g

0xdd1a,	// (0x00041bab) list_double2_large_graphic_pane_t1_ParamLimits

0xdd1a,	// (0x00041bab) list_double2_large_graphic_pane_t1

0xdd30,	// (0x00041bc1) list_double2_large_graphic_pane_t2_ParamLimits

0xdd30,	// (0x00041bc1) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000434a9) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000434a9) list_double2_large_graphic_pane_t

0xdd42,	// (0x00041bd3) list_double_heading_pane_g1_ParamLimits

0xdd42,	// (0x00041bd3) list_double_heading_pane_g1

0xdd51,	// (0x00041be2) list_double_heading_pane_g2_ParamLimits

0xdd51,	// (0x00041be2) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000434ae) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000434ae) list_double_heading_pane_g

0xdd5d,	// (0x00041bee) list_double_heading_pane_t1_ParamLimits

0xdd5d,	// (0x00041bee) list_double_heading_pane_t1

0xdbc3,	// (0x00041a54) list_double_heading_pane_t2_ParamLimits

0xdbc3,	// (0x00041a54) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000434b3) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000434b3) list_double_heading_pane_t

0xdd73,	// (0x00041c04) list_double_graphic_heading_pane_g1_ParamLimits

0xdd73,	// (0x00041c04) list_double_graphic_heading_pane_g1

0xdd42,	// (0x00041bd3) list_double_graphic_heading_pane_g2_ParamLimits

0xdd42,	// (0x00041bd3) list_double_graphic_heading_pane_g2

0xdd51,	// (0x00041be2) list_double_graphic_heading_pane_g3_ParamLimits

0xdd51,	// (0x00041be2) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000434b8) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000434b8) list_double_graphic_heading_pane_g

0xdd7f,	// (0x00041c10) list_double_graphic_heading_pane_t1_ParamLimits

0xdd7f,	// (0x00041c10) list_double_graphic_heading_pane_t1

0xdc80,	// (0x00041b11) list_double_graphic_heading_pane_t2_ParamLimits

0xdc80,	// (0x00041b11) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000434bf) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000434bf) list_double_graphic_heading_pane_t

0xdd95,	// (0x00041c26) list_double_time_pane_g1_ParamLimits

0xdd95,	// (0x00041c26) list_double_time_pane_g1

0xdda4,	// (0x00041c35) list_double_time_pane_g2_ParamLimits

0xdda4,	// (0x00041c35) list_double_time_pane_g2

0x0001,

0xf633,	// (0x000434c4) list_double_time_pane_g_ParamLimits

0xf633,	// (0x000434c4) list_double_time_pane_g

0xddb0,	// (0x00041c41) list_double_time_pane_t1_ParamLimits

0xddb0,	// (0x00041c41) list_double_time_pane_t1

0xddc6,	// (0x00041c57) list_double_time_pane_t2_ParamLimits

0xddc6,	// (0x00041c57) list_double_time_pane_t2

0xddd8,	// (0x00041c69) list_double_time_pane_t3_ParamLimits

0xddd8,	// (0x00041c69) list_double_time_pane_t3

0xddea,	// (0x00041c7b) list_double_time_pane_t4_ParamLimits

0xddea,	// (0x00041c7b) list_double_time_pane_t4

0x0003,

0xf638,	// (0x000434c9) list_double_time_pane_t_ParamLimits

0xf638,	// (0x000434c9) list_double_time_pane_t

0xddfc,	// (0x00041c8d) list_setting_pane_g1_ParamLimits

0xddfc,	// (0x00041c8d) list_setting_pane_g1

0xde08,	// (0x00041c99) list_setting_pane_g2_ParamLimits

0xde08,	// (0x00041c99) list_setting_pane_g2

0x0001,

0xf641,	// (0x000434d2) list_setting_pane_g_ParamLimits

0xf641,	// (0x000434d2) list_setting_pane_g

0xde14,	// (0x00041ca5) list_setting_pane_t1_ParamLimits

0xde14,	// (0x00041ca5) list_setting_pane_t1

0xde2e,	// (0x00041cbf) list_setting_pane_t2_ParamLimits

0xde2e,	// (0x00041cbf) list_setting_pane_t2

0x0002,

0xf646,	// (0x000434d7) list_setting_pane_t_ParamLimits

0xf646,	// (0x000434d7) list_setting_pane_t

0xde6b,	// (0x00041cfc) set_value_pane_cp_ParamLimits

0xde6b,	// (0x00041cfc) set_value_pane_cp

0xde77,	// (0x00041d08) list_setting_number_pane_g1_ParamLimits

0xde77,	// (0x00041d08) list_setting_number_pane_g1

0xde83,	// (0x00041d14) list_setting_number_pane_g2_ParamLimits

0xde83,	// (0x00041d14) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x000434de) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x000434de) list_setting_number_pane_g

0xde8f,	// (0x00041d20) list_setting_number_pane_t1_ParamLimits

0xde8f,	// (0x00041d20) list_setting_number_pane_t1

0xdea6,	// (0x00041d37) list_setting_number_pane_t2_ParamLimits

0xdea6,	// (0x00041d37) list_setting_number_pane_t2

0xdec0,	// (0x00041d51) list_setting_number_pane_t3_ParamLimits

0xdec0,	// (0x00041d51) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x000434e3) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x000434e3) list_setting_number_pane_t

0xde6b,	// (0x00041cfc) set_value_pane_ParamLimits

0xde6b,	// (0x00041cfc) set_value_pane

0xef89,	// (0x00042e1a) bg_set_opt_pane_ParamLimits

0xef89,	// (0x00042e1a) bg_set_opt_pane

0xdf01,	// (0x00041d92) set_value_pane_t1

0xefaa,	// (0x00042e3b) slider_set_pane_cp3

0xefb3,	// (0x00042e44) volume_small_pane_cp

0xefbc,	// (0x00042e4d) list_form_gen_pane

0xeeb6,	// (0x00042d47) scroll_pane_cp8

0xdf1f,	// (0x00041db0) form_field_data_pane_ParamLimits

0xdf1f,	// (0x00041db0) form_field_data_pane

0xdf3f,	// (0x00041dd0) form_field_data_wide_pane_ParamLimits

0xdf3f,	// (0x00041dd0) form_field_data_wide_pane

0xdf5e,	// (0x00041def) form_field_popup_pane_ParamLimits

0xdf5e,	// (0x00041def) form_field_popup_pane

0xdf76,	// (0x00041e07) form_field_popup_wide_pane_ParamLimits

0xdf76,	// (0x00041e07) form_field_popup_wide_pane

0xdf8d,	// (0x00041e1e) form_field_slider_pane_ParamLimits

0xdf8d,	// (0x00041e1e) form_field_slider_pane

0xdfa0,	// (0x00041e31) form_field_slider_wide_pane_ParamLimits

0xdfa0,	// (0x00041e31) form_field_slider_wide_pane

0xefc5,	// (0x00042e56) data_form_pane

0xdfbb,	// (0x00041e4c) form_field_data_pane_t1

0xefd1,	// (0x00042e62) input_focus_pane

0xefdf,	// (0x00042e70) data_form_wide_pane

0xdfdf,	// (0x00041e70) form_field_data_wide_pane_t1

0xed35,	// (0x00042bc6) input_focus_pane_cp6

0xe001,	// (0x00041e92) form_field_popup_pane_t1

0xefd1,	// (0x00042e62) input_focus_pane_cp7

0xefc5,	// (0x00042e56) list_form_pane

0xe021,	// (0x00041eb2) form_field_popup_wide_pane_t1

0xefd1,	// (0x00042e62) input_focus_pane_cp8

0xefff,	// (0x00042e90) list_form_wide_pane

0xe03e,	// (0x00041ecf) form_field_slider_pane_t1_ParamLimits

0xe03e,	// (0x00041ecf) form_field_slider_pane_t1

0xe054,	// (0x00041ee5) form_field_slider_pane_t2_ParamLimits

0xe054,	// (0x00041ee5) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x000434f3) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x000434f3) form_field_slider_pane_t

0xea94,	// (0x00042925) input_focus_pane_cp9_ParamLimits

0xea94,	// (0x00042925) input_focus_pane_cp9

0xe069,	// (0x00041efa) slider_cont_pane_ParamLimits

0xe069,	// (0x00041efa) slider_cont_pane

0xf00e,	// (0x00042e9f) form_field_slider_wide_pane_t1_ParamLimits

0xf00e,	// (0x00042e9f) form_field_slider_wide_pane_t1

0xe07d,	// (0x00041f0e) form_field_slider_wide_pane_t2_ParamLimits

0xe07d,	// (0x00041f0e) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x000434f8) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x000434f8) form_field_slider_wide_pane_t

0xea94,	// (0x00042925) input_focus_pane_cp10_ParamLimits

0xea94,	// (0x00042925) input_focus_pane_cp10

0xe08f,	// (0x00041f20) slider_cont_pane_cp1_ParamLimits

0xe08f,	// (0x00041f20) slider_cont_pane_cp1

0xe0a5,	// (0x00041f36) slider_form_pane_cp

0xf020,	// (0x00042eb1) input_focus_pane_g1

0xf028,	// (0x00042eb9) input_focus_pane_g2

0xf030,	// (0x00042ec1) input_focus_pane_g3

0xf038,	// (0x00042ec9) input_focus_pane_g4

0xf040,	// (0x00042ed1) input_focus_pane_g5

0xf048,	// (0x00042ed9) input_focus_pane_g6

0xf050,	// (0x00042ee1) input_focus_pane_g7

0xf058,	// (0x00042ee9) input_focus_pane_g8

0xf060,	// (0x00042ef1) input_focus_pane_g9

0xe889,	// (0x0004271a) input_focus_pane_g10

0x0009,

0xf66c,	// (0x000434fd) input_focus_pane_g

0x2a2d,	// (0x000368be) wait_border_pane_g3_copy1

0xe0ad,	// (0x00041f3e) data_form_pane_t1

0xe889,	// (0x0004271a) wait_anim_pane_g1_copy1

0xe29d,	// (0x0004212e) data_form_wide_pane_t1

0xe0c7,	// (0x00041f58) list_form_graphic_pane_cp_ParamLimits

0xe0c7,	// (0x00041f58) list_form_graphic_pane_cp

0x3619,	// (0x000374aa) slider_form_pane_g1

0x3622,	// (0x000374b3) slider_form_pane_g2

0x0006,

0xf968,	// (0x000437f9) slider_form_pane_g

0xe0db,	// (0x00041f6c) list_form_graphic_pane_ParamLimits

0xe0db,	// (0x00041f6c) list_form_graphic_pane

0xe0f1,	// (0x00041f82) list_form_graphic_pane_g1

0xe0f9,	// (0x00041f8a) list_form_graphic_pane_t1_ParamLimits

0xe0f9,	// (0x00041f8a) list_form_graphic_pane_t1

0xe959,	// (0x000427ea) list_highlight_pane_cp5_ParamLimits

0xe959,	// (0x000427ea) list_highlight_pane_cp5

0xe10e,	// (0x00041f9f) find_pane_g1

0xf068,	// (0x00042ef9) input_find_pane

0xe117,	// (0x00041fa8) input_find_pane_g1_ParamLimits

0xe117,	// (0x00041fa8) input_find_pane_g1

0xe123,	// (0x00041fb4) input_find_pane_t1_ParamLimits

0xe123,	// (0x00041fb4) input_find_pane_t1

0xe138,	// (0x00041fc9) input_find_pane_t2_ParamLimits

0xe138,	// (0x00041fc9) input_find_pane_t2

0x0001,

0xf681,	// (0x00043512) input_find_pane_t_ParamLimits

0xf681,	// (0x00043512) input_find_pane_t

0xf071,	// (0x00042f02) input_focus_pane_cp5_ParamLimits

0xf071,	// (0x00042f02) input_focus_pane_cp5

0xea94,	// (0x00042925) bg_popup_window_pane_cp2_ParamLimits

0xea94,	// (0x00042925) bg_popup_window_pane_cp2

0xf090,	// (0x00042f21) listscroll_menu_pane_ParamLimits

0xf090,	// (0x00042f21) listscroll_menu_pane

0xf09c,	// (0x00042f2d) popup_submenu_window_ParamLimits

0xf09c,	// (0x00042f2d) popup_submenu_window

0xf0c0,	// (0x00042f51) find_popup_pane_g1

0xf0c8,	// (0x00042f59) input_popup_find_pane_cp

0xf0d2,	// (0x00042f63) input_focus_pane_cp4_ParamLimits

0xf0d2,	// (0x00042f63) input_focus_pane_cp4

0xf0e0,	// (0x00042f71) input_popup_find_pane_t1_ParamLimits

0xf0e0,	// (0x00042f71) input_popup_find_pane_t1

0xe90b,	// (0x0004279c) bg_popup_sub_pane_cp

0xf10e,	// (0x00042f9f) listscroll_popup_sub_pane

0xf116,	// (0x00042fa7) list_submenu_pane_ParamLimits

0xf116,	// (0x00042fa7) list_submenu_pane

0xf127,	// (0x00042fb8) scroll_pane_cp4

0xf12f,	// (0x00042fc0) list_single_popup_submenu_pane_ParamLimits

0xf12f,	// (0x00042fc0) list_single_popup_submenu_pane

0xf141,	// (0x00042fd2) list_single_popup_submenu_pane_g1

0xf149,	// (0x00042fda) list_single_popup_submenu_pane_t1_ParamLimits

0xf149,	// (0x00042fda) list_single_popup_submenu_pane_t1

0xe959,	// (0x000427ea) bg_active_tab_pane_cp1_ParamLimits

0xe959,	// (0x000427ea) bg_active_tab_pane_cp1

0x501a,	// (0x00038eab) tabs_2_active_pane_g1

0x5022,	// (0x00038eb3) tabs_2_active_pane_t1

0xe959,	// (0x000427ea) bg_passive_tab_pane_cp1_ParamLimits

0xe959,	// (0x000427ea) bg_passive_tab_pane_cp1

0x501a,	// (0x00038eab) tabs_2_passive_pane_g1

0x5022,	// (0x00038eb3) tabs_2_passive_pane_t1

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp4

0x5042,	// (0x00038ed3) tabs_2_long_active_pane_t1

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp4

0xbf89,	// (0x0003fe1a) list_single_midp_graphic_pane_g4_ParamLimits

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp5

0x5061,	// (0x00038ef2) tabs_3_long_active_pane_t1

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp5

0xbf89,	// (0x0003fe1a) list_single_midp_graphic_pane_g4

0xe959,	// (0x000427ea) bg_popup_window_pane_cp13_ParamLimits

0xe959,	// (0x000427ea) bg_popup_window_pane_cp13

0xf167,	// (0x00042ff8) listscroll_popup_fast_pane_ParamLimits

0xf167,	// (0x00042ff8) listscroll_popup_fast_pane

0xf176,	// (0x00043007) grid_popup_fast_pane_ParamLimits

0xf176,	// (0x00043007) grid_popup_fast_pane

0xf188,	// (0x00043019) scroll_pane_cp9_ParamLimits

0xf188,	// (0x00043019) scroll_pane_cp9

0x4921,	// (0x000387b2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4921,	// (0x000387b2) list_single_graphic_hl_pane_t1_cp2

0xf1ac,	// (0x0004303d) input_focus_pane_cp20_ParamLimits

0xf1ac,	// (0x0004303d) input_focus_pane_cp20

0xf1ba,	// (0x0004304b) query_popup_data_pane_t1_ParamLimits

0xf1ba,	// (0x0004304b) query_popup_data_pane_t1

0xf1cd,	// (0x0004305e) query_popup_data_pane_t2_ParamLimits

0xf1cd,	// (0x0004305e) query_popup_data_pane_t2

0xf213,	// (0x000430a4) query_popup_data_pane_t3_ParamLimits

0xf213,	// (0x000430a4) query_popup_data_pane_t3

0xf254,	// (0x000430e5) query_popup_data_pane_t4_ParamLimits

0xf254,	// (0x000430e5) query_popup_data_pane_t4

0xf290,	// (0x00043121) query_popup_data_pane_t5_ParamLimits

0xf290,	// (0x00043121) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00043517) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00043517) query_popup_data_pane_t

0xf020,	// (0x00042eb1) bg_set_opt_pane_g1

0xf028,	// (0x00042eb9) bg_set_opt_pane_g2

0xf030,	// (0x00042ec1) bg_set_opt_pane_g3

0xf038,	// (0x00042ec9) bg_set_opt_pane_g4

0xf040,	// (0x00042ed1) bg_set_opt_pane_g5

0xf048,	// (0x00042ed9) bg_set_opt_pane_g6

0xf050,	// (0x00042ee1) bg_set_opt_pane_g7

0xf058,	// (0x00042ee9) bg_set_opt_pane_g8

0xf060,	// (0x00042ef1) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00043522) bg_set_opt_pane_g

0xb75b,	// (0x0003f5ec) control_top_pane_stacon_ParamLimits

0xb75b,	// (0x0003f5ec) control_top_pane_stacon

0xb7ae,	// (0x0003f63f) signal_pane_stacon_ParamLimits

0xb7ae,	// (0x0003f63f) signal_pane_stacon

0x1e4c,	// (0x00035cdd) stacon_top_pane_g1_ParamLimits

0x1e4c,	// (0x00035cdd) stacon_top_pane_g1

0xb7d3,	// (0x0003f664) title_pane_stacon_ParamLimits

0xb7d3,	// (0x0003f664) title_pane_stacon

0xb7f5,	// (0x0003f686) uni_indicator_pane_stacon_ParamLimits

0xb7f5,	// (0x0003f686) uni_indicator_pane_stacon

0xb80a,	// (0x0003f69b) battery_pane_stacon_ParamLimits

0xb80a,	// (0x0003f69b) battery_pane_stacon

0xb84a,	// (0x0003f6db) control_bottom_pane_stacon_ParamLimits

0xb84a,	// (0x0003f6db) control_bottom_pane_stacon

0xb869,	// (0x0003f6fa) navi_pane_stacon_ParamLimits

0xb869,	// (0x0003f6fa) navi_pane_stacon

0x1e6e,	// (0x00035cff) stacon_bottom_pane_g1_ParamLimits

0x1e6e,	// (0x00035cff) stacon_bottom_pane_g1

0xf2c7,	// (0x00043158) aid_levels_signal_lsc_ParamLimits

0xf2c7,	// (0x00043158) aid_levels_signal_lsc

0xb527,	// (0x0003f3b8) signal_pane_stacon_g1_ParamLimits

0xb527,	// (0x0003f3b8) signal_pane_stacon_g1

0xb533,	// (0x0003f3c4) signal_pane_stacon_g2_ParamLimits

0xb533,	// (0x0003f3c4) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00043535) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00043535) signal_pane_stacon_g

0xb567,	// (0x0003f3f8) title_pane_stacon_t1_ParamLimits

0xb567,	// (0x0003f3f8) title_pane_stacon_t1

0xf2e1,	// (0x00043172) uni_indicator_pane_stacon_g1

0xf2eb,	// (0x0004317c) uni_indicator_pane_stacon_g2

0xf2f5,	// (0x00043186) uni_indicator_pane_stacon_g3

0xf2ff,	// (0x00043190) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00043541) uni_indicator_pane_stacon_g

0xb58c,	// (0x0003f41d) control_top_pane_stacon_g1

0xb594,	// (0x0003f425) control_top_pane_stacon_t1_ParamLimits

0xb594,	// (0x0003f425) control_top_pane_stacon_t1

0xf309,	// (0x0004319a) aid_levels_battery_lsc_ParamLimits

0xf309,	// (0x0004319a) aid_levels_battery_lsc

0xb5c5,	// (0x0003f456) battery_pane_stacon_g1_ParamLimits

0xb5c5,	// (0x0003f456) battery_pane_stacon_g1

0xb5d1,	// (0x0003f462) battery_pane_stacon_g2_ParamLimits

0xb5d1,	// (0x0003f462) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0004354a) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0004354a) battery_pane_stacon_g

0xb600,	// (0x0003f491) navi_icon_pane_stacon

0xb610,	// (0x0003f4a1) navi_navi_pane_stacon

0xb600,	// (0x0003f491) navi_text_pane_stacon

0xb58c,	// (0x0003f41d) control_bottom_pane_stacon_g1

0xb620,	// (0x0003f4b1) control_bottom_pane_stacon_t1_ParamLimits

0xb620,	// (0x0003f4b1) control_bottom_pane_stacon_t1

0x5073,	// (0x00038f04) grid_app_pane_ParamLimits

0x5073,	// (0x00038f04) grid_app_pane

0x508f,	// (0x00038f20) scroll_pane_cp15_ParamLimits

0x508f,	// (0x00038f20) scroll_pane_cp15

0x50a0,	// (0x00038f31) cell_app_pane_ParamLimits

0x50a0,	// (0x00038f31) cell_app_pane

0x50c4,	// (0x00038f55) cell_app_pane_g1_ParamLimits

0x50c4,	// (0x00038f55) cell_app_pane_g1

0xf331,	// (0x000431c2) cell_app_pane_g2_ParamLimits

0xf331,	// (0x000431c2) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0004354f) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0004354f) cell_app_pane_g

0x50e8,	// (0x00038f79) cell_app_pane_t1_ParamLimits

0x50e8,	// (0x00038f79) cell_app_pane_t1

0xf33d,	// (0x000431ce) grid_highlight_pane_ParamLimits

0xf33d,	// (0x000431ce) grid_highlight_pane

0xf020,	// (0x00042eb1) cell_highlight_pane_g1

0xf028,	// (0x00042eb9) cell_highlight_pane_g2

0xf030,	// (0x00042ec1) cell_highlight_pane_g3

0xf038,	// (0x00042ec9) cell_highlight_pane_g4

0xf040,	// (0x00042ed1) cell_highlight_pane_g5

0xf048,	// (0x00042ed9) cell_highlight_pane_g6

0xf050,	// (0x00042ee1) cell_highlight_pane_g7

0xf058,	// (0x00042ee9) cell_highlight_pane_g8

0xf060,	// (0x00042ef1) cell_highlight_pane_g9

0xe889,	// (0x0004271a) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x000434fd) cell_highlight_pane_g

0xf34e,	// (0x000431df) bg_scroll_pane

0xb664,	// (0x0003f4f5) scroll_handle_pane

0xf395,	// (0x00043226) scroll_bg_pane_g1

0xf3aa,	// (0x0004323b) scroll_bg_pane_g2

0xf3c2,	// (0x00043253) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00043554) scroll_bg_pane_g

0xf3d7,	// (0x00043268) scroll_handle_focus_pane_ParamLimits

0xf3d7,	// (0x00043268) scroll_handle_focus_pane

0xf395,	// (0x00043226) scroll_handle_pane_g1

0xf3e4,	// (0x00043275) scroll_handle_pane_g2

0xf3c2,	// (0x00043253) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0004355b) scroll_handle_pane_g

0xf0d2,	// (0x00042f63) bg_popup_sub_pane_cp21_ParamLimits

0xf0d2,	// (0x00042f63) bg_popup_sub_pane_cp21

0xf3f8,	// (0x00043289) popup_fep_japan_predictive_window_t1_ParamLimits

0xf3f8,	// (0x00043289) popup_fep_japan_predictive_window_t1

0xf40f,	// (0x000432a0) popup_fep_japan_predictive_window_t2_ParamLimits

0xf40f,	// (0x000432a0) popup_fep_japan_predictive_window_t2

0xf442,	// (0x000432d3) popup_fep_japan_predictive_window_t3_ParamLimits

0xf442,	// (0x000432d3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00043562) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00043562) popup_fep_japan_predictive_window_t

0xe90b,	// (0x0004279c) bg_popup_sub_pane_cp23

0xf479,	// (0x0004330a) listscroll_japin_cand_pane

0xf481,	// (0x00043312) popup_fep_japan_candidate_window_t1

0xf48f,	// (0x00043320) candidate_pane_ParamLimits

0xf48f,	// (0x00043320) candidate_pane

0xf4a2,	// (0x00043333) scroll_pane_cp30

0xf4aa,	// (0x0004333b) list_single_popup_jap_candidate_pane_ParamLimits

0xf4aa,	// (0x0004333b) list_single_popup_jap_candidate_pane

0xe90b,	// (0x0004279c) list_highlight_pane_cp30

0xf4bf,	// (0x00043350) list_single_popup_jap_candidate_pane_t1

0x50ff,	// (0x00038f90) level_1_signal

0x510c,	// (0x00038f9d) level_2_signal

0x5119,	// (0x00038faa) level_3_signal

0x5126,	// (0x00038fb7) level_4_signal

0x5133,	// (0x00038fc4) level_5_signal

0x5140,	// (0x00038fd1) level_6_signal

0x514d,	// (0x00038fde) level_7_signal

0x50ff,	// (0x00038f90) level_1_battery

0x510c,	// (0x00038f9d) level_2_battery

0x5119,	// (0x00038faa) level_3_battery

0x5126,	// (0x00038fb7) level_4_battery

0x5133,	// (0x00038fc4) level_5_battery

0x5140,	// (0x00038fd1) level_6_battery

0x514d,	// (0x00038fde) level_7_battery

0xf4e6,	// (0x00043377) list_menu_pane_ParamLimits

0xf4e6,	// (0x00043377) list_menu_pane

0xf4fc,	// (0x0004338d) scroll_pane_cp25_ParamLimits

0xf4fc,	// (0x0004338d) scroll_pane_cp25

0x515a,	// (0x00038feb) list_double2_graphic_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double2_graphic_pane_cp2

0x515a,	// (0x00038feb) list_double2_large_graphic_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double2_large_graphic_pane_cp2

0x515a,	// (0x00038feb) list_double2_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double2_pane_cp2

0x515a,	// (0x00038feb) list_double_graphic_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double_graphic_pane_cp2

0x515a,	// (0x00038feb) list_double_large_graphic_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double_large_graphic_pane_cp2

0x515a,	// (0x00038feb) list_double_number_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double_number_pane_cp2

0x515a,	// (0x00038feb) list_double_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double_pane_cp2

0x516a,	// (0x00038ffb) list_single_2graphic_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_2graphic_pane_cp2

0x516a,	// (0x00038ffb) list_single_graphic_heading_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_graphic_heading_pane_cp2

0x516a,	// (0x00038ffb) list_single_graphic_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_graphic_pane_cp2

0x516a,	// (0x00038ffb) list_single_heading_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_heading_pane_cp2

0x517f,	// (0x00039010) list_single_large_graphic_pane_cp2_ParamLimits

0x517f,	// (0x00039010) list_single_large_graphic_pane_cp2

0x516a,	// (0x00038ffb) list_single_number_heading_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_number_heading_pane_cp2

0x516a,	// (0x00038ffb) list_single_number_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_number_pane_cp2

0x516a,	// (0x00038ffb) list_single_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_pane_cp2

0x1ce7,	// (0x00035b78) bg_popup_sub_pane_cp22

0xb713,	// (0x0003f5a4) popup_side_volume_key_window_g1

0xb737,	// (0x0003f5c8) popup_side_volume_key_window_t1

0xb753,	// (0x0003f5e4) volume_small_pane_cp1

0xea94,	// (0x00042925) bg_popup_sub_pane_cp24_ParamLimits

0xea94,	// (0x00042925) bg_popup_sub_pane_cp24

0x1cfd,	// (0x00035b8e) fep_china_uni_candidate_pane_ParamLimits

0x1cfd,	// (0x00035b8e) fep_china_uni_candidate_pane

0x1d11,	// (0x00035ba2) fep_china_uni_entry_pane

0x1d21,	// (0x00035bb2) popup_fep_china_uni_window_g1

0x1d3d,	// (0x00035bce) fep_china_uni_entry_pane_g1

0x1d45,	// (0x00035bd6) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00043593) fep_china_uni_entry_pane_g

0x1d4d,	// (0x00035bde) fep_entry_item_pane

0x1d57,	// (0x00035be8) fep_candidate_item_pane

0x1d5f,	// (0x00035bf0) fep_china_uni_candidate_pane_g1

0x1d67,	// (0x00035bf8) fep_china_uni_candidate_pane_g2

0x1d6f,	// (0x00035c00) fep_china_uni_candidate_pane_g3

0x1d77,	// (0x00035c08) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00043598) fep_china_uni_candidate_pane_g

0xe889,	// (0x0004271a) fep_entry_item_pane_g1

0x1d7f,	// (0x00035c10) fep_entry_item_pane_t1_ParamLimits

0x1d7f,	// (0x00035c10) fep_entry_item_pane_t1

0x1d95,	// (0x00035c26) fep_candidate_item_pane_t1_ParamLimits

0x1d95,	// (0x00035c26) fep_candidate_item_pane_t1

0x1daa,	// (0x00035c3b) fep_candidate_item_pane_t2_ParamLimits

0x1daa,	// (0x00035c3b) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000435a1) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000435a1) fep_candidate_item_pane_t

0xe959,	// (0x000427ea) list_highlight_pane_cp31_ParamLimits

0xe959,	// (0x000427ea) list_highlight_pane_cp31

0x1dbc,	// (0x00035c4d) level_1_signal_lsc

0x1dc5,	// (0x00035c56) level_2_signal_lsc

0x1dce,	// (0x00035c5f) level_3_signal_lsc

0x1dd7,	// (0x00035c68) level_4_signal_lsc

0x1de0,	// (0x00035c71) level_5_signal_lsc

0x1de9,	// (0x00035c7a) level_6_signal_lsc

0x1df2,	// (0x00035c83) level_7_signal_lsc

0x1df2,	// (0x00035c83) level_1_battery_lsc

0x1dfb,	// (0x00035c8c) level_2_battery_lsc

0x1e04,	// (0x00035c95) level_3_battery_lsc

0x1e0d,	// (0x00035c9e) level_4_battery_lsc

0x1e16,	// (0x00035ca7) level_5_battery_lsc

0x1e1f,	// (0x00035cb0) level_6_battery_lsc

0x1dbc,	// (0x00035c4d) level_7_battery_lsc

0x1e28,	// (0x00035cb9) scroll_handle_focus_pane_g1

0x1e31,	// (0x00035cc2) scroll_handle_focus_pane_g2

0x1e3a,	// (0x00035ccb) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000435a6) scroll_handle_focus_pane_g

0xe14d,	// (0x00041fde) list_single_2graphic_pane_g1_ParamLimits

0xe14d,	// (0x00041fde) list_single_2graphic_pane_g1

0xeef1,	// (0x00042d82) list_single_2graphic_pane_g2_ParamLimits

0xeef1,	// (0x00042d82) list_single_2graphic_pane_g2

0xeed3,	// (0x00042d64) list_single_2graphic_pane_g3_ParamLimits

0xeed3,	// (0x00042d64) list_single_2graphic_pane_g3

0xf50d,	// (0x0004339e) list_single_2graphic_pane_g4_ParamLimits

0xf50d,	// (0x0004339e) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x000435ad) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x000435ad) list_single_2graphic_pane_g

0xe159,	// (0x00041fea) list_single_2graphic_pane_t1_ParamLimits

0xe159,	// (0x00041fea) list_single_2graphic_pane_t1

0xf519,	// (0x000433aa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xf519,	// (0x000433aa) list_double2_graphic_large_graphic_pane_g1

0xdd0b,	// (0x00041b9c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xdd0b,	// (0x00041b9c) list_double2_graphic_large_graphic_pane_g2

0xef5c,	// (0x00042ded) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xef5c,	// (0x00042ded) list_double2_graphic_large_graphic_pane_g3

0xe187,	// (0x00042018) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe187,	// (0x00042018) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000435b6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000435b6) list_double2_graphic_large_graphic_pane_g

0xe193,	// (0x00042024) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe193,	// (0x00042024) list_double2_graphic_large_graphic_pane_t1

0xe1a9,	// (0x0004203a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe1a9,	// (0x0004203a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000435bf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000435bf) list_double2_graphic_large_graphic_pane_t

0x1f15,	// (0x00035da6) popup_fast_swap_window_ParamLimits

0x1f15,	// (0x00035da6) popup_fast_swap_window

0x1f31,	// (0x00035dc2) popup_side_volume_key_window

0x1f4b,	// (0x00035ddc) stacon_top_pane

0x1f55,	// (0x00035de6) status_pane_ParamLimits

0x1f55,	// (0x00035de6) status_pane

0x5251,	// (0x000390e2) status_small_pane

0xe90b,	// (0x0004279c) control_pane

0xe90b,	// (0x0004279c) stacon_bottom_pane

0xeeb6,	// (0x00042d47) scroll_pane_cp121

0xefbc,	// (0x00042e4d) set_content_pane

0x51fb,	// (0x0003908c) bg_active_tab_pane_g1_cp1

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp1

0x51f2,	// (0x00039083) bg_active_tab_pane_g3_cp1

0x51fb,	// (0x0003908c) bg_passive_tab_pane_g1_cp1

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp1

0x51f2,	// (0x00039083) bg_passive_tab_pane_g3_cp1

0x520d,	// (0x0003909e) bg_active_tab_pane_g1_cp2

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp2

0x5204,	// (0x00039095) bg_active_tab_pane_g3_cp2

0x520d,	// (0x0003909e) bg_passive_tab_pane_g1_cp2

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp2

0x5204,	// (0x00039095) bg_passive_tab_pane_g3_cp2

0x521f,	// (0x000390b0) bg_active_tab_pane_g1_cp3

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp3

0x5216,	// (0x000390a7) bg_active_tab_pane_g3_cp3

0x521f,	// (0x000390b0) bg_passive_tab_pane_g1_cp3

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp3

0x5216,	// (0x000390a7) bg_passive_tab_pane_g3_cp3

0x5231,	// (0x000390c2) bg_active_tab_pane_g1_cp4

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp4

0x5228,	// (0x000390b9) bg_active_tab_pane_g3_cp4

0x5231,	// (0x000390c2) bg_passive_tab_pane_g1_cp4

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp4

0x5228,	// (0x000390b9) bg_passive_tab_pane_g3_cp4

0x1e93,	// (0x00035d24) bg_active_tab_pane_g1_cp5

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp5

0x1e8a,	// (0x00035d1b) bg_active_tab_pane_g3_cp5

0x1e93,	// (0x00035d24) bg_passive_tab_pane_g1_cp5

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp5

0x1e8a,	// (0x00035d1b) bg_passive_tab_pane_g3_cp5

0x523a,	// (0x000390cb) list_set_graphic_pane_ParamLimits

0x523a,	// (0x000390cb) list_set_graphic_pane

0xe90b,	// (0x0004279c) bg_set_opt_pane_cp4

0x1e9c,	// (0x00035d2d) list_set_graphic_pane_g1_ParamLimits

0x1e9c,	// (0x00035d2d) list_set_graphic_pane_g1

0x1ea8,	// (0x00035d39) list_set_graphic_pane_g2_ParamLimits

0x1ea8,	// (0x00035d39) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x000435c4) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x000435c4) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0004393b) volume_small_pane_cp_g

0x1eca,	// (0x00035d5b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1eca,	// (0x00035d5b) list_double2_large_graphic_pane_g1_cp2

0x1ed6,	// (0x00035d67) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1ed6,	// (0x00035d67) list_double2_large_graphic_pane_g2_cp2

0x1ee5,	// (0x00035d76) list_double2_large_graphic_pane_g3_cp2

0x1eed,	// (0x00035d7e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1eed,	// (0x00035d7e) list_double2_large_graphic_pane_t1_cp2

0x1f03,	// (0x00035d94) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1f03,	// (0x00035d94) list_double2_large_graphic_pane_t2_cp2

0x33d1,	// (0x00037262) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x33d1,	// (0x00037262) list_double_large_graphic_pane_g1_cp2

0x33e2,	// (0x00037273) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x33e2,	// (0x00037273) list_double_large_graphic_pane_g2_cp2

0x2030,	// (0x00035ec1) list_double_large_graphic_pane_g3_cp2

0x33f1,	// (0x00037282) list_double_large_graphic_pane_g4_cp

0x33f9,	// (0x0003728a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x33f9,	// (0x0003728a) list_double_large_graphic_pane_t1_cp2

0x3410,	// (0x000372a1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3410,	// (0x000372a1) list_double_large_graphic_pane_t2_cp2

0x1f63,	// (0x00035df4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1f63,	// (0x00035df4) list_double2_graphic_pane_g1_cp2

0x1f6f,	// (0x00035e00) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1f6f,	// (0x00035e00) list_double2_graphic_pane_g2_cp2

0x1f7e,	// (0x00035e0f) list_double2_graphic_pane_g3_cp2

0x1f86,	// (0x00035e17) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1f86,	// (0x00035e17) list_double2_graphic_pane_t1_cp2

0x1f9c,	// (0x00035e2d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1f9c,	// (0x00035e2d) list_double2_graphic_pane_t2_cp2

0x1fae,	// (0x00035e3f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1fae,	// (0x00035e3f) list_single_number_heading_pane_g1_cp2

0x1fba,	// (0x00035e4b) list_single_number_heading_pane_g2_cp2

0x1fc2,	// (0x00035e53) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1fc2,	// (0x00035e53) list_single_number_heading_pane_t1_cp2

0x1fd8,	// (0x00035e69) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1fd8,	// (0x00035e69) list_single_number_heading_pane_t2_cp2

0x1fea,	// (0x00035e7b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1fea,	// (0x00035e7b) list_single_number_heading_pane_t3_cp2

0x1fae,	// (0x00035e3f) list_single_heading_pane_g1_cp2_ParamLimits

0x1fae,	// (0x00035e3f) list_single_heading_pane_g1_cp2

0x1fba,	// (0x00035e4b) list_single_heading_pane_g2_cp2

0x1fc2,	// (0x00035e53) list_single_heading_pane_t1_cp2_ParamLimits

0x1fc2,	// (0x00035e53) list_single_heading_pane_t1_cp2

0x31db,	// (0x0003706c) list_single_heading_pane_t2_cp2_ParamLimits

0x31db,	// (0x0003706c) list_single_heading_pane_t2_cp2

0x312b,	// (0x00036fbc) list_double_graphic_pane_g1_cp2_ParamLimits

0x312b,	// (0x00036fbc) list_double_graphic_pane_g1_cp2

0x3137,	// (0x00036fc8) list_double_graphic_pane_g2_cp2_ParamLimits

0x3137,	// (0x00036fc8) list_double_graphic_pane_g2_cp2

0x3146,	// (0x00036fd7) list_double_graphic_pane_g3_cp2

0x314e,	// (0x00036fdf) list_double_graphic_pane_t1_cp2_ParamLimits

0x314e,	// (0x00036fdf) list_double_graphic_pane_t1_cp2

0x3164,	// (0x00036ff5) list_double_graphic_pane_t2_cp2_ParamLimits

0x3164,	// (0x00036ff5) list_double_graphic_pane_t2_cp2

0x2024,	// (0x00035eb5) list_double_number_pane_g1_cp2_ParamLimits

0x2024,	// (0x00035eb5) list_double_number_pane_g1_cp2

0x2030,	// (0x00035ec1) list_double_number_pane_g2_cp2

0x30f1,	// (0x00036f82) list_double_number_pane_t1_cp2_ParamLimits

0x30f1,	// (0x00036f82) list_double_number_pane_t1_cp2

0x3103,	// (0x00036f94) list_double_number_pane_t2_cp2_ParamLimits

0x3103,	// (0x00036f94) list_double_number_pane_t2_cp2

0x3119,	// (0x00036faa) list_double_number_pane_t3_cp2_ParamLimits

0x3119,	// (0x00036faa) list_double_number_pane_t3_cp2

0x3069,	// (0x00036efa) list_single_graphic_pane_g1_cp2_ParamLimits

0x3069,	// (0x00036efa) list_single_graphic_pane_g1_cp2

0x1fae,	// (0x00035e3f) list_single_graphic_pane_g2_cp2_ParamLimits

0x1fae,	// (0x00035e3f) list_single_graphic_pane_g2_cp2

0x1fba,	// (0x00035e4b) list_single_graphic_pane_g3_cp2

0x3041,	// (0x00036ed2) list_single_graphic_pane_t1_cp2_ParamLimits

0x3041,	// (0x00036ed2) list_single_graphic_pane_t1_cp2

0x1fae,	// (0x00035e3f) list_single_number_pane_g1_cp2_ParamLimits

0x1fae,	// (0x00035e3f) list_single_number_pane_g1_cp2

0x1fba,	// (0x00035e4b) list_single_number_pane_g2_cp2

0x3041,	// (0x00036ed2) list_single_number_pane_t1_cp2_ParamLimits

0x3041,	// (0x00036ed2) list_single_number_pane_t1_cp2

0x3057,	// (0x00036ee8) list_single_number_pane_t2_cp2_ParamLimits

0x3057,	// (0x00036ee8) list_single_number_pane_t2_cp2

0x1ed6,	// (0x00035d67) list_double2_pane_g1_cp2_ParamLimits

0x1ed6,	// (0x00035d67) list_double2_pane_g1_cp2

0x1ee5,	// (0x00035d76) list_double2_pane_g2_cp2

0x1ffc,	// (0x00035e8d) list_double2_pane_t1_cp2_ParamLimits

0x1ffc,	// (0x00035e8d) list_double2_pane_t1_cp2

0x2012,	// (0x00035ea3) list_double2_pane_t2_cp2_ParamLimits

0x2012,	// (0x00035ea3) list_double2_pane_t2_cp2

0x2024,	// (0x00035eb5) list_double_pane_g1_cp2_ParamLimits

0x2024,	// (0x00035eb5) list_double_pane_g1_cp2

0x2030,	// (0x00035ec1) list_double_pane_g2_cp2

0x2038,	// (0x00035ec9) list_double_pane_t1_cp2_ParamLimits

0x2038,	// (0x00035ec9) list_double_pane_t1_cp2

0x204e,	// (0x00035edf) list_double_pane_t2_cp2_ParamLimits

0x204e,	// (0x00035edf) list_double_pane_t2_cp2

0x2076,	// (0x00035f07) list_single_pane_cp2_g3

0x1fae,	// (0x00035e3f) list_single_pane_g1_cp2_ParamLimits

0x1fae,	// (0x00035e3f) list_single_pane_g1_cp2

0x1fba,	// (0x00035e4b) list_single_pane_g2_cp2

0x2086,	// (0x00035f17) list_single_pane_t1_cp2_ParamLimits

0x2086,	// (0x00035f17) list_single_pane_t1_cp2

0x209e,	// (0x00035f2f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x209e,	// (0x00035f2f) list_single_large_graphic_pane_g1_cp2

0x20aa,	// (0x00035f3b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x20aa,	// (0x00035f3b) list_single_large_graphic_pane_g2_cp2

0x20b6,	// (0x00035f47) list_single_large_graphic_pane_g3_cp2

0x20be,	// (0x00035f4f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x20be,	// (0x00035f4f) list_single_large_graphic_pane_g4_cp1

0x20d8,	// (0x00035f69) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x20d8,	// (0x00035f69) list_single_large_graphic_pane_t1_cp2

0x3023,	// (0x00036eb4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3023,	// (0x00036eb4) list_single_graphic_heading_pane_g1_cp2

0x2ffe,	// (0x00036e8f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ffe,	// (0x00036e8f) list_single_graphic_heading_pane_g4_cp2

0x1fba,	// (0x00035e4b) list_single_graphic_heading_pane_g5_cp2

0x1fc2,	// (0x00035e53) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1fc2,	// (0x00035e53) list_single_graphic_heading_pane_t1_cp2

0x302f,	// (0x00036ec0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x302f,	// (0x00036ec0) list_single_graphic_heading_pane_t2_cp2

0x2ff2,	// (0x00036e83) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2ff2,	// (0x00036e83) list_single_2graphic_pane_g1_cp2

0x2ffe,	// (0x00036e8f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ffe,	// (0x00036e8f) list_single_2graphic_pane_g2_cp2

0x1fba,	// (0x00035e4b) list_single_2graphic_pane_g3_cp2

0x250d,	// (0x0003639e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x250d,	// (0x0003639e) list_single_2graphic_pane_g4_cp2

0x300d,	// (0x00036e9e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x300d,	// (0x00036e9e) list_single_2graphic_pane_t1_cp2

0xe889,	// (0x0004271a) list_highlight_pane_g10_cp1

0x2c04,	// (0x00036a95) list_highlight_pane_g1_cp1

0x2c0c,	// (0x00036a9d) list_highlight_pane_g2_cp1

0x2c14,	// (0x00036aa5) list_highlight_pane_g3_cp1

0x2c1c,	// (0x00036aad) list_highlight_pane_g4_cp1

0x2c24,	// (0x00036ab5) list_highlight_pane_g5_cp1

0x2c2c,	// (0x00036abd) list_highlight_pane_g6_cp1

0x2c34,	// (0x00036ac5) list_highlight_pane_g7_cp1

0x2c3c,	// (0x00036acd) list_highlight_pane_g8_cp1

0x2c44,	// (0x00036ad5) list_highlight_pane_g9_cp1

0x571b,	// (0x000395ac) form_field_slider_pane_t3

0x5729,	// (0x000395ba) form_field_slider_pane_t4

0x2b4e,	// (0x000369df) slider_form_pane_ParamLimits

0x2b4e,	// (0x000369df) slider_form_pane

0xe90b,	// (0x0004279c) control_abbreviations

0xe90b,	// (0x0004279c) control_conventions

0xe90b,	// (0x0004279c) control_definitions

0xe90b,	// (0x0004279c) format_table_attribute

0x3225,	// (0x000370b6) bg_popup_preview_window_pane_g9

0xe90b,	// (0x0004279c) format_table_data2

0xe90b,	// (0x0004279c) format_table_data3

0xe90b,	// (0x0004279c) format_table_data_example

0x0008,

0xe90b,	// (0x0004279c) intro_purpose

0xf8c8,	// (0x00043759) bg_popup_preview_window_pane_g

0xe90b,	// (0x0004279c) texts_category

0xe90b,	// (0x0004279c) texts_graphics

0x20ee,	// (0x00035f7f) text_digital

0x20fd,	// (0x00035f8e) text_primary

0x210c,	// (0x00035f9d) text_primary_small

0x211b,	// (0x00035fac) text_secondary

0x212a,	// (0x00035fbb) text_title

0x36a2,	// (0x00037533) bg_passive_tab_pane_g1_cp3_srt

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp3_srt

0x3699,	// (0x0003752a) bg_passive_tab_pane_g3_cp3_srt

0xe959,	// (0x000427ea) bg_active_tab_pane_cp3_srt_ParamLimits

0xe959,	// (0x000427ea) bg_active_tab_pane_cp3_srt

0x36ab,	// (0x0003753c) tabs_4_active_pane_srt_g1

0x4e10,	// (0x00038ca1) tabs_4_active_pane_srt_t1_ParamLimits

0x4e10,	// (0x00038ca1) tabs_4_active_pane_srt_t1

0x36a2,	// (0x00037533) bg_active_tab_pane_g1_cp3_copy1

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp3_copy1

0x3699,	// (0x0003752a) bg_active_tab_pane_g3_cp3_copy1

0xe959,	// (0x000427ea) tabs_2_long_active_pane_srt_ParamLimits

0xe959,	// (0x000427ea) tabs_2_long_active_pane_srt

0xe959,	// (0x000427ea) tabs_2_long_passive_pane_srt_ParamLimits

0xe959,	// (0x000427ea) tabs_2_long_passive_pane_srt

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp4_srt

0x35dd,	// (0x0003746e) bg_passive_tab_pane_g1_cp4_srt

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp4_srt

0x35d4,	// (0x00037465) bg_passive_tab_pane_g3_cp4_srt

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp4_srt_ParamLimits

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp4_srt

0x5042,	// (0x00038ed3) tabs_2_long_active_pane_srt_t1_ParamLimits

0x5042,	// (0x00038ed3) tabs_2_long_active_pane_srt_t1

0x35dd,	// (0x0003746e) bg_active_tab_pane_g1_cp4_srt

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp4_srt

0x35d4,	// (0x00037465) bg_active_tab_pane_g3_cp4_srt

0xea94,	// (0x00042925) tabs_3_long_active_pane_srt_ParamLimits

0xea94,	// (0x00042925) tabs_3_long_active_pane_srt

0xea94,	// (0x00042925) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xea94,	// (0x00042925) tabs_3_long_passive_pane_cp_srt

0xea94,	// (0x00042925) tabs_3_long_passive_pane_srt_ParamLimits

0xea94,	// (0x00042925) tabs_3_long_passive_pane_srt

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp5_srt

0x1e93,	// (0x00035d24) bg_passive_tab_pane_g1_cp5_srt

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp5_srt

0x1e8a,	// (0x00035d1b) bg_passive_tab_pane_g3_cp5_srt

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp5_srt_ParamLimits

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp5_srt

0x5061,	// (0x00038ef2) tabs_3_long_active_pane_srt_t1_ParamLimits

0x5061,	// (0x00038ef2) tabs_3_long_active_pane_srt_t1

0x1e93,	// (0x00035d24) bg_active_tab_pane_g1_cp5_srt

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp5_srt

0x1e8a,	// (0x00035d1b) bg_active_tab_pane_g3_cp5_srt

0x35c6,	// (0x00037457) navi_text_pane_srt_t1

0x35be,	// (0x0003744f) navi_icon_pane_srt_g1

0x2242,	// (0x000360d3) midp_editing_number_pane_srt

0x2139,	// (0x00035fca) midp_ticker_pane_srt

0x224a,	// (0x000360db) midp_ticker_pane_srt_g1

0x2252,	// (0x000360e3) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x000435e3) midp_ticker_pane_srt_g

0x225a,	// (0x000360eb) midp_ticker_pane_srt_t1

0x35af,	// (0x00037440) midp_editing_number_pane_t1_copy1

0x525a,	// (0x000390eb) listscroll_midp_pane

0x525a,	// (0x000390eb) midp_form_pane

0x2141,	// (0x00035fd2) midp_info_popup_window_ParamLimits

0x2141,	// (0x00035fd2) midp_info_popup_window

0xf0d2,	// (0x00042f63) bg_popup_sub_pane_cp50_ParamLimits

0xf0d2,	// (0x00042f63) bg_popup_sub_pane_cp50

0x2863,	// (0x000366f4) listscroll_midp_info_pane_ParamLimits

0x2863,	// (0x000366f4) listscroll_midp_info_pane

0x284b,	// (0x000366dc) listscroll_form_midp_pane_ParamLimits

0x284b,	// (0x000366dc) listscroll_form_midp_pane

0x2857,	// (0x000366e8) scroll_bar_cp050

0x5703,	// (0x00039594) list_midp_pane

0x3ec9,	// (0x00037d5a) signal_pane_g2_cp

0x277d,	// (0x0003660e) listscroll_midp_info_pane_t1_ParamLimits

0x277d,	// (0x0003660e) listscroll_midp_info_pane_t1

0x2795,	// (0x00036626) listscroll_midp_info_pane_t2_ParamLimits

0x2795,	// (0x00036626) listscroll_midp_info_pane_t2

0x27d3,	// (0x00036664) listscroll_midp_info_pane_t3_ParamLimits

0x27d3,	// (0x00036664) listscroll_midp_info_pane_t3

0x280d,	// (0x0003669e) listscroll_midp_info_pane_t4_ParamLimits

0x280d,	// (0x0003669e) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x00043694) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x00043694) listscroll_midp_info_pane_t

0xf127,	// (0x00042fb8) scroll_pane_cp21

0x2721,	// (0x000365b2) form_midp_field_choice_group_pane

0x272a,	// (0x000365bb) form_midp_field_text_pane

0x2763,	// (0x000365f4) form_midp_field_time_pane

0x276b,	// (0x000365fc) form_midp_gauge_slider_pane

0x2774,	// (0x00036605) form_midp_gauge_wait_pane

0xe90b,	// (0x0004279c) form_midp_image_pane

0xe276,	// (0x00042107) list_single_midp_pane_ParamLimits

0xe276,	// (0x00042107) list_single_midp_pane

0x26ef,	// (0x00036580) form_midp_field_text_pane_t1

0x2545,	// (0x000363d6) input_focus_pane_cp050

0x2710,	// (0x000365a1) list_midp_form_text_pane

0x26be,	// (0x0003654f) form_midp_field_choice_group_pane_t1

0x26cc,	// (0x0003655d) input_focus_pane_cp051

0x26e0,	// (0x00036571) list_midp_choice_pane

0xe90b,	// (0x0004279c) status_idle_pane

0x26a2,	// (0x00036533) form_midp_field_time_pane_t1

0xe889,	// (0x0004271a) wait_anim_pane_g2_copy1

0x26b0,	// (0x00036541) form_midp_field_time_pane_t2

0x0001,

0x21ac,	// (0x0003603d) aid_navinavi_width_2_pane

0xf7fe,	// (0x0004368f) form_midp_field_time_pane_t

0xe90b,	// (0x0004279c) input_focus_pane_cp052

0xe90b,	// (0x0004279c) bg_input_focus_pane_cp040

0x267e,	// (0x0003650f) form_midp_gauge_slider_pane_t1

0x268c,	// (0x0003651d) form_midp_gauge_slider_pane_t2

0x56e7,	// (0x00039578) form_midp_gauge_slider_pane_t3

0x56f5,	// (0x00039586) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x00043686) form_midp_gauge_slider_pane_t

0x269a,	// (0x0003652b) form_midp_slider_pane

0xe959,	// (0x000427ea) bg_input_focus_pane_cp041_ParamLimits

0xe959,	// (0x000427ea) bg_input_focus_pane_cp041

0x264e,	// (0x000364df) form_midp_gauge_wait_pane_t1_ParamLimits

0x264e,	// (0x000364df) form_midp_gauge_wait_pane_t1

0x2660,	// (0x000364f1) form_midp_gauge_wait_pane_t2_ParamLimits

0x2660,	// (0x000364f1) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x00043681) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x00043681) form_midp_gauge_wait_pane_t

0x2672,	// (0x00036503) form_midp_wait_pane_ParamLimits

0x2672,	// (0x00036503) form_midp_wait_pane

0x2618,	// (0x000364a9) form_midp_image_pane_g1

0x2621,	// (0x000364b2) form_midp_image_pane_t1

0x2630,	// (0x000364c1) form_midp_image_pane_t2

0x263f,	// (0x000364d0) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0004367a) form_midp_image_pane_t

0x260f,	// (0x000364a0) list_single_midp_pane_g1

0xe267,	// (0x000420f8) list_single_midp_pane_t1

0x25fb,	// (0x0003648c) list_midp_form_item_pane_ParamLimits

0x25fb,	// (0x0003648c) list_midp_form_item_pane

0x2154,	// (0x00035fe5) list_midp_form_item_pane_t1

0x2163,	// (0x00035ff4) midp_ticker_pane_g1

0x216f,	// (0x00036000) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x000435c9) midp_ticker_pane_g

0x217b,	// (0x0003600c) midp_ticker_pane_t1

0x35af,	// (0x00037440) midp_editing_number_pane_t1

0x3643,	// (0x000374d4) midp_editing_number_pane

0x364f,	// (0x000374e0) midp_ticker_pane

0x359f,	// (0x00037430) ai_message_heading_pane

0xe90b,	// (0x0004279c) bg_popup_window_pane_cp14

0x35a7,	// (0x00037438) listscroll_ai_message_pane

0x3529,	// (0x000373ba) ai_message_heading_pane_g1_ParamLimits

0x3529,	// (0x000373ba) ai_message_heading_pane_g1

0x3535,	// (0x000373c6) ai_message_heading_pane_g2_ParamLimits

0x3535,	// (0x000373c6) ai_message_heading_pane_g2

0x3541,	// (0x000373d2) ai_message_heading_pane_g3_ParamLimits

0x3541,	// (0x000373d2) ai_message_heading_pane_g3

0x354d,	// (0x000373de) ai_message_heading_pane_g4_ParamLimits

0x354d,	// (0x000373de) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x000437bb) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x000437bb) ai_message_heading_pane_g

0x3559,	// (0x000373ea) ai_message_heading_pane_t1_ParamLimits

0x3559,	// (0x000373ea) ai_message_heading_pane_t1

0x3573,	// (0x00037404) ai_message_heading_pane_t2_ParamLimits

0x3573,	// (0x00037404) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x000437c4) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x000437c4) ai_message_heading_pane_t

0x3585,	// (0x00037416) bg_popup_heading_pane_cp1_ParamLimits

0x3585,	// (0x00037416) bg_popup_heading_pane_cp1

0x3517,	// (0x000373a8) list_ai_message_pane_ParamLimits

0x3517,	// (0x000373a8) list_ai_message_pane

0xf127,	// (0x00042fb8) scroll_pane_cp10

0x34b3,	// (0x00037344) list_ai_message_pane_g1

0x34bb,	// (0x0003734c) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x00043798) list_ai_message_pane_g

0x34c3,	// (0x00037354) list_ai_message_pane_t1_ParamLimits

0x34c3,	// (0x00037354) list_ai_message_pane_t1

0x34d8,	// (0x00037369) list_ai_message_pane_t2_ParamLimits

0x34d8,	// (0x00037369) list_ai_message_pane_t2

0x34ed,	// (0x0003737e) list_ai_message_pane_t3_ParamLimits

0x34ed,	// (0x0003737e) list_ai_message_pane_t3

0x3502,	// (0x00037393) list_ai_message_pane_t4_ParamLimits

0x3502,	// (0x00037393) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0004379d) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0004379d) list_ai_message_pane_t

0x34a1,	// (0x00037332) cell_ai_soft_ind_pane_ParamLimits

0x34a1,	// (0x00037332) cell_ai_soft_ind_pane

0x218d,	// (0x0003601e) cell_ai_soft_ind_pane_g1_ParamLimits

0x218d,	// (0x0003601e) cell_ai_soft_ind_pane_g1

0xe90b,	// (0x0004279c) grid_highlight_cp1

0x219a,	// (0x0003602b) text_secondary_cp56_ParamLimits

0x219a,	// (0x0003602b) text_secondary_cp56

0x3476,	// (0x00037307) example_general_pane_ParamLimits

0x3476,	// (0x00037307) example_general_pane

0x3482,	// (0x00037313) example_parent_pane_g1_ParamLimits

0x3482,	// (0x00037313) example_parent_pane_g1

0x348e,	// (0x0003731f) example_parent_pane_t1_ParamLimits

0x348e,	// (0x0003731f) example_parent_pane_t1

0xbd57,	// (0x0003fbe8) popup_preview_text_window_ParamLimits

0xbd57,	// (0x0003fbe8) popup_preview_text_window

0x207e,	// (0x00035f0f) list_single_pane_cp2_g4

0xeb70,	// (0x00042a01) bg_popup_preview_window_pane_ParamLimits

0xeb70,	// (0x00042a01) bg_popup_preview_window_pane

0x322d,	// (0x000370be) popup_preview_text_window_t1_ParamLimits

0x322d,	// (0x000370be) popup_preview_text_window_t1

0x324b,	// (0x000370dc) popup_preview_text_window_t2_ParamLimits

0x324b,	// (0x000370dc) popup_preview_text_window_t2

0x3294,	// (0x00037125) popup_preview_text_window_t3_ParamLimits

0x3294,	// (0x00037125) popup_preview_text_window_t3

0x32d9,	// (0x0003716a) popup_preview_text_window_t4_ParamLimits

0x32d9,	// (0x0003716a) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0004376c) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0004376c) popup_preview_text_window_t

0x3357,	// (0x000371e8) scroll_pane_cp11

0x24c5,	// (0x00036356) bg_popup_preview_window_pane_g1

0x31ed,	// (0x0003707e) bg_popup_preview_window_pane_g2

0x31f5,	// (0x00037086) bg_popup_preview_window_pane_g3

0x31fd,	// (0x0003708e) bg_popup_preview_window_pane_g4

0x3205,	// (0x00037096) bg_popup_preview_window_pane_g5

0x320d,	// (0x0003709e) bg_popup_preview_window_pane_g6

0x3215,	// (0x000370a6) bg_popup_preview_window_pane_g7

0x321d,	// (0x000370ae) bg_popup_preview_window_pane_g8

0xb218,	// (0x0003f0a9) aid_popup_width_pane

0xbd39,	// (0x0003fbca) popup_midp_note_alarm_window_ParamLimits

0xbd39,	// (0x0003fbca) popup_midp_note_alarm_window

0xefc5,	// (0x00042e56) data_form_pane_ParamLimits

0xdfb3,	// (0x00041e44) form_field_data_pane_g1

0xdfbb,	// (0x00041e4c) form_field_data_pane_t1_ParamLimits

0xefd1,	// (0x00042e62) input_focus_pane_ParamLimits

0xefdf,	// (0x00042e70) data_form_wide_pane_ParamLimits

0xdfd3,	// (0x00041e64) form_field_data_wide_pane_g1

0xdfdf,	// (0x00041e70) form_field_data_wide_pane_t1_ParamLimits

0xed35,	// (0x00042bc6) input_focus_pane_cp6_ParamLimits

0x500e,	// (0x00038e9f) input_popup_find_pane_g1_ParamLimits

0x500e,	// (0x00038e9f) input_popup_find_pane_g1

0xb5e1,	// (0x0003f472) aid_navi_side_left_pane

0xb5f1,	// (0x0003f482) aid_navi_side_right_pane

0x2cd5,	// (0x00036b66) bg_popup_window_pane_cp30_ParamLimits

0x2cd5,	// (0x00036b66) bg_popup_window_pane_cp30

0x2d4f,	// (0x00036be0) popup_midp_note_alarm_window_g1_ParamLimits

0x2d4f,	// (0x00036be0) popup_midp_note_alarm_window_g1

0x2d7f,	// (0x00036c10) popup_midp_note_alarm_window_t1_ParamLimits

0x2d7f,	// (0x00036c10) popup_midp_note_alarm_window_t1

0x2e20,	// (0x00036cb1) popup_midp_note_alarm_window_t2_ParamLimits

0x2e20,	// (0x00036cb1) popup_midp_note_alarm_window_t2

0x2ece,	// (0x00036d5f) popup_midp_note_alarm_window_t3_ParamLimits

0x2ece,	// (0x00036d5f) popup_midp_note_alarm_window_t3

0x2ef6,	// (0x00036d87) popup_midp_note_alarm_window_t4_ParamLimits

0x2ef6,	// (0x00036d87) popup_midp_note_alarm_window_t4

0x2f16,	// (0x00036da7) popup_midp_note_alarm_window_t5_ParamLimits

0x2f16,	// (0x00036da7) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x00043709) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x00043709) popup_midp_note_alarm_window_t

0x2fc2,	// (0x00036e53) wait_bar_pane_cp1_ParamLimits

0x2fc2,	// (0x00036e53) wait_bar_pane_cp1

0xe90b,	// (0x0004279c) wait_anim_pane_copy1

0xe90b,	// (0x0004279c) wait_border_pane_copy1

0x2a1b,	// (0x000368ac) wait_border_pane_g1_copy1

0xdff9,	// (0x00041e8a) form_field_popup_pane_g1

0xe001,	// (0x00041e92) form_field_popup_pane_t1_ParamLimits

0xefd1,	// (0x00042e62) input_focus_pane_cp7_ParamLimits

0xefc5,	// (0x00042e56) list_form_pane_ParamLimits

0xe019,	// (0x00041eaa) form_field_popup_wide_pane_g1

0xe021,	// (0x00041eb2) form_field_popup_wide_pane_t1_ParamLimits

0xefd1,	// (0x00042e62) input_focus_pane_cp8_ParamLimits

0xefff,	// (0x00042e90) list_form_wide_pane_ParamLimits

0x36d2,	// (0x00037563) aid_size_cell_graphic_pane

0xe0ad,	// (0x00041f3e) data_form_pane_t1_ParamLimits

0xe29d,	// (0x0004212e) data_form_wide_pane_t1_ParamLimits

0x544d,	// (0x000392de) bg_status_flat_pane

0x4d8e,	// (0x00038c1f) title_pane_t1_ParamLimits

0xe921,	// (0x000427b2) title_pane_t2_ParamLimits

0xe947,	// (0x000427d8) title_pane_t3_ParamLimits

0xf532,	// (0x000433c3) title_pane_t_ParamLimits

0x50ff,	// (0x00038f90) level_1_signal_ParamLimits

0x510c,	// (0x00038f9d) level_2_signal_ParamLimits

0x5119,	// (0x00038faa) level_3_signal_ParamLimits

0x5126,	// (0x00038fb7) level_4_signal_ParamLimits

0x5133,	// (0x00038fc4) level_5_signal_ParamLimits

0x5140,	// (0x00038fd1) level_6_signal_ParamLimits

0x514d,	// (0x00038fde) level_7_signal_ParamLimits

0x50ff,	// (0x00038f90) level_1_battery_ParamLimits

0x510c,	// (0x00038f9d) level_2_battery_ParamLimits

0x5119,	// (0x00038faa) level_3_battery_ParamLimits

0x5126,	// (0x00038fb7) level_4_battery_ParamLimits

0x5133,	// (0x00038fc4) level_5_battery_ParamLimits

0x5140,	// (0x00038fd1) level_6_battery_ParamLimits

0x514d,	// (0x00038fde) level_7_battery_ParamLimits

0x2c04,	// (0x00036a95) bg_status_flat_pane_g1

0x2c0c,	// (0x00036a9d) bg_status_flat_pane_g2

0x2c14,	// (0x00036aa5) bg_status_flat_pane_g3

0x2c1c,	// (0x00036aad) bg_status_flat_pane_g4

0x2c24,	// (0x00036ab5) bg_status_flat_pane_g5

0x2c2c,	// (0x00036abd) bg_status_flat_pane_g6

0x2c34,	// (0x00036ac5) bg_status_flat_pane_g7

0x4df6,	// (0x00038c87) tabs_3_active_pane_t1_ParamLimits

0x4df6,	// (0x00038c87) tabs_3_passive_pane_t1_ParamLimits

0x4e10,	// (0x00038ca1) tabs_4_active_pane_t1_ParamLimits

0x4e10,	// (0x00038ca1) tabs_4_1_passive_pane_t1_ParamLimits

0x5022,	// (0x00038eb3) tabs_2_active_pane_t1_ParamLimits

0x5022,	// (0x00038eb3) tabs_2_passive_pane_t1_ParamLimits

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp4_ParamLimits

0x5042,	// (0x00038ed3) tabs_2_long_active_pane_t1_ParamLimits

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp4_ParamLimits

0xbfbb,	// (0x0003fe4c) list_single_midp_graphic_pane_t1_ParamLimits

0x5034,	// (0x00038ec5) bg_active_tab_pane_cp5_ParamLimits

0x5061,	// (0x00038ef2) tabs_3_long_active_pane_t1_ParamLimits

0x5055,	// (0x00038ee6) bg_passive_tab_pane_cp5_ParamLimits

0xbfbb,	// (0x0003fe4c) list_single_midp_graphic_pane_t1

0x544d,	// (0x000392de) bg_status_flat_pane_ParamLimits

0x23a4,	// (0x00036235) indicator_pane_cp2_ParamLimits

0x23a4,	// (0x00036235) indicator_pane_cp2

0x5596,	// (0x00039427) navi_pane_srt_ParamLimits

0x5596,	// (0x00039427) navi_pane_srt

0x23cc,	// (0x0003625d) popup_clock_digital_analogue_window_cp1

0xe9a5,	// (0x00042836) indicator_pane_t1

0x2139,	// (0x00035fca) copy_highlight_pane

0x2139,	// (0x00035fca) cursor_graphics_pane

0x2139,	// (0x00035fca) graphic_within_text_pane

0x2139,	// (0x00035fca) link_highlight_pane

0x331a,	// (0x000371ab) popup_preview_text_window_t5_ParamLimits

0x331a,	// (0x000371ab) popup_preview_text_window_t5

0x21b4,	// (0x00036045) cursor_digital_pane

0x21b4,	// (0x00036045) cursor_primary_pane

0x21c5,	// (0x00036056) cursor_primary_small_pane

0x21cd,	// (0x0003605e) cursor_secondary_pane

0x21d5,	// (0x00036066) cursor_title_pane

0x21b4,	// (0x00036045) link_highlight_digital_pane

0x21bc,	// (0x0003604d) link_highlight_primary_pane

0x21c5,	// (0x00036056) link_highlight_primary_small_pane

0x21cd,	// (0x0003605e) link_highlight_secondary_pane

0x21d5,	// (0x00036066) link_highlight_title_pane

0x21b4,	// (0x00036045) copy_highlight_digital_pane

0x21b4,	// (0x00036045) copy_highlight_primary_pane

0x21c5,	// (0x00036056) copy_highlight_primary_small_pane

0x21cd,	// (0x0003605e) copy_highlight_secondary_pane

0x21d5,	// (0x00036066) copy_highlight_title_pane

0x21cd,	// (0x0003605e) graphic_text_digital_pane

0x2c84,	// (0x00036b15) graphic_text_primary_pane

0x2c8d,	// (0x00036b1e) graphic_text_primary_small_pane

0x21c5,	// (0x00036056) graphic_text_secondary_pane

0x21b4,	// (0x00036045) graphic_text_title_pane

0x5301,	// (0x00039192) cursor_primary_pane_g1

0x2c76,	// (0x00036b07) cursor_text_primary_t1

0x5747,	// (0x000395d8) cursor_primary_small_pane_g1

0x2c68,	// (0x00036af9) cursor_text_primary_small_t1

0x573f,	// (0x000395d0) cursor_primary_small_pane_g1_copy1

0x2c5a,	// (0x00036aeb) cursor_text_primary_small_t1_copy1

0x2c4c,	// (0x00036add) cursor_text_title_t1

0x5737,	// (0x000395c8) cursor_title_pane_g1

0x5301,	// (0x00039192) cursor_digital_pane_g1

0x21dd,	// (0x0003606e) cursor_text_digital_t1

0x21eb,	// (0x0003607c) link_highlight_primary_pane_g1

0x2bf5,	// (0x00036a86) link_highlight_primary_pane_t1

0x21eb,	// (0x0003607c) link_highlight_primary_small_pane_g1

0x21f3,	// (0x00036084) link_highlight_primary_small_pane_t1

0x2202,	// (0x00036093) link_highlight_secondary_pane_g1

0x220a,	// (0x0003609b) link_highlight_secondary_pane_t1

0x2b5a,	// (0x000369eb) link_highlight_title_pane_g1

0x2b71,	// (0x00036a02) link_highlight_title_pane_t1

0x2b5a,	// (0x000369eb) link_highlight_digital_pane_g1

0x2b62,	// (0x000369f3) link_highlight_digital_pane_t1

0x2a36,	// (0x000368c7) copy_highlight_primary_pane_g1

0x2a5c,	// (0x000368ed) copy_highlight_primary_pane_t1

0x2a36,	// (0x000368c7) copy_highlight_primary_small_pane_g1

0x2a4d,	// (0x000368de) copy_highlight_primary_small_pane_t1

0x2219,	// (0x000360aa) copy_highlight_secondary_pane_g1

0x2221,	// (0x000360b2) copy_highlight_secondary_pane_t1

0x2a36,	// (0x000368c7) copy_highlight_title_pane_g1

0x2a3e,	// (0x000368cf) copy_highlight_title_pane_t1

0x2a36,	// (0x000368c7) copy_highlight_digital_pane_g1

0x37f3,	// (0x00037684) copy_highlight_digital_pane_t1

0x3747,	// (0x000375d8) graphic_text_primary_pane_g1

0x37d7,	// (0x00037668) graphic_text_primary_pane_t1

0x37e5,	// (0x00037676) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x00043833) graphic_text_primary_pane_t

0x37b3,	// (0x00037644) graphic_text_primary_small_pane_g1

0x37bb,	// (0x0003764c) graphic_text_primary_small_pane_t1

0x37c9,	// (0x0003765a) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x0004382e) graphic_text_primary_small_pane_t

0x378f,	// (0x00037620) graphic_text_secondary_pane_g1

0x3797,	// (0x00037628) graphic_text_secondary_pane_t1

0x37a5,	// (0x00037636) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x00043829) graphic_text_secondary_pane_t

0x376b,	// (0x000375fc) graphic_text_title_pane_g1

0x3773,	// (0x00037604) graphic_text_title_pane_t1

0x3781,	// (0x00037612) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x00043824) graphic_text_title_pane_t

0x3747,	// (0x000375d8) graphic_text_digital_pane_g1

0x374f,	// (0x000375e0) graphic_text_digital_pane_t1

0x375d,	// (0x000375ee) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x0004381f) graphic_text_digital_pane_t

0xe959,	// (0x000427ea) navi_icon_pane_srt_ParamLimits

0xe959,	// (0x000427ea) navi_icon_pane_srt

0xe90b,	// (0x0004279c) navi_midp_pane_srt

0xe90b,	// (0x0004279c) navi_navi_pane_srt

0xe959,	// (0x000427ea) navi_text_pane_srt_ParamLimits

0xe959,	// (0x000427ea) navi_text_pane_srt

0x31a6,	// (0x00037037) navi_navi_icon_text_pane_srt

0x31c0,	// (0x00037051) navi_navi_pane_srt_g1_ParamLimits

0x31c0,	// (0x00037051) navi_navi_pane_srt_g1

0x31ae,	// (0x0003703f) navi_navi_pane_srt_g2_ParamLimits

0x31ae,	// (0x0003703f) navi_navi_pane_srt_g2

0x0001,

0xf8c3,	// (0x00043754) navi_navi_pane_srt_g_ParamLimits

0xf8c3,	// (0x00043754) navi_navi_pane_srt_g

0x31d2,	// (0x00037063) navi_navi_tabs_pane_srt

0x31a6,	// (0x00037037) navi_navi_text_pane_srt

0x31a6,	// (0x00037037) navi_navi_volume_pane_srt

0x3738,	// (0x000375c9) navi_navi_text_pane_srt_t1

0xc31f,	// (0x000401b0) navi_navi_volume_pane_srt_g1

0xc327,	// (0x000401b8) volume_small_pane_srt_ParamLimits

0xc327,	// (0x000401b8) volume_small_pane_srt

0xb888,	// (0x0003f719) volume_small_pane_srt_g1_ParamLimits

0xb888,	// (0x0003f719) volume_small_pane_srt_g1

0xb898,	// (0x0003f729) volume_small_pane_srt_g2_ParamLimits

0xb898,	// (0x0003f729) volume_small_pane_srt_g2

0xb8a9,	// (0x0003f73a) volume_small_pane_srt_g3_ParamLimits

0xb8a9,	// (0x0003f73a) volume_small_pane_srt_g3

0xb8ba,	// (0x0003f74b) volume_small_pane_srt_g4_ParamLimits

0xb8ba,	// (0x0003f74b) volume_small_pane_srt_g4

0xb8cb,	// (0x0003f75c) volume_small_pane_srt_g5_ParamLimits

0xb8cb,	// (0x0003f75c) volume_small_pane_srt_g5

0xb8dc,	// (0x0003f76d) volume_small_pane_srt_g6_ParamLimits

0xb8dc,	// (0x0003f76d) volume_small_pane_srt_g6

0xb8ed,	// (0x0003f77e) volume_small_pane_srt_g7_ParamLimits

0xb8ed,	// (0x0003f77e) volume_small_pane_srt_g7

0xb8fe,	// (0x0003f78f) volume_small_pane_srt_g8_ParamLimits

0xb8fe,	// (0x0003f78f) volume_small_pane_srt_g8

0xb90f,	// (0x0003f7a0) volume_small_pane_srt_g9_ParamLimits

0xb90f,	// (0x0003f7a0) volume_small_pane_srt_g9

0xb920,	// (0x0003f7b1) volume_small_pane_srt_g10_ParamLimits

0xb920,	// (0x0003f7b1) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x000435ce) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x000435ce) volume_small_pane_srt_g

0xec19,	// (0x00042aaa) query_popup_data_pane_cp2

0x371e,	// (0x000375af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x371e,	// (0x000375af) navi_navi_icon_text_pane_srt_t1

0x2c84,	// (0x00036b15) navi_tabs_2_long_pane_srt

0x2c84,	// (0x00036b15) navi_tabs_2_pane_srt

0x2c84,	// (0x00036b15) navi_tabs_3_long_pane_srt

0x2c84,	// (0x00036b15) navi_tabs_3_pane_srt

0x2c84,	// (0x00036b15) navi_tabs_4_pane_srt

0xc2ff,	// (0x00040190) tabs_2_active_pane_srt_ParamLimits

0xc2ff,	// (0x00040190) tabs_2_active_pane_srt

0xc30f,	// (0x000401a0) tabs_2_passive_pane_srt_ParamLimits

0xc30f,	// (0x000401a0) tabs_2_passive_pane_srt

0x01e5,	// (0x00034076) bg_passive_tab_pane_cp1_srt_ParamLimits

0x01e5,	// (0x00034076) bg_passive_tab_pane_cp1_srt

0x3705,	// (0x00037596) bg_passive_tab_pane_g1_cp1_srt

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp1_srt

0x36fc,	// (0x0003758d) bg_passive_tab_pane_g3_cp1_srt

0xe959,	// (0x000427ea) bg_active_tab_pane_cp1_srt_ParamLimits

0xe959,	// (0x000427ea) bg_active_tab_pane_cp1_srt

0x370e,	// (0x0003759f) tabs_2_active_pane_srt_g1

0x5022,	// (0x00038eb3) tabs_2_active_pane_srt_t1_ParamLimits

0x5022,	// (0x00038eb3) tabs_2_active_pane_srt_t1

0x3705,	// (0x00037596) bg_active_tab_pane_g1_cp1_srt

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp1_srt

0x36fc,	// (0x0003758d) bg_active_tab_pane_g3_cp1_srt

0xc2cc,	// (0x0004015d) tabs_3_active_pane_srt_ParamLimits

0xc2cc,	// (0x0004015d) tabs_3_active_pane_srt

0xc2dd,	// (0x0004016e) tabs_3_passive_pane_cp_srt_ParamLimits

0xc2dd,	// (0x0004016e) tabs_3_passive_pane_cp_srt

0xc2ee,	// (0x0004017f) tabs_3_passive_pane_srt_ParamLimits

0xc2ee,	// (0x0004017f) tabs_3_passive_pane_srt

0x01e5,	// (0x00034076) bg_passive_tab_pane_cp2_srt_ParamLimits

0x01e5,	// (0x00034076) bg_passive_tab_pane_cp2_srt

0x2239,	// (0x000360ca) bg_passive_tab_pane_g1_cp2_srt

0x1e43,	// (0x00035cd4) bg_passive_tab_pane_g2_cp2_srt

0x2230,	// (0x000360c1) bg_passive_tab_pane_g3_cp2_srt

0xe959,	// (0x000427ea) bg_active_tab_pane_cp2_srt_ParamLimits

0xe959,	// (0x000427ea) bg_active_tab_pane_cp2_srt

0x36f4,	// (0x00037585) tabs_3_active_pane_srt_g1

0x4df6,	// (0x00038c87) tabs_3_active_pane_srt_t1_ParamLimits

0x4df6,	// (0x00038c87) tabs_3_active_pane_srt_t1

0x2239,	// (0x000360ca) bg_active_tab_pane_g1_cp2_srt

0x1e43,	// (0x00035cd4) bg_active_tab_pane_g2_cp2_srt

0x2230,	// (0x000360c1) bg_active_tab_pane_g3_cp2_srt

0xc284,	// (0x00040115) tabs_4_active_pane_srt_ParamLimits

0xc284,	// (0x00040115) tabs_4_active_pane_srt

0xc296,	// (0x00040127) tabs_4_passive_pane_cp2_srt_ParamLimits

0xc296,	// (0x00040127) tabs_4_passive_pane_cp2_srt

0xba85,	// (0x0003f916) aid_size_cell_toolbar

0x5055,	// (0x00038ee6) main_idle_act_pane_ParamLimits

0xbbf4,	// (0x0003fa85) popup_large_graphic_colour_window_ParamLimits

0xbea8,	// (0x0003fd39) popup_toolbar_window_ParamLimits

0xbea8,	// (0x0003fd39) popup_toolbar_window

0xe2e2,	// (0x00042173) list_single_graphic_2heading_pane_ParamLimits

0xe2e2,	// (0x00042173) list_single_graphic_2heading_pane

0xf317,	// (0x000431a8) aid_size_cell_apps_grid_lsc_pane

0xf329,	// (0x000431ba) aid_size_cell_apps_grid_prt_pane

0x01e5,	// (0x00034076) bg_wml_button_pane_cp1_ParamLimits

0x01e5,	// (0x00034076) bg_wml_button_pane_cp1

0x26ef,	// (0x00036580) form_midp_field_text_pane_t1_ParamLimits

0x2545,	// (0x000363d6) input_focus_pane_cp050_ParamLimits

0x2710,	// (0x000365a1) list_midp_form_text_pane_ParamLimits

0x26cc,	// (0x0003655d) input_focus_pane_cp051_ParamLimits

0x26e0,	// (0x00036571) list_midp_choice_pane_ParamLimits

0x25c9,	// (0x0003645a) list_single_2graphic_pane_cp3_ParamLimits

0x25c9,	// (0x0003645a) list_single_2graphic_pane_cp3

0x25dc,	// (0x0003646d) list_single_midp_graphic_pane_ParamLimits

0x25dc,	// (0x0003646d) list_single_midp_graphic_pane

0xb1a6,	// (0x0003f037) list_single_graphic_2heading_pane_g1_ParamLimits

0xb1a6,	// (0x0003f037) list_single_graphic_2heading_pane_g1

0xb1b2,	// (0x0003f043) list_single_graphic_2heading_pane_g4_ParamLimits

0xb1b2,	// (0x0003f043) list_single_graphic_2heading_pane_g4

0xb1be,	// (0x0003f04f) list_single_graphic_2heading_pane_g5_ParamLimits

0xb1be,	// (0x0003f04f) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00043621) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00043621) list_single_graphic_2heading_pane_g

0xb1ca,	// (0x0003f05b) list_single_graphic_2heading_pane_t1_ParamLimits

0xb1ca,	// (0x0003f05b) list_single_graphic_2heading_pane_t1

0xb1de,	// (0x0003f06f) list_single_graphic_2heading_pane_t2_ParamLimits

0xb1de,	// (0x0003f06f) list_single_graphic_2heading_pane_t2

0xb1f8,	// (0x0003f089) list_single_graphic_2heading_pane_t3_ParamLimits

0xb1f8,	// (0x0003f089) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00043628) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00043628) list_single_graphic_2heading_pane_t

0x240f,	// (0x000362a0) bg_popup_sub_pane_cp2

0x2435,	// (0x000362c6) grid_toobar_pane

0xbf37,	// (0x0003fdc8) cell_toolbar_pane_ParamLimits

0xbf37,	// (0x0003fdc8) cell_toolbar_pane

0x246b,	// (0x000362fc) cell_toolbar_pane_g1_ParamLimits

0x246b,	// (0x000362fc) cell_toolbar_pane_g1

0x247d,	// (0x0003630e) cell_toolbar_pane_g2_ParamLimits

0x247d,	// (0x0003630e) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0004362f) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0004362f) cell_toolbar_pane_g

0x249f,	// (0x00036330) grid_highlight_pane_cp2_ParamLimits

0x249f,	// (0x00036330) grid_highlight_pane_cp2

0x24b9,	// (0x0003634a) toolbar_button_pane

0x24c5,	// (0x00036356) toolbar_button_pane_g1

0x24d5,	// (0x00036366) toolbar_button_pane_g2

0x24cd,	// (0x0003635e) toolbar_button_pane_g3

0x24e5,	// (0x00036376) toolbar_button_pane_g4

0x24dd,	// (0x0003636e) toolbar_button_pane_g5

0x24ed,	// (0x0003637e) toolbar_button_pane_g6

0x24f5,	// (0x00036386) toolbar_button_pane_g7

0x2505,	// (0x00036396) toolbar_button_pane_g8

0x24fd,	// (0x0003638e) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x00043634) toolbar_button_pane_g

0xbf66,	// (0x0003fdf7) list_single_2graphic_pane_g1_cp3_ParamLimits

0xbf66,	// (0x0003fdf7) list_single_2graphic_pane_g1_cp3

0xbf72,	// (0x0003fe03) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbf72,	// (0x0003fe03) list_single_2graphic_pane_g2_cp3

0xbf81,	// (0x0003fe12) list_single_2graphic_pane_g3_cp3

0xbf89,	// (0x0003fe1a) list_single_2graphic_pane_g4_cp3_ParamLimits

0xbf89,	// (0x0003fe1a) list_single_2graphic_pane_g4_cp3

0xbf95,	// (0x0003fe26) list_single_2graphic_pane_t1_cp3_ParamLimits

0xbf95,	// (0x0003fe26) list_single_2graphic_pane_t1_cp3

0xbfaf,	// (0x0003fe40) list_single_midp_graphic_pane_g2_ParamLimits

0xbfaf,	// (0x0003fe40) list_single_midp_graphic_pane_g2

0xb19e,	// (0x0003f02f) aid_zoom_text_primary

0xba8d,	// (0x0003f91e) aid_zoom_text_secondary

0x5339,	// (0x000391ca) status_small_pane_g7_ParamLimits

0x5339,	// (0x000391ca) status_small_pane_g7

0x535c,	// (0x000391ed) status_small_pane_t1_ParamLimits

0x4d71,	// (0x00038c02) title_pane_g2

0x0003,

0xf529,	// (0x000433ba) title_pane_g

0x4f39,	// (0x00038dca) aid_size_cell_colour_1_pane_ParamLimits

0x4f39,	// (0x00038dca) aid_size_cell_colour_1_pane

0x4f4d,	// (0x00038dde) aid_size_cell_colour_2_pane_ParamLimits

0x4f4d,	// (0x00038dde) aid_size_cell_colour_2_pane

0x4f61,	// (0x00038df2) aid_size_cell_colour_3_pane_ParamLimits

0x4f61,	// (0x00038df2) aid_size_cell_colour_3_pane

0x4f75,	// (0x00038e06) aid_size_cell_colour_4_pane_ParamLimits

0x4f75,	// (0x00038e06) aid_size_cell_colour_4_pane

0xb543,	// (0x0003f3d4) title_pane_stacon_g1_ParamLimits

0xb543,	// (0x0003f3d4) title_pane_stacon_g1

0x2ab3,	// (0x00036944) popup_note_wait_window_g3_ParamLimits

0x2ab3,	// (0x00036944) popup_note_wait_window_g3

0x2b29,	// (0x000369ba) popup_note_wait_window_t5_ParamLimits

0x2b29,	// (0x000369ba) popup_note_wait_window_t5

0xe90b,	// (0x0004279c) main_feb_china_hwr_fs_writing_pane

0xbb09,	// (0x0003f99a) popup_feb_china_hwr_fs_window_ParamLimits

0xbb09,	// (0x0003f99a) popup_feb_china_hwr_fs_window

0xbfd1,	// (0x0003fe62) aid_size_cell_hwr_fs_ParamLimits

0xbfd1,	// (0x0003fe62) aid_size_cell_hwr_fs

0x2545,	// (0x000363d6) bg_popup_sub_pane_cp3_ParamLimits

0x2545,	// (0x000363d6) bg_popup_sub_pane_cp3

0xbfe6,	// (0x0003fe77) grid_hwr_fs_pane_ParamLimits

0xbfe6,	// (0x0003fe77) grid_hwr_fs_pane

0xbffa,	// (0x0003fe8b) linegrid_hwr_fs_pane_ParamLimits

0xbffa,	// (0x0003fe8b) linegrid_hwr_fs_pane

0xc00a,	// (0x0003fe9b) cell_hwr_fs_pane_ParamLimits

0xc00a,	// (0x0003fe9b) cell_hwr_fs_pane

0x2551,	// (0x000363e2) linegrid_hwr_fs_pane_g1_ParamLimits

0x2551,	// (0x000363e2) linegrid_hwr_fs_pane_g1

0x56bb,	// (0x0003954c) linegrid_hwr_fs_pane_g2_ParamLimits

0x56bb,	// (0x0003954c) linegrid_hwr_fs_pane_g2

0x255d,	// (0x000363ee) linegrid_hwr_fs_pane_g3_ParamLimits

0x255d,	// (0x000363ee) linegrid_hwr_fs_pane_g3

0xc028,	// (0x0003feb9) linegrid_hwr_fs_pane_g4_ParamLimits

0xc028,	// (0x0003feb9) linegrid_hwr_fs_pane_g4

0xc042,	// (0x0003fed3) linegrid_hwr_fs_pane_g5_ParamLimits

0xc042,	// (0x0003fed3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0004365f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0004365f) linegrid_hwr_fs_pane_g

0x2569,	// (0x000363fa) cell_hwr_fs_pane_g1_ParamLimits

0x2569,	// (0x000363fa) cell_hwr_fs_pane_g1

0x23dd,	// (0x0003626e) cell_hwr_fs_pane_g2_ParamLimits

0x23dd,	// (0x0003626e) cell_hwr_fs_pane_g2

0x56cd,	// (0x0003955e) cell_hwr_fs_pane_g3_ParamLimits

0x56cd,	// (0x0003955e) cell_hwr_fs_pane_g3

0x56da,	// (0x0003956b) cell_hwr_fs_pane_g4_ParamLimits

0x56da,	// (0x0003956b) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0004366a) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0004366a) cell_hwr_fs_pane_g

0xc058,	// (0x0003fee9) cell_hwr_fs_pane_t1

0xe90b,	// (0x0004279c) grid_highlight_pane_cp6

0xe90b,	// (0x0004279c) main_idle_act2_pane

0xf10e,	// (0x00042f9f) aid_inside_area_popup_secondary

0x5765,	// (0x000395f6) aid_inside_area_window_primary_ParamLimits

0x5765,	// (0x000395f6) aid_inside_area_window_primary

0x3802,	// (0x00037693) ai2_news_ticker_pane

0x380a,	// (0x0003769b) aid_size_cell_ai1_link_ParamLimits

0x380a,	// (0x0003769b) aid_size_cell_ai1_link

0x624d,	// (0x0003a0de) popup_ai2_data_window_ParamLimits

0x624d,	// (0x0003a0de) popup_ai2_data_window

0x3824,	// (0x000376b5) popup_ai2_link_window_ParamLimits

0x3824,	// (0x000376b5) popup_ai2_link_window

0x2545,	// (0x000363d6) bg_popup_sub_pane_cp4_ParamLimits

0x2545,	// (0x000363d6) bg_popup_sub_pane_cp4

0x3838,	// (0x000376c9) grid_ai2_link_pane_ParamLimits

0x3838,	// (0x000376c9) grid_ai2_link_pane

0x384f,	// (0x000376e0) popup_ai2_link_window_g1_ParamLimits

0x384f,	// (0x000376e0) popup_ai2_link_window_g1

0x385b,	// (0x000376ec) popup_ai2_link_window_g2_ParamLimits

0x385b,	// (0x000376ec) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x00043838) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x00043838) popup_ai2_link_window_g

0x386a,	// (0x000376fb) ai2_mp_button_pane

0x3872,	// (0x00037703) ai2_mp_volume_pane

0x26cc,	// (0x0003655d) bg_popup_sub_pane_cp5_ParamLimits

0x26cc,	// (0x0003655d) bg_popup_sub_pane_cp5

0x387a,	// (0x0003770b) heading_ai2_gene_pane_ParamLimits

0x387a,	// (0x0003770b) heading_ai2_gene_pane

0x3886,	// (0x00037717) list_ai2_gene_pane_ParamLimits

0x3886,	// (0x00037717) list_ai2_gene_pane

0x38ce,	// (0x0003775f) cell_ai2_link_pane_ParamLimits

0x38ce,	// (0x0003775f) cell_ai2_link_pane

0x38e4,	// (0x00037775) cell_ai2_link_pane_g1

0xe90b,	// (0x0004279c) grid_highlight_pane_cp7

0xc33c,	// (0x000401cd) ai2_mp_volume_pane_g1

0x3989,	// (0x0003781a) ai2_mp_volume_pane_g2

0x6278,	// (0x0003a109) list_ai2_gene_pane_t1

0x3981,	// (0x00037812) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x00043851) ai2_mp_volume_pane_g

0xc344,	// (0x000401d5) volume_small_pane_cp3

0x3991,	// (0x00037822) aid_size_cell_ai2_button

0x3999,	// (0x0003782a) grid_ai2_button_pane

0x39a2,	// (0x00037833) cell_ai2_button_pane_ParamLimits

0x39a2,	// (0x00037833) cell_ai2_button_pane

0xe889,	// (0x0004271a) cell_ai2_button_pane_g1

0xe90b,	// (0x0004279c) grid_highlight_pane_cp8

0x3941,	// (0x000377d2) ai2_gene_pane_t1_ParamLimits

0x3941,	// (0x000377d2) ai2_gene_pane_t1

0xba7b,	// (0x0003f90c) aid_height_parent_landscape

0x35fb,	// (0x0003748c) aid_height_set_list

0x3607,	// (0x00037498) aid_size_parent

0x36d2,	// (0x00037563) aid_size_cell_graphic_pane_ParamLimits

0x3896,	// (0x00037727) popup_ai2_data_window_g1_ParamLimits

0x3896,	// (0x00037727) popup_ai2_data_window_g1

0x38a2,	// (0x00037733) ai2_news_ticker_pane_g1

0x38aa,	// (0x0003773b) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x0004383d) ai2_news_ticker_pane_g

0x38b2,	// (0x00037743) ai2_news_ticker_pane_t1

0x38c0,	// (0x00037751) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x00043842) ai2_news_ticker_pane_t

0x38ed,	// (0x0003777e) heading_ai2_gene_pane_g1

0x38f5,	// (0x00037786) heading_ai2_gene_pane_t1_ParamLimits

0x38f5,	// (0x00037786) heading_ai2_gene_pane_t1

0x390a,	// (0x0003779b) list_highlight_pane_cp6

0x6261,	// (0x0003a0f2) ai2_gene_pane_ParamLimits

0x6261,	// (0x0003a0f2) ai2_gene_pane

0x6286,	// (0x0003a117) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x00043847) list_ai2_gene_pane_t

0x3912,	// (0x000377a3) list_highlight_pane_cp8_ParamLimits

0x3912,	// (0x000377a3) list_highlight_pane_cp8

0x3923,	// (0x000377b4) ai2_gene_pane_g1_ParamLimits

0x3923,	// (0x000377b4) ai2_gene_pane_g1

0x3935,	// (0x000377c6) ai2_gene_pane_g2_ParamLimits

0x3935,	// (0x000377c6) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0004384c) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0004384c) ai2_gene_pane_g

0xeeb6,	// (0x00042d47) scroll_pane_cp12

0xba32,	// (0x0003f8c3) control_pane_t3_ParamLimits

0xba32,	// (0x0003f8c3) control_pane_t3

0x534d,	// (0x000391de) status_small_pane_g8_ParamLimits

0x534d,	// (0x000391de) status_small_pane_g8

0xbbc9,	// (0x0003fa5a) popup_find_window_ParamLimits

0xbd4b,	// (0x0003fbdc) popup_note_image_window_ParamLimits

0xdc5e,	// (0x00041aef) list_double2_graphic_pane_vc_g1_ParamLimits

0xdc5e,	// (0x00041aef) list_double2_graphic_pane_vc_g1

0xef50,	// (0x00042de1) list_double2_graphic_pane_vc_g2_ParamLimits

0xef50,	// (0x00042de1) list_double2_graphic_pane_vc_g2

0xef5c,	// (0x00042ded) list_double2_graphic_pane_vc_g3_ParamLimits

0xef5c,	// (0x00042ded) list_double2_graphic_pane_vc_g3

0x0002,

0xf5f5,	// (0x00043486) list_double2_graphic_pane_vc_g_ParamLimits

0xf5f5,	// (0x00043486) list_double2_graphic_pane_vc_g

0xdc6a,	// (0x00041afb) list_double2_graphic_pane_vc_t1_ParamLimits

0xdc6a,	// (0x00041afb) list_double2_graphic_pane_vc_t1

0xef50,	// (0x00042de1) list_single_heading_pane_vc_g1_ParamLimits

0xef50,	// (0x00042de1) list_single_heading_pane_vc_g1

0xef5c,	// (0x00042ded) list_single_heading_pane_vc_g2_ParamLimits

0xef5c,	// (0x00042ded) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x00043649) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x00043649) list_single_heading_pane_vc_g

0xe1c3,	// (0x00042054) list_single_heading_pane_vc_t1_ParamLimits

0xe1c3,	// (0x00042054) list_single_heading_pane_vc_t1

0xe1d9,	// (0x0004206a) list_single_heading_pane_vc_t2_ParamLimits

0xe1d9,	// (0x0004206a) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0004364e) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0004364e) list_single_heading_pane_vc_t

0xe1eb,	// (0x0004207c) list_setting_number_pane_vc_g1_ParamLimits

0xe1eb,	// (0x0004207c) list_setting_number_pane_vc_g1

0xe1f7,	// (0x00042088) list_setting_number_pane_vc_g2_ParamLimits

0xe1f7,	// (0x00042088) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x00043653) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x00043653) list_setting_number_pane_vc_g

0xe203,	// (0x00042094) list_setting_number_pane_vc_t1_ParamLimits

0xe203,	// (0x00042094) list_setting_number_pane_vc_t1

0xe217,	// (0x000420a8) list_setting_number_pane_vc_t2_ParamLimits

0xe217,	// (0x000420a8) list_setting_number_pane_vc_t2

0xe233,	// (0x000420c4) list_setting_number_pane_vc_t3_ParamLimits

0xe233,	// (0x000420c4) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x00043658) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x00043658) list_setting_number_pane_vc_t

0xe25b,	// (0x000420ec) set_value_pane_vc_ParamLimits

0xe25b,	// (0x000420ec) set_value_pane_vc

0xe2e2,	// (0x00042173) list_double2_graphic_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double2_graphic_pane_vc

0x09aa,	// (0x0003483b) list_double2_large_graphic_pane_vc_ParamLimits

0x09aa,	// (0x0003483b) list_double2_large_graphic_pane_vc

0xe2e2,	// (0x00042173) list_double2_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double2_pane_vc

0xe2e2,	// (0x00042173) list_double_graphic_heading_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double_graphic_heading_pane_vc

0xe2e2,	// (0x00042173) list_double_graphic_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double_graphic_pane_vc

0xe2e2,	// (0x00042173) list_double_heading_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double_heading_pane_vc

0x09bb,	// (0x0003484c) list_double_large_graphic_pane_vc_ParamLimits

0x09bb,	// (0x0003484c) list_double_large_graphic_pane_vc

0xe2e2,	// (0x00042173) list_double_number_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double_number_pane_vc

0xe2e2,	// (0x00042173) list_double_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double_pane_vc

0xe2e2,	// (0x00042173) list_double_time_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_double_time_pane_vc

0xe2e2,	// (0x00042173) list_setting_number_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_setting_number_pane_vc

0xe2e2,	// (0x00042173) list_setting_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_setting_pane_vc

0xe2e2,	// (0x00042173) list_single_graphic_heading_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_single_graphic_heading_pane_vc

0xe2e2,	// (0x00042173) list_single_heading_pane_vc_ParamLimits

0xe2e2,	// (0x00042173) list_single_heading_pane_vc

0x09d7,	// (0x00034868) list_single_number_heading_pane_vc_ParamLimits

0x09d7,	// (0x00034868) list_single_number_heading_pane_vc

0xdc5e,	// (0x00041aef) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdc5e,	// (0x00041aef) list_double_graphic_heading_pane_vc_g1

0xef50,	// (0x00042de1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xef50,	// (0x00042de1) list_double_graphic_heading_pane_vc_g2

0xef5c,	// (0x00042ded) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xef5c,	// (0x00042ded) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5f5,	// (0x00043486) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x00043486) list_double_graphic_heading_pane_vc_g

0xe31f,	// (0x000421b0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe31f,	// (0x000421b0) list_double_graphic_heading_pane_vc_t1

0xe335,	// (0x000421c6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe335,	// (0x000421c6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x00043858) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x00043858) list_double_graphic_heading_pane_vc_t

0xe1eb,	// (0x0004207c) list_setting_pane_vc_g1_ParamLimits

0xe1eb,	// (0x0004207c) list_setting_pane_vc_g1

0xe1f7,	// (0x00042088) list_setting_pane_vc_g2_ParamLimits

0xe1f7,	// (0x00042088) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x00043653) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x00043653) list_setting_pane_vc_g

0xe34d,	// (0x000421de) list_setting_pane_vc_t1_ParamLimits

0xe34d,	// (0x000421de) list_setting_pane_vc_t1

0xe361,	// (0x000421f2) list_setting_pane_vc_t2_ParamLimits

0xe361,	// (0x000421f2) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x0004389b) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x0004389b) list_setting_pane_vc_t

0xe25b,	// (0x000420ec) set_value_pane_cp_vc_ParamLimits

0xe25b,	// (0x000420ec) set_value_pane_cp_vc

0xef50,	// (0x00042de1) list_single_number_heading_pane_vc_g1_ParamLimits

0xef50,	// (0x00042de1) list_single_number_heading_pane_vc_g1

0xef5c,	// (0x00042ded) list_single_number_heading_pane_vc_g2_ParamLimits

0xef5c,	// (0x00042ded) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x00043649) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x00043649) list_single_number_heading_pane_vc_g

0xe1c3,	// (0x00042054) list_single_number_heading_pane_vc_t1_ParamLimits

0xe1c3,	// (0x00042054) list_single_number_heading_pane_vc_t1

0xe375,	// (0x00042206) list_single_number_heading_pane_vc_t2_ParamLimits

0xe375,	// (0x00042206) list_single_number_heading_pane_vc_t2

0xe387,	// (0x00042218) list_single_number_heading_pane_vc_t3_ParamLimits

0xe387,	// (0x00042218) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x000438a0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x000438a0) list_single_number_heading_pane_vc_t

0xdc5e,	// (0x00041aef) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdc5e,	// (0x00041aef) list_single_graphic_heading_pane_vc_g1

0xef50,	// (0x00042de1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xef50,	// (0x00042de1) list_single_graphic_heading_pane_vc_g4

0xef5c,	// (0x00042ded) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xef5c,	// (0x00042ded) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5f5,	// (0x00043486) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5f5,	// (0x00043486) list_single_graphic_heading_pane_vc_g

0xe1c3,	// (0x00042054) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe1c3,	// (0x00042054) list_single_graphic_heading_pane_vc_t1

0xe399,	// (0x0004222a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe399,	// (0x0004222a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x000438a7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x000438a7) list_single_graphic_heading_pane_vc_t

0xef50,	// (0x00042de1) list_double2_pane_vc_g1_ParamLimits

0xef50,	// (0x00042de1) list_double2_pane_vc_g1

0xef5c,	// (0x00042ded) list_double2_pane_vc_g2_ParamLimits

0xef5c,	// (0x00042ded) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x00043649) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x00043649) list_double2_pane_vc_g

0xe3ab,	// (0x0004223c) list_double2_pane_vc_t1_ParamLimits

0xe3ab,	// (0x0004223c) list_double2_pane_vc_t1

0xef00,	// (0x00042d91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xef00,	// (0x00042d91) list_double2_large_graphic_pane_vc_g1

0xef0c,	// (0x00042d9d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xef0c,	// (0x00042d9d) list_double2_large_graphic_pane_vc_g2

0xef18,	// (0x00042da9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xef18,	// (0x00042da9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00043456) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00043456) list_double2_large_graphic_pane_vc_g

0xdb54,	// (0x000419e5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdb54,	// (0x000419e5) list_double2_large_graphic_pane_vc_t1

0xe3c1,	// (0x00042252) list_double_time_pane_vc_g1_ParamLimits

0xe3c1,	// (0x00042252) list_double_time_pane_vc_g1

0xe3cd,	// (0x0004225e) list_double_time_pane_vc_g2_ParamLimits

0xe3cd,	// (0x0004225e) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x000438ac) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x000438ac) list_double_time_pane_vc_g

0xe3d9,	// (0x0004226a) list_double_time_pane_vc_t1_ParamLimits

0xe3d9,	// (0x0004226a) list_double_time_pane_vc_t1

0xe3f7,	// (0x00042288) list_double_time_pane_vc_t2_ParamLimits

0xe3f7,	// (0x00042288) list_double_time_pane_vc_t2

0xe440,	// (0x000422d1) list_double_time_pane_vc_t3_ParamLimits

0xe440,	// (0x000422d1) list_double_time_pane_vc_t3

0xe452,	// (0x000422e3) list_double_time_pane_vc_t4_ParamLimits

0xe452,	// (0x000422e3) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x000438b1) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x000438b1) list_double_time_pane_vc_t

0xef50,	// (0x00042de1) list_double_pane_vc_g1_ParamLimits

0xef50,	// (0x00042de1) list_double_pane_vc_g1

0xef5c,	// (0x00042ded) list_double_pane_vc_g2_ParamLimits

0xef5c,	// (0x00042ded) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x00043649) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x00043649) list_double_pane_vc_g

0xe464,	// (0x000422f5) list_double_pane_vc_t1_ParamLimits

0xe464,	// (0x000422f5) list_double_pane_vc_t1

0xe476,	// (0x00042307) list_double_pane_vc_t2_ParamLimits

0xe476,	// (0x00042307) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x000438ba) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x000438ba) list_double_pane_vc_t

0xef50,	// (0x00042de1) list_double_number_pane_vc_g1_ParamLimits

0xef50,	// (0x00042de1) list_double_number_pane_vc_g1

0xef5c,	// (0x00042ded) list_double_number_pane_vc_g2_ParamLimits

0xef5c,	// (0x00042ded) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x00043649) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x00043649) list_double_number_pane_vc_g

0xe48c,	// (0x0004231d) list_double_number_pane_vc_t1_ParamLimits

0xe48c,	// (0x0004231d) list_double_number_pane_vc_t1

0xe4a0,	// (0x00042331) list_double_number_pane_vc_t2_ParamLimits

0xe4a0,	// (0x00042331) list_double_number_pane_vc_t2

0xe4b2,	// (0x00042343) list_double_number_pane_vc_t3_ParamLimits

0xe4b2,	// (0x00042343) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x000438bf) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x000438bf) list_double_number_pane_vc_t

0x0b32,	// (0x000349c3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0b32,	// (0x000349c3) list_double_large_graphic_pane_vc_g1

0x0b5a,	// (0x000349eb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0b5a,	// (0x000349eb) list_double_large_graphic_pane_vc_g2

0x0b6e,	// (0x000349ff) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0b6e,	// (0x000349ff) list_double_large_graphic_pane_vc_g3

0xe4c8,	// (0x00042359) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe4c8,	// (0x00042359) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x000438c6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x000438c6) list_double_large_graphic_pane_vc_g

0xe4d8,	// (0x00042369) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe4d8,	// (0x00042369) list_double_large_graphic_pane_vc_t1

0xe4f2,	// (0x00042383) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe4f2,	// (0x00042383) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x000438cf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x000438cf) list_double_large_graphic_pane_vc_t

0xef50,	// (0x00042de1) list_double_heading_pane_vc_g1_ParamLimits

0xef50,	// (0x00042de1) list_double_heading_pane_vc_g1

0xef5c,	// (0x00042ded) list_double_heading_pane_vc_g2_ParamLimits

0xef5c,	// (0x00042ded) list_double_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x00043649) list_double_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x00043649) list_double_heading_pane_vc_g

0xe512,	// (0x000423a3) list_double_heading_pane_vc_t1_ParamLimits

0xe512,	// (0x000423a3) list_double_heading_pane_vc_t1

0xe1c3,	// (0x00042054) list_double_heading_pane_vc_t2_ParamLimits

0xe1c3,	// (0x00042054) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x000438d4) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x000438d4) list_double_heading_pane_vc_t

0xe524,	// (0x000423b5) list_double_graphic_pane_vc_g1_ParamLimits

0xe524,	// (0x000423b5) list_double_graphic_pane_vc_g1

0xe530,	// (0x000423c1) list_double_graphic_pane_vc_g2_ParamLimits

0xe530,	// (0x000423c1) list_double_graphic_pane_vc_g2

0xef50,	// (0x00042de1) list_double_graphic_pane_vc_g3_ParamLimits

0xef50,	// (0x00042de1) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x000438d9) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x000438d9) list_double_graphic_pane_vc_g

0xe54d,	// (0x000423de) list_double_graphic_pane_vc_t1_ParamLimits

0xe54d,	// (0x000423de) list_double_graphic_pane_vc_t1

0xe56b,	// (0x000423fc) list_double_graphic_pane_vc_t2_ParamLimits

0xe56b,	// (0x000423fc) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x000438e2) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x000438e2) list_double_graphic_pane_vc_t

0xb220,	// (0x0003f0b1) aid_size_cell_fastswap

0xb228,	// (0x0003f0b9) aid_size_cell_touch_ParamLimits

0xb228,	// (0x0003f0b9) aid_size_cell_touch

0xb377,	// (0x0003f208) popup_fast_swap_wide_window_ParamLimits

0xb377,	// (0x0003f208) popup_fast_swap_wide_window

0xb43d,	// (0x0003f2ce) touch_pane_ParamLimits

0xb43d,	// (0x0003f2ce) touch_pane

0xdf0f,	// (0x00041da0) button_value_adjust_pane_cp2

0xdf17,	// (0x00041da8) button_value_adjust_pane_cp4

0xdf37,	// (0x00041dc8) form_field_data_pane_cp2

0xdf56,	// (0x00041de7) form_field_data_wide_pane_cp2

0xf34e,	// (0x000431df) bg_scroll_pane_ParamLimits

0xb664,	// (0x0003f4f5) scroll_handle_pane_ParamLimits

0xb678,	// (0x0003f509) scroll_sc2_down_pane_ParamLimits

0xb678,	// (0x0003f509) scroll_sc2_down_pane

0xf37f,	// (0x00043210) scroll_sc2_up_pane_ParamLimits

0xf37f,	// (0x00043210) scroll_sc2_up_pane

0x63bd,	// (0x0003a24e) grid_wheel_folder_pane_g1_ParamLimits

0x63bd,	// (0x0003a24e) grid_wheel_folder_pane_g1

0xb82c,	// (0x0003f6bd) clock_nsta_pane_cp2_ParamLimits

0xb82c,	// (0x0003f6bd) clock_nsta_pane_cp2

0x525a,	// (0x000390eb) listscroll_midp_pane_ParamLimits

0x5266,	// (0x000390f7) midp_canvas_pane

0xba73,	// (0x0003f904) nsta_clock_indic_pane

0x22ee,	// (0x0003617f) listscroll_form_pane_vc

0x22f6,	// (0x00036187) listscroll_set_pane_vc_ParamLimits

0x22f6,	// (0x00036187) listscroll_set_pane_vc

0x5469,	// (0x000392fa) clock_nsta_pane

0x547c,	// (0x0003930d) indicator_nsta_pane

0x240f,	// (0x000362a0) bg_popup_sub_pane_cp2_ParamLimits

0x2423,	// (0x000362b4) find_pane_cp2_ParamLimits

0x2423,	// (0x000362b4) find_pane_cp2

0x2435,	// (0x000362c6) grid_toobar_pane_ParamLimits

0x2519,	// (0x000363aa) list_form_gen_pane_vc_ParamLimits

0x2519,	// (0x000363aa) list_form_gen_pane_vc

0x252f,	// (0x000363c0) scroll_pane_cp8_vc_ParamLimits

0x252f,	// (0x000363c0) scroll_pane_cp8_vc

0x257f,	// (0x00036410) data_form_wide_pane_vc_ParamLimits

0x257f,	// (0x00036410) data_form_wide_pane_vc

0x258b,	// (0x0003641c) form_field_data_wide_pane_vc_g1

0x2593,	// (0x00036424) form_field_data_wide_pane_vc_t1_ParamLimits

0x2593,	// (0x00036424) form_field_data_wide_pane_vc_t1

0xefd1,	// (0x00042e62) input_focus_pane_cp6_vc_ParamLimits

0xefd1,	// (0x00042e62) input_focus_pane_cp6_vc

0x5703,	// (0x00039594) list_midp_pane_ParamLimits

0x570f,	// (0x000395a0) scroll_pane_cp16_ParamLimits

0x570f,	// (0x000395a0) scroll_pane_cp16

0x2899,	// (0x0003672a) button_value_adjust_pane_ParamLimits

0x2899,	// (0x0003672a) button_value_adjust_pane

0x5860,	// (0x000396f1) button_value_adjust_pane_cp6_ParamLimits

0x5860,	// (0x000396f1) button_value_adjust_pane_cp6

0x5968,	// (0x000397f9) settings_code_pane_cp_ParamLimits

0x5968,	// (0x000397f9) settings_code_pane_cp

0xe889,	// (0x0004271a) cell_touch_pane_g1

0xe889,	// (0x0004271a) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00043574) cell_touch_pane_g

0x6294,	// (0x0003a125) cell_touch_pane_cp_ParamLimits

0x6294,	// (0x0003a125) cell_touch_pane_cp

0x62a4,	// (0x0003a135) cell_touch_pane_ParamLimits

0x62a4,	// (0x0003a135) cell_touch_pane

0xe889,	// (0x0004271a) scroll_sc2_down_pane_g1

0xe889,	// (0x0004271a) scroll_sc2_up_pane_g1

0xe90b,	// (0x0004279c) bg_set_opt_pane_cp4_vc

0x39b4,	// (0x00037845) list_set_graphic_pane_vc_g1_ParamLimits

0x39b4,	// (0x00037845) list_set_graphic_pane_vc_g1

0x39c0,	// (0x00037851) list_set_graphic_pane_vc_g2_ParamLimits

0x39c0,	// (0x00037851) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x0004385d) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x0004385d) list_set_graphic_pane_vc_g

0x39cc,	// (0x0003785d) text_primary_small_cp13_vc_ParamLimits

0x39cc,	// (0x0003785d) text_primary_small_cp13_vc

0x39e4,	// (0x00037875) list_set_graphic_pane_vc_ParamLimits

0x39e4,	// (0x00037875) list_set_graphic_pane_vc

0xe90b,	// (0x0004279c) input_focus_pane_cp2_vc

0xe889,	// (0x0004271a) setting_code_pane_vc_g1

0x39f7,	// (0x00037888) setting_code_pane_vc_t1

0x3a05,	// (0x00037896) set_text_pane_vc_t1_ParamLimits

0x3a05,	// (0x00037896) set_text_pane_vc_t1

0xe90b,	// (0x0004279c) input_focus_pane_cp1_vc

0x3a20,	// (0x000378b1) list_set_text_pane_vc

0xe889,	// (0x0004271a) setting_text_pane_vc_g1

0xe90b,	// (0x0004279c) bg_set_opt_pane_cp2_vc

0x3a2a,	// (0x000378bb) setting_slider_graphic_pane_vc_g1

0x3a32,	// (0x000378c3) setting_slider_graphic_pane_vc_t1

0x3a40,	// (0x000378d1) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x00043862) setting_slider_graphic_pane_vc_t

0x3a4e,	// (0x000378df) slider_set_pane_cp_vc

0x3a56,	// (0x000378e7) slider_set_pane_vc_g1

0x3a5f,	// (0x000378f0) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x00043867) slider_set_pane_vc_g

0xf020,	// (0x00042eb1) set_opt_bg_pane_g1_copy1

0xf028,	// (0x00042eb9) set_opt_bg_pane_g2_copy1

0x3a8b,	// (0x0003791c) set_opt_bg_pane_g3_copy1

0xf038,	// (0x00042ec9) set_opt_bg_pane_g4_copy1

0xf040,	// (0x00042ed1) set_opt_bg_pane_g5_copy1

0xf048,	// (0x00042ed9) set_opt_bg_pane_g6_copy1

0x3a93,	// (0x00037924) set_opt_bg_pane_g7_copy1

0x3a9b,	// (0x0003792c) set_opt_bg_pane_g8_copy1

0x3aa3,	// (0x00037934) set_opt_bg_pane_g9_copy1

0xe90b,	// (0x0004279c) bg_set_opt_pane_cp_vc

0x3aab,	// (0x0003793c) setting_slider_pane_vc_t1

0x3a32,	// (0x000378c3) setting_slider_pane_vc_t2

0x3a40,	// (0x000378d1) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x00043876) setting_slider_pane_vc_t

0x3a4e,	// (0x000378df) slider_set_pane_vc

0xc066,	// (0x0003fef7) volume_set_pane_vc_g1

0xc34d,	// (0x000401de) volume_set_pane_vc_g2

0xc356,	// (0x000401e7) volume_set_pane_vc_g3

0xc35f,	// (0x000401f0) volume_set_pane_vc_g4

0xc368,	// (0x000401f9) volume_set_pane_vc_g5

0xc371,	// (0x00040202) volume_set_pane_vc_g6

0xc37a,	// (0x0004020b) volume_set_pane_vc_g7

0xc383,	// (0x00040214) volume_set_pane_vc_g8

0xc38c,	// (0x0004021d) volume_set_pane_vc_g9

0xc395,	// (0x00040226) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x0004387d) volume_set_pane_vc_g

0x3aba,	// (0x0003794b) volume_set_pane_vc

0x3ac2,	// (0x00037953) button_value_adjust_pane_cp1_vc

0x3acc,	// (0x0003795d) list_highlight_pane_cp2_vc

0x3ad5,	// (0x00037966) list_set_pane_vc_ParamLimits

0x3ad5,	// (0x00037966) list_set_pane_vc

0x3b27,	// (0x000379b8) main_pane_set_vc_t1_ParamLimits

0x3b27,	// (0x000379b8) main_pane_set_vc_t1

0x3b3c,	// (0x000379cd) main_pane_set_vc_t2_ParamLimits

0x3b3c,	// (0x000379cd) main_pane_set_vc_t2

0x3b4e,	// (0x000379df) main_pane_set_vc_t3_ParamLimits

0x3b4e,	// (0x000379df) main_pane_set_vc_t3

0x3b60,	// (0x000379f1) main_pane_set_vc_t4_ParamLimits

0x3b60,	// (0x000379f1) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x00043892) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x00043892) main_pane_set_vc_t

0x3b72,	// (0x00037a03) setting_code_pane_vc_ParamLimits

0x3b72,	// (0x00037a03) setting_code_pane_vc

0x3b81,	// (0x00037a12) setting_slider_graphic_pane_vc

0x3b81,	// (0x00037a12) setting_slider_pane_vc

0x3b81,	// (0x00037a12) setting_text_pane_vc

0x3b81,	// (0x00037a12) setting_volume_pane_vc

0x3b89,	// (0x00037a1a) scroll_pane_cp121_vc

0xefbc,	// (0x00042e4d) set_content_pane_vc

0x3b91,	// (0x00037a22) button_value_adjust_pane_g1

0x3b9a,	// (0x00037a2b) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x000438e7) button_value_adjust_pane_g

0x3ba3,	// (0x00037a34) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3ba3,	// (0x00037a34) form_field_slider_wide_pane_vc_t1

0x3bb9,	// (0x00037a4a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3bb9,	// (0x00037a4a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x000438ec) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x000438ec) form_field_slider_wide_pane_vc_t

0xea94,	// (0x00042925) input_focus_pane_cp10_vc_ParamLimits

0xea94,	// (0x00042925) input_focus_pane_cp10_vc

0x3be4,	// (0x00037a75) slider_cont_pane_cp1_vc_ParamLimits

0x3be4,	// (0x00037a75) slider_cont_pane_cp1_vc

0x3a56,	// (0x000378e7) slider_form_pane_g1_cp2

0x3a5f,	// (0x000378f0) slider_form_pane_g2_cp2

0x3bff,	// (0x00037a90) form_field_slider_pane_vc_t3

0x3c0d,	// (0x00037a9e) form_field_slider_pane_vc_t4

0x3c1b,	// (0x00037aac) slider_form_pane_vc_ParamLimits

0x3c1b,	// (0x00037aac) slider_form_pane_vc

0x3c28,	// (0x00037ab9) form_field_slider_pane_vc_t1_ParamLimits

0x3c28,	// (0x00037ab9) form_field_slider_pane_vc_t1

0x3c3e,	// (0x00037acf) form_field_slider_pane_vc_t2_ParamLimits

0x3c3e,	// (0x00037acf) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x000438fe) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x000438fe) form_field_slider_pane_vc_t

0xea94,	// (0x00042925) input_focus_pane_cp9_vc_ParamLimits

0xea94,	// (0x00042925) input_focus_pane_cp9_vc

0x3c50,	// (0x00037ae1) slider_cont_pane_vc_ParamLimits

0x3c50,	// (0x00037ae1) slider_cont_pane_vc

0x3c62,	// (0x00037af3) list_form_graphic_pane_cp_vc_ParamLimits

0x3c62,	// (0x00037af3) list_form_graphic_pane_cp_vc

0x258b,	// (0x0003641c) form_field_popup_wide_pane_vc_g1

0x3c77,	// (0x00037b08) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3c77,	// (0x00037b08) form_field_popup_wide_pane_vc_t1

0xefd1,	// (0x00042e62) input_focus_pane_cp8_vc_ParamLimits

0xefd1,	// (0x00042e62) input_focus_pane_cp8_vc

0x3cb6,	// (0x00037b47) list_form_wide_pane_vc_ParamLimits

0x3cb6,	// (0x00037b47) list_form_wide_pane_vc

0x3cc2,	// (0x00037b53) list_form_graphic_pane_vc_g1

0x3cca,	// (0x00037b5b) list_form_graphic_pane_vc_t1_ParamLimits

0x3cca,	// (0x00037b5b) list_form_graphic_pane_vc_t1

0xe959,	// (0x000427ea) list_highlight_pane_cp5_vc_ParamLimits

0xe959,	// (0x000427ea) list_highlight_pane_cp5_vc

0x3ce6,	// (0x00037b77) list_form_graphic_pane_vc_ParamLimits

0x3ce6,	// (0x00037b77) list_form_graphic_pane_vc

0x258b,	// (0x0003641c) form_field_popup_pane_vc_g1

0x3cfc,	// (0x00037b8d) form_field_popup_pane_vc_t1_ParamLimits

0x3cfc,	// (0x00037b8d) form_field_popup_pane_vc_t1

0xefd1,	// (0x00042e62) input_focus_pane_cp7_vc_ParamLimits

0xefd1,	// (0x00042e62) input_focus_pane_cp7_vc

0x3d11,	// (0x00037ba2) list_form_pane_vc_ParamLimits

0x3d11,	// (0x00037ba2) list_form_pane_vc

0x3d1d,	// (0x00037bae) data_form_pane_vc_t1_ParamLimits

0x3d1d,	// (0x00037bae) data_form_pane_vc_t1

0xf020,	// (0x00042eb1) input_focus_pane_vc_g1

0xf028,	// (0x00042eb9) input_focus_pane_vc_g2

0xf030,	// (0x00042ec1) input_focus_pane_vc_g3

0xf038,	// (0x00042ec9) input_focus_pane_vc_g4

0xf040,	// (0x00042ed1) input_focus_pane_vc_g5

0xf048,	// (0x00042ed9) input_focus_pane_vc_g6

0xf050,	// (0x00042ee1) input_focus_pane_vc_g7

0xf058,	// (0x00042ee9) input_focus_pane_vc_g8

0xf060,	// (0x00042ef1) input_focus_pane_vc_g9

0xe889,	// (0x0004271a) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x000434fd) input_focus_pane_vc_g

0x257f,	// (0x00036410) data_form_pane_vc_ParamLimits

0x257f,	// (0x00036410) data_form_pane_vc

0x258b,	// (0x0003641c) form_field_data_pane_vc_g1

0x3d38,	// (0x00037bc9) form_field_data_pane_vc_t1_ParamLimits

0x3d38,	// (0x00037bc9) form_field_data_pane_vc_t1

0xefd1,	// (0x00042e62) input_focus_pane_vc_ParamLimits

0xefd1,	// (0x00042e62) input_focus_pane_vc

0x3d4e,	// (0x00037bdf) button_value_adjust_pane_cp3_vc

0x3d56,	// (0x00037be7) button_value_adjust_pane_cp5_vc

0x3d5e,	// (0x00037bef) form_field_data_pane_vc_ParamLimits

0x3d5e,	// (0x00037bef) form_field_data_pane_vc

0x3d75,	// (0x00037c06) form_field_data_pane_vc_cp2

0x3d7d,	// (0x00037c0e) form_field_data_wide_pane_vc_ParamLimits

0x3d7d,	// (0x00037c0e) form_field_data_wide_pane_vc

0x3d93,	// (0x00037c24) form_field_data_wide_pane_vc_cp2

0x3d9b,	// (0x00037c2c) form_field_popup_pane_vc_ParamLimits

0x3d9b,	// (0x00037c2c) form_field_popup_pane_vc

0x3db2,	// (0x00037c43) form_field_popup_wide_pane_vc_ParamLimits

0x3db2,	// (0x00037c43) form_field_popup_wide_pane_vc

0x3dc8,	// (0x00037c59) form_field_slider_pane_vc_ParamLimits

0x3dc8,	// (0x00037c59) form_field_slider_pane_vc

0x3ddb,	// (0x00037c6c) form_field_slider_wide_pane_vc_ParamLimits

0x3ddb,	// (0x00037c6c) form_field_slider_wide_pane_vc

0x62b6,	// (0x0003a147) grid_touch_1_pane_ParamLimits

0x62b6,	// (0x0003a147) grid_touch_1_pane

0x62c2,	// (0x0003a153) grid_touch_2_pane_ParamLimits

0x62c2,	// (0x0003a153) grid_touch_2_pane

0x22c0,	// (0x00036151) touch_pane_g1_ParamLimits

0x22c0,	// (0x00036151) touch_pane_g1

0x3dee,	// (0x00037c7f) cell_app_pane_cp_wide_ParamLimits

0x3dee,	// (0x00037c7f) cell_app_pane_cp_wide

0x3dfe,	// (0x00037c8f) grid_popup_fast_wide_pane_ParamLimits

0x3dfe,	// (0x00037c8f) grid_popup_fast_wide_pane

0x3e12,	// (0x00037ca3) scroll_pane_cp19_ParamLimits

0x3e12,	// (0x00037ca3) scroll_pane_cp19

0xe90b,	// (0x0004279c) bg_popup_window_pane_cp20

0x3e26,	// (0x00037cb7) listscroll_popup_fast_wide_pane

0x62da,	// (0x0003a16b) grid_indicator_nsta_pane

0x3e2e,	// (0x00037cbf) clock_nsta_pane_g1

0x3e37,	// (0x00037cc8) clock_nsta_pane_t1

0x62ec,	// (0x0003a17d) cell_indicator_nsta_pane_ParamLimits

0x62ec,	// (0x0003a17d) cell_indicator_nsta_pane

0x3e53,	// (0x00037ce4) cell_indicator_nsta_pane_g1

0x631d,	// (0x0003a1ae) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0004390f) cell_indicator_nsta_pane_g

0x3e61,	// (0x00037cf2) clock_nsta_pane_cp

0x3e69,	// (0x00037cfa) indicator_nsta_pane_cp

0x3e72,	// (0x00037d03) nsta_clock_indic_pane_g1

0xe99d,	// (0x0004282e) grid_indicator_pane

0xf471,	// (0x00043302) scroll_pane_cp29

0xb783,	// (0x0003f614) indicator_nsta_pane_cp2_ParamLimits

0xb783,	// (0x0003f614) indicator_nsta_pane_cp2

0xe959,	// (0x000427ea) main_apps_wheel_pane

0x272a,	// (0x000365bb) form_midp_field_text_pane_ParamLimits

0x2857,	// (0x000366e8) scroll_bar_cp050_ParamLimits

0x3edb,	// (0x00037d6c) cell_indicator_pane_ParamLimits

0x3edb,	// (0x00037d6c) cell_indicator_pane

0x3ef1,	// (0x00037d82) cell_indicator_pane_g1

0x632d,	// (0x0003a1be) grid_wheel_folder_pane_ParamLimits

0x632d,	// (0x0003a1be) grid_wheel_folder_pane

0x633f,	// (0x0003a1d0) list_wheel_apps_pane_ParamLimits

0x633f,	// (0x0003a1d0) list_wheel_apps_pane

0x634e,	// (0x0003a1df) main_apps_wheel_pane_g1_ParamLimits

0x634e,	// (0x0003a1df) main_apps_wheel_pane_g1

0x6362,	// (0x0003a1f3) main_apps_wheel_pane_g2_ParamLimits

0x6362,	// (0x0003a1f3) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0004392b) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0004392b) main_apps_wheel_pane_g

0x6376,	// (0x0003a207) main_apps_wheel_pane_t1_ParamLimits

0x6376,	// (0x0003a207) main_apps_wheel_pane_t1

0x6395,	// (0x0003a226) list_wheel_apps_pane_g1

0x639d,	// (0x0003a22e) list_wheel_apps_pane_g2

0x63a5,	// (0x0003a236) list_wheel_apps_pane_g3

0x63ad,	// (0x0003a23e) list_wheel_apps_pane_g4

0x63b5,	// (0x0003a246) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x00043930) list_wheel_apps_pane_g

0xe959,	// (0x000427ea) navi_icon_text_pane

0x53bd,	// (0x0003924e) aid_fill_nsta

0x3efb,	// (0x00037d8c) navi_icon_text_pane_g1

0x3f07,	// (0x00037d98) navi_icon_text_pane_t1

0x1eb4,	// (0x00035d45) list_set_graphic_pane_t1_ParamLimits

0x1eb4,	// (0x00035d45) list_set_graphic_pane_t1

0x2f45,	// (0x00036dd6) popup_midp_note_alarm_window_t6_ParamLimits

0x2f45,	// (0x00036dd6) popup_midp_note_alarm_window_t6

0x2f57,	// (0x00036de8) popup_midp_note_alarm_window_t7_ParamLimits

0x2f57,	// (0x00036de8) popup_midp_note_alarm_window_t7

0x2f69,	// (0x00036dfa) popup_midp_note_alarm_window_t8_ParamLimits

0x2f69,	// (0x00036dfa) popup_midp_note_alarm_window_t8

0x2f7b,	// (0x00036e0c) popup_midp_note_alarm_window_t9_ParamLimits

0x2f7b,	// (0x00036e0c) popup_midp_note_alarm_window_t9

0x2f8d,	// (0x00036e1e) popup_midp_note_alarm_window_t10_ParamLimits

0x2f8d,	// (0x00036e1e) popup_midp_note_alarm_window_t10

0x2f9f,	// (0x00036e30) popup_midp_note_alarm_window_t11_ParamLimits

0x2f9f,	// (0x00036e30) popup_midp_note_alarm_window_t11

0x2fb1,	// (0x00036e42) scroll_pane_cp17_ParamLimits

0x2fb1,	// (0x00036e42) scroll_pane_cp17

0xc066,	// (0x0003fef7) volume_small_pane_cp_g1

0xc39e,	// (0x0004022f) volume_small_pane_cp_g2

0xc3a7,	// (0x00040238) volume_small_pane_cp_g3

0xc3b0,	// (0x00040241) volume_small_pane_cp_g4

0xc093,	// (0x0003ff24) volume_small_pane_cp_g5

0xc3b9,	// (0x0004024a) volume_small_pane_cp_g6

0xc3c2,	// (0x00040253) volume_small_pane_cp_g7

0xc3cb,	// (0x0004025c) volume_small_pane_cp_g8

0xc3d4,	// (0x00040265) volume_small_pane_cp_g9

0xc3dd,	// (0x0004026e) volume_small_pane_cp_g10

0x2163,	// (0x00035ff4) midp_ticker_pane_g1_ParamLimits

0x216f,	// (0x00036000) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x000435c9) midp_ticker_pane_g_ParamLimits

0x217b,	// (0x0003600c) midp_ticker_pane_t1_ParamLimits

0x53cd,	// (0x0003925e) aid_fill_nsta_2

0x2843,	// (0x000366d4) list_form2_midp_pane

0x3643,	// (0x000374d4) midp_editing_number_pane_ParamLimits

0x364f,	// (0x000374e0) midp_ticker_pane_ParamLimits

0x3f19,	// (0x00037daa) form2_midp_field_pane

0x3f21,	// (0x00037db2) scroll_pane_cp51

0x3f41,	// (0x00037dd2) form2_midp_button_pane_ParamLimits

0x3f41,	// (0x00037dd2) form2_midp_button_pane

0x3f53,	// (0x00037de4) form2_midp_content_pane_ParamLimits

0x3f53,	// (0x00037de4) form2_midp_content_pane

0x3f6d,	// (0x00037dfe) form2_midp_field_choice_group_pane

0x3f75,	// (0x00037e06) form2_midp_field_pane_g1

0x3f7d,	// (0x00037e0e) form2_midp_field_pane_g2

0x3f85,	// (0x00037e16) form2_midp_field_pane_g3

0x3f8d,	// (0x00037e1e) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x00043955) form2_midp_field_pane_g

0x3f95,	// (0x00037e26) form2_midp_gauge_slider_pane

0x3f9d,	// (0x00037e2e) form2_midp_gauge_wait_pane

0x3fa5,	// (0x00037e36) form2_midp_image_pane_ParamLimits

0x3fa5,	// (0x00037e36) form2_midp_image_pane

0x3fc0,	// (0x00037e51) form2_midp_label_pane_ParamLimits

0x3fc0,	// (0x00037e51) form2_midp_label_pane

0x63f0,	// (0x0003a281) form2_midp_label_pane_cp_ParamLimits

0x63f0,	// (0x0003a281) form2_midp_label_pane_cp

0x3fd9,	// (0x00037e6a) form2_midp_string_pane_ParamLimits

0x3fd9,	// (0x00037e6a) form2_midp_string_pane

0xe589,	// (0x0004241a) form2_midp_text_pane_ParamLimits

0xe589,	// (0x0004241a) form2_midp_text_pane

0x3feb,	// (0x00037e7c) form2_midp_time_pane

0x3ffb,	// (0x00037e8c) input_focus_pane_cp51_ParamLimits

0x3ffb,	// (0x00037e8c) input_focus_pane_cp51

0x4013,	// (0x00037ea4) form2_midp_label_pane_t1_ParamLimits

0x4013,	// (0x00037ea4) form2_midp_label_pane_t1

0xe5a2,	// (0x00042433) form2_mdip_text_pane_t1_ParamLimits

0xe5a2,	// (0x00042433) form2_mdip_text_pane_t1

0xe5bb,	// (0x0004244c) form2_midp_time_pane_t1

0x405b,	// (0x00037eec) form2_midp_gauge_slider_pane_t1

0x640f,	// (0x0003a2a0) form2_midp_gauge_slider_pane_t2

0x6421,	// (0x0003a2b2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0004395e) form2_midp_gauge_slider_pane_t

0x406d,	// (0x00037efe) form2_midp_slider_pane

0x4079,	// (0x00037f0a) form2_midp_gauge_wait_pane_t1

0x4087,	// (0x00037f18) form2_midp_wait_pane_ParamLimits

0x4087,	// (0x00037f18) form2_midp_wait_pane

0x25c9,	// (0x0003645a) list_single_2graphic_pane_cp4_ParamLimits

0x25c9,	// (0x0003645a) list_single_2graphic_pane_cp4

0x40b2,	// (0x00037f43) list_single_midp_graphic_pane_cp_ParamLimits

0x40b2,	// (0x00037f43) list_single_midp_graphic_pane_cp

0xe90b,	// (0x0004279c) list_highlight_pane_cp20

0x40d0,	// (0x00037f61) list_single_2graphic_pane_g1_cp4

0x38ed,	// (0x0003777e) list_single_2graphic_pane_g2_cp4

0x40d8,	// (0x00037f69) list_single_2graphic_pane_t1_cp4

0xe959,	// (0x000427ea) list_highlight_pane_cp21

0x40e7,	// (0x00037f78) list_single_midp_graphic_pane_g4_cp

0x40f6,	// (0x00037f87) list_single_midp_graphic_pane_t1_cp

0x410b,	// (0x00037f9c) form2_mdip_string_pane_t1_ParamLimits

0x410b,	// (0x00037f9c) form2_mdip_string_pane_t1

0xe90b,	// (0x0004279c) bg_wml_button_pane_cp2

0xe889,	// (0x0004271a) form2_midp_image_pane_g1

0xef68,	// (0x00042df9) list_double_large_graphic_pane_g5_ParamLimits

0xef68,	// (0x00042df9) list_double_large_graphic_pane_g5

0x525a,	// (0x000390eb) midp_form_pane_ParamLimits

0xe959,	// (0x000427ea) main_apps_wheel_pane_ParamLimits

0xbd6f,	// (0x0003fc00) popup_preview_window_ParamLimits

0xbd6f,	// (0x0003fc00) popup_preview_window

0xbeea,	// (0x0003fd7b) popup_touch_info_window_ParamLimits

0xbeea,	// (0x0003fd7b) popup_touch_info_window

0xbf08,	// (0x0003fd99) popup_touch_menu_window_ParamLimits

0xbf08,	// (0x0003fd99) popup_touch_menu_window

0xe87f,	// (0x00042710) bg_popup_sub_pane_cp6

0x4175,	// (0x00038006) list_touch_menu_pane

0x417d,	// (0x0003800e) list_single_touch_menu_pane_ParamLimits

0x417d,	// (0x0003800e) list_single_touch_menu_pane

0x4194,	// (0x00038025) list_single_touch_menu_pane_t1

0xe959,	// (0x000427ea) bg_popup_sub_pane_cp7_ParamLimits

0xe959,	// (0x000427ea) bg_popup_sub_pane_cp7

0x41a2,	// (0x00038033) heading_sub_pane

0x41aa,	// (0x0003803b) list_touch_info_pane_ParamLimits

0x41aa,	// (0x0003803b) list_touch_info_pane

0x41b9,	// (0x0003804a) list_single_touch_info_pane_ParamLimits

0x41b9,	// (0x0003804a) list_single_touch_info_pane

0x41ca,	// (0x0003805b) list_single_touch_info_pane_t1

0x41d8,	// (0x00038069) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0004396c) list_single_touch_info_pane_t

0x2139,	// (0x00035fca) bg_popup_heading_pane_cp

0x41e6,	// (0x00038077) heading_sub_pane_t1

0x2545,	// (0x000363d6) bg_popup_preview_window_pane_cp_ParamLimits

0x2545,	// (0x000363d6) bg_popup_preview_window_pane_cp

0x41a2,	// (0x00038033) heading_preview_pane

0x41aa,	// (0x0003803b) list_preview_pane_ParamLimits

0x41aa,	// (0x0003803b) list_preview_pane

0x41f4,	// (0x00038085) popup_preview_window_g1

0x41b9,	// (0x0003804a) list_single_preview_pane_ParamLimits

0x41b9,	// (0x0003804a) list_single_preview_pane

0x41fc,	// (0x0003808d) list_single_preview_pane_g1

0x4204,	// (0x00038095) list_single_preview_pane_t1

0x41ca,	// (0x0003805b) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x00043971) list_single_preview_pane_t

0x4212,	// (0x000380a3) bg_popup_heading_pane_cp2_ParamLimits

0x4212,	// (0x000380a3) bg_popup_heading_pane_cp2

0x4228,	// (0x000380b9) heading_preview_pane_g1

0x4230,	// (0x000380c1) heading_preview_pane_t1_ParamLimits

0x4230,	// (0x000380c1) heading_preview_pane_t1

0xe9b4,	// (0x00042845) soft_indicator_pane_t1_ParamLimits

0xee92,	// (0x00042d23) scroll_pane_ParamLimits

0xf36d,	// (0x000431fe) scroll_sc2_left_pane

0xf376,	// (0x00043207) scroll_sc2_right_pane

0xf395,	// (0x00043226) scroll_bg_pane_g1_ParamLimits

0xf3aa,	// (0x0004323b) scroll_bg_pane_g2_ParamLimits

0xf3c2,	// (0x00043253) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00043554) scroll_bg_pane_g_ParamLimits

0xf395,	// (0x00043226) scroll_handle_pane_g1_ParamLimits

0xf3e4,	// (0x00043275) scroll_handle_pane_g2_ParamLimits

0xf3c2,	// (0x00043253) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0004355b) scroll_handle_pane_g_ParamLimits

0xbab7,	// (0x0003f948) popup_choice_list_window_ParamLimits

0xbab7,	// (0x0003f948) popup_choice_list_window

0x241b,	// (0x000362ac) choice_list_pane

0x2491,	// (0x00036322) cell_toolbar_pane_t1

0x24b9,	// (0x0003634a) toolbar_button_pane_ParamLimits

0x33ac,	// (0x0003723d) ai_gene_pane_1_t2_ParamLimits

0x33ac,	// (0x0003723d) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0004377c) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0004377c) ai_gene_pane_1_t

0x424d,	// (0x000380de) scroll_sc2_left_pane_g1

0x424d,	// (0x000380de) scroll_sc2_right_pane_g1

0x01e5,	// (0x00034076) bg_popup_sub_pane_cp10

0x4257,	// (0x000380e8) list_choice_list_pane

0x426e,	// (0x000380ff) list_single_choice_list_pane_ParamLimits

0x426e,	// (0x000380ff) list_single_choice_list_pane

0x4280,	// (0x00038111) list_single_choice_list_pane_g1

0xf149,	// (0x00042fda) list_single_choice_list_pane_t1_ParamLimits

0xf149,	// (0x00042fda) list_single_choice_list_pane_t1

0x4288,	// (0x00038119) choice_list_pane_g1

0x4290,	// (0x00038121) choice_list_pane_t1

0xe87f,	// (0x00042710) input_focus_pane_cp11

0xf2d4,	// (0x00043165) title_pane_stacon_g2_ParamLimits

0xf2d4,	// (0x00043165) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0004353a) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0004353a) title_pane_stacon_g

0x2139,	// (0x00035fca) cursor_press_pane

0xbb53,	// (0x0003f9e4) popup_fep_hwr_window_ParamLimits

0xbb53,	// (0x0003f9e4) popup_fep_hwr_window

0xbbaf,	// (0x0003fa40) popup_fep_vkb_window_ParamLimits

0xbbaf,	// (0x0003fa40) popup_fep_vkb_window

0x429e,	// (0x0003812f) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0004399a) fep_vkb_side_pane_g_ParamLimits

0xc41b,	// (0x000402ac) fep_hwr_candidate_pane_ParamLimits

0xc41b,	// (0x000402ac) fep_hwr_candidate_pane

0xc443,	// (0x000402d4) fep_hwr_side_pane_ParamLimits

0xc443,	// (0x000402d4) fep_hwr_side_pane

0xc463,	// (0x000402f4) fep_hwr_top_pane_ParamLimits

0xc463,	// (0x000402f4) fep_hwr_top_pane

0xc47b,	// (0x0004030c) fep_hwr_write_pane_ParamLimits

0xc47b,	// (0x0004030c) fep_hwr_write_pane

0xfb09,	// (0x0004399a) fep_vkb_side_pane_g

0x42b8,	// (0x00038149) fep_hwr_top_pane_g1

0x42a6,	// (0x00038137) fep_hwr_top_pane_g2

0xc4b5,	// (0x00040346) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x00043976) fep_hwr_top_pane_g

0xc4ca,	// (0x0004035b) fep_hwr_top_text_pane

0xf4de,	// (0x0004336f) fep_hwr_top_text_pane_g1

0x42ee,	// (0x0003817f) fep_hwr_top_text_pane_t1

0xc5b8,	// (0x00040449) fep_hwr_candidate_pane_g1

0x44b7,	// (0x00038348) fep_vkb_keypad_pane_g3_ParamLimits

0x44b7,	// (0x00038348) fep_vkb_keypad_pane_g3

0x44d9,	// (0x0003836a) fep_vkb_keypad_pane_g4_ParamLimits

0x44d9,	// (0x0003836a) fep_vkb_keypad_pane_g4

0x4548,	// (0x000383d9) fep_vkb_bottom_pane_g2_ParamLimits

0x4548,	// (0x000383d9) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x000439a1) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x000439a1) fep_vkb_bottom_pane_g

0x424d,	// (0x000380de) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x000439ab) cell_vkb_side_pane_g

0x458c,	// (0x0003841d) cell_vkb_side_pane_t1

0x459a,	// (0x0003842b) cell_vkb_side_pane_t1_copy1

0x424d,	// (0x000380de) bg_fep_vkb_candidate_pane_g2

0x4668,	// (0x000384f9) cell_vkb_candidate_pane_ParamLimits

0x42fc,	// (0x0003818d) aid_size_cell_vkb_ParamLimits

0x42fc,	// (0x0003818d) aid_size_cell_vkb

0x4668,	// (0x000384f9) cell_vkb_candidate_pane

0xc5df,	// (0x00040470) bg_popup_fep_shadow_pane_g1

0x4366,	// (0x000381f7) fep_vkb_bottom_pane_ParamLimits

0x4366,	// (0x000381f7) fep_vkb_bottom_pane

0x43a3,	// (0x00038234) fep_vkb_candidate_pane_ParamLimits

0x43a3,	// (0x00038234) fep_vkb_candidate_pane

0x43bf,	// (0x00038250) fep_vkb_keypad_pane_ParamLimits

0x43bf,	// (0x00038250) fep_vkb_keypad_pane

0x43f3,	// (0x00038284) fep_vkb_side_pane_ParamLimits

0x43f3,	// (0x00038284) fep_vkb_side_pane

0x441f,	// (0x000382b0) fep_vkb_top_pane_ParamLimits

0x441f,	// (0x000382b0) fep_vkb_top_pane

0x444b,	// (0x000382dc) fep_vkb_top_pane_g1_ParamLimits

0x444b,	// (0x000382dc) fep_vkb_top_pane_g1

0x445a,	// (0x000382eb) fep_vkb_top_pane_g2_ParamLimits

0x445a,	// (0x000382eb) fep_vkb_top_pane_g2

0x4469,	// (0x000382fa) fep_vkb_top_pane_g3_ParamLimits

0x4469,	// (0x000382fa) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x00043991) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x00043991) fep_vkb_top_pane_g

0x4487,	// (0x00038318) fep_vkb_top_text_pane_ParamLimits

0x4487,	// (0x00038318) fep_vkb_top_text_pane

0x643f,	// (0x0003a2d0) fep_vkb_side_pane_g1_ParamLimits

0x643f,	// (0x0003a2d0) fep_vkb_side_pane_g1

0x44a6,	// (0x00038337) grid_vkb_side_pane_ParamLimits

0x44a6,	// (0x00038337) grid_vkb_side_pane

0xc5e7,	// (0x00040478) bg_popup_fep_shadow_pane_g2

0xc5f0,	// (0x00040481) bg_popup_fep_shadow_pane_g3

0xc5f8,	// (0x00040489) bg_popup_fep_shadow_pane_g4

0xc601,	// (0x00040492) bg_popup_fep_shadow_pane_g5

0xc609,	// (0x0004049a) bg_popup_fep_shadow_pane_g6

0xc611,	// (0x000404a2) bg_popup_fep_shadow_pane_g7

0xf038,	// (0x00042ec9) bg_popup_fep_shadow_pane_g8

0x44f7,	// (0x00038388) grid_vkb_keypad_number_pane_ParamLimits

0x44f7,	// (0x00038388) grid_vkb_keypad_number_pane

0x4507,	// (0x00038398) grid_vkb_keypad_pane_ParamLimits

0x4507,	// (0x00038398) grid_vkb_keypad_pane

0x452d,	// (0x000383be) fep_vkb_bottom_pane_g1_ParamLimits

0x452d,	// (0x000383be) fep_vkb_bottom_pane_g1

0x4556,	// (0x000383e7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4556,	// (0x000383e7) grid_vkb_keypad_bottom_left_pane

0x456b,	// (0x000383fc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x456b,	// (0x000383fc) grid_vkb_keypad_bottom_right_pane

0x4580,	// (0x00038411) fep_vkb_top_text_pane_g1

0x6489,	// (0x0003a31a) fep_vkb_top_text_pane_t1

0x649e,	// (0x0003a32f) cell_vkb_side_pane_ParamLimits

0x649e,	// (0x0003a32f) cell_vkb_side_pane

0x424d,	// (0x000380de) cell_vkb_side_pane_g1

0x45a8,	// (0x00038439) cell_vkb_keypad_pane_ParamLimits

0x45a8,	// (0x00038439) cell_vkb_keypad_pane

0x4615,	// (0x000384a6) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x000439be) bg_popup_fep_shadow_pane_g

0xc621,	// (0x000404b2) cell_hwr_side_pane_g1

0xc621,	// (0x000404b2) cell_hwr_side_pane_g2

0x461f,	// (0x000384b0) cell_vkb_keypad_pane_t1

0x64c1,	// (0x0003a352) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x64c1,	// (0x0003a352) cell_vkb_keypad_bottom_left_pane

0x64de,	// (0x0003a36f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x64de,	// (0x0003a36f) cell_vkb_keypad_bottom_right_pane

0x424d,	// (0x000380de) cell_vkb_keypad_bottom_left_pane_g1

0x424d,	// (0x000380de) cell_vkb_keypad_bottom_right_pane_g1

0x462d,	// (0x000384be) cell_vkb_keypad_number_pane_ParamLimits

0x462d,	// (0x000384be) cell_vkb_keypad_number_pane

0x464c,	// (0x000384dd) cell_vkb_keypad_number_pane_g1

0x4656,	// (0x000384e7) cell_vkb_keypad_number_pane_g2

0x465f,	// (0x000384f0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x000439b0) cell_vkb_keypad_number_pane_g

0x461f,	// (0x000384b0) cell_vkb_keypad_number_pane_t1

0x4681,	// (0x00038512) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x000439d1) cell_hwr_side_pane_g

0x469a,	// (0x0003852b) cell_hwr_side_pane_t1

0xc62b,	// (0x000404bc) cell_hwr_side_pane_t1_copy1

0xc639,	// (0x000404ca) cell_hwr_candidate_pane_g1

0xc668,	// (0x000404f9) cell_hwr_candidate_pane_t1

0x424d,	// (0x000380de) cell_vkb_candidate_pane_g2

0x4720,	// (0x000385b1) cell_vkb_candidate_pane_t1

0xc3e6,	// (0x00040277) bg_popup_fep_shadow_pane_ParamLimits

0xc3e6,	// (0x00040277) bg_popup_fep_shadow_pane

0xc495,	// (0x00040326) bg_fep_hwr_top_pane_g4

0x42ca,	// (0x0003815b) bg_hwr_side_pane_g1_ParamLimits

0x42ca,	// (0x0003815b) bg_hwr_side_pane_g1

0xc506,	// (0x00040397) cell_hwr_side_pane_ParamLimits

0xc506,	// (0x00040397) cell_hwr_side_pane

0xc541,	// (0x000403d2) fep_hwr_write_pane_g1_ParamLimits

0xc541,	// (0x000403d2) fep_hwr_write_pane_g1

0xc54e,	// (0x000403df) fep_hwr_write_pane_g2_ParamLimits

0xc54e,	// (0x000403df) fep_hwr_write_pane_g2

0xc55b,	// (0x000403ec) fep_hwr_write_pane_g3_ParamLimits

0xc55b,	// (0x000403ec) fep_hwr_write_pane_g3

0xc569,	// (0x000403fa) fep_hwr_write_pane_g4_ParamLimits

0xc569,	// (0x000403fa) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0004397d) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0004397d) fep_hwr_write_pane_g

0xc495,	// (0x00040326) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc495,	// (0x00040326) bg_fep_hwr_candidate_pane_g2

0xc57e,	// (0x0004040f) cell_hwr_candidate_pane_ParamLimits

0xc57e,	// (0x0004040f) cell_hwr_candidate_pane

0xc5b8,	// (0x00040449) fep_hwr_candidate_pane_g1_ParamLimits

0x432a,	// (0x000381bb) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x432a,	// (0x000381bb) bg_popup_fep_shadow_pane_cp2

0x4479,	// (0x0003830a) fep_vkb_top_pane_g4_ParamLimits

0x4479,	// (0x0003830a) fep_vkb_top_pane_g4

0x4498,	// (0x00038329) fep_vkb_side_pane_g2_ParamLimits

0x4498,	// (0x00038329) fep_vkb_side_pane_g2

0xde40,	// (0x00041cd1) list_setting_pane_t4_ParamLimits

0xde40,	// (0x00041cd1) list_setting_pane_t4

0xded6,	// (0x00041d67) list_setting_number_pane_t5_ParamLimits

0xded6,	// (0x00041d67) list_setting_number_pane_t5

0x515a,	// (0x00038feb) list_double_heading_pane_cp2_ParamLimits

0x515a,	// (0x00038feb) list_double_heading_pane_cp2

0x1fae,	// (0x00035e3f) list_double_heading_pane_g1_cp2_ParamLimits

0x1fae,	// (0x00035e3f) list_double_heading_pane_g1_cp2

0x472e,	// (0x000385bf) list_double_heading_pane_g2_cp2_ParamLimits

0x472e,	// (0x000385bf) list_double_heading_pane_g2_cp2

0x4742,	// (0x000385d3) list_double_heading_pane_t1_cp2_ParamLimits

0x4742,	// (0x000385d3) list_double_heading_pane_t1_cp2

0x4758,	// (0x000385e9) list_double_heading_pane_t2_cp2_ParamLimits

0x4758,	// (0x000385e9) list_double_heading_pane_t2_cp2

0xe877,	// (0x00042708) aid_value_unit2

0xb3b3,	// (0x0003f244) popup_preview_fixed_window

0xeaa2,	// (0x00042933) bg_popup_preview_window_pane_cp02

0x476a,	// (0x000385fb) list_preview_fixed_pane

0x47b0,	// (0x00038641) list_empty_pane_fp_ParamLimits

0x47b0,	// (0x00038641) list_empty_pane_fp

0x47b0,	// (0x00038641) list_single_cale_day_pane_fp_ParamLimits

0x47b0,	// (0x00038641) list_single_cale_day_pane_fp

0x47b0,	// (0x00038641) list_single_graphic_heading_pane_fp_ParamLimits

0x47b0,	// (0x00038641) list_single_graphic_heading_pane_fp

0x47b0,	// (0x00038641) list_single_graphic_pane_fp_ParamLimits

0x47b0,	// (0x00038641) list_single_graphic_pane_fp

0x47b0,	// (0x00038641) list_single_heading_pane_fp_ParamLimits

0x47b0,	// (0x00038641) list_single_heading_pane_fp

0x47b0,	// (0x00038641) list_single_pane_fp_ParamLimits

0x47b0,	// (0x00038641) list_single_pane_fp

0x47c4,	// (0x00038655) list_single_pane_fp_g1_ParamLimits

0x47c4,	// (0x00038655) list_single_pane_fp_g1

0xef50,	// (0x00042de1) list_single_pane_fp_g2_ParamLimits

0xef50,	// (0x00042de1) list_single_pane_fp_g2

0x0e10,	// (0x00034ca1) list_single_pane_fp_g3_ParamLimits

0x0e10,	// (0x00034ca1) list_single_pane_fp_g3

0x47d0,	// (0x00038661) list_single_pane_fp_g4_ParamLimits

0x47d0,	// (0x00038661) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x000439e4) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x000439e4) list_single_pane_fp_g

0xe5ce,	// (0x0004245f) list_single_pane_fp_t1_ParamLimits

0xe5ce,	// (0x0004245f) list_single_pane_fp_t1

0xe5e5,	// (0x00042476) list_single_graphic_pane_fp_g1_ParamLimits

0xe5e5,	// (0x00042476) list_single_graphic_pane_fp_g1

0x47c4,	// (0x00038655) list_single_graphic_pane_fp_g2_ParamLimits

0x47c4,	// (0x00038655) list_single_graphic_pane_fp_g2

0xef50,	// (0x00042de1) list_single_graphic_pane_fp_g3_ParamLimits

0xef50,	// (0x00042de1) list_single_graphic_pane_fp_g3

0x0e10,	// (0x00034ca1) list_single_graphic_pane_fp_g4_ParamLimits

0x0e10,	// (0x00034ca1) list_single_graphic_pane_fp_g4

0x47d0,	// (0x00038661) list_single_graphic_pane_fp_g5_ParamLimits

0x47d0,	// (0x00038661) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x000439ed) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x000439ed) list_single_graphic_pane_fp_g

0xe5f1,	// (0x00042482) list_single_graphic_pane_fp_t1_ParamLimits

0xe5f1,	// (0x00042482) list_single_graphic_pane_fp_t1

0xe5e5,	// (0x00042476) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe5e5,	// (0x00042476) list_single_graphic_heading_pane_fp_g1

0x47c4,	// (0x00038655) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x47c4,	// (0x00038655) list_single_graphic_heading_pane_fp_g2

0xef50,	// (0x00042de1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xef50,	// (0x00042de1) list_single_graphic_heading_pane_fp_g3

0x0e10,	// (0x00034ca1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0e10,	// (0x00034ca1) list_single_graphic_heading_pane_fp_g4

0x47d0,	// (0x00038661) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x47d0,	// (0x00038661) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x000439ed) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x000439ed) list_single_graphic_heading_pane_fp_g

0xe607,	// (0x00042498) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe607,	// (0x00042498) list_single_graphic_heading_pane_fp_t1

0xe61d,	// (0x000424ae) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe61d,	// (0x000424ae) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x000439f8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x000439f8) list_single_graphic_heading_pane_fp_t

0xe62f,	// (0x000424c0) list_single_cale_day_pane_fp_g1_ParamLimits

0xe62f,	// (0x000424c0) list_single_cale_day_pane_fp_g1

0x47dc,	// (0x0003866d) list_single_cale_day_pane_fp_g2_ParamLimits

0x47dc,	// (0x0003866d) list_single_cale_day_pane_fp_g2

0x0e24,	// (0x00034cb5) list_single_cale_day_pane_fp_g3_ParamLimits

0x0e24,	// (0x00034cb5) list_single_cale_day_pane_fp_g3

0x0e4c,	// (0x00034cdd) list_single_cale_day_pane_fp_g4_ParamLimits

0x0e4c,	// (0x00034cdd) list_single_cale_day_pane_fp_g4

0x0e70,	// (0x00034d01) list_single_cale_day_pane_fp_g5_ParamLimits

0x0e70,	// (0x00034d01) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x000439fd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x000439fd) list_single_cale_day_pane_fp_g

0xe667,	// (0x000424f8) list_single_cale_day_pane_fp_t1_ParamLimits

0xe667,	// (0x000424f8) list_single_cale_day_pane_fp_t1

0xe68d,	// (0x0004251e) list_single_cale_day_pane_fp_t2_ParamLimits

0xe68d,	// (0x0004251e) list_single_cale_day_pane_fp_t2

0xe6a6,	// (0x00042537) list_single_cale_day_pane_fp_t3_ParamLimits

0xe6a6,	// (0x00042537) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x00043a08) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x00043a08) list_single_cale_day_pane_fp_t

0x47c4,	// (0x00038655) list_empty_pane_fp_g1_ParamLimits

0x47c4,	// (0x00038655) list_empty_pane_fp_g1

0xe6bf,	// (0x00042550) list_empty_pane_fp_t1

0xe6cd,	// (0x0004255e) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x00043a0f) list_empty_pane_fp_t

0x47c4,	// (0x00038655) list_single_heading_pane_fp_g1_ParamLimits

0x47c4,	// (0x00038655) list_single_heading_pane_fp_g1

0xef50,	// (0x00042de1) list_single_heading_pane_fp_g2_ParamLimits

0xef50,	// (0x00042de1) list_single_heading_pane_fp_g2

0x0e10,	// (0x00034ca1) list_single_heading_pane_fp_g3_ParamLimits

0x0e10,	// (0x00034ca1) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x00043a14) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00043a14) list_single_heading_pane_fp_g

0xe6db,	// (0x0004256c) list_single_heading_pane_fp_t1_ParamLimits

0xe6db,	// (0x0004256c) list_single_heading_pane_fp_t1

0xe6ed,	// (0x0004257e) list_single_heading_pane_fp_t2_ParamLimits

0xe6ed,	// (0x0004257e) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x00043a1b) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x00043a1b) list_single_heading_pane_fp_t

0xf15e,	// (0x00042fef) aid_size_cell_fast

0xea77,	// (0x00042908) soft_indicator_pane_cp1_t1

0xf19b,	// (0x0004302c) cell_app_pane_cp2_ParamLimits

0xf19b,	// (0x0004302c) cell_app_pane_cp2

0xc408,	// (0x00040299) fep_hwr_candidate_drop_down_list_pane

0xc5d2,	// (0x00040463) fep_hwr_candidate_pane_g3_ParamLimits

0xc5d2,	// (0x00040463) fep_hwr_candidate_pane_g3

0x92c5,	// (0x0003d156) fep_hwr_candidate_pane_g4_ParamLimits

0x92c5,	// (0x0003d156) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0004398a) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0004398a) fep_hwr_candidate_pane_g

0x4392,	// (0x00038223) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4392,	// (0x00038223) fep_vkb_candidate_drop_down_list_pane

0x4689,	// (0x0003851a) fep_vkb_candidate_pane_g3

0x4691,	// (0x00038522) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x000439b7) fep_vkb_candidate_pane_g

0xc639,	// (0x000404ca) cell_hwr_candidate_pane_g1_ParamLimits

0xc647,	// (0x000404d8) cell_hwr_candidate_pane_g3_ParamLimits

0xc647,	// (0x000404d8) cell_hwr_candidate_pane_g3

0x9515,	// (0x0003d3a6) cell_hwr_candidate_pane_g4_ParamLimits

0x9515,	// (0x0003d3a6) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x000439d6) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x000439d6) cell_hwr_candidate_pane_g

0x46ea,	// (0x0003857b) cell_vkb_candidate_pane_g3_ParamLimits

0x46ea,	// (0x0003857b) cell_vkb_candidate_pane_g3

0x4705,	// (0x00038596) cell_vkb_candidate_pane_g4_ParamLimits

0x4705,	// (0x00038596) cell_vkb_candidate_pane_g4

0x47e8,	// (0x00038679) cell_app_pane_cp2_g1_ParamLimits

0x47e8,	// (0x00038679) cell_app_pane_cp2_g1

0x4806,	// (0x00038697) cell_app_pane_cp2_g2_ParamLimits

0x4806,	// (0x00038697) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x00043a20) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x00043a20) cell_app_pane_cp2_g

0x4812,	// (0x000386a3) cell_app_pane_cp2_t1_ParamLimits

0x4812,	// (0x000386a3) cell_app_pane_cp2_t1

0xefd1,	// (0x00042e62) grid_highlight_pane_cp1_ParamLimits

0xefd1,	// (0x00042e62) grid_highlight_pane_cp1

0xc685,	// (0x00040516) cell_hwr_candidate_pane_cp1_ParamLimits

0xc685,	// (0x00040516) cell_hwr_candidate_pane_cp1

0xc639,	// (0x000404ca) fep_hwr_candidate_drop_down_list_pane_g1

0xc6a3,	// (0x00040534) fep_hwr_candidate_drop_down_list_pane_g2

0xc6b0,	// (0x00040541) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x00043a25) fep_hwr_candidate_drop_down_list_pane_g

0xc6bd,	// (0x0004054e) fep_hwr_candidate_drop_down_list_scroll_pane

0xc6c6,	// (0x00040557) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc6c6,	// (0x00040557) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc6d3,	// (0x00040564) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc6d3,	// (0x00040564) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc6e0,	// (0x00040571) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc6e0,	// (0x00040571) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6ed,	// (0x0004057e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6ed,	// (0x0004057e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc708,	// (0x00040599) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc708,	// (0x00040599) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc723,	// (0x000405b4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc723,	// (0x000405b4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc73e,	// (0x000405cf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc73e,	// (0x000405cf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc759,	// (0x000405ea) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc759,	// (0x000405ea) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x00043a2c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x00043a2c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6517,	// (0x0003a3a8) cell_vkb_candidate_pane_cp1_ParamLimits

0x6517,	// (0x0003a3a8) cell_vkb_candidate_pane_cp1

0x4479,	// (0x0003830a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4479,	// (0x0003830a) fep_vkb_candidate_drop_down_list_pane_g1

0x4824,	// (0x000386b5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4824,	// (0x000386b5) fep_vkb_candidate_drop_down_list_pane_g2

0x4831,	// (0x000386c2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4831,	// (0x000386c2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x00043a3d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x00043a3d) fep_vkb_candidate_drop_down_list_pane_g

0x483e,	// (0x000386cf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x483e,	// (0x000386cf) fep_vkb_candidate_drop_down_list_scroll_pane

0x484b,	// (0x000386dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x484b,	// (0x000386dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4858,	// (0x000386e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4858,	// (0x000386e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4864,	// (0x000386f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4864,	// (0x000386f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x46a8,	// (0x00038539) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x46a8,	// (0x00038539) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x46c9,	// (0x0003855a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x46c9,	// (0x0003855a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4870,	// (0x00038701) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4870,	// (0x00038701) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4891,	// (0x00038722) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4891,	// (0x00038722) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x48b2,	// (0x00038743) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x48b2,	// (0x00038743) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x00043a44) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x00043a44) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x4d64,	// (0x00038bf5) title_pane_g1_ParamLimits

0x4d71,	// (0x00038c02) title_pane_g2_ParamLimits

0xf529,	// (0x000433ba) title_pane_g_ParamLimits

0xf4ce,	// (0x0004335f) aid_call2_pane

0xf4d6,	// (0x00043367) aid_call_pane

0xf4de,	// (0x0004336f) popup_clock_analogue_window_g1

0xf4de,	// (0x0004336f) popup_clock_analogue_window_g2

0xb68d,	// (0x0003f51e) popup_clock_analogue_window_g3

0xb696,	// (0x0003f527) popup_clock_analogue_window_g4

0xe889,	// (0x0004271a) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00043569) popup_clock_analogue_window_g

0xb69e,	// (0x0003f52f) popup_clock_analogue_window_t1

0xb6ac,	// (0x0003f53d) clock_digital_number_pane_ParamLimits

0xb6ac,	// (0x0003f53d) clock_digital_number_pane

0xb6b8,	// (0x0003f549) clock_digital_number_pane_cp02_ParamLimits

0xb6b8,	// (0x0003f549) clock_digital_number_pane_cp02

0xb6c4,	// (0x0003f555) clock_digital_number_pane_cp03_ParamLimits

0xb6c4,	// (0x0003f555) clock_digital_number_pane_cp03

0xb6d0,	// (0x0003f561) clock_digital_number_pane_cp04_ParamLimits

0xb6d0,	// (0x0003f561) clock_digital_number_pane_cp04

0xb6dc,	// (0x0003f56d) clock_digital_separator_pane_ParamLimits

0xb6dc,	// (0x0003f56d) clock_digital_separator_pane

0xb6e8,	// (0x0003f579) popup_clock_digital_window_t1_ParamLimits

0xb6e8,	// (0x0003f579) popup_clock_digital_window_t1

0xe889,	// (0x0004271a) clock_digital_number_pane_g1

0xe889,	// (0x0004271a) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00043574) clock_digital_number_pane_g

0xe889,	// (0x0004271a) clock_digital_separator_pane_g1

0xe889,	// (0x0004271a) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00043574) clock_digital_separator_pane_g

0x53bd,	// (0x0003924e) aid_fill_nsta_ParamLimits

0x547c,	// (0x0003930d) indicator_nsta_pane_ParamLimits

0x23c4,	// (0x00036255) popup_clock_analogue_window

0x23c4,	// (0x00036255) popup_clock_digital_window

0x62da,	// (0x0003a16b) grid_indicator_nsta_pane_ParamLimits

0x3e45,	// (0x00037cd6) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0004390a) clock_nsta_pane_t

0xb651,	// (0x0003f4e2) aid_size_max_handle

0xb65b,	// (0x0003f4ec) aid_size_min_handle

0x2139,	// (0x00035fca) editor_scroll_pane

0x48cd,	// (0x0003875e) ex_editor_pane

0xf127,	// (0x00042fb8) scroll_pane_cp13

0xeebf,	// (0x00042d50) scroll_pane_cp14

0x1cd6,	// (0x00035b67) scroll_pane_cp36

0x516a,	// (0x00038ffb) list_single_graphic_hl_pane_cp2_ParamLimits

0x516a,	// (0x00038ffb) list_single_graphic_hl_pane_cp2

0xe30b,	// (0x0004219c) list_single_graphic_hl_pane_ParamLimits

0xe30b,	// (0x0004219c) list_single_graphic_hl_pane

0xe703,	// (0x00042594) aid_size_min_hl_cp1

0x48d5,	// (0x00038766) list_highlight_pane_cp34_ParamLimits

0x48d5,	// (0x00038766) list_highlight_pane_cp34

0x48e6,	// (0x00038777) list_single_graphic_hl_pane_g1_ParamLimits

0x48e6,	// (0x00038777) list_single_graphic_hl_pane_g1

0xe70c,	// (0x0004259d) list_single_graphic_hl_pane_g2_ParamLimits

0xe70c,	// (0x0004259d) list_single_graphic_hl_pane_g2

0xe70c,	// (0x0004259d) list_single_graphic_hl_pane_g3_ParamLimits

0xe70c,	// (0x0004259d) list_single_graphic_hl_pane_g3

0xef50,	// (0x00042de1) list_single_graphic_hl_pane_g4_ParamLimits

0xef50,	// (0x00042de1) list_single_graphic_hl_pane_g4

0x0e10,	// (0x00034ca1) list_single_graphic_hl_pane_g5_ParamLimits

0x0e10,	// (0x00034ca1) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x00043a55) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x00043a55) list_single_graphic_hl_pane_g

0xdc36,	// (0x00041ac7) list_single_graphic_hl_pane_t1_ParamLimits

0xdc36,	// (0x00041ac7) list_single_graphic_hl_pane_t1

0x48f3,	// (0x00038784) aid_size_min_hl_cp2

0x48fc,	// (0x0003878d) list_highlight_pane_cp34_cp2_ParamLimits

0x48fc,	// (0x0003878d) list_highlight_pane_cp34_cp2

0x48e6,	// (0x00038777) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x48e6,	// (0x00038777) list_single_graphic_hl_pane_g1_cp2

0x4909,	// (0x0003879a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4909,	// (0x0003879a) list_single_graphic_hl_pane_g2_cp2

0x4915,	// (0x000387a6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x4915,	// (0x000387a6) list_single_graphic_hl_pane_g3_cp2

0x1fae,	// (0x00035e3f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1fae,	// (0x00035e3f) list_single_graphic_hl_pane_g4_cp2

0x472e,	// (0x000385bf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x472e,	// (0x000385bf) list_single_graphic_hl_pane_g5_cp2

0xb973,	// (0x0003f804) control_pane_g4_ParamLimits

0xb973,	// (0x0003f804) control_pane_g4

0x01e5,	// (0x00034076) bg_popup_sub_pane_cp10_ParamLimits

0x4257,	// (0x000380e8) list_choice_list_pane_ParamLimits

0x4266,	// (0x000380f7) scroll_pane_cp23

0xeaa2,	// (0x00042933) bg_popup_preview_window_pane_cp02_ParamLimits

0x476a,	// (0x000385fb) list_preview_fixed_pane_ParamLimits

0x4780,	// (0x00038611) list_preview_fixed_pane_cp_ParamLimits

0x4780,	// (0x00038611) list_preview_fixed_pane_cp

0x478c,	// (0x0003861d) popup_preview_fixed_window_g1_ParamLimits

0x478c,	// (0x0003861d) popup_preview_fixed_window_g1

0x4798,	// (0x00038629) popup_preview_fixed_window_g2_ParamLimits

0x4798,	// (0x00038629) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x000439dd) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x000439dd) popup_preview_fixed_window_g

0xb5e1,	// (0x0003f472) aid_navi_side_left_pane_ParamLimits

0xb5f1,	// (0x0003f482) aid_navi_side_right_pane_ParamLimits

0xb600,	// (0x0003f491) navi_icon_pane_stacon_ParamLimits

0xb610,	// (0x0003f4a1) navi_navi_pane_stacon_ParamLimits

0xb600,	// (0x0003f491) navi_text_pane_stacon_ParamLimits

0xb294,	// (0x0003f125) main_text_info_pane

0x4937,	// (0x000387c8) listscroll_text_info_pane

0x493f,	// (0x000387d0) list_text_info_pane_ParamLimits

0x493f,	// (0x000387d0) list_text_info_pane

0x494e,	// (0x000387df) scroll_pane_cp24_ParamLimits

0x494e,	// (0x000387df) scroll_pane_cp24

0x653a,	// (0x0003a3cb) list_text_info_pane_t1_ParamLimits

0x653a,	// (0x0003a3cb) list_text_info_pane_t1

0xbad1,	// (0x0003f962) popup_fast_swap2_window_ParamLimits

0xbad1,	// (0x0003f962) popup_fast_swap2_window

0x496c,	// (0x000387fd) aid_size_cell_fast2

0xe87f,	// (0x00042710) bg_popup_window_pane_cp17

0x286f,	// (0x00036700) heading_pane_cp2

0x2877,	// (0x00036708) listscroll_fast2_pane

0x4976,	// (0x00038807) grid_fast2_pane

0x497e,	// (0x0003880f) listscroll_fast2_pane_g1

0x4986,	// (0x00038817) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x00043a60) listscroll_fast2_pane_g

0xf127,	// (0x00042fb8) scroll_pane_cp26

0x498e,	// (0x0003881f) cell_fast2_pane_ParamLimits

0x498e,	// (0x0003881f) cell_fast2_pane

0x49a4,	// (0x00038835) cell_fast2_pane_g1

0x49ad,	// (0x0003883e) cell_fast2_pane_g2

0x49b6,	// (0x00038847) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x00043a65) cell_fast2_pane_g

0xed20,	// (0x00042bb1) grid_highlight_pane_cp9

0xba9d,	// (0x0003f92e) main_eswt_pane_ParamLimits

0xba9d,	// (0x0003f92e) main_eswt_pane

0x4963,	// (0x000387f4) list_single_text_info_pane

0x49be,	// (0x0003884f) eswt_ctrl_button_pane

0x49be,	// (0x0003884f) eswt_ctrl_canvas_pane

0x49c6,	// (0x00038857) eswt_ctrl_combo_pane

0x49be,	// (0x0003884f) eswt_ctrl_default_pane

0x49be,	// (0x0003884f) eswt_ctrl_label_pane

0x49ce,	// (0x0003885f) eswt_ctrl_wait_pane

0x49d6,	// (0x00038867) eswt_shell_pane

0xe87f,	// (0x00042710) listscroll_eswt_app_pane

0x49f2,	// (0x00038883) popup_eswt_tasktip_window_ParamLimits

0x49f2,	// (0x00038883) popup_eswt_tasktip_window

0x2545,	// (0x000363d6) bg_popup_window_pane_cp18

0x4a03,	// (0x00038894) eswt_control_pane_g1_ParamLimits

0x4a03,	// (0x00038894) eswt_control_pane_g1

0x4a10,	// (0x000388a1) eswt_control_pane_g2_ParamLimits

0x4a10,	// (0x000388a1) eswt_control_pane_g2

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_ParamLimits

0x4a1d,	// (0x000388ae) eswt_control_pane_g3

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_ParamLimits

0x4a2a,	// (0x000388bb) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x00043a6c) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x00043a6c) eswt_control_pane_g

0xefd1,	// (0x00042e62) bg_button_pane_ParamLimits

0xefd1,	// (0x00042e62) bg_button_pane

0xed35,	// (0x00042bc6) common_borders_pane_copy2_ParamLimits

0xed35,	// (0x00042bc6) common_borders_pane_copy2

0x4a37,	// (0x000388c8) control_button_pane_g1_ParamLimits

0x4a37,	// (0x000388c8) control_button_pane_g1

0x4a43,	// (0x000388d4) control_button_pane_g2_ParamLimits

0x4a43,	// (0x000388d4) control_button_pane_g2

0x4a4f,	// (0x000388e0) control_button_pane_g3_ParamLimits

0x4a4f,	// (0x000388e0) control_button_pane_g3

0x0002,

0xfbe4,	// (0x00043a75) control_button_pane_g_ParamLimits

0xfbe4,	// (0x00043a75) control_button_pane_g

0x4a63,	// (0x000388f4) control_button_pane_t1

0x4a71,	// (0x00038902) control_button_pane_t2

0x0001,

0xfbeb,	// (0x00043a7c) control_button_pane_t

0x24c5,	// (0x00036356) bg_button_pane_g1

0x24cd,	// (0x0003635e) bg_button_pane_g2

0x24d5,	// (0x00036366) bg_button_pane_g3

0x24dd,	// (0x0003636e) bg_button_pane_g4

0x24e5,	// (0x00036376) bg_button_pane_g5

0x24ed,	// (0x0003637e) bg_button_pane_g6

0x24f5,	// (0x00036386) bg_button_pane_g7

0x24fd,	// (0x0003638e) bg_button_pane_g8

0x2505,	// (0x00036396) bg_button_pane_g9

0x0008,

0xf83f,	// (0x000436d0) bg_button_pane_g

0x4212,	// (0x000380a3) common_borders_pane_ParamLimits

0x4212,	// (0x000380a3) common_borders_pane

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy1_ParamLimits

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy1

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy1_ParamLimits

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy1

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy1_ParamLimits

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy1

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy1_ParamLimits

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy1

0x424d,	// (0x000380de) bg_eswt_ctrl_canvas_pane_g1

0x4212,	// (0x000380a3) common_borders_pane_cp2_ParamLimits

0x4212,	// (0x000380a3) common_borders_pane_cp2

0x4212,	// (0x000380a3) common_borders_pane_cp3_ParamLimits

0x4212,	// (0x000380a3) common_borders_pane_cp3

0x4a7f,	// (0x00038910) separator_horizontal_pane

0xf376,	// (0x00043207) separator_vertical_pane

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy2_ParamLimits

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy2

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy2_ParamLimits

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy2

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy2_ParamLimits

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy2

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy2_ParamLimits

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy2

0xe87f,	// (0x00042710) common_borders_pane_cp4

0x4a87,	// (0x00038918) separator_horizontal_pane_g1

0x4a90,	// (0x00038921) separator_horizontal_pane_g2

0x4a99,	// (0x0003892a) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x00043a81) separator_horizontal_pane_g

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy3_ParamLimits

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy3

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy3_ParamLimits

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy3

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy3_ParamLimits

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy3

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy3_ParamLimits

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy3

0xe87f,	// (0x00042710) common_borders_pane_cp5

0x4aa2,	// (0x00038933) separator_vertical_pane_g1

0x4aab,	// (0x0003893c) separator_vertical_pane_g2

0x4ab4,	// (0x00038945) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x00043a88) separator_vertical_pane_g

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy4_ParamLimits

0x4a03,	// (0x00038894) eswt_control_pane_g1_copy4

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy4_ParamLimits

0x4a10,	// (0x000388a1) eswt_control_pane_g2_copy4

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy4_ParamLimits

0x4a1d,	// (0x000388ae) eswt_control_pane_g3_copy4

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy4_ParamLimits

0x4a2a,	// (0x000388bb) eswt_control_pane_g4_copy4

0x6557,	// (0x0003a3e8) eswt_ctrl_combo_button_pane

0x655f,	// (0x0003a3f0) eswt_ctrl_input_pane

0x6567,	// (0x0003a3f8) popup_choice_list_window_cp70

0x656f,	// (0x0003a400) eswt_ctrl_input_pane_t1

0xe87f,	// (0x00042710) input_focus_pane_cp70

0x4212,	// (0x000380a3) bg_button_pane_cp70_ParamLimits

0x4212,	// (0x000380a3) bg_button_pane_cp70

0x657d,	// (0x0003a40e) eswt_ctrl_combo_button_pane_g1

0x4abd,	// (0x0003894e) wait_bar_pane_cp70

0x2545,	// (0x000363d6) bg_popup_window_pane_cp70_ParamLimits

0x2545,	// (0x000363d6) bg_popup_window_pane_cp70

0x4ac5,	// (0x00038956) popup_eswt_tasktip_window_t1

0x4adb,	// (0x0003896c) wait_bar_pane_cp71_ParamLimits

0x4adb,	// (0x0003896c) wait_bar_pane_cp71

0x4ae7,	// (0x00038978) grid_eswt_app_pane

0xf36d,	// (0x000431fe) scroll_pane_cp70

0x6585,	// (0x0003a416) cell_eswt_app_pane_ParamLimits

0x6585,	// (0x0003a416) cell_eswt_app_pane

0x65ad,	// (0x0003a43e) cell_eswt_app_pane_g1_ParamLimits

0x65ad,	// (0x0003a43e) cell_eswt_app_pane_g1

0x65dc,	// (0x0003a46d) cell_eswt_app_pane_g2_ParamLimits

0x65dc,	// (0x0003a46d) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x00043a8f) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x00043a8f) cell_eswt_app_pane_g

0x6605,	// (0x0003a496) cell_eswt_app_pane_t1_ParamLimits

0x6605,	// (0x0003a496) cell_eswt_app_pane_t1

0x4af0,	// (0x00038981) grid_highlight_pane_cp70_ParamLimits

0x4af0,	// (0x00038981) grid_highlight_pane_cp70

0xeec7,	// (0x00042d58) set_content_pane_g1

0x22b8,	// (0x00036149) status_small_volume_pane

0xc774,	// (0x00040605) status_small_volume_pane_g1

0xc77c,	// (0x0004060d) volume_small2_pane

0xc785,	// (0x00040616) volume_small2_pane_g1

0xc78e,	// (0x0004061f) volume_small2_pane_g2

0xc797,	// (0x00040628) volume_small2_pane_g3

0xc7a0,	// (0x00040631) volume_small2_pane_g4

0xc7a9,	// (0x0004063a) volume_small2_pane_g5

0xc7b2,	// (0x00040643) volume_small2_pane_g6

0xc7bb,	// (0x0004064c) volume_small2_pane_g7

0xc7c4,	// (0x00040655) volume_small2_pane_g8

0xc7cd,	// (0x0004065e) volume_small2_pane_g9

0xc7d6,	// (0x00040667) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x00043a94) volume_small2_pane_g

0x4580,	// (0x00038411) fep_vkb_top_text_pane_g1_ParamLimits

0x6489,	// (0x0003a31a) fep_vkb_top_text_pane_t1_ParamLimits

0x47a4,	// (0x00038635) popup_preview_fixed_window_g3_ParamLimits

0x47a4,	// (0x00038635) popup_preview_fixed_window_g3

0xbe93,	// (0x0003fd24) popup_toolbar_trans_pane

0x35fb,	// (0x0003748c) aid_height_set_list_ParamLimits

0x3607,	// (0x00037498) aid_size_parent_ParamLimits

0x01e5,	// (0x00034076) list_highlight_pane_cp2_ParamLimits

0xeec7,	// (0x00042d58) set_content_pane_g1_ParamLimits

0x599f,	// (0x00039830) list_single_image_pane_ParamLimits

0x599f,	// (0x00039830) list_single_image_pane

0x6637,	// (0x0003a4c8) aid_size_cell_image_ParamLimits

0x6637,	// (0x0003a4c8) aid_size_cell_image

0x6644,	// (0x0003a4d5) grid_single_image_pane_ParamLimits

0x6644,	// (0x0003a4d5) grid_single_image_pane

0xeec7,	// (0x00042d58) list_single_image_pane_g1_ParamLimits

0xeec7,	// (0x00042d58) list_single_image_pane_g1

0xefeb,	// (0x00042e7c) list_single_image_pane_g2_ParamLimits

0xefeb,	// (0x00042e7c) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x00043aa9) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x00043aa9) list_single_image_pane_g

0x4afc,	// (0x0003898d) list_single_image_pane_t1_ParamLimits

0x4afc,	// (0x0003898d) list_single_image_pane_t1

0x6650,	// (0x0003a4e1) cell_image_list_pane_ParamLimits

0x6650,	// (0x0003a4e1) cell_image_list_pane

0x6663,	// (0x0003a4f4) cell_image_list_pane_g1

0x666c,	// (0x0003a4fd) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x00043aae) cell_image_list_pane_g

0x4b12,	// (0x000389a3) aid_size_cell_tb_trans_pane

0xefd1,	// (0x00042e62) bg_tb_trans_pane

0x4b24,	// (0x000389b5) grid_tb_trans_pane

0x24c5,	// (0x00036356) bg_tb_trans_pane_g1

0x24cd,	// (0x0003635e) bg_tb_trans_pane_g2

0x24d5,	// (0x00036366) bg_tb_trans_pane_g3

0x24dd,	// (0x0003636e) bg_tb_trans_pane_g4

0x24e5,	// (0x00036376) bg_tb_trans_pane_g5

0x24fd,	// (0x0003638e) bg_tb_trans_pane_g6

0x2505,	// (0x00036396) bg_tb_trans_pane_g7

0x24ed,	// (0x0003637e) bg_tb_trans_pane_g8

0x24f5,	// (0x00036386) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x00043ab3) bg_tb_trans_pane_g

0x4b38,	// (0x000389c9) cell_toolbar_trans_pane_ParamLimits

0x4b38,	// (0x000389c9) cell_toolbar_trans_pane

0x424d,	// (0x000380de) cell_toolbar_trans_pane_g1

0x63d4,	// (0x0003a265) list_form2_midp_pane_t1

0x63e2,	// (0x0003a273) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x00043950) list_form2_midp_pane_t

0x3f21,	// (0x00037db2) scroll_pane_cp51_ParamLimits

0x4097,	// (0x00037f28) form2_midp_wait_pane_g1

0x40a0,	// (0x00037f31) form2_midp_wait_pane_g2

0x40a9,	// (0x00037f3a) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x00043965) form2_midp_wait_pane_g

0xe959,	// (0x000427ea) list_highlight_pane_cp21_ParamLimits

0x40e7,	// (0x00037f78) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x40f6,	// (0x00037f87) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x09d7,	// (0x00034868) list_single_2graphic_im_pane_ParamLimits

0x09d7,	// (0x00034868) list_single_2graphic_im_pane

0x6675,	// (0x0003a506) list_single_2graphic_im_pane_g1_ParamLimits

0x6675,	// (0x0003a506) list_single_2graphic_im_pane_g1

0x6686,	// (0x0003a517) list_single_2graphic_im_pane_g2_ParamLimits

0x6686,	// (0x0003a517) list_single_2graphic_im_pane_g2

0x6692,	// (0x0003a523) list_single_2graphic_im_pane_g3_ParamLimits

0x6692,	// (0x0003a523) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x00043ac6) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x00043ac6) list_single_2graphic_im_pane_g

0x66a6,	// (0x0003a537) list_single_2graphic_im_pane_t1_ParamLimits

0x66a6,	// (0x0003a537) list_single_2graphic_im_pane_t1

0x47b0,	// (0x00038641) list_single_graphic_2heading_pane_fp_ParamLimits

0x47b0,	// (0x00038641) list_single_graphic_2heading_pane_fp

0xe5e5,	// (0x00042476) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe5e5,	// (0x00042476) list_single_graphic_2heading_pane_fp_g1

0x47c4,	// (0x00038655) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x47c4,	// (0x00038655) list_single_graphic_2heading_pane_fp_g2

0xef50,	// (0x00042de1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xef50,	// (0x00042de1) list_single_graphic_2heading_pane_fp_g3

0x0e10,	// (0x00034ca1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0e10,	// (0x00034ca1) list_single_graphic_2heading_pane_fp_g4

0x47d0,	// (0x00038661) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x47d0,	// (0x00038661) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x000439ed) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x000439ed) list_single_graphic_2heading_pane_fp_g

0xe718,	// (0x000425a9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe718,	// (0x000425a9) list_single_graphic_2heading_pane_fp_t1

0xe61d,	// (0x000424ae) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe61d,	// (0x000424ae) list_single_graphic_2heading_pane_fp_t2

0xe72e,	// (0x000425bf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe72e,	// (0x000425bf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x00043acf) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x00043acf) list_single_graphic_2heading_pane_fp_t

0x42d6,	// (0x00038167) fep_hwr_write_pane_g5_ParamLimits

0x42d6,	// (0x00038167) fep_hwr_write_pane_g5

0x42e2,	// (0x00038173) fep_hwr_write_pane_g6_ParamLimits

0x42e2,	// (0x00038173) fep_hwr_write_pane_g6

0x49d6,	// (0x00038867) eswt_shell_pane_ParamLimits

0x2545,	// (0x000363d6) bg_popup_window_pane_cp18_ParamLimits

0x359f,	// (0x00037430) heading_pane_cp70

0x4ac5,	// (0x00038956) popup_eswt_tasktip_window_t1_ParamLimits

0x53f3,	// (0x00039284) aid_touch_tab_arrow_left

0x53ff,	// (0x00039290) aid_touch_tab_arrow_right

0x4d82,	// (0x00038c13) title_pane_g3_ParamLimits

0x4d82,	// (0x00038c13) title_pane_g3

0xefa1,	// (0x00042e32) set_value_pane_g1

0xbe93,	// (0x0003fd24) popup_toolbar_trans_pane_ParamLimits

0x4b12,	// (0x000389a3) aid_size_cell_tb_trans_pane_ParamLimits

0xefd1,	// (0x00042e62) bg_tb_trans_pane_ParamLimits

0x4b24,	// (0x000389b5) grid_tb_trans_pane_ParamLimits

0xeaa2,	// (0x00042933) cont_note_pane_ParamLimits

0xeaa2,	// (0x00042933) cont_note_pane

0xed35,	// (0x00042bc6) cont_snote2_single_text_pane_ParamLimits

0xed35,	// (0x00042bc6) cont_snote2_single_text_pane

0xed35,	// (0x00042bc6) cont_snote2_single_graphic_pane_ParamLimits

0xed35,	// (0x00042bc6) cont_snote2_single_graphic_pane

0x2a8d,	// (0x0003691e) cont_note_wait_pane_ParamLimits

0x2a8d,	// (0x0003691e) cont_note_wait_pane

0x2a8d,	// (0x0003691e) cont_note_image_pane_ParamLimits

0x2a8d,	// (0x0003691e) cont_note_image_pane

0x4b6a,	// (0x000389fb) popup_note2_window_g1_ParamLimits

0x4b6a,	// (0x000389fb) popup_note2_window_g1

0x4b9b,	// (0x00038a2c) popup_note2_window_t1_ParamLimits

0x4b9b,	// (0x00038a2c) popup_note2_window_t1

0x4be0,	// (0x00038a71) popup_note2_window_t2_ParamLimits

0x4be0,	// (0x00038a71) popup_note2_window_t2

0x4c25,	// (0x00038ab6) popup_note2_window_t3_ParamLimits

0x4c25,	// (0x00038ab6) popup_note2_window_t3

0x4c6a,	// (0x00038afb) popup_note2_window_t4_ParamLimits

0x4c6a,	// (0x00038afb) popup_note2_window_t4

0xeb26,	// (0x000429b7) popup_note2_window_t5_ParamLimits

0xeb26,	// (0x000429b7) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x00043adb) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x00043adb) popup_note2_window_t

0x4c99,	// (0x00038b2a) popup_note2_image_window_g1_ParamLimits

0x4c99,	// (0x00038b2a) popup_note2_image_window_g1

0x4ca5,	// (0x00038b36) popup_note2_image_window_g2_ParamLimits

0x4ca5,	// (0x00038b36) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x00043ae6) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x00043ae6) popup_note2_image_window_g

0x4cb7,	// (0x00038b48) popup_note2_image_window_t1_ParamLimits

0x4cb7,	// (0x00038b48) popup_note2_image_window_t1

0x4ccf,	// (0x00038b60) popup_note2_image_window_t2_ParamLimits

0x4ccf,	// (0x00038b60) popup_note2_image_window_t2

0x5a26,	// (0x000398b7) popup_note2_image_window_t3_ParamLimits

0x5a26,	// (0x000398b7) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x00043aeb) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x00043aeb) popup_note2_image_window_t

0x2a9b,	// (0x0003692c) popup_note2_wait_window_g1_ParamLimits

0x2a9b,	// (0x0003692c) popup_note2_wait_window_g1

0x2aa7,	// (0x00036938) popup_note2_wait_window_g2_ParamLimits

0x2aa7,	// (0x00036938) popup_note2_wait_window_g2

0x2ab3,	// (0x00036944) popup_note2_wait_window_g3_ParamLimits

0x2ab3,	// (0x00036944) popup_note2_wait_window_g3

0x0002,

0xf821,	// (0x000436b2) popup_note2_wait_window_g_ParamLimits

0xf821,	// (0x000436b2) popup_note2_wait_window_g

0x5a42,	// (0x000398d3) popup_note2_wait_window_t1_ParamLimits

0x5a42,	// (0x000398d3) popup_note2_wait_window_t1

0x5a60,	// (0x000398f1) popup_note2_wait_window_t2_ParamLimits

0x5a60,	// (0x000398f1) popup_note2_wait_window_t2

0x5a7e,	// (0x0003990f) popup_note2_wait_window_t3_ParamLimits

0x5a7e,	// (0x0003990f) popup_note2_wait_window_t3

0x5a90,	// (0x00039921) popup_note2_wait_window_t4_ParamLimits

0x5a90,	// (0x00039921) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x00043af2) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x00043af2) popup_note2_wait_window_t

0x5aa2,	// (0x00039933) wait_bar2_pane_ParamLimits

0x5aa2,	// (0x00039933) wait_bar2_pane

0x5aba,	// (0x0003994b) popup_snote2_single_text_window_g1_ParamLimits

0x5aba,	// (0x0003994b) popup_snote2_single_text_window_g1

0x5ae2,	// (0x00039973) popup_snote2_single_text_window_t1_ParamLimits

0x5ae2,	// (0x00039973) popup_snote2_single_text_window_t1

0x5b2e,	// (0x000399bf) popup_snote2_single_text_window_t2_ParamLimits

0x5b2e,	// (0x000399bf) popup_snote2_single_text_window_t2

0x5b7a,	// (0x00039a0b) popup_snote2_single_text_window_t3_ParamLimits

0x5b7a,	// (0x00039a0b) popup_snote2_single_text_window_t3

0x5bbb,	// (0x00039a4c) popup_snote2_single_text_window_t4_ParamLimits

0x5bbb,	// (0x00039a4c) popup_snote2_single_text_window_t4

0x5bf1,	// (0x00039a82) popup_snote2_single_text_window_t5_ParamLimits

0x5bf1,	// (0x00039a82) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x00043afb) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x00043afb) popup_snote2_single_text_window_t

0x5c1c,	// (0x00039aad) popup_snote2_single_graphic_window_g1_ParamLimits

0x5c1c,	// (0x00039aad) popup_snote2_single_graphic_window_g1

0x5c44,	// (0x00039ad5) popup_snote2_single_graphic_window_g2_ParamLimits

0x5c44,	// (0x00039ad5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x00043b06) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x00043b06) popup_snote2_single_graphic_window_g

0x5c6c,	// (0x00039afd) popup_snote2_single_graphic_window_t1_ParamLimits

0x5c6c,	// (0x00039afd) popup_snote2_single_graphic_window_t1

0x5cb8,	// (0x00039b49) popup_snote2_single_graphic_window_t2_ParamLimits

0x5cb8,	// (0x00039b49) popup_snote2_single_graphic_window_t2

0x5b7a,	// (0x00039a0b) popup_snote2_single_graphic_window_t3_ParamLimits

0x5b7a,	// (0x00039a0b) popup_snote2_single_graphic_window_t3

0x5bbb,	// (0x00039a4c) popup_snote2_single_graphic_window_t4_ParamLimits

0x5bbb,	// (0x00039a4c) popup_snote2_single_graphic_window_t4

0x5bf1,	// (0x00039a82) popup_snote2_single_graphic_window_t5_ParamLimits

0x5bf1,	// (0x00039a82) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x00043b0b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x00043b0b) popup_snote2_single_graphic_window_t

0x3eba,	// (0x00037d4b) clock_nsta_pane_cp2_t1

0x3eba,	// (0x00037d4b) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x00043926) clock_nsta_pane_cp2_t

0xdfd3,	// (0x00041e64) form_field_data_wide_pane_g1_ParamLimits

0xeec7,	// (0x00042d58) form_field_data_wide_pane_g2_ParamLimits

0xeec7,	// (0x00042d58) form_field_data_wide_pane_g2

0xefeb,	// (0x00042e7c) form_field_data_wide_pane_g3_ParamLimits

0xefeb,	// (0x00042e7c) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x000434ec) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x000434ec) form_field_data_wide_pane_g

0x62ce,	// (0x0003a15f) grid_touch_3_pane_ParamLimits

0x62ce,	// (0x0003a15f) grid_touch_3_pane

0x66d7,	// (0x0003a568) cell_touch_3_pane_ParamLimits

0x66d7,	// (0x0003a568) cell_touch_3_pane

0x424d,	// (0x000380de) cell_touch_3_pane_g1

0x424d,	// (0x000380de) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x000439ab) cell_touch_3_pane_g

0xeb7e,	// (0x00042a0f) cont_query_data_pane

0xeb86,	// (0x00042a17) cont_query_data_pane_cp1

0x5d04,	// (0x00039b95) button_value_adjust_pane_cp7

0x5d0c,	// (0x00039b9d) query_popup_pane_cp3

0x1ce7,	// (0x00035b78) bg_popup_sub_pane_cp22_ParamLimits

0xb707,	// (0x0003f598) navi_navi_volume_pane_cp2

0xb71f,	// (0x0003f5b0) popup_side_volume_key_window_g2

0xb72b,	// (0x0003f5bc) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00043582) popup_side_volume_key_window_g

0xb745,	// (0x0003f5d6) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00043589) popup_side_volume_key_window_t

0x1f31,	// (0x00035dc2) popup_side_volume_key_window_ParamLimits

0xef44,	// (0x00042dd5) list_double_graphic_pane_g4_ParamLimits

0xef44,	// (0x00042dd5) list_double_graphic_pane_g4

0xe2f5,	// (0x00042186) list_single_2heading_msg_pane_ParamLimits

0xe2f5,	// (0x00042186) list_single_2heading_msg_pane

0xe74c,	// (0x000425dd) list_single_2heading_msg_pane_g1_ParamLimits

0xe74c,	// (0x000425dd) list_single_2heading_msg_pane_g1

0xeec7,	// (0x00042d58) list_single_2heading_msg_pane_g2_ParamLimits

0xeec7,	// (0x00042d58) list_single_2heading_msg_pane_g2

0xe758,	// (0x000425e9) list_single_2heading_msg_pane_g3_ParamLimits

0xe758,	// (0x000425e9) list_single_2heading_msg_pane_g3

0xe764,	// (0x000425f5) list_single_2heading_msg_pane_g4_ParamLimits

0xe764,	// (0x000425f5) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x00043b16) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x00043b16) list_single_2heading_msg_pane_g

0xe77c,	// (0x0004260d) list_single_2heading_msg_pane_t1_ParamLimits

0xe77c,	// (0x0004260d) list_single_2heading_msg_pane_t1

0xe7a4,	// (0x00042635) list_single_2heading_msg_pane_t2_ParamLimits

0xe7a4,	// (0x00042635) list_single_2heading_msg_pane_t2

0xe7d3,	// (0x00042664) list_single_2heading_msg_pane_t3_ParamLimits

0xe7d3,	// (0x00042664) list_single_2heading_msg_pane_t3

0xe80c,	// (0x0004269d) list_single_2heading_msg_pane_t4_ParamLimits

0xe80c,	// (0x0004269d) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x00043b1f) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x00043b1f) list_single_2heading_msg_pane_t

0xe915,	// (0x000427a6) title_pane_g4_ParamLimits

0xe915,	// (0x000427a6) title_pane_g4

0xb557,	// (0x0003f3e8) title_pane_stacon_g3_ParamLimits

0xb557,	// (0x0003f3e8) title_pane_stacon_g3

0x4b5e,	// (0x000389ef) list_single_2graphic_im_pane_g4_ParamLimits

0x4b5e,	// (0x000389ef) list_single_2graphic_im_pane_g4

0x33c9,	// (0x0003725a) popup_side_volume_key_window_cp

0x3816,	// (0x000376a7) main_idle_act2_pane_t1

0xbf5e,	// (0x0003fdef) toolbar_button_pane_g10

0x5006,	// (0x00038e97) popup_toolbar_window_cp1

0x3eab,	// (0x00037d3c) clock_nsta_pane_cp_t1

0x3eab,	// (0x00037d3c) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x00043921) clock_nsta_pane_cp_t

0xb707,	// (0x0003f598) navi_navi_volume_pane_cp2_ParamLimits

0xb713,	// (0x0003f5a4) popup_side_volume_key_window_g1_ParamLimits

0xb71f,	// (0x0003f5b0) popup_side_volume_key_window_g2_ParamLimits

0xb72b,	// (0x0003f5bc) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00043582) popup_side_volume_key_window_g_ParamLimits

0xc3f4,	// (0x00040285) fep_hwr_aid_pane

0xc495,	// (0x00040326) bg_fep_hwr_top_pane_g4_ParamLimits

0x42b8,	// (0x00038149) fep_hwr_top_pane_g1_ParamLimits

0x42a6,	// (0x00038137) fep_hwr_top_pane_g2_ParamLimits

0xc4b5,	// (0x00040346) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x00043976) fep_hwr_top_pane_g_ParamLimits

0xc4ca,	// (0x0004035b) fep_hwr_top_text_pane_ParamLimits

0x319d,	// (0x0003702e) aid_touch_tab_arrow_arrow_2

0x3194,	// (0x00037025) aid_touch_tab_arrow_left_2

0xc408,	// (0x00040299) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xc43b,	// (0x000402cc) fep_hwr_prediction_pane

0x43eb,	// (0x0003827c) fep_vkb_prediction_pane

0x6466,	// (0x0003a2f7) fep_vkb_side_pane_g3_ParamLimits

0x6466,	// (0x0003a2f7) fep_vkb_side_pane_g3

0xc639,	// (0x000404ca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc6a3,	// (0x00040534) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc6b0,	// (0x00040541) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x00043a25) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc7df,	// (0x00040670) fep_hwr_prediction_pane_g1

0xc7e9,	// (0x0004067a) fep_hwr_prediction_pane_g2

0xc7f1,	// (0x00040682) fep_hwr_prediction_pane_g3

0xc7f9,	// (0x0004068a) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x00043b28) fep_hwr_prediction_pane_g

0x5d1d,	// (0x00039bae) fep_vkb_prediction_pane_g1

0x5d27,	// (0x00039bb8) fep_vkb_prediction_pane_g2

0x5d2f,	// (0x00039bc0) fep_vkb_prediction_pane_g3

0x5d37,	// (0x00039bc8) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x00043b31) fep_vkb_prediction_pane_g

0xc22c,	// (0x000400bd) slider_set_pane_g3

0xc240,	// (0x000400d1) slider_set_pane_g4

0xc258,	// (0x000400e9) slider_set_pane_g5

0xc22c,	// (0x000400bd) slider_set_pane_g6

0xc26e,	// (0x000400ff) slider_set_pane_g7

0x362a,	// (0x000374bb) slider_form_pane_g3

0x3633,	// (0x000374c4) slider_form_pane_g4

0x363b,	// (0x000374cc) slider_form_pane_g5

0x362a,	// (0x000374bb) slider_form_pane_g6

0x5984,	// (0x00039815) slider_form_pane_g7

0x3a67,	// (0x000378f8) slider_set_pane_vc_g3

0x3a70,	// (0x00037901) slider_set_pane_vc_g4

0x3a79,	// (0x0003790a) slider_set_pane_vc_g5

0x3a67,	// (0x000378f8) slider_set_pane_vc_g6

0x3a82,	// (0x00037913) slider_set_pane_vc_g7

0x3a67,	// (0x000378f8) slider_form_pane_vc_g1

0x3a70,	// (0x00037901) slider_form_pane_vc_g2

0x3a79,	// (0x0003790a) slider_form_pane_vc_g3

0x3a67,	// (0x000378f8) slider_form_pane_vc_g4

0x3bf6,	// (0x00037a87) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x000438f3) slider_form_pane_vc_g

0xb294,	// (0x0003f125) main_idle_act3_pane

0x5d3f,	// (0x00039bd0) ai3_links_pane

0x6718,	// (0x0003a5a9) popup_ai3_data_window_ParamLimits

0x6718,	// (0x0003a5a9) popup_ai3_data_window

0xe87f,	// (0x00042710) grid_ai3_links_pane

0x6730,	// (0x0003a5c1) cell_ai3_links_pane_ParamLimits

0x6730,	// (0x0003a5c1) cell_ai3_links_pane

0x5d48,	// (0x00039bd9) bg_popup_sub_pane_cp11

0x5d55,	// (0x00039be6) cell_ai3_links_pane_g1

0xe87f,	// (0x00042710) bg_popup_sub_pane_cp12

0x5d7a,	// (0x00039c0b) heading_ai3_data_pane

0x5d82,	// (0x00039c13) list_ai3_gene_pane

0x5d8e,	// (0x00039c1f) popup_ai3_data_window_g1

0x5d96,	// (0x00039c27) heading_ai3_data_pane_g1

0x5d9e,	// (0x00039c2f) heading_ai3_data_pane_t1

0x5dac,	// (0x00039c3d) list_double_ai3_gene_pane_ParamLimits

0x5dac,	// (0x00039c3d) list_double_ai3_gene_pane

0x5db9,	// (0x00039c4a) list_single_ai3_gene_pane_ParamLimits

0x5db9,	// (0x00039c4a) list_single_ai3_gene_pane

0x4212,	// (0x000380a3) list_highlight_pane_cp7_ParamLimits

0x4212,	// (0x000380a3) list_highlight_pane_cp7

0x5dc6,	// (0x00039c57) list_single_a13_gene_pane_t1_ParamLimits

0x5dc6,	// (0x00039c57) list_single_a13_gene_pane_t1

0x5ddd,	// (0x00039c6e) list_single_ai3_gene_pane_g1

0x5de6,	// (0x00039c77) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x00043b3a) list_single_ai3_gene_pane_g

0x5dee,	// (0x00039c7f) list_double_ai3_gene_pane_g1_ParamLimits

0x5dee,	// (0x00039c7f) list_double_ai3_gene_pane_g1

0x5dfa,	// (0x00039c8b) list_double_ai3_gene_pane_t1_ParamLimits

0x5dfa,	// (0x00039c8b) list_double_ai3_gene_pane_t1

0x5e16,	// (0x00039ca7) list_double_ai3_gene_pane_t2_ParamLimits

0x5e16,	// (0x00039ca7) list_double_ai3_gene_pane_t2

0x5e2b,	// (0x00039cbc) list_double_ai3_gene_pane_t3_ParamLimits

0x5e2b,	// (0x00039cbc) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x00043b3f) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x00043b3f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe744,	// (0x000425d5) aid_size_min_col_2

0x6704,	// (0x0003a595) aid_size_min_msg_ParamLimits

0x6704,	// (0x0003a595) aid_size_min_msg

0x647a,	// (0x0003a30b) fep_vkb_top_text_pane_g2_ParamLimits

0x647a,	// (0x0003a30b) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x000439a6) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x000439a6) fep_vkb_top_text_pane_g

0xb294,	// (0x0003f125) main_hc_apps_shell_pane

0x5e48,	// (0x00039cd9) grid_hc_apps_pane_ParamLimits

0x5e48,	// (0x00039cd9) grid_hc_apps_pane

0x5e5a,	// (0x00039ceb) list_hc_apps_pane

0x5e62,	// (0x00039cf3) scroll_pane_cp37_ParamLimits

0x5e62,	// (0x00039cf3) scroll_pane_cp37

0x6744,	// (0x0003a5d5) cell_hc_apps_pane_ParamLimits

0x6744,	// (0x0003a5d5) cell_hc_apps_pane

0x67d2,	// (0x0003a663) cell_hc_apps_pane_g1_ParamLimits

0x67d2,	// (0x0003a663) cell_hc_apps_pane_g1

0x5e6e,	// (0x00039cff) cell_hc_apps_pane_g2_ParamLimits

0x5e6e,	// (0x00039cff) cell_hc_apps_pane_g2

0x5e8a,	// (0x00039d1b) cell_hc_apps_pane_g3_ParamLimits

0x5e8a,	// (0x00039d1b) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x00043b46) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x00043b46) cell_hc_apps_pane_g

0x67fe,	// (0x0003a68f) cell_hc_apps_pane_t1_ParamLimits

0x67fe,	// (0x0003a68f) cell_hc_apps_pane_t1

0xeaa2,	// (0x00042933) grid_highlight_pane_cp10_ParamLimits

0xeaa2,	// (0x00042933) grid_highlight_pane_cp10

0x683c,	// (0x0003a6cd) list_single_hc_apps_pane_ParamLimits

0x683c,	// (0x0003a6cd) list_single_hc_apps_pane

0x686c,	// (0x0003a6fd) list_single_hc_apps_pane_g1

0x0fb6,	// (0x00034e47) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x00043b4d) list_single_hc_apps_pane_g

0x0fcf,	// (0x00034e60) list_single_hc_apps_pane_g2_copy1

0xe831,	// (0x000426c2) list_single_hc_apps_pane_t1

0xe959,	// (0x000427ea) bg_set_opt_pane_cp_ParamLimits

0xb4a5,	// (0x0003f336) setting_slider_pane_t1_ParamLimits

0xb4bb,	// (0x0003f34c) setting_slider_pane_t2_ParamLimits

0xb4d4,	// (0x0003f365) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000433ca) setting_slider_pane_t_ParamLimits

0xb4eb,	// (0x0003f37c) slider_set_pane_ParamLimits

0xb987,	// (0x0003f818) control_pane_g5_ParamLimits

0xb987,	// (0x0003f818) control_pane_g5

0x35e6,	// (0x00037477) slider_set_pane_g1_ParamLimits

0xc220,	// (0x000400b1) slider_set_pane_g2_ParamLimits

0xc22c,	// (0x000400bd) slider_set_pane_g3_ParamLimits

0xc240,	// (0x000400d1) slider_set_pane_g4_ParamLimits

0xc258,	// (0x000400e9) slider_set_pane_g5_ParamLimits

0xc22c,	// (0x000400bd) slider_set_pane_g6_ParamLimits

0xc26e,	// (0x000400ff) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x000437ce) slider_set_pane_g_ParamLimits

0xe959,	// (0x000427ea) navi_icon_text_pane_ParamLimits

0x53cd,	// (0x0003925e) aid_fill_nsta_2_ParamLimits

0x53f3,	// (0x00039284) aid_touch_tab_arrow_left_ParamLimits

0x53ff,	// (0x00039290) aid_touch_tab_arrow_right_ParamLimits

0x5469,	// (0x000392fa) clock_nsta_pane_ParamLimits

0x3176,	// (0x00037007) navi_icon_pane_g1_ParamLimits

0x3182,	// (0x00037013) navi_text_pane_t1_ParamLimits

0x3efb,	// (0x00037d8c) navi_icon_text_pane_g1_ParamLimits

0x3f07,	// (0x00037d98) navi_icon_text_pane_t1_ParamLimits

0x686c,	// (0x0003a6fd) list_single_hc_apps_pane_g1_ParamLimits

0x0fb6,	// (0x00034e47) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x00043b4d) list_single_hc_apps_pane_g_ParamLimits

0x0fcf,	// (0x00034e60) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe831,	// (0x000426c2) list_single_hc_apps_pane_t1_ParamLimits

0xb3d7,	// (0x0003f268) popup_toolbar2_fixed_window_ParamLimits

0xb3d7,	// (0x0003f268) popup_toolbar2_fixed_window

0xbe8b,	// (0x0003fd1c) popup_toolbar2_float_window

0xe87f,	// (0x00042710) bg_popup_sub_pane_cp27

0x5eac,	// (0x00039d3d) grid_toolbar2_float_pane

0xe87f,	// (0x00042710) bg_popup_sub_pane_cp26

0x5eac,	// (0x00039d3d) grid_toolbar2_fixed_pane

0x6885,	// (0x0003a716) cell_toolbar2_fixed_pane_ParamLimits

0x6885,	// (0x0003a716) cell_toolbar2_fixed_pane

0x6896,	// (0x0003a727) cell_toolbar2_fixed_pane_g1

0x5eb4,	// (0x00039d45) toolbar2_fixed_button_pane

0x24c5,	// (0x00036356) toolbar2_fixed_button_pane_g1

0x24cd,	// (0x0003635e) toolbar2_fixed_button_pane_g2

0x24d5,	// (0x00036366) toolbar2_fixed_button_pane_g3

0x24dd,	// (0x0003636e) toolbar2_fixed_button_pane_g4

0x24e5,	// (0x00036376) toolbar2_fixed_button_pane_g5

0x24ed,	// (0x0003637e) toolbar2_fixed_button_pane_g6

0x24f5,	// (0x00036386) toolbar2_fixed_button_pane_g7

0x24fd,	// (0x0003638e) toolbar2_fixed_button_pane_g8

0x2505,	// (0x00036396) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x000436d0) toolbar2_fixed_button_pane_g

0x5ebc,	// (0x00039d4d) cell_toolbar2_float_pane_ParamLimits

0x5ebc,	// (0x00039d4d) cell_toolbar2_float_pane

0x5ecd,	// (0x00039d5e) cell_toolbar2_float_pane_g1

0x5eb4,	// (0x00039d45) toolbar2_fixed_button_pane_cp

0x6433,	// (0x0003a2c4) fep_vkb_accented_list_pane_ParamLimits

0x6433,	// (0x0003a2c4) fep_vkb_accented_list_pane

0xc619,	// (0x000404aa) bg_popup_fep_shadow_pane_g9

0x2139,	// (0x00035fca) bg_popup_fep_shadow_pane_cp3

0xf10e,	// (0x00042f9f) list_accented_list_pane

0x5ed6,	// (0x00039d67) list_single_accented_list_pane_ParamLimits

0x5ed6,	// (0x00039d67) list_single_accented_list_pane

0x2139,	// (0x00035fca) list_highlight_pane_cp10

0x5ee7,	// (0x00039d78) list_single_accented_list_pane_t1

0xbdf1,	// (0x0003fc82) popup_slider_window_ParamLimits

0xbdf1,	// (0x0003fc82) popup_slider_window

0x5d14,	// (0x00039ba5) aid_indentation_list_msg

0x6931,	// (0x0003a7c2) bg_popup_window_pane_cp19

0x5f4d,	// (0x00039dde) popup_slider_window_g1

0x5f69,	// (0x00039dfa) popup_slider_window_g2

0x5f85,	// (0x00039e16) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x00043b52) popup_slider_window_g

0x5fa1,	// (0x00039e32) popup_slider_window_t1

0x5fe5,	// (0x00039e76) small_volume_slider_vertical_pane

0x424d,	// (0x000380de) small_volume_slider_vertical_pane_g1

0x424d,	// (0x000380de) small_volume_slider_vertical_pane_g2

0x6001,	// (0x00039e92) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x00043b64) small_volume_slider_vertical_pane_g

0xb24b,	// (0x0003f0dc) area_side_right_pane_ParamLimits

0xb24b,	// (0x0003f0dc) area_side_right_pane

0xc801,	// (0x00040692) aid_size_side_button_ParamLimits

0xc801,	// (0x00040692) aid_size_side_button

0xc815,	// (0x000406a6) grid_sctrl_middle_pane_ParamLimits

0xc815,	// (0x000406a6) grid_sctrl_middle_pane

0xc831,	// (0x000406c2) sctrl_sk_bottom_pane

0xc842,	// (0x000406d3) sctrl_sk_top_pane

0xc854,	// (0x000406e5) aid_touch_sctrl_top

0xc861,	// (0x000406f2) bg_sctrl_sk_pane_ParamLimits

0xc861,	// (0x000406f2) bg_sctrl_sk_pane

0xc86f,	// (0x00040700) sctrl_sk_top_pane_g1

0xc87c,	// (0x0004070d) sctrl_sk_top_pane_t1

0xc854,	// (0x000406e5) aid_touch_sctrl_bottom

0xc861,	// (0x000406f2) bg_sctrl_sk_pane_cp_ParamLimits

0xc861,	// (0x000406f2) bg_sctrl_sk_pane_cp

0xc897,	// (0x00040728) sctrl_sk_bottom_pane_g1

0xc87c,	// (0x0004070d) sctrl_sk_bottom_pane_t1

0xc8a0,	// (0x00040731) cell_sctrl_middle_pane_ParamLimits

0xc8a0,	// (0x00040731) cell_sctrl_middle_pane

0xc8bb,	// (0x0004074c) aid_touch_sctrl_middle_ParamLimits

0xc8bb,	// (0x0004074c) aid_touch_sctrl_middle

0xc8cc,	// (0x0004075d) bg_sctrl_middle_pane_ParamLimits

0xc8cc,	// (0x0004075d) bg_sctrl_middle_pane

0xc639,	// (0x000404ca) cell_sctrl_middle_pane_g1_ParamLimits

0xc639,	// (0x000404ca) cell_sctrl_middle_pane_g1

0xc8da,	// (0x0004076b) cell_sctrl_middle_pane_g2_ParamLimits

0xc8da,	// (0x0004076b) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x00043b70) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x00043b70) cell_sctrl_middle_pane_g

0x24c5,	// (0x00036356) bg_sctrl_middle_pane_g1

0x24d5,	// (0x00036366) bg_sctrl_middle_pane_g2

0x24cd,	// (0x0003635e) bg_sctrl_middle_pane_g3

0x24e5,	// (0x00036376) bg_sctrl_middle_pane_g4

0x24dd,	// (0x0003636e) bg_sctrl_middle_pane_g5

0x24ed,	// (0x0003637e) bg_sctrl_middle_pane_g6

0x24f5,	// (0x00036386) bg_sctrl_middle_pane_g7

0x2505,	// (0x00036396) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x00043b75) bg_sctrl_middle_pane_g

0x24fd,	// (0x0003638e) bg_sctrl_middle_pane_g8_copy1

0x24c5,	// (0x00036356) bg_sctrl_sk_pane_g1

0x24cd,	// (0x0003635e) bg_sctrl_sk_pane_g2

0x24d5,	// (0x00036366) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x000436d0) bg_sctrl_sk_pane_g

0xee57,	// (0x00042ce8) aid_size_touch_scroll_bar

0x24dd,	// (0x0003636e) bg_sctrl_sk_pane_g4

0x24e5,	// (0x00036376) bg_sctrl_sk_pane_g5

0x24ed,	// (0x0003637e) bg_sctrl_sk_pane_g6

0x24f5,	// (0x00036386) bg_sctrl_sk_pane_g7

0x24fd,	// (0x0003638e) bg_sctrl_sk_pane_g8

0x2505,	// (0x00036396) bg_sctrl_sk_pane_g9

0xbb27,	// (0x0003f9b8) popup_fep_china_hwr2_fs_candidate_window

0xbb2f,	// (0x0003f9c0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbb2f,	// (0x0003f9c0) popup_fep_china_hwr2_fs_control_window

0xc639,	// (0x000404ca) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x00043b6b) sctrl_sk_top_pane_g

0x69ab,	// (0x0003a83c) aid_fep_china_hwr2_fs_cell_ParamLimits

0x69ab,	// (0x0003a83c) aid_fep_china_hwr2_fs_cell

0x69bc,	// (0x0003a84d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x69bc,	// (0x0003a84d) bg_popup_fep_shadow_pane_cp4

0x69d3,	// (0x0003a864) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x69d3,	// (0x0003a864) bg_popup_fep_shadow_pane_cp5

0x69e5,	// (0x0003a876) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x69e5,	// (0x0003a876) popup_fep_china_hwr2_fs_control_bar_grid

0x69f5,	// (0x0003a886) popup_fep_china_hwr2_fs_control_funtion_grid

0x600a,	// (0x00039e9b) aid_fep_china_hwr2_fs_candi_cell

0xe87f,	// (0x00042710) bg_popup_fep_shadow_pane_cp6

0x6014,	// (0x00039ea5) popup_fep_china_hwr2_fs_candidate_grid

0x69fd,	// (0x0003a88e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x69fd,	// (0x0003a88e) cell_fep_china_hwr2_fs_funtion_grid

0x424d,	// (0x000380de) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x601c,	// (0x00039ead) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x601c,	// (0x00039ead) cell_fep_china_hwr2_fs_funtion_grid_g1

0x602a,	// (0x00039ebb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x602a,	// (0x00039ebb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x00043b86) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x00043b86) cell_fep_china_hwr2_fs_funtion_grid_g

0x6a15,	// (0x0003a8a6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x6a15,	// (0x0003a8a6) cell_fep_china_hwr2_fs_funtion_grid_t1

0x6a2a,	// (0x0003a8bb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x6a2a,	// (0x0003a8bb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x00043b8b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x00043b8b) cell_fep_china_hwr2_fs_funtion_grid_t

0x6040,	// (0x00039ed1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6048,	// (0x00039ed9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6050,	// (0x00039ee1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x00043b90) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6058,	// (0x00039ee9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6058,	// (0x00039ee9) cell_fep_china_hwr2_fs_candidate_grid

0x6071,	// (0x00039f02) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6079,	// (0x00039f0a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x424d,	// (0x000380de) cell_fep_china_hwr2_fs_candidate_grid_g1

0x424d,	// (0x000380de) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x000439ab) cell_fep_china_hwr2_fs_candidate_grid_g

0x6081,	// (0x00039f12) cell_fep_china_hwr2_fs_candidate_grid_t1

0x232a,	// (0x000361bb) clock_nsta_pane_cp_24_ParamLimits

0x232a,	// (0x000361bb) clock_nsta_pane_cp_24

0x2387,	// (0x00036218) indicator_nsta_pane_cp_24_ParamLimits

0x2387,	// (0x00036218) indicator_nsta_pane_cp_24

0x3081,	// (0x00036f12) heading_pane_g1

0x0001,

0xf8a4,	// (0x00043735) heading_pane_g

0x621d,	// (0x0003a0ae) grid_sct_catagory_button_pane

0x36e8,	// (0x00037579) scroll_pane_cp5_ParamLimits

0x3f2d,	// (0x00037dbe) button_value_adjust_pane_cp5_ParamLimits

0x3f2d,	// (0x00037dbe) button_value_adjust_pane_cp5

0x3feb,	// (0x00037e7c) form2_midp_time_pane_ParamLimits

0x608f,	// (0x00039f20) cell_sct_catagory_button_pane_ParamLimits

0x608f,	// (0x00039f20) cell_sct_catagory_button_pane

0x4212,	// (0x000380a3) bg_button_pane_cp01_ParamLimits

0x4212,	// (0x000380a3) bg_button_pane_cp01

0x424d,	// (0x000380de) cell_sct_catagory_button_pane_g1

0xbe28,	// (0x0003fcb9) popup_tb_extension_window

0x6a46,	// (0x0003a8d7) aid_size_cell_ext_ParamLimits

0x6a46,	// (0x0003a8d7) aid_size_cell_ext

0xeaa2,	// (0x00042933) bg_tb_trans_pane_cp1_ParamLimits

0xeaa2,	// (0x00042933) bg_tb_trans_pane_cp1

0x6a66,	// (0x0003a8f7) grid_tb_ext_pane_ParamLimits

0x6a66,	// (0x0003a8f7) grid_tb_ext_pane

0x6a8c,	// (0x0003a91d) cell_tb_ext_pane_ParamLimits

0x6a8c,	// (0x0003a91d) cell_tb_ext_pane

0x6aa1,	// (0x0003a932) cell_tb_ext_pane_g1_ParamLimits

0x6aa1,	// (0x0003a932) cell_tb_ext_pane_g1

0x60a1,	// (0x00039f32) cell_tb_ext_pane_t1

0xeaa2,	// (0x00042933) list_highlight_pane_cp11_ParamLimits

0xeaa2,	// (0x00042933) list_highlight_pane_cp11

0xb3f6,	// (0x0003f287) popup_uni_indicator_window_ParamLimits

0xb3f6,	// (0x0003f287) popup_uni_indicator_window

0xefd1,	// (0x00042e62) bg_popup_sub_pane_cp14

0x60bc,	// (0x00039f4d) list_uniindi_pane

0x60c8,	// (0x00039f59) uniindi_top_pane

0xeaa2,	// (0x00042933) bg_uniindi_top_pane

0x60e7,	// (0x00039f78) uniindi_top_pane_g1

0x60fd,	// (0x00039f8e) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x00043b97) uniindi_top_pane_g

0x6127,	// (0x00039fb8) uniindi_top_pane_t1

0x6151,	// (0x00039fe2) list_single_uniindi_pane_ParamLimits

0x6151,	// (0x00039fe2) list_single_uniindi_pane

0x424d,	// (0x000380de) bg_uniindi_top_pane_g1

0x6163,	// (0x00039ff4) list_single_uniindi_pane_g1

0x6176,	// (0x0003a007) list_single_uniindi_pane_t1

0xb294,	// (0x0003f125) control_bg_pane

0x619b,	// (0x0003a02c) bg_sctrl_sk_pane_cp1

0x61a4,	// (0x0003a035) bg_sctrl_sk_pane_cp2

0x61ad,	// (0x0003a03e) control_bg_pane_g1

0x61b6,	// (0x0003a047) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x00043ba0) control_bg_pane_g

0x3e53,	// (0x00037ce4) cell_indicator_nsta_pane_g1_ParamLimits

0x631d,	// (0x0003a1ae) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0004390f) cell_indicator_nsta_pane_g_ParamLimits

0xe5bb,	// (0x0004244c) form2_midp_time_pane_t1_ParamLimits

0xba9d,	// (0x0003f92e) main_idle_act4_pane_ParamLimits

0xba9d,	// (0x0003f92e) main_idle_act4_pane

0xbe28,	// (0x0003fcb9) popup_tb_extension_window_ParamLimits

0x6a80,	// (0x0003a911) tb_ext_find_pane_ParamLimits

0x6a80,	// (0x0003a911) tb_ext_find_pane

0x61bf,	// (0x0003a050) ai_gene_pane_1_cp1

0x21cd,	// (0x0003605e) ai_gene_pane_2_cp1

0x61c7,	// (0x0003a058) list_single_idle_plugin_calendar_pane

0x61d0,	// (0x0003a061) list_single_idle_plugin_notification_pane

0x61d9,	// (0x0003a06a) list_single_idle_plugin_player_pane

0x6abe,	// (0x0003a94f) list_single_idle_plugin_shortcut_pane_ParamLimits

0x6abe,	// (0x0003a94f) list_single_idle_plugin_shortcut_pane

0x6ae0,	// (0x0003a971) main_idle_act4_pane_t1

0x6af2,	// (0x0003a983) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x00043ba5) main_idle_act4_pane_t

0x6b04,	// (0x0003a995) middle_sk_idle_act4_pane_ParamLimits

0x6b04,	// (0x0003a995) middle_sk_idle_act4_pane

0x6b1a,	// (0x0003a9ab) popup_clock_digital_analogue_window_cp2

0x6b34,	// (0x0003a9c5) shortcut_wheel_idle_act4_pane_ParamLimits

0x6b34,	// (0x0003a9c5) shortcut_wheel_idle_act4_pane

0x424d,	// (0x000380de) shortcut_wheel_idle_act4_pane_g1

0x424d,	// (0x000380de) shortcut_wheel_idle_act4_pane_g2

0x424d,	// (0x000380de) shortcut_wheel_idle_act4_pane_g3

0x424d,	// (0x000380de) shortcut_wheel_idle_act4_pane_g4

0x424d,	// (0x000380de) shortcut_wheel_idle_act4_pane_g5

0x61e2,	// (0x0003a073) shortcut_wheel_idle_act4_pane_g6

0x61ea,	// (0x0003a07b) shortcut_wheel_idle_act4_pane_g7

0x61f2,	// (0x0003a083) shortcut_wheel_idle_act4_pane_g8

0x61fa,	// (0x0003a08b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x00043baa) shortcut_wheel_idle_act4_pane_g

0x4479,	// (0x0003830a) middle_sk_idle_act4_pane_g1_ParamLimits

0x4479,	// (0x0003830a) middle_sk_idle_act4_pane_g1

0x6ba4,	// (0x0003aa35) middle_sk_idle_act4_pane_g2_ParamLimits

0x6ba4,	// (0x0003aa35) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x00043bcd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x00043bcd) middle_sk_idle_act4_pane_g

0x6bb0,	// (0x0003aa41) middle_sk_idle_act4_pane_t1_ParamLimits

0x6bb0,	// (0x0003aa41) middle_sk_idle_act4_pane_t1

0x6bcd,	// (0x0003aa5e) grid_ai_shortcut_pane_ParamLimits

0x6bcd,	// (0x0003aa5e) grid_ai_shortcut_pane

0x6be6,	// (0x0003aa77) list_highlight_pane_cp16_ParamLimits

0x6be6,	// (0x0003aa77) list_highlight_pane_cp16

0x6bf3,	// (0x0003aa84) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x6bf3,	// (0x0003aa84) list_single_idle_plugin_shortcut_pane_g1

0x6bff,	// (0x0003aa90) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x6bff,	// (0x0003aa90) list_single_idle_plugin_shortcut_pane_g2

0x6c17,	// (0x0003aaa8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x6c17,	// (0x0003aaa8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x00043bd2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x00043bd2) list_single_idle_plugin_shortcut_pane_g

0x6c2a,	// (0x0003aabb) cell_ai_shortcut_pane_ParamLimits

0x6c2a,	// (0x0003aabb) cell_ai_shortcut_pane

0x6c4b,	// (0x0003aadc) cell_ai_shortcut_pane_g1_ParamLimits

0x6c4b,	// (0x0003aadc) cell_ai_shortcut_pane_g1

0x61bf,	// (0x0003a050) ai_gene_pane_1_cp2

0x6c6d,	// (0x0003aafe) ai_gene_pane_2_cp2

0x6c75,	// (0x0003ab06) list_highlight_pane_cp15

0x6c7e,	// (0x0003ab0f) list_single_idle_plugin_calendar_pane_g1

0x6c75,	// (0x0003ab06) list_highlight_pane_cp17

0x6c86,	// (0x0003ab17) list_single_idle_plugin_calendar_pane_g1_copy1

0x6c8e,	// (0x0003ab1f) list_single_idle_plugin_player_pane_g1

0x38a2,	// (0x00037733) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x00043bd9) list_single_idle_plugin_player_pane_g

0x6c96,	// (0x0003ab27) list_single_idle_plugin_player_pane_t1

0x6ca4,	// (0x0003ab35) list_single_idle_plugin_player_pane_t2

0x6cb2,	// (0x0003ab43) list_single_idle_plugin_player_pane_t3

0x6cc0,	// (0x0003ab51) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x00043bde) list_single_idle_plugin_player_pane_t

0x6cce,	// (0x0003ab5f) wait_bar_pane_cp15

0x6cd6,	// (0x0003ab67) grid_ai_notification_pane

0x38a2,	// (0x00037733) list_single_idle_plugin_notification_pane_g1

0x6cdf,	// (0x0003ab70) cell_ai_notification_pane_ParamLimits

0x6cdf,	// (0x0003ab70) cell_ai_notification_pane

0x6cec,	// (0x0003ab7d) cell_ai_notification_pane_g1

0x6cf4,	// (0x0003ab85) cell_ai_notification_pane_t1

0x6d02,	// (0x0003ab93) tb_ext_find_button_pane

0x6d0a,	// (0x0003ab9b) tb_ext_find_pane_g1

0x6d12,	// (0x0003aba3) tb_ext_find_pane_t1

0xf4de,	// (0x0004336f) tb_ext_find_button_pane_g1

0x6d20,	// (0x0003abb1) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x00043be7) tb_ext_find_button_pane_g

0x6ae0,	// (0x0003a971) main_idle_act4_pane_t1_ParamLimits

0x6af2,	// (0x0003a983) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x00043ba5) main_idle_act4_pane_t_ParamLimits

0x6b1a,	// (0x0003a9ab) popup_clock_digital_analogue_window_cp2_ParamLimits

0x6b28,	// (0x0003a9b9) sat_plugin_idle_act4_pane_ParamLimits

0x6b28,	// (0x0003a9b9) sat_plugin_idle_act4_pane

0x6d29,	// (0x0003abba) sat_plugin_idle_act4_pane_t1_ParamLimits

0x6d29,	// (0x0003abba) sat_plugin_idle_act4_pane_t1

0x6d3c,	// (0x0003abcd) sat_plugin_idle_act4_pane_t2_ParamLimits

0x6d3c,	// (0x0003abcd) sat_plugin_idle_act4_pane_t2

0x6d4f,	// (0x0003abe0) sat_plugin_idle_act4_pane_t3_ParamLimits

0x6d4f,	// (0x0003abe0) sat_plugin_idle_act4_pane_t3

0x6d62,	// (0x0003abf3) sat_plugin_idle_act4_pane_t4_ParamLimits

0x6d62,	// (0x0003abf3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x00043bec) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x00043bec) sat_plugin_idle_act4_pane_t

0xb357,	// (0x0003f1e8) popup_battery_window_ParamLimits

0xb357,	// (0x0003f1e8) popup_battery_window

0xeaa2,	// (0x00042933) bg_popup_sub_pane_cp25_ParamLimits

0xeaa2,	// (0x00042933) bg_popup_sub_pane_cp25

0x6d75,	// (0x0003ac06) popup_battery_window_g1_ParamLimits

0x6d75,	// (0x0003ac06) popup_battery_window_g1

0x6d81,	// (0x0003ac12) popup_battery_window_t1_ParamLimits

0x6d81,	// (0x0003ac12) popup_battery_window_t1

0x6d93,	// (0x0003ac24) popup_battery_window_t2_ParamLimits

0x6d93,	// (0x0003ac24) popup_battery_window_t2

0x0001,

0xfd64,	// (0x00043bf5) popup_battery_window_t_ParamLimits

0xfd64,	// (0x00043bf5) popup_battery_window_t

0x5266,	// (0x000390f7) midp_canvas_pane_ParamLimits

0x52c2,	// (0x00039153) midp_keypad_pane_ParamLimits

0x52c2,	// (0x00039153) midp_keypad_pane

0x01e5,	// (0x00034076) main_midp_pane_ParamLimits

0x3ec9,	// (0x00037d5a) signal_pane_g2_cp_ParamLimits

0x6db0,	// (0x0003ac41) aid_size_cell_midp_keypad_ParamLimits

0x6db0,	// (0x0003ac41) aid_size_cell_midp_keypad

0x6dca,	// (0x0003ac5b) midp_keyp_game_grid_pane_ParamLimits

0x6dca,	// (0x0003ac5b) midp_keyp_game_grid_pane

0x6de4,	// (0x0003ac75) midp_keyp_rocker_pane_ParamLimits

0x6de4,	// (0x0003ac75) midp_keyp_rocker_pane

0x6e11,	// (0x0003aca2) midp_keyp_sk_left_pane_ParamLimits

0x6e11,	// (0x0003aca2) midp_keyp_sk_left_pane

0x6e69,	// (0x0003acfa) midp_keyp_sk_right_pane_ParamLimits

0x6e69,	// (0x0003acfa) midp_keyp_sk_right_pane

0xe87f,	// (0x00042710) bg_button_pane_cp03

0x6ebb,	// (0x0003ad4c) midp_keyp_sk_left_pane_g1

0xe87f,	// (0x00042710) bg_button_pane_cp04

0x6ebb,	// (0x0003ad4c) midp_keyp_sk_right_pane_g1

0x424d,	// (0x000380de) midp_keyp_rocker_pane_g1

0x6ec4,	// (0x0003ad55) keyp_game_cell_pane_ParamLimits

0x6ec4,	// (0x0003ad55) keyp_game_cell_pane

0xe87f,	// (0x00042710) bg_button_pane_cp02

0x6ed5,	// (0x0003ad66) keyp_game_cell_pane_g1

0xb38d,	// (0x0003f21e) popup_fep_vkb2_window_ParamLimits

0xb38d,	// (0x0003f21e) popup_fep_vkb2_window

0xc8fe,	// (0x0004078f) aid_size_cell_vkb2_ParamLimits

0xc8fe,	// (0x0004078f) aid_size_cell_vkb2

0xc952,	// (0x000407e3) popup_fep_vkb2_window_g1_ParamLimits

0xc952,	// (0x000407e3) popup_fep_vkb2_window_g1

0xc99a,	// (0x0004082b) vkb2_area_bottom_pane_ParamLimits

0xc99a,	// (0x0004082b) vkb2_area_bottom_pane

0xc9d2,	// (0x00040863) vkb2_area_keypad_pane_ParamLimits

0xc9d2,	// (0x00040863) vkb2_area_keypad_pane

0xca0a,	// (0x0004089b) vkb2_area_top_pane_ParamLimits

0xca0a,	// (0x0004089b) vkb2_area_top_pane

0xca7a,	// (0x0004090b) vkb2_top_entry_pane_ParamLimits

0xca7a,	// (0x0004090b) vkb2_top_entry_pane

0xcaa4,	// (0x00040935) vkb2_top_grid_left_pane_ParamLimits

0xcaa4,	// (0x00040935) vkb2_top_grid_left_pane

0xcac2,	// (0x00040953) vkb2_top_grid_right_pane_ParamLimits

0xcac2,	// (0x00040953) vkb2_top_grid_right_pane

0xcae0,	// (0x00040971) vkb2_cell_keypad_pane_ParamLimits

0xcae0,	// (0x00040971) vkb2_cell_keypad_pane

0xcb91,	// (0x00040a22) vkb2_area_bottom_grid_pane_ParamLimits

0xcb91,	// (0x00040a22) vkb2_area_bottom_grid_pane

0xcbb5,	// (0x00040a46) vkb2_area_bottom_pane_g1_ParamLimits

0xcbb5,	// (0x00040a46) vkb2_area_bottom_pane_g1

0xcbd9,	// (0x00040a6a) vkb2_area_bottom_pane_g2_ParamLimits

0xcbd9,	// (0x00040a6a) vkb2_area_bottom_pane_g2

0xcc07,	// (0x00040a98) vkb2_area_bottom_pane_g3_ParamLimits

0xcc07,	// (0x00040a98) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x00043bfa) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x00043bfa) vkb2_area_bottom_pane_g

0xcc58,	// (0x00040ae9) vkb2_top_cell_left_pane_ParamLimits

0xcc58,	// (0x00040ae9) vkb2_top_cell_left_pane

0x6ee6,	// (0x0003ad77) vkb2_top_entry_pane_g1_ParamLimits

0x6ee6,	// (0x0003ad77) vkb2_top_entry_pane_g1

0x6ef4,	// (0x0003ad85) vkb2_top_entry_pane_t1_ParamLimits

0x6ef4,	// (0x0003ad85) vkb2_top_entry_pane_t1

0x6f26,	// (0x0003adb7) vkb2_top_entry_pane_t2_ParamLimits

0x6f26,	// (0x0003adb7) vkb2_top_entry_pane_t2

0x6f58,	// (0x0003ade9) vkb2_top_entry_pane_t3_ParamLimits

0x6f58,	// (0x0003ade9) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x00043c01) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x00043c01) vkb2_top_entry_pane_t

0xcca5,	// (0x00040b36) vkb2_top_grid_right_pane_g1_ParamLimits

0xcca5,	// (0x00040b36) vkb2_top_grid_right_pane_g1

0xccbb,	// (0x00040b4c) vkb2_top_grid_right_pane_g2_ParamLimits

0xccbb,	// (0x00040b4c) vkb2_top_grid_right_pane_g2

0xccd3,	// (0x00040b64) vkb2_top_grid_right_pane_g3_ParamLimits

0xccd3,	// (0x00040b64) vkb2_top_grid_right_pane_g3

0xcceb,	// (0x00040b7c) vkb2_top_grid_right_pane_g4_ParamLimits

0xcceb,	// (0x00040b7c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x00043c08) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x00043c08) vkb2_top_grid_right_pane_g

0xcd01,	// (0x00040b92) vkb2_top_cell_left_pane_g1

0xcd18,	// (0x00040ba9) vkb2_cell_keypad_pane_g1_ParamLimits

0xcd18,	// (0x00040ba9) vkb2_cell_keypad_pane_g1

0x906b,	// (0x0003cefc) vkb2_cell_keypad_pane_t1_ParamLimits

0x906b,	// (0x0003cefc) vkb2_cell_keypad_pane_t1

0xcd26,	// (0x00040bb7) vkb2_cell_bottom_grid_pane_ParamLimits

0xcd26,	// (0x00040bb7) vkb2_cell_bottom_grid_pane

0xcd5f,	// (0x00040bf0) vkb2_cell_bottom_grid_pane_g1

0x6b48,	// (0x0003a9d9) aid_call2_pane_cp02

0x6b50,	// (0x0003a9e1) aid_call_pane_cp02

0x6b58,	// (0x0003a9e9) clock_digital_number_pane_cp10

0x6b60,	// (0x0003a9f1) clock_digital_number_pane_cp11

0x6b68,	// (0x0003a9f9) clock_digital_number_pane_cp12

0x6b70,	// (0x0003aa01) clock_digital_number_pane_cp13

0x6b78,	// (0x0003aa09) clock_digital_separator_pane_cp10

0xf4de,	// (0x0004336f) popup_clock_digital_analogue_window_cp2_g1

0xf4de,	// (0x0004336f) popup_clock_digital_analogue_window_cp2_g2

0x6b80,	// (0x0003aa11) popup_clock_digital_analogue_window_cp2_g3

0xf4de,	// (0x0004336f) popup_clock_digital_analogue_window_cp2_g4

0x6b80,	// (0x0003aa11) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x00043bbd) popup_clock_digital_analogue_window_cp2_g

0x6b88,	// (0x0003aa19) popup_clock_digital_analogue_window_cp2_t1

0x6b96,	// (0x0003aa27) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x00043bc8) popup_clock_digital_analogue_window_cp2_t

0x424d,	// (0x000380de) clock_digital_number_pane_cp10_g1

0x424d,	// (0x000380de) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x000439ab) clock_digital_number_pane_cp10_g

0x424d,	// (0x000380de) clock_digital_separator_pane_cp10_g1

0x424d,	// (0x000380de) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x000439ab) clock_digital_separator_pane_cp10_g

0x6109,	// (0x00039f9a) uniindi_top_pane_g3

0x611a,	// (0x00039fab) uniindi_top_pane_g4

0xcb4b,	// (0x000409dc) vkb2_row_keypad_pane_ParamLimits

0xcb4b,	// (0x000409dc) vkb2_row_keypad_pane

0xcd7b,	// (0x00040c0c) vkb2_cell_t_keypad_pane_ParamLimits

0xcd7b,	// (0x00040c0c) vkb2_cell_t_keypad_pane

0xcd88,	// (0x00040c19) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xcd88,	// (0x00040c19) vkb2_cell_t_keypad_pane_cp08

0xcd98,	// (0x00040c29) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xcd98,	// (0x00040c29) vkb2_cell_t_keypad_pane_cp09

0xcda9,	// (0x00040c3a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xcda9,	// (0x00040c3a) vkb2_cell_t_keypad_pane_cp01

0xcdb9,	// (0x00040c4a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xcdb9,	// (0x00040c4a) vkb2_cell_t_keypad_pane_cp02

0xcdc9,	// (0x00040c5a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xcdc9,	// (0x00040c5a) vkb2_cell_t_keypad_pane_cp03

0xcdd9,	// (0x00040c6a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xcdd9,	// (0x00040c6a) vkb2_cell_t_keypad_pane_cp04

0xcde9,	// (0x00040c7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xcde9,	// (0x00040c7a) vkb2_cell_t_keypad_pane_cp05

0xcdf9,	// (0x00040c8a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xcdf9,	// (0x00040c8a) vkb2_cell_t_keypad_pane_cp06

0xce09,	// (0x00040c9a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xce09,	// (0x00040c9a) vkb2_cell_t_keypad_pane_cp07

0xce19,	// (0x00040caa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xce19,	// (0x00040caa) vkb2_cell_t_keypad_pane_cp10

0xc639,	// (0x000404ca) vkb2_cell_t_keypad_pane_g1

0x9082,	// (0x0003cf13) vkb2_cell_t_keypad_pane_t1

0xb294,	// (0x0003f125) popup_grid_graphic2_window

0xce2e,	// (0x00040cbf) aid_size_cell_graphic2_ParamLimits

0xce2e,	// (0x00040cbf) aid_size_cell_graphic2

0xce66,	// (0x00040cf7) bg_popup_window_pane_cp21_ParamLimits

0xce66,	// (0x00040cf7) bg_popup_window_pane_cp21

0xce74,	// (0x00040d05) graphic2_pages_pane_ParamLimits

0xce74,	// (0x00040d05) graphic2_pages_pane

0xceae,	// (0x00040d3f) grid_graphic2_control_pane_ParamLimits

0xceae,	// (0x00040d3f) grid_graphic2_control_pane

0xcee4,	// (0x00040d75) grid_graphic2_pane_ParamLimits

0xcee4,	// (0x00040d75) grid_graphic2_pane

0xcf44,	// (0x00040dd5) cell_graphic2_pane

0xb294,	// (0x0003f125) main_comp_mode_pane

0x5d82,	// (0x00039c13) list_ai3_gene_pane_ParamLimits

0x6931,	// (0x0003a7c2) bg_popup_window_pane_cp19_ParamLimits

0x5ef5,	// (0x00039d86) bg_touch_area_indi_pane_ParamLimits

0x5ef5,	// (0x00039d86) bg_touch_area_indi_pane

0x5f0b,	// (0x00039d9c) bg_touch_area_indi_pane_cp01_ParamLimits

0x5f0b,	// (0x00039d9c) bg_touch_area_indi_pane_cp01

0x5f21,	// (0x00039db2) bg_touch_area_indi_pane_cp02_ParamLimits

0x5f21,	// (0x00039db2) bg_touch_area_indi_pane_cp02

0x5f37,	// (0x00039dc8) bg_touch_area_indi_pane_cp03_ParamLimits

0x5f37,	// (0x00039dc8) bg_touch_area_indi_pane_cp03

0x5f4d,	// (0x00039dde) popup_slider_window_g1_ParamLimits

0x5f69,	// (0x00039dfa) popup_slider_window_g2_ParamLimits

0x5f85,	// (0x00039e16) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x00043b52) popup_slider_window_g_ParamLimits

0x5fa1,	// (0x00039e32) popup_slider_window_t1_ParamLimits

0x5fe5,	// (0x00039e76) small_volume_slider_vertical_pane_ParamLimits

0xcf44,	// (0x00040dd5) cell_graphic2_pane_ParamLimits

0xcf80,	// (0x00040e11) bg_button_pane_cp10_ParamLimits

0xcf80,	// (0x00040e11) bg_button_pane_cp10

0xcf91,	// (0x00040e22) bg_button_pane_cp11_ParamLimits

0xcf91,	// (0x00040e22) bg_button_pane_cp11

0xcfa2,	// (0x00040e33) graphic2_pages_pane_g1_ParamLimits

0xcfa2,	// (0x00040e33) graphic2_pages_pane_g1

0xcfb5,	// (0x00040e46) graphic2_pages_pane_g2_ParamLimits

0xcfb5,	// (0x00040e46) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x00043c16) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x00043c16) graphic2_pages_pane_g

0xcfcb,	// (0x00040e5c) graphic2_pages_pane_t1_ParamLimits

0xcfcb,	// (0x00040e5c) graphic2_pages_pane_t1

0xcfe1,	// (0x00040e72) cell_graphic2_control_pane_ParamLimits

0xcfe1,	// (0x00040e72) cell_graphic2_control_pane

0xd000,	// (0x00040e91) cell_graphic2_pane_g1_ParamLimits

0xd000,	// (0x00040e91) cell_graphic2_pane_g1

0xd00d,	// (0x00040e9e) cell_graphic2_pane_g2_ParamLimits

0xd00d,	// (0x00040e9e) cell_graphic2_pane_g2

0xd01a,	// (0x00040eab) cell_graphic2_pane_g3_ParamLimits

0xd01a,	// (0x00040eab) cell_graphic2_pane_g3

0xd027,	// (0x00040eb8) cell_graphic2_pane_g4_ParamLimits

0xd027,	// (0x00040eb8) cell_graphic2_pane_g4

0xd034,	// (0x00040ec5) cell_graphic2_pane_g5_ParamLimits

0xd034,	// (0x00040ec5) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x00043c1b) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x00043c1b) cell_graphic2_pane_g

0xd04d,	// (0x00040ede) cell_graphic2_pane_t1_ParamLimits

0xd04d,	// (0x00040ede) cell_graphic2_pane_t1

0x2545,	// (0x000363d6) grid_highlight_pane_cp11_ParamLimits

0x2545,	// (0x000363d6) grid_highlight_pane_cp11

0xeaa2,	// (0x00042933) bg_button_pane_cp05

0xd075,	// (0x00040f06) cell_graphic2_control_pane_g1

0x424d,	// (0x000380de) bg_touch_area_indi_pane_g1

0x934c,	// (0x0003d1dd) aid_cmod_rocker_key_size

0x9356,	// (0x0003d1e7) aid_cmode_itu_key_size

0x9360,	// (0x0003d1f1) main_cmode_video_pane

0x9368,	// (0x0003d1f9) main_comp_mode_itu_pane

0x9372,	// (0x0003d203) main_comp_mode_rocker_pane

0x937a,	// (0x0003d20b) cell_cmode_rocker_pane_ParamLimits

0x937a,	// (0x0003d20b) cell_cmode_rocker_pane

0x938c,	// (0x0003d21d) cell_cmode_itu_pane_ParamLimits

0x938c,	// (0x0003d21d) cell_cmode_itu_pane

0xefd1,	// (0x00042e62) bg_button_pane_cp06_ParamLimits

0xefd1,	// (0x00042e62) bg_button_pane_cp06

0x4479,	// (0x0003830a) cell_cmode_rocker_pane_g1_ParamLimits

0x4479,	// (0x0003830a) cell_cmode_rocker_pane_g1

0x601c,	// (0x00039ead) cell_cmode_rocker_pane_g2_ParamLimits

0x601c,	// (0x00039ead) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x00043c2b) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x00043c2b) cell_cmode_rocker_pane_g

0xe87f,	// (0x00042710) bg_button_pane_cp07

0x93a1,	// (0x0003d232) cell_cmode_itu_pane_g1

0x93aa,	// (0x0003d23b) cell_cmode_itu_pane_t1

0x93b8,	// (0x0003d249) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x00043c30) cell_cmode_itu_pane_t

0x618b,	// (0x0003a01c) aid_touch_ctrl_left

0x6193,	// (0x0003a024) aid_touch_ctrl_right

0xe87f,	// (0x00042710) compa_mode_pane

0xd09d,	// (0x00040f2e) aid_cmod_rocker_key_size_cp

0xd0a7,	// (0x00040f38) aid_cmode_itu_key_size_cp

0x93da,	// (0x0003d26b) compa_mode_pane_g1

0x93e2,	// (0x0003d273) compa_mode_pane_g2

0x93ea,	// (0x0003d27b) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x00043c35) compa_mode_pane_g

0xd0b1,	// (0x00040f42) main_comp_mode_itu_pane_cp

0xd0b9,	// (0x00040f4a) main_comp_mode_rocker_pane_cp

0xd0c1,	// (0x00040f52) cell_cmode_itu_pane_cp_ParamLimits

0xd0c1,	// (0x00040f52) cell_cmode_itu_pane_cp

0xd0d6,	// (0x00040f67) cell_cmode_rocker_pane_cp_ParamLimits

0xd0d6,	// (0x00040f67) cell_cmode_rocker_pane_cp

0xefd1,	// (0x00042e62) bg_button_pane_cp06_cp_ParamLimits

0xefd1,	// (0x00042e62) bg_button_pane_cp06_cp

0x4479,	// (0x0003830a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4479,	// (0x0003830a) cell_cmode_rocker_pane_g1_cp

0x424d,	// (0x000380de) cell_cmode_rocker_pane_g2_cp

0xe87f,	// (0x00042710) bg_button_pane_cp07_cp

0xd0e8,	// (0x00040f79) cell_cmode_itu_pane_g1_cp

0xd0f1,	// (0x00040f82) cell_cmode_itu_pane_t1_cp

0xd0ff,	// (0x00040f90) cell_cmode_itu_pane_t2_cp

0x597c,	// (0x0003980d) settings_code_pane_cp2

0xe959,	// (0x000427ea) bg_popup_window_pane_cp3_ParamLimits

0xeca0,	// (0x00042b31) heading_pane_cp3_ParamLimits

0xecaf,	// (0x00042b40) listscroll_popup_graphic_pane_ParamLimits

0xc3f4,	// (0x00040285) fep_hwr_aid_pane_ParamLimits

0xc854,	// (0x000406e5) aid_touch_sctrl_top_ParamLimits

0xc86f,	// (0x00040700) sctrl_sk_top_pane_g1_ParamLimits

0xc639,	// (0x000404ca) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x00043b6b) sctrl_sk_top_pane_g_ParamLimits

0xc87c,	// (0x0004070d) sctrl_sk_top_pane_t1_ParamLimits

0xc854,	// (0x000406e5) aid_touch_sctrl_bottom_ParamLimits

0xc87c,	// (0x0004070d) sctrl_sk_bottom_pane_t1_ParamLimits

0x60d5,	// (0x00039f66) aid_area_touch_clock

0xca42,	// (0x000408d3) aid_vkb2_area_top_pane_cell_ParamLimits

0xca42,	// (0x000408d3) aid_vkb2_area_top_pane_cell

0xcb6d,	// (0x000409fe) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcb6d,	// (0x000409fe) aid_vkb2_area_bottom_pane_cell

0x6ede,	// (0x0003ad6f) popup_char_count_window

0x9452,	// (0x0003d2e3) popup_char_count_window_g1

0x945b,	// (0x0003d2ec) popup_char_count_window_g2

0x9464,	// (0x0003d2f5) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x00043c3c) popup_char_count_window_g

0x946d,	// (0x0003d2fe) popup_char_count_window_t1

0xc930,	// (0x000407c1) popup_fep_char_preview_window_ParamLimits

0xc930,	// (0x000407c1) popup_fep_char_preview_window

0xca60,	// (0x000408f1) vkb2_top_candi_pane_ParamLimits

0xca60,	// (0x000408f1) vkb2_top_candi_pane

0xd10d,	// (0x00040f9e) cell_vkb2_top_candi_pane_ParamLimits

0xd10d,	// (0x00040f9e) cell_vkb2_top_candi_pane

0xd146,	// (0x00040fd7) bg_popup_fep_char_preview_window_ParamLimits

0xd146,	// (0x00040fd7) bg_popup_fep_char_preview_window

0xd154,	// (0x00040fe5) popup_fep_char_preview_window_t1_ParamLimits

0xd154,	// (0x00040fe5) popup_fep_char_preview_window_t1

0x94d5,	// (0x0003d366) bg_popup_fep_char_preview_window_g1

0x94cd,	// (0x0003d35e) bg_popup_fep_char_preview_window_g2

0x94c5,	// (0x0003d356) bg_popup_fep_char_preview_window_g3

0x94fd,	// (0x0003d38e) bg_popup_fep_char_preview_window_g4

0x94f5,	// (0x0003d386) bg_popup_fep_char_preview_window_g5

0x94ed,	// (0x0003d37e) bg_popup_fep_char_preview_window_g6

0x94e5,	// (0x0003d376) bg_popup_fep_char_preview_window_g7

0x94dd,	// (0x0003d36e) bg_popup_fep_char_preview_window_g8

0x9505,	// (0x0003d396) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x00043c43) bg_popup_fep_char_preview_window_g

0xc639,	// (0x000404ca) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc639,	// (0x000404ca) cell_vkb2_top_candi_pane_g1

0xc647,	// (0x000404d8) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc647,	// (0x000404d8) cell_vkb2_top_candi_pane_g2

0x9515,	// (0x0003d3a6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9515,	// (0x0003d3a6) cell_vkb2_top_candi_pane_g3

0xd196,	// (0x00041027) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd196,	// (0x00041027) cell_vkb2_top_candi_pane_g4

0x46c9,	// (0x0003855a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x46c9,	// (0x0003855a) cell_vkb2_top_candi_pane_g5

0xd1b7,	// (0x00041048) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd1b7,	// (0x00041048) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x00043c58) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x00043c58) cell_vkb2_top_candi_pane_g

0xd1c5,	// (0x00041056) cell_vkb2_top_candi_pane_t1

0xc20c,	// (0x0004009d) aid_size_touch_slider_mark_ParamLimits

0xc20c,	// (0x0004009d) aid_size_touch_slider_mark

0xcea2,	// (0x00040d33) grid_graphic2_catg_pane_ParamLimits

0xcea2,	// (0x00040d33) grid_graphic2_catg_pane

0xcf20,	// (0x00040db1) popup_grid_graphic2_window_t1_ParamLimits

0xcf20,	// (0x00040db1) popup_grid_graphic2_window_t1

0xcf32,	// (0x00040dc3) popup_grid_graphic2_window_t2_ParamLimits

0xcf32,	// (0x00040dc3) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x00043c11) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x00043c11) popup_grid_graphic2_window_t

0xeaa2,	// (0x00042933) bg_button_pane_cp05_ParamLimits

0xd075,	// (0x00040f06) cell_graphic2_control_pane_g1_ParamLimits

0xd1db,	// (0x0004106c) cell_graphic2_catg_pane_ParamLimits

0xd1db,	// (0x0004106c) cell_graphic2_catg_pane

0xe87f,	// (0x00042710) bg_button_pane_cp12

0xd1ed,	// (0x0004107e) cell_graphic2_catg_pane_g1

0x60a1,	// (0x00039f32) cell_tb_ext_pane_t1_ParamLimits

0xcc78,	// (0x00040b09) vkb2_top_cell_right_narrow_pane_ParamLimits

0xcc78,	// (0x00040b09) vkb2_top_cell_right_narrow_pane

0xcc90,	// (0x00040b21) vkb2_top_cell_right_wide_pane_ParamLimits

0xcc90,	// (0x00040b21) vkb2_top_cell_right_wide_pane

0xc3e6,	// (0x00040277) bg_vkb2_func_pane_ParamLimits

0xc3e6,	// (0x00040277) bg_vkb2_func_pane

0xcd01,	// (0x00040b92) vkb2_top_cell_left_pane_g1_ParamLimits

0xc3e6,	// (0x00040277) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc3e6,	// (0x00040277) bg_vkb2_fuc_pane_cp03

0xcd5f,	// (0x00040bf0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x24d5,	// (0x00036366) bg_vkb2_func_pane_g1

0x24cd,	// (0x0003635e) bg_vkb2_func_pane_g2

0x24dd,	// (0x0003636e) bg_vkb2_func_pane_g3

0x24e5,	// (0x00036376) bg_vkb2_func_pane_g4

0x24ed,	// (0x0003637e) bg_vkb2_func_pane_g5

0x24f5,	// (0x00036386) bg_vkb2_func_pane_g6

0x2505,	// (0x00036396) bg_vkb2_func_pane_g7

0x24fd,	// (0x0003638e) bg_vkb2_func_pane_g8

0x24c5,	// (0x00036356) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x00043c65) bg_vkb2_func_pane_g

0xc3e6,	// (0x00040277) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc3e6,	// (0x00040277) bg_vkb2_fuc_pane_cp01

0xcd01,	// (0x00040b92) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xcd01,	// (0x00040b92) vkb2_top_cell_right_wide_pane_g1

0xc3e6,	// (0x00040277) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc3e6,	// (0x00040277) bg_vkb2_fuc_pane_cp02

0xcd5f,	// (0x00040bf0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xcd5f,	// (0x00040bf0) vkb2_top_cell_right_narrow_pane_g1

0x68c3,	// (0x0003a754) aid_touch_area_decrease_ParamLimits

0x68c3,	// (0x0003a754) aid_touch_area_decrease

0x68db,	// (0x0003a76c) aid_touch_area_increase_ParamLimits

0x68db,	// (0x0003a76c) aid_touch_area_increase

0x68e7,	// (0x0003a778) aid_touch_area_mute_ParamLimits

0x68e7,	// (0x0003a778) aid_touch_area_mute

0x6903,	// (0x0003a794) aid_touch_area_slider_ParamLimits

0x6903,	// (0x0003a794) aid_touch_area_slider

0x693d,	// (0x0003a7ce) popup_slider_window_g4_ParamLimits

0x693d,	// (0x0003a7ce) popup_slider_window_g4

0x6949,	// (0x0003a7da) popup_slider_window_g5_ParamLimits

0x6949,	// (0x0003a7da) popup_slider_window_g5

0x696b,	// (0x0003a7fc) popup_slider_window_g6_ParamLimits

0x696b,	// (0x0003a7fc) popup_slider_window_g6

0x5fcd,	// (0x00039e5e) popup_slider_window_t2_ParamLimits

0x5fcd,	// (0x00039e5e) popup_slider_window_t2

0x0001,

0xfcce,	// (0x00043b5f) popup_slider_window_t_ParamLimits

0xfcce,	// (0x00043b5f) popup_slider_window_t

0x697d,	// (0x0003a80e) slider_pane_ParamLimits

0x697d,	// (0x0003a80e) slider_pane

0x953f,	// (0x0003d3d0) slider_pane_g1_ParamLimits

0x953f,	// (0x0003d3d0) slider_pane_g1

0x9553,	// (0x0003d3e4) slider_pane_g2_ParamLimits

0x9553,	// (0x0003d3e4) slider_pane_g2

0x9569,	// (0x0003d3fa) slider_pane_g3_ParamLimits

0x9569,	// (0x0003d3fa) slider_pane_g3

0x0003,

0xfde7,	// (0x00043c78) slider_pane_g_ParamLimits

0xfde7,	// (0x00043c78) slider_pane_g

0xbe78,	// (0x0003fd09) popup_tb_float_extension_window_ParamLimits

0xbe78,	// (0x0003fd09) popup_tb_float_extension_window

0x9595,	// (0x0003d426) aid_size_cell_tb_float_ext

0xe87f,	// (0x00042710) bg_popup_sub_window_cp28

0x95a0,	// (0x0003d431) grid_tb_float_ext_pane

0x95a8,	// (0x0003d439) cell_tb_float_ext_pane_ParamLimits

0x95a8,	// (0x0003d439) cell_tb_float_ext_pane

0x95c0,	// (0x0003d451) cell_tb_float_ext_pane_g1

0x95c9,	// (0x0003d45a) grid_highlight_pane_cp12

0xc52f,	// (0x000403c0) cell_last_hwr_side_pane_ParamLimits

0xc52f,	// (0x000403c0) cell_last_hwr_side_pane

0x424d,	// (0x000380de) cell_last_hwr_side_pane_g1

0x95d2,	// (0x0003d463) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x00043c81) cell_last_hwr_side_pane_g

0xcc35,	// (0x00040ac6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcc35,	// (0x00040ac6) vkb2_area_bottom_space_btn_pane

0xc639,	// (0x000404ca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9082,	// (0x0003cf13) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd1c5,	// (0x00041056) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd1f6,	// (0x00041087) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd1f6,	// (0x00041087) vkb2_area_bottom_space_btn_pane_g1

0xd22c,	// (0x000410bd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd22c,	// (0x000410bd) vkb2_area_bottom_space_btn_pane_g2

0xd262,	// (0x000410f3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd262,	// (0x000410f3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x00043c86) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x00043c86) vkb2_area_bottom_space_btn_pane_g

0xc4a3,	// (0x00040334) cel_fep_hwr_func_pane_ParamLimits

0xc4a3,	// (0x00040334) cel_fep_hwr_func_pane

0xc4df,	// (0x00040370) cell_hwr_side_button_pane_ParamLimits

0xc4df,	// (0x00040370) cell_hwr_side_button_pane

0x60d5,	// (0x00039f66) aid_area_touch_clock_ParamLimits

0xeaa2,	// (0x00042933) bg_uniindi_top_pane_ParamLimits

0x60e7,	// (0x00039f78) uniindi_top_pane_g1_ParamLimits

0x60fd,	// (0x00039f8e) uniindi_top_pane_g2_ParamLimits

0x6109,	// (0x00039f9a) uniindi_top_pane_g3_ParamLimits

0x611a,	// (0x00039fab) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x00043b97) uniindi_top_pane_g_ParamLimits

0x6127,	// (0x00039fb8) uniindi_top_pane_t1_ParamLimits

0xeaa2,	// (0x00042933) bg_vkb2_func_pane_cp01_ParamLimits

0xeaa2,	// (0x00042933) bg_vkb2_func_pane_cp01

0x95db,	// (0x0003d46c) cel_fep_hwr_func_pane_g1_ParamLimits

0x95db,	// (0x0003d46c) cel_fep_hwr_func_pane_g1

0xeaa2,	// (0x00042933) bg_vkb2_func_pane_cp02_ParamLimits

0xeaa2,	// (0x00042933) bg_vkb2_func_pane_cp02

0x95db,	// (0x0003d46c) cell_hwr_side_button_pane_g1_ParamLimits

0x95db,	// (0x0003d46c) cell_hwr_side_button_pane_g1

0x23e9,	// (0x0003627a) status_pane_g4_ParamLimits

0x23e9,	// (0x0003627a) status_pane_g4

0x2401,	// (0x00036292) status_pane_t1

0x4053,	// (0x00037ee4) form2_midp_gauge_slider_cont_pane

0x405b,	// (0x00037eec) form2_midp_gauge_slider_pane_t1_ParamLimits

0x640f,	// (0x0003a2a0) form2_midp_gauge_slider_pane_t2_ParamLimits

0x6421,	// (0x0003a2b2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0004395e) form2_midp_gauge_slider_pane_t_ParamLimits

0x406d,	// (0x00037efe) form2_midp_slider_pane_ParamLimits

0xc8f0,	// (0x00040781) aid_size_cell_func_vkb2_ParamLimits

0xc8f0,	// (0x00040781) aid_size_cell_func_vkb2

0x9581,	// (0x0003d412) slider_pane_g4_ParamLimits

0x9581,	// (0x0003d412) slider_pane_g4

0xd2a8,	// (0x00041139) form2_midp_gauge_slider_pane_t2_cp01

0xd2b6,	// (0x00041147) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd2b6,	// (0x00041147) form2_midp_gauge_slider_pane_t3_cp01

0xd2d3,	// (0x00041164) form2_midp_slider_pane_cp01

0xe87f,	// (0x00042710) navi_smil_pane

0x963f,	// (0x0003d4d0) navi_smil_pane_g1

0x9647,	// (0x0003d4d8) navi_smil_pane_t1

0x9614,	// (0x0003d4a5) form2_midp_slider_pane_g1

0x961d,	// (0x0003d4ae) form2_midp_slider_pane_g2

0x9625,	// (0x0003d4b6) form2_midp_slider_pane_g3

0x9614,	// (0x0003d4a5) form2_midp_slider_pane_g4

0xd2dc,	// (0x0004116d) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x00043c8f) form2_midp_slider_pane_g

0xd298,	// (0x00041129) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd298,	// (0x00041129) vkb2_area_bottom_space_btn_pane_g4

0x5492,	// (0x00039323) lc0_navi_pane_ParamLimits

0x5492,	// (0x00039323) lc0_navi_pane

0x5508,	// (0x00039399) lc0_stat_indi_pane_ParamLimits

0x5508,	// (0x00039399) lc0_stat_indi_pane

0x551f,	// (0x000393b0) ls0_title_pane_ParamLimits

0x551f,	// (0x000393b0) ls0_title_pane

0xefd1,	// (0x00042e62) bg_popup_sub_pane_cp14_ParamLimits

0x60bc,	// (0x00039f4d) list_uniindi_pane_ParamLimits

0x60c8,	// (0x00039f59) uniindi_top_pane_ParamLimits

0x6163,	// (0x00039ff4) list_single_uniindi_pane_g1_ParamLimits

0x6176,	// (0x0003a007) list_single_uniindi_pane_t1_ParamLimits

0xd2e5,	// (0x00041176) lc0_stat_clock_pane_ParamLimits

0xd2e5,	// (0x00041176) lc0_stat_clock_pane

0xd2f2,	// (0x00041183) lc0_stat_indi_pane_g1_ParamLimits

0xd2f2,	// (0x00041183) lc0_stat_indi_pane_g1

0xd2ff,	// (0x00041190) lc0_stat_indi_pane_g2_ParamLimits

0xd2ff,	// (0x00041190) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x00043c9a) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x00043c9a) lc0_stat_indi_pane_g

0xd30c,	// (0x0004119d) lc0_uni_indicator_pane_ParamLimits

0xd30c,	// (0x0004119d) lc0_uni_indicator_pane

0x9689,	// (0x0003d51a) ls0_title_pane_g1_ParamLimits

0x9689,	// (0x0003d51a) ls0_title_pane_g1

0xd319,	// (0x000411aa) ls0_title_pane_t1_ParamLimits

0xd319,	// (0x000411aa) ls0_title_pane_t1

0xd34f,	// (0x000411e0) lc0_uni_indicator_pane_g1_ParamLimits

0xd34f,	// (0x000411e0) lc0_uni_indicator_pane_g1

0x96e0,	// (0x0003d571) lc0_stat_clock_pane_t1

0xb294,	// (0x0003f125) main_ai5_pane

0x96ee,	// (0x0003d57f) ai5_sk_pane_ParamLimits

0x96ee,	// (0x0003d57f) ai5_sk_pane

0xd361,	// (0x000411f2) cell_ai5_widget_pane_ParamLimits

0xd361,	// (0x000411f2) cell_ai5_widget_pane

0x976b,	// (0x0003d5fc) aid_size_cell_widget_grid

0x9778,	// (0x0003d609) bg_ai5_widget_pane_ParamLimits

0x9778,	// (0x0003d609) bg_ai5_widget_pane

0xd3f4,	// (0x00041285) cell_ai5_widget_pane_g2

0xd408,	// (0x00041299) cell_ai5_widget_pane_g3

0xd422,	// (0x000412b3) cell_ai5_widget_pane_g4

0xd432,	// (0x000412c3) cell_ai5_widget_pane_g5

0xd442,	// (0x000412d3) cell_ai5_widget_pane_g6

0xd44e,	// (0x000412df) cell_ai5_widget_pane_g7

0xd4ba,	// (0x0004134b) cell_ai5_widget_pane_t1_ParamLimits

0xd4ba,	// (0x0004134b) cell_ai5_widget_pane_t1

0xd4d7,	// (0x00041368) cell_ai5_widget_pane_t2_ParamLimits

0xd4d7,	// (0x00041368) cell_ai5_widget_pane_t2

0xd4ef,	// (0x00041380) cell_ai5_widget_pane_t3_ParamLimits

0xd4ef,	// (0x00041380) cell_ai5_widget_pane_t3

0xd507,	// (0x00041398) cell_ai5_widget_pane_t4_ParamLimits

0xd507,	// (0x00041398) cell_ai5_widget_pane_t4

0xd52d,	// (0x000413be) cell_ai5_widget_pane_t5_ParamLimits

0xd52d,	// (0x000413be) cell_ai5_widget_pane_t5

0x9927,	// (0x0003d7b8) cell_ai5_widget_pane_t6_ParamLimits

0x9927,	// (0x0003d7b8) cell_ai5_widget_pane_t6

0x9939,	// (0x0003d7ca) cell_ai5_widget_pane_t7_ParamLimits

0x9939,	// (0x0003d7ca) cell_ai5_widget_pane_t7

0xd54c,	// (0x000413dd) cell_ai5_widget_pane_t8_ParamLimits

0xd54c,	// (0x000413dd) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x00043cba) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x00043cba) cell_ai5_widget_pane_t

0xd5cf,	// (0x00041460) grid_ai5_widget_pane

0xefd1,	// (0x00042e62) highlight_cell_ai5_widget_pane_ParamLimits

0xefd1,	// (0x00042e62) highlight_cell_ai5_widget_pane

0xd5db,	// (0x0004146c) ai5_sk_left_pane

0xd5e5,	// (0x00041476) ai5_sk_middle_pane

0xd5ef,	// (0x00041480) ai5_sk_right_pane

0x9a06,	// (0x0003d897) bg_ai5_widget_pane_g1_ParamLimits

0x9a06,	// (0x0003d897) bg_ai5_widget_pane_g1

0x9a12,	// (0x0003d8a3) bg_ai5_widget_pane_g2_ParamLimits

0x9a12,	// (0x0003d8a3) bg_ai5_widget_pane_g2

0x9a1e,	// (0x0003d8af) bg_ai5_widget_pane_g3_ParamLimits

0x9a1e,	// (0x0003d8af) bg_ai5_widget_pane_g3

0x9a2a,	// (0x0003d8bb) bg_ai5_widget_pane_g4_ParamLimits

0x9a2a,	// (0x0003d8bb) bg_ai5_widget_pane_g4

0x9a36,	// (0x0003d8c7) bg_ai5_widget_pane_g5_ParamLimits

0x9a36,	// (0x0003d8c7) bg_ai5_widget_pane_g5

0x9a42,	// (0x0003d8d3) bg_ai5_widget_pane_g6_ParamLimits

0x9a42,	// (0x0003d8d3) bg_ai5_widget_pane_g6

0x9a4e,	// (0x0003d8df) bg_ai5_widget_pane_g7_ParamLimits

0x9a4e,	// (0x0003d8df) bg_ai5_widget_pane_g7

0x9a5a,	// (0x0003d8eb) bg_ai5_widget_pane_g8_ParamLimits

0x9a5a,	// (0x0003d8eb) bg_ai5_widget_pane_g8

0x9a66,	// (0x0003d8f7) bg_ai5_widget_pane_g9_ParamLimits

0x9a66,	// (0x0003d8f7) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x00043cd3) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00043cd3) bg_ai5_widget_pane_g

0x9a96,	// (0x0003d927) cell_shortcut_ai5_widget_pane_ParamLimits

0x9a96,	// (0x0003d927) cell_shortcut_ai5_widget_pane

0x9aa7,	// (0x0003d938) bg_cell_shortcut_ai5_widget_pane

0xec5c,	// (0x00042aed) cell_grid_ai5_widget_pane_g1

0x2139,	// (0x00035fca) highlight_cell_shortcut_ai5_widget_pane

0x24d5,	// (0x00036366) ai5_sk_left_pane_g1

0x9aaf,	// (0x0003d940) ai5_sk_left_pane_g2

0x9ab7,	// (0x0003d948) ai5_sk_left_pane_g3

0x9abf,	// (0x0003d950) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x00043ce6) ai5_sk_left_pane_g

0x9ac7,	// (0x0003d958) ai5_sk_left_pane_t1

0x24cd,	// (0x0003635e) ai5_sk_right_pane_g1

0x9ad5,	// (0x0003d966) ai5_sk_right_pane_g2

0x9add,	// (0x0003d96e) ai5_sk_right_pane_g3

0x9ae5,	// (0x0003d976) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x00043cef) ai5_sk_right_pane_g

0x9aed,	// (0x0003d97e) ai5_sk_right_pane_t1

0x24cd,	// (0x0003635e) ai5_sk_middle_pane_g1

0x24d5,	// (0x00036366) ai5_sk_middle_pane_g2

0x24ed,	// (0x0003637e) ai5_sk_middle_pane_g3

0x9add,	// (0x0003d96e) ai5_sk_middle_pane_g4

0x9ab7,	// (0x0003d948) ai5_sk_middle_pane_g5

0x9afb,	// (0x0003d98c) ai5_sk_middle_pane_g6

0xd5f9,	// (0x0004148a) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x00043cf8) ai5_sk_middle_pane_g

0x53d9,	// (0x0003926a) aid_touch_area_size_lc0_ParamLimits

0x53d9,	// (0x0003926a) aid_touch_area_size_lc0

0xc668,	// (0x000404f9) cell_hwr_candidate_pane_t1_ParamLimits

0x231e,	// (0x000361af) aid_touch_navi_pane

0x55f1,	// (0x00039482) status_dt_navi_pane_ParamLimits

0x55f1,	// (0x00039482) status_dt_navi_pane

0x55fe,	// (0x0003948f) status_dt_sta_pane_ParamLimits

0x55fe,	// (0x0003948f) status_dt_sta_pane

0xd601,	// (0x00041492) dt_sta_controll_pane

0xd60e,	// (0x0004149f) dt_sta_indi_pane

0xd61f,	// (0x000414b0) dt_sta_title_pane

0xeaa2,	// (0x00042933) bg_dt_sta_indi_pane_ParamLimits

0xeaa2,	// (0x00042933) bg_dt_sta_indi_pane

0xd632,	// (0x000414c3) dt_sta_battery_pane

0xd63a,	// (0x000414cb) dt_sta_indi_pane_g1

0xd643,	// (0x000414d4) dt_sta_indi_pane_g2

0xd64c,	// (0x000414dd) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x00043d07) dt_sta_indi_pane_g

0xd655,	// (0x000414e6) dt_sta_signal_pane

0xefd1,	// (0x00042e62) bg_dt_sta_title_pane_ParamLimits

0xefd1,	// (0x00042e62) bg_dt_sta_title_pane

0xd65e,	// (0x000414ef) dt_sta_title_pane_g1

0xd666,	// (0x000414f7) dt_sta_title_pane_t1_ParamLimits

0xd666,	// (0x000414f7) dt_sta_title_pane_t1

0xe87f,	// (0x00042710) bg_dt_sta_control_pane

0xd67b,	// (0x0004150c) dt_sta_controll_pane_g1

0xd684,	// (0x00041515) bg_dt_sta_title_pane_g1

0xd68d,	// (0x0004151e) bg_dt_sta_title_pane_g2

0xd696,	// (0x00041527) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x00043d0e) bg_dt_sta_title_pane_g

0x424d,	// (0x000380de) bg_dt_sta_indi_pane_g1

0xd69f,	// (0x00041530) dt_sta_signal_pane_g1

0xd6a7,	// (0x00041538) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x00043d15) dt_sta_signal_pane_g

0x9bb4,	// (0x0003da45) dt_sta_battery_pane_g1

0x9bbd,	// (0x0003da4e) dt_sta_battery_pane_t1

0x424d,	// (0x000380de) bg_dt_sta_control_pane_g1

0x1d09,	// (0x00035b9a) fep_china_uni_eep_pane

0x1d11,	// (0x00035ba2) fep_china_uni_entry_pane_ParamLimits

0x1d21,	// (0x00035bb2) popup_fep_china_uni_window_g1_ParamLimits

0x1d31,	// (0x00035bc2) popup_fep_china_uni_window_g2_ParamLimits

0x1d31,	// (0x00035bc2) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0004358e) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0004358e) popup_fep_china_uni_window_g

0x9bcc,	// (0x0003da5d) fep_china_uni_eep_pane_g1

0x9bd4,	// (0x0003da65) fep_china_uni_eep_pane_t1

0x9636,	// (0x0003d4c7) aid_touch_area_size_smil_player

0x23bc,	// (0x0003624d) lc0_clock_pane

0x23f5,	// (0x00036286) status_pane_g5_ParamLimits

0x23f5,	// (0x00036286) status_pane_g5

0xbbec,	// (0x0003fa7d) popup_keymap_window

0x23d5,	// (0x00036266) status_icon_pane

0xd408,	// (0x00041299) cell_ai5_widget_pane_g3_ParamLimits

0xd422,	// (0x000412b3) cell_ai5_widget_pane_g4_ParamLimits

0xd432,	// (0x000412c3) cell_ai5_widget_pane_g5_ParamLimits

0xd45a,	// (0x000412eb) cell_ai5_widget_pane_g8_ParamLimits

0xd45a,	// (0x000412eb) cell_ai5_widget_pane_g8

0xd46e,	// (0x000412ff) cell_ai5_widget_pane_g9_ParamLimits

0xd46e,	// (0x000412ff) cell_ai5_widget_pane_g9

0xd482,	// (0x00041313) cell_ai5_widget_pane_g10_ParamLimits

0xd482,	// (0x00041313) cell_ai5_widget_pane_g10

0x9be3,	// (0x0003da74) status_icon_pane_g1

0xe87f,	// (0x00042710) bg_popup_sub_pane_cp13

0x9beb,	// (0x0003da7c) popup_keymap_window_t1

0x53a4,	// (0x00039235) control_pane_g6_ParamLimits

0x53a4,	// (0x00039235) control_pane_g6

0x5397,	// (0x00039228) control_pane_g7_ParamLimits

0x5397,	// (0x00039228) control_pane_g7

0x538a,	// (0x0003921b) control_pane_g8_ParamLimits

0x538a,	// (0x0003921b) control_pane_g8

0xd601,	// (0x00041492) dt_sta_controll_pane_ParamLimits

0xd60e,	// (0x0004149f) dt_sta_indi_pane_ParamLimits

0xd61f,	// (0x000414b0) dt_sta_title_pane_ParamLimits

0xee60,	// (0x00042cf1) aid_size_touch_scroll_bar_cale

0xb36b,	// (0x0003f1fc) popup_discreet_window_ParamLimits

0xb36b,	// (0x0003f1fc) popup_discreet_window

0xb3cf,	// (0x0003f260) popup_sk_window

0x2a8d,	// (0x0003691e) bg_popup_sub_pane_cp28_ParamLimits

0x2a8d,	// (0x0003691e) bg_popup_sub_pane_cp28

0x9bf9,	// (0x0003da8a) popup_discreet_window_g1_ParamLimits

0x9bf9,	// (0x0003da8a) popup_discreet_window_g1

0x9c19,	// (0x0003daaa) popup_discreet_window_t1_ParamLimits

0x9c19,	// (0x0003daaa) popup_discreet_window_t1

0x9c37,	// (0x0003dac8) popup_discreet_window_t2_ParamLimits

0x9c37,	// (0x0003dac8) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x00043d1a) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x00043d1a) popup_discreet_window_t

0xd6af,	// (0x00041540) popup_sk_window_g1

0xd6b8,	// (0x00041549) popup_sk_window_g2

0x0001,

0xfe90,	// (0x00043d21) popup_sk_window_g

0xd6c1,	// (0x00041552) popup_sk_window_t1

0xd6cf,	// (0x00041560) popup_sk_window_t1_copy1

0xd3f4,	// (0x00041285) cell_ai5_widget_pane_g2_ParamLimits

0xd55e,	// (0x000413ef) cell_ai5_widget_pane_t9_ParamLimits

0xd55e,	// (0x000413ef) cell_ai5_widget_pane_t9

0xe87f,	// (0x00042710) main_fep_fshwr2_pane

0xd6dd,	// (0x0004156e) aid_fshwr2_btn_pane

0xd6e9,	// (0x0004157a) aid_fshwr2_syb_pane

0xd6fb,	// (0x0004158c) aid_fshwr2_txt_pane

0xd707,	// (0x00041598) fshwr2_func_candi_pane

0xd71b,	// (0x000415ac) fshwr2_hwr_syb_pane

0xd72d,	// (0x000415be) fshwr2_icf_pane

0xb294,	// (0x0003f125) fshwr2_icf_bg_pane

0xd755,	// (0x000415e6) fshwr2_icf_pane_t1_ParamLimits

0xd755,	// (0x000415e6) fshwr2_icf_pane_t1

0xf4de,	// (0x0004336f) fshwr2_func_candi_pane_g1

0xd76d,	// (0x000415fe) fshwr2_func_candi_row_pane_ParamLimits

0xd76d,	// (0x000415fe) fshwr2_func_candi_row_pane

0xd790,	// (0x00041621) cell_fshwr2_syb_pane_ParamLimits

0xd790,	// (0x00041621) cell_fshwr2_syb_pane

0xd7af,	// (0x00041640) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd7af,	// (0x00041640) fshwr2_hwr_syb_pane_g1

0xb294,	// (0x0003f125) bg_popup_call_pane_cp01

0xd7bd,	// (0x0004164e) fshwr2_func_candi_cell_pane_ParamLimits

0xd7bd,	// (0x0004164e) fshwr2_func_candi_cell_pane

0x3075,	// (0x00036f06) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3075,	// (0x00036f06) fshwr2_func_candi_cell_bg_pane

0xd7fc,	// (0x0004168d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd7fc,	// (0x0004168d) fshwr2_func_candi_cell_pane_g1

0xd81c,	// (0x000416ad) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd81c,	// (0x000416ad) fshwr2_func_candi_cell_pane_t1

0xb294,	// (0x0003f125) bg_button_pane_cp08

0x01e5,	// (0x00034076) cell_fshwr2_syb_bg_pane

0xd82f,	// (0x000416c0) cell_fshwr2_syb_bg_pane_g1

0xd843,	// (0x000416d4) cell_fshwr2_syb_bg_pane_t1

0xefd1,	// (0x00042e62) main_tmo_pane

0x5802,	// (0x00039693) uni_indicator_pane_g1_ParamLimits

0x5816,	// (0x000396a7) uni_indicator_pane_g2_ParamLimits

0x582b,	// (0x000396bc) uni_indicator_pane_g3_ParamLimits

0x344e,	// (0x000372df) uni_indicator_pane_g4_ParamLimits

0x344e,	// (0x000372df) uni_indicator_pane_g4

0x3462,	// (0x000372f3) uni_indicator_pane_g5_ParamLimits

0x3462,	// (0x000372f3) uni_indicator_pane_g5

0x3462,	// (0x000372f3) uni_indicator_pane_g6_ParamLimits

0x3462,	// (0x000372f3) uni_indicator_pane_g6

0xf8fa,	// (0x0004378b) uni_indicator_pane_g_ParamLimits

0x68a7,	// (0x0003a738) popup_tmo_note_window_ParamLimits

0x68a7,	// (0x0003a738) popup_tmo_note_window

0xc8cc,	// (0x0004075d) fshwr2_bg_pane

0xd80d,	// (0x0004169e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd80d,	// (0x0004169e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x00043d26) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x00043d26) fshwr2_func_candi_cell_pane_g

0xc621,	// (0x000404b2) bg_popup_window_pane_cp01

0xd859,	// (0x000416ea) bg_popup_window_pane_g1_cp01

0x9e2e,	// (0x0003dcbf) bg_popup_window_pane_cp22_ParamLimits

0x9e2e,	// (0x0003dcbf) bg_popup_window_pane_cp22

0x9e3c,	// (0x0003dccd) listscroll_tmo_link_pane_ParamLimits

0x9e3c,	// (0x0003dccd) listscroll_tmo_link_pane

0x9e7c,	// (0x0003dd0d) popup_tmo_note_window_g1_ParamLimits

0x9e7c,	// (0x0003dd0d) popup_tmo_note_window_g1

0x9e89,	// (0x0003dd1a) tmo_note_info_pane_ParamLimits

0x9e89,	// (0x0003dd1a) tmo_note_info_pane

0x1909,	// (0x0003579a) list_tmo_note_info_pane_g1_ParamLimits

0x1909,	// (0x0003579a) list_tmo_note_info_pane_g1

0x9eba,	// (0x0003dd4b) list_tmo_note_info_pane_g2_ParamLimits

0x9eba,	// (0x0003dd4b) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x00043d2b) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x00043d2b) list_tmo_note_info_pane_g

0x9ed6,	// (0x0003dd67) list_tmo_note_info_text_pane_ParamLimits

0x9ed6,	// (0x0003dd67) list_tmo_note_info_text_pane

0x9f57,	// (0x0003dde8) list_tmo_link_pane

0x9f64,	// (0x0003ddf5) scroll_pane_cp20

0x9f71,	// (0x0003de02) list_single_tmo_link_pane_ParamLimits

0x9f71,	// (0x0003de02) list_single_tmo_link_pane

0x9f81,	// (0x0003de12) list_single_tmo_link_pane_t1

0x9f8f,	// (0x0003de20) list_tmo_note_info_text_pane_t1_ParamLimits

0x9f8f,	// (0x0003de20) list_tmo_note_info_text_pane_t1

0xf084,	// (0x00042f15) aid_size_touch_scroll_bar_cp01_ParamLimits

0xf084,	// (0x00042f15) aid_size_touch_scroll_bar_cp01

0xe036,	// (0x00041ec7) aid_size_touch_slider_marker

0xb3bb,	// (0x0003f24c) popup_settings_window_ParamLimits

0xb3bb,	// (0x0003f24c) popup_settings_window

0xe1bb,	// (0x0004204c) popup_candi_list_indi_window

0x231e,	// (0x000361af) aid_touch_navi_pane_ParamLimits

0xc828,	// (0x000406b9) rs_clock_indi_pane

0xc831,	// (0x000406c2) sctrl_sk_bottom_pane_ParamLimits

0xc842,	// (0x000406d3) sctrl_sk_top_pane_ParamLimits

0xc94a,	// (0x000407db) popup_fep_tooltip_window

0x976b,	// (0x0003d5fc) aid_size_cell_widget_grid_ParamLimits

0xd3e0,	// (0x00041271) cell_ai5_widget_pane_g1_ParamLimits

0xd3e0,	// (0x00041271) cell_ai5_widget_pane_g1

0xd442,	// (0x000412d3) cell_ai5_widget_pane_g6_ParamLimits

0xd44e,	// (0x000412df) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x00043c9f) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x00043c9f) cell_ai5_widget_pane_g

0xd58d,	// (0x0004141e) cell_ai5_widget_pane_t10_ParamLimits

0xd58d,	// (0x0004141e) cell_ai5_widget_pane_t10

0xd5cf,	// (0x00041460) grid_ai5_widget_pane_ParamLimits

0x9a72,	// (0x0003d903) cell_contacts_ai5_widget_pane_ParamLimits

0x9a72,	// (0x0003d903) cell_contacts_ai5_widget_pane

0x9c4c,	// (0x0003dadd) popup_discreet_window_t3_ParamLimits

0x9c4c,	// (0x0003dadd) popup_discreet_window_t3

0xd743,	// (0x000415d4) popup_fshwr2_char_preview_window_ParamLimits

0xd743,	// (0x000415d4) popup_fshwr2_char_preview_window

0x1920,	// (0x000357b1) tmo_note_info_pane_t1

0x1935,	// (0x000357c6) tmo_note_info_pane_t2

0x194a,	// (0x000357db) tmo_note_info_pane_t3

0x9f33,	// (0x0003ddc4) tmo_note_info_pane_t4

0x9f45,	// (0x0003ddd6) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x00043d30) tmo_note_info_pane_t

0x9f57,	// (0x0003dde8) list_tmo_link_pane_ParamLimits

0x9f64,	// (0x0003ddf5) scroll_pane_cp20_ParamLimits

0xb294,	// (0x0003f125) bg_popup_fep_char_preview_window_cp01

0xa190,	// (0x0003e021) popup_fshwr2_char_preview_window_t1

0xa19e,	// (0x0003e02f) popup_candi_list_indi_window_g1

0xa1a7,	// (0x0003e038) bg_cell_contacts_ai5_widget_pane

0xa1b3,	// (0x0003e044) cell_contacts_ai5_widget_pane_g1

0xa1c8,	// (0x0003e059) cell_contacts_ai5_widget_pane_g2

0xa1d4,	// (0x0003e065) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x00043d3b) cell_contacts_ai5_widget_pane_g

0xa1e0,	// (0x0003e071) cell_contacts_ai5_widget_pane_t1

0xefd1,	// (0x00042e62) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa255,	// (0x0003e0e6) settings_container_pane

0x2139,	// (0x00035fca) listscroll_set_pane_copy1

0x3b89,	// (0x00037a1a) scroll_pane_cp121_copy1

0xa261,	// (0x0003e0f2) set_content_pane_copy1

0xa269,	// (0x0003e0fa) aid_height_set_list_copy1_ParamLimits

0xa269,	// (0x0003e0fa) aid_height_set_list_copy1

0x3607,	// (0x00037498) aid_size_parent_copy1_ParamLimits

0x3607,	// (0x00037498) aid_size_parent_copy1

0xa275,	// (0x0003e106) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa275,	// (0x0003e106) button_value_adjust_pane_cp6_copy1

0x01e5,	// (0x00034076) list_highlight_pane_cp2_copy1_ParamLimits

0x01e5,	// (0x00034076) list_highlight_pane_cp2_copy1

0xa289,	// (0x0003e11a) list_set_pane_copy1_ParamLimits

0xa289,	// (0x0003e11a) list_set_pane_copy1

0xa1f2,	// (0x0003e083) main_pane_set_t1_copy1_ParamLimits

0xa1f2,	// (0x0003e083) main_pane_set_t1_copy1

0xa22c,	// (0x0003e0bd) main_pane_set_t2_copy1_ParamLimits

0xa22c,	// (0x0003e0bd) main_pane_set_t2_copy1

0xa317,	// (0x0003e1a8) main_pane_set_t3_copy1

0xa325,	// (0x0003e1b6) main_pane_set_t4_copy1

0xa249,	// (0x0003e0da) set_content_pane_g1_copy1_ParamLimits

0xa249,	// (0x0003e0da) set_content_pane_g1_copy1

0xa333,	// (0x0003e1c4) setting_code_pane_copy1

0xa33b,	// (0x0003e1cc) setting_slider_graphic_pane_copy1

0xa33b,	// (0x0003e1cc) setting_slider_pane_copy1

0xa33b,	// (0x0003e1cc) setting_text_pane_copy1

0xa33b,	// (0x0003e1cc) setting_volume_pane_copy1

0xa343,	// (0x0003e1d4) settings_code_pane_cp2_copy1

0xa34b,	// (0x0003e1dc) settings_code_pane_cp_copy1_ParamLimits

0xa34b,	// (0x0003e1dc) settings_code_pane_cp_copy1

0xd862,	// (0x000416f3) volume_set_pane_copy1

0xa35f,	// (0x0003e1f0) volume_set_pane_g10_copy1

0xa367,	// (0x0003e1f8) volume_set_pane_g1_copy1

0xa36f,	// (0x0003e200) volume_set_pane_g2_copy1

0xa377,	// (0x0003e208) volume_set_pane_g3_copy1

0xa37f,	// (0x0003e210) volume_set_pane_g4_copy1

0xa387,	// (0x0003e218) volume_set_pane_g5_copy1

0xa38f,	// (0x0003e220) volume_set_pane_g6_copy1

0xa397,	// (0x0003e228) volume_set_pane_g7_copy1

0xa39f,	// (0x0003e230) volume_set_pane_g8_copy1

0xa3a7,	// (0x0003e238) volume_set_pane_g9_copy1

0xe959,	// (0x000427ea) bg_set_opt_pane_cp_copy1_ParamLimits

0xe959,	// (0x000427ea) bg_set_opt_pane_cp_copy1

0xd86a,	// (0x000416fb) setting_slider_pane_t1_copy1_ParamLimits

0xd86a,	// (0x000416fb) setting_slider_pane_t1_copy1

0xd881,	// (0x00041712) setting_slider_pane_t2_copy1_ParamLimits

0xd881,	// (0x00041712) setting_slider_pane_t2_copy1

0xd89a,	// (0x0004172b) setting_slider_pane_t3_copy1_ParamLimits

0xd89a,	// (0x0004172b) setting_slider_pane_t3_copy1

0xb4eb,	// (0x0003f37c) slider_set_pane_copy1_ParamLimits

0xb4eb,	// (0x0003f37c) slider_set_pane_copy1

0xf020,	// (0x00042eb1) set_opt_bg_pane_g1_copy2

0xf028,	// (0x00042eb9) set_opt_bg_pane_g2_copy2

0xa3af,	// (0x0003e240) set_opt_bg_pane_g3_copy2

0xf038,	// (0x00042ec9) set_opt_bg_pane_g4_copy2

0xf040,	// (0x00042ed1) set_opt_bg_pane_g5_copy2

0xf048,	// (0x00042ed9) set_opt_bg_pane_g6_copy2

0xa3b7,	// (0x0003e248) set_opt_bg_pane_g7_copy2

0xa3bf,	// (0x0003e250) set_opt_bg_pane_g8_copy2

0xa3c7,	// (0x0003e258) set_opt_bg_pane_g9_copy2

0xc20c,	// (0x0004009d) aid_size_touch_slider_mark_copy1_ParamLimits

0xc20c,	// (0x0004009d) aid_size_touch_slider_mark_copy1

0x3619,	// (0x000374aa) slider_set_pane_g1_copy1

0x363b,	// (0x000374cc) slider_set_pane_g2_copy1

0xc22c,	// (0x000400bd) slider_set_pane_g3_copy1_ParamLimits

0xc22c,	// (0x000400bd) slider_set_pane_g3_copy1

0xc240,	// (0x000400d1) slider_set_pane_g4_copy1_ParamLimits

0xc240,	// (0x000400d1) slider_set_pane_g4_copy1

0xc258,	// (0x000400e9) slider_set_pane_g5_copy1_ParamLimits

0xc258,	// (0x000400e9) slider_set_pane_g5_copy1

0xc22c,	// (0x000400bd) slider_set_pane_g6_copy1_ParamLimits

0xc22c,	// (0x000400bd) slider_set_pane_g6_copy1

0xd8b1,	// (0x00041742) slider_set_pane_g7_copy1_ParamLimits

0xd8b1,	// (0x00041742) slider_set_pane_g7_copy1

0xe90b,	// (0x0004279c) bg_set_opt_pane_cp2_copy1

0xe96f,	// (0x00042800) setting_slider_graphic_pane_g1_copy1

0xd8c7,	// (0x00041758) setting_slider_graphic_pane_t1_copy1

0xd8d6,	// (0x00041767) setting_slider_graphic_pane_t2_copy1

0xd8e5,	// (0x00041776) slider_set_pane_cp_copy1

0xa3d7,	// (0x0003e268) input_focus_pane_cp1_copy1

0xa3e0,	// (0x0003e271) list_set_text_pane_copy1

0xa3e8,	// (0x0003e279) setting_text_pane_g1_copy1

0xe85f,	// (0x000426f0) set_text_pane_t1_copy1

0xa3d7,	// (0x0003e268) input_focus_pane_cp2_copy1

0xa3e8,	// (0x0003e279) setting_code_pane_g1_copy1

0xa3f1,	// (0x0003e282) setting_code_pane_t1_copy1

0xa17b,	// (0x0003e00c) list_set_graphic_pane_copy1

0xe90b,	// (0x0004279c) bg_set_opt_pane_cp4_copy1

0x1e9c,	// (0x00035d2d) list_set_graphic_pane_g1_copy1_ParamLimits

0x1e9c,	// (0x00035d2d) list_set_graphic_pane_g1_copy1

0xa3ff,	// (0x0003e290) list_set_graphic_pane_g2_copy1

0x1eb4,	// (0x00035d45) list_set_graphic_pane_t1_copy1_ParamLimits

0x1eb4,	// (0x00035d45) list_set_graphic_pane_t1_copy1

0x424d,	// (0x000380de) rs_clock_indi_pane_g1

0xa407,	// (0x0003e298) rs_clock_indi_pane_t1

0xa415,	// (0x0003e2a6) rs_indi_pane

0xa41d,	// (0x0003e2ae) rs_indi_pane_g1

0xa426,	// (0x0003e2b7) rs_indi_pane_g2

0xa19e,	// (0x0003e02f) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x00043d42) rs_indi_pane_g

0x2139,	// (0x00035fca) bg_popup_preview_window_pane_cp03

0xa42f,	// (0x0003e2c0) popup_fep_tooltip_window_t1

0x4b8e,	// (0x00038a1f) popup_note2_window_g2_ParamLimits

0x4b8e,	// (0x00038a1f) popup_note2_window_g2

0x0001,

0xfc45,	// (0x00043ad6) popup_note2_window_g_ParamLimits

0xfc45,	// (0x00043ad6) popup_note2_window_g

0x5d48,	// (0x00039bd9) bg_popup_sub_pane_cp11_ParamLimits

0x5d55,	// (0x00039be6) cell_ai3_links_pane_g1_ParamLimits

0x5d6c,	// (0x00039bfd) cell_ai3_links_pane_t1

0xe85f,	// (0x000426f0) set_text_pane_t1_copy1_ParamLimits

0x2060,	// (0x00035ef1) cell_graphic_popup_pane_cp2_ParamLimits

0x2060,	// (0x00035ef1) cell_graphic_popup_pane_cp2

0xa43d,	// (0x0003e2ce) cell_graphic_popup_pane_g1_cp2

0xed0f,	// (0x00042ba0) cell_graphic_popup_pane_g2_cp2

0xa445,	// (0x0003e2d6) cell_graphic_popup_pane_g3_cp2

0xa44d,	// (0x0003e2de) cell_graphic_popup_pane_t2_cp2

0xed20,	// (0x00042bb1) grid_highlight_pane_cp3_cp2

0xf317,	// (0x000431a8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xefd1,	// (0x00042e62) main_tmo_pane_ParamLimits

0x689f,	// (0x0003a730) popup_tmo_big_image_note_window

0x97aa,	// (0x0003d63b) cell_ai5_widget_list_pane

0xd3d7,	// (0x00041268) cell_ai5_widget_lrg_icon_pane

0x1920,	// (0x000357b1) tmo_note_info_pane_t1_ParamLimits

0x1935,	// (0x000357c6) tmo_note_info_pane_t2_ParamLimits

0x194a,	// (0x000357db) tmo_note_info_pane_t3_ParamLimits

0x9f33,	// (0x0003ddc4) tmo_note_info_pane_t4_ParamLimits

0x9f45,	// (0x0003ddd6) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x00043d30) tmo_note_info_pane_t_ParamLimits

0xa255,	// (0x0003e0e6) settings_container_pane_ParamLimits

0xa3cf,	// (0x0003e260) indicator_popup_pane_cp5

0xa3cf,	// (0x0003e260) indicator_popup_pane_cp6

0xa17b,	// (0x0003e00c) list_set_graphic_pane_copy1_ParamLimits

0xe87f,	// (0x00042710) bg_popup_window_pane_cp23

0xa45b,	// (0x0003e2ec) popup_tmo_big_image_note_window_g1

0xa464,	// (0x0003e2f5) popup_tmo_big_image_note_window_t1

0xa472,	// (0x0003e303) popup_tmo_big_image_note_window_t2

0xa480,	// (0x0003e311) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x00043d49) popup_tmo_big_image_note_window_t

0x424d,	// (0x000380de) cell_ai5_widget_lrg_icon_pane_g1

0xa48e,	// (0x0003e31f) cell_ai5_widget_lrg_icon_pane_t1

0x19ea,	// (0x0003587b) cell_ai5_widget_list_row_pane_ParamLimits

0x19ea,	// (0x0003587b) cell_ai5_widget_list_row_pane

0x1a01,	// (0x00035892) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x1a01,	// (0x00035892) cell_ai5_widget_list_row_pane_g1

0x1a0e,	// (0x0003589f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x1a0e,	// (0x0003589f) cell_ai5_widget_list_row_pane_t1

0x1a3c,	// (0x000358cd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1a3c,	// (0x000358cd) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x00043d50) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x00043d50) cell_ai5_widget_list_row_pane_t

0xb294,	// (0x0003f125) main_fep_vtchi_ss_pane

0xa4a9,	// (0x0003e33a) popup_fep_char_pre_window

0xa4b1,	// (0x0003e342) popup_fep_ituss_window

0x1a94,	// (0x00035925) popup_fep_vkbss_window

0xa4ec,	// (0x0003e37d) grid_vkbss_keypad_pane_ParamLimits

0xa4ec,	// (0x0003e37d) grid_vkbss_keypad_pane

0xa4fc,	// (0x0003e38d) ituss_keypad_pane

0xd8f7,	// (0x00041788) aid_vkbss_key_offset_ParamLimits

0xd8f7,	// (0x00041788) aid_vkbss_key_offset

0xd903,	// (0x00041794) cell_vkbss_key_pane_ParamLimits

0xd903,	// (0x00041794) cell_vkbss_key_pane

0xa50b,	// (0x0003e39c) bg_cell_vkbss_key_g1_ParamLimits

0xa50b,	// (0x0003e39c) bg_cell_vkbss_key_g1

0xa517,	// (0x0003e3a8) cell_vkbss_key_3p_pane_ParamLimits

0xa517,	// (0x0003e3a8) cell_vkbss_key_3p_pane

0xa54d,	// (0x0003e3de) cell_vkbss_key_g1_ParamLimits

0xa54d,	// (0x0003e3de) cell_vkbss_key_g1

0xa583,	// (0x0003e414) cell_vkbss_key_t1_ParamLimits

0xa583,	// (0x0003e414) cell_vkbss_key_t1

0xd937,	// (0x000417c8) cell_ituss_key_pane_ParamLimits

0xd937,	// (0x000417c8) cell_ituss_key_pane

0xa5f3,	// (0x0003e484) bg_cell_ituss_key_g1_ParamLimits

0xa5f3,	// (0x0003e484) bg_cell_ituss_key_g1

0xa5ff,	// (0x0003e490) cell_ituss_key_pane_g1_ParamLimits

0xa5ff,	// (0x0003e490) cell_ituss_key_pane_g1

0xd948,	// (0x000417d9) cell_ituss_key_pane_g2_ParamLimits

0xd948,	// (0x000417d9) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x00043d57) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x00043d57) cell_ituss_key_pane_g

0xd9cc,	// (0x0004185d) cell_ituss_key_t1_ParamLimits

0xd9cc,	// (0x0004185d) cell_ituss_key_t1

0xda02,	// (0x00041893) cell_ituss_key_t2_ParamLimits

0xda02,	// (0x00041893) cell_ituss_key_t2

0xda33,	// (0x000418c4) cell_ituss_key_t3_ParamLimits

0xda33,	// (0x000418c4) cell_ituss_key_t3

0xda02,	// (0x00041893) cell_ituss_key_t4_ParamLimits

0xda02,	// (0x00041893) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x00043d64) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x00043d64) cell_ituss_key_t

0xa635,	// (0x0003e4c6) cell_vkbss_key_3p_pane_g1

0xa62d,	// (0x0003e4be) cell_vkbss_key_3p_pane_g2

0xa625,	// (0x0003e4b6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x00043d6f) cell_vkbss_key_3p_pane_g

0x2139,	// (0x00035fca) bg_popup_fep_char_preview_window_cp02

0xa63d,	// (0x0003e4ce) popup_fep_char_pre_window_t1

0xd3c4,	// (0x00041255) main_ai5_sk_pane

0xa1a7,	// (0x0003e038) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa1b3,	// (0x0003e044) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa1c8,	// (0x0003e059) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa1d4,	// (0x0003e065) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x00043d3b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa1e0,	// (0x0003e071) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xefd1,	// (0x00042e62) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1c30,	// (0x00035ac1) main_ai5_sk_pane_g1

0x28d7,	// (0x00036768) popup_query_code_window_g1

0x1a7e,	// (0x0003590f) popup_fep_vkb_icf_pane

0xa4c3,	// (0x0003e354) popup_fep_vtchi_icf_pane

0x01e5,	// (0x00034076) bg_icf_pane

0x01e5,	// (0x00034076) list_vkb_icf_pane

0xa64b,	// (0x0003e4dc) bg_icf_pane_cp01

0xa65e,	// (0x0003e4ef) vtchi_icf_list_pane

0x1c79,	// (0x00035b0a) list_vkb_icf_pane_t1_ParamLimits

0x1c79,	// (0x00035b0a) list_vkb_icf_pane_t1

0xa66e,	// (0x0003e4ff) vtchi_icf_list_pane_t1_ParamLimits

0xa66e,	// (0x0003e4ff) vtchi_icf_list_pane_t1

0xa4b1,	// (0x0003e342) popup_fep_ituss_window_ParamLimits

0xa4c3,	// (0x0003e354) popup_fep_vtchi_icf_pane_ParamLimits

0xa4fc,	// (0x0003e38d) ituss_keypad_pane_ParamLimits

0xd8ed,	// (0x0004177e) ituss_sks_pane

0x01e5,	// (0x00034076) bg_icf_pane_ParamLimits

0x1a64,	// (0x000358f5) icf_edit_indi_pane_ParamLimits

0x1a64,	// (0x000358f5) icf_edit_indi_pane

0x01e5,	// (0x00034076) list_vkb_icf_pane_ParamLimits

0xa64b,	// (0x0003e4dc) bg_icf_pane_cp01_ParamLimits

0xa49c,	// (0x0003e32d) icf_edit_indi_pane_cp01_ParamLimits

0xa49c,	// (0x0003e32d) icf_edit_indi_pane_cp01

0xa666,	// (0x0003e4f7) vtchi_query_pane

0x95db,	// (0x0003d46c) icf_edit_indi_pane_g1_ParamLimits

0x95db,	// (0x0003d46c) icf_edit_indi_pane_g1

0x1ca4,	// (0x00035b35) icf_edit_indi_pane_g2_ParamLimits

0x1ca4,	// (0x00035b35) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x00043d9a) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x00043d9a) icf_edit_indi_pane_g

0x1cb8,	// (0x00035b49) icf_edit_indi_pane_t1

0xa686,	// (0x0003e517) bg_input_focus_pane_cp042

0xa68f,	// (0x0003e520) vtchi_button_pane

0xa698,	// (0x0003e529) vtchi_query_pane_t1

0xa6a6,	// (0x0003e537) vtchi_query_pane_t2

0xa6b4,	// (0x0003e545) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x00043d89) vtchi_query_pane_t

0xb294,	// (0x0003f125) bg_button_pane_cp13

0xa6c2,	// (0x0003e553) vtchi_button_pane_g1

0xda76,	// (0x00041907) ituss_sks_pane_g1

0xda7f,	// (0x00041910) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x00043d90) ituss_sks_pane_g

0xa6d8,	// (0x0003e569) ituss_sks_pane_t1

0xa6ca,	// (0x0003e55b) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x00043d95) ituss_sks_pane_t

0x3e7a,	// (0x00037d0b) indicator_nsta_pane_cp_g1

0x3e83,	// (0x00037d14) indicator_nsta_pane_cp_g2

0x3e8b,	// (0x00037d1c) indicator_nsta_pane_cp_g3

0x3e93,	// (0x00037d24) indicator_nsta_pane_cp_g4

0x3e9b,	// (0x00037d2c) indicator_nsta_pane_cp_g5

0x3ea3,	// (0x00037d34) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x00043914) indicator_nsta_pane_cp_g

0xd063,	// (0x00040ef4) cell_graphic2_pane_t2_ParamLimits

0xd063,	// (0x00040ef4) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x00043c26) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x00043c26) cell_graphic2_pane_t

0xd08f,	// (0x00040f20) cell_graphic2_control_pane_t1

0x51cd,	// (0x0003905e) signal_pane_g3_ParamLimits

0x51cd,	// (0x0003905e) signal_pane_g3

0x51de,	// (0x0003906f) signal_pane_g4_ParamLimits

0x51de,	// (0x0003906f) signal_pane_g4

0x1a4e,	// (0x000358df) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x1a4e,	// (0x000358df) cell_ai5_widget_list_row_pane_t3

0xa613,	// (0x0003e4a4) cell_ituss_key_pane_t1_ParamLimits

0xa613,	// (0x0003e4a4) cell_ituss_key_pane_t1

0x25a5,	// (0x00036436) form_field_data_wide_pane_vc_t2_ParamLimits

0x25a5,	// (0x00036436) form_field_data_wide_pane_vc_t2

0x25b7,	// (0x00036448) form_field_data_wide_pane_vc_t3_ParamLimits

0x25b7,	// (0x00036448) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x00043673) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x00043673) form_field_data_wide_pane_vc_t

0x3bce,	// (0x00037a5f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3bce,	// (0x00037a5f) form_field_slider_wide_pane_vc_t3

0x3c8c,	// (0x00037b1d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3c8c,	// (0x00037b1d) form_field_popup_wide_pane_vc_t2

0x3ca1,	// (0x00037b32) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3ca1,	// (0x00037b32) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x00043903) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00043903) form_field_popup_wide_pane_vc_t

0xd6dd,	// (0x0004156e) aid_fshwr2_btn_pane_ParamLimits

0xd6e9,	// (0x0004157a) aid_fshwr2_syb_pane_ParamLimits

0xd6fb,	// (0x0004158c) aid_fshwr2_txt_pane_ParamLimits

0xc8cc,	// (0x0004075d) fshwr2_bg_pane_ParamLimits

0xd707,	// (0x00041598) fshwr2_func_candi_pane_ParamLimits

0xd71b,	// (0x000415ac) fshwr2_hwr_syb_pane_ParamLimits

0xd72d,	// (0x000415be) fshwr2_icf_pane_ParamLimits

0xe541,	// (0x000423d2) list_double_graphic_pane_vc_g4_ParamLimits

0xe541,	// (0x000423d2) list_double_graphic_pane_vc_g4

0xd968,	// (0x000417f9) cell_ituss_key_pane_g3_ParamLimits

0xd968,	// (0x000417f9) cell_ituss_key_pane_g3

0xda64,	// (0x000418f5) cell_ituss_key_t5_ParamLimits

0xda64,	// (0x000418f5) cell_ituss_key_t5

0x1a94,	// (0x00035925) popup_fep_vkbss_window_ParamLimits

0xd3ce,	// (0x0004125f) aid_cell_ai5_quarter

0x1cb8,	// (0x00035b49) icf_edit_indi_pane_t1_ParamLimits

0xeb4a,	// (0x000429db) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xeb4a,	// (0x000429db) aid_tch_indicator_popup_pane_cp2

0xeb5d,	// (0x000429ee) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xeb5d,	// (0x000429ee) aid_tch_query_popup_data_pane_cp2

0x287f,	// (0x00036710) aid_tch_query_popup_pane_ParamLimits

0x287f,	// (0x00036710) aid_tch_query_popup_pane

0x287f,	// (0x00036710) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x287f,	// (0x00036710) aid_tch_query_popup_data_pane_cp1

0x01e5,	// (0x00034076) cell_fshwr2_syb_bg_pane_ParamLimits

0xd82f,	// (0x000416c0) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd843,	// (0x000416d4) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x1a7e,	// (0x0003590f) popup_fep_vkb_icf_pane_ParamLimits

0xd18e,	// (0x0004101f) bg_popup_fep_char_preview_window_g10

0xd496,	// (0x00041327) cell_ai5_widget_pane_g11_ParamLimits

0xd496,	// (0x00041327) cell_ai5_widget_pane_g11

0xd4a2,	// (0x00041333) cell_ai5_widget_pane_g12_ParamLimits

0xd4a2,	// (0x00041333) cell_ai5_widget_pane_g12

0xd4ae,	// (0x0004133f) cell_ai5_widget_pane_g13_ParamLimits

0xd4ae,	// (0x0004133f) cell_ai5_widget_pane_g13

0xd5ab,	// (0x0004143c) cell_ai5_widget_pane_t11_ParamLimits

0xd5ab,	// (0x0004143c) cell_ai5_widget_pane_t11

0xd5bd,	// (0x0004144e) cell_ai5_widget_pane_t12_ParamLimits

0xd5bd,	// (0x0004144e) cell_ai5_widget_pane_t12

0xd974,	// (0x00041805) cell_ituss_key_pane_g4_ParamLimits

0xd974,	// (0x00041805) cell_ituss_key_pane_g4

0xd990,	// (0x00041821) cell_ituss_key_pane_g5_ParamLimits

0xd990,	// (0x00041821) cell_ituss_key_pane_g5

0xd9ac,	// (0x0004183d) cell_ituss_key_pane_g6_ParamLimits

0xd9ac,	// (0x0004183d) cell_ituss_key_pane_g6

0x24c5,	// (0x00036356) bg_icf_pane_g1

0x1c39,	// (0x00035aca) bg_icf_pane_g2

0x1c41,	// (0x00035ad2) bg_icf_pane_g3

0x1c49,	// (0x00035ada) bg_icf_pane_g4

0x1c51,	// (0x00035ae2) bg_icf_pane_g5

0x1c59,	// (0x00035aea) bg_icf_pane_g6

0x1c61,	// (0x00035af2) bg_icf_pane_g7

0x1c69,	// (0x00035afa) bg_icf_pane_g8

0x1c71,	// (0x00035b02) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x00043d76) bg_icf_pane_g

0xa4d9,	// (0x0003e36a) popup_hyb_candi_window_ParamLimits

0xa4d9,	// (0x0003e36a) popup_hyb_candi_window

0x2545,	// (0x000363d6) bg_popup_sub_pane_cp01_ParamLimits

0x2545,	// (0x000363d6) bg_popup_sub_pane_cp01

0xa6e6,	// (0x0003e577) entry_hyb_candi_pane_ParamLimits

0xa6e6,	// (0x0003e577) entry_hyb_candi_pane

0xa6f5,	// (0x0003e586) grid_hyb_candi_pane_ParamLimits

0xa6f5,	// (0x0003e586) grid_hyb_candi_pane

0xa70a,	// (0x0003e59b) grid_hyb_phrase_pane_ParamLimits

0xa70a,	// (0x0003e59b) grid_hyb_phrase_pane

0xa719,	// (0x0003e5aa) cell_hyb_candi_pane_ParamLimits

0xa719,	// (0x0003e5aa) cell_hyb_candi_pane

0xa731,	// (0x0003e5c2) cell_hyb_candi_scroll_pane

0xf4de,	// (0x0004336f) cell_hyb_candi_pane_g1

0xa73a,	// (0x0003e5cb) cell_hyb_candi_pane_t1

0xa748,	// (0x0003e5d9) cell_hyb_phrase_pane

0xf4de,	// (0x0004336f) cell_hyb_phrase_pane_g1

0xa751,	// (0x0003e5e2) cell_hyb_phrase_pane_t1

0xa75f,	// (0x0003e5f0) entry_hyb_candi_pane_t1

0x2139,	// (0x00035fca) input_focus_pane_cp06

0xa76d,	// (0x0003e5fe) cell_hyb_candi_scroll_pane_g1

0xa775,	// (0x0003e606) cell_hyb_candi_scroll_pane_g1_aid

0xa77d,	// (0x0003e60e) cell_hyb_candi_scroll_pane_g2

0xa785,	// (0x0003e616) cell_hyb_candi_scroll_pane_g2_aid

0xa78d,	// (0x0003e61e) cell_hyb_candi_scroll_pane_g3

0xa795,	// (0x0003e626) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large

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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002f9d7 };

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
0x0de0,	// (0x000307b7) Screen

0x0df2,	// (0x000307c9) application_window_ParamLimits

0x0df2,	// (0x000307c9) application_window

0x0e0a,	// (0x000307e1) screen_g1

0x0e34,	// (0x0003080b) area_bottom_pane_ParamLimits

0x0e34,	// (0x0003080b) area_bottom_pane

0x0edf,	// (0x000308b6) area_top_pane_ParamLimits

0x0edf,	// (0x000308b6) area_top_pane

0x8a6d,	// (0x00038444) main_pane_ParamLimits

0x8a6d,	// (0x00038444) main_pane

0x0f57,	// (0x0003092e) misc_graphics

0x27c6,	// (0x0003219d) battery_pane_ParamLimits

0x27c6,	// (0x0003219d) battery_pane

0x5deb,	// (0x000357c2) bg_status_flat_pane_g8

0x5df3,	// (0x000357ca) bg_status_flat_pane_g9

0x554b,	// (0x00034f22) context_pane_ParamLimits

0x554b,	// (0x00034f22) context_pane

0x2920,	// (0x000322f7) navi_pane_ParamLimits

0x2920,	// (0x000322f7) navi_pane

0x2995,	// (0x0003236c) signal_pane_ParamLimits

0x2995,	// (0x0003236c) signal_pane

0x0008,

0xf883,	// (0x0003f25a) bg_status_flat_pane_g

0x2a21,	// (0x000323f8) status_pane_g1_ParamLimits

0x2a21,	// (0x000323f8) status_pane_g1

0x2a2d,	// (0x00032404) status_pane_g2_ParamLimits

0x2a2d,	// (0x00032404) status_pane_g2

0x55b1,	// (0x00034f88) status_pane_g3_ParamLimits

0x55b1,	// (0x00034f88) status_pane_g3

0x0004,

0xf7bd,	// (0x0003f194) status_pane_g_ParamLimits

0xf7bd,	// (0x0003f194) status_pane_g

0x2a39,	// (0x00032410) title_pane_ParamLimits

0x2a39,	// (0x00032410) title_pane

0x2a94,	// (0x0003246b) uni_indicator_pane_ParamLimits

0x2a94,	// (0x0003246b) uni_indicator_pane

0x53ad,	// (0x00034d84) bg_list_pane_ParamLimits

0x53ad,	// (0x00034d84) bg_list_pane

0x218e,	// (0x00031b65) find_pane

0x2196,	// (0x00031b6d) listscroll_app_pane_ParamLimits

0x2196,	// (0x00031b6d) listscroll_app_pane

0x53cd,	// (0x00034da4) listscroll_form_pane

0x21a2,	// (0x00031b79) listscroll_gen_pane_ParamLimits

0x21a2,	// (0x00031b79) listscroll_gen_pane

0x53cd,	// (0x00034da4) listscroll_set_pane

0x21b7,	// (0x00031b8e) main_idle_act_pane

0x518b,	// (0x00034b62) main_idle_trad_pane

0x518b,	// (0x00034b62) main_list_empty_pane

0x4ac9,	// (0x000344a0) main_midp_pane

0x53e7,	// (0x00034dbe) main_pane_g1_ParamLimits

0x53e7,	// (0x00034dbe) main_pane_g1

0x21ca,	// (0x00031ba1) popup_ai_message_window_ParamLimits

0x21ca,	// (0x00031ba1) popup_ai_message_window

0x224e,	// (0x00031c25) popup_fep_china_uni_window_ParamLimits

0x224e,	// (0x00031c25) popup_fep_china_uni_window

0x5417,	// (0x00034dee) popup_fep_japan_candidate_window_ParamLimits

0x5417,	// (0x00034dee) popup_fep_japan_candidate_window

0x5435,	// (0x00034e0c) popup_fep_japan_predictive_window_ParamLimits

0x5435,	// (0x00034e0c) popup_fep_japan_predictive_window

0x228c,	// (0x00031c63) popup_find_window

0x22a5,	// (0x00031c7c) popup_grid_graphic_window_ParamLimits

0x22a5,	// (0x00031c7c) popup_grid_graphic_window

0x5461,	// (0x00034e38) popup_large_graphic_colour_window

0x2321,	// (0x00031cf8) popup_menu_window_ParamLimits

0x2321,	// (0x00031cf8) popup_menu_window

0x247f,	// (0x00031e56) popup_note_image_window

0x2447,	// (0x00031e1e) popup_note_wait_window_ParamLimits

0x2447,	// (0x00031e1e) popup_note_wait_window

0x2495,	// (0x00031e6c) popup_note_window_ParamLimits

0x2495,	// (0x00031e6c) popup_note_window

0x2529,	// (0x00031f00) popup_query_code_window_ParamLimits

0x2529,	// (0x00031f00) popup_query_code_window

0x5480,	// (0x00034e57) popup_query_data_code_window_ParamLimits

0x5480,	// (0x00034e57) popup_query_data_code_window

0x2561,	// (0x00031f38) popup_query_data_window_ParamLimits

0x2561,	// (0x00031f38) popup_query_data_window

0x25d5,	// (0x00031fac) popup_query_sat_info_window_ParamLimits

0x25d5,	// (0x00031fac) popup_query_sat_info_window

0x2662,	// (0x00032039) popup_snote_single_graphic_window_ParamLimits

0x2662,	// (0x00032039) popup_snote_single_graphic_window

0x2662,	// (0x00032039) popup_snote_single_text_window_ParamLimits

0x2662,	// (0x00032039) popup_snote_single_text_window

0x5495,	// (0x00034e6c) popup_sub_window_general

0x54d7,	// (0x00034eae) popup_window_general_ParamLimits

0x54d7,	// (0x00034eae) popup_window_general

0x54ea,	// (0x00034ec1) power_save_pane

0xee33,	// (0x0003e80a) control_pane_g1_ParamLimits

0xee33,	// (0x0003e80a) control_pane_g1

0x9670,	// (0x00039047) control_pane_g2_ParamLimits

0x9670,	// (0x00039047) control_pane_g2

0x5397,	// (0x00034d6e) control_pane_g3_ParamLimits

0x5397,	// (0x00034d6e) control_pane_g3

0x0007,

0xf7a5,	// (0x0003f17c) control_pane_g_ParamLimits

0xf7a5,	// (0x0003f17c) control_pane_g

0xee69,	// (0x0003e840) control_pane_t1_ParamLimits

0xee69,	// (0x0003e840) control_pane_t1

0xeec5,	// (0x0003e89c) control_pane_t2_ParamLimits

0xeec5,	// (0x0003e89c) control_pane_t2

0x0002,

0xf7b6,	// (0x0003f18d) control_pane_t_ParamLimits

0xf7b6,	// (0x0003f18d) control_pane_t

0x52ba,	// (0x00034c91) navi_navi_volume_pane_cp1

0x52c3,	// (0x00034c9a) status_small_icon_pane

0x52cb,	// (0x00034ca2) status_small_pane_g1_ParamLimits

0x52cb,	// (0x00034ca2) status_small_pane_g1

0x52ff,	// (0x00034cd6) status_small_pane_g2_ParamLimits

0x52ff,	// (0x00034cd6) status_small_pane_g2

0x530b,	// (0x00034ce2) status_small_pane_g3_ParamLimits

0x530b,	// (0x00034ce2) status_small_pane_g3

0x5317,	// (0x00034cee) status_small_pane_g4_ParamLimits

0x5317,	// (0x00034cee) status_small_pane_g4

0x5323,	// (0x00034cfa) status_small_pane_g5_ParamLimits

0x5323,	// (0x00034cfa) status_small_pane_g5

0x5330,	// (0x00034d07) status_small_pane_g6_ParamLimits

0x5330,	// (0x00034d07) status_small_pane_g6

0x0007,

0xf794,	// (0x0003f16b) status_small_pane_g_ParamLimits

0xf794,	// (0x0003f16b) status_small_pane_g

0x5360,	// (0x00034d37) status_small_pane_t1

0x5383,	// (0x00034d5a) status_small_wait_pane_ParamLimits

0x5383,	// (0x00034d5a) status_small_wait_pane

0x1eed,	// (0x000318c4) aid_levels_signal_ParamLimits

0x1eed,	// (0x000318c4) aid_levels_signal

0x1f01,	// (0x000318d8) signal_pane_g1_ParamLimits

0x1f01,	// (0x000318d8) signal_pane_g1

0x1f1b,	// (0x000318f2) signal_pane_g2_ParamLimits

0x1f1b,	// (0x000318f2) signal_pane_g2

0x0001,

0xf729,	// (0x0003f100) signal_pane_g_ParamLimits

0xf729,	// (0x0003f100) signal_pane_g

0x4d30,	// (0x00034707) context_pane_g1

0x1006,	// (0x000309dd) title_pane_g1

0x1054,	// (0x00030a2b) title_pane_t1

0x10e1,	// (0x00030ab8) title_pane_t2

0x1107,	// (0x00030ade) title_pane_t3

0x0002,

0xf573,	// (0x0003ef4a) title_pane_t

0x2aba,	// (0x00032491) aid_levels_battery_ParamLimits

0x2aba,	// (0x00032491) aid_levels_battery

0x2ad2,	// (0x000324a9) battery_pane_g1_ParamLimits

0x2ad2,	// (0x000324a9) battery_pane_g1

0x2aed,	// (0x000324c4) battery_pane_g2_ParamLimits

0x2aed,	// (0x000324c4) battery_pane_g2

0x0001,

0xf7c8,	// (0x0003f19f) battery_pane_g_ParamLimits

0xf7c8,	// (0x0003f19f) battery_pane_g

0x2e5c,	// (0x00032833) uni_indicator_pane_g1

0x2e71,	// (0x00032848) uni_indicator_pane_g2

0x2e87,	// (0x0003285e) uni_indicator_pane_g3

0x0005,

0xf92b,	// (0x0003f302) uni_indicator_pane_g

0x1ae8,	// (0x000314bf) navi_icon_pane_ParamLimits

0x1ae8,	// (0x000314bf) navi_icon_pane

0x0f57,	// (0x0003092e) navi_midp_pane

0x0f57,	// (0x0003092e) navi_navi_pane

0x1ae8,	// (0x000314bf) navi_text_pane_ParamLimits

0x1ae8,	// (0x000314bf) navi_text_pane

0x0e0a,	// (0x000307e1) status_small_wait_pane_g1

0x164c,	// (0x00031023) status_small_wait_pane_g2

0x0001,

0xf926,	// (0x0003f2fd) status_small_wait_pane_g

0x2e02,	// (0x000327d9) navi_navi_icon_text_pane

0x2e1c,	// (0x000327f3) navi_navi_pane_g1_ParamLimits

0x2e1c,	// (0x000327f3) navi_navi_pane_g1

0x2e0a,	// (0x000327e1) navi_navi_pane_g2_ParamLimits

0x2e0a,	// (0x000327e1) navi_navi_pane_g2

0x0001,

0xf8f4,	// (0x0003f2cb) navi_navi_pane_g_ParamLimits

0xf8f4,	// (0x0003f2cb) navi_navi_pane_g

0x2e2e,	// (0x00032805) navi_navi_tabs_pane

0x2e02,	// (0x000327d9) navi_navi_text_pane

0x2e02,	// (0x000327d9) navi_navi_volume_pane

0x6516,	// (0x00035eed) navi_text_pane_t1

0x650a,	// (0x00035ee1) navi_icon_pane_g1

0x645e,	// (0x00035e35) navi_navi_text_pane_t1

0xa269,	// (0x00039c40) navi_navi_volume_pane_g1

0xf0b4,	// (0x0003ea8b) volume_small_pane

0x2d55,	// (0x0003272c) navi_navi_icon_text_pane_g1

0x2d5d,	// (0x00032734) navi_navi_icon_text_pane_t1

0x5e33,	// (0x0003580a) navi_tabs_2_long_pane

0x5e33,	// (0x0003580a) navi_tabs_2_pane

0x5e33,	// (0x0003580a) navi_tabs_3_long_pane

0x5e33,	// (0x0003580a) navi_tabs_3_pane

0x5e33,	// (0x0003580a) navi_tabs_4_pane

0xf094,	// (0x0003ea6b) tabs_2_active_pane_ParamLimits

0xf094,	// (0x0003ea6b) tabs_2_active_pane

0xf0a4,	// (0x0003ea7b) tabs_2_passive_pane_ParamLimits

0xf0a4,	// (0x0003ea7b) tabs_2_passive_pane

0xf062,	// (0x0003ea39) tabs_3_active_pane_ParamLimits

0xf062,	// (0x0003ea39) tabs_3_active_pane

0xf072,	// (0x0003ea49) tabs_3_passive_pane_ParamLimits

0xf072,	// (0x0003ea49) tabs_3_passive_pane

0xf083,	// (0x0003ea5a) tabs_3_passive_pane_cp_ParamLimits

0xf083,	// (0x0003ea5a) tabs_3_passive_pane_cp

0xf01e,	// (0x0003e9f5) tabs_4_active_pane_ParamLimits

0xf01e,	// (0x0003e9f5) tabs_4_active_pane

0xf02f,	// (0x0003ea06) tabs_4_passive_pane_ParamLimits

0xf02f,	// (0x0003ea06) tabs_4_passive_pane

0xf040,	// (0x0003ea17) tabs_4_passive_pane_cp_ParamLimits

0xf040,	// (0x0003ea17) tabs_4_passive_pane_cp

0xf051,	// (0x0003ea28) tabs_4_passive_pane_cp2_ParamLimits

0xf051,	// (0x0003ea28) tabs_4_passive_pane_cp2

0xeffe,	// (0x0003e9d5) tabs_2_long_active_pane_ParamLimits

0xeffe,	// (0x0003e9d5) tabs_2_long_active_pane

0xf00e,	// (0x0003e9e5) tabs_2_long_passive_pane_ParamLimits

0xf00e,	// (0x0003e9e5) tabs_2_long_passive_pane

0xefc7,	// (0x0003e99e) tabs_3_long_active_pane_ParamLimits

0xefc7,	// (0x0003e99e) tabs_3_long_active_pane

0xefda,	// (0x0003e9b1) tabs_3_long_passive_pane_ParamLimits

0xefda,	// (0x0003e9b1) tabs_3_long_passive_pane

0xefeb,	// (0x0003e9c2) tabs_3_long_passive_pane_cp_ParamLimits

0xefeb,	// (0x0003e9c2) tabs_3_long_passive_pane_cp

0xa096,	// (0x00039a6d) volume_small_pane_g1

0xa09f,	// (0x00039a76) volume_small_pane_g2

0xa0a8,	// (0x00039a7f) volume_small_pane_g3

0xa0b1,	// (0x00039a88) volume_small_pane_g4

0xa0ba,	// (0x00039a91) volume_small_pane_g5

0xa0c3,	// (0x00039a9a) volume_small_pane_g6

0xa0cc,	// (0x00039aa3) volume_small_pane_g7

0xa0d5,	// (0x00039aac) volume_small_pane_g8

0xa0de,	// (0x00039ab5) volume_small_pane_g9

0xa0e7,	// (0x00039abe) volume_small_pane_g10

0x0009,

0xf8c0,	// (0x0003f297) volume_small_pane_g

0x1119,	// (0x00030af0) bg_active_tab_pane_cp2_ParamLimits

0x1119,	// (0x00030af0) bg_active_tab_pane_cp2

0x1127,	// (0x00030afe) tabs_3_active_pane_g1

0x112f,	// (0x00030b06) tabs_3_active_pane_t1

0x1119,	// (0x00030af0) bg_passive_tab_pane_cp2_ParamLimits

0x1119,	// (0x00030af0) bg_passive_tab_pane_cp2

0x1127,	// (0x00030afe) tabs_3_passive_pane_g1

0x112f,	// (0x00030b06) tabs_3_passive_pane_t1

0x1119,	// (0x00030af0) bg_active_tab_pane_cp3_ParamLimits

0x1119,	// (0x00030af0) bg_active_tab_pane_cp3

0x63a7,	// (0x00035d7e) tabs_4_active_pane_g1

0x1145,	// (0x00030b1c) tabs_4_active_pane_t1

0x1119,	// (0x00030af0) bg_passive_tab_pane_cp3_ParamLimits

0x1119,	// (0x00030af0) bg_passive_tab_pane_cp3

0x63a7,	// (0x00035d7e) tabs_4_1_passive_pane_g1

0x1145,	// (0x00030b1c) tabs_4_1_passive_pane_t1

0x4ac9,	// (0x000344a0) list_highlight_pane_cp2

0x2f43,	// (0x0003291a) list_set_pane_ParamLimits

0x2f43,	// (0x0003291a) list_set_pane

0x2fd1,	// (0x000329a8) main_pane_set_t1_ParamLimits

0x2fd1,	// (0x000329a8) main_pane_set_t1

0x2ff1,	// (0x000329c8) main_pane_set_t2_ParamLimits

0x2ff1,	// (0x000329c8) main_pane_set_t2

0x3005,	// (0x000329dc) main_pane_set_t3_ParamLimits

0x3005,	// (0x000329dc) main_pane_set_t3

0x3017,	// (0x000329ee) main_pane_set_t4_ParamLimits

0x3017,	// (0x000329ee) main_pane_set_t4

0x0003,

0xf990,	// (0x0003f367) main_pane_set_t_ParamLimits

0xf990,	// (0x0003f367) main_pane_set_t

0x3029,	// (0x00032a00) setting_code_pane

0x3031,	// (0x00032a08) setting_slider_graphic_pane

0x3031,	// (0x00032a08) setting_slider_pane

0x3031,	// (0x00032a08) setting_text_pane

0x3031,	// (0x00032a08) setting_volume_pane

0xedc0,	// (0x0003e797) volume_set_pane

0x1163,	// (0x00030b3a) bg_set_opt_pane_cp

0x8d32,	// (0x00038709) setting_slider_pane_t1

0xedc8,	// (0x0003e79f) setting_slider_pane_t2

0xede1,	// (0x0003e7b8) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003ef51) setting_slider_pane_t

0x8d78,	// (0x0003874f) slider_set_pane

0x0f57,	// (0x0003092e) bg_set_opt_pane_cp2

0x11cd,	// (0x00030ba4) setting_slider_graphic_pane_g1

0xedf8,	// (0x0003e7cf) setting_slider_graphic_pane_t1

0xee07,	// (0x0003e7de) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003ef58) setting_slider_graphic_pane_t

0xee16,	// (0x0003e7ed) slider_set_pane_cp

0x0f57,	// (0x0003092e) input_focus_pane_cp1

0x6966,	// (0x0003633d) list_set_text_pane

0x0e0a,	// (0x000307e1) setting_text_pane_g1

0x0f57,	// (0x0003092e) input_focus_pane_cp2

0x0e0a,	// (0x000307e1) setting_code_pane_g1

0x11fc,	// (0x00030bd3) setting_code_pane_t1

0x0613,	// (0x0002ffea) set_text_pane_t1_ParamLimits

0x0613,	// (0x0002ffea) set_text_pane_t1

0x1a97,	// (0x0003146e) set_opt_bg_pane_g1

0x1a9f,	// (0x00031476) set_opt_bg_pane_g2

0x2f03,	// (0x000328da) set_opt_bg_pane_g3

0x1aaf,	// (0x00031486) set_opt_bg_pane_g4

0x1ab7,	// (0x0003148e) set_opt_bg_pane_g5

0x1abf,	// (0x00031496) set_opt_bg_pane_g6

0x2f0b,	// (0x000328e2) set_opt_bg_pane_g7

0x2f13,	// (0x000328ea) set_opt_bg_pane_g8

0x2f1b,	// (0x000328f2) set_opt_bg_pane_g9

0x0008,

0xf97d,	// (0x0003f354) set_opt_bg_pane_g

0x6959,	// (0x00036330) slider_set_pane_g1

0xa344,	// (0x00039d1b) slider_set_pane_g2

0x0006,

0xf96e,	// (0x0003f345) slider_set_pane_g

0xf0bd,	// (0x0003ea94) volume_set_pane_g1

0xf0c5,	// (0x0003ea9c) volume_set_pane_g2

0xf0cd,	// (0x0003eaa4) volume_set_pane_g3

0xf0d5,	// (0x0003eaac) volume_set_pane_g4

0xf0dd,	// (0x0003eab4) volume_set_pane_g5

0xf0e5,	// (0x0003eabc) volume_set_pane_g6

0xf0ed,	// (0x0003eac4) volume_set_pane_g7

0xf0f5,	// (0x0003eacc) volume_set_pane_g8

0xf0fd,	// (0x0003ead4) volume_set_pane_g9

0xf105,	// (0x0003eadc) volume_set_pane_g10

0x0009,

0xf946,	// (0x0003f31d) volume_set_pane_g

0x120a,	// (0x00030be1) indicator_pane_ParamLimits

0x120a,	// (0x00030be1) indicator_pane

0x1232,	// (0x00030c09) main_idle_pane_g2_ParamLimits

0x1232,	// (0x00030c09) main_idle_pane_g2

0x1262,	// (0x00030c39) main_pane_idle_g1_ParamLimits

0x1262,	// (0x00030c39) main_pane_idle_g1

0x1287,	// (0x00030c5e) popup_clock_digital_analogue_window_ParamLimits

0x1287,	// (0x00030c5e) popup_clock_digital_analogue_window

0x129e,	// (0x00030c75) soft_indicator_pane_ParamLimits

0x129e,	// (0x00030c75) soft_indicator_pane

0x12b8,	// (0x00030c8f) wallpaper_pane_ParamLimits

0x12b8,	// (0x00030c8f) wallpaper_pane

0x0e0a,	// (0x000307e1) wallpaper_pane_g1

0x12d2,	// (0x00030ca9) indicator_pane_g1_ParamLimits

0x12d2,	// (0x00030ca9) indicator_pane_g1

0x6a60,	// (0x00036437) navi_navi_icon_text_pane_srt_g1

0x12fa,	// (0x00030cd1) soft_indicator_pane_t1

0x1314,	// (0x00030ceb) aid_ps_area_pane

0x1325,	// (0x00030cfc) aid_ps_clock_pane

0x1331,	// (0x00030d08) aid_ps_indicator_pane

0x133d,	// (0x00030d14) indicator_ps_pane_ParamLimits

0x133d,	// (0x00030d14) indicator_ps_pane

0x134c,	// (0x00030d23) power_save_pane_g1_ParamLimits

0x134c,	// (0x00030d23) power_save_pane_g1

0x1358,	// (0x00030d2f) power_save_pane_g2_ParamLimits

0x1358,	// (0x00030d2f) power_save_pane_g2

0x897a,	// (0x00038351) aid_navinavi_width_pane

0x1314,	// (0x00030ceb) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003ef5d) power_save_pane_g_ParamLimits

0xf586,	// (0x0003ef5d) power_save_pane_g

0x1366,	// (0x00030d3d) power_save_pane_t1_ParamLimits

0x1366,	// (0x00030d3d) power_save_pane_t1

0x1325,	// (0x00030cfc) aid_ps_clock_pane_ParamLimits

0x1331,	// (0x00030d08) aid_ps_indicator_pane_ParamLimits

0x1378,	// (0x00030d4f) power_save_pane_t4_ParamLimits

0x1378,	// (0x00030d4f) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003ef62) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003ef62) power_save_pane_t

0x13a2,	// (0x00030d79) power_save_t3_ParamLimits

0x13a2,	// (0x00030d79) power_save_t3

0x138d,	// (0x00030d64) power_save_t2_ParamLimits

0x138d,	// (0x00030d64) power_save_t2

0x13b7,	// (0x00030d8e) indicator_ps_pane_g1

0x13c0,	// (0x00030d97) ai_gene_pane_ParamLimits

0x13c0,	// (0x00030d97) ai_gene_pane

0x13d7,	// (0x00030dae) ai_links_pane_ParamLimits

0x13d7,	// (0x00030dae) ai_links_pane

0x13e9,	// (0x00030dc0) indicator_pane_cp1_ParamLimits

0x13e9,	// (0x00030dc0) indicator_pane_cp1

0x13f8,	// (0x00030dcf) main_pane_idle_g1_cp_ParamLimits

0x13f8,	// (0x00030dcf) main_pane_idle_g1_cp

0x1410,	// (0x00030de7) popup_ai_links_title_window

0x1419,	// (0x00030df0) soft_indicator_pane_cp1_ParamLimits

0x1419,	// (0x00030df0) soft_indicator_pane_cp1

0x679b,	// (0x00036172) ai_links_pane_g1

0x67a4,	// (0x0003617b) grid_ai_links_pane

0x2e53,	// (0x0003282a) ai_gene_pane_1

0x6789,	// (0x00036160) ai_gene_pane_2

0x6792,	// (0x00036169) list_highlight_pane_cp4

0x2e37,	// (0x0003280e) cell_ai_link_pane_ParamLimits

0x2e37,	// (0x0003280e) cell_ai_link_pane

0x6781,	// (0x00036158) cell_ai_link_pane_g1

0x164c,	// (0x00031023) cell_ai_link_pane_g2

0x0001,

0xf921,	// (0x0003f2f8) cell_ai_link_pane_g

0x0f57,	// (0x0003092e) grid_highlight_cp2

0x0f57,	// (0x0003092e) bg_popup_sub_pane_cp1

0x143b,	// (0x00030e12) popup_ai_links_title_window_t1

0x66d3,	// (0x000360aa) ai_gene_pane_1_g1_ParamLimits

0x66d3,	// (0x000360aa) ai_gene_pane_1_g1

0x66df,	// (0x000360b6) ai_gene_pane_1_g2_ParamLimits

0x66df,	// (0x000360b6) ai_gene_pane_1_g2

0x0001,

0xf917,	// (0x0003f2ee) ai_gene_pane_1_g_ParamLimits

0xf917,	// (0x0003f2ee) ai_gene_pane_1_g

0x66ec,	// (0x000360c3) ai_gene_pane_1_t1_ParamLimits

0x66ec,	// (0x000360c3) ai_gene_pane_1_t1

0x6720,	// (0x000360f7) grid_ai_soft_ind_pane

0x66be,	// (0x00036095) ai_gene_pane_2_t1_ParamLimits

0x66be,	// (0x00036095) ai_gene_pane_2_t1

0x144a,	// (0x00030e21) main_pane_empty_t1_ParamLimits

0x144a,	// (0x00030e21) main_pane_empty_t1

0x1467,	// (0x00030e3e) main_pane_empty_t2_ParamLimits

0x1467,	// (0x00030e3e) main_pane_empty_t2

0x147f,	// (0x00030e56) main_pane_empty_t3_ParamLimits

0x147f,	// (0x00030e56) main_pane_empty_t3

0x1492,	// (0x00030e69) main_pane_empty_t4_ParamLimits

0x1492,	// (0x00030e69) main_pane_empty_t4

0x14a5,	// (0x00030e7c) main_pane_empty_t5_ParamLimits

0x14a5,	// (0x00030e7c) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003ef67) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003ef67) main_pane_empty_t

0x1ae8,	// (0x000314bf) bg_popup_window_pane_ParamLimits

0x1ae8,	// (0x000314bf) bg_popup_window_pane

0x646d,	// (0x00035e44) find_popup_pane_cp2_ParamLimits

0x646d,	// (0x00035e44) find_popup_pane_cp2

0x6479,	// (0x00035e50) heading_pane_ParamLimits

0x6479,	// (0x00035e50) heading_pane

0x0f57,	// (0x0003092e) bg_popup_sub_pane

0x2d7a,	// (0x00032751) bg_popup_window_pane_g1_ParamLimits

0x2d7a,	// (0x00032751) bg_popup_window_pane_g1

0x2d89,	// (0x00032760) bg_popup_window_pane_g2_ParamLimits

0x2d89,	// (0x00032760) bg_popup_window_pane_g2

0x2d95,	// (0x0003276c) bg_popup_window_pane_g3_ParamLimits

0x2d95,	// (0x0003276c) bg_popup_window_pane_g3

0x2da1,	// (0x00032778) bg_popup_window_pane_g4_ParamLimits

0x2da1,	// (0x00032778) bg_popup_window_pane_g4

0x2db0,	// (0x00032787) bg_popup_window_pane_g5_ParamLimits

0x2db0,	// (0x00032787) bg_popup_window_pane_g5

0x2dc0,	// (0x00032797) bg_popup_window_pane_g6_ParamLimits

0x2dc0,	// (0x00032797) bg_popup_window_pane_g6

0x2dcc,	// (0x000327a3) bg_popup_window_pane_g7_ParamLimits

0x2dcc,	// (0x000327a3) bg_popup_window_pane_g7

0x2ddb,	// (0x000327b2) bg_popup_window_pane_g8_ParamLimits

0x2ddb,	// (0x000327b2) bg_popup_window_pane_g8

0x2dea,	// (0x000327c1) bg_popup_window_pane_g9_ParamLimits

0x2dea,	// (0x000327c1) bg_popup_window_pane_g9

0x6452,	// (0x00035e29) bg_popup_window_pane_g10_ParamLimits

0x6452,	// (0x00035e29) bg_popup_window_pane_g10

0x0009,

0xf8df,	// (0x0003f2b6) bg_popup_window_pane_g_ParamLimits

0xf8df,	// (0x0003f2b6) bg_popup_window_pane_g

0x6409,	// (0x00035de0) bg_popup_heading_pane_ParamLimits

0x6409,	// (0x00035de0) bg_popup_heading_pane

0xa60a,	// (0x00039fe1) tabs_4_passive_pane_cp_srt_ParamLimits

0xa60a,	// (0x00039fe1) tabs_4_passive_pane_cp_srt

0xa61c,	// (0x00039ff3) tabs_4_passive_pane_srt_ParamLimits

0x641d,	// (0x00035df4) heading_pane_g2

0xa61c,	// (0x00039ff3) tabs_4_passive_pane_srt

0x5793,	// (0x0003516a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5793,	// (0x0003516a) bg_passive_tab_pane_cp3_srt

0x6425,	// (0x00035dfc) heading_pane_t1_ParamLimits

0x6425,	// (0x00035dfc) heading_pane_t1

0x643c,	// (0x00035e13) heading_pane_t2_ParamLimits

0x643c,	// (0x00035e13) heading_pane_t2

0x0001,

0xf8da,	// (0x0003f2b1) heading_pane_t_ParamLimits

0xf8da,	// (0x0003f2b1) heading_pane_t

0x5db3,	// (0x0003578a) bg_popup_heading_pane_g1

0x5e44,	// (0x0003581b) bg_popup_heading_pane_g2

0x5e4c,	// (0x00035823) bg_popup_heading_pane_g3

0x5e54,	// (0x0003582b) bg_popup_heading_pane_g4

0x5e5c,	// (0x00035833) bg_popup_heading_pane_g5

0x5e64,	// (0x0003583b) bg_popup_heading_pane_g6

0x5e6c,	// (0x00035843) bg_popup_heading_pane_g7

0x5e74,	// (0x0003584b) bg_popup_heading_pane_g8

0x5e7c,	// (0x00035853) bg_popup_heading_pane_g9

0x0008,

0xf896,	// (0x0003f26d) bg_popup_heading_pane_g

0x5699,	// (0x00035070) bg_popup_sub_pane_g1

0x56a1,	// (0x00035078) bg_popup_sub_pane_g2

0x56a9,	// (0x00035080) bg_popup_sub_pane_g3

0x56b1,	// (0x00035088) bg_popup_sub_pane_g4

0x56b9,	// (0x00035090) bg_popup_sub_pane_g5

0x56c1,	// (0x00035098) bg_popup_sub_pane_g6

0x56c9,	// (0x000350a0) bg_popup_sub_pane_g7

0x56d1,	// (0x000350a8) bg_popup_sub_pane_g8

0x56d9,	// (0x000350b0) bg_popup_sub_pane_g9

0x0008,

0xf870,	// (0x0003f247) bg_popup_sub_pane_g

0x1119,	// (0x00030af0) bg_popup_window_pane_cp5_ParamLimits

0x1119,	// (0x00030af0) bg_popup_window_pane_cp5

0x14c6,	// (0x00030e9d) popup_note_window_g1_ParamLimits

0x14c6,	// (0x00030e9d) popup_note_window_g1

0x14d2,	// (0x00030ea9) popup_note_window_t1_ParamLimits

0x14d2,	// (0x00030ea9) popup_note_window_t1

0x14e8,	// (0x00030ebf) popup_note_window_t2_ParamLimits

0x14e8,	// (0x00030ebf) popup_note_window_t2

0x14fe,	// (0x00030ed5) popup_note_window_t3_ParamLimits

0x14fe,	// (0x00030ed5) popup_note_window_t3

0x1514,	// (0x00030eeb) popup_note_window_t4_ParamLimits

0x1514,	// (0x00030eeb) popup_note_window_t4

0x153c,	// (0x00030f13) popup_note_window_t5_ParamLimits

0x153c,	// (0x00030f13) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003ef72) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003ef72) popup_note_window_t

0x1560,	// (0x00030f37) bg_popup_window_pane_cp6_ParamLimits

0x1560,	// (0x00030f37) bg_popup_window_pane_cp6

0x5d2f,	// (0x00035706) popup_note_image_window_g1_ParamLimits

0x5d2f,	// (0x00035706) popup_note_image_window_g1

0x5d3b,	// (0x00035712) popup_note_image_window_g2_ParamLimits

0x5d3b,	// (0x00035712) popup_note_image_window_g2

0x0001,

0xf864,	// (0x0003f23b) popup_note_image_window_g_ParamLimits

0xf864,	// (0x0003f23b) popup_note_image_window_g

0x5d54,	// (0x0003572b) popup_note_image_window_t1_ParamLimits

0x5d54,	// (0x0003572b) popup_note_image_window_t1

0x5d6d,	// (0x00035744) popup_note_image_window_t2_ParamLimits

0x5d6d,	// (0x00035744) popup_note_image_window_t2

0x5d86,	// (0x0003575d) popup_note_image_window_t3_ParamLimits

0x5d86,	// (0x0003575d) popup_note_image_window_t3

0x0002,

0xf869,	// (0x0003f240) popup_note_image_window_t_ParamLimits

0xf869,	// (0x0003f240) popup_note_image_window_t

0x5c1a,	// (0x000355f1) bg_popup_window_pane_cp7_ParamLimits

0x5c1a,	// (0x000355f1) bg_popup_window_pane_cp7

0x5c4a,	// (0x00035621) popup_note_wait_window_g1_ParamLimits

0x5c4a,	// (0x00035621) popup_note_wait_window_g1

0x5c56,	// (0x0003562d) popup_note_wait_window_g2_ParamLimits

0x5c56,	// (0x0003562d) popup_note_wait_window_g2

0x0002,

0xf852,	// (0x0003f229) popup_note_wait_window_g_ParamLimits

0xf852,	// (0x0003f229) popup_note_wait_window_g

0x5c6e,	// (0x00035645) popup_note_wait_window_t1_ParamLimits

0x5c6e,	// (0x00035645) popup_note_wait_window_t1

0x5c95,	// (0x0003566c) popup_note_wait_window_t2_ParamLimits

0x5c95,	// (0x0003566c) popup_note_wait_window_t2

0x5cb2,	// (0x00035689) popup_note_wait_window_t3_ParamLimits

0x5cb2,	// (0x00035689) popup_note_wait_window_t3

0x5cc5,	// (0x0003569c) popup_note_wait_window_t4_ParamLimits

0x5cc5,	// (0x0003569c) popup_note_wait_window_t4

0x0004,

0xf859,	// (0x0003f230) popup_note_wait_window_t_ParamLimits

0xf859,	// (0x0003f230) popup_note_wait_window_t

0x5cea,	// (0x000356c1) wait_bar_pane_ParamLimits

0x5cea,	// (0x000356c1) wait_bar_pane

0x0f57,	// (0x0003092e) wait_anim_pane

0x0f57,	// (0x0003092e) wait_border_pane

0x0e0a,	// (0x000307e1) wait_anim_pane_g1

0x0e0a,	// (0x000307e1) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0003f0fb) wait_anim_pane_g

0x5bca,	// (0x000355a1) wait_border_pane_g1

0x5bd3,	// (0x000355aa) wait_border_pane_g2

0x5bdc,	// (0x000355b3) wait_border_pane_g3

0x0002,

0xf84b,	// (0x0003f222) wait_border_pane_g

0x5a3a,	// (0x00035411) bg_popup_window_pane_cp16_ParamLimits

0x5a3a,	// (0x00035411) bg_popup_window_pane_cp16

0x5b3a,	// (0x00035511) indicator_popup_pane_cp4_ParamLimits

0x5b3a,	// (0x00035511) indicator_popup_pane_cp4

0x5b4e,	// (0x00035525) popup_query_data_window_t1_ParamLimits

0x5b4e,	// (0x00035525) popup_query_data_window_t1

0x5b60,	// (0x00035537) popup_query_data_window_t2_ParamLimits

0x5b60,	// (0x00035537) popup_query_data_window_t2

0x5b79,	// (0x00035550) popup_query_data_window_t3_ParamLimits

0x5b79,	// (0x00035550) popup_query_data_window_t3

0x0002,

0xf844,	// (0x0003f21b) popup_query_data_window_t_ParamLimits

0xf844,	// (0x0003f21b) popup_query_data_window_t

0x5b93,	// (0x0003556a) query_popup_data_pane_ParamLimits

0x5b93,	// (0x0003556a) query_popup_data_pane

0x5ba7,	// (0x0003557e) query_popup_data_pane_cp1_ParamLimits

0x5ba7,	// (0x0003557e) query_popup_data_pane_cp1

0x5a3a,	// (0x00035411) bg_popup_window_pane_cp10_ParamLimits

0x5a3a,	// (0x00035411) bg_popup_window_pane_cp10

0x5a6c,	// (0x00035443) indicator_popup_pane_ParamLimits

0x5a6c,	// (0x00035443) indicator_popup_pane

0x5a8e,	// (0x00035465) popup_query_code_window_t1_ParamLimits

0x5a8e,	// (0x00035465) popup_query_code_window_t1

0x5aa8,	// (0x0003547f) popup_query_code_window_t2_ParamLimits

0x5aa8,	// (0x0003547f) popup_query_code_window_t2

0x5af1,	// (0x000354c8) popup_query_code_window_t3_ParamLimits

0x5af1,	// (0x000354c8) popup_query_code_window_t3

0x0002,

0xf83d,	// (0x0003f214) popup_query_code_window_t_ParamLimits

0xf83d,	// (0x0003f214) popup_query_code_window_t

0x5b20,	// (0x000354f7) query_popup_pane_ParamLimits

0x5b20,	// (0x000354f7) query_popup_pane

0x1560,	// (0x00030f37) bg_popup_window_pane_cp15_ParamLimits

0x1560,	// (0x00030f37) bg_popup_window_pane_cp15

0x157e,	// (0x00030f55) indicator_popup_pane_cp1_ParamLimits

0x157e,	// (0x00030f55) indicator_popup_pane_cp1

0x1591,	// (0x00030f68) indicator_popup_pane_cp2_ParamLimits

0x1591,	// (0x00030f68) indicator_popup_pane_cp2

0x15a4,	// (0x00030f7b) popup_query_data_code_window_g1_ParamLimits

0x15a4,	// (0x00030f7b) popup_query_data_code_window_g1

0x15b7,	// (0x00030f8e) popup_query_data_code_window_t1_ParamLimits

0x15b7,	// (0x00030f8e) popup_query_data_code_window_t1

0x15c9,	// (0x00030fa0) popup_query_data_code_window_t2_ParamLimits

0x15c9,	// (0x00030fa0) popup_query_data_code_window_t2

0x15db,	// (0x00030fb2) popup_query_data_code_window_t3_ParamLimits

0x15db,	// (0x00030fb2) popup_query_data_code_window_t3

0x15f1,	// (0x00030fc8) popup_query_data_code_window_t4_ParamLimits

0x15f1,	// (0x00030fc8) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003ef7d) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003ef7d) popup_query_data_code_window_t

0x9eb0,	// (0x00039887) list_single_midp_graphic_pane_g3

0x1609,	// (0x00030fe0) query_popup_data_pane_cp2_ParamLimits

0x161c,	// (0x00030ff3) query_popup_pane_cp2_ParamLimits

0x161c,	// (0x00030ff3) query_popup_pane_cp2

0x0f57,	// (0x0003092e) bg_popup_window_pane_cp11

0x5a32,	// (0x00035409) heading_pane_cp5

0x1700,	// (0x000310d7) listscroll_popup_info_pane

0x0f57,	// (0x0003092e) input_focus_pane_cp3

0x162f,	// (0x00031006) query_popup_pane_t1

0x163d,	// (0x00031014) list_popup_info_pane_ParamLimits

0x163d,	// (0x00031014) list_popup_info_pane

0x164c,	// (0x00031023) listscroll_popup_info_pane_g1

0x1654,	// (0x0003102b) scroll_pane_cp7

0x165c,	// (0x00031033) popup_info_list_pane_t1_ParamLimits

0x165c,	// (0x00031033) popup_info_list_pane_t1

0x1676,	// (0x0003104d) popup_info_list_pane_t2_ParamLimits

0x1676,	// (0x0003104d) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003ef86) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003ef86) popup_info_list_pane_t

0x0f57,	// (0x0003092e) bg_popup_window_pane_cp12

0x6a7a,	// (0x00036451) find_popup_pane

0x1163,	// (0x00030b3a) bg_popup_window_pane_cp3

0x1690,	// (0x00031067) heading_pane_cp3

0x169c,	// (0x00031073) listscroll_popup_graphic_pane

0x0f57,	// (0x0003092e) bg_popup_window_pane_cp4

0x16f8,	// (0x000310cf) heading_pane_cp4

0x1700,	// (0x000310d7) listscroll_popup_colour_pane

0x1708,	// (0x000310df) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x1708,	// (0x000310df) cell_large_graphic_colour_none_popup_pane

0x1718,	// (0x000310ef) grid_large_graphic_colour_popup_pane_ParamLimits

0x1718,	// (0x000310ef) grid_large_graphic_colour_popup_pane

0x1734,	// (0x0003110b) listscroll_popup_colour_pane_g1_ParamLimits

0x1734,	// (0x0003110b) listscroll_popup_colour_pane_g1

0x174b,	// (0x00031122) listscroll_popup_colour_pane_g2_ParamLimits

0x174b,	// (0x00031122) listscroll_popup_colour_pane_g2

0x175f,	// (0x00031136) listscroll_popup_colour_pane_g3_ParamLimits

0x175f,	// (0x00031136) listscroll_popup_colour_pane_g3

0x176f,	// (0x00031146) listscroll_popup_colour_pane_g4_ParamLimits

0x176f,	// (0x00031146) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003ef8b) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003ef8b) listscroll_popup_colour_pane_g

0x177e,	// (0x00031155) scroll_pane_cp6_ParamLimits

0x177e,	// (0x00031155) scroll_pane_cp6

0x1790,	// (0x00031167) cell_large_graphic_colour_popup_pane_ParamLimits

0x1790,	// (0x00031167) cell_large_graphic_colour_popup_pane

0x17af,	// (0x00031186) cell_large_graphic_colour_none_popup_pane_t1

0x0f57,	// (0x0003092e) grid_highlight_pane_cp5

0x17be,	// (0x00031195) cell_large_graphic_colour_popup_pane_g1

0x17c6,	// (0x0003119d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003ef94) cell_large_graphic_colour_popup_pane_g

0x17ce,	// (0x000311a5) cell_large_graphic_colour_popup_pane_g2_copy1

0x17d7,	// (0x000311ae) grid_highlight_pane_cp4

0x17df,	// (0x000311b6) bg_popup_window_pane_cp8_ParamLimits

0x17df,	// (0x000311b6) bg_popup_window_pane_cp8

0x17fa,	// (0x000311d1) popup_snote_single_text_window_g1_ParamLimits

0x17fa,	// (0x000311d1) popup_snote_single_text_window_g1

0x180c,	// (0x000311e3) popup_snote_single_text_window_t1_ParamLimits

0x180c,	// (0x000311e3) popup_snote_single_text_window_t1

0x181f,	// (0x000311f6) popup_snote_single_text_window_t2_ParamLimits

0x181f,	// (0x000311f6) popup_snote_single_text_window_t2

0x1832,	// (0x00031209) popup_snote_single_text_window_t3_ParamLimits

0x1832,	// (0x00031209) popup_snote_single_text_window_t3

0x186b,	// (0x00031242) popup_snote_single_text_window_t4_ParamLimits

0x186b,	// (0x00031242) popup_snote_single_text_window_t4

0x189f,	// (0x00031276) popup_snote_single_text_window_t5_ParamLimits

0x189f,	// (0x00031276) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003ef99) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003ef99) popup_snote_single_text_window_t

0x18ce,	// (0x000312a5) bg_popup_window_pane_cp9_ParamLimits

0x18ce,	// (0x000312a5) bg_popup_window_pane_cp9

0x17fa,	// (0x000311d1) popup_snote_single_graphic_window_g1_ParamLimits

0x17fa,	// (0x000311d1) popup_snote_single_graphic_window_g1

0x18dc,	// (0x000312b3) popup_snote_single_graphic_window_g2_ParamLimits

0x18dc,	// (0x000312b3) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003efa4) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003efa4) popup_snote_single_graphic_window_g

0x18e8,	// (0x000312bf) popup_snote_single_graphic_window_t1_ParamLimits

0x18e8,	// (0x000312bf) popup_snote_single_graphic_window_t1

0x18fb,	// (0x000312d2) popup_snote_single_graphic_window_t2_ParamLimits

0x18fb,	// (0x000312d2) popup_snote_single_graphic_window_t2

0x1832,	// (0x00031209) popup_snote_single_graphic_window_t3_ParamLimits

0x1832,	// (0x00031209) popup_snote_single_graphic_window_t3

0x186b,	// (0x00031242) popup_snote_single_graphic_window_t4_ParamLimits

0x186b,	// (0x00031242) popup_snote_single_graphic_window_t4

0x189f,	// (0x00031276) popup_snote_single_graphic_window_t5_ParamLimits

0x189f,	// (0x00031276) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003efa9) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003efa9) popup_snote_single_graphic_window_t

0x312b,	// (0x00032b02) grid_graphic_popup_pane_ParamLimits

0x312b,	// (0x00032b02) grid_graphic_popup_pane

0x314e,	// (0x00032b25) listscroll_popup_graphic_pane_g1_ParamLimits

0x314e,	// (0x00032b25) listscroll_popup_graphic_pane_g1

0x3162,	// (0x00032b39) listscroll_popup_graphic_pane_g2_ParamLimits

0x3162,	// (0x00032b39) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ba,	// (0x0003f391) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ba,	// (0x0003f391) listscroll_popup_graphic_pane_g

0x63c9,	// (0x00035da0) scroll_pane_cp5

0x30e6,	// (0x00032abd) cell_graphic_popup_pane_ParamLimits

0x30e6,	// (0x00032abd) cell_graphic_popup_pane

0x6a23,	// (0x000363fa) cell_graphic_popup_pane_g1

0x6a2b,	// (0x00036402) cell_graphic_popup_pane_g2

0x17ce,	// (0x000311a5) cell_graphic_popup_pane_g3

0x0002,

0xf9b3,	// (0x0003f38a) cell_graphic_popup_pane_g

0x6a34,	// (0x0003640b) cell_graphic_popup_pane_t2

0x17d7,	// (0x000311ae) grid_highlight_pane_cp3

0x1920,	// (0x000312f7) list_gen_pane_ParamLimits

0x1920,	// (0x000312f7) list_gen_pane

0x1951,	// (0x00031328) scroll_pane

0x30b9,	// (0x00032a90) bg_list_pane_g1_ParamLimits

0x30b9,	// (0x00032a90) bg_list_pane_g1

0x69da,	// (0x000363b1) bg_list_pane_g2_ParamLimits

0x69da,	// (0x000363b1) bg_list_pane_g2

0x69ed,	// (0x000363c4) bg_list_pane_g3_ParamLimits

0x69ed,	// (0x000363c4) bg_list_pane_g3

0x69ff,	// (0x000363d6) bg_list_pane_g4_ParamLimits

0x69ff,	// (0x000363d6) bg_list_pane_g4

0x30d4,	// (0x00032aab) bg_list_pane_g5_ParamLimits

0x30d4,	// (0x00032aab) bg_list_pane_g5

0x0004,

0xf9a8,	// (0x0003f37f) bg_list_pane_g_ParamLimits

0xf9a8,	// (0x0003f37f) bg_list_pane_g

0x305e,	// (0x00032a35) list_double2_graphic_large_graphic_pane_ParamLimits

0x305e,	// (0x00032a35) list_double2_graphic_large_graphic_pane

0x305e,	// (0x00032a35) list_double2_graphic_pane_ParamLimits

0x305e,	// (0x00032a35) list_double2_graphic_pane

0x305e,	// (0x00032a35) list_double2_large_graphic_pane_ParamLimits

0x305e,	// (0x00032a35) list_double2_large_graphic_pane

0x305e,	// (0x00032a35) list_double2_pane_ParamLimits

0x305e,	// (0x00032a35) list_double2_pane

0x305e,	// (0x00032a35) list_double_graphic_heading_pane_ParamLimits

0x305e,	// (0x00032a35) list_double_graphic_heading_pane

0x305e,	// (0x00032a35) list_double_graphic_pane_ParamLimits

0x305e,	// (0x00032a35) list_double_graphic_pane

0x305e,	// (0x00032a35) list_double_heading_pane_ParamLimits

0x305e,	// (0x00032a35) list_double_heading_pane

0x305e,	// (0x00032a35) list_double_large_graphic_pane_ParamLimits

0x305e,	// (0x00032a35) list_double_large_graphic_pane

0x305e,	// (0x00032a35) list_double_number_pane_ParamLimits

0x305e,	// (0x00032a35) list_double_number_pane

0x305e,	// (0x00032a35) list_double_pane_ParamLimits

0x305e,	// (0x00032a35) list_double_pane

0x305e,	// (0x00032a35) list_double_time_pane_ParamLimits

0x305e,	// (0x00032a35) list_double_time_pane

0x305e,	// (0x00032a35) list_setting_number_pane_ParamLimits

0x305e,	// (0x00032a35) list_setting_number_pane

0x305e,	// (0x00032a35) list_setting_pane_ParamLimits

0x305e,	// (0x00032a35) list_setting_pane

0x306f,	// (0x00032a46) list_single_2graphic_pane_ParamLimits

0x306f,	// (0x00032a46) list_single_2graphic_pane

0x306f,	// (0x00032a46) list_single_graphic_heading_pane_ParamLimits

0x306f,	// (0x00032a46) list_single_graphic_heading_pane

0x306f,	// (0x00032a46) list_single_graphic_pane_ParamLimits

0x306f,	// (0x00032a46) list_single_graphic_pane

0x306f,	// (0x00032a46) list_single_heading_pane_ParamLimits

0x306f,	// (0x00032a46) list_single_heading_pane

0x30a7,	// (0x00032a7e) list_single_large_graphic_pane_ParamLimits

0x30a7,	// (0x00032a7e) list_single_large_graphic_pane

0x306f,	// (0x00032a46) list_single_number_heading_pane_ParamLimits

0x306f,	// (0x00032a46) list_single_number_heading_pane

0x306f,	// (0x00032a46) list_single_number_pane_ParamLimits

0x306f,	// (0x00032a46) list_single_number_pane

0x306f,	// (0x00032a46) list_single_pane_ParamLimits

0x306f,	// (0x00032a46) list_single_pane

0x0f57,	// (0x0003092e) list_highlight_pane_cp1

0xd5d0,	// (0x0003cfa7) list_single_pane_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_pane_g1

0xd5dc,	// (0x0003cfb3) list_single_pane_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_single_pane_g

0xd5e8,	// (0x0003cfbf) list_single_pane_t1_ParamLimits

0xd5e8,	// (0x0003cfbf) list_single_pane_t1

0xd5d0,	// (0x0003cfa7) list_single_number_pane_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_number_pane_g1

0xd5dc,	// (0x0003cfb3) list_single_number_pane_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_single_number_pane_g

0xd665,	// (0x0003d03c) list_single_number_pane_t1_ParamLimits

0xd665,	// (0x0003d03c) list_single_number_pane_t1

0x0bcd,	// (0x000305a4) list_single_number_pane_t2_ParamLimits

0x0bcd,	// (0x000305a4) list_single_number_pane_t2

0x0001,

0xf969,	// (0x0003f340) list_single_number_pane_t_ParamLimits

0xf969,	// (0x0003f340) list_single_number_pane_t

0xd68d,	// (0x0003d064) list_single_graphic_pane_g1_ParamLimits

0xd68d,	// (0x0003d064) list_single_graphic_pane_g1

0xd5d0,	// (0x0003cfa7) list_single_graphic_pane_g2_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_graphic_pane_g2

0xd5dc,	// (0x0003cfb3) list_single_graphic_pane_g3_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003efb4) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003efb4) list_single_graphic_pane_g

0xd665,	// (0x0003d03c) list_single_graphic_pane_t1_ParamLimits

0xd665,	// (0x0003d03c) list_single_graphic_pane_t1

0x062c,	// (0x00030003) list_single_heading_pane_g1_ParamLimits

0x062c,	// (0x00030003) list_single_heading_pane_g1

0xd5dc,	// (0x0003cfb3) list_single_heading_pane_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003efbb) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003efbb) list_single_heading_pane_g

0x063f,	// (0x00030016) list_single_heading_pane_t1_ParamLimits

0x063f,	// (0x00030016) list_single_heading_pane_t1

0x1986,	// (0x0003135d) list_single_heading_pane_t2_ParamLimits

0x1986,	// (0x0003135d) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003efc0) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003efc0) list_single_heading_pane_t

0xd5d0,	// (0x0003cfa7) list_single_number_heading_pane_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_number_heading_pane_g1

0xd5dc,	// (0x0003cfb3) list_single_number_heading_pane_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_single_number_heading_pane_g

0x0655,	// (0x0003002c) list_single_number_heading_pane_t1_ParamLimits

0x0655,	// (0x0003002c) list_single_number_heading_pane_t1

0x066b,	// (0x00030042) list_single_number_heading_pane_t2_ParamLimits

0x066b,	// (0x00030042) list_single_number_heading_pane_t2

0xddaf,	// (0x0003d786) list_single_number_heading_pane_t3_ParamLimits

0xddaf,	// (0x0003d786) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0003efca) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0003efca) list_single_number_heading_pane_t

0x067d,	// (0x00030054) list_single_graphic_heading_pane_g1_ParamLimits

0x067d,	// (0x00030054) list_single_graphic_heading_pane_g1

0x1998,	// (0x0003136f) list_single_graphic_heading_pane_g4_ParamLimits

0x1998,	// (0x0003136f) list_single_graphic_heading_pane_g4

0xd5dc,	// (0x0003cfb3) list_single_graphic_heading_pane_g5_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0003efd1) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0003efd1) list_single_graphic_heading_pane_g

0x0655,	// (0x0003002c) list_single_graphic_heading_pane_t1_ParamLimits

0x0655,	// (0x0003002c) list_single_graphic_heading_pane_t1

0x0693,	// (0x0003006a) list_single_graphic_heading_pane_t2_ParamLimits

0x0693,	// (0x0003006a) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0003efd8) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0003efd8) list_single_graphic_heading_pane_t

0xd58e,	// (0x0003cf65) list_single_large_graphic_pane_g1_ParamLimits

0xd58e,	// (0x0003cf65) list_single_large_graphic_pane_g1

0xd59a,	// (0x0003cf71) list_single_large_graphic_pane_g2_ParamLimits

0xd59a,	// (0x0003cf71) list_single_large_graphic_pane_g2

0xd5a6,	// (0x0003cf7d) list_single_large_graphic_pane_g3_ParamLimits

0xd5a6,	// (0x0003cf7d) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0003efdd) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0003efdd) list_single_large_graphic_pane_g

0x5bd3,	// (0x000355aa) wait_border_pane_g2_copy1

0xd5b2,	// (0x0003cf89) list_single_large_graphic_pane_g4_cp2

0xd5ba,	// (0x0003cf91) list_single_large_graphic_pane_t1_ParamLimits

0xd5ba,	// (0x0003cf91) list_single_large_graphic_pane_t1

0x19a9,	// (0x00031380) list_double_pane_g1_ParamLimits

0x19a9,	// (0x00031380) list_double_pane_g1

0x19b5,	// (0x0003138c) list_double_pane_g2_ParamLimits

0x19b5,	// (0x0003138c) list_double_pane_g2

0x0001,

0xf60d,	// (0x0003efe4) list_double_pane_g_ParamLimits

0xf60d,	// (0x0003efe4) list_double_pane_g

0x06ab,	// (0x00030082) list_double_pane_t1_ParamLimits

0x06ab,	// (0x00030082) list_double_pane_t1

0x06c1,	// (0x00030098) list_double_pane_t2_ParamLimits

0x06c1,	// (0x00030098) list_double_pane_t2

0x0001,

0xf612,	// (0x0003efe9) list_double_pane_t_ParamLimits

0xf612,	// (0x0003efe9) list_double_pane_t

0x06d3,	// (0x000300aa) list_double2_pane_g1_ParamLimits

0x06d3,	// (0x000300aa) list_double2_pane_g1

0x06e4,	// (0x000300bb) list_double2_pane_g2_ParamLimits

0x06e4,	// (0x000300bb) list_double2_pane_g2

0x0001,

0xf617,	// (0x0003efee) list_double2_pane_g_ParamLimits

0xf617,	// (0x0003efee) list_double2_pane_g

0x06f0,	// (0x000300c7) list_double2_pane_t1_ParamLimits

0x06f0,	// (0x000300c7) list_double2_pane_t1

0x0706,	// (0x000300dd) list_double2_pane_t2_ParamLimits

0x0706,	// (0x000300dd) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0003eff3) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0003eff3) list_double2_pane_t

0x19a9,	// (0x00031380) list_double_number_pane_g1_ParamLimits

0x19a9,	// (0x00031380) list_double_number_pane_g1

0x19b5,	// (0x0003138c) list_double_number_pane_g2_ParamLimits

0x19b5,	// (0x0003138c) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0003efe4) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0003efe4) list_double_number_pane_g

0x0718,	// (0x000300ef) list_double_number_pane_t1_ParamLimits

0x0718,	// (0x000300ef) list_double_number_pane_t1

0x072a,	// (0x00030101) list_double_number_pane_t2_ParamLimits

0x072a,	// (0x00030101) list_double_number_pane_t2

0x0740,	// (0x00030117) list_double_number_pane_t3_ParamLimits

0x0740,	// (0x00030117) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0003eff8) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0003eff8) list_double_number_pane_t

0xd81e,	// (0x0003d1f5) list_double_graphic_pane_g1_ParamLimits

0xd81e,	// (0x0003d1f5) list_double_graphic_pane_g1

0x19c1,	// (0x00031398) list_double_graphic_pane_g2_ParamLimits

0x19c1,	// (0x00031398) list_double_graphic_pane_g2

0x19d0,	// (0x000313a7) list_double_graphic_pane_g3_ParamLimits

0x19d0,	// (0x000313a7) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0003efff) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0003efff) list_double_graphic_pane_g

0x075e,	// (0x00030135) list_double_graphic_pane_t1_ParamLimits

0x075e,	// (0x00030135) list_double_graphic_pane_t1

0x0774,	// (0x0003014b) list_double_graphic_pane_t2_ParamLimits

0x0774,	// (0x0003014b) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0003f008) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0003f008) list_double_graphic_pane_t

0xd4a4,	// (0x0003ce7b) list_double2_graphic_pane_g1_ParamLimits

0xd4a4,	// (0x0003ce7b) list_double2_graphic_pane_g1

0xd4b0,	// (0x0003ce87) list_double2_graphic_pane_g2_ParamLimits

0xd4b0,	// (0x0003ce87) list_double2_graphic_pane_g2

0xd4bc,	// (0x0003ce93) list_double2_graphic_pane_g3_ParamLimits

0xd4bc,	// (0x0003ce93) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0003f00d) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0003f00d) list_double2_graphic_pane_g

0xd4c8,	// (0x0003ce9f) list_double2_graphic_pane_t1_ParamLimits

0xd4c8,	// (0x0003ce9f) list_double2_graphic_pane_t1

0x0786,	// (0x0003015d) list_double2_graphic_pane_t2_ParamLimits

0x0786,	// (0x0003015d) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003f014) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003f014) list_double2_graphic_pane_t

0x0798,	// (0x0003016f) list_double_large_graphic_pane_g1_ParamLimits

0x0798,	// (0x0003016f) list_double_large_graphic_pane_g1

0x07bc,	// (0x00030193) list_double_large_graphic_pane_g2_ParamLimits

0x07bc,	// (0x00030193) list_double_large_graphic_pane_g2

0x19b5,	// (0x0003138c) list_double_large_graphic_pane_g3_ParamLimits

0x19b5,	// (0x0003138c) list_double_large_graphic_pane_g3

0x07d2,	// (0x000301a9) list_double_large_graphic_pane_g4_ParamLimits

0x07d2,	// (0x000301a9) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0003f019) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0003f019) list_double_large_graphic_pane_g

0x07e3,	// (0x000301ba) list_double_large_graphic_pane_t1_ParamLimits

0x07e3,	// (0x000301ba) list_double_large_graphic_pane_t1

0x07fc,	// (0x000301d3) list_double_large_graphic_pane_t2_ParamLimits

0x07fc,	// (0x000301d3) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0003f024) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0003f024) list_double_large_graphic_pane_t

0x19dc,	// (0x000313b3) list_double2_large_graphic_pane_g1_ParamLimits

0x19dc,	// (0x000313b3) list_double2_large_graphic_pane_g1

0x080e,	// (0x000301e5) list_double2_large_graphic_pane_g2_ParamLimits

0x080e,	// (0x000301e5) list_double2_large_graphic_pane_g2

0xd4bc,	// (0x0003ce93) list_double2_large_graphic_pane_g3_ParamLimits

0xd4bc,	// (0x0003ce93) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0003f029) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0003f029) list_double2_large_graphic_pane_g

0xd519,	// (0x0003cef0) list_double2_large_graphic_pane_t1_ParamLimits

0xd519,	// (0x0003cef0) list_double2_large_graphic_pane_t1

0x081f,	// (0x000301f6) list_double2_large_graphic_pane_t2_ParamLimits

0x081f,	// (0x000301f6) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0003f030) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0003f030) list_double2_large_graphic_pane_t

0x0831,	// (0x00030208) list_double_heading_pane_g1_ParamLimits

0x0831,	// (0x00030208) list_double_heading_pane_g1

0x19e8,	// (0x000313bf) list_double_heading_pane_g2_ParamLimits

0x19e8,	// (0x000313bf) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0003f035) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0003f035) list_double_heading_pane_g

0x0842,	// (0x00030219) list_double_heading_pane_t1_ParamLimits

0x0842,	// (0x00030219) list_double_heading_pane_t1

0x0706,	// (0x000300dd) list_double_heading_pane_t2_ParamLimits

0x0706,	// (0x000300dd) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0003f03a) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0003f03a) list_double_heading_pane_t

0xd81e,	// (0x0003d1f5) list_double_graphic_heading_pane_g1_ParamLimits

0xd81e,	// (0x0003d1f5) list_double_graphic_heading_pane_g1

0x0831,	// (0x00030208) list_double_graphic_heading_pane_g2_ParamLimits

0x0831,	// (0x00030208) list_double_graphic_heading_pane_g2

0x19e8,	// (0x000313bf) list_double_graphic_heading_pane_g3_ParamLimits

0x19e8,	// (0x000313bf) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0003f03f) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0003f03f) list_double_graphic_heading_pane_g

0x0858,	// (0x0003022f) list_double_graphic_heading_pane_t1_ParamLimits

0x0858,	// (0x0003022f) list_double_graphic_heading_pane_t1

0x0786,	// (0x0003015d) list_double_graphic_heading_pane_t2_ParamLimits

0x0786,	// (0x0003015d) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0003f046) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0003f046) list_double_graphic_heading_pane_t

0x086e,	// (0x00030245) list_double_time_pane_g1_ParamLimits

0x086e,	// (0x00030245) list_double_time_pane_g1

0x087f,	// (0x00030256) list_double_time_pane_g2_ParamLimits

0x087f,	// (0x00030256) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0003f04b) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0003f04b) list_double_time_pane_g

0x088b,	// (0x00030262) list_double_time_pane_t1_ParamLimits

0x088b,	// (0x00030262) list_double_time_pane_t1

0x08a1,	// (0x00030278) list_double_time_pane_t2_ParamLimits

0x08a1,	// (0x00030278) list_double_time_pane_t2

0x08b3,	// (0x0003028a) list_double_time_pane_t3_ParamLimits

0x08b3,	// (0x0003028a) list_double_time_pane_t3

0x08c5,	// (0x0003029c) list_double_time_pane_t4_ParamLimits

0x08c5,	// (0x0003029c) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0003f050) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0003f050) list_double_time_pane_t

0xee1e,	// (0x0003e7f5) list_setting_pane_g1_ParamLimits

0xee1e,	// (0x0003e7f5) list_setting_pane_g1

0xd84f,	// (0x0003d226) list_setting_pane_g2_ParamLimits

0xd84f,	// (0x0003d226) list_setting_pane_g2

0x0001,

0xf682,	// (0x0003f059) list_setting_pane_g_ParamLimits

0xf682,	// (0x0003f059) list_setting_pane_g

0x08d7,	// (0x000302ae) list_setting_pane_t1_ParamLimits

0x08d7,	// (0x000302ae) list_setting_pane_t1

0x08f1,	// (0x000302c8) list_setting_pane_t2_ParamLimits

0x08f1,	// (0x000302c8) list_setting_pane_t2

0x0002,

0xf687,	// (0x0003f05e) list_setting_pane_t_ParamLimits

0xf687,	// (0x0003f05e) list_setting_pane_t

0x092e,	// (0x00030305) set_value_pane_cp_ParamLimits

0x092e,	// (0x00030305) set_value_pane_cp

0x093a,	// (0x00030311) list_setting_number_pane_g1_ParamLimits

0x093a,	// (0x00030311) list_setting_number_pane_g1

0x0946,	// (0x0003031d) list_setting_number_pane_g2_ParamLimits

0x0946,	// (0x0003031d) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0003f065) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0003f065) list_setting_number_pane_g

0x0952,	// (0x00030329) list_setting_number_pane_t1_ParamLimits

0x0952,	// (0x00030329) list_setting_number_pane_t1

0x096b,	// (0x00030342) list_setting_number_pane_t2_ParamLimits

0x096b,	// (0x00030342) list_setting_number_pane_t2

0x0985,	// (0x0003035c) list_setting_number_pane_t3_ParamLimits

0x0985,	// (0x0003035c) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0003f06a) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0003f06a) list_setting_number_pane_t

0x092e,	// (0x00030305) set_value_pane_ParamLimits

0x092e,	// (0x00030305) set_value_pane

0x19f4,	// (0x000313cb) bg_set_opt_pane_ParamLimits

0x19f4,	// (0x000313cb) bg_set_opt_pane

0xd9a0,	// (0x0003d377) set_value_pane_t1

0x1a15,	// (0x000313ec) slider_set_pane_cp3

0x1a1e,	// (0x000313f5) volume_small_pane_cp

0x1a27,	// (0x000313fe) list_form_gen_pane

0x1975,	// (0x0003134c) scroll_pane_cp8

0x09c8,	// (0x0003039f) form_field_data_pane_ParamLimits

0x09c8,	// (0x0003039f) form_field_data_pane

0x09df,	// (0x000303b6) form_field_data_wide_pane_ParamLimits

0x09df,	// (0x000303b6) form_field_data_wide_pane

0x09ff,	// (0x000303d6) form_field_popup_pane_ParamLimits

0x09ff,	// (0x000303d6) form_field_popup_pane

0x0a17,	// (0x000303ee) form_field_popup_wide_pane_ParamLimits

0x0a17,	// (0x000303ee) form_field_popup_wide_pane

0xda2c,	// (0x0003d403) form_field_slider_pane_ParamLimits

0xda2c,	// (0x0003d403) form_field_slider_pane

0xda3f,	// (0x0003d416) form_field_slider_wide_pane_ParamLimits

0xda3f,	// (0x0003d416) form_field_slider_wide_pane

0x1a30,	// (0x00031407) data_form_pane

0x0a38,	// (0x0003040f) form_field_data_pane_t1

0x1a3c,	// (0x00031413) input_focus_pane

0x1a4a,	// (0x00031421) data_form_wide_pane

0xda7e,	// (0x0003d455) form_field_data_wide_pane_t1

0x17ec,	// (0x000311c3) input_focus_pane_cp6

0x0a50,	// (0x00030427) form_field_popup_pane_t1

0x1a3c,	// (0x00031413) input_focus_pane_cp7

0x1a30,	// (0x00031407) list_form_pane

0xdac0,	// (0x0003d497) form_field_popup_wide_pane_t1

0x1a3c,	// (0x00031413) input_focus_pane_cp8

0x1a76,	// (0x0003144d) list_form_wide_pane

0x0a70,	// (0x00030447) form_field_slider_pane_t1_ParamLimits

0x0a70,	// (0x00030447) form_field_slider_pane_t1

0x0a86,	// (0x0003045d) form_field_slider_pane_t2_ParamLimits

0x0a86,	// (0x0003045d) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0003f07a) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0003f07a) form_field_slider_pane_t

0x1119,	// (0x00030af0) input_focus_pane_cp9_ParamLimits

0x1119,	// (0x00030af0) input_focus_pane_cp9

0x0a9b,	// (0x00030472) slider_cont_pane_ParamLimits

0x0a9b,	// (0x00030472) slider_cont_pane

0x1a85,	// (0x0003145c) form_field_slider_wide_pane_t1_ParamLimits

0x1a85,	// (0x0003145c) form_field_slider_wide_pane_t1

0xdb1c,	// (0x0003d4f3) form_field_slider_wide_pane_t2_ParamLimits

0xdb1c,	// (0x0003d4f3) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0003f07f) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0003f07f) form_field_slider_wide_pane_t

0x1119,	// (0x00030af0) input_focus_pane_cp10_ParamLimits

0x1119,	// (0x00030af0) input_focus_pane_cp10

0x0aaf,	// (0x00030486) slider_cont_pane_cp1_ParamLimits

0x0aaf,	// (0x00030486) slider_cont_pane_cp1

0x0ac5,	// (0x0003049c) slider_form_pane_cp

0x1a97,	// (0x0003146e) input_focus_pane_g1

0x1a9f,	// (0x00031476) input_focus_pane_g2

0x1aa7,	// (0x0003147e) input_focus_pane_g3

0x1aaf,	// (0x00031486) input_focus_pane_g4

0x1ab7,	// (0x0003148e) input_focus_pane_g5

0x1abf,	// (0x00031496) input_focus_pane_g6

0x1ac7,	// (0x0003149e) input_focus_pane_g7

0x1acf,	// (0x000314a6) input_focus_pane_g8

0x1ad7,	// (0x000314ae) input_focus_pane_g9

0x0e0a,	// (0x000307e1) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0003f084) input_focus_pane_g

0x5bdc,	// (0x000355b3) wait_border_pane_g3_copy1

0x0acd,	// (0x000304a4) data_form_pane_t1

0x0e0a,	// (0x000307e1) wait_anim_pane_g1_copy1

0x0bdf,	// (0x000305b6) data_form_wide_pane_t1

0x0ae5,	// (0x000304bc) list_form_graphic_pane_cp_ParamLimits

0x0ae5,	// (0x000304bc) list_form_graphic_pane_cp

0x6980,	// (0x00036357) slider_form_pane_g1

0x6989,	// (0x00036360) slider_form_pane_g2

0x0006,

0xf999,	// (0x0003f370) slider_form_pane_g

0xdb66,	// (0x0003d53d) list_form_graphic_pane_ParamLimits

0xdb66,	// (0x0003d53d) list_form_graphic_pane

0xdb90,	// (0x0003d567) list_form_graphic_pane_g1

0xdb98,	// (0x0003d56f) list_form_graphic_pane_t1_ParamLimits

0xdb98,	// (0x0003d56f) list_form_graphic_pane_t1

0x1163,	// (0x00030b3a) list_highlight_pane_cp5_ParamLimits

0x1163,	// (0x00030b3a) list_highlight_pane_cp5

0x0af8,	// (0x000304cf) find_pane_g1

0x1adf,	// (0x000314b6) input_find_pane

0x0b03,	// (0x000304da) input_find_pane_g1_ParamLimits

0x0b03,	// (0x000304da) input_find_pane_g1

0x0b0f,	// (0x000304e6) input_find_pane_t1_ParamLimits

0x0b0f,	// (0x000304e6) input_find_pane_t1

0x0b24,	// (0x000304fb) input_find_pane_t2_ParamLimits

0x0b24,	// (0x000304fb) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0003f099) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0003f099) input_find_pane_t

0x1ae8,	// (0x000314bf) input_focus_pane_cp5_ParamLimits

0x1ae8,	// (0x000314bf) input_focus_pane_cp5

0x1119,	// (0x00030af0) bg_popup_window_pane_cp2_ParamLimits

0x1119,	// (0x00030af0) bg_popup_window_pane_cp2

0x1b02,	// (0x000314d9) listscroll_menu_pane_ParamLimits

0x1b02,	// (0x000314d9) listscroll_menu_pane

0x1b0e,	// (0x000314e5) popup_submenu_window_ParamLimits

0x1b0e,	// (0x000314e5) popup_submenu_window

0x1b32,	// (0x00031509) find_popup_pane_g1

0x1b3a,	// (0x00031511) input_popup_find_pane_cp

0x1ae8,	// (0x000314bf) input_focus_pane_cp4_ParamLimits

0x1ae8,	// (0x000314bf) input_focus_pane_cp4

0x1b50,	// (0x00031527) input_popup_find_pane_t1_ParamLimits

0x1b50,	// (0x00031527) input_popup_find_pane_t1

0x0f57,	// (0x0003092e) bg_popup_sub_pane_cp

0x1b7e,	// (0x00031555) listscroll_popup_sub_pane

0x1b86,	// (0x0003155d) list_submenu_pane_ParamLimits

0x1b86,	// (0x0003155d) list_submenu_pane

0x1b97,	// (0x0003156e) scroll_pane_cp4

0x1b9f,	// (0x00031576) list_single_popup_submenu_pane_ParamLimits

0x1b9f,	// (0x00031576) list_single_popup_submenu_pane

0x1bb3,	// (0x0003158a) list_single_popup_submenu_pane_g1

0x1bbb,	// (0x00031592) list_single_popup_submenu_pane_t1_ParamLimits

0x1bbb,	// (0x00031592) list_single_popup_submenu_pane_t1

0x1119,	// (0x00030af0) bg_active_tab_pane_cp1_ParamLimits

0x1119,	// (0x00030af0) bg_active_tab_pane_cp1

0x63af,	// (0x00035d86) tabs_2_active_pane_g1

0x1bd0,	// (0x000315a7) tabs_2_active_pane_t1

0x1119,	// (0x00030af0) bg_passive_tab_pane_cp1_ParamLimits

0x1119,	// (0x00030af0) bg_passive_tab_pane_cp1

0x63af,	// (0x00035d86) tabs_2_passive_pane_g1

0x1bd0,	// (0x000315a7) tabs_2_passive_pane_t1

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp4

0x1be6,	// (0x000315bd) tabs_2_long_active_pane_t1

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp4

0x9eb8,	// (0x0003988f) list_single_midp_graphic_pane_g4_ParamLimits

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp5

0x1bfd,	// (0x000315d4) tabs_3_long_active_pane_t1

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp5

0x9eb8,	// (0x0003988f) list_single_midp_graphic_pane_g4

0x1163,	// (0x00030b3a) bg_popup_window_pane_cp13_ParamLimits

0x1163,	// (0x00030b3a) bg_popup_window_pane_cp13

0x1c1c,	// (0x000315f3) listscroll_popup_fast_pane_ParamLimits

0x1c1c,	// (0x000315f3) listscroll_popup_fast_pane

0x1c2b,	// (0x00031602) grid_popup_fast_pane_ParamLimits

0x1c2b,	// (0x00031602) grid_popup_fast_pane

0x1c3d,	// (0x00031614) scroll_pane_cp9_ParamLimits

0x1c3d,	// (0x00031614) scroll_pane_cp9

0x7c5c,	// (0x00037633) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7c5c,	// (0x00037633) list_single_graphic_hl_pane_t1_cp2

0x1c61,	// (0x00031638) input_focus_pane_cp20_ParamLimits

0x1c61,	// (0x00031638) input_focus_pane_cp20

0x1c6f,	// (0x00031646) query_popup_data_pane_t1_ParamLimits

0x1c6f,	// (0x00031646) query_popup_data_pane_t1

0x1c82,	// (0x00031659) query_popup_data_pane_t2_ParamLimits

0x1c82,	// (0x00031659) query_popup_data_pane_t2

0x1cc8,	// (0x0003169f) query_popup_data_pane_t3_ParamLimits

0x1cc8,	// (0x0003169f) query_popup_data_pane_t3

0x1d09,	// (0x000316e0) query_popup_data_pane_t4_ParamLimits

0x1d09,	// (0x000316e0) query_popup_data_pane_t4

0x1d45,	// (0x0003171c) query_popup_data_pane_t5_ParamLimits

0x1d45,	// (0x0003171c) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0003f09e) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0003f09e) query_popup_data_pane_t

0x1a97,	// (0x0003146e) bg_set_opt_pane_g1

0x1a9f,	// (0x00031476) bg_set_opt_pane_g2

0x1aa7,	// (0x0003147e) bg_set_opt_pane_g3

0x1aaf,	// (0x00031486) bg_set_opt_pane_g4

0x1ab7,	// (0x0003148e) bg_set_opt_pane_g5

0x1abf,	// (0x00031496) bg_set_opt_pane_g6

0x1ac7,	// (0x0003149e) bg_set_opt_pane_g7

0x1acf,	// (0x000314a6) bg_set_opt_pane_g8

0x1ad7,	// (0x000314ae) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0003f0a9) bg_set_opt_pane_g

0x93b6,	// (0x00038d8d) control_top_pane_stacon_ParamLimits

0x93b6,	// (0x00038d8d) control_top_pane_stacon

0x9409,	// (0x00038de0) signal_pane_stacon_ParamLimits

0x9409,	// (0x00038de0) signal_pane_stacon

0x4e9e,	// (0x00034875) stacon_top_pane_g1_ParamLimits

0x4e9e,	// (0x00034875) stacon_top_pane_g1

0x942e,	// (0x00038e05) title_pane_stacon_ParamLimits

0x942e,	// (0x00038e05) title_pane_stacon

0x9450,	// (0x00038e27) uni_indicator_pane_stacon_ParamLimits

0x9450,	// (0x00038e27) uni_indicator_pane_stacon

0x9465,	// (0x00038e3c) battery_pane_stacon_ParamLimits

0x9465,	// (0x00038e3c) battery_pane_stacon

0x94a5,	// (0x00038e7c) control_bottom_pane_stacon_ParamLimits

0x94a5,	// (0x00038e7c) control_bottom_pane_stacon

0x94c4,	// (0x00038e9b) navi_pane_stacon_ParamLimits

0x94c4,	// (0x00038e9b) navi_pane_stacon

0x4ec0,	// (0x00034897) stacon_bottom_pane_g1_ParamLimits

0x4ec0,	// (0x00034897) stacon_bottom_pane_g1

0x4ad5,	// (0x000344ac) aid_levels_signal_lsc_ParamLimits

0x4ad5,	// (0x000344ac) aid_levels_signal_lsc

0x8ff7,	// (0x000389ce) signal_pane_stacon_g1_ParamLimits

0x8ff7,	// (0x000389ce) signal_pane_stacon_g1

0x9003,	// (0x000389da) signal_pane_stacon_g2_ParamLimits

0x9003,	// (0x000389da) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0003f0bc) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003f0bc) signal_pane_stacon_g

0x9037,	// (0x00038a0e) title_pane_stacon_t1_ParamLimits

0x9037,	// (0x00038a0e) title_pane_stacon_t1

0x4b03,	// (0x000344da) uni_indicator_pane_stacon_g1

0x4b0d,	// (0x000344e4) uni_indicator_pane_stacon_g2

0x4aef,	// (0x000344c6) uni_indicator_pane_stacon_g3

0x4af9,	// (0x000344d0) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0003f0c8) uni_indicator_pane_stacon_g

0x905c,	// (0x00038a33) control_top_pane_stacon_g1

0x9064,	// (0x00038a3b) control_top_pane_stacon_t1_ParamLimits

0x9064,	// (0x00038a3b) control_top_pane_stacon_t1

0x4b17,	// (0x000344ee) aid_levels_battery_lsc_ParamLimits

0x4b17,	// (0x000344ee) aid_levels_battery_lsc

0x9095,	// (0x00038a6c) battery_pane_stacon_g1_ParamLimits

0x9095,	// (0x00038a6c) battery_pane_stacon_g1

0x90a1,	// (0x00038a78) battery_pane_stacon_g2_ParamLimits

0x90a1,	// (0x00038a78) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0003f0d1) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0003f0d1) battery_pane_stacon_g

0x90d0,	// (0x00038aa7) navi_icon_pane_stacon

0x90e0,	// (0x00038ab7) navi_navi_pane_stacon

0x90d0,	// (0x00038aa7) navi_text_pane_stacon

0x905c,	// (0x00038a33) control_bottom_pane_stacon_g1

0x90f0,	// (0x00038ac7) control_bottom_pane_stacon_t1_ParamLimits

0x90f0,	// (0x00038ac7) control_bottom_pane_stacon_t1

0x1d7c,	// (0x00031753) grid_app_pane_ParamLimits

0x1d7c,	// (0x00031753) grid_app_pane

0x1daa,	// (0x00031781) scroll_pane_cp15_ParamLimits

0x1daa,	// (0x00031781) scroll_pane_cp15

0x1dc1,	// (0x00031798) cell_app_pane_ParamLimits

0x1dc1,	// (0x00031798) cell_app_pane

0x1e00,	// (0x000317d7) cell_app_pane_g1_ParamLimits

0x1e00,	// (0x000317d7) cell_app_pane_g1

0x4b3f,	// (0x00034516) cell_app_pane_g2_ParamLimits

0x4b3f,	// (0x00034516) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0003f0d6) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0003f0d6) cell_app_pane_g

0x4b4b,	// (0x00034522) cell_app_pane_t1_ParamLimits

0x4b4b,	// (0x00034522) cell_app_pane_t1

0x4b5d,	// (0x00034534) grid_highlight_pane_ParamLimits

0x4b5d,	// (0x00034534) grid_highlight_pane

0x1a97,	// (0x0003146e) cell_highlight_pane_g1

0x1a9f,	// (0x00031476) cell_highlight_pane_g2

0x1aa7,	// (0x0003147e) cell_highlight_pane_g3

0x1aaf,	// (0x00031486) cell_highlight_pane_g4

0x1ab7,	// (0x0003148e) cell_highlight_pane_g5

0x1abf,	// (0x00031496) cell_highlight_pane_g6

0x1ac7,	// (0x0003149e) cell_highlight_pane_g7

0x1acf,	// (0x000314a6) cell_highlight_pane_g8

0x1ad7,	// (0x000314ae) cell_highlight_pane_g9

0x0e0a,	// (0x000307e1) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0003f084) cell_highlight_pane_g

0x4b6e,	// (0x00034545) bg_scroll_pane

0x91a9,	// (0x00038b80) scroll_handle_pane

0x4bb5,	// (0x0003458c) scroll_bg_pane_g1

0x4bca,	// (0x000345a1) scroll_bg_pane_g2

0x4be2,	// (0x000345b9) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0003f0db) scroll_bg_pane_g

0x4bf7,	// (0x000345ce) scroll_handle_focus_pane_ParamLimits

0x4bf7,	// (0x000345ce) scroll_handle_focus_pane

0x4bb5,	// (0x0003458c) scroll_handle_pane_g1

0x4c04,	// (0x000345db) scroll_handle_pane_g2

0x4be2,	// (0x000345b9) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0003f0e2) scroll_handle_pane_g

0x1ae8,	// (0x000314bf) bg_popup_sub_pane_cp21_ParamLimits

0x1ae8,	// (0x000314bf) bg_popup_sub_pane_cp21

0x4c18,	// (0x000345ef) popup_fep_japan_predictive_window_t1_ParamLimits

0x4c18,	// (0x000345ef) popup_fep_japan_predictive_window_t1

0x4c2f,	// (0x00034606) popup_fep_japan_predictive_window_t2_ParamLimits

0x4c2f,	// (0x00034606) popup_fep_japan_predictive_window_t2

0x4c62,	// (0x00034639) popup_fep_japan_predictive_window_t3_ParamLimits

0x4c62,	// (0x00034639) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0003f0e9) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0003f0e9) popup_fep_japan_predictive_window_t

0x0f57,	// (0x0003092e) bg_popup_sub_pane_cp23

0x4c99,	// (0x00034670) listscroll_japin_cand_pane

0x4ca1,	// (0x00034678) popup_fep_japan_candidate_window_t1

0x4caf,	// (0x00034686) candidate_pane_ParamLimits

0x4caf,	// (0x00034686) candidate_pane

0x4cc2,	// (0x00034699) scroll_pane_cp30

0x4cca,	// (0x000346a1) list_single_popup_jap_candidate_pane_ParamLimits

0x4cca,	// (0x000346a1) list_single_popup_jap_candidate_pane

0x0f57,	// (0x0003092e) list_highlight_pane_cp30

0x4cdf,	// (0x000346b6) list_single_popup_jap_candidate_pane_t1

0x1e2d,	// (0x00031804) level_1_signal

0x1e3f,	// (0x00031816) level_2_signal

0x1e52,	// (0x00031829) level_3_signal

0x1e65,	// (0x0003183c) level_4_signal

0x1e78,	// (0x0003184f) level_5_signal

0x1e8b,	// (0x00031862) level_6_signal

0x1e9e,	// (0x00031875) level_7_signal

0x1e2d,	// (0x00031804) level_1_battery

0x1e3f,	// (0x00031816) level_2_battery

0x1e52,	// (0x00031829) level_3_battery

0x1e65,	// (0x0003183c) level_4_battery

0x1e78,	// (0x0003184f) level_5_battery

0x1e8b,	// (0x00031862) level_6_battery

0x1e9e,	// (0x00031875) level_7_battery

0x4d06,	// (0x000346dd) list_menu_pane_ParamLimits

0x4d06,	// (0x000346dd) list_menu_pane

0x4d17,	// (0x000346ee) scroll_pane_cp25_ParamLimits

0x4d17,	// (0x000346ee) scroll_pane_cp25

0x1eb1,	// (0x00031888) list_double2_graphic_pane_cp2_ParamLimits

0x1eb1,	// (0x00031888) list_double2_graphic_pane_cp2

0x1eb1,	// (0x00031888) list_double2_large_graphic_pane_cp2_ParamLimits

0x1eb1,	// (0x00031888) list_double2_large_graphic_pane_cp2

0x1eb1,	// (0x00031888) list_double2_pane_cp2_ParamLimits

0x1eb1,	// (0x00031888) list_double2_pane_cp2

0x1eb1,	// (0x00031888) list_double_graphic_pane_cp2_ParamLimits

0x1eb1,	// (0x00031888) list_double_graphic_pane_cp2

0x1eb1,	// (0x00031888) list_double_large_graphic_pane_cp2_ParamLimits

0x1eb1,	// (0x00031888) list_double_large_graphic_pane_cp2

0x1eb1,	// (0x00031888) list_double_number_pane_cp2_ParamLimits

0x1eb1,	// (0x00031888) list_double_number_pane_cp2

0x1eb1,	// (0x00031888) list_double_pane_cp2_ParamLimits

0x1eb1,	// (0x00031888) list_double_pane_cp2

0x1ecc,	// (0x000318a3) list_single_2graphic_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_2graphic_pane_cp2

0x1ecc,	// (0x000318a3) list_single_graphic_heading_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_graphic_heading_pane_cp2

0x1ecc,	// (0x000318a3) list_single_graphic_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_graphic_pane_cp2

0x1ecc,	// (0x000318a3) list_single_heading_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_heading_pane_cp2

0x1edd,	// (0x000318b4) list_single_large_graphic_pane_cp2_ParamLimits

0x1edd,	// (0x000318b4) list_single_large_graphic_pane_cp2

0x1ecc,	// (0x000318a3) list_single_number_heading_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_number_heading_pane_cp2

0x1ecc,	// (0x000318a3) list_single_number_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_number_pane_cp2

0x1ecc,	// (0x000318a3) list_single_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_pane_cp2

0x4d39,	// (0x00034710) bg_popup_sub_pane_cp22

0x9326,	// (0x00038cfd) popup_side_volume_key_window_g1

0x934a,	// (0x00038d21) popup_side_volume_key_window_t1

0x9366,	// (0x00038d3d) volume_small_pane_cp1

0x1119,	// (0x00030af0) bg_popup_sub_pane_cp24_ParamLimits

0x1119,	// (0x00030af0) bg_popup_sub_pane_cp24

0x4d4f,	// (0x00034726) fep_china_uni_candidate_pane_ParamLimits

0x4d4f,	// (0x00034726) fep_china_uni_candidate_pane

0x4d63,	// (0x0003473a) fep_china_uni_entry_pane

0x4d73,	// (0x0003474a) popup_fep_china_uni_window_g1

0x4d8f,	// (0x00034766) fep_china_uni_entry_pane_g1

0x4d97,	// (0x0003476e) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0003f116) fep_china_uni_entry_pane_g

0x4d9f,	// (0x00034776) fep_entry_item_pane

0x4da9,	// (0x00034780) fep_candidate_item_pane

0x4db1,	// (0x00034788) fep_china_uni_candidate_pane_g1

0x4db9,	// (0x00034790) fep_china_uni_candidate_pane_g2

0x4dc1,	// (0x00034798) fep_china_uni_candidate_pane_g3

0x4dc9,	// (0x000347a0) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0003f11b) fep_china_uni_candidate_pane_g

0x0e0a,	// (0x000307e1) fep_entry_item_pane_g1

0x4dd1,	// (0x000347a8) fep_entry_item_pane_t1_ParamLimits

0x4dd1,	// (0x000347a8) fep_entry_item_pane_t1

0x4de7,	// (0x000347be) fep_candidate_item_pane_t1_ParamLimits

0x4de7,	// (0x000347be) fep_candidate_item_pane_t1

0x4dfc,	// (0x000347d3) fep_candidate_item_pane_t2_ParamLimits

0x4dfc,	// (0x000347d3) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0003f124) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0003f124) fep_candidate_item_pane_t

0x1163,	// (0x00030b3a) list_highlight_pane_cp31_ParamLimits

0x1163,	// (0x00030b3a) list_highlight_pane_cp31

0x4e0e,	// (0x000347e5) level_1_signal_lsc

0x4e17,	// (0x000347ee) level_2_signal_lsc

0x4e20,	// (0x000347f7) level_3_signal_lsc

0x4e29,	// (0x00034800) level_4_signal_lsc

0x4e32,	// (0x00034809) level_5_signal_lsc

0x4e3b,	// (0x00034812) level_6_signal_lsc

0x4e44,	// (0x0003481b) level_7_signal_lsc

0x4e44,	// (0x0003481b) level_1_battery_lsc

0x4e4d,	// (0x00034824) level_2_battery_lsc

0x4e56,	// (0x0003482d) level_3_battery_lsc

0x4e5f,	// (0x00034836) level_4_battery_lsc

0x4e68,	// (0x0003483f) level_5_battery_lsc

0x4e71,	// (0x00034848) level_6_battery_lsc

0x4e0e,	// (0x000347e5) level_7_battery_lsc

0x4e7a,	// (0x00034851) scroll_handle_focus_pane_g1

0x4e83,	// (0x0003485a) scroll_handle_focus_pane_g2

0x4e8c,	// (0x00034863) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0003f129) scroll_handle_focus_pane_g

0x0b39,	// (0x00030510) list_single_2graphic_pane_g1_ParamLimits

0x0b39,	// (0x00030510) list_single_2graphic_pane_g1

0x1998,	// (0x0003136f) list_single_2graphic_pane_g2_ParamLimits

0x1998,	// (0x0003136f) list_single_2graphic_pane_g2

0xd5dc,	// (0x0003cfb3) list_single_2graphic_pane_g3_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_2graphic_pane_g3

0x0b45,	// (0x0003051c) list_single_2graphic_pane_g4_ParamLimits

0x0b45,	// (0x0003051c) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0003f130) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0003f130) list_single_2graphic_pane_g

0x0b56,	// (0x0003052d) list_single_2graphic_pane_t1_ParamLimits

0x0b56,	// (0x0003052d) list_single_2graphic_pane_t1

0x1f36,	// (0x0003190d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1f36,	// (0x0003190d) list_double2_graphic_large_graphic_pane_g1

0x080e,	// (0x000301e5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x080e,	// (0x000301e5) list_double2_graphic_large_graphic_pane_g2

0xd4bc,	// (0x0003ce93) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd4bc,	// (0x0003ce93) list_double2_graphic_large_graphic_pane_g3

0x0b84,	// (0x0003055b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0b84,	// (0x0003055b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0003f139) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0003f139) list_double2_graphic_large_graphic_pane_g

0x0b90,	// (0x00030567) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0b90,	// (0x00030567) list_double2_graphic_large_graphic_pane_t1

0x0ba6,	// (0x0003057d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0ba6,	// (0x0003057d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0003f142) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0003f142) list_double2_graphic_large_graphic_pane_t

0x4f67,	// (0x0003493e) popup_fast_swap_window_ParamLimits

0x4f67,	// (0x0003493e) popup_fast_swap_window

0x4f83,	// (0x0003495a) popup_side_volume_key_window

0x4f9d,	// (0x00034974) stacon_top_pane

0x4fa7,	// (0x0003497e) status_pane_ParamLimits

0x4fa7,	// (0x0003497e) status_pane

0x4f9d,	// (0x00034974) status_small_pane

0x0f57,	// (0x0003092e) control_pane

0x0f57,	// (0x0003092e) stacon_bottom_pane

0x1975,	// (0x0003134c) scroll_pane_cp121

0x1a27,	// (0x000313fe) set_content_pane

0x63c0,	// (0x00035d97) bg_active_tab_pane_g1_cp1

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp1

0x63b7,	// (0x00035d8e) bg_active_tab_pane_g3_cp1

0x63c0,	// (0x00035d97) bg_passive_tab_pane_g1_cp1

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp1

0x63b7,	// (0x00035d8e) bg_passive_tab_pane_g3_cp1

0x1f4f,	// (0x00031926) bg_active_tab_pane_g1_cp2

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp2

0x1f46,	// (0x0003191d) bg_active_tab_pane_g3_cp2

0x1f4f,	// (0x00031926) bg_passive_tab_pane_g1_cp2

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp2

0x1f46,	// (0x0003191d) bg_passive_tab_pane_g3_cp2

0x1f61,	// (0x00031938) bg_active_tab_pane_g1_cp3

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp3

0x1f58,	// (0x0003192f) bg_active_tab_pane_g3_cp3

0x1f61,	// (0x00031938) bg_passive_tab_pane_g1_cp3

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp3

0x1f58,	// (0x0003192f) bg_passive_tab_pane_g3_cp3

0x1f73,	// (0x0003194a) bg_active_tab_pane_g1_cp4

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp4

0x1f6a,	// (0x00031941) bg_active_tab_pane_g3_cp4

0x1f73,	// (0x0003194a) bg_passive_tab_pane_g1_cp4

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp4

0x1f6a,	// (0x00031941) bg_passive_tab_pane_g3_cp4

0x4ee5,	// (0x000348bc) bg_active_tab_pane_g1_cp5

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp5

0x4edc,	// (0x000348b3) bg_active_tab_pane_g3_cp5

0x4ee5,	// (0x000348bc) bg_passive_tab_pane_g1_cp5

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp5

0x4edc,	// (0x000348b3) bg_passive_tab_pane_g3_cp5

0x1f7c,	// (0x00031953) list_set_graphic_pane_ParamLimits

0x1f7c,	// (0x00031953) list_set_graphic_pane

0x0f57,	// (0x0003092e) bg_set_opt_pane_cp4

0x4eee,	// (0x000348c5) list_set_graphic_pane_g1_ParamLimits

0x4eee,	// (0x000348c5) list_set_graphic_pane_g1

0x4efa,	// (0x000348d1) list_set_graphic_pane_g2_ParamLimits

0x4efa,	// (0x000348d1) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0003f147) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0003f147) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0003f4ac) volume_small_pane_cp_g

0x4f1c,	// (0x000348f3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4f1c,	// (0x000348f3) list_double2_large_graphic_pane_g1_cp2

0x4f28,	// (0x000348ff) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4f28,	// (0x000348ff) list_double2_large_graphic_pane_g2_cp2

0x4f37,	// (0x0003490e) list_double2_large_graphic_pane_g3_cp2

0x4f3f,	// (0x00034916) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4f3f,	// (0x00034916) list_double2_large_graphic_pane_t1_cp2

0x4f55,	// (0x0003492c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4f55,	// (0x0003492c) list_double2_large_graphic_pane_t2_cp2

0x6730,	// (0x00036107) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6730,	// (0x00036107) list_double_large_graphic_pane_g1_cp2

0x6741,	// (0x00036118) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6741,	// (0x00036118) list_double_large_graphic_pane_g2_cp2

0x5082,	// (0x00034a59) list_double_large_graphic_pane_g3_cp2

0x6750,	// (0x00036127) list_double_large_graphic_pane_g4_cp

0x6758,	// (0x0003612f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6758,	// (0x0003612f) list_double_large_graphic_pane_t1_cp2

0x676f,	// (0x00036146) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x676f,	// (0x00036146) list_double_large_graphic_pane_t2_cp2

0x4fb5,	// (0x0003498c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4fb5,	// (0x0003498c) list_double2_graphic_pane_g1_cp2

0x4fc1,	// (0x00034998) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4fc1,	// (0x00034998) list_double2_graphic_pane_g2_cp2

0x4fd0,	// (0x000349a7) list_double2_graphic_pane_g3_cp2

0x4fd8,	// (0x000349af) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4fd8,	// (0x000349af) list_double2_graphic_pane_t1_cp2

0x4fee,	// (0x000349c5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4fee,	// (0x000349c5) list_double2_graphic_pane_t2_cp2

0x5000,	// (0x000349d7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5000,	// (0x000349d7) list_single_number_heading_pane_g1_cp2

0x500c,	// (0x000349e3) list_single_number_heading_pane_g2_cp2

0x5014,	// (0x000349eb) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5014,	// (0x000349eb) list_single_number_heading_pane_t1_cp2

0x502a,	// (0x00034a01) list_single_number_heading_pane_t2_cp2_ParamLimits

0x502a,	// (0x00034a01) list_single_number_heading_pane_t2_cp2

0x503c,	// (0x00034a13) list_single_number_heading_pane_t3_cp2_ParamLimits

0x503c,	// (0x00034a13) list_single_number_heading_pane_t3_cp2

0x5000,	// (0x000349d7) list_single_heading_pane_g1_cp2_ParamLimits

0x5000,	// (0x000349d7) list_single_heading_pane_g1_cp2

0x500c,	// (0x000349e3) list_single_heading_pane_g2_cp2

0x5014,	// (0x000349eb) list_single_heading_pane_t1_cp2_ParamLimits

0x5014,	// (0x000349eb) list_single_heading_pane_t1_cp2

0x653a,	// (0x00035f11) list_single_heading_pane_t2_cp2_ParamLimits

0x653a,	// (0x00035f11) list_single_heading_pane_t2_cp2

0x64bf,	// (0x00035e96) list_double_graphic_pane_g1_cp2_ParamLimits

0x64bf,	// (0x00035e96) list_double_graphic_pane_g1_cp2

0x64cb,	// (0x00035ea2) list_double_graphic_pane_g2_cp2_ParamLimits

0x64cb,	// (0x00035ea2) list_double_graphic_pane_g2_cp2

0x64da,	// (0x00035eb1) list_double_graphic_pane_g3_cp2

0x64e2,	// (0x00035eb9) list_double_graphic_pane_t1_cp2_ParamLimits

0x64e2,	// (0x00035eb9) list_double_graphic_pane_t1_cp2

0x64f8,	// (0x00035ecf) list_double_graphic_pane_t2_cp2_ParamLimits

0x64f8,	// (0x00035ecf) list_double_graphic_pane_t2_cp2

0x5076,	// (0x00034a4d) list_double_number_pane_g1_cp2_ParamLimits

0x5076,	// (0x00034a4d) list_double_number_pane_g1_cp2

0x5082,	// (0x00034a59) list_double_number_pane_g2_cp2

0x6485,	// (0x00035e5c) list_double_number_pane_t1_cp2_ParamLimits

0x6485,	// (0x00035e5c) list_double_number_pane_t1_cp2

0x6497,	// (0x00035e6e) list_double_number_pane_t2_cp2_ParamLimits

0x6497,	// (0x00035e6e) list_double_number_pane_t2_cp2

0x64ad,	// (0x00035e84) list_double_number_pane_t3_cp2_ParamLimits

0x64ad,	// (0x00035e84) list_double_number_pane_t3_cp2

0x63fd,	// (0x00035dd4) list_single_graphic_pane_g1_cp2_ParamLimits

0x63fd,	// (0x00035dd4) list_single_graphic_pane_g1_cp2

0x5000,	// (0x000349d7) list_single_graphic_pane_g2_cp2_ParamLimits

0x5000,	// (0x000349d7) list_single_graphic_pane_g2_cp2

0x500c,	// (0x000349e3) list_single_graphic_pane_g3_cp2

0x63d5,	// (0x00035dac) list_single_graphic_pane_t1_cp2_ParamLimits

0x63d5,	// (0x00035dac) list_single_graphic_pane_t1_cp2

0x5000,	// (0x000349d7) list_single_number_pane_g1_cp2_ParamLimits

0x5000,	// (0x000349d7) list_single_number_pane_g1_cp2

0x500c,	// (0x000349e3) list_single_number_pane_g2_cp2

0x63d5,	// (0x00035dac) list_single_number_pane_t1_cp2_ParamLimits

0x63d5,	// (0x00035dac) list_single_number_pane_t1_cp2

0x63eb,	// (0x00035dc2) list_single_number_pane_t2_cp2_ParamLimits

0x63eb,	// (0x00035dc2) list_single_number_pane_t2_cp2

0x4f28,	// (0x000348ff) list_double2_pane_g1_cp2_ParamLimits

0x4f28,	// (0x000348ff) list_double2_pane_g1_cp2

0x4f37,	// (0x0003490e) list_double2_pane_g2_cp2

0x504e,	// (0x00034a25) list_double2_pane_t1_cp2_ParamLimits

0x504e,	// (0x00034a25) list_double2_pane_t1_cp2

0x5064,	// (0x00034a3b) list_double2_pane_t2_cp2_ParamLimits

0x5064,	// (0x00034a3b) list_double2_pane_t2_cp2

0x5076,	// (0x00034a4d) list_double_pane_g1_cp2_ParamLimits

0x5076,	// (0x00034a4d) list_double_pane_g1_cp2

0x5082,	// (0x00034a59) list_double_pane_g2_cp2

0x508a,	// (0x00034a61) list_double_pane_t1_cp2_ParamLimits

0x508a,	// (0x00034a61) list_double_pane_t1_cp2

0x50a0,	// (0x00034a77) list_double_pane_t2_cp2_ParamLimits

0x50a0,	// (0x00034a77) list_double_pane_t2_cp2

0x50c8,	// (0x00034a9f) list_single_pane_cp2_g3

0x5000,	// (0x000349d7) list_single_pane_g1_cp2_ParamLimits

0x5000,	// (0x000349d7) list_single_pane_g1_cp2

0x500c,	// (0x000349e3) list_single_pane_g2_cp2

0x50d8,	// (0x00034aaf) list_single_pane_t1_cp2_ParamLimits

0x50d8,	// (0x00034aaf) list_single_pane_t1_cp2

0x50f0,	// (0x00034ac7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x50f0,	// (0x00034ac7) list_single_large_graphic_pane_g1_cp2

0x50fc,	// (0x00034ad3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x50fc,	// (0x00034ad3) list_single_large_graphic_pane_g2_cp2

0x5108,	// (0x00034adf) list_single_large_graphic_pane_g3_cp2

0x5110,	// (0x00034ae7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5110,	// (0x00034ae7) list_single_large_graphic_pane_g4_cp1

0x512a,	// (0x00034b01) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x512a,	// (0x00034b01) list_single_large_graphic_pane_t1_cp2

0x61d2,	// (0x00035ba9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x61d2,	// (0x00035ba9) list_single_graphic_heading_pane_g1_cp2

0x61ad,	// (0x00035b84) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61ad,	// (0x00035b84) list_single_graphic_heading_pane_g4_cp2

0x500c,	// (0x000349e3) list_single_graphic_heading_pane_g5_cp2

0x5014,	// (0x000349eb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5014,	// (0x000349eb) list_single_graphic_heading_pane_t1_cp2

0x61de,	// (0x00035bb5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x61de,	// (0x00035bb5) list_single_graphic_heading_pane_t2_cp2

0x61a1,	// (0x00035b78) list_single_2graphic_pane_g1_cp2_ParamLimits

0x61a1,	// (0x00035b78) list_single_2graphic_pane_g1_cp2

0x61ad,	// (0x00035b84) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61ad,	// (0x00035b84) list_single_2graphic_pane_g2_cp2

0x500c,	// (0x000349e3) list_single_2graphic_pane_g3_cp2

0x56e1,	// (0x000350b8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x56e1,	// (0x000350b8) list_single_2graphic_pane_g4_cp2

0x61bc,	// (0x00035b93) list_single_2graphic_pane_t1_cp2_ParamLimits

0x61bc,	// (0x00035b93) list_single_2graphic_pane_t1_cp2

0x0e0a,	// (0x000307e1) list_highlight_pane_g10_cp1

0x5db3,	// (0x0003578a) list_highlight_pane_g1_cp1

0x5dbb,	// (0x00035792) list_highlight_pane_g2_cp1

0x5dc3,	// (0x0003579a) list_highlight_pane_g3_cp1

0x5dcb,	// (0x000357a2) list_highlight_pane_g4_cp1

0x5dd3,	// (0x000357aa) list_highlight_pane_g5_cp1

0x5ddb,	// (0x000357b2) list_highlight_pane_g6_cp1

0x5de3,	// (0x000357ba) list_highlight_pane_g7_cp1

0x5deb,	// (0x000357c2) list_highlight_pane_g8_cp1

0x5df3,	// (0x000357ca) list_highlight_pane_g9_cp1

0x2c2e,	// (0x00032605) form_field_slider_pane_t3

0x2c3c,	// (0x00032613) form_field_slider_pane_t4

0x5cfd,	// (0x000356d4) slider_form_pane_ParamLimits

0x5cfd,	// (0x000356d4) slider_form_pane

0x0f57,	// (0x0003092e) control_abbreviations

0x0f57,	// (0x0003092e) control_conventions

0x0f57,	// (0x0003092e) control_definitions

0x0f57,	// (0x0003092e) format_table_attribute

0x6584,	// (0x00035f5b) bg_popup_preview_window_pane_g9

0x0f57,	// (0x0003092e) format_table_data2

0x0f57,	// (0x0003092e) format_table_data3

0x0f57,	// (0x0003092e) format_table_data_example

0x0008,

0x0f57,	// (0x0003092e) intro_purpose

0xf8f9,	// (0x0003f2d0) bg_popup_preview_window_pane_g

0x0f57,	// (0x0003092e) texts_category

0x0f57,	// (0x0003092e) texts_graphics

0x5140,	// (0x00034b17) text_digital

0x514f,	// (0x00034b26) text_primary

0x515e,	// (0x00034b35) text_primary_small

0x516d,	// (0x00034b44) text_secondary

0x517c,	// (0x00034b53) text_title

0x6a1a,	// (0x000363f1) bg_passive_tab_pane_g1_cp3_srt

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp3_srt

0x6a11,	// (0x000363e8) bg_passive_tab_pane_g3_cp3_srt

0x1119,	// (0x00030af0) bg_active_tab_pane_cp3_srt_ParamLimits

0x1119,	// (0x00030af0) bg_active_tab_pane_cp3_srt

0x63a7,	// (0x00035d7e) tabs_4_active_pane_srt_g1

0x1145,	// (0x00030b1c) tabs_4_active_pane_srt_t1_ParamLimits

0x1145,	// (0x00030b1c) tabs_4_active_pane_srt_t1

0x6a1a,	// (0x000363f1) bg_active_tab_pane_g1_cp3_copy1

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp3_copy1

0x6a11,	// (0x000363e8) bg_active_tab_pane_g3_cp3_copy1

0x1163,	// (0x00030b3a) tabs_2_long_active_pane_srt_ParamLimits

0x1163,	// (0x00030b3a) tabs_2_long_active_pane_srt

0x1163,	// (0x00030b3a) tabs_2_long_passive_pane_srt_ParamLimits

0x1163,	// (0x00030b3a) tabs_2_long_passive_pane_srt

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp4_srt

0x6950,	// (0x00036327) bg_passive_tab_pane_g1_cp4_srt

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp4_srt

0x6947,	// (0x0003631e) bg_passive_tab_pane_g3_cp4_srt

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp4_srt_ParamLimits

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp4_srt

0x1be6,	// (0x000315bd) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1be6,	// (0x000315bd) tabs_2_long_active_pane_srt_t1

0x6950,	// (0x00036327) bg_active_tab_pane_g1_cp4_srt

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp4_srt

0x6947,	// (0x0003631e) bg_active_tab_pane_g3_cp4_srt

0x1119,	// (0x00030af0) tabs_3_long_active_pane_srt_ParamLimits

0x1119,	// (0x00030af0) tabs_3_long_active_pane_srt

0x1119,	// (0x00030af0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1119,	// (0x00030af0) tabs_3_long_passive_pane_cp_srt

0x1119,	// (0x00030af0) tabs_3_long_passive_pane_srt_ParamLimits

0x1119,	// (0x00030af0) tabs_3_long_passive_pane_srt

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp5_srt

0x4ee5,	// (0x000348bc) bg_passive_tab_pane_g1_cp5_srt

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp5_srt

0x4edc,	// (0x000348b3) bg_passive_tab_pane_g3_cp5_srt

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp5_srt_ParamLimits

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp5_srt

0x1bfd,	// (0x000315d4) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1bfd,	// (0x000315d4) tabs_3_long_active_pane_srt_t1

0x4ee5,	// (0x000348bc) bg_active_tab_pane_g1_cp5_srt

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp5_srt

0x4edc,	// (0x000348b3) bg_active_tab_pane_g3_cp5_srt

0x6939,	// (0x00036310) navi_text_pane_srt_t1

0x6931,	// (0x00036308) navi_icon_pane_srt_g1

0x5294,	// (0x00034c6b) midp_editing_number_pane_srt

0x518b,	// (0x00034b62) midp_ticker_pane_srt

0x529c,	// (0x00034c73) midp_ticker_pane_srt_g1

0x52a4,	// (0x00034c7b) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0003f166) midp_ticker_pane_srt_g

0x52ac,	// (0x00034c83) midp_ticker_pane_srt_t1

0x6922,	// (0x000362f9) midp_editing_number_pane_t1_copy1

0x1f90,	// (0x00031967) listscroll_midp_pane

0x1f90,	// (0x00031967) midp_form_pane

0x5193,	// (0x00034b6a) midp_info_popup_window_ParamLimits

0x5193,	// (0x00034b6a) midp_info_popup_window

0x1ae8,	// (0x000314bf) bg_popup_sub_pane_cp50_ParamLimits

0x1ae8,	// (0x000314bf) bg_popup_sub_pane_cp50

0x5a26,	// (0x000353fd) listscroll_midp_info_pane_ParamLimits

0x5a26,	// (0x000353fd) listscroll_midp_info_pane

0x5a0e,	// (0x000353e5) listscroll_form_midp_pane_ParamLimits

0x5a0e,	// (0x000353e5) listscroll_form_midp_pane

0x5a1a,	// (0x000353f1) scroll_bar_cp050

0x2c22,	// (0x000325f9) list_midp_pane

0x7226,	// (0x00036bfd) signal_pane_g2_cp

0x5940,	// (0x00035317) listscroll_midp_info_pane_t1_ParamLimits

0x5940,	// (0x00035317) listscroll_midp_info_pane_t1

0x5958,	// (0x0003532f) listscroll_midp_info_pane_t2_ParamLimits

0x5958,	// (0x0003532f) listscroll_midp_info_pane_t2

0x5996,	// (0x0003536d) listscroll_midp_info_pane_t3_ParamLimits

0x5996,	// (0x0003536d) listscroll_midp_info_pane_t3

0x59d0,	// (0x000353a7) listscroll_midp_info_pane_t4_ParamLimits

0x59d0,	// (0x000353a7) listscroll_midp_info_pane_t4

0x0003,

0xf834,	// (0x0003f20b) listscroll_midp_info_pane_t_ParamLimits

0xf834,	// (0x0003f20b) listscroll_midp_info_pane_t

0x1b97,	// (0x0003156e) scroll_pane_cp21

0x58e4,	// (0x000352bb) form_midp_field_choice_group_pane

0x58ed,	// (0x000352c4) form_midp_field_text_pane

0x5926,	// (0x000352fd) form_midp_field_time_pane

0x592e,	// (0x00035305) form_midp_gauge_slider_pane

0x5937,	// (0x0003530e) form_midp_gauge_wait_pane

0x0f57,	// (0x0003092e) form_midp_image_pane

0x0bb8,	// (0x0003058f) list_single_midp_pane_ParamLimits

0x0bb8,	// (0x0003058f) list_single_midp_pane

0x2c01,	// (0x000325d8) form_midp_field_text_pane_t1

0x5793,	// (0x0003516a) input_focus_pane_cp050

0x58d3,	// (0x000352aa) list_midp_form_text_pane

0x58a2,	// (0x00035279) form_midp_field_choice_group_pane_t1

0x58b0,	// (0x00035287) input_focus_pane_cp051

0x58c4,	// (0x0003529b) list_midp_choice_pane

0x0f57,	// (0x0003092e) status_idle_pane

0x5886,	// (0x0003525d) form_midp_field_time_pane_t1

0x0e0a,	// (0x000307e1) wait_anim_pane_g2_copy1

0x5894,	// (0x0003526b) form_midp_field_time_pane_t2

0x0001,

0x51fe,	// (0x00034bd5) aid_navinavi_width_2_pane

0xf82f,	// (0x0003f206) form_midp_field_time_pane_t

0x0f57,	// (0x0003092e) input_focus_pane_cp052

0x0f57,	// (0x0003092e) bg_input_focus_pane_cp040

0x5862,	// (0x00035239) form_midp_gauge_slider_pane_t1

0x5870,	// (0x00035247) form_midp_gauge_slider_pane_t2

0x2be5,	// (0x000325bc) form_midp_gauge_slider_pane_t3

0x2bf3,	// (0x000325ca) form_midp_gauge_slider_pane_t4

0x0003,

0xf826,	// (0x0003f1fd) form_midp_gauge_slider_pane_t

0x587e,	// (0x00035255) form_midp_slider_pane

0x1163,	// (0x00030b3a) bg_input_focus_pane_cp041_ParamLimits

0x1163,	// (0x00030b3a) bg_input_focus_pane_cp041

0x5832,	// (0x00035209) form_midp_gauge_wait_pane_t1_ParamLimits

0x5832,	// (0x00035209) form_midp_gauge_wait_pane_t1

0x5844,	// (0x0003521b) form_midp_gauge_wait_pane_t2_ParamLimits

0x5844,	// (0x0003521b) form_midp_gauge_wait_pane_t2

0x0001,

0xf821,	// (0x0003f1f8) form_midp_gauge_wait_pane_t_ParamLimits

0xf821,	// (0x0003f1f8) form_midp_gauge_wait_pane_t

0x5856,	// (0x0003522d) form_midp_wait_pane_ParamLimits

0x5856,	// (0x0003522d) form_midp_wait_pane

0x57fc,	// (0x000351d3) form_midp_image_pane_g1

0x5805,	// (0x000351dc) form_midp_image_pane_t1

0x5814,	// (0x000351eb) form_midp_image_pane_t2

0x5823,	// (0x000351fa) form_midp_image_pane_t3

0x0002,

0xf81a,	// (0x0003f1f1) form_midp_image_pane_t

0x57f3,	// (0x000351ca) list_single_midp_pane_g1

0xdcbb,	// (0x0003d692) list_single_midp_pane_t1

0x2bd1,	// (0x000325a8) list_midp_form_item_pane_ParamLimits

0x2bd1,	// (0x000325a8) list_midp_form_item_pane

0x51a6,	// (0x00034b7d) list_midp_form_item_pane_t1

0x51b5,	// (0x00034b8c) midp_ticker_pane_g1

0x51c1,	// (0x00034b98) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0003f14c) midp_ticker_pane_g

0x51cd,	// (0x00034ba4) midp_ticker_pane_t1

0x6922,	// (0x000362f9) midp_editing_number_pane_t1

0x69aa,	// (0x00036381) midp_editing_number_pane

0x69b6,	// (0x0003638d) midp_ticker_pane

0x6912,	// (0x000362e9) ai_message_heading_pane

0x0f57,	// (0x0003092e) bg_popup_window_pane_cp14

0x691a,	// (0x000362f1) listscroll_ai_message_pane

0x689c,	// (0x00036273) ai_message_heading_pane_g1_ParamLimits

0x689c,	// (0x00036273) ai_message_heading_pane_g1

0x68a8,	// (0x0003627f) ai_message_heading_pane_g2_ParamLimits

0x68a8,	// (0x0003627f) ai_message_heading_pane_g2

0x68b4,	// (0x0003628b) ai_message_heading_pane_g3_ParamLimits

0x68b4,	// (0x0003628b) ai_message_heading_pane_g3

0x68c0,	// (0x00036297) ai_message_heading_pane_g4_ParamLimits

0x68c0,	// (0x00036297) ai_message_heading_pane_g4

0x0003,

0xf95b,	// (0x0003f332) ai_message_heading_pane_g_ParamLimits

0xf95b,	// (0x0003f332) ai_message_heading_pane_g

0x68cc,	// (0x000362a3) ai_message_heading_pane_t1_ParamLimits

0x68cc,	// (0x000362a3) ai_message_heading_pane_t1

0x68e6,	// (0x000362bd) ai_message_heading_pane_t2_ParamLimits

0x68e6,	// (0x000362bd) ai_message_heading_pane_t2

0x0001,

0xf964,	// (0x0003f33b) ai_message_heading_pane_t_ParamLimits

0xf964,	// (0x0003f33b) ai_message_heading_pane_t

0x68f8,	// (0x000362cf) bg_popup_heading_pane_cp1_ParamLimits

0x68f8,	// (0x000362cf) bg_popup_heading_pane_cp1

0x688a,	// (0x00036261) list_ai_message_pane_ParamLimits

0x688a,	// (0x00036261) list_ai_message_pane

0x1b97,	// (0x0003156e) scroll_pane_cp10

0x6826,	// (0x000361fd) list_ai_message_pane_g1

0x682e,	// (0x00036205) list_ai_message_pane_g2

0x0001,

0xf938,	// (0x0003f30f) list_ai_message_pane_g

0x6836,	// (0x0003620d) list_ai_message_pane_t1_ParamLimits

0x6836,	// (0x0003620d) list_ai_message_pane_t1

0x684b,	// (0x00036222) list_ai_message_pane_t2_ParamLimits

0x684b,	// (0x00036222) list_ai_message_pane_t2

0x6860,	// (0x00036237) list_ai_message_pane_t3_ParamLimits

0x6860,	// (0x00036237) list_ai_message_pane_t3

0x6875,	// (0x0003624c) list_ai_message_pane_t4_ParamLimits

0x6875,	// (0x0003624c) list_ai_message_pane_t4

0x0003,

0xf93d,	// (0x0003f314) list_ai_message_pane_t_ParamLimits

0xf93d,	// (0x0003f314) list_ai_message_pane_t

0x6814,	// (0x000361eb) cell_ai_soft_ind_pane_ParamLimits

0x6814,	// (0x000361eb) cell_ai_soft_ind_pane

0x51df,	// (0x00034bb6) cell_ai_soft_ind_pane_g1_ParamLimits

0x51df,	// (0x00034bb6) cell_ai_soft_ind_pane_g1

0x0f57,	// (0x0003092e) grid_highlight_cp1

0x51ec,	// (0x00034bc3) text_secondary_cp56_ParamLimits

0x51ec,	// (0x00034bc3) text_secondary_cp56

0x67e9,	// (0x000361c0) example_general_pane_ParamLimits

0x67e9,	// (0x000361c0) example_general_pane

0x67f5,	// (0x000361cc) example_parent_pane_g1_ParamLimits

0x67f5,	// (0x000361cc) example_parent_pane_g1

0x6801,	// (0x000361d8) example_parent_pane_t1_ParamLimits

0x6801,	// (0x000361d8) example_parent_pane_t1

0x24c5,	// (0x00031e9c) popup_preview_text_window_ParamLimits

0x24c5,	// (0x00031e9c) popup_preview_text_window

0x50d0,	// (0x00034aa7) list_single_pane_cp2_g4

0x1560,	// (0x00030f37) bg_popup_preview_window_pane_ParamLimits

0x1560,	// (0x00030f37) bg_popup_preview_window_pane

0x658c,	// (0x00035f63) popup_preview_text_window_t1_ParamLimits

0x658c,	// (0x00035f63) popup_preview_text_window_t1

0x65aa,	// (0x00035f81) popup_preview_text_window_t2_ParamLimits

0x65aa,	// (0x00035f81) popup_preview_text_window_t2

0x65f3,	// (0x00035fca) popup_preview_text_window_t3_ParamLimits

0x65f3,	// (0x00035fca) popup_preview_text_window_t3

0x6638,	// (0x0003600f) popup_preview_text_window_t4_ParamLimits

0x6638,	// (0x0003600f) popup_preview_text_window_t4

0x0004,

0xf90c,	// (0x0003f2e3) popup_preview_text_window_t_ParamLimits

0xf90c,	// (0x0003f2e3) popup_preview_text_window_t

0x66b6,	// (0x0003608d) scroll_pane_cp11

0x5699,	// (0x00035070) bg_popup_preview_window_pane_g1

0x654c,	// (0x00035f23) bg_popup_preview_window_pane_g2

0x6554,	// (0x00035f2b) bg_popup_preview_window_pane_g3

0x655c,	// (0x00035f33) bg_popup_preview_window_pane_g4

0x6564,	// (0x00035f3b) bg_popup_preview_window_pane_g5

0x656c,	// (0x00035f43) bg_popup_preview_window_pane_g6

0x6574,	// (0x00035f4b) bg_popup_preview_window_pane_g7

0x657c,	// (0x00035f53) bg_popup_preview_window_pane_g8

0x8982,	// (0x00038359) aid_popup_width_pane

0x2447,	// (0x00031e1e) popup_midp_note_alarm_window_ParamLimits

0x2447,	// (0x00031e1e) popup_midp_note_alarm_window

0x1a30,	// (0x00031407) data_form_pane_ParamLimits

0x0a2e,	// (0x00030405) form_field_data_pane_g1

0x0a38,	// (0x0003040f) form_field_data_pane_t1_ParamLimits

0x1a3c,	// (0x00031413) input_focus_pane_ParamLimits

0x1a4a,	// (0x00031421) data_form_wide_pane_ParamLimits

0xda72,	// (0x0003d449) form_field_data_wide_pane_g1

0xda7e,	// (0x0003d455) form_field_data_wide_pane_t1_ParamLimits

0x17ec,	// (0x000311c3) input_focus_pane_cp6_ParamLimits

0x1b44,	// (0x0003151b) input_popup_find_pane_g1_ParamLimits

0x1b44,	// (0x0003151b) input_popup_find_pane_g1

0x90b1,	// (0x00038a88) aid_navi_side_left_pane

0x90c1,	// (0x00038a98) aid_navi_side_right_pane

0x5e84,	// (0x0003585b) bg_popup_window_pane_cp30_ParamLimits

0x5e84,	// (0x0003585b) bg_popup_window_pane_cp30

0x5efe,	// (0x000358d5) popup_midp_note_alarm_window_g1_ParamLimits

0x5efe,	// (0x000358d5) popup_midp_note_alarm_window_g1

0x5f2e,	// (0x00035905) popup_midp_note_alarm_window_t1_ParamLimits

0x5f2e,	// (0x00035905) popup_midp_note_alarm_window_t1

0x5fcf,	// (0x000359a6) popup_midp_note_alarm_window_t2_ParamLimits

0x5fcf,	// (0x000359a6) popup_midp_note_alarm_window_t2

0x607d,	// (0x00035a54) popup_midp_note_alarm_window_t3_ParamLimits

0x607d,	// (0x00035a54) popup_midp_note_alarm_window_t3

0x60a5,	// (0x00035a7c) popup_midp_note_alarm_window_t4_ParamLimits

0x60a5,	// (0x00035a7c) popup_midp_note_alarm_window_t4

0x60c5,	// (0x00035a9c) popup_midp_note_alarm_window_t5_ParamLimits

0x60c5,	// (0x00035a9c) popup_midp_note_alarm_window_t5

0x000a,

0xf8a9,	// (0x0003f280) popup_midp_note_alarm_window_t_ParamLimits

0xf8a9,	// (0x0003f280) popup_midp_note_alarm_window_t

0x6171,	// (0x00035b48) wait_bar_pane_cp1_ParamLimits

0x6171,	// (0x00035b48) wait_bar_pane_cp1

0x0f57,	// (0x0003092e) wait_anim_pane_copy1

0x0f57,	// (0x0003092e) wait_border_pane_copy1

0x5bca,	// (0x000355a1) wait_border_pane_g1_copy1

0xda98,	// (0x0003d46f) form_field_popup_pane_g1

0x0a50,	// (0x00030427) form_field_popup_pane_t1_ParamLimits

0x1a3c,	// (0x00031413) input_focus_pane_cp7_ParamLimits

0x1a30,	// (0x00031407) list_form_pane_ParamLimits

0xdab8,	// (0x0003d48f) form_field_popup_wide_pane_g1

0xdac0,	// (0x0003d497) form_field_popup_wide_pane_t1_ParamLimits

0x1a3c,	// (0x00031413) input_focus_pane_cp8_ParamLimits

0x1a76,	// (0x0003144d) list_form_wide_pane_ParamLimits

0x6a42,	// (0x00036419) aid_size_cell_graphic_pane

0x0acd,	// (0x000304a4) data_form_pane_t1_ParamLimits

0x0bdf,	// (0x000305b6) data_form_wide_pane_t1_ParamLimits

0x2823,	// (0x000321fa) bg_status_flat_pane

0x1054,	// (0x00030a2b) title_pane_t1_ParamLimits

0x10e1,	// (0x00030ab8) title_pane_t2_ParamLimits

0x1107,	// (0x00030ade) title_pane_t3_ParamLimits

0xf573,	// (0x0003ef4a) title_pane_t_ParamLimits

0x1e2d,	// (0x00031804) level_1_signal_ParamLimits

0x1e3f,	// (0x00031816) level_2_signal_ParamLimits

0x1e52,	// (0x00031829) level_3_signal_ParamLimits

0x1e65,	// (0x0003183c) level_4_signal_ParamLimits

0x1e78,	// (0x0003184f) level_5_signal_ParamLimits

0x1e8b,	// (0x00031862) level_6_signal_ParamLimits

0x1e9e,	// (0x00031875) level_7_signal_ParamLimits

0x1e2d,	// (0x00031804) level_1_battery_ParamLimits

0x1e3f,	// (0x00031816) level_2_battery_ParamLimits

0x1e52,	// (0x00031829) level_3_battery_ParamLimits

0x1e65,	// (0x0003183c) level_4_battery_ParamLimits

0x1e78,	// (0x0003184f) level_5_battery_ParamLimits

0x1e8b,	// (0x00031862) level_6_battery_ParamLimits

0x1e9e,	// (0x00031875) level_7_battery_ParamLimits

0x5db3,	// (0x0003578a) bg_status_flat_pane_g1

0x5dbb,	// (0x00035792) bg_status_flat_pane_g2

0x5dc3,	// (0x0003579a) bg_status_flat_pane_g3

0x5dcb,	// (0x000357a2) bg_status_flat_pane_g4

0x5dd3,	// (0x000357aa) bg_status_flat_pane_g5

0x5ddb,	// (0x000357b2) bg_status_flat_pane_g6

0x5de3,	// (0x000357ba) bg_status_flat_pane_g7

0x112f,	// (0x00030b06) tabs_3_active_pane_t1_ParamLimits

0x112f,	// (0x00030b06) tabs_3_passive_pane_t1_ParamLimits

0x1145,	// (0x00030b1c) tabs_4_active_pane_t1_ParamLimits

0x1145,	// (0x00030b1c) tabs_4_1_passive_pane_t1_ParamLimits

0x1bd0,	// (0x000315a7) tabs_2_active_pane_t1_ParamLimits

0x1bd0,	// (0x000315a7) tabs_2_passive_pane_t1_ParamLimits

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp4_ParamLimits

0x1be6,	// (0x000315bd) tabs_2_long_active_pane_t1_ParamLimits

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp4_ParamLimits

0x9eea,	// (0x000398c1) list_single_midp_graphic_pane_t1_ParamLimits

0x1163,	// (0x00030b3a) bg_active_tab_pane_cp5_ParamLimits

0x1bfd,	// (0x000315d4) tabs_3_long_active_pane_t1_ParamLimits

0x4ac9,	// (0x000344a0) bg_passive_tab_pane_cp5_ParamLimits

0x9eea,	// (0x000398c1) list_single_midp_graphic_pane_t1

0x2823,	// (0x000321fa) bg_status_flat_pane_ParamLimits

0x5578,	// (0x00034f4f) indicator_pane_cp2_ParamLimits

0x5578,	// (0x00034f4f) indicator_pane_cp2

0x2989,	// (0x00032360) navi_pane_srt_ParamLimits

0x2989,	// (0x00032360) navi_pane_srt

0x55a0,	// (0x00034f77) popup_clock_digital_analogue_window_cp1

0x12eb,	// (0x00030cc2) indicator_pane_t1

0x518b,	// (0x00034b62) copy_highlight_pane

0x518b,	// (0x00034b62) cursor_graphics_pane

0x518b,	// (0x00034b62) graphic_within_text_pane

0x518b,	// (0x00034b62) link_highlight_pane

0x6679,	// (0x00036050) popup_preview_text_window_t5_ParamLimits

0x6679,	// (0x00036050) popup_preview_text_window_t5

0x5206,	// (0x00034bdd) cursor_digital_pane

0x5206,	// (0x00034bdd) cursor_primary_pane

0x5217,	// (0x00034bee) cursor_primary_small_pane

0x521f,	// (0x00034bf6) cursor_secondary_pane

0x5227,	// (0x00034bfe) cursor_title_pane

0x5206,	// (0x00034bdd) link_highlight_digital_pane

0x520e,	// (0x00034be5) link_highlight_primary_pane

0x5217,	// (0x00034bee) link_highlight_primary_small_pane

0x521f,	// (0x00034bf6) link_highlight_secondary_pane

0x5227,	// (0x00034bfe) link_highlight_title_pane

0x5206,	// (0x00034bdd) copy_highlight_digital_pane

0x5206,	// (0x00034bdd) copy_highlight_primary_pane

0x5217,	// (0x00034bee) copy_highlight_primary_small_pane

0x521f,	// (0x00034bf6) copy_highlight_secondary_pane

0x5227,	// (0x00034bfe) copy_highlight_title_pane

0x521f,	// (0x00034bf6) graphic_text_digital_pane

0x5e33,	// (0x0003580a) graphic_text_primary_pane

0x5e3c,	// (0x00035813) graphic_text_primary_small_pane

0x5217,	// (0x00034bee) graphic_text_secondary_pane

0x5206,	// (0x00034bdd) graphic_text_title_pane

0x202d,	// (0x00031a04) cursor_primary_pane_g1

0x5e25,	// (0x000357fc) cursor_text_primary_t1

0x2c5e,	// (0x00032635) cursor_primary_small_pane_g1

0x5e17,	// (0x000357ee) cursor_text_primary_small_t1

0x2c54,	// (0x0003262b) cursor_primary_small_pane_g1_copy1

0x5e09,	// (0x000357e0) cursor_text_primary_small_t1_copy1

0x5dfb,	// (0x000357d2) cursor_text_title_t1

0x2c4a,	// (0x00032621) cursor_title_pane_g1

0x202d,	// (0x00031a04) cursor_digital_pane_g1

0x522f,	// (0x00034c06) cursor_text_digital_t1

0x523d,	// (0x00034c14) link_highlight_primary_pane_g1

0x5da4,	// (0x0003577b) link_highlight_primary_pane_t1

0x523d,	// (0x00034c14) link_highlight_primary_small_pane_g1

0x5245,	// (0x00034c1c) link_highlight_primary_small_pane_t1

0x5254,	// (0x00034c2b) link_highlight_secondary_pane_g1

0x525c,	// (0x00034c33) link_highlight_secondary_pane_t1

0x5d09,	// (0x000356e0) link_highlight_title_pane_g1

0x5d20,	// (0x000356f7) link_highlight_title_pane_t1

0x5d09,	// (0x000356e0) link_highlight_digital_pane_g1

0x5d11,	// (0x000356e8) link_highlight_digital_pane_t1

0x5be5,	// (0x000355bc) copy_highlight_primary_pane_g1

0x5c0b,	// (0x000355e2) copy_highlight_primary_pane_t1

0x5be5,	// (0x000355bc) copy_highlight_primary_small_pane_g1

0x5bfc,	// (0x000355d3) copy_highlight_primary_small_pane_t1

0x526b,	// (0x00034c42) copy_highlight_secondary_pane_g1

0x5273,	// (0x00034c4a) copy_highlight_secondary_pane_t1

0x5be5,	// (0x000355bc) copy_highlight_title_pane_g1

0x5bed,	// (0x000355c4) copy_highlight_title_pane_t1

0x5be5,	// (0x000355bc) copy_highlight_digital_pane_g1

0x6b72,	// (0x00036549) copy_highlight_digital_pane_t1

0x6ac6,	// (0x0003649d) graphic_text_primary_pane_g1

0x6b56,	// (0x0003652d) graphic_text_primary_pane_t1

0x6b64,	// (0x0003653b) graphic_text_primary_pane_t2

0x0001,

0xf9d8,	// (0x0003f3af) graphic_text_primary_pane_t

0x6b32,	// (0x00036509) graphic_text_primary_small_pane_g1

0x6b3a,	// (0x00036511) graphic_text_primary_small_pane_t1

0x6b48,	// (0x0003651f) graphic_text_primary_small_pane_t2

0x0001,

0xf9d3,	// (0x0003f3aa) graphic_text_primary_small_pane_t

0x6b0e,	// (0x000364e5) graphic_text_secondary_pane_g1

0x6b16,	// (0x000364ed) graphic_text_secondary_pane_t1

0x6b24,	// (0x000364fb) graphic_text_secondary_pane_t2

0x0001,

0xf9ce,	// (0x0003f3a5) graphic_text_secondary_pane_t

0x6aea,	// (0x000364c1) graphic_text_title_pane_g1

0x6af2,	// (0x000364c9) graphic_text_title_pane_t1

0x6b00,	// (0x000364d7) graphic_text_title_pane_t2

0x0001,

0xf9c9,	// (0x0003f3a0) graphic_text_title_pane_t

0x6ac6,	// (0x0003649d) graphic_text_digital_pane_g1

0x6ace,	// (0x000364a5) graphic_text_digital_pane_t1

0x6adc,	// (0x000364b3) graphic_text_digital_pane_t2

0x0001,

0xf9c4,	// (0x0003f39b) graphic_text_digital_pane_t

0x1163,	// (0x00030b3a) navi_icon_pane_srt_ParamLimits

0x1163,	// (0x00030b3a) navi_icon_pane_srt

0x0f57,	// (0x0003092e) navi_midp_pane_srt

0x0f57,	// (0x0003092e) navi_navi_pane_srt

0x1163,	// (0x00030b3a) navi_text_pane_srt_ParamLimits

0x1163,	// (0x00030b3a) navi_text_pane_srt

0x6a91,	// (0x00036468) navi_navi_icon_text_pane_srt

0x6aab,	// (0x00036482) navi_navi_pane_srt_g1_ParamLimits

0x6aab,	// (0x00036482) navi_navi_pane_srt_g1

0x6a99,	// (0x00036470) navi_navi_pane_srt_g2_ParamLimits

0x6a99,	// (0x00036470) navi_navi_pane_srt_g2

0x0001,

0xf9bf,	// (0x0003f396) navi_navi_pane_srt_g_ParamLimits

0xf9bf,	// (0x0003f396) navi_navi_pane_srt_g

0x6abd,	// (0x00036494) navi_navi_tabs_pane_srt

0x6a91,	// (0x00036468) navi_navi_text_pane_srt

0x6a91,	// (0x00036468) navi_navi_volume_pane_srt

0x6a82,	// (0x00036459) navi_navi_text_pane_srt_t1

0xa681,	// (0x0003a058) navi_navi_volume_pane_srt_g1

0xa689,	// (0x0003a060) volume_small_pane_srt_ParamLimits

0xa689,	// (0x0003a060) volume_small_pane_srt

0x95a6,	// (0x00038f7d) volume_small_pane_srt_g1_ParamLimits

0x95a6,	// (0x00038f7d) volume_small_pane_srt_g1

0x95b6,	// (0x00038f8d) volume_small_pane_srt_g2_ParamLimits

0x95b6,	// (0x00038f8d) volume_small_pane_srt_g2

0x95c7,	// (0x00038f9e) volume_small_pane_srt_g3_ParamLimits

0x95c7,	// (0x00038f9e) volume_small_pane_srt_g3

0x95d8,	// (0x00038faf) volume_small_pane_srt_g4_ParamLimits

0x95d8,	// (0x00038faf) volume_small_pane_srt_g4

0x95e9,	// (0x00038fc0) volume_small_pane_srt_g5_ParamLimits

0x95e9,	// (0x00038fc0) volume_small_pane_srt_g5

0x95fa,	// (0x00038fd1) volume_small_pane_srt_g6_ParamLimits

0x95fa,	// (0x00038fd1) volume_small_pane_srt_g6

0x960b,	// (0x00038fe2) volume_small_pane_srt_g7_ParamLimits

0x960b,	// (0x00038fe2) volume_small_pane_srt_g7

0x961c,	// (0x00038ff3) volume_small_pane_srt_g8_ParamLimits

0x961c,	// (0x00038ff3) volume_small_pane_srt_g8

0x962d,	// (0x00039004) volume_small_pane_srt_g9_ParamLimits

0x962d,	// (0x00039004) volume_small_pane_srt_g9

0x963e,	// (0x00039015) volume_small_pane_srt_g10_ParamLimits

0x963e,	// (0x00039015) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0003f151) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0003f151) volume_small_pane_srt_g

0x1609,	// (0x00030fe0) query_popup_data_pane_cp2

0x6a68,	// (0x0003643f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6a68,	// (0x0003643f) navi_navi_icon_text_pane_srt_t1

0x5e33,	// (0x0003580a) navi_tabs_2_long_pane_srt

0x5e33,	// (0x0003580a) navi_tabs_2_pane_srt

0x5e33,	// (0x0003580a) navi_tabs_3_long_pane_srt

0x5e33,	// (0x0003580a) navi_tabs_3_pane_srt

0x5e33,	// (0x0003580a) navi_tabs_4_pane_srt

0xa661,	// (0x0003a038) tabs_2_active_pane_srt_ParamLimits

0xa661,	// (0x0003a038) tabs_2_active_pane_srt

0xa671,	// (0x0003a048) tabs_2_passive_pane_srt_ParamLimits

0xa671,	// (0x0003a048) tabs_2_passive_pane_srt

0x5793,	// (0x0003516a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5793,	// (0x0003516a) bg_passive_tab_pane_cp1_srt

0x63c0,	// (0x00035d97) bg_passive_tab_pane_g1_cp1_srt

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp1_srt

0x63b7,	// (0x00035d8e) bg_passive_tab_pane_g3_cp1_srt

0x1119,	// (0x00030af0) bg_active_tab_pane_cp1_srt_ParamLimits

0x1119,	// (0x00030af0) bg_active_tab_pane_cp1_srt

0x63af,	// (0x00035d86) tabs_2_active_pane_srt_g1

0x1bd0,	// (0x000315a7) tabs_2_active_pane_srt_t1_ParamLimits

0x1bd0,	// (0x000315a7) tabs_2_active_pane_srt_t1

0x63c0,	// (0x00035d97) bg_active_tab_pane_g1_cp1_srt

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp1_srt

0x63b7,	// (0x00035d8e) bg_active_tab_pane_g3_cp1_srt

0xa62e,	// (0x0003a005) tabs_3_active_pane_srt_ParamLimits

0xa62e,	// (0x0003a005) tabs_3_active_pane_srt

0xa63f,	// (0x0003a016) tabs_3_passive_pane_cp_srt_ParamLimits

0xa63f,	// (0x0003a016) tabs_3_passive_pane_cp_srt

0xa650,	// (0x0003a027) tabs_3_passive_pane_srt_ParamLimits

0xa650,	// (0x0003a027) tabs_3_passive_pane_srt

0x5793,	// (0x0003516a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5793,	// (0x0003516a) bg_passive_tab_pane_cp2_srt

0x528b,	// (0x00034c62) bg_passive_tab_pane_g1_cp2_srt

0x4e95,	// (0x0003486c) bg_passive_tab_pane_g2_cp2_srt

0x5282,	// (0x00034c59) bg_passive_tab_pane_g3_cp2_srt

0x1119,	// (0x00030af0) bg_active_tab_pane_cp2_srt_ParamLimits

0x1119,	// (0x00030af0) bg_active_tab_pane_cp2_srt

0x6a58,	// (0x0003642f) tabs_3_active_pane_srt_g1

0x112f,	// (0x00030b06) tabs_3_active_pane_srt_t1_ParamLimits

0x112f,	// (0x00030b06) tabs_3_active_pane_srt_t1

0x528b,	// (0x00034c62) bg_active_tab_pane_g1_cp2_srt

0x4e95,	// (0x0003486c) bg_active_tab_pane_g2_cp2_srt

0x5282,	// (0x00034c59) bg_active_tab_pane_g3_cp2_srt

0xa5e6,	// (0x00039fbd) tabs_4_active_pane_srt_ParamLimits

0xa5e6,	// (0x00039fbd) tabs_4_active_pane_srt

0xa5f8,	// (0x00039fcf) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa5f8,	// (0x00039fcf) tabs_4_passive_pane_cp2_srt

0x53a5,	// (0x00034d7c) aid_size_cell_toolbar

0x21b7,	// (0x00031b8e) main_idle_act_pane_ParamLimits

0x5461,	// (0x00034e38) popup_large_graphic_colour_window_ParamLimits

0x2715,	// (0x000320ec) popup_toolbar_window_ParamLimits

0x2715,	// (0x000320ec) popup_toolbar_window

0xe1fe,	// (0x0003dbd5) list_single_graphic_2heading_pane_ParamLimits

0xe1fe,	// (0x0003dbd5) list_single_graphic_2heading_pane

0x4b25,	// (0x000344fc) aid_size_cell_apps_grid_lsc_pane

0x4b37,	// (0x0003450e) aid_size_cell_apps_grid_prt_pane

0x4ac9,	// (0x000344a0) bg_wml_button_pane_cp1_ParamLimits

0x4ac9,	// (0x000344a0) bg_wml_button_pane_cp1

0x2c01,	// (0x000325d8) form_midp_field_text_pane_t1_ParamLimits

0x5793,	// (0x0003516a) input_focus_pane_cp050_ParamLimits

0x58d3,	// (0x000352aa) list_midp_form_text_pane_ParamLimits

0x58b0,	// (0x00035287) input_focus_pane_cp051_ParamLimits

0x58c4,	// (0x0003529b) list_midp_choice_pane_ParamLimits

0x2b9f,	// (0x00032576) list_single_2graphic_pane_cp3_ParamLimits

0x2b9f,	// (0x00032576) list_single_2graphic_pane_cp3

0x2bb2,	// (0x00032589) list_single_midp_graphic_pane_ParamLimits

0x2bb2,	// (0x00032589) list_single_midp_graphic_pane

0x88f8,	// (0x000382cf) list_single_graphic_2heading_pane_g1_ParamLimits

0x88f8,	// (0x000382cf) list_single_graphic_2heading_pane_g1

0x8904,	// (0x000382db) list_single_graphic_2heading_pane_g4_ParamLimits

0x8904,	// (0x000382db) list_single_graphic_2heading_pane_g4

0x8910,	// (0x000382e7) list_single_graphic_2heading_pane_g5_ParamLimits

0x8910,	// (0x000382e7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0003f1a4) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0003f1a4) list_single_graphic_2heading_pane_g

0x891c,	// (0x000382f3) list_single_graphic_2heading_pane_t1_ParamLimits

0x891c,	// (0x000382f3) list_single_graphic_2heading_pane_t1

0x8930,	// (0x00038307) list_single_graphic_2heading_pane_t2_ParamLimits

0x8930,	// (0x00038307) list_single_graphic_2heading_pane_t2

0x894a,	// (0x00038321) list_single_graphic_2heading_pane_t3_ParamLimits

0x894a,	// (0x00038321) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0003f1ab) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0003f1ab) list_single_graphic_2heading_pane_t

0x55e3,	// (0x00034fba) bg_popup_sub_pane_cp2

0x5609,	// (0x00034fe0) grid_toobar_pane

0x9e66,	// (0x0003983d) cell_toolbar_pane_ParamLimits

0x9e66,	// (0x0003983d) cell_toolbar_pane

0x563f,	// (0x00035016) cell_toolbar_pane_g1_ParamLimits

0x563f,	// (0x00035016) cell_toolbar_pane_g1

0x5651,	// (0x00035028) cell_toolbar_pane_g2_ParamLimits

0x5651,	// (0x00035028) cell_toolbar_pane_g2

0x0001,

0xf7db,	// (0x0003f1b2) cell_toolbar_pane_g_ParamLimits

0xf7db,	// (0x0003f1b2) cell_toolbar_pane_g

0x5673,	// (0x0003504a) grid_highlight_pane_cp2_ParamLimits

0x5673,	// (0x0003504a) grid_highlight_pane_cp2

0x568d,	// (0x00035064) toolbar_button_pane

0x5699,	// (0x00035070) toolbar_button_pane_g1

0x56a9,	// (0x00035080) toolbar_button_pane_g2

0x56a1,	// (0x00035078) toolbar_button_pane_g3

0x56b9,	// (0x00035090) toolbar_button_pane_g4

0x56b1,	// (0x00035088) toolbar_button_pane_g5

0x56c1,	// (0x00035098) toolbar_button_pane_g6

0x56c9,	// (0x000350a0) toolbar_button_pane_g7

0x56d9,	// (0x000350b0) toolbar_button_pane_g8

0x56d1,	// (0x000350a8) toolbar_button_pane_g9

0x0009,

0xf7e0,	// (0x0003f1b7) toolbar_button_pane_g

0x9e95,	// (0x0003986c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9e95,	// (0x0003986c) list_single_2graphic_pane_g1_cp3

0xef5b,	// (0x0003e932) list_single_2graphic_pane_g2_cp3_ParamLimits

0xef5b,	// (0x0003e932) list_single_2graphic_pane_g2_cp3

0x9eb0,	// (0x00039887) list_single_2graphic_pane_g3_cp3

0x9eb8,	// (0x0003988f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9eb8,	// (0x0003988f) list_single_2graphic_pane_g4_cp3

0x9ec4,	// (0x0003989b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9ec4,	// (0x0003989b) list_single_2graphic_pane_t1_cp3

0x9ede,	// (0x000398b5) list_single_midp_graphic_pane_g2_ParamLimits

0x9ede,	// (0x000398b5) list_single_midp_graphic_pane_g2

0xdc66,	// (0x0003d63d) aid_zoom_text_primary

0xe1f6,	// (0x0003dbcd) aid_zoom_text_secondary

0x533d,	// (0x00034d14) status_small_pane_g7_ParamLimits

0x533d,	// (0x00034d14) status_small_pane_g7

0x5360,	// (0x00034d37) status_small_pane_t1_ParamLimits

0x101d,	// (0x000309f4) title_pane_g2

0x0003,

0xf56a,	// (0x0003ef41) title_pane_g

0x16a8,	// (0x0003107f) aid_size_cell_colour_1_pane_ParamLimits

0x16a8,	// (0x0003107f) aid_size_cell_colour_1_pane

0x16bc,	// (0x00031093) aid_size_cell_colour_2_pane_ParamLimits

0x16bc,	// (0x00031093) aid_size_cell_colour_2_pane

0x16d0,	// (0x000310a7) aid_size_cell_colour_3_pane_ParamLimits

0x16d0,	// (0x000310a7) aid_size_cell_colour_3_pane

0x16e4,	// (0x000310bb) aid_size_cell_colour_4_pane_ParamLimits

0x16e4,	// (0x000310bb) aid_size_cell_colour_4_pane

0x9013,	// (0x000389ea) title_pane_stacon_g1_ParamLimits

0x9013,	// (0x000389ea) title_pane_stacon_g1

0x5c62,	// (0x00035639) popup_note_wait_window_g3_ParamLimits

0x5c62,	// (0x00035639) popup_note_wait_window_g3

0x5cd8,	// (0x000356af) popup_note_wait_window_t5_ParamLimits

0x5cd8,	// (0x000356af) popup_note_wait_window_t5

0x0f57,	// (0x0003092e) main_feb_china_hwr_fs_writing_pane

0x2218,	// (0x00031bef) popup_feb_china_hwr_fs_window_ParamLimits

0x2218,	// (0x00031bef) popup_feb_china_hwr_fs_window

0xef6c,	// (0x0003e943) aid_size_cell_hwr_fs_ParamLimits

0xef6c,	// (0x0003e943) aid_size_cell_hwr_fs

0x5793,	// (0x0003516a) bg_popup_sub_pane_cp3_ParamLimits

0x5793,	// (0x0003516a) bg_popup_sub_pane_cp3

0xef81,	// (0x0003e958) grid_hwr_fs_pane_ParamLimits

0xef81,	// (0x0003e958) grid_hwr_fs_pane

0x9f29,	// (0x00039900) linegrid_hwr_fs_pane_ParamLimits

0x9f29,	// (0x00039900) linegrid_hwr_fs_pane

0xef99,	// (0x0003e970) cell_hwr_fs_pane_ParamLimits

0xef99,	// (0x0003e970) cell_hwr_fs_pane

0x579f,	// (0x00035176) linegrid_hwr_fs_pane_g1_ParamLimits

0x579f,	// (0x00035176) linegrid_hwr_fs_pane_g1

0x2b65,	// (0x0003253c) linegrid_hwr_fs_pane_g2_ParamLimits

0x2b65,	// (0x0003253c) linegrid_hwr_fs_pane_g2

0x57ab,	// (0x00035182) linegrid_hwr_fs_pane_g3_ParamLimits

0x57ab,	// (0x00035182) linegrid_hwr_fs_pane_g3

0x9f69,	// (0x00039940) linegrid_hwr_fs_pane_g4_ParamLimits

0x9f69,	// (0x00039940) linegrid_hwr_fs_pane_g4

0x9f83,	// (0x0003995a) linegrid_hwr_fs_pane_g5_ParamLimits

0x9f83,	// (0x0003995a) linegrid_hwr_fs_pane_g5

0x0004,

0xf806,	// (0x0003f1dd) linegrid_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0003f1dd) linegrid_hwr_fs_pane_g

0x57b7,	// (0x0003518e) cell_hwr_fs_pane_g1_ParamLimits

0x57b7,	// (0x0003518e) cell_hwr_fs_pane_g1

0x55b1,	// (0x00034f88) cell_hwr_fs_pane_g2_ParamLimits

0x55b1,	// (0x00034f88) cell_hwr_fs_pane_g2

0x2b77,	// (0x0003254e) cell_hwr_fs_pane_g3_ParamLimits

0x2b77,	// (0x0003254e) cell_hwr_fs_pane_g3

0x2b84,	// (0x0003255b) cell_hwr_fs_pane_g4_ParamLimits

0x2b84,	// (0x0003255b) cell_hwr_fs_pane_g4

0x0003,

0xf811,	// (0x0003f1e8) cell_hwr_fs_pane_g_ParamLimits

0xf811,	// (0x0003f1e8) cell_hwr_fs_pane_g

0xefb9,	// (0x0003e990) cell_hwr_fs_pane_t1

0x0f57,	// (0x0003092e) grid_highlight_pane_cp6

0x0f57,	// (0x0003092e) main_idle_act2_pane

0x1b7e,	// (0x00031555) aid_inside_area_popup_secondary

0x2d6b,	// (0x00032742) aid_inside_area_window_primary_ParamLimits

0x2d6b,	// (0x00032742) aid_inside_area_window_primary

0x6b81,	// (0x00036558) ai2_news_ticker_pane

0x6b89,	// (0x00036560) aid_size_cell_ai1_link_ParamLimits

0x6b89,	// (0x00036560) aid_size_cell_ai1_link

0x3176,	// (0x00032b4d) popup_ai2_data_window_ParamLimits

0x3176,	// (0x00032b4d) popup_ai2_data_window

0x6ba3,	// (0x0003657a) popup_ai2_link_window_ParamLimits

0x6ba3,	// (0x0003657a) popup_ai2_link_window

0x5793,	// (0x0003516a) bg_popup_sub_pane_cp4_ParamLimits

0x5793,	// (0x0003516a) bg_popup_sub_pane_cp4

0x6bb7,	// (0x0003658e) grid_ai2_link_pane_ParamLimits

0x6bb7,	// (0x0003658e) grid_ai2_link_pane

0x6bce,	// (0x000365a5) popup_ai2_link_window_g1_ParamLimits

0x6bce,	// (0x000365a5) popup_ai2_link_window_g1

0x6bda,	// (0x000365b1) popup_ai2_link_window_g2_ParamLimits

0x6bda,	// (0x000365b1) popup_ai2_link_window_g2

0x0001,

0xf9dd,	// (0x0003f3b4) popup_ai2_link_window_g_ParamLimits

0xf9dd,	// (0x0003f3b4) popup_ai2_link_window_g

0x6be9,	// (0x000365c0) ai2_mp_button_pane

0x6bf1,	// (0x000365c8) ai2_mp_volume_pane

0x58b0,	// (0x00035287) bg_popup_sub_pane_cp5_ParamLimits

0x58b0,	// (0x00035287) bg_popup_sub_pane_cp5

0x6bf9,	// (0x000365d0) heading_ai2_gene_pane_ParamLimits

0x6bf9,	// (0x000365d0) heading_ai2_gene_pane

0x6c05,	// (0x000365dc) list_ai2_gene_pane_ParamLimits

0x6c05,	// (0x000365dc) list_ai2_gene_pane

0x6c4d,	// (0x00036624) cell_ai2_link_pane_ParamLimits

0x6c4d,	// (0x00036624) cell_ai2_link_pane

0x6c63,	// (0x0003663a) cell_ai2_link_pane_g1

0x0f57,	// (0x0003092e) grid_highlight_pane_cp7

0xa6e5,	// (0x0003a0bc) ai2_mp_volume_pane_g1

0x6d00,	// (0x000366d7) ai2_mp_volume_pane_g2

0x31a0,	// (0x00032b77) list_ai2_gene_pane_t1

0x6cf8,	// (0x000366cf) ai2_mp_volume_pane_g3

0x0002,

0xf9f6,	// (0x0003f3cd) ai2_mp_volume_pane_g

0xa6ed,	// (0x0003a0c4) volume_small_pane_cp3

0x6d08,	// (0x000366df) aid_size_cell_ai2_button

0x6d10,	// (0x000366e7) grid_ai2_button_pane

0x6d19,	// (0x000366f0) cell_ai2_button_pane_ParamLimits

0x6d19,	// (0x000366f0) cell_ai2_button_pane

0x0e0a,	// (0x000307e1) cell_ai2_button_pane_g1

0x0f57,	// (0x0003092e) grid_highlight_pane_cp8

0x6cb8,	// (0x0003668f) ai2_gene_pane_t1_ParamLimits

0x6cb8,	// (0x0003668f) ai2_gene_pane_t1

0x2186,	// (0x00031b5d) aid_height_parent_landscape

0x2f23,	// (0x000328fa) aid_height_set_list

0x696e,	// (0x00036345) aid_size_parent

0x6a42,	// (0x00036419) aid_size_cell_graphic_pane_ParamLimits

0x6c15,	// (0x000365ec) popup_ai2_data_window_g1_ParamLimits

0x6c15,	// (0x000365ec) popup_ai2_data_window_g1

0x6c21,	// (0x000365f8) ai2_news_ticker_pane_g1

0x6c29,	// (0x00036600) ai2_news_ticker_pane_g2

0x0001,

0xf9e2,	// (0x0003f3b9) ai2_news_ticker_pane_g

0x6c31,	// (0x00036608) ai2_news_ticker_pane_t1

0x6c3f,	// (0x00036616) ai2_news_ticker_pane_t2

0x0001,

0xf9e7,	// (0x0003f3be) ai2_news_ticker_pane_t

0x6a23,	// (0x000363fa) heading_ai2_gene_pane_g1

0x6c6c,	// (0x00036643) heading_ai2_gene_pane_t1_ParamLimits

0x6c6c,	// (0x00036643) heading_ai2_gene_pane_t1

0x6c81,	// (0x00036658) list_highlight_pane_cp6

0x318a,	// (0x00032b61) ai2_gene_pane_ParamLimits

0x318a,	// (0x00032b61) ai2_gene_pane

0x31ae,	// (0x00032b85) list_ai2_gene_pane_t2

0x0001,

0xf9ec,	// (0x0003f3c3) list_ai2_gene_pane_t

0x6c89,	// (0x00036660) list_highlight_pane_cp8_ParamLimits

0x6c89,	// (0x00036660) list_highlight_pane_cp8

0x6c9a,	// (0x00036671) ai2_gene_pane_g1_ParamLimits

0x6c9a,	// (0x00036671) ai2_gene_pane_g1

0x6cac,	// (0x00036683) ai2_gene_pane_g2_ParamLimits

0x6cac,	// (0x00036683) ai2_gene_pane_g2

0x0001,

0xf9f1,	// (0x0003f3c8) ai2_gene_pane_g_ParamLimits

0xf9f1,	// (0x0003f3c8) ai2_gene_pane_g

0x1975,	// (0x0003134c) scroll_pane_cp12

0xef1a,	// (0x0003e8f1) control_pane_t3_ParamLimits

0xef1a,	// (0x0003e8f1) control_pane_t3

0x5351,	// (0x00034d28) status_small_pane_g8_ParamLimits

0x5351,	// (0x00034d28) status_small_pane_g8

0x228c,	// (0x00031c63) popup_find_window_ParamLimits

0x247f,	// (0x00031e56) popup_note_image_window_ParamLimits

0xd68d,	// (0x0003d064) list_double2_graphic_pane_vc_g1_ParamLimits

0xd68d,	// (0x0003d064) list_double2_graphic_pane_vc_g1

0xd5d0,	// (0x0003cfa7) list_double2_graphic_pane_vc_g2_ParamLimits

0xd5d0,	// (0x0003cfa7) list_double2_graphic_pane_vc_g2

0xd5dc,	// (0x0003cfb3) list_double2_graphic_pane_vc_g3_ParamLimits

0xd5dc,	// (0x0003cfb3) list_double2_graphic_pane_vc_g3

0x0002,

0xf5dd,	// (0x0003efb4) list_double2_graphic_pane_vc_g_ParamLimits

0xf5dd,	// (0x0003efb4) list_double2_graphic_pane_vc_g

0xd665,	// (0x0003d03c) list_double2_graphic_pane_vc_t1_ParamLimits

0xd665,	// (0x0003d03c) list_double2_graphic_pane_vc_t1

0xd5d0,	// (0x0003cfa7) list_single_heading_pane_vc_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_heading_pane_vc_g1

0xd5dc,	// (0x0003cfb3) list_single_heading_pane_vc_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_single_heading_pane_vc_g

0xdc93,	// (0x0003d66a) list_single_heading_pane_vc_t1_ParamLimits

0xdc93,	// (0x0003d66a) list_single_heading_pane_vc_t1

0xdca9,	// (0x0003d680) list_single_heading_pane_vc_t2_ParamLimits

0xdca9,	// (0x0003d680) list_single_heading_pane_vc_t2

0x0001,

0xf7f5,	// (0x0003f1cc) list_single_heading_pane_vc_t_ParamLimits

0xf7f5,	// (0x0003f1cc) list_single_heading_pane_vc_t

0x56ed,	// (0x000350c4) list_setting_number_pane_vc_g1_ParamLimits

0x56ed,	// (0x000350c4) list_setting_number_pane_vc_g1

0x56f9,	// (0x000350d0) list_setting_number_pane_vc_g2_ParamLimits

0x56f9,	// (0x000350d0) list_setting_number_pane_vc_g2

0x0001,

0xf7fa,	// (0x0003f1d1) list_setting_number_pane_vc_g_ParamLimits

0xf7fa,	// (0x0003f1d1) list_setting_number_pane_vc_g

0x5705,	// (0x000350dc) list_setting_number_pane_vc_t1_ParamLimits

0x5705,	// (0x000350dc) list_setting_number_pane_vc_t1

0x5719,	// (0x000350f0) list_setting_number_pane_vc_t2_ParamLimits

0x5719,	// (0x000350f0) list_setting_number_pane_vc_t2

0x5735,	// (0x0003510c) list_setting_number_pane_vc_t3_ParamLimits

0x5735,	// (0x0003510c) list_setting_number_pane_vc_t3

0x0002,

0xf7ff,	// (0x0003f1d6) list_setting_number_pane_vc_t_ParamLimits

0xf7ff,	// (0x0003f1d6) list_setting_number_pane_vc_t

0x575b,	// (0x00035132) set_value_pane_vc_ParamLimits

0x575b,	// (0x00035132) set_value_pane_vc

0xe1fe,	// (0x0003dbd5) list_double2_graphic_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double2_graphic_pane_vc

0x69c9,	// (0x000363a0) list_double2_large_graphic_pane_vc_ParamLimits

0x69c9,	// (0x000363a0) list_double2_large_graphic_pane_vc

0xe1fe,	// (0x0003dbd5) list_double2_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double2_pane_vc

0xe1fe,	// (0x0003dbd5) list_double_graphic_heading_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double_graphic_heading_pane_vc

0xe1fe,	// (0x0003dbd5) list_double_graphic_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double_graphic_pane_vc

0xe1fe,	// (0x0003dbd5) list_double_heading_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double_heading_pane_vc

0x69c9,	// (0x000363a0) list_double_large_graphic_pane_vc_ParamLimits

0x69c9,	// (0x000363a0) list_double_large_graphic_pane_vc

0xe1fe,	// (0x0003dbd5) list_double_number_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double_number_pane_vc

0xe1fe,	// (0x0003dbd5) list_double_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double_pane_vc

0xe1fe,	// (0x0003dbd5) list_double_time_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_double_time_pane_vc

0xe1fe,	// (0x0003dbd5) list_setting_number_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_setting_number_pane_vc

0xe1fe,	// (0x0003dbd5) list_setting_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_setting_pane_vc

0xe1fe,	// (0x0003dbd5) list_single_graphic_heading_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_single_graphic_heading_pane_vc

0xe1fe,	// (0x0003dbd5) list_single_heading_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_single_heading_pane_vc

0xe1fe,	// (0x0003dbd5) list_single_number_heading_pane_vc_ParamLimits

0xe1fe,	// (0x0003dbd5) list_single_number_heading_pane_vc

0xd68d,	// (0x0003d064) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd68d,	// (0x0003d064) list_double_graphic_heading_pane_vc_g1

0xd5d0,	// (0x0003cfa7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd5d0,	// (0x0003cfa7) list_double_graphic_heading_pane_vc_g2

0xd5dc,	// (0x0003cfb3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd5dc,	// (0x0003cfb3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5dd,	// (0x0003efb4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x0003efb4) list_double_graphic_heading_pane_vc_g

0xdd8b,	// (0x0003d762) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdd8b,	// (0x0003d762) list_double_graphic_heading_pane_vc_t1

0xdc93,	// (0x0003d66a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdc93,	// (0x0003d66a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003f3d4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x0003f3d4) list_double_graphic_heading_pane_vc_t

0x56ed,	// (0x000350c4) list_setting_pane_vc_g1_ParamLimits

0x56ed,	// (0x000350c4) list_setting_pane_vc_g1

0x56f9,	// (0x000350d0) list_setting_pane_vc_g2_ParamLimits

0x56f9,	// (0x000350d0) list_setting_pane_vc_g2

0x0001,

0xf7fa,	// (0x0003f1d1) list_setting_pane_vc_g_ParamLimits

0xf7fa,	// (0x0003f1d1) list_setting_pane_vc_g

0x6f08,	// (0x000368df) list_setting_pane_vc_t1_ParamLimits

0x6f08,	// (0x000368df) list_setting_pane_vc_t1

0x6f1c,	// (0x000368f3) list_setting_pane_vc_t2_ParamLimits

0x6f1c,	// (0x000368f3) list_setting_pane_vc_t2

0x0001,

0xfa40,	// (0x0003f417) list_setting_pane_vc_t_ParamLimits

0xfa40,	// (0x0003f417) list_setting_pane_vc_t

0x575b,	// (0x00035132) set_value_pane_cp_vc_ParamLimits

0x575b,	// (0x00035132) set_value_pane_cp_vc

0xd5d0,	// (0x0003cfa7) list_single_number_heading_pane_vc_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_number_heading_pane_vc_g1

0xd5dc,	// (0x0003cfb3) list_single_number_heading_pane_vc_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_single_number_heading_pane_vc_g

0xdc93,	// (0x0003d66a) list_single_number_heading_pane_vc_t1_ParamLimits

0xdc93,	// (0x0003d66a) list_single_number_heading_pane_vc_t1

0xdd9d,	// (0x0003d774) list_single_number_heading_pane_vc_t2_ParamLimits

0xdd9d,	// (0x0003d774) list_single_number_heading_pane_vc_t2

0xddaf,	// (0x0003d786) list_single_number_heading_pane_vc_t3_ParamLimits

0xddaf,	// (0x0003d786) list_single_number_heading_pane_vc_t3

0x0002,

0xfa45,	// (0x0003f41c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0003f41c) list_single_number_heading_pane_vc_t

0xd68d,	// (0x0003d064) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd68d,	// (0x0003d064) list_single_graphic_heading_pane_vc_g1

0xd5d0,	// (0x0003cfa7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_graphic_heading_pane_vc_g4

0xd5dc,	// (0x0003cfb3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd5dc,	// (0x0003cfb3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5dd,	// (0x0003efb4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x0003efb4) list_single_graphic_heading_pane_vc_g

0xdc93,	// (0x0003d66a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdc93,	// (0x0003d66a) list_single_graphic_heading_pane_vc_t1

0xddc1,	// (0x0003d798) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xddc1,	// (0x0003d798) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x0003f423) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003f423) list_single_graphic_heading_pane_vc_t

0xd5d0,	// (0x0003cfa7) list_double2_pane_vc_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_double2_pane_vc_g1

0xd5dc,	// (0x0003cfb3) list_double2_pane_vc_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_double2_pane_vc_g

0xd5e8,	// (0x0003cfbf) list_double2_pane_vc_t1_ParamLimits

0xd5e8,	// (0x0003cfbf) list_double2_pane_vc_t1

0xd58e,	// (0x0003cf65) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd58e,	// (0x0003cf65) list_double2_large_graphic_pane_vc_g1

0xd59a,	// (0x0003cf71) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd59a,	// (0x0003cf71) list_double2_large_graphic_pane_vc_g2

0xd5a6,	// (0x0003cf7d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd5a6,	// (0x0003cf7d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0003efdd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0003efdd) list_double2_large_graphic_pane_vc_g

0xd5ba,	// (0x0003cf91) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd5ba,	// (0x0003cf91) list_double2_large_graphic_pane_vc_t1

0xe227,	// (0x0003dbfe) list_double_time_pane_vc_g1_ParamLimits

0xe227,	// (0x0003dbfe) list_double_time_pane_vc_g1

0xe233,	// (0x0003dc0a) list_double_time_pane_vc_g2_ParamLimits

0xe233,	// (0x0003dc0a) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0003f428) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0003f428) list_double_time_pane_vc_g

0xddd3,	// (0x0003d7aa) list_double_time_pane_vc_t1_ParamLimits

0xddd3,	// (0x0003d7aa) list_double_time_pane_vc_t1

0xddec,	// (0x0003d7c3) list_double_time_pane_vc_t2_ParamLimits

0xddec,	// (0x0003d7c3) list_double_time_pane_vc_t2

0xde25,	// (0x0003d7fc) list_double_time_pane_vc_t3_ParamLimits

0xde25,	// (0x0003d7fc) list_double_time_pane_vc_t3

0xde3d,	// (0x0003d814) list_double_time_pane_vc_t4_ParamLimits

0xde3d,	// (0x0003d814) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0003f42d) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0003f42d) list_double_time_pane_vc_t

0xd5d0,	// (0x0003cfa7) list_double_pane_vc_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_double_pane_vc_g1

0xd5dc,	// (0x0003cfb3) list_double_pane_vc_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_double_pane_vc_g

0xde4f,	// (0x0003d826) list_double_pane_vc_t1_ParamLimits

0xde4f,	// (0x0003d826) list_double_pane_vc_t1

0xde61,	// (0x0003d838) list_double_pane_vc_t2_ParamLimits

0xde61,	// (0x0003d838) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0003f436) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0003f436) list_double_pane_vc_t

0xd5d0,	// (0x0003cfa7) list_double_number_pane_vc_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_double_number_pane_vc_g1

0xd5dc,	// (0x0003cfb3) list_double_number_pane_vc_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_double_number_pane_vc_g

0xde77,	// (0x0003d84e) list_double_number_pane_vc_t1_ParamLimits

0xde77,	// (0x0003d84e) list_double_number_pane_vc_t1

0xde8b,	// (0x0003d862) list_double_number_pane_vc_t2_ParamLimits

0xde8b,	// (0x0003d862) list_double_number_pane_vc_t2

0xde61,	// (0x0003d838) list_double_number_pane_vc_t3_ParamLimits

0xde61,	// (0x0003d838) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0003f43b) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0003f43b) list_double_number_pane_vc_t

0xe23f,	// (0x0003dc16) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe23f,	// (0x0003dc16) list_double_large_graphic_pane_vc_g1

0xe24b,	// (0x0003dc22) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe24b,	// (0x0003dc22) list_double_large_graphic_pane_vc_g2

0xd5a6,	// (0x0003cf7d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd5a6,	// (0x0003cf7d) list_double_large_graphic_pane_vc_g3

0xde9d,	// (0x0003d874) list_double_large_graphic_pane_vc_g4_ParamLimits

0xde9d,	// (0x0003d874) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0003f442) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0003f442) list_double_large_graphic_pane_vc_g

0xdea9,	// (0x0003d880) list_double_large_graphic_pane_vc_t1_ParamLimits

0xdea9,	// (0x0003d880) list_double_large_graphic_pane_vc_t1

0xdebb,	// (0x0003d892) list_double_large_graphic_pane_vc_t2_ParamLimits

0xdebb,	// (0x0003d892) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0003f44b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0003f44b) list_double_large_graphic_pane_vc_t

0xd5d0,	// (0x0003cfa7) list_double_heading_pane_vc_g1_ParamLimits

0xd5d0,	// (0x0003cfa7) list_double_heading_pane_vc_g1

0xd5dc,	// (0x0003cfb3) list_double_heading_pane_vc_g2_ParamLimits

0xd5dc,	// (0x0003cfb3) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0003efc5) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0003efc5) list_double_heading_pane_vc_g

0xded2,	// (0x0003d8a9) list_double_heading_pane_vc_t1_ParamLimits

0xded2,	// (0x0003d8a9) list_double_heading_pane_vc_t1

0xdc93,	// (0x0003d66a) list_double_heading_pane_vc_t2_ParamLimits

0xdc93,	// (0x0003d66a) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0003f450) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0003f450) list_double_heading_pane_vc_t

0xd68d,	// (0x0003d064) list_double_graphic_pane_vc_g1_ParamLimits

0xd68d,	// (0x0003d064) list_double_graphic_pane_vc_g1

0xd699,	// (0x0003d070) list_double_graphic_pane_vc_g2_ParamLimits

0xd699,	// (0x0003d070) list_double_graphic_pane_vc_g2

0xd6a8,	// (0x0003d07f) list_double_graphic_pane_vc_g3_ParamLimits

0xd6a8,	// (0x0003d07f) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0003f455) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0003f455) list_double_graphic_pane_vc_g

0xdee4,	// (0x0003d8bb) list_double_graphic_pane_vc_t1_ParamLimits

0xdee4,	// (0x0003d8bb) list_double_graphic_pane_vc_t1

0xde61,	// (0x0003d838) list_double_graphic_pane_vc_t2_ParamLimits

0xde61,	// (0x0003d838) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0003f45c) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0003f45c) list_double_graphic_pane_vc_t

0x898a,	// (0x00038361) aid_size_cell_fastswap

0xecb9,	// (0x0003e690) aid_size_cell_touch_ParamLimits

0xecb9,	// (0x0003e690) aid_size_cell_touch

0x8b46,	// (0x0003851d) popup_fast_swap_wide_window_ParamLimits

0x8b46,	// (0x0003851d) popup_fast_swap_wide_window

0xed6a,	// (0x0003e741) touch_pane_ParamLimits

0xed6a,	// (0x0003e741) touch_pane

0xd9ae,	// (0x0003d385) button_value_adjust_pane_cp2

0xd9b6,	// (0x0003d38d) button_value_adjust_pane_cp4

0xd9d6,	// (0x0003d3ad) form_field_data_pane_cp2

0x09f5,	// (0x000303cc) form_field_data_wide_pane_cp2

0x4b6e,	// (0x00034545) bg_scroll_pane_ParamLimits

0x91a9,	// (0x00038b80) scroll_handle_pane_ParamLimits

0x91bd,	// (0x00038b94) scroll_sc2_down_pane_ParamLimits

0x91bd,	// (0x00038b94) scroll_sc2_down_pane

0x4b9f,	// (0x00034576) scroll_sc2_up_pane_ParamLimits

0x4b9f,	// (0x00034576) scroll_sc2_up_pane

0x32d2,	// (0x00032ca9) grid_wheel_folder_pane_g1_ParamLimits

0x32d2,	// (0x00032ca9) grid_wheel_folder_pane_g1

0x9487,	// (0x00038e5e) clock_nsta_pane_cp2_ParamLimits

0x9487,	// (0x00038e5e) clock_nsta_pane_cp2

0x1f90,	// (0x00031967) listscroll_midp_pane_ParamLimits

0x1fa0,	// (0x00031977) midp_canvas_pane

0x97b9,	// (0x00039190) nsta_clock_indic_pane

0x53cd,	// (0x00034da4) listscroll_form_pane_vc

0x53d5,	// (0x00034dac) listscroll_set_pane_vc_ParamLimits

0x53d5,	// (0x00034dac) listscroll_set_pane_vc

0x284b,	// (0x00032222) clock_nsta_pane

0x286e,	// (0x00032245) indicator_nsta_pane

0x55e3,	// (0x00034fba) bg_popup_sub_pane_cp2_ParamLimits

0x55f7,	// (0x00034fce) find_pane_cp2_ParamLimits

0x55f7,	// (0x00034fce) find_pane_cp2

0x5609,	// (0x00034fe0) grid_toobar_pane_ParamLimits

0x5767,	// (0x0003513e) list_form_gen_pane_vc_ParamLimits

0x5767,	// (0x0003513e) list_form_gen_pane_vc

0x577d,	// (0x00035154) scroll_pane_cp8_vc_ParamLimits

0x577d,	// (0x00035154) scroll_pane_cp8_vc

0x57cd,	// (0x000351a4) data_form_wide_pane_vc_ParamLimits

0x57cd,	// (0x000351a4) data_form_wide_pane_vc

0x57d9,	// (0x000351b0) form_field_data_wide_pane_vc_g1

0x57e1,	// (0x000351b8) form_field_data_wide_pane_vc_t1_ParamLimits

0x57e1,	// (0x000351b8) form_field_data_wide_pane_vc_t1

0x1a3c,	// (0x00031413) input_focus_pane_cp6_vc_ParamLimits

0x1a3c,	// (0x00031413) input_focus_pane_cp6_vc

0x2c22,	// (0x000325f9) list_midp_pane_ParamLimits

0x63c9,	// (0x00035da0) scroll_pane_cp16_ParamLimits

0x63c9,	// (0x00035da0) scroll_pane_cp16

0x5a48,	// (0x0003541f) button_value_adjust_pane_ParamLimits

0x5a48,	// (0x0003541f) button_value_adjust_pane

0x2f2f,	// (0x00032906) button_value_adjust_pane_cp6_ParamLimits

0x2f2f,	// (0x00032906) button_value_adjust_pane_cp6

0x3039,	// (0x00032a10) settings_code_pane_cp_ParamLimits

0x3039,	// (0x00032a10) settings_code_pane_cp

0x0e0a,	// (0x000307e1) cell_touch_pane_g1

0x0e0a,	// (0x000307e1) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0003f0fb) cell_touch_pane_g

0x31bc,	// (0x00032b93) cell_touch_pane_cp_ParamLimits

0x31bc,	// (0x00032b93) cell_touch_pane_cp

0x31d8,	// (0x00032baf) cell_touch_pane_ParamLimits

0x31d8,	// (0x00032baf) cell_touch_pane

0x0e0a,	// (0x000307e1) scroll_sc2_down_pane_g1

0x0e0a,	// (0x000307e1) scroll_sc2_up_pane_g1

0x0f57,	// (0x0003092e) bg_set_opt_pane_cp4_vc

0x6d2b,	// (0x00036702) list_set_graphic_pane_vc_g1_ParamLimits

0x6d2b,	// (0x00036702) list_set_graphic_pane_vc_g1

0x6d37,	// (0x0003670e) list_set_graphic_pane_vc_g2_ParamLimits

0x6d37,	// (0x0003670e) list_set_graphic_pane_vc_g2

0x0001,

0xfa02,	// (0x0003f3d9) list_set_graphic_pane_vc_g_ParamLimits

0xfa02,	// (0x0003f3d9) list_set_graphic_pane_vc_g

0x6d43,	// (0x0003671a) text_primary_small_cp13_vc_ParamLimits

0x6d43,	// (0x0003671a) text_primary_small_cp13_vc

0x6d5b,	// (0x00036732) list_set_graphic_pane_vc_ParamLimits

0x6d5b,	// (0x00036732) list_set_graphic_pane_vc

0x0f57,	// (0x0003092e) input_focus_pane_cp2_vc

0x0e0a,	// (0x000307e1) setting_code_pane_vc_g1

0x6d6e,	// (0x00036745) setting_code_pane_vc_t1

0x6d7c,	// (0x00036753) set_text_pane_vc_t1_ParamLimits

0x6d7c,	// (0x00036753) set_text_pane_vc_t1

0x0f57,	// (0x0003092e) input_focus_pane_cp1_vc

0x6d97,	// (0x0003676e) list_set_text_pane_vc

0x0e0a,	// (0x000307e1) setting_text_pane_vc_g1

0x0f57,	// (0x0003092e) bg_set_opt_pane_cp2_vc

0x6da1,	// (0x00036778) setting_slider_graphic_pane_vc_g1

0x6da9,	// (0x00036780) setting_slider_graphic_pane_vc_t1

0x6db7,	// (0x0003678e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa07,	// (0x0003f3de) setting_slider_graphic_pane_vc_t

0x6dc5,	// (0x0003679c) slider_set_pane_cp_vc

0x6dcd,	// (0x000367a4) slider_set_pane_vc_g1

0x6dd6,	// (0x000367ad) slider_set_pane_vc_g2

0x0006,

0xfa0c,	// (0x0003f3e3) slider_set_pane_vc_g

0x1a97,	// (0x0003146e) set_opt_bg_pane_g1_copy1

0x1a9f,	// (0x00031476) set_opt_bg_pane_g2_copy1

0x6e02,	// (0x000367d9) set_opt_bg_pane_g3_copy1

0x1aaf,	// (0x00031486) set_opt_bg_pane_g4_copy1

0x1ab7,	// (0x0003148e) set_opt_bg_pane_g5_copy1

0x1abf,	// (0x00031496) set_opt_bg_pane_g6_copy1

0x6e0a,	// (0x000367e1) set_opt_bg_pane_g7_copy1

0x6e12,	// (0x000367e9) set_opt_bg_pane_g8_copy1

0x6e1a,	// (0x000367f1) set_opt_bg_pane_g9_copy1

0x0f57,	// (0x0003092e) bg_set_opt_pane_cp_vc

0x6e22,	// (0x000367f9) setting_slider_pane_vc_t1

0x6da9,	// (0x00036780) setting_slider_pane_vc_t2

0x6db7,	// (0x0003678e) setting_slider_pane_vc_t3

0x0002,

0xfa1b,	// (0x0003f3f2) setting_slider_pane_vc_t

0x6dc5,	// (0x0003679c) slider_set_pane_vc

0xa096,	// (0x00039a6d) volume_set_pane_vc_g1

0xa6f6,	// (0x0003a0cd) volume_set_pane_vc_g2

0xa6ff,	// (0x0003a0d6) volume_set_pane_vc_g3

0xa708,	// (0x0003a0df) volume_set_pane_vc_g4

0xa711,	// (0x0003a0e8) volume_set_pane_vc_g5

0xa71a,	// (0x0003a0f1) volume_set_pane_vc_g6

0xa723,	// (0x0003a0fa) volume_set_pane_vc_g7

0xa72c,	// (0x0003a103) volume_set_pane_vc_g8

0xa735,	// (0x0003a10c) volume_set_pane_vc_g9

0xa73e,	// (0x0003a115) volume_set_pane_vc_g10

0x0009,

0xfa22,	// (0x0003f3f9) volume_set_pane_vc_g

0x6e31,	// (0x00036808) volume_set_pane_vc

0x6e39,	// (0x00036810) button_value_adjust_pane_cp1_vc

0x6e43,	// (0x0003681a) list_highlight_pane_cp2_vc

0x6e4c,	// (0x00036823) list_set_pane_vc_ParamLimits

0x6e4c,	// (0x00036823) list_set_pane_vc

0x6e9e,	// (0x00036875) main_pane_set_vc_t1_ParamLimits

0x6e9e,	// (0x00036875) main_pane_set_vc_t1

0x6eb3,	// (0x0003688a) main_pane_set_vc_t2_ParamLimits

0x6eb3,	// (0x0003688a) main_pane_set_vc_t2

0x6ec5,	// (0x0003689c) main_pane_set_vc_t3_ParamLimits

0x6ec5,	// (0x0003689c) main_pane_set_vc_t3

0x6ed7,	// (0x000368ae) main_pane_set_vc_t4_ParamLimits

0x6ed7,	// (0x000368ae) main_pane_set_vc_t4

0x0003,

0xfa37,	// (0x0003f40e) main_pane_set_vc_t_ParamLimits

0xfa37,	// (0x0003f40e) main_pane_set_vc_t

0x6ee9,	// (0x000368c0) setting_code_pane_vc_ParamLimits

0x6ee9,	// (0x000368c0) setting_code_pane_vc

0x6ef8,	// (0x000368cf) setting_slider_graphic_pane_vc

0x6ef8,	// (0x000368cf) setting_slider_pane_vc

0x6ef8,	// (0x000368cf) setting_text_pane_vc

0x6ef8,	// (0x000368cf) setting_volume_pane_vc

0x6f00,	// (0x000368d7) scroll_pane_cp121_vc

0x1a27,	// (0x000313fe) set_content_pane_vc

0x6f3e,	// (0x00036915) button_value_adjust_pane_g1

0x6f47,	// (0x0003691e) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0003f461) button_value_adjust_pane_g

0x6f50,	// (0x00036927) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6f50,	// (0x00036927) form_field_slider_wide_pane_vc_t1

0x6f66,	// (0x0003693d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6f66,	// (0x0003693d) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0003f466) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0003f466) form_field_slider_wide_pane_vc_t

0x1119,	// (0x00030af0) input_focus_pane_cp10_vc_ParamLimits

0x1119,	// (0x00030af0) input_focus_pane_cp10_vc

0x6f7b,	// (0x00036952) slider_cont_pane_cp1_vc_ParamLimits

0x6f7b,	// (0x00036952) slider_cont_pane_cp1_vc

0x6dcd,	// (0x000367a4) slider_form_pane_g1_cp2

0x6dd6,	// (0x000367ad) slider_form_pane_g2_cp2

0x6f96,	// (0x0003696d) form_field_slider_pane_vc_t3

0x6fa4,	// (0x0003697b) form_field_slider_pane_vc_t4

0x6fba,	// (0x00036991) slider_form_pane_vc_ParamLimits

0x6fba,	// (0x00036991) slider_form_pane_vc

0x6fc7,	// (0x0003699e) form_field_slider_pane_vc_t1_ParamLimits

0x6fc7,	// (0x0003699e) form_field_slider_pane_vc_t1

0x6fdd,	// (0x000369b4) form_field_slider_pane_vc_t2_ParamLimits

0x6fdd,	// (0x000369b4) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003f476) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003f476) form_field_slider_pane_vc_t

0x1119,	// (0x00030af0) input_focus_pane_cp9_vc_ParamLimits

0x1119,	// (0x00030af0) input_focus_pane_cp9_vc

0x6fef,	// (0x000369c6) slider_cont_pane_vc_ParamLimits

0x6fef,	// (0x000369c6) slider_cont_pane_vc

0x7001,	// (0x000369d8) list_form_graphic_pane_cp_vc_ParamLimits

0x7001,	// (0x000369d8) list_form_graphic_pane_cp_vc

0x57d9,	// (0x000351b0) form_field_popup_wide_pane_vc_g1

0x7016,	// (0x000369ed) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7016,	// (0x000369ed) form_field_popup_wide_pane_vc_t1

0x1a3c,	// (0x00031413) input_focus_pane_cp8_vc_ParamLimits

0x1a3c,	// (0x00031413) input_focus_pane_cp8_vc

0x702b,	// (0x00036a02) list_form_wide_pane_vc_ParamLimits

0x702b,	// (0x00036a02) list_form_wide_pane_vc

0x7037,	// (0x00036a0e) list_form_graphic_pane_vc_g1

0x703f,	// (0x00036a16) list_form_graphic_pane_vc_t1_ParamLimits

0x703f,	// (0x00036a16) list_form_graphic_pane_vc_t1

0x1163,	// (0x00030b3a) list_highlight_pane_cp5_vc_ParamLimits

0x1163,	// (0x00030b3a) list_highlight_pane_cp5_vc

0x705b,	// (0x00036a32) list_form_graphic_pane_vc_ParamLimits

0x705b,	// (0x00036a32) list_form_graphic_pane_vc

0x57d9,	// (0x000351b0) form_field_popup_pane_vc_g1

0x7071,	// (0x00036a48) form_field_popup_pane_vc_t1_ParamLimits

0x7071,	// (0x00036a48) form_field_popup_pane_vc_t1

0x1a3c,	// (0x00031413) input_focus_pane_cp7_vc_ParamLimits

0x1a3c,	// (0x00031413) input_focus_pane_cp7_vc

0x7086,	// (0x00036a5d) list_form_pane_vc_ParamLimits

0x7086,	// (0x00036a5d) list_form_pane_vc

0x7092,	// (0x00036a69) data_form_pane_vc_t1_ParamLimits

0x7092,	// (0x00036a69) data_form_pane_vc_t1

0x1a97,	// (0x0003146e) input_focus_pane_vc_g1

0x1a9f,	// (0x00031476) input_focus_pane_vc_g2

0x1aa7,	// (0x0003147e) input_focus_pane_vc_g3

0x1aaf,	// (0x00031486) input_focus_pane_vc_g4

0x1ab7,	// (0x0003148e) input_focus_pane_vc_g5

0x1abf,	// (0x00031496) input_focus_pane_vc_g6

0x1ac7,	// (0x0003149e) input_focus_pane_vc_g7

0x1acf,	// (0x000314a6) input_focus_pane_vc_g8

0x1ad7,	// (0x000314ae) input_focus_pane_vc_g9

0x0e0a,	// (0x000307e1) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0003f084) input_focus_pane_vc_g

0x57cd,	// (0x000351a4) data_form_pane_vc_ParamLimits

0x57cd,	// (0x000351a4) data_form_pane_vc

0x57d9,	// (0x000351b0) form_field_data_pane_vc_g1

0x70ad,	// (0x00036a84) form_field_data_pane_vc_t1_ParamLimits

0x70ad,	// (0x00036a84) form_field_data_pane_vc_t1

0x1a3c,	// (0x00031413) input_focus_pane_vc_ParamLimits

0x1a3c,	// (0x00031413) input_focus_pane_vc

0x61f0,	// (0x00035bc7) button_value_adjust_pane_cp3_vc

0x6fb2,	// (0x00036989) button_value_adjust_pane_cp5_vc

0x70c3,	// (0x00036a9a) form_field_data_pane_vc_ParamLimits

0x70c3,	// (0x00036a9a) form_field_data_pane_vc

0x61f8,	// (0x00035bcf) form_field_data_pane_vc_cp2

0x70da,	// (0x00036ab1) form_field_data_wide_pane_vc_ParamLimits

0x70da,	// (0x00036ab1) form_field_data_wide_pane_vc

0x70f0,	// (0x00036ac7) form_field_data_wide_pane_vc_cp2

0x70f8,	// (0x00036acf) form_field_popup_pane_vc_ParamLimits

0x70f8,	// (0x00036acf) form_field_popup_pane_vc

0x710f,	// (0x00036ae6) form_field_popup_wide_pane_vc_ParamLimits

0x710f,	// (0x00036ae6) form_field_popup_wide_pane_vc

0x7125,	// (0x00036afc) form_field_slider_pane_vc_ParamLimits

0x7125,	// (0x00036afc) form_field_slider_pane_vc

0x7138,	// (0x00036b0f) form_field_slider_wide_pane_vc_ParamLimits

0x7138,	// (0x00036b0f) form_field_slider_wide_pane_vc

0x31f6,	// (0x00032bcd) grid_touch_1_pane_ParamLimits

0x31f6,	// (0x00032bcd) grid_touch_1_pane

0x320a,	// (0x00032be1) grid_touch_2_pane_ParamLimits

0x320a,	// (0x00032be1) grid_touch_2_pane

0x714b,	// (0x00036b22) touch_pane_g1_ParamLimits

0x714b,	// (0x00036b22) touch_pane_g1

0x7159,	// (0x00036b30) cell_app_pane_cp_wide_ParamLimits

0x7159,	// (0x00036b30) cell_app_pane_cp_wide

0x7169,	// (0x00036b40) grid_popup_fast_wide_pane_ParamLimits

0x7169,	// (0x00036b40) grid_popup_fast_wide_pane

0x717d,	// (0x00036b54) scroll_pane_cp19_ParamLimits

0x717d,	// (0x00036b54) scroll_pane_cp19

0x0f57,	// (0x0003092e) bg_popup_window_pane_cp20

0x7191,	// (0x00036b68) listscroll_popup_fast_wide_pane

0x6200,	// (0x00035bd7) grid_indicator_nsta_pane

0x7199,	// (0x00036b70) clock_nsta_pane_g1

0x71a2,	// (0x00036b79) clock_nsta_pane_t1

0x3234,	// (0x00032c0b) cell_indicator_nsta_pane_ParamLimits

0x3234,	// (0x00032c0b) cell_indicator_nsta_pane

0x714b,	// (0x00036b22) cell_indicator_nsta_pane_g1

0x3251,	// (0x00032c28) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0003f480) cell_indicator_nsta_pane_g

0x71be,	// (0x00036b95) clock_nsta_pane_cp

0x71c6,	// (0x00036b9d) indicator_nsta_pane_cp

0x71cf,	// (0x00036ba6) nsta_clock_indic_pane_g1

0x12ca,	// (0x00030ca1) grid_indicator_pane

0x4c91,	// (0x00034668) scroll_pane_cp29

0x93de,	// (0x00038db5) indicator_nsta_pane_cp2_ParamLimits

0x93de,	// (0x00038db5) indicator_nsta_pane_cp2

0x1163,	// (0x00030b3a) main_apps_wheel_pane

0x58ed,	// (0x000352c4) form_midp_field_text_pane_ParamLimits

0x5a1a,	// (0x000353f1) scroll_bar_cp050_ParamLimits

0x7238,	// (0x00036c0f) cell_indicator_pane_ParamLimits

0x7238,	// (0x00036c0f) cell_indicator_pane

0x724e,	// (0x00036c25) cell_indicator_pane_g1

0x3266,	// (0x00032c3d) grid_wheel_folder_pane_ParamLimits

0x3266,	// (0x00032c3d) grid_wheel_folder_pane

0x3274,	// (0x00032c4b) list_wheel_apps_pane_ParamLimits

0x3274,	// (0x00032c4b) list_wheel_apps_pane

0x3280,	// (0x00032c57) main_apps_wheel_pane_g1_ParamLimits

0x3280,	// (0x00032c57) main_apps_wheel_pane_g1

0x328c,	// (0x00032c63) main_apps_wheel_pane_g2_ParamLimits

0x328c,	// (0x00032c63) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0003f49c) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0003f49c) main_apps_wheel_pane_g

0x3298,	// (0x00032c6f) main_apps_wheel_pane_t1_ParamLimits

0x3298,	// (0x00032c6f) main_apps_wheel_pane_t1

0x32aa,	// (0x00032c81) list_wheel_apps_pane_g1

0x32b2,	// (0x00032c89) list_wheel_apps_pane_g2

0x32ba,	// (0x00032c91) list_wheel_apps_pane_g3

0x32c2,	// (0x00032c99) list_wheel_apps_pane_g4

0x32ca,	// (0x00032ca1) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0003f4a1) list_wheel_apps_pane_g

0x1163,	// (0x00030b3a) navi_icon_text_pane

0x2757,	// (0x0003212e) aid_fill_nsta

0x7258,	// (0x00036c2f) navi_icon_text_pane_g1

0x7264,	// (0x00036c3b) navi_icon_text_pane_t1

0x4f06,	// (0x000348dd) list_set_graphic_pane_t1_ParamLimits

0x4f06,	// (0x000348dd) list_set_graphic_pane_t1

0x60f4,	// (0x00035acb) popup_midp_note_alarm_window_t6_ParamLimits

0x60f4,	// (0x00035acb) popup_midp_note_alarm_window_t6

0x6106,	// (0x00035add) popup_midp_note_alarm_window_t7_ParamLimits

0x6106,	// (0x00035add) popup_midp_note_alarm_window_t7

0x6118,	// (0x00035aef) popup_midp_note_alarm_window_t8_ParamLimits

0x6118,	// (0x00035aef) popup_midp_note_alarm_window_t8

0x612a,	// (0x00035b01) popup_midp_note_alarm_window_t9_ParamLimits

0x612a,	// (0x00035b01) popup_midp_note_alarm_window_t9

0x613c,	// (0x00035b13) popup_midp_note_alarm_window_t10_ParamLimits

0x613c,	// (0x00035b13) popup_midp_note_alarm_window_t10

0x614e,	// (0x00035b25) popup_midp_note_alarm_window_t11_ParamLimits

0x614e,	// (0x00035b25) popup_midp_note_alarm_window_t11

0x6160,	// (0x00035b37) scroll_pane_cp17_ParamLimits

0x6160,	// (0x00035b37) scroll_pane_cp17

0xa096,	// (0x00039a6d) volume_small_pane_cp_g1

0xa747,	// (0x0003a11e) volume_small_pane_cp_g2

0xa750,	// (0x0003a127) volume_small_pane_cp_g3

0xa759,	// (0x0003a130) volume_small_pane_cp_g4

0xa0c3,	// (0x00039a9a) volume_small_pane_cp_g5

0xa762,	// (0x0003a139) volume_small_pane_cp_g6

0xa76b,	// (0x0003a142) volume_small_pane_cp_g7

0xa774,	// (0x0003a14b) volume_small_pane_cp_g8

0xa77d,	// (0x0003a154) volume_small_pane_cp_g9

0xa786,	// (0x0003a15d) volume_small_pane_cp_g10

0x51b5,	// (0x00034b8c) midp_ticker_pane_g1_ParamLimits

0x51c1,	// (0x00034b98) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0003f14c) midp_ticker_pane_g_ParamLimits

0x51cd,	// (0x00034ba4) midp_ticker_pane_t1_ParamLimits

0x276d,	// (0x00032144) aid_fill_nsta_2

0x5a06,	// (0x000353dd) list_form2_midp_pane

0x69aa,	// (0x00036381) midp_editing_number_pane_ParamLimits

0x69b6,	// (0x0003638d) midp_ticker_pane_ParamLimits

0x7276,	// (0x00036c4d) form2_midp_field_pane

0x727e,	// (0x00036c55) scroll_pane_cp51

0x729e,	// (0x00036c75) form2_midp_button_pane_ParamLimits

0x729e,	// (0x00036c75) form2_midp_button_pane

0x72b0,	// (0x00036c87) form2_midp_content_pane_ParamLimits

0x72b0,	// (0x00036c87) form2_midp_content_pane

0x72ca,	// (0x00036ca1) form2_midp_field_choice_group_pane

0x72d2,	// (0x00036ca9) form2_midp_field_pane_g1

0x72da,	// (0x00036cb1) form2_midp_field_pane_g2

0x72e2,	// (0x00036cb9) form2_midp_field_pane_g3

0x72ea,	// (0x00036cc1) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0003f4c6) form2_midp_field_pane_g

0x72f2,	// (0x00036cc9) form2_midp_gauge_slider_pane

0x72fa,	// (0x00036cd1) form2_midp_gauge_wait_pane

0x7302,	// (0x00036cd9) form2_midp_image_pane_ParamLimits

0x7302,	// (0x00036cd9) form2_midp_image_pane

0x731d,	// (0x00036cf4) form2_midp_label_pane_ParamLimits

0x731d,	// (0x00036cf4) form2_midp_label_pane

0x32ff,	// (0x00032cd6) form2_midp_label_pane_cp_ParamLimits

0x32ff,	// (0x00032cd6) form2_midp_label_pane_cp

0x7336,	// (0x00036d0d) form2_midp_string_pane_ParamLimits

0x7336,	// (0x00036d0d) form2_midp_string_pane

0x0c1a,	// (0x000305f1) form2_midp_text_pane_ParamLimits

0x0c1a,	// (0x000305f1) form2_midp_text_pane

0x7348,	// (0x00036d1f) form2_midp_time_pane

0x7358,	// (0x00036d2f) input_focus_pane_cp51_ParamLimits

0x7358,	// (0x00036d2f) input_focus_pane_cp51

0x7370,	// (0x00036d47) form2_midp_label_pane_t1_ParamLimits

0x7370,	// (0x00036d47) form2_midp_label_pane_t1

0x0c33,	// (0x0003060a) form2_mdip_text_pane_t1_ParamLimits

0x0c33,	// (0x0003060a) form2_mdip_text_pane_t1

0xdf2a,	// (0x0003d901) form2_midp_time_pane_t1

0x73b8,	// (0x00036d8f) form2_midp_gauge_slider_pane_t1

0x331e,	// (0x00032cf5) form2_midp_gauge_slider_pane_t2

0x3330,	// (0x00032d07) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0003f4cf) form2_midp_gauge_slider_pane_t

0x73ca,	// (0x00036da1) form2_midp_slider_pane

0x73d6,	// (0x00036dad) form2_midp_gauge_wait_pane_t1

0x73e4,	// (0x00036dbb) form2_midp_wait_pane_ParamLimits

0x73e4,	// (0x00036dbb) form2_midp_wait_pane

0x2b9f,	// (0x00032576) list_single_2graphic_pane_cp4_ParamLimits

0x2b9f,	// (0x00032576) list_single_2graphic_pane_cp4

0x3342,	// (0x00032d19) list_single_midp_graphic_pane_cp_ParamLimits

0x3342,	// (0x00032d19) list_single_midp_graphic_pane_cp

0x0f57,	// (0x0003092e) list_highlight_pane_cp20

0x740f,	// (0x00036de6) list_single_2graphic_pane_g1_cp4

0x6a23,	// (0x000363fa) list_single_2graphic_pane_g2_cp4

0x7417,	// (0x00036dee) list_single_2graphic_pane_t1_cp4

0x1163,	// (0x00030b3a) list_highlight_pane_cp21

0x7426,	// (0x00036dfd) list_single_midp_graphic_pane_g4_cp

0x7435,	// (0x00036e0c) list_single_midp_graphic_pane_t1_cp

0x3360,	// (0x00032d37) form2_mdip_string_pane_t1_ParamLimits

0x3360,	// (0x00032d37) form2_mdip_string_pane_t1

0x0f57,	// (0x0003092e) bg_wml_button_pane_cp2

0x0e0a,	// (0x000307e1) form2_midp_image_pane_g1

0xd76a,	// (0x0003d141) list_double_large_graphic_pane_g5_ParamLimits

0xd76a,	// (0x0003d141) list_double_large_graphic_pane_g5

0x1f90,	// (0x00031967) midp_form_pane_ParamLimits

0x1163,	// (0x00030b3a) main_apps_wheel_pane_ParamLimits

0x24f9,	// (0x00031ed0) popup_preview_window_ParamLimits

0x24f9,	// (0x00031ed0) popup_preview_window

0x549d,	// (0x00034e74) popup_touch_info_window_ParamLimits

0x549d,	// (0x00034e74) popup_touch_info_window

0x54bb,	// (0x00034e92) popup_touch_menu_window_ParamLimits

0x54bb,	// (0x00034e92) popup_touch_menu_window

0x0e00,	// (0x000307d7) bg_popup_sub_pane_cp6

0x744a,	// (0x00036e21) list_touch_menu_pane

0x7452,	// (0x00036e29) list_single_touch_menu_pane_ParamLimits

0x7452,	// (0x00036e29) list_single_touch_menu_pane

0x7469,	// (0x00036e40) list_single_touch_menu_pane_t1

0x1163,	// (0x00030b3a) bg_popup_sub_pane_cp7_ParamLimits

0x1163,	// (0x00030b3a) bg_popup_sub_pane_cp7

0x7477,	// (0x00036e4e) heading_sub_pane

0x747f,	// (0x00036e56) list_touch_info_pane_ParamLimits

0x747f,	// (0x00036e56) list_touch_info_pane

0x748e,	// (0x00036e65) list_single_touch_info_pane_ParamLimits

0x748e,	// (0x00036e65) list_single_touch_info_pane

0x749f,	// (0x00036e76) list_single_touch_info_pane_t1

0x74ad,	// (0x00036e84) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0003f4dd) list_single_touch_info_pane_t

0x518b,	// (0x00034b62) bg_popup_heading_pane_cp

0x74bb,	// (0x00036e92) heading_sub_pane_t1

0x5793,	// (0x0003516a) bg_popup_preview_window_pane_cp_ParamLimits

0x5793,	// (0x0003516a) bg_popup_preview_window_pane_cp

0x7477,	// (0x00036e4e) heading_preview_pane

0x747f,	// (0x00036e56) list_preview_pane_ParamLimits

0x747f,	// (0x00036e56) list_preview_pane

0x74c9,	// (0x00036ea0) popup_preview_window_g1

0x748e,	// (0x00036e65) list_single_preview_pane_ParamLimits

0x748e,	// (0x00036e65) list_single_preview_pane

0x74d1,	// (0x00036ea8) list_single_preview_pane_g1

0x74d9,	// (0x00036eb0) list_single_preview_pane_t1

0x749f,	// (0x00036e76) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0003f4e2) list_single_preview_pane_t

0x74e7,	// (0x00036ebe) bg_popup_heading_pane_cp2_ParamLimits

0x74e7,	// (0x00036ebe) bg_popup_heading_pane_cp2

0x74fd,	// (0x00036ed4) heading_preview_pane_g1

0x7505,	// (0x00036edc) heading_preview_pane_t1_ParamLimits

0x7505,	// (0x00036edc) heading_preview_pane_t1

0x12fa,	// (0x00030cd1) soft_indicator_pane_t1_ParamLimits

0x1951,	// (0x00031328) scroll_pane_ParamLimits

0x4b96,	// (0x0003456d) scroll_sc2_left_pane

0x4b8d,	// (0x00034564) scroll_sc2_right_pane

0x4bb5,	// (0x0003458c) scroll_bg_pane_g1_ParamLimits

0x4bca,	// (0x000345a1) scroll_bg_pane_g2_ParamLimits

0x4be2,	// (0x000345b9) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0003f0db) scroll_bg_pane_g_ParamLimits

0x4bb5,	// (0x0003458c) scroll_handle_pane_g1_ParamLimits

0x4c04,	// (0x000345db) scroll_handle_pane_g2_ParamLimits

0x4be2,	// (0x000345b9) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0003f0e2) scroll_handle_pane_g_ParamLimits

0x53f5,	// (0x00034dcc) popup_choice_list_window_ParamLimits

0x53f5,	// (0x00034dcc) popup_choice_list_window

0x55ef,	// (0x00034fc6) choice_list_pane

0x5665,	// (0x0003503c) cell_toolbar_pane_t1

0x568d,	// (0x00035064) toolbar_button_pane_ParamLimits

0x670b,	// (0x000360e2) ai_gene_pane_1_t2_ParamLimits

0x670b,	// (0x000360e2) ai_gene_pane_1_t2

0x0001,

0xf91c,	// (0x0003f2f3) ai_gene_pane_1_t_ParamLimits

0xf91c,	// (0x0003f2f3) ai_gene_pane_1_t

0x7522,	// (0x00036ef9) scroll_sc2_left_pane_g1

0x7522,	// (0x00036ef9) scroll_sc2_right_pane_g1

0x4ac9,	// (0x000344a0) bg_popup_sub_pane_cp10

0x752c,	// (0x00036f03) list_choice_list_pane

0x7543,	// (0x00036f1a) list_single_choice_list_pane_ParamLimits

0x7543,	// (0x00036f1a) list_single_choice_list_pane

0x7557,	// (0x00036f2e) list_single_choice_list_pane_g1

0x1bbb,	// (0x00031592) list_single_choice_list_pane_t1_ParamLimits

0x1bbb,	// (0x00031592) list_single_choice_list_pane_t1

0x755f,	// (0x00036f36) choice_list_pane_g1

0x7567,	// (0x00036f3e) choice_list_pane_t1

0x0e00,	// (0x000307d7) input_focus_pane_cp11

0x4ae2,	// (0x000344b9) title_pane_stacon_g2_ParamLimits

0x4ae2,	// (0x000344b9) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0003f0c1) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0003f0c1) title_pane_stacon_g

0x518b,	// (0x00034b62) cursor_press_pane

0x2260,	// (0x00031c37) popup_fep_hwr_window_ParamLimits

0x2260,	// (0x00031c37) popup_fep_hwr_window

0x5447,	// (0x00034e1e) popup_fep_vkb_window_ParamLimits

0x5447,	// (0x00034e1e) popup_fep_vkb_window

0x7575,	// (0x00036f4c) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0003f50b) fep_vkb_side_pane_g_ParamLimits

0xa7c4,	// (0x0003a19b) fep_hwr_candidate_pane_ParamLimits

0xa7c4,	// (0x0003a19b) fep_hwr_candidate_pane

0xa7ec,	// (0x0003a1c3) fep_hwr_side_pane_ParamLimits

0xa7ec,	// (0x0003a1c3) fep_hwr_side_pane

0xa80c,	// (0x0003a1e3) fep_hwr_top_pane_ParamLimits

0xa80c,	// (0x0003a1e3) fep_hwr_top_pane

0xa824,	// (0x0003a1fb) fep_hwr_write_pane_ParamLimits

0xa824,	// (0x0003a1fb) fep_hwr_write_pane

0xfb34,	// (0x0003f50b) fep_vkb_side_pane_g

0x758f,	// (0x00036f66) fep_hwr_top_pane_g1

0x757d,	// (0x00036f54) fep_hwr_top_pane_g2

0xa85e,	// (0x0003a235) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0003f4e7) fep_hwr_top_pane_g

0xa873,	// (0x0003a24a) fep_hwr_top_text_pane

0x4cfe,	// (0x000346d5) fep_hwr_top_text_pane_g1

0x75c5,	// (0x00036f9c) fep_hwr_top_text_pane_t1

0xa961,	// (0x0003a338) fep_hwr_candidate_pane_g1

0x778e,	// (0x00037165) fep_vkb_keypad_pane_g3_ParamLimits

0x778e,	// (0x00037165) fep_vkb_keypad_pane_g3

0x77b0,	// (0x00037187) fep_vkb_keypad_pane_g4_ParamLimits

0x77b0,	// (0x00037187) fep_vkb_keypad_pane_g4

0x781f,	// (0x000371f6) fep_vkb_bottom_pane_g2_ParamLimits

0x781f,	// (0x000371f6) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0003f512) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0003f512) fep_vkb_bottom_pane_g

0x7522,	// (0x00036ef9) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0003f51c) cell_vkb_side_pane_g

0x7863,	// (0x0003723a) cell_vkb_side_pane_t1

0x7871,	// (0x00037248) cell_vkb_side_pane_t1_copy1

0x7522,	// (0x00036ef9) bg_fep_vkb_candidate_pane_g2

0x793f,	// (0x00037316) cell_vkb_candidate_pane_ParamLimits

0x75d3,	// (0x00036faa) aid_size_cell_vkb_ParamLimits

0x75d3,	// (0x00036faa) aid_size_cell_vkb

0x793f,	// (0x00037316) cell_vkb_candidate_pane

0xa988,	// (0x0003a35f) bg_popup_fep_shadow_pane_g1

0x763d,	// (0x00037014) fep_vkb_bottom_pane_ParamLimits

0x763d,	// (0x00037014) fep_vkb_bottom_pane

0x767a,	// (0x00037051) fep_vkb_candidate_pane_ParamLimits

0x767a,	// (0x00037051) fep_vkb_candidate_pane

0x7696,	// (0x0003706d) fep_vkb_keypad_pane_ParamLimits

0x7696,	// (0x0003706d) fep_vkb_keypad_pane

0x76ca,	// (0x000370a1) fep_vkb_side_pane_ParamLimits

0x76ca,	// (0x000370a1) fep_vkb_side_pane

0x76f6,	// (0x000370cd) fep_vkb_top_pane_ParamLimits

0x76f6,	// (0x000370cd) fep_vkb_top_pane

0x7722,	// (0x000370f9) fep_vkb_top_pane_g1_ParamLimits

0x7722,	// (0x000370f9) fep_vkb_top_pane_g1

0x7731,	// (0x00037108) fep_vkb_top_pane_g2_ParamLimits

0x7731,	// (0x00037108) fep_vkb_top_pane_g2

0x7740,	// (0x00037117) fep_vkb_top_pane_g3_ParamLimits

0x7740,	// (0x00037117) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0003f502) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0003f502) fep_vkb_top_pane_g

0x775e,	// (0x00037135) fep_vkb_top_text_pane_ParamLimits

0x775e,	// (0x00037135) fep_vkb_top_text_pane

0x3427,	// (0x00032dfe) fep_vkb_side_pane_g1_ParamLimits

0x3427,	// (0x00032dfe) fep_vkb_side_pane_g1

0x777d,	// (0x00037154) grid_vkb_side_pane_ParamLimits

0x777d,	// (0x00037154) grid_vkb_side_pane

0xa990,	// (0x0003a367) bg_popup_fep_shadow_pane_g2

0xa999,	// (0x0003a370) bg_popup_fep_shadow_pane_g3

0xa9a1,	// (0x0003a378) bg_popup_fep_shadow_pane_g4

0xa9aa,	// (0x0003a381) bg_popup_fep_shadow_pane_g5

0xa9b2,	// (0x0003a389) bg_popup_fep_shadow_pane_g6

0xa9ba,	// (0x0003a391) bg_popup_fep_shadow_pane_g7

0x1aaf,	// (0x00031486) bg_popup_fep_shadow_pane_g8

0x77ce,	// (0x000371a5) grid_vkb_keypad_number_pane_ParamLimits

0x77ce,	// (0x000371a5) grid_vkb_keypad_number_pane

0x77de,	// (0x000371b5) grid_vkb_keypad_pane_ParamLimits

0x77de,	// (0x000371b5) grid_vkb_keypad_pane

0x7804,	// (0x000371db) fep_vkb_bottom_pane_g1_ParamLimits

0x7804,	// (0x000371db) fep_vkb_bottom_pane_g1

0x782d,	// (0x00037204) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x782d,	// (0x00037204) grid_vkb_keypad_bottom_left_pane

0x7842,	// (0x00037219) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7842,	// (0x00037219) grid_vkb_keypad_bottom_right_pane

0x7857,	// (0x0003722e) fep_vkb_top_text_pane_g1

0x346e,	// (0x00032e45) fep_vkb_top_text_pane_t1

0x3480,	// (0x00032e57) cell_vkb_side_pane_ParamLimits

0x3480,	// (0x00032e57) cell_vkb_side_pane

0x7522,	// (0x00036ef9) cell_vkb_side_pane_g1

0x787f,	// (0x00037256) cell_vkb_keypad_pane_ParamLimits

0x787f,	// (0x00037256) cell_vkb_keypad_pane

0x78ec,	// (0x000372c3) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0003f52f) bg_popup_fep_shadow_pane_g

0xa9ca,	// (0x0003a3a1) cell_hwr_side_pane_g1

0xa9ca,	// (0x0003a3a1) cell_hwr_side_pane_g2

0x78f6,	// (0x000372cd) cell_vkb_keypad_pane_t1

0x3496,	// (0x00032e6d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x3496,	// (0x00032e6d) cell_vkb_keypad_bottom_left_pane

0x34ab,	// (0x00032e82) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x34ab,	// (0x00032e82) cell_vkb_keypad_bottom_right_pane

0x7522,	// (0x00036ef9) cell_vkb_keypad_bottom_left_pane_g1

0x7522,	// (0x00036ef9) cell_vkb_keypad_bottom_right_pane_g1

0x7904,	// (0x000372db) cell_vkb_keypad_number_pane_ParamLimits

0x7904,	// (0x000372db) cell_vkb_keypad_number_pane

0x7923,	// (0x000372fa) cell_vkb_keypad_number_pane_g1

0x792d,	// (0x00037304) cell_vkb_keypad_number_pane_g2

0x7936,	// (0x0003730d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0003f521) cell_vkb_keypad_number_pane_g

0x78f6,	// (0x000372cd) cell_vkb_keypad_number_pane_t1

0x7958,	// (0x0003732f) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0003f542) cell_hwr_side_pane_g

0x7971,	// (0x00037348) cell_hwr_side_pane_t1

0xa9d4,	// (0x0003a3ab) cell_hwr_side_pane_t1_copy1

0xa9e2,	// (0x0003a3b9) cell_hwr_candidate_pane_g1

0xaa11,	// (0x0003a3e8) cell_hwr_candidate_pane_t1

0x7522,	// (0x00036ef9) cell_vkb_candidate_pane_g2

0x79f7,	// (0x000373ce) cell_vkb_candidate_pane_t1

0xa78f,	// (0x0003a166) bg_popup_fep_shadow_pane_ParamLimits

0xa78f,	// (0x0003a166) bg_popup_fep_shadow_pane

0xa83e,	// (0x0003a215) bg_fep_hwr_top_pane_g4

0x75a1,	// (0x00036f78) bg_hwr_side_pane_g1_ParamLimits

0x75a1,	// (0x00036f78) bg_hwr_side_pane_g1

0xf13b,	// (0x0003eb12) cell_hwr_side_pane_ParamLimits

0xf13b,	// (0x0003eb12) cell_hwr_side_pane

0xa8ea,	// (0x0003a2c1) fep_hwr_write_pane_g1_ParamLimits

0xa8ea,	// (0x0003a2c1) fep_hwr_write_pane_g1

0xa8f7,	// (0x0003a2ce) fep_hwr_write_pane_g2_ParamLimits

0xa8f7,	// (0x0003a2ce) fep_hwr_write_pane_g2

0xa904,	// (0x0003a2db) fep_hwr_write_pane_g3_ParamLimits

0xa904,	// (0x0003a2db) fep_hwr_write_pane_g3

0xf15b,	// (0x0003eb32) fep_hwr_write_pane_g4_ParamLimits

0xf15b,	// (0x0003eb32) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0003f4ee) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0003f4ee) fep_hwr_write_pane_g

0xa83e,	// (0x0003a215) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa83e,	// (0x0003a215) bg_fep_hwr_candidate_pane_g2

0xa927,	// (0x0003a2fe) cell_hwr_candidate_pane_ParamLimits

0xa927,	// (0x0003a2fe) cell_hwr_candidate_pane

0xa961,	// (0x0003a338) fep_hwr_candidate_pane_g1_ParamLimits

0x7601,	// (0x00036fd8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7601,	// (0x00036fd8) bg_popup_fep_shadow_pane_cp2

0x7750,	// (0x00037127) fep_vkb_top_pane_g4_ParamLimits

0x7750,	// (0x00037127) fep_vkb_top_pane_g4

0x776f,	// (0x00037146) fep_vkb_side_pane_g2_ParamLimits

0x776f,	// (0x00037146) fep_vkb_side_pane_g2

0x0903,	// (0x000302da) list_setting_pane_t4_ParamLimits

0x0903,	// (0x000302da) list_setting_pane_t4

0x099d,	// (0x00030374) list_setting_number_pane_t5_ParamLimits

0x099d,	// (0x00030374) list_setting_number_pane_t5

0x1ec0,	// (0x00031897) list_double_heading_pane_cp2_ParamLimits

0x1ec0,	// (0x00031897) list_double_heading_pane_cp2

0x5000,	// (0x000349d7) list_double_heading_pane_g1_cp2_ParamLimits

0x5000,	// (0x000349d7) list_double_heading_pane_g1_cp2

0x7a05,	// (0x000373dc) list_double_heading_pane_g2_cp2_ParamLimits

0x7a05,	// (0x000373dc) list_double_heading_pane_g2_cp2

0x7a19,	// (0x000373f0) list_double_heading_pane_t1_cp2_ParamLimits

0x7a19,	// (0x000373f0) list_double_heading_pane_t1_cp2

0x7a2f,	// (0x00037406) list_double_heading_pane_t2_cp2_ParamLimits

0x7a2f,	// (0x00037406) list_double_heading_pane_t2_cp2

0x0dea,	// (0x000307c1) aid_value_unit2

0x8b82,	// (0x00038559) popup_preview_fixed_window

0x14b8,	// (0x00030e8f) bg_popup_preview_window_pane_cp02

0x7a41,	// (0x00037418) list_preview_fixed_pane

0x7a87,	// (0x0003745e) list_empty_pane_fp_ParamLimits

0x7a87,	// (0x0003745e) list_empty_pane_fp

0x7a87,	// (0x0003745e) list_single_cale_day_pane_fp_ParamLimits

0x7a87,	// (0x0003745e) list_single_cale_day_pane_fp

0x7a87,	// (0x0003745e) list_single_graphic_heading_pane_fp_ParamLimits

0x7a87,	// (0x0003745e) list_single_graphic_heading_pane_fp

0x7a87,	// (0x0003745e) list_single_graphic_pane_fp_ParamLimits

0x7a87,	// (0x0003745e) list_single_graphic_pane_fp

0x7a87,	// (0x0003745e) list_single_heading_pane_fp_ParamLimits

0x7a87,	// (0x0003745e) list_single_heading_pane_fp

0x7a87,	// (0x0003745e) list_single_pane_fp_ParamLimits

0x7a87,	// (0x0003745e) list_single_pane_fp

0x7a9b,	// (0x00037472) list_single_pane_fp_g1_ParamLimits

0x7a9b,	// (0x00037472) list_single_pane_fp_g1

0xd5d0,	// (0x0003cfa7) list_single_pane_fp_g2_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_pane_fp_g2

0xe25a,	// (0x0003dc31) list_single_pane_fp_g3_ParamLimits

0xe25a,	// (0x0003dc31) list_single_pane_fp_g3

0x7aa7,	// (0x0003747e) list_single_pane_fp_g4_ParamLimits

0x7aa7,	// (0x0003747e) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0003f555) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003f555) list_single_pane_fp_g

0xdf3d,	// (0x0003d914) list_single_pane_fp_t1_ParamLimits

0xdf3d,	// (0x0003d914) list_single_pane_fp_t1

0xdf54,	// (0x0003d92b) list_single_graphic_pane_fp_g1_ParamLimits

0xdf54,	// (0x0003d92b) list_single_graphic_pane_fp_g1

0x7a9b,	// (0x00037472) list_single_graphic_pane_fp_g2_ParamLimits

0x7a9b,	// (0x00037472) list_single_graphic_pane_fp_g2

0xd5d0,	// (0x0003cfa7) list_single_graphic_pane_fp_g3_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_graphic_pane_fp_g3

0xe25a,	// (0x0003dc31) list_single_graphic_pane_fp_g4_ParamLimits

0xe25a,	// (0x0003dc31) list_single_graphic_pane_fp_g4

0x7aa7,	// (0x0003747e) list_single_graphic_pane_fp_g5_ParamLimits

0x7aa7,	// (0x0003747e) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0003f55e) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0003f55e) list_single_graphic_pane_fp_g

0xdf60,	// (0x0003d937) list_single_graphic_pane_fp_t1_ParamLimits

0xdf60,	// (0x0003d937) list_single_graphic_pane_fp_t1

0xdf54,	// (0x0003d92b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xdf54,	// (0x0003d92b) list_single_graphic_heading_pane_fp_g1

0x7a9b,	// (0x00037472) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a9b,	// (0x00037472) list_single_graphic_heading_pane_fp_g2

0xd5d0,	// (0x0003cfa7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_graphic_heading_pane_fp_g3

0xe25a,	// (0x0003dc31) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe25a,	// (0x0003dc31) list_single_graphic_heading_pane_fp_g4

0x7aa7,	// (0x0003747e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7aa7,	// (0x0003747e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003f55e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003f55e) list_single_graphic_heading_pane_fp_g

0xdf76,	// (0x0003d94d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdf76,	// (0x0003d94d) list_single_graphic_heading_pane_fp_t1

0xdf8c,	// (0x0003d963) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdf8c,	// (0x0003d963) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0003f569) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0003f569) list_single_graphic_heading_pane_fp_t

0xdf9e,	// (0x0003d975) list_single_cale_day_pane_fp_g1_ParamLimits

0xdf9e,	// (0x0003d975) list_single_cale_day_pane_fp_g1

0x7ab3,	// (0x0003748a) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ab3,	// (0x0003748a) list_single_cale_day_pane_fp_g2

0xe26e,	// (0x0003dc45) list_single_cale_day_pane_fp_g3_ParamLimits

0xe26e,	// (0x0003dc45) list_single_cale_day_pane_fp_g3

0xe296,	// (0x0003dc6d) list_single_cale_day_pane_fp_g4_ParamLimits

0xe296,	// (0x0003dc6d) list_single_cale_day_pane_fp_g4

0xe2ba,	// (0x0003dc91) list_single_cale_day_pane_fp_g5_ParamLimits

0xe2ba,	// (0x0003dc91) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0003f56e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0003f56e) list_single_cale_day_pane_fp_g

0xdfd6,	// (0x0003d9ad) list_single_cale_day_pane_fp_t1_ParamLimits

0xdfd6,	// (0x0003d9ad) list_single_cale_day_pane_fp_t1

0xdffc,	// (0x0003d9d3) list_single_cale_day_pane_fp_t2_ParamLimits

0xdffc,	// (0x0003d9d3) list_single_cale_day_pane_fp_t2

0xe015,	// (0x0003d9ec) list_single_cale_day_pane_fp_t3_ParamLimits

0xe015,	// (0x0003d9ec) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0003f579) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0003f579) list_single_cale_day_pane_fp_t

0x7a9b,	// (0x00037472) list_empty_pane_fp_g1_ParamLimits

0x7a9b,	// (0x00037472) list_empty_pane_fp_g1

0xe02e,	// (0x0003da05) list_empty_pane_fp_t1

0xe03c,	// (0x0003da13) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0003f580) list_empty_pane_fp_t

0x7a9b,	// (0x00037472) list_single_heading_pane_fp_g1_ParamLimits

0x7a9b,	// (0x00037472) list_single_heading_pane_fp_g1

0xd5d0,	// (0x0003cfa7) list_single_heading_pane_fp_g2_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_heading_pane_fp_g2

0xe25a,	// (0x0003dc31) list_single_heading_pane_fp_g3_ParamLimits

0xe25a,	// (0x0003dc31) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0003f585) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0003f585) list_single_heading_pane_fp_g

0xe04a,	// (0x0003da21) list_single_heading_pane_fp_t1_ParamLimits

0xe04a,	// (0x0003da21) list_single_heading_pane_fp_t1

0xe05c,	// (0x0003da33) list_single_heading_pane_fp_t2_ParamLimits

0xe05c,	// (0x0003da33) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0003f58c) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0003f58c) list_single_heading_pane_fp_t

0x1c13,	// (0x000315ea) aid_size_cell_fast

0x142d,	// (0x00030e04) soft_indicator_pane_cp1_t1

0x1c50,	// (0x00031627) cell_app_pane_cp2_ParamLimits

0x1c50,	// (0x00031627) cell_app_pane_cp2

0xa7b1,	// (0x0003a188) fep_hwr_candidate_drop_down_list_pane

0xa97b,	// (0x0003a352) fep_hwr_candidate_pane_g3_ParamLimits

0xa97b,	// (0x0003a352) fep_hwr_candidate_pane_g3

0x44dd,	// (0x00033eb4) fep_hwr_candidate_pane_g4_ParamLimits

0x44dd,	// (0x00033eb4) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0003f4fb) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0003f4fb) fep_hwr_candidate_pane_g

0x7669,	// (0x00037040) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7669,	// (0x00037040) fep_vkb_candidate_drop_down_list_pane

0x7960,	// (0x00037337) fep_vkb_candidate_pane_g3

0x7968,	// (0x0003733f) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0003f528) fep_vkb_candidate_pane_g

0xa9e2,	// (0x0003a3b9) cell_hwr_candidate_pane_g1_ParamLimits

0xa9f0,	// (0x0003a3c7) cell_hwr_candidate_pane_g3_ParamLimits

0xa9f0,	// (0x0003a3c7) cell_hwr_candidate_pane_g3

0xbbca,	// (0x0003b5a1) cell_hwr_candidate_pane_g4_ParamLimits

0xbbca,	// (0x0003b5a1) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0003f547) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0003f547) cell_hwr_candidate_pane_g

0x79c1,	// (0x00037398) cell_vkb_candidate_pane_g3_ParamLimits

0x79c1,	// (0x00037398) cell_vkb_candidate_pane_g3

0x79dc,	// (0x000373b3) cell_vkb_candidate_pane_g4_ParamLimits

0x79dc,	// (0x000373b3) cell_vkb_candidate_pane_g4

0x7abf,	// (0x00037496) cell_app_pane_cp2_g1_ParamLimits

0x7abf,	// (0x00037496) cell_app_pane_cp2_g1

0x7add,	// (0x000374b4) cell_app_pane_cp2_g2_ParamLimits

0x7add,	// (0x000374b4) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0003f591) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0003f591) cell_app_pane_cp2_g

0x7ae9,	// (0x000374c0) cell_app_pane_cp2_t1_ParamLimits

0x7ae9,	// (0x000374c0) cell_app_pane_cp2_t1

0x1a3c,	// (0x00031413) grid_highlight_pane_cp1_ParamLimits

0x1a3c,	// (0x00031413) grid_highlight_pane_cp1

0xaa2e,	// (0x0003a405) cell_hwr_candidate_pane_cp1_ParamLimits

0xaa2e,	// (0x0003a405) cell_hwr_candidate_pane_cp1

0xa9e2,	// (0x0003a3b9) fep_hwr_candidate_drop_down_list_pane_g1

0xaa4c,	// (0x0003a423) fep_hwr_candidate_drop_down_list_pane_g2

0xaa59,	// (0x0003a430) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0003f596) fep_hwr_candidate_drop_down_list_pane_g

0xaa66,	// (0x0003a43d) fep_hwr_candidate_drop_down_list_scroll_pane

0xaa6f,	// (0x0003a446) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xaa6f,	// (0x0003a446) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xaa7c,	// (0x0003a453) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xaa7c,	// (0x0003a453) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xaa89,	// (0x0003a460) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xaa89,	// (0x0003a460) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xaa96,	// (0x0003a46d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xaa96,	// (0x0003a46d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xaab1,	// (0x0003a488) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xaab1,	// (0x0003a488) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xaacc,	// (0x0003a4a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xaacc,	// (0x0003a4a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xaae7,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xaae7,	// (0x0003a4be) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xab02,	// (0x0003a4d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xab02,	// (0x0003a4d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0003f59d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0003f59d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x34c6,	// (0x00032e9d) cell_vkb_candidate_pane_cp1_ParamLimits

0x34c6,	// (0x00032e9d) cell_vkb_candidate_pane_cp1

0x7750,	// (0x00037127) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7750,	// (0x00037127) fep_vkb_candidate_drop_down_list_pane_g1

0x7afb,	// (0x000374d2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7afb,	// (0x000374d2) fep_vkb_candidate_drop_down_list_pane_g2

0x7b08,	// (0x000374df) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7b08,	// (0x000374df) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0003f5ae) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0003f5ae) fep_vkb_candidate_drop_down_list_pane_g

0x7b15,	// (0x000374ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7b15,	// (0x000374ec) fep_vkb_candidate_drop_down_list_scroll_pane

0x7b22,	// (0x000374f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7b22,	// (0x000374f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7b2f,	// (0x00037506) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7b2f,	// (0x00037506) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7b3b,	// (0x00037512) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b3b,	// (0x00037512) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x797f,	// (0x00037356) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x797f,	// (0x00037356) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x79a0,	// (0x00037377) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x79a0,	// (0x00037377) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7b47,	// (0x0003751e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b47,	// (0x0003751e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b68,	// (0x0003753f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b68,	// (0x0003753f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b89,	// (0x00037560) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b89,	// (0x00037560) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0003f5b5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0003f5b5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x1006,	// (0x000309dd) title_pane_g1_ParamLimits

0x101d,	// (0x000309f4) title_pane_g2_ParamLimits

0xf56a,	// (0x0003ef41) title_pane_g_ParamLimits

0x4cf6,	// (0x000346cd) aid_call2_pane

0x4cee,	// (0x000346c5) aid_call_pane

0x4cfe,	// (0x000346d5) popup_clock_analogue_window_g1

0x4cfe,	// (0x000346d5) popup_clock_analogue_window_g2

0x922d,	// (0x00038c04) popup_clock_analogue_window_g3

0x9236,	// (0x00038c0d) popup_clock_analogue_window_g4

0x0e0a,	// (0x000307e1) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0003f0f0) popup_clock_analogue_window_g

0x923e,	// (0x00038c15) popup_clock_analogue_window_t1

0x9282,	// (0x00038c59) clock_digital_number_pane_ParamLimits

0x9282,	// (0x00038c59) clock_digital_number_pane

0x928e,	// (0x00038c65) clock_digital_number_pane_cp02_ParamLimits

0x928e,	// (0x00038c65) clock_digital_number_pane_cp02

0x929a,	// (0x00038c71) clock_digital_number_pane_cp03_ParamLimits

0x929a,	// (0x00038c71) clock_digital_number_pane_cp03

0x92a6,	// (0x00038c7d) clock_digital_number_pane_cp04_ParamLimits

0x92a6,	// (0x00038c7d) clock_digital_number_pane_cp04

0x92b2,	// (0x00038c89) clock_digital_separator_pane_ParamLimits

0x92b2,	// (0x00038c89) clock_digital_separator_pane

0x92be,	// (0x00038c95) popup_clock_digital_window_t1_ParamLimits

0x92be,	// (0x00038c95) popup_clock_digital_window_t1

0x0e0a,	// (0x000307e1) clock_digital_number_pane_g1

0x0e0a,	// (0x000307e1) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0003f0fb) clock_digital_number_pane_g

0x0e0a,	// (0x000307e1) clock_digital_separator_pane_g1

0x0e0a,	// (0x000307e1) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0003f0fb) clock_digital_separator_pane_g

0x2757,	// (0x0003212e) aid_fill_nsta_ParamLimits

0x286e,	// (0x00032245) indicator_nsta_pane_ParamLimits

0x5598,	// (0x00034f6f) popup_clock_analogue_window

0x5598,	// (0x00034f6f) popup_clock_digital_window

0x6200,	// (0x00035bd7) grid_indicator_nsta_pane_ParamLimits

0x71b0,	// (0x00036b87) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0003f47b) clock_nsta_pane_t

0x9196,	// (0x00038b6d) aid_size_max_handle

0xee2a,	// (0x0003e801) aid_size_min_handle

0x518b,	// (0x00034b62) editor_scroll_pane

0x7ba4,	// (0x0003757b) ex_editor_pane

0x1b97,	// (0x0003156e) scroll_pane_cp13

0x197e,	// (0x00031355) scroll_pane_cp14

0x4d28,	// (0x000346ff) scroll_pane_cp36

0x1ecc,	// (0x000318a3) list_single_graphic_hl_pane_cp2_ParamLimits

0x1ecc,	// (0x000318a3) list_single_graphic_hl_pane_cp2

0x3083,	// (0x00032a5a) list_single_graphic_hl_pane_ParamLimits

0x3083,	// (0x00032a5a) list_single_graphic_hl_pane

0xe072,	// (0x0003da49) aid_size_min_hl_cp1

0x7bac,	// (0x00037583) list_highlight_pane_cp34_ParamLimits

0x7bac,	// (0x00037583) list_highlight_pane_cp34

0x7bbd,	// (0x00037594) list_single_graphic_hl_pane_g1_ParamLimits

0x7bbd,	// (0x00037594) list_single_graphic_hl_pane_g1

0x0c4c,	// (0x00030623) list_single_graphic_hl_pane_g2_ParamLimits

0x0c4c,	// (0x00030623) list_single_graphic_hl_pane_g2

0x0c4c,	// (0x00030623) list_single_graphic_hl_pane_g3_ParamLimits

0x0c4c,	// (0x00030623) list_single_graphic_hl_pane_g3

0x1a56,	// (0x0003142d) list_single_graphic_hl_pane_g4_ParamLimits

0x1a56,	// (0x0003142d) list_single_graphic_hl_pane_g4

0x1a62,	// (0x00031439) list_single_graphic_hl_pane_g5_ParamLimits

0x1a62,	// (0x00031439) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0003f5c6) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0003f5c6) list_single_graphic_hl_pane_g

0x0c58,	// (0x0003062f) list_single_graphic_hl_pane_t1_ParamLimits

0x0c58,	// (0x0003062f) list_single_graphic_hl_pane_t1

0x7c2e,	// (0x00037605) aid_size_min_hl_cp2

0x7c37,	// (0x0003760e) list_highlight_pane_cp34_cp2_ParamLimits

0x7c37,	// (0x0003760e) list_highlight_pane_cp34_cp2

0x7bbd,	// (0x00037594) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7bbd,	// (0x00037594) list_single_graphic_hl_pane_g1_cp2

0x7c44,	// (0x0003761b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7c44,	// (0x0003761b) list_single_graphic_hl_pane_g2_cp2

0x7c50,	// (0x00037627) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7c50,	// (0x00037627) list_single_graphic_hl_pane_g3_cp2

0x5000,	// (0x000349d7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5000,	// (0x000349d7) list_single_graphic_hl_pane_g4_cp2

0x7a05,	// (0x000373dc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7a05,	// (0x000373dc) list_single_graphic_hl_pane_g5_cp2

0xee54,	// (0x0003e82b) control_pane_g4_ParamLimits

0xee54,	// (0x0003e82b) control_pane_g4

0x4ac9,	// (0x000344a0) bg_popup_sub_pane_cp10_ParamLimits

0x752c,	// (0x00036f03) list_choice_list_pane_ParamLimits

0x753b,	// (0x00036f12) scroll_pane_cp23

0x14b8,	// (0x00030e8f) bg_popup_preview_window_pane_cp02_ParamLimits

0x7a41,	// (0x00037418) list_preview_fixed_pane_ParamLimits

0x7a57,	// (0x0003742e) list_preview_fixed_pane_cp_ParamLimits

0x7a57,	// (0x0003742e) list_preview_fixed_pane_cp

0x7a63,	// (0x0003743a) popup_preview_fixed_window_g1_ParamLimits

0x7a63,	// (0x0003743a) popup_preview_fixed_window_g1

0x7a6f,	// (0x00037446) popup_preview_fixed_window_g2_ParamLimits

0x7a6f,	// (0x00037446) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0003f54e) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0003f54e) popup_preview_fixed_window_g

0x90b1,	// (0x00038a88) aid_navi_side_left_pane_ParamLimits

0x90c1,	// (0x00038a98) aid_navi_side_right_pane_ParamLimits

0x90d0,	// (0x00038aa7) navi_icon_pane_stacon_ParamLimits

0x90e0,	// (0x00038ab7) navi_navi_pane_stacon_ParamLimits

0x90d0,	// (0x00038aa7) navi_text_pane_stacon_ParamLimits

0x0e00,	// (0x000307d7) main_text_info_pane

0x7c72,	// (0x00037649) listscroll_text_info_pane

0x7c7a,	// (0x00037651) list_text_info_pane_ParamLimits

0x7c7a,	// (0x00037651) list_text_info_pane

0x7c89,	// (0x00037660) scroll_pane_cp24_ParamLimits

0x7c89,	// (0x00037660) scroll_pane_cp24

0x34e6,	// (0x00032ebd) list_text_info_pane_t1_ParamLimits

0x34e6,	// (0x00032ebd) list_text_info_pane_t1

0x21e0,	// (0x00031bb7) popup_fast_swap2_window_ParamLimits

0x21e0,	// (0x00031bb7) popup_fast_swap2_window

0x7ca7,	// (0x0003767e) aid_size_cell_fast2

0x0e00,	// (0x000307d7) bg_popup_window_pane_cp17

0x5a32,	// (0x00035409) heading_pane_cp2

0x1700,	// (0x000310d7) listscroll_fast2_pane

0x7cb1,	// (0x00037688) grid_fast2_pane

0x7cb9,	// (0x00037690) listscroll_fast2_pane_g1

0x7cc1,	// (0x00037698) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0003f5d1) listscroll_fast2_pane_g

0x1b97,	// (0x0003156e) scroll_pane_cp26

0x7cc9,	// (0x000376a0) cell_fast2_pane_ParamLimits

0x7cc9,	// (0x000376a0) cell_fast2_pane

0x7cdf,	// (0x000376b6) cell_fast2_pane_g1

0x7ce8,	// (0x000376bf) cell_fast2_pane_g2

0x7cf1,	// (0x000376c8) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0003f5d6) cell_fast2_pane_g

0x17d7,	// (0x000311ae) grid_highlight_pane_cp9

0x17ec,	// (0x000311c3) main_eswt_pane_ParamLimits

0x17ec,	// (0x000311c3) main_eswt_pane

0x7c9e,	// (0x00037675) list_single_text_info_pane

0x7cf9,	// (0x000376d0) eswt_ctrl_button_pane

0x7cf9,	// (0x000376d0) eswt_ctrl_canvas_pane

0x7d01,	// (0x000376d8) eswt_ctrl_combo_pane

0x7cf9,	// (0x000376d0) eswt_ctrl_default_pane

0x7cf9,	// (0x000376d0) eswt_ctrl_label_pane

0x7d09,	// (0x000376e0) eswt_ctrl_wait_pane

0x7d11,	// (0x000376e8) eswt_shell_pane

0x0e00,	// (0x000307d7) listscroll_eswt_app_pane

0x7d2d,	// (0x00037704) popup_eswt_tasktip_window_ParamLimits

0x7d2d,	// (0x00037704) popup_eswt_tasktip_window

0x5793,	// (0x0003516a) bg_popup_window_pane_cp18

0x7d3e,	// (0x00037715) eswt_control_pane_g1_ParamLimits

0x7d3e,	// (0x00037715) eswt_control_pane_g1

0x7d4b,	// (0x00037722) eswt_control_pane_g2_ParamLimits

0x7d4b,	// (0x00037722) eswt_control_pane_g2

0x7d58,	// (0x0003772f) eswt_control_pane_g3_ParamLimits

0x7d58,	// (0x0003772f) eswt_control_pane_g3

0x7d65,	// (0x0003773c) eswt_control_pane_g4_ParamLimits

0x7d65,	// (0x0003773c) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0003f5dd) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0003f5dd) eswt_control_pane_g

0x1a3c,	// (0x00031413) bg_button_pane_ParamLimits

0x1a3c,	// (0x00031413) bg_button_pane

0x17ec,	// (0x000311c3) common_borders_pane_copy2_ParamLimits

0x17ec,	// (0x000311c3) common_borders_pane_copy2

0x7d72,	// (0x00037749) control_button_pane_g1_ParamLimits

0x7d72,	// (0x00037749) control_button_pane_g1

0x7d7e,	// (0x00037755) control_button_pane_g2_ParamLimits

0x7d7e,	// (0x00037755) control_button_pane_g2

0x7d8a,	// (0x00037761) control_button_pane_g3_ParamLimits

0x7d8a,	// (0x00037761) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0003f5e6) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0003f5e6) control_button_pane_g

0x7d9e,	// (0x00037775) control_button_pane_t1

0x7dac,	// (0x00037783) control_button_pane_t2

0x0001,

0xfc16,	// (0x0003f5ed) control_button_pane_t

0x5699,	// (0x00035070) bg_button_pane_g1

0x56a1,	// (0x00035078) bg_button_pane_g2

0x56a9,	// (0x00035080) bg_button_pane_g3

0x56b1,	// (0x00035088) bg_button_pane_g4

0x56b9,	// (0x00035090) bg_button_pane_g5

0x56c1,	// (0x00035098) bg_button_pane_g6

0x56c9,	// (0x000350a0) bg_button_pane_g7

0x56d1,	// (0x000350a8) bg_button_pane_g8

0x56d9,	// (0x000350b0) bg_button_pane_g9

0x0008,

0xf870,	// (0x0003f247) bg_button_pane_g

0x74e7,	// (0x00036ebe) common_borders_pane_ParamLimits

0x74e7,	// (0x00036ebe) common_borders_pane

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy1_ParamLimits

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy1

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy1_ParamLimits

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy1

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy1_ParamLimits

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy1

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy1_ParamLimits

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy1

0x7522,	// (0x00036ef9) bg_eswt_ctrl_canvas_pane_g1

0x74e7,	// (0x00036ebe) common_borders_pane_cp2_ParamLimits

0x74e7,	// (0x00036ebe) common_borders_pane_cp2

0x74e7,	// (0x00036ebe) common_borders_pane_cp3_ParamLimits

0x74e7,	// (0x00036ebe) common_borders_pane_cp3

0x7dba,	// (0x00037791) separator_horizontal_pane

0x4b8d,	// (0x00034564) separator_vertical_pane

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy2_ParamLimits

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy2

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy2_ParamLimits

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy2

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy2_ParamLimits

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy2

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy2_ParamLimits

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy2

0x0e00,	// (0x000307d7) common_borders_pane_cp4

0x7dc2,	// (0x00037799) separator_horizontal_pane_g1

0x7dcb,	// (0x000377a2) separator_horizontal_pane_g2

0x7dd4,	// (0x000377ab) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0003f5f2) separator_horizontal_pane_g

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy3_ParamLimits

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy3

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy3_ParamLimits

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy3

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy3_ParamLimits

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy3

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy3_ParamLimits

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy3

0x0e00,	// (0x000307d7) common_borders_pane_cp5

0x7ddd,	// (0x000377b4) separator_vertical_pane_g1

0x7de6,	// (0x000377bd) separator_vertical_pane_g2

0x7def,	// (0x000377c6) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0003f5f9) separator_vertical_pane_g

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy4_ParamLimits

0x7d3e,	// (0x00037715) eswt_control_pane_g1_copy4

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy4_ParamLimits

0x7d4b,	// (0x00037722) eswt_control_pane_g2_copy4

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy4_ParamLimits

0x7d58,	// (0x0003772f) eswt_control_pane_g3_copy4

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy4_ParamLimits

0x7d65,	// (0x0003773c) eswt_control_pane_g4_copy4

0x3501,	// (0x00032ed8) eswt_ctrl_combo_button_pane

0x3509,	// (0x00032ee0) eswt_ctrl_input_pane

0x3511,	// (0x00032ee8) popup_choice_list_window_cp70

0x3519,	// (0x00032ef0) eswt_ctrl_input_pane_t1

0x0e00,	// (0x000307d7) input_focus_pane_cp70

0x74e7,	// (0x00036ebe) bg_button_pane_cp70_ParamLimits

0x74e7,	// (0x00036ebe) bg_button_pane_cp70

0x3527,	// (0x00032efe) eswt_ctrl_combo_button_pane_g1

0x7df8,	// (0x000377cf) wait_bar_pane_cp70

0x5793,	// (0x0003516a) bg_popup_window_pane_cp70_ParamLimits

0x5793,	// (0x0003516a) bg_popup_window_pane_cp70

0x7e00,	// (0x000377d7) popup_eswt_tasktip_window_t1

0x7e16,	// (0x000377ed) wait_bar_pane_cp71_ParamLimits

0x7e16,	// (0x000377ed) wait_bar_pane_cp71

0x7e22,	// (0x000377f9) grid_eswt_app_pane

0x4b96,	// (0x0003456d) scroll_pane_cp70

0x352f,	// (0x00032f06) cell_eswt_app_pane_ParamLimits

0x352f,	// (0x00032f06) cell_eswt_app_pane

0x3557,	// (0x00032f2e) cell_eswt_app_pane_g1_ParamLimits

0x3557,	// (0x00032f2e) cell_eswt_app_pane_g1

0x3586,	// (0x00032f5d) cell_eswt_app_pane_g2_ParamLimits

0x3586,	// (0x00032f5d) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0003f600) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0003f600) cell_eswt_app_pane_g

0x35af,	// (0x00032f86) cell_eswt_app_pane_t1_ParamLimits

0x35af,	// (0x00032f86) cell_eswt_app_pane_t1

0x7e2b,	// (0x00037802) grid_highlight_pane_cp70_ParamLimits

0x7e2b,	// (0x00037802) grid_highlight_pane_cp70

0x1a56,	// (0x0003142d) set_content_pane_g1

0x537a,	// (0x00034d51) status_small_volume_pane

0xab1d,	// (0x0003a4f4) status_small_volume_pane_g1

0xab25,	// (0x0003a4fc) volume_small2_pane

0xab2e,	// (0x0003a505) volume_small2_pane_g1

0xab37,	// (0x0003a50e) volume_small2_pane_g2

0xab40,	// (0x0003a517) volume_small2_pane_g3

0xab49,	// (0x0003a520) volume_small2_pane_g4

0xab52,	// (0x0003a529) volume_small2_pane_g5

0xab5b,	// (0x0003a532) volume_small2_pane_g6

0xab64,	// (0x0003a53b) volume_small2_pane_g7

0xab6d,	// (0x0003a544) volume_small2_pane_g8

0xab76,	// (0x0003a54d) volume_small2_pane_g9

0xab7f,	// (0x0003a556) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0003f605) volume_small2_pane_g

0x7857,	// (0x0003722e) fep_vkb_top_text_pane_g1_ParamLimits

0x346e,	// (0x00032e45) fep_vkb_top_text_pane_t1_ParamLimits

0x7a7b,	// (0x00037452) popup_preview_fixed_window_g3_ParamLimits

0x7a7b,	// (0x00037452) popup_preview_fixed_window_g3

0x2700,	// (0x000320d7) popup_toolbar_trans_pane

0x2f23,	// (0x000328fa) aid_height_set_list_ParamLimits

0x696e,	// (0x00036345) aid_size_parent_ParamLimits

0x4ac9,	// (0x000344a0) list_highlight_pane_cp2_ParamLimits

0x1a56,	// (0x0003142d) set_content_pane_g1_ParamLimits

0x3096,	// (0x00032a6d) list_single_image_pane_ParamLimits

0x3096,	// (0x00032a6d) list_single_image_pane

0x35e1,	// (0x00032fb8) aid_size_cell_image_ParamLimits

0x35e1,	// (0x00032fb8) aid_size_cell_image

0x35ee,	// (0x00032fc5) grid_single_image_pane_ParamLimits

0x35ee,	// (0x00032fc5) grid_single_image_pane

0x1a56,	// (0x0003142d) list_single_image_pane_g1_ParamLimits

0x1a56,	// (0x0003142d) list_single_image_pane_g1

0x1a62,	// (0x00031439) list_single_image_pane_g2_ParamLimits

0x1a62,	// (0x00031439) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0003f61a) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0003f61a) list_single_image_pane_g

0x7e37,	// (0x0003780e) list_single_image_pane_t1_ParamLimits

0x7e37,	// (0x0003780e) list_single_image_pane_t1

0x35fa,	// (0x00032fd1) cell_image_list_pane_ParamLimits

0x35fa,	// (0x00032fd1) cell_image_list_pane

0x360e,	// (0x00032fe5) cell_image_list_pane_g1

0x3617,	// (0x00032fee) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0003f61f) cell_image_list_pane_g

0x7e4d,	// (0x00037824) aid_size_cell_tb_trans_pane

0x1a3c,	// (0x00031413) bg_tb_trans_pane

0x7e5f,	// (0x00037836) grid_tb_trans_pane

0x5699,	// (0x00035070) bg_tb_trans_pane_g1

0x56a1,	// (0x00035078) bg_tb_trans_pane_g2

0x56a9,	// (0x00035080) bg_tb_trans_pane_g3

0x56b1,	// (0x00035088) bg_tb_trans_pane_g4

0x56b9,	// (0x00035090) bg_tb_trans_pane_g5

0x56d1,	// (0x000350a8) bg_tb_trans_pane_g6

0x56d9,	// (0x000350b0) bg_tb_trans_pane_g7

0x56c1,	// (0x00035098) bg_tb_trans_pane_g8

0x56c9,	// (0x000350a0) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0003f624) bg_tb_trans_pane_g

0x7e73,	// (0x0003784a) cell_toolbar_trans_pane_ParamLimits

0x7e73,	// (0x0003784a) cell_toolbar_trans_pane

0x7522,	// (0x00036ef9) cell_toolbar_trans_pane_g1

0x32e3,	// (0x00032cba) list_form2_midp_pane_t1

0x32f1,	// (0x00032cc8) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0003f4c1) list_form2_midp_pane_t

0x727e,	// (0x00036c55) scroll_pane_cp51_ParamLimits

0x73f4,	// (0x00036dcb) form2_midp_wait_pane_g1

0x73fd,	// (0x00036dd4) form2_midp_wait_pane_g2

0x7406,	// (0x00036ddd) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0003f4d6) form2_midp_wait_pane_g

0x1163,	// (0x00030b3a) list_highlight_pane_cp21_ParamLimits

0x7426,	// (0x00036dfd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7435,	// (0x00036e0c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe1fe,	// (0x0003dbd5) list_single_2graphic_im_pane_ParamLimits

0xe1fe,	// (0x0003dbd5) list_single_2graphic_im_pane

0x3620,	// (0x00032ff7) list_single_2graphic_im_pane_g1_ParamLimits

0x3620,	// (0x00032ff7) list_single_2graphic_im_pane_g1

0x3631,	// (0x00033008) list_single_2graphic_im_pane_g2_ParamLimits

0x3631,	// (0x00033008) list_single_2graphic_im_pane_g2

0x363d,	// (0x00033014) list_single_2graphic_im_pane_g3_ParamLimits

0x363d,	// (0x00033014) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0003f637) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0003f637) list_single_2graphic_im_pane_g

0x3651,	// (0x00033028) list_single_2graphic_im_pane_t1_ParamLimits

0x3651,	// (0x00033028) list_single_2graphic_im_pane_t1

0x7a87,	// (0x0003745e) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a87,	// (0x0003745e) list_single_graphic_2heading_pane_fp

0xdf54,	// (0x0003d92b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xdf54,	// (0x0003d92b) list_single_graphic_2heading_pane_fp_g1

0x7a9b,	// (0x00037472) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a9b,	// (0x00037472) list_single_graphic_2heading_pane_fp_g2

0xd5d0,	// (0x0003cfa7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd5d0,	// (0x0003cfa7) list_single_graphic_2heading_pane_fp_g3

0xe25a,	// (0x0003dc31) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe25a,	// (0x0003dc31) list_single_graphic_2heading_pane_fp_g4

0x7aa7,	// (0x0003747e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7aa7,	// (0x0003747e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003f55e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003f55e) list_single_graphic_2heading_pane_fp_g

0xe087,	// (0x0003da5e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe087,	// (0x0003da5e) list_single_graphic_2heading_pane_fp_t1

0xdf8c,	// (0x0003d963) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdf8c,	// (0x0003d963) list_single_graphic_2heading_pane_fp_t2

0xe09d,	// (0x0003da74) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe09d,	// (0x0003da74) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0003f640) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0003f640) list_single_graphic_2heading_pane_fp_t

0x75ad,	// (0x00036f84) fep_hwr_write_pane_g5_ParamLimits

0x75ad,	// (0x00036f84) fep_hwr_write_pane_g5

0x75b9,	// (0x00036f90) fep_hwr_write_pane_g6_ParamLimits

0x75b9,	// (0x00036f90) fep_hwr_write_pane_g6

0x7d11,	// (0x000376e8) eswt_shell_pane_ParamLimits

0x5793,	// (0x0003516a) bg_popup_window_pane_cp18_ParamLimits

0x6912,	// (0x000362e9) heading_pane_cp70

0x7e00,	// (0x000377d7) popup_eswt_tasktip_window_t1_ParamLimits

0x279b,	// (0x00032172) aid_touch_tab_arrow_left

0x27af,	// (0x00032186) aid_touch_tab_arrow_right

0x103c,	// (0x00030a13) title_pane_g3_ParamLimits

0x103c,	// (0x00030a13) title_pane_g3

0x1a0c,	// (0x000313e3) set_value_pane_g1

0x2700,	// (0x000320d7) popup_toolbar_trans_pane_ParamLimits

0x7e4d,	// (0x00037824) aid_size_cell_tb_trans_pane_ParamLimits

0x1a3c,	// (0x00031413) bg_tb_trans_pane_ParamLimits

0x7e5f,	// (0x00037836) grid_tb_trans_pane_ParamLimits

0x14b8,	// (0x00030e8f) cont_note_pane_ParamLimits

0x14b8,	// (0x00030e8f) cont_note_pane

0x17ec,	// (0x000311c3) cont_snote2_single_text_pane_ParamLimits

0x17ec,	// (0x000311c3) cont_snote2_single_text_pane

0x17ec,	// (0x000311c3) cont_snote2_single_graphic_pane_ParamLimits

0x17ec,	// (0x000311c3) cont_snote2_single_graphic_pane

0x5c3c,	// (0x00035613) cont_note_wait_pane_ParamLimits

0x5c3c,	// (0x00035613) cont_note_wait_pane

0x5c3c,	// (0x00035613) cont_note_image_pane_ParamLimits

0x5c3c,	// (0x00035613) cont_note_image_pane

0x7ea5,	// (0x0003787c) popup_note2_window_g1_ParamLimits

0x7ea5,	// (0x0003787c) popup_note2_window_g1

0x7ed6,	// (0x000378ad) popup_note2_window_t1_ParamLimits

0x7ed6,	// (0x000378ad) popup_note2_window_t1

0x7f1b,	// (0x000378f2) popup_note2_window_t2_ParamLimits

0x7f1b,	// (0x000378f2) popup_note2_window_t2

0xab88,	// (0x0003a55f) popup_note2_window_t3_ParamLimits

0xab88,	// (0x0003a55f) popup_note2_window_t3

0xabcd,	// (0x0003a5a4) popup_note2_window_t4_ParamLimits

0xabcd,	// (0x0003a5a4) popup_note2_window_t4

0x153c,	// (0x00030f13) popup_note2_window_t5_ParamLimits

0x153c,	// (0x00030f13) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003f64c) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003f64c) popup_note2_window_t

0xabfc,	// (0x0003a5d3) popup_note2_image_window_g1_ParamLimits

0xabfc,	// (0x0003a5d3) popup_note2_image_window_g1

0xac08,	// (0x0003a5df) popup_note2_image_window_g2_ParamLimits

0xac08,	// (0x0003a5df) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0003f657) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0003f657) popup_note2_image_window_g

0xac1a,	// (0x0003a5f1) popup_note2_image_window_t1_ParamLimits

0xac1a,	// (0x0003a5f1) popup_note2_image_window_t1

0xac32,	// (0x0003a609) popup_note2_image_window_t2_ParamLimits

0xac32,	// (0x0003a609) popup_note2_image_window_t2

0xac4a,	// (0x0003a621) popup_note2_image_window_t3_ParamLimits

0xac4a,	// (0x0003a621) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003f65c) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003f65c) popup_note2_image_window_t

0x5c4a,	// (0x00035621) popup_note2_wait_window_g1_ParamLimits

0x5c4a,	// (0x00035621) popup_note2_wait_window_g1

0x5c56,	// (0x0003562d) popup_note2_wait_window_g2_ParamLimits

0x5c56,	// (0x0003562d) popup_note2_wait_window_g2

0x5c62,	// (0x00035639) popup_note2_wait_window_g3_ParamLimits

0x5c62,	// (0x00035639) popup_note2_wait_window_g3

0x0002,

0xf852,	// (0x0003f229) popup_note2_wait_window_g_ParamLimits

0xf852,	// (0x0003f229) popup_note2_wait_window_g

0xac66,	// (0x0003a63d) popup_note2_wait_window_t1_ParamLimits

0xac66,	// (0x0003a63d) popup_note2_wait_window_t1

0xac84,	// (0x0003a65b) popup_note2_wait_window_t2_ParamLimits

0xac84,	// (0x0003a65b) popup_note2_wait_window_t2

0xaca2,	// (0x0003a679) popup_note2_wait_window_t3_ParamLimits

0xaca2,	// (0x0003a679) popup_note2_wait_window_t3

0xacb4,	// (0x0003a68b) popup_note2_wait_window_t4_ParamLimits

0xacb4,	// (0x0003a68b) popup_note2_wait_window_t4

0x0003,

0xfc8c,	// (0x0003f663) popup_note2_wait_window_t_ParamLimits

0xfc8c,	// (0x0003f663) popup_note2_wait_window_t

0xacc6,	// (0x0003a69d) wait_bar2_pane_ParamLimits

0xacc6,	// (0x0003a69d) wait_bar2_pane

0xacde,	// (0x0003a6b5) popup_snote2_single_text_window_g1_ParamLimits

0xacde,	// (0x0003a6b5) popup_snote2_single_text_window_g1

0xad06,	// (0x0003a6dd) popup_snote2_single_text_window_t1_ParamLimits

0xad06,	// (0x0003a6dd) popup_snote2_single_text_window_t1

0xad52,	// (0x0003a729) popup_snote2_single_text_window_t2_ParamLimits

0xad52,	// (0x0003a729) popup_snote2_single_text_window_t2

0xad9e,	// (0x0003a775) popup_snote2_single_text_window_t3_ParamLimits

0xad9e,	// (0x0003a775) popup_snote2_single_text_window_t3

0xaddf,	// (0x0003a7b6) popup_snote2_single_text_window_t4_ParamLimits

0xaddf,	// (0x0003a7b6) popup_snote2_single_text_window_t4

0xae15,	// (0x0003a7ec) popup_snote2_single_text_window_t5_ParamLimits

0xae15,	// (0x0003a7ec) popup_snote2_single_text_window_t5

0x0004,

0xfc95,	// (0x0003f66c) popup_snote2_single_text_window_t_ParamLimits

0xfc95,	// (0x0003f66c) popup_snote2_single_text_window_t

0xae40,	// (0x0003a817) popup_snote2_single_graphic_window_g1_ParamLimits

0xae40,	// (0x0003a817) popup_snote2_single_graphic_window_g1

0xae68,	// (0x0003a83f) popup_snote2_single_graphic_window_g2_ParamLimits

0xae68,	// (0x0003a83f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca0,	// (0x0003f677) popup_snote2_single_graphic_window_g_ParamLimits

0xfca0,	// (0x0003f677) popup_snote2_single_graphic_window_g

0xae90,	// (0x0003a867) popup_snote2_single_graphic_window_t1_ParamLimits

0xae90,	// (0x0003a867) popup_snote2_single_graphic_window_t1

0xaedc,	// (0x0003a8b3) popup_snote2_single_graphic_window_t2_ParamLimits

0xaedc,	// (0x0003a8b3) popup_snote2_single_graphic_window_t2

0xad9e,	// (0x0003a775) popup_snote2_single_graphic_window_t3_ParamLimits

0xad9e,	// (0x0003a775) popup_snote2_single_graphic_window_t3

0xaddf,	// (0x0003a7b6) popup_snote2_single_graphic_window_t4_ParamLimits

0xaddf,	// (0x0003a7b6) popup_snote2_single_graphic_window_t4

0xae15,	// (0x0003a7ec) popup_snote2_single_graphic_window_t5_ParamLimits

0xae15,	// (0x0003a7ec) popup_snote2_single_graphic_window_t5

0x0004,

0xfca5,	// (0x0003f67c) popup_snote2_single_graphic_window_t_ParamLimits

0xfca5,	// (0x0003f67c) popup_snote2_single_graphic_window_t

0x7217,	// (0x00036bee) clock_nsta_pane_cp2_t1

0x7217,	// (0x00036bee) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0003f497) clock_nsta_pane_cp2_t

0xda72,	// (0x0003d449) form_field_data_wide_pane_g1_ParamLimits

0x1a56,	// (0x0003142d) form_field_data_wide_pane_g2_ParamLimits

0x1a56,	// (0x0003142d) form_field_data_wide_pane_g2

0x1a62,	// (0x00031439) form_field_data_wide_pane_g3_ParamLimits

0x1a62,	// (0x00031439) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0003f073) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0003f073) form_field_data_wide_pane_g

0x321e,	// (0x00032bf5) grid_touch_3_pane_ParamLimits

0x321e,	// (0x00032bf5) grid_touch_3_pane

0x3682,	// (0x00033059) cell_touch_3_pane_ParamLimits

0x3682,	// (0x00033059) cell_touch_3_pane

0x7522,	// (0x00036ef9) cell_touch_3_pane_g1

0x7522,	// (0x00036ef9) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0003f51c) cell_touch_3_pane_g

0x156e,	// (0x00030f45) cont_query_data_pane

0x1576,	// (0x00030f4d) cont_query_data_pane_cp1

0xaf28,	// (0x0003a8ff) button_value_adjust_pane_cp7

0xaf30,	// (0x0003a907) query_popup_pane_cp3

0x4d39,	// (0x00034710) bg_popup_sub_pane_cp22_ParamLimits

0x931a,	// (0x00038cf1) navi_navi_volume_pane_cp2

0x9332,	// (0x00038d09) popup_side_volume_key_window_g2

0x933e,	// (0x00038d15) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0003f105) popup_side_volume_key_window_g

0x9358,	// (0x00038d2f) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0003f10c) popup_side_volume_key_window_t

0x4f83,	// (0x0003495a) popup_side_volume_key_window_ParamLimits

0x0752,	// (0x00030129) list_double_graphic_pane_g4_ParamLimits

0x0752,	// (0x00030129) list_double_graphic_pane_g4

0x0c06,	// (0x000305dd) list_single_2heading_msg_pane_ParamLimits

0x0c06,	// (0x000305dd) list_single_2heading_msg_pane

0x0c6e,	// (0x00030645) list_single_2heading_msg_pane_g1_ParamLimits

0x0c6e,	// (0x00030645) list_single_2heading_msg_pane_g1

0x0c7a,	// (0x00030651) list_single_2heading_msg_pane_g2_ParamLimits

0x0c7a,	// (0x00030651) list_single_2heading_msg_pane_g2

0x0c8d,	// (0x00030664) list_single_2heading_msg_pane_g3_ParamLimits

0x0c8d,	// (0x00030664) list_single_2heading_msg_pane_g3

0x0c99,	// (0x00030670) list_single_2heading_msg_pane_g4_ParamLimits

0x0c99,	// (0x00030670) list_single_2heading_msg_pane_g4

0x0003,

0xfcb0,	// (0x0003f687) list_single_2heading_msg_pane_g_ParamLimits

0xfcb0,	// (0x0003f687) list_single_2heading_msg_pane_g

0x0cb1,	// (0x00030688) list_single_2heading_msg_pane_t1_ParamLimits

0x0cb1,	// (0x00030688) list_single_2heading_msg_pane_t1

0x0cd9,	// (0x000306b0) list_single_2heading_msg_pane_t2_ParamLimits

0x0cd9,	// (0x000306b0) list_single_2heading_msg_pane_t2

0x0d44,	// (0x0003071b) list_single_2heading_msg_pane_t3_ParamLimits

0x0d44,	// (0x0003071b) list_single_2heading_msg_pane_t3

0xe17b,	// (0x0003db52) list_single_2heading_msg_pane_t4_ParamLimits

0xe17b,	// (0x0003db52) list_single_2heading_msg_pane_t4

0x0003,

0xfcb9,	// (0x0003f690) list_single_2heading_msg_pane_t_ParamLimits

0xfcb9,	// (0x0003f690) list_single_2heading_msg_pane_t

0x1048,	// (0x00030a1f) title_pane_g4_ParamLimits

0x1048,	// (0x00030a1f) title_pane_g4

0x9027,	// (0x000389fe) title_pane_stacon_g3_ParamLimits

0x9027,	// (0x000389fe) title_pane_stacon_g3

0x7e99,	// (0x00037870) list_single_2graphic_im_pane_g4_ParamLimits

0x7e99,	// (0x00037870) list_single_2graphic_im_pane_g4

0x6728,	// (0x000360ff) popup_side_volume_key_window_cp

0x6b95,	// (0x0003656c) main_idle_act2_pane_t1

0x9e8d,	// (0x00039864) toolbar_button_pane_g10

0x1949,	// (0x00031320) popup_toolbar_window_cp1

0x7208,	// (0x00036bdf) clock_nsta_pane_cp_t1

0x7208,	// (0x00036bdf) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0003f492) clock_nsta_pane_cp_t

0x931a,	// (0x00038cf1) navi_navi_volume_pane_cp2_ParamLimits

0x9326,	// (0x00038cfd) popup_side_volume_key_window_g1_ParamLimits

0x9332,	// (0x00038d09) popup_side_volume_key_window_g2_ParamLimits

0x933e,	// (0x00038d15) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0003f105) popup_side_volume_key_window_g_ParamLimits

0xa79d,	// (0x0003a174) fep_hwr_aid_pane

0xa83e,	// (0x0003a215) bg_fep_hwr_top_pane_g4_ParamLimits

0x758f,	// (0x00036f66) fep_hwr_top_pane_g1_ParamLimits

0x757d,	// (0x00036f54) fep_hwr_top_pane_g2_ParamLimits

0xa85e,	// (0x0003a235) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0003f4e7) fep_hwr_top_pane_g_ParamLimits

0xa873,	// (0x0003a24a) fep_hwr_top_text_pane_ParamLimits

0x6531,	// (0x00035f08) aid_touch_tab_arrow_arrow_2

0x6528,	// (0x00035eff) aid_touch_tab_arrow_left_2

0xa7b1,	// (0x0003a188) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa7e4,	// (0x0003a1bb) fep_hwr_prediction_pane

0x76c2,	// (0x00037099) fep_vkb_prediction_pane

0x344e,	// (0x00032e25) fep_vkb_side_pane_g3_ParamLimits

0x344e,	// (0x00032e25) fep_vkb_side_pane_g3

0xa9e2,	// (0x0003a3b9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xaa4c,	// (0x0003a423) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xaa59,	// (0x0003a430) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0003f596) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xaf41,	// (0x0003a918) fep_hwr_prediction_pane_g1

0xaf4b,	// (0x0003a922) fep_hwr_prediction_pane_g2

0xaf53,	// (0x0003a92a) fep_hwr_prediction_pane_g3

0xaf5b,	// (0x0003a932) fep_hwr_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0003f699) fep_hwr_prediction_pane_g

0xaf63,	// (0x0003a93a) fep_vkb_prediction_pane_g1

0xaf6d,	// (0x0003a944) fep_vkb_prediction_pane_g2

0xaf75,	// (0x0003a94c) fep_vkb_prediction_pane_g3

0xaf7d,	// (0x0003a954) fep_vkb_prediction_pane_g4

0x0003,

0xfccb,	// (0x0003f6a2) fep_vkb_prediction_pane_g

0xa350,	// (0x00039d27) slider_set_pane_g3

0xa364,	// (0x00039d3b) slider_set_pane_g4

0xa37c,	// (0x00039d53) slider_set_pane_g5

0xa350,	// (0x00039d27) slider_set_pane_g6

0xf10d,	// (0x0003eae4) slider_set_pane_g7

0x6991,	// (0x00036368) slider_form_pane_g3

0x699a,	// (0x00036371) slider_form_pane_g4

0x69a2,	// (0x00036379) slider_form_pane_g5

0x6991,	// (0x00036368) slider_form_pane_g6

0x3055,	// (0x00032a2c) slider_form_pane_g7

0x6dde,	// (0x000367b5) slider_set_pane_vc_g3

0x6de7,	// (0x000367be) slider_set_pane_vc_g4

0x6df0,	// (0x000367c7) slider_set_pane_vc_g5

0x6dde,	// (0x000367b5) slider_set_pane_vc_g6

0x6df9,	// (0x000367d0) slider_set_pane_vc_g7

0x6dde,	// (0x000367b5) slider_form_pane_vc_g1

0x6de7,	// (0x000367be) slider_form_pane_vc_g2

0x6df0,	// (0x000367c7) slider_form_pane_vc_g3

0x6dde,	// (0x000367b5) slider_form_pane_vc_g4

0x6f8d,	// (0x00036964) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0003f46b) slider_form_pane_vc_g

0x0e00,	// (0x000307d7) main_idle_act3_pane

0xaf85,	// (0x0003a95c) ai3_links_pane

0x36c9,	// (0x000330a0) popup_ai3_data_window_ParamLimits

0x36c9,	// (0x000330a0) popup_ai3_data_window

0x0e00,	// (0x000307d7) grid_ai3_links_pane

0x36e1,	// (0x000330b8) cell_ai3_links_pane_ParamLimits

0x36e1,	// (0x000330b8) cell_ai3_links_pane

0xaf8e,	// (0x0003a965) bg_popup_sub_pane_cp11

0xaf9b,	// (0x0003a972) cell_ai3_links_pane_g1

0x0e00,	// (0x000307d7) bg_popup_sub_pane_cp12

0xafc0,	// (0x0003a997) heading_ai3_data_pane

0xafc8,	// (0x0003a99f) list_ai3_gene_pane

0xafd4,	// (0x0003a9ab) popup_ai3_data_window_g1

0xafdc,	// (0x0003a9b3) heading_ai3_data_pane_g1

0xafe4,	// (0x0003a9bb) heading_ai3_data_pane_t1

0xaff2,	// (0x0003a9c9) list_double_ai3_gene_pane_ParamLimits

0xaff2,	// (0x0003a9c9) list_double_ai3_gene_pane

0xafff,	// (0x0003a9d6) list_single_ai3_gene_pane_ParamLimits

0xafff,	// (0x0003a9d6) list_single_ai3_gene_pane

0x74e7,	// (0x00036ebe) list_highlight_pane_cp7_ParamLimits

0x74e7,	// (0x00036ebe) list_highlight_pane_cp7

0xb00c,	// (0x0003a9e3) list_single_a13_gene_pane_t1_ParamLimits

0xb00c,	// (0x0003a9e3) list_single_a13_gene_pane_t1

0xb023,	// (0x0003a9fa) list_single_ai3_gene_pane_g1

0xb02c,	// (0x0003aa03) list_single_ai3_gene_pane_g2

0x0001,

0xfcd4,	// (0x0003f6ab) list_single_ai3_gene_pane_g

0xb034,	// (0x0003aa0b) list_double_ai3_gene_pane_g1_ParamLimits

0xb034,	// (0x0003aa0b) list_double_ai3_gene_pane_g1

0xb040,	// (0x0003aa17) list_double_ai3_gene_pane_t1_ParamLimits

0xb040,	// (0x0003aa17) list_double_ai3_gene_pane_t1

0xb05c,	// (0x0003aa33) list_double_ai3_gene_pane_t2_ParamLimits

0xb05c,	// (0x0003aa33) list_double_ai3_gene_pane_t2

0xb071,	// (0x0003aa48) list_double_ai3_gene_pane_t3_ParamLimits

0xb071,	// (0x0003aa48) list_double_ai3_gene_pane_t3

0x0002,

0xfcd9,	// (0x0003f6b0) list_double_ai3_gene_pane_t_ParamLimits

0xfcd9,	// (0x0003f6b0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe0b3,	// (0x0003da8a) aid_size_min_col_2

0x36b5,	// (0x0003308c) aid_size_min_msg_ParamLimits

0x36b5,	// (0x0003308c) aid_size_min_msg

0x3462,	// (0x00032e39) fep_vkb_top_text_pane_g2_ParamLimits

0x3462,	// (0x00032e39) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0003f517) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0003f517) fep_vkb_top_text_pane_g

0x0e00,	// (0x000307d7) main_hc_apps_shell_pane

0xb08e,	// (0x0003aa65) grid_hc_apps_pane_ParamLimits

0xb08e,	// (0x0003aa65) grid_hc_apps_pane

0xb09d,	// (0x0003aa74) list_hc_apps_pane

0xb0a5,	// (0x0003aa7c) scroll_pane_cp37_ParamLimits

0xb0a5,	// (0x0003aa7c) scroll_pane_cp37

0x36f7,	// (0x000330ce) cell_hc_apps_pane_ParamLimits

0x36f7,	// (0x000330ce) cell_hc_apps_pane

0x3791,	// (0x00033168) cell_hc_apps_pane_g1_ParamLimits

0x3791,	// (0x00033168) cell_hc_apps_pane_g1

0xb0b1,	// (0x0003aa88) cell_hc_apps_pane_g2_ParamLimits

0xb0b1,	// (0x0003aa88) cell_hc_apps_pane_g2

0xb0cd,	// (0x0003aaa4) cell_hc_apps_pane_g3_ParamLimits

0xb0cd,	// (0x0003aaa4) cell_hc_apps_pane_g3

0x0002,

0xfce0,	// (0x0003f6b7) cell_hc_apps_pane_g_ParamLimits

0xfce0,	// (0x0003f6b7) cell_hc_apps_pane_g

0x37be,	// (0x00033195) cell_hc_apps_pane_t1_ParamLimits

0x37be,	// (0x00033195) cell_hc_apps_pane_t1

0x14b8,	// (0x00030e8f) grid_highlight_pane_cp10_ParamLimits

0x14b8,	// (0x00030e8f) grid_highlight_pane_cp10

0x37fc,	// (0x000331d3) list_single_hc_apps_pane_ParamLimits

0x37fc,	// (0x000331d3) list_single_hc_apps_pane

0x3828,	// (0x000331ff) list_single_hc_apps_pane_g1

0x3841,	// (0x00033218) list_single_hc_apps_pane_g2

0x0001,

0xfce7,	// (0x0003f6be) list_single_hc_apps_pane_g

0x385a,	// (0x00033231) list_single_hc_apps_pane_g2_copy1

0x0db2,	// (0x00030789) list_single_hc_apps_pane_t1

0x1163,	// (0x00030b3a) bg_set_opt_pane_cp_ParamLimits

0x8d32,	// (0x00038709) setting_slider_pane_t1_ParamLimits

0xedc8,	// (0x0003e79f) setting_slider_pane_t2_ParamLimits

0xede1,	// (0x0003e7b8) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003ef51) setting_slider_pane_t_ParamLimits

0x8d78,	// (0x0003874f) slider_set_pane_ParamLimits

0x96a6,	// (0x0003907d) control_pane_g5_ParamLimits

0x96a6,	// (0x0003907d) control_pane_g5

0x6959,	// (0x00036330) slider_set_pane_g1_ParamLimits

0xa344,	// (0x00039d1b) slider_set_pane_g2_ParamLimits

0xa350,	// (0x00039d27) slider_set_pane_g3_ParamLimits

0xa364,	// (0x00039d3b) slider_set_pane_g4_ParamLimits

0xa37c,	// (0x00039d53) slider_set_pane_g5_ParamLimits

0xa350,	// (0x00039d27) slider_set_pane_g6_ParamLimits

0xf10d,	// (0x0003eae4) slider_set_pane_g7_ParamLimits

0xf96e,	// (0x0003f345) slider_set_pane_g_ParamLimits

0x1163,	// (0x00030b3a) navi_icon_text_pane_ParamLimits

0x276d,	// (0x00032144) aid_fill_nsta_2_ParamLimits

0x279b,	// (0x00032172) aid_touch_tab_arrow_left_ParamLimits

0x27af,	// (0x00032186) aid_touch_tab_arrow_right_ParamLimits

0x284b,	// (0x00032222) clock_nsta_pane_ParamLimits

0x650a,	// (0x00035ee1) navi_icon_pane_g1_ParamLimits

0x6516,	// (0x00035eed) navi_text_pane_t1_ParamLimits

0x7258,	// (0x00036c2f) navi_icon_text_pane_g1_ParamLimits

0x7264,	// (0x00036c3b) navi_icon_text_pane_t1_ParamLimits

0x3828,	// (0x000331ff) list_single_hc_apps_pane_g1_ParamLimits

0x3841,	// (0x00033218) list_single_hc_apps_pane_g2_ParamLimits

0xfce7,	// (0x0003f6be) list_single_hc_apps_pane_g_ParamLimits

0x385a,	// (0x00033231) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0db2,	// (0x00030789) list_single_hc_apps_pane_t1_ParamLimits

0xed55,	// (0x0003e72c) popup_toolbar2_fixed_window_ParamLimits

0xed55,	// (0x0003e72c) popup_toolbar2_fixed_window

0x26f8,	// (0x000320cf) popup_toolbar2_float_window

0x0e00,	// (0x000307d7) bg_popup_sub_pane_cp27

0xbf5a,	// (0x0003b931) grid_toolbar2_float_pane

0x0e00,	// (0x000307d7) bg_popup_sub_pane_cp26

0xbf5a,	// (0x0003b931) grid_toolbar2_fixed_pane

0x3876,	// (0x0003324d) cell_toolbar2_fixed_pane_ParamLimits

0x3876,	// (0x0003324d) cell_toolbar2_fixed_pane

0x3891,	// (0x00033268) cell_toolbar2_fixed_pane_g1

0xbf7c,	// (0x0003b953) toolbar2_fixed_button_pane

0x5699,	// (0x00035070) toolbar2_fixed_button_pane_g1

0x56a1,	// (0x00035078) toolbar2_fixed_button_pane_g2

0x56a9,	// (0x00035080) toolbar2_fixed_button_pane_g3

0x56b1,	// (0x00035088) toolbar2_fixed_button_pane_g4

0x56b9,	// (0x00035090) toolbar2_fixed_button_pane_g5

0x56c1,	// (0x00035098) toolbar2_fixed_button_pane_g6

0x56c9,	// (0x000350a0) toolbar2_fixed_button_pane_g7

0x56d1,	// (0x000350a8) toolbar2_fixed_button_pane_g8

0x56d9,	// (0x000350b0) toolbar2_fixed_button_pane_g9

0x0008,

0xf870,	// (0x0003f247) toolbar2_fixed_button_pane_g

0xbf84,	// (0x0003b95b) cell_toolbar2_float_pane_ParamLimits

0xbf84,	// (0x0003b95b) cell_toolbar2_float_pane

0xbf95,	// (0x0003b96c) cell_toolbar2_float_pane_g1

0xbf7c,	// (0x0003b953) toolbar2_fixed_button_pane_cp

0x3417,	// (0x00032dee) fep_vkb_accented_list_pane_ParamLimits

0x3417,	// (0x00032dee) fep_vkb_accented_list_pane

0xa9c2,	// (0x0003a399) bg_popup_fep_shadow_pane_g9

0x518b,	// (0x00034b62) bg_popup_fep_shadow_pane_cp3

0x1b7e,	// (0x00031555) list_accented_list_pane

0xbf9e,	// (0x0003b975) list_single_accented_list_pane_ParamLimits

0xbf9e,	// (0x0003b975) list_single_accented_list_pane

0x518b,	// (0x00034b62) list_highlight_pane_cp10

0xbfaf,	// (0x0003b986) list_single_accented_list_pane_t1

0x263a,	// (0x00032011) popup_slider_window_ParamLimits

0x263a,	// (0x00032011) popup_slider_window

0xaf38,	// (0x0003a90f) aid_indentation_list_msg

0x3970,	// (0x00033347) bg_popup_window_pane_cp19

0xc0b3,	// (0x0003ba8a) popup_slider_window_g1

0xc0cf,	// (0x0003baa6) popup_slider_window_g2

0xc0eb,	// (0x0003bac2) popup_slider_window_g3

0x0005,

0xfcec,	// (0x0003f6c3) popup_slider_window_g

0xc147,	// (0x0003bb1e) popup_slider_window_t1

0xc1b9,	// (0x0003bb90) small_volume_slider_vertical_pane

0x7522,	// (0x00036ef9) small_volume_slider_vertical_pane_g1

0x7522,	// (0x00036ef9) small_volume_slider_vertical_pane_g2

0xc1d5,	// (0x0003bbac) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfe,	// (0x0003f6d5) small_volume_slider_vertical_pane_g

0xecd9,	// (0x0003e6b0) area_side_right_pane_ParamLimits

0xecd9,	// (0x0003e6b0) area_side_right_pane

0xf170,	// (0x0003eb47) aid_size_side_button_ParamLimits

0xf170,	// (0x0003eb47) aid_size_side_button

0xf189,	// (0x0003eb60) grid_sctrl_middle_pane_ParamLimits

0xf189,	// (0x0003eb60) grid_sctrl_middle_pane

0xb11f,	// (0x0003aaf6) sctrl_sk_bottom_pane

0xb130,	// (0x0003ab07) sctrl_sk_top_pane

0xb142,	// (0x0003ab19) aid_touch_sctrl_top

0xb14f,	// (0x0003ab26) bg_sctrl_sk_pane_ParamLimits

0xb14f,	// (0x0003ab26) bg_sctrl_sk_pane

0xb15d,	// (0x0003ab34) sctrl_sk_top_pane_g1

0xb16a,	// (0x0003ab41) sctrl_sk_top_pane_t1

0xb142,	// (0x0003ab19) aid_touch_sctrl_bottom

0xb14f,	// (0x0003ab26) bg_sctrl_sk_pane_cp_ParamLimits

0xb14f,	// (0x0003ab26) bg_sctrl_sk_pane_cp

0xb185,	// (0x0003ab5c) sctrl_sk_bottom_pane_g1

0xb16a,	// (0x0003ab41) sctrl_sk_bottom_pane_t1

0xf19f,	// (0x0003eb76) cell_sctrl_middle_pane_ParamLimits

0xf19f,	// (0x0003eb76) cell_sctrl_middle_pane

0xf1b0,	// (0x0003eb87) aid_touch_sctrl_middle_ParamLimits

0xf1b0,	// (0x0003eb87) aid_touch_sctrl_middle

0xf1bd,	// (0x0003eb94) bg_sctrl_middle_pane_ParamLimits

0xf1bd,	// (0x0003eb94) bg_sctrl_middle_pane

0xb78d,	// (0x0003b164) cell_sctrl_middle_pane_g1_ParamLimits

0xb78d,	// (0x0003b164) cell_sctrl_middle_pane_g1

0xf1cb,	// (0x0003eba2) cell_sctrl_middle_pane_g2_ParamLimits

0xf1cb,	// (0x0003eba2) cell_sctrl_middle_pane_g2

0x0001,

0xfd0a,	// (0x0003f6e1) cell_sctrl_middle_pane_g_ParamLimits

0xfd0a,	// (0x0003f6e1) cell_sctrl_middle_pane_g

0x5699,	// (0x00035070) bg_sctrl_middle_pane_g1

0x56a9,	// (0x00035080) bg_sctrl_middle_pane_g2

0x56a1,	// (0x00035078) bg_sctrl_middle_pane_g3

0x56b9,	// (0x00035090) bg_sctrl_middle_pane_g4

0x56b1,	// (0x00035088) bg_sctrl_middle_pane_g5

0x56c1,	// (0x00035098) bg_sctrl_middle_pane_g6

0x56c9,	// (0x000350a0) bg_sctrl_middle_pane_g7

0x56d9,	// (0x000350b0) bg_sctrl_middle_pane_g8

0x0007,

0xfd0f,	// (0x0003f6e6) bg_sctrl_middle_pane_g

0x56d1,	// (0x000350a8) bg_sctrl_middle_pane_g8_copy1

0x5699,	// (0x00035070) bg_sctrl_sk_pane_g1

0x56a1,	// (0x00035078) bg_sctrl_sk_pane_g2

0x56a9,	// (0x00035080) bg_sctrl_sk_pane_g3

0x0008,

0xf870,	// (0x0003f247) bg_sctrl_sk_pane_g

0x190e,	// (0x000312e5) aid_size_touch_scroll_bar

0x56b1,	// (0x00035088) bg_sctrl_sk_pane_g4

0x56b9,	// (0x00035090) bg_sctrl_sk_pane_g5

0x56c1,	// (0x00035098) bg_sctrl_sk_pane_g6

0x56c9,	// (0x000350a0) bg_sctrl_sk_pane_g7

0x56d1,	// (0x000350a8) bg_sctrl_sk_pane_g8

0x56d9,	// (0x000350b0) bg_sctrl_sk_pane_g9

0x540f,	// (0x00034de6) popup_fep_china_hwr2_fs_candidate_window

0x2235,	// (0x00031c0c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x2235,	// (0x00031c0c) popup_fep_china_hwr2_fs_control_window

0xa9e2,	// (0x0003a3b9) sctrl_sk_top_pane_g2

0x0001,

0xfd05,	// (0x0003f6dc) sctrl_sk_top_pane_g

0x3a90,	// (0x00033467) aid_fep_china_hwr2_fs_cell_ParamLimits

0x3a90,	// (0x00033467) aid_fep_china_hwr2_fs_cell

0x3aa4,	// (0x0003347b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x3aa4,	// (0x0003347b) bg_popup_fep_shadow_pane_cp4

0x3abb,	// (0x00033492) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x3abb,	// (0x00033492) bg_popup_fep_shadow_pane_cp5

0x3acd,	// (0x000334a4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x3acd,	// (0x000334a4) popup_fep_china_hwr2_fs_control_bar_grid

0x3ae1,	// (0x000334b8) popup_fep_china_hwr2_fs_control_funtion_grid

0xc230,	// (0x0003bc07) aid_fep_china_hwr2_fs_candi_cell

0x0e00,	// (0x000307d7) bg_popup_fep_shadow_pane_cp6

0xc23a,	// (0x0003bc11) popup_fep_china_hwr2_fs_candidate_grid

0x3ae9,	// (0x000334c0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x3ae9,	// (0x000334c0) cell_fep_china_hwr2_fs_funtion_grid

0x7522,	// (0x00036ef9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc25a,	// (0x0003bc31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc25a,	// (0x0003bc31) cell_fep_china_hwr2_fs_funtion_grid_g1

0xc268,	// (0x0003bc3f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xc268,	// (0x0003bc3f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd20,	// (0x0003f6f7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd20,	// (0x0003f6f7) cell_fep_china_hwr2_fs_funtion_grid_g

0x3b01,	// (0x000334d8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x3b01,	// (0x000334d8) cell_fep_china_hwr2_fs_funtion_grid_t1

0x3b16,	// (0x000334ed) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x3b16,	// (0x000334ed) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd25,	// (0x0003f6fc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd25,	// (0x0003f6fc) cell_fep_china_hwr2_fs_funtion_grid_t

0xc2af,	// (0x0003bc86) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xc2b7,	// (0x0003bc8e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xc2bf,	// (0x0003bc96) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2a,	// (0x0003f701) popup_fep_china_hwr2_fs_control_bar_grid_g

0xc2c7,	// (0x0003bc9e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xc2c7,	// (0x0003bc9e) cell_fep_china_hwr2_fs_candidate_grid

0xc2e0,	// (0x0003bcb7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xc2e8,	// (0x0003bcbf) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7522,	// (0x00036ef9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7522,	// (0x00036ef9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0003f51c) cell_fep_china_hwr2_fs_candidate_grid_g

0xc2f0,	// (0x0003bcc7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x54fe,	// (0x00034ed5) clock_nsta_pane_cp_24_ParamLimits

0x54fe,	// (0x00034ed5) clock_nsta_pane_cp_24

0x555b,	// (0x00034f32) indicator_nsta_pane_cp_24_ParamLimits

0x555b,	// (0x00034f32) indicator_nsta_pane_cp_24

0x6415,	// (0x00035dec) heading_pane_g1

0x0001,

0xf8d5,	// (0x0003f2ac) heading_pane_g

0x3146,	// (0x00032b1d) grid_sct_catagory_button_pane

0x63c9,	// (0x00035da0) scroll_pane_cp5_ParamLimits

0x728a,	// (0x00036c61) button_value_adjust_pane_cp5_ParamLimits

0x728a,	// (0x00036c61) button_value_adjust_pane_cp5

0x7348,	// (0x00036d1f) form2_midp_time_pane_ParamLimits

0xc2fe,	// (0x0003bcd5) cell_sct_catagory_button_pane_ParamLimits

0xc2fe,	// (0x0003bcd5) cell_sct_catagory_button_pane

0x74e7,	// (0x00036ebe) bg_button_pane_cp01_ParamLimits

0x74e7,	// (0x00036ebe) bg_button_pane_cp01

0x7522,	// (0x00036ef9) cell_sct_catagory_button_pane_g1

0x26a9,	// (0x00032080) popup_tb_extension_window

0x3b32,	// (0x00033509) aid_size_cell_ext_ParamLimits

0x3b32,	// (0x00033509) aid_size_cell_ext

0x17ec,	// (0x000311c3) bg_tb_trans_pane_cp1_ParamLimits

0x17ec,	// (0x000311c3) bg_tb_trans_pane_cp1

0x3b58,	// (0x0003352f) grid_tb_ext_pane_ParamLimits

0x3b58,	// (0x0003352f) grid_tb_ext_pane

0x3b8e,	// (0x00033565) cell_tb_ext_pane_ParamLimits

0x3b8e,	// (0x00033565) cell_tb_ext_pane

0x3bb2,	// (0x00033589) cell_tb_ext_pane_g1_ParamLimits

0x3bb2,	// (0x00033589) cell_tb_ext_pane_g1

0xc388,	// (0x0003bd5f) cell_tb_ext_pane_t1

0x14b8,	// (0x00030e8f) list_highlight_pane_cp11_ParamLimits

0x14b8,	// (0x00030e8f) list_highlight_pane_cp11

0x8bc5,	// (0x0003859c) popup_uni_indicator_window_ParamLimits

0x8bc5,	// (0x0003859c) popup_uni_indicator_window

0x1a3c,	// (0x00031413) bg_popup_sub_pane_cp14

0xc3a3,	// (0x0003bd7a) list_uniindi_pane

0xc3af,	// (0x0003bd86) uniindi_top_pane

0x14b8,	// (0x00030e8f) bg_uniindi_top_pane

0xc3ce,	// (0x0003bda5) uniindi_top_pane_g1

0xc3e4,	// (0x0003bdbb) uniindi_top_pane_g2

0x0003,

0xfd31,	// (0x0003f708) uniindi_top_pane_g

0xc40e,	// (0x0003bde5) uniindi_top_pane_t1

0xc438,	// (0x0003be0f) list_single_uniindi_pane_ParamLimits

0xc438,	// (0x0003be0f) list_single_uniindi_pane

0x7522,	// (0x00036ef9) bg_uniindi_top_pane_g1

0xc44a,	// (0x0003be21) list_single_uniindi_pane_g1

0xc45d,	// (0x0003be34) list_single_uniindi_pane_t1

0x8a63,	// (0x0003843a) control_bg_pane

0xc482,	// (0x0003be59) bg_sctrl_sk_pane_cp1

0xc48b,	// (0x0003be62) bg_sctrl_sk_pane_cp2

0xc494,	// (0x0003be6b) control_bg_pane_g1

0xc49d,	// (0x0003be74) control_bg_pane_g2

0x0001,

0xfd3a,	// (0x0003f711) control_bg_pane_g

0x714b,	// (0x00036b22) cell_indicator_nsta_pane_g1_ParamLimits

0x3251,	// (0x00032c28) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0003f480) cell_indicator_nsta_pane_g_ParamLimits

0xdf2a,	// (0x0003d901) form2_midp_time_pane_t1_ParamLimits

0x7bca,	// (0x000375a1) main_idle_act4_pane_ParamLimits

0x7bca,	// (0x000375a1) main_idle_act4_pane

0x26a9,	// (0x00032080) popup_tb_extension_window_ParamLimits

0x3b78,	// (0x0003354f) tb_ext_find_pane_ParamLimits

0x3b78,	// (0x0003354f) tb_ext_find_pane

0xc4a6,	// (0x0003be7d) ai_gene_pane_1_cp1

0x521f,	// (0x00034bf6) ai_gene_pane_2_cp1

0xc4ae,	// (0x0003be85) list_single_idle_plugin_calendar_pane

0xc4b7,	// (0x0003be8e) list_single_idle_plugin_notification_pane

0xc4c0,	// (0x0003be97) list_single_idle_plugin_player_pane

0x3bcf,	// (0x000335a6) list_single_idle_plugin_shortcut_pane_ParamLimits

0x3bcf,	// (0x000335a6) list_single_idle_plugin_shortcut_pane

0x3bf7,	// (0x000335ce) main_idle_act4_pane_t1

0x3c0d,	// (0x000335e4) main_idle_act4_pane_t2

0x0001,

0xfd3f,	// (0x0003f716) main_idle_act4_pane_t

0x3c23,	// (0x000335fa) middle_sk_idle_act4_pane_ParamLimits

0x3c23,	// (0x000335fa) middle_sk_idle_act4_pane

0x3c3f,	// (0x00033616) popup_clock_digital_analogue_window_cp2

0x3c65,	// (0x0003363c) shortcut_wheel_idle_act4_pane_ParamLimits

0x3c65,	// (0x0003363c) shortcut_wheel_idle_act4_pane

0x7522,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g1

0x7522,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g2

0x7522,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g3

0x7522,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g4

0x7522,	// (0x00036ef9) shortcut_wheel_idle_act4_pane_g5

0xc553,	// (0x0003bf2a) shortcut_wheel_idle_act4_pane_g6

0xc55b,	// (0x0003bf32) shortcut_wheel_idle_act4_pane_g7

0xc563,	// (0x0003bf3a) shortcut_wheel_idle_act4_pane_g8

0xc56b,	// (0x0003bf42) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x0003f71b) shortcut_wheel_idle_act4_pane_g

0xf1d8,	// (0x0003ebaf) middle_sk_idle_act4_pane_g1_ParamLimits

0xf1d8,	// (0x0003ebaf) middle_sk_idle_act4_pane_g1

0x3ce0,	// (0x000336b7) middle_sk_idle_act4_pane_g2_ParamLimits

0x3ce0,	// (0x000336b7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd67,	// (0x0003f73e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd67,	// (0x0003f73e) middle_sk_idle_act4_pane_g

0x3cf8,	// (0x000336cf) middle_sk_idle_act4_pane_t1_ParamLimits

0x3cf8,	// (0x000336cf) middle_sk_idle_act4_pane_t1

0x3d27,	// (0x000336fe) grid_ai_shortcut_pane_ParamLimits

0x3d27,	// (0x000336fe) grid_ai_shortcut_pane

0x3d44,	// (0x0003371b) list_highlight_pane_cp16_ParamLimits

0x3d44,	// (0x0003371b) list_highlight_pane_cp16

0x3d51,	// (0x00033728) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x3d51,	// (0x00033728) list_single_idle_plugin_shortcut_pane_g1

0x3d5d,	// (0x00033734) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x3d5d,	// (0x00033734) list_single_idle_plugin_shortcut_pane_g2

0x3d79,	// (0x00033750) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x3d79,	// (0x00033750) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6c,	// (0x0003f743) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6c,	// (0x0003f743) list_single_idle_plugin_shortcut_pane_g

0x3d8e,	// (0x00033765) cell_ai_shortcut_pane_ParamLimits

0x3d8e,	// (0x00033765) cell_ai_shortcut_pane

0x3da4,	// (0x0003377b) cell_ai_shortcut_pane_g1_ParamLimits

0x3da4,	// (0x0003377b) cell_ai_shortcut_pane_g1

0xc4a6,	// (0x0003be7d) ai_gene_pane_1_cp2

0xc698,	// (0x0003c06f) ai_gene_pane_2_cp2

0xc6a0,	// (0x0003c077) list_highlight_pane_cp15

0xc6a9,	// (0x0003c080) list_single_idle_plugin_calendar_pane_g1

0xc6a0,	// (0x0003c077) list_highlight_pane_cp17

0xc6b1,	// (0x0003c088) list_single_idle_plugin_calendar_pane_g1_copy1

0xc6b9,	// (0x0003c090) list_single_idle_plugin_player_pane_g1

0x6c21,	// (0x000365f8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd73,	// (0x0003f74a) list_single_idle_plugin_player_pane_g

0xc6c1,	// (0x0003c098) list_single_idle_plugin_player_pane_t1

0xc6cf,	// (0x0003c0a6) list_single_idle_plugin_player_pane_t2

0xc6dd,	// (0x0003c0b4) list_single_idle_plugin_player_pane_t3

0xc6eb,	// (0x0003c0c2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd78,	// (0x0003f74f) list_single_idle_plugin_player_pane_t

0xc6f9,	// (0x0003c0d0) wait_bar_pane_cp15

0xc701,	// (0x0003c0d8) grid_ai_notification_pane

0x6c21,	// (0x000365f8) list_single_idle_plugin_notification_pane_g1

0x3dc6,	// (0x0003379d) cell_ai_notification_pane_ParamLimits

0x3dc6,	// (0x0003379d) cell_ai_notification_pane

0xc717,	// (0x0003c0ee) cell_ai_notification_pane_g1

0xc71f,	// (0x0003c0f6) cell_ai_notification_pane_t1

0x3dd3,	// (0x000337aa) tb_ext_find_button_pane

0x3ddb,	// (0x000337b2) tb_ext_find_pane_g1

0x3de3,	// (0x000337ba) tb_ext_find_pane_t1

0x4cfe,	// (0x000346d5) tb_ext_find_button_pane_g1

0xc74b,	// (0x0003c122) tb_ext_find_button_pane_g2

0x0001,

0xfd81,	// (0x0003f758) tb_ext_find_button_pane_g

0x3bf7,	// (0x000335ce) main_idle_act4_pane_t1_ParamLimits

0x3c0d,	// (0x000335e4) main_idle_act4_pane_t2_ParamLimits

0xfd3f,	// (0x0003f716) main_idle_act4_pane_t_ParamLimits

0x3c3f,	// (0x00033616) popup_clock_digital_analogue_window_cp2_ParamLimits

0x3c55,	// (0x0003362c) sat_plugin_idle_act4_pane_ParamLimits

0x3c55,	// (0x0003362c) sat_plugin_idle_act4_pane

0x3df1,	// (0x000337c8) sat_plugin_idle_act4_pane_t1_ParamLimits

0x3df1,	// (0x000337c8) sat_plugin_idle_act4_pane_t1

0x3e09,	// (0x000337e0) sat_plugin_idle_act4_pane_t2_ParamLimits

0x3e09,	// (0x000337e0) sat_plugin_idle_act4_pane_t2

0x3e21,	// (0x000337f8) sat_plugin_idle_act4_pane_t3_ParamLimits

0x3e21,	// (0x000337f8) sat_plugin_idle_act4_pane_t3

0x3e39,	// (0x00033810) sat_plugin_idle_act4_pane_t4_ParamLimits

0x3e39,	// (0x00033810) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd86,	// (0x0003f75d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd86,	// (0x0003f75d) sat_plugin_idle_act4_pane_t

0x8b26,	// (0x000384fd) popup_battery_window_ParamLimits

0x8b26,	// (0x000384fd) popup_battery_window

0x14b8,	// (0x00030e8f) bg_popup_sub_pane_cp25_ParamLimits

0x14b8,	// (0x00030e8f) bg_popup_sub_pane_cp25

0xc7a0,	// (0x0003c177) popup_battery_window_g1_ParamLimits

0xc7a0,	// (0x0003c177) popup_battery_window_g1

0xc7ac,	// (0x0003c183) popup_battery_window_t1_ParamLimits

0xc7ac,	// (0x0003c183) popup_battery_window_t1

0xc7be,	// (0x0003c195) popup_battery_window_t2_ParamLimits

0xc7be,	// (0x0003c195) popup_battery_window_t2

0x0001,

0xfd8f,	// (0x0003f766) popup_battery_window_t_ParamLimits

0xfd8f,	// (0x0003f766) popup_battery_window_t

0x1fa0,	// (0x00031977) midp_canvas_pane_ParamLimits

0x1ff5,	// (0x000319cc) midp_keypad_pane_ParamLimits

0x1ff5,	// (0x000319cc) midp_keypad_pane

0x4ac9,	// (0x000344a0) main_midp_pane_ParamLimits

0x7226,	// (0x00036bfd) signal_pane_g2_cp_ParamLimits

0x3e51,	// (0x00033828) aid_size_cell_midp_keypad_ParamLimits

0x3e51,	// (0x00033828) aid_size_cell_midp_keypad

0x3e6f,	// (0x00033846) midp_keyp_game_grid_pane_ParamLimits

0x3e6f,	// (0x00033846) midp_keyp_game_grid_pane

0x3e8e,	// (0x00033865) midp_keyp_rocker_pane_ParamLimits

0x3e8e,	// (0x00033865) midp_keyp_rocker_pane

0x3ecf,	// (0x000338a6) midp_keyp_sk_left_pane_ParamLimits

0x3ecf,	// (0x000338a6) midp_keyp_sk_left_pane

0x3f21,	// (0x000338f8) midp_keyp_sk_right_pane_ParamLimits

0x3f21,	// (0x000338f8) midp_keyp_sk_right_pane

0x0e00,	// (0x000307d7) bg_button_pane_cp03

0x3f6d,	// (0x00033944) midp_keyp_sk_left_pane_g1

0x0e00,	// (0x000307d7) bg_button_pane_cp04

0x3f6d,	// (0x00033944) midp_keyp_sk_right_pane_g1

0x7522,	// (0x00036ef9) midp_keyp_rocker_pane_g1

0x3f76,	// (0x0003394d) keyp_game_cell_pane_ParamLimits

0x3f76,	// (0x0003394d) keyp_game_cell_pane

0x0e00,	// (0x000307d7) bg_button_pane_cp02

0x3f98,	// (0x0003396f) keyp_game_cell_pane_g1

0xed1b,	// (0x0003e6f2) popup_fep_vkb2_window_ParamLimits

0xed1b,	// (0x0003e6f2) popup_fep_vkb2_window

0xf1e6,	// (0x0003ebbd) aid_size_cell_vkb2_ParamLimits

0xf1e6,	// (0x0003ebbd) aid_size_cell_vkb2

0xf21c,	// (0x0003ebf3) popup_fep_vkb2_window_g1_ParamLimits

0xf21c,	// (0x0003ebf3) popup_fep_vkb2_window_g1

0xf26c,	// (0x0003ec43) vkb2_area_bottom_pane_ParamLimits

0xf26c,	// (0x0003ec43) vkb2_area_bottom_pane

0xf2aa,	// (0x0003ec81) vkb2_area_keypad_pane_ParamLimits

0xf2aa,	// (0x0003ec81) vkb2_area_keypad_pane

0xf2e8,	// (0x0003ecbf) vkb2_area_top_pane_ParamLimits

0xf2e8,	// (0x0003ecbf) vkb2_area_top_pane

0xf364,	// (0x0003ed3b) vkb2_top_entry_pane_ParamLimits

0xf364,	// (0x0003ed3b) vkb2_top_entry_pane

0xf391,	// (0x0003ed68) vkb2_top_grid_left_pane_ParamLimits

0xf391,	// (0x0003ed68) vkb2_top_grid_left_pane

0xf3b1,	// (0x0003ed88) vkb2_top_grid_right_pane_ParamLimits

0xf3b1,	// (0x0003ed88) vkb2_top_grid_right_pane

0xb3ce,	// (0x0003ada5) vkb2_cell_keypad_pane_ParamLimits

0xb3ce,	// (0x0003ada5) vkb2_cell_keypad_pane

0xf3f7,	// (0x0003edce) vkb2_area_bottom_grid_pane_ParamLimits

0xf3f7,	// (0x0003edce) vkb2_area_bottom_grid_pane

0xf41d,	// (0x0003edf4) vkb2_area_bottom_pane_g1_ParamLimits

0xf41d,	// (0x0003edf4) vkb2_area_bottom_pane_g1

0xf443,	// (0x0003ee1a) vkb2_area_bottom_pane_g2_ParamLimits

0xf443,	// (0x0003ee1a) vkb2_area_bottom_pane_g2

0xf474,	// (0x0003ee4b) vkb2_area_bottom_pane_g3_ParamLimits

0xf474,	// (0x0003ee4b) vkb2_area_bottom_pane_g3

0x0002,

0xfd94,	// (0x0003f76b) vkb2_area_bottom_pane_g_ParamLimits

0xfd94,	// (0x0003f76b) vkb2_area_bottom_pane_g

0xb546,	// (0x0003af1d) vkb2_top_cell_left_pane_ParamLimits

0xb546,	// (0x0003af1d) vkb2_top_cell_left_pane

0x4285,	// (0x00033c5c) vkb2_top_entry_pane_g1_ParamLimits

0x4285,	// (0x00033c5c) vkb2_top_entry_pane_g1

0x4293,	// (0x00033c6a) vkb2_top_entry_pane_t1_ParamLimits

0x4293,	// (0x00033c6a) vkb2_top_entry_pane_t1

0xc911,	// (0x0003c2e8) vkb2_top_entry_pane_t2_ParamLimits

0xc911,	// (0x0003c2e8) vkb2_top_entry_pane_t2

0xc943,	// (0x0003c31a) vkb2_top_entry_pane_t3_ParamLimits

0xc943,	// (0x0003c31a) vkb2_top_entry_pane_t3

0x0002,

0xfd9b,	// (0x0003f772) vkb2_top_entry_pane_t_ParamLimits

0xfd9b,	// (0x0003f772) vkb2_top_entry_pane_t

0xf4ca,	// (0x0003eea1) vkb2_top_grid_right_pane_g1_ParamLimits

0xf4ca,	// (0x0003eea1) vkb2_top_grid_right_pane_g1

0xb5a9,	// (0x0003af80) vkb2_top_grid_right_pane_g2_ParamLimits

0xb5a9,	// (0x0003af80) vkb2_top_grid_right_pane_g2

0xb5c1,	// (0x0003af98) vkb2_top_grid_right_pane_g3_ParamLimits

0xb5c1,	// (0x0003af98) vkb2_top_grid_right_pane_g3

0xf4e0,	// (0x0003eeb7) vkb2_top_grid_right_pane_g4_ParamLimits

0xf4e0,	// (0x0003eeb7) vkb2_top_grid_right_pane_g4

0x0003,

0xfda2,	// (0x0003f779) vkb2_top_grid_right_pane_g_ParamLimits

0xfda2,	// (0x0003f779) vkb2_top_grid_right_pane_g

0xb5ef,	// (0x0003afc6) vkb2_top_cell_left_pane_g1

0xb606,	// (0x0003afdd) vkb2_cell_keypad_pane_g1_ParamLimits

0xb606,	// (0x0003afdd) vkb2_cell_keypad_pane_g1

0xc959,	// (0x0003c330) vkb2_cell_keypad_pane_t1_ParamLimits

0xc959,	// (0x0003c330) vkb2_cell_keypad_pane_t1

0xb614,	// (0x0003afeb) vkb2_cell_bottom_grid_pane_ParamLimits

0xb614,	// (0x0003afeb) vkb2_cell_bottom_grid_pane

0xb64d,	// (0x0003b024) vkb2_cell_bottom_grid_pane_g1

0x3c84,	// (0x0003365b) aid_call2_pane_cp02

0x3c8c,	// (0x00033663) aid_call_pane_cp02

0x3c94,	// (0x0003366b) clock_digital_number_pane_cp10

0x3c9c,	// (0x00033673) clock_digital_number_pane_cp11

0x3ca4,	// (0x0003367b) clock_digital_number_pane_cp12

0x3cac,	// (0x00033683) clock_digital_number_pane_cp13

0x3cb4,	// (0x0003368b) clock_digital_separator_pane_cp10

0x4cfe,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g1

0x4cfe,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g2

0x3cbc,	// (0x00033693) popup_clock_digital_analogue_window_cp2_g3

0x4cfe,	// (0x000346d5) popup_clock_digital_analogue_window_cp2_g4

0x3cbc,	// (0x00033693) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x0003f72e) popup_clock_digital_analogue_window_cp2_g

0x3cc4,	// (0x0003369b) popup_clock_digital_analogue_window_cp2_t1

0x3cd2,	// (0x000336a9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd62,	// (0x0003f739) popup_clock_digital_analogue_window_cp2_t

0x7522,	// (0x00036ef9) clock_digital_number_pane_cp10_g1

0x7522,	// (0x00036ef9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003f51c) clock_digital_number_pane_cp10_g

0x7522,	// (0x00036ef9) clock_digital_separator_pane_cp10_g1

0x7522,	// (0x00036ef9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003f51c) clock_digital_separator_pane_cp10_g

0xc3f0,	// (0x0003bdc7) uniindi_top_pane_g3

0xc401,	// (0x0003bdd8) uniindi_top_pane_g4

0xb439,	// (0x0003ae10) vkb2_row_keypad_pane_ParamLimits

0xb439,	// (0x0003ae10) vkb2_row_keypad_pane

0xb669,	// (0x0003b040) vkb2_cell_t_keypad_pane_ParamLimits

0xb669,	// (0x0003b040) vkb2_cell_t_keypad_pane

0xb676,	// (0x0003b04d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb676,	// (0x0003b04d) vkb2_cell_t_keypad_pane_cp08

0xb686,	// (0x0003b05d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb686,	// (0x0003b05d) vkb2_cell_t_keypad_pane_cp09

0xb697,	// (0x0003b06e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb697,	// (0x0003b06e) vkb2_cell_t_keypad_pane_cp01

0xb6a7,	// (0x0003b07e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb6a7,	// (0x0003b07e) vkb2_cell_t_keypad_pane_cp02

0xb6b7,	// (0x0003b08e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb6b7,	// (0x0003b08e) vkb2_cell_t_keypad_pane_cp03

0xb6c7,	// (0x0003b09e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb6c7,	// (0x0003b09e) vkb2_cell_t_keypad_pane_cp04

0xb6d7,	// (0x0003b0ae) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb6d7,	// (0x0003b0ae) vkb2_cell_t_keypad_pane_cp05

0xb6e7,	// (0x0003b0be) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb6e7,	// (0x0003b0be) vkb2_cell_t_keypad_pane_cp06

0xb6f7,	// (0x0003b0ce) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb6f7,	// (0x0003b0ce) vkb2_cell_t_keypad_pane_cp07

0xb707,	// (0x0003b0de) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb707,	// (0x0003b0de) vkb2_cell_t_keypad_pane_cp10

0xa9e2,	// (0x0003a3b9) vkb2_cell_t_keypad_pane_g1

0xc970,	// (0x0003c347) vkb2_cell_t_keypad_pane_t1

0x8a63,	// (0x0003843a) popup_grid_graphic2_window

0x42f8,	// (0x00033ccf) aid_size_cell_graphic2_ParamLimits

0x42f8,	// (0x00033ccf) aid_size_cell_graphic2

0x5c3c,	// (0x00035613) bg_popup_window_pane_cp21_ParamLimits

0x5c3c,	// (0x00035613) bg_popup_window_pane_cp21

0x432a,	// (0x00033d01) graphic2_pages_pane_ParamLimits

0x432a,	// (0x00033d01) graphic2_pages_pane

0x4373,	// (0x00033d4a) grid_graphic2_control_pane_ParamLimits

0x4373,	// (0x00033d4a) grid_graphic2_control_pane

0x43a1,	// (0x00033d78) grid_graphic2_pane_ParamLimits

0x43a1,	// (0x00033d78) grid_graphic2_pane

0x4400,	// (0x00033dd7) cell_graphic2_pane

0x0e00,	// (0x000307d7) main_comp_mode_pane

0xafc8,	// (0x0003a99f) list_ai3_gene_pane_ParamLimits

0x3970,	// (0x00033347) bg_popup_window_pane_cp19_ParamLimits

0xc05b,	// (0x0003ba32) bg_touch_area_indi_pane_ParamLimits

0xc05b,	// (0x0003ba32) bg_touch_area_indi_pane

0xc071,	// (0x0003ba48) bg_touch_area_indi_pane_cp01_ParamLimits

0xc071,	// (0x0003ba48) bg_touch_area_indi_pane_cp01

0xc087,	// (0x0003ba5e) bg_touch_area_indi_pane_cp02_ParamLimits

0xc087,	// (0x0003ba5e) bg_touch_area_indi_pane_cp02

0xc09d,	// (0x0003ba74) bg_touch_area_indi_pane_cp03_ParamLimits

0xc09d,	// (0x0003ba74) bg_touch_area_indi_pane_cp03

0xc0b3,	// (0x0003ba8a) popup_slider_window_g1_ParamLimits

0xc0cf,	// (0x0003baa6) popup_slider_window_g2_ParamLimits

0xc0eb,	// (0x0003bac2) popup_slider_window_g3_ParamLimits

0xfcec,	// (0x0003f6c3) popup_slider_window_g_ParamLimits

0xc147,	// (0x0003bb1e) popup_slider_window_t1_ParamLimits

0xc1b9,	// (0x0003bb90) small_volume_slider_vertical_pane_ParamLimits

0x4400,	// (0x00033dd7) cell_graphic2_pane_ParamLimits

0x4449,	// (0x00033e20) bg_button_pane_cp10_ParamLimits

0x4449,	// (0x00033e20) bg_button_pane_cp10

0x445a,	// (0x00033e31) bg_button_pane_cp11_ParamLimits

0x445a,	// (0x00033e31) bg_button_pane_cp11

0x446b,	// (0x00033e42) graphic2_pages_pane_g1_ParamLimits

0x446b,	// (0x00033e42) graphic2_pages_pane_g1

0x4486,	// (0x00033e5d) graphic2_pages_pane_g2_ParamLimits

0x4486,	// (0x00033e5d) graphic2_pages_pane_g2

0x0001,

0xfdb0,	// (0x0003f787) graphic2_pages_pane_g_ParamLimits

0xfdb0,	// (0x0003f787) graphic2_pages_pane_g

0x449e,	// (0x00033e75) graphic2_pages_pane_t1_ParamLimits

0x449e,	// (0x00033e75) graphic2_pages_pane_t1

0x44b6,	// (0x00033e8d) cell_graphic2_control_pane_ParamLimits

0x44b6,	// (0x00033e8d) cell_graphic2_control_pane

0x44d0,	// (0x00033ea7) cell_graphic2_pane_g1_ParamLimits

0x44d0,	// (0x00033ea7) cell_graphic2_pane_g1

0xf4f6,	// (0x0003eecd) cell_graphic2_pane_g2_ParamLimits

0xf4f6,	// (0x0003eecd) cell_graphic2_pane_g2

0x44dd,	// (0x00033eb4) cell_graphic2_pane_g3_ParamLimits

0x44dd,	// (0x00033eb4) cell_graphic2_pane_g3

0xf503,	// (0x0003eeda) cell_graphic2_pane_g4_ParamLimits

0xf503,	// (0x0003eeda) cell_graphic2_pane_g4

0x44ea,	// (0x00033ec1) cell_graphic2_pane_g5_ParamLimits

0x44ea,	// (0x00033ec1) cell_graphic2_pane_g5

0x0004,

0xfdb5,	// (0x0003f78c) cell_graphic2_pane_g_ParamLimits

0xfdb5,	// (0x0003f78c) cell_graphic2_pane_g

0x450a,	// (0x00033ee1) cell_graphic2_pane_t1_ParamLimits

0x450a,	// (0x00033ee1) cell_graphic2_pane_t1

0x6409,	// (0x00035de0) grid_highlight_pane_cp11_ParamLimits

0x6409,	// (0x00035de0) grid_highlight_pane_cp11

0x1a3c,	// (0x00031413) bg_button_pane_cp05

0x453f,	// (0x00033f16) cell_graphic2_control_pane_g1

0x7522,	// (0x00036ef9) bg_touch_area_indi_pane_g1

0xc982,	// (0x0003c359) aid_cmod_rocker_key_size

0xc98c,	// (0x0003c363) aid_cmode_itu_key_size

0xc996,	// (0x0003c36d) main_cmode_video_pane

0xc99e,	// (0x0003c375) main_comp_mode_itu_pane

0xc9a8,	// (0x0003c37f) main_comp_mode_rocker_pane

0xc9b0,	// (0x0003c387) cell_cmode_rocker_pane_ParamLimits

0xc9b0,	// (0x0003c387) cell_cmode_rocker_pane

0xc9c2,	// (0x0003c399) cell_cmode_itu_pane_ParamLimits

0xc9c2,	// (0x0003c399) cell_cmode_itu_pane

0x1a3c,	// (0x00031413) bg_button_pane_cp06_ParamLimits

0x1a3c,	// (0x00031413) bg_button_pane_cp06

0x7750,	// (0x00037127) cell_cmode_rocker_pane_g1_ParamLimits

0x7750,	// (0x00037127) cell_cmode_rocker_pane_g1

0xc25a,	// (0x0003bc31) cell_cmode_rocker_pane_g2_ParamLimits

0xc25a,	// (0x0003bc31) cell_cmode_rocker_pane_g2

0x0001,

0xfdc5,	// (0x0003f79c) cell_cmode_rocker_pane_g_ParamLimits

0xfdc5,	// (0x0003f79c) cell_cmode_rocker_pane_g

0x0e00,	// (0x000307d7) bg_button_pane_cp07

0xc9d7,	// (0x0003c3ae) cell_cmode_itu_pane_g1

0xc9e0,	// (0x0003c3b7) cell_cmode_itu_pane_t1

0xc9ee,	// (0x0003c3c5) cell_cmode_itu_pane_t2

0x0001,

0xfdca,	// (0x0003f7a1) cell_cmode_itu_pane_t

0xc472,	// (0x0003be49) aid_touch_ctrl_left

0xc47a,	// (0x0003be51) aid_touch_ctrl_right

0x0e00,	// (0x000307d7) compa_mode_pane

0x454c,	// (0x00033f23) aid_cmod_rocker_key_size_cp

0x4556,	// (0x00033f2d) aid_cmode_itu_key_size_cp

0xc9fc,	// (0x0003c3d3) compa_mode_pane_g1

0xca04,	// (0x0003c3db) compa_mode_pane_g2

0xca0c,	// (0x0003c3e3) compa_mode_pane_g3

0x0002,

0xfdcf,	// (0x0003f7a6) compa_mode_pane_g

0x4560,	// (0x00033f37) main_comp_mode_itu_pane_cp

0x456a,	// (0x00033f41) main_comp_mode_rocker_pane_cp

0x4574,	// (0x00033f4b) cell_cmode_itu_pane_cp_ParamLimits

0x4574,	// (0x00033f4b) cell_cmode_itu_pane_cp

0x4589,	// (0x00033f60) cell_cmode_rocker_pane_cp_ParamLimits

0x4589,	// (0x00033f60) cell_cmode_rocker_pane_cp

0x1a3c,	// (0x00031413) bg_button_pane_cp06_cp_ParamLimits

0x1a3c,	// (0x00031413) bg_button_pane_cp06_cp

0x7750,	// (0x00037127) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7750,	// (0x00037127) cell_cmode_rocker_pane_g1_cp

0x7522,	// (0x00036ef9) cell_cmode_rocker_pane_g2_cp

0x0e00,	// (0x000307d7) bg_button_pane_cp07_cp

0x459b,	// (0x00033f72) cell_cmode_itu_pane_g1_cp

0x45a4,	// (0x00033f7b) cell_cmode_itu_pane_t1_cp

0x45b2,	// (0x00033f89) cell_cmode_itu_pane_t2_cp

0x304d,	// (0x00032a24) settings_code_pane_cp2

0x1163,	// (0x00030b3a) bg_popup_window_pane_cp3_ParamLimits

0x1690,	// (0x00031067) heading_pane_cp3_ParamLimits

0x169c,	// (0x00031073) listscroll_popup_graphic_pane_ParamLimits

0xa79d,	// (0x0003a174) fep_hwr_aid_pane_ParamLimits

0xb142,	// (0x0003ab19) aid_touch_sctrl_top_ParamLimits

0xb15d,	// (0x0003ab34) sctrl_sk_top_pane_g1_ParamLimits

0xa9e2,	// (0x0003a3b9) sctrl_sk_top_pane_g2_ParamLimits

0xfd05,	// (0x0003f6dc) sctrl_sk_top_pane_g_ParamLimits

0xb16a,	// (0x0003ab41) sctrl_sk_top_pane_t1_ParamLimits

0xb142,	// (0x0003ab19) aid_touch_sctrl_bottom_ParamLimits

0xb16a,	// (0x0003ab41) sctrl_sk_bottom_pane_t1_ParamLimits

0xc3bc,	// (0x0003bd93) aid_area_touch_clock

0xf326,	// (0x0003ecfd) aid_vkb2_area_top_pane_cell_ParamLimits

0xf326,	// (0x0003ecfd) aid_vkb2_area_top_pane_cell

0xf3d1,	// (0x0003eda8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xf3d1,	// (0x0003eda8) aid_vkb2_area_bottom_pane_cell

0xc909,	// (0x0003c2e0) popup_char_count_window

0xca14,	// (0x0003c3eb) popup_char_count_window_g1

0xca1d,	// (0x0003c3f4) popup_char_count_window_g2

0xca26,	// (0x0003c3fd) popup_char_count_window_g3

0x0002,

0xfdd6,	// (0x0003f7ad) popup_char_count_window_g

0xca2f,	// (0x0003c406) popup_char_count_window_t1

0xb21e,	// (0x0003abf5) popup_fep_char_preview_window_ParamLimits

0xb21e,	// (0x0003abf5) popup_fep_char_preview_window

0xf346,	// (0x0003ed1d) vkb2_top_candi_pane_ParamLimits

0xf346,	// (0x0003ed1d) vkb2_top_candi_pane

0x45c0,	// (0x00033f97) cell_vkb2_top_candi_pane_ParamLimits

0x45c0,	// (0x00033f97) cell_vkb2_top_candi_pane

0xb71c,	// (0x0003b0f3) bg_popup_fep_char_preview_window_ParamLimits

0xb71c,	// (0x0003b0f3) bg_popup_fep_char_preview_window

0xb72a,	// (0x0003b101) popup_fep_char_preview_window_t1_ParamLimits

0xb72a,	// (0x0003b101) popup_fep_char_preview_window_t1

0xca3d,	// (0x0003c414) bg_popup_fep_char_preview_window_g1

0xca45,	// (0x0003c41c) bg_popup_fep_char_preview_window_g2

0xca4d,	// (0x0003c424) bg_popup_fep_char_preview_window_g3

0xca55,	// (0x0003c42c) bg_popup_fep_char_preview_window_g4

0xca5d,	// (0x0003c434) bg_popup_fep_char_preview_window_g5

0xb764,	// (0x0003b13b) bg_popup_fep_char_preview_window_g6

0xca65,	// (0x0003c43c) bg_popup_fep_char_preview_window_g7

0xca6d,	// (0x0003c444) bg_popup_fep_char_preview_window_g8

0xca75,	// (0x0003c44c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddd,	// (0x0003f7b4) bg_popup_fep_char_preview_window_g

0xa9e2,	// (0x0003a3b9) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa9e2,	// (0x0003a3b9) cell_vkb2_top_candi_pane_g1

0xa9f0,	// (0x0003a3c7) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa9f0,	// (0x0003a3c7) cell_vkb2_top_candi_pane_g2

0xbbca,	// (0x0003b5a1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbbca,	// (0x0003b5a1) cell_vkb2_top_candi_pane_g3

0xb76c,	// (0x0003b143) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb76c,	// (0x0003b143) cell_vkb2_top_candi_pane_g4

0x79a0,	// (0x00037377) cell_vkb2_top_candi_pane_g5_ParamLimits

0x79a0,	// (0x00037377) cell_vkb2_top_candi_pane_g5

0xb78d,	// (0x0003b164) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb78d,	// (0x0003b164) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf0,	// (0x0003f7c7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf0,	// (0x0003f7c7) cell_vkb2_top_candi_pane_g

0xb79b,	// (0x0003b172) cell_vkb2_top_candi_pane_t1

0xa330,	// (0x00039d07) aid_size_touch_slider_mark_ParamLimits

0xa330,	// (0x00039d07) aid_size_touch_slider_mark

0x435e,	// (0x00033d35) grid_graphic2_catg_pane_ParamLimits

0x435e,	// (0x00033d35) grid_graphic2_catg_pane

0x43d5,	// (0x00033dac) popup_grid_graphic2_window_t1_ParamLimits

0x43d5,	// (0x00033dac) popup_grid_graphic2_window_t1

0x43ea,	// (0x00033dc1) popup_grid_graphic2_window_t2_ParamLimits

0x43ea,	// (0x00033dc1) popup_grid_graphic2_window_t2

0x0001,

0xfdab,	// (0x0003f782) popup_grid_graphic2_window_t_ParamLimits

0xfdab,	// (0x0003f782) popup_grid_graphic2_window_t

0x1a3c,	// (0x00031413) bg_button_pane_cp05_ParamLimits

0x453f,	// (0x00033f16) cell_graphic2_control_pane_g1_ParamLimits

0xc438,	// (0x0003be0f) cell_graphic2_catg_pane_ParamLimits

0xc438,	// (0x0003be0f) cell_graphic2_catg_pane

0x0e00,	// (0x000307d7) bg_button_pane_cp12

0x460a,	// (0x00033fe1) cell_graphic2_catg_pane_g1

0xc388,	// (0x0003bd5f) cell_tb_ext_pane_t1_ParamLimits

0xb566,	// (0x0003af3d) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb566,	// (0x0003af3d) vkb2_top_cell_right_narrow_pane

0xb57e,	// (0x0003af55) vkb2_top_cell_right_wide_pane_ParamLimits

0xb57e,	// (0x0003af55) vkb2_top_cell_right_wide_pane

0xa78f,	// (0x0003a166) bg_vkb2_func_pane_ParamLimits

0xa78f,	// (0x0003a166) bg_vkb2_func_pane

0xb5ef,	// (0x0003afc6) vkb2_top_cell_left_pane_g1_ParamLimits

0xa78f,	// (0x0003a166) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa78f,	// (0x0003a166) bg_vkb2_fuc_pane_cp03

0xb64d,	// (0x0003b024) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x56a9,	// (0x00035080) bg_vkb2_func_pane_g1

0x56a1,	// (0x00035078) bg_vkb2_func_pane_g2

0x56b1,	// (0x00035088) bg_vkb2_func_pane_g3

0x56b9,	// (0x00035090) bg_vkb2_func_pane_g4

0x56c1,	// (0x00035098) bg_vkb2_func_pane_g5

0x56c9,	// (0x000350a0) bg_vkb2_func_pane_g6

0x56d9,	// (0x000350b0) bg_vkb2_func_pane_g7

0x56d1,	// (0x000350a8) bg_vkb2_func_pane_g8

0x5699,	// (0x00035070) bg_vkb2_func_pane_g9

0x0008,

0xfdfd,	// (0x0003f7d4) bg_vkb2_func_pane_g

0xa78f,	// (0x0003a166) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa78f,	// (0x0003a166) bg_vkb2_fuc_pane_cp01

0xb5ef,	// (0x0003afc6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb5ef,	// (0x0003afc6) vkb2_top_cell_right_wide_pane_g1

0xa78f,	// (0x0003a166) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa78f,	// (0x0003a166) bg_vkb2_fuc_pane_cp02

0xb64d,	// (0x0003b024) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb64d,	// (0x0003b024) vkb2_top_cell_right_narrow_pane_g1

0x38be,	// (0x00033295) aid_touch_area_decrease_ParamLimits

0x38be,	// (0x00033295) aid_touch_area_decrease

0x38ec,	// (0x000332c3) aid_touch_area_increase_ParamLimits

0x38ec,	// (0x000332c3) aid_touch_area_increase

0x3914,	// (0x000332eb) aid_touch_area_mute_ParamLimits

0x3914,	// (0x000332eb) aid_touch_area_mute

0x393c,	// (0x00033313) aid_touch_area_slider_ParamLimits

0x393c,	// (0x00033313) aid_touch_area_slider

0x397c,	// (0x00033353) popup_slider_window_g4_ParamLimits

0x397c,	// (0x00033353) popup_slider_window_g4

0x39a4,	// (0x0003337b) popup_slider_window_g5_ParamLimits

0x39a4,	// (0x0003337b) popup_slider_window_g5

0x39d8,	// (0x000333af) popup_slider_window_g6_ParamLimits

0x39d8,	// (0x000333af) popup_slider_window_g6

0xc173,	// (0x0003bb4a) popup_slider_window_t2_ParamLimits

0xc173,	// (0x0003bb4a) popup_slider_window_t2

0x0001,

0xfcf9,	// (0x0003f6d0) popup_slider_window_t_ParamLimits

0xfcf9,	// (0x0003f6d0) popup_slider_window_t

0x39f4,	// (0x000333cb) slider_pane_ParamLimits

0x39f4,	// (0x000333cb) slider_pane

0xca7d,	// (0x0003c454) slider_pane_g1_ParamLimits

0xca7d,	// (0x0003c454) slider_pane_g1

0xca91,	// (0x0003c468) slider_pane_g2_ParamLimits

0xca91,	// (0x0003c468) slider_pane_g2

0xcaa7,	// (0x0003c47e) slider_pane_g3_ParamLimits

0xcaa7,	// (0x0003c47e) slider_pane_g3

0x0003,

0xfe10,	// (0x0003f7e7) slider_pane_g_ParamLimits

0xfe10,	// (0x0003f7e7) slider_pane_g

0x26e5,	// (0x000320bc) popup_tb_float_extension_window_ParamLimits

0x26e5,	// (0x000320bc) popup_tb_float_extension_window

0xcad3,	// (0x0003c4aa) aid_size_cell_tb_float_ext

0x0e00,	// (0x000307d7) bg_popup_sub_window_cp28

0xcade,	// (0x0003c4b5) grid_tb_float_ext_pane

0xcae6,	// (0x0003c4bd) cell_tb_float_ext_pane_ParamLimits

0xcae6,	// (0x0003c4bd) cell_tb_float_ext_pane

0xcafe,	// (0x0003c4d5) cell_tb_float_ext_pane_g1

0xcb07,	// (0x0003c4de) grid_highlight_pane_cp12

0xf14e,	// (0x0003eb25) cell_last_hwr_side_pane_ParamLimits

0xf14e,	// (0x0003eb25) cell_last_hwr_side_pane

0x7522,	// (0x00036ef9) cell_last_hwr_side_pane_g1

0xcb10,	// (0x0003c4e7) cell_last_hwr_side_pane_g2

0x0001,

0xfe19,	// (0x0003f7f0) cell_last_hwr_side_pane_g

0xf4a5,	// (0x0003ee7c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xf4a5,	// (0x0003ee7c) vkb2_area_bottom_space_btn_pane

0xa9e2,	// (0x0003a3b9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xc970,	// (0x0003c347) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb79b,	// (0x0003b172) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb7b1,	// (0x0003b188) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb7b1,	// (0x0003b188) vkb2_area_bottom_space_btn_pane_g1

0xb7e7,	// (0x0003b1be) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb7e7,	// (0x0003b1be) vkb2_area_bottom_space_btn_pane_g2

0xb81d,	// (0x0003b1f4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb81d,	// (0x0003b1f4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1e,	// (0x0003f7f5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1e,	// (0x0003f7f5) vkb2_area_bottom_space_btn_pane_g

0xa84c,	// (0x0003a223) cel_fep_hwr_func_pane_ParamLimits

0xa84c,	// (0x0003a223) cel_fep_hwr_func_pane

0xf123,	// (0x0003eafa) cell_hwr_side_button_pane_ParamLimits

0xf123,	// (0x0003eafa) cell_hwr_side_button_pane

0xc3bc,	// (0x0003bd93) aid_area_touch_clock_ParamLimits

0x14b8,	// (0x00030e8f) bg_uniindi_top_pane_ParamLimits

0xc3ce,	// (0x0003bda5) uniindi_top_pane_g1_ParamLimits

0xc3e4,	// (0x0003bdbb) uniindi_top_pane_g2_ParamLimits

0xc3f0,	// (0x0003bdc7) uniindi_top_pane_g3_ParamLimits

0xc401,	// (0x0003bdd8) uniindi_top_pane_g4_ParamLimits

0xfd31,	// (0x0003f708) uniindi_top_pane_g_ParamLimits

0xc40e,	// (0x0003bde5) uniindi_top_pane_t1_ParamLimits

0x14b8,	// (0x00030e8f) bg_vkb2_func_pane_cp01_ParamLimits

0x14b8,	// (0x00030e8f) bg_vkb2_func_pane_cp01

0xcb19,	// (0x0003c4f0) cel_fep_hwr_func_pane_g1_ParamLimits

0xcb19,	// (0x0003c4f0) cel_fep_hwr_func_pane_g1

0x14b8,	// (0x00030e8f) bg_vkb2_func_pane_cp02_ParamLimits

0x14b8,	// (0x00030e8f) bg_vkb2_func_pane_cp02

0xcb19,	// (0x0003c4f0) cell_hwr_side_button_pane_g1_ParamLimits

0xcb19,	// (0x0003c4f0) cell_hwr_side_button_pane_g1

0x55bd,	// (0x00034f94) status_pane_g4_ParamLimits

0x55bd,	// (0x00034f94) status_pane_g4

0x55d5,	// (0x00034fac) status_pane_t1

0x73b0,	// (0x00036d87) form2_midp_gauge_slider_cont_pane

0x73b8,	// (0x00036d8f) form2_midp_gauge_slider_pane_t1_ParamLimits

0x331e,	// (0x00032cf5) form2_midp_gauge_slider_pane_t2_ParamLimits

0x3330,	// (0x00032d07) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0003f4cf) form2_midp_gauge_slider_pane_t_ParamLimits

0x73ca,	// (0x00036da1) form2_midp_slider_pane_ParamLimits

0xb1de,	// (0x0003abb5) aid_size_cell_func_vkb2_ParamLimits

0xb1de,	// (0x0003abb5) aid_size_cell_func_vkb2

0xcabf,	// (0x0003c496) slider_pane_g4_ParamLimits

0xcabf,	// (0x0003c496) slider_pane_g4

0xf510,	// (0x0003eee7) form2_midp_gauge_slider_pane_t2_cp01

0xf51e,	// (0x0003eef5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf51e,	// (0x0003eef5) form2_midp_gauge_slider_pane_t3_cp01

0xb88e,	// (0x0003b265) form2_midp_slider_pane_cp01

0x0e00,	// (0x000307d7) navi_smil_pane

0xcb49,	// (0x0003c520) navi_smil_pane_g1

0xcb51,	// (0x0003c528) navi_smil_pane_t1

0xcb27,	// (0x0003c4fe) form2_midp_slider_pane_g1

0xcb30,	// (0x0003c507) form2_midp_slider_pane_g2

0xcb38,	// (0x0003c50f) form2_midp_slider_pane_g3

0xcb27,	// (0x0003c4fe) form2_midp_slider_pane_g4

0x463e,	// (0x00034015) form2_midp_slider_pane_g5

0x0004,

0xfe27,	// (0x0003f7fe) form2_midp_slider_pane_g

0xb853,	// (0x0003b22a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb853,	// (0x0003b22a) vkb2_area_bottom_space_btn_pane_g4

0x2887,	// (0x0003225e) lc0_navi_pane_ParamLimits

0x2887,	// (0x0003225e) lc0_navi_pane

0x28f1,	// (0x000322c8) lc0_stat_indi_pane_ParamLimits

0x28f1,	// (0x000322c8) lc0_stat_indi_pane

0x2906,	// (0x000322dd) ls0_title_pane_ParamLimits

0x2906,	// (0x000322dd) ls0_title_pane

0x1a3c,	// (0x00031413) bg_popup_sub_pane_cp14_ParamLimits

0xc3a3,	// (0x0003bd7a) list_uniindi_pane_ParamLimits

0xc3af,	// (0x0003bd86) uniindi_top_pane_ParamLimits

0xc44a,	// (0x0003be21) list_single_uniindi_pane_g1_ParamLimits

0xc45d,	// (0x0003be34) list_single_uniindi_pane_t1_ParamLimits

0xf53b,	// (0x0003ef12) lc0_stat_clock_pane_ParamLimits

0xf53b,	// (0x0003ef12) lc0_stat_clock_pane

0x4661,	// (0x00034038) lc0_stat_indi_pane_g1_ParamLimits

0x4661,	// (0x00034038) lc0_stat_indi_pane_g1

0x4654,	// (0x0003402b) lc0_stat_indi_pane_g2_ParamLimits

0x4654,	// (0x0003402b) lc0_stat_indi_pane_g2

0x0001,

0xfe32,	// (0x0003f809) lc0_stat_indi_pane_g_ParamLimits

0xfe32,	// (0x0003f809) lc0_stat_indi_pane_g

0xf548,	// (0x0003ef1f) lc0_uni_indicator_pane_ParamLimits

0xf548,	// (0x0003ef1f) lc0_uni_indicator_pane

0xcb5f,	// (0x0003c536) ls0_title_pane_g1_ParamLimits

0xcb5f,	// (0x0003c536) ls0_title_pane_g1

0x467b,	// (0x00034052) ls0_title_pane_t1_ParamLimits

0x467b,	// (0x00034052) ls0_title_pane_t1

0xf555,	// (0x0003ef2c) lc0_uni_indicator_pane_g1_ParamLimits

0xf555,	// (0x0003ef2c) lc0_uni_indicator_pane_g1

0xcb73,	// (0x0003c54a) lc0_stat_clock_pane_t1

0x0e00,	// (0x000307d7) main_ai5_pane

0xcb81,	// (0x0003c558) ai5_sk_pane_ParamLimits

0xcb81,	// (0x0003c558) ai5_sk_pane

0x46be,	// (0x00034095) cell_ai5_widget_pane_ParamLimits

0x46be,	// (0x00034095) cell_ai5_widget_pane

0xcb8e,	// (0x0003c565) aid_size_cell_widget_grid

0xcba0,	// (0x0003c577) bg_ai5_widget_pane_ParamLimits

0xcba0,	// (0x0003c577) bg_ai5_widget_pane

0x473f,	// (0x00034116) cell_ai5_widget_pane_g2

0x474f,	// (0x00034126) cell_ai5_widget_pane_g3

0x476e,	// (0x00034145) cell_ai5_widget_pane_g4

0x477a,	// (0x00034151) cell_ai5_widget_pane_g5

0x4786,	// (0x0003415d) cell_ai5_widget_pane_g6

0x4792,	// (0x00034169) cell_ai5_widget_pane_g7

0x47da,	// (0x000341b1) cell_ai5_widget_pane_t1_ParamLimits

0x47da,	// (0x000341b1) cell_ai5_widget_pane_t1

0x47f7,	// (0x000341ce) cell_ai5_widget_pane_t2_ParamLimits

0x47f7,	// (0x000341ce) cell_ai5_widget_pane_t2

0x480f,	// (0x000341e6) cell_ai5_widget_pane_t3_ParamLimits

0x480f,	// (0x000341e6) cell_ai5_widget_pane_t3

0x4827,	// (0x000341fe) cell_ai5_widget_pane_t4_ParamLimits

0x4827,	// (0x000341fe) cell_ai5_widget_pane_t4

0x4841,	// (0x00034218) cell_ai5_widget_pane_t5_ParamLimits

0x4841,	// (0x00034218) cell_ai5_widget_pane_t5

0xcbac,	// (0x0003c583) cell_ai5_widget_pane_t6_ParamLimits

0xcbac,	// (0x0003c583) cell_ai5_widget_pane_t6

0xcbbe,	// (0x0003c595) cell_ai5_widget_pane_t7_ParamLimits

0xcbbe,	// (0x0003c595) cell_ai5_widget_pane_t7

0x4860,	// (0x00034237) cell_ai5_widget_pane_t8_ParamLimits

0x4860,	// (0x00034237) cell_ai5_widget_pane_t8

0x0009,

0xfe4c,	// (0x0003f823) cell_ai5_widget_pane_t_ParamLimits

0xfe4c,	// (0x0003f823) cell_ai5_widget_pane_t

0x48ab,	// (0x00034282) grid_ai5_widget_pane

0x1a3c,	// (0x00031413) highlight_cell_ai5_widget_pane_ParamLimits

0x1a3c,	// (0x00031413) highlight_cell_ai5_widget_pane

0x48bf,	// (0x00034296) ai5_sk_left_pane

0x48c9,	// (0x000342a0) ai5_sk_middle_pane

0x48d3,	// (0x000342aa) ai5_sk_right_pane

0xcbd7,	// (0x0003c5ae) bg_ai5_widget_pane_g1_ParamLimits

0xcbd7,	// (0x0003c5ae) bg_ai5_widget_pane_g1

0xcbe3,	// (0x0003c5ba) bg_ai5_widget_pane_g2_ParamLimits

0xcbe3,	// (0x0003c5ba) bg_ai5_widget_pane_g2

0xcbef,	// (0x0003c5c6) bg_ai5_widget_pane_g3_ParamLimits

0xcbef,	// (0x0003c5c6) bg_ai5_widget_pane_g3

0xcbfb,	// (0x0003c5d2) bg_ai5_widget_pane_g4_ParamLimits

0xcbfb,	// (0x0003c5d2) bg_ai5_widget_pane_g4

0xcc07,	// (0x0003c5de) bg_ai5_widget_pane_g5_ParamLimits

0xcc07,	// (0x0003c5de) bg_ai5_widget_pane_g5

0xcc13,	// (0x0003c5ea) bg_ai5_widget_pane_g6_ParamLimits

0xcc13,	// (0x0003c5ea) bg_ai5_widget_pane_g6

0xcc1f,	// (0x0003c5f6) bg_ai5_widget_pane_g7_ParamLimits

0xcc1f,	// (0x0003c5f6) bg_ai5_widget_pane_g7

0xcc2b,	// (0x0003c602) bg_ai5_widget_pane_g8_ParamLimits

0xcc2b,	// (0x0003c602) bg_ai5_widget_pane_g8

0xcc37,	// (0x0003c60e) bg_ai5_widget_pane_g9_ParamLimits

0xcc37,	// (0x0003c60e) bg_ai5_widget_pane_g9

0x0008,

0xfe61,	// (0x0003f838) bg_ai5_widget_pane_g_ParamLimits

0xfe61,	// (0x0003f838) bg_ai5_widget_pane_g

0xcc69,	// (0x0003c640) cell_shortcut_ai5_widget_pane_ParamLimits

0xcc69,	// (0x0003c640) cell_shortcut_ai5_widget_pane

0x12ca,	// (0x00030ca1) bg_cell_shortcut_ai5_widget_pane

0xcc75,	// (0x0003c64c) cell_grid_ai5_widget_pane_g1

0xcc7e,	// (0x0003c655) highlight_cell_shortcut_ai5_widget_pane

0x56a9,	// (0x00035080) ai5_sk_left_pane_g1

0xcc86,	// (0x0003c65d) ai5_sk_left_pane_g2

0xcc8e,	// (0x0003c665) ai5_sk_left_pane_g3

0xcc96,	// (0x0003c66d) ai5_sk_left_pane_g4

0x0003,

0xfe74,	// (0x0003f84b) ai5_sk_left_pane_g

0xcc9e,	// (0x0003c675) ai5_sk_left_pane_t1

0x56a1,	// (0x00035078) ai5_sk_right_pane_g1

0xccac,	// (0x0003c683) ai5_sk_right_pane_g2

0xccb4,	// (0x0003c68b) ai5_sk_right_pane_g3

0xccbc,	// (0x0003c693) ai5_sk_right_pane_g4

0x0003,

0xfe7d,	// (0x0003f854) ai5_sk_right_pane_g

0xccc4,	// (0x0003c69b) ai5_sk_right_pane_t1

0x56a1,	// (0x00035078) ai5_sk_middle_pane_g1

0x56a9,	// (0x00035080) ai5_sk_middle_pane_g2

0x56c1,	// (0x00035098) ai5_sk_middle_pane_g3

0xccb4,	// (0x0003c68b) ai5_sk_middle_pane_g4

0xcc8e,	// (0x0003c665) ai5_sk_middle_pane_g5

0xccd2,	// (0x0003c6a9) ai5_sk_middle_pane_g6

0x48dd,	// (0x000342b4) ai5_sk_middle_pane_g7

0x0006,

0xfe86,	// (0x0003f85d) ai5_sk_middle_pane_g

0x2785,	// (0x0003215c) aid_touch_area_size_lc0_ParamLimits

0x2785,	// (0x0003215c) aid_touch_area_size_lc0

0xaa11,	// (0x0003a3e8) cell_hwr_candidate_pane_t1_ParamLimits

0x54f2,	// (0x00034ec9) aid_touch_navi_pane

0x29f2,	// (0x000323c9) status_dt_navi_pane_ParamLimits

0x29f2,	// (0x000323c9) status_dt_navi_pane

0x2a0a,	// (0x000323e1) status_dt_sta_pane_ParamLimits

0x2a0a,	// (0x000323e1) status_dt_sta_pane

0x48e5,	// (0x000342bc) dt_sta_controll_pane

0x48f2,	// (0x000342c9) dt_sta_indi_pane

0x48ff,	// (0x000342d6) dt_sta_title_pane

0x14b8,	// (0x00030e8f) bg_dt_sta_indi_pane_ParamLimits

0x14b8,	// (0x00030e8f) bg_dt_sta_indi_pane

0x4911,	// (0x000342e8) dt_sta_battery_pane

0x4919,	// (0x000342f0) dt_sta_indi_pane_g1

0x4922,	// (0x000342f9) dt_sta_indi_pane_g2

0x492b,	// (0x00034302) dt_sta_indi_pane_g3

0x0002,

0xfe95,	// (0x0003f86c) dt_sta_indi_pane_g

0x4934,	// (0x0003430b) dt_sta_signal_pane

0x1a3c,	// (0x00031413) bg_dt_sta_title_pane_ParamLimits

0x1a3c,	// (0x00031413) bg_dt_sta_title_pane

0x493d,	// (0x00034314) dt_sta_title_pane_g1

0x4945,	// (0x0003431c) dt_sta_title_pane_t1_ParamLimits

0x4945,	// (0x0003431c) dt_sta_title_pane_t1

0x0e00,	// (0x000307d7) bg_dt_sta_control_pane

0x495a,	// (0x00034331) dt_sta_controll_pane_g1

0x4963,	// (0x0003433a) bg_dt_sta_title_pane_g1

0x496c,	// (0x00034343) bg_dt_sta_title_pane_g2

0x4975,	// (0x0003434c) bg_dt_sta_title_pane_g3

0x0002,

0xfe9c,	// (0x0003f873) bg_dt_sta_title_pane_g

0x7522,	// (0x00036ef9) bg_dt_sta_indi_pane_g1

0x497e,	// (0x00034355) dt_sta_signal_pane_g1

0x4986,	// (0x0003435d) dt_sta_signal_pane_g2

0x0001,

0xfea3,	// (0x0003f87a) dt_sta_signal_pane_g

0xccda,	// (0x0003c6b1) dt_sta_battery_pane_g1

0xcce3,	// (0x0003c6ba) dt_sta_battery_pane_t1

0x7522,	// (0x00036ef9) bg_dt_sta_control_pane_g1

0x4d5b,	// (0x00034732) fep_china_uni_eep_pane

0x4d63,	// (0x0003473a) fep_china_uni_entry_pane_ParamLimits

0x4d73,	// (0x0003474a) popup_fep_china_uni_window_g1_ParamLimits

0x4d83,	// (0x0003475a) popup_fep_china_uni_window_g2_ParamLimits

0x4d83,	// (0x0003475a) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0003f111) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0003f111) popup_fep_china_uni_window_g

0xccf2,	// (0x0003c6c9) fep_china_uni_eep_pane_g1

0xccfa,	// (0x0003c6d1) fep_china_uni_eep_pane_t1

0xcb40,	// (0x0003c517) aid_touch_area_size_smil_player

0x5590,	// (0x00034f67) lc0_clock_pane

0x55c9,	// (0x00034fa0) status_pane_g5_ParamLimits

0x55c9,	// (0x00034fa0) status_pane_g5

0x2319,	// (0x00031cf0) popup_keymap_window

0x55a9,	// (0x00034f80) status_icon_pane

0x474f,	// (0x00034126) cell_ai5_widget_pane_g3_ParamLimits

0x476e,	// (0x00034145) cell_ai5_widget_pane_g4_ParamLimits

0x477a,	// (0x00034151) cell_ai5_widget_pane_g5_ParamLimits

0x479e,	// (0x00034175) cell_ai5_widget_pane_g8_ParamLimits

0x479e,	// (0x00034175) cell_ai5_widget_pane_g8

0x47b2,	// (0x00034189) cell_ai5_widget_pane_g9_ParamLimits

0x47b2,	// (0x00034189) cell_ai5_widget_pane_g9

0x47c6,	// (0x0003419d) cell_ai5_widget_pane_g10_ParamLimits

0x47c6,	// (0x0003419d) cell_ai5_widget_pane_g10

0xcd09,	// (0x0003c6e0) status_icon_pane_g1

0x0e00,	// (0x000307d7) bg_popup_sub_pane_cp13

0xcd11,	// (0x0003c6e8) popup_keymap_window_t1

0x2087,	// (0x00031a5e) control_pane_g6_ParamLimits

0x2087,	// (0x00031a5e) control_pane_g6

0x207a,	// (0x00031a51) control_pane_g7_ParamLimits

0x207a,	// (0x00031a51) control_pane_g7

0x206d,	// (0x00031a44) control_pane_g8_ParamLimits

0x206d,	// (0x00031a44) control_pane_g8

0x48e5,	// (0x000342bc) dt_sta_controll_pane_ParamLimits

0x48f2,	// (0x000342c9) dt_sta_indi_pane_ParamLimits

0x48ff,	// (0x000342d6) dt_sta_title_pane_ParamLimits

0x1917,	// (0x000312ee) aid_size_touch_scroll_bar_cale

0x8b3a,	// (0x00038511) popup_discreet_window_ParamLimits

0x8b3a,	// (0x00038511) popup_discreet_window

0xed4d,	// (0x0003e724) popup_sk_window

0x5c3c,	// (0x00035613) bg_popup_sub_pane_cp28_ParamLimits

0x5c3c,	// (0x00035613) bg_popup_sub_pane_cp28

0xcd1f,	// (0x0003c6f6) popup_discreet_window_g1_ParamLimits

0xcd1f,	// (0x0003c6f6) popup_discreet_window_g1

0xcd3f,	// (0x0003c716) popup_discreet_window_t1_ParamLimits

0xcd3f,	// (0x0003c716) popup_discreet_window_t1

0xcd5d,	// (0x0003c734) popup_discreet_window_t2_ParamLimits

0xcd5d,	// (0x0003c734) popup_discreet_window_t2

0x0002,

0xfea8,	// (0x0003f87f) popup_discreet_window_t_ParamLimits

0xfea8,	// (0x0003f87f) popup_discreet_window_t

0xb8c3,	// (0x0003b29a) popup_sk_window_g1

0xb8cc,	// (0x0003b2a3) popup_sk_window_g2

0x0001,

0xfeaf,	// (0x0003f886) popup_sk_window_g

0xcdaf,	// (0x0003c786) popup_sk_window_t1

0xcdbd,	// (0x0003c794) popup_sk_window_t1_copy1

0x473f,	// (0x00034116) cell_ai5_widget_pane_g2_ParamLimits

0x4872,	// (0x00034249) cell_ai5_widget_pane_t9_ParamLimits

0x4872,	// (0x00034249) cell_ai5_widget_pane_t9

0x0e00,	// (0x000307d7) main_fep_fshwr2_pane

0x498e,	// (0x00034365) aid_fshwr2_btn_pane

0x4996,	// (0x0003436d) aid_fshwr2_syb_pane

0x499e,	// (0x00034375) aid_fshwr2_txt_pane

0x49a6,	// (0x0003437d) fshwr2_func_candi_pane

0x49ae,	// (0x00034385) fshwr2_hwr_syb_pane

0x49b6,	// (0x0003438d) fshwr2_icf_pane

0x0e00,	// (0x000307d7) fshwr2_icf_bg_pane

0x49be,	// (0x00034395) fshwr2_icf_pane_t1_ParamLimits

0x49be,	// (0x00034395) fshwr2_icf_pane_t1

0x7522,	// (0x00036ef9) fshwr2_func_candi_pane_g1

0xcddd,	// (0x0003c7b4) fshwr2_func_candi_row_pane_ParamLimits

0xcddd,	// (0x0003c7b4) fshwr2_func_candi_row_pane

0x49d6,	// (0x000343ad) cell_fshwr2_syb_pane_ParamLimits

0x49d6,	// (0x000343ad) cell_fshwr2_syb_pane

0x7750,	// (0x00037127) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7750,	// (0x00037127) fshwr2_hwr_syb_pane_g1

0x0e00,	// (0x000307d7) bg_popup_call_pane_cp01

0xcdee,	// (0x0003c7c5) fshwr2_func_candi_cell_pane_ParamLimits

0xcdee,	// (0x0003c7c5) fshwr2_func_candi_cell_pane

0xce19,	// (0x0003c7f0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xce19,	// (0x0003c7f0) fshwr2_func_candi_cell_bg_pane

0xce33,	// (0x0003c80a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xce33,	// (0x0003c80a) fshwr2_func_candi_cell_pane_g1

0xce53,	// (0x0003c82a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xce53,	// (0x0003c82a) fshwr2_func_candi_cell_pane_t1

0x0e00,	// (0x000307d7) bg_button_pane_cp08

0x518b,	// (0x00034b62) cell_fshwr2_syb_bg_pane

0x49ed,	// (0x000343c4) cell_fshwr2_syb_bg_pane_g1

0x49f5,	// (0x000343cc) cell_fshwr2_syb_bg_pane_t1

0x1a3c,	// (0x00031413) main_tmo_pane

0x2e5c,	// (0x00032833) uni_indicator_pane_g1_ParamLimits

0x2e71,	// (0x00032848) uni_indicator_pane_g2_ParamLimits

0x2e87,	// (0x0003285e) uni_indicator_pane_g3_ParamLimits

0x67ad,	// (0x00036184) uni_indicator_pane_g4_ParamLimits

0x67ad,	// (0x00036184) uni_indicator_pane_g4

0x67c1,	// (0x00036198) uni_indicator_pane_g5_ParamLimits

0x67c1,	// (0x00036198) uni_indicator_pane_g5

0x67d5,	// (0x000361ac) uni_indicator_pane_g6_ParamLimits

0x67d5,	// (0x000361ac) uni_indicator_pane_g6

0xf92b,	// (0x0003f302) uni_indicator_pane_g_ParamLimits

0x38a2,	// (0x00033279) popup_tmo_note_window_ParamLimits

0x38a2,	// (0x00033279) popup_tmo_note_window

0x0e00,	// (0x000307d7) fshwr2_bg_pane

0xce44,	// (0x0003c81b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xce44,	// (0x0003c81b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb4,	// (0x0003f88b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb4,	// (0x0003f88b) fshwr2_func_candi_cell_pane_g

0x7522,	// (0x00036ef9) bg_popup_window_pane_cp01

0xce66,	// (0x0003c83d) bg_popup_window_pane_g1_cp01

0xce6f,	// (0x0003c846) bg_popup_window_pane_cp22_ParamLimits

0xce6f,	// (0x0003c846) bg_popup_window_pane_cp22

0xce7d,	// (0x0003c854) listscroll_tmo_link_pane_ParamLimits

0xce7d,	// (0x0003c854) listscroll_tmo_link_pane

0xcebd,	// (0x0003c894) popup_tmo_note_window_g1_ParamLimits

0xcebd,	// (0x0003c894) popup_tmo_note_window_g1

0xceca,	// (0x0003c8a1) tmo_note_info_pane_ParamLimits

0xceca,	// (0x0003c8a1) tmo_note_info_pane

0x4a04,	// (0x000343db) list_tmo_note_info_pane_g1_ParamLimits

0x4a04,	// (0x000343db) list_tmo_note_info_pane_g1

0xcee4,	// (0x0003c8bb) list_tmo_note_info_pane_g2_ParamLimits

0xcee4,	// (0x0003c8bb) list_tmo_note_info_pane_g2

0x0001,

0xfeb9,	// (0x0003f890) list_tmo_note_info_pane_g_ParamLimits

0xfeb9,	// (0x0003f890) list_tmo_note_info_pane_g

0xcf00,	// (0x0003c8d7) list_tmo_note_info_text_pane_ParamLimits

0xcf00,	// (0x0003c8d7) list_tmo_note_info_text_pane

0xcf42,	// (0x0003c919) list_tmo_link_pane

0xcf4f,	// (0x0003c926) scroll_pane_cp20

0xcf5c,	// (0x0003c933) list_single_tmo_link_pane_ParamLimits

0xcf5c,	// (0x0003c933) list_single_tmo_link_pane

0xcf6c,	// (0x0003c943) list_single_tmo_link_pane_t1

0xcf7a,	// (0x0003c951) list_tmo_note_info_text_pane_t1_ParamLimits

0xcf7a,	// (0x0003c951) list_tmo_note_info_text_pane_t1

0x1af6,	// (0x000314cd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1af6,	// (0x000314cd) aid_size_touch_scroll_bar_cp01

0x0a68,	// (0x0003043f) aid_size_touch_slider_marker

0xed41,	// (0x0003e718) popup_settings_window_ParamLimits

0xed41,	// (0x0003e718) popup_settings_window

0xdc8b,	// (0x0003d662) popup_candi_list_indi_window

0x54f2,	// (0x00034ec9) aid_touch_navi_pane_ParamLimits

0xb116,	// (0x0003aaed) rs_clock_indi_pane

0xb11f,	// (0x0003aaf6) sctrl_sk_bottom_pane_ParamLimits

0xb130,	// (0x0003ab07) sctrl_sk_top_pane_ParamLimits

0xb238,	// (0x0003ac0f) popup_fep_tooltip_window

0xcb8e,	// (0x0003c565) aid_size_cell_widget_grid_ParamLimits

0x4733,	// (0x0003410a) cell_ai5_widget_pane_g1_ParamLimits

0x4733,	// (0x0003410a) cell_ai5_widget_pane_g1

0x4786,	// (0x0003415d) cell_ai5_widget_pane_g6_ParamLimits

0x4792,	// (0x00034169) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe37,	// (0x0003f80e) cell_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x0003f80e) cell_ai5_widget_pane_g

0x4896,	// (0x0003426d) cell_ai5_widget_pane_t10_ParamLimits

0x4896,	// (0x0003426d) cell_ai5_widget_pane_t10

0x48ab,	// (0x00034282) grid_ai5_widget_pane_ParamLimits

0xcc43,	// (0x0003c61a) cell_contacts_ai5_widget_pane_ParamLimits

0xcc43,	// (0x0003c61a) cell_contacts_ai5_widget_pane

0xcd72,	// (0x0003c749) popup_discreet_window_t3_ParamLimits

0xcd72,	// (0x0003c749) popup_discreet_window_t3

0xcdcb,	// (0x0003c7a2) popup_fshwr2_char_preview_window_ParamLimits

0xcdcb,	// (0x0003c7a2) popup_fshwr2_char_preview_window

0x4a1b,	// (0x000343f2) tmo_note_info_pane_t1

0x4a30,	// (0x00034407) tmo_note_info_pane_t2

0x4a45,	// (0x0003441c) tmo_note_info_pane_t3

0xcf1e,	// (0x0003c8f5) tmo_note_info_pane_t4

0xcf30,	// (0x0003c907) tmo_note_info_pane_t5

0x0004,

0xfebe,	// (0x0003f895) tmo_note_info_pane_t

0xcf42,	// (0x0003c919) list_tmo_link_pane_ParamLimits

0xcf4f,	// (0x0003c926) scroll_pane_cp20_ParamLimits

0x0e00,	// (0x000307d7) bg_popup_fep_char_preview_window_cp01

0xcf93,	// (0x0003c96a) popup_fshwr2_char_preview_window_t1

0xcfa1,	// (0x0003c978) popup_candi_list_indi_window_g1

0xcfaa,	// (0x0003c981) bg_cell_contacts_ai5_widget_pane

0xcfb6,	// (0x0003c98d) cell_contacts_ai5_widget_pane_g1

0xcfca,	// (0x0003c9a1) cell_contacts_ai5_widget_pane_g2

0xcfd9,	// (0x0003c9b0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec9,	// (0x0003f8a0) cell_contacts_ai5_widget_pane_g

0xcfec,	// (0x0003c9c3) cell_contacts_ai5_widget_pane_t1

0x1a3c,	// (0x00031413) highlight_cell_shortcut_ai5_widget_pane_cp01

0x4abd,	// (0x00034494) settings_container_pane

0x518b,	// (0x00034b62) listscroll_set_pane_copy1

0x6f00,	// (0x000368d7) scroll_pane_cp121_copy1

0xd001,	// (0x0003c9d8) set_content_pane_copy1

0xd009,	// (0x0003c9e0) aid_height_set_list_copy1_ParamLimits

0xd009,	// (0x0003c9e0) aid_height_set_list_copy1

0x696e,	// (0x00036345) aid_size_parent_copy1_ParamLimits

0x696e,	// (0x00036345) aid_size_parent_copy1

0xd015,	// (0x0003c9ec) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd015,	// (0x0003c9ec) button_value_adjust_pane_cp6_copy1

0x4ac9,	// (0x000344a0) list_highlight_pane_cp2_copy1_ParamLimits

0x4ac9,	// (0x000344a0) list_highlight_pane_cp2_copy1

0x620e,	// (0x00035be5) list_set_pane_copy1_ParamLimits

0x620e,	// (0x00035be5) list_set_pane_copy1

0x4a5a,	// (0x00034431) main_pane_set_t1_copy1_ParamLimits

0x4a5a,	// (0x00034431) main_pane_set_t1_copy1

0x4a94,	// (0x0003446b) main_pane_set_t2_copy1_ParamLimits

0x4a94,	// (0x0003446b) main_pane_set_t2_copy1

0xd029,	// (0x0003ca00) main_pane_set_t3_copy1

0xd037,	// (0x0003ca0e) main_pane_set_t4_copy1

0x4ab1,	// (0x00034488) set_content_pane_g1_copy1_ParamLimits

0x4ab1,	// (0x00034488) set_content_pane_g1_copy1

0xd045,	// (0x0003ca1c) setting_code_pane_copy1

0xd04d,	// (0x0003ca24) setting_slider_graphic_pane_copy1

0xd04d,	// (0x0003ca24) setting_slider_pane_copy1

0xd04d,	// (0x0003ca24) setting_text_pane_copy1

0xd04d,	// (0x0003ca24) setting_volume_pane_copy1

0xd055,	// (0x0003ca2c) settings_code_pane_cp2_copy1

0xd05d,	// (0x0003ca34) settings_code_pane_cp_copy1_ParamLimits

0xd05d,	// (0x0003ca34) settings_code_pane_cp_copy1

0x629c,	// (0x00035c73) volume_set_pane_copy1

0x62a4,	// (0x00035c7b) volume_set_pane_g10_copy1

0x62ac,	// (0x00035c83) volume_set_pane_g1_copy1

0x62b4,	// (0x00035c8b) volume_set_pane_g2_copy1

0x62bc,	// (0x00035c93) volume_set_pane_g3_copy1

0x62c4,	// (0x00035c9b) volume_set_pane_g4_copy1

0x62cc,	// (0x00035ca3) volume_set_pane_g5_copy1

0x62d4,	// (0x00035cab) volume_set_pane_g6_copy1

0x62dc,	// (0x00035cb3) volume_set_pane_g7_copy1

0x62e4,	// (0x00035cbb) volume_set_pane_g8_copy1

0x62ec,	// (0x00035cc3) volume_set_pane_g9_copy1

0x1163,	// (0x00030b3a) bg_set_opt_pane_cp_copy1_ParamLimits

0x1163,	// (0x00030b3a) bg_set_opt_pane_cp_copy1

0x1171,	// (0x00030b48) setting_slider_pane_t1_copy1_ParamLimits

0x1171,	// (0x00030b48) setting_slider_pane_t1_copy1

0xd071,	// (0x0003ca48) setting_slider_pane_t2_copy1_ParamLimits

0xd071,	// (0x0003ca48) setting_slider_pane_t2_copy1

0xd08a,	// (0x0003ca61) setting_slider_pane_t3_copy1_ParamLimits

0xd08a,	// (0x0003ca61) setting_slider_pane_t3_copy1

0x11b7,	// (0x00030b8e) slider_set_pane_copy1_ParamLimits

0x11b7,	// (0x00030b8e) slider_set_pane_copy1

0x1a97,	// (0x0003146e) set_opt_bg_pane_g1_copy2

0x1a9f,	// (0x00031476) set_opt_bg_pane_g2_copy2

0xd0a1,	// (0x0003ca78) set_opt_bg_pane_g3_copy2

0x1aaf,	// (0x00031486) set_opt_bg_pane_g4_copy2

0x1ab7,	// (0x0003148e) set_opt_bg_pane_g5_copy2

0x1abf,	// (0x00031496) set_opt_bg_pane_g6_copy2

0x62f4,	// (0x00035ccb) set_opt_bg_pane_g7_copy2

0xd0a9,	// (0x0003ca80) set_opt_bg_pane_g8_copy2

0xd0b1,	// (0x0003ca88) set_opt_bg_pane_g9_copy2

0x7bd8,	// (0x000375af) aid_size_touch_slider_mark_copy1_ParamLimits

0x7bd8,	// (0x000375af) aid_size_touch_slider_mark_copy1

0x6980,	// (0x00036357) slider_set_pane_g1_copy1

0x6989,	// (0x00036360) slider_set_pane_g2_copy1

0x7bec,	// (0x000375c3) slider_set_pane_g3_copy1_ParamLimits

0x7bec,	// (0x000375c3) slider_set_pane_g3_copy1

0x7c00,	// (0x000375d7) slider_set_pane_g4_copy1_ParamLimits

0x7c00,	// (0x000375d7) slider_set_pane_g4_copy1

0x7c18,	// (0x000375ef) slider_set_pane_g5_copy1_ParamLimits

0x7c18,	// (0x000375ef) slider_set_pane_g5_copy1

0x7bec,	// (0x000375c3) slider_set_pane_g6_copy1_ParamLimits

0x7bec,	// (0x000375c3) slider_set_pane_g6_copy1

0x62fc,	// (0x00035cd3) slider_set_pane_g7_copy1_ParamLimits

0x62fc,	// (0x00035cd3) slider_set_pane_g7_copy1

0x0f57,	// (0x0003092e) bg_set_opt_pane_cp2_copy1

0x11cd,	// (0x00030ba4) setting_slider_graphic_pane_g1_copy1

0x6312,	// (0x00035ce9) setting_slider_graphic_pane_t1_copy1

0x6321,	// (0x00035cf8) setting_slider_graphic_pane_t2_copy1

0x6330,	// (0x00035d07) slider_set_pane_cp_copy1

0xd0c1,	// (0x0003ca98) input_focus_pane_cp1_copy1

0xd0ca,	// (0x0003caa1) list_set_text_pane_copy1

0xd0d2,	// (0x0003caa9) setting_text_pane_g1_copy1

0xe1ce,	// (0x0003dba5) set_text_pane_t1_copy1

0xd0c1,	// (0x0003ca98) input_focus_pane_cp2_copy1

0xd0d2,	// (0x0003caa9) setting_code_pane_g1_copy1

0xd0db,	// (0x0003cab2) setting_code_pane_t1_copy1

0x1f7c,	// (0x00031953) list_set_graphic_pane_copy1

0x0f57,	// (0x0003092e) bg_set_opt_pane_cp4_copy1

0xd0e9,	// (0x0003cac0) list_set_graphic_pane_g1_copy1_ParamLimits

0xd0e9,	// (0x0003cac0) list_set_graphic_pane_g1_copy1

0xd0f5,	// (0x0003cacc) list_set_graphic_pane_g2_copy1

0x4f06,	// (0x000348dd) list_set_graphic_pane_t1_copy1_ParamLimits

0x4f06,	// (0x000348dd) list_set_graphic_pane_t1_copy1

0x7522,	// (0x00036ef9) rs_clock_indi_pane_g1

0xd0fd,	// (0x0003cad4) rs_clock_indi_pane_t1

0xd10b,	// (0x0003cae2) rs_indi_pane

0xd113,	// (0x0003caea) rs_indi_pane_g1

0xd11c,	// (0x0003caf3) rs_indi_pane_g2

0xcfa1,	// (0x0003c978) rs_indi_pane_g3

0x0002,

0xfed0,	// (0x0003f8a7) rs_indi_pane_g

0x518b,	// (0x00034b62) bg_popup_preview_window_pane_cp03

0xd125,	// (0x0003cafc) popup_fep_tooltip_window_t1

0x7ec9,	// (0x000378a0) popup_note2_window_g2_ParamLimits

0x7ec9,	// (0x000378a0) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0003f647) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0003f647) popup_note2_window_g

0xaf8e,	// (0x0003a965) bg_popup_sub_pane_cp11_ParamLimits

0xaf9b,	// (0x0003a972) cell_ai3_links_pane_g1_ParamLimits

0xafb2,	// (0x0003a989) cell_ai3_links_pane_t1

0xe1ce,	// (0x0003dba5) set_text_pane_t1_copy1_ParamLimits

0x50b2,	// (0x00034a89) cell_graphic_popup_pane_cp2_ParamLimits

0x50b2,	// (0x00034a89) cell_graphic_popup_pane_cp2

0xd133,	// (0x0003cb0a) cell_graphic_popup_pane_g1_cp2

0x17c6,	// (0x0003119d) cell_graphic_popup_pane_g2_cp2

0xd13b,	// (0x0003cb12) cell_graphic_popup_pane_g3_cp2

0xd143,	// (0x0003cb1a) cell_graphic_popup_pane_t2_cp2

0x17d7,	// (0x000311ae) grid_highlight_pane_cp3_cp2

0x4b25,	// (0x000344fc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1a3c,	// (0x00031413) main_tmo_pane_ParamLimits

0x389a,	// (0x00033271) popup_tmo_big_image_note_window

0x4723,	// (0x000340fa) cell_ai5_widget_list_pane

0x472b,	// (0x00034102) cell_ai5_widget_lrg_icon_pane

0x4a1b,	// (0x000343f2) tmo_note_info_pane_t1_ParamLimits

0x4a30,	// (0x00034407) tmo_note_info_pane_t2_ParamLimits

0x4a45,	// (0x0003441c) tmo_note_info_pane_t3_ParamLimits

0xcf1e,	// (0x0003c8f5) tmo_note_info_pane_t4_ParamLimits

0xcf30,	// (0x0003c907) tmo_note_info_pane_t5_ParamLimits

0xfebe,	// (0x0003f895) tmo_note_info_pane_t_ParamLimits

0x4abd,	// (0x00034494) settings_container_pane_ParamLimits

0xd0b9,	// (0x0003ca90) indicator_popup_pane_cp5

0xd0b9,	// (0x0003ca90) indicator_popup_pane_cp6

0x1f7c,	// (0x00031953) list_set_graphic_pane_copy1_ParamLimits

0x0e00,	// (0x000307d7) bg_popup_window_pane_cp23

0xd151,	// (0x0003cb28) popup_tmo_big_image_note_window_g1

0xd15a,	// (0x0003cb31) popup_tmo_big_image_note_window_t1

0xd168,	// (0x0003cb3f) popup_tmo_big_image_note_window_t2

0xd176,	// (0x0003cb4d) popup_tmo_big_image_note_window_t3

0x0002,

0xfed7,	// (0x0003f8ae) popup_tmo_big_image_note_window_t

0x6338,	// (0x00035d0f) cell_ai5_widget_lrg_icon_pane_g1

0x6340,	// (0x00035d17) cell_ai5_widget_lrg_icon_pane_t1

0x634e,	// (0x00035d25) cell_ai5_widget_list_row_pane_ParamLimits

0x634e,	// (0x00035d25) cell_ai5_widget_list_row_pane

0x6367,	// (0x00035d3e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6367,	// (0x00035d3e) cell_ai5_widget_list_row_pane_g1

0x6374,	// (0x00035d4b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6374,	// (0x00035d4b) cell_ai5_widget_list_row_pane_t1

0x638c,	// (0x00035d63) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x638c,	// (0x00035d63) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfede,	// (0x0003f8b5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfede,	// (0x0003f8b5) cell_ai5_widget_list_row_pane_t

0x8a63,	// (0x0003843a) main_fep_vtchi_ss_pane

0xd184,	// (0x0003cb5b) popup_fep_char_pre_window

0xd18c,	// (0x0003cb63) popup_fep_ituss_window

0xd1a9,	// (0x0003cb80) popup_fep_vkbss_window

0xd1c8,	// (0x0003cb9f) grid_vkbss_keypad_pane_ParamLimits

0xd1c8,	// (0x0003cb9f) grid_vkbss_keypad_pane

0xd1d8,	// (0x0003cbaf) ituss_keypad_pane

0xd1f1,	// (0x0003cbc8) aid_vkbss_key_offset_ParamLimits

0xd1f1,	// (0x0003cbc8) aid_vkbss_key_offset

0xd1fd,	// (0x0003cbd4) cell_vkbss_key_pane_ParamLimits

0xd1fd,	// (0x0003cbd4) cell_vkbss_key_pane

0xd213,	// (0x0003cbea) bg_cell_vkbss_key_g1_ParamLimits

0xd213,	// (0x0003cbea) bg_cell_vkbss_key_g1

0xd21f,	// (0x0003cbf6) cell_vkbss_key_3p_pane_ParamLimits

0xd21f,	// (0x0003cbf6) cell_vkbss_key_3p_pane

0xd239,	// (0x0003cc10) cell_vkbss_key_g1_ParamLimits

0xd239,	// (0x0003cc10) cell_vkbss_key_g1

0xd253,	// (0x0003cc2a) cell_vkbss_key_t1_ParamLimits

0xd253,	// (0x0003cc2a) cell_vkbss_key_t1

0xd27e,	// (0x0003cc55) cell_ituss_key_pane_ParamLimits

0xd27e,	// (0x0003cc55) cell_ituss_key_pane

0xd28e,	// (0x0003cc65) bg_cell_ituss_key_g1_ParamLimits

0xd28e,	// (0x0003cc65) bg_cell_ituss_key_g1

0xd29a,	// (0x0003cc71) cell_ituss_key_pane_g1_ParamLimits

0xd29a,	// (0x0003cc71) cell_ituss_key_pane_g1

0xd2a6,	// (0x0003cc7d) cell_ituss_key_pane_g2_ParamLimits

0xd2a6,	// (0x0003cc7d) cell_ituss_key_pane_g2

0x0001,

0xfee3,	// (0x0003f8ba) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x0003f8ba) cell_ituss_key_pane_g

0xd2bf,	// (0x0003cc96) cell_ituss_key_t1_ParamLimits

0xd2bf,	// (0x0003cc96) cell_ituss_key_t1

0xd2ed,	// (0x0003ccc4) cell_ituss_key_t2_ParamLimits

0xd2ed,	// (0x0003ccc4) cell_ituss_key_t2

0xd31e,	// (0x0003ccf5) cell_ituss_key_t3_ParamLimits

0xd31e,	// (0x0003ccf5) cell_ituss_key_t3

0xd34f,	// (0x0003cd26) cell_ituss_key_t4_ParamLimits

0xd34f,	// (0x0003cd26) cell_ituss_key_t4

0x0003,

0xfee8,	// (0x0003f8bf) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x0003f8bf) cell_ituss_key_t

0xd380,	// (0x0003cd57) cell_vkbss_key_3p_pane_g1

0xd388,	// (0x0003cd5f) cell_vkbss_key_3p_pane_g2

0xd390,	// (0x0003cd67) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0003f8c8) cell_vkbss_key_3p_pane_g

0x0e00,	// (0x000307d7) bg_popup_fep_char_preview_window_cp02

0xd398,	// (0x0003cd6f) popup_fep_char_pre_window_t1

0x4719,	// (0x000340f0) main_ai5_sk_pane

0xcfaa,	// (0x0003c981) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xcfb6,	// (0x0003c98d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xcfca,	// (0x0003c9a1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xcfd9,	// (0x0003c9b0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec9,	// (0x0003f8a0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xcfec,	// (0x0003c9c3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1a3c,	// (0x00031413) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x639e,	// (0x00035d75) main_ai5_sk_pane_g1

0x5a86,	// (0x0003545d) popup_query_code_window_g1

0xd19e,	// (0x0003cb75) popup_fep_vkb_icf_pane

0xd1b2,	// (0x0003cb89) popup_fep_vtchi_icf_pane

0x1a3c,	// (0x00031413) bg_icf_pane

0xd3b6,	// (0x0003cd8d) list_vkb_icf_pane

0x1a3c,	// (0x00031413) bg_icf_pane_cp01

0xbf7c,	// (0x0003b953) vtchi_icf_list_pane

0xd3d6,	// (0x0003cdad) list_vkb_icf_pane_t1_ParamLimits

0xd3d6,	// (0x0003cdad) list_vkb_icf_pane_t1

0xd3ed,	// (0x0003cdc4) vtchi_icf_list_pane_t1_ParamLimits

0xd3ed,	// (0x0003cdc4) vtchi_icf_list_pane_t1

0xd18c,	// (0x0003cb63) popup_fep_ituss_window_ParamLimits

0xd1b2,	// (0x0003cb89) popup_fep_vtchi_icf_pane_ParamLimits

0xd1d8,	// (0x0003cbaf) ituss_keypad_pane_ParamLimits

0xd1e8,	// (0x0003cbbf) ituss_sks_pane

0x1a3c,	// (0x00031413) bg_icf_pane_ParamLimits

0xd3a7,	// (0x0003cd7e) icf_edit_indi_pane_ParamLimits

0xd3a7,	// (0x0003cd7e) icf_edit_indi_pane

0xd3b6,	// (0x0003cd8d) list_vkb_icf_pane_ParamLimits

0x1a3c,	// (0x00031413) bg_icf_pane_cp01_ParamLimits

0xd3c2,	// (0x0003cd99) icf_edit_indi_pane_cp01_ParamLimits

0xd3c2,	// (0x0003cd99) icf_edit_indi_pane_cp01

0xd3ce,	// (0x0003cda5) vtchi_query_pane

0x7750,	// (0x00037127) icf_edit_indi_pane_g1_ParamLimits

0x7750,	// (0x00037127) icf_edit_indi_pane_g1

0xd406,	// (0x0003cddd) icf_edit_indi_pane_g2_ParamLimits

0xd406,	// (0x0003cddd) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x0003f8cf) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x0003f8cf) icf_edit_indi_pane_g

0xd412,	// (0x0003cde9) icf_edit_indi_pane_t1

0xd420,	// (0x0003cdf7) bg_input_focus_pane_cp042

0xd429,	// (0x0003ce00) vtchi_button_pane

0xd432,	// (0x0003ce09) vtchi_query_pane_t1

0xd440,	// (0x0003ce17) vtchi_query_pane_t2

0xd44e,	// (0x0003ce25) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0003f8d4) vtchi_query_pane_t

0x0e00,	// (0x000307d7) bg_button_pane_cp13

0xd45c,	// (0x0003ce33) vtchi_button_pane_g1

0xc494,	// (0x0003be6b) ituss_sks_pane_g1

0xd464,	// (0x0003ce3b) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0003f8db) ituss_sks_pane_g

0xd46d,	// (0x0003ce44) ituss_sks_pane_t1

0xd47b,	// (0x0003ce52) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0003f8e0) ituss_sks_pane_t

0x71d7,	// (0x00036bae) indicator_nsta_pane_cp_g1

0x71e0,	// (0x00036bb7) indicator_nsta_pane_cp_g2

0x71e8,	// (0x00036bbf) indicator_nsta_pane_cp_g3

0x71f0,	// (0x00036bc7) indicator_nsta_pane_cp_g4

0x71f8,	// (0x00036bcf) indicator_nsta_pane_cp_g5

0x7200,	// (0x00036bd7) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0003f485) indicator_nsta_pane_cp_g

0x4521,	// (0x00033ef8) cell_graphic2_pane_t2_ParamLimits

0x4521,	// (0x00033ef8) cell_graphic2_pane_t2

0x0001,

0xfdc0,	// (0x0003f797) cell_graphic2_pane_t_ParamLimits

0xfdc0,	// (0x0003f797) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large

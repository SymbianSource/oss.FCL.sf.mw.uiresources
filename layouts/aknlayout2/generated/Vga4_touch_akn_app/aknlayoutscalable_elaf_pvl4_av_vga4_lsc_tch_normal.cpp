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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00000361 };

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
0xb010,	// (0x0000b371) Screen

0xb01c,	// (0x0000b37d) application_window_ParamLimits

0xb01c,	// (0x0000b37d) application_window

0xf393,	// (0x0000f6f4) screen_g1

0xb054,	// (0x0000b3b5) area_bottom_pane_ParamLimits

0xb054,	// (0x0000b3b5) area_bottom_pane

0xf3bd,	// (0x0000f71e) area_top_pane_ParamLimits

0xf3bd,	// (0x0000f71e) area_top_pane

0xf451,	// (0x0000f7b2) main_pane_ParamLimits

0xf451,	// (0x0000f7b2) main_pane

0xf50c,	// (0x0000f86d) misc_graphics

0xc821,	// (0x0000cb82) battery_pane_ParamLimits

0xc821,	// (0x0000cb82) battery_pane

0x3e05,	// (0x00004166) bg_status_flat_pane_g8

0x3e0d,	// (0x0000416e) bg_status_flat_pane_g9

0x2fb6,	// (0x00003317) context_pane_ParamLimits

0x2fb6,	// (0x00003317) context_pane

0xc998,	// (0x0000ccf9) navi_pane_ParamLimits

0xc998,	// (0x0000ccf9) navi_pane

0xca21,	// (0x0000cd82) signal_pane_ParamLimits

0xca21,	// (0x0000cd82) signal_pane

0x0008,

0xf879,	// (0x0000fbda) bg_status_flat_pane_g

0xcab1,	// (0x0000ce12) status_pane_g1_ParamLimits

0xcab1,	// (0x0000ce12) status_pane_g1

0xcac7,	// (0x0000ce28) status_pane_g2_ParamLimits

0xcac7,	// (0x0000ce28) status_pane_g2

0x31f6,	// (0x00003557) status_pane_g3_ParamLimits

0x31f6,	// (0x00003557) status_pane_g3

0x0004,

0xf7b3,	// (0x0000fb14) status_pane_g_ParamLimits

0xf7b3,	// (0x0000fb14) status_pane_g

0xcad3,	// (0x0000ce34) title_pane_ParamLimits

0xcad3,	// (0x0000ce34) title_pane

0xcb30,	// (0x0000ce91) uni_indicator_pane_ParamLimits

0xcb30,	// (0x0000ce91) uni_indicator_pane

0x27db,	// (0x00002b3c) bg_list_pane_ParamLimits

0x27db,	// (0x00002b3c) bg_list_pane

0xc05e,	// (0x0000c3bf) find_pane

0xc066,	// (0x0000c3c7) listscroll_app_pane_ParamLimits

0xc066,	// (0x0000c3c7) listscroll_app_pane

0x280f,	// (0x00002b70) listscroll_form_pane

0xc072,	// (0x0000c3d3) listscroll_gen_pane_ParamLimits

0xc072,	// (0x0000c3d3) listscroll_gen_pane

0x280f,	// (0x00002b70) listscroll_set_pane

0x4c2e,	// (0x00004f8f) main_idle_act_pane

0x22ad,	// (0x0000260e) main_idle_trad_pane

0x22ad,	// (0x0000260e) main_list_empty_pane

0x283d,	// (0x00002b9e) main_midp_pane

0x2849,	// (0x00002baa) main_pane_g1_ParamLimits

0x2849,	// (0x00002baa) main_pane_g1

0xc086,	// (0x0000c3e7) popup_ai_message_window_ParamLimits

0xc086,	// (0x0000c3e7) popup_ai_message_window

0xc126,	// (0x0000c487) popup_fep_china_uni_window_ParamLimits

0xc126,	// (0x0000c487) popup_fep_china_uni_window

0x296f,	// (0x00002cd0) popup_fep_japan_candidate_window_ParamLimits

0x296f,	// (0x00002cd0) popup_fep_japan_candidate_window

0x2999,	// (0x00002cfa) popup_fep_japan_predictive_window_ParamLimits

0x2999,	// (0x00002cfa) popup_fep_japan_predictive_window

0xc186,	// (0x0000c4e7) popup_find_window

0xc1a3,	// (0x0000c504) popup_grid_graphic_window_ParamLimits

0xc1a3,	// (0x0000c504) popup_grid_graphic_window

0x2a0a,	// (0x00002d6b) popup_large_graphic_colour_window

0xc247,	// (0x0000c5a8) popup_menu_window_ParamLimits

0xc247,	// (0x0000c5a8) popup_menu_window

0xc433,	// (0x0000c794) popup_note_image_window

0xc3f3,	// (0x0000c754) popup_note_wait_window_ParamLimits

0xc3f3,	// (0x0000c754) popup_note_wait_window

0xc44b,	// (0x0000c7ac) popup_note_window_ParamLimits

0xc44b,	// (0x0000c7ac) popup_note_window

0xc4f9,	// (0x0000c85a) popup_query_code_window_ParamLimits

0xc4f9,	// (0x0000c85a) popup_query_code_window

0x2c76,	// (0x00002fd7) popup_query_data_code_window_ParamLimits

0x2c76,	// (0x00002fd7) popup_query_data_code_window

0xc539,	// (0x0000c89a) popup_query_data_window_ParamLimits

0xc539,	// (0x0000c89a) popup_query_data_window

0xc5cd,	// (0x0000c92e) popup_query_sat_info_window_ParamLimits

0xc5cd,	// (0x0000c92e) popup_query_sat_info_window

0xc678,	// (0x0000c9d9) popup_snote_single_graphic_window_ParamLimits

0xc678,	// (0x0000c9d9) popup_snote_single_graphic_window

0xc678,	// (0x0000c9d9) popup_snote_single_text_window_ParamLimits

0xc678,	// (0x0000c9d9) popup_snote_single_text_window

0x2d11,	// (0x00003072) popup_sub_window_general

0x2e57,	// (0x000031b8) popup_window_general_ParamLimits

0x2e57,	// (0x000031b8) popup_window_general

0x2e70,	// (0x000031d1) power_save_pane

0xbeee,	// (0x0000c24f) control_pane_g1_ParamLimits

0xbeee,	// (0x0000c24f) control_pane_g1

0x264c,	// (0x000029ad) control_pane_g2_ParamLimits

0x264c,	// (0x000029ad) control_pane_g2

0x2671,	// (0x000029d2) control_pane_g3_ParamLimits

0x2671,	// (0x000029d2) control_pane_g3

0x0007,

0xf79b,	// (0x0000fafc) control_pane_g_ParamLimits

0xf79b,	// (0x0000fafc) control_pane_g

0xbf57,	// (0x0000c2b8) control_pane_t1_ParamLimits

0xbf57,	// (0x0000c2b8) control_pane_t1

0xbfb5,	// (0x0000c316) control_pane_t2_ParamLimits

0xbfb5,	// (0x0000c316) control_pane_t2

0x0002,

0xf7ac,	// (0x0000fb0d) control_pane_t_ParamLimits

0xf7ac,	// (0x0000fb0d) control_pane_t

0x2544,	// (0x000028a5) navi_navi_volume_pane_cp1

0x254d,	// (0x000028ae) status_small_icon_pane

0x2555,	// (0x000028b6) status_small_pane_g1_ParamLimits

0x2555,	// (0x000028b6) status_small_pane_g1

0x2589,	// (0x000028ea) status_small_pane_g2_ParamLimits

0x2589,	// (0x000028ea) status_small_pane_g2

0x2595,	// (0x000028f6) status_small_pane_g3_ParamLimits

0x2595,	// (0x000028f6) status_small_pane_g3

0x25a1,	// (0x00002902) status_small_pane_g4_ParamLimits

0x25a1,	// (0x00002902) status_small_pane_g4

0x25ad,	// (0x0000290e) status_small_pane_g5_ParamLimits

0x25ad,	// (0x0000290e) status_small_pane_g5

0x25bc,	// (0x0000291d) status_small_pane_g6_ParamLimits

0x25bc,	// (0x0000291d) status_small_pane_g6

0x0007,

0xf78a,	// (0x0000faeb) status_small_pane_g_ParamLimits

0xf78a,	// (0x0000faeb) status_small_pane_g

0x25ec,	// (0x0000294d) status_small_pane_t1

0x260f,	// (0x00002970) status_small_wait_pane_ParamLimits

0x260f,	// (0x00002970) status_small_wait_pane

0xbcde,	// (0x0000c03f) aid_levels_signal_ParamLimits

0xbcde,	// (0x0000c03f) aid_levels_signal

0xbcf6,	// (0x0000c057) signal_pane_g1_ParamLimits

0xbcf6,	// (0x0000c057) signal_pane_g1

0xbd11,	// (0x0000c072) signal_pane_g2_ParamLimits

0xbd11,	// (0x0000c072) signal_pane_g2

0x0001,

0xf71f,	// (0x0000fa80) signal_pane_g_ParamLimits

0xf71f,	// (0x0000fa80) signal_pane_g

0x1b51,	// (0x00001eb2) context_pane_g1

0xb1d1,	// (0x0000b532) title_pane_g1

0xb206,	// (0x0000b567) title_pane_t1

0x0176,	// (0x000004d7) title_pane_t2

0x019c,	// (0x000004fd) title_pane_t3

0x0002,

0xf573,	// (0x0000f8d4) title_pane_t

0xcb58,	// (0x0000ceb9) aid_levels_battery_ParamLimits

0xcb58,	// (0x0000ceb9) aid_levels_battery

0xcb74,	// (0x0000ced5) battery_pane_g1_ParamLimits

0xcb74,	// (0x0000ced5) battery_pane_g1

0xcb91,	// (0x0000cef2) battery_pane_g2_ParamLimits

0xcb91,	// (0x0000cef2) battery_pane_g2

0x0001,

0xf7be,	// (0x0000fb1f) battery_pane_g_ParamLimits

0xf7be,	// (0x0000fb1f) battery_pane_g

0xcfaa,	// (0x0000d30b) uni_indicator_pane_g1

0xcfbf,	// (0x0000d320) uni_indicator_pane_g2

0xcfd4,	// (0x0000d335) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0000fc82) uni_indicator_pane_g

0x211b,	// (0x0000247c) navi_icon_pane_ParamLimits

0x211b,	// (0x0000247c) navi_icon_pane

0x2062,	// (0x000023c3) navi_midp_pane

0x2137,	// (0x00002498) navi_navi_pane

0x2141,	// (0x000024a2) navi_text_pane_ParamLimits

0x2141,	// (0x000024a2) navi_text_pane

0xf393,	// (0x0000f6f4) status_small_wait_pane_g1

0x068a,	// (0x000009eb) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0000fc7d) status_small_wait_pane_g

0xcf49,	// (0x0000d2aa) navi_navi_icon_text_pane

0xcf51,	// (0x0000d2b2) navi_navi_pane_g1_ParamLimits

0xcf51,	// (0x0000d2b2) navi_navi_pane_g1

0xcf63,	// (0x0000d2c4) navi_navi_pane_g2_ParamLimits

0xcf63,	// (0x0000d2c4) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0000fc4b) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0000fc4b) navi_navi_pane_g

0x4600,	// (0x00004961) navi_navi_tabs_pane

0xcf75,	// (0x0000d2d6) navi_navi_text_pane

0xcf49,	// (0x0000d2aa) navi_navi_volume_pane

0xcf37,	// (0x0000d298) navi_text_pane_t1

0xcf2b,	// (0x0000d28c) navi_icon_pane_g1

0x44f1,	// (0x00004852) navi_navi_text_pane_t1

0xcf1a,	// (0x0000d27b) navi_navi_volume_pane_g1

0xcf22,	// (0x0000d283) volume_small_pane

0xce76,	// (0x0000d1d7) navi_navi_icon_text_pane_g1

0xce7e,	// (0x0000d1df) navi_navi_icon_text_pane_t1

0x2137,	// (0x00002498) navi_tabs_2_long_pane

0x2137,	// (0x00002498) navi_tabs_2_pane

0x2137,	// (0x00002498) navi_tabs_3_long_pane

0x2137,	// (0x00002498) navi_tabs_3_pane

0x2137,	// (0x00002498) navi_tabs_4_pane

0xce56,	// (0x0000d1b7) tabs_2_active_pane_ParamLimits

0xce56,	// (0x0000d1b7) tabs_2_active_pane

0xce66,	// (0x0000d1c7) tabs_2_passive_pane_ParamLimits

0xce66,	// (0x0000d1c7) tabs_2_passive_pane

0xce24,	// (0x0000d185) tabs_3_active_pane_ParamLimits

0xce24,	// (0x0000d185) tabs_3_active_pane

0xce34,	// (0x0000d195) tabs_3_passive_pane_ParamLimits

0xce34,	// (0x0000d195) tabs_3_passive_pane

0xce45,	// (0x0000d1a6) tabs_3_passive_pane_cp_ParamLimits

0xce45,	// (0x0000d1a6) tabs_3_passive_pane_cp

0xcde0,	// (0x0000d141) tabs_4_active_pane_ParamLimits

0xcde0,	// (0x0000d141) tabs_4_active_pane

0xcdf1,	// (0x0000d152) tabs_4_passive_pane_ParamLimits

0xcdf1,	// (0x0000d152) tabs_4_passive_pane

0xce02,	// (0x0000d163) tabs_4_passive_pane_cp_ParamLimits

0xce02,	// (0x0000d163) tabs_4_passive_pane_cp

0xce13,	// (0x0000d174) tabs_4_passive_pane_cp2_ParamLimits

0xce13,	// (0x0000d174) tabs_4_passive_pane_cp2

0xcdbc,	// (0x0000d11d) tabs_2_long_active_pane_ParamLimits

0xcdbc,	// (0x0000d11d) tabs_2_long_active_pane

0xcdce,	// (0x0000d12f) tabs_2_long_passive_pane_ParamLimits

0xcdce,	// (0x0000d12f) tabs_2_long_passive_pane

0xcd71,	// (0x0000d0d2) tabs_3_long_active_pane_ParamLimits

0xcd71,	// (0x0000d0d2) tabs_3_long_active_pane

0xcd8a,	// (0x0000d0eb) tabs_3_long_passive_pane_ParamLimits

0xcd8a,	// (0x0000d0eb) tabs_3_long_passive_pane

0xcda3,	// (0x0000d104) tabs_3_long_passive_pane_cp_ParamLimits

0xcda3,	// (0x0000d104) tabs_3_long_passive_pane_cp

0x426a,	// (0x000045cb) volume_small_pane_g1

0xcd20,	// (0x0000d081) volume_small_pane_g2

0xcd29,	// (0x0000d08a) volume_small_pane_g3

0xcd32,	// (0x0000d093) volume_small_pane_g4

0xcd3b,	// (0x0000d09c) volume_small_pane_g5

0xcd44,	// (0x0000d0a5) volume_small_pane_g6

0xcd4d,	// (0x0000d0ae) volume_small_pane_g7

0xcd56,	// (0x0000d0b7) volume_small_pane_g8

0xcd5f,	// (0x0000d0c0) volume_small_pane_g9

0xcd68,	// (0x0000d0c9) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0000fc17) volume_small_pane_g

0x04d4,	// (0x00000835) bg_active_tab_pane_cp2_ParamLimits

0x04d4,	// (0x00000835) bg_active_tab_pane_cp2

0xb292,	// (0x0000b5f3) tabs_3_active_pane_g1

0xb29a,	// (0x0000b5fb) tabs_3_active_pane_t1

0x04d4,	// (0x00000835) bg_passive_tab_pane_cp2_ParamLimits

0x04d4,	// (0x00000835) bg_passive_tab_pane_cp2

0xb292,	// (0x0000b5f3) tabs_3_passive_pane_g1

0xb29a,	// (0x0000b5fb) tabs_3_passive_pane_t1

0x04d4,	// (0x00000835) bg_active_tab_pane_cp3_ParamLimits

0x04d4,	// (0x00000835) bg_active_tab_pane_cp3

0xb2ac,	// (0x0000b60d) tabs_4_active_pane_g1

0xb2b4,	// (0x0000b615) tabs_4_active_pane_t1

0x04d4,	// (0x00000835) bg_passive_tab_pane_cp3_ParamLimits

0x04d4,	// (0x00000835) bg_passive_tab_pane_cp3

0xb2ac,	// (0x0000b60d) tabs_4_1_passive_pane_g1

0xb2b4,	// (0x0000b615) tabs_4_1_passive_pane_t1

0x283d,	// (0x00002b9e) list_highlight_pane_cp2

0xd0a4,	// (0x0000d405) list_set_pane_ParamLimits

0xd0a4,	// (0x0000d405) list_set_pane

0xd16c,	// (0x0000d4cd) main_pane_set_t1_ParamLimits

0xd16c,	// (0x0000d4cd) main_pane_set_t1

0xd18c,	// (0x0000d4ed) main_pane_set_t2_ParamLimits

0xd18c,	// (0x0000d4ed) main_pane_set_t2

0xd1a0,	// (0x0000d501) main_pane_set_t3_ParamLimits

0xd1a0,	// (0x0000d501) main_pane_set_t3

0xd1b4,	// (0x0000d515) main_pane_set_t4_ParamLimits

0xd1b4,	// (0x0000d515) main_pane_set_t4

0x0003,

0xf986,	// (0x0000fce7) main_pane_set_t_ParamLimits

0xf986,	// (0x0000fce7) main_pane_set_t

0xd1c8,	// (0x0000d529) setting_code_pane

0x4d8e,	// (0x000050ef) setting_slider_graphic_pane

0x4d8e,	// (0x000050ef) setting_slider_pane

0x4d8e,	// (0x000050ef) setting_text_pane

0x4d8e,	// (0x000050ef) setting_volume_pane

0x01f0,	// (0x00000551) volume_set_pane

0x01ae,	// (0x0000050f) bg_set_opt_pane_cp

0x01fa,	// (0x0000055b) setting_slider_pane_t1

0x0210,	// (0x00000571) setting_slider_pane_t2

0x022a,	// (0x0000058b) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0000f8db) setting_slider_pane_t

0x0242,	// (0x000005a3) slider_set_pane

0xf50c,	// (0x0000f86d) bg_set_opt_pane_cp2

0x0258,	// (0x000005b9) setting_slider_graphic_pane_g1

0x0261,	// (0x000005c2) setting_slider_graphic_pane_t1

0x0271,	// (0x000005d2) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0000f8e2) setting_slider_graphic_pane_t

0x0281,	// (0x000005e2) slider_set_pane_cp

0xf50c,	// (0x0000f86d) input_focus_pane_cp1

0x4c15,	// (0x00004f76) list_set_text_pane

0xf393,	// (0x0000f6f4) setting_text_pane_g1

0xf50c,	// (0x0000f86d) input_focus_pane_cp2

0xf393,	// (0x0000f6f4) setting_code_pane_g1

0x0289,	// (0x000005ea) setting_code_pane_t1

0x0297,	// (0x000005f8) set_text_pane_t1_ParamLimits

0x0297,	// (0x000005f8) set_text_pane_t1

0x11b6,	// (0x00001517) set_opt_bg_pane_g1

0x11be,	// (0x0000151f) set_opt_bg_pane_g2

0x4bed,	// (0x00004f4e) set_opt_bg_pane_g3

0x11ce,	// (0x0000152f) set_opt_bg_pane_g4

0x11d6,	// (0x00001537) set_opt_bg_pane_g5

0x11de,	// (0x0000153f) set_opt_bg_pane_g6

0x4bf7,	// (0x00004f58) set_opt_bg_pane_g7

0x4c01,	// (0x00004f62) set_opt_bg_pane_g8

0x4c0b,	// (0x00004f6c) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0000fcd4) set_opt_bg_pane_g

0x4b7c,	// (0x00004edd) slider_set_pane_g1

0x4b89,	// (0x00004eea) slider_set_pane_g2

0x0006,

0xf964,	// (0x0000fcc5) slider_set_pane_g

0x49e4,	// (0x00004d45) volume_set_pane_g1

0x49ee,	// (0x00004d4f) volume_set_pane_g2

0x49f8,	// (0x00004d59) volume_set_pane_g3

0x4a02,	// (0x00004d63) volume_set_pane_g4

0x4a0c,	// (0x00004d6d) volume_set_pane_g5

0x4a16,	// (0x00004d77) volume_set_pane_g6

0x4a20,	// (0x00004d81) volume_set_pane_g7

0x4a2a,	// (0x00004d8b) volume_set_pane_g8

0x4a34,	// (0x00004d95) volume_set_pane_g9

0x4a3e,	// (0x00004d9f) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0000fc9d) volume_set_pane_g

0xb2c6,	// (0x0000b627) indicator_pane_ParamLimits

0xb2c6,	// (0x0000b627) indicator_pane

0xb2f2,	// (0x0000b653) main_idle_pane_g2_ParamLimits

0xb2f2,	// (0x0000b653) main_idle_pane_g2

0xb32a,	// (0x0000b68b) main_pane_idle_g1_ParamLimits

0xb32a,	// (0x0000b68b) main_pane_idle_g1

0x02f3,	// (0x00000654) popup_clock_digital_analogue_window_ParamLimits

0x02f3,	// (0x00000654) popup_clock_digital_analogue_window

0xb358,	// (0x0000b6b9) soft_indicator_pane_ParamLimits

0xb358,	// (0x0000b6b9) soft_indicator_pane

0xb374,	// (0x0000b6d5) wallpaper_pane_ParamLimits

0xb374,	// (0x0000b6d5) wallpaper_pane

0xf393,	// (0x0000f6f4) wallpaper_pane_g1

0xb386,	// (0x0000b6e7) indicator_pane_g1_ParamLimits

0xb386,	// (0x0000b6e7) indicator_pane_g1

0x514e,	// (0x000054af) navi_navi_icon_text_pane_srt_g1

0x0347,	// (0x000006a8) soft_indicator_pane_t1

0x0361,	// (0x000006c2) aid_ps_area_pane

0xb39f,	// (0x0000b700) aid_ps_clock_pane

0x0380,	// (0x000006e1) aid_ps_indicator_pane

0x038c,	// (0x000006ed) indicator_ps_pane_ParamLimits

0x038c,	// (0x000006ed) indicator_ps_pane

0x039b,	// (0x000006fc) power_save_pane_g1_ParamLimits

0x039b,	// (0x000006fc) power_save_pane_g1

0x03a7,	// (0x00000708) power_save_pane_g2_ParamLimits

0x03a7,	// (0x00000708) power_save_pane_g2

0xf39d,	// (0x0000f6fe) aid_navinavi_width_pane

0x0361,	// (0x000006c2) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0000f8e7) power_save_pane_g_ParamLimits

0xf586,	// (0x0000f8e7) power_save_pane_g

0x03b5,	// (0x00000716) power_save_pane_t1_ParamLimits

0x03b5,	// (0x00000716) power_save_pane_t1

0xb39f,	// (0x0000b700) aid_ps_clock_pane_ParamLimits

0x0380,	// (0x000006e1) aid_ps_indicator_pane_ParamLimits

0x03c7,	// (0x00000728) power_save_pane_t4_ParamLimits

0x03c7,	// (0x00000728) power_save_pane_t4

0x0001,

0xf58b,	// (0x0000f8ec) power_save_pane_t_ParamLimits

0xf58b,	// (0x0000f8ec) power_save_pane_t

0x03f1,	// (0x00000752) power_save_t3_ParamLimits

0x03f1,	// (0x00000752) power_save_t3

0x03dc,	// (0x0000073d) power_save_t2_ParamLimits

0x03dc,	// (0x0000073d) power_save_t2

0x0406,	// (0x00000767) indicator_ps_pane_g1

0xb3ad,	// (0x0000b70e) ai_gene_pane_ParamLimits

0xb3ad,	// (0x0000b70e) ai_gene_pane

0xb3c4,	// (0x0000b725) ai_links_pane_ParamLimits

0xb3c4,	// (0x0000b725) ai_links_pane

0xb3dc,	// (0x0000b73d) indicator_pane_cp1_ParamLimits

0xb3dc,	// (0x0000b73d) indicator_pane_cp1

0xb3eb,	// (0x0000b74c) main_pane_idle_g1_cp_ParamLimits

0xb3eb,	// (0x0000b74c) main_pane_idle_g1_cp

0x043f,	// (0x000007a0) popup_ai_links_title_window

0xb403,	// (0x0000b764) soft_indicator_pane_cp1_ParamLimits

0xb403,	// (0x0000b764) soft_indicator_pane_cp1

0x48af,	// (0x00004c10) ai_links_pane_g1

0x48b8,	// (0x00004c19) grid_ai_links_pane

0xcfa1,	// (0x0000d302) ai_gene_pane_1

0x489d,	// (0x00004bfe) ai_gene_pane_2

0x48a6,	// (0x00004c07) list_highlight_pane_cp4

0xcf7d,	// (0x0000d2de) cell_ai_link_pane_ParamLimits

0xcf7d,	// (0x0000d2de) cell_ai_link_pane

0x486c,	// (0x00004bcd) cell_ai_link_pane_g1

0x068a,	// (0x000009eb) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0000fc78) cell_ai_link_pane_g

0xf50c,	// (0x0000f86d) grid_highlight_cp2

0xf50c,	// (0x0000f86d) bg_popup_sub_pane_cp1

0x0462,	// (0x000007c3) popup_ai_links_title_window_t1

0x47b8,	// (0x00004b19) ai_gene_pane_1_g1_ParamLimits

0x47b8,	// (0x00004b19) ai_gene_pane_1_g1

0x47c4,	// (0x00004b25) ai_gene_pane_1_g2_ParamLimits

0x47c4,	// (0x00004b25) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0000fc6e) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0000fc6e) ai_gene_pane_1_g

0x47d1,	// (0x00004b32) ai_gene_pane_1_t1_ParamLimits

0x47d1,	// (0x00004b32) ai_gene_pane_1_t1

0x4805,	// (0x00004b66) grid_ai_soft_ind_pane

0x47a3,	// (0x00004b04) ai_gene_pane_2_t1_ParamLimits

0x47a3,	// (0x00004b04) ai_gene_pane_2_t1

0xb417,	// (0x0000b778) main_pane_empty_t1_ParamLimits

0xb417,	// (0x0000b778) main_pane_empty_t1

0xb42f,	// (0x0000b790) main_pane_empty_t2_ParamLimits

0xb42f,	// (0x0000b790) main_pane_empty_t2

0xb444,	// (0x0000b7a5) main_pane_empty_t3_ParamLimits

0xb444,	// (0x0000b7a5) main_pane_empty_t3

0xb456,	// (0x0000b7b7) main_pane_empty_t4_ParamLimits

0xb456,	// (0x0000b7b7) main_pane_empty_t4

0xb468,	// (0x0000b7c9) main_pane_empty_t5_ParamLimits

0xb468,	// (0x0000b7c9) main_pane_empty_t5

0x0004,

0xf590,	// (0x0000f8f1) main_pane_empty_t_ParamLimits

0xf590,	// (0x0000f8f1) main_pane_empty_t

0x1294,	// (0x000015f5) bg_popup_window_pane_ParamLimits

0x1294,	// (0x000015f5) bg_popup_window_pane

0x44ff,	// (0x00004860) find_popup_pane_cp2_ParamLimits

0x44ff,	// (0x00004860) find_popup_pane_cp2

0x450b,	// (0x0000486c) heading_pane_ParamLimits

0x450b,	// (0x0000486c) heading_pane

0xf50c,	// (0x0000f86d) bg_popup_sub_pane

0xce9b,	// (0x0000d1fc) bg_popup_window_pane_g1_ParamLimits

0xce9b,	// (0x0000d1fc) bg_popup_window_pane_g1

0xceaa,	// (0x0000d20b) bg_popup_window_pane_g2_ParamLimits

0xceaa,	// (0x0000d20b) bg_popup_window_pane_g2

0xceb6,	// (0x0000d217) bg_popup_window_pane_g3_ParamLimits

0xceb6,	// (0x0000d217) bg_popup_window_pane_g3

0xcec2,	// (0x0000d223) bg_popup_window_pane_g4_ParamLimits

0xcec2,	// (0x0000d223) bg_popup_window_pane_g4

0xced1,	// (0x0000d232) bg_popup_window_pane_g5_ParamLimits

0xced1,	// (0x0000d232) bg_popup_window_pane_g5

0xcee1,	// (0x0000d242) bg_popup_window_pane_g6_ParamLimits

0xcee1,	// (0x0000d242) bg_popup_window_pane_g6

0xceed,	// (0x0000d24e) bg_popup_window_pane_g7_ParamLimits

0xceed,	// (0x0000d24e) bg_popup_window_pane_g7

0xcefc,	// (0x0000d25d) bg_popup_window_pane_g8_ParamLimits

0xcefc,	// (0x0000d25d) bg_popup_window_pane_g8

0xcf0b,	// (0x0000d26c) bg_popup_window_pane_g9_ParamLimits

0xcf0b,	// (0x0000d26c) bg_popup_window_pane_g9

0x44d4,	// (0x00004835) bg_popup_window_pane_g10_ParamLimits

0x44d4,	// (0x00004835) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0000fc36) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0000fc36) bg_popup_window_pane_g

0x43fd,	// (0x0000475e) bg_popup_heading_pane_ParamLimits

0x43fd,	// (0x0000475e) bg_popup_heading_pane

0x5091,	// (0x000053f2) tabs_4_passive_pane_cp_srt_ParamLimits

0x5091,	// (0x000053f2) tabs_4_passive_pane_cp_srt

0x50a3,	// (0x00005404) tabs_4_passive_pane_srt_ParamLimits

0x4411,	// (0x00004772) heading_pane_g2

0x50a3,	// (0x00005404) tabs_4_passive_pane_srt

0x35ba,	// (0x0000391b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x35ba,	// (0x0000391b) bg_passive_tab_pane_cp3_srt

0x4419,	// (0x0000477a) heading_pane_t1_ParamLimits

0x4419,	// (0x0000477a) heading_pane_t1

0x4430,	// (0x00004791) heading_pane_t2_ParamLimits

0x4430,	// (0x00004791) heading_pane_t2

0x0001,

0xf8d0,	// (0x0000fc31) heading_pane_t_ParamLimits

0xf8d0,	// (0x0000fc31) heading_pane_t

0x3dcd,	// (0x0000412e) bg_popup_heading_pane_g1

0x3e7c,	// (0x000041dd) bg_popup_heading_pane_g2

0x3e86,	// (0x000041e7) bg_popup_heading_pane_g3

0x3e90,	// (0x000041f1) bg_popup_heading_pane_g4

0x3e9a,	// (0x000041fb) bg_popup_heading_pane_g5

0x3ea4,	// (0x00004205) bg_popup_heading_pane_g6

0x3eac,	// (0x0000420d) bg_popup_heading_pane_g7

0x3eb4,	// (0x00004215) bg_popup_heading_pane_g8

0x3ebe,	// (0x0000421f) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0000fbed) bg_popup_heading_pane_g

0x3427,	// (0x00003788) bg_popup_sub_pane_g1

0x342f,	// (0x00003790) bg_popup_sub_pane_g2

0x3437,	// (0x00003798) bg_popup_sub_pane_g3

0x343f,	// (0x000037a0) bg_popup_sub_pane_g4

0x3447,	// (0x000037a8) bg_popup_sub_pane_g5

0x344f,	// (0x000037b0) bg_popup_sub_pane_g6

0x3457,	// (0x000037b8) bg_popup_sub_pane_g7

0x345f,	// (0x000037c0) bg_popup_sub_pane_g8

0x3467,	// (0x000037c8) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0000fbc7) bg_popup_sub_pane_g

0x04d4,	// (0x00000835) bg_popup_window_pane_cp5_ParamLimits

0x04d4,	// (0x00000835) bg_popup_window_pane_cp5

0x04f0,	// (0x00000851) popup_note_window_g1_ParamLimits

0x04f0,	// (0x00000851) popup_note_window_g1

0x04fc,	// (0x0000085d) popup_note_window_t1_ParamLimits

0x04fc,	// (0x0000085d) popup_note_window_t1

0x0512,	// (0x00000873) popup_note_window_t2_ParamLimits

0x0512,	// (0x00000873) popup_note_window_t2

0x0528,	// (0x00000889) popup_note_window_t3_ParamLimits

0x0528,	// (0x00000889) popup_note_window_t3

0x053e,	// (0x0000089f) popup_note_window_t4_ParamLimits

0x053e,	// (0x0000089f) popup_note_window_t4

0x0566,	// (0x000008c7) popup_note_window_t5_ParamLimits

0x0566,	// (0x000008c7) popup_note_window_t5

0x0004,

0xf59b,	// (0x0000f8fc) popup_note_window_t_ParamLimits

0xf59b,	// (0x0000f8fc) popup_note_window_t

0x058a,	// (0x000008eb) bg_popup_window_pane_cp6_ParamLimits

0x058a,	// (0x000008eb) bg_popup_window_pane_cp6

0x3d49,	// (0x000040aa) popup_note_image_window_g1_ParamLimits

0x3d49,	// (0x000040aa) popup_note_image_window_g1

0x3d55,	// (0x000040b6) popup_note_image_window_g2_ParamLimits

0x3d55,	// (0x000040b6) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0000fbbb) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0000fbbb) popup_note_image_window_g

0x3d6e,	// (0x000040cf) popup_note_image_window_t1_ParamLimits

0x3d6e,	// (0x000040cf) popup_note_image_window_t1

0x3d87,	// (0x000040e8) popup_note_image_window_t2_ParamLimits

0x3d87,	// (0x000040e8) popup_note_image_window_t2

0x3da0,	// (0x00004101) popup_note_image_window_t3_ParamLimits

0x3da0,	// (0x00004101) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0000fbc0) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0000fbc0) popup_note_image_window_t

0x3c09,	// (0x00003f6a) bg_popup_window_pane_cp7_ParamLimits

0x3c09,	// (0x00003f6a) bg_popup_window_pane_cp7

0x3c39,	// (0x00003f9a) popup_note_wait_window_g1_ParamLimits

0x3c39,	// (0x00003f9a) popup_note_wait_window_g1

0x3c45,	// (0x00003fa6) popup_note_wait_window_g2_ParamLimits

0x3c45,	// (0x00003fa6) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0000fba9) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0000fba9) popup_note_wait_window_g

0x3c5d,	// (0x00003fbe) popup_note_wait_window_t1_ParamLimits

0x3c5d,	// (0x00003fbe) popup_note_wait_window_t1

0x3c84,	// (0x00003fe5) popup_note_wait_window_t2_ParamLimits

0x3c84,	// (0x00003fe5) popup_note_wait_window_t2

0x3ca2,	// (0x00004003) popup_note_wait_window_t3_ParamLimits

0x3ca2,	// (0x00004003) popup_note_wait_window_t3

0x3cb5,	// (0x00004016) popup_note_wait_window_t4_ParamLimits

0x3cb5,	// (0x00004016) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0000fbb0) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0000fbb0) popup_note_wait_window_t

0x3cda,	// (0x0000403b) wait_bar_pane_ParamLimits

0x3cda,	// (0x0000403b) wait_bar_pane

0xf50c,	// (0x0000f86d) wait_anim_pane

0xf50c,	// (0x0000f86d) wait_border_pane

0xf393,	// (0x0000f6f4) wait_anim_pane_g1

0xf393,	// (0x0000f6f4) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0000fa7b) wait_anim_pane_g

0x3bad,	// (0x00003f0e) wait_border_pane_g1

0x3bb8,	// (0x00003f19) wait_border_pane_g2

0x3bc1,	// (0x00003f22) wait_border_pane_g3

0x0002,

0xf841,	// (0x0000fba2) wait_border_pane_g

0x3a17,	// (0x00003d78) bg_popup_window_pane_cp16_ParamLimits

0x3a17,	// (0x00003d78) bg_popup_window_pane_cp16

0x3b17,	// (0x00003e78) indicator_popup_pane_cp4_ParamLimits

0x3b17,	// (0x00003e78) indicator_popup_pane_cp4

0x3b2b,	// (0x00003e8c) popup_query_data_window_t1_ParamLimits

0x3b2b,	// (0x00003e8c) popup_query_data_window_t1

0x3b3d,	// (0x00003e9e) popup_query_data_window_t2_ParamLimits

0x3b3d,	// (0x00003e9e) popup_query_data_window_t2

0x3b56,	// (0x00003eb7) popup_query_data_window_t3_ParamLimits

0x3b56,	// (0x00003eb7) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0000fb9b) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0000fb9b) popup_query_data_window_t

0x3b70,	// (0x00003ed1) query_popup_data_pane_ParamLimits

0x3b70,	// (0x00003ed1) query_popup_data_pane

0x3b84,	// (0x00003ee5) query_popup_data_pane_cp1_ParamLimits

0x3b84,	// (0x00003ee5) query_popup_data_pane_cp1

0x3a17,	// (0x00003d78) bg_popup_window_pane_cp10_ParamLimits

0x3a17,	// (0x00003d78) bg_popup_window_pane_cp10

0x3a49,	// (0x00003daa) indicator_popup_pane_ParamLimits

0x3a49,	// (0x00003daa) indicator_popup_pane

0x3a6b,	// (0x00003dcc) popup_query_code_window_t1_ParamLimits

0x3a6b,	// (0x00003dcc) popup_query_code_window_t1

0x3a85,	// (0x00003de6) popup_query_code_window_t2_ParamLimits

0x3a85,	// (0x00003de6) popup_query_code_window_t2

0x3ace,	// (0x00003e2f) popup_query_code_window_t3_ParamLimits

0x3ace,	// (0x00003e2f) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0000fb94) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0000fb94) popup_query_code_window_t

0x3afd,	// (0x00003e5e) query_popup_pane_ParamLimits

0x3afd,	// (0x00003e5e) query_popup_pane

0x058a,	// (0x000008eb) bg_popup_window_pane_cp15_ParamLimits

0x058a,	// (0x000008eb) bg_popup_window_pane_cp15

0x05aa,	// (0x0000090b) indicator_popup_pane_cp1_ParamLimits

0x05aa,	// (0x0000090b) indicator_popup_pane_cp1

0x05bd,	// (0x0000091e) indicator_popup_pane_cp2_ParamLimits

0x05bd,	// (0x0000091e) indicator_popup_pane_cp2

0x05d8,	// (0x00000939) popup_query_data_code_window_g1_ParamLimits

0x05d8,	// (0x00000939) popup_query_data_code_window_g1

0x05eb,	// (0x0000094c) popup_query_data_code_window_t1_ParamLimits

0x05eb,	// (0x0000094c) popup_query_data_code_window_t1

0x05fd,	// (0x0000095e) popup_query_data_code_window_t2_ParamLimits

0x05fd,	// (0x0000095e) popup_query_data_code_window_t2

0x060f,	// (0x00000970) popup_query_data_code_window_t3_ParamLimits

0x060f,	// (0x00000970) popup_query_data_code_window_t3

0x0625,	// (0x00000986) popup_query_data_code_window_t4_ParamLimits

0x0625,	// (0x00000986) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0000f907) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0000f907) popup_query_data_code_window_t

0x20d7,	// (0x00002438) list_single_midp_graphic_pane_g3

0x063f,	// (0x000009a0) query_popup_data_pane_cp2_ParamLimits

0x0652,	// (0x000009b3) query_popup_pane_cp2_ParamLimits

0x0652,	// (0x000009b3) query_popup_pane_cp2

0xf50c,	// (0x0000f86d) bg_popup_window_pane_cp11

0x3a0f,	// (0x00003d70) heading_pane_cp5

0x0742,	// (0x00000aa3) listscroll_popup_info_pane

0xf50c,	// (0x0000f86d) input_focus_pane_cp3

0x066d,	// (0x000009ce) query_popup_pane_t1

0x067b,	// (0x000009dc) list_popup_info_pane_ParamLimits

0x067b,	// (0x000009dc) list_popup_info_pane

0x068a,	// (0x000009eb) listscroll_popup_info_pane_g1

0x0692,	// (0x000009f3) scroll_pane_cp7

0x069c,	// (0x000009fd) popup_info_list_pane_t1_ParamLimits

0x069c,	// (0x000009fd) popup_info_list_pane_t1

0x06b6,	// (0x00000a17) popup_info_list_pane_t2_ParamLimits

0x06b6,	// (0x00000a17) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0000f910) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0000f910) popup_info_list_pane_t

0xf50c,	// (0x0000f86d) bg_popup_window_pane_cp12

0x5185,	// (0x000054e6) find_popup_pane

0x01ae,	// (0x0000050f) bg_popup_window_pane_cp3

0x06d0,	// (0x00000a31) heading_pane_cp3

0x06dc,	// (0x00000a3d) listscroll_popup_graphic_pane

0xf50c,	// (0x0000f86d) bg_popup_window_pane_cp4

0xb4ca,	// (0x0000b82b) heading_pane_cp4

0x0742,	// (0x00000aa3) listscroll_popup_colour_pane

0xb4d4,	// (0x0000b835) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb4d4,	// (0x0000b835) cell_large_graphic_colour_none_popup_pane

0xb4e8,	// (0x0000b849) grid_large_graphic_colour_popup_pane_ParamLimits

0xb4e8,	// (0x0000b849) grid_large_graphic_colour_popup_pane

0xb514,	// (0x0000b875) listscroll_popup_colour_pane_g1_ParamLimits

0xb514,	// (0x0000b875) listscroll_popup_colour_pane_g1

0xb52b,	// (0x0000b88c) listscroll_popup_colour_pane_g2_ParamLimits

0xb52b,	// (0x0000b88c) listscroll_popup_colour_pane_g2

0xb542,	// (0x0000b8a3) listscroll_popup_colour_pane_g3_ParamLimits

0xb542,	// (0x0000b8a3) listscroll_popup_colour_pane_g3

0xb552,	// (0x0000b8b3) listscroll_popup_colour_pane_g4_ParamLimits

0xb552,	// (0x0000b8b3) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0000f915) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0000f915) listscroll_popup_colour_pane_g

0x07dc,	// (0x00000b3d) scroll_pane_cp6_ParamLimits

0x07dc,	// (0x00000b3d) scroll_pane_cp6

0xb566,	// (0x0000b8c7) cell_large_graphic_colour_popup_pane_ParamLimits

0xb566,	// (0x0000b8c7) cell_large_graphic_colour_popup_pane

0x0813,	// (0x00000b74) cell_large_graphic_colour_none_popup_pane_t1

0xf50c,	// (0x0000f86d) grid_highlight_pane_cp5

0x0822,	// (0x00000b83) cell_large_graphic_colour_popup_pane_g1

0x082a,	// (0x00000b8b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0000f91e) cell_large_graphic_colour_popup_pane_g

0x0832,	// (0x00000b93) cell_large_graphic_colour_popup_pane_g2_copy1

0x083b,	// (0x00000b9c) grid_highlight_pane_cp4

0x0843,	// (0x00000ba4) bg_popup_window_pane_cp8_ParamLimits

0x0843,	// (0x00000ba4) bg_popup_window_pane_cp8

0x085e,	// (0x00000bbf) popup_snote_single_text_window_g1_ParamLimits

0x085e,	// (0x00000bbf) popup_snote_single_text_window_g1

0x0870,	// (0x00000bd1) popup_snote_single_text_window_t1_ParamLimits

0x0870,	// (0x00000bd1) popup_snote_single_text_window_t1

0x0883,	// (0x00000be4) popup_snote_single_text_window_t2_ParamLimits

0x0883,	// (0x00000be4) popup_snote_single_text_window_t2

0x0896,	// (0x00000bf7) popup_snote_single_text_window_t3_ParamLimits

0x0896,	// (0x00000bf7) popup_snote_single_text_window_t3

0x08cf,	// (0x00000c30) popup_snote_single_text_window_t4_ParamLimits

0x08cf,	// (0x00000c30) popup_snote_single_text_window_t4

0x0903,	// (0x00000c64) popup_snote_single_text_window_t5_ParamLimits

0x0903,	// (0x00000c64) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0000f923) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0000f923) popup_snote_single_text_window_t

0x0932,	// (0x00000c93) bg_popup_window_pane_cp9_ParamLimits

0x0932,	// (0x00000c93) bg_popup_window_pane_cp9

0x085e,	// (0x00000bbf) popup_snote_single_graphic_window_g1_ParamLimits

0x085e,	// (0x00000bbf) popup_snote_single_graphic_window_g1

0x0940,	// (0x00000ca1) popup_snote_single_graphic_window_g2_ParamLimits

0x0940,	// (0x00000ca1) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0000f92e) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0000f92e) popup_snote_single_graphic_window_g

0x094c,	// (0x00000cad) popup_snote_single_graphic_window_t1_ParamLimits

0x094c,	// (0x00000cad) popup_snote_single_graphic_window_t1

0x095f,	// (0x00000cc0) popup_snote_single_graphic_window_t2_ParamLimits

0x095f,	// (0x00000cc0) popup_snote_single_graphic_window_t2

0x0972,	// (0x00000cd3) popup_snote_single_graphic_window_t3_ParamLimits

0x0972,	// (0x00000cd3) popup_snote_single_graphic_window_t3

0x09ab,	// (0x00000d0c) popup_snote_single_graphic_window_t4_ParamLimits

0x09ab,	// (0x00000d0c) popup_snote_single_graphic_window_t4

0x09df,	// (0x00000d40) popup_snote_single_graphic_window_t5_ParamLimits

0x09df,	// (0x00000d40) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0000f933) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0000f933) popup_snote_single_graphic_window_t

0x500b,	// (0x0000536c) grid_graphic_popup_pane_ParamLimits

0x500b,	// (0x0000536c) grid_graphic_popup_pane

0x5039,	// (0x0000539a) listscroll_popup_graphic_pane_g1_ParamLimits

0x5039,	// (0x0000539a) listscroll_popup_graphic_pane_g1

0xd30a,	// (0x0000d66b) listscroll_popup_graphic_pane_g2_ParamLimits

0xd30a,	// (0x0000d66b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0000fd11) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0000fd11) listscroll_popup_graphic_pane_g

0x5061,	// (0x000053c2) scroll_pane_cp5

0xd2ca,	// (0x0000d62b) cell_graphic_popup_pane_ParamLimits

0xd2ca,	// (0x0000d62b) cell_graphic_popup_pane

0x4f94,	// (0x000052f5) cell_graphic_popup_pane_g1

0x4f9c,	// (0x000052fd) cell_graphic_popup_pane_g2

0x0832,	// (0x00000b93) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0000fd0a) cell_graphic_popup_pane_g

0x4fa5,	// (0x00005306) cell_graphic_popup_pane_t2

0x083b,	// (0x00000b9c) grid_highlight_pane_cp3

0x0a20,	// (0x00000d81) list_gen_pane_ParamLimits

0x0a20,	// (0x00000d81) list_gen_pane

0x0a52,	// (0x00000db3) scroll_pane

0xd285,	// (0x0000d5e6) bg_list_pane_g1_ParamLimits

0xd285,	// (0x0000d5e6) bg_list_pane_g1

0x4f11,	// (0x00005272) bg_list_pane_g2_ParamLimits

0x4f11,	// (0x00005272) bg_list_pane_g2

0x4f24,	// (0x00005285) bg_list_pane_g3_ParamLimits

0x4f24,	// (0x00005285) bg_list_pane_g3

0x4f36,	// (0x00005297) bg_list_pane_g4_ParamLimits

0x4f36,	// (0x00005297) bg_list_pane_g4

0xd2a0,	// (0x0000d601) bg_list_pane_g5_ParamLimits

0xd2a0,	// (0x0000d601) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0000fcff) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0000fcff) bg_list_pane_g

0xd222,	// (0x0000d583) list_double2_graphic_large_graphic_pane_ParamLimits

0xd222,	// (0x0000d583) list_double2_graphic_large_graphic_pane

0xd222,	// (0x0000d583) list_double2_graphic_pane_ParamLimits

0xd222,	// (0x0000d583) list_double2_graphic_pane

0xd222,	// (0x0000d583) list_double2_large_graphic_pane_ParamLimits

0xd222,	// (0x0000d583) list_double2_large_graphic_pane

0xd222,	// (0x0000d583) list_double2_pane_ParamLimits

0xd222,	// (0x0000d583) list_double2_pane

0xd222,	// (0x0000d583) list_double_graphic_heading_pane_ParamLimits

0xd222,	// (0x0000d583) list_double_graphic_heading_pane

0xd222,	// (0x0000d583) list_double_graphic_pane_ParamLimits

0xd222,	// (0x0000d583) list_double_graphic_pane

0xd222,	// (0x0000d583) list_double_heading_pane_ParamLimits

0xd222,	// (0x0000d583) list_double_heading_pane

0xd222,	// (0x0000d583) list_double_large_graphic_pane_ParamLimits

0xd222,	// (0x0000d583) list_double_large_graphic_pane

0xd222,	// (0x0000d583) list_double_number_pane_ParamLimits

0xd222,	// (0x0000d583) list_double_number_pane

0xd222,	// (0x0000d583) list_double_pane_ParamLimits

0xd222,	// (0x0000d583) list_double_pane

0xd222,	// (0x0000d583) list_double_time_pane_ParamLimits

0xd222,	// (0x0000d583) list_double_time_pane

0xd222,	// (0x0000d583) list_setting_number_pane_ParamLimits

0xd222,	// (0x0000d583) list_setting_number_pane

0xd222,	// (0x0000d583) list_setting_pane_ParamLimits

0xd222,	// (0x0000d583) list_setting_pane

0xd236,	// (0x0000d597) list_single_2graphic_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_2graphic_pane

0xd236,	// (0x0000d597) list_single_graphic_heading_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_graphic_heading_pane

0xd236,	// (0x0000d597) list_single_graphic_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_graphic_pane

0xd236,	// (0x0000d597) list_single_heading_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_heading_pane

0xd236,	// (0x0000d597) list_single_large_graphic_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_large_graphic_pane

0xd236,	// (0x0000d597) list_single_number_heading_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_number_heading_pane

0xd236,	// (0x0000d597) list_single_number_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_number_pane

0xd236,	// (0x0000d597) list_single_pane_ParamLimits

0xd236,	// (0x0000d597) list_single_pane

0xf50c,	// (0x0000f86d) list_highlight_pane_cp1

0x221e,	// (0x0000257f) list_single_pane_g1_ParamLimits

0x221e,	// (0x0000257f) list_single_pane_g1

0x32cb,	// (0x0000362c) list_single_pane_g2_ParamLimits

0x32cb,	// (0x0000362c) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0000f945) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0000f945) list_single_pane_g

0x576d,	// (0x00005ace) list_single_pane_t1_ParamLimits

0x576d,	// (0x00005ace) list_single_pane_t1

0x221e,	// (0x0000257f) list_single_number_pane_g1_ParamLimits

0x221e,	// (0x0000257f) list_single_number_pane_g1

0x32cb,	// (0x0000362c) list_single_number_pane_g2_ParamLimits

0x32cb,	// (0x0000362c) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0000f945) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0000f945) list_single_number_pane_g

0x33b5,	// (0x00003716) list_single_number_pane_t1_ParamLimits

0x33b5,	// (0x00003716) list_single_number_pane_t1

0xd040,	// (0x0000d3a1) list_single_number_pane_t2_ParamLimits

0xd040,	// (0x0000d3a1) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0000fcc0) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0000fcc0) list_single_number_pane_t

0x6f64,	// (0x000072c5) list_single_graphic_pane_g1_ParamLimits

0x6f64,	// (0x000072c5) list_single_graphic_pane_g1

0x221e,	// (0x0000257f) list_single_graphic_pane_g2_ParamLimits

0x221e,	// (0x0000257f) list_single_graphic_pane_g2

0x32cb,	// (0x0000362c) list_single_graphic_pane_g3_ParamLimits

0x32cb,	// (0x0000362c) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0000f93e) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0000f93e) list_single_graphic_pane_g

0xb591,	// (0x0000b8f2) list_single_graphic_pane_t1_ParamLimits

0xb591,	// (0x0000b8f2) list_single_graphic_pane_t1

0x221e,	// (0x0000257f) list_single_heading_pane_g1_ParamLimits

0x221e,	// (0x0000257f) list_single_heading_pane_g1

0x32cb,	// (0x0000362c) list_single_heading_pane_g2_ParamLimits

0x32cb,	// (0x0000362c) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0000f945) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0000f945) list_single_heading_pane_g

0x578f,	// (0x00005af0) list_single_heading_pane_t1_ParamLimits

0x578f,	// (0x00005af0) list_single_heading_pane_t1

0xb5a7,	// (0x0000b908) list_single_heading_pane_t2_ParamLimits

0xb5a7,	// (0x0000b908) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0000f94a) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0000f94a) list_single_heading_pane_t

0x221e,	// (0x0000257f) list_single_number_heading_pane_g1_ParamLimits

0x221e,	// (0x0000257f) list_single_number_heading_pane_g1

0x32cb,	// (0x0000362c) list_single_number_heading_pane_g2_ParamLimits

0x32cb,	// (0x0000362c) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0000f945) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0000f945) list_single_number_heading_pane_g

0x578f,	// (0x00005af0) list_single_number_heading_pane_t1_ParamLimits

0x578f,	// (0x00005af0) list_single_number_heading_pane_t1

0xb5b9,	// (0x0000b91a) list_single_number_heading_pane_t2_ParamLimits

0xb5b9,	// (0x0000b91a) list_single_number_heading_pane_t2

0x5747,	// (0x00005aa8) list_single_number_heading_pane_t3_ParamLimits

0x5747,	// (0x00005aa8) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0000f94f) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0000f94f) list_single_number_heading_pane_t

0x32bf,	// (0x00003620) list_single_graphic_heading_pane_g1_ParamLimits

0x32bf,	// (0x00003620) list_single_graphic_heading_pane_g1

0xb5cb,	// (0x0000b92c) list_single_graphic_heading_pane_g4_ParamLimits

0xb5cb,	// (0x0000b92c) list_single_graphic_heading_pane_g4

0x32cb,	// (0x0000362c) list_single_graphic_heading_pane_g5_ParamLimits

0x32cb,	// (0x0000362c) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0000f956) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0000f956) list_single_graphic_heading_pane_g

0x578f,	// (0x00005af0) list_single_graphic_heading_pane_t1_ParamLimits

0x578f,	// (0x00005af0) list_single_graphic_heading_pane_t1

0xb5dc,	// (0x0000b93d) list_single_graphic_heading_pane_t2_ParamLimits

0xb5dc,	// (0x0000b93d) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0000f95d) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0000f95d) list_single_graphic_heading_pane_t

0x5783,	// (0x00005ae4) list_single_large_graphic_pane_g1_ParamLimits

0x5783,	// (0x00005ae4) list_single_large_graphic_pane_g1

0x221e,	// (0x0000257f) list_single_large_graphic_pane_g2_ParamLimits

0x221e,	// (0x0000257f) list_single_large_graphic_pane_g2

0x32cb,	// (0x0000362c) list_single_large_graphic_pane_g3_ParamLimits

0x32cb,	// (0x0000362c) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0000f962) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0000f962) list_single_large_graphic_pane_g

0x3bb8,	// (0x00003f19) wait_border_pane_g2_copy1

0xb5ee,	// (0x0000b94f) list_single_large_graphic_pane_g4_cp2

0x578f,	// (0x00005af0) list_single_large_graphic_pane_t1_ParamLimits

0x578f,	// (0x00005af0) list_single_large_graphic_pane_t1

0xb5f6,	// (0x0000b957) list_double_pane_g1_ParamLimits

0xb5f6,	// (0x0000b957) list_double_pane_g1

0xb602,	// (0x0000b963) list_double_pane_g2_ParamLimits

0xb602,	// (0x0000b963) list_double_pane_g2

0x0001,

0xf608,	// (0x0000f969) list_double_pane_g_ParamLimits

0xf608,	// (0x0000f969) list_double_pane_g

0xb60e,	// (0x0000b96f) list_double_pane_t1_ParamLimits

0xb60e,	// (0x0000b96f) list_double_pane_t1

0xb624,	// (0x0000b985) list_double_pane_t2_ParamLimits

0xb624,	// (0x0000b985) list_double_pane_t2

0x0001,

0xf60d,	// (0x0000f96e) list_double_pane_t_ParamLimits

0xf60d,	// (0x0000f96e) list_double_pane_t

0xb636,	// (0x0000b997) list_double2_pane_g1_ParamLimits

0xb636,	// (0x0000b997) list_double2_pane_g1

0xb647,	// (0x0000b9a8) list_double2_pane_g2_ParamLimits

0xb647,	// (0x0000b9a8) list_double2_pane_g2

0x0001,

0xf612,	// (0x0000f973) list_double2_pane_g_ParamLimits

0xf612,	// (0x0000f973) list_double2_pane_g

0xb653,	// (0x0000b9b4) list_double2_pane_t1_ParamLimits

0xb653,	// (0x0000b9b4) list_double2_pane_t1

0xb669,	// (0x0000b9ca) list_double2_pane_t2_ParamLimits

0xb669,	// (0x0000b9ca) list_double2_pane_t2

0x0001,

0xf617,	// (0x0000f978) list_double2_pane_t_ParamLimits

0xf617,	// (0x0000f978) list_double2_pane_t

0xb5f6,	// (0x0000b957) list_double_number_pane_g1_ParamLimits

0xb5f6,	// (0x0000b957) list_double_number_pane_g1

0xb602,	// (0x0000b963) list_double_number_pane_g2_ParamLimits

0xb602,	// (0x0000b963) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0000f969) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0000f969) list_double_number_pane_g

0xb67b,	// (0x0000b9dc) list_double_number_pane_t1_ParamLimits

0xb67b,	// (0x0000b9dc) list_double_number_pane_t1

0xb68d,	// (0x0000b9ee) list_double_number_pane_t2_ParamLimits

0xb68d,	// (0x0000b9ee) list_double_number_pane_t2

0xb6a3,	// (0x0000ba04) list_double_number_pane_t3_ParamLimits

0xb6a3,	// (0x0000ba04) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0000f97d) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0000f97d) list_double_number_pane_t

0xb6b5,	// (0x0000ba16) list_double_graphic_pane_g1_ParamLimits

0xb6b5,	// (0x0000ba16) list_double_graphic_pane_g1

0xb6c1,	// (0x0000ba22) list_double_graphic_pane_g2_ParamLimits

0xb6c1,	// (0x0000ba22) list_double_graphic_pane_g2

0xb6d0,	// (0x0000ba31) list_double_graphic_pane_g3_ParamLimits

0xb6d0,	// (0x0000ba31) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0000f984) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0000f984) list_double_graphic_pane_g

0xb6e8,	// (0x0000ba49) list_double_graphic_pane_t1_ParamLimits

0xb6e8,	// (0x0000ba49) list_double_graphic_pane_t1

0xb6fe,	// (0x0000ba5f) list_double_graphic_pane_t2_ParamLimits

0xb6fe,	// (0x0000ba5f) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0000f98d) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0000f98d) list_double_graphic_pane_t

0x4234,	// (0x00004595) list_double2_graphic_pane_g1_ParamLimits

0x4234,	// (0x00004595) list_double2_graphic_pane_g1

0x20cb,	// (0x0000242c) list_double2_graphic_pane_g2_ParamLimits

0x20cb,	// (0x0000242c) list_double2_graphic_pane_g2

0xb647,	// (0x0000b9a8) list_double2_graphic_pane_g3_ParamLimits

0xb647,	// (0x0000b9a8) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0000f992) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0000f992) list_double2_graphic_pane_g

0xb710,	// (0x0000ba71) list_double2_graphic_pane_t1_ParamLimits

0xb710,	// (0x0000ba71) list_double2_graphic_pane_t1

0xb726,	// (0x0000ba87) list_double2_graphic_pane_t2_ParamLimits

0xb726,	// (0x0000ba87) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0000f999) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0000f999) list_double2_graphic_pane_t

0xb738,	// (0x0000ba99) list_double_large_graphic_pane_g1_ParamLimits

0xb738,	// (0x0000ba99) list_double_large_graphic_pane_g1

0xb763,	// (0x0000bac4) list_double_large_graphic_pane_g2_ParamLimits

0xb763,	// (0x0000bac4) list_double_large_graphic_pane_g2

0xb602,	// (0x0000b963) list_double_large_graphic_pane_g3_ParamLimits

0xb602,	// (0x0000b963) list_double_large_graphic_pane_g3

0xb774,	// (0x0000bad5) list_double_large_graphic_pane_g4_ParamLimits

0xb774,	// (0x0000bad5) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0000f99e) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0000f99e) list_double_large_graphic_pane_g

0xb787,	// (0x0000bae8) list_double_large_graphic_pane_t1_ParamLimits

0xb787,	// (0x0000bae8) list_double_large_graphic_pane_t1

0xb7a0,	// (0x0000bb01) list_double_large_graphic_pane_t2_ParamLimits

0xb7a0,	// (0x0000bb01) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0000f9a9) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0000f9a9) list_double_large_graphic_pane_t

0xb7b2,	// (0x0000bb13) list_double2_large_graphic_pane_g1_ParamLimits

0xb7b2,	// (0x0000bb13) list_double2_large_graphic_pane_g1

0xb636,	// (0x0000b997) list_double2_large_graphic_pane_g2_ParamLimits

0xb636,	// (0x0000b997) list_double2_large_graphic_pane_g2

0xb647,	// (0x0000b9a8) list_double2_large_graphic_pane_g3_ParamLimits

0xb647,	// (0x0000b9a8) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0000f9ae) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0000f9ae) list_double2_large_graphic_pane_g

0xb7be,	// (0x0000bb1f) list_double2_large_graphic_pane_t1_ParamLimits

0xb7be,	// (0x0000bb1f) list_double2_large_graphic_pane_t1

0xb7d4,	// (0x0000bb35) list_double2_large_graphic_pane_t2_ParamLimits

0xb7d4,	// (0x0000bb35) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0000f9b5) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0000f9b5) list_double2_large_graphic_pane_t

0xb7e6,	// (0x0000bb47) list_double_heading_pane_g1_ParamLimits

0xb7e6,	// (0x0000bb47) list_double_heading_pane_g1

0xb7f7,	// (0x0000bb58) list_double_heading_pane_g2_ParamLimits

0xb7f7,	// (0x0000bb58) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0000f9ba) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0000f9ba) list_double_heading_pane_g

0xb803,	// (0x0000bb64) list_double_heading_pane_t1_ParamLimits

0xb803,	// (0x0000bb64) list_double_heading_pane_t1

0xb819,	// (0x0000bb7a) list_double_heading_pane_t2_ParamLimits

0xb819,	// (0x0000bb7a) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0000f9bf) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0000f9bf) list_double_heading_pane_t

0x0c97,	// (0x00000ff8) list_double_graphic_heading_pane_g1_ParamLimits

0x0c97,	// (0x00000ff8) list_double_graphic_heading_pane_g1

0xb7e6,	// (0x0000bb47) list_double_graphic_heading_pane_g2_ParamLimits

0xb7e6,	// (0x0000bb47) list_double_graphic_heading_pane_g2

0xb7f7,	// (0x0000bb58) list_double_graphic_heading_pane_g3_ParamLimits

0xb7f7,	// (0x0000bb58) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0000f9c4) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0000f9c4) list_double_graphic_heading_pane_g

0xb82b,	// (0x0000bb8c) list_double_graphic_heading_pane_t1_ParamLimits

0xb82b,	// (0x0000bb8c) list_double_graphic_heading_pane_t1

0xb841,	// (0x0000bba2) list_double_graphic_heading_pane_t2_ParamLimits

0xb841,	// (0x0000bba2) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0000f9cb) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0000f9cb) list_double_graphic_heading_pane_t

0xb763,	// (0x0000bac4) list_double_time_pane_g1_ParamLimits

0xb763,	// (0x0000bac4) list_double_time_pane_g1

0xb602,	// (0x0000b963) list_double_time_pane_g2_ParamLimits

0xb602,	// (0x0000b963) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0000f9d0) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0000f9d0) list_double_time_pane_g

0xb853,	// (0x0000bbb4) list_double_time_pane_t1_ParamLimits

0xb853,	// (0x0000bbb4) list_double_time_pane_t1

0xb869,	// (0x0000bbca) list_double_time_pane_t2_ParamLimits

0xb869,	// (0x0000bbca) list_double_time_pane_t2

0xb87b,	// (0x0000bbdc) list_double_time_pane_t3_ParamLimits

0xb87b,	// (0x0000bbdc) list_double_time_pane_t3

0xb88d,	// (0x0000bbee) list_double_time_pane_t4_ParamLimits

0xb88d,	// (0x0000bbee) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0000f9d5) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0000f9d5) list_double_time_pane_t

0x20cb,	// (0x0000242c) list_setting_pane_g1_ParamLimits

0x20cb,	// (0x0000242c) list_setting_pane_g1

0xb647,	// (0x0000b9a8) list_setting_pane_g2_ParamLimits

0xb647,	// (0x0000b9a8) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0000f9de) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0000f9de) list_setting_pane_g

0xb89f,	// (0x0000bc00) list_setting_pane_t1_ParamLimits

0xb89f,	// (0x0000bc00) list_setting_pane_t1

0xb8b6,	// (0x0000bc17) list_setting_pane_t2_ParamLimits

0xb8b6,	// (0x0000bc17) list_setting_pane_t2

0x0002,

0xf682,	// (0x0000f9e3) list_setting_pane_t_ParamLimits

0xf682,	// (0x0000f9e3) list_setting_pane_t

0xb8f5,	// (0x0000bc56) set_value_pane_cp_ParamLimits

0xb8f5,	// (0x0000bc56) set_value_pane_cp

0x20cb,	// (0x0000242c) list_setting_number_pane_g1_ParamLimits

0x20cb,	// (0x0000242c) list_setting_number_pane_g1

0xb647,	// (0x0000b9a8) list_setting_number_pane_g2_ParamLimits

0xb647,	// (0x0000b9a8) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0000f9de) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0000f9de) list_setting_number_pane_g

0xb903,	// (0x0000bc64) list_setting_number_pane_t1_ParamLimits

0xb903,	// (0x0000bc64) list_setting_number_pane_t1

0xb917,	// (0x0000bc78) list_setting_number_pane_t2_ParamLimits

0xb917,	// (0x0000bc78) list_setting_number_pane_t2

0xb92e,	// (0x0000bc8f) list_setting_number_pane_t3_ParamLimits

0xb92e,	// (0x0000bc8f) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0000f9ea) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0000f9ea) list_setting_number_pane_t

0xb8f5,	// (0x0000bc56) set_value_pane_ParamLimits

0xb8f5,	// (0x0000bc56) set_value_pane

0x0f31,	// (0x00001292) bg_set_opt_pane_ParamLimits

0x0f31,	// (0x00001292) bg_set_opt_pane

0x0f52,	// (0x000012b3) set_value_pane_t1

0x0f60,	// (0x000012c1) slider_set_pane_cp3

0x0f69,	// (0x000012ca) volume_small_pane_cp

0x0f72,	// (0x000012d3) list_form_gen_pane

0x0f7b,	// (0x000012dc) scroll_pane_cp8

0xb971,	// (0x0000bcd2) form_field_data_pane_ParamLimits

0xb971,	// (0x0000bcd2) form_field_data_pane

0xb98c,	// (0x0000bced) form_field_data_wide_pane_ParamLimits

0xb98c,	// (0x0000bced) form_field_data_wide_pane

0xb9b0,	// (0x0000bd11) form_field_popup_pane_ParamLimits

0xb9b0,	// (0x0000bd11) form_field_popup_pane

0x1003,	// (0x00001364) form_field_popup_wide_pane_ParamLimits

0x1003,	// (0x00001364) form_field_popup_wide_pane

0x1024,	// (0x00001385) form_field_slider_pane_ParamLimits

0x1024,	// (0x00001385) form_field_slider_pane

0x1037,	// (0x00001398) form_field_slider_wide_pane_ParamLimits

0x1037,	// (0x00001398) form_field_slider_wide_pane

0x104a,	// (0x000013ab) data_form_pane

0xb9dc,	// (0x0000bd3d) form_field_data_pane_t1

0x107a,	// (0x000013db) input_focus_pane

0x1088,	// (0x000013e9) data_form_wide_pane

0x10c0,	// (0x00001421) form_field_data_wide_pane_t1

0x0850,	// (0x00000bb1) input_focus_pane_cp6

0xb9f6,	// (0x0000bd57) form_field_popup_pane_t1

0x107a,	// (0x000013db) input_focus_pane_cp7

0x10fc,	// (0x0000145d) list_form_pane

0x1110,	// (0x00001471) form_field_popup_wide_pane_t1

0x107a,	// (0x000013db) input_focus_pane_cp8

0x1125,	// (0x00001486) list_form_wide_pane

0xba18,	// (0x0000bd79) form_field_slider_pane_t1_ParamLimits

0xba18,	// (0x0000bd79) form_field_slider_pane_t1

0xba30,	// (0x0000bd91) form_field_slider_pane_t2_ParamLimits

0xba30,	// (0x0000bd91) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0000f9fa) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0000f9fa) form_field_slider_pane_t

0x04d4,	// (0x00000835) input_focus_pane_cp9_ParamLimits

0x04d4,	// (0x00000835) input_focus_pane_cp9

0xba45,	// (0x0000bda6) slider_cont_pane_ParamLimits

0xba45,	// (0x0000bda6) slider_cont_pane

0x1176,	// (0x000014d7) form_field_slider_wide_pane_t1_ParamLimits

0x1176,	// (0x000014d7) form_field_slider_wide_pane_t1

0x1188,	// (0x000014e9) form_field_slider_wide_pane_t2_ParamLimits

0x1188,	// (0x000014e9) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0000f9ff) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0000f9ff) form_field_slider_wide_pane_t

0x04d4,	// (0x00000835) input_focus_pane_cp10_ParamLimits

0x04d4,	// (0x00000835) input_focus_pane_cp10

0xba59,	// (0x0000bdba) slider_cont_pane_cp1_ParamLimits

0xba59,	// (0x0000bdba) slider_cont_pane_cp1

0xba6d,	// (0x0000bdce) slider_form_pane_cp

0x11b6,	// (0x00001517) input_focus_pane_g1

0x11be,	// (0x0000151f) input_focus_pane_g2

0x11c6,	// (0x00001527) input_focus_pane_g3

0x11ce,	// (0x0000152f) input_focus_pane_g4

0x11d6,	// (0x00001537) input_focus_pane_g5

0x11de,	// (0x0000153f) input_focus_pane_g6

0x11e6,	// (0x00001547) input_focus_pane_g7

0x11ee,	// (0x0000154f) input_focus_pane_g8

0x11f6,	// (0x00001557) input_focus_pane_g9

0xf393,	// (0x0000f6f4) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0000fa04) input_focus_pane_g

0x3bc1,	// (0x00003f22) wait_border_pane_g3_copy1

0xba75,	// (0x0000bdd6) data_form_pane_t1

0xf393,	// (0x0000f6f4) wait_anim_pane_g1_copy1

0xd1f7,	// (0x0000d558) data_form_wide_pane_t1

0x121d,	// (0x0000157e) list_form_graphic_pane_cp_ParamLimits

0x121d,	// (0x0000157e) list_form_graphic_pane_cp

0x4db6,	// (0x00005117) slider_form_pane_g1

0x4dbf,	// (0x00005120) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0000fcf0) slider_form_pane_g

0xba91,	// (0x0000bdf2) list_form_graphic_pane_ParamLimits

0xba91,	// (0x0000bdf2) list_form_graphic_pane

0x122f,	// (0x00001590) list_form_graphic_pane_g1

0x1237,	// (0x00001598) list_form_graphic_pane_t1_ParamLimits

0x1237,	// (0x00001598) list_form_graphic_pane_t1

0x01ae,	// (0x0000050f) list_highlight_pane_cp5_ParamLimits

0x01ae,	// (0x0000050f) list_highlight_pane_cp5

0xbaa2,	// (0x0000be03) find_pane_g1

0x1255,	// (0x000015b6) input_find_pane

0xbaab,	// (0x0000be0c) input_find_pane_g1_ParamLimits

0xbaab,	// (0x0000be0c) input_find_pane_g1

0xbab7,	// (0x0000be18) input_find_pane_t1_ParamLimits

0xbab7,	// (0x0000be18) input_find_pane_t1

0xbacc,	// (0x0000be2d) input_find_pane_t2_ParamLimits

0xbacc,	// (0x0000be2d) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0000fa19) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0000fa19) input_find_pane_t

0x1294,	// (0x000015f5) input_focus_pane_cp5_ParamLimits

0x1294,	// (0x000015f5) input_focus_pane_cp5

0xbaed,	// (0x0000be4e) bg_popup_window_pane_cp2_ParamLimits

0xbaed,	// (0x0000be4e) bg_popup_window_pane_cp2

0xbafa,	// (0x0000be5b) listscroll_menu_pane_ParamLimits

0xbafa,	// (0x0000be5b) listscroll_menu_pane

0xbb06,	// (0x0000be67) popup_submenu_window_ParamLimits

0xbb06,	// (0x0000be67) popup_submenu_window

0x12f7,	// (0x00001658) find_popup_pane_g1

0x12ff,	// (0x00001660) input_popup_find_pane_cp

0x1294,	// (0x000015f5) input_focus_pane_cp4_ParamLimits

0x1294,	// (0x000015f5) input_focus_pane_cp4

0x1317,	// (0x00001678) input_popup_find_pane_t1_ParamLimits

0x1317,	// (0x00001678) input_popup_find_pane_t1

0xf50c,	// (0x0000f86d) bg_popup_sub_pane_cp

0x1345,	// (0x000016a6) listscroll_popup_sub_pane

0x134d,	// (0x000016ae) list_submenu_pane_ParamLimits

0x134d,	// (0x000016ae) list_submenu_pane

0x135e,	// (0x000016bf) scroll_pane_cp4

0x1366,	// (0x000016c7) list_single_popup_submenu_pane_ParamLimits

0x1366,	// (0x000016c7) list_single_popup_submenu_pane

0x137b,	// (0x000016dc) list_single_popup_submenu_pane_g1

0x1383,	// (0x000016e4) list_single_popup_submenu_pane_t1_ParamLimits

0x1383,	// (0x000016e4) list_single_popup_submenu_pane_t1

0x04d4,	// (0x00000835) bg_active_tab_pane_cp1_ParamLimits

0x04d4,	// (0x00000835) bg_active_tab_pane_cp1

0xbb44,	// (0x0000bea5) tabs_2_active_pane_g1

0xbb4c,	// (0x0000bead) tabs_2_active_pane_t1

0x04d4,	// (0x00000835) bg_passive_tab_pane_cp1_ParamLimits

0x04d4,	// (0x00000835) bg_passive_tab_pane_cp1

0xbb44,	// (0x0000bea5) tabs_2_passive_pane_g1

0xbb4c,	// (0x0000bead) tabs_2_passive_pane_t1

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp4

0xbb5e,	// (0x0000bebf) tabs_2_long_active_pane_t1

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp4

0x3494,	// (0x000037f5) list_single_midp_graphic_pane_g4_ParamLimits

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp5

0xbb71,	// (0x0000bed2) tabs_3_long_active_pane_t1

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp5

0x3494,	// (0x000037f5) list_single_midp_graphic_pane_g4

0x01ae,	// (0x0000050f) bg_popup_window_pane_cp13_ParamLimits

0x01ae,	// (0x0000050f) bg_popup_window_pane_cp13

0x13fa,	// (0x0000175b) listscroll_popup_fast_pane_ParamLimits

0x13fa,	// (0x0000175b) listscroll_popup_fast_pane

0x1409,	// (0x0000176a) grid_popup_fast_pane_ParamLimits

0x1409,	// (0x0000176a) grid_popup_fast_pane

0x141b,	// (0x0000177c) scroll_pane_cp9_ParamLimits

0x141b,	// (0x0000177c) scroll_pane_cp9

0x6fde,	// (0x0000733f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6fde,	// (0x0000733f) list_single_graphic_hl_pane_t1_cp2

0x143f,	// (0x000017a0) input_focus_pane_cp20_ParamLimits

0x143f,	// (0x000017a0) input_focus_pane_cp20

0x144d,	// (0x000017ae) query_popup_data_pane_t1_ParamLimits

0x144d,	// (0x000017ae) query_popup_data_pane_t1

0x1460,	// (0x000017c1) query_popup_data_pane_t2_ParamLimits

0x1460,	// (0x000017c1) query_popup_data_pane_t2

0x14a6,	// (0x00001807) query_popup_data_pane_t3_ParamLimits

0x14a6,	// (0x00001807) query_popup_data_pane_t3

0x14e7,	// (0x00001848) query_popup_data_pane_t4_ParamLimits

0x14e7,	// (0x00001848) query_popup_data_pane_t4

0x1523,	// (0x00001884) query_popup_data_pane_t5_ParamLimits

0x1523,	// (0x00001884) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0000fa1e) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0000fa1e) query_popup_data_pane_t

0x11b6,	// (0x00001517) bg_set_opt_pane_g1

0x11be,	// (0x0000151f) bg_set_opt_pane_g2

0x11c6,	// (0x00001527) bg_set_opt_pane_g3

0x11ce,	// (0x0000152f) bg_set_opt_pane_g4

0x11d6,	// (0x00001537) bg_set_opt_pane_g5

0x11de,	// (0x0000153f) bg_set_opt_pane_g6

0x11e6,	// (0x00001547) bg_set_opt_pane_g7

0x11ee,	// (0x0000154f) bg_set_opt_pane_g8

0x11f6,	// (0x00001557) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0000fa29) bg_set_opt_pane_g

0x1dfe,	// (0x0000215f) control_top_pane_stacon_ParamLimits

0x1dfe,	// (0x0000215f) control_top_pane_stacon

0x1e51,	// (0x000021b2) signal_pane_stacon_ParamLimits

0x1e51,	// (0x000021b2) signal_pane_stacon

0x1e76,	// (0x000021d7) stacon_top_pane_g1_ParamLimits

0x1e76,	// (0x000021d7) stacon_top_pane_g1

0x1e98,	// (0x000021f9) title_pane_stacon_ParamLimits

0x1e98,	// (0x000021f9) title_pane_stacon

0x1ec2,	// (0x00002223) uni_indicator_pane_stacon_ParamLimits

0x1ec2,	// (0x00002223) uni_indicator_pane_stacon

0x1eda,	// (0x0000223b) battery_pane_stacon_ParamLimits

0x1eda,	// (0x0000223b) battery_pane_stacon

0x1f1e,	// (0x0000227f) control_bottom_pane_stacon_ParamLimits

0x1f1e,	// (0x0000227f) control_bottom_pane_stacon

0x1f41,	// (0x000022a2) navi_pane_stacon_ParamLimits

0x1f41,	// (0x000022a2) navi_pane_stacon

0x1f64,	// (0x000022c5) stacon_bottom_pane_g1_ParamLimits

0x1f64,	// (0x000022c5) stacon_bottom_pane_g1

0x155a,	// (0x000018bb) aid_levels_signal_lsc_ParamLimits

0x155a,	// (0x000018bb) aid_levels_signal_lsc

0x1571,	// (0x000018d2) signal_pane_stacon_g1_ParamLimits

0x1571,	// (0x000018d2) signal_pane_stacon_g1

0x1585,	// (0x000018e6) signal_pane_stacon_g2_ParamLimits

0x1585,	// (0x000018e6) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0000fa3c) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0000fa3c) signal_pane_stacon_g

0x15c7,	// (0x00001928) title_pane_stacon_t1_ParamLimits

0x15c7,	// (0x00001928) title_pane_stacon_t1

0x15ec,	// (0x0000194d) uni_indicator_pane_stacon_g1

0x15f6,	// (0x00001957) uni_indicator_pane_stacon_g2

0x1600,	// (0x00001961) uni_indicator_pane_stacon_g3

0x160a,	// (0x0000196b) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0000fa48) uni_indicator_pane_stacon_g

0x1614,	// (0x00001975) control_top_pane_stacon_g1

0x161c,	// (0x0000197d) control_top_pane_stacon_t1_ParamLimits

0x161c,	// (0x0000197d) control_top_pane_stacon_t1

0x1653,	// (0x000019b4) aid_levels_battery_lsc_ParamLimits

0x1653,	// (0x000019b4) aid_levels_battery_lsc

0x166b,	// (0x000019cc) battery_pane_stacon_g1_ParamLimits

0x166b,	// (0x000019cc) battery_pane_stacon_g1

0x167e,	// (0x000019df) battery_pane_stacon_g2_ParamLimits

0x167e,	// (0x000019df) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0000fa51) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0000fa51) battery_pane_stacon_g

0x16bc,	// (0x00001a1d) navi_icon_pane_stacon

0x16d0,	// (0x00001a31) navi_navi_pane_stacon

0x16bc,	// (0x00001a1d) navi_text_pane_stacon

0x1614,	// (0x00001975) control_bottom_pane_stacon_g1

0x16e6,	// (0x00001a47) control_bottom_pane_stacon_t1_ParamLimits

0x16e6,	// (0x00001a47) control_bottom_pane_stacon_t1

0xbb83,	// (0x0000bee4) grid_app_pane_ParamLimits

0xbb83,	// (0x0000bee4) grid_app_pane

0xbbbb,	// (0x0000bf1c) scroll_pane_cp15_ParamLimits

0xbbbb,	// (0x0000bf1c) scroll_pane_cp15

0xbbd8,	// (0x0000bf39) cell_app_pane_ParamLimits

0xbbd8,	// (0x0000bf39) cell_app_pane

0xbc19,	// (0x0000bf7a) cell_app_pane_g1_ParamLimits

0xbc19,	// (0x0000bf7a) cell_app_pane_g1

0x17c0,	// (0x00001b21) cell_app_pane_g2_ParamLimits

0x17c0,	// (0x00001b21) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0000fa56) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0000fa56) cell_app_pane_g

0x17cc,	// (0x00001b2d) cell_app_pane_t1_ParamLimits

0x17cc,	// (0x00001b2d) cell_app_pane_t1

0x17de,	// (0x00001b3f) grid_highlight_pane_ParamLimits

0x17de,	// (0x00001b3f) grid_highlight_pane

0x11b6,	// (0x00001517) cell_highlight_pane_g1

0x11be,	// (0x0000151f) cell_highlight_pane_g2

0x11c6,	// (0x00001527) cell_highlight_pane_g3

0x11ce,	// (0x0000152f) cell_highlight_pane_g4

0x11d6,	// (0x00001537) cell_highlight_pane_g5

0x11de,	// (0x0000153f) cell_highlight_pane_g6

0x11e6,	// (0x00001547) cell_highlight_pane_g7

0x11ee,	// (0x0000154f) cell_highlight_pane_g8

0x11f6,	// (0x00001557) cell_highlight_pane_g9

0xf393,	// (0x0000f6f4) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0000fa04) cell_highlight_pane_g

0x1802,	// (0x00001b63) bg_scroll_pane

0x1821,	// (0x00001b82) scroll_handle_pane

0x1872,	// (0x00001bd3) scroll_bg_pane_g1

0x1887,	// (0x00001be8) scroll_bg_pane_g2

0x189f,	// (0x00001c00) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0000fa5b) scroll_bg_pane_g

0x18b4,	// (0x00001c15) scroll_handle_focus_pane_ParamLimits

0x18b4,	// (0x00001c15) scroll_handle_focus_pane

0x1872,	// (0x00001bd3) scroll_handle_pane_g1

0x18c1,	// (0x00001c22) scroll_handle_pane_g2

0x189f,	// (0x00001c00) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0000fa62) scroll_handle_pane_g

0x1294,	// (0x000015f5) bg_popup_sub_pane_cp21_ParamLimits

0x1294,	// (0x000015f5) bg_popup_sub_pane_cp21

0x18d5,	// (0x00001c36) popup_fep_japan_predictive_window_t1_ParamLimits

0x18d5,	// (0x00001c36) popup_fep_japan_predictive_window_t1

0x18ec,	// (0x00001c4d) popup_fep_japan_predictive_window_t2_ParamLimits

0x18ec,	// (0x00001c4d) popup_fep_japan_predictive_window_t2

0x191f,	// (0x00001c80) popup_fep_japan_predictive_window_t3_ParamLimits

0x191f,	// (0x00001c80) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0000fa69) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0000fa69) popup_fep_japan_predictive_window_t

0xf50c,	// (0x0000f86d) bg_popup_sub_pane_cp23

0x1956,	// (0x00001cb7) listscroll_japin_cand_pane

0x195e,	// (0x00001cbf) popup_fep_japan_candidate_window_t1

0x196c,	// (0x00001ccd) candidate_pane_ParamLimits

0x196c,	// (0x00001ccd) candidate_pane

0x197e,	// (0x00001cdf) scroll_pane_cp30

0x1988,	// (0x00001ce9) list_single_popup_jap_candidate_pane_ParamLimits

0x1988,	// (0x00001ce9) list_single_popup_jap_candidate_pane

0xf50c,	// (0x0000f86d) list_highlight_pane_cp30

0x199c,	// (0x00001cfd) list_single_popup_jap_candidate_pane_t1

0xbc46,	// (0x0000bfa7) level_1_signal

0xbc58,	// (0x0000bfb9) level_2_signal

0xbc6b,	// (0x0000bfcc) level_3_signal

0xbc7e,	// (0x0000bfdf) level_4_signal

0xbc91,	// (0x0000bff2) level_5_signal

0xbca4,	// (0x0000c005) level_6_signal

0xbcb7,	// (0x0000c018) level_7_signal

0xbc46,	// (0x0000bfa7) level_1_battery

0xbc58,	// (0x0000bfb9) level_2_battery

0xbc6b,	// (0x0000bfcc) level_3_battery

0xbc7e,	// (0x0000bfdf) level_4_battery

0xbc91,	// (0x0000bff2) level_5_battery

0xbca4,	// (0x0000c005) level_6_battery

0xbcb7,	// (0x0000c018) level_7_battery

0x1a3d,	// (0x00001d9e) list_menu_pane_ParamLimits

0x1a3d,	// (0x00001d9e) list_menu_pane

0x1a4e,	// (0x00001daf) scroll_pane_cp25_ParamLimits

0x1a4e,	// (0x00001daf) scroll_pane_cp25

0x1a67,	// (0x00001dc8) list_double2_graphic_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double2_graphic_pane_cp2

0x1a67,	// (0x00001dc8) list_double2_large_graphic_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double2_large_graphic_pane_cp2

0x1a67,	// (0x00001dc8) list_double2_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double2_pane_cp2

0x1a67,	// (0x00001dc8) list_double_graphic_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double_graphic_pane_cp2

0x1a67,	// (0x00001dc8) list_double_large_graphic_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double_large_graphic_pane_cp2

0x1a67,	// (0x00001dc8) list_double_number_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double_number_pane_cp2

0x1a67,	// (0x00001dc8) list_double_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double_pane_cp2

0xbcca,	// (0x0000c02b) list_single_2graphic_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_2graphic_pane_cp2

0xbcca,	// (0x0000c02b) list_single_graphic_heading_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_graphic_heading_pane_cp2

0xbcca,	// (0x0000c02b) list_single_graphic_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_graphic_pane_cp2

0xbcca,	// (0x0000c02b) list_single_heading_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_heading_pane_cp2

0x1aaa,	// (0x00001e0b) list_single_large_graphic_pane_cp2_ParamLimits

0x1aaa,	// (0x00001e0b) list_single_large_graphic_pane_cp2

0xbcca,	// (0x0000c02b) list_single_number_heading_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_number_heading_pane_cp2

0xbcca,	// (0x0000c02b) list_single_number_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_number_pane_cp2

0xbcca,	// (0x0000c02b) list_single_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_pane_cp2

0x1b5a,	// (0x00001ebb) bg_popup_sub_pane_cp22

0x1b7f,	// (0x00001ee0) popup_side_volume_key_window_g1

0x1ba9,	// (0x00001f0a) popup_side_volume_key_window_t1

0x1bc7,	// (0x00001f28) volume_small_pane_cp1

0x04d4,	// (0x00000835) bg_popup_sub_pane_cp24_ParamLimits

0x04d4,	// (0x00000835) bg_popup_sub_pane_cp24

0x1bcf,	// (0x00001f30) fep_china_uni_candidate_pane_ParamLimits

0x1bcf,	// (0x00001f30) fep_china_uni_candidate_pane

0x1be3,	// (0x00001f44) fep_china_uni_entry_pane

0x1bf3,	// (0x00001f54) popup_fep_china_uni_window_g1

0x1c0f,	// (0x00001f70) fep_china_uni_entry_pane_g1

0x1c19,	// (0x00001f7a) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0000fa96) fep_china_uni_entry_pane_g

0x1c23,	// (0x00001f84) fep_entry_item_pane

0x1c2d,	// (0x00001f8e) fep_candidate_item_pane

0x1c35,	// (0x00001f96) fep_china_uni_candidate_pane_g1

0x1c3f,	// (0x00001fa0) fep_china_uni_candidate_pane_g2

0x1c47,	// (0x00001fa8) fep_china_uni_candidate_pane_g3

0x1c4f,	// (0x00001fb0) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0000fa9b) fep_china_uni_candidate_pane_g

0xf393,	// (0x0000f6f4) fep_entry_item_pane_g1

0x1c59,	// (0x00001fba) fep_entry_item_pane_t1_ParamLimits

0x1c59,	// (0x00001fba) fep_entry_item_pane_t1

0x1c6f,	// (0x00001fd0) fep_candidate_item_pane_t1_ParamLimits

0x1c6f,	// (0x00001fd0) fep_candidate_item_pane_t1

0x1c84,	// (0x00001fe5) fep_candidate_item_pane_t2_ParamLimits

0x1c84,	// (0x00001fe5) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0000faa4) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0000faa4) fep_candidate_item_pane_t

0x01ae,	// (0x0000050f) list_highlight_pane_cp31_ParamLimits

0x01ae,	// (0x0000050f) list_highlight_pane_cp31

0x1c96,	// (0x00001ff7) level_1_signal_lsc

0x1c9f,	// (0x00002000) level_2_signal_lsc

0x1ca8,	// (0x00002009) level_3_signal_lsc

0x1cb1,	// (0x00002012) level_4_signal_lsc

0x1cba,	// (0x0000201b) level_5_signal_lsc

0x1cc3,	// (0x00002024) level_6_signal_lsc

0x1ccc,	// (0x0000202d) level_7_signal_lsc

0x1ccc,	// (0x0000202d) level_1_battery_lsc

0x1cd5,	// (0x00002036) level_2_battery_lsc

0x1cde,	// (0x0000203f) level_3_battery_lsc

0x1ce7,	// (0x00002048) level_4_battery_lsc

0x1cf0,	// (0x00002051) level_5_battery_lsc

0x1cf9,	// (0x0000205a) level_6_battery_lsc

0x1c96,	// (0x00001ff7) level_7_battery_lsc

0x1d02,	// (0x00002063) scroll_handle_focus_pane_g1

0x1d0b,	// (0x0000206c) scroll_handle_focus_pane_g2

0x1d14,	// (0x00002075) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0000faa9) scroll_handle_focus_pane_g

0xbd2d,	// (0x0000c08e) list_single_2graphic_pane_g1_ParamLimits

0xbd2d,	// (0x0000c08e) list_single_2graphic_pane_g1

0xb5cb,	// (0x0000b92c) list_single_2graphic_pane_g2_ParamLimits

0xb5cb,	// (0x0000b92c) list_single_2graphic_pane_g2

0x32cb,	// (0x0000362c) list_single_2graphic_pane_g3_ParamLimits

0x32cb,	// (0x0000362c) list_single_2graphic_pane_g3

0xbd39,	// (0x0000c09a) list_single_2graphic_pane_g4_ParamLimits

0xbd39,	// (0x0000c09a) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0000fab0) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0000fab0) list_single_2graphic_pane_g

0xbd4a,	// (0x0000c0ab) list_single_2graphic_pane_t1_ParamLimits

0xbd4a,	// (0x0000c0ab) list_single_2graphic_pane_t1

0xbd78,	// (0x0000c0d9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbd78,	// (0x0000c0d9) list_double2_graphic_large_graphic_pane_g1

0xb636,	// (0x0000b997) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb636,	// (0x0000b997) list_double2_graphic_large_graphic_pane_g2

0xb647,	// (0x0000b9a8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb647,	// (0x0000b9a8) list_double2_graphic_large_graphic_pane_g3

0x3494,	// (0x000037f5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x3494,	// (0x000037f5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0000fab9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0000fab9) list_double2_graphic_large_graphic_pane_g

0xbd8a,	// (0x0000c0eb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd8a,	// (0x0000c0eb) list_double2_graphic_large_graphic_pane_t1

0xbda0,	// (0x0000c101) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbda0,	// (0x0000c101) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0000fac2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0000fac2) list_double2_graphic_large_graphic_pane_t

0x2026,	// (0x00002387) popup_fast_swap_window_ParamLimits

0x2026,	// (0x00002387) popup_fast_swap_window

0x2044,	// (0x000023a5) popup_side_volume_key_window

0x2062,	// (0x000023c3) stacon_top_pane

0x206c,	// (0x000023cd) status_pane_ParamLimits

0x206c,	// (0x000023cd) status_pane

0x2062,	// (0x000023c3) status_small_pane

0xf50c,	// (0x0000f86d) control_pane

0xf50c,	// (0x0000f86d) stacon_bottom_pane

0x0f7b,	// (0x000012dc) scroll_pane_cp121

0x0f72,	// (0x000012d3) set_content_pane

0xbdb2,	// (0x0000c113) bg_active_tab_pane_g1_cp1

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp1

0xbdbb,	// (0x0000c11c) bg_active_tab_pane_g3_cp1

0xbdb2,	// (0x0000c113) bg_passive_tab_pane_g1_cp1

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp1

0xbdbb,	// (0x0000c11c) bg_passive_tab_pane_g3_cp1

0xbdc4,	// (0x0000c125) bg_active_tab_pane_g1_cp2

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp2

0xbdcd,	// (0x0000c12e) bg_active_tab_pane_g3_cp2

0xbdc4,	// (0x0000c125) bg_passive_tab_pane_g1_cp2

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp2

0xbdcd,	// (0x0000c12e) bg_passive_tab_pane_g3_cp2

0xbdd6,	// (0x0000c137) bg_active_tab_pane_g1_cp3

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp3

0xbddf,	// (0x0000c140) bg_active_tab_pane_g3_cp3

0xbdd6,	// (0x0000c137) bg_passive_tab_pane_g1_cp3

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp3

0xbddf,	// (0x0000c140) bg_passive_tab_pane_g3_cp3

0xbde8,	// (0x0000c149) bg_active_tab_pane_g1_cp4

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp4

0xbdf1,	// (0x0000c152) bg_active_tab_pane_g3_cp4

0xbde8,	// (0x0000c149) bg_passive_tab_pane_g1_cp4

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp4

0xbdf1,	// (0x0000c152) bg_passive_tab_pane_g3_cp4

0x1f80,	// (0x000022e1) bg_active_tab_pane_g1_cp5

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp5

0x1f89,	// (0x000022ea) bg_active_tab_pane_g3_cp5

0x1f80,	// (0x000022e1) bg_passive_tab_pane_g1_cp5

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp5

0x1f89,	// (0x000022ea) bg_passive_tab_pane_g3_cp5

0x1366,	// (0x000016c7) list_set_graphic_pane_ParamLimits

0x1366,	// (0x000016c7) list_set_graphic_pane

0xf50c,	// (0x0000f86d) bg_set_opt_pane_cp4

0xbdfa,	// (0x0000c15b) list_set_graphic_pane_g1_ParamLimits

0xbdfa,	// (0x0000c15b) list_set_graphic_pane_g1

0xbe06,	// (0x0000c167) list_set_graphic_pane_g2_ParamLimits

0xbe06,	// (0x0000c167) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0000fac7) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0000fac7) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0000fe38) volume_small_pane_cp_g

0x1fd7,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1fd7,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2

0x1fe5,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1fe5,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2

0x1ff6,	// (0x00002357) list_double2_large_graphic_pane_g3_cp2

0x1ffe,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1ffe,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2

0x2014,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2014,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2

0x4817,	// (0x00004b78) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4817,	// (0x00004b78) list_double_large_graphic_pane_g1_cp2

0x482a,	// (0x00004b8b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x482a,	// (0x00004b8b) list_double_large_graphic_pane_g2_cp2

0x218a,	// (0x000024eb) list_double_large_graphic_pane_g3_cp2

0x483b,	// (0x00004b9c) list_double_large_graphic_pane_g4_cp

0x4843,	// (0x00004ba4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4843,	// (0x00004ba4) list_double_large_graphic_pane_t1_cp2

0x485a,	// (0x00004bbb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x485a,	// (0x00004bbb) list_double_large_graphic_pane_t2_cp2

0x207a,	// (0x000023db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x207a,	// (0x000023db) list_double2_graphic_pane_g1_cp2

0x2088,	// (0x000023e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2088,	// (0x000023e9) list_double2_graphic_pane_g2_cp2

0x2099,	// (0x000023fa) list_double2_graphic_pane_g3_cp2

0x20a3,	// (0x00002404) list_double2_graphic_pane_t1_cp2_ParamLimits

0x20a3,	// (0x00002404) list_double2_graphic_pane_t1_cp2

0x20b9,	// (0x0000241a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x20b9,	// (0x0000241a) list_double2_graphic_pane_t2_cp2

0x20cb,	// (0x0000242c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x20cb,	// (0x0000242c) list_single_number_heading_pane_g1_cp2

0x20d7,	// (0x00002438) list_single_number_heading_pane_g2_cp2

0x20df,	// (0x00002440) list_single_number_heading_pane_t1_cp2_ParamLimits

0x20df,	// (0x00002440) list_single_number_heading_pane_t1_cp2

0x20f5,	// (0x00002456) list_single_number_heading_pane_t2_cp2_ParamLimits

0x20f5,	// (0x00002456) list_single_number_heading_pane_t2_cp2

0x2109,	// (0x0000246a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2109,	// (0x0000246a) list_single_number_heading_pane_t3_cp2

0x20cb,	// (0x0000242c) list_single_heading_pane_g1_cp2_ParamLimits

0x20cb,	// (0x0000242c) list_single_heading_pane_g1_cp2

0x20d7,	// (0x00002438) list_single_heading_pane_g2_cp2

0x20df,	// (0x00002440) list_single_heading_pane_t1_cp2_ParamLimits

0x20df,	// (0x00002440) list_single_heading_pane_t1_cp2

0x4611,	// (0x00004972) list_single_heading_pane_t2_cp2_ParamLimits

0x4611,	// (0x00004972) list_single_heading_pane_t2_cp2

0x4553,	// (0x000048b4) list_double_graphic_pane_g1_cp2_ParamLimits

0x4553,	// (0x000048b4) list_double_graphic_pane_g1_cp2

0x455f,	// (0x000048c0) list_double_graphic_pane_g2_cp2_ParamLimits

0x455f,	// (0x000048c0) list_double_graphic_pane_g2_cp2

0x456e,	// (0x000048cf) list_double_graphic_pane_g3_cp2

0x4576,	// (0x000048d7) list_double_graphic_pane_t1_cp2_ParamLimits

0x4576,	// (0x000048d7) list_double_graphic_pane_t1_cp2

0x458c,	// (0x000048ed) list_double_graphic_pane_t2_cp2_ParamLimits

0x458c,	// (0x000048ed) list_double_graphic_pane_t2_cp2

0x217e,	// (0x000024df) list_double_number_pane_g1_cp2_ParamLimits

0x217e,	// (0x000024df) list_double_number_pane_g1_cp2

0x218a,	// (0x000024eb) list_double_number_pane_g2_cp2

0x4517,	// (0x00004878) list_double_number_pane_t1_cp2_ParamLimits

0x4517,	// (0x00004878) list_double_number_pane_t1_cp2

0x452b,	// (0x0000488c) list_double_number_pane_t2_cp2_ParamLimits

0x452b,	// (0x0000488c) list_double_number_pane_t2_cp2

0x4541,	// (0x000048a2) list_double_number_pane_t3_cp2_ParamLimits

0x4541,	// (0x000048a2) list_double_number_pane_t3_cp2

0x43ef,	// (0x00004750) list_single_graphic_pane_g1_cp2_ParamLimits

0x43ef,	// (0x00004750) list_single_graphic_pane_g1_cp2

0x21e4,	// (0x00002545) list_single_graphic_pane_g2_cp2_ParamLimits

0x21e4,	// (0x00002545) list_single_graphic_pane_g2_cp2

0x21f0,	// (0x00002551) list_single_graphic_pane_g3_cp2

0x43c5,	// (0x00004726) list_single_graphic_pane_t1_cp2_ParamLimits

0x43c5,	// (0x00004726) list_single_graphic_pane_t1_cp2

0x21e4,	// (0x00002545) list_single_number_pane_g1_cp2_ParamLimits

0x21e4,	// (0x00002545) list_single_number_pane_g1_cp2

0x21f0,	// (0x00002551) list_single_number_pane_g2_cp2

0x43c5,	// (0x00004726) list_single_number_pane_t1_cp2_ParamLimits

0x43c5,	// (0x00004726) list_single_number_pane_t1_cp2

0x43db,	// (0x0000473c) list_single_number_pane_t2_cp2_ParamLimits

0x43db,	// (0x0000473c) list_single_number_pane_t2_cp2

0x1fe5,	// (0x00002346) list_double2_pane_g1_cp2_ParamLimits

0x1fe5,	// (0x00002346) list_double2_pane_g1_cp2

0x1ff6,	// (0x00002357) list_double2_pane_g2_cp2

0x2156,	// (0x000024b7) list_double2_pane_t1_cp2_ParamLimits

0x2156,	// (0x000024b7) list_double2_pane_t1_cp2

0x216c,	// (0x000024cd) list_double2_pane_t2_cp2_ParamLimits

0x216c,	// (0x000024cd) list_double2_pane_t2_cp2

0x217e,	// (0x000024df) list_double_pane_g1_cp2_ParamLimits

0x217e,	// (0x000024df) list_double_pane_g1_cp2

0x218a,	// (0x000024eb) list_double_pane_g2_cp2

0x2192,	// (0x000024f3) list_double_pane_t1_cp2_ParamLimits

0x2192,	// (0x000024f3) list_double_pane_t1_cp2

0x21a8,	// (0x00002509) list_double_pane_t2_cp2_ParamLimits

0x21a8,	// (0x00002509) list_double_pane_t2_cp2

0x21d4,	// (0x00002535) list_single_pane_cp2_g3

0x21e4,	// (0x00002545) list_single_pane_g1_cp2_ParamLimits

0x21e4,	// (0x00002545) list_single_pane_g1_cp2

0x21f0,	// (0x00002551) list_single_pane_g2_cp2

0x21f8,	// (0x00002559) list_single_pane_t1_cp2_ParamLimits

0x21f8,	// (0x00002559) list_single_pane_t1_cp2

0x2210,	// (0x00002571) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2210,	// (0x00002571) list_single_large_graphic_pane_g1_cp2

0x221e,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x221e,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2

0x222a,	// (0x0000258b) list_single_large_graphic_pane_g3_cp2

0x2232,	// (0x00002593) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2232,	// (0x00002593) list_single_large_graphic_pane_g4_cp1

0x224c,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x224c,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2

0x4234,	// (0x00004595) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4234,	// (0x00004595) list_single_graphic_heading_pane_g1_cp2

0x4201,	// (0x00004562) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4201,	// (0x00004562) list_single_graphic_heading_pane_g4_cp2

0x21f0,	// (0x00002551) list_single_graphic_heading_pane_g5_cp2

0x4240,	// (0x000045a1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4240,	// (0x000045a1) list_single_graphic_heading_pane_t1_cp2

0x4256,	// (0x000045b7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4256,	// (0x000045b7) list_single_graphic_heading_pane_t2_cp2

0x41f5,	// (0x00004556) list_single_2graphic_pane_g1_cp2_ParamLimits

0x41f5,	// (0x00004556) list_single_2graphic_pane_g1_cp2

0x4201,	// (0x00004562) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4201,	// (0x00004562) list_single_2graphic_pane_g2_cp2

0x21f0,	// (0x00002551) list_single_2graphic_pane_g3_cp2

0x4212,	// (0x00004573) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4212,	// (0x00004573) list_single_2graphic_pane_g4_cp2

0x421e,	// (0x0000457f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x421e,	// (0x0000457f) list_single_2graphic_pane_t1_cp2

0xf393,	// (0x0000f6f4) list_highlight_pane_g10_cp1

0x3dcd,	// (0x0000412e) list_highlight_pane_g1_cp1

0x3dd5,	// (0x00004136) list_highlight_pane_g2_cp1

0x3ddd,	// (0x0000413e) list_highlight_pane_g3_cp1

0x3de5,	// (0x00004146) list_highlight_pane_g4_cp1

0x3ded,	// (0x0000414e) list_highlight_pane_g5_cp1

0x3df5,	// (0x00004156) list_highlight_pane_g6_cp1

0x3dfd,	// (0x0000415e) list_highlight_pane_g7_cp1

0x3e05,	// (0x00004166) list_highlight_pane_g8_cp1

0x3e0d,	// (0x0000416e) list_highlight_pane_g9_cp1

0xcce6,	// (0x0000d047) form_field_slider_pane_t3

0xccf4,	// (0x0000d055) form_field_slider_pane_t4

0x3d09,	// (0x0000406a) slider_form_pane_ParamLimits

0x3d09,	// (0x0000406a) slider_form_pane

0xf50c,	// (0x0000f86d) control_abbreviations

0xf50c,	// (0x0000f86d) control_conventions

0xf50c,	// (0x0000f86d) control_definitions

0xf50c,	// (0x0000f86d) format_table_attribute

0x4667,	// (0x000049c8) bg_popup_preview_window_pane_g9

0xf50c,	// (0x0000f86d) format_table_data2

0xf50c,	// (0x0000f86d) format_table_data3

0xf50c,	// (0x0000f86d) format_table_data_example

0x0008,

0xf50c,	// (0x0000f86d) intro_purpose

0xf8ef,	// (0x0000fc50) bg_popup_preview_window_pane_g

0xf50c,	// (0x0000f86d) texts_category

0xf50c,	// (0x0000f86d) texts_graphics

0x2262,	// (0x000025c3) text_digital

0x2271,	// (0x000025d2) text_primary

0x2280,	// (0x000025e1) text_primary_small

0x228f,	// (0x000025f0) text_secondary

0x229e,	// (0x000025ff) text_title

0x4f68,	// (0x000052c9) bg_passive_tab_pane_g1_cp3_srt

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp3_srt

0x4f71,	// (0x000052d2) bg_passive_tab_pane_g3_cp3_srt

0x04d4,	// (0x00000835) bg_active_tab_pane_cp3_srt_ParamLimits

0x04d4,	// (0x00000835) bg_active_tab_pane_cp3_srt

0x4f7a,	// (0x000052db) tabs_4_active_pane_srt_g1

0xd2b4,	// (0x0000d615) tabs_4_active_pane_srt_t1_ParamLimits

0xd2b4,	// (0x0000d615) tabs_4_active_pane_srt_t1

0x4f68,	// (0x000052c9) bg_active_tab_pane_g1_cp3_copy1

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp3_copy1

0x4f71,	// (0x000052d2) bg_active_tab_pane_g3_cp3_copy1

0x01ae,	// (0x0000050f) tabs_2_long_active_pane_srt_ParamLimits

0x01ae,	// (0x0000050f) tabs_2_long_active_pane_srt

0x01ae,	// (0x0000050f) tabs_2_long_passive_pane_srt_ParamLimits

0x01ae,	// (0x0000050f) tabs_2_long_passive_pane_srt

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp4_srt

0x4b43,	// (0x00004ea4) bg_passive_tab_pane_g1_cp4_srt

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp4_srt

0x4b4c,	// (0x00004ead) bg_passive_tab_pane_g3_cp4_srt

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp4_srt_ParamLimits

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp4_srt

0xd068,	// (0x0000d3c9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd068,	// (0x0000d3c9) tabs_2_long_active_pane_srt_t1

0x4b43,	// (0x00004ea4) bg_active_tab_pane_g1_cp4_srt

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp4_srt

0x4b4c,	// (0x00004ead) bg_active_tab_pane_g3_cp4_srt

0x04d4,	// (0x00000835) tabs_3_long_active_pane_srt_ParamLimits

0x04d4,	// (0x00000835) tabs_3_long_active_pane_srt

0x04d4,	// (0x00000835) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x04d4,	// (0x00000835) tabs_3_long_passive_pane_cp_srt

0x04d4,	// (0x00000835) tabs_3_long_passive_pane_srt_ParamLimits

0x04d4,	// (0x00000835) tabs_3_long_passive_pane_srt

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp5_srt

0x1f80,	// (0x000022e1) bg_passive_tab_pane_g1_cp5_srt

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp5_srt

0x1f89,	// (0x000022ea) bg_passive_tab_pane_g3_cp5_srt

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp5_srt_ParamLimits

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp5_srt

0xd052,	// (0x0000d3b3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd052,	// (0x0000d3b3) tabs_3_long_active_pane_srt_t1

0x1f80,	// (0x000022e1) bg_active_tab_pane_g1_cp5_srt

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp5_srt

0x1f89,	// (0x000022ea) bg_active_tab_pane_g3_cp5_srt

0x4b23,	// (0x00004e84) navi_text_pane_srt_t1

0x4b1b,	// (0x00004e7c) navi_icon_pane_srt_g1

0x251e,	// (0x0000287f) midp_editing_number_pane_srt

0x22ad,	// (0x0000260e) midp_ticker_pane_srt

0x2526,	// (0x00002887) midp_ticker_pane_srt_g1

0x252e,	// (0x0000288f) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0000fae6) midp_ticker_pane_srt_g

0x2536,	// (0x00002897) midp_ticker_pane_srt_t1

0x4b0c,	// (0x00004e6d) midp_editing_number_pane_t1_copy1

0xbe2a,	// (0x0000c18b) listscroll_midp_pane

0xbe2a,	// (0x0000c18b) midp_form_pane

0x2323,	// (0x00002684) midp_info_popup_window_ParamLimits

0x2323,	// (0x00002684) midp_info_popup_window

0x1294,	// (0x000015f5) bg_popup_sub_pane_cp50_ParamLimits

0x1294,	// (0x000015f5) bg_popup_sub_pane_cp50

0x3a03,	// (0x00003d64) listscroll_midp_info_pane_ParamLimits

0x3a03,	// (0x00003d64) listscroll_midp_info_pane

0x39eb,	// (0x00003d4c) listscroll_form_midp_pane_ParamLimits

0x39eb,	// (0x00003d4c) listscroll_form_midp_pane

0x39f7,	// (0x00003d58) scroll_bar_cp050

0xccda,	// (0x0000d03b) list_midp_pane

0x5c77,	// (0x00005fd8) signal_pane_g2_cp

0x3905,	// (0x00003c66) listscroll_midp_info_pane_t1_ParamLimits

0x3905,	// (0x00003c66) listscroll_midp_info_pane_t1

0x391d,	// (0x00003c7e) listscroll_midp_info_pane_t2_ParamLimits

0x391d,	// (0x00003c7e) listscroll_midp_info_pane_t2

0x395b,	// (0x00003cbc) listscroll_midp_info_pane_t3_ParamLimits

0x395b,	// (0x00003cbc) listscroll_midp_info_pane_t3

0x3995,	// (0x00003cf6) listscroll_midp_info_pane_t4_ParamLimits

0x3995,	// (0x00003cf6) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0000fb8b) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0000fb8b) listscroll_midp_info_pane_t

0x135e,	// (0x000016bf) scroll_pane_cp21

0x389f,	// (0x00003c00) form_midp_field_choice_group_pane

0x38a8,	// (0x00003c09) form_midp_field_text_pane

0x38eb,	// (0x00003c4c) form_midp_field_time_pane

0x38f3,	// (0x00003c54) form_midp_gauge_slider_pane

0x38fc,	// (0x00003c5d) form_midp_gauge_wait_pane

0xf50c,	// (0x0000f86d) form_midp_image_pane

0xccbd,	// (0x0000d01e) list_single_midp_pane_ParamLimits

0xccbd,	// (0x0000d01e) list_single_midp_pane

0xcc95,	// (0x0000cff6) form_midp_field_text_pane_t1

0x35ba,	// (0x0000391b) input_focus_pane_cp050

0x386e,	// (0x00003bcf) list_midp_form_text_pane

0x3812,	// (0x00003b73) form_midp_field_choice_group_pane_t1

0x3820,	// (0x00003b81) input_focus_pane_cp051

0x3834,	// (0x00003b95) list_midp_choice_pane

0xf50c,	// (0x0000f86d) status_idle_pane

0x37f6,	// (0x00003b57) form_midp_field_time_pane_t1

0xf393,	// (0x0000f6f4) wait_anim_pane_g2_copy1

0x3804,	// (0x00003b65) form_midp_field_time_pane_t2

0x0001,

0x23d3,	// (0x00002734) aid_navinavi_width_2_pane

0xf825,	// (0x0000fb86) form_midp_field_time_pane_t

0xf50c,	// (0x0000f86d) input_focus_pane_cp052

0xf50c,	// (0x0000f86d) bg_input_focus_pane_cp040

0x37b6,	// (0x00003b17) form_midp_gauge_slider_pane_t1

0x37c4,	// (0x00003b25) form_midp_gauge_slider_pane_t2

0xcc79,	// (0x0000cfda) form_midp_gauge_slider_pane_t3

0xcc87,	// (0x0000cfe8) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0000fb7d) form_midp_gauge_slider_pane_t

0x37ee,	// (0x00003b4f) form_midp_slider_pane

0x01ae,	// (0x0000050f) bg_input_focus_pane_cp041_ParamLimits

0x01ae,	// (0x0000050f) bg_input_focus_pane_cp041

0x3783,	// (0x00003ae4) form_midp_gauge_wait_pane_t1_ParamLimits

0x3783,	// (0x00003ae4) form_midp_gauge_wait_pane_t1

0x3795,	// (0x00003af6) form_midp_gauge_wait_pane_t2_ParamLimits

0x3795,	// (0x00003af6) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0000fb78) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0000fb78) form_midp_gauge_wait_pane_t

0x37a7,	// (0x00003b08) form_midp_wait_pane_ParamLimits

0x37a7,	// (0x00003b08) form_midp_wait_pane

0x374b,	// (0x00003aac) form_midp_image_pane_g1

0x3754,	// (0x00003ab5) form_midp_image_pane_t1

0x3763,	// (0x00003ac4) form_midp_image_pane_t2

0x3772,	// (0x00003ad3) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0000fb71) form_midp_image_pane_t

0x3733,	// (0x00003a94) list_single_midp_pane_g1

0x373c,	// (0x00003a9d) list_single_midp_pane_t1

0xcc62,	// (0x0000cfc3) list_midp_form_item_pane_ParamLimits

0xcc62,	// (0x0000cfc3) list_midp_form_item_pane

0x237b,	// (0x000026dc) list_midp_form_item_pane_t1

0x238a,	// (0x000026eb) midp_ticker_pane_g1

0x2396,	// (0x000026f7) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0000facc) midp_ticker_pane_g

0xbed2,	// (0x0000c233) midp_ticker_pane_t1

0xd213,	// (0x0000d574) midp_editing_number_pane_t1

0x4e16,	// (0x00005177) midp_editing_number_pane

0x4e25,	// (0x00005186) midp_ticker_pane

0x4ad4,	// (0x00004e35) ai_message_heading_pane

0xf50c,	// (0x0000f86d) bg_popup_window_pane_cp14

0x4adc,	// (0x00004e3d) listscroll_ai_message_pane

0x4a5a,	// (0x00004dbb) ai_message_heading_pane_g1_ParamLimits

0x4a5a,	// (0x00004dbb) ai_message_heading_pane_g1

0x4a66,	// (0x00004dc7) ai_message_heading_pane_g2_ParamLimits

0x4a66,	// (0x00004dc7) ai_message_heading_pane_g2

0x4a74,	// (0x00004dd5) ai_message_heading_pane_g3_ParamLimits

0x4a74,	// (0x00004dd5) ai_message_heading_pane_g3

0x4a80,	// (0x00004de1) ai_message_heading_pane_g4_ParamLimits

0x4a80,	// (0x00004de1) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0000fcb2) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0000fcb2) ai_message_heading_pane_g

0x4a8c,	// (0x00004ded) ai_message_heading_pane_t1_ParamLimits

0x4a8c,	// (0x00004ded) ai_message_heading_pane_t1

0x4aa6,	// (0x00004e07) ai_message_heading_pane_t2_ParamLimits

0x4aa6,	// (0x00004e07) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0000fcbb) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0000fcbb) ai_message_heading_pane_t

0x4aba,	// (0x00004e1b) bg_popup_heading_pane_cp1_ParamLimits

0x4aba,	// (0x00004e1b) bg_popup_heading_pane_cp1

0x4a48,	// (0x00004da9) list_ai_message_pane_ParamLimits

0x4a48,	// (0x00004da9) list_ai_message_pane

0x135e,	// (0x000016bf) scroll_pane_cp10

0x4980,	// (0x00004ce1) list_ai_message_pane_g1

0x4988,	// (0x00004ce9) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0000fc8f) list_ai_message_pane_g

0x4990,	// (0x00004cf1) list_ai_message_pane_t1_ParamLimits

0x4990,	// (0x00004cf1) list_ai_message_pane_t1

0x49a5,	// (0x00004d06) list_ai_message_pane_t2_ParamLimits

0x49a5,	// (0x00004d06) list_ai_message_pane_t2

0x49ba,	// (0x00004d1b) list_ai_message_pane_t3_ParamLimits

0x49ba,	// (0x00004d1b) list_ai_message_pane_t3

0x49cf,	// (0x00004d30) list_ai_message_pane_t4_ParamLimits

0x49cf,	// (0x00004d30) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0000fc94) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0000fc94) list_ai_message_pane_t

0xd026,	// (0x0000d387) cell_ai_soft_ind_pane_ParamLimits

0xd026,	// (0x0000d387) cell_ai_soft_ind_pane

0x23b4,	// (0x00002715) cell_ai_soft_ind_pane_g1_ParamLimits

0x23b4,	// (0x00002715) cell_ai_soft_ind_pane_g1

0xf50c,	// (0x0000f86d) grid_highlight_cp1

0x23c1,	// (0x00002722) text_secondary_cp56_ParamLimits

0x23c1,	// (0x00002722) text_secondary_cp56

0x493e,	// (0x00004c9f) example_general_pane_ParamLimits

0x493e,	// (0x00004c9f) example_general_pane

0x494a,	// (0x00004cab) example_parent_pane_g1_ParamLimits

0x494a,	// (0x00004cab) example_parent_pane_g1

0x4956,	// (0x00004cb7) example_parent_pane_t1_ParamLimits

0x4956,	// (0x00004cb7) example_parent_pane_t1

0xc483,	// (0x0000c7e4) popup_preview_text_window_ParamLimits

0xc483,	// (0x0000c7e4) popup_preview_text_window

0x21dc,	// (0x0000253d) list_single_pane_cp2_g4

0x058a,	// (0x000008eb) bg_popup_preview_window_pane_ParamLimits

0x058a,	// (0x000008eb) bg_popup_preview_window_pane

0x4671,	// (0x000049d2) popup_preview_text_window_t1_ParamLimits

0x4671,	// (0x000049d2) popup_preview_text_window_t1

0x468f,	// (0x000049f0) popup_preview_text_window_t2_ParamLimits

0x468f,	// (0x000049f0) popup_preview_text_window_t2

0x46d8,	// (0x00004a39) popup_preview_text_window_t3_ParamLimits

0x46d8,	// (0x00004a39) popup_preview_text_window_t3

0x471d,	// (0x00004a7e) popup_preview_text_window_t4_ParamLimits

0x471d,	// (0x00004a7e) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0000fc63) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0000fc63) popup_preview_text_window_t

0x479b,	// (0x00004afc) scroll_pane_cp11

0x3427,	// (0x00003788) bg_popup_preview_window_pane_g1

0x4625,	// (0x00004986) bg_popup_preview_window_pane_g2

0x462f,	// (0x00004990) bg_popup_preview_window_pane_g3

0x4639,	// (0x0000499a) bg_popup_preview_window_pane_g4

0x4643,	// (0x000049a4) bg_popup_preview_window_pane_g5

0x464d,	// (0x000049ae) bg_popup_preview_window_pane_g6

0x4655,	// (0x000049b6) bg_popup_preview_window_pane_g7

0x465d,	// (0x000049be) bg_popup_preview_window_pane_g8

0xf3a9,	// (0x0000f70a) aid_popup_width_pane

0xc3f3,	// (0x0000c754) popup_midp_note_alarm_window_ParamLimits

0xc3f3,	// (0x0000c754) popup_midp_note_alarm_window

0x104a,	// (0x000013ab) data_form_pane_ParamLimits

0xb9d2,	// (0x0000bd33) form_field_data_pane_g1

0xb9dc,	// (0x0000bd3d) form_field_data_pane_t1_ParamLimits

0x107a,	// (0x000013db) input_focus_pane_ParamLimits

0x1088,	// (0x000013e9) data_form_wide_pane_ParamLimits

0x1094,	// (0x000013f5) form_field_data_wide_pane_g1

0x10c0,	// (0x00001421) form_field_data_wide_pane_t1_ParamLimits

0x0850,	// (0x00000bb1) input_focus_pane_cp6_ParamLimits

0xbb36,	// (0x0000be97) input_popup_find_pane_g1_ParamLimits

0xbb36,	// (0x0000be97) input_popup_find_pane_g1

0x168f,	// (0x000019f0) aid_navi_side_left_pane

0x16a4,	// (0x00001a05) aid_navi_side_right_pane

0x3ec8,	// (0x00004229) bg_popup_window_pane_cp30_ParamLimits

0x3ec8,	// (0x00004229) bg_popup_window_pane_cp30

0x3f42,	// (0x000042a3) popup_midp_note_alarm_window_g1_ParamLimits

0x3f42,	// (0x000042a3) popup_midp_note_alarm_window_g1

0x3f72,	// (0x000042d3) popup_midp_note_alarm_window_t1_ParamLimits

0x3f72,	// (0x000042d3) popup_midp_note_alarm_window_t1

0x4013,	// (0x00004374) popup_midp_note_alarm_window_t2_ParamLimits

0x4013,	// (0x00004374) popup_midp_note_alarm_window_t2

0x40c1,	// (0x00004422) popup_midp_note_alarm_window_t3_ParamLimits

0x40c1,	// (0x00004422) popup_midp_note_alarm_window_t3

0x40f3,	// (0x00004454) popup_midp_note_alarm_window_t4_ParamLimits

0x40f3,	// (0x00004454) popup_midp_note_alarm_window_t4

0x4119,	// (0x0000447a) popup_midp_note_alarm_window_t5_ParamLimits

0x4119,	// (0x0000447a) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0000fc00) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0000fc00) popup_midp_note_alarm_window_t

0x41c5,	// (0x00004526) wait_bar_pane_cp1_ParamLimits

0x41c5,	// (0x00004526) wait_bar_pane_cp1

0xf50c,	// (0x0000f86d) wait_anim_pane_copy1

0xf50c,	// (0x0000f86d) wait_border_pane_copy1

0x3bad,	// (0x00003f0e) wait_border_pane_g1_copy1

0x10da,	// (0x0000143b) form_field_popup_pane_g1

0xb9f6,	// (0x0000bd57) form_field_popup_pane_t1_ParamLimits

0x107a,	// (0x000013db) input_focus_pane_cp7_ParamLimits

0x10fc,	// (0x0000145d) list_form_pane_ParamLimits

0x1108,	// (0x00001469) form_field_popup_wide_pane_g1

0x1110,	// (0x00001471) form_field_popup_wide_pane_t1_ParamLimits

0x107a,	// (0x000013db) input_focus_pane_cp8_ParamLimits

0x1125,	// (0x00001486) list_form_wide_pane_ParamLimits

0x4ff5,	// (0x00005356) aid_size_cell_graphic_pane

0xba75,	// (0x0000bdd6) data_form_pane_t1_ParamLimits

0xd1f7,	// (0x0000d558) data_form_wide_pane_t1_ParamLimits

0xc880,	// (0x0000cbe1) bg_status_flat_pane

0xb206,	// (0x0000b567) title_pane_t1_ParamLimits

0x0176,	// (0x000004d7) title_pane_t2_ParamLimits

0x019c,	// (0x000004fd) title_pane_t3_ParamLimits

0xf573,	// (0x0000f8d4) title_pane_t_ParamLimits

0xbc46,	// (0x0000bfa7) level_1_signal_ParamLimits

0xbc58,	// (0x0000bfb9) level_2_signal_ParamLimits

0xbc6b,	// (0x0000bfcc) level_3_signal_ParamLimits

0xbc7e,	// (0x0000bfdf) level_4_signal_ParamLimits

0xbc91,	// (0x0000bff2) level_5_signal_ParamLimits

0xbca4,	// (0x0000c005) level_6_signal_ParamLimits

0xbcb7,	// (0x0000c018) level_7_signal_ParamLimits

0xbc46,	// (0x0000bfa7) level_1_battery_ParamLimits

0xbc58,	// (0x0000bfb9) level_2_battery_ParamLimits

0xbc6b,	// (0x0000bfcc) level_3_battery_ParamLimits

0xbc7e,	// (0x0000bfdf) level_4_battery_ParamLimits

0xbc91,	// (0x0000bff2) level_5_battery_ParamLimits

0xbca4,	// (0x0000c005) level_6_battery_ParamLimits

0xbcb7,	// (0x0000c018) level_7_battery_ParamLimits

0x3dcd,	// (0x0000412e) bg_status_flat_pane_g1

0x3dd5,	// (0x00004136) bg_status_flat_pane_g2

0x3ddd,	// (0x0000413e) bg_status_flat_pane_g3

0x3de5,	// (0x00004146) bg_status_flat_pane_g4

0x3ded,	// (0x0000414e) bg_status_flat_pane_g5

0x3df5,	// (0x00004156) bg_status_flat_pane_g6

0x3dfd,	// (0x0000415e) bg_status_flat_pane_g7

0xb29a,	// (0x0000b5fb) tabs_3_active_pane_t1_ParamLimits

0xb29a,	// (0x0000b5fb) tabs_3_passive_pane_t1_ParamLimits

0xb2b4,	// (0x0000b615) tabs_4_active_pane_t1_ParamLimits

0xb2b4,	// (0x0000b615) tabs_4_1_passive_pane_t1_ParamLimits

0xbb4c,	// (0x0000bead) tabs_2_active_pane_t1_ParamLimits

0xbb4c,	// (0x0000bead) tabs_2_passive_pane_t1_ParamLimits

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp4_ParamLimits

0xbb5e,	// (0x0000bebf) tabs_2_long_active_pane_t1_ParamLimits

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp4_ParamLimits

0x34e5,	// (0x00003846) list_single_midp_graphic_pane_t1_ParamLimits

0x01ae,	// (0x0000050f) bg_active_tab_pane_cp5_ParamLimits

0xbb71,	// (0x0000bed2) tabs_3_long_active_pane_t1_ParamLimits

0x283d,	// (0x00002b9e) bg_passive_tab_pane_cp5_ParamLimits

0x34e5,	// (0x00003846) list_single_midp_graphic_pane_t1

0xc880,	// (0x0000cbe1) bg_status_flat_pane_ParamLimits

0x2ffa,	// (0x0000335b) indicator_pane_cp2_ParamLimits

0x2ffa,	// (0x0000335b) indicator_pane_cp2

0xca15,	// (0x0000cd76) navi_pane_srt_ParamLimits

0xca15,	// (0x0000cd76) navi_pane_srt

0x3160,	// (0x000034c1) popup_clock_digital_analogue_window_cp1

0x0338,	// (0x00000699) indicator_pane_t1

0x22ad,	// (0x0000260e) copy_highlight_pane

0x22ad,	// (0x0000260e) cursor_graphics_pane

0x22ad,	// (0x0000260e) graphic_within_text_pane

0x22ad,	// (0x0000260e) link_highlight_pane

0x475e,	// (0x00004abf) popup_preview_text_window_t5_ParamLimits

0x475e,	// (0x00004abf) popup_preview_text_window_t5

0x23dd,	// (0x0000273e) cursor_digital_pane

0x23dd,	// (0x0000273e) cursor_primary_pane

0x23ee,	// (0x0000274f) cursor_primary_small_pane

0x23f6,	// (0x00002757) cursor_secondary_pane

0x23fe,	// (0x0000275f) cursor_title_pane

0x23dd,	// (0x0000273e) link_highlight_digital_pane

0x23e5,	// (0x00002746) link_highlight_primary_pane

0x23ee,	// (0x0000274f) link_highlight_primary_small_pane

0x23f6,	// (0x00002757) link_highlight_secondary_pane

0x23fe,	// (0x0000275f) link_highlight_title_pane

0x23dd,	// (0x0000273e) copy_highlight_digital_pane

0x23dd,	// (0x0000273e) copy_highlight_primary_pane

0x23ee,	// (0x0000274f) copy_highlight_primary_small_pane

0x23f6,	// (0x00002757) copy_highlight_secondary_pane

0x23fe,	// (0x0000275f) copy_highlight_title_pane

0x23f6,	// (0x00002757) graphic_text_digital_pane

0x3e6b,	// (0x000041cc) graphic_text_primary_pane

0x3e74,	// (0x000041d5) graphic_text_primary_small_pane

0x23ee,	// (0x0000274f) graphic_text_secondary_pane

0x23dd,	// (0x0000273e) graphic_text_title_pane

0xbee4,	// (0x0000c245) cursor_primary_pane_g1

0x3e5d,	// (0x000041be) cursor_text_primary_t1

0xcd16,	// (0x0000d077) cursor_primary_small_pane_g1

0x3e4f,	// (0x000041b0) cursor_text_primary_small_t1

0xcd0c,	// (0x0000d06d) cursor_primary_small_pane_g1_copy1

0x3e37,	// (0x00004198) cursor_text_primary_small_t1_copy1

0x3e15,	// (0x00004176) cursor_text_title_t1

0xcd02,	// (0x0000d063) cursor_title_pane_g1

0xbee4,	// (0x0000c245) cursor_digital_pane_g1

0x2410,	// (0x00002771) cursor_text_digital_t1

0x241e,	// (0x0000277f) link_highlight_primary_pane_g1

0x3dbe,	// (0x0000411f) link_highlight_primary_pane_t1

0x241e,	// (0x0000277f) link_highlight_primary_small_pane_g1

0x2426,	// (0x00002787) link_highlight_primary_small_pane_t1

0x2435,	// (0x00002796) link_highlight_secondary_pane_g1

0x243d,	// (0x0000279e) link_highlight_secondary_pane_t1

0x3d32,	// (0x00004093) link_highlight_title_pane_g1

0x3d3a,	// (0x0000409b) link_highlight_title_pane_t1

0x3d1b,	// (0x0000407c) link_highlight_digital_pane_g1

0x3d23,	// (0x00004084) link_highlight_digital_pane_t1

0x3be3,	// (0x00003f44) copy_highlight_primary_pane_g1

0x3bfa,	// (0x00003f5b) copy_highlight_primary_pane_t1

0x3be3,	// (0x00003f44) copy_highlight_primary_small_pane_g1

0x3beb,	// (0x00003f4c) copy_highlight_primary_small_pane_t1

0x244c,	// (0x000027ad) copy_highlight_secondary_pane_g1

0x2454,	// (0x000027b5) copy_highlight_secondary_pane_t1

0x3bcc,	// (0x00003f2d) copy_highlight_title_pane_g1

0x3bd4,	// (0x00003f35) copy_highlight_title_pane_t1

0x3be3,	// (0x00003f44) copy_highlight_digital_pane_g1

0x527d,	// (0x000055de) copy_highlight_digital_pane_t1

0x51d1,	// (0x00005532) graphic_text_primary_pane_g1

0x5261,	// (0x000055c2) graphic_text_primary_pane_t1

0x526f,	// (0x000055d0) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0000fd2f) graphic_text_primary_pane_t

0x523d,	// (0x0000559e) graphic_text_primary_small_pane_g1

0x5245,	// (0x000055a6) graphic_text_primary_small_pane_t1

0x5253,	// (0x000055b4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0000fd2a) graphic_text_primary_small_pane_t

0x5219,	// (0x0000557a) graphic_text_secondary_pane_g1

0x5221,	// (0x00005582) graphic_text_secondary_pane_t1

0x522f,	// (0x00005590) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0000fd25) graphic_text_secondary_pane_t

0x51f5,	// (0x00005556) graphic_text_title_pane_g1

0x51fd,	// (0x0000555e) graphic_text_title_pane_t1

0x520b,	// (0x0000556c) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0000fd20) graphic_text_title_pane_t

0x51d1,	// (0x00005532) graphic_text_digital_pane_g1

0x51d9,	// (0x0000553a) graphic_text_digital_pane_t1

0x51e7,	// (0x00005548) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0000fd1b) graphic_text_digital_pane_t

0x01ae,	// (0x0000050f) navi_icon_pane_srt_ParamLimits

0x01ae,	// (0x0000050f) navi_icon_pane_srt

0xf50c,	// (0x0000f86d) navi_midp_pane_srt

0xf50c,	// (0x0000f86d) navi_navi_pane_srt

0x01ae,	// (0x0000050f) navi_text_pane_srt_ParamLimits

0x01ae,	// (0x0000050f) navi_text_pane_srt

0x519c,	// (0x000054fd) navi_navi_icon_text_pane_srt

0x51a4,	// (0x00005505) navi_navi_pane_srt_g1_ParamLimits

0x51a4,	// (0x00005505) navi_navi_pane_srt_g1

0x51b6,	// (0x00005517) navi_navi_pane_srt_g2_ParamLimits

0x51b6,	// (0x00005517) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0000fd16) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0000fd16) navi_navi_pane_srt_g

0x51c8,	// (0x00005529) navi_navi_tabs_pane_srt

0x519c,	// (0x000054fd) navi_navi_text_pane_srt

0x519c,	// (0x000054fd) navi_navi_volume_pane_srt

0x518d,	// (0x000054ee) navi_navi_text_pane_srt_t1

0x5168,	// (0x000054c9) navi_navi_volume_pane_srt_g1

0x5170,	// (0x000054d1) volume_small_pane_srt_ParamLimits

0x5170,	// (0x000054d1) volume_small_pane_srt

0x2463,	// (0x000027c4) volume_small_pane_srt_g1_ParamLimits

0x2463,	// (0x000027c4) volume_small_pane_srt_g1

0x2473,	// (0x000027d4) volume_small_pane_srt_g2_ParamLimits

0x2473,	// (0x000027d4) volume_small_pane_srt_g2

0x2484,	// (0x000027e5) volume_small_pane_srt_g3_ParamLimits

0x2484,	// (0x000027e5) volume_small_pane_srt_g3

0x2495,	// (0x000027f6) volume_small_pane_srt_g4_ParamLimits

0x2495,	// (0x000027f6) volume_small_pane_srt_g4

0x24a6,	// (0x00002807) volume_small_pane_srt_g5_ParamLimits

0x24a6,	// (0x00002807) volume_small_pane_srt_g5

0x24b7,	// (0x00002818) volume_small_pane_srt_g6_ParamLimits

0x24b7,	// (0x00002818) volume_small_pane_srt_g6

0x24c8,	// (0x00002829) volume_small_pane_srt_g7_ParamLimits

0x24c8,	// (0x00002829) volume_small_pane_srt_g7

0x24d9,	// (0x0000283a) volume_small_pane_srt_g8_ParamLimits

0x24d9,	// (0x0000283a) volume_small_pane_srt_g8

0x24ea,	// (0x0000284b) volume_small_pane_srt_g9_ParamLimits

0x24ea,	// (0x0000284b) volume_small_pane_srt_g9

0x24fb,	// (0x0000285c) volume_small_pane_srt_g10_ParamLimits

0x24fb,	// (0x0000285c) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0000fad1) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0000fad1) volume_small_pane_srt_g

0x063f,	// (0x000009a0) query_popup_data_pane_cp2

0x5156,	// (0x000054b7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5156,	// (0x000054b7) navi_navi_icon_text_pane_srt_t1

0x3e6b,	// (0x000041cc) navi_tabs_2_long_pane_srt

0x3e6b,	// (0x000041cc) navi_tabs_2_pane_srt

0x3e6b,	// (0x000041cc) navi_tabs_3_long_pane_srt

0x3e6b,	// (0x000041cc) navi_tabs_3_pane_srt

0x3e6b,	// (0x000041cc) navi_tabs_4_pane_srt

0x512e,	// (0x0000548f) tabs_2_active_pane_srt_ParamLimits

0x512e,	// (0x0000548f) tabs_2_active_pane_srt

0x513e,	// (0x0000549f) tabs_2_passive_pane_srt_ParamLimits

0x513e,	// (0x0000549f) tabs_2_passive_pane_srt

0x35ba,	// (0x0000391b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x35ba,	// (0x0000391b) bg_passive_tab_pane_cp1_srt

0x5102,	// (0x00005463) bg_passive_tab_pane_g1_cp1_srt

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp1_srt

0x510b,	// (0x0000546c) bg_passive_tab_pane_g3_cp1_srt

0x04d4,	// (0x00000835) bg_active_tab_pane_cp1_srt_ParamLimits

0x04d4,	// (0x00000835) bg_active_tab_pane_cp1_srt

0x5114,	// (0x00005475) tabs_2_active_pane_srt_g1

0xd334,	// (0x0000d695) tabs_2_active_pane_srt_t1_ParamLimits

0xd334,	// (0x0000d695) tabs_2_active_pane_srt_t1

0x5102,	// (0x00005463) bg_active_tab_pane_g1_cp1_srt

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp1_srt

0x510b,	// (0x0000546c) bg_active_tab_pane_g3_cp1_srt

0x50cf,	// (0x00005430) tabs_3_active_pane_srt_ParamLimits

0x50cf,	// (0x00005430) tabs_3_active_pane_srt

0x50e0,	// (0x00005441) tabs_3_passive_pane_cp_srt_ParamLimits

0x50e0,	// (0x00005441) tabs_3_passive_pane_cp_srt

0x50f1,	// (0x00005452) tabs_3_passive_pane_srt_ParamLimits

0x50f1,	// (0x00005452) tabs_3_passive_pane_srt

0x35ba,	// (0x0000391b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x35ba,	// (0x0000391b) bg_passive_tab_pane_cp2_srt

0x250c,	// (0x0000286d) bg_passive_tab_pane_g1_cp2_srt

0x1db2,	// (0x00002113) bg_passive_tab_pane_g2_cp2_srt

0x2515,	// (0x00002876) bg_passive_tab_pane_g3_cp2_srt

0x04d4,	// (0x00000835) bg_active_tab_pane_cp2_srt_ParamLimits

0x04d4,	// (0x00000835) bg_active_tab_pane_cp2_srt

0x50b5,	// (0x00005416) tabs_3_active_pane_srt_g1

0xd31e,	// (0x0000d67f) tabs_3_active_pane_srt_t1_ParamLimits

0xd31e,	// (0x0000d67f) tabs_3_active_pane_srt_t1

0x250c,	// (0x0000286d) bg_active_tab_pane_g1_cp2_srt

0x1db2,	// (0x00002113) bg_active_tab_pane_g2_cp2_srt

0x2515,	// (0x00002876) bg_active_tab_pane_g3_cp2_srt

0x506d,	// (0x000053ce) tabs_4_active_pane_srt_ParamLimits

0x506d,	// (0x000053ce) tabs_4_active_pane_srt

0x507f,	// (0x000053e0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x507f,	// (0x000053e0) tabs_4_passive_pane_cp2_srt

0x27c3,	// (0x00002b24) aid_size_cell_toolbar

0x4c2e,	// (0x00004f8f) main_idle_act_pane_ParamLimits

0x2a0a,	// (0x00002d6b) popup_large_graphic_colour_window_ParamLimits

0xc749,	// (0x0000caaa) popup_toolbar_window_ParamLimits

0xc749,	// (0x0000caaa) popup_toolbar_window

0x4e5b,	// (0x000051bc) list_single_graphic_2heading_pane_ParamLimits

0x4e5b,	// (0x000051bc) list_single_graphic_2heading_pane

0x171d,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane

0x172f,	// (0x00001a90) aid_size_cell_apps_grid_prt_pane

0x283d,	// (0x00002b9e) bg_wml_button_pane_cp1_ParamLimits

0x283d,	// (0x00002b9e) bg_wml_button_pane_cp1

0xcc95,	// (0x0000cff6) form_midp_field_text_pane_t1_ParamLimits

0x35ba,	// (0x0000391b) input_focus_pane_cp050_ParamLimits

0x386e,	// (0x00003bcf) list_midp_form_text_pane_ParamLimits

0x3820,	// (0x00003b81) input_focus_pane_cp051_ParamLimits

0x3834,	// (0x00003b95) list_midp_choice_pane_ParamLimits

0xcc4c,	// (0x0000cfad) list_single_2graphic_pane_cp3_ParamLimits

0xcc4c,	// (0x0000cfad) list_single_2graphic_pane_cp3

0x6047,	// (0x000063a8) list_single_midp_graphic_pane_ParamLimits

0x6047,	// (0x000063a8) list_single_midp_graphic_pane

0x32bf,	// (0x00003620) list_single_graphic_2heading_pane_g1_ParamLimits

0x32bf,	// (0x00003620) list_single_graphic_2heading_pane_g1

0x221e,	// (0x0000257f) list_single_graphic_2heading_pane_g4_ParamLimits

0x221e,	// (0x0000257f) list_single_graphic_2heading_pane_g4

0x32cb,	// (0x0000362c) list_single_graphic_2heading_pane_g5_ParamLimits

0x32cb,	// (0x0000362c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0000fb24) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0000fb24) list_single_graphic_2heading_pane_g

0x32d7,	// (0x00003638) list_single_graphic_2heading_pane_t1_ParamLimits

0x32d7,	// (0x00003638) list_single_graphic_2heading_pane_t1

0x32eb,	// (0x0000364c) list_single_graphic_2heading_pane_t2_ParamLimits

0x32eb,	// (0x0000364c) list_single_graphic_2heading_pane_t2

0x3307,	// (0x00003668) list_single_graphic_2heading_pane_t3_ParamLimits

0x3307,	// (0x00003668) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0000fb2b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0000fb2b) list_single_graphic_2heading_pane_t

0x331f,	// (0x00003680) bg_popup_sub_pane_cp2

0x3349,	// (0x000036aa) grid_toobar_pane

0x3385,	// (0x000036e6) cell_toolbar_pane_ParamLimits

0x3385,	// (0x000036e6) cell_toolbar_pane

0x33cb,	// (0x0000372c) cell_toolbar_pane_g1_ParamLimits

0x33cb,	// (0x0000372c) cell_toolbar_pane_g1

0x33df,	// (0x00003740) cell_toolbar_pane_g2_ParamLimits

0x33df,	// (0x00003740) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0000fb32) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0000fb32) cell_toolbar_pane_g

0x3401,	// (0x00003762) grid_highlight_pane_cp2_ParamLimits

0x3401,	// (0x00003762) grid_highlight_pane_cp2

0x341b,	// (0x0000377c) toolbar_button_pane

0x3427,	// (0x00003788) toolbar_button_pane_g1

0x342f,	// (0x00003790) toolbar_button_pane_g2

0x3437,	// (0x00003798) toolbar_button_pane_g3

0x343f,	// (0x000037a0) toolbar_button_pane_g4

0x3447,	// (0x000037a8) toolbar_button_pane_g5

0x344f,	// (0x000037b0) toolbar_button_pane_g6

0x3457,	// (0x000037b8) toolbar_button_pane_g7

0x345f,	// (0x000037c0) toolbar_button_pane_g8

0x3467,	// (0x000037c8) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0000fb37) toolbar_button_pane_g

0x3477,	// (0x000037d8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3477,	// (0x000037d8) list_single_2graphic_pane_g1_cp3

0xcbae,	// (0x0000cf0f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcbae,	// (0x0000cf0f) list_single_2graphic_pane_g2_cp3

0x20d7,	// (0x00002438) list_single_2graphic_pane_g3_cp3

0x3494,	// (0x000037f5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3494,	// (0x000037f5) list_single_2graphic_pane_g4_cp3

0x34a0,	// (0x00003801) list_single_2graphic_pane_t1_cp3_ParamLimits

0x34a0,	// (0x00003801) list_single_2graphic_pane_t1_cp3

0x20cb,	// (0x0000242c) list_single_midp_graphic_pane_g2_ParamLimits

0x20cb,	// (0x0000242c) list_single_midp_graphic_pane_g2

0x27cb,	// (0x00002b2c) aid_zoom_text_primary

0x27d3,	// (0x00002b34) aid_zoom_text_secondary

0x25c9,	// (0x0000292a) status_small_pane_g7_ParamLimits

0x25c9,	// (0x0000292a) status_small_pane_g7

0x25ec,	// (0x0000294d) status_small_pane_t1_ParamLimits

0xb1e2,	// (0x0000b543) title_pane_g2

0x0003,

0xf56a,	// (0x0000f8cb) title_pane_g

0xb47a,	// (0x0000b7db) aid_size_cell_colour_1_pane_ParamLimits

0xb47a,	// (0x0000b7db) aid_size_cell_colour_1_pane

0xb48e,	// (0x0000b7ef) aid_size_cell_colour_2_pane_ParamLimits

0xb48e,	// (0x0000b7ef) aid_size_cell_colour_2_pane

0xb4a2,	// (0x0000b803) aid_size_cell_colour_3_pane_ParamLimits

0xb4a2,	// (0x0000b803) aid_size_cell_colour_3_pane

0xb4b6,	// (0x0000b817) aid_size_cell_colour_4_pane_ParamLimits

0xb4b6,	// (0x0000b817) aid_size_cell_colour_4_pane

0x1596,	// (0x000018f7) title_pane_stacon_g1_ParamLimits

0x1596,	// (0x000018f7) title_pane_stacon_g1

0x3c51,	// (0x00003fb2) popup_note_wait_window_g3_ParamLimits

0x3c51,	// (0x00003fb2) popup_note_wait_window_g3

0x3cc8,	// (0x00004029) popup_note_wait_window_t5_ParamLimits

0x3cc8,	// (0x00004029) popup_note_wait_window_t5

0xf50c,	// (0x0000f86d) main_feb_china_hwr_fs_writing_pane

0xc0e4,	// (0x0000c445) popup_feb_china_hwr_fs_window_ParamLimits

0xc0e4,	// (0x0000c445) popup_feb_china_hwr_fs_window

0xcbbf,	// (0x0000cf20) aid_size_cell_hwr_fs_ParamLimits

0xcbbf,	// (0x0000cf20) aid_size_cell_hwr_fs

0x35ba,	// (0x0000391b) bg_popup_sub_pane_cp3_ParamLimits

0x35ba,	// (0x0000391b) bg_popup_sub_pane_cp3

0xcbd4,	// (0x0000cf35) grid_hwr_fs_pane_ParamLimits

0xcbd4,	// (0x0000cf35) grid_hwr_fs_pane

0x35de,	// (0x0000393f) linegrid_hwr_fs_pane_ParamLimits

0x35de,	// (0x0000393f) linegrid_hwr_fs_pane

0xcbec,	// (0x0000cf4d) cell_hwr_fs_pane_ParamLimits

0xcbec,	// (0x0000cf4d) cell_hwr_fs_pane

0x3612,	// (0x00003973) linegrid_hwr_fs_pane_g1_ParamLimits

0x3612,	// (0x00003973) linegrid_hwr_fs_pane_g1

0xcc12,	// (0x0000cf73) linegrid_hwr_fs_pane_g2_ParamLimits

0xcc12,	// (0x0000cf73) linegrid_hwr_fs_pane_g2

0x3630,	// (0x00003991) linegrid_hwr_fs_pane_g3_ParamLimits

0x3630,	// (0x00003991) linegrid_hwr_fs_pane_g3

0x363c,	// (0x0000399d) linegrid_hwr_fs_pane_g4_ParamLimits

0x363c,	// (0x0000399d) linegrid_hwr_fs_pane_g4

0x365a,	// (0x000039bb) linegrid_hwr_fs_pane_g5_ParamLimits

0x365a,	// (0x000039bb) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0000fb5d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0000fb5d) linegrid_hwr_fs_pane_g

0x3670,	// (0x000039d1) cell_hwr_fs_pane_g1_ParamLimits

0x3670,	// (0x000039d1) cell_hwr_fs_pane_g1

0x31f6,	// (0x00003557) cell_hwr_fs_pane_g2_ParamLimits

0x31f6,	// (0x00003557) cell_hwr_fs_pane_g2

0xcc24,	// (0x0000cf85) cell_hwr_fs_pane_g3_ParamLimits

0xcc24,	// (0x0000cf85) cell_hwr_fs_pane_g3

0xcc31,	// (0x0000cf92) cell_hwr_fs_pane_g4_ParamLimits

0xcc31,	// (0x0000cf92) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0000fb68) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0000fb68) cell_hwr_fs_pane_g

0xcc3e,	// (0x0000cf9f) cell_hwr_fs_pane_t1

0xf50c,	// (0x0000f86d) grid_highlight_pane_cp6

0xf50c,	// (0x0000f86d) main_idle_act2_pane

0x1345,	// (0x000016a6) aid_inside_area_popup_secondary

0xce8c,	// (0x0000d1ed) aid_inside_area_window_primary_ParamLimits

0xce8c,	// (0x0000d1ed) aid_inside_area_window_primary

0x528c,	// (0x000055ed) ai2_news_ticker_pane

0x5294,	// (0x000055f5) aid_size_cell_ai1_link_ParamLimits

0x5294,	// (0x000055f5) aid_size_cell_ai1_link

0x52ae,	// (0x0000560f) popup_ai2_data_window_ParamLimits

0x52ae,	// (0x0000560f) popup_ai2_data_window

0x52cc,	// (0x0000562d) popup_ai2_link_window_ParamLimits

0x52cc,	// (0x0000562d) popup_ai2_link_window

0x35ba,	// (0x0000391b) bg_popup_sub_pane_cp4_ParamLimits

0x35ba,	// (0x0000391b) bg_popup_sub_pane_cp4

0x52e2,	// (0x00005643) grid_ai2_link_pane_ParamLimits

0x52e2,	// (0x00005643) grid_ai2_link_pane

0x52f9,	// (0x0000565a) popup_ai2_link_window_g1_ParamLimits

0x52f9,	// (0x0000565a) popup_ai2_link_window_g1

0x5305,	// (0x00005666) popup_ai2_link_window_g2_ParamLimits

0x5305,	// (0x00005666) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0000fd34) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0000fd34) popup_ai2_link_window_g

0x5316,	// (0x00005677) ai2_mp_button_pane

0x531e,	// (0x0000567f) ai2_mp_volume_pane

0x3820,	// (0x00003b81) bg_popup_sub_pane_cp5_ParamLimits

0x3820,	// (0x00003b81) bg_popup_sub_pane_cp5

0x5326,	// (0x00005687) heading_ai2_gene_pane_ParamLimits

0x5326,	// (0x00005687) heading_ai2_gene_pane

0x5332,	// (0x00005693) list_ai2_gene_pane_ParamLimits

0x5332,	// (0x00005693) list_ai2_gene_pane

0x537a,	// (0x000056db) cell_ai2_link_pane_ParamLimits

0x537a,	// (0x000056db) cell_ai2_link_pane

0x5390,	// (0x000056f1) cell_ai2_link_pane_g1

0xf50c,	// (0x0000f86d) grid_highlight_pane_cp7

0x5463,	// (0x000057c4) ai2_mp_volume_pane_g1

0x546b,	// (0x000057cc) ai2_mp_volume_pane_g2

0x53d8,	// (0x00005739) list_ai2_gene_pane_t1

0x5473,	// (0x000057d4) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0000fd4d) ai2_mp_volume_pane_g

0x547b,	// (0x000057dc) volume_small_pane_cp3

0x5484,	// (0x000057e5) aid_size_cell_ai2_button

0x548c,	// (0x000057ed) grid_ai2_button_pane

0x5495,	// (0x000057f6) cell_ai2_button_pane_ParamLimits

0x5495,	// (0x000057f6) cell_ai2_button_pane

0xf393,	// (0x0000f6f4) cell_ai2_button_pane_g1

0xf50c,	// (0x0000f86d) grid_highlight_pane_cp8

0x5423,	// (0x00005784) ai2_gene_pane_t1_ParamLimits

0x5423,	// (0x00005784) ai2_gene_pane_t1

0xc054,	// (0x0000c3b5) aid_height_parent_landscape

0xd07f,	// (0x0000d3e0) aid_height_set_list

0x4c2e,	// (0x00004f8f) aid_size_parent

0x4ff5,	// (0x00005356) aid_size_cell_graphic_pane_ParamLimits

0x5342,	// (0x000056a3) popup_ai2_data_window_g1_ParamLimits

0x5342,	// (0x000056a3) popup_ai2_data_window_g1

0x534e,	// (0x000056af) ai2_news_ticker_pane_g1

0x5356,	// (0x000056b7) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0000fd39) ai2_news_ticker_pane_g

0x535e,	// (0x000056bf) ai2_news_ticker_pane_t1

0x536c,	// (0x000056cd) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0000fd3e) ai2_news_ticker_pane_t

0x5399,	// (0x000056fa) heading_ai2_gene_pane_g1

0x53a1,	// (0x00005702) heading_ai2_gene_pane_t1_ParamLimits

0x53a1,	// (0x00005702) heading_ai2_gene_pane_t1

0x53b6,	// (0x00005717) list_highlight_pane_cp6

0x53be,	// (0x0000571f) ai2_gene_pane_ParamLimits

0x53be,	// (0x0000571f) ai2_gene_pane

0x53e6,	// (0x00005747) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0000fd43) list_ai2_gene_pane_t

0x53f4,	// (0x00005755) list_highlight_pane_cp8_ParamLimits

0x53f4,	// (0x00005755) list_highlight_pane_cp8

0x5405,	// (0x00005766) ai2_gene_pane_g1_ParamLimits

0x5405,	// (0x00005766) ai2_gene_pane_g1

0x5417,	// (0x00005778) ai2_gene_pane_g2_ParamLimits

0x5417,	// (0x00005778) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0000fd48) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0000fd48) ai2_gene_pane_g

0x0a75,	// (0x00000dd6) scroll_pane_cp12

0xc013,	// (0x0000c374) control_pane_t3_ParamLimits

0xc013,	// (0x0000c374) control_pane_t3

0x25dd,	// (0x0000293e) status_small_pane_g8_ParamLimits

0x25dd,	// (0x0000293e) status_small_pane_g8

0xc186,	// (0x0000c4e7) popup_find_window_ParamLimits

0xc433,	// (0x0000c794) popup_note_image_window_ParamLimits

0x32bf,	// (0x00003620) list_double2_graphic_pane_vc_g1_ParamLimits

0x32bf,	// (0x00003620) list_double2_graphic_pane_vc_g1

0x221e,	// (0x0000257f) list_double2_graphic_pane_vc_g2_ParamLimits

0x221e,	// (0x0000257f) list_double2_graphic_pane_vc_g2

0x32cb,	// (0x0000362c) list_double2_graphic_pane_vc_g3_ParamLimits

0x32cb,	// (0x0000362c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0000fb24) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0000fb24) list_double2_graphic_pane_vc_g

0x33b5,	// (0x00003716) list_double2_graphic_pane_vc_t1_ParamLimits

0x33b5,	// (0x00003716) list_double2_graphic_pane_vc_t1

0x221e,	// (0x0000257f) list_single_heading_pane_vc_g1_ParamLimits

0x221e,	// (0x0000257f) list_single_heading_pane_vc_g1

0x32cb,	// (0x0000362c) list_single_heading_pane_vc_g2_ParamLimits

0x32cb,	// (0x0000362c) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000f945) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000f945) list_single_heading_pane_vc_g

0x34bb,	// (0x0000381c) list_single_heading_pane_vc_t1_ParamLimits

0x34bb,	// (0x0000381c) list_single_heading_pane_vc_t1

0x34d1,	// (0x00003832) list_single_heading_pane_vc_t2_ParamLimits

0x34d1,	// (0x00003832) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0000fb4c) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0000fb4c) list_single_heading_pane_vc_t

0x34fb,	// (0x0000385c) list_setting_number_pane_vc_g1_ParamLimits

0x34fb,	// (0x0000385c) list_setting_number_pane_vc_g1

0x3507,	// (0x00003868) list_setting_number_pane_vc_g2_ParamLimits

0x3507,	// (0x00003868) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0000fb51) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0000fb51) list_setting_number_pane_vc_g

0x3513,	// (0x00003874) list_setting_number_pane_vc_t1_ParamLimits

0x3513,	// (0x00003874) list_setting_number_pane_vc_t1

0x3527,	// (0x00003888) list_setting_number_pane_vc_t2_ParamLimits

0x3527,	// (0x00003888) list_setting_number_pane_vc_t2

0x3543,	// (0x000038a4) list_setting_number_pane_vc_t3_ParamLimits

0x3543,	// (0x000038a4) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0000fb56) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0000fb56) list_setting_number_pane_vc_t

0x356b,	// (0x000038cc) set_value_pane_vc_ParamLimits

0x356b,	// (0x000038cc) set_value_pane_vc

0x4e5b,	// (0x000051bc) list_double2_graphic_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double2_graphic_pane_vc

0x4e5b,	// (0x000051bc) list_double2_large_graphic_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double2_large_graphic_pane_vc

0x4e5b,	// (0x000051bc) list_double2_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double2_pane_vc

0x4e5b,	// (0x000051bc) list_double_graphic_heading_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double_graphic_heading_pane_vc

0x4e5b,	// (0x000051bc) list_double_graphic_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double_graphic_pane_vc

0x4e5b,	// (0x000051bc) list_double_heading_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double_heading_pane_vc

0x4e5b,	// (0x000051bc) list_double_large_graphic_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double_large_graphic_pane_vc

0x4e5b,	// (0x000051bc) list_double_number_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double_number_pane_vc

0x4e5b,	// (0x000051bc) list_double_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double_pane_vc

0x4e5b,	// (0x000051bc) list_double_time_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_double_time_pane_vc

0x4e5b,	// (0x000051bc) list_setting_number_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_setting_number_pane_vc

0x4e5b,	// (0x000051bc) list_setting_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_setting_pane_vc

0x4e5b,	// (0x000051bc) list_single_graphic_heading_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_single_graphic_heading_pane_vc

0x4e5b,	// (0x000051bc) list_single_heading_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_single_heading_pane_vc

0x4e5b,	// (0x000051bc) list_single_number_heading_pane_vc_ParamLimits

0x4e5b,	// (0x000051bc) list_single_number_heading_pane_vc

0x32bf,	// (0x00003620) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x32bf,	// (0x00003620) list_double_graphic_heading_pane_vc_g1

0x54c8,	// (0x00005829) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x54c8,	// (0x00005829) list_double_graphic_heading_pane_vc_g2

0x54d4,	// (0x00005835) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x54d4,	// (0x00005835) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0000fd54) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0000fd54) list_double_graphic_heading_pane_vc_g

0x54e0,	// (0x00005841) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x54e0,	// (0x00005841) list_double_graphic_heading_pane_vc_t1

0x34bb,	// (0x0000381c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x34bb,	// (0x0000381c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0000fd5b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0000fd5b) list_double_graphic_heading_pane_vc_t

0x34fb,	// (0x0000385c) list_setting_pane_vc_g1_ParamLimits

0x34fb,	// (0x0000385c) list_setting_pane_vc_g1

0x3507,	// (0x00003868) list_setting_pane_vc_g2_ParamLimits

0x3507,	// (0x00003868) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0000fb51) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0000fb51) list_setting_pane_vc_g

0x56fd,	// (0x00005a5e) list_setting_pane_vc_t1_ParamLimits

0x56fd,	// (0x00005a5e) list_setting_pane_vc_t1

0x5711,	// (0x00005a72) list_setting_pane_vc_t2_ParamLimits

0x5711,	// (0x00005a72) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0000fd9e) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0000fd9e) list_setting_pane_vc_t

0x356b,	// (0x000038cc) set_value_pane_cp_vc_ParamLimits

0x356b,	// (0x000038cc) set_value_pane_cp_vc

0x221e,	// (0x0000257f) list_single_number_heading_pane_vc_g1_ParamLimits

0x221e,	// (0x0000257f) list_single_number_heading_pane_vc_g1

0x32cb,	// (0x0000362c) list_single_number_heading_pane_vc_g2_ParamLimits

0x32cb,	// (0x0000362c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000f945) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000f945) list_single_number_heading_pane_vc_g

0x34bb,	// (0x0000381c) list_single_number_heading_pane_vc_t1_ParamLimits

0x34bb,	// (0x0000381c) list_single_number_heading_pane_vc_t1

0x5733,	// (0x00005a94) list_single_number_heading_pane_vc_t2_ParamLimits

0x5733,	// (0x00005a94) list_single_number_heading_pane_vc_t2

0x5747,	// (0x00005aa8) list_single_number_heading_pane_vc_t3_ParamLimits

0x5747,	// (0x00005aa8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0000fda3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0000fda3) list_single_number_heading_pane_vc_t

0x32bf,	// (0x00003620) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x32bf,	// (0x00003620) list_single_graphic_heading_pane_vc_g1

0x221e,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x221e,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4

0x32cb,	// (0x0000362c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x32cb,	// (0x0000362c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0000fb24) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0000fb24) list_single_graphic_heading_pane_vc_g

0x34bb,	// (0x0000381c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x34bb,	// (0x0000381c) list_single_graphic_heading_pane_vc_t1

0x5759,	// (0x00005aba) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5759,	// (0x00005aba) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0000fdaa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0000fdaa) list_single_graphic_heading_pane_vc_t

0x221e,	// (0x0000257f) list_double2_pane_vc_g1_ParamLimits

0x221e,	// (0x0000257f) list_double2_pane_vc_g1

0x32cb,	// (0x0000362c) list_double2_pane_vc_g2_ParamLimits

0x32cb,	// (0x0000362c) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000f945) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000f945) list_double2_pane_vc_g

0x576d,	// (0x00005ace) list_double2_pane_vc_t1_ParamLimits

0x576d,	// (0x00005ace) list_double2_pane_vc_t1

0x5783,	// (0x00005ae4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5783,	// (0x00005ae4) list_double2_large_graphic_pane_vc_g1

0x221e,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x221e,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2

0x32cb,	// (0x0000362c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x32cb,	// (0x0000362c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0000f962) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0000f962) list_double2_large_graphic_pane_vc_g

0x578f,	// (0x00005af0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x578f,	// (0x00005af0) list_double2_large_graphic_pane_vc_t1

0x57a5,	// (0x00005b06) list_double_time_pane_vc_g1_ParamLimits

0x57a5,	// (0x00005b06) list_double_time_pane_vc_g1

0x57b1,	// (0x00005b12) list_double_time_pane_vc_g2_ParamLimits

0x57b1,	// (0x00005b12) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0000fdaf) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0000fdaf) list_double_time_pane_vc_g

0x57bd,	// (0x00005b1e) list_double_time_pane_vc_t1_ParamLimits

0x57bd,	// (0x00005b1e) list_double_time_pane_vc_t1

0x57d6,	// (0x00005b37) list_double_time_pane_vc_t2_ParamLimits

0x57d6,	// (0x00005b37) list_double_time_pane_vc_t2

0x57f6,	// (0x00005b57) list_double_time_pane_vc_t3_ParamLimits

0x57f6,	// (0x00005b57) list_double_time_pane_vc_t3

0x580e,	// (0x00005b6f) list_double_time_pane_vc_t4_ParamLimits

0x580e,	// (0x00005b6f) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0000fdb4) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0000fdb4) list_double_time_pane_vc_t

0x221e,	// (0x0000257f) list_double_pane_vc_g1_ParamLimits

0x221e,	// (0x0000257f) list_double_pane_vc_g1

0x32cb,	// (0x0000362c) list_double_pane_vc_g2_ParamLimits

0x32cb,	// (0x0000362c) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000f945) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000f945) list_double_pane_vc_g

0x5822,	// (0x00005b83) list_double_pane_vc_t1_ParamLimits

0x5822,	// (0x00005b83) list_double_pane_vc_t1

0x5834,	// (0x00005b95) list_double_pane_vc_t2_ParamLimits

0x5834,	// (0x00005b95) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0000fdbd) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0000fdbd) list_double_pane_vc_t

0x221e,	// (0x0000257f) list_double_number_pane_vc_g1_ParamLimits

0x221e,	// (0x0000257f) list_double_number_pane_vc_g1

0x32cb,	// (0x0000362c) list_double_number_pane_vc_g2_ParamLimits

0x32cb,	// (0x0000362c) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000f945) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000f945) list_double_number_pane_vc_g

0x584c,	// (0x00005bad) list_double_number_pane_vc_t1_ParamLimits

0x584c,	// (0x00005bad) list_double_number_pane_vc_t1

0x5860,	// (0x00005bc1) list_double_number_pane_vc_t2_ParamLimits

0x5860,	// (0x00005bc1) list_double_number_pane_vc_t2

0x5834,	// (0x00005b95) list_double_number_pane_vc_t3_ParamLimits

0x5834,	// (0x00005b95) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0000fdc2) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0000fdc2) list_double_number_pane_vc_t

0x5872,	// (0x00005bd3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5872,	// (0x00005bd3) list_double_large_graphic_pane_vc_g1

0x587e,	// (0x00005bdf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x587e,	// (0x00005bdf) list_double_large_graphic_pane_vc_g2

0x32cb,	// (0x0000362c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x32cb,	// (0x0000362c) list_double_large_graphic_pane_vc_g3

0x588d,	// (0x00005bee) list_double_large_graphic_pane_vc_g4_ParamLimits

0x588d,	// (0x00005bee) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0000fdc9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0000fdc9) list_double_large_graphic_pane_vc_g

0x5899,	// (0x00005bfa) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5899,	// (0x00005bfa) list_double_large_graphic_pane_vc_t1

0x58ab,	// (0x00005c0c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x58ab,	// (0x00005c0c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0000fdd2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0000fdd2) list_double_large_graphic_pane_vc_t

0x54c8,	// (0x00005829) list_double_heading_pane_vc_g1_ParamLimits

0x54c8,	// (0x00005829) list_double_heading_pane_vc_g1

0x54d4,	// (0x00005835) list_double_heading_pane_vc_g2_ParamLimits

0x54d4,	// (0x00005835) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0000fdd7) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0000fdd7) list_double_heading_pane_vc_g

0x58c4,	// (0x00005c25) list_double_heading_pane_vc_t1_ParamLimits

0x58c4,	// (0x00005c25) list_double_heading_pane_vc_t1

0x34bb,	// (0x0000381c) list_double_heading_pane_vc_t2_ParamLimits

0x34bb,	// (0x0000381c) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0000fddc) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0000fddc) list_double_heading_pane_vc_t

0x32bf,	// (0x00003620) list_double_graphic_pane_vc_g1_ParamLimits

0x32bf,	// (0x00003620) list_double_graphic_pane_vc_g1

0x58d8,	// (0x00005c39) list_double_graphic_pane_vc_g2_ParamLimits

0x58d8,	// (0x00005c39) list_double_graphic_pane_vc_g2

0x58e7,	// (0x00005c48) list_double_graphic_pane_vc_g3_ParamLimits

0x58e7,	// (0x00005c48) list_double_graphic_pane_vc_g3

0x0002,

0xfa80,	// (0x0000fde1) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0000fde1) list_double_graphic_pane_vc_g

0x58f3,	// (0x00005c54) list_double_graphic_pane_vc_t1_ParamLimits

0x58f3,	// (0x00005c54) list_double_graphic_pane_vc_t1

0x5834,	// (0x00005b95) list_double_graphic_pane_vc_t2_ParamLimits

0x5834,	// (0x00005b95) list_double_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0000fde8) list_double_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0000fde8) list_double_graphic_pane_vc_t

0xf3b5,	// (0x0000f716) aid_size_cell_fastswap

0xb02c,	// (0x0000b38d) aid_size_cell_touch_ParamLimits

0xb02c,	// (0x0000b38d) aid_size_cell_touch

0xf53c,	// (0x0000f89d) popup_fast_swap_wide_window_ParamLimits

0xf53c,	// (0x0000f89d) popup_fast_swap_wide_window

0xb17b,	// (0x0000b4dc) touch_pane_ParamLimits

0xb17b,	// (0x0000b4dc) touch_pane

0x0f84,	// (0x000012e5) button_value_adjust_pane_cp2

0x0f8c,	// (0x000012ed) button_value_adjust_pane_cp4

0x0fb2,	// (0x00001313) form_field_data_pane_cp2

0xb9a6,	// (0x0000bd07) form_field_data_wide_pane_cp2

0x1802,	// (0x00001b63) bg_scroll_pane_ParamLimits

0x1821,	// (0x00001b82) scroll_handle_pane_ParamLimits

0x1835,	// (0x00001b96) scroll_sc2_down_pane_ParamLimits

0x1835,	// (0x00001b96) scroll_sc2_down_pane

0x185c,	// (0x00001bbd) scroll_sc2_up_pane_ParamLimits

0x185c,	// (0x00001bbd) scroll_sc2_up_pane

0xd475,	// (0x0000d7d6) grid_wheel_folder_pane_g1_ParamLimits

0xd475,	// (0x0000d7d6) grid_wheel_folder_pane_g1

0x1efc,	// (0x0000225d) clock_nsta_pane_cp2_ParamLimits

0x1efc,	// (0x0000225d) clock_nsta_pane_cp2

0xbe2a,	// (0x0000c18b) listscroll_midp_pane_ParamLimits

0xbe3b,	// (0x0000c19c) midp_canvas_pane

0x27b1,	// (0x00002b12) nsta_clock_indic_pane

0x280f,	// (0x00002b70) listscroll_form_pane_vc

0x282b,	// (0x00002b8c) listscroll_set_pane_vc_ParamLimits

0x282b,	// (0x00002b8c) listscroll_set_pane_vc

0xc8a8,	// (0x0000cc09) clock_nsta_pane

0xc8d2,	// (0x0000cc33) indicator_nsta_pane

0x331f,	// (0x00003680) bg_popup_sub_pane_cp2_ParamLimits

0x3333,	// (0x00003694) find_pane_cp2_ParamLimits

0x3333,	// (0x00003694) find_pane_cp2

0x3349,	// (0x000036aa) grid_toobar_pane_ParamLimits

0x3579,	// (0x000038da) list_form_gen_pane_vc_ParamLimits

0x3579,	// (0x000038da) list_form_gen_pane_vc

0x358f,	// (0x000038f0) scroll_pane_cp8_vc_ParamLimits

0x358f,	// (0x000038f0) scroll_pane_cp8_vc

0x36ae,	// (0x00003a0f) data_form_wide_pane_vc_ParamLimits

0x36ae,	// (0x00003a0f) data_form_wide_pane_vc

0x36ba,	// (0x00003a1b) form_field_data_wide_pane_vc_g1

0x36c2,	// (0x00003a23) form_field_data_wide_pane_vc_t1_ParamLimits

0x36c2,	// (0x00003a23) form_field_data_wide_pane_vc_t1

0x107a,	// (0x000013db) input_focus_pane_cp6_vc_ParamLimits

0x107a,	// (0x000013db) input_focus_pane_cp6_vc

0xccda,	// (0x0000d03b) list_midp_pane_ParamLimits

0x5061,	// (0x000053c2) scroll_pane_cp16_ParamLimits

0x5061,	// (0x000053c2) scroll_pane_cp16

0x3a25,	// (0x00003d86) button_value_adjust_pane_ParamLimits

0x3a25,	// (0x00003d86) button_value_adjust_pane

0xd090,	// (0x0000d3f1) button_value_adjust_pane_cp6_ParamLimits

0xd090,	// (0x0000d3f1) button_value_adjust_pane_cp6

0xd1d2,	// (0x0000d533) settings_code_pane_cp_ParamLimits

0xd1d2,	// (0x0000d533) settings_code_pane_cp

0xf393,	// (0x0000f6f4) cell_touch_pane_g1

0xf393,	// (0x0000f6f4) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0000fa7b) cell_touch_pane_g

0xd34a,	// (0x0000d6ab) cell_touch_pane_cp_ParamLimits

0xd34a,	// (0x0000d6ab) cell_touch_pane_cp

0xd366,	// (0x0000d6c7) cell_touch_pane_ParamLimits

0xd366,	// (0x0000d6c7) cell_touch_pane

0xf393,	// (0x0000f6f4) scroll_sc2_down_pane_g1

0xf393,	// (0x0000f6f4) scroll_sc2_up_pane_g1

0xf50c,	// (0x0000f86d) bg_set_opt_pane_cp4_vc

0x54f4,	// (0x00005855) list_set_graphic_pane_vc_g1_ParamLimits

0x54f4,	// (0x00005855) list_set_graphic_pane_vc_g1

0x5500,	// (0x00005861) list_set_graphic_pane_vc_g2_ParamLimits

0x5500,	// (0x00005861) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0000fd60) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0000fd60) list_set_graphic_pane_vc_g

0x550c,	// (0x0000586d) text_primary_small_cp13_vc_ParamLimits

0x550c,	// (0x0000586d) text_primary_small_cp13_vc

0x5524,	// (0x00005885) list_set_graphic_pane_vc_ParamLimits

0x5524,	// (0x00005885) list_set_graphic_pane_vc

0xf50c,	// (0x0000f86d) input_focus_pane_cp2_vc

0xf393,	// (0x0000f6f4) setting_code_pane_vc_g1

0x5538,	// (0x00005899) setting_code_pane_vc_t1

0x5546,	// (0x000058a7) set_text_pane_vc_t1_ParamLimits

0x5546,	// (0x000058a7) set_text_pane_vc_t1

0xf50c,	// (0x0000f86d) input_focus_pane_cp1_vc

0x5564,	// (0x000058c5) list_set_text_pane_vc

0xf393,	// (0x0000f6f4) setting_text_pane_vc_g1

0xf50c,	// (0x0000f86d) bg_set_opt_pane_cp2_vc

0x556e,	// (0x000058cf) setting_slider_graphic_pane_vc_g1

0x5576,	// (0x000058d7) setting_slider_graphic_pane_vc_t1

0x5584,	// (0x000058e5) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0000fd65) setting_slider_graphic_pane_vc_t

0x5592,	// (0x000058f3) slider_set_pane_cp_vc

0x559a,	// (0x000058fb) slider_set_pane_vc_g1

0x55a3,	// (0x00005904) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0000fd6a) slider_set_pane_vc_g

0x11b6,	// (0x00001517) set_opt_bg_pane_g1_copy1

0x11be,	// (0x0000151f) set_opt_bg_pane_g2_copy1

0x55cf,	// (0x00005930) set_opt_bg_pane_g3_copy1

0x11ce,	// (0x0000152f) set_opt_bg_pane_g4_copy1

0x11d6,	// (0x00001537) set_opt_bg_pane_g5_copy1

0x11de,	// (0x0000153f) set_opt_bg_pane_g6_copy1

0x55d9,	// (0x0000593a) set_opt_bg_pane_g7_copy1

0x55e3,	// (0x00005944) set_opt_bg_pane_g8_copy1

0x55ed,	// (0x0000594e) set_opt_bg_pane_g9_copy1

0xf50c,	// (0x0000f86d) bg_set_opt_pane_cp_vc

0x55f7,	// (0x00005958) setting_slider_pane_vc_t1

0x5576,	// (0x000058d7) setting_slider_pane_vc_t2

0x5584,	// (0x000058e5) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0000fd79) setting_slider_pane_vc_t

0x5592,	// (0x000058f3) slider_set_pane_vc

0x426a,	// (0x000045cb) volume_set_pane_vc_g1

0x4273,	// (0x000045d4) volume_set_pane_vc_g2

0x427c,	// (0x000045dd) volume_set_pane_vc_g3

0x4285,	// (0x000045e6) volume_set_pane_vc_g4

0x428e,	// (0x000045ef) volume_set_pane_vc_g5

0x4297,	// (0x000045f8) volume_set_pane_vc_g6

0x42a0,	// (0x00004601) volume_set_pane_vc_g7

0x42a9,	// (0x0000460a) volume_set_pane_vc_g8

0x42b2,	// (0x00004613) volume_set_pane_vc_g9

0x42bb,	// (0x0000461c) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0000fd80) volume_set_pane_vc_g

0x5606,	// (0x00005967) volume_set_pane_vc

0x560e,	// (0x0000596f) button_value_adjust_pane_cp1_vc

0x5618,	// (0x00005979) list_highlight_pane_cp2_vc

0x5621,	// (0x00005982) list_set_pane_vc_ParamLimits

0x5621,	// (0x00005982) list_set_pane_vc

0x568b,	// (0x000059ec) main_pane_set_vc_t1_ParamLimits

0x568b,	// (0x000059ec) main_pane_set_vc_t1

0x56a0,	// (0x00005a01) main_pane_set_vc_t2_ParamLimits

0x56a0,	// (0x00005a01) main_pane_set_vc_t2

0x56b2,	// (0x00005a13) main_pane_set_vc_t3_ParamLimits

0x56b2,	// (0x00005a13) main_pane_set_vc_t3

0x56c6,	// (0x00005a27) main_pane_set_vc_t4_ParamLimits

0x56c6,	// (0x00005a27) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0000fd95) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0000fd95) main_pane_set_vc_t

0x56da,	// (0x00005a3b) setting_code_pane_vc_ParamLimits

0x56da,	// (0x00005a3b) setting_code_pane_vc

0x56eb,	// (0x00005a4c) setting_slider_graphic_pane_vc

0x56eb,	// (0x00005a4c) setting_slider_pane_vc

0x56eb,	// (0x00005a4c) setting_text_pane_vc

0x56eb,	// (0x00005a4c) setting_volume_pane_vc

0x56f5,	// (0x00005a56) scroll_pane_cp121_vc

0x0f72,	// (0x000012d3) set_content_pane_vc

0x5905,	// (0x00005c66) button_value_adjust_pane_g1

0x590e,	// (0x00005c6f) button_value_adjust_pane_g2

0x0001,

0xfa8c,	// (0x0000fded) button_value_adjust_pane_g

0x5917,	// (0x00005c78) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5917,	// (0x00005c78) form_field_slider_wide_pane_vc_t1

0x592b,	// (0x00005c8c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x592b,	// (0x00005c8c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa91,	// (0x0000fdf2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0000fdf2) form_field_slider_wide_pane_vc_t

0x04d4,	// (0x00000835) input_focus_pane_cp10_vc_ParamLimits

0x04d4,	// (0x00000835) input_focus_pane_cp10_vc

0x593d,	// (0x00005c9e) slider_cont_pane_cp1_vc_ParamLimits

0x593d,	// (0x00005c9e) slider_cont_pane_cp1_vc

0x559a,	// (0x000058fb) slider_form_pane_g1_cp2

0x55a3,	// (0x00005904) slider_form_pane_g2_cp2

0x5956,	// (0x00005cb7) form_field_slider_pane_vc_t3

0x5964,	// (0x00005cc5) form_field_slider_pane_vc_t4

0x5972,	// (0x00005cd3) slider_form_pane_vc_ParamLimits

0x5972,	// (0x00005cd3) slider_form_pane_vc

0x597f,	// (0x00005ce0) form_field_slider_pane_vc_t1_ParamLimits

0x597f,	// (0x00005ce0) form_field_slider_pane_vc_t1

0x592b,	// (0x00005c8c) form_field_slider_pane_vc_t2_ParamLimits

0x592b,	// (0x00005c8c) form_field_slider_pane_vc_t2

0x0001,

0xfaa1,	// (0x0000fe02) form_field_slider_pane_vc_t_ParamLimits

0xfaa1,	// (0x0000fe02) form_field_slider_pane_vc_t

0x04d4,	// (0x00000835) input_focus_pane_cp9_vc_ParamLimits

0x04d4,	// (0x00000835) input_focus_pane_cp9_vc

0x599b,	// (0x00005cfc) slider_cont_pane_vc_ParamLimits

0x599b,	// (0x00005cfc) slider_cont_pane_vc

0x59ad,	// (0x00005d0e) list_form_graphic_pane_cp_vc_ParamLimits

0x59ad,	// (0x00005d0e) list_form_graphic_pane_cp_vc

0x36ba,	// (0x00003a1b) form_field_popup_wide_pane_vc_g1

0x59c2,	// (0x00005d23) form_field_popup_wide_pane_vc_t1_ParamLimits

0x59c2,	// (0x00005d23) form_field_popup_wide_pane_vc_t1

0x107a,	// (0x000013db) input_focus_pane_cp8_vc_ParamLimits

0x107a,	// (0x000013db) input_focus_pane_cp8_vc

0x59d9,	// (0x00005d3a) list_form_wide_pane_vc_ParamLimits

0x59d9,	// (0x00005d3a) list_form_wide_pane_vc

0x59e5,	// (0x00005d46) list_form_graphic_pane_vc_g1

0x59ed,	// (0x00005d4e) list_form_graphic_pane_vc_t1_ParamLimits

0x59ed,	// (0x00005d4e) list_form_graphic_pane_vc_t1

0x01ae,	// (0x0000050f) list_highlight_pane_cp5_vc_ParamLimits

0x01ae,	// (0x0000050f) list_highlight_pane_cp5_vc

0x5a09,	// (0x00005d6a) list_form_graphic_pane_vc_ParamLimits

0x5a09,	// (0x00005d6a) list_form_graphic_pane_vc

0x36ba,	// (0x00003a1b) form_field_popup_pane_vc_g1

0x5a1f,	// (0x00005d80) form_field_popup_pane_vc_t1_ParamLimits

0x5a1f,	// (0x00005d80) form_field_popup_pane_vc_t1

0x107a,	// (0x000013db) input_focus_pane_cp7_vc_ParamLimits

0x107a,	// (0x000013db) input_focus_pane_cp7_vc

0x5a36,	// (0x00005d97) list_form_pane_vc_ParamLimits

0x5a36,	// (0x00005d97) list_form_pane_vc

0x5a42,	// (0x00005da3) data_form_pane_vc_t1_ParamLimits

0x5a42,	// (0x00005da3) data_form_pane_vc_t1

0x11b6,	// (0x00001517) input_focus_pane_vc_g1

0x11be,	// (0x0000151f) input_focus_pane_vc_g2

0x11c6,	// (0x00001527) input_focus_pane_vc_g3

0x11ce,	// (0x0000152f) input_focus_pane_vc_g4

0x11d6,	// (0x00001537) input_focus_pane_vc_g5

0x11de,	// (0x0000153f) input_focus_pane_vc_g6

0x11e6,	// (0x00001547) input_focus_pane_vc_g7

0x11ee,	// (0x0000154f) input_focus_pane_vc_g8

0x11f6,	// (0x00001557) input_focus_pane_vc_g9

0xf393,	// (0x0000f6f4) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0000fa04) input_focus_pane_vc_g

0x36ae,	// (0x00003a0f) data_form_pane_vc_ParamLimits

0x36ae,	// (0x00003a0f) data_form_pane_vc

0x36ba,	// (0x00003a1b) form_field_data_pane_vc_g1

0x5a5f,	// (0x00005dc0) form_field_data_pane_vc_t1_ParamLimits

0x5a5f,	// (0x00005dc0) form_field_data_pane_vc_t1

0x107a,	// (0x000013db) input_focus_pane_vc_ParamLimits

0x107a,	// (0x000013db) input_focus_pane_vc

0x5a79,	// (0x00005dda) button_value_adjust_pane_cp3_vc

0x5a81,	// (0x00005de2) button_value_adjust_pane_cp5_vc

0x5a89,	// (0x00005dea) form_field_data_pane_vc_ParamLimits

0x5a89,	// (0x00005dea) form_field_data_pane_vc

0x5aa4,	// (0x00005e05) form_field_data_pane_vc_cp2

0x5aac,	// (0x00005e0d) form_field_data_wide_pane_vc_ParamLimits

0x5aac,	// (0x00005e0d) form_field_data_wide_pane_vc

0x5ac6,	// (0x00005e27) form_field_data_wide_pane_vc_cp2

0x5ace,	// (0x00005e2f) form_field_popup_pane_vc_ParamLimits

0x5ace,	// (0x00005e2f) form_field_popup_pane_vc

0x5ae9,	// (0x00005e4a) form_field_popup_wide_pane_vc_ParamLimits

0x5ae9,	// (0x00005e4a) form_field_popup_wide_pane_vc

0x5b03,	// (0x00005e64) form_field_slider_pane_vc_ParamLimits

0x5b03,	// (0x00005e64) form_field_slider_pane_vc

0x5b16,	// (0x00005e77) form_field_slider_wide_pane_vc_ParamLimits

0x5b16,	// (0x00005e77) form_field_slider_wide_pane_vc

0xd384,	// (0x0000d6e5) grid_touch_1_pane_ParamLimits

0xd384,	// (0x0000d6e5) grid_touch_1_pane

0xd398,	// (0x0000d6f9) grid_touch_2_pane_ParamLimits

0xd398,	// (0x0000d6f9) grid_touch_2_pane

0x5bed,	// (0x00005f4e) touch_pane_g1_ParamLimits

0x5bed,	// (0x00005f4e) touch_pane_g1

0x5b4f,	// (0x00005eb0) cell_app_pane_cp_wide_ParamLimits

0x5b4f,	// (0x00005eb0) cell_app_pane_cp_wide

0x5b60,	// (0x00005ec1) grid_popup_fast_wide_pane_ParamLimits

0x5b60,	// (0x00005ec1) grid_popup_fast_wide_pane

0x5b74,	// (0x00005ed5) scroll_pane_cp19_ParamLimits

0x5b74,	// (0x00005ed5) scroll_pane_cp19

0xf50c,	// (0x0000f86d) bg_popup_window_pane_cp20

0x5b88,	// (0x00005ee9) listscroll_popup_fast_wide_pane

0x13b2,	// (0x00001713) grid_indicator_nsta_pane

0x5b90,	// (0x00005ef1) clock_nsta_pane_g1

0x5b99,	// (0x00005efa) clock_nsta_pane_t1

0xd3c4,	// (0x0000d725) cell_indicator_nsta_pane_ParamLimits

0xd3c4,	// (0x0000d725) cell_indicator_nsta_pane

0x5bed,	// (0x00005f4e) cell_indicator_nsta_pane_g1

0xd3e1,	// (0x0000d742) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0000fe0c) cell_indicator_nsta_pane_g

0x5c10,	// (0x00005f71) clock_nsta_pane_cp

0x5c18,	// (0x00005f79) indicator_nsta_pane_cp

0x5c20,	// (0x00005f81) nsta_clock_indic_pane_g1

0x0324,	// (0x00000685) grid_indicator_pane

0x194e,	// (0x00001caf) scroll_pane_cp29

0x1e26,	// (0x00002187) indicator_nsta_pane_cp2_ParamLimits

0x1e26,	// (0x00002187) indicator_nsta_pane_cp2

0x01ae,	// (0x0000050f) main_apps_wheel_pane

0x38a8,	// (0x00003c09) form_midp_field_text_pane_ParamLimits

0x39f7,	// (0x00003d58) scroll_bar_cp050_ParamLimits

0x5c89,	// (0x00005fea) cell_indicator_pane_ParamLimits

0x5c89,	// (0x00005fea) cell_indicator_pane

0x5ca1,	// (0x00006002) cell_indicator_pane_g1

0xd3f7,	// (0x0000d758) grid_wheel_folder_pane_ParamLimits

0xd3f7,	// (0x0000d758) grid_wheel_folder_pane

0xd405,	// (0x0000d766) list_wheel_apps_pane_ParamLimits

0xd405,	// (0x0000d766) list_wheel_apps_pane

0xd413,	// (0x0000d774) main_apps_wheel_pane_g1_ParamLimits

0xd413,	// (0x0000d774) main_apps_wheel_pane_g1

0xd423,	// (0x0000d784) main_apps_wheel_pane_g2_ParamLimits

0xd423,	// (0x0000d784) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0000fe28) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0000fe28) main_apps_wheel_pane_g

0xd433,	// (0x0000d794) main_apps_wheel_pane_t1_ParamLimits

0xd433,	// (0x0000d794) main_apps_wheel_pane_t1

0xd44b,	// (0x0000d7ac) list_wheel_apps_pane_g1

0xd453,	// (0x0000d7b4) list_wheel_apps_pane_g2

0xd45b,	// (0x0000d7bc) list_wheel_apps_pane_g3

0xd463,	// (0x0000d7c4) list_wheel_apps_pane_g4

0xd46b,	// (0x0000d7cc) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0000fe2d) list_wheel_apps_pane_g

0x2129,	// (0x0000248a) navi_icon_text_pane

0xc7a1,	// (0x0000cb02) aid_fill_nsta

0xd488,	// (0x0000d7e9) navi_icon_text_pane_g1

0xd494,	// (0x0000d7f5) navi_icon_text_pane_t1

0xbe12,	// (0x0000c173) list_set_graphic_pane_t1_ParamLimits

0xbe12,	// (0x0000c173) list_set_graphic_pane_t1

0x4148,	// (0x000044a9) popup_midp_note_alarm_window_t6_ParamLimits

0x4148,	// (0x000044a9) popup_midp_note_alarm_window_t6

0x415a,	// (0x000044bb) popup_midp_note_alarm_window_t7_ParamLimits

0x415a,	// (0x000044bb) popup_midp_note_alarm_window_t7

0x416c,	// (0x000044cd) popup_midp_note_alarm_window_t8_ParamLimits

0x416c,	// (0x000044cd) popup_midp_note_alarm_window_t8

0x417e,	// (0x000044df) popup_midp_note_alarm_window_t9_ParamLimits

0x417e,	// (0x000044df) popup_midp_note_alarm_window_t9

0x4190,	// (0x000044f1) popup_midp_note_alarm_window_t10_ParamLimits

0x4190,	// (0x000044f1) popup_midp_note_alarm_window_t10

0x41a2,	// (0x00004503) popup_midp_note_alarm_window_t11_ParamLimits

0x41a2,	// (0x00004503) popup_midp_note_alarm_window_t11

0x41b4,	// (0x00004515) scroll_pane_cp17_ParamLimits

0x41b4,	// (0x00004515) scroll_pane_cp17

0x426a,	// (0x000045cb) volume_small_pane_cp_g1

0x5d9a,	// (0x000060fb) volume_small_pane_cp_g2

0x5da3,	// (0x00006104) volume_small_pane_cp_g3

0x5dac,	// (0x0000610d) volume_small_pane_cp_g4

0x5db5,	// (0x00006116) volume_small_pane_cp_g5

0x5dbe,	// (0x0000611f) volume_small_pane_cp_g6

0x5dc7,	// (0x00006128) volume_small_pane_cp_g7

0x5dd0,	// (0x00006131) volume_small_pane_cp_g8

0x5dd9,	// (0x0000613a) volume_small_pane_cp_g9

0x5de2,	// (0x00006143) volume_small_pane_cp_g10

0x238a,	// (0x000026eb) midp_ticker_pane_g1_ParamLimits

0x2396,	// (0x000026f7) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0000facc) midp_ticker_pane_g_ParamLimits

0xbed2,	// (0x0000c233) midp_ticker_pane_t1_ParamLimits

0xc7c1,	// (0x0000cb22) aid_fill_nsta_2

0x39e3,	// (0x00003d44) list_form2_midp_pane

0x4e16,	// (0x00005177) midp_editing_number_pane_ParamLimits

0x4e25,	// (0x00005186) midp_ticker_pane_ParamLimits

0x5deb,	// (0x0000614c) form2_midp_field_pane

0x5e0f,	// (0x00006170) scroll_pane_cp51

0x5e2f,	// (0x00006190) form2_midp_button_pane_ParamLimits

0x5e2f,	// (0x00006190) form2_midp_button_pane

0x5e41,	// (0x000061a2) form2_midp_content_pane_ParamLimits

0x5e41,	// (0x000061a2) form2_midp_content_pane

0x5e5b,	// (0x000061bc) form2_midp_field_choice_group_pane

0x5e63,	// (0x000061c4) form2_midp_field_pane_g1

0x5e6b,	// (0x000061cc) form2_midp_field_pane_g2

0x5e73,	// (0x000061d4) form2_midp_field_pane_g3

0x5e7b,	// (0x000061dc) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0000fe52) form2_midp_field_pane_g

0x5e83,	// (0x000061e4) form2_midp_gauge_slider_pane

0x5e8b,	// (0x000061ec) form2_midp_gauge_wait_pane

0x5e93,	// (0x000061f4) form2_midp_image_pane_ParamLimits

0x5e93,	// (0x000061f4) form2_midp_image_pane

0x5eae,	// (0x0000620f) form2_midp_label_pane_ParamLimits

0x5eae,	// (0x0000620f) form2_midp_label_pane

0xd4c2,	// (0x0000d823) form2_midp_label_pane_cp_ParamLimits

0xd4c2,	// (0x0000d823) form2_midp_label_pane_cp

0x5eee,	// (0x0000624f) form2_midp_string_pane_ParamLimits

0x5eee,	// (0x0000624f) form2_midp_string_pane

0xd4e3,	// (0x0000d844) form2_midp_text_pane_ParamLimits

0xd4e3,	// (0x0000d844) form2_midp_text_pane

0x5f21,	// (0x00006282) form2_midp_time_pane

0x5f31,	// (0x00006292) input_focus_pane_cp51_ParamLimits

0x5f31,	// (0x00006292) input_focus_pane_cp51

0x5f49,	// (0x000062aa) form2_midp_label_pane_t1_ParamLimits

0x5f49,	// (0x000062aa) form2_midp_label_pane_t1

0xd504,	// (0x0000d865) form2_mdip_text_pane_t1_ParamLimits

0xd504,	// (0x0000d865) form2_mdip_text_pane_t1

0x5fb1,	// (0x00006312) form2_midp_time_pane_t1

0x5fcc,	// (0x0000632d) form2_midp_gauge_slider_pane_t1

0xd523,	// (0x0000d884) form2_midp_gauge_slider_pane_t2

0xd535,	// (0x0000d896) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0000fe5b) form2_midp_gauge_slider_pane_t

0x6002,	// (0x00006363) form2_midp_slider_pane

0x600e,	// (0x0000636f) form2_midp_gauge_wait_pane_t1

0x601c,	// (0x0000637d) form2_midp_wait_pane_ParamLimits

0x601c,	// (0x0000637d) form2_midp_wait_pane

0xcc4c,	// (0x0000cfad) list_single_2graphic_pane_cp4_ParamLimits

0xcc4c,	// (0x0000cfad) list_single_2graphic_pane_cp4

0xd547,	// (0x0000d8a8) list_single_midp_graphic_pane_cp_ParamLimits

0xd547,	// (0x0000d8a8) list_single_midp_graphic_pane_cp

0xf50c,	// (0x0000f86d) list_highlight_pane_cp20

0x606b,	// (0x000063cc) list_single_2graphic_pane_g1_cp4

0x5399,	// (0x000056fa) list_single_2graphic_pane_g2_cp4

0x6073,	// (0x000063d4) list_single_2graphic_pane_t1_cp4

0x01ae,	// (0x0000050f) list_highlight_pane_cp21

0x6082,	// (0x000063e3) list_single_midp_graphic_pane_g4_cp

0x6091,	// (0x000063f2) list_single_midp_graphic_pane_t1_cp

0xd568,	// (0x0000d8c9) form2_mdip_string_pane_t1_ParamLimits

0xd568,	// (0x0000d8c9) form2_mdip_string_pane_t1

0xf50c,	// (0x0000f86d) bg_wml_button_pane_cp2

0xf393,	// (0x0000f6f4) form2_midp_image_pane_g1

0x0d26,	// (0x00001087) list_double_large_graphic_pane_g5_ParamLimits

0x0d26,	// (0x00001087) list_double_large_graphic_pane_g5

0xbe2a,	// (0x0000c18b) midp_form_pane_ParamLimits

0x01ae,	// (0x0000050f) main_apps_wheel_pane_ParamLimits

0xc4b9,	// (0x0000c81a) popup_preview_window_ParamLimits

0xc4b9,	// (0x0000c81a) popup_preview_window

0x2e09,	// (0x0000316a) popup_touch_info_window_ParamLimits

0x2e09,	// (0x0000316a) popup_touch_info_window

0x2e2b,	// (0x0000318c) popup_touch_menu_window_ParamLimits

0x2e2b,	// (0x0000318c) popup_touch_menu_window

0xf389,	// (0x0000f6ea) bg_popup_sub_pane_cp6

0x614b,	// (0x000064ac) list_touch_menu_pane

0x6153,	// (0x000064b4) list_single_touch_menu_pane_ParamLimits

0x6153,	// (0x000064b4) list_single_touch_menu_pane

0x616e,	// (0x000064cf) list_single_touch_menu_pane_t1

0x01ae,	// (0x0000050f) bg_popup_sub_pane_cp7_ParamLimits

0x01ae,	// (0x0000050f) bg_popup_sub_pane_cp7

0x617c,	// (0x000064dd) heading_sub_pane

0x6184,	// (0x000064e5) list_touch_info_pane_ParamLimits

0x6184,	// (0x000064e5) list_touch_info_pane

0x6193,	// (0x000064f4) list_single_touch_info_pane_ParamLimits

0x6193,	// (0x000064f4) list_single_touch_info_pane

0x61a5,	// (0x00006506) list_single_touch_info_pane_t1

0x61b3,	// (0x00006514) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0000fe69) list_single_touch_info_pane_t

0x22ad,	// (0x0000260e) bg_popup_heading_pane_cp

0x61c1,	// (0x00006522) heading_sub_pane_t1

0x35ba,	// (0x0000391b) bg_popup_preview_window_pane_cp_ParamLimits

0x35ba,	// (0x0000391b) bg_popup_preview_window_pane_cp

0x617c,	// (0x000064dd) heading_preview_pane

0x6184,	// (0x000064e5) list_preview_pane_ParamLimits

0x6184,	// (0x000064e5) list_preview_pane

0x61cf,	// (0x00006530) popup_preview_window_g1

0x6193,	// (0x000064f4) list_single_preview_pane_ParamLimits

0x6193,	// (0x000064f4) list_single_preview_pane

0x61d7,	// (0x00006538) list_single_preview_pane_g1

0x61df,	// (0x00006540) list_single_preview_pane_t1

0x61a5,	// (0x00006506) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0000fe6e) list_single_preview_pane_t

0x61ed,	// (0x0000654e) bg_popup_heading_pane_cp2_ParamLimits

0x61ed,	// (0x0000654e) bg_popup_heading_pane_cp2

0x6203,	// (0x00006564) heading_preview_pane_g1

0x620b,	// (0x0000656c) heading_preview_pane_t1_ParamLimits

0x620b,	// (0x0000656c) heading_preview_pane_t1

0x0347,	// (0x000006a8) soft_indicator_pane_t1_ParamLimits

0x0a52,	// (0x00000db3) scroll_pane_ParamLimits

0x184a,	// (0x00001bab) scroll_sc2_left_pane

0x1853,	// (0x00001bb4) scroll_sc2_right_pane

0x1872,	// (0x00001bd3) scroll_bg_pane_g1_ParamLimits

0x1887,	// (0x00001be8) scroll_bg_pane_g2_ParamLimits

0x189f,	// (0x00001c00) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0000fa5b) scroll_bg_pane_g_ParamLimits

0x1872,	// (0x00001bd3) scroll_handle_pane_g1_ParamLimits

0x18c1,	// (0x00001c22) scroll_handle_pane_g2_ParamLimits

0x189f,	// (0x00001c00) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0000fa62) scroll_handle_pane_g_ParamLimits

0x286d,	// (0x00002bce) popup_choice_list_window_ParamLimits

0x286d,	// (0x00002bce) popup_choice_list_window

0x332b,	// (0x0000368c) choice_list_pane

0x33f3,	// (0x00003754) cell_toolbar_pane_t1

0x341b,	// (0x0000377c) toolbar_button_pane_ParamLimits

0x47f0,	// (0x00004b51) ai_gene_pane_1_t2_ParamLimits

0x47f0,	// (0x00004b51) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0000fc73) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0000fc73) ai_gene_pane_1_t

0x6228,	// (0x00006589) scroll_sc2_left_pane_g1

0x6228,	// (0x00006589) scroll_sc2_right_pane_g1

0x283d,	// (0x00002b9e) bg_popup_sub_pane_cp10

0x6232,	// (0x00006593) list_choice_list_pane

0x6249,	// (0x000065aa) list_single_choice_list_pane_ParamLimits

0x6249,	// (0x000065aa) list_single_choice_list_pane

0x625d,	// (0x000065be) list_single_choice_list_pane_g1

0x6265,	// (0x000065c6) list_single_choice_list_pane_t1_ParamLimits

0x6265,	// (0x000065c6) list_single_choice_list_pane_t1

0x627a,	// (0x000065db) choice_list_pane_g1

0x6282,	// (0x000065e3) choice_list_pane_t1

0xf389,	// (0x0000f6ea) input_focus_pane_cp11

0x15aa,	// (0x0000190b) title_pane_stacon_g2_ParamLimits

0x15aa,	// (0x0000190b) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0000fa41) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0000fa41) title_pane_stacon_g

0x22ad,	// (0x0000260e) cursor_press_pane

0xc13a,	// (0x0000c49b) popup_fep_hwr_window_ParamLimits

0xc13a,	// (0x0000c49b) popup_fep_hwr_window

0x29ad,	// (0x00002d0e) popup_fep_vkb_window_ParamLimits

0x29ad,	// (0x00002d0e) popup_fep_vkb_window

0x6290,	// (0x000065f1) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0000fe97) fep_vkb_side_pane_g_ParamLimits

0x62d1,	// (0x00006632) fep_hwr_candidate_pane_ParamLimits

0x62d1,	// (0x00006632) fep_hwr_candidate_pane

0x62fb,	// (0x0000665c) fep_hwr_side_pane_ParamLimits

0x62fb,	// (0x0000665c) fep_hwr_side_pane

0x631d,	// (0x0000667e) fep_hwr_top_pane_ParamLimits

0x631d,	// (0x0000667e) fep_hwr_top_pane

0x6335,	// (0x00006696) fep_hwr_write_pane_ParamLimits

0x6335,	// (0x00006696) fep_hwr_write_pane

0xfb36,	// (0x0000fe97) fep_vkb_side_pane_g

0x636f,	// (0x000066d0) fep_hwr_top_pane_g1

0x6381,	// (0x000066e2) fep_hwr_top_pane_g2

0x6393,	// (0x000066f4) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0000fe73) fep_hwr_top_pane_g

0x63a8,	// (0x00006709) fep_hwr_top_text_pane

0x1a16,	// (0x00001d77) fep_hwr_top_text_pane_g1

0x6484,	// (0x000067e5) fep_hwr_top_text_pane_t1

0x64e4,	// (0x00006845) fep_hwr_candidate_pane_g1

0x6755,	// (0x00006ab6) fep_vkb_keypad_pane_g3_ParamLimits

0x6755,	// (0x00006ab6) fep_vkb_keypad_pane_g3

0x6781,	// (0x00006ae2) fep_vkb_keypad_pane_g4_ParamLimits

0x6781,	// (0x00006ae2) fep_vkb_keypad_pane_g4

0x67f8,	// (0x00006b59) fep_vkb_bottom_pane_g2_ParamLimits

0x67f8,	// (0x00006b59) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0000fe9e) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0000fe9e) fep_vkb_bottom_pane_g

0x6228,	// (0x00006589) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0000fea8) cell_vkb_side_pane_g

0x6883,	// (0x00006be4) cell_vkb_side_pane_t1

0x6891,	// (0x00006bf2) cell_vkb_side_pane_t1_copy1

0x6228,	// (0x00006589) bg_fep_vkb_candidate_pane_g2

0x69d5,	// (0x00006d36) cell_vkb_candidate_pane_ParamLimits

0x6518,	// (0x00006879) aid_size_cell_vkb_ParamLimits

0x6518,	// (0x00006879) aid_size_cell_vkb

0x69d5,	// (0x00006d36) cell_vkb_candidate_pane

0x6a0f,	// (0x00006d70) bg_popup_fep_shadow_pane_g1

0xd651,	// (0x0000d9b2) fep_vkb_bottom_pane_ParamLimits

0xd651,	// (0x0000d9b2) fep_vkb_bottom_pane

0x65e7,	// (0x00006948) fep_vkb_candidate_pane_ParamLimits

0x65e7,	// (0x00006948) fep_vkb_candidate_pane

0xd67d,	// (0x0000d9de) fep_vkb_keypad_pane_ParamLimits

0xd67d,	// (0x0000d9de) fep_vkb_keypad_pane

0xd6a4,	// (0x0000da05) fep_vkb_side_pane_ParamLimits

0xd6a4,	// (0x0000da05) fep_vkb_side_pane

0xd6e0,	// (0x0000da41) fep_vkb_top_pane_ParamLimits

0xd6e0,	// (0x0000da41) fep_vkb_top_pane

0x66ae,	// (0x00006a0f) fep_vkb_top_pane_g1_ParamLimits

0x66ae,	// (0x00006a0f) fep_vkb_top_pane_g1

0x66bd,	// (0x00006a1e) fep_vkb_top_pane_g2_ParamLimits

0x66bd,	// (0x00006a1e) fep_vkb_top_pane_g2

0x66cc,	// (0x00006a2d) fep_vkb_top_pane_g3_ParamLimits

0x66cc,	// (0x00006a2d) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0000fe8e) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0000fe8e) fep_vkb_top_pane_g

0x66ea,	// (0x00006a4b) fep_vkb_top_text_pane_ParamLimits

0x66ea,	// (0x00006a4b) fep_vkb_top_text_pane

0xd71c,	// (0x0000da7d) fep_vkb_side_pane_g1_ParamLimits

0xd71c,	// (0x0000da7d) fep_vkb_side_pane_g1

0x6744,	// (0x00006aa5) grid_vkb_side_pane_ParamLimits

0x6744,	// (0x00006aa5) grid_vkb_side_pane

0x6a17,	// (0x00006d78) bg_popup_fep_shadow_pane_g2

0x6a20,	// (0x00006d81) bg_popup_fep_shadow_pane_g3

0x6a28,	// (0x00006d89) bg_popup_fep_shadow_pane_g4

0x6a31,	// (0x00006d92) bg_popup_fep_shadow_pane_g5

0x6a3b,	// (0x00006d9c) bg_popup_fep_shadow_pane_g6

0x6a43,	// (0x00006da4) bg_popup_fep_shadow_pane_g7

0x11d6,	// (0x00001537) bg_popup_fep_shadow_pane_g8

0x67a3,	// (0x00006b04) grid_vkb_keypad_number_pane_ParamLimits

0x67a3,	// (0x00006b04) grid_vkb_keypad_number_pane

0x67b7,	// (0x00006b18) grid_vkb_keypad_pane_ParamLimits

0x67b7,	// (0x00006b18) grid_vkb_keypad_pane

0x67dd,	// (0x00006b3e) fep_vkb_bottom_pane_g1_ParamLimits

0x67dd,	// (0x00006b3e) fep_vkb_bottom_pane_g1

0x6806,	// (0x00006b67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6806,	// (0x00006b67) grid_vkb_keypad_bottom_left_pane

0x681b,	// (0x00006b7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x681b,	// (0x00006b7c) grid_vkb_keypad_bottom_right_pane

0x6830,	// (0x00006b91) fep_vkb_top_text_pane_g1

0xd763,	// (0x0000dac4) fep_vkb_top_text_pane_t1

0xd775,	// (0x0000dad6) cell_vkb_side_pane_ParamLimits

0xd775,	// (0x0000dad6) cell_vkb_side_pane

0x6228,	// (0x00006589) cell_vkb_side_pane_g1

0x689f,	// (0x00006c00) cell_vkb_keypad_pane_ParamLimits

0x689f,	// (0x00006c00) cell_vkb_keypad_pane

0x692c,	// (0x00006c8d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0000febb) bg_popup_fep_shadow_pane_g

0x6228,	// (0x00006589) cell_hwr_side_pane_g1

0x6228,	// (0x00006589) cell_hwr_side_pane_g2

0x6936,	// (0x00006c97) cell_vkb_keypad_pane_t1

0xd78b,	// (0x0000daec) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd78b,	// (0x0000daec) cell_vkb_keypad_bottom_left_pane

0xd7a0,	// (0x0000db01) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd7a0,	// (0x0000db01) cell_vkb_keypad_bottom_right_pane

0x6228,	// (0x00006589) cell_vkb_keypad_bottom_left_pane_g1

0x6228,	// (0x00006589) cell_vkb_keypad_bottom_right_pane_g1

0x699a,	// (0x00006cfb) cell_vkb_keypad_number_pane_ParamLimits

0x699a,	// (0x00006cfb) cell_vkb_keypad_number_pane

0x69b9,	// (0x00006d1a) cell_vkb_keypad_number_pane_g1

0x69c3,	// (0x00006d24) cell_vkb_keypad_number_pane_g2

0x69cc,	// (0x00006d2d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0000fead) cell_vkb_keypad_number_pane_g

0x6936,	// (0x00006c97) cell_vkb_keypad_number_pane_t1

0x69f6,	// (0x00006d57) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x0000fea8) cell_hwr_side_pane_g

0x6a55,	// (0x00006db6) cell_hwr_side_pane_t1

0x6a63,	// (0x00006dc4) cell_hwr_side_pane_t1_copy1

0x66dc,	// (0x00006a3d) cell_hwr_candidate_pane_g1

0x6ab3,	// (0x00006e14) cell_hwr_candidate_pane_t1

0x6228,	// (0x00006589) cell_vkb_candidate_pane_g2

0x6b07,	// (0x00006e68) cell_vkb_candidate_pane_t1

0x6298,	// (0x000065f9) bg_popup_fep_shadow_pane_ParamLimits

0x6298,	// (0x000065f9) bg_popup_fep_shadow_pane

0x634f,	// (0x000066b0) bg_fep_hwr_top_pane_g4

0x63bd,	// (0x0000671e) bg_hwr_side_pane_g1_ParamLimits

0x63bd,	// (0x0000671e) bg_hwr_side_pane_g1

0xd60a,	// (0x0000d96b) cell_hwr_side_pane_ParamLimits

0xd60a,	// (0x0000d96b) cell_hwr_side_pane

0x642f,	// (0x00006790) fep_hwr_write_pane_g1_ParamLimits

0x642f,	// (0x00006790) fep_hwr_write_pane_g1

0x643c,	// (0x0000679d) fep_hwr_write_pane_g2_ParamLimits

0x643c,	// (0x0000679d) fep_hwr_write_pane_g2

0x6449,	// (0x000067aa) fep_hwr_write_pane_g3_ParamLimits

0x6449,	// (0x000067aa) fep_hwr_write_pane_g3

0xd62a,	// (0x0000d98b) fep_hwr_write_pane_g4_ParamLimits

0xd62a,	// (0x0000d98b) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0000fe7a) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0000fe7a) fep_hwr_write_pane_g

0x634f,	// (0x000066b0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x634f,	// (0x000066b0) bg_fep_hwr_candidate_pane_g2

0x6492,	// (0x000067f3) cell_hwr_candidate_pane_ParamLimits

0x6492,	// (0x000067f3) cell_hwr_candidate_pane

0x64e4,	// (0x00006845) fep_hwr_candidate_pane_g1_ParamLimits

0x6546,	// (0x000068a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6546,	// (0x000068a7) bg_popup_fep_shadow_pane_cp2

0x66dc,	// (0x00006a3d) fep_vkb_top_pane_g4_ParamLimits

0x66dc,	// (0x00006a3d) fep_vkb_top_pane_g4

0x6722,	// (0x00006a83) fep_vkb_side_pane_g2_ParamLimits

0x6722,	// (0x00006a83) fep_vkb_side_pane_g2

0xb8ca,	// (0x0000bc2b) list_setting_pane_t4_ParamLimits

0xb8ca,	// (0x0000bc2b) list_setting_pane_t4

0xb946,	// (0x0000bca7) list_setting_number_pane_t5_ParamLimits

0xb946,	// (0x0000bca7) list_setting_number_pane_t5

0x1a67,	// (0x00001dc8) list_double_heading_pane_cp2_ParamLimits

0x1a67,	// (0x00001dc8) list_double_heading_pane_cp2

0x10a0,	// (0x00001401) list_double_heading_pane_g1_cp2_ParamLimits

0x10a0,	// (0x00001401) list_double_heading_pane_g1_cp2

0x10ac,	// (0x0000140d) list_double_heading_pane_g2_cp2_ParamLimits

0x10ac,	// (0x0000140d) list_double_heading_pane_g2_cp2

0x6b15,	// (0x00006e76) list_double_heading_pane_t1_cp2_ParamLimits

0x6b15,	// (0x00006e76) list_double_heading_pane_t1_cp2

0x6b2b,	// (0x00006e8c) list_double_heading_pane_t2_cp2_ParamLimits

0x6b2b,	// (0x00006e8c) list_double_heading_pane_t2_cp2

0xf381,	// (0x0000f6e2) aid_value_unit2

0xf560,	// (0x0000f8c1) popup_preview_fixed_window

0x04e2,	// (0x00000843) bg_popup_preview_window_pane_cp02

0x6b3d,	// (0x00006e9e) list_preview_fixed_pane

0x6b83,	// (0x00006ee4) list_empty_pane_fp_ParamLimits

0x6b83,	// (0x00006ee4) list_empty_pane_fp

0x6b83,	// (0x00006ee4) list_single_cale_day_pane_fp_ParamLimits

0x6b83,	// (0x00006ee4) list_single_cale_day_pane_fp

0x6b83,	// (0x00006ee4) list_single_graphic_heading_pane_fp_ParamLimits

0x6b83,	// (0x00006ee4) list_single_graphic_heading_pane_fp

0x6b83,	// (0x00006ee4) list_single_graphic_pane_fp_ParamLimits

0x6b83,	// (0x00006ee4) list_single_graphic_pane_fp

0x6b83,	// (0x00006ee4) list_single_heading_pane_fp_ParamLimits

0x6b83,	// (0x00006ee4) list_single_heading_pane_fp

0x6b83,	// (0x00006ee4) list_single_pane_fp_ParamLimits

0x6b83,	// (0x00006ee4) list_single_pane_fp

0x6b9c,	// (0x00006efd) list_single_pane_fp_g1_ParamLimits

0x6b9c,	// (0x00006efd) list_single_pane_fp_g1

0x6ba8,	// (0x00006f09) list_single_pane_fp_g2_ParamLimits

0x6ba8,	// (0x00006f09) list_single_pane_fp_g2

0x6bb4,	// (0x00006f15) list_single_pane_fp_g3_ParamLimits

0x6bb4,	// (0x00006f15) list_single_pane_fp_g3

0x6bc8,	// (0x00006f29) list_single_pane_fp_g4_ParamLimits

0x6bc8,	// (0x00006f29) list_single_pane_fp_g4

0x0003,

0xfb7b,	// (0x0000fedc) list_single_pane_fp_g_ParamLimits

0xfb7b,	// (0x0000fedc) list_single_pane_fp_g

0x6bd4,	// (0x00006f35) list_single_pane_fp_t1_ParamLimits

0x6bd4,	// (0x00006f35) list_single_pane_fp_t1

0x6beb,	// (0x00006f4c) list_single_graphic_pane_fp_g1_ParamLimits

0x6beb,	// (0x00006f4c) list_single_graphic_pane_fp_g1

0x6b9c,	// (0x00006efd) list_single_graphic_pane_fp_g2_ParamLimits

0x6b9c,	// (0x00006efd) list_single_graphic_pane_fp_g2

0x6ba8,	// (0x00006f09) list_single_graphic_pane_fp_g3_ParamLimits

0x6ba8,	// (0x00006f09) list_single_graphic_pane_fp_g3

0x6bb4,	// (0x00006f15) list_single_graphic_pane_fp_g4_ParamLimits

0x6bb4,	// (0x00006f15) list_single_graphic_pane_fp_g4

0x6bc8,	// (0x00006f29) list_single_graphic_pane_fp_g5_ParamLimits

0x6bc8,	// (0x00006f29) list_single_graphic_pane_fp_g5

0x0004,

0xfb84,	// (0x0000fee5) list_single_graphic_pane_fp_g_ParamLimits

0xfb84,	// (0x0000fee5) list_single_graphic_pane_fp_g

0x6bf7,	// (0x00006f58) list_single_graphic_pane_fp_t1_ParamLimits

0x6bf7,	// (0x00006f58) list_single_graphic_pane_fp_t1

0x6beb,	// (0x00006f4c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6beb,	// (0x00006f4c) list_single_graphic_heading_pane_fp_g1

0x6b9c,	// (0x00006efd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6b9c,	// (0x00006efd) list_single_graphic_heading_pane_fp_g2

0x6ba8,	// (0x00006f09) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6ba8,	// (0x00006f09) list_single_graphic_heading_pane_fp_g3

0x6bb4,	// (0x00006f15) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6bb4,	// (0x00006f15) list_single_graphic_heading_pane_fp_g4

0x6bc8,	// (0x00006f29) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6bc8,	// (0x00006f29) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0000fee5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0000fee5) list_single_graphic_heading_pane_fp_g

0x6c0d,	// (0x00006f6e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6c0d,	// (0x00006f6e) list_single_graphic_heading_pane_fp_t1

0x6c23,	// (0x00006f84) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6c23,	// (0x00006f84) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x0000fef0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x0000fef0) list_single_graphic_heading_pane_fp_t

0x6c35,	// (0x00006f96) list_single_cale_day_pane_fp_g1_ParamLimits

0x6c35,	// (0x00006f96) list_single_cale_day_pane_fp_g1

0x6c6d,	// (0x00006fce) list_single_cale_day_pane_fp_g2_ParamLimits

0x6c6d,	// (0x00006fce) list_single_cale_day_pane_fp_g2

0x6c79,	// (0x00006fda) list_single_cale_day_pane_fp_g3_ParamLimits

0x6c79,	// (0x00006fda) list_single_cale_day_pane_fp_g3

0x6ca1,	// (0x00007002) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ca1,	// (0x00007002) list_single_cale_day_pane_fp_g4

0x6cc5,	// (0x00007026) list_single_cale_day_pane_fp_g5_ParamLimits

0x6cc5,	// (0x00007026) list_single_cale_day_pane_fp_g5

0x0004,

0xfb94,	// (0x0000fef5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb94,	// (0x0000fef5) list_single_cale_day_pane_fp_g

0x6ce9,	// (0x0000704a) list_single_cale_day_pane_fp_t1_ParamLimits

0x6ce9,	// (0x0000704a) list_single_cale_day_pane_fp_t1

0x6d0f,	// (0x00007070) list_single_cale_day_pane_fp_t2_ParamLimits

0x6d0f,	// (0x00007070) list_single_cale_day_pane_fp_t2

0x6d28,	// (0x00007089) list_single_cale_day_pane_fp_t3_ParamLimits

0x6d28,	// (0x00007089) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9f,	// (0x0000ff00) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9f,	// (0x0000ff00) list_single_cale_day_pane_fp_t

0x6b9c,	// (0x00006efd) list_empty_pane_fp_g1_ParamLimits

0x6b9c,	// (0x00006efd) list_empty_pane_fp_g1

0x6d41,	// (0x000070a2) list_empty_pane_fp_t1

0x6d4f,	// (0x000070b0) list_empty_pane_fp_t2

0x0001,

0xfba6,	// (0x0000ff07) list_empty_pane_fp_t

0x6b9c,	// (0x00006efd) list_single_heading_pane_fp_g1_ParamLimits

0x6b9c,	// (0x00006efd) list_single_heading_pane_fp_g1

0x6ba8,	// (0x00006f09) list_single_heading_pane_fp_g2_ParamLimits

0x6ba8,	// (0x00006f09) list_single_heading_pane_fp_g2

0x6bb4,	// (0x00006f15) list_single_heading_pane_fp_g3_ParamLimits

0x6bb4,	// (0x00006f15) list_single_heading_pane_fp_g3

0x0002,

0xfbab,	// (0x0000ff0c) list_single_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0000ff0c) list_single_heading_pane_fp_g

0x6d5d,	// (0x000070be) list_single_heading_pane_fp_t1_ParamLimits

0x6d5d,	// (0x000070be) list_single_heading_pane_fp_t1

0x6d6f,	// (0x000070d0) list_single_heading_pane_fp_t2_ParamLimits

0x6d6f,	// (0x000070d0) list_single_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x0000ff13) list_single_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x0000ff13) list_single_heading_pane_fp_t

0x13f1,	// (0x00001752) aid_size_cell_fast

0x0454,	// (0x000007b5) soft_indicator_pane_cp1_t1

0x142e,	// (0x0000178f) cell_app_pane_cp2_ParamLimits

0x142e,	// (0x0000178f) cell_app_pane_cp2

0x62ba,	// (0x0000661b) fep_hwr_candidate_drop_down_list_pane

0x64fe,	// (0x0000685f) fep_hwr_candidate_pane_g3_ParamLimits

0x64fe,	// (0x0000685f) fep_hwr_candidate_pane_g3

0x650b,	// (0x0000686c) fep_hwr_candidate_pane_g4_ParamLimits

0x650b,	// (0x0000686c) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0000fe87) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0000fe87) fep_hwr_candidate_pane_g

0x65d6,	// (0x00006937) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x65d6,	// (0x00006937) fep_vkb_candidate_drop_down_list_pane

0x69fe,	// (0x00006d5f) fep_vkb_candidate_pane_g3

0x6a06,	// (0x00006d67) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0000feb4) fep_vkb_candidate_pane_g

0x66dc,	// (0x00006a3d) cell_hwr_candidate_pane_g1_ParamLimits

0x6a71,	// (0x00006dd2) cell_hwr_candidate_pane_g3_ParamLimits

0x6a71,	// (0x00006dd2) cell_hwr_candidate_pane_g3

0x6a92,	// (0x00006df3) cell_hwr_candidate_pane_g4_ParamLimits

0x6a92,	// (0x00006df3) cell_hwr_candidate_pane_g4

0x0002,

0xfb6d,	// (0x0000fece) cell_hwr_candidate_pane_g_ParamLimits

0xfb6d,	// (0x0000fece) cell_hwr_candidate_pane_g

0x6ad1,	// (0x00006e32) cell_vkb_candidate_pane_g3_ParamLimits

0x6ad1,	// (0x00006e32) cell_vkb_candidate_pane_g3

0x6aec,	// (0x00006e4d) cell_vkb_candidate_pane_g4_ParamLimits

0x6aec,	// (0x00006e4d) cell_vkb_candidate_pane_g4

0x6d85,	// (0x000070e6) cell_app_pane_cp2_g1_ParamLimits

0x6d85,	// (0x000070e6) cell_app_pane_cp2_g1

0x6da3,	// (0x00007104) cell_app_pane_cp2_g2_ParamLimits

0x6da3,	// (0x00007104) cell_app_pane_cp2_g2

0x0001,

0xfbb7,	// (0x0000ff18) cell_app_pane_cp2_g_ParamLimits

0xfbb7,	// (0x0000ff18) cell_app_pane_cp2_g

0x6daf,	// (0x00007110) cell_app_pane_cp2_t1_ParamLimits

0x6daf,	// (0x00007110) cell_app_pane_cp2_t1

0x107a,	// (0x000013db) grid_highlight_pane_cp1_ParamLimits

0x107a,	// (0x000013db) grid_highlight_pane_cp1

0x6dc1,	// (0x00007122) cell_hwr_candidate_pane_cp1_ParamLimits

0x6dc1,	// (0x00007122) cell_hwr_candidate_pane_cp1

0x66dc,	// (0x00006a3d) fep_hwr_candidate_drop_down_list_pane_g1

0x6de5,	// (0x00007146) fep_hwr_candidate_drop_down_list_pane_g2

0x6df2,	// (0x00007153) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x0000ff1d) fep_hwr_candidate_drop_down_list_pane_g

0x6dff,	// (0x00007160) fep_hwr_candidate_drop_down_list_scroll_pane

0x6e08,	// (0x00007169) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e08,	// (0x00007169) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6e15,	// (0x00007176) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e15,	// (0x00007176) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6e22,	// (0x00007183) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e22,	// (0x00007183) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ad1,	// (0x00006e32) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ad1,	// (0x00006e32) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6aec,	// (0x00006e4d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6aec,	// (0x00006e4d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6e2f,	// (0x00007190) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e2f,	// (0x00007190) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6e4a,	// (0x000071ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6e4a,	// (0x000071ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6e65,	// (0x000071c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6e65,	// (0x000071c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc3,	// (0x0000ff24) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc3,	// (0x0000ff24) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6e80,	// (0x000071e1) cell_vkb_candidate_pane_cp1_ParamLimits

0x6e80,	// (0x000071e1) cell_vkb_candidate_pane_cp1

0x66dc,	// (0x00006a3d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x66dc,	// (0x00006a3d) fep_vkb_candidate_drop_down_list_pane_g1

0x6de5,	// (0x00007146) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6de5,	// (0x00007146) fep_vkb_candidate_drop_down_list_pane_g2

0x6df2,	// (0x00007153) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6df2,	// (0x00007153) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x0000ff1d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbc,	// (0x0000ff1d) fep_vkb_candidate_drop_down_list_pane_g

0x6ea6,	// (0x00007207) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6ea6,	// (0x00007207) fep_vkb_candidate_drop_down_list_scroll_pane

0x6eb3,	// (0x00007214) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6eb3,	// (0x00007214) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6ec0,	// (0x00007221) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ec0,	// (0x00007221) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6ecc,	// (0x0000722d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ecc,	// (0x0000722d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6a71,	// (0x00006dd2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6a71,	// (0x00006dd2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6a92,	// (0x00006df3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6a92,	// (0x00006df3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6ed8,	// (0x00007239) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6ed8,	// (0x00007239) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6ef9,	// (0x0000725a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6ef9,	// (0x0000725a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6f1a,	// (0x0000727b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6f1a,	// (0x0000727b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0000ff35) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0000ff35) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb1d1,	// (0x0000b532) title_pane_g1_ParamLimits

0xb1e2,	// (0x0000b543) title_pane_g2_ParamLimits

0xf56a,	// (0x0000f8cb) title_pane_g_ParamLimits

0x1a06,	// (0x00001d67) aid_call2_pane

0x1a0e,	// (0x00001d6f) aid_call_pane

0x1a16,	// (0x00001d77) popup_clock_analogue_window_g1

0x1a16,	// (0x00001d77) popup_clock_analogue_window_g2

0x1a1e,	// (0x00001d7f) popup_clock_analogue_window_g3

0x1a27,	// (0x00001d88) popup_clock_analogue_window_g4

0xf393,	// (0x0000f6f4) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0000fa70) popup_clock_analogue_window_g

0x1a2f,	// (0x00001d90) popup_clock_analogue_window_t1

0x1aba,	// (0x00001e1b) clock_digital_number_pane_ParamLimits

0x1aba,	// (0x00001e1b) clock_digital_number_pane

0x1ac6,	// (0x00001e27) clock_digital_number_pane_cp02_ParamLimits

0x1ac6,	// (0x00001e27) clock_digital_number_pane_cp02

0x1ad2,	// (0x00001e33) clock_digital_number_pane_cp03_ParamLimits

0x1ad2,	// (0x00001e33) clock_digital_number_pane_cp03

0x1ade,	// (0x00001e3f) clock_digital_number_pane_cp04_ParamLimits

0x1ade,	// (0x00001e3f) clock_digital_number_pane_cp04

0x1aea,	// (0x00001e4b) clock_digital_separator_pane_ParamLimits

0x1aea,	// (0x00001e4b) clock_digital_separator_pane

0x1af6,	// (0x00001e57) popup_clock_digital_window_t1_ParamLimits

0x1af6,	// (0x00001e57) popup_clock_digital_window_t1

0xf393,	// (0x0000f6f4) clock_digital_number_pane_g1

0xf393,	// (0x0000f6f4) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0000fa7b) clock_digital_number_pane_g

0xf393,	// (0x0000f6f4) clock_digital_separator_pane_g1

0xf393,	// (0x0000f6f4) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0000fa7b) clock_digital_separator_pane_g

0xc7a1,	// (0x0000cb02) aid_fill_nsta_ParamLimits

0xc8d2,	// (0x0000cc33) indicator_nsta_pane_ParamLimits

0x3158,	// (0x000034b9) popup_clock_analogue_window

0x3158,	// (0x000034b9) popup_clock_digital_window

0x13b2,	// (0x00001713) grid_indicator_nsta_pane_ParamLimits

0x5ba7,	// (0x00005f08) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0000fe07) clock_nsta_pane_t

0x17ef,	// (0x00001b50) aid_size_max_handle

0xbc3d,	// (0x0000bf9e) aid_size_min_handle

0x22ad,	// (0x0000260e) editor_scroll_pane

0x6f35,	// (0x00007296) ex_editor_pane

0x135e,	// (0x000016bf) scroll_pane_cp13

0x0a7e,	// (0x00000ddf) scroll_pane_cp14

0x1a5f,	// (0x00001dc0) scroll_pane_cp36

0xbcca,	// (0x0000c02b) list_single_graphic_hl_pane_cp2_ParamLimits

0xbcca,	// (0x0000c02b) list_single_graphic_hl_pane_cp2

0xd260,	// (0x0000d5c1) list_single_graphic_hl_pane_ParamLimits

0xd260,	// (0x0000d5c1) list_single_graphic_hl_pane

0x6f3d,	// (0x0000729e) aid_size_min_hl_cp1

0x6f46,	// (0x000072a7) list_highlight_pane_cp34_ParamLimits

0x6f46,	// (0x000072a7) list_highlight_pane_cp34

0x6f57,	// (0x000072b8) list_single_graphic_hl_pane_g1_ParamLimits

0x6f57,	// (0x000072b8) list_single_graphic_hl_pane_g1

0x0a86,	// (0x00000de7) list_single_graphic_hl_pane_g2_ParamLimits

0x0a86,	// (0x00000de7) list_single_graphic_hl_pane_g2

0x0a86,	// (0x00000de7) list_single_graphic_hl_pane_g3_ParamLimits

0x0a86,	// (0x00000de7) list_single_graphic_hl_pane_g3

0x0a92,	// (0x00000df3) list_single_graphic_hl_pane_g4_ParamLimits

0x0a92,	// (0x00000df3) list_single_graphic_hl_pane_g4

0x6fca,	// (0x0000732b) list_single_graphic_hl_pane_g5_ParamLimits

0x6fca,	// (0x0000732b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe5,	// (0x0000ff46) list_single_graphic_hl_pane_g_ParamLimits

0xfbe5,	// (0x0000ff46) list_single_graphic_hl_pane_g

0xd7bb,	// (0x0000db1c) list_single_graphic_hl_pane_t1_ParamLimits

0xd7bb,	// (0x0000db1c) list_single_graphic_hl_pane_t1

0x6f9a,	// (0x000072fb) aid_size_min_hl_cp2

0x6fa3,	// (0x00007304) list_highlight_pane_cp34_cp2_ParamLimits

0x6fa3,	// (0x00007304) list_highlight_pane_cp34_cp2

0x6f57,	// (0x000072b8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6f57,	// (0x000072b8) list_single_graphic_hl_pane_g1_cp2

0x6fb0,	// (0x00007311) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6fb0,	// (0x00007311) list_single_graphic_hl_pane_g2_cp2

0x6fbc,	// (0x0000731d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6fbc,	// (0x0000731d) list_single_graphic_hl_pane_g3_cp2

0x0a92,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0a92,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2

0x6fca,	// (0x0000732b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6fca,	// (0x0000732b) list_single_graphic_hl_pane_g5_cp2

0xbf17,	// (0x0000c278) control_pane_g4_ParamLimits

0xbf17,	// (0x0000c278) control_pane_g4

0x283d,	// (0x00002b9e) bg_popup_sub_pane_cp10_ParamLimits

0x6232,	// (0x00006593) list_choice_list_pane_ParamLimits

0x6241,	// (0x000065a2) scroll_pane_cp23

0x04e2,	// (0x00000843) bg_popup_preview_window_pane_cp02_ParamLimits

0x6b3d,	// (0x00006e9e) list_preview_fixed_pane_ParamLimits

0x6b53,	// (0x00006eb4) list_preview_fixed_pane_cp_ParamLimits

0x6b53,	// (0x00006eb4) list_preview_fixed_pane_cp

0x6b5f,	// (0x00006ec0) popup_preview_fixed_window_g1_ParamLimits

0x6b5f,	// (0x00006ec0) popup_preview_fixed_window_g1

0x6b6b,	// (0x00006ecc) popup_preview_fixed_window_g2_ParamLimits

0x6b6b,	// (0x00006ecc) popup_preview_fixed_window_g2

0x0002,

0xfb74,	// (0x0000fed5) popup_preview_fixed_window_g_ParamLimits

0xfb74,	// (0x0000fed5) popup_preview_fixed_window_g

0x168f,	// (0x000019f0) aid_navi_side_left_pane_ParamLimits

0x16a4,	// (0x00001a05) aid_navi_side_right_pane_ParamLimits

0x16bc,	// (0x00001a1d) navi_icon_pane_stacon_ParamLimits

0x16d0,	// (0x00001a31) navi_navi_pane_stacon_ParamLimits

0x16bc,	// (0x00001a1d) navi_text_pane_stacon_ParamLimits

0xf389,	// (0x0000f6ea) main_text_info_pane

0x6ff4,	// (0x00007355) listscroll_text_info_pane

0x6ffc,	// (0x0000735d) list_text_info_pane_ParamLimits

0x6ffc,	// (0x0000735d) list_text_info_pane

0x700b,	// (0x0000736c) scroll_pane_cp24_ParamLimits

0x700b,	// (0x0000736c) scroll_pane_cp24

0xd7d1,	// (0x0000db32) list_text_info_pane_t1_ParamLimits

0xd7d1,	// (0x0000db32) list_text_info_pane_t1

0xc09e,	// (0x0000c3ff) popup_fast_swap2_window_ParamLimits

0xc09e,	// (0x0000c3ff) popup_fast_swap2_window

0x704e,	// (0x000073af) aid_size_cell_fast2

0xf389,	// (0x0000f6ea) bg_popup_window_pane_cp17

0x3a0f,	// (0x00003d70) heading_pane_cp2

0x0742,	// (0x00000aa3) listscroll_fast2_pane

0x7058,	// (0x000073b9) grid_fast2_pane

0x7062,	// (0x000073c3) listscroll_fast2_pane_g1

0x706c,	// (0x000073cd) listscroll_fast2_pane_g2

0x0001,

0xfbf0,	// (0x0000ff51) listscroll_fast2_pane_g

0x135e,	// (0x000016bf) scroll_pane_cp26

0x7076,	// (0x000073d7) cell_fast2_pane_ParamLimits

0x7076,	// (0x000073d7) cell_fast2_pane

0x708d,	// (0x000073ee) cell_fast2_pane_g1

0x7096,	// (0x000073f7) cell_fast2_pane_g2

0x709f,	// (0x00007400) cell_fast2_pane_g3

0x0002,

0xfbf5,	// (0x0000ff56) cell_fast2_pane_g

0x083b,	// (0x00000b9c) grid_highlight_pane_cp9

0x0850,	// (0x00000bb1) main_eswt_pane_ParamLimits

0x0850,	// (0x00000bb1) main_eswt_pane

0x7020,	// (0x00007381) list_single_text_info_pane

0x70a7,	// (0x00007408) eswt_ctrl_button_pane

0x70a7,	// (0x00007408) eswt_ctrl_canvas_pane

0x70af,	// (0x00007410) eswt_ctrl_combo_pane

0x70a7,	// (0x00007408) eswt_ctrl_default_pane

0x70a7,	// (0x00007408) eswt_ctrl_label_pane

0x70b7,	// (0x00007418) eswt_ctrl_wait_pane

0x70bf,	// (0x00007420) eswt_shell_pane

0xf389,	// (0x0000f6ea) listscroll_eswt_app_pane

0x70df,	// (0x00007440) popup_eswt_tasktip_window_ParamLimits

0x70df,	// (0x00007440) popup_eswt_tasktip_window

0x35ba,	// (0x0000391b) bg_popup_window_pane_cp18

0x70f0,	// (0x00007451) eswt_control_pane_g1_ParamLimits

0x70f0,	// (0x00007451) eswt_control_pane_g1

0x70fd,	// (0x0000745e) eswt_control_pane_g2_ParamLimits

0x70fd,	// (0x0000745e) eswt_control_pane_g2

0x710a,	// (0x0000746b) eswt_control_pane_g3_ParamLimits

0x710a,	// (0x0000746b) eswt_control_pane_g3

0x7117,	// (0x00007478) eswt_control_pane_g4_ParamLimits

0x7117,	// (0x00007478) eswt_control_pane_g4

0x0003,

0xfbfc,	// (0x0000ff5d) eswt_control_pane_g_ParamLimits

0xfbfc,	// (0x0000ff5d) eswt_control_pane_g

0x107a,	// (0x000013db) bg_button_pane_ParamLimits

0x107a,	// (0x000013db) bg_button_pane

0x0850,	// (0x00000bb1) common_borders_pane_copy2_ParamLimits

0x0850,	// (0x00000bb1) common_borders_pane_copy2

0x7124,	// (0x00007485) control_button_pane_g1_ParamLimits

0x7124,	// (0x00007485) control_button_pane_g1

0x7130,	// (0x00007491) control_button_pane_g2_ParamLimits

0x7130,	// (0x00007491) control_button_pane_g2

0x713c,	// (0x0000749d) control_button_pane_g3_ParamLimits

0x713c,	// (0x0000749d) control_button_pane_g3

0x0002,

0xfc05,	// (0x0000ff66) control_button_pane_g_ParamLimits

0xfc05,	// (0x0000ff66) control_button_pane_g

0x7150,	// (0x000074b1) control_button_pane_t1

0x715e,	// (0x000074bf) control_button_pane_t2

0x0001,

0xfc0c,	// (0x0000ff6d) control_button_pane_t

0x3427,	// (0x00003788) bg_button_pane_g1

0x342f,	// (0x00003790) bg_button_pane_g2

0x3437,	// (0x00003798) bg_button_pane_g3

0x343f,	// (0x000037a0) bg_button_pane_g4

0x3447,	// (0x000037a8) bg_button_pane_g5

0x344f,	// (0x000037b0) bg_button_pane_g6

0x3457,	// (0x000037b8) bg_button_pane_g7

0x345f,	// (0x000037c0) bg_button_pane_g8

0x3467,	// (0x000037c8) bg_button_pane_g9

0x0008,

0xf866,	// (0x0000fbc7) bg_button_pane_g

0x61ed,	// (0x0000654e) common_borders_pane_ParamLimits

0x61ed,	// (0x0000654e) common_borders_pane

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy1_ParamLimits

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy1

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy1_ParamLimits

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy1

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy1_ParamLimits

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy1

0x7117,	// (0x00007478) eswt_control_pane_g4_copy1_ParamLimits

0x7117,	// (0x00007478) eswt_control_pane_g4_copy1

0x6228,	// (0x00006589) bg_eswt_ctrl_canvas_pane_g1

0x61ed,	// (0x0000654e) common_borders_pane_cp2_ParamLimits

0x61ed,	// (0x0000654e) common_borders_pane_cp2

0x61ed,	// (0x0000654e) common_borders_pane_cp3_ParamLimits

0x61ed,	// (0x0000654e) common_borders_pane_cp3

0x716c,	// (0x000074cd) separator_horizontal_pane

0x7174,	// (0x000074d5) separator_vertical_pane

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy2_ParamLimits

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy2

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy2_ParamLimits

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy2

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy2_ParamLimits

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy2

0x7117,	// (0x00007478) eswt_control_pane_g4_copy2_ParamLimits

0x7117,	// (0x00007478) eswt_control_pane_g4_copy2

0xf389,	// (0x0000f6ea) common_borders_pane_cp4

0x717d,	// (0x000074de) separator_horizontal_pane_g1

0x7186,	// (0x000074e7) separator_horizontal_pane_g2

0x718f,	// (0x000074f0) separator_horizontal_pane_g3

0x0002,

0xfc11,	// (0x0000ff72) separator_horizontal_pane_g

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy3_ParamLimits

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy3

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy3_ParamLimits

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy3

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy3_ParamLimits

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy3

0x7117,	// (0x00007478) eswt_control_pane_g4_copy3_ParamLimits

0x7117,	// (0x00007478) eswt_control_pane_g4_copy3

0xf389,	// (0x0000f6ea) common_borders_pane_cp5

0x7198,	// (0x000074f9) separator_vertical_pane_g1

0x71a1,	// (0x00007502) separator_vertical_pane_g2

0x71aa,	// (0x0000750b) separator_vertical_pane_g3

0x0002,

0xfc18,	// (0x0000ff79) separator_vertical_pane_g

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy4_ParamLimits

0x70f0,	// (0x00007451) eswt_control_pane_g1_copy4

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy4_ParamLimits

0x70fd,	// (0x0000745e) eswt_control_pane_g2_copy4

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy4_ParamLimits

0x710a,	// (0x0000746b) eswt_control_pane_g3_copy4

0x7117,	// (0x00007478) eswt_control_pane_g4_copy4_ParamLimits

0x7117,	// (0x00007478) eswt_control_pane_g4_copy4

0xd7f3,	// (0x0000db54) eswt_ctrl_combo_button_pane

0xd7fb,	// (0x0000db5c) eswt_ctrl_input_pane

0xd803,	// (0x0000db64) popup_choice_list_window_cp70

0xd80b,	// (0x0000db6c) eswt_ctrl_input_pane_t1

0xf389,	// (0x0000f6ea) input_focus_pane_cp70

0x61ed,	// (0x0000654e) bg_button_pane_cp70_ParamLimits

0x61ed,	// (0x0000654e) bg_button_pane_cp70

0xd819,	// (0x0000db7a) eswt_ctrl_combo_button_pane_g1

0x71e1,	// (0x00007542) wait_bar_pane_cp70

0x35ba,	// (0x0000391b) bg_popup_window_pane_cp70_ParamLimits

0x35ba,	// (0x0000391b) bg_popup_window_pane_cp70

0x71e9,	// (0x0000754a) popup_eswt_tasktip_window_t1

0x71ff,	// (0x00007560) wait_bar_pane_cp71_ParamLimits

0x71ff,	// (0x00007560) wait_bar_pane_cp71

0x720b,	// (0x0000756c) grid_eswt_app_pane

0x1853,	// (0x00001bb4) scroll_pane_cp70

0xd821,	// (0x0000db82) cell_eswt_app_pane_ParamLimits

0xd821,	// (0x0000db82) cell_eswt_app_pane

0xd853,	// (0x0000dbb4) cell_eswt_app_pane_g1_ParamLimits

0xd853,	// (0x0000dbb4) cell_eswt_app_pane_g1

0xd882,	// (0x0000dbe3) cell_eswt_app_pane_g2_ParamLimits

0xd882,	// (0x0000dbe3) cell_eswt_app_pane_g2

0x0001,

0xfc1f,	// (0x0000ff80) cell_eswt_app_pane_g_ParamLimits

0xfc1f,	// (0x0000ff80) cell_eswt_app_pane_g

0xd8ab,	// (0x0000dc0c) cell_eswt_app_pane_t1_ParamLimits

0xd8ab,	// (0x0000dc0c) cell_eswt_app_pane_t1

0x72d0,	// (0x00007631) grid_highlight_pane_cp70_ParamLimits

0x72d0,	// (0x00007631) grid_highlight_pane_cp70

0x4d78,	// (0x000050d9) set_content_pane_g1

0x2606,	// (0x00002967) status_small_volume_pane

0x72dc,	// (0x0000763d) status_small_volume_pane_g1

0x72e4,	// (0x00007645) volume_small2_pane

0x72ed,	// (0x0000764e) volume_small2_pane_g1

0x72f6,	// (0x00007657) volume_small2_pane_g2

0x72ff,	// (0x00007660) volume_small2_pane_g3

0x7308,	// (0x00007669) volume_small2_pane_g4

0x7311,	// (0x00007672) volume_small2_pane_g5

0x731a,	// (0x0000767b) volume_small2_pane_g6

0x7323,	// (0x00007684) volume_small2_pane_g7

0x732c,	// (0x0000768d) volume_small2_pane_g8

0x7335,	// (0x00007696) volume_small2_pane_g9

0x733e,	// (0x0000769f) volume_small2_pane_g10

0x0009,

0xfc24,	// (0x0000ff85) volume_small2_pane_g

0x6830,	// (0x00006b91) fep_vkb_top_text_pane_g1_ParamLimits

0xd763,	// (0x0000dac4) fep_vkb_top_text_pane_t1_ParamLimits

0x6b77,	// (0x00006ed8) popup_preview_fixed_window_g3_ParamLimits

0x6b77,	// (0x00006ed8) popup_preview_fixed_window_g3

0xc734,	// (0x0000ca95) popup_toolbar_trans_pane

0xd07f,	// (0x0000d3e0) aid_height_set_list_ParamLimits

0x4c2e,	// (0x00004f8f) aid_size_parent_ParamLimits

0x283d,	// (0x00002b9e) list_highlight_pane_cp2_ParamLimits

0x4d78,	// (0x000050d9) set_content_pane_g1_ParamLimits

0xd274,	// (0x0000d5d5) list_single_image_pane_ParamLimits

0xd274,	// (0x0000d5d5) list_single_image_pane

0xd8dd,	// (0x0000dc3e) aid_size_cell_image_ParamLimits

0xd8dd,	// (0x0000dc3e) aid_size_cell_image

0xd8ea,	// (0x0000dc4b) grid_single_image_pane_ParamLimits

0xd8ea,	// (0x0000dc4b) grid_single_image_pane

0x10a0,	// (0x00001401) list_single_image_pane_g1_ParamLimits

0x10a0,	// (0x00001401) list_single_image_pane_g1

0x10ac,	// (0x0000140d) list_single_image_pane_g2_ParamLimits

0x10ac,	// (0x0000140d) list_single_image_pane_g2

0x0001,

0xfc39,	// (0x0000ff9a) list_single_image_pane_g_ParamLimits

0xfc39,	// (0x0000ff9a) list_single_image_pane_g

0x7362,	// (0x000076c3) list_single_image_pane_t1_ParamLimits

0x7362,	// (0x000076c3) list_single_image_pane_t1

0xd8f8,	// (0x0000dc59) cell_image_list_pane_ParamLimits

0xd8f8,	// (0x0000dc59) cell_image_list_pane

0xd912,	// (0x0000dc73) cell_image_list_pane_g1

0xd91b,	// (0x0000dc7c) cell_image_list_pane_g2

0x0001,

0xfc3e,	// (0x0000ff9f) cell_image_list_pane_g

0x73a0,	// (0x00007701) aid_size_cell_tb_trans_pane

0x107a,	// (0x000013db) bg_tb_trans_pane

0x73b2,	// (0x00007713) grid_tb_trans_pane

0x3427,	// (0x00003788) bg_tb_trans_pane_g1

0x342f,	// (0x00003790) bg_tb_trans_pane_g2

0x3437,	// (0x00003798) bg_tb_trans_pane_g3

0x343f,	// (0x000037a0) bg_tb_trans_pane_g4

0x3447,	// (0x000037a8) bg_tb_trans_pane_g5

0x345f,	// (0x000037c0) bg_tb_trans_pane_g6

0x3467,	// (0x000037c8) bg_tb_trans_pane_g7

0x344f,	// (0x000037b0) bg_tb_trans_pane_g8

0x3457,	// (0x000037b8) bg_tb_trans_pane_g9

0x0008,

0xfc43,	// (0x0000ffa4) bg_tb_trans_pane_g

0x73c6,	// (0x00007727) cell_toolbar_trans_pane_ParamLimits

0x73c6,	// (0x00007727) cell_toolbar_trans_pane

0x6228,	// (0x00006589) cell_toolbar_trans_pane_g1

0xd4a6,	// (0x0000d807) list_form2_midp_pane_t1

0xd4b4,	// (0x0000d815) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0000fe4d) list_form2_midp_pane_t

0x5e0f,	// (0x00006170) scroll_pane_cp51_ParamLimits

0x602c,	// (0x0000638d) form2_midp_wait_pane_g1

0x6035,	// (0x00006396) form2_midp_wait_pane_g2

0x603e,	// (0x0000639f) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0000fe62) form2_midp_wait_pane_g

0x01ae,	// (0x0000050f) list_highlight_pane_cp21_ParamLimits

0x6082,	// (0x000063e3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6091,	// (0x000063f2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4e5b,	// (0x000051bc) list_single_2graphic_im_pane_ParamLimits

0x4e5b,	// (0x000051bc) list_single_2graphic_im_pane

0xd924,	// (0x0000dc85) list_single_2graphic_im_pane_g1_ParamLimits

0xd924,	// (0x0000dc85) list_single_2graphic_im_pane_g1

0xd935,	// (0x0000dc96) list_single_2graphic_im_pane_g2_ParamLimits

0xd935,	// (0x0000dc96) list_single_2graphic_im_pane_g2

0xd941,	// (0x0000dca2) list_single_2graphic_im_pane_g3_ParamLimits

0xd941,	// (0x0000dca2) list_single_2graphic_im_pane_g3

0x0003,

0xfc56,	// (0x0000ffb7) list_single_2graphic_im_pane_g_ParamLimits

0xfc56,	// (0x0000ffb7) list_single_2graphic_im_pane_g

0xd955,	// (0x0000dcb6) list_single_2graphic_im_pane_t1_ParamLimits

0xd955,	// (0x0000dcb6) list_single_2graphic_im_pane_t1

0x6b83,	// (0x00006ee4) list_single_graphic_2heading_pane_fp_ParamLimits

0x6b83,	// (0x00006ee4) list_single_graphic_2heading_pane_fp

0x6beb,	// (0x00006f4c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6beb,	// (0x00006f4c) list_single_graphic_2heading_pane_fp_g1

0x6b9c,	// (0x00006efd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6b9c,	// (0x00006efd) list_single_graphic_2heading_pane_fp_g2

0x6ba8,	// (0x00006f09) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6ba8,	// (0x00006f09) list_single_graphic_2heading_pane_fp_g3

0x6bb4,	// (0x00006f15) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6bb4,	// (0x00006f15) list_single_graphic_2heading_pane_fp_g4

0x6bc8,	// (0x00006f29) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6bc8,	// (0x00006f29) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0000fee5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0000fee5) list_single_graphic_2heading_pane_fp_g

0x745a,	// (0x000077bb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x745a,	// (0x000077bb) list_single_graphic_2heading_pane_fp_t1

0x6c23,	// (0x00006f84) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6c23,	// (0x00006f84) list_single_graphic_2heading_pane_fp_t2

0x7470,	// (0x000077d1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7470,	// (0x000077d1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5f,	// (0x0000ffc0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5f,	// (0x0000ffc0) list_single_graphic_2heading_pane_fp_t

0x646c,	// (0x000067cd) fep_hwr_write_pane_g5_ParamLimits

0x646c,	// (0x000067cd) fep_hwr_write_pane_g5

0x6478,	// (0x000067d9) fep_hwr_write_pane_g6_ParamLimits

0x6478,	// (0x000067d9) fep_hwr_write_pane_g6

0x70bf,	// (0x00007420) eswt_shell_pane_ParamLimits

0x35ba,	// (0x0000391b) bg_popup_window_pane_cp18_ParamLimits

0x4ad4,	// (0x00004e35) heading_pane_cp70

0x71e9,	// (0x0000754a) popup_eswt_tasktip_window_t1_ParamLimits

0xc7f7,	// (0x0000cb58) aid_touch_tab_arrow_left

0xc80d,	// (0x0000cb6e) aid_touch_tab_arrow_right

0xb1fa,	// (0x0000b55b) title_pane_g3_ParamLimits

0xb1fa,	// (0x0000b55b) title_pane_g3

0x0f49,	// (0x000012aa) set_value_pane_g1

0xc734,	// (0x0000ca95) popup_toolbar_trans_pane_ParamLimits

0x73a0,	// (0x00007701) aid_size_cell_tb_trans_pane_ParamLimits

0x107a,	// (0x000013db) bg_tb_trans_pane_ParamLimits

0x73b2,	// (0x00007713) grid_tb_trans_pane_ParamLimits

0x04e2,	// (0x00000843) cont_note_pane_ParamLimits

0x04e2,	// (0x00000843) cont_note_pane

0x0850,	// (0x00000bb1) cont_snote2_single_text_pane_ParamLimits

0x0850,	// (0x00000bb1) cont_snote2_single_text_pane

0x0850,	// (0x00000bb1) cont_snote2_single_graphic_pane_ParamLimits

0x0850,	// (0x00000bb1) cont_snote2_single_graphic_pane

0x3c2b,	// (0x00003f8c) cont_note_wait_pane_ParamLimits

0x3c2b,	// (0x00003f8c) cont_note_wait_pane

0x3c2b,	// (0x00003f8c) cont_note_image_pane_ParamLimits

0x3c2b,	// (0x00003f8c) cont_note_image_pane

0x7486,	// (0x000077e7) popup_note2_window_g1_ParamLimits

0x7486,	// (0x000077e7) popup_note2_window_g1

0x74b7,	// (0x00007818) popup_note2_window_t1_ParamLimits

0x74b7,	// (0x00007818) popup_note2_window_t1

0x74fc,	// (0x0000785d) popup_note2_window_t2_ParamLimits

0x74fc,	// (0x0000785d) popup_note2_window_t2

0x7541,	// (0x000078a2) popup_note2_window_t3_ParamLimits

0x7541,	// (0x000078a2) popup_note2_window_t3

0x7586,	// (0x000078e7) popup_note2_window_t4_ParamLimits

0x7586,	// (0x000078e7) popup_note2_window_t4

0x0566,	// (0x000008c7) popup_note2_window_t5_ParamLimits

0x0566,	// (0x000008c7) popup_note2_window_t5

0x0004,

0xfc6b,	// (0x0000ffcc) popup_note2_window_t_ParamLimits

0xfc6b,	// (0x0000ffcc) popup_note2_window_t

0x75b5,	// (0x00007916) popup_note2_image_window_g1_ParamLimits

0x75b5,	// (0x00007916) popup_note2_image_window_g1

0x75c1,	// (0x00007922) popup_note2_image_window_g2_ParamLimits

0x75c1,	// (0x00007922) popup_note2_image_window_g2

0x0001,

0xfc76,	// (0x0000ffd7) popup_note2_image_window_g_ParamLimits

0xfc76,	// (0x0000ffd7) popup_note2_image_window_g

0x75d3,	// (0x00007934) popup_note2_image_window_t1_ParamLimits

0x75d3,	// (0x00007934) popup_note2_image_window_t1

0x75eb,	// (0x0000794c) popup_note2_image_window_t2_ParamLimits

0x75eb,	// (0x0000794c) popup_note2_image_window_t2

0x7603,	// (0x00007964) popup_note2_image_window_t3_ParamLimits

0x7603,	// (0x00007964) popup_note2_image_window_t3

0x0002,

0xfc7b,	// (0x0000ffdc) popup_note2_image_window_t_ParamLimits

0xfc7b,	// (0x0000ffdc) popup_note2_image_window_t

0x3c39,	// (0x00003f9a) popup_note2_wait_window_g1_ParamLimits

0x3c39,	// (0x00003f9a) popup_note2_wait_window_g1

0x761f,	// (0x00007980) popup_note2_wait_window_g2_ParamLimits

0x761f,	// (0x00007980) popup_note2_wait_window_g2

0x3c51,	// (0x00003fb2) popup_note2_wait_window_g3_ParamLimits

0x3c51,	// (0x00003fb2) popup_note2_wait_window_g3

0x0002,

0xfc82,	// (0x0000ffe3) popup_note2_wait_window_g_ParamLimits

0xfc82,	// (0x0000ffe3) popup_note2_wait_window_g

0x762b,	// (0x0000798c) popup_note2_wait_window_t1_ParamLimits

0x762b,	// (0x0000798c) popup_note2_wait_window_t1

0x7649,	// (0x000079aa) popup_note2_wait_window_t2_ParamLimits

0x7649,	// (0x000079aa) popup_note2_wait_window_t2

0x7667,	// (0x000079c8) popup_note2_wait_window_t3_ParamLimits

0x7667,	// (0x000079c8) popup_note2_wait_window_t3

0x7679,	// (0x000079da) popup_note2_wait_window_t4_ParamLimits

0x7679,	// (0x000079da) popup_note2_wait_window_t4

0x0003,

0xfc89,	// (0x0000ffea) popup_note2_wait_window_t_ParamLimits

0xfc89,	// (0x0000ffea) popup_note2_wait_window_t

0x768b,	// (0x000079ec) wait_bar2_pane_ParamLimits

0x768b,	// (0x000079ec) wait_bar2_pane

0x76a3,	// (0x00007a04) popup_snote2_single_text_window_g1_ParamLimits

0x76a3,	// (0x00007a04) popup_snote2_single_text_window_g1

0x76cb,	// (0x00007a2c) popup_snote2_single_text_window_t1_ParamLimits

0x76cb,	// (0x00007a2c) popup_snote2_single_text_window_t1

0x7717,	// (0x00007a78) popup_snote2_single_text_window_t2_ParamLimits

0x7717,	// (0x00007a78) popup_snote2_single_text_window_t2

0x7763,	// (0x00007ac4) popup_snote2_single_text_window_t3_ParamLimits

0x7763,	// (0x00007ac4) popup_snote2_single_text_window_t3

0x77a4,	// (0x00007b05) popup_snote2_single_text_window_t4_ParamLimits

0x77a4,	// (0x00007b05) popup_snote2_single_text_window_t4

0x77da,	// (0x00007b3b) popup_snote2_single_text_window_t5_ParamLimits

0x77da,	// (0x00007b3b) popup_snote2_single_text_window_t5

0x0004,

0xfc92,	// (0x0000fff3) popup_snote2_single_text_window_t_ParamLimits

0xfc92,	// (0x0000fff3) popup_snote2_single_text_window_t

0x7805,	// (0x00007b66) popup_snote2_single_graphic_window_g1_ParamLimits

0x7805,	// (0x00007b66) popup_snote2_single_graphic_window_g1

0x782d,	// (0x00007b8e) popup_snote2_single_graphic_window_g2_ParamLimits

0x782d,	// (0x00007b8e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9d,	// (0x0000fffe) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9d,	// (0x0000fffe) popup_snote2_single_graphic_window_g

0x7855,	// (0x00007bb6) popup_snote2_single_graphic_window_t1_ParamLimits

0x7855,	// (0x00007bb6) popup_snote2_single_graphic_window_t1

0x78a1,	// (0x00007c02) popup_snote2_single_graphic_window_t2_ParamLimits

0x78a1,	// (0x00007c02) popup_snote2_single_graphic_window_t2

0x7763,	// (0x00007ac4) popup_snote2_single_graphic_window_t3_ParamLimits

0x7763,	// (0x00007ac4) popup_snote2_single_graphic_window_t3

0x77a4,	// (0x00007b05) popup_snote2_single_graphic_window_t4_ParamLimits

0x77a4,	// (0x00007b05) popup_snote2_single_graphic_window_t4

0x77da,	// (0x00007b3b) popup_snote2_single_graphic_window_t5_ParamLimits

0x77da,	// (0x00007b3b) popup_snote2_single_graphic_window_t5

0x0004,

0xfca2,	// (0x00010003) popup_snote2_single_graphic_window_t_ParamLimits

0xfca2,	// (0x00010003) popup_snote2_single_graphic_window_t

0x5c68,	// (0x00005fc9) clock_nsta_pane_cp2_t1

0x5c68,	// (0x00005fc9) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0000fe23) clock_nsta_pane_cp2_t

0x1094,	// (0x000013f5) form_field_data_wide_pane_g1_ParamLimits

0x10a0,	// (0x00001401) form_field_data_wide_pane_g2_ParamLimits

0x10a0,	// (0x00001401) form_field_data_wide_pane_g2

0x10ac,	// (0x0000140d) form_field_data_wide_pane_g3_ParamLimits

0x10ac,	// (0x0000140d) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0000f9f3) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0000f9f3) form_field_data_wide_pane_g

0xd3ae,	// (0x0000d70f) grid_touch_3_pane_ParamLimits

0xd3ae,	// (0x0000d70f) grid_touch_3_pane

0xd986,	// (0x0000dce7) cell_touch_3_pane_ParamLimits

0xd986,	// (0x0000dce7) cell_touch_3_pane

0x6228,	// (0x00006589) cell_touch_3_pane_g1

0x6228,	// (0x00006589) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0000fea8) cell_touch_3_pane_g

0x0598,	// (0x000008f9) cont_query_data_pane

0x05a0,	// (0x00000901) cont_query_data_pane_cp1

0x7920,	// (0x00007c81) button_value_adjust_pane_cp7

0x7928,	// (0x00007c89) query_popup_pane_cp3

0x1b5a,	// (0x00001ebb) bg_popup_sub_pane_cp22_ParamLimits

0x1b70,	// (0x00001ed1) navi_navi_volume_pane_cp2

0x1b8b,	// (0x00001eec) popup_side_volume_key_window_g2

0x1b9a,	// (0x00001efb) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0000fa85) popup_side_volume_key_window_g

0x1bb7,	// (0x00001f18) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0000fa8c) popup_side_volume_key_window_t

0x2044,	// (0x000023a5) popup_side_volume_key_window_ParamLimits

0xb6dc,	// (0x0000ba3d) list_double_graphic_pane_g4_ParamLimits

0xb6dc,	// (0x0000ba3d) list_double_graphic_pane_g4

0xd24b,	// (0x0000d5ac) list_single_2heading_msg_pane_ParamLimits

0xd24b,	// (0x0000d5ac) list_single_2heading_msg_pane

0xd9d0,	// (0x0000dd31) list_single_2heading_msg_pane_g1_ParamLimits

0xd9d0,	// (0x0000dd31) list_single_2heading_msg_pane_g1

0xd9dc,	// (0x0000dd3d) list_single_2heading_msg_pane_g2_ParamLimits

0xd9dc,	// (0x0000dd3d) list_single_2heading_msg_pane_g2

0xd9ef,	// (0x0000dd50) list_single_2heading_msg_pane_g3_ParamLimits

0xd9ef,	// (0x0000dd50) list_single_2heading_msg_pane_g3

0xd9fb,	// (0x0000dd5c) list_single_2heading_msg_pane_g4_ParamLimits

0xd9fb,	// (0x0000dd5c) list_single_2heading_msg_pane_g4

0x0003,

0xfcad,	// (0x0001000e) list_single_2heading_msg_pane_g_ParamLimits

0xfcad,	// (0x0001000e) list_single_2heading_msg_pane_g

0xda13,	// (0x0000dd74) list_single_2heading_msg_pane_t1_ParamLimits

0xda13,	// (0x0000dd74) list_single_2heading_msg_pane_t1

0xda3b,	// (0x0000dd9c) list_single_2heading_msg_pane_t2_ParamLimits

0xda3b,	// (0x0000dd9c) list_single_2heading_msg_pane_t2

0xdaa6,	// (0x0000de07) list_single_2heading_msg_pane_t3_ParamLimits

0xdaa6,	// (0x0000de07) list_single_2heading_msg_pane_t3

0x7a19,	// (0x00007d7a) list_single_2heading_msg_pane_t4_ParamLimits

0x7a19,	// (0x00007d7a) list_single_2heading_msg_pane_t4

0x0003,

0xfcb6,	// (0x00010017) list_single_2heading_msg_pane_t_ParamLimits

0xfcb6,	// (0x00010017) list_single_2heading_msg_pane_t

0x0102,	// (0x00000463) title_pane_g4_ParamLimits

0x0102,	// (0x00000463) title_pane_g4

0x15b7,	// (0x00001918) title_pane_stacon_g3_ParamLimits

0x15b7,	// (0x00001918) title_pane_stacon_g3

0x741d,	// (0x0000777e) list_single_2graphic_im_pane_g4_ParamLimits

0x741d,	// (0x0000777e) list_single_2graphic_im_pane_g4

0x480d,	// (0x00004b6e) popup_side_volume_key_window_cp

0x52a0,	// (0x00005601) main_idle_act2_pane_t1

0x346f,	// (0x000037d0) toolbar_button_pane_g10

0xb587,	// (0x0000b8e8) popup_toolbar_window_cp1

0x5c59,	// (0x00005fba) clock_nsta_pane_cp_t1

0x5c59,	// (0x00005fba) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0000fe1e) clock_nsta_pane_cp_t

0x1b70,	// (0x00001ed1) navi_navi_volume_pane_cp2_ParamLimits

0x1b7f,	// (0x00001ee0) popup_side_volume_key_window_g1_ParamLimits

0x1b8b,	// (0x00001eec) popup_side_volume_key_window_g2_ParamLimits

0x1b9a,	// (0x00001efb) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0000fa85) popup_side_volume_key_window_g_ParamLimits

0x62a6,	// (0x00006607) fep_hwr_aid_pane

0x634f,	// (0x000066b0) bg_fep_hwr_top_pane_g4_ParamLimits

0x636f,	// (0x000066d0) fep_hwr_top_pane_g1_ParamLimits

0x6381,	// (0x000066e2) fep_hwr_top_pane_g2_ParamLimits

0x6393,	// (0x000066f4) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0000fe73) fep_hwr_top_pane_g_ParamLimits

0x63a8,	// (0x00006709) fep_hwr_top_text_pane_ParamLimits

0x45c2,	// (0x00004923) aid_touch_tab_arrow_arrow_2

0x45cb,	// (0x0000492c) aid_touch_tab_arrow_left_2

0x62ba,	// (0x0000661b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x62f1,	// (0x00006652) fep_hwr_prediction_pane

0x662a,	// (0x0000698b) fep_vkb_prediction_pane

0xd743,	// (0x0000daa4) fep_vkb_side_pane_g3_ParamLimits

0xd743,	// (0x0000daa4) fep_vkb_side_pane_g3

0x66dc,	// (0x00006a3d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6de5,	// (0x00007146) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6df2,	// (0x00007153) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbc,	// (0x0000ff1d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7a3e,	// (0x00007d9f) fep_hwr_prediction_pane_g1

0x7a48,	// (0x00007da9) fep_hwr_prediction_pane_g2

0x7a50,	// (0x00007db1) fep_hwr_prediction_pane_g3

0x7a58,	// (0x00007db9) fep_hwr_prediction_pane_g4

0x0003,

0xfcbf,	// (0x00010020) fep_hwr_prediction_pane_g

0x7a3e,	// (0x00007d9f) fep_vkb_prediction_pane_g1

0x7a60,	// (0x00007dc1) fep_vkb_prediction_pane_g2

0x7a68,	// (0x00007dc9) fep_vkb_prediction_pane_g3

0x7a70,	// (0x00007dd1) fep_vkb_prediction_pane_g4

0x0003,

0xfcc8,	// (0x00010029) fep_vkb_prediction_pane_g

0x4b95,	// (0x00004ef6) slider_set_pane_g3

0x4ba9,	// (0x00004f0a) slider_set_pane_g4

0x4bc1,	// (0x00004f22) slider_set_pane_g5

0x4b95,	// (0x00004ef6) slider_set_pane_g6

0x4bd7,	// (0x00004f38) slider_set_pane_g7

0x4dbf,	// (0x00005120) slider_form_pane_g3

0x4dc8,	// (0x00005129) slider_form_pane_g4

0x4dd0,	// (0x00005131) slider_form_pane_g5

0x4dbf,	// (0x00005120) slider_form_pane_g6

0xd1ee,	// (0x0000d54f) slider_form_pane_g7

0x55ab,	// (0x0000590c) slider_set_pane_vc_g3

0x55b4,	// (0x00005915) slider_set_pane_vc_g4

0x55bd,	// (0x0000591e) slider_set_pane_vc_g5

0x55ab,	// (0x0000590c) slider_set_pane_vc_g6

0x55c6,	// (0x00005927) slider_set_pane_vc_g7

0x55ab,	// (0x0000590c) slider_form_pane_vc_g1

0x55b4,	// (0x00005915) slider_form_pane_vc_g2

0x55bd,	// (0x0000591e) slider_form_pane_vc_g3

0x55ab,	// (0x0000590c) slider_form_pane_vc_g4

0x594d,	// (0x00005cae) slider_form_pane_vc_g5

0x0004,

0xfa96,	// (0x0000fdf7) slider_form_pane_vc_g

0xf389,	// (0x0000f6ea) main_idle_act3_pane

0x7a78,	// (0x00007dd9) ai3_links_pane

0xdb14,	// (0x0000de75) popup_ai3_data_window_ParamLimits

0xdb14,	// (0x0000de75) popup_ai3_data_window

0xf389,	// (0x0000f6ea) grid_ai3_links_pane

0xdb32,	// (0x0000de93) cell_ai3_links_pane_ParamLimits

0xdb32,	// (0x0000de93) cell_ai3_links_pane

0x7ab9,	// (0x00007e1a) bg_popup_sub_pane_cp11

0x7ac6,	// (0x00007e27) cell_ai3_links_pane_g1

0xf389,	// (0x0000f6ea) bg_popup_sub_pane_cp12

0x7aeb,	// (0x00007e4c) heading_ai3_data_pane

0x7af3,	// (0x00007e54) list_ai3_gene_pane

0x7aff,	// (0x00007e60) popup_ai3_data_window_g1

0x7b07,	// (0x00007e68) heading_ai3_data_pane_g1

0x7b0f,	// (0x00007e70) heading_ai3_data_pane_t1

0x7b1d,	// (0x00007e7e) list_double_ai3_gene_pane_ParamLimits

0x7b1d,	// (0x00007e7e) list_double_ai3_gene_pane

0x7b2a,	// (0x00007e8b) list_single_ai3_gene_pane_ParamLimits

0x7b2a,	// (0x00007e8b) list_single_ai3_gene_pane

0x61ed,	// (0x0000654e) list_highlight_pane_cp7_ParamLimits

0x61ed,	// (0x0000654e) list_highlight_pane_cp7

0x7b37,	// (0x00007e98) list_single_a13_gene_pane_t1_ParamLimits

0x7b37,	// (0x00007e98) list_single_a13_gene_pane_t1

0x7b4e,	// (0x00007eaf) list_single_ai3_gene_pane_g1

0x7b57,	// (0x00007eb8) list_single_ai3_gene_pane_g2

0x0001,

0xfcd1,	// (0x00010032) list_single_ai3_gene_pane_g

0x7b5f,	// (0x00007ec0) list_double_ai3_gene_pane_g1_ParamLimits

0x7b5f,	// (0x00007ec0) list_double_ai3_gene_pane_g1

0x7b6b,	// (0x00007ecc) list_double_ai3_gene_pane_t1_ParamLimits

0x7b6b,	// (0x00007ecc) list_double_ai3_gene_pane_t1

0x7b87,	// (0x00007ee8) list_double_ai3_gene_pane_t2_ParamLimits

0x7b87,	// (0x00007ee8) list_double_ai3_gene_pane_t2

0x7b9c,	// (0x00007efd) list_double_ai3_gene_pane_t3_ParamLimits

0x7b9c,	// (0x00007efd) list_double_ai3_gene_pane_t3

0x0002,

0xfcd6,	// (0x00010037) list_double_ai3_gene_pane_t_ParamLimits

0xfcd6,	// (0x00010037) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7939,	// (0x00007c9a) aid_size_min_col_2

0xd9ba,	// (0x0000dd1b) aid_size_min_msg_ParamLimits

0xd9ba,	// (0x0000dd1b) aid_size_min_msg

0xd757,	// (0x0000dab8) fep_vkb_top_text_pane_g2_ParamLimits

0xd757,	// (0x0000dab8) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0000fea3) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0000fea3) fep_vkb_top_text_pane_g

0xf389,	// (0x0000f6ea) main_hc_apps_shell_pane

0x7bb9,	// (0x00007f1a) grid_hc_apps_pane_ParamLimits

0x7bb9,	// (0x00007f1a) grid_hc_apps_pane

0x7bc8,	// (0x00007f29) list_hc_apps_pane

0x7bd0,	// (0x00007f31) scroll_pane_cp37_ParamLimits

0x7bd0,	// (0x00007f31) scroll_pane_cp37

0xdb4c,	// (0x0000dead) cell_hc_apps_pane_ParamLimits

0xdb4c,	// (0x0000dead) cell_hc_apps_pane

0xdc16,	// (0x0000df77) cell_hc_apps_pane_g1_ParamLimits

0xdc16,	// (0x0000df77) cell_hc_apps_pane_g1

0x7cc5,	// (0x00008026) cell_hc_apps_pane_g2_ParamLimits

0x7cc5,	// (0x00008026) cell_hc_apps_pane_g2

0x7ce1,	// (0x00008042) cell_hc_apps_pane_g3_ParamLimits

0x7ce1,	// (0x00008042) cell_hc_apps_pane_g3

0x0002,

0xfcdd,	// (0x0001003e) cell_hc_apps_pane_g_ParamLimits

0xfcdd,	// (0x0001003e) cell_hc_apps_pane_g

0xdc43,	// (0x0000dfa4) cell_hc_apps_pane_t1_ParamLimits

0xdc43,	// (0x0000dfa4) cell_hc_apps_pane_t1

0x04e2,	// (0x00000843) grid_highlight_pane_cp10_ParamLimits

0x04e2,	// (0x00000843) grid_highlight_pane_cp10

0xdc83,	// (0x0000dfe4) list_single_hc_apps_pane_ParamLimits

0xdc83,	// (0x0000dfe4) list_single_hc_apps_pane

0xdcbd,	// (0x0000e01e) list_single_hc_apps_pane_g1

0xdcd6,	// (0x0000e037) list_single_hc_apps_pane_g2

0x0001,

0xfce4,	// (0x00010045) list_single_hc_apps_pane_g

0xdcef,	// (0x0000e050) list_single_hc_apps_pane_g2_copy1

0xdd0b,	// (0x0000e06c) list_single_hc_apps_pane_t1

0x01ae,	// (0x0000050f) bg_set_opt_pane_cp_ParamLimits

0x01fa,	// (0x0000055b) setting_slider_pane_t1_ParamLimits

0x0210,	// (0x00000571) setting_slider_pane_t2_ParamLimits

0x022a,	// (0x0000058b) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0000f8db) setting_slider_pane_t_ParamLimits

0x0242,	// (0x000005a3) slider_set_pane_ParamLimits

0x2696,	// (0x000029f7) control_pane_g5_ParamLimits

0x2696,	// (0x000029f7) control_pane_g5

0x4b7c,	// (0x00004edd) slider_set_pane_g1_ParamLimits

0x4b89,	// (0x00004eea) slider_set_pane_g2_ParamLimits

0x4b95,	// (0x00004ef6) slider_set_pane_g3_ParamLimits

0x4ba9,	// (0x00004f0a) slider_set_pane_g4_ParamLimits

0x4bc1,	// (0x00004f22) slider_set_pane_g5_ParamLimits

0x4b95,	// (0x00004ef6) slider_set_pane_g6_ParamLimits

0x4bd7,	// (0x00004f38) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0000fcc5) slider_set_pane_g_ParamLimits

0x2129,	// (0x0000248a) navi_icon_text_pane_ParamLimits

0xc7c1,	// (0x0000cb22) aid_fill_nsta_2_ParamLimits

0xc7f7,	// (0x0000cb58) aid_touch_tab_arrow_left_ParamLimits

0xc80d,	// (0x0000cb6e) aid_touch_tab_arrow_right_ParamLimits

0xc8a8,	// (0x0000cc09) clock_nsta_pane_ParamLimits

0xcf2b,	// (0x0000d28c) navi_icon_pane_g1_ParamLimits

0xcf37,	// (0x0000d298) navi_text_pane_t1_ParamLimits

0xd488,	// (0x0000d7e9) navi_icon_text_pane_g1_ParamLimits

0xd494,	// (0x0000d7f5) navi_icon_text_pane_t1_ParamLimits

0xdcbd,	// (0x0000e01e) list_single_hc_apps_pane_g1_ParamLimits

0xdcd6,	// (0x0000e037) list_single_hc_apps_pane_g2_ParamLimits

0xfce4,	// (0x00010045) list_single_hc_apps_pane_g_ParamLimits

0xdcef,	// (0x0000e050) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdd0b,	// (0x0000e06c) list_single_hc_apps_pane_t1_ParamLimits

0xb166,	// (0x0000b4c7) popup_toolbar2_fixed_window_ParamLimits

0xb166,	// (0x0000b4c7) popup_toolbar2_fixed_window

0xc72a,	// (0x0000ca8b) popup_toolbar2_float_window

0xf389,	// (0x0000f6ea) bg_popup_sub_pane_cp27

0x7dfe,	// (0x0000815f) grid_toolbar2_float_pane

0xf389,	// (0x0000f6ea) bg_popup_sub_pane_cp26

0x7dfe,	// (0x0000815f) grid_toolbar2_fixed_pane

0xdd39,	// (0x0000e09a) cell_toolbar2_fixed_pane_ParamLimits

0xdd39,	// (0x0000e09a) cell_toolbar2_fixed_pane

0xdd56,	// (0x0000e0b7) cell_toolbar2_fixed_pane_g1

0x7e1f,	// (0x00008180) toolbar2_fixed_button_pane

0x3427,	// (0x00003788) toolbar2_fixed_button_pane_g1

0x342f,	// (0x00003790) toolbar2_fixed_button_pane_g2

0x3437,	// (0x00003798) toolbar2_fixed_button_pane_g3

0x343f,	// (0x000037a0) toolbar2_fixed_button_pane_g4

0x3447,	// (0x000037a8) toolbar2_fixed_button_pane_g5

0x344f,	// (0x000037b0) toolbar2_fixed_button_pane_g6

0x3457,	// (0x000037b8) toolbar2_fixed_button_pane_g7

0x345f,	// (0x000037c0) toolbar2_fixed_button_pane_g8

0x3467,	// (0x000037c8) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0000fbc7) toolbar2_fixed_button_pane_g

0x7e27,	// (0x00008188) cell_toolbar2_float_pane_ParamLimits

0x7e27,	// (0x00008188) cell_toolbar2_float_pane

0x7e38,	// (0x00008199) cell_toolbar2_float_pane_g1

0x7e1f,	// (0x00008180) toolbar2_fixed_button_pane_cp

0xd63f,	// (0x0000d9a0) fep_vkb_accented_list_pane_ParamLimits

0xd63f,	// (0x0000d9a0) fep_vkb_accented_list_pane

0x6a4d,	// (0x00006dae) bg_popup_fep_shadow_pane_g9

0x22ad,	// (0x0000260e) bg_popup_fep_shadow_pane_cp3

0x1345,	// (0x000016a6) list_accented_list_pane

0x7e41,	// (0x000081a2) list_single_accented_list_pane_ParamLimits

0x7e41,	// (0x000081a2) list_single_accented_list_pane

0x22ad,	// (0x0000260e) list_highlight_pane_cp10

0x7e52,	// (0x000081b3) list_single_accented_list_pane_t1

0xc646,	// (0x0000c9a7) popup_slider_window_ParamLimits

0xc646,	// (0x0000c9a7) popup_slider_window

0x7930,	// (0x00007c91) aid_indentation_list_msg

0xde61,	// (0x0000e1c2) bg_popup_window_pane_cp19

0x7f8c,	// (0x000082ed) popup_slider_window_g1

0x7fa8,	// (0x00008309) popup_slider_window_g2

0x7fc4,	// (0x00008325) popup_slider_window_g3

0x0005,

0xfce9,	// (0x0001004a) popup_slider_window_g

0x8020,	// (0x00008381) popup_slider_window_t1

0x8094,	// (0x000083f5) small_volume_slider_vertical_pane

0x6228,	// (0x00006589) small_volume_slider_vertical_pane_g1

0x6228,	// (0x00006589) small_volume_slider_vertical_pane_g2

0x80b0,	// (0x00008411) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfb,	// (0x0001005c) small_volume_slider_vertical_pane_g

0xb0d0,	// (0x0000b431) area_side_right_pane_ParamLimits

0xb0d0,	// (0x0000b431) area_side_right_pane

0xdf19,	// (0x0000e27a) aid_size_side_button_ParamLimits

0xdf19,	// (0x0000e27a) aid_size_side_button

0xdf32,	// (0x0000e293) grid_sctrl_middle_pane_ParamLimits

0xdf32,	// (0x0000e293) grid_sctrl_middle_pane

0x80ed,	// (0x0000844e) sctrl_sk_bottom_pane

0x80fe,	// (0x0000845f) sctrl_sk_top_pane

0x8110,	// (0x00008471) aid_touch_sctrl_top

0x04e2,	// (0x00000843) bg_sctrl_sk_pane_ParamLimits

0x04e2,	// (0x00000843) bg_sctrl_sk_pane

0x811d,	// (0x0000847e) sctrl_sk_top_pane_g1

0x812a,	// (0x0000848b) sctrl_sk_top_pane_t1

0x8110,	// (0x00008471) aid_touch_sctrl_bottom

0x04e2,	// (0x00000843) bg_sctrl_sk_pane_cp_ParamLimits

0x04e2,	// (0x00000843) bg_sctrl_sk_pane_cp

0x8145,	// (0x000084a6) sctrl_sk_bottom_pane_g1

0x812a,	// (0x0000848b) sctrl_sk_bottom_pane_t1

0xdf4c,	// (0x0000e2ad) cell_sctrl_middle_pane_ParamLimits

0xdf4c,	// (0x0000e2ad) cell_sctrl_middle_pane

0xdf5f,	// (0x0000e2c0) aid_touch_sctrl_middle_ParamLimits

0xdf5f,	// (0x0000e2c0) aid_touch_sctrl_middle

0xdf6c,	// (0x0000e2cd) bg_sctrl_middle_pane_ParamLimits

0xdf6c,	// (0x0000e2cd) bg_sctrl_middle_pane

0x8213,	// (0x00008574) cell_sctrl_middle_pane_g1_ParamLimits

0x8213,	// (0x00008574) cell_sctrl_middle_pane_g1

0xdf7a,	// (0x0000e2db) cell_sctrl_middle_pane_g2_ParamLimits

0xdf7a,	// (0x0000e2db) cell_sctrl_middle_pane_g2

0x0001,

0xfd07,	// (0x00010068) cell_sctrl_middle_pane_g_ParamLimits

0xfd07,	// (0x00010068) cell_sctrl_middle_pane_g

0x3427,	// (0x00003788) bg_sctrl_middle_pane_g1

0x342f,	// (0x00003790) bg_sctrl_middle_pane_g2

0x3437,	// (0x00003798) bg_sctrl_middle_pane_g3

0x343f,	// (0x000037a0) bg_sctrl_middle_pane_g4

0x3447,	// (0x000037a8) bg_sctrl_middle_pane_g5

0x344f,	// (0x000037b0) bg_sctrl_middle_pane_g6

0x3457,	// (0x000037b8) bg_sctrl_middle_pane_g7

0x345f,	// (0x000037c0) bg_sctrl_middle_pane_g8

0x0007,

0xfd0c,	// (0x0001006d) bg_sctrl_middle_pane_g

0x3467,	// (0x000037c8) bg_sctrl_middle_pane_g8_copy1

0x3427,	// (0x00003788) bg_sctrl_sk_pane_g1

0x342f,	// (0x00003790) bg_sctrl_sk_pane_g2

0x3437,	// (0x00003798) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0000fbc7) bg_sctrl_sk_pane_g

0x0a0e,	// (0x00000d6f) aid_size_touch_scroll_bar

0x343f,	// (0x000037a0) bg_sctrl_sk_pane_g4

0x3447,	// (0x000037a8) bg_sctrl_sk_pane_g5

0x344f,	// (0x000037b0) bg_sctrl_sk_pane_g6

0x3457,	// (0x000037b8) bg_sctrl_sk_pane_g7

0x345f,	// (0x000037c0) bg_sctrl_sk_pane_g8

0x3467,	// (0x000037c8) bg_sctrl_sk_pane_g9

0x28ef,	// (0x00002c50) popup_fep_china_hwr2_fs_candidate_window

0xc102,	// (0x0000c463) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc102,	// (0x0000c463) popup_fep_china_hwr2_fs_control_window

0x66dc,	// (0x00006a3d) sctrl_sk_top_pane_g2

0x0001,

0xfd02,	// (0x00010063) sctrl_sk_top_pane_g

0xdf86,	// (0x0000e2e7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdf86,	// (0x0000e2e7) aid_fep_china_hwr2_fs_cell

0xdf9c,	// (0x0000e2fd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdf9c,	// (0x0000e2fd) bg_popup_fep_shadow_pane_cp4

0xdfb3,	// (0x0000e314) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdfb3,	// (0x0000e314) bg_popup_fep_shadow_pane_cp5

0xdfc5,	// (0x0000e326) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdfc5,	// (0x0000e326) popup_fep_china_hwr2_fs_control_bar_grid

0xdfd9,	// (0x0000e33a) popup_fep_china_hwr2_fs_control_funtion_grid

0x81e7,	// (0x00008548) aid_fep_china_hwr2_fs_candi_cell

0xf389,	// (0x0000f6ea) bg_popup_fep_shadow_pane_cp6

0x81f1,	// (0x00008552) popup_fep_china_hwr2_fs_candidate_grid

0xdfe1,	// (0x0000e342) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdfe1,	// (0x0000e342) cell_fep_china_hwr2_fs_funtion_grid

0x6228,	// (0x00006589) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8213,	// (0x00008574) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8213,	// (0x00008574) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8221,	// (0x00008582) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8221,	// (0x00008582) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1d,	// (0x0001007e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1d,	// (0x0001007e) cell_fep_china_hwr2_fs_funtion_grid_g

0xdff9,	// (0x0000e35a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdff9,	// (0x0000e35a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe00e,	// (0x0000e36f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe00e,	// (0x0000e36f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd22,	// (0x00010083) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd22,	// (0x00010083) cell_fep_china_hwr2_fs_funtion_grid_t

0x8268,	// (0x000085c9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8270,	// (0x000085d1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8278,	// (0x000085d9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd27,	// (0x00010088) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8280,	// (0x000085e1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8280,	// (0x000085e1) cell_fep_china_hwr2_fs_candidate_grid

0x829f,	// (0x00008600) popup_fep_china_hwr2_fs_candidate_grid_g20

0x82a7,	// (0x00008608) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6228,	// (0x00006589) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6228,	// (0x00006589) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0000fea8) cell_fep_china_hwr2_fs_candidate_grid_g

0x82af,	// (0x00008610) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2f5e,	// (0x000032bf) clock_nsta_pane_cp_24_ParamLimits

0x2f5e,	// (0x000032bf) clock_nsta_pane_cp_24

0x2fde,	// (0x0000333f) indicator_nsta_pane_cp_24_ParamLimits

0x2fde,	// (0x0000333f) indicator_nsta_pane_cp_24

0x4409,	// (0x0000476a) heading_pane_g1

0x0001,

0xf8cb,	// (0x0000fc2c) heading_pane_g

0x502f,	// (0x00005390) grid_sct_catagory_button_pane

0x5061,	// (0x000053c2) scroll_pane_cp5_ParamLimits

0x5e1b,	// (0x0000617c) button_value_adjust_pane_cp5_ParamLimits

0x5e1b,	// (0x0000617c) button_value_adjust_pane_cp5

0x5f21,	// (0x00006282) form2_midp_time_pane_ParamLimits

0x82bd,	// (0x0000861e) cell_sct_catagory_button_pane_ParamLimits

0x82bd,	// (0x0000861e) cell_sct_catagory_button_pane

0x61ed,	// (0x0000654e) bg_button_pane_cp01_ParamLimits

0x61ed,	// (0x0000654e) bg_button_pane_cp01

0x6228,	// (0x00006589) cell_sct_catagory_button_pane_g1

0xc6c7,	// (0x0000ca28) popup_tb_extension_window

0xe02a,	// (0x0000e38b) aid_size_cell_ext_ParamLimits

0xe02a,	// (0x0000e38b) aid_size_cell_ext

0x0850,	// (0x00000bb1) bg_tb_trans_pane_cp1_ParamLimits

0x0850,	// (0x00000bb1) bg_tb_trans_pane_cp1

0xe050,	// (0x0000e3b1) grid_tb_ext_pane_ParamLimits

0xe050,	// (0x0000e3b1) grid_tb_ext_pane

0xe090,	// (0x0000e3f1) cell_tb_ext_pane_ParamLimits

0xe090,	// (0x0000e3f1) cell_tb_ext_pane

0xe0ba,	// (0x0000e41b) cell_tb_ext_pane_g1_ParamLimits

0xe0ba,	// (0x0000e41b) cell_tb_ext_pane_g1

0x8353,	// (0x000086b4) cell_tb_ext_pane_t1

0x04e2,	// (0x00000843) list_highlight_pane_cp11_ParamLimits

0x04e2,	// (0x00000843) list_highlight_pane_cp11

0x000b,	// (0x0000036c) popup_uni_indicator_window_ParamLimits

0x000b,	// (0x0000036c) popup_uni_indicator_window

0x107a,	// (0x000013db) bg_popup_sub_pane_cp14

0x836e,	// (0x000086cf) list_uniindi_pane

0x837a,	// (0x000086db) uniindi_top_pane

0x04e2,	// (0x00000843) bg_uniindi_top_pane

0x839b,	// (0x000086fc) uniindi_top_pane_g1

0x83b1,	// (0x00008712) uniindi_top_pane_g2

0x0003,

0xfd2e,	// (0x0001008f) uniindi_top_pane_g

0x83db,	// (0x0000873c) uniindi_top_pane_t1

0x8407,	// (0x00008768) list_single_uniindi_pane_ParamLimits

0x8407,	// (0x00008768) list_single_uniindi_pane

0x6228,	// (0x00006589) bg_uniindi_top_pane_g1

0x8419,	// (0x0000877a) list_single_uniindi_pane_g1

0x842c,	// (0x0000878d) list_single_uniindi_pane_t1

0xf389,	// (0x0000f6ea) control_bg_pane

0x8451,	// (0x000087b2) bg_sctrl_sk_pane_cp1

0x845a,	// (0x000087bb) bg_sctrl_sk_pane_cp2

0x8463,	// (0x000087c4) control_bg_pane_g1

0x846c,	// (0x000087cd) control_bg_pane_g2

0x0001,

0xfd37,	// (0x00010098) control_bg_pane_g

0x5bed,	// (0x00005f4e) cell_indicator_nsta_pane_g1_ParamLimits

0xd3e1,	// (0x0000d742) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0000fe0c) cell_indicator_nsta_pane_g_ParamLimits

0x5fb1,	// (0x00006312) form2_midp_time_pane_t1_ParamLimits

0x6298,	// (0x000065f9) main_idle_act4_pane_ParamLimits

0x6298,	// (0x000065f9) main_idle_act4_pane

0xc6c7,	// (0x0000ca28) popup_tb_extension_window_ParamLimits

0xe078,	// (0x0000e3d9) tb_ext_find_pane_ParamLimits

0xe078,	// (0x0000e3d9) tb_ext_find_pane

0x8475,	// (0x000087d6) ai_gene_pane_1_cp1

0x23f6,	// (0x00002757) ai_gene_pane_2_cp1

0x847d,	// (0x000087de) list_single_idle_plugin_calendar_pane

0x8486,	// (0x000087e7) list_single_idle_plugin_notification_pane

0x848f,	// (0x000087f0) list_single_idle_plugin_player_pane

0xe0d7,	// (0x0000e438) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe0d7,	// (0x0000e438) list_single_idle_plugin_shortcut_pane

0xe0ff,	// (0x0000e460) main_idle_act4_pane_t1

0xe117,	// (0x0000e478) main_idle_act4_pane_t2

0x0001,

0xfd3c,	// (0x0001009d) main_idle_act4_pane_t

0xe12f,	// (0x0000e490) middle_sk_idle_act4_pane_ParamLimits

0xe12f,	// (0x0000e490) middle_sk_idle_act4_pane

0xe14b,	// (0x0000e4ac) popup_clock_digital_analogue_window_cp2

0xe172,	// (0x0000e4d3) shortcut_wheel_idle_act4_pane_ParamLimits

0xe172,	// (0x0000e4d3) shortcut_wheel_idle_act4_pane

0x6228,	// (0x00006589) shortcut_wheel_idle_act4_pane_g1

0x6228,	// (0x00006589) shortcut_wheel_idle_act4_pane_g2

0x6228,	// (0x00006589) shortcut_wheel_idle_act4_pane_g3

0x6228,	// (0x00006589) shortcut_wheel_idle_act4_pane_g4

0x6228,	// (0x00006589) shortcut_wheel_idle_act4_pane_g5

0x8522,	// (0x00008883) shortcut_wheel_idle_act4_pane_g6

0x852a,	// (0x0000888b) shortcut_wheel_idle_act4_pane_g7

0x8532,	// (0x00008893) shortcut_wheel_idle_act4_pane_g8

0x853a,	// (0x0000889b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd41,	// (0x000100a2) shortcut_wheel_idle_act4_pane_g

0x634f,	// (0x000066b0) middle_sk_idle_act4_pane_g1_ParamLimits

0x634f,	// (0x000066b0) middle_sk_idle_act4_pane_g1

0xe1ef,	// (0x0000e550) middle_sk_idle_act4_pane_g2_ParamLimits

0xe1ef,	// (0x0000e550) middle_sk_idle_act4_pane_g2

0x0001,

0xfd64,	// (0x000100c5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd64,	// (0x000100c5) middle_sk_idle_act4_pane_g

0xe207,	// (0x0000e568) middle_sk_idle_act4_pane_t1_ParamLimits

0xe207,	// (0x0000e568) middle_sk_idle_act4_pane_t1

0xe236,	// (0x0000e597) grid_ai_shortcut_pane_ParamLimits

0xe236,	// (0x0000e597) grid_ai_shortcut_pane

0xe253,	// (0x0000e5b4) list_highlight_pane_cp16_ParamLimits

0xe253,	// (0x0000e5b4) list_highlight_pane_cp16

0xe260,	// (0x0000e5c1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe260,	// (0x0000e5c1) list_single_idle_plugin_shortcut_pane_g1

0xe26c,	// (0x0000e5cd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe26c,	// (0x0000e5cd) list_single_idle_plugin_shortcut_pane_g2

0xe28a,	// (0x0000e5eb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe28a,	// (0x0000e5eb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd69,	// (0x000100ca) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd69,	// (0x000100ca) list_single_idle_plugin_shortcut_pane_g

0xe29f,	// (0x0000e600) cell_ai_shortcut_pane_ParamLimits

0xe29f,	// (0x0000e600) cell_ai_shortcut_pane

0xe2b5,	// (0x0000e616) cell_ai_shortcut_pane_g1_ParamLimits

0xe2b5,	// (0x0000e616) cell_ai_shortcut_pane_g1

0x8475,	// (0x000087d6) ai_gene_pane_1_cp2

0x866b,	// (0x000089cc) ai_gene_pane_2_cp2

0x8673,	// (0x000089d4) list_highlight_pane_cp15

0x867c,	// (0x000089dd) list_single_idle_plugin_calendar_pane_g1

0x8673,	// (0x000089d4) list_highlight_pane_cp17

0x8684,	// (0x000089e5) list_single_idle_plugin_calendar_pane_g1_copy1

0x868c,	// (0x000089ed) list_single_idle_plugin_player_pane_g1

0x534e,	// (0x000056af) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd70,	// (0x000100d1) list_single_idle_plugin_player_pane_g

0x8694,	// (0x000089f5) list_single_idle_plugin_player_pane_t1

0x86a2,	// (0x00008a03) list_single_idle_plugin_player_pane_t2

0x86b0,	// (0x00008a11) list_single_idle_plugin_player_pane_t3

0x86be,	// (0x00008a1f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd75,	// (0x000100d6) list_single_idle_plugin_player_pane_t

0x86cc,	// (0x00008a2d) wait_bar_pane_cp15

0x86d4,	// (0x00008a35) grid_ai_notification_pane

0x534e,	// (0x000056af) list_single_idle_plugin_notification_pane_g1

0xe2d7,	// (0x0000e638) cell_ai_notification_pane_ParamLimits

0xe2d7,	// (0x0000e638) cell_ai_notification_pane

0x86ea,	// (0x00008a4b) cell_ai_notification_pane_g1

0x86f2,	// (0x00008a53) cell_ai_notification_pane_t1

0xe2e4,	// (0x0000e645) tb_ext_find_button_pane

0xe2ec,	// (0x0000e64d) tb_ext_find_pane_g1

0xe2f4,	// (0x0000e655) tb_ext_find_pane_t1

0x1a16,	// (0x00001d77) tb_ext_find_button_pane_g1

0x871e,	// (0x00008a7f) tb_ext_find_button_pane_g2

0x0001,

0xfd7e,	// (0x000100df) tb_ext_find_button_pane_g

0xe0ff,	// (0x0000e460) main_idle_act4_pane_t1_ParamLimits

0xe117,	// (0x0000e478) main_idle_act4_pane_t2_ParamLimits

0xfd3c,	// (0x0001009d) main_idle_act4_pane_t_ParamLimits

0xe14b,	// (0x0000e4ac) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe162,	// (0x0000e4c3) sat_plugin_idle_act4_pane_ParamLimits

0xe162,	// (0x0000e4c3) sat_plugin_idle_act4_pane

0xe302,	// (0x0000e663) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe302,	// (0x0000e663) sat_plugin_idle_act4_pane_t1

0xe31a,	// (0x0000e67b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe31a,	// (0x0000e67b) sat_plugin_idle_act4_pane_t2

0xe332,	// (0x0000e693) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe332,	// (0x0000e693) sat_plugin_idle_act4_pane_t3

0xe34a,	// (0x0000e6ab) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe34a,	// (0x0000e6ab) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd83,	// (0x000100e4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd83,	// (0x000100e4) sat_plugin_idle_act4_pane_t

0xf516,	// (0x0000f877) popup_battery_window_ParamLimits

0xf516,	// (0x0000f877) popup_battery_window

0x04e2,	// (0x00000843) bg_popup_sub_pane_cp25_ParamLimits

0x04e2,	// (0x00000843) bg_popup_sub_pane_cp25

0x8773,	// (0x00008ad4) popup_battery_window_g1_ParamLimits

0x8773,	// (0x00008ad4) popup_battery_window_g1

0x877f,	// (0x00008ae0) popup_battery_window_t1_ParamLimits

0x877f,	// (0x00008ae0) popup_battery_window_t1

0x8791,	// (0x00008af2) popup_battery_window_t2_ParamLimits

0x8791,	// (0x00008af2) popup_battery_window_t2

0x0001,

0xfd8c,	// (0x000100ed) popup_battery_window_t_ParamLimits

0xfd8c,	// (0x000100ed) popup_battery_window_t

0xbe3b,	// (0x0000c19c) midp_canvas_pane_ParamLimits

0xbe96,	// (0x0000c1f7) midp_keypad_pane_ParamLimits

0xbe96,	// (0x0000c1f7) midp_keypad_pane

0x283d,	// (0x00002b9e) main_midp_pane_ParamLimits

0x5c77,	// (0x00005fd8) signal_pane_g2_cp_ParamLimits

0xe362,	// (0x0000e6c3) aid_size_cell_midp_keypad_ParamLimits

0xe362,	// (0x0000e6c3) aid_size_cell_midp_keypad

0xe380,	// (0x0000e6e1) midp_keyp_game_grid_pane_ParamLimits

0xe380,	// (0x0000e6e1) midp_keyp_game_grid_pane

0xe3a7,	// (0x0000e708) midp_keyp_rocker_pane_ParamLimits

0xe3a7,	// (0x0000e708) midp_keyp_rocker_pane

0xe3ec,	// (0x0000e74d) midp_keyp_sk_left_pane_ParamLimits

0xe3ec,	// (0x0000e74d) midp_keyp_sk_left_pane

0xe440,	// (0x0000e7a1) midp_keyp_sk_right_pane_ParamLimits

0xe440,	// (0x0000e7a1) midp_keyp_sk_right_pane

0xf389,	// (0x0000f6ea) bg_button_pane_cp03

0xe494,	// (0x0000e7f5) midp_keyp_sk_left_pane_g1

0xf389,	// (0x0000f6ea) bg_button_pane_cp04

0xe494,	// (0x0000e7f5) midp_keyp_sk_right_pane_g1

0x6228,	// (0x00006589) midp_keyp_rocker_pane_g1

0xe49d,	// (0x0000e7fe) keyp_game_cell_pane_ParamLimits

0xe49d,	// (0x0000e7fe) keyp_game_cell_pane

0xf389,	// (0x0000f6ea) bg_button_pane_cp02

0xe4c3,	// (0x0000e824) keyp_game_cell_pane_g1

0xb112,	// (0x0000b473) popup_fep_vkb2_window_ParamLimits

0xb112,	// (0x0000b473) popup_fep_vkb2_window

0xe4cc,	// (0x0000e82d) aid_size_cell_vkb2_ParamLimits

0xe4cc,	// (0x0000e82d) aid_size_cell_vkb2

0xe4fa,	// (0x0000e85b) popup_fep_vkb2_window_g1_ParamLimits

0xe4fa,	// (0x0000e85b) popup_fep_vkb2_window_g1

0xe54a,	// (0x0000e8ab) vkb2_area_bottom_pane_ParamLimits

0xe54a,	// (0x0000e8ab) vkb2_area_bottom_pane

0xe5a6,	// (0x0000e907) vkb2_area_keypad_pane_ParamLimits

0xe5a6,	// (0x0000e907) vkb2_area_keypad_pane

0xe5f4,	// (0x0000e955) vkb2_area_top_pane_ParamLimits

0xe5f4,	// (0x0000e955) vkb2_area_top_pane

0xe67a,	// (0x0000e9db) vkb2_top_entry_pane_ParamLimits

0xe67a,	// (0x0000e9db) vkb2_top_entry_pane

0xe6a7,	// (0x0000ea08) vkb2_top_grid_left_pane_ParamLimits

0xe6a7,	// (0x0000ea08) vkb2_top_grid_left_pane

0xe6c7,	// (0x0000ea28) vkb2_top_grid_right_pane_ParamLimits

0xe6c7,	// (0x0000ea28) vkb2_top_grid_right_pane

0x8b0c,	// (0x00008e6d) vkb2_cell_keypad_pane_ParamLimits

0x8b0c,	// (0x00008e6d) vkb2_cell_keypad_pane

0xe70d,	// (0x0000ea6e) vkb2_area_bottom_grid_pane_ParamLimits

0xe70d,	// (0x0000ea6e) vkb2_area_bottom_grid_pane

0xe737,	// (0x0000ea98) vkb2_area_bottom_pane_g1_ParamLimits

0xe737,	// (0x0000ea98) vkb2_area_bottom_pane_g1

0xe75d,	// (0x0000eabe) vkb2_area_bottom_pane_g2_ParamLimits

0xe75d,	// (0x0000eabe) vkb2_area_bottom_pane_g2

0xe78e,	// (0x0000eaef) vkb2_area_bottom_pane_g3_ParamLimits

0xe78e,	// (0x0000eaef) vkb2_area_bottom_pane_g3

0x0002,

0xfd91,	// (0x000100f2) vkb2_area_bottom_pane_g_ParamLimits

0xfd91,	// (0x000100f2) vkb2_area_bottom_pane_g

0x8c9b,	// (0x00008ffc) vkb2_top_cell_left_pane_ParamLimits

0x8c9b,	// (0x00008ffc) vkb2_top_cell_left_pane

0xe7f8,	// (0x0000eb59) vkb2_top_entry_pane_g1_ParamLimits

0xe7f8,	// (0x0000eb59) vkb2_top_entry_pane_g1

0xe806,	// (0x0000eb67) vkb2_top_entry_pane_t1_ParamLimits

0xe806,	// (0x0000eb67) vkb2_top_entry_pane_t1

0x8ce9,	// (0x0000904a) vkb2_top_entry_pane_t2_ParamLimits

0x8ce9,	// (0x0000904a) vkb2_top_entry_pane_t2

0x8d01,	// (0x00009062) vkb2_top_entry_pane_t3_ParamLimits

0x8d01,	// (0x00009062) vkb2_top_entry_pane_t3

0x0002,

0xfd98,	// (0x000100f9) vkb2_top_entry_pane_t_ParamLimits

0xfd98,	// (0x000100f9) vkb2_top_entry_pane_t

0xe83f,	// (0x0000eba0) vkb2_top_grid_right_pane_g1_ParamLimits

0xe83f,	// (0x0000eba0) vkb2_top_grid_right_pane_g1

0x8d5a,	// (0x000090bb) vkb2_top_grid_right_pane_g2_ParamLimits

0x8d5a,	// (0x000090bb) vkb2_top_grid_right_pane_g2

0x8d72,	// (0x000090d3) vkb2_top_grid_right_pane_g3_ParamLimits

0x8d72,	// (0x000090d3) vkb2_top_grid_right_pane_g3

0xe855,	// (0x0000ebb6) vkb2_top_grid_right_pane_g4_ParamLimits

0xe855,	// (0x0000ebb6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9f,	// (0x00010100) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9f,	// (0x00010100) vkb2_top_grid_right_pane_g

0x8da0,	// (0x00009101) vkb2_top_cell_left_pane_g1

0x8db7,	// (0x00009118) vkb2_cell_keypad_pane_g1_ParamLimits

0x8db7,	// (0x00009118) vkb2_cell_keypad_pane_g1

0x8ddb,	// (0x0000913c) vkb2_cell_keypad_pane_t1_ParamLimits

0x8ddb,	// (0x0000913c) vkb2_cell_keypad_pane_t1

0x8df2,	// (0x00009153) vkb2_cell_bottom_grid_pane_ParamLimits

0x8df2,	// (0x00009153) vkb2_cell_bottom_grid_pane

0x8e2b,	// (0x0000918c) vkb2_cell_bottom_grid_pane_g1

0xe193,	// (0x0000e4f4) aid_call2_pane_cp02

0xe19b,	// (0x0000e4fc) aid_call_pane_cp02

0xe1a3,	// (0x0000e504) clock_digital_number_pane_cp10

0xe1ab,	// (0x0000e50c) clock_digital_number_pane_cp11

0xe1b3,	// (0x0000e514) clock_digital_number_pane_cp12

0xe1bb,	// (0x0000e51c) clock_digital_number_pane_cp13

0xe1c3,	// (0x0000e524) clock_digital_separator_pane_cp10

0x1a16,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g1

0x1a16,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g2

0xe1cb,	// (0x0000e52c) popup_clock_digital_analogue_window_cp2_g3

0x1a16,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g4

0xe1cb,	// (0x0000e52c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd54,	// (0x000100b5) popup_clock_digital_analogue_window_cp2_g

0xe1d3,	// (0x0000e534) popup_clock_digital_analogue_window_cp2_t1

0xe1e1,	// (0x0000e542) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5f,	// (0x000100c0) popup_clock_digital_analogue_window_cp2_t

0x6228,	// (0x00006589) clock_digital_number_pane_cp10_g1

0x6228,	// (0x00006589) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0000fea8) clock_digital_number_pane_cp10_g

0x6228,	// (0x00006589) clock_digital_separator_pane_cp10_g1

0x6228,	// (0x00006589) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0000fea8) clock_digital_separator_pane_cp10_g

0x83bd,	// (0x0000871e) uniindi_top_pane_g3

0x83ce,	// (0x0000872f) uniindi_top_pane_g4

0x8b7c,	// (0x00008edd) vkb2_row_keypad_pane_ParamLimits

0x8b7c,	// (0x00008edd) vkb2_row_keypad_pane

0x8e47,	// (0x000091a8) vkb2_cell_t_keypad_pane_ParamLimits

0x8e47,	// (0x000091a8) vkb2_cell_t_keypad_pane

0x8e57,	// (0x000091b8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8e57,	// (0x000091b8) vkb2_cell_t_keypad_pane_cp08

0x8e6c,	// (0x000091cd) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8e6c,	// (0x000091cd) vkb2_cell_t_keypad_pane_cp09

0x8e80,	// (0x000091e1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8e80,	// (0x000091e1) vkb2_cell_t_keypad_pane_cp01

0x8e91,	// (0x000091f2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8e91,	// (0x000091f2) vkb2_cell_t_keypad_pane_cp02

0x8ea2,	// (0x00009203) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8ea2,	// (0x00009203) vkb2_cell_t_keypad_pane_cp03

0x8eb3,	// (0x00009214) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8eb3,	// (0x00009214) vkb2_cell_t_keypad_pane_cp04

0x8ec4,	// (0x00009225) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8ec4,	// (0x00009225) vkb2_cell_t_keypad_pane_cp05

0x8ed5,	// (0x00009236) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8ed5,	// (0x00009236) vkb2_cell_t_keypad_pane_cp06

0x8ee8,	// (0x00009249) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8ee8,	// (0x00009249) vkb2_cell_t_keypad_pane_cp07

0x8efd,	// (0x0000925e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8efd,	// (0x0000925e) vkb2_cell_t_keypad_pane_cp10

0x66dc,	// (0x00006a3d) vkb2_cell_t_keypad_pane_g1

0x8f12,	// (0x00009273) vkb2_cell_t_keypad_pane_t1

0xf389,	// (0x0000f6ea) popup_grid_graphic2_window

0xe86b,	// (0x0000ebcc) aid_size_cell_graphic2_ParamLimits

0xe86b,	// (0x0000ebcc) aid_size_cell_graphic2

0x3c2b,	// (0x00003f8c) bg_popup_window_pane_cp21_ParamLimits

0x3c2b,	// (0x00003f8c) bg_popup_window_pane_cp21

0xe89d,	// (0x0000ebfe) graphic2_pages_pane_ParamLimits

0xe89d,	// (0x0000ebfe) graphic2_pages_pane

0xe8f5,	// (0x0000ec56) grid_graphic2_control_pane_ParamLimits

0xe8f5,	// (0x0000ec56) grid_graphic2_control_pane

0xe929,	// (0x0000ec8a) grid_graphic2_pane_ParamLimits

0xe929,	// (0x0000ec8a) grid_graphic2_pane

0xe9a0,	// (0x0000ed01) cell_graphic2_pane

0xf389,	// (0x0000f6ea) main_comp_mode_pane

0x7af3,	// (0x00007e54) list_ai3_gene_pane_ParamLimits

0xde61,	// (0x0000e1c2) bg_popup_window_pane_cp19_ParamLimits

0x7f2a,	// (0x0000828b) bg_touch_area_indi_pane_ParamLimits

0x7f2a,	// (0x0000828b) bg_touch_area_indi_pane

0x7f40,	// (0x000082a1) bg_touch_area_indi_pane_cp01_ParamLimits

0x7f40,	// (0x000082a1) bg_touch_area_indi_pane_cp01

0x7f58,	// (0x000082b9) bg_touch_area_indi_pane_cp02_ParamLimits

0x7f58,	// (0x000082b9) bg_touch_area_indi_pane_cp02

0x7f72,	// (0x000082d3) bg_touch_area_indi_pane_cp03_ParamLimits

0x7f72,	// (0x000082d3) bg_touch_area_indi_pane_cp03

0x7f8c,	// (0x000082ed) popup_slider_window_g1_ParamLimits

0x7fa8,	// (0x00008309) popup_slider_window_g2_ParamLimits

0x7fc4,	// (0x00008325) popup_slider_window_g3_ParamLimits

0xfce9,	// (0x0001004a) popup_slider_window_g_ParamLimits

0x8020,	// (0x00008381) popup_slider_window_t1_ParamLimits

0x8094,	// (0x000083f5) small_volume_slider_vertical_pane_ParamLimits

0xe9a0,	// (0x0000ed01) cell_graphic2_pane_ParamLimits

0xea03,	// (0x0000ed64) bg_button_pane_cp10_ParamLimits

0xea03,	// (0x0000ed64) bg_button_pane_cp10

0xea16,	// (0x0000ed77) bg_button_pane_cp11_ParamLimits

0xea16,	// (0x0000ed77) bg_button_pane_cp11

0xea29,	// (0x0000ed8a) graphic2_pages_pane_g1_ParamLimits

0xea29,	// (0x0000ed8a) graphic2_pages_pane_g1

0xea44,	// (0x0000eda5) graphic2_pages_pane_g2_ParamLimits

0xea44,	// (0x0000eda5) graphic2_pages_pane_g2

0x0001,

0xfdad,	// (0x0001010e) graphic2_pages_pane_g_ParamLimits

0xfdad,	// (0x0001010e) graphic2_pages_pane_g

0xea5c,	// (0x0000edbd) graphic2_pages_pane_t1_ParamLimits

0xea5c,	// (0x0000edbd) graphic2_pages_pane_t1

0xea74,	// (0x0000edd5) cell_graphic2_control_pane_ParamLimits

0xea74,	// (0x0000edd5) cell_graphic2_control_pane

0xea8e,	// (0x0000edef) cell_graphic2_pane_g1_ParamLimits

0xea8e,	// (0x0000edef) cell_graphic2_pane_g1

0x64fe,	// (0x0000685f) cell_graphic2_pane_g2_ParamLimits

0x64fe,	// (0x0000685f) cell_graphic2_pane_g2

0xea9b,	// (0x0000edfc) cell_graphic2_pane_g3_ParamLimits

0xea9b,	// (0x0000edfc) cell_graphic2_pane_g3

0x650b,	// (0x0000686c) cell_graphic2_pane_g4_ParamLimits

0x650b,	// (0x0000686c) cell_graphic2_pane_g4

0xeaa8,	// (0x0000ee09) cell_graphic2_pane_g5_ParamLimits

0xeaa8,	// (0x0000ee09) cell_graphic2_pane_g5

0x0004,

0xfdb2,	// (0x00010113) cell_graphic2_pane_g_ParamLimits

0xfdb2,	// (0x00010113) cell_graphic2_pane_g

0xeac8,	// (0x0000ee29) cell_graphic2_pane_t1_ParamLimits

0xeac8,	// (0x0000ee29) cell_graphic2_pane_t1

0x43fd,	// (0x0000475e) grid_highlight_pane_cp11_ParamLimits

0x43fd,	// (0x0000475e) grid_highlight_pane_cp11

0x107a,	// (0x000013db) bg_button_pane_cp05

0xeafd,	// (0x0000ee5e) cell_graphic2_control_pane_g1

0x6228,	// (0x00006589) bg_touch_area_indi_pane_g1

0x918d,	// (0x000094ee) aid_cmod_rocker_key_size

0x9197,	// (0x000094f8) aid_cmode_itu_key_size

0x91a1,	// (0x00009502) main_cmode_video_pane

0x91ab,	// (0x0000950c) main_comp_mode_itu_pane

0x91b7,	// (0x00009518) main_comp_mode_rocker_pane

0x91c3,	// (0x00009524) cell_cmode_rocker_pane_ParamLimits

0x91c3,	// (0x00009524) cell_cmode_rocker_pane

0x91d7,	// (0x00009538) cell_cmode_itu_pane_ParamLimits

0x91d7,	// (0x00009538) cell_cmode_itu_pane

0x107a,	// (0x000013db) bg_button_pane_cp06_ParamLimits

0x107a,	// (0x000013db) bg_button_pane_cp06

0x66dc,	// (0x00006a3d) cell_cmode_rocker_pane_g1_ParamLimits

0x66dc,	// (0x00006a3d) cell_cmode_rocker_pane_g1

0x8213,	// (0x00008574) cell_cmode_rocker_pane_g2_ParamLimits

0x8213,	// (0x00008574) cell_cmode_rocker_pane_g2

0x0001,

0xfdc2,	// (0x00010123) cell_cmode_rocker_pane_g_ParamLimits

0xfdc2,	// (0x00010123) cell_cmode_rocker_pane_g

0xf389,	// (0x0000f6ea) bg_button_pane_cp07

0x91ee,	// (0x0000954f) cell_cmode_itu_pane_g1

0x91f7,	// (0x00009558) cell_cmode_itu_pane_t1

0x9205,	// (0x00009566) cell_cmode_itu_pane_t2

0x0001,

0xfdc7,	// (0x00010128) cell_cmode_itu_pane_t

0x8441,	// (0x000087a2) aid_touch_ctrl_left

0x8449,	// (0x000087aa) aid_touch_ctrl_right

0xf389,	// (0x0000f6ea) compa_mode_pane

0xeb0a,	// (0x0000ee6b) aid_cmod_rocker_key_size_cp

0xeb14,	// (0x0000ee75) aid_cmode_itu_key_size_cp

0x9227,	// (0x00009588) compa_mode_pane_g1

0x922f,	// (0x00009590) compa_mode_pane_g2

0x9237,	// (0x00009598) compa_mode_pane_g3

0x0002,

0xfdcc,	// (0x0001012d) compa_mode_pane_g

0xeb1e,	// (0x0000ee7f) main_comp_mode_itu_pane_cp

0xeb26,	// (0x0000ee87) main_comp_mode_rocker_pane_cp

0xeb2e,	// (0x0000ee8f) cell_cmode_itu_pane_cp_ParamLimits

0xeb2e,	// (0x0000ee8f) cell_cmode_itu_pane_cp

0xeb43,	// (0x0000eea4) cell_cmode_rocker_pane_cp_ParamLimits

0xeb43,	// (0x0000eea4) cell_cmode_rocker_pane_cp

0x107a,	// (0x000013db) bg_button_pane_cp06_cp_ParamLimits

0x107a,	// (0x000013db) bg_button_pane_cp06_cp

0x66dc,	// (0x00006a3d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x66dc,	// (0x00006a3d) cell_cmode_rocker_pane_g1_cp

0x6228,	// (0x00006589) cell_cmode_rocker_pane_g2_cp

0xf389,	// (0x0000f6ea) bg_button_pane_cp07_cp

0xeb55,	// (0x0000eeb6) cell_cmode_itu_pane_g1_cp

0xeb5e,	// (0x0000eebf) cell_cmode_itu_pane_t1_cp

0xeb5e,	// (0x0000eebf) cell_cmode_itu_pane_t2_cp

0xd1e6,	// (0x0000d547) settings_code_pane_cp2

0x01ae,	// (0x0000050f) bg_popup_window_pane_cp3_ParamLimits

0x06d0,	// (0x00000a31) heading_pane_cp3_ParamLimits

0x06dc,	// (0x00000a3d) listscroll_popup_graphic_pane_ParamLimits

0x62a6,	// (0x00006607) fep_hwr_aid_pane_ParamLimits

0x8110,	// (0x00008471) aid_touch_sctrl_top_ParamLimits

0x811d,	// (0x0000847e) sctrl_sk_top_pane_g1_ParamLimits

0x66dc,	// (0x00006a3d) sctrl_sk_top_pane_g2_ParamLimits

0xfd02,	// (0x00010063) sctrl_sk_top_pane_g_ParamLimits

0x812a,	// (0x0000848b) sctrl_sk_top_pane_t1_ParamLimits

0x8110,	// (0x00008471) aid_touch_sctrl_bottom_ParamLimits

0x812a,	// (0x0000848b) sctrl_sk_bottom_pane_t1_ParamLimits

0x8387,	// (0x000086e8) aid_area_touch_clock

0xe63c,	// (0x0000e99d) aid_vkb2_area_top_pane_cell_ParamLimits

0xe63c,	// (0x0000e99d) aid_vkb2_area_top_pane_cell

0xe6e7,	// (0x0000ea48) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe6e7,	// (0x0000ea48) aid_vkb2_area_bottom_pane_cell

0x8cbb,	// (0x0000901c) popup_char_count_window

0x928d,	// (0x000095ee) popup_char_count_window_g1

0x9296,	// (0x000095f7) popup_char_count_window_g2

0x929f,	// (0x00009600) popup_char_count_window_g3

0x0002,

0xfdd3,	// (0x00010134) popup_char_count_window_g

0x92a8,	// (0x00009609) popup_char_count_window_t1

0x8928,	// (0x00008c89) popup_fep_char_preview_window_ParamLimits

0x8928,	// (0x00008c89) popup_fep_char_preview_window

0xe65c,	// (0x0000e9bd) vkb2_top_candi_pane_ParamLimits

0xe65c,	// (0x0000e9bd) vkb2_top_candi_pane

0xeb6c,	// (0x0000eecd) cell_vkb2_top_candi_pane_ParamLimits

0xeb6c,	// (0x0000eecd) cell_vkb2_top_candi_pane

0x3c2b,	// (0x00003f8c) bg_popup_fep_char_preview_window_ParamLimits

0x3c2b,	// (0x00003f8c) bg_popup_fep_char_preview_window

0x9307,	// (0x00009668) popup_fep_char_preview_window_t1_ParamLimits

0x9307,	// (0x00009668) popup_fep_char_preview_window_t1

0x9341,	// (0x000096a2) bg_popup_fep_char_preview_window_g1

0x9349,	// (0x000096aa) bg_popup_fep_char_preview_window_g2

0x9351,	// (0x000096b2) bg_popup_fep_char_preview_window_g3

0x9359,	// (0x000096ba) bg_popup_fep_char_preview_window_g4

0x9361,	// (0x000096c2) bg_popup_fep_char_preview_window_g5

0x9369,	// (0x000096ca) bg_popup_fep_char_preview_window_g6

0x9371,	// (0x000096d2) bg_popup_fep_char_preview_window_g7

0x9379,	// (0x000096da) bg_popup_fep_char_preview_window_g8

0x9381,	// (0x000096e2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdda,	// (0x0001013b) bg_popup_fep_char_preview_window_g

0x66dc,	// (0x00006a3d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x66dc,	// (0x00006a3d) cell_vkb2_top_candi_pane_g1

0x6a71,	// (0x00006dd2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6a71,	// (0x00006dd2) cell_vkb2_top_candi_pane_g2

0x6a92,	// (0x00006df3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6a92,	// (0x00006df3) cell_vkb2_top_candi_pane_g3

0x9389,	// (0x000096ea) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9389,	// (0x000096ea) cell_vkb2_top_candi_pane_g4

0x93aa,	// (0x0000970b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x93aa,	// (0x0000970b) cell_vkb2_top_candi_pane_g5

0x8213,	// (0x00008574) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8213,	// (0x00008574) cell_vkb2_top_candi_pane_g6

0x0005,

0xfded,	// (0x0001014e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfded,	// (0x0001014e) cell_vkb2_top_candi_pane_g

0x93cb,	// (0x0000972c) cell_vkb2_top_candi_pane_t1

0x4b68,	// (0x00004ec9) aid_size_touch_slider_mark_ParamLimits

0x4b68,	// (0x00004ec9) aid_size_touch_slider_mark

0xe8d9,	// (0x0000ec3a) grid_graphic2_catg_pane_ParamLimits

0xe8d9,	// (0x0000ec3a) grid_graphic2_catg_pane

0xe96f,	// (0x0000ecd0) popup_grid_graphic2_window_t1_ParamLimits

0xe96f,	// (0x0000ecd0) popup_grid_graphic2_window_t1

0xe985,	// (0x0000ece6) popup_grid_graphic2_window_t2_ParamLimits

0xe985,	// (0x0000ece6) popup_grid_graphic2_window_t2

0x0001,

0xfda8,	// (0x00010109) popup_grid_graphic2_window_t_ParamLimits

0xfda8,	// (0x00010109) popup_grid_graphic2_window_t

0x107a,	// (0x000013db) bg_button_pane_cp05_ParamLimits

0xeafd,	// (0x0000ee5e) cell_graphic2_control_pane_g1_ParamLimits

0xebc0,	// (0x0000ef21) cell_graphic2_catg_pane_ParamLimits

0xebc0,	// (0x0000ef21) cell_graphic2_catg_pane

0xf389,	// (0x0000f6ea) bg_button_pane_cp12

0xebd2,	// (0x0000ef33) cell_graphic2_catg_pane_g1

0x8353,	// (0x000086b4) cell_tb_ext_pane_t1_ParamLimits

0x8d17,	// (0x00009078) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8d17,	// (0x00009078) vkb2_top_cell_right_narrow_pane

0x8d2f,	// (0x00009090) vkb2_top_cell_right_wide_pane_ParamLimits

0x8d2f,	// (0x00009090) vkb2_top_cell_right_wide_pane

0x6298,	// (0x000065f9) bg_vkb2_func_pane_ParamLimits

0x6298,	// (0x000065f9) bg_vkb2_func_pane

0x8da0,	// (0x00009101) vkb2_top_cell_left_pane_g1_ParamLimits

0x6298,	// (0x000065f9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6298,	// (0x000065f9) bg_vkb2_fuc_pane_cp03

0x8e2b,	// (0x0000918c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x342f,	// (0x00003790) bg_vkb2_func_pane_g1

0x3437,	// (0x00003798) bg_vkb2_func_pane_g2

0x3447,	// (0x000037a8) bg_vkb2_func_pane_g3

0x343f,	// (0x000037a0) bg_vkb2_func_pane_g4

0x344f,	// (0x000037b0) bg_vkb2_func_pane_g5

0x3457,	// (0x000037b8) bg_vkb2_func_pane_g6

0x345f,	// (0x000037c0) bg_vkb2_func_pane_g7

0x3467,	// (0x000037c8) bg_vkb2_func_pane_g8

0x3427,	// (0x00003788) bg_vkb2_func_pane_g9

0x0008,

0xfdfa,	// (0x0001015b) bg_vkb2_func_pane_g

0x6298,	// (0x000065f9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6298,	// (0x000065f9) bg_vkb2_fuc_pane_cp01

0x8da0,	// (0x00009101) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8da0,	// (0x00009101) vkb2_top_cell_right_wide_pane_g1

0x6298,	// (0x000065f9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6298,	// (0x000065f9) bg_vkb2_fuc_pane_cp02

0x8e2b,	// (0x0000918c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8e2b,	// (0x0000918c) vkb2_top_cell_right_narrow_pane_g1

0xdd9b,	// (0x0000e0fc) aid_touch_area_decrease_ParamLimits

0xdd9b,	// (0x0000e0fc) aid_touch_area_decrease

0xddd5,	// (0x0000e136) aid_touch_area_increase_ParamLimits

0xddd5,	// (0x0000e136) aid_touch_area_increase

0xddfd,	// (0x0000e15e) aid_touch_area_mute_ParamLimits

0xddfd,	// (0x0000e15e) aid_touch_area_mute

0xde2d,	// (0x0000e18e) aid_touch_area_slider_ParamLimits

0xde2d,	// (0x0000e18e) aid_touch_area_slider

0xde6d,	// (0x0000e1ce) popup_slider_window_g4_ParamLimits

0xde6d,	// (0x0000e1ce) popup_slider_window_g4

0xde95,	// (0x0000e1f6) popup_slider_window_g5_ParamLimits

0xde95,	// (0x0000e1f6) popup_slider_window_g5

0xdec9,	// (0x0000e22a) popup_slider_window_g6_ParamLimits

0xdec9,	// (0x0000e22a) popup_slider_window_g6

0x804e,	// (0x000083af) popup_slider_window_t2_ParamLimits

0x804e,	// (0x000083af) popup_slider_window_t2

0x0001,

0xfcf6,	// (0x00010057) popup_slider_window_t_ParamLimits

0xfcf6,	// (0x00010057) popup_slider_window_t

0xdee5,	// (0x0000e246) slider_pane_ParamLimits

0xdee5,	// (0x0000e246) slider_pane

0x9404,	// (0x00009765) slider_pane_g1_ParamLimits

0x9404,	// (0x00009765) slider_pane_g1

0x9418,	// (0x00009779) slider_pane_g2_ParamLimits

0x9418,	// (0x00009779) slider_pane_g2

0x942e,	// (0x0000978f) slider_pane_g3_ParamLimits

0x942e,	// (0x0000978f) slider_pane_g3

0x0003,

0xfe0d,	// (0x0001016e) slider_pane_g_ParamLimits

0xfe0d,	// (0x0001016e) slider_pane_g

0xc713,	// (0x0000ca74) popup_tb_float_extension_window_ParamLimits

0xc713,	// (0x0000ca74) popup_tb_float_extension_window

0x945a,	// (0x000097bb) aid_size_cell_tb_float_ext

0xf389,	// (0x0000f6ea) bg_popup_sub_window_cp28

0x9466,	// (0x000097c7) grid_tb_float_ext_pane

0x9472,	// (0x000097d3) cell_tb_float_ext_pane_ParamLimits

0x9472,	// (0x000097d3) cell_tb_float_ext_pane

0x948e,	// (0x000097ef) cell_tb_float_ext_pane_g1

0x9497,	// (0x000097f8) grid_highlight_pane_cp12

0xd61d,	// (0x0000d97e) cell_last_hwr_side_pane_ParamLimits

0xd61d,	// (0x0000d97e) cell_last_hwr_side_pane

0x6228,	// (0x00006589) cell_last_hwr_side_pane_g1

0x94a0,	// (0x00009801) cell_last_hwr_side_pane_g2

0x0001,

0xfe16,	// (0x00010177) cell_last_hwr_side_pane_g

0xe7c3,	// (0x0000eb24) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe7c3,	// (0x0000eb24) vkb2_area_bottom_space_btn_pane

0x66dc,	// (0x00006a3d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8f12,	// (0x00009273) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x93cb,	// (0x0000972c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x94a9,	// (0x0000980a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x94a9,	// (0x0000980a) vkb2_area_bottom_space_btn_pane_g1

0x94e3,	// (0x00009844) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x94e3,	// (0x00009844) vkb2_area_bottom_space_btn_pane_g2

0x9519,	// (0x0000987a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9519,	// (0x0000987a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1b,	// (0x0001017c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1b,	// (0x0001017c) vkb2_area_bottom_space_btn_pane_g

0x635d,	// (0x000066be) cel_fep_hwr_func_pane_ParamLimits

0x635d,	// (0x000066be) cel_fep_hwr_func_pane

0xd5f2,	// (0x0000d953) cell_hwr_side_button_pane_ParamLimits

0xd5f2,	// (0x0000d953) cell_hwr_side_button_pane

0x8387,	// (0x000086e8) aid_area_touch_clock_ParamLimits

0x04e2,	// (0x00000843) bg_uniindi_top_pane_ParamLimits

0x839b,	// (0x000086fc) uniindi_top_pane_g1_ParamLimits

0x83b1,	// (0x00008712) uniindi_top_pane_g2_ParamLimits

0x83bd,	// (0x0000871e) uniindi_top_pane_g3_ParamLimits

0x83ce,	// (0x0000872f) uniindi_top_pane_g4_ParamLimits

0xfd2e,	// (0x0001008f) uniindi_top_pane_g_ParamLimits

0x83db,	// (0x0000873c) uniindi_top_pane_t1_ParamLimits

0x04e2,	// (0x00000843) bg_vkb2_func_pane_cp01_ParamLimits

0x04e2,	// (0x00000843) bg_vkb2_func_pane_cp01

0x9563,	// (0x000098c4) cel_fep_hwr_func_pane_g1_ParamLimits

0x9563,	// (0x000098c4) cel_fep_hwr_func_pane_g1

0x04e2,	// (0x00000843) bg_vkb2_func_pane_cp02_ParamLimits

0x04e2,	// (0x00000843) bg_vkb2_func_pane_cp02

0x9563,	// (0x000098c4) cell_hwr_side_button_pane_g1_ParamLimits

0x9563,	// (0x000098c4) cell_hwr_side_button_pane_g1

0x3202,	// (0x00003563) status_pane_g4_ParamLimits

0x3202,	// (0x00003563) status_pane_g4

0x321c,	// (0x0000357d) status_pane_t1

0x5fc4,	// (0x00006325) form2_midp_gauge_slider_cont_pane

0x5fcc,	// (0x0000632d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd523,	// (0x0000d884) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd535,	// (0x0000d896) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0000fe5b) form2_midp_gauge_slider_pane_t_ParamLimits

0x6002,	// (0x00006363) form2_midp_slider_pane_ParamLimits

0x88f0,	// (0x00008c51) aid_size_cell_func_vkb2_ParamLimits

0x88f0,	// (0x00008c51) aid_size_cell_func_vkb2

0x9446,	// (0x000097a7) slider_pane_g4_ParamLimits

0x9446,	// (0x000097a7) slider_pane_g4

0xebdb,	// (0x0000ef3c) form2_midp_gauge_slider_pane_t2_cp01

0xebe9,	// (0x0000ef4a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xebe9,	// (0x0000ef4a) form2_midp_gauge_slider_pane_t3_cp01

0x959c,	// (0x000098fd) form2_midp_slider_pane_cp01

0xf389,	// (0x0000f6ea) navi_smil_pane

0x95d0,	// (0x00009931) navi_smil_pane_g1

0x95d8,	// (0x00009939) navi_smil_pane_t1

0x95a5,	// (0x00009906) form2_midp_slider_pane_g1

0x95ae,	// (0x0000990f) form2_midp_slider_pane_g2

0x95b6,	// (0x00009917) form2_midp_slider_pane_g3

0x95a5,	// (0x00009906) form2_midp_slider_pane_g4

0xec06,	// (0x0000ef67) form2_midp_slider_pane_g5

0x0004,

0xfe24,	// (0x00010185) form2_midp_slider_pane_g

0x9553,	// (0x000098b4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9553,	// (0x000098b4) vkb2_area_bottom_space_btn_pane_g4

0xc8f3,	// (0x0000cc54) lc0_navi_pane_ParamLimits

0xc8f3,	// (0x0000cc54) lc0_navi_pane

0xc963,	// (0x0000ccc4) lc0_stat_indi_pane_ParamLimits

0xc963,	// (0x0000ccc4) lc0_stat_indi_pane

0xc978,	// (0x0000ccd9) ls0_title_pane_ParamLimits

0xc978,	// (0x0000ccd9) ls0_title_pane

0x107a,	// (0x000013db) bg_popup_sub_pane_cp14_ParamLimits

0x836e,	// (0x000086cf) list_uniindi_pane_ParamLimits

0x837a,	// (0x000086db) uniindi_top_pane_ParamLimits

0x8419,	// (0x0000877a) list_single_uniindi_pane_g1_ParamLimits

0x842c,	// (0x0000878d) list_single_uniindi_pane_t1_ParamLimits

0xec0f,	// (0x0000ef70) lc0_stat_clock_pane_ParamLimits

0xec0f,	// (0x0000ef70) lc0_stat_clock_pane

0xec1c,	// (0x0000ef7d) lc0_stat_indi_pane_g1_ParamLimits

0xec1c,	// (0x0000ef7d) lc0_stat_indi_pane_g1

0xec29,	// (0x0000ef8a) lc0_stat_indi_pane_g2_ParamLimits

0xec29,	// (0x0000ef8a) lc0_stat_indi_pane_g2

0x0001,

0xfe2f,	// (0x00010190) lc0_stat_indi_pane_g_ParamLimits

0xfe2f,	// (0x00010190) lc0_stat_indi_pane_g

0xec36,	// (0x0000ef97) lc0_uni_indicator_pane_ParamLimits

0xec36,	// (0x0000ef97) lc0_uni_indicator_pane

0xec43,	// (0x0000efa4) ls0_title_pane_g1_ParamLimits

0xec43,	// (0x0000efa4) ls0_title_pane_g1

0xec57,	// (0x0000efb8) ls0_title_pane_t1_ParamLimits

0xec57,	// (0x0000efb8) ls0_title_pane_t1

0xec85,	// (0x0000efe6) lc0_uni_indicator_pane_g1_ParamLimits

0xec85,	// (0x0000efe6) lc0_uni_indicator_pane_g1

0x9677,	// (0x000099d8) lc0_stat_clock_pane_t1

0xf389,	// (0x0000f6ea) main_ai5_pane

0x9685,	// (0x000099e6) ai5_sk_pane_ParamLimits

0x9685,	// (0x000099e6) ai5_sk_pane

0xeca4,	// (0x0000f005) cell_ai5_widget_pane_ParamLimits

0xeca4,	// (0x0000f005) cell_ai5_widget_pane

0x9708,	// (0x00009a69) aid_size_cell_widget_grid

0x971c,	// (0x00009a7d) bg_ai5_widget_pane_ParamLimits

0x971c,	// (0x00009a7d) bg_ai5_widget_pane

0xed31,	// (0x0000f092) cell_ai5_widget_pane_g2

0xed41,	// (0x0000f0a2) cell_ai5_widget_pane_g3

0xed60,	// (0x0000f0c1) cell_ai5_widget_pane_g4

0xed6c,	// (0x0000f0cd) cell_ai5_widget_pane_g5

0xed78,	// (0x0000f0d9) cell_ai5_widget_pane_g6

0xed84,	// (0x0000f0e5) cell_ai5_widget_pane_g7

0xedcc,	// (0x0000f12d) cell_ai5_widget_pane_t1_ParamLimits

0xedcc,	// (0x0000f12d) cell_ai5_widget_pane_t1

0xede9,	// (0x0000f14a) cell_ai5_widget_pane_t2_ParamLimits

0xede9,	// (0x0000f14a) cell_ai5_widget_pane_t2

0xee01,	// (0x0000f162) cell_ai5_widget_pane_t3_ParamLimits

0xee01,	// (0x0000f162) cell_ai5_widget_pane_t3

0xee19,	// (0x0000f17a) cell_ai5_widget_pane_t4_ParamLimits

0xee19,	// (0x0000f17a) cell_ai5_widget_pane_t4

0xee33,	// (0x0000f194) cell_ai5_widget_pane_t5_ParamLimits

0xee33,	// (0x0000f194) cell_ai5_widget_pane_t5

0x9867,	// (0x00009bc8) cell_ai5_widget_pane_t6_ParamLimits

0x9867,	// (0x00009bc8) cell_ai5_widget_pane_t6

0x9879,	// (0x00009bda) cell_ai5_widget_pane_t7_ParamLimits

0x9879,	// (0x00009bda) cell_ai5_widget_pane_t7

0xee52,	// (0x0000f1b3) cell_ai5_widget_pane_t8_ParamLimits

0xee52,	// (0x0000f1b3) cell_ai5_widget_pane_t8

0x0009,

0xfe49,	// (0x000101aa) cell_ai5_widget_pane_t_ParamLimits

0xfe49,	// (0x000101aa) cell_ai5_widget_pane_t

0xee9e,	// (0x0000f1ff) grid_ai5_widget_pane

0x107a,	// (0x000013db) highlight_cell_ai5_widget_pane_ParamLimits

0x107a,	// (0x000013db) highlight_cell_ai5_widget_pane

0xeeb5,	// (0x0000f216) ai5_sk_left_pane

0xeebf,	// (0x0000f220) ai5_sk_middle_pane

0xeec9,	// (0x0000f22a) ai5_sk_right_pane

0x9913,	// (0x00009c74) bg_ai5_widget_pane_g1_ParamLimits

0x9913,	// (0x00009c74) bg_ai5_widget_pane_g1

0x991f,	// (0x00009c80) bg_ai5_widget_pane_g2_ParamLimits

0x991f,	// (0x00009c80) bg_ai5_widget_pane_g2

0x992b,	// (0x00009c8c) bg_ai5_widget_pane_g3_ParamLimits

0x992b,	// (0x00009c8c) bg_ai5_widget_pane_g3

0x9937,	// (0x00009c98) bg_ai5_widget_pane_g4_ParamLimits

0x9937,	// (0x00009c98) bg_ai5_widget_pane_g4

0x9943,	// (0x00009ca4) bg_ai5_widget_pane_g5_ParamLimits

0x9943,	// (0x00009ca4) bg_ai5_widget_pane_g5

0x994f,	// (0x00009cb0) bg_ai5_widget_pane_g6_ParamLimits

0x994f,	// (0x00009cb0) bg_ai5_widget_pane_g6

0x995b,	// (0x00009cbc) bg_ai5_widget_pane_g7_ParamLimits

0x995b,	// (0x00009cbc) bg_ai5_widget_pane_g7

0x9967,	// (0x00009cc8) bg_ai5_widget_pane_g8_ParamLimits

0x9967,	// (0x00009cc8) bg_ai5_widget_pane_g8

0x9973,	// (0x00009cd4) bg_ai5_widget_pane_g9_ParamLimits

0x9973,	// (0x00009cd4) bg_ai5_widget_pane_g9

0x0008,

0xfe5e,	// (0x000101bf) bg_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x000101bf) bg_ai5_widget_pane_g

0x999a,	// (0x00009cfb) cell_shortcut_ai5_widget_pane_ParamLimits

0x999a,	// (0x00009cfb) cell_shortcut_ai5_widget_pane

0x0324,	// (0x00000685) bg_cell_shortcut_ai5_widget_pane

0x99ac,	// (0x00009d0d) cell_grid_ai5_widget_pane_g1

0x99b5,	// (0x00009d16) highlight_cell_shortcut_ai5_widget_pane

0x3437,	// (0x00003798) ai5_sk_left_pane_g1

0x99bd,	// (0x00009d1e) ai5_sk_left_pane_g2

0x99c5,	// (0x00009d26) ai5_sk_left_pane_g3

0x99cd,	// (0x00009d2e) ai5_sk_left_pane_g4

0x0003,

0xfe71,	// (0x000101d2) ai5_sk_left_pane_g

0x99d5,	// (0x00009d36) ai5_sk_left_pane_t1

0x342f,	// (0x00003790) ai5_sk_right_pane_g1

0x99e3,	// (0x00009d44) ai5_sk_right_pane_g2

0x99eb,	// (0x00009d4c) ai5_sk_right_pane_g3

0x99f3,	// (0x00009d54) ai5_sk_right_pane_g4

0x0003,

0xfe7a,	// (0x000101db) ai5_sk_right_pane_g

0x99fb,	// (0x00009d5c) ai5_sk_right_pane_t1

0x342f,	// (0x00003790) ai5_sk_middle_pane_g1

0x3437,	// (0x00003798) ai5_sk_middle_pane_g2

0x344f,	// (0x000037b0) ai5_sk_middle_pane_g3

0x99eb,	// (0x00009d4c) ai5_sk_middle_pane_g4

0x99c5,	// (0x00009d26) ai5_sk_middle_pane_g5

0x9a09,	// (0x00009d6a) ai5_sk_middle_pane_g6

0xeed3,	// (0x0000f234) ai5_sk_middle_pane_g7

0x0006,

0xfe83,	// (0x000101e4) ai5_sk_middle_pane_g

0xc7dd,	// (0x0000cb3e) aid_touch_area_size_lc0_ParamLimits

0xc7dd,	// (0x0000cb3e) aid_touch_area_size_lc0

0x6ab3,	// (0x00006e14) cell_hwr_candidate_pane_t1_ParamLimits

0x2eba,	// (0x0000321b) aid_touch_navi_pane

0xca82,	// (0x0000cde3) status_dt_navi_pane_ParamLimits

0xca82,	// (0x0000cde3) status_dt_navi_pane

0xca9a,	// (0x0000cdfb) status_dt_sta_pane_ParamLimits

0xca9a,	// (0x0000cdfb) status_dt_sta_pane

0xeedb,	// (0x0000f23c) dt_sta_controll_pane

0xeee8,	// (0x0000f249) dt_sta_indi_pane

0xeef5,	// (0x0000f256) dt_sta_title_pane

0x04e2,	// (0x00000843) bg_dt_sta_indi_pane_ParamLimits

0x04e2,	// (0x00000843) bg_dt_sta_indi_pane

0xef07,	// (0x0000f268) dt_sta_battery_pane

0xef0f,	// (0x0000f270) dt_sta_indi_pane_g1

0xef18,	// (0x0000f279) dt_sta_indi_pane_g2

0xef21,	// (0x0000f282) dt_sta_indi_pane_g3

0x0002,

0xfe92,	// (0x000101f3) dt_sta_indi_pane_g

0xef2a,	// (0x0000f28b) dt_sta_signal_pane

0x107a,	// (0x000013db) bg_dt_sta_title_pane_ParamLimits

0x107a,	// (0x000013db) bg_dt_sta_title_pane

0xef33,	// (0x0000f294) dt_sta_title_pane_g1

0xef3b,	// (0x0000f29c) dt_sta_title_pane_t1_ParamLimits

0xef3b,	// (0x0000f29c) dt_sta_title_pane_t1

0xf389,	// (0x0000f6ea) bg_dt_sta_control_pane

0xef50,	// (0x0000f2b1) dt_sta_controll_pane_g1

0xef59,	// (0x0000f2ba) bg_dt_sta_title_pane_g1

0xef62,	// (0x0000f2c3) bg_dt_sta_title_pane_g2

0xef6b,	// (0x0000f2cc) bg_dt_sta_title_pane_g3

0x0002,

0xfe99,	// (0x000101fa) bg_dt_sta_title_pane_g

0x6228,	// (0x00006589) bg_dt_sta_indi_pane_g1

0x9ab7,	// (0x00009e18) dt_sta_signal_pane_g1

0x9abf,	// (0x00009e20) dt_sta_signal_pane_g2

0x0001,

0xfea0,	// (0x00010201) dt_sta_signal_pane_g

0x9ac7,	// (0x00009e28) dt_sta_battery_pane_g1

0x9ad0,	// (0x00009e31) dt_sta_battery_pane_t1

0x6228,	// (0x00006589) bg_dt_sta_control_pane_g1

0x1bdb,	// (0x00001f3c) fep_china_uni_eep_pane

0x1be3,	// (0x00001f44) fep_china_uni_entry_pane_ParamLimits

0x1bf3,	// (0x00001f54) popup_fep_china_uni_window_g1_ParamLimits

0x1c03,	// (0x00001f64) popup_fep_china_uni_window_g2_ParamLimits

0x1c03,	// (0x00001f64) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0000fa91) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0000fa91) popup_fep_china_uni_window_g

0x9adf,	// (0x00009e40) fep_china_uni_eep_pane_g1

0x9ae7,	// (0x00009e48) fep_china_uni_eep_pane_t1

0x95c7,	// (0x00009928) aid_touch_area_size_smil_player

0x3012,	// (0x00003373) lc0_clock_pane

0x3210,	// (0x00003571) status_pane_g5_ParamLimits

0x3210,	// (0x00003571) status_pane_g5

0xc23d,	// (0x0000c59e) popup_keymap_window

0x31ce,	// (0x0000352f) status_icon_pane

0xed41,	// (0x0000f0a2) cell_ai5_widget_pane_g3_ParamLimits

0xed60,	// (0x0000f0c1) cell_ai5_widget_pane_g4_ParamLimits

0xed6c,	// (0x0000f0cd) cell_ai5_widget_pane_g5_ParamLimits

0xed90,	// (0x0000f0f1) cell_ai5_widget_pane_g8_ParamLimits

0xed90,	// (0x0000f0f1) cell_ai5_widget_pane_g8

0xeda4,	// (0x0000f105) cell_ai5_widget_pane_g9_ParamLimits

0xeda4,	// (0x0000f105) cell_ai5_widget_pane_g9

0xedb8,	// (0x0000f119) cell_ai5_widget_pane_g10_ParamLimits

0xedb8,	// (0x0000f119) cell_ai5_widget_pane_g10

0x9af6,	// (0x00009e57) status_icon_pane_g1

0xf389,	// (0x0000f6ea) bg_popup_sub_pane_cp13

0x9afe,	// (0x00009e5f) popup_keymap_window_t1

0xbf30,	// (0x0000c291) control_pane_g6_ParamLimits

0xbf30,	// (0x0000c291) control_pane_g6

0xbf3d,	// (0x0000c29e) control_pane_g7_ParamLimits

0xbf3d,	// (0x0000c29e) control_pane_g7

0xbf4a,	// (0x0000c2ab) control_pane_g8_ParamLimits

0xbf4a,	// (0x0000c2ab) control_pane_g8

0xeedb,	// (0x0000f23c) dt_sta_controll_pane_ParamLimits

0xeee8,	// (0x0000f249) dt_sta_indi_pane_ParamLimits

0xeef5,	// (0x0000f256) dt_sta_title_pane_ParamLimits

0x0a17,	// (0x00000d78) aid_size_touch_scroll_bar_cale

0xf52e,	// (0x0000f88f) popup_discreet_window_ParamLimits

0xf52e,	// (0x0000f88f) popup_discreet_window

0xb15c,	// (0x0000b4bd) popup_sk_window

0x3c2b,	// (0x00003f8c) bg_popup_sub_pane_cp28_ParamLimits

0x3c2b,	// (0x00003f8c) bg_popup_sub_pane_cp28

0x9b0c,	// (0x00009e6d) popup_discreet_window_g1_ParamLimits

0x9b0c,	// (0x00009e6d) popup_discreet_window_g1

0x9b2c,	// (0x00009e8d) popup_discreet_window_t1_ParamLimits

0x9b2c,	// (0x00009e8d) popup_discreet_window_t1

0x9b4a,	// (0x00009eab) popup_discreet_window_t2_ParamLimits

0x9b4a,	// (0x00009eab) popup_discreet_window_t2

0x0002,

0xfea5,	// (0x00010206) popup_discreet_window_t_ParamLimits

0xfea5,	// (0x00010206) popup_discreet_window_t

0x9b9c,	// (0x00009efd) popup_sk_window_g1

0x9ba6,	// (0x00009f07) popup_sk_window_g2

0x0001,

0xfeac,	// (0x0001020d) popup_sk_window_g

0x9bb0,	// (0x00009f11) popup_sk_window_t1

0x9bbe,	// (0x00009f1f) popup_sk_window_t1_copy1

0xed31,	// (0x0000f092) cell_ai5_widget_pane_g2_ParamLimits

0xee64,	// (0x0000f1c5) cell_ai5_widget_pane_t9_ParamLimits

0xee64,	// (0x0000f1c5) cell_ai5_widget_pane_t9

0xf389,	// (0x0000f6ea) main_fep_fshwr2_pane

0xef74,	// (0x0000f2d5) aid_fshwr2_btn_pane

0xef7c,	// (0x0000f2dd) aid_fshwr2_syb_pane

0xef84,	// (0x0000f2e5) aid_fshwr2_txt_pane

0xef8c,	// (0x0000f2ed) fshwr2_func_candi_pane

0xef96,	// (0x0000f2f7) fshwr2_hwr_syb_pane

0xefa2,	// (0x0000f303) fshwr2_icf_pane

0xf389,	// (0x0000f6ea) fshwr2_icf_bg_pane

0xefac,	// (0x0000f30d) fshwr2_icf_pane_t1_ParamLimits

0xefac,	// (0x0000f30d) fshwr2_icf_pane_t1

0x6228,	// (0x00006589) fshwr2_func_candi_pane_g1

0x9c31,	// (0x00009f92) fshwr2_func_candi_row_pane_ParamLimits

0x9c31,	// (0x00009f92) fshwr2_func_candi_row_pane

0xefc4,	// (0x0000f325) cell_fshwr2_syb_pane_ParamLimits

0xefc4,	// (0x0000f325) cell_fshwr2_syb_pane

0x66dc,	// (0x00006a3d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x66dc,	// (0x00006a3d) fshwr2_hwr_syb_pane_g1

0xf389,	// (0x0000f6ea) bg_popup_call_pane_cp01

0x9c5c,	// (0x00009fbd) fshwr2_func_candi_cell_pane_ParamLimits

0x9c5c,	// (0x00009fbd) fshwr2_func_candi_cell_pane

0x9c8e,	// (0x00009fef) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9c8e,	// (0x00009fef) fshwr2_func_candi_cell_bg_pane

0x9ca8,	// (0x0000a009) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9ca8,	// (0x0000a009) fshwr2_func_candi_cell_pane_g1

0x9cc8,	// (0x0000a029) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9cc8,	// (0x0000a029) fshwr2_func_candi_cell_pane_t1

0xf389,	// (0x0000f6ea) bg_button_pane_cp08

0x22ad,	// (0x0000260e) cell_fshwr2_syb_bg_pane

0xefdd,	// (0x0000f33e) cell_fshwr2_syb_bg_pane_g1

0xefe5,	// (0x0000f346) cell_fshwr2_syb_bg_pane_t1

0x107a,	// (0x000013db) main_tmo_pane

0xcfaa,	// (0x0000d30b) uni_indicator_pane_g1_ParamLimits

0xcfbf,	// (0x0000d320) uni_indicator_pane_g2_ParamLimits

0xcfd4,	// (0x0000d335) uni_indicator_pane_g3_ParamLimits

0xcfea,	// (0x0000d34b) uni_indicator_pane_g4_ParamLimits

0xcfea,	// (0x0000d34b) uni_indicator_pane_g4

0xcffe,	// (0x0000d35f) uni_indicator_pane_g5_ParamLimits

0xcffe,	// (0x0000d35f) uni_indicator_pane_g5

0xd012,	// (0x0000d373) uni_indicator_pane_g6_ParamLimits

0xd012,	// (0x0000d373) uni_indicator_pane_g6

0xf921,	// (0x0000fc82) uni_indicator_pane_g_ParamLimits

0xdd6b,	// (0x0000e0cc) popup_tmo_note_window_ParamLimits

0xdd6b,	// (0x0000e0cc) popup_tmo_note_window

0xf389,	// (0x0000f6ea) fshwr2_bg_pane

0x9cb9,	// (0x0000a01a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9cb9,	// (0x0000a01a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb1,	// (0x00010212) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb1,	// (0x00010212) fshwr2_func_candi_cell_pane_g

0x6228,	// (0x00006589) bg_popup_window_pane_cp01

0x9cf2,	// (0x0000a053) bg_popup_window_pane_g1_cp01

0x9cfb,	// (0x0000a05c) bg_popup_window_pane_cp22_ParamLimits

0x9cfb,	// (0x0000a05c) bg_popup_window_pane_cp22

0x9d09,	// (0x0000a06a) listscroll_tmo_link_pane_ParamLimits

0x9d09,	// (0x0000a06a) listscroll_tmo_link_pane

0x9d49,	// (0x0000a0aa) popup_tmo_note_window_g1_ParamLimits

0x9d49,	// (0x0000a0aa) popup_tmo_note_window_g1

0x9d56,	// (0x0000a0b7) tmo_note_info_pane_ParamLimits

0x9d56,	// (0x0000a0b7) tmo_note_info_pane

0xeff4,	// (0x0000f355) list_tmo_note_info_pane_g1_ParamLimits

0xeff4,	// (0x0000f355) list_tmo_note_info_pane_g1

0x9d87,	// (0x0000a0e8) list_tmo_note_info_pane_g2_ParamLimits

0x9d87,	// (0x0000a0e8) list_tmo_note_info_pane_g2

0x0001,

0xfeb6,	// (0x00010217) list_tmo_note_info_pane_g_ParamLimits

0xfeb6,	// (0x00010217) list_tmo_note_info_pane_g

0x9da3,	// (0x0000a104) list_tmo_note_info_text_pane_ParamLimits

0x9da3,	// (0x0000a104) list_tmo_note_info_text_pane

0x9e28,	// (0x0000a189) list_tmo_link_pane

0x9e35,	// (0x0000a196) scroll_pane_cp20

0x9e42,	// (0x0000a1a3) list_single_tmo_link_pane_ParamLimits

0x9e42,	// (0x0000a1a3) list_single_tmo_link_pane

0x9e52,	// (0x0000a1b3) list_single_tmo_link_pane_t1

0x9e60,	// (0x0000a1c1) list_tmo_note_info_text_pane_t1_ParamLimits

0x9e60,	// (0x0000a1c1) list_tmo_note_info_text_pane_t1

0xbae1,	// (0x0000be42) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbae1,	// (0x0000be42) aid_size_touch_scroll_bar_cp01

0xba10,	// (0x0000bd71) aid_size_touch_slider_marker

0xb14c,	// (0x0000b4ad) popup_settings_window_ParamLimits

0xb14c,	// (0x0000b4ad) popup_settings_window

0x2865,	// (0x00002bc6) popup_candi_list_indi_window

0x2eba,	// (0x0000321b) aid_touch_navi_pane_ParamLimits

0x80e4,	// (0x00008445) rs_clock_indi_pane

0x80ed,	// (0x0000844e) sctrl_sk_bottom_pane_ParamLimits

0x80fe,	// (0x0000845f) sctrl_sk_top_pane_ParamLimits

0x8942,	// (0x00008ca3) popup_fep_tooltip_window

0x9708,	// (0x00009a69) aid_size_cell_widget_grid_ParamLimits

0xed25,	// (0x0000f086) cell_ai5_widget_pane_g1_ParamLimits

0xed25,	// (0x0000f086) cell_ai5_widget_pane_g1

0xed78,	// (0x0000f0d9) cell_ai5_widget_pane_g6_ParamLimits

0xed84,	// (0x0000f0e5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe34,	// (0x00010195) cell_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x00010195) cell_ai5_widget_pane_g

0xee88,	// (0x0000f1e9) cell_ai5_widget_pane_t10_ParamLimits

0xee88,	// (0x0000f1e9) cell_ai5_widget_pane_t10

0xee9e,	// (0x0000f1ff) grid_ai5_widget_pane_ParamLimits

0x997f,	// (0x00009ce0) cell_contacts_ai5_widget_pane_ParamLimits

0x997f,	// (0x00009ce0) cell_contacts_ai5_widget_pane

0x9b5f,	// (0x00009ec0) popup_discreet_window_t3_ParamLimits

0x9b5f,	// (0x00009ec0) popup_discreet_window_t3

0x9c02,	// (0x00009f63) popup_fshwr2_char_preview_window_ParamLimits

0x9c02,	// (0x00009f63) popup_fshwr2_char_preview_window

0xf00b,	// (0x0000f36c) tmo_note_info_pane_t1

0xf020,	// (0x0000f381) tmo_note_info_pane_t2

0xf039,	// (0x0000f39a) tmo_note_info_pane_t3

0x9e04,	// (0x0000a165) tmo_note_info_pane_t4

0x9e16,	// (0x0000a177) tmo_note_info_pane_t5

0x0004,

0xfebb,	// (0x0001021c) tmo_note_info_pane_t

0x9e28,	// (0x0000a189) list_tmo_link_pane_ParamLimits

0x9e35,	// (0x0000a196) scroll_pane_cp20_ParamLimits

0xf389,	// (0x0000f6ea) bg_popup_fep_char_preview_window_cp01

0x9e79,	// (0x0000a1da) popup_fshwr2_char_preview_window_t1

0x9e87,	// (0x0000a1e8) popup_candi_list_indi_window_g1

0x9e90,	// (0x0000a1f1) bg_cell_contacts_ai5_widget_pane

0x9e9c,	// (0x0000a1fd) cell_contacts_ai5_widget_pane_g1

0x9eb0,	// (0x0000a211) cell_contacts_ai5_widget_pane_g2

0x9ebf,	// (0x0000a220) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec6,	// (0x00010227) cell_contacts_ai5_widget_pane_g

0x9ed2,	// (0x0000a233) cell_contacts_ai5_widget_pane_t1

0x107a,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0b3,	// (0x0000f414) settings_container_pane

0x22ad,	// (0x0000260e) listscroll_set_pane_copy1

0x56f5,	// (0x00005a56) scroll_pane_cp121_copy1

0x9f58,	// (0x0000a2b9) set_content_pane_copy1

0xf0bf,	// (0x0000f420) aid_height_set_list_copy1_ParamLimits

0xf0bf,	// (0x0000f420) aid_height_set_list_copy1

0x4c2e,	// (0x00004f8f) aid_size_parent_copy1_ParamLimits

0x4c2e,	// (0x00004f8f) aid_size_parent_copy1

0xf0cb,	// (0x0000f42c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0cb,	// (0x0000f42c) button_value_adjust_pane_cp6_copy1

0x283d,	// (0x00002b9e) list_highlight_pane_cp2_copy1_ParamLimits

0x283d,	// (0x00002b9e) list_highlight_pane_cp2_copy1

0xf0df,	// (0x0000f440) list_set_pane_copy1_ParamLimits

0xf0df,	// (0x0000f440) list_set_pane_copy1

0xf04e,	// (0x0000f3af) main_pane_set_t1_copy1_ParamLimits

0xf04e,	// (0x0000f3af) main_pane_set_t1_copy1

0xf088,	// (0x0000f3e9) main_pane_set_t2_copy1_ParamLimits

0xf088,	// (0x0000f3e9) main_pane_set_t2_copy1

0xf1a6,	// (0x0000f507) main_pane_set_t3_copy1

0xf1b4,	// (0x0000f515) main_pane_set_t4_copy1

0xf0a7,	// (0x0000f408) set_content_pane_g1_copy1_ParamLimits

0xf0a7,	// (0x0000f408) set_content_pane_g1_copy1

0xf1c2,	// (0x0000f523) setting_code_pane_copy1

0xa06d,	// (0x0000a3ce) setting_slider_graphic_pane_copy1

0xa06d,	// (0x0000a3ce) setting_slider_pane_copy1

0xa06d,	// (0x0000a3ce) setting_text_pane_copy1

0xa077,	// (0x0000a3d8) setting_volume_pane_copy1

0xf1cc,	// (0x0000f52d) settings_code_pane_cp2_copy1

0xf1d4,	// (0x0000f535) settings_code_pane_cp_copy1_ParamLimits

0xf1d4,	// (0x0000f535) settings_code_pane_cp_copy1

0xf1e8,	// (0x0000f549) volume_set_pane_copy1

0xf1f4,	// (0x0000f555) volume_set_pane_g10_copy1

0xf200,	// (0x0000f561) volume_set_pane_g1_copy1

0xf20a,	// (0x0000f56b) volume_set_pane_g2_copy1

0xf214,	// (0x0000f575) volume_set_pane_g3_copy1

0xf21e,	// (0x0000f57f) volume_set_pane_g4_copy1

0xf228,	// (0x0000f589) volume_set_pane_g5_copy1

0xf232,	// (0x0000f593) volume_set_pane_g6_copy1

0xf23c,	// (0x0000f59d) volume_set_pane_g7_copy1

0xf246,	// (0x0000f5a7) volume_set_pane_g8_copy1

0xf250,	// (0x0000f5b1) volume_set_pane_g9_copy1

0x01ae,	// (0x0000050f) bg_set_opt_pane_cp_copy1_ParamLimits

0x01ae,	// (0x0000050f) bg_set_opt_pane_cp_copy1

0xa10e,	// (0x0000a46f) setting_slider_pane_t1_copy1_ParamLimits

0xa10e,	// (0x0000a46f) setting_slider_pane_t1_copy1

0xf25a,	// (0x0000f5bb) setting_slider_pane_t2_copy1_ParamLimits

0xf25a,	// (0x0000f5bb) setting_slider_pane_t2_copy1

0xf274,	// (0x0000f5d5) setting_slider_pane_t3_copy1_ParamLimits

0xf274,	// (0x0000f5d5) setting_slider_pane_t3_copy1

0xf28c,	// (0x0000f5ed) slider_set_pane_copy1_ParamLimits

0xf28c,	// (0x0000f5ed) slider_set_pane_copy1

0x11b6,	// (0x00001517) set_opt_bg_pane_g1_copy2

0x11be,	// (0x0000151f) set_opt_bg_pane_g2_copy2

0xa174,	// (0x0000a4d5) set_opt_bg_pane_g3_copy2

0x11ce,	// (0x0000152f) set_opt_bg_pane_g4_copy2

0x11d6,	// (0x00001537) set_opt_bg_pane_g5_copy2

0x11de,	// (0x0000153f) set_opt_bg_pane_g6_copy2

0xf2a2,	// (0x0000f603) set_opt_bg_pane_g7_copy2

0xa188,	// (0x0000a4e9) set_opt_bg_pane_g8_copy2

0xa192,	// (0x0000a4f3) set_opt_bg_pane_g9_copy2

0xa19c,	// (0x0000a4fd) aid_size_touch_slider_mark_copy1_ParamLimits

0xa19c,	// (0x0000a4fd) aid_size_touch_slider_mark_copy1

0xa1b0,	// (0x0000a511) slider_set_pane_g1_copy1

0xa1b9,	// (0x0000a51a) slider_set_pane_g2_copy1

0x4b95,	// (0x00004ef6) slider_set_pane_g3_copy1_ParamLimits

0x4b95,	// (0x00004ef6) slider_set_pane_g3_copy1

0x4ba9,	// (0x00004f0a) slider_set_pane_g4_copy1_ParamLimits

0x4ba9,	// (0x00004f0a) slider_set_pane_g4_copy1

0x4bc1,	// (0x00004f22) slider_set_pane_g5_copy1_ParamLimits

0x4bc1,	// (0x00004f22) slider_set_pane_g5_copy1

0x4b95,	// (0x00004ef6) slider_set_pane_g6_copy1_ParamLimits

0x4b95,	// (0x00004ef6) slider_set_pane_g6_copy1

0xf2ac,	// (0x0000f60d) slider_set_pane_g7_copy1_ParamLimits

0xf2ac,	// (0x0000f60d) slider_set_pane_g7_copy1

0xf50c,	// (0x0000f86d) bg_set_opt_pane_cp2_copy1

0xa1d7,	// (0x0000a538) setting_slider_graphic_pane_g1_copy1

0xf2c2,	// (0x0000f623) setting_slider_graphic_pane_t1_copy1

0xf2d2,	// (0x0000f633) setting_slider_graphic_pane_t2_copy1

0xf2e2,	// (0x0000f643) slider_set_pane_cp_copy1

0xa210,	// (0x0000a571) input_focus_pane_cp1_copy1

0xa219,	// (0x0000a57a) list_set_text_pane_copy1

0xa221,	// (0x0000a582) setting_text_pane_g1_copy1

0x0297,	// (0x000005f8) set_text_pane_t1_copy1

0xa210,	// (0x0000a571) input_focus_pane_cp2_copy1

0xa221,	// (0x0000a582) setting_code_pane_g1_copy1

0xf2ea,	// (0x0000f64b) setting_code_pane_t1_copy1

0xf2f8,	// (0x0000f659) list_set_graphic_pane_copy1

0xf50c,	// (0x0000f86d) bg_set_opt_pane_cp4_copy1

0xbdfa,	// (0x0000c15b) list_set_graphic_pane_g1_copy1_ParamLimits

0xbdfa,	// (0x0000c15b) list_set_graphic_pane_g1_copy1

0xf30a,	// (0x0000f66b) list_set_graphic_pane_g2_copy1

0xbe12,	// (0x0000c173) list_set_graphic_pane_t1_copy1_ParamLimits

0xbe12,	// (0x0000c173) list_set_graphic_pane_t1_copy1

0x6228,	// (0x00006589) rs_clock_indi_pane_g1

0xa26b,	// (0x0000a5cc) rs_clock_indi_pane_t1

0xa279,	// (0x0000a5da) rs_indi_pane

0xa281,	// (0x0000a5e2) rs_indi_pane_g1

0xa28a,	// (0x0000a5eb) rs_indi_pane_g2

0xa293,	// (0x0000a5f4) rs_indi_pane_g3

0x0002,

0xfecd,	// (0x0001022e) rs_indi_pane_g

0x22ad,	// (0x0000260e) bg_popup_preview_window_pane_cp03

0xa29c,	// (0x0000a5fd) popup_fep_tooltip_window_t1

0x74aa,	// (0x0000780b) popup_note2_window_g2_ParamLimits

0x74aa,	// (0x0000780b) popup_note2_window_g2

0x0001,

0xfc66,	// (0x0000ffc7) popup_note2_window_g_ParamLimits

0xfc66,	// (0x0000ffc7) popup_note2_window_g

0x7ab9,	// (0x00007e1a) bg_popup_sub_pane_cp11_ParamLimits

0x7ac6,	// (0x00007e27) cell_ai3_links_pane_g1_ParamLimits

0x7add,	// (0x00007e3e) cell_ai3_links_pane_t1

0x0297,	// (0x000005f8) set_text_pane_t1_copy1_ParamLimits

0x21ba,	// (0x0000251b) cell_graphic_popup_pane_cp2_ParamLimits

0x21ba,	// (0x0000251b) cell_graphic_popup_pane_cp2

0xa2aa,	// (0x0000a60b) cell_graphic_popup_pane_g1_cp2

0x082a,	// (0x00000b8b) cell_graphic_popup_pane_g2_cp2

0xa2b2,	// (0x0000a613) cell_graphic_popup_pane_g3_cp2

0xa2ba,	// (0x0000a61b) cell_graphic_popup_pane_t2_cp2

0x083b,	// (0x00000b9c) grid_highlight_pane_cp3_cp2

0x171d,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x107a,	// (0x000013db) main_tmo_pane_ParamLimits

0xdd5f,	// (0x0000e0c0) popup_tmo_big_image_note_window

0xed15,	// (0x0000f076) cell_ai5_widget_list_pane

0xed1d,	// (0x0000f07e) cell_ai5_widget_lrg_icon_pane

0xf00b,	// (0x0000f36c) tmo_note_info_pane_t1_ParamLimits

0xf020,	// (0x0000f381) tmo_note_info_pane_t2_ParamLimits

0xf039,	// (0x0000f39a) tmo_note_info_pane_t3_ParamLimits

0x9e04,	// (0x0000a165) tmo_note_info_pane_t4_ParamLimits

0x9e16,	// (0x0000a177) tmo_note_info_pane_t5_ParamLimits

0xfebb,	// (0x0001021c) tmo_note_info_pane_t_ParamLimits

0xf0b3,	// (0x0000f414) settings_container_pane_ParamLimits

0xa208,	// (0x0000a569) indicator_popup_pane_cp5

0xa208,	// (0x0000a569) indicator_popup_pane_cp6

0xf2f8,	// (0x0000f659) list_set_graphic_pane_copy1_ParamLimits

0xf389,	// (0x0000f6ea) bg_popup_window_pane_cp23

0xa2c8,	// (0x0000a629) popup_tmo_big_image_note_window_g1

0xa2d4,	// (0x0000a635) popup_tmo_big_image_note_window_t1

0xa2e4,	// (0x0000a645) popup_tmo_big_image_note_window_t2

0xa2f4,	// (0x0000a655) popup_tmo_big_image_note_window_t3

0x0002,

0xfed4,	// (0x00010235) popup_tmo_big_image_note_window_t

0xf312,	// (0x0000f673) cell_ai5_widget_lrg_icon_pane_g1

0xf31a,	// (0x0000f67b) cell_ai5_widget_lrg_icon_pane_t1

0xf328,	// (0x0000f689) cell_ai5_widget_list_row_pane_ParamLimits

0xf328,	// (0x0000f689) cell_ai5_widget_list_row_pane

0xf341,	// (0x0000f6a2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf341,	// (0x0000f6a2) cell_ai5_widget_list_row_pane_g1

0xf34e,	// (0x0000f6af) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf34e,	// (0x0000f6af) cell_ai5_widget_list_row_pane_t1

0xf366,	// (0x0000f6c7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf366,	// (0x0000f6c7) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedb,	// (0x0001023c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedb,	// (0x0001023c) cell_ai5_widget_list_row_pane_t

0xf389,	// (0x0000f6ea) main_fep_vtchi_ss_pane

0xa36a,	// (0x0000a6cb) popup_fep_char_pre_window

0xa372,	// (0x0000a6d3) popup_fep_ituss_window

0xa393,	// (0x0000a6f4) popup_fep_vkbss_window

0xa3b4,	// (0x0000a715) grid_vkbss_keypad_pane_ParamLimits

0xa3b4,	// (0x0000a715) grid_vkbss_keypad_pane

0xa3c4,	// (0x0000a725) ituss_keypad_pane

0xa3dd,	// (0x0000a73e) aid_vkbss_key_offset_ParamLimits

0xa3dd,	// (0x0000a73e) aid_vkbss_key_offset

0xa3e9,	// (0x0000a74a) cell_vkbss_key_pane_ParamLimits

0xa3e9,	// (0x0000a74a) cell_vkbss_key_pane

0xa3ff,	// (0x0000a760) bg_cell_vkbss_key_g1_ParamLimits

0xa3ff,	// (0x0000a760) bg_cell_vkbss_key_g1

0xa40b,	// (0x0000a76c) cell_vkbss_key_3p_pane_ParamLimits

0xa40b,	// (0x0000a76c) cell_vkbss_key_3p_pane

0xa425,	// (0x0000a786) cell_vkbss_key_g1_ParamLimits

0xa425,	// (0x0000a786) cell_vkbss_key_g1

0xa43f,	// (0x0000a7a0) cell_vkbss_key_t1_ParamLimits

0xa43f,	// (0x0000a7a0) cell_vkbss_key_t1

0xa46a,	// (0x0000a7cb) cell_ituss_key_pane_ParamLimits

0xa46a,	// (0x0000a7cb) cell_ituss_key_pane

0xa47a,	// (0x0000a7db) bg_cell_ituss_key_g1_ParamLimits

0xa47a,	// (0x0000a7db) bg_cell_ituss_key_g1

0xa486,	// (0x0000a7e7) cell_ituss_key_pane_g1_ParamLimits

0xa486,	// (0x0000a7e7) cell_ituss_key_pane_g1

0xa492,	// (0x0000a7f3) cell_ituss_key_pane_g2_ParamLimits

0xa492,	// (0x0000a7f3) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x00010241) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x00010241) cell_ituss_key_pane_g

0xa4ae,	// (0x0000a80f) cell_ituss_key_t1_ParamLimits

0xa4ae,	// (0x0000a80f) cell_ituss_key_t1

0xa4dc,	// (0x0000a83d) cell_ituss_key_t2_ParamLimits

0xa4dc,	// (0x0000a83d) cell_ituss_key_t2

0xa50d,	// (0x0000a86e) cell_ituss_key_t3_ParamLimits

0xa50d,	// (0x0000a86e) cell_ituss_key_t3

0xa53e,	// (0x0000a89f) cell_ituss_key_t4_ParamLimits

0xa53e,	// (0x0000a89f) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x00010246) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x00010246) cell_ituss_key_t

0xa56f,	// (0x0000a8d0) cell_vkbss_key_3p_pane_g1

0xa577,	// (0x0000a8d8) cell_vkbss_key_3p_pane_g2

0xa57f,	// (0x0000a8e0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0001024f) cell_vkbss_key_3p_pane_g

0xf389,	// (0x0000f6ea) bg_popup_fep_char_preview_window_cp02

0xa587,	// (0x0000a8e8) popup_fep_char_pre_window_t1

0xed0b,	// (0x0000f06c) main_ai5_sk_pane

0x9e90,	// (0x0000a1f1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9e9c,	// (0x0000a1fd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9eb0,	// (0x0000a211) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9ebf,	// (0x0000a220) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec6,	// (0x00010227) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9ed2,	// (0x0000a233) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x107a,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf378,	// (0x0000f6d9) main_ai5_sk_pane_g1

0x3a63,	// (0x00003dc4) popup_query_code_window_g1

0xa388,	// (0x0000a6e9) popup_fep_vkb_icf_pane

0xa39e,	// (0x0000a6ff) popup_fep_vtchi_icf_pane

0x107a,	// (0x000013db) bg_icf_pane

0xa5ae,	// (0x0000a90f) list_vkb_icf_pane

0x107a,	// (0x000013db) bg_icf_pane_cp01

0x7e1f,	// (0x00008180) vtchi_icf_list_pane

0xa5ce,	// (0x0000a92f) list_vkb_icf_pane_t1_ParamLimits

0xa5ce,	// (0x0000a92f) list_vkb_icf_pane_t1

0xa5e5,	// (0x0000a946) vtchi_icf_list_pane_t1_ParamLimits

0xa5e5,	// (0x0000a946) vtchi_icf_list_pane_t1

0xa372,	// (0x0000a6d3) popup_fep_ituss_window_ParamLimits

0xa39e,	// (0x0000a6ff) popup_fep_vtchi_icf_pane_ParamLimits

0xa3c4,	// (0x0000a725) ituss_keypad_pane_ParamLimits

0xa3d4,	// (0x0000a735) ituss_sks_pane

0x107a,	// (0x000013db) bg_icf_pane_ParamLimits

0xa59f,	// (0x0000a900) icf_edit_indi_pane_ParamLimits

0xa59f,	// (0x0000a900) icf_edit_indi_pane

0xa5ae,	// (0x0000a90f) list_vkb_icf_pane_ParamLimits

0x107a,	// (0x000013db) bg_icf_pane_cp01_ParamLimits

0xa5ba,	// (0x0000a91b) icf_edit_indi_pane_cp01_ParamLimits

0xa5ba,	// (0x0000a91b) icf_edit_indi_pane_cp01

0xa5c6,	// (0x0000a927) vtchi_query_pane

0x66dc,	// (0x00006a3d) icf_edit_indi_pane_g1_ParamLimits

0x66dc,	// (0x00006a3d) icf_edit_indi_pane_g1

0xa5fe,	// (0x0000a95f) icf_edit_indi_pane_g2_ParamLimits

0xa5fe,	// (0x0000a95f) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x00010256) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x00010256) icf_edit_indi_pane_g

0xa60a,	// (0x0000a96b) icf_edit_indi_pane_t1

0xa618,	// (0x0000a979) bg_input_focus_pane_cp042

0x0a0e,	// (0x00000d6f) vtchi_button_pane

0xa621,	// (0x0000a982) vtchi_query_pane_t1

0xa62f,	// (0x0000a990) vtchi_query_pane_t2

0xa63d,	// (0x0000a99e) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001025b) vtchi_query_pane_t

0xf389,	// (0x0000f6ea) bg_button_pane_cp13

0xa64b,	// (0x0000a9ac) vtchi_button_pane_g1

0x8463,	// (0x000087c4) ituss_sks_pane_g1

0xa653,	// (0x0000a9b4) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00010262) ituss_sks_pane_g

0xa65c,	// (0x0000a9bd) ituss_sks_pane_t1

0xa66a,	// (0x0000a9cb) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00010267) ituss_sks_pane_t

0x5c28,	// (0x00005f89) indicator_nsta_pane_cp_g1

0x5c31,	// (0x00005f92) indicator_nsta_pane_cp_g2

0x5c39,	// (0x00005f9a) indicator_nsta_pane_cp_g3

0x5c41,	// (0x00005fa2) indicator_nsta_pane_cp_g4

0x5c49,	// (0x00005faa) indicator_nsta_pane_cp_g5

0x5c51,	// (0x00005fb2) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0000fe11) indicator_nsta_pane_cp_g

0xeadf,	// (0x0000ee40) cell_graphic2_pane_t2_ParamLimits

0xeadf,	// (0x0000ee40) cell_graphic2_pane_t2

0x0001,

0xfdbd,	// (0x0001011e) cell_graphic2_pane_t_ParamLimits

0xfdbd,	// (0x0001011e) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00024ee8 };

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
0xa2c3,	// (0x0002f1ab) Screen

0xa2cf,	// (0x0002f1b7) application_window_ParamLimits

0xa2cf,	// (0x0002f1b7) application_window

0xcc93,	// (0x00031b7b) screen_g1

0xa307,	// (0x0002f1ef) area_bottom_pane_ParamLimits

0xa307,	// (0x0002f1ef) area_bottom_pane

0xf2f3,	// (0x000341db) area_top_pane_ParamLimits

0xf2f3,	// (0x000341db) area_top_pane

0xf387,	// (0x0003426f) main_pane_ParamLimits

0xf387,	// (0x0003426f) main_pane

0xcc9d,	// (0x00031b85) misc_graphics

0xb546,	// (0x0003042e) battery_pane_ParamLimits

0xb546,	// (0x0003042e) battery_pane

0x3c91,	// (0x00028b79) bg_status_flat_pane_g8

0x3c99,	// (0x00028b81) bg_status_flat_pane_g9

0x3091,	// (0x00027f79) context_pane_ParamLimits

0x3091,	// (0x00027f79) context_pane

0xb6bd,	// (0x000305a5) navi_pane_ParamLimits

0xb6bd,	// (0x000305a5) navi_pane

0xb747,	// (0x0003062f) signal_pane_ParamLimits

0xb747,	// (0x0003062f) signal_pane

0x0008,

0xf84f,	// (0x00034737) bg_status_flat_pane_g

0xb7d7,	// (0x000306bf) status_pane_g1_ParamLimits

0xb7d7,	// (0x000306bf) status_pane_g1

0xb7ed,	// (0x000306d5) status_pane_g2_ParamLimits

0xb7ed,	// (0x000306d5) status_pane_g2

0x32ca,	// (0x000281b2) status_pane_g3_ParamLimits

0x32ca,	// (0x000281b2) status_pane_g3

0x0004,

0xf77b,	// (0x00034663) status_pane_g_ParamLimits

0xf77b,	// (0x00034663) status_pane_g

0xb7f9,	// (0x000306e1) title_pane_ParamLimits

0xb7f9,	// (0x000306e1) title_pane

0xb860,	// (0x00030748) uni_indicator_pane_ParamLimits

0xb860,	// (0x00030748) uni_indicator_pane

0x2efb,	// (0x00027de3) bg_list_pane_ParamLimits

0x2efb,	// (0x00027de3) bg_list_pane

0x9ff1,	// (0x0002eed9) find_pane

0x34c5,	// (0x000283ad) listscroll_app_pane_ParamLimits

0x34c5,	// (0x000283ad) listscroll_app_pane

0x2f27,	// (0x00027e0f) listscroll_form_pane

0x9ff9,	// (0x0002eee1) listscroll_gen_pane_ParamLimits

0x9ff9,	// (0x0002eee1) listscroll_gen_pane

0x106c,	// (0x00025f54) listscroll_set_pane

0x482e,	// (0x00029716) main_idle_act_pane

0x2bf4,	// (0x00027adc) main_idle_trad_pane

0x2bf4,	// (0x00027adc) main_list_empty_pane

0x2f1b,	// (0x00027e03) main_midp_pane

0x2f41,	// (0x00027e29) main_pane_g1_ParamLimits

0x2f41,	// (0x00027e29) main_pane_g1

0xad9a,	// (0x0002fc82) popup_ai_message_window_ParamLimits

0xad9a,	// (0x0002fc82) popup_ai_message_window

0xae3a,	// (0x0002fd22) popup_fep_china_uni_window_ParamLimits

0xae3a,	// (0x0002fd22) popup_fep_china_uni_window

0x1188,	// (0x00026070) popup_fep_japan_candidate_window_ParamLimits

0x1188,	// (0x00026070) popup_fep_japan_candidate_window

0x11b2,	// (0x0002609a) popup_fep_japan_predictive_window_ParamLimits

0x11b2,	// (0x0002609a) popup_fep_japan_predictive_window

0xae9a,	// (0x0002fd82) popup_find_window

0xaeb7,	// (0x0002fd9f) popup_grid_graphic_window_ParamLimits

0xaeb7,	// (0x0002fd9f) popup_grid_graphic_window

0x1225,	// (0x0002610d) popup_large_graphic_colour_window

0xaf61,	// (0x0002fe49) popup_menu_window_ParamLimits

0xaf61,	// (0x0002fe49) popup_menu_window

0xb151,	// (0x00030039) popup_note_image_window

0xb111,	// (0x0002fff9) popup_note_wait_window_ParamLimits

0xb111,	// (0x0002fff9) popup_note_wait_window

0xb169,	// (0x00030051) popup_note_window_ParamLimits

0xb169,	// (0x00030051) popup_note_window

0xb217,	// (0x000300ff) popup_query_code_window_ParamLimits

0xb217,	// (0x000300ff) popup_query_code_window

0x1491,	// (0x00026379) popup_query_data_code_window_ParamLimits

0x1491,	// (0x00026379) popup_query_data_code_window

0xb257,	// (0x0003013f) popup_query_data_window_ParamLimits

0xb257,	// (0x0003013f) popup_query_data_window

0xb2eb,	// (0x000301d3) popup_query_sat_info_window_ParamLimits

0xb2eb,	// (0x000301d3) popup_query_sat_info_window

0xb396,	// (0x0003027e) popup_snote_single_graphic_window_ParamLimits

0xb396,	// (0x0003027e) popup_snote_single_graphic_window

0xb396,	// (0x0003027e) popup_snote_single_text_window_ParamLimits

0xb396,	// (0x0003027e) popup_snote_single_text_window

0x152c,	// (0x00026414) popup_sub_window_general

0x1672,	// (0x0002655a) popup_window_general_ParamLimits

0x1672,	// (0x0002655a) popup_window_general

0x2f4f,	// (0x00027e37) power_save_pane

0x0f1b,	// (0x00025e03) control_pane_g1_ParamLimits

0x0f1b,	// (0x00025e03) control_pane_g1

0x0f3e,	// (0x00025e26) control_pane_g2_ParamLimits

0x0f3e,	// (0x00025e26) control_pane_g2

0x2ebe,	// (0x00027da6) control_pane_g3_ParamLimits

0x2ebe,	// (0x00027da6) control_pane_g3

0x0007,

0xf763,	// (0x0003464b) control_pane_g_ParamLimits

0xf763,	// (0x0003464b) control_pane_g

0xacb1,	// (0x0002fb99) control_pane_t1_ParamLimits

0xacb1,	// (0x0002fb99) control_pane_t1

0xad01,	// (0x0002fbe9) control_pane_t2_ParamLimits

0xad01,	// (0x0002fbe9) control_pane_t2

0x0002,

0xf774,	// (0x0003465c) control_pane_t_ParamLimits

0xf774,	// (0x0003465c) control_pane_t

0x2de3,	// (0x00027ccb) navi_navi_volume_pane_cp1

0x2deb,	// (0x00027cd3) status_small_icon_pane

0x2df3,	// (0x00027cdb) status_small_pane_g1_ParamLimits

0x2df3,	// (0x00027cdb) status_small_pane_g1

0x2e27,	// (0x00027d0f) status_small_pane_g2_ParamLimits

0x2e27,	// (0x00027d0f) status_small_pane_g2

0x2e33,	// (0x00027d1b) status_small_pane_g3_ParamLimits

0x2e33,	// (0x00027d1b) status_small_pane_g3

0xac63,	// (0x0002fb4b) status_small_pane_g4_ParamLimits

0xac63,	// (0x0002fb4b) status_small_pane_g4

0xac71,	// (0x0002fb59) status_small_pane_g5_ParamLimits

0xac71,	// (0x0002fb59) status_small_pane_g5

0x2e59,	// (0x00027d41) status_small_pane_g6_ParamLimits

0x2e59,	// (0x00027d41) status_small_pane_g6

0x0007,

0xf752,	// (0x0003463a) status_small_pane_g_ParamLimits

0xf752,	// (0x0003463a) status_small_pane_g

0x2e88,	// (0x00027d70) status_small_pane_t1

0xac87,	// (0x0002fb6f) status_small_wait_pane_ParamLimits

0xac87,	// (0x0002fb6f) status_small_wait_pane

0xaae0,	// (0x0002f9c8) aid_levels_signal_ParamLimits

0xaae0,	// (0x0002f9c8) aid_levels_signal

0xaaf8,	// (0x0002f9e0) signal_pane_g1_ParamLimits

0xaaf8,	// (0x0002f9e0) signal_pane_g1

0xab13,	// (0x0002f9fb) signal_pane_g2_ParamLimits

0xab13,	// (0x0002f9fb) signal_pane_g2

0x0003,

0xf6e3,	// (0x000345cb) signal_pane_g_ParamLimits

0xf6e3,	// (0x000345cb) signal_pane_g

0x081c,	// (0x00025704) context_pane_g1

0xa4f3,	// (0x0002f3db) title_pane_g1

0xa536,	// (0x0002f41e) title_pane_t1

0xccb3,	// (0x00031b9b) title_pane_t2

0xccd9,	// (0x00031bc1) title_pane_t3

0x0002,

0xf532,	// (0x0003441a) title_pane_t

0xb888,	// (0x00030770) aid_levels_battery_ParamLimits

0xb888,	// (0x00030770) aid_levels_battery

0xb8a4,	// (0x0003078c) battery_pane_g1_ParamLimits

0xb8a4,	// (0x0003078c) battery_pane_g1

0xb8c1,	// (0x000307a9) battery_pane_g2_ParamLimits

0xb8c1,	// (0x000307a9) battery_pane_g2

0x0001,

0xf786,	// (0x0003466e) battery_pane_g_ParamLimits

0xf786,	// (0x0003466e) battery_pane_g

0xbcba,	// (0x00030ba2) uni_indicator_pane_g1

0xbcd0,	// (0x00030bb8) uni_indicator_pane_g2

0xbce6,	// (0x00030bce) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000347df) uni_indicator_pane_g

0x0d58,	// (0x00025c40) navi_icon_pane_ParamLimits

0x0d58,	// (0x00025c40) navi_icon_pane

0x0c9f,	// (0x00025b87) navi_midp_pane

0x0d74,	// (0x00025c5c) navi_navi_pane

0x0d7e,	// (0x00025c66) navi_text_pane_ParamLimits

0x0d7e,	// (0x00025c66) navi_text_pane

0xcc93,	// (0x00031b7b) status_small_wait_pane_g1

0xcffa,	// (0x00031ee2) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000347da) status_small_wait_pane_g

0xbc59,	// (0x00030b41) navi_navi_icon_text_pane

0xbc61,	// (0x00030b49) navi_navi_pane_g1_ParamLimits

0xbc61,	// (0x00030b49) navi_navi_pane_g1

0xbc73,	// (0x00030b5b) navi_navi_pane_g2_ParamLimits

0xbc73,	// (0x00030b5b) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000347a8) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000347a8) navi_navi_pane_g

0x431a,	// (0x00029202) navi_navi_tabs_pane

0xbc85,	// (0x00030b6d) navi_navi_text_pane

0xbc59,	// (0x00030b41) navi_navi_volume_pane

0xbc47,	// (0x00030b2f) navi_text_pane_t1

0xbc3b,	// (0x00030b23) navi_icon_pane_g1

0x4211,	// (0x000290f9) navi_navi_text_pane_t1

0xbc2a,	// (0x00030b12) navi_navi_volume_pane_g1

0xbc32,	// (0x00030b1a) volume_small_pane

0xbb86,	// (0x00030a6e) navi_navi_icon_text_pane_g1

0xbb8e,	// (0x00030a76) navi_navi_icon_text_pane_t1

0x0d74,	// (0x00025c5c) navi_tabs_2_long_pane

0x0d74,	// (0x00025c5c) navi_tabs_2_pane

0x0d74,	// (0x00025c5c) navi_tabs_3_long_pane

0x0d74,	// (0x00025c5c) navi_tabs_3_pane

0x0d74,	// (0x00025c5c) navi_tabs_4_pane

0xbb66,	// (0x00030a4e) tabs_2_active_pane_ParamLimits

0xbb66,	// (0x00030a4e) tabs_2_active_pane

0xbb76,	// (0x00030a5e) tabs_2_passive_pane_ParamLimits

0xbb76,	// (0x00030a5e) tabs_2_passive_pane

0xbb34,	// (0x00030a1c) tabs_3_active_pane_ParamLimits

0xbb34,	// (0x00030a1c) tabs_3_active_pane

0xbb44,	// (0x00030a2c) tabs_3_passive_pane_ParamLimits

0xbb44,	// (0x00030a2c) tabs_3_passive_pane

0xbb55,	// (0x00030a3d) tabs_3_passive_pane_cp_ParamLimits

0xbb55,	// (0x00030a3d) tabs_3_passive_pane_cp

0xbaf0,	// (0x000309d8) tabs_4_active_pane_ParamLimits

0xbaf0,	// (0x000309d8) tabs_4_active_pane

0xbb01,	// (0x000309e9) tabs_4_passive_pane_ParamLimits

0xbb01,	// (0x000309e9) tabs_4_passive_pane

0xbb12,	// (0x000309fa) tabs_4_passive_pane_cp_ParamLimits

0xbb12,	// (0x000309fa) tabs_4_passive_pane_cp

0xbb23,	// (0x00030a0b) tabs_4_passive_pane_cp2_ParamLimits

0xbb23,	// (0x00030a0b) tabs_4_passive_pane_cp2

0xbacc,	// (0x000309b4) tabs_2_long_active_pane_ParamLimits

0xbacc,	// (0x000309b4) tabs_2_long_active_pane

0xbade,	// (0x000309c6) tabs_2_long_passive_pane_ParamLimits

0xbade,	// (0x000309c6) tabs_2_long_passive_pane

0xba93,	// (0x0003097b) tabs_3_long_active_pane_ParamLimits

0xba93,	// (0x0003097b) tabs_3_long_active_pane

0xbaa6,	// (0x0003098e) tabs_3_long_passive_pane_ParamLimits

0xbaa6,	// (0x0003098e) tabs_3_long_passive_pane

0xbab9,	// (0x000309a1) tabs_3_long_passive_pane_cp_ParamLimits

0xbab9,	// (0x000309a1) tabs_3_long_passive_pane_cp

0x17c0,	// (0x000266a8) volume_small_pane_g1

0xba42,	// (0x0003092a) volume_small_pane_g2

0xba4b,	// (0x00030933) volume_small_pane_g3

0xba54,	// (0x0003093c) volume_small_pane_g4

0xba5d,	// (0x00030945) volume_small_pane_g5

0xba66,	// (0x0003094e) volume_small_pane_g6

0xba6f,	// (0x00030957) volume_small_pane_g7

0xba78,	// (0x00030960) volume_small_pane_g8

0xba81,	// (0x00030969) volume_small_pane_g9

0xba8a,	// (0x00030972) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00034774) volume_small_pane_g

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp2_ParamLimits

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp2

0xa5c2,	// (0x0002f4aa) tabs_3_active_pane_g1

0xa5ca,	// (0x0002f4b2) tabs_3_active_pane_t1

0xcceb,	// (0x00031bd3) bg_passive_tab_pane_cp2_ParamLimits

0xcceb,	// (0x00031bd3) bg_passive_tab_pane_cp2

0xa5c2,	// (0x0002f4aa) tabs_3_passive_pane_g1

0xa5ca,	// (0x0002f4b2) tabs_3_passive_pane_t1

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp3_ParamLimits

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp3

0xa5dc,	// (0x0002f4c4) tabs_4_active_pane_g1

0xa5e4,	// (0x0002f4cc) tabs_4_active_pane_t1

0xcceb,	// (0x00031bd3) bg_passive_tab_pane_cp3_ParamLimits

0xcceb,	// (0x00031bd3) bg_passive_tab_pane_cp3

0xa5dc,	// (0x0002f4c4) tabs_4_1_passive_pane_g1

0xa5e4,	// (0x0002f4cc) tabs_4_1_passive_pane_t1

0x2f1b,	// (0x00027e03) list_highlight_pane_cp2

0xbd79,	// (0x00030c61) list_set_pane_ParamLimits

0xbd79,	// (0x00030c61) list_set_pane

0xbe3b,	// (0x00030d23) main_pane_set_t1_ParamLimits

0xbe3b,	// (0x00030d23) main_pane_set_t1

0xbe5b,	// (0x00030d43) main_pane_set_t2_ParamLimits

0xbe5b,	// (0x00030d43) main_pane_set_t2

0xbe6f,	// (0x00030d57) main_pane_set_t3_ParamLimits

0xbe6f,	// (0x00030d57) main_pane_set_t3

0xbe83,	// (0x00030d6b) main_pane_set_t4_ParamLimits

0xbe83,	// (0x00030d6b) main_pane_set_t4

0x0003,

0xf95c,	// (0x00034844) main_pane_set_t_ParamLimits

0xf95c,	// (0x00034844) main_pane_set_t

0xbe97,	// (0x00030d7f) setting_code_pane

0x497c,	// (0x00029864) setting_slider_graphic_pane

0x497c,	// (0x00029864) setting_slider_pane

0x497c,	// (0x00029864) setting_text_pane

0x497c,	// (0x00029864) setting_volume_pane

0xf496,	// (0x0003437e) volume_set_pane

0xccf9,	// (0x00031be1) bg_set_opt_pane_cp

0xf4a0,	// (0x00034388) setting_slider_pane_t1

0xf4b9,	// (0x000343a1) setting_slider_pane_t2

0xf4d3,	// (0x000343bb) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00034421) setting_slider_pane_t

0xf4eb,	// (0x000343d3) slider_set_pane

0xcc9d,	// (0x00031b85) bg_set_opt_pane_cp2

0xcd07,	// (0x00031bef) setting_slider_graphic_pane_g1

0xf501,	// (0x000343e9) setting_slider_graphic_pane_t1

0xf511,	// (0x000343f9) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00034428) setting_slider_graphic_pane_t

0xf521,	// (0x00034409) slider_set_pane_cp

0xcc9d,	// (0x00031b85) input_focus_pane_cp1

0x4815,	// (0x000296fd) list_set_text_pane

0xcc93,	// (0x00031b7b) setting_text_pane_g1

0xcc9d,	// (0x00031b85) input_focus_pane_cp2

0xcc93,	// (0x00031b7b) setting_code_pane_g1

0xcd10,	// (0x00031bf8) setting_code_pane_t1

0xea82,	// (0x0003396a) set_text_pane_t1_ParamLimits

0xea82,	// (0x0003396a) set_text_pane_t1

0xd393,	// (0x0003227b) set_opt_bg_pane_g1

0xd39b,	// (0x00032283) set_opt_bg_pane_g2

0x47ed,	// (0x000296d5) set_opt_bg_pane_g3

0xd3ab,	// (0x00032293) set_opt_bg_pane_g4

0xd3b3,	// (0x0003229b) set_opt_bg_pane_g5

0xd3bb,	// (0x000322a3) set_opt_bg_pane_g6

0x47f7,	// (0x000296df) set_opt_bg_pane_g7

0x4801,	// (0x000296e9) set_opt_bg_pane_g8

0x480b,	// (0x000296f3) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00034831) set_opt_bg_pane_g

0x47e0,	// (0x000296c8) slider_set_pane_g1

0x19a4,	// (0x0002688c) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00034822) slider_set_pane_g

0x192c,	// (0x00026814) volume_set_pane_g1

0x1936,	// (0x0002681e) volume_set_pane_g2

0x1940,	// (0x00026828) volume_set_pane_g3

0x194a,	// (0x00026832) volume_set_pane_g4

0x1954,	// (0x0002683c) volume_set_pane_g5

0x195e,	// (0x00026846) volume_set_pane_g6

0x1968,	// (0x00026850) volume_set_pane_g7

0x1972,	// (0x0002685a) volume_set_pane_g8

0x197c,	// (0x00026864) volume_set_pane_g9

0x1986,	// (0x0002686e) volume_set_pane_g10

0x0009,

0xf912,	// (0x000347fa) volume_set_pane_g

0xa5f6,	// (0x0002f4de) indicator_pane_ParamLimits

0xa5f6,	// (0x0002f4de) indicator_pane

0xa622,	// (0x0002f50a) main_idle_pane_g2_ParamLimits

0xa622,	// (0x0002f50a) main_idle_pane_g2

0xa65a,	// (0x0002f542) main_pane_idle_g1_ParamLimits

0xa65a,	// (0x0002f542) main_pane_idle_g1

0xcd1e,	// (0x00031c06) popup_clock_digital_analogue_window_ParamLimits

0xcd1e,	// (0x00031c06) popup_clock_digital_analogue_window

0xa684,	// (0x0002f56c) soft_indicator_pane_ParamLimits

0xa684,	// (0x0002f56c) soft_indicator_pane

0xa6a0,	// (0x0002f588) wallpaper_pane_ParamLimits

0xa6a0,	// (0x0002f588) wallpaper_pane

0xcc93,	// (0x00031b7b) wallpaper_pane_g1

0xa6b2,	// (0x0002f59a) indicator_pane_g1_ParamLimits

0xa6b2,	// (0x0002f59a) indicator_pane_g1

0x4c56,	// (0x00029b3e) navi_navi_icon_text_pane_srt_g1

0xcd4c,	// (0x00031c34) soft_indicator_pane_t1

0xcd66,	// (0x00031c4e) aid_ps_area_pane

0xa6cb,	// (0x0002f5b3) aid_ps_clock_pane

0xcd77,	// (0x00031c5f) aid_ps_indicator_pane

0xcd83,	// (0x00031c6b) indicator_ps_pane_ParamLimits

0xcd83,	// (0x00031c6b) indicator_ps_pane

0xcd92,	// (0x00031c7a) power_save_pane_g1_ParamLimits

0xcd92,	// (0x00031c7a) power_save_pane_g1

0xcd9e,	// (0x00031c86) power_save_pane_g2_ParamLimits

0xcd9e,	// (0x00031c86) power_save_pane_g2

0xf011,	// (0x00033ef9) aid_navinavi_width_pane

0xcd66,	// (0x00031c4e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003442d) power_save_pane_g_ParamLimits

0xf545,	// (0x0003442d) power_save_pane_g

0xcdac,	// (0x00031c94) power_save_pane_t1_ParamLimits

0xcdac,	// (0x00031c94) power_save_pane_t1

0xa6cb,	// (0x0002f5b3) aid_ps_clock_pane_ParamLimits

0xcd77,	// (0x00031c5f) aid_ps_indicator_pane_ParamLimits

0xcdbe,	// (0x00031ca6) power_save_pane_t4_ParamLimits

0xcdbe,	// (0x00031ca6) power_save_pane_t4

0x0001,

0xf54a,	// (0x00034432) power_save_pane_t_ParamLimits

0xf54a,	// (0x00034432) power_save_pane_t

0xcde8,	// (0x00031cd0) power_save_t3_ParamLimits

0xcde8,	// (0x00031cd0) power_save_t3

0xcdd3,	// (0x00031cbb) power_save_t2_ParamLimits

0xcdd3,	// (0x00031cbb) power_save_t2

0xcdfd,	// (0x00031ce5) indicator_ps_pane_g1

0xa6d9,	// (0x0002f5c1) ai_gene_pane_ParamLimits

0xa6d9,	// (0x0002f5c1) ai_gene_pane

0xa6f0,	// (0x0002f5d8) ai_links_pane_ParamLimits

0xa6f0,	// (0x0002f5d8) ai_links_pane

0xa708,	// (0x0002f5f0) indicator_pane_cp1_ParamLimits

0xa708,	// (0x0002f5f0) indicator_pane_cp1

0xa717,	// (0x0002f5ff) main_pane_idle_g1_cp_ParamLimits

0xa717,	// (0x0002f5ff) main_pane_idle_g1_cp

0xce06,	// (0x00031cee) popup_ai_links_title_window

0xa72f,	// (0x0002f617) soft_indicator_pane_cp1_ParamLimits

0xa72f,	// (0x0002f617) soft_indicator_pane_cp1

0x45c9,	// (0x000294b1) ai_links_pane_g1

0x45d2,	// (0x000294ba) grid_ai_links_pane

0xbcb1,	// (0x00030b99) ai_gene_pane_1

0x45b7,	// (0x0002949f) ai_gene_pane_2

0x45c0,	// (0x000294a8) list_highlight_pane_cp4

0xbc8d,	// (0x00030b75) cell_ai_link_pane_ParamLimits

0xbc8d,	// (0x00030b75) cell_ai_link_pane

0x4586,	// (0x0002946e) cell_ai_link_pane_g1

0xcffa,	// (0x00031ee2) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000347d5) cell_ai_link_pane_g

0xcc9d,	// (0x00031b85) grid_highlight_cp2

0xcc9d,	// (0x00031b85) bg_popup_sub_pane_cp1

0xce1d,	// (0x00031d05) popup_ai_links_title_window_t1

0x44d2,	// (0x000293ba) ai_gene_pane_1_g1_ParamLimits

0x44d2,	// (0x000293ba) ai_gene_pane_1_g1

0x44de,	// (0x000293c6) ai_gene_pane_1_g2_ParamLimits

0x44de,	// (0x000293c6) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000347cb) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000347cb) ai_gene_pane_1_g

0x44eb,	// (0x000293d3) ai_gene_pane_1_t1_ParamLimits

0x44eb,	// (0x000293d3) ai_gene_pane_1_t1

0x451f,	// (0x00029407) grid_ai_soft_ind_pane

0x44bd,	// (0x000293a5) ai_gene_pane_2_t1_ParamLimits

0x44bd,	// (0x000293a5) ai_gene_pane_2_t1

0xa743,	// (0x0002f62b) main_pane_empty_t1_ParamLimits

0xa743,	// (0x0002f62b) main_pane_empty_t1

0xa75b,	// (0x0002f643) main_pane_empty_t2_ParamLimits

0xa75b,	// (0x0002f643) main_pane_empty_t2

0xa770,	// (0x0002f658) main_pane_empty_t3_ParamLimits

0xa770,	// (0x0002f658) main_pane_empty_t3

0xa782,	// (0x0002f66a) main_pane_empty_t4_ParamLimits

0xa782,	// (0x0002f66a) main_pane_empty_t4

0xa794,	// (0x0002f67c) main_pane_empty_t5_ParamLimits

0xa794,	// (0x0002f67c) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00034437) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00034437) main_pane_empty_t

0xd422,	// (0x0003230a) bg_popup_window_pane_ParamLimits

0xd422,	// (0x0003230a) bg_popup_window_pane

0x421f,	// (0x00029107) find_popup_pane_cp2_ParamLimits

0x421f,	// (0x00029107) find_popup_pane_cp2

0x422b,	// (0x00029113) heading_pane_ParamLimits

0x422b,	// (0x00029113) heading_pane

0xcc9d,	// (0x00031b85) bg_popup_sub_pane

0xbbab,	// (0x00030a93) bg_popup_window_pane_g1_ParamLimits

0xbbab,	// (0x00030a93) bg_popup_window_pane_g1

0xbbba,	// (0x00030aa2) bg_popup_window_pane_g2_ParamLimits

0xbbba,	// (0x00030aa2) bg_popup_window_pane_g2

0xbbc6,	// (0x00030aae) bg_popup_window_pane_g3_ParamLimits

0xbbc6,	// (0x00030aae) bg_popup_window_pane_g3

0xbbd2,	// (0x00030aba) bg_popup_window_pane_g4_ParamLimits

0xbbd2,	// (0x00030aba) bg_popup_window_pane_g4

0xbbe1,	// (0x00030ac9) bg_popup_window_pane_g5_ParamLimits

0xbbe1,	// (0x00030ac9) bg_popup_window_pane_g5

0xbbf1,	// (0x00030ad9) bg_popup_window_pane_g6_ParamLimits

0xbbf1,	// (0x00030ad9) bg_popup_window_pane_g6

0xbbfd,	// (0x00030ae5) bg_popup_window_pane_g7_ParamLimits

0xbbfd,	// (0x00030ae5) bg_popup_window_pane_g7

0xbc0c,	// (0x00030af4) bg_popup_window_pane_g8_ParamLimits

0xbc0c,	// (0x00030af4) bg_popup_window_pane_g8

0xbc1b,	// (0x00030b03) bg_popup_window_pane_g9_ParamLimits

0xbc1b,	// (0x00030b03) bg_popup_window_pane_g9

0x4205,	// (0x000290ed) bg_popup_window_pane_g10_ParamLimits

0x4205,	// (0x000290ed) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00034793) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00034793) bg_popup_window_pane_g

0x412e,	// (0x00029016) bg_popup_heading_pane_ParamLimits

0x412e,	// (0x00029016) bg_popup_heading_pane

0x1a2c,	// (0x00026914) tabs_4_passive_pane_cp_srt_ParamLimits

0x1a2c,	// (0x00026914) tabs_4_passive_pane_cp_srt

0x1a3e,	// (0x00026926) tabs_4_passive_pane_srt_ParamLimits

0x4142,	// (0x0002902a) heading_pane_g2

0x1a3e,	// (0x00026926) tabs_4_passive_pane_srt

0x34c5,	// (0x000283ad) bg_passive_tab_pane_cp3_srt_ParamLimits

0x34c5,	// (0x000283ad) bg_passive_tab_pane_cp3_srt

0x414a,	// (0x00029032) heading_pane_t1_ParamLimits

0x414a,	// (0x00029032) heading_pane_t1

0x4161,	// (0x00029049) heading_pane_t2_ParamLimits

0x4161,	// (0x00029049) heading_pane_t2

0x0001,

0xf8a6,	// (0x0003478e) heading_pane_t_ParamLimits

0xf8a6,	// (0x0003478e) heading_pane_t

0x3c59,	// (0x00028b41) bg_popup_heading_pane_g1

0x3d08,	// (0x00028bf0) bg_popup_heading_pane_g2

0x3d12,	// (0x00028bfa) bg_popup_heading_pane_g3

0x3d1c,	// (0x00028c04) bg_popup_heading_pane_g4

0x3d26,	// (0x00028c0e) bg_popup_heading_pane_g5

0x3d30,	// (0x00028c18) bg_popup_heading_pane_g6

0x3d38,	// (0x00028c20) bg_popup_heading_pane_g7

0x3d40,	// (0x00028c28) bg_popup_heading_pane_g8

0x3d4a,	// (0x00028c32) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0003474a) bg_popup_heading_pane_g

0x3451,	// (0x00028339) bg_popup_sub_pane_g1

0x3459,	// (0x00028341) bg_popup_sub_pane_g2

0x3461,	// (0x00028349) bg_popup_sub_pane_g3

0x3469,	// (0x00028351) bg_popup_sub_pane_g4

0x3471,	// (0x00028359) bg_popup_sub_pane_g5

0x3479,	// (0x00028361) bg_popup_sub_pane_g6

0x3481,	// (0x00028369) bg_popup_sub_pane_g7

0x3489,	// (0x00028371) bg_popup_sub_pane_g8

0x3491,	// (0x00028379) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00034724) bg_popup_sub_pane_g

0xcceb,	// (0x00031bd3) bg_popup_window_pane_cp5_ParamLimits

0xcceb,	// (0x00031bd3) bg_popup_window_pane_cp5

0xce3a,	// (0x00031d22) popup_note_window_g1_ParamLimits

0xce3a,	// (0x00031d22) popup_note_window_g1

0xce46,	// (0x00031d2e) popup_note_window_t1_ParamLimits

0xce46,	// (0x00031d2e) popup_note_window_t1

0xce5c,	// (0x00031d44) popup_note_window_t2_ParamLimits

0xce5c,	// (0x00031d44) popup_note_window_t2

0xce72,	// (0x00031d5a) popup_note_window_t3_ParamLimits

0xce72,	// (0x00031d5a) popup_note_window_t3

0xce88,	// (0x00031d70) popup_note_window_t4_ParamLimits

0xce88,	// (0x00031d70) popup_note_window_t4

0xceb0,	// (0x00031d98) popup_note_window_t5_ParamLimits

0xceb0,	// (0x00031d98) popup_note_window_t5

0x0004,

0xf55a,	// (0x00034442) popup_note_window_t_ParamLimits

0xf55a,	// (0x00034442) popup_note_window_t

0xcefa,	// (0x00031de2) bg_popup_window_pane_cp6_ParamLimits

0xcefa,	// (0x00031de2) bg_popup_window_pane_cp6

0x3bd5,	// (0x00028abd) popup_note_image_window_g1_ParamLimits

0x3bd5,	// (0x00028abd) popup_note_image_window_g1

0x3be1,	// (0x00028ac9) popup_note_image_window_g2_ParamLimits

0x3be1,	// (0x00028ac9) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00034718) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00034718) popup_note_image_window_g

0x3bfa,	// (0x00028ae2) popup_note_image_window_t1_ParamLimits

0x3bfa,	// (0x00028ae2) popup_note_image_window_t1

0x3c13,	// (0x00028afb) popup_note_image_window_t2_ParamLimits

0x3c13,	// (0x00028afb) popup_note_image_window_t2

0x3c2c,	// (0x00028b14) popup_note_image_window_t3_ParamLimits

0x3c2c,	// (0x00028b14) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0003471d) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0003471d) popup_note_image_window_t

0x3a95,	// (0x0002897d) bg_popup_window_pane_cp7_ParamLimits

0x3a95,	// (0x0002897d) bg_popup_window_pane_cp7

0x3ac5,	// (0x000289ad) popup_note_wait_window_g1_ParamLimits

0x3ac5,	// (0x000289ad) popup_note_wait_window_g1

0x3ad1,	// (0x000289b9) popup_note_wait_window_g2_ParamLimits

0x3ad1,	// (0x000289b9) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00034706) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00034706) popup_note_wait_window_g

0x3ae9,	// (0x000289d1) popup_note_wait_window_t1_ParamLimits

0x3ae9,	// (0x000289d1) popup_note_wait_window_t1

0x3b10,	// (0x000289f8) popup_note_wait_window_t2_ParamLimits

0x3b10,	// (0x000289f8) popup_note_wait_window_t2

0x3b2e,	// (0x00028a16) popup_note_wait_window_t3_ParamLimits

0x3b2e,	// (0x00028a16) popup_note_wait_window_t3

0x3b41,	// (0x00028a29) popup_note_wait_window_t4_ParamLimits

0x3b41,	// (0x00028a29) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0003470d) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0003470d) popup_note_wait_window_t

0x3b66,	// (0x00028a4e) wait_bar_pane_ParamLimits

0x3b66,	// (0x00028a4e) wait_bar_pane

0xcc9d,	// (0x00031b85) wait_anim_pane

0xcc9d,	// (0x00031b85) wait_border_pane

0xcc93,	// (0x00031b7b) wait_anim_pane_g1

0xcc93,	// (0x00031b7b) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x000345c6) wait_anim_pane_g

0x3a39,	// (0x00028921) wait_border_pane_g1

0x3a44,	// (0x0002892c) wait_border_pane_g2

0x3a4d,	// (0x00028935) wait_border_pane_g3

0x0002,

0xf817,	// (0x000346ff) wait_border_pane_g

0x38a3,	// (0x0002878b) bg_popup_window_pane_cp16_ParamLimits

0x38a3,	// (0x0002878b) bg_popup_window_pane_cp16

0x39a3,	// (0x0002888b) indicator_popup_pane_cp4_ParamLimits

0x39a3,	// (0x0002888b) indicator_popup_pane_cp4

0x39b7,	// (0x0002889f) popup_query_data_window_t1_ParamLimits

0x39b7,	// (0x0002889f) popup_query_data_window_t1

0x39c9,	// (0x000288b1) popup_query_data_window_t2_ParamLimits

0x39c9,	// (0x000288b1) popup_query_data_window_t2

0x39e2,	// (0x000288ca) popup_query_data_window_t3_ParamLimits

0x39e2,	// (0x000288ca) popup_query_data_window_t3

0x0002,

0xf810,	// (0x000346f8) popup_query_data_window_t_ParamLimits

0xf810,	// (0x000346f8) popup_query_data_window_t

0x39fc,	// (0x000288e4) query_popup_data_pane_ParamLimits

0x39fc,	// (0x000288e4) query_popup_data_pane

0x3a10,	// (0x000288f8) query_popup_data_pane_cp1_ParamLimits

0x3a10,	// (0x000288f8) query_popup_data_pane_cp1

0x38a3,	// (0x0002878b) bg_popup_window_pane_cp10_ParamLimits

0x38a3,	// (0x0002878b) bg_popup_window_pane_cp10

0x38d5,	// (0x000287bd) indicator_popup_pane_ParamLimits

0x38d5,	// (0x000287bd) indicator_popup_pane

0x38f7,	// (0x000287df) popup_query_code_window_t1_ParamLimits

0x38f7,	// (0x000287df) popup_query_code_window_t1

0x3911,	// (0x000287f9) popup_query_code_window_t2_ParamLimits

0x3911,	// (0x000287f9) popup_query_code_window_t2

0x395a,	// (0x00028842) popup_query_code_window_t3_ParamLimits

0x395a,	// (0x00028842) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000346f1) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000346f1) popup_query_code_window_t

0x3989,	// (0x00028871) query_popup_pane_ParamLimits

0x3989,	// (0x00028871) query_popup_pane

0xcefa,	// (0x00031de2) bg_popup_window_pane_cp15_ParamLimits

0xcefa,	// (0x00031de2) bg_popup_window_pane_cp15

0xcf1a,	// (0x00031e02) indicator_popup_pane_cp1_ParamLimits

0xcf1a,	// (0x00031e02) indicator_popup_pane_cp1

0xcf2d,	// (0x00031e15) indicator_popup_pane_cp2_ParamLimits

0xcf2d,	// (0x00031e15) indicator_popup_pane_cp2

0xcf48,	// (0x00031e30) popup_query_data_code_window_g1_ParamLimits

0xcf48,	// (0x00031e30) popup_query_data_code_window_g1

0xcf5b,	// (0x00031e43) popup_query_data_code_window_t1_ParamLimits

0xcf5b,	// (0x00031e43) popup_query_data_code_window_t1

0xcf6d,	// (0x00031e55) popup_query_data_code_window_t2_ParamLimits

0xcf6d,	// (0x00031e55) popup_query_data_code_window_t2

0xcf7f,	// (0x00031e67) popup_query_data_code_window_t3_ParamLimits

0xcf7f,	// (0x00031e67) popup_query_data_code_window_t3

0xcf95,	// (0x00031e7d) popup_query_data_code_window_t4_ParamLimits

0xcf95,	// (0x00031e7d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003444d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003444d) popup_query_data_code_window_t

0x0d14,	// (0x00025bfc) list_single_midp_graphic_pane_g3

0xcfaf,	// (0x00031e97) query_popup_data_pane_cp2_ParamLimits

0xcfc2,	// (0x00031eaa) query_popup_pane_cp2_ParamLimits

0xcfc2,	// (0x00031eaa) query_popup_pane_cp2

0xcc9d,	// (0x00031b85) bg_popup_window_pane_cp11

0x3887,	// (0x0002876f) heading_pane_cp5

0x388f,	// (0x00028777) listscroll_popup_info_pane

0xcc9d,	// (0x00031b85) input_focus_pane_cp3

0xcfdd,	// (0x00031ec5) query_popup_pane_t1

0xcfeb,	// (0x00031ed3) list_popup_info_pane_ParamLimits

0xcfeb,	// (0x00031ed3) list_popup_info_pane

0xcffa,	// (0x00031ee2) listscroll_popup_info_pane_g1

0xd002,	// (0x00031eea) scroll_pane_cp7

0xd00c,	// (0x00031ef4) popup_info_list_pane_t1_ParamLimits

0xd00c,	// (0x00031ef4) popup_info_list_pane_t1

0xd026,	// (0x00031f0e) popup_info_list_pane_t2_ParamLimits

0xd026,	// (0x00031f0e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00034456) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00034456) popup_info_list_pane_t

0xcc9d,	// (0x00031b85) bg_popup_window_pane_cp12

0x4c70,	// (0x00029b58) find_popup_pane

0xccf9,	// (0x00031be1) bg_popup_window_pane_cp3

0xd040,	// (0x00031f28) heading_pane_cp3

0xd04f,	// (0x00031f37) listscroll_popup_graphic_pane

0xcc9d,	// (0x00031b85) bg_popup_window_pane_cp4

0xa7f6,	// (0x0002f6de) heading_pane_cp4

0xd05f,	// (0x00031f47) listscroll_popup_colour_pane

0xa800,	// (0x0002f6e8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa800,	// (0x0002f6e8) cell_large_graphic_colour_none_popup_pane

0xa814,	// (0x0002f6fc) grid_large_graphic_colour_popup_pane_ParamLimits

0xa814,	// (0x0002f6fc) grid_large_graphic_colour_popup_pane

0xa83c,	// (0x0002f724) listscroll_popup_colour_pane_g1_ParamLimits

0xa83c,	// (0x0002f724) listscroll_popup_colour_pane_g1

0xa853,	// (0x0002f73b) listscroll_popup_colour_pane_g2_ParamLimits

0xa853,	// (0x0002f73b) listscroll_popup_colour_pane_g2

0xa86a,	// (0x0002f752) listscroll_popup_colour_pane_g3_ParamLimits

0xa86a,	// (0x0002f752) listscroll_popup_colour_pane_g3

0xa87a,	// (0x0002f762) listscroll_popup_colour_pane_g4_ParamLimits

0xa87a,	// (0x0002f762) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003445b) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003445b) listscroll_popup_colour_pane_g

0xd067,	// (0x00031f4f) scroll_pane_cp6_ParamLimits

0xd067,	// (0x00031f4f) scroll_pane_cp6

0xa88a,	// (0x0002f772) cell_large_graphic_colour_popup_pane_ParamLimits

0xa88a,	// (0x0002f772) cell_large_graphic_colour_popup_pane

0xd079,	// (0x00031f61) cell_large_graphic_colour_none_popup_pane_t1

0xcc9d,	// (0x00031b85) grid_highlight_pane_cp5

0xd088,	// (0x00031f70) cell_large_graphic_colour_popup_pane_g1

0xd090,	// (0x00031f78) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00034464) cell_large_graphic_colour_popup_pane_g

0xd098,	// (0x00031f80) cell_large_graphic_colour_popup_pane_g2_copy1

0xd0a1,	// (0x00031f89) grid_highlight_pane_cp4

0xd0a9,	// (0x00031f91) bg_popup_window_pane_cp8_ParamLimits

0xd0a9,	// (0x00031f91) bg_popup_window_pane_cp8

0xd0c4,	// (0x00031fac) popup_snote_single_text_window_g1_ParamLimits

0xd0c4,	// (0x00031fac) popup_snote_single_text_window_g1

0xd0d6,	// (0x00031fbe) popup_snote_single_text_window_t1_ParamLimits

0xd0d6,	// (0x00031fbe) popup_snote_single_text_window_t1

0xd0e9,	// (0x00031fd1) popup_snote_single_text_window_t2_ParamLimits

0xd0e9,	// (0x00031fd1) popup_snote_single_text_window_t2

0xd0fc,	// (0x00031fe4) popup_snote_single_text_window_t3_ParamLimits

0xd0fc,	// (0x00031fe4) popup_snote_single_text_window_t3

0xd135,	// (0x0003201d) popup_snote_single_text_window_t4_ParamLimits

0xd135,	// (0x0003201d) popup_snote_single_text_window_t4

0xd169,	// (0x00032051) popup_snote_single_text_window_t5_ParamLimits

0xd169,	// (0x00032051) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00034469) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00034469) popup_snote_single_text_window_t

0xd198,	// (0x00032080) bg_popup_window_pane_cp9_ParamLimits

0xd198,	// (0x00032080) bg_popup_window_pane_cp9

0xd0c4,	// (0x00031fac) popup_snote_single_graphic_window_g1_ParamLimits

0xd0c4,	// (0x00031fac) popup_snote_single_graphic_window_g1

0xd1a6,	// (0x0003208e) popup_snote_single_graphic_window_g2_ParamLimits

0xd1a6,	// (0x0003208e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00034474) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00034474) popup_snote_single_graphic_window_g

0xd1b2,	// (0x0003209a) popup_snote_single_graphic_window_t1_ParamLimits

0xd1b2,	// (0x0003209a) popup_snote_single_graphic_window_t1

0xd1c5,	// (0x000320ad) popup_snote_single_graphic_window_t2_ParamLimits

0xd1c5,	// (0x000320ad) popup_snote_single_graphic_window_t2

0xd1d8,	// (0x000320c0) popup_snote_single_graphic_window_t3_ParamLimits

0xd1d8,	// (0x000320c0) popup_snote_single_graphic_window_t3

0xd211,	// (0x000320f9) popup_snote_single_graphic_window_t4_ParamLimits

0xd211,	// (0x000320f9) popup_snote_single_graphic_window_t4

0xd245,	// (0x0003212d) popup_snote_single_graphic_window_t5_ParamLimits

0xd245,	// (0x0003212d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00034479) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00034479) popup_snote_single_graphic_window_t

0x4bae,	// (0x00029a96) grid_graphic_popup_pane_ParamLimits

0x4bae,	// (0x00029a96) grid_graphic_popup_pane

0x4bdc,	// (0x00029ac4) listscroll_popup_graphic_pane_g1_ParamLimits

0x4bdc,	// (0x00029ac4) listscroll_popup_graphic_pane_g1

0xbfa3,	// (0x00030e8b) listscroll_popup_graphic_pane_g2_ParamLimits

0xbfa3,	// (0x00030e8b) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0003486e) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0003486e) listscroll_popup_graphic_pane_g

0x4c04,	// (0x00029aec) scroll_pane_cp5

0xbf5b,	// (0x00030e43) cell_graphic_popup_pane_ParamLimits

0xbf5b,	// (0x00030e43) cell_graphic_popup_pane

0x4b27,	// (0x00029a0f) cell_graphic_popup_pane_g1

0x4b2f,	// (0x00029a17) cell_graphic_popup_pane_g2

0xd098,	// (0x00031f80) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00034867) cell_graphic_popup_pane_g

0x4b38,	// (0x00029a20) cell_graphic_popup_pane_t2

0xd0a1,	// (0x00031f89) grid_highlight_pane_cp3

0xd286,	// (0x0003216e) list_gen_pane_ParamLimits

0xd286,	// (0x0003216e) list_gen_pane

0xd2ae,	// (0x00032196) scroll_pane

0xbf12,	// (0x00030dfa) bg_list_pane_g1_ParamLimits

0xbf12,	// (0x00030dfa) bg_list_pane_g1

0x4a9c,	// (0x00029984) bg_list_pane_g2_ParamLimits

0x4a9c,	// (0x00029984) bg_list_pane_g2

0x4ab1,	// (0x00029999) bg_list_pane_g3_ParamLimits

0x4ab1,	// (0x00029999) bg_list_pane_g3

0x4ac5,	// (0x000299ad) bg_list_pane_g4_ParamLimits

0x4ac5,	// (0x000299ad) bg_list_pane_g4

0xbf2f,	// (0x00030e17) bg_list_pane_g5_ParamLimits

0xbf2f,	// (0x00030e17) bg_list_pane_g5

0x0004,

0xf974,	// (0x0003485c) bg_list_pane_g_ParamLimits

0xf974,	// (0x0003485c) bg_list_pane_g

0xbed5,	// (0x00030dbd) list_double2_graphic_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double2_graphic_large_graphic_pane

0xbed5,	// (0x00030dbd) list_double2_graphic_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double2_graphic_pane

0xbed5,	// (0x00030dbd) list_double2_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double2_large_graphic_pane

0xbed5,	// (0x00030dbd) list_double2_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double2_pane

0xbed5,	// (0x00030dbd) list_double_graphic_heading_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double_graphic_heading_pane

0xbed5,	// (0x00030dbd) list_double_graphic_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double_graphic_pane

0xbed5,	// (0x00030dbd) list_double_heading_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double_heading_pane

0xbed5,	// (0x00030dbd) list_double_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double_large_graphic_pane

0xbed5,	// (0x00030dbd) list_double_number_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double_number_pane

0xbed5,	// (0x00030dbd) list_double_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double_pane

0xbed5,	// (0x00030dbd) list_double_time_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_double_time_pane

0xbed5,	// (0x00030dbd) list_setting_number_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_setting_number_pane

0xbed5,	// (0x00030dbd) list_setting_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_setting_pane

0xa068,	// (0x0002ef50) list_single_2graphic_pane_ParamLimits

0xa068,	// (0x0002ef50) list_single_2graphic_pane

0xa068,	// (0x0002ef50) list_single_graphic_heading_pane_ParamLimits

0xa068,	// (0x0002ef50) list_single_graphic_heading_pane

0xa068,	// (0x0002ef50) list_single_graphic_pane_ParamLimits

0xa068,	// (0x0002ef50) list_single_graphic_pane

0xa068,	// (0x0002ef50) list_single_heading_pane_ParamLimits

0xa068,	// (0x0002ef50) list_single_heading_pane

0xbed5,	// (0x00030dbd) list_single_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dbd) list_single_large_graphic_pane

0xa068,	// (0x0002ef50) list_single_number_heading_pane_ParamLimits

0xa068,	// (0x0002ef50) list_single_number_heading_pane

0xa068,	// (0x0002ef50) list_single_number_pane_ParamLimits

0xa068,	// (0x0002ef50) list_single_number_pane

0xa068,	// (0x0002ef50) list_single_pane_ParamLimits

0xa068,	// (0x0002ef50) list_single_pane

0xcc9d,	// (0x00031b85) list_highlight_pane_cp1

0xea9d,	// (0x00033985) list_single_pane_g1_ParamLimits

0xea9d,	// (0x00033985) list_single_pane_g1

0xeaa9,	// (0x00033991) list_single_pane_g2_ParamLimits

0xeaa9,	// (0x00033991) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003448b) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003448b) list_single_pane_g

0xed8c,	// (0x00033c74) list_single_pane_t1_ParamLimits

0xed8c,	// (0x00033c74) list_single_pane_t1

0xea9d,	// (0x00033985) list_single_number_pane_g1_ParamLimits

0xea9d,	// (0x00033985) list_single_number_pane_g1

0xeaa9,	// (0x00033991) list_single_number_pane_g2_ParamLimits

0xeaa9,	// (0x00033991) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003448b) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003448b) list_single_number_pane_g

0xecb7,	// (0x00033b9f) list_single_number_pane_t1_ParamLimits

0xecb7,	// (0x00033b9f) list_single_number_pane_t1

0xa02a,	// (0x0002ef12) list_single_number_pane_t2_ParamLimits

0xa02a,	// (0x0002ef12) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0003481d) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0003481d) list_single_number_pane_t

0x99e4,	// (0x0002e8cc) list_single_graphic_pane_g1_ParamLimits

0x99e4,	// (0x0002e8cc) list_single_graphic_pane_g1

0xea9d,	// (0x00033985) list_single_graphic_pane_g2_ParamLimits

0xea9d,	// (0x00033985) list_single_graphic_pane_g2

0xeaa9,	// (0x00033991) list_single_graphic_pane_g3_ParamLimits

0xeaa9,	// (0x00033991) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00034484) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00034484) list_single_graphic_pane_g

0x99f0,	// (0x0002e8d8) list_single_graphic_pane_t1_ParamLimits

0x99f0,	// (0x0002e8d8) list_single_graphic_pane_t1

0xea9d,	// (0x00033985) list_single_heading_pane_g1_ParamLimits

0xea9d,	// (0x00033985) list_single_heading_pane_g1

0xeaa9,	// (0x00033991) list_single_heading_pane_g2_ParamLimits

0xeaa9,	// (0x00033991) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003448b) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003448b) list_single_heading_pane_g

0xeab5,	// (0x0003399d) list_single_heading_pane_t1_ParamLimits

0xeab5,	// (0x0003399d) list_single_heading_pane_t1

0x9a06,	// (0x0002e8ee) list_single_heading_pane_t2_ParamLimits

0x9a06,	// (0x0002e8ee) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00034490) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00034490) list_single_heading_pane_t

0xea9d,	// (0x00033985) list_single_number_heading_pane_g1_ParamLimits

0xea9d,	// (0x00033985) list_single_number_heading_pane_g1

0xeaa9,	// (0x00033991) list_single_number_heading_pane_g2_ParamLimits

0xeaa9,	// (0x00033991) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003448b) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003448b) list_single_number_heading_pane_g

0xeab5,	// (0x0003399d) list_single_number_heading_pane_t1_ParamLimits

0xeab5,	// (0x0003399d) list_single_number_heading_pane_t1

0x9a18,	// (0x0002e900) list_single_number_heading_pane_t2_ParamLimits

0x9a18,	// (0x0002e900) list_single_number_heading_pane_t2

0xeacb,	// (0x000339b3) list_single_number_heading_pane_t3_ParamLimits

0xeacb,	// (0x000339b3) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00034495) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00034495) list_single_number_heading_pane_t

0xeadd,	// (0x000339c5) list_single_graphic_heading_pane_g1_ParamLimits

0xeadd,	// (0x000339c5) list_single_graphic_heading_pane_g1

0x9a2a,	// (0x0002e912) list_single_graphic_heading_pane_g4_ParamLimits

0x9a2a,	// (0x0002e912) list_single_graphic_heading_pane_g4

0xeaa9,	// (0x00033991) list_single_graphic_heading_pane_g5_ParamLimits

0xeaa9,	// (0x00033991) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003449c) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003449c) list_single_graphic_heading_pane_g

0xeab5,	// (0x0003399d) list_single_graphic_heading_pane_t1_ParamLimits

0xeab5,	// (0x0003399d) list_single_graphic_heading_pane_t1

0x9a3b,	// (0x0002e923) list_single_graphic_heading_pane_t2_ParamLimits

0x9a3b,	// (0x0002e923) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000344a3) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000344a3) list_single_graphic_heading_pane_t

0xeae9,	// (0x000339d1) list_single_large_graphic_pane_g1_ParamLimits

0xeae9,	// (0x000339d1) list_single_large_graphic_pane_g1

0xeaf5,	// (0x000339dd) list_single_large_graphic_pane_g2_ParamLimits

0xeaf5,	// (0x000339dd) list_single_large_graphic_pane_g2

0xeb01,	// (0x000339e9) list_single_large_graphic_pane_g3_ParamLimits

0xeb01,	// (0x000339e9) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000344a8) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000344a8) list_single_large_graphic_pane_g

0x3a44,	// (0x0002892c) wait_border_pane_g2_copy1

0x9a4d,	// (0x0002e935) list_single_large_graphic_pane_g4_cp2

0xeb0d,	// (0x000339f5) list_single_large_graphic_pane_t1_ParamLimits

0xeb0d,	// (0x000339f5) list_single_large_graphic_pane_t1

0x9a55,	// (0x0002e93d) list_double_pane_g1_ParamLimits

0x9a55,	// (0x0002e93d) list_double_pane_g1

0x9a61,	// (0x0002e949) list_double_pane_g2_ParamLimits

0x9a61,	// (0x0002e949) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000344af) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000344af) list_double_pane_g

0x9a6d,	// (0x0002e955) list_double_pane_t1_ParamLimits

0x9a6d,	// (0x0002e955) list_double_pane_t1

0x9a83,	// (0x0002e96b) list_double_pane_t2_ParamLimits

0x9a83,	// (0x0002e96b) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000344b4) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000344b4) list_double_pane_t

0x9a95,	// (0x0002e97d) list_double2_pane_g1_ParamLimits

0x9a95,	// (0x0002e97d) list_double2_pane_g1

0x9aa6,	// (0x0002e98e) list_double2_pane_g2_ParamLimits

0x9aa6,	// (0x0002e98e) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000344b9) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000344b9) list_double2_pane_g

0x9ab2,	// (0x0002e99a) list_double2_pane_t1_ParamLimits

0x9ab2,	// (0x0002e99a) list_double2_pane_t1

0x9ac8,	// (0x0002e9b0) list_double2_pane_t2_ParamLimits

0x9ac8,	// (0x0002e9b0) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000344be) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000344be) list_double2_pane_t

0x9a55,	// (0x0002e93d) list_double_number_pane_g1_ParamLimits

0x9a55,	// (0x0002e93d) list_double_number_pane_g1

0x9a61,	// (0x0002e949) list_double_number_pane_g2_ParamLimits

0x9a61,	// (0x0002e949) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000344af) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000344af) list_double_number_pane_g

0x9ada,	// (0x0002e9c2) list_double_number_pane_t1_ParamLimits

0x9ada,	// (0x0002e9c2) list_double_number_pane_t1

0x9aec,	// (0x0002e9d4) list_double_number_pane_t2_ParamLimits

0x9aec,	// (0x0002e9d4) list_double_number_pane_t2

0x9b02,	// (0x0002e9ea) list_double_number_pane_t3_ParamLimits

0x9b02,	// (0x0002e9ea) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000344c3) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000344c3) list_double_number_pane_t

0x9b14,	// (0x0002e9fc) list_double_graphic_pane_g1_ParamLimits

0x9b14,	// (0x0002e9fc) list_double_graphic_pane_g1

0x9b20,	// (0x0002ea08) list_double_graphic_pane_g2_ParamLimits

0x9b20,	// (0x0002ea08) list_double_graphic_pane_g2

0x9b2f,	// (0x0002ea17) list_double_graphic_pane_g3_ParamLimits

0x9b2f,	// (0x0002ea17) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000344ca) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000344ca) list_double_graphic_pane_g

0x9b47,	// (0x0002ea2f) list_double_graphic_pane_t1_ParamLimits

0x9b47,	// (0x0002ea2f) list_double_graphic_pane_t1

0x9b5d,	// (0x0002ea45) list_double_graphic_pane_t2_ParamLimits

0x9b5d,	// (0x0002ea45) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000344d3) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000344d3) list_double_graphic_pane_t

0x9b6f,	// (0x0002ea57) list_double2_graphic_pane_g1_ParamLimits

0x9b6f,	// (0x0002ea57) list_double2_graphic_pane_g1

0x9b7b,	// (0x0002ea63) list_double2_graphic_pane_g2_ParamLimits

0x9b7b,	// (0x0002ea63) list_double2_graphic_pane_g2

0x9b87,	// (0x0002ea6f) list_double2_graphic_pane_g3_ParamLimits

0x9b87,	// (0x0002ea6f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000344d8) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000344d8) list_double2_graphic_pane_g

0x9b93,	// (0x0002ea7b) list_double2_graphic_pane_t1_ParamLimits

0x9b93,	// (0x0002ea7b) list_double2_graphic_pane_t1

0x9ba9,	// (0x0002ea91) list_double2_graphic_pane_t2_ParamLimits

0x9ba9,	// (0x0002ea91) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000344df) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000344df) list_double2_graphic_pane_t

0x9bbb,	// (0x0002eaa3) list_double_large_graphic_pane_g1_ParamLimits

0x9bbb,	// (0x0002eaa3) list_double_large_graphic_pane_g1

0x9bda,	// (0x0002eac2) list_double_large_graphic_pane_g2_ParamLimits

0x9bda,	// (0x0002eac2) list_double_large_graphic_pane_g2

0x9a61,	// (0x0002e949) list_double_large_graphic_pane_g3_ParamLimits

0x9a61,	// (0x0002e949) list_double_large_graphic_pane_g3

0x9beb,	// (0x0002ead3) list_double_large_graphic_pane_g4_ParamLimits

0x9beb,	// (0x0002ead3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000344e4) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000344e4) list_double_large_graphic_pane_g

0x9bfe,	// (0x0002eae6) list_double_large_graphic_pane_t1_ParamLimits

0x9bfe,	// (0x0002eae6) list_double_large_graphic_pane_t1

0x9c17,	// (0x0002eaff) list_double_large_graphic_pane_t2_ParamLimits

0x9c17,	// (0x0002eaff) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000344ef) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000344ef) list_double_large_graphic_pane_t

0x9c29,	// (0x0002eb11) list_double2_large_graphic_pane_g1_ParamLimits

0x9c29,	// (0x0002eb11) list_double2_large_graphic_pane_g1

0x9a95,	// (0x0002e97d) list_double2_large_graphic_pane_g2_ParamLimits

0x9a95,	// (0x0002e97d) list_double2_large_graphic_pane_g2

0x9aa6,	// (0x0002e98e) list_double2_large_graphic_pane_g3_ParamLimits

0x9aa6,	// (0x0002e98e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000344f4) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000344f4) list_double2_large_graphic_pane_g

0x9c35,	// (0x0002eb1d) list_double2_large_graphic_pane_t1_ParamLimits

0x9c35,	// (0x0002eb1d) list_double2_large_graphic_pane_t1

0x9c4b,	// (0x0002eb33) list_double2_large_graphic_pane_t2_ParamLimits

0x9c4b,	// (0x0002eb33) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x000344fb) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x000344fb) list_double2_large_graphic_pane_t

0x9c5d,	// (0x0002eb45) list_double_heading_pane_g1_ParamLimits

0x9c5d,	// (0x0002eb45) list_double_heading_pane_g1

0x9c6e,	// (0x0002eb56) list_double_heading_pane_g2_ParamLimits

0x9c6e,	// (0x0002eb56) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00034500) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00034500) list_double_heading_pane_g

0x9c7a,	// (0x0002eb62) list_double_heading_pane_t1_ParamLimits

0x9c7a,	// (0x0002eb62) list_double_heading_pane_t1

0x9ac8,	// (0x0002e9b0) list_double_heading_pane_t2_ParamLimits

0x9ac8,	// (0x0002e9b0) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00034505) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00034505) list_double_heading_pane_t

0x9c90,	// (0x0002eb78) list_double_graphic_heading_pane_g1_ParamLimits

0x9c90,	// (0x0002eb78) list_double_graphic_heading_pane_g1

0x9c5d,	// (0x0002eb45) list_double_graphic_heading_pane_g2_ParamLimits

0x9c5d,	// (0x0002eb45) list_double_graphic_heading_pane_g2

0x9c6e,	// (0x0002eb56) list_double_graphic_heading_pane_g3_ParamLimits

0x9c6e,	// (0x0002eb56) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003450a) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003450a) list_double_graphic_heading_pane_g

0x9c9c,	// (0x0002eb84) list_double_graphic_heading_pane_t1_ParamLimits

0x9c9c,	// (0x0002eb84) list_double_graphic_heading_pane_t1

0x9ba9,	// (0x0002ea91) list_double_graphic_heading_pane_t2_ParamLimits

0x9ba9,	// (0x0002ea91) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00034511) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00034511) list_double_graphic_heading_pane_t

0x9bda,	// (0x0002eac2) list_double_time_pane_g1_ParamLimits

0x9bda,	// (0x0002eac2) list_double_time_pane_g1

0x9a61,	// (0x0002e949) list_double_time_pane_g2_ParamLimits

0x9a61,	// (0x0002e949) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00034516) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00034516) list_double_time_pane_g

0x9cb2,	// (0x0002eb9a) list_double_time_pane_t1_ParamLimits

0x9cb2,	// (0x0002eb9a) list_double_time_pane_t1

0x9cc8,	// (0x0002ebb0) list_double_time_pane_t2_ParamLimits

0x9cc8,	// (0x0002ebb0) list_double_time_pane_t2

0x9cda,	// (0x0002ebc2) list_double_time_pane_t3_ParamLimits

0x9cda,	// (0x0002ebc2) list_double_time_pane_t3

0x9cec,	// (0x0002ebd4) list_double_time_pane_t4_ParamLimits

0x9cec,	// (0x0002ebd4) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003451b) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003451b) list_double_time_pane_t

0x9cfe,	// (0x0002ebe6) list_setting_pane_g1_ParamLimits

0x9cfe,	// (0x0002ebe6) list_setting_pane_g1

0x9d0a,	// (0x0002ebf2) list_setting_pane_g2_ParamLimits

0x9d0a,	// (0x0002ebf2) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00034524) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00034524) list_setting_pane_g

0x9d16,	// (0x0002ebfe) list_setting_pane_t1_ParamLimits

0x9d16,	// (0x0002ebfe) list_setting_pane_t1

0x9d30,	// (0x0002ec18) list_setting_pane_t2_ParamLimits

0x9d30,	// (0x0002ec18) list_setting_pane_t2

0x0002,

0xf641,	// (0x00034529) list_setting_pane_t_ParamLimits

0xf641,	// (0x00034529) list_setting_pane_t

0x9d6f,	// (0x0002ec57) set_value_pane_cp_ParamLimits

0x9d6f,	// (0x0002ec57) set_value_pane_cp

0x9d7d,	// (0x0002ec65) list_setting_number_pane_g1_ParamLimits

0x9d7d,	// (0x0002ec65) list_setting_number_pane_g1

0x9d89,	// (0x0002ec71) list_setting_number_pane_g2_ParamLimits

0x9d89,	// (0x0002ec71) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00034530) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00034530) list_setting_number_pane_g

0x9d95,	// (0x0002ec7d) list_setting_number_pane_t1_ParamLimits

0x9d95,	// (0x0002ec7d) list_setting_number_pane_t1

0x9dae,	// (0x0002ec96) list_setting_number_pane_t2_ParamLimits

0x9dae,	// (0x0002ec96) list_setting_number_pane_t2

0x9dc8,	// (0x0002ecb0) list_setting_number_pane_t3_ParamLimits

0x9dc8,	// (0x0002ecb0) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00034535) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00034535) list_setting_number_pane_t

0x9d6f,	// (0x0002ec57) set_value_pane_ParamLimits

0x9d6f,	// (0x0002ec57) set_value_pane

0xd2e2,	// (0x000321ca) bg_set_opt_pane_ParamLimits

0xd2e2,	// (0x000321ca) bg_set_opt_pane

0xeb38,	// (0x00033a20) set_value_pane_t1

0xd303,	// (0x000321eb) slider_set_pane_cp3

0xd30c,	// (0x000321f4) volume_small_pane_cp

0xd315,	// (0x000321fd) list_form_gen_pane

0xd31e,	// (0x00032206) scroll_pane_cp8

0x9e0b,	// (0x0002ecf3) form_field_data_pane_ParamLimits

0x9e0b,	// (0x0002ecf3) form_field_data_pane

0x9e26,	// (0x0002ed0e) form_field_data_wide_pane_ParamLimits

0x9e26,	// (0x0002ed0e) form_field_data_wide_pane

0xeb56,	// (0x00033a3e) form_field_popup_pane_ParamLimits

0xeb56,	// (0x00033a3e) form_field_popup_pane

0x9e48,	// (0x0002ed30) form_field_popup_wide_pane_ParamLimits

0x9e48,	// (0x0002ed30) form_field_popup_wide_pane

0xeb78,	// (0x00033a60) form_field_slider_pane_ParamLimits

0xeb78,	// (0x00033a60) form_field_slider_pane

0xeb8b,	// (0x00033a73) form_field_slider_wide_pane_ParamLimits

0xeb8b,	// (0x00033a73) form_field_slider_wide_pane

0xd32f,	// (0x00032217) data_form_pane

0x9e73,	// (0x0002ed5b) form_field_data_pane_t1

0xd33b,	// (0x00032223) input_focus_pane

0xeb9e,	// (0x00033a86) data_form_wide_pane

0xebbb,	// (0x00033aa3) form_field_data_wide_pane_t1

0xd0b6,	// (0x00031f9e) input_focus_pane_cp6

0x9e8d,	// (0x0002ed75) form_field_popup_pane_t1

0xd33b,	// (0x00032223) input_focus_pane_cp7

0xd369,	// (0x00032251) list_form_pane

0xebe5,	// (0x00033acd) form_field_popup_wide_pane_t1

0xd33b,	// (0x00032223) input_focus_pane_cp8

0xd375,	// (0x0003225d) list_form_wide_pane

0x9eaf,	// (0x0002ed97) form_field_slider_pane_t1_ParamLimits

0x9eaf,	// (0x0002ed97) form_field_slider_pane_t1

0x9ec7,	// (0x0002edaf) form_field_slider_pane_t2_ParamLimits

0x9ec7,	// (0x0002edaf) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00034545) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00034545) form_field_slider_pane_t

0xcceb,	// (0x00031bd3) input_focus_pane_cp9_ParamLimits

0xcceb,	// (0x00031bd3) input_focus_pane_cp9

0x9edc,	// (0x0002edc4) slider_cont_pane_ParamLimits

0x9edc,	// (0x0002edc4) slider_cont_pane

0xd381,	// (0x00032269) form_field_slider_wide_pane_t1_ParamLimits

0xd381,	// (0x00032269) form_field_slider_wide_pane_t1

0xebfa,	// (0x00033ae2) form_field_slider_wide_pane_t2_ParamLimits

0xebfa,	// (0x00033ae2) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003454a) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003454a) form_field_slider_wide_pane_t

0xcceb,	// (0x00031bd3) input_focus_pane_cp10_ParamLimits

0xcceb,	// (0x00031bd3) input_focus_pane_cp10

0x9ef0,	// (0x0002edd8) slider_cont_pane_cp1_ParamLimits

0x9ef0,	// (0x0002edd8) slider_cont_pane_cp1

0x9f04,	// (0x0002edec) slider_form_pane_cp

0xd393,	// (0x0003227b) input_focus_pane_g1

0xd39b,	// (0x00032283) input_focus_pane_g2

0xd3a3,	// (0x0003228b) input_focus_pane_g3

0xd3ab,	// (0x00032293) input_focus_pane_g4

0xd3b3,	// (0x0003229b) input_focus_pane_g5

0xd3bb,	// (0x000322a3) input_focus_pane_g6

0xd3c3,	// (0x000322ab) input_focus_pane_g7

0xd3cb,	// (0x000322b3) input_focus_pane_g8

0xd3d3,	// (0x000322bb) input_focus_pane_g9

0xcc93,	// (0x00031b7b) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003454f) input_focus_pane_g

0x3a4d,	// (0x00028935) wait_border_pane_g3_copy1

0x9f0c,	// (0x0002edf4) data_form_pane_t1

0xcc93,	// (0x00031b7b) wait_anim_pane_g1_copy1

0xa03c,	// (0x0002ef24) data_form_wide_pane_t1

0xec0c,	// (0x00033af4) list_form_graphic_pane_cp_ParamLimits

0xec0c,	// (0x00033af4) list_form_graphic_pane_cp

0x49a4,	// (0x0002988c) slider_form_pane_g1

0x49ad,	// (0x00029895) slider_form_pane_g2

0x0006,

0xf965,	// (0x0003484d) slider_form_pane_g

0xec0c,	// (0x00033af4) list_form_graphic_pane_ParamLimits

0xec0c,	// (0x00033af4) list_form_graphic_pane

0xec1e,	// (0x00033b06) list_form_graphic_pane_g1

0xec26,	// (0x00033b0e) list_form_graphic_pane_t1_ParamLimits

0xec26,	// (0x00033b0e) list_form_graphic_pane_t1

0xccf9,	// (0x00031be1) list_highlight_pane_cp5_ParamLimits

0xccf9,	// (0x00031be1) list_highlight_pane_cp5

0x9f26,	// (0x0002ee0e) find_pane_g1

0xd3db,	// (0x000322c3) input_find_pane

0x9f2f,	// (0x0002ee17) input_find_pane_g1_ParamLimits

0x9f2f,	// (0x0002ee17) input_find_pane_g1

0x9f3b,	// (0x0002ee23) input_find_pane_t1_ParamLimits

0x9f3b,	// (0x0002ee23) input_find_pane_t1

0x9f50,	// (0x0002ee38) input_find_pane_t2_ParamLimits

0x9f50,	// (0x0002ee38) input_find_pane_t2

0x0001,

0xf67c,	// (0x00034564) input_find_pane_t_ParamLimits

0xf67c,	// (0x00034564) input_find_pane_t

0xd3e4,	// (0x000322cc) input_focus_pane_cp5_ParamLimits

0xd3e4,	// (0x000322cc) input_focus_pane_cp5

0xd3f7,	// (0x000322df) bg_popup_window_pane_cp2_ParamLimits

0xd3f7,	// (0x000322df) bg_popup_window_pane_cp2

0xd404,	// (0x000322ec) listscroll_menu_pane_ParamLimits

0xd404,	// (0x000322ec) listscroll_menu_pane

0xa8c1,	// (0x0002f7a9) popup_submenu_window_ParamLimits

0xa8c1,	// (0x0002f7a9) popup_submenu_window

0xd410,	// (0x000322f8) find_popup_pane_g1

0xd418,	// (0x00032300) input_popup_find_pane_cp

0xd422,	// (0x0003230a) input_focus_pane_cp4_ParamLimits

0xd422,	// (0x0003230a) input_focus_pane_cp4

0xd430,	// (0x00032318) input_popup_find_pane_t1_ParamLimits

0xd430,	// (0x00032318) input_popup_find_pane_t1

0xcc9d,	// (0x00031b85) bg_popup_sub_pane_cp

0xd45e,	// (0x00032346) listscroll_popup_sub_pane

0xd466,	// (0x0003234e) list_submenu_pane_ParamLimits

0xd466,	// (0x0003234e) list_submenu_pane

0xd477,	// (0x0003235f) scroll_pane_cp4

0xd47f,	// (0x00032367) list_single_popup_submenu_pane_ParamLimits

0xd47f,	// (0x00032367) list_single_popup_submenu_pane

0xd494,	// (0x0003237c) list_single_popup_submenu_pane_g1

0xd49c,	// (0x00032384) list_single_popup_submenu_pane_t1_ParamLimits

0xd49c,	// (0x00032384) list_single_popup_submenu_pane_t1

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp1_ParamLimits

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp1

0xa8ff,	// (0x0002f7e7) tabs_2_active_pane_g1

0xa907,	// (0x0002f7ef) tabs_2_active_pane_t1

0xcceb,	// (0x00031bd3) bg_passive_tab_pane_cp1_ParamLimits

0xcceb,	// (0x00031bd3) bg_passive_tab_pane_cp1

0xa8ff,	// (0x0002f7e7) tabs_2_passive_pane_g1

0xa907,	// (0x0002f7ef) tabs_2_passive_pane_t1

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp4

0xa919,	// (0x0002f801) tabs_2_long_active_pane_t1

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp4

0x16e0,	// (0x000265c8) list_single_midp_graphic_pane_g4_ParamLimits

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp5

0xa92c,	// (0x0002f814) tabs_3_long_active_pane_t1

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp5

0x16e0,	// (0x000265c8) list_single_midp_graphic_pane_g4

0xccf9,	// (0x00031be1) bg_popup_window_pane_cp13_ParamLimits

0xccf9,	// (0x00031be1) bg_popup_window_pane_cp13

0xd4ba,	// (0x000323a2) listscroll_popup_fast_pane_ParamLimits

0xd4ba,	// (0x000323a2) listscroll_popup_fast_pane

0xd4c9,	// (0x000323b1) grid_popup_fast_pane_ParamLimits

0xd4c9,	// (0x000323b1) grid_popup_fast_pane

0xd4db,	// (0x000323c3) scroll_pane_cp9_ParamLimits

0xd4db,	// (0x000323c3) scroll_pane_cp9

0x632a,	// (0x0002b212) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x632a,	// (0x0002b212) list_single_graphic_hl_pane_t1_cp2

0xd4ff,	// (0x000323e7) input_focus_pane_cp20_ParamLimits

0xd4ff,	// (0x000323e7) input_focus_pane_cp20

0xd50d,	// (0x000323f5) query_popup_data_pane_t1_ParamLimits

0xd50d,	// (0x000323f5) query_popup_data_pane_t1

0xd520,	// (0x00032408) query_popup_data_pane_t2_ParamLimits

0xd520,	// (0x00032408) query_popup_data_pane_t2

0xd566,	// (0x0003244e) query_popup_data_pane_t3_ParamLimits

0xd566,	// (0x0003244e) query_popup_data_pane_t3

0xd5a7,	// (0x0003248f) query_popup_data_pane_t4_ParamLimits

0xd5a7,	// (0x0003248f) query_popup_data_pane_t4

0xd5e3,	// (0x000324cb) query_popup_data_pane_t5_ParamLimits

0xd5e3,	// (0x000324cb) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00034569) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00034569) query_popup_data_pane_t

0xd393,	// (0x0003227b) bg_set_opt_pane_g1

0xd39b,	// (0x00032283) bg_set_opt_pane_g2

0xd3a3,	// (0x0003228b) bg_set_opt_pane_g3

0xd3ab,	// (0x00032293) bg_set_opt_pane_g4

0xd3b3,	// (0x0003229b) bg_set_opt_pane_g5

0xd3bb,	// (0x000322a3) bg_set_opt_pane_g6

0xd3c3,	// (0x000322ab) bg_set_opt_pane_g7

0xd3cb,	// (0x000322b3) bg_set_opt_pane_g8

0xd3d3,	// (0x000322bb) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00034574) bg_set_opt_pane_g

0x0a3d,	// (0x00025925) control_top_pane_stacon_ParamLimits

0x0a3d,	// (0x00025925) control_top_pane_stacon

0x0a90,	// (0x00025978) signal_pane_stacon_ParamLimits

0x0a90,	// (0x00025978) signal_pane_stacon

0x0ab5,	// (0x0002599d) stacon_top_pane_g1_ParamLimits

0x0ab5,	// (0x0002599d) stacon_top_pane_g1

0x0ad7,	// (0x000259bf) title_pane_stacon_ParamLimits

0x0ad7,	// (0x000259bf) title_pane_stacon

0x0b01,	// (0x000259e9) uni_indicator_pane_stacon_ParamLimits

0x0b01,	// (0x000259e9) uni_indicator_pane_stacon

0x0b16,	// (0x000259fe) battery_pane_stacon_ParamLimits

0x0b16,	// (0x000259fe) battery_pane_stacon

0x0b5a,	// (0x00025a42) control_bottom_pane_stacon_ParamLimits

0x0b5a,	// (0x00025a42) control_bottom_pane_stacon

0x0b7d,	// (0x00025a65) navi_pane_stacon_ParamLimits

0x0b7d,	// (0x00025a65) navi_pane_stacon

0x0ba0,	// (0x00025a88) stacon_bottom_pane_g1_ParamLimits

0x0ba0,	// (0x00025a88) stacon_bottom_pane_g1

0x0217,	// (0x000250ff) aid_levels_signal_lsc_ParamLimits

0x0217,	// (0x000250ff) aid_levels_signal_lsc

0x022e,	// (0x00025116) signal_pane_stacon_g1_ParamLimits

0x022e,	// (0x00025116) signal_pane_stacon_g1

0x0242,	// (0x0002512a) signal_pane_stacon_g2_ParamLimits

0x0242,	// (0x0002512a) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00034587) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00034587) signal_pane_stacon_g

0x0277,	// (0x0002515f) title_pane_stacon_t1_ParamLimits

0x0277,	// (0x0002515f) title_pane_stacon_t1

0xd627,	// (0x0003250f) uni_indicator_pane_stacon_g1

0xd631,	// (0x00032519) uni_indicator_pane_stacon_g2

0xd63b,	// (0x00032523) uni_indicator_pane_stacon_g3

0xd645,	// (0x0003252d) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00034593) uni_indicator_pane_stacon_g

0x029c,	// (0x00025184) control_top_pane_stacon_g1

0x02a4,	// (0x0002518c) control_top_pane_stacon_t1_ParamLimits

0x02a4,	// (0x0002518c) control_top_pane_stacon_t1

0x02db,	// (0x000251c3) aid_levels_battery_lsc_ParamLimits

0x02db,	// (0x000251c3) aid_levels_battery_lsc

0x02f3,	// (0x000251db) battery_pane_stacon_g1_ParamLimits

0x02f3,	// (0x000251db) battery_pane_stacon_g1

0x0305,	// (0x000251ed) battery_pane_stacon_g2_ParamLimits

0x0305,	// (0x000251ed) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003459c) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003459c) battery_pane_stacon_g

0x0343,	// (0x0002522b) navi_icon_pane_stacon

0x0357,	// (0x0002523f) navi_navi_pane_stacon

0x0343,	// (0x0002522b) navi_text_pane_stacon

0x036d,	// (0x00025255) control_bottom_pane_stacon_g1

0x0375,	// (0x0002525d) control_bottom_pane_stacon_t1_ParamLimits

0x0375,	// (0x0002525d) control_bottom_pane_stacon_t1

0xa93e,	// (0x0002f826) grid_app_pane_ParamLimits

0xa93e,	// (0x0002f826) grid_app_pane

0xa976,	// (0x0002f85e) scroll_pane_cp15_ParamLimits

0xa976,	// (0x0002f85e) scroll_pane_cp15

0xa98b,	// (0x0002f873) cell_app_pane_ParamLimits

0xa98b,	// (0x0002f873) cell_app_pane

0xa9d6,	// (0x0002f8be) cell_app_pane_g1_ParamLimits

0xa9d6,	// (0x0002f8be) cell_app_pane_g1

0x0431,	// (0x00025319) cell_app_pane_g2_ParamLimits

0x0431,	// (0x00025319) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x000345a1) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x000345a1) cell_app_pane_g

0xa9fa,	// (0x0002f8e2) cell_app_pane_t1_ParamLimits

0xa9fa,	// (0x0002f8e2) cell_app_pane_t1

0x046e,	// (0x00025356) grid_highlight_pane_ParamLimits

0x046e,	// (0x00025356) grid_highlight_pane

0xd393,	// (0x0003227b) cell_highlight_pane_g1

0xd39b,	// (0x00032283) cell_highlight_pane_g2

0xd3a3,	// (0x0003228b) cell_highlight_pane_g3

0xd3ab,	// (0x00032293) cell_highlight_pane_g4

0xd3b3,	// (0x0003229b) cell_highlight_pane_g5

0xd3bb,	// (0x000322a3) cell_highlight_pane_g6

0xd3c3,	// (0x000322ab) cell_highlight_pane_g7

0xd3cb,	// (0x000322b3) cell_highlight_pane_g8

0xd3d3,	// (0x000322bb) cell_highlight_pane_g9

0xcc93,	// (0x00031b7b) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003454f) cell_highlight_pane_g

0x0492,	// (0x0002537a) bg_scroll_pane

0x04b1,	// (0x00025399) scroll_handle_pane

0x0502,	// (0x000253ea) scroll_bg_pane_g1

0x0517,	// (0x000253ff) scroll_bg_pane_g2

0x052f,	// (0x00025417) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x000345a6) scroll_bg_pane_g

0x0544,	// (0x0002542c) scroll_handle_focus_pane_ParamLimits

0x0544,	// (0x0002542c) scroll_handle_focus_pane

0x0502,	// (0x000253ea) scroll_handle_pane_g1

0x0551,	// (0x00025439) scroll_handle_pane_g2

0x052f,	// (0x00025417) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x000345ad) scroll_handle_pane_g

0xd422,	// (0x0003230a) bg_popup_sub_pane_cp21_ParamLimits

0xd422,	// (0x0003230a) bg_popup_sub_pane_cp21

0x0565,	// (0x0002544d) popup_fep_japan_predictive_window_t1_ParamLimits

0x0565,	// (0x0002544d) popup_fep_japan_predictive_window_t1

0x057c,	// (0x00025464) popup_fep_japan_predictive_window_t2_ParamLimits

0x057c,	// (0x00025464) popup_fep_japan_predictive_window_t2

0x05af,	// (0x00025497) popup_fep_japan_predictive_window_t3_ParamLimits

0x05af,	// (0x00025497) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x000345b4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x000345b4) popup_fep_japan_predictive_window_t

0xcc9d,	// (0x00031b85) bg_popup_sub_pane_cp23

0x05e6,	// (0x000254ce) listscroll_japin_cand_pane

0x05ee,	// (0x000254d6) popup_fep_japan_candidate_window_t1

0x05fc,	// (0x000254e4) candidate_pane_ParamLimits

0x05fc,	// (0x000254e4) candidate_pane

0x060e,	// (0x000254f6) scroll_pane_cp30

0x0618,	// (0x00025500) list_single_popup_jap_candidate_pane_ParamLimits

0x0618,	// (0x00025500) list_single_popup_jap_candidate_pane

0xcc9d,	// (0x00031b85) list_highlight_pane_cp30

0x062c,	// (0x00025514) list_single_popup_jap_candidate_pane_t1

0xaa34,	// (0x0002f91c) level_1_signal

0xaa46,	// (0x0002f92e) level_2_signal

0xaa59,	// (0x0002f941) level_3_signal

0xaa6c,	// (0x0002f954) level_4_signal

0xaa7f,	// (0x0002f967) level_5_signal

0xaa92,	// (0x0002f97a) level_6_signal

0xaaa5,	// (0x0002f98d) level_7_signal

0xaa34,	// (0x0002f91c) level_1_battery

0xaa46,	// (0x0002f92e) level_2_battery

0xaa59,	// (0x0002f941) level_3_battery

0xaa6c,	// (0x0002f954) level_4_battery

0xaa7f,	// (0x0002f967) level_5_battery

0xaa92,	// (0x0002f97a) level_6_battery

0xaaa5,	// (0x0002f98d) level_7_battery

0x06cd,	// (0x000255b5) list_menu_pane_ParamLimits

0x06cd,	// (0x000255b5) list_menu_pane

0x06e3,	// (0x000255cb) scroll_pane_cp25_ParamLimits

0x06e3,	// (0x000255cb) scroll_pane_cp25

0x06fc,	// (0x000255e4) list_double2_graphic_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double2_graphic_pane_cp2

0x06fc,	// (0x000255e4) list_double2_large_graphic_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double2_large_graphic_pane_cp2

0x06fc,	// (0x000255e4) list_double2_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double2_pane_cp2

0x06fc,	// (0x000255e4) list_double_graphic_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double_graphic_pane_cp2

0x06fc,	// (0x000255e4) list_double_large_graphic_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double_large_graphic_pane_cp2

0x06fc,	// (0x000255e4) list_double_number_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double_number_pane_cp2

0x06fc,	// (0x000255e4) list_double_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double_pane_cp2

0xaab8,	// (0x0002f9a0) list_single_2graphic_pane_cp2_ParamLimits

0xaab8,	// (0x0002f9a0) list_single_2graphic_pane_cp2

0xaab8,	// (0x0002f9a0) list_single_graphic_heading_pane_cp2_ParamLimits

0xaab8,	// (0x0002f9a0) list_single_graphic_heading_pane_cp2

0xaab8,	// (0x0002f9a0) list_single_graphic_pane_cp2_ParamLimits

0xaab8,	// (0x0002f9a0) list_single_graphic_pane_cp2

0xaab8,	// (0x0002f9a0) list_single_heading_pane_cp2_ParamLimits

0xaab8,	// (0x0002f9a0) list_single_heading_pane_cp2

0x073f,	// (0x00025627) list_single_large_graphic_pane_cp2_ParamLimits

0x073f,	// (0x00025627) list_single_large_graphic_pane_cp2

0xaab8,	// (0x0002f9a0) list_single_number_heading_pane_cp2_ParamLimits

0xaab8,	// (0x0002f9a0) list_single_number_heading_pane_cp2

0xaab8,	// (0x0002f9a0) list_single_number_pane_cp2_ParamLimits

0xaab8,	// (0x0002f9a0) list_single_number_pane_cp2

0xaacc,	// (0x0002f9b4) list_single_pane_cp2_ParamLimits

0xaacc,	// (0x0002f9b4) list_single_pane_cp2

0x0825,	// (0x0002570d) bg_popup_sub_pane_cp22

0x084a,	// (0x00025732) popup_side_volume_key_window_g1

0x0874,	// (0x0002575c) popup_side_volume_key_window_t1

0x0892,	// (0x0002577a) volume_small_pane_cp1

0xcceb,	// (0x00031bd3) bg_popup_sub_pane_cp24_ParamLimits

0xcceb,	// (0x00031bd3) bg_popup_sub_pane_cp24

0x089a,	// (0x00025782) fep_china_uni_candidate_pane_ParamLimits

0x089a,	// (0x00025782) fep_china_uni_candidate_pane

0x08ae,	// (0x00025796) fep_china_uni_entry_pane

0x08be,	// (0x000257a6) popup_fep_china_uni_window_g1

0x08da,	// (0x000257c2) fep_china_uni_entry_pane_g1

0x08e4,	// (0x000257cc) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x000345e5) fep_china_uni_entry_pane_g

0x08ee,	// (0x000257d6) fep_entry_item_pane

0x08f8,	// (0x000257e0) fep_candidate_item_pane

0x0900,	// (0x000257e8) fep_china_uni_candidate_pane_g1

0x090a,	// (0x000257f2) fep_china_uni_candidate_pane_g2

0x0912,	// (0x000257fa) fep_china_uni_candidate_pane_g3

0x091a,	// (0x00025802) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x000345ea) fep_china_uni_candidate_pane_g

0xcc93,	// (0x00031b7b) fep_entry_item_pane_g1

0x0924,	// (0x0002580c) fep_entry_item_pane_t1_ParamLimits

0x0924,	// (0x0002580c) fep_entry_item_pane_t1

0x093a,	// (0x00025822) fep_candidate_item_pane_t1_ParamLimits

0x093a,	// (0x00025822) fep_candidate_item_pane_t1

0x094f,	// (0x00025837) fep_candidate_item_pane_t2_ParamLimits

0x094f,	// (0x00025837) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x000345f3) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x000345f3) fep_candidate_item_pane_t

0xccf9,	// (0x00031be1) list_highlight_pane_cp31_ParamLimits

0xccf9,	// (0x00031be1) list_highlight_pane_cp31

0x0961,	// (0x00025849) level_1_signal_lsc

0x096a,	// (0x00025852) level_2_signal_lsc

0x0973,	// (0x0002585b) level_3_signal_lsc

0x097c,	// (0x00025864) level_4_signal_lsc

0x0985,	// (0x0002586d) level_5_signal_lsc

0x098e,	// (0x00025876) level_6_signal_lsc

0x0997,	// (0x0002587f) level_7_signal_lsc

0x0997,	// (0x0002587f) level_1_battery_lsc

0x09a0,	// (0x00025888) level_2_battery_lsc

0x09a9,	// (0x00025891) level_3_battery_lsc

0x09b2,	// (0x0002589a) level_4_battery_lsc

0x09bb,	// (0x000258a3) level_5_battery_lsc

0x09c4,	// (0x000258ac) level_6_battery_lsc

0x0961,	// (0x00025849) level_7_battery_lsc

0x09cd,	// (0x000258b5) scroll_handle_focus_pane_g1

0x09d6,	// (0x000258be) scroll_handle_focus_pane_g2

0x09df,	// (0x000258c7) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x000345f8) scroll_handle_focus_pane_g

0x9f65,	// (0x0002ee4d) list_single_2graphic_pane_g1_ParamLimits

0x9f65,	// (0x0002ee4d) list_single_2graphic_pane_g1

0x9a2a,	// (0x0002e912) list_single_2graphic_pane_g2_ParamLimits

0x9a2a,	// (0x0002e912) list_single_2graphic_pane_g2

0xeaa9,	// (0x00033991) list_single_2graphic_pane_g3_ParamLimits

0xeaa9,	// (0x00033991) list_single_2graphic_pane_g3

0x9f71,	// (0x0002ee59) list_single_2graphic_pane_g4_ParamLimits

0x9f71,	// (0x0002ee59) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x000345ff) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x000345ff) list_single_2graphic_pane_g

0x9f7d,	// (0x0002ee65) list_single_2graphic_pane_t1_ParamLimits

0x9f7d,	// (0x0002ee65) list_single_2graphic_pane_t1

0x9fab,	// (0x0002ee93) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9fab,	// (0x0002ee93) list_double2_graphic_large_graphic_pane_g1

0x9a95,	// (0x0002e97d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a95,	// (0x0002e97d) list_double2_graphic_large_graphic_pane_g2

0x9aa6,	// (0x0002e98e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9aa6,	// (0x0002e98e) list_double2_graphic_large_graphic_pane_g3

0x9fbd,	// (0x0002eea5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9fbd,	// (0x0002eea5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00034608) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00034608) list_double2_graphic_large_graphic_pane_g

0x9fc9,	// (0x0002eeb1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9fc9,	// (0x0002eeb1) list_double2_graphic_large_graphic_pane_t1

0x9fdf,	// (0x0002eec7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9fdf,	// (0x0002eec7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x00034611) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x00034611) list_double2_graphic_large_graphic_pane_t

0x0c63,	// (0x00025b4b) popup_fast_swap_window_ParamLimits

0x0c63,	// (0x00025b4b) popup_fast_swap_window

0x0c81,	// (0x00025b69) popup_side_volume_key_window

0x0c9f,	// (0x00025b87) stacon_top_pane

0x0ca9,	// (0x00025b91) status_pane_ParamLimits

0x0ca9,	// (0x00025b91) status_pane

0xcc89,	// (0x00031b71) status_small_pane

0xcc9d,	// (0x00031b85) control_pane

0xcc9d,	// (0x00031b85) stacon_bottom_pane

0xd31e,	// (0x00032206) scroll_pane_cp121

0xd315,	// (0x000321fd) set_content_pane

0xab5b,	// (0x0002fa43) bg_active_tab_pane_g1_cp1

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp1

0xab64,	// (0x0002fa4c) bg_active_tab_pane_g3_cp1

0xab5b,	// (0x0002fa43) bg_passive_tab_pane_g1_cp1

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp1

0xab64,	// (0x0002fa4c) bg_passive_tab_pane_g3_cp1

0xab6d,	// (0x0002fa55) bg_active_tab_pane_g1_cp2

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp2

0xab76,	// (0x0002fa5e) bg_active_tab_pane_g3_cp2

0xab6d,	// (0x0002fa55) bg_passive_tab_pane_g1_cp2

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp2

0xab76,	// (0x0002fa5e) bg_passive_tab_pane_g3_cp2

0xab7f,	// (0x0002fa67) bg_active_tab_pane_g1_cp3

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp3

0xab88,	// (0x0002fa70) bg_active_tab_pane_g3_cp3

0xab7f,	// (0x0002fa67) bg_passive_tab_pane_g1_cp3

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp3

0xab88,	// (0x0002fa70) bg_passive_tab_pane_g3_cp3

0xab91,	// (0x0002fa79) bg_active_tab_pane_g1_cp4

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp4

0xab9a,	// (0x0002fa82) bg_active_tab_pane_g3_cp4

0xab91,	// (0x0002fa79) bg_passive_tab_pane_g1_cp4

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp4

0xab9a,	// (0x0002fa82) bg_passive_tab_pane_g3_cp4

0x0bbc,	// (0x00025aa4) bg_active_tab_pane_g1_cp5

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp5

0x0bc5,	// (0x00025aad) bg_active_tab_pane_g3_cp5

0x0bbc,	// (0x00025aa4) bg_passive_tab_pane_g1_cp5

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp5

0x0bc5,	// (0x00025aad) bg_passive_tab_pane_g3_cp5

0x4fd2,	// (0x00029eba) list_set_graphic_pane_ParamLimits

0x4fd2,	// (0x00029eba) list_set_graphic_pane

0xcc9d,	// (0x00031b85) bg_set_opt_pane_cp4

0x0be4,	// (0x00025acc) list_set_graphic_pane_g1_ParamLimits

0x0be4,	// (0x00025acc) list_set_graphic_pane_g1

0x0bf0,	// (0x00025ad8) list_set_graphic_pane_g2_ParamLimits

0x0bf0,	// (0x00025ad8) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00034616) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00034616) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x0003499b) volume_small_pane_cp_g

0x0c14,	// (0x00025afc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0c14,	// (0x00025afc) list_double2_large_graphic_pane_g1_cp2

0x0c22,	// (0x00025b0a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0c22,	// (0x00025b0a) list_double2_large_graphic_pane_g2_cp2

0x0c33,	// (0x00025b1b) list_double2_large_graphic_pane_g3_cp2

0x0c3b,	// (0x00025b23) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0c3b,	// (0x00025b23) list_double2_large_graphic_pane_t1_cp2

0x0c51,	// (0x00025b39) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0c51,	// (0x00025b39) list_double2_large_graphic_pane_t2_cp2

0x4531,	// (0x00029419) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4531,	// (0x00029419) list_double_large_graphic_pane_g1_cp2

0x4544,	// (0x0002942c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4544,	// (0x0002942c) list_double_large_graphic_pane_g2_cp2

0x0dc7,	// (0x00025caf) list_double_large_graphic_pane_g3_cp2

0x4555,	// (0x0002943d) list_double_large_graphic_pane_g4_cp

0x455d,	// (0x00029445) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x455d,	// (0x00029445) list_double_large_graphic_pane_t1_cp2

0x4574,	// (0x0002945c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4574,	// (0x0002945c) list_double_large_graphic_pane_t2_cp2

0x0cb7,	// (0x00025b9f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0cb7,	// (0x00025b9f) list_double2_graphic_pane_g1_cp2

0x0cc5,	// (0x00025bad) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0cc5,	// (0x00025bad) list_double2_graphic_pane_g2_cp2

0x0cd6,	// (0x00025bbe) list_double2_graphic_pane_g3_cp2

0x0ce0,	// (0x00025bc8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0ce0,	// (0x00025bc8) list_double2_graphic_pane_t1_cp2

0x0cf6,	// (0x00025bde) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0cf6,	// (0x00025bde) list_double2_graphic_pane_t2_cp2

0x0d08,	// (0x00025bf0) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0d08,	// (0x00025bf0) list_single_number_heading_pane_g1_cp2

0x0d14,	// (0x00025bfc) list_single_number_heading_pane_g2_cp2

0x0d1c,	// (0x00025c04) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0d1c,	// (0x00025c04) list_single_number_heading_pane_t1_cp2

0x0d32,	// (0x00025c1a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0d32,	// (0x00025c1a) list_single_number_heading_pane_t2_cp2

0x0d46,	// (0x00025c2e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0d46,	// (0x00025c2e) list_single_number_heading_pane_t3_cp2

0x0d08,	// (0x00025bf0) list_single_heading_pane_g1_cp2_ParamLimits

0x0d08,	// (0x00025bf0) list_single_heading_pane_g1_cp2

0x0d14,	// (0x00025bfc) list_single_heading_pane_g2_cp2

0x0d1c,	// (0x00025c04) list_single_heading_pane_t1_cp2_ParamLimits

0x0d1c,	// (0x00025c04) list_single_heading_pane_t1_cp2

0x432b,	// (0x00029213) list_single_heading_pane_t2_cp2_ParamLimits

0x432b,	// (0x00029213) list_single_heading_pane_t2_cp2

0x4273,	// (0x0002915b) list_double_graphic_pane_g1_cp2_ParamLimits

0x4273,	// (0x0002915b) list_double_graphic_pane_g1_cp2

0x427f,	// (0x00029167) list_double_graphic_pane_g2_cp2_ParamLimits

0x427f,	// (0x00029167) list_double_graphic_pane_g2_cp2

0x428e,	// (0x00029176) list_double_graphic_pane_g3_cp2

0x4296,	// (0x0002917e) list_double_graphic_pane_t1_cp2_ParamLimits

0x4296,	// (0x0002917e) list_double_graphic_pane_t1_cp2

0x42ac,	// (0x00029194) list_double_graphic_pane_t2_cp2_ParamLimits

0x42ac,	// (0x00029194) list_double_graphic_pane_t2_cp2

0x0dbb,	// (0x00025ca3) list_double_number_pane_g1_cp2_ParamLimits

0x0dbb,	// (0x00025ca3) list_double_number_pane_g1_cp2

0x0dc7,	// (0x00025caf) list_double_number_pane_g2_cp2

0x4237,	// (0x0002911f) list_double_number_pane_t1_cp2_ParamLimits

0x4237,	// (0x0002911f) list_double_number_pane_t1_cp2

0x424b,	// (0x00029133) list_double_number_pane_t2_cp2_ParamLimits

0x424b,	// (0x00029133) list_double_number_pane_t2_cp2

0x4261,	// (0x00029149) list_double_number_pane_t3_cp2_ParamLimits

0x4261,	// (0x00029149) list_double_number_pane_t3_cp2

0x4120,	// (0x00029008) list_single_graphic_pane_g1_cp2_ParamLimits

0x4120,	// (0x00029008) list_single_graphic_pane_g1_cp2

0x0e2c,	// (0x00025d14) list_single_graphic_pane_g2_cp2_ParamLimits

0x0e2c,	// (0x00025d14) list_single_graphic_pane_g2_cp2

0x0e38,	// (0x00025d20) list_single_graphic_pane_g3_cp2

0x40f6,	// (0x00028fde) list_single_graphic_pane_t1_cp2_ParamLimits

0x40f6,	// (0x00028fde) list_single_graphic_pane_t1_cp2

0x0e2c,	// (0x00025d14) list_single_number_pane_g1_cp2_ParamLimits

0x0e2c,	// (0x00025d14) list_single_number_pane_g1_cp2

0x0e38,	// (0x00025d20) list_single_number_pane_g2_cp2

0x40f6,	// (0x00028fde) list_single_number_pane_t1_cp2_ParamLimits

0x40f6,	// (0x00028fde) list_single_number_pane_t1_cp2

0x410c,	// (0x00028ff4) list_single_number_pane_t2_cp2_ParamLimits

0x410c,	// (0x00028ff4) list_single_number_pane_t2_cp2

0x0c22,	// (0x00025b0a) list_double2_pane_g1_cp2_ParamLimits

0x0c22,	// (0x00025b0a) list_double2_pane_g1_cp2

0x0c33,	// (0x00025b1b) list_double2_pane_g2_cp2

0x0d93,	// (0x00025c7b) list_double2_pane_t1_cp2_ParamLimits

0x0d93,	// (0x00025c7b) list_double2_pane_t1_cp2

0x0da9,	// (0x00025c91) list_double2_pane_t2_cp2_ParamLimits

0x0da9,	// (0x00025c91) list_double2_pane_t2_cp2

0x0dbb,	// (0x00025ca3) list_double_pane_g1_cp2_ParamLimits

0x0dbb,	// (0x00025ca3) list_double_pane_g1_cp2

0x0dc7,	// (0x00025caf) list_double_pane_g2_cp2

0x0dcf,	// (0x00025cb7) list_double_pane_t1_cp2_ParamLimits

0x0dcf,	// (0x00025cb7) list_double_pane_t1_cp2

0x0de5,	// (0x00025ccd) list_double_pane_t2_cp2_ParamLimits

0x0de5,	// (0x00025ccd) list_double_pane_t2_cp2

0x0e1c,	// (0x00025d04) list_single_pane_cp2_g3

0x0e2c,	// (0x00025d14) list_single_pane_g1_cp2_ParamLimits

0x0e2c,	// (0x00025d14) list_single_pane_g1_cp2

0x0e38,	// (0x00025d20) list_single_pane_g2_cp2

0x0e40,	// (0x00025d28) list_single_pane_t1_cp2_ParamLimits

0x0e40,	// (0x00025d28) list_single_pane_t1_cp2

0x0e58,	// (0x00025d40) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0e58,	// (0x00025d40) list_single_large_graphic_pane_g1_cp2

0x0e66,	// (0x00025d4e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0e66,	// (0x00025d4e) list_single_large_graphic_pane_g2_cp2

0x2b71,	// (0x00027a59) list_single_large_graphic_pane_g3_cp2

0x2b79,	// (0x00027a61) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2b79,	// (0x00027a61) list_single_large_graphic_pane_g4_cp1

0x2b93,	// (0x00027a7b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2b93,	// (0x00027a7b) list_single_large_graphic_pane_t1_cp2

0x40c0,	// (0x00028fa8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x40c0,	// (0x00028fa8) list_single_graphic_heading_pane_g1_cp2

0x408d,	// (0x00028f75) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x408d,	// (0x00028f75) list_single_graphic_heading_pane_g4_cp2

0x0e38,	// (0x00025d20) list_single_graphic_heading_pane_g5_cp2

0x40cc,	// (0x00028fb4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x40cc,	// (0x00028fb4) list_single_graphic_heading_pane_t1_cp2

0x40e2,	// (0x00028fca) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x40e2,	// (0x00028fca) list_single_graphic_heading_pane_t2_cp2

0x4081,	// (0x00028f69) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4081,	// (0x00028f69) list_single_2graphic_pane_g1_cp2

0x408d,	// (0x00028f75) list_single_2graphic_pane_g2_cp2_ParamLimits

0x408d,	// (0x00028f75) list_single_2graphic_pane_g2_cp2

0x0e38,	// (0x00025d20) list_single_2graphic_pane_g3_cp2

0x409e,	// (0x00028f86) list_single_2graphic_pane_g4_cp2_ParamLimits

0x409e,	// (0x00028f86) list_single_2graphic_pane_g4_cp2

0x40aa,	// (0x00028f92) list_single_2graphic_pane_t1_cp2_ParamLimits

0x40aa,	// (0x00028f92) list_single_2graphic_pane_t1_cp2

0xcc93,	// (0x00031b7b) list_highlight_pane_g10_cp1

0x3c59,	// (0x00028b41) list_highlight_pane_g1_cp1

0x3c61,	// (0x00028b49) list_highlight_pane_g2_cp1

0x3c69,	// (0x00028b51) list_highlight_pane_g3_cp1

0x3c71,	// (0x00028b59) list_highlight_pane_g4_cp1

0x3c79,	// (0x00028b61) list_highlight_pane_g5_cp1

0x3c81,	// (0x00028b69) list_highlight_pane_g6_cp1

0x3c89,	// (0x00028b71) list_highlight_pane_g7_cp1

0x3c91,	// (0x00028b79) list_highlight_pane_g8_cp1

0x3c99,	// (0x00028b81) list_highlight_pane_g9_cp1

0xba08,	// (0x000308f0) form_field_slider_pane_t3

0xba16,	// (0x000308fe) form_field_slider_pane_t4

0x3b95,	// (0x00028a7d) slider_form_pane_ParamLimits

0x3b95,	// (0x00028a7d) slider_form_pane

0xcc9d,	// (0x00031b85) control_abbreviations

0xcc9d,	// (0x00031b85) control_conventions

0xcc9d,	// (0x00031b85) control_definitions

0xcc9d,	// (0x00031b85) format_table_attribute

0x4381,	// (0x00029269) bg_popup_preview_window_pane_g9

0xcc9d,	// (0x00031b85) format_table_data2

0xcc9d,	// (0x00031b85) format_table_data3

0xcc9d,	// (0x00031b85) format_table_data_example

0x0008,

0xcc9d,	// (0x00031b85) intro_purpose

0xf8c5,	// (0x000347ad) bg_popup_preview_window_pane_g

0xcc9d,	// (0x00031b85) texts_category

0xcc9d,	// (0x00031b85) texts_graphics

0x2ba9,	// (0x00027a91) text_digital

0x2bb8,	// (0x00027aa0) text_primary

0x2bc7,	// (0x00027aaf) text_primary_small

0x2bd6,	// (0x00027abe) text_secondary

0x2be5,	// (0x00027acd) text_title

0x4afb,	// (0x000299e3) bg_passive_tab_pane_g1_cp3_srt

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp3_srt

0x4b04,	// (0x000299ec) bg_passive_tab_pane_g3_cp3_srt

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp3_srt_ParamLimits

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp3_srt

0x4b0d,	// (0x000299f5) tabs_4_active_pane_srt_g1

0xbf45,	// (0x00030e2d) tabs_4_active_pane_srt_t1_ParamLimits

0xbf45,	// (0x00030e2d) tabs_4_active_pane_srt_t1

0x4afb,	// (0x000299e3) bg_active_tab_pane_g1_cp3_copy1

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp3_copy1

0x4b04,	// (0x000299ec) bg_active_tab_pane_g3_cp3_copy1

0xccf9,	// (0x00031be1) tabs_2_long_active_pane_srt_ParamLimits

0xccf9,	// (0x00031be1) tabs_2_long_active_pane_srt

0xccf9,	// (0x00031be1) tabs_2_long_passive_pane_srt_ParamLimits

0xccf9,	// (0x00031be1) tabs_2_long_passive_pane_srt

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp4_srt

0x47bb,	// (0x000296a3) bg_passive_tab_pane_g1_cp4_srt

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp4_srt

0x47c4,	// (0x000296ac) bg_passive_tab_pane_g3_cp4_srt

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp4_srt_ParamLimits

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp4_srt

0xbd3d,	// (0x00030c25) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbd3d,	// (0x00030c25) tabs_2_long_active_pane_srt_t1

0x47bb,	// (0x000296a3) bg_active_tab_pane_g1_cp4_srt

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp4_srt

0x47c4,	// (0x000296ac) bg_active_tab_pane_g3_cp4_srt

0xcceb,	// (0x00031bd3) tabs_3_long_active_pane_srt_ParamLimits

0xcceb,	// (0x00031bd3) tabs_3_long_active_pane_srt

0xcceb,	// (0x00031bd3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xcceb,	// (0x00031bd3) tabs_3_long_passive_pane_cp_srt

0xcceb,	// (0x00031bd3) tabs_3_long_passive_pane_srt_ParamLimits

0xcceb,	// (0x00031bd3) tabs_3_long_passive_pane_srt

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp5_srt

0x0bbc,	// (0x00025aa4) bg_passive_tab_pane_g1_cp5_srt

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp5_srt

0x0bc5,	// (0x00025aad) bg_passive_tab_pane_g3_cp5_srt

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp5_srt_ParamLimits

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp5_srt

0xbd27,	// (0x00030c0f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbd27,	// (0x00030c0f) tabs_3_long_active_pane_srt_t1

0x0bbc,	// (0x00025aa4) bg_active_tab_pane_g1_cp5_srt

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp5_srt

0x0bc5,	// (0x00025aad) bg_active_tab_pane_g3_cp5_srt

0x479b,	// (0x00029683) navi_text_pane_srt_t1

0x4793,	// (0x0002967b) navi_icon_pane_srt_g1

0x2dbd,	// (0x00027ca5) midp_editing_number_pane_srt

0x2bf4,	// (0x00027adc) midp_ticker_pane_srt

0x2dc5,	// (0x00027cad) midp_ticker_pane_srt_g1

0x2dcd,	// (0x00027cb5) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00034635) midp_ticker_pane_srt_g

0x2dd5,	// (0x00027cbd) midp_ticker_pane_srt_t1

0x4784,	// (0x0002966c) midp_editing_number_pane_t1_copy1

0xaba3,	// (0x0002fa8b) listscroll_midp_pane

0xaba3,	// (0x0002fa8b) midp_form_pane

0x2c6b,	// (0x00027b53) midp_info_popup_window_ParamLimits

0x2c6b,	// (0x00027b53) midp_info_popup_window

0xd422,	// (0x0003230a) bg_popup_sub_pane_cp50_ParamLimits

0xd422,	// (0x0003230a) bg_popup_sub_pane_cp50

0x387b,	// (0x00028763) listscroll_midp_info_pane_ParamLimits

0x387b,	// (0x00028763) listscroll_midp_info_pane

0x385b,	// (0x00028743) listscroll_form_midp_pane_ParamLimits

0x385b,	// (0x00028743) listscroll_form_midp_pane

0x3867,	// (0x0002874f) scroll_bar_cp050

0x385b,	// (0x00028743) list_midp_pane

0x55af,	// (0x0002a497) signal_pane_g2_cp

0x3775,	// (0x0002865d) listscroll_midp_info_pane_t1_ParamLimits

0x3775,	// (0x0002865d) listscroll_midp_info_pane_t1

0x378d,	// (0x00028675) listscroll_midp_info_pane_t2_ParamLimits

0x378d,	// (0x00028675) listscroll_midp_info_pane_t2

0x37cb,	// (0x000286b3) listscroll_midp_info_pane_t3_ParamLimits

0x37cb,	// (0x000286b3) listscroll_midp_info_pane_t3

0x3805,	// (0x000286ed) listscroll_midp_info_pane_t4_ParamLimits

0x3805,	// (0x000286ed) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x000346e8) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x000346e8) listscroll_midp_info_pane_t

0xd477,	// (0x0003235f) scroll_pane_cp21

0x370f,	// (0x000285f7) form_midp_field_choice_group_pane

0x3718,	// (0x00028600) form_midp_field_text_pane

0x375b,	// (0x00028643) form_midp_field_time_pane

0x3763,	// (0x0002864b) form_midp_gauge_slider_pane

0x376c,	// (0x00028654) form_midp_gauge_wait_pane

0xcc9d,	// (0x00031b85) form_midp_image_pane

0xa00d,	// (0x0002eef5) list_single_midp_pane_ParamLimits

0xa00d,	// (0x0002eef5) list_single_midp_pane

0xb9e3,	// (0x000308cb) form_midp_field_text_pane_t1

0x34c5,	// (0x000283ad) input_focus_pane_cp050

0x36fe,	// (0x000285e6) list_midp_form_text_pane

0x36a2,	// (0x0002858a) form_midp_field_choice_group_pane_t1

0x36b0,	// (0x00028598) input_focus_pane_cp051

0x36c4,	// (0x000285ac) list_midp_choice_pane

0xcc9d,	// (0x00031b85) status_idle_pane

0x3686,	// (0x0002856e) form_midp_field_time_pane_t1

0xcc93,	// (0x00031b7b) wait_anim_pane_g2_copy1

0x3694,	// (0x0002857c) form_midp_field_time_pane_t2

0x0001,

0x2d1b,	// (0x00027c03) aid_navinavi_width_2_pane

0xf7fb,	// (0x000346e3) form_midp_field_time_pane_t

0xcc9d,	// (0x00031b85) input_focus_pane_cp052

0xcc9d,	// (0x00031b85) bg_input_focus_pane_cp040

0x3646,	// (0x0002852e) form_midp_gauge_slider_pane_t1

0x3654,	// (0x0002853c) form_midp_gauge_slider_pane_t2

0xb9c7,	// (0x000308af) form_midp_gauge_slider_pane_t3

0xb9d5,	// (0x000308bd) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x000346da) form_midp_gauge_slider_pane_t

0x367e,	// (0x00028566) form_midp_slider_pane

0xccf9,	// (0x00031be1) bg_input_focus_pane_cp041_ParamLimits

0xccf9,	// (0x00031be1) bg_input_focus_pane_cp041

0x3613,	// (0x000284fb) form_midp_gauge_wait_pane_t1_ParamLimits

0x3613,	// (0x000284fb) form_midp_gauge_wait_pane_t1

0x3625,	// (0x0002850d) form_midp_gauge_wait_pane_t2_ParamLimits

0x3625,	// (0x0002850d) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x000346d5) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x000346d5) form_midp_gauge_wait_pane_t

0x3637,	// (0x0002851f) form_midp_wait_pane_ParamLimits

0x3637,	// (0x0002851f) form_midp_wait_pane

0x35db,	// (0x000284c3) form_midp_image_pane_g1

0x35e4,	// (0x000284cc) form_midp_image_pane_t1

0x35f3,	// (0x000284db) form_midp_image_pane_t2

0x3602,	// (0x000284ea) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000346ce) form_midp_image_pane_t

0x35d2,	// (0x000284ba) list_single_midp_pane_g1

0xed7d,	// (0x00033c65) list_single_midp_pane_t1

0xb9b0,	// (0x00030898) list_midp_form_item_pane_ParamLimits

0xb9b0,	// (0x00030898) list_midp_form_item_pane

0x2cc3,	// (0x00027bab) list_midp_form_item_pane_t1

0x2cd2,	// (0x00027bba) midp_ticker_pane_g1

0x2cde,	// (0x00027bc6) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003461b) midp_ticker_pane_g

0xac47,	// (0x0002fb2f) midp_ticker_pane_t1

0xbec6,	// (0x00030dae) midp_editing_number_pane_t1

0x49cf,	// (0x000298b7) midp_editing_number_pane

0x49de,	// (0x000298c6) midp_ticker_pane

0x4774,	// (0x0002965c) ai_message_heading_pane

0xcc9d,	// (0x00031b85) bg_popup_window_pane_cp14

0x477c,	// (0x00029664) listscroll_ai_message_pane

0x46fa,	// (0x000295e2) ai_message_heading_pane_g1_ParamLimits

0x46fa,	// (0x000295e2) ai_message_heading_pane_g1

0x4706,	// (0x000295ee) ai_message_heading_pane_g2_ParamLimits

0x4706,	// (0x000295ee) ai_message_heading_pane_g2

0x4714,	// (0x000295fc) ai_message_heading_pane_g3_ParamLimits

0x4714,	// (0x000295fc) ai_message_heading_pane_g3

0x4720,	// (0x00029608) ai_message_heading_pane_g4_ParamLimits

0x4720,	// (0x00029608) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0003480f) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0003480f) ai_message_heading_pane_g

0x472c,	// (0x00029614) ai_message_heading_pane_t1_ParamLimits

0x472c,	// (0x00029614) ai_message_heading_pane_t1

0x4746,	// (0x0002962e) ai_message_heading_pane_t2_ParamLimits

0x4746,	// (0x0002962e) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00034818) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00034818) ai_message_heading_pane_t

0x475a,	// (0x00029642) bg_popup_heading_pane_cp1_ParamLimits

0x475a,	// (0x00029642) bg_popup_heading_pane_cp1

0x46e8,	// (0x000295d0) list_ai_message_pane_ParamLimits

0x46e8,	// (0x000295d0) list_ai_message_pane

0xd477,	// (0x0003235f) scroll_pane_cp10

0x4684,	// (0x0002956c) list_ai_message_pane_g1

0x468c,	// (0x00029574) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000347ec) list_ai_message_pane_g

0x4694,	// (0x0002957c) list_ai_message_pane_t1_ParamLimits

0x4694,	// (0x0002957c) list_ai_message_pane_t1

0x46a9,	// (0x00029591) list_ai_message_pane_t2_ParamLimits

0x46a9,	// (0x00029591) list_ai_message_pane_t2

0x46be,	// (0x000295a6) list_ai_message_pane_t3_ParamLimits

0x46be,	// (0x000295a6) list_ai_message_pane_t3

0x46d3,	// (0x000295bb) list_ai_message_pane_t4_ParamLimits

0x46d3,	// (0x000295bb) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000347f1) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000347f1) list_ai_message_pane_t

0xbd0d,	// (0x00030bf5) cell_ai_soft_ind_pane_ParamLimits

0xbd0d,	// (0x00030bf5) cell_ai_soft_ind_pane

0x2cfc,	// (0x00027be4) cell_ai_soft_ind_pane_g1_ParamLimits

0x2cfc,	// (0x00027be4) cell_ai_soft_ind_pane_g1

0xcc9d,	// (0x00031b85) grid_highlight_cp1

0x2d09,	// (0x00027bf1) text_secondary_cp56_ParamLimits

0x2d09,	// (0x00027bf1) text_secondary_cp56

0x4642,	// (0x0002952a) example_general_pane_ParamLimits

0x4642,	// (0x0002952a) example_general_pane

0x464e,	// (0x00029536) example_parent_pane_g1_ParamLimits

0x464e,	// (0x00029536) example_parent_pane_g1

0x465a,	// (0x00029542) example_parent_pane_t1_ParamLimits

0x465a,	// (0x00029542) example_parent_pane_t1

0xb1a1,	// (0x00030089) popup_preview_text_window_ParamLimits

0xb1a1,	// (0x00030089) popup_preview_text_window

0x0e24,	// (0x00025d0c) list_single_pane_cp2_g4

0xcefa,	// (0x00031de2) bg_popup_preview_window_pane_ParamLimits

0xcefa,	// (0x00031de2) bg_popup_preview_window_pane

0x438b,	// (0x00029273) popup_preview_text_window_t1_ParamLimits

0x438b,	// (0x00029273) popup_preview_text_window_t1

0x43a9,	// (0x00029291) popup_preview_text_window_t2_ParamLimits

0x43a9,	// (0x00029291) popup_preview_text_window_t2

0x43f2,	// (0x000292da) popup_preview_text_window_t3_ParamLimits

0x43f2,	// (0x000292da) popup_preview_text_window_t3

0x4437,	// (0x0002931f) popup_preview_text_window_t4_ParamLimits

0x4437,	// (0x0002931f) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000347c0) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000347c0) popup_preview_text_window_t

0x44b5,	// (0x0002939d) scroll_pane_cp11

0x3451,	// (0x00028339) bg_popup_preview_window_pane_g1

0x433f,	// (0x00029227) bg_popup_preview_window_pane_g2

0x4349,	// (0x00029231) bg_popup_preview_window_pane_g3

0x4353,	// (0x0002923b) bg_popup_preview_window_pane_g4

0x435d,	// (0x00029245) bg_popup_preview_window_pane_g5

0x4367,	// (0x0002924f) bg_popup_preview_window_pane_g6

0x436f,	// (0x00029257) bg_popup_preview_window_pane_g7

0x4377,	// (0x0002925f) bg_popup_preview_window_pane_g8

0xf01d,	// (0x00033f05) aid_popup_width_pane

0xb111,	// (0x0002fff9) popup_midp_note_alarm_window_ParamLimits

0xb111,	// (0x0002fff9) popup_midp_note_alarm_window

0xd32f,	// (0x00032217) data_form_pane_ParamLimits

0x9e69,	// (0x0002ed51) form_field_data_pane_g1

0x9e73,	// (0x0002ed5b) form_field_data_pane_t1_ParamLimits

0xd33b,	// (0x00032223) input_focus_pane_ParamLimits

0xeb9e,	// (0x00033a86) data_form_wide_pane_ParamLimits

0xebaf,	// (0x00033a97) form_field_data_wide_pane_g1

0xebbb,	// (0x00033aa3) form_field_data_wide_pane_t1_ParamLimits

0xd0b6,	// (0x00031f9e) input_focus_pane_cp6_ParamLimits

0xa8f1,	// (0x0002f7d9) input_popup_find_pane_g1_ParamLimits

0xa8f1,	// (0x0002f7d9) input_popup_find_pane_g1

0x0316,	// (0x000251fe) aid_navi_side_left_pane

0x032b,	// (0x00025213) aid_navi_side_right_pane

0x3d54,	// (0x00028c3c) bg_popup_window_pane_cp30_ParamLimits

0x3d54,	// (0x00028c3c) bg_popup_window_pane_cp30

0x3dce,	// (0x00028cb6) popup_midp_note_alarm_window_g1_ParamLimits

0x3dce,	// (0x00028cb6) popup_midp_note_alarm_window_g1

0x3dfe,	// (0x00028ce6) popup_midp_note_alarm_window_t1_ParamLimits

0x3dfe,	// (0x00028ce6) popup_midp_note_alarm_window_t1

0x3e9f,	// (0x00028d87) popup_midp_note_alarm_window_t2_ParamLimits

0x3e9f,	// (0x00028d87) popup_midp_note_alarm_window_t2

0x3f4d,	// (0x00028e35) popup_midp_note_alarm_window_t3_ParamLimits

0x3f4d,	// (0x00028e35) popup_midp_note_alarm_window_t3

0x3f7f,	// (0x00028e67) popup_midp_note_alarm_window_t4_ParamLimits

0x3f7f,	// (0x00028e67) popup_midp_note_alarm_window_t4

0x3fa5,	// (0x00028e8d) popup_midp_note_alarm_window_t5_ParamLimits

0x3fa5,	// (0x00028e8d) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0003475d) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0003475d) popup_midp_note_alarm_window_t

0x4051,	// (0x00028f39) wait_bar_pane_cp1_ParamLimits

0x4051,	// (0x00028f39) wait_bar_pane_cp1

0xcc9d,	// (0x00031b85) wait_anim_pane_copy1

0xcc9d,	// (0x00031b85) wait_border_pane_copy1

0x3a39,	// (0x00028921) wait_border_pane_g1_copy1

0xebd5,	// (0x00033abd) form_field_popup_pane_g1

0x9e8d,	// (0x0002ed75) form_field_popup_pane_t1_ParamLimits

0xd33b,	// (0x00032223) input_focus_pane_cp7_ParamLimits

0xd369,	// (0x00032251) list_form_pane_ParamLimits

0xebdd,	// (0x00033ac5) form_field_popup_wide_pane_g1

0xebe5,	// (0x00033acd) form_field_popup_wide_pane_t1_ParamLimits

0xd33b,	// (0x00032223) input_focus_pane_cp8_ParamLimits

0xd375,	// (0x0003225d) list_form_wide_pane_ParamLimits

0x4b96,	// (0x00029a7e) aid_size_cell_graphic_pane

0x9f0c,	// (0x0002edf4) data_form_pane_t1_ParamLimits

0xa03c,	// (0x0002ef24) data_form_wide_pane_t1_ParamLimits

0xb5a5,	// (0x0003048d) bg_status_flat_pane

0xa536,	// (0x0002f41e) title_pane_t1_ParamLimits

0xccb3,	// (0x00031b9b) title_pane_t2_ParamLimits

0xccd9,	// (0x00031bc1) title_pane_t3_ParamLimits

0xf532,	// (0x0003441a) title_pane_t_ParamLimits

0xaa34,	// (0x0002f91c) level_1_signal_ParamLimits

0xaa46,	// (0x0002f92e) level_2_signal_ParamLimits

0xaa59,	// (0x0002f941) level_3_signal_ParamLimits

0xaa6c,	// (0x0002f954) level_4_signal_ParamLimits

0xaa7f,	// (0x0002f967) level_5_signal_ParamLimits

0xaa92,	// (0x0002f97a) level_6_signal_ParamLimits

0xaaa5,	// (0x0002f98d) level_7_signal_ParamLimits

0xaa34,	// (0x0002f91c) level_1_battery_ParamLimits

0xaa46,	// (0x0002f92e) level_2_battery_ParamLimits

0xaa59,	// (0x0002f941) level_3_battery_ParamLimits

0xaa6c,	// (0x0002f954) level_4_battery_ParamLimits

0xaa7f,	// (0x0002f967) level_5_battery_ParamLimits

0xaa92,	// (0x0002f97a) level_6_battery_ParamLimits

0xaaa5,	// (0x0002f98d) level_7_battery_ParamLimits

0x3c59,	// (0x00028b41) bg_status_flat_pane_g1

0x3c61,	// (0x00028b49) bg_status_flat_pane_g2

0x3c69,	// (0x00028b51) bg_status_flat_pane_g3

0x3c71,	// (0x00028b59) bg_status_flat_pane_g4

0x3c79,	// (0x00028b61) bg_status_flat_pane_g5

0x3c81,	// (0x00028b69) bg_status_flat_pane_g6

0x3c89,	// (0x00028b71) bg_status_flat_pane_g7

0xa5ca,	// (0x0002f4b2) tabs_3_active_pane_t1_ParamLimits

0xa5ca,	// (0x0002f4b2) tabs_3_passive_pane_t1_ParamLimits

0xa5e4,	// (0x0002f4cc) tabs_4_active_pane_t1_ParamLimits

0xa5e4,	// (0x0002f4cc) tabs_4_1_passive_pane_t1_ParamLimits

0xa907,	// (0x0002f7ef) tabs_2_active_pane_t1_ParamLimits

0xa907,	// (0x0002f7ef) tabs_2_passive_pane_t1_ParamLimits

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp4_ParamLimits

0xa919,	// (0x0002f801) tabs_2_long_active_pane_t1_ParamLimits

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp4_ParamLimits

0x1707,	// (0x000265ef) list_single_midp_graphic_pane_t1_ParamLimits

0xccf9,	// (0x00031be1) bg_active_tab_pane_cp5_ParamLimits

0xa92c,	// (0x0002f814) tabs_3_long_active_pane_t1_ParamLimits

0x2f1b,	// (0x00027e03) bg_passive_tab_pane_cp5_ParamLimits

0x1707,	// (0x000265ef) list_single_midp_graphic_pane_t1

0xb5a5,	// (0x0003048d) bg_status_flat_pane_ParamLimits

0x30d5,	// (0x00027fbd) indicator_pane_cp2_ParamLimits

0x30d5,	// (0x00027fbd) indicator_pane_cp2

0xb73b,	// (0x00030623) navi_pane_srt_ParamLimits

0xb73b,	// (0x00030623) navi_pane_srt

0x323c,	// (0x00028124) popup_clock_digital_analogue_window_cp1

0xcd3d,	// (0x00031c25) indicator_pane_t1

0x2bf4,	// (0x00027adc) copy_highlight_pane

0x2bf4,	// (0x00027adc) cursor_graphics_pane

0x2bf4,	// (0x00027adc) graphic_within_text_pane

0x2bf4,	// (0x00027adc) link_highlight_pane

0x4478,	// (0x00029360) popup_preview_text_window_t5_ParamLimits

0x4478,	// (0x00029360) popup_preview_text_window_t5

0x2d25,	// (0x00027c0d) cursor_digital_pane

0x2d25,	// (0x00027c0d) cursor_primary_pane

0x2d36,	// (0x00027c1e) cursor_primary_small_pane

0x2d3e,	// (0x00027c26) cursor_secondary_pane

0x2d46,	// (0x00027c2e) cursor_title_pane

0x2d25,	// (0x00027c0d) link_highlight_digital_pane

0x2d2d,	// (0x00027c15) link_highlight_primary_pane

0x2d36,	// (0x00027c1e) link_highlight_primary_small_pane

0x2d3e,	// (0x00027c26) link_highlight_secondary_pane

0x2d46,	// (0x00027c2e) link_highlight_title_pane

0x2d25,	// (0x00027c0d) copy_highlight_digital_pane

0x2d25,	// (0x00027c0d) copy_highlight_primary_pane

0x2d36,	// (0x00027c1e) copy_highlight_primary_small_pane

0x2d3e,	// (0x00027c26) copy_highlight_secondary_pane

0x2d46,	// (0x00027c2e) copy_highlight_title_pane

0x2d3e,	// (0x00027c26) graphic_text_digital_pane

0x3cf7,	// (0x00028bdf) graphic_text_primary_pane

0x3d00,	// (0x00028be8) graphic_text_primary_small_pane

0x2d36,	// (0x00027c1e) graphic_text_secondary_pane

0x2d25,	// (0x00027c0d) graphic_text_title_pane

0xac59,	// (0x0002fb41) cursor_primary_pane_g1

0x3ce9,	// (0x00028bd1) cursor_text_primary_t1

0xba38,	// (0x00030920) cursor_primary_small_pane_g1

0x3cdb,	// (0x00028bc3) cursor_text_primary_small_t1

0xba2e,	// (0x00030916) cursor_primary_small_pane_g1_copy1

0x3cc3,	// (0x00028bab) cursor_text_primary_small_t1_copy1

0x3ca1,	// (0x00028b89) cursor_text_title_t1

0xba24,	// (0x0003090c) cursor_title_pane_g1

0xac59,	// (0x0002fb41) cursor_digital_pane_g1

0x2d58,	// (0x00027c40) cursor_text_digital_t1

0x2d66,	// (0x00027c4e) link_highlight_primary_pane_g1

0x3c4a,	// (0x00028b32) link_highlight_primary_pane_t1

0x2d66,	// (0x00027c4e) link_highlight_primary_small_pane_g1

0x2d6e,	// (0x00027c56) link_highlight_primary_small_pane_t1

0x2d7d,	// (0x00027c65) link_highlight_secondary_pane_g1

0x2d85,	// (0x00027c6d) link_highlight_secondary_pane_t1

0x3bbe,	// (0x00028aa6) link_highlight_title_pane_g1

0x3bc6,	// (0x00028aae) link_highlight_title_pane_t1

0x3ba7,	// (0x00028a8f) link_highlight_digital_pane_g1

0x3baf,	// (0x00028a97) link_highlight_digital_pane_t1

0x3a6f,	// (0x00028957) copy_highlight_primary_pane_g1

0x3a86,	// (0x0002896e) copy_highlight_primary_pane_t1

0x3a6f,	// (0x00028957) copy_highlight_primary_small_pane_g1

0x3a77,	// (0x0002895f) copy_highlight_primary_small_pane_t1

0x2d94,	// (0x00027c7c) copy_highlight_secondary_pane_g1

0x2d9c,	// (0x00027c84) copy_highlight_secondary_pane_t1

0x3a58,	// (0x00028940) copy_highlight_title_pane_g1

0x3a60,	// (0x00028948) copy_highlight_title_pane_t1

0x3a6f,	// (0x00028957) copy_highlight_digital_pane_g1

0x4d68,	// (0x00029c50) copy_highlight_digital_pane_t1

0x4cbc,	// (0x00029ba4) graphic_text_primary_pane_g1

0x4d4c,	// (0x00029c34) graphic_text_primary_pane_t1

0x4d5a,	// (0x00029c42) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x0003488c) graphic_text_primary_pane_t

0x4d28,	// (0x00029c10) graphic_text_primary_small_pane_g1

0x4d30,	// (0x00029c18) graphic_text_primary_small_pane_t1

0x4d3e,	// (0x00029c26) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00034887) graphic_text_primary_small_pane_t

0x4d04,	// (0x00029bec) graphic_text_secondary_pane_g1

0x4d0c,	// (0x00029bf4) graphic_text_secondary_pane_t1

0x4d1a,	// (0x00029c02) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00034882) graphic_text_secondary_pane_t

0x4ce0,	// (0x00029bc8) graphic_text_title_pane_g1

0x4ce8,	// (0x00029bd0) graphic_text_title_pane_t1

0x4cf6,	// (0x00029bde) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x0003487d) graphic_text_title_pane_t

0x4cbc,	// (0x00029ba4) graphic_text_digital_pane_g1

0x4cc4,	// (0x00029bac) graphic_text_digital_pane_t1

0x4cd2,	// (0x00029bba) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00034878) graphic_text_digital_pane_t

0xccf9,	// (0x00031be1) navi_icon_pane_srt_ParamLimits

0xccf9,	// (0x00031be1) navi_icon_pane_srt

0xcc9d,	// (0x00031b85) navi_midp_pane_srt

0xcc9d,	// (0x00031b85) navi_navi_pane_srt

0xccf9,	// (0x00031be1) navi_text_pane_srt_ParamLimits

0xccf9,	// (0x00031be1) navi_text_pane_srt

0x4c87,	// (0x00029b6f) navi_navi_icon_text_pane_srt

0x4c8f,	// (0x00029b77) navi_navi_pane_srt_g1_ParamLimits

0x4c8f,	// (0x00029b77) navi_navi_pane_srt_g1

0x4ca1,	// (0x00029b89) navi_navi_pane_srt_g2_ParamLimits

0x4ca1,	// (0x00029b89) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00034873) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00034873) navi_navi_pane_srt_g

0x4cb3,	// (0x00029b9b) navi_navi_tabs_pane_srt

0x4c87,	// (0x00029b6f) navi_navi_text_pane_srt

0x4c87,	// (0x00029b6f) navi_navi_volume_pane_srt

0x4c78,	// (0x00029b60) navi_navi_text_pane_srt_t1

0x1aa3,	// (0x0002698b) navi_navi_volume_pane_srt_g1

0x1aab,	// (0x00026993) volume_small_pane_srt_ParamLimits

0x1aab,	// (0x00026993) volume_small_pane_srt

0x0e72,	// (0x00025d5a) volume_small_pane_srt_g1_ParamLimits

0x0e72,	// (0x00025d5a) volume_small_pane_srt_g1

0x0e82,	// (0x00025d6a) volume_small_pane_srt_g2_ParamLimits

0x0e82,	// (0x00025d6a) volume_small_pane_srt_g2

0x0e93,	// (0x00025d7b) volume_small_pane_srt_g3_ParamLimits

0x0e93,	// (0x00025d7b) volume_small_pane_srt_g3

0x0ea4,	// (0x00025d8c) volume_small_pane_srt_g4_ParamLimits

0x0ea4,	// (0x00025d8c) volume_small_pane_srt_g4

0x0eb5,	// (0x00025d9d) volume_small_pane_srt_g5_ParamLimits

0x0eb5,	// (0x00025d9d) volume_small_pane_srt_g5

0x0ec6,	// (0x00025dae) volume_small_pane_srt_g6_ParamLimits

0x0ec6,	// (0x00025dae) volume_small_pane_srt_g6

0x0ed7,	// (0x00025dbf) volume_small_pane_srt_g7_ParamLimits

0x0ed7,	// (0x00025dbf) volume_small_pane_srt_g7

0x0ee8,	// (0x00025dd0) volume_small_pane_srt_g8_ParamLimits

0x0ee8,	// (0x00025dd0) volume_small_pane_srt_g8

0x0ef9,	// (0x00025de1) volume_small_pane_srt_g9_ParamLimits

0x0ef9,	// (0x00025de1) volume_small_pane_srt_g9

0x0f0a,	// (0x00025df2) volume_small_pane_srt_g10_ParamLimits

0x0f0a,	// (0x00025df2) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x00034620) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x00034620) volume_small_pane_srt_g

0xcfaf,	// (0x00031e97) query_popup_data_pane_cp2

0x4c5e,	// (0x00029b46) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4c5e,	// (0x00029b46) navi_navi_icon_text_pane_srt_t1

0x3cf7,	// (0x00028bdf) navi_tabs_2_long_pane_srt

0x3cf7,	// (0x00028bdf) navi_tabs_2_pane_srt

0x3cf7,	// (0x00028bdf) navi_tabs_3_long_pane_srt

0x3cf7,	// (0x00028bdf) navi_tabs_3_pane_srt

0x3cf7,	// (0x00028bdf) navi_tabs_4_pane_srt

0x1a83,	// (0x0002696b) tabs_2_active_pane_srt_ParamLimits

0x1a83,	// (0x0002696b) tabs_2_active_pane_srt

0x1a93,	// (0x0002697b) tabs_2_passive_pane_srt_ParamLimits

0x1a93,	// (0x0002697b) tabs_2_passive_pane_srt

0x34c5,	// (0x000283ad) bg_passive_tab_pane_cp1_srt_ParamLimits

0x34c5,	// (0x000283ad) bg_passive_tab_pane_cp1_srt

0x4c2a,	// (0x00029b12) bg_passive_tab_pane_g1_cp1_srt

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp1_srt

0x4c33,	// (0x00029b1b) bg_passive_tab_pane_g3_cp1_srt

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp1_srt_ParamLimits

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp1_srt

0x4c3c,	// (0x00029b24) tabs_2_active_pane_srt_g1

0xbfcd,	// (0x00030eb5) tabs_2_active_pane_srt_t1_ParamLimits

0xbfcd,	// (0x00030eb5) tabs_2_active_pane_srt_t1

0x4c2a,	// (0x00029b12) bg_active_tab_pane_g1_cp1_srt

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp1_srt

0x4c33,	// (0x00029b1b) bg_active_tab_pane_g3_cp1_srt

0x1a50,	// (0x00026938) tabs_3_active_pane_srt_ParamLimits

0x1a50,	// (0x00026938) tabs_3_active_pane_srt

0x1a61,	// (0x00026949) tabs_3_passive_pane_cp_srt_ParamLimits

0x1a61,	// (0x00026949) tabs_3_passive_pane_cp_srt

0x1a72,	// (0x0002695a) tabs_3_passive_pane_srt_ParamLimits

0x1a72,	// (0x0002695a) tabs_3_passive_pane_srt

0x34c5,	// (0x000283ad) bg_passive_tab_pane_cp2_srt_ParamLimits

0x34c5,	// (0x000283ad) bg_passive_tab_pane_cp2_srt

0x2dab,	// (0x00027c93) bg_passive_tab_pane_g1_cp2_srt

0x09f1,	// (0x000258d9) bg_passive_tab_pane_g2_cp2_srt

0x2db4,	// (0x00027c9c) bg_passive_tab_pane_g3_cp2_srt

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp2_srt_ParamLimits

0xcceb,	// (0x00031bd3) bg_active_tab_pane_cp2_srt

0x4c10,	// (0x00029af8) tabs_3_active_pane_srt_g1

0xbfb7,	// (0x00030e9f) tabs_3_active_pane_srt_t1_ParamLimits

0xbfb7,	// (0x00030e9f) tabs_3_active_pane_srt_t1

0x2dab,	// (0x00027c93) bg_active_tab_pane_g1_cp2_srt

0x09f1,	// (0x000258d9) bg_active_tab_pane_g2_cp2_srt

0x2db4,	// (0x00027c9c) bg_active_tab_pane_g3_cp2_srt

0x1a08,	// (0x000268f0) tabs_4_active_pane_srt_ParamLimits

0x1a08,	// (0x000268f0) tabs_4_active_pane_srt

0x1a1a,	// (0x00026902) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1a1a,	// (0x00026902) tabs_4_passive_pane_cp2_srt

0x105c,	// (0x00025f44) aid_size_cell_toolbar

0x482e,	// (0x00029716) main_idle_act_pane_ParamLimits

0x1225,	// (0x0002610d) popup_large_graphic_colour_window_ParamLimits

0xb467,	// (0x0003034f) popup_toolbar_window_ParamLimits

0xb467,	// (0x0003034f) popup_toolbar_window

0xeda2,	// (0x00033c8a) list_single_graphic_2heading_pane_ParamLimits

0xeda2,	// (0x00033c8a) list_single_graphic_2heading_pane

0xd64f,	// (0x00032537) aid_size_cell_apps_grid_lsc_pane

0xd661,	// (0x00032549) aid_size_cell_apps_grid_prt_pane

0x2f1b,	// (0x00027e03) bg_wml_button_pane_cp1_ParamLimits

0x2f1b,	// (0x00027e03) bg_wml_button_pane_cp1

0xb9e3,	// (0x000308cb) form_midp_field_text_pane_t1_ParamLimits

0x34c5,	// (0x000283ad) input_focus_pane_cp050_ParamLimits

0x36fe,	// (0x000285e6) list_midp_form_text_pane_ParamLimits

0x36b0,	// (0x00028598) input_focus_pane_cp051_ParamLimits

0x36c4,	// (0x000285ac) list_midp_choice_pane_ParamLimits

0xb97c,	// (0x00030864) list_single_2graphic_pane_cp3_ParamLimits

0xb97c,	// (0x00030864) list_single_2graphic_pane_cp3

0xb98f,	// (0x00030877) list_single_midp_graphic_pane_ParamLimits

0xb98f,	// (0x00030877) list_single_midp_graphic_pane

0xec4b,	// (0x00033b33) list_single_graphic_2heading_pane_g1_ParamLimits

0xec4b,	// (0x00033b33) list_single_graphic_2heading_pane_g1

0xea9d,	// (0x00033985) list_single_graphic_2heading_pane_g4_ParamLimits

0xea9d,	// (0x00033985) list_single_graphic_2heading_pane_g4

0xeaa9,	// (0x00033991) list_single_graphic_2heading_pane_g5_ParamLimits

0xeaa9,	// (0x00033991) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x00034673) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x00034673) list_single_graphic_2heading_pane_g

0xec57,	// (0x00033b3f) list_single_graphic_2heading_pane_t1_ParamLimits

0xec57,	// (0x00033b3f) list_single_graphic_2heading_pane_t1

0xec6b,	// (0x00033b53) list_single_graphic_2heading_pane_t2_ParamLimits

0xec6b,	// (0x00033b53) list_single_graphic_2heading_pane_t2

0xec87,	// (0x00033b6f) list_single_graphic_2heading_pane_t3_ParamLimits

0xec87,	// (0x00033b6f) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003467a) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003467a) list_single_graphic_2heading_pane_t

0x338f,	// (0x00028277) bg_popup_sub_pane_cp2

0x33b9,	// (0x000282a1) grid_toobar_pane

0x168b,	// (0x00026573) cell_toolbar_pane_ParamLimits

0x168b,	// (0x00026573) cell_toolbar_pane

0x33f5,	// (0x000282dd) cell_toolbar_pane_g1_ParamLimits

0x33f5,	// (0x000282dd) cell_toolbar_pane_g1

0x3409,	// (0x000282f1) cell_toolbar_pane_g2_ParamLimits

0x3409,	// (0x000282f1) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00034688) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00034688) cell_toolbar_pane_g

0x342b,	// (0x00028313) grid_highlight_pane_cp2_ParamLimits

0x342b,	// (0x00028313) grid_highlight_pane_cp2

0x3445,	// (0x0002832d) toolbar_button_pane

0x3451,	// (0x00028339) toolbar_button_pane_g1

0x3459,	// (0x00028341) toolbar_button_pane_g2

0x3461,	// (0x00028349) toolbar_button_pane_g3

0x3469,	// (0x00028351) toolbar_button_pane_g4

0x3471,	// (0x00028359) toolbar_button_pane_g5

0x3479,	// (0x00028361) toolbar_button_pane_g6

0x3481,	// (0x00028369) toolbar_button_pane_g7

0x3489,	// (0x00028371) toolbar_button_pane_g8

0x3491,	// (0x00028379) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003468d) toolbar_button_pane_g

0x16c3,	// (0x000265ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x16c3,	// (0x000265ab) list_single_2graphic_pane_g1_cp3

0xb8de,	// (0x000307c6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb8de,	// (0x000307c6) list_single_2graphic_pane_g2_cp3

0x0d14,	// (0x00025bfc) list_single_2graphic_pane_g3_cp3

0x16e0,	// (0x000265c8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x16e0,	// (0x000265c8) list_single_2graphic_pane_g4_cp3

0x16ec,	// (0x000265d4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x16ec,	// (0x000265d4) list_single_2graphic_pane_t1_cp3

0x0d08,	// (0x00025bf0) list_single_midp_graphic_pane_g2_ParamLimits

0x0d08,	// (0x00025bf0) list_single_midp_graphic_pane_g2

0x1064,	// (0x00025f4c) aid_zoom_text_primary

0xec3b,	// (0x00033b23) aid_zoom_text_secondary

0x2e65,	// (0x00027d4d) status_small_pane_g7_ParamLimits

0x2e65,	// (0x00027d4d) status_small_pane_g7

0x2e88,	// (0x00027d70) status_small_pane_t1_ParamLimits

0xa506,	// (0x0002f3ee) title_pane_g2

0x0003,

0xf529,	// (0x00034411) title_pane_g

0xa7a6,	// (0x0002f68e) aid_size_cell_colour_1_pane_ParamLimits

0xa7a6,	// (0x0002f68e) aid_size_cell_colour_1_pane

0xa7ba,	// (0x0002f6a2) aid_size_cell_colour_2_pane_ParamLimits

0xa7ba,	// (0x0002f6a2) aid_size_cell_colour_2_pane

0xa7ce,	// (0x0002f6b6) aid_size_cell_colour_3_pane_ParamLimits

0xa7ce,	// (0x0002f6b6) aid_size_cell_colour_3_pane

0xa7e2,	// (0x0002f6ca) aid_size_cell_colour_4_pane_ParamLimits

0xa7e2,	// (0x0002f6ca) aid_size_cell_colour_4_pane

0x0253,	// (0x0002513b) title_pane_stacon_g1_ParamLimits

0x0253,	// (0x0002513b) title_pane_stacon_g1

0x3add,	// (0x000289c5) popup_note_wait_window_g3_ParamLimits

0x3add,	// (0x000289c5) popup_note_wait_window_g3

0x3b54,	// (0x00028a3c) popup_note_wait_window_t5_ParamLimits

0x3b54,	// (0x00028a3c) popup_note_wait_window_t5

0xcc9d,	// (0x00031b85) main_feb_china_hwr_fs_writing_pane

0xadf8,	// (0x0002fce0) popup_feb_china_hwr_fs_window_ParamLimits

0xadf8,	// (0x0002fce0) popup_feb_china_hwr_fs_window

0xb8ef,	// (0x000307d7) aid_size_cell_hwr_fs_ParamLimits

0xb8ef,	// (0x000307d7) aid_size_cell_hwr_fs

0x34c5,	// (0x000283ad) bg_popup_sub_pane_cp3_ParamLimits

0x34c5,	// (0x000283ad) bg_popup_sub_pane_cp3

0xb904,	// (0x000307ec) grid_hwr_fs_pane_ParamLimits

0xb904,	// (0x000307ec) grid_hwr_fs_pane

0x174a,	// (0x00026632) linegrid_hwr_fs_pane_ParamLimits

0x174a,	// (0x00026632) linegrid_hwr_fs_pane

0xb91c,	// (0x00030804) cell_hwr_fs_pane_ParamLimits

0xb91c,	// (0x00030804) cell_hwr_fs_pane

0x34d1,	// (0x000283b9) linegrid_hwr_fs_pane_g1_ParamLimits

0x34d1,	// (0x000283b9) linegrid_hwr_fs_pane_g1

0xb942,	// (0x0003082a) linegrid_hwr_fs_pane_g2_ParamLimits

0xb942,	// (0x0003082a) linegrid_hwr_fs_pane_g2

0x34ef,	// (0x000283d7) linegrid_hwr_fs_pane_g3_ParamLimits

0x34ef,	// (0x000283d7) linegrid_hwr_fs_pane_g3

0x177e,	// (0x00026666) linegrid_hwr_fs_pane_g4_ParamLimits

0x177e,	// (0x00026666) linegrid_hwr_fs_pane_g4

0x179c,	// (0x00026684) linegrid_hwr_fs_pane_g5_ParamLimits

0x179c,	// (0x00026684) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x000346b3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x000346b3) linegrid_hwr_fs_pane_g

0x34fb,	// (0x000283e3) cell_hwr_fs_pane_g1_ParamLimits

0x34fb,	// (0x000283e3) cell_hwr_fs_pane_g1

0x32ca,	// (0x000281b2) cell_hwr_fs_pane_g2_ParamLimits

0x32ca,	// (0x000281b2) cell_hwr_fs_pane_g2

0xb954,	// (0x0003083c) cell_hwr_fs_pane_g3_ParamLimits

0xb954,	// (0x0003083c) cell_hwr_fs_pane_g3

0xb961,	// (0x00030849) cell_hwr_fs_pane_g4_ParamLimits

0xb961,	// (0x00030849) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000346be) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000346be) cell_hwr_fs_pane_g

0xb96e,	// (0x00030856) cell_hwr_fs_pane_t1

0xcc9d,	// (0x00031b85) grid_highlight_pane_cp6

0xcc9d,	// (0x00031b85) main_idle_act2_pane

0xd45e,	// (0x00032346) aid_inside_area_popup_secondary

0xbb9c,	// (0x00030a84) aid_inside_area_window_primary_ParamLimits

0xbb9c,	// (0x00030a84) aid_inside_area_window_primary

0x4d77,	// (0x00029c5f) ai2_news_ticker_pane

0x4d7f,	// (0x00029c67) aid_size_cell_ai1_link_ParamLimits

0x4d7f,	// (0x00029c67) aid_size_cell_ai1_link

0x4d99,	// (0x00029c81) popup_ai2_data_window_ParamLimits

0x4d99,	// (0x00029c81) popup_ai2_data_window

0x4db7,	// (0x00029c9f) popup_ai2_link_window_ParamLimits

0x4db7,	// (0x00029c9f) popup_ai2_link_window

0x34c5,	// (0x000283ad) bg_popup_sub_pane_cp4_ParamLimits

0x34c5,	// (0x000283ad) bg_popup_sub_pane_cp4

0x4dcd,	// (0x00029cb5) grid_ai2_link_pane_ParamLimits

0x4dcd,	// (0x00029cb5) grid_ai2_link_pane

0x4de4,	// (0x00029ccc) popup_ai2_link_window_g1_ParamLimits

0x4de4,	// (0x00029ccc) popup_ai2_link_window_g1

0x4df0,	// (0x00029cd8) popup_ai2_link_window_g2_ParamLimits

0x4df0,	// (0x00029cd8) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00034891) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00034891) popup_ai2_link_window_g

0x4e01,	// (0x00029ce9) ai2_mp_button_pane

0x4e09,	// (0x00029cf1) ai2_mp_volume_pane

0x36b0,	// (0x00028598) bg_popup_sub_pane_cp5_ParamLimits

0x36b0,	// (0x00028598) bg_popup_sub_pane_cp5

0x4e11,	// (0x00029cf9) heading_ai2_gene_pane_ParamLimits

0x4e11,	// (0x00029cf9) heading_ai2_gene_pane

0x4e1d,	// (0x00029d05) list_ai2_gene_pane_ParamLimits

0x4e1d,	// (0x00029d05) list_ai2_gene_pane

0x4e65,	// (0x00029d4d) cell_ai2_link_pane_ParamLimits

0x4e65,	// (0x00029d4d) cell_ai2_link_pane

0x4e7b,	// (0x00029d63) cell_ai2_link_pane_g1

0xcc9d,	// (0x00031b85) grid_highlight_pane_cp7

0x1ac0,	// (0x000269a8) ai2_mp_volume_pane_g1

0x4f4e,	// (0x00029e36) ai2_mp_volume_pane_g2

0x4ec3,	// (0x00029dab) list_ai2_gene_pane_t1

0x4f56,	// (0x00029e3e) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000348aa) ai2_mp_volume_pane_g

0x1ac8,	// (0x000269b0) volume_small_pane_cp3

0x4f5e,	// (0x00029e46) aid_size_cell_ai2_button

0x4f66,	// (0x00029e4e) grid_ai2_button_pane

0x4f6f,	// (0x00029e57) cell_ai2_button_pane_ParamLimits

0x4f6f,	// (0x00029e57) cell_ai2_button_pane

0xcc93,	// (0x00031b7b) cell_ai2_button_pane_g1

0xcc9d,	// (0x00031b85) grid_highlight_pane_cp8

0x4f0e,	// (0x00029df6) ai2_gene_pane_t1_ParamLimits

0x4f0e,	// (0x00029df6) ai2_gene_pane_t1

0xad90,	// (0x0002fc78) aid_height_parent_landscape

0xbd54,	// (0x00030c3c) aid_height_set_list

0x482e,	// (0x00029716) aid_size_parent

0x4b96,	// (0x00029a7e) aid_size_cell_graphic_pane_ParamLimits

0x4e2d,	// (0x00029d15) popup_ai2_data_window_g1_ParamLimits

0x4e2d,	// (0x00029d15) popup_ai2_data_window_g1

0x4e39,	// (0x00029d21) ai2_news_ticker_pane_g1

0x4e41,	// (0x00029d29) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00034896) ai2_news_ticker_pane_g

0x4e49,	// (0x00029d31) ai2_news_ticker_pane_t1

0x4e57,	// (0x00029d3f) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0003489b) ai2_news_ticker_pane_t

0x4e84,	// (0x00029d6c) heading_ai2_gene_pane_g1

0x4e8c,	// (0x00029d74) heading_ai2_gene_pane_t1_ParamLimits

0x4e8c,	// (0x00029d74) heading_ai2_gene_pane_t1

0x4ea1,	// (0x00029d89) list_highlight_pane_cp6

0x4ea9,	// (0x00029d91) ai2_gene_pane_ParamLimits

0x4ea9,	// (0x00029d91) ai2_gene_pane

0x4ed1,	// (0x00029db9) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000348a0) list_ai2_gene_pane_t

0x4edf,	// (0x00029dc7) list_highlight_pane_cp8_ParamLimits

0x4edf,	// (0x00029dc7) list_highlight_pane_cp8

0x4ef0,	// (0x00029dd8) ai2_gene_pane_g1_ParamLimits

0x4ef0,	// (0x00029dd8) ai2_gene_pane_g1

0x4f02,	// (0x00029dea) ai2_gene_pane_g2_ParamLimits

0x4f02,	// (0x00029dea) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000348a5) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000348a5) ai2_gene_pane_g

0xd2d1,	// (0x000321b9) scroll_pane_cp12

0xad4f,	// (0x0002fc37) control_pane_t3_ParamLimits

0xad4f,	// (0x0002fc37) control_pane_t3

0x2e79,	// (0x00027d61) status_small_pane_g8_ParamLimits

0x2e79,	// (0x00027d61) status_small_pane_g8

0xae9a,	// (0x0002fd82) popup_find_window_ParamLimits

0xb151,	// (0x00030039) popup_note_image_window_ParamLimits

0xeadd,	// (0x000339c5) list_double2_graphic_pane_vc_g1_ParamLimits

0xeadd,	// (0x000339c5) list_double2_graphic_pane_vc_g1

0xec9f,	// (0x00033b87) list_double2_graphic_pane_vc_g2_ParamLimits

0xec9f,	// (0x00033b87) list_double2_graphic_pane_vc_g2

0xecab,	// (0x00033b93) list_double2_graphic_pane_vc_g3_ParamLimits

0xecab,	// (0x00033b93) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x00034681) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x00034681) list_double2_graphic_pane_vc_g

0xecb7,	// (0x00033b9f) list_double2_graphic_pane_vc_t1_ParamLimits

0xecb7,	// (0x00033b9f) list_double2_graphic_pane_vc_t1

0xea9d,	// (0x00033985) list_single_heading_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033985) list_single_heading_pane_vc_g1

0xeaa9,	// (0x00033991) list_single_heading_pane_vc_g2_ParamLimits

0xeaa9,	// (0x00033991) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003448b) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003448b) list_single_heading_pane_vc_g

0xeccd,	// (0x00033bb5) list_single_heading_pane_vc_t1_ParamLimits

0xeccd,	// (0x00033bb5) list_single_heading_pane_vc_t1

0xece3,	// (0x00033bcb) list_single_heading_pane_vc_t2_ParamLimits

0xece3,	// (0x00033bcb) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x000346a2) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x000346a2) list_single_heading_pane_vc_t

0xecf5,	// (0x00033bdd) list_setting_number_pane_vc_g1_ParamLimits

0xecf5,	// (0x00033bdd) list_setting_number_pane_vc_g1

0xed01,	// (0x00033be9) list_setting_number_pane_vc_g2_ParamLimits

0xed01,	// (0x00033be9) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000346a7) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000346a7) list_setting_number_pane_vc_g

0xed0d,	// (0x00033bf5) list_setting_number_pane_vc_t1_ParamLimits

0xed0d,	// (0x00033bf5) list_setting_number_pane_vc_t1

0xed21,	// (0x00033c09) list_setting_number_pane_vc_t2_ParamLimits

0xed21,	// (0x00033c09) list_setting_number_pane_vc_t2

0xed3d,	// (0x00033c25) list_setting_number_pane_vc_t3_ParamLimits

0xed3d,	// (0x00033c25) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x000346ac) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x000346ac) list_setting_number_pane_vc_t

0xed6b,	// (0x00033c53) set_value_pane_vc_ParamLimits

0xed6b,	// (0x00033c53) set_value_pane_vc

0xeda2,	// (0x00033c8a) list_double2_graphic_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double2_graphic_pane_vc

0x4a17,	// (0x000298ff) list_double2_large_graphic_pane_vc_ParamLimits

0x4a17,	// (0x000298ff) list_double2_large_graphic_pane_vc

0xeda2,	// (0x00033c8a) list_double2_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double2_pane_vc

0xeda2,	// (0x00033c8a) list_double_graphic_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double_graphic_heading_pane_vc

0xeda2,	// (0x00033c8a) list_double_graphic_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double_graphic_pane_vc

0xeda2,	// (0x00033c8a) list_double_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double_heading_pane_vc

0x4a2b,	// (0x00029913) list_double_large_graphic_pane_vc_ParamLimits

0x4a2b,	// (0x00029913) list_double_large_graphic_pane_vc

0xeda2,	// (0x00033c8a) list_double_number_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double_number_pane_vc

0xeda2,	// (0x00033c8a) list_double_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double_pane_vc

0xeda2,	// (0x00033c8a) list_double_time_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_double_time_pane_vc

0xeda2,	// (0x00033c8a) list_setting_number_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_setting_number_pane_vc

0xeda2,	// (0x00033c8a) list_setting_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_setting_pane_vc

0xeda2,	// (0x00033c8a) list_single_graphic_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_single_graphic_heading_pane_vc

0xeda2,	// (0x00033c8a) list_single_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_single_heading_pane_vc

0xeda2,	// (0x00033c8a) list_single_number_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c8a) list_single_number_heading_pane_vc

0xeadd,	// (0x000339c5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeadd,	// (0x000339c5) list_double_graphic_heading_pane_vc_g1

0xea9d,	// (0x00033985) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea9d,	// (0x00033985) list_double_graphic_heading_pane_vc_g2

0xeaa9,	// (0x00033991) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeaa9,	// (0x00033991) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x000348b1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000348b1) list_double_graphic_heading_pane_vc_g

0xedb9,	// (0x00033ca1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedb9,	// (0x00033ca1) list_double_graphic_heading_pane_vc_t1

0xedcf,	// (0x00033cb7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xedcf,	// (0x00033cb7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000348b8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000348b8) list_double_graphic_heading_pane_vc_t

0xecf5,	// (0x00033bdd) list_setting_pane_vc_g1_ParamLimits

0xecf5,	// (0x00033bdd) list_setting_pane_vc_g1

0xed01,	// (0x00033be9) list_setting_pane_vc_g2_ParamLimits

0xed01,	// (0x00033be9) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x000346a7) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x000346a7) list_setting_pane_vc_g

0xeded,	// (0x00033cd5) list_setting_pane_vc_t1_ParamLimits

0xeded,	// (0x00033cd5) list_setting_pane_vc_t1

0xee09,	// (0x00033cf1) list_setting_pane_vc_t2_ParamLimits

0xee09,	// (0x00033cf1) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x000348fb) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x000348fb) list_setting_pane_vc_t

0xed6b,	// (0x00033c53) set_value_pane_cp_vc_ParamLimits

0xed6b,	// (0x00033c53) set_value_pane_cp_vc

0xea9d,	// (0x00033985) list_single_number_heading_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033985) list_single_number_heading_pane_vc_g1

0xeaa9,	// (0x00033991) list_single_number_heading_pane_vc_g2_ParamLimits

0xeaa9,	// (0x00033991) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003448b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003448b) list_single_number_heading_pane_vc_g

0xeab5,	// (0x0003399d) list_single_number_heading_pane_vc_t1_ParamLimits

0xeab5,	// (0x0003399d) list_single_number_heading_pane_vc_t1

0xee25,	// (0x00033d0d) list_single_number_heading_pane_vc_t2_ParamLimits

0xee25,	// (0x00033d0d) list_single_number_heading_pane_vc_t2

0xeacb,	// (0x000339b3) list_single_number_heading_pane_vc_t3_ParamLimits

0xeacb,	// (0x000339b3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00034900) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00034900) list_single_number_heading_pane_vc_t

0xeadd,	// (0x000339c5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeadd,	// (0x000339c5) list_single_graphic_heading_pane_vc_g1

0xea9d,	// (0x00033985) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea9d,	// (0x00033985) list_single_graphic_heading_pane_vc_g4

0xeaa9,	// (0x00033991) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeaa9,	// (0x00033991) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x000348b1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000348b1) list_single_graphic_heading_pane_vc_g

0xeab5,	// (0x0003399d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeab5,	// (0x0003399d) list_single_graphic_heading_pane_vc_t1

0xee3b,	// (0x00033d23) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee3b,	// (0x00033d23) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x00034907) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x00034907) list_single_graphic_heading_pane_vc_t

0xea9d,	// (0x00033985) list_double2_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033985) list_double2_pane_vc_g1

0xeaa9,	// (0x00033991) list_double2_pane_vc_g2_ParamLimits

0xeaa9,	// (0x00033991) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003448b) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003448b) list_double2_pane_vc_g

0xed8c,	// (0x00033c74) list_double2_pane_vc_t1_ParamLimits

0xed8c,	// (0x00033c74) list_double2_pane_vc_t1

0xeae9,	// (0x000339d1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xeae9,	// (0x000339d1) list_double2_large_graphic_pane_vc_g1

0xeaf5,	// (0x000339dd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeaf5,	// (0x000339dd) list_double2_large_graphic_pane_vc_g2

0xeb01,	// (0x000339e9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeb01,	// (0x000339e9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000344a8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000344a8) list_double2_large_graphic_pane_vc_g

0xeb0d,	// (0x000339f5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeb0d,	// (0x000339f5) list_double2_large_graphic_pane_vc_t1

0xee4d,	// (0x00033d35) list_double_time_pane_vc_g1_ParamLimits

0xee4d,	// (0x00033d35) list_double_time_pane_vc_g1

0xee59,	// (0x00033d41) list_double_time_pane_vc_g2_ParamLimits

0xee59,	// (0x00033d41) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x0003490c) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x0003490c) list_double_time_pane_vc_g

0xee65,	// (0x00033d4d) list_double_time_pane_vc_t1_ParamLimits

0xee65,	// (0x00033d4d) list_double_time_pane_vc_t1

0xee8f,	// (0x00033d77) list_double_time_pane_vc_t2_ParamLimits

0xee8f,	// (0x00033d77) list_double_time_pane_vc_t2

0xeed8,	// (0x00033dc0) list_double_time_pane_vc_t3_ParamLimits

0xeed8,	// (0x00033dc0) list_double_time_pane_vc_t3

0xeeea,	// (0x00033dd2) list_double_time_pane_vc_t4_ParamLimits

0xeeea,	// (0x00033dd2) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x00034911) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x00034911) list_double_time_pane_vc_t

0xea9d,	// (0x00033985) list_double_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033985) list_double_pane_vc_g1

0xeaa9,	// (0x00033991) list_double_pane_vc_g2_ParamLimits

0xeaa9,	// (0x00033991) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003448b) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003448b) list_double_pane_vc_g

0xeefe,	// (0x00033de6) list_double_pane_vc_t1_ParamLimits

0xeefe,	// (0x00033de6) list_double_pane_vc_t1

0xef12,	// (0x00033dfa) list_double_pane_vc_t2_ParamLimits

0xef12,	// (0x00033dfa) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x0003491a) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x0003491a) list_double_pane_vc_t

0xea9d,	// (0x00033985) list_double_number_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033985) list_double_number_pane_vc_g1

0xeaa9,	// (0x00033991) list_double_number_pane_vc_g2_ParamLimits

0xeaa9,	// (0x00033991) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003448b) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003448b) list_double_number_pane_vc_g

0xef28,	// (0x00033e10) list_double_number_pane_vc_t1_ParamLimits

0xef28,	// (0x00033e10) list_double_number_pane_vc_t1

0xef3a,	// (0x00033e22) list_double_number_pane_vc_t2_ParamLimits

0xef3a,	// (0x00033e22) list_double_number_pane_vc_t2

0xef12,	// (0x00033dfa) list_double_number_pane_vc_t3_ParamLimits

0xef12,	// (0x00033dfa) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x0003491f) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x0003491f) list_double_number_pane_vc_t

0xef4e,	// (0x00033e36) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef4e,	// (0x00033e36) list_double_large_graphic_pane_vc_g1

0xef70,	// (0x00033e58) list_double_large_graphic_pane_vc_g2_ParamLimits

0xef70,	// (0x00033e58) list_double_large_graphic_pane_vc_g2

0xef84,	// (0x00033e6c) list_double_large_graphic_pane_vc_g3_ParamLimits

0xef84,	// (0x00033e6c) list_double_large_graphic_pane_vc_g3

0xef93,	// (0x00033e7b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef93,	// (0x00033e7b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00034926) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00034926) list_double_large_graphic_pane_vc_g

0xef9f,	// (0x00033e87) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef9f,	// (0x00033e87) list_double_large_graphic_pane_vc_t1

0xefbb,	// (0x00033ea3) list_double_large_graphic_pane_vc_t2_ParamLimits

0xefbb,	// (0x00033ea3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0003492f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0003492f) list_double_large_graphic_pane_vc_t

0xea9d,	// (0x00033985) list_double_heading_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033985) list_double_heading_pane_vc_g1

0xeaa9,	// (0x00033991) list_double_heading_pane_vc_g2_ParamLimits

0xeaa9,	// (0x00033991) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0003448b) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0003448b) list_double_heading_pane_vc_g

0xefdb,	// (0x00033ec3) list_double_heading_pane_vc_t1_ParamLimits

0xefdb,	// (0x00033ec3) list_double_heading_pane_vc_t1

0xefed,	// (0x00033ed5) list_double_heading_pane_vc_t2_ParamLimits

0xefed,	// (0x00033ed5) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00034934) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00034934) list_double_heading_pane_vc_t

0xf031,	// (0x00033f19) list_double_graphic_pane_vc_g1_ParamLimits

0xf031,	// (0x00033f19) list_double_graphic_pane_vc_g1

0xf044,	// (0x00033f2c) list_double_graphic_pane_vc_g2_ParamLimits

0xf044,	// (0x00033f2c) list_double_graphic_pane_vc_g2

0xea9d,	// (0x00033985) list_double_graphic_pane_vc_g3_ParamLimits

0xea9d,	// (0x00033985) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00034939) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00034939) list_double_graphic_pane_vc_g

0xf061,	// (0x00033f49) list_double_graphic_pane_vc_t1_ParamLimits

0xf061,	// (0x00033f49) list_double_graphic_pane_vc_t1

0xf08b,	// (0x00033f73) list_double_graphic_pane_vc_t2_ParamLimits

0xf08b,	// (0x00033f73) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00034942) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00034942) list_double_graphic_pane_vc_t

0xf029,	// (0x00033f11) aid_size_cell_fastswap

0xa2df,	// (0x0002f1c7) aid_size_cell_touch_ParamLimits

0xa2df,	// (0x0002f1c7) aid_size_cell_touch

0xf468,	// (0x00034350) popup_fast_swap_wide_window_ParamLimits

0xf468,	// (0x00034350) popup_fast_swap_wide_window

0xa49d,	// (0x0002f385) touch_pane_ParamLimits

0xa49d,	// (0x0002f385) touch_pane

0xd327,	// (0x0003220f) button_value_adjust_pane_cp2

0xeb46,	// (0x00033a2e) button_value_adjust_pane_cp4

0xeb4e,	// (0x00033a36) form_field_data_pane_cp2

0x9e3e,	// (0x0002ed26) form_field_data_wide_pane_cp2

0x0492,	// (0x0002537a) bg_scroll_pane_ParamLimits

0x04b1,	// (0x00025399) scroll_handle_pane_ParamLimits

0x04c5,	// (0x000253ad) scroll_sc2_down_pane_ParamLimits

0x04c5,	// (0x000253ad) scroll_sc2_down_pane

0x04ec,	// (0x000253d4) scroll_sc2_up_pane_ParamLimits

0x04ec,	// (0x000253d4) scroll_sc2_up_pane

0xc10f,	// (0x00030ff7) grid_wheel_folder_pane_g1_ParamLimits

0xc10f,	// (0x00030ff7) grid_wheel_folder_pane_g1

0x0b38,	// (0x00025a20) clock_nsta_pane_cp2_ParamLimits

0x0b38,	// (0x00025a20) clock_nsta_pane_cp2

0xaba3,	// (0x0002fa8b) listscroll_midp_pane_ParamLimits

0xabaf,	// (0x0002fa97) midp_canvas_pane

0x2ef3,	// (0x00027ddb) nsta_clock_indic_pane

0x2f27,	// (0x00027e0f) listscroll_form_pane_vc

0x2f2f,	// (0x00027e17) listscroll_set_pane_vc_ParamLimits

0x2f2f,	// (0x00027e17) listscroll_set_pane_vc

0xb5cd,	// (0x000304b5) clock_nsta_pane

0xb5f7,	// (0x000304df) indicator_nsta_pane

0x338f,	// (0x00028277) bg_popup_sub_pane_cp2_ParamLimits

0x33a3,	// (0x0002828b) find_pane_cp2_ParamLimits

0x33a3,	// (0x0002828b) find_pane_cp2

0x33b9,	// (0x000282a1) grid_toobar_pane_ParamLimits

0x3499,	// (0x00028381) list_form_gen_pane_vc_ParamLimits

0x3499,	// (0x00028381) list_form_gen_pane_vc

0x34af,	// (0x00028397) scroll_pane_cp8_vc_ParamLimits

0x34af,	// (0x00028397) scroll_pane_cp8_vc

0x352b,	// (0x00028413) data_form_wide_pane_vc_ParamLimits

0x352b,	// (0x00028413) data_form_wide_pane_vc

0x3537,	// (0x0002841f) form_field_data_wide_pane_vc_g1

0x353f,	// (0x00028427) form_field_data_wide_pane_vc_t1_ParamLimits

0x353f,	// (0x00028427) form_field_data_wide_pane_vc_t1

0xd33b,	// (0x00032223) input_focus_pane_cp6_vc_ParamLimits

0xd33b,	// (0x00032223) input_focus_pane_cp6_vc

0x385b,	// (0x00028743) list_midp_pane_ParamLimits

0x4c04,	// (0x00029aec) scroll_pane_cp16_ParamLimits

0x4c04,	// (0x00029aec) scroll_pane_cp16

0x38b1,	// (0x00028799) button_value_adjust_pane_ParamLimits

0x38b1,	// (0x00028799) button_value_adjust_pane

0xbd65,	// (0x00030c4d) button_value_adjust_pane_cp6_ParamLimits

0xbd65,	// (0x00030c4d) button_value_adjust_pane_cp6

0xbea1,	// (0x00030d89) settings_code_pane_cp_ParamLimits

0xbea1,	// (0x00030d89) settings_code_pane_cp

0xcc93,	// (0x00031b7b) cell_touch_pane_g1

0xcc93,	// (0x00031b7b) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x000345c6) cell_touch_pane_g

0xbfe3,	// (0x00030ecb) cell_touch_pane_cp_ParamLimits

0xbfe3,	// (0x00030ecb) cell_touch_pane_cp

0xbfff,	// (0x00030ee7) cell_touch_pane_ParamLimits

0xbfff,	// (0x00030ee7) cell_touch_pane

0xcc93,	// (0x00031b7b) scroll_sc2_down_pane_g1

0xcc93,	// (0x00031b7b) scroll_sc2_up_pane_g1

0xcc9d,	// (0x00031b85) bg_set_opt_pane_cp4_vc

0x4fa2,	// (0x00029e8a) list_set_graphic_pane_vc_g1_ParamLimits

0x4fa2,	// (0x00029e8a) list_set_graphic_pane_vc_g1

0x4fae,	// (0x00029e96) list_set_graphic_pane_vc_g2_ParamLimits

0x4fae,	// (0x00029e96) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000348bd) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000348bd) list_set_graphic_pane_vc_g

0x4fba,	// (0x00029ea2) text_primary_small_cp13_vc_ParamLimits

0x4fba,	// (0x00029ea2) text_primary_small_cp13_vc

0x4fd2,	// (0x00029eba) list_set_graphic_pane_vc_ParamLimits

0x4fd2,	// (0x00029eba) list_set_graphic_pane_vc

0xcc9d,	// (0x00031b85) input_focus_pane_cp2_vc

0xcc93,	// (0x00031b7b) setting_code_pane_vc_g1

0xcd10,	// (0x00031bf8) setting_code_pane_vc_t1

0x4fe5,	// (0x00029ecd) set_text_pane_vc_t1_ParamLimits

0x4fe5,	// (0x00029ecd) set_text_pane_vc_t1

0xcc9d,	// (0x00031b85) input_focus_pane_cp1_vc

0x5006,	// (0x00029eee) list_set_text_pane_vc

0xcc93,	// (0x00031b7b) setting_text_pane_vc_g1

0xcc9d,	// (0x00031b85) bg_set_opt_pane_cp2_vc

0xcd07,	// (0x00031bef) setting_slider_graphic_pane_vc_g1

0x5010,	// (0x00029ef8) setting_slider_graphic_pane_vc_t1

0x5022,	// (0x00029f0a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000348c2) setting_slider_graphic_pane_vc_t

0x5034,	// (0x00029f1c) slider_set_pane_cp_vc

0x503e,	// (0x00029f26) slider_set_pane_vc_g1

0x5047,	// (0x00029f2f) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000348c7) slider_set_pane_vc_g

0xd393,	// (0x0003227b) set_opt_bg_pane_g1_copy1

0xd39b,	// (0x00032283) set_opt_bg_pane_g2_copy1

0x5073,	// (0x00029f5b) set_opt_bg_pane_g3_copy1

0xd3ab,	// (0x00032293) set_opt_bg_pane_g4_copy1

0xd3b3,	// (0x0003229b) set_opt_bg_pane_g5_copy1

0xd3bb,	// (0x000322a3) set_opt_bg_pane_g6_copy1

0x507d,	// (0x00029f65) set_opt_bg_pane_g7_copy1

0x5087,	// (0x00029f6f) set_opt_bg_pane_g8_copy1

0x5091,	// (0x00029f79) set_opt_bg_pane_g9_copy1

0xcc9d,	// (0x00031b85) bg_set_opt_pane_cp_vc

0x509b,	// (0x00029f83) setting_slider_pane_vc_t1

0x50aa,	// (0x00029f92) setting_slider_pane_vc_t2

0x50bc,	// (0x00029fa4) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000348d6) setting_slider_pane_vc_t

0x50ce,	// (0x00029fb6) slider_set_pane_vc

0x17c0,	// (0x000266a8) volume_set_pane_vc_g1

0x17c9,	// (0x000266b1) volume_set_pane_vc_g2

0x17d2,	// (0x000266ba) volume_set_pane_vc_g3

0x17db,	// (0x000266c3) volume_set_pane_vc_g4

0x17e4,	// (0x000266cc) volume_set_pane_vc_g5

0x17ed,	// (0x000266d5) volume_set_pane_vc_g6

0x17f6,	// (0x000266de) volume_set_pane_vc_g7

0x17ff,	// (0x000266e7) volume_set_pane_vc_g8

0x1808,	// (0x000266f0) volume_set_pane_vc_g9

0x1811,	// (0x000266f9) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x000348dd) volume_set_pane_vc_g

0x50d8,	// (0x00029fc0) volume_set_pane_vc

0x50e2,	// (0x00029fca) button_value_adjust_pane_cp1_vc

0x50ec,	// (0x00029fd4) list_highlight_pane_cp2_vc

0x50f5,	// (0x00029fdd) list_set_pane_vc_ParamLimits

0x50f5,	// (0x00029fdd) list_set_pane_vc

0x5163,	// (0x0002a04b) main_pane_set_vc_t1_ParamLimits

0x5163,	// (0x0002a04b) main_pane_set_vc_t1

0x5178,	// (0x0002a060) main_pane_set_vc_t2_ParamLimits

0x5178,	// (0x0002a060) main_pane_set_vc_t2

0x518a,	// (0x0002a072) main_pane_set_vc_t3_ParamLimits

0x518a,	// (0x0002a072) main_pane_set_vc_t3

0x519e,	// (0x0002a086) main_pane_set_vc_t4_ParamLimits

0x519e,	// (0x0002a086) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x000348f2) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x000348f2) main_pane_set_vc_t

0x51b2,	// (0x0002a09a) setting_code_pane_vc_ParamLimits

0x51b2,	// (0x0002a09a) setting_code_pane_vc

0x51c3,	// (0x0002a0ab) setting_slider_graphic_pane_vc

0x51c3,	// (0x0002a0ab) setting_slider_pane_vc

0x51c3,	// (0x0002a0ab) setting_text_pane_vc

0x51c3,	// (0x0002a0ab) setting_volume_pane_vc

0x51cd,	// (0x0002a0b5) scroll_pane_cp121_vc

0xd315,	// (0x000321fd) set_content_pane_vc

0x51d5,	// (0x0002a0bd) button_value_adjust_pane_g1

0x51de,	// (0x0002a0c6) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00034947) button_value_adjust_pane_g

0x51e7,	// (0x0002a0cf) form_field_slider_wide_pane_vc_t1_ParamLimits

0x51e7,	// (0x0002a0cf) form_field_slider_wide_pane_vc_t1

0x51f9,	// (0x0002a0e1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x51f9,	// (0x0002a0e1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x0003494c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x0003494c) form_field_slider_wide_pane_vc_t

0xcceb,	// (0x00031bd3) input_focus_pane_cp10_vc_ParamLimits

0xcceb,	// (0x00031bd3) input_focus_pane_cp10_vc

0x5225,	// (0x0002a10d) slider_cont_pane_cp1_vc_ParamLimits

0x5225,	// (0x0002a10d) slider_cont_pane_cp1_vc

0x5237,	// (0x0002a11f) slider_form_pane_g1_cp2

0x5047,	// (0x00029f2f) slider_form_pane_g2_cp2

0x5264,	// (0x0002a14c) form_field_slider_pane_vc_t3

0x5272,	// (0x0002a15a) form_field_slider_pane_vc_t4

0x5280,	// (0x0002a168) slider_form_pane_vc_ParamLimits

0x5280,	// (0x0002a168) slider_form_pane_vc

0x528d,	// (0x0002a175) form_field_slider_pane_vc_t1_ParamLimits

0x528d,	// (0x0002a175) form_field_slider_pane_vc_t1

0x51f9,	// (0x0002a0e1) form_field_slider_pane_vc_t2_ParamLimits

0x51f9,	// (0x0002a0e1) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x0003495e) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x0003495e) form_field_slider_pane_vc_t

0xcceb,	// (0x00031bd3) input_focus_pane_cp9_vc_ParamLimits

0xcceb,	// (0x00031bd3) input_focus_pane_cp9_vc

0x52a3,	// (0x0002a18b) slider_cont_pane_vc_ParamLimits

0x52a3,	// (0x0002a18b) slider_cont_pane_vc

0x52b7,	// (0x0002a19f) list_form_graphic_pane_cp_vc_ParamLimits

0x52b7,	// (0x0002a19f) list_form_graphic_pane_cp_vc

0x3537,	// (0x0002841f) form_field_popup_wide_pane_vc_g1

0x52cc,	// (0x0002a1b4) form_field_popup_wide_pane_vc_t1_ParamLimits

0x52cc,	// (0x0002a1b4) form_field_popup_wide_pane_vc_t1

0xd33b,	// (0x00032223) input_focus_pane_cp8_vc_ParamLimits

0xd33b,	// (0x00032223) input_focus_pane_cp8_vc

0x5311,	// (0x0002a1f9) list_form_wide_pane_vc_ParamLimits

0x5311,	// (0x0002a1f9) list_form_wide_pane_vc

0x531d,	// (0x0002a205) list_form_graphic_pane_vc_g1

0x5325,	// (0x0002a20d) list_form_graphic_pane_vc_t1_ParamLimits

0x5325,	// (0x0002a20d) list_form_graphic_pane_vc_t1

0xccf9,	// (0x00031be1) list_highlight_pane_cp5_vc_ParamLimits

0xccf9,	// (0x00031be1) list_highlight_pane_cp5_vc

0x5341,	// (0x0002a229) list_form_graphic_pane_vc_ParamLimits

0x5341,	// (0x0002a229) list_form_graphic_pane_vc

0x3537,	// (0x0002841f) form_field_popup_pane_vc_g1

0x5357,	// (0x0002a23f) form_field_popup_pane_vc_t1_ParamLimits

0x5357,	// (0x0002a23f) form_field_popup_pane_vc_t1

0xd33b,	// (0x00032223) input_focus_pane_cp7_vc_ParamLimits

0xd33b,	// (0x00032223) input_focus_pane_cp7_vc

0x536e,	// (0x0002a256) list_form_pane_vc_ParamLimits

0x536e,	// (0x0002a256) list_form_pane_vc

0x537a,	// (0x0002a262) data_form_pane_vc_t1_ParamLimits

0x537a,	// (0x0002a262) data_form_pane_vc_t1

0xd393,	// (0x0003227b) input_focus_pane_vc_g1

0xd39b,	// (0x00032283) input_focus_pane_vc_g2

0xd3a3,	// (0x0003228b) input_focus_pane_vc_g3

0xd3ab,	// (0x00032293) input_focus_pane_vc_g4

0xd3b3,	// (0x0003229b) input_focus_pane_vc_g5

0xd3bb,	// (0x000322a3) input_focus_pane_vc_g6

0xd3c3,	// (0x000322ab) input_focus_pane_vc_g7

0xd3cb,	// (0x000322b3) input_focus_pane_vc_g8

0xd3d3,	// (0x000322bb) input_focus_pane_vc_g9

0xcc93,	// (0x00031b7b) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003454f) input_focus_pane_vc_g

0x352b,	// (0x00028413) data_form_pane_vc_ParamLimits

0x352b,	// (0x00028413) data_form_pane_vc

0x3537,	// (0x0002841f) form_field_data_pane_vc_g1

0x5397,	// (0x0002a27f) form_field_data_pane_vc_t1_ParamLimits

0x5397,	// (0x0002a27f) form_field_data_pane_vc_t1

0xd33b,	// (0x00032223) input_focus_pane_vc_ParamLimits

0xd33b,	// (0x00032223) input_focus_pane_vc

0x53b1,	// (0x0002a299) button_value_adjust_pane_cp3_vc

0x53b9,	// (0x0002a2a1) button_value_adjust_pane_cp5_vc

0x53c1,	// (0x0002a2a9) form_field_data_pane_vc_ParamLimits

0x53c1,	// (0x0002a2a9) form_field_data_pane_vc

0x53dc,	// (0x0002a2c4) form_field_data_pane_vc_cp2

0x53e4,	// (0x0002a2cc) form_field_data_wide_pane_vc_ParamLimits

0x53e4,	// (0x0002a2cc) form_field_data_wide_pane_vc

0x53fe,	// (0x0002a2e6) form_field_data_wide_pane_vc_cp2

0x5406,	// (0x0002a2ee) form_field_popup_pane_vc_ParamLimits

0x5406,	// (0x0002a2ee) form_field_popup_pane_vc

0x5421,	// (0x0002a309) form_field_popup_wide_pane_vc_ParamLimits

0x5421,	// (0x0002a309) form_field_popup_wide_pane_vc

0x543b,	// (0x0002a323) form_field_slider_pane_vc_ParamLimits

0x543b,	// (0x0002a323) form_field_slider_pane_vc

0x544e,	// (0x0002a336) form_field_slider_wide_pane_vc_ParamLimits

0x544e,	// (0x0002a336) form_field_slider_wide_pane_vc

0xc01d,	// (0x00030f05) grid_touch_1_pane_ParamLimits

0xc01d,	// (0x00030f05) grid_touch_1_pane

0xc031,	// (0x00030f19) grid_touch_2_pane_ParamLimits

0xc031,	// (0x00030f19) grid_touch_2_pane

0x5534,	// (0x0002a41c) touch_pane_g1_ParamLimits

0x5534,	// (0x0002a41c) touch_pane_g1

0x5487,	// (0x0002a36f) cell_app_pane_cp_wide_ParamLimits

0x5487,	// (0x0002a36f) cell_app_pane_cp_wide

0x5498,	// (0x0002a380) grid_popup_fast_wide_pane_ParamLimits

0x5498,	// (0x0002a380) grid_popup_fast_wide_pane

0x54ac,	// (0x0002a394) scroll_pane_cp19_ParamLimits

0x54ac,	// (0x0002a394) scroll_pane_cp19

0xcc9d,	// (0x00031b85) bg_popup_window_pane_cp20

0x54c0,	// (0x0002a3a8) listscroll_popup_fast_wide_pane

0xc05d,	// (0x00030f45) grid_indicator_nsta_pane

0x54da,	// (0x0002a3c2) clock_nsta_pane_g1

0x54e3,	// (0x0002a3cb) clock_nsta_pane_t1

0xc069,	// (0x00030f51) cell_indicator_nsta_pane_ParamLimits

0xc069,	// (0x00030f51) cell_indicator_nsta_pane

0x5534,	// (0x0002a41c) cell_indicator_nsta_pane_g1

0xc084,	// (0x00030f6c) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x0003496f) cell_indicator_nsta_pane_g

0x5555,	// (0x0002a43d) clock_nsta_pane_cp

0x555e,	// (0x0002a446) indicator_nsta_pane_cp

0x5568,	// (0x0002a450) nsta_clock_indic_pane_g1

0xcd35,	// (0x00031c1d) grid_indicator_pane

0x05de,	// (0x000254c6) scroll_pane_cp29

0x0a65,	// (0x0002594d) indicator_nsta_pane_cp2_ParamLimits

0x0a65,	// (0x0002594d) indicator_nsta_pane_cp2

0xccf9,	// (0x00031be1) main_apps_wheel_pane

0x3718,	// (0x00028600) form_midp_field_text_pane_ParamLimits

0x3867,	// (0x0002874f) scroll_bar_cp050_ParamLimits

0x55c1,	// (0x0002a4a9) cell_indicator_pane_ParamLimits

0x55c1,	// (0x0002a4a9) cell_indicator_pane

0x55d9,	// (0x0002a4c1) cell_indicator_pane_g1

0xc091,	// (0x00030f79) grid_wheel_folder_pane_ParamLimits

0xc091,	// (0x00030f79) grid_wheel_folder_pane

0xc09f,	// (0x00030f87) list_wheel_apps_pane_ParamLimits

0xc09f,	// (0x00030f87) list_wheel_apps_pane

0xc0ad,	// (0x00030f95) main_apps_wheel_pane_g1_ParamLimits

0xc0ad,	// (0x00030f95) main_apps_wheel_pane_g1

0xc0bd,	// (0x00030fa5) main_apps_wheel_pane_g2_ParamLimits

0xc0bd,	// (0x00030fa5) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x0003498b) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x0003498b) main_apps_wheel_pane_g

0xc0cd,	// (0x00030fb5) main_apps_wheel_pane_t1_ParamLimits

0xc0cd,	// (0x00030fb5) main_apps_wheel_pane_t1

0xc0e5,	// (0x00030fcd) list_wheel_apps_pane_g1

0xc0ed,	// (0x00030fd5) list_wheel_apps_pane_g2

0xc0f5,	// (0x00030fdd) list_wheel_apps_pane_g3

0xc0fd,	// (0x00030fe5) list_wheel_apps_pane_g4

0xc105,	// (0x00030fed) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x00034990) list_wheel_apps_pane_g

0x0d66,	// (0x00025c4e) navi_icon_text_pane

0xb4bf,	// (0x000303a7) aid_fill_nsta

0xc120,	// (0x00031008) navi_icon_text_pane_g1

0xc12c,	// (0x00031014) navi_icon_text_pane_t1

0x0bfc,	// (0x00025ae4) list_set_graphic_pane_t1_ParamLimits

0x0bfc,	// (0x00025ae4) list_set_graphic_pane_t1

0x3fd4,	// (0x00028ebc) popup_midp_note_alarm_window_t6_ParamLimits

0x3fd4,	// (0x00028ebc) popup_midp_note_alarm_window_t6

0x3fe6,	// (0x00028ece) popup_midp_note_alarm_window_t7_ParamLimits

0x3fe6,	// (0x00028ece) popup_midp_note_alarm_window_t7

0x3ff8,	// (0x00028ee0) popup_midp_note_alarm_window_t8_ParamLimits

0x3ff8,	// (0x00028ee0) popup_midp_note_alarm_window_t8

0x400a,	// (0x00028ef2) popup_midp_note_alarm_window_t9_ParamLimits

0x400a,	// (0x00028ef2) popup_midp_note_alarm_window_t9

0x401c,	// (0x00028f04) popup_midp_note_alarm_window_t10_ParamLimits

0x401c,	// (0x00028f04) popup_midp_note_alarm_window_t10

0x402e,	// (0x00028f16) popup_midp_note_alarm_window_t11_ParamLimits

0x402e,	// (0x00028f16) popup_midp_note_alarm_window_t11

0x4040,	// (0x00028f28) scroll_pane_cp17_ParamLimits

0x4040,	// (0x00028f28) scroll_pane_cp17

0x17c0,	// (0x000266a8) volume_small_pane_cp_g1

0x1ad1,	// (0x000269b9) volume_small_pane_cp_g2

0x1ada,	// (0x000269c2) volume_small_pane_cp_g3

0x1ae3,	// (0x000269cb) volume_small_pane_cp_g4

0x1aec,	// (0x000269d4) volume_small_pane_cp_g5

0x1af5,	// (0x000269dd) volume_small_pane_cp_g6

0x1afe,	// (0x000269e6) volume_small_pane_cp_g7

0x1b07,	// (0x000269ef) volume_small_pane_cp_g8

0x1b10,	// (0x000269f8) volume_small_pane_cp_g9

0x1b19,	// (0x00026a01) volume_small_pane_cp_g10

0x2cd2,	// (0x00027bba) midp_ticker_pane_g1_ParamLimits

0x2cde,	// (0x00027bc6) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003461b) midp_ticker_pane_g_ParamLimits

0xac47,	// (0x0002fb2f) midp_ticker_pane_t1_ParamLimits

0xb4e3,	// (0x000303cb) aid_fill_nsta_2

0x3853,	// (0x0002873b) list_form2_midp_pane

0x49cf,	// (0x000298b7) midp_editing_number_pane_ParamLimits

0x49de,	// (0x000298c6) midp_ticker_pane_ParamLimits

0x56cc,	// (0x0002a5b4) form2_midp_field_pane

0x56f0,	// (0x0002a5d8) scroll_pane_cp51

0x5710,	// (0x0002a5f8) form2_midp_button_pane_ParamLimits

0x5710,	// (0x0002a5f8) form2_midp_button_pane

0x5722,	// (0x0002a60a) form2_midp_content_pane_ParamLimits

0x5722,	// (0x0002a60a) form2_midp_content_pane

0x573c,	// (0x0002a624) form2_midp_field_choice_group_pane

0x5744,	// (0x0002a62c) form2_midp_field_pane_g1

0x574c,	// (0x0002a634) form2_midp_field_pane_g2

0x5754,	// (0x0002a63c) form2_midp_field_pane_g3

0x575c,	// (0x0002a644) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x000349b5) form2_midp_field_pane_g

0x5764,	// (0x0002a64c) form2_midp_gauge_slider_pane

0x576c,	// (0x0002a654) form2_midp_gauge_wait_pane

0x5774,	// (0x0002a65c) form2_midp_image_pane_ParamLimits

0x5774,	// (0x0002a65c) form2_midp_image_pane

0x578f,	// (0x0002a677) form2_midp_label_pane_ParamLimits

0x578f,	// (0x0002a677) form2_midp_label_pane

0xc15a,	// (0x00031042) form2_midp_label_pane_cp_ParamLimits

0xc15a,	// (0x00031042) form2_midp_label_pane_cp

0x57cf,	// (0x0002a6b7) form2_midp_string_pane_ParamLimits

0x57cf,	// (0x0002a6b7) form2_midp_string_pane

0xa098,	// (0x0002ef80) form2_midp_text_pane_ParamLimits

0xa098,	// (0x0002ef80) form2_midp_text_pane

0x57e1,	// (0x0002a6c9) form2_midp_time_pane

0x57f1,	// (0x0002a6d9) input_focus_pane_cp51_ParamLimits

0x57f1,	// (0x0002a6d9) input_focus_pane_cp51

0x5809,	// (0x0002a6f1) form2_midp_label_pane_t1_ParamLimits

0x5809,	// (0x0002a6f1) form2_midp_label_pane_t1

0xa0b9,	// (0x0002efa1) form2_mdip_text_pane_t1_ParamLimits

0xa0b9,	// (0x0002efa1) form2_mdip_text_pane_t1

0xf0a9,	// (0x00033f91) form2_midp_time_pane_t1

0x5857,	// (0x0002a73f) form2_midp_gauge_slider_pane_t1

0xc17b,	// (0x00031063) form2_midp_gauge_slider_pane_t2

0xc18d,	// (0x00031075) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x000349be) form2_midp_gauge_slider_pane_t

0x588d,	// (0x0002a775) form2_midp_slider_pane

0x5899,	// (0x0002a781) form2_midp_gauge_wait_pane_t1

0x58a7,	// (0x0002a78f) form2_midp_wait_pane_ParamLimits

0x58a7,	// (0x0002a78f) form2_midp_wait_pane

0x357e,	// (0x00028466) list_single_2graphic_pane_cp4_ParamLimits

0x357e,	// (0x00028466) list_single_2graphic_pane_cp4

0xb98f,	// (0x00030877) list_single_midp_graphic_pane_cp_ParamLimits

0xb98f,	// (0x00030877) list_single_midp_graphic_pane_cp

0xcc9d,	// (0x00031b85) list_highlight_pane_cp20

0x58eb,	// (0x0002a7d3) list_single_2graphic_pane_g1_cp4

0x4e84,	// (0x00029d6c) list_single_2graphic_pane_g2_cp4

0x58f3,	// (0x0002a7db) list_single_2graphic_pane_t1_cp4

0xccf9,	// (0x00031be1) list_highlight_pane_cp21

0x5902,	// (0x0002a7ea) list_single_midp_graphic_pane_g4_cp

0x5911,	// (0x0002a7f9) list_single_midp_graphic_pane_t1_cp

0xc19f,	// (0x00031087) form2_mdip_string_pane_t1_ParamLimits

0xc19f,	// (0x00031087) form2_mdip_string_pane_t1

0xcc9d,	// (0x00031b85) bg_wml_button_pane_cp2

0xcc93,	// (0x00031b7b) form2_midp_image_pane_g1

0xeb23,	// (0x00033a0b) list_double_large_graphic_pane_g5_ParamLimits

0xeb23,	// (0x00033a0b) list_double_large_graphic_pane_g5

0xaba3,	// (0x0002fa8b) midp_form_pane_ParamLimits

0xccf9,	// (0x00031be1) main_apps_wheel_pane_ParamLimits

0xb1d7,	// (0x000300bf) popup_preview_window_ParamLimits

0xb1d7,	// (0x000300bf) popup_preview_window

0x1624,	// (0x0002650c) popup_touch_info_window_ParamLimits

0x1624,	// (0x0002650c) popup_touch_info_window

0x1646,	// (0x0002652e) popup_touch_menu_window_ParamLimits

0x1646,	// (0x0002652e) popup_touch_menu_window

0xcc89,	// (0x00031b71) bg_popup_sub_pane_cp6

0x59c2,	// (0x0002a8aa) list_touch_menu_pane

0x59ca,	// (0x0002a8b2) list_single_touch_menu_pane_ParamLimits

0x59ca,	// (0x0002a8b2) list_single_touch_menu_pane

0x59e2,	// (0x0002a8ca) list_single_touch_menu_pane_t1

0xccf9,	// (0x00031be1) bg_popup_sub_pane_cp7_ParamLimits

0xccf9,	// (0x00031be1) bg_popup_sub_pane_cp7

0x59f0,	// (0x0002a8d8) heading_sub_pane

0x59f8,	// (0x0002a8e0) list_touch_info_pane_ParamLimits

0x59f8,	// (0x0002a8e0) list_touch_info_pane

0x5a07,	// (0x0002a8ef) list_single_touch_info_pane_ParamLimits

0x5a07,	// (0x0002a8ef) list_single_touch_info_pane

0x5a19,	// (0x0002a901) list_single_touch_info_pane_t1

0x5a27,	// (0x0002a90f) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x000349cc) list_single_touch_info_pane_t

0x2bf4,	// (0x00027adc) bg_popup_heading_pane_cp

0x5a35,	// (0x0002a91d) heading_sub_pane_t1

0x34c5,	// (0x000283ad) bg_popup_preview_window_pane_cp_ParamLimits

0x34c5,	// (0x000283ad) bg_popup_preview_window_pane_cp

0x59f0,	// (0x0002a8d8) heading_preview_pane

0x59f8,	// (0x0002a8e0) list_preview_pane_ParamLimits

0x59f8,	// (0x0002a8e0) list_preview_pane

0x5a43,	// (0x0002a92b) popup_preview_window_g1

0x5a07,	// (0x0002a8ef) list_single_preview_pane_ParamLimits

0x5a07,	// (0x0002a8ef) list_single_preview_pane

0x5a4b,	// (0x0002a933) list_single_preview_pane_g1

0x5a53,	// (0x0002a93b) list_single_preview_pane_t1

0x5a19,	// (0x0002a901) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x000349d1) list_single_preview_pane_t

0x5a61,	// (0x0002a949) bg_popup_heading_pane_cp2_ParamLimits

0x5a61,	// (0x0002a949) bg_popup_heading_pane_cp2

0x5a77,	// (0x0002a95f) heading_preview_pane_g1

0x5a7f,	// (0x0002a967) heading_preview_pane_t1_ParamLimits

0x5a7f,	// (0x0002a967) heading_preview_pane_t1

0xcd4c,	// (0x00031c34) soft_indicator_pane_t1_ParamLimits

0xd2ae,	// (0x00032196) scroll_pane_ParamLimits

0x04da,	// (0x000253c2) scroll_sc2_left_pane

0x04e3,	// (0x000253cb) scroll_sc2_right_pane

0x0502,	// (0x000253ea) scroll_bg_pane_g1_ParamLimits

0x0517,	// (0x000253ff) scroll_bg_pane_g2_ParamLimits

0x052f,	// (0x00025417) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x000345a6) scroll_bg_pane_g_ParamLimits

0x0502,	// (0x000253ea) scroll_handle_pane_g1_ParamLimits

0x0551,	// (0x00025439) scroll_handle_pane_g2_ParamLimits

0x052f,	// (0x00025417) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x000345ad) scroll_handle_pane_g_ParamLimits

0x1082,	// (0x00025f6a) popup_choice_list_window_ParamLimits

0x1082,	// (0x00025f6a) popup_choice_list_window

0x339b,	// (0x00028283) choice_list_pane

0x341d,	// (0x00028305) cell_toolbar_pane_t1

0x3445,	// (0x0002832d) toolbar_button_pane_ParamLimits

0x450a,	// (0x000293f2) ai_gene_pane_1_t2_ParamLimits

0x450a,	// (0x000293f2) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000347d0) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000347d0) ai_gene_pane_1_t

0x5a9c,	// (0x0002a984) scroll_sc2_left_pane_g1

0x5a9c,	// (0x0002a984) scroll_sc2_right_pane_g1

0x2f1b,	// (0x00027e03) bg_popup_sub_pane_cp10

0x5aa6,	// (0x0002a98e) list_choice_list_pane

0x5abf,	// (0x0002a9a7) list_single_choice_list_pane_ParamLimits

0x5abf,	// (0x0002a9a7) list_single_choice_list_pane

0x5ad7,	// (0x0002a9bf) list_single_choice_list_pane_g1

0xd49c,	// (0x00032384) list_single_choice_list_pane_t1_ParamLimits

0xd49c,	// (0x00032384) list_single_choice_list_pane_t1

0x5adf,	// (0x0002a9c7) choice_list_pane_g1

0x5ae7,	// (0x0002a9cf) choice_list_pane_t1

0xcc89,	// (0x00031b71) input_focus_pane_cp11

0xd61a,	// (0x00032502) title_pane_stacon_g2_ParamLimits

0xd61a,	// (0x00032502) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003458c) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003458c) title_pane_stacon_g

0x2bf4,	// (0x00027adc) cursor_press_pane

0xae4e,	// (0x0002fd36) popup_fep_hwr_window_ParamLimits

0xae4e,	// (0x0002fd36) popup_fep_hwr_window

0x11c6,	// (0x000260ae) popup_fep_vkb_window_ParamLimits

0x11c6,	// (0x000260ae) popup_fep_vkb_window

0x5af5,	// (0x0002a9dd) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x000349fa) fep_vkb_side_pane_g_ParamLimits

0x1b5b,	// (0x00026a43) fep_hwr_candidate_pane_ParamLimits

0x1b5b,	// (0x00026a43) fep_hwr_candidate_pane

0x1b85,	// (0x00026a6d) fep_hwr_side_pane_ParamLimits

0x1b85,	// (0x00026a6d) fep_hwr_side_pane

0x1ba7,	// (0x00026a8f) fep_hwr_top_pane_ParamLimits

0x1ba7,	// (0x00026a8f) fep_hwr_top_pane

0x1bbf,	// (0x00026aa7) fep_hwr_write_pane_ParamLimits

0x1bbf,	// (0x00026aa7) fep_hwr_write_pane

0xfb12,	// (0x000349fa) fep_vkb_side_pane_g

0x5afd,	// (0x0002a9e5) fep_hwr_top_pane_g1

0x5b0f,	// (0x0002a9f7) fep_hwr_top_pane_g2

0x1beb,	// (0x00026ad3) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x000349d6) fep_hwr_top_pane_g

0x1c00,	// (0x00026ae8) fep_hwr_top_text_pane

0x06a6,	// (0x0002558e) fep_hwr_top_text_pane_g1

0x5b45,	// (0x0002aa2d) fep_hwr_top_text_pane_t1

0x1d0a,	// (0x00026bf2) fep_hwr_candidate_pane_g1

0x5d90,	// (0x0002ac78) fep_vkb_keypad_pane_g3_ParamLimits

0x5d90,	// (0x0002ac78) fep_vkb_keypad_pane_g3

0x5dbc,	// (0x0002aca4) fep_vkb_keypad_pane_g4_ParamLimits

0x5dbc,	// (0x0002aca4) fep_vkb_keypad_pane_g4

0x5e33,	// (0x0002ad1b) fep_vkb_bottom_pane_g2_ParamLimits

0x5e33,	// (0x0002ad1b) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00034a01) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00034a01) fep_vkb_bottom_pane_g

0x5a9c,	// (0x0002a984) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00034a0b) cell_vkb_side_pane_g

0x5ebe,	// (0x0002ada6) cell_vkb_side_pane_t1

0x5ecc,	// (0x0002adb4) cell_vkb_side_pane_t1_copy1

0x5a9c,	// (0x0002a984) bg_fep_vkb_candidate_pane_g2

0x6010,	// (0x0002aef8) cell_vkb_candidate_pane_ParamLimits

0x5b53,	// (0x0002aa3b) aid_size_cell_vkb_ParamLimits

0x5b53,	// (0x0002aa3b) aid_size_cell_vkb

0x6010,	// (0x0002aef8) cell_vkb_candidate_pane

0x1d24,	// (0x00026c0c) bg_popup_fep_shadow_pane_g1

0xc282,	// (0x0003116a) fep_vkb_bottom_pane_ParamLimits

0xc282,	// (0x0003116a) fep_vkb_bottom_pane

0x5c22,	// (0x0002ab0a) fep_vkb_candidate_pane_ParamLimits

0x5c22,	// (0x0002ab0a) fep_vkb_candidate_pane

0xc2ae,	// (0x00031196) fep_vkb_keypad_pane_ParamLimits

0xc2ae,	// (0x00031196) fep_vkb_keypad_pane

0xc2d5,	// (0x000311bd) fep_vkb_side_pane_ParamLimits

0xc2d5,	// (0x000311bd) fep_vkb_side_pane

0xc311,	// (0x000311f9) fep_vkb_top_pane_ParamLimits

0xc311,	// (0x000311f9) fep_vkb_top_pane

0x5ce9,	// (0x0002abd1) fep_vkb_top_pane_g1_ParamLimits

0x5ce9,	// (0x0002abd1) fep_vkb_top_pane_g1

0x5cf8,	// (0x0002abe0) fep_vkb_top_pane_g2_ParamLimits

0x5cf8,	// (0x0002abe0) fep_vkb_top_pane_g2

0x5d07,	// (0x0002abef) fep_vkb_top_pane_g3_ParamLimits

0x5d07,	// (0x0002abef) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x000349f1) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x000349f1) fep_vkb_top_pane_g

0x5d25,	// (0x0002ac0d) fep_vkb_top_text_pane_ParamLimits

0x5d25,	// (0x0002ac0d) fep_vkb_top_text_pane

0xc34d,	// (0x00031235) fep_vkb_side_pane_g1_ParamLimits

0xc34d,	// (0x00031235) fep_vkb_side_pane_g1

0x5d7f,	// (0x0002ac67) grid_vkb_side_pane_ParamLimits

0x5d7f,	// (0x0002ac67) grid_vkb_side_pane

0x1d2c,	// (0x00026c14) bg_popup_fep_shadow_pane_g2

0x1d35,	// (0x00026c1d) bg_popup_fep_shadow_pane_g3

0x1d3d,	// (0x00026c25) bg_popup_fep_shadow_pane_g4

0x1d46,	// (0x00026c2e) bg_popup_fep_shadow_pane_g5

0x1d50,	// (0x00026c38) bg_popup_fep_shadow_pane_g6

0x1d58,	// (0x00026c40) bg_popup_fep_shadow_pane_g7

0xd3b3,	// (0x0003229b) bg_popup_fep_shadow_pane_g8

0x5dde,	// (0x0002acc6) grid_vkb_keypad_number_pane_ParamLimits

0x5dde,	// (0x0002acc6) grid_vkb_keypad_number_pane

0x5df2,	// (0x0002acda) grid_vkb_keypad_pane_ParamLimits

0x5df2,	// (0x0002acda) grid_vkb_keypad_pane

0x5e18,	// (0x0002ad00) fep_vkb_bottom_pane_g1_ParamLimits

0x5e18,	// (0x0002ad00) fep_vkb_bottom_pane_g1

0x5e41,	// (0x0002ad29) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5e41,	// (0x0002ad29) grid_vkb_keypad_bottom_left_pane

0x5e56,	// (0x0002ad3e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5e56,	// (0x0002ad3e) grid_vkb_keypad_bottom_right_pane

0x5e6b,	// (0x0002ad53) fep_vkb_top_text_pane_g1

0xc394,	// (0x0003127c) fep_vkb_top_text_pane_t1

0xc3a6,	// (0x0003128e) cell_vkb_side_pane_ParamLimits

0xc3a6,	// (0x0003128e) cell_vkb_side_pane

0x5a9c,	// (0x0002a984) cell_vkb_side_pane_g1

0x5eda,	// (0x0002adc2) cell_vkb_keypad_pane_ParamLimits

0x5eda,	// (0x0002adc2) cell_vkb_keypad_pane

0x5f67,	// (0x0002ae4f) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00034a1e) bg_popup_fep_shadow_pane_g

0x5a9c,	// (0x0002a984) cell_hwr_side_pane_g1

0x5a9c,	// (0x0002a984) cell_hwr_side_pane_g2

0x5f71,	// (0x0002ae59) cell_vkb_keypad_pane_t1

0xc3bc,	// (0x000312a4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3bc,	// (0x000312a4) cell_vkb_keypad_bottom_left_pane

0xc3d1,	// (0x000312b9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d1,	// (0x000312b9) cell_vkb_keypad_bottom_right_pane

0x5a9c,	// (0x0002a984) cell_vkb_keypad_bottom_left_pane_g1

0x5a9c,	// (0x0002a984) cell_vkb_keypad_bottom_right_pane_g1

0x5fd5,	// (0x0002aebd) cell_vkb_keypad_number_pane_ParamLimits

0x5fd5,	// (0x0002aebd) cell_vkb_keypad_number_pane

0x5ff4,	// (0x0002aedc) cell_vkb_keypad_number_pane_g1

0x5ffe,	// (0x0002aee6) cell_vkb_keypad_number_pane_g2

0x6007,	// (0x0002aeef) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00034a10) cell_vkb_keypad_number_pane_g

0x5f71,	// (0x0002ae59) cell_vkb_keypad_number_pane_t1

0x6031,	// (0x0002af19) fep_vkb_candidate_pane_g1

0x0001,

0xfb23,	// (0x00034a0b) cell_hwr_side_pane_g

0x604a,	// (0x0002af32) cell_hwr_side_pane_t1

0x1d6a,	// (0x00026c52) cell_hwr_side_pane_t1_copy1

0x5d17,	// (0x0002abff) cell_hwr_candidate_pane_g1

0x1d78,	// (0x00026c60) cell_hwr_candidate_pane_t1

0x5a9c,	// (0x0002a984) cell_vkb_candidate_pane_g2

0x60d0,	// (0x0002afb8) cell_vkb_candidate_pane_t1

0x1b22,	// (0x00026a0a) bg_popup_fep_shadow_pane_ParamLimits

0x1b22,	// (0x00026a0a) bg_popup_fep_shadow_pane

0xd669,	// (0x00032551) bg_fep_hwr_top_pane_g4

0x5b21,	// (0x0002aa09) bg_hwr_side_pane_g1_ParamLimits

0x5b21,	// (0x0002aa09) bg_hwr_side_pane_g1

0xc23b,	// (0x00031123) cell_hwr_side_pane_ParamLimits

0xc23b,	// (0x00031123) cell_hwr_side_pane

0x1c7b,	// (0x00026b63) fep_hwr_write_pane_g1_ParamLimits

0x1c7b,	// (0x00026b63) fep_hwr_write_pane_g1

0x1c88,	// (0x00026b70) fep_hwr_write_pane_g2_ParamLimits

0x1c88,	// (0x00026b70) fep_hwr_write_pane_g2

0x1c95,	// (0x00026b7d) fep_hwr_write_pane_g3_ParamLimits

0x1c95,	// (0x00026b7d) fep_hwr_write_pane_g3

0xc25b,	// (0x00031143) fep_hwr_write_pane_g4_ParamLimits

0xc25b,	// (0x00031143) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x000349dd) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x000349dd) fep_hwr_write_pane_g

0xd669,	// (0x00032551) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd669,	// (0x00032551) bg_fep_hwr_candidate_pane_g2

0x1cb8,	// (0x00026ba0) cell_hwr_candidate_pane_ParamLimits

0x1cb8,	// (0x00026ba0) cell_hwr_candidate_pane

0x1d0a,	// (0x00026bf2) fep_hwr_candidate_pane_g1_ParamLimits

0x5b81,	// (0x0002aa69) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5b81,	// (0x0002aa69) bg_popup_fep_shadow_pane_cp2

0x5d17,	// (0x0002abff) fep_vkb_top_pane_g4_ParamLimits

0x5d17,	// (0x0002abff) fep_vkb_top_pane_g4

0x5d5d,	// (0x0002ac45) fep_vkb_side_pane_g2_ParamLimits

0x5d5d,	// (0x0002ac45) fep_vkb_side_pane_g2

0x9d44,	// (0x0002ec2c) list_setting_pane_t4_ParamLimits

0x9d44,	// (0x0002ec2c) list_setting_pane_t4

0x9de0,	// (0x0002ecc8) list_setting_number_pane_t5_ParamLimits

0x9de0,	// (0x0002ecc8) list_setting_number_pane_t5

0x06fc,	// (0x000255e4) list_double_heading_pane_cp2_ParamLimits

0x06fc,	// (0x000255e4) list_double_heading_pane_cp2

0x60de,	// (0x0002afc6) list_double_heading_pane_g1_cp2_ParamLimits

0x60de,	// (0x0002afc6) list_double_heading_pane_g1_cp2

0x60ea,	// (0x0002afd2) list_double_heading_pane_g2_cp2_ParamLimits

0x60ea,	// (0x0002afd2) list_double_heading_pane_g2_cp2

0x60fe,	// (0x0002afe6) list_double_heading_pane_t1_cp2_ParamLimits

0x60fe,	// (0x0002afe6) list_double_heading_pane_t1_cp2

0x6114,	// (0x0002affc) list_double_heading_pane_t2_cp2_ParamLimits

0x6114,	// (0x0002affc) list_double_heading_pane_t2_cp2

0xcc81,	// (0x00031b69) aid_value_unit2

0xf48c,	// (0x00034374) popup_preview_fixed_window

0xce2c,	// (0x00031d14) bg_popup_preview_window_pane_cp02

0x6126,	// (0x0002b00e) list_preview_fixed_pane

0x616c,	// (0x0002b054) list_empty_pane_fp_ParamLimits

0x616c,	// (0x0002b054) list_empty_pane_fp

0x616c,	// (0x0002b054) list_single_cale_day_pane_fp_ParamLimits

0x616c,	// (0x0002b054) list_single_cale_day_pane_fp

0x616c,	// (0x0002b054) list_single_graphic_heading_pane_fp_ParamLimits

0x616c,	// (0x0002b054) list_single_graphic_heading_pane_fp

0x616c,	// (0x0002b054) list_single_graphic_pane_fp_ParamLimits

0x616c,	// (0x0002b054) list_single_graphic_pane_fp

0x616c,	// (0x0002b054) list_single_heading_pane_fp_ParamLimits

0x616c,	// (0x0002b054) list_single_heading_pane_fp

0x616c,	// (0x0002b054) list_single_pane_fp_ParamLimits

0x616c,	// (0x0002b054) list_single_pane_fp

0x6185,	// (0x0002b06d) list_single_pane_fp_g1_ParamLimits

0x6185,	// (0x0002b06d) list_single_pane_fp_g1

0xf005,	// (0x00033eed) list_single_pane_fp_g2_ParamLimits

0xf005,	// (0x00033eed) list_single_pane_fp_g2

0xf0bc,	// (0x00033fa4) list_single_pane_fp_g3_ParamLimits

0xf0bc,	// (0x00033fa4) list_single_pane_fp_g3

0x6191,	// (0x0002b079) list_single_pane_fp_g4_ParamLimits

0x6191,	// (0x0002b079) list_single_pane_fp_g4

0x0003,

0xfb57,	// (0x00034a3f) list_single_pane_fp_g_ParamLimits

0xfb57,	// (0x00034a3f) list_single_pane_fp_g

0xf0d0,	// (0x00033fb8) list_single_pane_fp_t1_ParamLimits

0xf0d0,	// (0x00033fb8) list_single_pane_fp_t1

0xf0e7,	// (0x00033fcf) list_single_graphic_pane_fp_g1_ParamLimits

0xf0e7,	// (0x00033fcf) list_single_graphic_pane_fp_g1

0x6185,	// (0x0002b06d) list_single_graphic_pane_fp_g2_ParamLimits

0x6185,	// (0x0002b06d) list_single_graphic_pane_fp_g2

0xf005,	// (0x00033eed) list_single_graphic_pane_fp_g3_ParamLimits

0xf005,	// (0x00033eed) list_single_graphic_pane_fp_g3

0xf0bc,	// (0x00033fa4) list_single_graphic_pane_fp_g4_ParamLimits

0xf0bc,	// (0x00033fa4) list_single_graphic_pane_fp_g4

0x6191,	// (0x0002b079) list_single_graphic_pane_fp_g5_ParamLimits

0x6191,	// (0x0002b079) list_single_graphic_pane_fp_g5

0x0004,

0xfb60,	// (0x00034a48) list_single_graphic_pane_fp_g_ParamLimits

0xfb60,	// (0x00034a48) list_single_graphic_pane_fp_g

0xf0f3,	// (0x00033fdb) list_single_graphic_pane_fp_t1_ParamLimits

0xf0f3,	// (0x00033fdb) list_single_graphic_pane_fp_t1

0xf0e7,	// (0x00033fcf) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf0e7,	// (0x00033fcf) list_single_graphic_heading_pane_fp_g1

0x6185,	// (0x0002b06d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6185,	// (0x0002b06d) list_single_graphic_heading_pane_fp_g2

0xf005,	// (0x00033eed) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf005,	// (0x00033eed) list_single_graphic_heading_pane_fp_g3

0xf0bc,	// (0x00033fa4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf0bc,	// (0x00033fa4) list_single_graphic_heading_pane_fp_g4

0x6191,	// (0x0002b079) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6191,	// (0x0002b079) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034a48) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034a48) list_single_graphic_heading_pane_fp_g

0xf109,	// (0x00033ff1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf109,	// (0x00033ff1) list_single_graphic_heading_pane_fp_t1

0xf11f,	// (0x00034007) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf11f,	// (0x00034007) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6b,	// (0x00034a53) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6b,	// (0x00034a53) list_single_graphic_heading_pane_fp_t

0xf131,	// (0x00034019) list_single_cale_day_pane_fp_g1_ParamLimits

0xf131,	// (0x00034019) list_single_cale_day_pane_fp_g1

0x619d,	// (0x0002b085) list_single_cale_day_pane_fp_g2_ParamLimits

0x619d,	// (0x0002b085) list_single_cale_day_pane_fp_g2

0xf169,	// (0x00034051) list_single_cale_day_pane_fp_g3_ParamLimits

0xf169,	// (0x00034051) list_single_cale_day_pane_fp_g3

0xf191,	// (0x00034079) list_single_cale_day_pane_fp_g4_ParamLimits

0xf191,	// (0x00034079) list_single_cale_day_pane_fp_g4

0xf1b5,	// (0x0003409d) list_single_cale_day_pane_fp_g5_ParamLimits

0xf1b5,	// (0x0003409d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb70,	// (0x00034a58) list_single_cale_day_pane_fp_g_ParamLimits

0xfb70,	// (0x00034a58) list_single_cale_day_pane_fp_g

0xf1d9,	// (0x000340c1) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1d9,	// (0x000340c1) list_single_cale_day_pane_fp_t1

0xf1ff,	// (0x000340e7) list_single_cale_day_pane_fp_t2_ParamLimits

0xf1ff,	// (0x000340e7) list_single_cale_day_pane_fp_t2

0xf218,	// (0x00034100) list_single_cale_day_pane_fp_t3_ParamLimits

0xf218,	// (0x00034100) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7b,	// (0x00034a63) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7b,	// (0x00034a63) list_single_cale_day_pane_fp_t

0x6185,	// (0x0002b06d) list_empty_pane_fp_g1_ParamLimits

0x6185,	// (0x0002b06d) list_empty_pane_fp_g1

0xf231,	// (0x00034119) list_empty_pane_fp_t1

0xf23f,	// (0x00034127) list_empty_pane_fp_t2

0x0001,

0xfb82,	// (0x00034a6a) list_empty_pane_fp_t

0x6185,	// (0x0002b06d) list_single_heading_pane_fp_g1_ParamLimits

0x6185,	// (0x0002b06d) list_single_heading_pane_fp_g1

0xf005,	// (0x00033eed) list_single_heading_pane_fp_g2_ParamLimits

0xf005,	// (0x00033eed) list_single_heading_pane_fp_g2

0xf0bc,	// (0x00033fa4) list_single_heading_pane_fp_g3_ParamLimits

0xf0bc,	// (0x00033fa4) list_single_heading_pane_fp_g3

0x0002,

0xfb87,	// (0x00034a6f) list_single_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00034a6f) list_single_heading_pane_fp_g

0xf24d,	// (0x00034135) list_single_heading_pane_fp_t1_ParamLimits

0xf24d,	// (0x00034135) list_single_heading_pane_fp_t1

0xf25f,	// (0x00034147) list_single_heading_pane_fp_t2_ParamLimits

0xf25f,	// (0x00034147) list_single_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00034a76) list_single_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00034a76) list_single_heading_pane_fp_t

0xd4b1,	// (0x00032399) aid_size_cell_fast

0xce0f,	// (0x00031cf7) soft_indicator_pane_cp1_t1

0xd4ee,	// (0x000323d6) cell_app_pane_cp2_ParamLimits

0xd4ee,	// (0x000323d6) cell_app_pane_cp2

0x1b44,	// (0x00026a2c) fep_hwr_candidate_drop_down_list_pane

0xd677,	// (0x0003255f) fep_hwr_candidate_pane_g3_ParamLimits

0xd677,	// (0x0003255f) fep_hwr_candidate_pane_g3

0xd684,	// (0x0003256c) fep_hwr_candidate_pane_g4_ParamLimits

0xd684,	// (0x0003256c) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x000349ea) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x000349ea) fep_hwr_candidate_pane_g

0x5c11,	// (0x0002aaf9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5c11,	// (0x0002aaf9) fep_vkb_candidate_drop_down_list_pane

0x6039,	// (0x0002af21) fep_vkb_candidate_pane_g3

0x6041,	// (0x0002af29) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00034a17) fep_vkb_candidate_pane_g

0x5d17,	// (0x0002abff) cell_hwr_candidate_pane_g1_ParamLimits

0x6058,	// (0x0002af40) cell_hwr_candidate_pane_g3_ParamLimits

0x6058,	// (0x0002af40) cell_hwr_candidate_pane_g3

0x6079,	// (0x0002af61) cell_hwr_candidate_pane_g4_ParamLimits

0x6079,	// (0x0002af61) cell_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x00034a31) cell_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x00034a31) cell_hwr_candidate_pane_g

0x609a,	// (0x0002af82) cell_vkb_candidate_pane_g3_ParamLimits

0x609a,	// (0x0002af82) cell_vkb_candidate_pane_g3

0x60b5,	// (0x0002af9d) cell_vkb_candidate_pane_g4_ParamLimits

0x60b5,	// (0x0002af9d) cell_vkb_candidate_pane_g4

0x61a9,	// (0x0002b091) cell_app_pane_cp2_g1_ParamLimits

0x61a9,	// (0x0002b091) cell_app_pane_cp2_g1

0x61c7,	// (0x0002b0af) cell_app_pane_cp2_g2_ParamLimits

0x61c7,	// (0x0002b0af) cell_app_pane_cp2_g2

0x0001,

0xfb93,	// (0x00034a7b) cell_app_pane_cp2_g_ParamLimits

0xfb93,	// (0x00034a7b) cell_app_pane_cp2_g

0x61d3,	// (0x0002b0bb) cell_app_pane_cp2_t1_ParamLimits

0x61d3,	// (0x0002b0bb) cell_app_pane_cp2_t1

0xd33b,	// (0x00032223) grid_highlight_pane_cp1_ParamLimits

0xd33b,	// (0x00032223) grid_highlight_pane_cp1

0x1d96,	// (0x00026c7e) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d96,	// (0x00026c7e) cell_hwr_candidate_pane_cp1

0x5d17,	// (0x0002abff) fep_hwr_candidate_drop_down_list_pane_g1

0x61e5,	// (0x0002b0cd) fep_hwr_candidate_drop_down_list_pane_g2

0x61f2,	// (0x0002b0da) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x00034a80) fep_hwr_candidate_drop_down_list_pane_g

0x1dba,	// (0x00026ca2) fep_hwr_candidate_drop_down_list_scroll_pane

0x1dc3,	// (0x00026cab) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1dc3,	// (0x00026cab) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1dd0,	// (0x00026cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1dd0,	// (0x00026cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1ddd,	// (0x00026cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ddd,	// (0x00026cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x609a,	// (0x0002af82) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x609a,	// (0x0002af82) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x60b5,	// (0x0002af9d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x60b5,	// (0x0002af9d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1dea,	// (0x00026cd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1dea,	// (0x00026cd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e05,	// (0x00026ced) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e05,	// (0x00026ced) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e20,	// (0x00026d08) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e20,	// (0x00026d08) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9f,	// (0x00034a87) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9f,	// (0x00034a87) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x61ff,	// (0x0002b0e7) cell_vkb_candidate_pane_cp1_ParamLimits

0x61ff,	// (0x0002b0e7) cell_vkb_candidate_pane_cp1

0x5d17,	// (0x0002abff) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5d17,	// (0x0002abff) fep_vkb_candidate_drop_down_list_pane_g1

0x61e5,	// (0x0002b0cd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x61e5,	// (0x0002b0cd) fep_vkb_candidate_drop_down_list_pane_g2

0x61f2,	// (0x0002b0da) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x61f2,	// (0x0002b0da) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x00034a80) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb98,	// (0x00034a80) fep_vkb_candidate_drop_down_list_pane_g

0x6225,	// (0x0002b10d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6225,	// (0x0002b10d) fep_vkb_candidate_drop_down_list_scroll_pane

0x6232,	// (0x0002b11a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6232,	// (0x0002b11a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x623f,	// (0x0002b127) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x623f,	// (0x0002b127) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x624b,	// (0x0002b133) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x624b,	// (0x0002b133) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6058,	// (0x0002af40) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6058,	// (0x0002af40) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6079,	// (0x0002af61) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6079,	// (0x0002af61) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6257,	// (0x0002b13f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6257,	// (0x0002b13f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6278,	// (0x0002b160) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6278,	// (0x0002b160) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6299,	// (0x0002b181) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6299,	// (0x0002b181) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x00034a98) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x00034a98) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa4f3,	// (0x0002f3db) title_pane_g1_ParamLimits

0xa506,	// (0x0002f3ee) title_pane_g2_ParamLimits

0xf529,	// (0x00034411) title_pane_g_ParamLimits

0x0696,	// (0x0002557e) aid_call2_pane

0x069e,	// (0x00025586) aid_call_pane

0x06a6,	// (0x0002558e) popup_clock_analogue_window_g1

0x06a6,	// (0x0002558e) popup_clock_analogue_window_g2

0x06ae,	// (0x00025596) popup_clock_analogue_window_g3

0x06b7,	// (0x0002559f) popup_clock_analogue_window_g4

0xcc93,	// (0x00031b7b) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x000345bb) popup_clock_analogue_window_g

0x06bf,	// (0x000255a7) popup_clock_analogue_window_t1

0x076c,	// (0x00025654) clock_digital_number_pane_ParamLimits

0x076c,	// (0x00025654) clock_digital_number_pane

0x0778,	// (0x00025660) clock_digital_number_pane_cp02_ParamLimits

0x0778,	// (0x00025660) clock_digital_number_pane_cp02

0x0784,	// (0x0002566c) clock_digital_number_pane_cp03_ParamLimits

0x0784,	// (0x0002566c) clock_digital_number_pane_cp03

0x0790,	// (0x00025678) clock_digital_number_pane_cp04_ParamLimits

0x0790,	// (0x00025678) clock_digital_number_pane_cp04

0x079c,	// (0x00025684) clock_digital_separator_pane_ParamLimits

0x079c,	// (0x00025684) clock_digital_separator_pane

0x07a8,	// (0x00025690) popup_clock_digital_window_t1_ParamLimits

0x07a8,	// (0x00025690) popup_clock_digital_window_t1

0xcc93,	// (0x00031b7b) clock_digital_number_pane_g1

0xcc93,	// (0x00031b7b) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x000345c6) clock_digital_number_pane_g

0xcc93,	// (0x00031b7b) clock_digital_separator_pane_g1

0xcc93,	// (0x00031b7b) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x000345c6) clock_digital_separator_pane_g

0xb4bf,	// (0x000303a7) aid_fill_nsta_ParamLimits

0xb5f7,	// (0x000304df) indicator_nsta_pane_ParamLimits

0x3234,	// (0x0002811c) popup_clock_analogue_window

0x3234,	// (0x0002811c) popup_clock_digital_window

0xc05d,	// (0x00030f45) grid_indicator_nsta_pane_ParamLimits

0x54f1,	// (0x0002a3d9) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x0003496a) clock_nsta_pane_t

0x047f,	// (0x00025367) aid_size_max_handle

0xaa2b,	// (0x0002f913) aid_size_min_handle

0x2bf4,	// (0x00027adc) editor_scroll_pane

0x62b4,	// (0x0002b19c) ex_editor_pane

0xd477,	// (0x0003235f) scroll_pane_cp13

0xd2da,	// (0x000321c2) scroll_pane_cp14

0x06f4,	// (0x000255dc) scroll_pane_cp36

0xaab8,	// (0x0002f9a0) list_single_graphic_hl_pane_cp2_ParamLimits

0xaab8,	// (0x0002f9a0) list_single_graphic_hl_pane_cp2

0xbeea,	// (0x00030dd2) list_single_graphic_hl_pane_ParamLimits

0xbeea,	// (0x00030dd2) list_single_graphic_hl_pane

0xf275,	// (0x0003415d) aid_size_min_hl_cp1

0x62bc,	// (0x0002b1a4) list_highlight_pane_cp34_ParamLimits

0x62bc,	// (0x0002b1a4) list_highlight_pane_cp34

0x62cd,	// (0x0002b1b5) list_single_graphic_hl_pane_g1_ParamLimits

0x62cd,	// (0x0002b1b5) list_single_graphic_hl_pane_g1

0xa0da,	// (0x0002efc2) list_single_graphic_hl_pane_g2_ParamLimits

0xa0da,	// (0x0002efc2) list_single_graphic_hl_pane_g2

0xa0da,	// (0x0002efc2) list_single_graphic_hl_pane_g3_ParamLimits

0xa0da,	// (0x0002efc2) list_single_graphic_hl_pane_g3

0xa0e6,	// (0x0002efce) list_single_graphic_hl_pane_g4_ParamLimits

0xa0e6,	// (0x0002efce) list_single_graphic_hl_pane_g4

0xa0f2,	// (0x0002efda) list_single_graphic_hl_pane_g5_ParamLimits

0xa0f2,	// (0x0002efda) list_single_graphic_hl_pane_g5

0x0004,

0xfbc1,	// (0x00034aa9) list_single_graphic_hl_pane_g_ParamLimits

0xfbc1,	// (0x00034aa9) list_single_graphic_hl_pane_g

0xa106,	// (0x0002efee) list_single_graphic_hl_pane_t1_ParamLimits

0xa106,	// (0x0002efee) list_single_graphic_hl_pane_t1

0x62da,	// (0x0002b1c2) aid_size_min_hl_cp2

0x62e3,	// (0x0002b1cb) list_highlight_pane_cp34_cp2_ParamLimits

0x62e3,	// (0x0002b1cb) list_highlight_pane_cp34_cp2

0x62cd,	// (0x0002b1b5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x62cd,	// (0x0002b1b5) list_single_graphic_hl_pane_g1_cp2

0x62f0,	// (0x0002b1d8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x62f0,	// (0x0002b1d8) list_single_graphic_hl_pane_g2_cp2

0x62fc,	// (0x0002b1e4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x62fc,	// (0x0002b1e4) list_single_graphic_hl_pane_g3_cp2

0x630a,	// (0x0002b1f2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x630a,	// (0x0002b1f2) list_single_graphic_hl_pane_g4_cp2

0x6316,	// (0x0002b1fe) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6316,	// (0x0002b1fe) list_single_graphic_hl_pane_g5_cp2

0xac9b,	// (0x0002fb83) control_pane_g4_ParamLimits

0xac9b,	// (0x0002fb83) control_pane_g4

0x2f1b,	// (0x00027e03) bg_popup_sub_pane_cp10_ParamLimits

0x5aa6,	// (0x0002a98e) list_choice_list_pane_ParamLimits

0x5ab5,	// (0x0002a99d) scroll_pane_cp23

0xce2c,	// (0x00031d14) bg_popup_preview_window_pane_cp02_ParamLimits

0x6126,	// (0x0002b00e) list_preview_fixed_pane_ParamLimits

0x613c,	// (0x0002b024) list_preview_fixed_pane_cp_ParamLimits

0x613c,	// (0x0002b024) list_preview_fixed_pane_cp

0x6148,	// (0x0002b030) popup_preview_fixed_window_g1_ParamLimits

0x6148,	// (0x0002b030) popup_preview_fixed_window_g1

0x6154,	// (0x0002b03c) popup_preview_fixed_window_g2_ParamLimits

0x6154,	// (0x0002b03c) popup_preview_fixed_window_g2

0x0002,

0xfb50,	// (0x00034a38) popup_preview_fixed_window_g_ParamLimits

0xfb50,	// (0x00034a38) popup_preview_fixed_window_g

0x0316,	// (0x000251fe) aid_navi_side_left_pane_ParamLimits

0x032b,	// (0x00025213) aid_navi_side_right_pane_ParamLimits

0x0343,	// (0x0002522b) navi_icon_pane_stacon_ParamLimits

0x0357,	// (0x0002523f) navi_navi_pane_stacon_ParamLimits

0x0343,	// (0x0002522b) navi_text_pane_stacon_ParamLimits

0xcc89,	// (0x00031b71) main_text_info_pane

0x6340,	// (0x0002b228) listscroll_text_info_pane

0x6348,	// (0x0002b230) list_text_info_pane_ParamLimits

0x6348,	// (0x0002b230) list_text_info_pane

0x6357,	// (0x0002b23f) scroll_pane_cp24_ParamLimits

0x6357,	// (0x0002b23f) scroll_pane_cp24

0xc3ec,	// (0x000312d4) list_text_info_pane_t1_ParamLimits

0xc3ec,	// (0x000312d4) list_text_info_pane_t1

0xadb2,	// (0x0002fc9a) popup_fast_swap2_window_ParamLimits

0xadb2,	// (0x0002fc9a) popup_fast_swap2_window

0x639a,	// (0x0002b282) aid_size_cell_fast2

0xcc89,	// (0x00031b71) bg_popup_window_pane_cp17

0x63a4,	// (0x0002b28c) heading_pane_cp2

0x63ac,	// (0x0002b294) listscroll_fast2_pane

0x63b4,	// (0x0002b29c) grid_fast2_pane

0x63be,	// (0x0002b2a6) listscroll_fast2_pane_g1

0x63c8,	// (0x0002b2b0) listscroll_fast2_pane_g2

0x0001,

0xfbcc,	// (0x00034ab4) listscroll_fast2_pane_g

0xd477,	// (0x0003235f) scroll_pane_cp26

0x63d2,	// (0x0002b2ba) cell_fast2_pane_ParamLimits

0x63d2,	// (0x0002b2ba) cell_fast2_pane

0x63e9,	// (0x0002b2d1) cell_fast2_pane_g1

0x63f2,	// (0x0002b2da) cell_fast2_pane_g2

0x63fb,	// (0x0002b2e3) cell_fast2_pane_g3

0x0002,

0xfbd1,	// (0x00034ab9) cell_fast2_pane_g

0xd0a1,	// (0x00031f89) grid_highlight_pane_cp9

0xd0b6,	// (0x00031f9e) main_eswt_pane_ParamLimits

0xd0b6,	// (0x00031f9e) main_eswt_pane

0x636c,	// (0x0002b254) list_single_text_info_pane

0x6403,	// (0x0002b2eb) eswt_ctrl_button_pane

0x6403,	// (0x0002b2eb) eswt_ctrl_canvas_pane

0x640b,	// (0x0002b2f3) eswt_ctrl_combo_pane

0x6403,	// (0x0002b2eb) eswt_ctrl_default_pane

0x6403,	// (0x0002b2eb) eswt_ctrl_label_pane

0x6413,	// (0x0002b2fb) eswt_ctrl_wait_pane

0x641b,	// (0x0002b303) eswt_shell_pane

0xcc89,	// (0x00031b71) listscroll_eswt_app_pane

0x643b,	// (0x0002b323) popup_eswt_tasktip_window_ParamLimits

0x643b,	// (0x0002b323) popup_eswt_tasktip_window

0x34c5,	// (0x000283ad) bg_popup_window_pane_cp18

0x6454,	// (0x0002b33c) eswt_control_pane_g1_ParamLimits

0x6454,	// (0x0002b33c) eswt_control_pane_g1

0x6461,	// (0x0002b349) eswt_control_pane_g2_ParamLimits

0x6461,	// (0x0002b349) eswt_control_pane_g2

0x646e,	// (0x0002b356) eswt_control_pane_g3_ParamLimits

0x646e,	// (0x0002b356) eswt_control_pane_g3

0x647b,	// (0x0002b363) eswt_control_pane_g4_ParamLimits

0x647b,	// (0x0002b363) eswt_control_pane_g4

0x0003,

0xfbd8,	// (0x00034ac0) eswt_control_pane_g_ParamLimits

0xfbd8,	// (0x00034ac0) eswt_control_pane_g

0xd33b,	// (0x00032223) bg_button_pane_ParamLimits

0xd33b,	// (0x00032223) bg_button_pane

0xd0b6,	// (0x00031f9e) common_borders_pane_copy2_ParamLimits

0xd0b6,	// (0x00031f9e) common_borders_pane_copy2

0x6488,	// (0x0002b370) control_button_pane_g1_ParamLimits

0x6488,	// (0x0002b370) control_button_pane_g1

0x6494,	// (0x0002b37c) control_button_pane_g2_ParamLimits

0x6494,	// (0x0002b37c) control_button_pane_g2

0x64a0,	// (0x0002b388) control_button_pane_g3_ParamLimits

0x64a0,	// (0x0002b388) control_button_pane_g3

0x0002,

0xfbe1,	// (0x00034ac9) control_button_pane_g_ParamLimits

0xfbe1,	// (0x00034ac9) control_button_pane_g

0x64b4,	// (0x0002b39c) control_button_pane_t1

0x64c2,	// (0x0002b3aa) control_button_pane_t2

0x0001,

0xfbe8,	// (0x00034ad0) control_button_pane_t

0x3451,	// (0x00028339) bg_button_pane_g1

0x3459,	// (0x00028341) bg_button_pane_g2

0x3461,	// (0x00028349) bg_button_pane_g3

0x3469,	// (0x00028351) bg_button_pane_g4

0x3471,	// (0x00028359) bg_button_pane_g5

0x3479,	// (0x00028361) bg_button_pane_g6

0x3481,	// (0x00028369) bg_button_pane_g7

0x3489,	// (0x00028371) bg_button_pane_g8

0x3491,	// (0x00028379) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00034724) bg_button_pane_g

0x5a61,	// (0x0002a949) common_borders_pane_ParamLimits

0x5a61,	// (0x0002a949) common_borders_pane

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy1_ParamLimits

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy1

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy1_ParamLimits

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy1

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy1_ParamLimits

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy1

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy1_ParamLimits

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy1

0x5a9c,	// (0x0002a984) bg_eswt_ctrl_canvas_pane_g1

0x5a61,	// (0x0002a949) common_borders_pane_cp2_ParamLimits

0x5a61,	// (0x0002a949) common_borders_pane_cp2

0x5a61,	// (0x0002a949) common_borders_pane_cp3_ParamLimits

0x5a61,	// (0x0002a949) common_borders_pane_cp3

0x64d0,	// (0x0002b3b8) separator_horizontal_pane

0x64d8,	// (0x0002b3c0) separator_vertical_pane

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy2_ParamLimits

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy2

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy2_ParamLimits

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy2

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy2_ParamLimits

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy2

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy2_ParamLimits

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy2

0xcc89,	// (0x00031b71) common_borders_pane_cp4

0x64e1,	// (0x0002b3c9) separator_horizontal_pane_g1

0x64ea,	// (0x0002b3d2) separator_horizontal_pane_g2

0x64f3,	// (0x0002b3db) separator_horizontal_pane_g3

0x0002,

0xfbed,	// (0x00034ad5) separator_horizontal_pane_g

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy3_ParamLimits

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy3

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy3_ParamLimits

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy3

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy3_ParamLimits

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy3

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy3_ParamLimits

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy3

0xcc89,	// (0x00031b71) common_borders_pane_cp5

0x64fc,	// (0x0002b3e4) separator_vertical_pane_g1

0x6505,	// (0x0002b3ed) separator_vertical_pane_g2

0x650e,	// (0x0002b3f6) separator_vertical_pane_g3

0x0002,

0xfbf4,	// (0x00034adc) separator_vertical_pane_g

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy4_ParamLimits

0x6454,	// (0x0002b33c) eswt_control_pane_g1_copy4

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy4_ParamLimits

0x6461,	// (0x0002b349) eswt_control_pane_g2_copy4

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy4_ParamLimits

0x646e,	// (0x0002b356) eswt_control_pane_g3_copy4

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy4_ParamLimits

0x647b,	// (0x0002b363) eswt_control_pane_g4_copy4

0xc40e,	// (0x000312f6) eswt_ctrl_combo_button_pane

0xc416,	// (0x000312fe) eswt_ctrl_input_pane

0xc41e,	// (0x00031306) popup_choice_list_window_cp70

0xc426,	// (0x0003130e) eswt_ctrl_input_pane_t1

0xcc89,	// (0x00031b71) input_focus_pane_cp70

0x5a61,	// (0x0002a949) bg_button_pane_cp70_ParamLimits

0x5a61,	// (0x0002a949) bg_button_pane_cp70

0xc434,	// (0x0003131c) eswt_ctrl_combo_button_pane_g1

0x6545,	// (0x0002b42d) wait_bar_pane_cp70

0x34c5,	// (0x000283ad) bg_popup_window_pane_cp70_ParamLimits

0x34c5,	// (0x000283ad) bg_popup_window_pane_cp70

0x654d,	// (0x0002b435) popup_eswt_tasktip_window_t1

0x6563,	// (0x0002b44b) wait_bar_pane_cp71_ParamLimits

0x6563,	// (0x0002b44b) wait_bar_pane_cp71

0x656f,	// (0x0002b457) grid_eswt_app_pane

0x04e3,	// (0x000253cb) scroll_pane_cp70

0xc43c,	// (0x00031324) cell_eswt_app_pane_ParamLimits

0xc43c,	// (0x00031324) cell_eswt_app_pane

0xc46e,	// (0x00031356) cell_eswt_app_pane_g1_ParamLimits

0xc46e,	// (0x00031356) cell_eswt_app_pane_g1

0xc49d,	// (0x00031385) cell_eswt_app_pane_g2_ParamLimits

0xc49d,	// (0x00031385) cell_eswt_app_pane_g2

0x0001,

0xfbfb,	// (0x00034ae3) cell_eswt_app_pane_g_ParamLimits

0xfbfb,	// (0x00034ae3) cell_eswt_app_pane_g

0xc4c6,	// (0x000313ae) cell_eswt_app_pane_t1_ParamLimits

0xc4c6,	// (0x000313ae) cell_eswt_app_pane_t1

0x6634,	// (0x0002b51c) grid_highlight_pane_cp70_ParamLimits

0x6634,	// (0x0002b51c) grid_highlight_pane_cp70

0x0dbb,	// (0x00025ca3) set_content_pane_g1

0xac7f,	// (0x0002fb67) status_small_volume_pane

0xc4f8,	// (0x000313e0) status_small_volume_pane_g1

0xc500,	// (0x000313e8) volume_small2_pane

0xc509,	// (0x000313f1) volume_small2_pane_g1

0xc512,	// (0x000313fa) volume_small2_pane_g2

0xc51b,	// (0x00031403) volume_small2_pane_g3

0xc524,	// (0x0003140c) volume_small2_pane_g4

0xc52d,	// (0x00031415) volume_small2_pane_g5

0xc536,	// (0x0003141e) volume_small2_pane_g6

0xc53f,	// (0x00031427) volume_small2_pane_g7

0xc548,	// (0x00031430) volume_small2_pane_g8

0xc551,	// (0x00031439) volume_small2_pane_g9

0xc55a,	// (0x00031442) volume_small2_pane_g10

0x0009,

0xfc00,	// (0x00034ae8) volume_small2_pane_g

0x5e6b,	// (0x0002ad53) fep_vkb_top_text_pane_g1_ParamLimits

0xc394,	// (0x0003127c) fep_vkb_top_text_pane_t1_ParamLimits

0x6160,	// (0x0002b048) popup_preview_fixed_window_g3_ParamLimits

0x6160,	// (0x0002b048) popup_preview_fixed_window_g3

0xb452,	// (0x0003033a) popup_toolbar_trans_pane

0xbd54,	// (0x00030c3c) aid_height_set_list_ParamLimits

0x482e,	// (0x00029716) aid_size_parent_ParamLimits

0x2f1b,	// (0x00027e03) list_highlight_pane_cp2_ParamLimits

0x0dbb,	// (0x00025ca3) set_content_pane_g1_ParamLimits

0xbefe,	// (0x00030de6) list_single_image_pane_ParamLimits

0xbefe,	// (0x00030de6) list_single_image_pane

0xc563,	// (0x0003144b) aid_size_cell_image_ParamLimits

0xc563,	// (0x0003144b) aid_size_cell_image

0xc570,	// (0x00031458) grid_single_image_pane_ParamLimits

0xc570,	// (0x00031458) grid_single_image_pane

0xd349,	// (0x00032231) list_single_image_pane_g1_ParamLimits

0xd349,	// (0x00032231) list_single_image_pane_g1

0xd355,	// (0x0003223d) list_single_image_pane_g2_ParamLimits

0xd355,	// (0x0003223d) list_single_image_pane_g2

0x0001,

0xfc15,	// (0x00034afd) list_single_image_pane_g_ParamLimits

0xfc15,	// (0x00034afd) list_single_image_pane_g

0x665b,	// (0x0002b543) list_single_image_pane_t1_ParamLimits

0x665b,	// (0x0002b543) list_single_image_pane_t1

0xc57e,	// (0x00031466) cell_image_list_pane_ParamLimits

0xc57e,	// (0x00031466) cell_image_list_pane

0xc594,	// (0x0003147c) cell_image_list_pane_g1

0xc59d,	// (0x00031485) cell_image_list_pane_g2

0x0001,

0xfc1a,	// (0x00034b02) cell_image_list_pane_g

0x669b,	// (0x0002b583) aid_size_cell_tb_trans_pane

0xd33b,	// (0x00032223) bg_tb_trans_pane

0x66ad,	// (0x0002b595) grid_tb_trans_pane

0x3451,	// (0x00028339) bg_tb_trans_pane_g1

0x3459,	// (0x00028341) bg_tb_trans_pane_g2

0x3461,	// (0x00028349) bg_tb_trans_pane_g3

0x3469,	// (0x00028351) bg_tb_trans_pane_g4

0x3471,	// (0x00028359) bg_tb_trans_pane_g5

0x3489,	// (0x00028371) bg_tb_trans_pane_g6

0x3491,	// (0x00028379) bg_tb_trans_pane_g7

0x3479,	// (0x00028361) bg_tb_trans_pane_g8

0x3481,	// (0x00028369) bg_tb_trans_pane_g9

0x0008,

0xfc1f,	// (0x00034b07) bg_tb_trans_pane_g

0x66c1,	// (0x0002b5a9) cell_toolbar_trans_pane_ParamLimits

0x66c1,	// (0x0002b5a9) cell_toolbar_trans_pane

0x5a9c,	// (0x0002a984) cell_toolbar_trans_pane_g1

0xc13e,	// (0x00031026) list_form2_midp_pane_t1

0xc14c,	// (0x00031034) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x000349b0) list_form2_midp_pane_t

0x56f0,	// (0x0002a5d8) scroll_pane_cp51_ParamLimits

0x58b7,	// (0x0002a79f) form2_midp_wait_pane_g1

0x58c0,	// (0x0002a7a8) form2_midp_wait_pane_g2

0x58c9,	// (0x0002a7b1) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x000349c5) form2_midp_wait_pane_g

0xccf9,	// (0x00031be1) list_highlight_pane_cp21_ParamLimits

0x5902,	// (0x0002a7ea) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5911,	// (0x0002a7f9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeda2,	// (0x00033c8a) list_single_2graphic_im_pane_ParamLimits

0xeda2,	// (0x00033c8a) list_single_2graphic_im_pane

0xc5a6,	// (0x0003148e) list_single_2graphic_im_pane_g1_ParamLimits

0xc5a6,	// (0x0003148e) list_single_2graphic_im_pane_g1

0xc5b7,	// (0x0003149f) list_single_2graphic_im_pane_g2_ParamLimits

0xc5b7,	// (0x0003149f) list_single_2graphic_im_pane_g2

0xc5c3,	// (0x000314ab) list_single_2graphic_im_pane_g3_ParamLimits

0xc5c3,	// (0x000314ab) list_single_2graphic_im_pane_g3

0x0003,

0xfc32,	// (0x00034b1a) list_single_2graphic_im_pane_g_ParamLimits

0xfc32,	// (0x00034b1a) list_single_2graphic_im_pane_g

0xc5d7,	// (0x000314bf) list_single_2graphic_im_pane_t1_ParamLimits

0xc5d7,	// (0x000314bf) list_single_2graphic_im_pane_t1

0x616c,	// (0x0002b054) list_single_graphic_2heading_pane_fp_ParamLimits

0x616c,	// (0x0002b054) list_single_graphic_2heading_pane_fp

0xf0e7,	// (0x00033fcf) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf0e7,	// (0x00033fcf) list_single_graphic_2heading_pane_fp_g1

0x6185,	// (0x0002b06d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6185,	// (0x0002b06d) list_single_graphic_2heading_pane_fp_g2

0xf005,	// (0x00033eed) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf005,	// (0x00033eed) list_single_graphic_2heading_pane_fp_g3

0xf0bc,	// (0x00033fa4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf0bc,	// (0x00033fa4) list_single_graphic_2heading_pane_fp_g4

0x6191,	// (0x0002b079) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6191,	// (0x0002b079) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034a48) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034a48) list_single_graphic_2heading_pane_fp_g

0xf27e,	// (0x00034166) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf27e,	// (0x00034166) list_single_graphic_2heading_pane_fp_t1

0xf11f,	// (0x00034007) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf11f,	// (0x00034007) list_single_graphic_2heading_pane_fp_t2

0xf294,	// (0x0003417c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf294,	// (0x0003417c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3b,	// (0x00034b23) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3b,	// (0x00034b23) list_single_graphic_2heading_pane_fp_t

0x5b2d,	// (0x0002aa15) fep_hwr_write_pane_g5_ParamLimits

0x5b2d,	// (0x0002aa15) fep_hwr_write_pane_g5

0x5b39,	// (0x0002aa21) fep_hwr_write_pane_g6_ParamLimits

0x5b39,	// (0x0002aa21) fep_hwr_write_pane_g6

0x641b,	// (0x0002b303) eswt_shell_pane_ParamLimits

0x34c5,	// (0x000283ad) bg_popup_window_pane_cp18_ParamLimits

0x644c,	// (0x0002b334) heading_pane_cp70

0x654d,	// (0x0002b435) popup_eswt_tasktip_window_t1_ParamLimits

0xb51c,	// (0x00030404) aid_touch_tab_arrow_left

0xb532,	// (0x0003041a) aid_touch_tab_arrow_right

0xa52a,	// (0x0002f412) title_pane_g3_ParamLimits

0xa52a,	// (0x0002f412) title_pane_g3

0xd2fa,	// (0x000321e2) set_value_pane_g1

0xb452,	// (0x0003033a) popup_toolbar_trans_pane_ParamLimits

0x669b,	// (0x0002b583) aid_size_cell_tb_trans_pane_ParamLimits

0xd33b,	// (0x00032223) bg_tb_trans_pane_ParamLimits

0x66ad,	// (0x0002b595) grid_tb_trans_pane_ParamLimits

0xce2c,	// (0x00031d14) cont_note_pane_ParamLimits

0xce2c,	// (0x00031d14) cont_note_pane

0xd0b6,	// (0x00031f9e) cont_snote2_single_text_pane_ParamLimits

0xd0b6,	// (0x00031f9e) cont_snote2_single_text_pane

0xd0b6,	// (0x00031f9e) cont_snote2_single_graphic_pane_ParamLimits

0xd0b6,	// (0x00031f9e) cont_snote2_single_graphic_pane

0x3ab7,	// (0x0002899f) cont_note_wait_pane_ParamLimits

0x3ab7,	// (0x0002899f) cont_note_wait_pane

0x3ab7,	// (0x0002899f) cont_note_image_pane_ParamLimits

0x3ab7,	// (0x0002899f) cont_note_image_pane

0x6755,	// (0x0002b63d) popup_note2_window_g1_ParamLimits

0x6755,	// (0x0002b63d) popup_note2_window_g1

0x6786,	// (0x0002b66e) popup_note2_window_t1_ParamLimits

0x6786,	// (0x0002b66e) popup_note2_window_t1

0x67cb,	// (0x0002b6b3) popup_note2_window_t2_ParamLimits

0x67cb,	// (0x0002b6b3) popup_note2_window_t2

0x6810,	// (0x0002b6f8) popup_note2_window_t3_ParamLimits

0x6810,	// (0x0002b6f8) popup_note2_window_t3

0x6855,	// (0x0002b73d) popup_note2_window_t4_ParamLimits

0x6855,	// (0x0002b73d) popup_note2_window_t4

0xceb0,	// (0x00031d98) popup_note2_window_t5_ParamLimits

0xceb0,	// (0x00031d98) popup_note2_window_t5

0x0004,

0xfc47,	// (0x00034b2f) popup_note2_window_t_ParamLimits

0xfc47,	// (0x00034b2f) popup_note2_window_t

0x6884,	// (0x0002b76c) popup_note2_image_window_g1_ParamLimits

0x6884,	// (0x0002b76c) popup_note2_image_window_g1

0x6890,	// (0x0002b778) popup_note2_image_window_g2_ParamLimits

0x6890,	// (0x0002b778) popup_note2_image_window_g2

0x0001,

0xfc52,	// (0x00034b3a) popup_note2_image_window_g_ParamLimits

0xfc52,	// (0x00034b3a) popup_note2_image_window_g

0x68a2,	// (0x0002b78a) popup_note2_image_window_t1_ParamLimits

0x68a2,	// (0x0002b78a) popup_note2_image_window_t1

0x68ba,	// (0x0002b7a2) popup_note2_image_window_t2_ParamLimits

0x68ba,	// (0x0002b7a2) popup_note2_image_window_t2

0x68d2,	// (0x0002b7ba) popup_note2_image_window_t3_ParamLimits

0x68d2,	// (0x0002b7ba) popup_note2_image_window_t3

0x0002,

0xfc57,	// (0x00034b3f) popup_note2_image_window_t_ParamLimits

0xfc57,	// (0x00034b3f) popup_note2_image_window_t

0x3ac5,	// (0x000289ad) popup_note2_wait_window_g1_ParamLimits

0x3ac5,	// (0x000289ad) popup_note2_wait_window_g1

0x68ee,	// (0x0002b7d6) popup_note2_wait_window_g2_ParamLimits

0x68ee,	// (0x0002b7d6) popup_note2_wait_window_g2

0x3add,	// (0x000289c5) popup_note2_wait_window_g3_ParamLimits

0x3add,	// (0x000289c5) popup_note2_wait_window_g3

0x0002,

0xfc5e,	// (0x00034b46) popup_note2_wait_window_g_ParamLimits

0xfc5e,	// (0x00034b46) popup_note2_wait_window_g

0x68fa,	// (0x0002b7e2) popup_note2_wait_window_t1_ParamLimits

0x68fa,	// (0x0002b7e2) popup_note2_wait_window_t1

0x6918,	// (0x0002b800) popup_note2_wait_window_t2_ParamLimits

0x6918,	// (0x0002b800) popup_note2_wait_window_t2

0x6936,	// (0x0002b81e) popup_note2_wait_window_t3_ParamLimits

0x6936,	// (0x0002b81e) popup_note2_wait_window_t3

0x6948,	// (0x0002b830) popup_note2_wait_window_t4_ParamLimits

0x6948,	// (0x0002b830) popup_note2_wait_window_t4

0x0003,

0xfc65,	// (0x00034b4d) popup_note2_wait_window_t_ParamLimits

0xfc65,	// (0x00034b4d) popup_note2_wait_window_t

0x695a,	// (0x0002b842) wait_bar2_pane_ParamLimits

0x695a,	// (0x0002b842) wait_bar2_pane

0x6972,	// (0x0002b85a) popup_snote2_single_text_window_g1_ParamLimits

0x6972,	// (0x0002b85a) popup_snote2_single_text_window_g1

0x699a,	// (0x0002b882) popup_snote2_single_text_window_t1_ParamLimits

0x699a,	// (0x0002b882) popup_snote2_single_text_window_t1

0x69e6,	// (0x0002b8ce) popup_snote2_single_text_window_t2_ParamLimits

0x69e6,	// (0x0002b8ce) popup_snote2_single_text_window_t2

0x6a32,	// (0x0002b91a) popup_snote2_single_text_window_t3_ParamLimits

0x6a32,	// (0x0002b91a) popup_snote2_single_text_window_t3

0x6a73,	// (0x0002b95b) popup_snote2_single_text_window_t4_ParamLimits

0x6a73,	// (0x0002b95b) popup_snote2_single_text_window_t4

0x6aa9,	// (0x0002b991) popup_snote2_single_text_window_t5_ParamLimits

0x6aa9,	// (0x0002b991) popup_snote2_single_text_window_t5

0x0004,

0xfc6e,	// (0x00034b56) popup_snote2_single_text_window_t_ParamLimits

0xfc6e,	// (0x00034b56) popup_snote2_single_text_window_t

0x6ad4,	// (0x0002b9bc) popup_snote2_single_graphic_window_g1_ParamLimits

0x6ad4,	// (0x0002b9bc) popup_snote2_single_graphic_window_g1

0x6afc,	// (0x0002b9e4) popup_snote2_single_graphic_window_g2_ParamLimits

0x6afc,	// (0x0002b9e4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc79,	// (0x00034b61) popup_snote2_single_graphic_window_g_ParamLimits

0xfc79,	// (0x00034b61) popup_snote2_single_graphic_window_g

0x6b24,	// (0x0002ba0c) popup_snote2_single_graphic_window_t1_ParamLimits

0x6b24,	// (0x0002ba0c) popup_snote2_single_graphic_window_t1

0x6b70,	// (0x0002ba58) popup_snote2_single_graphic_window_t2_ParamLimits

0x6b70,	// (0x0002ba58) popup_snote2_single_graphic_window_t2

0x6a32,	// (0x0002b91a) popup_snote2_single_graphic_window_t3_ParamLimits

0x6a32,	// (0x0002b91a) popup_snote2_single_graphic_window_t3

0x6a73,	// (0x0002b95b) popup_snote2_single_graphic_window_t4_ParamLimits

0x6a73,	// (0x0002b95b) popup_snote2_single_graphic_window_t4

0x6aa9,	// (0x0002b991) popup_snote2_single_graphic_window_t5_ParamLimits

0x6aa9,	// (0x0002b991) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7e,	// (0x00034b66) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7e,	// (0x00034b66) popup_snote2_single_graphic_window_t

0x55a0,	// (0x0002a488) clock_nsta_pane_cp2_t1

0x55a0,	// (0x0002a488) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00034986) clock_nsta_pane_cp2_t

0xebaf,	// (0x00033a97) form_field_data_wide_pane_g1_ParamLimits

0xd349,	// (0x00032231) form_field_data_wide_pane_g2_ParamLimits

0xd349,	// (0x00032231) form_field_data_wide_pane_g2

0xd355,	// (0x0003223d) form_field_data_wide_pane_g3_ParamLimits

0xd355,	// (0x0003223d) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003453e) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003453e) form_field_data_wide_pane_g

0xc047,	// (0x00030f2f) grid_touch_3_pane_ParamLimits

0xc047,	// (0x00030f2f) grid_touch_3_pane

0xc608,	// (0x000314f0) cell_touch_3_pane_ParamLimits

0xc608,	// (0x000314f0) cell_touch_3_pane

0x5a9c,	// (0x0002a984) cell_touch_3_pane_g1

0x5a9c,	// (0x0002a984) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00034a0b) cell_touch_3_pane_g

0xcf08,	// (0x00031df0) cont_query_data_pane

0xcf10,	// (0x00031df8) cont_query_data_pane_cp1

0x6bef,	// (0x0002bad7) button_value_adjust_pane_cp7

0x6bf7,	// (0x0002badf) query_popup_pane_cp3

0x0825,	// (0x0002570d) bg_popup_sub_pane_cp22_ParamLimits

0x083b,	// (0x00025723) navi_navi_volume_pane_cp2

0x0856,	// (0x0002573e) popup_side_volume_key_window_g2

0x0865,	// (0x0002574d) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x000345d4) popup_side_volume_key_window_g

0x0882,	// (0x0002576a) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x000345db) popup_side_volume_key_window_t

0x0c81,	// (0x00025b69) popup_side_volume_key_window_ParamLimits

0x9b3b,	// (0x0002ea23) list_double_graphic_pane_g4_ParamLimits

0x9b3b,	// (0x0002ea23) list_double_graphic_pane_g4

0xa080,	// (0x0002ef68) list_single_2heading_msg_pane_ParamLimits

0xa080,	// (0x0002ef68) list_single_2heading_msg_pane

0xa11c,	// (0x0002f004) list_single_2heading_msg_pane_g1_ParamLimits

0xa11c,	// (0x0002f004) list_single_2heading_msg_pane_g1

0xa128,	// (0x0002f010) list_single_2heading_msg_pane_g2_ParamLimits

0xa128,	// (0x0002f010) list_single_2heading_msg_pane_g2

0xa13b,	// (0x0002f023) list_single_2heading_msg_pane_g3_ParamLimits

0xa13b,	// (0x0002f023) list_single_2heading_msg_pane_g3

0xa147,	// (0x0002f02f) list_single_2heading_msg_pane_g4_ParamLimits

0xa147,	// (0x0002f02f) list_single_2heading_msg_pane_g4

0x0003,

0xfc89,	// (0x00034b71) list_single_2heading_msg_pane_g_ParamLimits

0xfc89,	// (0x00034b71) list_single_2heading_msg_pane_g

0xa15f,	// (0x0002f047) list_single_2heading_msg_pane_t1_ParamLimits

0xa15f,	// (0x0002f047) list_single_2heading_msg_pane_t1

0xa187,	// (0x0002f06f) list_single_2heading_msg_pane_t2_ParamLimits

0xa187,	// (0x0002f06f) list_single_2heading_msg_pane_t2

0xa1f2,	// (0x0002f0da) list_single_2heading_msg_pane_t3_ParamLimits

0xa1f2,	// (0x0002f0da) list_single_2heading_msg_pane_t3

0xf2b4,	// (0x0003419c) list_single_2heading_msg_pane_t4_ParamLimits

0xf2b4,	// (0x0003419c) list_single_2heading_msg_pane_t4

0x0003,

0xfc92,	// (0x00034b7a) list_single_2heading_msg_pane_t_ParamLimits

0xfc92,	// (0x00034b7a) list_single_2heading_msg_pane_t

0xcca7,	// (0x00031b8f) title_pane_g4_ParamLimits

0xcca7,	// (0x00031b8f) title_pane_g4

0x0267,	// (0x0002514f) title_pane_stacon_g3_ParamLimits

0x0267,	// (0x0002514f) title_pane_stacon_g3

0x6718,	// (0x0002b600) list_single_2graphic_im_pane_g4_ParamLimits

0x6718,	// (0x0002b600) list_single_2graphic_im_pane_g4

0x4527,	// (0x0002940f) popup_side_volume_key_window_cp

0x4d8b,	// (0x00029c73) main_idle_act2_pane_t1

0x16bb,	// (0x000265a3) toolbar_button_pane_g10

0xa8ab,	// (0x0002f793) popup_toolbar_window_cp1

0x5591,	// (0x0002a479) clock_nsta_pane_cp_t1

0x5591,	// (0x0002a479) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x00034981) clock_nsta_pane_cp_t

0x083b,	// (0x00025723) navi_navi_volume_pane_cp2_ParamLimits

0x084a,	// (0x00025732) popup_side_volume_key_window_g1_ParamLimits

0x0856,	// (0x0002573e) popup_side_volume_key_window_g2_ParamLimits

0x0865,	// (0x0002574d) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x000345d4) popup_side_volume_key_window_g_ParamLimits

0x1b30,	// (0x00026a18) fep_hwr_aid_pane

0xd669,	// (0x00032551) bg_fep_hwr_top_pane_g4_ParamLimits

0x5afd,	// (0x0002a9e5) fep_hwr_top_pane_g1_ParamLimits

0x5b0f,	// (0x0002a9f7) fep_hwr_top_pane_g2_ParamLimits

0x1beb,	// (0x00026ad3) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x000349d6) fep_hwr_top_pane_g_ParamLimits

0x1c00,	// (0x00026ae8) fep_hwr_top_text_pane_ParamLimits

0x42dc,	// (0x000291c4) aid_touch_tab_arrow_arrow_2

0x42e5,	// (0x000291cd) aid_touch_tab_arrow_left_2

0x1b44,	// (0x00026a2c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1b7b,	// (0x00026a63) fep_hwr_prediction_pane

0x5c65,	// (0x0002ab4d) fep_vkb_prediction_pane

0xc374,	// (0x0003125c) fep_vkb_side_pane_g3_ParamLimits

0xc374,	// (0x0003125c) fep_vkb_side_pane_g3

0x5d17,	// (0x0002abff) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x61e5,	// (0x0002b0cd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x61f2,	// (0x0002b0da) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb98,	// (0x00034a80) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6c1e,	// (0x0002bb06) fep_hwr_prediction_pane_g1

0x1ea6,	// (0x00026d8e) fep_hwr_prediction_pane_g2

0x1eae,	// (0x00026d96) fep_hwr_prediction_pane_g3

0x1eb6,	// (0x00026d9e) fep_hwr_prediction_pane_g4

0x0003,

0xfc9b,	// (0x00034b83) fep_hwr_prediction_pane_g

0x6c1e,	// (0x0002bb06) fep_vkb_prediction_pane_g1

0x6c28,	// (0x0002bb10) fep_vkb_prediction_pane_g2

0x6c30,	// (0x0002bb18) fep_vkb_prediction_pane_g3

0x6c38,	// (0x0002bb20) fep_vkb_prediction_pane_g4

0x0003,

0xfca4,	// (0x00034b8c) fep_vkb_prediction_pane_g

0x19b0,	// (0x00026898) slider_set_pane_g3

0x19c4,	// (0x000268ac) slider_set_pane_g4

0x19dc,	// (0x000268c4) slider_set_pane_g5

0x19b0,	// (0x00026898) slider_set_pane_g6

0x19f2,	// (0x000268da) slider_set_pane_g7

0x49ad,	// (0x00029895) slider_form_pane_g3

0x49b6,	// (0x0002989e) slider_form_pane_g4

0x49be,	// (0x000298a6) slider_form_pane_g5

0x49ad,	// (0x00029895) slider_form_pane_g6

0xbebd,	// (0x00030da5) slider_form_pane_g7

0x504f,	// (0x00029f37) slider_set_pane_vc_g3

0x5058,	// (0x00029f40) slider_set_pane_vc_g4

0x5061,	// (0x00029f49) slider_set_pane_vc_g5

0x504f,	// (0x00029f37) slider_set_pane_vc_g6

0x506a,	// (0x00029f52) slider_set_pane_vc_g7

0x5240,	// (0x0002a128) slider_form_pane_vc_g1

0x5249,	// (0x0002a131) slider_form_pane_vc_g2

0x5252,	// (0x0002a13a) slider_form_pane_vc_g3

0x5240,	// (0x0002a128) slider_form_pane_vc_g4

0x525b,	// (0x0002a143) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00034953) slider_form_pane_vc_g

0xcc89,	// (0x00031b71) main_idle_act3_pane

0x6c40,	// (0x0002bb28) ai3_links_pane

0xd691,	// (0x00032579) popup_ai3_data_window_ParamLimits

0xd691,	// (0x00032579) popup_ai3_data_window

0xcc89,	// (0x00031b71) grid_ai3_links_pane

0xd6af,	// (0x00032597) cell_ai3_links_pane_ParamLimits

0xd6af,	// (0x00032597) cell_ai3_links_pane

0x6c81,	// (0x0002bb69) bg_popup_sub_pane_cp11

0x6c8e,	// (0x0002bb76) cell_ai3_links_pane_g1

0xcc89,	// (0x00031b71) bg_popup_sub_pane_cp12

0x6cb3,	// (0x0002bb9b) heading_ai3_data_pane

0x6cbb,	// (0x0002bba3) list_ai3_gene_pane

0x6cc7,	// (0x0002bbaf) popup_ai3_data_window_g1

0x6ccf,	// (0x0002bbb7) heading_ai3_data_pane_g1

0x6cd7,	// (0x0002bbbf) heading_ai3_data_pane_t1

0x6ce5,	// (0x0002bbcd) list_double_ai3_gene_pane_ParamLimits

0x6ce5,	// (0x0002bbcd) list_double_ai3_gene_pane

0x6cf2,	// (0x0002bbda) list_single_ai3_gene_pane_ParamLimits

0x6cf2,	// (0x0002bbda) list_single_ai3_gene_pane

0x5a61,	// (0x0002a949) list_highlight_pane_cp7_ParamLimits

0x5a61,	// (0x0002a949) list_highlight_pane_cp7

0x6cff,	// (0x0002bbe7) list_single_a13_gene_pane_t1_ParamLimits

0x6cff,	// (0x0002bbe7) list_single_a13_gene_pane_t1

0x6d16,	// (0x0002bbfe) list_single_ai3_gene_pane_g1

0x6d1f,	// (0x0002bc07) list_single_ai3_gene_pane_g2

0x0001,

0xfcad,	// (0x00034b95) list_single_ai3_gene_pane_g

0x6d27,	// (0x0002bc0f) list_double_ai3_gene_pane_g1_ParamLimits

0x6d27,	// (0x0002bc0f) list_double_ai3_gene_pane_g1

0x6d33,	// (0x0002bc1b) list_double_ai3_gene_pane_t1_ParamLimits

0x6d33,	// (0x0002bc1b) list_double_ai3_gene_pane_t1

0x6d4f,	// (0x0002bc37) list_double_ai3_gene_pane_t2_ParamLimits

0x6d4f,	// (0x0002bc37) list_double_ai3_gene_pane_t2

0x6d64,	// (0x0002bc4c) list_double_ai3_gene_pane_t3_ParamLimits

0x6d64,	// (0x0002bc4c) list_double_ai3_gene_pane_t3

0x0002,

0xfcb2,	// (0x00034b9a) list_double_ai3_gene_pane_t_ParamLimits

0xfcb2,	// (0x00034b9a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2aa,	// (0x00034192) aid_size_min_col_2

0xc63e,	// (0x00031526) aid_size_min_msg_ParamLimits

0xc63e,	// (0x00031526) aid_size_min_msg

0xc388,	// (0x00031270) fep_vkb_top_text_pane_g2_ParamLimits

0xc388,	// (0x00031270) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00034a06) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00034a06) fep_vkb_top_text_pane_g

0xcc89,	// (0x00031b71) main_hc_apps_shell_pane

0x6d81,	// (0x0002bc69) grid_hc_apps_pane_ParamLimits

0x6d81,	// (0x0002bc69) grid_hc_apps_pane

0x6d93,	// (0x0002bc7b) list_hc_apps_pane

0x6d9b,	// (0x0002bc83) scroll_pane_cp37_ParamLimits

0x6d9b,	// (0x0002bc83) scroll_pane_cp37

0xd6c9,	// (0x000325b1) cell_hc_apps_pane_ParamLimits

0xd6c9,	// (0x000325b1) cell_hc_apps_pane

0xd78f,	// (0x00032677) cell_hc_apps_pane_g1_ParamLimits

0xd78f,	// (0x00032677) cell_hc_apps_pane_g1

0x6e87,	// (0x0002bd6f) cell_hc_apps_pane_g2_ParamLimits

0x6e87,	// (0x0002bd6f) cell_hc_apps_pane_g2

0x6ea3,	// (0x0002bd8b) cell_hc_apps_pane_g3_ParamLimits

0x6ea3,	// (0x0002bd8b) cell_hc_apps_pane_g3

0x0002,

0xfcb9,	// (0x00034ba1) cell_hc_apps_pane_g_ParamLimits

0xfcb9,	// (0x00034ba1) cell_hc_apps_pane_g

0xd7bb,	// (0x000326a3) cell_hc_apps_pane_t1_ParamLimits

0xd7bb,	// (0x000326a3) cell_hc_apps_pane_t1

0xce2c,	// (0x00031d14) grid_highlight_pane_cp10_ParamLimits

0xce2c,	// (0x00031d14) grid_highlight_pane_cp10

0xd7f9,	// (0x000326e1) list_single_hc_apps_pane_ParamLimits

0xd7f9,	// (0x000326e1) list_single_hc_apps_pane

0xd82c,	// (0x00032714) list_single_hc_apps_pane_g1

0xa260,	// (0x0002f148) list_single_hc_apps_pane_g2

0x0001,

0xfcc0,	// (0x00034ba8) list_single_hc_apps_pane_g

0xa279,	// (0x0002f161) list_single_hc_apps_pane_g2_copy1

0xa295,	// (0x0002f17d) list_single_hc_apps_pane_t1

0xccf9,	// (0x00031be1) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x00034388) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x000343a1) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x000343bb) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00034421) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x000343d3) slider_set_pane_ParamLimits

0x0f74,	// (0x00025e5c) control_pane_g5_ParamLimits

0x0f74,	// (0x00025e5c) control_pane_g5

0x47e0,	// (0x000296c8) slider_set_pane_g1_ParamLimits

0x19a4,	// (0x0002688c) slider_set_pane_g2_ParamLimits

0x19b0,	// (0x00026898) slider_set_pane_g3_ParamLimits

0x19c4,	// (0x000268ac) slider_set_pane_g4_ParamLimits

0x19dc,	// (0x000268c4) slider_set_pane_g5_ParamLimits

0x19b0,	// (0x00026898) slider_set_pane_g6_ParamLimits

0x19f2,	// (0x000268da) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00034822) slider_set_pane_g_ParamLimits

0x0d66,	// (0x00025c4e) navi_icon_text_pane_ParamLimits

0xb4e3,	// (0x000303cb) aid_fill_nsta_2_ParamLimits

0xb51c,	// (0x00030404) aid_touch_tab_arrow_left_ParamLimits

0xb532,	// (0x0003041a) aid_touch_tab_arrow_right_ParamLimits

0xb5cd,	// (0x000304b5) clock_nsta_pane_ParamLimits

0xbc3b,	// (0x00030b23) navi_icon_pane_g1_ParamLimits

0xbc47,	// (0x00030b2f) navi_text_pane_t1_ParamLimits

0xc120,	// (0x00031008) navi_icon_text_pane_g1_ParamLimits

0xc12c,	// (0x00031014) navi_icon_text_pane_t1_ParamLimits

0xd82c,	// (0x00032714) list_single_hc_apps_pane_g1_ParamLimits

0xa260,	// (0x0002f148) list_single_hc_apps_pane_g2_ParamLimits

0xfcc0,	// (0x00034ba8) list_single_hc_apps_pane_g_ParamLimits

0xa279,	// (0x0002f161) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa295,	// (0x0002f17d) list_single_hc_apps_pane_t1_ParamLimits

0xa419,	// (0x0002f301) popup_toolbar2_fixed_window_ParamLimits

0xa419,	// (0x0002f301) popup_toolbar2_fixed_window

0xb448,	// (0x00030330) popup_toolbar2_float_window

0xcc89,	// (0x00031b71) bg_popup_sub_pane_cp27

0x6f5d,	// (0x0002be45) grid_toolbar2_float_pane

0xcc89,	// (0x00031b71) bg_popup_sub_pane_cp26

0x6f5d,	// (0x0002be45) grid_toolbar2_fixed_pane

0xd845,	// (0x0003272d) cell_toolbar2_fixed_pane_ParamLimits

0xd845,	// (0x0003272d) cell_toolbar2_fixed_pane

0xd85f,	// (0x00032747) cell_toolbar2_fixed_pane_g1

0x6f7e,	// (0x0002be66) toolbar2_fixed_button_pane

0x3451,	// (0x00028339) toolbar2_fixed_button_pane_g1

0x3459,	// (0x00028341) toolbar2_fixed_button_pane_g2

0x3461,	// (0x00028349) toolbar2_fixed_button_pane_g3

0x3469,	// (0x00028351) toolbar2_fixed_button_pane_g4

0x3471,	// (0x00028359) toolbar2_fixed_button_pane_g5

0x3479,	// (0x00028361) toolbar2_fixed_button_pane_g6

0x3481,	// (0x00028369) toolbar2_fixed_button_pane_g7

0x3489,	// (0x00028371) toolbar2_fixed_button_pane_g8

0x3491,	// (0x00028379) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00034724) toolbar2_fixed_button_pane_g

0x6f86,	// (0x0002be6e) cell_toolbar2_float_pane_ParamLimits

0x6f86,	// (0x0002be6e) cell_toolbar2_float_pane

0x6f97,	// (0x0002be7f) cell_toolbar2_float_pane_g1

0x6f7e,	// (0x0002be66) toolbar2_fixed_button_pane_cp

0xc270,	// (0x00031158) fep_vkb_accented_list_pane_ParamLimits

0xc270,	// (0x00031158) fep_vkb_accented_list_pane

0x1d62,	// (0x00026c4a) bg_popup_fep_shadow_pane_g9

0x2bf4,	// (0x00027adc) bg_popup_fep_shadow_pane_cp3

0xd45e,	// (0x00032346) list_accented_list_pane

0x6fa0,	// (0x0002be88) list_single_accented_list_pane_ParamLimits

0x6fa0,	// (0x0002be88) list_single_accented_list_pane

0x2bf4,	// (0x00027adc) list_highlight_pane_cp10

0x6fb1,	// (0x0002be99) list_single_accented_list_pane_t1

0xb364,	// (0x0003024c) popup_slider_window_ParamLimits

0xb364,	// (0x0003024c) popup_slider_window

0x6bff,	// (0x0002bae7) aid_indentation_list_msg

0xd962,	// (0x0003284a) bg_popup_window_pane_cp19

0x70ed,	// (0x0002bfd5) popup_slider_window_g1

0x7109,	// (0x0002bff1) popup_slider_window_g2

0x7125,	// (0x0002c00d) popup_slider_window_g3

0x0005,

0xfcc5,	// (0x00034bad) popup_slider_window_g

0x718b,	// (0x0002c073) popup_slider_window_t1

0x71ff,	// (0x0002c0e7) small_volume_slider_vertical_pane

0x5a9c,	// (0x0002a984) small_volume_slider_vertical_pane_g1

0x5a9c,	// (0x0002a984) small_volume_slider_vertical_pane_g2

0x721b,	// (0x0002c103) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd7,	// (0x00034bbf) small_volume_slider_vertical_pane_g

0xa383,	// (0x0002f26b) area_side_right_pane_ParamLimits

0xa383,	// (0x0002f26b) area_side_right_pane

0xc654,	// (0x0003153c) aid_size_side_button_ParamLimits

0xc654,	// (0x0003153c) aid_size_side_button

0xc66d,	// (0x00031555) grid_sctrl_middle_pane_ParamLimits

0xc66d,	// (0x00031555) grid_sctrl_middle_pane

0x1ef1,	// (0x00026dd9) sctrl_sk_bottom_pane

0x1f02,	// (0x00026dea) sctrl_sk_top_pane

0x1f14,	// (0x00026dfc) aid_touch_sctrl_top

0xce2c,	// (0x00031d14) bg_sctrl_sk_pane_ParamLimits

0xce2c,	// (0x00031d14) bg_sctrl_sk_pane

0x1f21,	// (0x00026e09) sctrl_sk_top_pane_g1

0x1f2e,	// (0x00026e16) sctrl_sk_top_pane_t1

0x1f14,	// (0x00026dfc) aid_touch_sctrl_bottom

0xce2c,	// (0x00031d14) bg_sctrl_sk_pane_cp_ParamLimits

0xce2c,	// (0x00031d14) bg_sctrl_sk_pane_cp

0x1f49,	// (0x00026e31) sctrl_sk_bottom_pane_g1

0x1f2e,	// (0x00026e16) sctrl_sk_bottom_pane_t1

0xc687,	// (0x0003156f) cell_sctrl_middle_pane_ParamLimits

0xc687,	// (0x0003156f) cell_sctrl_middle_pane

0xc69a,	// (0x00031582) aid_touch_sctrl_middle_ParamLimits

0xc69a,	// (0x00031582) aid_touch_sctrl_middle

0xc6a7,	// (0x0003158f) bg_sctrl_middle_pane_ParamLimits

0xc6a7,	// (0x0003158f) bg_sctrl_middle_pane

0x72a6,	// (0x0002c18e) cell_sctrl_middle_pane_g1_ParamLimits

0x72a6,	// (0x0002c18e) cell_sctrl_middle_pane_g1

0xc6b5,	// (0x0003159d) cell_sctrl_middle_pane_g2_ParamLimits

0xc6b5,	// (0x0003159d) cell_sctrl_middle_pane_g2

0x0001,

0xfce3,	// (0x00034bcb) cell_sctrl_middle_pane_g_ParamLimits

0xfce3,	// (0x00034bcb) cell_sctrl_middle_pane_g

0x3451,	// (0x00028339) bg_sctrl_middle_pane_g1

0x3459,	// (0x00028341) bg_sctrl_middle_pane_g2

0x3461,	// (0x00028349) bg_sctrl_middle_pane_g3

0x3469,	// (0x00028351) bg_sctrl_middle_pane_g4

0x3471,	// (0x00028359) bg_sctrl_middle_pane_g5

0x3479,	// (0x00028361) bg_sctrl_middle_pane_g6

0x3481,	// (0x00028369) bg_sctrl_middle_pane_g7

0x3489,	// (0x00028371) bg_sctrl_middle_pane_g8

0x0007,

0xfce8,	// (0x00034bd0) bg_sctrl_middle_pane_g

0x3491,	// (0x00028379) bg_sctrl_middle_pane_g8_copy1

0x3451,	// (0x00028339) bg_sctrl_sk_pane_g1

0x3459,	// (0x00028341) bg_sctrl_sk_pane_g2

0x3461,	// (0x00028349) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00034724) bg_sctrl_sk_pane_g

0xd274,	// (0x0003215c) aid_size_touch_scroll_bar

0x3469,	// (0x00028351) bg_sctrl_sk_pane_g4

0x3471,	// (0x00028359) bg_sctrl_sk_pane_g5

0x3479,	// (0x00028361) bg_sctrl_sk_pane_g6

0x3481,	// (0x00028369) bg_sctrl_sk_pane_g7

0x3489,	// (0x00028371) bg_sctrl_sk_pane_g8

0x3491,	// (0x00028379) bg_sctrl_sk_pane_g9

0x1108,	// (0x00025ff0) popup_fep_china_hwr2_fs_candidate_window

0xae16,	// (0x0002fcfe) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae16,	// (0x0002fcfe) popup_fep_china_hwr2_fs_control_window

0x5d17,	// (0x0002abff) sctrl_sk_top_pane_g2

0x0001,

0xfcde,	// (0x00034bc6) sctrl_sk_top_pane_g

0xda1a,	// (0x00032902) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda1a,	// (0x00032902) aid_fep_china_hwr2_fs_cell

0xda30,	// (0x00032918) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda30,	// (0x00032918) bg_popup_fep_shadow_pane_cp4

0xda47,	// (0x0003292f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda47,	// (0x0003292f) bg_popup_fep_shadow_pane_cp5

0xda59,	// (0x00032941) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda59,	// (0x00032941) popup_fep_china_hwr2_fs_control_bar_grid

0xda6d,	// (0x00032955) popup_fep_china_hwr2_fs_control_funtion_grid

0x727a,	// (0x0002c162) aid_fep_china_hwr2_fs_candi_cell

0xcc89,	// (0x00031b71) bg_popup_fep_shadow_pane_cp6

0x7284,	// (0x0002c16c) popup_fep_china_hwr2_fs_candidate_grid

0xda75,	// (0x0003295d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda75,	// (0x0003295d) cell_fep_china_hwr2_fs_funtion_grid

0x5a9c,	// (0x0002a984) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x72a6,	// (0x0002c18e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x72a6,	// (0x0002c18e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x72b4,	// (0x0002c19c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x72b4,	// (0x0002c19c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf9,	// (0x00034be1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf9,	// (0x00034be1) cell_fep_china_hwr2_fs_funtion_grid_g

0xda8d,	// (0x00032975) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda8d,	// (0x00032975) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdaa2,	// (0x0003298a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdaa2,	// (0x0003298a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfe,	// (0x00034be6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfe,	// (0x00034be6) cell_fep_china_hwr2_fs_funtion_grid_t

0x72fb,	// (0x0002c1e3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7303,	// (0x0002c1eb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x730b,	// (0x0002c1f3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd03,	// (0x00034beb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7313,	// (0x0002c1fb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7313,	// (0x0002c1fb) cell_fep_china_hwr2_fs_candidate_grid

0x7332,	// (0x0002c21a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x733a,	// (0x0002c222) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5a9c,	// (0x0002a984) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5a9c,	// (0x0002a984) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00034a0b) cell_fep_china_hwr2_fs_candidate_grid_g

0x7342,	// (0x0002c22a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3039,	// (0x00027f21) clock_nsta_pane_cp_24_ParamLimits

0x3039,	// (0x00027f21) clock_nsta_pane_cp_24

0x30b9,	// (0x00027fa1) indicator_nsta_pane_cp_24_ParamLimits

0x30b9,	// (0x00027fa1) indicator_nsta_pane_cp_24

0x413a,	// (0x00029022) heading_pane_g1

0x0001,

0xf8a1,	// (0x00034789) heading_pane_g

0x4bd2,	// (0x00029aba) grid_sct_catagory_button_pane

0x4c04,	// (0x00029aec) scroll_pane_cp5_ParamLimits

0x56fc,	// (0x0002a5e4) button_value_adjust_pane_cp5_ParamLimits

0x56fc,	// (0x0002a5e4) button_value_adjust_pane_cp5

0x57e1,	// (0x0002a6c9) form2_midp_time_pane_ParamLimits

0x7350,	// (0x0002c238) cell_sct_catagory_button_pane_ParamLimits

0x7350,	// (0x0002c238) cell_sct_catagory_button_pane

0x5a61,	// (0x0002a949) bg_button_pane_cp01_ParamLimits

0x5a61,	// (0x0002a949) bg_button_pane_cp01

0x5a9c,	// (0x0002a984) cell_sct_catagory_button_pane_g1

0xb3e5,	// (0x000302cd) popup_tb_extension_window

0xdabe,	// (0x000329a6) aid_size_cell_ext_ParamLimits

0xdabe,	// (0x000329a6) aid_size_cell_ext

0xd0b6,	// (0x00031f9e) bg_tb_trans_pane_cp1_ParamLimits

0xd0b6,	// (0x00031f9e) bg_tb_trans_pane_cp1

0xdae4,	// (0x000329cc) grid_tb_ext_pane_ParamLimits

0xdae4,	// (0x000329cc) grid_tb_ext_pane

0xdb21,	// (0x00032a09) cell_tb_ext_pane_ParamLimits

0xdb21,	// (0x00032a09) cell_tb_ext_pane

0xdb49,	// (0x00032a31) cell_tb_ext_pane_g1_ParamLimits

0xdb49,	// (0x00032a31) cell_tb_ext_pane_g1

0x73e4,	// (0x0002c2cc) cell_tb_ext_pane_t1

0xce2c,	// (0x00031d14) list_highlight_pane_cp11_ParamLimits

0xce2c,	// (0x00031d14) list_highlight_pane_cp11

0xa42e,	// (0x0002f316) popup_uni_indicator_window_ParamLimits

0xa42e,	// (0x0002f316) popup_uni_indicator_window

0xd33b,	// (0x00032223) bg_popup_sub_pane_cp14

0x73ff,	// (0x0002c2e7) list_uniindi_pane

0x740b,	// (0x0002c2f3) uniindi_top_pane

0xce2c,	// (0x00031d14) bg_uniindi_top_pane

0x742c,	// (0x0002c314) uniindi_top_pane_g1

0x7442,	// (0x0002c32a) uniindi_top_pane_g2

0x0003,

0xfd0a,	// (0x00034bf2) uniindi_top_pane_g

0x746c,	// (0x0002c354) uniindi_top_pane_t1

0x7498,	// (0x0002c380) list_single_uniindi_pane_ParamLimits

0x7498,	// (0x0002c380) list_single_uniindi_pane

0x5a9c,	// (0x0002a984) bg_uniindi_top_pane_g1

0x74ab,	// (0x0002c393) list_single_uniindi_pane_g1

0x74be,	// (0x0002c3a6) list_single_uniindi_pane_t1

0xcc89,	// (0x00031b71) control_bg_pane

0x74e3,	// (0x0002c3cb) bg_sctrl_sk_pane_cp1

0x74ec,	// (0x0002c3d4) bg_sctrl_sk_pane_cp2

0x74f5,	// (0x0002c3dd) control_bg_pane_g1

0x74fe,	// (0x0002c3e6) control_bg_pane_g2

0x0001,

0xfd13,	// (0x00034bfb) control_bg_pane_g

0x5534,	// (0x0002a41c) cell_indicator_nsta_pane_g1_ParamLimits

0xc084,	// (0x00030f6c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x0003496f) cell_indicator_nsta_pane_g_ParamLimits

0xf0a9,	// (0x00033f91) form2_midp_time_pane_t1_ParamLimits

0x1b22,	// (0x00026a0a) main_idle_act4_pane_ParamLimits

0x1b22,	// (0x00026a0a) main_idle_act4_pane

0xb3e5,	// (0x000302cd) popup_tb_extension_window_ParamLimits

0xdb09,	// (0x000329f1) tb_ext_find_pane_ParamLimits

0xdb09,	// (0x000329f1) tb_ext_find_pane

0x7507,	// (0x0002c3ef) ai_gene_pane_1_cp1

0x2d3e,	// (0x00027c26) ai_gene_pane_2_cp1

0x750f,	// (0x0002c3f7) list_single_idle_plugin_calendar_pane

0x7518,	// (0x0002c400) list_single_idle_plugin_notification_pane

0x7521,	// (0x0002c409) list_single_idle_plugin_player_pane

0xdb66,	// (0x00032a4e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb66,	// (0x00032a4e) list_single_idle_plugin_shortcut_pane

0xdb8e,	// (0x00032a76) main_idle_act4_pane_t1

0xdba6,	// (0x00032a8e) main_idle_act4_pane_t2

0x0001,

0xfd18,	// (0x00034c00) main_idle_act4_pane_t

0xdbbe,	// (0x00032aa6) middle_sk_idle_act4_pane_ParamLimits

0xdbbe,	// (0x00032aa6) middle_sk_idle_act4_pane

0xdbda,	// (0x00032ac2) popup_clock_digital_analogue_window_cp2

0xdc01,	// (0x00032ae9) shortcut_wheel_idle_act4_pane_ParamLimits

0xdc01,	// (0x00032ae9) shortcut_wheel_idle_act4_pane

0x5a9c,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g1

0x5a9c,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g2

0x5a9c,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g3

0x5a9c,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g4

0x5a9c,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g5

0x75b4,	// (0x0002c49c) shortcut_wheel_idle_act4_pane_g6

0x75bc,	// (0x0002c4a4) shortcut_wheel_idle_act4_pane_g7

0x75c4,	// (0x0002c4ac) shortcut_wheel_idle_act4_pane_g8

0x75cc,	// (0x0002c4b4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1d,	// (0x00034c05) shortcut_wheel_idle_act4_pane_g

0xd669,	// (0x00032551) middle_sk_idle_act4_pane_g1_ParamLimits

0xd669,	// (0x00032551) middle_sk_idle_act4_pane_g1

0xdc7e,	// (0x00032b66) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc7e,	// (0x00032b66) middle_sk_idle_act4_pane_g2

0x0001,

0xfd40,	// (0x00034c28) middle_sk_idle_act4_pane_g_ParamLimits

0xfd40,	// (0x00034c28) middle_sk_idle_act4_pane_g

0xdc96,	// (0x00032b7e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc96,	// (0x00032b7e) middle_sk_idle_act4_pane_t1

0xdcc5,	// (0x00032bad) grid_ai_shortcut_pane_ParamLimits

0xdcc5,	// (0x00032bad) grid_ai_shortcut_pane

0xdce2,	// (0x00032bca) list_highlight_pane_cp16_ParamLimits

0xdce2,	// (0x00032bca) list_highlight_pane_cp16

0xdcef,	// (0x00032bd7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdcef,	// (0x00032bd7) list_single_idle_plugin_shortcut_pane_g1

0xdcfb,	// (0x00032be3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdcfb,	// (0x00032be3) list_single_idle_plugin_shortcut_pane_g2

0xdd19,	// (0x00032c01) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd19,	// (0x00032c01) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd45,	// (0x00034c2d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd45,	// (0x00034c2d) list_single_idle_plugin_shortcut_pane_g

0xdd2e,	// (0x00032c16) cell_ai_shortcut_pane_ParamLimits

0xdd2e,	// (0x00032c16) cell_ai_shortcut_pane

0xdd44,	// (0x00032c2c) cell_ai_shortcut_pane_g1_ParamLimits

0xdd44,	// (0x00032c2c) cell_ai_shortcut_pane_g1

0x7507,	// (0x0002c3ef) ai_gene_pane_1_cp2

0x76fd,	// (0x0002c5e5) ai_gene_pane_2_cp2

0x7705,	// (0x0002c5ed) list_highlight_pane_cp15

0x770e,	// (0x0002c5f6) list_single_idle_plugin_calendar_pane_g1

0x7705,	// (0x0002c5ed) list_highlight_pane_cp17

0x7716,	// (0x0002c5fe) list_single_idle_plugin_calendar_pane_g1_copy1

0x771e,	// (0x0002c606) list_single_idle_plugin_player_pane_g1

0x4e39,	// (0x00029d21) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4c,	// (0x00034c34) list_single_idle_plugin_player_pane_g

0x7726,	// (0x0002c60e) list_single_idle_plugin_player_pane_t1

0x7734,	// (0x0002c61c) list_single_idle_plugin_player_pane_t2

0x7742,	// (0x0002c62a) list_single_idle_plugin_player_pane_t3

0x7750,	// (0x0002c638) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd51,	// (0x00034c39) list_single_idle_plugin_player_pane_t

0x775e,	// (0x0002c646) wait_bar_pane_cp15

0x7766,	// (0x0002c64e) grid_ai_notification_pane

0x4e39,	// (0x00029d21) list_single_idle_plugin_notification_pane_g1

0xdd66,	// (0x00032c4e) cell_ai_notification_pane_ParamLimits

0xdd66,	// (0x00032c4e) cell_ai_notification_pane

0x777c,	// (0x0002c664) cell_ai_notification_pane_g1

0x7784,	// (0x0002c66c) cell_ai_notification_pane_t1

0xdd73,	// (0x00032c5b) tb_ext_find_button_pane

0xdd7b,	// (0x00032c63) tb_ext_find_pane_g1

0xdd83,	// (0x00032c6b) tb_ext_find_pane_t1

0x06a6,	// (0x0002558e) tb_ext_find_button_pane_g1

0x77b0,	// (0x0002c698) tb_ext_find_button_pane_g2

0x0001,

0xfd5a,	// (0x00034c42) tb_ext_find_button_pane_g

0xdb8e,	// (0x00032a76) main_idle_act4_pane_t1_ParamLimits

0xdba6,	// (0x00032a8e) main_idle_act4_pane_t2_ParamLimits

0xfd18,	// (0x00034c00) main_idle_act4_pane_t_ParamLimits

0xdbda,	// (0x00032ac2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbf1,	// (0x00032ad9) sat_plugin_idle_act4_pane_ParamLimits

0xdbf1,	// (0x00032ad9) sat_plugin_idle_act4_pane

0xdd91,	// (0x00032c79) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd91,	// (0x00032c79) sat_plugin_idle_act4_pane_t1

0xdda9,	// (0x00032c91) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdda9,	// (0x00032c91) sat_plugin_idle_act4_pane_t2

0xddc1,	// (0x00032ca9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddc1,	// (0x00032ca9) sat_plugin_idle_act4_pane_t3

0xddd9,	// (0x00032cc1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddd9,	// (0x00032cc1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5f,	// (0x00034c47) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5f,	// (0x00034c47) sat_plugin_idle_act4_pane_t

0xf442,	// (0x0003432a) popup_battery_window_ParamLimits

0xf442,	// (0x0003432a) popup_battery_window

0xce2c,	// (0x00031d14) bg_popup_sub_pane_cp25_ParamLimits

0xce2c,	// (0x00031d14) bg_popup_sub_pane_cp25

0x7805,	// (0x0002c6ed) popup_battery_window_g1_ParamLimits

0x7805,	// (0x0002c6ed) popup_battery_window_g1

0x7811,	// (0x0002c6f9) popup_battery_window_t1_ParamLimits

0x7811,	// (0x0002c6f9) popup_battery_window_t1

0x7823,	// (0x0002c70b) popup_battery_window_t2_ParamLimits

0x7823,	// (0x0002c70b) popup_battery_window_t2

0x0001,

0xfd68,	// (0x00034c50) popup_battery_window_t_ParamLimits

0xfd68,	// (0x00034c50) popup_battery_window_t

0xabaf,	// (0x0002fa97) midp_canvas_pane_ParamLimits

0xac0b,	// (0x0002faf3) midp_keypad_pane_ParamLimits

0xac0b,	// (0x0002faf3) midp_keypad_pane

0x2f1b,	// (0x00027e03) main_midp_pane_ParamLimits

0x55af,	// (0x0002a497) signal_pane_g2_cp_ParamLimits

0xddf1,	// (0x00032cd9) aid_size_cell_midp_keypad_ParamLimits

0xddf1,	// (0x00032cd9) aid_size_cell_midp_keypad

0xde0f,	// (0x00032cf7) midp_keyp_game_grid_pane_ParamLimits

0xde0f,	// (0x00032cf7) midp_keyp_game_grid_pane

0xde36,	// (0x00032d1e) midp_keyp_rocker_pane_ParamLimits

0xde36,	// (0x00032d1e) midp_keyp_rocker_pane

0xde85,	// (0x00032d6d) midp_keyp_sk_left_pane_ParamLimits

0xde85,	// (0x00032d6d) midp_keyp_sk_left_pane

0xdedb,	// (0x00032dc3) midp_keyp_sk_right_pane_ParamLimits

0xdedb,	// (0x00032dc3) midp_keyp_sk_right_pane

0xcc89,	// (0x00031b71) bg_button_pane_cp03

0xdf31,	// (0x00032e19) midp_keyp_sk_left_pane_g1

0xcc89,	// (0x00031b71) bg_button_pane_cp04

0xdf31,	// (0x00032e19) midp_keyp_sk_right_pane_g1

0x5a9c,	// (0x0002a984) midp_keyp_rocker_pane_g1

0xdf39,	// (0x00032e21) keyp_game_cell_pane_ParamLimits

0xdf39,	// (0x00032e21) keyp_game_cell_pane

0xcc89,	// (0x00031b71) bg_button_pane_cp02

0xdf5f,	// (0x00032e47) keyp_game_cell_pane_g1

0xa3c5,	// (0x0002f2ad) popup_fep_vkb2_window_ParamLimits

0xa3c5,	// (0x0002f2ad) popup_fep_vkb2_window

0xc6c1,	// (0x000315a9) aid_size_cell_vkb2_ParamLimits

0xc6c1,	// (0x000315a9) aid_size_cell_vkb2

0xc6ed,	// (0x000315d5) popup_fep_vkb2_window_g1_ParamLimits

0xc6ed,	// (0x000315d5) popup_fep_vkb2_window_g1

0xc73d,	// (0x00031625) vkb2_area_bottom_pane_ParamLimits

0xc73d,	// (0x00031625) vkb2_area_bottom_pane

0xc799,	// (0x00031681) vkb2_area_keypad_pane_ParamLimits

0xc799,	// (0x00031681) vkb2_area_keypad_pane

0xc7e7,	// (0x000316cf) vkb2_area_top_pane_ParamLimits

0xc7e7,	// (0x000316cf) vkb2_area_top_pane

0xc874,	// (0x0003175c) vkb2_top_entry_pane_ParamLimits

0xc874,	// (0x0003175c) vkb2_top_entry_pane

0xc8a1,	// (0x00031789) vkb2_top_grid_left_pane_ParamLimits

0xc8a1,	// (0x00031789) vkb2_top_grid_left_pane

0xc8c2,	// (0x000317aa) vkb2_top_grid_right_pane_ParamLimits

0xc8c2,	// (0x000317aa) vkb2_top_grid_right_pane

0x21b5,	// (0x0002709d) vkb2_cell_keypad_pane_ParamLimits

0x21b5,	// (0x0002709d) vkb2_cell_keypad_pane

0xc90a,	// (0x000317f2) vkb2_area_bottom_grid_pane_ParamLimits

0xc90a,	// (0x000317f2) vkb2_area_bottom_grid_pane

0xc934,	// (0x0003181c) vkb2_area_bottom_pane_g1_ParamLimits

0xc934,	// (0x0003181c) vkb2_area_bottom_pane_g1

0xc95a,	// (0x00031842) vkb2_area_bottom_pane_g2_ParamLimits

0xc95a,	// (0x00031842) vkb2_area_bottom_pane_g2

0xc98b,	// (0x00031873) vkb2_area_bottom_pane_g3_ParamLimits

0xc98b,	// (0x00031873) vkb2_area_bottom_pane_g3

0x0002,

0xfd6d,	// (0x00034c55) vkb2_area_bottom_pane_g_ParamLimits

0xfd6d,	// (0x00034c55) vkb2_area_bottom_pane_g

0x235f,	// (0x00027247) vkb2_top_cell_left_pane_ParamLimits

0x235f,	// (0x00027247) vkb2_top_cell_left_pane

0xdf68,	// (0x00032e50) vkb2_top_entry_pane_g1_ParamLimits

0xdf68,	// (0x00032e50) vkb2_top_entry_pane_g1

0xdf76,	// (0x00032e5e) vkb2_top_entry_pane_t1_ParamLimits

0xdf76,	// (0x00032e5e) vkb2_top_entry_pane_t1

0x79cd,	// (0x0002c8b5) vkb2_top_entry_pane_t2_ParamLimits

0x79cd,	// (0x0002c8b5) vkb2_top_entry_pane_t2

0x79ff,	// (0x0002c8e7) vkb2_top_entry_pane_t3_ParamLimits

0x79ff,	// (0x0002c8e7) vkb2_top_entry_pane_t3

0x0002,

0xfd74,	// (0x00034c5c) vkb2_top_entry_pane_t_ParamLimits

0xfd74,	// (0x00034c5c) vkb2_top_entry_pane_t

0xc9f5,	// (0x000318dd) vkb2_top_grid_right_pane_g1_ParamLimits

0xc9f5,	// (0x000318dd) vkb2_top_grid_right_pane_g1

0x23c2,	// (0x000272aa) vkb2_top_grid_right_pane_g2_ParamLimits

0x23c2,	// (0x000272aa) vkb2_top_grid_right_pane_g2

0x23da,	// (0x000272c2) vkb2_top_grid_right_pane_g3_ParamLimits

0x23da,	// (0x000272c2) vkb2_top_grid_right_pane_g3

0xca0b,	// (0x000318f3) vkb2_top_grid_right_pane_g4_ParamLimits

0xca0b,	// (0x000318f3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7b,	// (0x00034c63) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7b,	// (0x00034c63) vkb2_top_grid_right_pane_g

0x2408,	// (0x000272f0) vkb2_top_cell_left_pane_g1

0x241f,	// (0x00027307) vkb2_cell_keypad_pane_g1_ParamLimits

0x241f,	// (0x00027307) vkb2_cell_keypad_pane_g1

0x7a23,	// (0x0002c90b) vkb2_cell_keypad_pane_t1_ParamLimits

0x7a23,	// (0x0002c90b) vkb2_cell_keypad_pane_t1

0x242d,	// (0x00027315) vkb2_cell_bottom_grid_pane_ParamLimits

0x242d,	// (0x00027315) vkb2_cell_bottom_grid_pane

0x2466,	// (0x0002734e) vkb2_cell_bottom_grid_pane_g1

0xdc22,	// (0x00032b0a) aid_call2_pane_cp02

0xdc2a,	// (0x00032b12) aid_call_pane_cp02

0xdc32,	// (0x00032b1a) clock_digital_number_pane_cp10

0xdc3a,	// (0x00032b22) clock_digital_number_pane_cp11

0xdc42,	// (0x00032b2a) clock_digital_number_pane_cp12

0xdc4a,	// (0x00032b32) clock_digital_number_pane_cp13

0xdc52,	// (0x00032b3a) clock_digital_separator_pane_cp10

0x06a6,	// (0x0002558e) popup_clock_digital_analogue_window_cp2_g1

0x06a6,	// (0x0002558e) popup_clock_digital_analogue_window_cp2_g2

0xdc5a,	// (0x00032b42) popup_clock_digital_analogue_window_cp2_g3

0x06a6,	// (0x0002558e) popup_clock_digital_analogue_window_cp2_g4

0xdc5a,	// (0x00032b42) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd30,	// (0x00034c18) popup_clock_digital_analogue_window_cp2_g

0xdc62,	// (0x00032b4a) popup_clock_digital_analogue_window_cp2_t1

0xdc70,	// (0x00032b58) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3b,	// (0x00034c23) popup_clock_digital_analogue_window_cp2_t

0x5a9c,	// (0x0002a984) clock_digital_number_pane_cp10_g1

0x5a9c,	// (0x0002a984) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00034a0b) clock_digital_number_pane_cp10_g

0x5a9c,	// (0x0002a984) clock_digital_separator_pane_cp10_g1

0x5a9c,	// (0x0002a984) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00034a0b) clock_digital_separator_pane_cp10_g

0x744e,	// (0x0002c336) uniindi_top_pane_g3

0x745f,	// (0x0002c347) uniindi_top_pane_g4

0x2240,	// (0x00027128) vkb2_row_keypad_pane_ParamLimits

0x2240,	// (0x00027128) vkb2_row_keypad_pane

0x2482,	// (0x0002736a) vkb2_cell_t_keypad_pane_ParamLimits

0x2482,	// (0x0002736a) vkb2_cell_t_keypad_pane

0x2492,	// (0x0002737a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2492,	// (0x0002737a) vkb2_cell_t_keypad_pane_cp08

0x24a7,	// (0x0002738f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x24a7,	// (0x0002738f) vkb2_cell_t_keypad_pane_cp09

0x24bb,	// (0x000273a3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x24bb,	// (0x000273a3) vkb2_cell_t_keypad_pane_cp01

0x24cc,	// (0x000273b4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x24cc,	// (0x000273b4) vkb2_cell_t_keypad_pane_cp02

0x24dd,	// (0x000273c5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x24dd,	// (0x000273c5) vkb2_cell_t_keypad_pane_cp03

0x24ee,	// (0x000273d6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x24ee,	// (0x000273d6) vkb2_cell_t_keypad_pane_cp04

0x24ff,	// (0x000273e7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x24ff,	// (0x000273e7) vkb2_cell_t_keypad_pane_cp05

0x2510,	// (0x000273f8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2510,	// (0x000273f8) vkb2_cell_t_keypad_pane_cp06

0x2523,	// (0x0002740b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2523,	// (0x0002740b) vkb2_cell_t_keypad_pane_cp07

0x2538,	// (0x00027420) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2538,	// (0x00027420) vkb2_cell_t_keypad_pane_cp10

0x5d17,	// (0x0002abff) vkb2_cell_t_keypad_pane_g1

0x7a3a,	// (0x0002c922) vkb2_cell_t_keypad_pane_t1

0xcc89,	// (0x00031b71) popup_grid_graphic2_window

0xdfaf,	// (0x00032e97) aid_size_cell_graphic2_ParamLimits

0xdfaf,	// (0x00032e97) aid_size_cell_graphic2

0xdfed,	// (0x00032ed5) bg_popup_window_pane_cp21_ParamLimits

0xdfed,	// (0x00032ed5) bg_popup_window_pane_cp21

0xdffb,	// (0x00032ee3) graphic2_pages_pane_ParamLimits

0xdffb,	// (0x00032ee3) graphic2_pages_pane

0xe053,	// (0x00032f3b) grid_graphic2_control_pane_ParamLimits

0xe053,	// (0x00032f3b) grid_graphic2_control_pane

0xe09b,	// (0x00032f83) grid_graphic2_pane_ParamLimits

0xe09b,	// (0x00032f83) grid_graphic2_pane

0xe126,	// (0x0003300e) cell_graphic2_pane

0xcc89,	// (0x00031b71) main_comp_mode_pane

0x6cbb,	// (0x0002bba3) list_ai3_gene_pane_ParamLimits

0xd962,	// (0x0003284a) bg_popup_window_pane_cp19_ParamLimits

0x708d,	// (0x0002bf75) bg_touch_area_indi_pane_ParamLimits

0x708d,	// (0x0002bf75) bg_touch_area_indi_pane

0x70a3,	// (0x0002bf8b) bg_touch_area_indi_pane_cp01_ParamLimits

0x70a3,	// (0x0002bf8b) bg_touch_area_indi_pane_cp01

0x70b9,	// (0x0002bfa1) bg_touch_area_indi_pane_cp02_ParamLimits

0x70b9,	// (0x0002bfa1) bg_touch_area_indi_pane_cp02

0x70d3,	// (0x0002bfbb) bg_touch_area_indi_pane_cp03_ParamLimits

0x70d3,	// (0x0002bfbb) bg_touch_area_indi_pane_cp03

0x70ed,	// (0x0002bfd5) popup_slider_window_g1_ParamLimits

0x7109,	// (0x0002bff1) popup_slider_window_g2_ParamLimits

0x7125,	// (0x0002c00d) popup_slider_window_g3_ParamLimits

0xfcc5,	// (0x00034bad) popup_slider_window_g_ParamLimits

0x718b,	// (0x0002c073) popup_slider_window_t1_ParamLimits

0x71ff,	// (0x0002c0e7) small_volume_slider_vertical_pane_ParamLimits

0xe126,	// (0x0003300e) cell_graphic2_pane_ParamLimits

0xe188,	// (0x00033070) bg_button_pane_cp10_ParamLimits

0xe188,	// (0x00033070) bg_button_pane_cp10

0xe19b,	// (0x00033083) bg_button_pane_cp11_ParamLimits

0xe19b,	// (0x00033083) bg_button_pane_cp11

0xe1ae,	// (0x00033096) graphic2_pages_pane_g1_ParamLimits

0xe1ae,	// (0x00033096) graphic2_pages_pane_g1

0xe1c9,	// (0x000330b1) graphic2_pages_pane_g2_ParamLimits

0xe1c9,	// (0x000330b1) graphic2_pages_pane_g2

0x0001,

0xfd89,	// (0x00034c71) graphic2_pages_pane_g_ParamLimits

0xfd89,	// (0x00034c71) graphic2_pages_pane_g

0xe1e1,	// (0x000330c9) graphic2_pages_pane_t1_ParamLimits

0xe1e1,	// (0x000330c9) graphic2_pages_pane_t1

0xe1f9,	// (0x000330e1) cell_graphic2_control_pane_ParamLimits

0xe1f9,	// (0x000330e1) cell_graphic2_control_pane

0xe22d,	// (0x00033115) cell_graphic2_pane_g1_ParamLimits

0xe22d,	// (0x00033115) cell_graphic2_pane_g1

0xd677,	// (0x0003255f) cell_graphic2_pane_g2_ParamLimits

0xd677,	// (0x0003255f) cell_graphic2_pane_g2

0xe23a,	// (0x00033122) cell_graphic2_pane_g3_ParamLimits

0xe23a,	// (0x00033122) cell_graphic2_pane_g3

0xd684,	// (0x0003256c) cell_graphic2_pane_g4_ParamLimits

0xd684,	// (0x0003256c) cell_graphic2_pane_g4

0xe247,	// (0x0003312f) cell_graphic2_pane_g5_ParamLimits

0xe247,	// (0x0003312f) cell_graphic2_pane_g5

0x0004,

0xfd8e,	// (0x00034c76) cell_graphic2_pane_g_ParamLimits

0xfd8e,	// (0x00034c76) cell_graphic2_pane_g

0xe263,	// (0x0003314b) cell_graphic2_pane_t1_ParamLimits

0xe263,	// (0x0003314b) cell_graphic2_pane_t1

0x412e,	// (0x00029016) grid_highlight_pane_cp11_ParamLimits

0x412e,	// (0x00029016) grid_highlight_pane_cp11

0xce2c,	// (0x00031d14) bg_button_pane_cp05

0xe2ac,	// (0x00033194) cell_graphic2_control_pane_g1

0x5a9c,	// (0x0002a984) bg_touch_area_indi_pane_g1

0x7d1d,	// (0x0002cc05) aid_cmod_rocker_key_size

0x7d27,	// (0x0002cc0f) aid_cmode_itu_key_size

0x7d31,	// (0x0002cc19) main_cmode_video_pane

0x7d3b,	// (0x0002cc23) main_comp_mode_itu_pane

0x7d47,	// (0x0002cc2f) main_comp_mode_rocker_pane

0x7d53,	// (0x0002cc3b) cell_cmode_rocker_pane_ParamLimits

0x7d53,	// (0x0002cc3b) cell_cmode_rocker_pane

0x7d67,	// (0x0002cc4f) cell_cmode_itu_pane_ParamLimits

0x7d67,	// (0x0002cc4f) cell_cmode_itu_pane

0xd33b,	// (0x00032223) bg_button_pane_cp06_ParamLimits

0xd33b,	// (0x00032223) bg_button_pane_cp06

0x5d17,	// (0x0002abff) cell_cmode_rocker_pane_g1_ParamLimits

0x5d17,	// (0x0002abff) cell_cmode_rocker_pane_g1

0x72a6,	// (0x0002c18e) cell_cmode_rocker_pane_g2_ParamLimits

0x72a6,	// (0x0002c18e) cell_cmode_rocker_pane_g2

0x0001,

0xfd9e,	// (0x00034c86) cell_cmode_rocker_pane_g_ParamLimits

0xfd9e,	// (0x00034c86) cell_cmode_rocker_pane_g

0xcc89,	// (0x00031b71) bg_button_pane_cp07

0x7d7e,	// (0x0002cc66) cell_cmode_itu_pane_g1

0x7d87,	// (0x0002cc6f) cell_cmode_itu_pane_t1

0x7d95,	// (0x0002cc7d) cell_cmode_itu_pane_t2

0x0001,

0xfda3,	// (0x00034c8b) cell_cmode_itu_pane_t

0x74d3,	// (0x0002c3bb) aid_touch_ctrl_left

0x74db,	// (0x0002c3c3) aid_touch_ctrl_right

0xcc89,	// (0x00031b71) compa_mode_pane

0xe2d4,	// (0x000331bc) aid_cmod_rocker_key_size_cp

0xe2de,	// (0x000331c6) aid_cmode_itu_key_size_cp

0x7db7,	// (0x0002cc9f) compa_mode_pane_g1

0x7dbf,	// (0x0002cca7) compa_mode_pane_g2

0x7dc7,	// (0x0002ccaf) compa_mode_pane_g3

0x0002,

0xfda8,	// (0x00034c90) compa_mode_pane_g

0xe2e8,	// (0x000331d0) main_comp_mode_itu_pane_cp

0xe2f0,	// (0x000331d8) main_comp_mode_rocker_pane_cp

0xe2f8,	// (0x000331e0) cell_cmode_itu_pane_cp_ParamLimits

0xe2f8,	// (0x000331e0) cell_cmode_itu_pane_cp

0xe30d,	// (0x000331f5) cell_cmode_rocker_pane_cp_ParamLimits

0xe30d,	// (0x000331f5) cell_cmode_rocker_pane_cp

0xd33b,	// (0x00032223) bg_button_pane_cp06_cp_ParamLimits

0xd33b,	// (0x00032223) bg_button_pane_cp06_cp

0x5d17,	// (0x0002abff) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5d17,	// (0x0002abff) cell_cmode_rocker_pane_g1_cp

0x5a9c,	// (0x0002a984) cell_cmode_rocker_pane_g2_cp

0xcc89,	// (0x00031b71) bg_button_pane_cp07_cp

0xe31f,	// (0x00033207) cell_cmode_itu_pane_g1_cp

0xe328,	// (0x00033210) cell_cmode_itu_pane_t1_cp

0xe328,	// (0x00033210) cell_cmode_itu_pane_t2_cp

0xbeb5,	// (0x00030d9d) settings_code_pane_cp2

0xccf9,	// (0x00031be1) bg_popup_window_pane_cp3_ParamLimits

0xd040,	// (0x00031f28) heading_pane_cp3_ParamLimits

0xd04f,	// (0x00031f37) listscroll_popup_graphic_pane_ParamLimits

0x1b30,	// (0x00026a18) fep_hwr_aid_pane_ParamLimits

0x1f14,	// (0x00026dfc) aid_touch_sctrl_top_ParamLimits

0x1f21,	// (0x00026e09) sctrl_sk_top_pane_g1_ParamLimits

0x5d17,	// (0x0002abff) sctrl_sk_top_pane_g2_ParamLimits

0xfcde,	// (0x00034bc6) sctrl_sk_top_pane_g_ParamLimits

0x1f2e,	// (0x00026e16) sctrl_sk_top_pane_t1_ParamLimits

0x1f14,	// (0x00026dfc) aid_touch_sctrl_bottom_ParamLimits

0x1f2e,	// (0x00026e16) sctrl_sk_bottom_pane_t1_ParamLimits

0x7418,	// (0x0002c300) aid_area_touch_clock

0xc833,	// (0x0003171b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc833,	// (0x0003171b) aid_vkb2_area_top_pane_cell

0xc8e3,	// (0x000317cb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc8e3,	// (0x000317cb) aid_vkb2_area_bottom_pane_cell

0x7985,	// (0x0002c86d) popup_char_count_window

0x7e1d,	// (0x0002cd05) popup_char_count_window_g1

0x7e26,	// (0x0002cd0e) popup_char_count_window_g2

0x7e2f,	// (0x0002cd17) popup_char_count_window_g3

0x0002,

0xfdaf,	// (0x00034c97) popup_char_count_window_g

0x7e38,	// (0x0002cd20) popup_char_count_window_t1

0x1fc9,	// (0x00026eb1) popup_fep_char_preview_window_ParamLimits

0x1fc9,	// (0x00026eb1) popup_fep_char_preview_window

0xc853,	// (0x0003173b) vkb2_top_candi_pane_ParamLimits

0xc853,	// (0x0003173b) vkb2_top_candi_pane

0xe336,	// (0x0003321e) cell_vkb2_top_candi_pane_ParamLimits

0xe336,	// (0x0003321e) cell_vkb2_top_candi_pane

0x3ab7,	// (0x0002899f) bg_popup_fep_char_preview_window_ParamLimits

0x3ab7,	// (0x0002899f) bg_popup_fep_char_preview_window

0x254d,	// (0x00027435) popup_fep_char_preview_window_t1_ParamLimits

0x254d,	// (0x00027435) popup_fep_char_preview_window_t1

0x7e94,	// (0x0002cd7c) bg_popup_fep_char_preview_window_g1

0x7e9c,	// (0x0002cd84) bg_popup_fep_char_preview_window_g2

0x7ea4,	// (0x0002cd8c) bg_popup_fep_char_preview_window_g3

0x7eac,	// (0x0002cd94) bg_popup_fep_char_preview_window_g4

0x7eb4,	// (0x0002cd9c) bg_popup_fep_char_preview_window_g5

0x7ebc,	// (0x0002cda4) bg_popup_fep_char_preview_window_g6

0x7ec4,	// (0x0002cdac) bg_popup_fep_char_preview_window_g7

0x7ecc,	// (0x0002cdb4) bg_popup_fep_char_preview_window_g8

0x7ed4,	// (0x0002cdbc) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb6,	// (0x00034c9e) bg_popup_fep_char_preview_window_g

0x5d17,	// (0x0002abff) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5d17,	// (0x0002abff) cell_vkb2_top_candi_pane_g1

0x6058,	// (0x0002af40) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6058,	// (0x0002af40) cell_vkb2_top_candi_pane_g2

0x6079,	// (0x0002af61) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6079,	// (0x0002af61) cell_vkb2_top_candi_pane_g3

0x258f,	// (0x00027477) cell_vkb2_top_candi_pane_g4_ParamLimits

0x258f,	// (0x00027477) cell_vkb2_top_candi_pane_g4

0x7edc,	// (0x0002cdc4) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7edc,	// (0x0002cdc4) cell_vkb2_top_candi_pane_g5

0x72a6,	// (0x0002c18e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x72a6,	// (0x0002c18e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x00034cb3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x00034cb3) cell_vkb2_top_candi_pane_g

0x25b0,	// (0x00027498) cell_vkb2_top_candi_pane_t1

0x1990,	// (0x00026878) aid_size_touch_slider_mark_ParamLimits

0x1990,	// (0x00026878) aid_size_touch_slider_mark

0xe037,	// (0x00032f1f) grid_graphic2_catg_pane_ParamLimits

0xe037,	// (0x00032f1f) grid_graphic2_catg_pane

0xe0f5,	// (0x00032fdd) popup_grid_graphic2_window_t1_ParamLimits

0xe0f5,	// (0x00032fdd) popup_grid_graphic2_window_t1

0xe10b,	// (0x00032ff3) popup_grid_graphic2_window_t2_ParamLimits

0xe10b,	// (0x00032ff3) popup_grid_graphic2_window_t2

0x0001,

0xfd84,	// (0x00034c6c) popup_grid_graphic2_window_t_ParamLimits

0xfd84,	// (0x00034c6c) popup_grid_graphic2_window_t

0xce2c,	// (0x00031d14) bg_button_pane_cp05_ParamLimits

0xe2ac,	// (0x00033194) cell_graphic2_control_pane_g1_ParamLimits

0xe39a,	// (0x00033282) cell_graphic2_catg_pane_ParamLimits

0xe39a,	// (0x00033282) cell_graphic2_catg_pane

0xcc89,	// (0x00031b71) bg_button_pane_cp12

0xe3ac,	// (0x00033294) cell_graphic2_catg_pane_g1

0x73e4,	// (0x0002c2cc) cell_tb_ext_pane_t1_ParamLimits

0x237f,	// (0x00027267) vkb2_top_cell_right_narrow_pane_ParamLimits

0x237f,	// (0x00027267) vkb2_top_cell_right_narrow_pane

0x2397,	// (0x0002727f) vkb2_top_cell_right_wide_pane_ParamLimits

0x2397,	// (0x0002727f) vkb2_top_cell_right_wide_pane

0x1b22,	// (0x00026a0a) bg_vkb2_func_pane_ParamLimits

0x1b22,	// (0x00026a0a) bg_vkb2_func_pane

0x2408,	// (0x000272f0) vkb2_top_cell_left_pane_g1_ParamLimits

0x1b22,	// (0x00026a0a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1b22,	// (0x00026a0a) bg_vkb2_fuc_pane_cp03

0x2466,	// (0x0002734e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3459,	// (0x00028341) bg_vkb2_func_pane_g1

0x3461,	// (0x00028349) bg_vkb2_func_pane_g2

0x3471,	// (0x00028359) bg_vkb2_func_pane_g3

0x3469,	// (0x00028351) bg_vkb2_func_pane_g4

0x3479,	// (0x00028361) bg_vkb2_func_pane_g5

0x3481,	// (0x00028369) bg_vkb2_func_pane_g6

0x3489,	// (0x00028371) bg_vkb2_func_pane_g7

0x3491,	// (0x00028379) bg_vkb2_func_pane_g8

0x3451,	// (0x00028339) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x00034cc0) bg_vkb2_func_pane_g

0x1b22,	// (0x00026a0a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1b22,	// (0x00026a0a) bg_vkb2_fuc_pane_cp01

0x2408,	// (0x000272f0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2408,	// (0x000272f0) vkb2_top_cell_right_wide_pane_g1

0x1b22,	// (0x00026a0a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1b22,	// (0x00026a0a) bg_vkb2_fuc_pane_cp02

0x25ce,	// (0x000274b6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x25ce,	// (0x000274b6) vkb2_top_cell_right_narrow_pane_g1

0xd8a4,	// (0x0003278c) aid_touch_area_decrease_ParamLimits

0xd8a4,	// (0x0003278c) aid_touch_area_decrease

0xd8de,	// (0x000327c6) aid_touch_area_increase_ParamLimits

0xd8de,	// (0x000327c6) aid_touch_area_increase

0xd906,	// (0x000327ee) aid_touch_area_mute_ParamLimits

0xd906,	// (0x000327ee) aid_touch_area_mute

0xd92e,	// (0x00032816) aid_touch_area_slider_ParamLimits

0xd92e,	// (0x00032816) aid_touch_area_slider

0xd96e,	// (0x00032856) popup_slider_window_g4_ParamLimits

0xd96e,	// (0x00032856) popup_slider_window_g4

0xd996,	// (0x0003287e) popup_slider_window_g5_ParamLimits

0xd996,	// (0x0003287e) popup_slider_window_g5

0xd9ca,	// (0x000328b2) popup_slider_window_g6_ParamLimits

0xd9ca,	// (0x000328b2) popup_slider_window_g6

0x71b9,	// (0x0002c0a1) popup_slider_window_t2_ParamLimits

0x71b9,	// (0x0002c0a1) popup_slider_window_t2

0x0001,

0xfcd2,	// (0x00034bba) popup_slider_window_t_ParamLimits

0xfcd2,	// (0x00034bba) popup_slider_window_t

0xd9e6,	// (0x000328ce) slider_pane_ParamLimits

0xd9e6,	// (0x000328ce) slider_pane

0x7f18,	// (0x0002ce00) slider_pane_g1_ParamLimits

0x7f18,	// (0x0002ce00) slider_pane_g1

0x7f2c,	// (0x0002ce14) slider_pane_g2_ParamLimits

0x7f2c,	// (0x0002ce14) slider_pane_g2

0x7f42,	// (0x0002ce2a) slider_pane_g3_ParamLimits

0x7f42,	// (0x0002ce2a) slider_pane_g3

0x0003,

0xfdeb,	// (0x00034cd3) slider_pane_g_ParamLimits

0xfdeb,	// (0x00034cd3) slider_pane_g

0xb431,	// (0x00030319) popup_tb_float_extension_window_ParamLimits

0xb431,	// (0x00030319) popup_tb_float_extension_window

0x7f6e,	// (0x0002ce56) aid_size_cell_tb_float_ext

0xcc89,	// (0x00031b71) bg_popup_sub_window_cp28

0x7f7a,	// (0x0002ce62) grid_tb_float_ext_pane

0x7f86,	// (0x0002ce6e) cell_tb_float_ext_pane_ParamLimits

0x7f86,	// (0x0002ce6e) cell_tb_float_ext_pane

0x7fa2,	// (0x0002ce8a) cell_tb_float_ext_pane_g1

0x7fab,	// (0x0002ce93) grid_highlight_pane_cp12

0xc24e,	// (0x00031136) cell_last_hwr_side_pane_ParamLimits

0xc24e,	// (0x00031136) cell_last_hwr_side_pane

0x5a9c,	// (0x0002a984) cell_last_hwr_side_pane_g1

0x7fb4,	// (0x0002ce9c) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x00034cdc) cell_last_hwr_side_pane_g

0xc9c0,	// (0x000318a8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc9c0,	// (0x000318a8) vkb2_area_bottom_space_btn_pane

0x5d17,	// (0x0002abff) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7a3a,	// (0x0002c922) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x25b0,	// (0x00027498) cell_vkb2_top_candi_pane_t1_ParamLimits

0x25ea,	// (0x000274d2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x25ea,	// (0x000274d2) vkb2_area_bottom_space_btn_pane_g1

0x2624,	// (0x0002750c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2624,	// (0x0002750c) vkb2_area_bottom_space_btn_pane_g2

0x265a,	// (0x00027542) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x265a,	// (0x00027542) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x00034ce1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x00034ce1) vkb2_area_bottom_space_btn_pane_g

0x1bd9,	// (0x00026ac1) cel_fep_hwr_func_pane_ParamLimits

0x1bd9,	// (0x00026ac1) cel_fep_hwr_func_pane

0xc223,	// (0x0003110b) cell_hwr_side_button_pane_ParamLimits

0xc223,	// (0x0003110b) cell_hwr_side_button_pane

0x7418,	// (0x0002c300) aid_area_touch_clock_ParamLimits

0xce2c,	// (0x00031d14) bg_uniindi_top_pane_ParamLimits

0x742c,	// (0x0002c314) uniindi_top_pane_g1_ParamLimits

0x7442,	// (0x0002c32a) uniindi_top_pane_g2_ParamLimits

0x744e,	// (0x0002c336) uniindi_top_pane_g3_ParamLimits

0x745f,	// (0x0002c347) uniindi_top_pane_g4_ParamLimits

0xfd0a,	// (0x00034bf2) uniindi_top_pane_g_ParamLimits

0x746c,	// (0x0002c354) uniindi_top_pane_t1_ParamLimits

0xce2c,	// (0x00031d14) bg_vkb2_func_pane_cp01_ParamLimits

0xce2c,	// (0x00031d14) bg_vkb2_func_pane_cp01

0x7fbd,	// (0x0002cea5) cel_fep_hwr_func_pane_g1_ParamLimits

0x7fbd,	// (0x0002cea5) cel_fep_hwr_func_pane_g1

0xce2c,	// (0x00031d14) bg_vkb2_func_pane_cp02_ParamLimits

0xce2c,	// (0x00031d14) bg_vkb2_func_pane_cp02

0x7fbd,	// (0x0002cea5) cell_hwr_side_button_pane_g1_ParamLimits

0x7fbd,	// (0x0002cea5) cell_hwr_side_button_pane_g1

0x32d6,	// (0x000281be) status_pane_g4_ParamLimits

0x32d6,	// (0x000281be) status_pane_g4

0x32f0,	// (0x000281d8) status_pane_t1

0x584f,	// (0x0002a737) form2_midp_gauge_slider_cont_pane

0x5857,	// (0x0002a73f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc17b,	// (0x00031063) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc18d,	// (0x00031075) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x000349be) form2_midp_gauge_slider_pane_t_ParamLimits

0x588d,	// (0x0002a775) form2_midp_slider_pane_ParamLimits

0x1f91,	// (0x00026e79) aid_size_cell_func_vkb2_ParamLimits

0x1f91,	// (0x00026e79) aid_size_cell_func_vkb2

0x7f5a,	// (0x0002ce42) slider_pane_g4_ParamLimits

0x7f5a,	// (0x0002ce42) slider_pane_g4

0xca29,	// (0x00031911) form2_midp_gauge_slider_pane_t2_cp01

0xca37,	// (0x0003191f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xca37,	// (0x0003191f) form2_midp_gauge_slider_pane_t3_cp01

0x26cf,	// (0x000275b7) form2_midp_slider_pane_cp01

0xcc89,	// (0x00031b71) navi_smil_pane

0x7ff6,	// (0x0002cede) navi_smil_pane_g1

0x7ffe,	// (0x0002cee6) navi_smil_pane_t1

0x7fcb,	// (0x0002ceb3) form2_midp_slider_pane_g1

0x7fd4,	// (0x0002cebc) form2_midp_slider_pane_g2

0x7fdc,	// (0x0002cec4) form2_midp_slider_pane_g3

0x7fcb,	// (0x0002ceb3) form2_midp_slider_pane_g4

0xe3b5,	// (0x0003329d) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x00034cea) form2_midp_slider_pane_g

0x2694,	// (0x0002757c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2694,	// (0x0002757c) vkb2_area_bottom_space_btn_pane_g4

0xb618,	// (0x00030500) lc0_navi_pane_ParamLimits

0xb618,	// (0x00030500) lc0_navi_pane

0xb688,	// (0x00030570) lc0_stat_indi_pane_ParamLimits

0xb688,	// (0x00030570) lc0_stat_indi_pane

0xb69d,	// (0x00030585) ls0_title_pane_ParamLimits

0xb69d,	// (0x00030585) ls0_title_pane

0xd33b,	// (0x00032223) bg_popup_sub_pane_cp14_ParamLimits

0x73ff,	// (0x0002c2e7) list_uniindi_pane_ParamLimits

0x740b,	// (0x0002c2f3) uniindi_top_pane_ParamLimits

0x74ab,	// (0x0002c393) list_single_uniindi_pane_g1_ParamLimits

0x74be,	// (0x0002c3a6) list_single_uniindi_pane_t1_ParamLimits

0xca54,	// (0x0003193c) lc0_stat_clock_pane_ParamLimits

0xca54,	// (0x0003193c) lc0_stat_clock_pane

0xe3be,	// (0x000332a6) lc0_stat_indi_pane_g1_ParamLimits

0xe3be,	// (0x000332a6) lc0_stat_indi_pane_g1

0xe3cb,	// (0x000332b3) lc0_stat_indi_pane_g2_ParamLimits

0xe3cb,	// (0x000332b3) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x00034cf5) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x00034cf5) lc0_stat_indi_pane_g

0xca61,	// (0x00031949) lc0_uni_indicator_pane_ParamLimits

0xca61,	// (0x00031949) lc0_uni_indicator_pane

0xe3d8,	// (0x000332c0) ls0_title_pane_g1_ParamLimits

0xe3d8,	// (0x000332c0) ls0_title_pane_g1

0xe3ec,	// (0x000332d4) ls0_title_pane_t1_ParamLimits

0xe3ec,	// (0x000332d4) ls0_title_pane_t1

0xca6e,	// (0x00031956) lc0_uni_indicator_pane_g1_ParamLimits

0xca6e,	// (0x00031956) lc0_uni_indicator_pane_g1

0x8070,	// (0x0002cf58) lc0_stat_clock_pane_t1

0xcc89,	// (0x00031b71) main_ai5_pane

0x807e,	// (0x0002cf66) ai5_sk_pane_ParamLimits

0x807e,	// (0x0002cf66) ai5_sk_pane

0xe41a,	// (0x00033302) cell_ai5_widget_pane_ParamLimits

0xe41a,	// (0x00033302) cell_ai5_widget_pane

0xe499,	// (0x00033381) aid_size_cell_widget_grid

0x8138,	// (0x0002d020) bg_ai5_widget_pane_ParamLimits

0x8138,	// (0x0002d020) bg_ai5_widget_pane

0xe4cd,	// (0x000333b5) cell_ai5_widget_pane_g2

0xe4e1,	// (0x000333c9) cell_ai5_widget_pane_g3

0xe4fb,	// (0x000333e3) cell_ai5_widget_pane_g4

0xe50b,	// (0x000333f3) cell_ai5_widget_pane_g5

0xe51b,	// (0x00033403) cell_ai5_widget_pane_g6

0xe527,	// (0x0003340f) cell_ai5_widget_pane_g7

0xe593,	// (0x0003347b) cell_ai5_widget_pane_t1_ParamLimits

0xe593,	// (0x0003347b) cell_ai5_widget_pane_t1

0xe5b0,	// (0x00033498) cell_ai5_widget_pane_t2_ParamLimits

0xe5b0,	// (0x00033498) cell_ai5_widget_pane_t2

0xe5c8,	// (0x000334b0) cell_ai5_widget_pane_t3_ParamLimits

0xe5c8,	// (0x000334b0) cell_ai5_widget_pane_t3

0xe5e0,	// (0x000334c8) cell_ai5_widget_pane_t4_ParamLimits

0xe5e0,	// (0x000334c8) cell_ai5_widget_pane_t4

0xe606,	// (0x000334ee) cell_ai5_widget_pane_t5_ParamLimits

0xe606,	// (0x000334ee) cell_ai5_widget_pane_t5

0x830d,	// (0x0002d1f5) cell_ai5_widget_pane_t6_ParamLimits

0x830d,	// (0x0002d1f5) cell_ai5_widget_pane_t6

0x831f,	// (0x0002d207) cell_ai5_widget_pane_t7_ParamLimits

0x831f,	// (0x0002d207) cell_ai5_widget_pane_t7

0xe626,	// (0x0003350e) cell_ai5_widget_pane_t8_ParamLimits

0xe626,	// (0x0003350e) cell_ai5_widget_pane_t8

0x000b,

0xfe2d,	// (0x00034d15) cell_ai5_widget_pane_t_ParamLimits

0xfe2d,	// (0x00034d15) cell_ai5_widget_pane_t

0xe6aa,	// (0x00033592) grid_ai5_widget_pane

0xd33b,	// (0x00032223) highlight_cell_ai5_widget_pane_ParamLimits

0xd33b,	// (0x00032223) highlight_cell_ai5_widget_pane

0xe6b8,	// (0x000335a0) ai5_sk_left_pane

0xe6c2,	// (0x000335aa) ai5_sk_middle_pane

0xe6cc,	// (0x000335b4) ai5_sk_right_pane

0x83ee,	// (0x0002d2d6) bg_ai5_widget_pane_g1_ParamLimits

0x83ee,	// (0x0002d2d6) bg_ai5_widget_pane_g1

0x83fa,	// (0x0002d2e2) bg_ai5_widget_pane_g2_ParamLimits

0x83fa,	// (0x0002d2e2) bg_ai5_widget_pane_g2

0x8406,	// (0x0002d2ee) bg_ai5_widget_pane_g3_ParamLimits

0x8406,	// (0x0002d2ee) bg_ai5_widget_pane_g3

0x8412,	// (0x0002d2fa) bg_ai5_widget_pane_g4_ParamLimits

0x8412,	// (0x0002d2fa) bg_ai5_widget_pane_g4

0x841e,	// (0x0002d306) bg_ai5_widget_pane_g5_ParamLimits

0x841e,	// (0x0002d306) bg_ai5_widget_pane_g5

0x842a,	// (0x0002d312) bg_ai5_widget_pane_g6_ParamLimits

0x842a,	// (0x0002d312) bg_ai5_widget_pane_g6

0x8436,	// (0x0002d31e) bg_ai5_widget_pane_g7_ParamLimits

0x8436,	// (0x0002d31e) bg_ai5_widget_pane_g7

0x8442,	// (0x0002d32a) bg_ai5_widget_pane_g8_ParamLimits

0x8442,	// (0x0002d32a) bg_ai5_widget_pane_g8

0x844e,	// (0x0002d336) bg_ai5_widget_pane_g9_ParamLimits

0x844e,	// (0x0002d336) bg_ai5_widget_pane_g9

0x0008,

0xfe46,	// (0x00034d2e) bg_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x00034d2e) bg_ai5_widget_pane_g

0xe700,	// (0x000335e8) cell_shortcut_ai5_widget_pane_ParamLimits

0xe700,	// (0x000335e8) cell_shortcut_ai5_widget_pane

0x2bf4,	// (0x00027adc) bg_cell_shortcut_ai5_widget_pane

0x8499,	// (0x0002d381) cell_grid_ai5_widget_pane_g1

0x2bf4,	// (0x00027adc) highlight_cell_shortcut_ai5_widget_pane

0x3461,	// (0x00028349) ai5_sk_left_pane_g1

0x84a2,	// (0x0002d38a) ai5_sk_left_pane_g2

0x84aa,	// (0x0002d392) ai5_sk_left_pane_g3

0x84b2,	// (0x0002d39a) ai5_sk_left_pane_g4

0x0003,

0xfe59,	// (0x00034d41) ai5_sk_left_pane_g

0x84ba,	// (0x0002d3a2) ai5_sk_left_pane_t1

0x3459,	// (0x00028341) ai5_sk_right_pane_g1

0x84c8,	// (0x0002d3b0) ai5_sk_right_pane_g2

0x84d0,	// (0x0002d3b8) ai5_sk_right_pane_g3

0x84d8,	// (0x0002d3c0) ai5_sk_right_pane_g4

0x0003,

0xfe62,	// (0x00034d4a) ai5_sk_right_pane_g

0x84e0,	// (0x0002d3c8) ai5_sk_right_pane_t1

0x3459,	// (0x00028341) ai5_sk_middle_pane_g1

0x3461,	// (0x00028349) ai5_sk_middle_pane_g2

0x3479,	// (0x00028361) ai5_sk_middle_pane_g3

0x84d0,	// (0x0002d3b8) ai5_sk_middle_pane_g4

0x84aa,	// (0x0002d392) ai5_sk_middle_pane_g5

0x84ee,	// (0x0002d3d6) ai5_sk_middle_pane_g6

0xe713,	// (0x000335fb) ai5_sk_middle_pane_g7

0x0006,

0xfe6b,	// (0x00034d53) ai5_sk_middle_pane_g

0xb502,	// (0x000303ea) aid_touch_area_size_lc0_ParamLimits

0xb502,	// (0x000303ea) aid_touch_area_size_lc0

0x1d78,	// (0x00026c60) cell_hwr_candidate_pane_t1_ParamLimits

0x2f99,	// (0x00027e81) aid_touch_navi_pane

0xb7a8,	// (0x00030690) status_dt_navi_pane_ParamLimits

0xb7a8,	// (0x00030690) status_dt_navi_pane

0xb7c0,	// (0x000306a8) status_dt_sta_pane_ParamLimits

0xb7c0,	// (0x000306a8) status_dt_sta_pane

0xe71b,	// (0x00033603) dt_sta_controll_pane

0xe728,	// (0x00033610) dt_sta_indi_pane

0xe735,	// (0x0003361d) dt_sta_title_pane

0xce2c,	// (0x00031d14) bg_dt_sta_indi_pane_ParamLimits

0xce2c,	// (0x00031d14) bg_dt_sta_indi_pane

0xe747,	// (0x0003362f) dt_sta_battery_pane

0xe74f,	// (0x00033637) dt_sta_indi_pane_g1

0xe758,	// (0x00033640) dt_sta_indi_pane_g2

0xe761,	// (0x00033649) dt_sta_indi_pane_g3

0x0002,

0xfe7a,	// (0x00034d62) dt_sta_indi_pane_g

0xe76a,	// (0x00033652) dt_sta_signal_pane

0xd33b,	// (0x00032223) bg_dt_sta_title_pane_ParamLimits

0xd33b,	// (0x00032223) bg_dt_sta_title_pane

0xe773,	// (0x0003365b) dt_sta_title_pane_g1

0xe77b,	// (0x00033663) dt_sta_title_pane_t1_ParamLimits

0xe77b,	// (0x00033663) dt_sta_title_pane_t1

0xcc89,	// (0x00031b71) bg_dt_sta_control_pane

0xe790,	// (0x00033678) dt_sta_controll_pane_g1

0xe799,	// (0x00033681) bg_dt_sta_title_pane_g1

0xe7a2,	// (0x0003368a) bg_dt_sta_title_pane_g2

0xe7ab,	// (0x00033693) bg_dt_sta_title_pane_g3

0x0002,

0xfe81,	// (0x00034d69) bg_dt_sta_title_pane_g

0x5a9c,	// (0x0002a984) bg_dt_sta_indi_pane_g1

0x859c,	// (0x0002d484) dt_sta_signal_pane_g1

0x85a4,	// (0x0002d48c) dt_sta_signal_pane_g2

0x0001,

0xfe88,	// (0x00034d70) dt_sta_signal_pane_g

0x85ac,	// (0x0002d494) dt_sta_battery_pane_g1

0x85b5,	// (0x0002d49d) dt_sta_battery_pane_t1

0x5a9c,	// (0x0002a984) bg_dt_sta_control_pane_g1

0x08a6,	// (0x0002578e) fep_china_uni_eep_pane

0x08ae,	// (0x00025796) fep_china_uni_entry_pane_ParamLimits

0x08be,	// (0x000257a6) popup_fep_china_uni_window_g1_ParamLimits

0x08ce,	// (0x000257b6) popup_fep_china_uni_window_g2_ParamLimits

0x08ce,	// (0x000257b6) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x000345e0) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x000345e0) popup_fep_china_uni_window_g

0x85c4,	// (0x0002d4ac) fep_china_uni_eep_pane_g1

0x85cc,	// (0x0002d4b4) fep_china_uni_eep_pane_t1

0x7fed,	// (0x0002ced5) aid_touch_area_size_smil_player

0x30ed,	// (0x00027fd5) lc0_clock_pane

0x32e4,	// (0x000281cc) status_pane_g5_ParamLimits

0x32e4,	// (0x000281cc) status_pane_g5

0xaf57,	// (0x0002fe3f) popup_keymap_window

0x32aa,	// (0x00028192) status_icon_pane

0xe4e1,	// (0x000333c9) cell_ai5_widget_pane_g3_ParamLimits

0xe4fb,	// (0x000333e3) cell_ai5_widget_pane_g4_ParamLimits

0xe50b,	// (0x000333f3) cell_ai5_widget_pane_g5_ParamLimits

0xe533,	// (0x0003341b) cell_ai5_widget_pane_g8_ParamLimits

0xe533,	// (0x0003341b) cell_ai5_widget_pane_g8

0xe547,	// (0x0003342f) cell_ai5_widget_pane_g9_ParamLimits

0xe547,	// (0x0003342f) cell_ai5_widget_pane_g9

0xe55b,	// (0x00033443) cell_ai5_widget_pane_g10_ParamLimits

0xe55b,	// (0x00033443) cell_ai5_widget_pane_g10

0x85db,	// (0x0002d4c3) status_icon_pane_g1

0xcc89,	// (0x00031b71) bg_popup_sub_pane_cp13

0x85e3,	// (0x0002d4cb) popup_keymap_window_t1

0x2ecc,	// (0x00027db4) control_pane_g6_ParamLimits

0x2ecc,	// (0x00027db4) control_pane_g6

0x2ed9,	// (0x00027dc1) control_pane_g7_ParamLimits

0x2ed9,	// (0x00027dc1) control_pane_g7

0x2ee6,	// (0x00027dce) control_pane_g8_ParamLimits

0x2ee6,	// (0x00027dce) control_pane_g8

0xe71b,	// (0x00033603) dt_sta_controll_pane_ParamLimits

0xe728,	// (0x00033610) dt_sta_indi_pane_ParamLimits

0xe735,	// (0x0003361d) dt_sta_title_pane_ParamLimits

0xd27d,	// (0x00032165) aid_size_touch_scroll_bar_cale

0xf45a,	// (0x00034342) popup_discreet_window_ParamLimits

0xf45a,	// (0x00034342) popup_discreet_window

0xa40f,	// (0x0002f2f7) popup_sk_window

0x3ab7,	// (0x0002899f) bg_popup_sub_pane_cp28_ParamLimits

0x3ab7,	// (0x0002899f) bg_popup_sub_pane_cp28

0x85f1,	// (0x0002d4d9) popup_discreet_window_g1_ParamLimits

0x85f1,	// (0x0002d4d9) popup_discreet_window_g1

0x8611,	// (0x0002d4f9) popup_discreet_window_t1_ParamLimits

0x8611,	// (0x0002d4f9) popup_discreet_window_t1

0x862f,	// (0x0002d517) popup_discreet_window_t2_ParamLimits

0x862f,	// (0x0002d517) popup_discreet_window_t2

0x0002,

0xfe8d,	// (0x00034d75) popup_discreet_window_t_ParamLimits

0xfe8d,	// (0x00034d75) popup_discreet_window_t

0x2705,	// (0x000275ed) popup_sk_window_g1

0x270f,	// (0x000275f7) popup_sk_window_g2

0x0001,

0xfe94,	// (0x00034d7c) popup_sk_window_g

0x2717,	// (0x000275ff) popup_sk_window_t1

0x2725,	// (0x0002760d) popup_sk_window_t1_copy1

0xe4cd,	// (0x000333b5) cell_ai5_widget_pane_g2_ParamLimits

0xe638,	// (0x00033520) cell_ai5_widget_pane_t9_ParamLimits

0xe638,	// (0x00033520) cell_ai5_widget_pane_t9

0xcc89,	// (0x00031b71) main_fep_fshwr2_pane

0xca8d,	// (0x00031975) aid_fshwr2_btn_pane

0xcaa1,	// (0x00031989) aid_fshwr2_syb_pane

0xcab5,	// (0x0003199d) aid_fshwr2_txt_pane

0xcac5,	// (0x000319ad) fshwr2_func_candi_pane

0xcae7,	// (0x000319cf) fshwr2_hwr_syb_pane

0xcb0b,	// (0x000319f3) fshwr2_icf_pane

0xcc89,	// (0x00031b71) fshwr2_icf_bg_pane

0x27d1,	// (0x000276b9) fshwr2_icf_pane_t1_ParamLimits

0x27d1,	// (0x000276b9) fshwr2_icf_pane_t1

0x06a6,	// (0x0002558e) fshwr2_func_candi_pane_g1

0xe7b4,	// (0x0003369c) fshwr2_func_candi_row_pane_ParamLimits

0xe7b4,	// (0x0003369c) fshwr2_func_candi_row_pane

0xcb3b,	// (0x00031a23) cell_fshwr2_syb_pane_ParamLimits

0xcb3b,	// (0x00031a23) cell_fshwr2_syb_pane

0x7fbd,	// (0x0002cea5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7fbd,	// (0x0002cea5) fshwr2_hwr_syb_pane_g1

0xcc89,	// (0x00031b71) bg_popup_call_pane_cp01

0xcb63,	// (0x00031a4b) fshwr2_func_candi_cell_pane_ParamLimits

0xcb63,	// (0x00031a4b) fshwr2_func_candi_cell_pane

0x3897,	// (0x0002877f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3897,	// (0x0002877f) fshwr2_func_candi_cell_bg_pane

0xcbae,	// (0x00031a96) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcbae,	// (0x00031a96) fshwr2_func_candi_cell_pane_g1

0xcbe5,	// (0x00031acd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcbe5,	// (0x00031acd) fshwr2_func_candi_cell_pane_t1

0xcc89,	// (0x00031b71) bg_button_pane_cp08

0x2f1b,	// (0x00027e03) cell_fshwr2_syb_bg_pane

0xcc00,	// (0x00031ae8) cell_fshwr2_syb_bg_pane_g1

0xcc14,	// (0x00031afc) cell_fshwr2_syb_bg_pane_t1

0xd33b,	// (0x00032223) main_tmo_pane

0xbcba,	// (0x00030ba2) uni_indicator_pane_g1_ParamLimits

0xbcd0,	// (0x00030bb8) uni_indicator_pane_g2_ParamLimits

0xbce6,	// (0x00030bce) uni_indicator_pane_g3_ParamLimits

0xbcf9,	// (0x00030be1) uni_indicator_pane_g4_ParamLimits

0xbcf9,	// (0x00030be1) uni_indicator_pane_g4

0x462e,	// (0x00029516) uni_indicator_pane_g5_ParamLimits

0x462e,	// (0x00029516) uni_indicator_pane_g5

0x462e,	// (0x00029516) uni_indicator_pane_g6_ParamLimits

0x462e,	// (0x00029516) uni_indicator_pane_g6

0xf8f7,	// (0x000347df) uni_indicator_pane_g_ParamLimits

0xd874,	// (0x0003275c) popup_tmo_note_window_ParamLimits

0xd874,	// (0x0003275c) popup_tmo_note_window

0xd33b,	// (0x00032223) fshwr2_bg_pane

0xcbd6,	// (0x00031abe) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcbd6,	// (0x00031abe) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe99,	// (0x00034d81) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe99,	// (0x00034d81) fshwr2_func_candi_cell_pane_g

0x5a9c,	// (0x0002a984) bg_popup_window_pane_cp01

0x28c3,	// (0x000277ab) bg_popup_window_pane_g1_cp01

0x86a4,	// (0x0002d58c) bg_popup_window_pane_cp22_ParamLimits

0x86a4,	// (0x0002d58c) bg_popup_window_pane_cp22

0x86b2,	// (0x0002d59a) listscroll_tmo_link_pane_ParamLimits

0x86b2,	// (0x0002d59a) listscroll_tmo_link_pane

0x86f2,	// (0x0002d5da) popup_tmo_note_window_g1_ParamLimits

0x86f2,	// (0x0002d5da) popup_tmo_note_window_g1

0x86ff,	// (0x0002d5e7) tmo_note_info_pane_ParamLimits

0x86ff,	// (0x0002d5e7) tmo_note_info_pane

0xe7db,	// (0x000336c3) list_tmo_note_info_pane_g1_ParamLimits

0xe7db,	// (0x000336c3) list_tmo_note_info_pane_g1

0x8730,	// (0x0002d618) list_tmo_note_info_pane_g2_ParamLimits

0x8730,	// (0x0002d618) list_tmo_note_info_pane_g2

0x0001,

0xfe9e,	// (0x00034d86) list_tmo_note_info_pane_g_ParamLimits

0xfe9e,	// (0x00034d86) list_tmo_note_info_pane_g

0x874c,	// (0x0002d634) list_tmo_note_info_text_pane_ParamLimits

0x874c,	// (0x0002d634) list_tmo_note_info_text_pane

0x87d1,	// (0x0002d6b9) list_tmo_link_pane

0x87de,	// (0x0002d6c6) scroll_pane_cp20

0x87eb,	// (0x0002d6d3) list_single_tmo_link_pane_ParamLimits

0x87eb,	// (0x0002d6d3) list_single_tmo_link_pane

0x87fb,	// (0x0002d6e3) list_single_tmo_link_pane_t1

0x8809,	// (0x0002d6f1) list_tmo_note_info_text_pane_t1_ParamLimits

0x8809,	// (0x0002d6f1) list_tmo_note_info_text_pane_t1

0xa8b5,	// (0x0002f79d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa8b5,	// (0x0002f79d) aid_size_touch_scroll_bar_cp01

0x9ea7,	// (0x0002ed8f) aid_size_touch_slider_marker

0xa3ff,	// (0x0002f2e7) popup_settings_window_ParamLimits

0xa3ff,	// (0x0002f2e7) popup_settings_window

0xec43,	// (0x00033b2b) popup_candi_list_indi_window

0x2f99,	// (0x00027e81) aid_touch_navi_pane_ParamLimits

0x1ee8,	// (0x00026dd0) rs_clock_indi_pane

0x1ef1,	// (0x00026dd9) sctrl_sk_bottom_pane_ParamLimits

0x1f02,	// (0x00026dea) sctrl_sk_top_pane_ParamLimits

0x1fe3,	// (0x00026ecb) popup_fep_tooltip_window

0xe499,	// (0x00033381) aid_size_cell_widget_grid_ParamLimits

0xe4b8,	// (0x000333a0) cell_ai5_widget_pane_g1_ParamLimits

0xe4b8,	// (0x000333a0) cell_ai5_widget_pane_g1

0xe51b,	// (0x00033403) cell_ai5_widget_pane_g6_ParamLimits

0xe527,	// (0x0003340f) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe12,	// (0x00034cfa) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x00034cfa) cell_ai5_widget_pane_g

0xe667,	// (0x0003354f) cell_ai5_widget_pane_t10_ParamLimits

0xe667,	// (0x0003354f) cell_ai5_widget_pane_t10

0xe6aa,	// (0x00033592) grid_ai5_widget_pane_ParamLimits

0xe6d6,	// (0x000335be) cell_contacts_ai5_widget_pane_ParamLimits

0xe6d6,	// (0x000335be) cell_contacts_ai5_widget_pane

0x8644,	// (0x0002d52c) popup_discreet_window_t3_ParamLimits

0x8644,	// (0x0002d52c) popup_discreet_window_t3

0xcb27,	// (0x00031a0f) popup_fshwr2_char_preview_window_ParamLimits

0xcb27,	// (0x00031a0f) popup_fshwr2_char_preview_window

0xe7f2,	// (0x000336da) tmo_note_info_pane_t1

0xe807,	// (0x000336ef) tmo_note_info_pane_t2

0xe820,	// (0x00033708) tmo_note_info_pane_t3

0x87ad,	// (0x0002d695) tmo_note_info_pane_t4

0x87bf,	// (0x0002d6a7) tmo_note_info_pane_t5

0x0004,

0xfea3,	// (0x00034d8b) tmo_note_info_pane_t

0x87d1,	// (0x0002d6b9) list_tmo_link_pane_ParamLimits

0x87de,	// (0x0002d6c6) scroll_pane_cp20_ParamLimits

0xcc89,	// (0x00031b71) bg_popup_fep_char_preview_window_cp01

0x8822,	// (0x0002d70a) popup_fshwr2_char_preview_window_t1

0x8830,	// (0x0002d718) popup_candi_list_indi_window_g1

0x8839,	// (0x0002d721) bg_cell_contacts_ai5_widget_pane

0xe835,	// (0x0003371d) cell_contacts_ai5_widget_pane_g1

0x885a,	// (0x0002d742) cell_contacts_ai5_widget_pane_g2

0x8866,	// (0x0002d74e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeae,	// (0x00034d96) cell_contacts_ai5_widget_pane_g

0x8872,	// (0x0002d75a) cell_contacts_ai5_widget_pane_t1

0xd33b,	// (0x00032223) highlight_cell_shortcut_ai5_widget_pane_cp01

0x88e9,	// (0x0002d7d1) settings_container_pane

0x2bf4,	// (0x00027adc) listscroll_set_pane_copy1

0x51cd,	// (0x0002a0b5) scroll_pane_cp121_copy1

0x88f5,	// (0x0002d7dd) set_content_pane_copy1

0x88fd,	// (0x0002d7e5) aid_height_set_list_copy1_ParamLimits

0x88fd,	// (0x0002d7e5) aid_height_set_list_copy1

0x482e,	// (0x00029716) aid_size_parent_copy1_ParamLimits

0x482e,	// (0x00029716) aid_size_parent_copy1

0x8909,	// (0x0002d7f1) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8909,	// (0x0002d7f1) button_value_adjust_pane_cp6_copy1

0x2f1b,	// (0x00027e03) list_highlight_pane_cp2_copy1_ParamLimits

0x2f1b,	// (0x00027e03) list_highlight_pane_cp2_copy1

0x891d,	// (0x0002d805) list_set_pane_copy1_ParamLimits

0x891d,	// (0x0002d805) list_set_pane_copy1

0x8884,	// (0x0002d76c) main_pane_set_t1_copy1_ParamLimits

0x8884,	// (0x0002d76c) main_pane_set_t1_copy1

0x88be,	// (0x0002d7a6) main_pane_set_t2_copy1_ParamLimits

0x88be,	// (0x0002d7a6) main_pane_set_t2_copy1

0x89de,	// (0x0002d8c6) main_pane_set_t3_copy1

0x89ec,	// (0x0002d8d4) main_pane_set_t4_copy1

0x88dd,	// (0x0002d7c5) set_content_pane_g1_copy1_ParamLimits

0x88dd,	// (0x0002d7c5) set_content_pane_g1_copy1

0x89fa,	// (0x0002d8e2) setting_code_pane_copy1

0x8a02,	// (0x0002d8ea) setting_slider_graphic_pane_copy1

0x8a02,	// (0x0002d8ea) setting_slider_pane_copy1

0x8a0a,	// (0x0002d8f2) setting_text_pane_copy1

0x8a0a,	// (0x0002d8f2) setting_volume_pane_copy1

0x89fa,	// (0x0002d8e2) settings_code_pane_cp2_copy1

0x8a12,	// (0x0002d8fa) settings_code_pane_cp_copy1_ParamLimits

0x8a12,	// (0x0002d8fa) settings_code_pane_cp_copy1

0x28cc,	// (0x000277b4) volume_set_pane_copy1

0x8a26,	// (0x0002d90e) volume_set_pane_g10_copy1

0x8a32,	// (0x0002d91a) volume_set_pane_g1_copy1

0x8a3c,	// (0x0002d924) volume_set_pane_g2_copy1

0x8a46,	// (0x0002d92e) volume_set_pane_g3_copy1

0x8a50,	// (0x0002d938) volume_set_pane_g4_copy1

0x8a5a,	// (0x0002d942) volume_set_pane_g5_copy1

0x8a64,	// (0x0002d94c) volume_set_pane_g6_copy1

0x8a6e,	// (0x0002d956) volume_set_pane_g7_copy1

0x8a78,	// (0x0002d960) volume_set_pane_g8_copy1

0x8a82,	// (0x0002d96a) volume_set_pane_g9_copy1

0xccf9,	// (0x00031be1) bg_set_opt_pane_cp_copy1_ParamLimits

0xccf9,	// (0x00031be1) bg_set_opt_pane_cp_copy1

0x28d8,	// (0x000277c0) setting_slider_pane_t1_copy1_ParamLimits

0x28d8,	// (0x000277c0) setting_slider_pane_t1_copy1

0x28f7,	// (0x000277df) setting_slider_pane_t2_copy1_ParamLimits

0x28f7,	// (0x000277df) setting_slider_pane_t2_copy1

0x2911,	// (0x000277f9) setting_slider_pane_t3_copy1_ParamLimits

0x2911,	// (0x000277f9) setting_slider_pane_t3_copy1

0x2929,	// (0x00027811) slider_set_pane_copy1_ParamLimits

0x2929,	// (0x00027811) slider_set_pane_copy1

0xd393,	// (0x0003227b) set_opt_bg_pane_g1_copy2

0xd39b,	// (0x00032283) set_opt_bg_pane_g2_copy2

0x8a8e,	// (0x0002d976) set_opt_bg_pane_g3_copy2

0xd3ab,	// (0x00032293) set_opt_bg_pane_g4_copy2

0xd3b3,	// (0x0003229b) set_opt_bg_pane_g5_copy2

0xd3bb,	// (0x000322a3) set_opt_bg_pane_g6_copy2

0x8a98,	// (0x0002d980) set_opt_bg_pane_g7_copy2

0x8aa2,	// (0x0002d98a) set_opt_bg_pane_g8_copy2

0x8aac,	// (0x0002d994) set_opt_bg_pane_g9_copy2

0x293f,	// (0x00027827) aid_size_touch_slider_mark_copy1_ParamLimits

0x293f,	// (0x00027827) aid_size_touch_slider_mark_copy1

0x8ab6,	// (0x0002d99e) slider_set_pane_g1_copy1

0x2953,	// (0x0002783b) slider_set_pane_g2_copy1

0x19b0,	// (0x00026898) slider_set_pane_g3_copy1_ParamLimits

0x19b0,	// (0x00026898) slider_set_pane_g3_copy1

0x19c4,	// (0x000268ac) slider_set_pane_g4_copy1_ParamLimits

0x19c4,	// (0x000268ac) slider_set_pane_g4_copy1

0x19dc,	// (0x000268c4) slider_set_pane_g5_copy1_ParamLimits

0x19dc,	// (0x000268c4) slider_set_pane_g5_copy1

0x19b0,	// (0x00026898) slider_set_pane_g6_copy1_ParamLimits

0x19b0,	// (0x00026898) slider_set_pane_g6_copy1

0x295b,	// (0x00027843) slider_set_pane_g7_copy1_ParamLimits

0x295b,	// (0x00027843) slider_set_pane_g7_copy1

0xcc9d,	// (0x00031b85) bg_set_opt_pane_cp2_copy1

0x8abf,	// (0x0002d9a7) setting_slider_graphic_pane_g1_copy1

0x8ac8,	// (0x0002d9b0) setting_slider_graphic_pane_t1_copy1

0x8ad8,	// (0x0002d9c0) setting_slider_graphic_pane_t2_copy1

0x8ae8,	// (0x0002d9d0) slider_set_pane_cp_copy1

0x8af8,	// (0x0002d9e0) input_focus_pane_cp1_copy1

0x8b01,	// (0x0002d9e9) list_set_text_pane_copy1

0x8b09,	// (0x0002d9f1) setting_text_pane_g1_copy1

0xf2d9,	// (0x000341c1) set_text_pane_t1_copy1

0x8af8,	// (0x0002d9e0) input_focus_pane_cp2_copy1

0x8b09,	// (0x0002d9f1) setting_code_pane_g1_copy1

0x8b12,	// (0x0002d9fa) setting_code_pane_t1_copy1

0x4fd2,	// (0x00029eba) list_set_graphic_pane_copy1

0xcc9d,	// (0x00031b85) bg_set_opt_pane_cp4_copy1

0x0be4,	// (0x00025acc) list_set_graphic_pane_g1_copy1_ParamLimits

0x0be4,	// (0x00025acc) list_set_graphic_pane_g1_copy1

0x8b20,	// (0x0002da08) list_set_graphic_pane_g2_copy1

0x0bfc,	// (0x00025ae4) list_set_graphic_pane_t1_copy1_ParamLimits

0x0bfc,	// (0x00025ae4) list_set_graphic_pane_t1_copy1

0x5a9c,	// (0x0002a984) rs_clock_indi_pane_g1

0x8b28,	// (0x0002da10) rs_clock_indi_pane_t1

0x8b36,	// (0x0002da1e) rs_indi_pane

0x8b3e,	// (0x0002da26) rs_indi_pane_g1

0x8b47,	// (0x0002da2f) rs_indi_pane_g2

0x8830,	// (0x0002d718) rs_indi_pane_g3

0x0002,

0xfeb5,	// (0x00034d9d) rs_indi_pane_g

0x2bf4,	// (0x00027adc) bg_popup_preview_window_pane_cp03

0x8b50,	// (0x0002da38) popup_fep_tooltip_window_t1

0x6779,	// (0x0002b661) popup_note2_window_g2_ParamLimits

0x6779,	// (0x0002b661) popup_note2_window_g2

0x0001,

0xfc42,	// (0x00034b2a) popup_note2_window_g_ParamLimits

0xfc42,	// (0x00034b2a) popup_note2_window_g

0x6c81,	// (0x0002bb69) bg_popup_sub_pane_cp11_ParamLimits

0x6c8e,	// (0x0002bb76) cell_ai3_links_pane_g1_ParamLimits

0x6ca5,	// (0x0002bb8d) cell_ai3_links_pane_t1

0xf2d9,	// (0x000341c1) set_text_pane_t1_copy1_ParamLimits

0x0df7,	// (0x00025cdf) cell_graphic_popup_pane_cp2_ParamLimits

0x0df7,	// (0x00025cdf) cell_graphic_popup_pane_cp2

0x8b5e,	// (0x0002da46) cell_graphic_popup_pane_g1_cp2

0xd090,	// (0x00031f78) cell_graphic_popup_pane_g2_cp2

0x8b66,	// (0x0002da4e) cell_graphic_popup_pane_g3_cp2

0x8b6e,	// (0x0002da56) cell_graphic_popup_pane_t2_cp2

0xd0a1,	// (0x00031f89) grid_highlight_pane_cp3_cp2

0xd64f,	// (0x00032537) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd33b,	// (0x00032223) main_tmo_pane_ParamLimits

0xd868,	// (0x00032750) popup_tmo_big_image_note_window

0xe4a7,	// (0x0003338f) cell_ai5_widget_list_pane

0xe4af,	// (0x00033397) cell_ai5_widget_lrg_icon_pane

0xe7f2,	// (0x000336da) tmo_note_info_pane_t1_ParamLimits

0xe807,	// (0x000336ef) tmo_note_info_pane_t2_ParamLimits

0xe820,	// (0x00033708) tmo_note_info_pane_t3_ParamLimits

0x87ad,	// (0x0002d695) tmo_note_info_pane_t4_ParamLimits

0x87bf,	// (0x0002d6a7) tmo_note_info_pane_t5_ParamLimits

0xfea3,	// (0x00034d8b) tmo_note_info_pane_t_ParamLimits

0x88e9,	// (0x0002d7d1) settings_container_pane_ParamLimits

0x8af0,	// (0x0002d9d8) indicator_popup_pane_cp5

0x8af0,	// (0x0002d9d8) indicator_popup_pane_cp6

0x4fd2,	// (0x00029eba) list_set_graphic_pane_copy1_ParamLimits

0xcc89,	// (0x00031b71) bg_popup_window_pane_cp23

0x8b7c,	// (0x0002da64) popup_tmo_big_image_note_window_g1

0x8b88,	// (0x0002da70) popup_tmo_big_image_note_window_t1

0x8b98,	// (0x0002da80) popup_tmo_big_image_note_window_t2

0x8ba8,	// (0x0002da90) popup_tmo_big_image_note_window_t3

0x0002,

0xfebc,	// (0x00034da4) popup_tmo_big_image_note_window_t

0x5a9c,	// (0x0002a984) cell_ai5_widget_lrg_icon_pane_g1

0xe84a,	// (0x00033732) cell_ai5_widget_lrg_icon_pane_t1

0xe858,	// (0x00033740) cell_ai5_widget_list_row_pane_ParamLimits

0xe858,	// (0x00033740) cell_ai5_widget_list_row_pane

0xe870,	// (0x00033758) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe870,	// (0x00033758) cell_ai5_widget_list_row_pane_g1

0xe87d,	// (0x00033765) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe87d,	// (0x00033765) cell_ai5_widget_list_row_pane_t1

0xe8a8,	// (0x00033790) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe8a8,	// (0x00033790) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec3,	// (0x00034dab) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec3,	// (0x00034dab) cell_ai5_widget_list_row_pane_t

0xcc89,	// (0x00031b71) main_fep_vtchi_ss_pane

0x8c66,	// (0x0002db4e) popup_fep_char_pre_window

0x8c6e,	// (0x0002db56) popup_fep_ituss_window

0xe8fa,	// (0x000337e2) popup_fep_vkbss_window

0x2f1b,	// (0x00027e03) grid_vkbss_keypad_pane_ParamLimits

0x2f1b,	// (0x00027e03) grid_vkbss_keypad_pane

0x8cdc,	// (0x0002dbc4) ituss_keypad_pane

0x297b,	// (0x00027863) aid_vkbss_key_offset_ParamLimits

0x297b,	// (0x00027863) aid_vkbss_key_offset

0xcc2a,	// (0x00031b12) cell_vkbss_key_pane_ParamLimits

0xcc2a,	// (0x00031b12) cell_vkbss_key_pane

0x8ce8,	// (0x0002dbd0) bg_cell_vkbss_key_g1_ParamLimits

0x8ce8,	// (0x0002dbd0) bg_cell_vkbss_key_g1

0xe909,	// (0x000337f1) cell_vkbss_key_3p_pane_ParamLimits

0xe909,	// (0x000337f1) cell_vkbss_key_3p_pane

0xe93f,	// (0x00033827) cell_vkbss_key_g1_ParamLimits

0xe93f,	// (0x00033827) cell_vkbss_key_g1

0xe975,	// (0x0003385d) cell_vkbss_key_t1_ParamLimits

0xe975,	// (0x0003385d) cell_vkbss_key_t1

0x29e9,	// (0x000278d1) cell_ituss_key_pane_ParamLimits

0x29e9,	// (0x000278d1) cell_ituss_key_pane

0x8dbc,	// (0x0002dca4) bg_cell_ituss_key_g1_ParamLimits

0x8dbc,	// (0x0002dca4) bg_cell_ituss_key_g1

0x8dc8,	// (0x0002dcb0) cell_ituss_key_pane_g1_ParamLimits

0x8dc8,	// (0x0002dcb0) cell_ituss_key_pane_g1

0x29fa,	// (0x000278e2) cell_ituss_key_pane_g2_ParamLimits

0x29fa,	// (0x000278e2) cell_ituss_key_pane_g2

0x0005,

0xfeca,	// (0x00034db2) cell_ituss_key_pane_g_ParamLimits

0xfeca,	// (0x00034db2) cell_ituss_key_pane_g

0x2a7e,	// (0x00027966) cell_ituss_key_t1_ParamLimits

0x2a7e,	// (0x00027966) cell_ituss_key_t1

0x2ab8,	// (0x000279a0) cell_ituss_key_t2_ParamLimits

0x2ab8,	// (0x000279a0) cell_ituss_key_t2

0x2aea,	// (0x000279d2) cell_ituss_key_t3_ParamLimits

0x2aea,	// (0x000279d2) cell_ituss_key_t3

0x2b1b,	// (0x00027a03) cell_ituss_key_t4_ParamLimits

0x2b1b,	// (0x00027a03) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x00034dbf) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00034dbf) cell_ituss_key_t

0xe9d1,	// (0x000338b9) cell_vkbss_key_3p_pane_g1

0xe9d9,	// (0x000338c1) cell_vkbss_key_3p_pane_g2

0xe9e1,	// (0x000338c9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x00034dca) cell_vkbss_key_3p_pane_g

0x2bf4,	// (0x00027adc) bg_popup_fep_char_preview_window_cp02

0x8e06,	// (0x0002dcee) popup_fep_char_pre_window_t1

0xe486,	// (0x0003336e) main_ai5_sk_pane

0x8839,	// (0x0002d721) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe835,	// (0x0003371d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x885a,	// (0x0002d742) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8866,	// (0x0002d74e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeae,	// (0x00034d96) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8872,	// (0x0002d75a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd33b,	// (0x00032223) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9e9,	// (0x000338d1) main_ai5_sk_pane_g1

0x38ef,	// (0x000287d7) popup_query_code_window_g1

0xe8eb,	// (0x000337d3) popup_fep_vkb_icf_pane

0x8cb3,	// (0x0002db9b) popup_fep_vtchi_icf_pane

0x8e1d,	// (0x0002dd05) bg_icf_pane

0x8e1d,	// (0x0002dd05) list_vkb_icf_pane

0x8e29,	// (0x0002dd11) bg_icf_pane_cp01

0x8e3c,	// (0x0002dd24) vtchi_icf_list_pane

0xea3e,	// (0x00033926) list_vkb_icf_pane_t1_ParamLimits

0xea3e,	// (0x00033926) list_vkb_icf_pane_t1

0x8eb5,	// (0x0002dd9d) vtchi_icf_list_pane_t1_ParamLimits

0x8eb5,	// (0x0002dd9d) vtchi_icf_list_pane_t1

0x8c6e,	// (0x0002db56) popup_fep_ituss_window_ParamLimits

0x8cb3,	// (0x0002db9b) popup_fep_vtchi_icf_pane_ParamLimits

0x8cdc,	// (0x0002dbc4) ituss_keypad_pane_ParamLimits

0x2971,	// (0x00027859) ituss_sks_pane

0x8e1d,	// (0x0002dd05) bg_icf_pane_ParamLimits

0xe8d0,	// (0x000337b8) icf_edit_indi_pane_ParamLimits

0xe8d0,	// (0x000337b8) icf_edit_indi_pane

0x8e1d,	// (0x0002dd05) list_vkb_icf_pane_ParamLimits

0x8e29,	// (0x0002dd11) bg_icf_pane_cp01_ParamLimits

0x8c59,	// (0x0002db41) icf_edit_indi_pane_cp01_ParamLimits

0x8c59,	// (0x0002db41) icf_edit_indi_pane_cp01

0x8e3c,	// (0x0002dd24) vtchi_query_pane

0x7fbd,	// (0x0002cea5) icf_edit_indi_pane_g1_ParamLimits

0x7fbd,	// (0x0002cea5) icf_edit_indi_pane_g1

0xea55,	// (0x0003393d) icf_edit_indi_pane_g2_ParamLimits

0xea55,	// (0x0003393d) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00034df5) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00034df5) icf_edit_indi_pane_g

0xea69,	// (0x00033951) icf_edit_indi_pane_t1

0x8ece,	// (0x0002ddb6) bg_input_focus_pane_cp042

0xd274,	// (0x0003215c) vtchi_button_pane

0x8ed7,	// (0x0002ddbf) vtchi_query_pane_t1

0x8ee5,	// (0x0002ddcd) vtchi_query_pane_t2

0x8ef3,	// (0x0002dddb) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00034de4) vtchi_query_pane_t

0xcc89,	// (0x00031b71) bg_button_pane_cp13

0x8f01,	// (0x0002dde9) vtchi_button_pane_g1

0x2b5e,	// (0x00027a46) ituss_sks_pane_g1

0x2b69,	// (0x00027a51) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00034deb) ituss_sks_pane_g

0x8f09,	// (0x0002ddf1) ituss_sks_pane_t1

0x8f17,	// (0x0002ddff) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00034df0) ituss_sks_pane_t

0x5570,	// (0x0002a458) indicator_nsta_pane_cp_g1

0x5579,	// (0x0002a461) indicator_nsta_pane_cp_g2

0x5581,	// (0x0002a469) indicator_nsta_pane_cp_g3

0x5589,	// (0x0002a471) indicator_nsta_pane_cp_g4

0x5579,	// (0x0002a461) indicator_nsta_pane_cp_g5

0x5581,	// (0x0002a469) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00034974) indicator_nsta_pane_cp_g

0xe28e,	// (0x00033176) cell_graphic2_pane_t2_ParamLimits

0xe28e,	// (0x00033176) cell_graphic2_pane_t2

0x0001,

0xfd99,	// (0x00034c81) cell_graphic2_pane_t_ParamLimits

0xfd99,	// (0x00034c81) cell_graphic2_pane_t

0xe2c6,	// (0x000331ae) cell_graphic2_control_pane_t1

0xab2f,	// (0x0002fa17) signal_pane_g3_ParamLimits

0xab2f,	// (0x0002fa17) signal_pane_g3

0xab43,	// (0x0002fa2b) signal_pane_g4_ParamLimits

0xab43,	// (0x0002fa2b) signal_pane_g4

0xe8ba,	// (0x000337a2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe8ba,	// (0x000337a2) cell_ai5_widget_list_row_pane_t3

0x8ddc,	// (0x0002dcc4) cell_ituss_key_pane_t1_ParamLimits

0x8ddc,	// (0x0002dcc4) cell_ituss_key_pane_t1

0x3556,	// (0x0002843e) form_field_data_wide_pane_vc_t2_ParamLimits

0x3556,	// (0x0002843e) form_field_data_wide_pane_vc_t2

0x356a,	// (0x00028452) form_field_data_wide_pane_vc_t3_ParamLimits

0x356a,	// (0x00028452) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x000346c7) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x000346c7) form_field_data_wide_pane_vc_t

0x520d,	// (0x0002a0f5) form_field_slider_wide_pane_vc_t3_ParamLimits

0x520d,	// (0x0002a0f5) form_field_slider_wide_pane_vc_t3

0x52e3,	// (0x0002a1cb) form_field_popup_wide_pane_vc_t2_ParamLimits

0x52e3,	// (0x0002a1cb) form_field_popup_wide_pane_vc_t2

0x52fa,	// (0x0002a1e2) form_field_popup_wide_pane_vc_t3_ParamLimits

0x52fa,	// (0x0002a1e2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00034963) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00034963) form_field_popup_wide_pane_vc_t

0xca8d,	// (0x00031975) aid_fshwr2_btn_pane_ParamLimits

0xcaa1,	// (0x00031989) aid_fshwr2_syb_pane_ParamLimits

0xcab5,	// (0x0003199d) aid_fshwr2_txt_pane_ParamLimits

0xd33b,	// (0x00032223) fshwr2_bg_pane_ParamLimits

0xcac5,	// (0x000319ad) fshwr2_func_candi_pane_ParamLimits

0xcae7,	// (0x000319cf) fshwr2_hwr_syb_pane_ParamLimits

0xcb0b,	// (0x000319f3) fshwr2_icf_pane_ParamLimits

0xf055,	// (0x00033f3d) list_double_graphic_pane_vc_g4_ParamLimits

0xf055,	// (0x00033f3d) list_double_graphic_pane_vc_g4

0x2a1a,	// (0x00027902) cell_ituss_key_pane_g3_ParamLimits

0x2a1a,	// (0x00027902) cell_ituss_key_pane_g3

0x2b4c,	// (0x00027a34) cell_ituss_key_t5_ParamLimits

0x2b4c,	// (0x00027a34) cell_ituss_key_t5

0xe8fa,	// (0x000337e2) popup_fep_vkbss_window_ParamLimits

0xe490,	// (0x00033378) aid_cell_ai5_quarter

0xea69,	// (0x00033951) icf_edit_indi_pane_t1_ParamLimits

0xced4,	// (0x00031dbc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xced4,	// (0x00031dbc) aid_tch_indicator_popup_pane_cp2

0xcee7,	// (0x00031dcf) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xcee7,	// (0x00031dcf) aid_tch_query_popup_data_pane_cp2

0x3897,	// (0x0002877f) aid_tch_query_popup_pane_ParamLimits

0x3897,	// (0x0002877f) aid_tch_query_popup_pane

0x3897,	// (0x0002877f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3897,	// (0x0002877f) aid_tch_query_popup_data_pane_cp1

0x2f1b,	// (0x00027e03) cell_fshwr2_syb_bg_pane_ParamLimits

0xcc00,	// (0x00031ae8) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcc14,	// (0x00031afc) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe8eb,	// (0x000337d3) popup_fep_vkb_icf_pane_ParamLimits

0xca21,	// (0x00031909) bg_popup_fep_char_preview_window_g10

0xe56f,	// (0x00033457) cell_ai5_widget_pane_g11_ParamLimits

0xe56f,	// (0x00033457) cell_ai5_widget_pane_g11

0xe57b,	// (0x00033463) cell_ai5_widget_pane_g12_ParamLimits

0xe57b,	// (0x00033463) cell_ai5_widget_pane_g12

0xe587,	// (0x0003346f) cell_ai5_widget_pane_g13_ParamLimits

0xe587,	// (0x0003346f) cell_ai5_widget_pane_g13

0xe686,	// (0x0003356e) cell_ai5_widget_pane_t11_ParamLimits

0xe686,	// (0x0003356e) cell_ai5_widget_pane_t11

0xe698,	// (0x00033580) cell_ai5_widget_pane_t12_ParamLimits

0xe698,	// (0x00033580) cell_ai5_widget_pane_t12

0x2a26,	// (0x0002790e) cell_ituss_key_pane_g4_ParamLimits

0x2a26,	// (0x0002790e) cell_ituss_key_pane_g4

0x2a42,	// (0x0002792a) cell_ituss_key_pane_g5_ParamLimits

0x2a42,	// (0x0002792a) cell_ituss_key_pane_g5

0x2a5e,	// (0x00027946) cell_ituss_key_pane_g6_ParamLimits

0x2a5e,	// (0x00027946) cell_ituss_key_pane_g6

0x3451,	// (0x00028339) bg_icf_pane_g1

0xe9f2,	// (0x000338da) bg_icf_pane_g2

0xe9fc,	// (0x000338e4) bg_icf_pane_g3

0xea04,	// (0x000338ec) bg_icf_pane_g4

0xea0e,	// (0x000338f6) bg_icf_pane_g5

0xea18,	// (0x00033900) bg_icf_pane_g6

0xea22,	// (0x0003390a) bg_icf_pane_g7

0xea2a,	// (0x00033912) bg_icf_pane_g8

0xea34,	// (0x0003391c) bg_icf_pane_g9

0x0008,

0xfee9,	// (0x00034dd1) bg_icf_pane_g

0x8cc9,	// (0x0002dbb1) popup_hyb_candi_window_ParamLimits

0x8cc9,	// (0x0002dbb1) popup_hyb_candi_window

0x34c5,	// (0x000283ad) bg_popup_sub_pane_cp01_ParamLimits

0x34c5,	// (0x000283ad) bg_popup_sub_pane_cp01

0x8f52,	// (0x0002de3a) entry_hyb_candi_pane_ParamLimits

0x8f52,	// (0x0002de3a) entry_hyb_candi_pane

0x8f61,	// (0x0002de49) grid_hyb_candi_pane_ParamLimits

0x8f61,	// (0x0002de49) grid_hyb_candi_pane

0x8f76,	// (0x0002de5e) grid_hyb_phrase_pane_ParamLimits

0x8f76,	// (0x0002de5e) grid_hyb_phrase_pane

0x8f85,	// (0x0002de6d) cell_hyb_candi_pane_ParamLimits

0x8f85,	// (0x0002de6d) cell_hyb_candi_pane

0xd27d,	// (0x00032165) cell_hyb_candi_scroll_pane

0x06a6,	// (0x0002558e) cell_hyb_candi_pane_g1

0x8fa1,	// (0x0002de89) cell_hyb_candi_pane_t1

0x8faf,	// (0x0002de97) cell_hyb_phrase_pane

0x06a6,	// (0x0002558e) cell_hyb_phrase_pane_g1

0x8fb8,	// (0x0002dea0) cell_hyb_phrase_pane_t1

0x8fc6,	// (0x0002deae) entry_hyb_candi_pane_t1

0x2bf4,	// (0x00027adc) input_focus_pane_cp06

0x8fd4,	// (0x0002debc) cell_hyb_candi_scroll_pane_g1

0x8fdc,	// (0x0002dec4) cell_hyb_candi_scroll_pane_g1_aid

0x8fe4,	// (0x0002decc) cell_hyb_candi_scroll_pane_g2

0x8fec,	// (0x0002ded4) cell_hyb_candi_scroll_pane_g2_aid

0x8ff4,	// (0x0002dedc) cell_hyb_candi_scroll_pane_g3

0x8ffc,	// (0x0002dee4) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

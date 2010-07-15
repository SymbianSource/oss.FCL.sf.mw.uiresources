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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00002113 };

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
0x9b25,	// (0x0000bc38) Screen

0x9b31,	// (0x0000bc44) application_window_ParamLimits

0x9b31,	// (0x0000bc44) application_window

0xe1ee,	// (0x00010301) screen_g1

0x9b69,	// (0x0000bc7c) area_bottom_pane_ParamLimits

0x9b69,	// (0x0000bc7c) area_bottom_pane

0xe218,	// (0x0001032b) area_top_pane_ParamLimits

0xe218,	// (0x0001032b) area_top_pane

0xe2ac,	// (0x000103bf) main_pane_ParamLimits

0xe2ac,	// (0x000103bf) main_pane

0xe367,	// (0x0001047a) misc_graphics

0xb4a3,	// (0x0000d5b6) battery_pane_ParamLimits

0xb4a3,	// (0x0000d5b6) battery_pane

0x20e6,	// (0x000041f9) bg_status_flat_pane_g8

0x20ee,	// (0x00004201) bg_status_flat_pane_g9

0x1264,	// (0x00003377) context_pane_ParamLimits

0x1264,	// (0x00003377) context_pane

0xb61a,	// (0x0000d72d) navi_pane_ParamLimits

0xb61a,	// (0x0000d72d) navi_pane

0xb6a4,	// (0x0000d7b7) signal_pane_ParamLimits

0xb6a4,	// (0x0000d7b7) signal_pane

0x0008,

0xf868,	// (0x0001197b) bg_status_flat_pane_g

0xb734,	// (0x0000d847) status_pane_g1_ParamLimits

0xb734,	// (0x0000d847) status_pane_g1

0xb74a,	// (0x0000d85d) status_pane_g2_ParamLimits

0xb74a,	// (0x0000d85d) status_pane_g2

0x149d,	// (0x000035b0) status_pane_g3_ParamLimits

0x149d,	// (0x000035b0) status_pane_g3

0x0004,

0xf79b,	// (0x000118ae) status_pane_g_ParamLimits

0xf79b,	// (0x000118ae) status_pane_g

0xb756,	// (0x0000d869) title_pane_ParamLimits

0xb756,	// (0x0000d869) title_pane

0xb7bd,	// (0x0000d8d0) uni_indicator_pane_ParamLimits

0xb7bd,	// (0x0000d8d0) uni_indicator_pane

0x0a93,	// (0x00002ba6) bg_list_pane_ParamLimits

0x0a93,	// (0x00002ba6) bg_list_pane

0xace3,	// (0x0000cdf6) find_pane

0x1865,	// (0x00003978) listscroll_app_pane_ParamLimits

0x1865,	// (0x00003978) listscroll_app_pane

0x0ac7,	// (0x00002bda) listscroll_form_pane

0xaceb,	// (0x0000cdfe) listscroll_gen_pane_ParamLimits

0xaceb,	// (0x0000cdfe) listscroll_gen_pane

0x0ae3,	// (0x00002bf6) listscroll_set_pane

0x2ee8,	// (0x00004ffb) main_idle_act_pane

0x055d,	// (0x00002670) main_idle_trad_pane

0x055d,	// (0x00002670) main_list_empty_pane

0x0abb,	// (0x00002bce) main_midp_pane

0x0afd,	// (0x00002c10) main_pane_g1_ParamLimits

0x0afd,	// (0x00002c10) main_pane_g1

0xacff,	// (0x0000ce12) popup_ai_message_window_ParamLimits

0xacff,	// (0x0000ce12) popup_ai_message_window

0xad9f,	// (0x0000ceb2) popup_fep_china_uni_window_ParamLimits

0xad9f,	// (0x0000ceb2) popup_fep_china_uni_window

0x0c27,	// (0x00002d3a) popup_fep_japan_candidate_window_ParamLimits

0x0c27,	// (0x00002d3a) popup_fep_japan_candidate_window

0x0c51,	// (0x00002d64) popup_fep_japan_predictive_window_ParamLimits

0x0c51,	// (0x00002d64) popup_fep_japan_predictive_window

0xadff,	// (0x0000cf12) popup_find_window

0xae1c,	// (0x0000cf2f) popup_grid_graphic_window_ParamLimits

0xae1c,	// (0x0000cf2f) popup_grid_graphic_window

0x0cc2,	// (0x00002dd5) popup_large_graphic_colour_window

0xaec0,	// (0x0000cfd3) popup_menu_window_ParamLimits

0xaec0,	// (0x0000cfd3) popup_menu_window

0xb0b0,	// (0x0000d1c3) popup_note_image_window

0xb070,	// (0x0000d183) popup_note_wait_window_ParamLimits

0xb070,	// (0x0000d183) popup_note_wait_window

0xb0c8,	// (0x0000d1db) popup_note_window_ParamLimits

0xb0c8,	// (0x0000d1db) popup_note_window

0xb176,	// (0x0000d289) popup_query_code_window_ParamLimits

0xb176,	// (0x0000d289) popup_query_code_window

0x0f2e,	// (0x00003041) popup_query_data_code_window_ParamLimits

0x0f2e,	// (0x00003041) popup_query_data_code_window

0xb1b6,	// (0x0000d2c9) popup_query_data_window_ParamLimits

0xb1b6,	// (0x0000d2c9) popup_query_data_window

0xb24a,	// (0x0000d35d) popup_query_sat_info_window_ParamLimits

0xb24a,	// (0x0000d35d) popup_query_sat_info_window

0xb2f3,	// (0x0000d406) popup_snote_single_graphic_window_ParamLimits

0xb2f3,	// (0x0000d406) popup_snote_single_graphic_window

0xb2f3,	// (0x0000d406) popup_snote_single_text_window_ParamLimits

0xb2f3,	// (0x0000d406) popup_snote_single_text_window

0x0fc9,	// (0x000030dc) popup_sub_window_general

0x110f,	// (0x00003222) popup_window_general_ParamLimits

0x110f,	// (0x00003222) popup_window_general

0x1128,	// (0x0000323b) power_save_pane

0xab43,	// (0x0000cc56) control_pane_g1_ParamLimits

0xab43,	// (0x0000cc56) control_pane_g1

0xab6c,	// (0x0000cc7f) control_pane_g2_ParamLimits

0xab6c,	// (0x0000cc7f) control_pane_g2

0x0922,	// (0x00002a35) control_pane_g3_ParamLimits

0x0922,	// (0x00002a35) control_pane_g3

0x0007,

0xf783,	// (0x00011896) control_pane_g_ParamLimits

0xf783,	// (0x00011896) control_pane_g

0xabd2,	// (0x0000cce5) control_pane_t1_ParamLimits

0xabd2,	// (0x0000cce5) control_pane_t1

0xac38,	// (0x0000cd4b) control_pane_t2_ParamLimits

0xac38,	// (0x0000cd4b) control_pane_t2

0x0002,

0xf794,	// (0x000118a7) control_pane_t_ParamLimits

0xf794,	// (0x000118a7) control_pane_t

0xaa9c,	// (0x0000cbaf) navi_navi_volume_pane_cp1

0xaaa4,	// (0x0000cbb7) status_small_icon_pane

0x0805,	// (0x00002918) status_small_pane_g1_ParamLimits

0x0805,	// (0x00002918) status_small_pane_g1

0xaaac,	// (0x0000cbbf) status_small_pane_g2_ParamLimits

0xaaac,	// (0x0000cbbf) status_small_pane_g2

0xaab8,	// (0x0000cbcb) status_small_pane_g3_ParamLimits

0xaab8,	// (0x0000cbcb) status_small_pane_g3

0xaac4,	// (0x0000cbd7) status_small_pane_g4_ParamLimits

0xaac4,	// (0x0000cbd7) status_small_pane_g4

0xaad0,	// (0x0000cbe3) status_small_pane_g5_ParamLimits

0xaad0,	// (0x0000cbe3) status_small_pane_g5

0xaade,	// (0x0000cbf1) status_small_pane_g6_ParamLimits

0xaade,	// (0x0000cbf1) status_small_pane_g6

0x0007,

0xf772,	// (0x00011885) status_small_pane_g_ParamLimits

0xf772,	// (0x00011885) status_small_pane_g

0xab0d,	// (0x0000cc20) status_small_pane_t1

0xab2f,	// (0x0000cc42) status_small_wait_pane_ParamLimits

0xab2f,	// (0x0000cc42) status_small_wait_pane

0xa87d,	// (0x0000c990) aid_levels_signal_ParamLimits

0xa87d,	// (0x0000c990) aid_levels_signal

0xa895,	// (0x0000c9a8) signal_pane_g1_ParamLimits

0xa895,	// (0x0000c9a8) signal_pane_g1

0xa8b0,	// (0x0000c9c3) signal_pane_g2_ParamLimits

0xa8b0,	// (0x0000c9c3) signal_pane_g2

0x0003,

0xf703,	// (0x00011816) signal_pane_g_ParamLimits

0xf703,	// (0x00011816) signal_pane_g

0xf382,	// (0x00011495) context_pane_g1

0x9d55,	// (0x0000be68) title_pane_g1

0x9d98,	// (0x0000beab) title_pane_t1

0xe3d1,	// (0x000104e4) title_pane_t2

0xe3f7,	// (0x0001050a) title_pane_t3

0x0002,

0xf557,	// (0x0001166a) title_pane_t

0xb7e5,	// (0x0000d8f8) aid_levels_battery_ParamLimits

0xb7e5,	// (0x0000d8f8) aid_levels_battery

0xb801,	// (0x0000d914) battery_pane_g1_ParamLimits

0xb801,	// (0x0000d914) battery_pane_g1

0xb81e,	// (0x0000d931) battery_pane_g2_ParamLimits

0xb81e,	// (0x0000d931) battery_pane_g2

0x0001,

0xf7a6,	// (0x000118b9) battery_pane_g_ParamLimits

0xf7a6,	// (0x000118b9) battery_pane_g

0xbc15,	// (0x0000dd28) uni_indicator_pane_g1

0xbc2b,	// (0x0000dd3e) uni_indicator_pane_g2

0xbc41,	// (0x0000dd54) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x00011a23) uni_indicator_pane_g

0x03d7,	// (0x000024ea) navi_icon_pane_ParamLimits

0x03d7,	// (0x000024ea) navi_icon_pane

0x0313,	// (0x00002426) navi_midp_pane

0x03f3,	// (0x00002506) navi_navi_pane

0x03fd,	// (0x00002510) navi_text_pane_ParamLimits

0x03fd,	// (0x00002510) navi_text_pane

0xe1ee,	// (0x00010301) status_small_wait_pane_g1

0xe7c5,	// (0x000108d8) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x00011a1e) status_small_wait_pane_g

0xbbb4,	// (0x0000dcc7) navi_navi_icon_text_pane

0xbbbc,	// (0x0000dccf) navi_navi_pane_g1_ParamLimits

0xbbbc,	// (0x0000dccf) navi_navi_pane_g1

0xbbce,	// (0x0000dce1) navi_navi_pane_g2_ParamLimits

0xbbce,	// (0x0000dce1) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x000119ec) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x000119ec) navi_navi_pane_g

0x28db,	// (0x000049ee) navi_navi_tabs_pane

0xbbe0,	// (0x0000dcf3) navi_navi_text_pane

0xbbb4,	// (0x0000dcc7) navi_navi_volume_pane

0xbba2,	// (0x0000dcb5) navi_text_pane_t1

0xbb96,	// (0x0000dca9) navi_icon_pane_g1

0x27d2,	// (0x000048e5) navi_navi_text_pane_t1

0xbb85,	// (0x0000dc98) navi_navi_volume_pane_g1

0xbb8d,	// (0x0000dca0) volume_small_pane

0xbae1,	// (0x0000dbf4) navi_navi_icon_text_pane_g1

0xbae9,	// (0x0000dbfc) navi_navi_icon_text_pane_t1

0x03f3,	// (0x00002506) navi_tabs_2_long_pane

0x03f3,	// (0x00002506) navi_tabs_2_pane

0x03f3,	// (0x00002506) navi_tabs_3_long_pane

0x03f3,	// (0x00002506) navi_tabs_3_pane

0x03f3,	// (0x00002506) navi_tabs_4_pane

0xbac1,	// (0x0000dbd4) tabs_2_active_pane_ParamLimits

0xbac1,	// (0x0000dbd4) tabs_2_active_pane

0xbad1,	// (0x0000dbe4) tabs_2_passive_pane_ParamLimits

0xbad1,	// (0x0000dbe4) tabs_2_passive_pane

0xba8f,	// (0x0000dba2) tabs_3_active_pane_ParamLimits

0xba8f,	// (0x0000dba2) tabs_3_active_pane

0xba9f,	// (0x0000dbb2) tabs_3_passive_pane_ParamLimits

0xba9f,	// (0x0000dbb2) tabs_3_passive_pane

0xbab0,	// (0x0000dbc3) tabs_3_passive_pane_cp_ParamLimits

0xbab0,	// (0x0000dbc3) tabs_3_passive_pane_cp

0xba4b,	// (0x0000db5e) tabs_4_active_pane_ParamLimits

0xba4b,	// (0x0000db5e) tabs_4_active_pane

0xba5c,	// (0x0000db6f) tabs_4_passive_pane_ParamLimits

0xba5c,	// (0x0000db6f) tabs_4_passive_pane

0xba6d,	// (0x0000db80) tabs_4_passive_pane_cp_ParamLimits

0xba6d,	// (0x0000db80) tabs_4_passive_pane_cp

0xba7e,	// (0x0000db91) tabs_4_passive_pane_cp2_ParamLimits

0xba7e,	// (0x0000db91) tabs_4_passive_pane_cp2

0xba27,	// (0x0000db3a) tabs_2_long_active_pane_ParamLimits

0xba27,	// (0x0000db3a) tabs_2_long_active_pane

0xba39,	// (0x0000db4c) tabs_2_long_passive_pane_ParamLimits

0xba39,	// (0x0000db4c) tabs_2_long_passive_pane

0xb9dc,	// (0x0000daef) tabs_3_long_active_pane_ParamLimits

0xb9dc,	// (0x0000daef) tabs_3_long_active_pane

0xb9f5,	// (0x0000db08) tabs_3_long_passive_pane_ParamLimits

0xb9f5,	// (0x0000db08) tabs_3_long_passive_pane

0xba0e,	// (0x0000db21) tabs_3_long_passive_pane_cp_ParamLimits

0xba0e,	// (0x0000db21) tabs_3_long_passive_pane_cp

0x254b,	// (0x0000465e) volume_small_pane_g1

0xb98b,	// (0x0000da9e) volume_small_pane_g2

0xb994,	// (0x0000daa7) volume_small_pane_g3

0xb99d,	// (0x0000dab0) volume_small_pane_g4

0xb9a6,	// (0x0000dab9) volume_small_pane_g5

0xb9af,	// (0x0000dac2) volume_small_pane_g6

0xb9b8,	// (0x0000dacb) volume_small_pane_g7

0xb9c1,	// (0x0000dad4) volume_small_pane_g8

0xb9ca,	// (0x0000dadd) volume_small_pane_g9

0xb9d3,	// (0x0000dae6) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x000119b8) volume_small_pane_g

0xe409,	// (0x0001051c) bg_active_tab_pane_cp2_ParamLimits

0xe409,	// (0x0001051c) bg_active_tab_pane_cp2

0x9e24,	// (0x0000bf37) tabs_3_active_pane_g1

0x9e2c,	// (0x0000bf3f) tabs_3_active_pane_t1

0xe409,	// (0x0001051c) bg_passive_tab_pane_cp2_ParamLimits

0xe409,	// (0x0001051c) bg_passive_tab_pane_cp2

0x9e24,	// (0x0000bf37) tabs_3_passive_pane_g1

0x9e2c,	// (0x0000bf3f) tabs_3_passive_pane_t1

0xe409,	// (0x0001051c) bg_active_tab_pane_cp3_ParamLimits

0xe409,	// (0x0001051c) bg_active_tab_pane_cp3

0x9e3e,	// (0x0000bf51) tabs_4_active_pane_g1

0x9e46,	// (0x0000bf59) tabs_4_active_pane_t1

0xe409,	// (0x0001051c) bg_passive_tab_pane_cp3_ParamLimits

0xe409,	// (0x0001051c) bg_passive_tab_pane_cp3

0x9e3e,	// (0x0000bf51) tabs_4_1_passive_pane_g1

0x9e46,	// (0x0000bf59) tabs_4_1_passive_pane_t1

0x0abb,	// (0x00002bce) list_highlight_pane_cp2

0x2f0e,	// (0x00005021) list_set_pane_ParamLimits

0x2f0e,	// (0x00005021) list_set_pane

0xbcd4,	// (0x0000dde7) main_pane_set_t1_ParamLimits

0xbcd4,	// (0x0000dde7) main_pane_set_t1

0xbcf4,	// (0x0000de07) main_pane_set_t2_ParamLimits

0xbcf4,	// (0x0000de07) main_pane_set_t2

0xbd08,	// (0x0000de1b) main_pane_set_t3_ParamLimits

0xbd08,	// (0x0000de1b) main_pane_set_t3

0xbd1c,	// (0x0000de2f) main_pane_set_t4_ParamLimits

0xbd1c,	// (0x0000de2f) main_pane_set_t4

0x0003,

0xf975,	// (0x00011a88) main_pane_set_t_ParamLimits

0xf975,	// (0x00011a88) main_pane_set_t

0xbd30,	// (0x0000de43) setting_code_pane

0x3036,	// (0x00005149) setting_slider_graphic_pane

0x3036,	// (0x00005149) setting_slider_pane

0x3036,	// (0x00005149) setting_text_pane

0x3036,	// (0x00005149) setting_volume_pane

0xe417,	// (0x0001052a) volume_set_pane

0xe421,	// (0x00010534) bg_set_opt_pane_cp

0xe42f,	// (0x00010542) setting_slider_pane_t1

0xe448,	// (0x0001055b) setting_slider_pane_t2

0xe462,	// (0x00010575) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00011671) setting_slider_pane_t

0xe47a,	// (0x0001058d) slider_set_pane

0xe367,	// (0x0001047a) bg_set_opt_pane_cp2

0xe490,	// (0x000105a3) setting_slider_graphic_pane_g1

0xe499,	// (0x000105ac) setting_slider_graphic_pane_t1

0xe4a9,	// (0x000105bc) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00011678) setting_slider_graphic_pane_t

0xe4b9,	// (0x000105cc) slider_set_pane_cp

0xe367,	// (0x0001047a) input_focus_pane_cp1

0x2ecf,	// (0x00004fe2) list_set_text_pane

0xe1ee,	// (0x00010301) setting_text_pane_g1

0xe367,	// (0x0001047a) input_focus_pane_cp2

0xe1ee,	// (0x00010301) setting_code_pane_g1

0xe4c1,	// (0x000105d4) setting_code_pane_t1

0xe4cf,	// (0x000105e2) set_text_pane_t1_ParamLimits

0xe4cf,	// (0x000105e2) set_text_pane_t1

0xec37,	// (0x00010d4a) set_opt_bg_pane_g1

0xec3f,	// (0x00010d52) set_opt_bg_pane_g2

0x2ea7,	// (0x00004fba) set_opt_bg_pane_g3

0xec4f,	// (0x00010d62) set_opt_bg_pane_g4

0xec57,	// (0x00010d6a) set_opt_bg_pane_g5

0xec5f,	// (0x00010d72) set_opt_bg_pane_g6

0x2eb1,	// (0x00004fc4) set_opt_bg_pane_g7

0x2ebb,	// (0x00004fce) set_opt_bg_pane_g8

0x2ec5,	// (0x00004fd8) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x00011a75) set_opt_bg_pane_g

0x2e36,	// (0x00004f49) slider_set_pane_g1

0x2e43,	// (0x00004f56) slider_set_pane_g2

0x0006,

0xf953,	// (0x00011a66) slider_set_pane_g

0x2c9e,	// (0x00004db1) volume_set_pane_g1

0x2ca8,	// (0x00004dbb) volume_set_pane_g2

0x2cb2,	// (0x00004dc5) volume_set_pane_g3

0x2cbc,	// (0x00004dcf) volume_set_pane_g4

0x2cc6,	// (0x00004dd9) volume_set_pane_g5

0x2cd0,	// (0x00004de3) volume_set_pane_g6

0x2cda,	// (0x00004ded) volume_set_pane_g7

0x2ce4,	// (0x00004df7) volume_set_pane_g8

0x2cee,	// (0x00004e01) volume_set_pane_g9

0x2cf8,	// (0x00004e0b) volume_set_pane_g10

0x0009,

0xf92b,	// (0x00011a3e) volume_set_pane_g

0x9e58,	// (0x0000bf6b) indicator_pane_ParamLimits

0x9e58,	// (0x0000bf6b) indicator_pane

0x9e84,	// (0x0000bf97) main_idle_pane_g2_ParamLimits

0x9e84,	// (0x0000bf97) main_idle_pane_g2

0x9ebc,	// (0x0000bfcf) main_pane_idle_g1_ParamLimits

0x9ebc,	// (0x0000bfcf) main_pane_idle_g1

0xe4e9,	// (0x000105fc) popup_clock_digital_analogue_window_ParamLimits

0xe4e9,	// (0x000105fc) popup_clock_digital_analogue_window

0x9ee6,	// (0x0000bff9) soft_indicator_pane_ParamLimits

0x9ee6,	// (0x0000bff9) soft_indicator_pane

0x9f02,	// (0x0000c015) wallpaper_pane_ParamLimits

0x9f02,	// (0x0000c015) wallpaper_pane

0xe1ee,	// (0x00010301) wallpaper_pane_g1

0x9f14,	// (0x0000c027) indicator_pane_g1_ParamLimits

0x9f14,	// (0x0000c027) indicator_pane_g1

0x3436,	// (0x00005549) navi_navi_icon_text_pane_srt_g1

0xe517,	// (0x0001062a) soft_indicator_pane_t1

0xe531,	// (0x00010644) aid_ps_area_pane

0x9f2d,	// (0x0000c040) aid_ps_clock_pane

0xe542,	// (0x00010655) aid_ps_indicator_pane

0xe54e,	// (0x00010661) indicator_ps_pane_ParamLimits

0xe54e,	// (0x00010661) indicator_ps_pane

0xe55d,	// (0x00010670) power_save_pane_g1_ParamLimits

0xe55d,	// (0x00010670) power_save_pane_g1

0xe569,	// (0x0001067c) power_save_pane_g2_ParamLimits

0xe569,	// (0x0001067c) power_save_pane_g2

0xe1f8,	// (0x0001030b) aid_navinavi_width_pane

0xe531,	// (0x00010644) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001167d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001167d) power_save_pane_g

0xe577,	// (0x0001068a) power_save_pane_t1_ParamLimits

0xe577,	// (0x0001068a) power_save_pane_t1

0x9f2d,	// (0x0000c040) aid_ps_clock_pane_ParamLimits

0xe542,	// (0x00010655) aid_ps_indicator_pane_ParamLimits

0xe589,	// (0x0001069c) power_save_pane_t4_ParamLimits

0xe589,	// (0x0001069c) power_save_pane_t4

0x0001,

0xf56f,	// (0x00011682) power_save_pane_t_ParamLimits

0xf56f,	// (0x00011682) power_save_pane_t

0xe5b3,	// (0x000106c6) power_save_t3_ParamLimits

0xe5b3,	// (0x000106c6) power_save_t3

0xe59e,	// (0x000106b1) power_save_t2_ParamLimits

0xe59e,	// (0x000106b1) power_save_t2

0xe5c8,	// (0x000106db) indicator_ps_pane_g1

0x9f3b,	// (0x0000c04e) ai_gene_pane_ParamLimits

0x9f3b,	// (0x0000c04e) ai_gene_pane

0x9f52,	// (0x0000c065) ai_links_pane_ParamLimits

0x9f52,	// (0x0000c065) ai_links_pane

0x9f6a,	// (0x0000c07d) indicator_pane_cp1_ParamLimits

0x9f6a,	// (0x0000c07d) indicator_pane_cp1

0x9f79,	// (0x0000c08c) main_pane_idle_g1_cp_ParamLimits

0x9f79,	// (0x0000c08c) main_pane_idle_g1_cp

0xe5d1,	// (0x000106e4) popup_ai_links_title_window

0x9f91,	// (0x0000c0a4) soft_indicator_pane_cp1_ParamLimits

0x9f91,	// (0x0000c0a4) soft_indicator_pane_cp1

0x2b8a,	// (0x00004c9d) ai_links_pane_g1

0x2b93,	// (0x00004ca6) grid_ai_links_pane

0xbc0c,	// (0x0000dd1f) ai_gene_pane_1

0x2b78,	// (0x00004c8b) ai_gene_pane_2

0x2b81,	// (0x00004c94) list_highlight_pane_cp4

0xbbe8,	// (0x0000dcfb) cell_ai_link_pane_ParamLimits

0xbbe8,	// (0x0000dcfb) cell_ai_link_pane

0x2b47,	// (0x00004c5a) cell_ai_link_pane_g1

0xe7c5,	// (0x000108d8) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x00011a19) cell_ai_link_pane_g

0xe367,	// (0x0001047a) grid_highlight_cp2

0xe367,	// (0x0001047a) bg_popup_sub_pane_cp1

0xe5e8,	// (0x000106fb) popup_ai_links_title_window_t1

0x2a93,	// (0x00004ba6) ai_gene_pane_1_g1_ParamLimits

0x2a93,	// (0x00004ba6) ai_gene_pane_1_g1

0x2a9f,	// (0x00004bb2) ai_gene_pane_1_g2_ParamLimits

0x2a9f,	// (0x00004bb2) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x00011a0f) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x00011a0f) ai_gene_pane_1_g

0x2aac,	// (0x00004bbf) ai_gene_pane_1_t1_ParamLimits

0x2aac,	// (0x00004bbf) ai_gene_pane_1_t1

0x2ae0,	// (0x00004bf3) grid_ai_soft_ind_pane

0x2a7e,	// (0x00004b91) ai_gene_pane_2_t1_ParamLimits

0x2a7e,	// (0x00004b91) ai_gene_pane_2_t1

0x9fa5,	// (0x0000c0b8) main_pane_empty_t1_ParamLimits

0x9fa5,	// (0x0000c0b8) main_pane_empty_t1

0x9fbd,	// (0x0000c0d0) main_pane_empty_t2_ParamLimits

0x9fbd,	// (0x0000c0d0) main_pane_empty_t2

0x9fd2,	// (0x0000c0e5) main_pane_empty_t3_ParamLimits

0x9fd2,	// (0x0000c0e5) main_pane_empty_t3

0x9fe4,	// (0x0000c0f7) main_pane_empty_t4_ParamLimits

0x9fe4,	// (0x0000c0f7) main_pane_empty_t4

0x9ff6,	// (0x0000c109) main_pane_empty_t5_ParamLimits

0x9ff6,	// (0x0000c109) main_pane_empty_t5

0x0004,

0xf574,	// (0x00011687) main_pane_empty_t_ParamLimits

0xf574,	// (0x00011687) main_pane_empty_t

0xecc3,	// (0x00010dd6) bg_popup_window_pane_ParamLimits

0xecc3,	// (0x00010dd6) bg_popup_window_pane

0x27e0,	// (0x000048f3) find_popup_pane_cp2_ParamLimits

0x27e0,	// (0x000048f3) find_popup_pane_cp2

0x27ec,	// (0x000048ff) heading_pane_ParamLimits

0x27ec,	// (0x000048ff) heading_pane

0xe367,	// (0x0001047a) bg_popup_sub_pane

0xbb06,	// (0x0000dc19) bg_popup_window_pane_g1_ParamLimits

0xbb06,	// (0x0000dc19) bg_popup_window_pane_g1

0xbb15,	// (0x0000dc28) bg_popup_window_pane_g2_ParamLimits

0xbb15,	// (0x0000dc28) bg_popup_window_pane_g2

0xbb21,	// (0x0000dc34) bg_popup_window_pane_g3_ParamLimits

0xbb21,	// (0x0000dc34) bg_popup_window_pane_g3

0xbb2d,	// (0x0000dc40) bg_popup_window_pane_g4_ParamLimits

0xbb2d,	// (0x0000dc40) bg_popup_window_pane_g4

0xbb3c,	// (0x0000dc4f) bg_popup_window_pane_g5_ParamLimits

0xbb3c,	// (0x0000dc4f) bg_popup_window_pane_g5

0xbb4c,	// (0x0000dc5f) bg_popup_window_pane_g6_ParamLimits

0xbb4c,	// (0x0000dc5f) bg_popup_window_pane_g6

0xbb58,	// (0x0000dc6b) bg_popup_window_pane_g7_ParamLimits

0xbb58,	// (0x0000dc6b) bg_popup_window_pane_g7

0xbb67,	// (0x0000dc7a) bg_popup_window_pane_g8_ParamLimits

0xbb67,	// (0x0000dc7a) bg_popup_window_pane_g8

0xbb76,	// (0x0000dc89) bg_popup_window_pane_g9_ParamLimits

0xbb76,	// (0x0000dc89) bg_popup_window_pane_g9

0x27b5,	// (0x000048c8) bg_popup_window_pane_g10_ParamLimits

0x27b5,	// (0x000048c8) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x000119d7) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x000119d7) bg_popup_window_pane_g

0x26de,	// (0x000047f1) bg_popup_heading_pane_ParamLimits

0x26de,	// (0x000047f1) bg_popup_heading_pane

0x3379,	// (0x0000548c) tabs_4_passive_pane_cp_srt_ParamLimits

0x3379,	// (0x0000548c) tabs_4_passive_pane_cp_srt

0x338b,	// (0x0000549e) tabs_4_passive_pane_srt_ParamLimits

0x26f2,	// (0x00004805) heading_pane_g2

0x338b,	// (0x0000549e) tabs_4_passive_pane_srt

0x1865,	// (0x00003978) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1865,	// (0x00003978) bg_passive_tab_pane_cp3_srt

0x26fa,	// (0x0000480d) heading_pane_t1_ParamLimits

0x26fa,	// (0x0000480d) heading_pane_t1

0x2711,	// (0x00004824) heading_pane_t2_ParamLimits

0x2711,	// (0x00004824) heading_pane_t2

0x0001,

0xf8bf,	// (0x000119d2) heading_pane_t_ParamLimits

0xf8bf,	// (0x000119d2) heading_pane_t

0x20ae,	// (0x000041c1) bg_popup_heading_pane_g1

0x215d,	// (0x00004270) bg_popup_heading_pane_g2

0x2167,	// (0x0000427a) bg_popup_heading_pane_g3

0x2171,	// (0x00004284) bg_popup_heading_pane_g4

0x217b,	// (0x0000428e) bg_popup_heading_pane_g5

0x2185,	// (0x00004298) bg_popup_heading_pane_g6

0x218d,	// (0x000042a0) bg_popup_heading_pane_g7

0x2195,	// (0x000042a8) bg_popup_heading_pane_g8

0x219f,	// (0x000042b2) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x0001198e) bg_popup_heading_pane_g

0x16ca,	// (0x000037dd) bg_popup_sub_pane_g1

0x16d2,	// (0x000037e5) bg_popup_sub_pane_g2

0x16da,	// (0x000037ed) bg_popup_sub_pane_g3

0x16e2,	// (0x000037f5) bg_popup_sub_pane_g4

0x16ea,	// (0x000037fd) bg_popup_sub_pane_g5

0x16f2,	// (0x00003805) bg_popup_sub_pane_g6

0x16fa,	// (0x0000380d) bg_popup_sub_pane_g7

0x1702,	// (0x00003815) bg_popup_sub_pane_g8

0x170a,	// (0x0000381d) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00011968) bg_popup_sub_pane_g

0xe409,	// (0x0001051c) bg_popup_window_pane_cp5_ParamLimits

0xe409,	// (0x0001051c) bg_popup_window_pane_cp5

0xe605,	// (0x00010718) popup_note_window_g1_ParamLimits

0xe605,	// (0x00010718) popup_note_window_g1

0xe611,	// (0x00010724) popup_note_window_t1_ParamLimits

0xe611,	// (0x00010724) popup_note_window_t1

0xe627,	// (0x0001073a) popup_note_window_t2_ParamLimits

0xe627,	// (0x0001073a) popup_note_window_t2

0xe63d,	// (0x00010750) popup_note_window_t3_ParamLimits

0xe63d,	// (0x00010750) popup_note_window_t3

0xe653,	// (0x00010766) popup_note_window_t4_ParamLimits

0xe653,	// (0x00010766) popup_note_window_t4

0xe67b,	// (0x0001078e) popup_note_window_t5_ParamLimits

0xe67b,	// (0x0001078e) popup_note_window_t5

0x0004,

0xf57f,	// (0x00011692) popup_note_window_t_ParamLimits

0xf57f,	// (0x00011692) popup_note_window_t

0xe6c5,	// (0x000107d8) bg_popup_window_pane_cp6_ParamLimits

0xe6c5,	// (0x000107d8) bg_popup_window_pane_cp6

0x202a,	// (0x0000413d) popup_note_image_window_g1_ParamLimits

0x202a,	// (0x0000413d) popup_note_image_window_g1

0x2036,	// (0x00004149) popup_note_image_window_g2_ParamLimits

0x2036,	// (0x00004149) popup_note_image_window_g2

0x0001,

0xf849,	// (0x0001195c) popup_note_image_window_g_ParamLimits

0xf849,	// (0x0001195c) popup_note_image_window_g

0x204f,	// (0x00004162) popup_note_image_window_t1_ParamLimits

0x204f,	// (0x00004162) popup_note_image_window_t1

0x2068,	// (0x0000417b) popup_note_image_window_t2_ParamLimits

0x2068,	// (0x0000417b) popup_note_image_window_t2

0x2081,	// (0x00004194) popup_note_image_window_t3_ParamLimits

0x2081,	// (0x00004194) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x00011961) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x00011961) popup_note_image_window_t

0x1eea,	// (0x00003ffd) bg_popup_window_pane_cp7_ParamLimits

0x1eea,	// (0x00003ffd) bg_popup_window_pane_cp7

0x1f1a,	// (0x0000402d) popup_note_wait_window_g1_ParamLimits

0x1f1a,	// (0x0000402d) popup_note_wait_window_g1

0x1f26,	// (0x00004039) popup_note_wait_window_g2_ParamLimits

0x1f26,	// (0x00004039) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x0001194a) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x0001194a) popup_note_wait_window_g

0x1f3e,	// (0x00004051) popup_note_wait_window_t1_ParamLimits

0x1f3e,	// (0x00004051) popup_note_wait_window_t1

0x1f65,	// (0x00004078) popup_note_wait_window_t2_ParamLimits

0x1f65,	// (0x00004078) popup_note_wait_window_t2

0x1f83,	// (0x00004096) popup_note_wait_window_t3_ParamLimits

0x1f83,	// (0x00004096) popup_note_wait_window_t3

0x1f96,	// (0x000040a9) popup_note_wait_window_t4_ParamLimits

0x1f96,	// (0x000040a9) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x00011951) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x00011951) popup_note_wait_window_t

0x1fbb,	// (0x000040ce) wait_bar_pane_ParamLimits

0x1fbb,	// (0x000040ce) wait_bar_pane

0xe367,	// (0x0001047a) wait_anim_pane

0xe367,	// (0x0001047a) wait_border_pane

0xe1ee,	// (0x00010301) wait_anim_pane_g1

0xe1ee,	// (0x00010301) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00011811) wait_anim_pane_g

0x1e8e,	// (0x00003fa1) wait_border_pane_g1

0x1e99,	// (0x00003fac) wait_border_pane_g2

0x1ea2,	// (0x00003fb5) wait_border_pane_g3

0x0002,

0xf830,	// (0x00011943) wait_border_pane_g

0x1cf8,	// (0x00003e0b) bg_popup_window_pane_cp16_ParamLimits

0x1cf8,	// (0x00003e0b) bg_popup_window_pane_cp16

0x1df8,	// (0x00003f0b) indicator_popup_pane_cp4_ParamLimits

0x1df8,	// (0x00003f0b) indicator_popup_pane_cp4

0x1e0c,	// (0x00003f1f) popup_query_data_window_t1_ParamLimits

0x1e0c,	// (0x00003f1f) popup_query_data_window_t1

0x1e1e,	// (0x00003f31) popup_query_data_window_t2_ParamLimits

0x1e1e,	// (0x00003f31) popup_query_data_window_t2

0x1e37,	// (0x00003f4a) popup_query_data_window_t3_ParamLimits

0x1e37,	// (0x00003f4a) popup_query_data_window_t3

0x0002,

0xf829,	// (0x0001193c) popup_query_data_window_t_ParamLimits

0xf829,	// (0x0001193c) popup_query_data_window_t

0x1e51,	// (0x00003f64) query_popup_data_pane_ParamLimits

0x1e51,	// (0x00003f64) query_popup_data_pane

0x1e65,	// (0x00003f78) query_popup_data_pane_cp1_ParamLimits

0x1e65,	// (0x00003f78) query_popup_data_pane_cp1

0x1cf8,	// (0x00003e0b) bg_popup_window_pane_cp10_ParamLimits

0x1cf8,	// (0x00003e0b) bg_popup_window_pane_cp10

0x1d2a,	// (0x00003e3d) indicator_popup_pane_ParamLimits

0x1d2a,	// (0x00003e3d) indicator_popup_pane

0x1d4c,	// (0x00003e5f) popup_query_code_window_t1_ParamLimits

0x1d4c,	// (0x00003e5f) popup_query_code_window_t1

0x1d66,	// (0x00003e79) popup_query_code_window_t2_ParamLimits

0x1d66,	// (0x00003e79) popup_query_code_window_t2

0x1daf,	// (0x00003ec2) popup_query_code_window_t3_ParamLimits

0x1daf,	// (0x00003ec2) popup_query_code_window_t3

0x0002,

0xf822,	// (0x00011935) popup_query_code_window_t_ParamLimits

0xf822,	// (0x00011935) popup_query_code_window_t

0x1dde,	// (0x00003ef1) query_popup_pane_ParamLimits

0x1dde,	// (0x00003ef1) query_popup_pane

0xe6c5,	// (0x000107d8) bg_popup_window_pane_cp15_ParamLimits

0xe6c5,	// (0x000107d8) bg_popup_window_pane_cp15

0xe6e5,	// (0x000107f8) indicator_popup_pane_cp1_ParamLimits

0xe6e5,	// (0x000107f8) indicator_popup_pane_cp1

0xe6f8,	// (0x0001080b) indicator_popup_pane_cp2_ParamLimits

0xe6f8,	// (0x0001080b) indicator_popup_pane_cp2

0xe713,	// (0x00010826) popup_query_data_code_window_g1_ParamLimits

0xe713,	// (0x00010826) popup_query_data_code_window_g1

0xe726,	// (0x00010839) popup_query_data_code_window_t1_ParamLimits

0xe726,	// (0x00010839) popup_query_data_code_window_t1

0xe738,	// (0x0001084b) popup_query_data_code_window_t2_ParamLimits

0xe738,	// (0x0001084b) popup_query_data_code_window_t2

0xe74a,	// (0x0001085d) popup_query_data_code_window_t3_ParamLimits

0xe74a,	// (0x0001085d) popup_query_data_code_window_t3

0xe760,	// (0x00010873) popup_query_data_code_window_t4_ParamLimits

0xe760,	// (0x00010873) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001169d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001169d) popup_query_data_code_window_t

0x0393,	// (0x000024a6) list_single_midp_graphic_pane_g3

0xe77a,	// (0x0001088d) query_popup_data_pane_cp2_ParamLimits

0xe78d,	// (0x000108a0) query_popup_pane_cp2_ParamLimits

0xe78d,	// (0x000108a0) query_popup_pane_cp2

0xe367,	// (0x0001047a) bg_popup_window_pane_cp11

0x1ce4,	// (0x00003df7) heading_pane_cp5

0xe826,	// (0x00010939) listscroll_popup_info_pane

0xe367,	// (0x0001047a) input_focus_pane_cp3

0xe7a8,	// (0x000108bb) query_popup_pane_t1

0xe7b6,	// (0x000108c9) list_popup_info_pane_ParamLimits

0xe7b6,	// (0x000108c9) list_popup_info_pane

0xe7c5,	// (0x000108d8) listscroll_popup_info_pane_g1

0xe7cd,	// (0x000108e0) scroll_pane_cp7

0xe7d7,	// (0x000108ea) popup_info_list_pane_t1_ParamLimits

0xe7d7,	// (0x000108ea) popup_info_list_pane_t1

0xe7f1,	// (0x00010904) popup_info_list_pane_t2_ParamLimits

0xe7f1,	// (0x00010904) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000116a6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000116a6) popup_info_list_pane_t

0xe367,	// (0x0001047a) bg_popup_window_pane_cp12

0x346d,	// (0x00005580) find_popup_pane

0xe421,	// (0x00010534) bg_popup_window_pane_cp3

0xe80b,	// (0x0001091e) heading_pane_cp3

0xe817,	// (0x0001092a) listscroll_popup_graphic_pane

0xe367,	// (0x0001047a) bg_popup_window_pane_cp4

0xa058,	// (0x0000c16b) heading_pane_cp4

0xe826,	// (0x00010939) listscroll_popup_colour_pane

0xa062,	// (0x0000c175) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa062,	// (0x0000c175) cell_large_graphic_colour_none_popup_pane

0xa076,	// (0x0000c189) grid_large_graphic_colour_popup_pane_ParamLimits

0xa076,	// (0x0000c189) grid_large_graphic_colour_popup_pane

0xa09a,	// (0x0000c1ad) listscroll_popup_colour_pane_g1_ParamLimits

0xa09a,	// (0x0000c1ad) listscroll_popup_colour_pane_g1

0xa0b1,	// (0x0000c1c4) listscroll_popup_colour_pane_g2_ParamLimits

0xa0b1,	// (0x0000c1c4) listscroll_popup_colour_pane_g2

0xa0c8,	// (0x0000c1db) listscroll_popup_colour_pane_g3_ParamLimits

0xa0c8,	// (0x0000c1db) listscroll_popup_colour_pane_g3

0xa0d8,	// (0x0000c1eb) listscroll_popup_colour_pane_g4_ParamLimits

0xa0d8,	// (0x0000c1eb) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000116ab) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000116ab) listscroll_popup_colour_pane_g

0xe82e,	// (0x00010941) scroll_pane_cp6_ParamLimits

0xe82e,	// (0x00010941) scroll_pane_cp6

0xa0e8,	// (0x0000c1fb) cell_large_graphic_colour_popup_pane_ParamLimits

0xa0e8,	// (0x0000c1fb) cell_large_graphic_colour_popup_pane

0xe840,	// (0x00010953) cell_large_graphic_colour_none_popup_pane_t1

0xe367,	// (0x0001047a) grid_highlight_pane_cp5

0xe84f,	// (0x00010962) cell_large_graphic_colour_popup_pane_g1

0xe857,	// (0x0001096a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000116b4) cell_large_graphic_colour_popup_pane_g

0xe85f,	// (0x00010972) cell_large_graphic_colour_popup_pane_g2_copy1

0xe868,	// (0x0001097b) grid_highlight_pane_cp4

0xe870,	// (0x00010983) bg_popup_window_pane_cp8_ParamLimits

0xe870,	// (0x00010983) bg_popup_window_pane_cp8

0xe88b,	// (0x0001099e) popup_snote_single_text_window_g1_ParamLimits

0xe88b,	// (0x0001099e) popup_snote_single_text_window_g1

0xe89d,	// (0x000109b0) popup_snote_single_text_window_t1_ParamLimits

0xe89d,	// (0x000109b0) popup_snote_single_text_window_t1

0xe8b0,	// (0x000109c3) popup_snote_single_text_window_t2_ParamLimits

0xe8b0,	// (0x000109c3) popup_snote_single_text_window_t2

0xe8c3,	// (0x000109d6) popup_snote_single_text_window_t3_ParamLimits

0xe8c3,	// (0x000109d6) popup_snote_single_text_window_t3

0xe8fc,	// (0x00010a0f) popup_snote_single_text_window_t4_ParamLimits

0xe8fc,	// (0x00010a0f) popup_snote_single_text_window_t4

0xe930,	// (0x00010a43) popup_snote_single_text_window_t5_ParamLimits

0xe930,	// (0x00010a43) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000116b9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000116b9) popup_snote_single_text_window_t

0xe95f,	// (0x00010a72) bg_popup_window_pane_cp9_ParamLimits

0xe95f,	// (0x00010a72) bg_popup_window_pane_cp9

0xe88b,	// (0x0001099e) popup_snote_single_graphic_window_g1_ParamLimits

0xe88b,	// (0x0001099e) popup_snote_single_graphic_window_g1

0xe96d,	// (0x00010a80) popup_snote_single_graphic_window_g2_ParamLimits

0xe96d,	// (0x00010a80) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000116c4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000116c4) popup_snote_single_graphic_window_g

0xe979,	// (0x00010a8c) popup_snote_single_graphic_window_t1_ParamLimits

0xe979,	// (0x00010a8c) popup_snote_single_graphic_window_t1

0xe98c,	// (0x00010a9f) popup_snote_single_graphic_window_t2_ParamLimits

0xe98c,	// (0x00010a9f) popup_snote_single_graphic_window_t2

0xe99f,	// (0x00010ab2) popup_snote_single_graphic_window_t3_ParamLimits

0xe99f,	// (0x00010ab2) popup_snote_single_graphic_window_t3

0xe9d8,	// (0x00010aeb) popup_snote_single_graphic_window_t4_ParamLimits

0xe9d8,	// (0x00010aeb) popup_snote_single_graphic_window_t4

0xea0c,	// (0x00010b1f) popup_snote_single_graphic_window_t5_ParamLimits

0xea0c,	// (0x00010b1f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000116c9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000116c9) popup_snote_single_graphic_window_t

0x32f3,	// (0x00005406) grid_graphic_popup_pane_ParamLimits

0x32f3,	// (0x00005406) grid_graphic_popup_pane

0x3321,	// (0x00005434) listscroll_popup_graphic_pane_g1_ParamLimits

0x3321,	// (0x00005434) listscroll_popup_graphic_pane_g1

0xbe9a,	// (0x0000dfad) listscroll_popup_graphic_pane_g2_ParamLimits

0xbe9a,	// (0x0000dfad) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x00011ab2) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x00011ab2) listscroll_popup_graphic_pane_g

0x3349,	// (0x0000545c) scroll_pane_cp5

0xbe39,	// (0x0000df4c) cell_graphic_popup_pane_ParamLimits

0xbe39,	// (0x0000df4c) cell_graphic_popup_pane

0x3269,	// (0x0000537c) cell_graphic_popup_pane_g1

0x3271,	// (0x00005384) cell_graphic_popup_pane_g2

0xe85f,	// (0x00010972) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00011aab) cell_graphic_popup_pane_g

0x327a,	// (0x0000538d) cell_graphic_popup_pane_t2

0xe868,	// (0x0001097b) grid_highlight_pane_cp3

0xea4d,	// (0x00010b60) list_gen_pane_ParamLimits

0xea4d,	// (0x00010b60) list_gen_pane

0xea75,	// (0x00010b88) scroll_pane

0xbdf0,	// (0x0000df03) bg_list_pane_g1_ParamLimits

0xbdf0,	// (0x0000df03) bg_list_pane_g1

0x31de,	// (0x000052f1) bg_list_pane_g2_ParamLimits

0x31de,	// (0x000052f1) bg_list_pane_g2

0x31f3,	// (0x00005306) bg_list_pane_g3_ParamLimits

0x31f3,	// (0x00005306) bg_list_pane_g3

0x3207,	// (0x0000531a) bg_list_pane_g4_ParamLimits

0x3207,	// (0x0000531a) bg_list_pane_g4

0xbe0d,	// (0x0000df20) bg_list_pane_g5_ParamLimits

0xbe0d,	// (0x0000df20) bg_list_pane_g5

0x0004,

0xf98d,	// (0x00011aa0) bg_list_pane_g_ParamLimits

0xf98d,	// (0x00011aa0) bg_list_pane_g

0xbd8a,	// (0x0000de9d) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double2_graphic_large_graphic_pane

0xbd8a,	// (0x0000de9d) list_double2_graphic_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double2_graphic_pane

0xbd8a,	// (0x0000de9d) list_double2_large_graphic_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double2_large_graphic_pane

0xbd8a,	// (0x0000de9d) list_double2_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double2_pane

0xbd8a,	// (0x0000de9d) list_double_graphic_heading_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double_graphic_heading_pane

0xbd8a,	// (0x0000de9d) list_double_graphic_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double_graphic_pane

0xbd8a,	// (0x0000de9d) list_double_heading_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double_heading_pane

0xbd8a,	// (0x0000de9d) list_double_large_graphic_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double_large_graphic_pane

0xbd8a,	// (0x0000de9d) list_double_number_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double_number_pane

0xbd8a,	// (0x0000de9d) list_double_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double_pane

0xbd8a,	// (0x0000de9d) list_double_time_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_double_time_pane

0xbd8a,	// (0x0000de9d) list_setting_number_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_setting_number_pane

0xbd8a,	// (0x0000de9d) list_setting_pane_ParamLimits

0xbd8a,	// (0x0000de9d) list_setting_pane

0xbd9e,	// (0x0000deb1) list_single_2graphic_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_2graphic_pane

0xbd9e,	// (0x0000deb1) list_single_graphic_heading_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_graphic_heading_pane

0xbd9e,	// (0x0000deb1) list_single_graphic_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_graphic_pane

0xbd9e,	// (0x0000deb1) list_single_heading_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_heading_pane

0xbd9e,	// (0x0000deb1) list_single_large_graphic_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_large_graphic_pane

0xbd9e,	// (0x0000deb1) list_single_number_heading_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_number_heading_pane

0xbd9e,	// (0x0000deb1) list_single_number_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_number_pane

0xbd9e,	// (0x0000deb1) list_single_pane_ParamLimits

0xbd9e,	// (0x0000deb1) list_single_pane

0xe367,	// (0x0001047a) list_highlight_pane_cp1

0x04ce,	// (0x000025e1) list_single_pane_g1_ParamLimits

0x04ce,	// (0x000025e1) list_single_pane_g1

0x156e,	// (0x00003681) list_single_pane_g2_ParamLimits

0x156e,	// (0x00003681) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000116db) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000116db) list_single_pane_g

0x3a9b,	// (0x00005bae) list_single_pane_t1_ParamLimits

0x3a9b,	// (0x00005bae) list_single_pane_t1

0x04ce,	// (0x000025e1) list_single_number_pane_g1_ParamLimits

0x04ce,	// (0x000025e1) list_single_number_pane_g1

0x156e,	// (0x00003681) list_single_number_pane_g2_ParamLimits

0x156e,	// (0x00003681) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000116db) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000116db) list_single_number_pane_g

0x1658,	// (0x0000376b) list_single_number_pane_t1_ParamLimits

0x1658,	// (0x0000376b) list_single_number_pane_t1

0x3b94,	// (0x00005ca7) list_single_number_pane_t2_ParamLimits

0x3b94,	// (0x00005ca7) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x00011a61) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x00011a61) list_single_number_pane_t

0x533e,	// (0x00007451) list_single_graphic_pane_g1_ParamLimits

0x533e,	// (0x00007451) list_single_graphic_pane_g1

0x04ce,	// (0x000025e1) list_single_graphic_pane_g2_ParamLimits

0x04ce,	// (0x000025e1) list_single_graphic_pane_g2

0x156e,	// (0x00003681) list_single_graphic_pane_g3_ParamLimits

0x156e,	// (0x00003681) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000116d4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000116d4) list_single_graphic_pane_g

0xa113,	// (0x0000c226) list_single_graphic_pane_t1_ParamLimits

0xa113,	// (0x0000c226) list_single_graphic_pane_t1

0x04ce,	// (0x000025e1) list_single_heading_pane_g1_ParamLimits

0x04ce,	// (0x000025e1) list_single_heading_pane_g1

0x156e,	// (0x00003681) list_single_heading_pane_g2_ParamLimits

0x156e,	// (0x00003681) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000116db) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000116db) list_single_heading_pane_g

0xa129,	// (0x0000c23c) list_single_heading_pane_t1_ParamLimits

0xa129,	// (0x0000c23c) list_single_heading_pane_t1

0xa13f,	// (0x0000c252) list_single_heading_pane_t2_ParamLimits

0xa13f,	// (0x0000c252) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000116e0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000116e0) list_single_heading_pane_t

0x04ce,	// (0x000025e1) list_single_number_heading_pane_g1_ParamLimits

0x04ce,	// (0x000025e1) list_single_number_heading_pane_g1

0x156e,	// (0x00003681) list_single_number_heading_pane_g2_ParamLimits

0x156e,	// (0x00003681) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000116db) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000116db) list_single_number_heading_pane_g

0xa129,	// (0x0000c23c) list_single_number_heading_pane_t1_ParamLimits

0xa129,	// (0x0000c23c) list_single_number_heading_pane_t1

0x3a65,	// (0x00005b78) list_single_number_heading_pane_t2_ParamLimits

0x3a65,	// (0x00005b78) list_single_number_heading_pane_t2

0x3a77,	// (0x00005b8a) list_single_number_heading_pane_t3_ParamLimits

0x3a77,	// (0x00005b8a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000116e5) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000116e5) list_single_number_heading_pane_t

0x1562,	// (0x00003675) list_single_graphic_heading_pane_g1_ParamLimits

0x1562,	// (0x00003675) list_single_graphic_heading_pane_g1

0xa151,	// (0x0000c264) list_single_graphic_heading_pane_g4_ParamLimits

0xa151,	// (0x0000c264) list_single_graphic_heading_pane_g4

0x156e,	// (0x00003681) list_single_graphic_heading_pane_g5_ParamLimits

0x156e,	// (0x00003681) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000116ec) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000116ec) list_single_graphic_heading_pane_g

0xa129,	// (0x0000c23c) list_single_graphic_heading_pane_t1_ParamLimits

0xa129,	// (0x0000c23c) list_single_graphic_heading_pane_t1

0xa162,	// (0x0000c275) list_single_graphic_heading_pane_t2_ParamLimits

0xa162,	// (0x0000c275) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000116f3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000116f3) list_single_graphic_heading_pane_t

0x3ab1,	// (0x00005bc4) list_single_large_graphic_pane_g1_ParamLimits

0x3ab1,	// (0x00005bc4) list_single_large_graphic_pane_g1

0x04ce,	// (0x000025e1) list_single_large_graphic_pane_g2_ParamLimits

0x04ce,	// (0x000025e1) list_single_large_graphic_pane_g2

0x156e,	// (0x00003681) list_single_large_graphic_pane_g3_ParamLimits

0x156e,	// (0x00003681) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000116f8) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000116f8) list_single_large_graphic_pane_g

0x1e99,	// (0x00003fac) wait_border_pane_g2_copy1

0xa174,	// (0x0000c287) list_single_large_graphic_pane_g4_cp2

0x3abd,	// (0x00005bd0) list_single_large_graphic_pane_t1_ParamLimits

0x3abd,	// (0x00005bd0) list_single_large_graphic_pane_t1

0xa17c,	// (0x0000c28f) list_double_pane_g1_ParamLimits

0xa17c,	// (0x0000c28f) list_double_pane_g1

0xa188,	// (0x0000c29b) list_double_pane_g2_ParamLimits

0xa188,	// (0x0000c29b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000116ff) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000116ff) list_double_pane_g

0xa194,	// (0x0000c2a7) list_double_pane_t1_ParamLimits

0xa194,	// (0x0000c2a7) list_double_pane_t1

0xa1aa,	// (0x0000c2bd) list_double_pane_t2_ParamLimits

0xa1aa,	// (0x0000c2bd) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00011704) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00011704) list_double_pane_t

0xa1bc,	// (0x0000c2cf) list_double2_pane_g1_ParamLimits

0xa1bc,	// (0x0000c2cf) list_double2_pane_g1

0xa1cd,	// (0x0000c2e0) list_double2_pane_g2_ParamLimits

0xa1cd,	// (0x0000c2e0) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00011709) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00011709) list_double2_pane_g

0xa1d9,	// (0x0000c2ec) list_double2_pane_t1_ParamLimits

0xa1d9,	// (0x0000c2ec) list_double2_pane_t1

0xa1ef,	// (0x0000c302) list_double2_pane_t2_ParamLimits

0xa1ef,	// (0x0000c302) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001170e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001170e) list_double2_pane_t

0xa17c,	// (0x0000c28f) list_double_number_pane_g1_ParamLimits

0xa17c,	// (0x0000c28f) list_double_number_pane_g1

0xa188,	// (0x0000c29b) list_double_number_pane_g2_ParamLimits

0xa188,	// (0x0000c29b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000116ff) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000116ff) list_double_number_pane_g

0xa201,	// (0x0000c314) list_double_number_pane_t1_ParamLimits

0xa201,	// (0x0000c314) list_double_number_pane_t1

0xa213,	// (0x0000c326) list_double_number_pane_t2_ParamLimits

0xa213,	// (0x0000c326) list_double_number_pane_t2

0xa229,	// (0x0000c33c) list_double_number_pane_t3_ParamLimits

0xa229,	// (0x0000c33c) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00011713) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00011713) list_double_number_pane_t

0xa23b,	// (0x0000c34e) list_double_graphic_pane_g1_ParamLimits

0xa23b,	// (0x0000c34e) list_double_graphic_pane_g1

0xa247,	// (0x0000c35a) list_double_graphic_pane_g2_ParamLimits

0xa247,	// (0x0000c35a) list_double_graphic_pane_g2

0xa256,	// (0x0000c369) list_double_graphic_pane_g3_ParamLimits

0xa256,	// (0x0000c369) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001171a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001171a) list_double_graphic_pane_g

0xa26e,	// (0x0000c381) list_double_graphic_pane_t1_ParamLimits

0xa26e,	// (0x0000c381) list_double_graphic_pane_t1

0xa284,	// (0x0000c397) list_double_graphic_pane_t2_ParamLimits

0xa284,	// (0x0000c397) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00011723) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00011723) list_double_graphic_pane_t

0xa296,	// (0x0000c3a9) list_double2_graphic_pane_g1_ParamLimits

0xa296,	// (0x0000c3a9) list_double2_graphic_pane_g1

0xa2a2,	// (0x0000c3b5) list_double2_graphic_pane_g2_ParamLimits

0xa2a2,	// (0x0000c3b5) list_double2_graphic_pane_g2

0xa1cd,	// (0x0000c2e0) list_double2_graphic_pane_g3_ParamLimits

0xa1cd,	// (0x0000c2e0) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00011728) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00011728) list_double2_graphic_pane_g

0xa2ae,	// (0x0000c3c1) list_double2_graphic_pane_t1_ParamLimits

0xa2ae,	// (0x0000c3c1) list_double2_graphic_pane_t1

0xa2c4,	// (0x0000c3d7) list_double2_graphic_pane_t2_ParamLimits

0xa2c4,	// (0x0000c3d7) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001172f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001172f) list_double2_graphic_pane_t

0xa2d6,	// (0x0000c3e9) list_double_large_graphic_pane_g1_ParamLimits

0xa2d6,	// (0x0000c3e9) list_double_large_graphic_pane_g1

0xa2f5,	// (0x0000c408) list_double_large_graphic_pane_g2_ParamLimits

0xa2f5,	// (0x0000c408) list_double_large_graphic_pane_g2

0xa188,	// (0x0000c29b) list_double_large_graphic_pane_g3_ParamLimits

0xa188,	// (0x0000c29b) list_double_large_graphic_pane_g3

0xa306,	// (0x0000c419) list_double_large_graphic_pane_g4_ParamLimits

0xa306,	// (0x0000c419) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00011734) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00011734) list_double_large_graphic_pane_g

0xa318,	// (0x0000c42b) list_double_large_graphic_pane_t1_ParamLimits

0xa318,	// (0x0000c42b) list_double_large_graphic_pane_t1

0xa331,	// (0x0000c444) list_double_large_graphic_pane_t2_ParamLimits

0xa331,	// (0x0000c444) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001173f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001173f) list_double_large_graphic_pane_t

0xa343,	// (0x0000c456) list_double2_large_graphic_pane_g1_ParamLimits

0xa343,	// (0x0000c456) list_double2_large_graphic_pane_g1

0xa1bc,	// (0x0000c2cf) list_double2_large_graphic_pane_g2_ParamLimits

0xa1bc,	// (0x0000c2cf) list_double2_large_graphic_pane_g2

0xa1cd,	// (0x0000c2e0) list_double2_large_graphic_pane_g3_ParamLimits

0xa1cd,	// (0x0000c2e0) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00011744) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00011744) list_double2_large_graphic_pane_g

0xa34f,	// (0x0000c462) list_double2_large_graphic_pane_t1_ParamLimits

0xa34f,	// (0x0000c462) list_double2_large_graphic_pane_t1

0xa365,	// (0x0000c478) list_double2_large_graphic_pane_t2_ParamLimits

0xa365,	// (0x0000c478) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001174b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001174b) list_double2_large_graphic_pane_t

0xa377,	// (0x0000c48a) list_double_heading_pane_g1_ParamLimits

0xa377,	// (0x0000c48a) list_double_heading_pane_g1

0xa388,	// (0x0000c49b) list_double_heading_pane_g2_ParamLimits

0xa388,	// (0x0000c49b) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00011750) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00011750) list_double_heading_pane_g

0xa394,	// (0x0000c4a7) list_double_heading_pane_t1_ParamLimits

0xa394,	// (0x0000c4a7) list_double_heading_pane_t1

0xa3aa,	// (0x0000c4bd) list_double_heading_pane_t2_ParamLimits

0xa3aa,	// (0x0000c4bd) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00011755) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00011755) list_double_heading_pane_t

0xa3bc,	// (0x0000c4cf) list_double_graphic_heading_pane_g1_ParamLimits

0xa3bc,	// (0x0000c4cf) list_double_graphic_heading_pane_g1

0xa377,	// (0x0000c48a) list_double_graphic_heading_pane_g2_ParamLimits

0xa377,	// (0x0000c48a) list_double_graphic_heading_pane_g2

0xa388,	// (0x0000c49b) list_double_graphic_heading_pane_g3_ParamLimits

0xa388,	// (0x0000c49b) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001175a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001175a) list_double_graphic_heading_pane_g

0xa3c8,	// (0x0000c4db) list_double_graphic_heading_pane_t1_ParamLimits

0xa3c8,	// (0x0000c4db) list_double_graphic_heading_pane_t1

0xa3de,	// (0x0000c4f1) list_double_graphic_heading_pane_t2_ParamLimits

0xa3de,	// (0x0000c4f1) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00011761) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00011761) list_double_graphic_heading_pane_t

0xa2f5,	// (0x0000c408) list_double_time_pane_g1_ParamLimits

0xa2f5,	// (0x0000c408) list_double_time_pane_g1

0xa188,	// (0x0000c29b) list_double_time_pane_g2_ParamLimits

0xa188,	// (0x0000c29b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00011766) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00011766) list_double_time_pane_g

0xa3f0,	// (0x0000c503) list_double_time_pane_t1_ParamLimits

0xa3f0,	// (0x0000c503) list_double_time_pane_t1

0xa406,	// (0x0000c519) list_double_time_pane_t2_ParamLimits

0xa406,	// (0x0000c519) list_double_time_pane_t2

0xa418,	// (0x0000c52b) list_double_time_pane_t3_ParamLimits

0xa418,	// (0x0000c52b) list_double_time_pane_t3

0xa42a,	// (0x0000c53d) list_double_time_pane_t4_ParamLimits

0xa42a,	// (0x0000c53d) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001176b) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001176b) list_double_time_pane_t

0xa2a2,	// (0x0000c3b5) list_setting_pane_g1_ParamLimits

0xa2a2,	// (0x0000c3b5) list_setting_pane_g1

0xa1cd,	// (0x0000c2e0) list_setting_pane_g2_ParamLimits

0xa1cd,	// (0x0000c2e0) list_setting_pane_g2

0x0001,

0xf661,	// (0x00011774) list_setting_pane_g_ParamLimits

0xf661,	// (0x00011774) list_setting_pane_g

0xa43c,	// (0x0000c54f) list_setting_pane_t1_ParamLimits

0xa43c,	// (0x0000c54f) list_setting_pane_t1

0xa453,	// (0x0000c566) list_setting_pane_t2_ParamLimits

0xa453,	// (0x0000c566) list_setting_pane_t2

0x0002,

0xf666,	// (0x00011779) list_setting_pane_t_ParamLimits

0xf666,	// (0x00011779) list_setting_pane_t

0xa492,	// (0x0000c5a5) set_value_pane_cp_ParamLimits

0xa492,	// (0x0000c5a5) set_value_pane_cp

0xa2a2,	// (0x0000c3b5) list_setting_number_pane_g1_ParamLimits

0xa2a2,	// (0x0000c3b5) list_setting_number_pane_g1

0xa1cd,	// (0x0000c2e0) list_setting_number_pane_g2_ParamLimits

0xa1cd,	// (0x0000c2e0) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00011774) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00011774) list_setting_number_pane_g

0xa4a0,	// (0x0000c5b3) list_setting_number_pane_t1_ParamLimits

0xa4a0,	// (0x0000c5b3) list_setting_number_pane_t1

0xa4b4,	// (0x0000c5c7) list_setting_number_pane_t2_ParamLimits

0xa4b4,	// (0x0000c5c7) list_setting_number_pane_t2

0xa4cb,	// (0x0000c5de) list_setting_number_pane_t3_ParamLimits

0xa4cb,	// (0x0000c5de) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00011780) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00011780) list_setting_number_pane_t

0xa492,	// (0x0000c5a5) set_value_pane_ParamLimits

0xa492,	// (0x0000c5a5) set_value_pane

0xeabe,	// (0x00010bd1) bg_set_opt_pane_ParamLimits

0xeabe,	// (0x00010bd1) bg_set_opt_pane

0xeadf,	// (0x00010bf2) set_value_pane_t1

0xeaed,	// (0x00010c00) slider_set_pane_cp3

0xeaf6,	// (0x00010c09) volume_small_pane_cp

0xeaff,	// (0x00010c12) list_form_gen_pane

0xeb08,	// (0x00010c1b) scroll_pane_cp8

0xa50e,	// (0x0000c621) form_field_data_pane_ParamLimits

0xa50e,	// (0x0000c621) form_field_data_pane

0xa529,	// (0x0000c63c) form_field_data_wide_pane_ParamLimits

0xa529,	// (0x0000c63c) form_field_data_wide_pane

0xa54d,	// (0x0000c660) form_field_popup_pane_ParamLimits

0xa54d,	// (0x0000c660) form_field_popup_pane

0xeb29,	// (0x00010c3c) form_field_popup_wide_pane_ParamLimits

0xeb29,	// (0x00010c3c) form_field_popup_wide_pane

0xeb4a,	// (0x00010c5d) form_field_slider_pane_ParamLimits

0xeb4a,	// (0x00010c5d) form_field_slider_pane

0xeb5d,	// (0x00010c70) form_field_slider_wide_pane_ParamLimits

0xeb5d,	// (0x00010c70) form_field_slider_wide_pane

0xeb70,	// (0x00010c83) data_form_pane

0xa579,	// (0x0000c68c) form_field_data_pane_t1

0xeb7c,	// (0x00010c8f) input_focus_pane

0xeb8a,	// (0x00010c9d) data_form_wide_pane

0xebc2,	// (0x00010cd5) form_field_data_wide_pane_t1

0xe87d,	// (0x00010990) input_focus_pane_cp6

0xa593,	// (0x0000c6a6) form_field_popup_pane_t1

0xeb7c,	// (0x00010c8f) input_focus_pane_cp7

0xebe1,	// (0x00010cf4) list_form_pane

0xebf5,	// (0x00010d08) form_field_popup_wide_pane_t1

0xeb7c,	// (0x00010c8f) input_focus_pane_cp8

0xec07,	// (0x00010d1a) list_form_wide_pane

0xa5b5,	// (0x0000c6c8) form_field_slider_pane_t1_ParamLimits

0xa5b5,	// (0x0000c6c8) form_field_slider_pane_t1

0xa5cd,	// (0x0000c6e0) form_field_slider_pane_t2_ParamLimits

0xa5cd,	// (0x0000c6e0) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00011790) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00011790) form_field_slider_pane_t

0xe409,	// (0x0001051c) input_focus_pane_cp9_ParamLimits

0xe409,	// (0x0001051c) input_focus_pane_cp9

0xa5e2,	// (0x0000c6f5) slider_cont_pane_ParamLimits

0xa5e2,	// (0x0000c6f5) slider_cont_pane

0xec13,	// (0x00010d26) form_field_slider_wide_pane_t1_ParamLimits

0xec13,	// (0x00010d26) form_field_slider_wide_pane_t1

0xec25,	// (0x00010d38) form_field_slider_wide_pane_t2_ParamLimits

0xec25,	// (0x00010d38) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00011795) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00011795) form_field_slider_wide_pane_t

0xe409,	// (0x0001051c) input_focus_pane_cp10_ParamLimits

0xe409,	// (0x0001051c) input_focus_pane_cp10

0xa5f6,	// (0x0000c709) slider_cont_pane_cp1_ParamLimits

0xa5f6,	// (0x0000c709) slider_cont_pane_cp1

0xa60a,	// (0x0000c71d) slider_form_pane_cp

0xec37,	// (0x00010d4a) input_focus_pane_g1

0xec3f,	// (0x00010d52) input_focus_pane_g2

0xec47,	// (0x00010d5a) input_focus_pane_g3

0xec4f,	// (0x00010d62) input_focus_pane_g4

0xec57,	// (0x00010d6a) input_focus_pane_g5

0xec5f,	// (0x00010d72) input_focus_pane_g6

0xec67,	// (0x00010d7a) input_focus_pane_g7

0xec6f,	// (0x00010d82) input_focus_pane_g8

0xec77,	// (0x00010d8a) input_focus_pane_g9

0xe1ee,	// (0x00010301) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001179a) input_focus_pane_g

0x1ea2,	// (0x00003fb5) wait_border_pane_g3_copy1

0xa612,	// (0x0000c725) data_form_pane_t1

0xe1ee,	// (0x00010301) wait_anim_pane_g1_copy1

0xbd5f,	// (0x0000de72) data_form_wide_pane_t1

0xec7f,	// (0x00010d92) list_form_graphic_pane_cp_ParamLimits

0xec7f,	// (0x00010d92) list_form_graphic_pane_cp

0x305e,	// (0x00005171) slider_form_pane_g1

0x3067,	// (0x0000517a) slider_form_pane_g2

0x0006,

0xf97e,	// (0x00011a91) slider_form_pane_g

0xa62e,	// (0x0000c741) list_form_graphic_pane_ParamLimits

0xa62e,	// (0x0000c741) list_form_graphic_pane

0xec91,	// (0x00010da4) list_form_graphic_pane_g1

0xec99,	// (0x00010dac) list_form_graphic_pane_t1_ParamLimits

0xec99,	// (0x00010dac) list_form_graphic_pane_t1

0xe421,	// (0x00010534) list_highlight_pane_cp5_ParamLimits

0xe421,	// (0x00010534) list_highlight_pane_cp5

0xa63f,	// (0x0000c752) find_pane_g1

0xecae,	// (0x00010dc1) input_find_pane

0xa648,	// (0x0000c75b) input_find_pane_g1_ParamLimits

0xa648,	// (0x0000c75b) input_find_pane_g1

0xa654,	// (0x0000c767) input_find_pane_t1_ParamLimits

0xa654,	// (0x0000c767) input_find_pane_t1

0xa669,	// (0x0000c77c) input_find_pane_t2_ParamLimits

0xa669,	// (0x0000c77c) input_find_pane_t2

0x0001,

0xf69c,	// (0x000117af) input_find_pane_t_ParamLimits

0xf69c,	// (0x000117af) input_find_pane_t

0xecc3,	// (0x00010dd6) input_focus_pane_cp5_ParamLimits

0xecc3,	// (0x00010dd6) input_focus_pane_cp5

0xecd1,	// (0x00010de4) bg_popup_window_pane_cp2_ParamLimits

0xecd1,	// (0x00010de4) bg_popup_window_pane_cp2

0xecde,	// (0x00010df1) listscroll_menu_pane_ParamLimits

0xecde,	// (0x00010df1) listscroll_menu_pane

0xa68a,	// (0x0000c79d) popup_submenu_window_ParamLimits

0xa68a,	// (0x0000c79d) popup_submenu_window

0xecea,	// (0x00010dfd) find_popup_pane_g1

0xecf2,	// (0x00010e05) input_popup_find_pane_cp

0xecc3,	// (0x00010dd6) input_focus_pane_cp4_ParamLimits

0xecc3,	// (0x00010dd6) input_focus_pane_cp4

0xecfc,	// (0x00010e0f) input_popup_find_pane_t1_ParamLimits

0xecfc,	// (0x00010e0f) input_popup_find_pane_t1

0xe367,	// (0x0001047a) bg_popup_sub_pane_cp

0xed2a,	// (0x00010e3d) listscroll_popup_sub_pane

0xed32,	// (0x00010e45) list_submenu_pane_ParamLimits

0xed32,	// (0x00010e45) list_submenu_pane

0xed43,	// (0x00010e56) scroll_pane_cp4

0xed4b,	// (0x00010e5e) list_single_popup_submenu_pane_ParamLimits

0xed4b,	// (0x00010e5e) list_single_popup_submenu_pane

0xed60,	// (0x00010e73) list_single_popup_submenu_pane_g1

0xed68,	// (0x00010e7b) list_single_popup_submenu_pane_t1_ParamLimits

0xed68,	// (0x00010e7b) list_single_popup_submenu_pane_t1

0xe409,	// (0x0001051c) bg_active_tab_pane_cp1_ParamLimits

0xe409,	// (0x0001051c) bg_active_tab_pane_cp1

0xa6c8,	// (0x0000c7db) tabs_2_active_pane_g1

0xa6d0,	// (0x0000c7e3) tabs_2_active_pane_t1

0xe409,	// (0x0001051c) bg_passive_tab_pane_cp1_ParamLimits

0xe409,	// (0x0001051c) bg_passive_tab_pane_cp1

0xa6c8,	// (0x0000c7db) tabs_2_passive_pane_g1

0xa6d0,	// (0x0000c7e3) tabs_2_passive_pane_t1

0xe421,	// (0x00010534) bg_active_tab_pane_cp4

0xa6e2,	// (0x0000c7f5) tabs_2_long_active_pane_t1

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp4

0x1737,	// (0x0000384a) list_single_midp_graphic_pane_g4_ParamLimits

0xe421,	// (0x00010534) bg_active_tab_pane_cp5

0xa6f5,	// (0x0000c808) tabs_3_long_active_pane_t1

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp5

0x1737,	// (0x0000384a) list_single_midp_graphic_pane_g4

0xe421,	// (0x00010534) bg_popup_window_pane_cp13_ParamLimits

0xe421,	// (0x00010534) bg_popup_window_pane_cp13

0xed86,	// (0x00010e99) listscroll_popup_fast_pane_ParamLimits

0xed86,	// (0x00010e99) listscroll_popup_fast_pane

0xed95,	// (0x00010ea8) grid_popup_fast_pane_ParamLimits

0xed95,	// (0x00010ea8) grid_popup_fast_pane

0xeda7,	// (0x00010eba) scroll_pane_cp9_ParamLimits

0xeda7,	// (0x00010eba) scroll_pane_cp9

0x53c4,	// (0x000074d7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x53c4,	// (0x000074d7) list_single_graphic_hl_pane_t1_cp2

0xedcb,	// (0x00010ede) input_focus_pane_cp20_ParamLimits

0xedcb,	// (0x00010ede) input_focus_pane_cp20

0xedd9,	// (0x00010eec) query_popup_data_pane_t1_ParamLimits

0xedd9,	// (0x00010eec) query_popup_data_pane_t1

0xedec,	// (0x00010eff) query_popup_data_pane_t2_ParamLimits

0xedec,	// (0x00010eff) query_popup_data_pane_t2

0xee32,	// (0x00010f45) query_popup_data_pane_t3_ParamLimits

0xee32,	// (0x00010f45) query_popup_data_pane_t3

0xee81,	// (0x00010f94) query_popup_data_pane_t4_ParamLimits

0xee81,	// (0x00010f94) query_popup_data_pane_t4

0xeebd,	// (0x00010fd0) query_popup_data_pane_t5_ParamLimits

0xeebd,	// (0x00010fd0) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x000117b4) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x000117b4) query_popup_data_pane_t

0xec37,	// (0x00010d4a) bg_set_opt_pane_g1

0xec3f,	// (0x00010d52) bg_set_opt_pane_g2

0xec47,	// (0x00010d5a) bg_set_opt_pane_g3

0xec4f,	// (0x00010d62) bg_set_opt_pane_g4

0xec57,	// (0x00010d6a) bg_set_opt_pane_g5

0xec5f,	// (0x00010d72) bg_set_opt_pane_g6

0xec67,	// (0x00010d7a) bg_set_opt_pane_g7

0xec6f,	// (0x00010d82) bg_set_opt_pane_g8

0xec77,	// (0x00010d8a) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000117bf) bg_set_opt_pane_g

0x00b4,	// (0x000021c7) control_top_pane_stacon_ParamLimits

0x00b4,	// (0x000021c7) control_top_pane_stacon

0x0107,	// (0x0000221a) signal_pane_stacon_ParamLimits

0x0107,	// (0x0000221a) signal_pane_stacon

0x012c,	// (0x0000223f) stacon_top_pane_g1_ParamLimits

0x012c,	// (0x0000223f) stacon_top_pane_g1

0x014e,	// (0x00002261) title_pane_stacon_ParamLimits

0x014e,	// (0x00002261) title_pane_stacon

0x0178,	// (0x0000228b) uni_indicator_pane_stacon_ParamLimits

0x0178,	// (0x0000228b) uni_indicator_pane_stacon

0x018d,	// (0x000022a0) battery_pane_stacon_ParamLimits

0x018d,	// (0x000022a0) battery_pane_stacon

0x01d1,	// (0x000022e4) control_bottom_pane_stacon_ParamLimits

0x01d1,	// (0x000022e4) control_bottom_pane_stacon

0x01f4,	// (0x00002307) navi_pane_stacon_ParamLimits

0x01f4,	// (0x00002307) navi_pane_stacon

0x0217,	// (0x0000232a) stacon_bottom_pane_g1_ParamLimits

0x0217,	// (0x0000232a) stacon_bottom_pane_g1

0xeef4,	// (0x00011007) aid_levels_signal_lsc_ParamLimits

0xeef4,	// (0x00011007) aid_levels_signal_lsc

0xef0b,	// (0x0001101e) signal_pane_stacon_g1_ParamLimits

0xef0b,	// (0x0001101e) signal_pane_stacon_g1

0xef1f,	// (0x00011032) signal_pane_stacon_g2_ParamLimits

0xef1f,	// (0x00011032) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000117d2) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000117d2) signal_pane_stacon_g

0xef61,	// (0x00011074) title_pane_stacon_t1_ParamLimits

0xef61,	// (0x00011074) title_pane_stacon_t1

0xef86,	// (0x00011099) uni_indicator_pane_stacon_g1

0xef90,	// (0x000110a3) uni_indicator_pane_stacon_g2

0xef9a,	// (0x000110ad) uni_indicator_pane_stacon_g3

0xefa4,	// (0x000110b7) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x000117de) uni_indicator_pane_stacon_g

0xefae,	// (0x000110c1) control_top_pane_stacon_g1

0xefb6,	// (0x000110c9) control_top_pane_stacon_t1_ParamLimits

0xefb6,	// (0x000110c9) control_top_pane_stacon_t1

0xefed,	// (0x00011100) aid_levels_battery_lsc_ParamLimits

0xefed,	// (0x00011100) aid_levels_battery_lsc

0xf005,	// (0x00011118) battery_pane_stacon_g1_ParamLimits

0xf005,	// (0x00011118) battery_pane_stacon_g1

0xf018,	// (0x0001112b) battery_pane_stacon_g2_ParamLimits

0xf018,	// (0x0001112b) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x000117e7) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000117e7) battery_pane_stacon_g

0xf056,	// (0x00011169) navi_icon_pane_stacon

0xf06a,	// (0x0001117d) navi_navi_pane_stacon

0xf056,	// (0x00011169) navi_text_pane_stacon

0xefae,	// (0x000110c1) control_bottom_pane_stacon_g1

0xf080,	// (0x00011193) control_bottom_pane_stacon_t1_ParamLimits

0xf080,	// (0x00011193) control_bottom_pane_stacon_t1

0xa707,	// (0x0000c81a) grid_app_pane_ParamLimits

0xa707,	// (0x0000c81a) grid_app_pane

0xa73f,	// (0x0000c852) scroll_pane_cp15_ParamLimits

0xa73f,	// (0x0000c852) scroll_pane_cp15

0xa754,	// (0x0000c867) cell_app_pane_ParamLimits

0xa754,	// (0x0000c867) cell_app_pane

0xa7a1,	// (0x0000c8b4) cell_app_pane_g1_ParamLimits

0xa7a1,	// (0x0000c8b4) cell_app_pane_g1

0xf0d1,	// (0x000111e4) cell_app_pane_g2_ParamLimits

0xf0d1,	// (0x000111e4) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x000117ec) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x000117ec) cell_app_pane_g

0xa7c5,	// (0x0000c8d8) cell_app_pane_t1_ParamLimits

0xa7c5,	// (0x0000c8d8) cell_app_pane_t1

0xf0dd,	// (0x000111f0) grid_highlight_pane_ParamLimits

0xf0dd,	// (0x000111f0) grid_highlight_pane

0xec37,	// (0x00010d4a) cell_highlight_pane_g1

0xec3f,	// (0x00010d52) cell_highlight_pane_g2

0xec47,	// (0x00010d5a) cell_highlight_pane_g3

0xec4f,	// (0x00010d62) cell_highlight_pane_g4

0xec57,	// (0x00010d6a) cell_highlight_pane_g5

0xec5f,	// (0x00010d72) cell_highlight_pane_g6

0xec67,	// (0x00010d7a) cell_highlight_pane_g7

0xec6f,	// (0x00010d82) cell_highlight_pane_g8

0xec77,	// (0x00010d8a) cell_highlight_pane_g9

0xe1ee,	// (0x00010301) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001179a) cell_highlight_pane_g

0xf0f8,	// (0x0001120b) bg_scroll_pane

0xf117,	// (0x0001122a) scroll_handle_pane

0xf168,	// (0x0001127b) scroll_bg_pane_g1

0xf17d,	// (0x00011290) scroll_bg_pane_g2

0xf195,	// (0x000112a8) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x000117f1) scroll_bg_pane_g

0xf1aa,	// (0x000112bd) scroll_handle_focus_pane_ParamLimits

0xf1aa,	// (0x000112bd) scroll_handle_focus_pane

0xf168,	// (0x0001127b) scroll_handle_pane_g1

0xf1b7,	// (0x000112ca) scroll_handle_pane_g2

0xf195,	// (0x000112a8) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x000117f8) scroll_handle_pane_g

0xecc3,	// (0x00010dd6) bg_popup_sub_pane_cp21_ParamLimits

0xecc3,	// (0x00010dd6) bg_popup_sub_pane_cp21

0xf1cb,	// (0x000112de) popup_fep_japan_predictive_window_t1_ParamLimits

0xf1cb,	// (0x000112de) popup_fep_japan_predictive_window_t1

0xf1e2,	// (0x000112f5) popup_fep_japan_predictive_window_t2_ParamLimits

0xf1e2,	// (0x000112f5) popup_fep_japan_predictive_window_t2

0xf215,	// (0x00011328) popup_fep_japan_predictive_window_t3_ParamLimits

0xf215,	// (0x00011328) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x000117ff) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x000117ff) popup_fep_japan_predictive_window_t

0xe367,	// (0x0001047a) bg_popup_sub_pane_cp23

0xf24c,	// (0x0001135f) listscroll_japin_cand_pane

0xf254,	// (0x00011367) popup_fep_japan_candidate_window_t1

0xf262,	// (0x00011375) candidate_pane_ParamLimits

0xf262,	// (0x00011375) candidate_pane

0xf274,	// (0x00011387) scroll_pane_cp30

0xf27e,	// (0x00011391) list_single_popup_jap_candidate_pane_ParamLimits

0xf27e,	// (0x00011391) list_single_popup_jap_candidate_pane

0xe367,	// (0x0001047a) list_highlight_pane_cp30

0xf292,	// (0x000113a5) list_single_popup_jap_candidate_pane_t1

0xa7e5,	// (0x0000c8f8) level_1_signal

0xa7f7,	// (0x0000c90a) level_2_signal

0xa80a,	// (0x0000c91d) level_3_signal

0xa81d,	// (0x0000c930) level_4_signal

0xa830,	// (0x0000c943) level_5_signal

0xa843,	// (0x0000c956) level_6_signal

0xa856,	// (0x0000c969) level_7_signal

0xa7e5,	// (0x0000c8f8) level_1_battery

0xa7f7,	// (0x0000c90a) level_2_battery

0xa80a,	// (0x0000c91d) level_3_battery

0xa81d,	// (0x0000c930) level_4_battery

0xa830,	// (0x0000c943) level_5_battery

0xa843,	// (0x0000c956) level_6_battery

0xa856,	// (0x0000c969) level_7_battery

0xf2d8,	// (0x000113eb) list_menu_pane_ParamLimits

0xf2d8,	// (0x000113eb) list_menu_pane

0xf2ee,	// (0x00011401) scroll_pane_cp25_ParamLimits

0xf2ee,	// (0x00011401) scroll_pane_cp25

0xf307,	// (0x0001141a) list_double2_graphic_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double2_graphic_pane_cp2

0xf307,	// (0x0001141a) list_double2_large_graphic_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double2_large_graphic_pane_cp2

0xf307,	// (0x0001141a) list_double2_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double2_pane_cp2

0xf307,	// (0x0001141a) list_double_graphic_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double_graphic_pane_cp2

0xf307,	// (0x0001141a) list_double_large_graphic_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double_large_graphic_pane_cp2

0xf307,	// (0x0001141a) list_double_number_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double_number_pane_cp2

0xf307,	// (0x0001141a) list_double_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double_pane_cp2

0xa869,	// (0x0000c97c) list_single_2graphic_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_2graphic_pane_cp2

0xa869,	// (0x0000c97c) list_single_graphic_heading_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_graphic_heading_pane_cp2

0xa869,	// (0x0000c97c) list_single_graphic_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_graphic_pane_cp2

0xa869,	// (0x0000c97c) list_single_heading_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_heading_pane_cp2

0xf317,	// (0x0001142a) list_single_large_graphic_pane_cp2_ParamLimits

0xf317,	// (0x0001142a) list_single_large_graphic_pane_cp2

0xa869,	// (0x0000c97c) list_single_number_heading_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_number_heading_pane_cp2

0xa869,	// (0x0000c97c) list_single_number_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_number_pane_cp2

0xa869,	// (0x0000c97c) list_single_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_pane_cp2

0xf38b,	// (0x0001149e) bg_popup_sub_pane_cp22

0xf3b0,	// (0x000114c3) popup_side_volume_key_window_g1

0xf3da,	// (0x000114ed) popup_side_volume_key_window_t1

0xf3f8,	// (0x0001150b) volume_small_pane_cp1

0xe409,	// (0x0001051c) bg_popup_sub_pane_cp24_ParamLimits

0xe409,	// (0x0001051c) bg_popup_sub_pane_cp24

0xf400,	// (0x00011513) fep_china_uni_candidate_pane_ParamLimits

0xf400,	// (0x00011513) fep_china_uni_candidate_pane

0xf414,	// (0x00011527) fep_china_uni_entry_pane

0xf424,	// (0x00011537) popup_fep_china_uni_window_g1

0xf440,	// (0x00011553) fep_china_uni_entry_pane_g1

0xf44a,	// (0x0001155d) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00011830) fep_china_uni_entry_pane_g

0xf454,	// (0x00011567) fep_entry_item_pane

0xf45e,	// (0x00011571) fep_candidate_item_pane

0xf466,	// (0x00011579) fep_china_uni_candidate_pane_g1

0xf470,	// (0x00011583) fep_china_uni_candidate_pane_g2

0xf478,	// (0x0001158b) fep_china_uni_candidate_pane_g3

0xf480,	// (0x00011593) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00011835) fep_china_uni_candidate_pane_g

0xe1ee,	// (0x00010301) fep_entry_item_pane_g1

0xf48a,	// (0x0001159d) fep_entry_item_pane_t1_ParamLimits

0xf48a,	// (0x0001159d) fep_entry_item_pane_t1

0xf4a0,	// (0x000115b3) fep_candidate_item_pane_t1_ParamLimits

0xf4a0,	// (0x000115b3) fep_candidate_item_pane_t1

0xf4b5,	// (0x000115c8) fep_candidate_item_pane_t2_ParamLimits

0xf4b5,	// (0x000115c8) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001183e) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001183e) fep_candidate_item_pane_t

0xe421,	// (0x00010534) list_highlight_pane_cp31_ParamLimits

0xe421,	// (0x00010534) list_highlight_pane_cp31

0xf4c7,	// (0x000115da) level_1_signal_lsc

0xf4d0,	// (0x000115e3) level_2_signal_lsc

0xf4d9,	// (0x000115ec) level_3_signal_lsc

0xf4e2,	// (0x000115f5) level_4_signal_lsc

0xf4eb,	// (0x000115fe) level_5_signal_lsc

0xf4f4,	// (0x00011607) level_6_signal_lsc

0xf4fd,	// (0x00011610) level_7_signal_lsc

0xf4fd,	// (0x00011610) level_1_battery_lsc

0xf506,	// (0x00011619) level_2_battery_lsc

0xf50f,	// (0x00011622) level_3_battery_lsc

0xf518,	// (0x0001162b) level_4_battery_lsc

0xf521,	// (0x00011634) level_5_battery_lsc

0xf52a,	// (0x0001163d) level_6_battery_lsc

0xf4c7,	// (0x000115da) level_7_battery_lsc

0xf533,	// (0x00011646) scroll_handle_focus_pane_g1

0xf53c,	// (0x0001164f) scroll_handle_focus_pane_g2

0xf545,	// (0x00011658) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00011843) scroll_handle_focus_pane_g

0xa8f8,	// (0x0000ca0b) list_single_2graphic_pane_g1_ParamLimits

0xa8f8,	// (0x0000ca0b) list_single_2graphic_pane_g1

0xa151,	// (0x0000c264) list_single_2graphic_pane_g2_ParamLimits

0xa151,	// (0x0000c264) list_single_2graphic_pane_g2

0x156e,	// (0x00003681) list_single_2graphic_pane_g3_ParamLimits

0x156e,	// (0x00003681) list_single_2graphic_pane_g3

0xa904,	// (0x0000ca17) list_single_2graphic_pane_g4_ParamLimits

0xa904,	// (0x0000ca17) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001184a) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001184a) list_single_2graphic_pane_g

0xa915,	// (0x0000ca28) list_single_2graphic_pane_t1_ParamLimits

0xa915,	// (0x0000ca28) list_single_2graphic_pane_t1

0xa943,	// (0x0000ca56) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa943,	// (0x0000ca56) list_double2_graphic_large_graphic_pane_g1

0xa1bc,	// (0x0000c2cf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa1bc,	// (0x0000c2cf) list_double2_graphic_large_graphic_pane_g2

0xa1cd,	// (0x0000c2e0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa1cd,	// (0x0000c2e0) list_double2_graphic_large_graphic_pane_g3

0xa955,	// (0x0000ca68) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa955,	// (0x0000ca68) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00011853) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00011853) list_double2_graphic_large_graphic_pane_g

0xa961,	// (0x0000ca74) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa961,	// (0x0000ca74) list_double2_graphic_large_graphic_pane_t1

0xa977,	// (0x0000ca8a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa977,	// (0x0000ca8a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001185c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001185c) list_double2_graphic_large_graphic_pane_t

0x02d7,	// (0x000023ea) popup_fast_swap_window_ParamLimits

0x02d7,	// (0x000023ea) popup_fast_swap_window

0x02f5,	// (0x00002408) popup_side_volume_key_window

0x0313,	// (0x00002426) stacon_top_pane

0x031d,	// (0x00002430) status_pane_ParamLimits

0x031d,	// (0x00002430) status_pane

0xa9d1,	// (0x0000cae4) status_small_pane

0xe367,	// (0x0001047a) control_pane

0xe367,	// (0x0001047a) stacon_bottom_pane

0xeb08,	// (0x00010c1b) scroll_pane_cp121

0xeaff,	// (0x00010c12) set_content_pane

0xa989,	// (0x0000ca9c) bg_active_tab_pane_g1_cp1

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp1

0xa992,	// (0x0000caa5) bg_active_tab_pane_g3_cp1

0xa989,	// (0x0000ca9c) bg_passive_tab_pane_g1_cp1

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp1

0xa992,	// (0x0000caa5) bg_passive_tab_pane_g3_cp1

0xa99b,	// (0x0000caae) bg_active_tab_pane_g1_cp2

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp2

0xa9a4,	// (0x0000cab7) bg_active_tab_pane_g3_cp2

0xa99b,	// (0x0000caae) bg_passive_tab_pane_g1_cp2

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp2

0xa9a4,	// (0x0000cab7) bg_passive_tab_pane_g3_cp2

0xa9ad,	// (0x0000cac0) bg_active_tab_pane_g1_cp3

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp3

0xa9b6,	// (0x0000cac9) bg_active_tab_pane_g3_cp3

0xa9ad,	// (0x0000cac0) bg_passive_tab_pane_g1_cp3

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp3

0xa9b6,	// (0x0000cac9) bg_passive_tab_pane_g3_cp3

0xa9bf,	// (0x0000cad2) bg_active_tab_pane_g1_cp4

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp4

0xa9c8,	// (0x0000cadb) bg_active_tab_pane_g3_cp4

0xa9bf,	// (0x0000cad2) bg_passive_tab_pane_g1_cp4

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp4

0xa9c8,	// (0x0000cadb) bg_passive_tab_pane_g3_cp4

0x0233,	// (0x00002346) bg_active_tab_pane_g1_cp5

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp5

0x023c,	// (0x0000234f) bg_active_tab_pane_g3_cp5

0x0233,	// (0x00002346) bg_passive_tab_pane_g1_cp5

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp5

0x023c,	// (0x0000234f) bg_passive_tab_pane_g3_cp5

0x0245,	// (0x00002358) list_set_graphic_pane_ParamLimits

0x0245,	// (0x00002358) list_set_graphic_pane

0xe367,	// (0x0001047a) bg_set_opt_pane_cp4

0x0258,	// (0x0000236b) list_set_graphic_pane_g1_ParamLimits

0x0258,	// (0x0000236b) list_set_graphic_pane_g1

0x0264,	// (0x00002377) list_set_graphic_pane_g2_ParamLimits

0x0264,	// (0x00002377) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00011861) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00011861) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00011be4) volume_small_pane_cp_g

0x0288,	// (0x0000239b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0288,	// (0x0000239b) list_double2_large_graphic_pane_g1_cp2

0x0296,	// (0x000023a9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0296,	// (0x000023a9) list_double2_large_graphic_pane_g2_cp2

0x02a7,	// (0x000023ba) list_double2_large_graphic_pane_g3_cp2

0x02af,	// (0x000023c2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x02af,	// (0x000023c2) list_double2_large_graphic_pane_t1_cp2

0x02c5,	// (0x000023d8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x02c5,	// (0x000023d8) list_double2_large_graphic_pane_t2_cp2

0x2af2,	// (0x00004c05) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2af2,	// (0x00004c05) list_double_large_graphic_pane_g1_cp2

0x2b05,	// (0x00004c18) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2b05,	// (0x00004c18) list_double_large_graphic_pane_g2_cp2

0x0446,	// (0x00002559) list_double_large_graphic_pane_g3_cp2

0x2b16,	// (0x00004c29) list_double_large_graphic_pane_g4_cp

0x2b1e,	// (0x00004c31) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2b1e,	// (0x00004c31) list_double_large_graphic_pane_t1_cp2

0x2b35,	// (0x00004c48) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2b35,	// (0x00004c48) list_double_large_graphic_pane_t2_cp2

0x0336,	// (0x00002449) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0336,	// (0x00002449) list_double2_graphic_pane_g1_cp2

0x0344,	// (0x00002457) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0344,	// (0x00002457) list_double2_graphic_pane_g2_cp2

0x0355,	// (0x00002468) list_double2_graphic_pane_g3_cp2

0x035f,	// (0x00002472) list_double2_graphic_pane_t1_cp2_ParamLimits

0x035f,	// (0x00002472) list_double2_graphic_pane_t1_cp2

0x0375,	// (0x00002488) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0375,	// (0x00002488) list_double2_graphic_pane_t2_cp2

0x0387,	// (0x0000249a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0387,	// (0x0000249a) list_single_number_heading_pane_g1_cp2

0x0393,	// (0x000024a6) list_single_number_heading_pane_g2_cp2

0x039b,	// (0x000024ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x039b,	// (0x000024ae) list_single_number_heading_pane_t1_cp2

0x03b1,	// (0x000024c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x03b1,	// (0x000024c4) list_single_number_heading_pane_t2_cp2

0x03c5,	// (0x000024d8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x03c5,	// (0x000024d8) list_single_number_heading_pane_t3_cp2

0x0387,	// (0x0000249a) list_single_heading_pane_g1_cp2_ParamLimits

0x0387,	// (0x0000249a) list_single_heading_pane_g1_cp2

0x0393,	// (0x000024a6) list_single_heading_pane_g2_cp2

0x039b,	// (0x000024ae) list_single_heading_pane_t1_cp2_ParamLimits

0x039b,	// (0x000024ae) list_single_heading_pane_t1_cp2

0x28ec,	// (0x000049ff) list_single_heading_pane_t2_cp2_ParamLimits

0x28ec,	// (0x000049ff) list_single_heading_pane_t2_cp2

0x2834,	// (0x00004947) list_double_graphic_pane_g1_cp2_ParamLimits

0x2834,	// (0x00004947) list_double_graphic_pane_g1_cp2

0x2840,	// (0x00004953) list_double_graphic_pane_g2_cp2_ParamLimits

0x2840,	// (0x00004953) list_double_graphic_pane_g2_cp2

0x284f,	// (0x00004962) list_double_graphic_pane_g3_cp2

0x2857,	// (0x0000496a) list_double_graphic_pane_t1_cp2_ParamLimits

0x2857,	// (0x0000496a) list_double_graphic_pane_t1_cp2

0x286d,	// (0x00004980) list_double_graphic_pane_t2_cp2_ParamLimits

0x286d,	// (0x00004980) list_double_graphic_pane_t2_cp2

0x043a,	// (0x0000254d) list_double_number_pane_g1_cp2_ParamLimits

0x043a,	// (0x0000254d) list_double_number_pane_g1_cp2

0x0446,	// (0x00002559) list_double_number_pane_g2_cp2

0x27f8,	// (0x0000490b) list_double_number_pane_t1_cp2_ParamLimits

0x27f8,	// (0x0000490b) list_double_number_pane_t1_cp2

0x280c,	// (0x0000491f) list_double_number_pane_t2_cp2_ParamLimits

0x280c,	// (0x0000491f) list_double_number_pane_t2_cp2

0x2822,	// (0x00004935) list_double_number_pane_t3_cp2_ParamLimits

0x2822,	// (0x00004935) list_double_number_pane_t3_cp2

0x26d0,	// (0x000047e3) list_single_graphic_pane_g1_cp2_ParamLimits

0x26d0,	// (0x000047e3) list_single_graphic_pane_g1_cp2

0xecb7,	// (0x00010dca) list_single_graphic_pane_g2_cp2_ParamLimits

0xecb7,	// (0x00010dca) list_single_graphic_pane_g2_cp2

0x04a0,	// (0x000025b3) list_single_graphic_pane_g3_cp2

0x26a6,	// (0x000047b9) list_single_graphic_pane_t1_cp2_ParamLimits

0x26a6,	// (0x000047b9) list_single_graphic_pane_t1_cp2

0xecb7,	// (0x00010dca) list_single_number_pane_g1_cp2_ParamLimits

0xecb7,	// (0x00010dca) list_single_number_pane_g1_cp2

0x04a0,	// (0x000025b3) list_single_number_pane_g2_cp2

0x26a6,	// (0x000047b9) list_single_number_pane_t1_cp2_ParamLimits

0x26a6,	// (0x000047b9) list_single_number_pane_t1_cp2

0x26bc,	// (0x000047cf) list_single_number_pane_t2_cp2_ParamLimits

0x26bc,	// (0x000047cf) list_single_number_pane_t2_cp2

0x0296,	// (0x000023a9) list_double2_pane_g1_cp2_ParamLimits

0x0296,	// (0x000023a9) list_double2_pane_g1_cp2

0x02a7,	// (0x000023ba) list_double2_pane_g2_cp2

0x0412,	// (0x00002525) list_double2_pane_t1_cp2_ParamLimits

0x0412,	// (0x00002525) list_double2_pane_t1_cp2

0x0428,	// (0x0000253b) list_double2_pane_t2_cp2_ParamLimits

0x0428,	// (0x0000253b) list_double2_pane_t2_cp2

0x043a,	// (0x0000254d) list_double_pane_g1_cp2_ParamLimits

0x043a,	// (0x0000254d) list_double_pane_g1_cp2

0x0446,	// (0x00002559) list_double_pane_g2_cp2

0x044e,	// (0x00002561) list_double_pane_t1_cp2_ParamLimits

0x044e,	// (0x00002561) list_double_pane_t1_cp2

0x0464,	// (0x00002577) list_double_pane_t2_cp2_ParamLimits

0x0464,	// (0x00002577) list_double_pane_t2_cp2

0x0490,	// (0x000025a3) list_single_pane_cp2_g3

0xecb7,	// (0x00010dca) list_single_pane_g1_cp2_ParamLimits

0xecb7,	// (0x00010dca) list_single_pane_g1_cp2

0x04a0,	// (0x000025b3) list_single_pane_g2_cp2

0x04a8,	// (0x000025bb) list_single_pane_t1_cp2_ParamLimits

0x04a8,	// (0x000025bb) list_single_pane_t1_cp2

0x04c0,	// (0x000025d3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x04c0,	// (0x000025d3) list_single_large_graphic_pane_g1_cp2

0x04ce,	// (0x000025e1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x04ce,	// (0x000025e1) list_single_large_graphic_pane_g2_cp2

0x04da,	// (0x000025ed) list_single_large_graphic_pane_g3_cp2

0x04e2,	// (0x000025f5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x04e2,	// (0x000025f5) list_single_large_graphic_pane_g4_cp1

0x04fc,	// (0x0000260f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x04fc,	// (0x0000260f) list_single_large_graphic_pane_t1_cp2

0x2515,	// (0x00004628) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2515,	// (0x00004628) list_single_graphic_heading_pane_g1_cp2

0x24e2,	// (0x000045f5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x24e2,	// (0x000045f5) list_single_graphic_heading_pane_g4_cp2

0x04a0,	// (0x000025b3) list_single_graphic_heading_pane_g5_cp2

0x2521,	// (0x00004634) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2521,	// (0x00004634) list_single_graphic_heading_pane_t1_cp2

0x2537,	// (0x0000464a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2537,	// (0x0000464a) list_single_graphic_heading_pane_t2_cp2

0x24d6,	// (0x000045e9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x24d6,	// (0x000045e9) list_single_2graphic_pane_g1_cp2

0x24e2,	// (0x000045f5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x24e2,	// (0x000045f5) list_single_2graphic_pane_g2_cp2

0x04a0,	// (0x000025b3) list_single_2graphic_pane_g3_cp2

0x24f3,	// (0x00004606) list_single_2graphic_pane_g4_cp2_ParamLimits

0x24f3,	// (0x00004606) list_single_2graphic_pane_g4_cp2

0x24ff,	// (0x00004612) list_single_2graphic_pane_t1_cp2_ParamLimits

0x24ff,	// (0x00004612) list_single_2graphic_pane_t1_cp2

0xe1ee,	// (0x00010301) list_highlight_pane_g10_cp1

0x20ae,	// (0x000041c1) list_highlight_pane_g1_cp1

0x20b6,	// (0x000041c9) list_highlight_pane_g2_cp1

0x20be,	// (0x000041d1) list_highlight_pane_g3_cp1

0x20c6,	// (0x000041d9) list_highlight_pane_g4_cp1

0x20ce,	// (0x000041e1) list_highlight_pane_g5_cp1

0x20d6,	// (0x000041e9) list_highlight_pane_g6_cp1

0x20de,	// (0x000041f1) list_highlight_pane_g7_cp1

0x20e6,	// (0x000041f9) list_highlight_pane_g8_cp1

0x20ee,	// (0x00004201) list_highlight_pane_g9_cp1

0xb951,	// (0x0000da64) form_field_slider_pane_t3

0xb95f,	// (0x0000da72) form_field_slider_pane_t4

0x1fea,	// (0x000040fd) slider_form_pane_ParamLimits

0x1fea,	// (0x000040fd) slider_form_pane

0xe367,	// (0x0001047a) control_abbreviations

0xe367,	// (0x0001047a) control_conventions

0xe367,	// (0x0001047a) control_definitions

0xe367,	// (0x0001047a) format_table_attribute

0x2942,	// (0x00004a55) bg_popup_preview_window_pane_g9

0xe367,	// (0x0001047a) format_table_data2

0xe367,	// (0x0001047a) format_table_data3

0xe367,	// (0x0001047a) format_table_data_example

0x0008,

0xe367,	// (0x0001047a) intro_purpose

0xf8de,	// (0x000119f1) bg_popup_preview_window_pane_g

0xe367,	// (0x0001047a) texts_category

0xe367,	// (0x0001047a) texts_graphics

0x0512,	// (0x00002625) text_digital

0x0521,	// (0x00002634) text_primary

0x0530,	// (0x00002643) text_primary_small

0x053f,	// (0x00002652) text_secondary

0x054e,	// (0x00002661) text_title

0x323d,	// (0x00005350) bg_passive_tab_pane_g1_cp3_srt

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp3_srt

0x3246,	// (0x00005359) bg_passive_tab_pane_g3_cp3_srt

0xe409,	// (0x0001051c) bg_active_tab_pane_cp3_srt_ParamLimits

0xe409,	// (0x0001051c) bg_active_tab_pane_cp3_srt

0x324f,	// (0x00005362) tabs_4_active_pane_srt_g1

0xbe23,	// (0x0000df36) tabs_4_active_pane_srt_t1_ParamLimits

0xbe23,	// (0x0000df36) tabs_4_active_pane_srt_t1

0x323d,	// (0x00005350) bg_active_tab_pane_g1_cp3_copy1

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp3_copy1

0x3246,	// (0x00005359) bg_active_tab_pane_g3_cp3_copy1

0xe421,	// (0x00010534) tabs_2_long_active_pane_srt_ParamLimits

0xe421,	// (0x00010534) tabs_2_long_active_pane_srt

0xe421,	// (0x00010534) tabs_2_long_passive_pane_srt_ParamLimits

0xe421,	// (0x00010534) tabs_2_long_passive_pane_srt

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp4_srt

0x2dfd,	// (0x00004f10) bg_passive_tab_pane_g1_cp4_srt

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp4_srt

0x2e06,	// (0x00004f19) bg_passive_tab_pane_g3_cp4_srt

0xe421,	// (0x00010534) bg_active_tab_pane_cp4_srt_ParamLimits

0xe421,	// (0x00010534) bg_active_tab_pane_cp4_srt

0xbc98,	// (0x0000ddab) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbc98,	// (0x0000ddab) tabs_2_long_active_pane_srt_t1

0x2dfd,	// (0x00004f10) bg_active_tab_pane_g1_cp4_srt

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp4_srt

0x2e06,	// (0x00004f19) bg_active_tab_pane_g3_cp4_srt

0xe409,	// (0x0001051c) tabs_3_long_active_pane_srt_ParamLimits

0xe409,	// (0x0001051c) tabs_3_long_active_pane_srt

0xe409,	// (0x0001051c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe409,	// (0x0001051c) tabs_3_long_passive_pane_cp_srt

0xe409,	// (0x0001051c) tabs_3_long_passive_pane_srt_ParamLimits

0xe409,	// (0x0001051c) tabs_3_long_passive_pane_srt

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp5_srt

0x0233,	// (0x00002346) bg_passive_tab_pane_g1_cp5_srt

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp5_srt

0x023c,	// (0x0000234f) bg_passive_tab_pane_g3_cp5_srt

0xe421,	// (0x00010534) bg_active_tab_pane_cp5_srt_ParamLimits

0xe421,	// (0x00010534) bg_active_tab_pane_cp5_srt

0xbc82,	// (0x0000dd95) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbc82,	// (0x0000dd95) tabs_3_long_active_pane_srt_t1

0x0233,	// (0x00002346) bg_active_tab_pane_g1_cp5_srt

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp5_srt

0x023c,	// (0x0000234f) bg_active_tab_pane_g3_cp5_srt

0x2ddd,	// (0x00004ef0) navi_text_pane_srt_t1

0x2dd5,	// (0x00004ee8) navi_icon_pane_srt_g1

0x07cf,	// (0x000028e2) midp_editing_number_pane_srt

0x055d,	// (0x00002670) midp_ticker_pane_srt

0x07d7,	// (0x000028ea) midp_ticker_pane_srt_g1

0x07df,	// (0x000028f2) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00011880) midp_ticker_pane_srt_g

0x07e7,	// (0x000028fa) midp_ticker_pane_srt_t1

0x2dc6,	// (0x00004ed9) midp_editing_number_pane_t1_copy1

0xa9dc,	// (0x0000caef) listscroll_midp_pane

0xa9dc,	// (0x0000caef) midp_form_pane

0x05d4,	// (0x000026e7) midp_info_popup_window_ParamLimits

0x05d4,	// (0x000026e7) midp_info_popup_window

0xecc3,	// (0x00010dd6) bg_popup_sub_pane_cp50_ParamLimits

0xecc3,	// (0x00010dd6) bg_popup_sub_pane_cp50

0x1cd8,	// (0x00003deb) listscroll_midp_info_pane_ParamLimits

0x1cd8,	// (0x00003deb) listscroll_midp_info_pane

0x1cb8,	// (0x00003dcb) listscroll_form_midp_pane_ParamLimits

0x1cb8,	// (0x00003dcb) listscroll_form_midp_pane

0x1cc4,	// (0x00003dd7) scroll_bar_cp050

0x1cb8,	// (0x00003dcb) list_midp_pane

0x4098,	// (0x000061ab) signal_pane_g2_cp

0x1bd2,	// (0x00003ce5) listscroll_midp_info_pane_t1_ParamLimits

0x1bd2,	// (0x00003ce5) listscroll_midp_info_pane_t1

0x1bea,	// (0x00003cfd) listscroll_midp_info_pane_t2_ParamLimits

0x1bea,	// (0x00003cfd) listscroll_midp_info_pane_t2

0x1c28,	// (0x00003d3b) listscroll_midp_info_pane_t3_ParamLimits

0x1c28,	// (0x00003d3b) listscroll_midp_info_pane_t3

0x1c62,	// (0x00003d75) listscroll_midp_info_pane_t4_ParamLimits

0x1c62,	// (0x00003d75) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x0001192c) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x0001192c) listscroll_midp_info_pane_t

0xed43,	// (0x00010e56) scroll_pane_cp21

0x1b6c,	// (0x00003c7f) form_midp_field_choice_group_pane

0x1b75,	// (0x00003c88) form_midp_field_text_pane

0x1bb8,	// (0x00003ccb) form_midp_field_time_pane

0x1bc0,	// (0x00003cd3) form_midp_gauge_slider_pane

0x1bc9,	// (0x00003cdc) form_midp_gauge_wait_pane

0xe367,	// (0x0001047a) form_midp_image_pane

0xb934,	// (0x0000da47) list_single_midp_pane_ParamLimits

0xb934,	// (0x0000da47) list_single_midp_pane

0xb90c,	// (0x0000da1f) form_midp_field_text_pane_t1

0x1865,	// (0x00003978) input_focus_pane_cp050

0x1b3b,	// (0x00003c4e) list_midp_form_text_pane

0x1adf,	// (0x00003bf2) form_midp_field_choice_group_pane_t1

0x1aed,	// (0x00003c00) input_focus_pane_cp051

0x1b01,	// (0x00003c14) list_midp_choice_pane

0xe367,	// (0x0001047a) status_idle_pane

0x1ac3,	// (0x00003bd6) form_midp_field_time_pane_t1

0xe1ee,	// (0x00010301) wait_anim_pane_g2_copy1

0x1ad1,	// (0x00003be4) form_midp_field_time_pane_t2

0x0001,

0x0684,	// (0x00002797) aid_navinavi_width_2_pane

0xf814,	// (0x00011927) form_midp_field_time_pane_t

0xe367,	// (0x0001047a) input_focus_pane_cp052

0xe367,	// (0x0001047a) bg_input_focus_pane_cp040

0x1a83,	// (0x00003b96) form_midp_gauge_slider_pane_t1

0x1a91,	// (0x00003ba4) form_midp_gauge_slider_pane_t2

0xb8f0,	// (0x0000da03) form_midp_gauge_slider_pane_t3

0xb8fe,	// (0x0000da11) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x0001191e) form_midp_gauge_slider_pane_t

0x1abb,	// (0x00003bce) form_midp_slider_pane

0xe421,	// (0x00010534) bg_input_focus_pane_cp041_ParamLimits

0xe421,	// (0x00010534) bg_input_focus_pane_cp041

0x1a50,	// (0x00003b63) form_midp_gauge_wait_pane_t1_ParamLimits

0x1a50,	// (0x00003b63) form_midp_gauge_wait_pane_t1

0x1a62,	// (0x00003b75) form_midp_gauge_wait_pane_t2_ParamLimits

0x1a62,	// (0x00003b75) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x00011919) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x00011919) form_midp_gauge_wait_pane_t

0x1a74,	// (0x00003b87) form_midp_wait_pane_ParamLimits

0x1a74,	// (0x00003b87) form_midp_wait_pane

0x1a18,	// (0x00003b2b) form_midp_image_pane_g1

0x1a21,	// (0x00003b34) form_midp_image_pane_t1

0x1a30,	// (0x00003b43) form_midp_image_pane_t2

0x1a3f,	// (0x00003b52) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x00011912) form_midp_image_pane_t

0x1a00,	// (0x00003b13) list_single_midp_pane_g1

0x1a09,	// (0x00003b1c) list_single_midp_pane_t1

0xb8d9,	// (0x0000d9ec) list_midp_form_item_pane_ParamLimits

0xb8d9,	// (0x0000d9ec) list_midp_form_item_pane

0x062c,	// (0x0000273f) list_midp_form_item_pane_t1

0x063b,	// (0x0000274e) midp_ticker_pane_g1

0x0647,	// (0x0000275a) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00011866) midp_ticker_pane_g

0xaa80,	// (0x0000cb93) midp_ticker_pane_t1

0xbd7b,	// (0x0000de8e) midp_editing_number_pane_t1

0x30be,	// (0x000051d1) midp_editing_number_pane

0x30cd,	// (0x000051e0) midp_ticker_pane

0x2d8e,	// (0x00004ea1) ai_message_heading_pane

0xe367,	// (0x0001047a) bg_popup_window_pane_cp14

0x2d96,	// (0x00004ea9) listscroll_ai_message_pane

0x2d14,	// (0x00004e27) ai_message_heading_pane_g1_ParamLimits

0x2d14,	// (0x00004e27) ai_message_heading_pane_g1

0x2d20,	// (0x00004e33) ai_message_heading_pane_g2_ParamLimits

0x2d20,	// (0x00004e33) ai_message_heading_pane_g2

0x2d2e,	// (0x00004e41) ai_message_heading_pane_g3_ParamLimits

0x2d2e,	// (0x00004e41) ai_message_heading_pane_g3

0x2d3a,	// (0x00004e4d) ai_message_heading_pane_g4_ParamLimits

0x2d3a,	// (0x00004e4d) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x00011a53) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x00011a53) ai_message_heading_pane_g

0x2d46,	// (0x00004e59) ai_message_heading_pane_t1_ParamLimits

0x2d46,	// (0x00004e59) ai_message_heading_pane_t1

0x2d60,	// (0x00004e73) ai_message_heading_pane_t2_ParamLimits

0x2d60,	// (0x00004e73) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x00011a5c) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x00011a5c) ai_message_heading_pane_t

0x2d74,	// (0x00004e87) bg_popup_heading_pane_cp1_ParamLimits

0x2d74,	// (0x00004e87) bg_popup_heading_pane_cp1

0x2d02,	// (0x00004e15) list_ai_message_pane_ParamLimits

0x2d02,	// (0x00004e15) list_ai_message_pane

0xed43,	// (0x00010e56) scroll_pane_cp10

0x2c3a,	// (0x00004d4d) list_ai_message_pane_g1

0x2c42,	// (0x00004d55) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x00011a30) list_ai_message_pane_g

0x2c4a,	// (0x00004d5d) list_ai_message_pane_t1_ParamLimits

0x2c4a,	// (0x00004d5d) list_ai_message_pane_t1

0x2c5f,	// (0x00004d72) list_ai_message_pane_t2_ParamLimits

0x2c5f,	// (0x00004d72) list_ai_message_pane_t2

0x2c74,	// (0x00004d87) list_ai_message_pane_t3_ParamLimits

0x2c74,	// (0x00004d87) list_ai_message_pane_t3

0x2c89,	// (0x00004d9c) list_ai_message_pane_t4_ParamLimits

0x2c89,	// (0x00004d9c) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x00011a35) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x00011a35) list_ai_message_pane_t

0xbc68,	// (0x0000dd7b) cell_ai_soft_ind_pane_ParamLimits

0xbc68,	// (0x0000dd7b) cell_ai_soft_ind_pane

0x0665,	// (0x00002778) cell_ai_soft_ind_pane_g1_ParamLimits

0x0665,	// (0x00002778) cell_ai_soft_ind_pane_g1

0xe367,	// (0x0001047a) grid_highlight_cp1

0x0672,	// (0x00002785) text_secondary_cp56_ParamLimits

0x0672,	// (0x00002785) text_secondary_cp56

0x2bf8,	// (0x00004d0b) example_general_pane_ParamLimits

0x2bf8,	// (0x00004d0b) example_general_pane

0x2c04,	// (0x00004d17) example_parent_pane_g1_ParamLimits

0x2c04,	// (0x00004d17) example_parent_pane_g1

0x2c10,	// (0x00004d23) example_parent_pane_t1_ParamLimits

0x2c10,	// (0x00004d23) example_parent_pane_t1

0xb100,	// (0x0000d213) popup_preview_text_window_ParamLimits

0xb100,	// (0x0000d213) popup_preview_text_window

0x0498,	// (0x000025ab) list_single_pane_cp2_g4

0xe6c5,	// (0x000107d8) bg_popup_preview_window_pane_ParamLimits

0xe6c5,	// (0x000107d8) bg_popup_preview_window_pane

0x294c,	// (0x00004a5f) popup_preview_text_window_t1_ParamLimits

0x294c,	// (0x00004a5f) popup_preview_text_window_t1

0x296a,	// (0x00004a7d) popup_preview_text_window_t2_ParamLimits

0x296a,	// (0x00004a7d) popup_preview_text_window_t2

0x29b3,	// (0x00004ac6) popup_preview_text_window_t3_ParamLimits

0x29b3,	// (0x00004ac6) popup_preview_text_window_t3

0x29f8,	// (0x00004b0b) popup_preview_text_window_t4_ParamLimits

0x29f8,	// (0x00004b0b) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x00011a04) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x00011a04) popup_preview_text_window_t

0x2a76,	// (0x00004b89) scroll_pane_cp11

0x16ca,	// (0x000037dd) bg_popup_preview_window_pane_g1

0x2900,	// (0x00004a13) bg_popup_preview_window_pane_g2

0x290a,	// (0x00004a1d) bg_popup_preview_window_pane_g3

0x2914,	// (0x00004a27) bg_popup_preview_window_pane_g4

0x291e,	// (0x00004a31) bg_popup_preview_window_pane_g5

0x2928,	// (0x00004a3b) bg_popup_preview_window_pane_g6

0x2930,	// (0x00004a43) bg_popup_preview_window_pane_g7

0x2938,	// (0x00004a4b) bg_popup_preview_window_pane_g8

0xe204,	// (0x00010317) aid_popup_width_pane

0xb070,	// (0x0000d183) popup_midp_note_alarm_window_ParamLimits

0xb070,	// (0x0000d183) popup_midp_note_alarm_window

0xeb70,	// (0x00010c83) data_form_pane_ParamLimits

0xa56f,	// (0x0000c682) form_field_data_pane_g1

0xa579,	// (0x0000c68c) form_field_data_pane_t1_ParamLimits

0xeb7c,	// (0x00010c8f) input_focus_pane_ParamLimits

0xeb8a,	// (0x00010c9d) data_form_wide_pane_ParamLimits

0xeb96,	// (0x00010ca9) form_field_data_wide_pane_g1

0xebc2,	// (0x00010cd5) form_field_data_wide_pane_t1_ParamLimits

0xe87d,	// (0x00010990) input_focus_pane_cp6_ParamLimits

0xa6ba,	// (0x0000c7cd) input_popup_find_pane_g1_ParamLimits

0xa6ba,	// (0x0000c7cd) input_popup_find_pane_g1

0xf029,	// (0x0001113c) aid_navi_side_left_pane

0xf03e,	// (0x00011151) aid_navi_side_right_pane

0x21a9,	// (0x000042bc) bg_popup_window_pane_cp30_ParamLimits

0x21a9,	// (0x000042bc) bg_popup_window_pane_cp30

0x2223,	// (0x00004336) popup_midp_note_alarm_window_g1_ParamLimits

0x2223,	// (0x00004336) popup_midp_note_alarm_window_g1

0x2253,	// (0x00004366) popup_midp_note_alarm_window_t1_ParamLimits

0x2253,	// (0x00004366) popup_midp_note_alarm_window_t1

0x22f4,	// (0x00004407) popup_midp_note_alarm_window_t2_ParamLimits

0x22f4,	// (0x00004407) popup_midp_note_alarm_window_t2

0x23a2,	// (0x000044b5) popup_midp_note_alarm_window_t3_ParamLimits

0x23a2,	// (0x000044b5) popup_midp_note_alarm_window_t3

0x23d4,	// (0x000044e7) popup_midp_note_alarm_window_t4_ParamLimits

0x23d4,	// (0x000044e7) popup_midp_note_alarm_window_t4

0x23fa,	// (0x0000450d) popup_midp_note_alarm_window_t5_ParamLimits

0x23fa,	// (0x0000450d) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x000119a1) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x000119a1) popup_midp_note_alarm_window_t

0x24a6,	// (0x000045b9) wait_bar_pane_cp1_ParamLimits

0x24a6,	// (0x000045b9) wait_bar_pane_cp1

0xe367,	// (0x0001047a) wait_anim_pane_copy1

0xe367,	// (0x0001047a) wait_border_pane_copy1

0x1e8e,	// (0x00003fa1) wait_border_pane_g1_copy1

0xebd9,	// (0x00010cec) form_field_popup_pane_g1

0xa593,	// (0x0000c6a6) form_field_popup_pane_t1_ParamLimits

0xeb7c,	// (0x00010c8f) input_focus_pane_cp7_ParamLimits

0xebe1,	// (0x00010cf4) list_form_pane_ParamLimits

0xebed,	// (0x00010d00) form_field_popup_wide_pane_g1

0xebf5,	// (0x00010d08) form_field_popup_wide_pane_t1_ParamLimits

0xeb7c,	// (0x00010c8f) input_focus_pane_cp8_ParamLimits

0xec07,	// (0x00010d1a) list_form_wide_pane_ParamLimits

0xbe82,	// (0x0000df95) aid_size_cell_graphic_pane

0xa612,	// (0x0000c725) data_form_pane_t1_ParamLimits

0xbd5f,	// (0x0000de72) data_form_wide_pane_t1_ParamLimits

0xb502,	// (0x0000d615) bg_status_flat_pane

0x9d98,	// (0x0000beab) title_pane_t1_ParamLimits

0xe3d1,	// (0x000104e4) title_pane_t2_ParamLimits

0xe3f7,	// (0x0001050a) title_pane_t3_ParamLimits

0xf557,	// (0x0001166a) title_pane_t_ParamLimits

0xa7e5,	// (0x0000c8f8) level_1_signal_ParamLimits

0xa7f7,	// (0x0000c90a) level_2_signal_ParamLimits

0xa80a,	// (0x0000c91d) level_3_signal_ParamLimits

0xa81d,	// (0x0000c930) level_4_signal_ParamLimits

0xa830,	// (0x0000c943) level_5_signal_ParamLimits

0xa843,	// (0x0000c956) level_6_signal_ParamLimits

0xa856,	// (0x0000c969) level_7_signal_ParamLimits

0xa7e5,	// (0x0000c8f8) level_1_battery_ParamLimits

0xa7f7,	// (0x0000c90a) level_2_battery_ParamLimits

0xa80a,	// (0x0000c91d) level_3_battery_ParamLimits

0xa81d,	// (0x0000c930) level_4_battery_ParamLimits

0xa830,	// (0x0000c943) level_5_battery_ParamLimits

0xa843,	// (0x0000c956) level_6_battery_ParamLimits

0xa856,	// (0x0000c969) level_7_battery_ParamLimits

0x20ae,	// (0x000041c1) bg_status_flat_pane_g1

0x20b6,	// (0x000041c9) bg_status_flat_pane_g2

0x20be,	// (0x000041d1) bg_status_flat_pane_g3

0x20c6,	// (0x000041d9) bg_status_flat_pane_g4

0x20ce,	// (0x000041e1) bg_status_flat_pane_g5

0x20d6,	// (0x000041e9) bg_status_flat_pane_g6

0x20de,	// (0x000041f1) bg_status_flat_pane_g7

0x9e2c,	// (0x0000bf3f) tabs_3_active_pane_t1_ParamLimits

0x9e2c,	// (0x0000bf3f) tabs_3_passive_pane_t1_ParamLimits

0x9e46,	// (0x0000bf59) tabs_4_active_pane_t1_ParamLimits

0x9e46,	// (0x0000bf59) tabs_4_1_passive_pane_t1_ParamLimits

0xa6d0,	// (0x0000c7e3) tabs_2_active_pane_t1_ParamLimits

0xa6d0,	// (0x0000c7e3) tabs_2_passive_pane_t1_ParamLimits

0xe421,	// (0x00010534) bg_active_tab_pane_cp4_ParamLimits

0xa6e2,	// (0x0000c7f5) tabs_2_long_active_pane_t1_ParamLimits

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp4_ParamLimits

0x1786,	// (0x00003899) list_single_midp_graphic_pane_t1_ParamLimits

0xe421,	// (0x00010534) bg_active_tab_pane_cp5_ParamLimits

0xa6f5,	// (0x0000c808) tabs_3_long_active_pane_t1_ParamLimits

0x0abb,	// (0x00002bce) bg_passive_tab_pane_cp5_ParamLimits

0x1786,	// (0x00003899) list_single_midp_graphic_pane_t1

0xb502,	// (0x0000d615) bg_status_flat_pane_ParamLimits

0x12a8,	// (0x000033bb) indicator_pane_cp2_ParamLimits

0x12a8,	// (0x000033bb) indicator_pane_cp2

0xb698,	// (0x0000d7ab) navi_pane_srt_ParamLimits

0xb698,	// (0x0000d7ab) navi_pane_srt

0x140f,	// (0x00003522) popup_clock_digital_analogue_window_cp1

0xe508,	// (0x0001061b) indicator_pane_t1

0x055d,	// (0x00002670) copy_highlight_pane

0x055d,	// (0x00002670) cursor_graphics_pane

0x055d,	// (0x00002670) graphic_within_text_pane

0x055d,	// (0x00002670) link_highlight_pane

0x2a39,	// (0x00004b4c) popup_preview_text_window_t5_ParamLimits

0x2a39,	// (0x00004b4c) popup_preview_text_window_t5

0x068e,	// (0x000027a1) cursor_digital_pane

0x068e,	// (0x000027a1) cursor_primary_pane

0x069f,	// (0x000027b2) cursor_primary_small_pane

0x06a7,	// (0x000027ba) cursor_secondary_pane

0x06af,	// (0x000027c2) cursor_title_pane

0x068e,	// (0x000027a1) link_highlight_digital_pane

0x0696,	// (0x000027a9) link_highlight_primary_pane

0x069f,	// (0x000027b2) link_highlight_primary_small_pane

0x06a7,	// (0x000027ba) link_highlight_secondary_pane

0x06af,	// (0x000027c2) link_highlight_title_pane

0x068e,	// (0x000027a1) copy_highlight_digital_pane

0x068e,	// (0x000027a1) copy_highlight_primary_pane

0x069f,	// (0x000027b2) copy_highlight_primary_small_pane

0x06a7,	// (0x000027ba) copy_highlight_secondary_pane

0x06af,	// (0x000027c2) copy_highlight_title_pane

0x06a7,	// (0x000027ba) graphic_text_digital_pane

0x214c,	// (0x0000425f) graphic_text_primary_pane

0x2155,	// (0x00004268) graphic_text_primary_small_pane

0x069f,	// (0x000027b2) graphic_text_secondary_pane

0x068e,	// (0x000027a1) graphic_text_title_pane

0xaa92,	// (0x0000cba5) cursor_primary_pane_g1

0x213e,	// (0x00004251) cursor_text_primary_t1

0xb981,	// (0x0000da94) cursor_primary_small_pane_g1

0x2130,	// (0x00004243) cursor_text_primary_small_t1

0xb977,	// (0x0000da8a) cursor_primary_small_pane_g1_copy1

0x2118,	// (0x0000422b) cursor_text_primary_small_t1_copy1

0x20f6,	// (0x00004209) cursor_text_title_t1

0xb96d,	// (0x0000da80) cursor_title_pane_g1

0xaa92,	// (0x0000cba5) cursor_digital_pane_g1

0x06c1,	// (0x000027d4) cursor_text_digital_t1

0x06cf,	// (0x000027e2) link_highlight_primary_pane_g1

0x209f,	// (0x000041b2) link_highlight_primary_pane_t1

0x06cf,	// (0x000027e2) link_highlight_primary_small_pane_g1

0x06d7,	// (0x000027ea) link_highlight_primary_small_pane_t1

0x06e6,	// (0x000027f9) link_highlight_secondary_pane_g1

0x06ee,	// (0x00002801) link_highlight_secondary_pane_t1

0x2013,	// (0x00004126) link_highlight_title_pane_g1

0x201b,	// (0x0000412e) link_highlight_title_pane_t1

0x1ffc,	// (0x0000410f) link_highlight_digital_pane_g1

0x2004,	// (0x00004117) link_highlight_digital_pane_t1

0x1ec4,	// (0x00003fd7) copy_highlight_primary_pane_g1

0x1edb,	// (0x00003fee) copy_highlight_primary_pane_t1

0x1ec4,	// (0x00003fd7) copy_highlight_primary_small_pane_g1

0x1ecc,	// (0x00003fdf) copy_highlight_primary_small_pane_t1

0x06fd,	// (0x00002810) copy_highlight_secondary_pane_g1

0x0705,	// (0x00002818) copy_highlight_secondary_pane_t1

0x1ead,	// (0x00003fc0) copy_highlight_title_pane_g1

0x1eb5,	// (0x00003fc8) copy_highlight_title_pane_t1

0x1ec4,	// (0x00003fd7) copy_highlight_digital_pane_g1

0x3565,	// (0x00005678) copy_highlight_digital_pane_t1

0x34b9,	// (0x000055cc) graphic_text_primary_pane_g1

0x3549,	// (0x0000565c) graphic_text_primary_pane_t1

0x3557,	// (0x0000566a) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x00011ad0) graphic_text_primary_pane_t

0x3525,	// (0x00005638) graphic_text_primary_small_pane_g1

0x352d,	// (0x00005640) graphic_text_primary_small_pane_t1

0x353b,	// (0x0000564e) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x00011acb) graphic_text_primary_small_pane_t

0x3501,	// (0x00005614) graphic_text_secondary_pane_g1

0x3509,	// (0x0000561c) graphic_text_secondary_pane_t1

0x3517,	// (0x0000562a) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x00011ac6) graphic_text_secondary_pane_t

0x34dd,	// (0x000055f0) graphic_text_title_pane_g1

0x34e5,	// (0x000055f8) graphic_text_title_pane_t1

0x34f3,	// (0x00005606) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x00011ac1) graphic_text_title_pane_t

0x34b9,	// (0x000055cc) graphic_text_digital_pane_g1

0x34c1,	// (0x000055d4) graphic_text_digital_pane_t1

0x34cf,	// (0x000055e2) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x00011abc) graphic_text_digital_pane_t

0xe421,	// (0x00010534) navi_icon_pane_srt_ParamLimits

0xe421,	// (0x00010534) navi_icon_pane_srt

0xe367,	// (0x0001047a) navi_midp_pane_srt

0xe367,	// (0x0001047a) navi_navi_pane_srt

0xe421,	// (0x00010534) navi_text_pane_srt_ParamLimits

0xe421,	// (0x00010534) navi_text_pane_srt

0x3484,	// (0x00005597) navi_navi_icon_text_pane_srt

0x348c,	// (0x0000559f) navi_navi_pane_srt_g1_ParamLimits

0x348c,	// (0x0000559f) navi_navi_pane_srt_g1

0x349e,	// (0x000055b1) navi_navi_pane_srt_g2_ParamLimits

0x349e,	// (0x000055b1) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x00011ab7) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x00011ab7) navi_navi_pane_srt_g

0x34b0,	// (0x000055c3) navi_navi_tabs_pane_srt

0x3484,	// (0x00005597) navi_navi_text_pane_srt

0x3484,	// (0x00005597) navi_navi_volume_pane_srt

0x3475,	// (0x00005588) navi_navi_text_pane_srt_t1

0x3450,	// (0x00005563) navi_navi_volume_pane_srt_g1

0x3458,	// (0x0000556b) volume_small_pane_srt_ParamLimits

0x3458,	// (0x0000556b) volume_small_pane_srt

0x0714,	// (0x00002827) volume_small_pane_srt_g1_ParamLimits

0x0714,	// (0x00002827) volume_small_pane_srt_g1

0x0724,	// (0x00002837) volume_small_pane_srt_g2_ParamLimits

0x0724,	// (0x00002837) volume_small_pane_srt_g2

0x0735,	// (0x00002848) volume_small_pane_srt_g3_ParamLimits

0x0735,	// (0x00002848) volume_small_pane_srt_g3

0x0746,	// (0x00002859) volume_small_pane_srt_g4_ParamLimits

0x0746,	// (0x00002859) volume_small_pane_srt_g4

0x0757,	// (0x0000286a) volume_small_pane_srt_g5_ParamLimits

0x0757,	// (0x0000286a) volume_small_pane_srt_g5

0x0768,	// (0x0000287b) volume_small_pane_srt_g6_ParamLimits

0x0768,	// (0x0000287b) volume_small_pane_srt_g6

0x0779,	// (0x0000288c) volume_small_pane_srt_g7_ParamLimits

0x0779,	// (0x0000288c) volume_small_pane_srt_g7

0x078a,	// (0x0000289d) volume_small_pane_srt_g8_ParamLimits

0x078a,	// (0x0000289d) volume_small_pane_srt_g8

0x079b,	// (0x000028ae) volume_small_pane_srt_g9_ParamLimits

0x079b,	// (0x000028ae) volume_small_pane_srt_g9

0x07ac,	// (0x000028bf) volume_small_pane_srt_g10_ParamLimits

0x07ac,	// (0x000028bf) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001186b) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001186b) volume_small_pane_srt_g

0xe77a,	// (0x0001088d) query_popup_data_pane_cp2

0x343e,	// (0x00005551) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x343e,	// (0x00005551) navi_navi_icon_text_pane_srt_t1

0x214c,	// (0x0000425f) navi_tabs_2_long_pane_srt

0x214c,	// (0x0000425f) navi_tabs_2_pane_srt

0x214c,	// (0x0000425f) navi_tabs_3_long_pane_srt

0x214c,	// (0x0000425f) navi_tabs_3_pane_srt

0x214c,	// (0x0000425f) navi_tabs_4_pane_srt

0x3416,	// (0x00005529) tabs_2_active_pane_srt_ParamLimits

0x3416,	// (0x00005529) tabs_2_active_pane_srt

0x3426,	// (0x00005539) tabs_2_passive_pane_srt_ParamLimits

0x3426,	// (0x00005539) tabs_2_passive_pane_srt

0x1865,	// (0x00003978) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1865,	// (0x00003978) bg_passive_tab_pane_cp1_srt

0x33ea,	// (0x000054fd) bg_passive_tab_pane_g1_cp1_srt

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp1_srt

0x33f3,	// (0x00005506) bg_passive_tab_pane_g3_cp1_srt

0xe409,	// (0x0001051c) bg_active_tab_pane_cp1_srt_ParamLimits

0xe409,	// (0x0001051c) bg_active_tab_pane_cp1_srt

0x33fc,	// (0x0000550f) tabs_2_active_pane_srt_g1

0xbec4,	// (0x0000dfd7) tabs_2_active_pane_srt_t1_ParamLimits

0xbec4,	// (0x0000dfd7) tabs_2_active_pane_srt_t1

0x33ea,	// (0x000054fd) bg_active_tab_pane_g1_cp1_srt

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp1_srt

0x33f3,	// (0x00005506) bg_active_tab_pane_g3_cp1_srt

0x33b7,	// (0x000054ca) tabs_3_active_pane_srt_ParamLimits

0x33b7,	// (0x000054ca) tabs_3_active_pane_srt

0x33c8,	// (0x000054db) tabs_3_passive_pane_cp_srt_ParamLimits

0x33c8,	// (0x000054db) tabs_3_passive_pane_cp_srt

0x33d9,	// (0x000054ec) tabs_3_passive_pane_srt_ParamLimits

0x33d9,	// (0x000054ec) tabs_3_passive_pane_srt

0x1865,	// (0x00003978) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1865,	// (0x00003978) bg_passive_tab_pane_cp2_srt

0x07bd,	// (0x000028d0) bg_passive_tab_pane_g1_cp2_srt

0x0068,	// (0x0000217b) bg_passive_tab_pane_g2_cp2_srt

0x07c6,	// (0x000028d9) bg_passive_tab_pane_g3_cp2_srt

0xe409,	// (0x0001051c) bg_active_tab_pane_cp2_srt_ParamLimits

0xe409,	// (0x0001051c) bg_active_tab_pane_cp2_srt

0x339d,	// (0x000054b0) tabs_3_active_pane_srt_g1

0xbeae,	// (0x0000dfc1) tabs_3_active_pane_srt_t1_ParamLimits

0xbeae,	// (0x0000dfc1) tabs_3_active_pane_srt_t1

0x07bd,	// (0x000028d0) bg_active_tab_pane_g1_cp2_srt

0x0068,	// (0x0000217b) bg_active_tab_pane_g2_cp2_srt

0x07c6,	// (0x000028d9) bg_active_tab_pane_g3_cp2_srt

0x3355,	// (0x00005468) tabs_4_active_pane_srt_ParamLimits

0x3355,	// (0x00005468) tabs_4_active_pane_srt

0x3367,	// (0x0000547a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3367,	// (0x0000547a) tabs_4_passive_pane_cp2_srt

0x0a7b,	// (0x00002b8e) aid_size_cell_toolbar

0x2ee8,	// (0x00004ffb) main_idle_act_pane_ParamLimits

0x0cc2,	// (0x00002dd5) popup_large_graphic_colour_window_ParamLimits

0xb3c4,	// (0x0000d4d7) popup_toolbar_window_ParamLimits

0xb3c4,	// (0x0000d4d7) popup_toolbar_window

0x3104,	// (0x00005217) list_single_graphic_2heading_pane_ParamLimits

0x3104,	// (0x00005217) list_single_graphic_2heading_pane

0xf0b7,	// (0x000111ca) aid_size_cell_apps_grid_lsc_pane

0xf0c9,	// (0x000111dc) aid_size_cell_apps_grid_prt_pane

0x0abb,	// (0x00002bce) bg_wml_button_pane_cp1_ParamLimits

0x0abb,	// (0x00002bce) bg_wml_button_pane_cp1

0xb90c,	// (0x0000da1f) form_midp_field_text_pane_t1_ParamLimits

0x1865,	// (0x00003978) input_focus_pane_cp050_ParamLimits

0x1b3b,	// (0x00003c4e) list_midp_form_text_pane_ParamLimits

0x1aed,	// (0x00003c00) input_focus_pane_cp051_ParamLimits

0x1b01,	// (0x00003c14) list_midp_choice_pane_ParamLimits

0x19ac,	// (0x00003abf) list_single_2graphic_pane_cp3_ParamLimits

0x19ac,	// (0x00003abf) list_single_2graphic_pane_cp3

0x19c2,	// (0x00003ad5) list_single_midp_graphic_pane_ParamLimits

0x19c2,	// (0x00003ad5) list_single_midp_graphic_pane

0x1562,	// (0x00003675) list_single_graphic_2heading_pane_g1_ParamLimits

0x1562,	// (0x00003675) list_single_graphic_2heading_pane_g1

0x04ce,	// (0x000025e1) list_single_graphic_2heading_pane_g4_ParamLimits

0x04ce,	// (0x000025e1) list_single_graphic_2heading_pane_g4

0x156e,	// (0x00003681) list_single_graphic_2heading_pane_g5_ParamLimits

0x156e,	// (0x00003681) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000118be) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000118be) list_single_graphic_2heading_pane_g

0x157a,	// (0x0000368d) list_single_graphic_2heading_pane_t1_ParamLimits

0x157a,	// (0x0000368d) list_single_graphic_2heading_pane_t1

0x158e,	// (0x000036a1) list_single_graphic_2heading_pane_t2_ParamLimits

0x158e,	// (0x000036a1) list_single_graphic_2heading_pane_t2

0x15aa,	// (0x000036bd) list_single_graphic_2heading_pane_t3_ParamLimits

0x15aa,	// (0x000036bd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000118c5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000118c5) list_single_graphic_2heading_pane_t

0x15c2,	// (0x000036d5) bg_popup_sub_pane_cp2

0x15ec,	// (0x000036ff) grid_toobar_pane

0x1628,	// (0x0000373b) cell_toolbar_pane_ParamLimits

0x1628,	// (0x0000373b) cell_toolbar_pane

0x166e,	// (0x00003781) cell_toolbar_pane_g1_ParamLimits

0x166e,	// (0x00003781) cell_toolbar_pane_g1

0x1682,	// (0x00003795) cell_toolbar_pane_g2_ParamLimits

0x1682,	// (0x00003795) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x000118cc) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x000118cc) cell_toolbar_pane_g

0x16a4,	// (0x000037b7) grid_highlight_pane_cp2_ParamLimits

0x16a4,	// (0x000037b7) grid_highlight_pane_cp2

0x16be,	// (0x000037d1) toolbar_button_pane

0x16ca,	// (0x000037dd) toolbar_button_pane_g1

0x16d2,	// (0x000037e5) toolbar_button_pane_g2

0x16da,	// (0x000037ed) toolbar_button_pane_g3

0x16e2,	// (0x000037f5) toolbar_button_pane_g4

0x16ea,	// (0x000037fd) toolbar_button_pane_g5

0x16f2,	// (0x00003805) toolbar_button_pane_g6

0x16fa,	// (0x0000380d) toolbar_button_pane_g7

0x1702,	// (0x00003815) toolbar_button_pane_g8

0x170a,	// (0x0000381d) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x000118d1) toolbar_button_pane_g

0x171a,	// (0x0000382d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x171a,	// (0x0000382d) list_single_2graphic_pane_g1_cp3

0xb83b,	// (0x0000d94e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb83b,	// (0x0000d94e) list_single_2graphic_pane_g2_cp3

0x0393,	// (0x000024a6) list_single_2graphic_pane_g3_cp3

0x1737,	// (0x0000384a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1737,	// (0x0000384a) list_single_2graphic_pane_g4_cp3

0x1743,	// (0x00003856) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1743,	// (0x00003856) list_single_2graphic_pane_t1_cp3

0x0387,	// (0x0000249a) list_single_midp_graphic_pane_g2_ParamLimits

0x0387,	// (0x0000249a) list_single_midp_graphic_pane_g2

0x0a83,	// (0x00002b96) aid_zoom_text_primary

0x0a8b,	// (0x00002b9e) aid_zoom_text_secondary

0xaaea,	// (0x0000cbfd) status_small_pane_g7_ParamLimits

0xaaea,	// (0x0000cbfd) status_small_pane_g7

0xab0d,	// (0x0000cc20) status_small_pane_t1_ParamLimits

0x9d68,	// (0x0000be7b) title_pane_g2

0x0003,

0xf54e,	// (0x00011661) title_pane_g

0xa008,	// (0x0000c11b) aid_size_cell_colour_1_pane_ParamLimits

0xa008,	// (0x0000c11b) aid_size_cell_colour_1_pane

0xa01c,	// (0x0000c12f) aid_size_cell_colour_2_pane_ParamLimits

0xa01c,	// (0x0000c12f) aid_size_cell_colour_2_pane

0xa030,	// (0x0000c143) aid_size_cell_colour_3_pane_ParamLimits

0xa030,	// (0x0000c143) aid_size_cell_colour_3_pane

0xa044,	// (0x0000c157) aid_size_cell_colour_4_pane_ParamLimits

0xa044,	// (0x0000c157) aid_size_cell_colour_4_pane

0xef30,	// (0x00011043) title_pane_stacon_g1_ParamLimits

0xef30,	// (0x00011043) title_pane_stacon_g1

0x1f32,	// (0x00004045) popup_note_wait_window_g3_ParamLimits

0x1f32,	// (0x00004045) popup_note_wait_window_g3

0x1fa9,	// (0x000040bc) popup_note_wait_window_t5_ParamLimits

0x1fa9,	// (0x000040bc) popup_note_wait_window_t5

0xe367,	// (0x0001047a) main_feb_china_hwr_fs_writing_pane

0xad5d,	// (0x0000ce70) popup_feb_china_hwr_fs_window_ParamLimits

0xad5d,	// (0x0000ce70) popup_feb_china_hwr_fs_window

0xb84c,	// (0x0000d95f) aid_size_cell_hwr_fs_ParamLimits

0xb84c,	// (0x0000d95f) aid_size_cell_hwr_fs

0x1865,	// (0x00003978) bg_popup_sub_pane_cp3_ParamLimits

0x1865,	// (0x00003978) bg_popup_sub_pane_cp3

0xb861,	// (0x0000d974) grid_hwr_fs_pane_ParamLimits

0xb861,	// (0x0000d974) grid_hwr_fs_pane

0x1889,	// (0x0000399c) linegrid_hwr_fs_pane_ParamLimits

0x1889,	// (0x0000399c) linegrid_hwr_fs_pane

0xb879,	// (0x0000d98c) cell_hwr_fs_pane_ParamLimits

0xb879,	// (0x0000d98c) cell_hwr_fs_pane

0x18bd,	// (0x000039d0) linegrid_hwr_fs_pane_g1_ParamLimits

0x18bd,	// (0x000039d0) linegrid_hwr_fs_pane_g1

0xb89f,	// (0x0000d9b2) linegrid_hwr_fs_pane_g2_ParamLimits

0xb89f,	// (0x0000d9b2) linegrid_hwr_fs_pane_g2

0x18db,	// (0x000039ee) linegrid_hwr_fs_pane_g3_ParamLimits

0x18db,	// (0x000039ee) linegrid_hwr_fs_pane_g3

0x18e7,	// (0x000039fa) linegrid_hwr_fs_pane_g4_ParamLimits

0x18e7,	// (0x000039fa) linegrid_hwr_fs_pane_g4

0x1905,	// (0x00003a18) linegrid_hwr_fs_pane_g5_ParamLimits

0x1905,	// (0x00003a18) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x000118f7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x000118f7) linegrid_hwr_fs_pane_g

0x191b,	// (0x00003a2e) cell_hwr_fs_pane_g1_ParamLimits

0x191b,	// (0x00003a2e) cell_hwr_fs_pane_g1

0x149d,	// (0x000035b0) cell_hwr_fs_pane_g2_ParamLimits

0x149d,	// (0x000035b0) cell_hwr_fs_pane_g2

0xb8b1,	// (0x0000d9c4) cell_hwr_fs_pane_g3_ParamLimits

0xb8b1,	// (0x0000d9c4) cell_hwr_fs_pane_g3

0xb8be,	// (0x0000d9d1) cell_hwr_fs_pane_g4_ParamLimits

0xb8be,	// (0x0000d9d1) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x00011902) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x00011902) cell_hwr_fs_pane_g

0xb8cb,	// (0x0000d9de) cell_hwr_fs_pane_t1

0xe367,	// (0x0001047a) grid_highlight_pane_cp6

0xe367,	// (0x0001047a) main_idle_act2_pane

0xed2a,	// (0x00010e3d) aid_inside_area_popup_secondary

0xbaf7,	// (0x0000dc0a) aid_inside_area_window_primary_ParamLimits

0xbaf7,	// (0x0000dc0a) aid_inside_area_window_primary

0x3574,	// (0x00005687) ai2_news_ticker_pane

0x357c,	// (0x0000568f) aid_size_cell_ai1_link_ParamLimits

0x357c,	// (0x0000568f) aid_size_cell_ai1_link

0x3596,	// (0x000056a9) popup_ai2_data_window_ParamLimits

0x3596,	// (0x000056a9) popup_ai2_data_window

0x35b4,	// (0x000056c7) popup_ai2_link_window_ParamLimits

0x35b4,	// (0x000056c7) popup_ai2_link_window

0x1865,	// (0x00003978) bg_popup_sub_pane_cp4_ParamLimits

0x1865,	// (0x00003978) bg_popup_sub_pane_cp4

0x35ca,	// (0x000056dd) grid_ai2_link_pane_ParamLimits

0x35ca,	// (0x000056dd) grid_ai2_link_pane

0x35e1,	// (0x000056f4) popup_ai2_link_window_g1_ParamLimits

0x35e1,	// (0x000056f4) popup_ai2_link_window_g1

0x35ed,	// (0x00005700) popup_ai2_link_window_g2_ParamLimits

0x35ed,	// (0x00005700) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x00011ad5) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x00011ad5) popup_ai2_link_window_g

0x35fe,	// (0x00005711) ai2_mp_button_pane

0x3606,	// (0x00005719) ai2_mp_volume_pane

0x1aed,	// (0x00003c00) bg_popup_sub_pane_cp5_ParamLimits

0x1aed,	// (0x00003c00) bg_popup_sub_pane_cp5

0x360e,	// (0x00005721) heading_ai2_gene_pane_ParamLimits

0x360e,	// (0x00005721) heading_ai2_gene_pane

0x361a,	// (0x0000572d) list_ai2_gene_pane_ParamLimits

0x361a,	// (0x0000572d) list_ai2_gene_pane

0x3662,	// (0x00005775) cell_ai2_link_pane_ParamLimits

0x3662,	// (0x00005775) cell_ai2_link_pane

0x3678,	// (0x0000578b) cell_ai2_link_pane_g1

0xe367,	// (0x0001047a) grid_highlight_pane_cp7

0x374b,	// (0x0000585e) ai2_mp_volume_pane_g1

0x3753,	// (0x00005866) ai2_mp_volume_pane_g2

0x36c0,	// (0x000057d3) list_ai2_gene_pane_t1

0x375b,	// (0x0000586e) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x00011aee) ai2_mp_volume_pane_g

0x3763,	// (0x00005876) volume_small_pane_cp3

0x376c,	// (0x0000587f) aid_size_cell_ai2_button

0x3774,	// (0x00005887) grid_ai2_button_pane

0x377d,	// (0x00005890) cell_ai2_button_pane_ParamLimits

0x377d,	// (0x00005890) cell_ai2_button_pane

0xe1ee,	// (0x00010301) cell_ai2_button_pane_g1

0xe367,	// (0x0001047a) grid_highlight_pane_cp8

0x370b,	// (0x0000581e) ai2_gene_pane_t1_ParamLimits

0x370b,	// (0x0000581e) ai2_gene_pane_t1

0xacd9,	// (0x0000cdec) aid_height_parent_landscape

0xbcaf,	// (0x0000ddc2) aid_height_set_list

0x2ee8,	// (0x00004ffb) aid_size_parent

0xbe82,	// (0x0000df95) aid_size_cell_graphic_pane_ParamLimits

0x362a,	// (0x0000573d) popup_ai2_data_window_g1_ParamLimits

0x362a,	// (0x0000573d) popup_ai2_data_window_g1

0x3636,	// (0x00005749) ai2_news_ticker_pane_g1

0x363e,	// (0x00005751) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x00011ada) ai2_news_ticker_pane_g

0x3646,	// (0x00005759) ai2_news_ticker_pane_t1

0x3654,	// (0x00005767) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x00011adf) ai2_news_ticker_pane_t

0x3681,	// (0x00005794) heading_ai2_gene_pane_g1

0x3689,	// (0x0000579c) heading_ai2_gene_pane_t1_ParamLimits

0x3689,	// (0x0000579c) heading_ai2_gene_pane_t1

0x369e,	// (0x000057b1) list_highlight_pane_cp6

0x36a6,	// (0x000057b9) ai2_gene_pane_ParamLimits

0x36a6,	// (0x000057b9) ai2_gene_pane

0x36ce,	// (0x000057e1) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x00011ae4) list_ai2_gene_pane_t

0x36dc,	// (0x000057ef) list_highlight_pane_cp8_ParamLimits

0x36dc,	// (0x000057ef) list_highlight_pane_cp8

0x36ed,	// (0x00005800) ai2_gene_pane_g1_ParamLimits

0x36ed,	// (0x00005800) ai2_gene_pane_g1

0x36ff,	// (0x00005812) ai2_gene_pane_g2_ParamLimits

0x36ff,	// (0x00005812) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x00011ae9) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x00011ae9) ai2_gene_pane_g

0xea98,	// (0x00010bab) scroll_pane_cp12

0xac96,	// (0x0000cda9) control_pane_t3_ParamLimits

0xac96,	// (0x0000cda9) control_pane_t3

0xaafe,	// (0x0000cc11) status_small_pane_g8_ParamLimits

0xaafe,	// (0x0000cc11) status_small_pane_g8

0xadff,	// (0x0000cf12) popup_find_window_ParamLimits

0xb0b0,	// (0x0000d1c3) popup_note_image_window_ParamLimits

0x1562,	// (0x00003675) list_double2_graphic_pane_vc_g1_ParamLimits

0x1562,	// (0x00003675) list_double2_graphic_pane_vc_g1

0x04ce,	// (0x000025e1) list_double2_graphic_pane_vc_g2_ParamLimits

0x04ce,	// (0x000025e1) list_double2_graphic_pane_vc_g2

0x156e,	// (0x00003681) list_double2_graphic_pane_vc_g3_ParamLimits

0x156e,	// (0x00003681) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ab,	// (0x000118be) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ab,	// (0x000118be) list_double2_graphic_pane_vc_g

0x1658,	// (0x0000376b) list_double2_graphic_pane_vc_t1_ParamLimits

0x1658,	// (0x0000376b) list_double2_graphic_pane_vc_t1

0x04ce,	// (0x000025e1) list_single_heading_pane_vc_g1_ParamLimits

0x04ce,	// (0x000025e1) list_single_heading_pane_vc_g1

0x156e,	// (0x00003681) list_single_heading_pane_vc_g2_ParamLimits

0x156e,	// (0x00003681) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000116db) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000116db) list_single_heading_pane_vc_g

0x175e,	// (0x00003871) list_single_heading_pane_vc_t1_ParamLimits

0x175e,	// (0x00003871) list_single_heading_pane_vc_t1

0x1774,	// (0x00003887) list_single_heading_pane_vc_t2_ParamLimits

0x1774,	// (0x00003887) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x000118e6) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x000118e6) list_single_heading_pane_vc_t

0x179c,	// (0x000038af) list_setting_number_pane_vc_g1_ParamLimits

0x179c,	// (0x000038af) list_setting_number_pane_vc_g1

0x17a8,	// (0x000038bb) list_setting_number_pane_vc_g2_ParamLimits

0x17a8,	// (0x000038bb) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x000118eb) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x000118eb) list_setting_number_pane_vc_g

0x17b4,	// (0x000038c7) list_setting_number_pane_vc_t1_ParamLimits

0x17b4,	// (0x000038c7) list_setting_number_pane_vc_t1

0x17c8,	// (0x000038db) list_setting_number_pane_vc_t2_ParamLimits

0x17c8,	// (0x000038db) list_setting_number_pane_vc_t2

0x17e4,	// (0x000038f7) list_setting_number_pane_vc_t3_ParamLimits

0x17e4,	// (0x000038f7) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x000118f0) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x000118f0) list_setting_number_pane_vc_t

0x1812,	// (0x00003925) set_value_pane_vc_ParamLimits

0x1812,	// (0x00003925) set_value_pane_vc

0x3104,	// (0x00005217) list_double2_graphic_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double2_graphic_pane_vc

0x3104,	// (0x00005217) list_double2_large_graphic_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double2_large_graphic_pane_vc

0x3104,	// (0x00005217) list_double2_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double2_pane_vc

0x3104,	// (0x00005217) list_double_graphic_heading_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double_graphic_heading_pane_vc

0x3104,	// (0x00005217) list_double_graphic_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double_graphic_pane_vc

0x3104,	// (0x00005217) list_double_heading_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double_heading_pane_vc

0x312c,	// (0x0000523f) list_double_large_graphic_pane_vc_ParamLimits

0x312c,	// (0x0000523f) list_double_large_graphic_pane_vc

0x3104,	// (0x00005217) list_double_number_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double_number_pane_vc

0x3104,	// (0x00005217) list_double_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double_pane_vc

0x3104,	// (0x00005217) list_double_time_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_double_time_pane_vc

0x3104,	// (0x00005217) list_setting_number_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_setting_number_pane_vc

0x3104,	// (0x00005217) list_setting_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_setting_pane_vc

0x3104,	// (0x00005217) list_single_graphic_heading_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_single_graphic_heading_pane_vc

0x3104,	// (0x00005217) list_single_heading_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_single_heading_pane_vc

0x3104,	// (0x00005217) list_single_number_heading_pane_vc_ParamLimits

0x3104,	// (0x00005217) list_single_number_heading_pane_vc

0x1562,	// (0x00003675) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1562,	// (0x00003675) list_double_graphic_heading_pane_vc_g1

0x37b0,	// (0x000058c3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x37b0,	// (0x000058c3) list_double_graphic_heading_pane_vc_g2

0x37bc,	// (0x000058cf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x37bc,	// (0x000058cf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x00011af5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x00011af5) list_double_graphic_heading_pane_vc_g

0x37c8,	// (0x000058db) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x37c8,	// (0x000058db) list_double_graphic_heading_pane_vc_t1

0x37de,	// (0x000058f1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x37de,	// (0x000058f1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00011afc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00011afc) list_double_graphic_heading_pane_vc_t

0x179c,	// (0x000038af) list_setting_pane_vc_g1_ParamLimits

0x179c,	// (0x000038af) list_setting_pane_vc_g1

0x17a8,	// (0x000038bb) list_setting_pane_vc_g2_ParamLimits

0x17a8,	// (0x000038bb) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x000118eb) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x000118eb) list_setting_pane_vc_g

0x3a17,	// (0x00005b2a) list_setting_pane_vc_t1_ParamLimits

0x3a17,	// (0x00005b2a) list_setting_pane_vc_t1

0x3a33,	// (0x00005b46) list_setting_pane_vc_t2_ParamLimits

0x3a33,	// (0x00005b46) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00011b3f) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00011b3f) list_setting_pane_vc_t

0x1812,	// (0x00003925) set_value_pane_cp_vc_ParamLimits

0x1812,	// (0x00003925) set_value_pane_cp_vc

0x04ce,	// (0x000025e1) list_single_number_heading_pane_vc_g1_ParamLimits

0x04ce,	// (0x000025e1) list_single_number_heading_pane_vc_g1

0x156e,	// (0x00003681) list_single_number_heading_pane_vc_g2_ParamLimits

0x156e,	// (0x00003681) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000116db) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000116db) list_single_number_heading_pane_vc_g

0x3a4f,	// (0x00005b62) list_single_number_heading_pane_vc_t1_ParamLimits

0x3a4f,	// (0x00005b62) list_single_number_heading_pane_vc_t1

0x3a65,	// (0x00005b78) list_single_number_heading_pane_vc_t2_ParamLimits

0x3a65,	// (0x00005b78) list_single_number_heading_pane_vc_t2

0x3a77,	// (0x00005b8a) list_single_number_heading_pane_vc_t3_ParamLimits

0x3a77,	// (0x00005b8a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x00011b44) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00011b44) list_single_number_heading_pane_vc_t

0x1562,	// (0x00003675) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1562,	// (0x00003675) list_single_graphic_heading_pane_vc_g1

0x04ce,	// (0x000025e1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x04ce,	// (0x000025e1) list_single_graphic_heading_pane_vc_g4

0x156e,	// (0x00003681) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x156e,	// (0x00003681) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ab,	// (0x000118be) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ab,	// (0x000118be) list_single_graphic_heading_pane_vc_g

0x3a4f,	// (0x00005b62) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3a4f,	// (0x00005b62) list_single_graphic_heading_pane_vc_t1

0x3a89,	// (0x00005b9c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3a89,	// (0x00005b9c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00011b4b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00011b4b) list_single_graphic_heading_pane_vc_t

0x04ce,	// (0x000025e1) list_double2_pane_vc_g1_ParamLimits

0x04ce,	// (0x000025e1) list_double2_pane_vc_g1

0x156e,	// (0x00003681) list_double2_pane_vc_g2_ParamLimits

0x156e,	// (0x00003681) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000116db) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000116db) list_double2_pane_vc_g

0x3a9b,	// (0x00005bae) list_double2_pane_vc_t1_ParamLimits

0x3a9b,	// (0x00005bae) list_double2_pane_vc_t1

0x3ab1,	// (0x00005bc4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3ab1,	// (0x00005bc4) list_double2_large_graphic_pane_vc_g1

0x04ce,	// (0x000025e1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x04ce,	// (0x000025e1) list_double2_large_graphic_pane_vc_g2

0x156e,	// (0x00003681) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x156e,	// (0x00003681) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000116f8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000116f8) list_double2_large_graphic_pane_vc_g

0x3abd,	// (0x00005bd0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3abd,	// (0x00005bd0) list_double2_large_graphic_pane_vc_t1

0x3ad3,	// (0x00005be6) list_double_time_pane_vc_g1_ParamLimits

0x3ad3,	// (0x00005be6) list_double_time_pane_vc_g1

0x3adf,	// (0x00005bf2) list_double_time_pane_vc_g2_ParamLimits

0x3adf,	// (0x00005bf2) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x00011b50) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x00011b50) list_double_time_pane_vc_g

0x3aeb,	// (0x00005bfe) list_double_time_pane_vc_t1_ParamLimits

0x3aeb,	// (0x00005bfe) list_double_time_pane_vc_t1

0x3b1b,	// (0x00005c2e) list_double_time_pane_vc_t2_ParamLimits

0x3b1b,	// (0x00005c2e) list_double_time_pane_vc_t2

0x3b44,	// (0x00005c57) list_double_time_pane_vc_t3_ParamLimits

0x3b44,	// (0x00005c57) list_double_time_pane_vc_t3

0x3b56,	// (0x00005c69) list_double_time_pane_vc_t4_ParamLimits

0x3b56,	// (0x00005c69) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x00011b55) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x00011b55) list_double_time_pane_vc_t

0x04ce,	// (0x000025e1) list_double_pane_vc_g1_ParamLimits

0x04ce,	// (0x000025e1) list_double_pane_vc_g1

0x156e,	// (0x00003681) list_double_pane_vc_g2_ParamLimits

0x156e,	// (0x00003681) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000116db) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000116db) list_double_pane_vc_g

0x3b6a,	// (0x00005c7d) list_double_pane_vc_t1_ParamLimits

0x3b6a,	// (0x00005c7d) list_double_pane_vc_t1

0x3b7e,	// (0x00005c91) list_double_pane_vc_t2_ParamLimits

0x3b7e,	// (0x00005c91) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x00011b5e) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x00011b5e) list_double_pane_vc_t

0x04ce,	// (0x000025e1) list_double_number_pane_vc_g1_ParamLimits

0x04ce,	// (0x000025e1) list_double_number_pane_vc_g1

0x156e,	// (0x00003681) list_double_number_pane_vc_g2_ParamLimits

0x156e,	// (0x00003681) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000116db) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000116db) list_double_number_pane_vc_g

0x3b94,	// (0x00005ca7) list_double_number_pane_vc_t1_ParamLimits

0x3b94,	// (0x00005ca7) list_double_number_pane_vc_t1

0x3ba6,	// (0x00005cb9) list_double_number_pane_vc_t2_ParamLimits

0x3ba6,	// (0x00005cb9) list_double_number_pane_vc_t2

0x3b7e,	// (0x00005c91) list_double_number_pane_vc_t3_ParamLimits

0x3b7e,	// (0x00005c91) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x00011b63) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x00011b63) list_double_number_pane_vc_t

0x3bba,	// (0x00005ccd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3bba,	// (0x00005ccd) list_double_large_graphic_pane_vc_g1

0x3bdc,	// (0x00005cef) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3bdc,	// (0x00005cef) list_double_large_graphic_pane_vc_g2

0x3bf0,	// (0x00005d03) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3bf0,	// (0x00005d03) list_double_large_graphic_pane_vc_g3

0x3bff,	// (0x00005d12) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3bff,	// (0x00005d12) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00011b6a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00011b6a) list_double_large_graphic_pane_vc_g

0x3c0e,	// (0x00005d21) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3c0e,	// (0x00005d21) list_double_large_graphic_pane_vc_t1

0x3c2a,	// (0x00005d3d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3c2a,	// (0x00005d3d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x00011b73) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x00011b73) list_double_large_graphic_pane_vc_t

0x37b0,	// (0x000058c3) list_double_heading_pane_vc_g1_ParamLimits

0x37b0,	// (0x000058c3) list_double_heading_pane_vc_g1

0x37bc,	// (0x000058cf) list_double_heading_pane_vc_g2_ParamLimits

0x37bc,	// (0x000058cf) list_double_heading_pane_vc_g2

0x0001,

0xfa65,	// (0x00011b78) list_double_heading_pane_vc_g_ParamLimits

0xfa65,	// (0x00011b78) list_double_heading_pane_vc_g

0x3c4a,	// (0x00005d5d) list_double_heading_pane_vc_t1_ParamLimits

0x3c4a,	// (0x00005d5d) list_double_heading_pane_vc_t1

0x3c5c,	// (0x00005d6f) list_double_heading_pane_vc_t2_ParamLimits

0x3c5c,	// (0x00005d6f) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x00011b7d) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x00011b7d) list_double_heading_pane_vc_t

0x3c74,	// (0x00005d87) list_double_graphic_pane_vc_g1_ParamLimits

0x3c74,	// (0x00005d87) list_double_graphic_pane_vc_g1

0x3c80,	// (0x00005d93) list_double_graphic_pane_vc_g2_ParamLimits

0x3c80,	// (0x00005d93) list_double_graphic_pane_vc_g2

0x04ce,	// (0x000025e1) list_double_graphic_pane_vc_g3_ParamLimits

0x04ce,	// (0x000025e1) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x00011b82) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00011b82) list_double_graphic_pane_vc_g

0x3c9d,	// (0x00005db0) list_double_graphic_pane_vc_t1_ParamLimits

0x3c9d,	// (0x00005db0) list_double_graphic_pane_vc_t1

0x3cc7,	// (0x00005dda) list_double_graphic_pane_vc_t2_ParamLimits

0x3cc7,	// (0x00005dda) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00011b8b) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00011b8b) list_double_graphic_pane_vc_t

0xe210,	// (0x00010323) aid_size_cell_fastswap

0x9b41,	// (0x0000bc54) aid_size_cell_touch_ParamLimits

0x9b41,	// (0x0000bc54) aid_size_cell_touch

0xe397,	// (0x000104aa) popup_fast_swap_wide_window_ParamLimits

0xe397,	// (0x000104aa) popup_fast_swap_wide_window

0x9cff,	// (0x0000be12) touch_pane_ParamLimits

0x9cff,	// (0x0000be12) touch_pane

0xeb11,	// (0x00010c24) button_value_adjust_pane_cp2

0xeb19,	// (0x00010c2c) button_value_adjust_pane_cp4

0xeb21,	// (0x00010c34) form_field_data_pane_cp2

0xa543,	// (0x0000c656) form_field_data_wide_pane_cp2

0xf0f8,	// (0x0001120b) bg_scroll_pane_ParamLimits

0xf117,	// (0x0001122a) scroll_handle_pane_ParamLimits

0xf12b,	// (0x0001123e) scroll_sc2_down_pane_ParamLimits

0xf12b,	// (0x0001123e) scroll_sc2_down_pane

0xf152,	// (0x00011265) scroll_sc2_up_pane_ParamLimits

0xf152,	// (0x00011265) scroll_sc2_up_pane

0xbff6,	// (0x0000e109) grid_wheel_folder_pane_g1_ParamLimits

0xbff6,	// (0x0000e109) grid_wheel_folder_pane_g1

0x01af,	// (0x000022c2) clock_nsta_pane_cp2_ParamLimits

0x01af,	// (0x000022c2) clock_nsta_pane_cp2

0xa9dc,	// (0x0000caef) listscroll_midp_pane_ParamLimits

0xa9e8,	// (0x0000cafb) midp_canvas_pane

0x0a69,	// (0x00002b7c) nsta_clock_indic_pane

0x0ac7,	// (0x00002bda) listscroll_form_pane_vc

0x0aeb,	// (0x00002bfe) listscroll_set_pane_vc_ParamLimits

0x0aeb,	// (0x00002bfe) listscroll_set_pane_vc

0xb52a,	// (0x0000d63d) clock_nsta_pane

0xb554,	// (0x0000d667) indicator_nsta_pane

0x15c2,	// (0x000036d5) bg_popup_sub_pane_cp2_ParamLimits

0x15d6,	// (0x000036e9) find_pane_cp2_ParamLimits

0x15d6,	// (0x000036e9) find_pane_cp2

0x15ec,	// (0x000036ff) grid_toobar_pane_ParamLimits

0x1824,	// (0x00003937) list_form_gen_pane_vc_ParamLimits

0x1824,	// (0x00003937) list_form_gen_pane_vc

0x183a,	// (0x0000394d) scroll_pane_cp8_vc_ParamLimits

0x183a,	// (0x0000394d) scroll_pane_cp8_vc

0x1959,	// (0x00003a6c) data_form_wide_pane_vc_ParamLimits

0x1959,	// (0x00003a6c) data_form_wide_pane_vc

0x1965,	// (0x00003a78) form_field_data_wide_pane_vc_g1

0x196d,	// (0x00003a80) form_field_data_wide_pane_vc_t1_ParamLimits

0x196d,	// (0x00003a80) form_field_data_wide_pane_vc_t1

0xeb7c,	// (0x00010c8f) input_focus_pane_cp6_vc_ParamLimits

0xeb7c,	// (0x00010c8f) input_focus_pane_cp6_vc

0x1cb8,	// (0x00003dcb) list_midp_pane_ParamLimits

0x3349,	// (0x0000545c) scroll_pane_cp16_ParamLimits

0x3349,	// (0x0000545c) scroll_pane_cp16

0x1d06,	// (0x00003e19) button_value_adjust_pane_ParamLimits

0x1d06,	// (0x00003e19) button_value_adjust_pane

0xbcc0,	// (0x0000ddd3) button_value_adjust_pane_cp6_ParamLimits

0xbcc0,	// (0x0000ddd3) button_value_adjust_pane_cp6

0xbd3a,	// (0x0000de4d) settings_code_pane_cp_ParamLimits

0xbd3a,	// (0x0000de4d) settings_code_pane_cp

0xe1ee,	// (0x00010301) cell_touch_pane_g1

0xe1ee,	// (0x00010301) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00011811) cell_touch_pane_g

0xbeda,	// (0x0000dfed) cell_touch_pane_cp_ParamLimits

0xbeda,	// (0x0000dfed) cell_touch_pane_cp

0xbef6,	// (0x0000e009) cell_touch_pane_ParamLimits

0xbef6,	// (0x0000e009) cell_touch_pane

0xe1ee,	// (0x00010301) scroll_sc2_down_pane_g1

0xe1ee,	// (0x00010301) scroll_sc2_up_pane_g1

0xe367,	// (0x0001047a) bg_set_opt_pane_cp4_vc

0x37fc,	// (0x0000590f) list_set_graphic_pane_vc_g1_ParamLimits

0x37fc,	// (0x0000590f) list_set_graphic_pane_vc_g1

0x3808,	// (0x0000591b) list_set_graphic_pane_vc_g2_ParamLimits

0x3808,	// (0x0000591b) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00011b01) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00011b01) list_set_graphic_pane_vc_g

0x3814,	// (0x00005927) text_primary_small_cp13_vc_ParamLimits

0x3814,	// (0x00005927) text_primary_small_cp13_vc

0x0245,	// (0x00002358) list_set_graphic_pane_vc_ParamLimits

0x0245,	// (0x00002358) list_set_graphic_pane_vc

0xe367,	// (0x0001047a) input_focus_pane_cp2_vc

0xe1ee,	// (0x00010301) setting_code_pane_vc_g1

0xe4c1,	// (0x000105d4) setting_code_pane_vc_t1

0x382c,	// (0x0000593f) set_text_pane_vc_t1_ParamLimits

0x382c,	// (0x0000593f) set_text_pane_vc_t1

0xe367,	// (0x0001047a) input_focus_pane_cp1_vc

0x384a,	// (0x0000595d) list_set_text_pane_vc

0xe1ee,	// (0x00010301) setting_text_pane_vc_g1

0xe367,	// (0x0001047a) bg_set_opt_pane_cp2_vc

0xe490,	// (0x000105a3) setting_slider_graphic_pane_vc_g1

0x3854,	// (0x00005967) setting_slider_graphic_pane_vc_t1

0x3866,	// (0x00005979) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x00011b06) setting_slider_graphic_pane_vc_t

0x3878,	// (0x0000598b) slider_set_pane_cp_vc

0x3882,	// (0x00005995) slider_set_pane_vc_g1

0x388b,	// (0x0000599e) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00011b0b) slider_set_pane_vc_g

0xec37,	// (0x00010d4a) set_opt_bg_pane_g1_copy1

0xec3f,	// (0x00010d52) set_opt_bg_pane_g2_copy1

0x38b7,	// (0x000059ca) set_opt_bg_pane_g3_copy1

0xec4f,	// (0x00010d62) set_opt_bg_pane_g4_copy1

0xec57,	// (0x00010d6a) set_opt_bg_pane_g5_copy1

0xec5f,	// (0x00010d72) set_opt_bg_pane_g6_copy1

0x38c1,	// (0x000059d4) set_opt_bg_pane_g7_copy1

0x38cb,	// (0x000059de) set_opt_bg_pane_g8_copy1

0x38d5,	// (0x000059e8) set_opt_bg_pane_g9_copy1

0xe367,	// (0x0001047a) bg_set_opt_pane_cp_vc

0x38df,	// (0x000059f2) setting_slider_pane_vc_t1

0x38ee,	// (0x00005a01) setting_slider_pane_vc_t2

0x3900,	// (0x00005a13) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00011b1a) setting_slider_pane_vc_t

0x3912,	// (0x00005a25) slider_set_pane_vc

0x254b,	// (0x0000465e) volume_set_pane_vc_g1

0x2554,	// (0x00004667) volume_set_pane_vc_g2

0x255d,	// (0x00004670) volume_set_pane_vc_g3

0x2566,	// (0x00004679) volume_set_pane_vc_g4

0x256f,	// (0x00004682) volume_set_pane_vc_g5

0x2578,	// (0x0000468b) volume_set_pane_vc_g6

0x2581,	// (0x00004694) volume_set_pane_vc_g7

0x258a,	// (0x0000469d) volume_set_pane_vc_g8

0x2593,	// (0x000046a6) volume_set_pane_vc_g9

0x259c,	// (0x000046af) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00011b21) volume_set_pane_vc_g

0x391a,	// (0x00005a2d) volume_set_pane_vc

0x3924,	// (0x00005a37) button_value_adjust_pane_cp1_vc

0x392e,	// (0x00005a41) list_highlight_pane_cp2_vc

0x3937,	// (0x00005a4a) list_set_pane_vc_ParamLimits

0x3937,	// (0x00005a4a) list_set_pane_vc

0x39a5,	// (0x00005ab8) main_pane_set_vc_t1_ParamLimits

0x39a5,	// (0x00005ab8) main_pane_set_vc_t1

0x39ba,	// (0x00005acd) main_pane_set_vc_t2_ParamLimits

0x39ba,	// (0x00005acd) main_pane_set_vc_t2

0x39cc,	// (0x00005adf) main_pane_set_vc_t3_ParamLimits

0x39cc,	// (0x00005adf) main_pane_set_vc_t3

0x39e0,	// (0x00005af3) main_pane_set_vc_t4_ParamLimits

0x39e0,	// (0x00005af3) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00011b36) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00011b36) main_pane_set_vc_t

0x39f4,	// (0x00005b07) setting_code_pane_vc_ParamLimits

0x39f4,	// (0x00005b07) setting_code_pane_vc

0x3a05,	// (0x00005b18) setting_slider_graphic_pane_vc

0x3a05,	// (0x00005b18) setting_slider_pane_vc

0x3a05,	// (0x00005b18) setting_text_pane_vc

0x3a05,	// (0x00005b18) setting_volume_pane_vc

0x3a0f,	// (0x00005b22) scroll_pane_cp121_vc

0xeaff,	// (0x00010c12) set_content_pane_vc

0x3ce5,	// (0x00005df8) button_value_adjust_pane_g1

0x3cee,	// (0x00005e01) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00011b90) button_value_adjust_pane_g

0x3cf7,	// (0x00005e0a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3cf7,	// (0x00005e0a) form_field_slider_wide_pane_vc_t1

0x3d09,	// (0x00005e1c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d09,	// (0x00005e1c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00011b95) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00011b95) form_field_slider_wide_pane_vc_t

0xe409,	// (0x0001051c) input_focus_pane_cp10_vc_ParamLimits

0xe409,	// (0x0001051c) input_focus_pane_cp10_vc

0x3d35,	// (0x00005e48) slider_cont_pane_cp1_vc_ParamLimits

0x3d35,	// (0x00005e48) slider_cont_pane_cp1_vc

0x3d47,	// (0x00005e5a) slider_form_pane_g1_cp2

0x388b,	// (0x0000599e) slider_form_pane_g2_cp2

0x3d74,	// (0x00005e87) form_field_slider_pane_vc_t3

0x3d82,	// (0x00005e95) form_field_slider_pane_vc_t4

0x3d90,	// (0x00005ea3) slider_form_pane_vc_ParamLimits

0x3d90,	// (0x00005ea3) slider_form_pane_vc

0x3d9d,	// (0x00005eb0) form_field_slider_pane_vc_t1_ParamLimits

0x3d9d,	// (0x00005eb0) form_field_slider_pane_vc_t1

0x3d09,	// (0x00005e1c) form_field_slider_pane_vc_t2_ParamLimits

0x3d09,	// (0x00005e1c) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00011ba7) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00011ba7) form_field_slider_pane_vc_t

0xe409,	// (0x0001051c) input_focus_pane_cp9_vc_ParamLimits

0xe409,	// (0x0001051c) input_focus_pane_cp9_vc

0x3db3,	// (0x00005ec6) slider_cont_pane_vc_ParamLimits

0x3db3,	// (0x00005ec6) slider_cont_pane_vc

0x3dc7,	// (0x00005eda) list_form_graphic_pane_cp_vc_ParamLimits

0x3dc7,	// (0x00005eda) list_form_graphic_pane_cp_vc

0x1965,	// (0x00003a78) form_field_popup_wide_pane_vc_g1

0x3ddc,	// (0x00005eef) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3ddc,	// (0x00005eef) form_field_popup_wide_pane_vc_t1

0xeb7c,	// (0x00010c8f) input_focus_pane_cp8_vc_ParamLimits

0xeb7c,	// (0x00010c8f) input_focus_pane_cp8_vc

0x3e21,	// (0x00005f34) list_form_wide_pane_vc_ParamLimits

0x3e21,	// (0x00005f34) list_form_wide_pane_vc

0x3e2d,	// (0x00005f40) list_form_graphic_pane_vc_g1

0x3e35,	// (0x00005f48) list_form_graphic_pane_vc_t1_ParamLimits

0x3e35,	// (0x00005f48) list_form_graphic_pane_vc_t1

0xe421,	// (0x00010534) list_highlight_pane_cp5_vc_ParamLimits

0xe421,	// (0x00010534) list_highlight_pane_cp5_vc

0x3e51,	// (0x00005f64) list_form_graphic_pane_vc_ParamLimits

0x3e51,	// (0x00005f64) list_form_graphic_pane_vc

0x1965,	// (0x00003a78) form_field_popup_pane_vc_g1

0x3e67,	// (0x00005f7a) form_field_popup_pane_vc_t1_ParamLimits

0x3e67,	// (0x00005f7a) form_field_popup_pane_vc_t1

0xeb7c,	// (0x00010c8f) input_focus_pane_cp7_vc_ParamLimits

0xeb7c,	// (0x00010c8f) input_focus_pane_cp7_vc

0x3e7e,	// (0x00005f91) list_form_pane_vc_ParamLimits

0x3e7e,	// (0x00005f91) list_form_pane_vc

0x3e8a,	// (0x00005f9d) data_form_pane_vc_t1_ParamLimits

0x3e8a,	// (0x00005f9d) data_form_pane_vc_t1

0xec37,	// (0x00010d4a) input_focus_pane_vc_g1

0xec3f,	// (0x00010d52) input_focus_pane_vc_g2

0xec47,	// (0x00010d5a) input_focus_pane_vc_g3

0xec4f,	// (0x00010d62) input_focus_pane_vc_g4

0xec57,	// (0x00010d6a) input_focus_pane_vc_g5

0xec5f,	// (0x00010d72) input_focus_pane_vc_g6

0xec67,	// (0x00010d7a) input_focus_pane_vc_g7

0xec6f,	// (0x00010d82) input_focus_pane_vc_g8

0xec77,	// (0x00010d8a) input_focus_pane_vc_g9

0xe1ee,	// (0x00010301) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001179a) input_focus_pane_vc_g

0x1959,	// (0x00003a6c) data_form_pane_vc_ParamLimits

0x1959,	// (0x00003a6c) data_form_pane_vc

0x1965,	// (0x00003a78) form_field_data_pane_vc_g1

0x3ea7,	// (0x00005fba) form_field_data_pane_vc_t1_ParamLimits

0x3ea7,	// (0x00005fba) form_field_data_pane_vc_t1

0xeb7c,	// (0x00010c8f) input_focus_pane_vc_ParamLimits

0xeb7c,	// (0x00010c8f) input_focus_pane_vc

0x3ec1,	// (0x00005fd4) button_value_adjust_pane_cp3_vc

0x3ec9,	// (0x00005fdc) button_value_adjust_pane_cp5_vc

0x3ed1,	// (0x00005fe4) form_field_data_pane_vc_ParamLimits

0x3ed1,	// (0x00005fe4) form_field_data_pane_vc

0x3eec,	// (0x00005fff) form_field_data_pane_vc_cp2

0x3ef4,	// (0x00006007) form_field_data_wide_pane_vc_ParamLimits

0x3ef4,	// (0x00006007) form_field_data_wide_pane_vc

0x3f0e,	// (0x00006021) form_field_data_wide_pane_vc_cp2

0x3f16,	// (0x00006029) form_field_popup_pane_vc_ParamLimits

0x3f16,	// (0x00006029) form_field_popup_pane_vc

0x3f31,	// (0x00006044) form_field_popup_wide_pane_vc_ParamLimits

0x3f31,	// (0x00006044) form_field_popup_wide_pane_vc

0x3f4b,	// (0x0000605e) form_field_slider_pane_vc_ParamLimits

0x3f4b,	// (0x0000605e) form_field_slider_pane_vc

0x3f5e,	// (0x00006071) form_field_slider_wide_pane_vc_ParamLimits

0x3f5e,	// (0x00006071) form_field_slider_wide_pane_vc

0xbf14,	// (0x0000e027) grid_touch_1_pane_ParamLimits

0xbf14,	// (0x0000e027) grid_touch_1_pane

0xbf28,	// (0x0000e03b) grid_touch_2_pane_ParamLimits

0xbf28,	// (0x0000e03b) grid_touch_2_pane

0x402e,	// (0x00006141) touch_pane_g1_ParamLimits

0x402e,	// (0x00006141) touch_pane_g1

0x3f97,	// (0x000060aa) cell_app_pane_cp_wide_ParamLimits

0x3f97,	// (0x000060aa) cell_app_pane_cp_wide

0x3fa8,	// (0x000060bb) grid_popup_fast_wide_pane_ParamLimits

0x3fa8,	// (0x000060bb) grid_popup_fast_wide_pane

0x3fbc,	// (0x000060cf) scroll_pane_cp19_ParamLimits

0x3fbc,	// (0x000060cf) scroll_pane_cp19

0xe367,	// (0x0001047a) bg_popup_window_pane_cp20

0x3fd0,	// (0x000060e3) listscroll_popup_fast_wide_pane

0xee73,	// (0x00010f86) grid_indicator_nsta_pane

0x3fd8,	// (0x000060eb) clock_nsta_pane_g1

0x3fe1,	// (0x000060f4) clock_nsta_pane_t1

0xbf54,	// (0x0000e067) cell_indicator_nsta_pane_ParamLimits

0xbf54,	// (0x0000e067) cell_indicator_nsta_pane

0x402e,	// (0x00006141) cell_indicator_nsta_pane_g1

0xbf6b,	// (0x0000e07e) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00011bb8) cell_indicator_nsta_pane_g

0x4049,	// (0x0000615c) clock_nsta_pane_cp

0x4052,	// (0x00006165) indicator_nsta_pane_cp

0x405a,	// (0x0000616d) nsta_clock_indic_pane_g1

0xe500,	// (0x00010613) grid_indicator_pane

0xf244,	// (0x00011357) scroll_pane_cp29

0x00dc,	// (0x000021ef) indicator_nsta_pane_cp2_ParamLimits

0x00dc,	// (0x000021ef) indicator_nsta_pane_cp2

0xe421,	// (0x00010534) main_apps_wheel_pane

0x1b75,	// (0x00003c88) form_midp_field_text_pane_ParamLimits

0x1cc4,	// (0x00003dd7) scroll_bar_cp050_ParamLimits

0x40aa,	// (0x000061bd) cell_indicator_pane_ParamLimits

0x40aa,	// (0x000061bd) cell_indicator_pane

0x40c2,	// (0x000061d5) cell_indicator_pane_g1

0xbf78,	// (0x0000e08b) grid_wheel_folder_pane_ParamLimits

0xbf78,	// (0x0000e08b) grid_wheel_folder_pane

0xbf86,	// (0x0000e099) list_wheel_apps_pane_ParamLimits

0xbf86,	// (0x0000e099) list_wheel_apps_pane

0xbf94,	// (0x0000e0a7) main_apps_wheel_pane_g1_ParamLimits

0xbf94,	// (0x0000e0a7) main_apps_wheel_pane_g1

0xbfa4,	// (0x0000e0b7) main_apps_wheel_pane_g2_ParamLimits

0xbfa4,	// (0x0000e0b7) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00011bd4) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00011bd4) main_apps_wheel_pane_g

0xbfb4,	// (0x0000e0c7) main_apps_wheel_pane_t1_ParamLimits

0xbfb4,	// (0x0000e0c7) main_apps_wheel_pane_t1

0xbfcc,	// (0x0000e0df) list_wheel_apps_pane_g1

0xbfd4,	// (0x0000e0e7) list_wheel_apps_pane_g2

0xbfdc,	// (0x0000e0ef) list_wheel_apps_pane_g3

0xbfe4,	// (0x0000e0f7) list_wheel_apps_pane_g4

0xbfec,	// (0x0000e0ff) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00011bd9) list_wheel_apps_pane_g

0x03e5,	// (0x000024f8) navi_icon_text_pane

0xb41c,	// (0x0000d52f) aid_fill_nsta

0xc009,	// (0x0000e11c) navi_icon_text_pane_g1

0xc015,	// (0x0000e128) navi_icon_text_pane_t1

0x0270,	// (0x00002383) list_set_graphic_pane_t1_ParamLimits

0x0270,	// (0x00002383) list_set_graphic_pane_t1

0x2429,	// (0x0000453c) popup_midp_note_alarm_window_t6_ParamLimits

0x2429,	// (0x0000453c) popup_midp_note_alarm_window_t6

0x243b,	// (0x0000454e) popup_midp_note_alarm_window_t7_ParamLimits

0x243b,	// (0x0000454e) popup_midp_note_alarm_window_t7

0x244d,	// (0x00004560) popup_midp_note_alarm_window_t8_ParamLimits

0x244d,	// (0x00004560) popup_midp_note_alarm_window_t8

0x245f,	// (0x00004572) popup_midp_note_alarm_window_t9_ParamLimits

0x245f,	// (0x00004572) popup_midp_note_alarm_window_t9

0x2471,	// (0x00004584) popup_midp_note_alarm_window_t10_ParamLimits

0x2471,	// (0x00004584) popup_midp_note_alarm_window_t10

0x2483,	// (0x00004596) popup_midp_note_alarm_window_t11_ParamLimits

0x2483,	// (0x00004596) popup_midp_note_alarm_window_t11

0x2495,	// (0x000045a8) scroll_pane_cp17_ParamLimits

0x2495,	// (0x000045a8) scroll_pane_cp17

0x254b,	// (0x0000465e) volume_small_pane_cp_g1

0x41b5,	// (0x000062c8) volume_small_pane_cp_g2

0x41be,	// (0x000062d1) volume_small_pane_cp_g3

0x41c7,	// (0x000062da) volume_small_pane_cp_g4

0x41d0,	// (0x000062e3) volume_small_pane_cp_g5

0x41d9,	// (0x000062ec) volume_small_pane_cp_g6

0x41e2,	// (0x000062f5) volume_small_pane_cp_g7

0x41eb,	// (0x000062fe) volume_small_pane_cp_g8

0x41f4,	// (0x00006307) volume_small_pane_cp_g9

0x41fd,	// (0x00006310) volume_small_pane_cp_g10

0x063b,	// (0x0000274e) midp_ticker_pane_g1_ParamLimits

0x0647,	// (0x0000275a) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00011866) midp_ticker_pane_g_ParamLimits

0xaa80,	// (0x0000cb93) midp_ticker_pane_t1_ParamLimits

0xb440,	// (0x0000d553) aid_fill_nsta_2

0x1cb0,	// (0x00003dc3) list_form2_midp_pane

0x30be,	// (0x000051d1) midp_editing_number_pane_ParamLimits

0x30cd,	// (0x000051e0) midp_ticker_pane_ParamLimits

0x4206,	// (0x00006319) form2_midp_field_pane

0x422a,	// (0x0000633d) scroll_pane_cp51

0x424a,	// (0x0000635d) form2_midp_button_pane_ParamLimits

0x424a,	// (0x0000635d) form2_midp_button_pane

0x425c,	// (0x0000636f) form2_midp_content_pane_ParamLimits

0x425c,	// (0x0000636f) form2_midp_content_pane

0x4276,	// (0x00006389) form2_midp_field_choice_group_pane

0x427e,	// (0x00006391) form2_midp_field_pane_g1

0x4286,	// (0x00006399) form2_midp_field_pane_g2

0x428e,	// (0x000063a1) form2_midp_field_pane_g3

0x4296,	// (0x000063a9) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00011bfe) form2_midp_field_pane_g

0x429e,	// (0x000063b1) form2_midp_gauge_slider_pane

0x42a6,	// (0x000063b9) form2_midp_gauge_wait_pane

0x42ae,	// (0x000063c1) form2_midp_image_pane_ParamLimits

0x42ae,	// (0x000063c1) form2_midp_image_pane

0x42c9,	// (0x000063dc) form2_midp_label_pane_ParamLimits

0x42c9,	// (0x000063dc) form2_midp_label_pane

0xc043,	// (0x0000e156) form2_midp_label_pane_cp_ParamLimits

0xc043,	// (0x0000e156) form2_midp_label_pane_cp

0x4309,	// (0x0000641c) form2_midp_string_pane_ParamLimits

0x4309,	// (0x0000641c) form2_midp_string_pane

0x431b,	// (0x0000642e) form2_midp_text_pane_ParamLimits

0x431b,	// (0x0000642e) form2_midp_text_pane

0x433c,	// (0x0000644f) form2_midp_time_pane

0x434c,	// (0x0000645f) input_focus_pane_cp51_ParamLimits

0x434c,	// (0x0000645f) input_focus_pane_cp51

0x4364,	// (0x00006477) form2_midp_label_pane_t1_ParamLimits

0x4364,	// (0x00006477) form2_midp_label_pane_t1

0x43aa,	// (0x000064bd) form2_mdip_text_pane_t1_ParamLimits

0x43aa,	// (0x000064bd) form2_mdip_text_pane_t1

0x43c9,	// (0x000064dc) form2_midp_time_pane_t1

0x43e4,	// (0x000064f7) form2_midp_gauge_slider_pane_t1

0xc064,	// (0x0000e177) form2_midp_gauge_slider_pane_t2

0xc076,	// (0x0000e189) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00011c07) form2_midp_gauge_slider_pane_t

0x441a,	// (0x0000652d) form2_midp_slider_pane

0x4426,	// (0x00006539) form2_midp_gauge_wait_pane_t1

0x4434,	// (0x00006547) form2_midp_wait_pane_ParamLimits

0x4434,	// (0x00006547) form2_midp_wait_pane

0x19ac,	// (0x00003abf) list_single_2graphic_pane_cp4_ParamLimits

0x19ac,	// (0x00003abf) list_single_2graphic_pane_cp4

0xc088,	// (0x0000e19b) list_single_midp_graphic_pane_cp_ParamLimits

0xc088,	// (0x0000e19b) list_single_midp_graphic_pane_cp

0xe367,	// (0x0001047a) list_highlight_pane_cp20

0x4478,	// (0x0000658b) list_single_2graphic_pane_g1_cp4

0x3681,	// (0x00005794) list_single_2graphic_pane_g2_cp4

0x4480,	// (0x00006593) list_single_2graphic_pane_t1_cp4

0xe421,	// (0x00010534) list_highlight_pane_cp21

0x448f,	// (0x000065a2) list_single_midp_graphic_pane_g4_cp

0x449e,	// (0x000065b1) list_single_midp_graphic_pane_t1_cp

0xc0a9,	// (0x0000e1bc) form2_mdip_string_pane_t1_ParamLimits

0xc0a9,	// (0x0000e1bc) form2_mdip_string_pane_t1

0xe367,	// (0x0001047a) bg_wml_button_pane_cp2

0xe1ee,	// (0x00010301) form2_midp_image_pane_g1

0xeaa9,	// (0x00010bbc) list_double_large_graphic_pane_g5_ParamLimits

0xeaa9,	// (0x00010bbc) list_double_large_graphic_pane_g5

0xa9dc,	// (0x0000caef) midp_form_pane_ParamLimits

0xe421,	// (0x00010534) main_apps_wheel_pane_ParamLimits

0xb136,	// (0x0000d249) popup_preview_window_ParamLimits

0xb136,	// (0x0000d249) popup_preview_window

0x10c1,	// (0x000031d4) popup_touch_info_window_ParamLimits

0x10c1,	// (0x000031d4) popup_touch_info_window

0x10e3,	// (0x000031f6) popup_touch_menu_window_ParamLimits

0x10e3,	// (0x000031f6) popup_touch_menu_window

0xe1e4,	// (0x000102f7) bg_popup_sub_pane_cp6

0x454f,	// (0x00006662) list_touch_menu_pane

0x4557,	// (0x0000666a) list_single_touch_menu_pane_ParamLimits

0x4557,	// (0x0000666a) list_single_touch_menu_pane

0x456f,	// (0x00006682) list_single_touch_menu_pane_t1

0xe421,	// (0x00010534) bg_popup_sub_pane_cp7_ParamLimits

0xe421,	// (0x00010534) bg_popup_sub_pane_cp7

0x457d,	// (0x00006690) heading_sub_pane

0x4585,	// (0x00006698) list_touch_info_pane_ParamLimits

0x4585,	// (0x00006698) list_touch_info_pane

0x4594,	// (0x000066a7) list_single_touch_info_pane_ParamLimits

0x4594,	// (0x000066a7) list_single_touch_info_pane

0x45a6,	// (0x000066b9) list_single_touch_info_pane_t1

0x45b4,	// (0x000066c7) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00011c15) list_single_touch_info_pane_t

0x055d,	// (0x00002670) bg_popup_heading_pane_cp

0x45c2,	// (0x000066d5) heading_sub_pane_t1

0x1865,	// (0x00003978) bg_popup_preview_window_pane_cp_ParamLimits

0x1865,	// (0x00003978) bg_popup_preview_window_pane_cp

0x457d,	// (0x00006690) heading_preview_pane

0x4585,	// (0x00006698) list_preview_pane_ParamLimits

0x4585,	// (0x00006698) list_preview_pane

0x45d0,	// (0x000066e3) popup_preview_window_g1

0x4594,	// (0x000066a7) list_single_preview_pane_ParamLimits

0x4594,	// (0x000066a7) list_single_preview_pane

0x45d8,	// (0x000066eb) list_single_preview_pane_g1

0x45e0,	// (0x000066f3) list_single_preview_pane_t1

0x45a6,	// (0x000066b9) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x00011c1a) list_single_preview_pane_t

0x45ee,	// (0x00006701) bg_popup_heading_pane_cp2_ParamLimits

0x45ee,	// (0x00006701) bg_popup_heading_pane_cp2

0x4604,	// (0x00006717) heading_preview_pane_g1

0x460c,	// (0x0000671f) heading_preview_pane_t1_ParamLimits

0x460c,	// (0x0000671f) heading_preview_pane_t1

0xe517,	// (0x0001062a) soft_indicator_pane_t1_ParamLimits

0xea75,	// (0x00010b88) scroll_pane_ParamLimits

0xf140,	// (0x00011253) scroll_sc2_left_pane

0xf149,	// (0x0001125c) scroll_sc2_right_pane

0xf168,	// (0x0001127b) scroll_bg_pane_g1_ParamLimits

0xf17d,	// (0x00011290) scroll_bg_pane_g2_ParamLimits

0xf195,	// (0x000112a8) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x000117f1) scroll_bg_pane_g_ParamLimits

0xf168,	// (0x0001127b) scroll_handle_pane_g1_ParamLimits

0xf1b7,	// (0x000112ca) scroll_handle_pane_g2_ParamLimits

0xf195,	// (0x000112a8) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x000117f8) scroll_handle_pane_g_ParamLimits

0x0b21,	// (0x00002c34) popup_choice_list_window_ParamLimits

0x0b21,	// (0x00002c34) popup_choice_list_window

0x15ce,	// (0x000036e1) choice_list_pane

0x1696,	// (0x000037a9) cell_toolbar_pane_t1

0x16be,	// (0x000037d1) toolbar_button_pane_ParamLimits

0x2acb,	// (0x00004bde) ai_gene_pane_1_t2_ParamLimits

0x2acb,	// (0x00004bde) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x00011a14) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x00011a14) ai_gene_pane_1_t

0x4629,	// (0x0000673c) scroll_sc2_left_pane_g1

0x4629,	// (0x0000673c) scroll_sc2_right_pane_g1

0x0abb,	// (0x00002bce) bg_popup_sub_pane_cp10

0x4633,	// (0x00006746) list_choice_list_pane

0x317d,	// (0x00005290) list_single_choice_list_pane_ParamLimits

0x317d,	// (0x00005290) list_single_choice_list_pane

0x464c,	// (0x0000675f) list_single_choice_list_pane_g1

0xed68,	// (0x00010e7b) list_single_choice_list_pane_t1_ParamLimits

0xed68,	// (0x00010e7b) list_single_choice_list_pane_t1

0x4654,	// (0x00006767) choice_list_pane_g1

0x465c,	// (0x0000676f) choice_list_pane_t1

0xe1e4,	// (0x000102f7) input_focus_pane_cp11

0xef44,	// (0x00011057) title_pane_stacon_g2_ParamLimits

0xef44,	// (0x00011057) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000117d7) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000117d7) title_pane_stacon_g

0x055d,	// (0x00002670) cursor_press_pane

0xadb3,	// (0x0000cec6) popup_fep_hwr_window_ParamLimits

0xadb3,	// (0x0000cec6) popup_fep_hwr_window

0x0c65,	// (0x00002d78) popup_fep_vkb_window_ParamLimits

0x0c65,	// (0x00002d78) popup_fep_vkb_window

0x466a,	// (0x0000677d) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x00011c43) fep_vkb_side_pane_g_ParamLimits

0x46ab,	// (0x000067be) fep_hwr_candidate_pane_ParamLimits

0x46ab,	// (0x000067be) fep_hwr_candidate_pane

0x46d5,	// (0x000067e8) fep_hwr_side_pane_ParamLimits

0x46d5,	// (0x000067e8) fep_hwr_side_pane

0x46f7,	// (0x0000680a) fep_hwr_top_pane_ParamLimits

0x46f7,	// (0x0000680a) fep_hwr_top_pane

0x470f,	// (0x00006822) fep_hwr_write_pane_ParamLimits

0x470f,	// (0x00006822) fep_hwr_write_pane

0xfb30,	// (0x00011c43) fep_vkb_side_pane_g

0x4749,	// (0x0000685c) fep_hwr_top_pane_g1

0x475b,	// (0x0000686e) fep_hwr_top_pane_g2

0x476d,	// (0x00006880) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x00011c1f) fep_hwr_top_pane_g

0x4782,	// (0x00006895) fep_hwr_top_text_pane

0xf2b1,	// (0x000113c4) fep_hwr_top_text_pane_g1

0x485e,	// (0x00006971) fep_hwr_top_text_pane_t1

0x48be,	// (0x000069d1) fep_hwr_candidate_pane_g1

0x4b2f,	// (0x00006c42) fep_vkb_keypad_pane_g3_ParamLimits

0x4b2f,	// (0x00006c42) fep_vkb_keypad_pane_g3

0x4b5b,	// (0x00006c6e) fep_vkb_keypad_pane_g4_ParamLimits

0x4b5b,	// (0x00006c6e) fep_vkb_keypad_pane_g4

0x4bd2,	// (0x00006ce5) fep_vkb_bottom_pane_g2_ParamLimits

0x4bd2,	// (0x00006ce5) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x00011c4a) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x00011c4a) fep_vkb_bottom_pane_g

0x4629,	// (0x0000673c) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x00011c54) cell_vkb_side_pane_g

0x4c5d,	// (0x00006d70) cell_vkb_side_pane_t1

0x4c6b,	// (0x00006d7e) cell_vkb_side_pane_t1_copy1

0x4629,	// (0x0000673c) bg_fep_vkb_candidate_pane_g2

0x4daf,	// (0x00006ec2) cell_vkb_candidate_pane_ParamLimits

0x48f2,	// (0x00006a05) aid_size_cell_vkb_ParamLimits

0x48f2,	// (0x00006a05) aid_size_cell_vkb

0x4daf,	// (0x00006ec2) cell_vkb_candidate_pane

0x4de9,	// (0x00006efc) bg_popup_fep_shadow_pane_g1

0xc192,	// (0x0000e2a5) fep_vkb_bottom_pane_ParamLimits

0xc192,	// (0x0000e2a5) fep_vkb_bottom_pane

0x49c1,	// (0x00006ad4) fep_vkb_candidate_pane_ParamLimits

0x49c1,	// (0x00006ad4) fep_vkb_candidate_pane

0xc1be,	// (0x0000e2d1) fep_vkb_keypad_pane_ParamLimits

0xc1be,	// (0x0000e2d1) fep_vkb_keypad_pane

0xc1e5,	// (0x0000e2f8) fep_vkb_side_pane_ParamLimits

0xc1e5,	// (0x0000e2f8) fep_vkb_side_pane

0xc221,	// (0x0000e334) fep_vkb_top_pane_ParamLimits

0xc221,	// (0x0000e334) fep_vkb_top_pane

0x4a88,	// (0x00006b9b) fep_vkb_top_pane_g1_ParamLimits

0x4a88,	// (0x00006b9b) fep_vkb_top_pane_g1

0x4a97,	// (0x00006baa) fep_vkb_top_pane_g2_ParamLimits

0x4a97,	// (0x00006baa) fep_vkb_top_pane_g2

0x4aa6,	// (0x00006bb9) fep_vkb_top_pane_g3_ParamLimits

0x4aa6,	// (0x00006bb9) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x00011c3a) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x00011c3a) fep_vkb_top_pane_g

0x4ac4,	// (0x00006bd7) fep_vkb_top_text_pane_ParamLimits

0x4ac4,	// (0x00006bd7) fep_vkb_top_text_pane

0xc25d,	// (0x0000e370) fep_vkb_side_pane_g1_ParamLimits

0xc25d,	// (0x0000e370) fep_vkb_side_pane_g1

0x4b1e,	// (0x00006c31) grid_vkb_side_pane_ParamLimits

0x4b1e,	// (0x00006c31) grid_vkb_side_pane

0x4df1,	// (0x00006f04) bg_popup_fep_shadow_pane_g2

0x4dfa,	// (0x00006f0d) bg_popup_fep_shadow_pane_g3

0x4e02,	// (0x00006f15) bg_popup_fep_shadow_pane_g4

0x4e0b,	// (0x00006f1e) bg_popup_fep_shadow_pane_g5

0x4e15,	// (0x00006f28) bg_popup_fep_shadow_pane_g6

0x4e1d,	// (0x00006f30) bg_popup_fep_shadow_pane_g7

0xec57,	// (0x00010d6a) bg_popup_fep_shadow_pane_g8

0x4b7d,	// (0x00006c90) grid_vkb_keypad_number_pane_ParamLimits

0x4b7d,	// (0x00006c90) grid_vkb_keypad_number_pane

0x4b91,	// (0x00006ca4) grid_vkb_keypad_pane_ParamLimits

0x4b91,	// (0x00006ca4) grid_vkb_keypad_pane

0x4bb7,	// (0x00006cca) fep_vkb_bottom_pane_g1_ParamLimits

0x4bb7,	// (0x00006cca) fep_vkb_bottom_pane_g1

0x4be0,	// (0x00006cf3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4be0,	// (0x00006cf3) grid_vkb_keypad_bottom_left_pane

0x4bf5,	// (0x00006d08) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4bf5,	// (0x00006d08) grid_vkb_keypad_bottom_right_pane

0x4c0a,	// (0x00006d1d) fep_vkb_top_text_pane_g1

0xc2a4,	// (0x0000e3b7) fep_vkb_top_text_pane_t1

0xc2b6,	// (0x0000e3c9) cell_vkb_side_pane_ParamLimits

0xc2b6,	// (0x0000e3c9) cell_vkb_side_pane

0x4629,	// (0x0000673c) cell_vkb_side_pane_g1

0x4c79,	// (0x00006d8c) cell_vkb_keypad_pane_ParamLimits

0x4c79,	// (0x00006d8c) cell_vkb_keypad_pane

0x4d06,	// (0x00006e19) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x00011c67) bg_popup_fep_shadow_pane_g

0x4629,	// (0x0000673c) cell_hwr_side_pane_g1

0x4629,	// (0x0000673c) cell_hwr_side_pane_g2

0x4d10,	// (0x00006e23) cell_vkb_keypad_pane_t1

0xc2cc,	// (0x0000e3df) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc2cc,	// (0x0000e3df) cell_vkb_keypad_bottom_left_pane

0xc2e1,	// (0x0000e3f4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc2e1,	// (0x0000e3f4) cell_vkb_keypad_bottom_right_pane

0x4629,	// (0x0000673c) cell_vkb_keypad_bottom_left_pane_g1

0x4629,	// (0x0000673c) cell_vkb_keypad_bottom_right_pane_g1

0x4d74,	// (0x00006e87) cell_vkb_keypad_number_pane_ParamLimits

0x4d74,	// (0x00006e87) cell_vkb_keypad_number_pane

0x4d93,	// (0x00006ea6) cell_vkb_keypad_number_pane_g1

0x4d9d,	// (0x00006eb0) cell_vkb_keypad_number_pane_g2

0x4da6,	// (0x00006eb9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x00011c59) cell_vkb_keypad_number_pane_g

0x4d10,	// (0x00006e23) cell_vkb_keypad_number_pane_t1

0x4dd0,	// (0x00006ee3) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x00011c54) cell_hwr_side_pane_g

0x4e2f,	// (0x00006f42) cell_hwr_side_pane_t1

0x4e3d,	// (0x00006f50) cell_hwr_side_pane_t1_copy1

0x4ab6,	// (0x00006bc9) cell_hwr_candidate_pane_g1

0x4e8d,	// (0x00006fa0) cell_hwr_candidate_pane_t1

0x4629,	// (0x0000673c) cell_vkb_candidate_pane_g2

0x4ee1,	// (0x00006ff4) cell_vkb_candidate_pane_t1

0x4672,	// (0x00006785) bg_popup_fep_shadow_pane_ParamLimits

0x4672,	// (0x00006785) bg_popup_fep_shadow_pane

0x4729,	// (0x0000683c) bg_fep_hwr_top_pane_g4

0x4797,	// (0x000068aa) bg_hwr_side_pane_g1_ParamLimits

0x4797,	// (0x000068aa) bg_hwr_side_pane_g1

0xc14b,	// (0x0000e25e) cell_hwr_side_pane_ParamLimits

0xc14b,	// (0x0000e25e) cell_hwr_side_pane

0x4809,	// (0x0000691c) fep_hwr_write_pane_g1_ParamLimits

0x4809,	// (0x0000691c) fep_hwr_write_pane_g1

0x4816,	// (0x00006929) fep_hwr_write_pane_g2_ParamLimits

0x4816,	// (0x00006929) fep_hwr_write_pane_g2

0x4823,	// (0x00006936) fep_hwr_write_pane_g3_ParamLimits

0x4823,	// (0x00006936) fep_hwr_write_pane_g3

0xc16b,	// (0x0000e27e) fep_hwr_write_pane_g4_ParamLimits

0xc16b,	// (0x0000e27e) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x00011c26) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x00011c26) fep_hwr_write_pane_g

0x4729,	// (0x0000683c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4729,	// (0x0000683c) bg_fep_hwr_candidate_pane_g2

0x486c,	// (0x0000697f) cell_hwr_candidate_pane_ParamLimits

0x486c,	// (0x0000697f) cell_hwr_candidate_pane

0x48be,	// (0x000069d1) fep_hwr_candidate_pane_g1_ParamLimits

0x4920,	// (0x00006a33) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4920,	// (0x00006a33) bg_popup_fep_shadow_pane_cp2

0x4ab6,	// (0x00006bc9) fep_vkb_top_pane_g4_ParamLimits

0x4ab6,	// (0x00006bc9) fep_vkb_top_pane_g4

0x4afc,	// (0x00006c0f) fep_vkb_side_pane_g2_ParamLimits

0x4afc,	// (0x00006c0f) fep_vkb_side_pane_g2

0xa467,	// (0x0000c57a) list_setting_pane_t4_ParamLimits

0xa467,	// (0x0000c57a) list_setting_pane_t4

0xa4e3,	// (0x0000c5f6) list_setting_number_pane_t5_ParamLimits

0xa4e3,	// (0x0000c5f6) list_setting_number_pane_t5

0xf307,	// (0x0001141a) list_double_heading_pane_cp2_ParamLimits

0xf307,	// (0x0001141a) list_double_heading_pane_cp2

0x4eef,	// (0x00007002) list_double_heading_pane_g1_cp2_ParamLimits

0x4eef,	// (0x00007002) list_double_heading_pane_g1_cp2

0x4efb,	// (0x0000700e) list_double_heading_pane_g2_cp2_ParamLimits

0x4efb,	// (0x0000700e) list_double_heading_pane_g2_cp2

0x4f0f,	// (0x00007022) list_double_heading_pane_t1_cp2_ParamLimits

0x4f0f,	// (0x00007022) list_double_heading_pane_t1_cp2

0x4f25,	// (0x00007038) list_double_heading_pane_t2_cp2_ParamLimits

0x4f25,	// (0x00007038) list_double_heading_pane_t2_cp2

0xe1dc,	// (0x000102ef) aid_value_unit2

0xe3bb,	// (0x000104ce) popup_preview_fixed_window

0xe5f7,	// (0x0001070a) bg_popup_preview_window_pane_cp02

0x4f37,	// (0x0000704a) list_preview_fixed_pane

0x4f7d,	// (0x00007090) list_empty_pane_fp_ParamLimits

0x4f7d,	// (0x00007090) list_empty_pane_fp

0x4f7d,	// (0x00007090) list_single_cale_day_pane_fp_ParamLimits

0x4f7d,	// (0x00007090) list_single_cale_day_pane_fp

0x4f7d,	// (0x00007090) list_single_graphic_heading_pane_fp_ParamLimits

0x4f7d,	// (0x00007090) list_single_graphic_heading_pane_fp

0x4f7d,	// (0x00007090) list_single_graphic_pane_fp_ParamLimits

0x4f7d,	// (0x00007090) list_single_graphic_pane_fp

0x4f7d,	// (0x00007090) list_single_heading_pane_fp_ParamLimits

0x4f7d,	// (0x00007090) list_single_heading_pane_fp

0x4f7d,	// (0x00007090) list_single_pane_fp_ParamLimits

0x4f7d,	// (0x00007090) list_single_pane_fp

0x4f96,	// (0x000070a9) list_single_pane_fp_g1_ParamLimits

0x4f96,	// (0x000070a9) list_single_pane_fp_g1

0x4eef,	// (0x00007002) list_single_pane_fp_g2_ParamLimits

0x4eef,	// (0x00007002) list_single_pane_fp_g2

0x4efb,	// (0x0000700e) list_single_pane_fp_g3_ParamLimits

0x4efb,	// (0x0000700e) list_single_pane_fp_g3

0x4fa2,	// (0x000070b5) list_single_pane_fp_g4_ParamLimits

0x4fa2,	// (0x000070b5) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x00011c88) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x00011c88) list_single_pane_fp_g

0x4fae,	// (0x000070c1) list_single_pane_fp_t1_ParamLimits

0x4fae,	// (0x000070c1) list_single_pane_fp_t1

0x4fc5,	// (0x000070d8) list_single_graphic_pane_fp_g1_ParamLimits

0x4fc5,	// (0x000070d8) list_single_graphic_pane_fp_g1

0x4f96,	// (0x000070a9) list_single_graphic_pane_fp_g2_ParamLimits

0x4f96,	// (0x000070a9) list_single_graphic_pane_fp_g2

0x4eef,	// (0x00007002) list_single_graphic_pane_fp_g3_ParamLimits

0x4eef,	// (0x00007002) list_single_graphic_pane_fp_g3

0x4efb,	// (0x0000700e) list_single_graphic_pane_fp_g4_ParamLimits

0x4efb,	// (0x0000700e) list_single_graphic_pane_fp_g4

0x4fa2,	// (0x000070b5) list_single_graphic_pane_fp_g5_ParamLimits

0x4fa2,	// (0x000070b5) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x00011c91) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x00011c91) list_single_graphic_pane_fp_g

0x4fd1,	// (0x000070e4) list_single_graphic_pane_fp_t1_ParamLimits

0x4fd1,	// (0x000070e4) list_single_graphic_pane_fp_t1

0x4fc5,	// (0x000070d8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4fc5,	// (0x000070d8) list_single_graphic_heading_pane_fp_g1

0x4f96,	// (0x000070a9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4f96,	// (0x000070a9) list_single_graphic_heading_pane_fp_g2

0x4eef,	// (0x00007002) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4eef,	// (0x00007002) list_single_graphic_heading_pane_fp_g3

0x4efb,	// (0x0000700e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4efb,	// (0x0000700e) list_single_graphic_heading_pane_fp_g4

0x4fa2,	// (0x000070b5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4fa2,	// (0x000070b5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00011c91) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00011c91) list_single_graphic_heading_pane_fp_g

0x4fe7,	// (0x000070fa) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4fe7,	// (0x000070fa) list_single_graphic_heading_pane_fp_t1

0x4ffd,	// (0x00007110) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4ffd,	// (0x00007110) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x00011c9c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x00011c9c) list_single_graphic_heading_pane_fp_t

0x500f,	// (0x00007122) list_single_cale_day_pane_fp_g1_ParamLimits

0x500f,	// (0x00007122) list_single_cale_day_pane_fp_g1

0x5047,	// (0x0000715a) list_single_cale_day_pane_fp_g2_ParamLimits

0x5047,	// (0x0000715a) list_single_cale_day_pane_fp_g2

0x5053,	// (0x00007166) list_single_cale_day_pane_fp_g3_ParamLimits

0x5053,	// (0x00007166) list_single_cale_day_pane_fp_g3

0x507b,	// (0x0000718e) list_single_cale_day_pane_fp_g4_ParamLimits

0x507b,	// (0x0000718e) list_single_cale_day_pane_fp_g4

0x509f,	// (0x000071b2) list_single_cale_day_pane_fp_g5_ParamLimits

0x509f,	// (0x000071b2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x00011ca1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x00011ca1) list_single_cale_day_pane_fp_g

0x50c3,	// (0x000071d6) list_single_cale_day_pane_fp_t1_ParamLimits

0x50c3,	// (0x000071d6) list_single_cale_day_pane_fp_t1

0x50e9,	// (0x000071fc) list_single_cale_day_pane_fp_t2_ParamLimits

0x50e9,	// (0x000071fc) list_single_cale_day_pane_fp_t2

0x5102,	// (0x00007215) list_single_cale_day_pane_fp_t3_ParamLimits

0x5102,	// (0x00007215) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00011cac) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00011cac) list_single_cale_day_pane_fp_t

0x4f96,	// (0x000070a9) list_empty_pane_fp_g1_ParamLimits

0x4f96,	// (0x000070a9) list_empty_pane_fp_g1

0x511b,	// (0x0000722e) list_empty_pane_fp_t1

0x5129,	// (0x0000723c) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x00011cb3) list_empty_pane_fp_t

0x4f96,	// (0x000070a9) list_single_heading_pane_fp_g1_ParamLimits

0x4f96,	// (0x000070a9) list_single_heading_pane_fp_g1

0x4eef,	// (0x00007002) list_single_heading_pane_fp_g2_ParamLimits

0x4eef,	// (0x00007002) list_single_heading_pane_fp_g2

0x4efb,	// (0x0000700e) list_single_heading_pane_fp_g3_ParamLimits

0x4efb,	// (0x0000700e) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x00011cb8) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x00011cb8) list_single_heading_pane_fp_g

0x5137,	// (0x0000724a) list_single_heading_pane_fp_t1_ParamLimits

0x5137,	// (0x0000724a) list_single_heading_pane_fp_t1

0x5149,	// (0x0000725c) list_single_heading_pane_fp_t2_ParamLimits

0x5149,	// (0x0000725c) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x00011cbf) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x00011cbf) list_single_heading_pane_fp_t

0xed7d,	// (0x00010e90) aid_size_cell_fast

0xe5da,	// (0x000106ed) soft_indicator_pane_cp1_t1

0xedba,	// (0x00010ecd) cell_app_pane_cp2_ParamLimits

0xedba,	// (0x00010ecd) cell_app_pane_cp2

0x4694,	// (0x000067a7) fep_hwr_candidate_drop_down_list_pane

0x48d8,	// (0x000069eb) fep_hwr_candidate_pane_g3_ParamLimits

0x48d8,	// (0x000069eb) fep_hwr_candidate_pane_g3

0x48e5,	// (0x000069f8) fep_hwr_candidate_pane_g4_ParamLimits

0x48e5,	// (0x000069f8) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x00011c33) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x00011c33) fep_hwr_candidate_pane_g

0x49b0,	// (0x00006ac3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x49b0,	// (0x00006ac3) fep_vkb_candidate_drop_down_list_pane

0x4dd8,	// (0x00006eeb) fep_vkb_candidate_pane_g3

0x4de0,	// (0x00006ef3) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x00011c60) fep_vkb_candidate_pane_g

0x4ab6,	// (0x00006bc9) cell_hwr_candidate_pane_g1_ParamLimits

0x4e4b,	// (0x00006f5e) cell_hwr_candidate_pane_g3_ParamLimits

0x4e4b,	// (0x00006f5e) cell_hwr_candidate_pane_g3

0x4e6c,	// (0x00006f7f) cell_hwr_candidate_pane_g4_ParamLimits

0x4e6c,	// (0x00006f7f) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x00011c7a) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x00011c7a) cell_hwr_candidate_pane_g

0x4eab,	// (0x00006fbe) cell_vkb_candidate_pane_g3_ParamLimits

0x4eab,	// (0x00006fbe) cell_vkb_candidate_pane_g3

0x4ec6,	// (0x00006fd9) cell_vkb_candidate_pane_g4_ParamLimits

0x4ec6,	// (0x00006fd9) cell_vkb_candidate_pane_g4

0x515f,	// (0x00007272) cell_app_pane_cp2_g1_ParamLimits

0x515f,	// (0x00007272) cell_app_pane_cp2_g1

0x517d,	// (0x00007290) cell_app_pane_cp2_g2_ParamLimits

0x517d,	// (0x00007290) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x00011cc4) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x00011cc4) cell_app_pane_cp2_g

0x5189,	// (0x0000729c) cell_app_pane_cp2_t1_ParamLimits

0x5189,	// (0x0000729c) cell_app_pane_cp2_t1

0xeb7c,	// (0x00010c8f) grid_highlight_pane_cp1_ParamLimits

0xeb7c,	// (0x00010c8f) grid_highlight_pane_cp1

0x519b,	// (0x000072ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x519b,	// (0x000072ae) cell_hwr_candidate_pane_cp1

0x4ab6,	// (0x00006bc9) fep_hwr_candidate_drop_down_list_pane_g1

0x51bf,	// (0x000072d2) fep_hwr_candidate_drop_down_list_pane_g2

0x51cc,	// (0x000072df) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00011cc9) fep_hwr_candidate_drop_down_list_pane_g

0x51d9,	// (0x000072ec) fep_hwr_candidate_drop_down_list_scroll_pane

0x51e2,	// (0x000072f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x51e2,	// (0x000072f5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x51ef,	// (0x00007302) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x51ef,	// (0x00007302) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x51fc,	// (0x0000730f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x51fc,	// (0x0000730f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4eab,	// (0x00006fbe) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4eab,	// (0x00006fbe) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4ec6,	// (0x00006fd9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ec6,	// (0x00006fd9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5209,	// (0x0000731c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5209,	// (0x0000731c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5224,	// (0x00007337) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5224,	// (0x00007337) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x523f,	// (0x00007352) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x523f,	// (0x00007352) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x00011cd0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x00011cd0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x525a,	// (0x0000736d) cell_vkb_candidate_pane_cp1_ParamLimits

0x525a,	// (0x0000736d) cell_vkb_candidate_pane_cp1

0x4ab6,	// (0x00006bc9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4ab6,	// (0x00006bc9) fep_vkb_candidate_drop_down_list_pane_g1

0x51bf,	// (0x000072d2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x51bf,	// (0x000072d2) fep_vkb_candidate_drop_down_list_pane_g2

0x51cc,	// (0x000072df) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x51cc,	// (0x000072df) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00011cc9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x00011cc9) fep_vkb_candidate_drop_down_list_pane_g

0x5280,	// (0x00007393) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5280,	// (0x00007393) fep_vkb_candidate_drop_down_list_scroll_pane

0x528d,	// (0x000073a0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x528d,	// (0x000073a0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x529a,	// (0x000073ad) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x529a,	// (0x000073ad) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x52a6,	// (0x000073b9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x52a6,	// (0x000073b9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e4b,	// (0x00006f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e4b,	// (0x00006f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e6c,	// (0x00006f7f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e6c,	// (0x00006f7f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x52b2,	// (0x000073c5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x52b2,	// (0x000073c5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x52d3,	// (0x000073e6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x52d3,	// (0x000073e6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x52f4,	// (0x00007407) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x52f4,	// (0x00007407) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00011ce1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00011ce1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9d55,	// (0x0000be68) title_pane_g1_ParamLimits

0x9d68,	// (0x0000be7b) title_pane_g2_ParamLimits

0xf54e,	// (0x00011661) title_pane_g_ParamLimits

0xf2a1,	// (0x000113b4) aid_call2_pane

0xf2a9,	// (0x000113bc) aid_call_pane

0xf2b1,	// (0x000113c4) popup_clock_analogue_window_g1

0xf2b1,	// (0x000113c4) popup_clock_analogue_window_g2

0xf2b9,	// (0x000113cc) popup_clock_analogue_window_g3

0xf2c2,	// (0x000113d5) popup_clock_analogue_window_g4

0xe1ee,	// (0x00010301) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00011806) popup_clock_analogue_window_g

0xf2ca,	// (0x000113dd) popup_clock_analogue_window_t1

0xf327,	// (0x0001143a) clock_digital_number_pane_ParamLimits

0xf327,	// (0x0001143a) clock_digital_number_pane

0xf333,	// (0x00011446) clock_digital_number_pane_cp02_ParamLimits

0xf333,	// (0x00011446) clock_digital_number_pane_cp02

0xf33f,	// (0x00011452) clock_digital_number_pane_cp03_ParamLimits

0xf33f,	// (0x00011452) clock_digital_number_pane_cp03

0xf34b,	// (0x0001145e) clock_digital_number_pane_cp04_ParamLimits

0xf34b,	// (0x0001145e) clock_digital_number_pane_cp04

0xf357,	// (0x0001146a) clock_digital_separator_pane_ParamLimits

0xf357,	// (0x0001146a) clock_digital_separator_pane

0xf363,	// (0x00011476) popup_clock_digital_window_t1_ParamLimits

0xf363,	// (0x00011476) popup_clock_digital_window_t1

0xe1ee,	// (0x00010301) clock_digital_number_pane_g1

0xe1ee,	// (0x00010301) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00011811) clock_digital_number_pane_g

0xe1ee,	// (0x00010301) clock_digital_separator_pane_g1

0xe1ee,	// (0x00010301) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00011811) clock_digital_separator_pane_g

0xb41c,	// (0x0000d52f) aid_fill_nsta_ParamLimits

0xb554,	// (0x0000d667) indicator_nsta_pane_ParamLimits

0x1407,	// (0x0000351a) popup_clock_analogue_window

0x1407,	// (0x0000351a) popup_clock_digital_window

0xee73,	// (0x00010f86) grid_indicator_nsta_pane_ParamLimits

0x3fef,	// (0x00006102) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00011bb3) clock_nsta_pane_t

0xf0ee,	// (0x00011201) aid_size_max_handle

0xa7dc,	// (0x0000c8ef) aid_size_min_handle

0x055d,	// (0x00002670) editor_scroll_pane

0x530f,	// (0x00007422) ex_editor_pane

0xed43,	// (0x00010e56) scroll_pane_cp13

0xeaa1,	// (0x00010bb4) scroll_pane_cp14

0xf2ff,	// (0x00011412) scroll_pane_cp36

0xa869,	// (0x0000c97c) list_single_graphic_hl_pane_cp2_ParamLimits

0xa869,	// (0x0000c97c) list_single_graphic_hl_pane_cp2

0xbdc8,	// (0x0000dedb) list_single_graphic_hl_pane_ParamLimits

0xbdc8,	// (0x0000dedb) list_single_graphic_hl_pane

0x5317,	// (0x0000742a) aid_size_min_hl_cp1

0x5320,	// (0x00007433) list_highlight_pane_cp34_ParamLimits

0x5320,	// (0x00007433) list_highlight_pane_cp34

0x5331,	// (0x00007444) list_single_graphic_hl_pane_g1_ParamLimits

0x5331,	// (0x00007444) list_single_graphic_hl_pane_g1

0xc2fc,	// (0x0000e40f) list_single_graphic_hl_pane_g2_ParamLimits

0xc2fc,	// (0x0000e40f) list_single_graphic_hl_pane_g2

0xc2fc,	// (0x0000e40f) list_single_graphic_hl_pane_g3_ParamLimits

0xc2fc,	// (0x0000e40f) list_single_graphic_hl_pane_g3

0x53a4,	// (0x000074b7) list_single_graphic_hl_pane_g4_ParamLimits

0x53a4,	// (0x000074b7) list_single_graphic_hl_pane_g4

0x53b0,	// (0x000074c3) list_single_graphic_hl_pane_g5_ParamLimits

0x53b0,	// (0x000074c3) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x00011cf2) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x00011cf2) list_single_graphic_hl_pane_g

0xc308,	// (0x0000e41b) list_single_graphic_hl_pane_t1_ParamLimits

0xc308,	// (0x0000e41b) list_single_graphic_hl_pane_t1

0x5374,	// (0x00007487) aid_size_min_hl_cp2

0x537d,	// (0x00007490) list_highlight_pane_cp34_cp2_ParamLimits

0x537d,	// (0x00007490) list_highlight_pane_cp34_cp2

0x5331,	// (0x00007444) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5331,	// (0x00007444) list_single_graphic_hl_pane_g1_cp2

0x538a,	// (0x0000749d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x538a,	// (0x0000749d) list_single_graphic_hl_pane_g2_cp2

0x5396,	// (0x000074a9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5396,	// (0x000074a9) list_single_graphic_hl_pane_g3_cp2

0x53a4,	// (0x000074b7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x53a4,	// (0x000074b7) list_single_graphic_hl_pane_g4_cp2

0x53b0,	// (0x000074c3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x53b0,	// (0x000074c3) list_single_graphic_hl_pane_g5_cp2

0xab95,	// (0x0000cca8) control_pane_g4_ParamLimits

0xab95,	// (0x0000cca8) control_pane_g4

0x0abb,	// (0x00002bce) bg_popup_sub_pane_cp10_ParamLimits

0x4633,	// (0x00006746) list_choice_list_pane_ParamLimits

0x4642,	// (0x00006755) scroll_pane_cp23

0xe5f7,	// (0x0001070a) bg_popup_preview_window_pane_cp02_ParamLimits

0x4f37,	// (0x0000704a) list_preview_fixed_pane_ParamLimits

0x4f4d,	// (0x00007060) list_preview_fixed_pane_cp_ParamLimits

0x4f4d,	// (0x00007060) list_preview_fixed_pane_cp

0x4f59,	// (0x0000706c) popup_preview_fixed_window_g1_ParamLimits

0x4f59,	// (0x0000706c) popup_preview_fixed_window_g1

0x4f65,	// (0x00007078) popup_preview_fixed_window_g2_ParamLimits

0x4f65,	// (0x00007078) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x00011c81) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x00011c81) popup_preview_fixed_window_g

0xf029,	// (0x0001113c) aid_navi_side_left_pane_ParamLimits

0xf03e,	// (0x00011151) aid_navi_side_right_pane_ParamLimits

0xf056,	// (0x00011169) navi_icon_pane_stacon_ParamLimits

0xf06a,	// (0x0001117d) navi_navi_pane_stacon_ParamLimits

0xf056,	// (0x00011169) navi_text_pane_stacon_ParamLimits

0xe1e4,	// (0x000102f7) main_text_info_pane

0x53da,	// (0x000074ed) listscroll_text_info_pane

0x53e2,	// (0x000074f5) list_text_info_pane_ParamLimits

0x53e2,	// (0x000074f5) list_text_info_pane

0x53f1,	// (0x00007504) scroll_pane_cp24_ParamLimits

0x53f1,	// (0x00007504) scroll_pane_cp24

0xc31e,	// (0x0000e431) list_text_info_pane_t1_ParamLimits

0xc31e,	// (0x0000e431) list_text_info_pane_t1

0xad17,	// (0x0000ce2a) popup_fast_swap2_window_ParamLimits

0xad17,	// (0x0000ce2a) popup_fast_swap2_window

0x5434,	// (0x00007547) aid_size_cell_fast2

0xe1e4,	// (0x000102f7) bg_popup_window_pane_cp17

0x1ce4,	// (0x00003df7) heading_pane_cp2

0xe826,	// (0x00010939) listscroll_fast2_pane

0x543e,	// (0x00007551) grid_fast2_pane

0x5448,	// (0x0000755b) listscroll_fast2_pane_g1

0x5452,	// (0x00007565) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x00011cfd) listscroll_fast2_pane_g

0xed43,	// (0x00010e56) scroll_pane_cp26

0x545c,	// (0x0000756f) cell_fast2_pane_ParamLimits

0x545c,	// (0x0000756f) cell_fast2_pane

0x5473,	// (0x00007586) cell_fast2_pane_g1

0x547c,	// (0x0000758f) cell_fast2_pane_g2

0x5485,	// (0x00007598) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x00011d02) cell_fast2_pane_g

0xe868,	// (0x0001097b) grid_highlight_pane_cp9

0xe87d,	// (0x00010990) main_eswt_pane_ParamLimits

0xe87d,	// (0x00010990) main_eswt_pane

0x5406,	// (0x00007519) list_single_text_info_pane

0x548d,	// (0x000075a0) eswt_ctrl_button_pane

0x548d,	// (0x000075a0) eswt_ctrl_canvas_pane

0x5495,	// (0x000075a8) eswt_ctrl_combo_pane

0x548d,	// (0x000075a0) eswt_ctrl_default_pane

0x548d,	// (0x000075a0) eswt_ctrl_label_pane

0x549d,	// (0x000075b0) eswt_ctrl_wait_pane

0x54a5,	// (0x000075b8) eswt_shell_pane

0xe1e4,	// (0x000102f7) listscroll_eswt_app_pane

0x54c5,	// (0x000075d8) popup_eswt_tasktip_window_ParamLimits

0x54c5,	// (0x000075d8) popup_eswt_tasktip_window

0x1865,	// (0x00003978) bg_popup_window_pane_cp18

0x54d6,	// (0x000075e9) eswt_control_pane_g1_ParamLimits

0x54d6,	// (0x000075e9) eswt_control_pane_g1

0x54e3,	// (0x000075f6) eswt_control_pane_g2_ParamLimits

0x54e3,	// (0x000075f6) eswt_control_pane_g2

0x54f0,	// (0x00007603) eswt_control_pane_g3_ParamLimits

0x54f0,	// (0x00007603) eswt_control_pane_g3

0x54fd,	// (0x00007610) eswt_control_pane_g4_ParamLimits

0x54fd,	// (0x00007610) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x00011d09) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x00011d09) eswt_control_pane_g

0xeb7c,	// (0x00010c8f) bg_button_pane_ParamLimits

0xeb7c,	// (0x00010c8f) bg_button_pane

0xe87d,	// (0x00010990) common_borders_pane_copy2_ParamLimits

0xe87d,	// (0x00010990) common_borders_pane_copy2

0x550a,	// (0x0000761d) control_button_pane_g1_ParamLimits

0x550a,	// (0x0000761d) control_button_pane_g1

0x5516,	// (0x00007629) control_button_pane_g2_ParamLimits

0x5516,	// (0x00007629) control_button_pane_g2

0x5522,	// (0x00007635) control_button_pane_g3_ParamLimits

0x5522,	// (0x00007635) control_button_pane_g3

0x0002,

0xfbff,	// (0x00011d12) control_button_pane_g_ParamLimits

0xfbff,	// (0x00011d12) control_button_pane_g

0x5536,	// (0x00007649) control_button_pane_t1

0x5544,	// (0x00007657) control_button_pane_t2

0x0001,

0xfc06,	// (0x00011d19) control_button_pane_t

0x16ca,	// (0x000037dd) bg_button_pane_g1

0x16d2,	// (0x000037e5) bg_button_pane_g2

0x16da,	// (0x000037ed) bg_button_pane_g3

0x16e2,	// (0x000037f5) bg_button_pane_g4

0x16ea,	// (0x000037fd) bg_button_pane_g5

0x16f2,	// (0x00003805) bg_button_pane_g6

0x16fa,	// (0x0000380d) bg_button_pane_g7

0x1702,	// (0x00003815) bg_button_pane_g8

0x170a,	// (0x0000381d) bg_button_pane_g9

0x0008,

0xf855,	// (0x00011968) bg_button_pane_g

0x45ee,	// (0x00006701) common_borders_pane_ParamLimits

0x45ee,	// (0x00006701) common_borders_pane

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy1_ParamLimits

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy1

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy1_ParamLimits

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy1

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy1_ParamLimits

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy1

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy1_ParamLimits

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy1

0x4629,	// (0x0000673c) bg_eswt_ctrl_canvas_pane_g1

0x45ee,	// (0x00006701) common_borders_pane_cp2_ParamLimits

0x45ee,	// (0x00006701) common_borders_pane_cp2

0x45ee,	// (0x00006701) common_borders_pane_cp3_ParamLimits

0x45ee,	// (0x00006701) common_borders_pane_cp3

0x5552,	// (0x00007665) separator_horizontal_pane

0x555a,	// (0x0000766d) separator_vertical_pane

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy2_ParamLimits

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy2

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy2_ParamLimits

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy2

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy2_ParamLimits

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy2

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy2_ParamLimits

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy2

0xe1e4,	// (0x000102f7) common_borders_pane_cp4

0x5563,	// (0x00007676) separator_horizontal_pane_g1

0x556c,	// (0x0000767f) separator_horizontal_pane_g2

0x5575,	// (0x00007688) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x00011d1e) separator_horizontal_pane_g

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy3_ParamLimits

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy3

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy3_ParamLimits

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy3

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy3_ParamLimits

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy3

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy3_ParamLimits

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy3

0xe1e4,	// (0x000102f7) common_borders_pane_cp5

0x557e,	// (0x00007691) separator_vertical_pane_g1

0x5587,	// (0x0000769a) separator_vertical_pane_g2

0x5590,	// (0x000076a3) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x00011d25) separator_vertical_pane_g

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy4_ParamLimits

0x54d6,	// (0x000075e9) eswt_control_pane_g1_copy4

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy4_ParamLimits

0x54e3,	// (0x000075f6) eswt_control_pane_g2_copy4

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy4_ParamLimits

0x54f0,	// (0x00007603) eswt_control_pane_g3_copy4

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy4_ParamLimits

0x54fd,	// (0x00007610) eswt_control_pane_g4_copy4

0xc340,	// (0x0000e453) eswt_ctrl_combo_button_pane

0xc348,	// (0x0000e45b) eswt_ctrl_input_pane

0xc350,	// (0x0000e463) popup_choice_list_window_cp70

0xc358,	// (0x0000e46b) eswt_ctrl_input_pane_t1

0xe1e4,	// (0x000102f7) input_focus_pane_cp70

0x45ee,	// (0x00006701) bg_button_pane_cp70_ParamLimits

0x45ee,	// (0x00006701) bg_button_pane_cp70

0xc366,	// (0x0000e479) eswt_ctrl_combo_button_pane_g1

0x55c7,	// (0x000076da) wait_bar_pane_cp70

0x1865,	// (0x00003978) bg_popup_window_pane_cp70_ParamLimits

0x1865,	// (0x00003978) bg_popup_window_pane_cp70

0x55cf,	// (0x000076e2) popup_eswt_tasktip_window_t1

0x55e5,	// (0x000076f8) wait_bar_pane_cp71_ParamLimits

0x55e5,	// (0x000076f8) wait_bar_pane_cp71

0x55f1,	// (0x00007704) grid_eswt_app_pane

0xf149,	// (0x0001125c) scroll_pane_cp70

0xc36e,	// (0x0000e481) cell_eswt_app_pane_ParamLimits

0xc36e,	// (0x0000e481) cell_eswt_app_pane

0xc3a0,	// (0x0000e4b3) cell_eswt_app_pane_g1_ParamLimits

0xc3a0,	// (0x0000e4b3) cell_eswt_app_pane_g1

0xc3cf,	// (0x0000e4e2) cell_eswt_app_pane_g2_ParamLimits

0xc3cf,	// (0x0000e4e2) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x00011d2c) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x00011d2c) cell_eswt_app_pane_g

0xc3f8,	// (0x0000e50b) cell_eswt_app_pane_t1_ParamLimits

0xc3f8,	// (0x0000e50b) cell_eswt_app_pane_t1

0x56b6,	// (0x000077c9) grid_highlight_pane_cp70_ParamLimits

0x56b6,	// (0x000077c9) grid_highlight_pane_cp70

0x043a,	// (0x0000254d) set_content_pane_g1

0xab27,	// (0x0000cc3a) status_small_volume_pane

0x56c2,	// (0x000077d5) status_small_volume_pane_g1

0x56ca,	// (0x000077dd) volume_small2_pane

0x56d3,	// (0x000077e6) volume_small2_pane_g1

0x56dc,	// (0x000077ef) volume_small2_pane_g2

0x56e5,	// (0x000077f8) volume_small2_pane_g3

0x56ee,	// (0x00007801) volume_small2_pane_g4

0x56f7,	// (0x0000780a) volume_small2_pane_g5

0x5700,	// (0x00007813) volume_small2_pane_g6

0x5709,	// (0x0000781c) volume_small2_pane_g7

0x5712,	// (0x00007825) volume_small2_pane_g8

0x571b,	// (0x0000782e) volume_small2_pane_g9

0x5724,	// (0x00007837) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x00011d31) volume_small2_pane_g

0x4c0a,	// (0x00006d1d) fep_vkb_top_text_pane_g1_ParamLimits

0xc2a4,	// (0x0000e3b7) fep_vkb_top_text_pane_t1_ParamLimits

0x4f71,	// (0x00007084) popup_preview_fixed_window_g3_ParamLimits

0x4f71,	// (0x00007084) popup_preview_fixed_window_g3

0xb3af,	// (0x0000d4c2) popup_toolbar_trans_pane

0xbcaf,	// (0x0000ddc2) aid_height_set_list_ParamLimits

0x2ee8,	// (0x00004ffb) aid_size_parent_ParamLimits

0x0abb,	// (0x00002bce) list_highlight_pane_cp2_ParamLimits

0x043a,	// (0x0000254d) set_content_pane_g1_ParamLimits

0xbddc,	// (0x0000deef) list_single_image_pane_ParamLimits

0xbddc,	// (0x0000deef) list_single_image_pane

0xc42a,	// (0x0000e53d) aid_size_cell_image_ParamLimits

0xc42a,	// (0x0000e53d) aid_size_cell_image

0xc437,	// (0x0000e54a) grid_single_image_pane_ParamLimits

0xc437,	// (0x0000e54a) grid_single_image_pane

0xeba2,	// (0x00010cb5) list_single_image_pane_g1_ParamLimits

0xeba2,	// (0x00010cb5) list_single_image_pane_g1

0xebae,	// (0x00010cc1) list_single_image_pane_g2_ParamLimits

0xebae,	// (0x00010cc1) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x00011d46) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x00011d46) list_single_image_pane_g

0x5748,	// (0x0000785b) list_single_image_pane_t1_ParamLimits

0x5748,	// (0x0000785b) list_single_image_pane_t1

0xc445,	// (0x0000e558) cell_image_list_pane_ParamLimits

0xc445,	// (0x0000e558) cell_image_list_pane

0xc459,	// (0x0000e56c) cell_image_list_pane_g1

0xc462,	// (0x0000e575) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x00011d4b) cell_image_list_pane_g

0x5786,	// (0x00007899) aid_size_cell_tb_trans_pane

0xeb7c,	// (0x00010c8f) bg_tb_trans_pane

0x5798,	// (0x000078ab) grid_tb_trans_pane

0x16ca,	// (0x000037dd) bg_tb_trans_pane_g1

0x16d2,	// (0x000037e5) bg_tb_trans_pane_g2

0x16da,	// (0x000037ed) bg_tb_trans_pane_g3

0x16e2,	// (0x000037f5) bg_tb_trans_pane_g4

0x16ea,	// (0x000037fd) bg_tb_trans_pane_g5

0x1702,	// (0x00003815) bg_tb_trans_pane_g6

0x170a,	// (0x0000381d) bg_tb_trans_pane_g7

0x16f2,	// (0x00003805) bg_tb_trans_pane_g8

0x16fa,	// (0x0000380d) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x00011d50) bg_tb_trans_pane_g

0x57ac,	// (0x000078bf) cell_toolbar_trans_pane_ParamLimits

0x57ac,	// (0x000078bf) cell_toolbar_trans_pane

0x4629,	// (0x0000673c) cell_toolbar_trans_pane_g1

0xc027,	// (0x0000e13a) list_form2_midp_pane_t1

0xc035,	// (0x0000e148) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00011bf9) list_form2_midp_pane_t

0x422a,	// (0x0000633d) scroll_pane_cp51_ParamLimits

0x4444,	// (0x00006557) form2_midp_wait_pane_g1

0x444d,	// (0x00006560) form2_midp_wait_pane_g2

0x4456,	// (0x00006569) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00011c0e) form2_midp_wait_pane_g

0xe421,	// (0x00010534) list_highlight_pane_cp21_ParamLimits

0x448f,	// (0x000065a2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x449e,	// (0x000065b1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3104,	// (0x00005217) list_single_2graphic_im_pane_ParamLimits

0x3104,	// (0x00005217) list_single_2graphic_im_pane

0xc46b,	// (0x0000e57e) list_single_2graphic_im_pane_g1_ParamLimits

0xc46b,	// (0x0000e57e) list_single_2graphic_im_pane_g1

0xc47c,	// (0x0000e58f) list_single_2graphic_im_pane_g2_ParamLimits

0xc47c,	// (0x0000e58f) list_single_2graphic_im_pane_g2

0xc488,	// (0x0000e59b) list_single_2graphic_im_pane_g3_ParamLimits

0xc488,	// (0x0000e59b) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x00011d63) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x00011d63) list_single_2graphic_im_pane_g

0xc49c,	// (0x0000e5af) list_single_2graphic_im_pane_t1_ParamLimits

0xc49c,	// (0x0000e5af) list_single_2graphic_im_pane_t1

0x4f7d,	// (0x00007090) list_single_graphic_2heading_pane_fp_ParamLimits

0x4f7d,	// (0x00007090) list_single_graphic_2heading_pane_fp

0x4fc5,	// (0x000070d8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4fc5,	// (0x000070d8) list_single_graphic_2heading_pane_fp_g1

0x4f96,	// (0x000070a9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4f96,	// (0x000070a9) list_single_graphic_2heading_pane_fp_g2

0x4eef,	// (0x00007002) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4eef,	// (0x00007002) list_single_graphic_2heading_pane_fp_g3

0x4efb,	// (0x0000700e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4efb,	// (0x0000700e) list_single_graphic_2heading_pane_fp_g4

0x4fa2,	// (0x000070b5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4fa2,	// (0x000070b5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x00011c91) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00011c91) list_single_graphic_2heading_pane_fp_g

0x5840,	// (0x00007953) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5840,	// (0x00007953) list_single_graphic_2heading_pane_fp_t1

0x4ffd,	// (0x00007110) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4ffd,	// (0x00007110) list_single_graphic_2heading_pane_fp_t2

0x5856,	// (0x00007969) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5856,	// (0x00007969) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x00011d6c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x00011d6c) list_single_graphic_2heading_pane_fp_t

0x4846,	// (0x00006959) fep_hwr_write_pane_g5_ParamLimits

0x4846,	// (0x00006959) fep_hwr_write_pane_g5

0x4852,	// (0x00006965) fep_hwr_write_pane_g6_ParamLimits

0x4852,	// (0x00006965) fep_hwr_write_pane_g6

0x54a5,	// (0x000075b8) eswt_shell_pane_ParamLimits

0x1865,	// (0x00003978) bg_popup_window_pane_cp18_ParamLimits

0x2d8e,	// (0x00004ea1) heading_pane_cp70

0x55cf,	// (0x000076e2) popup_eswt_tasktip_window_t1_ParamLimits

0xb479,	// (0x0000d58c) aid_touch_tab_arrow_left

0xb48f,	// (0x0000d5a2) aid_touch_tab_arrow_right

0x9d8c,	// (0x0000be9f) title_pane_g3_ParamLimits

0x9d8c,	// (0x0000be9f) title_pane_g3

0xead6,	// (0x00010be9) set_value_pane_g1

0xb3af,	// (0x0000d4c2) popup_toolbar_trans_pane_ParamLimits

0x5786,	// (0x00007899) aid_size_cell_tb_trans_pane_ParamLimits

0xeb7c,	// (0x00010c8f) bg_tb_trans_pane_ParamLimits

0x5798,	// (0x000078ab) grid_tb_trans_pane_ParamLimits

0xe5f7,	// (0x0001070a) cont_note_pane_ParamLimits

0xe5f7,	// (0x0001070a) cont_note_pane

0xe87d,	// (0x00010990) cont_snote2_single_text_pane_ParamLimits

0xe87d,	// (0x00010990) cont_snote2_single_text_pane

0xe87d,	// (0x00010990) cont_snote2_single_graphic_pane_ParamLimits

0xe87d,	// (0x00010990) cont_snote2_single_graphic_pane

0x1f0c,	// (0x0000401f) cont_note_wait_pane_ParamLimits

0x1f0c,	// (0x0000401f) cont_note_wait_pane

0x1f0c,	// (0x0000401f) cont_note_image_pane_ParamLimits

0x1f0c,	// (0x0000401f) cont_note_image_pane

0x586c,	// (0x0000797f) popup_note2_window_g1_ParamLimits

0x586c,	// (0x0000797f) popup_note2_window_g1

0x589d,	// (0x000079b0) popup_note2_window_t1_ParamLimits

0x589d,	// (0x000079b0) popup_note2_window_t1

0x58e2,	// (0x000079f5) popup_note2_window_t2_ParamLimits

0x58e2,	// (0x000079f5) popup_note2_window_t2

0x5927,	// (0x00007a3a) popup_note2_window_t3_ParamLimits

0x5927,	// (0x00007a3a) popup_note2_window_t3

0x596c,	// (0x00007a7f) popup_note2_window_t4_ParamLimits

0x596c,	// (0x00007a7f) popup_note2_window_t4

0xe67b,	// (0x0001078e) popup_note2_window_t5_ParamLimits

0xe67b,	// (0x0001078e) popup_note2_window_t5

0x0004,

0xfc65,	// (0x00011d78) popup_note2_window_t_ParamLimits

0xfc65,	// (0x00011d78) popup_note2_window_t

0x599b,	// (0x00007aae) popup_note2_image_window_g1_ParamLimits

0x599b,	// (0x00007aae) popup_note2_image_window_g1

0x59a7,	// (0x00007aba) popup_note2_image_window_g2_ParamLimits

0x59a7,	// (0x00007aba) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x00011d83) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x00011d83) popup_note2_image_window_g

0x59b9,	// (0x00007acc) popup_note2_image_window_t1_ParamLimits

0x59b9,	// (0x00007acc) popup_note2_image_window_t1

0x59d1,	// (0x00007ae4) popup_note2_image_window_t2_ParamLimits

0x59d1,	// (0x00007ae4) popup_note2_image_window_t2

0x59e9,	// (0x00007afc) popup_note2_image_window_t3_ParamLimits

0x59e9,	// (0x00007afc) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x00011d88) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x00011d88) popup_note2_image_window_t

0x1f1a,	// (0x0000402d) popup_note2_wait_window_g1_ParamLimits

0x1f1a,	// (0x0000402d) popup_note2_wait_window_g1

0x5a05,	// (0x00007b18) popup_note2_wait_window_g2_ParamLimits

0x5a05,	// (0x00007b18) popup_note2_wait_window_g2

0x1f32,	// (0x00004045) popup_note2_wait_window_g3_ParamLimits

0x1f32,	// (0x00004045) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x00011d8f) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x00011d8f) popup_note2_wait_window_g

0x5a11,	// (0x00007b24) popup_note2_wait_window_t1_ParamLimits

0x5a11,	// (0x00007b24) popup_note2_wait_window_t1

0x5a2f,	// (0x00007b42) popup_note2_wait_window_t2_ParamLimits

0x5a2f,	// (0x00007b42) popup_note2_wait_window_t2

0x5a4d,	// (0x00007b60) popup_note2_wait_window_t3_ParamLimits

0x5a4d,	// (0x00007b60) popup_note2_wait_window_t3

0x5a5f,	// (0x00007b72) popup_note2_wait_window_t4_ParamLimits

0x5a5f,	// (0x00007b72) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x00011d96) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x00011d96) popup_note2_wait_window_t

0x5a71,	// (0x00007b84) wait_bar2_pane_ParamLimits

0x5a71,	// (0x00007b84) wait_bar2_pane

0x5a89,	// (0x00007b9c) popup_snote2_single_text_window_g1_ParamLimits

0x5a89,	// (0x00007b9c) popup_snote2_single_text_window_g1

0x5ab1,	// (0x00007bc4) popup_snote2_single_text_window_t1_ParamLimits

0x5ab1,	// (0x00007bc4) popup_snote2_single_text_window_t1

0x5afd,	// (0x00007c10) popup_snote2_single_text_window_t2_ParamLimits

0x5afd,	// (0x00007c10) popup_snote2_single_text_window_t2

0x5b49,	// (0x00007c5c) popup_snote2_single_text_window_t3_ParamLimits

0x5b49,	// (0x00007c5c) popup_snote2_single_text_window_t3

0x5b8a,	// (0x00007c9d) popup_snote2_single_text_window_t4_ParamLimits

0x5b8a,	// (0x00007c9d) popup_snote2_single_text_window_t4

0x5bc0,	// (0x00007cd3) popup_snote2_single_text_window_t5_ParamLimits

0x5bc0,	// (0x00007cd3) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x00011d9f) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x00011d9f) popup_snote2_single_text_window_t

0x5beb,	// (0x00007cfe) popup_snote2_single_graphic_window_g1_ParamLimits

0x5beb,	// (0x00007cfe) popup_snote2_single_graphic_window_g1

0x5c13,	// (0x00007d26) popup_snote2_single_graphic_window_g2_ParamLimits

0x5c13,	// (0x00007d26) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x00011daa) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x00011daa) popup_snote2_single_graphic_window_g

0x5c3b,	// (0x00007d4e) popup_snote2_single_graphic_window_t1_ParamLimits

0x5c3b,	// (0x00007d4e) popup_snote2_single_graphic_window_t1

0x5c87,	// (0x00007d9a) popup_snote2_single_graphic_window_t2_ParamLimits

0x5c87,	// (0x00007d9a) popup_snote2_single_graphic_window_t2

0x5b49,	// (0x00007c5c) popup_snote2_single_graphic_window_t3_ParamLimits

0x5b49,	// (0x00007c5c) popup_snote2_single_graphic_window_t3

0x5b8a,	// (0x00007c9d) popup_snote2_single_graphic_window_t4_ParamLimits

0x5b8a,	// (0x00007c9d) popup_snote2_single_graphic_window_t4

0x5bc0,	// (0x00007cd3) popup_snote2_single_graphic_window_t5_ParamLimits

0x5bc0,	// (0x00007cd3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x00011daf) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x00011daf) popup_snote2_single_graphic_window_t

0x4089,	// (0x0000619c) clock_nsta_pane_cp2_t1

0x4089,	// (0x0000619c) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00011bcf) clock_nsta_pane_cp2_t

0xeb96,	// (0x00010ca9) form_field_data_wide_pane_g1_ParamLimits

0xeba2,	// (0x00010cb5) form_field_data_wide_pane_g2_ParamLimits

0xeba2,	// (0x00010cb5) form_field_data_wide_pane_g2

0xebae,	// (0x00010cc1) form_field_data_wide_pane_g3_ParamLimits

0xebae,	// (0x00010cc1) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00011789) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00011789) form_field_data_wide_pane_g

0xbf3e,	// (0x0000e051) grid_touch_3_pane_ParamLimits

0xbf3e,	// (0x0000e051) grid_touch_3_pane

0xc4cd,	// (0x0000e5e0) cell_touch_3_pane_ParamLimits

0xc4cd,	// (0x0000e5e0) cell_touch_3_pane

0x4629,	// (0x0000673c) cell_touch_3_pane_g1

0x4629,	// (0x0000673c) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x00011c54) cell_touch_3_pane_g

0xe6d3,	// (0x000107e6) cont_query_data_pane

0xe6db,	// (0x000107ee) cont_query_data_pane_cp1

0x5d06,	// (0x00007e19) button_value_adjust_pane_cp7

0x5d0e,	// (0x00007e21) query_popup_pane_cp3

0xf38b,	// (0x0001149e) bg_popup_sub_pane_cp22_ParamLimits

0xf3a1,	// (0x000114b4) navi_navi_volume_pane_cp2

0xf3bc,	// (0x000114cf) popup_side_volume_key_window_g2

0xf3cb,	// (0x000114de) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001181f) popup_side_volume_key_window_g

0xf3e8,	// (0x000114fb) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00011826) popup_side_volume_key_window_t

0x02f5,	// (0x00002408) popup_side_volume_key_window_ParamLimits

0xa262,	// (0x0000c375) list_double_graphic_pane_g4_ParamLimits

0xa262,	// (0x0000c375) list_double_graphic_pane_g4

0xbdb3,	// (0x0000dec6) list_single_2heading_msg_pane_ParamLimits

0xbdb3,	// (0x0000dec6) list_single_2heading_msg_pane

0xc519,	// (0x0000e62c) list_single_2heading_msg_pane_g1_ParamLimits

0xc519,	// (0x0000e62c) list_single_2heading_msg_pane_g1

0xc525,	// (0x0000e638) list_single_2heading_msg_pane_g2_ParamLimits

0xc525,	// (0x0000e638) list_single_2heading_msg_pane_g2

0xc538,	// (0x0000e64b) list_single_2heading_msg_pane_g3_ParamLimits

0xc538,	// (0x0000e64b) list_single_2heading_msg_pane_g3

0xc544,	// (0x0000e657) list_single_2heading_msg_pane_g4_ParamLimits

0xc544,	// (0x0000e657) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x00011dba) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x00011dba) list_single_2heading_msg_pane_g

0xc55c,	// (0x0000e66f) list_single_2heading_msg_pane_t1_ParamLimits

0xc55c,	// (0x0000e66f) list_single_2heading_msg_pane_t1

0xc584,	// (0x0000e697) list_single_2heading_msg_pane_t2_ParamLimits

0xc584,	// (0x0000e697) list_single_2heading_msg_pane_t2

0xc5ef,	// (0x0000e702) list_single_2heading_msg_pane_t3_ParamLimits

0xc5ef,	// (0x0000e702) list_single_2heading_msg_pane_t3

0x5dff,	// (0x00007f12) list_single_2heading_msg_pane_t4_ParamLimits

0x5dff,	// (0x00007f12) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x00011dc3) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x00011dc3) list_single_2heading_msg_pane_t

0xe3c5,	// (0x000104d8) title_pane_g4_ParamLimits

0xe3c5,	// (0x000104d8) title_pane_g4

0xef51,	// (0x00011064) title_pane_stacon_g3_ParamLimits

0xef51,	// (0x00011064) title_pane_stacon_g3

0x5803,	// (0x00007916) list_single_2graphic_im_pane_g4_ParamLimits

0x5803,	// (0x00007916) list_single_2graphic_im_pane_g4

0x2ae8,	// (0x00004bfb) popup_side_volume_key_window_cp

0x3588,	// (0x0000569b) main_idle_act2_pane_t1

0x1712,	// (0x00003825) toolbar_button_pane_g10

0xa109,	// (0x0000c21c) popup_toolbar_window_cp1

0x407a,	// (0x0000618d) clock_nsta_pane_cp_t1

0x407a,	// (0x0000618d) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00011bca) clock_nsta_pane_cp_t

0xf3a1,	// (0x000114b4) navi_navi_volume_pane_cp2_ParamLimits

0xf3b0,	// (0x000114c3) popup_side_volume_key_window_g1_ParamLimits

0xf3bc,	// (0x000114cf) popup_side_volume_key_window_g2_ParamLimits

0xf3cb,	// (0x000114de) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001181f) popup_side_volume_key_window_g_ParamLimits

0x4680,	// (0x00006793) fep_hwr_aid_pane

0x4729,	// (0x0000683c) bg_fep_hwr_top_pane_g4_ParamLimits

0x4749,	// (0x0000685c) fep_hwr_top_pane_g1_ParamLimits

0x475b,	// (0x0000686e) fep_hwr_top_pane_g2_ParamLimits

0x476d,	// (0x00006880) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x00011c1f) fep_hwr_top_pane_g_ParamLimits

0x4782,	// (0x00006895) fep_hwr_top_text_pane_ParamLimits

0x289d,	// (0x000049b0) aid_touch_tab_arrow_arrow_2

0x28a6,	// (0x000049b9) aid_touch_tab_arrow_left_2

0x4694,	// (0x000067a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x46cb,	// (0x000067de) fep_hwr_prediction_pane

0x4a04,	// (0x00006b17) fep_vkb_prediction_pane

0xc284,	// (0x0000e397) fep_vkb_side_pane_g3_ParamLimits

0xc284,	// (0x0000e397) fep_vkb_side_pane_g3

0x4ab6,	// (0x00006bc9) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x51bf,	// (0x000072d2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x51cc,	// (0x000072df) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00011cc9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e24,	// (0x00007f37) fep_hwr_prediction_pane_g1

0x5e2e,	// (0x00007f41) fep_hwr_prediction_pane_g2

0x5e36,	// (0x00007f49) fep_hwr_prediction_pane_g3

0x5e3e,	// (0x00007f51) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x00011dcc) fep_hwr_prediction_pane_g

0x5e24,	// (0x00007f37) fep_vkb_prediction_pane_g1

0x5e46,	// (0x00007f59) fep_vkb_prediction_pane_g2

0x5e4e,	// (0x00007f61) fep_vkb_prediction_pane_g3

0x5e56,	// (0x00007f69) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x00011dd5) fep_vkb_prediction_pane_g

0x2e4f,	// (0x00004f62) slider_set_pane_g3

0x2e63,	// (0x00004f76) slider_set_pane_g4

0x2e7b,	// (0x00004f8e) slider_set_pane_g5

0x2e4f,	// (0x00004f62) slider_set_pane_g6

0x2e91,	// (0x00004fa4) slider_set_pane_g7

0x3067,	// (0x0000517a) slider_form_pane_g3

0x3070,	// (0x00005183) slider_form_pane_g4

0x3078,	// (0x0000518b) slider_form_pane_g5

0x3067,	// (0x0000517a) slider_form_pane_g6

0xbd56,	// (0x0000de69) slider_form_pane_g7

0x3893,	// (0x000059a6) slider_set_pane_vc_g3

0x389c,	// (0x000059af) slider_set_pane_vc_g4

0x38a5,	// (0x000059b8) slider_set_pane_vc_g5

0x3893,	// (0x000059a6) slider_set_pane_vc_g6

0x38ae,	// (0x000059c1) slider_set_pane_vc_g7

0x3d50,	// (0x00005e63) slider_form_pane_vc_g1

0x3d59,	// (0x00005e6c) slider_form_pane_vc_g2

0x3d62,	// (0x00005e75) slider_form_pane_vc_g3

0x3d50,	// (0x00005e63) slider_form_pane_vc_g4

0x3d6b,	// (0x00005e7e) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00011b9c) slider_form_pane_vc_g

0xe1e4,	// (0x000102f7) main_idle_act3_pane

0x5e5e,	// (0x00007f71) ai3_links_pane

0xc65d,	// (0x0000e770) popup_ai3_data_window_ParamLimits

0xc65d,	// (0x0000e770) popup_ai3_data_window

0xe1e4,	// (0x000102f7) grid_ai3_links_pane

0xc67b,	// (0x0000e78e) cell_ai3_links_pane_ParamLimits

0xc67b,	// (0x0000e78e) cell_ai3_links_pane

0x5e9f,	// (0x00007fb2) bg_popup_sub_pane_cp11

0x5eac,	// (0x00007fbf) cell_ai3_links_pane_g1

0xe1e4,	// (0x000102f7) bg_popup_sub_pane_cp12

0x5ed1,	// (0x00007fe4) heading_ai3_data_pane

0x5ed9,	// (0x00007fec) list_ai3_gene_pane

0x5ee5,	// (0x00007ff8) popup_ai3_data_window_g1

0x5eed,	// (0x00008000) heading_ai3_data_pane_g1

0x5ef5,	// (0x00008008) heading_ai3_data_pane_t1

0x5f03,	// (0x00008016) list_double_ai3_gene_pane_ParamLimits

0x5f03,	// (0x00008016) list_double_ai3_gene_pane

0x5f10,	// (0x00008023) list_single_ai3_gene_pane_ParamLimits

0x5f10,	// (0x00008023) list_single_ai3_gene_pane

0x45ee,	// (0x00006701) list_highlight_pane_cp7_ParamLimits

0x45ee,	// (0x00006701) list_highlight_pane_cp7

0x5f1d,	// (0x00008030) list_single_a13_gene_pane_t1_ParamLimits

0x5f1d,	// (0x00008030) list_single_a13_gene_pane_t1

0x5f34,	// (0x00008047) list_single_ai3_gene_pane_g1

0x5f3d,	// (0x00008050) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x00011dde) list_single_ai3_gene_pane_g

0x5f45,	// (0x00008058) list_double_ai3_gene_pane_g1_ParamLimits

0x5f45,	// (0x00008058) list_double_ai3_gene_pane_g1

0x5f51,	// (0x00008064) list_double_ai3_gene_pane_t1_ParamLimits

0x5f51,	// (0x00008064) list_double_ai3_gene_pane_t1

0x5f6d,	// (0x00008080) list_double_ai3_gene_pane_t2_ParamLimits

0x5f6d,	// (0x00008080) list_double_ai3_gene_pane_t2

0x5f82,	// (0x00008095) list_double_ai3_gene_pane_t3_ParamLimits

0x5f82,	// (0x00008095) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x00011de3) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x00011de3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d1f,	// (0x00007e32) aid_size_min_col_2

0xc503,	// (0x0000e616) aid_size_min_msg_ParamLimits

0xc503,	// (0x0000e616) aid_size_min_msg

0xc298,	// (0x0000e3ab) fep_vkb_top_text_pane_g2_ParamLimits

0xc298,	// (0x0000e3ab) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x00011c4f) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x00011c4f) fep_vkb_top_text_pane_g

0xe1e4,	// (0x000102f7) main_hc_apps_shell_pane

0x5f9f,	// (0x000080b2) grid_hc_apps_pane_ParamLimits

0x5f9f,	// (0x000080b2) grid_hc_apps_pane

0x5fae,	// (0x000080c1) list_hc_apps_pane

0x5fb6,	// (0x000080c9) scroll_pane_cp37_ParamLimits

0x5fb6,	// (0x000080c9) scroll_pane_cp37

0xc695,	// (0x0000e7a8) cell_hc_apps_pane_ParamLimits

0xc695,	// (0x0000e7a8) cell_hc_apps_pane

0xc75f,	// (0x0000e872) cell_hc_apps_pane_g1_ParamLimits

0xc75f,	// (0x0000e872) cell_hc_apps_pane_g1

0x60ab,	// (0x000081be) cell_hc_apps_pane_g2_ParamLimits

0x60ab,	// (0x000081be) cell_hc_apps_pane_g2

0x60c7,	// (0x000081da) cell_hc_apps_pane_g3_ParamLimits

0x60c7,	// (0x000081da) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x00011dea) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x00011dea) cell_hc_apps_pane_g

0xc78c,	// (0x0000e89f) cell_hc_apps_pane_t1_ParamLimits

0xc78c,	// (0x0000e89f) cell_hc_apps_pane_t1

0xe5f7,	// (0x0001070a) grid_highlight_pane_cp10_ParamLimits

0xe5f7,	// (0x0001070a) grid_highlight_pane_cp10

0xc7cc,	// (0x0000e8df) list_single_hc_apps_pane_ParamLimits

0xc7cc,	// (0x0000e8df) list_single_hc_apps_pane

0xc806,	// (0x0000e919) list_single_hc_apps_pane_g1

0xc81f,	// (0x0000e932) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x00011df1) list_single_hc_apps_pane_g

0xc838,	// (0x0000e94b) list_single_hc_apps_pane_g2_copy1

0xc854,	// (0x0000e967) list_single_hc_apps_pane_t1

0xe421,	// (0x00010534) bg_set_opt_pane_cp_ParamLimits

0xe42f,	// (0x00010542) setting_slider_pane_t1_ParamLimits

0xe448,	// (0x0001055b) setting_slider_pane_t2_ParamLimits

0xe462,	// (0x00010575) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00011671) setting_slider_pane_t_ParamLimits

0xe47a,	// (0x0001058d) slider_set_pane_ParamLimits

0x0944,	// (0x00002a57) control_pane_g5_ParamLimits

0x0944,	// (0x00002a57) control_pane_g5

0x2e36,	// (0x00004f49) slider_set_pane_g1_ParamLimits

0x2e43,	// (0x00004f56) slider_set_pane_g2_ParamLimits

0x2e4f,	// (0x00004f62) slider_set_pane_g3_ParamLimits

0x2e63,	// (0x00004f76) slider_set_pane_g4_ParamLimits

0x2e7b,	// (0x00004f8e) slider_set_pane_g5_ParamLimits

0x2e4f,	// (0x00004f62) slider_set_pane_g6_ParamLimits

0x2e91,	// (0x00004fa4) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00011a66) slider_set_pane_g_ParamLimits

0x03e5,	// (0x000024f8) navi_icon_text_pane_ParamLimits

0xb440,	// (0x0000d553) aid_fill_nsta_2_ParamLimits

0xb479,	// (0x0000d58c) aid_touch_tab_arrow_left_ParamLimits

0xb48f,	// (0x0000d5a2) aid_touch_tab_arrow_right_ParamLimits

0xb52a,	// (0x0000d63d) clock_nsta_pane_ParamLimits

0xbb96,	// (0x0000dca9) navi_icon_pane_g1_ParamLimits

0xbba2,	// (0x0000dcb5) navi_text_pane_t1_ParamLimits

0xc009,	// (0x0000e11c) navi_icon_text_pane_g1_ParamLimits

0xc015,	// (0x0000e128) navi_icon_text_pane_t1_ParamLimits

0xc806,	// (0x0000e919) list_single_hc_apps_pane_g1_ParamLimits

0xc81f,	// (0x0000e932) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x00011df1) list_single_hc_apps_pane_g_ParamLimits

0xc838,	// (0x0000e94b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc854,	// (0x0000e967) list_single_hc_apps_pane_t1_ParamLimits

0x9c7b,	// (0x0000bd8e) popup_toolbar2_fixed_window_ParamLimits

0x9c7b,	// (0x0000bd8e) popup_toolbar2_fixed_window

0xb3a5,	// (0x0000d4b8) popup_toolbar2_float_window

0xe1e4,	// (0x000102f7) bg_popup_sub_pane_cp27

0x61e4,	// (0x000082f7) grid_toolbar2_float_pane

0xe1e4,	// (0x000102f7) bg_popup_sub_pane_cp26

0x61e4,	// (0x000082f7) grid_toolbar2_fixed_pane

0xc882,	// (0x0000e995) cell_toolbar2_fixed_pane_ParamLimits

0xc882,	// (0x0000e995) cell_toolbar2_fixed_pane

0xc89c,	// (0x0000e9af) cell_toolbar2_fixed_pane_g1

0x6205,	// (0x00008318) toolbar2_fixed_button_pane

0x16ca,	// (0x000037dd) toolbar2_fixed_button_pane_g1

0x16d2,	// (0x000037e5) toolbar2_fixed_button_pane_g2

0x16da,	// (0x000037ed) toolbar2_fixed_button_pane_g3

0x16e2,	// (0x000037f5) toolbar2_fixed_button_pane_g4

0x16ea,	// (0x000037fd) toolbar2_fixed_button_pane_g5

0x16f2,	// (0x00003805) toolbar2_fixed_button_pane_g6

0x16fa,	// (0x0000380d) toolbar2_fixed_button_pane_g7

0x1702,	// (0x00003815) toolbar2_fixed_button_pane_g8

0x170a,	// (0x0000381d) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00011968) toolbar2_fixed_button_pane_g

0x620d,	// (0x00008320) cell_toolbar2_float_pane_ParamLimits

0x620d,	// (0x00008320) cell_toolbar2_float_pane

0x621e,	// (0x00008331) cell_toolbar2_float_pane_g1

0x6205,	// (0x00008318) toolbar2_fixed_button_pane_cp

0xc180,	// (0x0000e293) fep_vkb_accented_list_pane_ParamLimits

0xc180,	// (0x0000e293) fep_vkb_accented_list_pane

0x4e27,	// (0x00006f3a) bg_popup_fep_shadow_pane_g9

0x055d,	// (0x00002670) bg_popup_fep_shadow_pane_cp3

0xed2a,	// (0x00010e3d) list_accented_list_pane

0x6227,	// (0x0000833a) list_single_accented_list_pane_ParamLimits

0x6227,	// (0x0000833a) list_single_accented_list_pane

0x055d,	// (0x00002670) list_highlight_pane_cp10

0x6238,	// (0x0000834b) list_single_accented_list_pane_t1

0xb2c3,	// (0x0000d3d6) popup_slider_window_ParamLimits

0xb2c3,	// (0x0000d3d6) popup_slider_window

0x5d16,	// (0x00007e29) aid_indentation_list_msg

0xc99f,	// (0x0000eab2) bg_popup_window_pane_cp19

0x6374,	// (0x00008487) popup_slider_window_g1

0x6390,	// (0x000084a3) popup_slider_window_g2

0x63ac,	// (0x000084bf) popup_slider_window_g3

0x0005,

0xfce3,	// (0x00011df6) popup_slider_window_g

0x6412,	// (0x00008525) popup_slider_window_t1

0x6486,	// (0x00008599) small_volume_slider_vertical_pane

0x4629,	// (0x0000673c) small_volume_slider_vertical_pane_g1

0x4629,	// (0x0000673c) small_volume_slider_vertical_pane_g2

0x64a2,	// (0x000085b5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x00011e08) small_volume_slider_vertical_pane_g

0x9be5,	// (0x0000bcf8) area_side_right_pane_ParamLimits

0x9be5,	// (0x0000bcf8) area_side_right_pane

0xca57,	// (0x0000eb6a) aid_size_side_button_ParamLimits

0xca57,	// (0x0000eb6a) aid_size_side_button

0xca70,	// (0x0000eb83) grid_sctrl_middle_pane_ParamLimits

0xca70,	// (0x0000eb83) grid_sctrl_middle_pane

0x64de,	// (0x000085f1) sctrl_sk_bottom_pane

0x64ef,	// (0x00008602) sctrl_sk_top_pane

0x6501,	// (0x00008614) aid_touch_sctrl_top

0xe5f7,	// (0x0001070a) bg_sctrl_sk_pane_ParamLimits

0xe5f7,	// (0x0001070a) bg_sctrl_sk_pane

0x650e,	// (0x00008621) sctrl_sk_top_pane_g1

0x651b,	// (0x0000862e) sctrl_sk_top_pane_t1

0x6501,	// (0x00008614) aid_touch_sctrl_bottom

0xe5f7,	// (0x0001070a) bg_sctrl_sk_pane_cp_ParamLimits

0xe5f7,	// (0x0001070a) bg_sctrl_sk_pane_cp

0x6536,	// (0x00008649) sctrl_sk_bottom_pane_g1

0x651b,	// (0x0000862e) sctrl_sk_bottom_pane_t1

0xca8a,	// (0x0000eb9d) cell_sctrl_middle_pane_ParamLimits

0xca8a,	// (0x0000eb9d) cell_sctrl_middle_pane

0xca9d,	// (0x0000ebb0) aid_touch_sctrl_middle_ParamLimits

0xca9d,	// (0x0000ebb0) aid_touch_sctrl_middle

0xcaaa,	// (0x0000ebbd) bg_sctrl_middle_pane_ParamLimits

0xcaaa,	// (0x0000ebbd) bg_sctrl_middle_pane

0x6600,	// (0x00008713) cell_sctrl_middle_pane_g1_ParamLimits

0x6600,	// (0x00008713) cell_sctrl_middle_pane_g1

0xcab8,	// (0x0000ebcb) cell_sctrl_middle_pane_g2_ParamLimits

0xcab8,	// (0x0000ebcb) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x00011e14) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x00011e14) cell_sctrl_middle_pane_g

0x16ca,	// (0x000037dd) bg_sctrl_middle_pane_g1

0x16d2,	// (0x000037e5) bg_sctrl_middle_pane_g2

0x16da,	// (0x000037ed) bg_sctrl_middle_pane_g3

0x16e2,	// (0x000037f5) bg_sctrl_middle_pane_g4

0x16ea,	// (0x000037fd) bg_sctrl_middle_pane_g5

0x16f2,	// (0x00003805) bg_sctrl_middle_pane_g6

0x16fa,	// (0x0000380d) bg_sctrl_middle_pane_g7

0x1702,	// (0x00003815) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x00011e19) bg_sctrl_middle_pane_g

0x170a,	// (0x0000381d) bg_sctrl_middle_pane_g8_copy1

0x16ca,	// (0x000037dd) bg_sctrl_sk_pane_g1

0x16d2,	// (0x000037e5) bg_sctrl_sk_pane_g2

0x16da,	// (0x000037ed) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00011968) bg_sctrl_sk_pane_g

0xea3b,	// (0x00010b4e) aid_size_touch_scroll_bar

0x16e2,	// (0x000037f5) bg_sctrl_sk_pane_g4

0x16ea,	// (0x000037fd) bg_sctrl_sk_pane_g5

0x16f2,	// (0x00003805) bg_sctrl_sk_pane_g6

0x16fa,	// (0x0000380d) bg_sctrl_sk_pane_g7

0x1702,	// (0x00003815) bg_sctrl_sk_pane_g8

0x170a,	// (0x0000381d) bg_sctrl_sk_pane_g9

0x0ba7,	// (0x00002cba) popup_fep_china_hwr2_fs_candidate_window

0xad7b,	// (0x0000ce8e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xad7b,	// (0x0000ce8e) popup_fep_china_hwr2_fs_control_window

0x4ab6,	// (0x00006bc9) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x00011e0f) sctrl_sk_top_pane_g

0xcac4,	// (0x0000ebd7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcac4,	// (0x0000ebd7) aid_fep_china_hwr2_fs_cell

0xcada,	// (0x0000ebed) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcada,	// (0x0000ebed) bg_popup_fep_shadow_pane_cp4

0xcaf1,	// (0x0000ec04) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcaf1,	// (0x0000ec04) bg_popup_fep_shadow_pane_cp5

0xcb03,	// (0x0000ec16) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcb03,	// (0x0000ec16) popup_fep_china_hwr2_fs_control_bar_grid

0xcb17,	// (0x0000ec2a) popup_fep_china_hwr2_fs_control_funtion_grid

0x65d4,	// (0x000086e7) aid_fep_china_hwr2_fs_candi_cell

0xe1e4,	// (0x000102f7) bg_popup_fep_shadow_pane_cp6

0x65de,	// (0x000086f1) popup_fep_china_hwr2_fs_candidate_grid

0xcb1f,	// (0x0000ec32) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcb1f,	// (0x0000ec32) cell_fep_china_hwr2_fs_funtion_grid

0x4629,	// (0x0000673c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6600,	// (0x00008713) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6600,	// (0x00008713) cell_fep_china_hwr2_fs_funtion_grid_g1

0x660e,	// (0x00008721) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x660e,	// (0x00008721) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x00011e2a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x00011e2a) cell_fep_china_hwr2_fs_funtion_grid_g

0xcb37,	// (0x0000ec4a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcb37,	// (0x0000ec4a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcb4c,	// (0x0000ec5f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcb4c,	// (0x0000ec5f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x00011e2f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x00011e2f) cell_fep_china_hwr2_fs_funtion_grid_t

0x6655,	// (0x00008768) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x665d,	// (0x00008770) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6665,	// (0x00008778) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x00011e34) popup_fep_china_hwr2_fs_control_bar_grid_g

0x666d,	// (0x00008780) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x666d,	// (0x00008780) cell_fep_china_hwr2_fs_candidate_grid

0x668c,	// (0x0000879f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6694,	// (0x000087a7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4629,	// (0x0000673c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4629,	// (0x0000673c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x00011c54) cell_fep_china_hwr2_fs_candidate_grid_g

0x669c,	// (0x000087af) cell_fep_china_hwr2_fs_candidate_grid_t1

0x120c,	// (0x0000331f) clock_nsta_pane_cp_24_ParamLimits

0x120c,	// (0x0000331f) clock_nsta_pane_cp_24

0x128c,	// (0x0000339f) indicator_nsta_pane_cp_24_ParamLimits

0x128c,	// (0x0000339f) indicator_nsta_pane_cp_24

0x26ea,	// (0x000047fd) heading_pane_g1

0x0001,

0xf8ba,	// (0x000119cd) heading_pane_g

0x3317,	// (0x0000542a) grid_sct_catagory_button_pane

0x3349,	// (0x0000545c) scroll_pane_cp5_ParamLimits

0x4236,	// (0x00006349) button_value_adjust_pane_cp5_ParamLimits

0x4236,	// (0x00006349) button_value_adjust_pane_cp5

0x433c,	// (0x0000644f) form2_midp_time_pane_ParamLimits

0x66aa,	// (0x000087bd) cell_sct_catagory_button_pane_ParamLimits

0x66aa,	// (0x000087bd) cell_sct_catagory_button_pane

0x45ee,	// (0x00006701) bg_button_pane_cp01_ParamLimits

0x45ee,	// (0x00006701) bg_button_pane_cp01

0x4629,	// (0x0000673c) cell_sct_catagory_button_pane_g1

0xb342,	// (0x0000d455) popup_tb_extension_window

0xcb68,	// (0x0000ec7b) aid_size_cell_ext_ParamLimits

0xcb68,	// (0x0000ec7b) aid_size_cell_ext

0xe87d,	// (0x00010990) bg_tb_trans_pane_cp1_ParamLimits

0xe87d,	// (0x00010990) bg_tb_trans_pane_cp1

0xcb8e,	// (0x0000eca1) grid_tb_ext_pane_ParamLimits

0xcb8e,	// (0x0000eca1) grid_tb_ext_pane

0xcbcb,	// (0x0000ecde) cell_tb_ext_pane_ParamLimits

0xcbcb,	// (0x0000ecde) cell_tb_ext_pane

0xcbf3,	// (0x0000ed06) cell_tb_ext_pane_g1_ParamLimits

0xcbf3,	// (0x0000ed06) cell_tb_ext_pane_g1

0x673e,	// (0x00008851) cell_tb_ext_pane_t1

0xe5f7,	// (0x0001070a) list_highlight_pane_cp11_ParamLimits

0xe5f7,	// (0x0001070a) list_highlight_pane_cp11

0x9c90,	// (0x0000bda3) popup_uni_indicator_window_ParamLimits

0x9c90,	// (0x0000bda3) popup_uni_indicator_window

0xeb7c,	// (0x00010c8f) bg_popup_sub_pane_cp14

0x6759,	// (0x0000886c) list_uniindi_pane

0x6765,	// (0x00008878) uniindi_top_pane

0xe5f7,	// (0x0001070a) bg_uniindi_top_pane

0x6786,	// (0x00008899) uniindi_top_pane_g1

0x679c,	// (0x000088af) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x00011e3b) uniindi_top_pane_g

0x67c6,	// (0x000088d9) uniindi_top_pane_t1

0x67f2,	// (0x00008905) list_single_uniindi_pane_ParamLimits

0x67f2,	// (0x00008905) list_single_uniindi_pane

0x4629,	// (0x0000673c) bg_uniindi_top_pane_g1

0x6804,	// (0x00008917) list_single_uniindi_pane_g1

0x6817,	// (0x0000892a) list_single_uniindi_pane_t1

0xe1e4,	// (0x000102f7) control_bg_pane

0x683c,	// (0x0000894f) bg_sctrl_sk_pane_cp1

0x6845,	// (0x00008958) bg_sctrl_sk_pane_cp2

0x684e,	// (0x00008961) control_bg_pane_g1

0x6857,	// (0x0000896a) control_bg_pane_g2

0x0001,

0xfd31,	// (0x00011e44) control_bg_pane_g

0x402e,	// (0x00006141) cell_indicator_nsta_pane_g1_ParamLimits

0xbf6b,	// (0x0000e07e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00011bb8) cell_indicator_nsta_pane_g_ParamLimits

0x43c9,	// (0x000064dc) form2_midp_time_pane_t1_ParamLimits

0x4672,	// (0x00006785) main_idle_act4_pane_ParamLimits

0x4672,	// (0x00006785) main_idle_act4_pane

0xb342,	// (0x0000d455) popup_tb_extension_window_ParamLimits

0xcbb3,	// (0x0000ecc6) tb_ext_find_pane_ParamLimits

0xcbb3,	// (0x0000ecc6) tb_ext_find_pane

0x6860,	// (0x00008973) ai_gene_pane_1_cp1

0x06a7,	// (0x000027ba) ai_gene_pane_2_cp1

0x6868,	// (0x0000897b) list_single_idle_plugin_calendar_pane

0x6871,	// (0x00008984) list_single_idle_plugin_notification_pane

0x687a,	// (0x0000898d) list_single_idle_plugin_player_pane

0xcc10,	// (0x0000ed23) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcc10,	// (0x0000ed23) list_single_idle_plugin_shortcut_pane

0xcc38,	// (0x0000ed4b) main_idle_act4_pane_t1

0xcc50,	// (0x0000ed63) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x00011e49) main_idle_act4_pane_t

0xcc68,	// (0x0000ed7b) middle_sk_idle_act4_pane_ParamLimits

0xcc68,	// (0x0000ed7b) middle_sk_idle_act4_pane

0xcc84,	// (0x0000ed97) popup_clock_digital_analogue_window_cp2

0xccab,	// (0x0000edbe) shortcut_wheel_idle_act4_pane_ParamLimits

0xccab,	// (0x0000edbe) shortcut_wheel_idle_act4_pane

0x4629,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g1

0x4629,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g2

0x4629,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g3

0x4629,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g4

0x4629,	// (0x0000673c) shortcut_wheel_idle_act4_pane_g5

0x690d,	// (0x00008a20) shortcut_wheel_idle_act4_pane_g6

0x6915,	// (0x00008a28) shortcut_wheel_idle_act4_pane_g7

0x691d,	// (0x00008a30) shortcut_wheel_idle_act4_pane_g8

0x6925,	// (0x00008a38) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x00011e4e) shortcut_wheel_idle_act4_pane_g

0x4729,	// (0x0000683c) middle_sk_idle_act4_pane_g1_ParamLimits

0x4729,	// (0x0000683c) middle_sk_idle_act4_pane_g1

0xcd28,	// (0x0000ee3b) middle_sk_idle_act4_pane_g2_ParamLimits

0xcd28,	// (0x0000ee3b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x00011e71) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x00011e71) middle_sk_idle_act4_pane_g

0xcd40,	// (0x0000ee53) middle_sk_idle_act4_pane_t1_ParamLimits

0xcd40,	// (0x0000ee53) middle_sk_idle_act4_pane_t1

0xcd6f,	// (0x0000ee82) grid_ai_shortcut_pane_ParamLimits

0xcd6f,	// (0x0000ee82) grid_ai_shortcut_pane

0xcd8c,	// (0x0000ee9f) list_highlight_pane_cp16_ParamLimits

0xcd8c,	// (0x0000ee9f) list_highlight_pane_cp16

0xcd99,	// (0x0000eeac) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcd99,	// (0x0000eeac) list_single_idle_plugin_shortcut_pane_g1

0xcda5,	// (0x0000eeb8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcda5,	// (0x0000eeb8) list_single_idle_plugin_shortcut_pane_g2

0xcdc3,	// (0x0000eed6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcdc3,	// (0x0000eed6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x00011e76) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x00011e76) list_single_idle_plugin_shortcut_pane_g

0xcdd8,	// (0x0000eeeb) cell_ai_shortcut_pane_ParamLimits

0xcdd8,	// (0x0000eeeb) cell_ai_shortcut_pane

0xcdee,	// (0x0000ef01) cell_ai_shortcut_pane_g1_ParamLimits

0xcdee,	// (0x0000ef01) cell_ai_shortcut_pane_g1

0x6860,	// (0x00008973) ai_gene_pane_1_cp2

0x6a56,	// (0x00008b69) ai_gene_pane_2_cp2

0x6a5e,	// (0x00008b71) list_highlight_pane_cp15

0x6a67,	// (0x00008b7a) list_single_idle_plugin_calendar_pane_g1

0x6a5e,	// (0x00008b71) list_highlight_pane_cp17

0x6a6f,	// (0x00008b82) list_single_idle_plugin_calendar_pane_g1_copy1

0x6a77,	// (0x00008b8a) list_single_idle_plugin_player_pane_g1

0x3636,	// (0x00005749) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x00011e7d) list_single_idle_plugin_player_pane_g

0x6a7f,	// (0x00008b92) list_single_idle_plugin_player_pane_t1

0x6a8d,	// (0x00008ba0) list_single_idle_plugin_player_pane_t2

0x6a9b,	// (0x00008bae) list_single_idle_plugin_player_pane_t3

0x6aa9,	// (0x00008bbc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x00011e82) list_single_idle_plugin_player_pane_t

0x6ab7,	// (0x00008bca) wait_bar_pane_cp15

0x6abf,	// (0x00008bd2) grid_ai_notification_pane

0x3636,	// (0x00005749) list_single_idle_plugin_notification_pane_g1

0xce10,	// (0x0000ef23) cell_ai_notification_pane_ParamLimits

0xce10,	// (0x0000ef23) cell_ai_notification_pane

0x6ad5,	// (0x00008be8) cell_ai_notification_pane_g1

0x6add,	// (0x00008bf0) cell_ai_notification_pane_t1

0xce1d,	// (0x0000ef30) tb_ext_find_button_pane

0xce25,	// (0x0000ef38) tb_ext_find_pane_g1

0xce2d,	// (0x0000ef40) tb_ext_find_pane_t1

0xf2b1,	// (0x000113c4) tb_ext_find_button_pane_g1

0x6b09,	// (0x00008c1c) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x00011e8b) tb_ext_find_button_pane_g

0xcc38,	// (0x0000ed4b) main_idle_act4_pane_t1_ParamLimits

0xcc50,	// (0x0000ed63) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x00011e49) main_idle_act4_pane_t_ParamLimits

0xcc84,	// (0x0000ed97) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcc9b,	// (0x0000edae) sat_plugin_idle_act4_pane_ParamLimits

0xcc9b,	// (0x0000edae) sat_plugin_idle_act4_pane

0xce3b,	// (0x0000ef4e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xce3b,	// (0x0000ef4e) sat_plugin_idle_act4_pane_t1

0xce53,	// (0x0000ef66) sat_plugin_idle_act4_pane_t2_ParamLimits

0xce53,	// (0x0000ef66) sat_plugin_idle_act4_pane_t2

0xce6b,	// (0x0000ef7e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xce6b,	// (0x0000ef7e) sat_plugin_idle_act4_pane_t3

0xce83,	// (0x0000ef96) sat_plugin_idle_act4_pane_t4_ParamLimits

0xce83,	// (0x0000ef96) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x00011e90) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x00011e90) sat_plugin_idle_act4_pane_t

0xe371,	// (0x00010484) popup_battery_window_ParamLimits

0xe371,	// (0x00010484) popup_battery_window

0xe5f7,	// (0x0001070a) bg_popup_sub_pane_cp25_ParamLimits

0xe5f7,	// (0x0001070a) bg_popup_sub_pane_cp25

0x6b5e,	// (0x00008c71) popup_battery_window_g1_ParamLimits

0x6b5e,	// (0x00008c71) popup_battery_window_g1

0x6b6a,	// (0x00008c7d) popup_battery_window_t1_ParamLimits

0x6b6a,	// (0x00008c7d) popup_battery_window_t1

0x6b7c,	// (0x00008c8f) popup_battery_window_t2_ParamLimits

0x6b7c,	// (0x00008c8f) popup_battery_window_t2

0x0001,

0xfd86,	// (0x00011e99) popup_battery_window_t_ParamLimits

0xfd86,	// (0x00011e99) popup_battery_window_t

0xa9e8,	// (0x0000cafb) midp_canvas_pane_ParamLimits

0xaa44,	// (0x0000cb57) midp_keypad_pane_ParamLimits

0xaa44,	// (0x0000cb57) midp_keypad_pane

0x0abb,	// (0x00002bce) main_midp_pane_ParamLimits

0x4098,	// (0x000061ab) signal_pane_g2_cp_ParamLimits

0xce9b,	// (0x0000efae) aid_size_cell_midp_keypad_ParamLimits

0xce9b,	// (0x0000efae) aid_size_cell_midp_keypad

0xceb9,	// (0x0000efcc) midp_keyp_game_grid_pane_ParamLimits

0xceb9,	// (0x0000efcc) midp_keyp_game_grid_pane

0xcee0,	// (0x0000eff3) midp_keyp_rocker_pane_ParamLimits

0xcee0,	// (0x0000eff3) midp_keyp_rocker_pane

0xcf2f,	// (0x0000f042) midp_keyp_sk_left_pane_ParamLimits

0xcf2f,	// (0x0000f042) midp_keyp_sk_left_pane

0xcf85,	// (0x0000f098) midp_keyp_sk_right_pane_ParamLimits

0xcf85,	// (0x0000f098) midp_keyp_sk_right_pane

0xe1e4,	// (0x000102f7) bg_button_pane_cp03

0xcfdb,	// (0x0000f0ee) midp_keyp_sk_left_pane_g1

0xe1e4,	// (0x000102f7) bg_button_pane_cp04

0xcfdb,	// (0x0000f0ee) midp_keyp_sk_right_pane_g1

0x4629,	// (0x0000673c) midp_keyp_rocker_pane_g1

0xcfe3,	// (0x0000f0f6) keyp_game_cell_pane_ParamLimits

0xcfe3,	// (0x0000f0f6) keyp_game_cell_pane

0xe1e4,	// (0x000102f7) bg_button_pane_cp02

0xd009,	// (0x0000f11c) keyp_game_cell_pane_g1

0x9c27,	// (0x0000bd3a) popup_fep_vkb2_window_ParamLimits

0x9c27,	// (0x0000bd3a) popup_fep_vkb2_window

0xd012,	// (0x0000f125) aid_size_cell_vkb2_ParamLimits

0xd012,	// (0x0000f125) aid_size_cell_vkb2

0xd048,	// (0x0000f15b) popup_fep_vkb2_window_g1_ParamLimits

0xd048,	// (0x0000f15b) popup_fep_vkb2_window_g1

0xd098,	// (0x0000f1ab) vkb2_area_bottom_pane_ParamLimits

0xd098,	// (0x0000f1ab) vkb2_area_bottom_pane

0xd0f4,	// (0x0000f207) vkb2_area_keypad_pane_ParamLimits

0xd0f4,	// (0x0000f207) vkb2_area_keypad_pane

0xd142,	// (0x0000f255) vkb2_area_top_pane_ParamLimits

0xd142,	// (0x0000f255) vkb2_area_top_pane

0xd1c8,	// (0x0000f2db) vkb2_top_entry_pane_ParamLimits

0xd1c8,	// (0x0000f2db) vkb2_top_entry_pane

0xd1f5,	// (0x0000f308) vkb2_top_grid_left_pane_ParamLimits

0xd1f5,	// (0x0000f308) vkb2_top_grid_left_pane

0xd215,	// (0x0000f328) vkb2_top_grid_right_pane_ParamLimits

0xd215,	// (0x0000f328) vkb2_top_grid_right_pane

0x6f02,	// (0x00009015) vkb2_cell_keypad_pane_ParamLimits

0x6f02,	// (0x00009015) vkb2_cell_keypad_pane

0xd25b,	// (0x0000f36e) vkb2_area_bottom_grid_pane_ParamLimits

0xd25b,	// (0x0000f36e) vkb2_area_bottom_grid_pane

0xd285,	// (0x0000f398) vkb2_area_bottom_pane_g1_ParamLimits

0xd285,	// (0x0000f398) vkb2_area_bottom_pane_g1

0xd2ab,	// (0x0000f3be) vkb2_area_bottom_pane_g2_ParamLimits

0xd2ab,	// (0x0000f3be) vkb2_area_bottom_pane_g2

0xd2dc,	// (0x0000f3ef) vkb2_area_bottom_pane_g3_ParamLimits

0xd2dc,	// (0x0000f3ef) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x00011e9e) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x00011e9e) vkb2_area_bottom_pane_g

0x70ac,	// (0x000091bf) vkb2_top_cell_left_pane_ParamLimits

0x70ac,	// (0x000091bf) vkb2_top_cell_left_pane

0xd346,	// (0x0000f459) vkb2_top_entry_pane_g1_ParamLimits

0xd346,	// (0x0000f459) vkb2_top_entry_pane_g1

0xd354,	// (0x0000f467) vkb2_top_entry_pane_t1_ParamLimits

0xd354,	// (0x0000f467) vkb2_top_entry_pane_t1

0x7114,	// (0x00009227) vkb2_top_entry_pane_t2_ParamLimits

0x7114,	// (0x00009227) vkb2_top_entry_pane_t2

0x7146,	// (0x00009259) vkb2_top_entry_pane_t3_ParamLimits

0x7146,	// (0x00009259) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x00011ea5) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x00011ea5) vkb2_top_entry_pane_t

0xd38d,	// (0x0000f4a0) vkb2_top_grid_right_pane_g1_ParamLimits

0xd38d,	// (0x0000f4a0) vkb2_top_grid_right_pane_g1

0x71ad,	// (0x000092c0) vkb2_top_grid_right_pane_g2_ParamLimits

0x71ad,	// (0x000092c0) vkb2_top_grid_right_pane_g2

0x71c5,	// (0x000092d8) vkb2_top_grid_right_pane_g3_ParamLimits

0x71c5,	// (0x000092d8) vkb2_top_grid_right_pane_g3

0xd3a3,	// (0x0000f4b6) vkb2_top_grid_right_pane_g4_ParamLimits

0xd3a3,	// (0x0000f4b6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x00011eac) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x00011eac) vkb2_top_grid_right_pane_g

0x71f3,	// (0x00009306) vkb2_top_cell_left_pane_g1

0x720a,	// (0x0000931d) vkb2_cell_keypad_pane_g1_ParamLimits

0x720a,	// (0x0000931d) vkb2_cell_keypad_pane_g1

0x7218,	// (0x0000932b) vkb2_cell_keypad_pane_t1_ParamLimits

0x7218,	// (0x0000932b) vkb2_cell_keypad_pane_t1

0x722f,	// (0x00009342) vkb2_cell_bottom_grid_pane_ParamLimits

0x722f,	// (0x00009342) vkb2_cell_bottom_grid_pane

0x7268,	// (0x0000937b) vkb2_cell_bottom_grid_pane_g1

0xcccc,	// (0x0000eddf) aid_call2_pane_cp02

0xccd4,	// (0x0000ede7) aid_call_pane_cp02

0xccdc,	// (0x0000edef) clock_digital_number_pane_cp10

0xcce4,	// (0x0000edf7) clock_digital_number_pane_cp11

0xccec,	// (0x0000edff) clock_digital_number_pane_cp12

0xccf4,	// (0x0000ee07) clock_digital_number_pane_cp13

0xccfc,	// (0x0000ee0f) clock_digital_separator_pane_cp10

0xf2b1,	// (0x000113c4) popup_clock_digital_analogue_window_cp2_g1

0xf2b1,	// (0x000113c4) popup_clock_digital_analogue_window_cp2_g2

0xcd04,	// (0x0000ee17) popup_clock_digital_analogue_window_cp2_g3

0xf2b1,	// (0x000113c4) popup_clock_digital_analogue_window_cp2_g4

0xcd04,	// (0x0000ee17) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x00011e61) popup_clock_digital_analogue_window_cp2_g

0xcd0c,	// (0x0000ee1f) popup_clock_digital_analogue_window_cp2_t1

0xcd1a,	// (0x0000ee2d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x00011e6c) popup_clock_digital_analogue_window_cp2_t

0x4629,	// (0x0000673c) clock_digital_number_pane_cp10_g1

0x4629,	// (0x0000673c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x00011c54) clock_digital_number_pane_cp10_g

0x4629,	// (0x0000673c) clock_digital_separator_pane_cp10_g1

0x4629,	// (0x0000673c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x00011c54) clock_digital_separator_pane_cp10_g

0x67a8,	// (0x000088bb) uniindi_top_pane_g3

0x67b9,	// (0x000088cc) uniindi_top_pane_g4

0x6f8d,	// (0x000090a0) vkb2_row_keypad_pane_ParamLimits

0x6f8d,	// (0x000090a0) vkb2_row_keypad_pane

0x7284,	// (0x00009397) vkb2_cell_t_keypad_pane_ParamLimits

0x7284,	// (0x00009397) vkb2_cell_t_keypad_pane

0x7294,	// (0x000093a7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7294,	// (0x000093a7) vkb2_cell_t_keypad_pane_cp08

0x72a9,	// (0x000093bc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x72a9,	// (0x000093bc) vkb2_cell_t_keypad_pane_cp09

0x72bd,	// (0x000093d0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x72bd,	// (0x000093d0) vkb2_cell_t_keypad_pane_cp01

0x72ce,	// (0x000093e1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x72ce,	// (0x000093e1) vkb2_cell_t_keypad_pane_cp02

0x72df,	// (0x000093f2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x72df,	// (0x000093f2) vkb2_cell_t_keypad_pane_cp03

0x72f0,	// (0x00009403) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x72f0,	// (0x00009403) vkb2_cell_t_keypad_pane_cp04

0x7301,	// (0x00009414) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7301,	// (0x00009414) vkb2_cell_t_keypad_pane_cp05

0x7312,	// (0x00009425) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7312,	// (0x00009425) vkb2_cell_t_keypad_pane_cp06

0x7325,	// (0x00009438) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7325,	// (0x00009438) vkb2_cell_t_keypad_pane_cp07

0x733a,	// (0x0000944d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x733a,	// (0x0000944d) vkb2_cell_t_keypad_pane_cp10

0x4ab6,	// (0x00006bc9) vkb2_cell_t_keypad_pane_g1

0x734f,	// (0x00009462) vkb2_cell_t_keypad_pane_t1

0xe1e4,	// (0x000102f7) popup_grid_graphic2_window

0xd3b9,	// (0x0000f4cc) aid_size_cell_graphic2_ParamLimits

0xd3b9,	// (0x0000f4cc) aid_size_cell_graphic2

0xd3f7,	// (0x0000f50a) bg_popup_window_pane_cp21_ParamLimits

0xd3f7,	// (0x0000f50a) bg_popup_window_pane_cp21

0xd405,	// (0x0000f518) graphic2_pages_pane_ParamLimits

0xd405,	// (0x0000f518) graphic2_pages_pane

0xd45d,	// (0x0000f570) grid_graphic2_control_pane_ParamLimits

0xd45d,	// (0x0000f570) grid_graphic2_control_pane

0xd4a5,	// (0x0000f5b8) grid_graphic2_pane_ParamLimits

0xd4a5,	// (0x0000f5b8) grid_graphic2_pane

0xd530,	// (0x0000f643) cell_graphic2_pane

0xe1e4,	// (0x000102f7) main_comp_mode_pane

0x5ed9,	// (0x00007fec) list_ai3_gene_pane_ParamLimits

0xc99f,	// (0x0000eab2) bg_popup_window_pane_cp19_ParamLimits

0x6314,	// (0x00008427) bg_touch_area_indi_pane_ParamLimits

0x6314,	// (0x00008427) bg_touch_area_indi_pane

0x632a,	// (0x0000843d) bg_touch_area_indi_pane_cp01_ParamLimits

0x632a,	// (0x0000843d) bg_touch_area_indi_pane_cp01

0x6340,	// (0x00008453) bg_touch_area_indi_pane_cp02_ParamLimits

0x6340,	// (0x00008453) bg_touch_area_indi_pane_cp02

0x635a,	// (0x0000846d) bg_touch_area_indi_pane_cp03_ParamLimits

0x635a,	// (0x0000846d) bg_touch_area_indi_pane_cp03

0x6374,	// (0x00008487) popup_slider_window_g1_ParamLimits

0x6390,	// (0x000084a3) popup_slider_window_g2_ParamLimits

0x63ac,	// (0x000084bf) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x00011df6) popup_slider_window_g_ParamLimits

0x6412,	// (0x00008525) popup_slider_window_t1_ParamLimits

0x6486,	// (0x00008599) small_volume_slider_vertical_pane_ParamLimits

0xd530,	// (0x0000f643) cell_graphic2_pane_ParamLimits

0xd593,	// (0x0000f6a6) bg_button_pane_cp10_ParamLimits

0xd593,	// (0x0000f6a6) bg_button_pane_cp10

0xd5a6,	// (0x0000f6b9) bg_button_pane_cp11_ParamLimits

0xd5a6,	// (0x0000f6b9) bg_button_pane_cp11

0xd5b9,	// (0x0000f6cc) graphic2_pages_pane_g1_ParamLimits

0xd5b9,	// (0x0000f6cc) graphic2_pages_pane_g1

0xd5d4,	// (0x0000f6e7) graphic2_pages_pane_g2_ParamLimits

0xd5d4,	// (0x0000f6e7) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x00011eba) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x00011eba) graphic2_pages_pane_g

0xd5ec,	// (0x0000f6ff) graphic2_pages_pane_t1_ParamLimits

0xd5ec,	// (0x0000f6ff) graphic2_pages_pane_t1

0xd604,	// (0x0000f717) cell_graphic2_control_pane_ParamLimits

0xd604,	// (0x0000f717) cell_graphic2_control_pane

0xd638,	// (0x0000f74b) cell_graphic2_pane_g1_ParamLimits

0xd638,	// (0x0000f74b) cell_graphic2_pane_g1

0x48d8,	// (0x000069eb) cell_graphic2_pane_g2_ParamLimits

0x48d8,	// (0x000069eb) cell_graphic2_pane_g2

0xd645,	// (0x0000f758) cell_graphic2_pane_g3_ParamLimits

0xd645,	// (0x0000f758) cell_graphic2_pane_g3

0x48e5,	// (0x000069f8) cell_graphic2_pane_g4_ParamLimits

0x48e5,	// (0x000069f8) cell_graphic2_pane_g4

0xd652,	// (0x0000f765) cell_graphic2_pane_g5_ParamLimits

0xd652,	// (0x0000f765) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x00011ebf) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x00011ebf) cell_graphic2_pane_g

0xd672,	// (0x0000f785) cell_graphic2_pane_t1_ParamLimits

0xd672,	// (0x0000f785) cell_graphic2_pane_t1

0x26de,	// (0x000047f1) grid_highlight_pane_cp11_ParamLimits

0x26de,	// (0x000047f1) grid_highlight_pane_cp11

0xe5f7,	// (0x0001070a) bg_button_pane_cp05

0xd6bb,	// (0x0000f7ce) cell_graphic2_control_pane_g1

0x4629,	// (0x0000673c) bg_touch_area_indi_pane_g1

0x7637,	// (0x0000974a) aid_cmod_rocker_key_size

0x7641,	// (0x00009754) aid_cmode_itu_key_size

0x764b,	// (0x0000975e) main_cmode_video_pane

0x7655,	// (0x00009768) main_comp_mode_itu_pane

0x7661,	// (0x00009774) main_comp_mode_rocker_pane

0x766d,	// (0x00009780) cell_cmode_rocker_pane_ParamLimits

0x766d,	// (0x00009780) cell_cmode_rocker_pane

0x7681,	// (0x00009794) cell_cmode_itu_pane_ParamLimits

0x7681,	// (0x00009794) cell_cmode_itu_pane

0xeb7c,	// (0x00010c8f) bg_button_pane_cp06_ParamLimits

0xeb7c,	// (0x00010c8f) bg_button_pane_cp06

0x4ab6,	// (0x00006bc9) cell_cmode_rocker_pane_g1_ParamLimits

0x4ab6,	// (0x00006bc9) cell_cmode_rocker_pane_g1

0x6600,	// (0x00008713) cell_cmode_rocker_pane_g2_ParamLimits

0x6600,	// (0x00008713) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x00011ecf) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x00011ecf) cell_cmode_rocker_pane_g

0xe1e4,	// (0x000102f7) bg_button_pane_cp07

0x7698,	// (0x000097ab) cell_cmode_itu_pane_g1

0x76a1,	// (0x000097b4) cell_cmode_itu_pane_t1

0x76af,	// (0x000097c2) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x00011ed4) cell_cmode_itu_pane_t

0x682c,	// (0x0000893f) aid_touch_ctrl_left

0x6834,	// (0x00008947) aid_touch_ctrl_right

0xe1e4,	// (0x000102f7) compa_mode_pane

0xd6e3,	// (0x0000f7f6) aid_cmod_rocker_key_size_cp

0xd6ed,	// (0x0000f800) aid_cmode_itu_key_size_cp

0x76d1,	// (0x000097e4) compa_mode_pane_g1

0x76d9,	// (0x000097ec) compa_mode_pane_g2

0x76e1,	// (0x000097f4) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x00011ed9) compa_mode_pane_g

0xd6f7,	// (0x0000f80a) main_comp_mode_itu_pane_cp

0xd6ff,	// (0x0000f812) main_comp_mode_rocker_pane_cp

0xd707,	// (0x0000f81a) cell_cmode_itu_pane_cp_ParamLimits

0xd707,	// (0x0000f81a) cell_cmode_itu_pane_cp

0xd71c,	// (0x0000f82f) cell_cmode_rocker_pane_cp_ParamLimits

0xd71c,	// (0x0000f82f) cell_cmode_rocker_pane_cp

0xeb7c,	// (0x00010c8f) bg_button_pane_cp06_cp_ParamLimits

0xeb7c,	// (0x00010c8f) bg_button_pane_cp06_cp

0x4ab6,	// (0x00006bc9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4ab6,	// (0x00006bc9) cell_cmode_rocker_pane_g1_cp

0x4629,	// (0x0000673c) cell_cmode_rocker_pane_g2_cp

0xe1e4,	// (0x000102f7) bg_button_pane_cp07_cp

0xd72e,	// (0x0000f841) cell_cmode_itu_pane_g1_cp

0xd737,	// (0x0000f84a) cell_cmode_itu_pane_t1_cp

0xd737,	// (0x0000f84a) cell_cmode_itu_pane_t2_cp

0xbd4e,	// (0x0000de61) settings_code_pane_cp2

0xe421,	// (0x00010534) bg_popup_window_pane_cp3_ParamLimits

0xe80b,	// (0x0001091e) heading_pane_cp3_ParamLimits

0xe817,	// (0x0001092a) listscroll_popup_graphic_pane_ParamLimits

0x4680,	// (0x00006793) fep_hwr_aid_pane_ParamLimits

0x6501,	// (0x00008614) aid_touch_sctrl_top_ParamLimits

0x650e,	// (0x00008621) sctrl_sk_top_pane_g1_ParamLimits

0x4ab6,	// (0x00006bc9) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x00011e0f) sctrl_sk_top_pane_g_ParamLimits

0x651b,	// (0x0000862e) sctrl_sk_top_pane_t1_ParamLimits

0x6501,	// (0x00008614) aid_touch_sctrl_bottom_ParamLimits

0x651b,	// (0x0000862e) sctrl_sk_bottom_pane_t1_ParamLimits

0x6772,	// (0x00008885) aid_area_touch_clock

0xd18a,	// (0x0000f29d) aid_vkb2_area_top_pane_cell_ParamLimits

0xd18a,	// (0x0000f29d) aid_vkb2_area_top_pane_cell

0xd235,	// (0x0000f348) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd235,	// (0x0000f348) aid_vkb2_area_bottom_pane_cell

0x70cc,	// (0x000091df) popup_char_count_window

0x7737,	// (0x0000984a) popup_char_count_window_g1

0x7740,	// (0x00009853) popup_char_count_window_g2

0x7749,	// (0x0000985c) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x00011ee0) popup_char_count_window_g

0x7752,	// (0x00009865) popup_char_count_window_t1

0x6d1e,	// (0x00008e31) popup_fep_char_preview_window_ParamLimits

0x6d1e,	// (0x00008e31) popup_fep_char_preview_window

0xd1aa,	// (0x0000f2bd) vkb2_top_candi_pane_ParamLimits

0xd1aa,	// (0x0000f2bd) vkb2_top_candi_pane

0xd745,	// (0x0000f858) cell_vkb2_top_candi_pane_ParamLimits

0xd745,	// (0x0000f858) cell_vkb2_top_candi_pane

0x1f0c,	// (0x0000401f) bg_popup_fep_char_preview_window_ParamLimits

0x1f0c,	// (0x0000401f) bg_popup_fep_char_preview_window

0x77b1,	// (0x000098c4) popup_fep_char_preview_window_t1_ParamLimits

0x77b1,	// (0x000098c4) popup_fep_char_preview_window_t1

0x77eb,	// (0x000098fe) bg_popup_fep_char_preview_window_g1

0x77f3,	// (0x00009906) bg_popup_fep_char_preview_window_g2

0x77fb,	// (0x0000990e) bg_popup_fep_char_preview_window_g3

0x7803,	// (0x00009916) bg_popup_fep_char_preview_window_g4

0x780b,	// (0x0000991e) bg_popup_fep_char_preview_window_g5

0x7813,	// (0x00009926) bg_popup_fep_char_preview_window_g6

0x781b,	// (0x0000992e) bg_popup_fep_char_preview_window_g7

0x7823,	// (0x00009936) bg_popup_fep_char_preview_window_g8

0x782b,	// (0x0000993e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x00011ee7) bg_popup_fep_char_preview_window_g

0x4ab6,	// (0x00006bc9) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4ab6,	// (0x00006bc9) cell_vkb2_top_candi_pane_g1

0x4e4b,	// (0x00006f5e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4e4b,	// (0x00006f5e) cell_vkb2_top_candi_pane_g2

0x4e6c,	// (0x00006f7f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4e6c,	// (0x00006f7f) cell_vkb2_top_candi_pane_g3

0x7833,	// (0x00009946) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7833,	// (0x00009946) cell_vkb2_top_candi_pane_g4

0x7854,	// (0x00009967) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7854,	// (0x00009967) cell_vkb2_top_candi_pane_g5

0x6600,	// (0x00008713) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6600,	// (0x00008713) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x00011efa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x00011efa) cell_vkb2_top_candi_pane_g

0x7875,	// (0x00009988) cell_vkb2_top_candi_pane_t1

0x2e22,	// (0x00004f35) aid_size_touch_slider_mark_ParamLimits

0x2e22,	// (0x00004f35) aid_size_touch_slider_mark

0xd441,	// (0x0000f554) grid_graphic2_catg_pane_ParamLimits

0xd441,	// (0x0000f554) grid_graphic2_catg_pane

0xd4ff,	// (0x0000f612) popup_grid_graphic2_window_t1_ParamLimits

0xd4ff,	// (0x0000f612) popup_grid_graphic2_window_t1

0xd515,	// (0x0000f628) popup_grid_graphic2_window_t2_ParamLimits

0xd515,	// (0x0000f628) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x00011eb5) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x00011eb5) popup_grid_graphic2_window_t

0xe5f7,	// (0x0001070a) bg_button_pane_cp05_ParamLimits

0xd6bb,	// (0x0000f7ce) cell_graphic2_control_pane_g1_ParamLimits

0xd7af,	// (0x0000f8c2) cell_graphic2_catg_pane_ParamLimits

0xd7af,	// (0x0000f8c2) cell_graphic2_catg_pane

0xe1e4,	// (0x000102f7) bg_button_pane_cp12

0xd7c1,	// (0x0000f8d4) cell_graphic2_catg_pane_g1

0x673e,	// (0x00008851) cell_tb_ext_pane_t1_ParamLimits

0x716a,	// (0x0000927d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x716a,	// (0x0000927d) vkb2_top_cell_right_narrow_pane

0x7182,	// (0x00009295) vkb2_top_cell_right_wide_pane_ParamLimits

0x7182,	// (0x00009295) vkb2_top_cell_right_wide_pane

0x4672,	// (0x00006785) bg_vkb2_func_pane_ParamLimits

0x4672,	// (0x00006785) bg_vkb2_func_pane

0x71f3,	// (0x00009306) vkb2_top_cell_left_pane_g1_ParamLimits

0x4672,	// (0x00006785) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4672,	// (0x00006785) bg_vkb2_fuc_pane_cp03

0x7268,	// (0x0000937b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x16d2,	// (0x000037e5) bg_vkb2_func_pane_g1

0x16da,	// (0x000037ed) bg_vkb2_func_pane_g2

0x16ea,	// (0x000037fd) bg_vkb2_func_pane_g3

0x16e2,	// (0x000037f5) bg_vkb2_func_pane_g4

0x16f2,	// (0x00003805) bg_vkb2_func_pane_g5

0x16fa,	// (0x0000380d) bg_vkb2_func_pane_g6

0x1702,	// (0x00003815) bg_vkb2_func_pane_g7

0x170a,	// (0x0000381d) bg_vkb2_func_pane_g8

0x16ca,	// (0x000037dd) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x00011f07) bg_vkb2_func_pane_g

0x4672,	// (0x00006785) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4672,	// (0x00006785) bg_vkb2_fuc_pane_cp01

0x71f3,	// (0x00009306) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x71f3,	// (0x00009306) vkb2_top_cell_right_wide_pane_g1

0x4672,	// (0x00006785) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4672,	// (0x00006785) bg_vkb2_fuc_pane_cp02

0x7268,	// (0x0000937b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7268,	// (0x0000937b) vkb2_top_cell_right_narrow_pane_g1

0xc8e1,	// (0x0000e9f4) aid_touch_area_decrease_ParamLimits

0xc8e1,	// (0x0000e9f4) aid_touch_area_decrease

0xc91b,	// (0x0000ea2e) aid_touch_area_increase_ParamLimits

0xc91b,	// (0x0000ea2e) aid_touch_area_increase

0xc943,	// (0x0000ea56) aid_touch_area_mute_ParamLimits

0xc943,	// (0x0000ea56) aid_touch_area_mute

0xc96b,	// (0x0000ea7e) aid_touch_area_slider_ParamLimits

0xc96b,	// (0x0000ea7e) aid_touch_area_slider

0xc9ab,	// (0x0000eabe) popup_slider_window_g4_ParamLimits

0xc9ab,	// (0x0000eabe) popup_slider_window_g4

0xc9d3,	// (0x0000eae6) popup_slider_window_g5_ParamLimits

0xc9d3,	// (0x0000eae6) popup_slider_window_g5

0xca07,	// (0x0000eb1a) popup_slider_window_g6_ParamLimits

0xca07,	// (0x0000eb1a) popup_slider_window_g6

0x6440,	// (0x00008553) popup_slider_window_t2_ParamLimits

0x6440,	// (0x00008553) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x00011e03) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x00011e03) popup_slider_window_t

0xca23,	// (0x0000eb36) slider_pane_ParamLimits

0xca23,	// (0x0000eb36) slider_pane

0x78ae,	// (0x000099c1) slider_pane_g1_ParamLimits

0x78ae,	// (0x000099c1) slider_pane_g1

0x78c2,	// (0x000099d5) slider_pane_g2_ParamLimits

0x78c2,	// (0x000099d5) slider_pane_g2

0x78d8,	// (0x000099eb) slider_pane_g3_ParamLimits

0x78d8,	// (0x000099eb) slider_pane_g3

0x0003,

0xfe07,	// (0x00011f1a) slider_pane_g_ParamLimits

0xfe07,	// (0x00011f1a) slider_pane_g

0xb38e,	// (0x0000d4a1) popup_tb_float_extension_window_ParamLimits

0xb38e,	// (0x0000d4a1) popup_tb_float_extension_window

0x7904,	// (0x00009a17) aid_size_cell_tb_float_ext

0xe1e4,	// (0x000102f7) bg_popup_sub_window_cp28

0x7910,	// (0x00009a23) grid_tb_float_ext_pane

0x791c,	// (0x00009a2f) cell_tb_float_ext_pane_ParamLimits

0x791c,	// (0x00009a2f) cell_tb_float_ext_pane

0x7938,	// (0x00009a4b) cell_tb_float_ext_pane_g1

0x7941,	// (0x00009a54) grid_highlight_pane_cp12

0xc15e,	// (0x0000e271) cell_last_hwr_side_pane_ParamLimits

0xc15e,	// (0x0000e271) cell_last_hwr_side_pane

0x4629,	// (0x0000673c) cell_last_hwr_side_pane_g1

0x794a,	// (0x00009a5d) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x00011f23) cell_last_hwr_side_pane_g

0xd311,	// (0x0000f424) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd311,	// (0x0000f424) vkb2_area_bottom_space_btn_pane

0x4ab6,	// (0x00006bc9) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x734f,	// (0x00009462) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7875,	// (0x00009988) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7953,	// (0x00009a66) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7953,	// (0x00009a66) vkb2_area_bottom_space_btn_pane_g1

0x798d,	// (0x00009aa0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x798d,	// (0x00009aa0) vkb2_area_bottom_space_btn_pane_g2

0x79c3,	// (0x00009ad6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x79c3,	// (0x00009ad6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x00011f28) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x00011f28) vkb2_area_bottom_space_btn_pane_g

0x4737,	// (0x0000684a) cel_fep_hwr_func_pane_ParamLimits

0x4737,	// (0x0000684a) cel_fep_hwr_func_pane

0xc133,	// (0x0000e246) cell_hwr_side_button_pane_ParamLimits

0xc133,	// (0x0000e246) cell_hwr_side_button_pane

0x6772,	// (0x00008885) aid_area_touch_clock_ParamLimits

0xe5f7,	// (0x0001070a) bg_uniindi_top_pane_ParamLimits

0x6786,	// (0x00008899) uniindi_top_pane_g1_ParamLimits

0x679c,	// (0x000088af) uniindi_top_pane_g2_ParamLimits

0x67a8,	// (0x000088bb) uniindi_top_pane_g3_ParamLimits

0x67b9,	// (0x000088cc) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x00011e3b) uniindi_top_pane_g_ParamLimits

0x67c6,	// (0x000088d9) uniindi_top_pane_t1_ParamLimits

0xe5f7,	// (0x0001070a) bg_vkb2_func_pane_cp01_ParamLimits

0xe5f7,	// (0x0001070a) bg_vkb2_func_pane_cp01

0x7a0d,	// (0x00009b20) cel_fep_hwr_func_pane_g1_ParamLimits

0x7a0d,	// (0x00009b20) cel_fep_hwr_func_pane_g1

0xe5f7,	// (0x0001070a) bg_vkb2_func_pane_cp02_ParamLimits

0xe5f7,	// (0x0001070a) bg_vkb2_func_pane_cp02

0x7a0d,	// (0x00009b20) cell_hwr_side_button_pane_g1_ParamLimits

0x7a0d,	// (0x00009b20) cell_hwr_side_button_pane_g1

0x14a9,	// (0x000035bc) status_pane_g4_ParamLimits

0x14a9,	// (0x000035bc) status_pane_g4

0x14c3,	// (0x000035d6) status_pane_t1

0x43dc,	// (0x000064ef) form2_midp_gauge_slider_cont_pane

0x43e4,	// (0x000064f7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc064,	// (0x0000e177) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc076,	// (0x0000e189) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00011c07) form2_midp_gauge_slider_pane_t_ParamLimits

0x441a,	// (0x0000652d) form2_midp_slider_pane_ParamLimits

0x6cde,	// (0x00008df1) aid_size_cell_func_vkb2_ParamLimits

0x6cde,	// (0x00008df1) aid_size_cell_func_vkb2

0x78f0,	// (0x00009a03) slider_pane_g4_ParamLimits

0x78f0,	// (0x00009a03) slider_pane_g4

0xd7ca,	// (0x0000f8dd) form2_midp_gauge_slider_pane_t2_cp01

0xd7d8,	// (0x0000f8eb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd7d8,	// (0x0000f8eb) form2_midp_gauge_slider_pane_t3_cp01

0x7a46,	// (0x00009b59) form2_midp_slider_pane_cp01

0xe1e4,	// (0x000102f7) navi_smil_pane

0x7a7a,	// (0x00009b8d) navi_smil_pane_g1

0x7a82,	// (0x00009b95) navi_smil_pane_t1

0x7a4f,	// (0x00009b62) form2_midp_slider_pane_g1

0x7a58,	// (0x00009b6b) form2_midp_slider_pane_g2

0x7a60,	// (0x00009b73) form2_midp_slider_pane_g3

0x7a4f,	// (0x00009b62) form2_midp_slider_pane_g4

0xd7f5,	// (0x0000f908) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x00011f31) form2_midp_slider_pane_g

0x79fd,	// (0x00009b10) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x79fd,	// (0x00009b10) vkb2_area_bottom_space_btn_pane_g4

0xb575,	// (0x0000d688) lc0_navi_pane_ParamLimits

0xb575,	// (0x0000d688) lc0_navi_pane

0xb5e5,	// (0x0000d6f8) lc0_stat_indi_pane_ParamLimits

0xb5e5,	// (0x0000d6f8) lc0_stat_indi_pane

0xb5fa,	// (0x0000d70d) ls0_title_pane_ParamLimits

0xb5fa,	// (0x0000d70d) ls0_title_pane

0xeb7c,	// (0x00010c8f) bg_popup_sub_pane_cp14_ParamLimits

0x6759,	// (0x0000886c) list_uniindi_pane_ParamLimits

0x6765,	// (0x00008878) uniindi_top_pane_ParamLimits

0x6804,	// (0x00008917) list_single_uniindi_pane_g1_ParamLimits

0x6817,	// (0x0000892a) list_single_uniindi_pane_t1_ParamLimits

0xd7fe,	// (0x0000f911) lc0_stat_clock_pane_ParamLimits

0xd7fe,	// (0x0000f911) lc0_stat_clock_pane

0xd80b,	// (0x0000f91e) lc0_stat_indi_pane_g1_ParamLimits

0xd80b,	// (0x0000f91e) lc0_stat_indi_pane_g1

0xd818,	// (0x0000f92b) lc0_stat_indi_pane_g2_ParamLimits

0xd818,	// (0x0000f92b) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x00011f3c) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x00011f3c) lc0_stat_indi_pane_g

0xd825,	// (0x0000f938) lc0_uni_indicator_pane_ParamLimits

0xd825,	// (0x0000f938) lc0_uni_indicator_pane

0xd832,	// (0x0000f945) ls0_title_pane_g1_ParamLimits

0xd832,	// (0x0000f945) ls0_title_pane_g1

0xd846,	// (0x0000f959) ls0_title_pane_t1_ParamLimits

0xd846,	// (0x0000f959) ls0_title_pane_t1

0xd874,	// (0x0000f987) lc0_uni_indicator_pane_g1_ParamLimits

0xd874,	// (0x0000f987) lc0_uni_indicator_pane_g1

0x7b21,	// (0x00009c34) lc0_stat_clock_pane_t1

0xe1e4,	// (0x000102f7) main_ai5_pane

0x7b2f,	// (0x00009c42) ai5_sk_pane_ParamLimits

0x7b2f,	// (0x00009c42) ai5_sk_pane

0xd893,	// (0x0000f9a6) cell_ai5_widget_pane_ParamLimits

0xd893,	// (0x0000f9a6) cell_ai5_widget_pane

0xdbed,	// (0x0000fd00) aid_size_cell_widget_grid

0x80ec,	// (0x0000a1ff) bg_ai5_widget_pane_ParamLimits

0x80ec,	// (0x0000a1ff) bg_ai5_widget_pane

0xdc21,	// (0x0000fd34) cell_ai5_widget_pane_g2

0xdc35,	// (0x0000fd48) cell_ai5_widget_pane_g3

0xdc4f,	// (0x0000fd62) cell_ai5_widget_pane_g4

0xdc5f,	// (0x0000fd72) cell_ai5_widget_pane_g5

0xdc6f,	// (0x0000fd82) cell_ai5_widget_pane_g6

0xdc7b,	// (0x0000fd8e) cell_ai5_widget_pane_g7

0xdc87,	// (0x0000fd9a) cell_ai5_widget_pane_t1_ParamLimits

0xdc87,	// (0x0000fd9a) cell_ai5_widget_pane_t1

0x8223,	// (0x0000a336) cell_ai5_widget_pane_t2_ParamLimits

0x8223,	// (0x0000a336) cell_ai5_widget_pane_t2

0x823b,	// (0x0000a34e) cell_ai5_widget_pane_t3_ParamLimits

0x823b,	// (0x0000a34e) cell_ai5_widget_pane_t3

0xdca4,	// (0x0000fdb7) cell_ai5_widget_pane_t4_ParamLimits

0xdca4,	// (0x0000fdb7) cell_ai5_widget_pane_t4

0xdcca,	// (0x0000fddd) cell_ai5_widget_pane_t5_ParamLimits

0xdcca,	// (0x0000fddd) cell_ai5_widget_pane_t5

0x8299,	// (0x0000a3ac) cell_ai5_widget_pane_t6_ParamLimits

0x8299,	// (0x0000a3ac) cell_ai5_widget_pane_t6

0x82ab,	// (0x0000a3be) cell_ai5_widget_pane_t7_ParamLimits

0x82ab,	// (0x0000a3be) cell_ai5_widget_pane_t7

0x82c4,	// (0x0000a3d7) cell_ai5_widget_pane_t8_ParamLimits

0x82c4,	// (0x0000a3d7) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x00011f56) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x00011f56) cell_ai5_widget_pane_t

0xdd37,	// (0x0000fe4a) grid_ai5_widget_pane

0xeb7c,	// (0x00010c8f) highlight_cell_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00010c8f) highlight_cell_ai5_widget_pane

0xdd45,	// (0x0000fe58) ai5_sk_left_pane

0xdd4f,	// (0x0000fe62) ai5_sk_middle_pane

0xdd59,	// (0x0000fe6c) ai5_sk_right_pane

0x834f,	// (0x0000a462) bg_ai5_widget_pane_g1_ParamLimits

0x834f,	// (0x0000a462) bg_ai5_widget_pane_g1

0x835b,	// (0x0000a46e) bg_ai5_widget_pane_g2_ParamLimits

0x835b,	// (0x0000a46e) bg_ai5_widget_pane_g2

0x8367,	// (0x0000a47a) bg_ai5_widget_pane_g3_ParamLimits

0x8367,	// (0x0000a47a) bg_ai5_widget_pane_g3

0x8373,	// (0x0000a486) bg_ai5_widget_pane_g4_ParamLimits

0x8373,	// (0x0000a486) bg_ai5_widget_pane_g4

0x837f,	// (0x0000a492) bg_ai5_widget_pane_g5_ParamLimits

0x837f,	// (0x0000a492) bg_ai5_widget_pane_g5

0x838b,	// (0x0000a49e) bg_ai5_widget_pane_g6_ParamLimits

0x838b,	// (0x0000a49e) bg_ai5_widget_pane_g6

0x8397,	// (0x0000a4aa) bg_ai5_widget_pane_g7_ParamLimits

0x8397,	// (0x0000a4aa) bg_ai5_widget_pane_g7

0x83a3,	// (0x0000a4b6) bg_ai5_widget_pane_g8_ParamLimits

0x83a3,	// (0x0000a4b6) bg_ai5_widget_pane_g8

0x83af,	// (0x0000a4c2) bg_ai5_widget_pane_g9_ParamLimits

0x83af,	// (0x0000a4c2) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x00011f6b) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x00011f6b) bg_ai5_widget_pane_g

0xdd8f,	// (0x0000fea2) cell_shortcut_ai5_widget_pane_ParamLimits

0xdd8f,	// (0x0000fea2) cell_shortcut_ai5_widget_pane

0x055d,	// (0x00002670) bg_cell_shortcut_ai5_widget_pane

0x83fa,	// (0x0000a50d) cell_grid_ai5_widget_pane_g1

0x055d,	// (0x00002670) highlight_cell_shortcut_ai5_widget_pane

0x16da,	// (0x000037ed) ai5_sk_left_pane_g1

0x8403,	// (0x0000a516) ai5_sk_left_pane_g2

0x840b,	// (0x0000a51e) ai5_sk_left_pane_g3

0x8413,	// (0x0000a526) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x00011f7e) ai5_sk_left_pane_g

0x841b,	// (0x0000a52e) ai5_sk_left_pane_t1

0x16d2,	// (0x000037e5) ai5_sk_right_pane_g1

0x8429,	// (0x0000a53c) ai5_sk_right_pane_g2

0x8431,	// (0x0000a544) ai5_sk_right_pane_g3

0x8439,	// (0x0000a54c) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x00011f87) ai5_sk_right_pane_g

0x8441,	// (0x0000a554) ai5_sk_right_pane_t1

0x16d2,	// (0x000037e5) ai5_sk_middle_pane_g1

0x16da,	// (0x000037ed) ai5_sk_middle_pane_g2

0x16f2,	// (0x00003805) ai5_sk_middle_pane_g3

0x8431,	// (0x0000a544) ai5_sk_middle_pane_g4

0x840b,	// (0x0000a51e) ai5_sk_middle_pane_g5

0x844f,	// (0x0000a562) ai5_sk_middle_pane_g6

0xdda2,	// (0x0000feb5) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x00011f90) ai5_sk_middle_pane_g

0xb45f,	// (0x0000d572) aid_touch_area_size_lc0_ParamLimits

0xb45f,	// (0x0000d572) aid_touch_area_size_lc0

0x4e8d,	// (0x00006fa0) cell_hwr_candidate_pane_t1_ParamLimits

0x1172,	// (0x00003285) aid_touch_navi_pane

0xb705,	// (0x0000d818) status_dt_navi_pane_ParamLimits

0xb705,	// (0x0000d818) status_dt_navi_pane

0xb71d,	// (0x0000d830) status_dt_sta_pane_ParamLimits

0xb71d,	// (0x0000d830) status_dt_sta_pane

0xddaa,	// (0x0000febd) dt_sta_controll_pane

0xddb7,	// (0x0000feca) dt_sta_indi_pane

0xddc4,	// (0x0000fed7) dt_sta_title_pane

0xe5f7,	// (0x0001070a) bg_dt_sta_indi_pane_ParamLimits

0xe5f7,	// (0x0001070a) bg_dt_sta_indi_pane

0xddd6,	// (0x0000fee9) dt_sta_battery_pane

0xddde,	// (0x0000fef1) dt_sta_indi_pane_g1

0xdde7,	// (0x0000fefa) dt_sta_indi_pane_g2

0xddf0,	// (0x0000ff03) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x00011f9f) dt_sta_indi_pane_g

0xddf9,	// (0x0000ff0c) dt_sta_signal_pane

0xeb7c,	// (0x00010c8f) bg_dt_sta_title_pane_ParamLimits

0xeb7c,	// (0x00010c8f) bg_dt_sta_title_pane

0xde02,	// (0x0000ff15) dt_sta_title_pane_g1

0xde0a,	// (0x0000ff1d) dt_sta_title_pane_t1_ParamLimits

0xde0a,	// (0x0000ff1d) dt_sta_title_pane_t1

0xe1e4,	// (0x000102f7) bg_dt_sta_control_pane

0xde1f,	// (0x0000ff32) dt_sta_controll_pane_g1

0xde28,	// (0x0000ff3b) bg_dt_sta_title_pane_g1

0xde31,	// (0x0000ff44) bg_dt_sta_title_pane_g2

0xde3a,	// (0x0000ff4d) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x00011fa6) bg_dt_sta_title_pane_g

0x4629,	// (0x0000673c) bg_dt_sta_indi_pane_g1

0x84fd,	// (0x0000a610) dt_sta_signal_pane_g1

0x8505,	// (0x0000a618) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x00011fad) dt_sta_signal_pane_g

0x850d,	// (0x0000a620) dt_sta_battery_pane_g1

0x8516,	// (0x0000a629) dt_sta_battery_pane_t1

0x4629,	// (0x0000673c) bg_dt_sta_control_pane_g1

0xf40c,	// (0x0001151f) fep_china_uni_eep_pane

0xf414,	// (0x00011527) fep_china_uni_entry_pane_ParamLimits

0xf424,	// (0x00011537) popup_fep_china_uni_window_g1_ParamLimits

0xf434,	// (0x00011547) popup_fep_china_uni_window_g2_ParamLimits

0xf434,	// (0x00011547) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001182b) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001182b) popup_fep_china_uni_window_g

0x8525,	// (0x0000a638) fep_china_uni_eep_pane_g1

0x852d,	// (0x0000a640) fep_china_uni_eep_pane_t1

0x7a71,	// (0x00009b84) aid_touch_area_size_smil_player

0x12c0,	// (0x000033d3) lc0_clock_pane

0x14b7,	// (0x000035ca) status_pane_g5_ParamLimits

0x14b7,	// (0x000035ca) status_pane_g5

0xaeb6,	// (0x0000cfc9) popup_keymap_window

0x147d,	// (0x00003590) status_icon_pane

0xdc35,	// (0x0000fd48) cell_ai5_widget_pane_g3_ParamLimits

0xdc4f,	// (0x0000fd62) cell_ai5_widget_pane_g4_ParamLimits

0xdc5f,	// (0x0000fd72) cell_ai5_widget_pane_g5_ParamLimits

0x81ca,	// (0x0000a2dd) cell_ai5_widget_pane_g8_ParamLimits

0x81ca,	// (0x0000a2dd) cell_ai5_widget_pane_g8

0x81de,	// (0x0000a2f1) cell_ai5_widget_pane_g9_ParamLimits

0x81de,	// (0x0000a2f1) cell_ai5_widget_pane_g9

0x81f2,	// (0x0000a305) cell_ai5_widget_pane_g10_ParamLimits

0x81f2,	// (0x0000a305) cell_ai5_widget_pane_g10

0x853c,	// (0x0000a64f) status_icon_pane_g1

0xe1e4,	// (0x000102f7) bg_popup_sub_pane_cp13

0x8544,	// (0x0000a657) popup_keymap_window_t1

0xabab,	// (0x0000ccbe) control_pane_g6_ParamLimits

0xabab,	// (0x0000ccbe) control_pane_g6

0xabb8,	// (0x0000cccb) control_pane_g7_ParamLimits

0xabb8,	// (0x0000cccb) control_pane_g7

0xabc5,	// (0x0000ccd8) control_pane_g8_ParamLimits

0xabc5,	// (0x0000ccd8) control_pane_g8

0xddaa,	// (0x0000febd) dt_sta_controll_pane_ParamLimits

0xddb7,	// (0x0000feca) dt_sta_indi_pane_ParamLimits

0xddc4,	// (0x0000fed7) dt_sta_title_pane_ParamLimits

0xea44,	// (0x00010b57) aid_size_touch_scroll_bar_cale

0xe389,	// (0x0001049c) popup_discreet_window_ParamLimits

0xe389,	// (0x0001049c) popup_discreet_window

0x9c71,	// (0x0000bd84) popup_sk_window

0x1f0c,	// (0x0000401f) bg_popup_sub_pane_cp28_ParamLimits

0x1f0c,	// (0x0000401f) bg_popup_sub_pane_cp28

0x8552,	// (0x0000a665) popup_discreet_window_g1_ParamLimits

0x8552,	// (0x0000a665) popup_discreet_window_g1

0x8572,	// (0x0000a685) popup_discreet_window_t1_ParamLimits

0x8572,	// (0x0000a685) popup_discreet_window_t1

0x8590,	// (0x0000a6a3) popup_discreet_window_t2_ParamLimits

0x8590,	// (0x0000a6a3) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x00011fb2) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x00011fb2) popup_discreet_window_t

0x85e2,	// (0x0000a6f5) popup_sk_window_g1

0x85ec,	// (0x0000a6ff) popup_sk_window_g2

0x0001,

0xfea6,	// (0x00011fb9) popup_sk_window_g

0x85f4,	// (0x0000a707) popup_sk_window_t1

0x8602,	// (0x0000a715) popup_sk_window_t1_copy1

0xdc21,	// (0x0000fd34) cell_ai5_widget_pane_g2_ParamLimits

0xdcea,	// (0x0000fdfd) cell_ai5_widget_pane_t9_ParamLimits

0xdcea,	// (0x0000fdfd) cell_ai5_widget_pane_t9

0xe1e4,	// (0x000102f7) main_fep_fshwr2_pane

0xde43,	// (0x0000ff56) aid_fshwr2_btn_pane

0xde57,	// (0x0000ff6a) aid_fshwr2_syb_pane

0xde6b,	// (0x0000ff7e) aid_fshwr2_txt_pane

0xde7b,	// (0x0000ff8e) fshwr2_func_candi_pane

0xde9d,	// (0x0000ffb0) fshwr2_hwr_syb_pane

0xdec1,	// (0x0000ffd4) fshwr2_icf_pane

0xe1e4,	// (0x000102f7) fshwr2_icf_bg_pane

0x8698,	// (0x0000a7ab) fshwr2_icf_pane_t1_ParamLimits

0x8698,	// (0x0000a7ab) fshwr2_icf_pane_t1

0xf2b1,	// (0x000113c4) fshwr2_func_candi_pane_g1

0xdef1,	// (0x00010004) fshwr2_func_candi_row_pane_ParamLimits

0xdef1,	// (0x00010004) fshwr2_func_candi_row_pane

0xdf18,	// (0x0001002b) cell_fshwr2_syb_pane_ParamLimits

0xdf18,	// (0x0001002b) cell_fshwr2_syb_pane

0x7a0d,	// (0x00009b20) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7a0d,	// (0x00009b20) fshwr2_hwr_syb_pane_g1

0xe1e4,	// (0x000102f7) bg_popup_call_pane_cp01

0xdf40,	// (0x00010053) fshwr2_func_candi_cell_pane_ParamLimits

0xdf40,	// (0x00010053) fshwr2_func_candi_cell_pane

0xdf89,	// (0x0001009c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdf89,	// (0x0001009c) fshwr2_func_candi_cell_bg_pane

0xdf95,	// (0x000100a8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdf95,	// (0x000100a8) fshwr2_func_candi_cell_pane_g1

0xdfcc,	// (0x000100df) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdfcc,	// (0x000100df) fshwr2_func_candi_cell_pane_t1

0xe1e4,	// (0x000102f7) bg_button_pane_cp08

0x8784,	// (0x0000a897) cell_fshwr2_syb_bg_pane

0xdfe7,	// (0x000100fa) cell_fshwr2_syb_bg_pane_g1

0xdffb,	// (0x0001010e) cell_fshwr2_syb_bg_pane_t1

0xeb7c,	// (0x00010c8f) main_tmo_pane

0xbc15,	// (0x0000dd28) uni_indicator_pane_g1_ParamLimits

0xbc2b,	// (0x0000dd3e) uni_indicator_pane_g2_ParamLimits

0xbc41,	// (0x0000dd54) uni_indicator_pane_g3_ParamLimits

0xbc54,	// (0x0000dd67) uni_indicator_pane_g4_ParamLimits

0xbc54,	// (0x0000dd67) uni_indicator_pane_g4

0x2be4,	// (0x00004cf7) uni_indicator_pane_g5_ParamLimits

0x2be4,	// (0x00004cf7) uni_indicator_pane_g5

0x2be4,	// (0x00004cf7) uni_indicator_pane_g6_ParamLimits

0x2be4,	// (0x00004cf7) uni_indicator_pane_g6

0xf910,	// (0x00011a23) uni_indicator_pane_g_ParamLimits

0xc8b1,	// (0x0000e9c4) popup_tmo_note_window_ParamLimits

0xc8b1,	// (0x0000e9c4) popup_tmo_note_window

0xeb7c,	// (0x00010c8f) fshwr2_bg_pane

0xdfbd,	// (0x000100d0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdfbd,	// (0x000100d0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x00011fbe) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x00011fbe) fshwr2_func_candi_cell_pane_g

0x4629,	// (0x0000673c) bg_popup_window_pane_cp01

0x87ba,	// (0x0000a8cd) bg_popup_window_pane_g1_cp01

0x87c3,	// (0x0000a8d6) bg_popup_window_pane_cp22_ParamLimits

0x87c3,	// (0x0000a8d6) bg_popup_window_pane_cp22

0x87d1,	// (0x0000a8e4) listscroll_tmo_link_pane_ParamLimits

0x87d1,	// (0x0000a8e4) listscroll_tmo_link_pane

0x8811,	// (0x0000a924) popup_tmo_note_window_g1_ParamLimits

0x8811,	// (0x0000a924) popup_tmo_note_window_g1

0x881e,	// (0x0000a931) tmo_note_info_pane_ParamLimits

0x881e,	// (0x0000a931) tmo_note_info_pane

0xe011,	// (0x00010124) list_tmo_note_info_pane_g1_ParamLimits

0xe011,	// (0x00010124) list_tmo_note_info_pane_g1

0x884f,	// (0x0000a962) list_tmo_note_info_pane_g2_ParamLimits

0x884f,	// (0x0000a962) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x00011fc3) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x00011fc3) list_tmo_note_info_pane_g

0x886b,	// (0x0000a97e) list_tmo_note_info_text_pane_ParamLimits

0x886b,	// (0x0000a97e) list_tmo_note_info_text_pane

0x88f0,	// (0x0000aa03) list_tmo_link_pane

0x88fd,	// (0x0000aa10) scroll_pane_cp20

0x890a,	// (0x0000aa1d) list_single_tmo_link_pane_ParamLimits

0x890a,	// (0x0000aa1d) list_single_tmo_link_pane

0x891a,	// (0x0000aa2d) list_single_tmo_link_pane_t1

0x8928,	// (0x0000aa3b) list_tmo_note_info_text_pane_t1_ParamLimits

0x8928,	// (0x0000aa3b) list_tmo_note_info_text_pane_t1

0xa67e,	// (0x0000c791) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa67e,	// (0x0000c791) aid_size_touch_scroll_bar_cp01

0xa5ad,	// (0x0000c6c0) aid_size_touch_slider_marker

0x9c61,	// (0x0000bd74) popup_settings_window_ParamLimits

0x9c61,	// (0x0000bd74) popup_settings_window

0x0b19,	// (0x00002c2c) popup_candi_list_indi_window

0x1172,	// (0x00003285) aid_touch_navi_pane_ParamLimits

0x64d5,	// (0x000085e8) rs_clock_indi_pane

0x64de,	// (0x000085f1) sctrl_sk_bottom_pane_ParamLimits

0x64ef,	// (0x00008602) sctrl_sk_top_pane_ParamLimits

0x6d38,	// (0x00008e4b) popup_fep_tooltip_window

0xdbed,	// (0x0000fd00) aid_size_cell_widget_grid_ParamLimits

0xdc0c,	// (0x0000fd1f) cell_ai5_widget_pane_g1_ParamLimits

0xdc0c,	// (0x0000fd1f) cell_ai5_widget_pane_g1

0xdc6f,	// (0x0000fd82) cell_ai5_widget_pane_g6_ParamLimits

0xdc7b,	// (0x0000fd8e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x00011f41) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x00011f41) cell_ai5_widget_pane_g

0xdd19,	// (0x0000fe2c) cell_ai5_widget_pane_t10_ParamLimits

0xdd19,	// (0x0000fe2c) cell_ai5_widget_pane_t10

0xdd37,	// (0x0000fe4a) grid_ai5_widget_pane_ParamLimits

0xdd63,	// (0x0000fe76) cell_contacts_ai5_widget_pane_ParamLimits

0xdd63,	// (0x0000fe76) cell_contacts_ai5_widget_pane

0x85a5,	// (0x0000a6b8) popup_discreet_window_t3_ParamLimits

0x85a5,	// (0x0000a6b8) popup_discreet_window_t3

0xdedd,	// (0x0000fff0) popup_fshwr2_char_preview_window_ParamLimits

0xdedd,	// (0x0000fff0) popup_fshwr2_char_preview_window

0xe028,	// (0x0001013b) tmo_note_info_pane_t1

0xe03d,	// (0x00010150) tmo_note_info_pane_t2

0xe056,	// (0x00010169) tmo_note_info_pane_t3

0x88cc,	// (0x0000a9df) tmo_note_info_pane_t4

0x88de,	// (0x0000a9f1) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x00011fc8) tmo_note_info_pane_t

0x88f0,	// (0x0000aa03) list_tmo_link_pane_ParamLimits

0x88fd,	// (0x0000aa10) scroll_pane_cp20_ParamLimits

0xe1e4,	// (0x000102f7) bg_popup_fep_char_preview_window_cp01

0x8941,	// (0x0000aa54) popup_fshwr2_char_preview_window_t1

0x894f,	// (0x0000aa62) popup_candi_list_indi_window_g1

0x8958,	// (0x0000aa6b) bg_cell_contacts_ai5_widget_pane

0x8964,	// (0x0000aa77) cell_contacts_ai5_widget_pane_g1

0x8979,	// (0x0000aa8c) cell_contacts_ai5_widget_pane_g2

0x8985,	// (0x0000aa98) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x00011fd3) cell_contacts_ai5_widget_pane_g

0x8991,	// (0x0000aaa4) cell_contacts_ai5_widget_pane_t1

0xeb7c,	// (0x00010c8f) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8a08,	// (0x0000ab1b) settings_container_pane

0x055d,	// (0x00002670) listscroll_set_pane_copy1

0x3a0f,	// (0x00005b22) scroll_pane_cp121_copy1

0x8a14,	// (0x0000ab27) set_content_pane_copy1

0x8a1c,	// (0x0000ab2f) aid_height_set_list_copy1_ParamLimits

0x8a1c,	// (0x0000ab2f) aid_height_set_list_copy1

0x2ee8,	// (0x00004ffb) aid_size_parent_copy1_ParamLimits

0x2ee8,	// (0x00004ffb) aid_size_parent_copy1

0x8a28,	// (0x0000ab3b) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8a28,	// (0x0000ab3b) button_value_adjust_pane_cp6_copy1

0x0abb,	// (0x00002bce) list_highlight_pane_cp2_copy1_ParamLimits

0x0abb,	// (0x00002bce) list_highlight_pane_cp2_copy1

0x8a3c,	// (0x0000ab4f) list_set_pane_copy1_ParamLimits

0x8a3c,	// (0x0000ab4f) list_set_pane_copy1

0x89a3,	// (0x0000aab6) main_pane_set_t1_copy1_ParamLimits

0x89a3,	// (0x0000aab6) main_pane_set_t1_copy1

0x89dd,	// (0x0000aaf0) main_pane_set_t2_copy1_ParamLimits

0x89dd,	// (0x0000aaf0) main_pane_set_t2_copy1

0x8afd,	// (0x0000ac10) main_pane_set_t3_copy1

0x8b0b,	// (0x0000ac1e) main_pane_set_t4_copy1

0x89fc,	// (0x0000ab0f) set_content_pane_g1_copy1_ParamLimits

0x89fc,	// (0x0000ab0f) set_content_pane_g1_copy1

0x8b19,	// (0x0000ac2c) setting_code_pane_copy1

0x8b21,	// (0x0000ac34) setting_slider_graphic_pane_copy1

0x8b21,	// (0x0000ac34) setting_slider_pane_copy1

0x8b21,	// (0x0000ac34) setting_text_pane_copy1

0x8b21,	// (0x0000ac34) setting_volume_pane_copy1

0x8b19,	// (0x0000ac2c) settings_code_pane_cp2_copy1

0x8b29,	// (0x0000ac3c) settings_code_pane_cp_copy1_ParamLimits

0x8b29,	// (0x0000ac3c) settings_code_pane_cp_copy1

0x8b3d,	// (0x0000ac50) volume_set_pane_copy1

0x8b49,	// (0x0000ac5c) volume_set_pane_g10_copy1

0x8b55,	// (0x0000ac68) volume_set_pane_g1_copy1

0x8b5f,	// (0x0000ac72) volume_set_pane_g2_copy1

0x8b69,	// (0x0000ac7c) volume_set_pane_g3_copy1

0x8b73,	// (0x0000ac86) volume_set_pane_g4_copy1

0x8b7d,	// (0x0000ac90) volume_set_pane_g5_copy1

0x8b87,	// (0x0000ac9a) volume_set_pane_g6_copy1

0x8b91,	// (0x0000aca4) volume_set_pane_g7_copy1

0x8b9b,	// (0x0000acae) volume_set_pane_g8_copy1

0x8ba5,	// (0x0000acb8) volume_set_pane_g9_copy1

0xe421,	// (0x00010534) bg_set_opt_pane_cp_copy1_ParamLimits

0xe421,	// (0x00010534) bg_set_opt_pane_cp_copy1

0x8baf,	// (0x0000acc2) setting_slider_pane_t1_copy1_ParamLimits

0x8baf,	// (0x0000acc2) setting_slider_pane_t1_copy1

0x8bcd,	// (0x0000ace0) setting_slider_pane_t2_copy1_ParamLimits

0x8bcd,	// (0x0000ace0) setting_slider_pane_t2_copy1

0x8be7,	// (0x0000acfa) setting_slider_pane_t3_copy1_ParamLimits

0x8be7,	// (0x0000acfa) setting_slider_pane_t3_copy1

0x8bff,	// (0x0000ad12) slider_set_pane_copy1_ParamLimits

0x8bff,	// (0x0000ad12) slider_set_pane_copy1

0xec37,	// (0x00010d4a) set_opt_bg_pane_g1_copy2

0xec3f,	// (0x00010d52) set_opt_bg_pane_g2_copy2

0x8c15,	// (0x0000ad28) set_opt_bg_pane_g3_copy2

0xec4f,	// (0x00010d62) set_opt_bg_pane_g4_copy2

0xec57,	// (0x00010d6a) set_opt_bg_pane_g5_copy2

0xec5f,	// (0x00010d72) set_opt_bg_pane_g6_copy2

0x8c1f,	// (0x0000ad32) set_opt_bg_pane_g7_copy2

0x8c29,	// (0x0000ad3c) set_opt_bg_pane_g8_copy2

0x8c33,	// (0x0000ad46) set_opt_bg_pane_g9_copy2

0x8c3d,	// (0x0000ad50) aid_size_touch_slider_mark_copy1_ParamLimits

0x8c3d,	// (0x0000ad50) aid_size_touch_slider_mark_copy1

0x8c51,	// (0x0000ad64) slider_set_pane_g1_copy1

0x8c5a,	// (0x0000ad6d) slider_set_pane_g2_copy1

0x2e4f,	// (0x00004f62) slider_set_pane_g3_copy1_ParamLimits

0x2e4f,	// (0x00004f62) slider_set_pane_g3_copy1

0x2e63,	// (0x00004f76) slider_set_pane_g4_copy1_ParamLimits

0x2e63,	// (0x00004f76) slider_set_pane_g4_copy1

0x2e7b,	// (0x00004f8e) slider_set_pane_g5_copy1_ParamLimits

0x2e7b,	// (0x00004f8e) slider_set_pane_g5_copy1

0x2e4f,	// (0x00004f62) slider_set_pane_g6_copy1_ParamLimits

0x2e4f,	// (0x00004f62) slider_set_pane_g6_copy1

0x8c62,	// (0x0000ad75) slider_set_pane_g7_copy1_ParamLimits

0x8c62,	// (0x0000ad75) slider_set_pane_g7_copy1

0xe367,	// (0x0001047a) bg_set_opt_pane_cp2_copy1

0x8c78,	// (0x0000ad8b) setting_slider_graphic_pane_g1_copy1

0x8c81,	// (0x0000ad94) setting_slider_graphic_pane_t1_copy1

0x8c91,	// (0x0000ada4) setting_slider_graphic_pane_t2_copy1

0x8ca1,	// (0x0000adb4) slider_set_pane_cp_copy1

0x8cb1,	// (0x0000adc4) input_focus_pane_cp1_copy1

0x8cba,	// (0x0000adcd) list_set_text_pane_copy1

0x8cc2,	// (0x0000add5) setting_text_pane_g1_copy1

0xe4cf,	// (0x000105e2) set_text_pane_t1_copy1

0x8cb1,	// (0x0000adc4) input_focus_pane_cp2_copy1

0x8cc2,	// (0x0000add5) setting_code_pane_g1_copy1

0x8ccb,	// (0x0000adde) setting_code_pane_t1_copy1

0x0245,	// (0x00002358) list_set_graphic_pane_copy1

0xe367,	// (0x0001047a) bg_set_opt_pane_cp4_copy1

0x0258,	// (0x0000236b) list_set_graphic_pane_g1_copy1_ParamLimits

0x0258,	// (0x0000236b) list_set_graphic_pane_g1_copy1

0x8cd9,	// (0x0000adec) list_set_graphic_pane_g2_copy1

0x0270,	// (0x00002383) list_set_graphic_pane_t1_copy1_ParamLimits

0x0270,	// (0x00002383) list_set_graphic_pane_t1_copy1

0x4629,	// (0x0000673c) rs_clock_indi_pane_g1

0x8ce1,	// (0x0000adf4) rs_clock_indi_pane_t1

0x8cef,	// (0x0000ae02) rs_indi_pane

0x8cf7,	// (0x0000ae0a) rs_indi_pane_g1

0x8d00,	// (0x0000ae13) rs_indi_pane_g2

0x8d09,	// (0x0000ae1c) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x00011fda) rs_indi_pane_g

0x055d,	// (0x00002670) bg_popup_preview_window_pane_cp03

0x8d12,	// (0x0000ae25) popup_fep_tooltip_window_t1

0x5890,	// (0x000079a3) popup_note2_window_g2_ParamLimits

0x5890,	// (0x000079a3) popup_note2_window_g2

0x0001,

0xfc60,	// (0x00011d73) popup_note2_window_g_ParamLimits

0xfc60,	// (0x00011d73) popup_note2_window_g

0x5e9f,	// (0x00007fb2) bg_popup_sub_pane_cp11_ParamLimits

0x5eac,	// (0x00007fbf) cell_ai3_links_pane_g1_ParamLimits

0x5ec3,	// (0x00007fd6) cell_ai3_links_pane_t1

0xe4cf,	// (0x000105e2) set_text_pane_t1_copy1_ParamLimits

0x0476,	// (0x00002589) cell_graphic_popup_pane_cp2_ParamLimits

0x0476,	// (0x00002589) cell_graphic_popup_pane_cp2

0x8d20,	// (0x0000ae33) cell_graphic_popup_pane_g1_cp2

0xe857,	// (0x0001096a) cell_graphic_popup_pane_g2_cp2

0x8d28,	// (0x0000ae3b) cell_graphic_popup_pane_g3_cp2

0x8d30,	// (0x0000ae43) cell_graphic_popup_pane_t2_cp2

0xe868,	// (0x0001097b) grid_highlight_pane_cp3_cp2

0xf0b7,	// (0x000111ca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xeb7c,	// (0x00010c8f) main_tmo_pane_ParamLimits

0xc8a5,	// (0x0000e9b8) popup_tmo_big_image_note_window

0xdbfb,	// (0x0000fd0e) cell_ai5_widget_list_pane

0xdc03,	// (0x0000fd16) cell_ai5_widget_lrg_icon_pane

0xe028,	// (0x0001013b) tmo_note_info_pane_t1_ParamLimits

0xe03d,	// (0x00010150) tmo_note_info_pane_t2_ParamLimits

0xe056,	// (0x00010169) tmo_note_info_pane_t3_ParamLimits

0x88cc,	// (0x0000a9df) tmo_note_info_pane_t4_ParamLimits

0x88de,	// (0x0000a9f1) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x00011fc8) tmo_note_info_pane_t_ParamLimits

0x8a08,	// (0x0000ab1b) settings_container_pane_ParamLimits

0x8ca9,	// (0x0000adbc) indicator_popup_pane_cp5

0x8ca9,	// (0x0000adbc) indicator_popup_pane_cp6

0x0245,	// (0x00002358) list_set_graphic_pane_copy1_ParamLimits

0xe1e4,	// (0x000102f7) bg_popup_window_pane_cp23

0x8d3e,	// (0x0000ae51) popup_tmo_big_image_note_window_g1

0x8d4a,	// (0x0000ae5d) popup_tmo_big_image_note_window_t1

0x8d5a,	// (0x0000ae6d) popup_tmo_big_image_note_window_t2

0x8d6a,	// (0x0000ae7d) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x00011fe1) popup_tmo_big_image_note_window_t

0x4629,	// (0x0000673c) cell_ai5_widget_lrg_icon_pane_g1

0xe06b,	// (0x0001017e) cell_ai5_widget_lrg_icon_pane_t1

0xe079,	// (0x0001018c) cell_ai5_widget_list_row_pane_ParamLimits

0xe079,	// (0x0001018c) cell_ai5_widget_list_row_pane

0xe091,	// (0x000101a4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe091,	// (0x000101a4) cell_ai5_widget_list_row_pane_g1

0xe09e,	// (0x000101b1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe09e,	// (0x000101b1) cell_ai5_widget_list_row_pane_t1

0xe0c9,	// (0x000101dc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe0c9,	// (0x000101dc) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x00011fe8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x00011fe8) cell_ai5_widget_list_row_pane_t

0xe1e4,	// (0x000102f7) main_fep_vtchi_ss_pane

0x8e20,	// (0x0000af33) popup_fep_char_pre_window

0x8e28,	// (0x0000af3b) popup_fep_ituss_window

0xe100,	// (0x00010213) popup_fep_vkbss_window

0xe10f,	// (0x00010222) grid_vkbss_keypad_pane_ParamLimits

0xe10f,	// (0x00010222) grid_vkbss_keypad_pane

0x8e82,	// (0x0000af95) ituss_keypad_pane

0x8e9d,	// (0x0000afb0) aid_vkbss_key_offset_ParamLimits

0x8e9d,	// (0x0000afb0) aid_vkbss_key_offset

0xe11f,	// (0x00010232) cell_vkbss_key_pane_ParamLimits

0xe11f,	// (0x00010232) cell_vkbss_key_pane

0x8ebf,	// (0x0000afd2) bg_cell_vkbss_key_g1_ParamLimits

0x8ebf,	// (0x0000afd2) bg_cell_vkbss_key_g1

0xe135,	// (0x00010248) cell_vkbss_key_3p_pane_ParamLimits

0xe135,	// (0x00010248) cell_vkbss_key_3p_pane

0xe14f,	// (0x00010262) cell_vkbss_key_g1_ParamLimits

0xe14f,	// (0x00010262) cell_vkbss_key_g1

0xe169,	// (0x0001027c) cell_vkbss_key_t1_ParamLimits

0xe169,	// (0x0001027c) cell_vkbss_key_t1

0x8f1e,	// (0x0000b031) cell_ituss_key_pane_ParamLimits

0x8f1e,	// (0x0000b031) cell_ituss_key_pane

0x8f2f,	// (0x0000b042) bg_cell_ituss_key_g1_ParamLimits

0x8f2f,	// (0x0000b042) bg_cell_ituss_key_g1

0x8f3b,	// (0x0000b04e) cell_ituss_key_pane_g1_ParamLimits

0x8f3b,	// (0x0000b04e) cell_ituss_key_pane_g1

0x8f4f,	// (0x0000b062) cell_ituss_key_pane_g2_ParamLimits

0x8f4f,	// (0x0000b062) cell_ituss_key_pane_g2

0x0002,

0xfedc,	// (0x00011fef) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x00011fef) cell_ituss_key_pane_g

0x8f8d,	// (0x0000b0a0) cell_ituss_key_t1_ParamLimits

0x8f8d,	// (0x0000b0a0) cell_ituss_key_t1

0x8fc7,	// (0x0000b0da) cell_ituss_key_t2_ParamLimits

0x8fc7,	// (0x0000b0da) cell_ituss_key_t2

0x8ff8,	// (0x0000b10b) cell_ituss_key_t3_ParamLimits

0x8ff8,	// (0x0000b10b) cell_ituss_key_t3

0x8fc7,	// (0x0000b0da) cell_ituss_key_t4_ParamLimits

0x8fc7,	// (0x0000b0da) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00011ff6) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00011ff6) cell_ituss_key_t

0x903b,	// (0x0000b14e) cell_vkbss_key_3p_pane_g1

0x9043,	// (0x0000b156) cell_vkbss_key_3p_pane_g2

0x904b,	// (0x0000b15e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00012001) cell_vkbss_key_3p_pane_g

0x055d,	// (0x00002670) bg_popup_fep_char_preview_window_cp02

0x9053,	// (0x0000b166) popup_fep_char_pre_window_t1

0xdbda,	// (0x0000fced) main_ai5_sk_pane

0x8958,	// (0x0000aa6b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8964,	// (0x0000aa77) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8979,	// (0x0000aa8c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8985,	// (0x0000aa98) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x00011fd3) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8991,	// (0x0000aaa4) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xeb7c,	// (0x00010c8f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe194,	// (0x000102a7) main_ai5_sk_pane_g1

0x1d44,	// (0x00003e57) popup_query_code_window_g1

0xe0f1,	// (0x00010204) popup_fep_vkb_icf_pane

0x8e5c,	// (0x0000af6f) popup_fep_vtchi_icf_pane

0x906a,	// (0x0000b17d) bg_icf_pane

0x9076,	// (0x0000b189) list_vkb_icf_pane

0x9085,	// (0x0000b198) bg_icf_pane_cp01

0x9098,	// (0x0000b1ab) vtchi_icf_list_pane

0xe19d,	// (0x000102b0) list_vkb_icf_pane_t1_ParamLimits

0xe19d,	// (0x000102b0) list_vkb_icf_pane_t1

0x90c6,	// (0x0000b1d9) vtchi_icf_list_pane_t1_ParamLimits

0x90c6,	// (0x0000b1d9) vtchi_icf_list_pane_t1

0x8e28,	// (0x0000af3b) popup_fep_ituss_window_ParamLimits

0x8e5c,	// (0x0000af6f) popup_fep_vtchi_icf_pane_ParamLimits

0x8e82,	// (0x0000af95) ituss_keypad_pane_ParamLimits

0x8e91,	// (0x0000afa4) ituss_sks_pane

0x906a,	// (0x0000b17d) bg_icf_pane_ParamLimits

0x8e00,	// (0x0000af13) icf_edit_indi_pane_ParamLimits

0x8e00,	// (0x0000af13) icf_edit_indi_pane

0x9076,	// (0x0000b189) list_vkb_icf_pane_ParamLimits

0x9085,	// (0x0000b198) bg_icf_pane_cp01_ParamLimits

0x8e13,	// (0x0000af26) icf_edit_indi_pane_cp01_ParamLimits

0x8e13,	// (0x0000af26) icf_edit_indi_pane_cp01

0x90a0,	// (0x0000b1b3) vtchi_query_pane

0x7a0d,	// (0x00009b20) icf_edit_indi_pane_g1_ParamLimits

0x7a0d,	// (0x00009b20) icf_edit_indi_pane_g1

0xe1b3,	// (0x000102c6) icf_edit_indi_pane_g2_ParamLimits

0xe1b3,	// (0x000102c6) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00012019) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00012019) icf_edit_indi_pane_g

0xe1c5,	// (0x000102d8) icf_edit_indi_pane_t1

0x90de,	// (0x0000b1f1) bg_input_focus_pane_cp042

0xea3b,	// (0x00010b4e) vtchi_button_pane

0x90e7,	// (0x0000b1fa) vtchi_query_pane_t1

0x90f5,	// (0x0000b208) vtchi_query_pane_t2

0x9103,	// (0x0000b216) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00012008) vtchi_query_pane_t

0xe1e4,	// (0x000102f7) bg_button_pane_cp13

0x9111,	// (0x0000b224) vtchi_button_pane_g1

0x9119,	// (0x0000b22c) ituss_sks_pane_g1

0x9124,	// (0x0000b237) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x0001200f) ituss_sks_pane_g

0x912c,	// (0x0000b23f) ituss_sks_pane_t1

0x913a,	// (0x0000b24d) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x00012014) ituss_sks_pane_t

0x4062,	// (0x00006175) indicator_nsta_pane_cp_g1

0x406a,	// (0x0000617d) indicator_nsta_pane_cp_g2

0x4072,	// (0x00006185) indicator_nsta_pane_cp_g3

0x4062,	// (0x00006175) indicator_nsta_pane_cp_g4

0x406a,	// (0x0000617d) indicator_nsta_pane_cp_g5

0x4072,	// (0x00006185) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00011bbd) indicator_nsta_pane_cp_g

0xd69d,	// (0x0000f7b0) cell_graphic2_pane_t2_ParamLimits

0xd69d,	// (0x0000f7b0) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x00011eca) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x00011eca) cell_graphic2_pane_t

0xd6d5,	// (0x0000f7e8) cell_graphic2_control_pane_t1

0xa8cc,	// (0x0000c9df) signal_pane_g3_ParamLimits

0xa8cc,	// (0x0000c9df) signal_pane_g3

0xa8e0,	// (0x0000c9f3) signal_pane_g4_ParamLimits

0xa8e0,	// (0x0000c9f3) signal_pane_g4

0xe0db,	// (0x000101ee) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe0db,	// (0x000101ee) cell_ai5_widget_list_row_pane_t3

0x8f7b,	// (0x0000b08e) cell_ituss_key_pane_t1_ParamLimits

0x8f7b,	// (0x0000b08e) cell_ituss_key_pane_t1

0x1984,	// (0x00003a97) form_field_data_wide_pane_vc_t2_ParamLimits

0x1984,	// (0x00003a97) form_field_data_wide_pane_vc_t2

0x1998,	// (0x00003aab) form_field_data_wide_pane_vc_t3_ParamLimits

0x1998,	// (0x00003aab) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x0001190b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x0001190b) form_field_data_wide_pane_vc_t

0x3d1d,	// (0x00005e30) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d1d,	// (0x00005e30) form_field_slider_wide_pane_vc_t3

0x3df3,	// (0x00005f06) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3df3,	// (0x00005f06) form_field_popup_wide_pane_vc_t2

0x3e0a,	// (0x00005f1d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e0a,	// (0x00005f1d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00011bac) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00011bac) form_field_popup_wide_pane_vc_t

0xde43,	// (0x0000ff56) aid_fshwr2_btn_pane_ParamLimits

0xde57,	// (0x0000ff6a) aid_fshwr2_syb_pane_ParamLimits

0xde6b,	// (0x0000ff7e) aid_fshwr2_txt_pane_ParamLimits

0xeb7c,	// (0x00010c8f) fshwr2_bg_pane_ParamLimits

0xde7b,	// (0x0000ff8e) fshwr2_func_candi_pane_ParamLimits

0xde9d,	// (0x0000ffb0) fshwr2_hwr_syb_pane_ParamLimits

0xdec1,	// (0x0000ffd4) fshwr2_icf_pane_ParamLimits

0x3c91,	// (0x00005da4) list_double_graphic_pane_vc_g4_ParamLimits

0x3c91,	// (0x00005da4) list_double_graphic_pane_vc_g4

0x8f6f,	// (0x0000b082) cell_ituss_key_pane_g3_ParamLimits

0x8f6f,	// (0x0000b082) cell_ituss_key_pane_g3

0x9029,	// (0x0000b13c) cell_ituss_key_t5_ParamLimits

0x9029,	// (0x0000b13c) cell_ituss_key_t5

0xe100,	// (0x00010213) popup_fep_vkbss_window_ParamLimits

0xdbe4,	// (0x0000fcf7) aid_cell_ai5_quarter

0xe1c5,	// (0x000102d8) icf_edit_indi_pane_t1_ParamLimits

0xe69f,	// (0x000107b2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xe69f,	// (0x000107b2) aid_tch_indicator_popup_pane_cp2

0xe6b2,	// (0x000107c5) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xe6b2,	// (0x000107c5) aid_tch_query_popup_data_pane_cp2

0x1cec,	// (0x00003dff) aid_tch_query_popup_pane_ParamLimits

0x1cec,	// (0x00003dff) aid_tch_query_popup_pane

0x1cec,	// (0x00003dff) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1cec,	// (0x00003dff) aid_tch_query_popup_data_pane_cp1

0x8784,	// (0x0000a897) cell_fshwr2_syb_bg_pane_ParamLimits

0xdfe7,	// (0x000100fa) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xdffb,	// (0x0001010e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe0f1,	// (0x00010204) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

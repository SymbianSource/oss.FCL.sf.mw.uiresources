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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000131a4 };

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
0xa910,	// (0x0001dab4) Screen

0xa91c,	// (0x0001dac0) application_window_ParamLimits

0xa91c,	// (0x0001dac0) application_window

0xc803,	// (0x0001f9a7) screen_g1

0x962f,	// (0x0001c7d3) area_bottom_pane_ParamLimits

0x962f,	// (0x0001c7d3) area_bottom_pane

0xde3c,	// (0x00020fe0) area_top_pane_ParamLimits

0xde3c,	// (0x00020fe0) area_top_pane

0xdeda,	// (0x0002107e) main_pane_ParamLimits

0xdeda,	// (0x0002107e) main_pane

0xc80d,	// (0x0001f9b1) misc_graphics

0xb7c5,	// (0x0001e969) battery_pane_ParamLimits

0xb7c5,	// (0x0001e969) battery_pane

0x311f,	// (0x000162c3) bg_status_flat_pane_g8

0x3127,	// (0x000162cb) bg_status_flat_pane_g9

0x2406,	// (0x000155aa) context_pane_ParamLimits

0x2406,	// (0x000155aa) context_pane

0xb93c,	// (0x0001eae0) navi_pane_ParamLimits

0xb93c,	// (0x0001eae0) navi_pane

0xb9c6,	// (0x0001eb6a) signal_pane_ParamLimits

0xb9c6,	// (0x0001eb6a) signal_pane

0x0008,

0xf84a,	// (0x000229ee) bg_status_flat_pane_g

0xba56,	// (0x0001ebfa) status_pane_g1_ParamLimits

0xba56,	// (0x0001ebfa) status_pane_g1

0xba6c,	// (0x0001ec10) status_pane_g2_ParamLimits

0xba6c,	// (0x0001ec10) status_pane_g2

0x263f,	// (0x000157e3) status_pane_g3_ParamLimits

0x263f,	// (0x000157e3) status_pane_g3

0x0004,

0xf776,	// (0x0002291a) status_pane_g_ParamLimits

0xf776,	// (0x0002291a) status_pane_g

0xba78,	// (0x0001ec1c) title_pane_ParamLimits

0xba78,	// (0x0001ec1c) title_pane

0xbadf,	// (0x0001ec83) uni_indicator_pane_ParamLimits

0xbadf,	// (0x0001ec83) uni_indicator_pane

0x2260,	// (0x00015404) bg_list_pane_ParamLimits

0x2260,	// (0x00015404) bg_list_pane

0xb736,	// (0x0001e8da) find_pane

0x2924,	// (0x00015ac8) listscroll_app_pane_ParamLimits

0x2924,	// (0x00015ac8) listscroll_app_pane

0x2294,	// (0x00015438) listscroll_form_pane

0x999d,	// (0x0001cb41) listscroll_gen_pane_ParamLimits

0x999d,	// (0x0001cb41) listscroll_gen_pane

0xebb5,	// (0x00021d59) listscroll_set_pane

0x3ce4,	// (0x00016e88) main_idle_act_pane

0x1f59,	// (0x000150fd) main_idle_trad_pane

0x1f59,	// (0x000150fd) main_list_empty_pane

0x2288,	// (0x0001542c) main_midp_pane

0x22ae,	// (0x00015452) main_pane_g1_ParamLimits

0x22ae,	// (0x00015452) main_pane_g1

0x99b1,	// (0x0001cb55) popup_ai_message_window_ParamLimits

0x99b1,	// (0x0001cb55) popup_ai_message_window

0x9a51,	// (0x0001cbf5) popup_fep_china_uni_window_ParamLimits

0x9a51,	// (0x0001cbf5) popup_fep_china_uni_window

0xebf7,	// (0x00021d9b) popup_fep_japan_candidate_window_ParamLimits

0xebf7,	// (0x00021d9b) popup_fep_japan_candidate_window

0xec21,	// (0x00021dc5) popup_fep_japan_predictive_window_ParamLimits

0xec21,	// (0x00021dc5) popup_fep_japan_predictive_window

0x9ab1,	// (0x0001cc55) popup_find_window

0x9ace,	// (0x0001cc72) popup_grid_graphic_window_ParamLimits

0x9ace,	// (0x0001cc72) popup_grid_graphic_window

0xec57,	// (0x00021dfb) popup_large_graphic_colour_window

0x9b78,	// (0x0001cd1c) popup_menu_window_ParamLimits

0x9b78,	// (0x0001cd1c) popup_menu_window

0x9d68,	// (0x0001cf0c) popup_note_image_window

0x9d28,	// (0x0001cecc) popup_note_wait_window_ParamLimits

0x9d28,	// (0x0001cecc) popup_note_wait_window

0x9d80,	// (0x0001cf24) popup_note_window_ParamLimits

0x9d80,	// (0x0001cf24) popup_note_window

0x9e2e,	// (0x0001cfd2) popup_query_code_window_ParamLimits

0x9e2e,	// (0x0001cfd2) popup_query_code_window

0xec7d,	// (0x00021e21) popup_query_data_code_window_ParamLimits

0xec7d,	// (0x00021e21) popup_query_data_code_window

0x9e6e,	// (0x0001d012) popup_query_data_window_ParamLimits

0x9e6e,	// (0x0001d012) popup_query_data_window

0x9f02,	// (0x0001d0a6) popup_query_sat_info_window_ParamLimits

0x9f02,	// (0x0001d0a6) popup_query_sat_info_window

0x9fab,	// (0x0001d14f) popup_snote_single_graphic_window_ParamLimits

0x9fab,	// (0x0001d14f) popup_snote_single_graphic_window

0x9fab,	// (0x0001d14f) popup_snote_single_text_window_ParamLimits

0x9fab,	// (0x0001d14f) popup_snote_single_text_window

0xeca0,	// (0x00021e44) popup_sub_window_general

0xecf6,	// (0x00021e9a) popup_window_general_ParamLimits

0xecf6,	// (0x00021e9a) popup_window_general

0x22c4,	// (0x00015468) power_save_pane

0x9824,	// (0x0001c9c8) control_pane_g1_ParamLimits

0x9824,	// (0x0001c9c8) control_pane_g1

0x984d,	// (0x0001c9f1) control_pane_g2_ParamLimits

0x984d,	// (0x0001c9f1) control_pane_g2

0x2223,	// (0x000153c7) control_pane_g3_ParamLimits

0x2223,	// (0x000153c7) control_pane_g3

0x0007,

0xf75e,	// (0x00022902) control_pane_g_ParamLimits

0xf75e,	// (0x00022902) control_pane_g

0x988c,	// (0x0001ca30) control_pane_t1_ParamLimits

0x988c,	// (0x0001ca30) control_pane_t1

0x98f2,	// (0x0001ca96) control_pane_t2_ParamLimits

0x98f2,	// (0x0001ca96) control_pane_t2

0x0002,

0xf76f,	// (0x00022913) control_pane_t_ParamLimits

0xf76f,	// (0x00022913) control_pane_t

0xb668,	// (0x0001e80c) navi_navi_volume_pane_cp1

0xb670,	// (0x0001e814) status_small_icon_pane

0x2158,	// (0x000152fc) status_small_pane_g1_ParamLimits

0x2158,	// (0x000152fc) status_small_pane_g1

0xb678,	// (0x0001e81c) status_small_pane_g2_ParamLimits

0xb678,	// (0x0001e81c) status_small_pane_g2

0xb684,	// (0x0001e828) status_small_pane_g3_ParamLimits

0xb684,	// (0x0001e828) status_small_pane_g3

0xb690,	// (0x0001e834) status_small_pane_g4_ParamLimits

0xb690,	// (0x0001e834) status_small_pane_g4

0xb69c,	// (0x0001e840) status_small_pane_g5_ParamLimits

0xb69c,	// (0x0001e840) status_small_pane_g5

0xb6aa,	// (0x0001e84e) status_small_pane_g6_ParamLimits

0xb6aa,	// (0x0001e84e) status_small_pane_g6

0x0007,

0xf74d,	// (0x000228f1) status_small_pane_g_ParamLimits

0xf74d,	// (0x000228f1) status_small_pane_g

0xb6d9,	// (0x0001e87d) status_small_pane_t1

0xb6fb,	// (0x0001e89f) status_small_wait_pane_ParamLimits

0xb6fb,	// (0x0001e89f) status_small_wait_pane

0xb422,	// (0x0001e5c6) aid_levels_signal_ParamLimits

0xb422,	// (0x0001e5c6) aid_levels_signal

0xb43a,	// (0x0001e5de) signal_pane_g1_ParamLimits

0xb43a,	// (0x0001e5de) signal_pane_g1

0xb455,	// (0x0001e5f9) signal_pane_g2_ParamLimits

0xb455,	// (0x0001e5f9) signal_pane_g2

0x0003,

0xf6de,	// (0x00022882) signal_pane_g_ParamLimits

0xf6de,	// (0x00022882) signal_pane_g

0x198f,	// (0x00014b33) context_pane_g1

0xa92c,	// (0x0001dad0) title_pane_g1

0xa96f,	// (0x0001db13) title_pane_t1

0xc823,	// (0x0001f9c7) title_pane_t2

0xc849,	// (0x0001f9ed) title_pane_t3

0x0002,

0xf532,	// (0x000226d6) title_pane_t

0xbb07,	// (0x0001ecab) aid_levels_battery_ParamLimits

0xbb07,	// (0x0001ecab) aid_levels_battery

0xbb23,	// (0x0001ecc7) battery_pane_g1_ParamLimits

0xbb23,	// (0x0001ecc7) battery_pane_g1

0xbb40,	// (0x0001ece4) battery_pane_g2_ParamLimits

0xbb40,	// (0x0001ece4) battery_pane_g2

0x0001,

0xf781,	// (0x00022925) battery_pane_g_ParamLimits

0xf781,	// (0x00022925) battery_pane_g

0xbd5e,	// (0x0001ef02) uni_indicator_pane_g1

0xbd74,	// (0x0001ef18) uni_indicator_pane_g2

0xbd8a,	// (0x0001ef2e) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x00022a96) uni_indicator_pane_g

0x1dc7,	// (0x00014f6b) navi_icon_pane_ParamLimits

0x1dc7,	// (0x00014f6b) navi_icon_pane

0x1d03,	// (0x00014ea7) navi_midp_pane

0x1de3,	// (0x00014f87) navi_navi_pane

0x1ded,	// (0x00014f91) navi_text_pane_ParamLimits

0x1ded,	// (0x00014f91) navi_text_pane

0xc803,	// (0x0001f9a7) status_small_wait_pane_g1

0xe204,	// (0x000213a8) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x00022a91) status_small_wait_pane_g

0xbcfd,	// (0x0001eea1) navi_navi_icon_text_pane

0xbd05,	// (0x0001eea9) navi_navi_pane_g1_ParamLimits

0xbd05,	// (0x0001eea9) navi_navi_pane_g1

0xbd17,	// (0x0001eebb) navi_navi_pane_g2_ParamLimits

0xbd17,	// (0x0001eebb) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x00022a5f) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x00022a5f) navi_navi_pane_g

0x37a8,	// (0x0001694c) navi_navi_tabs_pane

0xbd29,	// (0x0001eecd) navi_navi_text_pane

0xbcfd,	// (0x0001eea1) navi_navi_volume_pane

0xbceb,	// (0x0001ee8f) navi_text_pane_t1

0xbcdf,	// (0x0001ee83) navi_icon_pane_g1

0x369f,	// (0x00016843) navi_navi_text_pane_t1

0xa29c,	// (0x0001d440) navi_navi_volume_pane_g1

0xa2a4,	// (0x0001d448) volume_small_pane

0xbc3b,	// (0x0001eddf) navi_navi_icon_text_pane_g1

0xbc43,	// (0x0001ede7) navi_navi_icon_text_pane_t1

0x1de3,	// (0x00014f87) navi_tabs_2_long_pane

0x1de3,	// (0x00014f87) navi_tabs_2_pane

0x1de3,	// (0x00014f87) navi_tabs_3_long_pane

0x1de3,	// (0x00014f87) navi_tabs_3_pane

0x1de3,	// (0x00014f87) navi_tabs_4_pane

0xa27c,	// (0x0001d420) tabs_2_active_pane_ParamLimits

0xa27c,	// (0x0001d420) tabs_2_active_pane

0xa28c,	// (0x0001d430) tabs_2_passive_pane_ParamLimits

0xa28c,	// (0x0001d430) tabs_2_passive_pane

0xa24a,	// (0x0001d3ee) tabs_3_active_pane_ParamLimits

0xa24a,	// (0x0001d3ee) tabs_3_active_pane

0xa25a,	// (0x0001d3fe) tabs_3_passive_pane_ParamLimits

0xa25a,	// (0x0001d3fe) tabs_3_passive_pane

0xa26b,	// (0x0001d40f) tabs_3_passive_pane_cp_ParamLimits

0xa26b,	// (0x0001d40f) tabs_3_passive_pane_cp

0xa206,	// (0x0001d3aa) tabs_4_active_pane_ParamLimits

0xa206,	// (0x0001d3aa) tabs_4_active_pane

0xa217,	// (0x0001d3bb) tabs_4_passive_pane_ParamLimits

0xa217,	// (0x0001d3bb) tabs_4_passive_pane

0xa228,	// (0x0001d3cc) tabs_4_passive_pane_cp_ParamLimits

0xa228,	// (0x0001d3cc) tabs_4_passive_pane_cp

0xa239,	// (0x0001d3dd) tabs_4_passive_pane_cp2_ParamLimits

0xa239,	// (0x0001d3dd) tabs_4_passive_pane_cp2

0xa1e2,	// (0x0001d386) tabs_2_long_active_pane_ParamLimits

0xa1e2,	// (0x0001d386) tabs_2_long_active_pane

0xa1f4,	// (0x0001d398) tabs_2_long_passive_pane_ParamLimits

0xa1f4,	// (0x0001d398) tabs_2_long_passive_pane

0xa197,	// (0x0001d33b) tabs_3_long_active_pane_ParamLimits

0xa197,	// (0x0001d33b) tabs_3_long_active_pane

0xa1b0,	// (0x0001d354) tabs_3_long_passive_pane_ParamLimits

0xa1b0,	// (0x0001d354) tabs_3_long_passive_pane

0xa1c9,	// (0x0001d36d) tabs_3_long_passive_pane_cp_ParamLimits

0xa1c9,	// (0x0001d36d) tabs_3_long_passive_pane_cp

0xee54,	// (0x00021ff8) volume_small_pane_g1

0xa146,	// (0x0001d2ea) volume_small_pane_g2

0xa14f,	// (0x0001d2f3) volume_small_pane_g3

0xa158,	// (0x0001d2fc) volume_small_pane_g4

0xa161,	// (0x0001d305) volume_small_pane_g5

0xa16a,	// (0x0001d30e) volume_small_pane_g6

0xa173,	// (0x0001d317) volume_small_pane_g7

0xa17c,	// (0x0001d320) volume_small_pane_g8

0xa185,	// (0x0001d329) volume_small_pane_g9

0xa18e,	// (0x0001d332) volume_small_pane_g10

0x0009,

0xf887,	// (0x00022a2b) volume_small_pane_g

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp2_ParamLimits

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp2

0xa9fb,	// (0x0001db9f) tabs_3_active_pane_g1

0xaa03,	// (0x0001dba7) tabs_3_active_pane_t1

0xc85b,	// (0x0001f9ff) bg_passive_tab_pane_cp2_ParamLimits

0xc85b,	// (0x0001f9ff) bg_passive_tab_pane_cp2

0xa9fb,	// (0x0001db9f) tabs_3_passive_pane_g1

0xaa03,	// (0x0001dba7) tabs_3_passive_pane_t1

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp3_ParamLimits

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp3

0xaa15,	// (0x0001dbb9) tabs_4_active_pane_g1

0xaa1d,	// (0x0001dbc1) tabs_4_active_pane_t1

0xc85b,	// (0x0001f9ff) bg_passive_tab_pane_cp3_ParamLimits

0xc85b,	// (0x0001f9ff) bg_passive_tab_pane_cp3

0xaa15,	// (0x0001dbb9) tabs_4_1_passive_pane_g1

0xaa1d,	// (0x0001dbc1) tabs_4_1_passive_pane_t1

0x2288,	// (0x0001542c) list_highlight_pane_cp2

0xbe1d,	// (0x0001efc1) list_set_pane_ParamLimits

0xbe1d,	// (0x0001efc1) list_set_pane

0xbedf,	// (0x0001f083) main_pane_set_t1_ParamLimits

0xbedf,	// (0x0001f083) main_pane_set_t1

0xbeff,	// (0x0001f0a3) main_pane_set_t2_ParamLimits

0xbeff,	// (0x0001f0a3) main_pane_set_t2

0xbf13,	// (0x0001f0b7) main_pane_set_t3_ParamLimits

0xbf13,	// (0x0001f0b7) main_pane_set_t3

0xbf27,	// (0x0001f0cb) main_pane_set_t4_ParamLimits

0xbf27,	// (0x0001f0cb) main_pane_set_t4

0x0003,

0xf957,	// (0x00022afb) main_pane_set_t_ParamLimits

0xf957,	// (0x00022afb) main_pane_set_t

0xbf3b,	// (0x0001f0df) setting_code_pane

0x3e32,	// (0x00016fd6) setting_slider_graphic_pane

0x3e32,	// (0x00016fd6) setting_slider_pane

0x3e32,	// (0x00016fd6) setting_text_pane

0x3e32,	// (0x00016fd6) setting_volume_pane

0xdfe9,	// (0x0002118d) volume_set_pane

0xc869,	// (0x0001fa0d) bg_set_opt_pane_cp

0xdff3,	// (0x00021197) setting_slider_pane_t1

0xe00c,	// (0x000211b0) setting_slider_pane_t2

0xe026,	// (0x000211ca) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000226dd) setting_slider_pane_t

0xe03e,	// (0x000211e2) slider_set_pane

0xc80d,	// (0x0001f9b1) bg_set_opt_pane_cp2

0xc877,	// (0x0001fa1b) setting_slider_graphic_pane_g1

0xe054,	// (0x000211f8) setting_slider_graphic_pane_t1

0xe064,	// (0x00021208) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000226e4) setting_slider_graphic_pane_t

0xe074,	// (0x00021218) slider_set_pane_cp

0xc80d,	// (0x0001f9b1) input_focus_pane_cp1

0x3ccb,	// (0x00016e6f) list_set_text_pane

0xc803,	// (0x0001f9a7) setting_text_pane_g1

0xc80d,	// (0x0001f9b1) input_focus_pane_cp2

0xc803,	// (0x0001f9a7) setting_code_pane_g1

0xc880,	// (0x0001fa24) setting_code_pane_t1

0xc88e,	// (0x0001fa32) set_text_pane_t1_ParamLimits

0xc88e,	// (0x0001fa32) set_text_pane_t1

0xe687,	// (0x0002182b) set_opt_bg_pane_g1

0xe68f,	// (0x00021833) set_opt_bg_pane_g2

0x3ca3,	// (0x00016e47) set_opt_bg_pane_g3

0xe69f,	// (0x00021843) set_opt_bg_pane_g4

0xe6a7,	// (0x0002184b) set_opt_bg_pane_g5

0xe6af,	// (0x00021853) set_opt_bg_pane_g6

0x3cad,	// (0x00016e51) set_opt_bg_pane_g7

0x3cb7,	// (0x00016e5b) set_opt_bg_pane_g8

0x3cc1,	// (0x00016e65) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x00022ae8) set_opt_bg_pane_g

0x3c96,	// (0x00016e3a) slider_set_pane_g1

0xef34,	// (0x000220d8) slider_set_pane_g2

0x0006,

0xf935,	// (0x00022ad9) slider_set_pane_g

0xee5d,	// (0x00022001) volume_set_pane_g1

0xee67,	// (0x0002200b) volume_set_pane_g2

0xee71,	// (0x00022015) volume_set_pane_g3

0xee7b,	// (0x0002201f) volume_set_pane_g4

0xee85,	// (0x00022029) volume_set_pane_g5

0xeeee,	// (0x00022092) volume_set_pane_g6

0xeef8,	// (0x0002209c) volume_set_pane_g7

0xef02,	// (0x000220a6) volume_set_pane_g8

0xef0c,	// (0x000220b0) volume_set_pane_g9

0xef16,	// (0x000220ba) volume_set_pane_g10

0x0009,

0xf90d,	// (0x00022ab1) volume_set_pane_g

0xaa2f,	// (0x0001dbd3) indicator_pane_ParamLimits

0xaa2f,	// (0x0001dbd3) indicator_pane

0xaa5b,	// (0x0001dbff) main_idle_pane_g2_ParamLimits

0xaa5b,	// (0x0001dbff) main_idle_pane_g2

0xaa93,	// (0x0001dc37) main_pane_idle_g1_ParamLimits

0xaa93,	// (0x0001dc37) main_pane_idle_g1

0xc8a8,	// (0x0001fa4c) popup_clock_digital_analogue_window_ParamLimits

0xc8a8,	// (0x0001fa4c) popup_clock_digital_analogue_window

0xaabd,	// (0x0001dc61) soft_indicator_pane_ParamLimits

0xaabd,	// (0x0001dc61) soft_indicator_pane

0xaad9,	// (0x0001dc7d) wallpaper_pane_ParamLimits

0xaad9,	// (0x0001dc7d) wallpaper_pane

0xc803,	// (0x0001f9a7) wallpaper_pane_g1

0xaaeb,	// (0x0001dc8f) indicator_pane_g1_ParamLimits

0xaaeb,	// (0x0001dc8f) indicator_pane_g1

0x419c,	// (0x00017340) navi_navi_icon_text_pane_srt_g1

0xc8d6,	// (0x0001fa7a) soft_indicator_pane_t1

0xc8f0,	// (0x0001fa94) aid_ps_area_pane

0xab04,	// (0x0001dca8) aid_ps_clock_pane

0xc901,	// (0x0001faa5) aid_ps_indicator_pane

0xc90d,	// (0x0001fab1) indicator_ps_pane_ParamLimits

0xc90d,	// (0x0001fab1) indicator_ps_pane

0xc91c,	// (0x0001fac0) power_save_pane_g1_ParamLimits

0xc91c,	// (0x0001fac0) power_save_pane_g1

0xc928,	// (0x0001facc) power_save_pane_g2_ParamLimits

0xc928,	// (0x0001facc) power_save_pane_g2

0xde1c,	// (0x00020fc0) aid_navinavi_width_pane

0xc8f0,	// (0x0001fa94) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000226e9) power_save_pane_g_ParamLimits

0xf545,	// (0x000226e9) power_save_pane_g

0xc936,	// (0x0001fada) power_save_pane_t1_ParamLimits

0xc936,	// (0x0001fada) power_save_pane_t1

0xab04,	// (0x0001dca8) aid_ps_clock_pane_ParamLimits

0xc901,	// (0x0001faa5) aid_ps_indicator_pane_ParamLimits

0xc948,	// (0x0001faec) power_save_pane_t4_ParamLimits

0xc948,	// (0x0001faec) power_save_pane_t4

0x0001,

0xf54a,	// (0x000226ee) power_save_pane_t_ParamLimits

0xf54a,	// (0x000226ee) power_save_pane_t

0xc972,	// (0x0001fb16) power_save_t3_ParamLimits

0xc972,	// (0x0001fb16) power_save_t3

0xc95d,	// (0x0001fb01) power_save_t2_ParamLimits

0xc95d,	// (0x0001fb01) power_save_t2

0xc987,	// (0x0001fb2b) indicator_ps_pane_g1

0xab12,	// (0x0001dcb6) ai_gene_pane_ParamLimits

0xab12,	// (0x0001dcb6) ai_gene_pane

0xab29,	// (0x0001dccd) ai_links_pane_ParamLimits

0xab29,	// (0x0001dccd) ai_links_pane

0xab41,	// (0x0001dce5) indicator_pane_cp1_ParamLimits

0xab41,	// (0x0001dce5) indicator_pane_cp1

0xab50,	// (0x0001dcf4) main_pane_idle_g1_cp_ParamLimits

0xab50,	// (0x0001dcf4) main_pane_idle_g1_cp

0xc990,	// (0x0001fb34) popup_ai_links_title_window

0xab68,	// (0x0001dd0c) soft_indicator_pane_cp1_ParamLimits

0xab68,	// (0x0001dd0c) soft_indicator_pane_cp1

0x3a57,	// (0x00016bfb) ai_links_pane_g1

0x3a60,	// (0x00016c04) grid_ai_links_pane

0xbd55,	// (0x0001eef9) ai_gene_pane_1

0x3a45,	// (0x00016be9) ai_gene_pane_2

0x3a4e,	// (0x00016bf2) list_highlight_pane_cp4

0xbd31,	// (0x0001eed5) cell_ai_link_pane_ParamLimits

0xbd31,	// (0x0001eed5) cell_ai_link_pane

0x3a14,	// (0x00016bb8) cell_ai_link_pane_g1

0xe204,	// (0x000213a8) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x00022a8c) cell_ai_link_pane_g

0xc80d,	// (0x0001f9b1) grid_highlight_cp2

0xc80d,	// (0x0001f9b1) bg_popup_sub_pane_cp1

0xc9a7,	// (0x0001fb4b) popup_ai_links_title_window_t1

0x3960,	// (0x00016b04) ai_gene_pane_1_g1_ParamLimits

0x3960,	// (0x00016b04) ai_gene_pane_1_g1

0x396c,	// (0x00016b10) ai_gene_pane_1_g2_ParamLimits

0x396c,	// (0x00016b10) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x00022a82) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x00022a82) ai_gene_pane_1_g

0x3979,	// (0x00016b1d) ai_gene_pane_1_t1_ParamLimits

0x3979,	// (0x00016b1d) ai_gene_pane_1_t1

0x39ad,	// (0x00016b51) grid_ai_soft_ind_pane

0x394b,	// (0x00016aef) ai_gene_pane_2_t1_ParamLimits

0x394b,	// (0x00016aef) ai_gene_pane_2_t1

0xab7c,	// (0x0001dd20) main_pane_empty_t1_ParamLimits

0xab7c,	// (0x0001dd20) main_pane_empty_t1

0xab94,	// (0x0001dd38) main_pane_empty_t2_ParamLimits

0xab94,	// (0x0001dd38) main_pane_empty_t2

0xaba9,	// (0x0001dd4d) main_pane_empty_t3_ParamLimits

0xaba9,	// (0x0001dd4d) main_pane_empty_t3

0xabbb,	// (0x0001dd5f) main_pane_empty_t4_ParamLimits

0xabbb,	// (0x0001dd5f) main_pane_empty_t4

0xabcd,	// (0x0001dd71) main_pane_empty_t5_ParamLimits

0xabcd,	// (0x0001dd71) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000226f3) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000226f3) main_pane_empty_t

0x135e,	// (0x00014502) bg_popup_window_pane_ParamLimits

0x135e,	// (0x00014502) bg_popup_window_pane

0x36ad,	// (0x00016851) find_popup_pane_cp2_ParamLimits

0x36ad,	// (0x00016851) find_popup_pane_cp2

0x36b9,	// (0x0001685d) heading_pane_ParamLimits

0x36b9,	// (0x0001685d) heading_pane

0xc80d,	// (0x0001f9b1) bg_popup_sub_pane

0xbc60,	// (0x0001ee04) bg_popup_window_pane_g1_ParamLimits

0xbc60,	// (0x0001ee04) bg_popup_window_pane_g1

0xbc6f,	// (0x0001ee13) bg_popup_window_pane_g2_ParamLimits

0xbc6f,	// (0x0001ee13) bg_popup_window_pane_g2

0xbc7b,	// (0x0001ee1f) bg_popup_window_pane_g3_ParamLimits

0xbc7b,	// (0x0001ee1f) bg_popup_window_pane_g3

0xbc87,	// (0x0001ee2b) bg_popup_window_pane_g4_ParamLimits

0xbc87,	// (0x0001ee2b) bg_popup_window_pane_g4

0xbc96,	// (0x0001ee3a) bg_popup_window_pane_g5_ParamLimits

0xbc96,	// (0x0001ee3a) bg_popup_window_pane_g5

0xbca6,	// (0x0001ee4a) bg_popup_window_pane_g6_ParamLimits

0xbca6,	// (0x0001ee4a) bg_popup_window_pane_g6

0xbcb2,	// (0x0001ee56) bg_popup_window_pane_g7_ParamLimits

0xbcb2,	// (0x0001ee56) bg_popup_window_pane_g7

0xbcc1,	// (0x0001ee65) bg_popup_window_pane_g8_ParamLimits

0xbcc1,	// (0x0001ee65) bg_popup_window_pane_g8

0xbcd0,	// (0x0001ee74) bg_popup_window_pane_g9_ParamLimits

0xbcd0,	// (0x0001ee74) bg_popup_window_pane_g9

0x3693,	// (0x00016837) bg_popup_window_pane_g10_ParamLimits

0x3693,	// (0x00016837) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x00022a4a) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x00022a4a) bg_popup_window_pane_g

0x35bc,	// (0x00016760) bg_popup_heading_pane_ParamLimits

0x35bc,	// (0x00016760) bg_popup_heading_pane

0xefbc,	// (0x00022160) tabs_4_passive_pane_cp_srt_ParamLimits

0xefbc,	// (0x00022160) tabs_4_passive_pane_cp_srt

0xefce,	// (0x00022172) tabs_4_passive_pane_srt_ParamLimits

0x35d0,	// (0x00016774) heading_pane_g2

0xefce,	// (0x00022172) tabs_4_passive_pane_srt

0x2924,	// (0x00015ac8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2924,	// (0x00015ac8) bg_passive_tab_pane_cp3_srt

0x35d8,	// (0x0001677c) heading_pane_t1_ParamLimits

0x35d8,	// (0x0001677c) heading_pane_t1

0x35ef,	// (0x00016793) heading_pane_t2_ParamLimits

0x35ef,	// (0x00016793) heading_pane_t2

0x0001,

0xf8a1,	// (0x00022a45) heading_pane_t_ParamLimits

0xf8a1,	// (0x00022a45) heading_pane_t

0x30e7,	// (0x0001628b) bg_popup_heading_pane_g1

0x3196,	// (0x0001633a) bg_popup_heading_pane_g2

0x31a0,	// (0x00016344) bg_popup_heading_pane_g3

0x31aa,	// (0x0001634e) bg_popup_heading_pane_g4

0x31b4,	// (0x00016358) bg_popup_heading_pane_g5

0x31be,	// (0x00016362) bg_popup_heading_pane_g6

0x31c6,	// (0x0001636a) bg_popup_heading_pane_g7

0x31ce,	// (0x00016372) bg_popup_heading_pane_g8

0x31d8,	// (0x0001637c) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x00022a01) bg_popup_heading_pane_g

0x2800,	// (0x000159a4) bg_popup_sub_pane_g1

0x2810,	// (0x000159b4) bg_popup_sub_pane_g2

0x2808,	// (0x000159ac) bg_popup_sub_pane_g3

0x2820,	// (0x000159c4) bg_popup_sub_pane_g4

0x2818,	// (0x000159bc) bg_popup_sub_pane_g5

0x2828,	// (0x000159cc) bg_popup_sub_pane_g6

0x2830,	// (0x000159d4) bg_popup_sub_pane_g7

0x2840,	// (0x000159e4) bg_popup_sub_pane_g8

0x2838,	// (0x000159dc) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x000229db) bg_popup_sub_pane_g

0xc85b,	// (0x0001f9ff) bg_popup_window_pane_cp5_ParamLimits

0xc85b,	// (0x0001f9ff) bg_popup_window_pane_cp5

0xc9c4,	// (0x0001fb68) popup_note_window_g1_ParamLimits

0xc9c4,	// (0x0001fb68) popup_note_window_g1

0xc9d0,	// (0x0001fb74) popup_note_window_t1_ParamLimits

0xc9d0,	// (0x0001fb74) popup_note_window_t1

0xc9e6,	// (0x0001fb8a) popup_note_window_t2_ParamLimits

0xc9e6,	// (0x0001fb8a) popup_note_window_t2

0xe07c,	// (0x00021220) popup_note_window_t3_ParamLimits

0xe07c,	// (0x00021220) popup_note_window_t3

0xe092,	// (0x00021236) popup_note_window_t4_ParamLimits

0xe092,	// (0x00021236) popup_note_window_t4

0xe0ba,	// (0x0002125e) popup_note_window_t5_ParamLimits

0xe0ba,	// (0x0002125e) popup_note_window_t5

0x0004,

0xf55a,	// (0x000226fe) popup_note_window_t_ParamLimits

0xf55a,	// (0x000226fe) popup_note_window_t

0xe104,	// (0x000212a8) bg_popup_window_pane_cp6_ParamLimits

0xe104,	// (0x000212a8) bg_popup_window_pane_cp6

0x3063,	// (0x00016207) popup_note_image_window_g1_ParamLimits

0x3063,	// (0x00016207) popup_note_image_window_g1

0x306f,	// (0x00016213) popup_note_image_window_g2_ParamLimits

0x306f,	// (0x00016213) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x000229cf) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x000229cf) popup_note_image_window_g

0x3088,	// (0x0001622c) popup_note_image_window_t1_ParamLimits

0x3088,	// (0x0001622c) popup_note_image_window_t1

0x30a1,	// (0x00016245) popup_note_image_window_t2_ParamLimits

0x30a1,	// (0x00016245) popup_note_image_window_t2

0x30ba,	// (0x0001625e) popup_note_image_window_t3_ParamLimits

0x30ba,	// (0x0001625e) popup_note_image_window_t3

0x0002,

0xf830,	// (0x000229d4) popup_note_image_window_t_ParamLimits

0xf830,	// (0x000229d4) popup_note_image_window_t

0x2f23,	// (0x000160c7) bg_popup_window_pane_cp7_ParamLimits

0x2f23,	// (0x000160c7) bg_popup_window_pane_cp7

0x2f53,	// (0x000160f7) popup_note_wait_window_g1_ParamLimits

0x2f53,	// (0x000160f7) popup_note_wait_window_g1

0x2f5f,	// (0x00016103) popup_note_wait_window_g2_ParamLimits

0x2f5f,	// (0x00016103) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x000229bd) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x000229bd) popup_note_wait_window_g

0x2f77,	// (0x0001611b) popup_note_wait_window_t1_ParamLimits

0x2f77,	// (0x0001611b) popup_note_wait_window_t1

0x2f9e,	// (0x00016142) popup_note_wait_window_t2_ParamLimits

0x2f9e,	// (0x00016142) popup_note_wait_window_t2

0x2fbc,	// (0x00016160) popup_note_wait_window_t3_ParamLimits

0x2fbc,	// (0x00016160) popup_note_wait_window_t3

0x2fcf,	// (0x00016173) popup_note_wait_window_t4_ParamLimits

0x2fcf,	// (0x00016173) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x000229c4) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x000229c4) popup_note_wait_window_t

0x2ff4,	// (0x00016198) wait_bar_pane_ParamLimits

0x2ff4,	// (0x00016198) wait_bar_pane

0xc80d,	// (0x0001f9b1) wait_anim_pane

0xc80d,	// (0x0001f9b1) wait_border_pane

0xc803,	// (0x0001f9a7) wait_anim_pane_g1

0xc803,	// (0x0001f9a7) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0002287d) wait_anim_pane_g

0x2ec7,	// (0x0001606b) wait_border_pane_g1

0x2ed2,	// (0x00016076) wait_border_pane_g2

0x2edb,	// (0x0001607f) wait_border_pane_g3

0x0002,

0xf812,	// (0x000229b6) wait_border_pane_g

0x2d31,	// (0x00015ed5) bg_popup_window_pane_cp16_ParamLimits

0x2d31,	// (0x00015ed5) bg_popup_window_pane_cp16

0x2e31,	// (0x00015fd5) indicator_popup_pane_cp4_ParamLimits

0x2e31,	// (0x00015fd5) indicator_popup_pane_cp4

0x2e45,	// (0x00015fe9) popup_query_data_window_t1_ParamLimits

0x2e45,	// (0x00015fe9) popup_query_data_window_t1

0x2e57,	// (0x00015ffb) popup_query_data_window_t2_ParamLimits

0x2e57,	// (0x00015ffb) popup_query_data_window_t2

0x2e70,	// (0x00016014) popup_query_data_window_t3_ParamLimits

0x2e70,	// (0x00016014) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x000229af) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x000229af) popup_query_data_window_t

0x2e8a,	// (0x0001602e) query_popup_data_pane_ParamLimits

0x2e8a,	// (0x0001602e) query_popup_data_pane

0x2e9e,	// (0x00016042) query_popup_data_pane_cp1_ParamLimits

0x2e9e,	// (0x00016042) query_popup_data_pane_cp1

0x2d31,	// (0x00015ed5) bg_popup_window_pane_cp10_ParamLimits

0x2d31,	// (0x00015ed5) bg_popup_window_pane_cp10

0x2d63,	// (0x00015f07) indicator_popup_pane_ParamLimits

0x2d63,	// (0x00015f07) indicator_popup_pane

0x2d85,	// (0x00015f29) popup_query_code_window_t1_ParamLimits

0x2d85,	// (0x00015f29) popup_query_code_window_t1

0x2d9f,	// (0x00015f43) popup_query_code_window_t2_ParamLimits

0x2d9f,	// (0x00015f43) popup_query_code_window_t2

0x2de8,	// (0x00015f8c) popup_query_code_window_t3_ParamLimits

0x2de8,	// (0x00015f8c) popup_query_code_window_t3

0x0002,

0xf804,	// (0x000229a8) popup_query_code_window_t_ParamLimits

0xf804,	// (0x000229a8) popup_query_code_window_t

0x2e17,	// (0x00015fbb) query_popup_pane_ParamLimits

0x2e17,	// (0x00015fbb) query_popup_pane

0xe104,	// (0x000212a8) bg_popup_window_pane_cp15_ParamLimits

0xe104,	// (0x000212a8) bg_popup_window_pane_cp15

0xe124,	// (0x000212c8) indicator_popup_pane_cp1_ParamLimits

0xe124,	// (0x000212c8) indicator_popup_pane_cp1

0xe137,	// (0x000212db) indicator_popup_pane_cp2_ParamLimits

0xe137,	// (0x000212db) indicator_popup_pane_cp2

0xe152,	// (0x000212f6) popup_query_data_code_window_g1_ParamLimits

0xe152,	// (0x000212f6) popup_query_data_code_window_g1

0xe165,	// (0x00021309) popup_query_data_code_window_t1_ParamLimits

0xe165,	// (0x00021309) popup_query_data_code_window_t1

0xe177,	// (0x0002131b) popup_query_data_code_window_t2_ParamLimits

0xe177,	// (0x0002131b) popup_query_data_code_window_t2

0xe189,	// (0x0002132d) popup_query_data_code_window_t3_ParamLimits

0xe189,	// (0x0002132d) popup_query_data_code_window_t3

0xe19f,	// (0x00021343) popup_query_data_code_window_t4_ParamLimits

0xe19f,	// (0x00021343) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00022709) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00022709) popup_query_data_code_window_t

0xedbf,	// (0x00021f63) list_single_midp_graphic_pane_g3

0xe1b9,	// (0x0002135d) query_popup_data_pane_cp2_ParamLimits

0xe1cc,	// (0x00021370) query_popup_pane_cp2_ParamLimits

0xe1cc,	// (0x00021370) query_popup_pane_cp2

0xc80d,	// (0x0001f9b1) bg_popup_window_pane_cp11

0x2d15,	// (0x00015eb9) heading_pane_cp5

0x2d1d,	// (0x00015ec1) listscroll_popup_info_pane

0xc80d,	// (0x0001f9b1) input_focus_pane_cp3

0xe1e7,	// (0x0002138b) query_popup_pane_t1

0xe1f5,	// (0x00021399) list_popup_info_pane_ParamLimits

0xe1f5,	// (0x00021399) list_popup_info_pane

0xe204,	// (0x000213a8) listscroll_popup_info_pane_g1

0xe20c,	// (0x000213b0) scroll_pane_cp7

0xe216,	// (0x000213ba) popup_info_list_pane_t1_ParamLimits

0xe216,	// (0x000213ba) popup_info_list_pane_t1

0xe230,	// (0x000213d4) popup_info_list_pane_t2_ParamLimits

0xe230,	// (0x000213d4) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00022712) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00022712) popup_info_list_pane_t

0xc80d,	// (0x0001f9b1) bg_popup_window_pane_cp12

0x41b6,	// (0x0001735a) find_popup_pane

0xc869,	// (0x0001fa0d) bg_popup_window_pane_cp3

0xe24a,	// (0x000213ee) heading_pane_cp3

0xe259,	// (0x000213fd) listscroll_popup_graphic_pane

0xc80d,	// (0x0001f9b1) bg_popup_window_pane_cp4

0xac2f,	// (0x0001ddd3) heading_pane_cp4

0xe269,	// (0x0002140d) listscroll_popup_colour_pane

0xac39,	// (0x0001dddd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xac39,	// (0x0001dddd) cell_large_graphic_colour_none_popup_pane

0xac4d,	// (0x0001ddf1) grid_large_graphic_colour_popup_pane_ParamLimits

0xac4d,	// (0x0001ddf1) grid_large_graphic_colour_popup_pane

0xac71,	// (0x0001de15) listscroll_popup_colour_pane_g1_ParamLimits

0xac71,	// (0x0001de15) listscroll_popup_colour_pane_g1

0xac88,	// (0x0001de2c) listscroll_popup_colour_pane_g2_ParamLimits

0xac88,	// (0x0001de2c) listscroll_popup_colour_pane_g2

0xac9f,	// (0x0001de43) listscroll_popup_colour_pane_g3_ParamLimits

0xac9f,	// (0x0001de43) listscroll_popup_colour_pane_g3

0xacaf,	// (0x0001de53) listscroll_popup_colour_pane_g4_ParamLimits

0xacaf,	// (0x0001de53) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00022717) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00022717) listscroll_popup_colour_pane_g

0xe271,	// (0x00021415) scroll_pane_cp6_ParamLimits

0xe271,	// (0x00021415) scroll_pane_cp6

0xacbf,	// (0x0001de63) cell_large_graphic_colour_popup_pane_ParamLimits

0xacbf,	// (0x0001de63) cell_large_graphic_colour_popup_pane

0xe283,	// (0x00021427) cell_large_graphic_colour_none_popup_pane_t1

0xc80d,	// (0x0001f9b1) grid_highlight_pane_cp5

0xe292,	// (0x00021436) cell_large_graphic_colour_popup_pane_g1

0xe29a,	// (0x0002143e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00022720) cell_large_graphic_colour_popup_pane_g

0xe2a2,	// (0x00021446) cell_large_graphic_colour_popup_pane_g2_copy1

0xe2ab,	// (0x0002144f) grid_highlight_pane_cp4

0xe2b3,	// (0x00021457) bg_popup_window_pane_cp8_ParamLimits

0xe2b3,	// (0x00021457) bg_popup_window_pane_cp8

0xe2ce,	// (0x00021472) popup_snote_single_text_window_g1_ParamLimits

0xe2ce,	// (0x00021472) popup_snote_single_text_window_g1

0xe2e0,	// (0x00021484) popup_snote_single_text_window_t1_ParamLimits

0xe2e0,	// (0x00021484) popup_snote_single_text_window_t1

0xe2f3,	// (0x00021497) popup_snote_single_text_window_t2_ParamLimits

0xe2f3,	// (0x00021497) popup_snote_single_text_window_t2

0xe306,	// (0x000214aa) popup_snote_single_text_window_t3_ParamLimits

0xe306,	// (0x000214aa) popup_snote_single_text_window_t3

0xe33f,	// (0x000214e3) popup_snote_single_text_window_t4_ParamLimits

0xe33f,	// (0x000214e3) popup_snote_single_text_window_t4

0xe373,	// (0x00021517) popup_snote_single_text_window_t5_ParamLimits

0xe373,	// (0x00021517) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00022725) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00022725) popup_snote_single_text_window_t

0xe3a2,	// (0x00021546) bg_popup_window_pane_cp9_ParamLimits

0xe3a2,	// (0x00021546) bg_popup_window_pane_cp9

0xe2ce,	// (0x00021472) popup_snote_single_graphic_window_g1_ParamLimits

0xe2ce,	// (0x00021472) popup_snote_single_graphic_window_g1

0xe3b0,	// (0x00021554) popup_snote_single_graphic_window_g2_ParamLimits

0xe3b0,	// (0x00021554) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00022730) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00022730) popup_snote_single_graphic_window_g

0xe3bc,	// (0x00021560) popup_snote_single_graphic_window_t1_ParamLimits

0xe3bc,	// (0x00021560) popup_snote_single_graphic_window_t1

0xe3cf,	// (0x00021573) popup_snote_single_graphic_window_t2_ParamLimits

0xe3cf,	// (0x00021573) popup_snote_single_graphic_window_t2

0xe3e2,	// (0x00021586) popup_snote_single_graphic_window_t3_ParamLimits

0xe3e2,	// (0x00021586) popup_snote_single_graphic_window_t3

0xe41b,	// (0x000215bf) popup_snote_single_graphic_window_t4_ParamLimits

0xe41b,	// (0x000215bf) popup_snote_single_graphic_window_t4

0xe44f,	// (0x000215f3) popup_snote_single_graphic_window_t5_ParamLimits

0xe44f,	// (0x000215f3) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00022735) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00022735) popup_snote_single_graphic_window_t

0x40f4,	// (0x00017298) grid_graphic_popup_pane_ParamLimits

0x40f4,	// (0x00017298) grid_graphic_popup_pane

0x4122,	// (0x000172c6) listscroll_popup_graphic_pane_g1_ParamLimits

0x4122,	// (0x000172c6) listscroll_popup_graphic_pane_g1

0xc0a7,	// (0x0001f24b) listscroll_popup_graphic_pane_g2_ParamLimits

0xc0a7,	// (0x0001f24b) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x00022b25) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x00022b25) listscroll_popup_graphic_pane_g

0x414a,	// (0x000172ee) scroll_pane_cp5

0xc05f,	// (0x0001f203) cell_graphic_popup_pane_ParamLimits

0xc05f,	// (0x0001f203) cell_graphic_popup_pane

0x406d,	// (0x00017211) cell_graphic_popup_pane_g1

0x4075,	// (0x00017219) cell_graphic_popup_pane_g2

0xe2a2,	// (0x00021446) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x00022b1e) cell_graphic_popup_pane_g

0x407e,	// (0x00017222) cell_graphic_popup_pane_t2

0xe2ab,	// (0x0002144f) grid_highlight_pane_cp3

0xe490,	// (0x00021634) list_gen_pane_ParamLimits

0xe490,	// (0x00021634) list_gen_pane

0xe4b8,	// (0x0002165c) scroll_pane

0xc016,	// (0x0001f1ba) bg_list_pane_g1_ParamLimits

0xc016,	// (0x0001f1ba) bg_list_pane_g1

0x3fe2,	// (0x00017186) bg_list_pane_g2_ParamLimits

0x3fe2,	// (0x00017186) bg_list_pane_g2

0x3ff7,	// (0x0001719b) bg_list_pane_g3_ParamLimits

0x3ff7,	// (0x0001719b) bg_list_pane_g3

0x400b,	// (0x000171af) bg_list_pane_g4_ParamLimits

0x400b,	// (0x000171af) bg_list_pane_g4

0xc033,	// (0x0001f1d7) bg_list_pane_g5_ParamLimits

0xc033,	// (0x0001f1d7) bg_list_pane_g5

0x0004,

0xf96f,	// (0x00022b13) bg_list_pane_g_ParamLimits

0xf96f,	// (0x00022b13) bg_list_pane_g

0xbf95,	// (0x0001f139) list_double2_graphic_large_graphic_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double2_graphic_large_graphic_pane

0xbf95,	// (0x0001f139) list_double2_graphic_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double2_graphic_pane

0xbf95,	// (0x0001f139) list_double2_large_graphic_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double2_large_graphic_pane

0xbf95,	// (0x0001f139) list_double2_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double2_pane

0xbf95,	// (0x0001f139) list_double_graphic_heading_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double_graphic_heading_pane

0xbf95,	// (0x0001f139) list_double_graphic_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double_graphic_pane

0xbf95,	// (0x0001f139) list_double_heading_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double_heading_pane

0xbf95,	// (0x0001f139) list_double_large_graphic_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double_large_graphic_pane

0xbf95,	// (0x0001f139) list_double_number_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double_number_pane

0xbf95,	// (0x0001f139) list_double_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double_pane

0xbf95,	// (0x0001f139) list_double_time_pane_ParamLimits

0xbf95,	// (0x0001f139) list_double_time_pane

0xbf95,	// (0x0001f139) list_setting_number_pane_ParamLimits

0xbf95,	// (0x0001f139) list_setting_number_pane

0xbf95,	// (0x0001f139) list_setting_pane_ParamLimits

0xbf95,	// (0x0001f139) list_setting_pane

0xbfa9,	// (0x0001f14d) list_single_2graphic_pane_ParamLimits

0xbfa9,	// (0x0001f14d) list_single_2graphic_pane

0xbfa9,	// (0x0001f14d) list_single_graphic_heading_pane_ParamLimits

0xbfa9,	// (0x0001f14d) list_single_graphic_heading_pane

0xbfa9,	// (0x0001f14d) list_single_graphic_pane_ParamLimits

0xbfa9,	// (0x0001f14d) list_single_graphic_pane

0xbfa9,	// (0x0001f14d) list_single_heading_pane_ParamLimits

0xbfa9,	// (0x0001f14d) list_single_heading_pane

0xc001,	// (0x0001f1a5) list_single_large_graphic_pane_ParamLimits

0xc001,	// (0x0001f1a5) list_single_large_graphic_pane

0xbfa9,	// (0x0001f14d) list_single_number_heading_pane_ParamLimits

0xbfa9,	// (0x0001f14d) list_single_number_heading_pane

0xbfa9,	// (0x0001f14d) list_single_number_pane_ParamLimits

0xbfa9,	// (0x0001f14d) list_single_number_pane

0xbfa9,	// (0x0001f14d) list_single_pane_ParamLimits

0xbfa9,	// (0x0001f14d) list_single_pane

0xc80d,	// (0x0001f9b1) list_highlight_pane_cp1

0x2776,	// (0x0001591a) list_single_pane_g1_ParamLimits

0x2776,	// (0x0001591a) list_single_pane_g1

0x2782,	// (0x00015926) list_single_pane_g2_ParamLimits

0x2782,	// (0x00015926) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00022747) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00022747) list_single_pane_g

0x47df,	// (0x00017983) list_single_pane_t1_ParamLimits

0x47df,	// (0x00017983) list_single_pane_t1

0x2776,	// (0x0001591a) list_single_number_pane_g1_ParamLimits

0x2776,	// (0x0001591a) list_single_number_pane_g1

0x2782,	// (0x00015926) list_single_number_pane_g2_ParamLimits

0x2782,	// (0x00015926) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00022747) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00022747) list_single_number_pane_g

0x278e,	// (0x00015932) list_single_number_pane_t1_ParamLimits

0x278e,	// (0x00015932) list_single_number_pane_t1

0x48f0,	// (0x00017a94) list_single_number_pane_t2_ParamLimits

0x48f0,	// (0x00017a94) list_single_number_pane_t2

0x0001,

0xf930,	// (0x00022ad4) list_single_number_pane_t_ParamLimits

0xf930,	// (0x00022ad4) list_single_number_pane_t

0x5d44,	// (0x00018ee8) list_single_graphic_pane_g1_ParamLimits

0x5d44,	// (0x00018ee8) list_single_graphic_pane_g1

0x2776,	// (0x0001591a) list_single_graphic_pane_g2_ParamLimits

0x2776,	// (0x0001591a) list_single_graphic_pane_g2

0x2782,	// (0x00015926) list_single_graphic_pane_g3_ParamLimits

0x2782,	// (0x00015926) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00022740) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00022740) list_single_graphic_pane_g

0xacea,	// (0x0001de8e) list_single_graphic_pane_t1_ParamLimits

0xacea,	// (0x0001de8e) list_single_graphic_pane_t1

0x2776,	// (0x0001591a) list_single_heading_pane_g1_ParamLimits

0x2776,	// (0x0001591a) list_single_heading_pane_g1

0x2782,	// (0x00015926) list_single_heading_pane_g2_ParamLimits

0x2782,	// (0x00015926) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022747) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022747) list_single_heading_pane_g

0xad00,	// (0x0001dea4) list_single_heading_pane_t1_ParamLimits

0xad00,	// (0x0001dea4) list_single_heading_pane_t1

0xad16,	// (0x0001deba) list_single_heading_pane_t2_ParamLimits

0xad16,	// (0x0001deba) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002274c) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002274c) list_single_heading_pane_t

0x2776,	// (0x0001591a) list_single_number_heading_pane_g1_ParamLimits

0x2776,	// (0x0001591a) list_single_number_heading_pane_g1

0x2782,	// (0x00015926) list_single_number_heading_pane_g2_ParamLimits

0x2782,	// (0x00015926) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022747) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022747) list_single_number_heading_pane_g

0xad00,	// (0x0001dea4) list_single_number_heading_pane_t1_ParamLimits

0xad00,	// (0x0001dea4) list_single_number_heading_pane_t1

0x47a9,	// (0x0001794d) list_single_number_heading_pane_t2_ParamLimits

0x47a9,	// (0x0001794d) list_single_number_heading_pane_t2

0x47bb,	// (0x0001795f) list_single_number_heading_pane_t3_ParamLimits

0x47bb,	// (0x0001795f) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00022751) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00022751) list_single_number_heading_pane_t

0x276a,	// (0x0001590e) list_single_graphic_heading_pane_g1_ParamLimits

0x276a,	// (0x0001590e) list_single_graphic_heading_pane_g1

0xad28,	// (0x0001decc) list_single_graphic_heading_pane_g4_ParamLimits

0xad28,	// (0x0001decc) list_single_graphic_heading_pane_g4

0x2782,	// (0x00015926) list_single_graphic_heading_pane_g5_ParamLimits

0x2782,	// (0x00015926) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00022758) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00022758) list_single_graphic_heading_pane_g

0xad00,	// (0x0001dea4) list_single_graphic_heading_pane_t1_ParamLimits

0xad00,	// (0x0001dea4) list_single_graphic_heading_pane_t1

0xad39,	// (0x0001dedd) list_single_graphic_heading_pane_t2_ParamLimits

0xad39,	// (0x0001dedd) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002275f) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002275f) list_single_graphic_heading_pane_t

0x47f5,	// (0x00017999) list_single_large_graphic_pane_g1_ParamLimits

0x47f5,	// (0x00017999) list_single_large_graphic_pane_g1

0x4801,	// (0x000179a5) list_single_large_graphic_pane_g2_ParamLimits

0x4801,	// (0x000179a5) list_single_large_graphic_pane_g2

0x480d,	// (0x000179b1) list_single_large_graphic_pane_g3_ParamLimits

0x480d,	// (0x000179b1) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00022764) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00022764) list_single_large_graphic_pane_g

0x2ed2,	// (0x00016076) wait_border_pane_g2_copy1

0xad4b,	// (0x0001deef) list_single_large_graphic_pane_g4_cp2

0x4819,	// (0x000179bd) list_single_large_graphic_pane_t1_ParamLimits

0x4819,	// (0x000179bd) list_single_large_graphic_pane_t1

0xad53,	// (0x0001def7) list_double_pane_g1_ParamLimits

0xad53,	// (0x0001def7) list_double_pane_g1

0xad5f,	// (0x0001df03) list_double_pane_g2_ParamLimits

0xad5f,	// (0x0001df03) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002276b) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002276b) list_double_pane_g

0xad6b,	// (0x0001df0f) list_double_pane_t1_ParamLimits

0xad6b,	// (0x0001df0f) list_double_pane_t1

0xad81,	// (0x0001df25) list_double_pane_t2_ParamLimits

0xad81,	// (0x0001df25) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00022770) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00022770) list_double_pane_t

0xad93,	// (0x0001df37) list_double2_pane_g1_ParamLimits

0xad93,	// (0x0001df37) list_double2_pane_g1

0xada4,	// (0x0001df48) list_double2_pane_g2_ParamLimits

0xada4,	// (0x0001df48) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00022775) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00022775) list_double2_pane_g

0xadb0,	// (0x0001df54) list_double2_pane_t1_ParamLimits

0xadb0,	// (0x0001df54) list_double2_pane_t1

0xadc6,	// (0x0001df6a) list_double2_pane_t2_ParamLimits

0xadc6,	// (0x0001df6a) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002277a) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002277a) list_double2_pane_t

0xad53,	// (0x0001def7) list_double_number_pane_g1_ParamLimits

0xad53,	// (0x0001def7) list_double_number_pane_g1

0xad5f,	// (0x0001df03) list_double_number_pane_g2_ParamLimits

0xad5f,	// (0x0001df03) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002276b) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002276b) list_double_number_pane_g

0xadd8,	// (0x0001df7c) list_double_number_pane_t1_ParamLimits

0xadd8,	// (0x0001df7c) list_double_number_pane_t1

0xadea,	// (0x0001df8e) list_double_number_pane_t2_ParamLimits

0xadea,	// (0x0001df8e) list_double_number_pane_t2

0xae00,	// (0x0001dfa4) list_double_number_pane_t3_ParamLimits

0xae00,	// (0x0001dfa4) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002277f) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002277f) list_double_number_pane_t

0xae12,	// (0x0001dfb6) list_double_graphic_pane_g1_ParamLimits

0xae12,	// (0x0001dfb6) list_double_graphic_pane_g1

0xae1e,	// (0x0001dfc2) list_double_graphic_pane_g2_ParamLimits

0xae1e,	// (0x0001dfc2) list_double_graphic_pane_g2

0xae2d,	// (0x0001dfd1) list_double_graphic_pane_g3_ParamLimits

0xae2d,	// (0x0001dfd1) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00022786) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00022786) list_double_graphic_pane_g

0xae45,	// (0x0001dfe9) list_double_graphic_pane_t1_ParamLimits

0xae45,	// (0x0001dfe9) list_double_graphic_pane_t1

0xae5b,	// (0x0001dfff) list_double_graphic_pane_t2_ParamLimits

0xae5b,	// (0x0001dfff) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002278f) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002278f) list_double_graphic_pane_t

0xae6d,	// (0x0001e011) list_double2_graphic_pane_g1_ParamLimits

0xae6d,	// (0x0001e011) list_double2_graphic_pane_g1

0xae79,	// (0x0001e01d) list_double2_graphic_pane_g2_ParamLimits

0xae79,	// (0x0001e01d) list_double2_graphic_pane_g2

0xada4,	// (0x0001df48) list_double2_graphic_pane_g3_ParamLimits

0xada4,	// (0x0001df48) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00022794) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00022794) list_double2_graphic_pane_g

0xae85,	// (0x0001e029) list_double2_graphic_pane_t1_ParamLimits

0xae85,	// (0x0001e029) list_double2_graphic_pane_t1

0xae9b,	// (0x0001e03f) list_double2_graphic_pane_t2_ParamLimits

0xae9b,	// (0x0001e03f) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002279b) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002279b) list_double2_graphic_pane_t

0xaead,	// (0x0001e051) list_double_large_graphic_pane_g1_ParamLimits

0xaead,	// (0x0001e051) list_double_large_graphic_pane_g1

0xaecc,	// (0x0001e070) list_double_large_graphic_pane_g2_ParamLimits

0xaecc,	// (0x0001e070) list_double_large_graphic_pane_g2

0xad5f,	// (0x0001df03) list_double_large_graphic_pane_g3_ParamLimits

0xad5f,	// (0x0001df03) list_double_large_graphic_pane_g3

0xaedd,	// (0x0001e081) list_double_large_graphic_pane_g4_ParamLimits

0xaedd,	// (0x0001e081) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000227a0) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000227a0) list_double_large_graphic_pane_g

0xaef0,	// (0x0001e094) list_double_large_graphic_pane_t1_ParamLimits

0xaef0,	// (0x0001e094) list_double_large_graphic_pane_t1

0xaf09,	// (0x0001e0ad) list_double_large_graphic_pane_t2_ParamLimits

0xaf09,	// (0x0001e0ad) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000227ab) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000227ab) list_double_large_graphic_pane_t

0xaf1b,	// (0x0001e0bf) list_double2_large_graphic_pane_g1_ParamLimits

0xaf1b,	// (0x0001e0bf) list_double2_large_graphic_pane_g1

0xad93,	// (0x0001df37) list_double2_large_graphic_pane_g2_ParamLimits

0xad93,	// (0x0001df37) list_double2_large_graphic_pane_g2

0xada4,	// (0x0001df48) list_double2_large_graphic_pane_g3_ParamLimits

0xada4,	// (0x0001df48) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000227b0) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000227b0) list_double2_large_graphic_pane_g

0xaf27,	// (0x0001e0cb) list_double2_large_graphic_pane_t1_ParamLimits

0xaf27,	// (0x0001e0cb) list_double2_large_graphic_pane_t1

0xaf3d,	// (0x0001e0e1) list_double2_large_graphic_pane_t2_ParamLimits

0xaf3d,	// (0x0001e0e1) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x000227b7) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x000227b7) list_double2_large_graphic_pane_t

0xaf4f,	// (0x0001e0f3) list_double_heading_pane_g1_ParamLimits

0xaf4f,	// (0x0001e0f3) list_double_heading_pane_g1

0xe501,	// (0x000216a5) list_double_heading_pane_g2_ParamLimits

0xe501,	// (0x000216a5) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x000227bc) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x000227bc) list_double_heading_pane_g

0xaf60,	// (0x0001e104) list_double_heading_pane_t1_ParamLimits

0xaf60,	// (0x0001e104) list_double_heading_pane_t1

0xaf76,	// (0x0001e11a) list_double_heading_pane_t2_ParamLimits

0xaf76,	// (0x0001e11a) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x000227c1) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x000227c1) list_double_heading_pane_t

0xae6d,	// (0x0001e011) list_double_graphic_heading_pane_g1_ParamLimits

0xae6d,	// (0x0001e011) list_double_graphic_heading_pane_g1

0xaf4f,	// (0x0001e0f3) list_double_graphic_heading_pane_g2_ParamLimits

0xaf4f,	// (0x0001e0f3) list_double_graphic_heading_pane_g2

0xe501,	// (0x000216a5) list_double_graphic_heading_pane_g3_ParamLimits

0xe501,	// (0x000216a5) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x000227c6) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000227c6) list_double_graphic_heading_pane_g

0xaf88,	// (0x0001e12c) list_double_graphic_heading_pane_t1_ParamLimits

0xaf88,	// (0x0001e12c) list_double_graphic_heading_pane_t1

0xaf9e,	// (0x0001e142) list_double_graphic_heading_pane_t2_ParamLimits

0xaf9e,	// (0x0001e142) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000227cd) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000227cd) list_double_graphic_heading_pane_t

0xaecc,	// (0x0001e070) list_double_time_pane_g1_ParamLimits

0xaecc,	// (0x0001e070) list_double_time_pane_g1

0xad5f,	// (0x0001df03) list_double_time_pane_g2_ParamLimits

0xad5f,	// (0x0001df03) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x000227d2) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x000227d2) list_double_time_pane_g

0xafb0,	// (0x0001e154) list_double_time_pane_t1_ParamLimits

0xafb0,	// (0x0001e154) list_double_time_pane_t1

0xafc6,	// (0x0001e16a) list_double_time_pane_t2_ParamLimits

0xafc6,	// (0x0001e16a) list_double_time_pane_t2

0xafd8,	// (0x0001e17c) list_double_time_pane_t3_ParamLimits

0xafd8,	// (0x0001e17c) list_double_time_pane_t3

0xafea,	// (0x0001e18e) list_double_time_pane_t4_ParamLimits

0xafea,	// (0x0001e18e) list_double_time_pane_t4

0x0003,

0xf633,	// (0x000227d7) list_double_time_pane_t_ParamLimits

0xf633,	// (0x000227d7) list_double_time_pane_t

0xae79,	// (0x0001e01d) list_setting_pane_g1_ParamLimits

0xae79,	// (0x0001e01d) list_setting_pane_g1

0xada4,	// (0x0001df48) list_setting_pane_g2_ParamLimits

0xada4,	// (0x0001df48) list_setting_pane_g2

0x0001,

0xf63c,	// (0x000227e0) list_setting_pane_g_ParamLimits

0xf63c,	// (0x000227e0) list_setting_pane_g

0xaffc,	// (0x0001e1a0) list_setting_pane_t1_ParamLimits

0xaffc,	// (0x0001e1a0) list_setting_pane_t1

0xb013,	// (0x0001e1b7) list_setting_pane_t2_ParamLimits

0xb013,	// (0x0001e1b7) list_setting_pane_t2

0x0002,

0xf641,	// (0x000227e5) list_setting_pane_t_ParamLimits

0xf641,	// (0x000227e5) list_setting_pane_t

0xb052,	// (0x0001e1f6) set_value_pane_cp_ParamLimits

0xb052,	// (0x0001e1f6) set_value_pane_cp

0xae79,	// (0x0001e01d) list_setting_number_pane_g1_ParamLimits

0xae79,	// (0x0001e01d) list_setting_number_pane_g1

0xada4,	// (0x0001df48) list_setting_number_pane_g2_ParamLimits

0xada4,	// (0x0001df48) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x000227e0) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x000227e0) list_setting_number_pane_g

0xb060,	// (0x0001e204) list_setting_number_pane_t1_ParamLimits

0xb060,	// (0x0001e204) list_setting_number_pane_t1

0xb074,	// (0x0001e218) list_setting_number_pane_t2_ParamLimits

0xb074,	// (0x0001e218) list_setting_number_pane_t2

0xb08b,	// (0x0001e22f) list_setting_number_pane_t3_ParamLimits

0xb08b,	// (0x0001e22f) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x000227ec) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x000227ec) list_setting_number_pane_t

0xb052,	// (0x0001e1f6) set_value_pane_ParamLimits

0xb052,	// (0x0001e1f6) set_value_pane

0xe50d,	// (0x000216b1) bg_set_opt_pane_ParamLimits

0xe50d,	// (0x000216b1) bg_set_opt_pane

0xe52e,	// (0x000216d2) set_value_pane_t1

0xe53c,	// (0x000216e0) slider_set_pane_cp3

0xe545,	// (0x000216e9) volume_small_pane_cp

0xe54e,	// (0x000216f2) list_form_gen_pane

0xe557,	// (0x000216fb) scroll_pane_cp8

0xb0ce,	// (0x0001e272) form_field_data_pane_ParamLimits

0xb0ce,	// (0x0001e272) form_field_data_pane

0xb0e9,	// (0x0001e28d) form_field_data_wide_pane_ParamLimits

0xb0e9,	// (0x0001e28d) form_field_data_wide_pane

0xe578,	// (0x0002171c) form_field_popup_pane_ParamLimits

0xe578,	// (0x0002171c) form_field_popup_pane

0xb10d,	// (0x0001e2b1) form_field_popup_wide_pane_ParamLimits

0xb10d,	// (0x0001e2b1) form_field_popup_wide_pane

0xe59a,	// (0x0002173e) form_field_slider_pane_ParamLimits

0xe59a,	// (0x0002173e) form_field_slider_pane

0xe5ad,	// (0x00021751) form_field_slider_wide_pane_ParamLimits

0xe5ad,	// (0x00021751) form_field_slider_wide_pane

0xe5c0,	// (0x00021764) data_form_pane

0xb138,	// (0x0001e2dc) form_field_data_pane_t1

0xe5cc,	// (0x00021770) input_focus_pane

0xe5da,	// (0x0002177e) data_form_wide_pane

0xe612,	// (0x000217b6) form_field_data_wide_pane_t1

0xe2c0,	// (0x00021464) input_focus_pane_cp6

0xb152,	// (0x0001e2f6) form_field_popup_pane_t1

0xe5cc,	// (0x00021770) input_focus_pane_cp7

0xe631,	// (0x000217d5) list_form_pane

0xe645,	// (0x000217e9) form_field_popup_wide_pane_t1

0xe5cc,	// (0x00021770) input_focus_pane_cp8

0xe657,	// (0x000217fb) list_form_wide_pane

0xb174,	// (0x0001e318) form_field_slider_pane_t1_ParamLimits

0xb174,	// (0x0001e318) form_field_slider_pane_t1

0xb18c,	// (0x0001e330) form_field_slider_pane_t2_ParamLimits

0xb18c,	// (0x0001e330) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x000227fc) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x000227fc) form_field_slider_pane_t

0xc85b,	// (0x0001f9ff) input_focus_pane_cp9_ParamLimits

0xc85b,	// (0x0001f9ff) input_focus_pane_cp9

0xb1a1,	// (0x0001e345) slider_cont_pane_ParamLimits

0xb1a1,	// (0x0001e345) slider_cont_pane

0xe663,	// (0x00021807) form_field_slider_wide_pane_t1_ParamLimits

0xe663,	// (0x00021807) form_field_slider_wide_pane_t1

0xe675,	// (0x00021819) form_field_slider_wide_pane_t2_ParamLimits

0xe675,	// (0x00021819) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00022801) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00022801) form_field_slider_wide_pane_t

0xc85b,	// (0x0001f9ff) input_focus_pane_cp10_ParamLimits

0xc85b,	// (0x0001f9ff) input_focus_pane_cp10

0xb1b5,	// (0x0001e359) slider_cont_pane_cp1_ParamLimits

0xb1b5,	// (0x0001e359) slider_cont_pane_cp1

0xb1c9,	// (0x0001e36d) slider_form_pane_cp

0xe687,	// (0x0002182b) input_focus_pane_g1

0xe68f,	// (0x00021833) input_focus_pane_g2

0xe697,	// (0x0002183b) input_focus_pane_g3

0xe69f,	// (0x00021843) input_focus_pane_g4

0xe6a7,	// (0x0002184b) input_focus_pane_g5

0xe6af,	// (0x00021853) input_focus_pane_g6

0xe6b7,	// (0x0002185b) input_focus_pane_g7

0xe6bf,	// (0x00021863) input_focus_pane_g8

0xe6c7,	// (0x0002186b) input_focus_pane_g9

0xc803,	// (0x0001f9a7) input_focus_pane_g10

0x0009,

0xf662,	// (0x00022806) input_focus_pane_g

0x2edb,	// (0x0001607f) wait_border_pane_g3_copy1

0xb1d1,	// (0x0001e375) data_form_pane_t1

0xc803,	// (0x0001f9a7) wait_anim_pane_g1_copy1

0xbf6a,	// (0x0001f10e) data_form_wide_pane_t1

0xe6cf,	// (0x00021873) list_form_graphic_pane_cp_ParamLimits

0xe6cf,	// (0x00021873) list_form_graphic_pane_cp

0x3e5a,	// (0x00016ffe) slider_form_pane_g1

0x3e63,	// (0x00017007) slider_form_pane_g2

0x0006,

0xf960,	// (0x00022b04) slider_form_pane_g

0xe6cf,	// (0x00021873) list_form_graphic_pane_ParamLimits

0xe6cf,	// (0x00021873) list_form_graphic_pane

0xe6e1,	// (0x00021885) list_form_graphic_pane_g1

0xe6e9,	// (0x0002188d) list_form_graphic_pane_t1_ParamLimits

0xe6e9,	// (0x0002188d) list_form_graphic_pane_t1

0xc869,	// (0x0001fa0d) list_highlight_pane_cp5_ParamLimits

0xc869,	// (0x0001fa0d) list_highlight_pane_cp5

0xb1ed,	// (0x0001e391) find_pane_g1

0x12a5,	// (0x00014449) input_find_pane

0xb1f6,	// (0x0001e39a) input_find_pane_g1_ParamLimits

0xb1f6,	// (0x0001e39a) input_find_pane_g1

0xb202,	// (0x0001e3a6) input_find_pane_t1_ParamLimits

0xb202,	// (0x0001e3a6) input_find_pane_t1

0xb217,	// (0x0001e3bb) input_find_pane_t2_ParamLimits

0xb217,	// (0x0001e3bb) input_find_pane_t2

0x0001,

0xf677,	// (0x0002281b) input_find_pane_t_ParamLimits

0xf677,	// (0x0002281b) input_find_pane_t

0x12e4,	// (0x00014488) input_focus_pane_cp5_ParamLimits

0x12e4,	// (0x00014488) input_focus_pane_cp5

0x1303,	// (0x000144a7) bg_popup_window_pane_cp2_ParamLimits

0x1303,	// (0x000144a7) bg_popup_window_pane_cp2

0x1310,	// (0x000144b4) listscroll_menu_pane_ParamLimits

0x1310,	// (0x000144b4) listscroll_menu_pane

0xb238,	// (0x0001e3dc) popup_submenu_window_ParamLimits

0xb238,	// (0x0001e3dc) popup_submenu_window

0x134c,	// (0x000144f0) find_popup_pane_g1

0x1354,	// (0x000144f8) input_popup_find_pane_cp

0x135e,	// (0x00014502) input_focus_pane_cp4_ParamLimits

0x135e,	// (0x00014502) input_focus_pane_cp4

0x137a,	// (0x0001451e) input_popup_find_pane_t1_ParamLimits

0x137a,	// (0x0001451e) input_popup_find_pane_t1

0xc80d,	// (0x0001f9b1) bg_popup_sub_pane_cp

0x13a8,	// (0x0001454c) listscroll_popup_sub_pane

0x13b0,	// (0x00014554) list_submenu_pane_ParamLimits

0x13b0,	// (0x00014554) list_submenu_pane

0x13c1,	// (0x00014565) scroll_pane_cp4

0x13c9,	// (0x0001456d) list_single_popup_submenu_pane_ParamLimits

0x13c9,	// (0x0001456d) list_single_popup_submenu_pane

0x13de,	// (0x00014582) list_single_popup_submenu_pane_g1

0x13e6,	// (0x0001458a) list_single_popup_submenu_pane_t1_ParamLimits

0x13e6,	// (0x0001458a) list_single_popup_submenu_pane_t1

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp1_ParamLimits

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp1

0xb276,	// (0x0001e41a) tabs_2_active_pane_g1

0xb27e,	// (0x0001e422) tabs_2_active_pane_t1

0xc85b,	// (0x0001f9ff) bg_passive_tab_pane_cp1_ParamLimits

0xc85b,	// (0x0001f9ff) bg_passive_tab_pane_cp1

0xb276,	// (0x0001e41a) tabs_2_passive_pane_g1

0xb27e,	// (0x0001e422) tabs_2_passive_pane_t1

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp4

0xb290,	// (0x0001e434) tabs_2_long_active_pane_t1

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp4

0xedc7,	// (0x00021f6b) list_single_midp_graphic_pane_g4_ParamLimits

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp5

0xb2a3,	// (0x0001e447) tabs_3_long_active_pane_t1

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp5

0xedc7,	// (0x00021f6b) list_single_midp_graphic_pane_g4

0xc869,	// (0x0001fa0d) bg_popup_window_pane_cp13_ParamLimits

0xc869,	// (0x0001fa0d) bg_popup_window_pane_cp13

0x145d,	// (0x00014601) listscroll_popup_fast_pane_ParamLimits

0x145d,	// (0x00014601) listscroll_popup_fast_pane

0x146c,	// (0x00014610) grid_popup_fast_pane_ParamLimits

0x146c,	// (0x00014610) grid_popup_fast_pane

0x147e,	// (0x00014622) scroll_pane_cp9_ParamLimits

0x147e,	// (0x00014622) scroll_pane_cp9

0x5dbe,	// (0x00018f62) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5dbe,	// (0x00018f62) list_single_graphic_hl_pane_t1_cp2

0x14a2,	// (0x00014646) input_focus_pane_cp20_ParamLimits

0x14a2,	// (0x00014646) input_focus_pane_cp20

0x14b0,	// (0x00014654) query_popup_data_pane_t1_ParamLimits

0x14b0,	// (0x00014654) query_popup_data_pane_t1

0x14c3,	// (0x00014667) query_popup_data_pane_t2_ParamLimits

0x14c3,	// (0x00014667) query_popup_data_pane_t2

0x1509,	// (0x000146ad) query_popup_data_pane_t3_ParamLimits

0x1509,	// (0x000146ad) query_popup_data_pane_t3

0x154a,	// (0x000146ee) query_popup_data_pane_t4_ParamLimits

0x154a,	// (0x000146ee) query_popup_data_pane_t4

0x1586,	// (0x0001472a) query_popup_data_pane_t5_ParamLimits

0x1586,	// (0x0001472a) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00022820) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00022820) query_popup_data_pane_t

0xe687,	// (0x0002182b) bg_set_opt_pane_g1

0xe68f,	// (0x00021833) bg_set_opt_pane_g2

0xe697,	// (0x0002183b) bg_set_opt_pane_g3

0xe69f,	// (0x00021843) bg_set_opt_pane_g4

0xe6a7,	// (0x0002184b) bg_set_opt_pane_g5

0xe6af,	// (0x00021853) bg_set_opt_pane_g6

0xe6b7,	// (0x0002185b) bg_set_opt_pane_g7

0xe6bf,	// (0x00021863) bg_set_opt_pane_g8

0xe6c7,	// (0x0002186b) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0002282b) bg_set_opt_pane_g

0xe9a4,	// (0x00021b48) control_top_pane_stacon_ParamLimits

0xe9a4,	// (0x00021b48) control_top_pane_stacon

0xe9f7,	// (0x00021b9b) signal_pane_stacon_ParamLimits

0xe9f7,	// (0x00021b9b) signal_pane_stacon

0x1be2,	// (0x00014d86) stacon_top_pane_g1_ParamLimits

0x1be2,	// (0x00014d86) stacon_top_pane_g1

0xea1c,	// (0x00021bc0) title_pane_stacon_ParamLimits

0xea1c,	// (0x00021bc0) title_pane_stacon

0xea46,	// (0x00021bea) uni_indicator_pane_stacon_ParamLimits

0xea46,	// (0x00021bea) uni_indicator_pane_stacon

0xea5b,	// (0x00021bff) battery_pane_stacon_ParamLimits

0xea5b,	// (0x00021bff) battery_pane_stacon

0xea9f,	// (0x00021c43) control_bottom_pane_stacon_ParamLimits

0xea9f,	// (0x00021c43) control_bottom_pane_stacon

0xeac2,	// (0x00021c66) navi_pane_stacon_ParamLimits

0xeac2,	// (0x00021c66) navi_pane_stacon

0x1c04,	// (0x00014da8) stacon_bottom_pane_g1_ParamLimits

0x1c04,	// (0x00014da8) stacon_bottom_pane_g1

0xe6fe,	// (0x000218a2) aid_levels_signal_lsc_ParamLimits

0xe6fe,	// (0x000218a2) aid_levels_signal_lsc

0xe715,	// (0x000218b9) signal_pane_stacon_g1_ParamLimits

0xe715,	// (0x000218b9) signal_pane_stacon_g1

0xe729,	// (0x000218cd) signal_pane_stacon_g2_ParamLimits

0xe729,	// (0x000218cd) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0002283e) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0002283e) signal_pane_stacon_g

0xe75e,	// (0x00021902) title_pane_stacon_t1_ParamLimits

0xe75e,	// (0x00021902) title_pane_stacon_t1

0x15ca,	// (0x0001476e) uni_indicator_pane_stacon_g1

0x15d4,	// (0x00014778) uni_indicator_pane_stacon_g2

0x15de,	// (0x00014782) uni_indicator_pane_stacon_g3

0x15e8,	// (0x0001478c) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0002284a) uni_indicator_pane_stacon_g

0xe783,	// (0x00021927) control_top_pane_stacon_g1

0xe78b,	// (0x0002192f) control_top_pane_stacon_t1_ParamLimits

0xe78b,	// (0x0002192f) control_top_pane_stacon_t1

0xe7c2,	// (0x00021966) aid_levels_battery_lsc_ParamLimits

0xe7c2,	// (0x00021966) aid_levels_battery_lsc

0xe7da,	// (0x0002197e) battery_pane_stacon_g1_ParamLimits

0xe7da,	// (0x0002197e) battery_pane_stacon_g1

0xe7ed,	// (0x00021991) battery_pane_stacon_g2_ParamLimits

0xe7ed,	// (0x00021991) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00022853) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00022853) battery_pane_stacon_g

0xe837,	// (0x000219db) navi_icon_pane_stacon

0xe84b,	// (0x000219ef) navi_navi_pane_stacon

0xe837,	// (0x000219db) navi_text_pane_stacon

0xe783,	// (0x00021927) control_bottom_pane_stacon_g1

0xe861,	// (0x00021a05) control_bottom_pane_stacon_t1_ParamLimits

0xe861,	// (0x00021a05) control_bottom_pane_stacon_t1

0xb2b5,	// (0x0001e459) grid_app_pane_ParamLimits

0xb2b5,	// (0x0001e459) grid_app_pane

0xb2ed,	// (0x0001e491) scroll_pane_cp15_ParamLimits

0xb2ed,	// (0x0001e491) scroll_pane_cp15

0xb302,	// (0x0001e4a6) cell_app_pane_ParamLimits

0xb302,	// (0x0001e4a6) cell_app_pane

0xb34f,	// (0x0001e4f3) cell_app_pane_g1_ParamLimits

0xb34f,	// (0x0001e4f3) cell_app_pane_g1

0x1691,	// (0x00014835) cell_app_pane_g2_ParamLimits

0x1691,	// (0x00014835) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00022858) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00022858) cell_app_pane_g

0xb373,	// (0x0001e517) cell_app_pane_t1_ParamLimits

0xb373,	// (0x0001e517) cell_app_pane_t1

0x16b4,	// (0x00014858) grid_highlight_pane_ParamLimits

0x16b4,	// (0x00014858) grid_highlight_pane

0xe687,	// (0x0002182b) cell_highlight_pane_g1

0xe68f,	// (0x00021833) cell_highlight_pane_g2

0xe697,	// (0x0002183b) cell_highlight_pane_g3

0xe69f,	// (0x00021843) cell_highlight_pane_g4

0xe6a7,	// (0x0002184b) cell_highlight_pane_g5

0xe6af,	// (0x00021853) cell_highlight_pane_g6

0xe6b7,	// (0x0002185b) cell_highlight_pane_g7

0xe6bf,	// (0x00021863) cell_highlight_pane_g8

0xe6c7,	// (0x0002186b) cell_highlight_pane_g9

0xc803,	// (0x0001f9a7) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00022806) cell_highlight_pane_g

0x16c5,	// (0x00014869) bg_scroll_pane

0xe8a2,	// (0x00021a46) scroll_handle_pane

0x170c,	// (0x000148b0) scroll_bg_pane_g1

0x1721,	// (0x000148c5) scroll_bg_pane_g2

0x1739,	// (0x000148dd) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0002285d) scroll_bg_pane_g

0x174e,	// (0x000148f2) scroll_handle_focus_pane_ParamLimits

0x174e,	// (0x000148f2) scroll_handle_focus_pane

0x170c,	// (0x000148b0) scroll_handle_pane_g1

0x175b,	// (0x000148ff) scroll_handle_pane_g2

0x1739,	// (0x000148dd) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00022864) scroll_handle_pane_g

0x135e,	// (0x00014502) bg_popup_sub_pane_cp21_ParamLimits

0x135e,	// (0x00014502) bg_popup_sub_pane_cp21

0x176f,	// (0x00014913) popup_fep_japan_predictive_window_t1_ParamLimits

0x176f,	// (0x00014913) popup_fep_japan_predictive_window_t1

0x1786,	// (0x0001492a) popup_fep_japan_predictive_window_t2_ParamLimits

0x1786,	// (0x0001492a) popup_fep_japan_predictive_window_t2

0x17b9,	// (0x0001495d) popup_fep_japan_predictive_window_t3_ParamLimits

0x17b9,	// (0x0001495d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0002286b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0002286b) popup_fep_japan_predictive_window_t

0xc80d,	// (0x0001f9b1) bg_popup_sub_pane_cp23

0x17f0,	// (0x00014994) listscroll_japin_cand_pane

0x17f8,	// (0x0001499c) popup_fep_japan_candidate_window_t1

0x1806,	// (0x000149aa) candidate_pane_ParamLimits

0x1806,	// (0x000149aa) candidate_pane

0x1818,	// (0x000149bc) scroll_pane_cp30

0x1822,	// (0x000149c6) list_single_popup_jap_candidate_pane_ParamLimits

0x1822,	// (0x000149c6) list_single_popup_jap_candidate_pane

0xc80d,	// (0x0001f9b1) list_highlight_pane_cp30

0x1836,	// (0x000149da) list_single_popup_jap_candidate_pane_t1

0xb38a,	// (0x0001e52e) level_1_signal

0xb39c,	// (0x0001e540) level_2_signal

0xb3af,	// (0x0001e553) level_3_signal

0xb3c2,	// (0x0001e566) level_4_signal

0xb3d5,	// (0x0001e579) level_5_signal

0xb3e8,	// (0x0001e58c) level_6_signal

0xb3fb,	// (0x0001e59f) level_7_signal

0xb38a,	// (0x0001e52e) level_1_battery

0xb39c,	// (0x0001e540) level_2_battery

0xb3af,	// (0x0001e553) level_3_battery

0xb3c2,	// (0x0001e566) level_4_battery

0xb3d5,	// (0x0001e579) level_5_battery

0xb3e8,	// (0x0001e58c) level_6_battery

0xb3fb,	// (0x0001e59f) level_7_battery

0x18b8,	// (0x00014a5c) list_menu_pane_ParamLimits

0x18b8,	// (0x00014a5c) list_menu_pane

0x18ce,	// (0x00014a72) scroll_pane_cp25_ParamLimits

0x18ce,	// (0x00014a72) scroll_pane_cp25

0x18e7,	// (0x00014a8b) list_double2_graphic_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double2_graphic_pane_cp2

0x18e7,	// (0x00014a8b) list_double2_large_graphic_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double2_large_graphic_pane_cp2

0x18e7,	// (0x00014a8b) list_double2_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double2_pane_cp2

0x18e7,	// (0x00014a8b) list_double_graphic_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double_graphic_pane_cp2

0x18e7,	// (0x00014a8b) list_double_large_graphic_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double_large_graphic_pane_cp2

0x18e7,	// (0x00014a8b) list_double_number_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double_number_pane_cp2

0x18e7,	// (0x00014a8b) list_double_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double_pane_cp2

0xb40e,	// (0x0001e5b2) list_single_2graphic_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_2graphic_pane_cp2

0xb40e,	// (0x0001e5b2) list_single_graphic_heading_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_graphic_heading_pane_cp2

0xb40e,	// (0x0001e5b2) list_single_graphic_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_graphic_pane_cp2

0xb40e,	// (0x0001e5b2) list_single_heading_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_heading_pane_cp2

0x192a,	// (0x00014ace) list_single_large_graphic_pane_cp2_ParamLimits

0x192a,	// (0x00014ace) list_single_large_graphic_pane_cp2

0xb40e,	// (0x0001e5b2) list_single_number_heading_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_number_heading_pane_cp2

0xb40e,	// (0x0001e5b2) list_single_number_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_number_pane_cp2

0xb40e,	// (0x0001e5b2) list_single_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_pane_cp2

0x1998,	// (0x00014b3c) bg_popup_sub_pane_cp22

0xe954,	// (0x00021af8) popup_side_volume_key_window_g1

0xe97e,	// (0x00021b22) popup_side_volume_key_window_t1

0xe99c,	// (0x00021b40) volume_small_pane_cp1

0xc85b,	// (0x0001f9ff) bg_popup_sub_pane_cp24_ParamLimits

0xc85b,	// (0x0001f9ff) bg_popup_sub_pane_cp24

0x19ae,	// (0x00014b52) fep_china_uni_candidate_pane_ParamLimits

0x19ae,	// (0x00014b52) fep_china_uni_candidate_pane

0x19c2,	// (0x00014b66) fep_china_uni_entry_pane

0x19d2,	// (0x00014b76) popup_fep_china_uni_window_g1

0x19ee,	// (0x00014b92) fep_china_uni_entry_pane_g1

0x19f8,	// (0x00014b9c) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0002289c) fep_china_uni_entry_pane_g

0x1a02,	// (0x00014ba6) fep_entry_item_pane

0x1a0c,	// (0x00014bb0) fep_candidate_item_pane

0x1a14,	// (0x00014bb8) fep_china_uni_candidate_pane_g1

0x1a1e,	// (0x00014bc2) fep_china_uni_candidate_pane_g2

0x1a26,	// (0x00014bca) fep_china_uni_candidate_pane_g3

0x1a2e,	// (0x00014bd2) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x000228a1) fep_china_uni_candidate_pane_g

0xc803,	// (0x0001f9a7) fep_entry_item_pane_g1

0x1a38,	// (0x00014bdc) fep_entry_item_pane_t1_ParamLimits

0x1a38,	// (0x00014bdc) fep_entry_item_pane_t1

0x1a4e,	// (0x00014bf2) fep_candidate_item_pane_t1_ParamLimits

0x1a4e,	// (0x00014bf2) fep_candidate_item_pane_t1

0x1a63,	// (0x00014c07) fep_candidate_item_pane_t2_ParamLimits

0x1a63,	// (0x00014c07) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x000228aa) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x000228aa) fep_candidate_item_pane_t

0xc869,	// (0x0001fa0d) list_highlight_pane_cp31_ParamLimits

0xc869,	// (0x0001fa0d) list_highlight_pane_cp31

0x1a75,	// (0x00014c19) level_1_signal_lsc

0x1a7e,	// (0x00014c22) level_2_signal_lsc

0x1a87,	// (0x00014c2b) level_3_signal_lsc

0x1a90,	// (0x00014c34) level_4_signal_lsc

0x1a99,	// (0x00014c3d) level_5_signal_lsc

0x1aa2,	// (0x00014c46) level_6_signal_lsc

0x1aab,	// (0x00014c4f) level_7_signal_lsc

0x1aab,	// (0x00014c4f) level_1_battery_lsc

0x1ab4,	// (0x00014c58) level_2_battery_lsc

0x1abd,	// (0x00014c61) level_3_battery_lsc

0x1ac6,	// (0x00014c6a) level_4_battery_lsc

0x1acf,	// (0x00014c73) level_5_battery_lsc

0x1ad8,	// (0x00014c7c) level_6_battery_lsc

0x1a75,	// (0x00014c19) level_7_battery_lsc

0x1ae1,	// (0x00014c85) scroll_handle_focus_pane_g1

0x1aea,	// (0x00014c8e) scroll_handle_focus_pane_g2

0x1af3,	// (0x00014c97) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x000228af) scroll_handle_focus_pane_g

0xb49d,	// (0x0001e641) list_single_2graphic_pane_g1_ParamLimits

0xb49d,	// (0x0001e641) list_single_2graphic_pane_g1

0xad28,	// (0x0001decc) list_single_2graphic_pane_g2_ParamLimits

0xad28,	// (0x0001decc) list_single_2graphic_pane_g2

0x2782,	// (0x00015926) list_single_2graphic_pane_g3_ParamLimits

0x2782,	// (0x00015926) list_single_2graphic_pane_g3

0xb4a9,	// (0x0001e64d) list_single_2graphic_pane_g4_ParamLimits

0xb4a9,	// (0x0001e64d) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x000228b6) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x000228b6) list_single_2graphic_pane_g

0xb4ba,	// (0x0001e65e) list_single_2graphic_pane_t1_ParamLimits

0xb4ba,	// (0x0001e65e) list_single_2graphic_pane_t1

0xb4e8,	// (0x0001e68c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb4e8,	// (0x0001e68c) list_double2_graphic_large_graphic_pane_g1

0xad93,	// (0x0001df37) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xad93,	// (0x0001df37) list_double2_graphic_large_graphic_pane_g2

0xada4,	// (0x0001df48) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xada4,	// (0x0001df48) list_double2_graphic_large_graphic_pane_g3

0xb4fa,	// (0x0001e69e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb4fa,	// (0x0001e69e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x000228bf) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x000228bf) list_double2_graphic_large_graphic_pane_g

0xb506,	// (0x0001e6aa) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb506,	// (0x0001e6aa) list_double2_graphic_large_graphic_pane_t1

0xb51c,	// (0x0001e6c0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb51c,	// (0x0001e6c0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x000228c8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x000228c8) list_double2_graphic_large_graphic_pane_t

0x1cc7,	// (0x00014e6b) popup_fast_swap_window_ParamLimits

0x1cc7,	// (0x00014e6b) popup_fast_swap_window

0x1ce5,	// (0x00014e89) popup_side_volume_key_window

0x1d03,	// (0x00014ea7) stacon_top_pane

0x1d0d,	// (0x00014eb1) status_pane_ParamLimits

0x1d0d,	// (0x00014eb1) status_pane

0xb576,	// (0x0001e71a) status_small_pane

0xc80d,	// (0x0001f9b1) control_pane

0xc80d,	// (0x0001f9b1) stacon_bottom_pane

0xe557,	// (0x000216fb) scroll_pane_cp121

0xe54e,	// (0x000216f2) set_content_pane

0xb52e,	// (0x0001e6d2) bg_active_tab_pane_g1_cp1

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp1

0xb537,	// (0x0001e6db) bg_active_tab_pane_g3_cp1

0xb52e,	// (0x0001e6d2) bg_passive_tab_pane_g1_cp1

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp1

0xb537,	// (0x0001e6db) bg_passive_tab_pane_g3_cp1

0xb540,	// (0x0001e6e4) bg_active_tab_pane_g1_cp2

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp2

0xb549,	// (0x0001e6ed) bg_active_tab_pane_g3_cp2

0xb540,	// (0x0001e6e4) bg_passive_tab_pane_g1_cp2

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp2

0xb549,	// (0x0001e6ed) bg_passive_tab_pane_g3_cp2

0xb552,	// (0x0001e6f6) bg_active_tab_pane_g1_cp3

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp3

0xb55b,	// (0x0001e6ff) bg_active_tab_pane_g3_cp3

0xb552,	// (0x0001e6f6) bg_passive_tab_pane_g1_cp3

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp3

0xb55b,	// (0x0001e6ff) bg_passive_tab_pane_g3_cp3

0xb564,	// (0x0001e708) bg_active_tab_pane_g1_cp4

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp4

0xb56d,	// (0x0001e711) bg_active_tab_pane_g3_cp4

0xb564,	// (0x0001e708) bg_passive_tab_pane_g1_cp4

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp4

0xb56d,	// (0x0001e711) bg_passive_tab_pane_g3_cp4

0x1c20,	// (0x00014dc4) bg_active_tab_pane_g1_cp5

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp5

0x1c29,	// (0x00014dcd) bg_active_tab_pane_g3_cp5

0x1c20,	// (0x00014dc4) bg_passive_tab_pane_g1_cp5

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp5

0x1c29,	// (0x00014dcd) bg_passive_tab_pane_g3_cp5

0x4558,	// (0x000176fc) list_set_graphic_pane_ParamLimits

0x4558,	// (0x000176fc) list_set_graphic_pane

0xc80d,	// (0x0001f9b1) bg_set_opt_pane_cp4

0x1c48,	// (0x00014dec) list_set_graphic_pane_g1_ParamLimits

0x1c48,	// (0x00014dec) list_set_graphic_pane_g1

0x1c54,	// (0x00014df8) list_set_graphic_pane_g2_ParamLimits

0x1c54,	// (0x00014df8) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x000228cd) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x000228cd) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x00022c57) volume_small_pane_cp_g

0x1c78,	// (0x00014e1c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1c78,	// (0x00014e1c) list_double2_large_graphic_pane_g1_cp2

0x1c86,	// (0x00014e2a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1c86,	// (0x00014e2a) list_double2_large_graphic_pane_g2_cp2

0x1c97,	// (0x00014e3b) list_double2_large_graphic_pane_g3_cp2

0x1c9f,	// (0x00014e43) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1c9f,	// (0x00014e43) list_double2_large_graphic_pane_t1_cp2

0x1cb5,	// (0x00014e59) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1cb5,	// (0x00014e59) list_double2_large_graphic_pane_t2_cp2

0x39bf,	// (0x00016b63) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x39bf,	// (0x00016b63) list_double_large_graphic_pane_g1_cp2

0x39d2,	// (0x00016b76) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x39d2,	// (0x00016b76) list_double_large_graphic_pane_g2_cp2

0x1e36,	// (0x00014fda) list_double_large_graphic_pane_g3_cp2

0x39e3,	// (0x00016b87) list_double_large_graphic_pane_g4_cp

0x39eb,	// (0x00016b8f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x39eb,	// (0x00016b8f) list_double_large_graphic_pane_t1_cp2

0x3a02,	// (0x00016ba6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3a02,	// (0x00016ba6) list_double_large_graphic_pane_t2_cp2

0x1d26,	// (0x00014eca) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1d26,	// (0x00014eca) list_double2_graphic_pane_g1_cp2

0x1d34,	// (0x00014ed8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1d34,	// (0x00014ed8) list_double2_graphic_pane_g2_cp2

0x1d45,	// (0x00014ee9) list_double2_graphic_pane_g3_cp2

0x1d4f,	// (0x00014ef3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1d4f,	// (0x00014ef3) list_double2_graphic_pane_t1_cp2

0x1d65,	// (0x00014f09) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1d65,	// (0x00014f09) list_double2_graphic_pane_t2_cp2

0x1d77,	// (0x00014f1b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1d77,	// (0x00014f1b) list_single_number_heading_pane_g1_cp2

0x1d83,	// (0x00014f27) list_single_number_heading_pane_g2_cp2

0x1d8b,	// (0x00014f2f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1d8b,	// (0x00014f2f) list_single_number_heading_pane_t1_cp2

0x1da1,	// (0x00014f45) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1da1,	// (0x00014f45) list_single_number_heading_pane_t2_cp2

0x1db5,	// (0x00014f59) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1db5,	// (0x00014f59) list_single_number_heading_pane_t3_cp2

0x1d77,	// (0x00014f1b) list_single_heading_pane_g1_cp2_ParamLimits

0x1d77,	// (0x00014f1b) list_single_heading_pane_g1_cp2

0x1d83,	// (0x00014f27) list_single_heading_pane_g2_cp2

0x1d8b,	// (0x00014f2f) list_single_heading_pane_t1_cp2_ParamLimits

0x1d8b,	// (0x00014f2f) list_single_heading_pane_t1_cp2

0x37b9,	// (0x0001695d) list_single_heading_pane_t2_cp2_ParamLimits

0x37b9,	// (0x0001695d) list_single_heading_pane_t2_cp2

0x3701,	// (0x000168a5) list_double_graphic_pane_g1_cp2_ParamLimits

0x3701,	// (0x000168a5) list_double_graphic_pane_g1_cp2

0x370d,	// (0x000168b1) list_double_graphic_pane_g2_cp2_ParamLimits

0x370d,	// (0x000168b1) list_double_graphic_pane_g2_cp2

0x371c,	// (0x000168c0) list_double_graphic_pane_g3_cp2

0x3724,	// (0x000168c8) list_double_graphic_pane_t1_cp2_ParamLimits

0x3724,	// (0x000168c8) list_double_graphic_pane_t1_cp2

0x373a,	// (0x000168de) list_double_graphic_pane_t2_cp2_ParamLimits

0x373a,	// (0x000168de) list_double_graphic_pane_t2_cp2

0x1e2a,	// (0x00014fce) list_double_number_pane_g1_cp2_ParamLimits

0x1e2a,	// (0x00014fce) list_double_number_pane_g1_cp2

0x1e36,	// (0x00014fda) list_double_number_pane_g2_cp2

0x36c5,	// (0x00016869) list_double_number_pane_t1_cp2_ParamLimits

0x36c5,	// (0x00016869) list_double_number_pane_t1_cp2

0x36d9,	// (0x0001687d) list_double_number_pane_t2_cp2_ParamLimits

0x36d9,	// (0x0001687d) list_double_number_pane_t2_cp2

0x36ef,	// (0x00016893) list_double_number_pane_t3_cp2_ParamLimits

0x36ef,	// (0x00016893) list_double_number_pane_t3_cp2

0x35ae,	// (0x00016752) list_single_graphic_pane_g1_cp2_ParamLimits

0x35ae,	// (0x00016752) list_single_graphic_pane_g1_cp2

0x1e90,	// (0x00015034) list_single_graphic_pane_g2_cp2_ParamLimits

0x1e90,	// (0x00015034) list_single_graphic_pane_g2_cp2

0x1e9c,	// (0x00015040) list_single_graphic_pane_g3_cp2

0x3584,	// (0x00016728) list_single_graphic_pane_t1_cp2_ParamLimits

0x3584,	// (0x00016728) list_single_graphic_pane_t1_cp2

0x1e90,	// (0x00015034) list_single_number_pane_g1_cp2_ParamLimits

0x1e90,	// (0x00015034) list_single_number_pane_g1_cp2

0x1e9c,	// (0x00015040) list_single_number_pane_g2_cp2

0x3584,	// (0x00016728) list_single_number_pane_t1_cp2_ParamLimits

0x3584,	// (0x00016728) list_single_number_pane_t1_cp2

0x359a,	// (0x0001673e) list_single_number_pane_t2_cp2_ParamLimits

0x359a,	// (0x0001673e) list_single_number_pane_t2_cp2

0x1c86,	// (0x00014e2a) list_double2_pane_g1_cp2_ParamLimits

0x1c86,	// (0x00014e2a) list_double2_pane_g1_cp2

0x1c97,	// (0x00014e3b) list_double2_pane_g2_cp2

0x1e02,	// (0x00014fa6) list_double2_pane_t1_cp2_ParamLimits

0x1e02,	// (0x00014fa6) list_double2_pane_t1_cp2

0x1e18,	// (0x00014fbc) list_double2_pane_t2_cp2_ParamLimits

0x1e18,	// (0x00014fbc) list_double2_pane_t2_cp2

0x1e2a,	// (0x00014fce) list_double_pane_g1_cp2_ParamLimits

0x1e2a,	// (0x00014fce) list_double_pane_g1_cp2

0x1e36,	// (0x00014fda) list_double_pane_g2_cp2

0x1e3e,	// (0x00014fe2) list_double_pane_t1_cp2_ParamLimits

0x1e3e,	// (0x00014fe2) list_double_pane_t1_cp2

0x1e54,	// (0x00014ff8) list_double_pane_t2_cp2_ParamLimits

0x1e54,	// (0x00014ff8) list_double_pane_t2_cp2

0x1e80,	// (0x00015024) list_single_pane_cp2_g3

0x1e90,	// (0x00015034) list_single_pane_g1_cp2_ParamLimits

0x1e90,	// (0x00015034) list_single_pane_g1_cp2

0x1e9c,	// (0x00015040) list_single_pane_g2_cp2

0x1ea4,	// (0x00015048) list_single_pane_t1_cp2_ParamLimits

0x1ea4,	// (0x00015048) list_single_pane_t1_cp2

0x1ebc,	// (0x00015060) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1ebc,	// (0x00015060) list_single_large_graphic_pane_g1_cp2

0x1eca,	// (0x0001506e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1eca,	// (0x0001506e) list_single_large_graphic_pane_g2_cp2

0x1ed6,	// (0x0001507a) list_single_large_graphic_pane_g3_cp2

0x1ede,	// (0x00015082) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1ede,	// (0x00015082) list_single_large_graphic_pane_g4_cp1

0x1ef8,	// (0x0001509c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1ef8,	// (0x0001509c) list_single_large_graphic_pane_t1_cp2

0x354e,	// (0x000166f2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x354e,	// (0x000166f2) list_single_graphic_heading_pane_g1_cp2

0x351b,	// (0x000166bf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x351b,	// (0x000166bf) list_single_graphic_heading_pane_g4_cp2

0x1e9c,	// (0x00015040) list_single_graphic_heading_pane_g5_cp2

0x355a,	// (0x000166fe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x355a,	// (0x000166fe) list_single_graphic_heading_pane_t1_cp2

0x3570,	// (0x00016714) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3570,	// (0x00016714) list_single_graphic_heading_pane_t2_cp2

0x350f,	// (0x000166b3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x350f,	// (0x000166b3) list_single_2graphic_pane_g1_cp2

0x351b,	// (0x000166bf) list_single_2graphic_pane_g2_cp2_ParamLimits

0x351b,	// (0x000166bf) list_single_2graphic_pane_g2_cp2

0x1e9c,	// (0x00015040) list_single_2graphic_pane_g3_cp2

0x352c,	// (0x000166d0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x352c,	// (0x000166d0) list_single_2graphic_pane_g4_cp2

0x3538,	// (0x000166dc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3538,	// (0x000166dc) list_single_2graphic_pane_t1_cp2

0xc803,	// (0x0001f9a7) list_highlight_pane_g10_cp1

0x30e7,	// (0x0001628b) list_highlight_pane_g1_cp1

0x30ef,	// (0x00016293) list_highlight_pane_g2_cp1

0x30f7,	// (0x0001629b) list_highlight_pane_g3_cp1

0x30ff,	// (0x000162a3) list_highlight_pane_g4_cp1

0x3107,	// (0x000162ab) list_highlight_pane_g5_cp1

0x310f,	// (0x000162b3) list_highlight_pane_g6_cp1

0x3117,	// (0x000162bb) list_highlight_pane_g7_cp1

0x311f,	// (0x000162c3) list_highlight_pane_g8_cp1

0x3127,	// (0x000162cb) list_highlight_pane_g9_cp1

0xbc01,	// (0x0001eda5) form_field_slider_pane_t3

0xbc0f,	// (0x0001edb3) form_field_slider_pane_t4

0x3023,	// (0x000161c7) slider_form_pane_ParamLimits

0x3023,	// (0x000161c7) slider_form_pane

0xc80d,	// (0x0001f9b1) control_abbreviations

0xc80d,	// (0x0001f9b1) control_conventions

0xc80d,	// (0x0001f9b1) control_definitions

0xc80d,	// (0x0001f9b1) format_table_attribute

0x380f,	// (0x000169b3) bg_popup_preview_window_pane_g9

0xc80d,	// (0x0001f9b1) format_table_data2

0xc80d,	// (0x0001f9b1) format_table_data3

0xc80d,	// (0x0001f9b1) format_table_data_example

0x0008,

0xc80d,	// (0x0001f9b1) intro_purpose

0xf8c0,	// (0x00022a64) bg_popup_preview_window_pane_g

0xc80d,	// (0x0001f9b1) texts_category

0xc80d,	// (0x0001f9b1) texts_graphics

0x1f0e,	// (0x000150b2) text_digital

0x1f1d,	// (0x000150c1) text_primary

0x1f2c,	// (0x000150d0) text_primary_small

0x1f3b,	// (0x000150df) text_secondary

0x1f4a,	// (0x000150ee) text_title

0x4041,	// (0x000171e5) bg_passive_tab_pane_g1_cp3_srt

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp3_srt

0x404a,	// (0x000171ee) bg_passive_tab_pane_g3_cp3_srt

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp3_srt_ParamLimits

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp3_srt

0x4053,	// (0x000171f7) tabs_4_active_pane_srt_g1

0xc049,	// (0x0001f1ed) tabs_4_active_pane_srt_t1_ParamLimits

0xc049,	// (0x0001f1ed) tabs_4_active_pane_srt_t1

0x4041,	// (0x000171e5) bg_active_tab_pane_g1_cp3_copy1

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp3_copy1

0x404a,	// (0x000171ee) bg_active_tab_pane_g3_cp3_copy1

0xc869,	// (0x0001fa0d) tabs_2_long_active_pane_srt_ParamLimits

0xc869,	// (0x0001fa0d) tabs_2_long_active_pane_srt

0xc869,	// (0x0001fa0d) tabs_2_long_passive_pane_srt_ParamLimits

0xc869,	// (0x0001fa0d) tabs_2_long_passive_pane_srt

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp4_srt

0x3c71,	// (0x00016e15) bg_passive_tab_pane_g1_cp4_srt

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp4_srt

0x3c7a,	// (0x00016e1e) bg_passive_tab_pane_g3_cp4_srt

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp4_srt_ParamLimits

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp4_srt

0xbde1,	// (0x0001ef85) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbde1,	// (0x0001ef85) tabs_2_long_active_pane_srt_t1

0x3c71,	// (0x00016e15) bg_active_tab_pane_g1_cp4_srt

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp4_srt

0x3c7a,	// (0x00016e1e) bg_active_tab_pane_g3_cp4_srt

0xc85b,	// (0x0001f9ff) tabs_3_long_active_pane_srt_ParamLimits

0xc85b,	// (0x0001f9ff) tabs_3_long_active_pane_srt

0xc85b,	// (0x0001f9ff) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc85b,	// (0x0001f9ff) tabs_3_long_passive_pane_cp_srt

0xc85b,	// (0x0001f9ff) tabs_3_long_passive_pane_srt_ParamLimits

0xc85b,	// (0x0001f9ff) tabs_3_long_passive_pane_srt

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp5_srt

0x1c20,	// (0x00014dc4) bg_passive_tab_pane_g1_cp5_srt

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp5_srt

0x1c29,	// (0x00014dcd) bg_passive_tab_pane_g3_cp5_srt

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp5_srt_ParamLimits

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp5_srt

0xbdcb,	// (0x0001ef6f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbdcb,	// (0x0001ef6f) tabs_3_long_active_pane_srt_t1

0x1c20,	// (0x00014dc4) bg_active_tab_pane_g1_cp5_srt

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp5_srt

0x1c29,	// (0x00014dcd) bg_active_tab_pane_g3_cp5_srt

0x3c51,	// (0x00016df5) navi_text_pane_srt_t1

0x3c49,	// (0x00016ded) navi_icon_pane_srt_g1

0x2122,	// (0x000152c6) midp_editing_number_pane_srt

0x1f59,	// (0x000150fd) midp_ticker_pane_srt

0x212a,	// (0x000152ce) midp_ticker_pane_srt_g1

0x2132,	// (0x000152d6) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x000228ec) midp_ticker_pane_srt_g

0x213a,	// (0x000152de) midp_ticker_pane_srt_t1

0x3c3a,	// (0x00016dde) midp_editing_number_pane_t1_copy1

0xb5a8,	// (0x0001e74c) listscroll_midp_pane

0xb5a8,	// (0x0001e74c) midp_form_pane

0x1fd0,	// (0x00015174) midp_info_popup_window_ParamLimits

0x1fd0,	// (0x00015174) midp_info_popup_window

0x135e,	// (0x00014502) bg_popup_sub_pane_cp50_ParamLimits

0x135e,	// (0x00014502) bg_popup_sub_pane_cp50

0x2d09,	// (0x00015ead) listscroll_midp_info_pane_ParamLimits

0x2d09,	// (0x00015ead) listscroll_midp_info_pane

0x2ce9,	// (0x00015e8d) listscroll_form_midp_pane_ParamLimits

0x2ce9,	// (0x00015e8d) listscroll_form_midp_pane

0x2cf5,	// (0x00015e99) scroll_bar_cp050

0x2ce9,	// (0x00015e8d) list_midp_pane

0x4e18,	// (0x00017fbc) signal_pane_g2_cp

0x2c03,	// (0x00015da7) listscroll_midp_info_pane_t1_ParamLimits

0x2c03,	// (0x00015da7) listscroll_midp_info_pane_t1

0x2c1b,	// (0x00015dbf) listscroll_midp_info_pane_t2_ParamLimits

0x2c1b,	// (0x00015dbf) listscroll_midp_info_pane_t2

0x2c59,	// (0x00015dfd) listscroll_midp_info_pane_t3_ParamLimits

0x2c59,	// (0x00015dfd) listscroll_midp_info_pane_t3

0x2c93,	// (0x00015e37) listscroll_midp_info_pane_t4_ParamLimits

0x2c93,	// (0x00015e37) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x0002299f) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x0002299f) listscroll_midp_info_pane_t

0x13c1,	// (0x00014565) scroll_pane_cp21

0x2b9d,	// (0x00015d41) form_midp_field_choice_group_pane

0x2ba6,	// (0x00015d4a) form_midp_field_text_pane

0x2be9,	// (0x00015d8d) form_midp_field_time_pane

0x2bf1,	// (0x00015d95) form_midp_gauge_slider_pane

0x2bfa,	// (0x00015d9e) form_midp_gauge_wait_pane

0xc80d,	// (0x0001f9b1) form_midp_image_pane

0xbbe4,	// (0x0001ed88) list_single_midp_pane_ParamLimits

0xbbe4,	// (0x0001ed88) list_single_midp_pane

0xbbbc,	// (0x0001ed60) form_midp_field_text_pane_t1

0x2924,	// (0x00015ac8) input_focus_pane_cp050

0x2b6c,	// (0x00015d10) list_midp_form_text_pane

0x2b10,	// (0x00015cb4) form_midp_field_choice_group_pane_t1

0x2b1e,	// (0x00015cc2) input_focus_pane_cp051

0x2b32,	// (0x00015cd6) list_midp_choice_pane

0xc80d,	// (0x0001f9b1) status_idle_pane

0x2af4,	// (0x00015c98) form_midp_field_time_pane_t1

0xc803,	// (0x0001f9a7) wait_anim_pane_g2_copy1

0x2b02,	// (0x00015ca6) form_midp_field_time_pane_t2

0x0001,

0x2080,	// (0x00015224) aid_navinavi_width_2_pane

0xf7f6,	// (0x0002299a) form_midp_field_time_pane_t

0xc80d,	// (0x0001f9b1) input_focus_pane_cp052

0xc80d,	// (0x0001f9b1) bg_input_focus_pane_cp040

0x2ab4,	// (0x00015c58) form_midp_gauge_slider_pane_t1

0x2ac2,	// (0x00015c66) form_midp_gauge_slider_pane_t2

0xbba0,	// (0x0001ed44) form_midp_gauge_slider_pane_t3

0xbbae,	// (0x0001ed52) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x00022991) form_midp_gauge_slider_pane_t

0x2aec,	// (0x00015c90) form_midp_slider_pane

0xc869,	// (0x0001fa0d) bg_input_focus_pane_cp041_ParamLimits

0xc869,	// (0x0001fa0d) bg_input_focus_pane_cp041

0x2a81,	// (0x00015c25) form_midp_gauge_wait_pane_t1_ParamLimits

0x2a81,	// (0x00015c25) form_midp_gauge_wait_pane_t1

0x2a93,	// (0x00015c37) form_midp_gauge_wait_pane_t2_ParamLimits

0x2a93,	// (0x00015c37) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x0002298c) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x0002298c) form_midp_gauge_wait_pane_t

0x2aa5,	// (0x00015c49) form_midp_wait_pane_ParamLimits

0x2aa5,	// (0x00015c49) form_midp_wait_pane

0x2a49,	// (0x00015bed) form_midp_image_pane_g1

0x2a52,	// (0x00015bf6) form_midp_image_pane_t1

0x2a61,	// (0x00015c05) form_midp_image_pane_t2

0x2a70,	// (0x00015c14) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x00022985) form_midp_image_pane_t

0x2a31,	// (0x00015bd5) list_single_midp_pane_g1

0x2a3a,	// (0x00015bde) list_single_midp_pane_t1

0xbb89,	// (0x0001ed2d) list_midp_form_item_pane_ParamLimits

0xbb89,	// (0x0001ed2d) list_midp_form_item_pane

0x2028,	// (0x000151cc) list_midp_form_item_pane_t1

0x2037,	// (0x000151db) midp_ticker_pane_g1

0x2043,	// (0x000151e7) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x000228d2) midp_ticker_pane_g

0xb64c,	// (0x0001e7f0) midp_ticker_pane_t1

0xbf86,	// (0x0001f12a) midp_editing_number_pane_t1

0x3eba,	// (0x0001705e) midp_editing_number_pane

0x3ec9,	// (0x0001706d) midp_ticker_pane

0x3c02,	// (0x00016da6) ai_message_heading_pane

0xc80d,	// (0x0001f9b1) bg_popup_window_pane_cp14

0x3c0a,	// (0x00016dae) listscroll_ai_message_pane

0x3b88,	// (0x00016d2c) ai_message_heading_pane_g1_ParamLimits

0x3b88,	// (0x00016d2c) ai_message_heading_pane_g1

0x3b94,	// (0x00016d38) ai_message_heading_pane_g2_ParamLimits

0x3b94,	// (0x00016d38) ai_message_heading_pane_g2

0x3ba2,	// (0x00016d46) ai_message_heading_pane_g3_ParamLimits

0x3ba2,	// (0x00016d46) ai_message_heading_pane_g3

0x3bae,	// (0x00016d52) ai_message_heading_pane_g4_ParamLimits

0x3bae,	// (0x00016d52) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x00022ac6) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x00022ac6) ai_message_heading_pane_g

0x3bba,	// (0x00016d5e) ai_message_heading_pane_t1_ParamLimits

0x3bba,	// (0x00016d5e) ai_message_heading_pane_t1

0x3bd4,	// (0x00016d78) ai_message_heading_pane_t2_ParamLimits

0x3bd4,	// (0x00016d78) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x00022acf) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x00022acf) ai_message_heading_pane_t

0x3be8,	// (0x00016d8c) bg_popup_heading_pane_cp1_ParamLimits

0x3be8,	// (0x00016d8c) bg_popup_heading_pane_cp1

0x3b76,	// (0x00016d1a) list_ai_message_pane_ParamLimits

0x3b76,	// (0x00016d1a) list_ai_message_pane

0x13c1,	// (0x00014565) scroll_pane_cp10

0x3b12,	// (0x00016cb6) list_ai_message_pane_g1

0x3b1a,	// (0x00016cbe) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x00022aa3) list_ai_message_pane_g

0x3b22,	// (0x00016cc6) list_ai_message_pane_t1_ParamLimits

0x3b22,	// (0x00016cc6) list_ai_message_pane_t1

0x3b37,	// (0x00016cdb) list_ai_message_pane_t2_ParamLimits

0x3b37,	// (0x00016cdb) list_ai_message_pane_t2

0x3b4c,	// (0x00016cf0) list_ai_message_pane_t3_ParamLimits

0x3b4c,	// (0x00016cf0) list_ai_message_pane_t3

0x3b61,	// (0x00016d05) list_ai_message_pane_t4_ParamLimits

0x3b61,	// (0x00016d05) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x00022aa8) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x00022aa8) list_ai_message_pane_t

0xbdb1,	// (0x0001ef55) cell_ai_soft_ind_pane_ParamLimits

0xbdb1,	// (0x0001ef55) cell_ai_soft_ind_pane

0x2061,	// (0x00015205) cell_ai_soft_ind_pane_g1_ParamLimits

0x2061,	// (0x00015205) cell_ai_soft_ind_pane_g1

0xc80d,	// (0x0001f9b1) grid_highlight_cp1

0x206e,	// (0x00015212) text_secondary_cp56_ParamLimits

0x206e,	// (0x00015212) text_secondary_cp56

0x3ad0,	// (0x00016c74) example_general_pane_ParamLimits

0x3ad0,	// (0x00016c74) example_general_pane

0x3adc,	// (0x00016c80) example_parent_pane_g1_ParamLimits

0x3adc,	// (0x00016c80) example_parent_pane_g1

0x3ae8,	// (0x00016c8c) example_parent_pane_t1_ParamLimits

0x3ae8,	// (0x00016c8c) example_parent_pane_t1

0x9db8,	// (0x0001cf5c) popup_preview_text_window_ParamLimits

0x9db8,	// (0x0001cf5c) popup_preview_text_window

0x1e88,	// (0x0001502c) list_single_pane_cp2_g4

0xe104,	// (0x000212a8) bg_popup_preview_window_pane_ParamLimits

0xe104,	// (0x000212a8) bg_popup_preview_window_pane

0x3819,	// (0x000169bd) popup_preview_text_window_t1_ParamLimits

0x3819,	// (0x000169bd) popup_preview_text_window_t1

0x3837,	// (0x000169db) popup_preview_text_window_t2_ParamLimits

0x3837,	// (0x000169db) popup_preview_text_window_t2

0x3880,	// (0x00016a24) popup_preview_text_window_t3_ParamLimits

0x3880,	// (0x00016a24) popup_preview_text_window_t3

0x38c5,	// (0x00016a69) popup_preview_text_window_t4_ParamLimits

0x38c5,	// (0x00016a69) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x00022a77) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x00022a77) popup_preview_text_window_t

0x3943,	// (0x00016ae7) scroll_pane_cp11

0x2800,	// (0x000159a4) bg_popup_preview_window_pane_g1

0x37cd,	// (0x00016971) bg_popup_preview_window_pane_g2

0x37d7,	// (0x0001697b) bg_popup_preview_window_pane_g3

0x37e1,	// (0x00016985) bg_popup_preview_window_pane_g4

0x37eb,	// (0x0001698f) bg_popup_preview_window_pane_g5

0x37f5,	// (0x00016999) bg_popup_preview_window_pane_g6

0x37fd,	// (0x000169a1) bg_popup_preview_window_pane_g7

0x3805,	// (0x000169a9) bg_popup_preview_window_pane_g8

0xde28,	// (0x00020fcc) aid_popup_width_pane

0x9d28,	// (0x0001cecc) popup_midp_note_alarm_window_ParamLimits

0x9d28,	// (0x0001cecc) popup_midp_note_alarm_window

0xe5c0,	// (0x00021764) data_form_pane_ParamLimits

0xb12e,	// (0x0001e2d2) form_field_data_pane_g1

0xb138,	// (0x0001e2dc) form_field_data_pane_t1_ParamLimits

0xe5cc,	// (0x00021770) input_focus_pane_ParamLimits

0xe5da,	// (0x0002177e) data_form_wide_pane_ParamLimits

0xe5e6,	// (0x0002178a) form_field_data_wide_pane_g1

0xe612,	// (0x000217b6) form_field_data_wide_pane_t1_ParamLimits

0xe2c0,	// (0x00021464) input_focus_pane_cp6_ParamLimits

0xb268,	// (0x0001e40c) input_popup_find_pane_g1_ParamLimits

0xb268,	// (0x0001e40c) input_popup_find_pane_g1

0xe7fe,	// (0x000219a2) aid_navi_side_left_pane

0xe813,	// (0x000219b7) aid_navi_side_right_pane

0x31e2,	// (0x00016386) bg_popup_window_pane_cp30_ParamLimits

0x31e2,	// (0x00016386) bg_popup_window_pane_cp30

0x325c,	// (0x00016400) popup_midp_note_alarm_window_g1_ParamLimits

0x325c,	// (0x00016400) popup_midp_note_alarm_window_g1

0x328c,	// (0x00016430) popup_midp_note_alarm_window_t1_ParamLimits

0x328c,	// (0x00016430) popup_midp_note_alarm_window_t1

0x332d,	// (0x000164d1) popup_midp_note_alarm_window_t2_ParamLimits

0x332d,	// (0x000164d1) popup_midp_note_alarm_window_t2

0x33db,	// (0x0001657f) popup_midp_note_alarm_window_t3_ParamLimits

0x33db,	// (0x0001657f) popup_midp_note_alarm_window_t3

0x340d,	// (0x000165b1) popup_midp_note_alarm_window_t4_ParamLimits

0x340d,	// (0x000165b1) popup_midp_note_alarm_window_t4

0x3433,	// (0x000165d7) popup_midp_note_alarm_window_t5_ParamLimits

0x3433,	// (0x000165d7) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x00022a14) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x00022a14) popup_midp_note_alarm_window_t

0x34df,	// (0x00016683) wait_bar_pane_cp1_ParamLimits

0x34df,	// (0x00016683) wait_bar_pane_cp1

0xc80d,	// (0x0001f9b1) wait_anim_pane_copy1

0xc80d,	// (0x0001f9b1) wait_border_pane_copy1

0x2ec7,	// (0x0001606b) wait_border_pane_g1_copy1

0xe629,	// (0x000217cd) form_field_popup_pane_g1

0xb152,	// (0x0001e2f6) form_field_popup_pane_t1_ParamLimits

0xe5cc,	// (0x00021770) input_focus_pane_cp7_ParamLimits

0xe631,	// (0x000217d5) list_form_pane_ParamLimits

0xe63d,	// (0x000217e1) form_field_popup_wide_pane_g1

0xe645,	// (0x000217e9) form_field_popup_wide_pane_t1_ParamLimits

0xe5cc,	// (0x00021770) input_focus_pane_cp8_ParamLimits

0xe657,	// (0x000217fb) list_form_wide_pane_ParamLimits

0x40dc,	// (0x00017280) aid_size_cell_graphic_pane

0xb1d1,	// (0x0001e375) data_form_pane_t1_ParamLimits

0xbf6a,	// (0x0001f10e) data_form_wide_pane_t1_ParamLimits

0xb824,	// (0x0001e9c8) bg_status_flat_pane

0xa96f,	// (0x0001db13) title_pane_t1_ParamLimits

0xc823,	// (0x0001f9c7) title_pane_t2_ParamLimits

0xc849,	// (0x0001f9ed) title_pane_t3_ParamLimits

0xf532,	// (0x000226d6) title_pane_t_ParamLimits

0xb38a,	// (0x0001e52e) level_1_signal_ParamLimits

0xb39c,	// (0x0001e540) level_2_signal_ParamLimits

0xb3af,	// (0x0001e553) level_3_signal_ParamLimits

0xb3c2,	// (0x0001e566) level_4_signal_ParamLimits

0xb3d5,	// (0x0001e579) level_5_signal_ParamLimits

0xb3e8,	// (0x0001e58c) level_6_signal_ParamLimits

0xb3fb,	// (0x0001e59f) level_7_signal_ParamLimits

0xb38a,	// (0x0001e52e) level_1_battery_ParamLimits

0xb39c,	// (0x0001e540) level_2_battery_ParamLimits

0xb3af,	// (0x0001e553) level_3_battery_ParamLimits

0xb3c2,	// (0x0001e566) level_4_battery_ParamLimits

0xb3d5,	// (0x0001e579) level_5_battery_ParamLimits

0xb3e8,	// (0x0001e58c) level_6_battery_ParamLimits

0xb3fb,	// (0x0001e59f) level_7_battery_ParamLimits

0x30e7,	// (0x0001628b) bg_status_flat_pane_g1

0x30ef,	// (0x00016293) bg_status_flat_pane_g2

0x30f7,	// (0x0001629b) bg_status_flat_pane_g3

0x30ff,	// (0x000162a3) bg_status_flat_pane_g4

0x3107,	// (0x000162ab) bg_status_flat_pane_g5

0x310f,	// (0x000162b3) bg_status_flat_pane_g6

0x3117,	// (0x000162bb) bg_status_flat_pane_g7

0xaa03,	// (0x0001dba7) tabs_3_active_pane_t1_ParamLimits

0xaa03,	// (0x0001dba7) tabs_3_passive_pane_t1_ParamLimits

0xaa1d,	// (0x0001dbc1) tabs_4_active_pane_t1_ParamLimits

0xaa1d,	// (0x0001dbc1) tabs_4_1_passive_pane_t1_ParamLimits

0xb27e,	// (0x0001e422) tabs_2_active_pane_t1_ParamLimits

0xb27e,	// (0x0001e422) tabs_2_passive_pane_t1_ParamLimits

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp4_ParamLimits

0xb290,	// (0x0001e434) tabs_2_long_active_pane_t1_ParamLimits

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp4_ParamLimits

0xedfa,	// (0x00021f9e) list_single_midp_graphic_pane_t1_ParamLimits

0xc869,	// (0x0001fa0d) bg_active_tab_pane_cp5_ParamLimits

0xb2a3,	// (0x0001e447) tabs_3_long_active_pane_t1_ParamLimits

0x2288,	// (0x0001542c) bg_passive_tab_pane_cp5_ParamLimits

0xedfa,	// (0x00021f9e) list_single_midp_graphic_pane_t1

0xb824,	// (0x0001e9c8) bg_status_flat_pane_ParamLimits

0x244a,	// (0x000155ee) indicator_pane_cp2_ParamLimits

0x244a,	// (0x000155ee) indicator_pane_cp2

0xb9ba,	// (0x0001eb5e) navi_pane_srt_ParamLimits

0xb9ba,	// (0x0001eb5e) navi_pane_srt

0x25b1,	// (0x00015755) popup_clock_digital_analogue_window_cp1

0xc8c7,	// (0x0001fa6b) indicator_pane_t1

0x1f59,	// (0x000150fd) copy_highlight_pane

0x1f59,	// (0x000150fd) cursor_graphics_pane

0x1f59,	// (0x000150fd) graphic_within_text_pane

0x1f59,	// (0x000150fd) link_highlight_pane

0x3906,	// (0x00016aaa) popup_preview_text_window_t5_ParamLimits

0x3906,	// (0x00016aaa) popup_preview_text_window_t5

0x208a,	// (0x0001522e) cursor_digital_pane

0x208a,	// (0x0001522e) cursor_primary_pane

0x209b,	// (0x0001523f) cursor_primary_small_pane

0x20a3,	// (0x00015247) cursor_secondary_pane

0x20ab,	// (0x0001524f) cursor_title_pane

0x208a,	// (0x0001522e) link_highlight_digital_pane

0x2092,	// (0x00015236) link_highlight_primary_pane

0x209b,	// (0x0001523f) link_highlight_primary_small_pane

0x20a3,	// (0x00015247) link_highlight_secondary_pane

0x20ab,	// (0x0001524f) link_highlight_title_pane

0x208a,	// (0x0001522e) copy_highlight_digital_pane

0x208a,	// (0x0001522e) copy_highlight_primary_pane

0x209b,	// (0x0001523f) copy_highlight_primary_small_pane

0x20a3,	// (0x00015247) copy_highlight_secondary_pane

0x20ab,	// (0x0001524f) copy_highlight_title_pane

0x20a3,	// (0x00015247) graphic_text_digital_pane

0x3185,	// (0x00016329) graphic_text_primary_pane

0x318e,	// (0x00016332) graphic_text_primary_small_pane

0x209b,	// (0x0001523f) graphic_text_secondary_pane

0x208a,	// (0x0001522e) graphic_text_title_pane

0xb65e,	// (0x0001e802) cursor_primary_pane_g1

0x3177,	// (0x0001631b) cursor_text_primary_t1

0xbc31,	// (0x0001edd5) cursor_primary_small_pane_g1

0x3169,	// (0x0001630d) cursor_text_primary_small_t1

0xbc27,	// (0x0001edcb) cursor_primary_small_pane_g1_copy1

0x3151,	// (0x000162f5) cursor_text_primary_small_t1_copy1

0x312f,	// (0x000162d3) cursor_text_title_t1

0xbc1d,	// (0x0001edc1) cursor_title_pane_g1

0xb65e,	// (0x0001e802) cursor_digital_pane_g1

0x20bd,	// (0x00015261) cursor_text_digital_t1

0x20cb,	// (0x0001526f) link_highlight_primary_pane_g1

0x30d8,	// (0x0001627c) link_highlight_primary_pane_t1

0x20cb,	// (0x0001526f) link_highlight_primary_small_pane_g1

0x20d3,	// (0x00015277) link_highlight_primary_small_pane_t1

0x20e2,	// (0x00015286) link_highlight_secondary_pane_g1

0x20ea,	// (0x0001528e) link_highlight_secondary_pane_t1

0x304c,	// (0x000161f0) link_highlight_title_pane_g1

0x3054,	// (0x000161f8) link_highlight_title_pane_t1

0x3035,	// (0x000161d9) link_highlight_digital_pane_g1

0x303d,	// (0x000161e1) link_highlight_digital_pane_t1

0x2efd,	// (0x000160a1) copy_highlight_primary_pane_g1

0x2f14,	// (0x000160b8) copy_highlight_primary_pane_t1

0x2efd,	// (0x000160a1) copy_highlight_primary_small_pane_g1

0x2f05,	// (0x000160a9) copy_highlight_primary_small_pane_t1

0x20f9,	// (0x0001529d) copy_highlight_secondary_pane_g1

0x2101,	// (0x000152a5) copy_highlight_secondary_pane_t1

0x2ee6,	// (0x0001608a) copy_highlight_title_pane_g1

0x2eee,	// (0x00016092) copy_highlight_title_pane_t1

0x2efd,	// (0x000160a1) copy_highlight_digital_pane_g1

0x42ae,	// (0x00017452) copy_highlight_digital_pane_t1

0x4202,	// (0x000173a6) graphic_text_primary_pane_g1

0x4292,	// (0x00017436) graphic_text_primary_pane_t1

0x42a0,	// (0x00017444) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x00022b43) graphic_text_primary_pane_t

0x426e,	// (0x00017412) graphic_text_primary_small_pane_g1

0x4276,	// (0x0001741a) graphic_text_primary_small_pane_t1

0x4284,	// (0x00017428) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x00022b3e) graphic_text_primary_small_pane_t

0x424a,	// (0x000173ee) graphic_text_secondary_pane_g1

0x4252,	// (0x000173f6) graphic_text_secondary_pane_t1

0x4260,	// (0x00017404) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x00022b39) graphic_text_secondary_pane_t

0x4226,	// (0x000173ca) graphic_text_title_pane_g1

0x422e,	// (0x000173d2) graphic_text_title_pane_t1

0x423c,	// (0x000173e0) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x00022b34) graphic_text_title_pane_t

0x4202,	// (0x000173a6) graphic_text_digital_pane_g1

0x420a,	// (0x000173ae) graphic_text_digital_pane_t1

0x4218,	// (0x000173bc) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x00022b2f) graphic_text_digital_pane_t

0xc869,	// (0x0001fa0d) navi_icon_pane_srt_ParamLimits

0xc869,	// (0x0001fa0d) navi_icon_pane_srt

0xc80d,	// (0x0001f9b1) navi_midp_pane_srt

0xc80d,	// (0x0001f9b1) navi_navi_pane_srt

0xc869,	// (0x0001fa0d) navi_text_pane_srt_ParamLimits

0xc869,	// (0x0001fa0d) navi_text_pane_srt

0x41cd,	// (0x00017371) navi_navi_icon_text_pane_srt

0x41d5,	// (0x00017379) navi_navi_pane_srt_g1_ParamLimits

0x41d5,	// (0x00017379) navi_navi_pane_srt_g1

0x41e7,	// (0x0001738b) navi_navi_pane_srt_g2_ParamLimits

0x41e7,	// (0x0001738b) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x00022b2a) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x00022b2a) navi_navi_pane_srt_g

0x41f9,	// (0x0001739d) navi_navi_tabs_pane_srt

0x41cd,	// (0x00017371) navi_navi_text_pane_srt

0x41cd,	// (0x00017371) navi_navi_volume_pane_srt

0x41be,	// (0x00017362) navi_navi_text_pane_srt_t1

0xf033,	// (0x000221d7) navi_navi_volume_pane_srt_g1

0xf03b,	// (0x000221df) volume_small_pane_srt_ParamLimits

0xf03b,	// (0x000221df) volume_small_pane_srt

0xeae5,	// (0x00021c89) volume_small_pane_srt_g1_ParamLimits

0xeae5,	// (0x00021c89) volume_small_pane_srt_g1

0xeaf5,	// (0x00021c99) volume_small_pane_srt_g2_ParamLimits

0xeaf5,	// (0x00021c99) volume_small_pane_srt_g2

0xeb06,	// (0x00021caa) volume_small_pane_srt_g3_ParamLimits

0xeb06,	// (0x00021caa) volume_small_pane_srt_g3

0xeb17,	// (0x00021cbb) volume_small_pane_srt_g4_ParamLimits

0xeb17,	// (0x00021cbb) volume_small_pane_srt_g4

0xeb28,	// (0x00021ccc) volume_small_pane_srt_g5_ParamLimits

0xeb28,	// (0x00021ccc) volume_small_pane_srt_g5

0xeb39,	// (0x00021cdd) volume_small_pane_srt_g6_ParamLimits

0xeb39,	// (0x00021cdd) volume_small_pane_srt_g6

0xeb4a,	// (0x00021cee) volume_small_pane_srt_g7_ParamLimits

0xeb4a,	// (0x00021cee) volume_small_pane_srt_g7

0xeb5b,	// (0x00021cff) volume_small_pane_srt_g8_ParamLimits

0xeb5b,	// (0x00021cff) volume_small_pane_srt_g8

0xeb6c,	// (0x00021d10) volume_small_pane_srt_g9_ParamLimits

0xeb6c,	// (0x00021d10) volume_small_pane_srt_g9

0xeb7d,	// (0x00021d21) volume_small_pane_srt_g10_ParamLimits

0xeb7d,	// (0x00021d21) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x000228d7) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x000228d7) volume_small_pane_srt_g

0xe1b9,	// (0x0002135d) query_popup_data_pane_cp2

0x41a4,	// (0x00017348) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x41a4,	// (0x00017348) navi_navi_icon_text_pane_srt_t1

0x3185,	// (0x00016329) navi_tabs_2_long_pane_srt

0x3185,	// (0x00016329) navi_tabs_2_pane_srt

0x3185,	// (0x00016329) navi_tabs_3_long_pane_srt

0x3185,	// (0x00016329) navi_tabs_3_pane_srt

0x3185,	// (0x00016329) navi_tabs_4_pane_srt

0xf013,	// (0x000221b7) tabs_2_active_pane_srt_ParamLimits

0xf013,	// (0x000221b7) tabs_2_active_pane_srt

0xf023,	// (0x000221c7) tabs_2_passive_pane_srt_ParamLimits

0xf023,	// (0x000221c7) tabs_2_passive_pane_srt

0x2924,	// (0x00015ac8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2924,	// (0x00015ac8) bg_passive_tab_pane_cp1_srt

0x4170,	// (0x00017314) bg_passive_tab_pane_g1_cp1_srt

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp1_srt

0x4179,	// (0x0001731d) bg_passive_tab_pane_g3_cp1_srt

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp1_srt_ParamLimits

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp1_srt

0x4182,	// (0x00017326) tabs_2_active_pane_srt_g1

0xc0d1,	// (0x0001f275) tabs_2_active_pane_srt_t1_ParamLimits

0xc0d1,	// (0x0001f275) tabs_2_active_pane_srt_t1

0x4170,	// (0x00017314) bg_active_tab_pane_g1_cp1_srt

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp1_srt

0x4179,	// (0x0001731d) bg_active_tab_pane_g3_cp1_srt

0xefe0,	// (0x00022184) tabs_3_active_pane_srt_ParamLimits

0xefe0,	// (0x00022184) tabs_3_active_pane_srt

0xeff1,	// (0x00022195) tabs_3_passive_pane_cp_srt_ParamLimits

0xeff1,	// (0x00022195) tabs_3_passive_pane_cp_srt

0xf002,	// (0x000221a6) tabs_3_passive_pane_srt_ParamLimits

0xf002,	// (0x000221a6) tabs_3_passive_pane_srt

0x2924,	// (0x00015ac8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2924,	// (0x00015ac8) bg_passive_tab_pane_cp2_srt

0x2110,	// (0x000152b4) bg_passive_tab_pane_g1_cp2_srt

0x1b96,	// (0x00014d3a) bg_passive_tab_pane_g2_cp2_srt

0x2119,	// (0x000152bd) bg_passive_tab_pane_g3_cp2_srt

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp2_srt_ParamLimits

0xc85b,	// (0x0001f9ff) bg_active_tab_pane_cp2_srt

0x4156,	// (0x000172fa) tabs_3_active_pane_srt_g1

0xc0bb,	// (0x0001f25f) tabs_3_active_pane_srt_t1_ParamLimits

0xc0bb,	// (0x0001f25f) tabs_3_active_pane_srt_t1

0x2110,	// (0x000152b4) bg_active_tab_pane_g1_cp2_srt

0x1b96,	// (0x00014d3a) bg_active_tab_pane_g2_cp2_srt

0x2119,	// (0x000152bd) bg_active_tab_pane_g3_cp2_srt

0xef98,	// (0x0002213c) tabs_4_active_pane_srt_ParamLimits

0xef98,	// (0x0002213c) tabs_4_active_pane_srt

0xefaa,	// (0x0002214e) tabs_4_passive_pane_cp2_srt_ParamLimits

0xefaa,	// (0x0002214e) tabs_4_passive_pane_cp2_srt

0xeb9d,	// (0x00021d41) aid_size_cell_toolbar

0x3ce4,	// (0x00016e88) main_idle_act_pane_ParamLimits

0xec57,	// (0x00021dfb) popup_large_graphic_colour_window_ParamLimits

0xa07c,	// (0x0001d220) popup_toolbar_window_ParamLimits

0xa07c,	// (0x0001d220) popup_toolbar_window

0x3f02,	// (0x000170a6) list_single_graphic_2heading_pane_ParamLimits

0x3f02,	// (0x000170a6) list_single_graphic_2heading_pane

0x15f2,	// (0x00014796) aid_size_cell_apps_grid_lsc_pane

0x1604,	// (0x000147a8) aid_size_cell_apps_grid_prt_pane

0x2288,	// (0x0001542c) bg_wml_button_pane_cp1_ParamLimits

0x2288,	// (0x0001542c) bg_wml_button_pane_cp1

0xbbbc,	// (0x0001ed60) form_midp_field_text_pane_t1_ParamLimits

0x2924,	// (0x00015ac8) input_focus_pane_cp050_ParamLimits

0x2b6c,	// (0x00015d10) list_midp_form_text_pane_ParamLimits

0x2b1e,	// (0x00015cc2) input_focus_pane_cp051_ParamLimits

0x2b32,	// (0x00015cd6) list_midp_choice_pane_ParamLimits

0x29dd,	// (0x00015b81) list_single_2graphic_pane_cp3_ParamLimits

0x29dd,	// (0x00015b81) list_single_2graphic_pane_cp3

0x29f3,	// (0x00015b97) list_single_midp_graphic_pane_ParamLimits

0x29f3,	// (0x00015b97) list_single_midp_graphic_pane

0xed0f,	// (0x00021eb3) list_single_graphic_2heading_pane_g1_ParamLimits

0xed0f,	// (0x00021eb3) list_single_graphic_2heading_pane_g1

0xed1b,	// (0x00021ebf) list_single_graphic_2heading_pane_g4_ParamLimits

0xed1b,	// (0x00021ebf) list_single_graphic_2heading_pane_g4

0xed27,	// (0x00021ecb) list_single_graphic_2heading_pane_g5_ParamLimits

0xed27,	// (0x00021ecb) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0002292a) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0002292a) list_single_graphic_2heading_pane_g

0xed33,	// (0x00021ed7) list_single_graphic_2heading_pane_t1_ParamLimits

0xed33,	// (0x00021ed7) list_single_graphic_2heading_pane_t1

0xed47,	// (0x00021eeb) list_single_graphic_2heading_pane_t2_ParamLimits

0xed47,	// (0x00021eeb) list_single_graphic_2heading_pane_t2

0xed63,	// (0x00021f07) list_single_graphic_2heading_pane_t3_ParamLimits

0xed63,	// (0x00021f07) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00022931) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00022931) list_single_graphic_2heading_pane_t

0x2704,	// (0x000158a8) bg_popup_sub_pane_cp2

0x272e,	// (0x000158d2) grid_toobar_pane

0xed7b,	// (0x00021f1f) cell_toolbar_pane_ParamLimits

0xed7b,	// (0x00021f1f) cell_toolbar_pane

0x27a4,	// (0x00015948) cell_toolbar_pane_g1_ParamLimits

0x27a4,	// (0x00015948) cell_toolbar_pane_g1

0x27b8,	// (0x0001595c) cell_toolbar_pane_g2_ParamLimits

0x27b8,	// (0x0001595c) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0002293f) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0002293f) cell_toolbar_pane_g

0x27da,	// (0x0001597e) grid_highlight_pane_cp2_ParamLimits

0x27da,	// (0x0001597e) grid_highlight_pane_cp2

0x27f4,	// (0x00015998) toolbar_button_pane

0x2800,	// (0x000159a4) toolbar_button_pane_g1

0x2808,	// (0x000159ac) toolbar_button_pane_g2

0x2810,	// (0x000159b4) toolbar_button_pane_g3

0x2818,	// (0x000159bc) toolbar_button_pane_g4

0x2820,	// (0x000159c4) toolbar_button_pane_g5

0x2828,	// (0x000159cc) toolbar_button_pane_g6

0x2830,	// (0x000159d4) toolbar_button_pane_g7

0x2838,	// (0x000159dc) toolbar_button_pane_g8

0x2840,	// (0x000159e4) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00022944) toolbar_button_pane_g

0xedb3,	// (0x00021f57) list_single_2graphic_pane_g1_cp3_ParamLimits

0xedb3,	// (0x00021f57) list_single_2graphic_pane_g1_cp3

0xa0d4,	// (0x0001d278) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa0d4,	// (0x0001d278) list_single_2graphic_pane_g2_cp3

0xedbf,	// (0x00021f63) list_single_2graphic_pane_g3_cp3

0xedc7,	// (0x00021f6b) list_single_2graphic_pane_g4_cp3_ParamLimits

0xedc7,	// (0x00021f6b) list_single_2graphic_pane_g4_cp3

0xedd3,	// (0x00021f77) list_single_2graphic_pane_t1_cp3_ParamLimits

0xedd3,	// (0x00021f77) list_single_2graphic_pane_t1_cp3

0xedee,	// (0x00021f92) list_single_midp_graphic_pane_g2_ParamLimits

0xedee,	// (0x00021f92) list_single_midp_graphic_pane_g2

0xeba5,	// (0x00021d49) aid_zoom_text_primary

0xebad,	// (0x00021d51) aid_zoom_text_secondary

0xb6b6,	// (0x0001e85a) status_small_pane_g7_ParamLimits

0xb6b6,	// (0x0001e85a) status_small_pane_g7

0xb6d9,	// (0x0001e87d) status_small_pane_t1_ParamLimits

0xa93f,	// (0x0001dae3) title_pane_g2

0x0003,

0xf529,	// (0x000226cd) title_pane_g

0xabdf,	// (0x0001dd83) aid_size_cell_colour_1_pane_ParamLimits

0xabdf,	// (0x0001dd83) aid_size_cell_colour_1_pane

0xabf3,	// (0x0001dd97) aid_size_cell_colour_2_pane_ParamLimits

0xabf3,	// (0x0001dd97) aid_size_cell_colour_2_pane

0xac07,	// (0x0001ddab) aid_size_cell_colour_3_pane_ParamLimits

0xac07,	// (0x0001ddab) aid_size_cell_colour_3_pane

0xac1b,	// (0x0001ddbf) aid_size_cell_colour_4_pane_ParamLimits

0xac1b,	// (0x0001ddbf) aid_size_cell_colour_4_pane

0xe73a,	// (0x000218de) title_pane_stacon_g1_ParamLimits

0xe73a,	// (0x000218de) title_pane_stacon_g1

0x2f6b,	// (0x0001610f) popup_note_wait_window_g3_ParamLimits

0x2f6b,	// (0x0001610f) popup_note_wait_window_g3

0x2fe2,	// (0x00016186) popup_note_wait_window_t5_ParamLimits

0x2fe2,	// (0x00016186) popup_note_wait_window_t5

0xc80d,	// (0x0001f9b1) main_feb_china_hwr_fs_writing_pane

0x9a0f,	// (0x0001cbb3) popup_feb_china_hwr_fs_window_ParamLimits

0x9a0f,	// (0x0001cbb3) popup_feb_china_hwr_fs_window

0xa0e5,	// (0x0001d289) aid_size_cell_hwr_fs_ParamLimits

0xa0e5,	// (0x0001d289) aid_size_cell_hwr_fs

0x2924,	// (0x00015ac8) bg_popup_sub_pane_cp3_ParamLimits

0x2924,	// (0x00015ac8) bg_popup_sub_pane_cp3

0xa0fa,	// (0x0001d29e) grid_hwr_fs_pane_ParamLimits

0xa0fa,	// (0x0001d29e) grid_hwr_fs_pane

0xee10,	// (0x00021fb4) linegrid_hwr_fs_pane_ParamLimits

0xee10,	// (0x00021fb4) linegrid_hwr_fs_pane

0xa112,	// (0x0001d2b6) cell_hwr_fs_pane_ParamLimits

0xa112,	// (0x0001d2b6) cell_hwr_fs_pane

0x2930,	// (0x00015ad4) linegrid_hwr_fs_pane_g1_ParamLimits

0x2930,	// (0x00015ad4) linegrid_hwr_fs_pane_g1

0xbb5d,	// (0x0001ed01) linegrid_hwr_fs_pane_g2_ParamLimits

0xbb5d,	// (0x0001ed01) linegrid_hwr_fs_pane_g2

0x294e,	// (0x00015af2) linegrid_hwr_fs_pane_g3_ParamLimits

0x294e,	// (0x00015af2) linegrid_hwr_fs_pane_g3

0xee20,	// (0x00021fc4) linegrid_hwr_fs_pane_g4_ParamLimits

0xee20,	// (0x00021fc4) linegrid_hwr_fs_pane_g4

0xee3e,	// (0x00021fe2) linegrid_hwr_fs_pane_g5_ParamLimits

0xee3e,	// (0x00021fe2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x0002296a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x0002296a) linegrid_hwr_fs_pane_g

0x295a,	// (0x00015afe) cell_hwr_fs_pane_g1_ParamLimits

0x295a,	// (0x00015afe) cell_hwr_fs_pane_g1

0x263f,	// (0x000157e3) cell_hwr_fs_pane_g2_ParamLimits

0x263f,	// (0x000157e3) cell_hwr_fs_pane_g2

0xbb6f,	// (0x0001ed13) cell_hwr_fs_pane_g3_ParamLimits

0xbb6f,	// (0x0001ed13) cell_hwr_fs_pane_g3

0xbb7c,	// (0x0001ed20) cell_hwr_fs_pane_g4_ParamLimits

0xbb7c,	// (0x0001ed20) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x00022975) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x00022975) cell_hwr_fs_pane_g

0xa138,	// (0x0001d2dc) cell_hwr_fs_pane_t1

0xc80d,	// (0x0001f9b1) grid_highlight_pane_cp6

0xc80d,	// (0x0001f9b1) main_idle_act2_pane

0x13a8,	// (0x0001454c) aid_inside_area_popup_secondary

0xbc51,	// (0x0001edf5) aid_inside_area_window_primary_ParamLimits

0xbc51,	// (0x0001edf5) aid_inside_area_window_primary

0x42bd,	// (0x00017461) ai2_news_ticker_pane

0x42c5,	// (0x00017469) aid_size_cell_ai1_link_ParamLimits

0x42c5,	// (0x00017469) aid_size_cell_ai1_link

0x42df,	// (0x00017483) popup_ai2_data_window_ParamLimits

0x42df,	// (0x00017483) popup_ai2_data_window

0x42fd,	// (0x000174a1) popup_ai2_link_window_ParamLimits

0x42fd,	// (0x000174a1) popup_ai2_link_window

0x2924,	// (0x00015ac8) bg_popup_sub_pane_cp4_ParamLimits

0x2924,	// (0x00015ac8) bg_popup_sub_pane_cp4

0x4313,	// (0x000174b7) grid_ai2_link_pane_ParamLimits

0x4313,	// (0x000174b7) grid_ai2_link_pane

0x432a,	// (0x000174ce) popup_ai2_link_window_g1_ParamLimits

0x432a,	// (0x000174ce) popup_ai2_link_window_g1

0x4336,	// (0x000174da) popup_ai2_link_window_g2_ParamLimits

0x4336,	// (0x000174da) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x00022b48) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x00022b48) popup_ai2_link_window_g

0x4347,	// (0x000174eb) ai2_mp_button_pane

0x434f,	// (0x000174f3) ai2_mp_volume_pane

0x2b1e,	// (0x00015cc2) bg_popup_sub_pane_cp5_ParamLimits

0x2b1e,	// (0x00015cc2) bg_popup_sub_pane_cp5

0x4357,	// (0x000174fb) heading_ai2_gene_pane_ParamLimits

0x4357,	// (0x000174fb) heading_ai2_gene_pane

0x4363,	// (0x00017507) list_ai2_gene_pane_ParamLimits

0x4363,	// (0x00017507) list_ai2_gene_pane

0x43ab,	// (0x0001754f) cell_ai2_link_pane_ParamLimits

0x43ab,	// (0x0001754f) cell_ai2_link_pane

0x43c1,	// (0x00017565) cell_ai2_link_pane_g1

0xc80d,	// (0x0001f9b1) grid_highlight_pane_cp7

0xf050,	// (0x000221f4) ai2_mp_volume_pane_g1

0x4494,	// (0x00017638) ai2_mp_volume_pane_g2

0x4409,	// (0x000175ad) list_ai2_gene_pane_t1

0x449c,	// (0x00017640) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x00022b61) ai2_mp_volume_pane_g

0xf058,	// (0x000221fc) volume_small_pane_cp3

0x44a4,	// (0x00017648) aid_size_cell_ai2_button

0x44ac,	// (0x00017650) grid_ai2_button_pane

0x44b5,	// (0x00017659) cell_ai2_button_pane_ParamLimits

0x44b5,	// (0x00017659) cell_ai2_button_pane

0xc803,	// (0x0001f9a7) cell_ai2_button_pane_g1

0xc80d,	// (0x0001f9b1) grid_highlight_pane_cp8

0x4454,	// (0x000175f8) ai2_gene_pane_t1_ParamLimits

0x4454,	// (0x000175f8) ai2_gene_pane_t1

0x9993,	// (0x0001cb37) aid_height_parent_landscape

0xbdf8,	// (0x0001ef9c) aid_height_set_list

0x3ce4,	// (0x00016e88) aid_size_parent

0x40dc,	// (0x00017280) aid_size_cell_graphic_pane_ParamLimits

0x4373,	// (0x00017517) popup_ai2_data_window_g1_ParamLimits

0x4373,	// (0x00017517) popup_ai2_data_window_g1

0x437f,	// (0x00017523) ai2_news_ticker_pane_g1

0x4387,	// (0x0001752b) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x00022b4d) ai2_news_ticker_pane_g

0x438f,	// (0x00017533) ai2_news_ticker_pane_t1

0x439d,	// (0x00017541) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x00022b52) ai2_news_ticker_pane_t

0x43ca,	// (0x0001756e) heading_ai2_gene_pane_g1

0x43d2,	// (0x00017576) heading_ai2_gene_pane_t1_ParamLimits

0x43d2,	// (0x00017576) heading_ai2_gene_pane_t1

0x43e7,	// (0x0001758b) list_highlight_pane_cp6

0x43ef,	// (0x00017593) ai2_gene_pane_ParamLimits

0x43ef,	// (0x00017593) ai2_gene_pane

0x4417,	// (0x000175bb) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x00022b57) list_ai2_gene_pane_t

0x4425,	// (0x000175c9) list_highlight_pane_cp8_ParamLimits

0x4425,	// (0x000175c9) list_highlight_pane_cp8

0x4436,	// (0x000175da) ai2_gene_pane_g1_ParamLimits

0x4436,	// (0x000175da) ai2_gene_pane_g1

0x4448,	// (0x000175ec) ai2_gene_pane_g2_ParamLimits

0x4448,	// (0x000175ec) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x00022b5c) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x00022b5c) ai2_gene_pane_g

0xe4db,	// (0x0002167f) scroll_pane_cp12

0x9950,	// (0x0001caf4) control_pane_t3_ParamLimits

0x9950,	// (0x0001caf4) control_pane_t3

0xb6ca,	// (0x0001e86e) status_small_pane_g8_ParamLimits

0xb6ca,	// (0x0001e86e) status_small_pane_g8

0x9ab1,	// (0x0001cc55) popup_find_window_ParamLimits

0x9d68,	// (0x0001cf0c) popup_note_image_window_ParamLimits

0x276a,	// (0x0001590e) list_double2_graphic_pane_vc_g1_ParamLimits

0x276a,	// (0x0001590e) list_double2_graphic_pane_vc_g1

0x2776,	// (0x0001591a) list_double2_graphic_pane_vc_g2_ParamLimits

0x2776,	// (0x0001591a) list_double2_graphic_pane_vc_g2

0x2782,	// (0x00015926) list_double2_graphic_pane_vc_g3_ParamLimits

0x2782,	// (0x00015926) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00022938) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00022938) list_double2_graphic_pane_vc_g

0x278e,	// (0x00015932) list_double2_graphic_pane_vc_t1_ParamLimits

0x278e,	// (0x00015932) list_double2_graphic_pane_vc_t1

0x2776,	// (0x0001591a) list_single_heading_pane_vc_g1_ParamLimits

0x2776,	// (0x0001591a) list_single_heading_pane_vc_g1

0x2782,	// (0x00015926) list_single_heading_pane_vc_g2_ParamLimits

0x2782,	// (0x00015926) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022747) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022747) list_single_heading_pane_vc_g

0x2848,	// (0x000159ec) list_single_heading_pane_vc_t1_ParamLimits

0x2848,	// (0x000159ec) list_single_heading_pane_vc_t1

0x285e,	// (0x00015a02) list_single_heading_pane_vc_t2_ParamLimits

0x285e,	// (0x00015a02) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x00022959) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x00022959) list_single_heading_pane_vc_t

0x2870,	// (0x00015a14) list_setting_number_pane_vc_g1_ParamLimits

0x2870,	// (0x00015a14) list_setting_number_pane_vc_g1

0x287c,	// (0x00015a20) list_setting_number_pane_vc_g2_ParamLimits

0x287c,	// (0x00015a20) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002295e) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002295e) list_setting_number_pane_vc_g

0x2888,	// (0x00015a2c) list_setting_number_pane_vc_t1_ParamLimits

0x2888,	// (0x00015a2c) list_setting_number_pane_vc_t1

0x289c,	// (0x00015a40) list_setting_number_pane_vc_t2_ParamLimits

0x289c,	// (0x00015a40) list_setting_number_pane_vc_t2

0x28b8,	// (0x00015a5c) list_setting_number_pane_vc_t3_ParamLimits

0x28b8,	// (0x00015a5c) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x00022963) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x00022963) list_setting_number_pane_vc_t

0x28e6,	// (0x00015a8a) set_value_pane_vc_ParamLimits

0x28e6,	// (0x00015a8a) set_value_pane_vc

0x3f02,	// (0x000170a6) list_double2_graphic_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double2_graphic_pane_vc

0x3f19,	// (0x000170bd) list_double2_large_graphic_pane_vc_ParamLimits

0x3f19,	// (0x000170bd) list_double2_large_graphic_pane_vc

0x3f02,	// (0x000170a6) list_double2_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double2_pane_vc

0x3f02,	// (0x000170a6) list_double_graphic_heading_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double_graphic_heading_pane_vc

0x3f02,	// (0x000170a6) list_double_graphic_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double_graphic_pane_vc

0x3f02,	// (0x000170a6) list_double_heading_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double_heading_pane_vc

0x3f2d,	// (0x000170d1) list_double_large_graphic_pane_vc_ParamLimits

0x3f2d,	// (0x000170d1) list_double_large_graphic_pane_vc

0x3f02,	// (0x000170a6) list_double_number_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double_number_pane_vc

0x3f02,	// (0x000170a6) list_double_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double_pane_vc

0x3f02,	// (0x000170a6) list_double_time_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_double_time_pane_vc

0x3f02,	// (0x000170a6) list_setting_number_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_setting_number_pane_vc

0x3f02,	// (0x000170a6) list_setting_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_setting_pane_vc

0x3f02,	// (0x000170a6) list_single_graphic_heading_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_single_graphic_heading_pane_vc

0x3f02,	// (0x000170a6) list_single_heading_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_single_heading_pane_vc

0x3f02,	// (0x000170a6) list_single_number_heading_pane_vc_ParamLimits

0x3f02,	// (0x000170a6) list_single_number_heading_pane_vc

0x276a,	// (0x0001590e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x276a,	// (0x0001590e) list_double_graphic_heading_pane_vc_g1

0x1e2a,	// (0x00014fce) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1e2a,	// (0x00014fce) list_double_graphic_heading_pane_vc_g2

0x44e8,	// (0x0001768c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x44e8,	// (0x0001768c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x00022b68) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x00022b68) list_double_graphic_heading_pane_vc_g

0x44f4,	// (0x00017698) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x44f4,	// (0x00017698) list_double_graphic_heading_pane_vc_t1

0x450a,	// (0x000176ae) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x450a,	// (0x000176ae) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x00022b6f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x00022b6f) list_double_graphic_heading_pane_vc_t

0x2870,	// (0x00015a14) list_setting_pane_vc_g1_ParamLimits

0x2870,	// (0x00015a14) list_setting_pane_vc_g1

0x287c,	// (0x00015a20) list_setting_pane_vc_g2_ParamLimits

0x287c,	// (0x00015a20) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002295e) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002295e) list_setting_pane_vc_g

0x475b,	// (0x000178ff) list_setting_pane_vc_t1_ParamLimits

0x475b,	// (0x000178ff) list_setting_pane_vc_t1

0x4777,	// (0x0001791b) list_setting_pane_vc_t2_ParamLimits

0x4777,	// (0x0001791b) list_setting_pane_vc_t2

0x0001,

0xfa0e,	// (0x00022bb2) list_setting_pane_vc_t_ParamLimits

0xfa0e,	// (0x00022bb2) list_setting_pane_vc_t

0x28e6,	// (0x00015a8a) set_value_pane_cp_vc_ParamLimits

0x28e6,	// (0x00015a8a) set_value_pane_cp_vc

0x2776,	// (0x0001591a) list_single_number_heading_pane_vc_g1_ParamLimits

0x2776,	// (0x0001591a) list_single_number_heading_pane_vc_g1

0x2782,	// (0x00015926) list_single_number_heading_pane_vc_g2_ParamLimits

0x2782,	// (0x00015926) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022747) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022747) list_single_number_heading_pane_vc_g

0x4793,	// (0x00017937) list_single_number_heading_pane_vc_t1_ParamLimits

0x4793,	// (0x00017937) list_single_number_heading_pane_vc_t1

0x47a9,	// (0x0001794d) list_single_number_heading_pane_vc_t2_ParamLimits

0x47a9,	// (0x0001794d) list_single_number_heading_pane_vc_t2

0x47bb,	// (0x0001795f) list_single_number_heading_pane_vc_t3_ParamLimits

0x47bb,	// (0x0001795f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa13,	// (0x00022bb7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x00022bb7) list_single_number_heading_pane_vc_t

0x276a,	// (0x0001590e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x276a,	// (0x0001590e) list_single_graphic_heading_pane_vc_g1

0x2776,	// (0x0001591a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2776,	// (0x0001591a) list_single_graphic_heading_pane_vc_g4

0x2782,	// (0x00015926) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2782,	// (0x00015926) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x00022938) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x00022938) list_single_graphic_heading_pane_vc_g

0x4793,	// (0x00017937) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4793,	// (0x00017937) list_single_graphic_heading_pane_vc_t1

0x47cd,	// (0x00017971) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x47cd,	// (0x00017971) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1a,	// (0x00022bbe) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x00022bbe) list_single_graphic_heading_pane_vc_t

0x2776,	// (0x0001591a) list_double2_pane_vc_g1_ParamLimits

0x2776,	// (0x0001591a) list_double2_pane_vc_g1

0x2782,	// (0x00015926) list_double2_pane_vc_g2_ParamLimits

0x2782,	// (0x00015926) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022747) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022747) list_double2_pane_vc_g

0x47df,	// (0x00017983) list_double2_pane_vc_t1_ParamLimits

0x47df,	// (0x00017983) list_double2_pane_vc_t1

0x47f5,	// (0x00017999) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x47f5,	// (0x00017999) list_double2_large_graphic_pane_vc_g1

0x4801,	// (0x000179a5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4801,	// (0x000179a5) list_double2_large_graphic_pane_vc_g2

0x480d,	// (0x000179b1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x480d,	// (0x000179b1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00022764) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00022764) list_double2_large_graphic_pane_vc_g

0x4819,	// (0x000179bd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4819,	// (0x000179bd) list_double2_large_graphic_pane_vc_t1

0x482f,	// (0x000179d3) list_double_time_pane_vc_g1_ParamLimits

0x482f,	// (0x000179d3) list_double_time_pane_vc_g1

0x483b,	// (0x000179df) list_double_time_pane_vc_g2_ParamLimits

0x483b,	// (0x000179df) list_double_time_pane_vc_g2

0x0001,

0xfa1f,	// (0x00022bc3) list_double_time_pane_vc_g_ParamLimits

0xfa1f,	// (0x00022bc3) list_double_time_pane_vc_g

0x4847,	// (0x000179eb) list_double_time_pane_vc_t1_ParamLimits

0x4847,	// (0x000179eb) list_double_time_pane_vc_t1

0x4877,	// (0x00017a1b) list_double_time_pane_vc_t2_ParamLimits

0x4877,	// (0x00017a1b) list_double_time_pane_vc_t2

0x48a0,	// (0x00017a44) list_double_time_pane_vc_t3_ParamLimits

0x48a0,	// (0x00017a44) list_double_time_pane_vc_t3

0x48b2,	// (0x00017a56) list_double_time_pane_vc_t4_ParamLimits

0x48b2,	// (0x00017a56) list_double_time_pane_vc_t4

0x0003,

0xfa24,	// (0x00022bc8) list_double_time_pane_vc_t_ParamLimits

0xfa24,	// (0x00022bc8) list_double_time_pane_vc_t

0x2776,	// (0x0001591a) list_double_pane_vc_g1_ParamLimits

0x2776,	// (0x0001591a) list_double_pane_vc_g1

0x2782,	// (0x00015926) list_double_pane_vc_g2_ParamLimits

0x2782,	// (0x00015926) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022747) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022747) list_double_pane_vc_g

0x48c6,	// (0x00017a6a) list_double_pane_vc_t1_ParamLimits

0x48c6,	// (0x00017a6a) list_double_pane_vc_t1

0x48da,	// (0x00017a7e) list_double_pane_vc_t2_ParamLimits

0x48da,	// (0x00017a7e) list_double_pane_vc_t2

0x0001,

0xfa2d,	// (0x00022bd1) list_double_pane_vc_t_ParamLimits

0xfa2d,	// (0x00022bd1) list_double_pane_vc_t

0x2776,	// (0x0001591a) list_double_number_pane_vc_g1_ParamLimits

0x2776,	// (0x0001591a) list_double_number_pane_vc_g1

0x2782,	// (0x00015926) list_double_number_pane_vc_g2_ParamLimits

0x2782,	// (0x00015926) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022747) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022747) list_double_number_pane_vc_g

0x48f0,	// (0x00017a94) list_double_number_pane_vc_t1_ParamLimits

0x48f0,	// (0x00017a94) list_double_number_pane_vc_t1

0x4902,	// (0x00017aa6) list_double_number_pane_vc_t2_ParamLimits

0x4902,	// (0x00017aa6) list_double_number_pane_vc_t2

0x48da,	// (0x00017a7e) list_double_number_pane_vc_t3_ParamLimits

0x48da,	// (0x00017a7e) list_double_number_pane_vc_t3

0x0002,

0xfa32,	// (0x00022bd6) list_double_number_pane_vc_t_ParamLimits

0xfa32,	// (0x00022bd6) list_double_number_pane_vc_t

0x4916,	// (0x00017aba) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4916,	// (0x00017aba) list_double_large_graphic_pane_vc_g1

0x4938,	// (0x00017adc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4938,	// (0x00017adc) list_double_large_graphic_pane_vc_g2

0x494c,	// (0x00017af0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x494c,	// (0x00017af0) list_double_large_graphic_pane_vc_g3

0x495b,	// (0x00017aff) list_double_large_graphic_pane_vc_g4_ParamLimits

0x495b,	// (0x00017aff) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa39,	// (0x00022bdd) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa39,	// (0x00022bdd) list_double_large_graphic_pane_vc_g

0x4967,	// (0x00017b0b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4967,	// (0x00017b0b) list_double_large_graphic_pane_vc_t1

0x4983,	// (0x00017b27) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4983,	// (0x00017b27) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x00022be6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa42,	// (0x00022be6) list_double_large_graphic_pane_vc_t

0x1e2a,	// (0x00014fce) list_double_heading_pane_vc_g1_ParamLimits

0x1e2a,	// (0x00014fce) list_double_heading_pane_vc_g1

0x44e8,	// (0x0001768c) list_double_heading_pane_vc_g2_ParamLimits

0x44e8,	// (0x0001768c) list_double_heading_pane_vc_g2

0x0001,

0xfa47,	// (0x00022beb) list_double_heading_pane_vc_g_ParamLimits

0xfa47,	// (0x00022beb) list_double_heading_pane_vc_g

0x49a3,	// (0x00017b47) list_double_heading_pane_vc_t1_ParamLimits

0x49a3,	// (0x00017b47) list_double_heading_pane_vc_t1

0x49b5,	// (0x00017b59) list_double_heading_pane_vc_t2_ParamLimits

0x49b5,	// (0x00017b59) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00022bf0) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00022bf0) list_double_heading_pane_vc_t

0x49cd,	// (0x00017b71) list_double_graphic_pane_vc_g1_ParamLimits

0x49cd,	// (0x00017b71) list_double_graphic_pane_vc_g1

0x49d9,	// (0x00017b7d) list_double_graphic_pane_vc_g2_ParamLimits

0x49d9,	// (0x00017b7d) list_double_graphic_pane_vc_g2

0x2776,	// (0x0001591a) list_double_graphic_pane_vc_g3_ParamLimits

0x2776,	// (0x0001591a) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00022bf5) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00022bf5) list_double_graphic_pane_vc_g

0x49f6,	// (0x00017b9a) list_double_graphic_pane_vc_t1_ParamLimits

0x49f6,	// (0x00017b9a) list_double_graphic_pane_vc_t1

0x4a20,	// (0x00017bc4) list_double_graphic_pane_vc_t2_ParamLimits

0x4a20,	// (0x00017bc4) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00022bfe) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00022bfe) list_double_graphic_pane_vc_t

0xde34,	// (0x00020fd8) aid_size_cell_fastswap

0x9607,	// (0x0001c7ab) aid_size_cell_touch_ParamLimits

0x9607,	// (0x0001c7ab) aid_size_cell_touch

0xdfbb,	// (0x0002115f) popup_fast_swap_wide_window_ParamLimits

0xdfbb,	// (0x0002115f) popup_fast_swap_wide_window

0x97c5,	// (0x0001c969) touch_pane_ParamLimits

0x97c5,	// (0x0001c969) touch_pane

0xe560,	// (0x00021704) button_value_adjust_pane_cp2

0xe568,	// (0x0002170c) button_value_adjust_pane_cp4

0xe570,	// (0x00021714) form_field_data_pane_cp2

0xb103,	// (0x0001e2a7) form_field_data_wide_pane_cp2

0x16c5,	// (0x00014869) bg_scroll_pane_ParamLimits

0xe8a2,	// (0x00021a46) scroll_handle_pane_ParamLimits

0xe8b6,	// (0x00021a5a) scroll_sc2_down_pane_ParamLimits

0xe8b6,	// (0x00021a5a) scroll_sc2_down_pane

0x16f6,	// (0x0001489a) scroll_sc2_up_pane_ParamLimits

0x16f6,	// (0x0001489a) scroll_sc2_up_pane

0xc213,	// (0x0001f3b7) grid_wheel_folder_pane_g1_ParamLimits

0xc213,	// (0x0001f3b7) grid_wheel_folder_pane_g1

0xea7d,	// (0x00021c21) clock_nsta_pane_cp2_ParamLimits

0xea7d,	// (0x00021c21) clock_nsta_pane_cp2

0xb5a8,	// (0x0001e74c) listscroll_midp_pane_ParamLimits

0xb5b4,	// (0x0001e758) midp_canvas_pane

0x2258,	// (0x000153fc) nsta_clock_indic_pane

0x2294,	// (0x00015438) listscroll_form_pane_vc

0x229c,	// (0x00015440) listscroll_set_pane_vc_ParamLimits

0x229c,	// (0x00015440) listscroll_set_pane_vc

0xb84c,	// (0x0001e9f0) clock_nsta_pane

0xb876,	// (0x0001ea1a) indicator_nsta_pane

0x2704,	// (0x000158a8) bg_popup_sub_pane_cp2_ParamLimits

0x2718,	// (0x000158bc) find_pane_cp2_ParamLimits

0x2718,	// (0x000158bc) find_pane_cp2

0x272e,	// (0x000158d2) grid_toobar_pane_ParamLimits

0x28f8,	// (0x00015a9c) list_form_gen_pane_vc_ParamLimits

0x28f8,	// (0x00015a9c) list_form_gen_pane_vc

0x290e,	// (0x00015ab2) scroll_pane_cp8_vc_ParamLimits

0x290e,	// (0x00015ab2) scroll_pane_cp8_vc

0x298a,	// (0x00015b2e) data_form_wide_pane_vc_ParamLimits

0x298a,	// (0x00015b2e) data_form_wide_pane_vc

0x2996,	// (0x00015b3a) form_field_data_wide_pane_vc_g1

0x299e,	// (0x00015b42) form_field_data_wide_pane_vc_t1_ParamLimits

0x299e,	// (0x00015b42) form_field_data_wide_pane_vc_t1

0xe5cc,	// (0x00021770) input_focus_pane_cp6_vc_ParamLimits

0xe5cc,	// (0x00021770) input_focus_pane_cp6_vc

0x2ce9,	// (0x00015e8d) list_midp_pane_ParamLimits

0x414a,	// (0x000172ee) scroll_pane_cp16_ParamLimits

0x414a,	// (0x000172ee) scroll_pane_cp16

0x2d3f,	// (0x00015ee3) button_value_adjust_pane_ParamLimits

0x2d3f,	// (0x00015ee3) button_value_adjust_pane

0xbe09,	// (0x0001efad) button_value_adjust_pane_cp6_ParamLimits

0xbe09,	// (0x0001efad) button_value_adjust_pane_cp6

0xbf45,	// (0x0001f0e9) settings_code_pane_cp_ParamLimits

0xbf45,	// (0x0001f0e9) settings_code_pane_cp

0xc803,	// (0x0001f9a7) cell_touch_pane_g1

0xc803,	// (0x0001f9a7) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0002287d) cell_touch_pane_g

0xc0e7,	// (0x0001f28b) cell_touch_pane_cp_ParamLimits

0xc0e7,	// (0x0001f28b) cell_touch_pane_cp

0xc103,	// (0x0001f2a7) cell_touch_pane_ParamLimits

0xc103,	// (0x0001f2a7) cell_touch_pane

0xc803,	// (0x0001f9a7) scroll_sc2_down_pane_g1

0xc803,	// (0x0001f9a7) scroll_sc2_up_pane_g1

0xc80d,	// (0x0001f9b1) bg_set_opt_pane_cp4_vc

0x4528,	// (0x000176cc) list_set_graphic_pane_vc_g1_ParamLimits

0x4528,	// (0x000176cc) list_set_graphic_pane_vc_g1

0x4534,	// (0x000176d8) list_set_graphic_pane_vc_g2_ParamLimits

0x4534,	// (0x000176d8) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x00022b74) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x00022b74) list_set_graphic_pane_vc_g

0x4540,	// (0x000176e4) text_primary_small_cp13_vc_ParamLimits

0x4540,	// (0x000176e4) text_primary_small_cp13_vc

0x4558,	// (0x000176fc) list_set_graphic_pane_vc_ParamLimits

0x4558,	// (0x000176fc) list_set_graphic_pane_vc

0xc80d,	// (0x0001f9b1) input_focus_pane_cp2_vc

0xc803,	// (0x0001f9a7) setting_code_pane_vc_g1

0xc880,	// (0x0001fa24) setting_code_pane_vc_t1

0x456b,	// (0x0001770f) set_text_pane_vc_t1_ParamLimits

0x456b,	// (0x0001770f) set_text_pane_vc_t1

0xc80d,	// (0x0001f9b1) input_focus_pane_cp1_vc

0x458c,	// (0x00017730) list_set_text_pane_vc

0xc803,	// (0x0001f9a7) setting_text_pane_vc_g1

0xc80d,	// (0x0001f9b1) bg_set_opt_pane_cp2_vc

0xc877,	// (0x0001fa1b) setting_slider_graphic_pane_vc_g1

0x4596,	// (0x0001773a) setting_slider_graphic_pane_vc_t1

0x45a8,	// (0x0001774c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x00022b79) setting_slider_graphic_pane_vc_t

0x45ba,	// (0x0001775e) slider_set_pane_cp_vc

0x45c4,	// (0x00017768) slider_set_pane_vc_g1

0x45cd,	// (0x00017771) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x00022b7e) slider_set_pane_vc_g

0xe687,	// (0x0002182b) set_opt_bg_pane_g1_copy1

0xe68f,	// (0x00021833) set_opt_bg_pane_g2_copy1

0x45f9,	// (0x0001779d) set_opt_bg_pane_g3_copy1

0xe69f,	// (0x00021843) set_opt_bg_pane_g4_copy1

0xe6a7,	// (0x0002184b) set_opt_bg_pane_g5_copy1

0xe6af,	// (0x00021853) set_opt_bg_pane_g6_copy1

0x4603,	// (0x000177a7) set_opt_bg_pane_g7_copy1

0x460d,	// (0x000177b1) set_opt_bg_pane_g8_copy1

0x4617,	// (0x000177bb) set_opt_bg_pane_g9_copy1

0xc80d,	// (0x0001f9b1) bg_set_opt_pane_cp_vc

0x4621,	// (0x000177c5) setting_slider_pane_vc_t1

0x4630,	// (0x000177d4) setting_slider_pane_vc_t2

0x4642,	// (0x000177e6) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x00022b8d) setting_slider_pane_vc_t

0x4654,	// (0x000177f8) slider_set_pane_vc

0xee54,	// (0x00021ff8) volume_set_pane_vc_g1

0xee8f,	// (0x00022033) volume_set_pane_vc_g2

0xee98,	// (0x0002203c) volume_set_pane_vc_g3

0xeea1,	// (0x00022045) volume_set_pane_vc_g4

0xeeaa,	// (0x0002204e) volume_set_pane_vc_g5

0xeeb3,	// (0x00022057) volume_set_pane_vc_g6

0xeebc,	// (0x00022060) volume_set_pane_vc_g7

0xeec5,	// (0x00022069) volume_set_pane_vc_g8

0xeece,	// (0x00022072) volume_set_pane_vc_g9

0xeed7,	// (0x0002207b) volume_set_pane_vc_g10

0x0009,

0xf9f0,	// (0x00022b94) volume_set_pane_vc_g

0x465e,	// (0x00017802) volume_set_pane_vc

0x4668,	// (0x0001780c) button_value_adjust_pane_cp1_vc

0x4672,	// (0x00017816) list_highlight_pane_cp2_vc

0x467b,	// (0x0001781f) list_set_pane_vc_ParamLimits

0x467b,	// (0x0001781f) list_set_pane_vc

0x46e9,	// (0x0001788d) main_pane_set_vc_t1_ParamLimits

0x46e9,	// (0x0001788d) main_pane_set_vc_t1

0x46fe,	// (0x000178a2) main_pane_set_vc_t2_ParamLimits

0x46fe,	// (0x000178a2) main_pane_set_vc_t2

0x4710,	// (0x000178b4) main_pane_set_vc_t3_ParamLimits

0x4710,	// (0x000178b4) main_pane_set_vc_t3

0x4724,	// (0x000178c8) main_pane_set_vc_t4_ParamLimits

0x4724,	// (0x000178c8) main_pane_set_vc_t4

0x0003,

0xfa05,	// (0x00022ba9) main_pane_set_vc_t_ParamLimits

0xfa05,	// (0x00022ba9) main_pane_set_vc_t

0x4738,	// (0x000178dc) setting_code_pane_vc_ParamLimits

0x4738,	// (0x000178dc) setting_code_pane_vc

0x4749,	// (0x000178ed) setting_slider_graphic_pane_vc

0x4749,	// (0x000178ed) setting_slider_pane_vc

0x4749,	// (0x000178ed) setting_text_pane_vc

0x4749,	// (0x000178ed) setting_volume_pane_vc

0x4753,	// (0x000178f7) scroll_pane_cp121_vc

0xe54e,	// (0x000216f2) set_content_pane_vc

0x4a3e,	// (0x00017be2) button_value_adjust_pane_g1

0x4a47,	// (0x00017beb) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00022c03) button_value_adjust_pane_g

0x4a50,	// (0x00017bf4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4a50,	// (0x00017bf4) form_field_slider_wide_pane_vc_t1

0x4a62,	// (0x00017c06) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4a62,	// (0x00017c06) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00022c08) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00022c08) form_field_slider_wide_pane_vc_t

0xc85b,	// (0x0001f9ff) input_focus_pane_cp10_vc_ParamLimits

0xc85b,	// (0x0001f9ff) input_focus_pane_cp10_vc

0x4a8e,	// (0x00017c32) slider_cont_pane_cp1_vc_ParamLimits

0x4a8e,	// (0x00017c32) slider_cont_pane_cp1_vc

0x4aa0,	// (0x00017c44) slider_form_pane_g1_cp2

0x45cd,	// (0x00017771) slider_form_pane_g2_cp2

0x4acd,	// (0x00017c71) form_field_slider_pane_vc_t3

0x4adb,	// (0x00017c7f) form_field_slider_pane_vc_t4

0x4ae9,	// (0x00017c8d) slider_form_pane_vc_ParamLimits

0x4ae9,	// (0x00017c8d) slider_form_pane_vc

0x4af6,	// (0x00017c9a) form_field_slider_pane_vc_t1_ParamLimits

0x4af6,	// (0x00017c9a) form_field_slider_pane_vc_t1

0x4a62,	// (0x00017c06) form_field_slider_pane_vc_t2_ParamLimits

0x4a62,	// (0x00017c06) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x00022c1a) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x00022c1a) form_field_slider_pane_vc_t

0xc85b,	// (0x0001f9ff) input_focus_pane_cp9_vc_ParamLimits

0xc85b,	// (0x0001f9ff) input_focus_pane_cp9_vc

0x4b0c,	// (0x00017cb0) slider_cont_pane_vc_ParamLimits

0x4b0c,	// (0x00017cb0) slider_cont_pane_vc

0x4b20,	// (0x00017cc4) list_form_graphic_pane_cp_vc_ParamLimits

0x4b20,	// (0x00017cc4) list_form_graphic_pane_cp_vc

0x2996,	// (0x00015b3a) form_field_popup_wide_pane_vc_g1

0x4b35,	// (0x00017cd9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4b35,	// (0x00017cd9) form_field_popup_wide_pane_vc_t1

0xe5cc,	// (0x00021770) input_focus_pane_cp8_vc_ParamLimits

0xe5cc,	// (0x00021770) input_focus_pane_cp8_vc

0x4b7a,	// (0x00017d1e) list_form_wide_pane_vc_ParamLimits

0x4b7a,	// (0x00017d1e) list_form_wide_pane_vc

0x4b86,	// (0x00017d2a) list_form_graphic_pane_vc_g1

0x4b8e,	// (0x00017d32) list_form_graphic_pane_vc_t1_ParamLimits

0x4b8e,	// (0x00017d32) list_form_graphic_pane_vc_t1

0xc869,	// (0x0001fa0d) list_highlight_pane_cp5_vc_ParamLimits

0xc869,	// (0x0001fa0d) list_highlight_pane_cp5_vc

0x4baa,	// (0x00017d4e) list_form_graphic_pane_vc_ParamLimits

0x4baa,	// (0x00017d4e) list_form_graphic_pane_vc

0x2996,	// (0x00015b3a) form_field_popup_pane_vc_g1

0x4bc0,	// (0x00017d64) form_field_popup_pane_vc_t1_ParamLimits

0x4bc0,	// (0x00017d64) form_field_popup_pane_vc_t1

0xe5cc,	// (0x00021770) input_focus_pane_cp7_vc_ParamLimits

0xe5cc,	// (0x00021770) input_focus_pane_cp7_vc

0x4bd7,	// (0x00017d7b) list_form_pane_vc_ParamLimits

0x4bd7,	// (0x00017d7b) list_form_pane_vc

0x4be3,	// (0x00017d87) data_form_pane_vc_t1_ParamLimits

0x4be3,	// (0x00017d87) data_form_pane_vc_t1

0xe687,	// (0x0002182b) input_focus_pane_vc_g1

0xe68f,	// (0x00021833) input_focus_pane_vc_g2

0xe697,	// (0x0002183b) input_focus_pane_vc_g3

0xe69f,	// (0x00021843) input_focus_pane_vc_g4

0xe6a7,	// (0x0002184b) input_focus_pane_vc_g5

0xe6af,	// (0x00021853) input_focus_pane_vc_g6

0xe6b7,	// (0x0002185b) input_focus_pane_vc_g7

0xe6bf,	// (0x00021863) input_focus_pane_vc_g8

0xe6c7,	// (0x0002186b) input_focus_pane_vc_g9

0xc803,	// (0x0001f9a7) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00022806) input_focus_pane_vc_g

0x298a,	// (0x00015b2e) data_form_pane_vc_ParamLimits

0x298a,	// (0x00015b2e) data_form_pane_vc

0x2996,	// (0x00015b3a) form_field_data_pane_vc_g1

0x4c00,	// (0x00017da4) form_field_data_pane_vc_t1_ParamLimits

0x4c00,	// (0x00017da4) form_field_data_pane_vc_t1

0xe5cc,	// (0x00021770) input_focus_pane_vc_ParamLimits

0xe5cc,	// (0x00021770) input_focus_pane_vc

0x4c1a,	// (0x00017dbe) button_value_adjust_pane_cp3_vc

0x4c22,	// (0x00017dc6) button_value_adjust_pane_cp5_vc

0x4c2a,	// (0x00017dce) form_field_data_pane_vc_ParamLimits

0x4c2a,	// (0x00017dce) form_field_data_pane_vc

0x4c45,	// (0x00017de9) form_field_data_pane_vc_cp2

0x4c4d,	// (0x00017df1) form_field_data_wide_pane_vc_ParamLimits

0x4c4d,	// (0x00017df1) form_field_data_wide_pane_vc

0x4c67,	// (0x00017e0b) form_field_data_wide_pane_vc_cp2

0x4c6f,	// (0x00017e13) form_field_popup_pane_vc_ParamLimits

0x4c6f,	// (0x00017e13) form_field_popup_pane_vc

0x4c8a,	// (0x00017e2e) form_field_popup_wide_pane_vc_ParamLimits

0x4c8a,	// (0x00017e2e) form_field_popup_wide_pane_vc

0x4ca4,	// (0x00017e48) form_field_slider_pane_vc_ParamLimits

0x4ca4,	// (0x00017e48) form_field_slider_pane_vc

0x4cb7,	// (0x00017e5b) form_field_slider_wide_pane_vc_ParamLimits

0x4cb7,	// (0x00017e5b) form_field_slider_wide_pane_vc

0xc121,	// (0x0001f2c5) grid_touch_1_pane_ParamLimits

0xc121,	// (0x0001f2c5) grid_touch_1_pane

0xc135,	// (0x0001f2d9) grid_touch_2_pane_ParamLimits

0xc135,	// (0x0001f2d9) grid_touch_2_pane

0x4d9d,	// (0x00017f41) touch_pane_g1_ParamLimits

0x4d9d,	// (0x00017f41) touch_pane_g1

0x4cf0,	// (0x00017e94) cell_app_pane_cp_wide_ParamLimits

0x4cf0,	// (0x00017e94) cell_app_pane_cp_wide

0x4d01,	// (0x00017ea5) grid_popup_fast_wide_pane_ParamLimits

0x4d01,	// (0x00017ea5) grid_popup_fast_wide_pane

0x4d15,	// (0x00017eb9) scroll_pane_cp19_ParamLimits

0x4d15,	// (0x00017eb9) scroll_pane_cp19

0xc80d,	// (0x0001f9b1) bg_popup_window_pane_cp20

0x4d29,	// (0x00017ecd) listscroll_popup_fast_wide_pane

0xc161,	// (0x0001f305) grid_indicator_nsta_pane

0x4d43,	// (0x00017ee7) clock_nsta_pane_g1

0x4d4c,	// (0x00017ef0) clock_nsta_pane_t1

0xc16d,	// (0x0001f311) cell_indicator_nsta_pane_ParamLimits

0xc16d,	// (0x0001f311) cell_indicator_nsta_pane

0x4d9d,	// (0x00017f41) cell_indicator_nsta_pane_g1

0xc188,	// (0x0001f32c) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x00022c2b) cell_indicator_nsta_pane_g

0x4dbe,	// (0x00017f62) clock_nsta_pane_cp

0x4dc7,	// (0x00017f6b) indicator_nsta_pane_cp

0x4dd1,	// (0x00017f75) nsta_clock_indic_pane_g1

0xc8bf,	// (0x0001fa63) grid_indicator_pane

0x17e8,	// (0x0001498c) scroll_pane_cp29

0xe9cc,	// (0x00021b70) indicator_nsta_pane_cp2_ParamLimits

0xe9cc,	// (0x00021b70) indicator_nsta_pane_cp2

0xc869,	// (0x0001fa0d) main_apps_wheel_pane

0x2ba6,	// (0x00015d4a) form_midp_field_text_pane_ParamLimits

0x2cf5,	// (0x00015e99) scroll_bar_cp050_ParamLimits

0x4e2a,	// (0x00017fce) cell_indicator_pane_ParamLimits

0x4e2a,	// (0x00017fce) cell_indicator_pane

0x4e42,	// (0x00017fe6) cell_indicator_pane_g1

0xc195,	// (0x0001f339) grid_wheel_folder_pane_ParamLimits

0xc195,	// (0x0001f339) grid_wheel_folder_pane

0xc1a3,	// (0x0001f347) list_wheel_apps_pane_ParamLimits

0xc1a3,	// (0x0001f347) list_wheel_apps_pane

0xc1b1,	// (0x0001f355) main_apps_wheel_pane_g1_ParamLimits

0xc1b1,	// (0x0001f355) main_apps_wheel_pane_g1

0xc1c1,	// (0x0001f365) main_apps_wheel_pane_g2_ParamLimits

0xc1c1,	// (0x0001f365) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x00022c47) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x00022c47) main_apps_wheel_pane_g

0xc1d1,	// (0x0001f375) main_apps_wheel_pane_t1_ParamLimits

0xc1d1,	// (0x0001f375) main_apps_wheel_pane_t1

0xc1e9,	// (0x0001f38d) list_wheel_apps_pane_g1

0xc1f1,	// (0x0001f395) list_wheel_apps_pane_g2

0xc1f9,	// (0x0001f39d) list_wheel_apps_pane_g3

0xc201,	// (0x0001f3a5) list_wheel_apps_pane_g4

0xc209,	// (0x0001f3ad) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x00022c4c) list_wheel_apps_pane_g

0x1dd5,	// (0x00014f79) navi_icon_text_pane

0xb73e,	// (0x0001e8e2) aid_fill_nsta

0xc226,	// (0x0001f3ca) navi_icon_text_pane_g1

0xc232,	// (0x0001f3d6) navi_icon_text_pane_t1

0x1c60,	// (0x00014e04) list_set_graphic_pane_t1_ParamLimits

0x1c60,	// (0x00014e04) list_set_graphic_pane_t1

0x3462,	// (0x00016606) popup_midp_note_alarm_window_t6_ParamLimits

0x3462,	// (0x00016606) popup_midp_note_alarm_window_t6

0x3474,	// (0x00016618) popup_midp_note_alarm_window_t7_ParamLimits

0x3474,	// (0x00016618) popup_midp_note_alarm_window_t7

0x3486,	// (0x0001662a) popup_midp_note_alarm_window_t8_ParamLimits

0x3486,	// (0x0001662a) popup_midp_note_alarm_window_t8

0x3498,	// (0x0001663c) popup_midp_note_alarm_window_t9_ParamLimits

0x3498,	// (0x0001663c) popup_midp_note_alarm_window_t9

0x34aa,	// (0x0001664e) popup_midp_note_alarm_window_t10_ParamLimits

0x34aa,	// (0x0001664e) popup_midp_note_alarm_window_t10

0x34bc,	// (0x00016660) popup_midp_note_alarm_window_t11_ParamLimits

0x34bc,	// (0x00016660) popup_midp_note_alarm_window_t11

0x34ce,	// (0x00016672) scroll_pane_cp17_ParamLimits

0x34ce,	// (0x00016672) scroll_pane_cp17

0xee54,	// (0x00021ff8) volume_small_pane_cp_g1

0xf061,	// (0x00022205) volume_small_pane_cp_g2

0xf06a,	// (0x0002220e) volume_small_pane_cp_g3

0xf073,	// (0x00022217) volume_small_pane_cp_g4

0xf07c,	// (0x00022220) volume_small_pane_cp_g5

0xf085,	// (0x00022229) volume_small_pane_cp_g6

0xf08e,	// (0x00022232) volume_small_pane_cp_g7

0xf097,	// (0x0002223b) volume_small_pane_cp_g8

0xf0a0,	// (0x00022244) volume_small_pane_cp_g9

0xf0a9,	// (0x0002224d) volume_small_pane_cp_g10

0x2037,	// (0x000151db) midp_ticker_pane_g1_ParamLimits

0x2043,	// (0x000151e7) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x000228d2) midp_ticker_pane_g_ParamLimits

0xb64c,	// (0x0001e7f0) midp_ticker_pane_t1_ParamLimits

0xb762,	// (0x0001e906) aid_fill_nsta_2

0x2ce1,	// (0x00015e85) list_form2_midp_pane

0x3eba,	// (0x0001705e) midp_editing_number_pane_ParamLimits

0x3ec9,	// (0x0001706d) midp_ticker_pane_ParamLimits

0x4f35,	// (0x000180d9) form2_midp_field_pane

0x4f59,	// (0x000180fd) scroll_pane_cp51

0x4f79,	// (0x0001811d) form2_midp_button_pane_ParamLimits

0x4f79,	// (0x0001811d) form2_midp_button_pane

0x4f8b,	// (0x0001812f) form2_midp_content_pane_ParamLimits

0x4f8b,	// (0x0001812f) form2_midp_content_pane

0x4fa5,	// (0x00018149) form2_midp_field_choice_group_pane

0x4fad,	// (0x00018151) form2_midp_field_pane_g1

0x4fb5,	// (0x00018159) form2_midp_field_pane_g2

0x4fbd,	// (0x00018161) form2_midp_field_pane_g3

0x4fc5,	// (0x00018169) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x00022c71) form2_midp_field_pane_g

0x4fcd,	// (0x00018171) form2_midp_gauge_slider_pane

0x4fd5,	// (0x00018179) form2_midp_gauge_wait_pane

0x4fdd,	// (0x00018181) form2_midp_image_pane_ParamLimits

0x4fdd,	// (0x00018181) form2_midp_image_pane

0x4ff8,	// (0x0001819c) form2_midp_label_pane_ParamLimits

0x4ff8,	// (0x0001819c) form2_midp_label_pane

0xc260,	// (0x0001f404) form2_midp_label_pane_cp_ParamLimits

0xc260,	// (0x0001f404) form2_midp_label_pane_cp

0x5038,	// (0x000181dc) form2_midp_string_pane_ParamLimits

0x5038,	// (0x000181dc) form2_midp_string_pane

0x504a,	// (0x000181ee) form2_midp_text_pane_ParamLimits

0x504a,	// (0x000181ee) form2_midp_text_pane

0x506b,	// (0x0001820f) form2_midp_time_pane

0x507b,	// (0x0001821f) input_focus_pane_cp51_ParamLimits

0x507b,	// (0x0001821f) input_focus_pane_cp51

0x5093,	// (0x00018237) form2_midp_label_pane_t1_ParamLimits

0x5093,	// (0x00018237) form2_midp_label_pane_t1

0x50d9,	// (0x0001827d) form2_mdip_text_pane_t1_ParamLimits

0x50d9,	// (0x0001827d) form2_mdip_text_pane_t1

0x50f8,	// (0x0001829c) form2_midp_time_pane_t1

0x5113,	// (0x000182b7) form2_midp_gauge_slider_pane_t1

0xc281,	// (0x0001f425) form2_midp_gauge_slider_pane_t2

0xc293,	// (0x0001f437) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x00022c7a) form2_midp_gauge_slider_pane_t

0x5149,	// (0x000182ed) form2_midp_slider_pane

0x5155,	// (0x000182f9) form2_midp_gauge_wait_pane_t1

0x5163,	// (0x00018307) form2_midp_wait_pane_ParamLimits

0x5163,	// (0x00018307) form2_midp_wait_pane

0x29dd,	// (0x00015b81) list_single_2graphic_pane_cp4_ParamLimits

0x29dd,	// (0x00015b81) list_single_2graphic_pane_cp4

0xc2a5,	// (0x0001f449) list_single_midp_graphic_pane_cp_ParamLimits

0xc2a5,	// (0x0001f449) list_single_midp_graphic_pane_cp

0xc80d,	// (0x0001f9b1) list_highlight_pane_cp20

0x51a7,	// (0x0001834b) list_single_2graphic_pane_g1_cp4

0x43ca,	// (0x0001756e) list_single_2graphic_pane_g2_cp4

0x51af,	// (0x00018353) list_single_2graphic_pane_t1_cp4

0xc869,	// (0x0001fa0d) list_highlight_pane_cp21

0x51be,	// (0x00018362) list_single_midp_graphic_pane_g4_cp

0x51cd,	// (0x00018371) list_single_midp_graphic_pane_t1_cp

0xc2c6,	// (0x0001f46a) form2_mdip_string_pane_t1_ParamLimits

0xc2c6,	// (0x0001f46a) form2_mdip_string_pane_t1

0xc80d,	// (0x0001f9b1) bg_wml_button_pane_cp2

0xc803,	// (0x0001f9a7) form2_midp_image_pane_g1

0xe4ec,	// (0x00021690) list_double_large_graphic_pane_g5_ParamLimits

0xe4ec,	// (0x00021690) list_double_large_graphic_pane_g5

0xb5a8,	// (0x0001e74c) midp_form_pane_ParamLimits

0xc869,	// (0x0001fa0d) main_apps_wheel_pane_ParamLimits

0x9dee,	// (0x0001cf92) popup_preview_window_ParamLimits

0x9dee,	// (0x0001cf92) popup_preview_window

0xeca8,	// (0x00021e4c) popup_touch_info_window_ParamLimits

0xeca8,	// (0x00021e4c) popup_touch_info_window

0xecca,	// (0x00021e6e) popup_touch_menu_window_ParamLimits

0xecca,	// (0x00021e6e) popup_touch_menu_window

0xc7f9,	// (0x0001f99d) bg_popup_sub_pane_cp6

0x527e,	// (0x00018422) list_touch_menu_pane

0x5286,	// (0x0001842a) list_single_touch_menu_pane_ParamLimits

0x5286,	// (0x0001842a) list_single_touch_menu_pane

0x529e,	// (0x00018442) list_single_touch_menu_pane_t1

0xc869,	// (0x0001fa0d) bg_popup_sub_pane_cp7_ParamLimits

0xc869,	// (0x0001fa0d) bg_popup_sub_pane_cp7

0x52ac,	// (0x00018450) heading_sub_pane

0x52b4,	// (0x00018458) list_touch_info_pane_ParamLimits

0x52b4,	// (0x00018458) list_touch_info_pane

0x52c3,	// (0x00018467) list_single_touch_info_pane_ParamLimits

0x52c3,	// (0x00018467) list_single_touch_info_pane

0x52d5,	// (0x00018479) list_single_touch_info_pane_t1

0x52e3,	// (0x00018487) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x00022c88) list_single_touch_info_pane_t

0x1f59,	// (0x000150fd) bg_popup_heading_pane_cp

0x52f1,	// (0x00018495) heading_sub_pane_t1

0x2924,	// (0x00015ac8) bg_popup_preview_window_pane_cp_ParamLimits

0x2924,	// (0x00015ac8) bg_popup_preview_window_pane_cp

0x52ac,	// (0x00018450) heading_preview_pane

0x52b4,	// (0x00018458) list_preview_pane_ParamLimits

0x52b4,	// (0x00018458) list_preview_pane

0x52ff,	// (0x000184a3) popup_preview_window_g1

0x52c3,	// (0x00018467) list_single_preview_pane_ParamLimits

0x52c3,	// (0x00018467) list_single_preview_pane

0x5307,	// (0x000184ab) list_single_preview_pane_g1

0x530f,	// (0x000184b3) list_single_preview_pane_t1

0x52d5,	// (0x00018479) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x00022c8d) list_single_preview_pane_t

0x531d,	// (0x000184c1) bg_popup_heading_pane_cp2_ParamLimits

0x531d,	// (0x000184c1) bg_popup_heading_pane_cp2

0x5333,	// (0x000184d7) heading_preview_pane_g1

0x533b,	// (0x000184df) heading_preview_pane_t1_ParamLimits

0x533b,	// (0x000184df) heading_preview_pane_t1

0xc8d6,	// (0x0001fa7a) soft_indicator_pane_t1_ParamLimits

0xe4b8,	// (0x0002165c) scroll_pane_ParamLimits

0x16e4,	// (0x00014888) scroll_sc2_left_pane

0x16ed,	// (0x00014891) scroll_sc2_right_pane

0x170c,	// (0x000148b0) scroll_bg_pane_g1_ParamLimits

0x1721,	// (0x000148c5) scroll_bg_pane_g2_ParamLimits

0x1739,	// (0x000148dd) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0002285d) scroll_bg_pane_g_ParamLimits

0x170c,	// (0x000148b0) scroll_handle_pane_g1_ParamLimits

0x175b,	// (0x000148ff) scroll_handle_pane_g2_ParamLimits

0x1739,	// (0x000148dd) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00022864) scroll_handle_pane_g_ParamLimits

0xebcb,	// (0x00021d6f) popup_choice_list_window_ParamLimits

0xebcb,	// (0x00021d6f) popup_choice_list_window

0x2710,	// (0x000158b4) choice_list_pane

0x27cc,	// (0x00015970) cell_toolbar_pane_t1

0x27f4,	// (0x00015998) toolbar_button_pane_ParamLimits

0x3998,	// (0x00016b3c) ai_gene_pane_1_t2_ParamLimits

0x3998,	// (0x00016b3c) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x00022a87) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x00022a87) ai_gene_pane_1_t

0x5358,	// (0x000184fc) scroll_sc2_left_pane_g1

0x5358,	// (0x000184fc) scroll_sc2_right_pane_g1

0x2288,	// (0x0001542c) bg_popup_sub_pane_cp10

0x5362,	// (0x00018506) list_choice_list_pane

0x537b,	// (0x0001851f) list_single_choice_list_pane_ParamLimits

0x537b,	// (0x0001851f) list_single_choice_list_pane

0x5393,	// (0x00018537) list_single_choice_list_pane_g1

0x13e6,	// (0x0001458a) list_single_choice_list_pane_t1_ParamLimits

0x13e6,	// (0x0001458a) list_single_choice_list_pane_t1

0x539b,	// (0x0001853f) choice_list_pane_g1

0x53a3,	// (0x00018547) choice_list_pane_t1

0xc7f9,	// (0x0001f99d) input_focus_pane_cp11

0x15bd,	// (0x00014761) title_pane_stacon_g2_ParamLimits

0x15bd,	// (0x00014761) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00022843) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00022843) title_pane_stacon_g

0x1f59,	// (0x000150fd) cursor_press_pane

0x9a65,	// (0x0001cc09) popup_fep_hwr_window_ParamLimits

0x9a65,	// (0x0001cc09) popup_fep_hwr_window

0xec35,	// (0x00021dd9) popup_fep_vkb_window_ParamLimits

0xec35,	// (0x00021dd9) popup_fep_vkb_window

0x53b1,	// (0x00018555) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00022cb6) fep_vkb_side_pane_g_ParamLimits

0xf0dd,	// (0x00022281) fep_hwr_candidate_pane_ParamLimits

0xf0dd,	// (0x00022281) fep_hwr_candidate_pane

0xf107,	// (0x000222ab) fep_hwr_side_pane_ParamLimits

0xf107,	// (0x000222ab) fep_hwr_side_pane

0xf129,	// (0x000222cd) fep_hwr_top_pane_ParamLimits

0xf129,	// (0x000222cd) fep_hwr_top_pane

0xf141,	// (0x000222e5) fep_hwr_write_pane_ParamLimits

0xf141,	// (0x000222e5) fep_hwr_write_pane

0xfb12,	// (0x00022cb6) fep_vkb_side_pane_g

0x53b9,	// (0x0001855d) fep_hwr_top_pane_g1

0x53cb,	// (0x0001856f) fep_hwr_top_pane_g2

0xf17b,	// (0x0002231f) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x00022c92) fep_hwr_top_pane_g

0xf190,	// (0x00022334) fep_hwr_top_text_pane

0x18b0,	// (0x00014a54) fep_hwr_top_text_pane_g1

0x5401,	// (0x000185a5) fep_hwr_top_text_pane_t1

0xf21f,	// (0x000223c3) fep_hwr_candidate_pane_g1

0x564c,	// (0x000187f0) fep_vkb_keypad_pane_g3_ParamLimits

0x564c,	// (0x000187f0) fep_vkb_keypad_pane_g3

0x5678,	// (0x0001881c) fep_vkb_keypad_pane_g4_ParamLimits

0x5678,	// (0x0001881c) fep_vkb_keypad_pane_g4

0x56ef,	// (0x00018893) fep_vkb_bottom_pane_g2_ParamLimits

0x56ef,	// (0x00018893) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00022cbd) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00022cbd) fep_vkb_bottom_pane_g

0x5358,	// (0x000184fc) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00022cc7) cell_vkb_side_pane_g

0x577a,	// (0x0001891e) cell_vkb_side_pane_t1

0x5788,	// (0x0001892c) cell_vkb_side_pane_t1_copy1

0x5358,	// (0x000184fc) bg_fep_vkb_candidate_pane_g2

0x58cc,	// (0x00018a70) cell_vkb_candidate_pane_ParamLimits

0x540f,	// (0x000185b3) aid_size_cell_vkb_ParamLimits

0x540f,	// (0x000185b3) aid_size_cell_vkb

0x58cc,	// (0x00018a70) cell_vkb_candidate_pane

0xf246,	// (0x000223ea) bg_popup_fep_shadow_pane_g1

0xc362,	// (0x0001f506) fep_vkb_bottom_pane_ParamLimits

0xc362,	// (0x0001f506) fep_vkb_bottom_pane

0x54de,	// (0x00018682) fep_vkb_candidate_pane_ParamLimits

0x54de,	// (0x00018682) fep_vkb_candidate_pane

0xc38e,	// (0x0001f532) fep_vkb_keypad_pane_ParamLimits

0xc38e,	// (0x0001f532) fep_vkb_keypad_pane

0xc3b5,	// (0x0001f559) fep_vkb_side_pane_ParamLimits

0xc3b5,	// (0x0001f559) fep_vkb_side_pane

0xc3f1,	// (0x0001f595) fep_vkb_top_pane_ParamLimits

0xc3f1,	// (0x0001f595) fep_vkb_top_pane

0x55a5,	// (0x00018749) fep_vkb_top_pane_g1_ParamLimits

0x55a5,	// (0x00018749) fep_vkb_top_pane_g1

0x55b4,	// (0x00018758) fep_vkb_top_pane_g2_ParamLimits

0x55b4,	// (0x00018758) fep_vkb_top_pane_g2

0x55c3,	// (0x00018767) fep_vkb_top_pane_g3_ParamLimits

0x55c3,	// (0x00018767) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x00022cad) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x00022cad) fep_vkb_top_pane_g

0x55e1,	// (0x00018785) fep_vkb_top_text_pane_ParamLimits

0x55e1,	// (0x00018785) fep_vkb_top_text_pane

0xc42d,	// (0x0001f5d1) fep_vkb_side_pane_g1_ParamLimits

0xc42d,	// (0x0001f5d1) fep_vkb_side_pane_g1

0x563b,	// (0x000187df) grid_vkb_side_pane_ParamLimits

0x563b,	// (0x000187df) grid_vkb_side_pane

0xf24e,	// (0x000223f2) bg_popup_fep_shadow_pane_g2

0xf257,	// (0x000223fb) bg_popup_fep_shadow_pane_g3

0xf25f,	// (0x00022403) bg_popup_fep_shadow_pane_g4

0xf268,	// (0x0002240c) bg_popup_fep_shadow_pane_g5

0xf272,	// (0x00022416) bg_popup_fep_shadow_pane_g6

0xf27a,	// (0x0002241e) bg_popup_fep_shadow_pane_g7

0xe69f,	// (0x00021843) bg_popup_fep_shadow_pane_g8

0x569a,	// (0x0001883e) grid_vkb_keypad_number_pane_ParamLimits

0x569a,	// (0x0001883e) grid_vkb_keypad_number_pane

0x56ae,	// (0x00018852) grid_vkb_keypad_pane_ParamLimits

0x56ae,	// (0x00018852) grid_vkb_keypad_pane

0x56d4,	// (0x00018878) fep_vkb_bottom_pane_g1_ParamLimits

0x56d4,	// (0x00018878) fep_vkb_bottom_pane_g1

0x56fd,	// (0x000188a1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x56fd,	// (0x000188a1) grid_vkb_keypad_bottom_left_pane

0x5712,	// (0x000188b6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5712,	// (0x000188b6) grid_vkb_keypad_bottom_right_pane

0x5727,	// (0x000188cb) fep_vkb_top_text_pane_g1

0xc474,	// (0x0001f618) fep_vkb_top_text_pane_t1

0xc486,	// (0x0001f62a) cell_vkb_side_pane_ParamLimits

0xc486,	// (0x0001f62a) cell_vkb_side_pane

0x5358,	// (0x000184fc) cell_vkb_side_pane_g1

0x5796,	// (0x0001893a) cell_vkb_keypad_pane_ParamLimits

0x5796,	// (0x0001893a) cell_vkb_keypad_pane

0x5823,	// (0x000189c7) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00022cda) bg_popup_fep_shadow_pane_g

0xf28c,	// (0x00022430) cell_hwr_side_pane_g1

0xf28c,	// (0x00022430) cell_hwr_side_pane_g2

0x582d,	// (0x000189d1) cell_vkb_keypad_pane_t1

0xc49c,	// (0x0001f640) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc49c,	// (0x0001f640) cell_vkb_keypad_bottom_left_pane

0xc4b1,	// (0x0001f655) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4b1,	// (0x0001f655) cell_vkb_keypad_bottom_right_pane

0x5358,	// (0x000184fc) cell_vkb_keypad_bottom_left_pane_g1

0x5358,	// (0x000184fc) cell_vkb_keypad_bottom_right_pane_g1

0x5891,	// (0x00018a35) cell_vkb_keypad_number_pane_ParamLimits

0x5891,	// (0x00018a35) cell_vkb_keypad_number_pane

0x58b0,	// (0x00018a54) cell_vkb_keypad_number_pane_g1

0x58ba,	// (0x00018a5e) cell_vkb_keypad_number_pane_g2

0x58c3,	// (0x00018a67) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00022ccc) cell_vkb_keypad_number_pane_g

0x582d,	// (0x000189d1) cell_vkb_keypad_number_pane_t1

0x58ed,	// (0x00018a91) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00022ced) cell_hwr_side_pane_g

0x5906,	// (0x00018aaa) cell_hwr_side_pane_t1

0xf296,	// (0x0002243a) cell_hwr_side_pane_t1_copy1

0xf2a4,	// (0x00022448) cell_hwr_candidate_pane_g1

0xf2d3,	// (0x00022477) cell_hwr_candidate_pane_t1

0x5358,	// (0x000184fc) cell_vkb_candidate_pane_g2

0x594a,	// (0x00018aee) cell_vkb_candidate_pane_t1

0xeee0,	// (0x00022084) bg_popup_fep_shadow_pane_ParamLimits

0xeee0,	// (0x00022084) bg_popup_fep_shadow_pane

0xf15b,	// (0x000222ff) bg_fep_hwr_top_pane_g4

0x53dd,	// (0x00018581) bg_hwr_side_pane_g1_ParamLimits

0x53dd,	// (0x00018581) bg_hwr_side_pane_g1

0xa2c5,	// (0x0001d469) cell_hwr_side_pane_ParamLimits

0xa2c5,	// (0x0001d469) cell_hwr_side_pane

0xf1a5,	// (0x00022349) fep_hwr_write_pane_g1_ParamLimits

0xf1a5,	// (0x00022349) fep_hwr_write_pane_g1

0xf1b2,	// (0x00022356) fep_hwr_write_pane_g2_ParamLimits

0xf1b2,	// (0x00022356) fep_hwr_write_pane_g2

0xf1bf,	// (0x00022363) fep_hwr_write_pane_g3_ParamLimits

0xf1bf,	// (0x00022363) fep_hwr_write_pane_g3

0xa2e5,	// (0x0001d489) fep_hwr_write_pane_g4_ParamLimits

0xa2e5,	// (0x0001d489) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x00022c99) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x00022c99) fep_hwr_write_pane_g

0xf15b,	// (0x000222ff) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf15b,	// (0x000222ff) bg_fep_hwr_candidate_pane_g2

0xf1cd,	// (0x00022371) cell_hwr_candidate_pane_ParamLimits

0xf1cd,	// (0x00022371) cell_hwr_candidate_pane

0xf21f,	// (0x000223c3) fep_hwr_candidate_pane_g1_ParamLimits

0x543d,	// (0x000185e1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x543d,	// (0x000185e1) bg_popup_fep_shadow_pane_cp2

0x55d3,	// (0x00018777) fep_vkb_top_pane_g4_ParamLimits

0x55d3,	// (0x00018777) fep_vkb_top_pane_g4

0x5619,	// (0x000187bd) fep_vkb_side_pane_g2_ParamLimits

0x5619,	// (0x000187bd) fep_vkb_side_pane_g2

0xb027,	// (0x0001e1cb) list_setting_pane_t4_ParamLimits

0xb027,	// (0x0001e1cb) list_setting_pane_t4

0xb0a3,	// (0x0001e247) list_setting_number_pane_t5_ParamLimits

0xb0a3,	// (0x0001e247) list_setting_number_pane_t5

0x18e7,	// (0x00014a8b) list_double_heading_pane_cp2_ParamLimits

0x18e7,	// (0x00014a8b) list_double_heading_pane_cp2

0x5958,	// (0x00018afc) list_double_heading_pane_g1_cp2_ParamLimits

0x5958,	// (0x00018afc) list_double_heading_pane_g1_cp2

0x5964,	// (0x00018b08) list_double_heading_pane_g2_cp2_ParamLimits

0x5964,	// (0x00018b08) list_double_heading_pane_g2_cp2

0x5978,	// (0x00018b1c) list_double_heading_pane_t1_cp2_ParamLimits

0x5978,	// (0x00018b1c) list_double_heading_pane_t1_cp2

0x598e,	// (0x00018b32) list_double_heading_pane_t2_cp2_ParamLimits

0x598e,	// (0x00018b32) list_double_heading_pane_t2_cp2

0xc7f1,	// (0x0001f995) aid_value_unit2

0xdfdf,	// (0x00021183) popup_preview_fixed_window

0xc9b6,	// (0x0001fb5a) bg_popup_preview_window_pane_cp02

0x59a0,	// (0x00018b44) list_preview_fixed_pane

0x59e6,	// (0x00018b8a) list_empty_pane_fp_ParamLimits

0x59e6,	// (0x00018b8a) list_empty_pane_fp

0x59e6,	// (0x00018b8a) list_single_cale_day_pane_fp_ParamLimits

0x59e6,	// (0x00018b8a) list_single_cale_day_pane_fp

0x59e6,	// (0x00018b8a) list_single_graphic_heading_pane_fp_ParamLimits

0x59e6,	// (0x00018b8a) list_single_graphic_heading_pane_fp

0x59e6,	// (0x00018b8a) list_single_graphic_pane_fp_ParamLimits

0x59e6,	// (0x00018b8a) list_single_graphic_pane_fp

0x59e6,	// (0x00018b8a) list_single_heading_pane_fp_ParamLimits

0x59e6,	// (0x00018b8a) list_single_heading_pane_fp

0x59e6,	// (0x00018b8a) list_single_pane_fp_ParamLimits

0x59e6,	// (0x00018b8a) list_single_pane_fp

0x59ff,	// (0x00018ba3) list_single_pane_fp_g1_ParamLimits

0x59ff,	// (0x00018ba3) list_single_pane_fp_g1

0x5958,	// (0x00018afc) list_single_pane_fp_g2_ParamLimits

0x5958,	// (0x00018afc) list_single_pane_fp_g2

0x5964,	// (0x00018b08) list_single_pane_fp_g3_ParamLimits

0x5964,	// (0x00018b08) list_single_pane_fp_g3

0x5a0b,	// (0x00018baf) list_single_pane_fp_g4_ParamLimits

0x5a0b,	// (0x00018baf) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x00022d00) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x00022d00) list_single_pane_fp_g

0x5a17,	// (0x00018bbb) list_single_pane_fp_t1_ParamLimits

0x5a17,	// (0x00018bbb) list_single_pane_fp_t1

0x5a2e,	// (0x00018bd2) list_single_graphic_pane_fp_g1_ParamLimits

0x5a2e,	// (0x00018bd2) list_single_graphic_pane_fp_g1

0x59ff,	// (0x00018ba3) list_single_graphic_pane_fp_g2_ParamLimits

0x59ff,	// (0x00018ba3) list_single_graphic_pane_fp_g2

0x5958,	// (0x00018afc) list_single_graphic_pane_fp_g3_ParamLimits

0x5958,	// (0x00018afc) list_single_graphic_pane_fp_g3

0x5964,	// (0x00018b08) list_single_graphic_pane_fp_g4_ParamLimits

0x5964,	// (0x00018b08) list_single_graphic_pane_fp_g4

0x5a0b,	// (0x00018baf) list_single_graphic_pane_fp_g5_ParamLimits

0x5a0b,	// (0x00018baf) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x00022d09) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x00022d09) list_single_graphic_pane_fp_g

0x5a3a,	// (0x00018bde) list_single_graphic_pane_fp_t1_ParamLimits

0x5a3a,	// (0x00018bde) list_single_graphic_pane_fp_t1

0x5a2e,	// (0x00018bd2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5a2e,	// (0x00018bd2) list_single_graphic_heading_pane_fp_g1

0x59ff,	// (0x00018ba3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x59ff,	// (0x00018ba3) list_single_graphic_heading_pane_fp_g2

0x5958,	// (0x00018afc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5958,	// (0x00018afc) list_single_graphic_heading_pane_fp_g3

0x5964,	// (0x00018b08) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5964,	// (0x00018b08) list_single_graphic_heading_pane_fp_g4

0x5a0b,	// (0x00018baf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5a0b,	// (0x00018baf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00022d09) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00022d09) list_single_graphic_heading_pane_fp_g

0x5a50,	// (0x00018bf4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a50,	// (0x00018bf4) list_single_graphic_heading_pane_fp_t1

0x5a66,	// (0x00018c0a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a66,	// (0x00018c0a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x00022d14) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x00022d14) list_single_graphic_heading_pane_fp_t

0x5a78,	// (0x00018c1c) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a78,	// (0x00018c1c) list_single_cale_day_pane_fp_g1

0x5ab0,	// (0x00018c54) list_single_cale_day_pane_fp_g2_ParamLimits

0x5ab0,	// (0x00018c54) list_single_cale_day_pane_fp_g2

0x5abc,	// (0x00018c60) list_single_cale_day_pane_fp_g3_ParamLimits

0x5abc,	// (0x00018c60) list_single_cale_day_pane_fp_g3

0x5b26,	// (0x00018cca) list_single_cale_day_pane_fp_g4_ParamLimits

0x5b26,	// (0x00018cca) list_single_cale_day_pane_fp_g4

0x5b4a,	// (0x00018cee) list_single_cale_day_pane_fp_g5_ParamLimits

0x5b4a,	// (0x00018cee) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x00022d19) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x00022d19) list_single_cale_day_pane_fp_g

0x5b6e,	// (0x00018d12) list_single_cale_day_pane_fp_t1_ParamLimits

0x5b6e,	// (0x00018d12) list_single_cale_day_pane_fp_t1

0x5b94,	// (0x00018d38) list_single_cale_day_pane_fp_t2_ParamLimits

0x5b94,	// (0x00018d38) list_single_cale_day_pane_fp_t2

0x5bad,	// (0x00018d51) list_single_cale_day_pane_fp_t3_ParamLimits

0x5bad,	// (0x00018d51) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x00022d24) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x00022d24) list_single_cale_day_pane_fp_t

0x59ff,	// (0x00018ba3) list_empty_pane_fp_g1_ParamLimits

0x59ff,	// (0x00018ba3) list_empty_pane_fp_g1

0x5bc6,	// (0x00018d6a) list_empty_pane_fp_t1

0x5bd4,	// (0x00018d78) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x00022d2b) list_empty_pane_fp_t

0x59ff,	// (0x00018ba3) list_single_heading_pane_fp_g1_ParamLimits

0x59ff,	// (0x00018ba3) list_single_heading_pane_fp_g1

0x5958,	// (0x00018afc) list_single_heading_pane_fp_g2_ParamLimits

0x5958,	// (0x00018afc) list_single_heading_pane_fp_g2

0x5964,	// (0x00018b08) list_single_heading_pane_fp_g3_ParamLimits

0x5964,	// (0x00018b08) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x00022d30) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x00022d30) list_single_heading_pane_fp_g

0x5be2,	// (0x00018d86) list_single_heading_pane_fp_t1_ParamLimits

0x5be2,	// (0x00018d86) list_single_heading_pane_fp_t1

0x5bf4,	// (0x00018d98) list_single_heading_pane_fp_t2_ParamLimits

0x5bf4,	// (0x00018d98) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x00022d37) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x00022d37) list_single_heading_pane_fp_t

0x1454,	// (0x000145f8) aid_size_cell_fast

0xc999,	// (0x0001fb3d) soft_indicator_pane_cp1_t1

0x1491,	// (0x00014635) cell_app_pane_cp2_ParamLimits

0x1491,	// (0x00014635) cell_app_pane_cp2

0xf0c6,	// (0x0002226a) fep_hwr_candidate_drop_down_list_pane

0xf239,	// (0x000223dd) fep_hwr_candidate_pane_g3_ParamLimits

0xf239,	// (0x000223dd) fep_hwr_candidate_pane_g3

0xc9fc,	// (0x0001fba0) fep_hwr_candidate_pane_g4_ParamLimits

0xc9fc,	// (0x0001fba0) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00022ca6) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00022ca6) fep_hwr_candidate_pane_g

0x54cd,	// (0x00018671) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x54cd,	// (0x00018671) fep_vkb_candidate_drop_down_list_pane

0x58f5,	// (0x00018a99) fep_vkb_candidate_pane_g3

0x58fd,	// (0x00018aa1) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00022cd3) fep_vkb_candidate_pane_g

0xf2a4,	// (0x00022448) cell_hwr_candidate_pane_g1_ParamLimits

0xf2b2,	// (0x00022456) cell_hwr_candidate_pane_g3_ParamLimits

0xf2b2,	// (0x00022456) cell_hwr_candidate_pane_g3

0x78fd,	// (0x0001aaa1) cell_hwr_candidate_pane_g4_ParamLimits

0x78fd,	// (0x0001aaa1) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x00022cf2) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x00022cf2) cell_hwr_candidate_pane_g

0x5914,	// (0x00018ab8) cell_vkb_candidate_pane_g3_ParamLimits

0x5914,	// (0x00018ab8) cell_vkb_candidate_pane_g3

0x592f,	// (0x00018ad3) cell_vkb_candidate_pane_g4_ParamLimits

0x592f,	// (0x00018ad3) cell_vkb_candidate_pane_g4

0x5c0a,	// (0x00018dae) cell_app_pane_cp2_g1_ParamLimits

0x5c0a,	// (0x00018dae) cell_app_pane_cp2_g1

0x5c28,	// (0x00018dcc) cell_app_pane_cp2_g2_ParamLimits

0x5c28,	// (0x00018dcc) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x00022d3c) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x00022d3c) cell_app_pane_cp2_g

0x5c34,	// (0x00018dd8) cell_app_pane_cp2_t1_ParamLimits

0x5c34,	// (0x00018dd8) cell_app_pane_cp2_t1

0xe5cc,	// (0x00021770) grid_highlight_pane_cp1_ParamLimits

0xe5cc,	// (0x00021770) grid_highlight_pane_cp1

0xf2f1,	// (0x00022495) cell_hwr_candidate_pane_cp1_ParamLimits

0xf2f1,	// (0x00022495) cell_hwr_candidate_pane_cp1

0xf2a4,	// (0x00022448) fep_hwr_candidate_drop_down_list_pane_g1

0xf315,	// (0x000224b9) fep_hwr_candidate_drop_down_list_pane_g2

0xf322,	// (0x000224c6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x00022d41) fep_hwr_candidate_drop_down_list_pane_g

0xf32f,	// (0x000224d3) fep_hwr_candidate_drop_down_list_scroll_pane

0xf338,	// (0x000224dc) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf338,	// (0x000224dc) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xf345,	// (0x000224e9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf345,	// (0x000224e9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xf352,	// (0x000224f6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf352,	// (0x000224f6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf35f,	// (0x00022503) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf35f,	// (0x00022503) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf37a,	// (0x0002251e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf37a,	// (0x0002251e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xf395,	// (0x00022539) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf395,	// (0x00022539) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf3b0,	// (0x00022554) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf3b0,	// (0x00022554) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf3cb,	// (0x0002256f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf3cb,	// (0x0002256f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x00022d48) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x00022d48) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5c46,	// (0x00018dea) cell_vkb_candidate_pane_cp1_ParamLimits

0x5c46,	// (0x00018dea) cell_vkb_candidate_pane_cp1

0x55d3,	// (0x00018777) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x55d3,	// (0x00018777) fep_vkb_candidate_drop_down_list_pane_g1

0x5c6c,	// (0x00018e10) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5c6c,	// (0x00018e10) fep_vkb_candidate_drop_down_list_pane_g2

0x5c79,	// (0x00018e1d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5c79,	// (0x00018e1d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x00022d59) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x00022d59) fep_vkb_candidate_drop_down_list_pane_g

0x5c86,	// (0x00018e2a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5c86,	// (0x00018e2a) fep_vkb_candidate_drop_down_list_scroll_pane

0x5c93,	// (0x00018e37) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5c93,	// (0x00018e37) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5ca0,	// (0x00018e44) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ca0,	// (0x00018e44) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5cac,	// (0x00018e50) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5cac,	// (0x00018e50) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5ae4,	// (0x00018c88) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5ae4,	// (0x00018c88) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5b05,	// (0x00018ca9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5b05,	// (0x00018ca9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5cb8,	// (0x00018e5c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5cb8,	// (0x00018e5c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5cd9,	// (0x00018e7d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5cd9,	// (0x00018e7d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5cfa,	// (0x00018e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5cfa,	// (0x00018e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x00022d60) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x00022d60) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa92c,	// (0x0001dad0) title_pane_g1_ParamLimits

0xa93f,	// (0x0001dae3) title_pane_g2_ParamLimits

0xf529,	// (0x000226cd) title_pane_g_ParamLimits

0x18a0,	// (0x00014a44) aid_call2_pane

0x18a8,	// (0x00014a4c) aid_call_pane

0x18b0,	// (0x00014a54) popup_clock_analogue_window_g1

0x18b0,	// (0x00014a54) popup_clock_analogue_window_g2

0xe8cb,	// (0x00021a6f) popup_clock_analogue_window_g3

0xe8d4,	// (0x00021a78) popup_clock_analogue_window_g4

0xc803,	// (0x0001f9a7) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00022872) popup_clock_analogue_window_g

0xe8dc,	// (0x00021a80) popup_clock_analogue_window_t1

0xe8ea,	// (0x00021a8e) clock_digital_number_pane_ParamLimits

0xe8ea,	// (0x00021a8e) clock_digital_number_pane

0xe8f6,	// (0x00021a9a) clock_digital_number_pane_cp02_ParamLimits

0xe8f6,	// (0x00021a9a) clock_digital_number_pane_cp02

0xe902,	// (0x00021aa6) clock_digital_number_pane_cp03_ParamLimits

0xe902,	// (0x00021aa6) clock_digital_number_pane_cp03

0xe90e,	// (0x00021ab2) clock_digital_number_pane_cp04_ParamLimits

0xe90e,	// (0x00021ab2) clock_digital_number_pane_cp04

0xe91a,	// (0x00021abe) clock_digital_separator_pane_ParamLimits

0xe91a,	// (0x00021abe) clock_digital_separator_pane

0xe926,	// (0x00021aca) popup_clock_digital_window_t1_ParamLimits

0xe926,	// (0x00021aca) popup_clock_digital_window_t1

0xc803,	// (0x0001f9a7) clock_digital_number_pane_g1

0xc803,	// (0x0001f9a7) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0002287d) clock_digital_number_pane_g

0xc803,	// (0x0001f9a7) clock_digital_separator_pane_g1

0xc803,	// (0x0001f9a7) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0002287d) clock_digital_separator_pane_g

0xb73e,	// (0x0001e8e2) aid_fill_nsta_ParamLimits

0xb876,	// (0x0001ea1a) indicator_nsta_pane_ParamLimits

0x25a9,	// (0x0001574d) popup_clock_analogue_window

0x25a9,	// (0x0001574d) popup_clock_digital_window

0xc161,	// (0x0001f305) grid_indicator_nsta_pane_ParamLimits

0x4d5a,	// (0x00017efe) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00022c26) clock_nsta_pane_t

0xe898,	// (0x00021a3c) aid_size_max_handle

0x981b,	// (0x0001c9bf) aid_size_min_handle

0x1f59,	// (0x000150fd) editor_scroll_pane

0x5d15,	// (0x00018eb9) ex_editor_pane

0x13c1,	// (0x00014565) scroll_pane_cp13

0xe4e4,	// (0x00021688) scroll_pane_cp14

0x18df,	// (0x00014a83) scroll_pane_cp36

0xb40e,	// (0x0001e5b2) list_single_graphic_hl_pane_cp2_ParamLimits

0xb40e,	// (0x0001e5b2) list_single_graphic_hl_pane_cp2

0xbfd9,	// (0x0001f17d) list_single_graphic_hl_pane_ParamLimits

0xbfd9,	// (0x0001f17d) list_single_graphic_hl_pane

0x5d1d,	// (0x00018ec1) aid_size_min_hl_cp1

0x5d26,	// (0x00018eca) list_highlight_pane_cp34_ParamLimits

0x5d26,	// (0x00018eca) list_highlight_pane_cp34

0x5d37,	// (0x00018edb) list_single_graphic_hl_pane_g1_ParamLimits

0x5d37,	// (0x00018edb) list_single_graphic_hl_pane_g1

0xe82b,	// (0x000219cf) list_single_graphic_hl_pane_g2_ParamLimits

0xe82b,	// (0x000219cf) list_single_graphic_hl_pane_g2

0xe82b,	// (0x000219cf) list_single_graphic_hl_pane_g3_ParamLimits

0xe82b,	// (0x000219cf) list_single_graphic_hl_pane_g3

0x66dc,	// (0x00019880) list_single_graphic_hl_pane_g4_ParamLimits

0x66dc,	// (0x00019880) list_single_graphic_hl_pane_g4

0xc4cc,	// (0x0001f670) list_single_graphic_hl_pane_g5_ParamLimits

0xc4cc,	// (0x0001f670) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x00022d71) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x00022d71) list_single_graphic_hl_pane_g

0xc4e0,	// (0x0001f684) list_single_graphic_hl_pane_t1_ParamLimits

0xc4e0,	// (0x0001f684) list_single_graphic_hl_pane_t1

0x5d7a,	// (0x00018f1e) aid_size_min_hl_cp2

0x5d83,	// (0x00018f27) list_highlight_pane_cp34_cp2_ParamLimits

0x5d83,	// (0x00018f27) list_highlight_pane_cp34_cp2

0x5d37,	// (0x00018edb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5d37,	// (0x00018edb) list_single_graphic_hl_pane_g1_cp2

0x5d90,	// (0x00018f34) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5d90,	// (0x00018f34) list_single_graphic_hl_pane_g2_cp2

0x5d9c,	// (0x00018f40) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5d9c,	// (0x00018f40) list_single_graphic_hl_pane_g3_cp2

0x2776,	// (0x0001591a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2776,	// (0x0001591a) list_single_graphic_hl_pane_g4_cp2

0x5daa,	// (0x00018f4e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5daa,	// (0x00018f4e) list_single_graphic_hl_pane_g5_cp2

0x9876,	// (0x0001ca1a) control_pane_g4_ParamLimits

0x9876,	// (0x0001ca1a) control_pane_g4

0x2288,	// (0x0001542c) bg_popup_sub_pane_cp10_ParamLimits

0x5362,	// (0x00018506) list_choice_list_pane_ParamLimits

0x5371,	// (0x00018515) scroll_pane_cp23

0xc9b6,	// (0x0001fb5a) bg_popup_preview_window_pane_cp02_ParamLimits

0x59a0,	// (0x00018b44) list_preview_fixed_pane_ParamLimits

0x59b6,	// (0x00018b5a) list_preview_fixed_pane_cp_ParamLimits

0x59b6,	// (0x00018b5a) list_preview_fixed_pane_cp

0x59c2,	// (0x00018b66) popup_preview_fixed_window_g1_ParamLimits

0x59c2,	// (0x00018b66) popup_preview_fixed_window_g1

0x59ce,	// (0x00018b72) popup_preview_fixed_window_g2_ParamLimits

0x59ce,	// (0x00018b72) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x00022cf9) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x00022cf9) popup_preview_fixed_window_g

0xe7fe,	// (0x000219a2) aid_navi_side_left_pane_ParamLimits

0xe813,	// (0x000219b7) aid_navi_side_right_pane_ParamLimits

0xe837,	// (0x000219db) navi_icon_pane_stacon_ParamLimits

0xe84b,	// (0x000219ef) navi_navi_pane_stacon_ParamLimits

0xe837,	// (0x000219db) navi_text_pane_stacon_ParamLimits

0xded0,	// (0x00021074) main_text_info_pane

0x5dd4,	// (0x00018f78) listscroll_text_info_pane

0x5ddc,	// (0x00018f80) list_text_info_pane_ParamLimits

0x5ddc,	// (0x00018f80) list_text_info_pane

0x5deb,	// (0x00018f8f) scroll_pane_cp24_ParamLimits

0x5deb,	// (0x00018f8f) scroll_pane_cp24

0xc4f6,	// (0x0001f69a) list_text_info_pane_t1_ParamLimits

0xc4f6,	// (0x0001f69a) list_text_info_pane_t1

0x99c9,	// (0x0001cb6d) popup_fast_swap2_window_ParamLimits

0x99c9,	// (0x0001cb6d) popup_fast_swap2_window

0x5e2e,	// (0x00018fd2) aid_size_cell_fast2

0xc7f9,	// (0x0001f99d) bg_popup_window_pane_cp17

0x2d15,	// (0x00015eb9) heading_pane_cp2

0x2d1d,	// (0x00015ec1) listscroll_fast2_pane

0x5e38,	// (0x00018fdc) grid_fast2_pane

0x5e42,	// (0x00018fe6) listscroll_fast2_pane_g1

0x5e4c,	// (0x00018ff0) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x00022d7c) listscroll_fast2_pane_g

0x13c1,	// (0x00014565) scroll_pane_cp26

0x5e56,	// (0x00018ffa) cell_fast2_pane_ParamLimits

0x5e56,	// (0x00018ffa) cell_fast2_pane

0x5e6d,	// (0x00019011) cell_fast2_pane_g1

0x5e76,	// (0x0001901a) cell_fast2_pane_g2

0x5e7f,	// (0x00019023) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x00022d81) cell_fast2_pane_g

0xe2ab,	// (0x0002144f) grid_highlight_pane_cp9

0xebbd,	// (0x00021d61) main_eswt_pane_ParamLimits

0xebbd,	// (0x00021d61) main_eswt_pane

0x5e00,	// (0x00018fa4) list_single_text_info_pane

0x5e87,	// (0x0001902b) eswt_ctrl_button_pane

0x5e87,	// (0x0001902b) eswt_ctrl_canvas_pane

0x5e8f,	// (0x00019033) eswt_ctrl_combo_pane

0x5e87,	// (0x0001902b) eswt_ctrl_default_pane

0x5e87,	// (0x0001902b) eswt_ctrl_label_pane

0x5e97,	// (0x0001903b) eswt_ctrl_wait_pane

0x5e9f,	// (0x00019043) eswt_shell_pane

0xc7f9,	// (0x0001f99d) listscroll_eswt_app_pane

0x5ebf,	// (0x00019063) popup_eswt_tasktip_window_ParamLimits

0x5ebf,	// (0x00019063) popup_eswt_tasktip_window

0x2924,	// (0x00015ac8) bg_popup_window_pane_cp18

0x5ed0,	// (0x00019074) eswt_control_pane_g1_ParamLimits

0x5ed0,	// (0x00019074) eswt_control_pane_g1

0x5edd,	// (0x00019081) eswt_control_pane_g2_ParamLimits

0x5edd,	// (0x00019081) eswt_control_pane_g2

0x5eea,	// (0x0001908e) eswt_control_pane_g3_ParamLimits

0x5eea,	// (0x0001908e) eswt_control_pane_g3

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_ParamLimits

0x5ef7,	// (0x0001909b) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x00022d88) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x00022d88) eswt_control_pane_g

0xe5cc,	// (0x00021770) bg_button_pane_ParamLimits

0xe5cc,	// (0x00021770) bg_button_pane

0xe2c0,	// (0x00021464) common_borders_pane_copy2_ParamLimits

0xe2c0,	// (0x00021464) common_borders_pane_copy2

0x5f04,	// (0x000190a8) control_button_pane_g1_ParamLimits

0x5f04,	// (0x000190a8) control_button_pane_g1

0x5f10,	// (0x000190b4) control_button_pane_g2_ParamLimits

0x5f10,	// (0x000190b4) control_button_pane_g2

0x5f1c,	// (0x000190c0) control_button_pane_g3_ParamLimits

0x5f1c,	// (0x000190c0) control_button_pane_g3

0x0002,

0xfbed,	// (0x00022d91) control_button_pane_g_ParamLimits

0xfbed,	// (0x00022d91) control_button_pane_g

0x5f30,	// (0x000190d4) control_button_pane_t1

0x5f3e,	// (0x000190e2) control_button_pane_t2

0x0001,

0xfbf4,	// (0x00022d98) control_button_pane_t

0x2800,	// (0x000159a4) bg_button_pane_g1

0x2810,	// (0x000159b4) bg_button_pane_g2

0x2808,	// (0x000159ac) bg_button_pane_g3

0x2820,	// (0x000159c4) bg_button_pane_g4

0x2818,	// (0x000159bc) bg_button_pane_g5

0x2828,	// (0x000159cc) bg_button_pane_g6

0x2830,	// (0x000159d4) bg_button_pane_g7

0x2840,	// (0x000159e4) bg_button_pane_g8

0x2838,	// (0x000159dc) bg_button_pane_g9

0x0008,

0xf837,	// (0x000229db) bg_button_pane_g

0x531d,	// (0x000184c1) common_borders_pane_ParamLimits

0x531d,	// (0x000184c1) common_borders_pane

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy1_ParamLimits

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy1

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy1_ParamLimits

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy1

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy1_ParamLimits

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy1

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy1_ParamLimits

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy1

0x5358,	// (0x000184fc) bg_eswt_ctrl_canvas_pane_g1

0x531d,	// (0x000184c1) common_borders_pane_cp2_ParamLimits

0x531d,	// (0x000184c1) common_borders_pane_cp2

0x531d,	// (0x000184c1) common_borders_pane_cp3_ParamLimits

0x531d,	// (0x000184c1) common_borders_pane_cp3

0x5f4c,	// (0x000190f0) separator_horizontal_pane

0x5f54,	// (0x000190f8) separator_vertical_pane

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy2_ParamLimits

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy2

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy2_ParamLimits

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy2

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy2_ParamLimits

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy2

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy2_ParamLimits

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy2

0xc7f9,	// (0x0001f99d) common_borders_pane_cp4

0x5f5d,	// (0x00019101) separator_horizontal_pane_g1

0x5f66,	// (0x0001910a) separator_horizontal_pane_g2

0x5f6f,	// (0x00019113) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x00022d9d) separator_horizontal_pane_g

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy3_ParamLimits

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy3

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy3_ParamLimits

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy3

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy3_ParamLimits

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy3

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy3_ParamLimits

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy3

0xc7f9,	// (0x0001f99d) common_borders_pane_cp5

0x5f78,	// (0x0001911c) separator_vertical_pane_g1

0x5f81,	// (0x00019125) separator_vertical_pane_g2

0x5f8a,	// (0x0001912e) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x00022da4) separator_vertical_pane_g

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy4_ParamLimits

0x5ed0,	// (0x00019074) eswt_control_pane_g1_copy4

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy4_ParamLimits

0x5edd,	// (0x00019081) eswt_control_pane_g2_copy4

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy4_ParamLimits

0x5eea,	// (0x0001908e) eswt_control_pane_g3_copy4

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy4_ParamLimits

0x5ef7,	// (0x0001909b) eswt_control_pane_g4_copy4

0xc518,	// (0x0001f6bc) eswt_ctrl_combo_button_pane

0xc520,	// (0x0001f6c4) eswt_ctrl_input_pane

0xc528,	// (0x0001f6cc) popup_choice_list_window_cp70

0xc530,	// (0x0001f6d4) eswt_ctrl_input_pane_t1

0xc7f9,	// (0x0001f99d) input_focus_pane_cp70

0x531d,	// (0x000184c1) bg_button_pane_cp70_ParamLimits

0x531d,	// (0x000184c1) bg_button_pane_cp70

0xc53e,	// (0x0001f6e2) eswt_ctrl_combo_button_pane_g1

0x5fc1,	// (0x00019165) wait_bar_pane_cp70

0x2924,	// (0x00015ac8) bg_popup_window_pane_cp70_ParamLimits

0x2924,	// (0x00015ac8) bg_popup_window_pane_cp70

0x5fc9,	// (0x0001916d) popup_eswt_tasktip_window_t1

0x5fdf,	// (0x00019183) wait_bar_pane_cp71_ParamLimits

0x5fdf,	// (0x00019183) wait_bar_pane_cp71

0x5feb,	// (0x0001918f) grid_eswt_app_pane

0x16e4,	// (0x00014888) scroll_pane_cp70

0xc546,	// (0x0001f6ea) cell_eswt_app_pane_ParamLimits

0xc546,	// (0x0001f6ea) cell_eswt_app_pane

0xc578,	// (0x0001f71c) cell_eswt_app_pane_g1_ParamLimits

0xc578,	// (0x0001f71c) cell_eswt_app_pane_g1

0xc5a7,	// (0x0001f74b) cell_eswt_app_pane_g2_ParamLimits

0xc5a7,	// (0x0001f74b) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x00022dab) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x00022dab) cell_eswt_app_pane_g

0xc5d0,	// (0x0001f774) cell_eswt_app_pane_t1_ParamLimits

0xc5d0,	// (0x0001f774) cell_eswt_app_pane_t1

0x60b0,	// (0x00019254) grid_highlight_pane_cp70_ParamLimits

0x60b0,	// (0x00019254) grid_highlight_pane_cp70

0x1e2a,	// (0x00014fce) set_content_pane_g1

0xb6f3,	// (0x0001e897) status_small_volume_pane

0xf3e6,	// (0x0002258a) status_small_volume_pane_g1

0xf3ee,	// (0x00022592) volume_small2_pane

0xf3f7,	// (0x0002259b) volume_small2_pane_g1

0xf400,	// (0x000225a4) volume_small2_pane_g2

0xf409,	// (0x000225ad) volume_small2_pane_g3

0xf412,	// (0x000225b6) volume_small2_pane_g4

0xf41b,	// (0x000225bf) volume_small2_pane_g5

0xf424,	// (0x000225c8) volume_small2_pane_g6

0xf42d,	// (0x000225d1) volume_small2_pane_g7

0xf436,	// (0x000225da) volume_small2_pane_g8

0xf43f,	// (0x000225e3) volume_small2_pane_g9

0xf448,	// (0x000225ec) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x00022db0) volume_small2_pane_g

0x5727,	// (0x000188cb) fep_vkb_top_text_pane_g1_ParamLimits

0xc474,	// (0x0001f618) fep_vkb_top_text_pane_t1_ParamLimits

0x59da,	// (0x00018b7e) popup_preview_fixed_window_g3_ParamLimits

0x59da,	// (0x00018b7e) popup_preview_fixed_window_g3

0xa067,	// (0x0001d20b) popup_toolbar_trans_pane

0xbdf8,	// (0x0001ef9c) aid_height_set_list_ParamLimits

0x3ce4,	// (0x00016e88) aid_size_parent_ParamLimits

0x2288,	// (0x0001542c) list_highlight_pane_cp2_ParamLimits

0x1e2a,	// (0x00014fce) set_content_pane_g1_ParamLimits

0xbfed,	// (0x0001f191) list_single_image_pane_ParamLimits

0xbfed,	// (0x0001f191) list_single_image_pane

0xc602,	// (0x0001f7a6) aid_size_cell_image_ParamLimits

0xc602,	// (0x0001f7a6) aid_size_cell_image

0xc60f,	// (0x0001f7b3) grid_single_image_pane_ParamLimits

0xc60f,	// (0x0001f7b3) grid_single_image_pane

0xe5f2,	// (0x00021796) list_single_image_pane_g1_ParamLimits

0xe5f2,	// (0x00021796) list_single_image_pane_g1

0xe5fe,	// (0x000217a2) list_single_image_pane_g2_ParamLimits

0xe5fe,	// (0x000217a2) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x00022dc5) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x00022dc5) list_single_image_pane_g

0x60d7,	// (0x0001927b) list_single_image_pane_t1_ParamLimits

0x60d7,	// (0x0001927b) list_single_image_pane_t1

0xc61d,	// (0x0001f7c1) cell_image_list_pane_ParamLimits

0xc61d,	// (0x0001f7c1) cell_image_list_pane

0xc633,	// (0x0001f7d7) cell_image_list_pane_g1

0xc63c,	// (0x0001f7e0) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x00022dca) cell_image_list_pane_g

0x6117,	// (0x000192bb) aid_size_cell_tb_trans_pane

0xe5cc,	// (0x00021770) bg_tb_trans_pane

0x6129,	// (0x000192cd) grid_tb_trans_pane

0x2800,	// (0x000159a4) bg_tb_trans_pane_g1

0x2810,	// (0x000159b4) bg_tb_trans_pane_g2

0x2808,	// (0x000159ac) bg_tb_trans_pane_g3

0x2820,	// (0x000159c4) bg_tb_trans_pane_g4

0x2818,	// (0x000159bc) bg_tb_trans_pane_g5

0x2840,	// (0x000159e4) bg_tb_trans_pane_g6

0x2838,	// (0x000159dc) bg_tb_trans_pane_g7

0x2828,	// (0x000159cc) bg_tb_trans_pane_g8

0x2830,	// (0x000159d4) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x00022dcf) bg_tb_trans_pane_g

0x613d,	// (0x000192e1) cell_toolbar_trans_pane_ParamLimits

0x613d,	// (0x000192e1) cell_toolbar_trans_pane

0x5358,	// (0x000184fc) cell_toolbar_trans_pane_g1

0xc244,	// (0x0001f3e8) list_form2_midp_pane_t1

0xc252,	// (0x0001f3f6) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x00022c6c) list_form2_midp_pane_t

0x4f59,	// (0x000180fd) scroll_pane_cp51_ParamLimits

0x5173,	// (0x00018317) form2_midp_wait_pane_g1

0x517c,	// (0x00018320) form2_midp_wait_pane_g2

0x5185,	// (0x00018329) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x00022c81) form2_midp_wait_pane_g

0xc869,	// (0x0001fa0d) list_highlight_pane_cp21_ParamLimits

0x51be,	// (0x00018362) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x51cd,	// (0x00018371) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3f02,	// (0x000170a6) list_single_2graphic_im_pane_ParamLimits

0x3f02,	// (0x000170a6) list_single_2graphic_im_pane

0xc645,	// (0x0001f7e9) list_single_2graphic_im_pane_g1_ParamLimits

0xc645,	// (0x0001f7e9) list_single_2graphic_im_pane_g1

0xc656,	// (0x0001f7fa) list_single_2graphic_im_pane_g2_ParamLimits

0xc656,	// (0x0001f7fa) list_single_2graphic_im_pane_g2

0xc662,	// (0x0001f806) list_single_2graphic_im_pane_g3_ParamLimits

0xc662,	// (0x0001f806) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x00022de2) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x00022de2) list_single_2graphic_im_pane_g

0xc676,	// (0x0001f81a) list_single_2graphic_im_pane_t1_ParamLimits

0xc676,	// (0x0001f81a) list_single_2graphic_im_pane_t1

0x59e6,	// (0x00018b8a) list_single_graphic_2heading_pane_fp_ParamLimits

0x59e6,	// (0x00018b8a) list_single_graphic_2heading_pane_fp

0x5a2e,	// (0x00018bd2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5a2e,	// (0x00018bd2) list_single_graphic_2heading_pane_fp_g1

0x59ff,	// (0x00018ba3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x59ff,	// (0x00018ba3) list_single_graphic_2heading_pane_fp_g2

0x5958,	// (0x00018afc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5958,	// (0x00018afc) list_single_graphic_2heading_pane_fp_g3

0x5964,	// (0x00018b08) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5964,	// (0x00018b08) list_single_graphic_2heading_pane_fp_g4

0x5a0b,	// (0x00018baf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5a0b,	// (0x00018baf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00022d09) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00022d09) list_single_graphic_2heading_pane_fp_g

0x61d1,	// (0x00019375) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x61d1,	// (0x00019375) list_single_graphic_2heading_pane_fp_t1

0x5a66,	// (0x00018c0a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a66,	// (0x00018c0a) list_single_graphic_2heading_pane_fp_t2

0x61e7,	// (0x0001938b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x61e7,	// (0x0001938b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x00022deb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x00022deb) list_single_graphic_2heading_pane_fp_t

0x53e9,	// (0x0001858d) fep_hwr_write_pane_g5_ParamLimits

0x53e9,	// (0x0001858d) fep_hwr_write_pane_g5

0x53f5,	// (0x00018599) fep_hwr_write_pane_g6_ParamLimits

0x53f5,	// (0x00018599) fep_hwr_write_pane_g6

0x5e9f,	// (0x00019043) eswt_shell_pane_ParamLimits

0x2924,	// (0x00015ac8) bg_popup_window_pane_cp18_ParamLimits

0x3c02,	// (0x00016da6) heading_pane_cp70

0x5fc9,	// (0x0001916d) popup_eswt_tasktip_window_t1_ParamLimits

0xb79b,	// (0x0001e93f) aid_touch_tab_arrow_left

0xb7b1,	// (0x0001e955) aid_touch_tab_arrow_right

0xa963,	// (0x0001db07) title_pane_g3_ParamLimits

0xa963,	// (0x0001db07) title_pane_g3

0xe525,	// (0x000216c9) set_value_pane_g1

0xa067,	// (0x0001d20b) popup_toolbar_trans_pane_ParamLimits

0x6117,	// (0x000192bb) aid_size_cell_tb_trans_pane_ParamLimits

0xe5cc,	// (0x00021770) bg_tb_trans_pane_ParamLimits

0x6129,	// (0x000192cd) grid_tb_trans_pane_ParamLimits

0xc9b6,	// (0x0001fb5a) cont_note_pane_ParamLimits

0xc9b6,	// (0x0001fb5a) cont_note_pane

0xe2c0,	// (0x00021464) cont_snote2_single_text_pane_ParamLimits

0xe2c0,	// (0x00021464) cont_snote2_single_text_pane

0xe2c0,	// (0x00021464) cont_snote2_single_graphic_pane_ParamLimits

0xe2c0,	// (0x00021464) cont_snote2_single_graphic_pane

0x2f45,	// (0x000160e9) cont_note_wait_pane_ParamLimits

0x2f45,	// (0x000160e9) cont_note_wait_pane

0x2f45,	// (0x000160e9) cont_note_image_pane_ParamLimits

0x2f45,	// (0x000160e9) cont_note_image_pane

0x61fd,	// (0x000193a1) popup_note2_window_g1_ParamLimits

0x61fd,	// (0x000193a1) popup_note2_window_g1

0x622e,	// (0x000193d2) popup_note2_window_t1_ParamLimits

0x622e,	// (0x000193d2) popup_note2_window_t1

0x6273,	// (0x00019417) popup_note2_window_t2_ParamLimits

0x6273,	// (0x00019417) popup_note2_window_t2

0x62b8,	// (0x0001945c) popup_note2_window_t3_ParamLimits

0x62b8,	// (0x0001945c) popup_note2_window_t3

0x62fd,	// (0x000194a1) popup_note2_window_t4_ParamLimits

0x62fd,	// (0x000194a1) popup_note2_window_t4

0xe0ba,	// (0x0002125e) popup_note2_window_t5_ParamLimits

0xe0ba,	// (0x0002125e) popup_note2_window_t5

0x0004,

0xfc53,	// (0x00022df7) popup_note2_window_t_ParamLimits

0xfc53,	// (0x00022df7) popup_note2_window_t

0x632c,	// (0x000194d0) popup_note2_image_window_g1_ParamLimits

0x632c,	// (0x000194d0) popup_note2_image_window_g1

0x6338,	// (0x000194dc) popup_note2_image_window_g2_ParamLimits

0x6338,	// (0x000194dc) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x00022e02) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x00022e02) popup_note2_image_window_g

0x634a,	// (0x000194ee) popup_note2_image_window_t1_ParamLimits

0x634a,	// (0x000194ee) popup_note2_image_window_t1

0x6362,	// (0x00019506) popup_note2_image_window_t2_ParamLimits

0x6362,	// (0x00019506) popup_note2_image_window_t2

0x637a,	// (0x0001951e) popup_note2_image_window_t3_ParamLimits

0x637a,	// (0x0001951e) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x00022e07) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x00022e07) popup_note2_image_window_t

0x2f53,	// (0x000160f7) popup_note2_wait_window_g1_ParamLimits

0x2f53,	// (0x000160f7) popup_note2_wait_window_g1

0x6396,	// (0x0001953a) popup_note2_wait_window_g2_ParamLimits

0x6396,	// (0x0001953a) popup_note2_wait_window_g2

0x2f6b,	// (0x0001610f) popup_note2_wait_window_g3_ParamLimits

0x2f6b,	// (0x0001610f) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x00022e0e) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x00022e0e) popup_note2_wait_window_g

0x63a2,	// (0x00019546) popup_note2_wait_window_t1_ParamLimits

0x63a2,	// (0x00019546) popup_note2_wait_window_t1

0x63c0,	// (0x00019564) popup_note2_wait_window_t2_ParamLimits

0x63c0,	// (0x00019564) popup_note2_wait_window_t2

0x63de,	// (0x00019582) popup_note2_wait_window_t3_ParamLimits

0x63de,	// (0x00019582) popup_note2_wait_window_t3

0x63f0,	// (0x00019594) popup_note2_wait_window_t4_ParamLimits

0x63f0,	// (0x00019594) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x00022e15) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x00022e15) popup_note2_wait_window_t

0x6402,	// (0x000195a6) wait_bar2_pane_ParamLimits

0x6402,	// (0x000195a6) wait_bar2_pane

0x641a,	// (0x000195be) popup_snote2_single_text_window_g1_ParamLimits

0x641a,	// (0x000195be) popup_snote2_single_text_window_g1

0x6442,	// (0x000195e6) popup_snote2_single_text_window_t1_ParamLimits

0x6442,	// (0x000195e6) popup_snote2_single_text_window_t1

0x648e,	// (0x00019632) popup_snote2_single_text_window_t2_ParamLimits

0x648e,	// (0x00019632) popup_snote2_single_text_window_t2

0x64da,	// (0x0001967e) popup_snote2_single_text_window_t3_ParamLimits

0x64da,	// (0x0001967e) popup_snote2_single_text_window_t3

0x651b,	// (0x000196bf) popup_snote2_single_text_window_t4_ParamLimits

0x651b,	// (0x000196bf) popup_snote2_single_text_window_t4

0x6551,	// (0x000196f5) popup_snote2_single_text_window_t5_ParamLimits

0x6551,	// (0x000196f5) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x00022e1e) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x00022e1e) popup_snote2_single_text_window_t

0x657c,	// (0x00019720) popup_snote2_single_graphic_window_g1_ParamLimits

0x657c,	// (0x00019720) popup_snote2_single_graphic_window_g1

0x65a4,	// (0x00019748) popup_snote2_single_graphic_window_g2_ParamLimits

0x65a4,	// (0x00019748) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x00022e29) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x00022e29) popup_snote2_single_graphic_window_g

0x65cc,	// (0x00019770) popup_snote2_single_graphic_window_t1_ParamLimits

0x65cc,	// (0x00019770) popup_snote2_single_graphic_window_t1

0x6618,	// (0x000197bc) popup_snote2_single_graphic_window_t2_ParamLimits

0x6618,	// (0x000197bc) popup_snote2_single_graphic_window_t2

0x64da,	// (0x0001967e) popup_snote2_single_graphic_window_t3_ParamLimits

0x64da,	// (0x0001967e) popup_snote2_single_graphic_window_t3

0x651b,	// (0x000196bf) popup_snote2_single_graphic_window_t4_ParamLimits

0x651b,	// (0x000196bf) popup_snote2_single_graphic_window_t4

0x6551,	// (0x000196f5) popup_snote2_single_graphic_window_t5_ParamLimits

0x6551,	// (0x000196f5) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x00022e2e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x00022e2e) popup_snote2_single_graphic_window_t

0x4e09,	// (0x00017fad) clock_nsta_pane_cp2_t1

0x4e09,	// (0x00017fad) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00022c42) clock_nsta_pane_cp2_t

0xe5e6,	// (0x0002178a) form_field_data_wide_pane_g1_ParamLimits

0xe5f2,	// (0x00021796) form_field_data_wide_pane_g2_ParamLimits

0xe5f2,	// (0x00021796) form_field_data_wide_pane_g2

0xe5fe,	// (0x000217a2) form_field_data_wide_pane_g3_ParamLimits

0xe5fe,	// (0x000217a2) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x000227f5) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x000227f5) form_field_data_wide_pane_g

0xc14b,	// (0x0001f2ef) grid_touch_3_pane_ParamLimits

0xc14b,	// (0x0001f2ef) grid_touch_3_pane

0xc6a7,	// (0x0001f84b) cell_touch_3_pane_ParamLimits

0xc6a7,	// (0x0001f84b) cell_touch_3_pane

0x5358,	// (0x000184fc) cell_touch_3_pane_g1

0x5358,	// (0x000184fc) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00022cc7) cell_touch_3_pane_g

0xe112,	// (0x000212b6) cont_query_data_pane

0xe11a,	// (0x000212be) cont_query_data_pane_cp1

0x6697,	// (0x0001983b) button_value_adjust_pane_cp7

0x669f,	// (0x00019843) query_popup_pane_cp3

0x1998,	// (0x00014b3c) bg_popup_sub_pane_cp22_ParamLimits

0xe945,	// (0x00021ae9) navi_navi_volume_pane_cp2

0xe960,	// (0x00021b04) popup_side_volume_key_window_g2

0xe96f,	// (0x00021b13) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0002288b) popup_side_volume_key_window_g

0xe98c,	// (0x00021b30) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00022892) popup_side_volume_key_window_t

0x1ce5,	// (0x00014e89) popup_side_volume_key_window_ParamLimits

0xae39,	// (0x0001dfdd) list_double_graphic_pane_g4_ParamLimits

0xae39,	// (0x0001dfdd) list_double_graphic_pane_g4

0xbfc1,	// (0x0001f165) list_single_2heading_msg_pane_ParamLimits

0xbfc1,	// (0x0001f165) list_single_2heading_msg_pane

0xc6f3,	// (0x0001f897) list_single_2heading_msg_pane_g1_ParamLimits

0xc6f3,	// (0x0001f897) list_single_2heading_msg_pane_g1

0xc6ff,	// (0x0001f8a3) list_single_2heading_msg_pane_g2_ParamLimits

0xc6ff,	// (0x0001f8a3) list_single_2heading_msg_pane_g2

0xc712,	// (0x0001f8b6) list_single_2heading_msg_pane_g3_ParamLimits

0xc712,	// (0x0001f8b6) list_single_2heading_msg_pane_g3

0xc71e,	// (0x0001f8c2) list_single_2heading_msg_pane_g4_ParamLimits

0xc71e,	// (0x0001f8c2) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x00022e39) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x00022e39) list_single_2heading_msg_pane_g

0xc736,	// (0x0001f8da) list_single_2heading_msg_pane_t1_ParamLimits

0xc736,	// (0x0001f8da) list_single_2heading_msg_pane_t1

0xc75e,	// (0x0001f902) list_single_2heading_msg_pane_t2_ParamLimits

0xc75e,	// (0x0001f902) list_single_2heading_msg_pane_t2

0xca09,	// (0x0001fbad) list_single_2heading_msg_pane_t3_ParamLimits

0xca09,	// (0x0001fbad) list_single_2heading_msg_pane_t3

0x679c,	// (0x00019940) list_single_2heading_msg_pane_t4_ParamLimits

0x679c,	// (0x00019940) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x00022e42) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x00022e42) list_single_2heading_msg_pane_t

0xc817,	// (0x0001f9bb) title_pane_g4_ParamLimits

0xc817,	// (0x0001f9bb) title_pane_g4

0xe74e,	// (0x000218f2) title_pane_stacon_g3_ParamLimits

0xe74e,	// (0x000218f2) title_pane_stacon_g3

0x6194,	// (0x00019338) list_single_2graphic_im_pane_g4_ParamLimits

0x6194,	// (0x00019338) list_single_2graphic_im_pane_g4

0x39b5,	// (0x00016b59) popup_side_volume_key_window_cp

0x42d1,	// (0x00017475) main_idle_act2_pane_t1

0xedab,	// (0x00021f4f) toolbar_button_pane_g10

0xace0,	// (0x0001de84) popup_toolbar_window_cp1

0x4dfa,	// (0x00017f9e) clock_nsta_pane_cp_t1

0x4dfa,	// (0x00017f9e) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x00022c3d) clock_nsta_pane_cp_t

0xe945,	// (0x00021ae9) navi_navi_volume_pane_cp2_ParamLimits

0xe954,	// (0x00021af8) popup_side_volume_key_window_g1_ParamLimits

0xe960,	// (0x00021b04) popup_side_volume_key_window_g2_ParamLimits

0xe96f,	// (0x00021b13) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0002288b) popup_side_volume_key_window_g_ParamLimits

0xf0b2,	// (0x00022256) fep_hwr_aid_pane

0xf15b,	// (0x000222ff) bg_fep_hwr_top_pane_g4_ParamLimits

0x53b9,	// (0x0001855d) fep_hwr_top_pane_g1_ParamLimits

0x53cb,	// (0x0001856f) fep_hwr_top_pane_g2_ParamLimits

0xf17b,	// (0x0002231f) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x00022c92) fep_hwr_top_pane_g_ParamLimits

0xf190,	// (0x00022334) fep_hwr_top_text_pane_ParamLimits

0x376a,	// (0x0001690e) aid_touch_tab_arrow_arrow_2

0x3773,	// (0x00016917) aid_touch_tab_arrow_left_2

0xf0c6,	// (0x0002226a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xf0fd,	// (0x000222a1) fep_hwr_prediction_pane

0x5521,	// (0x000186c5) fep_vkb_prediction_pane

0xc454,	// (0x0001f5f8) fep_vkb_side_pane_g3_ParamLimits

0xc454,	// (0x0001f5f8) fep_vkb_side_pane_g3

0xf2a4,	// (0x00022448) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf315,	// (0x000224b9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf322,	// (0x000224c6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x00022d41) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf451,	// (0x000225f5) fep_hwr_prediction_pane_g1

0xf45b,	// (0x000225ff) fep_hwr_prediction_pane_g2

0xf463,	// (0x00022607) fep_hwr_prediction_pane_g3

0xf46b,	// (0x0002260f) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x00022e4b) fep_hwr_prediction_pane_g

0x67c1,	// (0x00019965) fep_vkb_prediction_pane_g1

0x67cb,	// (0x0001996f) fep_vkb_prediction_pane_g2

0x67d3,	// (0x00019977) fep_vkb_prediction_pane_g3

0x67db,	// (0x0001997f) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x00022e54) fep_vkb_prediction_pane_g

0xef40,	// (0x000220e4) slider_set_pane_g3

0xef54,	// (0x000220f8) slider_set_pane_g4

0xef6c,	// (0x00022110) slider_set_pane_g5

0xef40,	// (0x000220e4) slider_set_pane_g6

0xef82,	// (0x00022126) slider_set_pane_g7

0x3e63,	// (0x00017007) slider_form_pane_g3

0x3e6c,	// (0x00017010) slider_form_pane_g4

0x3e74,	// (0x00017018) slider_form_pane_g5

0x3e63,	// (0x00017007) slider_form_pane_g6

0xbf61,	// (0x0001f105) slider_form_pane_g7

0x45d5,	// (0x00017779) slider_set_pane_vc_g3

0x45de,	// (0x00017782) slider_set_pane_vc_g4

0x45e7,	// (0x0001778b) slider_set_pane_vc_g5

0x45d5,	// (0x00017779) slider_set_pane_vc_g6

0x45f0,	// (0x00017794) slider_set_pane_vc_g7

0x4aa9,	// (0x00017c4d) slider_form_pane_vc_g1

0x4ab2,	// (0x00017c56) slider_form_pane_vc_g2

0x4abb,	// (0x00017c5f) slider_form_pane_vc_g3

0x4aa9,	// (0x00017c4d) slider_form_pane_vc_g4

0x4ac4,	// (0x00017c68) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00022c0f) slider_form_pane_vc_g

0xded0,	// (0x00021074) main_idle_act3_pane

0x67e3,	// (0x00019987) ai3_links_pane

0xca77,	// (0x0001fc1b) popup_ai3_data_window_ParamLimits

0xca77,	// (0x0001fc1b) popup_ai3_data_window

0xc7f9,	// (0x0001f99d) grid_ai3_links_pane

0xca95,	// (0x0001fc39) cell_ai3_links_pane_ParamLimits

0xca95,	// (0x0001fc39) cell_ai3_links_pane

0x6824,	// (0x000199c8) bg_popup_sub_pane_cp11

0x6831,	// (0x000199d5) cell_ai3_links_pane_g1

0xc7f9,	// (0x0001f99d) bg_popup_sub_pane_cp12

0x6856,	// (0x000199fa) heading_ai3_data_pane

0x685e,	// (0x00019a02) list_ai3_gene_pane

0x686a,	// (0x00019a0e) popup_ai3_data_window_g1

0x6872,	// (0x00019a16) heading_ai3_data_pane_g1

0x687a,	// (0x00019a1e) heading_ai3_data_pane_t1

0x6888,	// (0x00019a2c) list_double_ai3_gene_pane_ParamLimits

0x6888,	// (0x00019a2c) list_double_ai3_gene_pane

0x6895,	// (0x00019a39) list_single_ai3_gene_pane_ParamLimits

0x6895,	// (0x00019a39) list_single_ai3_gene_pane

0x531d,	// (0x000184c1) list_highlight_pane_cp7_ParamLimits

0x531d,	// (0x000184c1) list_highlight_pane_cp7

0x68a2,	// (0x00019a46) list_single_a13_gene_pane_t1_ParamLimits

0x68a2,	// (0x00019a46) list_single_a13_gene_pane_t1

0x68b9,	// (0x00019a5d) list_single_ai3_gene_pane_g1

0x68c2,	// (0x00019a66) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x00022e5d) list_single_ai3_gene_pane_g

0x68ca,	// (0x00019a6e) list_double_ai3_gene_pane_g1_ParamLimits

0x68ca,	// (0x00019a6e) list_double_ai3_gene_pane_g1

0x68d6,	// (0x00019a7a) list_double_ai3_gene_pane_t1_ParamLimits

0x68d6,	// (0x00019a7a) list_double_ai3_gene_pane_t1

0x68f2,	// (0x00019a96) list_double_ai3_gene_pane_t2_ParamLimits

0x68f2,	// (0x00019a96) list_double_ai3_gene_pane_t2

0x6907,	// (0x00019aab) list_double_ai3_gene_pane_t3_ParamLimits

0x6907,	// (0x00019aab) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x00022e62) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x00022e62) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x66b0,	// (0x00019854) aid_size_min_col_2

0xc6dd,	// (0x0001f881) aid_size_min_msg_ParamLimits

0xc6dd,	// (0x0001f881) aid_size_min_msg

0xc468,	// (0x0001f60c) fep_vkb_top_text_pane_g2_ParamLimits

0xc468,	// (0x0001f60c) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00022cc2) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00022cc2) fep_vkb_top_text_pane_g

0xded0,	// (0x00021074) main_hc_apps_shell_pane

0x6924,	// (0x00019ac8) grid_hc_apps_pane_ParamLimits

0x6924,	// (0x00019ac8) grid_hc_apps_pane

0x6936,	// (0x00019ada) list_hc_apps_pane

0x693e,	// (0x00019ae2) scroll_pane_cp37_ParamLimits

0x693e,	// (0x00019ae2) scroll_pane_cp37

0xcaaf,	// (0x0001fc53) cell_hc_apps_pane_ParamLimits

0xcaaf,	// (0x0001fc53) cell_hc_apps_pane

0xcb77,	// (0x0001fd1b) cell_hc_apps_pane_g1_ParamLimits

0xcb77,	// (0x0001fd1b) cell_hc_apps_pane_g1

0x6a2c,	// (0x00019bd0) cell_hc_apps_pane_g2_ParamLimits

0x6a2c,	// (0x00019bd0) cell_hc_apps_pane_g2

0x6a48,	// (0x00019bec) cell_hc_apps_pane_g3_ParamLimits

0x6a48,	// (0x00019bec) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x00022e69) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x00022e69) cell_hc_apps_pane_g

0xcba3,	// (0x0001fd47) cell_hc_apps_pane_t1_ParamLimits

0xcba3,	// (0x0001fd47) cell_hc_apps_pane_t1

0xc9b6,	// (0x0001fb5a) grid_highlight_pane_cp10_ParamLimits

0xc9b6,	// (0x0001fb5a) grid_highlight_pane_cp10

0xcbe3,	// (0x0001fd87) list_single_hc_apps_pane_ParamLimits

0xcbe3,	// (0x0001fd87) list_single_hc_apps_pane

0xcc1d,	// (0x0001fdc1) list_single_hc_apps_pane_g1

0xcc36,	// (0x0001fdda) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x00022e70) list_single_hc_apps_pane_g

0xcc4f,	// (0x0001fdf3) list_single_hc_apps_pane_g2_copy1

0xcc6b,	// (0x0001fe0f) list_single_hc_apps_pane_t1

0xc869,	// (0x0001fa0d) bg_set_opt_pane_cp_ParamLimits

0xdff3,	// (0x00021197) setting_slider_pane_t1_ParamLimits

0xe00c,	// (0x000211b0) setting_slider_pane_t2_ParamLimits

0xe026,	// (0x000211ca) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000226dd) setting_slider_pane_t_ParamLimits

0xe03e,	// (0x000211e2) slider_set_pane_ParamLimits

0xeb8e,	// (0x00021d32) control_pane_g5_ParamLimits

0xeb8e,	// (0x00021d32) control_pane_g5

0x3c96,	// (0x00016e3a) slider_set_pane_g1_ParamLimits

0xef34,	// (0x000220d8) slider_set_pane_g2_ParamLimits

0xef40,	// (0x000220e4) slider_set_pane_g3_ParamLimits

0xef54,	// (0x000220f8) slider_set_pane_g4_ParamLimits

0xef6c,	// (0x00022110) slider_set_pane_g5_ParamLimits

0xef40,	// (0x000220e4) slider_set_pane_g6_ParamLimits

0xef82,	// (0x00022126) slider_set_pane_g7_ParamLimits

0xf935,	// (0x00022ad9) slider_set_pane_g_ParamLimits

0x1dd5,	// (0x00014f79) navi_icon_text_pane_ParamLimits

0xb762,	// (0x0001e906) aid_fill_nsta_2_ParamLimits

0xb79b,	// (0x0001e93f) aid_touch_tab_arrow_left_ParamLimits

0xb7b1,	// (0x0001e955) aid_touch_tab_arrow_right_ParamLimits

0xb84c,	// (0x0001e9f0) clock_nsta_pane_ParamLimits

0xbcdf,	// (0x0001ee83) navi_icon_pane_g1_ParamLimits

0xbceb,	// (0x0001ee8f) navi_text_pane_t1_ParamLimits

0xc226,	// (0x0001f3ca) navi_icon_text_pane_g1_ParamLimits

0xc232,	// (0x0001f3d6) navi_icon_text_pane_t1_ParamLimits

0xcc1d,	// (0x0001fdc1) list_single_hc_apps_pane_g1_ParamLimits

0xcc36,	// (0x0001fdda) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x00022e70) list_single_hc_apps_pane_g_ParamLimits

0xcc4f,	// (0x0001fdf3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcc6b,	// (0x0001fe0f) list_single_hc_apps_pane_t1_ParamLimits

0x9741,	// (0x0001c8e5) popup_toolbar2_fixed_window_ParamLimits

0x9741,	// (0x0001c8e5) popup_toolbar2_fixed_window

0xa05d,	// (0x0001d201) popup_toolbar2_float_window

0xc7f9,	// (0x0001f99d) bg_popup_sub_pane_cp27

0x6b65,	// (0x00019d09) grid_toolbar2_float_pane

0xc7f9,	// (0x0001f99d) bg_popup_sub_pane_cp26

0x6b65,	// (0x00019d09) grid_toolbar2_fixed_pane

0xcc99,	// (0x0001fe3d) cell_toolbar2_fixed_pane_ParamLimits

0xcc99,	// (0x0001fe3d) cell_toolbar2_fixed_pane

0xccb3,	// (0x0001fe57) cell_toolbar2_fixed_pane_g1

0x6b86,	// (0x00019d2a) toolbar2_fixed_button_pane

0x2800,	// (0x000159a4) toolbar2_fixed_button_pane_g1

0x2810,	// (0x000159b4) toolbar2_fixed_button_pane_g2

0x2808,	// (0x000159ac) toolbar2_fixed_button_pane_g3

0x2820,	// (0x000159c4) toolbar2_fixed_button_pane_g4

0x2818,	// (0x000159bc) toolbar2_fixed_button_pane_g5

0x2828,	// (0x000159cc) toolbar2_fixed_button_pane_g6

0x2830,	// (0x000159d4) toolbar2_fixed_button_pane_g7

0x2840,	// (0x000159e4) toolbar2_fixed_button_pane_g8

0x2838,	// (0x000159dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x000229db) toolbar2_fixed_button_pane_g

0x6b8e,	// (0x00019d32) cell_toolbar2_float_pane_ParamLimits

0x6b8e,	// (0x00019d32) cell_toolbar2_float_pane

0x6b9f,	// (0x00019d43) cell_toolbar2_float_pane_g1

0x6b86,	// (0x00019d2a) toolbar2_fixed_button_pane_cp

0xc350,	// (0x0001f4f4) fep_vkb_accented_list_pane_ParamLimits

0xc350,	// (0x0001f4f4) fep_vkb_accented_list_pane

0xf284,	// (0x00022428) bg_popup_fep_shadow_pane_g9

0x1f59,	// (0x000150fd) bg_popup_fep_shadow_pane_cp3

0x13a8,	// (0x0001454c) list_accented_list_pane

0x6ba8,	// (0x00019d4c) list_single_accented_list_pane_ParamLimits

0x6ba8,	// (0x00019d4c) list_single_accented_list_pane

0x1f59,	// (0x000150fd) list_highlight_pane_cp10

0x6bb9,	// (0x00019d5d) list_single_accented_list_pane_t1

0x9f7b,	// (0x0001d11f) popup_slider_window_ParamLimits

0x9f7b,	// (0x0001d11f) popup_slider_window

0x66a7,	// (0x0001984b) aid_indentation_list_msg

0xcdb6,	// (0x0001ff5a) bg_popup_window_pane_cp19

0x6cf5,	// (0x00019e99) popup_slider_window_g1

0x6d11,	// (0x00019eb5) popup_slider_window_g2

0x6d2d,	// (0x00019ed1) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x00022e75) popup_slider_window_g

0x6d93,	// (0x00019f37) popup_slider_window_t1

0x6e07,	// (0x00019fab) small_volume_slider_vertical_pane

0x5358,	// (0x000184fc) small_volume_slider_vertical_pane_g1

0x5358,	// (0x000184fc) small_volume_slider_vertical_pane_g2

0x6e23,	// (0x00019fc7) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x00022e87) small_volume_slider_vertical_pane_g

0x96ab,	// (0x0001c84f) area_side_right_pane_ParamLimits

0x96ab,	// (0x0001c84f) area_side_right_pane

0xa2fa,	// (0x0001d49e) aid_size_side_button_ParamLimits

0xa2fa,	// (0x0001d49e) aid_size_side_button

0xa313,	// (0x0001d4b7) grid_sctrl_middle_pane_ParamLimits

0xa313,	// (0x0001d4b7) grid_sctrl_middle_pane

0xf47c,	// (0x00022620) sctrl_sk_bottom_pane

0xf48d,	// (0x00022631) sctrl_sk_top_pane

0xf49f,	// (0x00022643) aid_touch_sctrl_top

0xf4ac,	// (0x00022650) bg_sctrl_sk_pane_ParamLimits

0xf4ac,	// (0x00022650) bg_sctrl_sk_pane

0xf4ba,	// (0x0002265e) sctrl_sk_top_pane_g1

0xf4c7,	// (0x0002266b) sctrl_sk_top_pane_t1

0xf49f,	// (0x00022643) aid_touch_sctrl_bottom

0xf4ac,	// (0x00022650) bg_sctrl_sk_pane_cp_ParamLimits

0xf4ac,	// (0x00022650) bg_sctrl_sk_pane_cp

0xf4e2,	// (0x00022686) sctrl_sk_bottom_pane_g1

0xf4c7,	// (0x0002266b) sctrl_sk_bottom_pane_t1

0xa32d,	// (0x0001d4d1) cell_sctrl_middle_pane_ParamLimits

0xa32d,	// (0x0001d4d1) cell_sctrl_middle_pane

0xa340,	// (0x0001d4e4) aid_touch_sctrl_middle_ParamLimits

0xa340,	// (0x0001d4e4) aid_touch_sctrl_middle

0xa34d,	// (0x0001d4f1) bg_sctrl_middle_pane_ParamLimits

0xa34d,	// (0x0001d4f1) bg_sctrl_middle_pane

0x04ad,	// (0x00013651) cell_sctrl_middle_pane_g1_ParamLimits

0x04ad,	// (0x00013651) cell_sctrl_middle_pane_g1

0xa35b,	// (0x0001d4ff) cell_sctrl_middle_pane_g2_ParamLimits

0xa35b,	// (0x0001d4ff) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x00022e93) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x00022e93) cell_sctrl_middle_pane_g

0x2800,	// (0x000159a4) bg_sctrl_middle_pane_g1

0x2808,	// (0x000159ac) bg_sctrl_middle_pane_g2

0x2810,	// (0x000159b4) bg_sctrl_middle_pane_g3

0x2818,	// (0x000159bc) bg_sctrl_middle_pane_g4

0x2820,	// (0x000159c4) bg_sctrl_middle_pane_g5

0x2828,	// (0x000159cc) bg_sctrl_middle_pane_g6

0x2830,	// (0x000159d4) bg_sctrl_middle_pane_g7

0x2838,	// (0x000159dc) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x00022e98) bg_sctrl_middle_pane_g

0x2840,	// (0x000159e4) bg_sctrl_middle_pane_g8_copy1

0x2800,	// (0x000159a4) bg_sctrl_sk_pane_g1

0x2810,	// (0x000159b4) bg_sctrl_sk_pane_g2

0x2808,	// (0x000159ac) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x000229db) bg_sctrl_sk_pane_g

0xe47e,	// (0x00021622) aid_size_touch_scroll_bar

0x2820,	// (0x000159c4) bg_sctrl_sk_pane_g4

0x2818,	// (0x000159bc) bg_sctrl_sk_pane_g5

0x2828,	// (0x000159cc) bg_sctrl_sk_pane_g6

0x2830,	// (0x000159d4) bg_sctrl_sk_pane_g7

0x2840,	// (0x000159e4) bg_sctrl_sk_pane_g8

0x2838,	// (0x000159dc) bg_sctrl_sk_pane_g9

0xebed,	// (0x00021d91) popup_fep_china_hwr2_fs_candidate_window

0x9a2d,	// (0x0001cbd1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9a2d,	// (0x0001cbd1) popup_fep_china_hwr2_fs_control_window

0xf2a4,	// (0x00022448) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x00022e8e) sctrl_sk_top_pane_g

0xce6e,	// (0x00020012) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce6e,	// (0x00020012) aid_fep_china_hwr2_fs_cell

0xce84,	// (0x00020028) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce84,	// (0x00020028) bg_popup_fep_shadow_pane_cp4

0xce9b,	// (0x0002003f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce9b,	// (0x0002003f) bg_popup_fep_shadow_pane_cp5

0xcead,	// (0x00020051) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcead,	// (0x00020051) popup_fep_china_hwr2_fs_control_bar_grid

0xcec1,	// (0x00020065) popup_fep_china_hwr2_fs_control_funtion_grid

0x6e82,	// (0x0001a026) aid_fep_china_hwr2_fs_candi_cell

0xc7f9,	// (0x0001f99d) bg_popup_fep_shadow_pane_cp6

0x6e8c,	// (0x0001a030) popup_fep_china_hwr2_fs_candidate_grid

0xcec9,	// (0x0002006d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcec9,	// (0x0002006d) cell_fep_china_hwr2_fs_funtion_grid

0x5358,	// (0x000184fc) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6eae,	// (0x0001a052) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6eae,	// (0x0001a052) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6ebc,	// (0x0001a060) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6ebc,	// (0x0001a060) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x00022ea9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x00022ea9) cell_fep_china_hwr2_fs_funtion_grid_g

0xcee1,	// (0x00020085) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcee1,	// (0x00020085) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcef6,	// (0x0002009a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcef6,	// (0x0002009a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x00022eae) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x00022eae) cell_fep_china_hwr2_fs_funtion_grid_t

0x6f03,	// (0x0001a0a7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6f0b,	// (0x0001a0af) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6f13,	// (0x0001a0b7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x00022eb3) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6f1b,	// (0x0001a0bf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6f1b,	// (0x0001a0bf) cell_fep_china_hwr2_fs_candidate_grid

0x6f3a,	// (0x0001a0de) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6f42,	// (0x0001a0e6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5358,	// (0x000184fc) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5358,	// (0x000184fc) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00022cc7) cell_fep_china_hwr2_fs_candidate_grid_g

0x6f4a,	// (0x0001a0ee) cell_fep_china_hwr2_fs_candidate_grid_t1

0x23ae,	// (0x00015552) clock_nsta_pane_cp_24_ParamLimits

0x23ae,	// (0x00015552) clock_nsta_pane_cp_24

0x242e,	// (0x000155d2) indicator_nsta_pane_cp_24_ParamLimits

0x242e,	// (0x000155d2) indicator_nsta_pane_cp_24

0x35c8,	// (0x0001676c) heading_pane_g1

0x0001,

0xf89c,	// (0x00022a40) heading_pane_g

0x4118,	// (0x000172bc) grid_sct_catagory_button_pane

0x414a,	// (0x000172ee) scroll_pane_cp5_ParamLimits

0x4f65,	// (0x00018109) button_value_adjust_pane_cp5_ParamLimits

0x4f65,	// (0x00018109) button_value_adjust_pane_cp5

0x506b,	// (0x0001820f) form2_midp_time_pane_ParamLimits

0x6f58,	// (0x0001a0fc) cell_sct_catagory_button_pane_ParamLimits

0x6f58,	// (0x0001a0fc) cell_sct_catagory_button_pane

0x531d,	// (0x000184c1) bg_button_pane_cp01_ParamLimits

0x531d,	// (0x000184c1) bg_button_pane_cp01

0x5358,	// (0x000184fc) cell_sct_catagory_button_pane_g1

0x9ffa,	// (0x0001d19e) popup_tb_extension_window

0xcf12,	// (0x000200b6) aid_size_cell_ext_ParamLimits

0xcf12,	// (0x000200b6) aid_size_cell_ext

0xe2c0,	// (0x00021464) bg_tb_trans_pane_cp1_ParamLimits

0xe2c0,	// (0x00021464) bg_tb_trans_pane_cp1

0xcf38,	// (0x000200dc) grid_tb_ext_pane_ParamLimits

0xcf38,	// (0x000200dc) grid_tb_ext_pane

0xcf75,	// (0x00020119) cell_tb_ext_pane_ParamLimits

0xcf75,	// (0x00020119) cell_tb_ext_pane

0xcf9d,	// (0x00020141) cell_tb_ext_pane_g1_ParamLimits

0xcf9d,	// (0x00020141) cell_tb_ext_pane_g1

0x6fec,	// (0x0001a190) cell_tb_ext_pane_t1

0xc9b6,	// (0x0001fb5a) list_highlight_pane_cp11_ParamLimits

0xc9b6,	// (0x0001fb5a) list_highlight_pane_cp11

0x9756,	// (0x0001c8fa) popup_uni_indicator_window_ParamLimits

0x9756,	// (0x0001c8fa) popup_uni_indicator_window

0xe5cc,	// (0x00021770) bg_popup_sub_pane_cp14

0x7007,	// (0x0001a1ab) list_uniindi_pane

0x7013,	// (0x0001a1b7) uniindi_top_pane

0xc9b6,	// (0x0001fb5a) bg_uniindi_top_pane

0x7034,	// (0x0001a1d8) uniindi_top_pane_g1

0x704a,	// (0x0001a1ee) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x00022eba) uniindi_top_pane_g

0x7074,	// (0x0001a218) uniindi_top_pane_t1

0x70a0,	// (0x0001a244) list_single_uniindi_pane_ParamLimits

0x70a0,	// (0x0001a244) list_single_uniindi_pane

0x5358,	// (0x000184fc) bg_uniindi_top_pane_g1

0x70b3,	// (0x0001a257) list_single_uniindi_pane_g1

0x70c6,	// (0x0001a26a) list_single_uniindi_pane_t1

0xded0,	// (0x00021074) control_bg_pane

0x70eb,	// (0x0001a28f) bg_sctrl_sk_pane_cp1

0x70f4,	// (0x0001a298) bg_sctrl_sk_pane_cp2

0x70fd,	// (0x0001a2a1) control_bg_pane_g1

0x7106,	// (0x0001a2aa) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x00022ec3) control_bg_pane_g

0x4d9d,	// (0x00017f41) cell_indicator_nsta_pane_g1_ParamLimits

0xc188,	// (0x0001f32c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x00022c2b) cell_indicator_nsta_pane_g_ParamLimits

0x50f8,	// (0x0001829c) form2_midp_time_pane_t1_ParamLimits

0xeee0,	// (0x00022084) main_idle_act4_pane_ParamLimits

0xeee0,	// (0x00022084) main_idle_act4_pane

0x9ffa,	// (0x0001d19e) popup_tb_extension_window_ParamLimits

0xcf5d,	// (0x00020101) tb_ext_find_pane_ParamLimits

0xcf5d,	// (0x00020101) tb_ext_find_pane

0x710f,	// (0x0001a2b3) ai_gene_pane_1_cp1

0x20a3,	// (0x00015247) ai_gene_pane_2_cp1

0x7117,	// (0x0001a2bb) list_single_idle_plugin_calendar_pane

0x7120,	// (0x0001a2c4) list_single_idle_plugin_notification_pane

0x7129,	// (0x0001a2cd) list_single_idle_plugin_player_pane

0xcfba,	// (0x0002015e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcfba,	// (0x0002015e) list_single_idle_plugin_shortcut_pane

0xcfe2,	// (0x00020186) main_idle_act4_pane_t1

0xcffa,	// (0x0002019e) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x00022ec8) main_idle_act4_pane_t

0xd012,	// (0x000201b6) middle_sk_idle_act4_pane_ParamLimits

0xd012,	// (0x000201b6) middle_sk_idle_act4_pane

0xd02e,	// (0x000201d2) popup_clock_digital_analogue_window_cp2

0xd055,	// (0x000201f9) shortcut_wheel_idle_act4_pane_ParamLimits

0xd055,	// (0x000201f9) shortcut_wheel_idle_act4_pane

0x5358,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g1

0x5358,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g2

0x5358,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g3

0x5358,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g4

0x5358,	// (0x000184fc) shortcut_wheel_idle_act4_pane_g5

0x71bc,	// (0x0001a360) shortcut_wheel_idle_act4_pane_g6

0x71c4,	// (0x0001a368) shortcut_wheel_idle_act4_pane_g7

0x71cc,	// (0x0001a370) shortcut_wheel_idle_act4_pane_g8

0x71d4,	// (0x0001a378) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x00022ecd) shortcut_wheel_idle_act4_pane_g

0xc7c9,	// (0x0001f96d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc7c9,	// (0x0001f96d) middle_sk_idle_act4_pane_g1

0xd0d2,	// (0x00020276) middle_sk_idle_act4_pane_g2_ParamLimits

0xd0d2,	// (0x00020276) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x00022ef0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x00022ef0) middle_sk_idle_act4_pane_g

0xd0ea,	// (0x0002028e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd0ea,	// (0x0002028e) middle_sk_idle_act4_pane_t1

0xd119,	// (0x000202bd) grid_ai_shortcut_pane_ParamLimits

0xd119,	// (0x000202bd) grid_ai_shortcut_pane

0xd136,	// (0x000202da) list_highlight_pane_cp16_ParamLimits

0xd136,	// (0x000202da) list_highlight_pane_cp16

0xd143,	// (0x000202e7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd143,	// (0x000202e7) list_single_idle_plugin_shortcut_pane_g1

0xd14f,	// (0x000202f3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd14f,	// (0x000202f3) list_single_idle_plugin_shortcut_pane_g2

0xd16d,	// (0x00020311) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd16d,	// (0x00020311) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x00022ef5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x00022ef5) list_single_idle_plugin_shortcut_pane_g

0xd182,	// (0x00020326) cell_ai_shortcut_pane_ParamLimits

0xd182,	// (0x00020326) cell_ai_shortcut_pane

0xd198,	// (0x0002033c) cell_ai_shortcut_pane_g1_ParamLimits

0xd198,	// (0x0002033c) cell_ai_shortcut_pane_g1

0x710f,	// (0x0001a2b3) ai_gene_pane_1_cp2

0x7305,	// (0x0001a4a9) ai_gene_pane_2_cp2

0x730d,	// (0x0001a4b1) list_highlight_pane_cp15

0x7316,	// (0x0001a4ba) list_single_idle_plugin_calendar_pane_g1

0x730d,	// (0x0001a4b1) list_highlight_pane_cp17

0x731e,	// (0x0001a4c2) list_single_idle_plugin_calendar_pane_g1_copy1

0x7326,	// (0x0001a4ca) list_single_idle_plugin_player_pane_g1

0x437f,	// (0x00017523) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x00022efc) list_single_idle_plugin_player_pane_g

0x732e,	// (0x0001a4d2) list_single_idle_plugin_player_pane_t1

0x733c,	// (0x0001a4e0) list_single_idle_plugin_player_pane_t2

0x734a,	// (0x0001a4ee) list_single_idle_plugin_player_pane_t3

0x7358,	// (0x0001a4fc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x00022f01) list_single_idle_plugin_player_pane_t

0x7366,	// (0x0001a50a) wait_bar_pane_cp15

0x736e,	// (0x0001a512) grid_ai_notification_pane

0x437f,	// (0x00017523) list_single_idle_plugin_notification_pane_g1

0xd1ba,	// (0x0002035e) cell_ai_notification_pane_ParamLimits

0xd1ba,	// (0x0002035e) cell_ai_notification_pane

0x7384,	// (0x0001a528) cell_ai_notification_pane_g1

0x738c,	// (0x0001a530) cell_ai_notification_pane_t1

0xd1c7,	// (0x0002036b) tb_ext_find_button_pane

0xd1cf,	// (0x00020373) tb_ext_find_pane_g1

0xd1d7,	// (0x0002037b) tb_ext_find_pane_t1

0x18b0,	// (0x00014a54) tb_ext_find_button_pane_g1

0x73b8,	// (0x0001a55c) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x00022f0a) tb_ext_find_button_pane_g

0xcfe2,	// (0x00020186) main_idle_act4_pane_t1_ParamLimits

0xcffa,	// (0x0002019e) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x00022ec8) main_idle_act4_pane_t_ParamLimits

0xd02e,	// (0x000201d2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd045,	// (0x000201e9) sat_plugin_idle_act4_pane_ParamLimits

0xd045,	// (0x000201e9) sat_plugin_idle_act4_pane

0xd1e5,	// (0x00020389) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd1e5,	// (0x00020389) sat_plugin_idle_act4_pane_t1

0xd1fd,	// (0x000203a1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd1fd,	// (0x000203a1) sat_plugin_idle_act4_pane_t2

0xd215,	// (0x000203b9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd215,	// (0x000203b9) sat_plugin_idle_act4_pane_t3

0xd22d,	// (0x000203d1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd22d,	// (0x000203d1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x00022f0f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x00022f0f) sat_plugin_idle_act4_pane_t

0xdf95,	// (0x00021139) popup_battery_window_ParamLimits

0xdf95,	// (0x00021139) popup_battery_window

0xc9b6,	// (0x0001fb5a) bg_popup_sub_pane_cp25_ParamLimits

0xc9b6,	// (0x0001fb5a) bg_popup_sub_pane_cp25

0x740d,	// (0x0001a5b1) popup_battery_window_g1_ParamLimits

0x740d,	// (0x0001a5b1) popup_battery_window_g1

0x7419,	// (0x0001a5bd) popup_battery_window_t1_ParamLimits

0x7419,	// (0x0001a5bd) popup_battery_window_t1

0x742b,	// (0x0001a5cf) popup_battery_window_t2_ParamLimits

0x742b,	// (0x0001a5cf) popup_battery_window_t2

0x0001,

0xfd74,	// (0x00022f18) popup_battery_window_t_ParamLimits

0xfd74,	// (0x00022f18) popup_battery_window_t

0xb5b4,	// (0x0001e758) midp_canvas_pane_ParamLimits

0xb610,	// (0x0001e7b4) midp_keypad_pane_ParamLimits

0xb610,	// (0x0001e7b4) midp_keypad_pane

0x2288,	// (0x0001542c) main_midp_pane_ParamLimits

0x4e18,	// (0x00017fbc) signal_pane_g2_cp_ParamLimits

0xd245,	// (0x000203e9) aid_size_cell_midp_keypad_ParamLimits

0xd245,	// (0x000203e9) aid_size_cell_midp_keypad

0xd263,	// (0x00020407) midp_keyp_game_grid_pane_ParamLimits

0xd263,	// (0x00020407) midp_keyp_game_grid_pane

0xd28a,	// (0x0002042e) midp_keyp_rocker_pane_ParamLimits

0xd28a,	// (0x0002042e) midp_keyp_rocker_pane

0xd2d9,	// (0x0002047d) midp_keyp_sk_left_pane_ParamLimits

0xd2d9,	// (0x0002047d) midp_keyp_sk_left_pane

0xd32f,	// (0x000204d3) midp_keyp_sk_right_pane_ParamLimits

0xd32f,	// (0x000204d3) midp_keyp_sk_right_pane

0xc7f9,	// (0x0001f99d) bg_button_pane_cp03

0xd385,	// (0x00020529) midp_keyp_sk_left_pane_g1

0xc7f9,	// (0x0001f99d) bg_button_pane_cp04

0xd385,	// (0x00020529) midp_keyp_sk_right_pane_g1

0x5358,	// (0x000184fc) midp_keyp_rocker_pane_g1

0xd38d,	// (0x00020531) keyp_game_cell_pane_ParamLimits

0xd38d,	// (0x00020531) keyp_game_cell_pane

0xc7f9,	// (0x0001f99d) bg_button_pane_cp02

0xd3b3,	// (0x00020557) keyp_game_cell_pane_g1

0x96ed,	// (0x0001c891) popup_fep_vkb2_window_ParamLimits

0x96ed,	// (0x0001c891) popup_fep_vkb2_window

0xa367,	// (0x0001d50b) aid_size_cell_vkb2_ParamLimits

0xa367,	// (0x0001d50b) aid_size_cell_vkb2

0xa39d,	// (0x0001d541) popup_fep_vkb2_window_g1_ParamLimits

0xa39d,	// (0x0001d541) popup_fep_vkb2_window_g1

0xa3ed,	// (0x0001d591) vkb2_area_bottom_pane_ParamLimits

0xa3ed,	// (0x0001d591) vkb2_area_bottom_pane

0xa449,	// (0x0001d5ed) vkb2_area_keypad_pane_ParamLimits

0xa449,	// (0x0001d5ed) vkb2_area_keypad_pane

0xa497,	// (0x0001d63b) vkb2_area_top_pane_ParamLimits

0xa497,	// (0x0001d63b) vkb2_area_top_pane

0xa51d,	// (0x0001d6c1) vkb2_top_entry_pane_ParamLimits

0xa51d,	// (0x0001d6c1) vkb2_top_entry_pane

0xa54a,	// (0x0001d6ee) vkb2_top_grid_left_pane_ParamLimits

0xa54a,	// (0x0001d6ee) vkb2_top_grid_left_pane

0xa56a,	// (0x0001d70e) vkb2_top_grid_right_pane_ParamLimits

0xa56a,	// (0x0001d70e) vkb2_top_grid_right_pane

0x00a4,	// (0x00013248) vkb2_cell_keypad_pane_ParamLimits

0x00a4,	// (0x00013248) vkb2_cell_keypad_pane

0xa5b0,	// (0x0001d754) vkb2_area_bottom_grid_pane_ParamLimits

0xa5b0,	// (0x0001d754) vkb2_area_bottom_grid_pane

0xa5da,	// (0x0001d77e) vkb2_area_bottom_pane_g1_ParamLimits

0xa5da,	// (0x0001d77e) vkb2_area_bottom_pane_g1

0xa600,	// (0x0001d7a4) vkb2_area_bottom_pane_g2_ParamLimits

0xa600,	// (0x0001d7a4) vkb2_area_bottom_pane_g2

0xa631,	// (0x0001d7d5) vkb2_area_bottom_pane_g3_ParamLimits

0xa631,	// (0x0001d7d5) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x00022f1d) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x00022f1d) vkb2_area_bottom_pane_g

0x024e,	// (0x000133f2) vkb2_top_cell_left_pane_ParamLimits

0x024e,	// (0x000133f2) vkb2_top_cell_left_pane

0xd3bc,	// (0x00020560) vkb2_top_entry_pane_g1_ParamLimits

0xd3bc,	// (0x00020560) vkb2_top_entry_pane_g1

0xd3ca,	// (0x0002056e) vkb2_top_entry_pane_t1_ParamLimits

0xd3ca,	// (0x0002056e) vkb2_top_entry_pane_t1

0x75d5,	// (0x0001a779) vkb2_top_entry_pane_t2_ParamLimits

0x75d5,	// (0x0001a779) vkb2_top_entry_pane_t2

0x7607,	// (0x0001a7ab) vkb2_top_entry_pane_t3_ParamLimits

0x7607,	// (0x0001a7ab) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x00022f24) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x00022f24) vkb2_top_entry_pane_t

0xa69b,	// (0x0001d83f) vkb2_top_grid_right_pane_g1_ParamLimits

0xa69b,	// (0x0001d83f) vkb2_top_grid_right_pane_g1

0x02b1,	// (0x00013455) vkb2_top_grid_right_pane_g2_ParamLimits

0x02b1,	// (0x00013455) vkb2_top_grid_right_pane_g2

0x02c9,	// (0x0001346d) vkb2_top_grid_right_pane_g3_ParamLimits

0x02c9,	// (0x0001346d) vkb2_top_grid_right_pane_g3

0xa6b1,	// (0x0001d855) vkb2_top_grid_right_pane_g4_ParamLimits

0xa6b1,	// (0x0001d855) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x00022f2b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x00022f2b) vkb2_top_grid_right_pane_g

0x02f7,	// (0x0001349b) vkb2_top_cell_left_pane_g1

0x030e,	// (0x000134b2) vkb2_cell_keypad_pane_g1_ParamLimits

0x030e,	// (0x000134b2) vkb2_cell_keypad_pane_g1

0x762b,	// (0x0001a7cf) vkb2_cell_keypad_pane_t1_ParamLimits

0x762b,	// (0x0001a7cf) vkb2_cell_keypad_pane_t1

0x031c,	// (0x000134c0) vkb2_cell_bottom_grid_pane_ParamLimits

0x031c,	// (0x000134c0) vkb2_cell_bottom_grid_pane

0x0355,	// (0x000134f9) vkb2_cell_bottom_grid_pane_g1

0xd076,	// (0x0002021a) aid_call2_pane_cp02

0xd07e,	// (0x00020222) aid_call_pane_cp02

0xd086,	// (0x0002022a) clock_digital_number_pane_cp10

0xd08e,	// (0x00020232) clock_digital_number_pane_cp11

0xd096,	// (0x0002023a) clock_digital_number_pane_cp12

0xd09e,	// (0x00020242) clock_digital_number_pane_cp13

0xd0a6,	// (0x0002024a) clock_digital_separator_pane_cp10

0x18b0,	// (0x00014a54) popup_clock_digital_analogue_window_cp2_g1

0x18b0,	// (0x00014a54) popup_clock_digital_analogue_window_cp2_g2

0xd0ae,	// (0x00020252) popup_clock_digital_analogue_window_cp2_g3

0x18b0,	// (0x00014a54) popup_clock_digital_analogue_window_cp2_g4

0xd0ae,	// (0x00020252) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x00022ee0) popup_clock_digital_analogue_window_cp2_g

0xd0b6,	// (0x0002025a) popup_clock_digital_analogue_window_cp2_t1

0xd0c4,	// (0x00020268) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x00022eeb) popup_clock_digital_analogue_window_cp2_t

0x5358,	// (0x000184fc) clock_digital_number_pane_cp10_g1

0x5358,	// (0x000184fc) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00022cc7) clock_digital_number_pane_cp10_g

0x5358,	// (0x000184fc) clock_digital_separator_pane_cp10_g1

0x5358,	// (0x000184fc) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00022cc7) clock_digital_separator_pane_cp10_g

0x7056,	// (0x0001a1fa) uniindi_top_pane_g3

0x7067,	// (0x0001a20b) uniindi_top_pane_g4

0x012f,	// (0x000132d3) vkb2_row_keypad_pane_ParamLimits

0x012f,	// (0x000132d3) vkb2_row_keypad_pane

0x0371,	// (0x00013515) vkb2_cell_t_keypad_pane_ParamLimits

0x0371,	// (0x00013515) vkb2_cell_t_keypad_pane

0x0381,	// (0x00013525) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x0381,	// (0x00013525) vkb2_cell_t_keypad_pane_cp08

0x0396,	// (0x0001353a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x0396,	// (0x0001353a) vkb2_cell_t_keypad_pane_cp09

0x03aa,	// (0x0001354e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x03aa,	// (0x0001354e) vkb2_cell_t_keypad_pane_cp01

0x03bb,	// (0x0001355f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x03bb,	// (0x0001355f) vkb2_cell_t_keypad_pane_cp02

0x03cc,	// (0x00013570) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x03cc,	// (0x00013570) vkb2_cell_t_keypad_pane_cp03

0x03dd,	// (0x00013581) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x03dd,	// (0x00013581) vkb2_cell_t_keypad_pane_cp04

0x03ee,	// (0x00013592) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x03ee,	// (0x00013592) vkb2_cell_t_keypad_pane_cp05

0x03ff,	// (0x000135a3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x03ff,	// (0x000135a3) vkb2_cell_t_keypad_pane_cp06

0x0412,	// (0x000135b6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x0412,	// (0x000135b6) vkb2_cell_t_keypad_pane_cp07

0x0427,	// (0x000135cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x0427,	// (0x000135cb) vkb2_cell_t_keypad_pane_cp10

0xf2a4,	// (0x00022448) vkb2_cell_t_keypad_pane_g1

0x7642,	// (0x0001a7e6) vkb2_cell_t_keypad_pane_t1

0xded0,	// (0x00021074) popup_grid_graphic2_window

0xd403,	// (0x000205a7) aid_size_cell_graphic2_ParamLimits

0xd403,	// (0x000205a7) aid_size_cell_graphic2

0xd441,	// (0x000205e5) bg_popup_window_pane_cp21_ParamLimits

0xd441,	// (0x000205e5) bg_popup_window_pane_cp21

0xd44f,	// (0x000205f3) graphic2_pages_pane_ParamLimits

0xd44f,	// (0x000205f3) graphic2_pages_pane

0xd4a7,	// (0x0002064b) grid_graphic2_control_pane_ParamLimits

0xd4a7,	// (0x0002064b) grid_graphic2_control_pane

0xd4ef,	// (0x00020693) grid_graphic2_pane_ParamLimits

0xd4ef,	// (0x00020693) grid_graphic2_pane

0xd57a,	// (0x0002071e) cell_graphic2_pane

0xded0,	// (0x00021074) main_comp_mode_pane

0x685e,	// (0x00019a02) list_ai3_gene_pane_ParamLimits

0xcdb6,	// (0x0001ff5a) bg_popup_window_pane_cp19_ParamLimits

0x6c95,	// (0x00019e39) bg_touch_area_indi_pane_ParamLimits

0x6c95,	// (0x00019e39) bg_touch_area_indi_pane

0x6cab,	// (0x00019e4f) bg_touch_area_indi_pane_cp01_ParamLimits

0x6cab,	// (0x00019e4f) bg_touch_area_indi_pane_cp01

0x6cc1,	// (0x00019e65) bg_touch_area_indi_pane_cp02_ParamLimits

0x6cc1,	// (0x00019e65) bg_touch_area_indi_pane_cp02

0x6cdb,	// (0x00019e7f) bg_touch_area_indi_pane_cp03_ParamLimits

0x6cdb,	// (0x00019e7f) bg_touch_area_indi_pane_cp03

0x6cf5,	// (0x00019e99) popup_slider_window_g1_ParamLimits

0x6d11,	// (0x00019eb5) popup_slider_window_g2_ParamLimits

0x6d2d,	// (0x00019ed1) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x00022e75) popup_slider_window_g_ParamLimits

0x6d93,	// (0x00019f37) popup_slider_window_t1_ParamLimits

0x6e07,	// (0x00019fab) small_volume_slider_vertical_pane_ParamLimits

0xd57a,	// (0x0002071e) cell_graphic2_pane_ParamLimits

0xd5dc,	// (0x00020780) bg_button_pane_cp10_ParamLimits

0xd5dc,	// (0x00020780) bg_button_pane_cp10

0xd5ef,	// (0x00020793) bg_button_pane_cp11_ParamLimits

0xd5ef,	// (0x00020793) bg_button_pane_cp11

0xd602,	// (0x000207a6) graphic2_pages_pane_g1_ParamLimits

0xd602,	// (0x000207a6) graphic2_pages_pane_g1

0xd61d,	// (0x000207c1) graphic2_pages_pane_g2_ParamLimits

0xd61d,	// (0x000207c1) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x00022f39) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x00022f39) graphic2_pages_pane_g

0xd635,	// (0x000207d9) graphic2_pages_pane_t1_ParamLimits

0xd635,	// (0x000207d9) graphic2_pages_pane_t1

0xd64d,	// (0x000207f1) cell_graphic2_control_pane_ParamLimits

0xd64d,	// (0x000207f1) cell_graphic2_control_pane

0xd67b,	// (0x0002081f) cell_graphic2_pane_g1_ParamLimits

0xd67b,	// (0x0002081f) cell_graphic2_pane_g1

0xc7d7,	// (0x0001f97b) cell_graphic2_pane_g2_ParamLimits

0xc7d7,	// (0x0001f97b) cell_graphic2_pane_g2

0xc9fc,	// (0x0001fba0) cell_graphic2_pane_g3_ParamLimits

0xc9fc,	// (0x0001fba0) cell_graphic2_pane_g3

0xc7e4,	// (0x0001f988) cell_graphic2_pane_g4_ParamLimits

0xc7e4,	// (0x0001f988) cell_graphic2_pane_g4

0xd688,	// (0x0002082c) cell_graphic2_pane_g5_ParamLimits

0xd688,	// (0x0002082c) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x00022f3e) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x00022f3e) cell_graphic2_pane_g

0xd6a4,	// (0x00020848) cell_graphic2_pane_t1_ParamLimits

0xd6a4,	// (0x00020848) cell_graphic2_pane_t1

0x35bc,	// (0x00016760) grid_highlight_pane_cp11_ParamLimits

0x35bc,	// (0x00016760) grid_highlight_pane_cp11

0xc9b6,	// (0x0001fb5a) bg_button_pane_cp05

0xd6ed,	// (0x00020891) cell_graphic2_control_pane_g1

0x5358,	// (0x000184fc) bg_touch_area_indi_pane_g1

0x7946,	// (0x0001aaea) aid_cmod_rocker_key_size

0x7950,	// (0x0001aaf4) aid_cmode_itu_key_size

0x795a,	// (0x0001aafe) main_cmode_video_pane

0x7964,	// (0x0001ab08) main_comp_mode_itu_pane

0x7970,	// (0x0001ab14) main_comp_mode_rocker_pane

0x797c,	// (0x0001ab20) cell_cmode_rocker_pane_ParamLimits

0x797c,	// (0x0001ab20) cell_cmode_rocker_pane

0x7990,	// (0x0001ab34) cell_cmode_itu_pane_ParamLimits

0x7990,	// (0x0001ab34) cell_cmode_itu_pane

0xe5cc,	// (0x00021770) bg_button_pane_cp06_ParamLimits

0xe5cc,	// (0x00021770) bg_button_pane_cp06

0x55d3,	// (0x00018777) cell_cmode_rocker_pane_g1_ParamLimits

0x55d3,	// (0x00018777) cell_cmode_rocker_pane_g1

0x6eae,	// (0x0001a052) cell_cmode_rocker_pane_g2_ParamLimits

0x6eae,	// (0x0001a052) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x00022f4e) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x00022f4e) cell_cmode_rocker_pane_g

0xc7f9,	// (0x0001f99d) bg_button_pane_cp07

0x79a7,	// (0x0001ab4b) cell_cmode_itu_pane_g1

0x79b0,	// (0x0001ab54) cell_cmode_itu_pane_t1

0x79be,	// (0x0001ab62) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x00022f53) cell_cmode_itu_pane_t

0x70db,	// (0x0001a27f) aid_touch_ctrl_left

0x70e3,	// (0x0001a287) aid_touch_ctrl_right

0xc7f9,	// (0x0001f99d) compa_mode_pane

0xd715,	// (0x000208b9) aid_cmod_rocker_key_size_cp

0xd71f,	// (0x000208c3) aid_cmode_itu_key_size_cp

0x79e0,	// (0x0001ab84) compa_mode_pane_g1

0x79e8,	// (0x0001ab8c) compa_mode_pane_g2

0x79f0,	// (0x0001ab94) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x00022f58) compa_mode_pane_g

0xd729,	// (0x000208cd) main_comp_mode_itu_pane_cp

0xd731,	// (0x000208d5) main_comp_mode_rocker_pane_cp

0xd739,	// (0x000208dd) cell_cmode_itu_pane_cp_ParamLimits

0xd739,	// (0x000208dd) cell_cmode_itu_pane_cp

0xd74e,	// (0x000208f2) cell_cmode_rocker_pane_cp_ParamLimits

0xd74e,	// (0x000208f2) cell_cmode_rocker_pane_cp

0xe5cc,	// (0x00021770) bg_button_pane_cp06_cp_ParamLimits

0xe5cc,	// (0x00021770) bg_button_pane_cp06_cp

0x55d3,	// (0x00018777) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x55d3,	// (0x00018777) cell_cmode_rocker_pane_g1_cp

0x5358,	// (0x000184fc) cell_cmode_rocker_pane_g2_cp

0xc7f9,	// (0x0001f99d) bg_button_pane_cp07_cp

0xd760,	// (0x00020904) cell_cmode_itu_pane_g1_cp

0xd769,	// (0x0002090d) cell_cmode_itu_pane_t1_cp

0xd769,	// (0x0002090d) cell_cmode_itu_pane_t2_cp

0xbf59,	// (0x0001f0fd) settings_code_pane_cp2

0xc869,	// (0x0001fa0d) bg_popup_window_pane_cp3_ParamLimits

0xe24a,	// (0x000213ee) heading_pane_cp3_ParamLimits

0xe259,	// (0x000213fd) listscroll_popup_graphic_pane_ParamLimits

0xf0b2,	// (0x00022256) fep_hwr_aid_pane_ParamLimits

0xf49f,	// (0x00022643) aid_touch_sctrl_top_ParamLimits

0xf4ba,	// (0x0002265e) sctrl_sk_top_pane_g1_ParamLimits

0xf2a4,	// (0x00022448) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x00022e8e) sctrl_sk_top_pane_g_ParamLimits

0xf4c7,	// (0x0002266b) sctrl_sk_top_pane_t1_ParamLimits

0xf49f,	// (0x00022643) aid_touch_sctrl_bottom_ParamLimits

0xf4c7,	// (0x0002266b) sctrl_sk_bottom_pane_t1_ParamLimits

0x7020,	// (0x0001a1c4) aid_area_touch_clock

0xa4df,	// (0x0001d683) aid_vkb2_area_top_pane_cell_ParamLimits

0xa4df,	// (0x0001d683) aid_vkb2_area_top_pane_cell

0xa58a,	// (0x0001d72e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa58a,	// (0x0001d72e) aid_vkb2_area_bottom_pane_cell

0x758d,	// (0x0001a731) popup_char_count_window

0x7a46,	// (0x0001abea) popup_char_count_window_g1

0x7a4f,	// (0x0001abf3) popup_char_count_window_g2

0x7a58,	// (0x0001abfc) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x00022f5f) popup_char_count_window_g

0x7a61,	// (0x0001ac05) popup_char_count_window_t1

0xf4f9,	// (0x0002269d) popup_fep_char_preview_window_ParamLimits

0xf4f9,	// (0x0002269d) popup_fep_char_preview_window

0xa4ff,	// (0x0001d6a3) vkb2_top_candi_pane_ParamLimits

0xa4ff,	// (0x0001d6a3) vkb2_top_candi_pane

0xd777,	// (0x0002091b) cell_vkb2_top_candi_pane_ParamLimits

0xd777,	// (0x0002091b) cell_vkb2_top_candi_pane

0x043c,	// (0x000135e0) bg_popup_fep_char_preview_window_ParamLimits

0x043c,	// (0x000135e0) bg_popup_fep_char_preview_window

0x044a,	// (0x000135ee) popup_fep_char_preview_window_t1_ParamLimits

0x044a,	// (0x000135ee) popup_fep_char_preview_window_t1

0x7ac0,	// (0x0001ac64) bg_popup_fep_char_preview_window_g1

0x7ac8,	// (0x0001ac6c) bg_popup_fep_char_preview_window_g2

0x7ad0,	// (0x0001ac74) bg_popup_fep_char_preview_window_g3

0x7ad8,	// (0x0001ac7c) bg_popup_fep_char_preview_window_g4

0x7ae0,	// (0x0001ac84) bg_popup_fep_char_preview_window_g5

0x7ae8,	// (0x0001ac8c) bg_popup_fep_char_preview_window_g6

0x7af0,	// (0x0001ac94) bg_popup_fep_char_preview_window_g7

0x7af8,	// (0x0001ac9c) bg_popup_fep_char_preview_window_g8

0x7b00,	// (0x0001aca4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x00022f66) bg_popup_fep_char_preview_window_g

0xf2a4,	// (0x00022448) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf2a4,	// (0x00022448) cell_vkb2_top_candi_pane_g1

0xf2b2,	// (0x00022456) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf2b2,	// (0x00022456) cell_vkb2_top_candi_pane_g2

0x78fd,	// (0x0001aaa1) cell_vkb2_top_candi_pane_g3_ParamLimits

0x78fd,	// (0x0001aaa1) cell_vkb2_top_candi_pane_g3

0x048c,	// (0x00013630) cell_vkb2_top_candi_pane_g4_ParamLimits

0x048c,	// (0x00013630) cell_vkb2_top_candi_pane_g4

0x5b05,	// (0x00018ca9) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5b05,	// (0x00018ca9) cell_vkb2_top_candi_pane_g5

0x04ad,	// (0x00013651) cell_vkb2_top_candi_pane_g6_ParamLimits

0x04ad,	// (0x00013651) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x00022f7b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x00022f7b) cell_vkb2_top_candi_pane_g

0x04bb,	// (0x0001365f) cell_vkb2_top_candi_pane_t1

0xef20,	// (0x000220c4) aid_size_touch_slider_mark_ParamLimits

0xef20,	// (0x000220c4) aid_size_touch_slider_mark

0xd48b,	// (0x0002062f) grid_graphic2_catg_pane_ParamLimits

0xd48b,	// (0x0002062f) grid_graphic2_catg_pane

0xd549,	// (0x000206ed) popup_grid_graphic2_window_t1_ParamLimits

0xd549,	// (0x000206ed) popup_grid_graphic2_window_t1

0xd55f,	// (0x00020703) popup_grid_graphic2_window_t2_ParamLimits

0xd55f,	// (0x00020703) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x00022f34) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x00022f34) popup_grid_graphic2_window_t

0xc9b6,	// (0x0001fb5a) bg_button_pane_cp05_ParamLimits

0xd6ed,	// (0x00020891) cell_graphic2_control_pane_g1_ParamLimits

0xd7e1,	// (0x00020985) cell_graphic2_catg_pane_ParamLimits

0xd7e1,	// (0x00020985) cell_graphic2_catg_pane

0xc7f9,	// (0x0001f99d) bg_button_pane_cp12

0xd7f3,	// (0x00020997) cell_graphic2_catg_pane_g1

0x6fec,	// (0x0001a190) cell_tb_ext_pane_t1_ParamLimits

0x026e,	// (0x00013412) vkb2_top_cell_right_narrow_pane_ParamLimits

0x026e,	// (0x00013412) vkb2_top_cell_right_narrow_pane

0x0286,	// (0x0001342a) vkb2_top_cell_right_wide_pane_ParamLimits

0x0286,	// (0x0001342a) vkb2_top_cell_right_wide_pane

0xeee0,	// (0x00022084) bg_vkb2_func_pane_ParamLimits

0xeee0,	// (0x00022084) bg_vkb2_func_pane

0x02f7,	// (0x0001349b) vkb2_top_cell_left_pane_g1_ParamLimits

0xeee0,	// (0x00022084) bg_vkb2_fuc_pane_cp03_ParamLimits

0xeee0,	// (0x00022084) bg_vkb2_fuc_pane_cp03

0x0355,	// (0x000134f9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2808,	// (0x000159ac) bg_vkb2_func_pane_g1

0x2810,	// (0x000159b4) bg_vkb2_func_pane_g2

0x2820,	// (0x000159c4) bg_vkb2_func_pane_g3

0x2818,	// (0x000159bc) bg_vkb2_func_pane_g4

0x2828,	// (0x000159cc) bg_vkb2_func_pane_g5

0x2830,	// (0x000159d4) bg_vkb2_func_pane_g6

0x2838,	// (0x000159dc) bg_vkb2_func_pane_g7

0x2840,	// (0x000159e4) bg_vkb2_func_pane_g8

0x2800,	// (0x000159a4) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x00022f88) bg_vkb2_func_pane_g

0xeee0,	// (0x00022084) bg_vkb2_fuc_pane_cp01_ParamLimits

0xeee0,	// (0x00022084) bg_vkb2_fuc_pane_cp01

0x02f7,	// (0x0001349b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x02f7,	// (0x0001349b) vkb2_top_cell_right_wide_pane_g1

0xeee0,	// (0x00022084) bg_vkb2_fuc_pane_cp02_ParamLimits

0xeee0,	// (0x00022084) bg_vkb2_fuc_pane_cp02

0x0355,	// (0x000134f9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x0355,	// (0x000134f9) vkb2_top_cell_right_narrow_pane_g1

0xccf8,	// (0x0001fe9c) aid_touch_area_decrease_ParamLimits

0xccf8,	// (0x0001fe9c) aid_touch_area_decrease

0xcd32,	// (0x0001fed6) aid_touch_area_increase_ParamLimits

0xcd32,	// (0x0001fed6) aid_touch_area_increase

0xcd5a,	// (0x0001fefe) aid_touch_area_mute_ParamLimits

0xcd5a,	// (0x0001fefe) aid_touch_area_mute

0xcd82,	// (0x0001ff26) aid_touch_area_slider_ParamLimits

0xcd82,	// (0x0001ff26) aid_touch_area_slider

0xcdc2,	// (0x0001ff66) popup_slider_window_g4_ParamLimits

0xcdc2,	// (0x0001ff66) popup_slider_window_g4

0xcdea,	// (0x0001ff8e) popup_slider_window_g5_ParamLimits

0xcdea,	// (0x0001ff8e) popup_slider_window_g5

0xce1e,	// (0x0001ffc2) popup_slider_window_g6_ParamLimits

0xce1e,	// (0x0001ffc2) popup_slider_window_g6

0x6dc1,	// (0x00019f65) popup_slider_window_t2_ParamLimits

0x6dc1,	// (0x00019f65) popup_slider_window_t2

0x0001,

0xfcde,	// (0x00022e82) popup_slider_window_t_ParamLimits

0xfcde,	// (0x00022e82) popup_slider_window_t

0xce3a,	// (0x0001ffde) slider_pane_ParamLimits

0xce3a,	// (0x0001ffde) slider_pane

0x7b23,	// (0x0001acc7) slider_pane_g1_ParamLimits

0x7b23,	// (0x0001acc7) slider_pane_g1

0x7b37,	// (0x0001acdb) slider_pane_g2_ParamLimits

0x7b37,	// (0x0001acdb) slider_pane_g2

0x7b4d,	// (0x0001acf1) slider_pane_g3_ParamLimits

0x7b4d,	// (0x0001acf1) slider_pane_g3

0x0003,

0xfdf7,	// (0x00022f9b) slider_pane_g_ParamLimits

0xfdf7,	// (0x00022f9b) slider_pane_g

0xa046,	// (0x0001d1ea) popup_tb_float_extension_window_ParamLimits

0xa046,	// (0x0001d1ea) popup_tb_float_extension_window

0x7b79,	// (0x0001ad1d) aid_size_cell_tb_float_ext

0xc7f9,	// (0x0001f99d) bg_popup_sub_window_cp28

0x7b85,	// (0x0001ad29) grid_tb_float_ext_pane

0x7b91,	// (0x0001ad35) cell_tb_float_ext_pane_ParamLimits

0x7b91,	// (0x0001ad35) cell_tb_float_ext_pane

0x7bad,	// (0x0001ad51) cell_tb_float_ext_pane_g1

0x7bb6,	// (0x0001ad5a) grid_highlight_pane_cp12

0xa2d8,	// (0x0001d47c) cell_last_hwr_side_pane_ParamLimits

0xa2d8,	// (0x0001d47c) cell_last_hwr_side_pane

0x5358,	// (0x000184fc) cell_last_hwr_side_pane_g1

0x7bbf,	// (0x0001ad63) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x00022fa4) cell_last_hwr_side_pane_g

0xa666,	// (0x0001d80a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa666,	// (0x0001d80a) vkb2_area_bottom_space_btn_pane

0xf2a4,	// (0x00022448) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7642,	// (0x0001a7e6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x04bb,	// (0x0001365f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x04d9,	// (0x0001367d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x04d9,	// (0x0001367d) vkb2_area_bottom_space_btn_pane_g1

0x0513,	// (0x000136b7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x0513,	// (0x000136b7) vkb2_area_bottom_space_btn_pane_g2

0x0549,	// (0x000136ed) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x0549,	// (0x000136ed) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x00022fa9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x00022fa9) vkb2_area_bottom_space_btn_pane_g

0xf169,	// (0x0002230d) cel_fep_hwr_func_pane_ParamLimits

0xf169,	// (0x0002230d) cel_fep_hwr_func_pane

0xa2ad,	// (0x0001d451) cell_hwr_side_button_pane_ParamLimits

0xa2ad,	// (0x0001d451) cell_hwr_side_button_pane

0x7020,	// (0x0001a1c4) aid_area_touch_clock_ParamLimits

0xc9b6,	// (0x0001fb5a) bg_uniindi_top_pane_ParamLimits

0x7034,	// (0x0001a1d8) uniindi_top_pane_g1_ParamLimits

0x704a,	// (0x0001a1ee) uniindi_top_pane_g2_ParamLimits

0x7056,	// (0x0001a1fa) uniindi_top_pane_g3_ParamLimits

0x7067,	// (0x0001a20b) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x00022eba) uniindi_top_pane_g_ParamLimits

0x7074,	// (0x0001a218) uniindi_top_pane_t1_ParamLimits

0xc9b6,	// (0x0001fb5a) bg_vkb2_func_pane_cp01_ParamLimits

0xc9b6,	// (0x0001fb5a) bg_vkb2_func_pane_cp01

0x7bc8,	// (0x0001ad6c) cel_fep_hwr_func_pane_g1_ParamLimits

0x7bc8,	// (0x0001ad6c) cel_fep_hwr_func_pane_g1

0xc9b6,	// (0x0001fb5a) bg_vkb2_func_pane_cp02_ParamLimits

0xc9b6,	// (0x0001fb5a) bg_vkb2_func_pane_cp02

0x7bc8,	// (0x0001ad6c) cell_hwr_side_button_pane_g1_ParamLimits

0x7bc8,	// (0x0001ad6c) cell_hwr_side_button_pane_g1

0x264b,	// (0x000157ef) status_pane_g4_ParamLimits

0x264b,	// (0x000157ef) status_pane_g4

0x2665,	// (0x00015809) status_pane_t1

0x510b,	// (0x000182af) form2_midp_gauge_slider_cont_pane

0x5113,	// (0x000182b7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc281,	// (0x0001f425) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc293,	// (0x0001f437) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x00022c7a) form2_midp_gauge_slider_pane_t_ParamLimits

0x5149,	// (0x000182ed) form2_midp_slider_pane_ParamLimits

0xf4eb,	// (0x0002268f) aid_size_cell_func_vkb2_ParamLimits

0xf4eb,	// (0x0002268f) aid_size_cell_func_vkb2

0x7b65,	// (0x0001ad09) slider_pane_g4_ParamLimits

0x7b65,	// (0x0001ad09) slider_pane_g4

0xa6cf,	// (0x0001d873) form2_midp_gauge_slider_pane_t2_cp01

0xa6dd,	// (0x0001d881) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa6dd,	// (0x0001d881) form2_midp_gauge_slider_pane_t3_cp01

0x05be,	// (0x00013762) form2_midp_slider_pane_cp01

0xc7f9,	// (0x0001f99d) navi_smil_pane

0x7c01,	// (0x0001ada5) navi_smil_pane_g1

0x7c09,	// (0x0001adad) navi_smil_pane_t1

0x7bd6,	// (0x0001ad7a) form2_midp_slider_pane_g1

0x7bdf,	// (0x0001ad83) form2_midp_slider_pane_g2

0x7be7,	// (0x0001ad8b) form2_midp_slider_pane_g3

0x7bd6,	// (0x0001ad7a) form2_midp_slider_pane_g4

0xd7fc,	// (0x000209a0) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x00022fb2) form2_midp_slider_pane_g

0x0583,	// (0x00013727) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x0583,	// (0x00013727) vkb2_area_bottom_space_btn_pane_g4

0xb897,	// (0x0001ea3b) lc0_navi_pane_ParamLimits

0xb897,	// (0x0001ea3b) lc0_navi_pane

0xb907,	// (0x0001eaab) lc0_stat_indi_pane_ParamLimits

0xb907,	// (0x0001eaab) lc0_stat_indi_pane

0xb91c,	// (0x0001eac0) ls0_title_pane_ParamLimits

0xb91c,	// (0x0001eac0) ls0_title_pane

0xe5cc,	// (0x00021770) bg_popup_sub_pane_cp14_ParamLimits

0x7007,	// (0x0001a1ab) list_uniindi_pane_ParamLimits

0x7013,	// (0x0001a1b7) uniindi_top_pane_ParamLimits

0x70b3,	// (0x0001a257) list_single_uniindi_pane_g1_ParamLimits

0x70c6,	// (0x0001a26a) list_single_uniindi_pane_t1_ParamLimits

0xa6fa,	// (0x0001d89e) lc0_stat_clock_pane_ParamLimits

0xa6fa,	// (0x0001d89e) lc0_stat_clock_pane

0xd805,	// (0x000209a9) lc0_stat_indi_pane_g1_ParamLimits

0xd805,	// (0x000209a9) lc0_stat_indi_pane_g1

0xd812,	// (0x000209b6) lc0_stat_indi_pane_g2_ParamLimits

0xd812,	// (0x000209b6) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x00022fbd) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x00022fbd) lc0_stat_indi_pane_g

0xa707,	// (0x0001d8ab) lc0_uni_indicator_pane_ParamLimits

0xa707,	// (0x0001d8ab) lc0_uni_indicator_pane

0xd81f,	// (0x000209c3) ls0_title_pane_g1_ParamLimits

0xd81f,	// (0x000209c3) ls0_title_pane_g1

0xd833,	// (0x000209d7) ls0_title_pane_t1_ParamLimits

0xd833,	// (0x000209d7) ls0_title_pane_t1

0xa714,	// (0x0001d8b8) lc0_uni_indicator_pane_g1_ParamLimits

0xa714,	// (0x0001d8b8) lc0_uni_indicator_pane_g1

0x7c7b,	// (0x0001ae1f) lc0_stat_clock_pane_t1

0xded0,	// (0x00021074) main_ai5_pane

0x7c89,	// (0x0001ae2d) ai5_sk_pane_ParamLimits

0x7c89,	// (0x0001ae2d) ai5_sk_pane

0xd861,	// (0x00020a05) cell_ai5_widget_pane_ParamLimits

0xd861,	// (0x00020a05) cell_ai5_widget_pane

0xd8d0,	// (0x00020a74) aid_size_cell_widget_grid

0x7d47,	// (0x0001aeeb) bg_ai5_widget_pane_ParamLimits

0x7d47,	// (0x0001aeeb) bg_ai5_widget_pane

0xd904,	// (0x00020aa8) cell_ai5_widget_pane_g2

0xd918,	// (0x00020abc) cell_ai5_widget_pane_g3

0xd932,	// (0x00020ad6) cell_ai5_widget_pane_g4

0xd942,	// (0x00020ae6) cell_ai5_widget_pane_g5

0xd952,	// (0x00020af6) cell_ai5_widget_pane_g6

0xd95e,	// (0x00020b02) cell_ai5_widget_pane_g7

0xd982,	// (0x00020b26) cell_ai5_widget_pane_t1_ParamLimits

0xd982,	// (0x00020b26) cell_ai5_widget_pane_t1

0x7ea6,	// (0x0001b04a) cell_ai5_widget_pane_t2_ParamLimits

0x7ea6,	// (0x0001b04a) cell_ai5_widget_pane_t2

0x7ebe,	// (0x0001b062) cell_ai5_widget_pane_t3_ParamLimits

0x7ebe,	// (0x0001b062) cell_ai5_widget_pane_t3

0xd99f,	// (0x00020b43) cell_ai5_widget_pane_t4_ParamLimits

0xd99f,	// (0x00020b43) cell_ai5_widget_pane_t4

0xd9c5,	// (0x00020b69) cell_ai5_widget_pane_t5_ParamLimits

0xd9c5,	// (0x00020b69) cell_ai5_widget_pane_t5

0x7f1c,	// (0x0001b0c0) cell_ai5_widget_pane_t6_ParamLimits

0x7f1c,	// (0x0001b0c0) cell_ai5_widget_pane_t6

0x7f2e,	// (0x0001b0d2) cell_ai5_widget_pane_t7_ParamLimits

0x7f2e,	// (0x0001b0d2) cell_ai5_widget_pane_t7

0x7f4d,	// (0x0001b0f1) cell_ai5_widget_pane_t8_ParamLimits

0x7f4d,	// (0x0001b0f1) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x00022fdd) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x00022fdd) cell_ai5_widget_pane_t

0xda57,	// (0x00020bfb) grid_ai5_widget_pane

0xe5cc,	// (0x00021770) highlight_cell_ai5_widget_pane_ParamLimits

0xe5cc,	// (0x00021770) highlight_cell_ai5_widget_pane

0xda65,	// (0x00020c09) ai5_sk_left_pane

0xda6f,	// (0x00020c13) ai5_sk_middle_pane

0xda79,	// (0x00020c1d) ai5_sk_right_pane

0x7ffd,	// (0x0001b1a1) bg_ai5_widget_pane_g1_ParamLimits

0x7ffd,	// (0x0001b1a1) bg_ai5_widget_pane_g1

0x8009,	// (0x0001b1ad) bg_ai5_widget_pane_g2_ParamLimits

0x8009,	// (0x0001b1ad) bg_ai5_widget_pane_g2

0x8015,	// (0x0001b1b9) bg_ai5_widget_pane_g3_ParamLimits

0x8015,	// (0x0001b1b9) bg_ai5_widget_pane_g3

0x8021,	// (0x0001b1c5) bg_ai5_widget_pane_g4_ParamLimits

0x8021,	// (0x0001b1c5) bg_ai5_widget_pane_g4

0x802d,	// (0x0001b1d1) bg_ai5_widget_pane_g5_ParamLimits

0x802d,	// (0x0001b1d1) bg_ai5_widget_pane_g5

0x8039,	// (0x0001b1dd) bg_ai5_widget_pane_g6_ParamLimits

0x8039,	// (0x0001b1dd) bg_ai5_widget_pane_g6

0x8045,	// (0x0001b1e9) bg_ai5_widget_pane_g7_ParamLimits

0x8045,	// (0x0001b1e9) bg_ai5_widget_pane_g7

0x8051,	// (0x0001b1f5) bg_ai5_widget_pane_g8_ParamLimits

0x8051,	// (0x0001b1f5) bg_ai5_widget_pane_g8

0x805d,	// (0x0001b201) bg_ai5_widget_pane_g9_ParamLimits

0x805d,	// (0x0001b201) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x00022ff6) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x00022ff6) bg_ai5_widget_pane_g

0xdaaf,	// (0x00020c53) cell_shortcut_ai5_widget_pane_ParamLimits

0xdaaf,	// (0x00020c53) cell_shortcut_ai5_widget_pane

0x1f59,	// (0x000150fd) bg_cell_shortcut_ai5_widget_pane

0x80a8,	// (0x0001b24c) cell_grid_ai5_widget_pane_g1

0x1f59,	// (0x000150fd) highlight_cell_shortcut_ai5_widget_pane

0x2808,	// (0x000159ac) ai5_sk_left_pane_g1

0x80b1,	// (0x0001b255) ai5_sk_left_pane_g2

0x80b9,	// (0x0001b25d) ai5_sk_left_pane_g3

0x80c1,	// (0x0001b265) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x00023009) ai5_sk_left_pane_g

0x80c9,	// (0x0001b26d) ai5_sk_left_pane_t1

0x2810,	// (0x000159b4) ai5_sk_right_pane_g1

0x80d7,	// (0x0001b27b) ai5_sk_right_pane_g2

0x80df,	// (0x0001b283) ai5_sk_right_pane_g3

0x80e7,	// (0x0001b28b) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x00023012) ai5_sk_right_pane_g

0x80ef,	// (0x0001b293) ai5_sk_right_pane_t1

0x2810,	// (0x000159b4) ai5_sk_middle_pane_g1

0x2808,	// (0x000159ac) ai5_sk_middle_pane_g2

0x2828,	// (0x000159cc) ai5_sk_middle_pane_g3

0x80df,	// (0x0001b283) ai5_sk_middle_pane_g4

0x80b9,	// (0x0001b25d) ai5_sk_middle_pane_g5

0x80fd,	// (0x0001b2a1) ai5_sk_middle_pane_g6

0xdac2,	// (0x00020c66) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x0002301b) ai5_sk_middle_pane_g

0xb781,	// (0x0001e925) aid_touch_area_size_lc0_ParamLimits

0xb781,	// (0x0001e925) aid_touch_area_size_lc0

0xf2d3,	// (0x00022477) cell_hwr_candidate_pane_t1_ParamLimits

0x230e,	// (0x000154b2) aid_touch_navi_pane

0xba27,	// (0x0001ebcb) status_dt_navi_pane_ParamLimits

0xba27,	// (0x0001ebcb) status_dt_navi_pane

0xba3f,	// (0x0001ebe3) status_dt_sta_pane_ParamLimits

0xba3f,	// (0x0001ebe3) status_dt_sta_pane

0xdaca,	// (0x00020c6e) dt_sta_controll_pane

0xdad7,	// (0x00020c7b) dt_sta_indi_pane

0xdae4,	// (0x00020c88) dt_sta_title_pane

0xc9b6,	// (0x0001fb5a) bg_dt_sta_indi_pane_ParamLimits

0xc9b6,	// (0x0001fb5a) bg_dt_sta_indi_pane

0xdaf6,	// (0x00020c9a) dt_sta_battery_pane

0xdafe,	// (0x00020ca2) dt_sta_indi_pane_g1

0xdb07,	// (0x00020cab) dt_sta_indi_pane_g2

0xdb10,	// (0x00020cb4) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x0002302a) dt_sta_indi_pane_g

0xdb19,	// (0x00020cbd) dt_sta_signal_pane

0xe5cc,	// (0x00021770) bg_dt_sta_title_pane_ParamLimits

0xe5cc,	// (0x00021770) bg_dt_sta_title_pane

0xdb22,	// (0x00020cc6) dt_sta_title_pane_g1

0xdb2a,	// (0x00020cce) dt_sta_title_pane_t1_ParamLimits

0xdb2a,	// (0x00020cce) dt_sta_title_pane_t1

0xc7f9,	// (0x0001f99d) bg_dt_sta_control_pane

0xdb3f,	// (0x00020ce3) dt_sta_controll_pane_g1

0xdb48,	// (0x00020cec) bg_dt_sta_title_pane_g1

0xdb51,	// (0x00020cf5) bg_dt_sta_title_pane_g2

0xdb5a,	// (0x00020cfe) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x00023031) bg_dt_sta_title_pane_g

0x5358,	// (0x000184fc) bg_dt_sta_indi_pane_g1

0x81ab,	// (0x0001b34f) dt_sta_signal_pane_g1

0x81b3,	// (0x0001b357) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x00023038) dt_sta_signal_pane_g

0x81bb,	// (0x0001b35f) dt_sta_battery_pane_g1

0x81c4,	// (0x0001b368) dt_sta_battery_pane_t1

0x5358,	// (0x000184fc) bg_dt_sta_control_pane_g1

0x19ba,	// (0x00014b5e) fep_china_uni_eep_pane

0x19c2,	// (0x00014b66) fep_china_uni_entry_pane_ParamLimits

0x19d2,	// (0x00014b76) popup_fep_china_uni_window_g1_ParamLimits

0x19e2,	// (0x00014b86) popup_fep_china_uni_window_g2_ParamLimits

0x19e2,	// (0x00014b86) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00022897) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00022897) popup_fep_china_uni_window_g

0x81d3,	// (0x0001b377) fep_china_uni_eep_pane_g1

0x81db,	// (0x0001b37f) fep_china_uni_eep_pane_t1

0x7bf8,	// (0x0001ad9c) aid_touch_area_size_smil_player

0x2462,	// (0x00015606) lc0_clock_pane

0x2659,	// (0x000157fd) status_pane_g5_ParamLimits

0x2659,	// (0x000157fd) status_pane_g5

0x9b6e,	// (0x0001cd12) popup_keymap_window

0x261f,	// (0x000157c3) status_icon_pane

0xd918,	// (0x00020abc) cell_ai5_widget_pane_g3_ParamLimits

0xd932,	// (0x00020ad6) cell_ai5_widget_pane_g4_ParamLimits

0xd942,	// (0x00020ae6) cell_ai5_widget_pane_g5_ParamLimits

0x7e29,	// (0x0001afcd) cell_ai5_widget_pane_g8_ParamLimits

0x7e29,	// (0x0001afcd) cell_ai5_widget_pane_g8

0x7e3d,	// (0x0001afe1) cell_ai5_widget_pane_g9_ParamLimits

0x7e3d,	// (0x0001afe1) cell_ai5_widget_pane_g9

0x7e51,	// (0x0001aff5) cell_ai5_widget_pane_g10_ParamLimits

0x7e51,	// (0x0001aff5) cell_ai5_widget_pane_g10

0x81ea,	// (0x0001b38e) status_icon_pane_g1

0xc7f9,	// (0x0001f99d) bg_popup_sub_pane_cp13

0x81f2,	// (0x0001b396) popup_keymap_window_t1

0xb70f,	// (0x0001e8b3) control_pane_g6_ParamLimits

0xb70f,	// (0x0001e8b3) control_pane_g6

0xb71c,	// (0x0001e8c0) control_pane_g7_ParamLimits

0xb71c,	// (0x0001e8c0) control_pane_g7

0xb729,	// (0x0001e8cd) control_pane_g8_ParamLimits

0xb729,	// (0x0001e8cd) control_pane_g8

0xdaca,	// (0x00020c6e) dt_sta_controll_pane_ParamLimits

0xdad7,	// (0x00020c7b) dt_sta_indi_pane_ParamLimits

0xdae4,	// (0x00020c88) dt_sta_title_pane_ParamLimits

0xe487,	// (0x0002162b) aid_size_touch_scroll_bar_cale

0xdfad,	// (0x00021151) popup_discreet_window_ParamLimits

0xdfad,	// (0x00021151) popup_discreet_window

0x9737,	// (0x0001c8db) popup_sk_window

0x2f45,	// (0x000160e9) bg_popup_sub_pane_cp28_ParamLimits

0x2f45,	// (0x000160e9) bg_popup_sub_pane_cp28

0x8200,	// (0x0001b3a4) popup_discreet_window_g1_ParamLimits

0x8200,	// (0x0001b3a4) popup_discreet_window_g1

0x8220,	// (0x0001b3c4) popup_discreet_window_t1_ParamLimits

0x8220,	// (0x0001b3c4) popup_discreet_window_t1

0x823e,	// (0x0001b3e2) popup_discreet_window_t2_ParamLimits

0x823e,	// (0x0001b3e2) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x0002303d) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x0002303d) popup_discreet_window_t

0x05f4,	// (0x00013798) popup_sk_window_g1

0x05fe,	// (0x000137a2) popup_sk_window_g2

0x0001,

0xfea0,	// (0x00023044) popup_sk_window_g

0x0606,	// (0x000137aa) popup_sk_window_t1

0x0614,	// (0x000137b8) popup_sk_window_t1_copy1

0xd904,	// (0x00020aa8) cell_ai5_widget_pane_g2_ParamLimits

0xd9e5,	// (0x00020b89) cell_ai5_widget_pane_t9_ParamLimits

0xd9e5,	// (0x00020b89) cell_ai5_widget_pane_t9

0xc7f9,	// (0x0001f99d) main_fep_fshwr2_pane

0xa733,	// (0x0001d8d7) aid_fshwr2_btn_pane

0xa747,	// (0x0001d8eb) aid_fshwr2_syb_pane

0xa75b,	// (0x0001d8ff) aid_fshwr2_txt_pane

0xa76b,	// (0x0001d90f) fshwr2_func_candi_pane

0xa78d,	// (0x0001d931) fshwr2_hwr_syb_pane

0xa7b1,	// (0x0001d955) fshwr2_icf_pane

0xded0,	// (0x00021074) fshwr2_icf_bg_pane

0x06ae,	// (0x00013852) fshwr2_icf_pane_t1_ParamLimits

0x06ae,	// (0x00013852) fshwr2_icf_pane_t1

0x18b0,	// (0x00014a54) fshwr2_func_candi_pane_g1

0xdb63,	// (0x00020d07) fshwr2_func_candi_row_pane_ParamLimits

0xdb63,	// (0x00020d07) fshwr2_func_candi_row_pane

0xa7e1,	// (0x0001d985) cell_fshwr2_syb_pane_ParamLimits

0xa7e1,	// (0x0001d985) cell_fshwr2_syb_pane

0x06e7,	// (0x0001388b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x06e7,	// (0x0001388b) fshwr2_hwr_syb_pane_g1

0xded0,	// (0x00021074) bg_popup_call_pane_cp01

0xa809,	// (0x0001d9ad) fshwr2_func_candi_cell_pane_ParamLimits

0xa809,	// (0x0001d9ad) fshwr2_func_candi_cell_pane

0x2d25,	// (0x00015ec9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2d25,	// (0x00015ec9) fshwr2_func_candi_cell_bg_pane

0xa854,	// (0x0001d9f8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa854,	// (0x0001d9f8) fshwr2_func_candi_cell_pane_g1

0xa88b,	// (0x0001da2f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa88b,	// (0x0001da2f) fshwr2_func_candi_cell_pane_t1

0xded0,	// (0x00021074) bg_button_pane_cp08

0x2288,	// (0x0001542c) cell_fshwr2_syb_bg_pane

0xa8a6,	// (0x0001da4a) cell_fshwr2_syb_bg_pane_g1

0xa8ba,	// (0x0001da5e) cell_fshwr2_syb_bg_pane_t1

0xe5cc,	// (0x00021770) main_tmo_pane

0xbd5e,	// (0x0001ef02) uni_indicator_pane_g1_ParamLimits

0xbd74,	// (0x0001ef18) uni_indicator_pane_g2_ParamLimits

0xbd8a,	// (0x0001ef2e) uni_indicator_pane_g3_ParamLimits

0xbd9d,	// (0x0001ef41) uni_indicator_pane_g4_ParamLimits

0xbd9d,	// (0x0001ef41) uni_indicator_pane_g4

0x3abc,	// (0x00016c60) uni_indicator_pane_g5_ParamLimits

0x3abc,	// (0x00016c60) uni_indicator_pane_g5

0x3abc,	// (0x00016c60) uni_indicator_pane_g6_ParamLimits

0x3abc,	// (0x00016c60) uni_indicator_pane_g6

0xf8f2,	// (0x00022a96) uni_indicator_pane_g_ParamLimits

0xccc8,	// (0x0001fe6c) popup_tmo_note_window_ParamLimits

0xccc8,	// (0x0001fe6c) popup_tmo_note_window

0xf51b,	// (0x000226bf) fshwr2_bg_pane

0xa87c,	// (0x0001da20) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa87c,	// (0x0001da20) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x00023049) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x00023049) fshwr2_func_candi_cell_pane_g

0xf28c,	// (0x00022430) bg_popup_window_pane_cp01

0x07a0,	// (0x00013944) bg_popup_window_pane_g1_cp01

0x82b3,	// (0x0001b457) bg_popup_window_pane_cp22_ParamLimits

0x82b3,	// (0x0001b457) bg_popup_window_pane_cp22

0x82c1,	// (0x0001b465) listscroll_tmo_link_pane_ParamLimits

0x82c1,	// (0x0001b465) listscroll_tmo_link_pane

0x8301,	// (0x0001b4a5) popup_tmo_note_window_g1_ParamLimits

0x8301,	// (0x0001b4a5) popup_tmo_note_window_g1

0x830e,	// (0x0001b4b2) tmo_note_info_pane_ParamLimits

0x830e,	// (0x0001b4b2) tmo_note_info_pane

0xdb8a,	// (0x00020d2e) list_tmo_note_info_pane_g1_ParamLimits

0xdb8a,	// (0x00020d2e) list_tmo_note_info_pane_g1

0x833f,	// (0x0001b4e3) list_tmo_note_info_pane_g2_ParamLimits

0x833f,	// (0x0001b4e3) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x0002304e) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x0002304e) list_tmo_note_info_pane_g

0x835b,	// (0x0001b4ff) list_tmo_note_info_text_pane_ParamLimits

0x835b,	// (0x0001b4ff) list_tmo_note_info_text_pane

0x83e0,	// (0x0001b584) list_tmo_link_pane

0x83ed,	// (0x0001b591) scroll_pane_cp20

0x83fa,	// (0x0001b59e) list_single_tmo_link_pane_ParamLimits

0x83fa,	// (0x0001b59e) list_single_tmo_link_pane

0x840a,	// (0x0001b5ae) list_single_tmo_link_pane_t1

0x8418,	// (0x0001b5bc) list_tmo_note_info_text_pane_t1_ParamLimits

0x8418,	// (0x0001b5bc) list_tmo_note_info_text_pane_t1

0xb22c,	// (0x0001e3d0) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb22c,	// (0x0001e3d0) aid_size_touch_scroll_bar_cp01

0xb16c,	// (0x0001e310) aid_size_touch_slider_marker

0x9727,	// (0x0001c8cb) popup_settings_window_ParamLimits

0x9727,	// (0x0001c8cb) popup_settings_window

0x22bc,	// (0x00015460) popup_candi_list_indi_window

0x230e,	// (0x000154b2) aid_touch_navi_pane_ParamLimits

0xf473,	// (0x00022617) rs_clock_indi_pane

0xf47c,	// (0x00022620) sctrl_sk_bottom_pane_ParamLimits

0xf48d,	// (0x00022631) sctrl_sk_top_pane_ParamLimits

0xf513,	// (0x000226b7) popup_fep_tooltip_window

0xd8d0,	// (0x00020a74) aid_size_cell_widget_grid_ParamLimits

0xd8ef,	// (0x00020a93) cell_ai5_widget_pane_g1_ParamLimits

0xd8ef,	// (0x00020a93) cell_ai5_widget_pane_g1

0xd952,	// (0x00020af6) cell_ai5_widget_pane_g6_ParamLimits

0xd95e,	// (0x00020b02) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x00022fc2) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x00022fc2) cell_ai5_widget_pane_g

0xda14,	// (0x00020bb8) cell_ai5_widget_pane_t10_ParamLimits

0xda14,	// (0x00020bb8) cell_ai5_widget_pane_t10

0xda57,	// (0x00020bfb) grid_ai5_widget_pane_ParamLimits

0xda83,	// (0x00020c27) cell_contacts_ai5_widget_pane_ParamLimits

0xda83,	// (0x00020c27) cell_contacts_ai5_widget_pane

0x8253,	// (0x0001b3f7) popup_discreet_window_t3_ParamLimits

0x8253,	// (0x0001b3f7) popup_discreet_window_t3

0xa7cd,	// (0x0001d971) popup_fshwr2_char_preview_window_ParamLimits

0xa7cd,	// (0x0001d971) popup_fshwr2_char_preview_window

0xdba1,	// (0x00020d45) tmo_note_info_pane_t1

0xdbb6,	// (0x00020d5a) tmo_note_info_pane_t2

0xdbcf,	// (0x00020d73) tmo_note_info_pane_t3

0x83bc,	// (0x0001b560) tmo_note_info_pane_t4

0x83ce,	// (0x0001b572) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x00023053) tmo_note_info_pane_t

0x83e0,	// (0x0001b584) list_tmo_link_pane_ParamLimits

0x83ed,	// (0x0001b591) scroll_pane_cp20_ParamLimits

0xded0,	// (0x00021074) bg_popup_fep_char_preview_window_cp01

0x8431,	// (0x0001b5d5) popup_fshwr2_char_preview_window_t1

0x843f,	// (0x0001b5e3) popup_candi_list_indi_window_g1

0x8448,	// (0x0001b5ec) bg_cell_contacts_ai5_widget_pane

0x8454,	// (0x0001b5f8) cell_contacts_ai5_widget_pane_g1

0x8469,	// (0x0001b60d) cell_contacts_ai5_widget_pane_g2

0x8475,	// (0x0001b619) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x0002305e) cell_contacts_ai5_widget_pane_g

0x8481,	// (0x0001b625) cell_contacts_ai5_widget_pane_t1

0xe5cc,	// (0x00021770) highlight_cell_shortcut_ai5_widget_pane_cp01

0x84f8,	// (0x0001b69c) settings_container_pane

0x1f59,	// (0x000150fd) listscroll_set_pane_copy1

0x4753,	// (0x000178f7) scroll_pane_cp121_copy1

0x8504,	// (0x0001b6a8) set_content_pane_copy1

0x850c,	// (0x0001b6b0) aid_height_set_list_copy1_ParamLimits

0x850c,	// (0x0001b6b0) aid_height_set_list_copy1

0x3ce4,	// (0x00016e88) aid_size_parent_copy1_ParamLimits

0x3ce4,	// (0x00016e88) aid_size_parent_copy1

0x8518,	// (0x0001b6bc) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8518,	// (0x0001b6bc) button_value_adjust_pane_cp6_copy1

0x2288,	// (0x0001542c) list_highlight_pane_cp2_copy1_ParamLimits

0x2288,	// (0x0001542c) list_highlight_pane_cp2_copy1

0x852c,	// (0x0001b6d0) list_set_pane_copy1_ParamLimits

0x852c,	// (0x0001b6d0) list_set_pane_copy1

0x8493,	// (0x0001b637) main_pane_set_t1_copy1_ParamLimits

0x8493,	// (0x0001b637) main_pane_set_t1_copy1

0x84cd,	// (0x0001b671) main_pane_set_t2_copy1_ParamLimits

0x84cd,	// (0x0001b671) main_pane_set_t2_copy1

0x85ed,	// (0x0001b791) main_pane_set_t3_copy1

0x85fb,	// (0x0001b79f) main_pane_set_t4_copy1

0x84ec,	// (0x0001b690) set_content_pane_g1_copy1_ParamLimits

0x84ec,	// (0x0001b690) set_content_pane_g1_copy1

0x8609,	// (0x0001b7ad) setting_code_pane_copy1

0x8611,	// (0x0001b7b5) setting_slider_graphic_pane_copy1

0x8611,	// (0x0001b7b5) setting_slider_pane_copy1

0x8619,	// (0x0001b7bd) setting_text_pane_copy1

0x8619,	// (0x0001b7bd) setting_volume_pane_copy1

0x8609,	// (0x0001b7ad) settings_code_pane_cp2_copy1

0x8621,	// (0x0001b7c5) settings_code_pane_cp_copy1_ParamLimits

0x8621,	// (0x0001b7c5) settings_code_pane_cp_copy1

0x07a9,	// (0x0001394d) volume_set_pane_copy1

0x8635,	// (0x0001b7d9) volume_set_pane_g10_copy1

0x8641,	// (0x0001b7e5) volume_set_pane_g1_copy1

0x864b,	// (0x0001b7ef) volume_set_pane_g2_copy1

0x8655,	// (0x0001b7f9) volume_set_pane_g3_copy1

0x865f,	// (0x0001b803) volume_set_pane_g4_copy1

0x8669,	// (0x0001b80d) volume_set_pane_g5_copy1

0x8673,	// (0x0001b817) volume_set_pane_g6_copy1

0x867d,	// (0x0001b821) volume_set_pane_g7_copy1

0x8687,	// (0x0001b82b) volume_set_pane_g8_copy1

0x8691,	// (0x0001b835) volume_set_pane_g9_copy1

0xc869,	// (0x0001fa0d) bg_set_opt_pane_cp_copy1_ParamLimits

0xc869,	// (0x0001fa0d) bg_set_opt_pane_cp_copy1

0x07b5,	// (0x00013959) setting_slider_pane_t1_copy1_ParamLimits

0x07b5,	// (0x00013959) setting_slider_pane_t1_copy1

0x07d4,	// (0x00013978) setting_slider_pane_t2_copy1_ParamLimits

0x07d4,	// (0x00013978) setting_slider_pane_t2_copy1

0x07ee,	// (0x00013992) setting_slider_pane_t3_copy1_ParamLimits

0x07ee,	// (0x00013992) setting_slider_pane_t3_copy1

0x0806,	// (0x000139aa) slider_set_pane_copy1_ParamLimits

0x0806,	// (0x000139aa) slider_set_pane_copy1

0xe687,	// (0x0002182b) set_opt_bg_pane_g1_copy2

0xe68f,	// (0x00021833) set_opt_bg_pane_g2_copy2

0x869d,	// (0x0001b841) set_opt_bg_pane_g3_copy2

0xe69f,	// (0x00021843) set_opt_bg_pane_g4_copy2

0xe6a7,	// (0x0002184b) set_opt_bg_pane_g5_copy2

0xe6af,	// (0x00021853) set_opt_bg_pane_g6_copy2

0x86a7,	// (0x0001b84b) set_opt_bg_pane_g7_copy2

0x86b1,	// (0x0001b855) set_opt_bg_pane_g8_copy2

0x86bb,	// (0x0001b85f) set_opt_bg_pane_g9_copy2

0x081c,	// (0x000139c0) aid_size_touch_slider_mark_copy1_ParamLimits

0x081c,	// (0x000139c0) aid_size_touch_slider_mark_copy1

0x86c5,	// (0x0001b869) slider_set_pane_g1_copy1

0x0830,	// (0x000139d4) slider_set_pane_g2_copy1

0xef40,	// (0x000220e4) slider_set_pane_g3_copy1_ParamLimits

0xef40,	// (0x000220e4) slider_set_pane_g3_copy1

0xef54,	// (0x000220f8) slider_set_pane_g4_copy1_ParamLimits

0xef54,	// (0x000220f8) slider_set_pane_g4_copy1

0xef6c,	// (0x00022110) slider_set_pane_g5_copy1_ParamLimits

0xef6c,	// (0x00022110) slider_set_pane_g5_copy1

0xef40,	// (0x000220e4) slider_set_pane_g6_copy1_ParamLimits

0xef40,	// (0x000220e4) slider_set_pane_g6_copy1

0x0838,	// (0x000139dc) slider_set_pane_g7_copy1_ParamLimits

0x0838,	// (0x000139dc) slider_set_pane_g7_copy1

0xc80d,	// (0x0001f9b1) bg_set_opt_pane_cp2_copy1

0x86ce,	// (0x0001b872) setting_slider_graphic_pane_g1_copy1

0x86d7,	// (0x0001b87b) setting_slider_graphic_pane_t1_copy1

0x86e7,	// (0x0001b88b) setting_slider_graphic_pane_t2_copy1

0x86f7,	// (0x0001b89b) slider_set_pane_cp_copy1

0x8707,	// (0x0001b8ab) input_focus_pane_cp1_copy1

0x8710,	// (0x0001b8b4) list_set_text_pane_copy1

0x8718,	// (0x0001b8bc) setting_text_pane_g1_copy1

0xc88e,	// (0x0001fa32) set_text_pane_t1_copy1

0x8707,	// (0x0001b8ab) input_focus_pane_cp2_copy1

0x8718,	// (0x0001b8bc) setting_code_pane_g1_copy1

0x8721,	// (0x0001b8c5) setting_code_pane_t1_copy1

0x4558,	// (0x000176fc) list_set_graphic_pane_copy1

0xc80d,	// (0x0001f9b1) bg_set_opt_pane_cp4_copy1

0x1c48,	// (0x00014dec) list_set_graphic_pane_g1_copy1_ParamLimits

0x1c48,	// (0x00014dec) list_set_graphic_pane_g1_copy1

0x872f,	// (0x0001b8d3) list_set_graphic_pane_g2_copy1

0x1c60,	// (0x00014e04) list_set_graphic_pane_t1_copy1_ParamLimits

0x1c60,	// (0x00014e04) list_set_graphic_pane_t1_copy1

0x5358,	// (0x000184fc) rs_clock_indi_pane_g1

0x8737,	// (0x0001b8db) rs_clock_indi_pane_t1

0x8745,	// (0x0001b8e9) rs_indi_pane

0x874d,	// (0x0001b8f1) rs_indi_pane_g1

0x8756,	// (0x0001b8fa) rs_indi_pane_g2

0x875f,	// (0x0001b903) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x00023065) rs_indi_pane_g

0x1f59,	// (0x000150fd) bg_popup_preview_window_pane_cp03

0x8768,	// (0x0001b90c) popup_fep_tooltip_window_t1

0x6221,	// (0x000193c5) popup_note2_window_g2_ParamLimits

0x6221,	// (0x000193c5) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x00022df2) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x00022df2) popup_note2_window_g

0x6824,	// (0x000199c8) bg_popup_sub_pane_cp11_ParamLimits

0x6831,	// (0x000199d5) cell_ai3_links_pane_g1_ParamLimits

0x6848,	// (0x000199ec) cell_ai3_links_pane_t1

0xc88e,	// (0x0001fa32) set_text_pane_t1_copy1_ParamLimits

0xb581,	// (0x0001e725) cell_graphic_popup_pane_cp2_ParamLimits

0xb581,	// (0x0001e725) cell_graphic_popup_pane_cp2

0x8776,	// (0x0001b91a) cell_graphic_popup_pane_g1_cp2

0xe29a,	// (0x0002143e) cell_graphic_popup_pane_g2_cp2

0x877e,	// (0x0001b922) cell_graphic_popup_pane_g3_cp2

0x8786,	// (0x0001b92a) cell_graphic_popup_pane_t2_cp2

0xe2ab,	// (0x0002144f) grid_highlight_pane_cp3_cp2

0x15f2,	// (0x00014796) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe5cc,	// (0x00021770) main_tmo_pane_ParamLimits

0xccbc,	// (0x0001fe60) popup_tmo_big_image_note_window

0xd8de,	// (0x00020a82) cell_ai5_widget_list_pane

0xd8e6,	// (0x00020a8a) cell_ai5_widget_lrg_icon_pane

0xdba1,	// (0x00020d45) tmo_note_info_pane_t1_ParamLimits

0xdbb6,	// (0x00020d5a) tmo_note_info_pane_t2_ParamLimits

0xdbcf,	// (0x00020d73) tmo_note_info_pane_t3_ParamLimits

0x83bc,	// (0x0001b560) tmo_note_info_pane_t4_ParamLimits

0x83ce,	// (0x0001b572) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x00023053) tmo_note_info_pane_t_ParamLimits

0x84f8,	// (0x0001b69c) settings_container_pane_ParamLimits

0x86ff,	// (0x0001b8a3) indicator_popup_pane_cp5

0x86ff,	// (0x0001b8a3) indicator_popup_pane_cp6

0x4558,	// (0x000176fc) list_set_graphic_pane_copy1_ParamLimits

0xc7f9,	// (0x0001f99d) bg_popup_window_pane_cp23

0x8794,	// (0x0001b938) popup_tmo_big_image_note_window_g1

0x87a0,	// (0x0001b944) popup_tmo_big_image_note_window_t1

0x87b0,	// (0x0001b954) popup_tmo_big_image_note_window_t2

0x87c0,	// (0x0001b964) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x0002306c) popup_tmo_big_image_note_window_t

0x5358,	// (0x000184fc) cell_ai5_widget_lrg_icon_pane_g1

0xdbe4,	// (0x00020d88) cell_ai5_widget_lrg_icon_pane_t1

0xdbf2,	// (0x00020d96) cell_ai5_widget_list_row_pane_ParamLimits

0xdbf2,	// (0x00020d96) cell_ai5_widget_list_row_pane

0xdc0a,	// (0x00020dae) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdc0a,	// (0x00020dae) cell_ai5_widget_list_row_pane_g1

0xdc17,	// (0x00020dbb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdc17,	// (0x00020dbb) cell_ai5_widget_list_row_pane_t1

0xdc42,	// (0x00020de6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdc42,	// (0x00020de6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x00023073) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x00023073) cell_ai5_widget_list_row_pane_t

0xded0,	// (0x00021074) main_fep_vtchi_ss_pane

0x887e,	// (0x0001ba22) popup_fep_char_pre_window

0x8886,	// (0x0001ba2a) popup_fep_ituss_window

0xdc94,	// (0x00020e38) popup_fep_vkbss_window

0x2288,	// (0x0001542c) grid_vkbss_keypad_pane_ParamLimits

0x2288,	// (0x0001542c) grid_vkbss_keypad_pane

0x88f4,	// (0x0001ba98) ituss_keypad_pane

0x085a,	// (0x000139fe) aid_vkbss_key_offset_ParamLimits

0x085a,	// (0x000139fe) aid_vkbss_key_offset

0xa8d0,	// (0x0001da74) cell_vkbss_key_pane_ParamLimits

0xa8d0,	// (0x0001da74) cell_vkbss_key_pane

0x8900,	// (0x0001baa4) bg_cell_vkbss_key_g1_ParamLimits

0x8900,	// (0x0001baa4) bg_cell_vkbss_key_g1

0xdca3,	// (0x00020e47) cell_vkbss_key_3p_pane_ParamLimits

0xdca3,	// (0x00020e47) cell_vkbss_key_3p_pane

0xdcd9,	// (0x00020e7d) cell_vkbss_key_g1_ParamLimits

0xdcd9,	// (0x00020e7d) cell_vkbss_key_g1

0xdd0f,	// (0x00020eb3) cell_vkbss_key_t1_ParamLimits

0xdd0f,	// (0x00020eb3) cell_vkbss_key_t1

0x08a0,	// (0x00013a44) cell_ituss_key_pane_ParamLimits

0x08a0,	// (0x00013a44) cell_ituss_key_pane

0x89d4,	// (0x0001bb78) bg_cell_ituss_key_g1_ParamLimits

0x89d4,	// (0x0001bb78) bg_cell_ituss_key_g1

0x89e0,	// (0x0001bb84) cell_ituss_key_pane_g1_ParamLimits

0x89e0,	// (0x0001bb84) cell_ituss_key_pane_g1

0x08b1,	// (0x00013a55) cell_ituss_key_pane_g2_ParamLimits

0x08b1,	// (0x00013a55) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x0002307a) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x0002307a) cell_ituss_key_pane_g

0x0935,	// (0x00013ad9) cell_ituss_key_t1_ParamLimits

0x0935,	// (0x00013ad9) cell_ituss_key_t1

0x096f,	// (0x00013b13) cell_ituss_key_t2_ParamLimits

0x096f,	// (0x00013b13) cell_ituss_key_t2

0x09a0,	// (0x00013b44) cell_ituss_key_t3_ParamLimits

0x09a0,	// (0x00013b44) cell_ituss_key_t3

0x096f,	// (0x00013b13) cell_ituss_key_t4_ParamLimits

0x096f,	// (0x00013b13) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00023087) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00023087) cell_ituss_key_t

0xdd6b,	// (0x00020f0f) cell_vkbss_key_3p_pane_g1

0xdd73,	// (0x00020f17) cell_vkbss_key_3p_pane_g2

0xdd7b,	// (0x00020f1f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00023092) cell_vkbss_key_3p_pane_g

0x1f59,	// (0x000150fd) bg_popup_fep_char_preview_window_cp02

0x8a1e,	// (0x0001bbc2) popup_fep_char_pre_window_t1

0xd8bd,	// (0x00020a61) main_ai5_sk_pane

0x8448,	// (0x0001b5ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8454,	// (0x0001b5f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8469,	// (0x0001b60d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8475,	// (0x0001b619) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x0002305e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8481,	// (0x0001b625) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe5cc,	// (0x00021770) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdd83,	// (0x00020f27) main_ai5_sk_pane_g1

0x2d7d,	// (0x00015f21) popup_query_code_window_g1

0xdc85,	// (0x00020e29) popup_fep_vkb_icf_pane

0x88cb,	// (0x0001ba6f) popup_fep_vtchi_icf_pane

0x2288,	// (0x0001542c) bg_icf_pane

0x2288,	// (0x0001542c) list_vkb_icf_pane

0x8a35,	// (0x0001bbd9) bg_icf_pane_cp01

0x8a48,	// (0x0001bbec) vtchi_icf_list_pane

0xddd8,	// (0x00020f7c) list_vkb_icf_pane_t1_ParamLimits

0xddd8,	// (0x00020f7c) list_vkb_icf_pane_t1

0x8acc,	// (0x0001bc70) vtchi_icf_list_pane_t1_ParamLimits

0x8acc,	// (0x0001bc70) vtchi_icf_list_pane_t1

0x8886,	// (0x0001ba2a) popup_fep_ituss_window_ParamLimits

0x88cb,	// (0x0001ba6f) popup_fep_vtchi_icf_pane_ParamLimits

0x88f4,	// (0x0001ba98) ituss_keypad_pane_ParamLimits

0x084e,	// (0x000139f2) ituss_sks_pane

0x2288,	// (0x0001542c) bg_icf_pane_ParamLimits

0xdc6a,	// (0x00020e0e) icf_edit_indi_pane_ParamLimits

0xdc6a,	// (0x00020e0e) icf_edit_indi_pane

0x2288,	// (0x0001542c) list_vkb_icf_pane_ParamLimits

0x8a35,	// (0x0001bbd9) bg_icf_pane_cp01_ParamLimits

0x8871,	// (0x0001ba15) icf_edit_indi_pane_cp01_ParamLimits

0x8871,	// (0x0001ba15) icf_edit_indi_pane_cp01

0x8a50,	// (0x0001bbf4) vtchi_query_pane

0x7bc8,	// (0x0001ad6c) icf_edit_indi_pane_g1_ParamLimits

0x7bc8,	// (0x0001ad6c) icf_edit_indi_pane_g1

0xddef,	// (0x00020f93) icf_edit_indi_pane_g2_ParamLimits

0xddef,	// (0x00020f93) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x000230bd) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x000230bd) icf_edit_indi_pane_g

0xde03,	// (0x00020fa7) icf_edit_indi_pane_t1

0x8ae5,	// (0x0001bc89) bg_input_focus_pane_cp042

0xe47e,	// (0x00021622) vtchi_button_pane

0x8aee,	// (0x0001bc92) vtchi_query_pane_t1

0x8afc,	// (0x0001bca0) vtchi_query_pane_t2

0x8b0a,	// (0x0001bcae) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x000230ac) vtchi_query_pane_t

0xded0,	// (0x00021074) bg_button_pane_cp13

0x8b18,	// (0x0001bcbc) vtchi_button_pane_g1

0x09e3,	// (0x00013b87) ituss_sks_pane_g1

0x09ee,	// (0x00013b92) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x000230b3) ituss_sks_pane_g

0x8b20,	// (0x0001bcc4) ituss_sks_pane_t1

0x8b2e,	// (0x0001bcd2) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x000230b8) ituss_sks_pane_t

0x4dd9,	// (0x00017f7d) indicator_nsta_pane_cp_g1

0x4de2,	// (0x00017f86) indicator_nsta_pane_cp_g2

0x4dea,	// (0x00017f8e) indicator_nsta_pane_cp_g3

0x4df2,	// (0x00017f96) indicator_nsta_pane_cp_g4

0x4de2,	// (0x00017f86) indicator_nsta_pane_cp_g5

0x4dea,	// (0x00017f8e) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00022c30) indicator_nsta_pane_cp_g

0xd6cf,	// (0x00020873) cell_graphic2_pane_t2_ParamLimits

0xd6cf,	// (0x00020873) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x00022f49) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x00022f49) cell_graphic2_pane_t

0xd707,	// (0x000208ab) cell_graphic2_control_pane_t1

0xb471,	// (0x0001e615) signal_pane_g3_ParamLimits

0xb471,	// (0x0001e615) signal_pane_g3

0xb485,	// (0x0001e629) signal_pane_g4_ParamLimits

0xb485,	// (0x0001e629) signal_pane_g4

0xdc54,	// (0x00020df8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xdc54,	// (0x00020df8) cell_ai5_widget_list_row_pane_t3

0x89f4,	// (0x0001bb98) cell_ituss_key_pane_t1_ParamLimits

0x89f4,	// (0x0001bb98) cell_ituss_key_pane_t1

0x29b5,	// (0x00015b59) form_field_data_wide_pane_vc_t2_ParamLimits

0x29b5,	// (0x00015b59) form_field_data_wide_pane_vc_t2

0x29c9,	// (0x00015b6d) form_field_data_wide_pane_vc_t3_ParamLimits

0x29c9,	// (0x00015b6d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x0002297e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x0002297e) form_field_data_wide_pane_vc_t

0x4a76,	// (0x00017c1a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4a76,	// (0x00017c1a) form_field_slider_wide_pane_vc_t3

0x4b4c,	// (0x00017cf0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4b4c,	// (0x00017cf0) form_field_popup_wide_pane_vc_t2

0x4b63,	// (0x00017d07) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4b63,	// (0x00017d07) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00022c1f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00022c1f) form_field_popup_wide_pane_vc_t

0xa733,	// (0x0001d8d7) aid_fshwr2_btn_pane_ParamLimits

0xa747,	// (0x0001d8eb) aid_fshwr2_syb_pane_ParamLimits

0xa75b,	// (0x0001d8ff) aid_fshwr2_txt_pane_ParamLimits

0xf51b,	// (0x000226bf) fshwr2_bg_pane_ParamLimits

0xa76b,	// (0x0001d90f) fshwr2_func_candi_pane_ParamLimits

0xa78d,	// (0x0001d931) fshwr2_hwr_syb_pane_ParamLimits

0xa7b1,	// (0x0001d955) fshwr2_icf_pane_ParamLimits

0x49ea,	// (0x00017b8e) list_double_graphic_pane_vc_g4_ParamLimits

0x49ea,	// (0x00017b8e) list_double_graphic_pane_vc_g4

0x08d1,	// (0x00013a75) cell_ituss_key_pane_g3_ParamLimits

0x08d1,	// (0x00013a75) cell_ituss_key_pane_g3

0x09d1,	// (0x00013b75) cell_ituss_key_t5_ParamLimits

0x09d1,	// (0x00013b75) cell_ituss_key_t5

0xdc94,	// (0x00020e38) popup_fep_vkbss_window_ParamLimits

0xd8c7,	// (0x00020a6b) aid_cell_ai5_quarter

0xde03,	// (0x00020fa7) icf_edit_indi_pane_t1_ParamLimits

0xe0de,	// (0x00021282) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xe0de,	// (0x00021282) aid_tch_indicator_popup_pane_cp2

0xe0f1,	// (0x00021295) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xe0f1,	// (0x00021295) aid_tch_query_popup_data_pane_cp2

0x2d25,	// (0x00015ec9) aid_tch_query_popup_pane_ParamLimits

0x2d25,	// (0x00015ec9) aid_tch_query_popup_pane

0x2d25,	// (0x00015ec9) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2d25,	// (0x00015ec9) aid_tch_query_popup_data_pane_cp1

0x2288,	// (0x0001542c) cell_fshwr2_syb_bg_pane_ParamLimits

0xa8a6,	// (0x0001da4a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xa8ba,	// (0x0001da5e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xdc85,	// (0x00020e29) popup_fep_vkb_icf_pane_ParamLimits

0xa6c7,	// (0x0001d86b) bg_popup_fep_char_preview_window_g10

0xd96a,	// (0x00020b0e) cell_ai5_widget_pane_g11_ParamLimits

0xd96a,	// (0x00020b0e) cell_ai5_widget_pane_g11

0x7e71,	// (0x0001b015) cell_ai5_widget_pane_g12_ParamLimits

0x7e71,	// (0x0001b015) cell_ai5_widget_pane_g12

0xd976,	// (0x00020b1a) cell_ai5_widget_pane_g13_ParamLimits

0xd976,	// (0x00020b1a) cell_ai5_widget_pane_g13

0xda33,	// (0x00020bd7) cell_ai5_widget_pane_t11_ParamLimits

0xda33,	// (0x00020bd7) cell_ai5_widget_pane_t11

0xda45,	// (0x00020be9) cell_ai5_widget_pane_t12_ParamLimits

0xda45,	// (0x00020be9) cell_ai5_widget_pane_t12

0x08dd,	// (0x00013a81) cell_ituss_key_pane_g4_ParamLimits

0x08dd,	// (0x00013a81) cell_ituss_key_pane_g4

0x08f9,	// (0x00013a9d) cell_ituss_key_pane_g5_ParamLimits

0x08f9,	// (0x00013a9d) cell_ituss_key_pane_g5

0x0915,	// (0x00013ab9) cell_ituss_key_pane_g6_ParamLimits

0x0915,	// (0x00013ab9) cell_ituss_key_pane_g6

0x2800,	// (0x000159a4) bg_icf_pane_g1

0xdd8c,	// (0x00020f30) bg_icf_pane_g2

0xdd96,	// (0x00020f3a) bg_icf_pane_g3

0xdd9e,	// (0x00020f42) bg_icf_pane_g4

0xdda8,	// (0x00020f4c) bg_icf_pane_g5

0xddb2,	// (0x00020f56) bg_icf_pane_g6

0xddbc,	// (0x00020f60) bg_icf_pane_g7

0xddc4,	// (0x00020f68) bg_icf_pane_g8

0xddce,	// (0x00020f72) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00023099) bg_icf_pane_g

0x88e1,	// (0x0001ba85) popup_hyb_candi_window_ParamLimits

0x88e1,	// (0x0001ba85) popup_hyb_candi_window

0x2924,	// (0x00015ac8) bg_popup_sub_pane_cp01_ParamLimits

0x2924,	// (0x00015ac8) bg_popup_sub_pane_cp01

0x8b69,	// (0x0001bd0d) entry_hyb_candi_pane_ParamLimits

0x8b69,	// (0x0001bd0d) entry_hyb_candi_pane

0x8b78,	// (0x0001bd1c) grid_hyb_candi_pane_ParamLimits

0x8b78,	// (0x0001bd1c) grid_hyb_candi_pane

0x8b8d,	// (0x0001bd31) grid_hyb_phrase_pane_ParamLimits

0x8b8d,	// (0x0001bd31) grid_hyb_phrase_pane

0x8b9c,	// (0x0001bd40) cell_hyb_candi_pane_ParamLimits

0x8b9c,	// (0x0001bd40) cell_hyb_candi_pane

0xe487,	// (0x0002162b) cell_hyb_candi_scroll_pane

0x18b0,	// (0x00014a54) cell_hyb_candi_pane_g1

0x8bb8,	// (0x0001bd5c) cell_hyb_candi_pane_t1

0x8bc6,	// (0x0001bd6a) cell_hyb_phrase_pane

0x18b0,	// (0x00014a54) cell_hyb_phrase_pane_g1

0x8bcf,	// (0x0001bd73) cell_hyb_phrase_pane_t1

0x8bdd,	// (0x0001bd81) entry_hyb_candi_pane_t1

0x1f59,	// (0x000150fd) input_focus_pane_cp06

0x8beb,	// (0x0001bd8f) cell_hyb_candi_scroll_pane_g1

0x8bf3,	// (0x0001bd97) cell_hyb_candi_scroll_pane_g1_aid

0x8bfb,	// (0x0001bd9f) cell_hyb_candi_scroll_pane_g2

0x8c03,	// (0x0001bda7) cell_hyb_candi_scroll_pane_g2_aid

0x8c0b,	// (0x0001bdaf) cell_hyb_candi_scroll_pane_g3

0x8c13,	// (0x0001bdb7) cell_hyb_candi_scroll_pane_g4
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

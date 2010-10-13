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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002f9d7 };

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
0x54b7,	// (0x00034e8e) Screen

0x54c3,	// (0x00034e9a) application_window_ParamLimits

0x54c3,	// (0x00034e9a) application_window

0x21b0,	// (0x00031b87) screen_g1

0x551f,	// (0x00034ef6) area_bottom_pane_ParamLimits

0x551f,	// (0x00034ef6) area_bottom_pane

0x55df,	// (0x00034fb6) area_top_pane_ParamLimits

0x55df,	// (0x00034fb6) area_top_pane

0x567d,	// (0x00035054) main_pane_ParamLimits

0x567d,	// (0x00035054) main_pane

0x21ba,	// (0x00031b91) misc_graphics

0x94ec,	// (0x00038ec3) battery_pane_ParamLimits

0x94ec,	// (0x00038ec3) battery_pane

0xa1b6,	// (0x00039b8d) bg_status_flat_pane_g8

0xa1be,	// (0x00039b95) bg_status_flat_pane_g9

0x95b4,	// (0x00038f8b) context_pane_ParamLimits

0x95b4,	// (0x00038f8b) context_pane

0x96d8,	// (0x000390af) navi_pane_ParamLimits

0x96d8,	// (0x000390af) navi_pane

0x9768,	// (0x0003913f) signal_pane_ParamLimits

0x9768,	// (0x0003913f) signal_pane

0x0008,

0xf854,	// (0x0003f22b) bg_status_flat_pane_g

0x97d5,	// (0x000391ac) status_pane_g1_ParamLimits

0x97d5,	// (0x000391ac) status_pane_g1

0x97e1,	// (0x000391b8) status_pane_g2_ParamLimits

0x97e1,	// (0x000391b8) status_pane_g2

0x97ed,	// (0x000391c4) status_pane_g3_ParamLimits

0x97ed,	// (0x000391c4) status_pane_g3

0x0004,

0xf77b,	// (0x0003f152) status_pane_g_ParamLimits

0xf77b,	// (0x0003f152) status_pane_g

0x9821,	// (0x000391f8) title_pane_ParamLimits

0x9821,	// (0x000391f8) title_pane

0x9862,	// (0x00039239) uni_indicator_pane_ParamLimits

0x9862,	// (0x00039239) uni_indicator_pane

0x941e,	// (0x00038df5) bg_list_pane_ParamLimits

0x941e,	// (0x00038df5) bg_list_pane

0x6eef,	// (0x000368c6) find_pane

0x943e,	// (0x00038e15) listscroll_app_pane_ParamLimits

0x943e,	// (0x00038e15) listscroll_app_pane

0x944a,	// (0x00038e21) listscroll_form_pane

0x5437,	// (0x00034e0e) listscroll_gen_pane_ParamLimits

0x5437,	// (0x00034e0e) listscroll_gen_pane

0x6ef7,	// (0x000368ce) listscroll_set_pane

0x62e4,	// (0x00035cbb) main_idle_act_pane

0x9117,	// (0x00038aee) main_idle_trad_pane

0x9117,	// (0x00038aee) main_list_empty_pane

0x943e,	// (0x00038e15) main_midp_pane

0x9464,	// (0x00038e3b) main_pane_g1_ParamLimits

0x9464,	// (0x00038e3b) main_pane_g1

0x6f0d,	// (0x000368e4) popup_ai_message_window_ParamLimits

0x6f0d,	// (0x000368e4) popup_ai_message_window

0x6fc1,	// (0x00036998) popup_fep_china_uni_window_ParamLimits

0x6fc1,	// (0x00036998) popup_fep_china_uni_window

0x7021,	// (0x000369f8) popup_fep_japan_candidate_window_ParamLimits

0x7021,	// (0x000369f8) popup_fep_japan_candidate_window

0x704b,	// (0x00036a22) popup_fep_japan_predictive_window_ParamLimits

0x704b,	// (0x00036a22) popup_fep_japan_predictive_window

0x7081,	// (0x00036a58) popup_find_window

0x708e,	// (0x00036a65) popup_grid_graphic_window_ParamLimits

0x708e,	// (0x00036a65) popup_grid_graphic_window

0x70be,	// (0x00036a95) popup_large_graphic_colour_window

0x70e4,	// (0x00036abb) popup_menu_window_ParamLimits

0x70e4,	// (0x00036abb) popup_menu_window

0x72ae,	// (0x00036c85) popup_note_image_window

0x7298,	// (0x00036c6f) popup_note_wait_window_ParamLimits

0x7298,	// (0x00036c6f) popup_note_wait_window

0x7298,	// (0x00036c6f) popup_note_window_ParamLimits

0x7298,	// (0x00036c6f) popup_note_window

0x7314,	// (0x00036ceb) popup_query_code_window_ParamLimits

0x7314,	// (0x00036ceb) popup_query_code_window

0x732a,	// (0x00036d01) popup_query_data_code_window_ParamLimits

0x732a,	// (0x00036d01) popup_query_data_code_window

0x734d,	// (0x00036d24) popup_query_data_window_ParamLimits

0x734d,	// (0x00036d24) popup_query_data_window

0x736f,	// (0x00036d46) popup_query_sat_info_window_ParamLimits

0x736f,	// (0x00036d46) popup_query_sat_info_window

0x73ae,	// (0x00036d85) popup_snote_single_graphic_window_ParamLimits

0x73ae,	// (0x00036d85) popup_snote_single_graphic_window

0x73ae,	// (0x00036d85) popup_snote_single_text_window_ParamLimits

0x73ae,	// (0x00036d85) popup_snote_single_text_window

0x73c5,	// (0x00036d9c) popup_sub_window_general

0x750b,	// (0x00036ee2) popup_window_general_ParamLimits

0x750b,	// (0x00036ee2) popup_window_general

0x9472,	// (0x00038e49) power_save_pane

0x6d9e,	// (0x00036775) control_pane_g1_ParamLimits

0x6d9e,	// (0x00036775) control_pane_g1

0x6dc1,	// (0x00036798) control_pane_g2_ParamLimits

0x6dc1,	// (0x00036798) control_pane_g2

0x93e1,	// (0x00038db8) control_pane_g3_ParamLimits

0x93e1,	// (0x00038db8) control_pane_g3

0x0007,

0xf763,	// (0x0003f13a) control_pane_g_ParamLimits

0xf763,	// (0x0003f13a) control_pane_g

0x6e06,	// (0x000367dd) control_pane_t1_ParamLimits

0x6e06,	// (0x000367dd) control_pane_t1

0x6e4e,	// (0x00036825) control_pane_t2_ParamLimits

0x6e4e,	// (0x00036825) control_pane_t2

0x0002,

0xf774,	// (0x0003f14b) control_pane_t_ParamLimits

0xf774,	// (0x0003f14b) control_pane_t

0x9306,	// (0x00038cdd) navi_navi_volume_pane_cp1

0x930e,	// (0x00038ce5) status_small_icon_pane

0x9316,	// (0x00038ced) status_small_pane_g1_ParamLimits

0x9316,	// (0x00038ced) status_small_pane_g1

0x934a,	// (0x00038d21) status_small_pane_g2_ParamLimits

0x934a,	// (0x00038d21) status_small_pane_g2

0x9356,	// (0x00038d2d) status_small_pane_g3_ParamLimits

0x9356,	// (0x00038d2d) status_small_pane_g3

0x9362,	// (0x00038d39) status_small_pane_g4_ParamLimits

0x9362,	// (0x00038d39) status_small_pane_g4

0x936e,	// (0x00038d45) status_small_pane_g5_ParamLimits

0x936e,	// (0x00038d45) status_small_pane_g5

0x937c,	// (0x00038d53) status_small_pane_g6_ParamLimits

0x937c,	// (0x00038d53) status_small_pane_g6

0x0007,

0xf752,	// (0x0003f129) status_small_pane_g_ParamLimits

0xf752,	// (0x0003f129) status_small_pane_g

0x93ab,	// (0x00038d82) status_small_pane_t1

0x93cd,	// (0x00038da4) status_small_wait_pane_ParamLimits

0x93cd,	// (0x00038da4) status_small_wait_pane

0x68b2,	// (0x00036289) aid_levels_signal_ParamLimits

0x68b2,	// (0x00036289) aid_levels_signal

0x68c1,	// (0x00036298) signal_pane_g1_ParamLimits

0x68c1,	// (0x00036298) signal_pane_g1

0x68d6,	// (0x000362ad) signal_pane_g2_ParamLimits

0x68d6,	// (0x000362ad) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003f0ba) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003f0ba) signal_pane_g

0x6907,	// (0x000362de) context_pane_g1

0x58dc,	// (0x000352b3) title_pane_g1

0x590e,	// (0x000352e5) title_pane_t1

0x21d0,	// (0x00031ba7) title_pane_t2

0x21f6,	// (0x00031bcd) title_pane_t3

0x0002,

0xf532,	// (0x0003ef09) title_pane_t

0x987a,	// (0x00039251) aid_levels_battery_ParamLimits

0x987a,	// (0x00039251) aid_levels_battery

0x988b,	// (0x00039262) battery_pane_g1_ParamLimits

0x988b,	// (0x00039262) battery_pane_g1

0x98a1,	// (0x00039278) battery_pane_g2_ParamLimits

0x98a1,	// (0x00039278) battery_pane_g2

0x0001,

0xf786,	// (0x0003f15d) battery_pane_g_ParamLimits

0xf786,	// (0x0003f15d) battery_pane_g

0xab00,	// (0x0003a4d7) uni_indicator_pane_g1

0xab16,	// (0x0003a4ed) uni_indicator_pane_g2

0xab2c,	// (0x0003a503) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0003f2d3) uni_indicator_pane_g

0x8f7a,	// (0x00038951) navi_icon_pane_ParamLimits

0x8f7a,	// (0x00038951) navi_icon_pane

0x8ec1,	// (0x00038898) navi_midp_pane

0x8f96,	// (0x0003896d) navi_navi_pane

0x8fa0,	// (0x00038977) navi_text_pane_ParamLimits

0x8fa0,	// (0x00038977) navi_text_pane

0x21b0,	// (0x00031b87) status_small_wait_pane_g1

0x2517,	// (0x00031eee) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0003f2ce) status_small_wait_pane_g

0xa813,	// (0x0003a1ea) navi_navi_icon_text_pane

0xa81b,	// (0x0003a1f2) navi_navi_pane_g1_ParamLimits

0xa81b,	// (0x0003a1f2) navi_navi_pane_g1

0xa82d,	// (0x0003a204) navi_navi_pane_g2_ParamLimits

0xa82d,	// (0x0003a204) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0003f29c) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0003f29c) navi_navi_pane_g

0xa83f,	// (0x0003a216) navi_navi_tabs_pane

0xa848,	// (0x0003a21f) navi_navi_text_pane

0xa813,	// (0x0003a1ea) navi_navi_volume_pane

0xa7ef,	// (0x0003a1c6) navi_text_pane_t1

0xa7e3,	// (0x0003a1ba) navi_icon_pane_g1

0xa736,	// (0x0003a10d) navi_navi_text_pane_t1

0x77e8,	// (0x000371bf) navi_navi_volume_pane_g1

0x77f0,	// (0x000371c7) volume_small_pane

0xa69c,	// (0x0003a073) navi_navi_icon_text_pane_g1

0xa6a4,	// (0x0003a07b) navi_navi_icon_text_pane_t1

0x8f96,	// (0x0003896d) navi_tabs_2_long_pane

0x8f96,	// (0x0003896d) navi_tabs_2_pane

0x8f96,	// (0x0003896d) navi_tabs_3_long_pane

0x8f96,	// (0x0003896d) navi_tabs_3_pane

0x8f96,	// (0x0003896d) navi_tabs_4_pane

0x77c8,	// (0x0003719f) tabs_2_active_pane_ParamLimits

0x77c8,	// (0x0003719f) tabs_2_active_pane

0x77d8,	// (0x000371af) tabs_2_passive_pane_ParamLimits

0x77d8,	// (0x000371af) tabs_2_passive_pane

0x7796,	// (0x0003716d) tabs_3_active_pane_ParamLimits

0x7796,	// (0x0003716d) tabs_3_active_pane

0x77a6,	// (0x0003717d) tabs_3_passive_pane_ParamLimits

0x77a6,	// (0x0003717d) tabs_3_passive_pane

0x77b7,	// (0x0003718e) tabs_3_passive_pane_cp_ParamLimits

0x77b7,	// (0x0003718e) tabs_3_passive_pane_cp

0x774a,	// (0x00037121) tabs_4_active_pane_ParamLimits

0x774a,	// (0x00037121) tabs_4_active_pane

0x775d,	// (0x00037134) tabs_4_passive_pane_ParamLimits

0x775d,	// (0x00037134) tabs_4_passive_pane

0x776e,	// (0x00037145) tabs_4_passive_pane_cp_ParamLimits

0x776e,	// (0x00037145) tabs_4_passive_pane_cp

0x777f,	// (0x00037156) tabs_4_passive_pane_cp2_ParamLimits

0x777f,	// (0x00037156) tabs_4_passive_pane_cp2

0x7726,	// (0x000370fd) tabs_2_long_active_pane_ParamLimits

0x7726,	// (0x000370fd) tabs_2_long_active_pane

0x7738,	// (0x0003710f) tabs_2_long_passive_pane_ParamLimits

0x7738,	// (0x0003710f) tabs_2_long_passive_pane

0x76e7,	// (0x000370be) tabs_3_long_active_pane_ParamLimits

0x76e7,	// (0x000370be) tabs_3_long_active_pane

0x76fa,	// (0x000370d1) tabs_3_long_passive_pane_ParamLimits

0x76fa,	// (0x000370d1) tabs_3_long_passive_pane

0x7713,	// (0x000370ea) tabs_3_long_passive_pane_cp_ParamLimits

0x7713,	// (0x000370ea) tabs_3_long_passive_pane_cp

0x768d,	// (0x00037064) volume_small_pane_g1

0x7696,	// (0x0003706d) volume_small_pane_g2

0x769f,	// (0x00037076) volume_small_pane_g3

0x76a8,	// (0x0003707f) volume_small_pane_g4

0x76b1,	// (0x00037088) volume_small_pane_g5

0x76ba,	// (0x00037091) volume_small_pane_g6

0x76c3,	// (0x0003709a) volume_small_pane_g7

0x76cc,	// (0x000370a3) volume_small_pane_g8

0x76d5,	// (0x000370ac) volume_small_pane_g9

0x76de,	// (0x000370b5) volume_small_pane_g10

0x0009,

0xf891,	// (0x0003f268) volume_small_pane_g

0x2216,	// (0x00031bed) bg_active_tab_pane_cp2_ParamLimits

0x2216,	// (0x00031bed) bg_active_tab_pane_cp2

0x5976,	// (0x0003534d) tabs_3_active_pane_g1

0x597e,	// (0x00035355) tabs_3_active_pane_t1

0x2216,	// (0x00031bed) bg_passive_tab_pane_cp2_ParamLimits

0x2216,	// (0x00031bed) bg_passive_tab_pane_cp2

0x5976,	// (0x0003534d) tabs_3_passive_pane_g1

0x597e,	// (0x00035355) tabs_3_passive_pane_t1

0x2216,	// (0x00031bed) bg_active_tab_pane_cp3_ParamLimits

0x2216,	// (0x00031bed) bg_active_tab_pane_cp3

0x5990,	// (0x00035367) tabs_4_active_pane_g1

0x5998,	// (0x0003536f) tabs_4_active_pane_t1

0x2216,	// (0x00031bed) bg_passive_tab_pane_cp3_ParamLimits

0x2216,	// (0x00031bed) bg_passive_tab_pane_cp3

0x5990,	// (0x00035367) tabs_4_1_passive_pane_g1

0x5998,	// (0x0003536f) tabs_4_1_passive_pane_t1

0x943e,	// (0x00038e15) list_highlight_pane_cp2

0xad79,	// (0x0003a750) list_set_pane_ParamLimits

0xad79,	// (0x0003a750) list_set_pane

0xae3b,	// (0x0003a812) main_pane_set_t1_ParamLimits

0xae3b,	// (0x0003a812) main_pane_set_t1

0xae5b,	// (0x0003a832) main_pane_set_t2_ParamLimits

0xae5b,	// (0x0003a832) main_pane_set_t2

0xae6f,	// (0x0003a846) main_pane_set_t3_ParamLimits

0xae6f,	// (0x0003a846) main_pane_set_t3

0xae83,	// (0x0003a85a) main_pane_set_t4_ParamLimits

0xae83,	// (0x0003a85a) main_pane_set_t4

0x0003,

0xf961,	// (0x0003f338) main_pane_set_t_ParamLimits

0xf961,	// (0x0003f338) main_pane_set_t

0xae97,	// (0x0003a86e) setting_code_pane

0xaea1,	// (0x0003a878) setting_slider_graphic_pane

0xaea1,	// (0x0003a878) setting_slider_pane

0xaea1,	// (0x0003a878) setting_text_pane

0xaea1,	// (0x0003a878) setting_volume_pane

0x59aa,	// (0x00035381) volume_set_pane

0x2216,	// (0x00031bed) bg_set_opt_pane_cp

0x59b4,	// (0x0003538b) setting_slider_pane_t1

0x59cd,	// (0x000353a4) setting_slider_pane_t2

0x59e7,	// (0x000353be) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003ef10) setting_slider_pane_t

0x59ff,	// (0x000353d6) slider_set_pane

0x21ba,	// (0x00031b91) bg_set_opt_pane_cp2

0x2224,	// (0x00031bfb) setting_slider_graphic_pane_g1

0x5a15,	// (0x000353ec) setting_slider_graphic_pane_t1

0x5a25,	// (0x000353fc) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003ef17) setting_slider_graphic_pane_t

0x5a35,	// (0x0003540c) slider_set_pane_cp

0x21ba,	// (0x00031b91) input_focus_pane_cp1

0xad3a,	// (0x0003a711) list_set_text_pane

0x21b0,	// (0x00031b87) setting_text_pane_g1

0x21ba,	// (0x00031b91) input_focus_pane_cp2

0x21b0,	// (0x00031b87) setting_code_pane_g1

0x222d,	// (0x00031c04) setting_code_pane_t1

0x3f9f,	// (0x00033976) set_text_pane_t1_ParamLimits

0x3f9f,	// (0x00033976) set_text_pane_t1

0x28b0,	// (0x00032287) set_opt_bg_pane_g1

0x28b8,	// (0x0003228f) set_opt_bg_pane_g2

0xad12,	// (0x0003a6e9) set_opt_bg_pane_g3

0x28c8,	// (0x0003229f) set_opt_bg_pane_g4

0x28d0,	// (0x000322a7) set_opt_bg_pane_g5

0x28d8,	// (0x000322af) set_opt_bg_pane_g6

0xad1c,	// (0x0003a6f3) set_opt_bg_pane_g7

0xad26,	// (0x0003a6fd) set_opt_bg_pane_g8

0xad30,	// (0x0003a707) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0003f325) set_opt_bg_pane_g

0xad05,	// (0x0003a6dc) slider_set_pane_g1

0x7899,	// (0x00037270) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0003f316) slider_set_pane_g

0x77f9,	// (0x000371d0) volume_set_pane_g1

0x7803,	// (0x000371da) volume_set_pane_g2

0x780d,	// (0x000371e4) volume_set_pane_g3

0x7817,	// (0x000371ee) volume_set_pane_g4

0x7821,	// (0x000371f8) volume_set_pane_g5

0x782b,	// (0x00037202) volume_set_pane_g6

0x7835,	// (0x0003720c) volume_set_pane_g7

0x783f,	// (0x00037216) volume_set_pane_g8

0x7849,	// (0x00037220) volume_set_pane_g9

0x7853,	// (0x0003722a) volume_set_pane_g10

0x0009,

0xf917,	// (0x0003f2ee) volume_set_pane_g

0x5a3d,	// (0x00035414) indicator_pane_ParamLimits

0x5a3d,	// (0x00035414) indicator_pane

0x5a49,	// (0x00035420) main_idle_pane_g2_ParamLimits

0x5a49,	// (0x00035420) main_idle_pane_g2

0x5a71,	// (0x00035448) main_pane_idle_g1_ParamLimits

0x5a71,	// (0x00035448) main_pane_idle_g1

0x223b,	// (0x00031c12) popup_clock_digital_analogue_window_ParamLimits

0x223b,	// (0x00031c12) popup_clock_digital_analogue_window

0x5a7f,	// (0x00035456) soft_indicator_pane_ParamLimits

0x5a7f,	// (0x00035456) soft_indicator_pane

0x5a8d,	// (0x00035464) wallpaper_pane_ParamLimits

0x5a8d,	// (0x00035464) wallpaper_pane

0x21b0,	// (0x00031b87) wallpaper_pane_g1

0x5a99,	// (0x00035470) indicator_pane_g1_ParamLimits

0x5a99,	// (0x00035470) indicator_pane_g1

0xb17b,	// (0x0003ab52) navi_navi_icon_text_pane_srt_g1

0x2269,	// (0x00031c40) soft_indicator_pane_t1

0x2283,	// (0x00031c5a) aid_ps_area_pane

0x5aa5,	// (0x0003547c) aid_ps_clock_pane

0x2294,	// (0x00031c6b) aid_ps_indicator_pane

0x22a0,	// (0x00031c77) indicator_ps_pane_ParamLimits

0x22a0,	// (0x00031c77) indicator_ps_pane

0x22af,	// (0x00031c86) power_save_pane_g1_ParamLimits

0x22af,	// (0x00031c86) power_save_pane_g1

0x22bb,	// (0x00031c92) power_save_pane_g2_ParamLimits

0x22bb,	// (0x00031c92) power_save_pane_g2

0x54d3,	// (0x00034eaa) aid_navinavi_width_pane

0x2283,	// (0x00031c5a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003ef1c) power_save_pane_g_ParamLimits

0xf545,	// (0x0003ef1c) power_save_pane_g

0x22c9,	// (0x00031ca0) power_save_pane_t1_ParamLimits

0x22c9,	// (0x00031ca0) power_save_pane_t1

0x5aa5,	// (0x0003547c) aid_ps_clock_pane_ParamLimits

0x2294,	// (0x00031c6b) aid_ps_indicator_pane_ParamLimits

0x22db,	// (0x00031cb2) power_save_pane_t4_ParamLimits

0x22db,	// (0x00031cb2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003ef21) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003ef21) power_save_pane_t

0x2305,	// (0x00031cdc) power_save_t3_ParamLimits

0x2305,	// (0x00031cdc) power_save_t3

0x22f0,	// (0x00031cc7) power_save_t2_ParamLimits

0x22f0,	// (0x00031cc7) power_save_t2

0x231a,	// (0x00031cf1) indicator_ps_pane_g1

0x5ab3,	// (0x0003548a) ai_gene_pane_ParamLimits

0x5ab3,	// (0x0003548a) ai_gene_pane

0x5abf,	// (0x00035496) ai_links_pane_ParamLimits

0x5abf,	// (0x00035496) ai_links_pane

0x5acb,	// (0x000354a2) indicator_pane_cp1_ParamLimits

0x5acb,	// (0x000354a2) indicator_pane_cp1

0x5ad7,	// (0x000354ae) main_pane_idle_g1_cp_ParamLimits

0x5ad7,	// (0x000354ae) main_pane_idle_g1_cp

0x2323,	// (0x00031cfa) popup_ai_links_title_window

0x5ae3,	// (0x000354ba) soft_indicator_pane_cp1_ParamLimits

0x5ae3,	// (0x000354ba) soft_indicator_pane_cp1

0xaaee,	// (0x0003a4c5) ai_links_pane_g1

0xaaf7,	// (0x0003a4ce) grid_ai_links_pane

0xaad3,	// (0x0003a4aa) ai_gene_pane_1

0xaadc,	// (0x0003a4b3) ai_gene_pane_2

0xaae5,	// (0x0003a4bc) list_highlight_pane_cp4

0xaab3,	// (0x0003a48a) cell_ai_link_pane_ParamLimits

0xaab3,	// (0x0003a48a) cell_ai_link_pane

0xaaab,	// (0x0003a482) cell_ai_link_pane_g1

0x2517,	// (0x00031eee) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0003f2c9) cell_ai_link_pane_g

0x21ba,	// (0x00031b91) grid_highlight_cp2

0x21ba,	// (0x00031b91) bg_popup_sub_pane_cp1

0x233a,	// (0x00031d11) popup_ai_links_title_window_t1

0xa9f7,	// (0x0003a3ce) ai_gene_pane_1_g1_ParamLimits

0xa9f7,	// (0x0003a3ce) ai_gene_pane_1_g1

0xaa03,	// (0x0003a3da) ai_gene_pane_1_g2_ParamLimits

0xaa03,	// (0x0003a3da) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0003f2bf) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0003f2bf) ai_gene_pane_1_g

0xaa10,	// (0x0003a3e7) ai_gene_pane_1_t1_ParamLimits

0xaa10,	// (0x0003a3e7) ai_gene_pane_1_t1

0xaa44,	// (0x0003a41b) grid_ai_soft_ind_pane

0xa9e2,	// (0x0003a3b9) ai_gene_pane_2_t1_ParamLimits

0xa9e2,	// (0x0003a3b9) ai_gene_pane_2_t1

0x5aef,	// (0x000354c6) main_pane_empty_t1_ParamLimits

0x5aef,	// (0x000354c6) main_pane_empty_t1

0x5b07,	// (0x000354de) main_pane_empty_t2_ParamLimits

0x5b07,	// (0x000354de) main_pane_empty_t2

0x5b1c,	// (0x000354f3) main_pane_empty_t3_ParamLimits

0x5b1c,	// (0x000354f3) main_pane_empty_t3

0x5b2e,	// (0x00035505) main_pane_empty_t4_ParamLimits

0x5b2e,	// (0x00035505) main_pane_empty_t4

0x5b40,	// (0x00035517) main_pane_empty_t5_ParamLimits

0x5b40,	// (0x00035517) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003ef26) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003ef26) main_pane_empty_t

0x293f,	// (0x00032316) bg_popup_window_pane_ParamLimits

0x293f,	// (0x00032316) bg_popup_window_pane

0xa744,	// (0x0003a11b) find_popup_pane_cp2_ParamLimits

0xa744,	// (0x0003a11b) find_popup_pane_cp2

0xa750,	// (0x0003a127) heading_pane_ParamLimits

0xa750,	// (0x0003a127) heading_pane

0x21ba,	// (0x00031b91) bg_popup_sub_pane

0xa6be,	// (0x0003a095) bg_popup_window_pane_g1_ParamLimits

0xa6be,	// (0x0003a095) bg_popup_window_pane_g1

0xa6ca,	// (0x0003a0a1) bg_popup_window_pane_g2_ParamLimits

0xa6ca,	// (0x0003a0a1) bg_popup_window_pane_g2

0xa6d6,	// (0x0003a0ad) bg_popup_window_pane_g3_ParamLimits

0xa6d6,	// (0x0003a0ad) bg_popup_window_pane_g3

0xa6e2,	// (0x0003a0b9) bg_popup_window_pane_g4_ParamLimits

0xa6e2,	// (0x0003a0b9) bg_popup_window_pane_g4

0xa6ee,	// (0x0003a0c5) bg_popup_window_pane_g5_ParamLimits

0xa6ee,	// (0x0003a0c5) bg_popup_window_pane_g5

0xa6fa,	// (0x0003a0d1) bg_popup_window_pane_g6_ParamLimits

0xa6fa,	// (0x0003a0d1) bg_popup_window_pane_g6

0xa706,	// (0x0003a0dd) bg_popup_window_pane_g7_ParamLimits

0xa706,	// (0x0003a0dd) bg_popup_window_pane_g7

0xa712,	// (0x0003a0e9) bg_popup_window_pane_g8_ParamLimits

0xa712,	// (0x0003a0e9) bg_popup_window_pane_g8

0xa71e,	// (0x0003a0f5) bg_popup_window_pane_g9_ParamLimits

0xa71e,	// (0x0003a0f5) bg_popup_window_pane_g9

0xa72a,	// (0x0003a101) bg_popup_window_pane_g10_ParamLimits

0xa72a,	// (0x0003a101) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0003f287) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0003f287) bg_popup_window_pane_g

0xa653,	// (0x0003a02a) bg_popup_heading_pane_ParamLimits

0xa653,	// (0x0003a02a) bg_popup_heading_pane

0x79c4,	// (0x0003739b) tabs_4_passive_pane_cp_srt_ParamLimits

0x79c4,	// (0x0003739b) tabs_4_passive_pane_cp_srt

0x79d6,	// (0x000373ad) tabs_4_passive_pane_srt_ParamLimits

0xa667,	// (0x0003a03e) heading_pane_g2

0x79d6,	// (0x000373ad) tabs_4_passive_pane_srt

0x943e,	// (0x00038e15) bg_passive_tab_pane_cp3_srt_ParamLimits

0x943e,	// (0x00038e15) bg_passive_tab_pane_cp3_srt

0xa66f,	// (0x0003a046) heading_pane_t1_ParamLimits

0xa66f,	// (0x0003a046) heading_pane_t1

0xa686,	// (0x0003a05d) heading_pane_t2_ParamLimits

0xa686,	// (0x0003a05d) heading_pane_t2

0x0001,

0xf8ab,	// (0x0003f282) heading_pane_t_ParamLimits

0xf8ab,	// (0x0003f282) heading_pane_t

0xa17e,	// (0x00039b55) bg_popup_heading_pane_g1

0xa22d,	// (0x00039c04) bg_popup_heading_pane_g2

0xa237,	// (0x00039c0e) bg_popup_heading_pane_g3

0xa241,	// (0x00039c18) bg_popup_heading_pane_g4

0xa24b,	// (0x00039c22) bg_popup_heading_pane_g5

0xa255,	// (0x00039c2c) bg_popup_heading_pane_g6

0xa25d,	// (0x00039c34) bg_popup_heading_pane_g7

0xa265,	// (0x00039c3c) bg_popup_heading_pane_g8

0xa26f,	// (0x00039c46) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0003f23e) bg_popup_heading_pane_g

0x9976,	// (0x0003934d) bg_popup_sub_pane_g1

0x9986,	// (0x0003935d) bg_popup_sub_pane_g2

0x997e,	// (0x00039355) bg_popup_sub_pane_g3

0x9996,	// (0x0003936d) bg_popup_sub_pane_g4

0x998e,	// (0x00039365) bg_popup_sub_pane_g5

0x999e,	// (0x00039375) bg_popup_sub_pane_g6

0x99a6,	// (0x0003937d) bg_popup_sub_pane_g7

0x99b6,	// (0x0003938d) bg_popup_sub_pane_g8

0x99ae,	// (0x00039385) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0003f218) bg_popup_sub_pane_g

0x2208,	// (0x00031bdf) bg_popup_window_pane_cp5_ParamLimits

0x2208,	// (0x00031bdf) bg_popup_window_pane_cp5

0x2357,	// (0x00031d2e) popup_note_window_g1_ParamLimits

0x2357,	// (0x00031d2e) popup_note_window_g1

0x2363,	// (0x00031d3a) popup_note_window_t1_ParamLimits

0x2363,	// (0x00031d3a) popup_note_window_t1

0x2379,	// (0x00031d50) popup_note_window_t2_ParamLimits

0x2379,	// (0x00031d50) popup_note_window_t2

0x238f,	// (0x00031d66) popup_note_window_t3_ParamLimits

0x238f,	// (0x00031d66) popup_note_window_t3

0x23a5,	// (0x00031d7c) popup_note_window_t4_ParamLimits

0x23a5,	// (0x00031d7c) popup_note_window_t4

0x23cd,	// (0x00031da4) popup_note_window_t5_ParamLimits

0x23cd,	// (0x00031da4) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003ef31) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003ef31) popup_note_window_t

0x2417,	// (0x00031dee) bg_popup_window_pane_cp6_ParamLimits

0x2417,	// (0x00031dee) bg_popup_window_pane_cp6

0xa0fa,	// (0x00039ad1) popup_note_image_window_g1_ParamLimits

0xa0fa,	// (0x00039ad1) popup_note_image_window_g1

0xa106,	// (0x00039add) popup_note_image_window_g2_ParamLimits

0xa106,	// (0x00039add) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0003f20c) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0003f20c) popup_note_image_window_g

0xa11f,	// (0x00039af6) popup_note_image_window_t1_ParamLimits

0xa11f,	// (0x00039af6) popup_note_image_window_t1

0xa138,	// (0x00039b0f) popup_note_image_window_t2_ParamLimits

0xa138,	// (0x00039b0f) popup_note_image_window_t2

0xa151,	// (0x00039b28) popup_note_image_window_t3_ParamLimits

0xa151,	// (0x00039b28) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0003f211) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0003f211) popup_note_image_window_t

0x9fba,	// (0x00039991) bg_popup_window_pane_cp7_ParamLimits

0x9fba,	// (0x00039991) bg_popup_window_pane_cp7

0x9fea,	// (0x000399c1) popup_note_wait_window_g1_ParamLimits

0x9fea,	// (0x000399c1) popup_note_wait_window_g1

0x9ff6,	// (0x000399cd) popup_note_wait_window_g2_ParamLimits

0x9ff6,	// (0x000399cd) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0003f1fa) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0003f1fa) popup_note_wait_window_g

0xa00e,	// (0x000399e5) popup_note_wait_window_t1_ParamLimits

0xa00e,	// (0x000399e5) popup_note_wait_window_t1

0xa035,	// (0x00039a0c) popup_note_wait_window_t2_ParamLimits

0xa035,	// (0x00039a0c) popup_note_wait_window_t2

0xa053,	// (0x00039a2a) popup_note_wait_window_t3_ParamLimits

0xa053,	// (0x00039a2a) popup_note_wait_window_t3

0xa066,	// (0x00039a3d) popup_note_wait_window_t4_ParamLimits

0xa066,	// (0x00039a3d) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0003f201) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0003f201) popup_note_wait_window_t

0xa08b,	// (0x00039a62) wait_bar_pane_ParamLimits

0xa08b,	// (0x00039a62) wait_bar_pane

0x21ba,	// (0x00031b91) wait_anim_pane

0x21ba,	// (0x00031b91) wait_border_pane

0x21b0,	// (0x00031b87) wait_anim_pane_g1

0x21b0,	// (0x00031b87) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003f0b5) wait_anim_pane_g

0x9f5e,	// (0x00039935) wait_border_pane_g1

0x9f69,	// (0x00039940) wait_border_pane_g2

0x9f72,	// (0x00039949) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0003f1f3) wait_border_pane_g

0x9dc8,	// (0x0003979f) bg_popup_window_pane_cp16_ParamLimits

0x9dc8,	// (0x0003979f) bg_popup_window_pane_cp16

0x9ec8,	// (0x0003989f) indicator_popup_pane_cp4_ParamLimits

0x9ec8,	// (0x0003989f) indicator_popup_pane_cp4

0x9edc,	// (0x000398b3) popup_query_data_window_t1_ParamLimits

0x9edc,	// (0x000398b3) popup_query_data_window_t1

0x9eee,	// (0x000398c5) popup_query_data_window_t2_ParamLimits

0x9eee,	// (0x000398c5) popup_query_data_window_t2

0x9f07,	// (0x000398de) popup_query_data_window_t3_ParamLimits

0x9f07,	// (0x000398de) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0003f1ec) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0003f1ec) popup_query_data_window_t

0x9f21,	// (0x000398f8) query_popup_data_pane_ParamLimits

0x9f21,	// (0x000398f8) query_popup_data_pane

0x9f35,	// (0x0003990c) query_popup_data_pane_cp1_ParamLimits

0x9f35,	// (0x0003990c) query_popup_data_pane_cp1

0x9dc8,	// (0x0003979f) bg_popup_window_pane_cp10_ParamLimits

0x9dc8,	// (0x0003979f) bg_popup_window_pane_cp10

0x9dfa,	// (0x000397d1) indicator_popup_pane_ParamLimits

0x9dfa,	// (0x000397d1) indicator_popup_pane

0x9e1c,	// (0x000397f3) popup_query_code_window_t1_ParamLimits

0x9e1c,	// (0x000397f3) popup_query_code_window_t1

0x9e36,	// (0x0003980d) popup_query_code_window_t2_ParamLimits

0x9e36,	// (0x0003980d) popup_query_code_window_t2

0x9e7f,	// (0x00039856) popup_query_code_window_t3_ParamLimits

0x9e7f,	// (0x00039856) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0003f1e5) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0003f1e5) popup_query_code_window_t

0x9eae,	// (0x00039885) query_popup_pane_ParamLimits

0x9eae,	// (0x00039885) query_popup_pane

0x2417,	// (0x00031dee) bg_popup_window_pane_cp15_ParamLimits

0x2417,	// (0x00031dee) bg_popup_window_pane_cp15

0x2437,	// (0x00031e0e) indicator_popup_pane_cp1_ParamLimits

0x2437,	// (0x00031e0e) indicator_popup_pane_cp1

0x244a,	// (0x00031e21) indicator_popup_pane_cp2_ParamLimits

0x244a,	// (0x00031e21) indicator_popup_pane_cp2

0x2465,	// (0x00031e3c) popup_query_data_code_window_g1_ParamLimits

0x2465,	// (0x00031e3c) popup_query_data_code_window_g1

0x2478,	// (0x00031e4f) popup_query_data_code_window_t1_ParamLimits

0x2478,	// (0x00031e4f) popup_query_data_code_window_t1

0x248a,	// (0x00031e61) popup_query_data_code_window_t2_ParamLimits

0x248a,	// (0x00031e61) popup_query_data_code_window_t2

0x249c,	// (0x00031e73) popup_query_data_code_window_t3_ParamLimits

0x249c,	// (0x00031e73) popup_query_data_code_window_t3

0x24b2,	// (0x00031e89) popup_query_data_code_window_t4_ParamLimits

0x24b2,	// (0x00031e89) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003ef3c) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003ef3c) popup_query_data_code_window_t

0x7579,	// (0x00036f50) list_single_midp_graphic_pane_g3

0x24cc,	// (0x00031ea3) query_popup_data_pane_cp2_ParamLimits

0x24df,	// (0x00031eb6) query_popup_pane_cp2_ParamLimits

0x24df,	// (0x00031eb6) query_popup_pane_cp2

0x21ba,	// (0x00031b91) bg_popup_window_pane_cp11

0x9dac,	// (0x00039783) heading_pane_cp5

0x9db4,	// (0x0003978b) listscroll_popup_info_pane

0x21ba,	// (0x00031b91) input_focus_pane_cp3

0x24fa,	// (0x00031ed1) query_popup_pane_t1

0x2508,	// (0x00031edf) list_popup_info_pane_ParamLimits

0x2508,	// (0x00031edf) list_popup_info_pane

0x2517,	// (0x00031eee) listscroll_popup_info_pane_g1

0x251f,	// (0x00031ef6) scroll_pane_cp7

0x2529,	// (0x00031f00) popup_info_list_pane_t1_ParamLimits

0x2529,	// (0x00031f00) popup_info_list_pane_t1

0x2543,	// (0x00031f1a) popup_info_list_pane_t2_ParamLimits

0x2543,	// (0x00031f1a) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003ef45) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003ef45) popup_info_list_pane_t

0x21ba,	// (0x00031b91) bg_popup_window_pane_cp12

0xb195,	// (0x0003ab6c) find_popup_pane

0x2216,	// (0x00031bed) bg_popup_window_pane_cp3

0x255d,	// (0x00031f34) heading_pane_cp3

0x256c,	// (0x00031f43) listscroll_popup_graphic_pane

0x21ba,	// (0x00031b91) bg_popup_window_pane_cp4

0x5ba2,	// (0x00035579) heading_pane_cp4

0x257c,	// (0x00031f53) listscroll_popup_colour_pane

0x5bac,	// (0x00035583) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5bac,	// (0x00035583) cell_large_graphic_colour_none_popup_pane

0x5bc0,	// (0x00035597) grid_large_graphic_colour_popup_pane_ParamLimits

0x5bc0,	// (0x00035597) grid_large_graphic_colour_popup_pane

0x5bec,	// (0x000355c3) listscroll_popup_colour_pane_g1_ParamLimits

0x5bec,	// (0x000355c3) listscroll_popup_colour_pane_g1

0x5c03,	// (0x000355da) listscroll_popup_colour_pane_g2_ParamLimits

0x5c03,	// (0x000355da) listscroll_popup_colour_pane_g2

0x5c1a,	// (0x000355f1) listscroll_popup_colour_pane_g3_ParamLimits

0x5c1a,	// (0x000355f1) listscroll_popup_colour_pane_g3

0x5c2a,	// (0x00035601) listscroll_popup_colour_pane_g4_ParamLimits

0x5c2a,	// (0x00035601) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003ef4a) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003ef4a) listscroll_popup_colour_pane_g

0x2584,	// (0x00031f5b) scroll_pane_cp6_ParamLimits

0x2584,	// (0x00031f5b) scroll_pane_cp6

0x5c3e,	// (0x00035615) cell_large_graphic_colour_popup_pane_ParamLimits

0x5c3e,	// (0x00035615) cell_large_graphic_colour_popup_pane

0x2596,	// (0x00031f6d) cell_large_graphic_colour_none_popup_pane_t1

0x21ba,	// (0x00031b91) grid_highlight_pane_cp5

0x25a5,	// (0x00031f7c) cell_large_graphic_colour_popup_pane_g1

0x25ad,	// (0x00031f84) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003ef53) cell_large_graphic_colour_popup_pane_g

0x25b5,	// (0x00031f8c) cell_large_graphic_colour_popup_pane_g2_copy1

0x25be,	// (0x00031f95) grid_highlight_pane_cp4

0x25c6,	// (0x00031f9d) bg_popup_window_pane_cp8_ParamLimits

0x25c6,	// (0x00031f9d) bg_popup_window_pane_cp8

0x25e1,	// (0x00031fb8) popup_snote_single_text_window_g1_ParamLimits

0x25e1,	// (0x00031fb8) popup_snote_single_text_window_g1

0x25f3,	// (0x00031fca) popup_snote_single_text_window_t1_ParamLimits

0x25f3,	// (0x00031fca) popup_snote_single_text_window_t1

0x2606,	// (0x00031fdd) popup_snote_single_text_window_t2_ParamLimits

0x2606,	// (0x00031fdd) popup_snote_single_text_window_t2

0x2619,	// (0x00031ff0) popup_snote_single_text_window_t3_ParamLimits

0x2619,	// (0x00031ff0) popup_snote_single_text_window_t3

0x2652,	// (0x00032029) popup_snote_single_text_window_t4_ParamLimits

0x2652,	// (0x00032029) popup_snote_single_text_window_t4

0x2686,	// (0x0003205d) popup_snote_single_text_window_t5_ParamLimits

0x2686,	// (0x0003205d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003ef58) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003ef58) popup_snote_single_text_window_t

0x26b5,	// (0x0003208c) bg_popup_window_pane_cp9_ParamLimits

0x26b5,	// (0x0003208c) bg_popup_window_pane_cp9

0x25e1,	// (0x00031fb8) popup_snote_single_graphic_window_g1_ParamLimits

0x25e1,	// (0x00031fb8) popup_snote_single_graphic_window_g1

0x26c3,	// (0x0003209a) popup_snote_single_graphic_window_g2_ParamLimits

0x26c3,	// (0x0003209a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003ef63) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003ef63) popup_snote_single_graphic_window_g

0x26cf,	// (0x000320a6) popup_snote_single_graphic_window_t1_ParamLimits

0x26cf,	// (0x000320a6) popup_snote_single_graphic_window_t1

0x26e2,	// (0x000320b9) popup_snote_single_graphic_window_t2_ParamLimits

0x26e2,	// (0x000320b9) popup_snote_single_graphic_window_t2

0x26f5,	// (0x000320cc) popup_snote_single_graphic_window_t3_ParamLimits

0x26f5,	// (0x000320cc) popup_snote_single_graphic_window_t3

0x272e,	// (0x00032105) popup_snote_single_graphic_window_t4_ParamLimits

0x272e,	// (0x00032105) popup_snote_single_graphic_window_t4

0x2762,	// (0x00032139) popup_snote_single_graphic_window_t5_ParamLimits

0x2762,	// (0x00032139) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003ef68) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003ef68) popup_snote_single_graphic_window_t

0xb0d3,	// (0x0003aaaa) grid_graphic_popup_pane_ParamLimits

0xb0d3,	// (0x0003aaaa) grid_graphic_popup_pane

0xb101,	// (0x0003aad8) listscroll_popup_graphic_pane_g1_ParamLimits

0xb101,	// (0x0003aad8) listscroll_popup_graphic_pane_g1

0xb115,	// (0x0003aaec) listscroll_popup_graphic_pane_g2_ParamLimits

0xb115,	// (0x0003aaec) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0003f362) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0003f362) listscroll_popup_graphic_pane_g

0xb129,	// (0x0003ab00) scroll_pane_cp5

0xb06b,	// (0x0003aa42) cell_graphic_popup_pane_ParamLimits

0xb06b,	// (0x0003aa42) cell_graphic_popup_pane

0xb04c,	// (0x0003aa23) cell_graphic_popup_pane_g1

0xb054,	// (0x0003aa2b) cell_graphic_popup_pane_g2

0x25b5,	// (0x00031f8c) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0003f35b) cell_graphic_popup_pane_g

0xb05d,	// (0x0003aa34) cell_graphic_popup_pane_t2

0x25be,	// (0x00031f95) grid_highlight_pane_cp3

0x27a3,	// (0x0003217a) list_gen_pane_ParamLimits

0x27a3,	// (0x0003217a) list_gen_pane

0x27cb,	// (0x000321a2) scroll_pane

0xafa4,	// (0x0003a97b) bg_list_pane_g1_ParamLimits

0xafa4,	// (0x0003a97b) bg_list_pane_g1

0xafc1,	// (0x0003a998) bg_list_pane_g2_ParamLimits

0xafc1,	// (0x0003a998) bg_list_pane_g2

0xafd6,	// (0x0003a9ad) bg_list_pane_g3_ParamLimits

0xafd6,	// (0x0003a9ad) bg_list_pane_g3

0xafea,	// (0x0003a9c1) bg_list_pane_g4_ParamLimits

0xafea,	// (0x0003a9c1) bg_list_pane_g4

0xaffe,	// (0x0003a9d5) bg_list_pane_g5_ParamLimits

0xaffe,	// (0x0003a9d5) bg_list_pane_g5

0x0004,

0xf979,	// (0x0003f350) bg_list_pane_g_ParamLimits

0xf979,	// (0x0003f350) bg_list_pane_g

0xaf25,	// (0x0003a8fc) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double2_graphic_large_graphic_pane

0xaf25,	// (0x0003a8fc) list_double2_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double2_graphic_pane

0xaf25,	// (0x0003a8fc) list_double2_large_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double2_large_graphic_pane

0xaf25,	// (0x0003a8fc) list_double2_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double2_pane

0xaf25,	// (0x0003a8fc) list_double_graphic_heading_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double_graphic_heading_pane

0xaf25,	// (0x0003a8fc) list_double_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double_graphic_pane

0xaf25,	// (0x0003a8fc) list_double_heading_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double_heading_pane

0xaf25,	// (0x0003a8fc) list_double_large_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double_large_graphic_pane

0xaf25,	// (0x0003a8fc) list_double_number_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double_number_pane

0xaf25,	// (0x0003a8fc) list_double_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double_pane

0xaf25,	// (0x0003a8fc) list_double_time_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_double_time_pane

0xaf25,	// (0x0003a8fc) list_setting_number_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_setting_number_pane

0xaf25,	// (0x0003a8fc) list_setting_pane_ParamLimits

0xaf25,	// (0x0003a8fc) list_setting_pane

0x7959,	// (0x00037330) list_single_2graphic_pane_ParamLimits

0x7959,	// (0x00037330) list_single_2graphic_pane

0x7959,	// (0x00037330) list_single_graphic_heading_pane_ParamLimits

0x7959,	// (0x00037330) list_single_graphic_heading_pane

0x7959,	// (0x00037330) list_single_graphic_pane_ParamLimits

0x7959,	// (0x00037330) list_single_graphic_pane

0x7959,	// (0x00037330) list_single_heading_pane_ParamLimits

0x7959,	// (0x00037330) list_single_heading_pane

0xaf89,	// (0x0003a960) list_single_large_graphic_pane_ParamLimits

0xaf89,	// (0x0003a960) list_single_large_graphic_pane

0x7959,	// (0x00037330) list_single_number_heading_pane_ParamLimits

0x7959,	// (0x00037330) list_single_number_heading_pane

0x7959,	// (0x00037330) list_single_number_pane_ParamLimits

0x7959,	// (0x00037330) list_single_number_pane

0x7959,	// (0x00037330) list_single_pane_ParamLimits

0x7959,	// (0x00037330) list_single_pane

0x21ba,	// (0x00031b91) list_highlight_pane_cp1

0x5c75,	// (0x0003564c) list_single_pane_g1_ParamLimits

0x5c75,	// (0x0003564c) list_single_pane_g1

0x5c81,	// (0x00035658) list_single_pane_g2_ParamLimits

0x5c81,	// (0x00035658) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003ef7a) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003ef7a) list_single_pane_g

0x792b,	// (0x00037302) list_single_pane_t1_ParamLimits

0x792b,	// (0x00037302) list_single_pane_t1

0x5c75,	// (0x0003564c) list_single_number_pane_g1_ParamLimits

0x5c75,	// (0x0003564c) list_single_number_pane_g1

0x5c81,	// (0x00035658) list_single_number_pane_g2_ParamLimits

0x5c81,	// (0x00035658) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003ef7a) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003ef7a) list_single_number_pane_g

0x785d,	// (0x00037234) list_single_number_pane_t1_ParamLimits

0x785d,	// (0x00037234) list_single_number_pane_t1

0x7873,	// (0x0003724a) list_single_number_pane_t2_ParamLimits

0x7873,	// (0x0003724a) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0003f311) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0003f311) list_single_number_pane_t

0x5c69,	// (0x00035640) list_single_graphic_pane_g1_ParamLimits

0x5c69,	// (0x00035640) list_single_graphic_pane_g1

0x5c75,	// (0x0003564c) list_single_graphic_pane_g2_ParamLimits

0x5c75,	// (0x0003564c) list_single_graphic_pane_g2

0x5c81,	// (0x00035658) list_single_graphic_pane_g3_ParamLimits

0x5c81,	// (0x00035658) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003ef73) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003ef73) list_single_graphic_pane_g

0x5c8d,	// (0x00035664) list_single_graphic_pane_t1_ParamLimits

0x5c8d,	// (0x00035664) list_single_graphic_pane_t1

0x5c75,	// (0x0003564c) list_single_heading_pane_g1_ParamLimits

0x5c75,	// (0x0003564c) list_single_heading_pane_g1

0x5c81,	// (0x00035658) list_single_heading_pane_g2_ParamLimits

0x5c81,	// (0x00035658) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003ef7a) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003ef7a) list_single_heading_pane_g

0x5ca3,	// (0x0003567a) list_single_heading_pane_t1_ParamLimits

0x5ca3,	// (0x0003567a) list_single_heading_pane_t1

0x5cb9,	// (0x00035690) list_single_heading_pane_t2_ParamLimits

0x5cb9,	// (0x00035690) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003ef7f) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003ef7f) list_single_heading_pane_t

0x5c75,	// (0x0003564c) list_single_number_heading_pane_g1_ParamLimits

0x5c75,	// (0x0003564c) list_single_number_heading_pane_g1

0x5c81,	// (0x00035658) list_single_number_heading_pane_g2_ParamLimits

0x5c81,	// (0x00035658) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003ef7a) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003ef7a) list_single_number_heading_pane_g

0x5ca3,	// (0x0003567a) list_single_number_heading_pane_t1_ParamLimits

0x5ca3,	// (0x0003567a) list_single_number_heading_pane_t1

0x5ccb,	// (0x000356a2) list_single_number_heading_pane_t2_ParamLimits

0x5ccb,	// (0x000356a2) list_single_number_heading_pane_t2

0x5cdd,	// (0x000356b4) list_single_number_heading_pane_t3_ParamLimits

0x5cdd,	// (0x000356b4) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003ef84) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003ef84) list_single_number_heading_pane_t

0x5cef,	// (0x000356c6) list_single_graphic_heading_pane_g1_ParamLimits

0x5cef,	// (0x000356c6) list_single_graphic_heading_pane_g1

0x5cfb,	// (0x000356d2) list_single_graphic_heading_pane_g4_ParamLimits

0x5cfb,	// (0x000356d2) list_single_graphic_heading_pane_g4

0x5c81,	// (0x00035658) list_single_graphic_heading_pane_g5_ParamLimits

0x5c81,	// (0x00035658) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003ef8b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003ef8b) list_single_graphic_heading_pane_g

0x5ca3,	// (0x0003567a) list_single_graphic_heading_pane_t1_ParamLimits

0x5ca3,	// (0x0003567a) list_single_graphic_heading_pane_t1

0x5d0c,	// (0x000356e3) list_single_graphic_heading_pane_t2_ParamLimits

0x5d0c,	// (0x000356e3) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003ef92) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003ef92) list_single_graphic_heading_pane_t

0x5d1e,	// (0x000356f5) list_single_large_graphic_pane_g1_ParamLimits

0x5d1e,	// (0x000356f5) list_single_large_graphic_pane_g1

0x5d2a,	// (0x00035701) list_single_large_graphic_pane_g2_ParamLimits

0x5d2a,	// (0x00035701) list_single_large_graphic_pane_g2

0x5d36,	// (0x0003570d) list_single_large_graphic_pane_g3_ParamLimits

0x5d36,	// (0x0003570d) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003ef97) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003ef97) list_single_large_graphic_pane_g

0x9f69,	// (0x00039940) wait_border_pane_g2_copy1

0x5d42,	// (0x00035719) list_single_large_graphic_pane_g4_cp2

0x5d4a,	// (0x00035721) list_single_large_graphic_pane_t1_ParamLimits

0x5d4a,	// (0x00035721) list_single_large_graphic_pane_t1

0x4522,	// (0x00033ef9) list_double_pane_g1_ParamLimits

0x4522,	// (0x00033ef9) list_double_pane_g1

0x5d60,	// (0x00035737) list_double_pane_g2_ParamLimits

0x5d60,	// (0x00035737) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0003ef9e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0003ef9e) list_double_pane_g

0x5d6c,	// (0x00035743) list_double_pane_t1_ParamLimits

0x5d6c,	// (0x00035743) list_double_pane_t1

0x5d82,	// (0x00035759) list_double_pane_t2_ParamLimits

0x5d82,	// (0x00035759) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003efa3) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003efa3) list_double_pane_t

0x5d94,	// (0x0003576b) list_double2_pane_g1_ParamLimits

0x5d94,	// (0x0003576b) list_double2_pane_g1

0x5da5,	// (0x0003577c) list_double2_pane_g2_ParamLimits

0x5da5,	// (0x0003577c) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003efa8) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003efa8) list_double2_pane_g

0x5db1,	// (0x00035788) list_double2_pane_t1_ParamLimits

0x5db1,	// (0x00035788) list_double2_pane_t1

0x5dc7,	// (0x0003579e) list_double2_pane_t2_ParamLimits

0x5dc7,	// (0x0003579e) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0003efad) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0003efad) list_double2_pane_t

0x4522,	// (0x00033ef9) list_double_number_pane_g1_ParamLimits

0x4522,	// (0x00033ef9) list_double_number_pane_g1

0x5d60,	// (0x00035737) list_double_number_pane_g2_ParamLimits

0x5d60,	// (0x00035737) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0003ef9e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0003ef9e) list_double_number_pane_g

0x5dd9,	// (0x000357b0) list_double_number_pane_t1_ParamLimits

0x5dd9,	// (0x000357b0) list_double_number_pane_t1

0x5deb,	// (0x000357c2) list_double_number_pane_t2_ParamLimits

0x5deb,	// (0x000357c2) list_double_number_pane_t2

0x5e01,	// (0x000357d8) list_double_number_pane_t3_ParamLimits

0x5e01,	// (0x000357d8) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003efb2) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003efb2) list_double_number_pane_t

0x5e13,	// (0x000357ea) list_double_graphic_pane_g1_ParamLimits

0x5e13,	// (0x000357ea) list_double_graphic_pane_g1

0x5e1f,	// (0x000357f6) list_double_graphic_pane_g2_ParamLimits

0x5e1f,	// (0x000357f6) list_double_graphic_pane_g2

0x5e2e,	// (0x00035805) list_double_graphic_pane_g3_ParamLimits

0x5e2e,	// (0x00035805) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003efb9) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003efb9) list_double_graphic_pane_g

0x5e46,	// (0x0003581d) list_double_graphic_pane_t1_ParamLimits

0x5e46,	// (0x0003581d) list_double_graphic_pane_t1

0x5e5c,	// (0x00035833) list_double_graphic_pane_t2_ParamLimits

0x5e5c,	// (0x00035833) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0003efc2) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0003efc2) list_double_graphic_pane_t

0x5e6e,	// (0x00035845) list_double2_graphic_pane_g1_ParamLimits

0x5e6e,	// (0x00035845) list_double2_graphic_pane_g1

0x5e7a,	// (0x00035851) list_double2_graphic_pane_g2_ParamLimits

0x5e7a,	// (0x00035851) list_double2_graphic_pane_g2

0x5e86,	// (0x0003585d) list_double2_graphic_pane_g3_ParamLimits

0x5e86,	// (0x0003585d) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003efc7) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003efc7) list_double2_graphic_pane_g

0x5e92,	// (0x00035869) list_double2_graphic_pane_t1_ParamLimits

0x5e92,	// (0x00035869) list_double2_graphic_pane_t1

0x5ea8,	// (0x0003587f) list_double2_graphic_pane_t2_ParamLimits

0x5ea8,	// (0x0003587f) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0003efce) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0003efce) list_double2_graphic_pane_t

0x5eba,	// (0x00035891) list_double_large_graphic_pane_g1_ParamLimits

0x5eba,	// (0x00035891) list_double_large_graphic_pane_g1

0x5ed9,	// (0x000358b0) list_double_large_graphic_pane_g2_ParamLimits

0x5ed9,	// (0x000358b0) list_double_large_graphic_pane_g2

0x5d60,	// (0x00035737) list_double_large_graphic_pane_g3_ParamLimits

0x5d60,	// (0x00035737) list_double_large_graphic_pane_g3

0x5eea,	// (0x000358c1) list_double_large_graphic_pane_g4_ParamLimits

0x5eea,	// (0x000358c1) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0003efd3) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0003efd3) list_double_large_graphic_pane_g

0x5efd,	// (0x000358d4) list_double_large_graphic_pane_t1_ParamLimits

0x5efd,	// (0x000358d4) list_double_large_graphic_pane_t1

0x5f16,	// (0x000358ed) list_double_large_graphic_pane_t2_ParamLimits

0x5f16,	// (0x000358ed) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003efde) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003efde) list_double_large_graphic_pane_t

0x5f28,	// (0x000358ff) list_double2_large_graphic_pane_g1_ParamLimits

0x5f28,	// (0x000358ff) list_double2_large_graphic_pane_g1

0x5d94,	// (0x0003576b) list_double2_large_graphic_pane_g2_ParamLimits

0x5d94,	// (0x0003576b) list_double2_large_graphic_pane_g2

0x5da5,	// (0x0003577c) list_double2_large_graphic_pane_g3_ParamLimits

0x5da5,	// (0x0003577c) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0003efe3) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003efe3) list_double2_large_graphic_pane_g

0x5f34,	// (0x0003590b) list_double2_large_graphic_pane_t1_ParamLimits

0x5f34,	// (0x0003590b) list_double2_large_graphic_pane_t1

0x5f4a,	// (0x00035921) list_double2_large_graphic_pane_t2_ParamLimits

0x5f4a,	// (0x00035921) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003efea) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003efea) list_double2_large_graphic_pane_t

0x5f5c,	// (0x00035933) list_double_heading_pane_g1_ParamLimits

0x5f5c,	// (0x00035933) list_double_heading_pane_g1

0x5f6d,	// (0x00035944) list_double_heading_pane_g2_ParamLimits

0x5f6d,	// (0x00035944) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003efef) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003efef) list_double_heading_pane_g

0x5f79,	// (0x00035950) list_double_heading_pane_t1_ParamLimits

0x5f79,	// (0x00035950) list_double_heading_pane_t1

0x5dc7,	// (0x0003579e) list_double_heading_pane_t2_ParamLimits

0x5dc7,	// (0x0003579e) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0003eff4) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0003eff4) list_double_heading_pane_t

0x5e6e,	// (0x00035845) list_double_graphic_heading_pane_g1_ParamLimits

0x5e6e,	// (0x00035845) list_double_graphic_heading_pane_g1

0x5f5c,	// (0x00035933) list_double_graphic_heading_pane_g2_ParamLimits

0x5f5c,	// (0x00035933) list_double_graphic_heading_pane_g2

0x5f6d,	// (0x00035944) list_double_graphic_heading_pane_g3_ParamLimits

0x5f6d,	// (0x00035944) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003eff9) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003eff9) list_double_graphic_heading_pane_g

0x5f8f,	// (0x00035966) list_double_graphic_heading_pane_t1_ParamLimits

0x5f8f,	// (0x00035966) list_double_graphic_heading_pane_t1

0x5ea8,	// (0x0003587f) list_double_graphic_heading_pane_t2_ParamLimits

0x5ea8,	// (0x0003587f) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003f000) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003f000) list_double_graphic_heading_pane_t

0x5ed9,	// (0x000358b0) list_double_time_pane_g1_ParamLimits

0x5ed9,	// (0x000358b0) list_double_time_pane_g1

0x5d60,	// (0x00035737) list_double_time_pane_g2_ParamLimits

0x5d60,	// (0x00035737) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0003f005) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0003f005) list_double_time_pane_g

0x5fa5,	// (0x0003597c) list_double_time_pane_t1_ParamLimits

0x5fa5,	// (0x0003597c) list_double_time_pane_t1

0x5fbb,	// (0x00035992) list_double_time_pane_t2_ParamLimits

0x5fbb,	// (0x00035992) list_double_time_pane_t2

0x5fcd,	// (0x000359a4) list_double_time_pane_t3_ParamLimits

0x5fcd,	// (0x000359a4) list_double_time_pane_t3

0x5fdf,	// (0x000359b6) list_double_time_pane_t4_ParamLimits

0x5fdf,	// (0x000359b6) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003f00a) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003f00a) list_double_time_pane_t

0x5ff1,	// (0x000359c8) list_setting_pane_g1_ParamLimits

0x5ff1,	// (0x000359c8) list_setting_pane_g1

0x5f6d,	// (0x00035944) list_setting_pane_g2_ParamLimits

0x5f6d,	// (0x00035944) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0003f013) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0003f013) list_setting_pane_g

0x5ffd,	// (0x000359d4) list_setting_pane_t1_ParamLimits

0x5ffd,	// (0x000359d4) list_setting_pane_t1

0x6014,	// (0x000359eb) list_setting_pane_t2_ParamLimits

0x6014,	// (0x000359eb) list_setting_pane_t2

0x0002,

0xf641,	// (0x0003f018) list_setting_pane_t_ParamLimits

0xf641,	// (0x0003f018) list_setting_pane_t

0x6053,	// (0x00035a2a) set_value_pane_cp_ParamLimits

0x6053,	// (0x00035a2a) set_value_pane_cp

0x6061,	// (0x00035a38) list_setting_number_pane_g1_ParamLimits

0x6061,	// (0x00035a38) list_setting_number_pane_g1

0x606d,	// (0x00035a44) list_setting_number_pane_g2_ParamLimits

0x606d,	// (0x00035a44) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003f01f) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003f01f) list_setting_number_pane_g

0x6079,	// (0x00035a50) list_setting_number_pane_t1_ParamLimits

0x6079,	// (0x00035a50) list_setting_number_pane_t1

0x608d,	// (0x00035a64) list_setting_number_pane_t2_ParamLimits

0x608d,	// (0x00035a64) list_setting_number_pane_t2

0x60a4,	// (0x00035a7b) list_setting_number_pane_t3_ParamLimits

0x60a4,	// (0x00035a7b) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003f024) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003f024) list_setting_number_pane_t

0x6053,	// (0x00035a2a) set_value_pane_ParamLimits

0x6053,	// (0x00035a2a) set_value_pane

0x27ff,	// (0x000321d6) bg_set_opt_pane_ParamLimits

0x27ff,	// (0x000321d6) bg_set_opt_pane

0x4055,	// (0x00033a2c) set_value_pane_t1

0x2820,	// (0x000321f7) slider_set_pane_cp3

0x2829,	// (0x00032200) volume_small_pane_cp

0x2832,	// (0x00032209) list_form_gen_pane

0x283b,	// (0x00032212) scroll_pane_cp8

0x60e7,	// (0x00035abe) form_field_data_pane_ParamLimits

0x60e7,	// (0x00035abe) form_field_data_pane

0x6105,	// (0x00035adc) form_field_data_wide_pane_ParamLimits

0x6105,	// (0x00035adc) form_field_data_wide_pane

0x4073,	// (0x00033a4a) form_field_popup_pane_ParamLimits

0x4073,	// (0x00033a4a) form_field_popup_pane

0x612a,	// (0x00035b01) form_field_popup_wide_pane_ParamLimits

0x612a,	// (0x00035b01) form_field_popup_wide_pane

0x4095,	// (0x00033a6c) form_field_slider_pane_ParamLimits

0x4095,	// (0x00033a6c) form_field_slider_pane

0x40a8,	// (0x00033a7f) form_field_slider_wide_pane_ParamLimits

0x40a8,	// (0x00033a7f) form_field_slider_wide_pane

0x284c,	// (0x00032223) data_form_pane

0x6155,	// (0x00035b2c) form_field_data_pane_t1

0x2858,	// (0x0003222f) input_focus_pane

0x40bb,	// (0x00033a92) data_form_wide_pane

0x40d8,	// (0x00033aaf) form_field_data_wide_pane_t1

0x25d3,	// (0x00031faa) input_focus_pane_cp6

0x616f,	// (0x00035b46) form_field_popup_pane_t1

0x2858,	// (0x0003222f) input_focus_pane_cp7

0x2886,	// (0x0003225d) list_form_pane

0x4102,	// (0x00033ad9) form_field_popup_wide_pane_t1

0x2858,	// (0x0003222f) input_focus_pane_cp8

0x2892,	// (0x00032269) list_form_wide_pane

0x6191,	// (0x00035b68) form_field_slider_pane_t1_ParamLimits

0x6191,	// (0x00035b68) form_field_slider_pane_t1

0x61a9,	// (0x00035b80) form_field_slider_pane_t2_ParamLimits

0x61a9,	// (0x00035b80) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003f034) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003f034) form_field_slider_pane_t

0x2208,	// (0x00031bdf) input_focus_pane_cp9_ParamLimits

0x2208,	// (0x00031bdf) input_focus_pane_cp9

0x61be,	// (0x00035b95) slider_cont_pane_ParamLimits

0x61be,	// (0x00035b95) slider_cont_pane

0x289e,	// (0x00032275) form_field_slider_wide_pane_t1_ParamLimits

0x289e,	// (0x00032275) form_field_slider_wide_pane_t1

0x4117,	// (0x00033aee) form_field_slider_wide_pane_t2_ParamLimits

0x4117,	// (0x00033aee) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003f039) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003f039) form_field_slider_wide_pane_t

0x2208,	// (0x00031bdf) input_focus_pane_cp10_ParamLimits

0x2208,	// (0x00031bdf) input_focus_pane_cp10

0x61d2,	// (0x00035ba9) slider_cont_pane_cp1_ParamLimits

0x61d2,	// (0x00035ba9) slider_cont_pane_cp1

0x61e6,	// (0x00035bbd) slider_form_pane_cp

0x28b0,	// (0x00032287) input_focus_pane_g1

0x28b8,	// (0x0003228f) input_focus_pane_g2

0x28c0,	// (0x00032297) input_focus_pane_g3

0x28c8,	// (0x0003229f) input_focus_pane_g4

0x28d0,	// (0x000322a7) input_focus_pane_g5

0x28d8,	// (0x000322af) input_focus_pane_g6

0x28e0,	// (0x000322b7) input_focus_pane_g7

0x28e8,	// (0x000322bf) input_focus_pane_g8

0x28f0,	// (0x000322c7) input_focus_pane_g9

0x21b0,	// (0x00031b87) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003f03e) input_focus_pane_g

0x9f72,	// (0x00039949) wait_border_pane_g3_copy1

0x61ee,	// (0x00035bc5) data_form_pane_t1

0x21b0,	// (0x00031b87) wait_anim_pane_g1_copy1

0x78fd,	// (0x000372d4) data_form_wide_pane_t1

0x620b,	// (0x00035be2) list_form_graphic_pane_cp_ParamLimits

0x620b,	// (0x00035be2) list_form_graphic_pane_cp

0xaec9,	// (0x0003a8a0) slider_form_pane_g1

0xaed2,	// (0x0003a8a9) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0003f341) slider_form_pane_g

0x4129,	// (0x00033b00) list_form_graphic_pane_ParamLimits

0x4129,	// (0x00033b00) list_form_graphic_pane

0x413b,	// (0x00033b12) list_form_graphic_pane_g1

0x4143,	// (0x00033b1a) list_form_graphic_pane_t1_ParamLimits

0x4143,	// (0x00033b1a) list_form_graphic_pane_t1

0x2216,	// (0x00031bed) list_highlight_pane_cp5_ParamLimits

0x2216,	// (0x00031bed) list_highlight_pane_cp5

0x6220,	// (0x00035bf7) find_pane_g1

0x28f8,	// (0x000322cf) input_find_pane

0x6229,	// (0x00035c00) input_find_pane_g1_ParamLimits

0x6229,	// (0x00035c00) input_find_pane_g1

0x6235,	// (0x00035c0c) input_find_pane_t1_ParamLimits

0x6235,	// (0x00035c0c) input_find_pane_t1

0x624a,	// (0x00035c21) input_find_pane_t2_ParamLimits

0x624a,	// (0x00035c21) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003f053) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003f053) input_find_pane_t

0x2901,	// (0x000322d8) input_focus_pane_cp5_ParamLimits

0x2901,	// (0x000322d8) input_focus_pane_cp5

0x2914,	// (0x000322eb) bg_popup_window_pane_cp2_ParamLimits

0x2914,	// (0x000322eb) bg_popup_window_pane_cp2

0x2921,	// (0x000322f8) listscroll_menu_pane_ParamLimits

0x2921,	// (0x000322f8) listscroll_menu_pane

0x626b,	// (0x00035c42) popup_submenu_window_ParamLimits

0x626b,	// (0x00035c42) popup_submenu_window

0x292d,	// (0x00032304) find_popup_pane_g1

0x2935,	// (0x0003230c) input_popup_find_pane_cp

0x293f,	// (0x00032316) input_focus_pane_cp4_ParamLimits

0x293f,	// (0x00032316) input_focus_pane_cp4

0x294d,	// (0x00032324) input_popup_find_pane_t1_ParamLimits

0x294d,	// (0x00032324) input_popup_find_pane_t1

0x21ba,	// (0x00031b91) bg_popup_sub_pane_cp

0x297b,	// (0x00032352) listscroll_popup_sub_pane

0x2983,	// (0x0003235a) list_submenu_pane_ParamLimits

0x2983,	// (0x0003235a) list_submenu_pane

0x2994,	// (0x0003236b) scroll_pane_cp4

0x299c,	// (0x00032373) list_single_popup_submenu_pane_ParamLimits

0x299c,	// (0x00032373) list_single_popup_submenu_pane

0x29b1,	// (0x00032388) list_single_popup_submenu_pane_g1

0x29b9,	// (0x00032390) list_single_popup_submenu_pane_t1_ParamLimits

0x29b9,	// (0x00032390) list_single_popup_submenu_pane_t1

0x2216,	// (0x00031bed) bg_active_tab_pane_cp1_ParamLimits

0x2216,	// (0x00031bed) bg_active_tab_pane_cp1

0x62a9,	// (0x00035c80) tabs_2_active_pane_g1

0x62b1,	// (0x00035c88) tabs_2_active_pane_t1

0x2216,	// (0x00031bed) bg_passive_tab_pane_cp1_ParamLimits

0x2216,	// (0x00031bed) bg_passive_tab_pane_cp1

0x62a9,	// (0x00035c80) tabs_2_passive_pane_g1

0x62b1,	// (0x00035c88) tabs_2_passive_pane_t1

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp4

0x62d1,	// (0x00035ca8) tabs_2_long_active_pane_t1

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp4

0x7581,	// (0x00036f58) list_single_midp_graphic_pane_g4_ParamLimits

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp5

0x62f0,	// (0x00035cc7) tabs_3_long_active_pane_t1

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp5

0x7581,	// (0x00036f58) list_single_midp_graphic_pane_g4

0x2216,	// (0x00031bed) bg_popup_window_pane_cp13_ParamLimits

0x2216,	// (0x00031bed) bg_popup_window_pane_cp13

0x29d7,	// (0x000323ae) listscroll_popup_fast_pane_ParamLimits

0x29d7,	// (0x000323ae) listscroll_popup_fast_pane

0x29e6,	// (0x000323bd) grid_popup_fast_pane_ParamLimits

0x29e6,	// (0x000323bd) grid_popup_fast_pane

0x29f8,	// (0x000323cf) scroll_pane_cp9_ParamLimits

0x29f8,	// (0x000323cf) scroll_pane_cp9

0xc84f,	// (0x0003c226) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc84f,	// (0x0003c226) list_single_graphic_hl_pane_t1_cp2

0x2a1c,	// (0x000323f3) input_focus_pane_cp20_ParamLimits

0x2a1c,	// (0x000323f3) input_focus_pane_cp20

0x2a2a,	// (0x00032401) query_popup_data_pane_t1_ParamLimits

0x2a2a,	// (0x00032401) query_popup_data_pane_t1

0x2a3d,	// (0x00032414) query_popup_data_pane_t2_ParamLimits

0x2a3d,	// (0x00032414) query_popup_data_pane_t2

0x2a83,	// (0x0003245a) query_popup_data_pane_t3_ParamLimits

0x2a83,	// (0x0003245a) query_popup_data_pane_t3

0x2ac4,	// (0x0003249b) query_popup_data_pane_t4_ParamLimits

0x2ac4,	// (0x0003249b) query_popup_data_pane_t4

0x2b00,	// (0x000324d7) query_popup_data_pane_t5_ParamLimits

0x2b00,	// (0x000324d7) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0003f058) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0003f058) query_popup_data_pane_t

0x28b0,	// (0x00032287) bg_set_opt_pane_g1

0x28b8,	// (0x0003228f) bg_set_opt_pane_g2

0x28c0,	// (0x00032297) bg_set_opt_pane_g3

0x28c8,	// (0x0003229f) bg_set_opt_pane_g4

0x28d0,	// (0x000322a7) bg_set_opt_pane_g5

0x28d8,	// (0x000322af) bg_set_opt_pane_g6

0x28e0,	// (0x000322b7) bg_set_opt_pane_g7

0x28e8,	// (0x000322bf) bg_set_opt_pane_g8

0x28f0,	// (0x000322c7) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003f063) bg_set_opt_pane_g

0x6bb4,	// (0x0003658b) control_top_pane_stacon_ParamLimits

0x6bb4,	// (0x0003658b) control_top_pane_stacon

0x6c07,	// (0x000365de) signal_pane_stacon_ParamLimits

0x6c07,	// (0x000365de) signal_pane_stacon

0x8da0,	// (0x00038777) stacon_top_pane_g1_ParamLimits

0x8da0,	// (0x00038777) stacon_top_pane_g1

0x6c2c,	// (0x00036603) title_pane_stacon_ParamLimits

0x6c2c,	// (0x00036603) title_pane_stacon

0x6c56,	// (0x0003662d) uni_indicator_pane_stacon_ParamLimits

0x6c56,	// (0x0003662d) uni_indicator_pane_stacon

0x6c6b,	// (0x00036642) battery_pane_stacon_ParamLimits

0x6c6b,	// (0x00036642) battery_pane_stacon

0x6caf,	// (0x00036686) control_bottom_pane_stacon_ParamLimits

0x6caf,	// (0x00036686) control_bottom_pane_stacon

0x6cd2,	// (0x000366a9) navi_pane_stacon_ParamLimits

0x6cd2,	// (0x000366a9) navi_pane_stacon

0x8dc2,	// (0x00038799) stacon_bottom_pane_g1_ParamLimits

0x8dc2,	// (0x00038799) stacon_bottom_pane_g1

0x6302,	// (0x00035cd9) aid_levels_signal_lsc_ParamLimits

0x6302,	// (0x00035cd9) aid_levels_signal_lsc

0x6319,	// (0x00035cf0) signal_pane_stacon_g1_ParamLimits

0x6319,	// (0x00035cf0) signal_pane_stacon_g1

0x632d,	// (0x00035d04) signal_pane_stacon_g2_ParamLimits

0x632d,	// (0x00035d04) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003f076) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003f076) signal_pane_stacon_g

0x6362,	// (0x00035d39) title_pane_stacon_t1_ParamLimits

0x6362,	// (0x00035d39) title_pane_stacon_t1

0x2b58,	// (0x0003252f) uni_indicator_pane_stacon_g1

0x2b62,	// (0x00032539) uni_indicator_pane_stacon_g2

0x2b44,	// (0x0003251b) uni_indicator_pane_stacon_g3

0x2b4e,	// (0x00032525) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003f082) uni_indicator_pane_stacon_g

0x6387,	// (0x00035d5e) control_top_pane_stacon_g1

0x638f,	// (0x00035d66) control_top_pane_stacon_t1_ParamLimits

0x638f,	// (0x00035d66) control_top_pane_stacon_t1

0x63c6,	// (0x00035d9d) aid_levels_battery_lsc_ParamLimits

0x63c6,	// (0x00035d9d) aid_levels_battery_lsc

0x63de,	// (0x00035db5) battery_pane_stacon_g1_ParamLimits

0x63de,	// (0x00035db5) battery_pane_stacon_g1

0x63f0,	// (0x00035dc7) battery_pane_stacon_g2_ParamLimits

0x63f0,	// (0x00035dc7) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003f08b) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003f08b) battery_pane_stacon_g

0x642e,	// (0x00035e05) navi_icon_pane_stacon

0x6442,	// (0x00035e19) navi_navi_pane_stacon

0x642e,	// (0x00035e05) navi_text_pane_stacon

0x6458,	// (0x00035e2f) control_bottom_pane_stacon_g1

0x6460,	// (0x00035e37) control_bottom_pane_stacon_t1_ParamLimits

0x6460,	// (0x00035e37) control_bottom_pane_stacon_t1

0x6497,	// (0x00035e6e) grid_app_pane_ParamLimits

0x6497,	// (0x00035e6e) grid_app_pane

0x64b9,	// (0x00035e90) scroll_pane_cp15_ParamLimits

0x64b9,	// (0x00035e90) scroll_pane_cp15

0x64cc,	// (0x00035ea3) cell_app_pane_ParamLimits

0x64cc,	// (0x00035ea3) cell_app_pane

0x64f8,	// (0x00035ecf) cell_app_pane_g1_ParamLimits

0x64f8,	// (0x00035ecf) cell_app_pane_g1

0x651c,	// (0x00035ef3) cell_app_pane_g2_ParamLimits

0x651c,	// (0x00035ef3) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0003f090) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0003f090) cell_app_pane_g

0x6528,	// (0x00035eff) cell_app_pane_t1_ParamLimits

0x6528,	// (0x00035eff) cell_app_pane_t1

0x6559,	// (0x00035f30) grid_highlight_pane_ParamLimits

0x6559,	// (0x00035f30) grid_highlight_pane

0x28b0,	// (0x00032287) cell_highlight_pane_g1

0x28b8,	// (0x0003228f) cell_highlight_pane_g2

0x28c0,	// (0x00032297) cell_highlight_pane_g3

0x28c8,	// (0x0003229f) cell_highlight_pane_g4

0x28d0,	// (0x000322a7) cell_highlight_pane_g5

0x28d8,	// (0x000322af) cell_highlight_pane_g6

0x28e0,	// (0x000322b7) cell_highlight_pane_g7

0x28e8,	// (0x000322bf) cell_highlight_pane_g8

0x28f0,	// (0x000322c7) cell_highlight_pane_g9

0x21b0,	// (0x00031b87) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003f03e) cell_highlight_pane_g

0x657d,	// (0x00035f54) bg_scroll_pane

0x659c,	// (0x00035f73) scroll_handle_pane

0x65ed,	// (0x00035fc4) scroll_bg_pane_g1

0x6602,	// (0x00035fd9) scroll_bg_pane_g2

0x661a,	// (0x00035ff1) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003f095) scroll_bg_pane_g

0x662f,	// (0x00036006) scroll_handle_focus_pane_ParamLimits

0x662f,	// (0x00036006) scroll_handle_focus_pane

0x65ed,	// (0x00035fc4) scroll_handle_pane_g1

0x663c,	// (0x00036013) scroll_handle_pane_g2

0x661a,	// (0x00035ff1) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0003f09c) scroll_handle_pane_g

0x293f,	// (0x00032316) bg_popup_sub_pane_cp21_ParamLimits

0x293f,	// (0x00032316) bg_popup_sub_pane_cp21

0x6650,	// (0x00036027) popup_fep_japan_predictive_window_t1_ParamLimits

0x6650,	// (0x00036027) popup_fep_japan_predictive_window_t1

0x6667,	// (0x0003603e) popup_fep_japan_predictive_window_t2_ParamLimits

0x6667,	// (0x0003603e) popup_fep_japan_predictive_window_t2

0x669a,	// (0x00036071) popup_fep_japan_predictive_window_t3_ParamLimits

0x669a,	// (0x00036071) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003f0a3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003f0a3) popup_fep_japan_predictive_window_t

0x21ba,	// (0x00031b91) bg_popup_sub_pane_cp23

0x66d1,	// (0x000360a8) listscroll_japin_cand_pane

0x66d9,	// (0x000360b0) popup_fep_japan_candidate_window_t1

0x66e7,	// (0x000360be) candidate_pane_ParamLimits

0x66e7,	// (0x000360be) candidate_pane

0x66f9,	// (0x000360d0) scroll_pane_cp30

0x6703,	// (0x000360da) list_single_popup_jap_candidate_pane_ParamLimits

0x6703,	// (0x000360da) list_single_popup_jap_candidate_pane

0x21ba,	// (0x00031b91) list_highlight_pane_cp30

0x6717,	// (0x000360ee) list_single_popup_jap_candidate_pane_t1

0x6726,	// (0x000360fd) level_1_signal

0x6733,	// (0x0003610a) level_2_signal

0x6740,	// (0x00036117) level_3_signal

0x674d,	// (0x00036124) level_4_signal

0x675a,	// (0x00036131) level_5_signal

0x6767,	// (0x0003613e) level_6_signal

0x6774,	// (0x0003614b) level_7_signal

0x6726,	// (0x000360fd) level_1_battery

0x6733,	// (0x0003610a) level_2_battery

0x6740,	// (0x00036117) level_3_battery

0x674d,	// (0x00036124) level_4_battery

0x675a,	// (0x00036131) level_5_battery

0x6767,	// (0x0003613e) level_6_battery

0x6774,	// (0x0003614b) level_7_battery

0x67b8,	// (0x0003618f) list_menu_pane_ParamLimits

0x67b8,	// (0x0003618f) list_menu_pane

0x67ce,	// (0x000361a5) scroll_pane_cp25_ParamLimits

0x67ce,	// (0x000361a5) scroll_pane_cp25

0x67e7,	// (0x000361be) list_double2_graphic_pane_cp2_ParamLimits

0x67e7,	// (0x000361be) list_double2_graphic_pane_cp2

0x67e7,	// (0x000361be) list_double2_large_graphic_pane_cp2_ParamLimits

0x67e7,	// (0x000361be) list_double2_large_graphic_pane_cp2

0x67e7,	// (0x000361be) list_double2_pane_cp2_ParamLimits

0x67e7,	// (0x000361be) list_double2_pane_cp2

0x67e7,	// (0x000361be) list_double_graphic_pane_cp2_ParamLimits

0x67e7,	// (0x000361be) list_double_graphic_pane_cp2

0x67e7,	// (0x000361be) list_double_large_graphic_pane_cp2_ParamLimits

0x67e7,	// (0x000361be) list_double_large_graphic_pane_cp2

0x67e7,	// (0x000361be) list_double_number_pane_cp2_ParamLimits

0x67e7,	// (0x000361be) list_double_number_pane_cp2

0x67e7,	// (0x000361be) list_double_pane_cp2_ParamLimits

0x67e7,	// (0x000361be) list_double_pane_cp2

0x680d,	// (0x000361e4) list_single_2graphic_pane_cp2_ParamLimits

0x680d,	// (0x000361e4) list_single_2graphic_pane_cp2

0x680d,	// (0x000361e4) list_single_graphic_heading_pane_cp2_ParamLimits

0x680d,	// (0x000361e4) list_single_graphic_heading_pane_cp2

0x680d,	// (0x000361e4) list_single_graphic_pane_cp2_ParamLimits

0x680d,	// (0x000361e4) list_single_graphic_pane_cp2

0x680d,	// (0x000361e4) list_single_heading_pane_cp2_ParamLimits

0x680d,	// (0x000361e4) list_single_heading_pane_cp2

0x682a,	// (0x00036201) list_single_large_graphic_pane_cp2_ParamLimits

0x682a,	// (0x00036201) list_single_large_graphic_pane_cp2

0x680d,	// (0x000361e4) list_single_number_heading_pane_cp2_ParamLimits

0x680d,	// (0x000361e4) list_single_number_heading_pane_cp2

0x680d,	// (0x000361e4) list_single_number_pane_cp2_ParamLimits

0x680d,	// (0x000361e4) list_single_number_pane_cp2

0x683a,	// (0x00036211) list_single_pane_cp2_ParamLimits

0x683a,	// (0x00036211) list_single_pane_cp2

0x6910,	// (0x000362e7) bg_popup_sub_pane_cp22

0x6935,	// (0x0003630c) popup_side_volume_key_window_g1

0x695f,	// (0x00036336) popup_side_volume_key_window_t1

0x697d,	// (0x00036354) volume_small_pane_cp1

0x2208,	// (0x00031bdf) bg_popup_sub_pane_cp24_ParamLimits

0x2208,	// (0x00031bdf) bg_popup_sub_pane_cp24

0x6985,	// (0x0003635c) fep_china_uni_candidate_pane_ParamLimits

0x6985,	// (0x0003635c) fep_china_uni_candidate_pane

0x6999,	// (0x00036370) fep_china_uni_entry_pane

0x69a9,	// (0x00036380) popup_fep_china_uni_window_g1

0x69c5,	// (0x0003639c) fep_china_uni_entry_pane_g1

0x69cf,	// (0x000363a6) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0003f0d4) fep_china_uni_entry_pane_g

0x69d9,	// (0x000363b0) fep_entry_item_pane

0x69e3,	// (0x000363ba) fep_candidate_item_pane

0x69eb,	// (0x000363c2) fep_china_uni_candidate_pane_g1

0x69f5,	// (0x000363cc) fep_china_uni_candidate_pane_g2

0x69fd,	// (0x000363d4) fep_china_uni_candidate_pane_g3

0x6a05,	// (0x000363dc) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003f0d9) fep_china_uni_candidate_pane_g

0x21b0,	// (0x00031b87) fep_entry_item_pane_g1

0x6a0f,	// (0x000363e6) fep_entry_item_pane_t1_ParamLimits

0x6a0f,	// (0x000363e6) fep_entry_item_pane_t1

0x6a25,	// (0x000363fc) fep_candidate_item_pane_t1_ParamLimits

0x6a25,	// (0x000363fc) fep_candidate_item_pane_t1

0x6a3a,	// (0x00036411) fep_candidate_item_pane_t2_ParamLimits

0x6a3a,	// (0x00036411) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0003f0e2) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0003f0e2) fep_candidate_item_pane_t

0x2216,	// (0x00031bed) list_highlight_pane_cp31_ParamLimits

0x2216,	// (0x00031bed) list_highlight_pane_cp31

0x6a4c,	// (0x00036423) level_1_signal_lsc

0x6a55,	// (0x0003642c) level_2_signal_lsc

0x6a5e,	// (0x00036435) level_3_signal_lsc

0x6a67,	// (0x0003643e) level_4_signal_lsc

0x6a70,	// (0x00036447) level_5_signal_lsc

0x6a79,	// (0x00036450) level_6_signal_lsc

0x6a82,	// (0x00036459) level_7_signal_lsc

0x6a82,	// (0x00036459) level_1_battery_lsc

0x6a8b,	// (0x00036462) level_2_battery_lsc

0x6a94,	// (0x0003646b) level_3_battery_lsc

0x6a9d,	// (0x00036474) level_4_battery_lsc

0x6aa6,	// (0x0003647d) level_5_battery_lsc

0x6aaf,	// (0x00036486) level_6_battery_lsc

0x6a4c,	// (0x00036423) level_7_battery_lsc

0x6ab8,	// (0x0003648f) scroll_handle_focus_pane_g1

0x6ac1,	// (0x00036498) scroll_handle_focus_pane_g2

0x6aca,	// (0x000364a1) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003f0e7) scroll_handle_focus_pane_g

0x6ad3,	// (0x000364aa) list_single_2graphic_pane_g1_ParamLimits

0x6ad3,	// (0x000364aa) list_single_2graphic_pane_g1

0x5cfb,	// (0x000356d2) list_single_2graphic_pane_g2_ParamLimits

0x5cfb,	// (0x000356d2) list_single_2graphic_pane_g2

0x5c81,	// (0x00035658) list_single_2graphic_pane_g3_ParamLimits

0x5c81,	// (0x00035658) list_single_2graphic_pane_g3

0x6adf,	// (0x000364b6) list_single_2graphic_pane_g4_ParamLimits

0x6adf,	// (0x000364b6) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003f0ee) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003f0ee) list_single_2graphic_pane_g

0x6aeb,	// (0x000364c2) list_single_2graphic_pane_t1_ParamLimits

0x6aeb,	// (0x000364c2) list_single_2graphic_pane_t1

0x6b19,	// (0x000364f0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6b19,	// (0x000364f0) list_double2_graphic_large_graphic_pane_g1

0x5d94,	// (0x0003576b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5d94,	// (0x0003576b) list_double2_graphic_large_graphic_pane_g2

0x5da5,	// (0x0003577c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5da5,	// (0x0003577c) list_double2_graphic_large_graphic_pane_g3

0x6b2b,	// (0x00036502) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6b2b,	// (0x00036502) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003f0f7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003f0f7) list_double2_graphic_large_graphic_pane_g

0x6b37,	// (0x0003650e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6b37,	// (0x0003650e) list_double2_graphic_large_graphic_pane_t1

0x6b4d,	// (0x00036524) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6b4d,	// (0x00036524) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003f100) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003f100) list_double2_graphic_large_graphic_pane_t

0x8e85,	// (0x0003885c) popup_fast_swap_window_ParamLimits

0x8e85,	// (0x0003885c) popup_fast_swap_window

0x8ea3,	// (0x0003887a) popup_side_volume_key_window

0x8ec1,	// (0x00038898) stacon_top_pane

0x8ecb,	// (0x000388a2) status_pane_ParamLimits

0x8ecb,	// (0x000388a2) status_pane

0x21a6,	// (0x00031b7d) status_small_pane

0x21ba,	// (0x00031b91) control_pane

0x21ba,	// (0x00031b91) stacon_bottom_pane

0x283b,	// (0x00032212) scroll_pane_cp121

0x2832,	// (0x00032209) set_content_pane

0x6b5f,	// (0x00036536) bg_active_tab_pane_g1_cp1

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp1

0x6b71,	// (0x00036548) bg_active_tab_pane_g3_cp1

0x6b5f,	// (0x00036536) bg_passive_tab_pane_g1_cp1

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp1

0x6b71,	// (0x00036548) bg_passive_tab_pane_g3_cp1

0x6b7a,	// (0x00036551) bg_active_tab_pane_g1_cp2

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp2

0x6b83,	// (0x0003655a) bg_active_tab_pane_g3_cp2

0x6b7a,	// (0x00036551) bg_passive_tab_pane_g1_cp2

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp2

0x6b83,	// (0x0003655a) bg_passive_tab_pane_g3_cp2

0x6b8c,	// (0x00036563) bg_active_tab_pane_g1_cp3

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp3

0x6b95,	// (0x0003656c) bg_active_tab_pane_g3_cp3

0x6b8c,	// (0x00036563) bg_passive_tab_pane_g1_cp3

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp3

0x6b95,	// (0x0003656c) bg_passive_tab_pane_g3_cp3

0x6b9e,	// (0x00036575) bg_active_tab_pane_g1_cp4

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp4

0x6ba9,	// (0x00036580) bg_active_tab_pane_g3_cp4

0x6b9e,	// (0x00036575) bg_passive_tab_pane_g1_cp4

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp4

0x6ba9,	// (0x00036580) bg_passive_tab_pane_g3_cp4

0x8dde,	// (0x000387b5) bg_active_tab_pane_g1_cp5

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp5

0x8de7,	// (0x000387be) bg_active_tab_pane_g3_cp5

0x8dde,	// (0x000387b5) bg_passive_tab_pane_g1_cp5

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp5

0x8de7,	// (0x000387be) bg_passive_tab_pane_g3_cp5

0x8df0,	// (0x000387c7) list_set_graphic_pane_ParamLimits

0x8df0,	// (0x000387c7) list_set_graphic_pane

0x21ba,	// (0x00031b91) bg_set_opt_pane_cp4

0x8e06,	// (0x000387dd) list_set_graphic_pane_g1_ParamLimits

0x8e06,	// (0x000387dd) list_set_graphic_pane_g1

0x8e12,	// (0x000387e9) list_set_graphic_pane_g2_ParamLimits

0x8e12,	// (0x000387e9) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0003f105) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0003f105) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0003f481) volume_small_pane_cp_g

0x8e36,	// (0x0003880d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e36,	// (0x0003880d) list_double2_large_graphic_pane_g1_cp2

0x8e44,	// (0x0003881b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e44,	// (0x0003881b) list_double2_large_graphic_pane_g2_cp2

0x8e55,	// (0x0003882c) list_double2_large_graphic_pane_g3_cp2

0x8e5d,	// (0x00038834) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e5d,	// (0x00038834) list_double2_large_graphic_pane_t1_cp2

0x8e73,	// (0x0003884a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e73,	// (0x0003884a) list_double2_large_graphic_pane_t2_cp2

0xaa56,	// (0x0003a42d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa56,	// (0x0003a42d) list_double_large_graphic_pane_g1_cp2

0xaa69,	// (0x0003a440) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaa69,	// (0x0003a440) list_double_large_graphic_pane_g2_cp2

0x8fe9,	// (0x000389c0) list_double_large_graphic_pane_g3_cp2

0xaa7a,	// (0x0003a451) list_double_large_graphic_pane_g4_cp

0xaa82,	// (0x0003a459) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaa82,	// (0x0003a459) list_double_large_graphic_pane_t1_cp2

0xaa99,	// (0x0003a470) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaa99,	// (0x0003a470) list_double_large_graphic_pane_t2_cp2

0x8ed9,	// (0x000388b0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ed9,	// (0x000388b0) list_double2_graphic_pane_g1_cp2

0x8ee7,	// (0x000388be) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8ee7,	// (0x000388be) list_double2_graphic_pane_g2_cp2

0x8ef8,	// (0x000388cf) list_double2_graphic_pane_g3_cp2

0x8f02,	// (0x000388d9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f02,	// (0x000388d9) list_double2_graphic_pane_t1_cp2

0x8f18,	// (0x000388ef) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f18,	// (0x000388ef) list_double2_graphic_pane_t2_cp2

0x8f2a,	// (0x00038901) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f2a,	// (0x00038901) list_single_number_heading_pane_g1_cp2

0x8f36,	// (0x0003890d) list_single_number_heading_pane_g2_cp2

0x8f3e,	// (0x00038915) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f3e,	// (0x00038915) list_single_number_heading_pane_t1_cp2

0x8f54,	// (0x0003892b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f54,	// (0x0003892b) list_single_number_heading_pane_t2_cp2

0x8f68,	// (0x0003893f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f68,	// (0x0003893f) list_single_number_heading_pane_t3_cp2

0x8f2a,	// (0x00038901) list_single_heading_pane_g1_cp2_ParamLimits

0x8f2a,	// (0x00038901) list_single_heading_pane_g1_cp2

0x8f36,	// (0x0003890d) list_single_heading_pane_g2_cp2

0x8f3e,	// (0x00038915) list_single_heading_pane_t1_cp2_ParamLimits

0x8f3e,	// (0x00038915) list_single_heading_pane_t1_cp2

0xa850,	// (0x0003a227) list_single_heading_pane_t2_cp2_ParamLimits

0xa850,	// (0x0003a227) list_single_heading_pane_t2_cp2

0xa798,	// (0x0003a16f) list_double_graphic_pane_g1_cp2_ParamLimits

0xa798,	// (0x0003a16f) list_double_graphic_pane_g1_cp2

0xa7a4,	// (0x0003a17b) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7a4,	// (0x0003a17b) list_double_graphic_pane_g2_cp2

0xa7b3,	// (0x0003a18a) list_double_graphic_pane_g3_cp2

0xa7bb,	// (0x0003a192) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7bb,	// (0x0003a192) list_double_graphic_pane_t1_cp2

0xa7d1,	// (0x0003a1a8) list_double_graphic_pane_t2_cp2_ParamLimits

0xa7d1,	// (0x0003a1a8) list_double_graphic_pane_t2_cp2

0x8fdd,	// (0x000389b4) list_double_number_pane_g1_cp2_ParamLimits

0x8fdd,	// (0x000389b4) list_double_number_pane_g1_cp2

0x8fe9,	// (0x000389c0) list_double_number_pane_g2_cp2

0xa75c,	// (0x0003a133) list_double_number_pane_t1_cp2_ParamLimits

0xa75c,	// (0x0003a133) list_double_number_pane_t1_cp2

0xa770,	// (0x0003a147) list_double_number_pane_t2_cp2_ParamLimits

0xa770,	// (0x0003a147) list_double_number_pane_t2_cp2

0xa786,	// (0x0003a15d) list_double_number_pane_t3_cp2_ParamLimits

0xa786,	// (0x0003a15d) list_double_number_pane_t3_cp2

0xa645,	// (0x0003a01c) list_single_graphic_pane_g1_cp2_ParamLimits

0xa645,	// (0x0003a01c) list_single_graphic_pane_g1_cp2

0x904e,	// (0x00038a25) list_single_graphic_pane_g2_cp2_ParamLimits

0x904e,	// (0x00038a25) list_single_graphic_pane_g2_cp2

0x905a,	// (0x00038a31) list_single_graphic_pane_g3_cp2

0xa61b,	// (0x00039ff2) list_single_graphic_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00039ff2) list_single_graphic_pane_t1_cp2

0x904e,	// (0x00038a25) list_single_number_pane_g1_cp2_ParamLimits

0x904e,	// (0x00038a25) list_single_number_pane_g1_cp2

0x905a,	// (0x00038a31) list_single_number_pane_g2_cp2

0xa61b,	// (0x00039ff2) list_single_number_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00039ff2) list_single_number_pane_t1_cp2

0xa631,	// (0x0003a008) list_single_number_pane_t2_cp2_ParamLimits

0xa631,	// (0x0003a008) list_single_number_pane_t2_cp2

0x8e44,	// (0x0003881b) list_double2_pane_g1_cp2_ParamLimits

0x8e44,	// (0x0003881b) list_double2_pane_g1_cp2

0x8e55,	// (0x0003882c) list_double2_pane_g2_cp2

0x8fb5,	// (0x0003898c) list_double2_pane_t1_cp2_ParamLimits

0x8fb5,	// (0x0003898c) list_double2_pane_t1_cp2

0x8fcb,	// (0x000389a2) list_double2_pane_t2_cp2_ParamLimits

0x8fcb,	// (0x000389a2) list_double2_pane_t2_cp2

0x8fdd,	// (0x000389b4) list_double_pane_g1_cp2_ParamLimits

0x8fdd,	// (0x000389b4) list_double_pane_g1_cp2

0x8fe9,	// (0x000389c0) list_double_pane_g2_cp2

0x8ff1,	// (0x000389c8) list_double_pane_t1_cp2_ParamLimits

0x8ff1,	// (0x000389c8) list_double_pane_t1_cp2

0x9007,	// (0x000389de) list_double_pane_t2_cp2_ParamLimits

0x9007,	// (0x000389de) list_double_pane_t2_cp2

0x903e,	// (0x00038a15) list_single_pane_cp2_g3

0x904e,	// (0x00038a25) list_single_pane_g1_cp2_ParamLimits

0x904e,	// (0x00038a25) list_single_pane_g1_cp2

0x905a,	// (0x00038a31) list_single_pane_g2_cp2

0x9062,	// (0x00038a39) list_single_pane_t1_cp2_ParamLimits

0x9062,	// (0x00038a39) list_single_pane_t1_cp2

0x907a,	// (0x00038a51) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x907a,	// (0x00038a51) list_single_large_graphic_pane_g1_cp2

0x9088,	// (0x00038a5f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9088,	// (0x00038a5f) list_single_large_graphic_pane_g2_cp2

0x9094,	// (0x00038a6b) list_single_large_graphic_pane_g3_cp2

0x909c,	// (0x00038a73) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x909c,	// (0x00038a73) list_single_large_graphic_pane_g4_cp1

0x90b6,	// (0x00038a8d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90b6,	// (0x00038a8d) list_single_large_graphic_pane_t1_cp2

0xa5e5,	// (0x00039fbc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa5e5,	// (0x00039fbc) list_single_graphic_heading_pane_g1_cp2

0xa5b2,	// (0x00039f89) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5b2,	// (0x00039f89) list_single_graphic_heading_pane_g4_cp2

0x905a,	// (0x00038a31) list_single_graphic_heading_pane_g5_cp2

0xa5f1,	// (0x00039fc8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa5f1,	// (0x00039fc8) list_single_graphic_heading_pane_t1_cp2

0xa607,	// (0x00039fde) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa607,	// (0x00039fde) list_single_graphic_heading_pane_t2_cp2

0xa5a6,	// (0x00039f7d) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5a6,	// (0x00039f7d) list_single_2graphic_pane_g1_cp2

0xa5b2,	// (0x00039f89) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5b2,	// (0x00039f89) list_single_2graphic_pane_g2_cp2

0x905a,	// (0x00038a31) list_single_2graphic_pane_g3_cp2

0xa5c3,	// (0x00039f9a) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5c3,	// (0x00039f9a) list_single_2graphic_pane_g4_cp2

0xa5cf,	// (0x00039fa6) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa5cf,	// (0x00039fa6) list_single_2graphic_pane_t1_cp2

0x21b0,	// (0x00031b87) list_highlight_pane_g10_cp1

0xa17e,	// (0x00039b55) list_highlight_pane_g1_cp1

0xa186,	// (0x00039b5d) list_highlight_pane_g2_cp1

0xa18e,	// (0x00039b65) list_highlight_pane_g3_cp1

0xa196,	// (0x00039b6d) list_highlight_pane_g4_cp1

0xa19e,	// (0x00039b75) list_highlight_pane_g5_cp1

0xa1a6,	// (0x00039b7d) list_highlight_pane_g6_cp1

0xa1ae,	// (0x00039b85) list_highlight_pane_g7_cp1

0xa1b6,	// (0x00039b8d) list_highlight_pane_g8_cp1

0xa1be,	// (0x00039b95) list_highlight_pane_g9_cp1

0xa09e,	// (0x00039a75) form_field_slider_pane_t3

0xa0ac,	// (0x00039a83) form_field_slider_pane_t4

0xa0ba,	// (0x00039a91) slider_form_pane_ParamLimits

0xa0ba,	// (0x00039a91) slider_form_pane

0x21ba,	// (0x00031b91) control_abbreviations

0x21ba,	// (0x00031b91) control_conventions

0x21ba,	// (0x00031b91) control_definitions

0x21ba,	// (0x00031b91) format_table_attribute

0xa8a6,	// (0x0003a27d) bg_popup_preview_window_pane_g9

0x21ba,	// (0x00031b91) format_table_data2

0x21ba,	// (0x00031b91) format_table_data3

0x21ba,	// (0x00031b91) format_table_data_example

0x0008,

0x21ba,	// (0x00031b91) intro_purpose

0xf8ca,	// (0x0003f2a1) bg_popup_preview_window_pane_g

0x21ba,	// (0x00031b91) texts_category

0x21ba,	// (0x00031b91) texts_graphics

0x90cc,	// (0x00038aa3) text_digital

0x90db,	// (0x00038ab2) text_primary

0x90ea,	// (0x00038ac1) text_primary_small

0x90f9,	// (0x00038ad0) text_secondary

0x9108,	// (0x00038adf) text_title

0xb020,	// (0x0003a9f7) bg_passive_tab_pane_g1_cp3_srt

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp3_srt

0xb029,	// (0x0003aa00) bg_passive_tab_pane_g3_cp3_srt

0x2216,	// (0x00031bed) bg_active_tab_pane_cp3_srt_ParamLimits

0x2216,	// (0x00031bed) bg_active_tab_pane_cp3_srt

0xb032,	// (0x0003aa09) tabs_4_active_pane_srt_g1

0xb03a,	// (0x0003aa11) tabs_4_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x0003aa11) tabs_4_active_pane_srt_t1

0xb020,	// (0x0003a9f7) bg_active_tab_pane_g1_cp3_copy1

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp3_copy1

0xb029,	// (0x0003aa00) bg_active_tab_pane_g3_cp3_copy1

0x2216,	// (0x00031bed) tabs_2_long_active_pane_srt_ParamLimits

0x2216,	// (0x00031bed) tabs_2_long_active_pane_srt

0x2216,	// (0x00031bed) tabs_2_long_passive_pane_srt_ParamLimits

0x2216,	// (0x00031bed) tabs_2_long_passive_pane_srt

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp4_srt

0xace0,	// (0x0003a6b7) bg_passive_tab_pane_g1_cp4_srt

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp4_srt

0xace9,	// (0x0003a6c0) bg_passive_tab_pane_g3_cp4_srt

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp4_srt_ParamLimits

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp4_srt

0xacf2,	// (0x0003a6c9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xacf2,	// (0x0003a6c9) tabs_2_long_active_pane_srt_t1

0xace0,	// (0x0003a6b7) bg_active_tab_pane_g1_cp4_srt

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp4_srt

0xace9,	// (0x0003a6c0) bg_active_tab_pane_g3_cp4_srt

0x2208,	// (0x00031bdf) tabs_3_long_active_pane_srt_ParamLimits

0x2208,	// (0x00031bdf) tabs_3_long_active_pane_srt

0x2208,	// (0x00031bdf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2208,	// (0x00031bdf) tabs_3_long_passive_pane_cp_srt

0x2208,	// (0x00031bdf) tabs_3_long_passive_pane_srt_ParamLimits

0x2208,	// (0x00031bdf) tabs_3_long_passive_pane_srt

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp5_srt

0x8dde,	// (0x000387b5) bg_passive_tab_pane_g1_cp5_srt

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp5_srt

0x8de7,	// (0x000387be) bg_passive_tab_pane_g3_cp5_srt

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp5_srt_ParamLimits

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp5_srt

0xacce,	// (0x0003a6a5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xacce,	// (0x0003a6a5) tabs_3_long_active_pane_srt_t1

0x8dde,	// (0x000387b5) bg_active_tab_pane_g1_cp5_srt

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp5_srt

0x8de7,	// (0x000387be) bg_active_tab_pane_g3_cp5_srt

0xacc0,	// (0x0003a697) navi_text_pane_srt_t1

0xacb8,	// (0x0003a68f) navi_icon_pane_srt_g1

0x92e0,	// (0x00038cb7) midp_editing_number_pane_srt

0x9117,	// (0x00038aee) midp_ticker_pane_srt

0x92e8,	// (0x00038cbf) midp_ticker_pane_srt_g1

0x92f0,	// (0x00038cc7) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003f124) midp_ticker_pane_srt_g

0x92f8,	// (0x00038ccf) midp_ticker_pane_srt_t1

0xaca9,	// (0x0003a680) midp_editing_number_pane_t1_copy1

0x911f,	// (0x00038af6) listscroll_midp_pane

0x911f,	// (0x00038af6) midp_form_pane

0x918e,	// (0x00038b65) midp_info_popup_window_ParamLimits

0x918e,	// (0x00038b65) midp_info_popup_window

0x293f,	// (0x00032316) bg_popup_sub_pane_cp50_ParamLimits

0x293f,	// (0x00032316) bg_popup_sub_pane_cp50

0x9da0,	// (0x00039777) listscroll_midp_info_pane_ParamLimits

0x9da0,	// (0x00039777) listscroll_midp_info_pane

0x9d80,	// (0x00039757) listscroll_form_midp_pane_ParamLimits

0x9d80,	// (0x00039757) listscroll_form_midp_pane

0x9d8c,	// (0x00039763) scroll_bar_cp050

0x9d60,	// (0x00039737) list_midp_pane

0xbad4,	// (0x0003b4ab) signal_pane_g2_cp

0x9c9a,	// (0x00039671) listscroll_midp_info_pane_t1_ParamLimits

0x9c9a,	// (0x00039671) listscroll_midp_info_pane_t1

0x9cb2,	// (0x00039689) listscroll_midp_info_pane_t2_ParamLimits

0x9cb2,	// (0x00039689) listscroll_midp_info_pane_t2

0x9cf0,	// (0x000396c7) listscroll_midp_info_pane_t3_ParamLimits

0x9cf0,	// (0x000396c7) listscroll_midp_info_pane_t3

0x9d2a,	// (0x00039701) listscroll_midp_info_pane_t4_ParamLimits

0x9d2a,	// (0x00039701) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0003f1dc) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0003f1dc) listscroll_midp_info_pane_t

0x2994,	// (0x0003236b) scroll_pane_cp21

0x9c34,	// (0x0003960b) form_midp_field_choice_group_pane

0x9c3d,	// (0x00039614) form_midp_field_text_pane

0x9c80,	// (0x00039657) form_midp_field_time_pane

0x9c88,	// (0x0003965f) form_midp_gauge_slider_pane

0x9c91,	// (0x00039668) form_midp_gauge_wait_pane

0x21ba,	// (0x00031b91) form_midp_image_pane

0x766d,	// (0x00037044) list_single_midp_pane_ParamLimits

0x766d,	// (0x00037044) list_single_midp_pane

0x9bf8,	// (0x000395cf) form_midp_field_text_pane_t1

0x99ea,	// (0x000393c1) input_focus_pane_cp050

0x9c23,	// (0x000395fa) list_midp_form_text_pane

0x9bc7,	// (0x0003959e) form_midp_field_choice_group_pane_t1

0x9bd5,	// (0x000395ac) input_focus_pane_cp051

0x9be9,	// (0x000395c0) list_midp_choice_pane

0x21ba,	// (0x00031b91) status_idle_pane

0x9bab,	// (0x00039582) form_midp_field_time_pane_t1

0x21b0,	// (0x00031b87) wait_anim_pane_g2_copy1

0x9bb9,	// (0x00039590) form_midp_field_time_pane_t2

0x0001,

0x923e,	// (0x00038c15) aid_navinavi_width_2_pane

0xf800,	// (0x0003f1d7) form_midp_field_time_pane_t

0x21ba,	// (0x00031b91) input_focus_pane_cp052

0x21ba,	// (0x00031b91) bg_input_focus_pane_cp040

0x9b6b,	// (0x00039542) form_midp_gauge_slider_pane_t1

0x9b79,	// (0x00039550) form_midp_gauge_slider_pane_t2

0x9b87,	// (0x0003955e) form_midp_gauge_slider_pane_t3

0x9b95,	// (0x0003956c) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0003f1ce) form_midp_gauge_slider_pane_t

0x9ba3,	// (0x0003957a) form_midp_slider_pane

0x2216,	// (0x00031bed) bg_input_focus_pane_cp041_ParamLimits

0x2216,	// (0x00031bed) bg_input_focus_pane_cp041

0x9b38,	// (0x0003950f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b38,	// (0x0003950f) form_midp_gauge_wait_pane_t1

0x9b4a,	// (0x00039521) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b4a,	// (0x00039521) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0003f1c9) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0003f1c9) form_midp_gauge_wait_pane_t

0x9b5c,	// (0x00039533) form_midp_wait_pane_ParamLimits

0x9b5c,	// (0x00039533) form_midp_wait_pane

0x9b00,	// (0x000394d7) form_midp_image_pane_g1

0x9b09,	// (0x000394e0) form_midp_image_pane_t1

0x9b18,	// (0x000394ef) form_midp_image_pane_t2

0x9b27,	// (0x000394fe) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0003f1c2) form_midp_image_pane_t

0x9af7,	// (0x000394ce) list_single_midp_pane_g1

0x429a,	// (0x00033c71) list_single_midp_pane_t1

0x9add,	// (0x000394b4) list_midp_form_item_pane_ParamLimits

0x9add,	// (0x000394b4) list_midp_form_item_pane

0x91e6,	// (0x00038bbd) list_midp_form_item_pane_t1

0x91f5,	// (0x00038bcc) midp_ticker_pane_g1

0x9201,	// (0x00038bd8) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003f10a) midp_ticker_pane_g

0x920d,	// (0x00038be4) midp_ticker_pane_t1

0xaf16,	// (0x0003a8ed) midp_editing_number_pane_t1

0xaef4,	// (0x0003a8cb) midp_editing_number_pane

0xaf03,	// (0x0003a8da) midp_ticker_pane

0xac99,	// (0x0003a670) ai_message_heading_pane

0x21ba,	// (0x00031b91) bg_popup_window_pane_cp14

0xaca1,	// (0x0003a678) listscroll_ai_message_pane

0xac1f,	// (0x0003a5f6) ai_message_heading_pane_g1_ParamLimits

0xac1f,	// (0x0003a5f6) ai_message_heading_pane_g1

0xac2b,	// (0x0003a602) ai_message_heading_pane_g2_ParamLimits

0xac2b,	// (0x0003a602) ai_message_heading_pane_g2

0xac39,	// (0x0003a610) ai_message_heading_pane_g3_ParamLimits

0xac39,	// (0x0003a610) ai_message_heading_pane_g3

0xac45,	// (0x0003a61c) ai_message_heading_pane_g4_ParamLimits

0xac45,	// (0x0003a61c) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0003f303) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0003f303) ai_message_heading_pane_g

0xac51,	// (0x0003a628) ai_message_heading_pane_t1_ParamLimits

0xac51,	// (0x0003a628) ai_message_heading_pane_t1

0xac6b,	// (0x0003a642) ai_message_heading_pane_t2_ParamLimits

0xac6b,	// (0x0003a642) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0003f30c) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0003f30c) ai_message_heading_pane_t

0xac7f,	// (0x0003a656) bg_popup_heading_pane_cp1_ParamLimits

0xac7f,	// (0x0003a656) bg_popup_heading_pane_cp1

0xac0d,	// (0x0003a5e4) list_ai_message_pane_ParamLimits

0xac0d,	// (0x0003a5e4) list_ai_message_pane

0x2994,	// (0x0003236b) scroll_pane_cp10

0xaba9,	// (0x0003a580) list_ai_message_pane_g1

0xabb1,	// (0x0003a588) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0003f2e0) list_ai_message_pane_g

0xabb9,	// (0x0003a590) list_ai_message_pane_t1_ParamLimits

0xabb9,	// (0x0003a590) list_ai_message_pane_t1

0xabce,	// (0x0003a5a5) list_ai_message_pane_t2_ParamLimits

0xabce,	// (0x0003a5a5) list_ai_message_pane_t2

0xabe3,	// (0x0003a5ba) list_ai_message_pane_t3_ParamLimits

0xabe3,	// (0x0003a5ba) list_ai_message_pane_t3

0xabf8,	// (0x0003a5cf) list_ai_message_pane_t4_ParamLimits

0xabf8,	// (0x0003a5cf) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0003f2e5) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0003f2e5) list_ai_message_pane_t

0xab92,	// (0x0003a569) cell_ai_soft_ind_pane_ParamLimits

0xab92,	// (0x0003a569) cell_ai_soft_ind_pane

0x921f,	// (0x00038bf6) cell_ai_soft_ind_pane_g1_ParamLimits

0x921f,	// (0x00038bf6) cell_ai_soft_ind_pane_g1

0x21ba,	// (0x00031b91) grid_highlight_cp1

0x922c,	// (0x00038c03) text_secondary_cp56_ParamLimits

0x922c,	// (0x00038c03) text_secondary_cp56

0xab67,	// (0x0003a53e) example_general_pane_ParamLimits

0xab67,	// (0x0003a53e) example_general_pane

0xab73,	// (0x0003a54a) example_parent_pane_g1_ParamLimits

0xab73,	// (0x0003a54a) example_parent_pane_g1

0xab7f,	// (0x0003a556) example_parent_pane_t1_ParamLimits

0xab7f,	// (0x0003a556) example_parent_pane_t1

0x72bc,	// (0x00036c93) popup_preview_text_window_ParamLimits

0x72bc,	// (0x00036c93) popup_preview_text_window

0x9046,	// (0x00038a1d) list_single_pane_cp2_g4

0x2417,	// (0x00031dee) bg_popup_preview_window_pane_ParamLimits

0x2417,	// (0x00031dee) bg_popup_preview_window_pane

0xa8b0,	// (0x0003a287) popup_preview_text_window_t1_ParamLimits

0xa8b0,	// (0x0003a287) popup_preview_text_window_t1

0xa8ce,	// (0x0003a2a5) popup_preview_text_window_t2_ParamLimits

0xa8ce,	// (0x0003a2a5) popup_preview_text_window_t2

0xa917,	// (0x0003a2ee) popup_preview_text_window_t3_ParamLimits

0xa917,	// (0x0003a2ee) popup_preview_text_window_t3

0xa95c,	// (0x0003a333) popup_preview_text_window_t4_ParamLimits

0xa95c,	// (0x0003a333) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0003f2b4) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0003f2b4) popup_preview_text_window_t

0xa9da,	// (0x0003a3b1) scroll_pane_cp11

0x9976,	// (0x0003934d) bg_popup_preview_window_pane_g1

0xa864,	// (0x0003a23b) bg_popup_preview_window_pane_g2

0xa86e,	// (0x0003a245) bg_popup_preview_window_pane_g3

0xa878,	// (0x0003a24f) bg_popup_preview_window_pane_g4

0xa882,	// (0x0003a259) bg_popup_preview_window_pane_g5

0xa88c,	// (0x0003a263) bg_popup_preview_window_pane_g6

0xa894,	// (0x0003a26b) bg_popup_preview_window_pane_g7

0xa89c,	// (0x0003a273) bg_popup_preview_window_pane_g8

0x54df,	// (0x00034eb6) aid_popup_width_pane

0x7298,	// (0x00036c6f) popup_midp_note_alarm_window_ParamLimits

0x7298,	// (0x00036c6f) popup_midp_note_alarm_window

0x284c,	// (0x00032223) data_form_pane_ParamLimits

0x614b,	// (0x00035b22) form_field_data_pane_g1

0x6155,	// (0x00035b2c) form_field_data_pane_t1_ParamLimits

0x2858,	// (0x0003222f) input_focus_pane_ParamLimits

0x40bb,	// (0x00033a92) data_form_wide_pane_ParamLimits

0x40cc,	// (0x00033aa3) form_field_data_wide_pane_g1

0x40d8,	// (0x00033aaf) form_field_data_wide_pane_t1_ParamLimits

0x25d3,	// (0x00031faa) input_focus_pane_cp6_ParamLimits

0x629b,	// (0x00035c72) input_popup_find_pane_g1_ParamLimits

0x629b,	// (0x00035c72) input_popup_find_pane_g1

0x6401,	// (0x00035dd8) aid_navi_side_left_pane

0x6416,	// (0x00035ded) aid_navi_side_right_pane

0xa279,	// (0x00039c50) bg_popup_window_pane_cp30_ParamLimits

0xa279,	// (0x00039c50) bg_popup_window_pane_cp30

0xa2f3,	// (0x00039cca) popup_midp_note_alarm_window_g1_ParamLimits

0xa2f3,	// (0x00039cca) popup_midp_note_alarm_window_g1

0xa323,	// (0x00039cfa) popup_midp_note_alarm_window_t1_ParamLimits

0xa323,	// (0x00039cfa) popup_midp_note_alarm_window_t1

0xa3c4,	// (0x00039d9b) popup_midp_note_alarm_window_t2_ParamLimits

0xa3c4,	// (0x00039d9b) popup_midp_note_alarm_window_t2

0xa472,	// (0x00039e49) popup_midp_note_alarm_window_t3_ParamLimits

0xa472,	// (0x00039e49) popup_midp_note_alarm_window_t3

0xa4a4,	// (0x00039e7b) popup_midp_note_alarm_window_t4_ParamLimits

0xa4a4,	// (0x00039e7b) popup_midp_note_alarm_window_t4

0xa4ca,	// (0x00039ea1) popup_midp_note_alarm_window_t5_ParamLimits

0xa4ca,	// (0x00039ea1) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0003f251) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0003f251) popup_midp_note_alarm_window_t

0xa576,	// (0x00039f4d) wait_bar_pane_cp1_ParamLimits

0xa576,	// (0x00039f4d) wait_bar_pane_cp1

0x21ba,	// (0x00031b91) wait_anim_pane_copy1

0x21ba,	// (0x00031b91) wait_border_pane_copy1

0x9f5e,	// (0x00039935) wait_border_pane_g1_copy1

0x40f2,	// (0x00033ac9) form_field_popup_pane_g1

0x616f,	// (0x00035b46) form_field_popup_pane_t1_ParamLimits

0x2858,	// (0x0003222f) input_focus_pane_cp7_ParamLimits

0x2886,	// (0x0003225d) list_form_pane_ParamLimits

0x40fa,	// (0x00033ad1) form_field_popup_wide_pane_g1

0x4102,	// (0x00033ad9) form_field_popup_wide_pane_t1_ParamLimits

0x2858,	// (0x0003222f) input_focus_pane_cp8_ParamLimits

0x2892,	// (0x00032269) list_form_wide_pane_ParamLimits

0xb0bb,	// (0x0003aa92) aid_size_cell_graphic_pane

0x61ee,	// (0x00035bc5) data_form_pane_t1_ParamLimits

0x78fd,	// (0x000372d4) data_form_wide_pane_t1_ParamLimits

0x952d,	// (0x00038f04) bg_status_flat_pane

0x590e,	// (0x000352e5) title_pane_t1_ParamLimits

0x21d0,	// (0x00031ba7) title_pane_t2_ParamLimits

0x21f6,	// (0x00031bcd) title_pane_t3_ParamLimits

0xf532,	// (0x0003ef09) title_pane_t_ParamLimits

0x6726,	// (0x000360fd) level_1_signal_ParamLimits

0x6733,	// (0x0003610a) level_2_signal_ParamLimits

0x6740,	// (0x00036117) level_3_signal_ParamLimits

0x674d,	// (0x00036124) level_4_signal_ParamLimits

0x675a,	// (0x00036131) level_5_signal_ParamLimits

0x6767,	// (0x0003613e) level_6_signal_ParamLimits

0x6774,	// (0x0003614b) level_7_signal_ParamLimits

0x6726,	// (0x000360fd) level_1_battery_ParamLimits

0x6733,	// (0x0003610a) level_2_battery_ParamLimits

0x6740,	// (0x00036117) level_3_battery_ParamLimits

0x674d,	// (0x00036124) level_4_battery_ParamLimits

0x675a,	// (0x00036131) level_5_battery_ParamLimits

0x6767,	// (0x0003613e) level_6_battery_ParamLimits

0x6774,	// (0x0003614b) level_7_battery_ParamLimits

0xa17e,	// (0x00039b55) bg_status_flat_pane_g1

0xa186,	// (0x00039b5d) bg_status_flat_pane_g2

0xa18e,	// (0x00039b65) bg_status_flat_pane_g3

0xa196,	// (0x00039b6d) bg_status_flat_pane_g4

0xa19e,	// (0x00039b75) bg_status_flat_pane_g5

0xa1a6,	// (0x00039b7d) bg_status_flat_pane_g6

0xa1ae,	// (0x00039b85) bg_status_flat_pane_g7

0x597e,	// (0x00035355) tabs_3_active_pane_t1_ParamLimits

0x597e,	// (0x00035355) tabs_3_passive_pane_t1_ParamLimits

0x5998,	// (0x0003536f) tabs_4_active_pane_t1_ParamLimits

0x5998,	// (0x0003536f) tabs_4_1_passive_pane_t1_ParamLimits

0x62b1,	// (0x00035c88) tabs_2_active_pane_t1_ParamLimits

0x62b1,	// (0x00035c88) tabs_2_passive_pane_t1_ParamLimits

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp4_ParamLimits

0x62d1,	// (0x00035ca8) tabs_2_long_active_pane_t1_ParamLimits

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp4_ParamLimits

0x75b4,	// (0x00036f8b) list_single_midp_graphic_pane_t1_ParamLimits

0x62c3,	// (0x00035c9a) bg_active_tab_pane_cp5_ParamLimits

0x62f0,	// (0x00035cc7) tabs_3_long_active_pane_t1_ParamLimits

0x62e4,	// (0x00035cbb) bg_passive_tab_pane_cp5_ParamLimits

0x75b4,	// (0x00036f8b) list_single_midp_graphic_pane_t1

0x952d,	// (0x00038f04) bg_status_flat_pane_ParamLimits

0x95f8,	// (0x00038fcf) indicator_pane_cp2_ParamLimits

0x95f8,	// (0x00038fcf) indicator_pane_cp2

0x973b,	// (0x00039112) navi_pane_srt_ParamLimits

0x973b,	// (0x00039112) navi_pane_srt

0x975f,	// (0x00039136) popup_clock_digital_analogue_window_cp1

0x225a,	// (0x00031c31) indicator_pane_t1

0x9117,	// (0x00038aee) copy_highlight_pane

0x9117,	// (0x00038aee) cursor_graphics_pane

0x9117,	// (0x00038aee) graphic_within_text_pane

0x9117,	// (0x00038aee) link_highlight_pane

0xa99d,	// (0x0003a374) popup_preview_text_window_t5_ParamLimits

0xa99d,	// (0x0003a374) popup_preview_text_window_t5

0x9248,	// (0x00038c1f) cursor_digital_pane

0x9248,	// (0x00038c1f) cursor_primary_pane

0x9259,	// (0x00038c30) cursor_primary_small_pane

0x9261,	// (0x00038c38) cursor_secondary_pane

0x9269,	// (0x00038c40) cursor_title_pane

0x9248,	// (0x00038c1f) link_highlight_digital_pane

0x9250,	// (0x00038c27) link_highlight_primary_pane

0x9259,	// (0x00038c30) link_highlight_primary_small_pane

0x9261,	// (0x00038c38) link_highlight_secondary_pane

0x9269,	// (0x00038c40) link_highlight_title_pane

0x9248,	// (0x00038c1f) copy_highlight_digital_pane

0x9248,	// (0x00038c1f) copy_highlight_primary_pane

0x9259,	// (0x00038c30) copy_highlight_primary_small_pane

0x9261,	// (0x00038c38) copy_highlight_secondary_pane

0x9269,	// (0x00038c40) copy_highlight_title_pane

0x9261,	// (0x00038c38) graphic_text_digital_pane

0xa21c,	// (0x00039bf3) graphic_text_primary_pane

0xa225,	// (0x00039bfc) graphic_text_primary_small_pane

0x9259,	// (0x00038c30) graphic_text_secondary_pane

0x9248,	// (0x00038c1f) graphic_text_title_pane

0x9271,	// (0x00038c48) cursor_primary_pane_g1

0xa20e,	// (0x00039be5) cursor_text_primary_t1

0xa1f6,	// (0x00039bcd) cursor_primary_small_pane_g1

0xa200,	// (0x00039bd7) cursor_text_primary_small_t1

0xa1de,	// (0x00039bb5) cursor_primary_small_pane_g1_copy1

0xa1e8,	// (0x00039bbf) cursor_text_primary_small_t1_copy1

0xa1c6,	// (0x00039b9d) cursor_text_title_t1

0xa1d4,	// (0x00039bab) cursor_title_pane_g1

0x9271,	// (0x00038c48) cursor_digital_pane_g1

0x927b,	// (0x00038c52) cursor_text_digital_t1

0x9289,	// (0x00038c60) link_highlight_primary_pane_g1

0xa16f,	// (0x00039b46) link_highlight_primary_pane_t1

0x9289,	// (0x00038c60) link_highlight_primary_small_pane_g1

0x9291,	// (0x00038c68) link_highlight_primary_small_pane_t1

0x92a0,	// (0x00038c77) link_highlight_secondary_pane_g1

0x92a8,	// (0x00038c7f) link_highlight_secondary_pane_t1

0xa0e3,	// (0x00039aba) link_highlight_title_pane_g1

0xa0eb,	// (0x00039ac2) link_highlight_title_pane_t1

0xa0cc,	// (0x00039aa3) link_highlight_digital_pane_g1

0xa0d4,	// (0x00039aab) link_highlight_digital_pane_t1

0x9f94,	// (0x0003996b) copy_highlight_primary_pane_g1

0x9fab,	// (0x00039982) copy_highlight_primary_pane_t1

0x9f94,	// (0x0003996b) copy_highlight_primary_small_pane_g1

0x9f9c,	// (0x00039973) copy_highlight_primary_small_pane_t1

0x92b7,	// (0x00038c8e) copy_highlight_secondary_pane_g1

0x92bf,	// (0x00038c96) copy_highlight_secondary_pane_t1

0x9f7d,	// (0x00039954) copy_highlight_title_pane_g1

0x9f85,	// (0x0003995c) copy_highlight_title_pane_t1

0x9f94,	// (0x0003996b) copy_highlight_digital_pane_g1

0xb28d,	// (0x0003ac64) copy_highlight_digital_pane_t1

0xb1e1,	// (0x0003abb8) graphic_text_primary_pane_g1

0xb271,	// (0x0003ac48) graphic_text_primary_pane_t1

0xb27f,	// (0x0003ac56) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0003f380) graphic_text_primary_pane_t

0xb24d,	// (0x0003ac24) graphic_text_primary_small_pane_g1

0xb255,	// (0x0003ac2c) graphic_text_primary_small_pane_t1

0xb263,	// (0x0003ac3a) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0003f37b) graphic_text_primary_small_pane_t

0xb229,	// (0x0003ac00) graphic_text_secondary_pane_g1

0xb231,	// (0x0003ac08) graphic_text_secondary_pane_t1

0xb23f,	// (0x0003ac16) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0003f376) graphic_text_secondary_pane_t

0xb205,	// (0x0003abdc) graphic_text_title_pane_g1

0xb20d,	// (0x0003abe4) graphic_text_title_pane_t1

0xb21b,	// (0x0003abf2) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0003f371) graphic_text_title_pane_t

0xb1e1,	// (0x0003abb8) graphic_text_digital_pane_g1

0xb1e9,	// (0x0003abc0) graphic_text_digital_pane_t1

0xb1f7,	// (0x0003abce) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0003f36c) graphic_text_digital_pane_t

0x2216,	// (0x00031bed) navi_icon_pane_srt_ParamLimits

0x2216,	// (0x00031bed) navi_icon_pane_srt

0x21ba,	// (0x00031b91) navi_midp_pane_srt

0x21ba,	// (0x00031b91) navi_navi_pane_srt

0x2216,	// (0x00031bed) navi_text_pane_srt_ParamLimits

0x2216,	// (0x00031bed) navi_text_pane_srt

0xb1ac,	// (0x0003ab83) navi_navi_icon_text_pane_srt

0xb1b4,	// (0x0003ab8b) navi_navi_pane_srt_g1_ParamLimits

0xb1b4,	// (0x0003ab8b) navi_navi_pane_srt_g1

0xb1c6,	// (0x0003ab9d) navi_navi_pane_srt_g2_ParamLimits

0xb1c6,	// (0x0003ab9d) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0003f367) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0003f367) navi_navi_pane_srt_g

0xb1d8,	// (0x0003abaf) navi_navi_tabs_pane_srt

0xb1ac,	// (0x0003ab83) navi_navi_text_pane_srt

0xb1ac,	// (0x0003ab83) navi_navi_volume_pane_srt

0xb19d,	// (0x0003ab74) navi_navi_text_pane_srt_t1

0x7a3b,	// (0x00037412) navi_navi_volume_pane_srt_g1

0x7a43,	// (0x0003741a) volume_small_pane_srt_ParamLimits

0x7a43,	// (0x0003741a) volume_small_pane_srt

0x6cf5,	// (0x000366cc) volume_small_pane_srt_g1_ParamLimits

0x6cf5,	// (0x000366cc) volume_small_pane_srt_g1

0x6d05,	// (0x000366dc) volume_small_pane_srt_g2_ParamLimits

0x6d05,	// (0x000366dc) volume_small_pane_srt_g2

0x6d16,	// (0x000366ed) volume_small_pane_srt_g3_ParamLimits

0x6d16,	// (0x000366ed) volume_small_pane_srt_g3

0x6d27,	// (0x000366fe) volume_small_pane_srt_g4_ParamLimits

0x6d27,	// (0x000366fe) volume_small_pane_srt_g4

0x6d38,	// (0x0003670f) volume_small_pane_srt_g5_ParamLimits

0x6d38,	// (0x0003670f) volume_small_pane_srt_g5

0x6d49,	// (0x00036720) volume_small_pane_srt_g6_ParamLimits

0x6d49,	// (0x00036720) volume_small_pane_srt_g6

0x6d5a,	// (0x00036731) volume_small_pane_srt_g7_ParamLimits

0x6d5a,	// (0x00036731) volume_small_pane_srt_g7

0x6d6b,	// (0x00036742) volume_small_pane_srt_g8_ParamLimits

0x6d6b,	// (0x00036742) volume_small_pane_srt_g8

0x6d7c,	// (0x00036753) volume_small_pane_srt_g9_ParamLimits

0x6d7c,	// (0x00036753) volume_small_pane_srt_g9

0x6d8d,	// (0x00036764) volume_small_pane_srt_g10_ParamLimits

0x6d8d,	// (0x00036764) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003f10f) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003f10f) volume_small_pane_srt_g

0x24cc,	// (0x00031ea3) query_popup_data_pane_cp2

0xb183,	// (0x0003ab5a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb183,	// (0x0003ab5a) navi_navi_icon_text_pane_srt_t1

0xa21c,	// (0x00039bf3) navi_tabs_2_long_pane_srt

0xa21c,	// (0x00039bf3) navi_tabs_2_pane_srt

0xa21c,	// (0x00039bf3) navi_tabs_3_long_pane_srt

0xa21c,	// (0x00039bf3) navi_tabs_3_pane_srt

0xa21c,	// (0x00039bf3) navi_tabs_4_pane_srt

0x7a1b,	// (0x000373f2) tabs_2_active_pane_srt_ParamLimits

0x7a1b,	// (0x000373f2) tabs_2_active_pane_srt

0x7a2b,	// (0x00037402) tabs_2_passive_pane_srt_ParamLimits

0x7a2b,	// (0x00037402) tabs_2_passive_pane_srt

0x943e,	// (0x00038e15) bg_passive_tab_pane_cp1_srt_ParamLimits

0x943e,	// (0x00038e15) bg_passive_tab_pane_cp1_srt

0xb14f,	// (0x0003ab26) bg_passive_tab_pane_g1_cp1_srt

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp1_srt

0xb158,	// (0x0003ab2f) bg_passive_tab_pane_g3_cp1_srt

0x2216,	// (0x00031bed) bg_active_tab_pane_cp1_srt_ParamLimits

0x2216,	// (0x00031bed) bg_active_tab_pane_cp1_srt

0xb161,	// (0x0003ab38) tabs_2_active_pane_srt_g1

0xb169,	// (0x0003ab40) tabs_2_active_pane_srt_t1_ParamLimits

0xb169,	// (0x0003ab40) tabs_2_active_pane_srt_t1

0xb14f,	// (0x0003ab26) bg_active_tab_pane_g1_cp1_srt

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp1_srt

0xb158,	// (0x0003ab2f) bg_active_tab_pane_g3_cp1_srt

0x79e8,	// (0x000373bf) tabs_3_active_pane_srt_ParamLimits

0x79e8,	// (0x000373bf) tabs_3_active_pane_srt

0x79f9,	// (0x000373d0) tabs_3_passive_pane_cp_srt_ParamLimits

0x79f9,	// (0x000373d0) tabs_3_passive_pane_cp_srt

0x7a0a,	// (0x000373e1) tabs_3_passive_pane_srt_ParamLimits

0x7a0a,	// (0x000373e1) tabs_3_passive_pane_srt

0x943e,	// (0x00038e15) bg_passive_tab_pane_cp2_srt_ParamLimits

0x943e,	// (0x00038e15) bg_passive_tab_pane_cp2_srt

0x92ce,	// (0x00038ca5) bg_passive_tab_pane_g1_cp2_srt

0x6b68,	// (0x0003653f) bg_passive_tab_pane_g2_cp2_srt

0x92d7,	// (0x00038cae) bg_passive_tab_pane_g3_cp2_srt

0x2216,	// (0x00031bed) bg_active_tab_pane_cp2_srt_ParamLimits

0x2216,	// (0x00031bed) bg_active_tab_pane_cp2_srt

0xb135,	// (0x0003ab0c) tabs_3_active_pane_srt_g1

0xb13d,	// (0x0003ab14) tabs_3_active_pane_srt_t1_ParamLimits

0xb13d,	// (0x0003ab14) tabs_3_active_pane_srt_t1

0x92ce,	// (0x00038ca5) bg_active_tab_pane_g1_cp2_srt

0x6b68,	// (0x0003653f) bg_active_tab_pane_g2_cp2_srt

0x92d7,	// (0x00038cae) bg_active_tab_pane_g3_cp2_srt

0x79a0,	// (0x00037377) tabs_4_active_pane_srt_ParamLimits

0x79a0,	// (0x00037377) tabs_4_active_pane_srt

0x79b2,	// (0x00037389) tabs_4_passive_pane_cp2_srt_ParamLimits

0x79b2,	// (0x00037389) tabs_4_passive_pane_cp2_srt

0x6edf,	// (0x000368b6) aid_size_cell_toolbar

0x62e4,	// (0x00035cbb) main_idle_act_pane_ParamLimits

0x70be,	// (0x00036a95) popup_large_graphic_colour_window_ParamLimits

0x7465,	// (0x00036e3c) popup_toolbar_window_ParamLimits

0x7465,	// (0x00036e3c) popup_toolbar_window

0x42bf,	// (0x00033c96) list_single_graphic_2heading_pane_ParamLimits

0x42bf,	// (0x00033c96) list_single_graphic_2heading_pane

0x2b6c,	// (0x00032543) aid_size_cell_apps_grid_lsc_pane

0x2b7e,	// (0x00032555) aid_size_cell_apps_grid_prt_pane

0x943e,	// (0x00038e15) bg_wml_button_pane_cp1_ParamLimits

0x943e,	// (0x00038e15) bg_wml_button_pane_cp1

0x9bf8,	// (0x000395cf) form_midp_field_text_pane_t1_ParamLimits

0x99ea,	// (0x000393c1) input_focus_pane_cp050_ParamLimits

0x9c23,	// (0x000395fa) list_midp_form_text_pane_ParamLimits

0x9bd5,	// (0x000395ac) input_focus_pane_cp051_ParamLimits

0x9be9,	// (0x000395c0) list_midp_choice_pane_ParamLimits

0x9aa3,	// (0x0003947a) list_single_2graphic_pane_cp3_ParamLimits

0x9aa3,	// (0x0003947a) list_single_2graphic_pane_cp3

0x9ab9,	// (0x00039490) list_single_midp_graphic_pane_ParamLimits

0x9ab9,	// (0x00039490) list_single_midp_graphic_pane

0x544b,	// (0x00034e22) list_single_graphic_2heading_pane_g1_ParamLimits

0x544b,	// (0x00034e22) list_single_graphic_2heading_pane_g1

0x5457,	// (0x00034e2e) list_single_graphic_2heading_pane_g4_ParamLimits

0x5457,	// (0x00034e2e) list_single_graphic_2heading_pane_g4

0x5463,	// (0x00034e3a) list_single_graphic_2heading_pane_g5_ParamLimits

0x5463,	// (0x00034e3a) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003f162) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003f162) list_single_graphic_2heading_pane_g

0x546f,	// (0x00034e46) list_single_graphic_2heading_pane_t1_ParamLimits

0x546f,	// (0x00034e46) list_single_graphic_2heading_pane_t1

0x5483,	// (0x00034e5a) list_single_graphic_2heading_pane_t2_ParamLimits

0x5483,	// (0x00034e5a) list_single_graphic_2heading_pane_t2

0x549f,	// (0x00034e76) list_single_graphic_2heading_pane_t3_ParamLimits

0x549f,	// (0x00034e76) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003f169) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003f169) list_single_graphic_2heading_pane_t

0x98b4,	// (0x0003928b) bg_popup_sub_pane_cp2

0x98de,	// (0x000392b5) grid_toobar_pane

0x7524,	// (0x00036efb) cell_toolbar_pane_ParamLimits

0x7524,	// (0x00036efb) cell_toolbar_pane

0x991a,	// (0x000392f1) cell_toolbar_pane_g1_ParamLimits

0x991a,	// (0x000392f1) cell_toolbar_pane_g1

0x992e,	// (0x00039305) cell_toolbar_pane_g2_ParamLimits

0x992e,	// (0x00039305) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003f177) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003f177) cell_toolbar_pane_g

0x9950,	// (0x00039327) grid_highlight_pane_cp2_ParamLimits

0x9950,	// (0x00039327) grid_highlight_pane_cp2

0x996a,	// (0x00039341) toolbar_button_pane

0x9976,	// (0x0003934d) toolbar_button_pane_g1

0x997e,	// (0x00039355) toolbar_button_pane_g2

0x9986,	// (0x0003935d) toolbar_button_pane_g3

0x998e,	// (0x00039365) toolbar_button_pane_g4

0x9996,	// (0x0003936d) toolbar_button_pane_g5

0x999e,	// (0x00039375) toolbar_button_pane_g6

0x99a6,	// (0x0003937d) toolbar_button_pane_g7

0x99ae,	// (0x00039385) toolbar_button_pane_g8

0x99b6,	// (0x0003938d) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003f17c) toolbar_button_pane_g

0x755c,	// (0x00036f33) list_single_2graphic_pane_g1_cp3_ParamLimits

0x755c,	// (0x00036f33) list_single_2graphic_pane_g1_cp3

0x7568,	// (0x00036f3f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7568,	// (0x00036f3f) list_single_2graphic_pane_g2_cp3

0x7579,	// (0x00036f50) list_single_2graphic_pane_g3_cp3

0x7581,	// (0x00036f58) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7581,	// (0x00036f58) list_single_2graphic_pane_g4_cp3

0x758d,	// (0x00036f64) list_single_2graphic_pane_t1_cp3_ParamLimits

0x758d,	// (0x00036f64) list_single_2graphic_pane_t1_cp3

0x75a8,	// (0x00036f7f) list_single_midp_graphic_pane_g2_ParamLimits

0x75a8,	// (0x00036f7f) list_single_midp_graphic_pane_g2

0x6ee7,	// (0x000368be) aid_zoom_text_primary

0x542f,	// (0x00034e06) aid_zoom_text_secondary

0x9388,	// (0x00038d5f) status_small_pane_g7_ParamLimits

0x9388,	// (0x00038d5f) status_small_pane_g7

0x93ab,	// (0x00038d82) status_small_pane_t1_ParamLimits

0x58e9,	// (0x000352c0) title_pane_g2

0x0003,

0xf529,	// (0x0003ef00) title_pane_g

0x5b52,	// (0x00035529) aid_size_cell_colour_1_pane_ParamLimits

0x5b52,	// (0x00035529) aid_size_cell_colour_1_pane

0x5b66,	// (0x0003553d) aid_size_cell_colour_2_pane_ParamLimits

0x5b66,	// (0x0003553d) aid_size_cell_colour_2_pane

0x5b7a,	// (0x00035551) aid_size_cell_colour_3_pane_ParamLimits

0x5b7a,	// (0x00035551) aid_size_cell_colour_3_pane

0x5b8e,	// (0x00035565) aid_size_cell_colour_4_pane_ParamLimits

0x5b8e,	// (0x00035565) aid_size_cell_colour_4_pane

0x633e,	// (0x00035d15) title_pane_stacon_g1_ParamLimits

0x633e,	// (0x00035d15) title_pane_stacon_g1

0xa002,	// (0x000399d9) popup_note_wait_window_g3_ParamLimits

0xa002,	// (0x000399d9) popup_note_wait_window_g3

0xa079,	// (0x00039a50) popup_note_wait_window_t5_ParamLimits

0xa079,	// (0x00039a50) popup_note_wait_window_t5

0x21ba,	// (0x00031b91) main_feb_china_hwr_fs_writing_pane

0x6f83,	// (0x0003695a) popup_feb_china_hwr_fs_window_ParamLimits

0x6f83,	// (0x0003695a) popup_feb_china_hwr_fs_window

0x75ca,	// (0x00036fa1) aid_size_cell_hwr_fs_ParamLimits

0x75ca,	// (0x00036fa1) aid_size_cell_hwr_fs

0x99ea,	// (0x000393c1) bg_popup_sub_pane_cp3_ParamLimits

0x99ea,	// (0x000393c1) bg_popup_sub_pane_cp3

0x75df,	// (0x00036fb6) grid_hwr_fs_pane_ParamLimits

0x75df,	// (0x00036fb6) grid_hwr_fs_pane

0x75f7,	// (0x00036fce) linegrid_hwr_fs_pane_ParamLimits

0x75f7,	// (0x00036fce) linegrid_hwr_fs_pane

0x7607,	// (0x00036fde) cell_hwr_fs_pane_ParamLimits

0x7607,	// (0x00036fde) cell_hwr_fs_pane

0x99f6,	// (0x000393cd) linegrid_hwr_fs_pane_g1_ParamLimits

0x99f6,	// (0x000393cd) linegrid_hwr_fs_pane_g1

0x9a02,	// (0x000393d9) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a02,	// (0x000393d9) linegrid_hwr_fs_pane_g2

0x9a14,	// (0x000393eb) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a14,	// (0x000393eb) linegrid_hwr_fs_pane_g3

0x762b,	// (0x00037002) linegrid_hwr_fs_pane_g4_ParamLimits

0x762b,	// (0x00037002) linegrid_hwr_fs_pane_g4

0x7649,	// (0x00037020) linegrid_hwr_fs_pane_g5_ParamLimits

0x7649,	// (0x00037020) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0003f1a7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0003f1a7) linegrid_hwr_fs_pane_g

0x9a20,	// (0x000393f7) cell_hwr_fs_pane_g1_ParamLimits

0x9a20,	// (0x000393f7) cell_hwr_fs_pane_g1

0x97ed,	// (0x000391c4) cell_hwr_fs_pane_g2_ParamLimits

0x97ed,	// (0x000391c4) cell_hwr_fs_pane_g2

0x9a36,	// (0x0003940d) cell_hwr_fs_pane_g3_ParamLimits

0x9a36,	// (0x0003940d) cell_hwr_fs_pane_g3

0x9a43,	// (0x0003941a) cell_hwr_fs_pane_g4_ParamLimits

0x9a43,	// (0x0003941a) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0003f1b2) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0003f1b2) cell_hwr_fs_pane_g

0x765f,	// (0x00037036) cell_hwr_fs_pane_t1

0x21ba,	// (0x00031b91) grid_highlight_pane_cp6

0x21ba,	// (0x00031b91) main_idle_act2_pane

0x297b,	// (0x00032352) aid_inside_area_popup_secondary

0xa6b2,	// (0x0003a089) aid_inside_area_window_primary_ParamLimits

0xa6b2,	// (0x0003a089) aid_inside_area_window_primary

0xb29c,	// (0x0003ac73) ai2_news_ticker_pane

0xb2a4,	// (0x0003ac7b) aid_size_cell_ai1_link_ParamLimits

0xb2a4,	// (0x0003ac7b) aid_size_cell_ai1_link

0xb2be,	// (0x0003ac95) popup_ai2_data_window_ParamLimits

0xb2be,	// (0x0003ac95) popup_ai2_data_window

0xb2dc,	// (0x0003acb3) popup_ai2_link_window_ParamLimits

0xb2dc,	// (0x0003acb3) popup_ai2_link_window

0x99ea,	// (0x000393c1) bg_popup_sub_pane_cp4_ParamLimits

0x99ea,	// (0x000393c1) bg_popup_sub_pane_cp4

0xb2f2,	// (0x0003acc9) grid_ai2_link_pane_ParamLimits

0xb2f2,	// (0x0003acc9) grid_ai2_link_pane

0xb309,	// (0x0003ace0) popup_ai2_link_window_g1_ParamLimits

0xb309,	// (0x0003ace0) popup_ai2_link_window_g1

0xb315,	// (0x0003acec) popup_ai2_link_window_g2_ParamLimits

0xb315,	// (0x0003acec) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0003f385) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0003f385) popup_ai2_link_window_g

0xb326,	// (0x0003acfd) ai2_mp_button_pane

0xb32e,	// (0x0003ad05) ai2_mp_volume_pane

0x9bd5,	// (0x000395ac) bg_popup_sub_pane_cp5_ParamLimits

0x9bd5,	// (0x000395ac) bg_popup_sub_pane_cp5

0xb336,	// (0x0003ad0d) heading_ai2_gene_pane_ParamLimits

0xb336,	// (0x0003ad0d) heading_ai2_gene_pane

0xb342,	// (0x0003ad19) list_ai2_gene_pane_ParamLimits

0xb342,	// (0x0003ad19) list_ai2_gene_pane

0xb38a,	// (0x0003ad61) cell_ai2_link_pane_ParamLimits

0xb38a,	// (0x0003ad61) cell_ai2_link_pane

0xb3a0,	// (0x0003ad77) cell_ai2_link_pane_g1

0x21ba,	// (0x00031b91) grid_highlight_pane_cp7

0x7a58,	// (0x0003742f) ai2_mp_volume_pane_g1

0xb473,	// (0x0003ae4a) ai2_mp_volume_pane_g2

0xb3e8,	// (0x0003adbf) list_ai2_gene_pane_t1

0xb47b,	// (0x0003ae52) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0003f39e) ai2_mp_volume_pane_g

0x7a60,	// (0x00037437) volume_small_pane_cp3

0xb483,	// (0x0003ae5a) aid_size_cell_ai2_button

0xb48b,	// (0x0003ae62) grid_ai2_button_pane

0xb494,	// (0x0003ae6b) cell_ai2_button_pane_ParamLimits

0xb494,	// (0x0003ae6b) cell_ai2_button_pane

0x21b0,	// (0x00031b87) cell_ai2_button_pane_g1

0x21ba,	// (0x00031b91) grid_highlight_pane_cp8

0xb433,	// (0x0003ae0a) ai2_gene_pane_t1_ParamLimits

0xb433,	// (0x0003ae0a) ai2_gene_pane_t1

0x6ed5,	// (0x000368ac) aid_height_parent_landscape

0xad42,	// (0x0003a719) aid_height_set_list

0xad53,	// (0x0003a72a) aid_size_parent

0xb0bb,	// (0x0003aa92) aid_size_cell_graphic_pane_ParamLimits

0xb352,	// (0x0003ad29) popup_ai2_data_window_g1_ParamLimits

0xb352,	// (0x0003ad29) popup_ai2_data_window_g1

0xb35e,	// (0x0003ad35) ai2_news_ticker_pane_g1

0xb366,	// (0x0003ad3d) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0003f38a) ai2_news_ticker_pane_g

0xb36e,	// (0x0003ad45) ai2_news_ticker_pane_t1

0xb37c,	// (0x0003ad53) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0003f38f) ai2_news_ticker_pane_t

0xb3a9,	// (0x0003ad80) heading_ai2_gene_pane_g1

0xb3b1,	// (0x0003ad88) heading_ai2_gene_pane_t1_ParamLimits

0xb3b1,	// (0x0003ad88) heading_ai2_gene_pane_t1

0xb3c6,	// (0x0003ad9d) list_highlight_pane_cp6

0xb3ce,	// (0x0003ada5) ai2_gene_pane_ParamLimits

0xb3ce,	// (0x0003ada5) ai2_gene_pane

0xb3f6,	// (0x0003adcd) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0003f394) list_ai2_gene_pane_t

0xb404,	// (0x0003addb) list_highlight_pane_cp8_ParamLimits

0xb404,	// (0x0003addb) list_highlight_pane_cp8

0xb415,	// (0x0003adec) ai2_gene_pane_g1_ParamLimits

0xb415,	// (0x0003adec) ai2_gene_pane_g1

0xb427,	// (0x0003adfe) ai2_gene_pane_g2_ParamLimits

0xb427,	// (0x0003adfe) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0003f399) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0003f399) ai2_gene_pane_g

0x27ee,	// (0x000321c5) scroll_pane_cp12

0x6e94,	// (0x0003686b) control_pane_t3_ParamLimits

0x6e94,	// (0x0003686b) control_pane_t3

0x939c,	// (0x00038d73) status_small_pane_g8_ParamLimits

0x939c,	// (0x00038d73) status_small_pane_g8

0x7081,	// (0x00036a58) popup_find_window_ParamLimits

0x72ae,	// (0x00036c85) popup_note_image_window_ParamLimits

0x3ffa,	// (0x000339d1) list_double2_graphic_pane_vc_g1_ParamLimits

0x3ffa,	// (0x000339d1) list_double2_graphic_pane_vc_g1

0x41bc,	// (0x00033b93) list_double2_graphic_pane_vc_g2_ParamLimits

0x41bc,	// (0x00033b93) list_double2_graphic_pane_vc_g2

0x41c8,	// (0x00033b9f) list_double2_graphic_pane_vc_g3_ParamLimits

0x41c8,	// (0x00033b9f) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003f170) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003f170) list_double2_graphic_pane_vc_g

0x41d4,	// (0x00033bab) list_double2_graphic_pane_vc_t1_ParamLimits

0x41d4,	// (0x00033bab) list_double2_graphic_pane_vc_t1

0x3fba,	// (0x00033991) list_single_heading_pane_vc_g1_ParamLimits

0x3fba,	// (0x00033991) list_single_heading_pane_vc_g1

0x3fc6,	// (0x0003399d) list_single_heading_pane_vc_g2_ParamLimits

0x3fc6,	// (0x0003399d) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f191) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f191) list_single_heading_pane_vc_g

0x41ea,	// (0x00033bc1) list_single_heading_pane_vc_t1_ParamLimits

0x41ea,	// (0x00033bc1) list_single_heading_pane_vc_t1

0x4200,	// (0x00033bd7) list_single_heading_pane_vc_t2_ParamLimits

0x4200,	// (0x00033bd7) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0003f196) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0003f196) list_single_heading_pane_vc_t

0x4212,	// (0x00033be9) list_setting_number_pane_vc_g1_ParamLimits

0x4212,	// (0x00033be9) list_setting_number_pane_vc_g1

0x421e,	// (0x00033bf5) list_setting_number_pane_vc_g2_ParamLimits

0x421e,	// (0x00033bf5) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003f19b) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003f19b) list_setting_number_pane_vc_g

0x422a,	// (0x00033c01) list_setting_number_pane_vc_t1_ParamLimits

0x422a,	// (0x00033c01) list_setting_number_pane_vc_t1

0x423e,	// (0x00033c15) list_setting_number_pane_vc_t2_ParamLimits

0x423e,	// (0x00033c15) list_setting_number_pane_vc_t2

0x425a,	// (0x00033c31) list_setting_number_pane_vc_t3_ParamLimits

0x425a,	// (0x00033c31) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0003f1a0) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003f1a0) list_setting_number_pane_vc_t

0x4288,	// (0x00033c5f) set_value_pane_vc_ParamLimits

0x4288,	// (0x00033c5f) set_value_pane_vc

0x42bf,	// (0x00033c96) list_double2_graphic_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double2_graphic_pane_vc

0xaf3c,	// (0x0003a913) list_double2_large_graphic_pane_vc_ParamLimits

0xaf3c,	// (0x0003a913) list_double2_large_graphic_pane_vc

0x42bf,	// (0x00033c96) list_double2_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double2_pane_vc

0x42bf,	// (0x00033c96) list_double_graphic_heading_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double_graphic_heading_pane_vc

0x42bf,	// (0x00033c96) list_double_graphic_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double_graphic_pane_vc

0x42bf,	// (0x00033c96) list_double_heading_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double_heading_pane_vc

0xaf50,	// (0x0003a927) list_double_large_graphic_pane_vc_ParamLimits

0xaf50,	// (0x0003a927) list_double_large_graphic_pane_vc

0x42bf,	// (0x00033c96) list_double_number_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double_number_pane_vc

0x42bf,	// (0x00033c96) list_double_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double_pane_vc

0x42bf,	// (0x00033c96) list_double_time_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_double_time_pane_vc

0x42bf,	// (0x00033c96) list_setting_number_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_setting_number_pane_vc

0x42bf,	// (0x00033c96) list_setting_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_setting_pane_vc

0x42bf,	// (0x00033c96) list_single_graphic_heading_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_single_graphic_heading_pane_vc

0x42bf,	// (0x00033c96) list_single_heading_pane_vc_ParamLimits

0x42bf,	// (0x00033c96) list_single_heading_pane_vc

0x7941,	// (0x00037318) list_single_number_heading_pane_vc_ParamLimits

0x7941,	// (0x00037318) list_single_number_heading_pane_vc

0x3ffa,	// (0x000339d1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3ffa,	// (0x000339d1) list_double_graphic_heading_pane_vc_g1

0x3fba,	// (0x00033991) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3fba,	// (0x00033991) list_double_graphic_heading_pane_vc_g2

0x3fc6,	// (0x0003399d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3fc6,	// (0x0003399d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0003f3a5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003f3a5) list_double_graphic_heading_pane_vc_g

0x42d6,	// (0x00033cad) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x42d6,	// (0x00033cad) list_double_graphic_heading_pane_vc_t1

0x42ec,	// (0x00033cc3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x42ec,	// (0x00033cc3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0003f3ac) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0003f3ac) list_double_graphic_heading_pane_vc_t

0x4212,	// (0x00033be9) list_setting_pane_vc_g1_ParamLimits

0x4212,	// (0x00033be9) list_setting_pane_vc_g1

0x421e,	// (0x00033bf5) list_setting_pane_vc_g2_ParamLimits

0x421e,	// (0x00033bf5) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003f19b) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003f19b) list_setting_pane_vc_g

0x430a,	// (0x00033ce1) list_setting_pane_vc_t1_ParamLimits

0x430a,	// (0x00033ce1) list_setting_pane_vc_t1

0x4326,	// (0x00033cfd) list_setting_pane_vc_t2_ParamLimits

0x4326,	// (0x00033cfd) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0003f3da) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0003f3da) list_setting_pane_vc_t

0x4288,	// (0x00033c5f) set_value_pane_cp_vc_ParamLimits

0x4288,	// (0x00033c5f) set_value_pane_cp_vc

0x3fba,	// (0x00033991) list_single_number_heading_pane_vc_g1_ParamLimits

0x3fba,	// (0x00033991) list_single_number_heading_pane_vc_g1

0x3fc6,	// (0x0003399d) list_single_number_heading_pane_vc_g2_ParamLimits

0x3fc6,	// (0x0003399d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f191) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f191) list_single_number_heading_pane_vc_g

0x3fd2,	// (0x000339a9) list_single_number_heading_pane_vc_t1_ParamLimits

0x3fd2,	// (0x000339a9) list_single_number_heading_pane_vc_t1

0x4342,	// (0x00033d19) list_single_number_heading_pane_vc_t2_ParamLimits

0x4342,	// (0x00033d19) list_single_number_heading_pane_vc_t2

0x3fe8,	// (0x000339bf) list_single_number_heading_pane_vc_t3_ParamLimits

0x3fe8,	// (0x000339bf) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0003f3df) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0003f3df) list_single_number_heading_pane_vc_t

0x3ffa,	// (0x000339d1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3ffa,	// (0x000339d1) list_single_graphic_heading_pane_vc_g1

0x3fba,	// (0x00033991) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3fba,	// (0x00033991) list_single_graphic_heading_pane_vc_g4

0x3fc6,	// (0x0003399d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3fc6,	// (0x0003399d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0003f3a5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003f3a5) list_single_graphic_heading_pane_vc_g

0x3fd2,	// (0x000339a9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3fd2,	// (0x000339a9) list_single_graphic_heading_pane_vc_t1

0x4358,	// (0x00033d2f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4358,	// (0x00033d2f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0003f3e6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0003f3e6) list_single_graphic_heading_pane_vc_t

0x3fba,	// (0x00033991) list_double2_pane_vc_g1_ParamLimits

0x3fba,	// (0x00033991) list_double2_pane_vc_g1

0x3fc6,	// (0x0003399d) list_double2_pane_vc_g2_ParamLimits

0x3fc6,	// (0x0003399d) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f191) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f191) list_double2_pane_vc_g

0x42a9,	// (0x00033c80) list_double2_pane_vc_t1_ParamLimits

0x42a9,	// (0x00033c80) list_double2_pane_vc_t1

0x4006,	// (0x000339dd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4006,	// (0x000339dd) list_double2_large_graphic_pane_vc_g1

0x4012,	// (0x000339e9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4012,	// (0x000339e9) list_double2_large_graphic_pane_vc_g2

0x401e,	// (0x000339f5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x401e,	// (0x000339f5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0003f3eb) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0003f3eb) list_double2_large_graphic_pane_vc_g

0x402a,	// (0x00033a01) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x402a,	// (0x00033a01) list_double2_large_graphic_pane_vc_t1

0x436a,	// (0x00033d41) list_double_time_pane_vc_g1_ParamLimits

0x436a,	// (0x00033d41) list_double_time_pane_vc_g1

0x4376,	// (0x00033d4d) list_double_time_pane_vc_g2_ParamLimits

0x4376,	// (0x00033d4d) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0003f3f2) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003f3f2) list_double_time_pane_vc_g

0x4382,	// (0x00033d59) list_double_time_pane_vc_t1_ParamLimits

0x4382,	// (0x00033d59) list_double_time_pane_vc_t1

0x43ac,	// (0x00033d83) list_double_time_pane_vc_t2_ParamLimits

0x43ac,	// (0x00033d83) list_double_time_pane_vc_t2

0x43f5,	// (0x00033dcc) list_double_time_pane_vc_t3_ParamLimits

0x43f5,	// (0x00033dcc) list_double_time_pane_vc_t3

0x4407,	// (0x00033dde) list_double_time_pane_vc_t4_ParamLimits

0x4407,	// (0x00033dde) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0003f3f7) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0003f3f7) list_double_time_pane_vc_t

0x3fba,	// (0x00033991) list_double_pane_vc_g1_ParamLimits

0x3fba,	// (0x00033991) list_double_pane_vc_g1

0x3fc6,	// (0x0003399d) list_double_pane_vc_g2_ParamLimits

0x3fc6,	// (0x0003399d) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f191) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f191) list_double_pane_vc_g

0x441b,	// (0x00033df2) list_double_pane_vc_t1_ParamLimits

0x441b,	// (0x00033df2) list_double_pane_vc_t1

0x442f,	// (0x00033e06) list_double_pane_vc_t2_ParamLimits

0x442f,	// (0x00033e06) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0003f400) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0003f400) list_double_pane_vc_t

0x3fba,	// (0x00033991) list_double_number_pane_vc_g1_ParamLimits

0x3fba,	// (0x00033991) list_double_number_pane_vc_g1

0x3fc6,	// (0x0003399d) list_double_number_pane_vc_g2_ParamLimits

0x3fc6,	// (0x0003399d) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f191) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f191) list_double_number_pane_vc_g

0x4445,	// (0x00033e1c) list_double_number_pane_vc_t1_ParamLimits

0x4445,	// (0x00033e1c) list_double_number_pane_vc_t1

0x4457,	// (0x00033e2e) list_double_number_pane_vc_t2_ParamLimits

0x4457,	// (0x00033e2e) list_double_number_pane_vc_t2

0x442f,	// (0x00033e06) list_double_number_pane_vc_t3_ParamLimits

0x442f,	// (0x00033e06) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003f405) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003f405) list_double_number_pane_vc_t

0x446b,	// (0x00033e42) list_double_large_graphic_pane_vc_g1_ParamLimits

0x446b,	// (0x00033e42) list_double_large_graphic_pane_vc_g1

0x448d,	// (0x00033e64) list_double_large_graphic_pane_vc_g2_ParamLimits

0x448d,	// (0x00033e64) list_double_large_graphic_pane_vc_g2

0x44a1,	// (0x00033e78) list_double_large_graphic_pane_vc_g3_ParamLimits

0x44a1,	// (0x00033e78) list_double_large_graphic_pane_vc_g3

0x44b0,	// (0x00033e87) list_double_large_graphic_pane_vc_g4_ParamLimits

0x44b0,	// (0x00033e87) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0003f40c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0003f40c) list_double_large_graphic_pane_vc_g

0x44bc,	// (0x00033e93) list_double_large_graphic_pane_vc_t1_ParamLimits

0x44bc,	// (0x00033e93) list_double_large_graphic_pane_vc_t1

0x44d8,	// (0x00033eaf) list_double_large_graphic_pane_vc_t2_ParamLimits

0x44d8,	// (0x00033eaf) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003f415) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003f415) list_double_large_graphic_pane_vc_t

0x3fba,	// (0x00033991) list_double_heading_pane_vc_g1_ParamLimits

0x3fba,	// (0x00033991) list_double_heading_pane_vc_g1

0x3fc6,	// (0x0003399d) list_double_heading_pane_vc_g2_ParamLimits

0x3fc6,	// (0x0003399d) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f191) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f191) list_double_heading_pane_vc_g

0x44f8,	// (0x00033ecf) list_double_heading_pane_vc_t1_ParamLimits

0x44f8,	// (0x00033ecf) list_double_heading_pane_vc_t1

0x450a,	// (0x00033ee1) list_double_heading_pane_vc_t2_ParamLimits

0x450a,	// (0x00033ee1) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003f41a) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003f41a) list_double_heading_pane_vc_t

0x454e,	// (0x00033f25) list_double_graphic_pane_vc_g1_ParamLimits

0x454e,	// (0x00033f25) list_double_graphic_pane_vc_g1

0x4561,	// (0x00033f38) list_double_graphic_pane_vc_g2_ParamLimits

0x4561,	// (0x00033f38) list_double_graphic_pane_vc_g2

0x3fba,	// (0x00033991) list_double_graphic_pane_vc_g3_ParamLimits

0x3fba,	// (0x00033991) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0003f41f) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003f41f) list_double_graphic_pane_vc_g

0x457e,	// (0x00033f55) list_double_graphic_pane_vc_t1_ParamLimits

0x457e,	// (0x00033f55) list_double_graphic_pane_vc_t1

0x45a8,	// (0x00033f7f) list_double_graphic_pane_vc_t2_ParamLimits

0x45a8,	// (0x00033f7f) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0003f428) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0003f428) list_double_graphic_pane_vc_t

0x54eb,	// (0x00034ec2) aid_size_cell_fastswap

0x54f3,	// (0x00034eca) aid_size_cell_touch_ParamLimits

0x54f3,	// (0x00034eca) aid_size_cell_touch

0x575e,	// (0x00035135) popup_fast_swap_wide_window_ParamLimits

0x575e,	// (0x00035135) popup_fast_swap_wide_window

0x587c,	// (0x00035253) touch_pane_ParamLimits

0x587c,	// (0x00035253) touch_pane

0x2844,	// (0x0003221b) button_value_adjust_pane_cp2

0x4063,	// (0x00033a3a) button_value_adjust_pane_cp4

0x406b,	// (0x00033a42) form_field_data_pane_cp2

0x6120,	// (0x00035af7) form_field_data_wide_pane_cp2

0x657d,	// (0x00035f54) bg_scroll_pane_ParamLimits

0x659c,	// (0x00035f73) scroll_handle_pane_ParamLimits

0x65b0,	// (0x00035f87) scroll_sc2_down_pane_ParamLimits

0x65b0,	// (0x00035f87) scroll_sc2_down_pane

0x65d7,	// (0x00035fae) scroll_sc2_up_pane_ParamLimits

0x65d7,	// (0x00035fae) scroll_sc2_up_pane

0xbbbc,	// (0x0003b593) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x0003b593) grid_wheel_folder_pane_g1

0x6c8d,	// (0x00036664) clock_nsta_pane_cp2_ParamLimits

0x6c8d,	// (0x00036664) clock_nsta_pane_cp2

0x911f,	// (0x00038af6) listscroll_midp_pane_ParamLimits

0x912b,	// (0x00038b02) midp_canvas_pane

0x9416,	// (0x00038ded) nsta_clock_indic_pane

0x944a,	// (0x00038e21) listscroll_form_pane_vc

0x9452,	// (0x00038e29) listscroll_set_pane_vc_ParamLimits

0x9452,	// (0x00038e29) listscroll_set_pane_vc

0x9549,	// (0x00038f20) clock_nsta_pane

0x95c6,	// (0x00038f9d) indicator_nsta_pane

0x98b4,	// (0x0003928b) bg_popup_sub_pane_cp2_ParamLimits

0x98c8,	// (0x0003929f) find_pane_cp2_ParamLimits

0x98c8,	// (0x0003929f) find_pane_cp2

0x98de,	// (0x000392b5) grid_toobar_pane_ParamLimits

0x99be,	// (0x00039395) list_form_gen_pane_vc_ParamLimits

0x99be,	// (0x00039395) list_form_gen_pane_vc

0x99d4,	// (0x000393ab) scroll_pane_cp8_vc_ParamLimits

0x99d4,	// (0x000393ab) scroll_pane_cp8_vc

0x9a50,	// (0x00039427) data_form_wide_pane_vc_ParamLimits

0x9a50,	// (0x00039427) data_form_wide_pane_vc

0x9a5c,	// (0x00039433) form_field_data_wide_pane_vc_g1

0x9a64,	// (0x0003943b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9a64,	// (0x0003943b) form_field_data_wide_pane_vc_t1

0x2858,	// (0x0003222f) input_focus_pane_cp6_vc_ParamLimits

0x2858,	// (0x0003222f) input_focus_pane_cp6_vc

0x9d60,	// (0x00039737) list_midp_pane_ParamLimits

0x9d6c,	// (0x00039743) scroll_pane_cp16_ParamLimits

0x9d6c,	// (0x00039743) scroll_pane_cp16

0x9dd6,	// (0x000397ad) button_value_adjust_pane_ParamLimits

0x9dd6,	// (0x000397ad) button_value_adjust_pane

0xad65,	// (0x0003a73c) button_value_adjust_pane_cp6_ParamLimits

0xad65,	// (0x0003a73c) button_value_adjust_pane_cp6

0xaead,	// (0x0003a884) settings_code_pane_cp_ParamLimits

0xaead,	// (0x0003a884) settings_code_pane_cp

0x21b0,	// (0x00031b87) cell_touch_pane_g1

0x21b0,	// (0x00031b87) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003f0b5) cell_touch_pane_g

0xb4a6,	// (0x0003ae7d) cell_touch_pane_cp_ParamLimits

0xb4a6,	// (0x0003ae7d) cell_touch_pane_cp

0xb4b6,	// (0x0003ae8d) cell_touch_pane_ParamLimits

0xb4b6,	// (0x0003ae8d) cell_touch_pane

0x21b0,	// (0x00031b87) scroll_sc2_down_pane_g1

0x21b0,	// (0x00031b87) scroll_sc2_up_pane_g1

0x21ba,	// (0x00031b91) bg_set_opt_pane_cp4_vc

0xb4c7,	// (0x0003ae9e) list_set_graphic_pane_vc_g1_ParamLimits

0xb4c7,	// (0x0003ae9e) list_set_graphic_pane_vc_g1

0xb4d3,	// (0x0003aeaa) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d3,	// (0x0003aeaa) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0003f3b1) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0003f3b1) list_set_graphic_pane_vc_g

0xb4df,	// (0x0003aeb6) text_primary_small_cp13_vc_ParamLimits

0xb4df,	// (0x0003aeb6) text_primary_small_cp13_vc

0xb4f7,	// (0x0003aece) list_set_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x0003aece) list_set_graphic_pane_vc

0x21ba,	// (0x00031b91) input_focus_pane_cp2_vc

0x21b0,	// (0x00031b87) setting_code_pane_vc_g1

0x222d,	// (0x00031c04) setting_code_pane_vc_t1

0xb50a,	// (0x0003aee1) set_text_pane_vc_t1_ParamLimits

0xb50a,	// (0x0003aee1) set_text_pane_vc_t1

0x21ba,	// (0x00031b91) input_focus_pane_cp1_vc

0xb52b,	// (0x0003af02) list_set_text_pane_vc

0x21b0,	// (0x00031b87) setting_text_pane_vc_g1

0x21ba,	// (0x00031b91) bg_set_opt_pane_cp2_vc

0x2224,	// (0x00031bfb) setting_slider_graphic_pane_vc_g1

0xb535,	// (0x0003af0c) setting_slider_graphic_pane_vc_t1

0xb547,	// (0x0003af1e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0003f3b6) setting_slider_graphic_pane_vc_t

0xb559,	// (0x0003af30) slider_set_pane_cp_vc

0xb563,	// (0x0003af3a) slider_set_pane_vc_g1

0xb56c,	// (0x0003af43) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0003f3bb) slider_set_pane_vc_g

0x28b0,	// (0x00032287) set_opt_bg_pane_g1_copy1

0x28b8,	// (0x0003228f) set_opt_bg_pane_g2_copy1

0xb598,	// (0x0003af6f) set_opt_bg_pane_g3_copy1

0x28c8,	// (0x0003229f) set_opt_bg_pane_g4_copy1

0x28d0,	// (0x000322a7) set_opt_bg_pane_g5_copy1

0x28d8,	// (0x000322af) set_opt_bg_pane_g6_copy1

0xb5a2,	// (0x0003af79) set_opt_bg_pane_g7_copy1

0xb5ac,	// (0x0003af83) set_opt_bg_pane_g8_copy1

0xb5b6,	// (0x0003af8d) set_opt_bg_pane_g9_copy1

0x21ba,	// (0x00031b91) bg_set_opt_pane_cp_vc

0xb5c0,	// (0x0003af97) setting_slider_pane_vc_t1

0xb5cf,	// (0x0003afa6) setting_slider_pane_vc_t2

0xb5e1,	// (0x0003afb8) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0003f3ca) setting_slider_pane_vc_t

0xb5f3,	// (0x0003afca) slider_set_pane_vc

0x768d,	// (0x00037064) volume_set_pane_vc_g1

0x7696,	// (0x0003706d) volume_set_pane_vc_g2

0x769f,	// (0x00037076) volume_set_pane_vc_g3

0x76a8,	// (0x0003707f) volume_set_pane_vc_g4

0x76b1,	// (0x00037088) volume_set_pane_vc_g5

0x76ba,	// (0x00037091) volume_set_pane_vc_g6

0x76c3,	// (0x0003709a) volume_set_pane_vc_g7

0x76cc,	// (0x000370a3) volume_set_pane_vc_g8

0x76d5,	// (0x000370ac) volume_set_pane_vc_g9

0x76de,	// (0x000370b5) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0003f268) volume_set_pane_vc_g

0xb5fd,	// (0x0003afd4) volume_set_pane_vc

0xb607,	// (0x0003afde) button_value_adjust_pane_cp1_vc

0xb611,	// (0x0003afe8) list_highlight_pane_cp2_vc

0xb61a,	// (0x0003aff1) list_set_pane_vc_ParamLimits

0xb61a,	// (0x0003aff1) list_set_pane_vc

0xb688,	// (0x0003b05f) main_pane_set_vc_t1_ParamLimits

0xb688,	// (0x0003b05f) main_pane_set_vc_t1

0xb69d,	// (0x0003b074) main_pane_set_vc_t2_ParamLimits

0xb69d,	// (0x0003b074) main_pane_set_vc_t2

0xb6af,	// (0x0003b086) main_pane_set_vc_t3_ParamLimits

0xb6af,	// (0x0003b086) main_pane_set_vc_t3

0xb6c3,	// (0x0003b09a) main_pane_set_vc_t4_ParamLimits

0xb6c3,	// (0x0003b09a) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0003f3d1) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0003f3d1) main_pane_set_vc_t

0xb6d7,	// (0x0003b0ae) setting_code_pane_vc_ParamLimits

0xb6d7,	// (0x0003b0ae) setting_code_pane_vc

0xb6e8,	// (0x0003b0bf) setting_slider_graphic_pane_vc

0xb6e8,	// (0x0003b0bf) setting_slider_pane_vc

0xb6e8,	// (0x0003b0bf) setting_text_pane_vc

0xb6e8,	// (0x0003b0bf) setting_volume_pane_vc

0xb6f2,	// (0x0003b0c9) scroll_pane_cp121_vc

0x2832,	// (0x00032209) set_content_pane_vc

0xb6fa,	// (0x0003b0d1) button_value_adjust_pane_g1

0xb703,	// (0x0003b0da) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0003f42d) button_value_adjust_pane_g

0xb70c,	// (0x0003b0e3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb70c,	// (0x0003b0e3) form_field_slider_wide_pane_vc_t1

0xb71e,	// (0x0003b0f5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb71e,	// (0x0003b0f5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0003f432) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003f432) form_field_slider_wide_pane_vc_t

0x2208,	// (0x00031bdf) input_focus_pane_cp10_vc_ParamLimits

0x2208,	// (0x00031bdf) input_focus_pane_cp10_vc

0xb74a,	// (0x0003b121) slider_cont_pane_cp1_vc_ParamLimits

0xb74a,	// (0x0003b121) slider_cont_pane_cp1_vc

0xb75c,	// (0x0003b133) slider_form_pane_g1_cp2

0xb56c,	// (0x0003af43) slider_form_pane_g2_cp2

0xb789,	// (0x0003b160) form_field_slider_pane_vc_t3

0xb797,	// (0x0003b16e) form_field_slider_pane_vc_t4

0xb7a5,	// (0x0003b17c) slider_form_pane_vc_ParamLimits

0xb7a5,	// (0x0003b17c) slider_form_pane_vc

0xb7b2,	// (0x0003b189) form_field_slider_pane_vc_t1_ParamLimits

0xb7b2,	// (0x0003b189) form_field_slider_pane_vc_t1

0xb71e,	// (0x0003b0f5) form_field_slider_pane_vc_t2_ParamLimits

0xb71e,	// (0x0003b0f5) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003f444) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003f444) form_field_slider_pane_vc_t

0x2208,	// (0x00031bdf) input_focus_pane_cp9_vc_ParamLimits

0x2208,	// (0x00031bdf) input_focus_pane_cp9_vc

0xb7c8,	// (0x0003b19f) slider_cont_pane_vc_ParamLimits

0xb7c8,	// (0x0003b19f) slider_cont_pane_vc

0xb7dc,	// (0x0003b1b3) list_form_graphic_pane_cp_vc_ParamLimits

0xb7dc,	// (0x0003b1b3) list_form_graphic_pane_cp_vc

0x9a5c,	// (0x00039433) form_field_popup_wide_pane_vc_g1

0xb7f1,	// (0x0003b1c8) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f1,	// (0x0003b1c8) form_field_popup_wide_pane_vc_t1

0x2858,	// (0x0003222f) input_focus_pane_cp8_vc_ParamLimits

0x2858,	// (0x0003222f) input_focus_pane_cp8_vc

0xb836,	// (0x0003b20d) list_form_wide_pane_vc_ParamLimits

0xb836,	// (0x0003b20d) list_form_wide_pane_vc

0xb842,	// (0x0003b219) list_form_graphic_pane_vc_g1

0xb84a,	// (0x0003b221) list_form_graphic_pane_vc_t1_ParamLimits

0xb84a,	// (0x0003b221) list_form_graphic_pane_vc_t1

0x2216,	// (0x00031bed) list_highlight_pane_cp5_vc_ParamLimits

0x2216,	// (0x00031bed) list_highlight_pane_cp5_vc

0xb866,	// (0x0003b23d) list_form_graphic_pane_vc_ParamLimits

0xb866,	// (0x0003b23d) list_form_graphic_pane_vc

0x9a5c,	// (0x00039433) form_field_popup_pane_vc_g1

0xb87c,	// (0x0003b253) form_field_popup_pane_vc_t1_ParamLimits

0xb87c,	// (0x0003b253) form_field_popup_pane_vc_t1

0x2858,	// (0x0003222f) input_focus_pane_cp7_vc_ParamLimits

0x2858,	// (0x0003222f) input_focus_pane_cp7_vc

0xb893,	// (0x0003b26a) list_form_pane_vc_ParamLimits

0xb893,	// (0x0003b26a) list_form_pane_vc

0xb89f,	// (0x0003b276) data_form_pane_vc_t1_ParamLimits

0xb89f,	// (0x0003b276) data_form_pane_vc_t1

0x28b0,	// (0x00032287) input_focus_pane_vc_g1

0x28b8,	// (0x0003228f) input_focus_pane_vc_g2

0x28c0,	// (0x00032297) input_focus_pane_vc_g3

0x28c8,	// (0x0003229f) input_focus_pane_vc_g4

0x28d0,	// (0x000322a7) input_focus_pane_vc_g5

0x28d8,	// (0x000322af) input_focus_pane_vc_g6

0x28e0,	// (0x000322b7) input_focus_pane_vc_g7

0x28e8,	// (0x000322bf) input_focus_pane_vc_g8

0x28f0,	// (0x000322c7) input_focus_pane_vc_g9

0x21b0,	// (0x00031b87) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003f03e) input_focus_pane_vc_g

0x9a50,	// (0x00039427) data_form_pane_vc_ParamLimits

0x9a50,	// (0x00039427) data_form_pane_vc

0x9a5c,	// (0x00039433) form_field_data_pane_vc_g1

0xb8bc,	// (0x0003b293) form_field_data_pane_vc_t1_ParamLimits

0xb8bc,	// (0x0003b293) form_field_data_pane_vc_t1

0x2858,	// (0x0003222f) input_focus_pane_vc_ParamLimits

0x2858,	// (0x0003222f) input_focus_pane_vc

0xb8d6,	// (0x0003b2ad) button_value_adjust_pane_cp3_vc

0xb8de,	// (0x0003b2b5) button_value_adjust_pane_cp5_vc

0xb8e6,	// (0x0003b2bd) form_field_data_pane_vc_ParamLimits

0xb8e6,	// (0x0003b2bd) form_field_data_pane_vc

0xb901,	// (0x0003b2d8) form_field_data_pane_vc_cp2

0xb909,	// (0x0003b2e0) form_field_data_wide_pane_vc_ParamLimits

0xb909,	// (0x0003b2e0) form_field_data_wide_pane_vc

0xb923,	// (0x0003b2fa) form_field_data_wide_pane_vc_cp2

0xb92b,	// (0x0003b302) form_field_popup_pane_vc_ParamLimits

0xb92b,	// (0x0003b302) form_field_popup_pane_vc

0xb946,	// (0x0003b31d) form_field_popup_wide_pane_vc_ParamLimits

0xb946,	// (0x0003b31d) form_field_popup_wide_pane_vc

0xb960,	// (0x0003b337) form_field_slider_pane_vc_ParamLimits

0xb960,	// (0x0003b337) form_field_slider_pane_vc

0xb973,	// (0x0003b34a) form_field_slider_wide_pane_vc_ParamLimits

0xb973,	// (0x0003b34a) form_field_slider_wide_pane_vc

0xb986,	// (0x0003b35d) grid_touch_1_pane_ParamLimits

0xb986,	// (0x0003b35d) grid_touch_1_pane

0xb992,	// (0x0003b369) grid_touch_2_pane_ParamLimits

0xb992,	// (0x0003b369) grid_touch_2_pane

0x93e1,	// (0x00038db8) touch_pane_g1_ParamLimits

0x93e1,	// (0x00038db8) touch_pane_g1

0xb9ac,	// (0x0003b383) cell_app_pane_cp_wide_ParamLimits

0xb9ac,	// (0x0003b383) cell_app_pane_cp_wide

0xb9bd,	// (0x0003b394) grid_popup_fast_wide_pane_ParamLimits

0xb9bd,	// (0x0003b394) grid_popup_fast_wide_pane

0xb9d1,	// (0x0003b3a8) scroll_pane_cp19_ParamLimits

0xb9d1,	// (0x0003b3a8) scroll_pane_cp19

0x21ba,	// (0x00031b91) bg_popup_window_pane_cp20

0xb9e5,	// (0x0003b3bc) listscroll_popup_fast_wide_pane

0xb9ed,	// (0x0003b3c4) grid_indicator_nsta_pane

0xb9ff,	// (0x0003b3d6) clock_nsta_pane_g1

0xba08,	// (0x0003b3df) clock_nsta_pane_t1

0xba24,	// (0x0003b3fb) cell_indicator_nsta_pane_ParamLimits

0xba24,	// (0x0003b3fb) cell_indicator_nsta_pane

0xba59,	// (0x0003b430) cell_indicator_nsta_pane_g1

0xba67,	// (0x0003b43e) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0003f455) cell_indicator_nsta_pane_g

0xba7a,	// (0x0003b451) clock_nsta_pane_cp

0xba83,	// (0x0003b45a) indicator_nsta_pane_cp

0xba8d,	// (0x0003b464) nsta_clock_indic_pane_g1

0x2252,	// (0x00031c29) grid_indicator_pane

0x66c9,	// (0x000360a0) scroll_pane_cp29

0x6bdc,	// (0x000365b3) indicator_nsta_pane_cp2_ParamLimits

0x6bdc,	// (0x000365b3) indicator_nsta_pane_cp2

0x2216,	// (0x00031bed) main_apps_wheel_pane

0x9c3d,	// (0x00039614) form_midp_field_text_pane_ParamLimits

0x9d8c,	// (0x00039763) scroll_bar_cp050_ParamLimits

0xbae6,	// (0x0003b4bd) cell_indicator_pane_ParamLimits

0xbae6,	// (0x0003b4bd) cell_indicator_pane

0xbafe,	// (0x0003b4d5) cell_indicator_pane_g1

0xbb08,	// (0x0003b4df) grid_wheel_folder_pane_ParamLimits

0xbb08,	// (0x0003b4df) grid_wheel_folder_pane

0xbb1c,	// (0x0003b4f3) list_wheel_apps_pane_ParamLimits

0xbb1c,	// (0x0003b4f3) list_wheel_apps_pane

0xbb2f,	// (0x0003b506) main_apps_wheel_pane_g1_ParamLimits

0xbb2f,	// (0x0003b506) main_apps_wheel_pane_g1

0xbb4b,	// (0x0003b522) main_apps_wheel_pane_g2_ParamLimits

0xbb4b,	// (0x0003b522) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0003f471) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0003f471) main_apps_wheel_pane_g

0xbb67,	// (0x0003b53e) main_apps_wheel_pane_t1_ParamLimits

0xbb67,	// (0x0003b53e) main_apps_wheel_pane_t1

0xbb90,	// (0x0003b567) list_wheel_apps_pane_g1

0xbb98,	// (0x0003b56f) list_wheel_apps_pane_g2

0xbba0,	// (0x0003b577) list_wheel_apps_pane_g3

0xbba8,	// (0x0003b57f) list_wheel_apps_pane_g4

0xbbb2,	// (0x0003b589) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0003f476) list_wheel_apps_pane_g

0x8f88,	// (0x0003895f) navi_icon_text_pane

0x947a,	// (0x00038e51) aid_fill_nsta

0xbbd3,	// (0x0003b5aa) navi_icon_text_pane_g1

0xbbdf,	// (0x0003b5b6) navi_icon_text_pane_t1

0x8e1e,	// (0x000387f5) list_set_graphic_pane_t1_ParamLimits

0x8e1e,	// (0x000387f5) list_set_graphic_pane_t1

0xa4f9,	// (0x00039ed0) popup_midp_note_alarm_window_t6_ParamLimits

0xa4f9,	// (0x00039ed0) popup_midp_note_alarm_window_t6

0xa50b,	// (0x00039ee2) popup_midp_note_alarm_window_t7_ParamLimits

0xa50b,	// (0x00039ee2) popup_midp_note_alarm_window_t7

0xa51d,	// (0x00039ef4) popup_midp_note_alarm_window_t8_ParamLimits

0xa51d,	// (0x00039ef4) popup_midp_note_alarm_window_t8

0xa52f,	// (0x00039f06) popup_midp_note_alarm_window_t9_ParamLimits

0xa52f,	// (0x00039f06) popup_midp_note_alarm_window_t9

0xa541,	// (0x00039f18) popup_midp_note_alarm_window_t10_ParamLimits

0xa541,	// (0x00039f18) popup_midp_note_alarm_window_t10

0xa553,	// (0x00039f2a) popup_midp_note_alarm_window_t11_ParamLimits

0xa553,	// (0x00039f2a) popup_midp_note_alarm_window_t11

0xa565,	// (0x00039f3c) scroll_pane_cp17_ParamLimits

0xa565,	// (0x00039f3c) scroll_pane_cp17

0x768d,	// (0x00037064) volume_small_pane_cp_g1

0x7a69,	// (0x00037440) volume_small_pane_cp_g2

0x7a72,	// (0x00037449) volume_small_pane_cp_g3

0x7a7b,	// (0x00037452) volume_small_pane_cp_g4

0x7a84,	// (0x0003745b) volume_small_pane_cp_g5

0x7a8d,	// (0x00037464) volume_small_pane_cp_g6

0x7a96,	// (0x0003746d) volume_small_pane_cp_g7

0x7a9f,	// (0x00037476) volume_small_pane_cp_g8

0x7aa8,	// (0x0003747f) volume_small_pane_cp_g9

0x7ab1,	// (0x00037488) volume_small_pane_cp_g10

0x91f5,	// (0x00038bcc) midp_ticker_pane_g1_ParamLimits

0x9201,	// (0x00038bd8) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003f10a) midp_ticker_pane_g_ParamLimits

0x920d,	// (0x00038be4) midp_ticker_pane_t1_ParamLimits

0x9490,	// (0x00038e67) aid_fill_nsta_2

0x9d78,	// (0x0003974f) list_form2_midp_pane

0xaef4,	// (0x0003a8cb) midp_editing_number_pane_ParamLimits

0xaf03,	// (0x0003a8da) midp_ticker_pane_ParamLimits

0xbbf1,	// (0x0003b5c8) form2_midp_field_pane

0xbc15,	// (0x0003b5ec) scroll_pane_cp51

0xbc35,	// (0x0003b60c) form2_midp_button_pane_ParamLimits

0xbc35,	// (0x0003b60c) form2_midp_button_pane

0xbc47,	// (0x0003b61e) form2_midp_content_pane_ParamLimits

0xbc47,	// (0x0003b61e) form2_midp_content_pane

0xbc61,	// (0x0003b638) form2_midp_field_choice_group_pane

0xbc69,	// (0x0003b640) form2_midp_field_pane_g1

0xbc71,	// (0x0003b648) form2_midp_field_pane_g2

0xbc79,	// (0x0003b650) form2_midp_field_pane_g3

0xbc81,	// (0x0003b658) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0003f49b) form2_midp_field_pane_g

0xbc89,	// (0x0003b660) form2_midp_gauge_slider_pane

0xbc91,	// (0x0003b668) form2_midp_gauge_wait_pane

0xbc99,	// (0x0003b670) form2_midp_image_pane_ParamLimits

0xbc99,	// (0x0003b670) form2_midp_image_pane

0xbcb4,	// (0x0003b68b) form2_midp_label_pane_ParamLimits

0xbcb4,	// (0x0003b68b) form2_midp_label_pane

0xbcd3,	// (0x0003b6aa) form2_midp_label_pane_cp_ParamLimits

0xbcd3,	// (0x0003b6aa) form2_midp_label_pane_cp

0xbcf4,	// (0x0003b6cb) form2_midp_string_pane_ParamLimits

0xbcf4,	// (0x0003b6cb) form2_midp_string_pane

0x7aba,	// (0x00037491) form2_midp_text_pane_ParamLimits

0x7aba,	// (0x00037491) form2_midp_text_pane

0xbd06,	// (0x0003b6dd) form2_midp_time_pane

0xbd16,	// (0x0003b6ed) input_focus_pane_cp51_ParamLimits

0xbd16,	// (0x0003b6ed) input_focus_pane_cp51

0xbd2e,	// (0x0003b705) form2_midp_label_pane_t1_ParamLimits

0xbd2e,	// (0x0003b705) form2_midp_label_pane_t1

0x7adb,	// (0x000374b2) form2_mdip_text_pane_t1_ParamLimits

0x7adb,	// (0x000374b2) form2_mdip_text_pane_t1

0x45c6,	// (0x00033f9d) form2_midp_time_pane_t1

0xbd7c,	// (0x0003b753) form2_midp_gauge_slider_pane_t1

0xbd8e,	// (0x0003b765) form2_midp_gauge_slider_pane_t2

0xbda0,	// (0x0003b777) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0003f4a4) form2_midp_gauge_slider_pane_t

0xbdb2,	// (0x0003b789) form2_midp_slider_pane

0xbdbe,	// (0x0003b795) form2_midp_gauge_wait_pane_t1

0xbdcc,	// (0x0003b7a3) form2_midp_wait_pane_ParamLimits

0xbdcc,	// (0x0003b7a3) form2_midp_wait_pane

0xbdf7,	// (0x0003b7ce) list_single_2graphic_pane_cp4_ParamLimits

0xbdf7,	// (0x0003b7ce) list_single_2graphic_pane_cp4

0x9ab9,	// (0x00039490) list_single_midp_graphic_pane_cp_ParamLimits

0x9ab9,	// (0x00039490) list_single_midp_graphic_pane_cp

0x21ba,	// (0x00031b91) list_highlight_pane_cp20

0xbe10,	// (0x0003b7e7) list_single_2graphic_pane_g1_cp4

0xb3a9,	// (0x0003ad80) list_single_2graphic_pane_g2_cp4

0xbe18,	// (0x0003b7ef) list_single_2graphic_pane_t1_cp4

0x2216,	// (0x00031bed) list_highlight_pane_cp21

0xbe27,	// (0x0003b7fe) list_single_midp_graphic_pane_g4_cp

0xbe36,	// (0x0003b80d) list_single_midp_graphic_pane_t1_cp

0xbe4b,	// (0x0003b822) form2_mdip_string_pane_t1_ParamLimits

0xbe4b,	// (0x0003b822) form2_mdip_string_pane_t1

0x21ba,	// (0x00031b91) bg_wml_button_pane_cp2

0x21b0,	// (0x00031b87) form2_midp_image_pane_g1

0x4040,	// (0x00033a17) list_double_large_graphic_pane_g5_ParamLimits

0x4040,	// (0x00033a17) list_double_large_graphic_pane_g5

0x911f,	// (0x00038af6) midp_form_pane_ParamLimits

0x2216,	// (0x00031bed) main_apps_wheel_pane_ParamLimits

0x72d6,	// (0x00036cad) popup_preview_window_ParamLimits

0x72d6,	// (0x00036cad) popup_preview_window

0x74bd,	// (0x00036e94) popup_touch_info_window_ParamLimits

0x74bd,	// (0x00036e94) popup_touch_info_window

0x74df,	// (0x00036eb6) popup_touch_menu_window_ParamLimits

0x74df,	// (0x00036eb6) popup_touch_menu_window

0x21a6,	// (0x00031b7d) bg_popup_sub_pane_cp6

0xbee7,	// (0x0003b8be) list_touch_menu_pane

0xbeef,	// (0x0003b8c6) list_single_touch_menu_pane_ParamLimits

0xbeef,	// (0x0003b8c6) list_single_touch_menu_pane

0xbf07,	// (0x0003b8de) list_single_touch_menu_pane_t1

0x2216,	// (0x00031bed) bg_popup_sub_pane_cp7_ParamLimits

0x2216,	// (0x00031bed) bg_popup_sub_pane_cp7

0xbf15,	// (0x0003b8ec) heading_sub_pane

0xbf1d,	// (0x0003b8f4) list_touch_info_pane_ParamLimits

0xbf1d,	// (0x0003b8f4) list_touch_info_pane

0xbf2c,	// (0x0003b903) list_single_touch_info_pane_ParamLimits

0xbf2c,	// (0x0003b903) list_single_touch_info_pane

0xbf3e,	// (0x0003b915) list_single_touch_info_pane_t1

0xbf4c,	// (0x0003b923) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0003f4b2) list_single_touch_info_pane_t

0x9117,	// (0x00038aee) bg_popup_heading_pane_cp

0xbf5a,	// (0x0003b931) heading_sub_pane_t1

0x99ea,	// (0x000393c1) bg_popup_preview_window_pane_cp_ParamLimits

0x99ea,	// (0x000393c1) bg_popup_preview_window_pane_cp

0xbf15,	// (0x0003b8ec) heading_preview_pane

0xbf1d,	// (0x0003b8f4) list_preview_pane_ParamLimits

0xbf1d,	// (0x0003b8f4) list_preview_pane

0xbf68,	// (0x0003b93f) popup_preview_window_g1

0xbf2c,	// (0x0003b903) list_single_preview_pane_ParamLimits

0xbf2c,	// (0x0003b903) list_single_preview_pane

0xbf70,	// (0x0003b947) list_single_preview_pane_g1

0xbf78,	// (0x0003b94f) list_single_preview_pane_t1

0xbf3e,	// (0x0003b915) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0003f4b7) list_single_preview_pane_t

0xbf86,	// (0x0003b95d) bg_popup_heading_pane_cp2_ParamLimits

0xbf86,	// (0x0003b95d) bg_popup_heading_pane_cp2

0xbf9c,	// (0x0003b973) heading_preview_pane_g1

0xbfa4,	// (0x0003b97b) heading_preview_pane_t1_ParamLimits

0xbfa4,	// (0x0003b97b) heading_preview_pane_t1

0x2269,	// (0x00031c40) soft_indicator_pane_t1_ParamLimits

0x27cb,	// (0x000321a2) scroll_pane_ParamLimits

0x65c5,	// (0x00035f9c) scroll_sc2_left_pane

0x65ce,	// (0x00035fa5) scroll_sc2_right_pane

0x65ed,	// (0x00035fc4) scroll_bg_pane_g1_ParamLimits

0x6602,	// (0x00035fd9) scroll_bg_pane_g2_ParamLimits

0x661a,	// (0x00035ff1) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003f095) scroll_bg_pane_g_ParamLimits

0x65ed,	// (0x00035fc4) scroll_handle_pane_g1_ParamLimits

0x663c,	// (0x00036013) scroll_handle_pane_g2_ParamLimits

0x661a,	// (0x00035ff1) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0003f09c) scroll_handle_pane_g_ParamLimits

0x6f1b,	// (0x000368f2) popup_choice_list_window_ParamLimits

0x6f1b,	// (0x000368f2) popup_choice_list_window

0x98c0,	// (0x00039297) choice_list_pane

0x9942,	// (0x00039319) cell_toolbar_pane_t1

0x996a,	// (0x00039341) toolbar_button_pane_ParamLimits

0xaa2f,	// (0x0003a406) ai_gene_pane_1_t2_ParamLimits

0xaa2f,	// (0x0003a406) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0003f2c4) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0003f2c4) ai_gene_pane_1_t

0xbfc1,	// (0x0003b998) scroll_sc2_left_pane_g1

0xbfc1,	// (0x0003b998) scroll_sc2_right_pane_g1

0x943e,	// (0x00038e15) bg_popup_sub_pane_cp10

0xbfcb,	// (0x0003b9a2) list_choice_list_pane

0xbfe4,	// (0x0003b9bb) list_single_choice_list_pane_ParamLimits

0xbfe4,	// (0x0003b9bb) list_single_choice_list_pane

0xbffc,	// (0x0003b9d3) list_single_choice_list_pane_g1

0x29b9,	// (0x00032390) list_single_choice_list_pane_t1_ParamLimits

0x29b9,	// (0x00032390) list_single_choice_list_pane_t1

0xc004,	// (0x0003b9db) choice_list_pane_g1

0xc00c,	// (0x0003b9e3) choice_list_pane_t1

0x21a6,	// (0x00031b7d) input_focus_pane_cp11

0x2b37,	// (0x0003250e) title_pane_stacon_g2_ParamLimits

0x2b37,	// (0x0003250e) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003f07b) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003f07b) title_pane_stacon_g

0x9117,	// (0x00038aee) cursor_press_pane

0x6fd5,	// (0x000369ac) popup_fep_hwr_window_ParamLimits

0x6fd5,	// (0x000369ac) popup_fep_hwr_window

0x705f,	// (0x00036a36) popup_fep_vkb_window_ParamLimits

0x705f,	// (0x00036a36) popup_fep_vkb_window

0xc01a,	// (0x0003b9f1) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0003f4e0) fep_vkb_side_pane_g_ParamLimits

0x7b38,	// (0x0003750f) fep_hwr_candidate_pane_ParamLimits

0x7b38,	// (0x0003750f) fep_hwr_candidate_pane

0x7b62,	// (0x00037539) fep_hwr_side_pane_ParamLimits

0x7b62,	// (0x00037539) fep_hwr_side_pane

0x7b84,	// (0x0003755b) fep_hwr_top_pane_ParamLimits

0x7b84,	// (0x0003755b) fep_hwr_top_pane

0x7b9c,	// (0x00037573) fep_hwr_write_pane_ParamLimits

0x7b9c,	// (0x00037573) fep_hwr_write_pane

0xfb09,	// (0x0003f4e0) fep_vkb_side_pane_g

0xc022,	// (0x0003b9f9) fep_hwr_top_pane_g1

0xc034,	// (0x0003ba0b) fep_hwr_top_pane_g2

0x7bd6,	// (0x000375ad) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0003f4bc) fep_hwr_top_pane_g

0x7beb,	// (0x000375c2) fep_hwr_top_text_pane

0x6791,	// (0x00036168) fep_hwr_top_text_pane_g1

0xc06a,	// (0x0003ba41) fep_hwr_top_text_pane_t1

0x7cf5,	// (0x000376cc) fep_hwr_candidate_pane_g1

0xc2b5,	// (0x0003bc8c) fep_vkb_keypad_pane_g3_ParamLimits

0xc2b5,	// (0x0003bc8c) fep_vkb_keypad_pane_g3

0xc2e1,	// (0x0003bcb8) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e1,	// (0x0003bcb8) fep_vkb_keypad_pane_g4

0xc358,	// (0x0003bd2f) fep_vkb_bottom_pane_g2_ParamLimits

0xc358,	// (0x0003bd2f) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0003f4e7) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0003f4e7) fep_vkb_bottom_pane_g

0xbfc1,	// (0x0003b998) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0003f4f1) cell_vkb_side_pane_g

0xc3e3,	// (0x0003bdba) cell_vkb_side_pane_t1

0xc3f1,	// (0x0003bdc8) cell_vkb_side_pane_t1_copy1

0xbfc1,	// (0x0003b998) bg_fep_vkb_candidate_pane_g2

0xc535,	// (0x0003bf0c) cell_vkb_candidate_pane_ParamLimits

0xc078,	// (0x0003ba4f) aid_size_cell_vkb_ParamLimits

0xc078,	// (0x0003ba4f) aid_size_cell_vkb

0xc535,	// (0x0003bf0c) cell_vkb_candidate_pane

0x7d1c,	// (0x000376f3) bg_popup_fep_shadow_pane_g1

0xc10a,	// (0x0003bae1) fep_vkb_bottom_pane_ParamLimits

0xc10a,	// (0x0003bae1) fep_vkb_bottom_pane

0xc147,	// (0x0003bb1e) fep_vkb_candidate_pane_ParamLimits

0xc147,	// (0x0003bb1e) fep_vkb_candidate_pane

0xc163,	// (0x0003bb3a) fep_vkb_keypad_pane_ParamLimits

0xc163,	// (0x0003bb3a) fep_vkb_keypad_pane

0xc196,	// (0x0003bb6d) fep_vkb_side_pane_ParamLimits

0xc196,	// (0x0003bb6d) fep_vkb_side_pane

0xc1d2,	// (0x0003bba9) fep_vkb_top_pane_ParamLimits

0xc1d2,	// (0x0003bba9) fep_vkb_top_pane

0xc20e,	// (0x0003bbe5) fep_vkb_top_pane_g1_ParamLimits

0xc20e,	// (0x0003bbe5) fep_vkb_top_pane_g1

0xc21d,	// (0x0003bbf4) fep_vkb_top_pane_g2_ParamLimits

0xc21d,	// (0x0003bbf4) fep_vkb_top_pane_g2

0xc22c,	// (0x0003bc03) fep_vkb_top_pane_g3_ParamLimits

0xc22c,	// (0x0003bc03) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0003f4d7) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0003f4d7) fep_vkb_top_pane_g

0xc24a,	// (0x0003bc21) fep_vkb_top_text_pane_ParamLimits

0xc24a,	// (0x0003bc21) fep_vkb_top_text_pane

0xc25b,	// (0x0003bc32) fep_vkb_side_pane_g1_ParamLimits

0xc25b,	// (0x0003bc32) fep_vkb_side_pane_g1

0xc2a4,	// (0x0003bc7b) grid_vkb_side_pane_ParamLimits

0xc2a4,	// (0x0003bc7b) grid_vkb_side_pane

0x7d24,	// (0x000376fb) bg_popup_fep_shadow_pane_g2

0x7d2d,	// (0x00037704) bg_popup_fep_shadow_pane_g3

0x7d35,	// (0x0003770c) bg_popup_fep_shadow_pane_g4

0x7d3e,	// (0x00037715) bg_popup_fep_shadow_pane_g5

0x7d48,	// (0x0003771f) bg_popup_fep_shadow_pane_g6

0x7d50,	// (0x00037727) bg_popup_fep_shadow_pane_g7

0x28c8,	// (0x0003229f) bg_popup_fep_shadow_pane_g8

0xc303,	// (0x0003bcda) grid_vkb_keypad_number_pane_ParamLimits

0xc303,	// (0x0003bcda) grid_vkb_keypad_number_pane

0xc317,	// (0x0003bcee) grid_vkb_keypad_pane_ParamLimits

0xc317,	// (0x0003bcee) grid_vkb_keypad_pane

0xc33d,	// (0x0003bd14) fep_vkb_bottom_pane_g1_ParamLimits

0xc33d,	// (0x0003bd14) fep_vkb_bottom_pane_g1

0xc366,	// (0x0003bd3d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc366,	// (0x0003bd3d) grid_vkb_keypad_bottom_left_pane

0xc37b,	// (0x0003bd52) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc37b,	// (0x0003bd52) grid_vkb_keypad_bottom_right_pane

0xc390,	// (0x0003bd67) fep_vkb_top_text_pane_g1

0xc3ab,	// (0x0003bd82) fep_vkb_top_text_pane_t1

0xc3c0,	// (0x0003bd97) cell_vkb_side_pane_ParamLimits

0xc3c0,	// (0x0003bd97) cell_vkb_side_pane

0xbfc1,	// (0x0003b998) cell_vkb_side_pane_g1

0xc3ff,	// (0x0003bdd6) cell_vkb_keypad_pane_ParamLimits

0xc3ff,	// (0x0003bdd6) cell_vkb_keypad_pane

0xc48c,	// (0x0003be63) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0003f504) bg_popup_fep_shadow_pane_g

0x7d62,	// (0x00037739) cell_hwr_side_pane_g1

0x7d62,	// (0x00037739) cell_hwr_side_pane_g2

0xc496,	// (0x0003be6d) cell_vkb_keypad_pane_t1

0xc4a4,	// (0x0003be7b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4a4,	// (0x0003be7b) cell_vkb_keypad_bottom_left_pane

0xc4c1,	// (0x0003be98) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c1,	// (0x0003be98) cell_vkb_keypad_bottom_right_pane

0xbfc1,	// (0x0003b998) cell_vkb_keypad_bottom_left_pane_g1

0xbfc1,	// (0x0003b998) cell_vkb_keypad_bottom_right_pane_g1

0xc4fa,	// (0x0003bed1) cell_vkb_keypad_number_pane_ParamLimits

0xc4fa,	// (0x0003bed1) cell_vkb_keypad_number_pane

0xc519,	// (0x0003bef0) cell_vkb_keypad_number_pane_g1

0xc523,	// (0x0003befa) cell_vkb_keypad_number_pane_g2

0xc52c,	// (0x0003bf03) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0003f4f6) cell_vkb_keypad_number_pane_g

0xc496,	// (0x0003be6d) cell_vkb_keypad_number_pane_t1

0xc556,	// (0x0003bf2d) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0003f517) cell_hwr_side_pane_g

0xc56f,	// (0x0003bf46) cell_hwr_side_pane_t1

0x7d6c,	// (0x00037743) cell_hwr_side_pane_t1_copy1

0x7d7a,	// (0x00037751) cell_hwr_candidate_pane_g1

0x7da9,	// (0x00037780) cell_hwr_candidate_pane_t1

0xbfc1,	// (0x0003b998) cell_vkb_candidate_pane_g2

0xc5b3,	// (0x0003bf8a) cell_vkb_candidate_pane_t1

0x7aff,	// (0x000374d6) bg_popup_fep_shadow_pane_ParamLimits

0x7aff,	// (0x000374d6) bg_popup_fep_shadow_pane

0x7bb6,	// (0x0003758d) bg_fep_hwr_top_pane_g4

0xc046,	// (0x0003ba1d) bg_hwr_side_pane_g1_ParamLimits

0xc046,	// (0x0003ba1d) bg_hwr_side_pane_g1

0x7c29,	// (0x00037600) cell_hwr_side_pane_ParamLimits

0x7c29,	// (0x00037600) cell_hwr_side_pane

0x7c66,	// (0x0003763d) fep_hwr_write_pane_g1_ParamLimits

0x7c66,	// (0x0003763d) fep_hwr_write_pane_g1

0x7c73,	// (0x0003764a) fep_hwr_write_pane_g2_ParamLimits

0x7c73,	// (0x0003764a) fep_hwr_write_pane_g2

0x7c80,	// (0x00037657) fep_hwr_write_pane_g3_ParamLimits

0x7c80,	// (0x00037657) fep_hwr_write_pane_g3

0x7c8e,	// (0x00037665) fep_hwr_write_pane_g4_ParamLimits

0x7c8e,	// (0x00037665) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0003f4c3) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0003f4c3) fep_hwr_write_pane_g

0x7bb6,	// (0x0003758d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7bb6,	// (0x0003758d) bg_fep_hwr_candidate_pane_g2

0x7ca3,	// (0x0003767a) cell_hwr_candidate_pane_ParamLimits

0x7ca3,	// (0x0003767a) cell_hwr_candidate_pane

0x7cf5,	// (0x000376cc) fep_hwr_candidate_pane_g1_ParamLimits

0xc0a6,	// (0x0003ba7d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0a6,	// (0x0003ba7d) bg_popup_fep_shadow_pane_cp2

0xc23c,	// (0x0003bc13) fep_vkb_top_pane_g4_ParamLimits

0xc23c,	// (0x0003bc13) fep_vkb_top_pane_g4

0xc282,	// (0x0003bc59) fep_vkb_side_pane_g2_ParamLimits

0xc282,	// (0x0003bc59) fep_vkb_side_pane_g2

0x6028,	// (0x000359ff) list_setting_pane_t4_ParamLimits

0x6028,	// (0x000359ff) list_setting_pane_t4

0x60bc,	// (0x00035a93) list_setting_number_pane_t5_ParamLimits

0x60bc,	// (0x00035a93) list_setting_number_pane_t5

0x67f7,	// (0x000361ce) list_double_heading_pane_cp2_ParamLimits

0x67f7,	// (0x000361ce) list_double_heading_pane_cp2

0xc5c1,	// (0x0003bf98) list_double_heading_pane_g1_cp2_ParamLimits

0xc5c1,	// (0x0003bf98) list_double_heading_pane_g1_cp2

0xc5cd,	// (0x0003bfa4) list_double_heading_pane_g2_cp2_ParamLimits

0xc5cd,	// (0x0003bfa4) list_double_heading_pane_g2_cp2

0xc5e1,	// (0x0003bfb8) list_double_heading_pane_t1_cp2_ParamLimits

0xc5e1,	// (0x0003bfb8) list_double_heading_pane_t1_cp2

0xc5f7,	// (0x0003bfce) list_double_heading_pane_t2_cp2_ParamLimits

0xc5f7,	// (0x0003bfce) list_double_heading_pane_t2_cp2

0x219e,	// (0x00031b75) aid_value_unit2

0x57bc,	// (0x00035193) popup_preview_fixed_window

0x2349,	// (0x00031d20) bg_popup_preview_window_pane_cp02

0xc609,	// (0x0003bfe0) list_preview_fixed_pane

0xc64f,	// (0x0003c026) list_empty_pane_fp_ParamLimits

0xc64f,	// (0x0003c026) list_empty_pane_fp

0xc64f,	// (0x0003c026) list_single_cale_day_pane_fp_ParamLimits

0xc64f,	// (0x0003c026) list_single_cale_day_pane_fp

0xc64f,	// (0x0003c026) list_single_graphic_heading_pane_fp_ParamLimits

0xc64f,	// (0x0003c026) list_single_graphic_heading_pane_fp

0xc64f,	// (0x0003c026) list_single_graphic_pane_fp_ParamLimits

0xc64f,	// (0x0003c026) list_single_graphic_pane_fp

0xc64f,	// (0x0003c026) list_single_heading_pane_fp_ParamLimits

0xc64f,	// (0x0003c026) list_single_heading_pane_fp

0xc64f,	// (0x0003c026) list_single_pane_fp_ParamLimits

0xc64f,	// (0x0003c026) list_single_pane_fp

0xc668,	// (0x0003c03f) list_single_pane_fp_g1_ParamLimits

0xc668,	// (0x0003c03f) list_single_pane_fp_g1

0x4522,	// (0x00033ef9) list_single_pane_fp_g2_ParamLimits

0x4522,	// (0x00033ef9) list_single_pane_fp_g2

0x45d9,	// (0x00033fb0) list_single_pane_fp_g3_ParamLimits

0x45d9,	// (0x00033fb0) list_single_pane_fp_g3

0xc674,	// (0x0003c04b) list_single_pane_fp_g4_ParamLimits

0xc674,	// (0x0003c04b) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0003f52a) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0003f52a) list_single_pane_fp_g

0x45ed,	// (0x00033fc4) list_single_pane_fp_t1_ParamLimits

0x45ed,	// (0x00033fc4) list_single_pane_fp_t1

0x4604,	// (0x00033fdb) list_single_graphic_pane_fp_g1_ParamLimits

0x4604,	// (0x00033fdb) list_single_graphic_pane_fp_g1

0xc668,	// (0x0003c03f) list_single_graphic_pane_fp_g2_ParamLimits

0xc668,	// (0x0003c03f) list_single_graphic_pane_fp_g2

0x4522,	// (0x00033ef9) list_single_graphic_pane_fp_g3_ParamLimits

0x4522,	// (0x00033ef9) list_single_graphic_pane_fp_g3

0x45d9,	// (0x00033fb0) list_single_graphic_pane_fp_g4_ParamLimits

0x45d9,	// (0x00033fb0) list_single_graphic_pane_fp_g4

0xc674,	// (0x0003c04b) list_single_graphic_pane_fp_g5_ParamLimits

0xc674,	// (0x0003c04b) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f533) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f533) list_single_graphic_pane_fp_g

0x4610,	// (0x00033fe7) list_single_graphic_pane_fp_t1_ParamLimits

0x4610,	// (0x00033fe7) list_single_graphic_pane_fp_t1

0x4604,	// (0x00033fdb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4604,	// (0x00033fdb) list_single_graphic_heading_pane_fp_g1

0xc668,	// (0x0003c03f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc668,	// (0x0003c03f) list_single_graphic_heading_pane_fp_g2

0x4522,	// (0x00033ef9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4522,	// (0x00033ef9) list_single_graphic_heading_pane_fp_g3

0x45d9,	// (0x00033fb0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x45d9,	// (0x00033fb0) list_single_graphic_heading_pane_fp_g4

0xc674,	// (0x0003c04b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc674,	// (0x0003c04b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f533) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f533) list_single_graphic_heading_pane_fp_g

0x4626,	// (0x00033ffd) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4626,	// (0x00033ffd) list_single_graphic_heading_pane_fp_t1

0x463c,	// (0x00034013) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x463c,	// (0x00034013) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0003f53e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0003f53e) list_single_graphic_heading_pane_fp_t

0x464e,	// (0x00034025) list_single_cale_day_pane_fp_g1_ParamLimits

0x464e,	// (0x00034025) list_single_cale_day_pane_fp_g1

0xc680,	// (0x0003c057) list_single_cale_day_pane_fp_g2_ParamLimits

0xc680,	// (0x0003c057) list_single_cale_day_pane_fp_g2

0x4686,	// (0x0003405d) list_single_cale_day_pane_fp_g3_ParamLimits

0x4686,	// (0x0003405d) list_single_cale_day_pane_fp_g3

0x46ae,	// (0x00034085) list_single_cale_day_pane_fp_g4_ParamLimits

0x46ae,	// (0x00034085) list_single_cale_day_pane_fp_g4

0x46d2,	// (0x000340a9) list_single_cale_day_pane_fp_g5_ParamLimits

0x46d2,	// (0x000340a9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0003f543) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0003f543) list_single_cale_day_pane_fp_g

0x46f6,	// (0x000340cd) list_single_cale_day_pane_fp_t1_ParamLimits

0x46f6,	// (0x000340cd) list_single_cale_day_pane_fp_t1

0x471c,	// (0x000340f3) list_single_cale_day_pane_fp_t2_ParamLimits

0x471c,	// (0x000340f3) list_single_cale_day_pane_fp_t2

0x4735,	// (0x0003410c) list_single_cale_day_pane_fp_t3_ParamLimits

0x4735,	// (0x0003410c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0003f54e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0003f54e) list_single_cale_day_pane_fp_t

0xc668,	// (0x0003c03f) list_empty_pane_fp_g1_ParamLimits

0xc668,	// (0x0003c03f) list_empty_pane_fp_g1

0x474e,	// (0x00034125) list_empty_pane_fp_t1

0x475c,	// (0x00034133) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0003f555) list_empty_pane_fp_t

0xc668,	// (0x0003c03f) list_single_heading_pane_fp_g1_ParamLimits

0xc668,	// (0x0003c03f) list_single_heading_pane_fp_g1

0x4522,	// (0x00033ef9) list_single_heading_pane_fp_g2_ParamLimits

0x4522,	// (0x00033ef9) list_single_heading_pane_fp_g2

0x45d9,	// (0x00033fb0) list_single_heading_pane_fp_g3_ParamLimits

0x45d9,	// (0x00033fb0) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0003f55a) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0003f55a) list_single_heading_pane_fp_g

0x476a,	// (0x00034141) list_single_heading_pane_fp_t1_ParamLimits

0x476a,	// (0x00034141) list_single_heading_pane_fp_t1

0x477c,	// (0x00034153) list_single_heading_pane_fp_t2_ParamLimits

0x477c,	// (0x00034153) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0003f561) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0003f561) list_single_heading_pane_fp_t

0x29ce,	// (0x000323a5) aid_size_cell_fast

0x232c,	// (0x00031d03) soft_indicator_pane_cp1_t1

0x2a0b,	// (0x000323e2) cell_app_pane_cp2_ParamLimits

0x2a0b,	// (0x000323e2) cell_app_pane_cp2

0x7b21,	// (0x000374f8) fep_hwr_candidate_drop_down_list_pane

0x7d0f,	// (0x000376e6) fep_hwr_candidate_pane_g3_ParamLimits

0x7d0f,	// (0x000376e6) fep_hwr_candidate_pane_g3

0x3757,	// (0x0003312e) fep_hwr_candidate_pane_g4_ParamLimits

0x3757,	// (0x0003312e) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0003f4d0) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0003f4d0) fep_hwr_candidate_pane_g

0xc136,	// (0x0003bb0d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc136,	// (0x0003bb0d) fep_vkb_candidate_drop_down_list_pane

0xc55e,	// (0x0003bf35) fep_vkb_candidate_pane_g3

0xc566,	// (0x0003bf3d) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003f4fd) fep_vkb_candidate_pane_g

0x7d7a,	// (0x00037751) cell_hwr_candidate_pane_g1_ParamLimits

0x7d88,	// (0x0003775f) cell_hwr_candidate_pane_g3_ParamLimits

0x7d88,	// (0x0003775f) cell_hwr_candidate_pane_g3

0xde86,	// (0x0003d85d) cell_hwr_candidate_pane_g4_ParamLimits

0xde86,	// (0x0003d85d) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0003f51c) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0003f51c) cell_hwr_candidate_pane_g

0xc57d,	// (0x0003bf54) cell_vkb_candidate_pane_g3_ParamLimits

0xc57d,	// (0x0003bf54) cell_vkb_candidate_pane_g3

0xc598,	// (0x0003bf6f) cell_vkb_candidate_pane_g4_ParamLimits

0xc598,	// (0x0003bf6f) cell_vkb_candidate_pane_g4

0xc68c,	// (0x0003c063) cell_app_pane_cp2_g1_ParamLimits

0xc68c,	// (0x0003c063) cell_app_pane_cp2_g1

0xc6aa,	// (0x0003c081) cell_app_pane_cp2_g2_ParamLimits

0xc6aa,	// (0x0003c081) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0003f566) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0003f566) cell_app_pane_cp2_g

0xc6b6,	// (0x0003c08d) cell_app_pane_cp2_t1_ParamLimits

0xc6b6,	// (0x0003c08d) cell_app_pane_cp2_t1

0x2858,	// (0x0003222f) grid_highlight_pane_cp1_ParamLimits

0x2858,	// (0x0003222f) grid_highlight_pane_cp1

0x7dc7,	// (0x0003779e) cell_hwr_candidate_pane_cp1_ParamLimits

0x7dc7,	// (0x0003779e) cell_hwr_candidate_pane_cp1

0x7d7a,	// (0x00037751) fep_hwr_candidate_drop_down_list_pane_g1

0x7deb,	// (0x000377c2) fep_hwr_candidate_drop_down_list_pane_g2

0x7df8,	// (0x000377cf) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0003f56b) fep_hwr_candidate_drop_down_list_pane_g

0x7e05,	// (0x000377dc) fep_hwr_candidate_drop_down_list_scroll_pane

0x7e0e,	// (0x000377e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e0e,	// (0x000377e5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7e1b,	// (0x000377f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e1b,	// (0x000377f2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7e28,	// (0x000377ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e28,	// (0x000377ff) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7e35,	// (0x0003780c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e35,	// (0x0003780c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7e50,	// (0x00037827) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e50,	// (0x00037827) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7e6b,	// (0x00037842) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e6b,	// (0x00037842) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7e86,	// (0x0003785d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e86,	// (0x0003785d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7ea1,	// (0x00037878) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ea1,	// (0x00037878) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0003f572) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0003f572) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6c8,	// (0x0003c09f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6c8,	// (0x0003c09f) cell_vkb_candidate_pane_cp1

0xc23c,	// (0x0003bc13) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc23c,	// (0x0003bc13) fep_vkb_candidate_drop_down_list_pane_g1

0xc6ee,	// (0x0003c0c5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc6ee,	// (0x0003c0c5) fep_vkb_candidate_drop_down_list_pane_g2

0xc6fb,	// (0x0003c0d2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc6fb,	// (0x0003c0d2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0003f583) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0003f583) fep_vkb_candidate_drop_down_list_pane_g

0xc708,	// (0x0003c0df) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc708,	// (0x0003c0df) fep_vkb_candidate_drop_down_list_scroll_pane

0xc715,	// (0x0003c0ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc715,	// (0x0003c0ec) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc722,	// (0x0003c0f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc722,	// (0x0003c0f9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc72e,	// (0x0003c105) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc72e,	// (0x0003c105) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc73a,	// (0x0003c111) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc73a,	// (0x0003c111) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc75b,	// (0x0003c132) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc75b,	// (0x0003c132) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc77c,	// (0x0003c153) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc77c,	// (0x0003c153) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc79d,	// (0x0003c174) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc79d,	// (0x0003c174) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7be,	// (0x0003c195) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7be,	// (0x0003c195) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0003f58a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0003f58a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x58dc,	// (0x000352b3) title_pane_g1_ParamLimits

0x58e9,	// (0x000352c0) title_pane_g2_ParamLimits

0xf529,	// (0x0003ef00) title_pane_g_ParamLimits

0x6781,	// (0x00036158) aid_call2_pane

0x6789,	// (0x00036160) aid_call_pane

0x6791,	// (0x00036168) popup_clock_analogue_window_g1

0x6791,	// (0x00036168) popup_clock_analogue_window_g2

0x6799,	// (0x00036170) popup_clock_analogue_window_g3

0x67a2,	// (0x00036179) popup_clock_analogue_window_g4

0x21b0,	// (0x00031b87) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003f0aa) popup_clock_analogue_window_g

0x67aa,	// (0x00036181) popup_clock_analogue_window_t1

0x6857,	// (0x0003622e) clock_digital_number_pane_ParamLimits

0x6857,	// (0x0003622e) clock_digital_number_pane

0x6863,	// (0x0003623a) clock_digital_number_pane_cp02_ParamLimits

0x6863,	// (0x0003623a) clock_digital_number_pane_cp02

0x686f,	// (0x00036246) clock_digital_number_pane_cp03_ParamLimits

0x686f,	// (0x00036246) clock_digital_number_pane_cp03

0x687b,	// (0x00036252) clock_digital_number_pane_cp04_ParamLimits

0x687b,	// (0x00036252) clock_digital_number_pane_cp04

0x6887,	// (0x0003625e) clock_digital_separator_pane_ParamLimits

0x6887,	// (0x0003625e) clock_digital_separator_pane

0x6893,	// (0x0003626a) popup_clock_digital_window_t1_ParamLimits

0x6893,	// (0x0003626a) popup_clock_digital_window_t1

0x21b0,	// (0x00031b87) clock_digital_number_pane_g1

0x21b0,	// (0x00031b87) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003f0b5) clock_digital_number_pane_g

0x21b0,	// (0x00031b87) clock_digital_separator_pane_g1

0x21b0,	// (0x00031b87) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003f0b5) clock_digital_separator_pane_g

0x947a,	// (0x00038e51) aid_fill_nsta_ParamLimits

0x95c6,	// (0x00038f9d) indicator_nsta_pane_ParamLimits

0x9757,	// (0x0003912e) popup_clock_analogue_window

0x9757,	// (0x0003912e) popup_clock_digital_window

0xb9ed,	// (0x0003b3c4) grid_indicator_nsta_pane_ParamLimits

0xba16,	// (0x0003b3ed) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0003f450) clock_nsta_pane_t

0x656a,	// (0x00035f41) aid_size_max_handle

0x6574,	// (0x00035f4b) aid_size_min_handle

0x9117,	// (0x00038aee) editor_scroll_pane

0xc7d9,	// (0x0003c1b0) ex_editor_pane

0x2994,	// (0x0003236b) scroll_pane_cp13

0x27f7,	// (0x000321ce) scroll_pane_cp14

0x67df,	// (0x000361b6) scroll_pane_cp36

0x680d,	// (0x000361e4) list_single_graphic_hl_pane_cp2_ParamLimits

0x680d,	// (0x000361e4) list_single_graphic_hl_pane_cp2

0xaf72,	// (0x0003a949) list_single_graphic_hl_pane_ParamLimits

0xaf72,	// (0x0003a949) list_single_graphic_hl_pane

0x4792,	// (0x00034169) aid_size_min_hl_cp1

0xc7e1,	// (0x0003c1b8) list_highlight_pane_cp34_ParamLimits

0xc7e1,	// (0x0003c1b8) list_highlight_pane_cp34

0xc7f2,	// (0x0003c1c9) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f2,	// (0x0003c1c9) list_single_graphic_hl_pane_g1

0x7ebc,	// (0x00037893) list_single_graphic_hl_pane_g2_ParamLimits

0x7ebc,	// (0x00037893) list_single_graphic_hl_pane_g2

0x7ebc,	// (0x00037893) list_single_graphic_hl_pane_g3_ParamLimits

0x7ebc,	// (0x00037893) list_single_graphic_hl_pane_g3

0x41bc,	// (0x00033b93) list_single_graphic_hl_pane_g4_ParamLimits

0x41bc,	// (0x00033b93) list_single_graphic_hl_pane_g4

0x7ec8,	// (0x0003789f) list_single_graphic_hl_pane_g5_ParamLimits

0x7ec8,	// (0x0003789f) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0003f59b) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0003f59b) list_single_graphic_hl_pane_g

0x7edc,	// (0x000378b3) list_single_graphic_hl_pane_t1_ParamLimits

0x7edc,	// (0x000378b3) list_single_graphic_hl_pane_t1

0xc7ff,	// (0x0003c1d6) aid_size_min_hl_cp2

0xc808,	// (0x0003c1df) list_highlight_pane_cp34_cp2_ParamLimits

0xc808,	// (0x0003c1df) list_highlight_pane_cp34_cp2

0xc7f2,	// (0x0003c1c9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f2,	// (0x0003c1c9) list_single_graphic_hl_pane_g1_cp2

0xc815,	// (0x0003c1ec) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc815,	// (0x0003c1ec) list_single_graphic_hl_pane_g2_cp2

0xc821,	// (0x0003c1f8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc821,	// (0x0003c1f8) list_single_graphic_hl_pane_g3_cp2

0xc82f,	// (0x0003c206) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc82f,	// (0x0003c206) list_single_graphic_hl_pane_g4_cp2

0xc83b,	// (0x0003c212) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc83b,	// (0x0003c212) list_single_graphic_hl_pane_g5_cp2

0x6de3,	// (0x000367ba) control_pane_g4_ParamLimits

0x6de3,	// (0x000367ba) control_pane_g4

0x943e,	// (0x00038e15) bg_popup_sub_pane_cp10_ParamLimits

0xbfcb,	// (0x0003b9a2) list_choice_list_pane_ParamLimits

0xbfda,	// (0x0003b9b1) scroll_pane_cp23

0x2349,	// (0x00031d20) bg_popup_preview_window_pane_cp02_ParamLimits

0xc609,	// (0x0003bfe0) list_preview_fixed_pane_ParamLimits

0xc61f,	// (0x0003bff6) list_preview_fixed_pane_cp_ParamLimits

0xc61f,	// (0x0003bff6) list_preview_fixed_pane_cp

0xc62b,	// (0x0003c002) popup_preview_fixed_window_g1_ParamLimits

0xc62b,	// (0x0003c002) popup_preview_fixed_window_g1

0xc637,	// (0x0003c00e) popup_preview_fixed_window_g2_ParamLimits

0xc637,	// (0x0003c00e) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0003f523) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0003f523) popup_preview_fixed_window_g

0x6401,	// (0x00035dd8) aid_navi_side_left_pane_ParamLimits

0x6416,	// (0x00035ded) aid_navi_side_right_pane_ParamLimits

0x642e,	// (0x00035e05) navi_icon_pane_stacon_ParamLimits

0x6442,	// (0x00035e19) navi_navi_pane_stacon_ParamLimits

0x642e,	// (0x00035e05) navi_text_pane_stacon_ParamLimits

0x5673,	// (0x0003504a) main_text_info_pane

0xc865,	// (0x0003c23c) listscroll_text_info_pane

0xc86d,	// (0x0003c244) list_text_info_pane_ParamLimits

0xc86d,	// (0x0003c244) list_text_info_pane

0xc87c,	// (0x0003c253) scroll_pane_cp24_ParamLimits

0xc87c,	// (0x0003c253) scroll_pane_cp24

0xc89a,	// (0x0003c271) list_text_info_pane_t1_ParamLimits

0xc89a,	// (0x0003c271) list_text_info_pane_t1

0x6f3d,	// (0x00036914) popup_fast_swap2_window_ParamLimits

0x6f3d,	// (0x00036914) popup_fast_swap2_window

0xc8bf,	// (0x0003c296) aid_size_cell_fast2

0x21a6,	// (0x00031b7d) bg_popup_window_pane_cp17

0xc8c9,	// (0x0003c2a0) heading_pane_cp2

0xc8d1,	// (0x0003c2a8) listscroll_fast2_pane

0xc8d9,	// (0x0003c2b0) grid_fast2_pane

0xc8e3,	// (0x0003c2ba) listscroll_fast2_pane_g1

0xc8ed,	// (0x0003c2c4) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0003f5a6) listscroll_fast2_pane_g

0x2994,	// (0x0003236b) scroll_pane_cp26

0xc8f7,	// (0x0003c2ce) cell_fast2_pane_ParamLimits

0xc8f7,	// (0x0003c2ce) cell_fast2_pane

0xc90e,	// (0x0003c2e5) cell_fast2_pane_g1

0xc917,	// (0x0003c2ee) cell_fast2_pane_g2

0xc920,	// (0x0003c2f7) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0003f5ab) cell_fast2_pane_g

0x25be,	// (0x00031f95) grid_highlight_pane_cp9

0x6eff,	// (0x000368d6) main_eswt_pane_ParamLimits

0x6eff,	// (0x000368d6) main_eswt_pane

0xc891,	// (0x0003c268) list_single_text_info_pane

0xc928,	// (0x0003c2ff) eswt_ctrl_button_pane

0xc928,	// (0x0003c2ff) eswt_ctrl_canvas_pane

0xc930,	// (0x0003c307) eswt_ctrl_combo_pane

0xc928,	// (0x0003c2ff) eswt_ctrl_default_pane

0xc928,	// (0x0003c2ff) eswt_ctrl_label_pane

0xc938,	// (0x0003c30f) eswt_ctrl_wait_pane

0xc940,	// (0x0003c317) eswt_shell_pane

0x21a6,	// (0x00031b7d) listscroll_eswt_app_pane

0xc960,	// (0x0003c337) popup_eswt_tasktip_window_ParamLimits

0xc960,	// (0x0003c337) popup_eswt_tasktip_window

0x99ea,	// (0x000393c1) bg_popup_window_pane_cp18

0xc979,	// (0x0003c350) eswt_control_pane_g1_ParamLimits

0xc979,	// (0x0003c350) eswt_control_pane_g1

0xc986,	// (0x0003c35d) eswt_control_pane_g2_ParamLimits

0xc986,	// (0x0003c35d) eswt_control_pane_g2

0xc993,	// (0x0003c36a) eswt_control_pane_g3_ParamLimits

0xc993,	// (0x0003c36a) eswt_control_pane_g3

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_ParamLimits

0xc9a0,	// (0x0003c377) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0003f5b2) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0003f5b2) eswt_control_pane_g

0x2858,	// (0x0003222f) bg_button_pane_ParamLimits

0x2858,	// (0x0003222f) bg_button_pane

0x25d3,	// (0x00031faa) common_borders_pane_copy2_ParamLimits

0x25d3,	// (0x00031faa) common_borders_pane_copy2

0xc9ad,	// (0x0003c384) control_button_pane_g1_ParamLimits

0xc9ad,	// (0x0003c384) control_button_pane_g1

0xc9b9,	// (0x0003c390) control_button_pane_g2_ParamLimits

0xc9b9,	// (0x0003c390) control_button_pane_g2

0xc9c5,	// (0x0003c39c) control_button_pane_g3_ParamLimits

0xc9c5,	// (0x0003c39c) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0003f5bb) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0003f5bb) control_button_pane_g

0xc9d9,	// (0x0003c3b0) control_button_pane_t1

0xc9e7,	// (0x0003c3be) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0003f5c2) control_button_pane_t

0x9976,	// (0x0003934d) bg_button_pane_g1

0x9986,	// (0x0003935d) bg_button_pane_g2

0x997e,	// (0x00039355) bg_button_pane_g3

0x9996,	// (0x0003936d) bg_button_pane_g4

0x998e,	// (0x00039365) bg_button_pane_g5

0x999e,	// (0x00039375) bg_button_pane_g6

0x99a6,	// (0x0003937d) bg_button_pane_g7

0x99b6,	// (0x0003938d) bg_button_pane_g8

0x99ae,	// (0x00039385) bg_button_pane_g9

0x0008,

0xf841,	// (0x0003f218) bg_button_pane_g

0xbf86,	// (0x0003b95d) common_borders_pane_ParamLimits

0xbf86,	// (0x0003b95d) common_borders_pane

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy1_ParamLimits

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy1

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy1_ParamLimits

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy1

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy1_ParamLimits

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy1

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy1_ParamLimits

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy1

0xbfc1,	// (0x0003b998) bg_eswt_ctrl_canvas_pane_g1

0xbf86,	// (0x0003b95d) common_borders_pane_cp2_ParamLimits

0xbf86,	// (0x0003b95d) common_borders_pane_cp2

0xbf86,	// (0x0003b95d) common_borders_pane_cp3_ParamLimits

0xbf86,	// (0x0003b95d) common_borders_pane_cp3

0xc9f5,	// (0x0003c3cc) separator_horizontal_pane

0xc9fd,	// (0x0003c3d4) separator_vertical_pane

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy2_ParamLimits

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy2

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy2_ParamLimits

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy2

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy2_ParamLimits

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy2

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy2_ParamLimits

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy2

0x21a6,	// (0x00031b7d) common_borders_pane_cp4

0xca06,	// (0x0003c3dd) separator_horizontal_pane_g1

0xca0f,	// (0x0003c3e6) separator_horizontal_pane_g2

0xca18,	// (0x0003c3ef) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0003f5c7) separator_horizontal_pane_g

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy3_ParamLimits

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy3

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy3_ParamLimits

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy3

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy3_ParamLimits

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy3

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy3_ParamLimits

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy3

0x21a6,	// (0x00031b7d) common_borders_pane_cp5

0xca21,	// (0x0003c3f8) separator_vertical_pane_g1

0xca2a,	// (0x0003c401) separator_vertical_pane_g2

0xca33,	// (0x0003c40a) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0003f5ce) separator_vertical_pane_g

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy4_ParamLimits

0xc979,	// (0x0003c350) eswt_control_pane_g1_copy4

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy4_ParamLimits

0xc986,	// (0x0003c35d) eswt_control_pane_g2_copy4

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy4_ParamLimits

0xc993,	// (0x0003c36a) eswt_control_pane_g3_copy4

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy4_ParamLimits

0xc9a0,	// (0x0003c377) eswt_control_pane_g4_copy4

0xca3c,	// (0x0003c413) eswt_ctrl_combo_button_pane

0xca44,	// (0x0003c41b) eswt_ctrl_input_pane

0xca4c,	// (0x0003c423) popup_choice_list_window_cp70

0xca54,	// (0x0003c42b) eswt_ctrl_input_pane_t1

0x21a6,	// (0x00031b7d) input_focus_pane_cp70

0xbf86,	// (0x0003b95d) bg_button_pane_cp70_ParamLimits

0xbf86,	// (0x0003b95d) bg_button_pane_cp70

0xca62,	// (0x0003c439) eswt_ctrl_combo_button_pane_g1

0xca6a,	// (0x0003c441) wait_bar_pane_cp70

0x99ea,	// (0x000393c1) bg_popup_window_pane_cp70_ParamLimits

0x99ea,	// (0x000393c1) bg_popup_window_pane_cp70

0xca72,	// (0x0003c449) popup_eswt_tasktip_window_t1

0xca88,	// (0x0003c45f) wait_bar_pane_cp71_ParamLimits

0xca88,	// (0x0003c45f) wait_bar_pane_cp71

0xca94,	// (0x0003c46b) grid_eswt_app_pane

0x65c5,	// (0x00035f9c) scroll_pane_cp70

0xca9d,	// (0x0003c474) cell_eswt_app_pane_ParamLimits

0xca9d,	// (0x0003c474) cell_eswt_app_pane

0xcacf,	// (0x0003c4a6) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x0003c4a6) cell_eswt_app_pane_g1

0xcafe,	// (0x0003c4d5) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x0003c4d5) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0003f5d5) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0003f5d5) cell_eswt_app_pane_g

0xcb27,	// (0x0003c4fe) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x0003c4fe) cell_eswt_app_pane_t1

0xcb59,	// (0x0003c530) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x0003c530) grid_highlight_pane_cp70

0x8fdd,	// (0x000389b4) set_content_pane_g1

0x93c5,	// (0x00038d9c) status_small_volume_pane

0x7ef2,	// (0x000378c9) status_small_volume_pane_g1

0x7efa,	// (0x000378d1) volume_small2_pane

0x7f03,	// (0x000378da) volume_small2_pane_g1

0x7f0c,	// (0x000378e3) volume_small2_pane_g2

0x7f15,	// (0x000378ec) volume_small2_pane_g3

0x7f1e,	// (0x000378f5) volume_small2_pane_g4

0x7f27,	// (0x000378fe) volume_small2_pane_g5

0x7f30,	// (0x00037907) volume_small2_pane_g6

0x7f39,	// (0x00037910) volume_small2_pane_g7

0x7f42,	// (0x00037919) volume_small2_pane_g8

0x7f4b,	// (0x00037922) volume_small2_pane_g9

0x7f54,	// (0x0003792b) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0003f5da) volume_small2_pane_g

0xc390,	// (0x0003bd67) fep_vkb_top_text_pane_g1_ParamLimits

0xc3ab,	// (0x0003bd82) fep_vkb_top_text_pane_t1_ParamLimits

0xc643,	// (0x0003c01a) popup_preview_fixed_window_g3_ParamLimits

0xc643,	// (0x0003c01a) popup_preview_fixed_window_g3

0x7450,	// (0x00036e27) popup_toolbar_trans_pane

0xad42,	// (0x0003a719) aid_height_set_list_ParamLimits

0xad53,	// (0x0003a72a) aid_size_parent_ParamLimits

0x943e,	// (0x00038e15) list_highlight_pane_cp2_ParamLimits

0x8fdd,	// (0x000389b4) set_content_pane_g1_ParamLimits

0x798b,	// (0x00037362) list_single_image_pane_ParamLimits

0x798b,	// (0x00037362) list_single_image_pane

0xcb65,	// (0x0003c53c) aid_size_cell_image_ParamLimits

0xcb65,	// (0x0003c53c) aid_size_cell_image

0xcb72,	// (0x0003c549) grid_single_image_pane_ParamLimits

0xcb72,	// (0x0003c549) grid_single_image_pane

0x2866,	// (0x0003223d) list_single_image_pane_g1_ParamLimits

0x2866,	// (0x0003223d) list_single_image_pane_g1

0x2872,	// (0x00032249) list_single_image_pane_g2_ParamLimits

0x2872,	// (0x00032249) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0003f5ef) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0003f5ef) list_single_image_pane_g

0xcb80,	// (0x0003c557) list_single_image_pane_t1_ParamLimits

0xcb80,	// (0x0003c557) list_single_image_pane_t1

0xcb96,	// (0x0003c56d) cell_image_list_pane_ParamLimits

0xcb96,	// (0x0003c56d) cell_image_list_pane

0xcbae,	// (0x0003c585) cell_image_list_pane_g1

0xcbb7,	// (0x0003c58e) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0003f5f4) cell_image_list_pane_g

0xcbc0,	// (0x0003c597) aid_size_cell_tb_trans_pane

0x2858,	// (0x0003222f) bg_tb_trans_pane

0xcbd2,	// (0x0003c5a9) grid_tb_trans_pane

0x9976,	// (0x0003934d) bg_tb_trans_pane_g1

0x9986,	// (0x0003935d) bg_tb_trans_pane_g2

0x997e,	// (0x00039355) bg_tb_trans_pane_g3

0x9996,	// (0x0003936d) bg_tb_trans_pane_g4

0x998e,	// (0x00039365) bg_tb_trans_pane_g5

0x99b6,	// (0x0003938d) bg_tb_trans_pane_g6

0x99ae,	// (0x00039385) bg_tb_trans_pane_g7

0x999e,	// (0x00039375) bg_tb_trans_pane_g8

0x99a6,	// (0x0003937d) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0003f5f9) bg_tb_trans_pane_g

0xcbe6,	// (0x0003c5bd) cell_toolbar_trans_pane_ParamLimits

0xcbe6,	// (0x0003c5bd) cell_toolbar_trans_pane

0xbfc1,	// (0x0003b998) cell_toolbar_trans_pane_g1

0xbbf9,	// (0x0003b5d0) list_form2_midp_pane_t1

0xbc07,	// (0x0003b5de) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0003f496) list_form2_midp_pane_t

0xbc15,	// (0x0003b5ec) scroll_pane_cp51_ParamLimits

0xbddc,	// (0x0003b7b3) form2_midp_wait_pane_g1

0xbde5,	// (0x0003b7bc) form2_midp_wait_pane_g2

0xbdee,	// (0x0003b7c5) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0003f4ab) form2_midp_wait_pane_g

0x2216,	// (0x00031bed) list_highlight_pane_cp21_ParamLimits

0xbe27,	// (0x0003b7fe) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe36,	// (0x0003b80d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7941,	// (0x00037318) list_single_2graphic_im_pane_ParamLimits

0x7941,	// (0x00037318) list_single_2graphic_im_pane

0xcc0c,	// (0x0003c5e3) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0c,	// (0x0003c5e3) list_single_2graphic_im_pane_g1

0xcc1d,	// (0x0003c5f4) list_single_2graphic_im_pane_g2_ParamLimits

0xcc1d,	// (0x0003c5f4) list_single_2graphic_im_pane_g2

0xcc29,	// (0x0003c600) list_single_2graphic_im_pane_g3_ParamLimits

0xcc29,	// (0x0003c600) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0003f60c) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0003f60c) list_single_2graphic_im_pane_g

0xcc49,	// (0x0003c620) list_single_2graphic_im_pane_t1_ParamLimits

0xcc49,	// (0x0003c620) list_single_2graphic_im_pane_t1

0xc64f,	// (0x0003c026) list_single_graphic_2heading_pane_fp_ParamLimits

0xc64f,	// (0x0003c026) list_single_graphic_2heading_pane_fp

0x4604,	// (0x00033fdb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4604,	// (0x00033fdb) list_single_graphic_2heading_pane_fp_g1

0xc668,	// (0x0003c03f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc668,	// (0x0003c03f) list_single_graphic_2heading_pane_fp_g2

0x4522,	// (0x00033ef9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4522,	// (0x00033ef9) list_single_graphic_2heading_pane_fp_g3

0x45d9,	// (0x00033fb0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x45d9,	// (0x00033fb0) list_single_graphic_2heading_pane_fp_g4

0xc674,	// (0x0003c04b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc674,	// (0x0003c04b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f533) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f533) list_single_graphic_2heading_pane_fp_g

0x479b,	// (0x00034172) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x479b,	// (0x00034172) list_single_graphic_2heading_pane_fp_t1

0x463c,	// (0x00034013) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x463c,	// (0x00034013) list_single_graphic_2heading_pane_fp_t2

0x47b1,	// (0x00034188) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x47b1,	// (0x00034188) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0003f615) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0003f615) list_single_graphic_2heading_pane_fp_t

0xc052,	// (0x0003ba29) fep_hwr_write_pane_g5_ParamLimits

0xc052,	// (0x0003ba29) fep_hwr_write_pane_g5

0xc05e,	// (0x0003ba35) fep_hwr_write_pane_g6_ParamLimits

0xc05e,	// (0x0003ba35) fep_hwr_write_pane_g6

0xc940,	// (0x0003c317) eswt_shell_pane_ParamLimits

0x99ea,	// (0x000393c1) bg_popup_window_pane_cp18_ParamLimits

0xc971,	// (0x0003c348) heading_pane_cp70

0xca72,	// (0x0003c449) popup_eswt_tasktip_window_t1_ParamLimits

0x94d1,	// (0x00038ea8) aid_touch_tab_arrow_left

0x94dd,	// (0x00038eb4) aid_touch_tab_arrow_right

0x5902,	// (0x000352d9) title_pane_g3_ParamLimits

0x5902,	// (0x000352d9) title_pane_g3

0x2817,	// (0x000321ee) set_value_pane_g1

0x7450,	// (0x00036e27) popup_toolbar_trans_pane_ParamLimits

0xcbc0,	// (0x0003c597) aid_size_cell_tb_trans_pane_ParamLimits

0x2858,	// (0x0003222f) bg_tb_trans_pane_ParamLimits

0xcbd2,	// (0x0003c5a9) grid_tb_trans_pane_ParamLimits

0x2349,	// (0x00031d20) cont_note_pane_ParamLimits

0x2349,	// (0x00031d20) cont_note_pane

0x25d3,	// (0x00031faa) cont_snote2_single_text_pane_ParamLimits

0x25d3,	// (0x00031faa) cont_snote2_single_text_pane

0x25d3,	// (0x00031faa) cont_snote2_single_graphic_pane_ParamLimits

0x25d3,	// (0x00031faa) cont_snote2_single_graphic_pane

0x9fdc,	// (0x000399b3) cont_note_wait_pane_ParamLimits

0x9fdc,	// (0x000399b3) cont_note_wait_pane

0x9fdc,	// (0x000399b3) cont_note_image_pane_ParamLimits

0x9fdc,	// (0x000399b3) cont_note_image_pane

0xcc7a,	// (0x0003c651) popup_note2_window_g1_ParamLimits

0xcc7a,	// (0x0003c651) popup_note2_window_g1

0xccab,	// (0x0003c682) popup_note2_window_t1_ParamLimits

0xccab,	// (0x0003c682) popup_note2_window_t1

0xccf0,	// (0x0003c6c7) popup_note2_window_t2_ParamLimits

0xccf0,	// (0x0003c6c7) popup_note2_window_t2

0xcd35,	// (0x0003c70c) popup_note2_window_t3_ParamLimits

0xcd35,	// (0x0003c70c) popup_note2_window_t3

0xcd7a,	// (0x0003c751) popup_note2_window_t4_ParamLimits

0xcd7a,	// (0x0003c751) popup_note2_window_t4

0x23cd,	// (0x00031da4) popup_note2_window_t5_ParamLimits

0x23cd,	// (0x00031da4) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0003f621) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0003f621) popup_note2_window_t

0xcda9,	// (0x0003c780) popup_note2_image_window_g1_ParamLimits

0xcda9,	// (0x0003c780) popup_note2_image_window_g1

0xcdb5,	// (0x0003c78c) popup_note2_image_window_g2_ParamLimits

0xcdb5,	// (0x0003c78c) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0003f62c) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0003f62c) popup_note2_image_window_g

0xcdc7,	// (0x0003c79e) popup_note2_image_window_t1_ParamLimits

0xcdc7,	// (0x0003c79e) popup_note2_image_window_t1

0xcddf,	// (0x0003c7b6) popup_note2_image_window_t2_ParamLimits

0xcddf,	// (0x0003c7b6) popup_note2_image_window_t2

0xcdf7,	// (0x0003c7ce) popup_note2_image_window_t3_ParamLimits

0xcdf7,	// (0x0003c7ce) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0003f631) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0003f631) popup_note2_image_window_t

0x9fea,	// (0x000399c1) popup_note2_wait_window_g1_ParamLimits

0x9fea,	// (0x000399c1) popup_note2_wait_window_g1

0xce13,	// (0x0003c7ea) popup_note2_wait_window_g2_ParamLimits

0xce13,	// (0x0003c7ea) popup_note2_wait_window_g2

0xa002,	// (0x000399d9) popup_note2_wait_window_g3_ParamLimits

0xa002,	// (0x000399d9) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0003f638) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0003f638) popup_note2_wait_window_g

0xce1f,	// (0x0003c7f6) popup_note2_wait_window_t1_ParamLimits

0xce1f,	// (0x0003c7f6) popup_note2_wait_window_t1

0xce3d,	// (0x0003c814) popup_note2_wait_window_t2_ParamLimits

0xce3d,	// (0x0003c814) popup_note2_wait_window_t2

0xce5b,	// (0x0003c832) popup_note2_wait_window_t3_ParamLimits

0xce5b,	// (0x0003c832) popup_note2_wait_window_t3

0xce6d,	// (0x0003c844) popup_note2_wait_window_t4_ParamLimits

0xce6d,	// (0x0003c844) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0003f63f) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0003f63f) popup_note2_wait_window_t

0xce7f,	// (0x0003c856) wait_bar2_pane_ParamLimits

0xce7f,	// (0x0003c856) wait_bar2_pane

0xce97,	// (0x0003c86e) popup_snote2_single_text_window_g1_ParamLimits

0xce97,	// (0x0003c86e) popup_snote2_single_text_window_g1

0xcebf,	// (0x0003c896) popup_snote2_single_text_window_t1_ParamLimits

0xcebf,	// (0x0003c896) popup_snote2_single_text_window_t1

0xcf0b,	// (0x0003c8e2) popup_snote2_single_text_window_t2_ParamLimits

0xcf0b,	// (0x0003c8e2) popup_snote2_single_text_window_t2

0xcf57,	// (0x0003c92e) popup_snote2_single_text_window_t3_ParamLimits

0xcf57,	// (0x0003c92e) popup_snote2_single_text_window_t3

0xcf98,	// (0x0003c96f) popup_snote2_single_text_window_t4_ParamLimits

0xcf98,	// (0x0003c96f) popup_snote2_single_text_window_t4

0xcfce,	// (0x0003c9a5) popup_snote2_single_text_window_t5_ParamLimits

0xcfce,	// (0x0003c9a5) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0003f648) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0003f648) popup_snote2_single_text_window_t

0xcff9,	// (0x0003c9d0) popup_snote2_single_graphic_window_g1_ParamLimits

0xcff9,	// (0x0003c9d0) popup_snote2_single_graphic_window_g1

0xd021,	// (0x0003c9f8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd021,	// (0x0003c9f8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0003f653) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0003f653) popup_snote2_single_graphic_window_g

0xd049,	// (0x0003ca20) popup_snote2_single_graphic_window_t1_ParamLimits

0xd049,	// (0x0003ca20) popup_snote2_single_graphic_window_t1

0xd095,	// (0x0003ca6c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd095,	// (0x0003ca6c) popup_snote2_single_graphic_window_t2

0xcf57,	// (0x0003c92e) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf57,	// (0x0003c92e) popup_snote2_single_graphic_window_t3

0xcf98,	// (0x0003c96f) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf98,	// (0x0003c96f) popup_snote2_single_graphic_window_t4

0xcfce,	// (0x0003c9a5) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfce,	// (0x0003c9a5) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0003f658) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0003f658) popup_snote2_single_graphic_window_t

0xbac5,	// (0x0003b49c) clock_nsta_pane_cp2_t1

0xbac5,	// (0x0003b49c) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0003f46c) clock_nsta_pane_cp2_t

0x40cc,	// (0x00033aa3) form_field_data_wide_pane_g1_ParamLimits

0x2866,	// (0x0003223d) form_field_data_wide_pane_g2_ParamLimits

0x2866,	// (0x0003223d) form_field_data_wide_pane_g2

0x2872,	// (0x00032249) form_field_data_wide_pane_g3_ParamLimits

0x2872,	// (0x00032249) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003f02d) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003f02d) form_field_data_wide_pane_g

0xb9a0,	// (0x0003b377) grid_touch_3_pane_ParamLimits

0xb9a0,	// (0x0003b377) grid_touch_3_pane

0xd0e1,	// (0x0003cab8) cell_touch_3_pane_ParamLimits

0xd0e1,	// (0x0003cab8) cell_touch_3_pane

0xbfc1,	// (0x0003b998) cell_touch_3_pane_g1

0xbfc1,	// (0x0003b998) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0003f4f1) cell_touch_3_pane_g

0x2425,	// (0x00031dfc) cont_query_data_pane

0x242d,	// (0x00031e04) cont_query_data_pane_cp1

0xd114,	// (0x0003caeb) button_value_adjust_pane_cp7

0xd11c,	// (0x0003caf3) query_popup_pane_cp3

0x6910,	// (0x000362e7) bg_popup_sub_pane_cp22_ParamLimits

0x6926,	// (0x000362fd) navi_navi_volume_pane_cp2

0x6941,	// (0x00036318) popup_side_volume_key_window_g2

0x6950,	// (0x00036327) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0003f0c3) popup_side_volume_key_window_g

0x696d,	// (0x00036344) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003f0ca) popup_side_volume_key_window_t

0x8ea3,	// (0x0003887a) popup_side_volume_key_window_ParamLimits

0x5e3a,	// (0x00035811) list_double_graphic_pane_g4_ParamLimits

0x5e3a,	// (0x00035811) list_double_graphic_pane_g4

0x7972,	// (0x00037349) list_single_2heading_msg_pane_ParamLimits

0x7972,	// (0x00037349) list_single_2heading_msg_pane

0x7f5d,	// (0x00037934) list_single_2heading_msg_pane_g1_ParamLimits

0x7f5d,	// (0x00037934) list_single_2heading_msg_pane_g1

0x5c75,	// (0x0003564c) list_single_2heading_msg_pane_g2_ParamLimits

0x5c75,	// (0x0003564c) list_single_2heading_msg_pane_g2

0x7f69,	// (0x00037940) list_single_2heading_msg_pane_g3_ParamLimits

0x7f69,	// (0x00037940) list_single_2heading_msg_pane_g3

0x7f75,	// (0x0003794c) list_single_2heading_msg_pane_g4_ParamLimits

0x7f75,	// (0x0003794c) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0003f663) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0003f663) list_single_2heading_msg_pane_g

0x7f8d,	// (0x00037964) list_single_2heading_msg_pane_t1_ParamLimits

0x7f8d,	// (0x00037964) list_single_2heading_msg_pane_t1

0x7fb5,	// (0x0003798c) list_single_2heading_msg_pane_t2_ParamLimits

0x7fb5,	// (0x0003798c) list_single_2heading_msg_pane_t2

0x7fe9,	// (0x000379c0) list_single_2heading_msg_pane_t3_ParamLimits

0x7fe9,	// (0x000379c0) list_single_2heading_msg_pane_t3

0x47d1,	// (0x000341a8) list_single_2heading_msg_pane_t4_ParamLimits

0x47d1,	// (0x000341a8) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0003f66c) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0003f66c) list_single_2heading_msg_pane_t

0x21c4,	// (0x00031b9b) title_pane_g4_ParamLimits

0x21c4,	// (0x00031b9b) title_pane_g4

0x6352,	// (0x00035d29) title_pane_stacon_g3_ParamLimits

0x6352,	// (0x00035d29) title_pane_stacon_g3

0xcc3d,	// (0x0003c614) list_single_2graphic_im_pane_g4_ParamLimits

0xcc3d,	// (0x0003c614) list_single_2graphic_im_pane_g4

0xaa4c,	// (0x0003a423) popup_side_volume_key_window_cp

0xb2b0,	// (0x0003ac87) main_idle_act2_pane_t1

0x7554,	// (0x00036f2b) toolbar_button_pane_g10

0x5c5f,	// (0x00035636) popup_toolbar_window_cp1

0xbab6,	// (0x0003b48d) clock_nsta_pane_cp_t1

0xbab6,	// (0x0003b48d) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0003f467) clock_nsta_pane_cp_t

0x6926,	// (0x000362fd) navi_navi_volume_pane_cp2_ParamLimits

0x6935,	// (0x0003630c) popup_side_volume_key_window_g1_ParamLimits

0x6941,	// (0x00036318) popup_side_volume_key_window_g2_ParamLimits

0x6950,	// (0x00036327) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0003f0c3) popup_side_volume_key_window_g_ParamLimits

0x7b0d,	// (0x000374e4) fep_hwr_aid_pane

0x7bb6,	// (0x0003758d) bg_fep_hwr_top_pane_g4_ParamLimits

0xc022,	// (0x0003b9f9) fep_hwr_top_pane_g1_ParamLimits

0xc034,	// (0x0003ba0b) fep_hwr_top_pane_g2_ParamLimits

0x7bd6,	// (0x000375ad) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0003f4bc) fep_hwr_top_pane_g_ParamLimits

0x7beb,	// (0x000375c2) fep_hwr_top_text_pane_ParamLimits

0xa801,	// (0x0003a1d8) aid_touch_tab_arrow_arrow_2

0xa80a,	// (0x0003a1e1) aid_touch_tab_arrow_left_2

0x7b21,	// (0x000374f8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7b58,	// (0x0003752f) fep_hwr_prediction_pane

0xc18a,	// (0x0003bb61) fep_vkb_prediction_pane

0xc290,	// (0x0003bc67) fep_vkb_side_pane_g3_ParamLimits

0xc290,	// (0x0003bc67) fep_vkb_side_pane_g3

0x7d7a,	// (0x00037751) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7deb,	// (0x000377c2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7df8,	// (0x000377cf) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0003f56b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8022,	// (0x000379f9) fep_hwr_prediction_pane_g1

0x802c,	// (0x00037a03) fep_hwr_prediction_pane_g2

0x8034,	// (0x00037a0b) fep_hwr_prediction_pane_g3

0x803c,	// (0x00037a13) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0003f675) fep_hwr_prediction_pane_g

0xd143,	// (0x0003cb1a) fep_vkb_prediction_pane_g1

0xd14d,	// (0x0003cb24) fep_vkb_prediction_pane_g2

0xd155,	// (0x0003cb2c) fep_vkb_prediction_pane_g3

0xd15d,	// (0x0003cb34) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0003f67e) fep_vkb_prediction_pane_g

0x78a5,	// (0x0003727c) slider_set_pane_g3

0x78b9,	// (0x00037290) slider_set_pane_g4

0x78d1,	// (0x000372a8) slider_set_pane_g5

0x78a5,	// (0x0003727c) slider_set_pane_g6

0x78e7,	// (0x000372be) slider_set_pane_g7

0xaed2,	// (0x0003a8a9) slider_form_pane_g3

0xaedb,	// (0x0003a8b2) slider_form_pane_g4

0xaee3,	// (0x0003a8ba) slider_form_pane_g5

0xaed2,	// (0x0003a8a9) slider_form_pane_g6

0xaeeb,	// (0x0003a8c2) slider_form_pane_g7

0xb574,	// (0x0003af4b) slider_set_pane_vc_g3

0xb57d,	// (0x0003af54) slider_set_pane_vc_g4

0xb586,	// (0x0003af5d) slider_set_pane_vc_g5

0xb574,	// (0x0003af4b) slider_set_pane_vc_g6

0xb58f,	// (0x0003af66) slider_set_pane_vc_g7

0xb765,	// (0x0003b13c) slider_form_pane_vc_g1

0xb76e,	// (0x0003b145) slider_form_pane_vc_g2

0xb777,	// (0x0003b14e) slider_form_pane_vc_g3

0xb765,	// (0x0003b13c) slider_form_pane_vc_g4

0xb780,	// (0x0003b157) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0003f439) slider_form_pane_vc_g

0x5673,	// (0x0003504a) main_idle_act3_pane

0xd165,	// (0x0003cb3c) ai3_links_pane

0xd16e,	// (0x0003cb45) popup_ai3_data_window_ParamLimits

0xd16e,	// (0x0003cb45) popup_ai3_data_window

0x21a6,	// (0x00031b7d) grid_ai3_links_pane

0xd18c,	// (0x0003cb63) cell_ai3_links_pane_ParamLimits

0xd18c,	// (0x0003cb63) cell_ai3_links_pane

0xd1a6,	// (0x0003cb7d) bg_popup_sub_pane_cp11

0xd1b3,	// (0x0003cb8a) cell_ai3_links_pane_g1

0x21a6,	// (0x00031b7d) bg_popup_sub_pane_cp12

0xd1d8,	// (0x0003cbaf) heading_ai3_data_pane

0xd1e0,	// (0x0003cbb7) list_ai3_gene_pane

0xd1ec,	// (0x0003cbc3) popup_ai3_data_window_g1

0xd1f4,	// (0x0003cbcb) heading_ai3_data_pane_g1

0xd1fc,	// (0x0003cbd3) heading_ai3_data_pane_t1

0xd20a,	// (0x0003cbe1) list_double_ai3_gene_pane_ParamLimits

0xd20a,	// (0x0003cbe1) list_double_ai3_gene_pane

0xd217,	// (0x0003cbee) list_single_ai3_gene_pane_ParamLimits

0xd217,	// (0x0003cbee) list_single_ai3_gene_pane

0xbf86,	// (0x0003b95d) list_highlight_pane_cp7_ParamLimits

0xbf86,	// (0x0003b95d) list_highlight_pane_cp7

0xd224,	// (0x0003cbfb) list_single_a13_gene_pane_t1_ParamLimits

0xd224,	// (0x0003cbfb) list_single_a13_gene_pane_t1

0xd23b,	// (0x0003cc12) list_single_ai3_gene_pane_g1

0xd244,	// (0x0003cc1b) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0003f687) list_single_ai3_gene_pane_g

0xd24c,	// (0x0003cc23) list_double_ai3_gene_pane_g1_ParamLimits

0xd24c,	// (0x0003cc23) list_double_ai3_gene_pane_g1

0xd258,	// (0x0003cc2f) list_double_ai3_gene_pane_t1_ParamLimits

0xd258,	// (0x0003cc2f) list_double_ai3_gene_pane_t1

0xd274,	// (0x0003cc4b) list_double_ai3_gene_pane_t2_ParamLimits

0xd274,	// (0x0003cc4b) list_double_ai3_gene_pane_t2

0xd289,	// (0x0003cc60) list_double_ai3_gene_pane_t3_ParamLimits

0xd289,	// (0x0003cc60) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0003f68c) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0003f68c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x47c7,	// (0x0003419e) aid_size_min_col_2

0xd12d,	// (0x0003cb04) aid_size_min_msg_ParamLimits

0xd12d,	// (0x0003cb04) aid_size_min_msg

0xc39c,	// (0x0003bd73) fep_vkb_top_text_pane_g2_ParamLimits

0xc39c,	// (0x0003bd73) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0003f4ec) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0003f4ec) fep_vkb_top_text_pane_g

0x5673,	// (0x0003504a) main_hc_apps_shell_pane

0xd2a6,	// (0x0003cc7d) grid_hc_apps_pane_ParamLimits

0xd2a6,	// (0x0003cc7d) grid_hc_apps_pane

0xd2b8,	// (0x0003cc8f) list_hc_apps_pane

0xd2c0,	// (0x0003cc97) scroll_pane_cp37_ParamLimits

0xd2c0,	// (0x0003cc97) scroll_pane_cp37

0xd2cc,	// (0x0003cca3) cell_hc_apps_pane_ParamLimits

0xd2cc,	// (0x0003cca3) cell_hc_apps_pane

0xd380,	// (0x0003cd57) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0003cd57) cell_hc_apps_pane_g1

0xd3ac,	// (0x0003cd83) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x0003cd83) cell_hc_apps_pane_g2

0xd3c8,	// (0x0003cd9f) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x0003cd9f) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0003f693) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0003f693) cell_hc_apps_pane_g

0xd3ea,	// (0x0003cdc1) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x0003cdc1) cell_hc_apps_pane_t1

0x2349,	// (0x00031d20) grid_highlight_pane_cp10_ParamLimits

0x2349,	// (0x00031d20) grid_highlight_pane_cp10

0xd42a,	// (0x0003ce01) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x0003ce01) list_single_hc_apps_pane

0xd469,	// (0x0003ce40) list_single_hc_apps_pane_g1

0x8044,	// (0x00037a1b) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0003f69a) list_single_hc_apps_pane_g

0x805d,	// (0x00037a34) list_single_hc_apps_pane_g2_copy1

0x8079,	// (0x00037a50) list_single_hc_apps_pane_t1

0x2216,	// (0x00031bed) bg_set_opt_pane_cp_ParamLimits

0x59b4,	// (0x0003538b) setting_slider_pane_t1_ParamLimits

0x59cd,	// (0x000353a4) setting_slider_pane_t2_ParamLimits

0x59e7,	// (0x000353be) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003ef10) setting_slider_pane_t_ParamLimits

0x59ff,	// (0x000353d6) slider_set_pane_ParamLimits

0x6df7,	// (0x000367ce) control_pane_g5_ParamLimits

0x6df7,	// (0x000367ce) control_pane_g5

0xad05,	// (0x0003a6dc) slider_set_pane_g1_ParamLimits

0x7899,	// (0x00037270) slider_set_pane_g2_ParamLimits

0x78a5,	// (0x0003727c) slider_set_pane_g3_ParamLimits

0x78b9,	// (0x00037290) slider_set_pane_g4_ParamLimits

0x78d1,	// (0x000372a8) slider_set_pane_g5_ParamLimits

0x78a5,	// (0x0003727c) slider_set_pane_g6_ParamLimits

0x78e7,	// (0x000372be) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0003f316) slider_set_pane_g_ParamLimits

0x8f88,	// (0x0003895f) navi_icon_text_pane_ParamLimits

0x9490,	// (0x00038e67) aid_fill_nsta_2_ParamLimits

0x94d1,	// (0x00038ea8) aid_touch_tab_arrow_left_ParamLimits

0x94dd,	// (0x00038eb4) aid_touch_tab_arrow_right_ParamLimits

0x9549,	// (0x00038f20) clock_nsta_pane_ParamLimits

0xa7e3,	// (0x0003a1ba) navi_icon_pane_g1_ParamLimits

0xa7ef,	// (0x0003a1c6) navi_text_pane_t1_ParamLimits

0xbbd3,	// (0x0003b5aa) navi_icon_text_pane_g1_ParamLimits

0xbbdf,	// (0x0003b5b6) navi_icon_text_pane_t1_ParamLimits

0xd469,	// (0x0003ce40) list_single_hc_apps_pane_g1_ParamLimits

0x8044,	// (0x00037a1b) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0003f69a) list_single_hc_apps_pane_g_ParamLimits

0x805d,	// (0x00037a34) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8079,	// (0x00037a50) list_single_hc_apps_pane_t1_ParamLimits

0x57e8,	// (0x000351bf) popup_toolbar2_fixed_window_ParamLimits

0x57e8,	// (0x000351bf) popup_toolbar2_fixed_window

0x7446,	// (0x00036e1d) popup_toolbar2_float_window

0x21a6,	// (0x00031b7d) bg_popup_sub_pane_cp27

0xd482,	// (0x0003ce59) grid_toolbar2_float_pane

0x21a6,	// (0x00031b7d) bg_popup_sub_pane_cp26

0xd482,	// (0x0003ce59) grid_toolbar2_fixed_pane

0xd48a,	// (0x0003ce61) cell_toolbar2_fixed_pane_ParamLimits

0xd48a,	// (0x0003ce61) cell_toolbar2_fixed_pane

0xd49a,	// (0x0003ce71) cell_toolbar2_fixed_pane_g1

0xd4a3,	// (0x0003ce7a) toolbar2_fixed_button_pane

0x9976,	// (0x0003934d) toolbar2_fixed_button_pane_g1

0x9986,	// (0x0003935d) toolbar2_fixed_button_pane_g2

0x997e,	// (0x00039355) toolbar2_fixed_button_pane_g3

0x9996,	// (0x0003936d) toolbar2_fixed_button_pane_g4

0x998e,	// (0x00039365) toolbar2_fixed_button_pane_g5

0x999e,	// (0x00039375) toolbar2_fixed_button_pane_g6

0x99a6,	// (0x0003937d) toolbar2_fixed_button_pane_g7

0x99b6,	// (0x0003938d) toolbar2_fixed_button_pane_g8

0x99ae,	// (0x00039385) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0003f218) toolbar2_fixed_button_pane_g

0xd4ab,	// (0x0003ce82) cell_toolbar2_float_pane_ParamLimits

0xd4ab,	// (0x0003ce82) cell_toolbar2_float_pane

0xd4bc,	// (0x0003ce93) cell_toolbar2_float_pane_g1

0xd4a3,	// (0x0003ce7a) toolbar2_fixed_button_pane_cp

0xc0f8,	// (0x0003bacf) fep_vkb_accented_list_pane_ParamLimits

0xc0f8,	// (0x0003bacf) fep_vkb_accented_list_pane

0x7d5a,	// (0x00037731) bg_popup_fep_shadow_pane_g9

0x9117,	// (0x00038aee) bg_popup_fep_shadow_pane_cp3

0x297b,	// (0x00032352) list_accented_list_pane

0xd4c5,	// (0x0003ce9c) list_single_accented_list_pane_ParamLimits

0xd4c5,	// (0x0003ce9c) list_single_accented_list_pane

0x9117,	// (0x00038aee) list_highlight_pane_cp10

0xd4d6,	// (0x0003cead) list_single_accented_list_pane_t1

0x738c,	// (0x00036d63) popup_slider_window_ParamLimits

0x738c,	// (0x00036d63) popup_slider_window

0xd124,	// (0x0003cafb) aid_indentation_list_msg

0xd5a6,	// (0x0003cf7d) bg_popup_window_pane_cp19

0xd612,	// (0x0003cfe9) popup_slider_window_g1

0xd62e,	// (0x0003d005) popup_slider_window_g2

0xd64a,	// (0x0003d021) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0003f69f) popup_slider_window_g

0xd6b0,	// (0x0003d087) popup_slider_window_t1

0xd724,	// (0x0003d0fb) small_volume_slider_vertical_pane

0xbfc1,	// (0x0003b998) small_volume_slider_vertical_pane_g1

0xbfc1,	// (0x0003b998) small_volume_slider_vertical_pane_g2

0xd740,	// (0x0003d117) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0003f6b1) small_volume_slider_vertical_pane_g

0x5596,	// (0x00034f6d) area_side_right_pane_ParamLimits

0x5596,	// (0x00034f6d) area_side_right_pane

0x80a7,	// (0x00037a7e) aid_size_side_button_ParamLimits

0x80a7,	// (0x00037a7e) aid_size_side_button

0x80bb,	// (0x00037a92) grid_sctrl_middle_pane_ParamLimits

0x80bb,	// (0x00037a92) grid_sctrl_middle_pane

0x80da,	// (0x00037ab1) sctrl_sk_bottom_pane

0x80eb,	// (0x00037ac2) sctrl_sk_top_pane

0x80fd,	// (0x00037ad4) aid_touch_sctrl_top

0x810a,	// (0x00037ae1) bg_sctrl_sk_pane_ParamLimits

0x810a,	// (0x00037ae1) bg_sctrl_sk_pane

0x8118,	// (0x00037aef) sctrl_sk_top_pane_g1

0x8125,	// (0x00037afc) sctrl_sk_top_pane_t1

0x80fd,	// (0x00037ad4) aid_touch_sctrl_bottom

0x810a,	// (0x00037ae1) bg_sctrl_sk_pane_cp_ParamLimits

0x810a,	// (0x00037ae1) bg_sctrl_sk_pane_cp

0x8140,	// (0x00037b17) sctrl_sk_bottom_pane_g1

0x8125,	// (0x00037afc) sctrl_sk_bottom_pane_t1

0x8149,	// (0x00037b20) cell_sctrl_middle_pane_ParamLimits

0x8149,	// (0x00037b20) cell_sctrl_middle_pane

0x8166,	// (0x00037b3d) aid_touch_sctrl_middle_ParamLimits

0x8166,	// (0x00037b3d) aid_touch_sctrl_middle

0x8178,	// (0x00037b4f) bg_sctrl_middle_pane_ParamLimits

0x8178,	// (0x00037b4f) bg_sctrl_middle_pane

0x7d7a,	// (0x00037751) cell_sctrl_middle_pane_g1_ParamLimits

0x7d7a,	// (0x00037751) cell_sctrl_middle_pane_g1

0x8186,	// (0x00037b5d) cell_sctrl_middle_pane_g2_ParamLimits

0x8186,	// (0x00037b5d) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0003f6bd) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0003f6bd) cell_sctrl_middle_pane_g

0x9976,	// (0x0003934d) bg_sctrl_middle_pane_g1

0x997e,	// (0x00039355) bg_sctrl_middle_pane_g2

0x9986,	// (0x0003935d) bg_sctrl_middle_pane_g3

0x998e,	// (0x00039365) bg_sctrl_middle_pane_g4

0x9996,	// (0x0003936d) bg_sctrl_middle_pane_g5

0x999e,	// (0x00039375) bg_sctrl_middle_pane_g6

0x99a6,	// (0x0003937d) bg_sctrl_middle_pane_g7

0x99ae,	// (0x00039385) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0003f6c2) bg_sctrl_middle_pane_g

0x99b6,	// (0x0003938d) bg_sctrl_middle_pane_g8_copy1

0x9976,	// (0x0003934d) bg_sctrl_sk_pane_g1

0x9986,	// (0x0003935d) bg_sctrl_sk_pane_g2

0x997e,	// (0x00039355) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0003f218) bg_sctrl_sk_pane_g

0x2791,	// (0x00032168) aid_size_touch_scroll_bar

0x9996,	// (0x0003936d) bg_sctrl_sk_pane_g4

0x998e,	// (0x00039365) bg_sctrl_sk_pane_g5

0x999e,	// (0x00039375) bg_sctrl_sk_pane_g6

0x99a6,	// (0x0003937d) bg_sctrl_sk_pane_g7

0x99b6,	// (0x0003938d) bg_sctrl_sk_pane_g8

0x99ae,	// (0x00039385) bg_sctrl_sk_pane_g9

0x6fa1,	// (0x00036978) popup_fep_china_hwr2_fs_candidate_window

0x6fab,	// (0x00036982) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6fab,	// (0x00036982) popup_fep_china_hwr2_fs_control_window

0x7d7a,	// (0x00037751) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0003f6b8) sctrl_sk_top_pane_g

0xd749,	// (0x0003d120) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd749,	// (0x0003d120) aid_fep_china_hwr2_fs_cell

0xd75c,	// (0x0003d133) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd75c,	// (0x0003d133) bg_popup_fep_shadow_pane_cp4

0xd775,	// (0x0003d14c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd775,	// (0x0003d14c) bg_popup_fep_shadow_pane_cp5

0xd787,	// (0x0003d15e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd787,	// (0x0003d15e) popup_fep_china_hwr2_fs_control_bar_grid

0xd797,	// (0x0003d16e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd79f,	// (0x0003d176) aid_fep_china_hwr2_fs_candi_cell

0x21a6,	// (0x00031b7d) bg_popup_fep_shadow_pane_cp6

0xd7a9,	// (0x0003d180) popup_fep_china_hwr2_fs_candidate_grid

0xd7b3,	// (0x0003d18a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7b3,	// (0x0003d18a) cell_fep_china_hwr2_fs_funtion_grid

0xbfc1,	// (0x0003b998) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7cb,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7cb,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7d9,	// (0x0003d1b0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7d9,	// (0x0003d1b0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0003f6d3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0003f6d3) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ef,	// (0x0003d1c6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ef,	// (0x0003d1c6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd804,	// (0x0003d1db) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd804,	// (0x0003d1db) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0003f6d8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0003f6d8) cell_fep_china_hwr2_fs_funtion_grid_t

0xd820,	// (0x0003d1f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd828,	// (0x0003d1ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd830,	// (0x0003d207) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0003f6dd) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd838,	// (0x0003d20f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd838,	// (0x0003d20f) cell_fep_china_hwr2_fs_candidate_grid

0xd857,	// (0x0003d22e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd85f,	// (0x0003d236) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc1,	// (0x0003b998) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc1,	// (0x0003b998) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0003f4f1) cell_fep_china_hwr2_fs_candidate_grid_g

0xd867,	// (0x0003d23e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x955c,	// (0x00038f33) clock_nsta_pane_cp_24_ParamLimits

0x955c,	// (0x00038f33) clock_nsta_pane_cp_24

0x95dc,	// (0x00038fb3) indicator_nsta_pane_cp_24_ParamLimits

0x95dc,	// (0x00038fb3) indicator_nsta_pane_cp_24

0xa65f,	// (0x0003a036) heading_pane_g1

0x0001,

0xf8a6,	// (0x0003f27d) heading_pane_g

0xb0f7,	// (0x0003aace) grid_sct_catagory_button_pane

0xb129,	// (0x0003ab00) scroll_pane_cp5_ParamLimits

0xbc21,	// (0x0003b5f8) button_value_adjust_pane_cp5_ParamLimits

0xbc21,	// (0x0003b5f8) button_value_adjust_pane_cp5

0xbd06,	// (0x0003b6dd) form2_midp_time_pane_ParamLimits

0xd875,	// (0x0003d24c) cell_sct_catagory_button_pane_ParamLimits

0xd875,	// (0x0003d24c) cell_sct_catagory_button_pane

0xbf86,	// (0x0003b95d) bg_button_pane_cp01_ParamLimits

0xbf86,	// (0x0003b95d) bg_button_pane_cp01

0xbfc1,	// (0x0003b998) cell_sct_catagory_button_pane_g1

0x73cd,	// (0x00036da4) popup_tb_extension_window

0xd887,	// (0x0003d25e) aid_size_cell_ext_ParamLimits

0xd887,	// (0x0003d25e) aid_size_cell_ext

0x2349,	// (0x00031d20) bg_tb_trans_pane_cp1_ParamLimits

0x2349,	// (0x00031d20) bg_tb_trans_pane_cp1

0xd8a7,	// (0x0003d27e) grid_tb_ext_pane_ParamLimits

0xd8a7,	// (0x0003d27e) grid_tb_ext_pane

0xd8d5,	// (0x0003d2ac) cell_tb_ext_pane_ParamLimits

0xd8d5,	// (0x0003d2ac) cell_tb_ext_pane

0xd8ec,	// (0x0003d2c3) cell_tb_ext_pane_g1_ParamLimits

0xd8ec,	// (0x0003d2c3) cell_tb_ext_pane_g1

0xd909,	// (0x0003d2e0) cell_tb_ext_pane_t1

0x2349,	// (0x00031d20) list_highlight_pane_cp11_ParamLimits

0x2349,	// (0x00031d20) list_highlight_pane_cp11

0x5807,	// (0x000351de) popup_uni_indicator_window_ParamLimits

0x5807,	// (0x000351de) popup_uni_indicator_window

0x2858,	// (0x0003222f) bg_popup_sub_pane_cp14

0xd924,	// (0x0003d2fb) list_uniindi_pane

0xd930,	// (0x0003d307) uniindi_top_pane

0x2349,	// (0x00031d20) bg_uniindi_top_pane

0xd951,	// (0x0003d328) uniindi_top_pane_g1

0xd967,	// (0x0003d33e) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0003f6e4) uniindi_top_pane_g

0xd991,	// (0x0003d368) uniindi_top_pane_t1

0xd9bd,	// (0x0003d394) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x0003d394) list_single_uniindi_pane

0xbfc1,	// (0x0003b998) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0003d3a7) list_single_uniindi_pane_g1

0xd9e3,	// (0x0003d3ba) list_single_uniindi_pane_t1

0x5673,	// (0x0003504a) control_bg_pane

0xda08,	// (0x0003d3df) bg_sctrl_sk_pane_cp1

0xda11,	// (0x0003d3e8) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x0003d3f1) control_bg_pane_g1

0xda23,	// (0x0003d3fa) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0003f6ed) control_bg_pane_g

0xba59,	// (0x0003b430) cell_indicator_nsta_pane_g1_ParamLimits

0xba67,	// (0x0003b43e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0003f455) cell_indicator_nsta_pane_g_ParamLimits

0x45c6,	// (0x00033f9d) form2_midp_time_pane_t1_ParamLimits

0x6eff,	// (0x000368d6) main_idle_act4_pane_ParamLimits

0x6eff,	// (0x000368d6) main_idle_act4_pane

0x73cd,	// (0x00036da4) popup_tb_extension_window_ParamLimits

0xd8c7,	// (0x0003d29e) tb_ext_find_pane_ParamLimits

0xd8c7,	// (0x0003d29e) tb_ext_find_pane

0xda2c,	// (0x0003d403) ai_gene_pane_1_cp1

0x9261,	// (0x00038c38) ai_gene_pane_2_cp1

0xda34,	// (0x0003d40b) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x0003d414) list_single_idle_plugin_notification_pane

0xda46,	// (0x0003d41d) list_single_idle_plugin_player_pane

0xda4f,	// (0x0003d426) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x0003d426) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0003d448) main_idle_act4_pane_t1

0xda83,	// (0x0003d45a) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0003f6f2) main_idle_act4_pane_t

0xda95,	// (0x0003d46c) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x0003d46c) middle_sk_idle_act4_pane

0xdaab,	// (0x0003d482) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x0003d49c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x0003d49c) shortcut_wheel_idle_act4_pane

0xbfc1,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g1

0xbfc1,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g2

0xbfc1,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g3

0xbfc1,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g4

0xbfc1,	// (0x0003b998) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x0003d4b0) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0003d4b8) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x0003d4c0) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0003d4c8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0003f6f7) shortcut_wheel_idle_act4_pane_g

0xc23c,	// (0x0003bc13) middle_sk_idle_act4_pane_g1_ParamLimits

0xc23c,	// (0x0003bc13) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x0003d52c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x0003d52c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0003f71a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0003f71a) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0003d538) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0003d538) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0003d555) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0003d555) grid_ai_shortcut_pane

0xdb97,	// (0x0003d56e) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x0003d56e) list_highlight_pane_cp16

0xdba4,	// (0x0003d57b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x0003d57b) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0003d587) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0003d587) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0003d5a1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0003d5a1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0003f71f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0003f71f) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0003d5b4) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0003d5b4) cell_ai_shortcut_pane

0xdc00,	// (0x0003d5d7) cell_ai_shortcut_pane_g1_ParamLimits

0xdc00,	// (0x0003d5d7) cell_ai_shortcut_pane_g1

0xda2c,	// (0x0003d403) ai_gene_pane_1_cp2

0xdc22,	// (0x0003d5f9) ai_gene_pane_2_cp2

0xdc2a,	// (0x0003d601) list_highlight_pane_cp15

0xdc33,	// (0x0003d60a) list_single_idle_plugin_calendar_pane_g1

0xdc2a,	// (0x0003d601) list_highlight_pane_cp17

0xdc3b,	// (0x0003d612) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc43,	// (0x0003d61a) list_single_idle_plugin_player_pane_g1

0xb35e,	// (0x0003ad35) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0003f726) list_single_idle_plugin_player_pane_g

0xdc4b,	// (0x0003d622) list_single_idle_plugin_player_pane_t1

0xdc59,	// (0x0003d630) list_single_idle_plugin_player_pane_t2

0xdc67,	// (0x0003d63e) list_single_idle_plugin_player_pane_t3

0xdc75,	// (0x0003d64c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0003f72b) list_single_idle_plugin_player_pane_t

0xdc83,	// (0x0003d65a) wait_bar_pane_cp15

0xdc8b,	// (0x0003d662) grid_ai_notification_pane

0xb35e,	// (0x0003ad35) list_single_idle_plugin_notification_pane_g1

0xdc94,	// (0x0003d66b) cell_ai_notification_pane_ParamLimits

0xdc94,	// (0x0003d66b) cell_ai_notification_pane

0xdca1,	// (0x0003d678) cell_ai_notification_pane_g1

0xdca9,	// (0x0003d680) cell_ai_notification_pane_t1

0xdcb7,	// (0x0003d68e) tb_ext_find_button_pane

0xdcbf,	// (0x0003d696) tb_ext_find_pane_g1

0xdcc7,	// (0x0003d69e) tb_ext_find_pane_t1

0x6791,	// (0x00036168) tb_ext_find_button_pane_g1

0xdcd5,	// (0x0003d6ac) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0003f734) tb_ext_find_button_pane_g

0xda71,	// (0x0003d448) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x0003d45a) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0003f6f2) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x0003d482) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x0003d490) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x0003d490) sat_plugin_idle_act4_pane

0xdcde,	// (0x0003d6b5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcde,	// (0x0003d6b5) sat_plugin_idle_act4_pane_t1

0xdcf1,	// (0x0003d6c8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf1,	// (0x0003d6c8) sat_plugin_idle_act4_pane_t2

0xdd04,	// (0x0003d6db) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd04,	// (0x0003d6db) sat_plugin_idle_act4_pane_t3

0xdd17,	// (0x0003d6ee) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd17,	// (0x0003d6ee) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0003f739) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0003f739) sat_plugin_idle_act4_pane_t

0x5738,	// (0x0003510f) popup_battery_window_ParamLimits

0x5738,	// (0x0003510f) popup_battery_window

0x2349,	// (0x00031d20) bg_popup_sub_pane_cp25_ParamLimits

0x2349,	// (0x00031d20) bg_popup_sub_pane_cp25

0xdd2a,	// (0x0003d701) popup_battery_window_g1_ParamLimits

0xdd2a,	// (0x0003d701) popup_battery_window_g1

0xdd36,	// (0x0003d70d) popup_battery_window_t1_ParamLimits

0xdd36,	// (0x0003d70d) popup_battery_window_t1

0xdd48,	// (0x0003d71f) popup_battery_window_t2_ParamLimits

0xdd48,	// (0x0003d71f) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0003f742) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0003f742) popup_battery_window_t

0x912b,	// (0x00038b02) midp_canvas_pane_ParamLimits

0x91a3,	// (0x00038b7a) midp_keypad_pane_ParamLimits

0x91a3,	// (0x00038b7a) midp_keypad_pane

0x943e,	// (0x00038e15) main_midp_pane_ParamLimits

0xbad4,	// (0x0003b4ab) signal_pane_g2_cp_ParamLimits

0xdd65,	// (0x0003d73c) aid_size_cell_midp_keypad_ParamLimits

0xdd65,	// (0x0003d73c) aid_size_cell_midp_keypad

0xdd7f,	// (0x0003d756) midp_keyp_game_grid_pane_ParamLimits

0xdd7f,	// (0x0003d756) midp_keyp_game_grid_pane

0xdd9f,	// (0x0003d776) midp_keyp_rocker_pane_ParamLimits

0xdd9f,	// (0x0003d776) midp_keyp_rocker_pane

0xddce,	// (0x0003d7a5) midp_keyp_sk_left_pane_ParamLimits

0xddce,	// (0x0003d7a5) midp_keyp_sk_left_pane

0xde2a,	// (0x0003d801) midp_keyp_sk_right_pane_ParamLimits

0xde2a,	// (0x0003d801) midp_keyp_sk_right_pane

0x21a6,	// (0x00031b7d) bg_button_pane_cp03

0xdea7,	// (0x0003d87e) midp_keyp_sk_left_pane_g1

0x21a6,	// (0x00031b7d) bg_button_pane_cp04

0xdea7,	// (0x0003d87e) midp_keyp_sk_right_pane_g1

0xbfc1,	// (0x0003b998) midp_keyp_rocker_pane_g1

0xdeaf,	// (0x0003d886) keyp_game_cell_pane_ParamLimits

0xdeaf,	// (0x0003d886) keyp_game_cell_pane

0x21a6,	// (0x00031b7d) bg_button_pane_cp02

0xdec2,	// (0x0003d899) keyp_game_cell_pane_g1

0x5782,	// (0x00035159) popup_fep_vkb2_window_ParamLimits

0x5782,	// (0x00035159) popup_fep_vkb2_window

0x81a4,	// (0x00037b7b) aid_size_cell_vkb2_ParamLimits

0x81a4,	// (0x00037b7b) aid_size_cell_vkb2

0x81f0,	// (0x00037bc7) popup_fep_vkb2_window_g1_ParamLimits

0x81f0,	// (0x00037bc7) popup_fep_vkb2_window_g1

0x8238,	// (0x00037c0f) vkb2_area_bottom_pane_ParamLimits

0x8238,	// (0x00037c0f) vkb2_area_bottom_pane

0x828c,	// (0x00037c63) vkb2_area_keypad_pane_ParamLimits

0x828c,	// (0x00037c63) vkb2_area_keypad_pane

0x82d2,	// (0x00037ca9) vkb2_area_top_pane_ParamLimits

0x82d2,	// (0x00037ca9) vkb2_area_top_pane

0x8352,	// (0x00037d29) vkb2_top_entry_pane_ParamLimits

0x8352,	// (0x00037d29) vkb2_top_entry_pane

0x837c,	// (0x00037d53) vkb2_top_grid_left_pane_ParamLimits

0x837c,	// (0x00037d53) vkb2_top_grid_left_pane

0x839b,	// (0x00037d72) vkb2_top_grid_right_pane_ParamLimits

0x839b,	// (0x00037d72) vkb2_top_grid_right_pane

0x83ba,	// (0x00037d91) vkb2_cell_keypad_pane_ParamLimits

0x83ba,	// (0x00037d91) vkb2_cell_keypad_pane

0x848b,	// (0x00037e62) vkb2_area_bottom_grid_pane_ParamLimits

0x848b,	// (0x00037e62) vkb2_area_bottom_grid_pane

0x84b1,	// (0x00037e88) vkb2_area_bottom_pane_g1_ParamLimits

0x84b1,	// (0x00037e88) vkb2_area_bottom_pane_g1

0x84d5,	// (0x00037eac) vkb2_area_bottom_pane_g2_ParamLimits

0x84d5,	// (0x00037eac) vkb2_area_bottom_pane_g2

0x8503,	// (0x00037eda) vkb2_area_bottom_pane_g3_ParamLimits

0x8503,	// (0x00037eda) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0003f747) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0003f747) vkb2_area_bottom_pane_g

0x8564,	// (0x00037f3b) vkb2_top_cell_left_pane_ParamLimits

0x8564,	// (0x00037f3b) vkb2_top_cell_left_pane

0xded3,	// (0x0003d8aa) vkb2_top_entry_pane_g1_ParamLimits

0xded3,	// (0x0003d8aa) vkb2_top_entry_pane_g1

0xdee1,	// (0x0003d8b8) vkb2_top_entry_pane_t1_ParamLimits

0xdee1,	// (0x0003d8b8) vkb2_top_entry_pane_t1

0xdf13,	// (0x0003d8ea) vkb2_top_entry_pane_t2_ParamLimits

0xdf13,	// (0x0003d8ea) vkb2_top_entry_pane_t2

0xdf45,	// (0x0003d91c) vkb2_top_entry_pane_t3_ParamLimits

0xdf45,	// (0x0003d91c) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0003f74e) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0003f74e) vkb2_top_entry_pane_t

0x85b1,	// (0x00037f88) vkb2_top_grid_right_pane_g1_ParamLimits

0x85b1,	// (0x00037f88) vkb2_top_grid_right_pane_g1

0x85c7,	// (0x00037f9e) vkb2_top_grid_right_pane_g2_ParamLimits

0x85c7,	// (0x00037f9e) vkb2_top_grid_right_pane_g2

0x85df,	// (0x00037fb6) vkb2_top_grid_right_pane_g3_ParamLimits

0x85df,	// (0x00037fb6) vkb2_top_grid_right_pane_g3

0x85f7,	// (0x00037fce) vkb2_top_grid_right_pane_g4_ParamLimits

0x85f7,	// (0x00037fce) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0003f755) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0003f755) vkb2_top_grid_right_pane_g

0x860d,	// (0x00037fe4) vkb2_top_cell_left_pane_g1

0x8624,	// (0x00037ffb) vkb2_cell_keypad_pane_g1_ParamLimits

0x8624,	// (0x00037ffb) vkb2_cell_keypad_pane_g1

0xdf69,	// (0x0003d940) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf69,	// (0x0003d940) vkb2_cell_keypad_pane_t1

0x8632,	// (0x00038009) vkb2_cell_bottom_grid_pane_ParamLimits

0x8632,	// (0x00038009) vkb2_cell_bottom_grid_pane

0x866b,	// (0x00038042) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x0003d4d0) aid_call2_pane_cp02

0xdb01,	// (0x0003d4d8) aid_call_pane_cp02

0xdb09,	// (0x0003d4e0) clock_digital_number_pane_cp10

0xdb11,	// (0x0003d4e8) clock_digital_number_pane_cp11

0xdb19,	// (0x0003d4f0) clock_digital_number_pane_cp12

0xdb21,	// (0x0003d4f8) clock_digital_number_pane_cp13

0xdb29,	// (0x0003d500) clock_digital_separator_pane_cp10

0x6791,	// (0x00036168) popup_clock_digital_analogue_window_cp2_g1

0x6791,	// (0x00036168) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x0003d508) popup_clock_digital_analogue_window_cp2_g3

0x6791,	// (0x00036168) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x0003d508) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0003f70a) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x0003d510) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x0003d51e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0003f715) popup_clock_digital_analogue_window_cp2_t

0xbfc1,	// (0x0003b998) clock_digital_number_pane_cp10_g1

0xbfc1,	// (0x0003b998) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003f4f1) clock_digital_number_pane_cp10_g

0xbfc1,	// (0x0003b998) clock_digital_separator_pane_cp10_g1

0xbfc1,	// (0x0003b998) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003f4f1) clock_digital_separator_pane_cp10_g

0xd973,	// (0x0003d34a) uniindi_top_pane_g3

0xd984,	// (0x0003d35b) uniindi_top_pane_g4

0x8445,	// (0x00037e1c) vkb2_row_keypad_pane_ParamLimits

0x8445,	// (0x00037e1c) vkb2_row_keypad_pane

0x8687,	// (0x0003805e) vkb2_cell_t_keypad_pane_ParamLimits

0x8687,	// (0x0003805e) vkb2_cell_t_keypad_pane

0x8697,	// (0x0003806e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8697,	// (0x0003806e) vkb2_cell_t_keypad_pane_cp08

0x86ac,	// (0x00038083) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x86ac,	// (0x00038083) vkb2_cell_t_keypad_pane_cp09

0x86c0,	// (0x00038097) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x86c0,	// (0x00038097) vkb2_cell_t_keypad_pane_cp01

0x86d1,	// (0x000380a8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x86d1,	// (0x000380a8) vkb2_cell_t_keypad_pane_cp02

0x86e2,	// (0x000380b9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x86e2,	// (0x000380b9) vkb2_cell_t_keypad_pane_cp03

0x86f3,	// (0x000380ca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x86f3,	// (0x000380ca) vkb2_cell_t_keypad_pane_cp04

0x8704,	// (0x000380db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8704,	// (0x000380db) vkb2_cell_t_keypad_pane_cp05

0x8715,	// (0x000380ec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8715,	// (0x000380ec) vkb2_cell_t_keypad_pane_cp06

0x8728,	// (0x000380ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8728,	// (0x000380ff) vkb2_cell_t_keypad_pane_cp07

0x873d,	// (0x00038114) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x873d,	// (0x00038114) vkb2_cell_t_keypad_pane_cp10

0x7d7a,	// (0x00037751) vkb2_cell_t_keypad_pane_g1

0xdf80,	// (0x0003d957) vkb2_cell_t_keypad_pane_t1

0x5673,	// (0x0003504a) popup_grid_graphic2_window

0xdf92,	// (0x0003d969) aid_size_cell_graphic2_ParamLimits

0xdf92,	// (0x0003d969) aid_size_cell_graphic2

0xdfca,	// (0x0003d9a1) bg_popup_window_pane_cp21_ParamLimits

0xdfca,	// (0x0003d9a1) bg_popup_window_pane_cp21

0xdfd8,	// (0x0003d9af) graphic2_pages_pane_ParamLimits

0xdfd8,	// (0x0003d9af) graphic2_pages_pane

0xe01e,	// (0x0003d9f5) grid_graphic2_control_pane_ParamLimits

0xe01e,	// (0x0003d9f5) grid_graphic2_control_pane

0xe05c,	// (0x0003da33) grid_graphic2_pane_ParamLimits

0xe05c,	// (0x0003da33) grid_graphic2_pane

0xe0d2,	// (0x0003daa9) cell_graphic2_pane

0x5673,	// (0x0003504a) main_comp_mode_pane

0xd1e0,	// (0x0003cbb7) list_ai3_gene_pane_ParamLimits

0xd5a6,	// (0x0003cf7d) bg_popup_window_pane_cp19_ParamLimits

0xd5b2,	// (0x0003cf89) bg_touch_area_indi_pane_ParamLimits

0xd5b2,	// (0x0003cf89) bg_touch_area_indi_pane

0xd5c8,	// (0x0003cf9f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c8,	// (0x0003cf9f) bg_touch_area_indi_pane_cp01

0xd5de,	// (0x0003cfb5) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5de,	// (0x0003cfb5) bg_touch_area_indi_pane_cp02

0xd5f8,	// (0x0003cfcf) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5f8,	// (0x0003cfcf) bg_touch_area_indi_pane_cp03

0xd612,	// (0x0003cfe9) popup_slider_window_g1_ParamLimits

0xd62e,	// (0x0003d005) popup_slider_window_g2_ParamLimits

0xd64a,	// (0x0003d021) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0003f69f) popup_slider_window_g_ParamLimits

0xd6b0,	// (0x0003d087) popup_slider_window_t1_ParamLimits

0xd724,	// (0x0003d0fb) small_volume_slider_vertical_pane_ParamLimits

0xe0d2,	// (0x0003daa9) cell_graphic2_pane_ParamLimits

0xe126,	// (0x0003dafd) bg_button_pane_cp10_ParamLimits

0xe126,	// (0x0003dafd) bg_button_pane_cp10

0xe13b,	// (0x0003db12) bg_button_pane_cp11_ParamLimits

0xe13b,	// (0x0003db12) bg_button_pane_cp11

0xe150,	// (0x0003db27) graphic2_pages_pane_g1_ParamLimits

0xe150,	// (0x0003db27) graphic2_pages_pane_g1

0xe16b,	// (0x0003db42) graphic2_pages_pane_g2_ParamLimits

0xe16b,	// (0x0003db42) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0003f763) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0003f763) graphic2_pages_pane_g

0xe183,	// (0x0003db5a) graphic2_pages_pane_t1_ParamLimits

0xe183,	// (0x0003db5a) graphic2_pages_pane_t1

0xe199,	// (0x0003db70) cell_graphic2_control_pane_ParamLimits

0xe199,	// (0x0003db70) cell_graphic2_control_pane

0xe1b9,	// (0x0003db90) cell_graphic2_pane_g1_ParamLimits

0xe1b9,	// (0x0003db90) cell_graphic2_pane_g1

0xe1c6,	// (0x0003db9d) cell_graphic2_pane_g2_ParamLimits

0xe1c6,	// (0x0003db9d) cell_graphic2_pane_g2

0xe1d3,	// (0x0003dbaa) cell_graphic2_pane_g3_ParamLimits

0xe1d3,	// (0x0003dbaa) cell_graphic2_pane_g3

0xe1e0,	// (0x0003dbb7) cell_graphic2_pane_g4_ParamLimits

0xe1e0,	// (0x0003dbb7) cell_graphic2_pane_g4

0xe1ed,	// (0x0003dbc4) cell_graphic2_pane_g5_ParamLimits

0xe1ed,	// (0x0003dbc4) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0003f768) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0003f768) cell_graphic2_pane_g

0xe205,	// (0x0003dbdc) cell_graphic2_pane_t1_ParamLimits

0xe205,	// (0x0003dbdc) cell_graphic2_pane_t1

0x99ea,	// (0x000393c1) grid_highlight_pane_cp11_ParamLimits

0x99ea,	// (0x000393c1) grid_highlight_pane_cp11

0x2349,	// (0x00031d20) bg_button_pane_cp05

0xe23b,	// (0x0003dc12) cell_graphic2_control_pane_g1

0xbfc1,	// (0x0003b998) bg_touch_area_indi_pane_g1

0xe263,	// (0x0003dc3a) aid_cmod_rocker_key_size

0xe26d,	// (0x0003dc44) aid_cmode_itu_key_size

0xe277,	// (0x0003dc4e) main_cmode_video_pane

0xe281,	// (0x0003dc58) main_comp_mode_itu_pane

0xe28d,	// (0x0003dc64) main_comp_mode_rocker_pane

0xe299,	// (0x0003dc70) cell_cmode_rocker_pane_ParamLimits

0xe299,	// (0x0003dc70) cell_cmode_rocker_pane

0xe2ad,	// (0x0003dc84) cell_cmode_itu_pane_ParamLimits

0xe2ad,	// (0x0003dc84) cell_cmode_itu_pane

0x2858,	// (0x0003222f) bg_button_pane_cp06_ParamLimits

0x2858,	// (0x0003222f) bg_button_pane_cp06

0xc23c,	// (0x0003bc13) cell_cmode_rocker_pane_g1_ParamLimits

0xc23c,	// (0x0003bc13) cell_cmode_rocker_pane_g1

0xd7cb,	// (0x0003d1a2) cell_cmode_rocker_pane_g2_ParamLimits

0xd7cb,	// (0x0003d1a2) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0003f778) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0003f778) cell_cmode_rocker_pane_g

0x21a6,	// (0x00031b7d) bg_button_pane_cp07

0xe2c4,	// (0x0003dc9b) cell_cmode_itu_pane_g1

0xe2cd,	// (0x0003dca4) cell_cmode_itu_pane_t1

0xe2db,	// (0x0003dcb2) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0003f77d) cell_cmode_itu_pane_t

0xd9f8,	// (0x0003d3cf) aid_touch_ctrl_left

0xda00,	// (0x0003d3d7) aid_touch_ctrl_right

0x21a6,	// (0x00031b7d) compa_mode_pane

0xe2e9,	// (0x0003dcc0) aid_cmod_rocker_key_size_cp

0xe2f3,	// (0x0003dcca) aid_cmode_itu_key_size_cp

0xe2fd,	// (0x0003dcd4) compa_mode_pane_g1

0xe305,	// (0x0003dcdc) compa_mode_pane_g2

0xe30d,	// (0x0003dce4) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0003f782) compa_mode_pane_g

0xe315,	// (0x0003dcec) main_comp_mode_itu_pane_cp

0xe31d,	// (0x0003dcf4) main_comp_mode_rocker_pane_cp

0xe325,	// (0x0003dcfc) cell_cmode_itu_pane_cp_ParamLimits

0xe325,	// (0x0003dcfc) cell_cmode_itu_pane_cp

0xe33a,	// (0x0003dd11) cell_cmode_rocker_pane_cp_ParamLimits

0xe33a,	// (0x0003dd11) cell_cmode_rocker_pane_cp

0x2858,	// (0x0003222f) bg_button_pane_cp06_cp_ParamLimits

0x2858,	// (0x0003222f) bg_button_pane_cp06_cp

0xc23c,	// (0x0003bc13) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc23c,	// (0x0003bc13) cell_cmode_rocker_pane_g1_cp

0xbfc1,	// (0x0003b998) cell_cmode_rocker_pane_g2_cp

0x21a6,	// (0x00031b7d) bg_button_pane_cp07_cp

0xe34c,	// (0x0003dd23) cell_cmode_itu_pane_g1_cp

0xe355,	// (0x0003dd2c) cell_cmode_itu_pane_t1_cp

0xe355,	// (0x0003dd2c) cell_cmode_itu_pane_t2_cp

0xaec1,	// (0x0003a898) settings_code_pane_cp2

0x2216,	// (0x00031bed) bg_popup_window_pane_cp3_ParamLimits

0x255d,	// (0x00031f34) heading_pane_cp3_ParamLimits

0x256c,	// (0x00031f43) listscroll_popup_graphic_pane_ParamLimits

0x7b0d,	// (0x000374e4) fep_hwr_aid_pane_ParamLimits

0x80fd,	// (0x00037ad4) aid_touch_sctrl_top_ParamLimits

0x8118,	// (0x00037aef) sctrl_sk_top_pane_g1_ParamLimits

0x7d7a,	// (0x00037751) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0003f6b8) sctrl_sk_top_pane_g_ParamLimits

0x8125,	// (0x00037afc) sctrl_sk_top_pane_t1_ParamLimits

0x80fd,	// (0x00037ad4) aid_touch_sctrl_bottom_ParamLimits

0x8125,	// (0x00037afc) sctrl_sk_bottom_pane_t1_ParamLimits

0xd93d,	// (0x0003d314) aid_area_touch_clock

0x8318,	// (0x00037cef) aid_vkb2_area_top_pane_cell_ParamLimits

0x8318,	// (0x00037cef) aid_vkb2_area_top_pane_cell

0x8467,	// (0x00037e3e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8467,	// (0x00037e3e) aid_vkb2_area_bottom_pane_cell

0xdecb,	// (0x0003d8a2) popup_char_count_window

0xe363,	// (0x0003dd3a) popup_char_count_window_g1

0xe36c,	// (0x0003dd43) popup_char_count_window_g2

0xe375,	// (0x0003dd4c) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0003f789) popup_char_count_window_g

0xe37e,	// (0x0003dd55) popup_char_count_window_t1

0x81ce,	// (0x00037ba5) popup_fep_char_preview_window_ParamLimits

0x81ce,	// (0x00037ba5) popup_fep_char_preview_window

0x8336,	// (0x00037d0d) vkb2_top_candi_pane_ParamLimits

0x8336,	// (0x00037d0d) vkb2_top_candi_pane

0xe38c,	// (0x0003dd63) cell_vkb2_top_candi_pane_ParamLimits

0xe38c,	// (0x0003dd63) cell_vkb2_top_candi_pane

0x8752,	// (0x00038129) bg_popup_fep_char_preview_window_ParamLimits

0x8752,	// (0x00038129) bg_popup_fep_char_preview_window

0x8760,	// (0x00038137) popup_fep_char_preview_window_t1_ParamLimits

0x8760,	// (0x00038137) popup_fep_char_preview_window_t1

0xe3da,	// (0x0003ddb1) bg_popup_fep_char_preview_window_g1

0xe3e2,	// (0x0003ddb9) bg_popup_fep_char_preview_window_g2

0xe3ea,	// (0x0003ddc1) bg_popup_fep_char_preview_window_g3

0xe3f2,	// (0x0003ddc9) bg_popup_fep_char_preview_window_g4

0xe3fa,	// (0x0003ddd1) bg_popup_fep_char_preview_window_g5

0xe402,	// (0x0003ddd9) bg_popup_fep_char_preview_window_g6

0xe40a,	// (0x0003dde1) bg_popup_fep_char_preview_window_g7

0xe412,	// (0x0003dde9) bg_popup_fep_char_preview_window_g8

0xe41a,	// (0x0003ddf1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0003f790) bg_popup_fep_char_preview_window_g

0x7d7a,	// (0x00037751) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7d7a,	// (0x00037751) cell_vkb2_top_candi_pane_g1

0x7d88,	// (0x0003775f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d88,	// (0x0003775f) cell_vkb2_top_candi_pane_g2

0xde86,	// (0x0003d85d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xde86,	// (0x0003d85d) cell_vkb2_top_candi_pane_g3

0x87a2,	// (0x00038179) cell_vkb2_top_candi_pane_g4_ParamLimits

0x87a2,	// (0x00038179) cell_vkb2_top_candi_pane_g4

0xc75b,	// (0x0003c132) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc75b,	// (0x0003c132) cell_vkb2_top_candi_pane_g5

0x87c3,	// (0x0003819a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x87c3,	// (0x0003819a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0003f7a5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0003f7a5) cell_vkb2_top_candi_pane_g

0x87d1,	// (0x000381a8) cell_vkb2_top_candi_pane_t1

0x7885,	// (0x0003725c) aid_size_touch_slider_mark_ParamLimits

0x7885,	// (0x0003725c) aid_size_touch_slider_mark

0xe00e,	// (0x0003d9e5) grid_graphic2_catg_pane_ParamLimits

0xe00e,	// (0x0003d9e5) grid_graphic2_catg_pane

0xe0ac,	// (0x0003da83) popup_grid_graphic2_window_t1_ParamLimits

0xe0ac,	// (0x0003da83) popup_grid_graphic2_window_t1

0xe0be,	// (0x0003da95) popup_grid_graphic2_window_t2_ParamLimits

0xe0be,	// (0x0003da95) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0003f75e) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0003f75e) popup_grid_graphic2_window_t

0x2349,	// (0x00031d20) bg_button_pane_cp05_ParamLimits

0xe23b,	// (0x0003dc12) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0003ddf9) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0003ddf9) cell_graphic2_catg_pane

0x21a6,	// (0x00031b7d) bg_button_pane_cp12

0xe434,	// (0x0003de0b) cell_graphic2_catg_pane_g1

0xd909,	// (0x0003d2e0) cell_tb_ext_pane_t1_ParamLimits

0x8584,	// (0x00037f5b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8584,	// (0x00037f5b) vkb2_top_cell_right_narrow_pane

0x859c,	// (0x00037f73) vkb2_top_cell_right_wide_pane_ParamLimits

0x859c,	// (0x00037f73) vkb2_top_cell_right_wide_pane

0x7aff,	// (0x000374d6) bg_vkb2_func_pane_ParamLimits

0x7aff,	// (0x000374d6) bg_vkb2_func_pane

0x860d,	// (0x00037fe4) vkb2_top_cell_left_pane_g1_ParamLimits

0x7aff,	// (0x000374d6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7aff,	// (0x000374d6) bg_vkb2_fuc_pane_cp03

0x866b,	// (0x00038042) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x997e,	// (0x00039355) bg_vkb2_func_pane_g1

0x9986,	// (0x0003935d) bg_vkb2_func_pane_g2

0x9996,	// (0x0003936d) bg_vkb2_func_pane_g3

0x998e,	// (0x00039365) bg_vkb2_func_pane_g4

0x999e,	// (0x00039375) bg_vkb2_func_pane_g5

0x99a6,	// (0x0003937d) bg_vkb2_func_pane_g6

0x99ae,	// (0x00039385) bg_vkb2_func_pane_g7

0x99b6,	// (0x0003938d) bg_vkb2_func_pane_g8

0x9976,	// (0x0003934d) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0003f7b2) bg_vkb2_func_pane_g

0x7aff,	// (0x000374d6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7aff,	// (0x000374d6) bg_vkb2_fuc_pane_cp01

0x860d,	// (0x00037fe4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x860d,	// (0x00037fe4) vkb2_top_cell_right_wide_pane_g1

0x7aff,	// (0x000374d6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7aff,	// (0x000374d6) bg_vkb2_fuc_pane_cp02

0x87ef,	// (0x000381c6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x87ef,	// (0x000381c6) vkb2_top_cell_right_narrow_pane_g1

0xd520,	// (0x0003cef7) aid_touch_area_decrease_ParamLimits

0xd520,	// (0x0003cef7) aid_touch_area_decrease

0xd544,	// (0x0003cf1b) aid_touch_area_increase_ParamLimits

0xd544,	// (0x0003cf1b) aid_touch_area_increase

0xd55c,	// (0x0003cf33) aid_touch_area_mute_ParamLimits

0xd55c,	// (0x0003cf33) aid_touch_area_mute

0xd578,	// (0x0003cf4f) aid_touch_area_slider_ParamLimits

0xd578,	// (0x0003cf4f) aid_touch_area_slider

0xd666,	// (0x0003d03d) popup_slider_window_g4_ParamLimits

0xd666,	// (0x0003d03d) popup_slider_window_g4

0xd67e,	// (0x0003d055) popup_slider_window_g5_ParamLimits

0xd67e,	// (0x0003d055) popup_slider_window_g5

0xd6a0,	// (0x0003d077) popup_slider_window_g6_ParamLimits

0xd6a0,	// (0x0003d077) popup_slider_window_g6

0xd6de,	// (0x0003d0b5) popup_slider_window_t2_ParamLimits

0xd6de,	// (0x0003d0b5) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0003f6ac) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0003f6ac) popup_slider_window_t

0xd6f6,	// (0x0003d0cd) slider_pane_ParamLimits

0xd6f6,	// (0x0003d0cd) slider_pane

0xe43d,	// (0x0003de14) slider_pane_g1_ParamLimits

0xe43d,	// (0x0003de14) slider_pane_g1

0xe451,	// (0x0003de28) slider_pane_g2_ParamLimits

0xe451,	// (0x0003de28) slider_pane_g2

0xe467,	// (0x0003de3e) slider_pane_g3_ParamLimits

0xe467,	// (0x0003de3e) slider_pane_g3

0x0003,

0xfdee,	// (0x0003f7c5) slider_pane_g_ParamLimits

0xfdee,	// (0x0003f7c5) slider_pane_g

0x742f,	// (0x00036e06) popup_tb_float_extension_window_ParamLimits

0x742f,	// (0x00036e06) popup_tb_float_extension_window

0xe493,	// (0x0003de6a) aid_size_cell_tb_float_ext

0x21a6,	// (0x00031b7d) bg_popup_sub_window_cp28

0xe49f,	// (0x0003de76) grid_tb_float_ext_pane

0xe4ab,	// (0x0003de82) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0003de82) cell_tb_float_ext_pane

0xe4c7,	// (0x0003de9e) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0003dea7) grid_highlight_pane_cp12

0x7c54,	// (0x0003762b) cell_last_hwr_side_pane_ParamLimits

0x7c54,	// (0x0003762b) cell_last_hwr_side_pane

0xbfc1,	// (0x0003b998) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0003deb0) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0003f7ce) cell_last_hwr_side_pane_g

0x8533,	// (0x00037f0a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8533,	// (0x00037f0a) vkb2_area_bottom_space_btn_pane

0x7d7a,	// (0x00037751) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf80,	// (0x0003d957) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x87d1,	// (0x000381a8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x880b,	// (0x000381e2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x880b,	// (0x000381e2) vkb2_area_bottom_space_btn_pane_g1

0x8845,	// (0x0003821c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8845,	// (0x0003821c) vkb2_area_bottom_space_btn_pane_g2

0x887b,	// (0x00038252) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x887b,	// (0x00038252) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0003f7d3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0003f7d3) vkb2_area_bottom_space_btn_pane_g

0x7bc4,	// (0x0003759b) cel_fep_hwr_func_pane_ParamLimits

0x7bc4,	// (0x0003759b) cel_fep_hwr_func_pane

0x7c00,	// (0x000375d7) cell_hwr_side_button_pane_ParamLimits

0x7c00,	// (0x000375d7) cell_hwr_side_button_pane

0xd93d,	// (0x0003d314) aid_area_touch_clock_ParamLimits

0x2349,	// (0x00031d20) bg_uniindi_top_pane_ParamLimits

0xd951,	// (0x0003d328) uniindi_top_pane_g1_ParamLimits

0xd967,	// (0x0003d33e) uniindi_top_pane_g2_ParamLimits

0xd973,	// (0x0003d34a) uniindi_top_pane_g3_ParamLimits

0xd984,	// (0x0003d35b) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0003f6e4) uniindi_top_pane_g_ParamLimits

0xd991,	// (0x0003d368) uniindi_top_pane_t1_ParamLimits

0x2349,	// (0x00031d20) bg_vkb2_func_pane_cp01_ParamLimits

0x2349,	// (0x00031d20) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0003deb9) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0003deb9) cel_fep_hwr_func_pane_g1

0x2349,	// (0x00031d20) bg_vkb2_func_pane_cp02_ParamLimits

0x2349,	// (0x00031d20) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0003deb9) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0003deb9) cell_hwr_side_button_pane_g1

0x97f9,	// (0x000391d0) status_pane_g4_ParamLimits

0x97f9,	// (0x000391d0) status_pane_g4

0x9813,	// (0x000391ea) status_pane_t1

0xbd74,	// (0x0003b74b) form2_midp_gauge_slider_cont_pane

0xbd7c,	// (0x0003b753) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd8e,	// (0x0003b765) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda0,	// (0x0003b777) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0003f4a4) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb2,	// (0x0003b789) form2_midp_slider_pane_ParamLimits

0x8196,	// (0x00037b6d) aid_size_cell_func_vkb2_ParamLimits

0x8196,	// (0x00037b6d) aid_size_cell_func_vkb2

0xe47f,	// (0x0003de56) slider_pane_g4_ParamLimits

0xe47f,	// (0x0003de56) slider_pane_g4

0x88c5,	// (0x0003829c) form2_midp_gauge_slider_pane_t2_cp01

0x88d3,	// (0x000382aa) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x88d3,	// (0x000382aa) form2_midp_gauge_slider_pane_t3_cp01

0x88f0,	// (0x000382c7) form2_midp_slider_pane_cp01

0x21a6,	// (0x00031b7d) navi_smil_pane

0xe51b,	// (0x0003def2) navi_smil_pane_g1

0xe523,	// (0x0003defa) navi_smil_pane_t1

0xe4f0,	// (0x0003dec7) form2_midp_slider_pane_g1

0xe4f9,	// (0x0003ded0) form2_midp_slider_pane_g2

0xe501,	// (0x0003ded8) form2_midp_slider_pane_g3

0xe4f0,	// (0x0003dec7) form2_midp_slider_pane_g4

0xe509,	// (0x0003dee0) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0003f7dc) form2_midp_slider_pane_g

0x88b5,	// (0x0003828c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88b5,	// (0x0003828c) vkb2_area_bottom_space_btn_pane_g4

0x9618,	// (0x00038fef) lc0_navi_pane_ParamLimits

0x9618,	// (0x00038fef) lc0_navi_pane

0x9694,	// (0x0003906b) lc0_stat_indi_pane_ParamLimits

0x9694,	// (0x0003906b) lc0_stat_indi_pane

0x96ab,	// (0x00039082) ls0_title_pane_ParamLimits

0x96ab,	// (0x00039082) ls0_title_pane

0x2858,	// (0x0003222f) bg_popup_sub_pane_cp14_ParamLimits

0xd924,	// (0x0003d2fb) list_uniindi_pane_ParamLimits

0xd930,	// (0x0003d307) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0003d3a7) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x0003d3ba) list_single_uniindi_pane_t1_ParamLimits

0x88f9,	// (0x000382d0) lc0_stat_clock_pane_ParamLimits

0x88f9,	// (0x000382d0) lc0_stat_clock_pane

0xe531,	// (0x0003df08) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0003df08) lc0_stat_indi_pane_g1

0xe53e,	// (0x0003df15) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0003df15) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0003f7e7) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0003f7e7) lc0_stat_indi_pane_g

0x8906,	// (0x000382dd) lc0_uni_indicator_pane_ParamLimits

0x8906,	// (0x000382dd) lc0_uni_indicator_pane

0xe54b,	// (0x0003df22) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0003df22) ls0_title_pane_g1

0xe55f,	// (0x0003df36) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0003df36) ls0_title_pane_t1

0x8913,	// (0x000382ea) lc0_uni_indicator_pane_g1_ParamLimits

0x8913,	// (0x000382ea) lc0_uni_indicator_pane_g1

0xe595,	// (0x0003df6c) lc0_stat_clock_pane_t1

0x5673,	// (0x0003504a) main_ai5_pane

0xe5a3,	// (0x0003df7a) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0003df7a) ai5_sk_pane

0xe5b0,	// (0x0003df87) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0003df87) cell_ai5_widget_pane

0xe64f,	// (0x0003e026) aid_size_cell_widget_grid

0xe65d,	// (0x0003e034) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0003e034) bg_ai5_widget_pane

0xe6d9,	// (0x0003e0b0) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0003e0c4) cell_ai5_widget_pane_g3

0xe707,	// (0x0003e0de) cell_ai5_widget_pane_g4

0xe717,	// (0x0003e0ee) cell_ai5_widget_pane_g5

0xe727,	// (0x0003e0fe) cell_ai5_widget_pane_g6

0xe733,	// (0x0003e10a) cell_ai5_widget_pane_g7

0xe79f,	// (0x0003e176) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0003e176) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0003e193) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0003e193) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0003e1ab) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0003e1ab) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0003e1c3) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0003e1c3) cell_ai5_widget_pane_t4

0xe812,	// (0x0003e1e9) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0003e1e9) cell_ai5_widget_pane_t5

0xe832,	// (0x0003e209) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0003e209) cell_ai5_widget_pane_t6

0xe844,	// (0x0003e21b) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0003e21b) cell_ai5_widget_pane_t7

0xe863,	// (0x0003e23a) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0003e23a) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0003f807) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0003f807) cell_ai5_widget_pane_t

0xe8e7,	// (0x0003e2be) grid_ai5_widget_pane

0x2858,	// (0x0003222f) highlight_cell_ai5_widget_pane_ParamLimits

0x2858,	// (0x0003222f) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0003e2cc) ai5_sk_left_pane

0xe8ff,	// (0x0003e2d6) ai5_sk_middle_pane

0xe909,	// (0x0003e2e0) ai5_sk_right_pane

0xe913,	// (0x0003e2ea) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0003e2ea) bg_ai5_widget_pane_g1

0xe91f,	// (0x0003e2f6) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0003e2f6) bg_ai5_widget_pane_g2

0xe92b,	// (0x0003e302) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0003e302) bg_ai5_widget_pane_g3

0xe937,	// (0x0003e30e) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0003e30e) bg_ai5_widget_pane_g4

0xe943,	// (0x0003e31a) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0003e31a) bg_ai5_widget_pane_g5

0xe94f,	// (0x0003e326) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0003e326) bg_ai5_widget_pane_g6

0xe95b,	// (0x0003e332) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0003e332) bg_ai5_widget_pane_g7

0xe967,	// (0x0003e33e) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0003e33e) bg_ai5_widget_pane_g8

0xe973,	// (0x0003e34a) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0003e34a) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0003f820) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0003f820) bg_ai5_widget_pane_g

0xe9ab,	// (0x0003e382) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0003e382) cell_shortcut_ai5_widget_pane

0x9117,	// (0x00038aee) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0003e395) cell_grid_ai5_widget_pane_g1

0x9117,	// (0x00038aee) highlight_cell_shortcut_ai5_widget_pane

0x997e,	// (0x00039355) ai5_sk_left_pane_g1

0xe9c7,	// (0x0003e39e) ai5_sk_left_pane_g2

0xe9cf,	// (0x0003e3a6) ai5_sk_left_pane_g3

0xe9d7,	// (0x0003e3ae) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0003f833) ai5_sk_left_pane_g

0xe9df,	// (0x0003e3b6) ai5_sk_left_pane_t1

0x9986,	// (0x0003935d) ai5_sk_right_pane_g1

0xe9ed,	// (0x0003e3c4) ai5_sk_right_pane_g2

0xe9f5,	// (0x0003e3cc) ai5_sk_right_pane_g3

0xe9fd,	// (0x0003e3d4) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0003f83c) ai5_sk_right_pane_g

0xea05,	// (0x0003e3dc) ai5_sk_right_pane_t1

0x9986,	// (0x0003935d) ai5_sk_middle_pane_g1

0x997e,	// (0x00039355) ai5_sk_middle_pane_g2

0x999e,	// (0x00039375) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0003e3cc) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0003e3a6) ai5_sk_middle_pane_g5

0xea13,	// (0x0003e3ea) ai5_sk_middle_pane_g6

0xea1b,	// (0x0003e3f2) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0003f845) ai5_sk_middle_pane_g

0x949e,	// (0x00038e75) aid_touch_area_size_lc0_ParamLimits

0x949e,	// (0x00038e75) aid_touch_area_size_lc0

0x7da9,	// (0x00037780) cell_hwr_candidate_pane_t1_ParamLimits

0x94bc,	// (0x00038e93) aid_touch_navi_pane

0x97ab,	// (0x00039182) status_dt_navi_pane_ParamLimits

0x97ab,	// (0x00039182) status_dt_navi_pane

0x97b8,	// (0x0003918f) status_dt_sta_pane_ParamLimits

0x97b8,	// (0x0003918f) status_dt_sta_pane

0xea23,	// (0x0003e3fa) dt_sta_controll_pane

0xea30,	// (0x0003e407) dt_sta_indi_pane

0xea41,	// (0x0003e418) dt_sta_title_pane

0x2349,	// (0x00031d20) bg_dt_sta_indi_pane_ParamLimits

0x2349,	// (0x00031d20) bg_dt_sta_indi_pane

0xea54,	// (0x0003e42b) dt_sta_battery_pane

0xea5c,	// (0x0003e433) dt_sta_indi_pane_g1

0xea65,	// (0x0003e43c) dt_sta_indi_pane_g2

0xea6e,	// (0x0003e445) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0003f854) dt_sta_indi_pane_g

0xea77,	// (0x0003e44e) dt_sta_signal_pane

0x2858,	// (0x0003222f) bg_dt_sta_title_pane_ParamLimits

0x2858,	// (0x0003222f) bg_dt_sta_title_pane

0xea80,	// (0x0003e457) dt_sta_title_pane_g1

0xea88,	// (0x0003e45f) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0003e45f) dt_sta_title_pane_t1

0x21a6,	// (0x00031b7d) bg_dt_sta_control_pane

0xea9d,	// (0x0003e474) dt_sta_controll_pane_g1

0xeaa6,	// (0x0003e47d) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0003e486) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0003e48f) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0003f85b) bg_dt_sta_title_pane_g

0xbfc1,	// (0x0003b998) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0003e498) dt_sta_signal_pane_g1

0xeac9,	// (0x0003e4a0) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0003f862) dt_sta_signal_pane_g

0xead1,	// (0x0003e4a8) dt_sta_battery_pane_g1

0xeada,	// (0x0003e4b1) dt_sta_battery_pane_t1

0xbfc1,	// (0x0003b998) bg_dt_sta_control_pane_g1

0x6991,	// (0x00036368) fep_china_uni_eep_pane

0x6999,	// (0x00036370) fep_china_uni_entry_pane_ParamLimits

0x69a9,	// (0x00036380) popup_fep_china_uni_window_g1_ParamLimits

0x69b9,	// (0x00036390) popup_fep_china_uni_window_g2_ParamLimits

0x69b9,	// (0x00036390) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003f0cf) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003f0cf) popup_fep_china_uni_window_g

0xeae9,	// (0x0003e4c0) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0003e4c8) fep_china_uni_eep_pane_t1

0xe512,	// (0x0003dee9) aid_touch_area_size_smil_player

0x9610,	// (0x00038fe7) lc0_clock_pane

0x9807,	// (0x000391de) status_pane_g5_ParamLimits

0x9807,	// (0x000391de) status_pane_g5

0x70b4,	// (0x00036a8b) popup_keymap_window

0x97cd,	// (0x000391a4) status_icon_pane

0xe6ed,	// (0x0003e0c4) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0003e0de) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0003e0ee) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0003e116) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0003e116) cell_ai5_widget_pane_g8

0xe753,	// (0x0003e12a) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0003e12a) cell_ai5_widget_pane_g9

0xe767,	// (0x0003e13e) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0003e13e) cell_ai5_widget_pane_g10

0xeb00,	// (0x0003e4d7) status_icon_pane_g1

0x21a6,	// (0x00031b7d) bg_popup_sub_pane_cp13

0xeb08,	// (0x0003e4df) popup_keymap_window_t1

0x93ef,	// (0x00038dc6) control_pane_g6_ParamLimits

0x93ef,	// (0x00038dc6) control_pane_g6

0x93fc,	// (0x00038dd3) control_pane_g7_ParamLimits

0x93fc,	// (0x00038dd3) control_pane_g7

0x9409,	// (0x00038de0) control_pane_g8_ParamLimits

0x9409,	// (0x00038de0) control_pane_g8

0xea23,	// (0x0003e3fa) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0003e407) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0003e418) dt_sta_title_pane_ParamLimits

0x279a,	// (0x00032171) aid_size_touch_scroll_bar_cale

0x5750,	// (0x00035127) popup_discreet_window_ParamLimits

0x5750,	// (0x00035127) popup_discreet_window

0x57de,	// (0x000351b5) popup_sk_window

0x9fdc,	// (0x000399b3) bg_popup_sub_pane_cp28_ParamLimits

0x9fdc,	// (0x000399b3) bg_popup_sub_pane_cp28

0xeb16,	// (0x0003e4ed) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0003e4ed) popup_discreet_window_g1

0xeb36,	// (0x0003e50d) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0003e50d) popup_discreet_window_t1

0xeb54,	// (0x0003e52b) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0003e52b) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0003f867) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0003f867) popup_discreet_window_t

0x8926,	// (0x000382fd) popup_sk_window_g1

0x8930,	// (0x00038307) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0003f86e) popup_sk_window_g

0x8938,	// (0x0003830f) popup_sk_window_t1

0x8946,	// (0x0003831d) popup_sk_window_t1_copy1

0xe6d9,	// (0x0003e0b0) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0003e24c) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0003e24c) cell_ai5_widget_pane_t9

0x21a6,	// (0x00031b7d) main_fep_fshwr2_pane

0x8954,	// (0x0003832b) aid_fshwr2_btn_pane

0x8964,	// (0x0003833b) aid_fshwr2_syb_pane

0x8978,	// (0x0003834f) aid_fshwr2_txt_pane

0x8988,	// (0x0003835f) fshwr2_func_candi_pane

0x89a8,	// (0x0003837f) fshwr2_hwr_syb_pane

0x89be,	// (0x00038395) fshwr2_icf_pane

0x5673,	// (0x0003504a) fshwr2_icf_bg_pane

0x89f2,	// (0x000383c9) fshwr2_icf_pane_t1_ParamLimits

0x89f2,	// (0x000383c9) fshwr2_icf_pane_t1

0x6791,	// (0x00036168) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0003e57d) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0003e57d) fshwr2_func_candi_row_pane

0x8a0a,	// (0x000383e1) cell_fshwr2_syb_pane_ParamLimits

0x8a0a,	// (0x000383e1) cell_fshwr2_syb_pane

0x8a2b,	// (0x00038402) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8a2b,	// (0x00038402) fshwr2_hwr_syb_pane_g1

0x5673,	// (0x0003504a) bg_popup_call_pane_cp01

0x8a39,	// (0x00038410) fshwr2_func_candi_cell_pane_ParamLimits

0x8a39,	// (0x00038410) fshwr2_func_candi_cell_pane

0xa653,	// (0x0003a02a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa653,	// (0x0003a02a) fshwr2_func_candi_cell_bg_pane

0x8a8a,	// (0x00038461) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8a8a,	// (0x00038461) fshwr2_func_candi_cell_pane_g1

0x8ab5,	// (0x0003848c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8ab5,	// (0x0003848c) fshwr2_func_candi_cell_pane_t1

0x5673,	// (0x0003504a) bg_button_pane_cp08

0x943e,	// (0x00038e15) cell_fshwr2_syb_bg_pane

0x8ac8,	// (0x0003849f) cell_fshwr2_syb_bg_pane_g1

0x8adc,	// (0x000384b3) cell_fshwr2_syb_bg_pane_t1

0x2858,	// (0x0003222f) main_tmo_pane

0xab00,	// (0x0003a4d7) uni_indicator_pane_g1_ParamLimits

0xab16,	// (0x0003a4ed) uni_indicator_pane_g2_ParamLimits

0xab2c,	// (0x0003a503) uni_indicator_pane_g3_ParamLimits

0xab3f,	// (0x0003a516) uni_indicator_pane_g4_ParamLimits

0xab3f,	// (0x0003a516) uni_indicator_pane_g4

0xab53,	// (0x0003a52a) uni_indicator_pane_g5_ParamLimits

0xab53,	// (0x0003a52a) uni_indicator_pane_g5

0xab53,	// (0x0003a52a) uni_indicator_pane_g6_ParamLimits

0xab53,	// (0x0003a52a) uni_indicator_pane_g6

0xf8fc,	// (0x0003f2d3) uni_indicator_pane_g_ParamLimits

0xd4f0,	// (0x0003cec7) popup_tmo_note_window_ParamLimits

0xd4f0,	// (0x0003cec7) popup_tmo_note_window

0x8178,	// (0x00037b4f) fshwr2_bg_pane

0x8aa6,	// (0x0003847d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8aa6,	// (0x0003847d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0003f873) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0003f873) fshwr2_func_candi_cell_pane_g

0x7d62,	// (0x00037739) bg_popup_window_pane_cp01

0x8af2,	// (0x000384c9) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0003e5a0) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0003e5a0) bg_popup_window_pane_cp22

0xebd7,	// (0x0003e5ae) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0003e5ae) listscroll_tmo_link_pane

0xec17,	// (0x0003e5ee) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0003e5ee) popup_tmo_note_window_g1

0xec24,	// (0x0003e5fb) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0003e5fb) tmo_note_info_pane

0xec3e,	// (0x0003e615) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x0003e615) list_tmo_note_info_pane_g1

0xec55,	// (0x0003e62c) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0003e62c) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0003f878) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0003f878) list_tmo_note_info_pane_g

0xec71,	// (0x0003e648) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x0003e648) list_tmo_note_info_text_pane

0xecf6,	// (0x0003e6cd) list_tmo_link_pane

0xed03,	// (0x0003e6da) scroll_pane_cp20

0xed10,	// (0x0003e6e7) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x0003e6e7) list_single_tmo_link_pane

0xed20,	// (0x0003e6f7) list_single_tmo_link_pane_t1

0xed2e,	// (0x0003e705) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x0003e705) list_tmo_note_info_text_pane_t1

0x625f,	// (0x00035c36) aid_size_touch_scroll_bar_cp01_ParamLimits

0x625f,	// (0x00035c36) aid_size_touch_scroll_bar_cp01

0x6189,	// (0x00035b60) aid_size_touch_slider_marker

0x57c6,	// (0x0003519d) popup_settings_window_ParamLimits

0x57c6,	// (0x0003519d) popup_settings_window

0x4160,	// (0x00033b37) popup_candi_list_indi_window

0x94bc,	// (0x00038e93) aid_touch_navi_pane_ParamLimits

0x80d1,	// (0x00037aa8) rs_clock_indi_pane

0x80da,	// (0x00037ab1) sctrl_sk_bottom_pane_ParamLimits

0x80eb,	// (0x00037ac2) sctrl_sk_top_pane_ParamLimits

0x81e8,	// (0x00037bbf) popup_fep_tooltip_window

0xe64f,	// (0x0003e026) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0003e09b) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0003e09b) cell_ai5_widget_pane_g1

0xe727,	// (0x0003e0fe) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0003e10a) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0003f7ec) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0003f7ec) cell_ai5_widget_pane_g

0xe8a4,	// (0x0003e27b) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0003e27b) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0003e2be) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0003e356) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0003e356) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0003e540) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0003e540) popup_discreet_window_t3

0x89da,	// (0x000383b1) popup_fshwr2_char_preview_window_ParamLimits

0x89da,	// (0x000383b1) popup_fshwr2_char_preview_window

0xec8f,	// (0x0003e666) tmo_note_info_pane_t1

0xeca4,	// (0x0003e67b) tmo_note_info_pane_t2

0xecbd,	// (0x0003e694) tmo_note_info_pane_t3

0xecd2,	// (0x0003e6a9) tmo_note_info_pane_t4

0xece4,	// (0x0003e6bb) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0003f87d) tmo_note_info_pane_t

0xecf6,	// (0x0003e6cd) list_tmo_link_pane_ParamLimits

0xed03,	// (0x0003e6da) scroll_pane_cp20_ParamLimits

0x5673,	// (0x0003504a) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0003e71e) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0003e72c) popup_candi_list_indi_window_g1

0xed5e,	// (0x0003e735) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x0003e741) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x0003e756) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x0003e762) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0003f888) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0003e76e) cell_contacts_ai5_widget_pane_t1

0x2858,	// (0x0003222f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x0003e7e5) settings_container_pane

0x9117,	// (0x00038aee) listscroll_set_pane_copy1

0xb6f2,	// (0x0003b0c9) scroll_pane_cp121_copy1

0xee1a,	// (0x0003e7f1) set_content_pane_copy1

0xee22,	// (0x0003e7f9) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x0003e7f9) aid_height_set_list_copy1

0xad53,	// (0x0003a72a) aid_size_parent_copy1_ParamLimits

0xad53,	// (0x0003a72a) aid_size_parent_copy1

0xee2e,	// (0x0003e805) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x0003e805) button_value_adjust_pane_cp6_copy1

0x943e,	// (0x00038e15) list_highlight_pane_cp2_copy1_ParamLimits

0x943e,	// (0x00038e15) list_highlight_pane_cp2_copy1

0xee42,	// (0x0003e819) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0003e819) list_set_pane_copy1

0xeda9,	// (0x0003e780) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x0003e780) main_pane_set_t1_copy1

0xede3,	// (0x0003e7ba) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x0003e7ba) main_pane_set_t2_copy1

0xef03,	// (0x0003e8da) main_pane_set_t3_copy1

0xef11,	// (0x0003e8e8) main_pane_set_t4_copy1

0xee02,	// (0x0003e7d9) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x0003e7d9) set_content_pane_g1_copy1

0xef1f,	// (0x0003e8f6) setting_code_pane_copy1

0xef27,	// (0x0003e8fe) setting_slider_graphic_pane_copy1

0xef27,	// (0x0003e8fe) setting_slider_pane_copy1

0xef2f,	// (0x0003e906) setting_text_pane_copy1

0xef2f,	// (0x0003e906) setting_volume_pane_copy1

0xef1f,	// (0x0003e8f6) settings_code_pane_cp2_copy1

0xef37,	// (0x0003e90e) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x0003e90e) settings_code_pane_cp_copy1

0x8afb,	// (0x000384d2) volume_set_pane_copy1

0xef4b,	// (0x0003e922) volume_set_pane_g10_copy1

0xef57,	// (0x0003e92e) volume_set_pane_g1_copy1

0xef61,	// (0x0003e938) volume_set_pane_g2_copy1

0xef6b,	// (0x0003e942) volume_set_pane_g3_copy1

0xef75,	// (0x0003e94c) volume_set_pane_g4_copy1

0xef7f,	// (0x0003e956) volume_set_pane_g5_copy1

0xef89,	// (0x0003e960) volume_set_pane_g6_copy1

0xef93,	// (0x0003e96a) volume_set_pane_g7_copy1

0xef9d,	// (0x0003e974) volume_set_pane_g8_copy1

0xefa7,	// (0x0003e97e) volume_set_pane_g9_copy1

0x2216,	// (0x00031bed) bg_set_opt_pane_cp_copy1_ParamLimits

0x2216,	// (0x00031bed) bg_set_opt_pane_cp_copy1

0x8b07,	// (0x000384de) setting_slider_pane_t1_copy1_ParamLimits

0x8b07,	// (0x000384de) setting_slider_pane_t1_copy1

0x8b26,	// (0x000384fd) setting_slider_pane_t2_copy1_ParamLimits

0x8b26,	// (0x000384fd) setting_slider_pane_t2_copy1

0x8b40,	// (0x00038517) setting_slider_pane_t3_copy1_ParamLimits

0x8b40,	// (0x00038517) setting_slider_pane_t3_copy1

0x8b58,	// (0x0003852f) slider_set_pane_copy1_ParamLimits

0x8b58,	// (0x0003852f) slider_set_pane_copy1

0x28b0,	// (0x00032287) set_opt_bg_pane_g1_copy2

0x28b8,	// (0x0003228f) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x0003e98a) set_opt_bg_pane_g3_copy2

0x28c8,	// (0x0003229f) set_opt_bg_pane_g4_copy2

0x28d0,	// (0x000322a7) set_opt_bg_pane_g5_copy2

0x28d8,	// (0x000322af) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x0003e994) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0003e99e) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x0003e9a8) set_opt_bg_pane_g9_copy2

0x8b6e,	// (0x00038545) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b6e,	// (0x00038545) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x0003e9b2) slider_set_pane_g1_copy1

0x8b82,	// (0x00038559) slider_set_pane_g2_copy1

0x78a5,	// (0x0003727c) slider_set_pane_g3_copy1_ParamLimits

0x78a5,	// (0x0003727c) slider_set_pane_g3_copy1

0x78b9,	// (0x00037290) slider_set_pane_g4_copy1_ParamLimits

0x78b9,	// (0x00037290) slider_set_pane_g4_copy1

0x78d1,	// (0x000372a8) slider_set_pane_g5_copy1_ParamLimits

0x78d1,	// (0x000372a8) slider_set_pane_g5_copy1

0x78a5,	// (0x0003727c) slider_set_pane_g6_copy1_ParamLimits

0x78a5,	// (0x0003727c) slider_set_pane_g6_copy1

0x8b8a,	// (0x00038561) slider_set_pane_g7_copy1_ParamLimits

0x8b8a,	// (0x00038561) slider_set_pane_g7_copy1

0x21ba,	// (0x00031b91) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x0003e9bb) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x0003e9c4) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x0003e9d4) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x0003e9e4) slider_set_pane_cp_copy1

0xf01d,	// (0x0003e9f4) input_focus_pane_cp1_copy1

0xf026,	// (0x0003e9fd) list_set_text_pane_copy1

0xf02e,	// (0x0003ea05) setting_text_pane_g1_copy1

0x47f6,	// (0x000341cd) set_text_pane_t1_copy1

0xf01d,	// (0x0003e9f4) input_focus_pane_cp2_copy1

0xf02e,	// (0x0003ea05) setting_code_pane_g1_copy1

0xf037,	// (0x0003ea0e) setting_code_pane_t1_copy1

0xb4f7,	// (0x0003aece) list_set_graphic_pane_copy1

0x21ba,	// (0x00031b91) bg_set_opt_pane_cp4_copy1

0x8e06,	// (0x000387dd) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e06,	// (0x000387dd) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0003ea1c) list_set_graphic_pane_g2_copy1

0x8e1e,	// (0x000387f5) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e1e,	// (0x000387f5) list_set_graphic_pane_t1_copy1

0xbfc1,	// (0x0003b998) rs_clock_indi_pane_g1

0xf04d,	// (0x0003ea24) rs_clock_indi_pane_t1

0xf05b,	// (0x0003ea32) rs_indi_pane

0xf063,	// (0x0003ea3a) rs_indi_pane_g1

0xf06c,	// (0x0003ea43) rs_indi_pane_g2

0xed55,	// (0x0003e72c) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0003f88f) rs_indi_pane_g

0x9117,	// (0x00038aee) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0003ea4c) popup_fep_tooltip_window_t1

0xcc9e,	// (0x0003c675) popup_note2_window_g2_ParamLimits

0xcc9e,	// (0x0003c675) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0003f61c) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0003f61c) popup_note2_window_g

0xd1a6,	// (0x0003cb7d) bg_popup_sub_pane_cp11_ParamLimits

0xd1b3,	// (0x0003cb8a) cell_ai3_links_pane_g1_ParamLimits

0xd1ca,	// (0x0003cba1) cell_ai3_links_pane_t1

0x47f6,	// (0x000341cd) set_text_pane_t1_copy1_ParamLimits

0x9019,	// (0x000389f0) cell_graphic_popup_pane_cp2_ParamLimits

0x9019,	// (0x000389f0) cell_graphic_popup_pane_cp2

0xf083,	// (0x0003ea5a) cell_graphic_popup_pane_g1_cp2

0x25ad,	// (0x00031f84) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x0003ea62) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x0003ea6a) cell_graphic_popup_pane_t2_cp2

0x25be,	// (0x00031f95) grid_highlight_pane_cp3_cp2

0x2b6c,	// (0x00032543) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2858,	// (0x0003222f) main_tmo_pane_ParamLimits

0xd4e4,	// (0x0003cebb) popup_tmo_big_image_note_window

0xe6b3,	// (0x0003e08a) cell_ai5_widget_list_pane

0xe6bb,	// (0x0003e092) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x0003e666) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0003e67b) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x0003e694) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x0003e6a9) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x0003e6bb) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0003f87d) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x0003e7e5) settings_container_pane_ParamLimits

0xf015,	// (0x0003e9ec) indicator_popup_pane_cp5

0xf015,	// (0x0003e9ec) indicator_popup_pane_cp6

0xb4f7,	// (0x0003aece) list_set_graphic_pane_copy1_ParamLimits

0x21a6,	// (0x00031b7d) bg_popup_window_pane_cp23

0xf0a1,	// (0x0003ea78) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x0003ea84) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x0003ea94) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x0003eaa4) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0003f896) popup_tmo_big_image_note_window_t

0xbfc1,	// (0x0003b998) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x0003eab4) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x0003eac2) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x0003eac2) cell_ai5_widget_list_row_pane

0xf103,	// (0x0003eada) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x0003eada) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x0003eae7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x0003eae7) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x0003eb12) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x0003eb12) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0003f89d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0003f89d) cell_ai5_widget_list_row_pane_t

0x5673,	// (0x0003504a) main_fep_vtchi_ss_pane

0xf18b,	// (0x0003eb62) popup_fep_char_pre_window

0xf193,	// (0x0003eb6a) popup_fep_ituss_window

0xf1bf,	// (0x0003eb96) popup_fep_vkbss_window

0x943e,	// (0x00038e15) grid_vkbss_keypad_pane_ParamLimits

0x943e,	// (0x00038e15) grid_vkbss_keypad_pane

0xf201,	// (0x0003ebd8) ituss_keypad_pane

0x8baa,	// (0x00038581) aid_vkbss_key_offset_ParamLimits

0x8baa,	// (0x00038581) aid_vkbss_key_offset

0x8bb6,	// (0x0003858d) cell_vkbss_key_pane_ParamLimits

0x8bb6,	// (0x0003858d) cell_vkbss_key_pane

0xf20d,	// (0x0003ebe4) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x0003ebe4) bg_cell_vkbss_key_g1

0xf219,	// (0x0003ebf0) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x0003ebf0) cell_vkbss_key_3p_pane

0xf24f,	// (0x0003ec26) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x0003ec26) cell_vkbss_key_g1

0xf285,	// (0x0003ec5c) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0003ec5c) cell_vkbss_key_t1

0x8c18,	// (0x000385ef) cell_ituss_key_pane_ParamLimits

0x8c18,	// (0x000385ef) cell_ituss_key_pane

0xf2e1,	// (0x0003ecb8) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x0003ecb8) bg_cell_ituss_key_g1

0xf2ed,	// (0x0003ecc4) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x0003ecc4) cell_ituss_key_pane_g1

0x8c29,	// (0x00038600) cell_ituss_key_pane_g2_ParamLimits

0x8c29,	// (0x00038600) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0003f8a4) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0003f8a4) cell_ituss_key_pane_g

0x8cad,	// (0x00038684) cell_ituss_key_t1_ParamLimits

0x8cad,	// (0x00038684) cell_ituss_key_t1

0x8ce7,	// (0x000386be) cell_ituss_key_t2_ParamLimits

0x8ce7,	// (0x000386be) cell_ituss_key_t2

0x8d19,	// (0x000386f0) cell_ituss_key_t3_ParamLimits

0x8d19,	// (0x000386f0) cell_ituss_key_t3

0x8d4a,	// (0x00038721) cell_ituss_key_t4_ParamLimits

0x8d4a,	// (0x00038721) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f8b1) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f8b1) cell_ituss_key_t

0xf313,	// (0x0003ecea) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x0003ecf2) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x0003ecfa) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f8bc) cell_vkbss_key_3p_pane_g

0x9117,	// (0x00038aee) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x0003ed02) popup_fep_char_pre_window_t1

0xe63c,	// (0x0003e013) main_ai5_sk_pane

0xed5e,	// (0x0003e735) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x0003e741) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x0003e756) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x0003e762) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0003f888) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0003e76e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2858,	// (0x0003222f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x0003ed10) main_ai5_sk_pane_g1

0x9e14,	// (0x000397eb) popup_query_code_window_g1

0xf1a9,	// (0x0003eb80) popup_fep_vkb_icf_pane

0xf1d8,	// (0x0003ebaf) popup_fep_vtchi_icf_pane

0xf342,	// (0x0003ed19) bg_icf_pane

0xf342,	// (0x0003ed19) list_vkb_icf_pane

0xf34e,	// (0x0003ed25) bg_icf_pane_cp01

0xf361,	// (0x0003ed38) vtchi_icf_list_pane

0xf3c1,	// (0x0003ed98) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x0003ed98) list_vkb_icf_pane_t1

0xf3da,	// (0x0003edb1) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0003edb1) vtchi_icf_list_pane_t1

0xf193,	// (0x0003eb6a) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x0003ebaf) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x0003ebd8) ituss_keypad_pane_ParamLimits

0x8ba0,	// (0x00038577) ituss_sks_pane

0xf342,	// (0x0003ed19) bg_icf_pane_ParamLimits

0xf163,	// (0x0003eb3a) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x0003eb3a) icf_edit_indi_pane

0xf342,	// (0x0003ed19) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x0003ed25) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x0003eb55) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x0003eb55) icf_edit_indi_pane_cp01

0xf361,	// (0x0003ed38) vtchi_query_pane

0xe4e2,	// (0x0003deb9) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0003deb9) icf_edit_indi_pane_g1

0xf44a,	// (0x0003ee21) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0003ee21) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0003f8e7) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0003f8e7) icf_edit_indi_pane_g

0xf45e,	// (0x0003ee35) icf_edit_indi_pane_t1

0xf3f3,	// (0x0003edca) bg_input_focus_pane_cp042

0x2791,	// (0x00032168) vtchi_button_pane

0xf3fc,	// (0x0003edd3) vtchi_query_pane_t1

0xf40a,	// (0x0003ede1) vtchi_query_pane_t2

0xf418,	// (0x0003edef) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0003f8d6) vtchi_query_pane_t

0x5673,	// (0x0003504a) bg_button_pane_cp13

0xf426,	// (0x0003edfd) vtchi_button_pane_g1

0x8d8d,	// (0x00038764) ituss_sks_pane_g1

0x8d98,	// (0x0003876f) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0003f8dd) ituss_sks_pane_g

0xf42e,	// (0x0003ee05) ituss_sks_pane_t1

0xf43c,	// (0x0003ee13) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0003f8e2) ituss_sks_pane_t

0xba95,	// (0x0003b46c) indicator_nsta_pane_cp_g1

0xba9e,	// (0x0003b475) indicator_nsta_pane_cp_g2

0xbaa6,	// (0x0003b47d) indicator_nsta_pane_cp_g3

0xbaae,	// (0x0003b485) indicator_nsta_pane_cp_g4

0xba9e,	// (0x0003b475) indicator_nsta_pane_cp_g5

0xbaa6,	// (0x0003b47d) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0003f45a) indicator_nsta_pane_cp_g

0xe229,	// (0x0003dc00) cell_graphic2_pane_t2_ParamLimits

0xe229,	// (0x0003dc00) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0003f773) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0003f773) cell_graphic2_pane_t

0xe255,	// (0x0003dc2c) cell_graphic2_control_pane_t1

0x68e8,	// (0x000362bf) signal_pane_g3_ParamLimits

0x68e8,	// (0x000362bf) signal_pane_g3

0x68f7,	// (0x000362ce) signal_pane_g4_ParamLimits

0x68f7,	// (0x000362ce) signal_pane_g4

0xf14d,	// (0x0003eb24) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x0003eb24) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x0003ecd8) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x0003ecd8) cell_ituss_key_pane_t1

0x9a7b,	// (0x00039452) form_field_data_wide_pane_vc_t2_ParamLimits

0x9a7b,	// (0x00039452) form_field_data_wide_pane_vc_t2

0x9a8f,	// (0x00039466) form_field_data_wide_pane_vc_t3_ParamLimits

0x9a8f,	// (0x00039466) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003f1bb) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003f1bb) form_field_data_wide_pane_vc_t

0xb732,	// (0x0003b109) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb732,	// (0x0003b109) form_field_slider_wide_pane_vc_t3

0xb808,	// (0x0003b1df) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb808,	// (0x0003b1df) form_field_popup_wide_pane_vc_t2

0xb81f,	// (0x0003b1f6) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb81f,	// (0x0003b1f6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0003f449) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0003f449) form_field_popup_wide_pane_vc_t

0x8954,	// (0x0003832b) aid_fshwr2_btn_pane_ParamLimits

0x8964,	// (0x0003833b) aid_fshwr2_syb_pane_ParamLimits

0x8978,	// (0x0003834f) aid_fshwr2_txt_pane_ParamLimits

0x8178,	// (0x00037b4f) fshwr2_bg_pane_ParamLimits

0x8988,	// (0x0003835f) fshwr2_func_candi_pane_ParamLimits

0x89a8,	// (0x0003837f) fshwr2_hwr_syb_pane_ParamLimits

0x89be,	// (0x00038395) fshwr2_icf_pane_ParamLimits

0x4572,	// (0x00033f49) list_double_graphic_pane_vc_g4_ParamLimits

0x4572,	// (0x00033f49) list_double_graphic_pane_vc_g4

0x8c49,	// (0x00038620) cell_ituss_key_pane_g3_ParamLimits

0x8c49,	// (0x00038620) cell_ituss_key_pane_g3

0x8d7b,	// (0x00038752) cell_ituss_key_t5_ParamLimits

0x8d7b,	// (0x00038752) cell_ituss_key_t5

0xf1bf,	// (0x0003eb96) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0003e01d) aid_cell_ai5_quarter

0xf45e,	// (0x0003ee35) icf_edit_indi_pane_t1_ParamLimits

0x23f1,	// (0x00031dc8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x23f1,	// (0x00031dc8) aid_tch_indicator_popup_pane_cp2

0x2404,	// (0x00031ddb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2404,	// (0x00031ddb) aid_tch_query_popup_data_pane_cp2

0x9dbc,	// (0x00039793) aid_tch_query_popup_pane_ParamLimits

0x9dbc,	// (0x00039793) aid_tch_query_popup_pane

0x9dbc,	// (0x00039793) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9dbc,	// (0x00039793) aid_tch_query_popup_data_pane_cp1

0x943e,	// (0x00038e15) cell_fshwr2_syb_bg_pane_ParamLimits

0x8ac8,	// (0x0003849f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8adc,	// (0x000384b3) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x0003eb80) popup_fep_vkb_icf_pane_ParamLimits

0x879a,	// (0x00038171) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0003e152) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0003e152) cell_ai5_widget_pane_g11

0xe787,	// (0x0003e15e) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0003e15e) cell_ai5_widget_pane_g12

0xe793,	// (0x0003e16a) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0003e16a) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0003e29a) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0003e29a) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0003e2ac) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0003e2ac) cell_ai5_widget_pane_t12

0x8c55,	// (0x0003862c) cell_ituss_key_pane_g4_ParamLimits

0x8c55,	// (0x0003862c) cell_ituss_key_pane_g4

0x8c71,	// (0x00038648) cell_ituss_key_pane_g5_ParamLimits

0x8c71,	// (0x00038648) cell_ituss_key_pane_g5

0x8c8d,	// (0x00038664) cell_ituss_key_pane_g6_ParamLimits

0x8c8d,	// (0x00038664) cell_ituss_key_pane_g6

0x9976,	// (0x0003934d) bg_icf_pane_g1

0xf369,	// (0x0003ed40) bg_icf_pane_g2

0xf375,	// (0x0003ed4c) bg_icf_pane_g3

0xf37f,	// (0x0003ed56) bg_icf_pane_g4

0xf38b,	// (0x0003ed62) bg_icf_pane_g5

0xf395,	// (0x0003ed6c) bg_icf_pane_g6

0xf3a1,	// (0x0003ed78) bg_icf_pane_g7

0xf3ab,	// (0x0003ed82) bg_icf_pane_g8

0xf3b7,	// (0x0003ed8e) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0003f8c3) bg_icf_pane_g

0xf1ee,	// (0x0003ebc5) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x0003ebc5) popup_hyb_candi_window

0x99ea,	// (0x000393c1) bg_popup_sub_pane_cp01_ParamLimits

0x99ea,	// (0x000393c1) bg_popup_sub_pane_cp01

0xf477,	// (0x0003ee4e) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0003ee4e) entry_hyb_candi_pane

0xf486,	// (0x0003ee5d) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0003ee5d) grid_hyb_candi_pane

0xf49b,	// (0x0003ee72) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0003ee72) grid_hyb_phrase_pane

0xf4aa,	// (0x0003ee81) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0003ee81) cell_hyb_candi_pane

0x279a,	// (0x00032171) cell_hyb_candi_scroll_pane

0x6791,	// (0x00036168) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0003ee9d) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0003eeab) cell_hyb_phrase_pane

0x6791,	// (0x00036168) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0003eeb4) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0003eec2) entry_hyb_candi_pane_t1

0x9117,	// (0x00038aee) input_focus_pane_cp06

0xf4f9,	// (0x0003eed0) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0003eed8) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0003eee0) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0003eee8) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0003eef0) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0003eef8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

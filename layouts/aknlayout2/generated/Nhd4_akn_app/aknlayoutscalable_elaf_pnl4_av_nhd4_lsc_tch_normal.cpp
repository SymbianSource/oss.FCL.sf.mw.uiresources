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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00002038 };

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
0x94a0,	// (0x0000b4d8) Screen

0x94ac,	// (0x0000b4e4) application_window_ParamLimits

0x94ac,	// (0x0000b4e4) application_window

0xe67e,	// (0x000106b6) screen_g1

0x94e4,	// (0x0000b51c) area_bottom_pane_ParamLimits

0x94e4,	// (0x0000b51c) area_bottom_pane

0xe6a8,	// (0x000106e0) area_top_pane_ParamLimits

0xe6a8,	// (0x000106e0) area_top_pane

0xe73c,	// (0x00010774) main_pane_ParamLimits

0xe73c,	// (0x00010774) main_pane

0xe7f7,	// (0x0001082f) misc_graphics

0xb295,	// (0x0000d2cd) battery_pane_ParamLimits

0xb295,	// (0x0000d2cd) battery_pane

0x2013,	// (0x0000404b) bg_status_flat_pane_g8

0x201b,	// (0x00004053) bg_status_flat_pane_g9

0x1188,	// (0x000031c0) context_pane_ParamLimits

0x1188,	// (0x000031c0) context_pane

0xb400,	// (0x0000d438) navi_pane_ParamLimits

0xb400,	// (0x0000d438) navi_pane

0xb47e,	// (0x0000d4b6) signal_pane_ParamLimits

0xb47e,	// (0x0000d4b6) signal_pane

0x0008,

0xf859,	// (0x00011891) bg_status_flat_pane_g

0xb50e,	// (0x0000d546) status_pane_g1_ParamLimits

0xb50e,	// (0x0000d546) status_pane_g1

0xb524,	// (0x0000d55c) status_pane_g2_ParamLimits

0xb524,	// (0x0000d55c) status_pane_g2

0x13af,	// (0x000033e7) status_pane_g3_ParamLimits

0x13af,	// (0x000033e7) status_pane_g3

0x0004,

0xf78c,	// (0x000117c4) status_pane_g_ParamLimits

0xf78c,	// (0x000117c4) status_pane_g

0xb530,	// (0x0000d568) title_pane_ParamLimits

0xb530,	// (0x0000d568) title_pane

0xb593,	// (0x0000d5cb) uni_indicator_pane_ParamLimits

0xb593,	// (0x0000d5cb) uni_indicator_pane

0x0a29,	// (0x00002a61) bg_list_pane_ParamLimits

0x0a29,	// (0x00002a61) bg_list_pane

0xaa5d,	// (0x0000ca95) find_pane

0x1767,	// (0x0000379f) listscroll_app_pane_ParamLimits

0x1767,	// (0x0000379f) listscroll_app_pane

0x0a5d,	// (0x00002a95) listscroll_form_pane

0xaa65,	// (0x0000ca9d) listscroll_gen_pane_ParamLimits

0xaa65,	// (0x0000ca9d) listscroll_gen_pane

0x0a79,	// (0x00002ab1) listscroll_set_pane

0x2dbb,	// (0x00004df3) main_idle_act_pane

0x050a,	// (0x00002542) main_idle_trad_pane

0x050a,	// (0x00002542) main_list_empty_pane

0x0a51,	// (0x00002a89) main_midp_pane

0x0a93,	// (0x00002acb) main_pane_g1_ParamLimits

0x0a93,	// (0x00002acb) main_pane_g1

0xaa79,	// (0x0000cab1) popup_ai_message_window_ParamLimits

0xaa79,	// (0x0000cab1) popup_ai_message_window

0xab2a,	// (0x0000cb62) popup_fep_china_uni_window_ParamLimits

0xab2a,	// (0x0000cb62) popup_fep_china_uni_window

0xab84,	// (0x0000cbbc) popup_fep_japan_candidate_window_ParamLimits

0xab84,	// (0x0000cbbc) popup_fep_japan_candidate_window

0xaba2,	// (0x0000cbda) popup_fep_japan_predictive_window_ParamLimits

0xaba2,	// (0x0000cbda) popup_fep_japan_predictive_window

0xabb4,	// (0x0000cbec) popup_find_window

0xabd1,	// (0x0000cc09) popup_grid_graphic_window_ParamLimits

0xabd1,	// (0x0000cc09) popup_grid_graphic_window

0xac6f,	// (0x0000cca7) popup_large_graphic_colour_window

0xac95,	// (0x0000cccd) popup_menu_window_ParamLimits

0xac95,	// (0x0000cccd) popup_menu_window

0xae67,	// (0x0000ce9f) popup_note_image_window

0xae2d,	// (0x0000ce65) popup_note_wait_window_ParamLimits

0xae2d,	// (0x0000ce65) popup_note_wait_window

0xae7f,	// (0x0000ceb7) popup_note_window_ParamLimits

0xae7f,	// (0x0000ceb7) popup_note_window

0xaf2e,	// (0x0000cf66) popup_query_code_window_ParamLimits

0xaf2e,	// (0x0000cf66) popup_query_code_window

0xaf68,	// (0x0000cfa0) popup_query_data_code_window_ParamLimits

0xaf68,	// (0x0000cfa0) popup_query_data_code_window

0xaf85,	// (0x0000cfbd) popup_query_data_window_ParamLimits

0xaf85,	// (0x0000cfbd) popup_query_data_window

0xb007,	// (0x0000d03f) popup_query_sat_info_window_ParamLimits

0xb007,	// (0x0000d03f) popup_query_sat_info_window

0xb09e,	// (0x0000d0d6) popup_snote_single_graphic_window_ParamLimits

0xb09e,	// (0x0000d0d6) popup_snote_single_graphic_window

0xb09e,	// (0x0000d0d6) popup_snote_single_text_window_ParamLimits

0xb09e,	// (0x0000d0d6) popup_snote_single_text_window

0x0eff,	// (0x00002f37) popup_sub_window_general

0xb1fb,	// (0x0000d233) popup_window_general_ParamLimits

0xb1fb,	// (0x0000d233) popup_window_general

0x1044,	// (0x0000307c) power_save_pane

0xa8bb,	// (0x0000c8f3) control_pane_g1_ParamLimits

0xa8bb,	// (0x0000c8f3) control_pane_g1

0xa8e4,	// (0x0000c91c) control_pane_g2_ParamLimits

0xa8e4,	// (0x0000c91c) control_pane_g2

0x08c4,	// (0x000028fc) control_pane_g3_ParamLimits

0x08c4,	// (0x000028fc) control_pane_g3

0x0007,

0xf774,	// (0x000117ac) control_pane_g_ParamLimits

0xf774,	// (0x000117ac) control_pane_g

0xa94c,	// (0x0000c984) control_pane_t1_ParamLimits

0xa94c,	// (0x0000c984) control_pane_t1

0xa9b2,	// (0x0000c9ea) control_pane_t2_ParamLimits

0xa9b2,	// (0x0000c9ea) control_pane_t2

0x0002,

0xf785,	// (0x000117bd) control_pane_t_ParamLimits

0xf785,	// (0x000117bd) control_pane_t

0xa814,	// (0x0000c84c) navi_navi_volume_pane_cp1

0xa81c,	// (0x0000c854) status_small_icon_pane

0x07ab,	// (0x000027e3) status_small_pane_g1_ParamLimits

0x07ab,	// (0x000027e3) status_small_pane_g1

0xa824,	// (0x0000c85c) status_small_pane_g2_ParamLimits

0xa824,	// (0x0000c85c) status_small_pane_g2

0xa830,	// (0x0000c868) status_small_pane_g3_ParamLimits

0xa830,	// (0x0000c868) status_small_pane_g3

0xa83c,	// (0x0000c874) status_small_pane_g4_ParamLimits

0xa83c,	// (0x0000c874) status_small_pane_g4

0xa848,	// (0x0000c880) status_small_pane_g5_ParamLimits

0xa848,	// (0x0000c880) status_small_pane_g5

0xa856,	// (0x0000c88e) status_small_pane_g6_ParamLimits

0xa856,	// (0x0000c88e) status_small_pane_g6

0x0007,

0xf763,	// (0x0001179b) status_small_pane_g_ParamLimits

0xf763,	// (0x0001179b) status_small_pane_g

0xa885,	// (0x0000c8bd) status_small_pane_t1

0xa8a7,	// (0x0000c8df) status_small_wait_pane_ParamLimits

0xa8a7,	// (0x0000c8df) status_small_wait_pane

0xa4f0,	// (0x0000c528) aid_levels_signal_ParamLimits

0xa4f0,	// (0x0000c528) aid_levels_signal

0xa508,	// (0x0000c540) signal_pane_g1_ParamLimits

0xa508,	// (0x0000c540) signal_pane_g1

0xa523,	// (0x0000c55b) signal_pane_g2_ParamLimits

0xa523,	// (0x0000c55b) signal_pane_g2

0x0003,

0xf6f4,	// (0x0001172c) signal_pane_g_ParamLimits

0xf6f4,	// (0x0001172c) signal_pane_g

0xf3e3,	// (0x0001141b) context_pane_g1

0x96e2,	// (0x0000b71a) title_pane_g1

0x9719,	// (0x0000b751) title_pane_t1

0xe82d,	// (0x00010865) title_pane_t2

0xe853,	// (0x0001088b) title_pane_t3

0x0002,

0xf557,	// (0x0001158f) title_pane_t

0xb5bb,	// (0x0000d5f3) aid_levels_battery_ParamLimits

0xb5bb,	// (0x0000d5f3) aid_levels_battery

0xb5d7,	// (0x0000d60f) battery_pane_g1_ParamLimits

0xb5d7,	// (0x0000d60f) battery_pane_g1

0xb5f4,	// (0x0000d62c) battery_pane_g2_ParamLimits

0xb5f4,	// (0x0000d62c) battery_pane_g2

0x0001,

0xf797,	// (0x000117cf) battery_pane_g_ParamLimits

0xf797,	// (0x000117cf) battery_pane_g

0xbc81,	// (0x0000dcb9) uni_indicator_pane_g1

0xbc97,	// (0x0000dccf) uni_indicator_pane_g2

0xbcad,	// (0x0000dce5) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x00011939) uni_indicator_pane_g

0x037c,	// (0x000023b4) navi_icon_pane_ParamLimits

0x037c,	// (0x000023b4) navi_icon_pane

0x02c6,	// (0x000022fe) navi_midp_pane

0x0398,	// (0x000023d0) navi_navi_pane

0x03a2,	// (0x000023da) navi_text_pane_ParamLimits

0x03a2,	// (0x000023da) navi_text_pane

0xe67e,	// (0x000106b6) status_small_wait_pane_g1

0xeabe,	// (0x00010af6) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x00011934) status_small_wait_pane_g

0xbbda,	// (0x0000dc12) navi_navi_icon_text_pane

0x27d0,	// (0x00004808) navi_navi_pane_g1_ParamLimits

0x27d0,	// (0x00004808) navi_navi_pane_g1

0x27e2,	// (0x0000481a) navi_navi_pane_g2_ParamLimits

0x27e2,	// (0x0000481a) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00011902) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00011902) navi_navi_pane_g

0x27f4,	// (0x0000482c) navi_navi_tabs_pane

0x27fd,	// (0x00004835) navi_navi_text_pane

0xbbda,	// (0x0000dc12) navi_navi_volume_pane

0x27a4,	// (0x000047dc) navi_text_pane_t1

0x2798,	// (0x000047d0) navi_icon_pane_g1

0x26eb,	// (0x00004723) navi_navi_text_pane_t1

0xbbc6,	// (0x0000dbfe) navi_navi_volume_pane_g1

0x26e2,	// (0x0000471a) volume_small_pane

0x2640,	// (0x00004678) navi_navi_icon_text_pane_g1

0xbb2a,	// (0x0000db62) navi_navi_icon_text_pane_t1

0x0398,	// (0x000023d0) navi_tabs_2_long_pane

0x0398,	// (0x000023d0) navi_tabs_2_pane

0x0398,	// (0x000023d0) navi_tabs_3_long_pane

0x0398,	// (0x000023d0) navi_tabs_3_pane

0x0398,	// (0x000023d0) navi_tabs_4_pane

0x259f,	// (0x000045d7) tabs_2_active_pane_ParamLimits

0x259f,	// (0x000045d7) tabs_2_active_pane

0x25af,	// (0x000045e7) tabs_2_passive_pane_ParamLimits

0x25af,	// (0x000045e7) tabs_2_passive_pane

0x256d,	// (0x000045a5) tabs_3_active_pane_ParamLimits

0x256d,	// (0x000045a5) tabs_3_active_pane

0x257d,	// (0x000045b5) tabs_3_passive_pane_ParamLimits

0x257d,	// (0x000045b5) tabs_3_passive_pane

0x258e,	// (0x000045c6) tabs_3_passive_pane_cp_ParamLimits

0x258e,	// (0x000045c6) tabs_3_passive_pane_cp

0x2529,	// (0x00004561) tabs_4_active_pane_ParamLimits

0x2529,	// (0x00004561) tabs_4_active_pane

0x253a,	// (0x00004572) tabs_4_passive_pane_ParamLimits

0x253a,	// (0x00004572) tabs_4_passive_pane

0x254b,	// (0x00004583) tabs_4_passive_pane_cp_ParamLimits

0x254b,	// (0x00004583) tabs_4_passive_pane_cp

0x255c,	// (0x00004594) tabs_4_passive_pane_cp2_ParamLimits

0x255c,	// (0x00004594) tabs_4_passive_pane_cp2

0x2505,	// (0x0000453d) tabs_2_long_active_pane_ParamLimits

0x2505,	// (0x0000453d) tabs_2_long_active_pane

0x2517,	// (0x0000454f) tabs_2_long_passive_pane_ParamLimits

0x2517,	// (0x0000454f) tabs_2_long_passive_pane

0x24c0,	// (0x000044f8) tabs_3_long_active_pane_ParamLimits

0x24c0,	// (0x000044f8) tabs_3_long_active_pane

0x24d9,	// (0x00004511) tabs_3_long_passive_pane_ParamLimits

0x24d9,	// (0x00004511) tabs_3_long_passive_pane

0x24ec,	// (0x00004524) tabs_3_long_passive_pane_cp_ParamLimits

0x24ec,	// (0x00004524) tabs_3_long_passive_pane_cp

0x2466,	// (0x0000449e) volume_small_pane_g1

0x246f,	// (0x000044a7) volume_small_pane_g2

0x2478,	// (0x000044b0) volume_small_pane_g3

0x2481,	// (0x000044b9) volume_small_pane_g4

0x248a,	// (0x000044c2) volume_small_pane_g5

0x2493,	// (0x000044cb) volume_small_pane_g6

0x249c,	// (0x000044d4) volume_small_pane_g7

0x24a5,	// (0x000044dd) volume_small_pane_g8

0x24ae,	// (0x000044e6) volume_small_pane_g9

0x24b7,	// (0x000044ef) volume_small_pane_g10

0x0009,

0xf896,	// (0x000118ce) volume_small_pane_g

0xe865,	// (0x0001089d) bg_active_tab_pane_cp2_ParamLimits

0xe865,	// (0x0001089d) bg_active_tab_pane_cp2

0x97a5,	// (0x0000b7dd) tabs_3_active_pane_g1

0x97ad,	// (0x0000b7e5) tabs_3_active_pane_t1

0xe865,	// (0x0001089d) bg_passive_tab_pane_cp2_ParamLimits

0xe865,	// (0x0001089d) bg_passive_tab_pane_cp2

0x97a5,	// (0x0000b7dd) tabs_3_passive_pane_g1

0x97ad,	// (0x0000b7e5) tabs_3_passive_pane_t1

0xe865,	// (0x0001089d) bg_active_tab_pane_cp3_ParamLimits

0xe865,	// (0x0001089d) bg_active_tab_pane_cp3

0x97bf,	// (0x0000b7f7) tabs_4_active_pane_g1

0x97c7,	// (0x0000b7ff) tabs_4_active_pane_t1

0xe865,	// (0x0001089d) bg_passive_tab_pane_cp3_ParamLimits

0xe865,	// (0x0001089d) bg_passive_tab_pane_cp3

0x97bf,	// (0x0000b7f7) tabs_4_1_passive_pane_g1

0x97c7,	// (0x0000b7ff) tabs_4_1_passive_pane_t1

0x0a51,	// (0x00002a89) list_highlight_pane_cp2

0xbe81,	// (0x0000deb9) list_set_pane_ParamLimits

0xbe81,	// (0x0000deb9) list_set_pane

0xbf1b,	// (0x0000df53) main_pane_set_t1_ParamLimits

0xbf1b,	// (0x0000df53) main_pane_set_t1

0xbf3b,	// (0x0000df73) main_pane_set_t2_ParamLimits

0xbf3b,	// (0x0000df73) main_pane_set_t2

0xbf4f,	// (0x0000df87) main_pane_set_t3_ParamLimits

0xbf4f,	// (0x0000df87) main_pane_set_t3

0xbf61,	// (0x0000df99) main_pane_set_t4_ParamLimits

0xbf61,	// (0x0000df99) main_pane_set_t4

0x0003,

0xf966,	// (0x0001199e) main_pane_set_t_ParamLimits

0xf966,	// (0x0001199e) main_pane_set_t

0xbf73,	// (0x0000dfab) setting_code_pane

0xbf7d,	// (0x0000dfb5) setting_slider_graphic_pane

0xbf7d,	// (0x0000dfb5) setting_slider_pane

0xbf7d,	// (0x0000dfb5) setting_text_pane

0xbf7d,	// (0x0000dfb5) setting_volume_pane

0x97d9,	// (0x0000b811) volume_set_pane

0xe873,	// (0x000108ab) bg_set_opt_pane_cp

0x97e1,	// (0x0000b819) setting_slider_pane_t1

0x97fa,	// (0x0000b832) setting_slider_pane_t2

0x9814,	// (0x0000b84c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00011596) setting_slider_pane_t

0x982c,	// (0x0000b864) slider_set_pane

0xe7f7,	// (0x0001082f) bg_set_opt_pane_cp2

0xe881,	// (0x000108b9) setting_slider_graphic_pane_g1

0x9842,	// (0x0000b87a) setting_slider_graphic_pane_t1

0x9852,	// (0x0000b88a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001159d) setting_slider_graphic_pane_t

0x9862,	// (0x0000b89a) slider_set_pane_cp

0xe7f7,	// (0x0001082f) input_focus_pane_cp1

0x2da2,	// (0x00004dda) list_set_text_pane

0xe67e,	// (0x000106b6) setting_text_pane_g1

0xe7f7,	// (0x0001082f) input_focus_pane_cp2

0xe67e,	// (0x000106b6) setting_code_pane_g1

0xe88a,	// (0x000108c2) setting_code_pane_t1

0xe898,	// (0x000108d0) set_text_pane_t1_ParamLimits

0xe898,	// (0x000108d0) set_text_pane_t1

0xed6f,	// (0x00010da7) set_opt_bg_pane_g1

0xed77,	// (0x00010daf) set_opt_bg_pane_g2

0xbe36,	// (0x0000de6e) set_opt_bg_pane_g3

0xed87,	// (0x00010dbf) set_opt_bg_pane_g4

0xed8f,	// (0x00010dc7) set_opt_bg_pane_g5

0xed97,	// (0x00010dcf) set_opt_bg_pane_g6

0xbe40,	// (0x0000de78) set_opt_bg_pane_g7

0xbe48,	// (0x0000de80) set_opt_bg_pane_g8

0xbe52,	// (0x0000de8a) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x0001198b) set_opt_bg_pane_g

0xbdd1,	// (0x0000de09) slider_set_pane_g1

0x2d18,	// (0x00004d50) slider_set_pane_g2

0x0006,

0xf944,	// (0x0001197c) slider_set_pane_g

0xbce4,	// (0x0000dd1c) volume_set_pane_g1

0xbcec,	// (0x0000dd24) volume_set_pane_g2

0xbcf4,	// (0x0000dd2c) volume_set_pane_g3

0xbcfc,	// (0x0000dd34) volume_set_pane_g4

0xbd04,	// (0x0000dd3c) volume_set_pane_g5

0xbd0c,	// (0x0000dd44) volume_set_pane_g6

0xbd14,	// (0x0000dd4c) volume_set_pane_g7

0xbd1c,	// (0x0000dd54) volume_set_pane_g8

0xbd24,	// (0x0000dd5c) volume_set_pane_g9

0xbd2c,	// (0x0000dd64) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00011954) volume_set_pane_g

0x986a,	// (0x0000b8a2) indicator_pane_ParamLimits

0x986a,	// (0x0000b8a2) indicator_pane

0x9892,	// (0x0000b8ca) main_idle_pane_g2_ParamLimits

0x9892,	// (0x0000b8ca) main_idle_pane_g2

0x98ca,	// (0x0000b902) main_pane_idle_g1_ParamLimits

0x98ca,	// (0x0000b902) main_pane_idle_g1

0xe8b2,	// (0x000108ea) popup_clock_digital_analogue_window_ParamLimits

0xe8b2,	// (0x000108ea) popup_clock_digital_analogue_window

0x98f1,	// (0x0000b929) soft_indicator_pane_ParamLimits

0x98f1,	// (0x0000b929) soft_indicator_pane

0x9915,	// (0x0000b94d) wallpaper_pane_ParamLimits

0x9915,	// (0x0000b94d) wallpaper_pane

0xe67e,	// (0x000106b6) wallpaper_pane_g1

0x9927,	// (0x0000b95f) indicator_pane_g1_ParamLimits

0x9927,	// (0x0000b95f) indicator_pane_g1

0x3310,	// (0x00005348) navi_navi_icon_text_pane_srt_g1

0xe8e0,	// (0x00010918) soft_indicator_pane_t1

0xe8fa,	// (0x00010932) aid_ps_area_pane

0x993d,	// (0x0000b975) aid_ps_clock_pane

0xe90b,	// (0x00010943) aid_ps_indicator_pane

0xe917,	// (0x0001094f) indicator_ps_pane_ParamLimits

0xe917,	// (0x0001094f) indicator_ps_pane

0xe926,	// (0x0001095e) power_save_pane_g1_ParamLimits

0xe926,	// (0x0001095e) power_save_pane_g1

0xe932,	// (0x0001096a) power_save_pane_g2_ParamLimits

0xe932,	// (0x0001096a) power_save_pane_g2

0xe688,	// (0x000106c0) aid_navinavi_width_pane

0xe8fa,	// (0x00010932) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000115a2) power_save_pane_g_ParamLimits

0xf56a,	// (0x000115a2) power_save_pane_g

0xe940,	// (0x00010978) power_save_pane_t1_ParamLimits

0xe940,	// (0x00010978) power_save_pane_t1

0x993d,	// (0x0000b975) aid_ps_clock_pane_ParamLimits

0xe90b,	// (0x00010943) aid_ps_indicator_pane_ParamLimits

0xe952,	// (0x0001098a) power_save_pane_t4_ParamLimits

0xe952,	// (0x0001098a) power_save_pane_t4

0x0001,

0xf56f,	// (0x000115a7) power_save_pane_t_ParamLimits

0xf56f,	// (0x000115a7) power_save_pane_t

0xe97c,	// (0x000109b4) power_save_t3_ParamLimits

0xe97c,	// (0x000109b4) power_save_t3

0xe967,	// (0x0001099f) power_save_t2_ParamLimits

0xe967,	// (0x0001099f) power_save_t2

0xe991,	// (0x000109c9) indicator_ps_pane_g1

0x994b,	// (0x0000b983) ai_gene_pane_ParamLimits

0x994b,	// (0x0000b983) ai_gene_pane

0x9962,	// (0x0000b99a) ai_links_pane_ParamLimits

0x9962,	// (0x0000b99a) ai_links_pane

0x997a,	// (0x0000b9b2) indicator_pane_cp1_ParamLimits

0x997a,	// (0x0000b9b2) indicator_pane_cp1

0x9989,	// (0x0000b9c1) main_pane_idle_g1_cp_ParamLimits

0x9989,	// (0x0000b9c1) main_pane_idle_g1_cp

0x99a1,	// (0x0000b9d9) popup_ai_links_title_window

0x99aa,	// (0x0000b9e2) soft_indicator_pane_cp1_ParamLimits

0x99aa,	// (0x0000b9e2) soft_indicator_pane_cp1

0x2a8f,	// (0x00004ac7) ai_links_pane_g1

0x2a98,	// (0x00004ad0) grid_ai_links_pane

0xbc78,	// (0x0000dcb0) ai_gene_pane_1

0x2a7d,	// (0x00004ab5) ai_gene_pane_2

0x2a86,	// (0x00004abe) list_highlight_pane_cp4

0xbc54,	// (0x0000dc8c) cell_ai_link_pane_ParamLimits

0xbc54,	// (0x0000dc8c) cell_ai_link_pane

0x2a4e,	// (0x00004a86) cell_ai_link_pane_g1

0xeabe,	// (0x00010af6) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x0001192f) cell_ai_link_pane_g

0xe7f7,	// (0x0001082f) grid_highlight_cp2

0xe7f7,	// (0x0001082f) bg_popup_sub_pane_cp1

0xe9a8,	// (0x000109e0) popup_ai_links_title_window_t1

0x299e,	// (0x000049d6) ai_gene_pane_1_g1_ParamLimits

0x299e,	// (0x000049d6) ai_gene_pane_1_g1

0x29aa,	// (0x000049e2) ai_gene_pane_1_g2_ParamLimits

0x29aa,	// (0x000049e2) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00011925) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00011925) ai_gene_pane_1_g

0x29b7,	// (0x000049ef) ai_gene_pane_1_t1_ParamLimits

0x29b7,	// (0x000049ef) ai_gene_pane_1_t1

0x29eb,	// (0x00004a23) grid_ai_soft_ind_pane

0x2989,	// (0x000049c1) ai_gene_pane_2_t1_ParamLimits

0x2989,	// (0x000049c1) ai_gene_pane_2_t1

0x99be,	// (0x0000b9f6) main_pane_empty_t1_ParamLimits

0x99be,	// (0x0000b9f6) main_pane_empty_t1

0x99d6,	// (0x0000ba0e) main_pane_empty_t2_ParamLimits

0x99d6,	// (0x0000ba0e) main_pane_empty_t2

0x99eb,	// (0x0000ba23) main_pane_empty_t3_ParamLimits

0x99eb,	// (0x0000ba23) main_pane_empty_t3

0x99fd,	// (0x0000ba35) main_pane_empty_t4_ParamLimits

0x99fd,	// (0x0000ba35) main_pane_empty_t4

0x9a0f,	// (0x0000ba47) main_pane_empty_t5_ParamLimits

0x9a0f,	// (0x0000ba47) main_pane_empty_t5

0x0004,

0xf574,	// (0x000115ac) main_pane_empty_t_ParamLimits

0xf574,	// (0x000115ac) main_pane_empty_t

0xedc0,	// (0x00010df8) bg_popup_window_pane_ParamLimits

0xedc0,	// (0x00010df8) bg_popup_window_pane

0xbbce,	// (0x0000dc06) find_popup_pane_cp2_ParamLimits

0xbbce,	// (0x0000dc06) find_popup_pane_cp2

0x2705,	// (0x0000473d) heading_pane_ParamLimits

0x2705,	// (0x0000473d) heading_pane

0xe7f7,	// (0x0001082f) bg_popup_sub_pane

0xbb47,	// (0x0000db7f) bg_popup_window_pane_g1_ParamLimits

0xbb47,	// (0x0000db7f) bg_popup_window_pane_g1

0xbb56,	// (0x0000db8e) bg_popup_window_pane_g2_ParamLimits

0xbb56,	// (0x0000db8e) bg_popup_window_pane_g2

0xbb62,	// (0x0000db9a) bg_popup_window_pane_g3_ParamLimits

0xbb62,	// (0x0000db9a) bg_popup_window_pane_g3

0xbb6e,	// (0x0000dba6) bg_popup_window_pane_g4_ParamLimits

0xbb6e,	// (0x0000dba6) bg_popup_window_pane_g4

0xbb7d,	// (0x0000dbb5) bg_popup_window_pane_g5_ParamLimits

0xbb7d,	// (0x0000dbb5) bg_popup_window_pane_g5

0xbb8d,	// (0x0000dbc5) bg_popup_window_pane_g6_ParamLimits

0xbb8d,	// (0x0000dbc5) bg_popup_window_pane_g6

0xbb99,	// (0x0000dbd1) bg_popup_window_pane_g7_ParamLimits

0xbb99,	// (0x0000dbd1) bg_popup_window_pane_g7

0xbba8,	// (0x0000dbe0) bg_popup_window_pane_g8_ParamLimits

0xbba8,	// (0x0000dbe0) bg_popup_window_pane_g8

0xbbb7,	// (0x0000dbef) bg_popup_window_pane_g9_ParamLimits

0xbbb7,	// (0x0000dbef) bg_popup_window_pane_g9

0x26ce,	// (0x00004706) bg_popup_window_pane_g10_ParamLimits

0x26ce,	// (0x00004706) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x000118ed) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x000118ed) bg_popup_window_pane_g

0x25f7,	// (0x0000462f) bg_popup_heading_pane_ParamLimits

0x25f7,	// (0x0000462f) bg_popup_heading_pane

0x3253,	// (0x0000528b) tabs_4_passive_pane_cp_srt_ParamLimits

0x3253,	// (0x0000528b) tabs_4_passive_pane_cp_srt

0x3265,	// (0x0000529d) tabs_4_passive_pane_srt_ParamLimits

0x260b,	// (0x00004643) heading_pane_g2

0x3265,	// (0x0000529d) tabs_4_passive_pane_srt

0x1767,	// (0x0000379f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1767,	// (0x0000379f) bg_passive_tab_pane_cp3_srt

0x2613,	// (0x0000464b) heading_pane_t1_ParamLimits

0x2613,	// (0x0000464b) heading_pane_t1

0x262a,	// (0x00004662) heading_pane_t2_ParamLimits

0x262a,	// (0x00004662) heading_pane_t2

0x0001,

0xf8b0,	// (0x000118e8) heading_pane_t_ParamLimits

0xf8b0,	// (0x000118e8) heading_pane_t

0x1fdb,	// (0x00004013) bg_popup_heading_pane_g1

0x208a,	// (0x000040c2) bg_popup_heading_pane_g2

0x2094,	// (0x000040cc) bg_popup_heading_pane_g3

0x209e,	// (0x000040d6) bg_popup_heading_pane_g4

0x20a8,	// (0x000040e0) bg_popup_heading_pane_g5

0x20b2,	// (0x000040ea) bg_popup_heading_pane_g6

0x20ba,	// (0x000040f2) bg_popup_heading_pane_g7

0x20c2,	// (0x000040fa) bg_popup_heading_pane_g8

0x20cc,	// (0x00004104) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x000118a4) bg_popup_heading_pane_g

0x15db,	// (0x00003613) bg_popup_sub_pane_g1

0x15e3,	// (0x0000361b) bg_popup_sub_pane_g2

0x15eb,	// (0x00003623) bg_popup_sub_pane_g3

0x15f3,	// (0x0000362b) bg_popup_sub_pane_g4

0x15fb,	// (0x00003633) bg_popup_sub_pane_g5

0x1603,	// (0x0000363b) bg_popup_sub_pane_g6

0x160b,	// (0x00003643) bg_popup_sub_pane_g7

0x1613,	// (0x0000364b) bg_popup_sub_pane_g8

0x161b,	// (0x00003653) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x0001187e) bg_popup_sub_pane_g

0xe865,	// (0x0001089d) bg_popup_window_pane_cp5_ParamLimits

0xe865,	// (0x0001089d) bg_popup_window_pane_cp5

0xe9c5,	// (0x000109fd) popup_note_window_g1_ParamLimits

0xe9c5,	// (0x000109fd) popup_note_window_g1

0xe9d1,	// (0x00010a09) popup_note_window_t1_ParamLimits

0xe9d1,	// (0x00010a09) popup_note_window_t1

0xe9e7,	// (0x00010a1f) popup_note_window_t2_ParamLimits

0xe9e7,	// (0x00010a1f) popup_note_window_t2

0xe9fd,	// (0x00010a35) popup_note_window_t3_ParamLimits

0xe9fd,	// (0x00010a35) popup_note_window_t3

0xea13,	// (0x00010a4b) popup_note_window_t4_ParamLimits

0xea13,	// (0x00010a4b) popup_note_window_t4

0xea3b,	// (0x00010a73) popup_note_window_t5_ParamLimits

0xea3b,	// (0x00010a73) popup_note_window_t5

0x0004,

0xf57f,	// (0x000115b7) popup_note_window_t_ParamLimits

0xf57f,	// (0x000115b7) popup_note_window_t

0xea5f,	// (0x00010a97) bg_popup_window_pane_cp6_ParamLimits

0xea5f,	// (0x00010a97) bg_popup_window_pane_cp6

0x1f57,	// (0x00003f8f) popup_note_image_window_g1_ParamLimits

0x1f57,	// (0x00003f8f) popup_note_image_window_g1

0xb9ec,	// (0x0000da24) popup_note_image_window_g2_ParamLimits

0xb9ec,	// (0x0000da24) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00011872) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00011872) popup_note_image_window_g

0x1f7c,	// (0x00003fb4) popup_note_image_window_t1_ParamLimits

0x1f7c,	// (0x00003fb4) popup_note_image_window_t1

0x1f95,	// (0x00003fcd) popup_note_image_window_t2_ParamLimits

0x1f95,	// (0x00003fcd) popup_note_image_window_t2

0x1fae,	// (0x00003fe6) popup_note_image_window_t3_ParamLimits

0x1fae,	// (0x00003fe6) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00011877) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00011877) popup_note_image_window_t

0x1e20,	// (0x00003e58) bg_popup_window_pane_cp7_ParamLimits

0x1e20,	// (0x00003e58) bg_popup_window_pane_cp7

0x1e50,	// (0x00003e88) popup_note_wait_window_g1_ParamLimits

0x1e50,	// (0x00003e88) popup_note_wait_window_g1

0x1e5c,	// (0x00003e94) popup_note_wait_window_g2_ParamLimits

0x1e5c,	// (0x00003e94) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00011860) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00011860) popup_note_wait_window_g

0x1e74,	// (0x00003eac) popup_note_wait_window_t1_ParamLimits

0x1e74,	// (0x00003eac) popup_note_wait_window_t1

0xb98d,	// (0x0000d9c5) popup_note_wait_window_t2_ParamLimits

0xb98d,	// (0x0000d9c5) popup_note_wait_window_t2

0xb9aa,	// (0x0000d9e2) popup_note_wait_window_t3_ParamLimits

0xb9aa,	// (0x0000d9e2) popup_note_wait_window_t3

0xb9bd,	// (0x0000d9f5) popup_note_wait_window_t4_ParamLimits

0xb9bd,	// (0x0000d9f5) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00011867) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00011867) popup_note_wait_window_t

0x1ef0,	// (0x00003f28) wait_bar_pane_ParamLimits

0x1ef0,	// (0x00003f28) wait_bar_pane

0xe7f7,	// (0x0001082f) wait_anim_pane

0xe7f7,	// (0x0001082f) wait_border_pane

0xe67e,	// (0x000106b6) wait_anim_pane_g1

0xe67e,	// (0x000106b6) wait_anim_pane_g2

0x0001,

0xf6ef,	// (0x00011727) wait_anim_pane_g

0x1dcc,	// (0x00003e04) wait_border_pane_g1

0x1dd7,	// (0x00003e0f) wait_border_pane_g2

0x1de0,	// (0x00003e18) wait_border_pane_g3

0x0002,

0xf821,	// (0x00011859) wait_border_pane_g

0x1c37,	// (0x00003c6f) bg_popup_window_pane_cp16_ParamLimits

0x1c37,	// (0x00003c6f) bg_popup_window_pane_cp16

0xb93d,	// (0x0000d975) indicator_popup_pane_cp4_ParamLimits

0xb93d,	// (0x0000d975) indicator_popup_pane_cp4

0x1d4b,	// (0x00003d83) popup_query_data_window_t1_ParamLimits

0x1d4b,	// (0x00003d83) popup_query_data_window_t1

0x1d5d,	// (0x00003d95) popup_query_data_window_t2_ParamLimits

0x1d5d,	// (0x00003d95) popup_query_data_window_t2

0x1d76,	// (0x00003dae) popup_query_data_window_t3_ParamLimits

0x1d76,	// (0x00003dae) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00011852) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00011852) popup_query_data_window_t

0xb951,	// (0x0000d989) query_popup_data_pane_ParamLimits

0xb951,	// (0x0000d989) query_popup_data_pane

0xb965,	// (0x0000d99d) query_popup_data_pane_cp1_ParamLimits

0xb965,	// (0x0000d99d) query_popup_data_pane_cp1

0x1c37,	// (0x00003c6f) bg_popup_window_pane_cp10_ParamLimits

0x1c37,	// (0x00003c6f) bg_popup_window_pane_cp10

0xb8b8,	// (0x0000d8f0) indicator_popup_pane_ParamLimits

0xb8b8,	// (0x0000d8f0) indicator_popup_pane

0xb8da,	// (0x0000d912) popup_query_code_window_t1_ParamLimits

0xb8da,	// (0x0000d912) popup_query_code_window_t1

0xb8f4,	// (0x0000d92c) popup_query_code_window_t2_ParamLimits

0xb8f4,	// (0x0000d92c) popup_query_code_window_t2

0x1cee,	// (0x00003d26) popup_query_code_window_t3_ParamLimits

0x1cee,	// (0x00003d26) popup_query_code_window_t3

0x0002,

0xf813,	// (0x0001184b) popup_query_code_window_t_ParamLimits

0xf813,	// (0x0001184b) popup_query_code_window_t

0x1d1d,	// (0x00003d55) query_popup_pane_ParamLimits

0x1d1d,	// (0x00003d55) query_popup_pane

0xea5f,	// (0x00010a97) bg_popup_window_pane_cp15_ParamLimits

0xea5f,	// (0x00010a97) bg_popup_window_pane_cp15

0x9a47,	// (0x0000ba7f) indicator_popup_pane_cp1_ParamLimits

0x9a47,	// (0x0000ba7f) indicator_popup_pane_cp1

0x9a5a,	// (0x0000ba92) indicator_popup_pane_cp2_ParamLimits

0x9a5a,	// (0x0000ba92) indicator_popup_pane_cp2

0x9a6d,	// (0x0000baa5) popup_query_data_code_window_g1_ParamLimits

0x9a6d,	// (0x0000baa5) popup_query_data_code_window_g1

0xea7d,	// (0x00010ab5) popup_query_data_code_window_t1_ParamLimits

0xea7d,	// (0x00010ab5) popup_query_data_code_window_t1

0xea8f,	// (0x00010ac7) popup_query_data_code_window_t2_ParamLimits

0xea8f,	// (0x00010ac7) popup_query_data_code_window_t2

0x9a80,	// (0x0000bab8) popup_query_data_code_window_t3_ParamLimits

0x9a80,	// (0x0000bab8) popup_query_data_code_window_t3

0x9a96,	// (0x0000bace) popup_query_data_code_window_t4_ParamLimits

0x9a96,	// (0x0000bace) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000115c2) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000115c2) popup_query_data_code_window_t

0x033a,	// (0x00002372) list_single_midp_graphic_pane_g3

0x9aae,	// (0x0000bae6) query_popup_data_pane_cp2_ParamLimits

0x9ac1,	// (0x0000baf9) query_popup_pane_cp2_ParamLimits

0x9ac1,	// (0x0000baf9) query_popup_pane_cp2

0xe7f7,	// (0x0001082f) bg_popup_window_pane_cp11

0x1c23,	// (0x00003c5b) heading_pane_cp5

0xeaeb,	// (0x00010b23) listscroll_popup_info_pane

0xe7f7,	// (0x0001082f) input_focus_pane_cp3

0xeaa1,	// (0x00010ad9) query_popup_pane_t1

0xeaaf,	// (0x00010ae7) list_popup_info_pane_ParamLimits

0xeaaf,	// (0x00010ae7) list_popup_info_pane

0xeabe,	// (0x00010af6) listscroll_popup_info_pane_g1

0xeac6,	// (0x00010afe) scroll_pane_cp7

0x9ad4,	// (0x0000bb0c) popup_info_list_pane_t1_ParamLimits

0x9ad4,	// (0x0000bb0c) popup_info_list_pane_t1

0x9aee,	// (0x0000bb26) popup_info_list_pane_t2_ParamLimits

0x9aee,	// (0x0000bb26) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000115cb) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000115cb) popup_info_list_pane_t

0xe7f7,	// (0x0001082f) bg_popup_window_pane_cp12

0xc1e4,	// (0x0000e21c) find_popup_pane

0xe873,	// (0x000108ab) bg_popup_window_pane_cp3

0xead0,	// (0x00010b08) heading_pane_cp3

0xeadc,	// (0x00010b14) listscroll_popup_graphic_pane

0xe7f7,	// (0x0001082f) bg_popup_window_pane_cp4

0x9b58,	// (0x0000bb90) heading_pane_cp4

0xeaeb,	// (0x00010b23) listscroll_popup_colour_pane

0x9b60,	// (0x0000bb98) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9b60,	// (0x0000bb98) cell_large_graphic_colour_none_popup_pane

0x9b74,	// (0x0000bbac) grid_large_graphic_colour_popup_pane_ParamLimits

0x9b74,	// (0x0000bbac) grid_large_graphic_colour_popup_pane

0x9b98,	// (0x0000bbd0) listscroll_popup_colour_pane_g1_ParamLimits

0x9b98,	// (0x0000bbd0) listscroll_popup_colour_pane_g1

0x9baf,	// (0x0000bbe7) listscroll_popup_colour_pane_g2_ParamLimits

0x9baf,	// (0x0000bbe7) listscroll_popup_colour_pane_g2

0x9bc6,	// (0x0000bbfe) listscroll_popup_colour_pane_g3_ParamLimits

0x9bc6,	// (0x0000bbfe) listscroll_popup_colour_pane_g3

0x9bd6,	// (0x0000bc0e) listscroll_popup_colour_pane_g4_ParamLimits

0x9bd6,	// (0x0000bc0e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000115d0) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000115d0) listscroll_popup_colour_pane_g

0xeaf3,	// (0x00010b2b) scroll_pane_cp6_ParamLimits

0xeaf3,	// (0x00010b2b) scroll_pane_cp6

0x9be6,	// (0x0000bc1e) cell_large_graphic_colour_popup_pane_ParamLimits

0x9be6,	// (0x0000bc1e) cell_large_graphic_colour_popup_pane

0x9c05,	// (0x0000bc3d) cell_large_graphic_colour_none_popup_pane_t1

0xe7f7,	// (0x0001082f) grid_highlight_pane_cp5

0xeb05,	// (0x00010b3d) cell_large_graphic_colour_popup_pane_g1

0xeb0d,	// (0x00010b45) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000115d9) cell_large_graphic_colour_popup_pane_g

0xeb15,	// (0x00010b4d) cell_large_graphic_colour_popup_pane_g2_copy1

0xeb1e,	// (0x00010b56) grid_highlight_pane_cp4

0xeb26,	// (0x00010b5e) bg_popup_window_pane_cp8_ParamLimits

0xeb26,	// (0x00010b5e) bg_popup_window_pane_cp8

0x9c14,	// (0x0000bc4c) popup_snote_single_text_window_g1_ParamLimits

0x9c14,	// (0x0000bc4c) popup_snote_single_text_window_g1

0x9c26,	// (0x0000bc5e) popup_snote_single_text_window_t1_ParamLimits

0x9c26,	// (0x0000bc5e) popup_snote_single_text_window_t1

0x9c39,	// (0x0000bc71) popup_snote_single_text_window_t2_ParamLimits

0x9c39,	// (0x0000bc71) popup_snote_single_text_window_t2

0x9c4c,	// (0x0000bc84) popup_snote_single_text_window_t3_ParamLimits

0x9c4c,	// (0x0000bc84) popup_snote_single_text_window_t3

0x9c85,	// (0x0000bcbd) popup_snote_single_text_window_t4_ParamLimits

0x9c85,	// (0x0000bcbd) popup_snote_single_text_window_t4

0x9cb9,	// (0x0000bcf1) popup_snote_single_text_window_t5_ParamLimits

0x9cb9,	// (0x0000bcf1) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000115de) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000115de) popup_snote_single_text_window_t

0xeb41,	// (0x00010b79) bg_popup_window_pane_cp9_ParamLimits

0xeb41,	// (0x00010b79) bg_popup_window_pane_cp9

0x9c14,	// (0x0000bc4c) popup_snote_single_graphic_window_g1_ParamLimits

0x9c14,	// (0x0000bc4c) popup_snote_single_graphic_window_g1

0xeb4f,	// (0x00010b87) popup_snote_single_graphic_window_g2_ParamLimits

0xeb4f,	// (0x00010b87) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000115e9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000115e9) popup_snote_single_graphic_window_g

0xeb5b,	// (0x00010b93) popup_snote_single_graphic_window_t1_ParamLimits

0xeb5b,	// (0x00010b93) popup_snote_single_graphic_window_t1

0xeb6e,	// (0x00010ba6) popup_snote_single_graphic_window_t2_ParamLimits

0xeb6e,	// (0x00010ba6) popup_snote_single_graphic_window_t2

0x9c4c,	// (0x0000bc84) popup_snote_single_graphic_window_t3_ParamLimits

0x9c4c,	// (0x0000bc84) popup_snote_single_graphic_window_t3

0x9c85,	// (0x0000bcbd) popup_snote_single_graphic_window_t4_ParamLimits

0x9c85,	// (0x0000bcbd) popup_snote_single_graphic_window_t4

0x9ce8,	// (0x0000bd20) popup_snote_single_graphic_window_t5_ParamLimits

0x9ce8,	// (0x0000bd20) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000115ee) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000115ee) popup_snote_single_graphic_window_t

0x31d1,	// (0x00005209) grid_graphic_popup_pane_ParamLimits

0x31d1,	// (0x00005209) grid_graphic_popup_pane

0x31fb,	// (0x00005233) listscroll_popup_graphic_pane_g1_ParamLimits

0x31fb,	// (0x00005233) listscroll_popup_graphic_pane_g1

0xc12f,	// (0x0000e167) listscroll_popup_graphic_pane_g2_ParamLimits

0xc12f,	// (0x0000e167) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x000119c8) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x000119c8) listscroll_popup_graphic_pane_g

0x3223,	// (0x0000525b) scroll_pane_cp5

0xc0d4,	// (0x0000e10c) cell_graphic_popup_pane_ParamLimits

0xc0d4,	// (0x0000e10c) cell_graphic_popup_pane

0x3151,	// (0x00005189) cell_graphic_popup_pane_g1

0x3159,	// (0x00005191) cell_graphic_popup_pane_g2

0xeb15,	// (0x00010b4d) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x000119c1) cell_graphic_popup_pane_g

0x3162,	// (0x0000519a) cell_graphic_popup_pane_t2

0xeb1e,	// (0x00010b56) grid_highlight_pane_cp3

0xeb93,	// (0x00010bcb) list_gen_pane_ParamLimits

0xeb93,	// (0x00010bcb) list_gen_pane

0xebbb,	// (0x00010bf3) scroll_pane

0xc03e,	// (0x0000e076) bg_list_pane_g1_ParamLimits

0xc03e,	// (0x0000e076) bg_list_pane_g1

0xc059,	// (0x0000e091) bg_list_pane_g2_ParamLimits

0xc059,	// (0x0000e091) bg_list_pane_g2

0xc06c,	// (0x0000e0a4) bg_list_pane_g3_ParamLimits

0xc06c,	// (0x0000e0a4) bg_list_pane_g3

0xc07e,	// (0x0000e0b6) bg_list_pane_g4_ParamLimits

0xc07e,	// (0x0000e0b6) bg_list_pane_g4

0xc090,	// (0x0000e0c8) bg_list_pane_g5_ParamLimits

0xc090,	// (0x0000e0c8) bg_list_pane_g5

0x0004,

0xf97e,	// (0x000119b6) bg_list_pane_g_ParamLimits

0xf97e,	// (0x000119b6) bg_list_pane_g

0xbfe2,	// (0x0000e01a) list_double2_graphic_large_graphic_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double2_graphic_large_graphic_pane

0xbfe2,	// (0x0000e01a) list_double2_graphic_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double2_graphic_pane

0xbfe2,	// (0x0000e01a) list_double2_large_graphic_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double2_large_graphic_pane

0xbfe2,	// (0x0000e01a) list_double2_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double2_pane

0xbfe2,	// (0x0000e01a) list_double_graphic_heading_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double_graphic_heading_pane

0xbfe2,	// (0x0000e01a) list_double_graphic_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double_graphic_pane

0xbfe2,	// (0x0000e01a) list_double_heading_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double_heading_pane

0xbfe2,	// (0x0000e01a) list_double_large_graphic_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double_large_graphic_pane

0xbfe2,	// (0x0000e01a) list_double_number_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double_number_pane

0xbfe2,	// (0x0000e01a) list_double_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double_pane

0xbfe2,	// (0x0000e01a) list_double_time_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_double_time_pane

0xbfe2,	// (0x0000e01a) list_setting_number_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_setting_number_pane

0xbfe2,	// (0x0000e01a) list_setting_pane_ParamLimits

0xbfe2,	// (0x0000e01a) list_setting_pane

0xbff4,	// (0x0000e02c) list_single_2graphic_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_2graphic_pane

0xbff4,	// (0x0000e02c) list_single_graphic_heading_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_graphic_heading_pane

0xbff4,	// (0x0000e02c) list_single_graphic_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_graphic_pane

0xbff4,	// (0x0000e02c) list_single_heading_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_heading_pane

0xbff4,	// (0x0000e02c) list_single_large_graphic_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_large_graphic_pane

0xbff4,	// (0x0000e02c) list_single_number_heading_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_number_heading_pane

0xbff4,	// (0x0000e02c) list_single_number_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_number_pane

0xbff4,	// (0x0000e02c) list_single_pane_ParamLimits

0xbff4,	// (0x0000e02c) list_single_pane

0xe7f7,	// (0x0001082f) list_highlight_pane_cp1

0xebef,	// (0x00010c27) list_single_pane_g1_ParamLimits

0xebef,	// (0x00010c27) list_single_pane_g1

0xebfb,	// (0x00010c33) list_single_pane_g2_ParamLimits

0xebfb,	// (0x00010c33) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00011600) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00011600) list_single_pane_g

0xbfcc,	// (0x0000e004) list_single_pane_t1_ParamLimits

0xbfcc,	// (0x0000e004) list_single_pane_t1

0xebef,	// (0x00010c27) list_single_number_pane_g1_ParamLimits

0xebef,	// (0x00010c27) list_single_number_pane_g1

0xebfb,	// (0x00010c33) list_single_number_pane_g2_ParamLimits

0xebfb,	// (0x00010c33) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00011600) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00011600) list_single_number_pane_g

0x1569,	// (0x000035a1) list_single_number_pane_t1_ParamLimits

0x1569,	// (0x000035a1) list_single_number_pane_t1

0xbd6c,	// (0x0000dda4) list_single_number_pane_t2_ParamLimits

0xbd6c,	// (0x0000dda4) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00011977) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00011977) list_single_number_pane_t

0x155d,	// (0x00003595) list_single_graphic_pane_g1_ParamLimits

0x155d,	// (0x00003595) list_single_graphic_pane_g1

0xebef,	// (0x00010c27) list_single_graphic_pane_g2_ParamLimits

0xebef,	// (0x00010c27) list_single_graphic_pane_g2

0xebfb,	// (0x00010c33) list_single_graphic_pane_g3_ParamLimits

0xebfb,	// (0x00010c33) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000115f9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000115f9) list_single_graphic_pane_g

0x1569,	// (0x000035a1) list_single_graphic_pane_t1_ParamLimits

0x1569,	// (0x000035a1) list_single_graphic_pane_t1

0xebef,	// (0x00010c27) list_single_heading_pane_g1_ParamLimits

0xebef,	// (0x00010c27) list_single_heading_pane_g1

0xebfb,	// (0x00010c33) list_single_heading_pane_g2_ParamLimits

0xebfb,	// (0x00010c33) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011600) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011600) list_single_heading_pane_g

0x9d21,	// (0x0000bd59) list_single_heading_pane_t1_ParamLimits

0x9d21,	// (0x0000bd59) list_single_heading_pane_t1

0x9d37,	// (0x0000bd6f) list_single_heading_pane_t2_ParamLimits

0x9d37,	// (0x0000bd6f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011605) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011605) list_single_heading_pane_t

0xebef,	// (0x00010c27) list_single_number_heading_pane_g1_ParamLimits

0xebef,	// (0x00010c27) list_single_number_heading_pane_g1

0xebfb,	// (0x00010c33) list_single_number_heading_pane_g2_ParamLimits

0xebfb,	// (0x00010c33) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011600) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011600) list_single_number_heading_pane_g

0x9d21,	// (0x0000bd59) list_single_number_heading_pane_t1_ParamLimits

0x9d21,	// (0x0000bd59) list_single_number_heading_pane_t1

0x9d49,	// (0x0000bd81) list_single_number_heading_pane_t2_ParamLimits

0x9d49,	// (0x0000bd81) list_single_number_heading_pane_t2

0x9d5b,	// (0x0000bd93) list_single_number_heading_pane_t3_ParamLimits

0x9d5b,	// (0x0000bd93) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001160a) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001160a) list_single_number_heading_pane_t

0x9d6d,	// (0x0000bda5) list_single_graphic_heading_pane_g1_ParamLimits

0x9d6d,	// (0x0000bda5) list_single_graphic_heading_pane_g1

0x9d79,	// (0x0000bdb1) list_single_graphic_heading_pane_g4_ParamLimits

0x9d79,	// (0x0000bdb1) list_single_graphic_heading_pane_g4

0xebfb,	// (0x00010c33) list_single_graphic_heading_pane_g5_ParamLimits

0xebfb,	// (0x00010c33) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00011611) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00011611) list_single_graphic_heading_pane_g

0x9d21,	// (0x0000bd59) list_single_graphic_heading_pane_t1_ParamLimits

0x9d21,	// (0x0000bd59) list_single_graphic_heading_pane_t1

0x9d8a,	// (0x0000bdc2) list_single_graphic_heading_pane_t2_ParamLimits

0x9d8a,	// (0x0000bdc2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00011618) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00011618) list_single_graphic_heading_pane_t

0x39c1,	// (0x000059f9) list_single_large_graphic_pane_g1_ParamLimits

0x39c1,	// (0x000059f9) list_single_large_graphic_pane_g1

0xebef,	// (0x00010c27) list_single_large_graphic_pane_g2_ParamLimits

0xebef,	// (0x00010c27) list_single_large_graphic_pane_g2

0xebfb,	// (0x00010c33) list_single_large_graphic_pane_g3_ParamLimits

0xebfb,	// (0x00010c33) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001161d) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001161d) list_single_large_graphic_pane_g

0x1dd7,	// (0x00003e0f) wait_border_pane_g2_copy1

0x9d9c,	// (0x0000bdd4) list_single_large_graphic_pane_g4_cp2

0x1569,	// (0x000035a1) list_single_large_graphic_pane_t1_ParamLimits

0x1569,	// (0x000035a1) list_single_large_graphic_pane_t1

0x9da4,	// (0x0000bddc) list_double_pane_g1_ParamLimits

0x9da4,	// (0x0000bddc) list_double_pane_g1

0x9db0,	// (0x0000bde8) list_double_pane_g2_ParamLimits

0x9db0,	// (0x0000bde8) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011624) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011624) list_double_pane_g

0x9dbc,	// (0x0000bdf4) list_double_pane_t1_ParamLimits

0x9dbc,	// (0x0000bdf4) list_double_pane_t1

0x9dd2,	// (0x0000be0a) list_double_pane_t2_ParamLimits

0x9dd2,	// (0x0000be0a) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00011629) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00011629) list_double_pane_t

0x9de4,	// (0x0000be1c) list_double2_pane_g1_ParamLimits

0x9de4,	// (0x0000be1c) list_double2_pane_g1

0x9df5,	// (0x0000be2d) list_double2_pane_g2_ParamLimits

0x9df5,	// (0x0000be2d) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001162e) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001162e) list_double2_pane_g

0x9e01,	// (0x0000be39) list_double2_pane_t1_ParamLimits

0x9e01,	// (0x0000be39) list_double2_pane_t1

0x9e17,	// (0x0000be4f) list_double2_pane_t2_ParamLimits

0x9e17,	// (0x0000be4f) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00011633) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00011633) list_double2_pane_t

0x9da4,	// (0x0000bddc) list_double_number_pane_g1_ParamLimits

0x9da4,	// (0x0000bddc) list_double_number_pane_g1

0x9db0,	// (0x0000bde8) list_double_number_pane_g2_ParamLimits

0x9db0,	// (0x0000bde8) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011624) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011624) list_double_number_pane_g

0x9e29,	// (0x0000be61) list_double_number_pane_t1_ParamLimits

0x9e29,	// (0x0000be61) list_double_number_pane_t1

0x9e3b,	// (0x0000be73) list_double_number_pane_t2_ParamLimits

0x9e3b,	// (0x0000be73) list_double_number_pane_t2

0x9e51,	// (0x0000be89) list_double_number_pane_t3_ParamLimits

0x9e51,	// (0x0000be89) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00011638) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00011638) list_double_number_pane_t

0x9e63,	// (0x0000be9b) list_double_graphic_pane_g1_ParamLimits

0x9e63,	// (0x0000be9b) list_double_graphic_pane_g1

0x9e6f,	// (0x0000bea7) list_double_graphic_pane_g2_ParamLimits

0x9e6f,	// (0x0000bea7) list_double_graphic_pane_g2

0x9e7e,	// (0x0000beb6) list_double_graphic_pane_g3_ParamLimits

0x9e7e,	// (0x0000beb6) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001163f) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001163f) list_double_graphic_pane_g

0x9dbc,	// (0x0000bdf4) list_double_graphic_pane_t1_ParamLimits

0x9dbc,	// (0x0000bdf4) list_double_graphic_pane_t1

0x9dd2,	// (0x0000be0a) list_double_graphic_pane_t2_ParamLimits

0x9dd2,	// (0x0000be0a) list_double_graphic_pane_t2

0x0001,

0xf5f1,	// (0x00011629) list_double_graphic_pane_t_ParamLimits

0xf5f1,	// (0x00011629) list_double_graphic_pane_t

0x9e96,	// (0x0000bece) list_double2_graphic_pane_g1_ParamLimits

0x9e96,	// (0x0000bece) list_double2_graphic_pane_g1

0x4e06,	// (0x00006e3e) list_double2_graphic_pane_g2_ParamLimits

0x4e06,	// (0x00006e3e) list_double2_graphic_pane_g2

0x9df5,	// (0x0000be2d) list_double2_graphic_pane_g3_ParamLimits

0x9df5,	// (0x0000be2d) list_double2_graphic_pane_g3

0x0002,

0xf610,	// (0x00011648) list_double2_graphic_pane_g_ParamLimits

0xf610,	// (0x00011648) list_double2_graphic_pane_g

0x9ea2,	// (0x0000beda) list_double2_graphic_pane_t1_ParamLimits

0x9ea2,	// (0x0000beda) list_double2_graphic_pane_t1

0x9eb8,	// (0x0000bef0) list_double2_graphic_pane_t2_ParamLimits

0x9eb8,	// (0x0000bef0) list_double2_graphic_pane_t2

0x0001,

0xf617,	// (0x0001164f) list_double2_graphic_pane_t_ParamLimits

0xf617,	// (0x0001164f) list_double2_graphic_pane_t

0x9eca,	// (0x0000bf02) list_double_large_graphic_pane_g1_ParamLimits

0x9eca,	// (0x0000bf02) list_double_large_graphic_pane_g1

0x9ee9,	// (0x0000bf21) list_double_large_graphic_pane_g2_ParamLimits

0x9ee9,	// (0x0000bf21) list_double_large_graphic_pane_g2

0x9db0,	// (0x0000bde8) list_double_large_graphic_pane_g3_ParamLimits

0x9db0,	// (0x0000bde8) list_double_large_graphic_pane_g3

0x9efa,	// (0x0000bf32) list_double_large_graphic_pane_g4_ParamLimits

0x9efa,	// (0x0000bf32) list_double_large_graphic_pane_g4

0x0004,

0xf61c,	// (0x00011654) list_double_large_graphic_pane_g_ParamLimits

0xf61c,	// (0x00011654) list_double_large_graphic_pane_g

0x9f0d,	// (0x0000bf45) list_double_large_graphic_pane_t1_ParamLimits

0x9f0d,	// (0x0000bf45) list_double_large_graphic_pane_t1

0x9f26,	// (0x0000bf5e) list_double_large_graphic_pane_t2_ParamLimits

0x9f26,	// (0x0000bf5e) list_double_large_graphic_pane_t2

0x0001,

0xf627,	// (0x0001165f) list_double_large_graphic_pane_t_ParamLimits

0xf627,	// (0x0001165f) list_double_large_graphic_pane_t

0x9f38,	// (0x0000bf70) list_double2_large_graphic_pane_g1_ParamLimits

0x9f38,	// (0x0000bf70) list_double2_large_graphic_pane_g1

0x9de4,	// (0x0000be1c) list_double2_large_graphic_pane_g2_ParamLimits

0x9de4,	// (0x0000be1c) list_double2_large_graphic_pane_g2

0x9df5,	// (0x0000be2d) list_double2_large_graphic_pane_g3_ParamLimits

0x9df5,	// (0x0000be2d) list_double2_large_graphic_pane_g3

0x0002,

0xf62c,	// (0x00011664) list_double2_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00011664) list_double2_large_graphic_pane_g

0x9ea2,	// (0x0000beda) list_double2_large_graphic_pane_t1_ParamLimits

0x9ea2,	// (0x0000beda) list_double2_large_graphic_pane_t1

0x9eb8,	// (0x0000bef0) list_double2_large_graphic_pane_t2_ParamLimits

0x9eb8,	// (0x0000bef0) list_double2_large_graphic_pane_t2

0x0001,

0xf617,	// (0x0001164f) list_double2_large_graphic_pane_t_ParamLimits

0xf617,	// (0x0001164f) list_double2_large_graphic_pane_t

0x9f44,	// (0x0000bf7c) list_double_heading_pane_g1_ParamLimits

0x9f44,	// (0x0000bf7c) list_double_heading_pane_g1

0x9f55,	// (0x0000bf8d) list_double_heading_pane_g2_ParamLimits

0x9f55,	// (0x0000bf8d) list_double_heading_pane_g2

0x0001,

0xf633,	// (0x0001166b) list_double_heading_pane_g_ParamLimits

0xf633,	// (0x0001166b) list_double_heading_pane_g

0x9f61,	// (0x0000bf99) list_double_heading_pane_t1_ParamLimits

0x9f61,	// (0x0000bf99) list_double_heading_pane_t1

0x9f77,	// (0x0000bfaf) list_double_heading_pane_t2_ParamLimits

0x9f77,	// (0x0000bfaf) list_double_heading_pane_t2

0x0001,

0xf638,	// (0x00011670) list_double_heading_pane_t_ParamLimits

0xf638,	// (0x00011670) list_double_heading_pane_t

0x9f89,	// (0x0000bfc1) list_double_graphic_heading_pane_g1_ParamLimits

0x9f89,	// (0x0000bfc1) list_double_graphic_heading_pane_g1

0x9f44,	// (0x0000bf7c) list_double_graphic_heading_pane_g2_ParamLimits

0x9f44,	// (0x0000bf7c) list_double_graphic_heading_pane_g2

0x9f55,	// (0x0000bf8d) list_double_graphic_heading_pane_g3_ParamLimits

0x9f55,	// (0x0000bf8d) list_double_graphic_heading_pane_g3

0x0002,

0xf63d,	// (0x00011675) list_double_graphic_heading_pane_g_ParamLimits

0xf63d,	// (0x00011675) list_double_graphic_heading_pane_g

0x9f61,	// (0x0000bf99) list_double_graphic_heading_pane_t1_ParamLimits

0x9f61,	// (0x0000bf99) list_double_graphic_heading_pane_t1

0x9f77,	// (0x0000bfaf) list_double_graphic_heading_pane_t2_ParamLimits

0x9f77,	// (0x0000bfaf) list_double_graphic_heading_pane_t2

0x0001,

0xf638,	// (0x00011670) list_double_graphic_heading_pane_t_ParamLimits

0xf638,	// (0x00011670) list_double_graphic_heading_pane_t

0x9ee9,	// (0x0000bf21) list_double_time_pane_g1_ParamLimits

0x9ee9,	// (0x0000bf21) list_double_time_pane_g1

0x9db0,	// (0x0000bde8) list_double_time_pane_g2_ParamLimits

0x9db0,	// (0x0000bde8) list_double_time_pane_g2

0x0001,

0xf644,	// (0x0001167c) list_double_time_pane_g_ParamLimits

0xf644,	// (0x0001167c) list_double_time_pane_g

0x9f95,	// (0x0000bfcd) list_double_time_pane_t1_ParamLimits

0x9f95,	// (0x0000bfcd) list_double_time_pane_t1

0x9fab,	// (0x0000bfe3) list_double_time_pane_t2_ParamLimits

0x9fab,	// (0x0000bfe3) list_double_time_pane_t2

0x9fbd,	// (0x0000bff5) list_double_time_pane_t3_ParamLimits

0x9fbd,	// (0x0000bff5) list_double_time_pane_t3

0x9fcf,	// (0x0000c007) list_double_time_pane_t4_ParamLimits

0x9fcf,	// (0x0000c007) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00011681) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00011681) list_double_time_pane_t

0x4e06,	// (0x00006e3e) list_setting_pane_g1_ParamLimits

0x4e06,	// (0x00006e3e) list_setting_pane_g1

0x9df5,	// (0x0000be2d) list_setting_pane_g2_ParamLimits

0x9df5,	// (0x0000be2d) list_setting_pane_g2

0x0001,

0xf652,	// (0x0001168a) list_setting_pane_g_ParamLimits

0xf652,	// (0x0001168a) list_setting_pane_g

0x9fe1,	// (0x0000c019) list_setting_pane_t1_ParamLimits

0x9fe1,	// (0x0000c019) list_setting_pane_t1

0x9ff8,	// (0x0000c030) list_setting_pane_t2_ParamLimits

0x9ff8,	// (0x0000c030) list_setting_pane_t2

0x0002,

0xf657,	// (0x0001168f) list_setting_pane_t_ParamLimits

0xf657,	// (0x0001168f) list_setting_pane_t

0xa037,	// (0x0000c06f) set_value_pane_cp_ParamLimits

0xa037,	// (0x0000c06f) set_value_pane_cp

0x4e06,	// (0x00006e3e) list_setting_number_pane_g1_ParamLimits

0x4e06,	// (0x00006e3e) list_setting_number_pane_g1

0x9df5,	// (0x0000be2d) list_setting_number_pane_g2_ParamLimits

0x9df5,	// (0x0000be2d) list_setting_number_pane_g2

0x0001,

0xf652,	// (0x0001168a) list_setting_number_pane_g_ParamLimits

0xf652,	// (0x0001168a) list_setting_number_pane_g

0xa043,	// (0x0000c07b) list_setting_number_pane_t1_ParamLimits

0xa043,	// (0x0000c07b) list_setting_number_pane_t1

0xa057,	// (0x0000c08f) list_setting_number_pane_t2_ParamLimits

0xa057,	// (0x0000c08f) list_setting_number_pane_t2

0xa06e,	// (0x0000c0a6) list_setting_number_pane_t3_ParamLimits

0xa06e,	// (0x0000c0a6) list_setting_number_pane_t3

0x0003,

0xf65e,	// (0x00011696) list_setting_number_pane_t_ParamLimits

0xf65e,	// (0x00011696) list_setting_number_pane_t

0xa037,	// (0x0000c06f) set_value_pane_ParamLimits

0xa037,	// (0x0000c06f) set_value_pane

0xec34,	// (0x00010c6c) bg_set_opt_pane_ParamLimits

0xec34,	// (0x00010c6c) bg_set_opt_pane

0xec55,	// (0x00010c8d) set_value_pane_t1

0xec63,	// (0x00010c9b) slider_set_pane_cp3

0xa0b1,	// (0x0000c0e9) volume_small_pane_cp

0xec6c,	// (0x00010ca4) list_form_gen_pane

0xec75,	// (0x00010cad) scroll_pane_cp8

0xa0ba,	// (0x0000c0f2) form_field_data_pane_ParamLimits

0xa0ba,	// (0x0000c0f2) form_field_data_pane

0xa0d1,	// (0x0000c109) form_field_data_wide_pane_ParamLimits

0xa0d1,	// (0x0000c109) form_field_data_wide_pane

0xa0f1,	// (0x0000c129) form_field_popup_pane_ParamLimits

0xa0f1,	// (0x0000c129) form_field_popup_pane

0xa111,	// (0x0000c149) form_field_popup_wide_pane_ParamLimits

0xa111,	// (0x0000c149) form_field_popup_wide_pane

0xec96,	// (0x00010cce) form_field_slider_pane_ParamLimits

0xec96,	// (0x00010cce) form_field_slider_pane

0xa128,	// (0x0000c160) form_field_slider_wide_pane_ParamLimits

0xa128,	// (0x0000c160) form_field_slider_wide_pane

0xeca9,	// (0x00010ce1) data_form_pane

0xa145,	// (0x0000c17d) form_field_data_pane_t1

0xecb5,	// (0x00010ced) input_focus_pane

0xecc3,	// (0x00010cfb) data_form_wide_pane

0xecf4,	// (0x00010d2c) form_field_data_wide_pane_t1

0xeb33,	// (0x00010b6b) input_focus_pane_cp6

0xa15f,	// (0x0000c197) form_field_popup_pane_t1

0xecb5,	// (0x00010ced) input_focus_pane_cp7

0xed16,	// (0x00010d4e) list_form_pane

0xed2a,	// (0x00010d62) form_field_popup_wide_pane_t1

0xecb5,	// (0x00010ced) input_focus_pane_cp8

0xed3f,	// (0x00010d77) list_form_wide_pane

0xa181,	// (0x0000c1b9) form_field_slider_pane_t1_ParamLimits

0xa181,	// (0x0000c1b9) form_field_slider_pane_t1

0xa199,	// (0x0000c1d1) form_field_slider_pane_t2_ParamLimits

0xa199,	// (0x0000c1d1) form_field_slider_pane_t2

0x0001,

0xf66e,	// (0x000116a6) form_field_slider_pane_t_ParamLimits

0xf66e,	// (0x000116a6) form_field_slider_pane_t

0xe865,	// (0x0001089d) input_focus_pane_cp9_ParamLimits

0xe865,	// (0x0001089d) input_focus_pane_cp9

0xa1ae,	// (0x0000c1e6) slider_cont_pane_ParamLimits

0xa1ae,	// (0x0000c1e6) slider_cont_pane

0xed4b,	// (0x00010d83) form_field_slider_wide_pane_t1_ParamLimits

0xed4b,	// (0x00010d83) form_field_slider_wide_pane_t1

0xed5d,	// (0x00010d95) form_field_slider_wide_pane_t2_ParamLimits

0xed5d,	// (0x00010d95) form_field_slider_wide_pane_t2

0x0001,

0xf673,	// (0x000116ab) form_field_slider_wide_pane_t_ParamLimits

0xf673,	// (0x000116ab) form_field_slider_wide_pane_t

0xe865,	// (0x0001089d) input_focus_pane_cp10_ParamLimits

0xe865,	// (0x0001089d) input_focus_pane_cp10

0xa1c2,	// (0x0000c1fa) slider_cont_pane_cp1_ParamLimits

0xa1c2,	// (0x0000c1fa) slider_cont_pane_cp1

0xa1d6,	// (0x0000c20e) slider_form_pane_cp

0xed6f,	// (0x00010da7) input_focus_pane_g1

0xed77,	// (0x00010daf) input_focus_pane_g2

0xed7f,	// (0x00010db7) input_focus_pane_g3

0xed87,	// (0x00010dbf) input_focus_pane_g4

0xed8f,	// (0x00010dc7) input_focus_pane_g5

0xed97,	// (0x00010dcf) input_focus_pane_g6

0xed9f,	// (0x00010dd7) input_focus_pane_g7

0xeda7,	// (0x00010ddf) input_focus_pane_g8

0xedaf,	// (0x00010de7) input_focus_pane_g9

0xe67e,	// (0x000106b6) input_focus_pane_g10

0x0009,

0xf678,	// (0x000116b0) input_focus_pane_g

0x1de0,	// (0x00003e18) wait_border_pane_g3_copy1

0xa1de,	// (0x0000c216) data_form_pane_t1

0xe67e,	// (0x000106b6) wait_anim_pane_g1_copy1

0xbfb0,	// (0x0000dfe8) data_form_wide_pane_t1

0xa1f8,	// (0x0000c230) list_form_graphic_pane_cp_ParamLimits

0xa1f8,	// (0x0000c230) list_form_graphic_pane_cp

0x2f13,	// (0x00004f4b) slider_form_pane_g1

0x2f1c,	// (0x00004f54) slider_form_pane_g2

0x0006,

0xf96f,	// (0x000119a7) slider_form_pane_g

0xa20a,	// (0x0000c242) list_form_graphic_pane_ParamLimits

0xa20a,	// (0x0000c242) list_form_graphic_pane

0xa21d,	// (0x0000c255) list_form_graphic_pane_g1

0xa225,	// (0x0000c25d) list_form_graphic_pane_t1_ParamLimits

0xa225,	// (0x0000c25d) list_form_graphic_pane_t1

0xe873,	// (0x000108ab) list_highlight_pane_cp5_ParamLimits

0xe873,	// (0x000108ab) list_highlight_pane_cp5

0xa23a,	// (0x0000c272) find_pane_g1

0xedb7,	// (0x00010def) input_find_pane

0xa243,	// (0x0000c27b) input_find_pane_g1_ParamLimits

0xa243,	// (0x0000c27b) input_find_pane_g1

0xa24f,	// (0x0000c287) input_find_pane_t1_ParamLimits

0xa24f,	// (0x0000c287) input_find_pane_t1

0xa264,	// (0x0000c29c) input_find_pane_t2_ParamLimits

0xa264,	// (0x0000c29c) input_find_pane_t2

0x0001,

0xf68d,	// (0x000116c5) input_find_pane_t_ParamLimits

0xf68d,	// (0x000116c5) input_find_pane_t

0xedc0,	// (0x00010df8) input_focus_pane_cp5_ParamLimits

0xedc0,	// (0x00010df8) input_focus_pane_cp5

0xedce,	// (0x00010e06) bg_popup_window_pane_cp2_ParamLimits

0xedce,	// (0x00010e06) bg_popup_window_pane_cp2

0xeddb,	// (0x00010e13) listscroll_menu_pane_ParamLimits

0xeddb,	// (0x00010e13) listscroll_menu_pane

0xa285,	// (0x0000c2bd) popup_submenu_window_ParamLimits

0xa285,	// (0x0000c2bd) popup_submenu_window

0xede7,	// (0x00010e1f) find_popup_pane_g1

0xa2ad,	// (0x0000c2e5) input_popup_find_pane_cp

0xedc0,	// (0x00010df8) input_focus_pane_cp4_ParamLimits

0xedc0,	// (0x00010df8) input_focus_pane_cp4

0xedef,	// (0x00010e27) input_popup_find_pane_t1_ParamLimits

0xedef,	// (0x00010e27) input_popup_find_pane_t1

0xe7f7,	// (0x0001082f) bg_popup_sub_pane_cp

0xee1d,	// (0x00010e55) listscroll_popup_sub_pane

0xee25,	// (0x00010e5d) list_submenu_pane_ParamLimits

0xee25,	// (0x00010e5d) list_submenu_pane

0xee36,	// (0x00010e6e) scroll_pane_cp4

0xa2c5,	// (0x0000c2fd) list_single_popup_submenu_pane_ParamLimits

0xa2c5,	// (0x0000c2fd) list_single_popup_submenu_pane

0xa2d9,	// (0x0000c311) list_single_popup_submenu_pane_g1

0xa2e1,	// (0x0000c319) list_single_popup_submenu_pane_t1_ParamLimits

0xa2e1,	// (0x0000c319) list_single_popup_submenu_pane_t1

0xe865,	// (0x0001089d) bg_active_tab_pane_cp1_ParamLimits

0xe865,	// (0x0001089d) bg_active_tab_pane_cp1

0xee3e,	// (0x00010e76) tabs_2_active_pane_g1

0xa2f6,	// (0x0000c32e) tabs_2_active_pane_t1

0xe865,	// (0x0001089d) bg_passive_tab_pane_cp1_ParamLimits

0xe865,	// (0x0001089d) bg_passive_tab_pane_cp1

0xee3e,	// (0x00010e76) tabs_2_passive_pane_g1

0xa2f6,	// (0x0000c32e) tabs_2_passive_pane_t1

0xe873,	// (0x000108ab) bg_active_tab_pane_cp4

0xa308,	// (0x0000c340) tabs_2_long_active_pane_t1

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp4

0xf542,	// (0x0001157a) list_single_midp_graphic_pane_g4_ParamLimits

0xe873,	// (0x000108ab) bg_active_tab_pane_cp5

0xa31b,	// (0x0000c353) tabs_3_long_active_pane_t1

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp5

0xf542,	// (0x0001157a) list_single_midp_graphic_pane_g4

0xe873,	// (0x000108ab) bg_popup_window_pane_cp13_ParamLimits

0xe873,	// (0x000108ab) bg_popup_window_pane_cp13

0xee46,	// (0x00010e7e) listscroll_popup_fast_pane_ParamLimits

0xee46,	// (0x00010e7e) listscroll_popup_fast_pane

0xee52,	// (0x00010e8a) grid_popup_fast_pane_ParamLimits

0xee52,	// (0x00010e8a) grid_popup_fast_pane

0xee64,	// (0x00010e9c) scroll_pane_cp9_ParamLimits

0xee64,	// (0x00010e9c) scroll_pane_cp9

0x52ed,	// (0x00007325) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x52ed,	// (0x00007325) list_single_graphic_hl_pane_t1_cp2

0xee77,	// (0x00010eaf) input_focus_pane_cp20_ParamLimits

0xee77,	// (0x00010eaf) input_focus_pane_cp20

0xee85,	// (0x00010ebd) query_popup_data_pane_t1_ParamLimits

0xee85,	// (0x00010ebd) query_popup_data_pane_t1

0xee98,	// (0x00010ed0) query_popup_data_pane_t2_ParamLimits

0xee98,	// (0x00010ed0) query_popup_data_pane_t2

0xeef4,	// (0x00010f2c) query_popup_data_pane_t3_ParamLimits

0xeef4,	// (0x00010f2c) query_popup_data_pane_t3

0xef35,	// (0x00010f6d) query_popup_data_pane_t4_ParamLimits

0xef35,	// (0x00010f6d) query_popup_data_pane_t4

0xef71,	// (0x00010fa9) query_popup_data_pane_t5_ParamLimits

0xef71,	// (0x00010fa9) query_popup_data_pane_t5

0x0004,

0xf692,	// (0x000116ca) query_popup_data_pane_t_ParamLimits

0xf692,	// (0x000116ca) query_popup_data_pane_t

0xed6f,	// (0x00010da7) bg_set_opt_pane_g1

0xed77,	// (0x00010daf) bg_set_opt_pane_g2

0xed7f,	// (0x00010db7) bg_set_opt_pane_g3

0xed87,	// (0x00010dbf) bg_set_opt_pane_g4

0xed8f,	// (0x00010dc7) bg_set_opt_pane_g5

0xed97,	// (0x00010dcf) bg_set_opt_pane_g6

0xed9f,	// (0x00010dd7) bg_set_opt_pane_g7

0xeda7,	// (0x00010ddf) bg_set_opt_pane_g8

0xedaf,	// (0x00010de7) bg_set_opt_pane_g9

0x0008,

0xf69d,	// (0x000116d5) bg_set_opt_pane_g

0x0066,	// (0x0000209e) control_top_pane_stacon_ParamLimits

0x0066,	// (0x0000209e) control_top_pane_stacon

0x00b9,	// (0x000020f1) signal_pane_stacon_ParamLimits

0x00b9,	// (0x000020f1) signal_pane_stacon

0x00de,	// (0x00002116) stacon_top_pane_g1_ParamLimits

0x00de,	// (0x00002116) stacon_top_pane_g1

0x0100,	// (0x00002138) title_pane_stacon_ParamLimits

0x0100,	// (0x00002138) title_pane_stacon

0x012a,	// (0x00002162) uni_indicator_pane_stacon_ParamLimits

0x012a,	// (0x00002162) uni_indicator_pane_stacon

0x013f,	// (0x00002177) battery_pane_stacon_ParamLimits

0x013f,	// (0x00002177) battery_pane_stacon

0x0183,	// (0x000021bb) control_bottom_pane_stacon_ParamLimits

0x0183,	// (0x000021bb) control_bottom_pane_stacon

0x01a6,	// (0x000021de) navi_pane_stacon_ParamLimits

0x01a6,	// (0x000021de) navi_pane_stacon

0x01c9,	// (0x00002201) stacon_bottom_pane_g1_ParamLimits

0x01c9,	// (0x00002201) stacon_bottom_pane_g1

0xefa8,	// (0x00010fe0) aid_levels_signal_lsc_ParamLimits

0xefa8,	// (0x00010fe0) aid_levels_signal_lsc

0xefbe,	// (0x00010ff6) signal_pane_stacon_g1_ParamLimits

0xefbe,	// (0x00010ff6) signal_pane_stacon_g1

0xefd2,	// (0x0001100a) signal_pane_stacon_g2_ParamLimits

0xefd2,	// (0x0001100a) signal_pane_stacon_g2

0x0001,

0xf6b0,	// (0x000116e8) signal_pane_stacon_g_ParamLimits

0xf6b0,	// (0x000116e8) signal_pane_stacon_g

0xf014,	// (0x0001104c) title_pane_stacon_t1_ParamLimits

0xf014,	// (0x0001104c) title_pane_stacon_t1

0xf039,	// (0x00011071) uni_indicator_pane_stacon_g1

0xf043,	// (0x0001107b) uni_indicator_pane_stacon_g2

0xf04d,	// (0x00011085) uni_indicator_pane_stacon_g3

0xf057,	// (0x0001108f) uni_indicator_pane_stacon_g4

0x0003,

0xf6bc,	// (0x000116f4) uni_indicator_pane_stacon_g

0xf061,	// (0x00011099) control_top_pane_stacon_g1

0xf069,	// (0x000110a1) control_top_pane_stacon_t1_ParamLimits

0xf069,	// (0x000110a1) control_top_pane_stacon_t1

0xf0a0,	// (0x000110d8) aid_levels_battery_lsc_ParamLimits

0xf0a0,	// (0x000110d8) aid_levels_battery_lsc

0xf0b7,	// (0x000110ef) battery_pane_stacon_g1_ParamLimits

0xf0b7,	// (0x000110ef) battery_pane_stacon_g1

0xf0ca,	// (0x00011102) battery_pane_stacon_g2_ParamLimits

0xf0ca,	// (0x00011102) battery_pane_stacon_g2

0x0001,

0xf6c5,	// (0x000116fd) battery_pane_stacon_g_ParamLimits

0xf6c5,	// (0x000116fd) battery_pane_stacon_g

0xf108,	// (0x00011140) navi_icon_pane_stacon

0xf11c,	// (0x00011154) navi_navi_pane_stacon

0xf108,	// (0x00011140) navi_text_pane_stacon

0xf061,	// (0x00011099) control_bottom_pane_stacon_g1

0xf130,	// (0x00011168) control_bottom_pane_stacon_t1_ParamLimits

0xf130,	// (0x00011168) control_bottom_pane_stacon_t1

0xa347,	// (0x0000c37f) grid_app_pane_ParamLimits

0xa347,	// (0x0000c37f) grid_app_pane

0xa37f,	// (0x0000c3b7) scroll_pane_cp15_ParamLimits

0xa37f,	// (0x0000c3b7) scroll_pane_cp15

0xa394,	// (0x0000c3cc) cell_app_pane_ParamLimits

0xa394,	// (0x0000c3cc) cell_app_pane

0xa3d9,	// (0x0000c411) cell_app_pane_g1_ParamLimits

0xa3d9,	// (0x0000c411) cell_app_pane_g1

0xf181,	// (0x000111b9) cell_app_pane_g2_ParamLimits

0xf181,	// (0x000111b9) cell_app_pane_g2

0x0001,

0xf6ca,	// (0x00011702) cell_app_pane_g_ParamLimits

0xf6ca,	// (0x00011702) cell_app_pane_g

0xa3fd,	// (0x0000c435) cell_app_pane_t1_ParamLimits

0xa3fd,	// (0x0000c435) cell_app_pane_t1

0xf18d,	// (0x000111c5) grid_highlight_pane_ParamLimits

0xf18d,	// (0x000111c5) grid_highlight_pane

0xed6f,	// (0x00010da7) cell_highlight_pane_g1

0xed77,	// (0x00010daf) cell_highlight_pane_g2

0xed7f,	// (0x00010db7) cell_highlight_pane_g3

0xed87,	// (0x00010dbf) cell_highlight_pane_g4

0xed8f,	// (0x00010dc7) cell_highlight_pane_g5

0xed97,	// (0x00010dcf) cell_highlight_pane_g6

0xed9f,	// (0x00010dd7) cell_highlight_pane_g7

0xeda7,	// (0x00010ddf) cell_highlight_pane_g8

0xedaf,	// (0x00010de7) cell_highlight_pane_g9

0xe67e,	// (0x000106b6) cell_highlight_pane_g10

0x0009,

0xf678,	// (0x000116b0) cell_highlight_pane_g

0xf1a8,	// (0x000111e0) bg_scroll_pane

0xa41d,	// (0x0000c455) scroll_handle_pane

0xf204,	// (0x0001123c) scroll_bg_pane_g1

0xf219,	// (0x00011251) scroll_bg_pane_g2

0xf231,	// (0x00011269) scroll_bg_pane_g3

0x0002,

0xf6cf,	// (0x00011707) scroll_bg_pane_g

0xa431,	// (0x0000c469) scroll_handle_focus_pane_ParamLimits

0xa431,	// (0x0000c469) scroll_handle_focus_pane

0xf204,	// (0x0001123c) scroll_handle_pane_g1

0xf246,	// (0x0001127e) scroll_handle_pane_g2

0xf231,	// (0x00011269) scroll_handle_pane_g3

0x0002,

0xf6d6,	// (0x0001170e) scroll_handle_pane_g

0xedc0,	// (0x00010df8) bg_popup_sub_pane_cp21_ParamLimits

0xedc0,	// (0x00010df8) bg_popup_sub_pane_cp21

0xa43e,	// (0x0000c476) popup_fep_japan_predictive_window_t1_ParamLimits

0xa43e,	// (0x0000c476) popup_fep_japan_predictive_window_t1

0xa455,	// (0x0000c48d) popup_fep_japan_predictive_window_t2_ParamLimits

0xa455,	// (0x0000c48d) popup_fep_japan_predictive_window_t2

0xa488,	// (0x0000c4c0) popup_fep_japan_predictive_window_t3_ParamLimits

0xa488,	// (0x0000c4c0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6dd,	// (0x00011715) popup_fep_japan_predictive_window_t_ParamLimits

0xf6dd,	// (0x00011715) popup_fep_japan_predictive_window_t

0xe7f7,	// (0x0001082f) bg_popup_sub_pane_cp23

0xa4bf,	// (0x0000c4f7) listscroll_japin_cand_pane

0xf25a,	// (0x00011292) popup_fep_japan_candidate_window_t1

0xf268,	// (0x000112a0) candidate_pane_ParamLimits

0xf268,	// (0x000112a0) candidate_pane

0xa4c7,	// (0x0000c4ff) scroll_pane_cp30

0xf27a,	// (0x000112b2) list_single_popup_jap_candidate_pane_ParamLimits

0xf27a,	// (0x000112b2) list_single_popup_jap_candidate_pane

0xe7f7,	// (0x0001082f) list_highlight_pane_cp30

0xf28f,	// (0x000112c7) list_single_popup_jap_candidate_pane_t1

0xf29e,	// (0x000112d6) level_1_signal

0xf2ab,	// (0x000112e3) level_2_signal

0xf2b8,	// (0x000112f0) level_3_signal

0xf2cd,	// (0x00011305) level_4_signal

0xf2da,	// (0x00011312) level_5_signal

0xf2e7,	// (0x0001131f) level_6_signal

0xf2f4,	// (0x0001132c) level_7_signal

0xf29e,	// (0x000112d6) level_1_battery

0xf2ab,	// (0x000112e3) level_2_battery

0xf2b8,	// (0x000112f0) level_3_battery

0xf2cd,	// (0x00011305) level_4_battery

0xf2da,	// (0x00011312) level_5_battery

0xf2e7,	// (0x0001131f) level_6_battery

0xf2f4,	// (0x0001132c) level_7_battery

0xf338,	// (0x00011370) list_menu_pane_ParamLimits

0xf338,	// (0x00011370) list_menu_pane

0xf34e,	// (0x00011386) scroll_pane_cp25_ParamLimits

0xf34e,	// (0x00011386) scroll_pane_cp25

0xa4cf,	// (0x0000c507) list_double2_graphic_pane_cp2_ParamLimits

0xa4cf,	// (0x0000c507) list_double2_graphic_pane_cp2

0xa4cf,	// (0x0000c507) list_double2_large_graphic_pane_cp2_ParamLimits

0xa4cf,	// (0x0000c507) list_double2_large_graphic_pane_cp2

0xa4cf,	// (0x0000c507) list_double2_pane_cp2_ParamLimits

0xa4cf,	// (0x0000c507) list_double2_pane_cp2

0xa4cf,	// (0x0000c507) list_double_graphic_pane_cp2_ParamLimits

0xa4cf,	// (0x0000c507) list_double_graphic_pane_cp2

0xa4cf,	// (0x0000c507) list_double_large_graphic_pane_cp2_ParamLimits

0xa4cf,	// (0x0000c507) list_double_large_graphic_pane_cp2

0xa4cf,	// (0x0000c507) list_double_number_pane_cp2_ParamLimits

0xa4cf,	// (0x0000c507) list_double_number_pane_cp2

0xa4cf,	// (0x0000c507) list_double_pane_cp2_ParamLimits

0xa4cf,	// (0x0000c507) list_double_pane_cp2

0xa4de,	// (0x0000c516) list_single_2graphic_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_2graphic_pane_cp2

0xa4de,	// (0x0000c516) list_single_graphic_heading_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_graphic_heading_pane_cp2

0xa4de,	// (0x0000c516) list_single_graphic_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_graphic_pane_cp2

0xa4de,	// (0x0000c516) list_single_heading_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_heading_pane_cp2

0xf377,	// (0x000113af) list_single_large_graphic_pane_cp2_ParamLimits

0xf377,	// (0x000113af) list_single_large_graphic_pane_cp2

0xa4de,	// (0x0000c516) list_single_number_heading_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_number_heading_pane_cp2

0xa4de,	// (0x0000c516) list_single_number_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_number_pane_cp2

0xa4de,	// (0x0000c516) list_single_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_pane_cp2

0xf3ec,	// (0x00011424) bg_popup_sub_pane_cp22

0xf402,	// (0x0001143a) popup_side_volume_key_window_g1

0xf40e,	// (0x00011446) popup_side_volume_key_window_t1

0xa5a6,	// (0x0000c5de) volume_small_pane_cp1

0xe865,	// (0x0001089d) bg_popup_sub_pane_cp24_ParamLimits

0xe865,	// (0x0001089d) bg_popup_sub_pane_cp24

0xf41c,	// (0x00011454) fep_china_uni_candidate_pane_ParamLimits

0xf41c,	// (0x00011454) fep_china_uni_candidate_pane

0xf430,	// (0x00011468) fep_china_uni_entry_pane

0xf440,	// (0x00011478) popup_fep_china_uni_window_g1

0xa5ae,	// (0x0000c5e6) fep_china_uni_entry_pane_g1

0xa5b6,	// (0x0000c5ee) fep_china_uni_entry_pane_g2

0x0001,

0xf70e,	// (0x00011746) fep_china_uni_entry_pane_g

0xf45c,	// (0x00011494) fep_entry_item_pane

0xf466,	// (0x0001149e) fep_candidate_item_pane

0xa5be,	// (0x0000c5f6) fep_china_uni_candidate_pane_g1

0xf46e,	// (0x000114a6) fep_china_uni_candidate_pane_g2

0xf476,	// (0x000114ae) fep_china_uni_candidate_pane_g3

0xa5c6,	// (0x0000c5fe) fep_china_uni_candidate_pane_g4

0x0003,

0xf713,	// (0x0001174b) fep_china_uni_candidate_pane_g

0xe67e,	// (0x000106b6) fep_entry_item_pane_g1

0xf47e,	// (0x000114b6) fep_entry_item_pane_t1_ParamLimits

0xf47e,	// (0x000114b6) fep_entry_item_pane_t1

0xf494,	// (0x000114cc) fep_candidate_item_pane_t1_ParamLimits

0xf494,	// (0x000114cc) fep_candidate_item_pane_t1

0xf4a9,	// (0x000114e1) fep_candidate_item_pane_t2_ParamLimits

0xf4a9,	// (0x000114e1) fep_candidate_item_pane_t2

0x0001,

0xf71c,	// (0x00011754) fep_candidate_item_pane_t_ParamLimits

0xf71c,	// (0x00011754) fep_candidate_item_pane_t

0xe873,	// (0x000108ab) list_highlight_pane_cp31_ParamLimits

0xe873,	// (0x000108ab) list_highlight_pane_cp31

0xf4bb,	// (0x000114f3) level_1_signal_lsc

0xf4c4,	// (0x000114fc) level_2_signal_lsc

0xf4cd,	// (0x00011505) level_3_signal_lsc

0xf4d6,	// (0x0001150e) level_4_signal_lsc

0xf4df,	// (0x00011517) level_5_signal_lsc

0xf4e8,	// (0x00011520) level_6_signal_lsc

0xf4f1,	// (0x00011529) level_7_signal_lsc

0xf4f1,	// (0x00011529) level_1_battery_lsc

0xf4fa,	// (0x00011532) level_2_battery_lsc

0xf503,	// (0x0001153b) level_3_battery_lsc

0xf50c,	// (0x00011544) level_4_battery_lsc

0xf515,	// (0x0001154d) level_5_battery_lsc

0xf51e,	// (0x00011556) level_6_battery_lsc

0xf4bb,	// (0x000114f3) level_7_battery_lsc

0xf527,	// (0x0001155f) scroll_handle_focus_pane_g1

0xf530,	// (0x00011568) scroll_handle_focus_pane_g2

0xf539,	// (0x00011571) scroll_handle_focus_pane_g3

0x0002,

0xf721,	// (0x00011759) scroll_handle_focus_pane_g

0xa5ce,	// (0x0000c606) list_single_2graphic_pane_g1_ParamLimits

0xa5ce,	// (0x0000c606) list_single_2graphic_pane_g1

0x9d79,	// (0x0000bdb1) list_single_2graphic_pane_g2_ParamLimits

0x9d79,	// (0x0000bdb1) list_single_2graphic_pane_g2

0xebfb,	// (0x00010c33) list_single_2graphic_pane_g3_ParamLimits

0xebfb,	// (0x00010c33) list_single_2graphic_pane_g3

0xa5da,	// (0x0000c612) list_single_2graphic_pane_g4_ParamLimits

0xa5da,	// (0x0000c612) list_single_2graphic_pane_g4

0x0003,

0xf728,	// (0x00011760) list_single_2graphic_pane_g_ParamLimits

0xf728,	// (0x00011760) list_single_2graphic_pane_g

0xa5e6,	// (0x0000c61e) list_single_2graphic_pane_t1_ParamLimits

0xa5e6,	// (0x0000c61e) list_single_2graphic_pane_t1

0xa614,	// (0x0000c64c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa614,	// (0x0000c64c) list_double2_graphic_large_graphic_pane_g1

0x9de4,	// (0x0000be1c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9de4,	// (0x0000be1c) list_double2_graphic_large_graphic_pane_g2

0x9df5,	// (0x0000be2d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9df5,	// (0x0000be2d) list_double2_graphic_large_graphic_pane_g3

0xa626,	// (0x0000c65e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa626,	// (0x0000c65e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf731,	// (0x00011769) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf731,	// (0x00011769) list_double2_graphic_large_graphic_pane_g

0xa632,	// (0x0000c66a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa632,	// (0x0000c66a) list_double2_graphic_large_graphic_pane_t1

0xa648,	// (0x0000c680) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa648,	// (0x0000c680) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73a,	// (0x00011772) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73a,	// (0x00011772) list_double2_graphic_large_graphic_pane_t

0xa6cd,	// (0x0000c705) popup_fast_swap_window_ParamLimits

0xa6cd,	// (0x0000c705) popup_fast_swap_window

0xa6e9,	// (0x0000c721) popup_side_volume_key_window

0x02c6,	// (0x000022fe) stacon_top_pane

0x02d0,	// (0x00002308) status_pane_ParamLimits

0x02d0,	// (0x00002308) status_pane

0xa703,	// (0x0000c73b) status_small_pane

0xe7f7,	// (0x0001082f) control_pane

0xe7f7,	// (0x0001082f) stacon_bottom_pane

0xec75,	// (0x00010cad) scroll_pane_cp121

0xec6c,	// (0x00010ca4) set_content_pane

0xa65a,	// (0x0000c692) bg_active_tab_pane_g1_cp1

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp1

0xa66c,	// (0x0000c6a4) bg_active_tab_pane_g3_cp1

0xa65a,	// (0x0000c692) bg_passive_tab_pane_g1_cp1

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp1

0xa66c,	// (0x0000c6a4) bg_passive_tab_pane_g3_cp1

0xa675,	// (0x0000c6ad) bg_active_tab_pane_g1_cp2

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp2

0xa67e,	// (0x0000c6b6) bg_active_tab_pane_g3_cp2

0xa675,	// (0x0000c6ad) bg_passive_tab_pane_g1_cp2

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp2

0xa67e,	// (0x0000c6b6) bg_passive_tab_pane_g3_cp2

0xa687,	// (0x0000c6bf) bg_active_tab_pane_g1_cp3

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp3

0xa690,	// (0x0000c6c8) bg_active_tab_pane_g3_cp3

0xa687,	// (0x0000c6bf) bg_passive_tab_pane_g1_cp3

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp3

0xa690,	// (0x0000c6c8) bg_passive_tab_pane_g3_cp3

0xa699,	// (0x0000c6d1) bg_active_tab_pane_g1_cp4

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp4

0xa6a4,	// (0x0000c6dc) bg_active_tab_pane_g3_cp4

0xa699,	// (0x0000c6d1) bg_passive_tab_pane_g1_cp4

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp4

0xa6a4,	// (0x0000c6dc) bg_passive_tab_pane_g3_cp4

0xa6af,	// (0x0000c6e7) bg_active_tab_pane_g1_cp5

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp5

0xa6b8,	// (0x0000c6f0) bg_active_tab_pane_g3_cp5

0xa6af,	// (0x0000c6e7) bg_passive_tab_pane_g1_cp5

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp5

0xa6b8,	// (0x0000c6f0) bg_passive_tab_pane_g3_cp5

0x36e4,	// (0x0000571c) list_set_graphic_pane_ParamLimits

0x36e4,	// (0x0000571c) list_set_graphic_pane

0xe7f7,	// (0x0001082f) bg_set_opt_pane_cp4

0x0215,	// (0x0000224d) list_set_graphic_pane_g1_ParamLimits

0x0215,	// (0x0000224d) list_set_graphic_pane_g1

0x0221,	// (0x00002259) list_set_graphic_pane_g2_ParamLimits

0x0221,	// (0x00002259) list_set_graphic_pane_g2

0x0001,

0xf73f,	// (0x00011777) list_set_graphic_pane_g_ParamLimits

0xf73f,	// (0x00011777) list_set_graphic_pane_g

0x0009,

0xfac4,	// (0x00011afc) volume_small_pane_cp_g

0xa6c1,	// (0x0000c6f9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa6c1,	// (0x0000c6f9) list_double2_large_graphic_pane_g1_cp2

0x024f,	// (0x00002287) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x024f,	// (0x00002287) list_double2_large_graphic_pane_g2_cp2

0x0260,	// (0x00002298) list_double2_large_graphic_pane_g3_cp2

0x0268,	// (0x000022a0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0268,	// (0x000022a0) list_double2_large_graphic_pane_t1_cp2

0x027e,	// (0x000022b6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x027e,	// (0x000022b6) list_double2_large_graphic_pane_t2_cp2

0xbc43,	// (0x0000dc7b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbc43,	// (0x0000dc7b) list_double_large_graphic_pane_g1_cp2

0x2a0c,	// (0x00004a44) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2a0c,	// (0x00004a44) list_double_large_graphic_pane_g2_cp2

0x03eb,	// (0x00002423) list_double_large_graphic_pane_g3_cp2

0x2a1d,	// (0x00004a55) list_double_large_graphic_pane_g4_cp

0x2a25,	// (0x00004a5d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2a25,	// (0x00004a5d) list_double_large_graphic_pane_t1_cp2

0x2a3c,	// (0x00004a74) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2a3c,	// (0x00004a74) list_double_large_graphic_pane_t2_cp2

0x02e9,	// (0x00002321) list_double2_graphic_pane_g1_cp2_ParamLimits

0x02e9,	// (0x00002321) list_double2_graphic_pane_g1_cp2

0x02f7,	// (0x0000232f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x02f7,	// (0x0000232f) list_double2_graphic_pane_g2_cp2

0x0308,	// (0x00002340) list_double2_graphic_pane_g3_cp2

0x0312,	// (0x0000234a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0312,	// (0x0000234a) list_double2_graphic_pane_t1_cp2

0x0328,	// (0x00002360) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0328,	// (0x00002360) list_double2_graphic_pane_t2_cp2

0xec28,	// (0x00010c60) list_single_number_heading_pane_g1_cp2_ParamLimits

0xec28,	// (0x00010c60) list_single_number_heading_pane_g1_cp2

0x033a,	// (0x00002372) list_single_number_heading_pane_g2_cp2

0x0342,	// (0x0000237a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0342,	// (0x0000237a) list_single_number_heading_pane_t1_cp2

0x0358,	// (0x00002390) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0358,	// (0x00002390) list_single_number_heading_pane_t2_cp2

0x036a,	// (0x000023a2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x036a,	// (0x000023a2) list_single_number_heading_pane_t3_cp2

0xec28,	// (0x00010c60) list_single_heading_pane_g1_cp2_ParamLimits

0xec28,	// (0x00010c60) list_single_heading_pane_g1_cp2

0x033a,	// (0x00002372) list_single_heading_pane_g2_cp2

0x0342,	// (0x0000237a) list_single_heading_pane_t1_cp2_ParamLimits

0x0342,	// (0x0000237a) list_single_heading_pane_t1_cp2

0x2805,	// (0x0000483d) list_single_heading_pane_t2_cp2_ParamLimits

0x2805,	// (0x0000483d) list_single_heading_pane_t2_cp2

0x274d,	// (0x00004785) list_double_graphic_pane_g1_cp2_ParamLimits

0x274d,	// (0x00004785) list_double_graphic_pane_g1_cp2

0x2759,	// (0x00004791) list_double_graphic_pane_g2_cp2_ParamLimits

0x2759,	// (0x00004791) list_double_graphic_pane_g2_cp2

0x2768,	// (0x000047a0) list_double_graphic_pane_g3_cp2

0x2770,	// (0x000047a8) list_double_graphic_pane_t1_cp2_ParamLimits

0x2770,	// (0x000047a8) list_double_graphic_pane_t1_cp2

0x2786,	// (0x000047be) list_double_graphic_pane_t2_cp2_ParamLimits

0x2786,	// (0x000047be) list_double_graphic_pane_t2_cp2

0x03df,	// (0x00002417) list_double_number_pane_g1_cp2_ParamLimits

0x03df,	// (0x00002417) list_double_number_pane_g1_cp2

0x03eb,	// (0x00002423) list_double_number_pane_g2_cp2

0x2711,	// (0x00004749) list_double_number_pane_t1_cp2_ParamLimits

0x2711,	// (0x00004749) list_double_number_pane_t1_cp2

0x2725,	// (0x0000475d) list_double_number_pane_t2_cp2_ParamLimits

0x2725,	// (0x0000475d) list_double_number_pane_t2_cp2

0x273b,	// (0x00004773) list_double_number_pane_t3_cp2_ParamLimits

0x273b,	// (0x00004773) list_double_number_pane_t3_cp2

0x25e9,	// (0x00004621) list_single_graphic_pane_g1_cp2_ParamLimits

0x25e9,	// (0x00004621) list_single_graphic_pane_g1_cp2

0x0443,	// (0x0000247b) list_single_graphic_pane_g2_cp2_ParamLimits

0x0443,	// (0x0000247b) list_single_graphic_pane_g2_cp2

0x044f,	// (0x00002487) list_single_graphic_pane_g3_cp2

0x25bf,	// (0x000045f7) list_single_graphic_pane_t1_cp2_ParamLimits

0x25bf,	// (0x000045f7) list_single_graphic_pane_t1_cp2

0x0443,	// (0x0000247b) list_single_number_pane_g1_cp2_ParamLimits

0x0443,	// (0x0000247b) list_single_number_pane_g1_cp2

0x044f,	// (0x00002487) list_single_number_pane_g2_cp2

0x25bf,	// (0x000045f7) list_single_number_pane_t1_cp2_ParamLimits

0x25bf,	// (0x000045f7) list_single_number_pane_t1_cp2

0x25d5,	// (0x0000460d) list_single_number_pane_t2_cp2_ParamLimits

0x25d5,	// (0x0000460d) list_single_number_pane_t2_cp2

0x024f,	// (0x00002287) list_double2_pane_g1_cp2_ParamLimits

0x024f,	// (0x00002287) list_double2_pane_g1_cp2

0x0260,	// (0x00002298) list_double2_pane_g2_cp2

0x03b7,	// (0x000023ef) list_double2_pane_t1_cp2_ParamLimits

0x03b7,	// (0x000023ef) list_double2_pane_t1_cp2

0x03cd,	// (0x00002405) list_double2_pane_t2_cp2_ParamLimits

0x03cd,	// (0x00002405) list_double2_pane_t2_cp2

0x03df,	// (0x00002417) list_double_pane_g1_cp2_ParamLimits

0x03df,	// (0x00002417) list_double_pane_g1_cp2

0x03eb,	// (0x00002423) list_double_pane_g2_cp2

0x03f3,	// (0x0000242b) list_double_pane_t1_cp2_ParamLimits

0x03f3,	// (0x0000242b) list_double_pane_t1_cp2

0x0409,	// (0x00002441) list_double_pane_t2_cp2_ParamLimits

0x0409,	// (0x00002441) list_double_pane_t2_cp2

0xa70e,	// (0x0000c746) list_single_pane_cp2_g3

0x0443,	// (0x0000247b) list_single_pane_g1_cp2_ParamLimits

0x0443,	// (0x0000247b) list_single_pane_g1_cp2

0x044f,	// (0x00002487) list_single_pane_g2_cp2

0x0457,	// (0x0000248f) list_single_pane_t1_cp2_ParamLimits

0x0457,	// (0x0000248f) list_single_pane_t1_cp2

0xa716,	// (0x0000c74e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa716,	// (0x0000c74e) list_single_large_graphic_pane_g1_cp2

0x047b,	// (0x000024b3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x047b,	// (0x000024b3) list_single_large_graphic_pane_g2_cp2

0x0487,	// (0x000024bf) list_single_large_graphic_pane_g3_cp2

0xa722,	// (0x0000c75a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa722,	// (0x0000c75a) list_single_large_graphic_pane_g4_cp1

0x04a9,	// (0x000024e1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x04a9,	// (0x000024e1) list_single_large_graphic_pane_t1_cp2

0x2432,	// (0x0000446a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2432,	// (0x0000446a) list_single_graphic_heading_pane_g1_cp2

0x23ff,	// (0x00004437) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x23ff,	// (0x00004437) list_single_graphic_heading_pane_g4_cp2

0x044f,	// (0x00002487) list_single_graphic_heading_pane_g5_cp2

0x243e,	// (0x00004476) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x243e,	// (0x00004476) list_single_graphic_heading_pane_t1_cp2

0x2454,	// (0x0000448c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2454,	// (0x0000448c) list_single_graphic_heading_pane_t2_cp2

0x23f3,	// (0x0000442b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x23f3,	// (0x0000442b) list_single_2graphic_pane_g1_cp2

0x23ff,	// (0x00004437) list_single_2graphic_pane_g2_cp2_ParamLimits

0x23ff,	// (0x00004437) list_single_2graphic_pane_g2_cp2

0x044f,	// (0x00002487) list_single_2graphic_pane_g3_cp2

0x2410,	// (0x00004448) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2410,	// (0x00004448) list_single_2graphic_pane_g4_cp2

0x241c,	// (0x00004454) list_single_2graphic_pane_t1_cp2_ParamLimits

0x241c,	// (0x00004454) list_single_2graphic_pane_t1_cp2

0xe67e,	// (0x000106b6) list_highlight_pane_g10_cp1

0x1fdb,	// (0x00004013) list_highlight_pane_g1_cp1

0x1fe3,	// (0x0000401b) list_highlight_pane_g2_cp1

0x1feb,	// (0x00004023) list_highlight_pane_g3_cp1

0x1ff3,	// (0x0000402b) list_highlight_pane_g4_cp1

0x1ffb,	// (0x00004033) list_highlight_pane_g5_cp1

0x2003,	// (0x0000403b) list_highlight_pane_g6_cp1

0x200b,	// (0x00004043) list_highlight_pane_g7_cp1

0x2013,	// (0x0000404b) list_highlight_pane_g8_cp1

0x201b,	// (0x00004053) list_highlight_pane_g9_cp1

0xb9d0,	// (0x0000da08) form_field_slider_pane_t3

0xb9de,	// (0x0000da16) form_field_slider_pane_t4

0x1f1f,	// (0x00003f57) slider_form_pane_ParamLimits

0x1f1f,	// (0x00003f57) slider_form_pane

0xe7f7,	// (0x0001082f) control_abbreviations

0xe7f7,	// (0x0001082f) control_conventions

0xe7f7,	// (0x0001082f) control_definitions

0xe7f7,	// (0x0001082f) format_table_attribute

0xbc1a,	// (0x0000dc52) bg_popup_preview_window_pane_g9

0xe7f7,	// (0x0001082f) format_table_data2

0xe7f7,	// (0x0001082f) format_table_data3

0xe7f7,	// (0x0001082f) format_table_data_example

0x0008,

0xe7f7,	// (0x0001082f) intro_purpose

0xf8cf,	// (0x00011907) bg_popup_preview_window_pane_g

0xe7f7,	// (0x0001082f) texts_category

0xe7f7,	// (0x0001082f) texts_graphics

0x04bf,	// (0x000024f7) text_digital

0x04ce,	// (0x00002506) text_primary

0x04dd,	// (0x00002515) text_primary_small

0x04ec,	// (0x00002524) text_secondary

0x04fb,	// (0x00002533) text_title

0xc0a4,	// (0x0000e0dc) bg_passive_tab_pane_g1_cp3_srt

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp3_srt

0xc0ad,	// (0x0000e0e5) bg_passive_tab_pane_g3_cp3_srt

0xe865,	// (0x0001089d) bg_active_tab_pane_cp3_srt_ParamLimits

0xe865,	// (0x0001089d) bg_active_tab_pane_cp3_srt

0xc0b6,	// (0x0000e0ee) tabs_4_active_pane_srt_g1

0xc0be,	// (0x0000e0f6) tabs_4_active_pane_srt_t1_ParamLimits

0xc0be,	// (0x0000e0f6) tabs_4_active_pane_srt_t1

0xc0a4,	// (0x0000e0dc) bg_active_tab_pane_g1_cp3_copy1

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp3_copy1

0xc0ad,	// (0x0000e0e5) bg_active_tab_pane_g3_cp3_copy1

0xe873,	// (0x000108ab) tabs_2_long_active_pane_srt_ParamLimits

0xe873,	// (0x000108ab) tabs_2_long_active_pane_srt

0xe873,	// (0x000108ab) tabs_2_long_passive_pane_srt_ParamLimits

0xe873,	// (0x000108ab) tabs_2_long_passive_pane_srt

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp4_srt

0xbd94,	// (0x0000ddcc) bg_passive_tab_pane_g1_cp4_srt

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp4_srt

0xbd9d,	// (0x0000ddd5) bg_passive_tab_pane_g3_cp4_srt

0xe873,	// (0x000108ab) bg_active_tab_pane_cp4_srt_ParamLimits

0xe873,	// (0x000108ab) bg_active_tab_pane_cp4_srt

0xbda6,	// (0x0000ddde) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbda6,	// (0x0000ddde) tabs_2_long_active_pane_srt_t1

0xbd94,	// (0x0000ddcc) bg_active_tab_pane_g1_cp4_srt

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp4_srt

0xbd9d,	// (0x0000ddd5) bg_active_tab_pane_g3_cp4_srt

0xe865,	// (0x0001089d) tabs_3_long_active_pane_srt_ParamLimits

0xe865,	// (0x0001089d) tabs_3_long_active_pane_srt

0xe865,	// (0x0001089d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe865,	// (0x0001089d) tabs_3_long_passive_pane_cp_srt

0xe865,	// (0x0001089d) tabs_3_long_passive_pane_srt_ParamLimits

0xe865,	// (0x0001089d) tabs_3_long_passive_pane_srt

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp5_srt

0xa6af,	// (0x0000c6e7) bg_passive_tab_pane_g1_cp5_srt

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp5_srt

0xa6b8,	// (0x0000c6f0) bg_passive_tab_pane_g3_cp5_srt

0xe873,	// (0x000108ab) bg_active_tab_pane_cp5_srt_ParamLimits

0xe873,	// (0x000108ab) bg_active_tab_pane_cp5_srt

0xbd7e,	// (0x0000ddb6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbd7e,	// (0x0000ddb6) tabs_3_long_active_pane_srt_t1

0xa6af,	// (0x0000c6e7) bg_active_tab_pane_g1_cp5_srt

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp5_srt

0xa6b8,	// (0x0000c6f0) bg_active_tab_pane_g3_cp5_srt

0x2cb2,	// (0x00004cea) navi_text_pane_srt_t1

0x2caa,	// (0x00004ce2) navi_icon_pane_srt_g1

0x0775,	// (0x000027ad) midp_editing_number_pane_srt

0x050a,	// (0x00002542) midp_ticker_pane_srt

0x077d,	// (0x000027b5) midp_ticker_pane_srt_g1

0x0785,	// (0x000027bd) midp_ticker_pane_srt_g2

0x0001,

0xf75e,	// (0x00011796) midp_ticker_pane_srt_g

0x078d,	// (0x000027c5) midp_ticker_pane_srt_t1

0x2c9b,	// (0x00004cd3) midp_editing_number_pane_t1_copy1

0xa73c,	// (0x0000c774) listscroll_midp_pane

0xa73c,	// (0x0000c774) midp_form_pane

0xa7a7,	// (0x0000c7df) midp_info_popup_window_ParamLimits

0xa7a7,	// (0x0000c7df) midp_info_popup_window

0xedc0,	// (0x00010df8) bg_popup_sub_pane_cp50_ParamLimits

0xedc0,	// (0x00010df8) bg_popup_sub_pane_cp50

0x1c17,	// (0x00003c4f) listscroll_midp_info_pane_ParamLimits

0x1c17,	// (0x00003c4f) listscroll_midp_info_pane

0x1bf7,	// (0x00003c2f) listscroll_form_midp_pane_ParamLimits

0x1bf7,	// (0x00003c2f) listscroll_form_midp_pane

0x1c03,	// (0x00003c3b) scroll_bar_cp050

0x1bf7,	// (0x00003c2f) list_midp_pane

0xc2ae,	// (0x0000e2e6) signal_pane_g2_cp

0x1b11,	// (0x00003b49) listscroll_midp_info_pane_t1_ParamLimits

0x1b11,	// (0x00003b49) listscroll_midp_info_pane_t1

0xb80a,	// (0x0000d842) listscroll_midp_info_pane_t2_ParamLimits

0xb80a,	// (0x0000d842) listscroll_midp_info_pane_t2

0xb848,	// (0x0000d880) listscroll_midp_info_pane_t3_ParamLimits

0xb848,	// (0x0000d880) listscroll_midp_info_pane_t3

0xb882,	// (0x0000d8ba) listscroll_midp_info_pane_t4_ParamLimits

0xb882,	// (0x0000d8ba) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x00011842) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x00011842) listscroll_midp_info_pane_t

0xee36,	// (0x00010e6e) scroll_pane_cp21

0x1ab1,	// (0x00003ae9) form_midp_field_choice_group_pane

0xb7cd,	// (0x0000d805) form_midp_field_text_pane

0x1af7,	// (0x00003b2f) form_midp_field_time_pane

0x1aff,	// (0x00003b37) form_midp_gauge_slider_pane

0x1b08,	// (0x00003b40) form_midp_gauge_wait_pane

0xe7f7,	// (0x0001082f) form_midp_image_pane

0xb7b6,	// (0x0000d7ee) list_single_midp_pane_ParamLimits

0xb7b6,	// (0x0000d7ee) list_single_midp_pane

0xb794,	// (0x0000d7cc) form_midp_field_text_pane_t1

0x1767,	// (0x0000379f) input_focus_pane_cp050

0x1a6e,	// (0x00003aa6) list_midp_form_text_pane

0x1a03,	// (0x00003a3b) form_midp_field_choice_group_pane_t1

0x1a11,	// (0x00003a49) input_focus_pane_cp051

0x1a25,	// (0x00003a5d) list_midp_choice_pane

0xe7f7,	// (0x0001082f) status_idle_pane

0x19e7,	// (0x00003a1f) form_midp_field_time_pane_t1

0xe67e,	// (0x000106b6) wait_anim_pane_g2_copy1

0x19f5,	// (0x00003a2d) form_midp_field_time_pane_t2

0x0001,

0x0634,	// (0x0000266c) aid_navinavi_width_2_pane

0xf805,	// (0x0001183d) form_midp_field_time_pane_t

0xe7f7,	// (0x0001082f) input_focus_pane_cp052

0xe7f7,	// (0x0001082f) bg_input_focus_pane_cp040

0x19a7,	// (0x000039df) form_midp_gauge_slider_pane_t1

0x19b5,	// (0x000039ed) form_midp_gauge_slider_pane_t2

0xb778,	// (0x0000d7b0) form_midp_gauge_slider_pane_t3

0xb786,	// (0x0000d7be) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x00011834) form_midp_gauge_slider_pane_t

0x19df,	// (0x00003a17) form_midp_slider_pane

0xe873,	// (0x000108ab) bg_input_focus_pane_cp041_ParamLimits

0xe873,	// (0x000108ab) bg_input_focus_pane_cp041

0x1974,	// (0x000039ac) form_midp_gauge_wait_pane_t1_ParamLimits

0x1974,	// (0x000039ac) form_midp_gauge_wait_pane_t1

0x1986,	// (0x000039be) form_midp_gauge_wait_pane_t2_ParamLimits

0x1986,	// (0x000039be) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x0001182f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x0001182f) form_midp_gauge_wait_pane_t

0x1998,	// (0x000039d0) form_midp_wait_pane_ParamLimits

0x1998,	// (0x000039d0) form_midp_wait_pane

0xb742,	// (0x0000d77a) form_midp_image_pane_g1

0xb74b,	// (0x0000d783) form_midp_image_pane_t1

0xb75a,	// (0x0000d792) form_midp_image_pane_t2

0xb769,	// (0x0000d7a1) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00011828) form_midp_image_pane_t

0x1926,	// (0x0000395e) list_single_midp_pane_g1

0x192f,	// (0x00003967) list_single_midp_pane_t1

0xb72d,	// (0x0000d765) list_midp_form_item_pane_ParamLimits

0xb72d,	// (0x0000d765) list_midp_form_item_pane

0x05dc,	// (0x00002614) list_midp_form_item_pane_t1

0x05eb,	// (0x00002623) midp_ticker_pane_g1

0x05f7,	// (0x0000262f) midp_ticker_pane_g2

0x0001,

0xf744,	// (0x0001177c) midp_ticker_pane_g

0x0603,	// (0x0000263b) midp_ticker_pane_t1

0x2f93,	// (0x00004fcb) midp_editing_number_pane_t1

0x2f71,	// (0x00004fa9) midp_editing_number_pane

0x2f80,	// (0x00004fb8) midp_ticker_pane

0x2c79,	// (0x00004cb1) ai_message_heading_pane

0xe7f7,	// (0x0001082f) bg_popup_window_pane_cp14

0x2c81,	// (0x00004cb9) listscroll_ai_message_pane

0x2c03,	// (0x00004c3b) ai_message_heading_pane_g1_ParamLimits

0x2c03,	// (0x00004c3b) ai_message_heading_pane_g1

0xbd34,	// (0x0000dd6c) ai_message_heading_pane_g2_ParamLimits

0xbd34,	// (0x0000dd6c) ai_message_heading_pane_g2

0x2c1b,	// (0x00004c53) ai_message_heading_pane_g3_ParamLimits

0x2c1b,	// (0x00004c53) ai_message_heading_pane_g3

0x2c27,	// (0x00004c5f) ai_message_heading_pane_g4_ParamLimits

0x2c27,	// (0x00004c5f) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00011969) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00011969) ai_message_heading_pane_g

0xbd40,	// (0x0000dd78) ai_message_heading_pane_t1_ParamLimits

0xbd40,	// (0x0000dd78) ai_message_heading_pane_t1

0xbd5a,	// (0x0000dd92) ai_message_heading_pane_t2_ParamLimits

0xbd5a,	// (0x0000dd92) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00011972) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00011972) ai_message_heading_pane_t

0x2c5f,	// (0x00004c97) bg_popup_heading_pane_cp1_ParamLimits

0x2c5f,	// (0x00004c97) bg_popup_heading_pane_cp1

0x2bf1,	// (0x00004c29) list_ai_message_pane_ParamLimits

0x2bf1,	// (0x00004c29) list_ai_message_pane

0xee36,	// (0x00010e6e) scroll_pane_cp10

0x2b3d,	// (0x00004b75) list_ai_message_pane_g1

0x2b45,	// (0x00004b7d) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x00011946) list_ai_message_pane_g

0x2b4d,	// (0x00004b85) list_ai_message_pane_t1_ParamLimits

0x2b4d,	// (0x00004b85) list_ai_message_pane_t1

0x2b62,	// (0x00004b9a) list_ai_message_pane_t2_ParamLimits

0x2b62,	// (0x00004b9a) list_ai_message_pane_t2

0x2b77,	// (0x00004baf) list_ai_message_pane_t3_ParamLimits

0x2b77,	// (0x00004baf) list_ai_message_pane_t3

0x2b8c,	// (0x00004bc4) list_ai_message_pane_t4_ParamLimits

0x2b8c,	// (0x00004bc4) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x0001194b) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x0001194b) list_ai_message_pane_t

0xbcc0,	// (0x0000dcf8) cell_ai_soft_ind_pane_ParamLimits

0xbcc0,	// (0x0000dcf8) cell_ai_soft_ind_pane

0x0615,	// (0x0000264d) cell_ai_soft_ind_pane_g1_ParamLimits

0x0615,	// (0x0000264d) cell_ai_soft_ind_pane_g1

0xe7f7,	// (0x0001082f) grid_highlight_cp1

0x0622,	// (0x0000265a) text_secondary_cp56_ParamLimits

0x0622,	// (0x0000265a) text_secondary_cp56

0x2afd,	// (0x00004b35) example_general_pane_ParamLimits

0x2afd,	// (0x00004b35) example_general_pane

0x2b09,	// (0x00004b41) example_parent_pane_g1_ParamLimits

0x2b09,	// (0x00004b41) example_parent_pane_g1

0x2b15,	// (0x00004b4d) example_parent_pane_t1_ParamLimits

0x2b15,	// (0x00004b4d) example_parent_pane_t1

0xaeb1,	// (0x0000cee9) popup_preview_text_window_ParamLimits

0xaeb1,	// (0x0000cee9) popup_preview_text_window

0x043b,	// (0x00002473) list_single_pane_cp2_g4

0xea5f,	// (0x00010a97) bg_popup_preview_window_pane_ParamLimits

0xea5f,	// (0x00010a97) bg_popup_preview_window_pane

0xbc22,	// (0x0000dc5a) popup_preview_text_window_t1_ParamLimits

0xbc22,	// (0x0000dc5a) popup_preview_text_window_t1

0x2875,	// (0x000048ad) popup_preview_text_window_t2_ParamLimits

0x2875,	// (0x000048ad) popup_preview_text_window_t2

0x28be,	// (0x000048f6) popup_preview_text_window_t3_ParamLimits

0x28be,	// (0x000048f6) popup_preview_text_window_t3

0x2903,	// (0x0000493b) popup_preview_text_window_t4_ParamLimits

0x2903,	// (0x0000493b) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x0001191a) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x0001191a) popup_preview_text_window_t

0x2981,	// (0x000049b9) scroll_pane_cp11

0x15db,	// (0x00003613) bg_popup_preview_window_pane_g1

0xbbe2,	// (0x0000dc1a) bg_popup_preview_window_pane_g2

0xbbea,	// (0x0000dc22) bg_popup_preview_window_pane_g3

0xbbf2,	// (0x0000dc2a) bg_popup_preview_window_pane_g4

0xbbfa,	// (0x0000dc32) bg_popup_preview_window_pane_g5

0xbc02,	// (0x0000dc3a) bg_popup_preview_window_pane_g6

0xbc0a,	// (0x0000dc42) bg_popup_preview_window_pane_g7

0xbc12,	// (0x0000dc4a) bg_popup_preview_window_pane_g8

0xe694,	// (0x000106cc) aid_popup_width_pane

0xae2d,	// (0x0000ce65) popup_midp_note_alarm_window_ParamLimits

0xae2d,	// (0x0000ce65) popup_midp_note_alarm_window

0xeca9,	// (0x00010ce1) data_form_pane_ParamLimits

0xa13b,	// (0x0000c173) form_field_data_pane_g1

0xa145,	// (0x0000c17d) form_field_data_pane_t1_ParamLimits

0xecb5,	// (0x00010ced) input_focus_pane_ParamLimits

0xecc3,	// (0x00010cfb) data_form_wide_pane_ParamLimits

0xecd4,	// (0x00010d0c) form_field_data_wide_pane_g1

0xecf4,	// (0x00010d2c) form_field_data_wide_pane_t1_ParamLimits

0xeb33,	// (0x00010b6b) input_focus_pane_cp6_ParamLimits

0xa2b7,	// (0x0000c2ef) input_popup_find_pane_g1_ParamLimits

0xa2b7,	// (0x0000c2ef) input_popup_find_pane_g1

0xf0db,	// (0x00011113) aid_navi_side_left_pane

0xf0f0,	// (0x00011128) aid_navi_side_right_pane

0x20d6,	// (0x0000410e) bg_popup_window_pane_cp30_ParamLimits

0x20d6,	// (0x0000410e) bg_popup_window_pane_cp30

0x2150,	// (0x00004188) popup_midp_note_alarm_window_g1_ParamLimits

0x2150,	// (0x00004188) popup_midp_note_alarm_window_g1

0x2180,	// (0x000041b8) popup_midp_note_alarm_window_t1_ParamLimits

0x2180,	// (0x000041b8) popup_midp_note_alarm_window_t1

0xba23,	// (0x0000da5b) popup_midp_note_alarm_window_t2_ParamLimits

0xba23,	// (0x0000da5b) popup_midp_note_alarm_window_t2

0xbad1,	// (0x0000db09) popup_midp_note_alarm_window_t3_ParamLimits

0xbad1,	// (0x0000db09) popup_midp_note_alarm_window_t3

0xbaf9,	// (0x0000db31) popup_midp_note_alarm_window_t4_ParamLimits

0xbaf9,	// (0x0000db31) popup_midp_note_alarm_window_t4

0x2317,	// (0x0000434f) popup_midp_note_alarm_window_t5_ParamLimits

0x2317,	// (0x0000434f) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x000118b7) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x000118b7) popup_midp_note_alarm_window_t

0x23c3,	// (0x000043fb) wait_bar_pane_cp1_ParamLimits

0x23c3,	// (0x000043fb) wait_bar_pane_cp1

0xe7f7,	// (0x0001082f) wait_anim_pane_copy1

0xe7f7,	// (0x0001082f) wait_border_pane_copy1

0x1dcc,	// (0x00003e04) wait_border_pane_g1_copy1

0xed0e,	// (0x00010d46) form_field_popup_pane_g1

0xa15f,	// (0x0000c197) form_field_popup_pane_t1_ParamLimits

0xecb5,	// (0x00010ced) input_focus_pane_cp7_ParamLimits

0xed16,	// (0x00010d4e) list_form_pane_ParamLimits

0xed22,	// (0x00010d5a) form_field_popup_wide_pane_g1

0xed2a,	// (0x00010d62) form_field_popup_wide_pane_t1_ParamLimits

0xecb5,	// (0x00010ced) input_focus_pane_cp8_ParamLimits

0xed3f,	// (0x00010d77) list_form_wide_pane_ParamLimits

0xc117,	// (0x0000e14f) aid_size_cell_graphic_pane

0xa1de,	// (0x0000c216) data_form_pane_t1_ParamLimits

0xbfb0,	// (0x0000dfe8) data_form_wide_pane_t1_ParamLimits

0xb2f4,	// (0x0000d32c) bg_status_flat_pane

0x9719,	// (0x0000b751) title_pane_t1_ParamLimits

0xe82d,	// (0x00010865) title_pane_t2_ParamLimits

0xe853,	// (0x0001088b) title_pane_t3_ParamLimits

0xf557,	// (0x0001158f) title_pane_t_ParamLimits

0xf29e,	// (0x000112d6) level_1_signal_ParamLimits

0xf2ab,	// (0x000112e3) level_2_signal_ParamLimits

0xf2b8,	// (0x000112f0) level_3_signal_ParamLimits

0xf2cd,	// (0x00011305) level_4_signal_ParamLimits

0xf2da,	// (0x00011312) level_5_signal_ParamLimits

0xf2e7,	// (0x0001131f) level_6_signal_ParamLimits

0xf2f4,	// (0x0001132c) level_7_signal_ParamLimits

0xf29e,	// (0x000112d6) level_1_battery_ParamLimits

0xf2ab,	// (0x000112e3) level_2_battery_ParamLimits

0xf2b8,	// (0x000112f0) level_3_battery_ParamLimits

0xf2cd,	// (0x00011305) level_4_battery_ParamLimits

0xf2da,	// (0x00011312) level_5_battery_ParamLimits

0xf2e7,	// (0x0001131f) level_6_battery_ParamLimits

0xf2f4,	// (0x0001132c) level_7_battery_ParamLimits

0x1fdb,	// (0x00004013) bg_status_flat_pane_g1

0x1fe3,	// (0x0000401b) bg_status_flat_pane_g2

0x1feb,	// (0x00004023) bg_status_flat_pane_g3

0x1ff3,	// (0x0000402b) bg_status_flat_pane_g4

0x1ffb,	// (0x00004033) bg_status_flat_pane_g5

0x2003,	// (0x0000403b) bg_status_flat_pane_g6

0x200b,	// (0x00004043) bg_status_flat_pane_g7

0x97ad,	// (0x0000b7e5) tabs_3_active_pane_t1_ParamLimits

0x97ad,	// (0x0000b7e5) tabs_3_passive_pane_t1_ParamLimits

0x97c7,	// (0x0000b7ff) tabs_4_active_pane_t1_ParamLimits

0x97c7,	// (0x0000b7ff) tabs_4_1_passive_pane_t1_ParamLimits

0xa2f6,	// (0x0000c32e) tabs_2_active_pane_t1_ParamLimits

0xa2f6,	// (0x0000c32e) tabs_2_passive_pane_t1_ParamLimits

0xe873,	// (0x000108ab) bg_active_tab_pane_cp4_ParamLimits

0xa308,	// (0x0000c340) tabs_2_long_active_pane_t1_ParamLimits

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp4_ParamLimits

0x168c,	// (0x000036c4) list_single_midp_graphic_pane_t1_ParamLimits

0xe873,	// (0x000108ab) bg_active_tab_pane_cp5_ParamLimits

0xa31b,	// (0x0000c353) tabs_3_long_active_pane_t1_ParamLimits

0x0a51,	// (0x00002a89) bg_passive_tab_pane_cp5_ParamLimits

0x168c,	// (0x000036c4) list_single_midp_graphic_pane_t1

0xb2f4,	// (0x0000d32c) bg_status_flat_pane_ParamLimits

0x11ca,	// (0x00003202) indicator_pane_cp2_ParamLimits

0x11ca,	// (0x00003202) indicator_pane_cp2

0xb472,	// (0x0000d4aa) navi_pane_srt_ParamLimits

0xb472,	// (0x0000d4aa) navi_pane_srt

0x1319,	// (0x00003351) popup_clock_digital_analogue_window_cp1

0xe8d1,	// (0x00010909) indicator_pane_t1

0x050a,	// (0x00002542) copy_highlight_pane

0x050a,	// (0x00002542) cursor_graphics_pane

0x050a,	// (0x00002542) graphic_within_text_pane

0x050a,	// (0x00002542) link_highlight_pane

0x2944,	// (0x0000497c) popup_preview_text_window_t5_ParamLimits

0x2944,	// (0x0000497c) popup_preview_text_window_t5

0x063c,	// (0x00002674) cursor_digital_pane

0x063c,	// (0x00002674) cursor_primary_pane

0x064d,	// (0x00002685) cursor_primary_small_pane

0x0655,	// (0x0000268d) cursor_secondary_pane

0x065d,	// (0x00002695) cursor_title_pane

0x063c,	// (0x00002674) link_highlight_digital_pane

0x0644,	// (0x0000267c) link_highlight_primary_pane

0x064d,	// (0x00002685) link_highlight_primary_small_pane

0x0655,	// (0x0000268d) link_highlight_secondary_pane

0x065d,	// (0x00002695) link_highlight_title_pane

0x063c,	// (0x00002674) copy_highlight_digital_pane

0x063c,	// (0x00002674) copy_highlight_primary_pane

0x064d,	// (0x00002685) copy_highlight_primary_small_pane

0x0655,	// (0x0000268d) copy_highlight_secondary_pane

0x065d,	// (0x00002695) copy_highlight_title_pane

0x0655,	// (0x0000268d) graphic_text_digital_pane

0x2079,	// (0x000040b1) graphic_text_primary_pane

0x2082,	// (0x000040ba) graphic_text_primary_small_pane

0x064d,	// (0x00002685) graphic_text_secondary_pane

0x063c,	// (0x00002674) graphic_text_title_pane

0xa7f8,	// (0x0000c830) cursor_primary_pane_g1

0x206b,	// (0x000040a3) cursor_text_primary_t1

0xba19,	// (0x0000da51) cursor_primary_small_pane_g1

0x205d,	// (0x00004095) cursor_text_primary_small_t1

0xba0f,	// (0x0000da47) cursor_primary_small_pane_g1_copy1

0x2045,	// (0x0000407d) cursor_text_primary_small_t1_copy1

0x2023,	// (0x0000405b) cursor_text_title_t1

0xba05,	// (0x0000da3d) cursor_title_pane_g1

0xa7f8,	// (0x0000c830) cursor_digital_pane_g1

0x066f,	// (0x000026a7) cursor_text_digital_t1

0x067d,	// (0x000026b5) link_highlight_primary_pane_g1

0x1fcc,	// (0x00004004) link_highlight_primary_pane_t1

0x067d,	// (0x000026b5) link_highlight_primary_small_pane_g1

0x0685,	// (0x000026bd) link_highlight_primary_small_pane_t1

0x067d,	// (0x000026b5) link_highlight_secondary_pane_g1

0x0694,	// (0x000026cc) link_highlight_secondary_pane_t1

0x1f31,	// (0x00003f69) link_highlight_title_pane_g1

0x1f48,	// (0x00003f80) link_highlight_title_pane_t1

0x1f31,	// (0x00003f69) link_highlight_digital_pane_g1

0x1f39,	// (0x00003f71) link_highlight_digital_pane_t1

0x1deb,	// (0x00003e23) copy_highlight_primary_pane_g1

0x1e11,	// (0x00003e49) copy_highlight_primary_pane_t1

0x1deb,	// (0x00003e23) copy_highlight_primary_small_pane_g1

0x1e02,	// (0x00003e3a) copy_highlight_primary_small_pane_t1

0x06a3,	// (0x000026db) copy_highlight_secondary_pane_g1

0x06ab,	// (0x000026e3) copy_highlight_secondary_pane_t1

0x1deb,	// (0x00003e23) copy_highlight_title_pane_g1

0x1df3,	// (0x00003e2b) copy_highlight_title_pane_t1

0x1deb,	// (0x00003e23) copy_highlight_digital_pane_g1

0x343f,	// (0x00005477) copy_highlight_digital_pane_t1

0x3393,	// (0x000053cb) graphic_text_primary_pane_g1

0x3423,	// (0x0000545b) graphic_text_primary_pane_t1

0x3431,	// (0x00005469) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x000119e6) graphic_text_primary_pane_t

0x33ff,	// (0x00005437) graphic_text_primary_small_pane_g1

0x3407,	// (0x0000543f) graphic_text_primary_small_pane_t1

0x3415,	// (0x0000544d) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x000119e1) graphic_text_primary_small_pane_t

0x33db,	// (0x00005413) graphic_text_secondary_pane_g1

0x33e3,	// (0x0000541b) graphic_text_secondary_pane_t1

0x33f1,	// (0x00005429) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x000119dc) graphic_text_secondary_pane_t

0x33b7,	// (0x000053ef) graphic_text_title_pane_g1

0x33bf,	// (0x000053f7) graphic_text_title_pane_t1

0x33cd,	// (0x00005405) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x000119d7) graphic_text_title_pane_t

0x3393,	// (0x000053cb) graphic_text_digital_pane_g1

0x339b,	// (0x000053d3) graphic_text_digital_pane_t1

0x33a9,	// (0x000053e1) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x000119d2) graphic_text_digital_pane_t

0xe873,	// (0x000108ab) navi_icon_pane_srt_ParamLimits

0xe873,	// (0x000108ab) navi_icon_pane_srt

0xe7f7,	// (0x0001082f) navi_midp_pane_srt

0xe7f7,	// (0x0001082f) navi_navi_pane_srt

0xe873,	// (0x000108ab) navi_text_pane_srt_ParamLimits

0xe873,	// (0x000108ab) navi_text_pane_srt

0x335e,	// (0x00005396) navi_navi_icon_text_pane_srt

0x3366,	// (0x0000539e) navi_navi_pane_srt_g1_ParamLimits

0x3366,	// (0x0000539e) navi_navi_pane_srt_g1

0x3378,	// (0x000053b0) navi_navi_pane_srt_g2_ParamLimits

0x3378,	// (0x000053b0) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x000119cd) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x000119cd) navi_navi_pane_srt_g

0x338a,	// (0x000053c2) navi_navi_tabs_pane_srt

0x335e,	// (0x00005396) navi_navi_text_pane_srt

0x335e,	// (0x00005396) navi_navi_volume_pane_srt

0x334f,	// (0x00005387) navi_navi_text_pane_srt_t1

0x332a,	// (0x00005362) navi_navi_volume_pane_srt_g1

0x3332,	// (0x0000536a) volume_small_pane_srt_ParamLimits

0x3332,	// (0x0000536a) volume_small_pane_srt

0x06ba,	// (0x000026f2) volume_small_pane_srt_g1_ParamLimits

0x06ba,	// (0x000026f2) volume_small_pane_srt_g1

0x06ca,	// (0x00002702) volume_small_pane_srt_g2_ParamLimits

0x06ca,	// (0x00002702) volume_small_pane_srt_g2

0x06db,	// (0x00002713) volume_small_pane_srt_g3_ParamLimits

0x06db,	// (0x00002713) volume_small_pane_srt_g3

0x06ec,	// (0x00002724) volume_small_pane_srt_g4_ParamLimits

0x06ec,	// (0x00002724) volume_small_pane_srt_g4

0x06fd,	// (0x00002735) volume_small_pane_srt_g5_ParamLimits

0x06fd,	// (0x00002735) volume_small_pane_srt_g5

0x070e,	// (0x00002746) volume_small_pane_srt_g6_ParamLimits

0x070e,	// (0x00002746) volume_small_pane_srt_g6

0x071f,	// (0x00002757) volume_small_pane_srt_g7_ParamLimits

0x071f,	// (0x00002757) volume_small_pane_srt_g7

0x0730,	// (0x00002768) volume_small_pane_srt_g8_ParamLimits

0x0730,	// (0x00002768) volume_small_pane_srt_g8

0x0741,	// (0x00002779) volume_small_pane_srt_g9_ParamLimits

0x0741,	// (0x00002779) volume_small_pane_srt_g9

0x0752,	// (0x0000278a) volume_small_pane_srt_g10_ParamLimits

0x0752,	// (0x0000278a) volume_small_pane_srt_g10

0x0009,

0xf749,	// (0x00011781) volume_small_pane_srt_g_ParamLimits

0xf749,	// (0x00011781) volume_small_pane_srt_g

0x9aae,	// (0x0000bae6) query_popup_data_pane_cp2

0x3318,	// (0x00005350) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3318,	// (0x00005350) navi_navi_icon_text_pane_srt_t1

0x2079,	// (0x000040b1) navi_tabs_2_long_pane_srt

0x2079,	// (0x000040b1) navi_tabs_2_pane_srt

0x2079,	// (0x000040b1) navi_tabs_3_long_pane_srt

0x2079,	// (0x000040b1) navi_tabs_3_pane_srt

0x2079,	// (0x000040b1) navi_tabs_4_pane_srt

0xc1c4,	// (0x0000e1fc) tabs_2_active_pane_srt_ParamLimits

0xc1c4,	// (0x0000e1fc) tabs_2_active_pane_srt

0xc1d4,	// (0x0000e20c) tabs_2_passive_pane_srt_ParamLimits

0xc1d4,	// (0x0000e20c) tabs_2_passive_pane_srt

0x1767,	// (0x0000379f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1767,	// (0x0000379f) bg_passive_tab_pane_cp1_srt

0xc194,	// (0x0000e1cc) bg_passive_tab_pane_g1_cp1_srt

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp1_srt

0xc19d,	// (0x0000e1d5) bg_passive_tab_pane_g3_cp1_srt

0xe865,	// (0x0001089d) bg_active_tab_pane_cp1_srt_ParamLimits

0xe865,	// (0x0001089d) bg_active_tab_pane_cp1_srt

0xc1a6,	// (0x0000e1de) tabs_2_active_pane_srt_g1

0xc1ae,	// (0x0000e1e6) tabs_2_active_pane_srt_t1_ParamLimits

0xc1ae,	// (0x0000e1e6) tabs_2_active_pane_srt_t1

0xc194,	// (0x0000e1cc) bg_active_tab_pane_g1_cp1_srt

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp1_srt

0xc19d,	// (0x0000e1d5) bg_active_tab_pane_g3_cp1_srt

0xc161,	// (0x0000e199) tabs_3_active_pane_srt_ParamLimits

0xc161,	// (0x0000e199) tabs_3_active_pane_srt

0xc172,	// (0x0000e1aa) tabs_3_passive_pane_cp_srt_ParamLimits

0xc172,	// (0x0000e1aa) tabs_3_passive_pane_cp_srt

0xc183,	// (0x0000e1bb) tabs_3_passive_pane_srt_ParamLimits

0xc183,	// (0x0000e1bb) tabs_3_passive_pane_srt

0x1767,	// (0x0000379f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1767,	// (0x0000379f) bg_passive_tab_pane_cp2_srt

0xa802,	// (0x0000c83a) bg_passive_tab_pane_g1_cp2_srt

0xa663,	// (0x0000c69b) bg_passive_tab_pane_g2_cp2_srt

0xa80b,	// (0x0000c843) bg_passive_tab_pane_g3_cp2_srt

0xe865,	// (0x0001089d) bg_active_tab_pane_cp2_srt_ParamLimits

0xe865,	// (0x0001089d) bg_active_tab_pane_cp2_srt

0xc143,	// (0x0000e17b) tabs_3_active_pane_srt_g1

0xc14b,	// (0x0000e183) tabs_3_active_pane_srt_t1_ParamLimits

0xc14b,	// (0x0000e183) tabs_3_active_pane_srt_t1

0xa802,	// (0x0000c83a) bg_active_tab_pane_g1_cp2_srt

0xa663,	// (0x0000c69b) bg_active_tab_pane_g2_cp2_srt

0xa80b,	// (0x0000c843) bg_active_tab_pane_g3_cp2_srt

0x322f,	// (0x00005267) tabs_4_active_pane_srt_ParamLimits

0x322f,	// (0x00005267) tabs_4_active_pane_srt

0x3241,	// (0x00005279) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3241,	// (0x00005279) tabs_4_passive_pane_cp2_srt

0x0a11,	// (0x00002a49) aid_size_cell_toolbar

0x2dbb,	// (0x00004df3) main_idle_act_pane_ParamLimits

0xac6f,	// (0x0000cca7) popup_large_graphic_colour_window_ParamLimits

0xb163,	// (0x0000d19b) popup_toolbar_window_ParamLimits

0xb163,	// (0x0000d19b) popup_toolbar_window

0x2fbe,	// (0x00004ff6) list_single_graphic_2heading_pane_ParamLimits

0x2fbe,	// (0x00004ff6) list_single_graphic_2heading_pane

0xf167,	// (0x0001119f) aid_size_cell_apps_grid_lsc_pane

0xf179,	// (0x000111b1) aid_size_cell_apps_grid_prt_pane

0x0a51,	// (0x00002a89) bg_wml_button_pane_cp1_ParamLimits

0x0a51,	// (0x00002a89) bg_wml_button_pane_cp1

0xb794,	// (0x0000d7cc) form_midp_field_text_pane_t1_ParamLimits

0x1767,	// (0x0000379f) input_focus_pane_cp050_ParamLimits

0x1a6e,	// (0x00003aa6) list_midp_form_text_pane_ParamLimits

0x1a11,	// (0x00003a49) input_focus_pane_cp051_ParamLimits

0x1a25,	// (0x00003a5d) list_midp_choice_pane_ParamLimits

0xb6f9,	// (0x0000d731) list_single_2graphic_pane_cp3_ParamLimits

0xb6f9,	// (0x0000d731) list_single_2graphic_pane_cp3

0xb70d,	// (0x0000d745) list_single_midp_graphic_pane_ParamLimits

0xb70d,	// (0x0000d745) list_single_midp_graphic_pane

0x1475,	// (0x000034ad) list_single_graphic_2heading_pane_g1_ParamLimits

0x1475,	// (0x000034ad) list_single_graphic_2heading_pane_g1

0xebef,	// (0x00010c27) list_single_graphic_2heading_pane_g4_ParamLimits

0xebef,	// (0x00010c27) list_single_graphic_2heading_pane_g4

0xebfb,	// (0x00010c33) list_single_graphic_2heading_pane_g5_ParamLimits

0xebfb,	// (0x00010c33) list_single_graphic_2heading_pane_g5

0x0002,

0xf79c,	// (0x000117d4) list_single_graphic_2heading_pane_g_ParamLimits

0xf79c,	// (0x000117d4) list_single_graphic_2heading_pane_g

0x1481,	// (0x000034b9) list_single_graphic_2heading_pane_t1_ParamLimits

0x1481,	// (0x000034b9) list_single_graphic_2heading_pane_t1

0x1495,	// (0x000034cd) list_single_graphic_2heading_pane_t2_ParamLimits

0x1495,	// (0x000034cd) list_single_graphic_2heading_pane_t2

0x14af,	// (0x000034e7) list_single_graphic_2heading_pane_t3_ParamLimits

0x14af,	// (0x000034e7) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a3,	// (0x000117db) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a3,	// (0x000117db) list_single_graphic_2heading_pane_t

0x14c7,	// (0x000034ff) bg_popup_sub_pane_cp2

0x14f1,	// (0x00003529) grid_toobar_pane

0x152d,	// (0x00003565) cell_toolbar_pane_ParamLimits

0x152d,	// (0x00003565) cell_toolbar_pane

0x157f,	// (0x000035b7) cell_toolbar_pane_g1_ParamLimits

0x157f,	// (0x000035b7) cell_toolbar_pane_g1

0xb611,	// (0x0000d649) cell_toolbar_pane_g2_ParamLimits

0xb611,	// (0x0000d649) cell_toolbar_pane_g2

0x0001,

0xf7aa,	// (0x000117e2) cell_toolbar_pane_g_ParamLimits

0xf7aa,	// (0x000117e2) cell_toolbar_pane_g

0x15b5,	// (0x000035ed) grid_highlight_pane_cp2_ParamLimits

0x15b5,	// (0x000035ed) grid_highlight_pane_cp2

0x15cf,	// (0x00003607) toolbar_button_pane

0x15db,	// (0x00003613) toolbar_button_pane_g1

0x15e3,	// (0x0000361b) toolbar_button_pane_g2

0x15eb,	// (0x00003623) toolbar_button_pane_g3

0x15f3,	// (0x0000362b) toolbar_button_pane_g4

0x15fb,	// (0x00003633) toolbar_button_pane_g5

0x1603,	// (0x0000363b) toolbar_button_pane_g6

0x160b,	// (0x00003643) toolbar_button_pane_g7

0x1613,	// (0x0000364b) toolbar_button_pane_g8

0x161b,	// (0x00003653) toolbar_button_pane_g9

0x0009,

0xf7af,	// (0x000117e7) toolbar_button_pane_g

0x162b,	// (0x00003663) list_single_2graphic_pane_g1_cp3_ParamLimits

0x162b,	// (0x00003663) list_single_2graphic_pane_g1_cp3

0xb625,	// (0x0000d65d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb625,	// (0x0000d65d) list_single_2graphic_pane_g2_cp3

0x033a,	// (0x00002372) list_single_2graphic_pane_g3_cp3

0xf542,	// (0x0001157a) list_single_2graphic_pane_g4_cp3_ParamLimits

0xf542,	// (0x0001157a) list_single_2graphic_pane_g4_cp3

0xb636,	// (0x0000d66e) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb636,	// (0x0000d66e) list_single_2graphic_pane_t1_cp3

0xec28,	// (0x00010c60) list_single_midp_graphic_pane_g2_ParamLimits

0xec28,	// (0x00010c60) list_single_midp_graphic_pane_g2

0x0a19,	// (0x00002a51) aid_zoom_text_primary

0x0a21,	// (0x00002a59) aid_zoom_text_secondary

0xa862,	// (0x0000c89a) status_small_pane_g7_ParamLimits

0xa862,	// (0x0000c89a) status_small_pane_g7

0xa885,	// (0x0000c8bd) status_small_pane_t1_ParamLimits

0x96f5,	// (0x0000b72d) title_pane_g2

0x0003,

0xf54e,	// (0x00011586) title_pane_g

0x9b08,	// (0x0000bb40) aid_size_cell_colour_1_pane_ParamLimits

0x9b08,	// (0x0000bb40) aid_size_cell_colour_1_pane

0x9b1c,	// (0x0000bb54) aid_size_cell_colour_2_pane_ParamLimits

0x9b1c,	// (0x0000bb54) aid_size_cell_colour_2_pane

0x9b30,	// (0x0000bb68) aid_size_cell_colour_3_pane_ParamLimits

0x9b30,	// (0x0000bb68) aid_size_cell_colour_3_pane

0x9b44,	// (0x0000bb7c) aid_size_cell_colour_4_pane_ParamLimits

0x9b44,	// (0x0000bb7c) aid_size_cell_colour_4_pane

0xefe3,	// (0x0001101b) title_pane_stacon_g1_ParamLimits

0xefe3,	// (0x0001101b) title_pane_stacon_g1

0x1e68,	// (0x00003ea0) popup_note_wait_window_g3_ParamLimits

0x1e68,	// (0x00003ea0) popup_note_wait_window_g3

0x1ede,	// (0x00003f16) popup_note_wait_window_t5_ParamLimits

0x1ede,	// (0x00003f16) popup_note_wait_window_t5

0xe7f7,	// (0x0001082f) main_feb_china_hwr_fs_writing_pane

0xaaf1,	// (0x0000cb29) popup_feb_china_hwr_fs_window_ParamLimits

0xaaf1,	// (0x0000cb29) popup_feb_china_hwr_fs_window

0xb652,	// (0x0000d68a) aid_size_cell_hwr_fs_ParamLimits

0xb652,	// (0x0000d68a) aid_size_cell_hwr_fs

0x1767,	// (0x0000379f) bg_popup_sub_pane_cp3_ParamLimits

0x1767,	// (0x0000379f) bg_popup_sub_pane_cp3

0xb667,	// (0x0000d69f) grid_hwr_fs_pane_ParamLimits

0xb667,	// (0x0000d69f) grid_hwr_fs_pane

0x178b,	// (0x000037c3) linegrid_hwr_fs_pane_ParamLimits

0x178b,	// (0x000037c3) linegrid_hwr_fs_pane

0xb67f,	// (0x0000d6b7) cell_hwr_fs_pane_ParamLimits

0xb67f,	// (0x0000d6b7) cell_hwr_fs_pane

0x17bd,	// (0x000037f5) linegrid_hwr_fs_pane_g1_ParamLimits

0x17bd,	// (0x000037f5) linegrid_hwr_fs_pane_g1

0xb6a5,	// (0x0000d6dd) linegrid_hwr_fs_pane_g2_ParamLimits

0xb6a5,	// (0x0000d6dd) linegrid_hwr_fs_pane_g2

0x17db,	// (0x00003813) linegrid_hwr_fs_pane_g3_ParamLimits

0x17db,	// (0x00003813) linegrid_hwr_fs_pane_g3

0xb6b7,	// (0x0000d6ef) linegrid_hwr_fs_pane_g4_ParamLimits

0xb6b7,	// (0x0000d6ef) linegrid_hwr_fs_pane_g4

0x1801,	// (0x00003839) linegrid_hwr_fs_pane_g5_ParamLimits

0x1801,	// (0x00003839) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x0001180d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x0001180d) linegrid_hwr_fs_pane_g

0x1817,	// (0x0000384f) cell_hwr_fs_pane_g1_ParamLimits

0x1817,	// (0x0000384f) cell_hwr_fs_pane_g1

0x13af,	// (0x000033e7) cell_hwr_fs_pane_g2_ParamLimits

0x13af,	// (0x000033e7) cell_hwr_fs_pane_g2

0xb6d1,	// (0x0000d709) cell_hwr_fs_pane_g3_ParamLimits

0xb6d1,	// (0x0000d709) cell_hwr_fs_pane_g3

0xb6de,	// (0x0000d716) cell_hwr_fs_pane_g4_ParamLimits

0xb6de,	// (0x0000d716) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00011818) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00011818) cell_hwr_fs_pane_g

0xb6eb,	// (0x0000d723) cell_hwr_fs_pane_t1

0xe7f7,	// (0x0001082f) grid_highlight_pane_cp6

0xe7f7,	// (0x0001082f) main_idle_act2_pane

0xee1d,	// (0x00010e55) aid_inside_area_popup_secondary

0xbb38,	// (0x0000db70) aid_inside_area_window_primary_ParamLimits

0xbb38,	// (0x0000db70) aid_inside_area_window_primary

0xc1ec,	// (0x0000e224) ai2_news_ticker_pane

0x3456,	// (0x0000548e) aid_size_cell_ai1_link_ParamLimits

0x3456,	// (0x0000548e) aid_size_cell_ai1_link

0xc1f4,	// (0x0000e22c) popup_ai2_data_window_ParamLimits

0xc1f4,	// (0x0000e22c) popup_ai2_data_window

0x3486,	// (0x000054be) popup_ai2_link_window_ParamLimits

0x3486,	// (0x000054be) popup_ai2_link_window

0x1767,	// (0x0000379f) bg_popup_sub_pane_cp4_ParamLimits

0x1767,	// (0x0000379f) bg_popup_sub_pane_cp4

0x349a,	// (0x000054d2) grid_ai2_link_pane_ParamLimits

0x349a,	// (0x000054d2) grid_ai2_link_pane

0x34b1,	// (0x000054e9) popup_ai2_link_window_g1_ParamLimits

0x34b1,	// (0x000054e9) popup_ai2_link_window_g1

0x34bd,	// (0x000054f5) popup_ai2_link_window_g2_ParamLimits

0x34bd,	// (0x000054f5) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x000119eb) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x000119eb) popup_ai2_link_window_g

0x34cc,	// (0x00005504) ai2_mp_button_pane

0x34d4,	// (0x0000550c) ai2_mp_volume_pane

0x1a11,	// (0x00003a49) bg_popup_sub_pane_cp5_ParamLimits

0x1a11,	// (0x00003a49) bg_popup_sub_pane_cp5

0x34dc,	// (0x00005514) heading_ai2_gene_pane_ParamLimits

0x34dc,	// (0x00005514) heading_ai2_gene_pane

0x34e8,	// (0x00005520) list_ai2_gene_pane_ParamLimits

0x34e8,	// (0x00005520) list_ai2_gene_pane

0x3530,	// (0x00005568) cell_ai2_link_pane_ParamLimits

0x3530,	// (0x00005568) cell_ai2_link_pane

0x3546,	// (0x0000557e) cell_ai2_link_pane_g1

0xe7f7,	// (0x0001082f) grid_highlight_pane_cp7

0x3616,	// (0x0000564e) ai2_mp_volume_pane_g1

0x361e,	// (0x00005656) ai2_mp_volume_pane_g2

0x358b,	// (0x000055c3) list_ai2_gene_pane_t1

0x3626,	// (0x0000565e) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00011a04) ai2_mp_volume_pane_g

0xc20a,	// (0x0000e242) volume_small_pane_cp3

0x3637,	// (0x0000566f) aid_size_cell_ai2_button

0x363f,	// (0x00005677) grid_ai2_button_pane

0x3648,	// (0x00005680) cell_ai2_button_pane_ParamLimits

0x3648,	// (0x00005680) cell_ai2_button_pane

0xe67e,	// (0x000106b6) cell_ai2_button_pane_g1

0xe7f7,	// (0x0001082f) grid_highlight_pane_cp8

0x35d6,	// (0x0000560e) ai2_gene_pane_t1_ParamLimits

0x35d6,	// (0x0000560e) ai2_gene_pane_t1

0xaa53,	// (0x0000ca8b) aid_height_parent_landscape

0xbe5c,	// (0x0000de94) aid_height_set_list

0x2dbb,	// (0x00004df3) aid_size_parent

0xc117,	// (0x0000e14f) aid_size_cell_graphic_pane_ParamLimits

0x34f8,	// (0x00005530) popup_ai2_data_window_g1_ParamLimits

0x34f8,	// (0x00005530) popup_ai2_data_window_g1

0x3504,	// (0x0000553c) ai2_news_ticker_pane_g1

0x350c,	// (0x00005544) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x000119f0) ai2_news_ticker_pane_g

0x3514,	// (0x0000554c) ai2_news_ticker_pane_t1

0x3522,	// (0x0000555a) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x000119f5) ai2_news_ticker_pane_t

0x354f,	// (0x00005587) heading_ai2_gene_pane_g1

0x3557,	// (0x0000558f) heading_ai2_gene_pane_t1_ParamLimits

0x3557,	// (0x0000558f) heading_ai2_gene_pane_t1

0x356c,	// (0x000055a4) list_highlight_pane_cp6

0x3574,	// (0x000055ac) ai2_gene_pane_ParamLimits

0x3574,	// (0x000055ac) ai2_gene_pane

0x3599,	// (0x000055d1) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x000119fa) list_ai2_gene_pane_t

0x35a7,	// (0x000055df) list_highlight_pane_cp8_ParamLimits

0x35a7,	// (0x000055df) list_highlight_pane_cp8

0x35b8,	// (0x000055f0) ai2_gene_pane_g1_ParamLimits

0x35b8,	// (0x000055f0) ai2_gene_pane_g1

0x35ca,	// (0x00005602) ai2_gene_pane_g2_ParamLimits

0x35ca,	// (0x00005602) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x000119ff) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x000119ff) ai2_gene_pane_g

0xebde,	// (0x00010c16) scroll_pane_cp12

0xaa10,	// (0x0000ca48) control_pane_t3_ParamLimits

0xaa10,	// (0x0000ca48) control_pane_t3

0xa876,	// (0x0000c8ae) status_small_pane_g8_ParamLimits

0xa876,	// (0x0000c8ae) status_small_pane_g8

0xabb4,	// (0x0000cbec) popup_find_window_ParamLimits

0xae67,	// (0x0000ce9f) popup_note_image_window_ParamLimits

0x155d,	// (0x00003595) list_double2_graphic_pane_vc_g1_ParamLimits

0x155d,	// (0x00003595) list_double2_graphic_pane_vc_g1

0xebef,	// (0x00010c27) list_double2_graphic_pane_vc_g2_ParamLimits

0xebef,	// (0x00010c27) list_double2_graphic_pane_vc_g2

0xebfb,	// (0x00010c33) list_double2_graphic_pane_vc_g3_ParamLimits

0xebfb,	// (0x00010c33) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000115f9) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000115f9) list_double2_graphic_pane_vc_g

0x1569,	// (0x000035a1) list_double2_graphic_pane_vc_t1_ParamLimits

0x1569,	// (0x000035a1) list_double2_graphic_pane_vc_t1

0xebef,	// (0x00010c27) list_single_heading_pane_vc_g1_ParamLimits

0xebef,	// (0x00010c27) list_single_heading_pane_vc_g1

0xebfb,	// (0x00010c33) list_single_heading_pane_vc_g2_ParamLimits

0xebfb,	// (0x00010c33) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011600) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011600) list_single_heading_pane_vc_g

0x1664,	// (0x0000369c) list_single_heading_pane_vc_t1_ParamLimits

0x1664,	// (0x0000369c) list_single_heading_pane_vc_t1

0x167a,	// (0x000036b2) list_single_heading_pane_vc_t2_ParamLimits

0x167a,	// (0x000036b2) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x000117fc) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x000117fc) list_single_heading_pane_vc_t

0x16a2,	// (0x000036da) list_setting_number_pane_vc_g1_ParamLimits

0x16a2,	// (0x000036da) list_setting_number_pane_vc_g1

0x16ae,	// (0x000036e6) list_setting_number_pane_vc_g2_ParamLimits

0x16ae,	// (0x000036e6) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00011801) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00011801) list_setting_number_pane_vc_g

0x16ba,	// (0x000036f2) list_setting_number_pane_vc_t1_ParamLimits

0x16ba,	// (0x000036f2) list_setting_number_pane_vc_t1

0x16ce,	// (0x00003706) list_setting_number_pane_vc_t2_ParamLimits

0x16ce,	// (0x00003706) list_setting_number_pane_vc_t2

0x16ea,	// (0x00003722) list_setting_number_pane_vc_t3_ParamLimits

0x16ea,	// (0x00003722) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00011806) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00011806) list_setting_number_pane_vc_t

0x1716,	// (0x0000374e) set_value_pane_vc_ParamLimits

0x1716,	// (0x0000374e) set_value_pane_vc

0x2fbe,	// (0x00004ff6) list_double2_graphic_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double2_graphic_pane_vc

0x2fbe,	// (0x00004ff6) list_double2_large_graphic_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double2_large_graphic_pane_vc

0x2fbe,	// (0x00004ff6) list_double2_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double2_pane_vc

0x2fbe,	// (0x00004ff6) list_double_graphic_heading_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double_graphic_heading_pane_vc

0x2fbe,	// (0x00004ff6) list_double_graphic_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double_graphic_pane_vc

0x2fbe,	// (0x00004ff6) list_double_heading_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double_heading_pane_vc

0x2fd0,	// (0x00005008) list_double_large_graphic_pane_vc_ParamLimits

0x2fd0,	// (0x00005008) list_double_large_graphic_pane_vc

0x2fbe,	// (0x00004ff6) list_double_number_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double_number_pane_vc

0x2fbe,	// (0x00004ff6) list_double_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double_pane_vc

0x2fbe,	// (0x00004ff6) list_double_time_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_double_time_pane_vc

0x2fbe,	// (0x00004ff6) list_setting_number_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_setting_number_pane_vc

0x2fbe,	// (0x00004ff6) list_setting_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_setting_pane_vc

0x2fbe,	// (0x00004ff6) list_single_graphic_heading_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_single_graphic_heading_pane_vc

0x2fbe,	// (0x00004ff6) list_single_heading_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_single_heading_pane_vc

0x2fbe,	// (0x00004ff6) list_single_number_heading_pane_vc_ParamLimits

0x2fbe,	// (0x00004ff6) list_single_number_heading_pane_vc

0x367c,	// (0x000056b4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x367c,	// (0x000056b4) list_double_graphic_heading_pane_vc_g1

0xebef,	// (0x00010c27) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xebef,	// (0x00010c27) list_double_graphic_heading_pane_vc_g2

0xebfb,	// (0x00010c33) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xebfb,	// (0x00010c33) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00011a0b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00011a0b) list_double_graphic_heading_pane_vc_g

0x3688,	// (0x000056c0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3688,	// (0x000056c0) list_double_graphic_heading_pane_vc_t1

0x369c,	// (0x000056d4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x369c,	// (0x000056d4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00011a12) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00011a12) list_double_graphic_heading_pane_vc_t

0x16a2,	// (0x000036da) list_setting_pane_vc_g1_ParamLimits

0x16a2,	// (0x000036da) list_setting_pane_vc_g1

0x16ae,	// (0x000036e6) list_setting_pane_vc_g2_ParamLimits

0x16ae,	// (0x000036e6) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00011801) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00011801) list_setting_pane_vc_g

0x3905,	// (0x0000593d) list_setting_pane_vc_t1_ParamLimits

0x3905,	// (0x0000593d) list_setting_pane_vc_t1

0x3921,	// (0x00005959) list_setting_pane_vc_t2_ParamLimits

0x3921,	// (0x00005959) list_setting_pane_vc_t2

0x0001,

0xfa1d,	// (0x00011a55) list_setting_pane_vc_t_ParamLimits

0xfa1d,	// (0x00011a55) list_setting_pane_vc_t

0x1716,	// (0x0000374e) set_value_pane_cp_vc_ParamLimits

0x1716,	// (0x0000374e) set_value_pane_cp_vc

0xebef,	// (0x00010c27) list_single_number_heading_pane_vc_g1_ParamLimits

0xebef,	// (0x00010c27) list_single_number_heading_pane_vc_g1

0xebfb,	// (0x00010c33) list_single_number_heading_pane_vc_g2_ParamLimits

0xebfb,	// (0x00010c33) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011600) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011600) list_single_number_heading_pane_vc_g

0x393b,	// (0x00005973) list_single_number_heading_pane_vc_t1_ParamLimits

0x393b,	// (0x00005973) list_single_number_heading_pane_vc_t1

0x3951,	// (0x00005989) list_single_number_heading_pane_vc_t2_ParamLimits

0x3951,	// (0x00005989) list_single_number_heading_pane_vc_t2

0x3963,	// (0x0000599b) list_single_number_heading_pane_vc_t3_ParamLimits

0x3963,	// (0x0000599b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa22,	// (0x00011a5a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x00011a5a) list_single_number_heading_pane_vc_t

0x3975,	// (0x000059ad) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3975,	// (0x000059ad) list_single_graphic_heading_pane_vc_g1

0xebef,	// (0x00010c27) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xebef,	// (0x00010c27) list_single_graphic_heading_pane_vc_g4

0xebfb,	// (0x00010c33) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xebfb,	// (0x00010c33) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa29,	// (0x00011a61) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa29,	// (0x00011a61) list_single_graphic_heading_pane_vc_g

0x3981,	// (0x000059b9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3981,	// (0x000059b9) list_single_graphic_heading_pane_vc_t1

0x3997,	// (0x000059cf) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3997,	// (0x000059cf) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x00011a68) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x00011a68) list_single_graphic_heading_pane_vc_t

0xebef,	// (0x00010c27) list_double2_pane_vc_g1_ParamLimits

0xebef,	// (0x00010c27) list_double2_pane_vc_g1

0xebfb,	// (0x00010c33) list_double2_pane_vc_g2_ParamLimits

0xebfb,	// (0x00010c33) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011600) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011600) list_double2_pane_vc_g

0x39a9,	// (0x000059e1) list_double2_pane_vc_t1_ParamLimits

0x39a9,	// (0x000059e1) list_double2_pane_vc_t1

0x39c1,	// (0x000059f9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x39c1,	// (0x000059f9) list_double2_large_graphic_pane_vc_g1

0xebef,	// (0x00010c27) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xebef,	// (0x00010c27) list_double2_large_graphic_pane_vc_g2

0xebfb,	// (0x00010c33) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xebfb,	// (0x00010c33) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001161d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001161d) list_double2_large_graphic_pane_vc_g

0x1569,	// (0x000035a1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1569,	// (0x000035a1) list_double2_large_graphic_pane_vc_t1

0x39cd,	// (0x00005a05) list_double_time_pane_vc_g1_ParamLimits

0x39cd,	// (0x00005a05) list_double_time_pane_vc_g1

0x39d9,	// (0x00005a11) list_double_time_pane_vc_g2_ParamLimits

0x39d9,	// (0x00005a11) list_double_time_pane_vc_g2

0x0001,

0xfa35,	// (0x00011a6d) list_double_time_pane_vc_g_ParamLimits

0xfa35,	// (0x00011a6d) list_double_time_pane_vc_g

0x39e5,	// (0x00005a1d) list_double_time_pane_vc_t1_ParamLimits

0x39e5,	// (0x00005a1d) list_double_time_pane_vc_t1

0x3a09,	// (0x00005a41) list_double_time_pane_vc_t2_ParamLimits

0x3a09,	// (0x00005a41) list_double_time_pane_vc_t2

0x3a38,	// (0x00005a70) list_double_time_pane_vc_t3_ParamLimits

0x3a38,	// (0x00005a70) list_double_time_pane_vc_t3

0x3a4a,	// (0x00005a82) list_double_time_pane_vc_t4_ParamLimits

0x3a4a,	// (0x00005a82) list_double_time_pane_vc_t4

0x0003,

0xfa3a,	// (0x00011a72) list_double_time_pane_vc_t_ParamLimits

0xfa3a,	// (0x00011a72) list_double_time_pane_vc_t

0xebef,	// (0x00010c27) list_double_pane_vc_g1_ParamLimits

0xebef,	// (0x00010c27) list_double_pane_vc_g1

0xebfb,	// (0x00010c33) list_double_pane_vc_g2_ParamLimits

0xebfb,	// (0x00010c33) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011600) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011600) list_double_pane_vc_g

0x3a5e,	// (0x00005a96) list_double_pane_vc_t1_ParamLimits

0x3a5e,	// (0x00005a96) list_double_pane_vc_t1

0x3a72,	// (0x00005aaa) list_double_pane_vc_t2_ParamLimits

0x3a72,	// (0x00005aaa) list_double_pane_vc_t2

0x0001,

0xfa43,	// (0x00011a7b) list_double_pane_vc_t_ParamLimits

0xfa43,	// (0x00011a7b) list_double_pane_vc_t

0xebef,	// (0x00010c27) list_double_number_pane_vc_g1_ParamLimits

0xebef,	// (0x00010c27) list_double_number_pane_vc_g1

0xebfb,	// (0x00010c33) list_double_number_pane_vc_g2_ParamLimits

0xebfb,	// (0x00010c33) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011600) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011600) list_double_number_pane_vc_g

0x3a8a,	// (0x00005ac2) list_double_number_pane_vc_t1_ParamLimits

0x3a8a,	// (0x00005ac2) list_double_number_pane_vc_t1

0x3a5e,	// (0x00005a96) list_double_number_pane_vc_t2_ParamLimits

0x3a5e,	// (0x00005a96) list_double_number_pane_vc_t2

0x3a9c,	// (0x00005ad4) list_double_number_pane_vc_t3_ParamLimits

0x3a9c,	// (0x00005ad4) list_double_number_pane_vc_t3

0x0002,

0xfa48,	// (0x00011a80) list_double_number_pane_vc_t_ParamLimits

0xfa48,	// (0x00011a80) list_double_number_pane_vc_t

0x3ab4,	// (0x00005aec) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3ab4,	// (0x00005aec) list_double_large_graphic_pane_vc_g1

0x3ad6,	// (0x00005b0e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3ad6,	// (0x00005b0e) list_double_large_graphic_pane_vc_g2

0x3aea,	// (0x00005b22) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3aea,	// (0x00005b22) list_double_large_graphic_pane_vc_g3

0x3af9,	// (0x00005b31) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3af9,	// (0x00005b31) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4f,	// (0x00011a87) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x00011a87) list_double_large_graphic_pane_vc_g

0x3b05,	// (0x00005b3d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3b05,	// (0x00005b3d) list_double_large_graphic_pane_vc_t1

0x3b21,	// (0x00005b59) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3b21,	// (0x00005b59) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x00011a90) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x00011a90) list_double_large_graphic_pane_vc_t

0xebef,	// (0x00010c27) list_double_heading_pane_vc_g1_ParamLimits

0xebef,	// (0x00010c27) list_double_heading_pane_vc_g1

0xebfb,	// (0x00010c33) list_double_heading_pane_vc_g2_ParamLimits

0xebfb,	// (0x00010c33) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011600) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011600) list_double_heading_pane_vc_g

0x3b43,	// (0x00005b7b) list_double_heading_pane_vc_t1_ParamLimits

0x3b43,	// (0x00005b7b) list_double_heading_pane_vc_t1

0x3b57,	// (0x00005b8f) list_double_heading_pane_vc_t2_ParamLimits

0x3b57,	// (0x00005b8f) list_double_heading_pane_vc_t2

0x0001,

0xfa5d,	// (0x00011a95) list_double_heading_pane_vc_t_ParamLimits

0xfa5d,	// (0x00011a95) list_double_heading_pane_vc_t

0x3b6f,	// (0x00005ba7) list_double_graphic_pane_vc_g1_ParamLimits

0x3b6f,	// (0x00005ba7) list_double_graphic_pane_vc_g1

0x3b82,	// (0x00005bba) list_double_graphic_pane_vc_g2_ParamLimits

0x3b82,	// (0x00005bba) list_double_graphic_pane_vc_g2

0xebef,	// (0x00010c27) list_double_graphic_pane_vc_g3_ParamLimits

0xebef,	// (0x00010c27) list_double_graphic_pane_vc_g3

0x0003,

0xfa62,	// (0x00011a9a) list_double_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x00011a9a) list_double_graphic_pane_vc_g

0x3b9f,	// (0x00005bd7) list_double_graphic_pane_vc_t1_ParamLimits

0x3b9f,	// (0x00005bd7) list_double_graphic_pane_vc_t1

0x3bbe,	// (0x00005bf6) list_double_graphic_pane_vc_t2_ParamLimits

0x3bbe,	// (0x00005bf6) list_double_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x00011aa3) list_double_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x00011aa3) list_double_graphic_pane_vc_t

0xe6a0,	// (0x000106d8) aid_size_cell_fastswap

0x94bc,	// (0x0000b4f4) aid_size_cell_touch_ParamLimits

0x94bc,	// (0x0000b4f4) aid_size_cell_touch

0xe801,	// (0x00010839) popup_fast_swap_wide_window_ParamLimits

0xe801,	// (0x00010839) popup_fast_swap_wide_window

0x968c,	// (0x0000b6c4) touch_pane_ParamLimits

0x968c,	// (0x0000b6c4) touch_pane

0xec7e,	// (0x00010cb6) button_value_adjust_pane_cp2

0xec86,	// (0x00010cbe) button_value_adjust_pane_cp4

0xec8e,	// (0x00010cc6) form_field_data_pane_cp2

0xa0e7,	// (0x0000c11f) form_field_data_wide_pane_cp2

0xf1a8,	// (0x000111e0) bg_scroll_pane_ParamLimits

0xa41d,	// (0x0000c455) scroll_handle_pane_ParamLimits

0xf1c7,	// (0x000111ff) scroll_sc2_down_pane_ParamLimits

0xf1c7,	// (0x000111ff) scroll_sc2_down_pane

0xf1ee,	// (0x00011226) scroll_sc2_up_pane_ParamLimits

0xf1ee,	// (0x00011226) scroll_sc2_up_pane

0xc336,	// (0x0000e36e) grid_wheel_folder_pane_g1_ParamLimits

0xc336,	// (0x0000e36e) grid_wheel_folder_pane_g1

0x0161,	// (0x00002199) clock_nsta_pane_cp2_ParamLimits

0x0161,	// (0x00002199) clock_nsta_pane_cp2

0xa73c,	// (0x0000c774) listscroll_midp_pane_ParamLimits

0xa748,	// (0x0000c780) midp_canvas_pane

0x09ff,	// (0x00002a37) nsta_clock_indic_pane

0x0a5d,	// (0x00002a95) listscroll_form_pane_vc

0x0a81,	// (0x00002ab9) listscroll_set_pane_vc_ParamLimits

0x0a81,	// (0x00002ab9) listscroll_set_pane_vc

0xb31c,	// (0x0000d354) clock_nsta_pane

0xb346,	// (0x0000d37e) indicator_nsta_pane

0x14c7,	// (0x000034ff) bg_popup_sub_pane_cp2_ParamLimits

0x14db,	// (0x00003513) find_pane_cp2_ParamLimits

0x14db,	// (0x00003513) find_pane_cp2

0x14f1,	// (0x00003529) grid_toobar_pane_ParamLimits

0x1726,	// (0x0000375e) list_form_gen_pane_vc_ParamLimits

0x1726,	// (0x0000375e) list_form_gen_pane_vc

0x173c,	// (0x00003774) scroll_pane_cp8_vc_ParamLimits

0x173c,	// (0x00003774) scroll_pane_cp8_vc

0x1855,	// (0x0000388d) data_form_wide_pane_vc_ParamLimits

0x1855,	// (0x0000388d) data_form_wide_pane_vc

0x1861,	// (0x00003899) form_field_data_wide_pane_vc_g1

0x1869,	// (0x000038a1) form_field_data_wide_pane_vc_t1_ParamLimits

0x1869,	// (0x000038a1) form_field_data_wide_pane_vc_t1

0xecb5,	// (0x00010ced) input_focus_pane_cp6_vc_ParamLimits

0xecb5,	// (0x00010ced) input_focus_pane_cp6_vc

0x1bf7,	// (0x00003c2f) list_midp_pane_ParamLimits

0x3223,	// (0x0000525b) scroll_pane_cp16_ParamLimits

0x3223,	// (0x0000525b) scroll_pane_cp16

0x1c45,	// (0x00003c7d) button_value_adjust_pane_ParamLimits

0x1c45,	// (0x00003c7d) button_value_adjust_pane

0xbe6d,	// (0x0000dea5) button_value_adjust_pane_cp6_ParamLimits

0xbe6d,	// (0x0000dea5) button_value_adjust_pane_cp6

0xbf87,	// (0x0000dfbf) settings_code_pane_cp_ParamLimits

0xbf87,	// (0x0000dfbf) settings_code_pane_cp

0xe67e,	// (0x000106b6) cell_touch_pane_g1

0xe67e,	// (0x000106b6) cell_touch_pane_g2

0x0001,

0xf6ef,	// (0x00011727) cell_touch_pane_g

0xc213,	// (0x0000e24b) cell_touch_pane_cp_ParamLimits

0xc213,	// (0x0000e24b) cell_touch_pane_cp

0xc22f,	// (0x0000e267) cell_touch_pane_ParamLimits

0xc22f,	// (0x0000e267) cell_touch_pane

0xe67e,	// (0x000106b6) scroll_sc2_down_pane_g1

0xe67e,	// (0x000106b6) scroll_sc2_up_pane_g1

0xe7f7,	// (0x0001082f) bg_set_opt_pane_cp4_vc

0x36b4,	// (0x000056ec) list_set_graphic_pane_vc_g1_ParamLimits

0x36b4,	// (0x000056ec) list_set_graphic_pane_vc_g1

0x36c0,	// (0x000056f8) list_set_graphic_pane_vc_g2_ParamLimits

0x36c0,	// (0x000056f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00011a17) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00011a17) list_set_graphic_pane_vc_g

0x36cc,	// (0x00005704) text_primary_small_cp13_vc_ParamLimits

0x36cc,	// (0x00005704) text_primary_small_cp13_vc

0x36e4,	// (0x0000571c) list_set_graphic_pane_vc_ParamLimits

0x36e4,	// (0x0000571c) list_set_graphic_pane_vc

0xe7f7,	// (0x0001082f) input_focus_pane_cp2_vc

0xe67e,	// (0x000106b6) setting_code_pane_vc_g1

0xe88a,	// (0x000108c2) setting_code_pane_vc_t1

0x36f7,	// (0x0000572f) set_text_pane_vc_t1_ParamLimits

0x36f7,	// (0x0000572f) set_text_pane_vc_t1

0xe7f7,	// (0x0001082f) input_focus_pane_cp1_vc

0x3713,	// (0x0000574b) list_set_text_pane_vc

0xe67e,	// (0x000106b6) setting_text_pane_vc_g1

0xe7f7,	// (0x0001082f) bg_set_opt_pane_cp2_vc

0xe881,	// (0x000108b9) setting_slider_graphic_pane_vc_g1

0x371d,	// (0x00005755) setting_slider_graphic_pane_vc_t1

0x372d,	// (0x00005765) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x00011a1c) setting_slider_graphic_pane_vc_t

0x373d,	// (0x00005775) slider_set_pane_cp_vc

0x3745,	// (0x0000577d) slider_set_pane_vc_g1

0x374e,	// (0x00005786) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x00011a21) slider_set_pane_vc_g

0xed6f,	// (0x00010da7) set_opt_bg_pane_g1_copy1

0xed77,	// (0x00010daf) set_opt_bg_pane_g2_copy1

0x377a,	// (0x000057b2) set_opt_bg_pane_g3_copy1

0xed87,	// (0x00010dbf) set_opt_bg_pane_g4_copy1

0xed8f,	// (0x00010dc7) set_opt_bg_pane_g5_copy1

0xed97,	// (0x00010dcf) set_opt_bg_pane_g6_copy1

0x3782,	// (0x000057ba) set_opt_bg_pane_g7_copy1

0x378a,	// (0x000057c2) set_opt_bg_pane_g8_copy1

0x3792,	// (0x000057ca) set_opt_bg_pane_g9_copy1

0xe7f7,	// (0x0001082f) bg_set_opt_pane_cp_vc

0x379a,	// (0x000057d2) setting_slider_pane_vc_t1

0x37a9,	// (0x000057e1) setting_slider_pane_vc_t2

0x37b9,	// (0x000057f1) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x00011a30) setting_slider_pane_vc_t

0x37c9,	// (0x00005801) slider_set_pane_vc

0x2466,	// (0x0000449e) volume_set_pane_vc_g1

0x37d1,	// (0x00005809) volume_set_pane_vc_g2

0x37da,	// (0x00005812) volume_set_pane_vc_g3

0x37e3,	// (0x0000581b) volume_set_pane_vc_g4

0x37ec,	// (0x00005824) volume_set_pane_vc_g5

0x37f5,	// (0x0000582d) volume_set_pane_vc_g6

0x37fe,	// (0x00005836) volume_set_pane_vc_g7

0x3807,	// (0x0000583f) volume_set_pane_vc_g8

0x3810,	// (0x00005848) volume_set_pane_vc_g9

0x3819,	// (0x00005851) volume_set_pane_vc_g10

0x0009,

0xf9ff,	// (0x00011a37) volume_set_pane_vc_g

0x3822,	// (0x0000585a) volume_set_pane_vc

0x382a,	// (0x00005862) button_value_adjust_pane_cp1_vc

0x3834,	// (0x0000586c) list_highlight_pane_cp2_vc

0x383d,	// (0x00005875) list_set_pane_vc_ParamLimits

0x383d,	// (0x00005875) list_set_pane_vc

0x389b,	// (0x000058d3) main_pane_set_vc_t1_ParamLimits

0x389b,	// (0x000058d3) main_pane_set_vc_t1

0x38b0,	// (0x000058e8) main_pane_set_vc_t2_ParamLimits

0x38b0,	// (0x000058e8) main_pane_set_vc_t2

0x38c2,	// (0x000058fa) main_pane_set_vc_t3_ParamLimits

0x38c2,	// (0x000058fa) main_pane_set_vc_t3

0x38d4,	// (0x0000590c) main_pane_set_vc_t4_ParamLimits

0x38d4,	// (0x0000590c) main_pane_set_vc_t4

0x0003,

0xfa14,	// (0x00011a4c) main_pane_set_vc_t_ParamLimits

0xfa14,	// (0x00011a4c) main_pane_set_vc_t

0x38e6,	// (0x0000591e) setting_code_pane_vc_ParamLimits

0x38e6,	// (0x0000591e) setting_code_pane_vc

0x38f5,	// (0x0000592d) setting_slider_graphic_pane_vc

0x38f5,	// (0x0000592d) setting_slider_pane_vc

0x38f5,	// (0x0000592d) setting_text_pane_vc

0x38f5,	// (0x0000592d) setting_volume_pane_vc

0x38fd,	// (0x00005935) scroll_pane_cp121_vc

0xec6c,	// (0x00010ca4) set_content_pane_vc

0x3be8,	// (0x00005c20) button_value_adjust_pane_g1

0x3bf1,	// (0x00005c29) button_value_adjust_pane_g2

0x0001,

0xfa70,	// (0x00011aa8) button_value_adjust_pane_g

0x3bfa,	// (0x00005c32) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3bfa,	// (0x00005c32) form_field_slider_wide_pane_vc_t1

0x3c0e,	// (0x00005c46) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3c0e,	// (0x00005c46) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa75,	// (0x00011aad) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x00011aad) form_field_slider_wide_pane_vc_t

0xe865,	// (0x0001089d) input_focus_pane_cp10_vc_ParamLimits

0xe865,	// (0x0001089d) input_focus_pane_cp10_vc

0x3c3c,	// (0x00005c74) slider_cont_pane_cp1_vc_ParamLimits

0x3c3c,	// (0x00005c74) slider_cont_pane_cp1_vc

0x3c4e,	// (0x00005c86) slider_form_pane_g1_cp2

0x374e,	// (0x00005786) slider_form_pane_g2_cp2

0x3c7b,	// (0x00005cb3) form_field_slider_pane_vc_t3

0x3c89,	// (0x00005cc1) form_field_slider_pane_vc_t4

0x3c97,	// (0x00005ccf) slider_form_pane_vc_ParamLimits

0x3c97,	// (0x00005ccf) slider_form_pane_vc

0x3ca4,	// (0x00005cdc) form_field_slider_pane_vc_t1_ParamLimits

0x3ca4,	// (0x00005cdc) form_field_slider_pane_vc_t1

0x3c0e,	// (0x00005c46) form_field_slider_pane_vc_t2_ParamLimits

0x3c0e,	// (0x00005c46) form_field_slider_pane_vc_t2

0x0001,

0xfa87,	// (0x00011abf) form_field_slider_pane_vc_t_ParamLimits

0xfa87,	// (0x00011abf) form_field_slider_pane_vc_t

0xe865,	// (0x0001089d) input_focus_pane_cp9_vc_ParamLimits

0xe865,	// (0x0001089d) input_focus_pane_cp9_vc

0x3cc0,	// (0x00005cf8) slider_cont_pane_vc_ParamLimits

0x3cc0,	// (0x00005cf8) slider_cont_pane_vc

0x3cd4,	// (0x00005d0c) list_form_graphic_pane_cp_vc_ParamLimits

0x3cd4,	// (0x00005d0c) list_form_graphic_pane_cp_vc

0x1861,	// (0x00003899) form_field_popup_wide_pane_vc_g1

0x3ce9,	// (0x00005d21) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3ce9,	// (0x00005d21) form_field_popup_wide_pane_vc_t1

0xecb5,	// (0x00010ced) input_focus_pane_cp8_vc_ParamLimits

0xecb5,	// (0x00010ced) input_focus_pane_cp8_vc

0x3d2e,	// (0x00005d66) list_form_wide_pane_vc_ParamLimits

0x3d2e,	// (0x00005d66) list_form_wide_pane_vc

0x3d3a,	// (0x00005d72) list_form_graphic_pane_vc_g1

0x3d42,	// (0x00005d7a) list_form_graphic_pane_vc_t1_ParamLimits

0x3d42,	// (0x00005d7a) list_form_graphic_pane_vc_t1

0xe873,	// (0x000108ab) list_highlight_pane_cp5_vc_ParamLimits

0xe873,	// (0x000108ab) list_highlight_pane_cp5_vc

0x3d5e,	// (0x00005d96) list_form_graphic_pane_vc_ParamLimits

0x3d5e,	// (0x00005d96) list_form_graphic_pane_vc

0x1861,	// (0x00003899) form_field_popup_pane_vc_g1

0x3d74,	// (0x00005dac) form_field_popup_pane_vc_t1_ParamLimits

0x3d74,	// (0x00005dac) form_field_popup_pane_vc_t1

0xecb5,	// (0x00010ced) input_focus_pane_cp7_vc_ParamLimits

0xecb5,	// (0x00010ced) input_focus_pane_cp7_vc

0x3d8b,	// (0x00005dc3) list_form_pane_vc_ParamLimits

0x3d8b,	// (0x00005dc3) list_form_pane_vc

0x3d97,	// (0x00005dcf) data_form_pane_vc_t1_ParamLimits

0x3d97,	// (0x00005dcf) data_form_pane_vc_t1

0xed6f,	// (0x00010da7) input_focus_pane_vc_g1

0xed77,	// (0x00010daf) input_focus_pane_vc_g2

0xed7f,	// (0x00010db7) input_focus_pane_vc_g3

0xed87,	// (0x00010dbf) input_focus_pane_vc_g4

0xed8f,	// (0x00010dc7) input_focus_pane_vc_g5

0xed97,	// (0x00010dcf) input_focus_pane_vc_g6

0xed9f,	// (0x00010dd7) input_focus_pane_vc_g7

0xeda7,	// (0x00010ddf) input_focus_pane_vc_g8

0xedaf,	// (0x00010de7) input_focus_pane_vc_g9

0xe67e,	// (0x000106b6) input_focus_pane_vc_g10

0x0009,

0xf678,	// (0x000116b0) input_focus_pane_vc_g

0x1855,	// (0x0000388d) data_form_pane_vc_ParamLimits

0x1855,	// (0x0000388d) data_form_pane_vc

0x1861,	// (0x00003899) form_field_data_pane_vc_g1

0x3db2,	// (0x00005dea) form_field_data_pane_vc_t1_ParamLimits

0x3db2,	// (0x00005dea) form_field_data_pane_vc_t1

0xecb5,	// (0x00010ced) input_focus_pane_vc_ParamLimits

0xecb5,	// (0x00010ced) input_focus_pane_vc

0x3dcc,	// (0x00005e04) button_value_adjust_pane_cp3_vc

0x3dd4,	// (0x00005e0c) button_value_adjust_pane_cp5_vc

0x3ddc,	// (0x00005e14) form_field_data_pane_vc_ParamLimits

0x3ddc,	// (0x00005e14) form_field_data_pane_vc

0x3df3,	// (0x00005e2b) form_field_data_pane_vc_cp2

0x3dfb,	// (0x00005e33) form_field_data_wide_pane_vc_ParamLimits

0x3dfb,	// (0x00005e33) form_field_data_wide_pane_vc

0x3e11,	// (0x00005e49) form_field_data_wide_pane_vc_cp2

0x3e19,	// (0x00005e51) form_field_popup_pane_vc_ParamLimits

0x3e19,	// (0x00005e51) form_field_popup_pane_vc

0x3e30,	// (0x00005e68) form_field_popup_wide_pane_vc_ParamLimits

0x3e30,	// (0x00005e68) form_field_popup_wide_pane_vc

0x3e46,	// (0x00005e7e) form_field_slider_pane_vc_ParamLimits

0x3e46,	// (0x00005e7e) form_field_slider_pane_vc

0x3e59,	// (0x00005e91) form_field_slider_wide_pane_vc_ParamLimits

0x3e59,	// (0x00005e91) form_field_slider_wide_pane_vc

0xc24c,	// (0x0000e284) grid_touch_1_pane_ParamLimits

0xc24c,	// (0x0000e284) grid_touch_1_pane

0xc260,	// (0x0000e298) grid_touch_2_pane_ParamLimits

0xc260,	// (0x0000e298) grid_touch_2_pane

0x3f27,	// (0x00005f5f) touch_pane_g1_ParamLimits

0x3f27,	// (0x00005f5f) touch_pane_g1

0x3e90,	// (0x00005ec8) cell_app_pane_cp_wide_ParamLimits

0x3e90,	// (0x00005ec8) cell_app_pane_cp_wide

0x3ea1,	// (0x00005ed9) grid_popup_fast_wide_pane_ParamLimits

0x3ea1,	// (0x00005ed9) grid_popup_fast_wide_pane

0x3eb5,	// (0x00005eed) scroll_pane_cp19_ParamLimits

0x3eb5,	// (0x00005eed) scroll_pane_cp19

0xe7f7,	// (0x0001082f) bg_popup_window_pane_cp20

0x3ec9,	// (0x00005f01) listscroll_popup_fast_wide_pane

0xeede,	// (0x00010f16) grid_indicator_nsta_pane

0x3ed1,	// (0x00005f09) clock_nsta_pane_g1

0x3eda,	// (0x00005f12) clock_nsta_pane_t1

0xc28a,	// (0x0000e2c2) cell_indicator_nsta_pane_ParamLimits

0xc28a,	// (0x0000e2c2) cell_indicator_nsta_pane

0x3f27,	// (0x00005f5f) cell_indicator_nsta_pane_g1

0xc2a1,	// (0x0000e2d9) cell_indicator_nsta_pane_g2

0x0001,

0xfa98,	// (0x00011ad0) cell_indicator_nsta_pane_g

0x3f42,	// (0x00005f7a) clock_nsta_pane_cp

0x3f4b,	// (0x00005f83) indicator_nsta_pane_cp

0x3f53,	// (0x00005f8b) nsta_clock_indic_pane_g1

0xe8c9,	// (0x00010901) grid_indicator_pane

0xa4b7,	// (0x0000c4ef) scroll_pane_cp29

0x008e,	// (0x000020c6) indicator_nsta_pane_cp2_ParamLimits

0x008e,	// (0x000020c6) indicator_nsta_pane_cp2

0xe873,	// (0x000108ab) main_apps_wheel_pane

0xb7cd,	// (0x0000d805) form_midp_field_text_pane_ParamLimits

0x1c03,	// (0x00003c3b) scroll_bar_cp050_ParamLimits

0x3fa3,	// (0x00005fdb) cell_indicator_pane_ParamLimits

0x3fa3,	// (0x00005fdb) cell_indicator_pane

0x3fbc,	// (0x00005ff4) cell_indicator_pane_g1

0xc2c0,	// (0x0000e2f8) grid_wheel_folder_pane_ParamLimits

0xc2c0,	// (0x0000e2f8) grid_wheel_folder_pane

0xc2ce,	// (0x0000e306) list_wheel_apps_pane_ParamLimits

0xc2ce,	// (0x0000e306) list_wheel_apps_pane

0xc2dc,	// (0x0000e314) main_apps_wheel_pane_g1_ParamLimits

0xc2dc,	// (0x0000e314) main_apps_wheel_pane_g1

0xc2e8,	// (0x0000e320) main_apps_wheel_pane_g2_ParamLimits

0xc2e8,	// (0x0000e320) main_apps_wheel_pane_g2

0x0001,

0xfab4,	// (0x00011aec) main_apps_wheel_pane_g_ParamLimits

0xfab4,	// (0x00011aec) main_apps_wheel_pane_g

0xc2f6,	// (0x0000e32e) main_apps_wheel_pane_t1_ParamLimits

0xc2f6,	// (0x0000e32e) main_apps_wheel_pane_t1

0xc30a,	// (0x0000e342) list_wheel_apps_pane_g1

0xc312,	// (0x0000e34a) list_wheel_apps_pane_g2

0xc31a,	// (0x0000e352) list_wheel_apps_pane_g3

0xc322,	// (0x0000e35a) list_wheel_apps_pane_g4

0xc32c,	// (0x0000e364) list_wheel_apps_pane_g5

0x0004,

0xfab9,	// (0x00011af1) list_wheel_apps_pane_g

0x038a,	// (0x000023c2) navi_icon_text_pane

0xb210,	// (0x0000d248) aid_fill_nsta

0x4083,	// (0x000060bb) navi_icon_text_pane_g1

0x408f,	// (0x000060c7) navi_icon_text_pane_t1

0x022d,	// (0x00002265) list_set_graphic_pane_t1_ParamLimits

0x022d,	// (0x00002265) list_set_graphic_pane_t1

0x2346,	// (0x0000437e) popup_midp_note_alarm_window_t6_ParamLimits

0x2346,	// (0x0000437e) popup_midp_note_alarm_window_t6

0x2358,	// (0x00004390) popup_midp_note_alarm_window_t7_ParamLimits

0x2358,	// (0x00004390) popup_midp_note_alarm_window_t7

0x236a,	// (0x000043a2) popup_midp_note_alarm_window_t8_ParamLimits

0x236a,	// (0x000043a2) popup_midp_note_alarm_window_t8

0x237c,	// (0x000043b4) popup_midp_note_alarm_window_t9_ParamLimits

0x237c,	// (0x000043b4) popup_midp_note_alarm_window_t9

0x238e,	// (0x000043c6) popup_midp_note_alarm_window_t10_ParamLimits

0x238e,	// (0x000043c6) popup_midp_note_alarm_window_t10

0x23a0,	// (0x000043d8) popup_midp_note_alarm_window_t11_ParamLimits

0x23a0,	// (0x000043d8) popup_midp_note_alarm_window_t11

0xbb19,	// (0x0000db51) scroll_pane_cp17_ParamLimits

0xbb19,	// (0x0000db51) scroll_pane_cp17

0x2466,	// (0x0000449e) volume_small_pane_cp_g1

0x40a1,	// (0x000060d9) volume_small_pane_cp_g2

0x40aa,	// (0x000060e2) volume_small_pane_cp_g3

0x40b3,	// (0x000060eb) volume_small_pane_cp_g4

0x40bc,	// (0x000060f4) volume_small_pane_cp_g5

0x37ec,	// (0x00005824) volume_small_pane_cp_g6

0x40c5,	// (0x000060fd) volume_small_pane_cp_g7

0x40ce,	// (0x00006106) volume_small_pane_cp_g8

0x40d7,	// (0x0000610f) volume_small_pane_cp_g9

0x40e0,	// (0x00006118) volume_small_pane_cp_g10

0x05eb,	// (0x00002623) midp_ticker_pane_g1_ParamLimits

0x05f7,	// (0x0000262f) midp_ticker_pane_g2_ParamLimits

0xf744,	// (0x0001177c) midp_ticker_pane_g_ParamLimits

0x0603,	// (0x0000263b) midp_ticker_pane_t1_ParamLimits

0xb234,	// (0x0000d26c) aid_fill_nsta_2

0x1bef,	// (0x00003c27) list_form2_midp_pane

0x2f71,	// (0x00004fa9) midp_editing_number_pane_ParamLimits

0x2f80,	// (0x00004fb8) midp_ticker_pane_ParamLimits

0x40e9,	// (0x00006121) form2_midp_field_pane

0x410d,	// (0x00006145) scroll_pane_cp51

0x412d,	// (0x00006165) form2_midp_button_pane_ParamLimits

0x412d,	// (0x00006165) form2_midp_button_pane

0x413f,	// (0x00006177) form2_midp_content_pane_ParamLimits

0x413f,	// (0x00006177) form2_midp_content_pane

0x4159,	// (0x00006191) form2_midp_field_choice_group_pane

0x4161,	// (0x00006199) form2_midp_field_pane_g1

0x4169,	// (0x000061a1) form2_midp_field_pane_g2

0x4171,	// (0x000061a9) form2_midp_field_pane_g3

0x4179,	// (0x000061b1) form2_midp_field_pane_g4

0x0003,

0xfade,	// (0x00011b16) form2_midp_field_pane_g

0x4181,	// (0x000061b9) form2_midp_gauge_slider_pane

0x4189,	// (0x000061c1) form2_midp_gauge_wait_pane

0x4191,	// (0x000061c9) form2_midp_image_pane_ParamLimits

0x4191,	// (0x000061c9) form2_midp_image_pane

0xc35f,	// (0x0000e397) form2_midp_label_pane_ParamLimits

0xc35f,	// (0x0000e397) form2_midp_label_pane

0xc378,	// (0x0000e3b0) form2_midp_label_pane_cp_ParamLimits

0xc378,	// (0x0000e3b0) form2_midp_label_pane_cp

0x41e6,	// (0x0000621e) form2_midp_string_pane_ParamLimits

0x41e6,	// (0x0000621e) form2_midp_string_pane

0xc397,	// (0x0000e3cf) form2_midp_text_pane_ParamLimits

0xc397,	// (0x0000e3cf) form2_midp_text_pane

0x4213,	// (0x0000624b) form2_midp_time_pane

0x4223,	// (0x0000625b) input_focus_pane_cp51_ParamLimits

0x4223,	// (0x0000625b) input_focus_pane_cp51

0xc3b0,	// (0x0000e3e8) form2_midp_label_pane_t1_ParamLimits

0xc3b0,	// (0x0000e3e8) form2_midp_label_pane_t1

0xc3f0,	// (0x0000e428) form2_mdip_text_pane_t1_ParamLimits

0xc3f0,	// (0x0000e428) form2_mdip_text_pane_t1

0x429b,	// (0x000062d3) form2_midp_time_pane_t1

0x42b6,	// (0x000062ee) form2_midp_gauge_slider_pane_t1

0xc40c,	// (0x0000e444) form2_midp_gauge_slider_pane_t2

0xc41e,	// (0x0000e456) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae7,	// (0x00011b1f) form2_midp_gauge_slider_pane_t

0x42ec,	// (0x00006324) form2_midp_slider_pane

0x42f8,	// (0x00006330) form2_midp_gauge_wait_pane_t1

0x4306,	// (0x0000633e) form2_midp_wait_pane_ParamLimits

0x4306,	// (0x0000633e) form2_midp_wait_pane

0xc430,	// (0x0000e468) list_single_2graphic_pane_cp4_ParamLimits

0xc430,	// (0x0000e468) list_single_2graphic_pane_cp4

0xb70d,	// (0x0000d745) list_single_midp_graphic_pane_cp_ParamLimits

0xb70d,	// (0x0000d745) list_single_midp_graphic_pane_cp

0xe7f7,	// (0x0001082f) list_highlight_pane_cp20

0x4359,	// (0x00006391) list_single_2graphic_pane_g1_cp4

0x354f,	// (0x00005587) list_single_2graphic_pane_g2_cp4

0x4361,	// (0x00006399) list_single_2graphic_pane_t1_cp4

0xe873,	// (0x000108ab) list_highlight_pane_cp21

0x4370,	// (0x000063a8) list_single_midp_graphic_pane_g4_cp

0x437f,	// (0x000063b7) list_single_midp_graphic_pane_t1_cp

0xc445,	// (0x0000e47d) form2_mdip_string_pane_t1_ParamLimits

0xc445,	// (0x0000e47d) form2_mdip_string_pane_t1

0xe7f7,	// (0x0001082f) bg_wml_button_pane_cp2

0xe67e,	// (0x000106b6) form2_midp_image_pane_g1

0xec07,	// (0x00010c3f) list_double_large_graphic_pane_g5_ParamLimits

0xec07,	// (0x00010c3f) list_double_large_graphic_pane_g5

0xa73c,	// (0x0000c774) midp_form_pane_ParamLimits

0xe873,	// (0x000108ab) main_apps_wheel_pane_ParamLimits

0xaeee,	// (0x0000cf26) popup_preview_window_ParamLimits

0xaeee,	// (0x0000cf26) popup_preview_window

0xb1bb,	// (0x0000d1f3) popup_touch_info_window_ParamLimits

0xb1bb,	// (0x0000d1f3) popup_touch_info_window

0xb1d9,	// (0x0000d211) popup_touch_menu_window_ParamLimits

0xb1d9,	// (0x0000d211) popup_touch_menu_window

0xe674,	// (0x000106ac) bg_popup_sub_pane_cp6

0x449b,	// (0x000064d3) list_touch_menu_pane

0xc4bb,	// (0x0000e4f3) list_single_touch_menu_pane_ParamLimits

0xc4bb,	// (0x0000e4f3) list_single_touch_menu_pane

0xc4cf,	// (0x0000e507) list_single_touch_menu_pane_t1

0xe873,	// (0x000108ab) bg_popup_sub_pane_cp7_ParamLimits

0xe873,	// (0x000108ab) bg_popup_sub_pane_cp7

0x44c7,	// (0x000064ff) heading_sub_pane

0x44cf,	// (0x00006507) list_touch_info_pane_ParamLimits

0x44cf,	// (0x00006507) list_touch_info_pane

0x44de,	// (0x00006516) list_single_touch_info_pane_ParamLimits

0x44de,	// (0x00006516) list_single_touch_info_pane

0x44f0,	// (0x00006528) list_single_touch_info_pane_t1

0x44fe,	// (0x00006536) list_single_touch_info_pane_t2

0x0001,

0xfaf5,	// (0x00011b2d) list_single_touch_info_pane_t

0x050a,	// (0x00002542) bg_popup_heading_pane_cp

0x450c,	// (0x00006544) heading_sub_pane_t1

0x1767,	// (0x0000379f) bg_popup_preview_window_pane_cp_ParamLimits

0x1767,	// (0x0000379f) bg_popup_preview_window_pane_cp

0x44c7,	// (0x000064ff) heading_preview_pane

0x44cf,	// (0x00006507) list_preview_pane_ParamLimits

0x44cf,	// (0x00006507) list_preview_pane

0x451a,	// (0x00006552) popup_preview_window_g1

0x44de,	// (0x00006516) list_single_preview_pane_ParamLimits

0x44de,	// (0x00006516) list_single_preview_pane

0x4522,	// (0x0000655a) list_single_preview_pane_g1

0x452a,	// (0x00006562) list_single_preview_pane_t1

0x44f0,	// (0x00006528) list_single_preview_pane_t2

0x0001,

0xfafa,	// (0x00011b32) list_single_preview_pane_t

0x4538,	// (0x00006570) bg_popup_heading_pane_cp2_ParamLimits

0x4538,	// (0x00006570) bg_popup_heading_pane_cp2

0x454e,	// (0x00006586) heading_preview_pane_g1

0x4556,	// (0x0000658e) heading_preview_pane_t1_ParamLimits

0x4556,	// (0x0000658e) heading_preview_pane_t1

0xe8e0,	// (0x00010918) soft_indicator_pane_t1_ParamLimits

0xebbb,	// (0x00010bf3) scroll_pane_ParamLimits

0xf1dc,	// (0x00011214) scroll_sc2_left_pane

0xf1e5,	// (0x0001121d) scroll_sc2_right_pane

0xf204,	// (0x0001123c) scroll_bg_pane_g1_ParamLimits

0xf219,	// (0x00011251) scroll_bg_pane_g2_ParamLimits

0xf231,	// (0x00011269) scroll_bg_pane_g3_ParamLimits

0xf6cf,	// (0x00011707) scroll_bg_pane_g_ParamLimits

0xf204,	// (0x0001123c) scroll_handle_pane_g1_ParamLimits

0xf246,	// (0x0001127e) scroll_handle_pane_g2_ParamLimits

0xf231,	// (0x00011269) scroll_handle_pane_g3_ParamLimits

0xf6d6,	// (0x0001170e) scroll_handle_pane_g_ParamLimits

0xaa95,	// (0x0000cacd) popup_choice_list_window_ParamLimits

0xaa95,	// (0x0000cacd) popup_choice_list_window

0x14d3,	// (0x0000350b) choice_list_pane

0x15a7,	// (0x000035df) cell_toolbar_pane_t1

0x15cf,	// (0x00003607) toolbar_button_pane_ParamLimits

0x29d6,	// (0x00004a0e) ai_gene_pane_1_t2_ParamLimits

0x29d6,	// (0x00004a0e) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x0001192a) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x0001192a) ai_gene_pane_1_t

0x4573,	// (0x000065ab) scroll_sc2_left_pane_g1

0x4573,	// (0x000065ab) scroll_sc2_right_pane_g1

0x0a51,	// (0x00002a89) bg_popup_sub_pane_cp10

0x457d,	// (0x000065b5) list_choice_list_pane

0xc4dd,	// (0x0000e515) list_single_choice_list_pane_ParamLimits

0xc4dd,	// (0x0000e515) list_single_choice_list_pane

0xeeec,	// (0x00010f24) list_single_choice_list_pane_g1

0xa2e1,	// (0x0000c319) list_single_choice_list_pane_t1_ParamLimits

0xa2e1,	// (0x0000c319) list_single_choice_list_pane_t1

0x45b1,	// (0x000065e9) choice_list_pane_g1

0xc4f1,	// (0x0000e529) choice_list_pane_t1

0xe674,	// (0x000106ac) input_focus_pane_cp11

0xeff7,	// (0x0001102f) title_pane_stacon_g2_ParamLimits

0xeff7,	// (0x0001102f) title_pane_stacon_g2

0x0002,

0xf6b5,	// (0x000116ed) title_pane_stacon_g_ParamLimits

0xf6b5,	// (0x000116ed) title_pane_stacon_g

0x050a,	// (0x00002542) cursor_press_pane

0xab3c,	// (0x0000cb74) popup_fep_hwr_window_ParamLimits

0xab3c,	// (0x0000cb74) popup_fep_hwr_window

0x0bd7,	// (0x00002c0f) popup_fep_vkb_window_ParamLimits

0x0bd7,	// (0x00002c0f) popup_fep_vkb_window

0xc4ff,	// (0x0000e537) cursor_press_pane_g1

0x0002,

0xfb23,	// (0x00011b5b) fep_vkb_side_pane_g_ParamLimits

0x4608,	// (0x00006640) fep_hwr_candidate_pane_ParamLimits

0x4608,	// (0x00006640) fep_hwr_candidate_pane

0x4632,	// (0x0000666a) fep_hwr_side_pane_ParamLimits

0x4632,	// (0x0000666a) fep_hwr_side_pane

0x4652,	// (0x0000668a) fep_hwr_top_pane_ParamLimits

0x4652,	// (0x0000668a) fep_hwr_top_pane

0x466a,	// (0x000066a2) fep_hwr_write_pane_ParamLimits

0x466a,	// (0x000066a2) fep_hwr_write_pane

0xfb23,	// (0x00011b5b) fep_vkb_side_pane_g

0x46a4,	// (0x000066dc) fep_hwr_top_pane_g1

0x46b6,	// (0x000066ee) fep_hwr_top_pane_g2

0x46c8,	// (0x00006700) fep_hwr_top_pane_g3

0x0002,

0xfaff,	// (0x00011b37) fep_hwr_top_pane_g

0x46dd,	// (0x00006715) fep_hwr_top_text_pane

0xf311,	// (0x00011349) fep_hwr_top_text_pane_g1

0x47b5,	// (0x000067ed) fep_hwr_top_text_pane_t1

0x4805,	// (0x0000683d) fep_hwr_candidate_pane_g1

0x4a70,	// (0x00006aa8) fep_vkb_keypad_pane_g3_ParamLimits

0x4a70,	// (0x00006aa8) fep_vkb_keypad_pane_g3

0x4a98,	// (0x00006ad0) fep_vkb_keypad_pane_g4_ParamLimits

0x4a98,	// (0x00006ad0) fep_vkb_keypad_pane_g4

0x4b07,	// (0x00006b3f) fep_vkb_bottom_pane_g2_ParamLimits

0x4b07,	// (0x00006b3f) fep_vkb_bottom_pane_g2

0x0001,

0xfb2a,	// (0x00011b62) fep_vkb_bottom_pane_g_ParamLimits

0xfb2a,	// (0x00011b62) fep_vkb_bottom_pane_g

0x4573,	// (0x000065ab) cell_vkb_side_pane_g2

0x0001,

0xfb34,	// (0x00011b6c) cell_vkb_side_pane_g

0x4b92,	// (0x00006bca) cell_vkb_side_pane_t1

0x4ba0,	// (0x00006bd8) cell_vkb_side_pane_t1_copy1

0x4573,	// (0x000065ab) bg_fep_vkb_candidate_pane_g2

0x4ccc,	// (0x00006d04) cell_vkb_candidate_pane_ParamLimits

0x4839,	// (0x00006871) aid_size_cell_vkb_ParamLimits

0x4839,	// (0x00006871) aid_size_cell_vkb

0x4ccc,	// (0x00006d04) cell_vkb_candidate_pane

0x4d00,	// (0x00006d38) bg_popup_fep_shadow_pane_g1

0xc566,	// (0x0000e59e) fep_vkb_bottom_pane_ParamLimits

0xc566,	// (0x0000e59e) fep_vkb_bottom_pane

0x48fd,	// (0x00006935) fep_vkb_candidate_pane_ParamLimits

0x48fd,	// (0x00006935) fep_vkb_candidate_pane

0xc58b,	// (0x0000e5c3) fep_vkb_keypad_pane_ParamLimits

0xc58b,	// (0x0000e5c3) fep_vkb_keypad_pane

0xc5c0,	// (0x0000e5f8) fep_vkb_side_pane_ParamLimits

0xc5c0,	// (0x0000e5f8) fep_vkb_side_pane

0xc5fc,	// (0x0000e634) fep_vkb_top_pane_ParamLimits

0xc5fc,	// (0x0000e634) fep_vkb_top_pane

0x49c9,	// (0x00006a01) fep_vkb_top_pane_g1_ParamLimits

0x49c9,	// (0x00006a01) fep_vkb_top_pane_g1

0x49d8,	// (0x00006a10) fep_vkb_top_pane_g2_ParamLimits

0x49d8,	// (0x00006a10) fep_vkb_top_pane_g2

0x49e7,	// (0x00006a1f) fep_vkb_top_pane_g3_ParamLimits

0x49e7,	// (0x00006a1f) fep_vkb_top_pane_g3

0x0003,

0xfb1a,	// (0x00011b52) fep_vkb_top_pane_g_ParamLimits

0xfb1a,	// (0x00011b52) fep_vkb_top_pane_g

0x4a05,	// (0x00006a3d) fep_vkb_top_text_pane_ParamLimits

0x4a05,	// (0x00006a3d) fep_vkb_top_text_pane

0xc631,	// (0x0000e669) fep_vkb_side_pane_g1_ParamLimits

0xc631,	// (0x0000e669) fep_vkb_side_pane_g1

0x4a5f,	// (0x00006a97) grid_vkb_side_pane_ParamLimits

0x4a5f,	// (0x00006a97) grid_vkb_side_pane

0x4d08,	// (0x00006d40) bg_popup_fep_shadow_pane_g2

0x4d11,	// (0x00006d49) bg_popup_fep_shadow_pane_g3

0x4d19,	// (0x00006d51) bg_popup_fep_shadow_pane_g4

0x4d22,	// (0x00006d5a) bg_popup_fep_shadow_pane_g5

0x4d2c,	// (0x00006d64) bg_popup_fep_shadow_pane_g6

0x4d34,	// (0x00006d6c) bg_popup_fep_shadow_pane_g7

0xed8f,	// (0x00010dc7) bg_popup_fep_shadow_pane_g8

0x4ab6,	// (0x00006aee) grid_vkb_keypad_number_pane_ParamLimits

0x4ab6,	// (0x00006aee) grid_vkb_keypad_number_pane

0x4ac6,	// (0x00006afe) grid_vkb_keypad_pane_ParamLimits

0x4ac6,	// (0x00006afe) grid_vkb_keypad_pane

0x4aec,	// (0x00006b24) fep_vkb_bottom_pane_g1_ParamLimits

0x4aec,	// (0x00006b24) fep_vkb_bottom_pane_g1

0x4b15,	// (0x00006b4d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b15,	// (0x00006b4d) grid_vkb_keypad_bottom_left_pane

0x4b2a,	// (0x00006b62) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b2a,	// (0x00006b62) grid_vkb_keypad_bottom_right_pane

0x4b3f,	// (0x00006b77) fep_vkb_top_text_pane_g1

0xc678,	// (0x0000e6b0) fep_vkb_top_text_pane_t1

0xc68a,	// (0x0000e6c2) cell_vkb_side_pane_ParamLimits

0xc68a,	// (0x0000e6c2) cell_vkb_side_pane

0x4573,	// (0x000065ab) cell_vkb_side_pane_g1

0x4bae,	// (0x00006be6) cell_vkb_keypad_pane_ParamLimits

0x4bae,	// (0x00006be6) cell_vkb_keypad_pane

0x4c23,	// (0x00006c5b) cell_vkb_keypad_pane_g1

0x0008,

0xfb47,	// (0x00011b7f) bg_popup_fep_shadow_pane_g

0x4573,	// (0x000065ab) cell_hwr_side_pane_g1

0x4573,	// (0x000065ab) cell_hwr_side_pane_g2

0x4c2d,	// (0x00006c65) cell_vkb_keypad_pane_t1

0xc6a0,	// (0x0000e6d8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6a0,	// (0x0000e6d8) cell_vkb_keypad_bottom_left_pane

0xc6b5,	// (0x0000e6ed) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6b5,	// (0x0000e6ed) cell_vkb_keypad_bottom_right_pane

0x4573,	// (0x000065ab) cell_vkb_keypad_bottom_left_pane_g1

0x4573,	// (0x000065ab) cell_vkb_keypad_bottom_right_pane_g1

0x4c91,	// (0x00006cc9) cell_vkb_keypad_number_pane_ParamLimits

0x4c91,	// (0x00006cc9) cell_vkb_keypad_number_pane

0x4cb0,	// (0x00006ce8) cell_vkb_keypad_number_pane_g1

0x4cba,	// (0x00006cf2) cell_vkb_keypad_number_pane_g2

0x4cc3,	// (0x00006cfb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb39,	// (0x00011b71) cell_vkb_keypad_number_pane_g

0x4c2d,	// (0x00006c65) cell_vkb_keypad_number_pane_t1

0x4ce7,	// (0x00006d1f) fep_vkb_candidate_pane_g1

0x0001,

0xfb34,	// (0x00011b6c) cell_hwr_side_pane_g

0x4d46,	// (0x00006d7e) cell_hwr_side_pane_t1

0x4d54,	// (0x00006d8c) cell_hwr_side_pane_t1_copy1

0x49f7,	// (0x00006a2f) cell_hwr_candidate_pane_g1

0x4da4,	// (0x00006ddc) cell_hwr_candidate_pane_t1

0x4573,	// (0x000065ab) cell_vkb_candidate_pane_g2

0x4df8,	// (0x00006e30) cell_vkb_candidate_pane_t1

0x45cf,	// (0x00006607) bg_popup_fep_shadow_pane_ParamLimits

0x45cf,	// (0x00006607) bg_popup_fep_shadow_pane

0x4684,	// (0x000066bc) bg_fep_hwr_top_pane_g4

0x46f2,	// (0x0000672a) bg_hwr_side_pane_g1_ParamLimits

0x46f2,	// (0x0000672a) bg_hwr_side_pane_g1

0xc51f,	// (0x0000e557) cell_hwr_side_pane_ParamLimits

0xc51f,	// (0x0000e557) cell_hwr_side_pane

0x4760,	// (0x00006798) fep_hwr_write_pane_g1_ParamLimits

0x4760,	// (0x00006798) fep_hwr_write_pane_g1

0x476d,	// (0x000067a5) fep_hwr_write_pane_g2_ParamLimits

0x476d,	// (0x000067a5) fep_hwr_write_pane_g2

0x477a,	// (0x000067b2) fep_hwr_write_pane_g3_ParamLimits

0x477a,	// (0x000067b2) fep_hwr_write_pane_g3

0xc53f,	// (0x0000e577) fep_hwr_write_pane_g4_ParamLimits

0xc53f,	// (0x0000e577) fep_hwr_write_pane_g4

0x0005,

0xfb06,	// (0x00011b3e) fep_hwr_write_pane_g_ParamLimits

0xfb06,	// (0x00011b3e) fep_hwr_write_pane_g

0x4684,	// (0x000066bc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4684,	// (0x000066bc) bg_fep_hwr_candidate_pane_g2

0x47c3,	// (0x000067fb) cell_hwr_candidate_pane_ParamLimits

0x47c3,	// (0x000067fb) cell_hwr_candidate_pane

0x4805,	// (0x0000683d) fep_hwr_candidate_pane_g1_ParamLimits

0x4867,	// (0x0000689f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4867,	// (0x0000689f) bg_popup_fep_shadow_pane_cp2

0x49f7,	// (0x00006a2f) fep_vkb_top_pane_g4_ParamLimits

0x49f7,	// (0x00006a2f) fep_vkb_top_pane_g4

0x4a3d,	// (0x00006a75) fep_vkb_side_pane_g2_ParamLimits

0x4a3d,	// (0x00006a75) fep_vkb_side_pane_g2

0xa00c,	// (0x0000c044) list_setting_pane_t4_ParamLimits

0xa00c,	// (0x0000c044) list_setting_pane_t4

0xa086,	// (0x0000c0be) list_setting_number_pane_t5_ParamLimits

0xa086,	// (0x0000c0be) list_setting_number_pane_t5

0xf367,	// (0x0001139f) list_double_heading_pane_cp2_ParamLimits

0xf367,	// (0x0001139f) list_double_heading_pane_cp2

0x4e06,	// (0x00006e3e) list_double_heading_pane_g1_cp2_ParamLimits

0x4e06,	// (0x00006e3e) list_double_heading_pane_g1_cp2

0x4e12,	// (0x00006e4a) list_double_heading_pane_g2_cp2_ParamLimits

0x4e12,	// (0x00006e4a) list_double_heading_pane_g2_cp2

0x4e26,	// (0x00006e5e) list_double_heading_pane_t1_cp2_ParamLimits

0x4e26,	// (0x00006e5e) list_double_heading_pane_t1_cp2

0x4e3c,	// (0x00006e74) list_double_heading_pane_t2_cp2_ParamLimits

0x4e3c,	// (0x00006e74) list_double_heading_pane_t2_cp2

0xe66c,	// (0x000106a4) aid_value_unit2

0xe817,	// (0x0001084f) popup_preview_fixed_window

0xe9b7,	// (0x000109ef) bg_popup_preview_window_pane_cp02

0x4e4e,	// (0x00006e86) list_preview_fixed_pane

0x4e94,	// (0x00006ecc) list_empty_pane_fp_ParamLimits

0x4e94,	// (0x00006ecc) list_empty_pane_fp

0x4e94,	// (0x00006ecc) list_single_cale_day_pane_fp_ParamLimits

0x4e94,	// (0x00006ecc) list_single_cale_day_pane_fp

0x4e94,	// (0x00006ecc) list_single_graphic_heading_pane_fp_ParamLimits

0x4e94,	// (0x00006ecc) list_single_graphic_heading_pane_fp

0x4e94,	// (0x00006ecc) list_single_graphic_pane_fp_ParamLimits

0x4e94,	// (0x00006ecc) list_single_graphic_pane_fp

0x4e94,	// (0x00006ecc) list_single_heading_pane_fp_ParamLimits

0x4e94,	// (0x00006ecc) list_single_heading_pane_fp

0x4e94,	// (0x00006ecc) list_single_pane_fp_ParamLimits

0x4e94,	// (0x00006ecc) list_single_pane_fp

0x4eaa,	// (0x00006ee2) list_single_pane_fp_g1_ParamLimits

0x4eaa,	// (0x00006ee2) list_single_pane_fp_g1

0x4eb6,	// (0x00006eee) list_single_pane_fp_g2_ParamLimits

0x4eb6,	// (0x00006eee) list_single_pane_fp_g2

0x4ec2,	// (0x00006efa) list_single_pane_fp_g3_ParamLimits

0x4ec2,	// (0x00006efa) list_single_pane_fp_g3

0x4ed6,	// (0x00006f0e) list_single_pane_fp_g4_ParamLimits

0x4ed6,	// (0x00006f0e) list_single_pane_fp_g4

0x0003,

0xfb68,	// (0x00011ba0) list_single_pane_fp_g_ParamLimits

0xfb68,	// (0x00011ba0) list_single_pane_fp_g

0x4ee2,	// (0x00006f1a) list_single_pane_fp_t1_ParamLimits

0x4ee2,	// (0x00006f1a) list_single_pane_fp_t1

0x4ef9,	// (0x00006f31) list_single_graphic_pane_fp_g1_ParamLimits

0x4ef9,	// (0x00006f31) list_single_graphic_pane_fp_g1

0x4eaa,	// (0x00006ee2) list_single_graphic_pane_fp_g2_ParamLimits

0x4eaa,	// (0x00006ee2) list_single_graphic_pane_fp_g2

0x4eb6,	// (0x00006eee) list_single_graphic_pane_fp_g3_ParamLimits

0x4eb6,	// (0x00006eee) list_single_graphic_pane_fp_g3

0x4ec2,	// (0x00006efa) list_single_graphic_pane_fp_g4_ParamLimits

0x4ec2,	// (0x00006efa) list_single_graphic_pane_fp_g4

0x4ed6,	// (0x00006f0e) list_single_graphic_pane_fp_g5_ParamLimits

0x4ed6,	// (0x00006f0e) list_single_graphic_pane_fp_g5

0x0004,

0xfb71,	// (0x00011ba9) list_single_graphic_pane_fp_g_ParamLimits

0xfb71,	// (0x00011ba9) list_single_graphic_pane_fp_g

0x4f05,	// (0x00006f3d) list_single_graphic_pane_fp_t1_ParamLimits

0x4f05,	// (0x00006f3d) list_single_graphic_pane_fp_t1

0x4ef9,	// (0x00006f31) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4ef9,	// (0x00006f31) list_single_graphic_heading_pane_fp_g1

0x4eaa,	// (0x00006ee2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4eaa,	// (0x00006ee2) list_single_graphic_heading_pane_fp_g2

0x4eb6,	// (0x00006eee) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4eb6,	// (0x00006eee) list_single_graphic_heading_pane_fp_g3

0x4ec2,	// (0x00006efa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4ec2,	// (0x00006efa) list_single_graphic_heading_pane_fp_g4

0x4ed6,	// (0x00006f0e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4ed6,	// (0x00006f0e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb71,	// (0x00011ba9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb71,	// (0x00011ba9) list_single_graphic_heading_pane_fp_g

0x4f1b,	// (0x00006f53) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4f1b,	// (0x00006f53) list_single_graphic_heading_pane_fp_t1

0x4f31,	// (0x00006f69) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4f31,	// (0x00006f69) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7c,	// (0x00011bb4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7c,	// (0x00011bb4) list_single_graphic_heading_pane_fp_t

0x4f43,	// (0x00006f7b) list_single_cale_day_pane_fp_g1_ParamLimits

0x4f43,	// (0x00006f7b) list_single_cale_day_pane_fp_g1

0x4f7b,	// (0x00006fb3) list_single_cale_day_pane_fp_g2_ParamLimits

0x4f7b,	// (0x00006fb3) list_single_cale_day_pane_fp_g2

0x4f87,	// (0x00006fbf) list_single_cale_day_pane_fp_g3_ParamLimits

0x4f87,	// (0x00006fbf) list_single_cale_day_pane_fp_g3

0x4faf,	// (0x00006fe7) list_single_cale_day_pane_fp_g4_ParamLimits

0x4faf,	// (0x00006fe7) list_single_cale_day_pane_fp_g4

0x4fd3,	// (0x0000700b) list_single_cale_day_pane_fp_g5_ParamLimits

0x4fd3,	// (0x0000700b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb81,	// (0x00011bb9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb81,	// (0x00011bb9) list_single_cale_day_pane_fp_g

0x4ff7,	// (0x0000702f) list_single_cale_day_pane_fp_t1_ParamLimits

0x4ff7,	// (0x0000702f) list_single_cale_day_pane_fp_t1

0x501d,	// (0x00007055) list_single_cale_day_pane_fp_t2_ParamLimits

0x501d,	// (0x00007055) list_single_cale_day_pane_fp_t2

0x5036,	// (0x0000706e) list_single_cale_day_pane_fp_t3_ParamLimits

0x5036,	// (0x0000706e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8c,	// (0x00011bc4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8c,	// (0x00011bc4) list_single_cale_day_pane_fp_t

0x4eaa,	// (0x00006ee2) list_empty_pane_fp_g1_ParamLimits

0x4eaa,	// (0x00006ee2) list_empty_pane_fp_g1

0x504f,	// (0x00007087) list_empty_pane_fp_t1

0x505d,	// (0x00007095) list_empty_pane_fp_t2

0x0001,

0xfb93,	// (0x00011bcb) list_empty_pane_fp_t

0x4eaa,	// (0x00006ee2) list_single_heading_pane_fp_g1_ParamLimits

0x4eaa,	// (0x00006ee2) list_single_heading_pane_fp_g1

0x4eb6,	// (0x00006eee) list_single_heading_pane_fp_g2_ParamLimits

0x4eb6,	// (0x00006eee) list_single_heading_pane_fp_g2

0x4ec2,	// (0x00006efa) list_single_heading_pane_fp_g3_ParamLimits

0x4ec2,	// (0x00006efa) list_single_heading_pane_fp_g3

0x0002,

0xfb98,	// (0x00011bd0) list_single_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00011bd0) list_single_heading_pane_fp_g

0x506b,	// (0x000070a3) list_single_heading_pane_fp_t1_ParamLimits

0x506b,	// (0x000070a3) list_single_heading_pane_fp_t1

0x507d,	// (0x000070b5) list_single_heading_pane_fp_t2_ParamLimits

0x507d,	// (0x000070b5) list_single_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x00011bd7) list_single_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x00011bd7) list_single_heading_pane_fp_t

0xa32d,	// (0x0000c365) aid_size_cell_fast

0xe99a,	// (0x000109d2) soft_indicator_pane_cp1_t1

0xa336,	// (0x0000c36e) cell_app_pane_cp2_ParamLimits

0xa336,	// (0x0000c36e) cell_app_pane_cp2

0x45f1,	// (0x00006629) fep_hwr_candidate_drop_down_list_pane

0x481f,	// (0x00006857) fep_hwr_candidate_pane_g3_ParamLimits

0x481f,	// (0x00006857) fep_hwr_candidate_pane_g3

0x482c,	// (0x00006864) fep_hwr_candidate_pane_g4_ParamLimits

0x482c,	// (0x00006864) fep_hwr_candidate_pane_g4

0x0002,

0xfb13,	// (0x00011b4b) fep_hwr_candidate_pane_g_ParamLimits

0xfb13,	// (0x00011b4b) fep_hwr_candidate_pane_g

0x48ec,	// (0x00006924) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x48ec,	// (0x00006924) fep_vkb_candidate_drop_down_list_pane

0x4cef,	// (0x00006d27) fep_vkb_candidate_pane_g3

0x4cf7,	// (0x00006d2f) fep_vkb_candidate_pane_g4

0x0002,

0xfb40,	// (0x00011b78) fep_vkb_candidate_pane_g

0x49f7,	// (0x00006a2f) cell_hwr_candidate_pane_g1_ParamLimits

0x4d62,	// (0x00006d9a) cell_hwr_candidate_pane_g3_ParamLimits

0x4d62,	// (0x00006d9a) cell_hwr_candidate_pane_g3

0x4d83,	// (0x00006dbb) cell_hwr_candidate_pane_g4_ParamLimits

0x4d83,	// (0x00006dbb) cell_hwr_candidate_pane_g4

0x0002,

0xfb5a,	// (0x00011b92) cell_hwr_candidate_pane_g_ParamLimits

0xfb5a,	// (0x00011b92) cell_hwr_candidate_pane_g

0x4dc2,	// (0x00006dfa) cell_vkb_candidate_pane_g3_ParamLimits

0x4dc2,	// (0x00006dfa) cell_vkb_candidate_pane_g3

0x4ddd,	// (0x00006e15) cell_vkb_candidate_pane_g4_ParamLimits

0x4ddd,	// (0x00006e15) cell_vkb_candidate_pane_g4

0xc6d0,	// (0x0000e708) cell_app_pane_cp2_g1_ParamLimits

0xc6d0,	// (0x0000e708) cell_app_pane_cp2_g1

0x50b1,	// (0x000070e9) cell_app_pane_cp2_g2_ParamLimits

0x50b1,	// (0x000070e9) cell_app_pane_cp2_g2

0x0001,

0xfba4,	// (0x00011bdc) cell_app_pane_cp2_g_ParamLimits

0xfba4,	// (0x00011bdc) cell_app_pane_cp2_g

0x50bd,	// (0x000070f5) cell_app_pane_cp2_t1_ParamLimits

0x50bd,	// (0x000070f5) cell_app_pane_cp2_t1

0xecb5,	// (0x00010ced) grid_highlight_pane_cp1_ParamLimits

0xecb5,	// (0x00010ced) grid_highlight_pane_cp1

0x50cf,	// (0x00007107) cell_hwr_candidate_pane_cp1_ParamLimits

0x50cf,	// (0x00007107) cell_hwr_candidate_pane_cp1

0x49f7,	// (0x00006a2f) fep_hwr_candidate_drop_down_list_pane_g1

0x50ee,	// (0x00007126) fep_hwr_candidate_drop_down_list_pane_g2

0x50fb,	// (0x00007133) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba9,	// (0x00011be1) fep_hwr_candidate_drop_down_list_pane_g

0x5108,	// (0x00007140) fep_hwr_candidate_drop_down_list_scroll_pane

0x5111,	// (0x00007149) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5111,	// (0x00007149) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x511e,	// (0x00007156) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x511e,	// (0x00007156) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x512b,	// (0x00007163) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x512b,	// (0x00007163) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4dc2,	// (0x00006dfa) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4dc2,	// (0x00006dfa) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4ddd,	// (0x00006e15) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ddd,	// (0x00006e15) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5138,	// (0x00007170) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5138,	// (0x00007170) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5153,	// (0x0000718b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5153,	// (0x0000718b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x516e,	// (0x000071a6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x516e,	// (0x000071a6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x00011be8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x00011be8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5189,	// (0x000071c1) cell_vkb_candidate_pane_cp1_ParamLimits

0x5189,	// (0x000071c1) cell_vkb_candidate_pane_cp1

0x49f7,	// (0x00006a2f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x49f7,	// (0x00006a2f) fep_vkb_candidate_drop_down_list_pane_g1

0x50ee,	// (0x00007126) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x50ee,	// (0x00007126) fep_vkb_candidate_drop_down_list_pane_g2

0x50fb,	// (0x00007133) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x50fb,	// (0x00007133) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba9,	// (0x00011be1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba9,	// (0x00011be1) fep_vkb_candidate_drop_down_list_pane_g

0x51a9,	// (0x000071e1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x51a9,	// (0x000071e1) fep_vkb_candidate_drop_down_list_scroll_pane

0x51b6,	// (0x000071ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x51b6,	// (0x000071ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x51c3,	// (0x000071fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x51c3,	// (0x000071fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x51cf,	// (0x00007207) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x51cf,	// (0x00007207) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4d62,	// (0x00006d9a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d62,	// (0x00006d9a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d83,	// (0x00006dbb) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d83,	// (0x00006dbb) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x51db,	// (0x00007213) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x51db,	// (0x00007213) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x51fc,	// (0x00007234) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x51fc,	// (0x00007234) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x521d,	// (0x00007255) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x521d,	// (0x00007255) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00011bf9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00011bf9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x96e2,	// (0x0000b71a) title_pane_g1_ParamLimits

0x96f5,	// (0x0000b72d) title_pane_g2_ParamLimits

0xf54e,	// (0x00011586) title_pane_g_ParamLimits

0xf301,	// (0x00011339) aid_call2_pane

0xf309,	// (0x00011341) aid_call_pane

0xf311,	// (0x00011349) popup_clock_analogue_window_g1

0xf311,	// (0x00011349) popup_clock_analogue_window_g2

0xf319,	// (0x00011351) popup_clock_analogue_window_g3

0xf322,	// (0x0001135a) popup_clock_analogue_window_g4

0xe67e,	// (0x000106b6) popup_clock_analogue_window_g5

0x0004,

0xf6e4,	// (0x0001171c) popup_clock_analogue_window_g

0xf32a,	// (0x00011362) popup_clock_analogue_window_t1

0xf388,	// (0x000113c0) clock_digital_number_pane_ParamLimits

0xf388,	// (0x000113c0) clock_digital_number_pane

0xf394,	// (0x000113cc) clock_digital_number_pane_cp02_ParamLimits

0xf394,	// (0x000113cc) clock_digital_number_pane_cp02

0xf3a0,	// (0x000113d8) clock_digital_number_pane_cp03_ParamLimits

0xf3a0,	// (0x000113d8) clock_digital_number_pane_cp03

0xf3ac,	// (0x000113e4) clock_digital_number_pane_cp04_ParamLimits

0xf3ac,	// (0x000113e4) clock_digital_number_pane_cp04

0xf3b8,	// (0x000113f0) clock_digital_separator_pane_ParamLimits

0xf3b8,	// (0x000113f0) clock_digital_separator_pane

0xf3c4,	// (0x000113fc) popup_clock_digital_window_t1_ParamLimits

0xf3c4,	// (0x000113fc) popup_clock_digital_window_t1

0xe67e,	// (0x000106b6) clock_digital_number_pane_g1

0xe67e,	// (0x000106b6) clock_digital_number_pane_g2

0x0001,

0xf6ef,	// (0x00011727) clock_digital_number_pane_g

0xe67e,	// (0x000106b6) clock_digital_separator_pane_g1

0xe67e,	// (0x000106b6) clock_digital_separator_pane_g2

0x0001,

0xf6ef,	// (0x00011727) clock_digital_separator_pane_g

0xb210,	// (0x0000d248) aid_fill_nsta_ParamLimits

0xb346,	// (0x0000d37e) indicator_nsta_pane_ParamLimits

0x1311,	// (0x00003349) popup_clock_analogue_window

0x1311,	// (0x00003349) popup_clock_digital_window

0xeede,	// (0x00010f16) grid_indicator_nsta_pane_ParamLimits

0x3ee8,	// (0x00005f20) clock_nsta_pane_t2

0x0001,

0xfa93,	// (0x00011acb) clock_nsta_pane_t

0xf19e,	// (0x000111d6) aid_size_max_handle

0xa414,	// (0x0000c44c) aid_size_min_handle

0x050a,	// (0x00002542) editor_scroll_pane

0x5238,	// (0x00007270) ex_editor_pane

0xee36,	// (0x00010e6e) scroll_pane_cp13

0xebe7,	// (0x00010c1f) scroll_pane_cp14

0xf35f,	// (0x00011397) scroll_pane_cp36

0xa4de,	// (0x0000c516) list_single_graphic_hl_pane_cp2_ParamLimits

0xa4de,	// (0x0000c516) list_single_graphic_hl_pane_cp2

0xc01a,	// (0x0000e052) list_single_graphic_hl_pane_ParamLimits

0xc01a,	// (0x0000e052) list_single_graphic_hl_pane

0x7aca,	// (0x00009b02) aid_size_min_hl_cp1

0x5249,	// (0x00007281) list_highlight_pane_cp34_ParamLimits

0x5249,	// (0x00007281) list_highlight_pane_cp34

0x525a,	// (0x00007292) list_single_graphic_hl_pane_g1_ParamLimits

0x525a,	// (0x00007292) list_single_graphic_hl_pane_g1

0xc6ee,	// (0x0000e726) list_single_graphic_hl_pane_g2_ParamLimits

0xc6ee,	// (0x0000e726) list_single_graphic_hl_pane_g2

0xc6ee,	// (0x0000e726) list_single_graphic_hl_pane_g3_ParamLimits

0xc6ee,	// (0x0000e726) list_single_graphic_hl_pane_g3

0x0443,	// (0x0000247b) list_single_graphic_hl_pane_g4_ParamLimits

0x0443,	// (0x0000247b) list_single_graphic_hl_pane_g4

0x52d9,	// (0x00007311) list_single_graphic_hl_pane_g5_ParamLimits

0x52d9,	// (0x00007311) list_single_graphic_hl_pane_g5

0x0004,

0xfbd2,	// (0x00011c0a) list_single_graphic_hl_pane_g_ParamLimits

0xfbd2,	// (0x00011c0a) list_single_graphic_hl_pane_g

0xc6fa,	// (0x0000e732) list_single_graphic_hl_pane_t1_ParamLimits

0xc6fa,	// (0x0000e732) list_single_graphic_hl_pane_t1

0x52a9,	// (0x000072e1) aid_size_min_hl_cp2

0x52b2,	// (0x000072ea) list_highlight_pane_cp34_cp2_ParamLimits

0x52b2,	// (0x000072ea) list_highlight_pane_cp34_cp2

0x525a,	// (0x00007292) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x525a,	// (0x00007292) list_single_graphic_hl_pane_g1_cp2

0x52bf,	// (0x000072f7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x52bf,	// (0x000072f7) list_single_graphic_hl_pane_g2_cp2

0xc710,	// (0x0000e748) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc710,	// (0x0000e748) list_single_graphic_hl_pane_g3_cp2

0x0443,	// (0x0000247b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0443,	// (0x0000247b) list_single_graphic_hl_pane_g4_cp2

0x52d9,	// (0x00007311) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x52d9,	// (0x00007311) list_single_graphic_hl_pane_g5_cp2

0xa90d,	// (0x0000c945) control_pane_g4_ParamLimits

0xa90d,	// (0x0000c945) control_pane_g4

0x0a51,	// (0x00002a89) bg_popup_sub_pane_cp10_ParamLimits

0x457d,	// (0x000065b5) list_choice_list_pane_ParamLimits

0x458c,	// (0x000065c4) scroll_pane_cp23

0xe9b7,	// (0x000109ef) bg_popup_preview_window_pane_cp02_ParamLimits

0x4e4e,	// (0x00006e86) list_preview_fixed_pane_ParamLimits

0x4e64,	// (0x00006e9c) list_preview_fixed_pane_cp_ParamLimits

0x4e64,	// (0x00006e9c) list_preview_fixed_pane_cp

0x4e70,	// (0x00006ea8) popup_preview_fixed_window_g1_ParamLimits

0x4e70,	// (0x00006ea8) popup_preview_fixed_window_g1

0x4e7c,	// (0x00006eb4) popup_preview_fixed_window_g2_ParamLimits

0x4e7c,	// (0x00006eb4) popup_preview_fixed_window_g2

0x0002,

0xfb61,	// (0x00011b99) popup_preview_fixed_window_g_ParamLimits

0xfb61,	// (0x00011b99) popup_preview_fixed_window_g

0xf0db,	// (0x00011113) aid_navi_side_left_pane_ParamLimits

0xf0f0,	// (0x00011128) aid_navi_side_right_pane_ParamLimits

0xf108,	// (0x00011140) navi_icon_pane_stacon_ParamLimits

0xf11c,	// (0x00011154) navi_navi_pane_stacon_ParamLimits

0xf108,	// (0x00011140) navi_text_pane_stacon_ParamLimits

0xe674,	// (0x000106ac) main_text_info_pane

0x5303,	// (0x0000733b) listscroll_text_info_pane

0x530b,	// (0x00007343) list_text_info_pane_ParamLimits

0x530b,	// (0x00007343) list_text_info_pane

0x531a,	// (0x00007352) scroll_pane_cp24_ParamLimits

0x531a,	// (0x00007352) scroll_pane_cp24

0xc71e,	// (0x0000e756) list_text_info_pane_t1_ParamLimits

0xc71e,	// (0x0000e756) list_text_info_pane_t1

0xaab1,	// (0x0000cae9) popup_fast_swap2_window_ParamLimits

0xaab1,	// (0x0000cae9) popup_fast_swap2_window

0x536c,	// (0x000073a4) aid_size_cell_fast2

0xe674,	// (0x000106ac) bg_popup_window_pane_cp17

0x1c23,	// (0x00003c5b) heading_pane_cp2

0xeaeb,	// (0x00010b23) listscroll_fast2_pane

0x5376,	// (0x000073ae) grid_fast2_pane

0x5380,	// (0x000073b8) listscroll_fast2_pane_g1

0x5388,	// (0x000073c0) listscroll_fast2_pane_g2

0x0001,

0xfbdd,	// (0x00011c15) listscroll_fast2_pane_g

0xee36,	// (0x00010e6e) scroll_pane_cp26

0x5392,	// (0x000073ca) cell_fast2_pane_ParamLimits

0x5392,	// (0x000073ca) cell_fast2_pane

0x53a7,	// (0x000073df) cell_fast2_pane_g1

0x53b0,	// (0x000073e8) cell_fast2_pane_g2

0x53b9,	// (0x000073f1) cell_fast2_pane_g3

0x0002,

0xfbe2,	// (0x00011c1a) cell_fast2_pane_g

0xeb1e,	// (0x00010b56) grid_highlight_pane_cp9

0xeb33,	// (0x00010b6b) main_eswt_pane_ParamLimits

0xeb33,	// (0x00010b6b) main_eswt_pane

0x532f,	// (0x00007367) list_single_text_info_pane

0x53c1,	// (0x000073f9) eswt_ctrl_button_pane

0x53c1,	// (0x000073f9) eswt_ctrl_canvas_pane

0xc73a,	// (0x0000e772) eswt_ctrl_combo_pane

0x53c1,	// (0x000073f9) eswt_ctrl_default_pane

0x53c1,	// (0x000073f9) eswt_ctrl_label_pane

0x53d1,	// (0x00007409) eswt_ctrl_wait_pane

0xc742,	// (0x0000e77a) eswt_shell_pane

0xe674,	// (0x000106ac) listscroll_eswt_app_pane

0x53f9,	// (0x00007431) popup_eswt_tasktip_window_ParamLimits

0x53f9,	// (0x00007431) popup_eswt_tasktip_window

0x1767,	// (0x0000379f) bg_popup_window_pane_cp18

0x540a,	// (0x00007442) eswt_control_pane_g1_ParamLimits

0x540a,	// (0x00007442) eswt_control_pane_g1

0x5417,	// (0x0000744f) eswt_control_pane_g2_ParamLimits

0x5417,	// (0x0000744f) eswt_control_pane_g2

0x5424,	// (0x0000745c) eswt_control_pane_g3_ParamLimits

0x5424,	// (0x0000745c) eswt_control_pane_g3

0x5431,	// (0x00007469) eswt_control_pane_g4_ParamLimits

0x5431,	// (0x00007469) eswt_control_pane_g4

0x0003,

0xfbe9,	// (0x00011c21) eswt_control_pane_g_ParamLimits

0xfbe9,	// (0x00011c21) eswt_control_pane_g

0xecb5,	// (0x00010ced) bg_button_pane_ParamLimits

0xecb5,	// (0x00010ced) bg_button_pane

0xeb33,	// (0x00010b6b) common_borders_pane_copy2_ParamLimits

0xeb33,	// (0x00010b6b) common_borders_pane_copy2

0x543e,	// (0x00007476) control_button_pane_g1_ParamLimits

0x543e,	// (0x00007476) control_button_pane_g1

0x544a,	// (0x00007482) control_button_pane_g2_ParamLimits

0x544a,	// (0x00007482) control_button_pane_g2

0x5456,	// (0x0000748e) control_button_pane_g3_ParamLimits

0x5456,	// (0x0000748e) control_button_pane_g3

0x0002,

0xfbf2,	// (0x00011c2a) control_button_pane_g_ParamLimits

0xfbf2,	// (0x00011c2a) control_button_pane_g

0x546a,	// (0x000074a2) control_button_pane_t1

0x5478,	// (0x000074b0) control_button_pane_t2

0x0001,

0xfbf9,	// (0x00011c31) control_button_pane_t

0x15db,	// (0x00003613) bg_button_pane_g1

0x15e3,	// (0x0000361b) bg_button_pane_g2

0x15eb,	// (0x00003623) bg_button_pane_g3

0x15f3,	// (0x0000362b) bg_button_pane_g4

0x15fb,	// (0x00003633) bg_button_pane_g5

0x1603,	// (0x0000363b) bg_button_pane_g6

0x160b,	// (0x00003643) bg_button_pane_g7

0x1613,	// (0x0000364b) bg_button_pane_g8

0x161b,	// (0x00003653) bg_button_pane_g9

0x0008,

0xf846,	// (0x0001187e) bg_button_pane_g

0x4538,	// (0x00006570) common_borders_pane_ParamLimits

0x4538,	// (0x00006570) common_borders_pane

0x540a,	// (0x00007442) eswt_control_pane_g1_copy1_ParamLimits

0x540a,	// (0x00007442) eswt_control_pane_g1_copy1

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy1_ParamLimits

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy1

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy1_ParamLimits

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy1

0x5431,	// (0x00007469) eswt_control_pane_g4_copy1_ParamLimits

0x5431,	// (0x00007469) eswt_control_pane_g4_copy1

0x4573,	// (0x000065ab) bg_eswt_ctrl_canvas_pane_g1

0x4538,	// (0x00006570) common_borders_pane_cp2_ParamLimits

0x4538,	// (0x00006570) common_borders_pane_cp2

0x4538,	// (0x00006570) common_borders_pane_cp3_ParamLimits

0x4538,	// (0x00006570) common_borders_pane_cp3

0x5486,	// (0x000074be) separator_horizontal_pane

0x548e,	// (0x000074c6) separator_vertical_pane

0x540a,	// (0x00007442) eswt_control_pane_g1_copy2_ParamLimits

0x540a,	// (0x00007442) eswt_control_pane_g1_copy2

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy2_ParamLimits

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy2

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy2_ParamLimits

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy2

0x5431,	// (0x00007469) eswt_control_pane_g4_copy2_ParamLimits

0x5431,	// (0x00007469) eswt_control_pane_g4_copy2

0xe674,	// (0x000106ac) common_borders_pane_cp4

0x5497,	// (0x000074cf) separator_horizontal_pane_g1

0x54a0,	// (0x000074d8) separator_horizontal_pane_g2

0x54a9,	// (0x000074e1) separator_horizontal_pane_g3

0x0002,

0xfbfe,	// (0x00011c36) separator_horizontal_pane_g

0x540a,	// (0x00007442) eswt_control_pane_g1_copy3_ParamLimits

0x540a,	// (0x00007442) eswt_control_pane_g1_copy3

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy3_ParamLimits

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy3

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy3_ParamLimits

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy3

0x5431,	// (0x00007469) eswt_control_pane_g4_copy3_ParamLimits

0x5431,	// (0x00007469) eswt_control_pane_g4_copy3

0xe674,	// (0x000106ac) common_borders_pane_cp5

0x54b2,	// (0x000074ea) separator_vertical_pane_g1

0x54bb,	// (0x000074f3) separator_vertical_pane_g2

0x54c4,	// (0x000074fc) separator_vertical_pane_g3

0x0002,

0xfc05,	// (0x00011c3d) separator_vertical_pane_g

0x540a,	// (0x00007442) eswt_control_pane_g1_copy4_ParamLimits

0x540a,	// (0x00007442) eswt_control_pane_g1_copy4

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy4_ParamLimits

0x5417,	// (0x0000744f) eswt_control_pane_g2_copy4

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy4_ParamLimits

0x5424,	// (0x0000745c) eswt_control_pane_g3_copy4

0x5431,	// (0x00007469) eswt_control_pane_g4_copy4_ParamLimits

0x5431,	// (0x00007469) eswt_control_pane_g4_copy4

0xc762,	// (0x0000e79a) eswt_ctrl_combo_button_pane

0xc76a,	// (0x0000e7a2) eswt_ctrl_input_pane

0xc772,	// (0x0000e7aa) popup_choice_list_window_cp70

0xc77a,	// (0x0000e7b2) eswt_ctrl_input_pane_t1

0xe674,	// (0x000106ac) input_focus_pane_cp70

0x4538,	// (0x00006570) bg_button_pane_cp70_ParamLimits

0x4538,	// (0x00006570) bg_button_pane_cp70

0xc788,	// (0x0000e7c0) eswt_ctrl_combo_button_pane_g1

0x54fb,	// (0x00007533) wait_bar_pane_cp70

0x1767,	// (0x0000379f) bg_popup_window_pane_cp70_ParamLimits

0x1767,	// (0x0000379f) bg_popup_window_pane_cp70

0x5503,	// (0x0000753b) popup_eswt_tasktip_window_t1

0x5519,	// (0x00007551) wait_bar_pane_cp71_ParamLimits

0x5519,	// (0x00007551) wait_bar_pane_cp71

0x5525,	// (0x0000755d) grid_eswt_app_pane

0xf1e5,	// (0x0001121d) scroll_pane_cp70

0xc790,	// (0x0000e7c8) cell_eswt_app_pane_ParamLimits

0xc790,	// (0x0000e7c8) cell_eswt_app_pane

0xc7ba,	// (0x0000e7f2) cell_eswt_app_pane_g1_ParamLimits

0xc7ba,	// (0x0000e7f2) cell_eswt_app_pane_g1

0xc7e9,	// (0x0000e821) cell_eswt_app_pane_g2_ParamLimits

0xc7e9,	// (0x0000e821) cell_eswt_app_pane_g2

0x0001,

0xfc0c,	// (0x00011c44) cell_eswt_app_pane_g_ParamLimits

0xfc0c,	// (0x00011c44) cell_eswt_app_pane_g

0xc80d,	// (0x0000e845) cell_eswt_app_pane_t1_ParamLimits

0xc80d,	// (0x0000e845) cell_eswt_app_pane_t1

0x55e3,	// (0x0000761b) grid_highlight_pane_cp70_ParamLimits

0x55e3,	// (0x0000761b) grid_highlight_pane_cp70

0x03df,	// (0x00002417) set_content_pane_g1

0xa89f,	// (0x0000c8d7) status_small_volume_pane

0xc83f,	// (0x0000e877) status_small_volume_pane_g1

0xc847,	// (0x0000e87f) volume_small2_pane

0xc850,	// (0x0000e888) volume_small2_pane_g1

0xc859,	// (0x0000e891) volume_small2_pane_g2

0xc862,	// (0x0000e89a) volume_small2_pane_g3

0xc86b,	// (0x0000e8a3) volume_small2_pane_g4

0xc874,	// (0x0000e8ac) volume_small2_pane_g5

0xc87d,	// (0x0000e8b5) volume_small2_pane_g6

0xc886,	// (0x0000e8be) volume_small2_pane_g7

0xc88f,	// (0x0000e8c7) volume_small2_pane_g8

0xc898,	// (0x0000e8d0) volume_small2_pane_g9

0xc8a1,	// (0x0000e8d9) volume_small2_pane_g10

0x0009,

0xfc11,	// (0x00011c49) volume_small2_pane_g

0x4b3f,	// (0x00006b77) fep_vkb_top_text_pane_g1_ParamLimits

0xc678,	// (0x0000e6b0) fep_vkb_top_text_pane_t1_ParamLimits

0x4e88,	// (0x00006ec0) popup_preview_fixed_window_g3_ParamLimits

0x4e88,	// (0x00006ec0) popup_preview_fixed_window_g3

0xb14e,	// (0x0000d186) popup_toolbar_trans_pane

0xbe5c,	// (0x0000de94) aid_height_set_list_ParamLimits

0x2dbb,	// (0x00004df3) aid_size_parent_ParamLimits

0x0a51,	// (0x00002a89) list_highlight_pane_cp2_ParamLimits

0x03df,	// (0x00002417) set_content_pane_g1_ParamLimits

0xc02c,	// (0x0000e064) list_single_image_pane_ParamLimits

0xc02c,	// (0x0000e064) list_single_image_pane

0xc8aa,	// (0x0000e8e2) aid_size_cell_image_ParamLimits

0xc8aa,	// (0x0000e8e2) aid_size_cell_image

0xc8b7,	// (0x0000e8ef) grid_single_image_pane_ParamLimits

0xc8b7,	// (0x0000e8ef) grid_single_image_pane

0x4eb6,	// (0x00006eee) list_single_image_pane_g1_ParamLimits

0x4eb6,	// (0x00006eee) list_single_image_pane_g1

0x4ec2,	// (0x00006efa) list_single_image_pane_g2_ParamLimits

0x4ec2,	// (0x00006efa) list_single_image_pane_g2

0x0001,

0xfc26,	// (0x00011c5e) list_single_image_pane_g_ParamLimits

0xfc26,	// (0x00011c5e) list_single_image_pane_g

0x5675,	// (0x000076ad) list_single_image_pane_t1_ParamLimits

0x5675,	// (0x000076ad) list_single_image_pane_t1

0xc8c3,	// (0x0000e8fb) cell_image_list_pane_ParamLimits

0xc8c3,	// (0x0000e8fb) cell_image_list_pane

0xc8d7,	// (0x0000e90f) cell_image_list_pane_g1

0xc8e0,	// (0x0000e918) cell_image_list_pane_g2

0x0001,

0xfc2b,	// (0x00011c63) cell_image_list_pane_g

0xc8e9,	// (0x0000e921) aid_size_cell_tb_trans_pane

0xecb5,	// (0x00010ced) bg_tb_trans_pane

0xc8fb,	// (0x0000e933) grid_tb_trans_pane

0x15db,	// (0x00003613) bg_tb_trans_pane_g1

0x15e3,	// (0x0000361b) bg_tb_trans_pane_g2

0x15eb,	// (0x00003623) bg_tb_trans_pane_g3

0x15f3,	// (0x0000362b) bg_tb_trans_pane_g4

0x15fb,	// (0x00003633) bg_tb_trans_pane_g5

0x1613,	// (0x0000364b) bg_tb_trans_pane_g6

0x161b,	// (0x00003653) bg_tb_trans_pane_g7

0x1603,	// (0x0000363b) bg_tb_trans_pane_g8

0x160b,	// (0x00003643) bg_tb_trans_pane_g9

0x0008,

0xfc30,	// (0x00011c68) bg_tb_trans_pane_g

0xc90f,	// (0x0000e947) cell_toolbar_trans_pane_ParamLimits

0xc90f,	// (0x0000e947) cell_toolbar_trans_pane

0x4573,	// (0x000065ab) cell_toolbar_trans_pane_g1

0xc343,	// (0x0000e37b) list_form2_midp_pane_t1

0xc351,	// (0x0000e389) list_form2_midp_pane_t2

0x0001,

0xfad9,	// (0x00011b11) list_form2_midp_pane_t

0x410d,	// (0x00006145) scroll_pane_cp51_ParamLimits

0x4316,	// (0x0000634e) form2_midp_wait_pane_g1

0x431f,	// (0x00006357) form2_midp_wait_pane_g2

0x4328,	// (0x00006360) form2_midp_wait_pane_g3

0x0002,

0xfaee,	// (0x00011b26) form2_midp_wait_pane_g

0xe873,	// (0x000108ab) list_highlight_pane_cp21_ParamLimits

0x4370,	// (0x000063a8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x437f,	// (0x000063b7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2fbe,	// (0x00004ff6) list_single_2graphic_im_pane_ParamLimits

0x2fbe,	// (0x00004ff6) list_single_2graphic_im_pane

0xc935,	// (0x0000e96d) list_single_2graphic_im_pane_g1_ParamLimits

0xc935,	// (0x0000e96d) list_single_2graphic_im_pane_g1

0xc946,	// (0x0000e97e) list_single_2graphic_im_pane_g2_ParamLimits

0xc946,	// (0x0000e97e) list_single_2graphic_im_pane_g2

0xc952,	// (0x0000e98a) list_single_2graphic_im_pane_g3_ParamLimits

0xc952,	// (0x0000e98a) list_single_2graphic_im_pane_g3

0x0003,

0xfc43,	// (0x00011c7b) list_single_2graphic_im_pane_g_ParamLimits

0xfc43,	// (0x00011c7b) list_single_2graphic_im_pane_g

0xc966,	// (0x0000e99e) list_single_2graphic_im_pane_t1_ParamLimits

0xc966,	// (0x0000e99e) list_single_2graphic_im_pane_t1

0x4e94,	// (0x00006ecc) list_single_graphic_2heading_pane_fp_ParamLimits

0x4e94,	// (0x00006ecc) list_single_graphic_2heading_pane_fp

0x4ef9,	// (0x00006f31) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4ef9,	// (0x00006f31) list_single_graphic_2heading_pane_fp_g1

0x4eaa,	// (0x00006ee2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4eaa,	// (0x00006ee2) list_single_graphic_2heading_pane_fp_g2

0x4eb6,	// (0x00006eee) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4eb6,	// (0x00006eee) list_single_graphic_2heading_pane_fp_g3

0x4ec2,	// (0x00006efa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4ec2,	// (0x00006efa) list_single_graphic_2heading_pane_fp_g4

0x4ed6,	// (0x00006f0e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4ed6,	// (0x00006f0e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb71,	// (0x00011ba9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb71,	// (0x00011ba9) list_single_graphic_2heading_pane_fp_g

0x576b,	// (0x000077a3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x576b,	// (0x000077a3) list_single_graphic_2heading_pane_fp_t1

0x4f31,	// (0x00006f69) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4f31,	// (0x00006f69) list_single_graphic_2heading_pane_fp_t2

0x5781,	// (0x000077b9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5781,	// (0x000077b9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4c,	// (0x00011c84) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4c,	// (0x00011c84) list_single_graphic_2heading_pane_fp_t

0x479d,	// (0x000067d5) fep_hwr_write_pane_g5_ParamLimits

0x479d,	// (0x000067d5) fep_hwr_write_pane_g5

0x47a9,	// (0x000067e1) fep_hwr_write_pane_g6_ParamLimits

0x47a9,	// (0x000067e1) fep_hwr_write_pane_g6

0xc742,	// (0x0000e77a) eswt_shell_pane_ParamLimits

0x1767,	// (0x0000379f) bg_popup_window_pane_cp18_ParamLimits

0x2c79,	// (0x00004cb1) heading_pane_cp70

0x5503,	// (0x0000753b) popup_eswt_tasktip_window_t1_ParamLimits

0xb26b,	// (0x0000d2a3) aid_touch_tab_arrow_left

0xb281,	// (0x0000d2b9) aid_touch_tab_arrow_right

0x970d,	// (0x0000b745) title_pane_g3_ParamLimits

0x970d,	// (0x0000b745) title_pane_g3

0xec4c,	// (0x00010c84) set_value_pane_g1

0xb14e,	// (0x0000d186) popup_toolbar_trans_pane_ParamLimits

0xc8e9,	// (0x0000e921) aid_size_cell_tb_trans_pane_ParamLimits

0xecb5,	// (0x00010ced) bg_tb_trans_pane_ParamLimits

0xc8fb,	// (0x0000e933) grid_tb_trans_pane_ParamLimits

0xe9b7,	// (0x000109ef) cont_note_pane_ParamLimits

0xe9b7,	// (0x000109ef) cont_note_pane

0xeb33,	// (0x00010b6b) cont_snote2_single_text_pane_ParamLimits

0xeb33,	// (0x00010b6b) cont_snote2_single_text_pane

0xeb33,	// (0x00010b6b) cont_snote2_single_graphic_pane_ParamLimits

0xeb33,	// (0x00010b6b) cont_snote2_single_graphic_pane

0x1e42,	// (0x00003e7a) cont_note_wait_pane_ParamLimits

0x1e42,	// (0x00003e7a) cont_note_wait_pane

0x1e42,	// (0x00003e7a) cont_note_image_pane_ParamLimits

0x1e42,	// (0x00003e7a) cont_note_image_pane

0x5797,	// (0x000077cf) popup_note2_window_g1_ParamLimits

0x5797,	// (0x000077cf) popup_note2_window_g1

0xc9a4,	// (0x0000e9dc) popup_note2_window_t1_ParamLimits

0xc9a4,	// (0x0000e9dc) popup_note2_window_t1

0xc9e9,	// (0x0000ea21) popup_note2_window_t2_ParamLimits

0xc9e9,	// (0x0000ea21) popup_note2_window_t2

0xca2e,	// (0x0000ea66) popup_note2_window_t3_ParamLimits

0xca2e,	// (0x0000ea66) popup_note2_window_t3

0x5897,	// (0x000078cf) popup_note2_window_t4_ParamLimits

0x5897,	// (0x000078cf) popup_note2_window_t4

0xea3b,	// (0x00010a73) popup_note2_window_t5_ParamLimits

0xea3b,	// (0x00010a73) popup_note2_window_t5

0x0004,

0xfc58,	// (0x00011c90) popup_note2_window_t_ParamLimits

0xfc58,	// (0x00011c90) popup_note2_window_t

0x58c6,	// (0x000078fe) popup_note2_image_window_g1_ParamLimits

0x58c6,	// (0x000078fe) popup_note2_image_window_g1

0xca73,	// (0x0000eaab) popup_note2_image_window_g2_ParamLimits

0xca73,	// (0x0000eaab) popup_note2_image_window_g2

0x0001,

0xfc63,	// (0x00011c9b) popup_note2_image_window_g_ParamLimits

0xfc63,	// (0x00011c9b) popup_note2_image_window_g

0x58e4,	// (0x0000791c) popup_note2_image_window_t1_ParamLimits

0x58e4,	// (0x0000791c) popup_note2_image_window_t1

0x58fc,	// (0x00007934) popup_note2_image_window_t2_ParamLimits

0x58fc,	// (0x00007934) popup_note2_image_window_t2

0x5914,	// (0x0000794c) popup_note2_image_window_t3_ParamLimits

0x5914,	// (0x0000794c) popup_note2_image_window_t3

0x0002,

0xfc68,	// (0x00011ca0) popup_note2_image_window_t_ParamLimits

0xfc68,	// (0x00011ca0) popup_note2_image_window_t

0x1e50,	// (0x00003e88) popup_note2_wait_window_g1_ParamLimits

0x1e50,	// (0x00003e88) popup_note2_wait_window_g1

0x1e5c,	// (0x00003e94) popup_note2_wait_window_g2_ParamLimits

0x1e5c,	// (0x00003e94) popup_note2_wait_window_g2

0x1e68,	// (0x00003ea0) popup_note2_wait_window_g3_ParamLimits

0x1e68,	// (0x00003ea0) popup_note2_wait_window_g3

0x0002,

0xf828,	// (0x00011860) popup_note2_wait_window_g_ParamLimits

0xf828,	// (0x00011860) popup_note2_wait_window_g

0x5930,	// (0x00007968) popup_note2_wait_window_t1_ParamLimits

0x5930,	// (0x00007968) popup_note2_wait_window_t1

0x594e,	// (0x00007986) popup_note2_wait_window_t2_ParamLimits

0x594e,	// (0x00007986) popup_note2_wait_window_t2

0x596c,	// (0x000079a4) popup_note2_wait_window_t3_ParamLimits

0x596c,	// (0x000079a4) popup_note2_wait_window_t3

0x597e,	// (0x000079b6) popup_note2_wait_window_t4_ParamLimits

0x597e,	// (0x000079b6) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x00011ca7) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x00011ca7) popup_note2_wait_window_t

0x5990,	// (0x000079c8) wait_bar2_pane_ParamLimits

0x5990,	// (0x000079c8) wait_bar2_pane

0x59a8,	// (0x000079e0) popup_snote2_single_text_window_g1_ParamLimits

0x59a8,	// (0x000079e0) popup_snote2_single_text_window_g1

0x59d0,	// (0x00007a08) popup_snote2_single_text_window_t1_ParamLimits

0x59d0,	// (0x00007a08) popup_snote2_single_text_window_t1

0x5a1c,	// (0x00007a54) popup_snote2_single_text_window_t2_ParamLimits

0x5a1c,	// (0x00007a54) popup_snote2_single_text_window_t2

0x5a68,	// (0x00007aa0) popup_snote2_single_text_window_t3_ParamLimits

0x5a68,	// (0x00007aa0) popup_snote2_single_text_window_t3

0x5aa9,	// (0x00007ae1) popup_snote2_single_text_window_t4_ParamLimits

0x5aa9,	// (0x00007ae1) popup_snote2_single_text_window_t4

0x5adf,	// (0x00007b17) popup_snote2_single_text_window_t5_ParamLimits

0x5adf,	// (0x00007b17) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x00011cb0) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x00011cb0) popup_snote2_single_text_window_t

0xca85,	// (0x0000eabd) popup_snote2_single_graphic_window_g1_ParamLimits

0xca85,	// (0x0000eabd) popup_snote2_single_graphic_window_g1

0x5b32,	// (0x00007b6a) popup_snote2_single_graphic_window_g2_ParamLimits

0x5b32,	// (0x00007b6a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x00011cbb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x00011cbb) popup_snote2_single_graphic_window_g

0x5b5a,	// (0x00007b92) popup_snote2_single_graphic_window_t1_ParamLimits

0x5b5a,	// (0x00007b92) popup_snote2_single_graphic_window_t1

0x5ba6,	// (0x00007bde) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ba6,	// (0x00007bde) popup_snote2_single_graphic_window_t2

0x5a68,	// (0x00007aa0) popup_snote2_single_graphic_window_t3_ParamLimits

0x5a68,	// (0x00007aa0) popup_snote2_single_graphic_window_t3

0x5aa9,	// (0x00007ae1) popup_snote2_single_graphic_window_t4_ParamLimits

0x5aa9,	// (0x00007ae1) popup_snote2_single_graphic_window_t4

0x5adf,	// (0x00007b17) popup_snote2_single_graphic_window_t5_ParamLimits

0x5adf,	// (0x00007b17) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x00011cc0) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x00011cc0) popup_snote2_single_graphic_window_t

0x3f82,	// (0x00005fba) clock_nsta_pane_cp2_t1

0x3f82,	// (0x00005fba) clock_nsta_pane_cp2_t2

0x0001,

0xfaaf,	// (0x00011ae7) clock_nsta_pane_cp2_t

0xecd4,	// (0x00010d0c) form_field_data_wide_pane_g1_ParamLimits

0xec1c,	// (0x00010c54) form_field_data_wide_pane_g2_ParamLimits

0xec1c,	// (0x00010c54) form_field_data_wide_pane_g2

0xece0,	// (0x00010d18) form_field_data_wide_pane_g3_ParamLimits

0xece0,	// (0x00010d18) form_field_data_wide_pane_g3

0x0002,

0xf667,	// (0x0001169f) form_field_data_wide_pane_g_ParamLimits

0xf667,	// (0x0001169f) form_field_data_wide_pane_g

0xc274,	// (0x0000e2ac) grid_touch_3_pane_ParamLimits

0xc274,	// (0x0000e2ac) grid_touch_3_pane

0xcaad,	// (0x0000eae5) cell_touch_3_pane_ParamLimits

0xcaad,	// (0x0000eae5) cell_touch_3_pane

0x4573,	// (0x000065ab) cell_touch_3_pane_g1

0x4573,	// (0x000065ab) cell_touch_3_pane_g2

0x0001,

0xfb34,	// (0x00011b6c) cell_touch_3_pane_g

0xea6d,	// (0x00010aa5) cont_query_data_pane

0xea75,	// (0x00010aad) cont_query_data_pane_cp1

0x5c20,	// (0x00007c58) button_value_adjust_pane_cp7

0x5c28,	// (0x00007c60) query_popup_pane_cp3

0xf3ec,	// (0x00011424) bg_popup_sub_pane_cp22_ParamLimits

0xa56b,	// (0x0000c5a3) navi_navi_volume_pane_cp2

0xa57a,	// (0x0000c5b2) popup_side_volume_key_window_g2

0xa589,	// (0x0000c5c1) popup_side_volume_key_window_g3

0x0002,

0xf6fd,	// (0x00011735) popup_side_volume_key_window_g

0xa598,	// (0x0000c5d0) popup_side_volume_key_window_t2

0x0001,

0xf704,	// (0x0001173c) popup_side_volume_key_window_t

0xa6e9,	// (0x0000c721) popup_side_volume_key_window_ParamLimits

0x9e8a,	// (0x0000bec2) list_double_graphic_pane_g4_ParamLimits

0x9e8a,	// (0x0000bec2) list_double_graphic_pane_g4

0xc007,	// (0x0000e03f) list_single_2heading_msg_pane_ParamLimits

0xc007,	// (0x0000e03f) list_single_2heading_msg_pane

0xcaf6,	// (0x0000eb2e) list_single_2heading_msg_pane_g1_ParamLimits

0xcaf6,	// (0x0000eb2e) list_single_2heading_msg_pane_g1

0xcb02,	// (0x0000eb3a) list_single_2heading_msg_pane_g2_ParamLimits

0xcb02,	// (0x0000eb3a) list_single_2heading_msg_pane_g2

0xcb15,	// (0x0000eb4d) list_single_2heading_msg_pane_g3_ParamLimits

0xcb15,	// (0x0000eb4d) list_single_2heading_msg_pane_g3

0xcb21,	// (0x0000eb59) list_single_2heading_msg_pane_g4_ParamLimits

0xcb21,	// (0x0000eb59) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x00011ccb) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x00011ccb) list_single_2heading_msg_pane_g

0xcb39,	// (0x0000eb71) list_single_2heading_msg_pane_t1_ParamLimits

0xcb39,	// (0x0000eb71) list_single_2heading_msg_pane_t1

0xcb61,	// (0x0000eb99) list_single_2heading_msg_pane_t2_ParamLimits

0xcb61,	// (0x0000eb99) list_single_2heading_msg_pane_t2

0xcbcc,	// (0x0000ec04) list_single_2heading_msg_pane_t3_ParamLimits

0xcbcc,	// (0x0000ec04) list_single_2heading_msg_pane_t3

0x5d17,	// (0x00007d4f) list_single_2heading_msg_pane_t4_ParamLimits

0x5d17,	// (0x00007d4f) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x00011cd4) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x00011cd4) list_single_2heading_msg_pane_t

0xe821,	// (0x00010859) title_pane_g4_ParamLimits

0xe821,	// (0x00010859) title_pane_g4

0xf004,	// (0x0001103c) title_pane_stacon_g3_ParamLimits

0xf004,	// (0x0001103c) title_pane_stacon_g3

0x572e,	// (0x00007766) list_single_2graphic_im_pane_g4_ParamLimits

0x572e,	// (0x00007766) list_single_2graphic_im_pane_g4

0xbc3b,	// (0x0000dc73) popup_side_volume_key_window_cp

0x3462,	// (0x0000549a) main_idle_act2_pane_t1

0x1623,	// (0x0000365b) toolbar_button_pane_g10

0x9d17,	// (0x0000bd4f) popup_toolbar_window_cp1

0x3f73,	// (0x00005fab) clock_nsta_pane_cp_t1

0x3f73,	// (0x00005fab) clock_nsta_pane_cp_t2

0x0001,

0xfaaa,	// (0x00011ae2) clock_nsta_pane_cp_t

0xa56b,	// (0x0000c5a3) navi_navi_volume_pane_cp2_ParamLimits

0xf402,	// (0x0001143a) popup_side_volume_key_window_g1_ParamLimits

0xa57a,	// (0x0000c5b2) popup_side_volume_key_window_g2_ParamLimits

0xa589,	// (0x0000c5c1) popup_side_volume_key_window_g3_ParamLimits

0xf6fd,	// (0x00011735) popup_side_volume_key_window_g_ParamLimits

0x45dd,	// (0x00006615) fep_hwr_aid_pane

0x4684,	// (0x000066bc) bg_fep_hwr_top_pane_g4_ParamLimits

0x46a4,	// (0x000066dc) fep_hwr_top_pane_g1_ParamLimits

0x46b6,	// (0x000066ee) fep_hwr_top_pane_g2_ParamLimits

0x46c8,	// (0x00006700) fep_hwr_top_pane_g3_ParamLimits

0xfaff,	// (0x00011b37) fep_hwr_top_pane_g_ParamLimits

0x46dd,	// (0x00006715) fep_hwr_top_text_pane_ParamLimits

0x27b6,	// (0x000047ee) aid_touch_tab_arrow_arrow_2

0x27bf,	// (0x000047f7) aid_touch_tab_arrow_left_2

0x45f1,	// (0x00006629) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4628,	// (0x00006660) fep_hwr_prediction_pane

0x494e,	// (0x00006986) fep_vkb_prediction_pane

0xc658,	// (0x0000e690) fep_vkb_side_pane_g3_ParamLimits

0xc658,	// (0x0000e690) fep_vkb_side_pane_g3

0x49f7,	// (0x00006a2f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x50ee,	// (0x00007126) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x50fb,	// (0x00007133) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba9,	// (0x00011be1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5d3c,	// (0x00007d74) fep_hwr_prediction_pane_g1

0x5d46,	// (0x00007d7e) fep_hwr_prediction_pane_g2

0x5d4e,	// (0x00007d86) fep_hwr_prediction_pane_g3

0x5d56,	// (0x00007d8e) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x00011cdd) fep_hwr_prediction_pane_g

0x5d3c,	// (0x00007d74) fep_vkb_prediction_pane_g1

0x5d5e,	// (0x00007d96) fep_vkb_prediction_pane_g2

0x5d66,	// (0x00007d9e) fep_vkb_prediction_pane_g3

0x5d6e,	// (0x00007da6) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x00011ce6) fep_vkb_prediction_pane_g

0xbdde,	// (0x0000de16) slider_set_pane_g3

0xbdf2,	// (0x0000de2a) slider_set_pane_g4

0xbe0a,	// (0x0000de42) slider_set_pane_g5

0xbdde,	// (0x0000de16) slider_set_pane_g6

0xbe20,	// (0x0000de58) slider_set_pane_g7

0x2f1c,	// (0x00004f54) slider_form_pane_g3

0x2f25,	// (0x00004f5d) slider_form_pane_g4

0x2f2d,	// (0x00004f65) slider_form_pane_g5

0x2f1c,	// (0x00004f54) slider_form_pane_g6

0xbfa7,	// (0x0000dfdf) slider_form_pane_g7

0x3756,	// (0x0000578e) slider_set_pane_vc_g3

0x375f,	// (0x00005797) slider_set_pane_vc_g4

0x3768,	// (0x000057a0) slider_set_pane_vc_g5

0x3756,	// (0x0000578e) slider_set_pane_vc_g6

0x3771,	// (0x000057a9) slider_set_pane_vc_g7

0x3c57,	// (0x00005c8f) slider_form_pane_vc_g1

0x3c60,	// (0x00005c98) slider_form_pane_vc_g2

0x3c69,	// (0x00005ca1) slider_form_pane_vc_g3

0x3c57,	// (0x00005c8f) slider_form_pane_vc_g4

0x3c72,	// (0x00005caa) slider_form_pane_vc_g5

0x0004,

0xfa7c,	// (0x00011ab4) slider_form_pane_vc_g

0xe674,	// (0x000106ac) main_idle_act3_pane

0x5d76,	// (0x00007dae) ai3_links_pane

0xcc3a,	// (0x0000ec72) popup_ai3_data_window_ParamLimits

0xcc3a,	// (0x0000ec72) popup_ai3_data_window

0xe674,	// (0x000106ac) grid_ai3_links_pane

0xcc52,	// (0x0000ec8a) cell_ai3_links_pane_ParamLimits

0xcc52,	// (0x0000ec8a) cell_ai3_links_pane

0x5daf,	// (0x00007de7) bg_popup_sub_pane_cp11

0x5dbc,	// (0x00007df4) cell_ai3_links_pane_g1

0xe674,	// (0x000106ac) bg_popup_sub_pane_cp12

0x5de1,	// (0x00007e19) heading_ai3_data_pane

0x5de9,	// (0x00007e21) list_ai3_gene_pane

0x5df5,	// (0x00007e2d) popup_ai3_data_window_g1

0x5dfd,	// (0x00007e35) heading_ai3_data_pane_g1

0x5e05,	// (0x00007e3d) heading_ai3_data_pane_t1

0xcc6c,	// (0x0000eca4) list_double_ai3_gene_pane_ParamLimits

0xcc6c,	// (0x0000eca4) list_double_ai3_gene_pane

0x5e20,	// (0x00007e58) list_single_ai3_gene_pane_ParamLimits

0x5e20,	// (0x00007e58) list_single_ai3_gene_pane

0x4538,	// (0x00006570) list_highlight_pane_cp7_ParamLimits

0x4538,	// (0x00006570) list_highlight_pane_cp7

0x5e2d,	// (0x00007e65) list_single_a13_gene_pane_t1_ParamLimits

0x5e2d,	// (0x00007e65) list_single_a13_gene_pane_t1

0x5e44,	// (0x00007e7c) list_single_ai3_gene_pane_g1

0x5e4d,	// (0x00007e85) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x00011cef) list_single_ai3_gene_pane_g

0x5e55,	// (0x00007e8d) list_double_ai3_gene_pane_g1_ParamLimits

0x5e55,	// (0x00007e8d) list_double_ai3_gene_pane_g1

0xcc79,	// (0x0000ecb1) list_double_ai3_gene_pane_t1_ParamLimits

0xcc79,	// (0x0000ecb1) list_double_ai3_gene_pane_t1

0x5e7d,	// (0x00007eb5) list_double_ai3_gene_pane_t2_ParamLimits

0x5e7d,	// (0x00007eb5) list_double_ai3_gene_pane_t2

0x5e92,	// (0x00007eca) list_double_ai3_gene_pane_t3_ParamLimits

0x5e92,	// (0x00007eca) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x00011cf4) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x00011cf4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5c39,	// (0x00007c71) aid_size_min_col_2

0xcae0,	// (0x0000eb18) aid_size_min_msg_ParamLimits

0xcae0,	// (0x0000eb18) aid_size_min_msg

0xc66c,	// (0x0000e6a4) fep_vkb_top_text_pane_g2_ParamLimits

0xc66c,	// (0x0000e6a4) fep_vkb_top_text_pane_g2

0x0001,

0xfb2f,	// (0x00011b67) fep_vkb_top_text_pane_g_ParamLimits

0xfb2f,	// (0x00011b67) fep_vkb_top_text_pane_g

0xe674,	// (0x000106ac) main_hc_apps_shell_pane

0x5eaf,	// (0x00007ee7) grid_hc_apps_pane_ParamLimits

0x5eaf,	// (0x00007ee7) grid_hc_apps_pane

0x5ebe,	// (0x00007ef6) list_hc_apps_pane

0x5ec6,	// (0x00007efe) scroll_pane_cp37_ParamLimits

0x5ec6,	// (0x00007efe) scroll_pane_cp37

0xcc95,	// (0x0000eccd) cell_hc_apps_pane_ParamLimits

0xcc95,	// (0x0000eccd) cell_hc_apps_pane

0xcd53,	// (0x0000ed8b) cell_hc_apps_pane_g1_ParamLimits

0xcd53,	// (0x0000ed8b) cell_hc_apps_pane_g1

0x5fb1,	// (0x00007fe9) cell_hc_apps_pane_g2_ParamLimits

0x5fb1,	// (0x00007fe9) cell_hc_apps_pane_g2

0x5fcd,	// (0x00008005) cell_hc_apps_pane_g3_ParamLimits

0x5fcd,	// (0x00008005) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x00011cfb) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x00011cfb) cell_hc_apps_pane_g

0xcd80,	// (0x0000edb8) cell_hc_apps_pane_t1_ParamLimits

0xcd80,	// (0x0000edb8) cell_hc_apps_pane_t1

0xe9b7,	// (0x000109ef) grid_highlight_pane_cp10_ParamLimits

0xe9b7,	// (0x000109ef) grid_highlight_pane_cp10

0xcdbe,	// (0x0000edf6) list_single_hc_apps_pane_ParamLimits

0xcdbe,	// (0x0000edf6) list_single_hc_apps_pane

0xcdee,	// (0x0000ee26) list_single_hc_apps_pane_g1

0xce07,	// (0x0000ee3f) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x00011d02) list_single_hc_apps_pane_g

0xce20,	// (0x0000ee58) list_single_hc_apps_pane_g2_copy1

0xce3c,	// (0x0000ee74) list_single_hc_apps_pane_t1

0xe873,	// (0x000108ab) bg_set_opt_pane_cp_ParamLimits

0x97e1,	// (0x0000b819) setting_slider_pane_t1_ParamLimits

0x97fa,	// (0x0000b832) setting_slider_pane_t2_ParamLimits

0x9814,	// (0x0000b84c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00011596) setting_slider_pane_t_ParamLimits

0x982c,	// (0x0000b864) slider_set_pane_ParamLimits

0x08e6,	// (0x0000291e) control_pane_g5_ParamLimits

0x08e6,	// (0x0000291e) control_pane_g5

0xbdd1,	// (0x0000de09) slider_set_pane_g1_ParamLimits

0x2d18,	// (0x00004d50) slider_set_pane_g2_ParamLimits

0xbdde,	// (0x0000de16) slider_set_pane_g3_ParamLimits

0xbdf2,	// (0x0000de2a) slider_set_pane_g4_ParamLimits

0xbe0a,	// (0x0000de42) slider_set_pane_g5_ParamLimits

0xbdde,	// (0x0000de16) slider_set_pane_g6_ParamLimits

0xbe20,	// (0x0000de58) slider_set_pane_g7_ParamLimits

0xf944,	// (0x0001197c) slider_set_pane_g_ParamLimits

0x038a,	// (0x000023c2) navi_icon_text_pane_ParamLimits

0xb234,	// (0x0000d26c) aid_fill_nsta_2_ParamLimits

0xb26b,	// (0x0000d2a3) aid_touch_tab_arrow_left_ParamLimits

0xb281,	// (0x0000d2b9) aid_touch_tab_arrow_right_ParamLimits

0xb31c,	// (0x0000d354) clock_nsta_pane_ParamLimits

0x2798,	// (0x000047d0) navi_icon_pane_g1_ParamLimits

0x27a4,	// (0x000047dc) navi_text_pane_t1_ParamLimits

0x4083,	// (0x000060bb) navi_icon_text_pane_g1_ParamLimits

0x408f,	// (0x000060c7) navi_icon_text_pane_t1_ParamLimits

0xcdee,	// (0x0000ee26) list_single_hc_apps_pane_g1_ParamLimits

0xce07,	// (0x0000ee3f) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x00011d02) list_single_hc_apps_pane_g_ParamLimits

0xce20,	// (0x0000ee58) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xce3c,	// (0x0000ee74) list_single_hc_apps_pane_t1_ParamLimits

0x9612,	// (0x0000b64a) popup_toolbar2_fixed_window_ParamLimits

0x9612,	// (0x0000b64a) popup_toolbar2_fixed_window

0xb144,	// (0x0000d17c) popup_toolbar2_float_window

0xe674,	// (0x000106ac) bg_popup_sub_pane_cp27

0x610e,	// (0x00008146) grid_toolbar2_float_pane

0xe674,	// (0x000106ac) bg_popup_sub_pane_cp26

0x610e,	// (0x00008146) grid_toolbar2_fixed_pane

0xce6a,	// (0x0000eea2) cell_toolbar2_fixed_pane_ParamLimits

0xce6a,	// (0x0000eea2) cell_toolbar2_fixed_pane

0xce84,	// (0x0000eebc) cell_toolbar2_fixed_pane_g1

0x1509,	// (0x00003541) toolbar2_fixed_button_pane

0x15db,	// (0x00003613) toolbar2_fixed_button_pane_g1

0x15e3,	// (0x0000361b) toolbar2_fixed_button_pane_g2

0x15eb,	// (0x00003623) toolbar2_fixed_button_pane_g3

0x15f3,	// (0x0000362b) toolbar2_fixed_button_pane_g4

0x15fb,	// (0x00003633) toolbar2_fixed_button_pane_g5

0x1603,	// (0x0000363b) toolbar2_fixed_button_pane_g6

0x160b,	// (0x00003643) toolbar2_fixed_button_pane_g7

0x1613,	// (0x0000364b) toolbar2_fixed_button_pane_g8

0x161b,	// (0x00003653) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x0001187e) toolbar2_fixed_button_pane_g

0x612f,	// (0x00008167) cell_toolbar2_float_pane_ParamLimits

0x612f,	// (0x00008167) cell_toolbar2_float_pane

0x6140,	// (0x00008178) cell_toolbar2_float_pane_g1

0x1509,	// (0x00003541) toolbar2_fixed_button_pane_cp

0xc554,	// (0x0000e58c) fep_vkb_accented_list_pane_ParamLimits

0xc554,	// (0x0000e58c) fep_vkb_accented_list_pane

0x4d3e,	// (0x00006d76) bg_popup_fep_shadow_pane_g9

0x050a,	// (0x00002542) bg_popup_fep_shadow_pane_cp3

0xee1d,	// (0x00010e55) list_accented_list_pane

0x6149,	// (0x00008181) list_single_accented_list_pane_ParamLimits

0x6149,	// (0x00008181) list_single_accented_list_pane

0x050a,	// (0x00002542) list_highlight_pane_cp10

0x615a,	// (0x00008192) list_single_accented_list_pane_t1

0xb06e,	// (0x0000d0a6) popup_slider_window_ParamLimits

0xb06e,	// (0x0000d0a6) popup_slider_window

0x5c30,	// (0x00007c68) aid_indentation_list_msg

0xcf75,	// (0x0000efad) bg_popup_window_pane_cp19

0x6280,	// (0x000082b8) popup_slider_window_g1

0x629c,	// (0x000082d4) popup_slider_window_g2

0x62b8,	// (0x000082f0) popup_slider_window_g3

0x0005,

0xfccf,	// (0x00011d07) popup_slider_window_g

0x631e,	// (0x00008356) popup_slider_window_t1

0x6392,	// (0x000083ca) small_volume_slider_vertical_pane

0x4573,	// (0x000065ab) small_volume_slider_vertical_pane_g1

0x4573,	// (0x000065ab) small_volume_slider_vertical_pane_g2

0x63ae,	// (0x000083e6) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x00011d19) small_volume_slider_vertical_pane_g

0x9560,	// (0x0000b598) area_side_right_pane_ParamLimits

0x9560,	// (0x0000b598) area_side_right_pane

0xd02d,	// (0x0000f065) aid_size_side_button_ParamLimits

0xd02d,	// (0x0000f065) aid_size_side_button

0xd046,	// (0x0000f07e) grid_sctrl_middle_pane_ParamLimits

0xd046,	// (0x0000f07e) grid_sctrl_middle_pane

0x63ea,	// (0x00008422) sctrl_sk_bottom_pane

0x63fb,	// (0x00008433) sctrl_sk_top_pane

0x640d,	// (0x00008445) aid_touch_sctrl_top

0xe9b7,	// (0x000109ef) bg_sctrl_sk_pane_ParamLimits

0xe9b7,	// (0x000109ef) bg_sctrl_sk_pane

0x641a,	// (0x00008452) sctrl_sk_top_pane_g1

0x6427,	// (0x0000845f) sctrl_sk_top_pane_t1

0x640d,	// (0x00008445) aid_touch_sctrl_bottom

0xe9b7,	// (0x000109ef) bg_sctrl_sk_pane_cp_ParamLimits

0xe9b7,	// (0x000109ef) bg_sctrl_sk_pane_cp

0x6442,	// (0x0000847a) sctrl_sk_bottom_pane_g1

0x6427,	// (0x0000845f) sctrl_sk_bottom_pane_t1

0xd060,	// (0x0000f098) cell_sctrl_middle_pane_ParamLimits

0xd060,	// (0x0000f098) cell_sctrl_middle_pane

0xd071,	// (0x0000f0a9) aid_touch_sctrl_middle_ParamLimits

0xd071,	// (0x0000f0a9) aid_touch_sctrl_middle

0xd07e,	// (0x0000f0b6) bg_sctrl_middle_pane_ParamLimits

0xd07e,	// (0x0000f0b6) bg_sctrl_middle_pane

0x6507,	// (0x0000853f) cell_sctrl_middle_pane_g1_ParamLimits

0x6507,	// (0x0000853f) cell_sctrl_middle_pane_g1

0xd08c,	// (0x0000f0c4) cell_sctrl_middle_pane_g2_ParamLimits

0xd08c,	// (0x0000f0c4) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x00011d25) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x00011d25) cell_sctrl_middle_pane_g

0x15db,	// (0x00003613) bg_sctrl_middle_pane_g1

0x15e3,	// (0x0000361b) bg_sctrl_middle_pane_g2

0x15eb,	// (0x00003623) bg_sctrl_middle_pane_g3

0x15f3,	// (0x0000362b) bg_sctrl_middle_pane_g4

0x15fb,	// (0x00003633) bg_sctrl_middle_pane_g5

0x1603,	// (0x0000363b) bg_sctrl_middle_pane_g6

0x160b,	// (0x00003643) bg_sctrl_middle_pane_g7

0x1613,	// (0x0000364b) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x00011d2a) bg_sctrl_middle_pane_g

0x161b,	// (0x00003653) bg_sctrl_middle_pane_g8_copy1

0x15db,	// (0x00003613) bg_sctrl_sk_pane_g1

0x15e3,	// (0x0000361b) bg_sctrl_sk_pane_g2

0x15eb,	// (0x00003623) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x0001187e) bg_sctrl_sk_pane_g

0xeb81,	// (0x00010bb9) aid_size_touch_scroll_bar

0x15f3,	// (0x0000362b) bg_sctrl_sk_pane_g4

0x15fb,	// (0x00003633) bg_sctrl_sk_pane_g5

0x1603,	// (0x0000363b) bg_sctrl_sk_pane_g6

0x160b,	// (0x00003643) bg_sctrl_sk_pane_g7

0x1613,	// (0x0000364b) bg_sctrl_sk_pane_g8

0x161b,	// (0x00003653) bg_sctrl_sk_pane_g9

0x0b31,	// (0x00002b69) popup_fep_china_hwr2_fs_candidate_window

0xab0e,	// (0x0000cb46) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xab0e,	// (0x0000cb46) popup_fep_china_hwr2_fs_control_window

0x49f7,	// (0x00006a2f) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x00011d20) sctrl_sk_top_pane_g

0xd098,	// (0x0000f0d0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd098,	// (0x0000f0d0) aid_fep_china_hwr2_fs_cell

0xd0ac,	// (0x0000f0e4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd0ac,	// (0x0000f0e4) bg_popup_fep_shadow_pane_cp4

0xd0c3,	// (0x0000f0fb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd0c3,	// (0x0000f0fb) bg_popup_fep_shadow_pane_cp5

0xd0d5,	// (0x0000f10d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd0d5,	// (0x0000f10d) popup_fep_china_hwr2_fs_control_bar_grid

0xf2c5,	// (0x000112fd) popup_fep_china_hwr2_fs_control_funtion_grid

0x64db,	// (0x00008513) aid_fep_china_hwr2_fs_candi_cell

0xe674,	// (0x000106ac) bg_popup_fep_shadow_pane_cp6

0x64e5,	// (0x0000851d) popup_fep_china_hwr2_fs_candidate_grid

0xd0e9,	// (0x0000f121) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd0e9,	// (0x0000f121) cell_fep_china_hwr2_fs_funtion_grid

0x4573,	// (0x000065ab) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6507,	// (0x0000853f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6507,	// (0x0000853f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6515,	// (0x0000854d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6515,	// (0x0000854d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x00011d3b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x00011d3b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd101,	// (0x0000f139) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd101,	// (0x0000f139) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd116,	// (0x0000f14e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd116,	// (0x0000f14e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x00011d40) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x00011d40) cell_fep_china_hwr2_fs_funtion_grid_t

0x655c,	// (0x00008594) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6564,	// (0x0000859c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x656c,	// (0x000085a4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x00011d45) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6574,	// (0x000085ac) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6574,	// (0x000085ac) cell_fep_china_hwr2_fs_candidate_grid

0x658d,	// (0x000085c5) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6595,	// (0x000085cd) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4573,	// (0x000065ab) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4573,	// (0x000065ab) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb34,	// (0x00011b6c) cell_fep_china_hwr2_fs_candidate_grid_g

0x659d,	// (0x000085d5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1130,	// (0x00003168) clock_nsta_pane_cp_24_ParamLimits

0x1130,	// (0x00003168) clock_nsta_pane_cp_24

0x11ae,	// (0x000031e6) indicator_nsta_pane_cp_24_ParamLimits

0x11ae,	// (0x000031e6) indicator_nsta_pane_cp_24

0x2603,	// (0x0000463b) heading_pane_g1

0x0001,

0xf8ab,	// (0x000118e3) heading_pane_g

0x31f3,	// (0x0000522b) grid_sct_catagory_button_pane

0x3223,	// (0x0000525b) scroll_pane_cp5_ParamLimits

0x4119,	// (0x00006151) button_value_adjust_pane_cp5_ParamLimits

0x4119,	// (0x00006151) button_value_adjust_pane_cp5

0x4213,	// (0x0000624b) form2_midp_time_pane_ParamLimits

0x65ab,	// (0x000085e3) cell_sct_catagory_button_pane_ParamLimits

0x65ab,	// (0x000085e3) cell_sct_catagory_button_pane

0x4538,	// (0x00006570) bg_button_pane_cp01_ParamLimits

0x4538,	// (0x00006570) bg_button_pane_cp01

0x4573,	// (0x000065ab) cell_sct_catagory_button_pane_g1

0xb0e7,	// (0x0000d11f) popup_tb_extension_window

0xd132,	// (0x0000f16a) aid_size_cell_ext_ParamLimits

0xd132,	// (0x0000f16a) aid_size_cell_ext

0xeb33,	// (0x00010b6b) bg_tb_trans_pane_cp1_ParamLimits

0xeb33,	// (0x00010b6b) bg_tb_trans_pane_cp1

0xd158,	// (0x0000f190) grid_tb_ext_pane_ParamLimits

0xd158,	// (0x0000f190) grid_tb_ext_pane

0xd197,	// (0x0000f1cf) cell_tb_ext_pane_ParamLimits

0xd197,	// (0x0000f1cf) cell_tb_ext_pane

0xd1bf,	// (0x0000f1f7) cell_tb_ext_pane_g1_ParamLimits

0xd1bf,	// (0x0000f1f7) cell_tb_ext_pane_g1

0x6641,	// (0x00008679) cell_tb_ext_pane_t1

0xe9b7,	// (0x000109ef) list_highlight_pane_cp11_ParamLimits

0xe9b7,	// (0x000109ef) list_highlight_pane_cp11

0x9627,	// (0x0000b65f) popup_uni_indicator_window_ParamLimits

0x9627,	// (0x0000b65f) popup_uni_indicator_window

0xecb5,	// (0x00010ced) bg_popup_sub_pane_cp14

0xd1dc,	// (0x0000f214) list_uniindi_pane

0xd1e8,	// (0x0000f220) uniindi_top_pane

0xe9b7,	// (0x000109ef) bg_uniindi_top_pane

0xd207,	// (0x0000f23f) uniindi_top_pane_g1

0xd21d,	// (0x0000f255) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x00011d4c) uniindi_top_pane_g

0xd23a,	// (0x0000f272) uniindi_top_pane_t1

0x66f2,	// (0x0000872a) list_single_uniindi_pane_ParamLimits

0x66f2,	// (0x0000872a) list_single_uniindi_pane

0x4573,	// (0x000065ab) bg_uniindi_top_pane_g1

0x6704,	// (0x0000873c) list_single_uniindi_pane_g1

0x6717,	// (0x0000874f) list_single_uniindi_pane_t1

0xe674,	// (0x000106ac) control_bg_pane

0x673c,	// (0x00008774) bg_sctrl_sk_pane_cp1

0x6745,	// (0x0000877d) bg_sctrl_sk_pane_cp2

0x674e,	// (0x00008786) control_bg_pane_g1

0x6757,	// (0x0000878f) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x00011d55) control_bg_pane_g

0x3f27,	// (0x00005f5f) cell_indicator_nsta_pane_g1_ParamLimits

0xc2a1,	// (0x0000e2d9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa98,	// (0x00011ad0) cell_indicator_nsta_pane_g_ParamLimits

0x429b,	// (0x000062d3) form2_midp_time_pane_t1_ParamLimits

0x45cf,	// (0x00006607) main_idle_act4_pane_ParamLimits

0x45cf,	// (0x00006607) main_idle_act4_pane

0xb0e7,	// (0x0000d11f) popup_tb_extension_window_ParamLimits

0xd17d,	// (0x0000f1b5) tb_ext_find_pane_ParamLimits

0xd17d,	// (0x0000f1b5) tb_ext_find_pane

0x6760,	// (0x00008798) ai_gene_pane_1_cp1

0x0655,	// (0x0000268d) ai_gene_pane_2_cp1

0xd264,	// (0x0000f29c) list_single_idle_plugin_calendar_pane

0x6771,	// (0x000087a9) list_single_idle_plugin_notification_pane

0x677a,	// (0x000087b2) list_single_idle_plugin_player_pane

0xd26d,	// (0x0000f2a5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd26d,	// (0x0000f2a5) list_single_idle_plugin_shortcut_pane

0xd295,	// (0x0000f2cd) main_idle_act4_pane_t1

0xd2ac,	// (0x0000f2e4) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x00011d5a) main_idle_act4_pane_t

0xd2c3,	// (0x0000f2fb) middle_sk_idle_act4_pane_ParamLimits

0xd2c3,	// (0x0000f2fb) middle_sk_idle_act4_pane

0xd2df,	// (0x0000f317) popup_clock_digital_analogue_window_cp2

0xd30b,	// (0x0000f343) shortcut_wheel_idle_act4_pane_ParamLimits

0xd30b,	// (0x0000f343) shortcut_wheel_idle_act4_pane

0x4573,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g1

0x4573,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g2

0x4573,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g3

0x4573,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g4

0x4573,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g5

0x680d,	// (0x00008845) shortcut_wheel_idle_act4_pane_g6

0x6815,	// (0x0000884d) shortcut_wheel_idle_act4_pane_g7

0x681d,	// (0x00008855) shortcut_wheel_idle_act4_pane_g8

0x6825,	// (0x0000885d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x00011d5f) shortcut_wheel_idle_act4_pane_g

0x4684,	// (0x000066bc) middle_sk_idle_act4_pane_g1_ParamLimits

0x4684,	// (0x000066bc) middle_sk_idle_act4_pane_g1

0xd388,	// (0x0000f3c0) middle_sk_idle_act4_pane_g2_ParamLimits

0xd388,	// (0x0000f3c0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x00011d82) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x00011d82) middle_sk_idle_act4_pane_g

0xd3a0,	// (0x0000f3d8) middle_sk_idle_act4_pane_t1_ParamLimits

0xd3a0,	// (0x0000f3d8) middle_sk_idle_act4_pane_t1

0xd3cf,	// (0x0000f407) grid_ai_shortcut_pane_ParamLimits

0xd3cf,	// (0x0000f407) grid_ai_shortcut_pane

0xd3ec,	// (0x0000f424) list_highlight_pane_cp16_ParamLimits

0xd3ec,	// (0x0000f424) list_highlight_pane_cp16

0xd3f9,	// (0x0000f431) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd3f9,	// (0x0000f431) list_single_idle_plugin_shortcut_pane_g1

0xd405,	// (0x0000f43d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd405,	// (0x0000f43d) list_single_idle_plugin_shortcut_pane_g2

0xd421,	// (0x0000f459) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd421,	// (0x0000f459) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x00011d87) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x00011d87) list_single_idle_plugin_shortcut_pane_g

0xd436,	// (0x0000f46e) cell_ai_shortcut_pane_ParamLimits

0xd436,	// (0x0000f46e) cell_ai_shortcut_pane

0xd44c,	// (0x0000f484) cell_ai_shortcut_pane_g1_ParamLimits

0xd44c,	// (0x0000f484) cell_ai_shortcut_pane_g1

0x6760,	// (0x00008798) ai_gene_pane_1_cp2

0x6955,	// (0x0000898d) ai_gene_pane_2_cp2

0x695d,	// (0x00008995) list_highlight_pane_cp15

0xd46e,	// (0x0000f4a6) list_single_idle_plugin_calendar_pane_g1

0x695d,	// (0x00008995) list_highlight_pane_cp17

0x696e,	// (0x000089a6) list_single_idle_plugin_calendar_pane_g1_copy1

0x6976,	// (0x000089ae) list_single_idle_plugin_player_pane_g1

0x3504,	// (0x0000553c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x00011d8e) list_single_idle_plugin_player_pane_g

0x697e,	// (0x000089b6) list_single_idle_plugin_player_pane_t1

0x698c,	// (0x000089c4) list_single_idle_plugin_player_pane_t2

0x699a,	// (0x000089d2) list_single_idle_plugin_player_pane_t3

0x69a8,	// (0x000089e0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x00011d93) list_single_idle_plugin_player_pane_t

0x69b6,	// (0x000089ee) wait_bar_pane_cp15

0x69be,	// (0x000089f6) grid_ai_notification_pane

0x3504,	// (0x0000553c) list_single_idle_plugin_notification_pane_g1

0xd476,	// (0x0000f4ae) cell_ai_notification_pane_ParamLimits

0xd476,	// (0x0000f4ae) cell_ai_notification_pane

0x69d4,	// (0x00008a0c) cell_ai_notification_pane_g1

0x69dc,	// (0x00008a14) cell_ai_notification_pane_t1

0xd483,	// (0x0000f4bb) tb_ext_find_button_pane

0xd48b,	// (0x0000f4c3) tb_ext_find_pane_g1

0xd493,	// (0x0000f4cb) tb_ext_find_pane_t1

0xf311,	// (0x00011349) tb_ext_find_button_pane_g1

0xd4a1,	// (0x0000f4d9) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x00011d9c) tb_ext_find_button_pane_g

0xd295,	// (0x0000f2cd) main_idle_act4_pane_t1_ParamLimits

0xd2ac,	// (0x0000f2e4) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x00011d5a) main_idle_act4_pane_t_ParamLimits

0xd2df,	// (0x0000f317) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2f7,	// (0x0000f32f) sat_plugin_idle_act4_pane_ParamLimits

0xd2f7,	// (0x0000f32f) sat_plugin_idle_act4_pane

0xd4aa,	// (0x0000f4e2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd4aa,	// (0x0000f4e2) sat_plugin_idle_act4_pane_t1

0xd4c2,	// (0x0000f4fa) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4c2,	// (0x0000f4fa) sat_plugin_idle_act4_pane_t2

0xd4da,	// (0x0000f512) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4da,	// (0x0000f512) sat_plugin_idle_act4_pane_t3

0xd4f2,	// (0x0000f52a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4f2,	// (0x0000f52a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x00011da1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x00011da1) sat_plugin_idle_act4_pane_t

0x95a2,	// (0x0000b5da) popup_battery_window_ParamLimits

0x95a2,	// (0x0000b5da) popup_battery_window

0xe9b7,	// (0x000109ef) bg_popup_sub_pane_cp25_ParamLimits

0xe9b7,	// (0x000109ef) bg_popup_sub_pane_cp25

0x6a5d,	// (0x00008a95) popup_battery_window_g1_ParamLimits

0x6a5d,	// (0x00008a95) popup_battery_window_g1

0x6a69,	// (0x00008aa1) popup_battery_window_t1_ParamLimits

0x6a69,	// (0x00008aa1) popup_battery_window_t1

0x6a7b,	// (0x00008ab3) popup_battery_window_t2_ParamLimits

0x6a7b,	// (0x00008ab3) popup_battery_window_t2

0x0001,

0xfd72,	// (0x00011daa) popup_battery_window_t_ParamLimits

0xfd72,	// (0x00011daa) popup_battery_window_t

0xa748,	// (0x0000c780) midp_canvas_pane_ParamLimits

0xa7ba,	// (0x0000c7f2) midp_keypad_pane_ParamLimits

0xa7ba,	// (0x0000c7f2) midp_keypad_pane

0x0a51,	// (0x00002a89) main_midp_pane_ParamLimits

0xc2ae,	// (0x0000e2e6) signal_pane_g2_cp_ParamLimits

0xd50a,	// (0x0000f542) aid_size_cell_midp_keypad_ParamLimits

0xd50a,	// (0x0000f542) aid_size_cell_midp_keypad

0xd528,	// (0x0000f560) midp_keyp_game_grid_pane_ParamLimits

0xd528,	// (0x0000f560) midp_keyp_game_grid_pane

0xd54f,	// (0x0000f587) midp_keyp_rocker_pane_ParamLimits

0xd54f,	// (0x0000f587) midp_keyp_rocker_pane

0xd5a0,	// (0x0000f5d8) midp_keyp_sk_left_pane_ParamLimits

0xd5a0,	// (0x0000f5d8) midp_keyp_sk_left_pane

0xd5f4,	// (0x0000f62c) midp_keyp_sk_right_pane_ParamLimits

0xd5f4,	// (0x0000f62c) midp_keyp_sk_right_pane

0xe674,	// (0x000106ac) bg_button_pane_cp03

0xd648,	// (0x0000f680) midp_keyp_sk_left_pane_g1

0xe674,	// (0x000106ac) bg_button_pane_cp04

0xd648,	// (0x0000f680) midp_keyp_sk_right_pane_g1

0x4573,	// (0x000065ab) midp_keyp_rocker_pane_g1

0xd651,	// (0x0000f689) keyp_game_cell_pane_ParamLimits

0xd651,	// (0x0000f689) keyp_game_cell_pane

0xe674,	// (0x000106ac) bg_button_pane_cp02

0xd675,	// (0x0000f6ad) keyp_game_cell_pane_g1

0x95c2,	// (0x0000b5fa) popup_fep_vkb2_window_ParamLimits

0x95c2,	// (0x0000b5fa) popup_fep_vkb2_window

0xd67e,	// (0x0000f6b6) aid_size_cell_vkb2_ParamLimits

0xd67e,	// (0x0000f6b6) aid_size_cell_vkb2

0xd6bc,	// (0x0000f6f4) popup_fep_vkb2_window_g1_ParamLimits

0xd6bc,	// (0x0000f6f4) popup_fep_vkb2_window_g1

0xd70c,	// (0x0000f744) vkb2_area_bottom_pane_ParamLimits

0xd70c,	// (0x0000f744) vkb2_area_bottom_pane

0xd760,	// (0x0000f798) vkb2_area_keypad_pane_ParamLimits

0xd760,	// (0x0000f798) vkb2_area_keypad_pane

0xd7a8,	// (0x0000f7e0) vkb2_area_top_pane_ParamLimits

0xd7a8,	// (0x0000f7e0) vkb2_area_top_pane

0xd82e,	// (0x0000f866) vkb2_top_entry_pane_ParamLimits

0xd82e,	// (0x0000f866) vkb2_top_entry_pane

0xd85b,	// (0x0000f893) vkb2_top_grid_left_pane_ParamLimits

0xd85b,	// (0x0000f893) vkb2_top_grid_left_pane

0xd87b,	// (0x0000f8b3) vkb2_top_grid_right_pane_ParamLimits

0xd87b,	// (0x0000f8b3) vkb2_top_grid_right_pane

0x6dfc,	// (0x00008e34) vkb2_cell_keypad_pane_ParamLimits

0x6dfc,	// (0x00008e34) vkb2_cell_keypad_pane

0xd8c1,	// (0x0000f8f9) vkb2_area_bottom_grid_pane_ParamLimits

0xd8c1,	// (0x0000f8f9) vkb2_area_bottom_grid_pane

0xd8eb,	// (0x0000f923) vkb2_area_bottom_pane_g1_ParamLimits

0xd8eb,	// (0x0000f923) vkb2_area_bottom_pane_g1

0xd911,	// (0x0000f949) vkb2_area_bottom_pane_g2_ParamLimits

0xd911,	// (0x0000f949) vkb2_area_bottom_pane_g2

0xd942,	// (0x0000f97a) vkb2_area_bottom_pane_g3_ParamLimits

0xd942,	// (0x0000f97a) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x00011daf) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x00011daf) vkb2_area_bottom_pane_g

0x6fa6,	// (0x00008fde) vkb2_top_cell_left_pane_ParamLimits

0x6fa6,	// (0x00008fde) vkb2_top_cell_left_pane

0xd9ac,	// (0x0000f9e4) vkb2_top_entry_pane_g1_ParamLimits

0xd9ac,	// (0x0000f9e4) vkb2_top_entry_pane_g1

0xd9ba,	// (0x0000f9f2) vkb2_top_entry_pane_t1_ParamLimits

0xd9ba,	// (0x0000f9f2) vkb2_top_entry_pane_t1

0x700e,	// (0x00009046) vkb2_top_entry_pane_t2_ParamLimits

0x700e,	// (0x00009046) vkb2_top_entry_pane_t2

0x7040,	// (0x00009078) vkb2_top_entry_pane_t3_ParamLimits

0x7040,	// (0x00009078) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x00011db6) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x00011db6) vkb2_top_entry_pane_t

0xd9f3,	// (0x0000fa2b) vkb2_top_grid_right_pane_g1_ParamLimits

0xd9f3,	// (0x0000fa2b) vkb2_top_grid_right_pane_g1

0x70a7,	// (0x000090df) vkb2_top_grid_right_pane_g2_ParamLimits

0x70a7,	// (0x000090df) vkb2_top_grid_right_pane_g2

0x70bf,	// (0x000090f7) vkb2_top_grid_right_pane_g3_ParamLimits

0x70bf,	// (0x000090f7) vkb2_top_grid_right_pane_g3

0xda09,	// (0x0000fa41) vkb2_top_grid_right_pane_g4_ParamLimits

0xda09,	// (0x0000fa41) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x00011dbd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x00011dbd) vkb2_top_grid_right_pane_g

0x70ed,	// (0x00009125) vkb2_top_cell_left_pane_g1

0x7104,	// (0x0000913c) vkb2_cell_keypad_pane_g1_ParamLimits

0x7104,	// (0x0000913c) vkb2_cell_keypad_pane_g1

0x7112,	// (0x0000914a) vkb2_cell_keypad_pane_t1_ParamLimits

0x7112,	// (0x0000914a) vkb2_cell_keypad_pane_t1

0x7129,	// (0x00009161) vkb2_cell_bottom_grid_pane_ParamLimits

0x7129,	// (0x00009161) vkb2_cell_bottom_grid_pane

0x7162,	// (0x0000919a) vkb2_cell_bottom_grid_pane_g1

0xd32c,	// (0x0000f364) aid_call2_pane_cp02

0xd334,	// (0x0000f36c) aid_call_pane_cp02

0xd33c,	// (0x0000f374) clock_digital_number_pane_cp10

0xd344,	// (0x0000f37c) clock_digital_number_pane_cp11

0xd34c,	// (0x0000f384) clock_digital_number_pane_cp12

0xd354,	// (0x0000f38c) clock_digital_number_pane_cp13

0xd35c,	// (0x0000f394) clock_digital_separator_pane_cp10

0xf311,	// (0x00011349) popup_clock_digital_analogue_window_cp2_g1

0xf311,	// (0x00011349) popup_clock_digital_analogue_window_cp2_g2

0xd364,	// (0x0000f39c) popup_clock_digital_analogue_window_cp2_g3

0xf311,	// (0x00011349) popup_clock_digital_analogue_window_cp2_g4

0xd364,	// (0x0000f39c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x00011d72) popup_clock_digital_analogue_window_cp2_g

0xd36c,	// (0x0000f3a4) popup_clock_digital_analogue_window_cp2_t1

0xd37a,	// (0x0000f3b2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x00011d7d) popup_clock_digital_analogue_window_cp2_t

0x4573,	// (0x000065ab) clock_digital_number_pane_cp10_g1

0x4573,	// (0x000065ab) clock_digital_number_pane_cp10_g2

0x0001,

0xfb34,	// (0x00011b6c) clock_digital_number_pane_cp10_g

0x4573,	// (0x000065ab) clock_digital_separator_pane_cp10_g1

0x4573,	// (0x000065ab) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb34,	// (0x00011b6c) clock_digital_separator_pane_cp10_g

0xd229,	// (0x0000f261) uniindi_top_pane_g3

0x66bb,	// (0x000086f3) uniindi_top_pane_g4

0x6e87,	// (0x00008ebf) vkb2_row_keypad_pane_ParamLimits

0x6e87,	// (0x00008ebf) vkb2_row_keypad_pane

0x717e,	// (0x000091b6) vkb2_cell_t_keypad_pane_ParamLimits

0x717e,	// (0x000091b6) vkb2_cell_t_keypad_pane

0x718e,	// (0x000091c6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x718e,	// (0x000091c6) vkb2_cell_t_keypad_pane_cp08

0x71a1,	// (0x000091d9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71a1,	// (0x000091d9) vkb2_cell_t_keypad_pane_cp09

0x71b5,	// (0x000091ed) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x71b5,	// (0x000091ed) vkb2_cell_t_keypad_pane_cp01

0x71c6,	// (0x000091fe) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x71c6,	// (0x000091fe) vkb2_cell_t_keypad_pane_cp02

0x71d7,	// (0x0000920f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x71d7,	// (0x0000920f) vkb2_cell_t_keypad_pane_cp03

0x71e8,	// (0x00009220) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x71e8,	// (0x00009220) vkb2_cell_t_keypad_pane_cp04

0x71f9,	// (0x00009231) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x71f9,	// (0x00009231) vkb2_cell_t_keypad_pane_cp05

0x720a,	// (0x00009242) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x720a,	// (0x00009242) vkb2_cell_t_keypad_pane_cp06

0x721b,	// (0x00009253) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x721b,	// (0x00009253) vkb2_cell_t_keypad_pane_cp07

0x722c,	// (0x00009264) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x722c,	// (0x00009264) vkb2_cell_t_keypad_pane_cp10

0x49f7,	// (0x00006a2f) vkb2_cell_t_keypad_pane_g1

0x7241,	// (0x00009279) vkb2_cell_t_keypad_pane_t1

0xe674,	// (0x000106ac) popup_grid_graphic2_window

0xda1f,	// (0x0000fa57) aid_size_cell_graphic2_ParamLimits

0xda1f,	// (0x0000fa57) aid_size_cell_graphic2

0xda5d,	// (0x0000fa95) bg_popup_window_pane_cp21_ParamLimits

0xda5d,	// (0x0000fa95) bg_popup_window_pane_cp21

0xda6b,	// (0x0000faa3) graphic2_pages_pane_ParamLimits

0xda6b,	// (0x0000faa3) graphic2_pages_pane

0xdac1,	// (0x0000faf9) grid_graphic2_control_pane_ParamLimits

0xdac1,	// (0x0000faf9) grid_graphic2_control_pane

0xdb09,	// (0x0000fb41) grid_graphic2_pane_ParamLimits

0xdb09,	// (0x0000fb41) grid_graphic2_pane

0xdb90,	// (0x0000fbc8) cell_graphic2_pane

0xe674,	// (0x000106ac) main_comp_mode_pane

0x5de9,	// (0x00007e21) list_ai3_gene_pane_ParamLimits

0xcf75,	// (0x0000efad) bg_popup_window_pane_cp19_ParamLimits

0x6224,	// (0x0000825c) bg_touch_area_indi_pane_ParamLimits

0x6224,	// (0x0000825c) bg_touch_area_indi_pane

0x623a,	// (0x00008272) bg_touch_area_indi_pane_cp01_ParamLimits

0x623a,	// (0x00008272) bg_touch_area_indi_pane_cp01

0x6250,	// (0x00008288) bg_touch_area_indi_pane_cp02_ParamLimits

0x6250,	// (0x00008288) bg_touch_area_indi_pane_cp02

0x6266,	// (0x0000829e) bg_touch_area_indi_pane_cp03_ParamLimits

0x6266,	// (0x0000829e) bg_touch_area_indi_pane_cp03

0x6280,	// (0x000082b8) popup_slider_window_g1_ParamLimits

0x629c,	// (0x000082d4) popup_slider_window_g2_ParamLimits

0x62b8,	// (0x000082f0) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x00011d07) popup_slider_window_g_ParamLimits

0x631e,	// (0x00008356) popup_slider_window_t1_ParamLimits

0x6392,	// (0x000083ca) small_volume_slider_vertical_pane_ParamLimits

0xdb90,	// (0x0000fbc8) cell_graphic2_pane_ParamLimits

0xdbeb,	// (0x0000fc23) bg_button_pane_cp10_ParamLimits

0xdbeb,	// (0x0000fc23) bg_button_pane_cp10

0xdbfe,	// (0x0000fc36) bg_button_pane_cp11_ParamLimits

0xdbfe,	// (0x0000fc36) bg_button_pane_cp11

0xdc11,	// (0x0000fc49) graphic2_pages_pane_g1_ParamLimits

0xdc11,	// (0x0000fc49) graphic2_pages_pane_g1

0xdc2c,	// (0x0000fc64) graphic2_pages_pane_g2_ParamLimits

0xdc2c,	// (0x0000fc64) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x00011dcb) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x00011dcb) graphic2_pages_pane_g

0xdc44,	// (0x0000fc7c) graphic2_pages_pane_t1_ParamLimits

0xdc44,	// (0x0000fc7c) graphic2_pages_pane_t1

0xdc5c,	// (0x0000fc94) cell_graphic2_control_pane_ParamLimits

0xdc5c,	// (0x0000fc94) cell_graphic2_control_pane

0xdc8e,	// (0x0000fcc6) cell_graphic2_pane_g1_ParamLimits

0xdc8e,	// (0x0000fcc6) cell_graphic2_pane_g1

0x481f,	// (0x00006857) cell_graphic2_pane_g2_ParamLimits

0x481f,	// (0x00006857) cell_graphic2_pane_g2

0xdc9b,	// (0x0000fcd3) cell_graphic2_pane_g3_ParamLimits

0xdc9b,	// (0x0000fcd3) cell_graphic2_pane_g3

0x482c,	// (0x00006864) cell_graphic2_pane_g4_ParamLimits

0x482c,	// (0x00006864) cell_graphic2_pane_g4

0xdca8,	// (0x0000fce0) cell_graphic2_pane_g5_ParamLimits

0xdca8,	// (0x0000fce0) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x00011dd0) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x00011dd0) cell_graphic2_pane_g

0xdcc8,	// (0x0000fd00) cell_graphic2_pane_t1_ParamLimits

0xdcc8,	// (0x0000fd00) cell_graphic2_pane_t1

0x25f7,	// (0x0000462f) grid_highlight_pane_cp11_ParamLimits

0x25f7,	// (0x0000462f) grid_highlight_pane_cp11

0xe9b7,	// (0x000109ef) bg_button_pane_cp05

0xdd14,	// (0x0000fd4c) cell_graphic2_control_pane_g1

0x4573,	// (0x000065ab) bg_touch_area_indi_pane_g1

0x751d,	// (0x00009555) aid_cmod_rocker_key_size

0x7527,	// (0x0000955f) aid_cmode_itu_key_size

0x7531,	// (0x00009569) main_cmode_video_pane

0x753b,	// (0x00009573) main_comp_mode_itu_pane

0x7547,	// (0x0000957f) main_comp_mode_rocker_pane

0x7553,	// (0x0000958b) cell_cmode_rocker_pane_ParamLimits

0x7553,	// (0x0000958b) cell_cmode_rocker_pane

0x7565,	// (0x0000959d) cell_cmode_itu_pane_ParamLimits

0x7565,	// (0x0000959d) cell_cmode_itu_pane

0xecb5,	// (0x00010ced) bg_button_pane_cp06_ParamLimits

0xecb5,	// (0x00010ced) bg_button_pane_cp06

0x49f7,	// (0x00006a2f) cell_cmode_rocker_pane_g1_ParamLimits

0x49f7,	// (0x00006a2f) cell_cmode_rocker_pane_g1

0x6507,	// (0x0000853f) cell_cmode_rocker_pane_g2_ParamLimits

0x6507,	// (0x0000853f) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x00011de0) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x00011de0) cell_cmode_rocker_pane_g

0xe674,	// (0x000106ac) bg_button_pane_cp07

0x757a,	// (0x000095b2) cell_cmode_itu_pane_g1

0x7583,	// (0x000095bb) cell_cmode_itu_pane_t1

0x7591,	// (0x000095c9) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x00011de5) cell_cmode_itu_pane_t

0x672c,	// (0x00008764) aid_touch_ctrl_left

0x6734,	// (0x0000876c) aid_touch_ctrl_right

0xe674,	// (0x000106ac) compa_mode_pane

0xdd3a,	// (0x0000fd72) aid_cmod_rocker_key_size_cp

0xdd44,	// (0x0000fd7c) aid_cmode_itu_key_size_cp

0x75b3,	// (0x000095eb) compa_mode_pane_g1

0x75bb,	// (0x000095f3) compa_mode_pane_g2

0x75c3,	// (0x000095fb) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x00011dea) compa_mode_pane_g

0xdd4e,	// (0x0000fd86) main_comp_mode_itu_pane_cp

0xdd56,	// (0x0000fd8e) main_comp_mode_rocker_pane_cp

0xdd5e,	// (0x0000fd96) cell_cmode_itu_pane_cp_ParamLimits

0xdd5e,	// (0x0000fd96) cell_cmode_itu_pane_cp

0xdd73,	// (0x0000fdab) cell_cmode_rocker_pane_cp_ParamLimits

0xdd73,	// (0x0000fdab) cell_cmode_rocker_pane_cp

0xecb5,	// (0x00010ced) bg_button_pane_cp06_cp_ParamLimits

0xecb5,	// (0x00010ced) bg_button_pane_cp06_cp

0x49f7,	// (0x00006a2f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x49f7,	// (0x00006a2f) cell_cmode_rocker_pane_g1_cp

0x4573,	// (0x000065ab) cell_cmode_rocker_pane_g2_cp

0xe674,	// (0x000106ac) bg_button_pane_cp07_cp

0xdd85,	// (0x0000fdbd) cell_cmode_itu_pane_g1_cp

0xdd8e,	// (0x0000fdc6) cell_cmode_itu_pane_t1_cp

0xdd8e,	// (0x0000fdc6) cell_cmode_itu_pane_t2_cp

0xbf9d,	// (0x0000dfd5) settings_code_pane_cp2

0xe873,	// (0x000108ab) bg_popup_window_pane_cp3_ParamLimits

0xead0,	// (0x00010b08) heading_pane_cp3_ParamLimits

0xeadc,	// (0x00010b14) listscroll_popup_graphic_pane_ParamLimits

0x45dd,	// (0x00006615) fep_hwr_aid_pane_ParamLimits

0x640d,	// (0x00008445) aid_touch_sctrl_top_ParamLimits

0x641a,	// (0x00008452) sctrl_sk_top_pane_g1_ParamLimits

0x49f7,	// (0x00006a2f) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x00011d20) sctrl_sk_top_pane_g_ParamLimits

0x6427,	// (0x0000845f) sctrl_sk_top_pane_t1_ParamLimits

0x640d,	// (0x00008445) aid_touch_sctrl_bottom_ParamLimits

0x6427,	// (0x0000845f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd1f5,	// (0x0000f22d) aid_area_touch_clock

0xd7f0,	// (0x0000f828) aid_vkb2_area_top_pane_cell_ParamLimits

0xd7f0,	// (0x0000f828) aid_vkb2_area_top_pane_cell

0xd89b,	// (0x0000f8d3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd89b,	// (0x0000f8d3) aid_vkb2_area_bottom_pane_cell

0x6fc6,	// (0x00008ffe) popup_char_count_window

0x7619,	// (0x00009651) popup_char_count_window_g1

0x7622,	// (0x0000965a) popup_char_count_window_g2

0x762b,	// (0x00009663) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x00011df1) popup_char_count_window_g

0x7634,	// (0x0000966c) popup_char_count_window_t1

0x6c24,	// (0x00008c5c) popup_fep_char_preview_window_ParamLimits

0x6c24,	// (0x00008c5c) popup_fep_char_preview_window

0xd810,	// (0x0000f848) vkb2_top_candi_pane_ParamLimits

0xd810,	// (0x0000f848) vkb2_top_candi_pane

0xdd9c,	// (0x0000fdd4) cell_vkb2_top_candi_pane_ParamLimits

0xdd9c,	// (0x0000fdd4) cell_vkb2_top_candi_pane

0x1e42,	// (0x00003e7a) bg_popup_fep_char_preview_window_ParamLimits

0x1e42,	// (0x00003e7a) bg_popup_fep_char_preview_window

0x768f,	// (0x000096c7) popup_fep_char_preview_window_t1_ParamLimits

0x768f,	// (0x000096c7) popup_fep_char_preview_window_t1

0x76c9,	// (0x00009701) bg_popup_fep_char_preview_window_g1

0x76d1,	// (0x00009709) bg_popup_fep_char_preview_window_g2

0x76d9,	// (0x00009711) bg_popup_fep_char_preview_window_g3

0x76e1,	// (0x00009719) bg_popup_fep_char_preview_window_g4

0x76e9,	// (0x00009721) bg_popup_fep_char_preview_window_g5

0x76f1,	// (0x00009729) bg_popup_fep_char_preview_window_g6

0x76f9,	// (0x00009731) bg_popup_fep_char_preview_window_g7

0x7701,	// (0x00009739) bg_popup_fep_char_preview_window_g8

0x7709,	// (0x00009741) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc0,	// (0x00011df8) bg_popup_fep_char_preview_window_g

0x49f7,	// (0x00006a2f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49f7,	// (0x00006a2f) cell_vkb2_top_candi_pane_g1

0x4d62,	// (0x00006d9a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4d62,	// (0x00006d9a) cell_vkb2_top_candi_pane_g2

0x4d83,	// (0x00006dbb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d83,	// (0x00006dbb) cell_vkb2_top_candi_pane_g3

0x7711,	// (0x00009749) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7711,	// (0x00009749) cell_vkb2_top_candi_pane_g4

0x7732,	// (0x0000976a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7732,	// (0x0000976a) cell_vkb2_top_candi_pane_g5

0x6507,	// (0x0000853f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6507,	// (0x0000853f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd3,	// (0x00011e0b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd3,	// (0x00011e0b) cell_vkb2_top_candi_pane_g

0x7753,	// (0x0000978b) cell_vkb2_top_candi_pane_t1

0xbdbd,	// (0x0000ddf5) aid_size_touch_slider_mark_ParamLimits

0xbdbd,	// (0x0000ddf5) aid_size_touch_slider_mark

0xdaa7,	// (0x0000fadf) grid_graphic2_catg_pane_ParamLimits

0xdaa7,	// (0x0000fadf) grid_graphic2_catg_pane

0xdb63,	// (0x0000fb9b) popup_grid_graphic2_window_t1_ParamLimits

0xdb63,	// (0x0000fb9b) popup_grid_graphic2_window_t1

0xdb79,	// (0x0000fbb1) popup_grid_graphic2_window_t2_ParamLimits

0xdb79,	// (0x0000fbb1) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x00011dc6) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x00011dc6) popup_grid_graphic2_window_t

0xe9b7,	// (0x000109ef) bg_button_pane_cp05_ParamLimits

0xdd14,	// (0x0000fd4c) cell_graphic2_control_pane_g1_ParamLimits

0xde02,	// (0x0000fe3a) cell_graphic2_catg_pane_ParamLimits

0xde02,	// (0x0000fe3a) cell_graphic2_catg_pane

0xe674,	// (0x000106ac) bg_button_pane_cp12

0xde14,	// (0x0000fe4c) cell_graphic2_catg_pane_g1

0x6641,	// (0x00008679) cell_tb_ext_pane_t1_ParamLimits

0x7064,	// (0x0000909c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7064,	// (0x0000909c) vkb2_top_cell_right_narrow_pane

0x707c,	// (0x000090b4) vkb2_top_cell_right_wide_pane_ParamLimits

0x707c,	// (0x000090b4) vkb2_top_cell_right_wide_pane

0x45cf,	// (0x00006607) bg_vkb2_func_pane_ParamLimits

0x45cf,	// (0x00006607) bg_vkb2_func_pane

0x70ed,	// (0x00009125) vkb2_top_cell_left_pane_g1_ParamLimits

0x45cf,	// (0x00006607) bg_vkb2_fuc_pane_cp03_ParamLimits

0x45cf,	// (0x00006607) bg_vkb2_fuc_pane_cp03

0x7162,	// (0x0000919a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x15e3,	// (0x0000361b) bg_vkb2_func_pane_g1

0x15eb,	// (0x00003623) bg_vkb2_func_pane_g2

0x15fb,	// (0x00003633) bg_vkb2_func_pane_g3

0x15f3,	// (0x0000362b) bg_vkb2_func_pane_g4

0x1603,	// (0x0000363b) bg_vkb2_func_pane_g5

0x160b,	// (0x00003643) bg_vkb2_func_pane_g6

0x1613,	// (0x0000364b) bg_vkb2_func_pane_g7

0x161b,	// (0x00003653) bg_vkb2_func_pane_g8

0x15db,	// (0x00003613) bg_vkb2_func_pane_g9

0x0008,

0xfde0,	// (0x00011e18) bg_vkb2_func_pane_g

0x45cf,	// (0x00006607) bg_vkb2_fuc_pane_cp01_ParamLimits

0x45cf,	// (0x00006607) bg_vkb2_fuc_pane_cp01

0x70ed,	// (0x00009125) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x70ed,	// (0x00009125) vkb2_top_cell_right_wide_pane_g1

0x45cf,	// (0x00006607) bg_vkb2_fuc_pane_cp02_ParamLimits

0x45cf,	// (0x00006607) bg_vkb2_fuc_pane_cp02

0x7162,	// (0x0000919a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7162,	// (0x0000919a) vkb2_top_cell_right_narrow_pane_g1

0xceb7,	// (0x0000eeef) aid_touch_area_decrease_ParamLimits

0xceb7,	// (0x0000eeef) aid_touch_area_decrease

0xcef1,	// (0x0000ef29) aid_touch_area_increase_ParamLimits

0xcef1,	// (0x0000ef29) aid_touch_area_increase

0xcf19,	// (0x0000ef51) aid_touch_area_mute_ParamLimits

0xcf19,	// (0x0000ef51) aid_touch_area_mute

0xcf41,	// (0x0000ef79) aid_touch_area_slider_ParamLimits

0xcf41,	// (0x0000ef79) aid_touch_area_slider

0xcf81,	// (0x0000efb9) popup_slider_window_g4_ParamLimits

0xcf81,	// (0x0000efb9) popup_slider_window_g4

0xcfa9,	// (0x0000efe1) popup_slider_window_g5_ParamLimits

0xcfa9,	// (0x0000efe1) popup_slider_window_g5

0xcfdd,	// (0x0000f015) popup_slider_window_g6_ParamLimits

0xcfdd,	// (0x0000f015) popup_slider_window_g6

0x634c,	// (0x00008384) popup_slider_window_t2_ParamLimits

0x634c,	// (0x00008384) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x00011d14) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x00011d14) popup_slider_window_t

0xcff9,	// (0x0000f031) slider_pane_ParamLimits

0xcff9,	// (0x0000f031) slider_pane

0x778d,	// (0x000097c5) slider_pane_g1_ParamLimits

0x778d,	// (0x000097c5) slider_pane_g1

0x77a1,	// (0x000097d9) slider_pane_g2_ParamLimits

0x77a1,	// (0x000097d9) slider_pane_g2

0x77b7,	// (0x000097ef) slider_pane_g3_ParamLimits

0x77b7,	// (0x000097ef) slider_pane_g3

0x0003,

0xfdf3,	// (0x00011e2b) slider_pane_g_ParamLimits

0xfdf3,	// (0x00011e2b) slider_pane_g

0xb12f,	// (0x0000d167) popup_tb_float_extension_window_ParamLimits

0xb12f,	// (0x0000d167) popup_tb_float_extension_window

0x77e3,	// (0x0000981b) aid_size_cell_tb_float_ext

0xe674,	// (0x000106ac) bg_popup_sub_window_cp28

0xde1d,	// (0x0000fe55) grid_tb_float_ext_pane

0xde27,	// (0x0000fe5f) cell_tb_float_ext_pane_ParamLimits

0xde27,	// (0x0000fe5f) cell_tb_float_ext_pane

0xde41,	// (0x0000fe79) cell_tb_float_ext_pane_g1

0xde4a,	// (0x0000fe82) grid_highlight_pane_cp12

0xc532,	// (0x0000e56a) cell_last_hwr_side_pane_ParamLimits

0xc532,	// (0x0000e56a) cell_last_hwr_side_pane

0x4573,	// (0x000065ab) cell_last_hwr_side_pane_g1

0x7825,	// (0x0000985d) cell_last_hwr_side_pane_g2

0x0001,

0xfdfc,	// (0x00011e34) cell_last_hwr_side_pane_g

0xd977,	// (0x0000f9af) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd977,	// (0x0000f9af) vkb2_area_bottom_space_btn_pane

0x49f7,	// (0x00006a2f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7241,	// (0x00009279) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7753,	// (0x0000978b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x782e,	// (0x00009866) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x782e,	// (0x00009866) vkb2_area_bottom_space_btn_pane_g1

0x7868,	// (0x000098a0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7868,	// (0x000098a0) vkb2_area_bottom_space_btn_pane_g2

0x789e,	// (0x000098d6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x789e,	// (0x000098d6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe01,	// (0x00011e39) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe01,	// (0x00011e39) vkb2_area_bottom_space_btn_pane_g

0x4692,	// (0x000066ca) cel_fep_hwr_func_pane_ParamLimits

0x4692,	// (0x000066ca) cel_fep_hwr_func_pane

0xc507,	// (0x0000e53f) cell_hwr_side_button_pane_ParamLimits

0xc507,	// (0x0000e53f) cell_hwr_side_button_pane

0xd1f5,	// (0x0000f22d) aid_area_touch_clock_ParamLimits

0xe9b7,	// (0x000109ef) bg_uniindi_top_pane_ParamLimits

0xd207,	// (0x0000f23f) uniindi_top_pane_g1_ParamLimits

0xd21d,	// (0x0000f255) uniindi_top_pane_g2_ParamLimits

0xd229,	// (0x0000f261) uniindi_top_pane_g3_ParamLimits

0x66bb,	// (0x000086f3) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x00011d4c) uniindi_top_pane_g_ParamLimits

0xd23a,	// (0x0000f272) uniindi_top_pane_t1_ParamLimits

0xe9b7,	// (0x000109ef) bg_vkb2_func_pane_cp01_ParamLimits

0xe9b7,	// (0x000109ef) bg_vkb2_func_pane_cp01

0x78e8,	// (0x00009920) cel_fep_hwr_func_pane_g1_ParamLimits

0x78e8,	// (0x00009920) cel_fep_hwr_func_pane_g1

0xe9b7,	// (0x000109ef) bg_vkb2_func_pane_cp02_ParamLimits

0xe9b7,	// (0x000109ef) bg_vkb2_func_pane_cp02

0x78e8,	// (0x00009920) cell_hwr_side_button_pane_g1_ParamLimits

0x78e8,	// (0x00009920) cell_hwr_side_button_pane_g1

0x13bb,	// (0x000033f3) status_pane_g4_ParamLimits

0x13bb,	// (0x000033f3) status_pane_g4

0x13d5,	// (0x0000340d) status_pane_t1

0x42ae,	// (0x000062e6) form2_midp_gauge_slider_cont_pane

0x42b6,	// (0x000062ee) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc40c,	// (0x0000e444) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc41e,	// (0x0000e456) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae7,	// (0x00011b1f) form2_midp_gauge_slider_pane_t_ParamLimits

0x42ec,	// (0x00006324) form2_midp_slider_pane_ParamLimits

0x6be4,	// (0x00008c1c) aid_size_cell_func_vkb2_ParamLimits

0x6be4,	// (0x00008c1c) aid_size_cell_func_vkb2

0x77cf,	// (0x00009807) slider_pane_g4_ParamLimits

0x77cf,	// (0x00009807) slider_pane_g4

0xde53,	// (0x0000fe8b) form2_midp_gauge_slider_pane_t2_cp01

0xde61,	// (0x0000fe99) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xde61,	// (0x0000fe99) form2_midp_gauge_slider_pane_t3_cp01

0x7921,	// (0x00009959) form2_midp_slider_pane_cp01

0xe674,	// (0x000106ac) navi_smil_pane

0x7955,	// (0x0000998d) navi_smil_pane_g1

0x795d,	// (0x00009995) navi_smil_pane_t1

0x792a,	// (0x00009962) form2_midp_slider_pane_g1

0x7933,	// (0x0000996b) form2_midp_slider_pane_g2

0x793b,	// (0x00009973) form2_midp_slider_pane_g3

0x792a,	// (0x00009962) form2_midp_slider_pane_g4

0xde7e,	// (0x0000feb6) form2_midp_slider_pane_g5

0x0004,

0xfe0a,	// (0x00011e42) form2_midp_slider_pane_g

0x78d8,	// (0x00009910) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x78d8,	// (0x00009910) vkb2_area_bottom_space_btn_pane_g4

0xb367,	// (0x0000d39f) lc0_navi_pane_ParamLimits

0xb367,	// (0x0000d39f) lc0_navi_pane

0xb3d1,	// (0x0000d409) lc0_stat_indi_pane_ParamLimits

0xb3d1,	// (0x0000d409) lc0_stat_indi_pane

0xb3e6,	// (0x0000d41e) ls0_title_pane_ParamLimits

0xb3e6,	// (0x0000d41e) ls0_title_pane

0xecb5,	// (0x00010ced) bg_popup_sub_pane_cp14_ParamLimits

0xd1dc,	// (0x0000f214) list_uniindi_pane_ParamLimits

0xd1e8,	// (0x0000f220) uniindi_top_pane_ParamLimits

0x6704,	// (0x0000873c) list_single_uniindi_pane_g1_ParamLimits

0x6717,	// (0x0000874f) list_single_uniindi_pane_t1_ParamLimits

0xde89,	// (0x0000fec1) lc0_stat_clock_pane_ParamLimits

0xde89,	// (0x0000fec1) lc0_stat_clock_pane

0xde99,	// (0x0000fed1) lc0_stat_indi_pane_g1_ParamLimits

0xde99,	// (0x0000fed1) lc0_stat_indi_pane_g1

0xdea6,	// (0x0000fede) lc0_stat_indi_pane_g2_ParamLimits

0xdea6,	// (0x0000fede) lc0_stat_indi_pane_g2

0x0001,

0xfe15,	// (0x00011e4d) lc0_stat_indi_pane_g_ParamLimits

0xfe15,	// (0x00011e4d) lc0_stat_indi_pane_g

0xdeb3,	// (0x0000feeb) lc0_uni_indicator_pane_ParamLimits

0xdeb3,	// (0x0000feeb) lc0_uni_indicator_pane

0xdec3,	// (0x0000fefb) ls0_title_pane_g1_ParamLimits

0xdec3,	// (0x0000fefb) ls0_title_pane_g1

0xded7,	// (0x0000ff0f) ls0_title_pane_t1_ParamLimits

0xded7,	// (0x0000ff0f) ls0_title_pane_t1

0xdf05,	// (0x0000ff3d) lc0_uni_indicator_pane_g1_ParamLimits

0xdf05,	// (0x0000ff3d) lc0_uni_indicator_pane_g1

0x79fd,	// (0x00009a35) lc0_stat_clock_pane_t1

0xe674,	// (0x000106ac) main_ai5_pane

0x7a0b,	// (0x00009a43) ai5_sk_pane_ParamLimits

0x7a0b,	// (0x00009a43) ai5_sk_pane

0xdf30,	// (0x0000ff68) cell_ai5_widget_pane_ParamLimits

0xdf30,	// (0x0000ff68) cell_ai5_widget_pane

0x7ad3,	// (0x00009b0b) aid_size_cell_widget_grid

0x7ae1,	// (0x00009b19) bg_ai5_widget_pane_ParamLimits

0x7ae1,	// (0x00009b19) bg_ai5_widget_pane

0x7b59,	// (0x00009b91) cell_ai5_widget_pane_g2

0x7b6d,	// (0x00009ba5) cell_ai5_widget_pane_g3

0x7b87,	// (0x00009bbf) cell_ai5_widget_pane_g4

0x7b97,	// (0x00009bcf) cell_ai5_widget_pane_g5

0x7ba7,	// (0x00009bdf) cell_ai5_widget_pane_g6

0x7bb3,	// (0x00009beb) cell_ai5_widget_pane_g7

0x7bfb,	// (0x00009c33) cell_ai5_widget_pane_t1_ParamLimits

0x7bfb,	// (0x00009c33) cell_ai5_widget_pane_t1

0x7c18,	// (0x00009c50) cell_ai5_widget_pane_t2_ParamLimits

0x7c18,	// (0x00009c50) cell_ai5_widget_pane_t2

0x7c30,	// (0x00009c68) cell_ai5_widget_pane_t3_ParamLimits

0x7c30,	// (0x00009c68) cell_ai5_widget_pane_t3

0x7c48,	// (0x00009c80) cell_ai5_widget_pane_t4_ParamLimits

0x7c48,	// (0x00009c80) cell_ai5_widget_pane_t4

0x7c6e,	// (0x00009ca6) cell_ai5_widget_pane_t5_ParamLimits

0x7c6e,	// (0x00009ca6) cell_ai5_widget_pane_t5

0x7c8e,	// (0x00009cc6) cell_ai5_widget_pane_t6_ParamLimits

0x7c8e,	// (0x00009cc6) cell_ai5_widget_pane_t6

0x7ca0,	// (0x00009cd8) cell_ai5_widget_pane_t7_ParamLimits

0x7ca0,	// (0x00009cd8) cell_ai5_widget_pane_t7

0x7cb9,	// (0x00009cf1) cell_ai5_widget_pane_t8_ParamLimits

0x7cb9,	// (0x00009cf1) cell_ai5_widget_pane_t8

0x0009,

0xfe2f,	// (0x00011e67) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x00011e67) cell_ai5_widget_pane_t

0x7d18,	// (0x00009d50) grid_ai5_widget_pane

0xecb5,	// (0x00010ced) highlight_cell_ai5_widget_pane_ParamLimits

0xecb5,	// (0x00010ced) highlight_cell_ai5_widget_pane

0xdf96,	// (0x0000ffce) ai5_sk_left_pane

0xdfa0,	// (0x0000ffd8) ai5_sk_middle_pane

0xdfaa,	// (0x0000ffe2) ai5_sk_right_pane

0x7d44,	// (0x00009d7c) bg_ai5_widget_pane_g1_ParamLimits

0x7d44,	// (0x00009d7c) bg_ai5_widget_pane_g1

0x7d50,	// (0x00009d88) bg_ai5_widget_pane_g2_ParamLimits

0x7d50,	// (0x00009d88) bg_ai5_widget_pane_g2

0x7d5c,	// (0x00009d94) bg_ai5_widget_pane_g3_ParamLimits

0x7d5c,	// (0x00009d94) bg_ai5_widget_pane_g3

0x7d68,	// (0x00009da0) bg_ai5_widget_pane_g4_ParamLimits

0x7d68,	// (0x00009da0) bg_ai5_widget_pane_g4

0x7d74,	// (0x00009dac) bg_ai5_widget_pane_g5_ParamLimits

0x7d74,	// (0x00009dac) bg_ai5_widget_pane_g5

0x7d80,	// (0x00009db8) bg_ai5_widget_pane_g6_ParamLimits

0x7d80,	// (0x00009db8) bg_ai5_widget_pane_g6

0x7d8c,	// (0x00009dc4) bg_ai5_widget_pane_g7_ParamLimits

0x7d8c,	// (0x00009dc4) bg_ai5_widget_pane_g7

0x7d98,	// (0x00009dd0) bg_ai5_widget_pane_g8_ParamLimits

0x7d98,	// (0x00009dd0) bg_ai5_widget_pane_g8

0x7da4,	// (0x00009ddc) bg_ai5_widget_pane_g9_ParamLimits

0x7da4,	// (0x00009ddc) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x00011e7c) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x00011e7c) bg_ai5_widget_pane_g

0x7dd6,	// (0x00009e0e) cell_shortcut_ai5_widget_pane_ParamLimits

0x7dd6,	// (0x00009e0e) cell_shortcut_ai5_widget_pane

0x050a,	// (0x00002542) bg_cell_shortcut_ai5_widget_pane

0x7de7,	// (0x00009e1f) cell_grid_ai5_widget_pane_g1

0x050a,	// (0x00002542) highlight_cell_shortcut_ai5_widget_pane

0x15eb,	// (0x00003623) ai5_sk_left_pane_g1

0x7df0,	// (0x00009e28) ai5_sk_left_pane_g2

0x7df8,	// (0x00009e30) ai5_sk_left_pane_g3

0x7e00,	// (0x00009e38) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x00011e8f) ai5_sk_left_pane_g

0x7e08,	// (0x00009e40) ai5_sk_left_pane_t1

0x15e3,	// (0x0000361b) ai5_sk_right_pane_g1

0x7e16,	// (0x00009e4e) ai5_sk_right_pane_g2

0x7e1e,	// (0x00009e56) ai5_sk_right_pane_g3

0x7e26,	// (0x00009e5e) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x00011e98) ai5_sk_right_pane_g

0x7e2e,	// (0x00009e66) ai5_sk_right_pane_t1

0x15e3,	// (0x0000361b) ai5_sk_middle_pane_g1

0x15eb,	// (0x00003623) ai5_sk_middle_pane_g2

0x1603,	// (0x0000363b) ai5_sk_middle_pane_g3

0x7e1e,	// (0x00009e56) ai5_sk_middle_pane_g4

0x7df8,	// (0x00009e30) ai5_sk_middle_pane_g5

0x7e3c,	// (0x00009e74) ai5_sk_middle_pane_g6

0xdfb4,	// (0x0000ffec) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x00011ea1) ai5_sk_middle_pane_g

0xb253,	// (0x0000d28b) aid_touch_area_size_lc0_ParamLimits

0xb253,	// (0x0000d28b) aid_touch_area_size_lc0

0x4da4,	// (0x00006ddc) cell_hwr_candidate_pane_t1_ParamLimits

0x108c,	// (0x000030c4) aid_touch_navi_pane

0xb4df,	// (0x0000d517) status_dt_navi_pane_ParamLimits

0xb4df,	// (0x0000d517) status_dt_navi_pane

0xb4f7,	// (0x0000d52f) status_dt_sta_pane_ParamLimits

0xb4f7,	// (0x0000d52f) status_dt_sta_pane

0xdfbc,	// (0x0000fff4) dt_sta_controll_pane

0xdfc9,	// (0x00010001) dt_sta_indi_pane

0xdfd6,	// (0x0001000e) dt_sta_title_pane

0xe9b7,	// (0x000109ef) bg_dt_sta_indi_pane_ParamLimits

0xe9b7,	// (0x000109ef) bg_dt_sta_indi_pane

0xdfe8,	// (0x00010020) dt_sta_battery_pane

0xdff0,	// (0x00010028) dt_sta_indi_pane_g1

0x7e8e,	// (0x00009ec6) dt_sta_indi_pane_g2

0x7e97,	// (0x00009ecf) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x00011eb0) dt_sta_indi_pane_g

0x7ea0,	// (0x00009ed8) dt_sta_signal_pane

0xecb5,	// (0x00010ced) bg_dt_sta_title_pane_ParamLimits

0xecb5,	// (0x00010ced) bg_dt_sta_title_pane

0x2768,	// (0x000047a0) dt_sta_title_pane_g1

0xdff9,	// (0x00010031) dt_sta_title_pane_t1_ParamLimits

0xdff9,	// (0x00010031) dt_sta_title_pane_t1

0xe674,	// (0x000106ac) bg_dt_sta_control_pane

0xe00e,	// (0x00010046) dt_sta_controll_pane_g1

0xe017,	// (0x0001004f) bg_dt_sta_title_pane_g1

0xe020,	// (0x00010058) bg_dt_sta_title_pane_g2

0xe029,	// (0x00010061) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x00011eb7) bg_dt_sta_title_pane_g

0x4573,	// (0x000065ab) bg_dt_sta_indi_pane_g1

0x7ee2,	// (0x00009f1a) dt_sta_signal_pane_g1

0x7eea,	// (0x00009f22) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x00011ebe) dt_sta_signal_pane_g

0x7ef2,	// (0x00009f2a) dt_sta_battery_pane_g1

0x7efb,	// (0x00009f33) dt_sta_battery_pane_t1

0x4573,	// (0x000065ab) bg_dt_sta_control_pane_g1

0xf428,	// (0x00011460) fep_china_uni_eep_pane

0xf430,	// (0x00011468) fep_china_uni_entry_pane_ParamLimits

0xf440,	// (0x00011478) popup_fep_china_uni_window_g1_ParamLimits

0xf450,	// (0x00011488) popup_fep_china_uni_window_g2_ParamLimits

0xf450,	// (0x00011488) popup_fep_china_uni_window_g2

0x0001,

0xf709,	// (0x00011741) popup_fep_china_uni_window_g_ParamLimits

0xf709,	// (0x00011741) popup_fep_china_uni_window_g

0x7f0a,	// (0x00009f42) fep_china_uni_eep_pane_g1

0x7f12,	// (0x00009f4a) fep_china_uni_eep_pane_t1

0x794c,	// (0x00009984) aid_touch_area_size_smil_player

0x11e2,	// (0x0000321a) lc0_clock_pane

0x13c9,	// (0x00003401) status_pane_g5_ParamLimits

0x13c9,	// (0x00003401) status_pane_g5

0xac65,	// (0x0000cc9d) popup_keymap_window

0x1387,	// (0x000033bf) status_icon_pane

0x7b6d,	// (0x00009ba5) cell_ai5_widget_pane_g3_ParamLimits

0x7b87,	// (0x00009bbf) cell_ai5_widget_pane_g4_ParamLimits

0x7b97,	// (0x00009bcf) cell_ai5_widget_pane_g5_ParamLimits

0x7bbf,	// (0x00009bf7) cell_ai5_widget_pane_g8_ParamLimits

0x7bbf,	// (0x00009bf7) cell_ai5_widget_pane_g8

0x7bd3,	// (0x00009c0b) cell_ai5_widget_pane_g9_ParamLimits

0x7bd3,	// (0x00009c0b) cell_ai5_widget_pane_g9

0x7be7,	// (0x00009c1f) cell_ai5_widget_pane_g10_ParamLimits

0x7be7,	// (0x00009c1f) cell_ai5_widget_pane_g10

0x7f21,	// (0x00009f59) status_icon_pane_g1

0xe674,	// (0x000106ac) bg_popup_sub_pane_cp13

0x7f29,	// (0x00009f61) popup_keymap_window_t1

0xa925,	// (0x0000c95d) control_pane_g6_ParamLimits

0xa925,	// (0x0000c95d) control_pane_g6

0xa932,	// (0x0000c96a) control_pane_g7_ParamLimits

0xa932,	// (0x0000c96a) control_pane_g7

0xa93f,	// (0x0000c977) control_pane_g8_ParamLimits

0xa93f,	// (0x0000c977) control_pane_g8

0xdfbc,	// (0x0000fff4) dt_sta_controll_pane_ParamLimits

0xdfc9,	// (0x00010001) dt_sta_indi_pane_ParamLimits

0xdfd6,	// (0x0001000e) dt_sta_title_pane_ParamLimits

0xeb8a,	// (0x00010bc2) aid_size_touch_scroll_bar_cale

0x95b6,	// (0x0000b5ee) popup_discreet_window_ParamLimits

0x95b6,	// (0x0000b5ee) popup_discreet_window

0x9608,	// (0x0000b640) popup_sk_window

0x1e42,	// (0x00003e7a) bg_popup_sub_pane_cp28_ParamLimits

0x1e42,	// (0x00003e7a) bg_popup_sub_pane_cp28

0x7f37,	// (0x00009f6f) popup_discreet_window_g1_ParamLimits

0x7f37,	// (0x00009f6f) popup_discreet_window_g1

0xe032,	// (0x0001006a) popup_discreet_window_t1_ParamLimits

0xe032,	// (0x0001006a) popup_discreet_window_t1

0x7f75,	// (0x00009fad) popup_discreet_window_t2_ParamLimits

0x7f75,	// (0x00009fad) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x00011ec3) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x00011ec3) popup_discreet_window_t

0x7fc7,	// (0x00009fff) popup_sk_window_g1

0x7fd1,	// (0x0000a009) popup_sk_window_g2

0x0001,

0xfe92,	// (0x00011eca) popup_sk_window_g

0xe050,	// (0x00010088) popup_sk_window_t1

0xe05e,	// (0x00010096) popup_sk_window_t1_copy1

0x7b59,	// (0x00009b91) cell_ai5_widget_pane_g2_ParamLimits

0x7ccb,	// (0x00009d03) cell_ai5_widget_pane_t9_ParamLimits

0x7ccb,	// (0x00009d03) cell_ai5_widget_pane_t9

0xe674,	// (0x000106ac) main_fep_fshwr2_pane

0xe06c,	// (0x000100a4) aid_fshwr2_btn_pane

0xe07e,	// (0x000100b6) aid_fshwr2_syb_pane

0xe090,	// (0x000100c8) aid_fshwr2_txt_pane

0xe09f,	// (0x000100d7) fshwr2_func_candi_pane

0xe0be,	// (0x000100f6) fshwr2_hwr_syb_pane

0xe0d9,	// (0x00010111) fshwr2_icf_pane

0xe674,	// (0x000106ac) fshwr2_icf_bg_pane

0x8076,	// (0x0000a0ae) fshwr2_icf_pane_t1_ParamLimits

0x8076,	// (0x0000a0ae) fshwr2_icf_pane_t1

0xf311,	// (0x00011349) fshwr2_func_candi_pane_g1

0xe105,	// (0x0001013d) fshwr2_func_candi_row_pane_ParamLimits

0xe105,	// (0x0001013d) fshwr2_func_candi_row_pane

0xe128,	// (0x00010160) cell_fshwr2_syb_pane_ParamLimits

0xe128,	// (0x00010160) cell_fshwr2_syb_pane

0x49f7,	// (0x00006a2f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x49f7,	// (0x00006a2f) fshwr2_hwr_syb_pane_g1

0xe674,	// (0x000106ac) bg_popup_call_pane_cp01

0xe13e,	// (0x00010176) fshwr2_func_candi_cell_pane_ParamLimits

0xe13e,	// (0x00010176) fshwr2_func_candi_cell_pane

0x1c2b,	// (0x00003c63) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1c2b,	// (0x00003c63) fshwr2_func_candi_cell_bg_pane

0xe189,	// (0x000101c1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe189,	// (0x000101c1) fshwr2_func_candi_cell_pane_g1

0xe1c0,	// (0x000101f8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe1c0,	// (0x000101f8) fshwr2_func_candi_cell_pane_t1

0xe674,	// (0x000106ac) bg_button_pane_cp08

0x813b,	// (0x0000a173) cell_fshwr2_syb_bg_pane

0xe1db,	// (0x00010213) cell_fshwr2_syb_bg_pane_g1

0xe1e3,	// (0x0001021b) cell_fshwr2_syb_bg_pane_t1

0xecb5,	// (0x00010ced) main_tmo_pane

0xbc81,	// (0x0000dcb9) uni_indicator_pane_g1_ParamLimits

0xbc97,	// (0x0000dccf) uni_indicator_pane_g2_ParamLimits

0xbcad,	// (0x0000dce5) uni_indicator_pane_g3_ParamLimits

0x2ad5,	// (0x00004b0d) uni_indicator_pane_g4_ParamLimits

0x2ad5,	// (0x00004b0d) uni_indicator_pane_g4

0x2ae9,	// (0x00004b21) uni_indicator_pane_g5_ParamLimits

0x2ae9,	// (0x00004b21) uni_indicator_pane_g5

0x2ae9,	// (0x00004b21) uni_indicator_pane_g6_ParamLimits

0x2ae9,	// (0x00004b21) uni_indicator_pane_g6

0xf901,	// (0x00011939) uni_indicator_pane_g_ParamLimits

0xce99,	// (0x0000eed1) popup_tmo_note_window_ParamLimits

0xce99,	// (0x0000eed1) popup_tmo_note_window

0xecb5,	// (0x00010ced) fshwr2_bg_pane

0xe1b1,	// (0x000101e9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe1b1,	// (0x000101e9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x00011ecf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x00011ecf) fshwr2_func_candi_cell_pane_g

0x4573,	// (0x000065ab) bg_popup_window_pane_cp01

0x815a,	// (0x0000a192) bg_popup_window_pane_g1_cp01

0x8163,	// (0x0000a19b) bg_popup_window_pane_cp22_ParamLimits

0x8163,	// (0x0000a19b) bg_popup_window_pane_cp22

0xe1f2,	// (0x0001022a) listscroll_tmo_link_pane_ParamLimits

0xe1f2,	// (0x0001022a) listscroll_tmo_link_pane

0x81b1,	// (0x0000a1e9) popup_tmo_note_window_g1_ParamLimits

0x81b1,	// (0x0000a1e9) popup_tmo_note_window_g1

0xe232,	// (0x0001026a) tmo_note_info_pane_ParamLimits

0xe232,	// (0x0001026a) tmo_note_info_pane

0xe24c,	// (0x00010284) list_tmo_note_info_pane_g1_ParamLimits

0xe24c,	// (0x00010284) list_tmo_note_info_pane_g1

0x81ef,	// (0x0000a227) list_tmo_note_info_pane_g2_ParamLimits

0x81ef,	// (0x0000a227) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x00011ed4) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x00011ed4) list_tmo_note_info_pane_g

0x820b,	// (0x0000a243) list_tmo_note_info_text_pane_ParamLimits

0x820b,	// (0x0000a243) list_tmo_note_info_text_pane

0x828c,	// (0x0000a2c4) list_tmo_link_pane

0x8299,	// (0x0000a2d1) scroll_pane_cp20

0x82a6,	// (0x0000a2de) list_single_tmo_link_pane_ParamLimits

0x82a6,	// (0x0000a2de) list_single_tmo_link_pane

0x82b6,	// (0x0000a2ee) list_single_tmo_link_pane_t1

0x82c4,	// (0x0000a2fc) list_tmo_note_info_text_pane_t1_ParamLimits

0x82c4,	// (0x0000a2fc) list_tmo_note_info_text_pane_t1

0xa279,	// (0x0000c2b1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa279,	// (0x0000c2b1) aid_size_touch_scroll_bar_cp01

0xa179,	// (0x0000c1b1) aid_size_touch_slider_marker

0x95f8,	// (0x0000b630) popup_settings_window_ParamLimits

0x95f8,	// (0x0000b630) popup_settings_window

0x0aaf,	// (0x00002ae7) popup_candi_list_indi_window

0x108c,	// (0x000030c4) aid_touch_navi_pane_ParamLimits

0x63e1,	// (0x00008419) rs_clock_indi_pane

0x63ea,	// (0x00008422) sctrl_sk_bottom_pane_ParamLimits

0x63fb,	// (0x00008433) sctrl_sk_top_pane_ParamLimits

0xd6b4,	// (0x0000f6ec) popup_fep_tooltip_window

0x7ad3,	// (0x00009b0b) aid_size_cell_widget_grid_ParamLimits

0x7b44,	// (0x00009b7c) cell_ai5_widget_pane_g1_ParamLimits

0x7b44,	// (0x00009b7c) cell_ai5_widget_pane_g1

0x7ba7,	// (0x00009bdf) cell_ai5_widget_pane_g6_ParamLimits

0x7bb3,	// (0x00009beb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1a,	// (0x00011e52) cell_ai5_widget_pane_g_ParamLimits

0xfe1a,	// (0x00011e52) cell_ai5_widget_pane_g

0x7cfa,	// (0x00009d32) cell_ai5_widget_pane_t10_ParamLimits

0x7cfa,	// (0x00009d32) cell_ai5_widget_pane_t10

0x7d18,	// (0x00009d50) grid_ai5_widget_pane_ParamLimits

0x7db0,	// (0x00009de8) cell_contacts_ai5_widget_pane_ParamLimits

0x7db0,	// (0x00009de8) cell_contacts_ai5_widget_pane

0x7f8a,	// (0x00009fc2) popup_discreet_window_t3_ParamLimits

0x7f8a,	// (0x00009fc2) popup_discreet_window_t3

0xe0f1,	// (0x00010129) popup_fshwr2_char_preview_window_ParamLimits

0xe0f1,	// (0x00010129) popup_fshwr2_char_preview_window

0xe263,	// (0x0001029b) tmo_note_info_pane_t1

0xe278,	// (0x000102b0) tmo_note_info_pane_t2

0xe28f,	// (0x000102c7) tmo_note_info_pane_t3

0x8268,	// (0x0000a2a0) tmo_note_info_pane_t4

0x827a,	// (0x0000a2b2) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x00011ed9) tmo_note_info_pane_t

0x828c,	// (0x0000a2c4) list_tmo_link_pane_ParamLimits

0x8299,	// (0x0000a2d1) scroll_pane_cp20_ParamLimits

0xe674,	// (0x000106ac) bg_popup_fep_char_preview_window_cp01

0xe2a4,	// (0x000102dc) popup_fshwr2_char_preview_window_t1

0x82eb,	// (0x0000a323) popup_candi_list_indi_window_g1

0x82f4,	// (0x0000a32c) bg_cell_contacts_ai5_widget_pane

0x8300,	// (0x0000a338) cell_contacts_ai5_widget_pane_g1

0x50b1,	// (0x000070e9) cell_contacts_ai5_widget_pane_g2

0x8315,	// (0x0000a34d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x00011ee4) cell_contacts_ai5_widget_pane_g

0x8321,	// (0x0000a359) cell_contacts_ai5_widget_pane_t1

0xecb5,	// (0x00010ced) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8398,	// (0x0000a3d0) settings_container_pane

0x050a,	// (0x00002542) listscroll_set_pane_copy1

0x38fd,	// (0x00005935) scroll_pane_cp121_copy1

0x1bef,	// (0x00003c27) set_content_pane_copy1

0xe317,	// (0x0001034f) aid_height_set_list_copy1_ParamLimits

0xe317,	// (0x0001034f) aid_height_set_list_copy1

0x2dbb,	// (0x00004df3) aid_size_parent_copy1_ParamLimits

0x2dbb,	// (0x00004df3) aid_size_parent_copy1

0xe323,	// (0x0001035b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe323,	// (0x0001035b) button_value_adjust_pane_cp6_copy1

0x0a51,	// (0x00002a89) list_highlight_pane_cp2_copy1_ParamLimits

0x0a51,	// (0x00002a89) list_highlight_pane_cp2_copy1

0xe337,	// (0x0001036f) list_set_pane_copy1_ParamLimits

0xe337,	// (0x0001036f) list_set_pane_copy1

0xe2b2,	// (0x000102ea) main_pane_set_t1_copy1_ParamLimits

0xe2b2,	// (0x000102ea) main_pane_set_t1_copy1

0xe2ec,	// (0x00010324) main_pane_set_t2_copy1_ParamLimits

0xe2ec,	// (0x00010324) main_pane_set_t2_copy1

0xe3e4,	// (0x0001041c) main_pane_set_t3_copy1

0xe3f2,	// (0x0001042a) main_pane_set_t4_copy1

0xe30b,	// (0x00010343) set_content_pane_g1_copy1_ParamLimits

0xe30b,	// (0x00010343) set_content_pane_g1_copy1

0xe400,	// (0x00010438) setting_code_pane_copy1

0x8495,	// (0x0000a4cd) setting_slider_graphic_pane_copy1

0x8495,	// (0x0000a4cd) setting_slider_pane_copy1

0x8495,	// (0x0000a4cd) setting_text_pane_copy1

0x8495,	// (0x0000a4cd) setting_volume_pane_copy1

0xe400,	// (0x00010438) settings_code_pane_cp2_copy1

0xe408,	// (0x00010440) settings_code_pane_cp_copy1_ParamLimits

0xe408,	// (0x00010440) settings_code_pane_cp_copy1

0xe41c,	// (0x00010454) volume_set_pane_copy1

0xe424,	// (0x0001045c) volume_set_pane_g10_copy1

0xe42c,	// (0x00010464) volume_set_pane_g1_copy1

0xe434,	// (0x0001046c) volume_set_pane_g2_copy1

0xe43c,	// (0x00010474) volume_set_pane_g3_copy1

0xe444,	// (0x0001047c) volume_set_pane_g4_copy1

0xe44c,	// (0x00010484) volume_set_pane_g5_copy1

0xe454,	// (0x0001048c) volume_set_pane_g6_copy1

0xe45c,	// (0x00010494) volume_set_pane_g7_copy1

0xe464,	// (0x0001049c) volume_set_pane_g8_copy1

0xe46c,	// (0x000104a4) volume_set_pane_g9_copy1

0xe873,	// (0x000108ab) bg_set_opt_pane_cp_copy1_ParamLimits

0xe873,	// (0x000108ab) bg_set_opt_pane_cp_copy1

0xe474,	// (0x000104ac) setting_slider_pane_t1_copy1_ParamLimits

0xe474,	// (0x000104ac) setting_slider_pane_t1_copy1

0xe492,	// (0x000104ca) setting_slider_pane_t2_copy1_ParamLimits

0xe492,	// (0x000104ca) setting_slider_pane_t2_copy1

0xe4ac,	// (0x000104e4) setting_slider_pane_t3_copy1_ParamLimits

0xe4ac,	// (0x000104e4) setting_slider_pane_t3_copy1

0xe4c4,	// (0x000104fc) slider_set_pane_copy1_ParamLimits

0xe4c4,	// (0x000104fc) slider_set_pane_copy1

0xed6f,	// (0x00010da7) set_opt_bg_pane_g1_copy2

0xed77,	// (0x00010daf) set_opt_bg_pane_g2_copy2

0x856f,	// (0x0000a5a7) set_opt_bg_pane_g3_copy2

0xed87,	// (0x00010dbf) set_opt_bg_pane_g4_copy2

0xed8f,	// (0x00010dc7) set_opt_bg_pane_g5_copy2

0xed97,	// (0x00010dcf) set_opt_bg_pane_g6_copy2

0xe4da,	// (0x00010512) set_opt_bg_pane_g7_copy2

0x8581,	// (0x0000a5b9) set_opt_bg_pane_g8_copy2

0x858b,	// (0x0000a5c3) set_opt_bg_pane_g9_copy2

0xe4e2,	// (0x0001051a) aid_size_touch_slider_mark_copy1_ParamLimits

0xe4e2,	// (0x0001051a) aid_size_touch_slider_mark_copy1

0xe4f6,	// (0x0001052e) slider_set_pane_g1_copy1

0x85b2,	// (0x0000a5ea) slider_set_pane_g2_copy1

0xbdde,	// (0x0000de16) slider_set_pane_g3_copy1_ParamLimits

0xbdde,	// (0x0000de16) slider_set_pane_g3_copy1

0xbdf2,	// (0x0000de2a) slider_set_pane_g4_copy1_ParamLimits

0xbdf2,	// (0x0000de2a) slider_set_pane_g4_copy1

0xbe0a,	// (0x0000de42) slider_set_pane_g5_copy1_ParamLimits

0xbe0a,	// (0x0000de42) slider_set_pane_g5_copy1

0xbdde,	// (0x0000de16) slider_set_pane_g6_copy1_ParamLimits

0xbdde,	// (0x0000de16) slider_set_pane_g6_copy1

0xe4ff,	// (0x00010537) slider_set_pane_g7_copy1_ParamLimits

0xe4ff,	// (0x00010537) slider_set_pane_g7_copy1

0xe7f7,	// (0x0001082f) bg_set_opt_pane_cp2_copy1

0xe515,	// (0x0001054d) setting_slider_graphic_pane_g1_copy1

0xe51e,	// (0x00010556) setting_slider_graphic_pane_t1_copy1

0xe52e,	// (0x00010566) setting_slider_graphic_pane_t2_copy1

0xe53e,	// (0x00010576) slider_set_pane_cp_copy1

0x8609,	// (0x0000a641) input_focus_pane_cp1_copy1

0x8612,	// (0x0000a64a) list_set_text_pane_copy1

0x861a,	// (0x0000a652) setting_text_pane_g1_copy1

0x8623,	// (0x0000a65b) set_text_pane_t1_copy1

0x8609,	// (0x0000a641) input_focus_pane_cp2_copy1

0x861a,	// (0x0000a652) setting_code_pane_g1_copy1

0x863e,	// (0x0000a676) setting_code_pane_t1_copy1

0x864c,	// (0x0000a684) list_set_graphic_pane_copy1

0xe7f7,	// (0x0001082f) bg_set_opt_pane_cp4_copy1

0x0215,	// (0x0000224d) list_set_graphic_pane_g1_copy1_ParamLimits

0x0215,	// (0x0000224d) list_set_graphic_pane_g1_copy1

0x8660,	// (0x0000a698) list_set_graphic_pane_g2_copy1

0x022d,	// (0x00002265) list_set_graphic_pane_t1_copy1_ParamLimits

0x022d,	// (0x00002265) list_set_graphic_pane_t1_copy1

0x4573,	// (0x000065ab) rs_clock_indi_pane_g1

0x8668,	// (0x0000a6a0) rs_clock_indi_pane_t1

0x8676,	// (0x0000a6ae) rs_indi_pane

0x867e,	// (0x0000a6b6) rs_indi_pane_g1

0x8687,	// (0x0000a6bf) rs_indi_pane_g2

0x82eb,	// (0x0000a323) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x00011eeb) rs_indi_pane_g

0x050a,	// (0x00002542) bg_popup_preview_window_pane_cp03

0x8690,	// (0x0000a6c8) popup_fep_tooltip_window_t1

0xc997,	// (0x0000e9cf) popup_note2_window_g2_ParamLimits

0xc997,	// (0x0000e9cf) popup_note2_window_g2

0x0001,

0xfc53,	// (0x00011c8b) popup_note2_window_g_ParamLimits

0xfc53,	// (0x00011c8b) popup_note2_window_g

0x5daf,	// (0x00007de7) bg_popup_sub_pane_cp11_ParamLimits

0x5dbc,	// (0x00007df4) cell_ai3_links_pane_g1_ParamLimits

0x5dd3,	// (0x00007e0b) cell_ai3_links_pane_t1

0x8623,	// (0x0000a65b) set_text_pane_t1_copy1_ParamLimits

0x041b,	// (0x00002453) cell_graphic_popup_pane_cp2_ParamLimits

0x041b,	// (0x00002453) cell_graphic_popup_pane_cp2

0xe54e,	// (0x00010586) cell_graphic_popup_pane_g1_cp2

0xeb0d,	// (0x00010b45) cell_graphic_popup_pane_g2_cp2

0x86a6,	// (0x0000a6de) cell_graphic_popup_pane_g3_cp2

0xe556,	// (0x0001058e) cell_graphic_popup_pane_t2_cp2

0xeb1e,	// (0x00010b56) grid_highlight_pane_cp3_cp2

0xf167,	// (0x0001119f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xecb5,	// (0x00010ced) main_tmo_pane_ParamLimits

0xce8d,	// (0x0000eec5) popup_tmo_big_image_note_window

0x7b33,	// (0x00009b6b) cell_ai5_widget_list_pane

0x7b3b,	// (0x00009b73) cell_ai5_widget_lrg_icon_pane

0xe263,	// (0x0001029b) tmo_note_info_pane_t1_ParamLimits

0xe278,	// (0x000102b0) tmo_note_info_pane_t2_ParamLimits

0xe28f,	// (0x000102c7) tmo_note_info_pane_t3_ParamLimits

0x8268,	// (0x0000a2a0) tmo_note_info_pane_t4_ParamLimits

0x827a,	// (0x0000a2b2) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x00011ed9) tmo_note_info_pane_t_ParamLimits

0x8398,	// (0x0000a3d0) settings_container_pane_ParamLimits

0xe546,	// (0x0001057e) indicator_popup_pane_cp5

0xe546,	// (0x0001057e) indicator_popup_pane_cp6

0x864c,	// (0x0000a684) list_set_graphic_pane_copy1_ParamLimits

0xe674,	// (0x000106ac) bg_popup_window_pane_cp23

0x86bc,	// (0x0000a6f4) popup_tmo_big_image_note_window_g1

0x86c5,	// (0x0000a6fd) popup_tmo_big_image_note_window_t1

0x86d5,	// (0x0000a70d) popup_tmo_big_image_note_window_t2

0x86e5,	// (0x0000a71d) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x00011ef2) popup_tmo_big_image_note_window_t

0x4573,	// (0x000065ab) cell_ai5_widget_lrg_icon_pane_g1

0x86f5,	// (0x0000a72d) cell_ai5_widget_lrg_icon_pane_t1

0x8703,	// (0x0000a73b) cell_ai5_widget_list_row_pane_ParamLimits

0x8703,	// (0x0000a73b) cell_ai5_widget_list_row_pane

0x871a,	// (0x0000a752) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x871a,	// (0x0000a752) cell_ai5_widget_list_row_pane_g1

0xe564,	// (0x0001059c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe564,	// (0x0001059c) cell_ai5_widget_list_row_pane_t1

0x8752,	// (0x0000a78a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8752,	// (0x0000a78a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x00011ef9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x00011ef9) cell_ai5_widget_list_row_pane_t

0xe674,	// (0x000106ac) main_fep_vtchi_ss_pane

0x879a,	// (0x0000a7d2) popup_fep_char_pre_window

0x87a2,	// (0x0000a7da) popup_fep_ituss_window

0xe5a8,	// (0x000105e0) popup_fep_vkbss_window

0xe5b5,	// (0x000105ed) grid_vkbss_keypad_pane_ParamLimits

0xe5b5,	// (0x000105ed) grid_vkbss_keypad_pane

0x87fd,	// (0x0000a835) ituss_keypad_pane

0x8818,	// (0x0000a850) aid_vkbss_key_offset_ParamLimits

0x8818,	// (0x0000a850) aid_vkbss_key_offset

0xe5c5,	// (0x000105fd) cell_vkbss_key_pane_ParamLimits

0xe5c5,	// (0x000105fd) cell_vkbss_key_pane

0x13a3,	// (0x000033db) bg_cell_vkbss_key_g1_ParamLimits

0x13a3,	// (0x000033db) bg_cell_vkbss_key_g1

0xe5db,	// (0x00010613) cell_vkbss_key_3p_pane_ParamLimits

0xe5db,	// (0x00010613) cell_vkbss_key_3p_pane

0xe5f5,	// (0x0001062d) cell_vkbss_key_g1_ParamLimits

0xe5f5,	// (0x0001062d) cell_vkbss_key_g1

0xe60f,	// (0x00010647) cell_vkbss_key_t1_ParamLimits

0xe60f,	// (0x00010647) cell_vkbss_key_t1

0x888d,	// (0x0000a8c5) cell_ituss_key_pane_ParamLimits

0x888d,	// (0x0000a8c5) cell_ituss_key_pane

0x889e,	// (0x0000a8d6) bg_cell_ituss_key_g1_ParamLimits

0x889e,	// (0x0000a8d6) bg_cell_ituss_key_g1

0x88aa,	// (0x0000a8e2) cell_ituss_key_pane_g1_ParamLimits

0x88aa,	// (0x0000a8e2) cell_ituss_key_pane_g1

0x88be,	// (0x0000a8f6) cell_ituss_key_pane_g2_ParamLimits

0x88be,	// (0x0000a8f6) cell_ituss_key_pane_g2

0x0002,

0xfec8,	// (0x00011f00) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x00011f00) cell_ituss_key_pane_g

0x88fc,	// (0x0000a934) cell_ituss_key_t1_ParamLimits

0x88fc,	// (0x0000a934) cell_ituss_key_t1

0x8936,	// (0x0000a96e) cell_ituss_key_t2_ParamLimits

0x8936,	// (0x0000a96e) cell_ituss_key_t2

0x8967,	// (0x0000a99f) cell_ituss_key_t3_ParamLimits

0x8967,	// (0x0000a99f) cell_ituss_key_t3

0x8936,	// (0x0000a96e) cell_ituss_key_t4_ParamLimits

0x8936,	// (0x0000a96e) cell_ituss_key_t4

0x0004,

0xfecf,	// (0x00011f07) cell_ituss_key_t_ParamLimits

0xfecf,	// (0x00011f07) cell_ituss_key_t

0x89aa,	// (0x0000a9e2) cell_vkbss_key_3p_pane_g1

0x89b2,	// (0x0000a9ea) cell_vkbss_key_3p_pane_g2

0x89ba,	// (0x0000a9f2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeda,	// (0x00011f12) cell_vkbss_key_3p_pane_g

0x050a,	// (0x00002542) bg_popup_fep_char_preview_window_cp02

0x89c2,	// (0x0000a9fa) popup_fep_char_pre_window_t1

0xdf8c,	// (0x0000ffc4) main_ai5_sk_pane

0x82f4,	// (0x0000a32c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8300,	// (0x0000a338) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x50b1,	// (0x000070e9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8315,	// (0x0000a34d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x00011ee4) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8321,	// (0x0000a359) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xecb5,	// (0x00010ced) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe63a,	// (0x00010672) main_ai5_sk_pane_g1

0xb8d2,	// (0x0000d90a) popup_query_code_window_g1

0x87b8,	// (0x0000a7f0) popup_fep_vkb_icf_pane

0x87d7,	// (0x0000a80f) popup_fep_vtchi_icf_pane

0x89d9,	// (0x0000aa11) bg_icf_pane

0x89e5,	// (0x0000aa1d) list_vkb_icf_pane

0x89f4,	// (0x0000aa2c) bg_icf_pane_cp01

0x8a07,	// (0x0000aa3f) vtchi_icf_list_pane

0x8a17,	// (0x0000aa4f) list_vkb_icf_pane_t1_ParamLimits

0x8a17,	// (0x0000aa4f) list_vkb_icf_pane_t1

0x8a2e,	// (0x0000aa66) vtchi_icf_list_pane_t1_ParamLimits

0x8a2e,	// (0x0000aa66) vtchi_icf_list_pane_t1

0x87a2,	// (0x0000a7da) popup_fep_ituss_window_ParamLimits

0x87d7,	// (0x0000a80f) popup_fep_vtchi_icf_pane_ParamLimits

0x87fd,	// (0x0000a835) ituss_keypad_pane_ParamLimits

0x880c,	// (0x0000a844) ituss_sks_pane

0x89d9,	// (0x0000aa11) bg_icf_pane_ParamLimits

0xe595,	// (0x000105cd) icf_edit_indi_pane_ParamLimits

0xe595,	// (0x000105cd) icf_edit_indi_pane

0x89e5,	// (0x0000aa1d) list_vkb_icf_pane_ParamLimits

0x89f4,	// (0x0000aa2c) bg_icf_pane_cp01_ParamLimits

0x878d,	// (0x0000a7c5) icf_edit_indi_pane_cp01_ParamLimits

0x878d,	// (0x0000a7c5) icf_edit_indi_pane_cp01

0x8a0f,	// (0x0000aa47) vtchi_query_pane

0x78e8,	// (0x00009920) icf_edit_indi_pane_g1_ParamLimits

0x78e8,	// (0x00009920) icf_edit_indi_pane_g1

0xe643,	// (0x0001067b) icf_edit_indi_pane_g2_ParamLimits

0xe643,	// (0x0001067b) icf_edit_indi_pane_g2

0x0001,

0xfef2,	// (0x00011f2a) icf_edit_indi_pane_g_ParamLimits

0xfef2,	// (0x00011f2a) icf_edit_indi_pane_g

0xe655,	// (0x0001068d) icf_edit_indi_pane_t1

0x8a4c,	// (0x0000aa84) bg_input_focus_pane_cp042

0xeb81,	// (0x00010bb9) vtchi_button_pane

0x8a55,	// (0x0000aa8d) vtchi_query_pane_t1

0x8a63,	// (0x0000aa9b) vtchi_query_pane_t2

0x8a71,	// (0x0000aaa9) vtchi_query_pane_t3

0x0002,

0xfee1,	// (0x00011f19) vtchi_query_pane_t

0xe674,	// (0x000106ac) bg_button_pane_cp13

0x8a7f,	// (0x0000aab7) vtchi_button_pane_g1

0x8a87,	// (0x0000aabf) ituss_sks_pane_g1

0x8a92,	// (0x0000aaca) ituss_sks_pane_g2

0x0001,

0xfee8,	// (0x00011f20) ituss_sks_pane_g

0x8a9a,	// (0x0000aad2) ituss_sks_pane_t1

0x8aa8,	// (0x0000aae0) ituss_sks_pane_t2

0x0001,

0xfeed,	// (0x00011f25) ituss_sks_pane_t

0x3f5b,	// (0x00005f93) indicator_nsta_pane_cp_g1

0x3f63,	// (0x00005f9b) indicator_nsta_pane_cp_g2

0x3f6b,	// (0x00005fa3) indicator_nsta_pane_cp_g3

0x3f5b,	// (0x00005f93) indicator_nsta_pane_cp_g4

0x3f63,	// (0x00005f9b) indicator_nsta_pane_cp_g5

0x3f6b,	// (0x00005fa3) indicator_nsta_pane_cp_g6

0x0005,

0xfa9d,	// (0x00011ad5) indicator_nsta_pane_cp_g

0xdcf3,	// (0x0000fd2b) cell_graphic2_pane_t2_ParamLimits

0xdcf3,	// (0x0000fd2b) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x00011ddb) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x00011ddb) cell_graphic2_pane_t

0xdd2c,	// (0x0000fd64) cell_graphic2_control_pane_t1

0xa53f,	// (0x0000c577) signal_pane_g3_ParamLimits

0xa53f,	// (0x0000c577) signal_pane_g3

0xa553,	// (0x0000c58b) signal_pane_g4_ParamLimits

0xa553,	// (0x0000c58b) signal_pane_g4

0x8764,	// (0x0000a79c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8764,	// (0x0000a79c) cell_ai5_widget_list_row_pane_t3

0x88ea,	// (0x0000a922) cell_ituss_key_pane_t1_ParamLimits

0x88ea,	// (0x0000a922) cell_ituss_key_pane_t1

0x187d,	// (0x000038b5) form_field_data_wide_pane_vc_t2_ParamLimits

0x187d,	// (0x000038b5) form_field_data_wide_pane_vc_t2

0x1891,	// (0x000038c9) form_field_data_wide_pane_vc_t3_ParamLimits

0x1891,	// (0x000038c9) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x00011821) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x00011821) form_field_data_wide_pane_vc_t

0x3c22,	// (0x00005c5a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3c22,	// (0x00005c5a) form_field_slider_wide_pane_vc_t3

0x3d00,	// (0x00005d38) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3d00,	// (0x00005d38) form_field_popup_wide_pane_vc_t2

0x3d17,	// (0x00005d4f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3d17,	// (0x00005d4f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8c,	// (0x00011ac4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x00011ac4) form_field_popup_wide_pane_vc_t

0xe06c,	// (0x000100a4) aid_fshwr2_btn_pane_ParamLimits

0xe07e,	// (0x000100b6) aid_fshwr2_syb_pane_ParamLimits

0xe090,	// (0x000100c8) aid_fshwr2_txt_pane_ParamLimits

0xecb5,	// (0x00010ced) fshwr2_bg_pane_ParamLimits

0xe09f,	// (0x000100d7) fshwr2_func_candi_pane_ParamLimits

0xe0be,	// (0x000100f6) fshwr2_hwr_syb_pane_ParamLimits

0xe0d9,	// (0x00010111) fshwr2_icf_pane_ParamLimits

0x3b93,	// (0x00005bcb) list_double_graphic_pane_vc_g4_ParamLimits

0x3b93,	// (0x00005bcb) list_double_graphic_pane_vc_g4

0x88de,	// (0x0000a916) cell_ituss_key_pane_g3_ParamLimits

0x88de,	// (0x0000a916) cell_ituss_key_pane_g3

0x8998,	// (0x0000a9d0) cell_ituss_key_t5_ParamLimits

0x8998,	// (0x0000a9d0) cell_ituss_key_t5

0xe5a8,	// (0x000105e0) popup_fep_vkbss_window_ParamLimits

0x7aca,	// (0x00009b02) aid_cell_ai5_quarter

0xe655,	// (0x0001068d) icf_edit_indi_pane_t1_ParamLimits

0x9a21,	// (0x0000ba59) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9a21,	// (0x0000ba59) aid_tch_indicator_popup_pane_cp2

0x9a34,	// (0x0000ba6c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9a34,	// (0x0000ba6c) aid_tch_query_popup_data_pane_cp2

0x1c2b,	// (0x00003c63) aid_tch_query_popup_pane_ParamLimits

0x1c2b,	// (0x00003c63) aid_tch_query_popup_pane

0x1c2b,	// (0x00003c63) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1c2b,	// (0x00003c63) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

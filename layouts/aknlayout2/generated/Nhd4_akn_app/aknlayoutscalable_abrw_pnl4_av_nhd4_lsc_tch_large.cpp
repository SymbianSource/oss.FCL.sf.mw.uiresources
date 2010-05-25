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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005a894 };

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
0x9277,	// (0x00063b0b) Screen

0x9283,	// (0x00063b17) application_window_ParamLimits

0x9283,	// (0x00063b17) application_window

0x7eab,	// (0x0006273f) screen_g1

0x92bb,	// (0x00063b4f) area_bottom_pane_ParamLimits

0x92bb,	// (0x00063b4f) area_bottom_pane

0xee35,	// (0x000696c9) area_top_pane_ParamLimits

0xee35,	// (0x000696c9) area_top_pane

0xeed3,	// (0x00069767) main_pane_ParamLimits

0xeed3,	// (0x00069767) main_pane

0x7eb5,	// (0x00062749) misc_graphics

0xbcad,	// (0x00066541) battery_pane_ParamLimits

0xbcad,	// (0x00066541) battery_pane

0x2eec,	// (0x0005d780) bg_status_flat_pane_g8

0x2ef4,	// (0x0005d788) bg_status_flat_pane_g9

0x22da,	// (0x0005cb6e) context_pane_ParamLimits

0x22da,	// (0x0005cb6e) context_pane

0xbe18,	// (0x000666ac) navi_pane_ParamLimits

0xbe18,	// (0x000666ac) navi_pane

0xbe96,	// (0x0006672a) signal_pane_ParamLimits

0xbe96,	// (0x0006672a) signal_pane

0x0008,

0xf868,	// (0x0006a0fc) bg_status_flat_pane_g

0xbf26,	// (0x000667ba) status_pane_g1_ParamLimits

0xbf26,	// (0x000667ba) status_pane_g1

0xbf3c,	// (0x000667d0) status_pane_g2_ParamLimits

0xbf3c,	// (0x000667d0) status_pane_g2

0x2501,	// (0x0005cd95) status_pane_g3_ParamLimits

0x2501,	// (0x0005cd95) status_pane_g3

0x0004,

0xf79b,	// (0x0006a02f) status_pane_g_ParamLimits

0xf79b,	// (0x0006a02f) status_pane_g

0xbf48,	// (0x000667dc) title_pane_ParamLimits

0xbf48,	// (0x000667dc) title_pane

0xbfab,	// (0x0006683f) uni_indicator_pane_ParamLimits

0xbfab,	// (0x0006683f) uni_indicator_pane

0x2136,	// (0x0005c9ca) bg_list_pane_ParamLimits

0x2136,	// (0x0005c9ca) bg_list_pane

0xa870,	// (0x00065104) find_pane

0xa878,	// (0x0006510c) listscroll_app_pane_ParamLimits

0xa878,	// (0x0006510c) listscroll_app_pane

0x2162,	// (0x0005c9f6) listscroll_form_pane

0xa888,	// (0x0006511c) listscroll_gen_pane_ParamLimits

0xa888,	// (0x0006511c) listscroll_gen_pane

0x0112,	// (0x0005a9a6) listscroll_set_pane

0x3a50,	// (0x0005e2e4) main_idle_act_pane

0x1e36,	// (0x0005c6ca) main_idle_trad_pane

0x1e36,	// (0x0005c6ca) main_list_empty_pane

0x217c,	// (0x0005ca10) main_midp_pane

0x2188,	// (0x0005ca1c) main_pane_g1_ParamLimits

0x2188,	// (0x0005ca1c) main_pane_g1

0xa89c,	// (0x00065130) popup_ai_message_window_ParamLimits

0xa89c,	// (0x00065130) popup_ai_message_window

0xa94d,	// (0x000651e1) popup_fep_china_uni_window_ParamLimits

0xa94d,	// (0x000651e1) popup_fep_china_uni_window

0xa9a7,	// (0x0006523b) popup_fep_japan_candidate_window_ParamLimits

0xa9a7,	// (0x0006523b) popup_fep_japan_candidate_window

0xa9c5,	// (0x00065259) popup_fep_japan_predictive_window_ParamLimits

0xa9c5,	// (0x00065259) popup_fep_japan_predictive_window

0xa9d7,	// (0x0006526b) popup_find_window

0xa9f4,	// (0x00065288) popup_grid_graphic_window_ParamLimits

0xa9f4,	// (0x00065288) popup_grid_graphic_window

0xaa92,	// (0x00065326) popup_large_graphic_colour_window

0xaab8,	// (0x0006534c) popup_menu_window_ParamLimits

0xaab8,	// (0x0006534c) popup_menu_window

0xac8a,	// (0x0006551e) popup_note_image_window

0xac50,	// (0x000654e4) popup_note_wait_window_ParamLimits

0xac50,	// (0x000654e4) popup_note_wait_window

0xaca2,	// (0x00065536) popup_note_window_ParamLimits

0xaca2,	// (0x00065536) popup_note_window

0xad51,	// (0x000655e5) popup_query_code_window_ParamLimits

0xad51,	// (0x000655e5) popup_query_code_window

0xad8b,	// (0x0006561f) popup_query_data_code_window_ParamLimits

0xad8b,	// (0x0006561f) popup_query_data_code_window

0xada8,	// (0x0006563c) popup_query_data_window_ParamLimits

0xada8,	// (0x0006563c) popup_query_data_window

0xae2a,	// (0x000656be) popup_query_sat_info_window_ParamLimits

0xae2a,	// (0x000656be) popup_query_sat_info_window

0xaec1,	// (0x00065755) popup_snote_single_graphic_window_ParamLimits

0xaec1,	// (0x00065755) popup_snote_single_graphic_window

0xaec1,	// (0x00065755) popup_snote_single_text_window_ParamLimits

0xaec1,	// (0x00065755) popup_snote_single_text_window

0x057e,	// (0x0005ae12) popup_sub_window_general

0xb01e,	// (0x000658b2) popup_window_general_ParamLimits

0xb01e,	// (0x000658b2) popup_window_general

0x2196,	// (0x0005ca2a) power_save_pane

0xa6ce,	// (0x00064f62) control_pane_g1_ParamLimits

0xa6ce,	// (0x00064f62) control_pane_g1

0xa6f7,	// (0x00064f8b) control_pane_g2_ParamLimits

0xa6f7,	// (0x00064f8b) control_pane_g2

0x20f9,	// (0x0005c98d) control_pane_g3_ParamLimits

0x20f9,	// (0x0005c98d) control_pane_g3

0x0007,

0xf783,	// (0x0006a017) control_pane_g_ParamLimits

0xf783,	// (0x0006a017) control_pane_g

0xa75f,	// (0x00064ff3) control_pane_t1_ParamLimits

0xa75f,	// (0x00064ff3) control_pane_t1

0xa7c5,	// (0x00065059) control_pane_t2_ParamLimits

0xa7c5,	// (0x00065059) control_pane_t2

0x0002,

0xf794,	// (0x0006a028) control_pane_t_ParamLimits

0xf794,	// (0x0006a028) control_pane_t

0xa627,	// (0x00064ebb) navi_navi_volume_pane_cp1

0xa62f,	// (0x00064ec3) status_small_icon_pane

0x202e,	// (0x0005c8c2) status_small_pane_g1_ParamLimits

0x202e,	// (0x0005c8c2) status_small_pane_g1

0xa637,	// (0x00064ecb) status_small_pane_g2_ParamLimits

0xa637,	// (0x00064ecb) status_small_pane_g2

0xa643,	// (0x00064ed7) status_small_pane_g3_ParamLimits

0xa643,	// (0x00064ed7) status_small_pane_g3

0xa64f,	// (0x00064ee3) status_small_pane_g4_ParamLimits

0xa64f,	// (0x00064ee3) status_small_pane_g4

0xa65b,	// (0x00064eef) status_small_pane_g5_ParamLimits

0xa65b,	// (0x00064eef) status_small_pane_g5

0xa669,	// (0x00064efd) status_small_pane_g6_ParamLimits

0xa669,	// (0x00064efd) status_small_pane_g6

0x0007,

0xf772,	// (0x0006a006) status_small_pane_g_ParamLimits

0xf772,	// (0x0006a006) status_small_pane_g

0xa698,	// (0x00064f2c) status_small_pane_t1

0xa6ba,	// (0x00064f4e) status_small_wait_pane_ParamLimits

0xa6ba,	// (0x00064f4e) status_small_wait_pane

0xa303,	// (0x00064b97) aid_levels_signal_ParamLimits

0xa303,	// (0x00064b97) aid_levels_signal

0xa31b,	// (0x00064baf) signal_pane_g1_ParamLimits

0xa31b,	// (0x00064baf) signal_pane_g1

0xa336,	// (0x00064bca) signal_pane_g2_ParamLimits

0xa336,	// (0x00064bca) signal_pane_g2

0x0003,

0xf703,	// (0x00069f97) signal_pane_g_ParamLimits

0xf703,	// (0x00069f97) signal_pane_g

0xbbbd,	// (0x00066451) context_pane_g1

0x94b9,	// (0x00063d4d) title_pane_g1

0x94f0,	// (0x00063d84) title_pane_t1

0x7ecb,	// (0x0006275f) title_pane_t2

0x7ef1,	// (0x00062785) title_pane_t3

0x0002,

0xf557,	// (0x00069deb) title_pane_t

0xbfd3,	// (0x00066867) aid_levels_battery_ParamLimits

0xbfd3,	// (0x00066867) aid_levels_battery

0xbfef,	// (0x00066883) battery_pane_g1_ParamLimits

0xbfef,	// (0x00066883) battery_pane_g1

0xc00c,	// (0x000668a0) battery_pane_g2_ParamLimits

0xc00c,	// (0x000668a0) battery_pane_g2

0x0001,

0xf7a6,	// (0x0006a03a) battery_pane_g_ParamLimits

0xf7a6,	// (0x0006a03a) battery_pane_g

0xc5d2,	// (0x00066e66) uni_indicator_pane_g1

0xc5e8,	// (0x00066e7c) uni_indicator_pane_g2

0xc5fe,	// (0x00066e92) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x0006a1a4) uni_indicator_pane_g

0xf3d7,	// (0x00069c6b) navi_icon_pane_ParamLimits

0xf3d7,	// (0x00069c6b) navi_icon_pane

0xf32c,	// (0x00069bc0) navi_midp_pane

0xf3f3,	// (0x00069c87) navi_navi_pane

0xf3fd,	// (0x00069c91) navi_text_pane_ParamLimits

0xf3fd,	// (0x00069c91) navi_text_pane

0x7eab,	// (0x0006273f) status_small_wait_pane_g1

0x8142,	// (0x000629d6) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x0006a19f) status_small_wait_pane_g

0xc52b,	// (0x00066dbf) navi_navi_icon_text_pane

0x353f,	// (0x0005ddd3) navi_navi_pane_g1_ParamLimits

0x353f,	// (0x0005ddd3) navi_navi_pane_g1

0x3551,	// (0x0005dde5) navi_navi_pane_g2_ParamLimits

0x3551,	// (0x0005dde5) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x0006a16d) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x0006a16d) navi_navi_pane_g

0x3563,	// (0x0005ddf7) navi_navi_tabs_pane

0x356c,	// (0x0005de00) navi_navi_text_pane

0xc52b,	// (0x00066dbf) navi_navi_volume_pane

0x3513,	// (0x0005dda7) navi_text_pane_t1

0x3507,	// (0x0005dd9b) navi_icon_pane_g1

0x345a,	// (0x0005dcee) navi_navi_text_pane_t1

0xb0f1,	// (0x00065985) navi_navi_volume_pane_g1

0x0996,	// (0x0005b22a) volume_small_pane

0x33c0,	// (0x0005dc54) navi_navi_icon_text_pane_g1

0xc483,	// (0x00066d17) navi_navi_icon_text_pane_t1

0xf3f3,	// (0x00069c87) navi_tabs_2_long_pane

0xf3f3,	// (0x00069c87) navi_tabs_2_pane

0xf3f3,	// (0x00069c87) navi_tabs_3_long_pane

0xf3f3,	// (0x00069c87) navi_tabs_3_pane

0xf3f3,	// (0x00069c87) navi_tabs_4_pane

0x096e,	// (0x0005b202) tabs_2_active_pane_ParamLimits

0x096e,	// (0x0005b202) tabs_2_active_pane

0x097e,	// (0x0005b212) tabs_2_passive_pane_ParamLimits

0x097e,	// (0x0005b212) tabs_2_passive_pane

0x093c,	// (0x0005b1d0) tabs_3_active_pane_ParamLimits

0x093c,	// (0x0005b1d0) tabs_3_active_pane

0x094c,	// (0x0005b1e0) tabs_3_passive_pane_ParamLimits

0x094c,	// (0x0005b1e0) tabs_3_passive_pane

0x095d,	// (0x0005b1f1) tabs_3_passive_pane_cp_ParamLimits

0x095d,	// (0x0005b1f1) tabs_3_passive_pane_cp

0x08f8,	// (0x0005b18c) tabs_4_active_pane_ParamLimits

0x08f8,	// (0x0005b18c) tabs_4_active_pane

0x0909,	// (0x0005b19d) tabs_4_passive_pane_ParamLimits

0x0909,	// (0x0005b19d) tabs_4_passive_pane

0x091a,	// (0x0005b1ae) tabs_4_passive_pane_cp_ParamLimits

0x091a,	// (0x0005b1ae) tabs_4_passive_pane_cp

0x092b,	// (0x0005b1bf) tabs_4_passive_pane_cp2_ParamLimits

0x092b,	// (0x0005b1bf) tabs_4_passive_pane_cp2

0x08d4,	// (0x0005b168) tabs_2_long_active_pane_ParamLimits

0x08d4,	// (0x0005b168) tabs_2_long_active_pane

0x08e6,	// (0x0005b17a) tabs_2_long_passive_pane_ParamLimits

0x08e6,	// (0x0005b17a) tabs_2_long_passive_pane

0x088f,	// (0x0005b123) tabs_3_long_active_pane_ParamLimits

0x088f,	// (0x0005b123) tabs_3_long_active_pane

0x08a8,	// (0x0005b13c) tabs_3_long_passive_pane_ParamLimits

0x08a8,	// (0x0005b13c) tabs_3_long_passive_pane

0x08bb,	// (0x0005b14f) tabs_3_long_passive_pane_cp_ParamLimits

0x08bb,	// (0x0005b14f) tabs_3_long_passive_pane_cp

0x0835,	// (0x0005b0c9) volume_small_pane_g1

0x083e,	// (0x0005b0d2) volume_small_pane_g2

0x0847,	// (0x0005b0db) volume_small_pane_g3

0x0850,	// (0x0005b0e4) volume_small_pane_g4

0x0859,	// (0x0005b0ed) volume_small_pane_g5

0x0862,	// (0x0005b0f6) volume_small_pane_g6

0x086b,	// (0x0005b0ff) volume_small_pane_g7

0x0874,	// (0x0005b108) volume_small_pane_g8

0x087d,	// (0x0005b111) volume_small_pane_g9

0x0886,	// (0x0005b11a) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x0006a139) volume_small_pane_g

0x802d,	// (0x000628c1) bg_active_tab_pane_cp2_ParamLimits

0x802d,	// (0x000628c1) bg_active_tab_pane_cp2

0x957c,	// (0x00063e10) tabs_3_active_pane_g1

0x9584,	// (0x00063e18) tabs_3_active_pane_t1

0x802d,	// (0x000628c1) bg_passive_tab_pane_cp2_ParamLimits

0x802d,	// (0x000628c1) bg_passive_tab_pane_cp2

0x957c,	// (0x00063e10) tabs_3_passive_pane_g1

0x9584,	// (0x00063e18) tabs_3_passive_pane_t1

0x802d,	// (0x000628c1) bg_active_tab_pane_cp3_ParamLimits

0x802d,	// (0x000628c1) bg_active_tab_pane_cp3

0x9596,	// (0x00063e2a) tabs_4_active_pane_g1

0x959e,	// (0x00063e32) tabs_4_active_pane_t1

0x802d,	// (0x000628c1) bg_passive_tab_pane_cp3_ParamLimits

0x802d,	// (0x000628c1) bg_passive_tab_pane_cp3

0x9596,	// (0x00063e2a) tabs_4_1_passive_pane_g1

0x959e,	// (0x00063e32) tabs_4_1_passive_pane_t1

0x217c,	// (0x0005ca10) list_highlight_pane_cp2

0xc704,	// (0x00066f98) list_set_pane_ParamLimits

0xc704,	// (0x00066f98) list_set_pane

0xc79e,	// (0x00067032) main_pane_set_t1_ParamLimits

0xc79e,	// (0x00067032) main_pane_set_t1

0xc7be,	// (0x00067052) main_pane_set_t2_ParamLimits

0xc7be,	// (0x00067052) main_pane_set_t2

0xc7d2,	// (0x00067066) main_pane_set_t3_ParamLimits

0xc7d2,	// (0x00067066) main_pane_set_t3

0xc7e4,	// (0x00067078) main_pane_set_t4_ParamLimits

0xc7e4,	// (0x00067078) main_pane_set_t4

0x0003,

0xf975,	// (0x0006a209) main_pane_set_t_ParamLimits

0xf975,	// (0x0006a209) main_pane_set_t

0xc7f6,	// (0x0006708a) setting_code_pane

0xc800,	// (0x00067094) setting_slider_graphic_pane

0xc800,	// (0x00067094) setting_slider_pane

0xc800,	// (0x00067094) setting_text_pane

0xc800,	// (0x00067094) setting_volume_pane

0x95b0,	// (0x00063e44) volume_set_pane

0x7f03,	// (0x00062797) bg_set_opt_pane_cp

0x95b8,	// (0x00063e4c) setting_slider_pane_t1

0x95d1,	// (0x00063e65) setting_slider_pane_t2

0x95eb,	// (0x00063e7f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00069df2) setting_slider_pane_t

0x9603,	// (0x00063e97) slider_set_pane

0x7eb5,	// (0x00062749) bg_set_opt_pane_cp2

0x7f11,	// (0x000627a5) setting_slider_graphic_pane_g1

0x9619,	// (0x00063ead) setting_slider_graphic_pane_t1

0x9629,	// (0x00063ebd) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00069df9) setting_slider_graphic_pane_t

0x9639,	// (0x00063ecd) slider_set_pane_cp

0x7eb5,	// (0x00062749) input_focus_pane_cp1

0x3a37,	// (0x0005e2cb) list_set_text_pane

0x7eab,	// (0x0006273f) setting_text_pane_g1

0x7eb5,	// (0x00062749) input_focus_pane_cp2

0x7eab,	// (0x0006273f) setting_code_pane_g1

0x7f1a,	// (0x000627ae) setting_code_pane_t1

0xdbb2,	// (0x00068446) set_text_pane_t1_ParamLimits

0xdbb2,	// (0x00068446) set_text_pane_t1

0x8516,	// (0x00062daa) set_opt_bg_pane_g1

0x851e,	// (0x00062db2) set_opt_bg_pane_g2

0xc6b9,	// (0x00066f4d) set_opt_bg_pane_g3

0x852e,	// (0x00062dc2) set_opt_bg_pane_g4

0x8536,	// (0x00062dca) set_opt_bg_pane_g5

0x853e,	// (0x00062dd2) set_opt_bg_pane_g6

0xc6c3,	// (0x00066f57) set_opt_bg_pane_g7

0xc6cb,	// (0x00066f5f) set_opt_bg_pane_g8

0xc6d5,	// (0x00066f69) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x0006a1f6) set_opt_bg_pane_g

0xc6ac,	// (0x00066f40) slider_set_pane_g1

0x0a15,	// (0x0005b2a9) slider_set_pane_g2

0x0006,

0xf953,	// (0x0006a1e7) slider_set_pane_g

0xb0f9,	// (0x0006598d) volume_set_pane_g1

0xb101,	// (0x00065995) volume_set_pane_g2

0xb109,	// (0x0006599d) volume_set_pane_g3

0xb111,	// (0x000659a5) volume_set_pane_g4

0xb119,	// (0x000659ad) volume_set_pane_g5

0xb121,	// (0x000659b5) volume_set_pane_g6

0xb129,	// (0x000659bd) volume_set_pane_g7

0xb131,	// (0x000659c5) volume_set_pane_g8

0xb139,	// (0x000659cd) volume_set_pane_g9

0xb141,	// (0x000659d5) volume_set_pane_g10

0x0009,

0xf92b,	// (0x0006a1bf) volume_set_pane_g

0x9641,	// (0x00063ed5) indicator_pane_ParamLimits

0x9641,	// (0x00063ed5) indicator_pane

0x9669,	// (0x00063efd) main_idle_pane_g2_ParamLimits

0x9669,	// (0x00063efd) main_idle_pane_g2

0x96a1,	// (0x00063f35) main_pane_idle_g1_ParamLimits

0x96a1,	// (0x00063f35) main_pane_idle_g1

0x7f28,	// (0x000627bc) popup_clock_digital_analogue_window_ParamLimits

0x7f28,	// (0x000627bc) popup_clock_digital_analogue_window

0x96c8,	// (0x00063f5c) soft_indicator_pane_ParamLimits

0x96c8,	// (0x00063f5c) soft_indicator_pane

0x96ec,	// (0x00063f80) wallpaper_pane_ParamLimits

0x96ec,	// (0x00063f80) wallpaper_pane

0x7eab,	// (0x0006273f) wallpaper_pane_g1

0x96fe,	// (0x00063f92) indicator_pane_g1_ParamLimits

0x96fe,	// (0x00063f92) indicator_pane_g1

0x4003,	// (0x0005e897) navi_navi_icon_text_pane_srt_g1

0x7f56,	// (0x000627ea) soft_indicator_pane_t1

0x7f70,	// (0x00062804) aid_ps_area_pane

0x9714,	// (0x00063fa8) aid_ps_clock_pane

0x7f81,	// (0x00062815) aid_ps_indicator_pane

0x7f8d,	// (0x00062821) indicator_ps_pane_ParamLimits

0x7f8d,	// (0x00062821) indicator_ps_pane

0x7f9c,	// (0x00062830) power_save_pane_g1_ParamLimits

0x7f9c,	// (0x00062830) power_save_pane_g1

0x7fa8,	// (0x0006283c) power_save_pane_g2_ParamLimits

0x7fa8,	// (0x0006283c) power_save_pane_g2

0xdb92,	// (0x00068426) aid_navinavi_width_pane

0x7f70,	// (0x00062804) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00069dfe) power_save_pane_g_ParamLimits

0xf56a,	// (0x00069dfe) power_save_pane_g

0x7fb6,	// (0x0006284a) power_save_pane_t1_ParamLimits

0x7fb6,	// (0x0006284a) power_save_pane_t1

0x9714,	// (0x00063fa8) aid_ps_clock_pane_ParamLimits

0x7f81,	// (0x00062815) aid_ps_indicator_pane_ParamLimits

0x7fc8,	// (0x0006285c) power_save_pane_t4_ParamLimits

0x7fc8,	// (0x0006285c) power_save_pane_t4

0x0001,

0xf56f,	// (0x00069e03) power_save_pane_t_ParamLimits

0xf56f,	// (0x00069e03) power_save_pane_t

0x7ff2,	// (0x00062886) power_save_t3_ParamLimits

0x7ff2,	// (0x00062886) power_save_t3

0x7fdd,	// (0x00062871) power_save_t2_ParamLimits

0x7fdd,	// (0x00062871) power_save_t2

0x8007,	// (0x0006289b) indicator_ps_pane_g1

0x9722,	// (0x00063fb6) ai_gene_pane_ParamLimits

0x9722,	// (0x00063fb6) ai_gene_pane

0x9739,	// (0x00063fcd) ai_links_pane_ParamLimits

0x9739,	// (0x00063fcd) ai_links_pane

0x9751,	// (0x00063fe5) indicator_pane_cp1_ParamLimits

0x9751,	// (0x00063fe5) indicator_pane_cp1

0x9760,	// (0x00063ff4) main_pane_idle_g1_cp_ParamLimits

0x9760,	// (0x00063ff4) main_pane_idle_g1_cp

0x9778,	// (0x0006400c) popup_ai_links_title_window

0x9781,	// (0x00064015) soft_indicator_pane_cp1_ParamLimits

0x9781,	// (0x00064015) soft_indicator_pane_cp1

0x37fe,	// (0x0005e092) ai_links_pane_g1

0x3807,	// (0x0005e09b) grid_ai_links_pane

0xc5c9,	// (0x00066e5d) ai_gene_pane_1

0x37ec,	// (0x0005e080) ai_gene_pane_2

0x37f5,	// (0x0005e089) list_highlight_pane_cp4

0xc5a5,	// (0x00066e39) cell_ai_link_pane_ParamLimits

0xc5a5,	// (0x00066e39) cell_ai_link_pane

0x37bd,	// (0x0005e051) cell_ai_link_pane_g1

0x8142,	// (0x000629d6) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x0006a19a) cell_ai_link_pane_g

0x7eb5,	// (0x00062749) grid_highlight_cp2

0x7eb5,	// (0x00062749) bg_popup_sub_pane_cp1

0x801e,	// (0x000628b2) popup_ai_links_title_window_t1

0x370d,	// (0x0005dfa1) ai_gene_pane_1_g1_ParamLimits

0x370d,	// (0x0005dfa1) ai_gene_pane_1_g1

0x3719,	// (0x0005dfad) ai_gene_pane_1_g2_ParamLimits

0x3719,	// (0x0005dfad) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x0006a190) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x0006a190) ai_gene_pane_1_g

0x3726,	// (0x0005dfba) ai_gene_pane_1_t1_ParamLimits

0x3726,	// (0x0005dfba) ai_gene_pane_1_t1

0x375a,	// (0x0005dfee) grid_ai_soft_ind_pane

0x36f8,	// (0x0005df8c) ai_gene_pane_2_t1_ParamLimits

0x36f8,	// (0x0005df8c) ai_gene_pane_2_t1

0x9795,	// (0x00064029) main_pane_empty_t1_ParamLimits

0x9795,	// (0x00064029) main_pane_empty_t1

0x97ad,	// (0x00064041) main_pane_empty_t2_ParamLimits

0x97ad,	// (0x00064041) main_pane_empty_t2

0x97c2,	// (0x00064056) main_pane_empty_t3_ParamLimits

0x97c2,	// (0x00064056) main_pane_empty_t3

0x97d4,	// (0x00064068) main_pane_empty_t4_ParamLimits

0x97d4,	// (0x00064068) main_pane_empty_t4

0x97e6,	// (0x0006407a) main_pane_empty_t5_ParamLimits

0x97e6,	// (0x0006407a) main_pane_empty_t5

0x0004,

0xf574,	// (0x00069e08) main_pane_empty_t_ParamLimits

0xf574,	// (0x00069e08) main_pane_empty_t

0x8567,	// (0x00062dfb) bg_popup_window_pane_ParamLimits

0x8567,	// (0x00062dfb) bg_popup_window_pane

0xc51f,	// (0x00066db3) find_popup_pane_cp2_ParamLimits

0xc51f,	// (0x00066db3) find_popup_pane_cp2

0x3474,	// (0x0005dd08) heading_pane_ParamLimits

0x3474,	// (0x0005dd08) heading_pane

0x7eb5,	// (0x00062749) bg_popup_sub_pane

0xc4a0,	// (0x00066d34) bg_popup_window_pane_g1_ParamLimits

0xc4a0,	// (0x00066d34) bg_popup_window_pane_g1

0xc4af,	// (0x00066d43) bg_popup_window_pane_g2_ParamLimits

0xc4af,	// (0x00066d43) bg_popup_window_pane_g2

0xc4bb,	// (0x00066d4f) bg_popup_window_pane_g3_ParamLimits

0xc4bb,	// (0x00066d4f) bg_popup_window_pane_g3

0xc4c7,	// (0x00066d5b) bg_popup_window_pane_g4_ParamLimits

0xc4c7,	// (0x00066d5b) bg_popup_window_pane_g4

0xc4d6,	// (0x00066d6a) bg_popup_window_pane_g5_ParamLimits

0xc4d6,	// (0x00066d6a) bg_popup_window_pane_g5

0xc4e6,	// (0x00066d7a) bg_popup_window_pane_g6_ParamLimits

0xc4e6,	// (0x00066d7a) bg_popup_window_pane_g6

0xc4f2,	// (0x00066d86) bg_popup_window_pane_g7_ParamLimits

0xc4f2,	// (0x00066d86) bg_popup_window_pane_g7

0xc501,	// (0x00066d95) bg_popup_window_pane_g8_ParamLimits

0xc501,	// (0x00066d95) bg_popup_window_pane_g8

0xc510,	// (0x00066da4) bg_popup_window_pane_g9_ParamLimits

0xc510,	// (0x00066da4) bg_popup_window_pane_g9

0x344e,	// (0x0005dce2) bg_popup_window_pane_g10_ParamLimits

0x344e,	// (0x0005dce2) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x0006a158) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x0006a158) bg_popup_window_pane_g

0x3377,	// (0x0005dc0b) bg_popup_heading_pane_ParamLimits

0x3377,	// (0x0005dc0b) bg_popup_heading_pane

0x0b1c,	// (0x0005b3b0) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b1c,	// (0x0005b3b0) tabs_4_passive_pane_cp_srt

0x0b2e,	// (0x0005b3c2) tabs_4_passive_pane_srt_ParamLimits

0x338b,	// (0x0005dc1f) heading_pane_g2

0x0b2e,	// (0x0005b3c2) tabs_4_passive_pane_srt

0x2715,	// (0x0005cfa9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2715,	// (0x0005cfa9) bg_passive_tab_pane_cp3_srt

0x3393,	// (0x0005dc27) heading_pane_t1_ParamLimits

0x3393,	// (0x0005dc27) heading_pane_t1

0x33aa,	// (0x0005dc3e) heading_pane_t2_ParamLimits

0x33aa,	// (0x0005dc3e) heading_pane_t2

0x0001,

0xf8bf,	// (0x0006a153) heading_pane_t_ParamLimits

0xf8bf,	// (0x0006a153) heading_pane_t

0x2eb4,	// (0x0005d748) bg_popup_heading_pane_g1

0x2f63,	// (0x0005d7f7) bg_popup_heading_pane_g2

0x2f6d,	// (0x0005d801) bg_popup_heading_pane_g3

0x2f77,	// (0x0005d80b) bg_popup_heading_pane_g4

0x2f81,	// (0x0005d815) bg_popup_heading_pane_g5

0x2f8b,	// (0x0005d81f) bg_popup_heading_pane_g6

0x2f93,	// (0x0005d827) bg_popup_heading_pane_g7

0x2f9b,	// (0x0005d82f) bg_popup_heading_pane_g8

0x2fa5,	// (0x0005d839) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x0006a10f) bg_popup_heading_pane_g

0x2689,	// (0x0005cf1d) bg_popup_sub_pane_g1

0x2699,	// (0x0005cf2d) bg_popup_sub_pane_g2

0x2691,	// (0x0005cf25) bg_popup_sub_pane_g3

0x26a9,	// (0x0005cf3d) bg_popup_sub_pane_g4

0x26a1,	// (0x0005cf35) bg_popup_sub_pane_g5

0x26b1,	// (0x0005cf45) bg_popup_sub_pane_g6

0x26b9,	// (0x0005cf4d) bg_popup_sub_pane_g7

0x26c9,	// (0x0005cf5d) bg_popup_sub_pane_g8

0x26c1,	// (0x0005cf55) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x0006a0e9) bg_popup_sub_pane_g

0x802d,	// (0x000628c1) bg_popup_window_pane_cp5_ParamLimits

0x802d,	// (0x000628c1) bg_popup_window_pane_cp5

0x8049,	// (0x000628dd) popup_note_window_g1_ParamLimits

0x8049,	// (0x000628dd) popup_note_window_g1

0x8055,	// (0x000628e9) popup_note_window_t1_ParamLimits

0x8055,	// (0x000628e9) popup_note_window_t1

0x806b,	// (0x000628ff) popup_note_window_t2_ParamLimits

0x806b,	// (0x000628ff) popup_note_window_t2

0x8081,	// (0x00062915) popup_note_window_t3_ParamLimits

0x8081,	// (0x00062915) popup_note_window_t3

0x8097,	// (0x0006292b) popup_note_window_t4_ParamLimits

0x8097,	// (0x0006292b) popup_note_window_t4

0x80bf,	// (0x00062953) popup_note_window_t5_ParamLimits

0x80bf,	// (0x00062953) popup_note_window_t5

0x0004,

0xf57f,	// (0x00069e13) popup_note_window_t_ParamLimits

0xf57f,	// (0x00069e13) popup_note_window_t

0x80e3,	// (0x00062977) bg_popup_window_pane_cp6_ParamLimits

0x80e3,	// (0x00062977) bg_popup_window_pane_cp6

0x2e30,	// (0x0005d6c4) popup_note_image_window_g1_ParamLimits

0x2e30,	// (0x0005d6c4) popup_note_image_window_g1

0xc345,	// (0x00066bd9) popup_note_image_window_g2_ParamLimits

0xc345,	// (0x00066bd9) popup_note_image_window_g2

0x0001,

0xf849,	// (0x0006a0dd) popup_note_image_window_g_ParamLimits

0xf849,	// (0x0006a0dd) popup_note_image_window_g

0x2e55,	// (0x0005d6e9) popup_note_image_window_t1_ParamLimits

0x2e55,	// (0x0005d6e9) popup_note_image_window_t1

0x2e6e,	// (0x0005d702) popup_note_image_window_t2_ParamLimits

0x2e6e,	// (0x0005d702) popup_note_image_window_t2

0x2e87,	// (0x0005d71b) popup_note_image_window_t3_ParamLimits

0x2e87,	// (0x0005d71b) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x0006a0e2) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x0006a0e2) popup_note_image_window_t

0x2cf9,	// (0x0005d58d) bg_popup_window_pane_cp7_ParamLimits

0x2cf9,	// (0x0005d58d) bg_popup_window_pane_cp7

0x2d29,	// (0x0005d5bd) popup_note_wait_window_g1_ParamLimits

0x2d29,	// (0x0005d5bd) popup_note_wait_window_g1

0x2d35,	// (0x0005d5c9) popup_note_wait_window_g2_ParamLimits

0x2d35,	// (0x0005d5c9) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x0006a0cb) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x0006a0cb) popup_note_wait_window_g

0x2d4d,	// (0x0005d5e1) popup_note_wait_window_t1_ParamLimits

0x2d4d,	// (0x0005d5e1) popup_note_wait_window_t1

0xc2e6,	// (0x00066b7a) popup_note_wait_window_t2_ParamLimits

0xc2e6,	// (0x00066b7a) popup_note_wait_window_t2

0xc303,	// (0x00066b97) popup_note_wait_window_t3_ParamLimits

0xc303,	// (0x00066b97) popup_note_wait_window_t3

0xc316,	// (0x00066baa) popup_note_wait_window_t4_ParamLimits

0xc316,	// (0x00066baa) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x0006a0d2) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x0006a0d2) popup_note_wait_window_t

0x2dc9,	// (0x0005d65d) wait_bar_pane_ParamLimits

0x2dc9,	// (0x0005d65d) wait_bar_pane

0x7eb5,	// (0x00062749) wait_anim_pane

0x7eb5,	// (0x00062749) wait_border_pane

0x7eab,	// (0x0006273f) wait_anim_pane_g1

0x7eab,	// (0x0006273f) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00069f92) wait_anim_pane_g

0x2ca5,	// (0x0005d539) wait_border_pane_g1

0x2cb0,	// (0x0005d544) wait_border_pane_g2

0x2cb9,	// (0x0005d54d) wait_border_pane_g3

0x0002,

0xf830,	// (0x0006a0c4) wait_border_pane_g

0x2b10,	// (0x0005d3a4) bg_popup_window_pane_cp16_ParamLimits

0x2b10,	// (0x0005d3a4) bg_popup_window_pane_cp16

0xc296,	// (0x00066b2a) indicator_popup_pane_cp4_ParamLimits

0xc296,	// (0x00066b2a) indicator_popup_pane_cp4

0x2c24,	// (0x0005d4b8) popup_query_data_window_t1_ParamLimits

0x2c24,	// (0x0005d4b8) popup_query_data_window_t1

0x2c36,	// (0x0005d4ca) popup_query_data_window_t2_ParamLimits

0x2c36,	// (0x0005d4ca) popup_query_data_window_t2

0x2c4f,	// (0x0005d4e3) popup_query_data_window_t3_ParamLimits

0x2c4f,	// (0x0005d4e3) popup_query_data_window_t3

0x0002,

0xf829,	// (0x0006a0bd) popup_query_data_window_t_ParamLimits

0xf829,	// (0x0006a0bd) popup_query_data_window_t

0xc2aa,	// (0x00066b3e) query_popup_data_pane_ParamLimits

0xc2aa,	// (0x00066b3e) query_popup_data_pane

0xc2be,	// (0x00066b52) query_popup_data_pane_cp1_ParamLimits

0xc2be,	// (0x00066b52) query_popup_data_pane_cp1

0x2b10,	// (0x0005d3a4) bg_popup_window_pane_cp10_ParamLimits

0x2b10,	// (0x0005d3a4) bg_popup_window_pane_cp10

0xc211,	// (0x00066aa5) indicator_popup_pane_ParamLimits

0xc211,	// (0x00066aa5) indicator_popup_pane

0xc233,	// (0x00066ac7) popup_query_code_window_t1_ParamLimits

0xc233,	// (0x00066ac7) popup_query_code_window_t1

0xc24d,	// (0x00066ae1) popup_query_code_window_t2_ParamLimits

0xc24d,	// (0x00066ae1) popup_query_code_window_t2

0x2bc7,	// (0x0005d45b) popup_query_code_window_t3_ParamLimits

0x2bc7,	// (0x0005d45b) popup_query_code_window_t3

0x0002,

0xf822,	// (0x0006a0b6) popup_query_code_window_t_ParamLimits

0xf822,	// (0x0006a0b6) popup_query_code_window_t

0x2bf6,	// (0x0005d48a) query_popup_pane_ParamLimits

0x2bf6,	// (0x0005d48a) query_popup_pane

0x80e3,	// (0x00062977) bg_popup_window_pane_cp15_ParamLimits

0x80e3,	// (0x00062977) bg_popup_window_pane_cp15

0x97f8,	// (0x0006408c) indicator_popup_pane_cp1_ParamLimits

0x97f8,	// (0x0006408c) indicator_popup_pane_cp1

0x980b,	// (0x0006409f) indicator_popup_pane_cp2_ParamLimits

0x980b,	// (0x0006409f) indicator_popup_pane_cp2

0x981e,	// (0x000640b2) popup_query_data_code_window_g1_ParamLimits

0x981e,	// (0x000640b2) popup_query_data_code_window_g1

0x8101,	// (0x00062995) popup_query_data_code_window_t1_ParamLimits

0x8101,	// (0x00062995) popup_query_data_code_window_t1

0x8113,	// (0x000629a7) popup_query_data_code_window_t2_ParamLimits

0x8113,	// (0x000629a7) popup_query_data_code_window_t2

0x9831,	// (0x000640c5) popup_query_data_code_window_t3_ParamLimits

0x9831,	// (0x000640c5) popup_query_data_code_window_t3

0x9847,	// (0x000640db) popup_query_data_code_window_t4_ParamLimits

0x9847,	// (0x000640db) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00069e1e) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00069e1e) popup_query_data_code_window_t

0x0718,	// (0x0005afac) list_single_midp_graphic_pane_g3

0x985f,	// (0x000640f3) query_popup_data_pane_cp2_ParamLimits

0x9872,	// (0x00064106) query_popup_pane_cp2_ParamLimits

0x9872,	// (0x00064106) query_popup_pane_cp2

0x7eb5,	// (0x00062749) bg_popup_window_pane_cp11

0x2b08,	// (0x0005d39c) heading_pane_cp5

0x816f,	// (0x00062a03) listscroll_popup_info_pane

0x7eb5,	// (0x00062749) input_focus_pane_cp3

0x8125,	// (0x000629b9) query_popup_pane_t1

0x8133,	// (0x000629c7) list_popup_info_pane_ParamLimits

0x8133,	// (0x000629c7) list_popup_info_pane

0x8142,	// (0x000629d6) listscroll_popup_info_pane_g1

0x814a,	// (0x000629de) scroll_pane_cp7

0x9885,	// (0x00064119) popup_info_list_pane_t1_ParamLimits

0x9885,	// (0x00064119) popup_info_list_pane_t1

0x989f,	// (0x00064133) popup_info_list_pane_t2_ParamLimits

0x989f,	// (0x00064133) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00069e27) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00069e27) popup_info_list_pane_t

0x7eb5,	// (0x00062749) bg_popup_window_pane_cp12

0xc9e2,	// (0x00067276) find_popup_pane

0x7f03,	// (0x00062797) bg_popup_window_pane_cp3

0x8154,	// (0x000629e8) heading_pane_cp3

0x8160,	// (0x000629f4) listscroll_popup_graphic_pane

0x7eb5,	// (0x00062749) bg_popup_window_pane_cp4

0x9909,	// (0x0006419d) heading_pane_cp4

0x816f,	// (0x00062a03) listscroll_popup_colour_pane

0x9911,	// (0x000641a5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9911,	// (0x000641a5) cell_large_graphic_colour_none_popup_pane

0x9925,	// (0x000641b9) grid_large_graphic_colour_popup_pane_ParamLimits

0x9925,	// (0x000641b9) grid_large_graphic_colour_popup_pane

0x9949,	// (0x000641dd) listscroll_popup_colour_pane_g1_ParamLimits

0x9949,	// (0x000641dd) listscroll_popup_colour_pane_g1

0x9960,	// (0x000641f4) listscroll_popup_colour_pane_g2_ParamLimits

0x9960,	// (0x000641f4) listscroll_popup_colour_pane_g2

0x9977,	// (0x0006420b) listscroll_popup_colour_pane_g3_ParamLimits

0x9977,	// (0x0006420b) listscroll_popup_colour_pane_g3

0x9987,	// (0x0006421b) listscroll_popup_colour_pane_g4_ParamLimits

0x9987,	// (0x0006421b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00069e2c) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00069e2c) listscroll_popup_colour_pane_g

0x8177,	// (0x00062a0b) scroll_pane_cp6_ParamLimits

0x8177,	// (0x00062a0b) scroll_pane_cp6

0x9997,	// (0x0006422b) cell_large_graphic_colour_popup_pane_ParamLimits

0x9997,	// (0x0006422b) cell_large_graphic_colour_popup_pane

0x99b6,	// (0x0006424a) cell_large_graphic_colour_none_popup_pane_t1

0x7eb5,	// (0x00062749) grid_highlight_pane_cp5

0x8189,	// (0x00062a1d) cell_large_graphic_colour_popup_pane_g1

0x8191,	// (0x00062a25) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00069e35) cell_large_graphic_colour_popup_pane_g

0x8199,	// (0x00062a2d) cell_large_graphic_colour_popup_pane_g2_copy1

0x81a2,	// (0x00062a36) grid_highlight_pane_cp4

0x81aa,	// (0x00062a3e) bg_popup_window_pane_cp8_ParamLimits

0x81aa,	// (0x00062a3e) bg_popup_window_pane_cp8

0x99c5,	// (0x00064259) popup_snote_single_text_window_g1_ParamLimits

0x99c5,	// (0x00064259) popup_snote_single_text_window_g1

0x99d7,	// (0x0006426b) popup_snote_single_text_window_t1_ParamLimits

0x99d7,	// (0x0006426b) popup_snote_single_text_window_t1

0x99ea,	// (0x0006427e) popup_snote_single_text_window_t2_ParamLimits

0x99ea,	// (0x0006427e) popup_snote_single_text_window_t2

0x99fd,	// (0x00064291) popup_snote_single_text_window_t3_ParamLimits

0x99fd,	// (0x00064291) popup_snote_single_text_window_t3

0x9a36,	// (0x000642ca) popup_snote_single_text_window_t4_ParamLimits

0x9a36,	// (0x000642ca) popup_snote_single_text_window_t4

0x9a6a,	// (0x000642fe) popup_snote_single_text_window_t5_ParamLimits

0x9a6a,	// (0x000642fe) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00069e3a) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00069e3a) popup_snote_single_text_window_t

0x81c5,	// (0x00062a59) bg_popup_window_pane_cp9_ParamLimits

0x81c5,	// (0x00062a59) bg_popup_window_pane_cp9

0x99c5,	// (0x00064259) popup_snote_single_graphic_window_g1_ParamLimits

0x99c5,	// (0x00064259) popup_snote_single_graphic_window_g1

0x81d3,	// (0x00062a67) popup_snote_single_graphic_window_g2_ParamLimits

0x81d3,	// (0x00062a67) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00069e45) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00069e45) popup_snote_single_graphic_window_g

0x81df,	// (0x00062a73) popup_snote_single_graphic_window_t1_ParamLimits

0x81df,	// (0x00062a73) popup_snote_single_graphic_window_t1

0x81f2,	// (0x00062a86) popup_snote_single_graphic_window_t2_ParamLimits

0x81f2,	// (0x00062a86) popup_snote_single_graphic_window_t2

0x99fd,	// (0x00064291) popup_snote_single_graphic_window_t3_ParamLimits

0x99fd,	// (0x00064291) popup_snote_single_graphic_window_t3

0x9a36,	// (0x000642ca) popup_snote_single_graphic_window_t4_ParamLimits

0x9a36,	// (0x000642ca) popup_snote_single_graphic_window_t4

0x9a99,	// (0x0006432d) popup_snote_single_graphic_window_t5_ParamLimits

0x9a99,	// (0x0006432d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00069e4a) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00069e4a) popup_snote_single_graphic_window_t

0x3f5f,	// (0x0005e7f3) grid_graphic_popup_pane_ParamLimits

0x3f5f,	// (0x0005e7f3) grid_graphic_popup_pane

0x3f89,	// (0x0005e81d) listscroll_popup_graphic_pane_g1_ParamLimits

0x3f89,	// (0x0005e81d) listscroll_popup_graphic_pane_g1

0xc980,	// (0x00067214) listscroll_popup_graphic_pane_g2_ParamLimits

0xc980,	// (0x00067214) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x0006a233) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x0006a233) listscroll_popup_graphic_pane_g

0x3fb1,	// (0x0005e845) scroll_pane_cp5

0xc925,	// (0x000671b9) cell_graphic_popup_pane_ParamLimits

0xc925,	// (0x000671b9) cell_graphic_popup_pane

0x3edf,	// (0x0005e773) cell_graphic_popup_pane_g1

0x3ee7,	// (0x0005e77b) cell_graphic_popup_pane_g2

0x8199,	// (0x00062a2d) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x0006a22c) cell_graphic_popup_pane_g

0x3ef0,	// (0x0005e784) cell_graphic_popup_pane_t2

0x81a2,	// (0x00062a36) grid_highlight_pane_cp3

0x8217,	// (0x00062aab) list_gen_pane_ParamLimits

0x8217,	// (0x00062aab) list_gen_pane

0x823f,	// (0x00062ad3) scroll_pane

0xc88f,	// (0x00067123) bg_list_pane_g1_ParamLimits

0xc88f,	// (0x00067123) bg_list_pane_g1

0xc8aa,	// (0x0006713e) bg_list_pane_g2_ParamLimits

0xc8aa,	// (0x0006713e) bg_list_pane_g2

0xc8bd,	// (0x00067151) bg_list_pane_g3_ParamLimits

0xc8bd,	// (0x00067151) bg_list_pane_g3

0xc8cf,	// (0x00067163) bg_list_pane_g4_ParamLimits

0xc8cf,	// (0x00067163) bg_list_pane_g4

0xc8e1,	// (0x00067175) bg_list_pane_g5_ParamLimits

0xc8e1,	// (0x00067175) bg_list_pane_g5

0x0004,

0xf98d,	// (0x0006a221) bg_list_pane_g_ParamLimits

0xf98d,	// (0x0006a221) bg_list_pane_g

0xc833,	// (0x000670c7) list_double2_graphic_large_graphic_pane_ParamLimits

0xc833,	// (0x000670c7) list_double2_graphic_large_graphic_pane

0xc833,	// (0x000670c7) list_double2_graphic_pane_ParamLimits

0xc833,	// (0x000670c7) list_double2_graphic_pane

0xc833,	// (0x000670c7) list_double2_large_graphic_pane_ParamLimits

0xc833,	// (0x000670c7) list_double2_large_graphic_pane

0xc833,	// (0x000670c7) list_double2_pane_ParamLimits

0xc833,	// (0x000670c7) list_double2_pane

0xc833,	// (0x000670c7) list_double_graphic_heading_pane_ParamLimits

0xc833,	// (0x000670c7) list_double_graphic_heading_pane

0xc833,	// (0x000670c7) list_double_graphic_pane_ParamLimits

0xc833,	// (0x000670c7) list_double_graphic_pane

0xc833,	// (0x000670c7) list_double_heading_pane_ParamLimits

0xc833,	// (0x000670c7) list_double_heading_pane

0xc833,	// (0x000670c7) list_double_large_graphic_pane_ParamLimits

0xc833,	// (0x000670c7) list_double_large_graphic_pane

0xc833,	// (0x000670c7) list_double_number_pane_ParamLimits

0xc833,	// (0x000670c7) list_double_number_pane

0xc833,	// (0x000670c7) list_double_pane_ParamLimits

0xc833,	// (0x000670c7) list_double_pane

0xc833,	// (0x000670c7) list_double_time_pane_ParamLimits

0xc833,	// (0x000670c7) list_double_time_pane

0xc833,	// (0x000670c7) list_setting_number_pane_ParamLimits

0xc833,	// (0x000670c7) list_setting_number_pane

0xc833,	// (0x000670c7) list_setting_pane_ParamLimits

0xc833,	// (0x000670c7) list_setting_pane

0xc845,	// (0x000670d9) list_single_2graphic_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_2graphic_pane

0xc845,	// (0x000670d9) list_single_graphic_heading_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_graphic_heading_pane

0xc845,	// (0x000670d9) list_single_graphic_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_graphic_pane

0xc845,	// (0x000670d9) list_single_heading_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_heading_pane

0xc845,	// (0x000670d9) list_single_large_graphic_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_large_graphic_pane

0xc845,	// (0x000670d9) list_single_number_heading_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_number_heading_pane

0xc845,	// (0x000670d9) list_single_number_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_number_pane

0xc845,	// (0x000670d9) list_single_pane_ParamLimits

0xc845,	// (0x000670d9) list_single_pane

0x7eb5,	// (0x00062749) list_highlight_pane_cp1

0xdbd7,	// (0x0006846b) list_single_pane_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_single_pane_g1

0xdbe3,	// (0x00068477) list_single_pane_g2_ParamLimits

0xdbe3,	// (0x00068477) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00069e66) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00069e66) list_single_pane_g

0xb1f5,	// (0x00065a89) list_single_pane_t1_ParamLimits

0xb1f5,	// (0x00065a89) list_single_pane_t1

0xdbd7,	// (0x0006846b) list_single_number_pane_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_single_number_pane_g1

0xdbe3,	// (0x00068477) list_single_number_pane_g2_ParamLimits

0xdbe3,	// (0x00068477) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00069e66) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00069e66) list_single_number_pane_g

0xdbef,	// (0x00068483) list_single_number_pane_t1_ParamLimits

0xdbef,	// (0x00068483) list_single_number_pane_t1

0xb149,	// (0x000659dd) list_single_number_pane_t2_ParamLimits

0xb149,	// (0x000659dd) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x0006a1e2) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x0006a1e2) list_single_number_pane_t

0xdbcb,	// (0x0006845f) list_single_graphic_pane_g1_ParamLimits

0xdbcb,	// (0x0006845f) list_single_graphic_pane_g1

0xdbd7,	// (0x0006846b) list_single_graphic_pane_g2_ParamLimits

0xdbd7,	// (0x0006846b) list_single_graphic_pane_g2

0xdbe3,	// (0x00068477) list_single_graphic_pane_g3_ParamLimits

0xdbe3,	// (0x00068477) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00069e55) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00069e55) list_single_graphic_pane_g

0xdbef,	// (0x00068483) list_single_graphic_pane_t1_ParamLimits

0xdbef,	// (0x00068483) list_single_graphic_pane_t1

0x9ad2,	// (0x00064366) list_single_heading_pane_g1_ParamLimits

0x9ad2,	// (0x00064366) list_single_heading_pane_g1

0xdbe3,	// (0x00068477) list_single_heading_pane_g2_ParamLimits

0xdbe3,	// (0x00068477) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00069e5c) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00069e5c) list_single_heading_pane_g

0x9ae5,	// (0x00064379) list_single_heading_pane_t1_ParamLimits

0x9ae5,	// (0x00064379) list_single_heading_pane_t1

0x9afb,	// (0x0006438f) list_single_heading_pane_t2_ParamLimits

0x9afb,	// (0x0006438f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00069e61) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00069e61) list_single_heading_pane_t

0xdbd7,	// (0x0006846b) list_single_number_heading_pane_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_single_number_heading_pane_g1

0xdbe3,	// (0x00068477) list_single_number_heading_pane_g2_ParamLimits

0xdbe3,	// (0x00068477) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00069e66) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00069e66) list_single_number_heading_pane_g

0x9b0d,	// (0x000643a1) list_single_number_heading_pane_t1_ParamLimits

0x9b0d,	// (0x000643a1) list_single_number_heading_pane_t1

0x9b23,	// (0x000643b7) list_single_number_heading_pane_t2_ParamLimits

0x9b23,	// (0x000643b7) list_single_number_heading_pane_t2

0x9b35,	// (0x000643c9) list_single_number_heading_pane_t3_ParamLimits

0x9b35,	// (0x000643c9) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00069e6b) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00069e6b) list_single_number_heading_pane_t

0x9b47,	// (0x000643db) list_single_graphic_heading_pane_g1_ParamLimits

0x9b47,	// (0x000643db) list_single_graphic_heading_pane_g1

0x9b5d,	// (0x000643f1) list_single_graphic_heading_pane_g4_ParamLimits

0x9b5d,	// (0x000643f1) list_single_graphic_heading_pane_g4

0xdbe3,	// (0x00068477) list_single_graphic_heading_pane_g5_ParamLimits

0xdbe3,	// (0x00068477) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00069e72) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00069e72) list_single_graphic_heading_pane_g

0x9b0d,	// (0x000643a1) list_single_graphic_heading_pane_t1_ParamLimits

0x9b0d,	// (0x000643a1) list_single_graphic_heading_pane_t1

0x9b6e,	// (0x00064402) list_single_graphic_heading_pane_t2_ParamLimits

0x9b6e,	// (0x00064402) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00069e79) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00069e79) list_single_graphic_heading_pane_t

0x3c7e,	// (0x0005e512) list_single_large_graphic_pane_g1_ParamLimits

0x3c7e,	// (0x0005e512) list_single_large_graphic_pane_g1

0xdbd7,	// (0x0006846b) list_single_large_graphic_pane_g2_ParamLimits

0xdbd7,	// (0x0006846b) list_single_large_graphic_pane_g2

0xdbe3,	// (0x00068477) list_single_large_graphic_pane_g3_ParamLimits

0xdbe3,	// (0x00068477) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00069e7e) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00069e7e) list_single_large_graphic_pane_g

0x2cb0,	// (0x0005d544) wait_border_pane_g2_copy1

0x9b86,	// (0x0006441a) list_single_large_graphic_pane_g4_cp2

0xdbef,	// (0x00068483) list_single_large_graphic_pane_t1_ParamLimits

0xdbef,	// (0x00068483) list_single_large_graphic_pane_t1

0x3dd9,	// (0x0005e66d) list_double_pane_g1_ParamLimits

0x3dd9,	// (0x0005e66d) list_double_pane_g1

0xdc05,	// (0x00068499) list_double_pane_g2_ParamLimits

0xdc05,	// (0x00068499) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00069e85) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00069e85) list_double_pane_g

0x9b8e,	// (0x00064422) list_double_pane_t1_ParamLimits

0x9b8e,	// (0x00064422) list_double_pane_t1

0x9ba4,	// (0x00064438) list_double_pane_t2_ParamLimits

0x9ba4,	// (0x00064438) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00069e8a) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00069e8a) list_double_pane_t

0x9bb6,	// (0x0006444a) list_double2_pane_g1_ParamLimits

0x9bb6,	// (0x0006444a) list_double2_pane_g1

0x9bc7,	// (0x0006445b) list_double2_pane_g2_ParamLimits

0x9bc7,	// (0x0006445b) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00069e8f) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00069e8f) list_double2_pane_g

0x9bd3,	// (0x00064467) list_double2_pane_t1_ParamLimits

0x9bd3,	// (0x00064467) list_double2_pane_t1

0x9be9,	// (0x0006447d) list_double2_pane_t2_ParamLimits

0x9be9,	// (0x0006447d) list_double2_pane_t2

0x0001,

0xf600,	// (0x00069e94) list_double2_pane_t_ParamLimits

0xf600,	// (0x00069e94) list_double2_pane_t

0x3dd9,	// (0x0005e66d) list_double_number_pane_g1_ParamLimits

0x3dd9,	// (0x0005e66d) list_double_number_pane_g1

0xdc05,	// (0x00068499) list_double_number_pane_g2_ParamLimits

0xdc05,	// (0x00068499) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00069e85) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00069e85) list_double_number_pane_g

0x9bfb,	// (0x0006448f) list_double_number_pane_t1_ParamLimits

0x9bfb,	// (0x0006448f) list_double_number_pane_t1

0x9c0d,	// (0x000644a1) list_double_number_pane_t2_ParamLimits

0x9c0d,	// (0x000644a1) list_double_number_pane_t2

0x9c23,	// (0x000644b7) list_double_number_pane_t3_ParamLimits

0x9c23,	// (0x000644b7) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00069e99) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00069e99) list_double_number_pane_t

0x9c35,	// (0x000644c9) list_double_graphic_pane_g1_ParamLimits

0x9c35,	// (0x000644c9) list_double_graphic_pane_g1

0x9c41,	// (0x000644d5) list_double_graphic_pane_g2_ParamLimits

0x9c41,	// (0x000644d5) list_double_graphic_pane_g2

0x9c50,	// (0x000644e4) list_double_graphic_pane_g3_ParamLimits

0x9c50,	// (0x000644e4) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00069ea0) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00069ea0) list_double_graphic_pane_g

0x9c0d,	// (0x000644a1) list_double_graphic_pane_t1_ParamLimits

0x9c0d,	// (0x000644a1) list_double_graphic_pane_t1

0x9c23,	// (0x000644b7) list_double_graphic_pane_t2_ParamLimits

0x9c23,	// (0x000644b7) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00069ea9) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00069ea9) list_double_graphic_pane_t

0x9c68,	// (0x000644fc) list_double2_graphic_pane_g1_ParamLimits

0x9c68,	// (0x000644fc) list_double2_graphic_pane_g1

0x829d,	// (0x00062b31) list_double2_graphic_pane_g2_ParamLimits

0x829d,	// (0x00062b31) list_double2_graphic_pane_g2

0x9c74,	// (0x00064508) list_double2_graphic_pane_g3_ParamLimits

0x9c74,	// (0x00064508) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00069eae) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00069eae) list_double2_graphic_pane_g

0x9c80,	// (0x00064514) list_double2_graphic_pane_t1_ParamLimits

0x9c80,	// (0x00064514) list_double2_graphic_pane_t1

0x9c96,	// (0x0006452a) list_double2_graphic_pane_t2_ParamLimits

0x9c96,	// (0x0006452a) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00069eb5) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00069eb5) list_double2_graphic_pane_t

0x9ca8,	// (0x0006453c) list_double_large_graphic_pane_g1_ParamLimits

0x9ca8,	// (0x0006453c) list_double_large_graphic_pane_g1

0x9cc7,	// (0x0006455b) list_double_large_graphic_pane_g2_ParamLimits

0x9cc7,	// (0x0006455b) list_double_large_graphic_pane_g2

0xdc05,	// (0x00068499) list_double_large_graphic_pane_g3_ParamLimits

0xdc05,	// (0x00068499) list_double_large_graphic_pane_g3

0x9cdd,	// (0x00064571) list_double_large_graphic_pane_g4_ParamLimits

0x9cdd,	// (0x00064571) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00069eba) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00069eba) list_double_large_graphic_pane_g

0x9cf0,	// (0x00064584) list_double_large_graphic_pane_t1_ParamLimits

0x9cf0,	// (0x00064584) list_double_large_graphic_pane_t1

0x9d09,	// (0x0006459d) list_double_large_graphic_pane_t2_ParamLimits

0x9d09,	// (0x0006459d) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00069ec5) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00069ec5) list_double_large_graphic_pane_t

0x9d1b,	// (0x000645af) list_double2_large_graphic_pane_g1_ParamLimits

0x9d1b,	// (0x000645af) list_double2_large_graphic_pane_g1

0x9d27,	// (0x000645bb) list_double2_large_graphic_pane_g2_ParamLimits

0x9d27,	// (0x000645bb) list_double2_large_graphic_pane_g2

0x9c74,	// (0x00064508) list_double2_large_graphic_pane_g3_ParamLimits

0x9c74,	// (0x00064508) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00069eca) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00069eca) list_double2_large_graphic_pane_g

0x9c80,	// (0x00064514) list_double2_large_graphic_pane_t1_ParamLimits

0x9c80,	// (0x00064514) list_double2_large_graphic_pane_t1

0x9c96,	// (0x0006452a) list_double2_large_graphic_pane_t2_ParamLimits

0x9c96,	// (0x0006452a) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x00069eb5) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x00069eb5) list_double2_large_graphic_pane_t

0x9d38,	// (0x000645cc) list_double_heading_pane_g1_ParamLimits

0x9d38,	// (0x000645cc) list_double_heading_pane_g1

0x9d49,	// (0x000645dd) list_double_heading_pane_g2_ParamLimits

0x9d49,	// (0x000645dd) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00069ed1) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00069ed1) list_double_heading_pane_g

0x9d55,	// (0x000645e9) list_double_heading_pane_t1_ParamLimits

0x9d55,	// (0x000645e9) list_double_heading_pane_t1

0x9c96,	// (0x0006452a) list_double_heading_pane_t2_ParamLimits

0x9c96,	// (0x0006452a) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00069ed6) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00069ed6) list_double_heading_pane_t

0x9d6b,	// (0x000645ff) list_double_graphic_heading_pane_g1_ParamLimits

0x9d6b,	// (0x000645ff) list_double_graphic_heading_pane_g1

0x9d38,	// (0x000645cc) list_double_graphic_heading_pane_g2_ParamLimits

0x9d38,	// (0x000645cc) list_double_graphic_heading_pane_g2

0x9d49,	// (0x000645dd) list_double_graphic_heading_pane_g3_ParamLimits

0x9d49,	// (0x000645dd) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00069edb) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00069edb) list_double_graphic_heading_pane_g

0x9d55,	// (0x000645e9) list_double_graphic_heading_pane_t1_ParamLimits

0x9d55,	// (0x000645e9) list_double_graphic_heading_pane_t1

0x9c96,	// (0x0006452a) list_double_graphic_heading_pane_t2_ParamLimits

0x9c96,	// (0x0006452a) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00069ed6) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00069ed6) list_double_graphic_heading_pane_t

0x9d77,	// (0x0006460b) list_double_time_pane_g1_ParamLimits

0x9d77,	// (0x0006460b) list_double_time_pane_g1

0xdc26,	// (0x000684ba) list_double_time_pane_g2_ParamLimits

0xdc26,	// (0x000684ba) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x00069ee2) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x00069ee2) list_double_time_pane_g

0x9d88,	// (0x0006461c) list_double_time_pane_t1_ParamLimits

0x9d88,	// (0x0006461c) list_double_time_pane_t1

0x9d9e,	// (0x00064632) list_double_time_pane_t2_ParamLimits

0x9d9e,	// (0x00064632) list_double_time_pane_t2

0x9db0,	// (0x00064644) list_double_time_pane_t3_ParamLimits

0x9db0,	// (0x00064644) list_double_time_pane_t3

0x9dc2,	// (0x00064656) list_double_time_pane_t4_ParamLimits

0x9dc2,	// (0x00064656) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00069ee7) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00069ee7) list_double_time_pane_t

0x9dd4,	// (0x00064668) list_setting_pane_g1_ParamLimits

0x9dd4,	// (0x00064668) list_setting_pane_g1

0x9de0,	// (0x00064674) list_setting_pane_g2_ParamLimits

0x9de0,	// (0x00064674) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00069ef0) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00069ef0) list_setting_pane_g

0x9dec,	// (0x00064680) list_setting_pane_t1_ParamLimits

0x9dec,	// (0x00064680) list_setting_pane_t1

0x9e06,	// (0x0006469a) list_setting_pane_t2_ParamLimits

0x9e06,	// (0x0006469a) list_setting_pane_t2

0x0002,

0xf661,	// (0x00069ef5) list_setting_pane_t_ParamLimits

0xf661,	// (0x00069ef5) list_setting_pane_t

0x9e45,	// (0x000646d9) set_value_pane_cp_ParamLimits

0x9e45,	// (0x000646d9) set_value_pane_cp

0x9e51,	// (0x000646e5) list_setting_number_pane_g1_ParamLimits

0x9e51,	// (0x000646e5) list_setting_number_pane_g1

0x9e5d,	// (0x000646f1) list_setting_number_pane_g2_ParamLimits

0x9e5d,	// (0x000646f1) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00069efc) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00069efc) list_setting_number_pane_g

0x9e69,	// (0x000646fd) list_setting_number_pane_t1_ParamLimits

0x9e69,	// (0x000646fd) list_setting_number_pane_t1

0x9e82,	// (0x00064716) list_setting_number_pane_t2_ParamLimits

0x9e82,	// (0x00064716) list_setting_number_pane_t2

0x9e9c,	// (0x00064730) list_setting_number_pane_t3_ParamLimits

0x9e9c,	// (0x00064730) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00069f01) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00069f01) list_setting_number_pane_t

0x9e45,	// (0x000646d9) set_value_pane_ParamLimits

0x9e45,	// (0x000646d9) set_value_pane

0x8273,	// (0x00062b07) bg_set_opt_pane_ParamLimits

0x8273,	// (0x00062b07) bg_set_opt_pane

0xdc32,	// (0x000684c6) set_value_pane_t1

0x8294,	// (0x00062b28) slider_set_pane_cp3

0x9edf,	// (0x00064773) volume_small_pane_cp

0x84a4,	// (0x00062d38) list_form_gen_pane

0x84ad,	// (0x00062d41) scroll_pane_cp8

0x9ee8,	// (0x0006477c) form_field_data_pane_ParamLimits

0x9ee8,	// (0x0006477c) form_field_data_pane

0x9eff,	// (0x00064793) form_field_data_wide_pane_ParamLimits

0x9eff,	// (0x00064793) form_field_data_wide_pane

0x9f1f,	// (0x000647b3) form_field_popup_pane_ParamLimits

0x9f1f,	// (0x000647b3) form_field_popup_pane

0x9f37,	// (0x000647cb) form_field_popup_wide_pane_ParamLimits

0x9f37,	// (0x000647cb) form_field_popup_wide_pane

0xdc50,	// (0x000684e4) form_field_slider_pane_ParamLimits

0xdc50,	// (0x000684e4) form_field_slider_pane

0x9f4e,	// (0x000647e2) form_field_slider_wide_pane_ParamLimits

0x9f4e,	// (0x000647e2) form_field_slider_wide_pane

0x84be,	// (0x00062d52) data_form_pane

0x9f6b,	// (0x000647ff) form_field_data_pane_t1

0x84ca,	// (0x00062d5e) input_focus_pane

0xdc63,	// (0x000684f7) data_form_wide_pane

0xdc80,	// (0x00068514) form_field_data_wide_pane_t1

0x81b7,	// (0x00062a4b) input_focus_pane_cp6

0x9f85,	// (0x00064819) form_field_popup_pane_t1

0x84ca,	// (0x00062d5e) input_focus_pane_cp7

0x84ec,	// (0x00062d80) list_form_pane

0xdcaa,	// (0x0006853e) form_field_popup_wide_pane_t1

0x84ca,	// (0x00062d5e) input_focus_pane_cp8

0x84f8,	// (0x00062d8c) list_form_wide_pane

0x9fa7,	// (0x0006483b) form_field_slider_pane_t1_ParamLimits

0x9fa7,	// (0x0006483b) form_field_slider_pane_t1

0x9fbf,	// (0x00064853) form_field_slider_pane_t2_ParamLimits

0x9fbf,	// (0x00064853) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00069f11) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00069f11) form_field_slider_pane_t

0x802d,	// (0x000628c1) input_focus_pane_cp9_ParamLimits

0x802d,	// (0x000628c1) input_focus_pane_cp9

0x9fd4,	// (0x00064868) slider_cont_pane_ParamLimits

0x9fd4,	// (0x00064868) slider_cont_pane

0x8504,	// (0x00062d98) form_field_slider_wide_pane_t1_ParamLimits

0x8504,	// (0x00062d98) form_field_slider_wide_pane_t1

0xdcbf,	// (0x00068553) form_field_slider_wide_pane_t2_ParamLimits

0xdcbf,	// (0x00068553) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00069f16) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00069f16) form_field_slider_wide_pane_t

0x802d,	// (0x000628c1) input_focus_pane_cp10_ParamLimits

0x802d,	// (0x000628c1) input_focus_pane_cp10

0x9fe8,	// (0x0006487c) slider_cont_pane_cp1_ParamLimits

0x9fe8,	// (0x0006487c) slider_cont_pane_cp1

0x9ffc,	// (0x00064890) slider_form_pane_cp

0x8516,	// (0x00062daa) input_focus_pane_g1

0x851e,	// (0x00062db2) input_focus_pane_g2

0x8526,	// (0x00062dba) input_focus_pane_g3

0x852e,	// (0x00062dc2) input_focus_pane_g4

0x8536,	// (0x00062dca) input_focus_pane_g5

0x853e,	// (0x00062dd2) input_focus_pane_g6

0x8546,	// (0x00062dda) input_focus_pane_g7

0x854e,	// (0x00062de2) input_focus_pane_g8

0x8556,	// (0x00062dea) input_focus_pane_g9

0x7eab,	// (0x0006273f) input_focus_pane_g10

0x0009,

0xf687,	// (0x00069f1b) input_focus_pane_g

0x2cb9,	// (0x0005d54d) wait_border_pane_g3_copy1

0xa004,	// (0x00064898) data_form_pane_t1

0x7eab,	// (0x0006273f) wait_anim_pane_g1_copy1

0xb1c7,	// (0x00065a5b) data_form_wide_pane_t1

0xa01e,	// (0x000648b2) list_form_graphic_pane_cp_ParamLimits

0xa01e,	// (0x000648b2) list_form_graphic_pane_cp

0x3ba8,	// (0x0005e43c) slider_form_pane_g1

0x3bb1,	// (0x0005e445) slider_form_pane_g2

0x0006,

0xf97e,	// (0x0006a212) slider_form_pane_g

0xa01e,	// (0x000648b2) list_form_graphic_pane_ParamLimits

0xa01e,	// (0x000648b2) list_form_graphic_pane

0xa030,	// (0x000648c4) list_form_graphic_pane_g1

0xa038,	// (0x000648cc) list_form_graphic_pane_t1_ParamLimits

0xa038,	// (0x000648cc) list_form_graphic_pane_t1

0x7f03,	// (0x00062797) list_highlight_pane_cp5_ParamLimits

0x7f03,	// (0x00062797) list_highlight_pane_cp5

0xa04d,	// (0x000648e1) find_pane_g1

0x855e,	// (0x00062df2) input_find_pane

0xa056,	// (0x000648ea) input_find_pane_g1_ParamLimits

0xa056,	// (0x000648ea) input_find_pane_g1

0xa062,	// (0x000648f6) input_find_pane_t1_ParamLimits

0xa062,	// (0x000648f6) input_find_pane_t1

0xa077,	// (0x0006490b) input_find_pane_t2_ParamLimits

0xa077,	// (0x0006490b) input_find_pane_t2

0x0001,

0xf69c,	// (0x00069f30) input_find_pane_t_ParamLimits

0xf69c,	// (0x00069f30) input_find_pane_t

0x8567,	// (0x00062dfb) input_focus_pane_cp5_ParamLimits

0x8567,	// (0x00062dfb) input_focus_pane_cp5

0x8575,	// (0x00062e09) bg_popup_window_pane_cp2_ParamLimits

0x8575,	// (0x00062e09) bg_popup_window_pane_cp2

0x8582,	// (0x00062e16) listscroll_menu_pane_ParamLimits

0x8582,	// (0x00062e16) listscroll_menu_pane

0xa098,	// (0x0006492c) popup_submenu_window_ParamLimits

0xa098,	// (0x0006492c) popup_submenu_window

0x858e,	// (0x00062e22) find_popup_pane_g1

0xa0c0,	// (0x00064954) input_popup_find_pane_cp

0x8567,	// (0x00062dfb) input_focus_pane_cp4_ParamLimits

0x8567,	// (0x00062dfb) input_focus_pane_cp4

0x8596,	// (0x00062e2a) input_popup_find_pane_t1_ParamLimits

0x8596,	// (0x00062e2a) input_popup_find_pane_t1

0x7eb5,	// (0x00062749) bg_popup_sub_pane_cp

0x85c4,	// (0x00062e58) listscroll_popup_sub_pane

0x85cc,	// (0x00062e60) list_submenu_pane_ParamLimits

0x85cc,	// (0x00062e60) list_submenu_pane

0x85dd,	// (0x00062e71) scroll_pane_cp4

0xa0d8,	// (0x0006496c) list_single_popup_submenu_pane_ParamLimits

0xa0d8,	// (0x0006496c) list_single_popup_submenu_pane

0xa0ec,	// (0x00064980) list_single_popup_submenu_pane_g1

0xa0f4,	// (0x00064988) list_single_popup_submenu_pane_t1_ParamLimits

0xa0f4,	// (0x00064988) list_single_popup_submenu_pane_t1

0x802d,	// (0x000628c1) bg_active_tab_pane_cp1_ParamLimits

0x802d,	// (0x000628c1) bg_active_tab_pane_cp1

0x85e5,	// (0x00062e79) tabs_2_active_pane_g1

0xa109,	// (0x0006499d) tabs_2_active_pane_t1

0x802d,	// (0x000628c1) bg_passive_tab_pane_cp1_ParamLimits

0x802d,	// (0x000628c1) bg_passive_tab_pane_cp1

0x85e5,	// (0x00062e79) tabs_2_passive_pane_g1

0xa109,	// (0x0006499d) tabs_2_passive_pane_t1

0x7f03,	// (0x00062797) bg_active_tab_pane_cp4

0xa11b,	// (0x000649af) tabs_2_long_active_pane_t1

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp4

0x0720,	// (0x0005afb4) list_single_midp_graphic_pane_g4_ParamLimits

0x7f03,	// (0x00062797) bg_active_tab_pane_cp5

0xa12e,	// (0x000649c2) tabs_3_long_active_pane_t1

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp5

0x0720,	// (0x0005afb4) list_single_midp_graphic_pane_g4

0x7f03,	// (0x00062797) bg_popup_window_pane_cp13_ParamLimits

0x7f03,	// (0x00062797) bg_popup_window_pane_cp13

0x85ed,	// (0x00062e81) listscroll_popup_fast_pane_ParamLimits

0x85ed,	// (0x00062e81) listscroll_popup_fast_pane

0x85f9,	// (0x00062e8d) grid_popup_fast_pane_ParamLimits

0x85f9,	// (0x00062e8d) grid_popup_fast_pane

0x860b,	// (0x00062e9f) scroll_pane_cp9_ParamLimits

0x860b,	// (0x00062e9f) scroll_pane_cp9

0x5688,	// (0x0005ff1c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5688,	// (0x0005ff1c) list_single_graphic_hl_pane_t1_cp2

0x861e,	// (0x00062eb2) input_focus_pane_cp20_ParamLimits

0x861e,	// (0x00062eb2) input_focus_pane_cp20

0x862c,	// (0x00062ec0) query_popup_data_pane_t1_ParamLimits

0x862c,	// (0x00062ec0) query_popup_data_pane_t1

0x863f,	// (0x00062ed3) query_popup_data_pane_t2_ParamLimits

0x863f,	// (0x00062ed3) query_popup_data_pane_t2

0x8685,	// (0x00062f19) query_popup_data_pane_t3_ParamLimits

0x8685,	// (0x00062f19) query_popup_data_pane_t3

0x86c6,	// (0x00062f5a) query_popup_data_pane_t4_ParamLimits

0x86c6,	// (0x00062f5a) query_popup_data_pane_t4

0x8702,	// (0x00062f96) query_popup_data_pane_t5_ParamLimits

0x8702,	// (0x00062f96) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00069f35) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00069f35) query_popup_data_pane_t

0x8516,	// (0x00062daa) bg_set_opt_pane_g1

0x851e,	// (0x00062db2) bg_set_opt_pane_g2

0x8526,	// (0x00062dba) bg_set_opt_pane_g3

0x852e,	// (0x00062dc2) bg_set_opt_pane_g4

0x8536,	// (0x00062dca) bg_set_opt_pane_g5

0x853e,	// (0x00062dd2) bg_set_opt_pane_g6

0x8546,	// (0x00062dda) bg_set_opt_pane_g7

0x854e,	// (0x00062de2) bg_set_opt_pane_g8

0x8556,	// (0x00062dea) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00069f40) bg_set_opt_pane_g

0xf1eb,	// (0x00069a7f) control_top_pane_stacon_ParamLimits

0xf1eb,	// (0x00069a7f) control_top_pane_stacon

0xf23e,	// (0x00069ad2) signal_pane_stacon_ParamLimits

0xf23e,	// (0x00069ad2) signal_pane_stacon

0xddb7,	// (0x0006864b) stacon_top_pane_g1_ParamLimits

0xddb7,	// (0x0006864b) stacon_top_pane_g1

0xf263,	// (0x00069af7) title_pane_stacon_ParamLimits

0xf263,	// (0x00069af7) title_pane_stacon

0xf28d,	// (0x00069b21) uni_indicator_pane_stacon_ParamLimits

0xf28d,	// (0x00069b21) uni_indicator_pane_stacon

0xf2a2,	// (0x00069b36) battery_pane_stacon_ParamLimits

0xf2a2,	// (0x00069b36) battery_pane_stacon

0xf2e6,	// (0x00069b7a) control_bottom_pane_stacon_ParamLimits

0xf2e6,	// (0x00069b7a) control_bottom_pane_stacon

0xf309,	// (0x00069b9d) navi_pane_stacon_ParamLimits

0xf309,	// (0x00069b9d) navi_pane_stacon

0xddd9,	// (0x0006866d) stacon_bottom_pane_g1_ParamLimits

0xddd9,	// (0x0006866d) stacon_bottom_pane_g1

0xefae,	// (0x00069842) aid_levels_signal_lsc_ParamLimits

0xefae,	// (0x00069842) aid_levels_signal_lsc

0xefc4,	// (0x00069858) signal_pane_stacon_g1_ParamLimits

0xefc4,	// (0x00069858) signal_pane_stacon_g1

0xefd8,	// (0x0006986c) signal_pane_stacon_g2_ParamLimits

0xefd8,	// (0x0006986c) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00069f53) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00069f53) signal_pane_stacon_g

0xf00d,	// (0x000698a1) title_pane_stacon_t1_ParamLimits

0xf00d,	// (0x000698a1) title_pane_stacon_t1

0x8746,	// (0x00062fda) uni_indicator_pane_stacon_g1

0x8750,	// (0x00062fe4) uni_indicator_pane_stacon_g2

0x875a,	// (0x00062fee) uni_indicator_pane_stacon_g3

0x8764,	// (0x00062ff8) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00069f5f) uni_indicator_pane_stacon_g

0xf032,	// (0x000698c6) control_top_pane_stacon_g1

0xf03a,	// (0x000698ce) control_top_pane_stacon_t1_ParamLimits

0xf03a,	// (0x000698ce) control_top_pane_stacon_t1

0xf071,	// (0x00069905) aid_levels_battery_lsc_ParamLimits

0xf071,	// (0x00069905) aid_levels_battery_lsc

0xf088,	// (0x0006991c) battery_pane_stacon_g1_ParamLimits

0xf088,	// (0x0006991c) battery_pane_stacon_g1

0xf09b,	// (0x0006992f) battery_pane_stacon_g2_ParamLimits

0xf09b,	// (0x0006992f) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00069f68) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00069f68) battery_pane_stacon_g

0xf0d9,	// (0x0006996d) navi_icon_pane_stacon

0xf0ed,	// (0x00069981) navi_navi_pane_stacon

0xf0d9,	// (0x0006996d) navi_text_pane_stacon

0xf032,	// (0x000698c6) control_bottom_pane_stacon_g1

0xf101,	// (0x00069995) control_bottom_pane_stacon_t1_ParamLimits

0xf101,	// (0x00069995) control_bottom_pane_stacon_t1

0xa15a,	// (0x000649ee) grid_app_pane_ParamLimits

0xa15a,	// (0x000649ee) grid_app_pane

0xa192,	// (0x00064a26) scroll_pane_cp15_ParamLimits

0xa192,	// (0x00064a26) scroll_pane_cp15

0xa1a7,	// (0x00064a3b) cell_app_pane_ParamLimits

0xa1a7,	// (0x00064a3b) cell_app_pane

0xa1ec,	// (0x00064a80) cell_app_pane_g1_ParamLimits

0xa1ec,	// (0x00064a80) cell_app_pane_g1

0x8788,	// (0x0006301c) cell_app_pane_g2_ParamLimits

0x8788,	// (0x0006301c) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00069f6d) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00069f6d) cell_app_pane_g

0xa210,	// (0x00064aa4) cell_app_pane_t1_ParamLimits

0xa210,	// (0x00064aa4) cell_app_pane_t1

0x8794,	// (0x00063028) grid_highlight_pane_ParamLimits

0x8794,	// (0x00063028) grid_highlight_pane

0x8516,	// (0x00062daa) cell_highlight_pane_g1

0x851e,	// (0x00062db2) cell_highlight_pane_g2

0x8526,	// (0x00062dba) cell_highlight_pane_g3

0x852e,	// (0x00062dc2) cell_highlight_pane_g4

0x8536,	// (0x00062dca) cell_highlight_pane_g5

0x853e,	// (0x00062dd2) cell_highlight_pane_g6

0x8546,	// (0x00062dda) cell_highlight_pane_g7

0x854e,	// (0x00062de2) cell_highlight_pane_g8

0x8556,	// (0x00062dea) cell_highlight_pane_g9

0x7eab,	// (0x0006273f) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00069f1b) cell_highlight_pane_g

0x87a5,	// (0x00063039) bg_scroll_pane

0xa230,	// (0x00064ac4) scroll_handle_pane

0x87ec,	// (0x00063080) scroll_bg_pane_g1

0x8801,	// (0x00063095) scroll_bg_pane_g2

0x8819,	// (0x000630ad) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00069f72) scroll_bg_pane_g

0xa244,	// (0x00064ad8) scroll_handle_focus_pane_ParamLimits

0xa244,	// (0x00064ad8) scroll_handle_focus_pane

0x87ec,	// (0x00063080) scroll_handle_pane_g1

0x882e,	// (0x000630c2) scroll_handle_pane_g2

0x8819,	// (0x000630ad) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00069f79) scroll_handle_pane_g

0x8567,	// (0x00062dfb) bg_popup_sub_pane_cp21_ParamLimits

0x8567,	// (0x00062dfb) bg_popup_sub_pane_cp21

0xa251,	// (0x00064ae5) popup_fep_japan_predictive_window_t1_ParamLimits

0xa251,	// (0x00064ae5) popup_fep_japan_predictive_window_t1

0xa268,	// (0x00064afc) popup_fep_japan_predictive_window_t2_ParamLimits

0xa268,	// (0x00064afc) popup_fep_japan_predictive_window_t2

0xa29b,	// (0x00064b2f) popup_fep_japan_predictive_window_t3_ParamLimits

0xa29b,	// (0x00064b2f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00069f80) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00069f80) popup_fep_japan_predictive_window_t

0x7eb5,	// (0x00062749) bg_popup_sub_pane_cp23

0xa2d2,	// (0x00064b66) listscroll_japin_cand_pane

0x8842,	// (0x000630d6) popup_fep_japan_candidate_window_t1

0x8850,	// (0x000630e4) candidate_pane_ParamLimits

0x8850,	// (0x000630e4) candidate_pane

0xa2da,	// (0x00064b6e) scroll_pane_cp30

0x8862,	// (0x000630f6) list_single_popup_jap_candidate_pane_ParamLimits

0x8862,	// (0x000630f6) list_single_popup_jap_candidate_pane

0x7eb5,	// (0x00062749) list_highlight_pane_cp30

0x8877,	// (0x0006310b) list_single_popup_jap_candidate_pane_t1

0x8886,	// (0x0006311a) level_1_signal

0x8893,	// (0x00063127) level_2_signal

0xbb14,	// (0x000663a8) level_3_signal

0xbb21,	// (0x000663b5) level_4_signal

0xbb2e,	// (0x000663c2) level_5_signal

0xbb3b,	// (0x000663cf) level_6_signal

0xbb48,	// (0x000663dc) level_7_signal

0x8886,	// (0x0006311a) level_1_battery

0x8893,	// (0x00063127) level_2_battery

0xbb14,	// (0x000663a8) level_3_battery

0xbb21,	// (0x000663b5) level_4_battery

0xbb2e,	// (0x000663c2) level_5_battery

0xbb3b,	// (0x000663cf) level_6_battery

0xbb48,	// (0x000663dc) level_7_battery

0xbb6d,	// (0x00066401) list_menu_pane_ParamLimits

0xbb6d,	// (0x00066401) list_menu_pane

0xbb83,	// (0x00066417) scroll_pane_cp25_ParamLimits

0xbb83,	// (0x00066417) scroll_pane_cp25

0xa2e2,	// (0x00064b76) list_double2_graphic_pane_cp2_ParamLimits

0xa2e2,	// (0x00064b76) list_double2_graphic_pane_cp2

0xa2e2,	// (0x00064b76) list_double2_large_graphic_pane_cp2_ParamLimits

0xa2e2,	// (0x00064b76) list_double2_large_graphic_pane_cp2

0xa2e2,	// (0x00064b76) list_double2_pane_cp2_ParamLimits

0xa2e2,	// (0x00064b76) list_double2_pane_cp2

0xa2e2,	// (0x00064b76) list_double_graphic_pane_cp2_ParamLimits

0xa2e2,	// (0x00064b76) list_double_graphic_pane_cp2

0xa2e2,	// (0x00064b76) list_double_large_graphic_pane_cp2_ParamLimits

0xa2e2,	// (0x00064b76) list_double_large_graphic_pane_cp2

0xa2e2,	// (0x00064b76) list_double_number_pane_cp2_ParamLimits

0xa2e2,	// (0x00064b76) list_double_number_pane_cp2

0xa2e2,	// (0x00064b76) list_double_pane_cp2_ParamLimits

0xa2e2,	// (0x00064b76) list_double_pane_cp2

0xa2f1,	// (0x00064b85) list_single_2graphic_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_2graphic_pane_cp2

0xa2f1,	// (0x00064b85) list_single_graphic_heading_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_graphic_heading_pane_cp2

0xa2f1,	// (0x00064b85) list_single_graphic_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_graphic_pane_cp2

0xa2f1,	// (0x00064b85) list_single_heading_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_heading_pane_cp2

0xbbac,	// (0x00066440) list_single_large_graphic_pane_cp2_ParamLimits

0xbbac,	// (0x00066440) list_single_large_graphic_pane_cp2

0xa2f1,	// (0x00064b85) list_single_number_heading_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_number_heading_pane_cp2

0xa2f1,	// (0x00064b85) list_single_number_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_number_pane_cp2

0xa2f1,	// (0x00064b85) list_single_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_pane_cp2

0xbbc6,	// (0x0006645a) bg_popup_sub_pane_cp22

0xf1d1,	// (0x00069a65) popup_side_volume_key_window_g1

0xf1dd,	// (0x00069a71) popup_side_volume_key_window_t1

0xa3b9,	// (0x00064c4d) volume_small_pane_cp1

0x802d,	// (0x000628c1) bg_popup_sub_pane_cp24_ParamLimits

0x802d,	// (0x000628c1) bg_popup_sub_pane_cp24

0xbbdc,	// (0x00066470) fep_china_uni_candidate_pane_ParamLimits

0xbbdc,	// (0x00066470) fep_china_uni_candidate_pane

0xbbf0,	// (0x00066484) fep_china_uni_entry_pane

0xbc00,	// (0x00066494) popup_fep_china_uni_window_g1

0xa3c1,	// (0x00064c55) fep_china_uni_entry_pane_g1

0xa3c9,	// (0x00064c5d) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00069fb1) fep_china_uni_entry_pane_g

0xdcd1,	// (0x00068565) fep_entry_item_pane

0xdcdb,	// (0x0006856f) fep_candidate_item_pane

0xa3d1,	// (0x00064c65) fep_china_uni_candidate_pane_g1

0xdce3,	// (0x00068577) fep_china_uni_candidate_pane_g2

0xdceb,	// (0x0006857f) fep_china_uni_candidate_pane_g3

0xa3d9,	// (0x00064c6d) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00069fb6) fep_china_uni_candidate_pane_g

0x7eab,	// (0x0006273f) fep_entry_item_pane_g1

0xdcf3,	// (0x00068587) fep_entry_item_pane_t1_ParamLimits

0xdcf3,	// (0x00068587) fep_entry_item_pane_t1

0xdd09,	// (0x0006859d) fep_candidate_item_pane_t1_ParamLimits

0xdd09,	// (0x0006859d) fep_candidate_item_pane_t1

0xdd1e,	// (0x000685b2) fep_candidate_item_pane_t2_ParamLimits

0xdd1e,	// (0x000685b2) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00069fbf) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00069fbf) fep_candidate_item_pane_t

0x7f03,	// (0x00062797) list_highlight_pane_cp31_ParamLimits

0x7f03,	// (0x00062797) list_highlight_pane_cp31

0xdd30,	// (0x000685c4) level_1_signal_lsc

0xdd39,	// (0x000685cd) level_2_signal_lsc

0xdd42,	// (0x000685d6) level_3_signal_lsc

0xdd4b,	// (0x000685df) level_4_signal_lsc

0xdd54,	// (0x000685e8) level_5_signal_lsc

0xdd5d,	// (0x000685f1) level_6_signal_lsc

0xdd66,	// (0x000685fa) level_7_signal_lsc

0xdd66,	// (0x000685fa) level_1_battery_lsc

0xdd6f,	// (0x00068603) level_2_battery_lsc

0xdd78,	// (0x0006860c) level_3_battery_lsc

0xdd81,	// (0x00068615) level_4_battery_lsc

0xdd8a,	// (0x0006861e) level_5_battery_lsc

0xdd93,	// (0x00068627) level_6_battery_lsc

0xdd30,	// (0x000685c4) level_7_battery_lsc

0xdd9c,	// (0x00068630) scroll_handle_focus_pane_g1

0xdda5,	// (0x00068639) scroll_handle_focus_pane_g2

0xddae,	// (0x00068642) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00069fc4) scroll_handle_focus_pane_g

0xa3e1,	// (0x00064c75) list_single_2graphic_pane_g1_ParamLimits

0xa3e1,	// (0x00064c75) list_single_2graphic_pane_g1

0x9b5d,	// (0x000643f1) list_single_2graphic_pane_g2_ParamLimits

0x9b5d,	// (0x000643f1) list_single_2graphic_pane_g2

0xdbe3,	// (0x00068477) list_single_2graphic_pane_g3_ParamLimits

0xdbe3,	// (0x00068477) list_single_2graphic_pane_g3

0xa3ed,	// (0x00064c81) list_single_2graphic_pane_g4_ParamLimits

0xa3ed,	// (0x00064c81) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00069fcb) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00069fcb) list_single_2graphic_pane_g

0xa3f9,	// (0x00064c8d) list_single_2graphic_pane_t1_ParamLimits

0xa3f9,	// (0x00064c8d) list_single_2graphic_pane_t1

0xa427,	// (0x00064cbb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa427,	// (0x00064cbb) list_double2_graphic_large_graphic_pane_g1

0x9d27,	// (0x000645bb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9d27,	// (0x000645bb) list_double2_graphic_large_graphic_pane_g2

0x9c74,	// (0x00064508) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9c74,	// (0x00064508) list_double2_graphic_large_graphic_pane_g3

0xa439,	// (0x00064ccd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa439,	// (0x00064ccd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00069fd4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00069fd4) list_double2_graphic_large_graphic_pane_g

0xa445,	// (0x00064cd9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa445,	// (0x00064cd9) list_double2_graphic_large_graphic_pane_t1

0xa45b,	// (0x00064cef) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa45b,	// (0x00064cef) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00069fdd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00069fdd) list_double2_graphic_large_graphic_pane_t

0xa4e0,	// (0x00064d74) popup_fast_swap_window_ParamLimits

0xa4e0,	// (0x00064d74) popup_fast_swap_window

0xa4fc,	// (0x00064d90) popup_side_volume_key_window

0xf32c,	// (0x00069bc0) stacon_top_pane

0xf336,	// (0x00069bca) status_pane_ParamLimits

0xf336,	// (0x00069bca) status_pane

0xa516,	// (0x00064daa) status_small_pane

0x7eb5,	// (0x00062749) control_pane

0x7eb5,	// (0x00062749) stacon_bottom_pane

0x84ad,	// (0x00062d41) scroll_pane_cp121

0x84a4,	// (0x00062d38) set_content_pane

0xa46d,	// (0x00064d01) bg_active_tab_pane_g1_cp1

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp1

0xa47f,	// (0x00064d13) bg_active_tab_pane_g3_cp1

0xa46d,	// (0x00064d01) bg_passive_tab_pane_g1_cp1

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp1

0xa47f,	// (0x00064d13) bg_passive_tab_pane_g3_cp1

0xa488,	// (0x00064d1c) bg_active_tab_pane_g1_cp2

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp2

0xa491,	// (0x00064d25) bg_active_tab_pane_g3_cp2

0xa488,	// (0x00064d1c) bg_passive_tab_pane_g1_cp2

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp2

0xa491,	// (0x00064d25) bg_passive_tab_pane_g3_cp2

0xa49a,	// (0x00064d2e) bg_active_tab_pane_g1_cp3

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp3

0xa4a3,	// (0x00064d37) bg_active_tab_pane_g3_cp3

0xa49a,	// (0x00064d2e) bg_passive_tab_pane_g1_cp3

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp3

0xa4a3,	// (0x00064d37) bg_passive_tab_pane_g3_cp3

0xa4ac,	// (0x00064d40) bg_active_tab_pane_g1_cp4

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp4

0xa4b7,	// (0x00064d4b) bg_active_tab_pane_g3_cp4

0xa4ac,	// (0x00064d40) bg_passive_tab_pane_g1_cp4

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp4

0xa4b7,	// (0x00064d4b) bg_passive_tab_pane_g3_cp4

0xa4c2,	// (0x00064d56) bg_active_tab_pane_g1_cp5

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp5

0xa4cb,	// (0x00064d5f) bg_active_tab_pane_g3_cp5

0xa4c2,	// (0x00064d56) bg_passive_tab_pane_g1_cp5

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp5

0xa4cb,	// (0x00064d5f) bg_passive_tab_pane_g3_cp5

0x4371,	// (0x0005ec05) list_set_graphic_pane_ParamLimits

0x4371,	// (0x0005ec05) list_set_graphic_pane

0x7eb5,	// (0x00062749) bg_set_opt_pane_cp4

0xddf5,	// (0x00068689) list_set_graphic_pane_g1_ParamLimits

0xddf5,	// (0x00068689) list_set_graphic_pane_g1

0xde01,	// (0x00068695) list_set_graphic_pane_g2_ParamLimits

0xde01,	// (0x00068695) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00069fe2) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00069fe2) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0006a367) volume_small_pane_cp_g

0xa4d4,	// (0x00064d68) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa4d4,	// (0x00064d68) list_double2_large_graphic_pane_g1_cp2

0xde23,	// (0x000686b7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xde23,	// (0x000686b7) list_double2_large_graphic_pane_g2_cp2

0xde34,	// (0x000686c8) list_double2_large_graphic_pane_g3_cp2

0xde3c,	// (0x000686d0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xde3c,	// (0x000686d0) list_double2_large_graphic_pane_t1_cp2

0xde52,	// (0x000686e6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xde52,	// (0x000686e6) list_double2_large_graphic_pane_t2_cp2

0xc594,	// (0x00066e28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc594,	// (0x00066e28) list_double_large_graphic_pane_g1_cp2

0x377b,	// (0x0005e00f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x377b,	// (0x0005e00f) list_double_large_graphic_pane_g2_cp2

0xf446,	// (0x00069cda) list_double_large_graphic_pane_g3_cp2

0x378c,	// (0x0005e020) list_double_large_graphic_pane_g4_cp

0x3794,	// (0x0005e028) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3794,	// (0x0005e028) list_double_large_graphic_pane_t1_cp2

0x37ab,	// (0x0005e03f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x37ab,	// (0x0005e03f) list_double_large_graphic_pane_t2_cp2

0xf344,	// (0x00069bd8) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf344,	// (0x00069bd8) list_double2_graphic_pane_g1_cp2

0xf352,	// (0x00069be6) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf352,	// (0x00069be6) list_double2_graphic_pane_g2_cp2

0xf363,	// (0x00069bf7) list_double2_graphic_pane_g3_cp2

0xf36d,	// (0x00069c01) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf36d,	// (0x00069c01) list_double2_graphic_pane_t1_cp2

0xf383,	// (0x00069c17) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf383,	// (0x00069c17) list_double2_graphic_pane_t2_cp2

0xbc1c,	// (0x000664b0) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbc1c,	// (0x000664b0) list_single_number_heading_pane_g1_cp2

0xf395,	// (0x00069c29) list_single_number_heading_pane_g2_cp2

0xf39d,	// (0x00069c31) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf39d,	// (0x00069c31) list_single_number_heading_pane_t1_cp2

0xf3b3,	// (0x00069c47) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf3b3,	// (0x00069c47) list_single_number_heading_pane_t2_cp2

0xf3c5,	// (0x00069c59) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf3c5,	// (0x00069c59) list_single_number_heading_pane_t3_cp2

0xbc1c,	// (0x000664b0) list_single_heading_pane_g1_cp2_ParamLimits

0xbc1c,	// (0x000664b0) list_single_heading_pane_g1_cp2

0xf395,	// (0x00069c29) list_single_heading_pane_g2_cp2

0xf39d,	// (0x00069c31) list_single_heading_pane_t1_cp2_ParamLimits

0xf39d,	// (0x00069c31) list_single_heading_pane_t1_cp2

0x3574,	// (0x0005de08) list_single_heading_pane_t2_cp2_ParamLimits

0x3574,	// (0x0005de08) list_single_heading_pane_t2_cp2

0x34bc,	// (0x0005dd50) list_double_graphic_pane_g1_cp2_ParamLimits

0x34bc,	// (0x0005dd50) list_double_graphic_pane_g1_cp2

0x34c8,	// (0x0005dd5c) list_double_graphic_pane_g2_cp2_ParamLimits

0x34c8,	// (0x0005dd5c) list_double_graphic_pane_g2_cp2

0x34d7,	// (0x0005dd6b) list_double_graphic_pane_g3_cp2

0x34df,	// (0x0005dd73) list_double_graphic_pane_t1_cp2_ParamLimits

0x34df,	// (0x0005dd73) list_double_graphic_pane_t1_cp2

0x34f5,	// (0x0005dd89) list_double_graphic_pane_t2_cp2_ParamLimits

0x34f5,	// (0x0005dd89) list_double_graphic_pane_t2_cp2

0xf43a,	// (0x00069cce) list_double_number_pane_g1_cp2_ParamLimits

0xf43a,	// (0x00069cce) list_double_number_pane_g1_cp2

0xf446,	// (0x00069cda) list_double_number_pane_g2_cp2

0x3480,	// (0x0005dd14) list_double_number_pane_t1_cp2_ParamLimits

0x3480,	// (0x0005dd14) list_double_number_pane_t1_cp2

0x3494,	// (0x0005dd28) list_double_number_pane_t2_cp2_ParamLimits

0x3494,	// (0x0005dd28) list_double_number_pane_t2_cp2

0x34aa,	// (0x0005dd3e) list_double_number_pane_t3_cp2_ParamLimits

0x34aa,	// (0x0005dd3e) list_double_number_pane_t3_cp2

0x3369,	// (0x0005dbfd) list_single_graphic_pane_g1_cp2_ParamLimits

0x3369,	// (0x0005dbfd) list_single_graphic_pane_g1_cp2

0x1d6f,	// (0x0005c603) list_single_graphic_pane_g2_cp2_ParamLimits

0x1d6f,	// (0x0005c603) list_single_graphic_pane_g2_cp2

0x1d7b,	// (0x0005c60f) list_single_graphic_pane_g3_cp2

0x333f,	// (0x0005dbd3) list_single_graphic_pane_t1_cp2_ParamLimits

0x333f,	// (0x0005dbd3) list_single_graphic_pane_t1_cp2

0x1d6f,	// (0x0005c603) list_single_number_pane_g1_cp2_ParamLimits

0x1d6f,	// (0x0005c603) list_single_number_pane_g1_cp2

0x1d7b,	// (0x0005c60f) list_single_number_pane_g2_cp2

0x333f,	// (0x0005dbd3) list_single_number_pane_t1_cp2_ParamLimits

0x333f,	// (0x0005dbd3) list_single_number_pane_t1_cp2

0x3355,	// (0x0005dbe9) list_single_number_pane_t2_cp2_ParamLimits

0x3355,	// (0x0005dbe9) list_single_number_pane_t2_cp2

0xde23,	// (0x000686b7) list_double2_pane_g1_cp2_ParamLimits

0xde23,	// (0x000686b7) list_double2_pane_g1_cp2

0xde34,	// (0x000686c8) list_double2_pane_g2_cp2

0xf412,	// (0x00069ca6) list_double2_pane_t1_cp2_ParamLimits

0xf412,	// (0x00069ca6) list_double2_pane_t1_cp2

0xf428,	// (0x00069cbc) list_double2_pane_t2_cp2_ParamLimits

0xf428,	// (0x00069cbc) list_double2_pane_t2_cp2

0xf43a,	// (0x00069cce) list_double_pane_g1_cp2_ParamLimits

0xf43a,	// (0x00069cce) list_double_pane_g1_cp2

0xf446,	// (0x00069cda) list_double_pane_g2_cp2

0xf44e,	// (0x00069ce2) list_double_pane_t1_cp2_ParamLimits

0xf44e,	// (0x00069ce2) list_double_pane_t1_cp2

0xf464,	// (0x00069cf8) list_double_pane_t2_cp2_ParamLimits

0xf464,	// (0x00069cf8) list_double_pane_t2_cp2

0xa521,	// (0x00064db5) list_single_pane_cp2_g3

0x1d6f,	// (0x0005c603) list_single_pane_g1_cp2_ParamLimits

0x1d6f,	// (0x0005c603) list_single_pane_g1_cp2

0x1d7b,	// (0x0005c60f) list_single_pane_g2_cp2

0x1d83,	// (0x0005c617) list_single_pane_t1_cp2_ParamLimits

0x1d83,	// (0x0005c617) list_single_pane_t1_cp2

0xa529,	// (0x00064dbd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa529,	// (0x00064dbd) list_single_large_graphic_pane_g1_cp2

0x1da7,	// (0x0005c63b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1da7,	// (0x0005c63b) list_single_large_graphic_pane_g2_cp2

0x1db3,	// (0x0005c647) list_single_large_graphic_pane_g3_cp2

0xa535,	// (0x00064dc9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa535,	// (0x00064dc9) list_single_large_graphic_pane_g4_cp1

0x1dd5,	// (0x0005c669) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1dd5,	// (0x0005c669) list_single_large_graphic_pane_t1_cp2

0x330b,	// (0x0005db9f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x330b,	// (0x0005db9f) list_single_graphic_heading_pane_g1_cp2

0x32d8,	// (0x0005db6c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x32d8,	// (0x0005db6c) list_single_graphic_heading_pane_g4_cp2

0x1d7b,	// (0x0005c60f) list_single_graphic_heading_pane_g5_cp2

0x3317,	// (0x0005dbab) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3317,	// (0x0005dbab) list_single_graphic_heading_pane_t1_cp2

0x332d,	// (0x0005dbc1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x332d,	// (0x0005dbc1) list_single_graphic_heading_pane_t2_cp2

0x32cc,	// (0x0005db60) list_single_2graphic_pane_g1_cp2_ParamLimits

0x32cc,	// (0x0005db60) list_single_2graphic_pane_g1_cp2

0x32d8,	// (0x0005db6c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x32d8,	// (0x0005db6c) list_single_2graphic_pane_g2_cp2

0x1d7b,	// (0x0005c60f) list_single_2graphic_pane_g3_cp2

0x32e9,	// (0x0005db7d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x32e9,	// (0x0005db7d) list_single_2graphic_pane_g4_cp2

0x32f5,	// (0x0005db89) list_single_2graphic_pane_t1_cp2_ParamLimits

0x32f5,	// (0x0005db89) list_single_2graphic_pane_t1_cp2

0x7eab,	// (0x0006273f) list_highlight_pane_g10_cp1

0x2eb4,	// (0x0005d748) list_highlight_pane_g1_cp1

0x2ebc,	// (0x0005d750) list_highlight_pane_g2_cp1

0x2ec4,	// (0x0005d758) list_highlight_pane_g3_cp1

0x2ecc,	// (0x0005d760) list_highlight_pane_g4_cp1

0x2ed4,	// (0x0005d768) list_highlight_pane_g5_cp1

0x2edc,	// (0x0005d770) list_highlight_pane_g6_cp1

0x2ee4,	// (0x0005d778) list_highlight_pane_g7_cp1

0x2eec,	// (0x0005d780) list_highlight_pane_g8_cp1

0x2ef4,	// (0x0005d788) list_highlight_pane_g9_cp1

0xc329,	// (0x00066bbd) form_field_slider_pane_t3

0xc337,	// (0x00066bcb) form_field_slider_pane_t4

0x2df8,	// (0x0005d68c) slider_form_pane_ParamLimits

0x2df8,	// (0x0005d68c) slider_form_pane

0x7eb5,	// (0x00062749) control_abbreviations

0x7eb5,	// (0x00062749) control_conventions

0x7eb5,	// (0x00062749) control_definitions

0x7eb5,	// (0x00062749) format_table_attribute

0xc56b,	// (0x00066dff) bg_popup_preview_window_pane_g9

0x7eb5,	// (0x00062749) format_table_data2

0x7eb5,	// (0x00062749) format_table_data3

0x7eb5,	// (0x00062749) format_table_data_example

0x0008,

0x7eb5,	// (0x00062749) intro_purpose

0xf8de,	// (0x0006a172) bg_popup_preview_window_pane_g

0x7eb5,	// (0x00062749) texts_category

0x7eb5,	// (0x00062749) texts_graphics

0x1deb,	// (0x0005c67f) text_digital

0x1dfa,	// (0x0005c68e) text_primary

0x1e09,	// (0x0005c69d) text_primary_small

0x1e18,	// (0x0005c6ac) text_secondary

0x1e27,	// (0x0005c6bb) text_title

0xc8f5,	// (0x00067189) bg_passive_tab_pane_g1_cp3_srt

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp3_srt

0xc8fe,	// (0x00067192) bg_passive_tab_pane_g3_cp3_srt

0x802d,	// (0x000628c1) bg_active_tab_pane_cp3_srt_ParamLimits

0x802d,	// (0x000628c1) bg_active_tab_pane_cp3_srt

0xc907,	// (0x0006719b) tabs_4_active_pane_srt_g1

0xc90f,	// (0x000671a3) tabs_4_active_pane_srt_t1_ParamLimits

0xc90f,	// (0x000671a3) tabs_4_active_pane_srt_t1

0xc8f5,	// (0x00067189) bg_active_tab_pane_g1_cp3_copy1

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp3_copy1

0xc8fe,	// (0x00067192) bg_active_tab_pane_g3_cp3_copy1

0x7f03,	// (0x00062797) tabs_2_long_active_pane_srt_ParamLimits

0x7f03,	// (0x00062797) tabs_2_long_active_pane_srt

0x7f03,	// (0x00062797) tabs_2_long_passive_pane_srt_ParamLimits

0x7f03,	// (0x00062797) tabs_2_long_passive_pane_srt

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp4_srt_ParamLimits

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp4_srt

0xc683,	// (0x00066f17) bg_passive_tab_pane_g1_cp4_srt

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp4_srt

0xc68c,	// (0x00066f20) bg_passive_tab_pane_g3_cp4_srt

0x7f03,	// (0x00062797) bg_active_tab_pane_cp4_srt_ParamLimits

0x7f03,	// (0x00062797) bg_active_tab_pane_cp4_srt

0xc695,	// (0x00066f29) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc695,	// (0x00066f29) tabs_2_long_active_pane_srt_t1

0xc683,	// (0x00066f17) bg_active_tab_pane_g1_cp4_srt

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp4_srt

0xc68c,	// (0x00066f20) bg_active_tab_pane_g3_cp4_srt

0x802d,	// (0x000628c1) tabs_3_long_active_pane_srt_ParamLimits

0x802d,	// (0x000628c1) tabs_3_long_active_pane_srt

0x802d,	// (0x000628c1) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x802d,	// (0x000628c1) tabs_3_long_passive_pane_cp_srt

0x802d,	// (0x000628c1) tabs_3_long_passive_pane_srt_ParamLimits

0x802d,	// (0x000628c1) tabs_3_long_passive_pane_srt

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp5_srt_ParamLimits

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp5_srt

0xa4c2,	// (0x00064d56) bg_passive_tab_pane_g1_cp5_srt

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp5_srt

0xa4cb,	// (0x00064d5f) bg_passive_tab_pane_g3_cp5_srt

0x7f03,	// (0x00062797) bg_active_tab_pane_cp5_srt_ParamLimits

0x7f03,	// (0x00062797) bg_active_tab_pane_cp5_srt

0xc66d,	// (0x00066f01) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc66d,	// (0x00066f01) tabs_3_long_active_pane_srt_t1

0xa4c2,	// (0x00064d56) bg_active_tab_pane_g1_cp5_srt

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp5_srt

0xa4cb,	// (0x00064d5f) bg_active_tab_pane_g3_cp5_srt

0x39bf,	// (0x0005e253) navi_text_pane_srt_t1

0x39b7,	// (0x0005e24b) navi_icon_pane_srt_g1

0x1ff8,	// (0x0005c88c) midp_editing_number_pane_srt

0x1e36,	// (0x0005c6ca) midp_ticker_pane_srt

0x2000,	// (0x0005c894) midp_ticker_pane_srt_g1

0x2008,	// (0x0005c89c) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0006a001) midp_ticker_pane_srt_g

0x2010,	// (0x0005c8a4) midp_ticker_pane_srt_t1

0x39a8,	// (0x0005e23c) midp_editing_number_pane_t1_copy1

0xa54f,	// (0x00064de3) listscroll_midp_pane

0xa54f,	// (0x00064de3) midp_form_pane

0xa5ba,	// (0x00064e4e) midp_info_popup_window_ParamLimits

0xa5ba,	// (0x00064e4e) midp_info_popup_window

0x8567,	// (0x00062dfb) bg_popup_sub_pane_cp50_ParamLimits

0x8567,	// (0x00062dfb) bg_popup_sub_pane_cp50

0x2afc,	// (0x0005d390) listscroll_midp_info_pane_ParamLimits

0x2afc,	// (0x0005d390) listscroll_midp_info_pane

0x2adc,	// (0x0005d370) listscroll_form_midp_pane_ParamLimits

0x2adc,	// (0x0005d370) listscroll_form_midp_pane

0x2ae8,	// (0x0005d37c) scroll_bar_cp050

0x2adc,	// (0x0005d370) list_midp_pane

0xcab1,	// (0x00067345) signal_pane_g2_cp

0x29f6,	// (0x0005d28a) listscroll_midp_info_pane_t1_ParamLimits

0x29f6,	// (0x0005d28a) listscroll_midp_info_pane_t1

0xc163,	// (0x000669f7) listscroll_midp_info_pane_t2_ParamLimits

0xc163,	// (0x000669f7) listscroll_midp_info_pane_t2

0xc1a1,	// (0x00066a35) listscroll_midp_info_pane_t3_ParamLimits

0xc1a1,	// (0x00066a35) listscroll_midp_info_pane_t3

0xc1db,	// (0x00066a6f) listscroll_midp_info_pane_t4_ParamLimits

0xc1db,	// (0x00066a6f) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x0006a0ad) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x0006a0ad) listscroll_midp_info_pane_t

0x85dd,	// (0x00062e71) scroll_pane_cp21

0x2996,	// (0x0005d22a) form_midp_field_choice_group_pane

0xc126,	// (0x000669ba) form_midp_field_text_pane

0x29dc,	// (0x0005d270) form_midp_field_time_pane

0x29e4,	// (0x0005d278) form_midp_gauge_slider_pane

0x29ed,	// (0x0005d281) form_midp_gauge_wait_pane

0x7eb5,	// (0x00062749) form_midp_image_pane

0xb0db,	// (0x0006596f) list_single_midp_pane_ParamLimits

0xb0db,	// (0x0006596f) list_single_midp_pane

0xc104,	// (0x00066998) form_midp_field_text_pane_t1

0x2715,	// (0x0005cfa9) input_focus_pane_cp050

0x2985,	// (0x0005d219) list_midp_form_text_pane

0x291a,	// (0x0005d1ae) form_midp_field_choice_group_pane_t1

0x2928,	// (0x0005d1bc) input_focus_pane_cp051

0x293c,	// (0x0005d1d0) list_midp_choice_pane

0x7eb5,	// (0x00062749) status_idle_pane

0x28fe,	// (0x0005d192) form_midp_field_time_pane_t1

0x7eab,	// (0x0006273f) wait_anim_pane_g2_copy1

0x290c,	// (0x0005d1a0) form_midp_field_time_pane_t2

0x0001,

0x1f60,	// (0x0005c7f4) aid_navinavi_width_2_pane

0xf814,	// (0x0006a0a8) form_midp_field_time_pane_t

0x7eb5,	// (0x00062749) input_focus_pane_cp052

0x7eb5,	// (0x00062749) bg_input_focus_pane_cp040

0x28be,	// (0x0005d152) form_midp_gauge_slider_pane_t1

0x28cc,	// (0x0005d160) form_midp_gauge_slider_pane_t2

0xc0e8,	// (0x0006697c) form_midp_gauge_slider_pane_t3

0xc0f6,	// (0x0006698a) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x0006a09f) form_midp_gauge_slider_pane_t

0x28f6,	// (0x0005d18a) form_midp_slider_pane

0x7f03,	// (0x00062797) bg_input_focus_pane_cp041_ParamLimits

0x7f03,	// (0x00062797) bg_input_focus_pane_cp041

0x288b,	// (0x0005d11f) form_midp_gauge_wait_pane_t1_ParamLimits

0x288b,	// (0x0005d11f) form_midp_gauge_wait_pane_t1

0x289d,	// (0x0005d131) form_midp_gauge_wait_pane_t2_ParamLimits

0x289d,	// (0x0005d131) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x0006a09a) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x0006a09a) form_midp_gauge_wait_pane_t

0x28af,	// (0x0005d143) form_midp_wait_pane_ParamLimits

0x28af,	// (0x0005d143) form_midp_wait_pane

0xc0b2,	// (0x00066946) form_midp_image_pane_g1

0xc0bb,	// (0x0006694f) form_midp_image_pane_t1

0xc0ca,	// (0x0006695e) form_midp_image_pane_t2

0xc0d9,	// (0x0006696d) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x0006a093) form_midp_image_pane_t

0x284c,	// (0x0005d0e0) list_single_midp_pane_g1

0xdf70,	// (0x00068804) list_single_midp_pane_t1

0xc09d,	// (0x00066931) list_midp_form_item_pane_ParamLimits

0xc09d,	// (0x00066931) list_midp_form_item_pane

0x1f08,	// (0x0005c79c) list_midp_form_item_pane_t1

0x1f17,	// (0x0005c7ab) midp_ticker_pane_g1

0x1f23,	// (0x0005c7b7) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00069fe7) midp_ticker_pane_g

0x1f2f,	// (0x0005c7c3) midp_ticker_pane_t1

0x3df8,	// (0x0005e68c) midp_editing_number_pane_t1

0x3bd3,	// (0x0005e467) midp_editing_number_pane

0x3de5,	// (0x0005e679) midp_ticker_pane

0x3998,	// (0x0005e22c) ai_message_heading_pane

0x7eb5,	// (0x00062749) bg_popup_window_pane_cp14

0x39a0,	// (0x0005e234) listscroll_ai_message_pane

0x3922,	// (0x0005e1b6) ai_message_heading_pane_g1_ParamLimits

0x3922,	// (0x0005e1b6) ai_message_heading_pane_g1

0xc635,	// (0x00066ec9) ai_message_heading_pane_g2_ParamLimits

0xc635,	// (0x00066ec9) ai_message_heading_pane_g2

0x393a,	// (0x0005e1ce) ai_message_heading_pane_g3_ParamLimits

0x393a,	// (0x0005e1ce) ai_message_heading_pane_g3

0x3946,	// (0x0005e1da) ai_message_heading_pane_g4_ParamLimits

0x3946,	// (0x0005e1da) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x0006a1d4) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x0006a1d4) ai_message_heading_pane_g

0xc641,	// (0x00066ed5) ai_message_heading_pane_t1_ParamLimits

0xc641,	// (0x00066ed5) ai_message_heading_pane_t1

0xc65b,	// (0x00066eef) ai_message_heading_pane_t2_ParamLimits

0xc65b,	// (0x00066eef) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x0006a1dd) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x0006a1dd) ai_message_heading_pane_t

0x397e,	// (0x0005e212) bg_popup_heading_pane_cp1_ParamLimits

0x397e,	// (0x0005e212) bg_popup_heading_pane_cp1

0x3910,	// (0x0005e1a4) list_ai_message_pane_ParamLimits

0x3910,	// (0x0005e1a4) list_ai_message_pane

0x85dd,	// (0x00062e71) scroll_pane_cp10

0x38ac,	// (0x0005e140) list_ai_message_pane_g1

0x38b4,	// (0x0005e148) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x0006a1b1) list_ai_message_pane_g

0x38bc,	// (0x0005e150) list_ai_message_pane_t1_ParamLimits

0x38bc,	// (0x0005e150) list_ai_message_pane_t1

0x38d1,	// (0x0005e165) list_ai_message_pane_t2_ParamLimits

0x38d1,	// (0x0005e165) list_ai_message_pane_t2

0x38e6,	// (0x0005e17a) list_ai_message_pane_t3_ParamLimits

0x38e6,	// (0x0005e17a) list_ai_message_pane_t3

0x38fb,	// (0x0005e18f) list_ai_message_pane_t4_ParamLimits

0x38fb,	// (0x0005e18f) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x0006a1b6) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x0006a1b6) list_ai_message_pane_t

0xc611,	// (0x00066ea5) cell_ai_soft_ind_pane_ParamLimits

0xc611,	// (0x00066ea5) cell_ai_soft_ind_pane

0x1f41,	// (0x0005c7d5) cell_ai_soft_ind_pane_g1_ParamLimits

0x1f41,	// (0x0005c7d5) cell_ai_soft_ind_pane_g1

0x7eb5,	// (0x00062749) grid_highlight_cp1

0x1f4e,	// (0x0005c7e2) text_secondary_cp56_ParamLimits

0x1f4e,	// (0x0005c7e2) text_secondary_cp56

0x386c,	// (0x0005e100) example_general_pane_ParamLimits

0x386c,	// (0x0005e100) example_general_pane

0x3878,	// (0x0005e10c) example_parent_pane_g1_ParamLimits

0x3878,	// (0x0005e10c) example_parent_pane_g1

0x3884,	// (0x0005e118) example_parent_pane_t1_ParamLimits

0x3884,	// (0x0005e118) example_parent_pane_t1

0xacd4,	// (0x00065568) popup_preview_text_window_ParamLimits

0xacd4,	// (0x00065568) popup_preview_text_window

0xf48e,	// (0x00069d22) list_single_pane_cp2_g4

0x80e3,	// (0x00062977) bg_popup_preview_window_pane_ParamLimits

0x80e3,	// (0x00062977) bg_popup_preview_window_pane

0xc573,	// (0x00066e07) popup_preview_text_window_t1_ParamLimits

0xc573,	// (0x00066e07) popup_preview_text_window_t1

0x35e4,	// (0x0005de78) popup_preview_text_window_t2_ParamLimits

0x35e4,	// (0x0005de78) popup_preview_text_window_t2

0x362d,	// (0x0005dec1) popup_preview_text_window_t3_ParamLimits

0x362d,	// (0x0005dec1) popup_preview_text_window_t3

0x3672,	// (0x0005df06) popup_preview_text_window_t4_ParamLimits

0x3672,	// (0x0005df06) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x0006a185) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x0006a185) popup_preview_text_window_t

0x36f0,	// (0x0005df84) scroll_pane_cp11

0x2689,	// (0x0005cf1d) bg_popup_preview_window_pane_g1

0xc533,	// (0x00066dc7) bg_popup_preview_window_pane_g2

0xc53b,	// (0x00066dcf) bg_popup_preview_window_pane_g3

0xc543,	// (0x00066dd7) bg_popup_preview_window_pane_g4

0xc54b,	// (0x00066ddf) bg_popup_preview_window_pane_g5

0xc553,	// (0x00066de7) bg_popup_preview_window_pane_g6

0xc55b,	// (0x00066def) bg_popup_preview_window_pane_g7

0xc563,	// (0x00066df7) bg_popup_preview_window_pane_g8

0xdb9e,	// (0x00068432) aid_popup_width_pane

0xac50,	// (0x000654e4) popup_midp_note_alarm_window_ParamLimits

0xac50,	// (0x000654e4) popup_midp_note_alarm_window

0x84be,	// (0x00062d52) data_form_pane_ParamLimits

0x9f61,	// (0x000647f5) form_field_data_pane_g1

0x9f6b,	// (0x000647ff) form_field_data_pane_t1_ParamLimits

0x84ca,	// (0x00062d5e) input_focus_pane_ParamLimits

0xdc63,	// (0x000684f7) data_form_wide_pane_ParamLimits

0xdc74,	// (0x00068508) form_field_data_wide_pane_g1

0xdc80,	// (0x00068514) form_field_data_wide_pane_t1_ParamLimits

0x81b7,	// (0x00062a4b) input_focus_pane_cp6_ParamLimits

0xa0ca,	// (0x0006495e) input_popup_find_pane_g1_ParamLimits

0xa0ca,	// (0x0006495e) input_popup_find_pane_g1

0xf0ac,	// (0x00069940) aid_navi_side_left_pane

0xf0c1,	// (0x00069955) aid_navi_side_right_pane

0x2faf,	// (0x0005d843) bg_popup_window_pane_cp30_ParamLimits

0x2faf,	// (0x0005d843) bg_popup_window_pane_cp30

0x3029,	// (0x0005d8bd) popup_midp_note_alarm_window_g1_ParamLimits

0x3029,	// (0x0005d8bd) popup_midp_note_alarm_window_g1

0x3059,	// (0x0005d8ed) popup_midp_note_alarm_window_t1_ParamLimits

0x3059,	// (0x0005d8ed) popup_midp_note_alarm_window_t1

0xc37c,	// (0x00066c10) popup_midp_note_alarm_window_t2_ParamLimits

0xc37c,	// (0x00066c10) popup_midp_note_alarm_window_t2

0xc42a,	// (0x00066cbe) popup_midp_note_alarm_window_t3_ParamLimits

0xc42a,	// (0x00066cbe) popup_midp_note_alarm_window_t3

0xc452,	// (0x00066ce6) popup_midp_note_alarm_window_t4_ParamLimits

0xc452,	// (0x00066ce6) popup_midp_note_alarm_window_t4

0x31f0,	// (0x0005da84) popup_midp_note_alarm_window_t5_ParamLimits

0x31f0,	// (0x0005da84) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x0006a122) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x0006a122) popup_midp_note_alarm_window_t

0x329c,	// (0x0005db30) wait_bar_pane_cp1_ParamLimits

0x329c,	// (0x0005db30) wait_bar_pane_cp1

0x7eb5,	// (0x00062749) wait_anim_pane_copy1

0x7eb5,	// (0x00062749) wait_border_pane_copy1

0x2ca5,	// (0x0005d539) wait_border_pane_g1_copy1

0xdc9a,	// (0x0006852e) form_field_popup_pane_g1

0x9f85,	// (0x00064819) form_field_popup_pane_t1_ParamLimits

0x84ca,	// (0x00062d5e) input_focus_pane_cp7_ParamLimits

0x84ec,	// (0x00062d80) list_form_pane_ParamLimits

0xdca2,	// (0x00068536) form_field_popup_wide_pane_g1

0xdcaa,	// (0x0006853e) form_field_popup_wide_pane_t1_ParamLimits

0x84ca,	// (0x00062d5e) input_focus_pane_cp8_ParamLimits

0x84f8,	// (0x00062d8c) list_form_wide_pane_ParamLimits

0xc968,	// (0x000671fc) aid_size_cell_graphic_pane

0xa004,	// (0x00064898) data_form_pane_t1_ParamLimits

0xb1c7,	// (0x00065a5b) data_form_wide_pane_t1_ParamLimits

0xbd0c,	// (0x000665a0) bg_status_flat_pane

0x94f0,	// (0x00063d84) title_pane_t1_ParamLimits

0x7ecb,	// (0x0006275f) title_pane_t2_ParamLimits

0x7ef1,	// (0x00062785) title_pane_t3_ParamLimits

0xf557,	// (0x00069deb) title_pane_t_ParamLimits

0x8886,	// (0x0006311a) level_1_signal_ParamLimits

0x8893,	// (0x00063127) level_2_signal_ParamLimits

0xbb14,	// (0x000663a8) level_3_signal_ParamLimits

0xbb21,	// (0x000663b5) level_4_signal_ParamLimits

0xbb2e,	// (0x000663c2) level_5_signal_ParamLimits

0xbb3b,	// (0x000663cf) level_6_signal_ParamLimits

0xbb48,	// (0x000663dc) level_7_signal_ParamLimits

0x8886,	// (0x0006311a) level_1_battery_ParamLimits

0x8893,	// (0x00063127) level_2_battery_ParamLimits

0xbb14,	// (0x000663a8) level_3_battery_ParamLimits

0xbb21,	// (0x000663b5) level_4_battery_ParamLimits

0xbb2e,	// (0x000663c2) level_5_battery_ParamLimits

0xbb3b,	// (0x000663cf) level_6_battery_ParamLimits

0xbb48,	// (0x000663dc) level_7_battery_ParamLimits

0x2eb4,	// (0x0005d748) bg_status_flat_pane_g1

0x2ebc,	// (0x0005d750) bg_status_flat_pane_g2

0x2ec4,	// (0x0005d758) bg_status_flat_pane_g3

0x2ecc,	// (0x0005d760) bg_status_flat_pane_g4

0x2ed4,	// (0x0005d768) bg_status_flat_pane_g5

0x2edc,	// (0x0005d770) bg_status_flat_pane_g6

0x2ee4,	// (0x0005d778) bg_status_flat_pane_g7

0x9584,	// (0x00063e18) tabs_3_active_pane_t1_ParamLimits

0x9584,	// (0x00063e18) tabs_3_passive_pane_t1_ParamLimits

0x959e,	// (0x00063e32) tabs_4_active_pane_t1_ParamLimits

0x959e,	// (0x00063e32) tabs_4_1_passive_pane_t1_ParamLimits

0xa109,	// (0x0006499d) tabs_2_active_pane_t1_ParamLimits

0xa109,	// (0x0006499d) tabs_2_passive_pane_t1_ParamLimits

0x7f03,	// (0x00062797) bg_active_tab_pane_cp4_ParamLimits

0xa11b,	// (0x000649af) tabs_2_long_active_pane_t1_ParamLimits

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp4_ParamLimits

0x0754,	// (0x0005afe8) list_single_midp_graphic_pane_t1_ParamLimits

0x7f03,	// (0x00062797) bg_active_tab_pane_cp5_ParamLimits

0xa12e,	// (0x000649c2) tabs_3_long_active_pane_t1_ParamLimits

0x217c,	// (0x0005ca10) bg_passive_tab_pane_cp5_ParamLimits

0x0754,	// (0x0005afe8) list_single_midp_graphic_pane_t1

0xbd0c,	// (0x000665a0) bg_status_flat_pane_ParamLimits

0x231c,	// (0x0005cbb0) indicator_pane_cp2_ParamLimits

0x231c,	// (0x0005cbb0) indicator_pane_cp2

0xbe8a,	// (0x0006671e) navi_pane_srt_ParamLimits

0xbe8a,	// (0x0006671e) navi_pane_srt

0x246b,	// (0x0005ccff) popup_clock_digital_analogue_window_cp1

0x7f47,	// (0x000627db) indicator_pane_t1

0x1e36,	// (0x0005c6ca) copy_highlight_pane

0x1e36,	// (0x0005c6ca) cursor_graphics_pane

0x1e36,	// (0x0005c6ca) graphic_within_text_pane

0x1e36,	// (0x0005c6ca) link_highlight_pane

0x36b3,	// (0x0005df47) popup_preview_text_window_t5_ParamLimits

0x36b3,	// (0x0005df47) popup_preview_text_window_t5

0x1f68,	// (0x0005c7fc) cursor_digital_pane

0x1f68,	// (0x0005c7fc) cursor_primary_pane

0x1f79,	// (0x0005c80d) cursor_primary_small_pane

0x1f81,	// (0x0005c815) cursor_secondary_pane

0x1f89,	// (0x0005c81d) cursor_title_pane

0x1f68,	// (0x0005c7fc) link_highlight_digital_pane

0x1f70,	// (0x0005c804) link_highlight_primary_pane

0x1f79,	// (0x0005c80d) link_highlight_primary_small_pane

0x1f81,	// (0x0005c815) link_highlight_secondary_pane

0x1f89,	// (0x0005c81d) link_highlight_title_pane

0x1f68,	// (0x0005c7fc) copy_highlight_digital_pane

0x1f68,	// (0x0005c7fc) copy_highlight_primary_pane

0x1f79,	// (0x0005c80d) copy_highlight_primary_small_pane

0x1f81,	// (0x0005c815) copy_highlight_secondary_pane

0x1f89,	// (0x0005c81d) copy_highlight_title_pane

0x1f81,	// (0x0005c815) graphic_text_digital_pane

0x2f52,	// (0x0005d7e6) graphic_text_primary_pane

0x2f5b,	// (0x0005d7ef) graphic_text_primary_small_pane

0x1f79,	// (0x0005c80d) graphic_text_secondary_pane

0x1f68,	// (0x0005c7fc) graphic_text_title_pane

0xa60b,	// (0x00064e9f) cursor_primary_pane_g1

0x2f44,	// (0x0005d7d8) cursor_text_primary_t1

0xc372,	// (0x00066c06) cursor_primary_small_pane_g1

0x2f36,	// (0x0005d7ca) cursor_text_primary_small_t1

0xc368,	// (0x00066bfc) cursor_primary_small_pane_g1_copy1

0x2f1e,	// (0x0005d7b2) cursor_text_primary_small_t1_copy1

0x2efc,	// (0x0005d790) cursor_text_title_t1

0xc35e,	// (0x00066bf2) cursor_title_pane_g1

0xa60b,	// (0x00064e9f) cursor_digital_pane_g1

0x1f9b,	// (0x0005c82f) cursor_text_digital_t1

0x1fa9,	// (0x0005c83d) link_highlight_primary_pane_g1

0x2ea5,	// (0x0005d739) link_highlight_primary_pane_t1

0x1fa9,	// (0x0005c83d) link_highlight_primary_small_pane_g1

0x1fb1,	// (0x0005c845) link_highlight_primary_small_pane_t1

0x1fa9,	// (0x0005c83d) link_highlight_secondary_pane_g1

0x1fc0,	// (0x0005c854) link_highlight_secondary_pane_t1

0x2e0a,	// (0x0005d69e) link_highlight_title_pane_g1

0x2e21,	// (0x0005d6b5) link_highlight_title_pane_t1

0x2e0a,	// (0x0005d69e) link_highlight_digital_pane_g1

0x2e12,	// (0x0005d6a6) link_highlight_digital_pane_t1

0x2cc4,	// (0x0005d558) copy_highlight_primary_pane_g1

0x2cea,	// (0x0005d57e) copy_highlight_primary_pane_t1

0x2cc4,	// (0x0005d558) copy_highlight_primary_small_pane_g1

0x2cdb,	// (0x0005d56f) copy_highlight_primary_small_pane_t1

0x1fcf,	// (0x0005c863) copy_highlight_secondary_pane_g1

0x1fd7,	// (0x0005c86b) copy_highlight_secondary_pane_t1

0x2cc4,	// (0x0005d558) copy_highlight_title_pane_g1

0x2ccc,	// (0x0005d560) copy_highlight_title_pane_t1

0x2cc4,	// (0x0005d558) copy_highlight_digital_pane_g1

0x4115,	// (0x0005e9a9) copy_highlight_digital_pane_t1

0x4069,	// (0x0005e8fd) graphic_text_primary_pane_g1

0x40f9,	// (0x0005e98d) graphic_text_primary_pane_t1

0x4107,	// (0x0005e99b) graphic_text_primary_pane_t2

0x0001,

0xf9bd,	// (0x0006a251) graphic_text_primary_pane_t

0x40d5,	// (0x0005e969) graphic_text_primary_small_pane_g1

0x40dd,	// (0x0005e971) graphic_text_primary_small_pane_t1

0x40eb,	// (0x0005e97f) graphic_text_primary_small_pane_t2

0x0001,

0xf9b8,	// (0x0006a24c) graphic_text_primary_small_pane_t

0x40b1,	// (0x0005e945) graphic_text_secondary_pane_g1

0x40b9,	// (0x0005e94d) graphic_text_secondary_pane_t1

0x40c7,	// (0x0005e95b) graphic_text_secondary_pane_t2

0x0001,

0xf9b3,	// (0x0006a247) graphic_text_secondary_pane_t

0x408d,	// (0x0005e921) graphic_text_title_pane_g1

0x4095,	// (0x0005e929) graphic_text_title_pane_t1

0x40a3,	// (0x0005e937) graphic_text_title_pane_t2

0x0001,

0xf9ae,	// (0x0006a242) graphic_text_title_pane_t

0x4069,	// (0x0005e8fd) graphic_text_digital_pane_g1

0x4071,	// (0x0005e905) graphic_text_digital_pane_t1

0x407f,	// (0x0005e913) graphic_text_digital_pane_t2

0x0001,

0xf9a9,	// (0x0006a23d) graphic_text_digital_pane_t

0x7f03,	// (0x00062797) navi_icon_pane_srt_ParamLimits

0x7f03,	// (0x00062797) navi_icon_pane_srt

0x7eb5,	// (0x00062749) navi_midp_pane_srt

0x7eb5,	// (0x00062749) navi_navi_pane_srt

0x7f03,	// (0x00062797) navi_text_pane_srt_ParamLimits

0x7f03,	// (0x00062797) navi_text_pane_srt

0x4034,	// (0x0005e8c8) navi_navi_icon_text_pane_srt

0x403c,	// (0x0005e8d0) navi_navi_pane_srt_g1_ParamLimits

0x403c,	// (0x0005e8d0) navi_navi_pane_srt_g1

0x404e,	// (0x0005e8e2) navi_navi_pane_srt_g2_ParamLimits

0x404e,	// (0x0005e8e2) navi_navi_pane_srt_g2

0x0001,

0xf9a4,	// (0x0006a238) navi_navi_pane_srt_g_ParamLimits

0xf9a4,	// (0x0006a238) navi_navi_pane_srt_g

0x4060,	// (0x0005e8f4) navi_navi_tabs_pane_srt

0x4034,	// (0x0005e8c8) navi_navi_text_pane_srt

0x4034,	// (0x0005e8c8) navi_navi_volume_pane_srt

0x4025,	// (0x0005e8b9) navi_navi_text_pane_srt_t1

0x0b93,	// (0x0005b427) navi_navi_volume_pane_srt_g1

0x0b9b,	// (0x0005b42f) volume_small_pane_srt_ParamLimits

0x0b9b,	// (0x0005b42f) volume_small_pane_srt

0xf496,	// (0x00069d2a) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x00069d2a) volume_small_pane_srt_g1

0xf4a6,	// (0x00069d3a) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x00069d3a) volume_small_pane_srt_g2

0xf4b7,	// (0x00069d4b) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x00069d4b) volume_small_pane_srt_g3

0xf4c8,	// (0x00069d5c) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x00069d5c) volume_small_pane_srt_g4

0xf4d9,	// (0x00069d6d) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x00069d6d) volume_small_pane_srt_g5

0xf4ea,	// (0x00069d7e) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x00069d7e) volume_small_pane_srt_g6

0xf4fb,	// (0x00069d8f) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x00069d8f) volume_small_pane_srt_g7

0xf50c,	// (0x00069da0) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x00069da0) volume_small_pane_srt_g8

0xf51d,	// (0x00069db1) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x00069db1) volume_small_pane_srt_g9

0xf52e,	// (0x00069dc2) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x00069dc2) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00069fec) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00069fec) volume_small_pane_srt_g

0x985f,	// (0x000640f3) query_popup_data_pane_cp2

0x400b,	// (0x0005e89f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x400b,	// (0x0005e89f) navi_navi_icon_text_pane_srt_t1

0x2f52,	// (0x0005d7e6) navi_tabs_2_long_pane_srt

0x2f52,	// (0x0005d7e6) navi_tabs_2_pane_srt

0x2f52,	// (0x0005d7e6) navi_tabs_3_long_pane_srt

0x2f52,	// (0x0005d7e6) navi_tabs_3_pane_srt

0x2f52,	// (0x0005d7e6) navi_tabs_4_pane_srt

0xb23e,	// (0x00065ad2) tabs_2_active_pane_srt_ParamLimits

0xb23e,	// (0x00065ad2) tabs_2_active_pane_srt

0xb24e,	// (0x00065ae2) tabs_2_passive_pane_srt_ParamLimits

0xb24e,	// (0x00065ae2) tabs_2_passive_pane_srt

0x2715,	// (0x0005cfa9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2715,	// (0x0005cfa9) bg_passive_tab_pane_cp1_srt

0xc9b2,	// (0x00067246) bg_passive_tab_pane_g1_cp1_srt

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp1_srt

0xc9bb,	// (0x0006724f) bg_passive_tab_pane_g3_cp1_srt

0x802d,	// (0x000628c1) bg_active_tab_pane_cp1_srt_ParamLimits

0x802d,	// (0x000628c1) bg_active_tab_pane_cp1_srt

0xc9c4,	// (0x00067258) tabs_2_active_pane_srt_g1

0xc9cc,	// (0x00067260) tabs_2_active_pane_srt_t1_ParamLimits

0xc9cc,	// (0x00067260) tabs_2_active_pane_srt_t1

0xc9b2,	// (0x00067246) bg_active_tab_pane_g1_cp1_srt

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp1_srt

0xc9bb,	// (0x0006724f) bg_active_tab_pane_g3_cp1_srt

0xb20b,	// (0x00065a9f) tabs_3_active_pane_srt_ParamLimits

0xb20b,	// (0x00065a9f) tabs_3_active_pane_srt

0xb21c,	// (0x00065ab0) tabs_3_passive_pane_cp_srt_ParamLimits

0xb21c,	// (0x00065ab0) tabs_3_passive_pane_cp_srt

0xb22d,	// (0x00065ac1) tabs_3_passive_pane_srt_ParamLimits

0xb22d,	// (0x00065ac1) tabs_3_passive_pane_srt

0x2715,	// (0x0005cfa9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2715,	// (0x0005cfa9) bg_passive_tab_pane_cp2_srt

0xa615,	// (0x00064ea9) bg_passive_tab_pane_g1_cp2_srt

0xa476,	// (0x00064d0a) bg_passive_tab_pane_g2_cp2_srt

0xa61e,	// (0x00064eb2) bg_passive_tab_pane_g3_cp2_srt

0x802d,	// (0x000628c1) bg_active_tab_pane_cp2_srt_ParamLimits

0x802d,	// (0x000628c1) bg_active_tab_pane_cp2_srt

0xc994,	// (0x00067228) tabs_3_active_pane_srt_g1

0xc99c,	// (0x00067230) tabs_3_active_pane_srt_t1_ParamLimits

0xc99c,	// (0x00067230) tabs_3_active_pane_srt_t1

0xa615,	// (0x00064ea9) bg_active_tab_pane_g1_cp2_srt

0xa476,	// (0x00064d0a) bg_active_tab_pane_g2_cp2_srt

0xa61e,	// (0x00064eb2) bg_active_tab_pane_g3_cp2_srt

0x0af8,	// (0x0005b38c) tabs_4_active_pane_srt_ParamLimits

0x0af8,	// (0x0005b38c) tabs_4_active_pane_srt

0x0b0a,	// (0x0005b39e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b0a,	// (0x0005b39e) tabs_4_passive_pane_cp2_srt

0x00e6,	// (0x0005a97a) aid_size_cell_toolbar

0x3a50,	// (0x0005e2e4) main_idle_act_pane_ParamLimits

0xaa92,	// (0x00065326) popup_large_graphic_colour_window_ParamLimits

0xaf86,	// (0x0006581a) popup_toolbar_window_ParamLimits

0xaf86,	// (0x0006581a) popup_toolbar_window

0x3e07,	// (0x0005e69b) list_single_graphic_2heading_pane_ParamLimits

0x3e07,	// (0x0005e69b) list_single_graphic_2heading_pane

0x876e,	// (0x00063002) aid_size_cell_apps_grid_lsc_pane

0x8780,	// (0x00063014) aid_size_cell_apps_grid_prt_pane

0x217c,	// (0x0005ca10) bg_wml_button_pane_cp1_ParamLimits

0x217c,	// (0x0005ca10) bg_wml_button_pane_cp1

0xc104,	// (0x00066998) form_midp_field_text_pane_t1_ParamLimits

0x2715,	// (0x0005cfa9) input_focus_pane_cp050_ParamLimits

0x2985,	// (0x0005d219) list_midp_form_text_pane_ParamLimits

0x2928,	// (0x0005d1bc) input_focus_pane_cp051_ParamLimits

0x293c,	// (0x0005d1d0) list_midp_choice_pane_ParamLimits

0xc069,	// (0x000668fd) list_single_2graphic_pane_cp3_ParamLimits

0xc069,	// (0x000668fd) list_single_2graphic_pane_cp3

0xc07d,	// (0x00066911) list_single_midp_graphic_pane_ParamLimits

0xc07d,	// (0x00066911) list_single_midp_graphic_pane

0xde74,	// (0x00068708) list_single_graphic_2heading_pane_g1_ParamLimits

0xde74,	// (0x00068708) list_single_graphic_2heading_pane_g1

0xde80,	// (0x00068714) list_single_graphic_2heading_pane_g4_ParamLimits

0xde80,	// (0x00068714) list_single_graphic_2heading_pane_g4

0xde8c,	// (0x00068720) list_single_graphic_2heading_pane_g5_ParamLimits

0xde8c,	// (0x00068720) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0006a03f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0006a03f) list_single_graphic_2heading_pane_g

0xde98,	// (0x0006872c) list_single_graphic_2heading_pane_t1_ParamLimits

0xde98,	// (0x0006872c) list_single_graphic_2heading_pane_t1

0xdeac,	// (0x00068740) list_single_graphic_2heading_pane_t2_ParamLimits

0xdeac,	// (0x00068740) list_single_graphic_2heading_pane_t2

0xdec6,	// (0x0006875a) list_single_graphic_2heading_pane_t3_ParamLimits

0xdec6,	// (0x0006875a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0006a046) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0006a046) list_single_graphic_2heading_pane_t

0x25c7,	// (0x0005ce5b) bg_popup_sub_pane_cp2

0x25f1,	// (0x0005ce85) grid_toobar_pane

0x06c3,	// (0x0005af57) cell_toolbar_pane_ParamLimits

0x06c3,	// (0x0005af57) cell_toolbar_pane

0x262d,	// (0x0005cec1) cell_toolbar_pane_g1_ParamLimits

0x262d,	// (0x0005cec1) cell_toolbar_pane_g1

0xc029,	// (0x000668bd) cell_toolbar_pane_g2_ParamLimits

0xc029,	// (0x000668bd) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x0006a04d) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x0006a04d) cell_toolbar_pane_g

0x2663,	// (0x0005cef7) grid_highlight_pane_cp2_ParamLimits

0x2663,	// (0x0005cef7) grid_highlight_pane_cp2

0x267d,	// (0x0005cf11) toolbar_button_pane

0x2689,	// (0x0005cf1d) toolbar_button_pane_g1

0x2691,	// (0x0005cf25) toolbar_button_pane_g2

0x2699,	// (0x0005cf2d) toolbar_button_pane_g3

0x26a1,	// (0x0005cf35) toolbar_button_pane_g4

0x26a9,	// (0x0005cf3d) toolbar_button_pane_g5

0x26b1,	// (0x0005cf45) toolbar_button_pane_g6

0x26b9,	// (0x0005cf4d) toolbar_button_pane_g7

0x26c1,	// (0x0005cf55) toolbar_button_pane_g8

0x26c9,	// (0x0005cf5d) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0006a052) toolbar_button_pane_g

0x06fb,	// (0x0005af8f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06fb,	// (0x0005af8f) list_single_2graphic_pane_g1_cp3

0xb033,	// (0x000658c7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb033,	// (0x000658c7) list_single_2graphic_pane_g2_cp3

0x0718,	// (0x0005afac) list_single_2graphic_pane_g3_cp3

0x0720,	// (0x0005afb4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0720,	// (0x0005afb4) list_single_2graphic_pane_g4_cp3

0xb044,	// (0x000658d8) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb044,	// (0x000658d8) list_single_2graphic_pane_t1_cp3

0x0748,	// (0x0005afdc) list_single_midp_graphic_pane_g2_ParamLimits

0x0748,	// (0x0005afdc) list_single_midp_graphic_pane_g2

0xde64,	// (0x000686f8) aid_zoom_text_primary

0x00ee,	// (0x0005a982) aid_zoom_text_secondary

0xa675,	// (0x00064f09) status_small_pane_g7_ParamLimits

0xa675,	// (0x00064f09) status_small_pane_g7

0xa698,	// (0x00064f2c) status_small_pane_t1_ParamLimits

0x94cc,	// (0x00063d60) title_pane_g2

0x0003,

0xf54e,	// (0x00069de2) title_pane_g

0x98b9,	// (0x0006414d) aid_size_cell_colour_1_pane_ParamLimits

0x98b9,	// (0x0006414d) aid_size_cell_colour_1_pane

0x98cd,	// (0x00064161) aid_size_cell_colour_2_pane_ParamLimits

0x98cd,	// (0x00064161) aid_size_cell_colour_2_pane

0x98e1,	// (0x00064175) aid_size_cell_colour_3_pane_ParamLimits

0x98e1,	// (0x00064175) aid_size_cell_colour_3_pane

0x98f5,	// (0x00064189) aid_size_cell_colour_4_pane_ParamLimits

0x98f5,	// (0x00064189) aid_size_cell_colour_4_pane

0xefe9,	// (0x0006987d) title_pane_stacon_g1_ParamLimits

0xefe9,	// (0x0006987d) title_pane_stacon_g1

0x2d41,	// (0x0005d5d5) popup_note_wait_window_g3_ParamLimits

0x2d41,	// (0x0005d5d5) popup_note_wait_window_g3

0x2db7,	// (0x0005d64b) popup_note_wait_window_t5_ParamLimits

0x2db7,	// (0x0005d64b) popup_note_wait_window_t5

0x7eb5,	// (0x00062749) main_feb_china_hwr_fs_writing_pane

0xa914,	// (0x000651a8) popup_feb_china_hwr_fs_window_ParamLimits

0xa914,	// (0x000651a8) popup_feb_china_hwr_fs_window

0xb060,	// (0x000658f4) aid_size_cell_hwr_fs_ParamLimits

0xb060,	// (0x000658f4) aid_size_cell_hwr_fs

0x2715,	// (0x0005cfa9) bg_popup_sub_pane_cp3_ParamLimits

0x2715,	// (0x0005cfa9) bg_popup_sub_pane_cp3

0xb075,	// (0x00065909) grid_hwr_fs_pane_ParamLimits

0xb075,	// (0x00065909) grid_hwr_fs_pane

0x0797,	// (0x0005b02b) linegrid_hwr_fs_pane_ParamLimits

0x0797,	// (0x0005b02b) linegrid_hwr_fs_pane

0xb08d,	// (0x00065921) cell_hwr_fs_pane_ParamLimits

0xb08d,	// (0x00065921) cell_hwr_fs_pane

0x2721,	// (0x0005cfb5) linegrid_hwr_fs_pane_g1_ParamLimits

0x2721,	// (0x0005cfb5) linegrid_hwr_fs_pane_g1

0xc03d,	// (0x000668d1) linegrid_hwr_fs_pane_g2_ParamLimits

0xc03d,	// (0x000668d1) linegrid_hwr_fs_pane_g2

0x273f,	// (0x0005cfd3) linegrid_hwr_fs_pane_g3_ParamLimits

0x273f,	// (0x0005cfd3) linegrid_hwr_fs_pane_g3

0xb0b3,	// (0x00065947) linegrid_hwr_fs_pane_g4_ParamLimits

0xb0b3,	// (0x00065947) linegrid_hwr_fs_pane_g4

0x07e3,	// (0x0005b077) linegrid_hwr_fs_pane_g5_ParamLimits

0x07e3,	// (0x0005b077) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x0006a078) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x0006a078) linegrid_hwr_fs_pane_g

0x274b,	// (0x0005cfdf) cell_hwr_fs_pane_g1_ParamLimits

0x274b,	// (0x0005cfdf) cell_hwr_fs_pane_g1

0x2501,	// (0x0005cd95) cell_hwr_fs_pane_g2_ParamLimits

0x2501,	// (0x0005cd95) cell_hwr_fs_pane_g2

0xc04f,	// (0x000668e3) cell_hwr_fs_pane_g3_ParamLimits

0xc04f,	// (0x000668e3) cell_hwr_fs_pane_g3

0xc05c,	// (0x000668f0) cell_hwr_fs_pane_g4_ParamLimits

0xc05c,	// (0x000668f0) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x0006a083) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x0006a083) cell_hwr_fs_pane_g

0xb0cd,	// (0x00065961) cell_hwr_fs_pane_t1

0x7eb5,	// (0x00062749) grid_highlight_pane_cp6

0x7eb5,	// (0x00062749) main_idle_act2_pane

0x85c4,	// (0x00062e58) aid_inside_area_popup_secondary

0xc491,	// (0x00066d25) aid_inside_area_window_primary_ParamLimits

0xc491,	// (0x00066d25) aid_inside_area_window_primary

0xc9ea,	// (0x0006727e) ai2_news_ticker_pane

0x412c,	// (0x0005e9c0) aid_size_cell_ai1_link_ParamLimits

0x412c,	// (0x0005e9c0) aid_size_cell_ai1_link

0xc9f2,	// (0x00067286) popup_ai2_data_window_ParamLimits

0xc9f2,	// (0x00067286) popup_ai2_data_window

0x415c,	// (0x0005e9f0) popup_ai2_link_window_ParamLimits

0x415c,	// (0x0005e9f0) popup_ai2_link_window

0x2715,	// (0x0005cfa9) bg_popup_sub_pane_cp4_ParamLimits

0x2715,	// (0x0005cfa9) bg_popup_sub_pane_cp4

0x4170,	// (0x0005ea04) grid_ai2_link_pane_ParamLimits

0x4170,	// (0x0005ea04) grid_ai2_link_pane

0x4187,	// (0x0005ea1b) popup_ai2_link_window_g1_ParamLimits

0x4187,	// (0x0005ea1b) popup_ai2_link_window_g1

0x4193,	// (0x0005ea27) popup_ai2_link_window_g2_ParamLimits

0x4193,	// (0x0005ea27) popup_ai2_link_window_g2

0x0001,

0xf9c2,	// (0x0006a256) popup_ai2_link_window_g_ParamLimits

0xf9c2,	// (0x0006a256) popup_ai2_link_window_g

0x41a2,	// (0x0005ea36) ai2_mp_button_pane

0x41aa,	// (0x0005ea3e) ai2_mp_volume_pane

0x2928,	// (0x0005d1bc) bg_popup_sub_pane_cp5_ParamLimits

0x2928,	// (0x0005d1bc) bg_popup_sub_pane_cp5

0x41b2,	// (0x0005ea46) heading_ai2_gene_pane_ParamLimits

0x41b2,	// (0x0005ea46) heading_ai2_gene_pane

0x41be,	// (0x0005ea52) list_ai2_gene_pane_ParamLimits

0x41be,	// (0x0005ea52) list_ai2_gene_pane

0x4206,	// (0x0005ea9a) cell_ai2_link_pane_ParamLimits

0x4206,	// (0x0005ea9a) cell_ai2_link_pane

0x421c,	// (0x0005eab0) cell_ai2_link_pane_g1

0x7eb5,	// (0x00062749) grid_highlight_pane_cp7

0x0bb0,	// (0x0005b444) ai2_mp_volume_pane_g1

0x42ec,	// (0x0005eb80) ai2_mp_volume_pane_g2

0x4261,	// (0x0005eaf5) list_ai2_gene_pane_t1

0x42f4,	// (0x0005eb88) ai2_mp_volume_pane_g3

0x0002,

0xf9db,	// (0x0006a26f) ai2_mp_volume_pane_g

0xb25e,	// (0x00065af2) volume_small_pane_cp3

0x42fc,	// (0x0005eb90) aid_size_cell_ai2_button

0x4304,	// (0x0005eb98) grid_ai2_button_pane

0x430d,	// (0x0005eba1) cell_ai2_button_pane_ParamLimits

0x430d,	// (0x0005eba1) cell_ai2_button_pane

0x7eab,	// (0x0006273f) cell_ai2_button_pane_g1

0x7eb5,	// (0x00062749) grid_highlight_pane_cp8

0x42ac,	// (0x0005eb40) ai2_gene_pane_t1_ParamLimits

0x42ac,	// (0x0005eb40) ai2_gene_pane_t1

0xa866,	// (0x000650fa) aid_height_parent_landscape

0xc6df,	// (0x00066f73) aid_height_set_list

0x3a50,	// (0x0005e2e4) aid_size_parent

0xc968,	// (0x000671fc) aid_size_cell_graphic_pane_ParamLimits

0x41ce,	// (0x0005ea62) popup_ai2_data_window_g1_ParamLimits

0x41ce,	// (0x0005ea62) popup_ai2_data_window_g1

0x41da,	// (0x0005ea6e) ai2_news_ticker_pane_g1

0x41e2,	// (0x0005ea76) ai2_news_ticker_pane_g2

0x0001,

0xf9c7,	// (0x0006a25b) ai2_news_ticker_pane_g

0x41ea,	// (0x0005ea7e) ai2_news_ticker_pane_t1

0x41f8,	// (0x0005ea8c) ai2_news_ticker_pane_t2

0x0001,

0xf9cc,	// (0x0006a260) ai2_news_ticker_pane_t

0x4225,	// (0x0005eab9) heading_ai2_gene_pane_g1

0x422d,	// (0x0005eac1) heading_ai2_gene_pane_t1_ParamLimits

0x422d,	// (0x0005eac1) heading_ai2_gene_pane_t1

0x4242,	// (0x0005ead6) list_highlight_pane_cp6

0x424a,	// (0x0005eade) ai2_gene_pane_ParamLimits

0x424a,	// (0x0005eade) ai2_gene_pane

0x426f,	// (0x0005eb03) list_ai2_gene_pane_t2

0x0001,

0xf9d1,	// (0x0006a265) list_ai2_gene_pane_t

0x427d,	// (0x0005eb11) list_highlight_pane_cp8_ParamLimits

0x427d,	// (0x0005eb11) list_highlight_pane_cp8

0x428e,	// (0x0005eb22) ai2_gene_pane_g1_ParamLimits

0x428e,	// (0x0005eb22) ai2_gene_pane_g1

0x42a0,	// (0x0005eb34) ai2_gene_pane_g2_ParamLimits

0x42a0,	// (0x0005eb34) ai2_gene_pane_g2

0x0001,

0xf9d6,	// (0x0006a26a) ai2_gene_pane_g_ParamLimits

0xf9d6,	// (0x0006a26a) ai2_gene_pane_g

0x8262,	// (0x00062af6) scroll_pane_cp12

0xa823,	// (0x000650b7) control_pane_t3_ParamLimits

0xa823,	// (0x000650b7) control_pane_t3

0xa689,	// (0x00064f1d) status_small_pane_g8_ParamLimits

0xa689,	// (0x00064f1d) status_small_pane_g8

0xa9d7,	// (0x0006526b) popup_find_window_ParamLimits

0xac8a,	// (0x0006551e) popup_note_image_window_ParamLimits

0xdbcb,	// (0x0006845f) list_double2_graphic_pane_vc_g1_ParamLimits

0xdbcb,	// (0x0006845f) list_double2_graphic_pane_vc_g1

0xdbd7,	// (0x0006846b) list_double2_graphic_pane_vc_g2_ParamLimits

0xdbd7,	// (0x0006846b) list_double2_graphic_pane_vc_g2

0xdbe3,	// (0x00068477) list_double2_graphic_pane_vc_g3_ParamLimits

0xdbe3,	// (0x00068477) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00069e55) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00069e55) list_double2_graphic_pane_vc_g

0xdbef,	// (0x00068483) list_double2_graphic_pane_vc_t1_ParamLimits

0xdbef,	// (0x00068483) list_double2_graphic_pane_vc_t1

0xdbd7,	// (0x0006846b) list_single_heading_pane_vc_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_single_heading_pane_vc_g1

0xdbe3,	// (0x00068477) list_single_heading_pane_vc_g2_ParamLimits

0xdbe3,	// (0x00068477) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069e66) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069e66) list_single_heading_pane_vc_g

0xdede,	// (0x00068772) list_single_heading_pane_vc_t1_ParamLimits

0xdede,	// (0x00068772) list_single_heading_pane_vc_t1

0xdef4,	// (0x00068788) list_single_heading_pane_vc_t2_ParamLimits

0xdef4,	// (0x00068788) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x0006a067) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x0006a067) list_single_heading_pane_vc_t

0x26d1,	// (0x0005cf65) list_setting_number_pane_vc_g1_ParamLimits

0x26d1,	// (0x0005cf65) list_setting_number_pane_vc_g1

0x26dd,	// (0x0005cf71) list_setting_number_pane_vc_g2_ParamLimits

0x26dd,	// (0x0005cf71) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0006a06c) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0006a06c) list_setting_number_pane_vc_g

0xdf06,	// (0x0006879a) list_setting_number_pane_vc_t1_ParamLimits

0xdf06,	// (0x0006879a) list_setting_number_pane_vc_t1

0xdf1a,	// (0x000687ae) list_setting_number_pane_vc_t2_ParamLimits

0xdf1a,	// (0x000687ae) list_setting_number_pane_vc_t2

0xdf36,	// (0x000687ca) list_setting_number_pane_vc_t3_ParamLimits

0xdf36,	// (0x000687ca) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x0006a071) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x0006a071) list_setting_number_pane_vc_t

0xdf60,	// (0x000687f4) set_value_pane_vc_ParamLimits

0xdf60,	// (0x000687f4) set_value_pane_vc

0x3e07,	// (0x0005e69b) list_double2_graphic_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double2_graphic_pane_vc

0x3e07,	// (0x0005e69b) list_double2_large_graphic_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double2_large_graphic_pane_vc

0x3e07,	// (0x0005e69b) list_double2_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double2_pane_vc

0x3e07,	// (0x0005e69b) list_double_graphic_heading_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double_graphic_heading_pane_vc

0x3e07,	// (0x0005e69b) list_double_graphic_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double_graphic_pane_vc

0x3e07,	// (0x0005e69b) list_double_heading_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double_heading_pane_vc

0x3e19,	// (0x0005e6ad) list_double_large_graphic_pane_vc_ParamLimits

0x3e19,	// (0x0005e6ad) list_double_large_graphic_pane_vc

0x3e07,	// (0x0005e69b) list_double_number_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double_number_pane_vc

0x3e07,	// (0x0005e69b) list_double_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double_pane_vc

0x3e07,	// (0x0005e69b) list_double_time_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_double_time_pane_vc

0x3e07,	// (0x0005e69b) list_setting_number_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_setting_number_pane_vc

0x3e07,	// (0x0005e69b) list_setting_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_setting_pane_vc

0x3e07,	// (0x0005e69b) list_single_graphic_heading_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_single_graphic_heading_pane_vc

0x3e07,	// (0x0005e69b) list_single_heading_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_single_heading_pane_vc

0x3e07,	// (0x0005e69b) list_single_number_heading_pane_vc_ParamLimits

0x3e07,	// (0x0005e69b) list_single_number_heading_pane_vc

0xdf7f,	// (0x00068813) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdf7f,	// (0x00068813) list_double_graphic_heading_pane_vc_g1

0xdbd7,	// (0x0006846b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdbd7,	// (0x0006846b) list_double_graphic_heading_pane_vc_g2

0xdbe3,	// (0x00068477) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdbe3,	// (0x00068477) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e2,	// (0x0006a276) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e2,	// (0x0006a276) list_double_graphic_heading_pane_vc_g

0xdf8b,	// (0x0006881f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdf8b,	// (0x0006881f) list_double_graphic_heading_pane_vc_t1

0xdf9f,	// (0x00068833) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdf9f,	// (0x00068833) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x0006a27d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x0006a27d) list_double_graphic_heading_pane_vc_t

0x26d1,	// (0x0005cf65) list_setting_pane_vc_g1_ParamLimits

0x26d1,	// (0x0005cf65) list_setting_pane_vc_g1

0x26dd,	// (0x0005cf71) list_setting_pane_vc_g2_ParamLimits

0x26dd,	// (0x0005cf71) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x0006a06c) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x0006a06c) list_setting_pane_vc_g

0xdfb7,	// (0x0006884b) list_setting_pane_vc_t1_ParamLimits

0xdfb7,	// (0x0006884b) list_setting_pane_vc_t1

0xdfd3,	// (0x00068867) list_setting_pane_vc_t2_ParamLimits

0xdfd3,	// (0x00068867) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x0006a2c0) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x0006a2c0) list_setting_pane_vc_t

0xdf60,	// (0x000687f4) set_value_pane_cp_vc_ParamLimits

0xdf60,	// (0x000687f4) set_value_pane_cp_vc

0xdbd7,	// (0x0006846b) list_single_number_heading_pane_vc_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_single_number_heading_pane_vc_g1

0xdbe3,	// (0x00068477) list_single_number_heading_pane_vc_g2_ParamLimits

0xdbe3,	// (0x00068477) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069e66) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069e66) list_single_number_heading_pane_vc_g

0xdfed,	// (0x00068881) list_single_number_heading_pane_vc_t1_ParamLimits

0xdfed,	// (0x00068881) list_single_number_heading_pane_vc_t1

0xe003,	// (0x00068897) list_single_number_heading_pane_vc_t2_ParamLimits

0xe003,	// (0x00068897) list_single_number_heading_pane_vc_t2

0xe015,	// (0x000688a9) list_single_number_heading_pane_vc_t3_ParamLimits

0xe015,	// (0x000688a9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x0006a2c5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0006a2c5) list_single_number_heading_pane_vc_t

0xe027,	// (0x000688bb) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe027,	// (0x000688bb) list_single_graphic_heading_pane_vc_g1

0xdbd7,	// (0x0006846b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdbd7,	// (0x0006846b) list_single_graphic_heading_pane_vc_g4

0xdbe3,	// (0x00068477) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdbe3,	// (0x00068477) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa38,	// (0x0006a2cc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa38,	// (0x0006a2cc) list_single_graphic_heading_pane_vc_g

0xdede,	// (0x00068772) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdede,	// (0x00068772) list_single_graphic_heading_pane_vc_t1

0xe033,	// (0x000688c7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe033,	// (0x000688c7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0006a2d3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0006a2d3) list_single_graphic_heading_pane_vc_t

0xdbd7,	// (0x0006846b) list_double2_pane_vc_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_double2_pane_vc_g1

0xdbe3,	// (0x00068477) list_double2_pane_vc_g2_ParamLimits

0xdbe3,	// (0x00068477) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069e66) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069e66) list_double2_pane_vc_g

0xe045,	// (0x000688d9) list_double2_pane_vc_t1_ParamLimits

0xe045,	// (0x000688d9) list_double2_pane_vc_t1

0x3c7e,	// (0x0005e512) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c7e,	// (0x0005e512) list_double2_large_graphic_pane_vc_g1

0xdbd7,	// (0x0006846b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdbd7,	// (0x0006846b) list_double2_large_graphic_pane_vc_g2

0xdbe3,	// (0x00068477) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdbe3,	// (0x00068477) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00069e7e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00069e7e) list_double2_large_graphic_pane_vc_g

0xdbef,	// (0x00068483) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdbef,	// (0x00068483) list_double2_large_graphic_pane_vc_t1

0x3c8a,	// (0x0005e51e) list_double_time_pane_vc_g1_ParamLimits

0x3c8a,	// (0x0005e51e) list_double_time_pane_vc_g1

0x3c96,	// (0x0005e52a) list_double_time_pane_vc_g2_ParamLimits

0x3c96,	// (0x0005e52a) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0006a2d8) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0006a2d8) list_double_time_pane_vc_g

0xe05d,	// (0x000688f1) list_double_time_pane_vc_t1_ParamLimits

0xe05d,	// (0x000688f1) list_double_time_pane_vc_t1

0xe081,	// (0x00068915) list_double_time_pane_vc_t2_ParamLimits

0xe081,	// (0x00068915) list_double_time_pane_vc_t2

0xe0d0,	// (0x00068964) list_double_time_pane_vc_t3_ParamLimits

0xe0d0,	// (0x00068964) list_double_time_pane_vc_t3

0xe0e2,	// (0x00068976) list_double_time_pane_vc_t4_ParamLimits

0xe0e2,	// (0x00068976) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0006a2dd) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0006a2dd) list_double_time_pane_vc_t

0xdbd7,	// (0x0006846b) list_double_pane_vc_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_double_pane_vc_g1

0xdbe3,	// (0x00068477) list_double_pane_vc_g2_ParamLimits

0xdbe3,	// (0x00068477) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069e66) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069e66) list_double_pane_vc_g

0xe0f6,	// (0x0006898a) list_double_pane_vc_t1_ParamLimits

0xe0f6,	// (0x0006898a) list_double_pane_vc_t1

0xe10a,	// (0x0006899e) list_double_pane_vc_t2_ParamLimits

0xe10a,	// (0x0006899e) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0006a2e6) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0006a2e6) list_double_pane_vc_t

0xdbd7,	// (0x0006846b) list_double_number_pane_vc_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_double_number_pane_vc_g1

0xdbe3,	// (0x00068477) list_double_number_pane_vc_g2_ParamLimits

0xdbe3,	// (0x00068477) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069e66) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069e66) list_double_number_pane_vc_g

0xe122,	// (0x000689b6) list_double_number_pane_vc_t1_ParamLimits

0xe122,	// (0x000689b6) list_double_number_pane_vc_t1

0xe0f6,	// (0x0006898a) list_double_number_pane_vc_t2_ParamLimits

0xe0f6,	// (0x0006898a) list_double_number_pane_vc_t2

0xe134,	// (0x000689c8) list_double_number_pane_vc_t3_ParamLimits

0xe134,	// (0x000689c8) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0006a2eb) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0006a2eb) list_double_number_pane_vc_t

0x3ca2,	// (0x0005e536) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3ca2,	// (0x0005e536) list_double_large_graphic_pane_vc_g1

0x3cc4,	// (0x0005e558) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3cc4,	// (0x0005e558) list_double_large_graphic_pane_vc_g2

0x3cd8,	// (0x0005e56c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3cd8,	// (0x0005e56c) list_double_large_graphic_pane_vc_g3

0xe14c,	// (0x000689e0) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe14c,	// (0x000689e0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0006a2f2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0006a2f2) list_double_large_graphic_pane_vc_g

0xe158,	// (0x000689ec) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe158,	// (0x000689ec) list_double_large_graphic_pane_vc_t1

0xe174,	// (0x00068a08) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe174,	// (0x00068a08) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0006a2fb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0006a2fb) list_double_large_graphic_pane_vc_t

0xdbd7,	// (0x0006846b) list_double_heading_pane_vc_g1_ParamLimits

0xdbd7,	// (0x0006846b) list_double_heading_pane_vc_g1

0xdbe3,	// (0x00068477) list_double_heading_pane_vc_g2_ParamLimits

0xdbe3,	// (0x00068477) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069e66) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069e66) list_double_heading_pane_vc_g

0xe196,	// (0x00068a2a) list_double_heading_pane_vc_t1_ParamLimits

0xe196,	// (0x00068a2a) list_double_heading_pane_vc_t1

0xe1aa,	// (0x00068a3e) list_double_heading_pane_vc_t2_ParamLimits

0xe1aa,	// (0x00068a3e) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x0006a300) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x0006a300) list_double_heading_pane_vc_t

0xe1c2,	// (0x00068a56) list_double_graphic_pane_vc_g1_ParamLimits

0xe1c2,	// (0x00068a56) list_double_graphic_pane_vc_g1

0x3ce7,	// (0x0005e57b) list_double_graphic_pane_vc_g2_ParamLimits

0x3ce7,	// (0x0005e57b) list_double_graphic_pane_vc_g2

0xdbd7,	// (0x0006846b) list_double_graphic_pane_vc_g3_ParamLimits

0xdbd7,	// (0x0006846b) list_double_graphic_pane_vc_g3

0x0003,

0xfa71,	// (0x0006a305) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x0006a305) list_double_graphic_pane_vc_g

0xe1d5,	// (0x00068a69) list_double_graphic_pane_vc_t1_ParamLimits

0xe1d5,	// (0x00068a69) list_double_graphic_pane_vc_t1

0xe1f4,	// (0x00068a88) list_double_graphic_pane_vc_t2_ParamLimits

0xe1f4,	// (0x00068a88) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0006a30e) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0006a30e) list_double_graphic_pane_vc_t

0xdbaa,	// (0x0006843e) aid_size_cell_fastswap

0x9293,	// (0x00063b27) aid_size_cell_touch_ParamLimits

0x9293,	// (0x00063b27) aid_size_cell_touch

0xef8e,	// (0x00069822) popup_fast_swap_wide_window_ParamLimits

0xef8e,	// (0x00069822) popup_fast_swap_wide_window

0x9463,	// (0x00063cf7) touch_pane_ParamLimits

0x9463,	// (0x00063cf7) touch_pane

0x84b6,	// (0x00062d4a) button_value_adjust_pane_cp2

0xdc40,	// (0x000684d4) button_value_adjust_pane_cp4

0xdc48,	// (0x000684dc) form_field_data_pane_cp2

0x9f15,	// (0x000647a9) form_field_data_wide_pane_cp2

0x87a5,	// (0x00063039) bg_scroll_pane_ParamLimits

0xa230,	// (0x00064ac4) scroll_handle_pane_ParamLimits

0xf142,	// (0x000699d6) scroll_sc2_down_pane_ParamLimits

0xf142,	// (0x000699d6) scroll_sc2_down_pane

0x87d6,	// (0x0006306a) scroll_sc2_up_pane_ParamLimits

0x87d6,	// (0x0006306a) scroll_sc2_up_pane

0xcb39,	// (0x000673cd) grid_wheel_folder_pane_g1_ParamLimits

0xcb39,	// (0x000673cd) grid_wheel_folder_pane_g1

0xf2c4,	// (0x00069b58) clock_nsta_pane_cp2_ParamLimits

0xf2c4,	// (0x00069b58) clock_nsta_pane_cp2

0xa54f,	// (0x00064de3) listscroll_midp_pane_ParamLimits

0xa55b,	// (0x00064def) midp_canvas_pane

0x212e,	// (0x0005c9c2) nsta_clock_indic_pane

0x2162,	// (0x0005c9f6) listscroll_form_pane_vc

0x216a,	// (0x0005c9fe) listscroll_set_pane_vc_ParamLimits

0x216a,	// (0x0005c9fe) listscroll_set_pane_vc

0xbd34,	// (0x000665c8) clock_nsta_pane

0xbd5e,	// (0x000665f2) indicator_nsta_pane

0x25c7,	// (0x0005ce5b) bg_popup_sub_pane_cp2_ParamLimits

0x25db,	// (0x0005ce6f) find_pane_cp2_ParamLimits

0x25db,	// (0x0005ce6f) find_pane_cp2

0x25f1,	// (0x0005ce85) grid_toobar_pane_ParamLimits

0x26e9,	// (0x0005cf7d) list_form_gen_pane_vc_ParamLimits

0x26e9,	// (0x0005cf7d) list_form_gen_pane_vc

0x26ff,	// (0x0005cf93) scroll_pane_cp8_vc_ParamLimits

0x26ff,	// (0x0005cf93) scroll_pane_cp8_vc

0x277b,	// (0x0005d00f) data_form_wide_pane_vc_ParamLimits

0x277b,	// (0x0005d00f) data_form_wide_pane_vc

0x2787,	// (0x0005d01b) form_field_data_wide_pane_vc_g1

0x278f,	// (0x0005d023) form_field_data_wide_pane_vc_t1_ParamLimits

0x278f,	// (0x0005d023) form_field_data_wide_pane_vc_t1

0x84ca,	// (0x00062d5e) input_focus_pane_cp6_vc_ParamLimits

0x84ca,	// (0x00062d5e) input_focus_pane_cp6_vc

0x2adc,	// (0x0005d370) list_midp_pane_ParamLimits

0x3fb1,	// (0x0005e845) scroll_pane_cp16_ParamLimits

0x3fb1,	// (0x0005e845) scroll_pane_cp16

0x2b1e,	// (0x0005d3b2) button_value_adjust_pane_ParamLimits

0x2b1e,	// (0x0005d3b2) button_value_adjust_pane

0xc6f0,	// (0x00066f84) button_value_adjust_pane_cp6_ParamLimits

0xc6f0,	// (0x00066f84) button_value_adjust_pane_cp6

0xc80a,	// (0x0006709e) settings_code_pane_cp_ParamLimits

0xc80a,	// (0x0006709e) settings_code_pane_cp

0x7eab,	// (0x0006273f) cell_touch_pane_g1

0x7eab,	// (0x0006273f) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00069f92) cell_touch_pane_g

0xca08,	// (0x0006729c) cell_touch_pane_cp_ParamLimits

0xca08,	// (0x0006729c) cell_touch_pane_cp

0xca24,	// (0x000672b8) cell_touch_pane_ParamLimits

0xca24,	// (0x000672b8) cell_touch_pane

0x7eab,	// (0x0006273f) scroll_sc2_down_pane_g1

0x7eab,	// (0x0006273f) scroll_sc2_up_pane_g1

0x7eb5,	// (0x00062749) bg_set_opt_pane_cp4_vc

0x4341,	// (0x0005ebd5) list_set_graphic_pane_vc_g1_ParamLimits

0x4341,	// (0x0005ebd5) list_set_graphic_pane_vc_g1

0x434d,	// (0x0005ebe1) list_set_graphic_pane_vc_g2_ParamLimits

0x434d,	// (0x0005ebe1) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x0006a282) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x0006a282) list_set_graphic_pane_vc_g

0x4359,	// (0x0005ebed) text_primary_small_cp13_vc_ParamLimits

0x4359,	// (0x0005ebed) text_primary_small_cp13_vc

0x4371,	// (0x0005ec05) list_set_graphic_pane_vc_ParamLimits

0x4371,	// (0x0005ec05) list_set_graphic_pane_vc

0x7eb5,	// (0x00062749) input_focus_pane_cp2_vc

0x7eab,	// (0x0006273f) setting_code_pane_vc_g1

0x7f1a,	// (0x000627ae) setting_code_pane_vc_t1

0x4384,	// (0x0005ec18) set_text_pane_vc_t1_ParamLimits

0x4384,	// (0x0005ec18) set_text_pane_vc_t1

0x7eb5,	// (0x00062749) input_focus_pane_cp1_vc

0x43a0,	// (0x0005ec34) list_set_text_pane_vc

0x7eab,	// (0x0006273f) setting_text_pane_vc_g1

0x7eb5,	// (0x00062749) bg_set_opt_pane_cp2_vc

0x7f11,	// (0x000627a5) setting_slider_graphic_pane_vc_g1

0x43aa,	// (0x0005ec3e) setting_slider_graphic_pane_vc_t1

0x43ba,	// (0x0005ec4e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x0006a287) setting_slider_graphic_pane_vc_t

0x43ca,	// (0x0005ec5e) slider_set_pane_cp_vc

0x43d2,	// (0x0005ec66) slider_set_pane_vc_g1

0x43db,	// (0x0005ec6f) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x0006a28c) slider_set_pane_vc_g

0x8516,	// (0x00062daa) set_opt_bg_pane_g1_copy1

0x851e,	// (0x00062db2) set_opt_bg_pane_g2_copy1

0x4407,	// (0x0005ec9b) set_opt_bg_pane_g3_copy1

0x852e,	// (0x00062dc2) set_opt_bg_pane_g4_copy1

0x8536,	// (0x00062dca) set_opt_bg_pane_g5_copy1

0x853e,	// (0x00062dd2) set_opt_bg_pane_g6_copy1

0x440f,	// (0x0005eca3) set_opt_bg_pane_g7_copy1

0x4417,	// (0x0005ecab) set_opt_bg_pane_g8_copy1

0x441f,	// (0x0005ecb3) set_opt_bg_pane_g9_copy1

0x7eb5,	// (0x00062749) bg_set_opt_pane_cp_vc

0x4427,	// (0x0005ecbb) setting_slider_pane_vc_t1

0x4436,	// (0x0005ecca) setting_slider_pane_vc_t2

0x4446,	// (0x0005ecda) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x0006a29b) setting_slider_pane_vc_t

0x4456,	// (0x0005ecea) slider_set_pane_vc

0x0835,	// (0x0005b0c9) volume_set_pane_vc_g1

0x0bc1,	// (0x0005b455) volume_set_pane_vc_g2

0x0bca,	// (0x0005b45e) volume_set_pane_vc_g3

0x0bd3,	// (0x0005b467) volume_set_pane_vc_g4

0x0bdc,	// (0x0005b470) volume_set_pane_vc_g5

0x0be5,	// (0x0005b479) volume_set_pane_vc_g6

0x0bee,	// (0x0005b482) volume_set_pane_vc_g7

0x0bf7,	// (0x0005b48b) volume_set_pane_vc_g8

0x0c00,	// (0x0005b494) volume_set_pane_vc_g9

0x0c09,	// (0x0005b49d) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x0006a2a2) volume_set_pane_vc_g

0x445e,	// (0x0005ecf2) volume_set_pane_vc

0x4466,	// (0x0005ecfa) button_value_adjust_pane_cp1_vc

0x4470,	// (0x0005ed04) list_highlight_pane_cp2_vc

0x4479,	// (0x0005ed0d) list_set_pane_vc_ParamLimits

0x4479,	// (0x0005ed0d) list_set_pane_vc

0x44d7,	// (0x0005ed6b) main_pane_set_vc_t1_ParamLimits

0x44d7,	// (0x0005ed6b) main_pane_set_vc_t1

0x44ec,	// (0x0005ed80) main_pane_set_vc_t2_ParamLimits

0x44ec,	// (0x0005ed80) main_pane_set_vc_t2

0x44fe,	// (0x0005ed92) main_pane_set_vc_t3_ParamLimits

0x44fe,	// (0x0005ed92) main_pane_set_vc_t3

0x4510,	// (0x0005eda4) main_pane_set_vc_t4_ParamLimits

0x4510,	// (0x0005eda4) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x0006a2b7) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x0006a2b7) main_pane_set_vc_t

0x4522,	// (0x0005edb6) setting_code_pane_vc_ParamLimits

0x4522,	// (0x0005edb6) setting_code_pane_vc

0x4531,	// (0x0005edc5) setting_slider_graphic_pane_vc

0x4531,	// (0x0005edc5) setting_slider_pane_vc

0x4531,	// (0x0005edc5) setting_text_pane_vc

0x4531,	// (0x0005edc5) setting_volume_pane_vc

0x4539,	// (0x0005edcd) scroll_pane_cp121_vc

0x84a4,	// (0x00062d38) set_content_pane_vc

0x4541,	// (0x0005edd5) button_value_adjust_pane_g1

0x454a,	// (0x0005edde) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0006a313) button_value_adjust_pane_g

0x4553,	// (0x0005ede7) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4553,	// (0x0005ede7) form_field_slider_wide_pane_vc_t1

0x4567,	// (0x0005edfb) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4567,	// (0x0005edfb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0006a318) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0006a318) form_field_slider_wide_pane_vc_t

0x802d,	// (0x000628c1) input_focus_pane_cp10_vc_ParamLimits

0x802d,	// (0x000628c1) input_focus_pane_cp10_vc

0x4595,	// (0x0005ee29) slider_cont_pane_cp1_vc_ParamLimits

0x4595,	// (0x0005ee29) slider_cont_pane_cp1_vc

0x45a7,	// (0x0005ee3b) slider_form_pane_g1_cp2

0x43db,	// (0x0005ec6f) slider_form_pane_g2_cp2

0x45d4,	// (0x0005ee68) form_field_slider_pane_vc_t3

0x45e2,	// (0x0005ee76) form_field_slider_pane_vc_t4

0x45f0,	// (0x0005ee84) slider_form_pane_vc_ParamLimits

0x45f0,	// (0x0005ee84) slider_form_pane_vc

0x45fd,	// (0x0005ee91) form_field_slider_pane_vc_t1_ParamLimits

0x45fd,	// (0x0005ee91) form_field_slider_pane_vc_t1

0x4567,	// (0x0005edfb) form_field_slider_pane_vc_t2_ParamLimits

0x4567,	// (0x0005edfb) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0006a32a) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0006a32a) form_field_slider_pane_vc_t

0x802d,	// (0x000628c1) input_focus_pane_cp9_vc_ParamLimits

0x802d,	// (0x000628c1) input_focus_pane_cp9_vc

0x4619,	// (0x0005eead) slider_cont_pane_vc_ParamLimits

0x4619,	// (0x0005eead) slider_cont_pane_vc

0x462d,	// (0x0005eec1) list_form_graphic_pane_cp_vc_ParamLimits

0x462d,	// (0x0005eec1) list_form_graphic_pane_cp_vc

0x2787,	// (0x0005d01b) form_field_popup_wide_pane_vc_g1

0x4642,	// (0x0005eed6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4642,	// (0x0005eed6) form_field_popup_wide_pane_vc_t1

0x84ca,	// (0x00062d5e) input_focus_pane_cp8_vc_ParamLimits

0x84ca,	// (0x00062d5e) input_focus_pane_cp8_vc

0x4687,	// (0x0005ef1b) list_form_wide_pane_vc_ParamLimits

0x4687,	// (0x0005ef1b) list_form_wide_pane_vc

0x4693,	// (0x0005ef27) list_form_graphic_pane_vc_g1

0x469b,	// (0x0005ef2f) list_form_graphic_pane_vc_t1_ParamLimits

0x469b,	// (0x0005ef2f) list_form_graphic_pane_vc_t1

0x7f03,	// (0x00062797) list_highlight_pane_cp5_vc_ParamLimits

0x7f03,	// (0x00062797) list_highlight_pane_cp5_vc

0x46b7,	// (0x0005ef4b) list_form_graphic_pane_vc_ParamLimits

0x46b7,	// (0x0005ef4b) list_form_graphic_pane_vc

0x2787,	// (0x0005d01b) form_field_popup_pane_vc_g1

0x46cd,	// (0x0005ef61) form_field_popup_pane_vc_t1_ParamLimits

0x46cd,	// (0x0005ef61) form_field_popup_pane_vc_t1

0x84ca,	// (0x00062d5e) input_focus_pane_cp7_vc_ParamLimits

0x84ca,	// (0x00062d5e) input_focus_pane_cp7_vc

0x46e4,	// (0x0005ef78) list_form_pane_vc_ParamLimits

0x46e4,	// (0x0005ef78) list_form_pane_vc

0x46f0,	// (0x0005ef84) data_form_pane_vc_t1_ParamLimits

0x46f0,	// (0x0005ef84) data_form_pane_vc_t1

0x8516,	// (0x00062daa) input_focus_pane_vc_g1

0x851e,	// (0x00062db2) input_focus_pane_vc_g2

0x8526,	// (0x00062dba) input_focus_pane_vc_g3

0x852e,	// (0x00062dc2) input_focus_pane_vc_g4

0x8536,	// (0x00062dca) input_focus_pane_vc_g5

0x853e,	// (0x00062dd2) input_focus_pane_vc_g6

0x8546,	// (0x00062dda) input_focus_pane_vc_g7

0x854e,	// (0x00062de2) input_focus_pane_vc_g8

0x8556,	// (0x00062dea) input_focus_pane_vc_g9

0x7eab,	// (0x0006273f) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00069f1b) input_focus_pane_vc_g

0x277b,	// (0x0005d00f) data_form_pane_vc_ParamLimits

0x277b,	// (0x0005d00f) data_form_pane_vc

0x2787,	// (0x0005d01b) form_field_data_pane_vc_g1

0x470b,	// (0x0005ef9f) form_field_data_pane_vc_t1_ParamLimits

0x470b,	// (0x0005ef9f) form_field_data_pane_vc_t1

0x84ca,	// (0x00062d5e) input_focus_pane_vc_ParamLimits

0x84ca,	// (0x00062d5e) input_focus_pane_vc

0x4725,	// (0x0005efb9) button_value_adjust_pane_cp3_vc

0x472d,	// (0x0005efc1) button_value_adjust_pane_cp5_vc

0x4735,	// (0x0005efc9) form_field_data_pane_vc_ParamLimits

0x4735,	// (0x0005efc9) form_field_data_pane_vc

0x474c,	// (0x0005efe0) form_field_data_pane_vc_cp2

0x4754,	// (0x0005efe8) form_field_data_wide_pane_vc_ParamLimits

0x4754,	// (0x0005efe8) form_field_data_wide_pane_vc

0x476a,	// (0x0005effe) form_field_data_wide_pane_vc_cp2

0x4772,	// (0x0005f006) form_field_popup_pane_vc_ParamLimits

0x4772,	// (0x0005f006) form_field_popup_pane_vc

0x4789,	// (0x0005f01d) form_field_popup_wide_pane_vc_ParamLimits

0x4789,	// (0x0005f01d) form_field_popup_wide_pane_vc

0x479f,	// (0x0005f033) form_field_slider_pane_vc_ParamLimits

0x479f,	// (0x0005f033) form_field_slider_pane_vc

0x47b2,	// (0x0005f046) form_field_slider_wide_pane_vc_ParamLimits

0x47b2,	// (0x0005f046) form_field_slider_wide_pane_vc

0xca41,	// (0x000672d5) grid_touch_1_pane_ParamLimits

0xca41,	// (0x000672d5) grid_touch_1_pane

0xca55,	// (0x000672e9) grid_touch_2_pane_ParamLimits

0xca55,	// (0x000672e9) grid_touch_2_pane

0x4880,	// (0x0005f114) touch_pane_g1_ParamLimits

0x4880,	// (0x0005f114) touch_pane_g1

0x47e9,	// (0x0005f07d) cell_app_pane_cp_wide_ParamLimits

0x47e9,	// (0x0005f07d) cell_app_pane_cp_wide

0x47fa,	// (0x0005f08e) grid_popup_fast_wide_pane_ParamLimits

0x47fa,	// (0x0005f08e) grid_popup_fast_wide_pane

0x480e,	// (0x0005f0a2) scroll_pane_cp19_ParamLimits

0x480e,	// (0x0005f0a2) scroll_pane_cp19

0x7eb5,	// (0x00062749) bg_popup_window_pane_cp20

0x4822,	// (0x0005f0b6) listscroll_popup_fast_wide_pane

0xca7f,	// (0x00067313) grid_indicator_nsta_pane

0x482a,	// (0x0005f0be) clock_nsta_pane_g1

0x4833,	// (0x0005f0c7) clock_nsta_pane_t1

0xca8d,	// (0x00067321) cell_indicator_nsta_pane_ParamLimits

0xca8d,	// (0x00067321) cell_indicator_nsta_pane

0x4880,	// (0x0005f114) cell_indicator_nsta_pane_g1

0xcaa4,	// (0x00067338) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0006a33b) cell_indicator_nsta_pane_g

0x489b,	// (0x0005f12f) clock_nsta_pane_cp

0x48a3,	// (0x0005f137) indicator_nsta_pane_cp

0x48ab,	// (0x0005f13f) nsta_clock_indic_pane_g1

0x7f3f,	// (0x000627d3) grid_indicator_pane

0xa2ca,	// (0x00064b5e) scroll_pane_cp29

0xf213,	// (0x00069aa7) indicator_nsta_pane_cp2_ParamLimits

0xf213,	// (0x00069aa7) indicator_nsta_pane_cp2

0x7f03,	// (0x00062797) main_apps_wheel_pane

0xc126,	// (0x000669ba) form_midp_field_text_pane_ParamLimits

0x2ae8,	// (0x0005d37c) scroll_bar_cp050_ParamLimits

0x48fb,	// (0x0005f18f) cell_indicator_pane_ParamLimits

0x48fb,	// (0x0005f18f) cell_indicator_pane

0x4914,	// (0x0005f1a8) cell_indicator_pane_g1

0xcac3,	// (0x00067357) grid_wheel_folder_pane_ParamLimits

0xcac3,	// (0x00067357) grid_wheel_folder_pane

0xcad1,	// (0x00067365) list_wheel_apps_pane_ParamLimits

0xcad1,	// (0x00067365) list_wheel_apps_pane

0xcadf,	// (0x00067373) main_apps_wheel_pane_g1_ParamLimits

0xcadf,	// (0x00067373) main_apps_wheel_pane_g1

0xcaeb,	// (0x0006737f) main_apps_wheel_pane_g2_ParamLimits

0xcaeb,	// (0x0006737f) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0006a357) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0006a357) main_apps_wheel_pane_g

0xcaf9,	// (0x0006738d) main_apps_wheel_pane_t1_ParamLimits

0xcaf9,	// (0x0006738d) main_apps_wheel_pane_t1

0xcb0d,	// (0x000673a1) list_wheel_apps_pane_g1

0xcb15,	// (0x000673a9) list_wheel_apps_pane_g2

0xcb1d,	// (0x000673b1) list_wheel_apps_pane_g3

0xcb25,	// (0x000673b9) list_wheel_apps_pane_g4

0xcb2f,	// (0x000673c3) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0006a35c) list_wheel_apps_pane_g

0xf3e5,	// (0x00069c79) navi_icon_text_pane

0xbc28,	// (0x000664bc) aid_fill_nsta

0x49db,	// (0x0005f26f) navi_icon_text_pane_g1

0x49e7,	// (0x0005f27b) navi_icon_text_pane_t1

0xde0d,	// (0x000686a1) list_set_graphic_pane_t1_ParamLimits

0xde0d,	// (0x000686a1) list_set_graphic_pane_t1

0x321f,	// (0x0005dab3) popup_midp_note_alarm_window_t6_ParamLimits

0x321f,	// (0x0005dab3) popup_midp_note_alarm_window_t6

0x3231,	// (0x0005dac5) popup_midp_note_alarm_window_t7_ParamLimits

0x3231,	// (0x0005dac5) popup_midp_note_alarm_window_t7

0x3243,	// (0x0005dad7) popup_midp_note_alarm_window_t8_ParamLimits

0x3243,	// (0x0005dad7) popup_midp_note_alarm_window_t8

0x3255,	// (0x0005dae9) popup_midp_note_alarm_window_t9_ParamLimits

0x3255,	// (0x0005dae9) popup_midp_note_alarm_window_t9

0x3267,	// (0x0005dafb) popup_midp_note_alarm_window_t10_ParamLimits

0x3267,	// (0x0005dafb) popup_midp_note_alarm_window_t10

0x3279,	// (0x0005db0d) popup_midp_note_alarm_window_t11_ParamLimits

0x3279,	// (0x0005db0d) popup_midp_note_alarm_window_t11

0xc472,	// (0x00066d06) scroll_pane_cp17_ParamLimits

0xc472,	// (0x00066d06) scroll_pane_cp17

0x0835,	// (0x0005b0c9) volume_small_pane_cp_g1

0x0c12,	// (0x0005b4a6) volume_small_pane_cp_g2

0x0c1b,	// (0x0005b4af) volume_small_pane_cp_g3

0x0c24,	// (0x0005b4b8) volume_small_pane_cp_g4

0x0c2d,	// (0x0005b4c1) volume_small_pane_cp_g5

0x0bdc,	// (0x0005b470) volume_small_pane_cp_g6

0x0c36,	// (0x0005b4ca) volume_small_pane_cp_g7

0x0c3f,	// (0x0005b4d3) volume_small_pane_cp_g8

0x0c48,	// (0x0005b4dc) volume_small_pane_cp_g9

0x0c51,	// (0x0005b4e5) volume_small_pane_cp_g10

0x1f17,	// (0x0005c7ab) midp_ticker_pane_g1_ParamLimits

0x1f23,	// (0x0005c7b7) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00069fe7) midp_ticker_pane_g_ParamLimits

0x1f2f,	// (0x0005c7c3) midp_ticker_pane_t1_ParamLimits

0xbc4c,	// (0x000664e0) aid_fill_nsta_2

0x2ad4,	// (0x0005d368) list_form2_midp_pane

0x3bd3,	// (0x0005e467) midp_editing_number_pane_ParamLimits

0x3de5,	// (0x0005e679) midp_ticker_pane_ParamLimits

0x49f9,	// (0x0005f28d) form2_midp_field_pane

0x4a1d,	// (0x0005f2b1) scroll_pane_cp51

0x4a3d,	// (0x0005f2d1) form2_midp_button_pane_ParamLimits

0x4a3d,	// (0x0005f2d1) form2_midp_button_pane

0x4a4f,	// (0x0005f2e3) form2_midp_content_pane_ParamLimits

0x4a4f,	// (0x0005f2e3) form2_midp_content_pane

0x4a69,	// (0x0005f2fd) form2_midp_field_choice_group_pane

0x4a71,	// (0x0005f305) form2_midp_field_pane_g1

0x4a79,	// (0x0005f30d) form2_midp_field_pane_g2

0x4a81,	// (0x0005f315) form2_midp_field_pane_g3

0x4a89,	// (0x0005f31d) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0006a381) form2_midp_field_pane_g

0x4a91,	// (0x0005f325) form2_midp_gauge_slider_pane

0x4a99,	// (0x0005f32d) form2_midp_gauge_wait_pane

0x4aa1,	// (0x0005f335) form2_midp_image_pane_ParamLimits

0x4aa1,	// (0x0005f335) form2_midp_image_pane

0xcb62,	// (0x000673f6) form2_midp_label_pane_ParamLimits

0xcb62,	// (0x000673f6) form2_midp_label_pane

0xcb7b,	// (0x0006740f) form2_midp_label_pane_cp_ParamLimits

0xcb7b,	// (0x0006740f) form2_midp_label_pane_cp

0x4af6,	// (0x0005f38a) form2_midp_string_pane_ParamLimits

0x4af6,	// (0x0005f38a) form2_midp_string_pane

0xb267,	// (0x00065afb) form2_midp_text_pane_ParamLimits

0xb267,	// (0x00065afb) form2_midp_text_pane

0x4b08,	// (0x0005f39c) form2_midp_time_pane

0x4b18,	// (0x0005f3ac) input_focus_pane_cp51_ParamLimits

0x4b18,	// (0x0005f3ac) input_focus_pane_cp51

0xcb9a,	// (0x0006742e) form2_midp_label_pane_t1_ParamLimits

0xcb9a,	// (0x0006742e) form2_midp_label_pane_t1

0xb280,	// (0x00065b14) form2_mdip_text_pane_t1_ParamLimits

0xb280,	// (0x00065b14) form2_mdip_text_pane_t1

0xe21e,	// (0x00068ab2) form2_midp_time_pane_t1

0x4b79,	// (0x0005f40d) form2_midp_gauge_slider_pane_t1

0xcbda,	// (0x0006746e) form2_midp_gauge_slider_pane_t2

0xcbec,	// (0x00067480) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0006a38a) form2_midp_gauge_slider_pane_t

0x4baf,	// (0x0005f443) form2_midp_slider_pane

0x4bbb,	// (0x0005f44f) form2_midp_gauge_wait_pane_t1

0x4bc9,	// (0x0005f45d) form2_midp_wait_pane_ParamLimits

0x4bc9,	// (0x0005f45d) form2_midp_wait_pane

0xc069,	// (0x000668fd) list_single_2graphic_pane_cp4_ParamLimits

0xc069,	// (0x000668fd) list_single_2graphic_pane_cp4

0xcbfe,	// (0x00067492) list_single_midp_graphic_pane_cp_ParamLimits

0xcbfe,	// (0x00067492) list_single_midp_graphic_pane_cp

0x7eb5,	// (0x00062749) list_highlight_pane_cp20

0x4c1c,	// (0x0005f4b0) list_single_2graphic_pane_g1_cp4

0x4225,	// (0x0005eab9) list_single_2graphic_pane_g2_cp4

0x4c24,	// (0x0005f4b8) list_single_2graphic_pane_t1_cp4

0x7f03,	// (0x00062797) list_highlight_pane_cp21

0x4c33,	// (0x0005f4c7) list_single_midp_graphic_pane_g4_cp

0x4c42,	// (0x0005f4d6) list_single_midp_graphic_pane_t1_cp

0xcc1d,	// (0x000674b1) form2_mdip_string_pane_t1_ParamLimits

0xcc1d,	// (0x000674b1) form2_mdip_string_pane_t1

0x7eb5,	// (0x00062749) bg_wml_button_pane_cp2

0x7eab,	// (0x0006273f) form2_midp_image_pane_g1

0xdc11,	// (0x000684a5) list_double_large_graphic_pane_g5_ParamLimits

0xdc11,	// (0x000684a5) list_double_large_graphic_pane_g5

0xa54f,	// (0x00064de3) midp_form_pane_ParamLimits

0x7f03,	// (0x00062797) main_apps_wheel_pane_ParamLimits

0xad11,	// (0x000655a5) popup_preview_window_ParamLimits

0xad11,	// (0x000655a5) popup_preview_window

0xafde,	// (0x00065872) popup_touch_info_window_ParamLimits

0xafde,	// (0x00065872) popup_touch_info_window

0xaffc,	// (0x00065890) popup_touch_menu_window_ParamLimits

0xaffc,	// (0x00065890) popup_touch_menu_window

0x7ea1,	// (0x00062735) bg_popup_sub_pane_cp6

0x4d58,	// (0x0005f5ec) list_touch_menu_pane

0xcc91,	// (0x00067525) list_single_touch_menu_pane_ParamLimits

0xcc91,	// (0x00067525) list_single_touch_menu_pane

0xcca5,	// (0x00067539) list_single_touch_menu_pane_t1

0x7f03,	// (0x00062797) bg_popup_sub_pane_cp7_ParamLimits

0x7f03,	// (0x00062797) bg_popup_sub_pane_cp7

0x4d84,	// (0x0005f618) heading_sub_pane

0x4d8c,	// (0x0005f620) list_touch_info_pane_ParamLimits

0x4d8c,	// (0x0005f620) list_touch_info_pane

0x4d9b,	// (0x0005f62f) list_single_touch_info_pane_ParamLimits

0x4d9b,	// (0x0005f62f) list_single_touch_info_pane

0x4dad,	// (0x0005f641) list_single_touch_info_pane_t1

0x4dbb,	// (0x0005f64f) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0006a398) list_single_touch_info_pane_t

0x1e36,	// (0x0005c6ca) bg_popup_heading_pane_cp

0x4dc9,	// (0x0005f65d) heading_sub_pane_t1

0x2715,	// (0x0005cfa9) bg_popup_preview_window_pane_cp_ParamLimits

0x2715,	// (0x0005cfa9) bg_popup_preview_window_pane_cp

0x4d84,	// (0x0005f618) heading_preview_pane

0x4d8c,	// (0x0005f620) list_preview_pane_ParamLimits

0x4d8c,	// (0x0005f620) list_preview_pane

0x4dd7,	// (0x0005f66b) popup_preview_window_g1

0x4d9b,	// (0x0005f62f) list_single_preview_pane_ParamLimits

0x4d9b,	// (0x0005f62f) list_single_preview_pane

0x4ddf,	// (0x0005f673) list_single_preview_pane_g1

0x4de7,	// (0x0005f67b) list_single_preview_pane_t1

0x4dad,	// (0x0005f641) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0006a39d) list_single_preview_pane_t

0x4df5,	// (0x0005f689) bg_popup_heading_pane_cp2_ParamLimits

0x4df5,	// (0x0005f689) bg_popup_heading_pane_cp2

0x4e0b,	// (0x0005f69f) heading_preview_pane_g1

0x4e13,	// (0x0005f6a7) heading_preview_pane_t1_ParamLimits

0x4e13,	// (0x0005f6a7) heading_preview_pane_t1

0x7f56,	// (0x000627ea) soft_indicator_pane_t1_ParamLimits

0x823f,	// (0x00062ad3) scroll_pane_ParamLimits

0x87c4,	// (0x00063058) scroll_sc2_left_pane

0x87cd,	// (0x00063061) scroll_sc2_right_pane

0x87ec,	// (0x00063080) scroll_bg_pane_g1_ParamLimits

0x8801,	// (0x00063095) scroll_bg_pane_g2_ParamLimits

0x8819,	// (0x000630ad) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00069f72) scroll_bg_pane_g_ParamLimits

0x87ec,	// (0x00063080) scroll_handle_pane_g1_ParamLimits

0x882e,	// (0x000630c2) scroll_handle_pane_g2_ParamLimits

0x8819,	// (0x000630ad) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00069f79) scroll_handle_pane_g_ParamLimits

0xa8b8,	// (0x0006514c) popup_choice_list_window_ParamLimits

0xa8b8,	// (0x0006514c) popup_choice_list_window

0x25d3,	// (0x0005ce67) choice_list_pane

0x2655,	// (0x0005cee9) cell_toolbar_pane_t1

0x267d,	// (0x0005cf11) toolbar_button_pane_ParamLimits

0x3745,	// (0x0005dfd9) ai_gene_pane_1_t2_ParamLimits

0x3745,	// (0x0005dfd9) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x0006a195) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x0006a195) ai_gene_pane_1_t

0x4e30,	// (0x0005f6c4) scroll_sc2_left_pane_g1

0x4e30,	// (0x0005f6c4) scroll_sc2_right_pane_g1

0x217c,	// (0x0005ca10) bg_popup_sub_pane_cp10

0x4e3a,	// (0x0005f6ce) list_choice_list_pane

0xccb3,	// (0x00067547) list_single_choice_list_pane_ParamLimits

0xccb3,	// (0x00067547) list_single_choice_list_pane

0xccc7,	// (0x0006755b) list_single_choice_list_pane_g1

0xa0f4,	// (0x00064988) list_single_choice_list_pane_t1_ParamLimits

0xa0f4,	// (0x00064988) list_single_choice_list_pane_t1

0x4e6e,	// (0x0005f702) choice_list_pane_g1

0xcccf,	// (0x00067563) choice_list_pane_t1

0x7ea1,	// (0x00062735) input_focus_pane_cp11

0x8739,	// (0x00062fcd) title_pane_stacon_g2_ParamLimits

0x8739,	// (0x00062fcd) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00069f58) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00069f58) title_pane_stacon_g

0x1e36,	// (0x0005c6ca) cursor_press_pane

0xa95f,	// (0x000651f3) popup_fep_hwr_window_ParamLimits

0xa95f,	// (0x000651f3) popup_fep_hwr_window

0x0256,	// (0x0005aaea) popup_fep_vkb_window_ParamLimits

0x0256,	// (0x0005aaea) popup_fep_vkb_window

0xccdd,	// (0x00067571) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0006a3c6) fep_vkb_side_pane_g_ParamLimits

0x0cce,	// (0x0005b562) fep_hwr_candidate_pane_ParamLimits

0x0cce,	// (0x0005b562) fep_hwr_candidate_pane

0x0cf8,	// (0x0005b58c) fep_hwr_side_pane_ParamLimits

0x0cf8,	// (0x0005b58c) fep_hwr_side_pane

0x0d18,	// (0x0005b5ac) fep_hwr_top_pane_ParamLimits

0x0d18,	// (0x0005b5ac) fep_hwr_top_pane

0x0d30,	// (0x0005b5c4) fep_hwr_write_pane_ParamLimits

0x0d30,	// (0x0005b5c4) fep_hwr_write_pane

0xfb32,	// (0x0006a3c6) fep_vkb_side_pane_g

0x4e8c,	// (0x0005f720) fep_hwr_top_pane_g1

0x4e9e,	// (0x0005f732) fep_hwr_top_pane_g2

0x0d6a,	// (0x0005b5fe) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0006a3a2) fep_hwr_top_pane_g

0x0d7f,	// (0x0005b613) fep_hwr_top_text_pane

0xbb65,	// (0x000663f9) fep_hwr_top_text_pane_g1

0x4ed4,	// (0x0005f768) fep_hwr_top_text_pane_t1

0x0e75,	// (0x0005b709) fep_hwr_candidate_pane_g1

0x5119,	// (0x0005f9ad) fep_vkb_keypad_pane_g3_ParamLimits

0x5119,	// (0x0005f9ad) fep_vkb_keypad_pane_g3

0x5141,	// (0x0005f9d5) fep_vkb_keypad_pane_g4_ParamLimits

0x5141,	// (0x0005f9d5) fep_vkb_keypad_pane_g4

0x51b0,	// (0x0005fa44) fep_vkb_bottom_pane_g2_ParamLimits

0x51b0,	// (0x0005fa44) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0006a3cd) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0006a3cd) fep_vkb_bottom_pane_g

0x4e30,	// (0x0005f6c4) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0006a3d7) cell_vkb_side_pane_g

0x523b,	// (0x0005facf) cell_vkb_side_pane_t1

0x5249,	// (0x0005fadd) cell_vkb_side_pane_t1_copy1

0x4e30,	// (0x0005f6c4) bg_fep_vkb_candidate_pane_g2

0x5375,	// (0x0005fc09) cell_vkb_candidate_pane_ParamLimits

0x4ee2,	// (0x0005f776) aid_size_cell_vkb_ParamLimits

0x4ee2,	// (0x0005f776) aid_size_cell_vkb

0x5375,	// (0x0005fc09) cell_vkb_candidate_pane

0x0e9c,	// (0x0005b730) bg_popup_fep_shadow_pane_g1

0xccf7,	// (0x0006758b) fep_vkb_bottom_pane_ParamLimits

0xccf7,	// (0x0006758b) fep_vkb_bottom_pane

0x4fa6,	// (0x0005f83a) fep_vkb_candidate_pane_ParamLimits

0x4fa6,	// (0x0005f83a) fep_vkb_candidate_pane

0xcd1c,	// (0x000675b0) fep_vkb_keypad_pane_ParamLimits

0xcd1c,	// (0x000675b0) fep_vkb_keypad_pane

0xcd51,	// (0x000675e5) fep_vkb_side_pane_ParamLimits

0xcd51,	// (0x000675e5) fep_vkb_side_pane

0xcd8d,	// (0x00067621) fep_vkb_top_pane_ParamLimits

0xcd8d,	// (0x00067621) fep_vkb_top_pane

0x5072,	// (0x0005f906) fep_vkb_top_pane_g1_ParamLimits

0x5072,	// (0x0005f906) fep_vkb_top_pane_g1

0x5081,	// (0x0005f915) fep_vkb_top_pane_g2_ParamLimits

0x5081,	// (0x0005f915) fep_vkb_top_pane_g2

0x5090,	// (0x0005f924) fep_vkb_top_pane_g3_ParamLimits

0x5090,	// (0x0005f924) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0006a3bd) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0006a3bd) fep_vkb_top_pane_g

0x50ae,	// (0x0005f942) fep_vkb_top_text_pane_ParamLimits

0x50ae,	// (0x0005f942) fep_vkb_top_text_pane

0xcdc2,	// (0x00067656) fep_vkb_side_pane_g1_ParamLimits

0xcdc2,	// (0x00067656) fep_vkb_side_pane_g1

0x5108,	// (0x0005f99c) grid_vkb_side_pane_ParamLimits

0x5108,	// (0x0005f99c) grid_vkb_side_pane

0x0ea4,	// (0x0005b738) bg_popup_fep_shadow_pane_g2

0x0ead,	// (0x0005b741) bg_popup_fep_shadow_pane_g3

0x0eb5,	// (0x0005b749) bg_popup_fep_shadow_pane_g4

0x0ebe,	// (0x0005b752) bg_popup_fep_shadow_pane_g5

0x0ec8,	// (0x0005b75c) bg_popup_fep_shadow_pane_g6

0x0ed0,	// (0x0005b764) bg_popup_fep_shadow_pane_g7

0x852e,	// (0x00062dc2) bg_popup_fep_shadow_pane_g8

0x515f,	// (0x0005f9f3) grid_vkb_keypad_number_pane_ParamLimits

0x515f,	// (0x0005f9f3) grid_vkb_keypad_number_pane

0x516f,	// (0x0005fa03) grid_vkb_keypad_pane_ParamLimits

0x516f,	// (0x0005fa03) grid_vkb_keypad_pane

0x5195,	// (0x0005fa29) fep_vkb_bottom_pane_g1_ParamLimits

0x5195,	// (0x0005fa29) fep_vkb_bottom_pane_g1

0x51be,	// (0x0005fa52) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x51be,	// (0x0005fa52) grid_vkb_keypad_bottom_left_pane

0x51d3,	// (0x0005fa67) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x51d3,	// (0x0005fa67) grid_vkb_keypad_bottom_right_pane

0x51e8,	// (0x0005fa7c) fep_vkb_top_text_pane_g1

0xce09,	// (0x0006769d) fep_vkb_top_text_pane_t1

0xce1b,	// (0x000676af) cell_vkb_side_pane_ParamLimits

0xce1b,	// (0x000676af) cell_vkb_side_pane

0x4e30,	// (0x0005f6c4) cell_vkb_side_pane_g1

0x5257,	// (0x0005faeb) cell_vkb_keypad_pane_ParamLimits

0x5257,	// (0x0005faeb) cell_vkb_keypad_pane

0x52cc,	// (0x0005fb60) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0006a3ea) bg_popup_fep_shadow_pane_g

0x0ee2,	// (0x0005b776) cell_hwr_side_pane_g1

0x0ee2,	// (0x0005b776) cell_hwr_side_pane_g2

0x52d6,	// (0x0005fb6a) cell_vkb_keypad_pane_t1

0xce31,	// (0x000676c5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce31,	// (0x000676c5) cell_vkb_keypad_bottom_left_pane

0xce46,	// (0x000676da) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce46,	// (0x000676da) cell_vkb_keypad_bottom_right_pane

0x4e30,	// (0x0005f6c4) cell_vkb_keypad_bottom_left_pane_g1

0x4e30,	// (0x0005f6c4) cell_vkb_keypad_bottom_right_pane_g1

0x533a,	// (0x0005fbce) cell_vkb_keypad_number_pane_ParamLimits

0x533a,	// (0x0005fbce) cell_vkb_keypad_number_pane

0x5359,	// (0x0005fbed) cell_vkb_keypad_number_pane_g1

0x5363,	// (0x0005fbf7) cell_vkb_keypad_number_pane_g2

0x536c,	// (0x0005fc00) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0006a3dc) cell_vkb_keypad_number_pane_g

0x52d6,	// (0x0005fb6a) cell_vkb_keypad_number_pane_t1

0x5390,	// (0x0005fc24) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0006a3fd) cell_hwr_side_pane_g

0x53a9,	// (0x0005fc3d) cell_hwr_side_pane_t1

0x0eec,	// (0x0005b780) cell_hwr_side_pane_t1_copy1

0x0efa,	// (0x0005b78e) cell_hwr_candidate_pane_g1

0x0f29,	// (0x0005b7bd) cell_hwr_candidate_pane_t1

0x4e30,	// (0x0005f6c4) cell_vkb_candidate_pane_g2

0x53ed,	// (0x0005fc81) cell_vkb_candidate_pane_t1

0x0c95,	// (0x0005b529) bg_popup_fep_shadow_pane_ParamLimits

0x0c95,	// (0x0005b529) bg_popup_fep_shadow_pane

0x0d4a,	// (0x0005b5de) bg_fep_hwr_top_pane_g4

0x4eb0,	// (0x0005f744) bg_hwr_side_pane_g1_ParamLimits

0x4eb0,	// (0x0005f744) bg_hwr_side_pane_g1

0xb2b2,	// (0x00065b46) cell_hwr_side_pane_ParamLimits

0xb2b2,	// (0x00065b46) cell_hwr_side_pane

0x0df6,	// (0x0005b68a) fep_hwr_write_pane_g1_ParamLimits

0x0df6,	// (0x0005b68a) fep_hwr_write_pane_g1

0x0e03,	// (0x0005b697) fep_hwr_write_pane_g2_ParamLimits

0x0e03,	// (0x0005b697) fep_hwr_write_pane_g2

0x0e10,	// (0x0005b6a4) fep_hwr_write_pane_g3_ParamLimits

0x0e10,	// (0x0005b6a4) fep_hwr_write_pane_g3

0xb2d2,	// (0x00065b66) fep_hwr_write_pane_g4_ParamLimits

0xb2d2,	// (0x00065b66) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0006a3a9) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0006a3a9) fep_hwr_write_pane_g

0x0d4a,	// (0x0005b5de) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d4a,	// (0x0005b5de) bg_fep_hwr_candidate_pane_g2

0x0e33,	// (0x0005b6c7) cell_hwr_candidate_pane_ParamLimits

0x0e33,	// (0x0005b6c7) cell_hwr_candidate_pane

0x0e75,	// (0x0005b709) fep_hwr_candidate_pane_g1_ParamLimits

0x4f10,	// (0x0005f7a4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4f10,	// (0x0005f7a4) bg_popup_fep_shadow_pane_cp2

0x50a0,	// (0x0005f934) fep_vkb_top_pane_g4_ParamLimits

0x50a0,	// (0x0005f934) fep_vkb_top_pane_g4

0x50e6,	// (0x0005f97a) fep_vkb_side_pane_g2_ParamLimits

0x50e6,	// (0x0005f97a) fep_vkb_side_pane_g2

0x9e1a,	// (0x000646ae) list_setting_pane_t4_ParamLimits

0x9e1a,	// (0x000646ae) list_setting_pane_t4

0x9eb4,	// (0x00064748) list_setting_number_pane_t5_ParamLimits

0x9eb4,	// (0x00064748) list_setting_number_pane_t5

0xbb9c,	// (0x00066430) list_double_heading_pane_cp2_ParamLimits

0xbb9c,	// (0x00066430) list_double_heading_pane_cp2

0x3dd9,	// (0x0005e66d) list_double_heading_pane_g1_cp2_ParamLimits

0x3dd9,	// (0x0005e66d) list_double_heading_pane_g1_cp2

0x53fb,	// (0x0005fc8f) list_double_heading_pane_g2_cp2_ParamLimits

0x53fb,	// (0x0005fc8f) list_double_heading_pane_g2_cp2

0x540f,	// (0x0005fca3) list_double_heading_pane_t1_cp2_ParamLimits

0x540f,	// (0x0005fca3) list_double_heading_pane_t1_cp2

0x5425,	// (0x0005fcb9) list_double_heading_pane_t2_cp2_ParamLimits

0x5425,	// (0x0005fcb9) list_double_heading_pane_t2_cp2

0x7e99,	// (0x0006272d) aid_value_unit2

0xefa4,	// (0x00069838) popup_preview_fixed_window

0x803b,	// (0x000628cf) bg_popup_preview_window_pane_cp02

0x5437,	// (0x0005fccb) list_preview_fixed_pane

0x547d,	// (0x0005fd11) list_empty_pane_fp_ParamLimits

0x547d,	// (0x0005fd11) list_empty_pane_fp

0x547d,	// (0x0005fd11) list_single_cale_day_pane_fp_ParamLimits

0x547d,	// (0x0005fd11) list_single_cale_day_pane_fp

0x547d,	// (0x0005fd11) list_single_graphic_heading_pane_fp_ParamLimits

0x547d,	// (0x0005fd11) list_single_graphic_heading_pane_fp

0x547d,	// (0x0005fd11) list_single_graphic_pane_fp_ParamLimits

0x547d,	// (0x0005fd11) list_single_graphic_pane_fp

0x547d,	// (0x0005fd11) list_single_heading_pane_fp_ParamLimits

0x547d,	// (0x0005fd11) list_single_heading_pane_fp

0x547d,	// (0x0005fd11) list_single_pane_fp_ParamLimits

0x547d,	// (0x0005fd11) list_single_pane_fp

0x5493,	// (0x0005fd27) list_single_pane_fp_g1_ParamLimits

0x5493,	// (0x0005fd27) list_single_pane_fp_g1

0x549f,	// (0x0005fd33) list_single_pane_fp_g2_ParamLimits

0x549f,	// (0x0005fd33) list_single_pane_fp_g2

0x54ab,	// (0x0005fd3f) list_single_pane_fp_g3_ParamLimits

0x54ab,	// (0x0005fd3f) list_single_pane_fp_g3

0x54bf,	// (0x0005fd53) list_single_pane_fp_g4_ParamLimits

0x54bf,	// (0x0005fd53) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0006a410) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0006a410) list_single_pane_fp_g

0xe23e,	// (0x00068ad2) list_single_pane_fp_t1_ParamLimits

0xe23e,	// (0x00068ad2) list_single_pane_fp_t1

0xe255,	// (0x00068ae9) list_single_graphic_pane_fp_g1_ParamLimits

0xe255,	// (0x00068ae9) list_single_graphic_pane_fp_g1

0x5493,	// (0x0005fd27) list_single_graphic_pane_fp_g2_ParamLimits

0x5493,	// (0x0005fd27) list_single_graphic_pane_fp_g2

0x549f,	// (0x0005fd33) list_single_graphic_pane_fp_g3_ParamLimits

0x549f,	// (0x0005fd33) list_single_graphic_pane_fp_g3

0x54ab,	// (0x0005fd3f) list_single_graphic_pane_fp_g4_ParamLimits

0x54ab,	// (0x0005fd3f) list_single_graphic_pane_fp_g4

0x54bf,	// (0x0005fd53) list_single_graphic_pane_fp_g5_ParamLimits

0x54bf,	// (0x0005fd53) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0006a419) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0006a419) list_single_graphic_pane_fp_g

0xe261,	// (0x00068af5) list_single_graphic_pane_fp_t1_ParamLimits

0xe261,	// (0x00068af5) list_single_graphic_pane_fp_t1

0xe255,	// (0x00068ae9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe255,	// (0x00068ae9) list_single_graphic_heading_pane_fp_g1

0x5493,	// (0x0005fd27) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5493,	// (0x0005fd27) list_single_graphic_heading_pane_fp_g2

0x549f,	// (0x0005fd33) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x549f,	// (0x0005fd33) list_single_graphic_heading_pane_fp_g3

0x54ab,	// (0x0005fd3f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x54ab,	// (0x0005fd3f) list_single_graphic_heading_pane_fp_g4

0x54bf,	// (0x0005fd53) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x54bf,	// (0x0005fd53) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0006a419) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0006a419) list_single_graphic_heading_pane_fp_g

0xe277,	// (0x00068b0b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe277,	// (0x00068b0b) list_single_graphic_heading_pane_fp_t1

0xe28d,	// (0x00068b21) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe28d,	// (0x00068b21) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0006a424) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0006a424) list_single_graphic_heading_pane_fp_t

0xe29f,	// (0x00068b33) list_single_cale_day_pane_fp_g1_ParamLimits

0xe29f,	// (0x00068b33) list_single_cale_day_pane_fp_g1

0x54cb,	// (0x0005fd5f) list_single_cale_day_pane_fp_g2_ParamLimits

0x54cb,	// (0x0005fd5f) list_single_cale_day_pane_fp_g2

0x3d04,	// (0x0005e598) list_single_cale_day_pane_fp_g3_ParamLimits

0x3d04,	// (0x0005e598) list_single_cale_day_pane_fp_g3

0x3d2c,	// (0x0005e5c0) list_single_cale_day_pane_fp_g4_ParamLimits

0x3d2c,	// (0x0005e5c0) list_single_cale_day_pane_fp_g4

0x3d50,	// (0x0005e5e4) list_single_cale_day_pane_fp_g5_ParamLimits

0x3d50,	// (0x0005e5e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0006a429) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0006a429) list_single_cale_day_pane_fp_g

0xe2d7,	// (0x00068b6b) list_single_cale_day_pane_fp_t1_ParamLimits

0xe2d7,	// (0x00068b6b) list_single_cale_day_pane_fp_t1

0xe2fd,	// (0x00068b91) list_single_cale_day_pane_fp_t2_ParamLimits

0xe2fd,	// (0x00068b91) list_single_cale_day_pane_fp_t2

0xe316,	// (0x00068baa) list_single_cale_day_pane_fp_t3_ParamLimits

0xe316,	// (0x00068baa) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0006a434) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0006a434) list_single_cale_day_pane_fp_t

0x5493,	// (0x0005fd27) list_empty_pane_fp_g1_ParamLimits

0x5493,	// (0x0005fd27) list_empty_pane_fp_g1

0xe32f,	// (0x00068bc3) list_empty_pane_fp_t1

0xe33d,	// (0x00068bd1) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0006a43b) list_empty_pane_fp_t

0x5493,	// (0x0005fd27) list_single_heading_pane_fp_g1_ParamLimits

0x5493,	// (0x0005fd27) list_single_heading_pane_fp_g1

0x549f,	// (0x0005fd33) list_single_heading_pane_fp_g2_ParamLimits

0x549f,	// (0x0005fd33) list_single_heading_pane_fp_g2

0x54ab,	// (0x0005fd3f) list_single_heading_pane_fp_g3_ParamLimits

0x54ab,	// (0x0005fd3f) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0006a440) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0006a440) list_single_heading_pane_fp_g

0xe34b,	// (0x00068bdf) list_single_heading_pane_fp_t1_ParamLimits

0xe34b,	// (0x00068bdf) list_single_heading_pane_fp_t1

0xe35d,	// (0x00068bf1) list_single_heading_pane_fp_t2_ParamLimits

0xe35d,	// (0x00068bf1) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0006a447) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0006a447) list_single_heading_pane_fp_t

0xa140,	// (0x000649d4) aid_size_cell_fast

0x8010,	// (0x000628a4) soft_indicator_pane_cp1_t1

0xa149,	// (0x000649dd) cell_app_pane_cp2_ParamLimits

0xa149,	// (0x000649dd) cell_app_pane_cp2

0x0cb7,	// (0x0005b54b) fep_hwr_candidate_drop_down_list_pane

0x0e8f,	// (0x0005b723) fep_hwr_candidate_pane_g3_ParamLimits

0x0e8f,	// (0x0005b723) fep_hwr_candidate_pane_g3

0xe231,	// (0x00068ac5) fep_hwr_candidate_pane_g4_ParamLimits

0xe231,	// (0x00068ac5) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0006a3b6) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0006a3b6) fep_hwr_candidate_pane_g

0x4f95,	// (0x0005f829) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4f95,	// (0x0005f829) fep_vkb_candidate_drop_down_list_pane

0x5398,	// (0x0005fc2c) fep_vkb_candidate_pane_g3

0x53a0,	// (0x0005fc34) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0006a3e3) fep_vkb_candidate_pane_g

0x0efa,	// (0x0005b78e) cell_hwr_candidate_pane_g1_ParamLimits

0x0f08,	// (0x0005b79c) cell_hwr_candidate_pane_g3_ParamLimits

0x0f08,	// (0x0005b79c) cell_hwr_candidate_pane_g3

0x5e36,	// (0x000606ca) cell_hwr_candidate_pane_g4_ParamLimits

0x5e36,	// (0x000606ca) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0006a402) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0006a402) cell_hwr_candidate_pane_g

0x53b7,	// (0x0005fc4b) cell_vkb_candidate_pane_g3_ParamLimits

0x53b7,	// (0x0005fc4b) cell_vkb_candidate_pane_g3

0x53d2,	// (0x0005fc66) cell_vkb_candidate_pane_g4_ParamLimits

0x53d2,	// (0x0005fc66) cell_vkb_candidate_pane_g4

0xce61,	// (0x000676f5) cell_app_pane_cp2_g1_ParamLimits

0xce61,	// (0x000676f5) cell_app_pane_cp2_g1

0x54f5,	// (0x0005fd89) cell_app_pane_cp2_g2_ParamLimits

0x54f5,	// (0x0005fd89) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0006a44c) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0006a44c) cell_app_pane_cp2_g

0x5501,	// (0x0005fd95) cell_app_pane_cp2_t1_ParamLimits

0x5501,	// (0x0005fd95) cell_app_pane_cp2_t1

0x84ca,	// (0x00062d5e) grid_highlight_pane_cp1_ParamLimits

0x84ca,	// (0x00062d5e) grid_highlight_pane_cp1

0x0f47,	// (0x0005b7db) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f47,	// (0x0005b7db) cell_hwr_candidate_pane_cp1

0x0efa,	// (0x0005b78e) fep_hwr_candidate_drop_down_list_pane_g1

0x0f66,	// (0x0005b7fa) fep_hwr_candidate_drop_down_list_pane_g2

0x0f73,	// (0x0005b807) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0006a451) fep_hwr_candidate_drop_down_list_pane_g

0x0f80,	// (0x0005b814) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f89,	// (0x0005b81d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f89,	// (0x0005b81d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f96,	// (0x0005b82a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f96,	// (0x0005b82a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0fa3,	// (0x0005b837) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0fa3,	// (0x0005b837) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0fb0,	// (0x0005b844) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0fb0,	// (0x0005b844) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0fcb,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0fcb,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fe6,	// (0x0005b87a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fe6,	// (0x0005b87a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1001,	// (0x0005b895) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1001,	// (0x0005b895) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x101c,	// (0x0005b8b0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x101c,	// (0x0005b8b0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0006a458) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0006a458) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5513,	// (0x0005fda7) cell_vkb_candidate_pane_cp1_ParamLimits

0x5513,	// (0x0005fda7) cell_vkb_candidate_pane_cp1

0x50a0,	// (0x0005f934) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x50a0,	// (0x0005f934) fep_vkb_candidate_drop_down_list_pane_g1

0x5533,	// (0x0005fdc7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5533,	// (0x0005fdc7) fep_vkb_candidate_drop_down_list_pane_g2

0x5540,	// (0x0005fdd4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5540,	// (0x0005fdd4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0006a469) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0006a469) fep_vkb_candidate_drop_down_list_pane_g

0x554d,	// (0x0005fde1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x554d,	// (0x0005fde1) fep_vkb_candidate_drop_down_list_scroll_pane

0x555a,	// (0x0005fdee) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x555a,	// (0x0005fdee) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5567,	// (0x0005fdfb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5567,	// (0x0005fdfb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5573,	// (0x0005fe07) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5573,	// (0x0005fe07) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x557f,	// (0x0005fe13) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x557f,	// (0x0005fe13) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x55a0,	// (0x0005fe34) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x55a0,	// (0x0005fe34) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x55c1,	// (0x0005fe55) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x55c1,	// (0x0005fe55) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x55e2,	// (0x0005fe76) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x55e2,	// (0x0005fe76) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5603,	// (0x0005fe97) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5603,	// (0x0005fe97) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0006a470) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0006a470) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x94b9,	// (0x00063d4d) title_pane_g1_ParamLimits

0x94cc,	// (0x00063d60) title_pane_g2_ParamLimits

0xf54e,	// (0x00069de2) title_pane_g_ParamLimits

0xbb55,	// (0x000663e9) aid_call2_pane

0xbb5d,	// (0x000663f1) aid_call_pane

0xbb65,	// (0x000663f9) popup_clock_analogue_window_g1

0xbb65,	// (0x000663f9) popup_clock_analogue_window_g2

0xf157,	// (0x000699eb) popup_clock_analogue_window_g3

0xf160,	// (0x000699f4) popup_clock_analogue_window_g4

0x7eab,	// (0x0006273f) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00069f87) popup_clock_analogue_window_g

0xf168,	// (0x000699fc) popup_clock_analogue_window_t1

0xf176,	// (0x00069a0a) clock_digital_number_pane_ParamLimits

0xf176,	// (0x00069a0a) clock_digital_number_pane

0xf182,	// (0x00069a16) clock_digital_number_pane_cp02_ParamLimits

0xf182,	// (0x00069a16) clock_digital_number_pane_cp02

0xf18e,	// (0x00069a22) clock_digital_number_pane_cp03_ParamLimits

0xf18e,	// (0x00069a22) clock_digital_number_pane_cp03

0xf19a,	// (0x00069a2e) clock_digital_number_pane_cp04_ParamLimits

0xf19a,	// (0x00069a2e) clock_digital_number_pane_cp04

0xf1a6,	// (0x00069a3a) clock_digital_separator_pane_ParamLimits

0xf1a6,	// (0x00069a3a) clock_digital_separator_pane

0xf1b2,	// (0x00069a46) popup_clock_digital_window_t1_ParamLimits

0xf1b2,	// (0x00069a46) popup_clock_digital_window_t1

0x7eab,	// (0x0006273f) clock_digital_number_pane_g1

0x7eab,	// (0x0006273f) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00069f92) clock_digital_number_pane_g

0x7eab,	// (0x0006273f) clock_digital_separator_pane_g1

0x7eab,	// (0x0006273f) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00069f92) clock_digital_separator_pane_g

0xbc28,	// (0x000664bc) aid_fill_nsta_ParamLimits

0xbd5e,	// (0x000665f2) indicator_nsta_pane_ParamLimits

0x2463,	// (0x0005ccf7) popup_clock_analogue_window

0x2463,	// (0x0005ccf7) popup_clock_digital_window

0xca7f,	// (0x00067313) grid_indicator_nsta_pane_ParamLimits

0x4841,	// (0x0005f0d5) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0006a336) clock_nsta_pane_t

0xf138,	// (0x000699cc) aid_size_max_handle

0xa227,	// (0x00064abb) aid_size_min_handle

0x1e36,	// (0x0005c6ca) editor_scroll_pane

0x561e,	// (0x0005feb2) ex_editor_pane

0x85dd,	// (0x00062e71) scroll_pane_cp13

0x826b,	// (0x00062aff) scroll_pane_cp14

0xbb94,	// (0x00066428) scroll_pane_cp36

0xa2f1,	// (0x00064b85) list_single_graphic_hl_pane_cp2_ParamLimits

0xa2f1,	// (0x00064b85) list_single_graphic_hl_pane_cp2

0xc86b,	// (0x000670ff) list_single_graphic_hl_pane_ParamLimits

0xc86b,	// (0x000670ff) list_single_graphic_hl_pane

0xb2e7,	// (0x00065b7b) aid_size_min_hl_cp1

0x5626,	// (0x0005feba) list_highlight_pane_cp34_ParamLimits

0x5626,	// (0x0005feba) list_highlight_pane_cp34

0x5637,	// (0x0005fecb) list_single_graphic_hl_pane_g1_ParamLimits

0x5637,	// (0x0005fecb) list_single_graphic_hl_pane_g1

0xb2f0,	// (0x00065b84) list_single_graphic_hl_pane_g2_ParamLimits

0xb2f0,	// (0x00065b84) list_single_graphic_hl_pane_g2

0xb2f0,	// (0x00065b84) list_single_graphic_hl_pane_g3_ParamLimits

0xb2f0,	// (0x00065b84) list_single_graphic_hl_pane_g3

0x1d6f,	// (0x0005c603) list_single_graphic_hl_pane_g4_ParamLimits

0x1d6f,	// (0x0005c603) list_single_graphic_hl_pane_g4

0x5674,	// (0x0005ff08) list_single_graphic_hl_pane_g5_ParamLimits

0x5674,	// (0x0005ff08) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0006a481) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0006a481) list_single_graphic_hl_pane_g

0xb2fc,	// (0x00065b90) list_single_graphic_hl_pane_t1_ParamLimits

0xb2fc,	// (0x00065b90) list_single_graphic_hl_pane_t1

0x5644,	// (0x0005fed8) aid_size_min_hl_cp2

0x564d,	// (0x0005fee1) list_highlight_pane_cp34_cp2_ParamLimits

0x564d,	// (0x0005fee1) list_highlight_pane_cp34_cp2

0x5637,	// (0x0005fecb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5637,	// (0x0005fecb) list_single_graphic_hl_pane_g1_cp2

0x565a,	// (0x0005feee) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x565a,	// (0x0005feee) list_single_graphic_hl_pane_g2_cp2

0xce7f,	// (0x00067713) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xce7f,	// (0x00067713) list_single_graphic_hl_pane_g3_cp2

0x1d6f,	// (0x0005c603) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1d6f,	// (0x0005c603) list_single_graphic_hl_pane_g4_cp2

0x5674,	// (0x0005ff08) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5674,	// (0x0005ff08) list_single_graphic_hl_pane_g5_cp2

0xa720,	// (0x00064fb4) control_pane_g4_ParamLimits

0xa720,	// (0x00064fb4) control_pane_g4

0x217c,	// (0x0005ca10) bg_popup_sub_pane_cp10_ParamLimits

0x4e3a,	// (0x0005f6ce) list_choice_list_pane_ParamLimits

0x4e49,	// (0x0005f6dd) scroll_pane_cp23

0x803b,	// (0x000628cf) bg_popup_preview_window_pane_cp02_ParamLimits

0x5437,	// (0x0005fccb) list_preview_fixed_pane_ParamLimits

0x544d,	// (0x0005fce1) list_preview_fixed_pane_cp_ParamLimits

0x544d,	// (0x0005fce1) list_preview_fixed_pane_cp

0x5459,	// (0x0005fced) popup_preview_fixed_window_g1_ParamLimits

0x5459,	// (0x0005fced) popup_preview_fixed_window_g1

0x5465,	// (0x0005fcf9) popup_preview_fixed_window_g2_ParamLimits

0x5465,	// (0x0005fcf9) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0006a409) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0006a409) popup_preview_fixed_window_g

0xf0ac,	// (0x00069940) aid_navi_side_left_pane_ParamLimits

0xf0c1,	// (0x00069955) aid_navi_side_right_pane_ParamLimits

0xf0d9,	// (0x0006996d) navi_icon_pane_stacon_ParamLimits

0xf0ed,	// (0x00069981) navi_navi_pane_stacon_ParamLimits

0xf0d9,	// (0x0006996d) navi_text_pane_stacon_ParamLimits

0xeec9,	// (0x0006975d) main_text_info_pane

0x569e,	// (0x0005ff32) listscroll_text_info_pane

0x56a6,	// (0x0005ff3a) list_text_info_pane_ParamLimits

0x56a6,	// (0x0005ff3a) list_text_info_pane

0x56b5,	// (0x0005ff49) scroll_pane_cp24_ParamLimits

0x56b5,	// (0x0005ff49) scroll_pane_cp24

0xce8d,	// (0x00067721) list_text_info_pane_t1_ParamLimits

0xce8d,	// (0x00067721) list_text_info_pane_t1

0xa8d4,	// (0x00065168) popup_fast_swap2_window_ParamLimits

0xa8d4,	// (0x00065168) popup_fast_swap2_window

0x5707,	// (0x0005ff9b) aid_size_cell_fast2

0x7ea1,	// (0x00062735) bg_popup_window_pane_cp17

0x2b08,	// (0x0005d39c) heading_pane_cp2

0x816f,	// (0x00062a03) listscroll_fast2_pane

0x5711,	// (0x0005ffa5) grid_fast2_pane

0x571b,	// (0x0005ffaf) listscroll_fast2_pane_g1

0x5723,	// (0x0005ffb7) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0006a48c) listscroll_fast2_pane_g

0x85dd,	// (0x00062e71) scroll_pane_cp26

0x572d,	// (0x0005ffc1) cell_fast2_pane_ParamLimits

0x572d,	// (0x0005ffc1) cell_fast2_pane

0x5742,	// (0x0005ffd6) cell_fast2_pane_g1

0x574b,	// (0x0005ffdf) cell_fast2_pane_g2

0x5754,	// (0x0005ffe8) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0006a491) cell_fast2_pane_g

0x81a2,	// (0x00062a36) grid_highlight_pane_cp9

0x011a,	// (0x0005a9ae) main_eswt_pane_ParamLimits

0x011a,	// (0x0005a9ae) main_eswt_pane

0x56ca,	// (0x0005ff5e) list_single_text_info_pane

0x575c,	// (0x0005fff0) eswt_ctrl_button_pane

0x575c,	// (0x0005fff0) eswt_ctrl_canvas_pane

0xcea9,	// (0x0006773d) eswt_ctrl_combo_pane

0x575c,	// (0x0005fff0) eswt_ctrl_default_pane

0x575c,	// (0x0005fff0) eswt_ctrl_label_pane

0x576c,	// (0x00060000) eswt_ctrl_wait_pane

0xceb1,	// (0x00067745) eswt_shell_pane

0x7ea1,	// (0x00062735) listscroll_eswt_app_pane

0x5794,	// (0x00060028) popup_eswt_tasktip_window_ParamLimits

0x5794,	// (0x00060028) popup_eswt_tasktip_window

0x2715,	// (0x0005cfa9) bg_popup_window_pane_cp18

0x57a5,	// (0x00060039) eswt_control_pane_g1_ParamLimits

0x57a5,	// (0x00060039) eswt_control_pane_g1

0x57b2,	// (0x00060046) eswt_control_pane_g2_ParamLimits

0x57b2,	// (0x00060046) eswt_control_pane_g2

0x57bf,	// (0x00060053) eswt_control_pane_g3_ParamLimits

0x57bf,	// (0x00060053) eswt_control_pane_g3

0x57cc,	// (0x00060060) eswt_control_pane_g4_ParamLimits

0x57cc,	// (0x00060060) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0006a498) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0006a498) eswt_control_pane_g

0x84ca,	// (0x00062d5e) bg_button_pane_ParamLimits

0x84ca,	// (0x00062d5e) bg_button_pane

0x81b7,	// (0x00062a4b) common_borders_pane_copy2_ParamLimits

0x81b7,	// (0x00062a4b) common_borders_pane_copy2

0x57d9,	// (0x0006006d) control_button_pane_g1_ParamLimits

0x57d9,	// (0x0006006d) control_button_pane_g1

0x57e5,	// (0x00060079) control_button_pane_g2_ParamLimits

0x57e5,	// (0x00060079) control_button_pane_g2

0x57f1,	// (0x00060085) control_button_pane_g3_ParamLimits

0x57f1,	// (0x00060085) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0006a4a1) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0006a4a1) control_button_pane_g

0x5805,	// (0x00060099) control_button_pane_t1

0x5813,	// (0x000600a7) control_button_pane_t2

0x0001,

0xfc14,	// (0x0006a4a8) control_button_pane_t

0x2689,	// (0x0005cf1d) bg_button_pane_g1

0x2699,	// (0x0005cf2d) bg_button_pane_g2

0x2691,	// (0x0005cf25) bg_button_pane_g3

0x26a9,	// (0x0005cf3d) bg_button_pane_g4

0x26a1,	// (0x0005cf35) bg_button_pane_g5

0x26b1,	// (0x0005cf45) bg_button_pane_g6

0x26b9,	// (0x0005cf4d) bg_button_pane_g7

0x26c9,	// (0x0005cf5d) bg_button_pane_g8

0x26c1,	// (0x0005cf55) bg_button_pane_g9

0x0008,

0xf855,	// (0x0006a0e9) bg_button_pane_g

0x4df5,	// (0x0005f689) common_borders_pane_ParamLimits

0x4df5,	// (0x0005f689) common_borders_pane

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy1_ParamLimits

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy1

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy1_ParamLimits

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy1

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy1_ParamLimits

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy1

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy1_ParamLimits

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy1

0x4e30,	// (0x0005f6c4) bg_eswt_ctrl_canvas_pane_g1

0x4df5,	// (0x0005f689) common_borders_pane_cp2_ParamLimits

0x4df5,	// (0x0005f689) common_borders_pane_cp2

0x4df5,	// (0x0005f689) common_borders_pane_cp3_ParamLimits

0x4df5,	// (0x0005f689) common_borders_pane_cp3

0x5821,	// (0x000600b5) separator_horizontal_pane

0x5829,	// (0x000600bd) separator_vertical_pane

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy2_ParamLimits

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy2

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy2_ParamLimits

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy2

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy2_ParamLimits

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy2

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy2_ParamLimits

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy2

0x7ea1,	// (0x00062735) common_borders_pane_cp4

0x5832,	// (0x000600c6) separator_horizontal_pane_g1

0x583b,	// (0x000600cf) separator_horizontal_pane_g2

0x5844,	// (0x000600d8) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0006a4ad) separator_horizontal_pane_g

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy3_ParamLimits

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy3

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy3_ParamLimits

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy3

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy3_ParamLimits

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy3

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy3_ParamLimits

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy3

0x7ea1,	// (0x00062735) common_borders_pane_cp5

0x584d,	// (0x000600e1) separator_vertical_pane_g1

0x5856,	// (0x000600ea) separator_vertical_pane_g2

0x585f,	// (0x000600f3) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0006a4b4) separator_vertical_pane_g

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy4_ParamLimits

0x57a5,	// (0x00060039) eswt_control_pane_g1_copy4

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy4_ParamLimits

0x57b2,	// (0x00060046) eswt_control_pane_g2_copy4

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy4_ParamLimits

0x57bf,	// (0x00060053) eswt_control_pane_g3_copy4

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy4_ParamLimits

0x57cc,	// (0x00060060) eswt_control_pane_g4_copy4

0xced1,	// (0x00067765) eswt_ctrl_combo_button_pane

0xced9,	// (0x0006776d) eswt_ctrl_input_pane

0xcee1,	// (0x00067775) popup_choice_list_window_cp70

0xcee9,	// (0x0006777d) eswt_ctrl_input_pane_t1

0x7ea1,	// (0x00062735) input_focus_pane_cp70

0x4df5,	// (0x0005f689) bg_button_pane_cp70_ParamLimits

0x4df5,	// (0x0005f689) bg_button_pane_cp70

0xcef7,	// (0x0006778b) eswt_ctrl_combo_button_pane_g1

0x5896,	// (0x0006012a) wait_bar_pane_cp70

0x2715,	// (0x0005cfa9) bg_popup_window_pane_cp70_ParamLimits

0x2715,	// (0x0005cfa9) bg_popup_window_pane_cp70

0x589e,	// (0x00060132) popup_eswt_tasktip_window_t1

0x58b4,	// (0x00060148) wait_bar_pane_cp71_ParamLimits

0x58b4,	// (0x00060148) wait_bar_pane_cp71

0x58c0,	// (0x00060154) grid_eswt_app_pane

0x87c4,	// (0x00063058) scroll_pane_cp70

0xceff,	// (0x00067793) cell_eswt_app_pane_ParamLimits

0xceff,	// (0x00067793) cell_eswt_app_pane

0xcf29,	// (0x000677bd) cell_eswt_app_pane_g1_ParamLimits

0xcf29,	// (0x000677bd) cell_eswt_app_pane_g1

0xcf58,	// (0x000677ec) cell_eswt_app_pane_g2_ParamLimits

0xcf58,	// (0x000677ec) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0006a4bb) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0006a4bb) cell_eswt_app_pane_g

0xcf7c,	// (0x00067810) cell_eswt_app_pane_t1_ParamLimits

0xcf7c,	// (0x00067810) cell_eswt_app_pane_t1

0x597e,	// (0x00060212) grid_highlight_pane_cp70_ParamLimits

0x597e,	// (0x00060212) grid_highlight_pane_cp70

0xf43a,	// (0x00069cce) set_content_pane_g1

0xa6b2,	// (0x00064f46) status_small_volume_pane

0xb312,	// (0x00065ba6) status_small_volume_pane_g1

0xb31a,	// (0x00065bae) volume_small2_pane

0xb323,	// (0x00065bb7) volume_small2_pane_g1

0xb32c,	// (0x00065bc0) volume_small2_pane_g2

0xb335,	// (0x00065bc9) volume_small2_pane_g3

0xb33e,	// (0x00065bd2) volume_small2_pane_g4

0xb347,	// (0x00065bdb) volume_small2_pane_g5

0xb350,	// (0x00065be4) volume_small2_pane_g6

0xb359,	// (0x00065bed) volume_small2_pane_g7

0xb362,	// (0x00065bf6) volume_small2_pane_g8

0xb36b,	// (0x00065bff) volume_small2_pane_g9

0xb374,	// (0x00065c08) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0006a4c0) volume_small2_pane_g

0x51e8,	// (0x0005fa7c) fep_vkb_top_text_pane_g1_ParamLimits

0xce09,	// (0x0006769d) fep_vkb_top_text_pane_t1_ParamLimits

0x5471,	// (0x0005fd05) popup_preview_fixed_window_g3_ParamLimits

0x5471,	// (0x0005fd05) popup_preview_fixed_window_g3

0xaf71,	// (0x00065805) popup_toolbar_trans_pane

0xc6df,	// (0x00066f73) aid_height_set_list_ParamLimits

0x3a50,	// (0x0005e2e4) aid_size_parent_ParamLimits

0x217c,	// (0x0005ca10) list_highlight_pane_cp2_ParamLimits

0xf43a,	// (0x00069cce) set_content_pane_g1_ParamLimits

0xc87d,	// (0x00067111) list_single_image_pane_ParamLimits

0xc87d,	// (0x00067111) list_single_image_pane

0xcfae,	// (0x00067842) aid_size_cell_image_ParamLimits

0xcfae,	// (0x00067842) aid_size_cell_image

0xcfbb,	// (0x0006784f) grid_single_image_pane_ParamLimits

0xcfbb,	// (0x0006784f) grid_single_image_pane

0x549f,	// (0x0005fd33) list_single_image_pane_g1_ParamLimits

0x549f,	// (0x0005fd33) list_single_image_pane_g1

0x54ab,	// (0x0005fd3f) list_single_image_pane_g2_ParamLimits

0x54ab,	// (0x0005fd3f) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0006a4d5) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0006a4d5) list_single_image_pane_g

0x59a5,	// (0x00060239) list_single_image_pane_t1_ParamLimits

0x59a5,	// (0x00060239) list_single_image_pane_t1

0xcfc7,	// (0x0006785b) cell_image_list_pane_ParamLimits

0xcfc7,	// (0x0006785b) cell_image_list_pane

0xcfdb,	// (0x0006786f) cell_image_list_pane_g1

0xcfe4,	// (0x00067878) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0006a4da) cell_image_list_pane_g

0xcfed,	// (0x00067881) aid_size_cell_tb_trans_pane

0x84ca,	// (0x00062d5e) bg_tb_trans_pane

0xcfff,	// (0x00067893) grid_tb_trans_pane

0x2689,	// (0x0005cf1d) bg_tb_trans_pane_g1

0x2699,	// (0x0005cf2d) bg_tb_trans_pane_g2

0x2691,	// (0x0005cf25) bg_tb_trans_pane_g3

0x26a9,	// (0x0005cf3d) bg_tb_trans_pane_g4

0x26a1,	// (0x0005cf35) bg_tb_trans_pane_g5

0x26c9,	// (0x0005cf5d) bg_tb_trans_pane_g6

0x26c1,	// (0x0005cf55) bg_tb_trans_pane_g7

0x26b1,	// (0x0005cf45) bg_tb_trans_pane_g8

0x26b9,	// (0x0005cf4d) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0006a4df) bg_tb_trans_pane_g

0xd013,	// (0x000678a7) cell_toolbar_trans_pane_ParamLimits

0xd013,	// (0x000678a7) cell_toolbar_trans_pane

0x4e30,	// (0x0005f6c4) cell_toolbar_trans_pane_g1

0xcb46,	// (0x000673da) list_form2_midp_pane_t1

0xcb54,	// (0x000673e8) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0006a37c) list_form2_midp_pane_t

0x4a1d,	// (0x0005f2b1) scroll_pane_cp51_ParamLimits

0x4bd9,	// (0x0005f46d) form2_midp_wait_pane_g1

0x4be2,	// (0x0005f476) form2_midp_wait_pane_g2

0x4beb,	// (0x0005f47f) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0006a391) form2_midp_wait_pane_g

0x7f03,	// (0x00062797) list_highlight_pane_cp21_ParamLimits

0x4c33,	// (0x0005f4c7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4c42,	// (0x0005f4d6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3e07,	// (0x0005e69b) list_single_2graphic_im_pane_ParamLimits

0x3e07,	// (0x0005e69b) list_single_2graphic_im_pane

0xd039,	// (0x000678cd) list_single_2graphic_im_pane_g1_ParamLimits

0xd039,	// (0x000678cd) list_single_2graphic_im_pane_g1

0xd04a,	// (0x000678de) list_single_2graphic_im_pane_g2_ParamLimits

0xd04a,	// (0x000678de) list_single_2graphic_im_pane_g2

0xd056,	// (0x000678ea) list_single_2graphic_im_pane_g3_ParamLimits

0xd056,	// (0x000678ea) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0006a4f2) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0006a4f2) list_single_2graphic_im_pane_g

0xd06a,	// (0x000678fe) list_single_2graphic_im_pane_t1_ParamLimits

0xd06a,	// (0x000678fe) list_single_2graphic_im_pane_t1

0x547d,	// (0x0005fd11) list_single_graphic_2heading_pane_fp_ParamLimits

0x547d,	// (0x0005fd11) list_single_graphic_2heading_pane_fp

0xe255,	// (0x00068ae9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe255,	// (0x00068ae9) list_single_graphic_2heading_pane_fp_g1

0x5493,	// (0x0005fd27) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5493,	// (0x0005fd27) list_single_graphic_2heading_pane_fp_g2

0x549f,	// (0x0005fd33) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x549f,	// (0x0005fd33) list_single_graphic_2heading_pane_fp_g3

0x54ab,	// (0x0005fd3f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x54ab,	// (0x0005fd3f) list_single_graphic_2heading_pane_fp_g4

0x54bf,	// (0x0005fd53) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x54bf,	// (0x0005fd53) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0006a419) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0006a419) list_single_graphic_2heading_pane_fp_g

0xe373,	// (0x00068c07) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe373,	// (0x00068c07) list_single_graphic_2heading_pane_fp_t1

0xe28d,	// (0x00068b21) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe28d,	// (0x00068b21) list_single_graphic_2heading_pane_fp_t2

0xe389,	// (0x00068c1d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe389,	// (0x00068c1d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0006a4fb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0006a4fb) list_single_graphic_2heading_pane_fp_t

0x4ebc,	// (0x0005f750) fep_hwr_write_pane_g5_ParamLimits

0x4ebc,	// (0x0005f750) fep_hwr_write_pane_g5

0x4ec8,	// (0x0005f75c) fep_hwr_write_pane_g6_ParamLimits

0x4ec8,	// (0x0005f75c) fep_hwr_write_pane_g6

0xceb1,	// (0x00067745) eswt_shell_pane_ParamLimits

0x2715,	// (0x0005cfa9) bg_popup_window_pane_cp18_ParamLimits

0x3998,	// (0x0005e22c) heading_pane_cp70

0x589e,	// (0x00060132) popup_eswt_tasktip_window_t1_ParamLimits

0xbc83,	// (0x00066517) aid_touch_tab_arrow_left

0xbc99,	// (0x0006652d) aid_touch_tab_arrow_right

0x94e4,	// (0x00063d78) title_pane_g3_ParamLimits

0x94e4,	// (0x00063d78) title_pane_g3

0x828b,	// (0x00062b1f) set_value_pane_g1

0xaf71,	// (0x00065805) popup_toolbar_trans_pane_ParamLimits

0xcfed,	// (0x00067881) aid_size_cell_tb_trans_pane_ParamLimits

0x84ca,	// (0x00062d5e) bg_tb_trans_pane_ParamLimits

0xcfff,	// (0x00067893) grid_tb_trans_pane_ParamLimits

0x803b,	// (0x000628cf) cont_note_pane_ParamLimits

0x803b,	// (0x000628cf) cont_note_pane

0x81b7,	// (0x00062a4b) cont_snote2_single_text_pane_ParamLimits

0x81b7,	// (0x00062a4b) cont_snote2_single_text_pane

0x81b7,	// (0x00062a4b) cont_snote2_single_graphic_pane_ParamLimits

0x81b7,	// (0x00062a4b) cont_snote2_single_graphic_pane

0x2d1b,	// (0x0005d5af) cont_note_wait_pane_ParamLimits

0x2d1b,	// (0x0005d5af) cont_note_wait_pane

0x2d1b,	// (0x0005d5af) cont_note_image_pane_ParamLimits

0x2d1b,	// (0x0005d5af) cont_note_image_pane

0x5a9b,	// (0x0006032f) popup_note2_window_g1_ParamLimits

0x5a9b,	// (0x0006032f) popup_note2_window_g1

0xd0a8,	// (0x0006793c) popup_note2_window_t1_ParamLimits

0xd0a8,	// (0x0006793c) popup_note2_window_t1

0xd0ed,	// (0x00067981) popup_note2_window_t2_ParamLimits

0xd0ed,	// (0x00067981) popup_note2_window_t2

0xd132,	// (0x000679c6) popup_note2_window_t3_ParamLimits

0xd132,	// (0x000679c6) popup_note2_window_t3

0x5b9b,	// (0x0006042f) popup_note2_window_t4_ParamLimits

0x5b9b,	// (0x0006042f) popup_note2_window_t4

0x80bf,	// (0x00062953) popup_note2_window_t5_ParamLimits

0x80bf,	// (0x00062953) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0006a507) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0006a507) popup_note2_window_t

0x5bca,	// (0x0006045e) popup_note2_image_window_g1_ParamLimits

0x5bca,	// (0x0006045e) popup_note2_image_window_g1

0xd177,	// (0x00067a0b) popup_note2_image_window_g2_ParamLimits

0xd177,	// (0x00067a0b) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0006a512) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0006a512) popup_note2_image_window_g

0x5be8,	// (0x0006047c) popup_note2_image_window_t1_ParamLimits

0x5be8,	// (0x0006047c) popup_note2_image_window_t1

0x5c00,	// (0x00060494) popup_note2_image_window_t2_ParamLimits

0x5c00,	// (0x00060494) popup_note2_image_window_t2

0x5c18,	// (0x000604ac) popup_note2_image_window_t3_ParamLimits

0x5c18,	// (0x000604ac) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0006a517) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0006a517) popup_note2_image_window_t

0x2d29,	// (0x0005d5bd) popup_note2_wait_window_g1_ParamLimits

0x2d29,	// (0x0005d5bd) popup_note2_wait_window_g1

0x2d35,	// (0x0005d5c9) popup_note2_wait_window_g2_ParamLimits

0x2d35,	// (0x0005d5c9) popup_note2_wait_window_g2

0x2d41,	// (0x0005d5d5) popup_note2_wait_window_g3_ParamLimits

0x2d41,	// (0x0005d5d5) popup_note2_wait_window_g3

0x0002,

0xf837,	// (0x0006a0cb) popup_note2_wait_window_g_ParamLimits

0xf837,	// (0x0006a0cb) popup_note2_wait_window_g

0x5c34,	// (0x000604c8) popup_note2_wait_window_t1_ParamLimits

0x5c34,	// (0x000604c8) popup_note2_wait_window_t1

0x5c52,	// (0x000604e6) popup_note2_wait_window_t2_ParamLimits

0x5c52,	// (0x000604e6) popup_note2_wait_window_t2

0x5c70,	// (0x00060504) popup_note2_wait_window_t3_ParamLimits

0x5c70,	// (0x00060504) popup_note2_wait_window_t3

0x5c82,	// (0x00060516) popup_note2_wait_window_t4_ParamLimits

0x5c82,	// (0x00060516) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x0006a51e) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x0006a51e) popup_note2_wait_window_t

0x5c94,	// (0x00060528) wait_bar2_pane_ParamLimits

0x5c94,	// (0x00060528) wait_bar2_pane

0x5cac,	// (0x00060540) popup_snote2_single_text_window_g1_ParamLimits

0x5cac,	// (0x00060540) popup_snote2_single_text_window_g1

0x5cd4,	// (0x00060568) popup_snote2_single_text_window_t1_ParamLimits

0x5cd4,	// (0x00060568) popup_snote2_single_text_window_t1

0x5d20,	// (0x000605b4) popup_snote2_single_text_window_t2_ParamLimits

0x5d20,	// (0x000605b4) popup_snote2_single_text_window_t2

0x5d6c,	// (0x00060600) popup_snote2_single_text_window_t3_ParamLimits

0x5d6c,	// (0x00060600) popup_snote2_single_text_window_t3

0x5dad,	// (0x00060641) popup_snote2_single_text_window_t4_ParamLimits

0x5dad,	// (0x00060641) popup_snote2_single_text_window_t4

0x5de3,	// (0x00060677) popup_snote2_single_text_window_t5_ParamLimits

0x5de3,	// (0x00060677) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x0006a527) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x0006a527) popup_snote2_single_text_window_t

0xd189,	// (0x00067a1d) popup_snote2_single_graphic_window_g1_ParamLimits

0xd189,	// (0x00067a1d) popup_snote2_single_graphic_window_g1

0x5e57,	// (0x000606eb) popup_snote2_single_graphic_window_g2_ParamLimits

0x5e57,	// (0x000606eb) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x0006a532) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x0006a532) popup_snote2_single_graphic_window_g

0x5e7f,	// (0x00060713) popup_snote2_single_graphic_window_t1_ParamLimits

0x5e7f,	// (0x00060713) popup_snote2_single_graphic_window_t1

0x5ecb,	// (0x0006075f) popup_snote2_single_graphic_window_t2_ParamLimits

0x5ecb,	// (0x0006075f) popup_snote2_single_graphic_window_t2

0x5d6c,	// (0x00060600) popup_snote2_single_graphic_window_t3_ParamLimits

0x5d6c,	// (0x00060600) popup_snote2_single_graphic_window_t3

0x5dad,	// (0x00060641) popup_snote2_single_graphic_window_t4_ParamLimits

0x5dad,	// (0x00060641) popup_snote2_single_graphic_window_t4

0x5de3,	// (0x00060677) popup_snote2_single_graphic_window_t5_ParamLimits

0x5de3,	// (0x00060677) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x0006a537) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x0006a537) popup_snote2_single_graphic_window_t

0x48da,	// (0x0005f16e) clock_nsta_pane_cp2_t1

0x48da,	// (0x0005f16e) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0006a352) clock_nsta_pane_cp2_t

0xdc74,	// (0x00068508) form_field_data_wide_pane_g1_ParamLimits

0x829d,	// (0x00062b31) form_field_data_wide_pane_g2_ParamLimits

0x829d,	// (0x00062b31) form_field_data_wide_pane_g2

0x84d8,	// (0x00062d6c) form_field_data_wide_pane_g3_ParamLimits

0x84d8,	// (0x00062d6c) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00069f0a) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00069f0a) form_field_data_wide_pane_g

0xca69,	// (0x000672fd) grid_touch_3_pane_ParamLimits

0xca69,	// (0x000672fd) grid_touch_3_pane

0xd1b1,	// (0x00067a45) cell_touch_3_pane_ParamLimits

0xd1b1,	// (0x00067a45) cell_touch_3_pane

0x4e30,	// (0x0005f6c4) cell_touch_3_pane_g1

0x4e30,	// (0x0005f6c4) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0006a3d7) cell_touch_3_pane_g

0x80f1,	// (0x00062985) cont_query_data_pane

0x80f9,	// (0x0006298d) cont_query_data_pane_cp1

0x5f45,	// (0x000607d9) button_value_adjust_pane_cp7

0x5f4d,	// (0x000607e1) query_popup_pane_cp3

0xbbc6,	// (0x0006645a) bg_popup_sub_pane_cp22_ParamLimits

0xa37e,	// (0x00064c12) navi_navi_volume_pane_cp2

0xa38d,	// (0x00064c21) popup_side_volume_key_window_g2

0xa39c,	// (0x00064c30) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00069fa0) popup_side_volume_key_window_g

0xa3ab,	// (0x00064c3f) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00069fa7) popup_side_volume_key_window_t

0xa4fc,	// (0x00064d90) popup_side_volume_key_window_ParamLimits

0x9c5c,	// (0x000644f0) list_double_graphic_pane_g4_ParamLimits

0x9c5c,	// (0x000644f0) list_double_graphic_pane_g4

0xc858,	// (0x000670ec) list_single_2heading_msg_pane_ParamLimits

0xc858,	// (0x000670ec) list_single_2heading_msg_pane

0xd1fa,	// (0x00067a8e) list_single_2heading_msg_pane_g1_ParamLimits

0xd1fa,	// (0x00067a8e) list_single_2heading_msg_pane_g1

0xd206,	// (0x00067a9a) list_single_2heading_msg_pane_g2_ParamLimits

0xd206,	// (0x00067a9a) list_single_2heading_msg_pane_g2

0xd219,	// (0x00067aad) list_single_2heading_msg_pane_g3_ParamLimits

0xd219,	// (0x00067aad) list_single_2heading_msg_pane_g3

0xd225,	// (0x00067ab9) list_single_2heading_msg_pane_g4_ParamLimits

0xd225,	// (0x00067ab9) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x0006a542) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x0006a542) list_single_2heading_msg_pane_g

0xb37d,	// (0x00065c11) list_single_2heading_msg_pane_t1_ParamLimits

0xb37d,	// (0x00065c11) list_single_2heading_msg_pane_t1

0xb3a5,	// (0x00065c39) list_single_2heading_msg_pane_t2_ParamLimits

0xb3a5,	// (0x00065c39) list_single_2heading_msg_pane_t2

0xb410,	// (0x00065ca4) list_single_2heading_msg_pane_t3_ParamLimits

0xb410,	// (0x00065ca4) list_single_2heading_msg_pane_t3

0xe3a9,	// (0x00068c3d) list_single_2heading_msg_pane_t4_ParamLimits

0xe3a9,	// (0x00068c3d) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x0006a54b) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x0006a54b) list_single_2heading_msg_pane_t

0x7ebf,	// (0x00062753) title_pane_g4_ParamLimits

0x7ebf,	// (0x00062753) title_pane_g4

0xeffd,	// (0x00069891) title_pane_stacon_g3_ParamLimits

0xeffd,	// (0x00069891) title_pane_stacon_g3

0x5a5e,	// (0x000602f2) list_single_2graphic_im_pane_g4_ParamLimits

0x5a5e,	// (0x000602f2) list_single_2graphic_im_pane_g4

0xc58c,	// (0x00066e20) popup_side_volume_key_window_cp

0x4138,	// (0x0005e9cc) main_idle_act2_pane_t1

0x06f3,	// (0x0005af87) toolbar_button_pane_g10

0x9ac8,	// (0x0006435c) popup_toolbar_window_cp1

0x48cb,	// (0x0005f15f) clock_nsta_pane_cp_t1

0x48cb,	// (0x0005f15f) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0006a34d) clock_nsta_pane_cp_t

0xa37e,	// (0x00064c12) navi_navi_volume_pane_cp2_ParamLimits

0xf1d1,	// (0x00069a65) popup_side_volume_key_window_g1_ParamLimits

0xa38d,	// (0x00064c21) popup_side_volume_key_window_g2_ParamLimits

0xa39c,	// (0x00064c30) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00069fa0) popup_side_volume_key_window_g_ParamLimits

0x0ca3,	// (0x0005b537) fep_hwr_aid_pane

0x0d4a,	// (0x0005b5de) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e8c,	// (0x0005f720) fep_hwr_top_pane_g1_ParamLimits

0x4e9e,	// (0x0005f732) fep_hwr_top_pane_g2_ParamLimits

0x0d6a,	// (0x0005b5fe) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0006a3a2) fep_hwr_top_pane_g_ParamLimits

0x0d7f,	// (0x0005b613) fep_hwr_top_text_pane_ParamLimits

0x3525,	// (0x0005ddb9) aid_touch_tab_arrow_arrow_2

0x352e,	// (0x0005ddc2) aid_touch_tab_arrow_left_2

0x0cb7,	// (0x0005b54b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0cee,	// (0x0005b582) fep_hwr_prediction_pane

0x4ff7,	// (0x0005f88b) fep_vkb_prediction_pane

0xcde9,	// (0x0006767d) fep_vkb_side_pane_g3_ParamLimits

0xcde9,	// (0x0006767d) fep_vkb_side_pane_g3

0x0efa,	// (0x0005b78e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f66,	// (0x0005b7fa) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f73,	// (0x0005b807) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0006a451) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1171,	// (0x0005ba05) fep_hwr_prediction_pane_g1

0x117b,	// (0x0005ba0f) fep_hwr_prediction_pane_g2

0x1183,	// (0x0005ba17) fep_hwr_prediction_pane_g3

0x118b,	// (0x0005ba1f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0006a554) fep_hwr_prediction_pane_g

0x5f72,	// (0x00060806) fep_vkb_prediction_pane_g1

0x5f7c,	// (0x00060810) fep_vkb_prediction_pane_g2

0x5f84,	// (0x00060818) fep_vkb_prediction_pane_g3

0x5f8c,	// (0x00060820) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0006a55d) fep_vkb_prediction_pane_g

0xb16f,	// (0x00065a03) slider_set_pane_g3

0xb183,	// (0x00065a17) slider_set_pane_g4

0xb19b,	// (0x00065a2f) slider_set_pane_g5

0xb16f,	// (0x00065a03) slider_set_pane_g6

0xb1b1,	// (0x00065a45) slider_set_pane_g7

0x3bb1,	// (0x0005e445) slider_form_pane_g3

0x3bba,	// (0x0005e44e) slider_form_pane_g4

0x3bc2,	// (0x0005e456) slider_form_pane_g5

0x3bb1,	// (0x0005e445) slider_form_pane_g6

0xc82a,	// (0x000670be) slider_form_pane_g7

0x43e3,	// (0x0005ec77) slider_set_pane_vc_g3

0x43ec,	// (0x0005ec80) slider_set_pane_vc_g4

0x43f5,	// (0x0005ec89) slider_set_pane_vc_g5

0x43e3,	// (0x0005ec77) slider_set_pane_vc_g6

0x43fe,	// (0x0005ec92) slider_set_pane_vc_g7

0x45b0,	// (0x0005ee44) slider_form_pane_vc_g1

0x45b9,	// (0x0005ee4d) slider_form_pane_vc_g2

0x45c2,	// (0x0005ee56) slider_form_pane_vc_g3

0x45b0,	// (0x0005ee44) slider_form_pane_vc_g4

0x45cb,	// (0x0005ee5f) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0006a31f) slider_form_pane_vc_g

0xeec9,	// (0x0006975d) main_idle_act3_pane

0x5f94,	// (0x00060828) ai3_links_pane

0xd23d,	// (0x00067ad1) popup_ai3_data_window_ParamLimits

0xd23d,	// (0x00067ad1) popup_ai3_data_window

0x7ea1,	// (0x00062735) grid_ai3_links_pane

0xd255,	// (0x00067ae9) cell_ai3_links_pane_ParamLimits

0xd255,	// (0x00067ae9) cell_ai3_links_pane

0x5fcd,	// (0x00060861) bg_popup_sub_pane_cp11

0x5fda,	// (0x0006086e) cell_ai3_links_pane_g1

0x7ea1,	// (0x00062735) bg_popup_sub_pane_cp12

0x5fff,	// (0x00060893) heading_ai3_data_pane

0x6007,	// (0x0006089b) list_ai3_gene_pane

0x6013,	// (0x000608a7) popup_ai3_data_window_g1

0x601b,	// (0x000608af) heading_ai3_data_pane_g1

0x6023,	// (0x000608b7) heading_ai3_data_pane_t1

0xd26f,	// (0x00067b03) list_double_ai3_gene_pane_ParamLimits

0xd26f,	// (0x00067b03) list_double_ai3_gene_pane

0x603e,	// (0x000608d2) list_single_ai3_gene_pane_ParamLimits

0x603e,	// (0x000608d2) list_single_ai3_gene_pane

0x4df5,	// (0x0005f689) list_highlight_pane_cp7_ParamLimits

0x4df5,	// (0x0005f689) list_highlight_pane_cp7

0x604b,	// (0x000608df) list_single_a13_gene_pane_t1_ParamLimits

0x604b,	// (0x000608df) list_single_a13_gene_pane_t1

0x6062,	// (0x000608f6) list_single_ai3_gene_pane_g1

0x606b,	// (0x000608ff) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x0006a566) list_single_ai3_gene_pane_g

0x6073,	// (0x00060907) list_double_ai3_gene_pane_g1_ParamLimits

0x6073,	// (0x00060907) list_double_ai3_gene_pane_g1

0xd27c,	// (0x00067b10) list_double_ai3_gene_pane_t1_ParamLimits

0xd27c,	// (0x00067b10) list_double_ai3_gene_pane_t1

0x609b,	// (0x0006092f) list_double_ai3_gene_pane_t2_ParamLimits

0x609b,	// (0x0006092f) list_double_ai3_gene_pane_t2

0x60b0,	// (0x00060944) list_double_ai3_gene_pane_t3_ParamLimits

0x60b0,	// (0x00060944) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x0006a56b) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x0006a56b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe39f,	// (0x00068c33) aid_size_min_col_2

0xd1e4,	// (0x00067a78) aid_size_min_msg_ParamLimits

0xd1e4,	// (0x00067a78) aid_size_min_msg

0xcdfd,	// (0x00067691) fep_vkb_top_text_pane_g2_ParamLimits

0xcdfd,	// (0x00067691) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0006a3d2) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0006a3d2) fep_vkb_top_text_pane_g

0xeec9,	// (0x0006975d) main_hc_apps_shell_pane

0x60cd,	// (0x00060961) grid_hc_apps_pane_ParamLimits

0x60cd,	// (0x00060961) grid_hc_apps_pane

0x60dc,	// (0x00060970) list_hc_apps_pane

0x60e4,	// (0x00060978) scroll_pane_cp37_ParamLimits

0x60e4,	// (0x00060978) scroll_pane_cp37

0xd298,	// (0x00067b2c) cell_hc_apps_pane_ParamLimits

0xd298,	// (0x00067b2c) cell_hc_apps_pane

0xd356,	// (0x00067bea) cell_hc_apps_pane_g1_ParamLimits

0xd356,	// (0x00067bea) cell_hc_apps_pane_g1

0x61cf,	// (0x00060a63) cell_hc_apps_pane_g2_ParamLimits

0x61cf,	// (0x00060a63) cell_hc_apps_pane_g2

0x61eb,	// (0x00060a7f) cell_hc_apps_pane_g3_ParamLimits

0x61eb,	// (0x00060a7f) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x0006a572) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x0006a572) cell_hc_apps_pane_g

0xd383,	// (0x00067c17) cell_hc_apps_pane_t1_ParamLimits

0xd383,	// (0x00067c17) cell_hc_apps_pane_t1

0x803b,	// (0x000628cf) grid_highlight_pane_cp10_ParamLimits

0x803b,	// (0x000628cf) grid_highlight_pane_cp10

0xd3c1,	// (0x00067c55) list_single_hc_apps_pane_ParamLimits

0xd3c1,	// (0x00067c55) list_single_hc_apps_pane

0xd3f1,	// (0x00067c85) list_single_hc_apps_pane_g1

0xd40a,	// (0x00067c9e) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x0006a579) list_single_hc_apps_pane_g

0xd423,	// (0x00067cb7) list_single_hc_apps_pane_g2_copy1

0xb47e,	// (0x00065d12) list_single_hc_apps_pane_t1

0x7f03,	// (0x00062797) bg_set_opt_pane_cp_ParamLimits

0x95b8,	// (0x00063e4c) setting_slider_pane_t1_ParamLimits

0x95d1,	// (0x00063e65) setting_slider_pane_t2_ParamLimits

0x95eb,	// (0x00063e7f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00069df2) setting_slider_pane_t_ParamLimits

0x9603,	// (0x00063e97) slider_set_pane_ParamLimits

0xf53f,	// (0x00069dd3) control_pane_g5_ParamLimits

0xf53f,	// (0x00069dd3) control_pane_g5

0xc6ac,	// (0x00066f40) slider_set_pane_g1_ParamLimits

0x0a15,	// (0x0005b2a9) slider_set_pane_g2_ParamLimits

0xb16f,	// (0x00065a03) slider_set_pane_g3_ParamLimits

0xb183,	// (0x00065a17) slider_set_pane_g4_ParamLimits

0xb19b,	// (0x00065a2f) slider_set_pane_g5_ParamLimits

0xb16f,	// (0x00065a03) slider_set_pane_g6_ParamLimits

0xb1b1,	// (0x00065a45) slider_set_pane_g7_ParamLimits

0xf953,	// (0x0006a1e7) slider_set_pane_g_ParamLimits

0xf3e5,	// (0x00069c79) navi_icon_text_pane_ParamLimits

0xbc4c,	// (0x000664e0) aid_fill_nsta_2_ParamLimits

0xbc83,	// (0x00066517) aid_touch_tab_arrow_left_ParamLimits

0xbc99,	// (0x0006652d) aid_touch_tab_arrow_right_ParamLimits

0xbd34,	// (0x000665c8) clock_nsta_pane_ParamLimits

0x3507,	// (0x0005dd9b) navi_icon_pane_g1_ParamLimits

0x3513,	// (0x0005dda7) navi_text_pane_t1_ParamLimits

0x49db,	// (0x0005f26f) navi_icon_text_pane_g1_ParamLimits

0x49e7,	// (0x0005f27b) navi_icon_text_pane_t1_ParamLimits

0xd3f1,	// (0x00067c85) list_single_hc_apps_pane_g1_ParamLimits

0xd40a,	// (0x00067c9e) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x0006a579) list_single_hc_apps_pane_g_ParamLimits

0xd423,	// (0x00067cb7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb47e,	// (0x00065d12) list_single_hc_apps_pane_t1_ParamLimits

0x93e9,	// (0x00063c7d) popup_toolbar2_fixed_window_ParamLimits

0x93e9,	// (0x00063c7d) popup_toolbar2_fixed_window

0xaf67,	// (0x000657fb) popup_toolbar2_float_window

0x7ea1,	// (0x00062735) bg_popup_sub_pane_cp27

0x62c9,	// (0x00060b5d) grid_toolbar2_float_pane

0x7ea1,	// (0x00062735) bg_popup_sub_pane_cp26

0x62c9,	// (0x00060b5d) grid_toolbar2_fixed_pane

0xd43f,	// (0x00067cd3) cell_toolbar2_fixed_pane_ParamLimits

0xd43f,	// (0x00067cd3) cell_toolbar2_fixed_pane

0xd459,	// (0x00067ced) cell_toolbar2_fixed_pane_g1

0x04c9,	// (0x0005ad5d) toolbar2_fixed_button_pane

0x2689,	// (0x0005cf1d) toolbar2_fixed_button_pane_g1

0x2699,	// (0x0005cf2d) toolbar2_fixed_button_pane_g2

0x2691,	// (0x0005cf25) toolbar2_fixed_button_pane_g3

0x26a9,	// (0x0005cf3d) toolbar2_fixed_button_pane_g4

0x26a1,	// (0x0005cf35) toolbar2_fixed_button_pane_g5

0x26b1,	// (0x0005cf45) toolbar2_fixed_button_pane_g6

0x26b9,	// (0x0005cf4d) toolbar2_fixed_button_pane_g7

0x26c9,	// (0x0005cf5d) toolbar2_fixed_button_pane_g8

0x26c1,	// (0x0005cf55) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x0006a0e9) toolbar2_fixed_button_pane_g

0x62ea,	// (0x00060b7e) cell_toolbar2_float_pane_ParamLimits

0x62ea,	// (0x00060b7e) cell_toolbar2_float_pane

0x62fb,	// (0x00060b8f) cell_toolbar2_float_pane_g1

0x04c9,	// (0x0005ad5d) toolbar2_fixed_button_pane_cp

0xcce5,	// (0x00067579) fep_vkb_accented_list_pane_ParamLimits

0xcce5,	// (0x00067579) fep_vkb_accented_list_pane

0x0eda,	// (0x0005b76e) bg_popup_fep_shadow_pane_g9

0x1e36,	// (0x0005c6ca) bg_popup_fep_shadow_pane_cp3

0x85c4,	// (0x00062e58) list_accented_list_pane

0x6304,	// (0x00060b98) list_single_accented_list_pane_ParamLimits

0x6304,	// (0x00060b98) list_single_accented_list_pane

0x1e36,	// (0x0005c6ca) list_highlight_pane_cp10

0x6315,	// (0x00060ba9) list_single_accented_list_pane_t1

0xae91,	// (0x00065725) popup_slider_window_ParamLimits

0xae91,	// (0x00065725) popup_slider_window

0x5f55,	// (0x000607e9) aid_indentation_list_msg

0xd54e,	// (0x00067de2) bg_popup_window_pane_cp19

0x6435,	// (0x00060cc9) popup_slider_window_g1

0x6451,	// (0x00060ce5) popup_slider_window_g2

0x646d,	// (0x00060d01) popup_slider_window_g3

0x0005,

0xfcea,	// (0x0006a57e) popup_slider_window_g

0x64c9,	// (0x00060d5d) popup_slider_window_t1

0x653d,	// (0x00060dd1) small_volume_slider_vertical_pane

0x4e30,	// (0x0005f6c4) small_volume_slider_vertical_pane_g1

0x4e30,	// (0x0005f6c4) small_volume_slider_vertical_pane_g2

0x6559,	// (0x00060ded) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x0006a590) small_volume_slider_vertical_pane_g

0x9337,	// (0x00063bcb) area_side_right_pane_ParamLimits

0x9337,	// (0x00063bcb) area_side_right_pane

0xb4ac,	// (0x00065d40) aid_size_side_button_ParamLimits

0xb4ac,	// (0x00065d40) aid_size_side_button

0xb4c5,	// (0x00065d59) grid_sctrl_middle_pane_ParamLimits

0xb4c5,	// (0x00065d59) grid_sctrl_middle_pane

0x11f4,	// (0x0005ba88) sctrl_sk_bottom_pane

0x1205,	// (0x0005ba99) sctrl_sk_top_pane

0x1217,	// (0x0005baab) aid_touch_sctrl_top

0x1224,	// (0x0005bab8) bg_sctrl_sk_pane_ParamLimits

0x1224,	// (0x0005bab8) bg_sctrl_sk_pane

0x1232,	// (0x0005bac6) sctrl_sk_top_pane_g1

0x123f,	// (0x0005bad3) sctrl_sk_top_pane_t1

0x1217,	// (0x0005baab) aid_touch_sctrl_bottom

0x1224,	// (0x0005bab8) bg_sctrl_sk_pane_cp_ParamLimits

0x1224,	// (0x0005bab8) bg_sctrl_sk_pane_cp

0x125a,	// (0x0005baee) sctrl_sk_bottom_pane_g1

0x123f,	// (0x0005bad3) sctrl_sk_bottom_pane_t1

0xb4df,	// (0x00065d73) cell_sctrl_middle_pane_ParamLimits

0xb4df,	// (0x00065d73) cell_sctrl_middle_pane

0xb4f0,	// (0x00065d84) aid_touch_sctrl_middle_ParamLimits

0xb4f0,	// (0x00065d84) aid_touch_sctrl_middle

0xb4fd,	// (0x00065d91) bg_sctrl_middle_pane_ParamLimits

0xb4fd,	// (0x00065d91) bg_sctrl_middle_pane

0x18c7,	// (0x0005c15b) cell_sctrl_middle_pane_g1_ParamLimits

0x18c7,	// (0x0005c15b) cell_sctrl_middle_pane_g1

0xb50b,	// (0x00065d9f) cell_sctrl_middle_pane_g2_ParamLimits

0xb50b,	// (0x00065d9f) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x0006a59c) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x0006a59c) cell_sctrl_middle_pane_g

0x2689,	// (0x0005cf1d) bg_sctrl_middle_pane_g1

0x2691,	// (0x0005cf25) bg_sctrl_middle_pane_g2

0x2699,	// (0x0005cf2d) bg_sctrl_middle_pane_g3

0x26a1,	// (0x0005cf35) bg_sctrl_middle_pane_g4

0x26a9,	// (0x0005cf3d) bg_sctrl_middle_pane_g5

0x26b1,	// (0x0005cf45) bg_sctrl_middle_pane_g6

0x26b9,	// (0x0005cf4d) bg_sctrl_middle_pane_g7

0x26c1,	// (0x0005cf55) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x0006a5a1) bg_sctrl_middle_pane_g

0x26c9,	// (0x0005cf5d) bg_sctrl_middle_pane_g8_copy1

0x2689,	// (0x0005cf1d) bg_sctrl_sk_pane_g1

0x2699,	// (0x0005cf2d) bg_sctrl_sk_pane_g2

0x2691,	// (0x0005cf25) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x0006a0e9) bg_sctrl_sk_pane_g

0x8205,	// (0x00062a99) aid_size_touch_scroll_bar

0x26a9,	// (0x0005cf3d) bg_sctrl_sk_pane_g4

0x26a1,	// (0x0005cf35) bg_sctrl_sk_pane_g5

0x26b1,	// (0x0005cf45) bg_sctrl_sk_pane_g6

0x26b9,	// (0x0005cf4d) bg_sctrl_sk_pane_g7

0x26c9,	// (0x0005cf5d) bg_sctrl_sk_pane_g8

0x26c1,	// (0x0005cf55) bg_sctrl_sk_pane_g9

0x01b0,	// (0x0005aa44) popup_fep_china_hwr2_fs_candidate_window

0xa931,	// (0x000651c5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa931,	// (0x000651c5) popup_fep_china_hwr2_fs_control_window

0x0efa,	// (0x0005b78e) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x0006a597) sctrl_sk_top_pane_g

0xd606,	// (0x00067e9a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd606,	// (0x00067e9a) aid_fep_china_hwr2_fs_cell

0xd61a,	// (0x00067eae) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd61a,	// (0x00067eae) bg_popup_fep_shadow_pane_cp4

0xd631,	// (0x00067ec5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd631,	// (0x00067ec5) bg_popup_fep_shadow_pane_cp5

0xd643,	// (0x00067ed7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd643,	// (0x00067ed7) popup_fep_china_hwr2_fs_control_bar_grid

0xd657,	// (0x00067eeb) popup_fep_china_hwr2_fs_control_funtion_grid

0x65b5,	// (0x00060e49) aid_fep_china_hwr2_fs_candi_cell

0x7ea1,	// (0x00062735) bg_popup_fep_shadow_pane_cp6

0x65bf,	// (0x00060e53) popup_fep_china_hwr2_fs_candidate_grid

0xd65f,	// (0x00067ef3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd65f,	// (0x00067ef3) cell_fep_china_hwr2_fs_funtion_grid

0x4e30,	// (0x0005f6c4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x65e1,	// (0x00060e75) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x65e1,	// (0x00060e75) cell_fep_china_hwr2_fs_funtion_grid_g1

0x65ef,	// (0x00060e83) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x65ef,	// (0x00060e83) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x0006a5b2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x0006a5b2) cell_fep_china_hwr2_fs_funtion_grid_g

0xd677,	// (0x00067f0b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd677,	// (0x00067f0b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd68c,	// (0x00067f20) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd68c,	// (0x00067f20) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x0006a5b7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x0006a5b7) cell_fep_china_hwr2_fs_funtion_grid_t

0x6636,	// (0x00060eca) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x663e,	// (0x00060ed2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6646,	// (0x00060eda) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x0006a5bc) popup_fep_china_hwr2_fs_control_bar_grid_g

0x664e,	// (0x00060ee2) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x664e,	// (0x00060ee2) cell_fep_china_hwr2_fs_candidate_grid

0x6667,	// (0x00060efb) popup_fep_china_hwr2_fs_candidate_grid_g20

0x666f,	// (0x00060f03) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4e30,	// (0x0005f6c4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4e30,	// (0x0005f6c4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0006a3d7) cell_fep_china_hwr2_fs_candidate_grid_g

0x6677,	// (0x00060f0b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2282,	// (0x0005cb16) clock_nsta_pane_cp_24_ParamLimits

0x2282,	// (0x0005cb16) clock_nsta_pane_cp_24

0x2300,	// (0x0005cb94) indicator_nsta_pane_cp_24_ParamLimits

0x2300,	// (0x0005cb94) indicator_nsta_pane_cp_24

0x3383,	// (0x0005dc17) heading_pane_g1

0x0001,

0xf8ba,	// (0x0006a14e) heading_pane_g

0x3f81,	// (0x0005e815) grid_sct_catagory_button_pane

0x3fb1,	// (0x0005e845) scroll_pane_cp5_ParamLimits

0x4a29,	// (0x0005f2bd) button_value_adjust_pane_cp5_ParamLimits

0x4a29,	// (0x0005f2bd) button_value_adjust_pane_cp5

0x4b08,	// (0x0005f39c) form2_midp_time_pane_ParamLimits

0x6685,	// (0x00060f19) cell_sct_catagory_button_pane_ParamLimits

0x6685,	// (0x00060f19) cell_sct_catagory_button_pane

0x4df5,	// (0x0005f689) bg_button_pane_cp01_ParamLimits

0x4df5,	// (0x0005f689) bg_button_pane_cp01

0x4e30,	// (0x0005f6c4) cell_sct_catagory_button_pane_g1

0xaf0a,	// (0x0006579e) popup_tb_extension_window

0xd6a8,	// (0x00067f3c) aid_size_cell_ext_ParamLimits

0xd6a8,	// (0x00067f3c) aid_size_cell_ext

0x81b7,	// (0x00062a4b) bg_tb_trans_pane_cp1_ParamLimits

0x81b7,	// (0x00062a4b) bg_tb_trans_pane_cp1

0xd6ce,	// (0x00067f62) grid_tb_ext_pane_ParamLimits

0xd6ce,	// (0x00067f62) grid_tb_ext_pane

0xd70d,	// (0x00067fa1) cell_tb_ext_pane_ParamLimits

0xd70d,	// (0x00067fa1) cell_tb_ext_pane

0xd735,	// (0x00067fc9) cell_tb_ext_pane_g1_ParamLimits

0xd735,	// (0x00067fc9) cell_tb_ext_pane_g1

0x671b,	// (0x00060faf) cell_tb_ext_pane_t1

0x803b,	// (0x000628cf) list_highlight_pane_cp11_ParamLimits

0x803b,	// (0x000628cf) list_highlight_pane_cp11

0x93fe,	// (0x00063c92) popup_uni_indicator_window_ParamLimits

0x93fe,	// (0x00063c92) popup_uni_indicator_window

0x84ca,	// (0x00062d5e) bg_popup_sub_pane_cp14

0xd752,	// (0x00067fe6) list_uniindi_pane

0xd75e,	// (0x00067ff2) uniindi_top_pane

0x803b,	// (0x000628cf) bg_uniindi_top_pane

0xd77d,	// (0x00068011) uniindi_top_pane_g1

0xd793,	// (0x00068027) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x0006a5c3) uniindi_top_pane_g

0xd7b0,	// (0x00068044) uniindi_top_pane_t1

0x67cc,	// (0x00061060) list_single_uniindi_pane_ParamLimits

0x67cc,	// (0x00061060) list_single_uniindi_pane

0x4e30,	// (0x0005f6c4) bg_uniindi_top_pane_g1

0x67de,	// (0x00061072) list_single_uniindi_pane_g1

0x67f1,	// (0x00061085) list_single_uniindi_pane_t1

0xeec9,	// (0x0006975d) control_bg_pane

0x6816,	// (0x000610aa) bg_sctrl_sk_pane_cp1

0x681f,	// (0x000610b3) bg_sctrl_sk_pane_cp2

0x6828,	// (0x000610bc) control_bg_pane_g1

0x6831,	// (0x000610c5) control_bg_pane_g2

0x0001,

0xfd38,	// (0x0006a5cc) control_bg_pane_g

0x4880,	// (0x0005f114) cell_indicator_nsta_pane_g1_ParamLimits

0xcaa4,	// (0x00067338) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0006a33b) cell_indicator_nsta_pane_g_ParamLimits

0xe21e,	// (0x00068ab2) form2_midp_time_pane_t1_ParamLimits

0x0c95,	// (0x0005b529) main_idle_act4_pane_ParamLimits

0x0c95,	// (0x0005b529) main_idle_act4_pane

0xaf0a,	// (0x0006579e) popup_tb_extension_window_ParamLimits

0xd6f3,	// (0x00067f87) tb_ext_find_pane_ParamLimits

0xd6f3,	// (0x00067f87) tb_ext_find_pane

0x683a,	// (0x000610ce) ai_gene_pane_1_cp1

0x1f81,	// (0x0005c815) ai_gene_pane_2_cp1

0xd7da,	// (0x0006806e) list_single_idle_plugin_calendar_pane

0x684b,	// (0x000610df) list_single_idle_plugin_notification_pane

0x6854,	// (0x000610e8) list_single_idle_plugin_player_pane

0xd7e3,	// (0x00068077) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd7e3,	// (0x00068077) list_single_idle_plugin_shortcut_pane

0xd80b,	// (0x0006809f) main_idle_act4_pane_t1

0xd822,	// (0x000680b6) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x0006a5d1) main_idle_act4_pane_t

0xd839,	// (0x000680cd) middle_sk_idle_act4_pane_ParamLimits

0xd839,	// (0x000680cd) middle_sk_idle_act4_pane

0xd855,	// (0x000680e9) popup_clock_digital_analogue_window_cp2

0xd881,	// (0x00068115) shortcut_wheel_idle_act4_pane_ParamLimits

0xd881,	// (0x00068115) shortcut_wheel_idle_act4_pane

0x4e30,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g1

0x4e30,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g2

0x4e30,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g3

0x4e30,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g4

0x4e30,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g5

0x68e7,	// (0x0006117b) shortcut_wheel_idle_act4_pane_g6

0x68ef,	// (0x00061183) shortcut_wheel_idle_act4_pane_g7

0x68f7,	// (0x0006118b) shortcut_wheel_idle_act4_pane_g8

0x68ff,	// (0x00061193) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x0006a5d6) shortcut_wheel_idle_act4_pane_g

0xd8fe,	// (0x00068192) middle_sk_idle_act4_pane_g1_ParamLimits

0xd8fe,	// (0x00068192) middle_sk_idle_act4_pane_g1

0xd90c,	// (0x000681a0) middle_sk_idle_act4_pane_g2_ParamLimits

0xd90c,	// (0x000681a0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x0006a5f9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x0006a5f9) middle_sk_idle_act4_pane_g

0xd924,	// (0x000681b8) middle_sk_idle_act4_pane_t1_ParamLimits

0xd924,	// (0x000681b8) middle_sk_idle_act4_pane_t1

0xd953,	// (0x000681e7) grid_ai_shortcut_pane_ParamLimits

0xd953,	// (0x000681e7) grid_ai_shortcut_pane

0xd970,	// (0x00068204) list_highlight_pane_cp16_ParamLimits

0xd970,	// (0x00068204) list_highlight_pane_cp16

0xd97d,	// (0x00068211) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd97d,	// (0x00068211) list_single_idle_plugin_shortcut_pane_g1

0xd989,	// (0x0006821d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd989,	// (0x0006821d) list_single_idle_plugin_shortcut_pane_g2

0xd9a5,	// (0x00068239) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd9a5,	// (0x00068239) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x0006a5fe) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x0006a5fe) list_single_idle_plugin_shortcut_pane_g

0xd9ba,	// (0x0006824e) cell_ai_shortcut_pane_ParamLimits

0xd9ba,	// (0x0006824e) cell_ai_shortcut_pane

0xd9d0,	// (0x00068264) cell_ai_shortcut_pane_g1_ParamLimits

0xd9d0,	// (0x00068264) cell_ai_shortcut_pane_g1

0x683a,	// (0x000610ce) ai_gene_pane_1_cp2

0x6a2f,	// (0x000612c3) ai_gene_pane_2_cp2

0x6a37,	// (0x000612cb) list_highlight_pane_cp15

0xd9f2,	// (0x00068286) list_single_idle_plugin_calendar_pane_g1

0x6a37,	// (0x000612cb) list_highlight_pane_cp17

0x6a48,	// (0x000612dc) list_single_idle_plugin_calendar_pane_g1_copy1

0x6a50,	// (0x000612e4) list_single_idle_plugin_player_pane_g1

0x41da,	// (0x0005ea6e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x0006a605) list_single_idle_plugin_player_pane_g

0x6a58,	// (0x000612ec) list_single_idle_plugin_player_pane_t1

0x6a66,	// (0x000612fa) list_single_idle_plugin_player_pane_t2

0x6a74,	// (0x00061308) list_single_idle_plugin_player_pane_t3

0x6a82,	// (0x00061316) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x0006a60a) list_single_idle_plugin_player_pane_t

0x6a90,	// (0x00061324) wait_bar_pane_cp15

0x6a98,	// (0x0006132c) grid_ai_notification_pane

0x41da,	// (0x0005ea6e) list_single_idle_plugin_notification_pane_g1

0xd9fa,	// (0x0006828e) cell_ai_notification_pane_ParamLimits

0xd9fa,	// (0x0006828e) cell_ai_notification_pane

0x6aae,	// (0x00061342) cell_ai_notification_pane_g1

0x6ab6,	// (0x0006134a) cell_ai_notification_pane_t1

0xda07,	// (0x0006829b) tb_ext_find_button_pane

0xda0f,	// (0x000682a3) tb_ext_find_pane_g1

0xda17,	// (0x000682ab) tb_ext_find_pane_t1

0xbb65,	// (0x000663f9) tb_ext_find_button_pane_g1

0xda25,	// (0x000682b9) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x0006a613) tb_ext_find_button_pane_g

0xd80b,	// (0x0006809f) main_idle_act4_pane_t1_ParamLimits

0xd822,	// (0x000680b6) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x0006a5d1) main_idle_act4_pane_t_ParamLimits

0xd855,	// (0x000680e9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd86d,	// (0x00068101) sat_plugin_idle_act4_pane_ParamLimits

0xd86d,	// (0x00068101) sat_plugin_idle_act4_pane

0xda2e,	// (0x000682c2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda2e,	// (0x000682c2) sat_plugin_idle_act4_pane_t1

0xda46,	// (0x000682da) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda46,	// (0x000682da) sat_plugin_idle_act4_pane_t2

0xda5e,	// (0x000682f2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda5e,	// (0x000682f2) sat_plugin_idle_act4_pane_t3

0xda76,	// (0x0006830a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda76,	// (0x0006830a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x0006a618) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x0006a618) sat_plugin_idle_act4_pane_t

0x9379,	// (0x00063c0d) popup_battery_window_ParamLimits

0x9379,	// (0x00063c0d) popup_battery_window

0x803b,	// (0x000628cf) bg_popup_sub_pane_cp25_ParamLimits

0x803b,	// (0x000628cf) bg_popup_sub_pane_cp25

0x6b37,	// (0x000613cb) popup_battery_window_g1_ParamLimits

0x6b37,	// (0x000613cb) popup_battery_window_g1

0x6b43,	// (0x000613d7) popup_battery_window_t1_ParamLimits

0x6b43,	// (0x000613d7) popup_battery_window_t1

0x6b55,	// (0x000613e9) popup_battery_window_t2_ParamLimits

0x6b55,	// (0x000613e9) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x0006a621) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x0006a621) popup_battery_window_t

0xa55b,	// (0x00064def) midp_canvas_pane_ParamLimits

0xa5cd,	// (0x00064e61) midp_keypad_pane_ParamLimits

0xa5cd,	// (0x00064e61) midp_keypad_pane

0x217c,	// (0x0005ca10) main_midp_pane_ParamLimits

0xcab1,	// (0x00067345) signal_pane_g2_cp_ParamLimits

0xda8e,	// (0x00068322) aid_size_cell_midp_keypad_ParamLimits

0xda8e,	// (0x00068322) aid_size_cell_midp_keypad

0xdaac,	// (0x00068340) midp_keyp_game_grid_pane_ParamLimits

0xdaac,	// (0x00068340) midp_keyp_game_grid_pane

0xdad3,	// (0x00068367) midp_keyp_rocker_pane_ParamLimits

0xdad3,	// (0x00068367) midp_keyp_rocker_pane

0xdb24,	// (0x000683b8) midp_keyp_sk_left_pane_ParamLimits

0xdb24,	// (0x000683b8) midp_keyp_sk_left_pane

0xe3ce,	// (0x00068c62) midp_keyp_sk_right_pane_ParamLimits

0xe3ce,	// (0x00068c62) midp_keyp_sk_right_pane

0x7ea1,	// (0x00062735) bg_button_pane_cp03

0xe422,	// (0x00068cb6) midp_keyp_sk_left_pane_g1

0x7ea1,	// (0x00062735) bg_button_pane_cp04

0xe422,	// (0x00068cb6) midp_keyp_sk_right_pane_g1

0x4e30,	// (0x0005f6c4) midp_keyp_rocker_pane_g1

0xe42b,	// (0x00068cbf) keyp_game_cell_pane_ParamLimits

0xe42b,	// (0x00068cbf) keyp_game_cell_pane

0x7ea1,	// (0x00062735) bg_button_pane_cp02

0xe44f,	// (0x00068ce3) keyp_game_cell_pane_g1

0x9399,	// (0x00063c2d) popup_fep_vkb2_window_ParamLimits

0x9399,	// (0x00063c2d) popup_fep_vkb2_window

0xb517,	// (0x00065dab) aid_size_cell_vkb2_ParamLimits

0xb517,	// (0x00065dab) aid_size_cell_vkb2

0xb555,	// (0x00065de9) popup_fep_vkb2_window_g1_ParamLimits

0xb555,	// (0x00065de9) popup_fep_vkb2_window_g1

0xb5a5,	// (0x00065e39) vkb2_area_bottom_pane_ParamLimits

0xb5a5,	// (0x00065e39) vkb2_area_bottom_pane

0xb5f9,	// (0x00065e8d) vkb2_area_keypad_pane_ParamLimits

0xb5f9,	// (0x00065e8d) vkb2_area_keypad_pane

0xb641,	// (0x00065ed5) vkb2_area_top_pane_ParamLimits

0xb641,	// (0x00065ed5) vkb2_area_top_pane

0xb6c7,	// (0x00065f5b) vkb2_top_entry_pane_ParamLimits

0xb6c7,	// (0x00065f5b) vkb2_top_entry_pane

0xb6f4,	// (0x00065f88) vkb2_top_grid_left_pane_ParamLimits

0xb6f4,	// (0x00065f88) vkb2_top_grid_left_pane

0xb714,	// (0x00065fa8) vkb2_top_grid_right_pane_ParamLimits

0xb714,	// (0x00065fa8) vkb2_top_grid_right_pane

0x14c6,	// (0x0005bd5a) vkb2_cell_keypad_pane_ParamLimits

0x14c6,	// (0x0005bd5a) vkb2_cell_keypad_pane

0xb75a,	// (0x00065fee) vkb2_area_bottom_grid_pane_ParamLimits

0xb75a,	// (0x00065fee) vkb2_area_bottom_grid_pane

0xb784,	// (0x00066018) vkb2_area_bottom_pane_g1_ParamLimits

0xb784,	// (0x00066018) vkb2_area_bottom_pane_g1

0xb7aa,	// (0x0006603e) vkb2_area_bottom_pane_g2_ParamLimits

0xb7aa,	// (0x0006603e) vkb2_area_bottom_pane_g2

0xb7db,	// (0x0006606f) vkb2_area_bottom_pane_g3_ParamLimits

0xb7db,	// (0x0006606f) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x0006a626) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x0006a626) vkb2_area_bottom_pane_g

0x1670,	// (0x0005bf04) vkb2_top_cell_left_pane_ParamLimits

0x1670,	// (0x0005bf04) vkb2_top_cell_left_pane

0xe458,	// (0x00068cec) vkb2_top_entry_pane_g1_ParamLimits

0xe458,	// (0x00068cec) vkb2_top_entry_pane_g1

0xe466,	// (0x00068cfa) vkb2_top_entry_pane_t1_ParamLimits

0xe466,	// (0x00068cfa) vkb2_top_entry_pane_t1

0x6d06,	// (0x0006159a) vkb2_top_entry_pane_t2_ParamLimits

0x6d06,	// (0x0006159a) vkb2_top_entry_pane_t2

0x6d38,	// (0x000615cc) vkb2_top_entry_pane_t3_ParamLimits

0x6d38,	// (0x000615cc) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x0006a62d) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x0006a62d) vkb2_top_entry_pane_t

0xb845,	// (0x000660d9) vkb2_top_grid_right_pane_g1_ParamLimits

0xb845,	// (0x000660d9) vkb2_top_grid_right_pane_g1

0x16d3,	// (0x0005bf67) vkb2_top_grid_right_pane_g2_ParamLimits

0x16d3,	// (0x0005bf67) vkb2_top_grid_right_pane_g2

0x16eb,	// (0x0005bf7f) vkb2_top_grid_right_pane_g3_ParamLimits

0x16eb,	// (0x0005bf7f) vkb2_top_grid_right_pane_g3

0xb85b,	// (0x000660ef) vkb2_top_grid_right_pane_g4_ParamLimits

0xb85b,	// (0x000660ef) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x0006a634) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x0006a634) vkb2_top_grid_right_pane_g

0x1719,	// (0x0005bfad) vkb2_top_cell_left_pane_g1

0x1730,	// (0x0005bfc4) vkb2_cell_keypad_pane_g1_ParamLimits

0x1730,	// (0x0005bfc4) vkb2_cell_keypad_pane_g1

0x6d5c,	// (0x000615f0) vkb2_cell_keypad_pane_t1_ParamLimits

0x6d5c,	// (0x000615f0) vkb2_cell_keypad_pane_t1

0x173e,	// (0x0005bfd2) vkb2_cell_bottom_grid_pane_ParamLimits

0x173e,	// (0x0005bfd2) vkb2_cell_bottom_grid_pane

0x1777,	// (0x0005c00b) vkb2_cell_bottom_grid_pane_g1

0xd8a2,	// (0x00068136) aid_call2_pane_cp02

0xd8aa,	// (0x0006813e) aid_call_pane_cp02

0xd8b2,	// (0x00068146) clock_digital_number_pane_cp10

0xd8ba,	// (0x0006814e) clock_digital_number_pane_cp11

0xd8c2,	// (0x00068156) clock_digital_number_pane_cp12

0xd8ca,	// (0x0006815e) clock_digital_number_pane_cp13

0xd8d2,	// (0x00068166) clock_digital_separator_pane_cp10

0xbb65,	// (0x000663f9) popup_clock_digital_analogue_window_cp2_g1

0xbb65,	// (0x000663f9) popup_clock_digital_analogue_window_cp2_g2

0xd8da,	// (0x0006816e) popup_clock_digital_analogue_window_cp2_g3

0xbb65,	// (0x000663f9) popup_clock_digital_analogue_window_cp2_g4

0xd8da,	// (0x0006816e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x0006a5e9) popup_clock_digital_analogue_window_cp2_g

0xd8e2,	// (0x00068176) popup_clock_digital_analogue_window_cp2_t1

0xd8f0,	// (0x00068184) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x0006a5f4) popup_clock_digital_analogue_window_cp2_t

0x4e30,	// (0x0005f6c4) clock_digital_number_pane_cp10_g1

0x4e30,	// (0x0005f6c4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0006a3d7) clock_digital_number_pane_cp10_g

0x4e30,	// (0x0005f6c4) clock_digital_separator_pane_cp10_g1

0x4e30,	// (0x0005f6c4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0006a3d7) clock_digital_separator_pane_cp10_g

0xd79f,	// (0x00068033) uniindi_top_pane_g3

0x6795,	// (0x00061029) uniindi_top_pane_g4

0x1551,	// (0x0005bde5) vkb2_row_keypad_pane_ParamLimits

0x1551,	// (0x0005bde5) vkb2_row_keypad_pane

0x1793,	// (0x0005c027) vkb2_cell_t_keypad_pane_ParamLimits

0x1793,	// (0x0005c027) vkb2_cell_t_keypad_pane

0x17a3,	// (0x0005c037) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17a3,	// (0x0005c037) vkb2_cell_t_keypad_pane_cp08

0x17b6,	// (0x0005c04a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17b6,	// (0x0005c04a) vkb2_cell_t_keypad_pane_cp09

0x17ca,	// (0x0005c05e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17ca,	// (0x0005c05e) vkb2_cell_t_keypad_pane_cp01

0x17db,	// (0x0005c06f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x17db,	// (0x0005c06f) vkb2_cell_t_keypad_pane_cp02

0x17ec,	// (0x0005c080) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x17ec,	// (0x0005c080) vkb2_cell_t_keypad_pane_cp03

0x17fd,	// (0x0005c091) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x17fd,	// (0x0005c091) vkb2_cell_t_keypad_pane_cp04

0x180e,	// (0x0005c0a2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x180e,	// (0x0005c0a2) vkb2_cell_t_keypad_pane_cp05

0x181f,	// (0x0005c0b3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x181f,	// (0x0005c0b3) vkb2_cell_t_keypad_pane_cp06

0x1830,	// (0x0005c0c4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1830,	// (0x0005c0c4) vkb2_cell_t_keypad_pane_cp07

0x1841,	// (0x0005c0d5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1841,	// (0x0005c0d5) vkb2_cell_t_keypad_pane_cp10

0x0efa,	// (0x0005b78e) vkb2_cell_t_keypad_pane_g1

0x6d73,	// (0x00061607) vkb2_cell_t_keypad_pane_t1

0xeec9,	// (0x0006975d) popup_grid_graphic2_window

0xe49f,	// (0x00068d33) aid_size_cell_graphic2_ParamLimits

0xe49f,	// (0x00068d33) aid_size_cell_graphic2

0xe4dd,	// (0x00068d71) bg_popup_window_pane_cp21_ParamLimits

0xe4dd,	// (0x00068d71) bg_popup_window_pane_cp21

0xe4eb,	// (0x00068d7f) graphic2_pages_pane_ParamLimits

0xe4eb,	// (0x00068d7f) graphic2_pages_pane

0xe541,	// (0x00068dd5) grid_graphic2_control_pane_ParamLimits

0xe541,	// (0x00068dd5) grid_graphic2_control_pane

0xe589,	// (0x00068e1d) grid_graphic2_pane_ParamLimits

0xe589,	// (0x00068e1d) grid_graphic2_pane

0xe610,	// (0x00068ea4) cell_graphic2_pane

0xeec9,	// (0x0006975d) main_comp_mode_pane

0x6007,	// (0x0006089b) list_ai3_gene_pane_ParamLimits

0xd54e,	// (0x00067de2) bg_popup_window_pane_cp19_ParamLimits

0x63d7,	// (0x00060c6b) bg_touch_area_indi_pane_ParamLimits

0x63d7,	// (0x00060c6b) bg_touch_area_indi_pane

0x63ed,	// (0x00060c81) bg_touch_area_indi_pane_cp01_ParamLimits

0x63ed,	// (0x00060c81) bg_touch_area_indi_pane_cp01

0x6403,	// (0x00060c97) bg_touch_area_indi_pane_cp02_ParamLimits

0x6403,	// (0x00060c97) bg_touch_area_indi_pane_cp02

0x641b,	// (0x00060caf) bg_touch_area_indi_pane_cp03_ParamLimits

0x641b,	// (0x00060caf) bg_touch_area_indi_pane_cp03

0x6435,	// (0x00060cc9) popup_slider_window_g1_ParamLimits

0x6451,	// (0x00060ce5) popup_slider_window_g2_ParamLimits

0x646d,	// (0x00060d01) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x0006a57e) popup_slider_window_g_ParamLimits

0x64c9,	// (0x00060d5d) popup_slider_window_t1_ParamLimits

0x653d,	// (0x00060dd1) small_volume_slider_vertical_pane_ParamLimits

0xe610,	// (0x00068ea4) cell_graphic2_pane_ParamLimits

0xe66b,	// (0x00068eff) bg_button_pane_cp10_ParamLimits

0xe66b,	// (0x00068eff) bg_button_pane_cp10

0xe67e,	// (0x00068f12) bg_button_pane_cp11_ParamLimits

0xe67e,	// (0x00068f12) bg_button_pane_cp11

0xe691,	// (0x00068f25) graphic2_pages_pane_g1_ParamLimits

0xe691,	// (0x00068f25) graphic2_pages_pane_g1

0xe6ac,	// (0x00068f40) graphic2_pages_pane_g2_ParamLimits

0xe6ac,	// (0x00068f40) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x0006a642) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x0006a642) graphic2_pages_pane_g

0xe6c4,	// (0x00068f58) graphic2_pages_pane_t1_ParamLimits

0xe6c4,	// (0x00068f58) graphic2_pages_pane_t1

0xe6dc,	// (0x00068f70) cell_graphic2_control_pane_ParamLimits

0xe6dc,	// (0x00068f70) cell_graphic2_control_pane

0xe70e,	// (0x00068fa2) cell_graphic2_pane_g1_ParamLimits

0xe70e,	// (0x00068fa2) cell_graphic2_pane_g1

0xdb78,	// (0x0006840c) cell_graphic2_pane_g2_ParamLimits

0xdb78,	// (0x0006840c) cell_graphic2_pane_g2

0xe231,	// (0x00068ac5) cell_graphic2_pane_g3_ParamLimits

0xe231,	// (0x00068ac5) cell_graphic2_pane_g3

0xdb85,	// (0x00068419) cell_graphic2_pane_g4_ParamLimits

0xdb85,	// (0x00068419) cell_graphic2_pane_g4

0xe71b,	// (0x00068faf) cell_graphic2_pane_g5_ParamLimits

0xe71b,	// (0x00068faf) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x0006a647) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x0006a647) cell_graphic2_pane_g

0xe73b,	// (0x00068fcf) cell_graphic2_pane_t1_ParamLimits

0xe73b,	// (0x00068fcf) cell_graphic2_pane_t1

0x3377,	// (0x0005dc0b) grid_highlight_pane_cp11_ParamLimits

0x3377,	// (0x0005dc0b) grid_highlight_pane_cp11

0x803b,	// (0x000628cf) bg_button_pane_cp05

0xe787,	// (0x0006901b) cell_graphic2_control_pane_g1

0x4e30,	// (0x0005f6c4) bg_touch_area_indi_pane_g1

0x704f,	// (0x000618e3) aid_cmod_rocker_key_size

0x7059,	// (0x000618ed) aid_cmode_itu_key_size

0x7063,	// (0x000618f7) main_cmode_video_pane

0x706d,	// (0x00061901) main_comp_mode_itu_pane

0x7079,	// (0x0006190d) main_comp_mode_rocker_pane

0x7085,	// (0x00061919) cell_cmode_rocker_pane_ParamLimits

0x7085,	// (0x00061919) cell_cmode_rocker_pane

0x7097,	// (0x0006192b) cell_cmode_itu_pane_ParamLimits

0x7097,	// (0x0006192b) cell_cmode_itu_pane

0x84ca,	// (0x00062d5e) bg_button_pane_cp06_ParamLimits

0x84ca,	// (0x00062d5e) bg_button_pane_cp06

0x50a0,	// (0x0005f934) cell_cmode_rocker_pane_g1_ParamLimits

0x50a0,	// (0x0005f934) cell_cmode_rocker_pane_g1

0x65e1,	// (0x00060e75) cell_cmode_rocker_pane_g2_ParamLimits

0x65e1,	// (0x00060e75) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x0006a657) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x0006a657) cell_cmode_rocker_pane_g

0x7ea1,	// (0x00062735) bg_button_pane_cp07

0x70ac,	// (0x00061940) cell_cmode_itu_pane_g1

0x70b5,	// (0x00061949) cell_cmode_itu_pane_t1

0x70c3,	// (0x00061957) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x0006a65c) cell_cmode_itu_pane_t

0x6806,	// (0x0006109a) aid_touch_ctrl_left

0x680e,	// (0x000610a2) aid_touch_ctrl_right

0x7ea1,	// (0x00062735) compa_mode_pane

0xe7ad,	// (0x00069041) aid_cmod_rocker_key_size_cp

0xe7b7,	// (0x0006904b) aid_cmode_itu_key_size_cp

0x70e5,	// (0x00061979) compa_mode_pane_g1

0x70ed,	// (0x00061981) compa_mode_pane_g2

0x70f5,	// (0x00061989) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x0006a661) compa_mode_pane_g

0xe7c1,	// (0x00069055) main_comp_mode_itu_pane_cp

0xe7c9,	// (0x0006905d) main_comp_mode_rocker_pane_cp

0xe7d1,	// (0x00069065) cell_cmode_itu_pane_cp_ParamLimits

0xe7d1,	// (0x00069065) cell_cmode_itu_pane_cp

0xe7e6,	// (0x0006907a) cell_cmode_rocker_pane_cp_ParamLimits

0xe7e6,	// (0x0006907a) cell_cmode_rocker_pane_cp

0x84ca,	// (0x00062d5e) bg_button_pane_cp06_cp_ParamLimits

0x84ca,	// (0x00062d5e) bg_button_pane_cp06_cp

0x50a0,	// (0x0005f934) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x50a0,	// (0x0005f934) cell_cmode_rocker_pane_g1_cp

0x4e30,	// (0x0005f6c4) cell_cmode_rocker_pane_g2_cp

0x7ea1,	// (0x00062735) bg_button_pane_cp07_cp

0xe7f8,	// (0x0006908c) cell_cmode_itu_pane_g1_cp

0xe801,	// (0x00069095) cell_cmode_itu_pane_t1_cp

0xe801,	// (0x00069095) cell_cmode_itu_pane_t2_cp

0xc820,	// (0x000670b4) settings_code_pane_cp2

0x7f03,	// (0x00062797) bg_popup_window_pane_cp3_ParamLimits

0x8154,	// (0x000629e8) heading_pane_cp3_ParamLimits

0x8160,	// (0x000629f4) listscroll_popup_graphic_pane_ParamLimits

0x0ca3,	// (0x0005b537) fep_hwr_aid_pane_ParamLimits

0x1217,	// (0x0005baab) aid_touch_sctrl_top_ParamLimits

0x1232,	// (0x0005bac6) sctrl_sk_top_pane_g1_ParamLimits

0x0efa,	// (0x0005b78e) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x0006a597) sctrl_sk_top_pane_g_ParamLimits

0x123f,	// (0x0005bad3) sctrl_sk_top_pane_t1_ParamLimits

0x1217,	// (0x0005baab) aid_touch_sctrl_bottom_ParamLimits

0x123f,	// (0x0005bad3) sctrl_sk_bottom_pane_t1_ParamLimits

0xd76b,	// (0x00067fff) aid_area_touch_clock

0xb689,	// (0x00065f1d) aid_vkb2_area_top_pane_cell_ParamLimits

0xb689,	// (0x00065f1d) aid_vkb2_area_top_pane_cell

0xb734,	// (0x00065fc8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb734,	// (0x00065fc8) aid_vkb2_area_bottom_pane_cell

0x6cbe,	// (0x00061552) popup_char_count_window

0x714b,	// (0x000619df) popup_char_count_window_g1

0x7154,	// (0x000619e8) popup_char_count_window_g2

0x715d,	// (0x000619f1) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x0006a668) popup_char_count_window_g

0x7166,	// (0x000619fa) popup_char_count_window_t1

0x12ee,	// (0x0005bb82) popup_fep_char_preview_window_ParamLimits

0x12ee,	// (0x0005bb82) popup_fep_char_preview_window

0xb6a9,	// (0x00065f3d) vkb2_top_candi_pane_ParamLimits

0xb6a9,	// (0x00065f3d) vkb2_top_candi_pane

0xe80f,	// (0x000690a3) cell_vkb2_top_candi_pane_ParamLimits

0xe80f,	// (0x000690a3) cell_vkb2_top_candi_pane

0x1856,	// (0x0005c0ea) bg_popup_fep_char_preview_window_ParamLimits

0x1856,	// (0x0005c0ea) bg_popup_fep_char_preview_window

0x1864,	// (0x0005c0f8) popup_fep_char_preview_window_t1_ParamLimits

0x1864,	// (0x0005c0f8) popup_fep_char_preview_window_t1

0x71c1,	// (0x00061a55) bg_popup_fep_char_preview_window_g1

0x71c9,	// (0x00061a5d) bg_popup_fep_char_preview_window_g2

0x71d1,	// (0x00061a65) bg_popup_fep_char_preview_window_g3

0x71d9,	// (0x00061a6d) bg_popup_fep_char_preview_window_g4

0x71e1,	// (0x00061a75) bg_popup_fep_char_preview_window_g5

0x189e,	// (0x0005c132) bg_popup_fep_char_preview_window_g6

0x71e9,	// (0x00061a7d) bg_popup_fep_char_preview_window_g7

0x71f1,	// (0x00061a85) bg_popup_fep_char_preview_window_g8

0x71f9,	// (0x00061a8d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x0006a66f) bg_popup_fep_char_preview_window_g

0x0efa,	// (0x0005b78e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0efa,	// (0x0005b78e) cell_vkb2_top_candi_pane_g1

0x0f08,	// (0x0005b79c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0f08,	// (0x0005b79c) cell_vkb2_top_candi_pane_g2

0x5e36,	// (0x000606ca) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5e36,	// (0x000606ca) cell_vkb2_top_candi_pane_g3

0x18a6,	// (0x0005c13a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18a6,	// (0x0005c13a) cell_vkb2_top_candi_pane_g4

0x55a0,	// (0x0005fe34) cell_vkb2_top_candi_pane_g5_ParamLimits

0x55a0,	// (0x0005fe34) cell_vkb2_top_candi_pane_g5

0x18c7,	// (0x0005c15b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18c7,	// (0x0005c15b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x0006a682) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x0006a682) cell_vkb2_top_candi_pane_g

0x18d5,	// (0x0005c169) cell_vkb2_top_candi_pane_t1

0xb15b,	// (0x000659ef) aid_size_touch_slider_mark_ParamLimits

0xb15b,	// (0x000659ef) aid_size_touch_slider_mark

0xe527,	// (0x00068dbb) grid_graphic2_catg_pane_ParamLimits

0xe527,	// (0x00068dbb) grid_graphic2_catg_pane

0xe5e3,	// (0x00068e77) popup_grid_graphic2_window_t1_ParamLimits

0xe5e3,	// (0x00068e77) popup_grid_graphic2_window_t1

0xe5f9,	// (0x00068e8d) popup_grid_graphic2_window_t2_ParamLimits

0xe5f9,	// (0x00068e8d) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x0006a63d) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x0006a63d) popup_grid_graphic2_window_t

0x803b,	// (0x000628cf) bg_button_pane_cp05_ParamLimits

0xe787,	// (0x0006901b) cell_graphic2_control_pane_g1_ParamLimits

0xe875,	// (0x00069109) cell_graphic2_catg_pane_ParamLimits

0xe875,	// (0x00069109) cell_graphic2_catg_pane

0x7ea1,	// (0x00062735) bg_button_pane_cp12

0xe887,	// (0x0006911b) cell_graphic2_catg_pane_g1

0x671b,	// (0x00060faf) cell_tb_ext_pane_t1_ParamLimits

0x1690,	// (0x0005bf24) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1690,	// (0x0005bf24) vkb2_top_cell_right_narrow_pane

0x16a8,	// (0x0005bf3c) vkb2_top_cell_right_wide_pane_ParamLimits

0x16a8,	// (0x0005bf3c) vkb2_top_cell_right_wide_pane

0x0c95,	// (0x0005b529) bg_vkb2_func_pane_ParamLimits

0x0c95,	// (0x0005b529) bg_vkb2_func_pane

0x1719,	// (0x0005bfad) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c95,	// (0x0005b529) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c95,	// (0x0005b529) bg_vkb2_fuc_pane_cp03

0x1777,	// (0x0005c00b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2691,	// (0x0005cf25) bg_vkb2_func_pane_g1

0x2699,	// (0x0005cf2d) bg_vkb2_func_pane_g2

0x26a9,	// (0x0005cf3d) bg_vkb2_func_pane_g3

0x26a1,	// (0x0005cf35) bg_vkb2_func_pane_g4

0x26b1,	// (0x0005cf45) bg_vkb2_func_pane_g5

0x26b9,	// (0x0005cf4d) bg_vkb2_func_pane_g6

0x26c1,	// (0x0005cf55) bg_vkb2_func_pane_g7

0x26c9,	// (0x0005cf5d) bg_vkb2_func_pane_g8

0x2689,	// (0x0005cf1d) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x0006a68f) bg_vkb2_func_pane_g

0x0c95,	// (0x0005b529) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c95,	// (0x0005b529) bg_vkb2_fuc_pane_cp01

0x1719,	// (0x0005bfad) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1719,	// (0x0005bfad) vkb2_top_cell_right_wide_pane_g1

0x0c95,	// (0x0005b529) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c95,	// (0x0005b529) bg_vkb2_fuc_pane_cp02

0x1777,	// (0x0005c00b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1777,	// (0x0005c00b) vkb2_top_cell_right_narrow_pane_g1

0xd48c,	// (0x00067d20) aid_touch_area_decrease_ParamLimits

0xd48c,	// (0x00067d20) aid_touch_area_decrease

0xd4c2,	// (0x00067d56) aid_touch_area_increase_ParamLimits

0xd4c2,	// (0x00067d56) aid_touch_area_increase

0xd4ea,	// (0x00067d7e) aid_touch_area_mute_ParamLimits

0xd4ea,	// (0x00067d7e) aid_touch_area_mute

0xd51a,	// (0x00067dae) aid_touch_area_slider_ParamLimits

0xd51a,	// (0x00067dae) aid_touch_area_slider

0xd55a,	// (0x00067dee) popup_slider_window_g4_ParamLimits

0xd55a,	// (0x00067dee) popup_slider_window_g4

0xd582,	// (0x00067e16) popup_slider_window_g5_ParamLimits

0xd582,	// (0x00067e16) popup_slider_window_g5

0xd5b6,	// (0x00067e4a) popup_slider_window_g6_ParamLimits

0xd5b6,	// (0x00067e4a) popup_slider_window_g6

0x64f7,	// (0x00060d8b) popup_slider_window_t2_ParamLimits

0x64f7,	// (0x00060d8b) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x0006a58b) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x0006a58b) popup_slider_window_t

0xd5d2,	// (0x00067e66) slider_pane_ParamLimits

0xd5d2,	// (0x00067e66) slider_pane

0x721c,	// (0x00061ab0) slider_pane_g1_ParamLimits

0x721c,	// (0x00061ab0) slider_pane_g1

0x7230,	// (0x00061ac4) slider_pane_g2_ParamLimits

0x7230,	// (0x00061ac4) slider_pane_g2

0x7246,	// (0x00061ada) slider_pane_g3_ParamLimits

0x7246,	// (0x00061ada) slider_pane_g3

0x0003,

0xfe0e,	// (0x0006a6a2) slider_pane_g_ParamLimits

0xfe0e,	// (0x0006a6a2) slider_pane_g

0xaf52,	// (0x000657e6) popup_tb_float_extension_window_ParamLimits

0xaf52,	// (0x000657e6) popup_tb_float_extension_window

0x7272,	// (0x00061b06) aid_size_cell_tb_float_ext

0x7ea1,	// (0x00062735) bg_popup_sub_window_cp28

0xe890,	// (0x00069124) grid_tb_float_ext_pane

0xe89a,	// (0x0006912e) cell_tb_float_ext_pane_ParamLimits

0xe89a,	// (0x0006912e) cell_tb_float_ext_pane

0xe8b4,	// (0x00069148) cell_tb_float_ext_pane_g1

0xe8bd,	// (0x00069151) grid_highlight_pane_cp12

0xb2c5,	// (0x00065b59) cell_last_hwr_side_pane_ParamLimits

0xb2c5,	// (0x00065b59) cell_last_hwr_side_pane

0x4e30,	// (0x0005f6c4) cell_last_hwr_side_pane_g1

0x72b4,	// (0x00061b48) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x0006a6ab) cell_last_hwr_side_pane_g

0xb810,	// (0x000660a4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb810,	// (0x000660a4) vkb2_area_bottom_space_btn_pane

0x0efa,	// (0x0005b78e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6d73,	// (0x00061607) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x18d5,	// (0x0005c169) cell_vkb2_top_candi_pane_t1_ParamLimits

0x18f4,	// (0x0005c188) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x18f4,	// (0x0005c188) vkb2_area_bottom_space_btn_pane_g1

0x192e,	// (0x0005c1c2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x192e,	// (0x0005c1c2) vkb2_area_bottom_space_btn_pane_g2

0x1964,	// (0x0005c1f8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1964,	// (0x0005c1f8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x0006a6b0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x0006a6b0) vkb2_area_bottom_space_btn_pane_g

0x0d58,	// (0x0005b5ec) cel_fep_hwr_func_pane_ParamLimits

0x0d58,	// (0x0005b5ec) cel_fep_hwr_func_pane

0xb29a,	// (0x00065b2e) cell_hwr_side_button_pane_ParamLimits

0xb29a,	// (0x00065b2e) cell_hwr_side_button_pane

0xd76b,	// (0x00067fff) aid_area_touch_clock_ParamLimits

0x803b,	// (0x000628cf) bg_uniindi_top_pane_ParamLimits

0xd77d,	// (0x00068011) uniindi_top_pane_g1_ParamLimits

0xd793,	// (0x00068027) uniindi_top_pane_g2_ParamLimits

0xd79f,	// (0x00068033) uniindi_top_pane_g3_ParamLimits

0x6795,	// (0x00061029) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x0006a5c3) uniindi_top_pane_g_ParamLimits

0xd7b0,	// (0x00068044) uniindi_top_pane_t1_ParamLimits

0x803b,	// (0x000628cf) bg_vkb2_func_pane_cp01_ParamLimits

0x803b,	// (0x000628cf) bg_vkb2_func_pane_cp01

0x72bd,	// (0x00061b51) cel_fep_hwr_func_pane_g1_ParamLimits

0x72bd,	// (0x00061b51) cel_fep_hwr_func_pane_g1

0x803b,	// (0x000628cf) bg_vkb2_func_pane_cp02_ParamLimits

0x803b,	// (0x000628cf) bg_vkb2_func_pane_cp02

0x72bd,	// (0x00061b51) cell_hwr_side_button_pane_g1_ParamLimits

0x72bd,	// (0x00061b51) cell_hwr_side_button_pane_g1

0x250d,	// (0x0005cda1) status_pane_g4_ParamLimits

0x250d,	// (0x0005cda1) status_pane_g4

0x2527,	// (0x0005cdbb) status_pane_t1

0x4b71,	// (0x0005f405) form2_midp_gauge_slider_cont_pane

0x4b79,	// (0x0005f40d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcbda,	// (0x0006746e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcbec,	// (0x00067480) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0006a38a) form2_midp_gauge_slider_pane_t_ParamLimits

0x4baf,	// (0x0005f443) form2_midp_slider_pane_ParamLimits

0x12ae,	// (0x0005bb42) aid_size_cell_func_vkb2_ParamLimits

0x12ae,	// (0x0005bb42) aid_size_cell_func_vkb2

0x725e,	// (0x00061af2) slider_pane_g4_ParamLimits

0x725e,	// (0x00061af2) slider_pane_g4

0xb871,	// (0x00066105) form2_midp_gauge_slider_pane_t2_cp01

0xb87f,	// (0x00066113) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb87f,	// (0x00066113) form2_midp_gauge_slider_pane_t3_cp01

0x19d9,	// (0x0005c26d) form2_midp_slider_pane_cp01

0x7ea1,	// (0x00062735) navi_smil_pane

0x72f6,	// (0x00061b8a) navi_smil_pane_g1

0x72fe,	// (0x00061b92) navi_smil_pane_t1

0x72cb,	// (0x00061b5f) form2_midp_slider_pane_g1

0x72d4,	// (0x00061b68) form2_midp_slider_pane_g2

0x72dc,	// (0x00061b70) form2_midp_slider_pane_g3

0x72cb,	// (0x00061b5f) form2_midp_slider_pane_g4

0xe8c6,	// (0x0006915a) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x0006a6b9) form2_midp_slider_pane_g

0x199e,	// (0x0005c232) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x199e,	// (0x0005c232) vkb2_area_bottom_space_btn_pane_g4

0xbd7f,	// (0x00066613) lc0_navi_pane_ParamLimits

0xbd7f,	// (0x00066613) lc0_navi_pane

0xbde9,	// (0x0006667d) lc0_stat_indi_pane_ParamLimits

0xbde9,	// (0x0006667d) lc0_stat_indi_pane

0xbdfe,	// (0x00066692) ls0_title_pane_ParamLimits

0xbdfe,	// (0x00066692) ls0_title_pane

0x84ca,	// (0x00062d5e) bg_popup_sub_pane_cp14_ParamLimits

0xd752,	// (0x00067fe6) list_uniindi_pane_ParamLimits

0xd75e,	// (0x00067ff2) uniindi_top_pane_ParamLimits

0x67de,	// (0x00061072) list_single_uniindi_pane_g1_ParamLimits

0x67f1,	// (0x00061085) list_single_uniindi_pane_t1_ParamLimits

0xb89c,	// (0x00066130) lc0_stat_clock_pane_ParamLimits

0xb89c,	// (0x00066130) lc0_stat_clock_pane

0xe8d1,	// (0x00069165) lc0_stat_indi_pane_g1_ParamLimits

0xe8d1,	// (0x00069165) lc0_stat_indi_pane_g1

0xe8de,	// (0x00069172) lc0_stat_indi_pane_g2_ParamLimits

0xe8de,	// (0x00069172) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x0006a6c4) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x0006a6c4) lc0_stat_indi_pane_g

0xb8ac,	// (0x00066140) lc0_uni_indicator_pane_ParamLimits

0xb8ac,	// (0x00066140) lc0_uni_indicator_pane

0xe8eb,	// (0x0006917f) ls0_title_pane_g1_ParamLimits

0xe8eb,	// (0x0006917f) ls0_title_pane_g1

0xe8ff,	// (0x00069193) ls0_title_pane_t1_ParamLimits

0xe8ff,	// (0x00069193) ls0_title_pane_t1

0xb8bc,	// (0x00066150) lc0_uni_indicator_pane_g1_ParamLimits

0xb8bc,	// (0x00066150) lc0_uni_indicator_pane_g1

0x7370,	// (0x00061c04) lc0_stat_clock_pane_t1

0xeec9,	// (0x0006975d) main_ai5_pane

0x737e,	// (0x00061c12) ai5_sk_pane_ParamLimits

0x737e,	// (0x00061c12) ai5_sk_pane

0xe92d,	// (0x000691c1) cell_ai5_widget_pane_ParamLimits

0xe92d,	// (0x000691c1) cell_ai5_widget_pane

0x743d,	// (0x00061cd1) aid_size_cell_widget_grid

0x744b,	// (0x00061cdf) bg_ai5_widget_pane_ParamLimits

0x744b,	// (0x00061cdf) bg_ai5_widget_pane

0x74bf,	// (0x00061d53) cell_ai5_widget_pane_g2

0x74cf,	// (0x00061d63) cell_ai5_widget_pane_g3

0x74e6,	// (0x00061d7a) cell_ai5_widget_pane_g4

0x74f2,	// (0x00061d86) cell_ai5_widget_pane_g5

0x74fe,	// (0x00061d92) cell_ai5_widget_pane_g6

0x750a,	// (0x00061d9e) cell_ai5_widget_pane_g7

0x7552,	// (0x00061de6) cell_ai5_widget_pane_t1_ParamLimits

0x7552,	// (0x00061de6) cell_ai5_widget_pane_t1

0x756f,	// (0x00061e03) cell_ai5_widget_pane_t2_ParamLimits

0x756f,	// (0x00061e03) cell_ai5_widget_pane_t2

0x7587,	// (0x00061e1b) cell_ai5_widget_pane_t3_ParamLimits

0x7587,	// (0x00061e1b) cell_ai5_widget_pane_t3

0x759f,	// (0x00061e33) cell_ai5_widget_pane_t4_ParamLimits

0x759f,	// (0x00061e33) cell_ai5_widget_pane_t4

0x75bc,	// (0x00061e50) cell_ai5_widget_pane_t5_ParamLimits

0x75bc,	// (0x00061e50) cell_ai5_widget_pane_t5

0x75db,	// (0x00061e6f) cell_ai5_widget_pane_t6_ParamLimits

0x75db,	// (0x00061e6f) cell_ai5_widget_pane_t6

0x75ed,	// (0x00061e81) cell_ai5_widget_pane_t7_ParamLimits

0x75ed,	// (0x00061e81) cell_ai5_widget_pane_t7

0x7606,	// (0x00061e9a) cell_ai5_widget_pane_t8_ParamLimits

0x7606,	// (0x00061e9a) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x0006a6de) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x0006a6de) cell_ai5_widget_pane_t

0x765a,	// (0x00061eee) grid_ai5_widget_pane

0x84ca,	// (0x00062d5e) highlight_cell_ai5_widget_pane_ParamLimits

0x84ca,	// (0x00062d5e) highlight_cell_ai5_widget_pane

0xe993,	// (0x00069227) ai5_sk_left_pane

0xe99d,	// (0x00069231) ai5_sk_middle_pane

0xe9a7,	// (0x0006923b) ai5_sk_right_pane

0x7686,	// (0x00061f1a) bg_ai5_widget_pane_g1_ParamLimits

0x7686,	// (0x00061f1a) bg_ai5_widget_pane_g1

0x7692,	// (0x00061f26) bg_ai5_widget_pane_g2_ParamLimits

0x7692,	// (0x00061f26) bg_ai5_widget_pane_g2

0x769e,	// (0x00061f32) bg_ai5_widget_pane_g3_ParamLimits

0x769e,	// (0x00061f32) bg_ai5_widget_pane_g3

0x76aa,	// (0x00061f3e) bg_ai5_widget_pane_g4_ParamLimits

0x76aa,	// (0x00061f3e) bg_ai5_widget_pane_g4

0x76b6,	// (0x00061f4a) bg_ai5_widget_pane_g5_ParamLimits

0x76b6,	// (0x00061f4a) bg_ai5_widget_pane_g5

0x76c2,	// (0x00061f56) bg_ai5_widget_pane_g6_ParamLimits

0x76c2,	// (0x00061f56) bg_ai5_widget_pane_g6

0x76ce,	// (0x00061f62) bg_ai5_widget_pane_g7_ParamLimits

0x76ce,	// (0x00061f62) bg_ai5_widget_pane_g7

0x76da,	// (0x00061f6e) bg_ai5_widget_pane_g8_ParamLimits

0x76da,	// (0x00061f6e) bg_ai5_widget_pane_g8

0x76e6,	// (0x00061f7a) bg_ai5_widget_pane_g9_ParamLimits

0x76e6,	// (0x00061f7a) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x0006a6f3) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x0006a6f3) bg_ai5_widget_pane_g

0x7718,	// (0x00061fac) cell_shortcut_ai5_widget_pane_ParamLimits

0x7718,	// (0x00061fac) cell_shortcut_ai5_widget_pane

0x1e36,	// (0x0005c6ca) bg_cell_shortcut_ai5_widget_pane

0x7729,	// (0x00061fbd) cell_grid_ai5_widget_pane_g1

0x1e36,	// (0x0005c6ca) highlight_cell_shortcut_ai5_widget_pane

0x2691,	// (0x0005cf25) ai5_sk_left_pane_g1

0x7732,	// (0x00061fc6) ai5_sk_left_pane_g2

0x773a,	// (0x00061fce) ai5_sk_left_pane_g3

0x7742,	// (0x00061fd6) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x0006a706) ai5_sk_left_pane_g

0x774a,	// (0x00061fde) ai5_sk_left_pane_t1

0x2699,	// (0x0005cf2d) ai5_sk_right_pane_g1

0x7758,	// (0x00061fec) ai5_sk_right_pane_g2

0x7760,	// (0x00061ff4) ai5_sk_right_pane_g3

0x7768,	// (0x00061ffc) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x0006a70f) ai5_sk_right_pane_g

0x7770,	// (0x00062004) ai5_sk_right_pane_t1

0x2699,	// (0x0005cf2d) ai5_sk_middle_pane_g1

0x2691,	// (0x0005cf25) ai5_sk_middle_pane_g2

0x26b1,	// (0x0005cf45) ai5_sk_middle_pane_g3

0x7760,	// (0x00061ff4) ai5_sk_middle_pane_g4

0x773a,	// (0x00061fce) ai5_sk_middle_pane_g5

0x777e,	// (0x00062012) ai5_sk_middle_pane_g6

0xe9b1,	// (0x00069245) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x0006a718) ai5_sk_middle_pane_g

0xbc6b,	// (0x000664ff) aid_touch_area_size_lc0_ParamLimits

0xbc6b,	// (0x000664ff) aid_touch_area_size_lc0

0x0f29,	// (0x0005b7bd) cell_hwr_candidate_pane_t1_ParamLimits

0x21de,	// (0x0005ca72) aid_touch_navi_pane

0xbef7,	// (0x0006678b) status_dt_navi_pane_ParamLimits

0xbef7,	// (0x0006678b) status_dt_navi_pane

0xbf0f,	// (0x000667a3) status_dt_sta_pane_ParamLimits

0xbf0f,	// (0x000667a3) status_dt_sta_pane

0xe9b9,	// (0x0006924d) dt_sta_controll_pane

0xe9c6,	// (0x0006925a) dt_sta_indi_pane

0xe9d3,	// (0x00069267) dt_sta_title_pane

0x803b,	// (0x000628cf) bg_dt_sta_indi_pane_ParamLimits

0x803b,	// (0x000628cf) bg_dt_sta_indi_pane

0xe9e5,	// (0x00069279) dt_sta_battery_pane

0xe9ed,	// (0x00069281) dt_sta_indi_pane_g1

0x77d0,	// (0x00062064) dt_sta_indi_pane_g2

0x77d9,	// (0x0006206d) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x0006a727) dt_sta_indi_pane_g

0x77e2,	// (0x00062076) dt_sta_signal_pane

0x84ca,	// (0x00062d5e) bg_dt_sta_title_pane_ParamLimits

0x84ca,	// (0x00062d5e) bg_dt_sta_title_pane

0x34d7,	// (0x0005dd6b) dt_sta_title_pane_g1

0xe9f6,	// (0x0006928a) dt_sta_title_pane_t1_ParamLimits

0xe9f6,	// (0x0006928a) dt_sta_title_pane_t1

0x7ea1,	// (0x00062735) bg_dt_sta_control_pane

0xea0b,	// (0x0006929f) dt_sta_controll_pane_g1

0xea14,	// (0x000692a8) bg_dt_sta_title_pane_g1

0xea1d,	// (0x000692b1) bg_dt_sta_title_pane_g2

0xea26,	// (0x000692ba) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x0006a72e) bg_dt_sta_title_pane_g

0x4e30,	// (0x0005f6c4) bg_dt_sta_indi_pane_g1

0x7824,	// (0x000620b8) dt_sta_signal_pane_g1

0x782c,	// (0x000620c0) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x0006a735) dt_sta_signal_pane_g

0x7834,	// (0x000620c8) dt_sta_battery_pane_g1

0x783d,	// (0x000620d1) dt_sta_battery_pane_t1

0x4e30,	// (0x0005f6c4) bg_dt_sta_control_pane_g1

0xbbe8,	// (0x0006647c) fep_china_uni_eep_pane

0xbbf0,	// (0x00066484) fep_china_uni_entry_pane_ParamLimits

0xbc00,	// (0x00066494) popup_fep_china_uni_window_g1_ParamLimits

0xbc10,	// (0x000664a4) popup_fep_china_uni_window_g2_ParamLimits

0xbc10,	// (0x000664a4) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00069fac) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00069fac) popup_fep_china_uni_window_g

0x784c,	// (0x000620e0) fep_china_uni_eep_pane_g1

0x7854,	// (0x000620e8) fep_china_uni_eep_pane_t1

0x72ed,	// (0x00061b81) aid_touch_area_size_smil_player

0x2334,	// (0x0005cbc8) lc0_clock_pane

0x251b,	// (0x0005cdaf) status_pane_g5_ParamLimits

0x251b,	// (0x0005cdaf) status_pane_g5

0xaa88,	// (0x0006531c) popup_keymap_window

0x24d9,	// (0x0005cd6d) status_icon_pane

0x74cf,	// (0x00061d63) cell_ai5_widget_pane_g3_ParamLimits

0x74e6,	// (0x00061d7a) cell_ai5_widget_pane_g4_ParamLimits

0x74f2,	// (0x00061d86) cell_ai5_widget_pane_g5_ParamLimits

0x7516,	// (0x00061daa) cell_ai5_widget_pane_g8_ParamLimits

0x7516,	// (0x00061daa) cell_ai5_widget_pane_g8

0x752a,	// (0x00061dbe) cell_ai5_widget_pane_g9_ParamLimits

0x752a,	// (0x00061dbe) cell_ai5_widget_pane_g9

0x753e,	// (0x00061dd2) cell_ai5_widget_pane_g10_ParamLimits

0x753e,	// (0x00061dd2) cell_ai5_widget_pane_g10

0x7863,	// (0x000620f7) status_icon_pane_g1

0x7ea1,	// (0x00062735) bg_popup_sub_pane_cp13

0x786b,	// (0x000620ff) popup_keymap_window_t1

0xa738,	// (0x00064fcc) control_pane_g6_ParamLimits

0xa738,	// (0x00064fcc) control_pane_g6

0xa745,	// (0x00064fd9) control_pane_g7_ParamLimits

0xa745,	// (0x00064fd9) control_pane_g7

0xa752,	// (0x00064fe6) control_pane_g8_ParamLimits

0xa752,	// (0x00064fe6) control_pane_g8

0xe9b9,	// (0x0006924d) dt_sta_controll_pane_ParamLimits

0xe9c6,	// (0x0006925a) dt_sta_indi_pane_ParamLimits

0xe9d3,	// (0x00069267) dt_sta_title_pane_ParamLimits

0x820e,	// (0x00062aa2) aid_size_touch_scroll_bar_cale

0x938d,	// (0x00063c21) popup_discreet_window_ParamLimits

0x938d,	// (0x00063c21) popup_discreet_window

0x93df,	// (0x00063c73) popup_sk_window

0x2d1b,	// (0x0005d5af) bg_popup_sub_pane_cp28_ParamLimits

0x2d1b,	// (0x0005d5af) bg_popup_sub_pane_cp28

0x7879,	// (0x0006210d) popup_discreet_window_g1_ParamLimits

0x7879,	// (0x0006210d) popup_discreet_window_g1

0xea2f,	// (0x000692c3) popup_discreet_window_t1_ParamLimits

0xea2f,	// (0x000692c3) popup_discreet_window_t1

0x78b7,	// (0x0006214b) popup_discreet_window_t2_ParamLimits

0x78b7,	// (0x0006214b) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x0006a73a) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x0006a73a) popup_discreet_window_t

0x1a10,	// (0x0005c2a4) popup_sk_window_g1

0x1a1a,	// (0x0005c2ae) popup_sk_window_g2

0x0001,

0xfead,	// (0x0006a741) popup_sk_window_g

0xb8e7,	// (0x0006617b) popup_sk_window_t1

0xb8f5,	// (0x00066189) popup_sk_window_t1_copy1

0x74bf,	// (0x00061d53) cell_ai5_widget_pane_g2_ParamLimits

0x7618,	// (0x00061eac) cell_ai5_widget_pane_t9_ParamLimits

0x7618,	// (0x00061eac) cell_ai5_widget_pane_t9

0x7ea1,	// (0x00062735) main_fep_fshwr2_pane

0xb903,	// (0x00066197) aid_fshwr2_btn_pane

0xb915,	// (0x000661a9) aid_fshwr2_syb_pane

0xb927,	// (0x000661bb) aid_fshwr2_txt_pane

0xb936,	// (0x000661ca) fshwr2_func_candi_pane

0xb955,	// (0x000661e9) fshwr2_hwr_syb_pane

0xb970,	// (0x00066204) fshwr2_icf_pane

0xeec9,	// (0x0006975d) fshwr2_icf_bg_pane

0x1abf,	// (0x0005c353) fshwr2_icf_pane_t1_ParamLimits

0x1abf,	// (0x0005c353) fshwr2_icf_pane_t1

0xbb65,	// (0x000663f9) fshwr2_func_candi_pane_g1

0xea4d,	// (0x000692e1) fshwr2_func_candi_row_pane_ParamLimits

0xea4d,	// (0x000692e1) fshwr2_func_candi_row_pane

0xb99c,	// (0x00066230) cell_fshwr2_syb_pane_ParamLimits

0xb99c,	// (0x00066230) cell_fshwr2_syb_pane

0x0efa,	// (0x0005b78e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0efa,	// (0x0005b78e) fshwr2_hwr_syb_pane_g1

0xeec9,	// (0x0006975d) bg_popup_call_pane_cp01

0xb9b2,	// (0x00066246) fshwr2_func_candi_cell_pane_ParamLimits

0xb9b2,	// (0x00066246) fshwr2_func_candi_cell_pane

0xea70,	// (0x00069304) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xea70,	// (0x00069304) fshwr2_func_candi_cell_bg_pane

0xb9fd,	// (0x00066291) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb9fd,	// (0x00066291) fshwr2_func_candi_cell_pane_g1

0xba34,	// (0x000662c8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xba34,	// (0x000662c8) fshwr2_func_candi_cell_pane_t1

0xeec9,	// (0x0006975d) bg_button_pane_cp08

0x7919,	// (0x000621ad) cell_fshwr2_syb_bg_pane

0xba4f,	// (0x000662e3) cell_fshwr2_syb_bg_pane_g1

0xba57,	// (0x000662eb) cell_fshwr2_syb_bg_pane_t1

0x84ca,	// (0x00062d5e) main_tmo_pane

0xc5d2,	// (0x00066e66) uni_indicator_pane_g1_ParamLimits

0xc5e8,	// (0x00066e7c) uni_indicator_pane_g2_ParamLimits

0xc5fe,	// (0x00066e92) uni_indicator_pane_g3_ParamLimits

0x3844,	// (0x0005e0d8) uni_indicator_pane_g4_ParamLimits

0x3844,	// (0x0005e0d8) uni_indicator_pane_g4

0x3858,	// (0x0005e0ec) uni_indicator_pane_g5_ParamLimits

0x3858,	// (0x0005e0ec) uni_indicator_pane_g5

0x3858,	// (0x0005e0ec) uni_indicator_pane_g6_ParamLimits

0x3858,	// (0x0005e0ec) uni_indicator_pane_g6

0xf910,	// (0x0006a1a4) uni_indicator_pane_g_ParamLimits

0xd46e,	// (0x00067d02) popup_tmo_note_window_ParamLimits

0xd46e,	// (0x00067d02) popup_tmo_note_window

0x1290,	// (0x0005bb24) fshwr2_bg_pane

0xba25,	// (0x000662b9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xba25,	// (0x000662b9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x0006a746) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x0006a746) fshwr2_func_candi_cell_pane_g

0x0ee2,	// (0x0005b776) bg_popup_window_pane_cp01

0x1b8b,	// (0x0005c41f) bg_popup_window_pane_g1_cp01

0x7921,	// (0x000621b5) bg_popup_window_pane_cp22_ParamLimits

0x7921,	// (0x000621b5) bg_popup_window_pane_cp22

0xea7c,	// (0x00069310) listscroll_tmo_link_pane_ParamLimits

0xea7c,	// (0x00069310) listscroll_tmo_link_pane

0x796f,	// (0x00062203) popup_tmo_note_window_g1_ParamLimits

0x796f,	// (0x00062203) popup_tmo_note_window_g1

0xeabc,	// (0x00069350) tmo_note_info_pane_ParamLimits

0xeabc,	// (0x00069350) tmo_note_info_pane

0xead6,	// (0x0006936a) list_tmo_note_info_pane_g1_ParamLimits

0xead6,	// (0x0006936a) list_tmo_note_info_pane_g1

0x79ad,	// (0x00062241) list_tmo_note_info_pane_g2_ParamLimits

0x79ad,	// (0x00062241) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x0006a74b) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x0006a74b) list_tmo_note_info_pane_g

0x79c9,	// (0x0006225d) list_tmo_note_info_text_pane_ParamLimits

0x79c9,	// (0x0006225d) list_tmo_note_info_text_pane

0x7a4a,	// (0x000622de) list_tmo_link_pane

0x7a57,	// (0x000622eb) scroll_pane_cp20

0x7a64,	// (0x000622f8) list_single_tmo_link_pane_ParamLimits

0x7a64,	// (0x000622f8) list_single_tmo_link_pane

0x7a74,	// (0x00062308) list_single_tmo_link_pane_t1

0x7a82,	// (0x00062316) list_tmo_note_info_text_pane_t1_ParamLimits

0x7a82,	// (0x00062316) list_tmo_note_info_text_pane_t1

0xa08c,	// (0x00064920) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa08c,	// (0x00064920) aid_size_touch_scroll_bar_cp01

0x9f9f,	// (0x00064833) aid_size_touch_slider_marker

0x93cf,	// (0x00063c63) popup_settings_window_ParamLimits

0x93cf,	// (0x00063c63) popup_settings_window

0xde6c,	// (0x00068700) popup_candi_list_indi_window

0x21de,	// (0x0005ca72) aid_touch_navi_pane_ParamLimits

0x11eb,	// (0x0005ba7f) rs_clock_indi_pane

0x11f4,	// (0x0005ba88) sctrl_sk_bottom_pane_ParamLimits

0x1205,	// (0x0005ba99) sctrl_sk_top_pane_ParamLimits

0xb54d,	// (0x00065de1) popup_fep_tooltip_window

0x743d,	// (0x00061cd1) aid_size_cell_widget_grid_ParamLimits

0x74aa,	// (0x00061d3e) cell_ai5_widget_pane_g1_ParamLimits

0x74aa,	// (0x00061d3e) cell_ai5_widget_pane_g1

0x74fe,	// (0x00061d92) cell_ai5_widget_pane_g6_ParamLimits

0x750a,	// (0x00061d9e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x0006a6c9) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0006a6c9) cell_ai5_widget_pane_g

0x763c,	// (0x00061ed0) cell_ai5_widget_pane_t10_ParamLimits

0x763c,	// (0x00061ed0) cell_ai5_widget_pane_t10

0x765a,	// (0x00061eee) grid_ai5_widget_pane_ParamLimits

0x76f2,	// (0x00061f86) cell_contacts_ai5_widget_pane_ParamLimits

0x76f2,	// (0x00061f86) cell_contacts_ai5_widget_pane

0x78cc,	// (0x00062160) popup_discreet_window_t3_ParamLimits

0x78cc,	// (0x00062160) popup_discreet_window_t3

0xb988,	// (0x0006621c) popup_fshwr2_char_preview_window_ParamLimits

0xb988,	// (0x0006621c) popup_fshwr2_char_preview_window

0xeaed,	// (0x00069381) tmo_note_info_pane_t1

0xeb02,	// (0x00069396) tmo_note_info_pane_t2

0xeb19,	// (0x000693ad) tmo_note_info_pane_t3

0x7a26,	// (0x000622ba) tmo_note_info_pane_t4

0x7a38,	// (0x000622cc) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x0006a750) tmo_note_info_pane_t

0x7a4a,	// (0x000622de) list_tmo_link_pane_ParamLimits

0x7a57,	// (0x000622eb) scroll_pane_cp20_ParamLimits

0xeec9,	// (0x0006975d) bg_popup_fep_char_preview_window_cp01

0xeb2e,	// (0x000693c2) popup_fshwr2_char_preview_window_t1

0x7aa9,	// (0x0006233d) popup_candi_list_indi_window_g1

0x7ab2,	// (0x00062346) bg_cell_contacts_ai5_widget_pane

0x7abe,	// (0x00062352) cell_contacts_ai5_widget_pane_g1

0x54f5,	// (0x0005fd89) cell_contacts_ai5_widget_pane_g2

0x7ad3,	// (0x00062367) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x0006a75b) cell_contacts_ai5_widget_pane_g

0x7adf,	// (0x00062373) cell_contacts_ai5_widget_pane_t1

0x84ca,	// (0x00062d5e) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7b56,	// (0x000623ea) settings_container_pane

0x1e36,	// (0x0005c6ca) listscroll_set_pane_copy1

0x4539,	// (0x0005edcd) scroll_pane_cp121_copy1

0x2ad4,	// (0x0005d368) set_content_pane_copy1

0xeba1,	// (0x00069435) aid_height_set_list_copy1_ParamLimits

0xeba1,	// (0x00069435) aid_height_set_list_copy1

0x3a50,	// (0x0005e2e4) aid_size_parent_copy1_ParamLimits

0x3a50,	// (0x0005e2e4) aid_size_parent_copy1

0xebad,	// (0x00069441) button_value_adjust_pane_cp6_copy1_ParamLimits

0xebad,	// (0x00069441) button_value_adjust_pane_cp6_copy1

0x217c,	// (0x0005ca10) list_highlight_pane_cp2_copy1_ParamLimits

0x217c,	// (0x0005ca10) list_highlight_pane_cp2_copy1

0xebc1,	// (0x00069455) list_set_pane_copy1_ParamLimits

0xebc1,	// (0x00069455) list_set_pane_copy1

0xeb3c,	// (0x000693d0) main_pane_set_t1_copy1_ParamLimits

0xeb3c,	// (0x000693d0) main_pane_set_t1_copy1

0xeb76,	// (0x0006940a) main_pane_set_t2_copy1_ParamLimits

0xeb76,	// (0x0006940a) main_pane_set_t2_copy1

0xec6e,	// (0x00069502) main_pane_set_t3_copy1

0xec7c,	// (0x00069510) main_pane_set_t4_copy1

0xeb95,	// (0x00069429) set_content_pane_g1_copy1_ParamLimits

0xeb95,	// (0x00069429) set_content_pane_g1_copy1

0xec8a,	// (0x0006951e) setting_code_pane_copy1

0x7c53,	// (0x000624e7) setting_slider_graphic_pane_copy1

0x7c53,	// (0x000624e7) setting_slider_pane_copy1

0x7c53,	// (0x000624e7) setting_text_pane_copy1

0x7c53,	// (0x000624e7) setting_volume_pane_copy1

0xec8a,	// (0x0006951e) settings_code_pane_cp2_copy1

0xec92,	// (0x00069526) settings_code_pane_cp_copy1_ParamLimits

0xec92,	// (0x00069526) settings_code_pane_cp_copy1

0xba66,	// (0x000662fa) volume_set_pane_copy1

0xeca6,	// (0x0006953a) volume_set_pane_g10_copy1

0xecae,	// (0x00069542) volume_set_pane_g1_copy1

0xecb6,	// (0x0006954a) volume_set_pane_g2_copy1

0xecbe,	// (0x00069552) volume_set_pane_g3_copy1

0xecc6,	// (0x0006955a) volume_set_pane_g4_copy1

0xecce,	// (0x00069562) volume_set_pane_g5_copy1

0xecd6,	// (0x0006956a) volume_set_pane_g6_copy1

0xecde,	// (0x00069572) volume_set_pane_g7_copy1

0xece6,	// (0x0006957a) volume_set_pane_g8_copy1

0xecee,	// (0x00069582) volume_set_pane_g9_copy1

0x7f03,	// (0x00062797) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f03,	// (0x00062797) bg_set_opt_pane_cp_copy1

0xba6e,	// (0x00066302) setting_slider_pane_t1_copy1_ParamLimits

0xba6e,	// (0x00066302) setting_slider_pane_t1_copy1

0xba8c,	// (0x00066320) setting_slider_pane_t2_copy1_ParamLimits

0xba8c,	// (0x00066320) setting_slider_pane_t2_copy1

0xbaa6,	// (0x0006633a) setting_slider_pane_t3_copy1_ParamLimits

0xbaa6,	// (0x0006633a) setting_slider_pane_t3_copy1

0xbabe,	// (0x00066352) slider_set_pane_copy1_ParamLimits

0xbabe,	// (0x00066352) slider_set_pane_copy1

0x8516,	// (0x00062daa) set_opt_bg_pane_g1_copy2

0x851e,	// (0x00062db2) set_opt_bg_pane_g2_copy2

0x7cbf,	// (0x00062553) set_opt_bg_pane_g3_copy2

0x852e,	// (0x00062dc2) set_opt_bg_pane_g4_copy2

0x8536,	// (0x00062dca) set_opt_bg_pane_g5_copy2

0x853e,	// (0x00062dd2) set_opt_bg_pane_g6_copy2

0xecf6,	// (0x0006958a) set_opt_bg_pane_g7_copy2

0x7cd1,	// (0x00062565) set_opt_bg_pane_g8_copy2

0x7cdb,	// (0x0006256f) set_opt_bg_pane_g9_copy2

0xbad4,	// (0x00066368) aid_size_touch_slider_mark_copy1_ParamLimits

0xbad4,	// (0x00066368) aid_size_touch_slider_mark_copy1

0xecfe,	// (0x00069592) slider_set_pane_g1_copy1

0x1c16,	// (0x0005c4aa) slider_set_pane_g2_copy1

0xb16f,	// (0x00065a03) slider_set_pane_g3_copy1_ParamLimits

0xb16f,	// (0x00065a03) slider_set_pane_g3_copy1

0xb183,	// (0x00065a17) slider_set_pane_g4_copy1_ParamLimits

0xb183,	// (0x00065a17) slider_set_pane_g4_copy1

0xb19b,	// (0x00065a2f) slider_set_pane_g5_copy1_ParamLimits

0xb19b,	// (0x00065a2f) slider_set_pane_g5_copy1

0xb16f,	// (0x00065a03) slider_set_pane_g6_copy1_ParamLimits

0xb16f,	// (0x00065a03) slider_set_pane_g6_copy1

0xbae8,	// (0x0006637c) slider_set_pane_g7_copy1_ParamLimits

0xbae8,	// (0x0006637c) slider_set_pane_g7_copy1

0x7eb5,	// (0x00062749) bg_set_opt_pane_cp2_copy1

0xed07,	// (0x0006959b) setting_slider_graphic_pane_g1_copy1

0xed10,	// (0x000695a4) setting_slider_graphic_pane_t1_copy1

0xed20,	// (0x000695b4) setting_slider_graphic_pane_t2_copy1

0xed30,	// (0x000695c4) slider_set_pane_cp_copy1

0x7d27,	// (0x000625bb) input_focus_pane_cp1_copy1

0x7d30,	// (0x000625c4) list_set_text_pane_copy1

0x7d38,	// (0x000625cc) setting_text_pane_g1_copy1

0xed40,	// (0x000695d4) set_text_pane_t1_copy1

0x7d27,	// (0x000625bb) input_focus_pane_cp2_copy1

0x7d38,	// (0x000625cc) setting_code_pane_g1_copy1

0x7d41,	// (0x000625d5) setting_code_pane_t1_copy1

0x7d4f,	// (0x000625e3) list_set_graphic_pane_copy1

0x7eb5,	// (0x00062749) bg_set_opt_pane_cp4_copy1

0xddf5,	// (0x00068689) list_set_graphic_pane_g1_copy1_ParamLimits

0xddf5,	// (0x00068689) list_set_graphic_pane_g1_copy1

0x7d63,	// (0x000625f7) list_set_graphic_pane_g2_copy1

0xde0d,	// (0x000686a1) list_set_graphic_pane_t1_copy1_ParamLimits

0xde0d,	// (0x000686a1) list_set_graphic_pane_t1_copy1

0x4e30,	// (0x0005f6c4) rs_clock_indi_pane_g1

0x7d6b,	// (0x000625ff) rs_clock_indi_pane_t1

0x7d79,	// (0x0006260d) rs_indi_pane

0x7d81,	// (0x00062615) rs_indi_pane_g1

0x7d8a,	// (0x0006261e) rs_indi_pane_g2

0x7aa9,	// (0x0006233d) rs_indi_pane_g3

0x0002,

0xfece,	// (0x0006a762) rs_indi_pane_g

0x1e36,	// (0x0005c6ca) bg_popup_preview_window_pane_cp03

0x7d93,	// (0x00062627) popup_fep_tooltip_window_t1

0xd09b,	// (0x0006792f) popup_note2_window_g2_ParamLimits

0xd09b,	// (0x0006792f) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0006a502) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0006a502) popup_note2_window_g

0x5fcd,	// (0x00060861) bg_popup_sub_pane_cp11_ParamLimits

0x5fda,	// (0x0006086e) cell_ai3_links_pane_g1_ParamLimits

0x5ff1,	// (0x00060885) cell_ai3_links_pane_t1

0xed40,	// (0x000695d4) set_text_pane_t1_copy1_ParamLimits

0xf476,	// (0x00069d0a) cell_graphic_popup_pane_cp2_ParamLimits

0xf476,	// (0x00069d0a) cell_graphic_popup_pane_cp2

0xed5a,	// (0x000695ee) cell_graphic_popup_pane_g1_cp2

0x8191,	// (0x00062a25) cell_graphic_popup_pane_g2_cp2

0x7da9,	// (0x0006263d) cell_graphic_popup_pane_g3_cp2

0xed62,	// (0x000695f6) cell_graphic_popup_pane_t2_cp2

0x81a2,	// (0x00062a36) grid_highlight_pane_cp3_cp2

0x876e,	// (0x00063002) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84ca,	// (0x00062d5e) main_tmo_pane_ParamLimits

0xd462,	// (0x00067cf6) popup_tmo_big_image_note_window

0x7499,	// (0x00061d2d) cell_ai5_widget_list_pane

0x74a1,	// (0x00061d35) cell_ai5_widget_lrg_icon_pane

0xeaed,	// (0x00069381) tmo_note_info_pane_t1_ParamLimits

0xeb02,	// (0x00069396) tmo_note_info_pane_t2_ParamLimits

0xeb19,	// (0x000693ad) tmo_note_info_pane_t3_ParamLimits

0x7a26,	// (0x000622ba) tmo_note_info_pane_t4_ParamLimits

0x7a38,	// (0x000622cc) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x0006a750) tmo_note_info_pane_t_ParamLimits

0x7b56,	// (0x000623ea) settings_container_pane_ParamLimits

0xed38,	// (0x000695cc) indicator_popup_pane_cp5

0xed38,	// (0x000695cc) indicator_popup_pane_cp6

0x7d4f,	// (0x000625e3) list_set_graphic_pane_copy1_ParamLimits

0x7ea1,	// (0x00062735) bg_popup_window_pane_cp23

0x7dbf,	// (0x00062653) popup_tmo_big_image_note_window_g1

0x7dc8,	// (0x0006265c) popup_tmo_big_image_note_window_t1

0x7dd8,	// (0x0006266c) popup_tmo_big_image_note_window_t2

0x7de8,	// (0x0006267c) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x0006a769) popup_tmo_big_image_note_window_t

0x4e30,	// (0x0005f6c4) cell_ai5_widget_lrg_icon_pane_g1

0x7df8,	// (0x0006268c) cell_ai5_widget_lrg_icon_pane_t1

0x7e06,	// (0x0006269a) cell_ai5_widget_list_row_pane_ParamLimits

0x7e06,	// (0x0006269a) cell_ai5_widget_list_row_pane

0x7e1d,	// (0x000626b1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7e1d,	// (0x000626b1) cell_ai5_widget_list_row_pane_g1

0xed70,	// (0x00069604) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed70,	// (0x00069604) cell_ai5_widget_list_row_pane_t1

0x7e55,	// (0x000626e9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7e55,	// (0x000626e9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x0006a770) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x0006a770) cell_ai5_widget_list_row_pane_t

0xeec9,	// (0x0006975d) main_fep_vtchi_ss_pane

0x82a9,	// (0x00062b3d) popup_fep_char_pre_window

0x82b1,	// (0x00062b45) popup_fep_ituss_window

0xedb0,	// (0x00069644) popup_fep_vkbss_window

0xedbd,	// (0x00069651) grid_vkbss_keypad_pane_ParamLimits

0xedbd,	// (0x00069651) grid_vkbss_keypad_pane

0x8308,	// (0x00062b9c) ituss_keypad_pane

0x1c40,	// (0x0005c4d4) aid_vkbss_key_offset_ParamLimits

0x1c40,	// (0x0005c4d4) aid_vkbss_key_offset

0xbafe,	// (0x00066392) cell_vkbss_key_pane_ParamLimits

0xbafe,	// (0x00066392) cell_vkbss_key_pane

0x24f5,	// (0x0005cd89) bg_cell_vkbss_key_g1_ParamLimits

0x24f5,	// (0x0005cd89) bg_cell_vkbss_key_g1

0xedcd,	// (0x00069661) cell_vkbss_key_3p_pane_ParamLimits

0xedcd,	// (0x00069661) cell_vkbss_key_3p_pane

0xede7,	// (0x0006967b) cell_vkbss_key_g1_ParamLimits

0xede7,	// (0x0006967b) cell_vkbss_key_g1

0xee01,	// (0x00069695) cell_vkbss_key_t1_ParamLimits

0xee01,	// (0x00069695) cell_vkbss_key_t1

0x1c62,	// (0x0005c4f6) cell_ituss_key_pane_ParamLimits

0x1c62,	// (0x0005c4f6) cell_ituss_key_pane

0x836a,	// (0x00062bfe) bg_cell_ituss_key_g1_ParamLimits

0x836a,	// (0x00062bfe) bg_cell_ituss_key_g1

0x8376,	// (0x00062c0a) cell_ituss_key_pane_g1_ParamLimits

0x8376,	// (0x00062c0a) cell_ituss_key_pane_g1

0x1c73,	// (0x0005c507) cell_ituss_key_pane_g2_ParamLimits

0x1c73,	// (0x0005c507) cell_ituss_key_pane_g2

0x0002,

0xfee3,	// (0x0006a777) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x0006a777) cell_ituss_key_pane_g

0x1c9f,	// (0x0005c533) cell_ituss_key_t1_ParamLimits

0x1c9f,	// (0x0005c533) cell_ituss_key_t1

0x1cd9,	// (0x0005c56d) cell_ituss_key_t2_ParamLimits

0x1cd9,	// (0x0005c56d) cell_ituss_key_t2

0x1d0a,	// (0x0005c59e) cell_ituss_key_t3_ParamLimits

0x1d0a,	// (0x0005c59e) cell_ituss_key_t3

0x1cd9,	// (0x0005c56d) cell_ituss_key_t4_ParamLimits

0x1cd9,	// (0x0005c56d) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x0006a77e) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0006a77e) cell_ituss_key_t

0x839c,	// (0x00062c30) cell_vkbss_key_3p_pane_g1

0x83a4,	// (0x00062c38) cell_vkbss_key_3p_pane_g2

0x83ac,	// (0x00062c40) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x0006a789) cell_vkbss_key_3p_pane_g

0xeec9,	// (0x0006975d) bg_popup_fep_char_preview_window_cp02

0x1d4d,	// (0x0005c5e1) popup_fep_char_pre_window_t1

0xe989,	// (0x0006921d) main_ai5_sk_pane

0x7ab2,	// (0x00062346) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7abe,	// (0x00062352) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x54f5,	// (0x0005fd89) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7ad3,	// (0x00062367) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x0006a75b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7adf,	// (0x00062373) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84ca,	// (0x00062d5e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee2c,	// (0x000696c0) main_ai5_sk_pane_g1

0xc22b,	// (0x00066abf) popup_query_code_window_g1

0x82c7,	// (0x00062b5b) popup_fep_vkb_icf_pane

0x82e6,	// (0x00062b7a) popup_fep_vtchi_icf_pane

0x83bd,	// (0x00062c51) bg_icf_pane

0x83c9,	// (0x00062c5d) list_vkb_icf_pane

0x83d8,	// (0x00062c6c) bg_icf_pane_cp01

0x83eb,	// (0x00062c7f) vtchi_icf_list_pane

0x83fb,	// (0x00062c8f) list_vkb_icf_pane_t1_ParamLimits

0x83fb,	// (0x00062c8f) list_vkb_icf_pane_t1

0x8412,	// (0x00062ca6) vtchi_icf_list_pane_t1_ParamLimits

0x8412,	// (0x00062ca6) vtchi_icf_list_pane_t1

0x82b1,	// (0x00062b45) popup_fep_ituss_window_ParamLimits

0x82e6,	// (0x00062b7a) popup_fep_vtchi_icf_pane_ParamLimits

0x8308,	// (0x00062b9c) ituss_keypad_pane_ParamLimits

0x1c34,	// (0x0005c4c8) ituss_sks_pane

0x83bd,	// (0x00062c51) bg_icf_pane_ParamLimits

0xeda1,	// (0x00069635) icf_edit_indi_pane_ParamLimits

0xeda1,	// (0x00069635) icf_edit_indi_pane

0x83c9,	// (0x00062c5d) list_vkb_icf_pane_ParamLimits

0x83d8,	// (0x00062c6c) bg_icf_pane_cp01_ParamLimits

0x7e8c,	// (0x00062720) icf_edit_indi_pane_cp01_ParamLimits

0x7e8c,	// (0x00062720) icf_edit_indi_pane_cp01

0x83f3,	// (0x00062c87) vtchi_query_pane

0x50a0,	// (0x0005f934) icf_edit_indi_pane_g1_ParamLimits

0x50a0,	// (0x0005f934) icf_edit_indi_pane_g1

0x8487,	// (0x00062d1b) icf_edit_indi_pane_g2_ParamLimits

0x8487,	// (0x00062d1b) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x0006a7a1) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x0006a7a1) icf_edit_indi_pane_g

0x8496,	// (0x00062d2a) icf_edit_indi_pane_t1

0x8430,	// (0x00062cc4) bg_input_focus_pane_cp042

0x8205,	// (0x00062a99) vtchi_button_pane

0x8439,	// (0x00062ccd) vtchi_query_pane_t1

0x8447,	// (0x00062cdb) vtchi_query_pane_t2

0x8455,	// (0x00062ce9) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0006a790) vtchi_query_pane_t

0xeec9,	// (0x0006975d) bg_button_pane_cp13

0x8463,	// (0x00062cf7) vtchi_button_pane_g1

0x1d5c,	// (0x0005c5f0) ituss_sks_pane_g1

0x1d67,	// (0x0005c5fb) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0006a797) ituss_sks_pane_g

0x846b,	// (0x00062cff) ituss_sks_pane_t1

0x8479,	// (0x00062d0d) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0006a79c) ituss_sks_pane_t

0x48b3,	// (0x0005f147) indicator_nsta_pane_cp_g1

0x48bb,	// (0x0005f14f) indicator_nsta_pane_cp_g2

0x48c3,	// (0x0005f157) indicator_nsta_pane_cp_g3

0x48b3,	// (0x0005f147) indicator_nsta_pane_cp_g4

0x48bb,	// (0x0005f14f) indicator_nsta_pane_cp_g5

0x48c3,	// (0x0005f157) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0006a340) indicator_nsta_pane_cp_g

0xe766,	// (0x00068ffa) cell_graphic2_pane_t2_ParamLimits

0xe766,	// (0x00068ffa) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x0006a652) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x0006a652) cell_graphic2_pane_t

0xe79f,	// (0x00069033) cell_graphic2_control_pane_t1

0xa352,	// (0x00064be6) signal_pane_g3_ParamLimits

0xa352,	// (0x00064be6) signal_pane_g3

0xa366,	// (0x00064bfa) signal_pane_g4_ParamLimits

0xa366,	// (0x00064bfa) signal_pane_g4

0x7e67,	// (0x000626fb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7e67,	// (0x000626fb) cell_ai5_widget_list_row_pane_t3

0x838a,	// (0x00062c1e) cell_ituss_key_pane_t1_ParamLimits

0x838a,	// (0x00062c1e) cell_ituss_key_pane_t1

0x27a3,	// (0x0005d037) form_field_data_wide_pane_vc_t2_ParamLimits

0x27a3,	// (0x0005d037) form_field_data_wide_pane_vc_t2

0x27b7,	// (0x0005d04b) form_field_data_wide_pane_vc_t3_ParamLimits

0x27b7,	// (0x0005d04b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x0006a08c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x0006a08c) form_field_data_wide_pane_vc_t

0x457b,	// (0x0005ee0f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x457b,	// (0x0005ee0f) form_field_slider_wide_pane_vc_t3

0x4659,	// (0x0005eeed) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4659,	// (0x0005eeed) form_field_popup_wide_pane_vc_t2

0x4670,	// (0x0005ef04) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4670,	// (0x0005ef04) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0006a32f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0006a32f) form_field_popup_wide_pane_vc_t

0xb903,	// (0x00066197) aid_fshwr2_btn_pane_ParamLimits

0xb915,	// (0x000661a9) aid_fshwr2_syb_pane_ParamLimits

0xb927,	// (0x000661bb) aid_fshwr2_txt_pane_ParamLimits

0x1290,	// (0x0005bb24) fshwr2_bg_pane_ParamLimits

0xb936,	// (0x000661ca) fshwr2_func_candi_pane_ParamLimits

0xb955,	// (0x000661e9) fshwr2_hwr_syb_pane_ParamLimits

0xb970,	// (0x00066204) fshwr2_icf_pane_ParamLimits

0x3cf8,	// (0x0005e58c) list_double_graphic_pane_vc_g4_ParamLimits

0x3cf8,	// (0x0005e58c) list_double_graphic_pane_vc_g4

0x1c93,	// (0x0005c527) cell_ituss_key_pane_g3_ParamLimits

0x1c93,	// (0x0005c527) cell_ituss_key_pane_g3

0x1d3b,	// (0x0005c5cf) cell_ituss_key_t5_ParamLimits

0x1d3b,	// (0x0005c5cf) cell_ituss_key_t5

0xedb0,	// (0x00069644) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

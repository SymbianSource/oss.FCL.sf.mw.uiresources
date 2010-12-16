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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000346 };

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
0xb63a,	// (0x0000b980) Screen

0xb646,	// (0x0000b98c) application_window_ParamLimits

0xb646,	// (0x0000b98c) application_window

0xf307,	// (0x0000f64d) screen_g1

0xb67e,	// (0x0000b9c4) area_bottom_pane_ParamLimits

0xb67e,	// (0x0000b9c4) area_bottom_pane

0xf380,	// (0x0000f6c6) area_top_pane_ParamLimits

0xf380,	// (0x0000f6c6) area_top_pane

0xf414,	// (0x0000f75a) main_pane_ParamLimits

0xf414,	// (0x0000f75a) main_pane

0xf4cf,	// (0x0000f815) misc_graphics

0xcbed,	// (0x0000cf33) battery_pane_ParamLimits

0xcbed,	// (0x0000cf33) battery_pane

0x3e31,	// (0x00004177) bg_status_flat_pane_g8

0x3e39,	// (0x0000417f) bg_status_flat_pane_g9

0x2f8a,	// (0x000032d0) context_pane_ParamLimits

0x2f8a,	// (0x000032d0) context_pane

0xcd58,	// (0x0000d09e) navi_pane_ParamLimits

0xcd58,	// (0x0000d09e) navi_pane

0xcdd6,	// (0x0000d11c) signal_pane_ParamLimits

0xcdd6,	// (0x0000d11c) signal_pane

0x0008,

0xf841,	// (0x0000fb87) bg_status_flat_pane_g

0xce66,	// (0x0000d1ac) status_pane_g1_ParamLimits

0xce66,	// (0x0000d1ac) status_pane_g1

0xce7c,	// (0x0000d1c2) status_pane_g2_ParamLimits

0xce7c,	// (0x0000d1c2) status_pane_g2

0x31b1,	// (0x000034f7) status_pane_g3_ParamLimits

0x31b1,	// (0x000034f7) status_pane_g3

0x0004,

0xf774,	// (0x0000faba) status_pane_g_ParamLimits

0xf774,	// (0x0000faba) status_pane_g

0xce88,	// (0x0000d1ce) title_pane_ParamLimits

0xce88,	// (0x0000d1ce) title_pane

0xcee9,	// (0x0000d22f) uni_indicator_pane_ParamLimits

0xcee9,	// (0x0000d22f) uni_indicator_pane

0x2827,	// (0x00002b6d) bg_list_pane_ParamLimits

0x2827,	// (0x00002b6d) bg_list_pane

0x2847,	// (0x00002b8d) find_pane

0x3578,	// (0x000038be) listscroll_app_pane_ParamLimits

0x3578,	// (0x000038be) listscroll_app_pane

0x285b,	// (0x00002ba1) listscroll_form_pane

0x2863,	// (0x00002ba9) listscroll_gen_pane_ParamLimits

0x2863,	// (0x00002ba9) listscroll_gen_pane

0x2877,	// (0x00002bbd) listscroll_set_pane

0x4be0,	// (0x00004f26) main_idle_act_pane

0x2300,	// (0x00002646) main_idle_trad_pane

0x2300,	// (0x00002646) main_list_empty_pane

0x284f,	// (0x00002b95) main_midp_pane

0x2891,	// (0x00002bd7) main_pane_g1_ParamLimits

0x2891,	// (0x00002bd7) main_pane_g1

0xc4ba,	// (0x0000c800) popup_ai_message_window_ParamLimits

0xc4ba,	// (0x0000c800) popup_ai_message_window

0xc54b,	// (0x0000c891) popup_fep_china_uni_window_ParamLimits

0xc54b,	// (0x0000c891) popup_fep_china_uni_window

0x29a9,	// (0x00002cef) popup_fep_japan_candidate_window_ParamLimits

0x29a9,	// (0x00002cef) popup_fep_japan_candidate_window

0x29c9,	// (0x00002d0f) popup_fep_japan_predictive_window_ParamLimits

0x29c9,	// (0x00002d0f) popup_fep_japan_predictive_window

0xc5a7,	// (0x0000c8ed) popup_find_window

0xc5c4,	// (0x0000c90a) popup_grid_graphic_window_ParamLimits

0xc5c4,	// (0x0000c90a) popup_grid_graphic_window

0x2a32,	// (0x00002d78) popup_large_graphic_colour_window

0xc668,	// (0x0000c9ae) popup_menu_window_ParamLimits

0xc668,	// (0x0000c9ae) popup_menu_window

0xc83a,	// (0x0000cb80) popup_note_image_window

0xc800,	// (0x0000cb46) popup_note_wait_window_ParamLimits

0xc800,	// (0x0000cb46) popup_note_wait_window

0xc852,	// (0x0000cb98) popup_note_window_ParamLimits

0xc852,	// (0x0000cb98) popup_note_window

0xc8f8,	// (0x0000cc3e) popup_query_code_window_ParamLimits

0xc8f8,	// (0x0000cc3e) popup_query_code_window

0x2c7a,	// (0x00002fc0) popup_query_data_code_window_ParamLimits

0x2c7a,	// (0x00002fc0) popup_query_data_code_window

0xc932,	// (0x0000cc78) popup_query_data_window_ParamLimits

0xc932,	// (0x0000cc78) popup_query_data_window

0xc9b4,	// (0x0000ccfa) popup_query_sat_info_window_ParamLimits

0xc9b4,	// (0x0000ccfa) popup_query_sat_info_window

0xca4b,	// (0x0000cd91) popup_snote_single_graphic_window_ParamLimits

0xca4b,	// (0x0000cd91) popup_snote_single_graphic_window

0xca4b,	// (0x0000cd91) popup_snote_single_text_window_ParamLimits

0xca4b,	// (0x0000cd91) popup_snote_single_text_window

0x2d01,	// (0x00003047) popup_sub_window_general

0x2e31,	// (0x00003177) popup_window_general_ParamLimits

0x2e31,	// (0x00003177) popup_window_general

0x2e46,	// (0x0000318c) power_save_pane

0xc314,	// (0x0000c65a) control_pane_g1_ParamLimits

0xc314,	// (0x0000c65a) control_pane_g1

0xc33d,	// (0x0000c683) control_pane_g2_ParamLimits

0xc33d,	// (0x0000c683) control_pane_g2

0x26be,	// (0x00002a04) control_pane_g3_ParamLimits

0x26be,	// (0x00002a04) control_pane_g3

0x0007,

0xf75c,	// (0x0000faa2) control_pane_g_ParamLimits

0xf75c,	// (0x0000faa2) control_pane_g

0xc3a5,	// (0x0000c6eb) control_pane_t1_ParamLimits

0xc3a5,	// (0x0000c6eb) control_pane_t1

0xc40d,	// (0x0000c753) control_pane_t2_ParamLimits

0xc40d,	// (0x0000c753) control_pane_t2

0x0002,

0xf76d,	// (0x0000fab3) control_pane_t_ParamLimits

0xf76d,	// (0x0000fab3) control_pane_t

0x2595,	// (0x000028db) navi_navi_volume_pane_cp1

0x259d,	// (0x000028e3) status_small_icon_pane

0x25a5,	// (0x000028eb) status_small_pane_g1_ParamLimits

0x25a5,	// (0x000028eb) status_small_pane_g1

0x25d9,	// (0x0000291f) status_small_pane_g2_ParamLimits

0x25d9,	// (0x0000291f) status_small_pane_g2

0x25e5,	// (0x0000292b) status_small_pane_g3_ParamLimits

0x25e5,	// (0x0000292b) status_small_pane_g3

0xc2dc,	// (0x0000c622) status_small_pane_g4_ParamLimits

0xc2dc,	// (0x0000c622) status_small_pane_g4

0xc2ea,	// (0x0000c630) status_small_pane_g5_ParamLimits

0xc2ea,	// (0x0000c630) status_small_pane_g5

0x260b,	// (0x00002951) status_small_pane_g6_ParamLimits

0x260b,	// (0x00002951) status_small_pane_g6

0x0007,

0xf74b,	// (0x0000fa91) status_small_pane_g_ParamLimits

0xf74b,	// (0x0000fa91) status_small_pane_g

0x263a,	// (0x00002980) status_small_pane_t1

0xc300,	// (0x0000c646) status_small_wait_pane_ParamLimits

0xc300,	// (0x0000c646) status_small_wait_pane

0xc16c,	// (0x0000c4b2) aid_levels_signal_ParamLimits

0xc16c,	// (0x0000c4b2) aid_levels_signal

0xc184,	// (0x0000c4ca) signal_pane_g1_ParamLimits

0xc184,	// (0x0000c4ca) signal_pane_g1

0xc19f,	// (0x0000c4e5) signal_pane_g2_ParamLimits

0xc19f,	// (0x0000c4e5) signal_pane_g2

0x0003,

0xf6dc,	// (0x0000fa22) signal_pane_g_ParamLimits

0xf6dc,	// (0x0000fa22) signal_pane_g

0x1bae,	// (0x00001ef4) context_pane_g1

0xb81a,	// (0x0000bb60) title_pane_g1

0xb851,	// (0x0000bb97) title_pane_t1

0x018f,	// (0x000004d5) title_pane_t2

0x01b5,	// (0x000004fb) title_pane_t3

0x0002,

0xf530,	// (0x0000f876) title_pane_t

0xcf11,	// (0x0000d257) aid_levels_battery_ParamLimits

0xcf11,	// (0x0000d257) aid_levels_battery

0xcf2d,	// (0x0000d273) battery_pane_g1_ParamLimits

0xcf2d,	// (0x0000d273) battery_pane_g1

0xcf4a,	// (0x0000d290) battery_pane_g2_ParamLimits

0xcf4a,	// (0x0000d290) battery_pane_g2

0x0001,

0xf77f,	// (0x0000fac5) battery_pane_g_ParamLimits

0xf77f,	// (0x0000fac5) battery_pane_g

0xd193,	// (0x0000d4d9) uni_indicator_pane_g1

0xd1a9,	// (0x0000d4ef) uni_indicator_pane_g2

0xd1bf,	// (0x0000d505) uni_indicator_pane_g3

0x0005,

0xf8e9,	// (0x0000fc2f) uni_indicator_pane_g

0x2171,	// (0x000024b7) navi_icon_pane_ParamLimits

0x2171,	// (0x000024b7) navi_icon_pane

0x20ba,	// (0x00002400) navi_midp_pane

0x218d,	// (0x000024d3) navi_navi_pane

0x2197,	// (0x000024dd) navi_text_pane_ParamLimits

0x2197,	// (0x000024dd) navi_text_pane

0xf307,	// (0x0000f64d) status_small_wait_pane_g1

0x06b5,	// (0x000009fb) status_small_wait_pane_g2

0x0001,

0xf8e4,	// (0x0000fc2a) status_small_wait_pane_g

0x45f0,	// (0x00004936) navi_navi_icon_text_pane

0x45f8,	// (0x0000493e) navi_navi_pane_g1_ParamLimits

0x45f8,	// (0x0000493e) navi_navi_pane_g1

0x460a,	// (0x00004950) navi_navi_pane_g2_ParamLimits

0x460a,	// (0x00004950) navi_navi_pane_g2

0x0001,

0xf8b2,	// (0x0000fbf8) navi_navi_pane_g_ParamLimits

0xf8b2,	// (0x0000fbf8) navi_navi_pane_g

0x461c,	// (0x00004962) navi_navi_tabs_pane

0x4625,	// (0x0000496b) navi_navi_text_pane

0x45f0,	// (0x00004936) navi_navi_volume_pane

0x45cc,	// (0x00004912) navi_text_pane_t1

0x45c0,	// (0x00004906) navi_icon_pane_g1

0x4513,	// (0x00004859) navi_navi_text_pane_t1

0x4502,	// (0x00004848) navi_navi_volume_pane_g1

0x450a,	// (0x00004850) volume_small_pane

0x4468,	// (0x000047ae) navi_navi_icon_text_pane_g1

0x4470,	// (0x000047b6) navi_navi_icon_text_pane_t1

0x218d,	// (0x000024d3) navi_tabs_2_long_pane

0x218d,	// (0x000024d3) navi_tabs_2_pane

0x218d,	// (0x000024d3) navi_tabs_3_long_pane

0x218d,	// (0x000024d3) navi_tabs_3_pane

0x218d,	// (0x000024d3) navi_tabs_4_pane

0x43c7,	// (0x0000470d) tabs_2_active_pane_ParamLimits

0x43c7,	// (0x0000470d) tabs_2_active_pane

0x43d7,	// (0x0000471d) tabs_2_passive_pane_ParamLimits

0x43d7,	// (0x0000471d) tabs_2_passive_pane

0x4395,	// (0x000046db) tabs_3_active_pane_ParamLimits

0x4395,	// (0x000046db) tabs_3_active_pane

0x43a5,	// (0x000046eb) tabs_3_passive_pane_ParamLimits

0x43a5,	// (0x000046eb) tabs_3_passive_pane

0x43b6,	// (0x000046fc) tabs_3_passive_pane_cp_ParamLimits

0x43b6,	// (0x000046fc) tabs_3_passive_pane_cp

0x4351,	// (0x00004697) tabs_4_active_pane_ParamLimits

0x4351,	// (0x00004697) tabs_4_active_pane

0x4362,	// (0x000046a8) tabs_4_passive_pane_ParamLimits

0x4362,	// (0x000046a8) tabs_4_passive_pane

0x4373,	// (0x000046b9) tabs_4_passive_pane_cp_ParamLimits

0x4373,	// (0x000046b9) tabs_4_passive_pane_cp

0x4384,	// (0x000046ca) tabs_4_passive_pane_cp2_ParamLimits

0x4384,	// (0x000046ca) tabs_4_passive_pane_cp2

0x432d,	// (0x00004673) tabs_2_long_active_pane_ParamLimits

0x432d,	// (0x00004673) tabs_2_long_active_pane

0x433f,	// (0x00004685) tabs_2_long_passive_pane_ParamLimits

0x433f,	// (0x00004685) tabs_2_long_passive_pane

0x42ee,	// (0x00004634) tabs_3_long_active_pane_ParamLimits

0x42ee,	// (0x00004634) tabs_3_long_active_pane

0x4301,	// (0x00004647) tabs_3_long_passive_pane_ParamLimits

0x4301,	// (0x00004647) tabs_3_long_passive_pane

0x431a,	// (0x00004660) tabs_3_long_passive_pane_cp_ParamLimits

0x431a,	// (0x00004660) tabs_3_long_passive_pane_cp

0x4294,	// (0x000045da) volume_small_pane_g1

0x429d,	// (0x000045e3) volume_small_pane_g2

0x42a6,	// (0x000045ec) volume_small_pane_g3

0x42af,	// (0x000045f5) volume_small_pane_g4

0x42b8,	// (0x000045fe) volume_small_pane_g5

0x42c1,	// (0x00004607) volume_small_pane_g6

0x42ca,	// (0x00004610) volume_small_pane_g7

0x42d3,	// (0x00004619) volume_small_pane_g8

0x42dc,	// (0x00004622) volume_small_pane_g9

0x42e5,	// (0x0000462b) volume_small_pane_g10

0x0009,

0xf87e,	// (0x0000fbc4) volume_small_pane_g

0x04ed,	// (0x00000833) bg_active_tab_pane_cp2_ParamLimits

0x04ed,	// (0x00000833) bg_active_tab_pane_cp2

0x01d5,	// (0x0000051b) tabs_3_active_pane_g1

0xb8dd,	// (0x0000bc23) tabs_3_active_pane_t1

0x04ed,	// (0x00000833) bg_passive_tab_pane_cp2_ParamLimits

0x04ed,	// (0x00000833) bg_passive_tab_pane_cp2

0x01d5,	// (0x0000051b) tabs_3_passive_pane_g1

0xb8dd,	// (0x0000bc23) tabs_3_passive_pane_t1

0x04ed,	// (0x00000833) bg_active_tab_pane_cp3_ParamLimits

0x04ed,	// (0x00000833) bg_active_tab_pane_cp3

0x01ef,	// (0x00000535) tabs_4_active_pane_g1

0xb8ef,	// (0x0000bc35) tabs_4_active_pane_t1

0x04ed,	// (0x00000833) bg_passive_tab_pane_cp3_ParamLimits

0x04ed,	// (0x00000833) bg_passive_tab_pane_cp3

0x01ef,	// (0x00000535) tabs_4_1_passive_pane_g1

0xb8ef,	// (0x0000bc35) tabs_4_1_passive_pane_t1

0x284f,	// (0x00002b95) list_highlight_pane_cp2

0xd245,	// (0x0000d58b) list_set_pane_ParamLimits

0xd245,	// (0x0000d58b) list_set_pane

0xd2df,	// (0x0000d625) main_pane_set_t1_ParamLimits

0xd2df,	// (0x0000d625) main_pane_set_t1

0xd2ff,	// (0x0000d645) main_pane_set_t2_ParamLimits

0xd2ff,	// (0x0000d645) main_pane_set_t2

0xd313,	// (0x0000d659) main_pane_set_t3_ParamLimits

0xd313,	// (0x0000d659) main_pane_set_t3

0xd325,	// (0x0000d66b) main_pane_set_t4_ParamLimits

0xd325,	// (0x0000d66b) main_pane_set_t4

0x0003,

0xf94e,	// (0x0000fc94) main_pane_set_t_ParamLimits

0xf94e,	// (0x0000fc94) main_pane_set_t

0xd337,	// (0x0000d67d) setting_code_pane

0xd341,	// (0x0000d687) setting_slider_graphic_pane

0xd341,	// (0x0000d687) setting_slider_pane

0xd341,	// (0x0000d687) setting_text_pane

0xd341,	// (0x0000d687) setting_volume_pane

0x0209,	// (0x0000054f) volume_set_pane

0x01c7,	// (0x0000050d) bg_set_opt_pane_cp

0x0211,	// (0x00000557) setting_slider_pane_t1

0x022a,	// (0x00000570) setting_slider_pane_t2

0x0244,	// (0x0000058a) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0000f87d) setting_slider_pane_t

0x025c,	// (0x000005a2) slider_set_pane

0xf4cf,	// (0x0000f815) bg_set_opt_pane_cp2

0x0272,	// (0x000005b8) setting_slider_graphic_pane_g1

0x027b,	// (0x000005c1) setting_slider_graphic_pane_t1

0x028b,	// (0x000005d1) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0000f884) setting_slider_graphic_pane_t

0x029b,	// (0x000005e1) slider_set_pane_cp

0xf4cf,	// (0x0000f815) input_focus_pane_cp1

0x4bc7,	// (0x00004f0d) list_set_text_pane

0xf307,	// (0x0000f64d) setting_text_pane_g1

0xf4cf,	// (0x0000f815) input_focus_pane_cp2

0xf307,	// (0x0000f64d) setting_code_pane_g1

0x02a3,	// (0x000005e9) setting_code_pane_t1

0x02b1,	// (0x000005f7) set_text_pane_t1_ParamLimits

0x02b1,	// (0x000005f7) set_text_pane_t1

0x1185,	// (0x000014cb) set_opt_bg_pane_g1

0x118d,	// (0x000014d3) set_opt_bg_pane_g2

0x4ba1,	// (0x00004ee7) set_opt_bg_pane_g3

0x119d,	// (0x000014e3) set_opt_bg_pane_g4

0x11a5,	// (0x000014eb) set_opt_bg_pane_g5

0x11ad,	// (0x000014f3) set_opt_bg_pane_g6

0x4bab,	// (0x00004ef1) set_opt_bg_pane_g7

0x4bb3,	// (0x00004ef9) set_opt_bg_pane_g8

0x4bbd,	// (0x00004f03) set_opt_bg_pane_g9

0x0008,

0xf93b,	// (0x0000fc81) set_opt_bg_pane_g

0x4b30,	// (0x00004e76) slider_set_pane_g1

0x4b3d,	// (0x00004e83) slider_set_pane_g2

0x0006,

0xf92c,	// (0x0000fc72) slider_set_pane_g

0x49d6,	// (0x00004d1c) volume_set_pane_g1

0x49de,	// (0x00004d24) volume_set_pane_g2

0x49e6,	// (0x00004d2c) volume_set_pane_g3

0x49ee,	// (0x00004d34) volume_set_pane_g4

0x49f6,	// (0x00004d3c) volume_set_pane_g5

0x49fe,	// (0x00004d44) volume_set_pane_g6

0x4a06,	// (0x00004d4c) volume_set_pane_g7

0x4a0e,	// (0x00004d54) volume_set_pane_g8

0x4a16,	// (0x00004d5c) volume_set_pane_g9

0x4a1e,	// (0x00004d64) volume_set_pane_g10

0x0009,

0xf904,	// (0x0000fc4a) volume_set_pane_g

0xb901,	// (0x0000bc47) indicator_pane_ParamLimits

0xb901,	// (0x0000bc47) indicator_pane

0xb929,	// (0x0000bc6f) main_idle_pane_g2_ParamLimits

0xb929,	// (0x0000bc6f) main_idle_pane_g2

0xb961,	// (0x0000bca7) main_pane_idle_g1_ParamLimits

0xb961,	// (0x0000bca7) main_pane_idle_g1

0x030c,	// (0x00000652) popup_clock_digital_analogue_window_ParamLimits

0x030c,	// (0x00000652) popup_clock_digital_analogue_window

0xb988,	// (0x0000bcce) soft_indicator_pane_ParamLimits

0xb988,	// (0x0000bcce) soft_indicator_pane

0xb9a2,	// (0x0000bce8) wallpaper_pane_ParamLimits

0xb9a2,	// (0x0000bce8) wallpaper_pane

0xf307,	// (0x0000f64d) wallpaper_pane_g1

0xb9b4,	// (0x0000bcfa) indicator_pane_g1_ParamLimits

0xb9b4,	// (0x0000bcfa) indicator_pane_g1

0x5145,	// (0x0000548b) navi_navi_icon_text_pane_srt_g1

0x035e,	// (0x000006a4) soft_indicator_pane_t1

0x0378,	// (0x000006be) aid_ps_area_pane

0xb9ca,	// (0x0000bd10) aid_ps_clock_pane

0x0397,	// (0x000006dd) aid_ps_indicator_pane

0x03a3,	// (0x000006e9) indicator_ps_pane_ParamLimits

0x03a3,	// (0x000006e9) indicator_ps_pane

0x03b2,	// (0x000006f8) power_save_pane_g1_ParamLimits

0x03b2,	// (0x000006f8) power_save_pane_g1

0x03be,	// (0x00000704) power_save_pane_g2_ParamLimits

0x03be,	// (0x00000704) power_save_pane_g2

0xf311,	// (0x0000f657) aid_navinavi_width_pane

0x0378,	// (0x000006be) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0000f889) power_save_pane_g_ParamLimits

0xf543,	// (0x0000f889) power_save_pane_g

0x03cc,	// (0x00000712) power_save_pane_t1_ParamLimits

0x03cc,	// (0x00000712) power_save_pane_t1

0xb9ca,	// (0x0000bd10) aid_ps_clock_pane_ParamLimits

0x0397,	// (0x000006dd) aid_ps_indicator_pane_ParamLimits

0x03de,	// (0x00000724) power_save_pane_t4_ParamLimits

0x03de,	// (0x00000724) power_save_pane_t4

0x0001,

0xf548,	// (0x0000f88e) power_save_pane_t_ParamLimits

0xf548,	// (0x0000f88e) power_save_pane_t

0x0408,	// (0x0000074e) power_save_t3_ParamLimits

0x0408,	// (0x0000074e) power_save_t3

0x03f3,	// (0x00000739) power_save_t2_ParamLimits

0x03f3,	// (0x00000739) power_save_t2

0x041d,	// (0x00000763) indicator_ps_pane_g1

0xb9d8,	// (0x0000bd1e) ai_gene_pane_ParamLimits

0xb9d8,	// (0x0000bd1e) ai_gene_pane

0xb9ef,	// (0x0000bd35) ai_links_pane_ParamLimits

0xb9ef,	// (0x0000bd35) ai_links_pane

0xba07,	// (0x0000bd4d) indicator_pane_cp1_ParamLimits

0xba07,	// (0x0000bd4d) indicator_pane_cp1

0xba16,	// (0x0000bd5c) main_pane_idle_g1_cp_ParamLimits

0xba16,	// (0x0000bd5c) main_pane_idle_g1_cp

0x0456,	// (0x0000079c) popup_ai_links_title_window

0xba2e,	// (0x0000bd74) soft_indicator_pane_cp1_ParamLimits

0xba2e,	// (0x0000bd74) soft_indicator_pane_cp1

0x48b9,	// (0x00004bff) ai_links_pane_g1

0x48c2,	// (0x00004c08) grid_ai_links_pane

0xd18a,	// (0x0000d4d0) ai_gene_pane_1

0x48a7,	// (0x00004bed) ai_gene_pane_2

0x48b0,	// (0x00004bf6) list_highlight_pane_cp4

0xd166,	// (0x0000d4ac) cell_ai_link_pane_ParamLimits

0xd166,	// (0x0000d4ac) cell_ai_link_pane

0x4878,	// (0x00004bbe) cell_ai_link_pane_g1

0x06b5,	// (0x000009fb) cell_ai_link_pane_g2

0x0001,

0xf8df,	// (0x0000fc25) cell_ai_link_pane_g

0xf4cf,	// (0x0000f815) grid_highlight_cp2

0xf4cf,	// (0x0000f815) bg_popup_sub_pane_cp1

0x0479,	// (0x000007bf) popup_ai_links_title_window_t1

0x47c6,	// (0x00004b0c) ai_gene_pane_1_g1_ParamLimits

0x47c6,	// (0x00004b0c) ai_gene_pane_1_g1

0x47d2,	// (0x00004b18) ai_gene_pane_1_g2_ParamLimits

0x47d2,	// (0x00004b18) ai_gene_pane_1_g2

0x0001,

0xf8d5,	// (0x0000fc1b) ai_gene_pane_1_g_ParamLimits

0xf8d5,	// (0x0000fc1b) ai_gene_pane_1_g

0x47df,	// (0x00004b25) ai_gene_pane_1_t1_ParamLimits

0x47df,	// (0x00004b25) ai_gene_pane_1_t1

0x4813,	// (0x00004b59) grid_ai_soft_ind_pane

0x47b1,	// (0x00004af7) ai_gene_pane_2_t1_ParamLimits

0x47b1,	// (0x00004af7) ai_gene_pane_2_t1

0xba42,	// (0x0000bd88) main_pane_empty_t1_ParamLimits

0xba42,	// (0x0000bd88) main_pane_empty_t1

0xba5a,	// (0x0000bda0) main_pane_empty_t2_ParamLimits

0xba5a,	// (0x0000bda0) main_pane_empty_t2

0xba6f,	// (0x0000bdb5) main_pane_empty_t3_ParamLimits

0xba6f,	// (0x0000bdb5) main_pane_empty_t3

0xba81,	// (0x0000bdc7) main_pane_empty_t4_ParamLimits

0xba81,	// (0x0000bdc7) main_pane_empty_t4

0xba93,	// (0x0000bdd9) main_pane_empty_t5_ParamLimits

0xba93,	// (0x0000bdd9) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0000f893) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0000f893) main_pane_empty_t

0x12f8,	// (0x0000163e) bg_popup_window_pane_ParamLimits

0x12f8,	// (0x0000163e) bg_popup_window_pane

0x4521,	// (0x00004867) find_popup_pane_cp2_ParamLimits

0x4521,	// (0x00004867) find_popup_pane_cp2

0x452d,	// (0x00004873) heading_pane_ParamLimits

0x452d,	// (0x00004873) heading_pane

0xf4cf,	// (0x0000f815) bg_popup_sub_pane

0xd0e7,	// (0x0000d42d) bg_popup_window_pane_g1_ParamLimits

0xd0e7,	// (0x0000d42d) bg_popup_window_pane_g1

0xd0f6,	// (0x0000d43c) bg_popup_window_pane_g2_ParamLimits

0xd0f6,	// (0x0000d43c) bg_popup_window_pane_g2

0xd102,	// (0x0000d448) bg_popup_window_pane_g3_ParamLimits

0xd102,	// (0x0000d448) bg_popup_window_pane_g3

0xd10e,	// (0x0000d454) bg_popup_window_pane_g4_ParamLimits

0xd10e,	// (0x0000d454) bg_popup_window_pane_g4

0xd11d,	// (0x0000d463) bg_popup_window_pane_g5_ParamLimits

0xd11d,	// (0x0000d463) bg_popup_window_pane_g5

0xd12d,	// (0x0000d473) bg_popup_window_pane_g6_ParamLimits

0xd12d,	// (0x0000d473) bg_popup_window_pane_g6

0xd139,	// (0x0000d47f) bg_popup_window_pane_g7_ParamLimits

0xd139,	// (0x0000d47f) bg_popup_window_pane_g7

0xd148,	// (0x0000d48e) bg_popup_window_pane_g8_ParamLimits

0xd148,	// (0x0000d48e) bg_popup_window_pane_g8

0xd157,	// (0x0000d49d) bg_popup_window_pane_g9_ParamLimits

0xd157,	// (0x0000d49d) bg_popup_window_pane_g9

0x44f6,	// (0x0000483c) bg_popup_window_pane_g10_ParamLimits

0x44f6,	// (0x0000483c) bg_popup_window_pane_g10

0x0009,

0xf89d,	// (0x0000fbe3) bg_popup_window_pane_g_ParamLimits

0xf89d,	// (0x0000fbe3) bg_popup_window_pane_g

0x441f,	// (0x00004765) bg_popup_heading_pane_ParamLimits

0x441f,	// (0x00004765) bg_popup_heading_pane

0x5088,	// (0x000053ce) tabs_4_passive_pane_cp_srt_ParamLimits

0x5088,	// (0x000053ce) tabs_4_passive_pane_cp_srt

0x509a,	// (0x000053e0) tabs_4_passive_pane_srt_ParamLimits

0x4433,	// (0x00004779) heading_pane_g2

0x509a,	// (0x000053e0) tabs_4_passive_pane_srt

0x3578,	// (0x000038be) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3578,	// (0x000038be) bg_passive_tab_pane_cp3_srt

0x443b,	// (0x00004781) heading_pane_t1_ParamLimits

0x443b,	// (0x00004781) heading_pane_t1

0x4452,	// (0x00004798) heading_pane_t2_ParamLimits

0x4452,	// (0x00004798) heading_pane_t2

0x0001,

0xf898,	// (0x0000fbde) heading_pane_t_ParamLimits

0xf898,	// (0x0000fbde) heading_pane_t

0x3df9,	// (0x0000413f) bg_popup_heading_pane_g1

0x3ea8,	// (0x000041ee) bg_popup_heading_pane_g2

0x3eb2,	// (0x000041f8) bg_popup_heading_pane_g3

0x3ebc,	// (0x00004202) bg_popup_heading_pane_g4

0x3ec6,	// (0x0000420c) bg_popup_heading_pane_g5

0x3ed0,	// (0x00004216) bg_popup_heading_pane_g6

0x3ed8,	// (0x0000421e) bg_popup_heading_pane_g7

0x3ee0,	// (0x00004226) bg_popup_heading_pane_g8

0x3eea,	// (0x00004230) bg_popup_heading_pane_g9

0x0008,

0xf854,	// (0x0000fb9a) bg_popup_heading_pane_g

0x33ca,	// (0x00003710) bg_popup_sub_pane_g1

0x33d2,	// (0x00003718) bg_popup_sub_pane_g2

0x33da,	// (0x00003720) bg_popup_sub_pane_g3

0x33e2,	// (0x00003728) bg_popup_sub_pane_g4

0x33ea,	// (0x00003730) bg_popup_sub_pane_g5

0x33f2,	// (0x00003738) bg_popup_sub_pane_g6

0x33fa,	// (0x00003740) bg_popup_sub_pane_g7

0x3402,	// (0x00003748) bg_popup_sub_pane_g8

0x340a,	// (0x00003750) bg_popup_sub_pane_g9

0x0008,

0xf82e,	// (0x0000fb74) bg_popup_sub_pane_g

0x04ed,	// (0x00000833) bg_popup_window_pane_cp5_ParamLimits

0x04ed,	// (0x00000833) bg_popup_window_pane_cp5

0x0509,	// (0x0000084f) popup_note_window_g1_ParamLimits

0x0509,	// (0x0000084f) popup_note_window_g1

0x0515,	// (0x0000085b) popup_note_window_t1_ParamLimits

0x0515,	// (0x0000085b) popup_note_window_t1

0x052b,	// (0x00000871) popup_note_window_t2_ParamLimits

0x052b,	// (0x00000871) popup_note_window_t2

0x0541,	// (0x00000887) popup_note_window_t3_ParamLimits

0x0541,	// (0x00000887) popup_note_window_t3

0x0557,	// (0x0000089d) popup_note_window_t4_ParamLimits

0x0557,	// (0x0000089d) popup_note_window_t4

0x057f,	// (0x000008c5) popup_note_window_t5_ParamLimits

0x057f,	// (0x000008c5) popup_note_window_t5

0x0004,

0xf558,	// (0x0000f89e) popup_note_window_t_ParamLimits

0xf558,	// (0x0000f89e) popup_note_window_t

0x05c9,	// (0x0000090f) bg_popup_window_pane_cp6_ParamLimits

0x05c9,	// (0x0000090f) bg_popup_window_pane_cp6

0x3d75,	// (0x000040bb) popup_note_image_window_g1_ParamLimits

0x3d75,	// (0x000040bb) popup_note_image_window_g1

0x3d81,	// (0x000040c7) popup_note_image_window_g2_ParamLimits

0x3d81,	// (0x000040c7) popup_note_image_window_g2

0x0001,

0xf822,	// (0x0000fb68) popup_note_image_window_g_ParamLimits

0xf822,	// (0x0000fb68) popup_note_image_window_g

0x3d9a,	// (0x000040e0) popup_note_image_window_t1_ParamLimits

0x3d9a,	// (0x000040e0) popup_note_image_window_t1

0x3db3,	// (0x000040f9) popup_note_image_window_t2_ParamLimits

0x3db3,	// (0x000040f9) popup_note_image_window_t2

0x3dcc,	// (0x00004112) popup_note_image_window_t3_ParamLimits

0x3dcc,	// (0x00004112) popup_note_image_window_t3

0x0002,

0xf827,	// (0x0000fb6d) popup_note_image_window_t_ParamLimits

0xf827,	// (0x0000fb6d) popup_note_image_window_t

0x3c36,	// (0x00003f7c) bg_popup_window_pane_cp7_ParamLimits

0x3c36,	// (0x00003f7c) bg_popup_window_pane_cp7

0x3c66,	// (0x00003fac) popup_note_wait_window_g1_ParamLimits

0x3c66,	// (0x00003fac) popup_note_wait_window_g1

0x3c72,	// (0x00003fb8) popup_note_wait_window_g2_ParamLimits

0x3c72,	// (0x00003fb8) popup_note_wait_window_g2

0x0002,

0xf810,	// (0x0000fb56) popup_note_wait_window_g_ParamLimits

0xf810,	// (0x0000fb56) popup_note_wait_window_g

0x3c8a,	// (0x00003fd0) popup_note_wait_window_t1_ParamLimits

0x3c8a,	// (0x00003fd0) popup_note_wait_window_t1

0x3cb1,	// (0x00003ff7) popup_note_wait_window_t2_ParamLimits

0x3cb1,	// (0x00003ff7) popup_note_wait_window_t2

0x3cce,	// (0x00004014) popup_note_wait_window_t3_ParamLimits

0x3cce,	// (0x00004014) popup_note_wait_window_t3

0x3ce1,	// (0x00004027) popup_note_wait_window_t4_ParamLimits

0x3ce1,	// (0x00004027) popup_note_wait_window_t4

0x0004,

0xf817,	// (0x0000fb5d) popup_note_wait_window_t_ParamLimits

0xf817,	// (0x0000fb5d) popup_note_wait_window_t

0x3d06,	// (0x0000404c) wait_bar_pane_ParamLimits

0x3d06,	// (0x0000404c) wait_bar_pane

0xf4cf,	// (0x0000f815) wait_anim_pane

0xf4cf,	// (0x0000f815) wait_border_pane

0xf307,	// (0x0000f64d) wait_anim_pane_g1

0xf307,	// (0x0000f64d) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x0000fa1d) wait_anim_pane_g

0x3bda,	// (0x00003f20) wait_border_pane_g1

0x3be5,	// (0x00003f2b) wait_border_pane_g2

0x3bee,	// (0x00003f34) wait_border_pane_g3

0x0002,

0xf809,	// (0x0000fb4f) wait_border_pane_g

0x3a45,	// (0x00003d8b) bg_popup_window_pane_cp16_ParamLimits

0x3a45,	// (0x00003d8b) bg_popup_window_pane_cp16

0x3b45,	// (0x00003e8b) indicator_popup_pane_cp4_ParamLimits

0x3b45,	// (0x00003e8b) indicator_popup_pane_cp4

0x3b59,	// (0x00003e9f) popup_query_data_window_t1_ParamLimits

0x3b59,	// (0x00003e9f) popup_query_data_window_t1

0x3b6b,	// (0x00003eb1) popup_query_data_window_t2_ParamLimits

0x3b6b,	// (0x00003eb1) popup_query_data_window_t2

0x3b84,	// (0x00003eca) popup_query_data_window_t3_ParamLimits

0x3b84,	// (0x00003eca) popup_query_data_window_t3

0x0002,

0xf802,	// (0x0000fb48) popup_query_data_window_t_ParamLimits

0xf802,	// (0x0000fb48) popup_query_data_window_t

0x3b9e,	// (0x00003ee4) query_popup_data_pane_ParamLimits

0x3b9e,	// (0x00003ee4) query_popup_data_pane

0x3bb2,	// (0x00003ef8) query_popup_data_pane_cp1_ParamLimits

0x3bb2,	// (0x00003ef8) query_popup_data_pane_cp1

0x3a45,	// (0x00003d8b) bg_popup_window_pane_cp10_ParamLimits

0x3a45,	// (0x00003d8b) bg_popup_window_pane_cp10

0x3a77,	// (0x00003dbd) indicator_popup_pane_ParamLimits

0x3a77,	// (0x00003dbd) indicator_popup_pane

0x3a99,	// (0x00003ddf) popup_query_code_window_t1_ParamLimits

0x3a99,	// (0x00003ddf) popup_query_code_window_t1

0x3ab3,	// (0x00003df9) popup_query_code_window_t2_ParamLimits

0x3ab3,	// (0x00003df9) popup_query_code_window_t2

0x3afc,	// (0x00003e42) popup_query_code_window_t3_ParamLimits

0x3afc,	// (0x00003e42) popup_query_code_window_t3

0x0002,

0xf7fb,	// (0x0000fb41) popup_query_code_window_t_ParamLimits

0xf7fb,	// (0x0000fb41) popup_query_code_window_t

0x3b2b,	// (0x00003e71) query_popup_pane_ParamLimits

0x3b2b,	// (0x00003e71) query_popup_pane

0x05c9,	// (0x0000090f) bg_popup_window_pane_cp15_ParamLimits

0x05c9,	// (0x0000090f) bg_popup_window_pane_cp15

0x05e7,	// (0x0000092d) indicator_popup_pane_cp1_ParamLimits

0x05e7,	// (0x0000092d) indicator_popup_pane_cp1

0x05fa,	// (0x00000940) indicator_popup_pane_cp2_ParamLimits

0x05fa,	// (0x00000940) indicator_popup_pane_cp2

0x060d,	// (0x00000953) popup_query_data_code_window_g1_ParamLimits

0x060d,	// (0x00000953) popup_query_data_code_window_g1

0x0620,	// (0x00000966) popup_query_data_code_window_t1_ParamLimits

0x0620,	// (0x00000966) popup_query_data_code_window_t1

0x0632,	// (0x00000978) popup_query_data_code_window_t2_ParamLimits

0x0632,	// (0x00000978) popup_query_data_code_window_t2

0x0644,	// (0x0000098a) popup_query_data_code_window_t3_ParamLimits

0x0644,	// (0x0000098a) popup_query_data_code_window_t3

0x065a,	// (0x000009a0) popup_query_data_code_window_t4_ParamLimits

0x065a,	// (0x000009a0) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0000f8a9) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0000f8a9) popup_query_data_code_window_t

0x3437,	// (0x0000377d) list_single_midp_graphic_pane_g3

0x0672,	// (0x000009b8) query_popup_data_pane_cp2_ParamLimits

0x0685,	// (0x000009cb) query_popup_pane_cp2_ParamLimits

0x0685,	// (0x000009cb) query_popup_pane_cp2

0xf4cf,	// (0x0000f815) bg_popup_window_pane_cp11

0x3a29,	// (0x00003d6f) heading_pane_cp5

0x3a31,	// (0x00003d77) listscroll_popup_info_pane

0xf4cf,	// (0x0000f815) input_focus_pane_cp3

0x0698,	// (0x000009de) query_popup_pane_t1

0x06a6,	// (0x000009ec) list_popup_info_pane_ParamLimits

0x06a6,	// (0x000009ec) list_popup_info_pane

0x06b5,	// (0x000009fb) listscroll_popup_info_pane_g1

0x06bd,	// (0x00000a03) scroll_pane_cp7

0x06c7,	// (0x00000a0d) popup_info_list_pane_t1_ParamLimits

0x06c7,	// (0x00000a0d) popup_info_list_pane_t1

0x06e1,	// (0x00000a27) popup_info_list_pane_t2_ParamLimits

0x06e1,	// (0x00000a27) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0000f8b2) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0000f8b2) popup_info_list_pane_t

0xf4cf,	// (0x0000f815) bg_popup_window_pane_cp12

0x517c,	// (0x000054c2) find_popup_pane

0x01c7,	// (0x0000050d) bg_popup_window_pane_cp3

0x06fb,	// (0x00000a41) heading_pane_cp3

0x070a,	// (0x00000a50) listscroll_popup_graphic_pane

0xf4cf,	// (0x0000f815) bg_popup_window_pane_cp4

0xbaf5,	// (0x0000be3b) heading_pane_cp4

0x0774,	// (0x00000aba) listscroll_popup_colour_pane

0xbaff,	// (0x0000be45) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbaff,	// (0x0000be45) cell_large_graphic_colour_none_popup_pane

0xbb13,	// (0x0000be59) grid_large_graphic_colour_popup_pane_ParamLimits

0xbb13,	// (0x0000be59) grid_large_graphic_colour_popup_pane

0xbb37,	// (0x0000be7d) listscroll_popup_colour_pane_g1_ParamLimits

0xbb37,	// (0x0000be7d) listscroll_popup_colour_pane_g1

0xbb4e,	// (0x0000be94) listscroll_popup_colour_pane_g2_ParamLimits

0xbb4e,	// (0x0000be94) listscroll_popup_colour_pane_g2

0xbb62,	// (0x0000bea8) listscroll_popup_colour_pane_g3_ParamLimits

0xbb62,	// (0x0000bea8) listscroll_popup_colour_pane_g3

0xbb72,	// (0x0000beb8) listscroll_popup_colour_pane_g4_ParamLimits

0xbb72,	// (0x0000beb8) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0000f8b7) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0000f8b7) listscroll_popup_colour_pane_g

0x0802,	// (0x00000b48) scroll_pane_cp6_ParamLimits

0x0802,	// (0x00000b48) scroll_pane_cp6

0xbb82,	// (0x0000bec8) cell_large_graphic_colour_popup_pane_ParamLimits

0xbb82,	// (0x0000bec8) cell_large_graphic_colour_popup_pane

0x0833,	// (0x00000b79) cell_large_graphic_colour_none_popup_pane_t1

0xf4cf,	// (0x0000f815) grid_highlight_pane_cp5

0x0842,	// (0x00000b88) cell_large_graphic_colour_popup_pane_g1

0x084a,	// (0x00000b90) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0000f8c0) cell_large_graphic_colour_popup_pane_g

0x0852,	// (0x00000b98) cell_large_graphic_colour_popup_pane_g2_copy1

0x085b,	// (0x00000ba1) grid_highlight_pane_cp4

0x0863,	// (0x00000ba9) bg_popup_window_pane_cp8_ParamLimits

0x0863,	// (0x00000ba9) bg_popup_window_pane_cp8

0x087e,	// (0x00000bc4) popup_snote_single_text_window_g1_ParamLimits

0x087e,	// (0x00000bc4) popup_snote_single_text_window_g1

0x0890,	// (0x00000bd6) popup_snote_single_text_window_t1_ParamLimits

0x0890,	// (0x00000bd6) popup_snote_single_text_window_t1

0x08a3,	// (0x00000be9) popup_snote_single_text_window_t2_ParamLimits

0x08a3,	// (0x00000be9) popup_snote_single_text_window_t2

0x08b6,	// (0x00000bfc) popup_snote_single_text_window_t3_ParamLimits

0x08b6,	// (0x00000bfc) popup_snote_single_text_window_t3

0x08ef,	// (0x00000c35) popup_snote_single_text_window_t4_ParamLimits

0x08ef,	// (0x00000c35) popup_snote_single_text_window_t4

0x0923,	// (0x00000c69) popup_snote_single_text_window_t5_ParamLimits

0x0923,	// (0x00000c69) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0000f8c5) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0000f8c5) popup_snote_single_text_window_t

0x0952,	// (0x00000c98) bg_popup_window_pane_cp9_ParamLimits

0x0952,	// (0x00000c98) bg_popup_window_pane_cp9

0x087e,	// (0x00000bc4) popup_snote_single_graphic_window_g1_ParamLimits

0x087e,	// (0x00000bc4) popup_snote_single_graphic_window_g1

0x0960,	// (0x00000ca6) popup_snote_single_graphic_window_g2_ParamLimits

0x0960,	// (0x00000ca6) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0000f8d0) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0000f8d0) popup_snote_single_graphic_window_g

0x096c,	// (0x00000cb2) popup_snote_single_graphic_window_t1_ParamLimits

0x096c,	// (0x00000cb2) popup_snote_single_graphic_window_t1

0x097f,	// (0x00000cc5) popup_snote_single_graphic_window_t2_ParamLimits

0x097f,	// (0x00000cc5) popup_snote_single_graphic_window_t2

0x0992,	// (0x00000cd8) popup_snote_single_graphic_window_t3_ParamLimits

0x0992,	// (0x00000cd8) popup_snote_single_graphic_window_t3

0x09cb,	// (0x00000d11) popup_snote_single_graphic_window_t4_ParamLimits

0x09cb,	// (0x00000d11) popup_snote_single_graphic_window_t4

0x09ff,	// (0x00000d45) popup_snote_single_graphic_window_t5_ParamLimits

0x09ff,	// (0x00000d45) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0000f8d5) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0000f8d5) popup_snote_single_graphic_window_t

0x5006,	// (0x0000534c) grid_graphic_popup_pane_ParamLimits

0x5006,	// (0x0000534c) grid_graphic_popup_pane

0x5030,	// (0x00005376) listscroll_popup_graphic_pane_g1_ParamLimits

0x5030,	// (0x00005376) listscroll_popup_graphic_pane_g1

0xd47a,	// (0x0000d7c0) listscroll_popup_graphic_pane_g2_ParamLimits

0xd47a,	// (0x0000d7c0) listscroll_popup_graphic_pane_g2

0x0001,

0xf978,	// (0x0000fcbe) listscroll_popup_graphic_pane_g_ParamLimits

0xf978,	// (0x0000fcbe) listscroll_popup_graphic_pane_g

0x5058,	// (0x0000539e) scroll_pane_cp5

0xd435,	// (0x0000d77b) cell_graphic_popup_pane_ParamLimits

0xd435,	// (0x0000d77b) cell_graphic_popup_pane

0x4f75,	// (0x000052bb) cell_graphic_popup_pane_g1

0x4f7d,	// (0x000052c3) cell_graphic_popup_pane_g2

0x0852,	// (0x00000b98) cell_graphic_popup_pane_g3

0x0002,

0xf971,	// (0x0000fcb7) cell_graphic_popup_pane_g

0x4f86,	// (0x000052cc) cell_graphic_popup_pane_t2

0x085b,	// (0x00000ba1) grid_highlight_pane_cp3

0x0a40,	// (0x00000d86) list_gen_pane_ParamLimits

0x0a40,	// (0x00000d86) list_gen_pane

0x0a72,	// (0x00000db8) scroll_pane

0xd3ec,	// (0x0000d732) bg_list_pane_g1_ParamLimits

0xd3ec,	// (0x0000d732) bg_list_pane_g1

0x4eea,	// (0x00005230) bg_list_pane_g2_ParamLimits

0x4eea,	// (0x00005230) bg_list_pane_g2

0x4eff,	// (0x00005245) bg_list_pane_g3_ParamLimits

0x4eff,	// (0x00005245) bg_list_pane_g3

0x4f13,	// (0x00005259) bg_list_pane_g4_ParamLimits

0x4f13,	// (0x00005259) bg_list_pane_g4

0xd409,	// (0x0000d74f) bg_list_pane_g5_ParamLimits

0xd409,	// (0x0000d74f) bg_list_pane_g5

0x0004,

0xf966,	// (0x0000fcac) bg_list_pane_g_ParamLimits

0xf966,	// (0x0000fcac) bg_list_pane_g

0xd390,	// (0x0000d6d6) list_double2_graphic_large_graphic_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double2_graphic_large_graphic_pane

0xd390,	// (0x0000d6d6) list_double2_graphic_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double2_graphic_pane

0xd390,	// (0x0000d6d6) list_double2_large_graphic_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double2_large_graphic_pane

0xd390,	// (0x0000d6d6) list_double2_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double2_pane

0xd390,	// (0x0000d6d6) list_double_graphic_heading_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double_graphic_heading_pane

0xd390,	// (0x0000d6d6) list_double_graphic_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double_graphic_pane

0xd390,	// (0x0000d6d6) list_double_heading_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double_heading_pane

0xd390,	// (0x0000d6d6) list_double_large_graphic_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double_large_graphic_pane

0xd390,	// (0x0000d6d6) list_double_number_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double_number_pane

0xd390,	// (0x0000d6d6) list_double_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double_pane

0xd390,	// (0x0000d6d6) list_double_time_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_double_time_pane

0xd390,	// (0x0000d6d6) list_setting_number_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_setting_number_pane

0xd390,	// (0x0000d6d6) list_setting_pane_ParamLimits

0xd390,	// (0x0000d6d6) list_setting_pane

0xd3a2,	// (0x0000d6e8) list_single_2graphic_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_2graphic_pane

0xd3a2,	// (0x0000d6e8) list_single_graphic_heading_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_graphic_heading_pane

0xd3a2,	// (0x0000d6e8) list_single_graphic_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_graphic_pane

0xd3a2,	// (0x0000d6e8) list_single_heading_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_heading_pane

0xd3a2,	// (0x0000d6e8) list_single_large_graphic_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_large_graphic_pane

0xd3a2,	// (0x0000d6e8) list_single_number_heading_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_number_heading_pane

0xd3a2,	// (0x0000d6e8) list_single_number_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_number_pane

0xd3a2,	// (0x0000d6e8) list_single_pane_ParamLimits

0xd3a2,	// (0x0000d6e8) list_single_pane

0xf4cf,	// (0x0000f815) list_highlight_pane_cp1

0x0ab2,	// (0x00000df8) list_single_pane_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_single_pane_g1

0x0abe,	// (0x00000e04) list_single_pane_g2_ParamLimits

0x0abe,	// (0x00000e04) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_single_pane_g

0x4d84,	// (0x000050ca) list_single_pane_t1_ParamLimits

0x4d84,	// (0x000050ca) list_single_pane_t1

0x0ab2,	// (0x00000df8) list_single_number_pane_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_single_number_pane_g1

0x0abe,	// (0x00000e04) list_single_number_pane_g2_ParamLimits

0x0abe,	// (0x00000e04) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_single_number_pane_g

0x3358,	// (0x0000369e) list_single_number_pane_t1_ParamLimits

0x3358,	// (0x0000369e) list_single_number_pane_t1

0x4aae,	// (0x00004df4) list_single_number_pane_t2_ParamLimits

0x4aae,	// (0x00004df4) list_single_number_pane_t2

0x0001,

0xf927,	// (0x0000fc6d) list_single_number_pane_t_ParamLimits

0xf927,	// (0x0000fc6d) list_single_number_pane_t

0x0aa6,	// (0x00000dec) list_single_graphic_pane_g1_ParamLimits

0x0aa6,	// (0x00000dec) list_single_graphic_pane_g1

0x0ab2,	// (0x00000df8) list_single_graphic_pane_g2_ParamLimits

0x0ab2,	// (0x00000df8) list_single_graphic_pane_g2

0x0abe,	// (0x00000e04) list_single_graphic_pane_g3_ParamLimits

0x0abe,	// (0x00000e04) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0000f8e0) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0000f8e0) list_single_graphic_pane_g

0x0aca,	// (0x00000e10) list_single_graphic_pane_t1_ParamLimits

0x0aca,	// (0x00000e10) list_single_graphic_pane_t1

0x0ab2,	// (0x00000df8) list_single_heading_pane_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_single_heading_pane_g1

0x0abe,	// (0x00000e04) list_single_heading_pane_g2_ParamLimits

0x0abe,	// (0x00000e04) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_single_heading_pane_g

0x0ae0,	// (0x00000e26) list_single_heading_pane_t1_ParamLimits

0x0ae0,	// (0x00000e26) list_single_heading_pane_t1

0x0af6,	// (0x00000e3c) list_single_heading_pane_t2_ParamLimits

0x0af6,	// (0x00000e3c) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0000f8ec) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0000f8ec) list_single_heading_pane_t

0x0ab2,	// (0x00000df8) list_single_number_heading_pane_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_single_number_heading_pane_g1

0x0abe,	// (0x00000e04) list_single_number_heading_pane_g2_ParamLimits

0x0abe,	// (0x00000e04) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_single_number_heading_pane_g

0x0ae0,	// (0x00000e26) list_single_number_heading_pane_t1_ParamLimits

0x0ae0,	// (0x00000e26) list_single_number_heading_pane_t1

0x0b08,	// (0x00000e4e) list_single_number_heading_pane_t2_ParamLimits

0x0b08,	// (0x00000e4e) list_single_number_heading_pane_t2

0x0b1a,	// (0x00000e60) list_single_number_heading_pane_t3_ParamLimits

0x0b1a,	// (0x00000e60) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0000f8f1) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0000f8f1) list_single_number_heading_pane_t

0x0b2c,	// (0x00000e72) list_single_graphic_heading_pane_g1_ParamLimits

0x0b2c,	// (0x00000e72) list_single_graphic_heading_pane_g1

0xbbab,	// (0x0000bef1) list_single_graphic_heading_pane_g4_ParamLimits

0xbbab,	// (0x0000bef1) list_single_graphic_heading_pane_g4

0x0abe,	// (0x00000e04) list_single_graphic_heading_pane_g5_ParamLimits

0x0abe,	// (0x00000e04) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0000f8f8) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0000f8f8) list_single_graphic_heading_pane_g

0x0ae0,	// (0x00000e26) list_single_graphic_heading_pane_t1_ParamLimits

0x0ae0,	// (0x00000e26) list_single_graphic_heading_pane_t1

0x0b49,	// (0x00000e8f) list_single_graphic_heading_pane_t2_ParamLimits

0x0b49,	// (0x00000e8f) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0000f8ff) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0000f8ff) list_single_graphic_heading_pane_t

0x5767,	// (0x00005aad) list_single_large_graphic_pane_g1_ParamLimits

0x5767,	// (0x00005aad) list_single_large_graphic_pane_g1

0x0ab2,	// (0x00000df8) list_single_large_graphic_pane_g2_ParamLimits

0x0ab2,	// (0x00000df8) list_single_large_graphic_pane_g2

0x0abe,	// (0x00000e04) list_single_large_graphic_pane_g3_ParamLimits

0x0abe,	// (0x00000e04) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0000f904) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0000f904) list_single_large_graphic_pane_g

0x3be5,	// (0x00003f2b) wait_border_pane_g2_copy1

0xbbbc,	// (0x0000bf02) list_single_large_graphic_pane_g4_cp2

0x5773,	// (0x00005ab9) list_single_large_graphic_pane_t1_ParamLimits

0x5773,	// (0x00005ab9) list_single_large_graphic_pane_t1

0x0cab,	// (0x00000ff1) list_double_pane_g1_ParamLimits

0x0cab,	// (0x00000ff1) list_double_pane_g1

0x0bd6,	// (0x00000f1c) list_double_pane_g2_ParamLimits

0x0bd6,	// (0x00000f1c) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0000f90b) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0000f90b) list_double_pane_g

0x0be2,	// (0x00000f28) list_double_pane_t1_ParamLimits

0x0be2,	// (0x00000f28) list_double_pane_t1

0xbbc4,	// (0x0000bf0a) list_double_pane_t2_ParamLimits

0xbbc4,	// (0x0000bf0a) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0000f910) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0000f910) list_double_pane_t

0xbbd6,	// (0x0000bf1c) list_double2_pane_g1_ParamLimits

0xbbd6,	// (0x0000bf1c) list_double2_pane_g1

0xbbe7,	// (0x0000bf2d) list_double2_pane_g2_ParamLimits

0xbbe7,	// (0x0000bf2d) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0000f915) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0000f915) list_double2_pane_g

0xbbf3,	// (0x0000bf39) list_double2_pane_t1_ParamLimits

0xbbf3,	// (0x0000bf39) list_double2_pane_t1

0x0dc7,	// (0x0000110d) list_double2_pane_t2_ParamLimits

0x0dc7,	// (0x0000110d) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0000f91a) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0000f91a) list_double2_pane_t

0x0cab,	// (0x00000ff1) list_double_number_pane_g1_ParamLimits

0x0cab,	// (0x00000ff1) list_double_number_pane_g1

0x0bd6,	// (0x00000f1c) list_double_number_pane_g2_ParamLimits

0x0bd6,	// (0x00000f1c) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0000f90b) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0000f90b) list_double_number_pane_g

0xbc09,	// (0x0000bf4f) list_double_number_pane_t1_ParamLimits

0xbc09,	// (0x0000bf4f) list_double_number_pane_t1

0x0cb7,	// (0x00000ffd) list_double_number_pane_t2_ParamLimits

0x0cb7,	// (0x00000ffd) list_double_number_pane_t2

0xbc1b,	// (0x0000bf61) list_double_number_pane_t3_ParamLimits

0xbc1b,	// (0x0000bf61) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0000f91f) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0000f91f) list_double_number_pane_t

0x0c9f,	// (0x00000fe5) list_double_graphic_pane_g1_ParamLimits

0x0c9f,	// (0x00000fe5) list_double_graphic_pane_g1

0xbc2d,	// (0x0000bf73) list_double_graphic_pane_g2_ParamLimits

0xbc2d,	// (0x0000bf73) list_double_graphic_pane_g2

0xbc3c,	// (0x0000bf82) list_double_graphic_pane_g3_ParamLimits

0xbc3c,	// (0x0000bf82) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0000f926) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0000f926) list_double_graphic_pane_g

0xbc54,	// (0x0000bf9a) list_double_graphic_pane_t1_ParamLimits

0xbc54,	// (0x0000bf9a) list_double_graphic_pane_t1

0xbc6a,	// (0x0000bfb0) list_double_graphic_pane_t2_ParamLimits

0xbc6a,	// (0x0000bfb0) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x0000f92f) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x0000f92f) list_double_graphic_pane_t

0xbc7c,	// (0x0000bfc2) list_double2_graphic_pane_g1_ParamLimits

0xbc7c,	// (0x0000bfc2) list_double2_graphic_pane_g1

0x107c,	// (0x000013c2) list_double2_graphic_pane_g2_ParamLimits

0x107c,	// (0x000013c2) list_double2_graphic_pane_g2

0xbbe7,	// (0x0000bf2d) list_double2_graphic_pane_g3_ParamLimits

0xbbe7,	// (0x0000bf2d) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0000f934) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0000f934) list_double2_graphic_pane_g

0xbc88,	// (0x0000bfce) list_double2_graphic_pane_t1_ParamLimits

0xbc88,	// (0x0000bfce) list_double2_graphic_pane_t1

0x0def,	// (0x00001135) list_double2_graphic_pane_t2_ParamLimits

0x0def,	// (0x00001135) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0000f93b) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0000f93b) list_double2_graphic_pane_t

0xbc9e,	// (0x0000bfe4) list_double_large_graphic_pane_g1_ParamLimits

0xbc9e,	// (0x0000bfe4) list_double_large_graphic_pane_g1

0xbcbd,	// (0x0000c003) list_double_large_graphic_pane_g2_ParamLimits

0xbcbd,	// (0x0000c003) list_double_large_graphic_pane_g2

0x0bd6,	// (0x00000f1c) list_double_large_graphic_pane_g3_ParamLimits

0x0bd6,	// (0x00000f1c) list_double_large_graphic_pane_g3

0xbcce,	// (0x0000c014) list_double_large_graphic_pane_g4_ParamLimits

0xbcce,	// (0x0000c014) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0000f940) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0000f940) list_double_large_graphic_pane_g

0xbce1,	// (0x0000c027) list_double_large_graphic_pane_t1_ParamLimits

0xbce1,	// (0x0000c027) list_double_large_graphic_pane_t1

0xbcfa,	// (0x0000c040) list_double_large_graphic_pane_t2_ParamLimits

0xbcfa,	// (0x0000c040) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0000f94b) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0000f94b) list_double_large_graphic_pane_t

0xbd0c,	// (0x0000c052) list_double2_large_graphic_pane_g1_ParamLimits

0xbd0c,	// (0x0000c052) list_double2_large_graphic_pane_g1

0xbbd6,	// (0x0000bf1c) list_double2_large_graphic_pane_g2_ParamLimits

0xbbd6,	// (0x0000bf1c) list_double2_large_graphic_pane_g2

0xbbe7,	// (0x0000bf2d) list_double2_large_graphic_pane_g3_ParamLimits

0xbbe7,	// (0x0000bf2d) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0000f950) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0000f950) list_double2_large_graphic_pane_g

0xbd18,	// (0x0000c05e) list_double2_large_graphic_pane_t1_ParamLimits

0xbd18,	// (0x0000c05e) list_double2_large_graphic_pane_t1

0xbd2e,	// (0x0000c074) list_double2_large_graphic_pane_t2_ParamLimits

0xbd2e,	// (0x0000c074) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0000f957) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0000f957) list_double2_large_graphic_pane_t

0xbd40,	// (0x0000c086) list_double_heading_pane_g1_ParamLimits

0xbd40,	// (0x0000c086) list_double_heading_pane_g1

0xbd51,	// (0x0000c097) list_double_heading_pane_g2_ParamLimits

0xbd51,	// (0x0000c097) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0000f95c) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0000f95c) list_double_heading_pane_g

0xbd5d,	// (0x0000c0a3) list_double_heading_pane_t1_ParamLimits

0xbd5d,	// (0x0000c0a3) list_double_heading_pane_t1

0xbd73,	// (0x0000c0b9) list_double_heading_pane_t2_ParamLimits

0xbd73,	// (0x0000c0b9) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0000f961) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0000f961) list_double_heading_pane_t

0x0c44,	// (0x00000f8a) list_double_graphic_heading_pane_g1_ParamLimits

0x0c44,	// (0x00000f8a) list_double_graphic_heading_pane_g1

0xbd40,	// (0x0000c086) list_double_graphic_heading_pane_g2_ParamLimits

0xbd40,	// (0x0000c086) list_double_graphic_heading_pane_g2

0xbd51,	// (0x0000c097) list_double_graphic_heading_pane_g3_ParamLimits

0xbd51,	// (0x0000c097) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0000f966) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0000f966) list_double_graphic_heading_pane_g

0xbd85,	// (0x0000c0cb) list_double_graphic_heading_pane_t1_ParamLimits

0xbd85,	// (0x0000c0cb) list_double_graphic_heading_pane_t1

0xbd9b,	// (0x0000c0e1) list_double_graphic_heading_pane_t2_ParamLimits

0xbd9b,	// (0x0000c0e1) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0000f96d) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0000f96d) list_double_graphic_heading_pane_t

0xbcbd,	// (0x0000c003) list_double_time_pane_g1_ParamLimits

0xbcbd,	// (0x0000c003) list_double_time_pane_g1

0x0bd6,	// (0x00000f1c) list_double_time_pane_g2_ParamLimits

0x0bd6,	// (0x00000f1c) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x0000f972) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x0000f972) list_double_time_pane_g

0xbdad,	// (0x0000c0f3) list_double_time_pane_t1_ParamLimits

0xbdad,	// (0x0000c0f3) list_double_time_pane_t1

0xbdc3,	// (0x0000c109) list_double_time_pane_t2_ParamLimits

0xbdc3,	// (0x0000c109) list_double_time_pane_t2

0xbdd5,	// (0x0000c11b) list_double_time_pane_t3_ParamLimits

0xbdd5,	// (0x0000c11b) list_double_time_pane_t3

0xbde7,	// (0x0000c12d) list_double_time_pane_t4_ParamLimits

0xbde7,	// (0x0000c12d) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0000f977) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0000f977) list_double_time_pane_t

0x107c,	// (0x000013c2) list_setting_pane_g1_ParamLimits

0x107c,	// (0x000013c2) list_setting_pane_g1

0xbbe7,	// (0x0000bf2d) list_setting_pane_g2_ParamLimits

0xbbe7,	// (0x0000bf2d) list_setting_pane_g2

0x0001,

0xf63a,	// (0x0000f980) list_setting_pane_g_ParamLimits

0xf63a,	// (0x0000f980) list_setting_pane_g

0xbdf9,	// (0x0000c13f) list_setting_pane_t1_ParamLimits

0xbdf9,	// (0x0000c13f) list_setting_pane_t1

0xbe10,	// (0x0000c156) list_setting_pane_t2_ParamLimits

0xbe10,	// (0x0000c156) list_setting_pane_t2

0x0002,

0xf63f,	// (0x0000f985) list_setting_pane_t_ParamLimits

0xf63f,	// (0x0000f985) list_setting_pane_t

0xbe4f,	// (0x0000c195) set_value_pane_cp_ParamLimits

0xbe4f,	// (0x0000c195) set_value_pane_cp

0x107c,	// (0x000013c2) list_setting_number_pane_g1_ParamLimits

0x107c,	// (0x000013c2) list_setting_number_pane_g1

0xbbe7,	// (0x0000bf2d) list_setting_number_pane_g2_ParamLimits

0xbbe7,	// (0x0000bf2d) list_setting_number_pane_g2

0x0001,

0xf63a,	// (0x0000f980) list_setting_number_pane_g_ParamLimits

0xf63a,	// (0x0000f980) list_setting_number_pane_g

0xbe5b,	// (0x0000c1a1) list_setting_number_pane_t1_ParamLimits

0xbe5b,	// (0x0000c1a1) list_setting_number_pane_t1

0xbe6f,	// (0x0000c1b5) list_setting_number_pane_t2_ParamLimits

0xbe6f,	// (0x0000c1b5) list_setting_number_pane_t2

0xbe86,	// (0x0000c1cc) list_setting_number_pane_t3_ParamLimits

0xbe86,	// (0x0000c1cc) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x0000f98c) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x0000f98c) list_setting_number_pane_t

0xbe4f,	// (0x0000c195) set_value_pane_ParamLimits

0xbe4f,	// (0x0000c195) set_value_pane

0x0f1d,	// (0x00001263) bg_set_opt_pane_ParamLimits

0x0f1d,	// (0x00001263) bg_set_opt_pane

0x0f3e,	// (0x00001284) set_value_pane_t1

0x0f4c,	// (0x00001292) slider_set_pane_cp3

0x0f55,	// (0x0000129b) volume_small_pane_cp

0x0f5e,	// (0x000012a4) list_form_gen_pane

0x0f67,	// (0x000012ad) scroll_pane_cp8

0xbec9,	// (0x0000c20f) form_field_data_pane_ParamLimits

0xbec9,	// (0x0000c20f) form_field_data_pane

0xbee0,	// (0x0000c226) form_field_data_wide_pane_ParamLimits

0xbee0,	// (0x0000c226) form_field_data_wide_pane

0xbf00,	// (0x0000c246) form_field_popup_pane_ParamLimits

0xbf00,	// (0x0000c246) form_field_popup_pane

0xbf18,	// (0x0000c25e) form_field_popup_wide_pane_ParamLimits

0xbf18,	// (0x0000c25e) form_field_popup_wide_pane

0x1002,	// (0x00001348) form_field_slider_pane_ParamLimits

0x1002,	// (0x00001348) form_field_slider_pane

0x1015,	// (0x0000135b) form_field_slider_wide_pane_ParamLimits

0x1015,	// (0x0000135b) form_field_slider_wide_pane

0x1028,	// (0x0000136e) data_form_pane

0xbf39,	// (0x0000c27f) form_field_data_pane_t1

0x1056,	// (0x0000139c) input_focus_pane

0x1064,	// (0x000013aa) data_form_wide_pane

0x109c,	// (0x000013e2) form_field_data_wide_pane_t1

0x0870,	// (0x00000bb6) input_focus_pane_cp6

0xbf53,	// (0x0000c299) form_field_popup_pane_t1

0x1056,	// (0x0000139c) input_focus_pane_cp7

0x10d3,	// (0x00001419) list_form_pane

0x10e7,	// (0x0000142d) form_field_popup_wide_pane_t1

0x1056,	// (0x0000139c) input_focus_pane_cp8

0x10f9,	// (0x0000143f) list_form_wide_pane

0xbf75,	// (0x0000c2bb) form_field_slider_pane_t1_ParamLimits

0xbf75,	// (0x0000c2bb) form_field_slider_pane_t1

0xbf8d,	// (0x0000c2d3) form_field_slider_pane_t2_ParamLimits

0xbf8d,	// (0x0000c2d3) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x0000f99c) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x0000f99c) form_field_slider_pane_t

0x04ed,	// (0x00000833) input_focus_pane_cp9_ParamLimits

0x04ed,	// (0x00000833) input_focus_pane_cp9

0xbfa2,	// (0x0000c2e8) slider_cont_pane_ParamLimits

0xbfa2,	// (0x0000c2e8) slider_cont_pane

0x1145,	// (0x0000148b) form_field_slider_wide_pane_t1_ParamLimits

0x1145,	// (0x0000148b) form_field_slider_wide_pane_t1

0x1157,	// (0x0000149d) form_field_slider_wide_pane_t2_ParamLimits

0x1157,	// (0x0000149d) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x0000f9a1) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x0000f9a1) form_field_slider_wide_pane_t

0x04ed,	// (0x00000833) input_focus_pane_cp10_ParamLimits

0x04ed,	// (0x00000833) input_focus_pane_cp10

0xbfb6,	// (0x0000c2fc) slider_cont_pane_cp1_ParamLimits

0xbfb6,	// (0x0000c2fc) slider_cont_pane_cp1

0xbfca,	// (0x0000c310) slider_form_pane_cp

0x1185,	// (0x000014cb) input_focus_pane_g1

0x118d,	// (0x000014d3) input_focus_pane_g2

0x1195,	// (0x000014db) input_focus_pane_g3

0x119d,	// (0x000014e3) input_focus_pane_g4

0x11a5,	// (0x000014eb) input_focus_pane_g5

0x11ad,	// (0x000014f3) input_focus_pane_g6

0x11b5,	// (0x000014fb) input_focus_pane_g7

0x11bd,	// (0x00001503) input_focus_pane_g8

0x11c5,	// (0x0000150b) input_focus_pane_g9

0xf307,	// (0x0000f64d) input_focus_pane_g10

0x0009,

0xf660,	// (0x0000f9a6) input_focus_pane_g

0x3bee,	// (0x00003f34) wait_border_pane_g3_copy1

0xbfd2,	// (0x0000c318) data_form_pane_t1

0xf307,	// (0x0000f64d) wait_anim_pane_g1_copy1

0xd374,	// (0x0000d6ba) data_form_wide_pane_t1

0xbfec,	// (0x0000c332) list_form_graphic_pane_cp_ParamLimits

0xbfec,	// (0x0000c332) list_form_graphic_pane_cp

0x4d3c,	// (0x00005082) slider_form_pane_g1

0x4d45,	// (0x0000508b) slider_form_pane_g2

0x0006,

0xf957,	// (0x0000fc9d) slider_form_pane_g

0xbfec,	// (0x0000c332) list_form_graphic_pane_ParamLimits

0xbfec,	// (0x0000c332) list_form_graphic_pane

0x121d,	// (0x00001563) list_form_graphic_pane_g1

0x1225,	// (0x0000156b) list_form_graphic_pane_t1_ParamLimits

0x1225,	// (0x0000156b) list_form_graphic_pane_t1

0x01c7,	// (0x0000050d) list_highlight_pane_cp5_ParamLimits

0x01c7,	// (0x0000050d) list_highlight_pane_cp5

0x123a,	// (0x00001580) find_pane_g1

0x1243,	// (0x00001589) input_find_pane

0x124c,	// (0x00001592) input_find_pane_g1_ParamLimits

0x124c,	// (0x00001592) input_find_pane_g1

0x1258,	// (0x0000159e) input_find_pane_t1_ParamLimits

0x1258,	// (0x0000159e) input_find_pane_t1

0x126d,	// (0x000015b3) input_find_pane_t2_ParamLimits

0x126d,	// (0x000015b3) input_find_pane_t2

0x0001,

0xf675,	// (0x0000f9bb) input_find_pane_t_ParamLimits

0xf675,	// (0x0000f9bb) input_find_pane_t

0x1282,	// (0x000015c8) input_focus_pane_cp5_ParamLimits

0x1282,	// (0x000015c8) input_focus_pane_cp5

0x12a1,	// (0x000015e7) bg_popup_window_pane_cp2_ParamLimits

0x12a1,	// (0x000015e7) bg_popup_window_pane_cp2

0x12ae,	// (0x000015f4) listscroll_menu_pane_ParamLimits

0x12ae,	// (0x000015f4) listscroll_menu_pane

0xc00a,	// (0x0000c350) popup_submenu_window_ParamLimits

0xc00a,	// (0x0000c350) popup_submenu_window

0x12e6,	// (0x0000162c) find_popup_pane_g1

0x12ee,	// (0x00001634) input_popup_find_pane_cp

0x12f8,	// (0x0000163e) input_focus_pane_cp4_ParamLimits

0x12f8,	// (0x0000163e) input_focus_pane_cp4

0x1312,	// (0x00001658) input_popup_find_pane_t1_ParamLimits

0x1312,	// (0x00001658) input_popup_find_pane_t1

0xf4cf,	// (0x0000f815) bg_popup_sub_pane_cp

0x1340,	// (0x00001686) listscroll_popup_sub_pane

0x1348,	// (0x0000168e) list_submenu_pane_ParamLimits

0x1348,	// (0x0000168e) list_submenu_pane

0x1359,	// (0x0000169f) scroll_pane_cp4

0x1361,	// (0x000016a7) list_single_popup_submenu_pane_ParamLimits

0x1361,	// (0x000016a7) list_single_popup_submenu_pane

0x1375,	// (0x000016bb) list_single_popup_submenu_pane_g1

0x137d,	// (0x000016c3) list_single_popup_submenu_pane_t1_ParamLimits

0x137d,	// (0x000016c3) list_single_popup_submenu_pane_t1

0x04ed,	// (0x00000833) bg_active_tab_pane_cp1_ParamLimits

0x04ed,	// (0x00000833) bg_active_tab_pane_cp1

0x1392,	// (0x000016d8) tabs_2_active_pane_g1

0xc044,	// (0x0000c38a) tabs_2_active_pane_t1

0x04ed,	// (0x00000833) bg_passive_tab_pane_cp1_ParamLimits

0x04ed,	// (0x00000833) bg_passive_tab_pane_cp1

0x1392,	// (0x000016d8) tabs_2_passive_pane_g1

0xc044,	// (0x0000c38a) tabs_2_passive_pane_t1

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp4

0xc056,	// (0x0000c39c) tabs_2_long_active_pane_t1

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp4

0x343f,	// (0x00003785) list_single_midp_graphic_pane_g4_ParamLimits

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp5

0xc069,	// (0x0000c3af) tabs_3_long_active_pane_t1

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp5

0x343f,	// (0x00003785) list_single_midp_graphic_pane_g4

0x01c7,	// (0x0000050d) bg_popup_window_pane_cp13_ParamLimits

0x01c7,	// (0x0000050d) bg_popup_window_pane_cp13

0x13f4,	// (0x0000173a) listscroll_popup_fast_pane_ParamLimits

0x13f4,	// (0x0000173a) listscroll_popup_fast_pane

0x1403,	// (0x00001749) grid_popup_fast_pane_ParamLimits

0x1403,	// (0x00001749) grid_popup_fast_pane

0x1415,	// (0x0000175b) scroll_pane_cp9_ParamLimits

0x1415,	// (0x0000175b) scroll_pane_cp9

0x7093,	// (0x000073d9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7093,	// (0x000073d9) list_single_graphic_hl_pane_t1_cp2

0x1439,	// (0x0000177f) input_focus_pane_cp20_ParamLimits

0x1439,	// (0x0000177f) input_focus_pane_cp20

0x1447,	// (0x0000178d) query_popup_data_pane_t1_ParamLimits

0x1447,	// (0x0000178d) query_popup_data_pane_t1

0x145a,	// (0x000017a0) query_popup_data_pane_t2_ParamLimits

0x145a,	// (0x000017a0) query_popup_data_pane_t2

0x14a0,	// (0x000017e6) query_popup_data_pane_t3_ParamLimits

0x14a0,	// (0x000017e6) query_popup_data_pane_t3

0x14e1,	// (0x00001827) query_popup_data_pane_t4_ParamLimits

0x14e1,	// (0x00001827) query_popup_data_pane_t4

0x151d,	// (0x00001863) query_popup_data_pane_t5_ParamLimits

0x151d,	// (0x00001863) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x0000f9c0) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x0000f9c0) query_popup_data_pane_t

0x1185,	// (0x000014cb) bg_set_opt_pane_g1

0x118d,	// (0x000014d3) bg_set_opt_pane_g2

0x1195,	// (0x000014db) bg_set_opt_pane_g3

0x119d,	// (0x000014e3) bg_set_opt_pane_g4

0x11a5,	// (0x000014eb) bg_set_opt_pane_g5

0x11ad,	// (0x000014f3) bg_set_opt_pane_g6

0x11b5,	// (0x000014fb) bg_set_opt_pane_g7

0x11bd,	// (0x00001503) bg_set_opt_pane_g8

0x11c5,	// (0x0000150b) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x0000f9cb) bg_set_opt_pane_g

0x1e54,	// (0x0000219a) control_top_pane_stacon_ParamLimits

0x1e54,	// (0x0000219a) control_top_pane_stacon

0x1ea7,	// (0x000021ed) signal_pane_stacon_ParamLimits

0x1ea7,	// (0x000021ed) signal_pane_stacon

0x1ecc,	// (0x00002212) stacon_top_pane_g1_ParamLimits

0x1ecc,	// (0x00002212) stacon_top_pane_g1

0x1eee,	// (0x00002234) title_pane_stacon_ParamLimits

0x1eee,	// (0x00002234) title_pane_stacon

0x1f18,	// (0x0000225e) uni_indicator_pane_stacon_ParamLimits

0x1f18,	// (0x0000225e) uni_indicator_pane_stacon

0x1f2d,	// (0x00002273) battery_pane_stacon_ParamLimits

0x1f2d,	// (0x00002273) battery_pane_stacon

0x1f71,	// (0x000022b7) control_bottom_pane_stacon_ParamLimits

0x1f71,	// (0x000022b7) control_bottom_pane_stacon

0x1f94,	// (0x000022da) navi_pane_stacon_ParamLimits

0x1f94,	// (0x000022da) navi_pane_stacon

0x1fb7,	// (0x000022fd) stacon_bottom_pane_g1_ParamLimits

0x1fb7,	// (0x000022fd) stacon_bottom_pane_g1

0x1554,	// (0x0000189a) aid_levels_signal_lsc_ParamLimits

0x1554,	// (0x0000189a) aid_levels_signal_lsc

0x156a,	// (0x000018b0) signal_pane_stacon_g1_ParamLimits

0x156a,	// (0x000018b0) signal_pane_stacon_g1

0x157e,	// (0x000018c4) signal_pane_stacon_g2_ParamLimits

0x157e,	// (0x000018c4) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x0000f9de) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x0000f9de) signal_pane_stacon_g

0x15c0,	// (0x00001906) title_pane_stacon_t1_ParamLimits

0x15c0,	// (0x00001906) title_pane_stacon_t1

0x15e5,	// (0x0000192b) uni_indicator_pane_stacon_g1

0x15ef,	// (0x00001935) uni_indicator_pane_stacon_g2

0x15f9,	// (0x0000193f) uni_indicator_pane_stacon_g3

0x1603,	// (0x00001949) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x0000f9ea) uni_indicator_pane_stacon_g

0x160d,	// (0x00001953) control_top_pane_stacon_g1

0x1615,	// (0x0000195b) control_top_pane_stacon_t1_ParamLimits

0x1615,	// (0x0000195b) control_top_pane_stacon_t1

0x164c,	// (0x00001992) aid_levels_battery_lsc_ParamLimits

0x164c,	// (0x00001992) aid_levels_battery_lsc

0x1663,	// (0x000019a9) battery_pane_stacon_g1_ParamLimits

0x1663,	// (0x000019a9) battery_pane_stacon_g1

0x1676,	// (0x000019bc) battery_pane_stacon_g2_ParamLimits

0x1676,	// (0x000019bc) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x0000f9f3) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x0000f9f3) battery_pane_stacon_g

0x16b4,	// (0x000019fa) navi_icon_pane_stacon

0x16c8,	// (0x00001a0e) navi_navi_pane_stacon

0x16b4,	// (0x000019fa) navi_text_pane_stacon

0x160d,	// (0x00001953) control_bottom_pane_stacon_g1

0x16dc,	// (0x00001a22) control_bottom_pane_stacon_t1_ParamLimits

0x16dc,	// (0x00001a22) control_bottom_pane_stacon_t1

0xc07b,	// (0x0000c3c1) grid_app_pane_ParamLimits

0xc07b,	// (0x0000c3c1) grid_app_pane

0xc0b3,	// (0x0000c3f9) scroll_pane_cp15_ParamLimits

0xc0b3,	// (0x0000c3f9) scroll_pane_cp15

0xc0c8,	// (0x0000c40e) cell_app_pane_ParamLimits

0xc0c8,	// (0x0000c40e) cell_app_pane

0xc10d,	// (0x0000c453) cell_app_pane_g1_ParamLimits

0xc10d,	// (0x0000c453) cell_app_pane_g1

0x17ae,	// (0x00001af4) cell_app_pane_g2_ParamLimits

0x17ae,	// (0x00001af4) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x0000f9f8) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x0000f9f8) cell_app_pane_g

0xc131,	// (0x0000c477) cell_app_pane_t1_ParamLimits

0xc131,	// (0x0000c477) cell_app_pane_t1

0x17d1,	// (0x00001b17) grid_highlight_pane_ParamLimits

0x17d1,	// (0x00001b17) grid_highlight_pane

0x1185,	// (0x000014cb) cell_highlight_pane_g1

0x118d,	// (0x000014d3) cell_highlight_pane_g2

0x1195,	// (0x000014db) cell_highlight_pane_g3

0x119d,	// (0x000014e3) cell_highlight_pane_g4

0x11a5,	// (0x000014eb) cell_highlight_pane_g5

0x11ad,	// (0x000014f3) cell_highlight_pane_g6

0x11b5,	// (0x000014fb) cell_highlight_pane_g7

0x11bd,	// (0x00001503) cell_highlight_pane_g8

0x11c5,	// (0x0000150b) cell_highlight_pane_g9

0xf307,	// (0x0000f64d) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x0000f9a6) cell_highlight_pane_g

0x17f5,	// (0x00001b3b) bg_scroll_pane

0x1814,	// (0x00001b5a) scroll_handle_pane

0x1865,	// (0x00001bab) scroll_bg_pane_g1

0x187a,	// (0x00001bc0) scroll_bg_pane_g2

0x1892,	// (0x00001bd8) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x0000f9fd) scroll_bg_pane_g

0x18a7,	// (0x00001bed) scroll_handle_focus_pane_ParamLimits

0x18a7,	// (0x00001bed) scroll_handle_focus_pane

0x1865,	// (0x00001bab) scroll_handle_pane_g1

0x18b4,	// (0x00001bfa) scroll_handle_pane_g2

0x1892,	// (0x00001bd8) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x0000fa04) scroll_handle_pane_g

0x12f8,	// (0x0000163e) bg_popup_sub_pane_cp21_ParamLimits

0x12f8,	// (0x0000163e) bg_popup_sub_pane_cp21

0x18c8,	// (0x00001c0e) popup_fep_japan_predictive_window_t1_ParamLimits

0x18c8,	// (0x00001c0e) popup_fep_japan_predictive_window_t1

0x18e2,	// (0x00001c28) popup_fep_japan_predictive_window_t2_ParamLimits

0x18e2,	// (0x00001c28) popup_fep_japan_predictive_window_t2

0x1915,	// (0x00001c5b) popup_fep_japan_predictive_window_t3_ParamLimits

0x1915,	// (0x00001c5b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x0000fa0b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x0000fa0b) popup_fep_japan_predictive_window_t

0xf4cf,	// (0x0000f815) bg_popup_sub_pane_cp23

0x194c,	// (0x00001c92) listscroll_japin_cand_pane

0x1954,	// (0x00001c9a) popup_fep_japan_candidate_window_t1

0x1962,	// (0x00001ca8) candidate_pane_ParamLimits

0x1962,	// (0x00001ca8) candidate_pane

0x1974,	// (0x00001cba) scroll_pane_cp30

0x197c,	// (0x00001cc2) list_single_popup_jap_candidate_pane_ParamLimits

0x197c,	// (0x00001cc2) list_single_popup_jap_candidate_pane

0xf4cf,	// (0x0000f815) list_highlight_pane_cp30

0x1991,	// (0x00001cd7) list_single_popup_jap_candidate_pane_t1

0x19a0,	// (0x00001ce6) level_1_signal

0x19b2,	// (0x00001cf8) level_2_signal

0x19c5,	// (0x00001d0b) level_3_signal

0x19d8,	// (0x00001d1e) level_4_signal

0x19eb,	// (0x00001d31) level_5_signal

0x19fe,	// (0x00001d44) level_6_signal

0x1a11,	// (0x00001d57) level_7_signal

0x19a0,	// (0x00001ce6) level_1_battery

0x19b2,	// (0x00001cf8) level_2_battery

0x19c5,	// (0x00001d0b) level_3_battery

0x19d8,	// (0x00001d1e) level_4_battery

0x19eb,	// (0x00001d31) level_5_battery

0x19fe,	// (0x00001d44) level_6_battery

0x1a11,	// (0x00001d57) level_7_battery

0x1a5b,	// (0x00001da1) list_menu_pane_ParamLimits

0x1a5b,	// (0x00001da1) list_menu_pane

0x1a71,	// (0x00001db7) scroll_pane_cp25_ParamLimits

0x1a71,	// (0x00001db7) scroll_pane_cp25

0x1a8a,	// (0x00001dd0) list_double2_graphic_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double2_graphic_pane_cp2

0x1a8a,	// (0x00001dd0) list_double2_large_graphic_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double2_large_graphic_pane_cp2

0x1a8a,	// (0x00001dd0) list_double2_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double2_pane_cp2

0x1a8a,	// (0x00001dd0) list_double_graphic_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double_graphic_pane_cp2

0x1a8a,	// (0x00001dd0) list_double_large_graphic_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double_large_graphic_pane_cp2

0x1a8a,	// (0x00001dd0) list_double_number_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double_number_pane_cp2

0x1a8a,	// (0x00001dd0) list_double_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double_pane_cp2

0xc148,	// (0x0000c48e) list_single_2graphic_pane_cp2_ParamLimits

0xc148,	// (0x0000c48e) list_single_2graphic_pane_cp2

0xc148,	// (0x0000c48e) list_single_graphic_heading_pane_cp2_ParamLimits

0xc148,	// (0x0000c48e) list_single_graphic_heading_pane_cp2

0xc148,	// (0x0000c48e) list_single_graphic_pane_cp2_ParamLimits

0xc148,	// (0x0000c48e) list_single_graphic_pane_cp2

0xc148,	// (0x0000c48e) list_single_heading_pane_cp2_ParamLimits

0xc148,	// (0x0000c48e) list_single_heading_pane_cp2

0x1ac7,	// (0x00001e0d) list_single_large_graphic_pane_cp2_ParamLimits

0x1ac7,	// (0x00001e0d) list_single_large_graphic_pane_cp2

0xc148,	// (0x0000c48e) list_single_number_heading_pane_cp2_ParamLimits

0xc148,	// (0x0000c48e) list_single_number_heading_pane_cp2

0xc148,	// (0x0000c48e) list_single_number_pane_cp2_ParamLimits

0xc148,	// (0x0000c48e) list_single_number_pane_cp2

0xc15a,	// (0x0000c4a0) list_single_pane_cp2_ParamLimits

0xc15a,	// (0x0000c4a0) list_single_pane_cp2

0x1bb7,	// (0x00001efd) bg_popup_sub_pane_cp22

0x1bdc,	// (0x00001f22) popup_side_volume_key_window_g1

0x1c06,	// (0x00001f4c) popup_side_volume_key_window_t1

0x1c22,	// (0x00001f68) volume_small_pane_cp1

0x04ed,	// (0x00000833) bg_popup_sub_pane_cp24_ParamLimits

0x04ed,	// (0x00000833) bg_popup_sub_pane_cp24

0x1c2a,	// (0x00001f70) fep_china_uni_candidate_pane_ParamLimits

0x1c2a,	// (0x00001f70) fep_china_uni_candidate_pane

0x1c3e,	// (0x00001f84) fep_china_uni_entry_pane

0x1c4e,	// (0x00001f94) popup_fep_china_uni_window_g1

0x1c6a,	// (0x00001fb0) fep_china_uni_entry_pane_g1

0x1c72,	// (0x00001fb8) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x0000fa3c) fep_china_uni_entry_pane_g

0x1c7a,	// (0x00001fc0) fep_entry_item_pane

0x1c84,	// (0x00001fca) fep_candidate_item_pane

0x1c8c,	// (0x00001fd2) fep_china_uni_candidate_pane_g1

0x1c94,	// (0x00001fda) fep_china_uni_candidate_pane_g2

0x1c9c,	// (0x00001fe2) fep_china_uni_candidate_pane_g3

0x1ca4,	// (0x00001fea) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x0000fa41) fep_china_uni_candidate_pane_g

0xf307,	// (0x0000f64d) fep_entry_item_pane_g1

0x1cac,	// (0x00001ff2) fep_entry_item_pane_t1_ParamLimits

0x1cac,	// (0x00001ff2) fep_entry_item_pane_t1

0x1cc2,	// (0x00002008) fep_candidate_item_pane_t1_ParamLimits

0x1cc2,	// (0x00002008) fep_candidate_item_pane_t1

0x1cd7,	// (0x0000201d) fep_candidate_item_pane_t2_ParamLimits

0x1cd7,	// (0x0000201d) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x0000fa4a) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x0000fa4a) fep_candidate_item_pane_t

0x01c7,	// (0x0000050d) list_highlight_pane_cp31_ParamLimits

0x01c7,	// (0x0000050d) list_highlight_pane_cp31

0x1ce9,	// (0x0000202f) level_1_signal_lsc

0x1cf2,	// (0x00002038) level_2_signal_lsc

0x1cfb,	// (0x00002041) level_3_signal_lsc

0x1d04,	// (0x0000204a) level_4_signal_lsc

0x1d0d,	// (0x00002053) level_5_signal_lsc

0x1d16,	// (0x0000205c) level_6_signal_lsc

0x1d1f,	// (0x00002065) level_7_signal_lsc

0x1d1f,	// (0x00002065) level_1_battery_lsc

0x1d28,	// (0x0000206e) level_2_battery_lsc

0x1d31,	// (0x00002077) level_3_battery_lsc

0x1d3a,	// (0x00002080) level_4_battery_lsc

0x1d43,	// (0x00002089) level_5_battery_lsc

0x1d4c,	// (0x00002092) level_6_battery_lsc

0x1ce9,	// (0x0000202f) level_7_battery_lsc

0x1d55,	// (0x0000209b) scroll_handle_focus_pane_g1

0x1d5e,	// (0x000020a4) scroll_handle_focus_pane_g2

0x1d67,	// (0x000020ad) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x0000fa4f) scroll_handle_focus_pane_g

0x1d70,	// (0x000020b6) list_single_2graphic_pane_g1_ParamLimits

0x1d70,	// (0x000020b6) list_single_2graphic_pane_g1

0xbbab,	// (0x0000bef1) list_single_2graphic_pane_g2_ParamLimits

0xbbab,	// (0x0000bef1) list_single_2graphic_pane_g2

0x0abe,	// (0x00000e04) list_single_2graphic_pane_g3_ParamLimits

0x0abe,	// (0x00000e04) list_single_2graphic_pane_g3

0x1d7c,	// (0x000020c2) list_single_2graphic_pane_g4_ParamLimits

0x1d7c,	// (0x000020c2) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x0000fa56) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x0000fa56) list_single_2graphic_pane_g

0x1d8d,	// (0x000020d3) list_single_2graphic_pane_t1_ParamLimits

0x1d8d,	// (0x000020d3) list_single_2graphic_pane_t1

0xc1e7,	// (0x0000c52d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc1e7,	// (0x0000c52d) list_double2_graphic_large_graphic_pane_g1

0xbbd6,	// (0x0000bf1c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbbd6,	// (0x0000bf1c) list_double2_graphic_large_graphic_pane_g2

0xbbe7,	// (0x0000bf2d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbbe7,	// (0x0000bf2d) list_double2_graphic_large_graphic_pane_g3

0xc1f9,	// (0x0000c53f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc1f9,	// (0x0000c53f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x0000fa5f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x0000fa5f) list_double2_graphic_large_graphic_pane_g

0xc205,	// (0x0000c54b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc205,	// (0x0000c54b) list_double2_graphic_large_graphic_pane_t1

0xc21b,	// (0x0000c561) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc21b,	// (0x0000c561) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x0000fa68) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x0000fa68) list_double2_graphic_large_graphic_pane_t

0x2082,	// (0x000023c8) popup_fast_swap_window_ParamLimits

0x2082,	// (0x000023c8) popup_fast_swap_window

0x209e,	// (0x000023e4) popup_side_volume_key_window

0x20ba,	// (0x00002400) stacon_top_pane

0x20c4,	// (0x0000240a) status_pane_ParamLimits

0x20c4,	// (0x0000240a) status_pane

0xf2fd,	// (0x0000f643) status_small_pane

0xf4cf,	// (0x0000f815) control_pane

0xf4cf,	// (0x0000f815) stacon_bottom_pane

0x0f67,	// (0x000012ad) scroll_pane_cp121

0x0f5e,	// (0x000012a4) set_content_pane

0x1dff,	// (0x00002145) bg_active_tab_pane_g1_cp1

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp1

0x1e11,	// (0x00002157) bg_active_tab_pane_g3_cp1

0x1dff,	// (0x00002145) bg_passive_tab_pane_g1_cp1

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp1

0x1e11,	// (0x00002157) bg_passive_tab_pane_g3_cp1

0x1e1a,	// (0x00002160) bg_active_tab_pane_g1_cp2

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp2

0x1e23,	// (0x00002169) bg_active_tab_pane_g3_cp2

0x1e1a,	// (0x00002160) bg_passive_tab_pane_g1_cp2

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp2

0x1e23,	// (0x00002169) bg_passive_tab_pane_g3_cp2

0x1e2c,	// (0x00002172) bg_active_tab_pane_g1_cp3

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp3

0x1e35,	// (0x0000217b) bg_active_tab_pane_g3_cp3

0x1e2c,	// (0x00002172) bg_passive_tab_pane_g1_cp3

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp3

0x1e35,	// (0x0000217b) bg_passive_tab_pane_g3_cp3

0x1e3e,	// (0x00002184) bg_active_tab_pane_g1_cp4

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp4

0x1e49,	// (0x0000218f) bg_active_tab_pane_g3_cp4

0x1e3e,	// (0x00002184) bg_passive_tab_pane_g1_cp4

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp4

0x1e49,	// (0x0000218f) bg_passive_tab_pane_g3_cp4

0x1fd3,	// (0x00002319) bg_active_tab_pane_g1_cp5

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp5

0x1fdc,	// (0x00002322) bg_active_tab_pane_g3_cp5

0x1fd3,	// (0x00002319) bg_passive_tab_pane_g1_cp5

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp5

0x1fdc,	// (0x00002322) bg_passive_tab_pane_g3_cp5

0x5527,	// (0x0000586d) list_set_graphic_pane_ParamLimits

0x5527,	// (0x0000586d) list_set_graphic_pane

0xf4cf,	// (0x0000f815) bg_set_opt_pane_cp4

0x2005,	// (0x0000234b) list_set_graphic_pane_g1_ParamLimits

0x2005,	// (0x0000234b) list_set_graphic_pane_g1

0x2011,	// (0x00002357) list_set_graphic_pane_g2_ParamLimits

0x2011,	// (0x00002357) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x0000fa6d) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x0000fa6d) list_set_graphic_pane_g

0x0009,

0xfa90,	// (0x0000fdd6) volume_small_pane_cp_g

0x2035,	// (0x0000237b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2035,	// (0x0000237b) list_double2_large_graphic_pane_g1_cp2

0x2041,	// (0x00002387) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2041,	// (0x00002387) list_double2_large_graphic_pane_g2_cp2

0x2052,	// (0x00002398) list_double2_large_graphic_pane_g3_cp2

0x205a,	// (0x000023a0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x205a,	// (0x000023a0) list_double2_large_graphic_pane_t1_cp2

0x2070,	// (0x000023b6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2070,	// (0x000023b6) list_double2_large_graphic_pane_t2_cp2

0x4825,	// (0x00004b6b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4825,	// (0x00004b6b) list_double_large_graphic_pane_g1_cp2

0x4836,	// (0x00004b7c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4836,	// (0x00004b7c) list_double_large_graphic_pane_g2_cp2

0x21e0,	// (0x00002526) list_double_large_graphic_pane_g3_cp2

0x4847,	// (0x00004b8d) list_double_large_graphic_pane_g4_cp

0x484f,	// (0x00004b95) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x484f,	// (0x00004b95) list_double_large_graphic_pane_t1_cp2

0x4866,	// (0x00004bac) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4866,	// (0x00004bac) list_double_large_graphic_pane_t2_cp2

0x20d2,	// (0x00002418) list_double2_graphic_pane_g1_cp2_ParamLimits

0x20d2,	// (0x00002418) list_double2_graphic_pane_g1_cp2

0x20e0,	// (0x00002426) list_double2_graphic_pane_g2_cp2_ParamLimits

0x20e0,	// (0x00002426) list_double2_graphic_pane_g2_cp2

0x20f1,	// (0x00002437) list_double2_graphic_pane_g3_cp2

0x20fb,	// (0x00002441) list_double2_graphic_pane_t1_cp2_ParamLimits

0x20fb,	// (0x00002441) list_double2_graphic_pane_t1_cp2

0x2111,	// (0x00002457) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2111,	// (0x00002457) list_double2_graphic_pane_t2_cp2

0x2123,	// (0x00002469) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2123,	// (0x00002469) list_single_number_heading_pane_g1_cp2

0x212f,	// (0x00002475) list_single_number_heading_pane_g2_cp2

0x2137,	// (0x0000247d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2137,	// (0x0000247d) list_single_number_heading_pane_t1_cp2

0x214d,	// (0x00002493) list_single_number_heading_pane_t2_cp2_ParamLimits

0x214d,	// (0x00002493) list_single_number_heading_pane_t2_cp2

0x215f,	// (0x000024a5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x215f,	// (0x000024a5) list_single_number_heading_pane_t3_cp2

0x2123,	// (0x00002469) list_single_heading_pane_g1_cp2_ParamLimits

0x2123,	// (0x00002469) list_single_heading_pane_g1_cp2

0x212f,	// (0x00002475) list_single_heading_pane_g2_cp2

0x2137,	// (0x0000247d) list_single_heading_pane_t1_cp2_ParamLimits

0x2137,	// (0x0000247d) list_single_heading_pane_t1_cp2

0x462d,	// (0x00004973) list_single_heading_pane_t2_cp2_ParamLimits

0x462d,	// (0x00004973) list_single_heading_pane_t2_cp2

0x4575,	// (0x000048bb) list_double_graphic_pane_g1_cp2_ParamLimits

0x4575,	// (0x000048bb) list_double_graphic_pane_g1_cp2

0x4581,	// (0x000048c7) list_double_graphic_pane_g2_cp2_ParamLimits

0x4581,	// (0x000048c7) list_double_graphic_pane_g2_cp2

0x4590,	// (0x000048d6) list_double_graphic_pane_g3_cp2

0x4598,	// (0x000048de) list_double_graphic_pane_t1_cp2_ParamLimits

0x4598,	// (0x000048de) list_double_graphic_pane_t1_cp2

0x45ae,	// (0x000048f4) list_double_graphic_pane_t2_cp2_ParamLimits

0x45ae,	// (0x000048f4) list_double_graphic_pane_t2_cp2

0x21d4,	// (0x0000251a) list_double_number_pane_g1_cp2_ParamLimits

0x21d4,	// (0x0000251a) list_double_number_pane_g1_cp2

0x21e0,	// (0x00002526) list_double_number_pane_g2_cp2

0x4539,	// (0x0000487f) list_double_number_pane_t1_cp2_ParamLimits

0x4539,	// (0x0000487f) list_double_number_pane_t1_cp2

0x454d,	// (0x00004893) list_double_number_pane_t2_cp2_ParamLimits

0x454d,	// (0x00004893) list_double_number_pane_t2_cp2

0x4563,	// (0x000048a9) list_double_number_pane_t3_cp2_ParamLimits

0x4563,	// (0x000048a9) list_double_number_pane_t3_cp2

0x4411,	// (0x00004757) list_single_graphic_pane_g1_cp2_ParamLimits

0x4411,	// (0x00004757) list_single_graphic_pane_g1_cp2

0x2245,	// (0x0000258b) list_single_graphic_pane_g2_cp2_ParamLimits

0x2245,	// (0x0000258b) list_single_graphic_pane_g2_cp2

0x2251,	// (0x00002597) list_single_graphic_pane_g3_cp2

0x43e7,	// (0x0000472d) list_single_graphic_pane_t1_cp2_ParamLimits

0x43e7,	// (0x0000472d) list_single_graphic_pane_t1_cp2

0x2245,	// (0x0000258b) list_single_number_pane_g1_cp2_ParamLimits

0x2245,	// (0x0000258b) list_single_number_pane_g1_cp2

0x2251,	// (0x00002597) list_single_number_pane_g2_cp2

0x43e7,	// (0x0000472d) list_single_number_pane_t1_cp2_ParamLimits

0x43e7,	// (0x0000472d) list_single_number_pane_t1_cp2

0x43fd,	// (0x00004743) list_single_number_pane_t2_cp2_ParamLimits

0x43fd,	// (0x00004743) list_single_number_pane_t2_cp2

0x2041,	// (0x00002387) list_double2_pane_g1_cp2_ParamLimits

0x2041,	// (0x00002387) list_double2_pane_g1_cp2

0x2052,	// (0x00002398) list_double2_pane_g2_cp2

0x21ac,	// (0x000024f2) list_double2_pane_t1_cp2_ParamLimits

0x21ac,	// (0x000024f2) list_double2_pane_t1_cp2

0x21c2,	// (0x00002508) list_double2_pane_t2_cp2_ParamLimits

0x21c2,	// (0x00002508) list_double2_pane_t2_cp2

0x21d4,	// (0x0000251a) list_double_pane_g1_cp2_ParamLimits

0x21d4,	// (0x0000251a) list_double_pane_g1_cp2

0x21e0,	// (0x00002526) list_double_pane_g2_cp2

0x21e8,	// (0x0000252e) list_double_pane_t1_cp2_ParamLimits

0x21e8,	// (0x0000252e) list_double_pane_t1_cp2

0x21fe,	// (0x00002544) list_double_pane_t2_cp2_ParamLimits

0x21fe,	// (0x00002544) list_double_pane_t2_cp2

0x2235,	// (0x0000257b) list_single_pane_cp2_g3

0x2245,	// (0x0000258b) list_single_pane_g1_cp2_ParamLimits

0x2245,	// (0x0000258b) list_single_pane_g1_cp2

0x2251,	// (0x00002597) list_single_pane_g2_cp2

0x2259,	// (0x0000259f) list_single_pane_t1_cp2_ParamLimits

0x2259,	// (0x0000259f) list_single_pane_t1_cp2

0x2271,	// (0x000025b7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2271,	// (0x000025b7) list_single_large_graphic_pane_g1_cp2

0x0ab2,	// (0x00000df8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0ab2,	// (0x00000df8) list_single_large_graphic_pane_g2_cp2

0x227d,	// (0x000025c3) list_single_large_graphic_pane_g3_cp2

0x2285,	// (0x000025cb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2285,	// (0x000025cb) list_single_large_graphic_pane_g4_cp1

0x229f,	// (0x000025e5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x229f,	// (0x000025e5) list_single_large_graphic_pane_t1_cp2

0x4260,	// (0x000045a6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4260,	// (0x000045a6) list_single_graphic_heading_pane_g1_cp2

0x422d,	// (0x00004573) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x422d,	// (0x00004573) list_single_graphic_heading_pane_g4_cp2

0x2251,	// (0x00002597) list_single_graphic_heading_pane_g5_cp2

0x426c,	// (0x000045b2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x426c,	// (0x000045b2) list_single_graphic_heading_pane_t1_cp2

0x4282,	// (0x000045c8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4282,	// (0x000045c8) list_single_graphic_heading_pane_t2_cp2

0x4221,	// (0x00004567) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4221,	// (0x00004567) list_single_2graphic_pane_g1_cp2

0x422d,	// (0x00004573) list_single_2graphic_pane_g2_cp2_ParamLimits

0x422d,	// (0x00004573) list_single_2graphic_pane_g2_cp2

0x2251,	// (0x00002597) list_single_2graphic_pane_g3_cp2

0x423e,	// (0x00004584) list_single_2graphic_pane_g4_cp2_ParamLimits

0x423e,	// (0x00004584) list_single_2graphic_pane_g4_cp2

0x424a,	// (0x00004590) list_single_2graphic_pane_t1_cp2_ParamLimits

0x424a,	// (0x00004590) list_single_2graphic_pane_t1_cp2

0xf307,	// (0x0000f64d) list_highlight_pane_g10_cp1

0x3df9,	// (0x0000413f) list_highlight_pane_g1_cp1

0x3e01,	// (0x00004147) list_highlight_pane_g2_cp1

0x3e09,	// (0x0000414f) list_highlight_pane_g3_cp1

0x3e11,	// (0x00004157) list_highlight_pane_g4_cp1

0x3e19,	// (0x0000415f) list_highlight_pane_g5_cp1

0x3e21,	// (0x00004167) list_highlight_pane_g6_cp1

0x3e29,	// (0x0000416f) list_highlight_pane_g7_cp1

0x3e31,	// (0x00004177) list_highlight_pane_g8_cp1

0x3e39,	// (0x0000417f) list_highlight_pane_g9_cp1

0xd09e,	// (0x0000d3e4) form_field_slider_pane_t3

0xd0ac,	// (0x0000d3f2) form_field_slider_pane_t4

0x3d35,	// (0x0000407b) slider_form_pane_ParamLimits

0x3d35,	// (0x0000407b) slider_form_pane

0xf4cf,	// (0x0000f815) control_abbreviations

0xf4cf,	// (0x0000f815) control_conventions

0xf4cf,	// (0x0000f815) control_definitions

0xf4cf,	// (0x0000f815) format_table_attribute

0x4677,	// (0x000049bd) bg_popup_preview_window_pane_g9

0xf4cf,	// (0x0000f815) format_table_data2

0xf4cf,	// (0x0000f815) format_table_data3

0xf4cf,	// (0x0000f815) format_table_data_example

0x0008,

0xf4cf,	// (0x0000f815) intro_purpose

0xf8b7,	// (0x0000fbfd) bg_popup_preview_window_pane_g

0xf4cf,	// (0x0000f815) texts_category

0xf4cf,	// (0x0000f815) texts_graphics

0x22b5,	// (0x000025fb) text_digital

0x22c4,	// (0x0000260a) text_primary

0x22d3,	// (0x00002619) text_primary_small

0x22e2,	// (0x00002628) text_secondary

0x22f1,	// (0x00002637) text_title

0x4f49,	// (0x0000528f) bg_passive_tab_pane_g1_cp3_srt

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp3_srt

0x4f52,	// (0x00005298) bg_passive_tab_pane_g3_cp3_srt

0x04ed,	// (0x00000833) bg_active_tab_pane_cp3_srt_ParamLimits

0x04ed,	// (0x00000833) bg_active_tab_pane_cp3_srt

0x4f5b,	// (0x000052a1) tabs_4_active_pane_srt_g1

0xd41f,	// (0x0000d765) tabs_4_active_pane_srt_t1_ParamLimits

0xd41f,	// (0x0000d765) tabs_4_active_pane_srt_t1

0x4f49,	// (0x0000528f) bg_active_tab_pane_g1_cp3_copy1

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp3_copy1

0x4f52,	// (0x00005298) bg_active_tab_pane_g3_cp3_copy1

0x01c7,	// (0x0000050d) tabs_2_long_active_pane_srt_ParamLimits

0x01c7,	// (0x0000050d) tabs_2_long_active_pane_srt

0x01c7,	// (0x0000050d) tabs_2_long_passive_pane_srt_ParamLimits

0x01c7,	// (0x0000050d) tabs_2_long_passive_pane_srt

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp4_srt_ParamLimits

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp4_srt

0x4af7,	// (0x00004e3d) bg_passive_tab_pane_g1_cp4_srt

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp4_srt

0x4b00,	// (0x00004e46) bg_passive_tab_pane_g3_cp4_srt

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp4_srt_ParamLimits

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp4_srt

0xd209,	// (0x0000d54f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd209,	// (0x0000d54f) tabs_2_long_active_pane_srt_t1

0x4af7,	// (0x00004e3d) bg_active_tab_pane_g1_cp4_srt

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp4_srt

0x4b00,	// (0x00004e46) bg_active_tab_pane_g3_cp4_srt

0x04ed,	// (0x00000833) tabs_3_long_active_pane_srt_ParamLimits

0x04ed,	// (0x00000833) tabs_3_long_active_pane_srt

0x04ed,	// (0x00000833) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x04ed,	// (0x00000833) tabs_3_long_passive_pane_cp_srt

0x04ed,	// (0x00000833) tabs_3_long_passive_pane_srt_ParamLimits

0x04ed,	// (0x00000833) tabs_3_long_passive_pane_srt

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp5_srt_ParamLimits

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp5_srt

0x1fd3,	// (0x00002319) bg_passive_tab_pane_g1_cp5_srt

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp5_srt

0x1fdc,	// (0x00002322) bg_passive_tab_pane_g3_cp5_srt

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp5_srt_ParamLimits

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp5_srt

0xd1f3,	// (0x0000d539) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd1f3,	// (0x0000d539) tabs_3_long_active_pane_srt_t1

0x1fd3,	// (0x00002319) bg_active_tab_pane_g1_cp5_srt

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp5_srt

0x1fdc,	// (0x00002322) bg_active_tab_pane_g3_cp5_srt

0x4ad7,	// (0x00004e1d) navi_text_pane_srt_t1

0x4acf,	// (0x00004e15) navi_icon_pane_srt_g1

0x256f,	// (0x000028b5) midp_editing_number_pane_srt

0x2300,	// (0x00002646) midp_ticker_pane_srt

0x2577,	// (0x000028bd) midp_ticker_pane_srt_g1

0x257f,	// (0x000028c5) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x0000fa8c) midp_ticker_pane_srt_g

0x2587,	// (0x000028cd) midp_ticker_pane_srt_t1

0x4ac0,	// (0x00004e06) midp_editing_number_pane_t1_copy1

0xc22d,	// (0x0000c573) listscroll_midp_pane

0xc22d,	// (0x0000c573) midp_form_pane

0x2378,	// (0x000026be) midp_info_popup_window_ParamLimits

0x2378,	// (0x000026be) midp_info_popup_window

0x12f8,	// (0x0000163e) bg_popup_sub_pane_cp50_ParamLimits

0x12f8,	// (0x0000163e) bg_popup_sub_pane_cp50

0x3a1d,	// (0x00003d63) listscroll_midp_info_pane_ParamLimits

0x3a1d,	// (0x00003d63) listscroll_midp_info_pane

0x39fd,	// (0x00003d43) listscroll_form_midp_pane_ParamLimits

0x39fd,	// (0x00003d43) listscroll_form_midp_pane

0x3a09,	// (0x00003d4f) scroll_bar_cp050

0x39fd,	// (0x00003d43) list_midp_pane

0x5d8a,	// (0x000060d0) signal_pane_g2_cp

0x3917,	// (0x00003c5d) listscroll_midp_info_pane_t1_ParamLimits

0x3917,	// (0x00003c5d) listscroll_midp_info_pane_t1

0x392f,	// (0x00003c75) listscroll_midp_info_pane_t2_ParamLimits

0x392f,	// (0x00003c75) listscroll_midp_info_pane_t2

0x396d,	// (0x00003cb3) listscroll_midp_info_pane_t3_ParamLimits

0x396d,	// (0x00003cb3) listscroll_midp_info_pane_t3

0x39a7,	// (0x00003ced) listscroll_midp_info_pane_t4_ParamLimits

0x39a7,	// (0x00003ced) listscroll_midp_info_pane_t4

0x0003,

0xf7f2,	// (0x0000fb38) listscroll_midp_info_pane_t_ParamLimits

0xf7f2,	// (0x0000fb38) listscroll_midp_info_pane_t

0x1359,	// (0x0000169f) scroll_pane_cp21

0x38b5,	// (0x00003bfb) form_midp_field_choice_group_pane

0x38be,	// (0x00003c04) form_midp_field_text_pane

0x38fd,	// (0x00003c43) form_midp_field_time_pane

0x3905,	// (0x00003c4b) form_midp_gauge_slider_pane

0x390e,	// (0x00003c54) form_midp_gauge_wait_pane

0xf4cf,	// (0x0000f815) form_midp_image_pane

0xd088,	// (0x0000d3ce) list_single_midp_pane_ParamLimits

0xd088,	// (0x0000d3ce) list_single_midp_pane

0xd067,	// (0x0000d3ad) form_midp_field_text_pane_t1

0x3578,	// (0x000038be) input_focus_pane_cp050

0x3876,	// (0x00003bbc) list_midp_form_text_pane

0x380e,	// (0x00003b54) form_midp_field_choice_group_pane_t1

0x381c,	// (0x00003b62) input_focus_pane_cp051

0x3830,	// (0x00003b76) list_midp_choice_pane

0xf4cf,	// (0x0000f815) status_idle_pane

0x37f2,	// (0x00003b38) form_midp_field_time_pane_t1

0xf307,	// (0x0000f64d) wait_anim_pane_g2_copy1

0x3800,	// (0x00003b46) form_midp_field_time_pane_t2

0x0001,

0x2426,	// (0x0000276c) aid_navinavi_width_2_pane

0xf7ed,	// (0x0000fb33) form_midp_field_time_pane_t

0xf4cf,	// (0x0000f815) input_focus_pane_cp052

0xf4cf,	// (0x0000f815) bg_input_focus_pane_cp040

0x37b2,	// (0x00003af8) form_midp_gauge_slider_pane_t1

0x37c0,	// (0x00003b06) form_midp_gauge_slider_pane_t2

0xd04b,	// (0x0000d391) form_midp_gauge_slider_pane_t3

0xd059,	// (0x0000d39f) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e4,	// (0x0000fb2a) form_midp_gauge_slider_pane_t

0x37ea,	// (0x00003b30) form_midp_slider_pane

0x01c7,	// (0x0000050d) bg_input_focus_pane_cp041_ParamLimits

0x01c7,	// (0x0000050d) bg_input_focus_pane_cp041

0x377f,	// (0x00003ac5) form_midp_gauge_wait_pane_t1_ParamLimits

0x377f,	// (0x00003ac5) form_midp_gauge_wait_pane_t1

0x3791,	// (0x00003ad7) form_midp_gauge_wait_pane_t2_ParamLimits

0x3791,	// (0x00003ad7) form_midp_gauge_wait_pane_t2

0x0001,

0xf7df,	// (0x0000fb25) form_midp_gauge_wait_pane_t_ParamLimits

0xf7df,	// (0x0000fb25) form_midp_gauge_wait_pane_t

0x37a3,	// (0x00003ae9) form_midp_wait_pane_ParamLimits

0x37a3,	// (0x00003ae9) form_midp_wait_pane

0x3749,	// (0x00003a8f) form_midp_image_pane_g1

0x3752,	// (0x00003a98) form_midp_image_pane_t1

0x3761,	// (0x00003aa7) form_midp_image_pane_t2

0x3770,	// (0x00003ab6) form_midp_image_pane_t3

0x0002,

0xf7d8,	// (0x0000fb1e) form_midp_image_pane_t

0x3731,	// (0x00003a77) list_single_midp_pane_g1

0x373a,	// (0x00003a80) list_single_midp_pane_t1

0xd037,	// (0x0000d37d) list_midp_form_item_pane_ParamLimits

0xd037,	// (0x0000d37d) list_midp_form_item_pane

0x23ce,	// (0x00002714) list_midp_form_item_pane_t1

0x23dd,	// (0x00002723) midp_ticker_pane_g1

0x23e9,	// (0x0000272f) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x0000fa72) midp_ticker_pane_g

0x23f5,	// (0x0000273b) midp_ticker_pane_t1

0x4dbc,	// (0x00005102) midp_editing_number_pane_t1

0x4d9a,	// (0x000050e0) midp_editing_number_pane

0x4da9,	// (0x000050ef) midp_ticker_pane

0x3a29,	// (0x00003d6f) ai_message_heading_pane

0xf4cf,	// (0x0000f815) bg_popup_window_pane_cp14

0x3a31,	// (0x00003d77) listscroll_ai_message_pane

0x4a38,	// (0x00004d7e) ai_message_heading_pane_g1_ParamLimits

0x4a38,	// (0x00004d7e) ai_message_heading_pane_g1

0x4a44,	// (0x00004d8a) ai_message_heading_pane_g2_ParamLimits

0x4a44,	// (0x00004d8a) ai_message_heading_pane_g2

0x4a50,	// (0x00004d96) ai_message_heading_pane_g3_ParamLimits

0x4a50,	// (0x00004d96) ai_message_heading_pane_g3

0x4a5c,	// (0x00004da2) ai_message_heading_pane_g4_ParamLimits

0x4a5c,	// (0x00004da2) ai_message_heading_pane_g4

0x0003,

0xf919,	// (0x0000fc5f) ai_message_heading_pane_g_ParamLimits

0xf919,	// (0x0000fc5f) ai_message_heading_pane_g

0x4a68,	// (0x00004dae) ai_message_heading_pane_t1_ParamLimits

0x4a68,	// (0x00004dae) ai_message_heading_pane_t1

0x4a82,	// (0x00004dc8) ai_message_heading_pane_t2_ParamLimits

0x4a82,	// (0x00004dc8) ai_message_heading_pane_t2

0x0001,

0xf922,	// (0x0000fc68) ai_message_heading_pane_t_ParamLimits

0xf922,	// (0x0000fc68) ai_message_heading_pane_t

0x4a94,	// (0x00004dda) bg_popup_heading_pane_cp1_ParamLimits

0x4a94,	// (0x00004dda) bg_popup_heading_pane_cp1

0x4a26,	// (0x00004d6c) list_ai_message_pane_ParamLimits

0x4a26,	// (0x00004d6c) list_ai_message_pane

0x1359,	// (0x0000169f) scroll_pane_cp10

0x4972,	// (0x00004cb8) list_ai_message_pane_g1

0x497a,	// (0x00004cc0) list_ai_message_pane_g2

0x0001,

0xf8f6,	// (0x0000fc3c) list_ai_message_pane_g

0x4982,	// (0x00004cc8) list_ai_message_pane_t1_ParamLimits

0x4982,	// (0x00004cc8) list_ai_message_pane_t1

0x4997,	// (0x00004cdd) list_ai_message_pane_t2_ParamLimits

0x4997,	// (0x00004cdd) list_ai_message_pane_t2

0x49ac,	// (0x00004cf2) list_ai_message_pane_t3_ParamLimits

0x49ac,	// (0x00004cf2) list_ai_message_pane_t3

0x49c1,	// (0x00004d07) list_ai_message_pane_t4_ParamLimits

0x49c1,	// (0x00004d07) list_ai_message_pane_t4

0x0003,

0xf8fb,	// (0x0000fc41) list_ai_message_pane_t_ParamLimits

0xf8fb,	// (0x0000fc41) list_ai_message_pane_t

0xd1d2,	// (0x0000d518) cell_ai_soft_ind_pane_ParamLimits

0xd1d2,	// (0x0000d518) cell_ai_soft_ind_pane

0x2407,	// (0x0000274d) cell_ai_soft_ind_pane_g1_ParamLimits

0x2407,	// (0x0000274d) cell_ai_soft_ind_pane_g1

0xf4cf,	// (0x0000f815) grid_highlight_cp1

0x2414,	// (0x0000275a) text_secondary_cp56_ParamLimits

0x2414,	// (0x0000275a) text_secondary_cp56

0x4932,	// (0x00004c78) example_general_pane_ParamLimits

0x4932,	// (0x00004c78) example_general_pane

0x493e,	// (0x00004c84) example_parent_pane_g1_ParamLimits

0x493e,	// (0x00004c84) example_parent_pane_g1

0x494a,	// (0x00004c90) example_parent_pane_t1_ParamLimits

0x494a,	// (0x00004c90) example_parent_pane_t1

0xc884,	// (0x0000cbca) popup_preview_text_window_ParamLimits

0xc884,	// (0x0000cbca) popup_preview_text_window

0x223d,	// (0x00002583) list_single_pane_cp2_g4

0x05c9,	// (0x0000090f) bg_popup_preview_window_pane_ParamLimits

0x05c9,	// (0x0000090f) bg_popup_preview_window_pane

0x467f,	// (0x000049c5) popup_preview_text_window_t1_ParamLimits

0x467f,	// (0x000049c5) popup_preview_text_window_t1

0x469d,	// (0x000049e3) popup_preview_text_window_t2_ParamLimits

0x469d,	// (0x000049e3) popup_preview_text_window_t2

0x46e6,	// (0x00004a2c) popup_preview_text_window_t3_ParamLimits

0x46e6,	// (0x00004a2c) popup_preview_text_window_t3

0x472b,	// (0x00004a71) popup_preview_text_window_t4_ParamLimits

0x472b,	// (0x00004a71) popup_preview_text_window_t4

0x0004,

0xf8ca,	// (0x0000fc10) popup_preview_text_window_t_ParamLimits

0xf8ca,	// (0x0000fc10) popup_preview_text_window_t

0x47a9,	// (0x00004aef) scroll_pane_cp11

0x33ca,	// (0x00003710) bg_popup_preview_window_pane_g1

0x463f,	// (0x00004985) bg_popup_preview_window_pane_g2

0x4647,	// (0x0000498d) bg_popup_preview_window_pane_g3

0x464f,	// (0x00004995) bg_popup_preview_window_pane_g4

0x4657,	// (0x0000499d) bg_popup_preview_window_pane_g5

0x465f,	// (0x000049a5) bg_popup_preview_window_pane_g6

0x4667,	// (0x000049ad) bg_popup_preview_window_pane_g7

0x466f,	// (0x000049b5) bg_popup_preview_window_pane_g8

0xf31d,	// (0x0000f663) aid_popup_width_pane

0xc800,	// (0x0000cb46) popup_midp_note_alarm_window_ParamLimits

0xc800,	// (0x0000cb46) popup_midp_note_alarm_window

0x1028,	// (0x0000136e) data_form_pane_ParamLimits

0xbf2f,	// (0x0000c275) form_field_data_pane_g1

0xbf39,	// (0x0000c27f) form_field_data_pane_t1_ParamLimits

0x1056,	// (0x0000139c) input_focus_pane_ParamLimits

0x1064,	// (0x000013aa) data_form_wide_pane_ParamLimits

0x1070,	// (0x000013b6) form_field_data_wide_pane_g1

0x109c,	// (0x000013e2) form_field_data_wide_pane_t1_ParamLimits

0x0870,	// (0x00000bb6) input_focus_pane_cp6_ParamLimits

0xc036,	// (0x0000c37c) input_popup_find_pane_g1_ParamLimits

0xc036,	// (0x0000c37c) input_popup_find_pane_g1

0x1687,	// (0x000019cd) aid_navi_side_left_pane

0x169c,	// (0x000019e2) aid_navi_side_right_pane

0x3ef4,	// (0x0000423a) bg_popup_window_pane_cp30_ParamLimits

0x3ef4,	// (0x0000423a) bg_popup_window_pane_cp30

0x3f6e,	// (0x000042b4) popup_midp_note_alarm_window_g1_ParamLimits

0x3f6e,	// (0x000042b4) popup_midp_note_alarm_window_g1

0x3f9e,	// (0x000042e4) popup_midp_note_alarm_window_t1_ParamLimits

0x3f9e,	// (0x000042e4) popup_midp_note_alarm_window_t1

0x403f,	// (0x00004385) popup_midp_note_alarm_window_t2_ParamLimits

0x403f,	// (0x00004385) popup_midp_note_alarm_window_t2

0x40ed,	// (0x00004433) popup_midp_note_alarm_window_t3_ParamLimits

0x40ed,	// (0x00004433) popup_midp_note_alarm_window_t3

0x411f,	// (0x00004465) popup_midp_note_alarm_window_t4_ParamLimits

0x411f,	// (0x00004465) popup_midp_note_alarm_window_t4

0x4145,	// (0x0000448b) popup_midp_note_alarm_window_t5_ParamLimits

0x4145,	// (0x0000448b) popup_midp_note_alarm_window_t5

0x000a,

0xf867,	// (0x0000fbad) popup_midp_note_alarm_window_t_ParamLimits

0xf867,	// (0x0000fbad) popup_midp_note_alarm_window_t

0x41f1,	// (0x00004537) wait_bar_pane_cp1_ParamLimits

0x41f1,	// (0x00004537) wait_bar_pane_cp1

0xf4cf,	// (0x0000f815) wait_anim_pane_copy1

0xf4cf,	// (0x0000f815) wait_border_pane_copy1

0x3bda,	// (0x00003f20) wait_border_pane_g1_copy1

0x10b3,	// (0x000013f9) form_field_popup_pane_g1

0xbf53,	// (0x0000c299) form_field_popup_pane_t1_ParamLimits

0x1056,	// (0x0000139c) input_focus_pane_cp7_ParamLimits

0x10d3,	// (0x00001419) list_form_pane_ParamLimits

0x10df,	// (0x00001425) form_field_popup_wide_pane_g1

0x10e7,	// (0x0000142d) form_field_popup_wide_pane_t1_ParamLimits

0x1056,	// (0x0000139c) input_focus_pane_cp8_ParamLimits

0x10f9,	// (0x0000143f) list_form_wide_pane_ParamLimits

0x4fee,	// (0x00005334) aid_size_cell_graphic_pane

0xbfd2,	// (0x0000c318) data_form_pane_t1_ParamLimits

0xd374,	// (0x0000d6ba) data_form_wide_pane_t1_ParamLimits

0xcc4c,	// (0x0000cf92) bg_status_flat_pane

0xb851,	// (0x0000bb97) title_pane_t1_ParamLimits

0x018f,	// (0x000004d5) title_pane_t2_ParamLimits

0x01b5,	// (0x000004fb) title_pane_t3_ParamLimits

0xf530,	// (0x0000f876) title_pane_t_ParamLimits

0x19a0,	// (0x00001ce6) level_1_signal_ParamLimits

0x19b2,	// (0x00001cf8) level_2_signal_ParamLimits

0x19c5,	// (0x00001d0b) level_3_signal_ParamLimits

0x19d8,	// (0x00001d1e) level_4_signal_ParamLimits

0x19eb,	// (0x00001d31) level_5_signal_ParamLimits

0x19fe,	// (0x00001d44) level_6_signal_ParamLimits

0x1a11,	// (0x00001d57) level_7_signal_ParamLimits

0x19a0,	// (0x00001ce6) level_1_battery_ParamLimits

0x19b2,	// (0x00001cf8) level_2_battery_ParamLimits

0x19c5,	// (0x00001d0b) level_3_battery_ParamLimits

0x19d8,	// (0x00001d1e) level_4_battery_ParamLimits

0x19eb,	// (0x00001d31) level_5_battery_ParamLimits

0x19fe,	// (0x00001d44) level_6_battery_ParamLimits

0x1a11,	// (0x00001d57) level_7_battery_ParamLimits

0x3df9,	// (0x0000413f) bg_status_flat_pane_g1

0x3e01,	// (0x00004147) bg_status_flat_pane_g2

0x3e09,	// (0x0000414f) bg_status_flat_pane_g3

0x3e11,	// (0x00004157) bg_status_flat_pane_g4

0x3e19,	// (0x0000415f) bg_status_flat_pane_g5

0x3e21,	// (0x00004167) bg_status_flat_pane_g6

0x3e29,	// (0x0000416f) bg_status_flat_pane_g7

0xb8dd,	// (0x0000bc23) tabs_3_active_pane_t1_ParamLimits

0xb8dd,	// (0x0000bc23) tabs_3_passive_pane_t1_ParamLimits

0xb8ef,	// (0x0000bc35) tabs_4_active_pane_t1_ParamLimits

0xb8ef,	// (0x0000bc35) tabs_4_1_passive_pane_t1_ParamLimits

0xc044,	// (0x0000c38a) tabs_2_active_pane_t1_ParamLimits

0xc044,	// (0x0000c38a) tabs_2_passive_pane_t1_ParamLimits

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp4_ParamLimits

0xc056,	// (0x0000c39c) tabs_2_long_active_pane_t1_ParamLimits

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp4_ParamLimits

0x349b,	// (0x000037e1) list_single_midp_graphic_pane_t1_ParamLimits

0x01c7,	// (0x0000050d) bg_active_tab_pane_cp5_ParamLimits

0xc069,	// (0x0000c3af) tabs_3_long_active_pane_t1_ParamLimits

0x284f,	// (0x00002b95) bg_passive_tab_pane_cp5_ParamLimits

0x349b,	// (0x000037e1) list_single_midp_graphic_pane_t1

0xcc4c,	// (0x0000cf92) bg_status_flat_pane_ParamLimits

0x2fcc,	// (0x00003312) indicator_pane_cp2_ParamLimits

0x2fcc,	// (0x00003312) indicator_pane_cp2

0xcdca,	// (0x0000d110) navi_pane_srt_ParamLimits

0xcdca,	// (0x0000d110) navi_pane_srt

0x311b,	// (0x00003461) popup_clock_digital_analogue_window_cp1

0x034f,	// (0x00000695) indicator_pane_t1

0x2300,	// (0x00002646) copy_highlight_pane

0x2300,	// (0x00002646) cursor_graphics_pane

0x2300,	// (0x00002646) graphic_within_text_pane

0x2300,	// (0x00002646) link_highlight_pane

0x476c,	// (0x00004ab2) popup_preview_text_window_t5_ParamLimits

0x476c,	// (0x00004ab2) popup_preview_text_window_t5

0x242e,	// (0x00002774) cursor_digital_pane

0x242e,	// (0x00002774) cursor_primary_pane

0x243f,	// (0x00002785) cursor_primary_small_pane

0x2447,	// (0x0000278d) cursor_secondary_pane

0x244f,	// (0x00002795) cursor_title_pane

0x242e,	// (0x00002774) link_highlight_digital_pane

0x2436,	// (0x0000277c) link_highlight_primary_pane

0x243f,	// (0x00002785) link_highlight_primary_small_pane

0x2447,	// (0x0000278d) link_highlight_secondary_pane

0x244f,	// (0x00002795) link_highlight_title_pane

0x242e,	// (0x00002774) copy_highlight_digital_pane

0x242e,	// (0x00002774) copy_highlight_primary_pane

0x243f,	// (0x00002785) copy_highlight_primary_small_pane

0x2447,	// (0x0000278d) copy_highlight_secondary_pane

0x244f,	// (0x00002795) copy_highlight_title_pane

0x2447,	// (0x0000278d) graphic_text_digital_pane

0x3e97,	// (0x000041dd) graphic_text_primary_pane

0x3ea0,	// (0x000041e6) graphic_text_primary_small_pane

0x243f,	// (0x00002785) graphic_text_secondary_pane

0x242e,	// (0x00002774) graphic_text_title_pane

0xc2d2,	// (0x0000c618) cursor_primary_pane_g1

0x3e89,	// (0x000041cf) cursor_text_primary_t1

0xd0ce,	// (0x0000d414) cursor_primary_small_pane_g1

0x3e7b,	// (0x000041c1) cursor_text_primary_small_t1

0xd0c4,	// (0x0000d40a) cursor_primary_small_pane_g1_copy1

0x3e63,	// (0x000041a9) cursor_text_primary_small_t1_copy1

0x3e41,	// (0x00004187) cursor_text_title_t1

0xd0ba,	// (0x0000d400) cursor_title_pane_g1

0xc2d2,	// (0x0000c618) cursor_digital_pane_g1

0x2461,	// (0x000027a7) cursor_text_digital_t1

0x2486,	// (0x000027cc) link_highlight_primary_pane_g1

0x3dea,	// (0x00004130) link_highlight_primary_pane_t1

0x246f,	// (0x000027b5) link_highlight_primary_small_pane_g1

0x2477,	// (0x000027bd) link_highlight_primary_small_pane_t1

0x2486,	// (0x000027cc) link_highlight_secondary_pane_g1

0x248e,	// (0x000027d4) link_highlight_secondary_pane_t1

0x3d5e,	// (0x000040a4) link_highlight_title_pane_g1

0x3d66,	// (0x000040ac) link_highlight_title_pane_t1

0x3d47,	// (0x0000408d) link_highlight_digital_pane_g1

0x3d4f,	// (0x00004095) link_highlight_digital_pane_t1

0x3c1f,	// (0x00003f65) copy_highlight_primary_pane_g1

0x3c27,	// (0x00003f6d) copy_highlight_primary_pane_t1

0x3bf9,	// (0x00003f3f) copy_highlight_primary_small_pane_g1

0x3c10,	// (0x00003f56) copy_highlight_primary_small_pane_t1

0x249d,	// (0x000027e3) copy_highlight_secondary_pane_g1

0x24a5,	// (0x000027eb) copy_highlight_secondary_pane_t1

0x3bf9,	// (0x00003f3f) copy_highlight_title_pane_g1

0x3c01,	// (0x00003f47) copy_highlight_title_pane_t1

0x3c1f,	// (0x00003f65) copy_highlight_digital_pane_g1

0x5274,	// (0x000055ba) copy_highlight_digital_pane_t1

0x51c8,	// (0x0000550e) graphic_text_primary_pane_g1

0x5258,	// (0x0000559e) graphic_text_primary_pane_t1

0x5266,	// (0x000055ac) graphic_text_primary_pane_t2

0x0001,

0xf996,	// (0x0000fcdc) graphic_text_primary_pane_t

0x5234,	// (0x0000557a) graphic_text_primary_small_pane_g1

0x523c,	// (0x00005582) graphic_text_primary_small_pane_t1

0x524a,	// (0x00005590) graphic_text_primary_small_pane_t2

0x0001,

0xf991,	// (0x0000fcd7) graphic_text_primary_small_pane_t

0x5210,	// (0x00005556) graphic_text_secondary_pane_g1

0x5218,	// (0x0000555e) graphic_text_secondary_pane_t1

0x5226,	// (0x0000556c) graphic_text_secondary_pane_t2

0x0001,

0xf98c,	// (0x0000fcd2) graphic_text_secondary_pane_t

0x51ec,	// (0x00005532) graphic_text_title_pane_g1

0x51f4,	// (0x0000553a) graphic_text_title_pane_t1

0x5202,	// (0x00005548) graphic_text_title_pane_t2

0x0001,

0xf987,	// (0x0000fccd) graphic_text_title_pane_t

0x51c8,	// (0x0000550e) graphic_text_digital_pane_g1

0x51d0,	// (0x00005516) graphic_text_digital_pane_t1

0x51de,	// (0x00005524) graphic_text_digital_pane_t2

0x0001,

0xf982,	// (0x0000fcc8) graphic_text_digital_pane_t

0x01c7,	// (0x0000050d) navi_icon_pane_srt_ParamLimits

0x01c7,	// (0x0000050d) navi_icon_pane_srt

0xf4cf,	// (0x0000f815) navi_midp_pane_srt

0xf4cf,	// (0x0000f815) navi_navi_pane_srt

0x01c7,	// (0x0000050d) navi_text_pane_srt_ParamLimits

0x01c7,	// (0x0000050d) navi_text_pane_srt

0x5193,	// (0x000054d9) navi_navi_icon_text_pane_srt

0x519b,	// (0x000054e1) navi_navi_pane_srt_g1_ParamLimits

0x519b,	// (0x000054e1) navi_navi_pane_srt_g1

0x51ad,	// (0x000054f3) navi_navi_pane_srt_g2_ParamLimits

0x51ad,	// (0x000054f3) navi_navi_pane_srt_g2

0x0001,

0xf97d,	// (0x0000fcc3) navi_navi_pane_srt_g_ParamLimits

0xf97d,	// (0x0000fcc3) navi_navi_pane_srt_g

0x51bf,	// (0x00005505) navi_navi_tabs_pane_srt

0x5193,	// (0x000054d9) navi_navi_text_pane_srt

0x5193,	// (0x000054d9) navi_navi_volume_pane_srt

0x5184,	// (0x000054ca) navi_navi_text_pane_srt_t1

0x515f,	// (0x000054a5) navi_navi_volume_pane_srt_g1

0x5167,	// (0x000054ad) volume_small_pane_srt_ParamLimits

0x5167,	// (0x000054ad) volume_small_pane_srt

0x24b4,	// (0x000027fa) volume_small_pane_srt_g1_ParamLimits

0x24b4,	// (0x000027fa) volume_small_pane_srt_g1

0x24c4,	// (0x0000280a) volume_small_pane_srt_g2_ParamLimits

0x24c4,	// (0x0000280a) volume_small_pane_srt_g2

0x24d5,	// (0x0000281b) volume_small_pane_srt_g3_ParamLimits

0x24d5,	// (0x0000281b) volume_small_pane_srt_g3

0x24e6,	// (0x0000282c) volume_small_pane_srt_g4_ParamLimits

0x24e6,	// (0x0000282c) volume_small_pane_srt_g4

0x24f7,	// (0x0000283d) volume_small_pane_srt_g5_ParamLimits

0x24f7,	// (0x0000283d) volume_small_pane_srt_g5

0x2508,	// (0x0000284e) volume_small_pane_srt_g6_ParamLimits

0x2508,	// (0x0000284e) volume_small_pane_srt_g6

0x2519,	// (0x0000285f) volume_small_pane_srt_g7_ParamLimits

0x2519,	// (0x0000285f) volume_small_pane_srt_g7

0x252a,	// (0x00002870) volume_small_pane_srt_g8_ParamLimits

0x252a,	// (0x00002870) volume_small_pane_srt_g8

0x253b,	// (0x00002881) volume_small_pane_srt_g9_ParamLimits

0x253b,	// (0x00002881) volume_small_pane_srt_g9

0x254c,	// (0x00002892) volume_small_pane_srt_g10_ParamLimits

0x254c,	// (0x00002892) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x0000fa77) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x0000fa77) volume_small_pane_srt_g

0x0672,	// (0x000009b8) query_popup_data_pane_cp2

0x514d,	// (0x00005493) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x514d,	// (0x00005493) navi_navi_icon_text_pane_srt_t1

0x3e97,	// (0x000041dd) navi_tabs_2_long_pane_srt

0x3e97,	// (0x000041dd) navi_tabs_2_pane_srt

0x3e97,	// (0x000041dd) navi_tabs_3_long_pane_srt

0x3e97,	// (0x000041dd) navi_tabs_3_pane_srt

0x3e97,	// (0x000041dd) navi_tabs_4_pane_srt

0x5125,	// (0x0000546b) tabs_2_active_pane_srt_ParamLimits

0x5125,	// (0x0000546b) tabs_2_active_pane_srt

0x5135,	// (0x0000547b) tabs_2_passive_pane_srt_ParamLimits

0x5135,	// (0x0000547b) tabs_2_passive_pane_srt

0x3578,	// (0x000038be) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3578,	// (0x000038be) bg_passive_tab_pane_cp1_srt

0x50f9,	// (0x0000543f) bg_passive_tab_pane_g1_cp1_srt

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp1_srt

0x5102,	// (0x00005448) bg_passive_tab_pane_g3_cp1_srt

0x04ed,	// (0x00000833) bg_active_tab_pane_cp1_srt_ParamLimits

0x04ed,	// (0x00000833) bg_active_tab_pane_cp1_srt

0x510b,	// (0x00005451) tabs_2_active_pane_srt_g1

0xd4a4,	// (0x0000d7ea) tabs_2_active_pane_srt_t1_ParamLimits

0xd4a4,	// (0x0000d7ea) tabs_2_active_pane_srt_t1

0x50f9,	// (0x0000543f) bg_active_tab_pane_g1_cp1_srt

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp1_srt

0x5102,	// (0x00005448) bg_active_tab_pane_g3_cp1_srt

0x50c6,	// (0x0000540c) tabs_3_active_pane_srt_ParamLimits

0x50c6,	// (0x0000540c) tabs_3_active_pane_srt

0x50d7,	// (0x0000541d) tabs_3_passive_pane_cp_srt_ParamLimits

0x50d7,	// (0x0000541d) tabs_3_passive_pane_cp_srt

0x50e8,	// (0x0000542e) tabs_3_passive_pane_srt_ParamLimits

0x50e8,	// (0x0000542e) tabs_3_passive_pane_srt

0x3578,	// (0x000038be) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3578,	// (0x000038be) bg_passive_tab_pane_cp2_srt

0x255d,	// (0x000028a3) bg_passive_tab_pane_g1_cp2_srt

0x1e08,	// (0x0000214e) bg_passive_tab_pane_g2_cp2_srt

0x2566,	// (0x000028ac) bg_passive_tab_pane_g3_cp2_srt

0x04ed,	// (0x00000833) bg_active_tab_pane_cp2_srt_ParamLimits

0x04ed,	// (0x00000833) bg_active_tab_pane_cp2_srt

0x50ac,	// (0x000053f2) tabs_3_active_pane_srt_g1

0xd48e,	// (0x0000d7d4) tabs_3_active_pane_srt_t1_ParamLimits

0xd48e,	// (0x0000d7d4) tabs_3_active_pane_srt_t1

0x255d,	// (0x000028a3) bg_active_tab_pane_g1_cp2_srt

0x1e08,	// (0x0000214e) bg_active_tab_pane_g2_cp2_srt

0x2566,	// (0x000028ac) bg_active_tab_pane_g3_cp2_srt

0x5064,	// (0x000053aa) tabs_4_active_pane_srt_ParamLimits

0x5064,	// (0x000053aa) tabs_4_active_pane_srt

0x5076,	// (0x000053bc) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5076,	// (0x000053bc) tabs_4_passive_pane_cp2_srt

0x280f,	// (0x00002b55) aid_size_cell_toolbar

0x4be0,	// (0x00004f26) main_idle_act_pane_ParamLimits

0x2a32,	// (0x00002d78) popup_large_graphic_colour_window_ParamLimits

0xcb10,	// (0x0000ce56) popup_toolbar_window_ParamLimits

0xcb10,	// (0x0000ce56) popup_toolbar_window

0x4de6,	// (0x0000512c) list_single_graphic_2heading_pane_ParamLimits

0x4de6,	// (0x0000512c) list_single_graphic_2heading_pane

0x1713,	// (0x00001a59) aid_size_cell_apps_grid_lsc_pane

0x1725,	// (0x00001a6b) aid_size_cell_apps_grid_prt_pane

0x284f,	// (0x00002b95) bg_wml_button_pane_cp1_ParamLimits

0x284f,	// (0x00002b95) bg_wml_button_pane_cp1

0xd067,	// (0x0000d3ad) form_midp_field_text_pane_t1_ParamLimits

0x3578,	// (0x000038be) input_focus_pane_cp050_ParamLimits

0x3876,	// (0x00003bbc) list_midp_form_text_pane_ParamLimits

0x381c,	// (0x00003b62) input_focus_pane_cp051_ParamLimits

0x3830,	// (0x00003b76) list_midp_choice_pane_ParamLimits

0xd005,	// (0x0000d34b) list_single_2graphic_pane_cp3_ParamLimits

0xd005,	// (0x0000d34b) list_single_2graphic_pane_cp3

0xd018,	// (0x0000d35e) list_single_midp_graphic_pane_ParamLimits

0xd018,	// (0x0000d35e) list_single_midp_graphic_pane

0x0b2c,	// (0x00000e72) list_single_graphic_2heading_pane_g1_ParamLimits

0x0b2c,	// (0x00000e72) list_single_graphic_2heading_pane_g1

0x0ab2,	// (0x00000df8) list_single_graphic_2heading_pane_g4_ParamLimits

0x0ab2,	// (0x00000df8) list_single_graphic_2heading_pane_g4

0x0abe,	// (0x00000e04) list_single_graphic_2heading_pane_g5_ParamLimits

0x0abe,	// (0x00000e04) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x0000faca) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x0000faca) list_single_graphic_2heading_pane_g

0x327a,	// (0x000035c0) list_single_graphic_2heading_pane_t1_ParamLimits

0x327a,	// (0x000035c0) list_single_graphic_2heading_pane_t1

0x328e,	// (0x000035d4) list_single_graphic_2heading_pane_t2_ParamLimits

0x328e,	// (0x000035d4) list_single_graphic_2heading_pane_t2

0x32aa,	// (0x000035f0) list_single_graphic_2heading_pane_t3_ParamLimits

0x32aa,	// (0x000035f0) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x0000fad1) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x0000fad1) list_single_graphic_2heading_pane_t

0x32c2,	// (0x00003608) bg_popup_sub_pane_cp2

0x32ec,	// (0x00003632) grid_toobar_pane

0x3328,	// (0x0000366e) cell_toolbar_pane_ParamLimits

0x3328,	// (0x0000366e) cell_toolbar_pane

0x336e,	// (0x000036b4) cell_toolbar_pane_g1_ParamLimits

0x336e,	// (0x000036b4) cell_toolbar_pane_g1

0x3382,	// (0x000036c8) cell_toolbar_pane_g2_ParamLimits

0x3382,	// (0x000036c8) cell_toolbar_pane_g2

0x0001,

0xf792,	// (0x0000fad8) cell_toolbar_pane_g_ParamLimits

0xf792,	// (0x0000fad8) cell_toolbar_pane_g

0x33a4,	// (0x000036ea) grid_highlight_pane_cp2_ParamLimits

0x33a4,	// (0x000036ea) grid_highlight_pane_cp2

0x33be,	// (0x00003704) toolbar_button_pane

0x33ca,	// (0x00003710) toolbar_button_pane_g1

0x33d2,	// (0x00003718) toolbar_button_pane_g2

0x33da,	// (0x00003720) toolbar_button_pane_g3

0x33e2,	// (0x00003728) toolbar_button_pane_g4

0x33ea,	// (0x00003730) toolbar_button_pane_g5

0x33f2,	// (0x00003738) toolbar_button_pane_g6

0x33fa,	// (0x00003740) toolbar_button_pane_g7

0x3402,	// (0x00003748) toolbar_button_pane_g8

0x340a,	// (0x00003750) toolbar_button_pane_g9

0x0009,

0xf797,	// (0x0000fadd) toolbar_button_pane_g

0x341a,	// (0x00003760) list_single_2graphic_pane_g1_cp3_ParamLimits

0x341a,	// (0x00003760) list_single_2graphic_pane_g1_cp3

0xcf67,	// (0x0000d2ad) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcf67,	// (0x0000d2ad) list_single_2graphic_pane_g2_cp3

0x3437,	// (0x0000377d) list_single_2graphic_pane_g3_cp3

0x343f,	// (0x00003785) list_single_2graphic_pane_g4_cp3_ParamLimits

0x343f,	// (0x00003785) list_single_2graphic_pane_g4_cp3

0x344b,	// (0x00003791) list_single_2graphic_pane_t1_cp3_ParamLimits

0x344b,	// (0x00003791) list_single_2graphic_pane_t1_cp3

0x348f,	// (0x000037d5) list_single_midp_graphic_pane_g2_ParamLimits

0x348f,	// (0x000037d5) list_single_midp_graphic_pane_g2

0x2817,	// (0x00002b5d) aid_zoom_text_primary

0x281f,	// (0x00002b65) aid_zoom_text_secondary

0x2617,	// (0x0000295d) status_small_pane_g7_ParamLimits

0x2617,	// (0x0000295d) status_small_pane_g7

0x263a,	// (0x00002980) status_small_pane_t1_ParamLimits

0xb82d,	// (0x0000bb73) title_pane_g2

0x0003,

0xf527,	// (0x0000f86d) title_pane_g

0xbaa5,	// (0x0000bdeb) aid_size_cell_colour_1_pane_ParamLimits

0xbaa5,	// (0x0000bdeb) aid_size_cell_colour_1_pane

0xbab9,	// (0x0000bdff) aid_size_cell_colour_2_pane_ParamLimits

0xbab9,	// (0x0000bdff) aid_size_cell_colour_2_pane

0xbacd,	// (0x0000be13) aid_size_cell_colour_3_pane_ParamLimits

0xbacd,	// (0x0000be13) aid_size_cell_colour_3_pane

0xbae1,	// (0x0000be27) aid_size_cell_colour_4_pane_ParamLimits

0xbae1,	// (0x0000be27) aid_size_cell_colour_4_pane

0x158f,	// (0x000018d5) title_pane_stacon_g1_ParamLimits

0x158f,	// (0x000018d5) title_pane_stacon_g1

0x3c7e,	// (0x00003fc4) popup_note_wait_window_g3_ParamLimits

0x3c7e,	// (0x00003fc4) popup_note_wait_window_g3

0x3cf4,	// (0x0000403a) popup_note_wait_window_t5_ParamLimits

0x3cf4,	// (0x0000403a) popup_note_wait_window_t5

0xf4cf,	// (0x0000f815) main_feb_china_hwr_fs_writing_pane

0xc512,	// (0x0000c858) popup_feb_china_hwr_fs_window_ParamLimits

0xc512,	// (0x0000c858) popup_feb_china_hwr_fs_window

0xcf78,	// (0x0000d2be) aid_size_cell_hwr_fs_ParamLimits

0xcf78,	// (0x0000d2be) aid_size_cell_hwr_fs

0x3578,	// (0x000038be) bg_popup_sub_pane_cp3_ParamLimits

0x3578,	// (0x000038be) bg_popup_sub_pane_cp3

0xcf8d,	// (0x0000d2d3) grid_hwr_fs_pane_ParamLimits

0xcf8d,	// (0x0000d2d3) grid_hwr_fs_pane

0x359c,	// (0x000038e2) linegrid_hwr_fs_pane_ParamLimits

0x359c,	// (0x000038e2) linegrid_hwr_fs_pane

0xcfa5,	// (0x0000d2eb) cell_hwr_fs_pane_ParamLimits

0xcfa5,	// (0x0000d2eb) cell_hwr_fs_pane

0x35ce,	// (0x00003914) linegrid_hwr_fs_pane_g1_ParamLimits

0x35ce,	// (0x00003914) linegrid_hwr_fs_pane_g1

0xcfcb,	// (0x0000d311) linegrid_hwr_fs_pane_g2_ParamLimits

0xcfcb,	// (0x0000d311) linegrid_hwr_fs_pane_g2

0x35ec,	// (0x00003932) linegrid_hwr_fs_pane_g3_ParamLimits

0x35ec,	// (0x00003932) linegrid_hwr_fs_pane_g3

0x35f8,	// (0x0000393e) linegrid_hwr_fs_pane_g4_ParamLimits

0x35f8,	// (0x0000393e) linegrid_hwr_fs_pane_g4

0x3612,	// (0x00003958) linegrid_hwr_fs_pane_g5_ParamLimits

0x3612,	// (0x00003958) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bd,	// (0x0000fb03) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bd,	// (0x0000fb03) linegrid_hwr_fs_pane_g

0x3628,	// (0x0000396e) cell_hwr_fs_pane_g1_ParamLimits

0x3628,	// (0x0000396e) cell_hwr_fs_pane_g1

0x31b1,	// (0x000034f7) cell_hwr_fs_pane_g2_ParamLimits

0x31b1,	// (0x000034f7) cell_hwr_fs_pane_g2

0xcfdd,	// (0x0000d323) cell_hwr_fs_pane_g3_ParamLimits

0xcfdd,	// (0x0000d323) cell_hwr_fs_pane_g3

0xcfea,	// (0x0000d330) cell_hwr_fs_pane_g4_ParamLimits

0xcfea,	// (0x0000d330) cell_hwr_fs_pane_g4

0x0003,

0xf7c8,	// (0x0000fb0e) cell_hwr_fs_pane_g_ParamLimits

0xf7c8,	// (0x0000fb0e) cell_hwr_fs_pane_g

0xcff7,	// (0x0000d33d) cell_hwr_fs_pane_t1

0xf4cf,	// (0x0000f815) grid_highlight_pane_cp6

0xf4cf,	// (0x0000f815) main_idle_act2_pane

0x1340,	// (0x00001686) aid_inside_area_popup_secondary

0xd0d8,	// (0x0000d41e) aid_inside_area_window_primary_ParamLimits

0xd0d8,	// (0x0000d41e) aid_inside_area_window_primary

0x5283,	// (0x000055c9) ai2_news_ticker_pane

0x528b,	// (0x000055d1) aid_size_cell_ai1_link_ParamLimits

0x528b,	// (0x000055d1) aid_size_cell_ai1_link

0xd4ba,	// (0x0000d800) popup_ai2_data_window_ParamLimits

0xd4ba,	// (0x0000d800) popup_ai2_data_window

0x52bb,	// (0x00005601) popup_ai2_link_window_ParamLimits

0x52bb,	// (0x00005601) popup_ai2_link_window

0x3578,	// (0x000038be) bg_popup_sub_pane_cp4_ParamLimits

0x3578,	// (0x000038be) bg_popup_sub_pane_cp4

0x52cf,	// (0x00005615) grid_ai2_link_pane_ParamLimits

0x52cf,	// (0x00005615) grid_ai2_link_pane

0x52e6,	// (0x0000562c) popup_ai2_link_window_g1_ParamLimits

0x52e6,	// (0x0000562c) popup_ai2_link_window_g1

0x52f2,	// (0x00005638) popup_ai2_link_window_g2_ParamLimits

0x52f2,	// (0x00005638) popup_ai2_link_window_g2

0x0001,

0xf99b,	// (0x0000fce1) popup_ai2_link_window_g_ParamLimits

0xf99b,	// (0x0000fce1) popup_ai2_link_window_g

0x5301,	// (0x00005647) ai2_mp_button_pane

0x5309,	// (0x0000564f) ai2_mp_volume_pane

0x381c,	// (0x00003b62) bg_popup_sub_pane_cp5_ParamLimits

0x381c,	// (0x00003b62) bg_popup_sub_pane_cp5

0x5311,	// (0x00005657) heading_ai2_gene_pane_ParamLimits

0x5311,	// (0x00005657) heading_ai2_gene_pane

0x531d,	// (0x00005663) list_ai2_gene_pane_ParamLimits

0x531d,	// (0x00005663) list_ai2_gene_pane

0x5365,	// (0x000056ab) cell_ai2_link_pane_ParamLimits

0x5365,	// (0x000056ab) cell_ai2_link_pane

0x537b,	// (0x000056c1) cell_ai2_link_pane_g1

0xf4cf,	// (0x0000f815) grid_highlight_pane_cp7

0x544b,	// (0x00005791) ai2_mp_volume_pane_g1

0x5453,	// (0x00005799) ai2_mp_volume_pane_g2

0xd4e4,	// (0x0000d82a) list_ai2_gene_pane_t1

0x545b,	// (0x000057a1) ai2_mp_volume_pane_g3

0x0002,

0xf9b4,	// (0x0000fcfa) ai2_mp_volume_pane_g

0x5463,	// (0x000057a9) volume_small_pane_cp3

0x546c,	// (0x000057b2) aid_size_cell_ai2_button

0x5474,	// (0x000057ba) grid_ai2_button_pane

0x547d,	// (0x000057c3) cell_ai2_button_pane_ParamLimits

0x547d,	// (0x000057c3) cell_ai2_button_pane

0xf307,	// (0x0000f64d) cell_ai2_button_pane_g1

0xf4cf,	// (0x0000f815) grid_highlight_pane_cp8

0x540b,	// (0x00005751) ai2_gene_pane_t1_ParamLimits

0x540b,	// (0x00005751) ai2_gene_pane_t1

0xc4b0,	// (0x0000c7f6) aid_height_parent_landscape

0xd220,	// (0x0000d566) aid_height_set_list

0x4be0,	// (0x00004f26) aid_size_parent

0x4fee,	// (0x00005334) aid_size_cell_graphic_pane_ParamLimits

0x532d,	// (0x00005673) popup_ai2_data_window_g1_ParamLimits

0x532d,	// (0x00005673) popup_ai2_data_window_g1

0x5339,	// (0x0000567f) ai2_news_ticker_pane_g1

0x5341,	// (0x00005687) ai2_news_ticker_pane_g2

0x0001,

0xf9a0,	// (0x0000fce6) ai2_news_ticker_pane_g

0x5349,	// (0x0000568f) ai2_news_ticker_pane_t1

0x5357,	// (0x0000569d) ai2_news_ticker_pane_t2

0x0001,

0xf9a5,	// (0x0000fceb) ai2_news_ticker_pane_t

0x5384,	// (0x000056ca) heading_ai2_gene_pane_g1

0x538c,	// (0x000056d2) heading_ai2_gene_pane_t1_ParamLimits

0x538c,	// (0x000056d2) heading_ai2_gene_pane_t1

0x53a1,	// (0x000056e7) list_highlight_pane_cp6

0xd4ce,	// (0x0000d814) ai2_gene_pane_ParamLimits

0xd4ce,	// (0x0000d814) ai2_gene_pane

0xd4f2,	// (0x0000d838) list_ai2_gene_pane_t2

0x0001,

0xf9aa,	// (0x0000fcf0) list_ai2_gene_pane_t

0x53dc,	// (0x00005722) list_highlight_pane_cp8_ParamLimits

0x53dc,	// (0x00005722) list_highlight_pane_cp8

0x53ed,	// (0x00005733) ai2_gene_pane_g1_ParamLimits

0x53ed,	// (0x00005733) ai2_gene_pane_g1

0x53ff,	// (0x00005745) ai2_gene_pane_g2_ParamLimits

0x53ff,	// (0x00005745) ai2_gene_pane_g2

0x0001,

0xf9af,	// (0x0000fcf5) ai2_gene_pane_g_ParamLimits

0xf9af,	// (0x0000fcf5) ai2_gene_pane_g

0x0a95,	// (0x00000ddb) scroll_pane_cp12

0xc46d,	// (0x0000c7b3) control_pane_t3_ParamLimits

0xc46d,	// (0x0000c7b3) control_pane_t3

0x262b,	// (0x00002971) status_small_pane_g8_ParamLimits

0x262b,	// (0x00002971) status_small_pane_g8

0xc5a7,	// (0x0000c8ed) popup_find_window_ParamLimits

0xc83a,	// (0x0000cb80) popup_note_image_window_ParamLimits

0x0b2c,	// (0x00000e72) list_double2_graphic_pane_vc_g1_ParamLimits

0x0b2c,	// (0x00000e72) list_double2_graphic_pane_vc_g1

0x0ab2,	// (0x00000df8) list_double2_graphic_pane_vc_g2_ParamLimits

0x0ab2,	// (0x00000df8) list_double2_graphic_pane_vc_g2

0x0abe,	// (0x00000e04) list_double2_graphic_pane_vc_g3_ParamLimits

0x0abe,	// (0x00000e04) list_double2_graphic_pane_vc_g3

0x0002,

0xf784,	// (0x0000faca) list_double2_graphic_pane_vc_g_ParamLimits

0xf784,	// (0x0000faca) list_double2_graphic_pane_vc_g

0x3358,	// (0x0000369e) list_double2_graphic_pane_vc_t1_ParamLimits

0x3358,	// (0x0000369e) list_double2_graphic_pane_vc_t1

0x0ab2,	// (0x00000df8) list_single_heading_pane_vc_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_single_heading_pane_vc_g1

0x0abe,	// (0x00000e04) list_single_heading_pane_vc_g2_ParamLimits

0x0abe,	// (0x00000e04) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_single_heading_pane_vc_g

0x3467,	// (0x000037ad) list_single_heading_pane_vc_t1_ParamLimits

0x3467,	// (0x000037ad) list_single_heading_pane_vc_t1

0x347d,	// (0x000037c3) list_single_heading_pane_vc_t2_ParamLimits

0x347d,	// (0x000037c3) list_single_heading_pane_vc_t2

0x0001,

0xf7ac,	// (0x0000faf2) list_single_heading_pane_vc_t_ParamLimits

0xf7ac,	// (0x0000faf2) list_single_heading_pane_vc_t

0x34b1,	// (0x000037f7) list_setting_number_pane_vc_g1_ParamLimits

0x34b1,	// (0x000037f7) list_setting_number_pane_vc_g1

0x34bd,	// (0x00003803) list_setting_number_pane_vc_g2_ParamLimits

0x34bd,	// (0x00003803) list_setting_number_pane_vc_g2

0x0001,

0xf7b1,	// (0x0000faf7) list_setting_number_pane_vc_g_ParamLimits

0xf7b1,	// (0x0000faf7) list_setting_number_pane_vc_g

0x34c9,	// (0x0000380f) list_setting_number_pane_vc_t1_ParamLimits

0x34c9,	// (0x0000380f) list_setting_number_pane_vc_t1

0x34dd,	// (0x00003823) list_setting_number_pane_vc_t2_ParamLimits

0x34dd,	// (0x00003823) list_setting_number_pane_vc_t2

0x34f9,	// (0x0000383f) list_setting_number_pane_vc_t3_ParamLimits

0x34f9,	// (0x0000383f) list_setting_number_pane_vc_t3

0x0002,

0xf7b6,	// (0x0000fafc) list_setting_number_pane_vc_t_ParamLimits

0xf7b6,	// (0x0000fafc) list_setting_number_pane_vc_t

0x3527,	// (0x0000386d) set_value_pane_vc_ParamLimits

0x3527,	// (0x0000386d) set_value_pane_vc

0x4de6,	// (0x0000512c) list_double2_graphic_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double2_graphic_pane_vc

0x4de6,	// (0x0000512c) list_double2_large_graphic_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double2_large_graphic_pane_vc

0x4de6,	// (0x0000512c) list_double2_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double2_pane_vc

0x4de6,	// (0x0000512c) list_double_graphic_heading_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double_graphic_heading_pane_vc

0x4de6,	// (0x0000512c) list_double_graphic_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double_graphic_pane_vc

0x4de6,	// (0x0000512c) list_double_heading_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double_heading_pane_vc

0x4df8,	// (0x0000513e) list_double_large_graphic_pane_vc_ParamLimits

0x4df8,	// (0x0000513e) list_double_large_graphic_pane_vc

0x4de6,	// (0x0000512c) list_double_number_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double_number_pane_vc

0x4de6,	// (0x0000512c) list_double_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double_pane_vc

0x4de6,	// (0x0000512c) list_double_time_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_double_time_pane_vc

0x4de6,	// (0x0000512c) list_setting_number_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_setting_number_pane_vc

0x4de6,	// (0x0000512c) list_setting_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_setting_pane_vc

0x4de6,	// (0x0000512c) list_single_graphic_heading_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_single_graphic_heading_pane_vc

0x4de6,	// (0x0000512c) list_single_heading_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_single_heading_pane_vc

0x4de6,	// (0x0000512c) list_single_number_heading_pane_vc_ParamLimits

0x4de6,	// (0x0000512c) list_single_number_heading_pane_vc

0x54b1,	// (0x000057f7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x54b1,	// (0x000057f7) list_double_graphic_heading_pane_vc_g1

0x0ab2,	// (0x00000df8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0ab2,	// (0x00000df8) list_double_graphic_heading_pane_vc_g2

0x0abe,	// (0x00000e04) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0abe,	// (0x00000e04) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bb,	// (0x0000fd01) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bb,	// (0x0000fd01) list_double_graphic_heading_pane_vc_g

0x54bd,	// (0x00005803) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x54bd,	// (0x00005803) list_double_graphic_heading_pane_vc_t1

0x54d9,	// (0x0000581f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x54d9,	// (0x0000581f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c2,	// (0x0000fd08) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c2,	// (0x0000fd08) list_double_graphic_heading_pane_vc_t

0x34b1,	// (0x000037f7) list_setting_pane_vc_g1_ParamLimits

0x34b1,	// (0x000037f7) list_setting_pane_vc_g1

0x34bd,	// (0x00003803) list_setting_pane_vc_g2_ParamLimits

0x34bd,	// (0x00003803) list_setting_pane_vc_g2

0x0001,

0xf7b1,	// (0x0000faf7) list_setting_pane_vc_g_ParamLimits

0xf7b1,	// (0x0000faf7) list_setting_pane_vc_g

0x5707,	// (0x00005a4d) list_setting_pane_vc_t1_ParamLimits

0x5707,	// (0x00005a4d) list_setting_pane_vc_t1

0x5723,	// (0x00005a69) list_setting_pane_vc_t2_ParamLimits

0x5723,	// (0x00005a69) list_setting_pane_vc_t2

0x0001,

0xf9f0,	// (0x0000fd36) list_setting_pane_vc_t_ParamLimits

0xf9f0,	// (0x0000fd36) list_setting_pane_vc_t

0x3527,	// (0x0000386d) set_value_pane_cp_vc_ParamLimits

0x3527,	// (0x0000386d) set_value_pane_cp_vc

0x0ab2,	// (0x00000df8) list_single_number_heading_pane_vc_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_single_number_heading_pane_vc_g1

0x0abe,	// (0x00000e04) list_single_number_heading_pane_vc_g2_ParamLimits

0x0abe,	// (0x00000e04) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_single_number_heading_pane_vc_g

0x0ae0,	// (0x00000e26) list_single_number_heading_pane_vc_t1_ParamLimits

0x0ae0,	// (0x00000e26) list_single_number_heading_pane_vc_t1

0x573f,	// (0x00005a85) list_single_number_heading_pane_vc_t2_ParamLimits

0x573f,	// (0x00005a85) list_single_number_heading_pane_vc_t2

0x0b1a,	// (0x00000e60) list_single_number_heading_pane_vc_t3_ParamLimits

0x0b1a,	// (0x00000e60) list_single_number_heading_pane_vc_t3

0x0002,

0xf9f5,	// (0x0000fd3b) list_single_number_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0000fd3b) list_single_number_heading_pane_vc_t

0x0b2c,	// (0x00000e72) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0b2c,	// (0x00000e72) list_single_graphic_heading_pane_vc_g1

0x0ab2,	// (0x00000df8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0ab2,	// (0x00000df8) list_single_graphic_heading_pane_vc_g4

0x0abe,	// (0x00000e04) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0abe,	// (0x00000e04) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf784,	// (0x0000faca) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf784,	// (0x0000faca) list_single_graphic_heading_pane_vc_g

0x0ae0,	// (0x00000e26) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0ae0,	// (0x00000e26) list_single_graphic_heading_pane_vc_t1

0x5755,	// (0x00005a9b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5755,	// (0x00005a9b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf9fc,	// (0x0000fd42) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf9fc,	// (0x0000fd42) list_single_graphic_heading_pane_vc_t

0x0ab2,	// (0x00000df8) list_double2_pane_vc_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_double2_pane_vc_g1

0x0abe,	// (0x00000e04) list_double2_pane_vc_g2_ParamLimits

0x0abe,	// (0x00000e04) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_double2_pane_vc_g

0x4d84,	// (0x000050ca) list_double2_pane_vc_t1_ParamLimits

0x4d84,	// (0x000050ca) list_double2_pane_vc_t1

0x5767,	// (0x00005aad) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5767,	// (0x00005aad) list_double2_large_graphic_pane_vc_g1

0x0ab2,	// (0x00000df8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0ab2,	// (0x00000df8) list_double2_large_graphic_pane_vc_g2

0x0abe,	// (0x00000e04) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0abe,	// (0x00000e04) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x0000f904) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x0000f904) list_double2_large_graphic_pane_vc_g

0x5773,	// (0x00005ab9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5773,	// (0x00005ab9) list_double2_large_graphic_pane_vc_t1

0x5789,	// (0x00005acf) list_double_time_pane_vc_g1_ParamLimits

0x5789,	// (0x00005acf) list_double_time_pane_vc_g1

0x5795,	// (0x00005adb) list_double_time_pane_vc_g2_ParamLimits

0x5795,	// (0x00005adb) list_double_time_pane_vc_g2

0x0001,

0xfa01,	// (0x0000fd47) list_double_time_pane_vc_g_ParamLimits

0xfa01,	// (0x0000fd47) list_double_time_pane_vc_g

0x57a1,	// (0x00005ae7) list_double_time_pane_vc_t1_ParamLimits

0x57a1,	// (0x00005ae7) list_double_time_pane_vc_t1

0x57c5,	// (0x00005b0b) list_double_time_pane_vc_t2_ParamLimits

0x57c5,	// (0x00005b0b) list_double_time_pane_vc_t2

0x57ef,	// (0x00005b35) list_double_time_pane_vc_t3_ParamLimits

0x57ef,	// (0x00005b35) list_double_time_pane_vc_t3

0x5801,	// (0x00005b47) list_double_time_pane_vc_t4_ParamLimits

0x5801,	// (0x00005b47) list_double_time_pane_vc_t4

0x0003,

0xfa06,	// (0x0000fd4c) list_double_time_pane_vc_t_ParamLimits

0xfa06,	// (0x0000fd4c) list_double_time_pane_vc_t

0x0ab2,	// (0x00000df8) list_double_pane_vc_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_double_pane_vc_g1

0x0abe,	// (0x00000e04) list_double_pane_vc_g2_ParamLimits

0x0abe,	// (0x00000e04) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_double_pane_vc_g

0x5815,	// (0x00005b5b) list_double_pane_vc_t1_ParamLimits

0x5815,	// (0x00005b5b) list_double_pane_vc_t1

0x5829,	// (0x00005b6f) list_double_pane_vc_t2_ParamLimits

0x5829,	// (0x00005b6f) list_double_pane_vc_t2

0x0001,

0xfa0f,	// (0x0000fd55) list_double_pane_vc_t_ParamLimits

0xfa0f,	// (0x0000fd55) list_double_pane_vc_t

0x0ab2,	// (0x00000df8) list_double_number_pane_vc_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_double_number_pane_vc_g1

0x0abe,	// (0x00000e04) list_double_number_pane_vc_g2_ParamLimits

0x0abe,	// (0x00000e04) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_double_number_pane_vc_g

0x5841,	// (0x00005b87) list_double_number_pane_vc_t1_ParamLimits

0x5841,	// (0x00005b87) list_double_number_pane_vc_t1

0x5853,	// (0x00005b99) list_double_number_pane_vc_t2_ParamLimits

0x5853,	// (0x00005b99) list_double_number_pane_vc_t2

0x5867,	// (0x00005bad) list_double_number_pane_vc_t3_ParamLimits

0x5867,	// (0x00005bad) list_double_number_pane_vc_t3

0x0002,

0xfa14,	// (0x0000fd5a) list_double_number_pane_vc_t_ParamLimits

0xfa14,	// (0x0000fd5a) list_double_number_pane_vc_t

0x5881,	// (0x00005bc7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5881,	// (0x00005bc7) list_double_large_graphic_pane_vc_g1

0x589d,	// (0x00005be3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x589d,	// (0x00005be3) list_double_large_graphic_pane_vc_g2

0x58b1,	// (0x00005bf7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x58b1,	// (0x00005bf7) list_double_large_graphic_pane_vc_g3

0x58c0,	// (0x00005c06) list_double_large_graphic_pane_vc_g4_ParamLimits

0x58c0,	// (0x00005c06) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa1b,	// (0x0000fd61) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa1b,	// (0x0000fd61) list_double_large_graphic_pane_vc_g

0x58cf,	// (0x00005c15) list_double_large_graphic_pane_vc_t1_ParamLimits

0x58cf,	// (0x00005c15) list_double_large_graphic_pane_vc_t1

0x58eb,	// (0x00005c31) list_double_large_graphic_pane_vc_t2_ParamLimits

0x58eb,	// (0x00005c31) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa24,	// (0x0000fd6a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa24,	// (0x0000fd6a) list_double_large_graphic_pane_vc_t

0x0ab2,	// (0x00000df8) list_double_heading_pane_vc_g1_ParamLimits

0x0ab2,	// (0x00000df8) list_double_heading_pane_vc_g1

0x0abe,	// (0x00000e04) list_double_heading_pane_vc_g2_ParamLimits

0x0abe,	// (0x00000e04) list_double_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0000f8e7) list_double_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0000f8e7) list_double_heading_pane_vc_g

0x590d,	// (0x00005c53) list_double_heading_pane_vc_t1_ParamLimits

0x590d,	// (0x00005c53) list_double_heading_pane_vc_t1

0x5921,	// (0x00005c67) list_double_heading_pane_vc_t2_ParamLimits

0x5921,	// (0x00005c67) list_double_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0000fd6f) list_double_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0000fd6f) list_double_heading_pane_vc_t

0x5939,	// (0x00005c7f) list_double_graphic_pane_vc_g1_ParamLimits

0x5939,	// (0x00005c7f) list_double_graphic_pane_vc_g1

0x5945,	// (0x00005c8b) list_double_graphic_pane_vc_g2_ParamLimits

0x5945,	// (0x00005c8b) list_double_graphic_pane_vc_g2

0x0ab2,	// (0x00000df8) list_double_graphic_pane_vc_g3_ParamLimits

0x0ab2,	// (0x00000df8) list_double_graphic_pane_vc_g3

0x0003,

0xfa2e,	// (0x0000fd74) list_double_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0000fd74) list_double_graphic_pane_vc_g

0x5962,	// (0x00005ca8) list_double_graphic_pane_vc_t1_ParamLimits

0x5962,	// (0x00005ca8) list_double_graphic_pane_vc_t1

0x598c,	// (0x00005cd2) list_double_graphic_pane_vc_t2_ParamLimits

0x598c,	// (0x00005cd2) list_double_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0000fd7d) list_double_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0000fd7d) list_double_graphic_pane_vc_t

0xf329,	// (0x0000f66f) aid_size_cell_fastswap

0xb656,	// (0x0000b99c) aid_size_cell_touch_ParamLimits

0xb656,	// (0x0000b99c) aid_size_cell_touch

0xf4f9,	// (0x0000f83f) popup_fast_swap_wide_window_ParamLimits

0xf4f9,	// (0x0000f83f) popup_fast_swap_wide_window

0xb7c4,	// (0x0000bb0a) touch_pane_ParamLimits

0xb7c4,	// (0x0000bb0a) touch_pane

0x0f70,	// (0x000012b6) button_value_adjust_pane_cp2

0x0f78,	// (0x000012be) button_value_adjust_pane_cp4

0x0f9a,	// (0x000012e0) form_field_data_pane_cp2

0xbef6,	// (0x0000c23c) form_field_data_wide_pane_cp2

0x17f5,	// (0x00001b3b) bg_scroll_pane_ParamLimits

0x1814,	// (0x00001b5a) scroll_handle_pane_ParamLimits

0x1828,	// (0x00001b6e) scroll_sc2_down_pane_ParamLimits

0x1828,	// (0x00001b6e) scroll_sc2_down_pane

0x184f,	// (0x00001b95) scroll_sc2_up_pane_ParamLimits

0x184f,	// (0x00001b95) scroll_sc2_up_pane

0xd622,	// (0x0000d968) grid_wheel_folder_pane_g1_ParamLimits

0xd622,	// (0x0000d968) grid_wheel_folder_pane_g1

0x1f4f,	// (0x00002295) clock_nsta_pane_cp2_ParamLimits

0x1f4f,	// (0x00002295) clock_nsta_pane_cp2

0xc22d,	// (0x0000c573) listscroll_midp_pane_ParamLimits

0xc239,	// (0x0000c57f) midp_canvas_pane

0x27fd,	// (0x00002b43) nsta_clock_indic_pane

0x285b,	// (0x00002ba1) listscroll_form_pane_vc

0x287f,	// (0x00002bc5) listscroll_set_pane_vc_ParamLimits

0x287f,	// (0x00002bc5) listscroll_set_pane_vc

0xcc74,	// (0x0000cfba) clock_nsta_pane

0xcc9e,	// (0x0000cfe4) indicator_nsta_pane

0x32c2,	// (0x00003608) bg_popup_sub_pane_cp2_ParamLimits

0x32d6,	// (0x0000361c) find_pane_cp2_ParamLimits

0x32d6,	// (0x0000361c) find_pane_cp2

0x32ec,	// (0x00003632) grid_toobar_pane_ParamLimits

0x3537,	// (0x0000387d) list_form_gen_pane_vc_ParamLimits

0x3537,	// (0x0000387d) list_form_gen_pane_vc

0x354d,	// (0x00003893) scroll_pane_cp8_vc_ParamLimits

0x354d,	// (0x00003893) scroll_pane_cp8_vc

0x3666,	// (0x000039ac) data_form_wide_pane_vc_ParamLimits

0x3666,	// (0x000039ac) data_form_wide_pane_vc

0x3672,	// (0x000039b8) form_field_data_wide_pane_vc_g1

0x367a,	// (0x000039c0) form_field_data_wide_pane_vc_t1_ParamLimits

0x367a,	// (0x000039c0) form_field_data_wide_pane_vc_t1

0x1056,	// (0x0000139c) input_focus_pane_cp6_vc_ParamLimits

0x1056,	// (0x0000139c) input_focus_pane_cp6_vc

0x39fd,	// (0x00003d43) list_midp_pane_ParamLimits

0x5058,	// (0x0000539e) scroll_pane_cp16_ParamLimits

0x5058,	// (0x0000539e) scroll_pane_cp16

0x3a53,	// (0x00003d99) button_value_adjust_pane_ParamLimits

0x3a53,	// (0x00003d99) button_value_adjust_pane

0xd231,	// (0x0000d577) button_value_adjust_pane_cp6_ParamLimits

0xd231,	// (0x0000d577) button_value_adjust_pane_cp6

0xd34b,	// (0x0000d691) settings_code_pane_cp_ParamLimits

0xd34b,	// (0x0000d691) settings_code_pane_cp

0xf307,	// (0x0000f64d) cell_touch_pane_g1

0xf307,	// (0x0000f64d) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x0000fa1d) cell_touch_pane_g

0xd500,	// (0x0000d846) cell_touch_pane_cp_ParamLimits

0xd500,	// (0x0000d846) cell_touch_pane_cp

0xd51c,	// (0x0000d862) cell_touch_pane_ParamLimits

0xd51c,	// (0x0000d862) cell_touch_pane

0xf307,	// (0x0000f64d) scroll_sc2_down_pane_g1

0xf307,	// (0x0000f64d) scroll_sc2_up_pane_g1

0xf4cf,	// (0x0000f815) bg_set_opt_pane_cp4_vc

0x54f7,	// (0x0000583d) list_set_graphic_pane_vc_g1_ParamLimits

0x54f7,	// (0x0000583d) list_set_graphic_pane_vc_g1

0x5503,	// (0x00005849) list_set_graphic_pane_vc_g2_ParamLimits

0x5503,	// (0x00005849) list_set_graphic_pane_vc_g2

0x0001,

0xf9c7,	// (0x0000fd0d) list_set_graphic_pane_vc_g_ParamLimits

0xf9c7,	// (0x0000fd0d) list_set_graphic_pane_vc_g

0x550f,	// (0x00005855) text_primary_small_cp13_vc_ParamLimits

0x550f,	// (0x00005855) text_primary_small_cp13_vc

0x5527,	// (0x0000586d) list_set_graphic_pane_vc_ParamLimits

0x5527,	// (0x0000586d) list_set_graphic_pane_vc

0xf4cf,	// (0x0000f815) input_focus_pane_cp2_vc

0xf307,	// (0x0000f64d) setting_code_pane_vc_g1

0x02a3,	// (0x000005e9) setting_code_pane_vc_t1

0x553a,	// (0x00005880) set_text_pane_vc_t1_ParamLimits

0x553a,	// (0x00005880) set_text_pane_vc_t1

0xf4cf,	// (0x0000f815) input_focus_pane_cp1_vc

0x5556,	// (0x0000589c) list_set_text_pane_vc

0xf307,	// (0x0000f64d) setting_text_pane_vc_g1

0xf4cf,	// (0x0000f815) bg_set_opt_pane_cp2_vc

0x0272,	// (0x000005b8) setting_slider_graphic_pane_vc_g1

0x5560,	// (0x000058a6) setting_slider_graphic_pane_vc_t1

0x5570,	// (0x000058b6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cc,	// (0x0000fd12) setting_slider_graphic_pane_vc_t

0x5580,	// (0x000058c6) slider_set_pane_cp_vc

0x5588,	// (0x000058ce) slider_set_pane_vc_g1

0x5591,	// (0x000058d7) slider_set_pane_vc_g2

0x0006,

0xf9d1,	// (0x0000fd17) slider_set_pane_vc_g

0x1185,	// (0x000014cb) set_opt_bg_pane_g1_copy1

0x118d,	// (0x000014d3) set_opt_bg_pane_g2_copy1

0x55bd,	// (0x00005903) set_opt_bg_pane_g3_copy1

0x119d,	// (0x000014e3) set_opt_bg_pane_g4_copy1

0x11a5,	// (0x000014eb) set_opt_bg_pane_g5_copy1

0x11ad,	// (0x000014f3) set_opt_bg_pane_g6_copy1

0x55c7,	// (0x0000590d) set_opt_bg_pane_g7_copy1

0x55d1,	// (0x00005917) set_opt_bg_pane_g8_copy1

0x55db,	// (0x00005921) set_opt_bg_pane_g9_copy1

0xf4cf,	// (0x0000f815) bg_set_opt_pane_cp_vc

0x55e5,	// (0x0000592b) setting_slider_pane_vc_t1

0x55f4,	// (0x0000593a) setting_slider_pane_vc_t2

0x5604,	// (0x0000594a) setting_slider_pane_vc_t3

0x0002,

0xf9e0,	// (0x0000fd26) setting_slider_pane_vc_t

0x5614,	// (0x0000595a) slider_set_pane_vc

0x4294,	// (0x000045da) volume_set_pane_vc_g1

0x429d,	// (0x000045e3) volume_set_pane_vc_g2

0x42a6,	// (0x000045ec) volume_set_pane_vc_g3

0x42af,	// (0x000045f5) volume_set_pane_vc_g4

0x42b8,	// (0x000045fe) volume_set_pane_vc_g5

0x42c1,	// (0x00004607) volume_set_pane_vc_g6

0x42ca,	// (0x00004610) volume_set_pane_vc_g7

0x42d3,	// (0x00004619) volume_set_pane_vc_g8

0x42dc,	// (0x00004622) volume_set_pane_vc_g9

0x42e5,	// (0x0000462b) volume_set_pane_vc_g10

0x0009,

0xf87e,	// (0x0000fbc4) volume_set_pane_vc_g

0x561c,	// (0x00005962) volume_set_pane_vc

0x5624,	// (0x0000596a) button_value_adjust_pane_cp1_vc

0x562e,	// (0x00005974) list_highlight_pane_cp2_vc

0x5637,	// (0x0000597d) list_set_pane_vc_ParamLimits

0x5637,	// (0x0000597d) list_set_pane_vc

0x5695,	// (0x000059db) main_pane_set_vc_t1_ParamLimits

0x5695,	// (0x000059db) main_pane_set_vc_t1

0x56aa,	// (0x000059f0) main_pane_set_vc_t2_ParamLimits

0x56aa,	// (0x000059f0) main_pane_set_vc_t2

0x56bc,	// (0x00005a02) main_pane_set_vc_t3_ParamLimits

0x56bc,	// (0x00005a02) main_pane_set_vc_t3

0x56d0,	// (0x00005a16) main_pane_set_vc_t4_ParamLimits

0x56d0,	// (0x00005a16) main_pane_set_vc_t4

0x0003,

0xf9e7,	// (0x0000fd2d) main_pane_set_vc_t_ParamLimits

0xf9e7,	// (0x0000fd2d) main_pane_set_vc_t

0x56e4,	// (0x00005a2a) setting_code_pane_vc_ParamLimits

0x56e4,	// (0x00005a2a) setting_code_pane_vc

0x56f5,	// (0x00005a3b) setting_slider_graphic_pane_vc

0x56f5,	// (0x00005a3b) setting_slider_pane_vc

0x56f5,	// (0x00005a3b) setting_text_pane_vc

0x56f5,	// (0x00005a3b) setting_volume_pane_vc

0x56ff,	// (0x00005a45) scroll_pane_cp121_vc

0x0f5e,	// (0x000012a4) set_content_pane_vc

0x59bb,	// (0x00005d01) button_value_adjust_pane_g1

0x59c4,	// (0x00005d0a) button_value_adjust_pane_g2

0x0001,

0xfa3c,	// (0x0000fd82) button_value_adjust_pane_g

0x59cd,	// (0x00005d13) form_field_slider_wide_pane_vc_t1_ParamLimits

0x59cd,	// (0x00005d13) form_field_slider_wide_pane_vc_t1

0x59e1,	// (0x00005d27) form_field_slider_wide_pane_vc_t2_ParamLimits

0x59e1,	// (0x00005d27) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa41,	// (0x0000fd87) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa41,	// (0x0000fd87) form_field_slider_wide_pane_vc_t

0x04ed,	// (0x00000833) input_focus_pane_cp10_vc_ParamLimits

0x04ed,	// (0x00000833) input_focus_pane_cp10_vc

0x5a0f,	// (0x00005d55) slider_cont_pane_cp1_vc_ParamLimits

0x5a0f,	// (0x00005d55) slider_cont_pane_cp1_vc

0x5a21,	// (0x00005d67) slider_form_pane_g1_cp2

0x5591,	// (0x000058d7) slider_form_pane_g2_cp2

0x5a4e,	// (0x00005d94) form_field_slider_pane_vc_t3

0x5a5c,	// (0x00005da2) form_field_slider_pane_vc_t4

0x5a6a,	// (0x00005db0) slider_form_pane_vc_ParamLimits

0x5a6a,	// (0x00005db0) slider_form_pane_vc

0x5a77,	// (0x00005dbd) form_field_slider_pane_vc_t1_ParamLimits

0x5a77,	// (0x00005dbd) form_field_slider_pane_vc_t1

0x59e1,	// (0x00005d27) form_field_slider_pane_vc_t2_ParamLimits

0x59e1,	// (0x00005d27) form_field_slider_pane_vc_t2

0x0001,

0xfa53,	// (0x0000fd99) form_field_slider_pane_vc_t_ParamLimits

0xfa53,	// (0x0000fd99) form_field_slider_pane_vc_t

0x04ed,	// (0x00000833) input_focus_pane_cp9_vc_ParamLimits

0x04ed,	// (0x00000833) input_focus_pane_cp9_vc

0x5a93,	// (0x00005dd9) slider_cont_pane_vc_ParamLimits

0x5a93,	// (0x00005dd9) slider_cont_pane_vc

0x5aa7,	// (0x00005ded) list_form_graphic_pane_cp_vc_ParamLimits

0x5aa7,	// (0x00005ded) list_form_graphic_pane_cp_vc

0x3672,	// (0x000039b8) form_field_popup_wide_pane_vc_g1

0x5abc,	// (0x00005e02) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5abc,	// (0x00005e02) form_field_popup_wide_pane_vc_t1

0x1056,	// (0x0000139c) input_focus_pane_cp8_vc_ParamLimits

0x1056,	// (0x0000139c) input_focus_pane_cp8_vc

0x5b01,	// (0x00005e47) list_form_wide_pane_vc_ParamLimits

0x5b01,	// (0x00005e47) list_form_wide_pane_vc

0x5b0d,	// (0x00005e53) list_form_graphic_pane_vc_g1

0x5b15,	// (0x00005e5b) list_form_graphic_pane_vc_t1_ParamLimits

0x5b15,	// (0x00005e5b) list_form_graphic_pane_vc_t1

0x01c7,	// (0x0000050d) list_highlight_pane_cp5_vc_ParamLimits

0x01c7,	// (0x0000050d) list_highlight_pane_cp5_vc

0x5b31,	// (0x00005e77) list_form_graphic_pane_vc_ParamLimits

0x5b31,	// (0x00005e77) list_form_graphic_pane_vc

0x3672,	// (0x000039b8) form_field_popup_pane_vc_g1

0x5b47,	// (0x00005e8d) form_field_popup_pane_vc_t1_ParamLimits

0x5b47,	// (0x00005e8d) form_field_popup_pane_vc_t1

0x1056,	// (0x0000139c) input_focus_pane_cp7_vc_ParamLimits

0x1056,	// (0x0000139c) input_focus_pane_cp7_vc

0x5b5e,	// (0x00005ea4) list_form_pane_vc_ParamLimits

0x5b5e,	// (0x00005ea4) list_form_pane_vc

0x5b6a,	// (0x00005eb0) data_form_pane_vc_t1_ParamLimits

0x5b6a,	// (0x00005eb0) data_form_pane_vc_t1

0x1185,	// (0x000014cb) input_focus_pane_vc_g1

0x118d,	// (0x000014d3) input_focus_pane_vc_g2

0x1195,	// (0x000014db) input_focus_pane_vc_g3

0x119d,	// (0x000014e3) input_focus_pane_vc_g4

0x11a5,	// (0x000014eb) input_focus_pane_vc_g5

0x11ad,	// (0x000014f3) input_focus_pane_vc_g6

0x11b5,	// (0x000014fb) input_focus_pane_vc_g7

0x11bd,	// (0x00001503) input_focus_pane_vc_g8

0x11c5,	// (0x0000150b) input_focus_pane_vc_g9

0xf307,	// (0x0000f64d) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x0000f9a6) input_focus_pane_vc_g

0x3666,	// (0x000039ac) data_form_pane_vc_ParamLimits

0x3666,	// (0x000039ac) data_form_pane_vc

0x3672,	// (0x000039b8) form_field_data_pane_vc_g1

0x5b85,	// (0x00005ecb) form_field_data_pane_vc_t1_ParamLimits

0x5b85,	// (0x00005ecb) form_field_data_pane_vc_t1

0x1056,	// (0x0000139c) input_focus_pane_vc_ParamLimits

0x1056,	// (0x0000139c) input_focus_pane_vc

0x5b9f,	// (0x00005ee5) button_value_adjust_pane_cp3_vc

0x5ba7,	// (0x00005eed) button_value_adjust_pane_cp5_vc

0x5baf,	// (0x00005ef5) form_field_data_pane_vc_ParamLimits

0x5baf,	// (0x00005ef5) form_field_data_pane_vc

0x5bc6,	// (0x00005f0c) form_field_data_pane_vc_cp2

0x5bce,	// (0x00005f14) form_field_data_wide_pane_vc_ParamLimits

0x5bce,	// (0x00005f14) form_field_data_wide_pane_vc

0x5be4,	// (0x00005f2a) form_field_data_wide_pane_vc_cp2

0x5bec,	// (0x00005f32) form_field_popup_pane_vc_ParamLimits

0x5bec,	// (0x00005f32) form_field_popup_pane_vc

0x5c03,	// (0x00005f49) form_field_popup_wide_pane_vc_ParamLimits

0x5c03,	// (0x00005f49) form_field_popup_wide_pane_vc

0x5c19,	// (0x00005f5f) form_field_slider_pane_vc_ParamLimits

0x5c19,	// (0x00005f5f) form_field_slider_pane_vc

0x5c2c,	// (0x00005f72) form_field_slider_wide_pane_vc_ParamLimits

0x5c2c,	// (0x00005f72) form_field_slider_wide_pane_vc

0xd53a,	// (0x0000d880) grid_touch_1_pane_ParamLimits

0xd53a,	// (0x0000d880) grid_touch_1_pane

0xd54e,	// (0x0000d894) grid_touch_2_pane_ParamLimits

0xd54e,	// (0x0000d894) grid_touch_2_pane

0x5d10,	// (0x00006056) touch_pane_g1_ParamLimits

0x5d10,	// (0x00006056) touch_pane_g1

0x5c63,	// (0x00005fa9) cell_app_pane_cp_wide_ParamLimits

0x5c63,	// (0x00005fa9) cell_app_pane_cp_wide

0x5c74,	// (0x00005fba) grid_popup_fast_wide_pane_ParamLimits

0x5c74,	// (0x00005fba) grid_popup_fast_wide_pane

0x5c88,	// (0x00005fce) scroll_pane_cp19_ParamLimits

0x5c88,	// (0x00005fce) scroll_pane_cp19

0xf4cf,	// (0x0000f815) bg_popup_window_pane_cp20

0x5c9c,	// (0x00005fe2) listscroll_popup_fast_wide_pane

0xd578,	// (0x0000d8be) grid_indicator_nsta_pane

0x5cb6,	// (0x00005ffc) clock_nsta_pane_g1

0x5cbf,	// (0x00006005) clock_nsta_pane_t1

0xd584,	// (0x0000d8ca) cell_indicator_nsta_pane_ParamLimits

0xd584,	// (0x0000d8ca) cell_indicator_nsta_pane

0x5d10,	// (0x00006056) cell_indicator_nsta_pane_g1

0xd59f,	// (0x0000d8e5) cell_indicator_nsta_pane_g2

0x0001,

0xfa64,	// (0x0000fdaa) cell_indicator_nsta_pane_g

0x5d30,	// (0x00006076) clock_nsta_pane_cp

0x5d39,	// (0x0000607f) indicator_nsta_pane_cp

0x5d43,	// (0x00006089) nsta_clock_indic_pane_g1

0x033b,	// (0x00000681) grid_indicator_pane

0x1944,	// (0x00001c8a) scroll_pane_cp29

0x1e7c,	// (0x000021c2) indicator_nsta_pane_cp2_ParamLimits

0x1e7c,	// (0x000021c2) indicator_nsta_pane_cp2

0x01c7,	// (0x0000050d) main_apps_wheel_pane

0x38be,	// (0x00003c04) form_midp_field_text_pane_ParamLimits

0x3a09,	// (0x00003d4f) scroll_bar_cp050_ParamLimits

0x5d9c,	// (0x000060e2) cell_indicator_pane_ParamLimits

0x5d9c,	// (0x000060e2) cell_indicator_pane

0x5db3,	// (0x000060f9) cell_indicator_pane_g1

0xd5ac,	// (0x0000d8f2) grid_wheel_folder_pane_ParamLimits

0xd5ac,	// (0x0000d8f2) grid_wheel_folder_pane

0xd5ba,	// (0x0000d900) list_wheel_apps_pane_ParamLimits

0xd5ba,	// (0x0000d900) list_wheel_apps_pane

0xd5c8,	// (0x0000d90e) main_apps_wheel_pane_g1_ParamLimits

0xd5c8,	// (0x0000d90e) main_apps_wheel_pane_g1

0xd5d4,	// (0x0000d91a) main_apps_wheel_pane_g2_ParamLimits

0xd5d4,	// (0x0000d91a) main_apps_wheel_pane_g2

0x0001,

0xfa80,	// (0x0000fdc6) main_apps_wheel_pane_g_ParamLimits

0xfa80,	// (0x0000fdc6) main_apps_wheel_pane_g

0xd5e2,	// (0x0000d928) main_apps_wheel_pane_t1_ParamLimits

0xd5e2,	// (0x0000d928) main_apps_wheel_pane_t1

0xd5f6,	// (0x0000d93c) list_wheel_apps_pane_g1

0xd5fe,	// (0x0000d944) list_wheel_apps_pane_g2

0xd606,	// (0x0000d94c) list_wheel_apps_pane_g3

0xd60e,	// (0x0000d954) list_wheel_apps_pane_g4

0xd618,	// (0x0000d95e) list_wheel_apps_pane_g5

0x0004,

0xfa85,	// (0x0000fdcb) list_wheel_apps_pane_g

0x217f,	// (0x000024c5) navi_icon_text_pane

0xcb68,	// (0x0000ceae) aid_fill_nsta

0x5e78,	// (0x000061be) navi_icon_text_pane_g1

0x5e84,	// (0x000061ca) navi_icon_text_pane_t1

0x201d,	// (0x00002363) list_set_graphic_pane_t1_ParamLimits

0x201d,	// (0x00002363) list_set_graphic_pane_t1

0x4174,	// (0x000044ba) popup_midp_note_alarm_window_t6_ParamLimits

0x4174,	// (0x000044ba) popup_midp_note_alarm_window_t6

0x4186,	// (0x000044cc) popup_midp_note_alarm_window_t7_ParamLimits

0x4186,	// (0x000044cc) popup_midp_note_alarm_window_t7

0x4198,	// (0x000044de) popup_midp_note_alarm_window_t8_ParamLimits

0x4198,	// (0x000044de) popup_midp_note_alarm_window_t8

0x41aa,	// (0x000044f0) popup_midp_note_alarm_window_t9_ParamLimits

0x41aa,	// (0x000044f0) popup_midp_note_alarm_window_t9

0x41bc,	// (0x00004502) popup_midp_note_alarm_window_t10_ParamLimits

0x41bc,	// (0x00004502) popup_midp_note_alarm_window_t10

0x41ce,	// (0x00004514) popup_midp_note_alarm_window_t11_ParamLimits

0x41ce,	// (0x00004514) popup_midp_note_alarm_window_t11

0x41e0,	// (0x00004526) scroll_pane_cp17_ParamLimits

0x41e0,	// (0x00004526) scroll_pane_cp17

0x4294,	// (0x000045da) volume_small_pane_cp_g1

0x5e96,	// (0x000061dc) volume_small_pane_cp_g2

0x5e9f,	// (0x000061e5) volume_small_pane_cp_g3

0x5ea8,	// (0x000061ee) volume_small_pane_cp_g4

0x5eb1,	// (0x000061f7) volume_small_pane_cp_g5

0x5eba,	// (0x00006200) volume_small_pane_cp_g6

0x5ec3,	// (0x00006209) volume_small_pane_cp_g7

0x5ecc,	// (0x00006212) volume_small_pane_cp_g8

0x5ed5,	// (0x0000621b) volume_small_pane_cp_g9

0x5ede,	// (0x00006224) volume_small_pane_cp_g10

0x23dd,	// (0x00002723) midp_ticker_pane_g1_ParamLimits

0x23e9,	// (0x0000272f) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x0000fa72) midp_ticker_pane_g_ParamLimits

0x23f5,	// (0x0000273b) midp_ticker_pane_t1_ParamLimits

0xcb8c,	// (0x0000ced2) aid_fill_nsta_2

0x39f5,	// (0x00003d3b) list_form2_midp_pane

0x4d9a,	// (0x000050e0) midp_editing_number_pane_ParamLimits

0x4da9,	// (0x000050ef) midp_ticker_pane_ParamLimits

0x5ee7,	// (0x0000622d) form2_midp_field_pane

0x5f0b,	// (0x00006251) scroll_pane_cp51

0x5f2b,	// (0x00006271) form2_midp_button_pane_ParamLimits

0x5f2b,	// (0x00006271) form2_midp_button_pane

0x5f3d,	// (0x00006283) form2_midp_content_pane_ParamLimits

0x5f3d,	// (0x00006283) form2_midp_content_pane

0x5f57,	// (0x0000629d) form2_midp_field_choice_group_pane

0x5f5f,	// (0x000062a5) form2_midp_field_pane_g1

0x5f67,	// (0x000062ad) form2_midp_field_pane_g2

0x5f6f,	// (0x000062b5) form2_midp_field_pane_g3

0x5f77,	// (0x000062bd) form2_midp_field_pane_g4

0x0003,

0xfaaa,	// (0x0000fdf0) form2_midp_field_pane_g

0x5f7f,	// (0x000062c5) form2_midp_gauge_slider_pane

0x5f87,	// (0x000062cd) form2_midp_gauge_wait_pane

0x5f8f,	// (0x000062d5) form2_midp_image_pane_ParamLimits

0x5f8f,	// (0x000062d5) form2_midp_image_pane

0x5faa,	// (0x000062f0) form2_midp_label_pane_ParamLimits

0x5faa,	// (0x000062f0) form2_midp_label_pane

0xd64b,	// (0x0000d991) form2_midp_label_pane_cp_ParamLimits

0xd64b,	// (0x0000d991) form2_midp_label_pane_cp

0x5fe4,	// (0x0000632a) form2_midp_string_pane_ParamLimits

0x5fe4,	// (0x0000632a) form2_midp_string_pane

0xd66a,	// (0x0000d9b0) form2_midp_text_pane_ParamLimits

0xd66a,	// (0x0000d9b0) form2_midp_text_pane

0x6013,	// (0x00006359) form2_midp_time_pane

0x6023,	// (0x00006369) input_focus_pane_cp51_ParamLimits

0x6023,	// (0x00006369) input_focus_pane_cp51

0x603b,	// (0x00006381) form2_midp_label_pane_t1_ParamLimits

0x603b,	// (0x00006381) form2_midp_label_pane_t1

0xd683,	// (0x0000d9c9) form2_mdip_text_pane_t1_ParamLimits

0xd683,	// (0x0000d9c9) form2_mdip_text_pane_t1

0x609b,	// (0x000063e1) form2_midp_time_pane_t1

0x60b6,	// (0x000063fc) form2_midp_gauge_slider_pane_t1

0xd69e,	// (0x0000d9e4) form2_midp_gauge_slider_pane_t2

0xd6b0,	// (0x0000d9f6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfab3,	// (0x0000fdf9) form2_midp_gauge_slider_pane_t

0x60ec,	// (0x00006432) form2_midp_slider_pane

0x60f8,	// (0x0000643e) form2_midp_gauge_wait_pane_t1

0x6106,	// (0x0000644c) form2_midp_wait_pane_ParamLimits

0x6106,	// (0x0000644c) form2_midp_wait_pane

0xd6c2,	// (0x0000da08) list_single_2graphic_pane_cp4_ParamLimits

0xd6c2,	// (0x0000da08) list_single_2graphic_pane_cp4

0xd018,	// (0x0000d35e) list_single_midp_graphic_pane_cp_ParamLimits

0xd018,	// (0x0000d35e) list_single_midp_graphic_pane_cp

0xf4cf,	// (0x0000f815) list_highlight_pane_cp20

0x6155,	// (0x0000649b) list_single_2graphic_pane_g1_cp4

0x615d,	// (0x000064a3) list_single_2graphic_pane_g2_cp4

0x6165,	// (0x000064ab) list_single_2graphic_pane_t1_cp4

0x01c7,	// (0x0000050d) list_highlight_pane_cp21

0x6174,	// (0x000064ba) list_single_midp_graphic_pane_g4_cp

0x6183,	// (0x000064c9) list_single_midp_graphic_pane_t1_cp

0xd6d6,	// (0x0000da1c) form2_mdip_string_pane_t1_ParamLimits

0xd6d6,	// (0x0000da1c) form2_mdip_string_pane_t1

0xf4cf,	// (0x0000f815) bg_wml_button_pane_cp2

0xf307,	// (0x0000f64d) form2_midp_image_pane_g1

0x0d20,	// (0x00001066) list_double_large_graphic_pane_g5_ParamLimits

0x0d20,	// (0x00001066) list_double_large_graphic_pane_g5

0xc22d,	// (0x0000c573) midp_form_pane_ParamLimits

0x01c7,	// (0x0000050d) main_apps_wheel_pane_ParamLimits

0xc8b8,	// (0x0000cbfe) popup_preview_window_ParamLimits

0xc8b8,	// (0x0000cbfe) popup_preview_window

0x2df1,	// (0x00003137) popup_touch_info_window_ParamLimits

0x2df1,	// (0x00003137) popup_touch_info_window

0x2e0f,	// (0x00003155) popup_touch_menu_window_ParamLimits

0x2e0f,	// (0x00003155) popup_touch_menu_window

0xf2fd,	// (0x0000f643) bg_popup_sub_pane_cp6

0x6291,	// (0x000065d7) list_touch_menu_pane

0x6299,	// (0x000065df) list_single_touch_menu_pane_ParamLimits

0x6299,	// (0x000065df) list_single_touch_menu_pane

0x62af,	// (0x000065f5) list_single_touch_menu_pane_t1

0x01c7,	// (0x0000050d) bg_popup_sub_pane_cp7_ParamLimits

0x01c7,	// (0x0000050d) bg_popup_sub_pane_cp7

0x3a29,	// (0x00003d6f) heading_sub_pane

0x62bd,	// (0x00006603) list_touch_info_pane_ParamLimits

0x62bd,	// (0x00006603) list_touch_info_pane

0x62cd,	// (0x00006613) list_single_touch_info_pane_ParamLimits

0x62cd,	// (0x00006613) list_single_touch_info_pane

0x62df,	// (0x00006625) list_single_touch_info_pane_t1

0x62ed,	// (0x00006633) list_single_touch_info_pane_t2

0x0001,

0xfac1,	// (0x0000fe07) list_single_touch_info_pane_t

0x2300,	// (0x00002646) bg_popup_heading_pane_cp

0x62fb,	// (0x00006641) heading_sub_pane_t1

0x3578,	// (0x000038be) bg_popup_preview_window_pane_cp_ParamLimits

0x3578,	// (0x000038be) bg_popup_preview_window_pane_cp

0x3a29,	// (0x00003d6f) heading_preview_pane

0x62bd,	// (0x00006603) list_preview_pane_ParamLimits

0x62bd,	// (0x00006603) list_preview_pane

0x6309,	// (0x0000664f) popup_preview_window_g1

0x62cd,	// (0x00006613) list_single_preview_pane_ParamLimits

0x62cd,	// (0x00006613) list_single_preview_pane

0x6311,	// (0x00006657) list_single_preview_pane_g1

0x6319,	// (0x0000665f) list_single_preview_pane_t1

0x62df,	// (0x00006625) list_single_preview_pane_t2

0x0001,

0xfac6,	// (0x0000fe0c) list_single_preview_pane_t

0x6327,	// (0x0000666d) bg_popup_heading_pane_cp2_ParamLimits

0x6327,	// (0x0000666d) bg_popup_heading_pane_cp2

0x633d,	// (0x00006683) heading_preview_pane_g1

0x6345,	// (0x0000668b) heading_preview_pane_t1_ParamLimits

0x6345,	// (0x0000668b) heading_preview_pane_t1

0x035e,	// (0x000006a4) soft_indicator_pane_t1_ParamLimits

0x0a72,	// (0x00000db8) scroll_pane_ParamLimits

0x183d,	// (0x00001b83) scroll_sc2_left_pane

0x1846,	// (0x00001b8c) scroll_sc2_right_pane

0x1865,	// (0x00001bab) scroll_bg_pane_g1_ParamLimits

0x187a,	// (0x00001bc0) scroll_bg_pane_g2_ParamLimits

0x1892,	// (0x00001bd8) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x0000f9fd) scroll_bg_pane_g_ParamLimits

0x1865,	// (0x00001bab) scroll_handle_pane_g1_ParamLimits

0x18b4,	// (0x00001bfa) scroll_handle_pane_g2_ParamLimits

0x1892,	// (0x00001bd8) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x0000fa04) scroll_handle_pane_g_ParamLimits

0x28b5,	// (0x00002bfb) popup_choice_list_window_ParamLimits

0x28b5,	// (0x00002bfb) popup_choice_list_window

0x32ce,	// (0x00003614) choice_list_pane

0x3396,	// (0x000036dc) cell_toolbar_pane_t1

0x33be,	// (0x00003704) toolbar_button_pane_ParamLimits

0x47fe,	// (0x00004b44) ai_gene_pane_1_t2_ParamLimits

0x47fe,	// (0x00004b44) ai_gene_pane_1_t2

0x0001,

0xf8da,	// (0x0000fc20) ai_gene_pane_1_t_ParamLimits

0xf8da,	// (0x0000fc20) ai_gene_pane_1_t

0x6362,	// (0x000066a8) scroll_sc2_left_pane_g1

0x6362,	// (0x000066a8) scroll_sc2_right_pane_g1

0x284f,	// (0x00002b95) bg_popup_sub_pane_cp10

0x636c,	// (0x000066b2) list_choice_list_pane

0x6385,	// (0x000066cb) list_single_choice_list_pane_ParamLimits

0x6385,	// (0x000066cb) list_single_choice_list_pane

0x6398,	// (0x000066de) list_single_choice_list_pane_g1

0x137d,	// (0x000016c3) list_single_choice_list_pane_t1_ParamLimits

0x137d,	// (0x000016c3) list_single_choice_list_pane_t1

0x63a0,	// (0x000066e6) choice_list_pane_g1

0x63a8,	// (0x000066ee) choice_list_pane_t1

0xf2fd,	// (0x0000f643) input_focus_pane_cp11

0x15a3,	// (0x000018e9) title_pane_stacon_g2_ParamLimits

0x15a3,	// (0x000018e9) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x0000f9e3) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x0000f9e3) title_pane_stacon_g

0x2300,	// (0x00002646) cursor_press_pane

0xc55f,	// (0x0000c8a5) popup_fep_hwr_window_ParamLimits

0xc55f,	// (0x0000c8a5) popup_fep_hwr_window

0x29db,	// (0x00002d21) popup_fep_vkb_window_ParamLimits

0x29db,	// (0x00002d21) popup_fep_vkb_window

0x63b6,	// (0x000066fc) cursor_press_pane_g1

0x0002,

0xfaef,	// (0x0000fe35) fep_vkb_side_pane_g_ParamLimits

0x63f7,	// (0x0000673d) fep_hwr_candidate_pane_ParamLimits

0x63f7,	// (0x0000673d) fep_hwr_candidate_pane

0x6421,	// (0x00006767) fep_hwr_side_pane_ParamLimits

0x6421,	// (0x00006767) fep_hwr_side_pane

0x6441,	// (0x00006787) fep_hwr_top_pane_ParamLimits

0x6441,	// (0x00006787) fep_hwr_top_pane

0x6459,	// (0x0000679f) fep_hwr_write_pane_ParamLimits

0x6459,	// (0x0000679f) fep_hwr_write_pane

0xfaef,	// (0x0000fe35) fep_vkb_side_pane_g

0x6493,	// (0x000067d9) fep_hwr_top_pane_g1

0x64a5,	// (0x000067eb) fep_hwr_top_pane_g2

0x64b7,	// (0x000067fd) fep_hwr_top_pane_g3

0x0002,

0xfacb,	// (0x0000fe11) fep_hwr_top_pane_g

0x64cc,	// (0x00006812) fep_hwr_top_text_pane

0x1a34,	// (0x00001d7a) fep_hwr_top_text_pane_g1

0x65a4,	// (0x000068ea) fep_hwr_top_text_pane_t1

0x65f4,	// (0x0000693a) fep_hwr_candidate_pane_g1

0x686d,	// (0x00006bb3) fep_vkb_keypad_pane_g3_ParamLimits

0x686d,	// (0x00006bb3) fep_vkb_keypad_pane_g3

0x6895,	// (0x00006bdb) fep_vkb_keypad_pane_g4_ParamLimits

0x6895,	// (0x00006bdb) fep_vkb_keypad_pane_g4

0x6904,	// (0x00006c4a) fep_vkb_bottom_pane_g2_ParamLimits

0x6904,	// (0x00006c4a) fep_vkb_bottom_pane_g2

0x0001,

0xfaf6,	// (0x0000fe3c) fep_vkb_bottom_pane_g_ParamLimits

0xfaf6,	// (0x0000fe3c) fep_vkb_bottom_pane_g

0x6362,	// (0x000066a8) cell_vkb_side_pane_g2

0x0001,

0xfb00,	// (0x0000fe46) cell_vkb_side_pane_g

0x698f,	// (0x00006cd5) cell_vkb_side_pane_t1

0x699d,	// (0x00006ce3) cell_vkb_side_pane_t1_copy1

0x6362,	// (0x000066a8) bg_fep_vkb_candidate_pane_g2

0x6ac9,	// (0x00006e0f) cell_vkb_candidate_pane_ParamLimits

0x6628,	// (0x0000696e) aid_size_cell_vkb_ParamLimits

0x6628,	// (0x0000696e) aid_size_cell_vkb

0x6ac9,	// (0x00006e0f) cell_vkb_candidate_pane

0x6afd,	// (0x00006e43) bg_popup_fep_shadow_pane_g1

0xd7a5,	// (0x0000daeb) fep_vkb_bottom_pane_ParamLimits

0xd7a5,	// (0x0000daeb) fep_vkb_bottom_pane

0x66ec,	// (0x00006a32) fep_vkb_candidate_pane_ParamLimits

0x66ec,	// (0x00006a32) fep_vkb_candidate_pane

0xd7ca,	// (0x0000db10) fep_vkb_keypad_pane_ParamLimits

0xd7ca,	// (0x0000db10) fep_vkb_keypad_pane

0xd806,	// (0x0000db4c) fep_vkb_side_pane_ParamLimits

0xd806,	// (0x0000db4c) fep_vkb_side_pane

0xd842,	// (0x0000db88) fep_vkb_top_pane_ParamLimits

0xd842,	// (0x0000db88) fep_vkb_top_pane

0x67c6,	// (0x00006b0c) fep_vkb_top_pane_g1_ParamLimits

0x67c6,	// (0x00006b0c) fep_vkb_top_pane_g1

0x67d5,	// (0x00006b1b) fep_vkb_top_pane_g2_ParamLimits

0x67d5,	// (0x00006b1b) fep_vkb_top_pane_g2

0x67e4,	// (0x00006b2a) fep_vkb_top_pane_g3_ParamLimits

0x67e4,	// (0x00006b2a) fep_vkb_top_pane_g3

0x0003,

0xfae6,	// (0x0000fe2c) fep_vkb_top_pane_g_ParamLimits

0xfae6,	// (0x0000fe2c) fep_vkb_top_pane_g

0x6802,	// (0x00006b48) fep_vkb_top_text_pane_ParamLimits

0x6802,	// (0x00006b48) fep_vkb_top_text_pane

0xd87e,	// (0x0000dbc4) fep_vkb_side_pane_g1_ParamLimits

0xd87e,	// (0x0000dbc4) fep_vkb_side_pane_g1

0x685c,	// (0x00006ba2) grid_vkb_side_pane_ParamLimits

0x685c,	// (0x00006ba2) grid_vkb_side_pane

0x6b05,	// (0x00006e4b) bg_popup_fep_shadow_pane_g2

0x6b0e,	// (0x00006e54) bg_popup_fep_shadow_pane_g3

0x6b16,	// (0x00006e5c) bg_popup_fep_shadow_pane_g4

0x6b1f,	// (0x00006e65) bg_popup_fep_shadow_pane_g5

0x6b29,	// (0x00006e6f) bg_popup_fep_shadow_pane_g6

0x6b31,	// (0x00006e77) bg_popup_fep_shadow_pane_g7

0x11a5,	// (0x000014eb) bg_popup_fep_shadow_pane_g8

0x68b3,	// (0x00006bf9) grid_vkb_keypad_number_pane_ParamLimits

0x68b3,	// (0x00006bf9) grid_vkb_keypad_number_pane

0x68c3,	// (0x00006c09) grid_vkb_keypad_pane_ParamLimits

0x68c3,	// (0x00006c09) grid_vkb_keypad_pane

0x68e9,	// (0x00006c2f) fep_vkb_bottom_pane_g1_ParamLimits

0x68e9,	// (0x00006c2f) fep_vkb_bottom_pane_g1

0x6912,	// (0x00006c58) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6912,	// (0x00006c58) grid_vkb_keypad_bottom_left_pane

0x6927,	// (0x00006c6d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6927,	// (0x00006c6d) grid_vkb_keypad_bottom_right_pane

0x693c,	// (0x00006c82) fep_vkb_top_text_pane_g1

0xd8c5,	// (0x0000dc0b) fep_vkb_top_text_pane_t1

0xd8d7,	// (0x0000dc1d) cell_vkb_side_pane_ParamLimits

0xd8d7,	// (0x0000dc1d) cell_vkb_side_pane

0x6362,	// (0x000066a8) cell_vkb_side_pane_g1

0x69ab,	// (0x00006cf1) cell_vkb_keypad_pane_ParamLimits

0x69ab,	// (0x00006cf1) cell_vkb_keypad_pane

0x6a20,	// (0x00006d66) cell_vkb_keypad_pane_g1

0x0008,

0xfb13,	// (0x0000fe59) bg_popup_fep_shadow_pane_g

0x6362,	// (0x000066a8) cell_hwr_side_pane_g1

0x6362,	// (0x000066a8) cell_hwr_side_pane_g2

0x6a2a,	// (0x00006d70) cell_vkb_keypad_pane_t1

0xd8ed,	// (0x0000dc33) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8ed,	// (0x0000dc33) cell_vkb_keypad_bottom_left_pane

0xd902,	// (0x0000dc48) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd902,	// (0x0000dc48) cell_vkb_keypad_bottom_right_pane

0x6362,	// (0x000066a8) cell_vkb_keypad_bottom_left_pane_g1

0x6362,	// (0x000066a8) cell_vkb_keypad_bottom_right_pane_g1

0x6a8e,	// (0x00006dd4) cell_vkb_keypad_number_pane_ParamLimits

0x6a8e,	// (0x00006dd4) cell_vkb_keypad_number_pane

0x6aad,	// (0x00006df3) cell_vkb_keypad_number_pane_g1

0x6ab7,	// (0x00006dfd) cell_vkb_keypad_number_pane_g2

0x6ac0,	// (0x00006e06) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb05,	// (0x0000fe4b) cell_vkb_keypad_number_pane_g

0x6a2a,	// (0x00006d70) cell_vkb_keypad_number_pane_t1

0x6ae4,	// (0x00006e2a) fep_vkb_candidate_pane_g1

0x0001,

0xfb00,	// (0x0000fe46) cell_hwr_side_pane_g

0x6b43,	// (0x00006e89) cell_hwr_side_pane_t1

0x6b51,	// (0x00006e97) cell_hwr_side_pane_t1_copy1

0x67f4,	// (0x00006b3a) cell_hwr_candidate_pane_g1

0x6ba1,	// (0x00006ee7) cell_hwr_candidate_pane_t1

0x6362,	// (0x000066a8) cell_vkb_candidate_pane_g2

0x6bf5,	// (0x00006f3b) cell_vkb_candidate_pane_t1

0x63be,	// (0x00006704) bg_popup_fep_shadow_pane_ParamLimits

0x63be,	// (0x00006704) bg_popup_fep_shadow_pane

0x6473,	// (0x000067b9) bg_fep_hwr_top_pane_g4

0x64e1,	// (0x00006827) bg_hwr_side_pane_g1_ParamLimits

0x64e1,	// (0x00006827) bg_hwr_side_pane_g1

0xd75e,	// (0x0000daa4) cell_hwr_side_pane_ParamLimits

0xd75e,	// (0x0000daa4) cell_hwr_side_pane

0x654f,	// (0x00006895) fep_hwr_write_pane_g1_ParamLimits

0x654f,	// (0x00006895) fep_hwr_write_pane_g1

0x655c,	// (0x000068a2) fep_hwr_write_pane_g2_ParamLimits

0x655c,	// (0x000068a2) fep_hwr_write_pane_g2

0x6569,	// (0x000068af) fep_hwr_write_pane_g3_ParamLimits

0x6569,	// (0x000068af) fep_hwr_write_pane_g3

0xd77e,	// (0x0000dac4) fep_hwr_write_pane_g4_ParamLimits

0xd77e,	// (0x0000dac4) fep_hwr_write_pane_g4

0x0005,

0xfad2,	// (0x0000fe18) fep_hwr_write_pane_g_ParamLimits

0xfad2,	// (0x0000fe18) fep_hwr_write_pane_g

0x6473,	// (0x000067b9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6473,	// (0x000067b9) bg_fep_hwr_candidate_pane_g2

0x65b2,	// (0x000068f8) cell_hwr_candidate_pane_ParamLimits

0x65b2,	// (0x000068f8) cell_hwr_candidate_pane

0x65f4,	// (0x0000693a) fep_hwr_candidate_pane_g1_ParamLimits

0x6656,	// (0x0000699c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6656,	// (0x0000699c) bg_popup_fep_shadow_pane_cp2

0x67f4,	// (0x00006b3a) fep_vkb_top_pane_g4_ParamLimits

0x67f4,	// (0x00006b3a) fep_vkb_top_pane_g4

0x683a,	// (0x00006b80) fep_vkb_side_pane_g2_ParamLimits

0x683a,	// (0x00006b80) fep_vkb_side_pane_g2

0xbe24,	// (0x0000c16a) list_setting_pane_t4_ParamLimits

0xbe24,	// (0x0000c16a) list_setting_pane_t4

0xbe9e,	// (0x0000c1e4) list_setting_number_pane_t5_ParamLimits

0xbe9e,	// (0x0000c1e4) list_setting_number_pane_t5

0x1a8a,	// (0x00001dd0) list_double_heading_pane_cp2_ParamLimits

0x1a8a,	// (0x00001dd0) list_double_heading_pane_cp2

0x107c,	// (0x000013c2) list_double_heading_pane_g1_cp2_ParamLimits

0x107c,	// (0x000013c2) list_double_heading_pane_g1_cp2

0x1088,	// (0x000013ce) list_double_heading_pane_g2_cp2_ParamLimits

0x1088,	// (0x000013ce) list_double_heading_pane_g2_cp2

0x6c03,	// (0x00006f49) list_double_heading_pane_t1_cp2_ParamLimits

0x6c03,	// (0x00006f49) list_double_heading_pane_t1_cp2

0x6c19,	// (0x00006f5f) list_double_heading_pane_t2_cp2_ParamLimits

0x6c19,	// (0x00006f5f) list_double_heading_pane_t2_cp2

0xf2f5,	// (0x0000f63b) aid_value_unit2

0xf51d,	// (0x0000f863) popup_preview_fixed_window

0x04fb,	// (0x00000841) bg_popup_preview_window_pane_cp02

0x6c2b,	// (0x00006f71) list_preview_fixed_pane

0x6c71,	// (0x00006fb7) list_empty_pane_fp_ParamLimits

0x6c71,	// (0x00006fb7) list_empty_pane_fp

0x6c71,	// (0x00006fb7) list_single_cale_day_pane_fp_ParamLimits

0x6c71,	// (0x00006fb7) list_single_cale_day_pane_fp

0x6c71,	// (0x00006fb7) list_single_graphic_heading_pane_fp_ParamLimits

0x6c71,	// (0x00006fb7) list_single_graphic_heading_pane_fp

0x6c71,	// (0x00006fb7) list_single_graphic_pane_fp_ParamLimits

0x6c71,	// (0x00006fb7) list_single_graphic_pane_fp

0x6c71,	// (0x00006fb7) list_single_heading_pane_fp_ParamLimits

0x6c71,	// (0x00006fb7) list_single_heading_pane_fp

0x6c71,	// (0x00006fb7) list_single_pane_fp_ParamLimits

0x6c71,	// (0x00006fb7) list_single_pane_fp

0x6c86,	// (0x00006fcc) list_single_pane_fp_g1_ParamLimits

0x6c86,	// (0x00006fcc) list_single_pane_fp_g1

0x107c,	// (0x000013c2) list_single_pane_fp_g2_ParamLimits

0x107c,	// (0x000013c2) list_single_pane_fp_g2

0x1088,	// (0x000013ce) list_single_pane_fp_g3_ParamLimits

0x1088,	// (0x000013ce) list_single_pane_fp_g3

0x6c92,	// (0x00006fd8) list_single_pane_fp_g4_ParamLimits

0x6c92,	// (0x00006fd8) list_single_pane_fp_g4

0x0003,

0xfb34,	// (0x0000fe7a) list_single_pane_fp_g_ParamLimits

0xfb34,	// (0x0000fe7a) list_single_pane_fp_g

0x6c9e,	// (0x00006fe4) list_single_pane_fp_t1_ParamLimits

0x6c9e,	// (0x00006fe4) list_single_pane_fp_t1

0x6cb5,	// (0x00006ffb) list_single_graphic_pane_fp_g1_ParamLimits

0x6cb5,	// (0x00006ffb) list_single_graphic_pane_fp_g1

0x6c86,	// (0x00006fcc) list_single_graphic_pane_fp_g2_ParamLimits

0x6c86,	// (0x00006fcc) list_single_graphic_pane_fp_g2

0x107c,	// (0x000013c2) list_single_graphic_pane_fp_g3_ParamLimits

0x107c,	// (0x000013c2) list_single_graphic_pane_fp_g3

0x1088,	// (0x000013ce) list_single_graphic_pane_fp_g4_ParamLimits

0x1088,	// (0x000013ce) list_single_graphic_pane_fp_g4

0x6c92,	// (0x00006fd8) list_single_graphic_pane_fp_g5_ParamLimits

0x6c92,	// (0x00006fd8) list_single_graphic_pane_fp_g5

0x0004,

0xfb3d,	// (0x0000fe83) list_single_graphic_pane_fp_g_ParamLimits

0xfb3d,	// (0x0000fe83) list_single_graphic_pane_fp_g

0x6cc1,	// (0x00007007) list_single_graphic_pane_fp_t1_ParamLimits

0x6cc1,	// (0x00007007) list_single_graphic_pane_fp_t1

0x6cb5,	// (0x00006ffb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6cb5,	// (0x00006ffb) list_single_graphic_heading_pane_fp_g1

0x6c86,	// (0x00006fcc) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6c86,	// (0x00006fcc) list_single_graphic_heading_pane_fp_g2

0x107c,	// (0x000013c2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x107c,	// (0x000013c2) list_single_graphic_heading_pane_fp_g3

0x1088,	// (0x000013ce) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1088,	// (0x000013ce) list_single_graphic_heading_pane_fp_g4

0x6c92,	// (0x00006fd8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6c92,	// (0x00006fd8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb3d,	// (0x0000fe83) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb3d,	// (0x0000fe83) list_single_graphic_heading_pane_fp_g

0x6cd7,	// (0x0000701d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6cd7,	// (0x0000701d) list_single_graphic_heading_pane_fp_t1

0x6ced,	// (0x00007033) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6ced,	// (0x00007033) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb48,	// (0x0000fe8e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb48,	// (0x0000fe8e) list_single_graphic_heading_pane_fp_t

0x6cff,	// (0x00007045) list_single_cale_day_pane_fp_g1_ParamLimits

0x6cff,	// (0x00007045) list_single_cale_day_pane_fp_g1

0x6d37,	// (0x0000707d) list_single_cale_day_pane_fp_g2_ParamLimits

0x6d37,	// (0x0000707d) list_single_cale_day_pane_fp_g2

0x6d43,	// (0x00007089) list_single_cale_day_pane_fp_g3_ParamLimits

0x6d43,	// (0x00007089) list_single_cale_day_pane_fp_g3

0x6d6b,	// (0x000070b1) list_single_cale_day_pane_fp_g4_ParamLimits

0x6d6b,	// (0x000070b1) list_single_cale_day_pane_fp_g4

0x6d8f,	// (0x000070d5) list_single_cale_day_pane_fp_g5_ParamLimits

0x6d8f,	// (0x000070d5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb4d,	// (0x0000fe93) list_single_cale_day_pane_fp_g_ParamLimits

0xfb4d,	// (0x0000fe93) list_single_cale_day_pane_fp_g

0x6db3,	// (0x000070f9) list_single_cale_day_pane_fp_t1_ParamLimits

0x6db3,	// (0x000070f9) list_single_cale_day_pane_fp_t1

0x6dd9,	// (0x0000711f) list_single_cale_day_pane_fp_t2_ParamLimits

0x6dd9,	// (0x0000711f) list_single_cale_day_pane_fp_t2

0x6df2,	// (0x00007138) list_single_cale_day_pane_fp_t3_ParamLimits

0x6df2,	// (0x00007138) list_single_cale_day_pane_fp_t3

0x0002,

0xfb58,	// (0x0000fe9e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb58,	// (0x0000fe9e) list_single_cale_day_pane_fp_t

0x6c86,	// (0x00006fcc) list_empty_pane_fp_g1_ParamLimits

0x6c86,	// (0x00006fcc) list_empty_pane_fp_g1

0x6e0b,	// (0x00007151) list_empty_pane_fp_t1

0x6e19,	// (0x0000715f) list_empty_pane_fp_t2

0x0001,

0xfb5f,	// (0x0000fea5) list_empty_pane_fp_t

0x6c86,	// (0x00006fcc) list_single_heading_pane_fp_g1_ParamLimits

0x6c86,	// (0x00006fcc) list_single_heading_pane_fp_g1

0x107c,	// (0x000013c2) list_single_heading_pane_fp_g2_ParamLimits

0x107c,	// (0x000013c2) list_single_heading_pane_fp_g2

0x1088,	// (0x000013ce) list_single_heading_pane_fp_g3_ParamLimits

0x1088,	// (0x000013ce) list_single_heading_pane_fp_g3

0x0002,

0xfb64,	// (0x0000feaa) list_single_heading_pane_fp_g_ParamLimits

0xfb64,	// (0x0000feaa) list_single_heading_pane_fp_g

0x6e27,	// (0x0000716d) list_single_heading_pane_fp_t1_ParamLimits

0x6e27,	// (0x0000716d) list_single_heading_pane_fp_t1

0x6e39,	// (0x0000717f) list_single_heading_pane_fp_t2_ParamLimits

0x6e39,	// (0x0000717f) list_single_heading_pane_fp_t2

0x0001,

0xfb6b,	// (0x0000feb1) list_single_heading_pane_fp_t_ParamLimits

0xfb6b,	// (0x0000feb1) list_single_heading_pane_fp_t

0x13eb,	// (0x00001731) aid_size_cell_fast

0x046b,	// (0x000007b1) soft_indicator_pane_cp1_t1

0x1428,	// (0x0000176e) cell_app_pane_cp2_ParamLimits

0x1428,	// (0x0000176e) cell_app_pane_cp2

0x63e0,	// (0x00006726) fep_hwr_candidate_drop_down_list_pane

0x660e,	// (0x00006954) fep_hwr_candidate_pane_g3_ParamLimits

0x660e,	// (0x00006954) fep_hwr_candidate_pane_g3

0x661b,	// (0x00006961) fep_hwr_candidate_pane_g4_ParamLimits

0x661b,	// (0x00006961) fep_hwr_candidate_pane_g4

0x0002,

0xfadf,	// (0x0000fe25) fep_hwr_candidate_pane_g_ParamLimits

0xfadf,	// (0x0000fe25) fep_hwr_candidate_pane_g

0x66db,	// (0x00006a21) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x66db,	// (0x00006a21) fep_vkb_candidate_drop_down_list_pane

0x6aec,	// (0x00006e32) fep_vkb_candidate_pane_g3

0x6af4,	// (0x00006e3a) fep_vkb_candidate_pane_g4

0x0002,

0xfb0c,	// (0x0000fe52) fep_vkb_candidate_pane_g

0x67f4,	// (0x00006b3a) cell_hwr_candidate_pane_g1_ParamLimits

0x6b5f,	// (0x00006ea5) cell_hwr_candidate_pane_g3_ParamLimits

0x6b5f,	// (0x00006ea5) cell_hwr_candidate_pane_g3

0x6b80,	// (0x00006ec6) cell_hwr_candidate_pane_g4_ParamLimits

0x6b80,	// (0x00006ec6) cell_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0000fe6c) cell_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0000fe6c) cell_hwr_candidate_pane_g

0x6bbf,	// (0x00006f05) cell_vkb_candidate_pane_g3_ParamLimits

0x6bbf,	// (0x00006f05) cell_vkb_candidate_pane_g3

0x6bda,	// (0x00006f20) cell_vkb_candidate_pane_g4_ParamLimits

0x6bda,	// (0x00006f20) cell_vkb_candidate_pane_g4

0x6e4f,	// (0x00007195) cell_app_pane_cp2_g1_ParamLimits

0x6e4f,	// (0x00007195) cell_app_pane_cp2_g1

0x6e6d,	// (0x000071b3) cell_app_pane_cp2_g2_ParamLimits

0x6e6d,	// (0x000071b3) cell_app_pane_cp2_g2

0x0001,

0xfb70,	// (0x0000feb6) cell_app_pane_cp2_g_ParamLimits

0xfb70,	// (0x0000feb6) cell_app_pane_cp2_g

0x6e79,	// (0x000071bf) cell_app_pane_cp2_t1_ParamLimits

0x6e79,	// (0x000071bf) cell_app_pane_cp2_t1

0x1056,	// (0x0000139c) grid_highlight_pane_cp1_ParamLimits

0x1056,	// (0x0000139c) grid_highlight_pane_cp1

0x6e8b,	// (0x000071d1) cell_hwr_candidate_pane_cp1_ParamLimits

0x6e8b,	// (0x000071d1) cell_hwr_candidate_pane_cp1

0x67f4,	// (0x00006b3a) fep_hwr_candidate_drop_down_list_pane_g1

0x6eaa,	// (0x000071f0) fep_hwr_candidate_drop_down_list_pane_g2

0x6eb7,	// (0x000071fd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb75,	// (0x0000febb) fep_hwr_candidate_drop_down_list_pane_g

0x6ec4,	// (0x0000720a) fep_hwr_candidate_drop_down_list_scroll_pane

0x6ecd,	// (0x00007213) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ecd,	// (0x00007213) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6eda,	// (0x00007220) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6eda,	// (0x00007220) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6ee7,	// (0x0000722d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ee7,	// (0x0000722d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6bbf,	// (0x00006f05) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6bbf,	// (0x00006f05) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6bda,	// (0x00006f20) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6bda,	// (0x00006f20) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6ef4,	// (0x0000723a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6ef4,	// (0x0000723a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6f0f,	// (0x00007255) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6f0f,	// (0x00007255) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6f2a,	// (0x00007270) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6f2a,	// (0x00007270) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb7c,	// (0x0000fec2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb7c,	// (0x0000fec2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6f45,	// (0x0000728b) cell_vkb_candidate_pane_cp1_ParamLimits

0x6f45,	// (0x0000728b) cell_vkb_candidate_pane_cp1

0x67f4,	// (0x00006b3a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x67f4,	// (0x00006b3a) fep_vkb_candidate_drop_down_list_pane_g1

0x6eaa,	// (0x000071f0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6eaa,	// (0x000071f0) fep_vkb_candidate_drop_down_list_pane_g2

0x6eb7,	// (0x000071fd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6eb7,	// (0x000071fd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb75,	// (0x0000febb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb75,	// (0x0000febb) fep_vkb_candidate_drop_down_list_pane_g

0x6f65,	// (0x000072ab) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6f65,	// (0x000072ab) fep_vkb_candidate_drop_down_list_scroll_pane

0x6f72,	// (0x000072b8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6f72,	// (0x000072b8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6f7f,	// (0x000072c5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6f7f,	// (0x000072c5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6f8b,	// (0x000072d1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6f8b,	// (0x000072d1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6b5f,	// (0x00006ea5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6b5f,	// (0x00006ea5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6b80,	// (0x00006ec6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6b80,	// (0x00006ec6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6f97,	// (0x000072dd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6f97,	// (0x000072dd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6fb8,	// (0x000072fe) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6fb8,	// (0x000072fe) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6fd9,	// (0x0000731f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6fd9,	// (0x0000731f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8d,	// (0x0000fed3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8d,	// (0x0000fed3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb81a,	// (0x0000bb60) title_pane_g1_ParamLimits

0xb82d,	// (0x0000bb73) title_pane_g2_ParamLimits

0xf527,	// (0x0000f86d) title_pane_g_ParamLimits

0x1a24,	// (0x00001d6a) aid_call2_pane

0x1a2c,	// (0x00001d72) aid_call_pane

0x1a34,	// (0x00001d7a) popup_clock_analogue_window_g1

0x1a34,	// (0x00001d7a) popup_clock_analogue_window_g2

0x1a3c,	// (0x00001d82) popup_clock_analogue_window_g3

0x1a45,	// (0x00001d8b) popup_clock_analogue_window_g4

0xf307,	// (0x0000f64d) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x0000fa12) popup_clock_analogue_window_g

0x1a4d,	// (0x00001d93) popup_clock_analogue_window_t1

0x1af1,	// (0x00001e37) clock_digital_number_pane_ParamLimits

0x1af1,	// (0x00001e37) clock_digital_number_pane

0x1afd,	// (0x00001e43) clock_digital_number_pane_cp02_ParamLimits

0x1afd,	// (0x00001e43) clock_digital_number_pane_cp02

0x1b09,	// (0x00001e4f) clock_digital_number_pane_cp03_ParamLimits

0x1b09,	// (0x00001e4f) clock_digital_number_pane_cp03

0x1b15,	// (0x00001e5b) clock_digital_number_pane_cp04_ParamLimits

0x1b15,	// (0x00001e5b) clock_digital_number_pane_cp04

0x1b21,	// (0x00001e67) clock_digital_separator_pane_ParamLimits

0x1b21,	// (0x00001e67) clock_digital_separator_pane

0x1b2d,	// (0x00001e73) popup_clock_digital_window_t1_ParamLimits

0x1b2d,	// (0x00001e73) popup_clock_digital_window_t1

0xf307,	// (0x0000f64d) clock_digital_number_pane_g1

0xf307,	// (0x0000f64d) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x0000fa1d) clock_digital_number_pane_g

0xf307,	// (0x0000f64d) clock_digital_separator_pane_g1

0xf307,	// (0x0000f64d) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x0000fa1d) clock_digital_separator_pane_g

0xcb68,	// (0x0000ceae) aid_fill_nsta_ParamLimits

0xcc9e,	// (0x0000cfe4) indicator_nsta_pane_ParamLimits

0x3113,	// (0x00003459) popup_clock_analogue_window

0x3113,	// (0x00003459) popup_clock_digital_window

0xd578,	// (0x0000d8be) grid_indicator_nsta_pane_ParamLimits

0x5ccd,	// (0x00006013) clock_nsta_pane_t2

0x0001,

0xfa5f,	// (0x0000fda5) clock_nsta_pane_t

0x17e2,	// (0x00001b28) aid_size_max_handle

0x17ec,	// (0x00001b32) aid_size_min_handle

0x2300,	// (0x00002646) editor_scroll_pane

0x6ff4,	// (0x0000733a) ex_editor_pane

0x1359,	// (0x0000169f) scroll_pane_cp13

0x0a9e,	// (0x00000de4) scroll_pane_cp14

0x1a82,	// (0x00001dc8) scroll_pane_cp36

0xc148,	// (0x0000c48e) list_single_graphic_hl_pane_cp2_ParamLimits

0xc148,	// (0x0000c48e) list_single_graphic_hl_pane_cp2

0xd3c8,	// (0x0000d70e) list_single_graphic_hl_pane_ParamLimits

0xd3c8,	// (0x0000d70e) list_single_graphic_hl_pane

0x6ffc,	// (0x00007342) aid_size_min_hl_cp1

0x7005,	// (0x0000734b) list_highlight_pane_cp34_ParamLimits

0x7005,	// (0x0000734b) list_highlight_pane_cp34

0x7016,	// (0x0000735c) list_single_graphic_hl_pane_g1_ParamLimits

0x7016,	// (0x0000735c) list_single_graphic_hl_pane_g1

0xd91d,	// (0x0000dc63) list_single_graphic_hl_pane_g2_ParamLimits

0xd91d,	// (0x0000dc63) list_single_graphic_hl_pane_g2

0xd91d,	// (0x0000dc63) list_single_graphic_hl_pane_g3_ParamLimits

0xd91d,	// (0x0000dc63) list_single_graphic_hl_pane_g3

0x21d4,	// (0x0000251a) list_single_graphic_hl_pane_g4_ParamLimits

0x21d4,	// (0x0000251a) list_single_graphic_hl_pane_g4

0xd929,	// (0x0000dc6f) list_single_graphic_hl_pane_g5_ParamLimits

0xd929,	// (0x0000dc6f) list_single_graphic_hl_pane_g5

0x0004,

0xfb9e,	// (0x0000fee4) list_single_graphic_hl_pane_g_ParamLimits

0xfb9e,	// (0x0000fee4) list_single_graphic_hl_pane_g

0xd93d,	// (0x0000dc83) list_single_graphic_hl_pane_t1_ParamLimits

0xd93d,	// (0x0000dc83) list_single_graphic_hl_pane_t1

0x7043,	// (0x00007389) aid_size_min_hl_cp2

0x704c,	// (0x00007392) list_highlight_pane_cp34_cp2_ParamLimits

0x704c,	// (0x00007392) list_highlight_pane_cp34_cp2

0x7016,	// (0x0000735c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7016,	// (0x0000735c) list_single_graphic_hl_pane_g1_cp2

0x7059,	// (0x0000739f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7059,	// (0x0000739f) list_single_graphic_hl_pane_g2_cp2

0x7065,	// (0x000073ab) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7065,	// (0x000073ab) list_single_graphic_hl_pane_g3_cp2

0x7073,	// (0x000073b9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7073,	// (0x000073b9) list_single_graphic_hl_pane_g4_cp2

0x707f,	// (0x000073c5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x707f,	// (0x000073c5) list_single_graphic_hl_pane_g5_cp2

0xc366,	// (0x0000c6ac) control_pane_g4_ParamLimits

0xc366,	// (0x0000c6ac) control_pane_g4

0x284f,	// (0x00002b95) bg_popup_sub_pane_cp10_ParamLimits

0x636c,	// (0x000066b2) list_choice_list_pane_ParamLimits

0x637b,	// (0x000066c1) scroll_pane_cp23

0x04fb,	// (0x00000841) bg_popup_preview_window_pane_cp02_ParamLimits

0x6c2b,	// (0x00006f71) list_preview_fixed_pane_ParamLimits

0x6c41,	// (0x00006f87) list_preview_fixed_pane_cp_ParamLimits

0x6c41,	// (0x00006f87) list_preview_fixed_pane_cp

0x6c4d,	// (0x00006f93) popup_preview_fixed_window_g1_ParamLimits

0x6c4d,	// (0x00006f93) popup_preview_fixed_window_g1

0x6c59,	// (0x00006f9f) popup_preview_fixed_window_g2_ParamLimits

0x6c59,	// (0x00006f9f) popup_preview_fixed_window_g2

0x0002,

0xfb2d,	// (0x0000fe73) popup_preview_fixed_window_g_ParamLimits

0xfb2d,	// (0x0000fe73) popup_preview_fixed_window_g

0x1687,	// (0x000019cd) aid_navi_side_left_pane_ParamLimits

0x169c,	// (0x000019e2) aid_navi_side_right_pane_ParamLimits

0x16b4,	// (0x000019fa) navi_icon_pane_stacon_ParamLimits

0x16c8,	// (0x00001a0e) navi_navi_pane_stacon_ParamLimits

0x16b4,	// (0x000019fa) navi_text_pane_stacon_ParamLimits

0xf2fd,	// (0x0000f643) main_text_info_pane

0x70a9,	// (0x000073ef) listscroll_text_info_pane

0x70b1,	// (0x000073f7) list_text_info_pane_ParamLimits

0x70b1,	// (0x000073f7) list_text_info_pane

0x70c0,	// (0x00007406) scroll_pane_cp24_ParamLimits

0x70c0,	// (0x00007406) scroll_pane_cp24

0xd953,	// (0x0000dc99) list_text_info_pane_t1_ParamLimits

0xd953,	// (0x0000dc99) list_text_info_pane_t1

0xc4d2,	// (0x0000c818) popup_fast_swap2_window_ParamLimits

0xc4d2,	// (0x0000c818) popup_fast_swap2_window

0x710f,	// (0x00007455) aid_size_cell_fast2

0xf2fd,	// (0x0000f643) bg_popup_window_pane_cp17

0x3a29,	// (0x00003d6f) heading_pane_cp2

0x7119,	// (0x0000745f) listscroll_fast2_pane

0x7121,	// (0x00007467) grid_fast2_pane

0x712b,	// (0x00007471) listscroll_fast2_pane_g1

0x7133,	// (0x00007479) listscroll_fast2_pane_g2

0x0001,

0xfba9,	// (0x0000feef) listscroll_fast2_pane_g

0x1359,	// (0x0000169f) scroll_pane_cp26

0x713d,	// (0x00007483) cell_fast2_pane_ParamLimits

0x713d,	// (0x00007483) cell_fast2_pane

0x7152,	// (0x00007498) cell_fast2_pane_g1

0x715b,	// (0x000074a1) cell_fast2_pane_g2

0x7164,	// (0x000074aa) cell_fast2_pane_g3

0x0002,

0xfbae,	// (0x0000fef4) cell_fast2_pane_g

0x085b,	// (0x00000ba1) grid_highlight_pane_cp9

0x0870,	// (0x00000bb6) main_eswt_pane_ParamLimits

0x0870,	// (0x00000bb6) main_eswt_pane

0x70d5,	// (0x0000741b) list_single_text_info_pane

0x716c,	// (0x000074b2) eswt_ctrl_button_pane

0x716c,	// (0x000074b2) eswt_ctrl_canvas_pane

0x7174,	// (0x000074ba) eswt_ctrl_combo_pane

0x716c,	// (0x000074b2) eswt_ctrl_default_pane

0x716c,	// (0x000074b2) eswt_ctrl_label_pane

0x717c,	// (0x000074c2) eswt_ctrl_wait_pane

0x7184,	// (0x000074ca) eswt_shell_pane

0xf2fd,	// (0x0000f643) listscroll_eswt_app_pane

0x71a4,	// (0x000074ea) popup_eswt_tasktip_window_ParamLimits

0x71a4,	// (0x000074ea) popup_eswt_tasktip_window

0x3578,	// (0x000038be) bg_popup_window_pane_cp18

0x71b5,	// (0x000074fb) eswt_control_pane_g1_ParamLimits

0x71b5,	// (0x000074fb) eswt_control_pane_g1

0x71c2,	// (0x00007508) eswt_control_pane_g2_ParamLimits

0x71c2,	// (0x00007508) eswt_control_pane_g2

0x71cf,	// (0x00007515) eswt_control_pane_g3_ParamLimits

0x71cf,	// (0x00007515) eswt_control_pane_g3

0x71dc,	// (0x00007522) eswt_control_pane_g4_ParamLimits

0x71dc,	// (0x00007522) eswt_control_pane_g4

0x0003,

0xfbb5,	// (0x0000fefb) eswt_control_pane_g_ParamLimits

0xfbb5,	// (0x0000fefb) eswt_control_pane_g

0x1056,	// (0x0000139c) bg_button_pane_ParamLimits

0x1056,	// (0x0000139c) bg_button_pane

0x0870,	// (0x00000bb6) common_borders_pane_copy2_ParamLimits

0x0870,	// (0x00000bb6) common_borders_pane_copy2

0x71e9,	// (0x0000752f) control_button_pane_g1_ParamLimits

0x71e9,	// (0x0000752f) control_button_pane_g1

0x71f5,	// (0x0000753b) control_button_pane_g2_ParamLimits

0x71f5,	// (0x0000753b) control_button_pane_g2

0x7201,	// (0x00007547) control_button_pane_g3_ParamLimits

0x7201,	// (0x00007547) control_button_pane_g3

0x0002,

0xfbbe,	// (0x0000ff04) control_button_pane_g_ParamLimits

0xfbbe,	// (0x0000ff04) control_button_pane_g

0x7215,	// (0x0000755b) control_button_pane_t1

0x7223,	// (0x00007569) control_button_pane_t2

0x0001,

0xfbc5,	// (0x0000ff0b) control_button_pane_t

0x33ca,	// (0x00003710) bg_button_pane_g1

0x33d2,	// (0x00003718) bg_button_pane_g2

0x33da,	// (0x00003720) bg_button_pane_g3

0x33e2,	// (0x00003728) bg_button_pane_g4

0x33ea,	// (0x00003730) bg_button_pane_g5

0x33f2,	// (0x00003738) bg_button_pane_g6

0x33fa,	// (0x00003740) bg_button_pane_g7

0x3402,	// (0x00003748) bg_button_pane_g8

0x340a,	// (0x00003750) bg_button_pane_g9

0x0008,

0xf82e,	// (0x0000fb74) bg_button_pane_g

0x6327,	// (0x0000666d) common_borders_pane_ParamLimits

0x6327,	// (0x0000666d) common_borders_pane

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy1_ParamLimits

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy1

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy1_ParamLimits

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy1

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy1_ParamLimits

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy1

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy1_ParamLimits

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy1

0x6362,	// (0x000066a8) bg_eswt_ctrl_canvas_pane_g1

0x6327,	// (0x0000666d) common_borders_pane_cp2_ParamLimits

0x6327,	// (0x0000666d) common_borders_pane_cp2

0x6327,	// (0x0000666d) common_borders_pane_cp3_ParamLimits

0x6327,	// (0x0000666d) common_borders_pane_cp3

0x7231,	// (0x00007577) separator_horizontal_pane

0x7239,	// (0x0000757f) separator_vertical_pane

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy2_ParamLimits

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy2

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy2_ParamLimits

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy2

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy2_ParamLimits

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy2

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy2_ParamLimits

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy2

0xf2fd,	// (0x0000f643) common_borders_pane_cp4

0x7242,	// (0x00007588) separator_horizontal_pane_g1

0x724b,	// (0x00007591) separator_horizontal_pane_g2

0x7254,	// (0x0000759a) separator_horizontal_pane_g3

0x0002,

0xfbca,	// (0x0000ff10) separator_horizontal_pane_g

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy3_ParamLimits

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy3

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy3_ParamLimits

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy3

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy3_ParamLimits

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy3

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy3_ParamLimits

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy3

0xf2fd,	// (0x0000f643) common_borders_pane_cp5

0x725d,	// (0x000075a3) separator_vertical_pane_g1

0x7266,	// (0x000075ac) separator_vertical_pane_g2

0x726f,	// (0x000075b5) separator_vertical_pane_g3

0x0002,

0xfbd1,	// (0x0000ff17) separator_vertical_pane_g

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy4_ParamLimits

0x71b5,	// (0x000074fb) eswt_control_pane_g1_copy4

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy4_ParamLimits

0x71c2,	// (0x00007508) eswt_control_pane_g2_copy4

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy4_ParamLimits

0x71cf,	// (0x00007515) eswt_control_pane_g3_copy4

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy4_ParamLimits

0x71dc,	// (0x00007522) eswt_control_pane_g4_copy4

0x7278,	// (0x000075be) eswt_ctrl_combo_button_pane

0x7280,	// (0x000075c6) eswt_ctrl_input_pane

0x7288,	// (0x000075ce) popup_choice_list_window_cp70

0x7290,	// (0x000075d6) eswt_ctrl_input_pane_t1

0xf2fd,	// (0x0000f643) input_focus_pane_cp70

0x6327,	// (0x0000666d) bg_button_pane_cp70_ParamLimits

0x6327,	// (0x0000666d) bg_button_pane_cp70

0x729e,	// (0x000075e4) eswt_ctrl_combo_button_pane_g1

0x72a6,	// (0x000075ec) wait_bar_pane_cp70

0x3578,	// (0x000038be) bg_popup_window_pane_cp70_ParamLimits

0x3578,	// (0x000038be) bg_popup_window_pane_cp70

0x72ae,	// (0x000075f4) popup_eswt_tasktip_window_t1

0x72c4,	// (0x0000760a) wait_bar_pane_cp71_ParamLimits

0x72c4,	// (0x0000760a) wait_bar_pane_cp71

0x72d0,	// (0x00007616) grid_eswt_app_pane

0x1846,	// (0x00001b8c) scroll_pane_cp70

0xd96e,	// (0x0000dcb4) cell_eswt_app_pane_ParamLimits

0xd96e,	// (0x0000dcb4) cell_eswt_app_pane

0xd998,	// (0x0000dcde) cell_eswt_app_pane_g1_ParamLimits

0xd998,	// (0x0000dcde) cell_eswt_app_pane_g1

0xd9c7,	// (0x0000dd0d) cell_eswt_app_pane_g2_ParamLimits

0xd9c7,	// (0x0000dd0d) cell_eswt_app_pane_g2

0x0001,

0xfbd8,	// (0x0000ff1e) cell_eswt_app_pane_g_ParamLimits

0xfbd8,	// (0x0000ff1e) cell_eswt_app_pane_g

0xd9f0,	// (0x0000dd36) cell_eswt_app_pane_t1_ParamLimits

0xd9f0,	// (0x0000dd36) cell_eswt_app_pane_t1

0x7393,	// (0x000076d9) grid_highlight_pane_cp70_ParamLimits

0x7393,	// (0x000076d9) grid_highlight_pane_cp70

0x21d4,	// (0x0000251a) set_content_pane_g1

0xc2f8,	// (0x0000c63e) status_small_volume_pane

0xda22,	// (0x0000dd68) status_small_volume_pane_g1

0xda2a,	// (0x0000dd70) volume_small2_pane

0xda33,	// (0x0000dd79) volume_small2_pane_g1

0xda3c,	// (0x0000dd82) volume_small2_pane_g2

0xda45,	// (0x0000dd8b) volume_small2_pane_g3

0xda4e,	// (0x0000dd94) volume_small2_pane_g4

0xda57,	// (0x0000dd9d) volume_small2_pane_g5

0xda60,	// (0x0000dda6) volume_small2_pane_g6

0xda69,	// (0x0000ddaf) volume_small2_pane_g7

0xda72,	// (0x0000ddb8) volume_small2_pane_g8

0xda7b,	// (0x0000ddc1) volume_small2_pane_g9

0xda84,	// (0x0000ddca) volume_small2_pane_g10

0x0009,

0xfbdd,	// (0x0000ff23) volume_small2_pane_g

0x693c,	// (0x00006c82) fep_vkb_top_text_pane_g1_ParamLimits

0xd8c5,	// (0x0000dc0b) fep_vkb_top_text_pane_t1_ParamLimits

0x6c65,	// (0x00006fab) popup_preview_fixed_window_g3_ParamLimits

0x6c65,	// (0x00006fab) popup_preview_fixed_window_g3

0xcafb,	// (0x0000ce41) popup_toolbar_trans_pane

0xd220,	// (0x0000d566) aid_height_set_list_ParamLimits

0x4be0,	// (0x00004f26) aid_size_parent_ParamLimits

0x284f,	// (0x00002b95) list_highlight_pane_cp2_ParamLimits

0x21d4,	// (0x0000251a) set_content_pane_g1_ParamLimits

0xd3da,	// (0x0000d720) list_single_image_pane_ParamLimits

0xd3da,	// (0x0000d720) list_single_image_pane

0xda8d,	// (0x0000ddd3) aid_size_cell_image_ParamLimits

0xda8d,	// (0x0000ddd3) aid_size_cell_image

0xda9a,	// (0x0000dde0) grid_single_image_pane_ParamLimits

0xda9a,	// (0x0000dde0) grid_single_image_pane

0x348f,	// (0x000037d5) list_single_image_pane_g1_ParamLimits

0x348f,	// (0x000037d5) list_single_image_pane_g1

0x7423,	// (0x00007769) list_single_image_pane_g2_ParamLimits

0x7423,	// (0x00007769) list_single_image_pane_g2

0x0001,

0xfbf2,	// (0x0000ff38) list_single_image_pane_g_ParamLimits

0xfbf2,	// (0x0000ff38) list_single_image_pane_g

0x7437,	// (0x0000777d) list_single_image_pane_t1_ParamLimits

0x7437,	// (0x0000777d) list_single_image_pane_t1

0xdaa6,	// (0x0000ddec) cell_image_list_pane_ParamLimits

0xdaa6,	// (0x0000ddec) cell_image_list_pane

0xdaba,	// (0x0000de00) cell_image_list_pane_g1

0xdac3,	// (0x0000de09) cell_image_list_pane_g2

0x0001,

0xfbf7,	// (0x0000ff3d) cell_image_list_pane_g

0x7473,	// (0x000077b9) aid_size_cell_tb_trans_pane

0x1056,	// (0x0000139c) bg_tb_trans_pane

0x7485,	// (0x000077cb) grid_tb_trans_pane

0x33ca,	// (0x00003710) bg_tb_trans_pane_g1

0x33d2,	// (0x00003718) bg_tb_trans_pane_g2

0x33da,	// (0x00003720) bg_tb_trans_pane_g3

0x33e2,	// (0x00003728) bg_tb_trans_pane_g4

0x33ea,	// (0x00003730) bg_tb_trans_pane_g5

0x3402,	// (0x00003748) bg_tb_trans_pane_g6

0x340a,	// (0x00003750) bg_tb_trans_pane_g7

0x33f2,	// (0x00003738) bg_tb_trans_pane_g8

0x33fa,	// (0x00003740) bg_tb_trans_pane_g9

0x0008,

0xfbfc,	// (0x0000ff42) bg_tb_trans_pane_g

0x7499,	// (0x000077df) cell_toolbar_trans_pane_ParamLimits

0x7499,	// (0x000077df) cell_toolbar_trans_pane

0x6362,	// (0x000066a8) cell_toolbar_trans_pane_g1

0xd62f,	// (0x0000d975) list_form2_midp_pane_t1

0xd63d,	// (0x0000d983) list_form2_midp_pane_t2

0x0001,

0xfaa5,	// (0x0000fdeb) list_form2_midp_pane_t

0x5f0b,	// (0x00006251) scroll_pane_cp51_ParamLimits

0x6116,	// (0x0000645c) form2_midp_wait_pane_g1

0x611f,	// (0x00006465) form2_midp_wait_pane_g2

0x6128,	// (0x0000646e) form2_midp_wait_pane_g3

0x0002,

0xfaba,	// (0x0000fe00) form2_midp_wait_pane_g

0x01c7,	// (0x0000050d) list_highlight_pane_cp21_ParamLimits

0x6174,	// (0x000064ba) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6183,	// (0x000064c9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4de6,	// (0x0000512c) list_single_2graphic_im_pane_ParamLimits

0x4de6,	// (0x0000512c) list_single_2graphic_im_pane

0x74bf,	// (0x00007805) list_single_2graphic_im_pane_g1_ParamLimits

0x74bf,	// (0x00007805) list_single_2graphic_im_pane_g1

0x74d0,	// (0x00007816) list_single_2graphic_im_pane_g2_ParamLimits

0x74d0,	// (0x00007816) list_single_2graphic_im_pane_g2

0x74dc,	// (0x00007822) list_single_2graphic_im_pane_g3_ParamLimits

0x74dc,	// (0x00007822) list_single_2graphic_im_pane_g3

0x0003,

0xfc0f,	// (0x0000ff55) list_single_2graphic_im_pane_g_ParamLimits

0xfc0f,	// (0x0000ff55) list_single_2graphic_im_pane_g

0x74fc,	// (0x00007842) list_single_2graphic_im_pane_t1_ParamLimits

0x74fc,	// (0x00007842) list_single_2graphic_im_pane_t1

0x6c71,	// (0x00006fb7) list_single_graphic_2heading_pane_fp_ParamLimits

0x6c71,	// (0x00006fb7) list_single_graphic_2heading_pane_fp

0x6cb5,	// (0x00006ffb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6cb5,	// (0x00006ffb) list_single_graphic_2heading_pane_fp_g1

0x6c86,	// (0x00006fcc) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6c86,	// (0x00006fcc) list_single_graphic_2heading_pane_fp_g2

0x107c,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x107c,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g3

0x1088,	// (0x000013ce) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1088,	// (0x000013ce) list_single_graphic_2heading_pane_fp_g4

0x6c92,	// (0x00006fd8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6c92,	// (0x00006fd8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb3d,	// (0x0000fe83) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb3d,	// (0x0000fe83) list_single_graphic_2heading_pane_fp_g

0x752d,	// (0x00007873) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x752d,	// (0x00007873) list_single_graphic_2heading_pane_fp_t1

0x6ced,	// (0x00007033) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6ced,	// (0x00007033) list_single_graphic_2heading_pane_fp_t2

0x7543,	// (0x00007889) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7543,	// (0x00007889) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc18,	// (0x0000ff5e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc18,	// (0x0000ff5e) list_single_graphic_2heading_pane_fp_t

0x658c,	// (0x000068d2) fep_hwr_write_pane_g5_ParamLimits

0x658c,	// (0x000068d2) fep_hwr_write_pane_g5

0x6598,	// (0x000068de) fep_hwr_write_pane_g6_ParamLimits

0x6598,	// (0x000068de) fep_hwr_write_pane_g6

0x7184,	// (0x000074ca) eswt_shell_pane_ParamLimits

0x3578,	// (0x000038be) bg_popup_window_pane_cp18_ParamLimits

0x3a29,	// (0x00003d6f) heading_pane_cp70

0x72ae,	// (0x000075f4) popup_eswt_tasktip_window_t1_ParamLimits

0xcbc3,	// (0x0000cf09) aid_touch_tab_arrow_left

0xcbd9,	// (0x0000cf1f) aid_touch_tab_arrow_right

0xb845,	// (0x0000bb8b) title_pane_g3_ParamLimits

0xb845,	// (0x0000bb8b) title_pane_g3

0x0f35,	// (0x0000127b) set_value_pane_g1

0xcafb,	// (0x0000ce41) popup_toolbar_trans_pane_ParamLimits

0x7473,	// (0x000077b9) aid_size_cell_tb_trans_pane_ParamLimits

0x1056,	// (0x0000139c) bg_tb_trans_pane_ParamLimits

0x7485,	// (0x000077cb) grid_tb_trans_pane_ParamLimits

0x04fb,	// (0x00000841) cont_note_pane_ParamLimits

0x04fb,	// (0x00000841) cont_note_pane

0x0870,	// (0x00000bb6) cont_snote2_single_text_pane_ParamLimits

0x0870,	// (0x00000bb6) cont_snote2_single_text_pane

0x0870,	// (0x00000bb6) cont_snote2_single_graphic_pane_ParamLimits

0x0870,	// (0x00000bb6) cont_snote2_single_graphic_pane

0x3c58,	// (0x00003f9e) cont_note_wait_pane_ParamLimits

0x3c58,	// (0x00003f9e) cont_note_wait_pane

0x3c58,	// (0x00003f9e) cont_note_image_pane_ParamLimits

0x3c58,	// (0x00003f9e) cont_note_image_pane

0x7559,	// (0x0000789f) popup_note2_window_g1_ParamLimits

0x7559,	// (0x0000789f) popup_note2_window_g1

0x758a,	// (0x000078d0) popup_note2_window_t1_ParamLimits

0x758a,	// (0x000078d0) popup_note2_window_t1

0x75cf,	// (0x00007915) popup_note2_window_t2_ParamLimits

0x75cf,	// (0x00007915) popup_note2_window_t2

0x7614,	// (0x0000795a) popup_note2_window_t3_ParamLimits

0x7614,	// (0x0000795a) popup_note2_window_t3

0x7659,	// (0x0000799f) popup_note2_window_t4_ParamLimits

0x7659,	// (0x0000799f) popup_note2_window_t4

0x057f,	// (0x000008c5) popup_note2_window_t5_ParamLimits

0x057f,	// (0x000008c5) popup_note2_window_t5

0x0004,

0xfc24,	// (0x0000ff6a) popup_note2_window_t_ParamLimits

0xfc24,	// (0x0000ff6a) popup_note2_window_t

0x7688,	// (0x000079ce) popup_note2_image_window_g1_ParamLimits

0x7688,	// (0x000079ce) popup_note2_image_window_g1

0x7694,	// (0x000079da) popup_note2_image_window_g2_ParamLimits

0x7694,	// (0x000079da) popup_note2_image_window_g2

0x0001,

0xfc2f,	// (0x0000ff75) popup_note2_image_window_g_ParamLimits

0xfc2f,	// (0x0000ff75) popup_note2_image_window_g

0x76a6,	// (0x000079ec) popup_note2_image_window_t1_ParamLimits

0x76a6,	// (0x000079ec) popup_note2_image_window_t1

0x76be,	// (0x00007a04) popup_note2_image_window_t2_ParamLimits

0x76be,	// (0x00007a04) popup_note2_image_window_t2

0x76d6,	// (0x00007a1c) popup_note2_image_window_t3_ParamLimits

0x76d6,	// (0x00007a1c) popup_note2_image_window_t3

0x0002,

0xfc34,	// (0x0000ff7a) popup_note2_image_window_t_ParamLimits

0xfc34,	// (0x0000ff7a) popup_note2_image_window_t

0x3c66,	// (0x00003fac) popup_note2_wait_window_g1_ParamLimits

0x3c66,	// (0x00003fac) popup_note2_wait_window_g1

0x76f2,	// (0x00007a38) popup_note2_wait_window_g2_ParamLimits

0x76f2,	// (0x00007a38) popup_note2_wait_window_g2

0x3c7e,	// (0x00003fc4) popup_note2_wait_window_g3_ParamLimits

0x3c7e,	// (0x00003fc4) popup_note2_wait_window_g3

0x0002,

0xfc3b,	// (0x0000ff81) popup_note2_wait_window_g_ParamLimits

0xfc3b,	// (0x0000ff81) popup_note2_wait_window_g

0x76fe,	// (0x00007a44) popup_note2_wait_window_t1_ParamLimits

0x76fe,	// (0x00007a44) popup_note2_wait_window_t1

0x771c,	// (0x00007a62) popup_note2_wait_window_t2_ParamLimits

0x771c,	// (0x00007a62) popup_note2_wait_window_t2

0x773a,	// (0x00007a80) popup_note2_wait_window_t3_ParamLimits

0x773a,	// (0x00007a80) popup_note2_wait_window_t3

0x774c,	// (0x00007a92) popup_note2_wait_window_t4_ParamLimits

0x774c,	// (0x00007a92) popup_note2_wait_window_t4

0x0003,

0xfc42,	// (0x0000ff88) popup_note2_wait_window_t_ParamLimits

0xfc42,	// (0x0000ff88) popup_note2_wait_window_t

0x775e,	// (0x00007aa4) wait_bar2_pane_ParamLimits

0x775e,	// (0x00007aa4) wait_bar2_pane

0x7776,	// (0x00007abc) popup_snote2_single_text_window_g1_ParamLimits

0x7776,	// (0x00007abc) popup_snote2_single_text_window_g1

0x779e,	// (0x00007ae4) popup_snote2_single_text_window_t1_ParamLimits

0x779e,	// (0x00007ae4) popup_snote2_single_text_window_t1

0x77ea,	// (0x00007b30) popup_snote2_single_text_window_t2_ParamLimits

0x77ea,	// (0x00007b30) popup_snote2_single_text_window_t2

0x7836,	// (0x00007b7c) popup_snote2_single_text_window_t3_ParamLimits

0x7836,	// (0x00007b7c) popup_snote2_single_text_window_t3

0x7877,	// (0x00007bbd) popup_snote2_single_text_window_t4_ParamLimits

0x7877,	// (0x00007bbd) popup_snote2_single_text_window_t4

0x78ad,	// (0x00007bf3) popup_snote2_single_text_window_t5_ParamLimits

0x78ad,	// (0x00007bf3) popup_snote2_single_text_window_t5

0x0004,

0xfc4b,	// (0x0000ff91) popup_snote2_single_text_window_t_ParamLimits

0xfc4b,	// (0x0000ff91) popup_snote2_single_text_window_t

0x78d8,	// (0x00007c1e) popup_snote2_single_graphic_window_g1_ParamLimits

0x78d8,	// (0x00007c1e) popup_snote2_single_graphic_window_g1

0x7900,	// (0x00007c46) popup_snote2_single_graphic_window_g2_ParamLimits

0x7900,	// (0x00007c46) popup_snote2_single_graphic_window_g2

0x0001,

0xfc56,	// (0x0000ff9c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc56,	// (0x0000ff9c) popup_snote2_single_graphic_window_g

0x7928,	// (0x00007c6e) popup_snote2_single_graphic_window_t1_ParamLimits

0x7928,	// (0x00007c6e) popup_snote2_single_graphic_window_t1

0x7974,	// (0x00007cba) popup_snote2_single_graphic_window_t2_ParamLimits

0x7974,	// (0x00007cba) popup_snote2_single_graphic_window_t2

0x7836,	// (0x00007b7c) popup_snote2_single_graphic_window_t3_ParamLimits

0x7836,	// (0x00007b7c) popup_snote2_single_graphic_window_t3

0x7877,	// (0x00007bbd) popup_snote2_single_graphic_window_t4_ParamLimits

0x7877,	// (0x00007bbd) popup_snote2_single_graphic_window_t4

0x78ad,	// (0x00007bf3) popup_snote2_single_graphic_window_t5_ParamLimits

0x78ad,	// (0x00007bf3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc5b,	// (0x0000ffa1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc5b,	// (0x0000ffa1) popup_snote2_single_graphic_window_t

0x5d7b,	// (0x000060c1) clock_nsta_pane_cp2_t1

0x5d7b,	// (0x000060c1) clock_nsta_pane_cp2_t2

0x0001,

0xfa7b,	// (0x0000fdc1) clock_nsta_pane_cp2_t

0x1070,	// (0x000013b6) form_field_data_wide_pane_g1_ParamLimits

0x107c,	// (0x000013c2) form_field_data_wide_pane_g2_ParamLimits

0x107c,	// (0x000013c2) form_field_data_wide_pane_g2

0x1088,	// (0x000013ce) form_field_data_wide_pane_g3_ParamLimits

0x1088,	// (0x000013ce) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x0000f995) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x0000f995) form_field_data_wide_pane_g

0xd562,	// (0x0000d8a8) grid_touch_3_pane_ParamLimits

0xd562,	// (0x0000d8a8) grid_touch_3_pane

0xdacc,	// (0x0000de12) cell_touch_3_pane_ParamLimits

0xdacc,	// (0x0000de12) cell_touch_3_pane

0x6362,	// (0x000066a8) cell_touch_3_pane_g1

0x6362,	// (0x000066a8) cell_touch_3_pane_g2

0x0001,

0xfb00,	// (0x0000fe46) cell_touch_3_pane_g

0x05d7,	// (0x0000091d) cont_query_data_pane

0x05df,	// (0x00000925) cont_query_data_pane_cp1

0x79ee,	// (0x00007d34) button_value_adjust_pane_cp7

0x79f6,	// (0x00007d3c) query_popup_pane_cp3

0x1bb7,	// (0x00001efd) bg_popup_sub_pane_cp22_ParamLimits

0x1bcd,	// (0x00001f13) navi_navi_volume_pane_cp2

0x1be8,	// (0x00001f2e) popup_side_volume_key_window_g2

0x1bf7,	// (0x00001f3d) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x0000fa2b) popup_side_volume_key_window_g

0x1c14,	// (0x00001f5a) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x0000fa32) popup_side_volume_key_window_t

0x209e,	// (0x000023e4) popup_side_volume_key_window_ParamLimits

0xbc48,	// (0x0000bf8e) list_double_graphic_pane_g4_ParamLimits

0xbc48,	// (0x0000bf8e) list_double_graphic_pane_g4

0xd3b5,	// (0x0000d6fb) list_single_2heading_msg_pane_ParamLimits

0xd3b5,	// (0x0000d6fb) list_single_2heading_msg_pane

0xdb14,	// (0x0000de5a) list_single_2heading_msg_pane_g1_ParamLimits

0xdb14,	// (0x0000de5a) list_single_2heading_msg_pane_g1

0xdb20,	// (0x0000de66) list_single_2heading_msg_pane_g2_ParamLimits

0xdb20,	// (0x0000de66) list_single_2heading_msg_pane_g2

0xdb33,	// (0x0000de79) list_single_2heading_msg_pane_g3_ParamLimits

0xdb33,	// (0x0000de79) list_single_2heading_msg_pane_g3

0x7a49,	// (0x00007d8f) list_single_2heading_msg_pane_g4_ParamLimits

0x7a49,	// (0x00007d8f) list_single_2heading_msg_pane_g4

0x0003,

0xfc66,	// (0x0000ffac) list_single_2heading_msg_pane_g_ParamLimits

0xfc66,	// (0x0000ffac) list_single_2heading_msg_pane_g

0x7a61,	// (0x00007da7) list_single_2heading_msg_pane_t1_ParamLimits

0x7a61,	// (0x00007da7) list_single_2heading_msg_pane_t1

0xdb3f,	// (0x0000de85) list_single_2heading_msg_pane_t2_ParamLimits

0xdb3f,	// (0x0000de85) list_single_2heading_msg_pane_t2

0xdbaa,	// (0x0000def0) list_single_2heading_msg_pane_t3_ParamLimits

0xdbaa,	// (0x0000def0) list_single_2heading_msg_pane_t3

0x7af1,	// (0x00007e37) list_single_2heading_msg_pane_t4_ParamLimits

0x7af1,	// (0x00007e37) list_single_2heading_msg_pane_t4

0x0003,

0xfc6f,	// (0x0000ffb5) list_single_2heading_msg_pane_t_ParamLimits

0xfc6f,	// (0x0000ffb5) list_single_2heading_msg_pane_t

0x011b,	// (0x00000461) title_pane_g4_ParamLimits

0x011b,	// (0x00000461) title_pane_g4

0x15b0,	// (0x000018f6) title_pane_stacon_g3_ParamLimits

0x15b0,	// (0x000018f6) title_pane_stacon_g3

0x74f0,	// (0x00007836) list_single_2graphic_im_pane_g4_ParamLimits

0x74f0,	// (0x00007836) list_single_2graphic_im_pane_g4

0x481b,	// (0x00004b61) popup_side_volume_key_window_cp

0x5297,	// (0x000055dd) main_idle_act2_pane_t1

0x3412,	// (0x00003758) toolbar_button_pane_g10

0xbba1,	// (0x0000bee7) popup_toolbar_window_cp1

0x5d6c,	// (0x000060b2) clock_nsta_pane_cp_t1

0x5d6c,	// (0x000060b2) clock_nsta_pane_cp_t2

0x0001,

0xfa76,	// (0x0000fdbc) clock_nsta_pane_cp_t

0x1bcd,	// (0x00001f13) navi_navi_volume_pane_cp2_ParamLimits

0x1bdc,	// (0x00001f22) popup_side_volume_key_window_g1_ParamLimits

0x1be8,	// (0x00001f2e) popup_side_volume_key_window_g2_ParamLimits

0x1bf7,	// (0x00001f3d) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x0000fa2b) popup_side_volume_key_window_g_ParamLimits

0x63cc,	// (0x00006712) fep_hwr_aid_pane

0x6473,	// (0x000067b9) bg_fep_hwr_top_pane_g4_ParamLimits

0x6493,	// (0x000067d9) fep_hwr_top_pane_g1_ParamLimits

0x64a5,	// (0x000067eb) fep_hwr_top_pane_g2_ParamLimits

0x64b7,	// (0x000067fd) fep_hwr_top_pane_g3_ParamLimits

0xfacb,	// (0x0000fe11) fep_hwr_top_pane_g_ParamLimits

0x64cc,	// (0x00006812) fep_hwr_top_text_pane_ParamLimits

0x45de,	// (0x00004924) aid_touch_tab_arrow_arrow_2

0x45e7,	// (0x0000492d) aid_touch_tab_arrow_left_2

0x63e0,	// (0x00006726) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6417,	// (0x0000675d) fep_hwr_prediction_pane

0x6744,	// (0x00006a8a) fep_vkb_prediction_pane

0xd8a5,	// (0x0000dbeb) fep_vkb_side_pane_g3_ParamLimits

0xd8a5,	// (0x0000dbeb) fep_vkb_side_pane_g3

0x67f4,	// (0x00006b3a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6eaa,	// (0x000071f0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6eb7,	// (0x000071fd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb75,	// (0x0000febb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7b16,	// (0x00007e5c) fep_hwr_prediction_pane_g1

0x7b20,	// (0x00007e66) fep_hwr_prediction_pane_g2

0x7b28,	// (0x00007e6e) fep_hwr_prediction_pane_g3

0x7b30,	// (0x00007e76) fep_hwr_prediction_pane_g4

0x0003,

0xfc78,	// (0x0000ffbe) fep_hwr_prediction_pane_g

0x7b16,	// (0x00007e5c) fep_vkb_prediction_pane_g1

0x7b38,	// (0x00007e7e) fep_vkb_prediction_pane_g2

0x7b40,	// (0x00007e86) fep_vkb_prediction_pane_g3

0x7b48,	// (0x00007e8e) fep_vkb_prediction_pane_g4

0x0003,

0xfc81,	// (0x0000ffc7) fep_vkb_prediction_pane_g

0x4b49,	// (0x00004e8f) slider_set_pane_g3

0x4b5d,	// (0x00004ea3) slider_set_pane_g4

0x4b75,	// (0x00004ebb) slider_set_pane_g5

0x4b49,	// (0x00004e8f) slider_set_pane_g6

0x4b8b,	// (0x00004ed1) slider_set_pane_g7

0x4d45,	// (0x0000508b) slider_form_pane_g3

0x4d4e,	// (0x00005094) slider_form_pane_g4

0x4d56,	// (0x0000509c) slider_form_pane_g5

0x4d45,	// (0x0000508b) slider_form_pane_g6

0xd36b,	// (0x0000d6b1) slider_form_pane_g7

0x5599,	// (0x000058df) slider_set_pane_vc_g3

0x55a2,	// (0x000058e8) slider_set_pane_vc_g4

0x55ab,	// (0x000058f1) slider_set_pane_vc_g5

0x5599,	// (0x000058df) slider_set_pane_vc_g6

0x55b4,	// (0x000058fa) slider_set_pane_vc_g7

0x5a2a,	// (0x00005d70) slider_form_pane_vc_g1

0x5a33,	// (0x00005d79) slider_form_pane_vc_g2

0x5a3c,	// (0x00005d82) slider_form_pane_vc_g3

0x5a2a,	// (0x00005d70) slider_form_pane_vc_g4

0x5a45,	// (0x00005d8b) slider_form_pane_vc_g5

0x0004,

0xfa48,	// (0x0000fd8e) slider_form_pane_vc_g

0xf2fd,	// (0x0000f643) main_idle_act3_pane

0x7b50,	// (0x00007e96) ai3_links_pane

0xdc18,	// (0x0000df5e) popup_ai3_data_window_ParamLimits

0xdc18,	// (0x0000df5e) popup_ai3_data_window

0xf2fd,	// (0x0000f643) grid_ai3_links_pane

0xdc32,	// (0x0000df78) cell_ai3_links_pane_ParamLimits

0xdc32,	// (0x0000df78) cell_ai3_links_pane

0x7b8b,	// (0x00007ed1) bg_popup_sub_pane_cp11

0x7b98,	// (0x00007ede) cell_ai3_links_pane_g1

0xf2fd,	// (0x0000f643) bg_popup_sub_pane_cp12

0x7bbd,	// (0x00007f03) heading_ai3_data_pane

0x7bc5,	// (0x00007f0b) list_ai3_gene_pane

0x7bd1,	// (0x00007f17) popup_ai3_data_window_g1

0x7bd9,	// (0x00007f1f) heading_ai3_data_pane_g1

0x7be1,	// (0x00007f27) heading_ai3_data_pane_t1

0x7bef,	// (0x00007f35) list_double_ai3_gene_pane_ParamLimits

0x7bef,	// (0x00007f35) list_double_ai3_gene_pane

0x7bfc,	// (0x00007f42) list_single_ai3_gene_pane_ParamLimits

0x7bfc,	// (0x00007f42) list_single_ai3_gene_pane

0x6327,	// (0x0000666d) list_highlight_pane_cp7_ParamLimits

0x6327,	// (0x0000666d) list_highlight_pane_cp7

0x7c09,	// (0x00007f4f) list_single_a13_gene_pane_t1_ParamLimits

0x7c09,	// (0x00007f4f) list_single_a13_gene_pane_t1

0x7c20,	// (0x00007f66) list_single_ai3_gene_pane_g1

0x7c29,	// (0x00007f6f) list_single_ai3_gene_pane_g2

0x0001,

0xfc8a,	// (0x0000ffd0) list_single_ai3_gene_pane_g

0x7c31,	// (0x00007f77) list_double_ai3_gene_pane_g1_ParamLimits

0x7c31,	// (0x00007f77) list_double_ai3_gene_pane_g1

0x7c3d,	// (0x00007f83) list_double_ai3_gene_pane_t1_ParamLimits

0x7c3d,	// (0x00007f83) list_double_ai3_gene_pane_t1

0x7c59,	// (0x00007f9f) list_double_ai3_gene_pane_t2_ParamLimits

0x7c59,	// (0x00007f9f) list_double_ai3_gene_pane_t2

0x7c6f,	// (0x00007fb5) list_double_ai3_gene_pane_t3_ParamLimits

0x7c6f,	// (0x00007fb5) list_double_ai3_gene_pane_t3

0x0002,

0xfc8f,	// (0x0000ffd5) list_double_ai3_gene_pane_t_ParamLimits

0xfc8f,	// (0x0000ffd5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7a07,	// (0x00007d4d) aid_size_min_col_2

0xdafe,	// (0x0000de44) aid_size_min_msg_ParamLimits

0xdafe,	// (0x0000de44) aid_size_min_msg

0xd8b9,	// (0x0000dbff) fep_vkb_top_text_pane_g2_ParamLimits

0xd8b9,	// (0x0000dbff) fep_vkb_top_text_pane_g2

0x0001,

0xfafb,	// (0x0000fe41) fep_vkb_top_text_pane_g_ParamLimits

0xfafb,	// (0x0000fe41) fep_vkb_top_text_pane_g

0xf2fd,	// (0x0000f643) main_hc_apps_shell_pane

0x7c8c,	// (0x00007fd2) grid_hc_apps_pane_ParamLimits

0x7c8c,	// (0x00007fd2) grid_hc_apps_pane

0x7c9e,	// (0x00007fe4) list_hc_apps_pane

0x7ca6,	// (0x00007fec) scroll_pane_cp37_ParamLimits

0x7ca6,	// (0x00007fec) scroll_pane_cp37

0xdc4c,	// (0x0000df92) cell_hc_apps_pane_ParamLimits

0xdc4c,	// (0x0000df92) cell_hc_apps_pane

0xdd0a,	// (0x0000e050) cell_hc_apps_pane_g1_ParamLimits

0xdd0a,	// (0x0000e050) cell_hc_apps_pane_g1

0x7d90,	// (0x000080d6) cell_hc_apps_pane_g2_ParamLimits

0x7d90,	// (0x000080d6) cell_hc_apps_pane_g2

0x7dac,	// (0x000080f2) cell_hc_apps_pane_g3_ParamLimits

0x7dac,	// (0x000080f2) cell_hc_apps_pane_g3

0x0002,

0xfc96,	// (0x0000ffdc) cell_hc_apps_pane_g_ParamLimits

0xfc96,	// (0x0000ffdc) cell_hc_apps_pane_g

0xdd36,	// (0x0000e07c) cell_hc_apps_pane_t1_ParamLimits

0xdd36,	// (0x0000e07c) cell_hc_apps_pane_t1

0x04fb,	// (0x00000841) grid_highlight_pane_cp10_ParamLimits

0x04fb,	// (0x00000841) grid_highlight_pane_cp10

0xdd74,	// (0x0000e0ba) list_single_hc_apps_pane_ParamLimits

0xdd74,	// (0x0000e0ba) list_single_hc_apps_pane

0xdda1,	// (0x0000e0e7) list_single_hc_apps_pane_g1

0xddba,	// (0x0000e100) list_single_hc_apps_pane_g2

0x0001,

0xfc9d,	// (0x0000ffe3) list_single_hc_apps_pane_g

0xddd3,	// (0x0000e119) list_single_hc_apps_pane_g2_copy1

0x7eb8,	// (0x000081fe) list_single_hc_apps_pane_t1

0x01c7,	// (0x0000050d) bg_set_opt_pane_cp_ParamLimits

0x0211,	// (0x00000557) setting_slider_pane_t1_ParamLimits

0x022a,	// (0x00000570) setting_slider_pane_t2_ParamLimits

0x0244,	// (0x0000058a) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0000f87d) setting_slider_pane_t_ParamLimits

0x025c,	// (0x000005a2) slider_set_pane_ParamLimits

0x26e0,	// (0x00002a26) control_pane_g5_ParamLimits

0x26e0,	// (0x00002a26) control_pane_g5

0x4b30,	// (0x00004e76) slider_set_pane_g1_ParamLimits

0x4b3d,	// (0x00004e83) slider_set_pane_g2_ParamLimits

0x4b49,	// (0x00004e8f) slider_set_pane_g3_ParamLimits

0x4b5d,	// (0x00004ea3) slider_set_pane_g4_ParamLimits

0x4b75,	// (0x00004ebb) slider_set_pane_g5_ParamLimits

0x4b49,	// (0x00004e8f) slider_set_pane_g6_ParamLimits

0x4b8b,	// (0x00004ed1) slider_set_pane_g7_ParamLimits

0xf92c,	// (0x0000fc72) slider_set_pane_g_ParamLimits

0x217f,	// (0x000024c5) navi_icon_text_pane_ParamLimits

0xcb8c,	// (0x0000ced2) aid_fill_nsta_2_ParamLimits

0xcbc3,	// (0x0000cf09) aid_touch_tab_arrow_left_ParamLimits

0xcbd9,	// (0x0000cf1f) aid_touch_tab_arrow_right_ParamLimits

0xcc74,	// (0x0000cfba) clock_nsta_pane_ParamLimits

0x45c0,	// (0x00004906) navi_icon_pane_g1_ParamLimits

0x45cc,	// (0x00004912) navi_text_pane_t1_ParamLimits

0x5e78,	// (0x000061be) navi_icon_text_pane_g1_ParamLimits

0x5e84,	// (0x000061ca) navi_icon_text_pane_t1_ParamLimits

0xdda1,	// (0x0000e0e7) list_single_hc_apps_pane_g1_ParamLimits

0xddba,	// (0x0000e100) list_single_hc_apps_pane_g2_ParamLimits

0xfc9d,	// (0x0000ffe3) list_single_hc_apps_pane_g_ParamLimits

0xddd3,	// (0x0000e119) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7eb8,	// (0x000081fe) list_single_hc_apps_pane_t1_ParamLimits

0xb74a,	// (0x0000ba90) popup_toolbar2_fixed_window_ParamLimits

0xb74a,	// (0x0000ba90) popup_toolbar2_fixed_window

0xcaf1,	// (0x0000ce37) popup_toolbar2_float_window

0xf2fd,	// (0x0000f643) bg_popup_sub_pane_cp27

0x7ee6,	// (0x0000822c) grid_toolbar2_float_pane

0xf2fd,	// (0x0000f643) bg_popup_sub_pane_cp26

0x7ee6,	// (0x0000822c) grid_toolbar2_fixed_pane

0xddef,	// (0x0000e135) cell_toolbar2_fixed_pane_ParamLimits

0xddef,	// (0x0000e135) cell_toolbar2_fixed_pane

0xde09,	// (0x0000e14f) cell_toolbar2_fixed_pane_g1

0x7f07,	// (0x0000824d) toolbar2_fixed_button_pane

0x33ca,	// (0x00003710) toolbar2_fixed_button_pane_g1

0x33d2,	// (0x00003718) toolbar2_fixed_button_pane_g2

0x33da,	// (0x00003720) toolbar2_fixed_button_pane_g3

0x33e2,	// (0x00003728) toolbar2_fixed_button_pane_g4

0x33ea,	// (0x00003730) toolbar2_fixed_button_pane_g5

0x33f2,	// (0x00003738) toolbar2_fixed_button_pane_g6

0x33fa,	// (0x00003740) toolbar2_fixed_button_pane_g7

0x3402,	// (0x00003748) toolbar2_fixed_button_pane_g8

0x340a,	// (0x00003750) toolbar2_fixed_button_pane_g9

0x0008,

0xf82e,	// (0x0000fb74) toolbar2_fixed_button_pane_g

0x7f0f,	// (0x00008255) cell_toolbar2_float_pane_ParamLimits

0x7f0f,	// (0x00008255) cell_toolbar2_float_pane

0x7f20,	// (0x00008266) cell_toolbar2_float_pane_g1

0x7f07,	// (0x0000824d) toolbar2_fixed_button_pane_cp

0xd793,	// (0x0000dad9) fep_vkb_accented_list_pane_ParamLimits

0xd793,	// (0x0000dad9) fep_vkb_accented_list_pane

0x6b3b,	// (0x00006e81) bg_popup_fep_shadow_pane_g9

0x2300,	// (0x00002646) bg_popup_fep_shadow_pane_cp3

0x1340,	// (0x00001686) list_accented_list_pane

0x7f29,	// (0x0000826f) list_single_accented_list_pane_ParamLimits

0x7f29,	// (0x0000826f) list_single_accented_list_pane

0x2300,	// (0x00002646) list_highlight_pane_cp10

0x7f3a,	// (0x00008280) list_single_accented_list_pane_t1

0xca1b,	// (0x0000cd61) popup_slider_window_ParamLimits

0xca1b,	// (0x0000cd61) popup_slider_window

0x79fe,	// (0x00007d44) aid_indentation_list_msg

0xdf00,	// (0x0000e246) bg_popup_window_pane_cp19

0x8066,	// (0x000083ac) popup_slider_window_g1

0x8082,	// (0x000083c8) popup_slider_window_g2

0x809e,	// (0x000083e4) popup_slider_window_g3

0x0005,

0xfca2,	// (0x0000ffe8) popup_slider_window_g

0x8104,	// (0x0000844a) popup_slider_window_t1

0x8178,	// (0x000084be) small_volume_slider_vertical_pane

0x6362,	// (0x000066a8) small_volume_slider_vertical_pane_g1

0x6362,	// (0x000066a8) small_volume_slider_vertical_pane_g2

0x8194,	// (0x000084da) small_volume_slider_vertical_pane_g3

0x0002,

0xfcb4,	// (0x0000fffa) small_volume_slider_vertical_pane_g

0xf331,	// (0x0000f677) area_side_right_pane_ParamLimits

0xf331,	// (0x0000f677) area_side_right_pane

0xdfb8,	// (0x0000e2fe) aid_size_side_button_ParamLimits

0xdfb8,	// (0x0000e2fe) aid_size_side_button

0xdfd1,	// (0x0000e317) grid_sctrl_middle_pane_ParamLimits

0xdfd1,	// (0x0000e317) grid_sctrl_middle_pane

0x81d0,	// (0x00008516) sctrl_sk_bottom_pane

0x81e1,	// (0x00008527) sctrl_sk_top_pane

0x81f3,	// (0x00008539) aid_touch_sctrl_top

0x04fb,	// (0x00000841) bg_sctrl_sk_pane_ParamLimits

0x04fb,	// (0x00000841) bg_sctrl_sk_pane

0x8200,	// (0x00008546) sctrl_sk_top_pane_g1

0x820d,	// (0x00008553) sctrl_sk_top_pane_t1

0x81f3,	// (0x00008539) aid_touch_sctrl_bottom

0x04fb,	// (0x00000841) bg_sctrl_sk_pane_cp_ParamLimits

0x04fb,	// (0x00000841) bg_sctrl_sk_pane_cp

0x8228,	// (0x0000856e) sctrl_sk_bottom_pane_g1

0x820d,	// (0x00008553) sctrl_sk_bottom_pane_t1

0xdff0,	// (0x0000e336) cell_sctrl_middle_pane_ParamLimits

0xdff0,	// (0x0000e336) cell_sctrl_middle_pane

0xe013,	// (0x0000e359) aid_touch_sctrl_middle_ParamLimits

0xe013,	// (0x0000e359) aid_touch_sctrl_middle

0x04fb,	// (0x00000841) bg_sctrl_middle_pane_ParamLimits

0x04fb,	// (0x00000841) bg_sctrl_middle_pane

0x96e8,	// (0x00009a2e) cell_sctrl_middle_pane_g1_ParamLimits

0x96e8,	// (0x00009a2e) cell_sctrl_middle_pane_g1

0xe027,	// (0x0000e36d) cell_sctrl_middle_pane_g2_ParamLimits

0xe027,	// (0x0000e36d) cell_sctrl_middle_pane_g2

0x0001,

0xfcc0,	// (0x00010006) cell_sctrl_middle_pane_g_ParamLimits

0xfcc0,	// (0x00010006) cell_sctrl_middle_pane_g

0x33ca,	// (0x00003710) bg_sctrl_middle_pane_g1

0x33d2,	// (0x00003718) bg_sctrl_middle_pane_g2

0x33da,	// (0x00003720) bg_sctrl_middle_pane_g3

0x33e2,	// (0x00003728) bg_sctrl_middle_pane_g4

0x33ea,	// (0x00003730) bg_sctrl_middle_pane_g5

0x33f2,	// (0x00003738) bg_sctrl_middle_pane_g6

0x33fa,	// (0x00003740) bg_sctrl_middle_pane_g7

0x3402,	// (0x00003748) bg_sctrl_middle_pane_g8

0x0007,

0xfcc5,	// (0x0001000b) bg_sctrl_middle_pane_g

0x340a,	// (0x00003750) bg_sctrl_middle_pane_g8_copy1

0x33ca,	// (0x00003710) bg_sctrl_sk_pane_g1

0x33d2,	// (0x00003718) bg_sctrl_sk_pane_g2

0x33da,	// (0x00003720) bg_sctrl_sk_pane_g3

0x0008,

0xf82e,	// (0x0000fb74) bg_sctrl_sk_pane_g

0x0a2e,	// (0x00000d74) aid_size_touch_scroll_bar

0x33e2,	// (0x00003728) bg_sctrl_sk_pane_g4

0x33ea,	// (0x00003730) bg_sctrl_sk_pane_g5

0x33f2,	// (0x00003738) bg_sctrl_sk_pane_g6

0x33fa,	// (0x00003740) bg_sctrl_sk_pane_g7

0x3402,	// (0x00003748) bg_sctrl_sk_pane_g8

0x340a,	// (0x00003750) bg_sctrl_sk_pane_g9

0x2931,	// (0x00002c77) popup_fep_china_hwr2_fs_candidate_window

0xc52f,	// (0x0000c875) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc52f,	// (0x0000c875) popup_fep_china_hwr2_fs_control_window

0x67f4,	// (0x00006b3a) sctrl_sk_top_pane_g2

0x0001,

0xfcbb,	// (0x00010001) sctrl_sk_top_pane_g

0xe039,	// (0x0000e37f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe039,	// (0x0000e37f) aid_fep_china_hwr2_fs_cell

0xe04d,	// (0x0000e393) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe04d,	// (0x0000e393) bg_popup_fep_shadow_pane_cp4

0xe064,	// (0x0000e3aa) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe064,	// (0x0000e3aa) bg_popup_fep_shadow_pane_cp5

0xe076,	// (0x0000e3bc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe076,	// (0x0000e3bc) popup_fep_china_hwr2_fs_control_bar_grid

0xe08a,	// (0x0000e3d0) popup_fep_china_hwr2_fs_control_funtion_grid

0x82c1,	// (0x00008607) aid_fep_china_hwr2_fs_candi_cell

0xf2fd,	// (0x0000f643) bg_popup_fep_shadow_pane_cp6

0x82cb,	// (0x00008611) popup_fep_china_hwr2_fs_candidate_grid

0xe092,	// (0x0000e3d8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe092,	// (0x0000e3d8) cell_fep_china_hwr2_fs_funtion_grid

0x6362,	// (0x000066a8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x82ed,	// (0x00008633) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x82ed,	// (0x00008633) cell_fep_china_hwr2_fs_funtion_grid_g1

0x82fb,	// (0x00008641) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x82fb,	// (0x00008641) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcd6,	// (0x0001001c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcd6,	// (0x0001001c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe0aa,	// (0x0000e3f0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe0aa,	// (0x0000e3f0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe0bf,	// (0x0000e405) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe0bf,	// (0x0000e405) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcdb,	// (0x00010021) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcdb,	// (0x00010021) cell_fep_china_hwr2_fs_funtion_grid_t

0x8342,	// (0x00008688) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x834a,	// (0x00008690) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8352,	// (0x00008698) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce0,	// (0x00010026) popup_fep_china_hwr2_fs_control_bar_grid_g

0x835a,	// (0x000086a0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x835a,	// (0x000086a0) cell_fep_china_hwr2_fs_candidate_grid

0x8373,	// (0x000086b9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x837b,	// (0x000086c1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6362,	// (0x000066a8) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6362,	// (0x000066a8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb00,	// (0x0000fe46) cell_fep_china_hwr2_fs_candidate_grid_g

0x8383,	// (0x000086c9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2f32,	// (0x00003278) clock_nsta_pane_cp_24_ParamLimits

0x2f32,	// (0x00003278) clock_nsta_pane_cp_24

0x2fb0,	// (0x000032f6) indicator_nsta_pane_cp_24_ParamLimits

0x2fb0,	// (0x000032f6) indicator_nsta_pane_cp_24

0x442b,	// (0x00004771) heading_pane_g1

0x0001,

0xf893,	// (0x0000fbd9) heading_pane_g

0x5028,	// (0x0000536e) grid_sct_catagory_button_pane

0x5058,	// (0x0000539e) scroll_pane_cp5_ParamLimits

0x5f17,	// (0x0000625d) button_value_adjust_pane_cp5_ParamLimits

0x5f17,	// (0x0000625d) button_value_adjust_pane_cp5

0x6013,	// (0x00006359) form2_midp_time_pane_ParamLimits

0x8391,	// (0x000086d7) cell_sct_catagory_button_pane_ParamLimits

0x8391,	// (0x000086d7) cell_sct_catagory_button_pane

0x6327,	// (0x0000666d) bg_button_pane_cp01_ParamLimits

0x6327,	// (0x0000666d) bg_button_pane_cp01

0x6362,	// (0x000066a8) cell_sct_catagory_button_pane_g1

0xca94,	// (0x0000cdda) popup_tb_extension_window

0xe0db,	// (0x0000e421) aid_size_cell_ext_ParamLimits

0xe0db,	// (0x0000e421) aid_size_cell_ext

0x0870,	// (0x00000bb6) bg_tb_trans_pane_cp1_ParamLimits

0x0870,	// (0x00000bb6) bg_tb_trans_pane_cp1

0xe101,	// (0x0000e447) grid_tb_ext_pane_ParamLimits

0xe101,	// (0x0000e447) grid_tb_ext_pane

0xe13c,	// (0x0000e482) cell_tb_ext_pane_ParamLimits

0xe13c,	// (0x0000e482) cell_tb_ext_pane

0xe164,	// (0x0000e4aa) cell_tb_ext_pane_g1_ParamLimits

0xe164,	// (0x0000e4aa) cell_tb_ext_pane_g1

0x8425,	// (0x0000876b) cell_tb_ext_pane_t1

0x04fb,	// (0x00000841) list_highlight_pane_cp11_ParamLimits

0x04fb,	// (0x00000841) list_highlight_pane_cp11

0xb75f,	// (0x0000baa5) popup_uni_indicator_window_ParamLimits

0xb75f,	// (0x0000baa5) popup_uni_indicator_window

0x1056,	// (0x0000139c) bg_popup_sub_pane_cp14

0x8440,	// (0x00008786) list_uniindi_pane

0x844c,	// (0x00008792) uniindi_top_pane

0x04fb,	// (0x00000841) bg_uniindi_top_pane

0x846b,	// (0x000087b1) uniindi_top_pane_g1

0x8481,	// (0x000087c7) uniindi_top_pane_g2

0x0003,

0xfce7,	// (0x0001002d) uniindi_top_pane_g

0x84ab,	// (0x000087f1) uniindi_top_pane_t1

0x84d5,	// (0x0000881b) list_single_uniindi_pane_ParamLimits

0x84d5,	// (0x0000881b) list_single_uniindi_pane

0x6362,	// (0x000066a8) bg_uniindi_top_pane_g1

0x84e8,	// (0x0000882e) list_single_uniindi_pane_g1

0x84fb,	// (0x00008841) list_single_uniindi_pane_t1

0xf2fd,	// (0x0000f643) control_bg_pane

0x8520,	// (0x00008866) bg_sctrl_sk_pane_cp1

0x8529,	// (0x0000886f) bg_sctrl_sk_pane_cp2

0x8532,	// (0x00008878) control_bg_pane_g1

0x853b,	// (0x00008881) control_bg_pane_g2

0x0001,

0xfcf0,	// (0x00010036) control_bg_pane_g

0x5d10,	// (0x00006056) cell_indicator_nsta_pane_g1_ParamLimits

0xd59f,	// (0x0000d8e5) cell_indicator_nsta_pane_g2_ParamLimits

0xfa64,	// (0x0000fdaa) cell_indicator_nsta_pane_g_ParamLimits

0x609b,	// (0x000063e1) form2_midp_time_pane_t1_ParamLimits

0x63be,	// (0x00006704) main_idle_act4_pane_ParamLimits

0x63be,	// (0x00006704) main_idle_act4_pane

0xca94,	// (0x0000cdda) popup_tb_extension_window_ParamLimits

0xe123,	// (0x0000e469) tb_ext_find_pane_ParamLimits

0xe123,	// (0x0000e469) tb_ext_find_pane

0x8544,	// (0x0000888a) ai_gene_pane_1_cp1

0x2447,	// (0x0000278d) ai_gene_pane_2_cp1

0x854c,	// (0x00008892) list_single_idle_plugin_calendar_pane

0x8555,	// (0x0000889b) list_single_idle_plugin_notification_pane

0x855e,	// (0x000088a4) list_single_idle_plugin_player_pane

0xe181,	// (0x0000e4c7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe181,	// (0x0000e4c7) list_single_idle_plugin_shortcut_pane

0xe1a9,	// (0x0000e4ef) main_idle_act4_pane_t1

0xe1bf,	// (0x0000e505) main_idle_act4_pane_t2

0x0001,

0xfcf5,	// (0x0001003b) main_idle_act4_pane_t

0xe1d5,	// (0x0000e51b) middle_sk_idle_act4_pane_ParamLimits

0xe1d5,	// (0x0000e51b) middle_sk_idle_act4_pane

0xe1f1,	// (0x0000e537) popup_clock_digital_analogue_window_cp2

0xe219,	// (0x0000e55f) shortcut_wheel_idle_act4_pane_ParamLimits

0xe219,	// (0x0000e55f) shortcut_wheel_idle_act4_pane

0x6362,	// (0x000066a8) shortcut_wheel_idle_act4_pane_g1

0x6362,	// (0x000066a8) shortcut_wheel_idle_act4_pane_g2

0x6362,	// (0x000066a8) shortcut_wheel_idle_act4_pane_g3

0x6362,	// (0x000066a8) shortcut_wheel_idle_act4_pane_g4

0x6362,	// (0x000066a8) shortcut_wheel_idle_act4_pane_g5

0x85f1,	// (0x00008937) shortcut_wheel_idle_act4_pane_g6

0x85f9,	// (0x0000893f) shortcut_wheel_idle_act4_pane_g7

0x8601,	// (0x00008947) shortcut_wheel_idle_act4_pane_g8

0x8609,	// (0x0000894f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcfa,	// (0x00010040) shortcut_wheel_idle_act4_pane_g

0x6473,	// (0x000067b9) middle_sk_idle_act4_pane_g1_ParamLimits

0x6473,	// (0x000067b9) middle_sk_idle_act4_pane_g1

0xe296,	// (0x0000e5dc) middle_sk_idle_act4_pane_g2_ParamLimits

0xe296,	// (0x0000e5dc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd1d,	// (0x00010063) middle_sk_idle_act4_pane_g_ParamLimits

0xfd1d,	// (0x00010063) middle_sk_idle_act4_pane_g

0xe2ae,	// (0x0000e5f4) middle_sk_idle_act4_pane_t1_ParamLimits

0xe2ae,	// (0x0000e5f4) middle_sk_idle_act4_pane_t1

0xe2dd,	// (0x0000e623) grid_ai_shortcut_pane_ParamLimits

0xe2dd,	// (0x0000e623) grid_ai_shortcut_pane

0xe2fa,	// (0x0000e640) list_highlight_pane_cp16_ParamLimits

0xe2fa,	// (0x0000e640) list_highlight_pane_cp16

0xe307,	// (0x0000e64d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe307,	// (0x0000e64d) list_single_idle_plugin_shortcut_pane_g1

0xe313,	// (0x0000e659) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe313,	// (0x0000e659) list_single_idle_plugin_shortcut_pane_g2

0xe32f,	// (0x0000e675) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe32f,	// (0x0000e675) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd22,	// (0x00010068) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd22,	// (0x00010068) list_single_idle_plugin_shortcut_pane_g

0xe344,	// (0x0000e68a) cell_ai_shortcut_pane_ParamLimits

0xe344,	// (0x0000e68a) cell_ai_shortcut_pane

0xe35a,	// (0x0000e6a0) cell_ai_shortcut_pane_g1_ParamLimits

0xe35a,	// (0x0000e6a0) cell_ai_shortcut_pane_g1

0x8544,	// (0x0000888a) ai_gene_pane_1_cp2

0x8739,	// (0x00008a7f) ai_gene_pane_2_cp2

0x8741,	// (0x00008a87) list_highlight_pane_cp15

0x874a,	// (0x00008a90) list_single_idle_plugin_calendar_pane_g1

0x8741,	// (0x00008a87) list_highlight_pane_cp17

0x8752,	// (0x00008a98) list_single_idle_plugin_calendar_pane_g1_copy1

0x875a,	// (0x00008aa0) list_single_idle_plugin_player_pane_g1

0x5339,	// (0x0000567f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd29,	// (0x0001006f) list_single_idle_plugin_player_pane_g

0x8762,	// (0x00008aa8) list_single_idle_plugin_player_pane_t1

0x8770,	// (0x00008ab6) list_single_idle_plugin_player_pane_t2

0x877e,	// (0x00008ac4) list_single_idle_plugin_player_pane_t3

0x878c,	// (0x00008ad2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd2e,	// (0x00010074) list_single_idle_plugin_player_pane_t

0x879a,	// (0x00008ae0) wait_bar_pane_cp15

0x87a2,	// (0x00008ae8) grid_ai_notification_pane

0x5339,	// (0x0000567f) list_single_idle_plugin_notification_pane_g1

0xe37c,	// (0x0000e6c2) cell_ai_notification_pane_ParamLimits

0xe37c,	// (0x0000e6c2) cell_ai_notification_pane

0x87b8,	// (0x00008afe) cell_ai_notification_pane_g1

0x87c0,	// (0x00008b06) cell_ai_notification_pane_t1

0xe389,	// (0x0000e6cf) tb_ext_find_button_pane

0xe391,	// (0x0000e6d7) tb_ext_find_pane_g1

0xe399,	// (0x0000e6df) tb_ext_find_pane_t1

0x1a34,	// (0x00001d7a) tb_ext_find_button_pane_g1

0x87ec,	// (0x00008b32) tb_ext_find_button_pane_g2

0x0001,

0xfd37,	// (0x0001007d) tb_ext_find_button_pane_g

0xe1a9,	// (0x0000e4ef) main_idle_act4_pane_t1_ParamLimits

0xe1bf,	// (0x0000e505) main_idle_act4_pane_t2_ParamLimits

0xfcf5,	// (0x0001003b) main_idle_act4_pane_t_ParamLimits

0xe1f1,	// (0x0000e537) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe209,	// (0x0000e54f) sat_plugin_idle_act4_pane_ParamLimits

0xe209,	// (0x0000e54f) sat_plugin_idle_act4_pane

0xe3a7,	// (0x0000e6ed) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe3a7,	// (0x0000e6ed) sat_plugin_idle_act4_pane_t1

0xe3bf,	// (0x0000e705) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe3bf,	// (0x0000e705) sat_plugin_idle_act4_pane_t2

0xe3d7,	// (0x0000e71d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe3d7,	// (0x0000e71d) sat_plugin_idle_act4_pane_t3

0xe3ef,	// (0x0000e735) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe3ef,	// (0x0000e735) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd3c,	// (0x00010082) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd3c,	// (0x00010082) sat_plugin_idle_act4_pane_t

0xf4d9,	// (0x0000f81f) popup_battery_window_ParamLimits

0xf4d9,	// (0x0000f81f) popup_battery_window

0x04fb,	// (0x00000841) bg_popup_sub_pane_cp25_ParamLimits

0x04fb,	// (0x00000841) bg_popup_sub_pane_cp25

0x8841,	// (0x00008b87) popup_battery_window_g1_ParamLimits

0x8841,	// (0x00008b87) popup_battery_window_g1

0x884d,	// (0x00008b93) popup_battery_window_t1_ParamLimits

0x884d,	// (0x00008b93) popup_battery_window_t1

0x885f,	// (0x00008ba5) popup_battery_window_t2_ParamLimits

0x885f,	// (0x00008ba5) popup_battery_window_t2

0x0001,

0xfd45,	// (0x0001008b) popup_battery_window_t_ParamLimits

0xfd45,	// (0x0001008b) popup_battery_window_t

0xc239,	// (0x0000c57f) midp_canvas_pane_ParamLimits

0xc296,	// (0x0000c5dc) midp_keypad_pane_ParamLimits

0xc296,	// (0x0000c5dc) midp_keypad_pane

0x284f,	// (0x00002b95) main_midp_pane_ParamLimits

0x5d8a,	// (0x000060d0) signal_pane_g2_cp_ParamLimits

0xe407,	// (0x0000e74d) aid_size_cell_midp_keypad_ParamLimits

0xe407,	// (0x0000e74d) aid_size_cell_midp_keypad

0xe425,	// (0x0000e76b) midp_keyp_game_grid_pane_ParamLimits

0xe425,	// (0x0000e76b) midp_keyp_game_grid_pane

0xe44c,	// (0x0000e792) midp_keyp_rocker_pane_ParamLimits

0xe44c,	// (0x0000e792) midp_keyp_rocker_pane

0xe49d,	// (0x0000e7e3) midp_keyp_sk_left_pane_ParamLimits

0xe49d,	// (0x0000e7e3) midp_keyp_sk_left_pane

0xe4f1,	// (0x0000e837) midp_keyp_sk_right_pane_ParamLimits

0xe4f1,	// (0x0000e837) midp_keyp_sk_right_pane

0xf2fd,	// (0x0000f643) bg_button_pane_cp03

0xe545,	// (0x0000e88b) midp_keyp_sk_left_pane_g1

0xf2fd,	// (0x0000f643) bg_button_pane_cp04

0xe545,	// (0x0000e88b) midp_keyp_sk_right_pane_g1

0x6362,	// (0x000066a8) midp_keyp_rocker_pane_g1

0xe54e,	// (0x0000e894) keyp_game_cell_pane_ParamLimits

0xe54e,	// (0x0000e894) keyp_game_cell_pane

0xf2fd,	// (0x0000f643) bg_button_pane_cp02

0xe572,	// (0x0000e8b8) keyp_game_cell_pane_g1

0xb6fa,	// (0x0000ba40) popup_fep_vkb2_window_ParamLimits

0xb6fa,	// (0x0000ba40) popup_fep_vkb2_window

0xe57b,	// (0x0000e8c1) aid_size_cell_vkb2_ParamLimits

0xe57b,	// (0x0000e8c1) aid_size_cell_vkb2

0xe5a7,	// (0x0000e8ed) popup_fep_vkb2_window_g1_ParamLimits

0xe5a7,	// (0x0000e8ed) popup_fep_vkb2_window_g1

0xe5f7,	// (0x0000e93d) vkb2_area_bottom_pane_ParamLimits

0xe5f7,	// (0x0000e93d) vkb2_area_bottom_pane

0xe64b,	// (0x0000e991) vkb2_area_keypad_pane_ParamLimits

0xe64b,	// (0x0000e991) vkb2_area_keypad_pane

0xe693,	// (0x0000e9d9) vkb2_area_top_pane_ParamLimits

0xe693,	// (0x0000e9d9) vkb2_area_top_pane

0xe71f,	// (0x0000ea65) vkb2_top_entry_pane_ParamLimits

0xe71f,	// (0x0000ea65) vkb2_top_entry_pane

0xe74c,	// (0x0000ea92) vkb2_top_grid_left_pane_ParamLimits

0xe74c,	// (0x0000ea92) vkb2_top_grid_left_pane

0xe76d,	// (0x0000eab3) vkb2_top_grid_right_pane_ParamLimits

0xe76d,	// (0x0000eab3) vkb2_top_grid_right_pane

0x8bdf,	// (0x00008f25) vkb2_cell_keypad_pane_ParamLimits

0x8bdf,	// (0x00008f25) vkb2_cell_keypad_pane

0xe7b5,	// (0x0000eafb) vkb2_area_bottom_grid_pane_ParamLimits

0xe7b5,	// (0x0000eafb) vkb2_area_bottom_grid_pane

0xe7df,	// (0x0000eb25) vkb2_area_bottom_pane_g1_ParamLimits

0xe7df,	// (0x0000eb25) vkb2_area_bottom_pane_g1

0xe805,	// (0x0000eb4b) vkb2_area_bottom_pane_g2_ParamLimits

0xe805,	// (0x0000eb4b) vkb2_area_bottom_pane_g2

0xe836,	// (0x0000eb7c) vkb2_area_bottom_pane_g3_ParamLimits

0xe836,	// (0x0000eb7c) vkb2_area_bottom_pane_g3

0x0002,

0xfd4a,	// (0x00010090) vkb2_area_bottom_pane_g_ParamLimits

0xfd4a,	// (0x00010090) vkb2_area_bottom_pane_g

0x8d89,	// (0x000090cf) vkb2_top_cell_left_pane_ParamLimits

0x8d89,	// (0x000090cf) vkb2_top_cell_left_pane

0xe8a0,	// (0x0000ebe6) vkb2_top_entry_pane_g1_ParamLimits

0xe8a0,	// (0x0000ebe6) vkb2_top_entry_pane_g1

0xe8ae,	// (0x0000ebf4) vkb2_top_entry_pane_t1_ParamLimits

0xe8ae,	// (0x0000ebf4) vkb2_top_entry_pane_t1

0x8df1,	// (0x00009137) vkb2_top_entry_pane_t2_ParamLimits

0x8df1,	// (0x00009137) vkb2_top_entry_pane_t2

0x8e23,	// (0x00009169) vkb2_top_entry_pane_t3_ParamLimits

0x8e23,	// (0x00009169) vkb2_top_entry_pane_t3

0x0002,

0xfd51,	// (0x00010097) vkb2_top_entry_pane_t_ParamLimits

0xfd51,	// (0x00010097) vkb2_top_entry_pane_t

0xe8e7,	// (0x0000ec2d) vkb2_top_grid_right_pane_g1_ParamLimits

0xe8e7,	// (0x0000ec2d) vkb2_top_grid_right_pane_g1

0x8e8a,	// (0x000091d0) vkb2_top_grid_right_pane_g2_ParamLimits

0x8e8a,	// (0x000091d0) vkb2_top_grid_right_pane_g2

0x8ea2,	// (0x000091e8) vkb2_top_grid_right_pane_g3_ParamLimits

0x8ea2,	// (0x000091e8) vkb2_top_grid_right_pane_g3

0xe8fd,	// (0x0000ec43) vkb2_top_grid_right_pane_g4_ParamLimits

0xe8fd,	// (0x0000ec43) vkb2_top_grid_right_pane_g4

0x0003,

0xfd58,	// (0x0001009e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd58,	// (0x0001009e) vkb2_top_grid_right_pane_g

0x8ed0,	// (0x00009216) vkb2_top_cell_left_pane_g1

0x8ee7,	// (0x0000922d) vkb2_cell_keypad_pane_g1_ParamLimits

0x8ee7,	// (0x0000922d) vkb2_cell_keypad_pane_g1

0x8ef5,	// (0x0000923b) vkb2_cell_keypad_pane_t1_ParamLimits

0x8ef5,	// (0x0000923b) vkb2_cell_keypad_pane_t1

0x8f0c,	// (0x00009252) vkb2_cell_bottom_grid_pane_ParamLimits

0x8f0c,	// (0x00009252) vkb2_cell_bottom_grid_pane

0x8f45,	// (0x0000928b) vkb2_cell_bottom_grid_pane_g1

0xe23a,	// (0x0000e580) aid_call2_pane_cp02

0xe242,	// (0x0000e588) aid_call_pane_cp02

0xe24a,	// (0x0000e590) clock_digital_number_pane_cp10

0xe252,	// (0x0000e598) clock_digital_number_pane_cp11

0xe25a,	// (0x0000e5a0) clock_digital_number_pane_cp12

0xe262,	// (0x0000e5a8) clock_digital_number_pane_cp13

0xe26a,	// (0x0000e5b0) clock_digital_separator_pane_cp10

0x1a34,	// (0x00001d7a) popup_clock_digital_analogue_window_cp2_g1

0x1a34,	// (0x00001d7a) popup_clock_digital_analogue_window_cp2_g2

0xe272,	// (0x0000e5b8) popup_clock_digital_analogue_window_cp2_g3

0x1a34,	// (0x00001d7a) popup_clock_digital_analogue_window_cp2_g4

0xe272,	// (0x0000e5b8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd0d,	// (0x00010053) popup_clock_digital_analogue_window_cp2_g

0xe27a,	// (0x0000e5c0) popup_clock_digital_analogue_window_cp2_t1

0xe288,	// (0x0000e5ce) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd18,	// (0x0001005e) popup_clock_digital_analogue_window_cp2_t

0x6362,	// (0x000066a8) clock_digital_number_pane_cp10_g1

0x6362,	// (0x000066a8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb00,	// (0x0000fe46) clock_digital_number_pane_cp10_g

0x6362,	// (0x000066a8) clock_digital_separator_pane_cp10_g1

0x6362,	// (0x000066a8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb00,	// (0x0000fe46) clock_digital_separator_pane_cp10_g

0x848d,	// (0x000087d3) uniindi_top_pane_g3

0x849e,	// (0x000087e4) uniindi_top_pane_g4

0x8c6a,	// (0x00008fb0) vkb2_row_keypad_pane_ParamLimits

0x8c6a,	// (0x00008fb0) vkb2_row_keypad_pane

0x8f65,	// (0x000092ab) vkb2_cell_t_keypad_pane_ParamLimits

0x8f65,	// (0x000092ab) vkb2_cell_t_keypad_pane

0x8f75,	// (0x000092bb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8f75,	// (0x000092bb) vkb2_cell_t_keypad_pane_cp08

0x8f88,	// (0x000092ce) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8f88,	// (0x000092ce) vkb2_cell_t_keypad_pane_cp09

0x8f9c,	// (0x000092e2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8f9c,	// (0x000092e2) vkb2_cell_t_keypad_pane_cp01

0x8fad,	// (0x000092f3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8fad,	// (0x000092f3) vkb2_cell_t_keypad_pane_cp02

0x8fbe,	// (0x00009304) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8fbe,	// (0x00009304) vkb2_cell_t_keypad_pane_cp03

0x8fcf,	// (0x00009315) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8fcf,	// (0x00009315) vkb2_cell_t_keypad_pane_cp04

0x8fe0,	// (0x00009326) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8fe0,	// (0x00009326) vkb2_cell_t_keypad_pane_cp05

0x8ff1,	// (0x00009337) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8ff1,	// (0x00009337) vkb2_cell_t_keypad_pane_cp06

0x9002,	// (0x00009348) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9002,	// (0x00009348) vkb2_cell_t_keypad_pane_cp07

0x9013,	// (0x00009359) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9013,	// (0x00009359) vkb2_cell_t_keypad_pane_cp10

0x67f4,	// (0x00006b3a) vkb2_cell_t_keypad_pane_g1

0x9028,	// (0x0000936e) vkb2_cell_t_keypad_pane_t1

0xf2fd,	// (0x0000f643) popup_grid_graphic2_window

0xe913,	// (0x0000ec59) aid_size_cell_graphic2_ParamLimits

0xe913,	// (0x0000ec59) aid_size_cell_graphic2

0xe951,	// (0x0000ec97) bg_popup_window_pane_cp21_ParamLimits

0xe951,	// (0x0000ec97) bg_popup_window_pane_cp21

0xe95f,	// (0x0000eca5) graphic2_pages_pane_ParamLimits

0xe95f,	// (0x0000eca5) graphic2_pages_pane

0xe9b5,	// (0x0000ecfb) grid_graphic2_control_pane_ParamLimits

0xe9b5,	// (0x0000ecfb) grid_graphic2_control_pane

0xe9fd,	// (0x0000ed43) grid_graphic2_pane_ParamLimits

0xe9fd,	// (0x0000ed43) grid_graphic2_pane

0xea84,	// (0x0000edca) cell_graphic2_pane

0xf2fd,	// (0x0000f643) main_comp_mode_pane

0x7bc5,	// (0x00007f0b) list_ai3_gene_pane_ParamLimits

0xdf00,	// (0x0000e246) bg_popup_window_pane_cp19_ParamLimits

0x800a,	// (0x00008350) bg_touch_area_indi_pane_ParamLimits

0x800a,	// (0x00008350) bg_touch_area_indi_pane

0x8020,	// (0x00008366) bg_touch_area_indi_pane_cp01_ParamLimits

0x8020,	// (0x00008366) bg_touch_area_indi_pane_cp01

0x8036,	// (0x0000837c) bg_touch_area_indi_pane_cp02_ParamLimits

0x8036,	// (0x0000837c) bg_touch_area_indi_pane_cp02

0x804c,	// (0x00008392) bg_touch_area_indi_pane_cp03_ParamLimits

0x804c,	// (0x00008392) bg_touch_area_indi_pane_cp03

0x8066,	// (0x000083ac) popup_slider_window_g1_ParamLimits

0x8082,	// (0x000083c8) popup_slider_window_g2_ParamLimits

0x809e,	// (0x000083e4) popup_slider_window_g3_ParamLimits

0xfca2,	// (0x0000ffe8) popup_slider_window_g_ParamLimits

0x8104,	// (0x0000844a) popup_slider_window_t1_ParamLimits

0x8178,	// (0x000084be) small_volume_slider_vertical_pane_ParamLimits

0xea84,	// (0x0000edca) cell_graphic2_pane_ParamLimits

0xeadf,	// (0x0000ee25) bg_button_pane_cp10_ParamLimits

0xeadf,	// (0x0000ee25) bg_button_pane_cp10

0xeaf2,	// (0x0000ee38) bg_button_pane_cp11_ParamLimits

0xeaf2,	// (0x0000ee38) bg_button_pane_cp11

0xeb05,	// (0x0000ee4b) graphic2_pages_pane_g1_ParamLimits

0xeb05,	// (0x0000ee4b) graphic2_pages_pane_g1

0xeb20,	// (0x0000ee66) graphic2_pages_pane_g2_ParamLimits

0xeb20,	// (0x0000ee66) graphic2_pages_pane_g2

0x0001,

0xfd66,	// (0x000100ac) graphic2_pages_pane_g_ParamLimits

0xfd66,	// (0x000100ac) graphic2_pages_pane_g

0xeb38,	// (0x0000ee7e) graphic2_pages_pane_t1_ParamLimits

0xeb38,	// (0x0000ee7e) graphic2_pages_pane_t1

0xeb50,	// (0x0000ee96) cell_graphic2_control_pane_ParamLimits

0xeb50,	// (0x0000ee96) cell_graphic2_control_pane

0xeb82,	// (0x0000eec8) cell_graphic2_pane_g1_ParamLimits

0xeb82,	// (0x0000eec8) cell_graphic2_pane_g1

0x660e,	// (0x00006954) cell_graphic2_pane_g2_ParamLimits

0x660e,	// (0x00006954) cell_graphic2_pane_g2

0xeb8f,	// (0x0000eed5) cell_graphic2_pane_g3_ParamLimits

0xeb8f,	// (0x0000eed5) cell_graphic2_pane_g3

0x661b,	// (0x00006961) cell_graphic2_pane_g4_ParamLimits

0x661b,	// (0x00006961) cell_graphic2_pane_g4

0xeb9c,	// (0x0000eee2) cell_graphic2_pane_g5_ParamLimits

0xeb9c,	// (0x0000eee2) cell_graphic2_pane_g5

0x0004,

0xfd6b,	// (0x000100b1) cell_graphic2_pane_g_ParamLimits

0xfd6b,	// (0x000100b1) cell_graphic2_pane_g

0xebb9,	// (0x0000eeff) cell_graphic2_pane_t1_ParamLimits

0xebb9,	// (0x0000eeff) cell_graphic2_pane_t1

0x441f,	// (0x00004765) grid_highlight_pane_cp11_ParamLimits

0x441f,	// (0x00004765) grid_highlight_pane_cp11

0x04fb,	// (0x00000841) bg_button_pane_cp05

0xec03,	// (0x0000ef49) cell_graphic2_control_pane_g1

0x6362,	// (0x000066a8) bg_touch_area_indi_pane_g1

0x9301,	// (0x00009647) aid_cmod_rocker_key_size

0x930b,	// (0x00009651) aid_cmode_itu_key_size

0x9315,	// (0x0000965b) main_cmode_video_pane

0x931f,	// (0x00009665) main_comp_mode_itu_pane

0x932b,	// (0x00009671) main_comp_mode_rocker_pane

0x9337,	// (0x0000967d) cell_cmode_rocker_pane_ParamLimits

0x9337,	// (0x0000967d) cell_cmode_rocker_pane

0x9349,	// (0x0000968f) cell_cmode_itu_pane_ParamLimits

0x9349,	// (0x0000968f) cell_cmode_itu_pane

0x1056,	// (0x0000139c) bg_button_pane_cp06_ParamLimits

0x1056,	// (0x0000139c) bg_button_pane_cp06

0x67f4,	// (0x00006b3a) cell_cmode_rocker_pane_g1_ParamLimits

0x67f4,	// (0x00006b3a) cell_cmode_rocker_pane_g1

0x82ed,	// (0x00008633) cell_cmode_rocker_pane_g2_ParamLimits

0x82ed,	// (0x00008633) cell_cmode_rocker_pane_g2

0x0001,

0xfd7b,	// (0x000100c1) cell_cmode_rocker_pane_g_ParamLimits

0xfd7b,	// (0x000100c1) cell_cmode_rocker_pane_g

0xf2fd,	// (0x0000f643) bg_button_pane_cp07

0x935e,	// (0x000096a4) cell_cmode_itu_pane_g1

0x9367,	// (0x000096ad) cell_cmode_itu_pane_t1

0x9375,	// (0x000096bb) cell_cmode_itu_pane_t2

0x0001,

0xfd80,	// (0x000100c6) cell_cmode_itu_pane_t

0x8510,	// (0x00008856) aid_touch_ctrl_left

0x8518,	// (0x0000885e) aid_touch_ctrl_right

0xf2fd,	// (0x0000f643) compa_mode_pane

0xec27,	// (0x0000ef6d) aid_cmod_rocker_key_size_cp

0xec31,	// (0x0000ef77) aid_cmode_itu_key_size_cp

0x9397,	// (0x000096dd) compa_mode_pane_g1

0x939f,	// (0x000096e5) compa_mode_pane_g2

0x93a7,	// (0x000096ed) compa_mode_pane_g3

0x0002,

0xfd85,	// (0x000100cb) compa_mode_pane_g

0xec3b,	// (0x0000ef81) main_comp_mode_itu_pane_cp

0xec43,	// (0x0000ef89) main_comp_mode_rocker_pane_cp

0xec4b,	// (0x0000ef91) cell_cmode_itu_pane_cp_ParamLimits

0xec4b,	// (0x0000ef91) cell_cmode_itu_pane_cp

0xec60,	// (0x0000efa6) cell_cmode_rocker_pane_cp_ParamLimits

0xec60,	// (0x0000efa6) cell_cmode_rocker_pane_cp

0x1056,	// (0x0000139c) bg_button_pane_cp06_cp_ParamLimits

0x1056,	// (0x0000139c) bg_button_pane_cp06_cp

0x67f4,	// (0x00006b3a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x67f4,	// (0x00006b3a) cell_cmode_rocker_pane_g1_cp

0x6362,	// (0x000066a8) cell_cmode_rocker_pane_g2_cp

0xf2fd,	// (0x0000f643) bg_button_pane_cp07_cp

0xec72,	// (0x0000efb8) cell_cmode_itu_pane_g1_cp

0xec7b,	// (0x0000efc1) cell_cmode_itu_pane_t1_cp

0xec7b,	// (0x0000efc1) cell_cmode_itu_pane_t2_cp

0xd361,	// (0x0000d6a7) settings_code_pane_cp2

0x01c7,	// (0x0000050d) bg_popup_window_pane_cp3_ParamLimits

0x06fb,	// (0x00000a41) heading_pane_cp3_ParamLimits

0x070a,	// (0x00000a50) listscroll_popup_graphic_pane_ParamLimits

0x63cc,	// (0x00006712) fep_hwr_aid_pane_ParamLimits

0x81f3,	// (0x00008539) aid_touch_sctrl_top_ParamLimits

0x8200,	// (0x00008546) sctrl_sk_top_pane_g1_ParamLimits

0x67f4,	// (0x00006b3a) sctrl_sk_top_pane_g2_ParamLimits

0xfcbb,	// (0x00010001) sctrl_sk_top_pane_g_ParamLimits

0x820d,	// (0x00008553) sctrl_sk_top_pane_t1_ParamLimits

0x81f3,	// (0x00008539) aid_touch_sctrl_bottom_ParamLimits

0x820d,	// (0x00008553) sctrl_sk_bottom_pane_t1_ParamLimits

0x8459,	// (0x0000879f) aid_area_touch_clock

0xe6df,	// (0x0000ea25) aid_vkb2_area_top_pane_cell_ParamLimits

0xe6df,	// (0x0000ea25) aid_vkb2_area_top_pane_cell

0xe78e,	// (0x0000ead4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe78e,	// (0x0000ead4) aid_vkb2_area_bottom_pane_cell

0x8da9,	// (0x000090ef) popup_char_count_window

0x93f4,	// (0x0000973a) popup_char_count_window_g1

0x93fd,	// (0x00009743) popup_char_count_window_g2

0x9406,	// (0x0000974c) popup_char_count_window_g3

0x0002,

0xfd8c,	// (0x000100d2) popup_char_count_window_g

0x940f,	// (0x00009755) popup_char_count_window_t1

0x8a00,	// (0x00008d46) popup_fep_char_preview_window_ParamLimits

0x8a00,	// (0x00008d46) popup_fep_char_preview_window

0xe6ff,	// (0x0000ea45) vkb2_top_candi_pane_ParamLimits

0xe6ff,	// (0x0000ea45) vkb2_top_candi_pane

0xec89,	// (0x0000efcf) cell_vkb2_top_candi_pane_ParamLimits

0xec89,	// (0x0000efcf) cell_vkb2_top_candi_pane

0x3c58,	// (0x00003f9e) bg_popup_fep_char_preview_window_ParamLimits

0x3c58,	// (0x00003f9e) bg_popup_fep_char_preview_window

0x9467,	// (0x000097ad) popup_fep_char_preview_window_t1_ParamLimits

0x9467,	// (0x000097ad) popup_fep_char_preview_window_t1

0x94a1,	// (0x000097e7) bg_popup_fep_char_preview_window_g1

0x94a9,	// (0x000097ef) bg_popup_fep_char_preview_window_g2

0x94b1,	// (0x000097f7) bg_popup_fep_char_preview_window_g3

0x94b9,	// (0x000097ff) bg_popup_fep_char_preview_window_g4

0x94c1,	// (0x00009807) bg_popup_fep_char_preview_window_g5

0x94c9,	// (0x0000980f) bg_popup_fep_char_preview_window_g6

0x94d1,	// (0x00009817) bg_popup_fep_char_preview_window_g7

0x94d9,	// (0x0000981f) bg_popup_fep_char_preview_window_g8

0x94e1,	// (0x00009827) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd93,	// (0x000100d9) bg_popup_fep_char_preview_window_g

0x67f4,	// (0x00006b3a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x67f4,	// (0x00006b3a) cell_vkb2_top_candi_pane_g1

0x6b5f,	// (0x00006ea5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6b5f,	// (0x00006ea5) cell_vkb2_top_candi_pane_g2

0x6b80,	// (0x00006ec6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6b80,	// (0x00006ec6) cell_vkb2_top_candi_pane_g3

0x94f1,	// (0x00009837) cell_vkb2_top_candi_pane_g4_ParamLimits

0x94f1,	// (0x00009837) cell_vkb2_top_candi_pane_g4

0x9512,	// (0x00009858) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9512,	// (0x00009858) cell_vkb2_top_candi_pane_g5

0x82ed,	// (0x00008633) cell_vkb2_top_candi_pane_g6_ParamLimits

0x82ed,	// (0x00008633) cell_vkb2_top_candi_pane_g6

0x0005,

0xfda8,	// (0x000100ee) cell_vkb2_top_candi_pane_g_ParamLimits

0xfda8,	// (0x000100ee) cell_vkb2_top_candi_pane_g

0x9533,	// (0x00009879) cell_vkb2_top_candi_pane_t1

0x4b1c,	// (0x00004e62) aid_size_touch_slider_mark_ParamLimits

0x4b1c,	// (0x00004e62) aid_size_touch_slider_mark

0xe99b,	// (0x0000ece1) grid_graphic2_catg_pane_ParamLimits

0xe99b,	// (0x0000ece1) grid_graphic2_catg_pane

0xea57,	// (0x0000ed9d) popup_grid_graphic2_window_t1_ParamLimits

0xea57,	// (0x0000ed9d) popup_grid_graphic2_window_t1

0xea6d,	// (0x0000edb3) popup_grid_graphic2_window_t2_ParamLimits

0xea6d,	// (0x0000edb3) popup_grid_graphic2_window_t2

0x0001,

0xfd61,	// (0x000100a7) popup_grid_graphic2_window_t_ParamLimits

0xfd61,	// (0x000100a7) popup_grid_graphic2_window_t

0x04fb,	// (0x00000841) bg_button_pane_cp05_ParamLimits

0xec03,	// (0x0000ef49) cell_graphic2_control_pane_g1_ParamLimits

0xecf1,	// (0x0000f037) cell_graphic2_catg_pane_ParamLimits

0xecf1,	// (0x0000f037) cell_graphic2_catg_pane

0xf2fd,	// (0x0000f643) bg_button_pane_cp12

0xed03,	// (0x0000f049) cell_graphic2_catg_pane_g1

0x8425,	// (0x0000876b) cell_tb_ext_pane_t1_ParamLimits

0x8e47,	// (0x0000918d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8e47,	// (0x0000918d) vkb2_top_cell_right_narrow_pane

0x8e5f,	// (0x000091a5) vkb2_top_cell_right_wide_pane_ParamLimits

0x8e5f,	// (0x000091a5) vkb2_top_cell_right_wide_pane

0x63be,	// (0x00006704) bg_vkb2_func_pane_ParamLimits

0x63be,	// (0x00006704) bg_vkb2_func_pane

0x8ed0,	// (0x00009216) vkb2_top_cell_left_pane_g1_ParamLimits

0x63be,	// (0x00006704) bg_vkb2_fuc_pane_cp03_ParamLimits

0x63be,	// (0x00006704) bg_vkb2_fuc_pane_cp03

0x8f45,	// (0x0000928b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x33d2,	// (0x00003718) bg_vkb2_func_pane_g1

0x33da,	// (0x00003720) bg_vkb2_func_pane_g2

0x33ea,	// (0x00003730) bg_vkb2_func_pane_g3

0x33e2,	// (0x00003728) bg_vkb2_func_pane_g4

0x33f2,	// (0x00003738) bg_vkb2_func_pane_g5

0x33fa,	// (0x00003740) bg_vkb2_func_pane_g6

0x3402,	// (0x00003748) bg_vkb2_func_pane_g7

0x340a,	// (0x00003750) bg_vkb2_func_pane_g8

0x33ca,	// (0x00003710) bg_vkb2_func_pane_g9

0x0008,

0xfdb5,	// (0x000100fb) bg_vkb2_func_pane_g

0x63be,	// (0x00006704) bg_vkb2_fuc_pane_cp01_ParamLimits

0x63be,	// (0x00006704) bg_vkb2_fuc_pane_cp01

0x8ed0,	// (0x00009216) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8ed0,	// (0x00009216) vkb2_top_cell_right_wide_pane_g1

0x63be,	// (0x00006704) bg_vkb2_fuc_pane_cp02_ParamLimits

0x63be,	// (0x00006704) bg_vkb2_fuc_pane_cp02

0x956d,	// (0x000098b3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x956d,	// (0x000098b3) vkb2_top_cell_right_narrow_pane_g1

0xde42,	// (0x0000e188) aid_touch_area_decrease_ParamLimits

0xde42,	// (0x0000e188) aid_touch_area_decrease

0xde7c,	// (0x0000e1c2) aid_touch_area_increase_ParamLimits

0xde7c,	// (0x0000e1c2) aid_touch_area_increase

0xdea4,	// (0x0000e1ea) aid_touch_area_mute_ParamLimits

0xdea4,	// (0x0000e1ea) aid_touch_area_mute

0xdecc,	// (0x0000e212) aid_touch_area_slider_ParamLimits

0xdecc,	// (0x0000e212) aid_touch_area_slider

0xdf0c,	// (0x0000e252) popup_slider_window_g4_ParamLimits

0xdf0c,	// (0x0000e252) popup_slider_window_g4

0xdf34,	// (0x0000e27a) popup_slider_window_g5_ParamLimits

0xdf34,	// (0x0000e27a) popup_slider_window_g5

0xdf68,	// (0x0000e2ae) popup_slider_window_g6_ParamLimits

0xdf68,	// (0x0000e2ae) popup_slider_window_g6

0x8132,	// (0x00008478) popup_slider_window_t2_ParamLimits

0x8132,	// (0x00008478) popup_slider_window_t2

0x0001,

0xfcaf,	// (0x0000fff5) popup_slider_window_t_ParamLimits

0xfcaf,	// (0x0000fff5) popup_slider_window_t

0xdf84,	// (0x0000e2ca) slider_pane_ParamLimits

0xdf84,	// (0x0000e2ca) slider_pane

0x958d,	// (0x000098d3) slider_pane_g1_ParamLimits

0x958d,	// (0x000098d3) slider_pane_g1

0x95a1,	// (0x000098e7) slider_pane_g2_ParamLimits

0x95a1,	// (0x000098e7) slider_pane_g2

0x95b7,	// (0x000098fd) slider_pane_g3_ParamLimits

0x95b7,	// (0x000098fd) slider_pane_g3

0x0003,

0xfdc8,	// (0x0001010e) slider_pane_g_ParamLimits

0xfdc8,	// (0x0001010e) slider_pane_g

0xcadc,	// (0x0000ce22) popup_tb_float_extension_window_ParamLimits

0xcadc,	// (0x0000ce22) popup_tb_float_extension_window

0x95e3,	// (0x00009929) aid_size_cell_tb_float_ext

0xf2fd,	// (0x0000f643) bg_popup_sub_window_cp28

0x95ef,	// (0x00009935) grid_tb_float_ext_pane

0x95f9,	// (0x0000993f) cell_tb_float_ext_pane_ParamLimits

0x95f9,	// (0x0000993f) cell_tb_float_ext_pane

0x9613,	// (0x00009959) cell_tb_float_ext_pane_g1

0x961c,	// (0x00009962) grid_highlight_pane_cp12

0xd771,	// (0x0000dab7) cell_last_hwr_side_pane_ParamLimits

0xd771,	// (0x0000dab7) cell_last_hwr_side_pane

0x6362,	// (0x000066a8) cell_last_hwr_side_pane_g1

0x9625,	// (0x0000996b) cell_last_hwr_side_pane_g2

0x0001,

0xfdd1,	// (0x00010117) cell_last_hwr_side_pane_g

0xe86b,	// (0x0000ebb1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe86b,	// (0x0000ebb1) vkb2_area_bottom_space_btn_pane

0x67f4,	// (0x00006b3a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9028,	// (0x0000936e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9533,	// (0x00009879) cell_vkb2_top_candi_pane_t1_ParamLimits

0x962e,	// (0x00009974) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x962e,	// (0x00009974) vkb2_area_bottom_space_btn_pane_g1

0x9668,	// (0x000099ae) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9668,	// (0x000099ae) vkb2_area_bottom_space_btn_pane_g2

0x969e,	// (0x000099e4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x969e,	// (0x000099e4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdd6,	// (0x0001011c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdd6,	// (0x0001011c) vkb2_area_bottom_space_btn_pane_g

0x6481,	// (0x000067c7) cel_fep_hwr_func_pane_ParamLimits

0x6481,	// (0x000067c7) cel_fep_hwr_func_pane

0xd746,	// (0x0000da8c) cell_hwr_side_button_pane_ParamLimits

0xd746,	// (0x0000da8c) cell_hwr_side_button_pane

0x8459,	// (0x0000879f) aid_area_touch_clock_ParamLimits

0x04fb,	// (0x00000841) bg_uniindi_top_pane_ParamLimits

0x846b,	// (0x000087b1) uniindi_top_pane_g1_ParamLimits

0x8481,	// (0x000087c7) uniindi_top_pane_g2_ParamLimits

0x848d,	// (0x000087d3) uniindi_top_pane_g3_ParamLimits

0x849e,	// (0x000087e4) uniindi_top_pane_g4_ParamLimits

0xfce7,	// (0x0001002d) uniindi_top_pane_g_ParamLimits

0x84ab,	// (0x000087f1) uniindi_top_pane_t1_ParamLimits

0x04fb,	// (0x00000841) bg_vkb2_func_pane_cp01_ParamLimits

0x04fb,	// (0x00000841) bg_vkb2_func_pane_cp01

0x96e8,	// (0x00009a2e) cel_fep_hwr_func_pane_g1_ParamLimits

0x96e8,	// (0x00009a2e) cel_fep_hwr_func_pane_g1

0x04fb,	// (0x00000841) bg_vkb2_func_pane_cp02_ParamLimits

0x04fb,	// (0x00000841) bg_vkb2_func_pane_cp02

0x96e8,	// (0x00009a2e) cell_hwr_side_button_pane_g1_ParamLimits

0x96e8,	// (0x00009a2e) cell_hwr_side_button_pane_g1

0x31bd,	// (0x00003503) status_pane_g4_ParamLimits

0x31bd,	// (0x00003503) status_pane_g4

0x31d7,	// (0x0000351d) status_pane_t1

0x60ae,	// (0x000063f4) form2_midp_gauge_slider_cont_pane

0x60b6,	// (0x000063fc) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd69e,	// (0x0000d9e4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd6b0,	// (0x0000d9f6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfab3,	// (0x0000fdf9) form2_midp_gauge_slider_pane_t_ParamLimits

0x60ec,	// (0x00006432) form2_midp_slider_pane_ParamLimits

0x89c8,	// (0x00008d0e) aid_size_cell_func_vkb2_ParamLimits

0x89c8,	// (0x00008d0e) aid_size_cell_func_vkb2

0x95cf,	// (0x00009915) slider_pane_g4_ParamLimits

0x95cf,	// (0x00009915) slider_pane_g4

0xed0c,	// (0x0000f052) form2_midp_gauge_slider_pane_t2_cp01

0xed1a,	// (0x0000f060) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xed1a,	// (0x0000f060) form2_midp_gauge_slider_pane_t3_cp01

0x9721,	// (0x00009a67) form2_midp_slider_pane_cp01

0xf2fd,	// (0x0000f643) navi_smil_pane

0x9755,	// (0x00009a9b) navi_smil_pane_g1

0x975d,	// (0x00009aa3) navi_smil_pane_t1

0x972a,	// (0x00009a70) form2_midp_slider_pane_g1

0x9733,	// (0x00009a79) form2_midp_slider_pane_g2

0x973b,	// (0x00009a81) form2_midp_slider_pane_g3

0x972a,	// (0x00009a70) form2_midp_slider_pane_g4

0xed37,	// (0x0000f07d) form2_midp_slider_pane_g5

0x0004,

0xfddf,	// (0x00010125) form2_midp_slider_pane_g

0x96d8,	// (0x00009a1e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x96d8,	// (0x00009a1e) vkb2_area_bottom_space_btn_pane_g4

0xccbf,	// (0x0000d005) lc0_navi_pane_ParamLimits

0xccbf,	// (0x0000d005) lc0_navi_pane

0xcd29,	// (0x0000d06f) lc0_stat_indi_pane_ParamLimits

0xcd29,	// (0x0000d06f) lc0_stat_indi_pane

0xcd3e,	// (0x0000d084) ls0_title_pane_ParamLimits

0xcd3e,	// (0x0000d084) ls0_title_pane

0x1056,	// (0x0000139c) bg_popup_sub_pane_cp14_ParamLimits

0x8440,	// (0x00008786) list_uniindi_pane_ParamLimits

0x844c,	// (0x00008792) uniindi_top_pane_ParamLimits

0x84e8,	// (0x0000882e) list_single_uniindi_pane_g1_ParamLimits

0x84fb,	// (0x00008841) list_single_uniindi_pane_t1_ParamLimits

0xed42,	// (0x0000f088) lc0_stat_clock_pane_ParamLimits

0xed42,	// (0x0000f088) lc0_stat_clock_pane

0xed4f,	// (0x0000f095) lc0_stat_indi_pane_g1_ParamLimits

0xed4f,	// (0x0000f095) lc0_stat_indi_pane_g1

0xed5c,	// (0x0000f0a2) lc0_stat_indi_pane_g2_ParamLimits

0xed5c,	// (0x0000f0a2) lc0_stat_indi_pane_g2

0x0001,

0xfdea,	// (0x00010130) lc0_stat_indi_pane_g_ParamLimits

0xfdea,	// (0x00010130) lc0_stat_indi_pane_g

0xed69,	// (0x0000f0af) lc0_uni_indicator_pane_ParamLimits

0xed69,	// (0x0000f0af) lc0_uni_indicator_pane

0xed76,	// (0x0000f0bc) ls0_title_pane_g1_ParamLimits

0xed76,	// (0x0000f0bc) ls0_title_pane_g1

0xed8a,	// (0x0000f0d0) ls0_title_pane_t1_ParamLimits

0xed8a,	// (0x0000f0d0) ls0_title_pane_t1

0xedb8,	// (0x0000f0fe) lc0_uni_indicator_pane_g1_ParamLimits

0xedb8,	// (0x0000f0fe) lc0_uni_indicator_pane_g1

0x97fd,	// (0x00009b43) lc0_stat_clock_pane_t1

0xf2fd,	// (0x0000f643) main_ai5_pane

0x9813,	// (0x00009b59) ai5_sk_pane_ParamLimits

0x9813,	// (0x00009b59) ai5_sk_pane

0xede9,	// (0x0000f12f) cell_ai5_widget_pane_ParamLimits

0xede9,	// (0x0000f12f) cell_ai5_widget_pane

0x98e9,	// (0x00009c2f) aid_size_cell_widget_grid

0x98f7,	// (0x00009c3d) bg_ai5_widget_pane_ParamLimits

0x98f7,	// (0x00009c3d) bg_ai5_widget_pane

0x9973,	// (0x00009cb9) cell_ai5_widget_pane_g2

0x9987,	// (0x00009ccd) cell_ai5_widget_pane_g3

0x99a1,	// (0x00009ce7) cell_ai5_widget_pane_g4

0x99b1,	// (0x00009cf7) cell_ai5_widget_pane_g5

0x99c1,	// (0x00009d07) cell_ai5_widget_pane_g6

0x99cd,	// (0x00009d13) cell_ai5_widget_pane_g7

0x9a39,	// (0x00009d7f) cell_ai5_widget_pane_t1_ParamLimits

0x9a39,	// (0x00009d7f) cell_ai5_widget_pane_t1

0x9a56,	// (0x00009d9c) cell_ai5_widget_pane_t2_ParamLimits

0x9a56,	// (0x00009d9c) cell_ai5_widget_pane_t2

0x9a6e,	// (0x00009db4) cell_ai5_widget_pane_t3_ParamLimits

0x9a6e,	// (0x00009db4) cell_ai5_widget_pane_t3

0x9a86,	// (0x00009dcc) cell_ai5_widget_pane_t4_ParamLimits

0x9a86,	// (0x00009dcc) cell_ai5_widget_pane_t4

0x9aac,	// (0x00009df2) cell_ai5_widget_pane_t5_ParamLimits

0x9aac,	// (0x00009df2) cell_ai5_widget_pane_t5

0x9acb,	// (0x00009e11) cell_ai5_widget_pane_t6_ParamLimits

0x9acb,	// (0x00009e11) cell_ai5_widget_pane_t6

0x9add,	// (0x00009e23) cell_ai5_widget_pane_t7_ParamLimits

0x9add,	// (0x00009e23) cell_ai5_widget_pane_t7

0x9afc,	// (0x00009e42) cell_ai5_widget_pane_t8_ParamLimits

0x9afc,	// (0x00009e42) cell_ai5_widget_pane_t8

0x000b,

0xfe0a,	// (0x00010150) cell_ai5_widget_pane_t_ParamLimits

0xfe0a,	// (0x00010150) cell_ai5_widget_pane_t

0x9b80,	// (0x00009ec6) grid_ai5_widget_pane

0x1056,	// (0x0000139c) highlight_cell_ai5_widget_pane_ParamLimits

0x1056,	// (0x0000139c) highlight_cell_ai5_widget_pane

0xee55,	// (0x0000f19b) ai5_sk_left_pane

0xee5f,	// (0x0000f1a5) ai5_sk_middle_pane

0xee69,	// (0x0000f1af) ai5_sk_right_pane

0x9bb2,	// (0x00009ef8) bg_ai5_widget_pane_g1_ParamLimits

0x9bb2,	// (0x00009ef8) bg_ai5_widget_pane_g1

0x9bbe,	// (0x00009f04) bg_ai5_widget_pane_g2_ParamLimits

0x9bbe,	// (0x00009f04) bg_ai5_widget_pane_g2

0x9bca,	// (0x00009f10) bg_ai5_widget_pane_g3_ParamLimits

0x9bca,	// (0x00009f10) bg_ai5_widget_pane_g3

0x9bd6,	// (0x00009f1c) bg_ai5_widget_pane_g4_ParamLimits

0x9bd6,	// (0x00009f1c) bg_ai5_widget_pane_g4

0x9be2,	// (0x00009f28) bg_ai5_widget_pane_g5_ParamLimits

0x9be2,	// (0x00009f28) bg_ai5_widget_pane_g5

0x9bee,	// (0x00009f34) bg_ai5_widget_pane_g6_ParamLimits

0x9bee,	// (0x00009f34) bg_ai5_widget_pane_g6

0x9bfa,	// (0x00009f40) bg_ai5_widget_pane_g7_ParamLimits

0x9bfa,	// (0x00009f40) bg_ai5_widget_pane_g7

0x9c06,	// (0x00009f4c) bg_ai5_widget_pane_g8_ParamLimits

0x9c06,	// (0x00009f4c) bg_ai5_widget_pane_g8

0x9c12,	// (0x00009f58) bg_ai5_widget_pane_g9_ParamLimits

0x9c12,	// (0x00009f58) bg_ai5_widget_pane_g9

0x0008,

0xfe23,	// (0x00010169) bg_ai5_widget_pane_g_ParamLimits

0xfe23,	// (0x00010169) bg_ai5_widget_pane_g

0x9c44,	// (0x00009f8a) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c44,	// (0x00009f8a) cell_shortcut_ai5_widget_pane

0x2300,	// (0x00002646) bg_cell_shortcut_ai5_widget_pane

0x9c55,	// (0x00009f9b) cell_grid_ai5_widget_pane_g1

0x2300,	// (0x00002646) highlight_cell_shortcut_ai5_widget_pane

0x33da,	// (0x00003720) ai5_sk_left_pane_g1

0x9c5e,	// (0x00009fa4) ai5_sk_left_pane_g2

0x9c66,	// (0x00009fac) ai5_sk_left_pane_g3

0x9c6e,	// (0x00009fb4) ai5_sk_left_pane_g4

0x0003,

0xfe36,	// (0x0001017c) ai5_sk_left_pane_g

0x9c76,	// (0x00009fbc) ai5_sk_left_pane_t1

0x33d2,	// (0x00003718) ai5_sk_right_pane_g1

0x9c84,	// (0x00009fca) ai5_sk_right_pane_g2

0x9c8c,	// (0x00009fd2) ai5_sk_right_pane_g3

0x9c94,	// (0x00009fda) ai5_sk_right_pane_g4

0x0003,

0xfe3f,	// (0x00010185) ai5_sk_right_pane_g

0x9c9c,	// (0x00009fe2) ai5_sk_right_pane_t1

0x33d2,	// (0x00003718) ai5_sk_middle_pane_g1

0x33da,	// (0x00003720) ai5_sk_middle_pane_g2

0x33f2,	// (0x00003738) ai5_sk_middle_pane_g3

0x9c8c,	// (0x00009fd2) ai5_sk_middle_pane_g4

0x9c66,	// (0x00009fac) ai5_sk_middle_pane_g5

0x9caa,	// (0x00009ff0) ai5_sk_middle_pane_g6

0xee73,	// (0x0000f1b9) ai5_sk_middle_pane_g7

0x0006,

0xfe48,	// (0x0001018e) ai5_sk_middle_pane_g

0xcbab,	// (0x0000cef1) aid_touch_area_size_lc0_ParamLimits

0xcbab,	// (0x0000cef1) aid_touch_area_size_lc0

0x6ba1,	// (0x00006ee7) cell_hwr_candidate_pane_t1_ParamLimits

0x2e8e,	// (0x000031d4) aid_touch_navi_pane

0xce37,	// (0x0000d17d) status_dt_navi_pane_ParamLimits

0xce37,	// (0x0000d17d) status_dt_navi_pane

0xce4f,	// (0x0000d195) status_dt_sta_pane_ParamLimits

0xce4f,	// (0x0000d195) status_dt_sta_pane

0xee7b,	// (0x0000f1c1) dt_sta_controll_pane

0xee88,	// (0x0000f1ce) dt_sta_indi_pane

0xee95,	// (0x0000f1db) dt_sta_title_pane

0x04fb,	// (0x00000841) bg_dt_sta_indi_pane_ParamLimits

0x04fb,	// (0x00000841) bg_dt_sta_indi_pane

0xeea7,	// (0x0000f1ed) dt_sta_battery_pane

0xeeaf,	// (0x0000f1f5) dt_sta_indi_pane_g1

0x9cfc,	// (0x0000a042) dt_sta_indi_pane_g2

0x9d05,	// (0x0000a04b) dt_sta_indi_pane_g3

0x0002,

0xfe57,	// (0x0001019d) dt_sta_indi_pane_g

0x9d0e,	// (0x0000a054) dt_sta_signal_pane

0x1056,	// (0x0000139c) bg_dt_sta_title_pane_ParamLimits

0x1056,	// (0x0000139c) bg_dt_sta_title_pane

0x9d17,	// (0x0000a05d) dt_sta_title_pane_g1

0x9d1f,	// (0x0000a065) dt_sta_title_pane_t1_ParamLimits

0x9d1f,	// (0x0000a065) dt_sta_title_pane_t1

0xf2fd,	// (0x0000f643) bg_dt_sta_control_pane

0xeeb8,	// (0x0000f1fe) dt_sta_controll_pane_g1

0x9d3d,	// (0x0000a083) bg_dt_sta_title_pane_g1

0x9d46,	// (0x0000a08c) bg_dt_sta_title_pane_g2

0x9d4f,	// (0x0000a095) bg_dt_sta_title_pane_g3

0x0002,

0xfe5e,	// (0x000101a4) bg_dt_sta_title_pane_g

0x6362,	// (0x000066a8) bg_dt_sta_indi_pane_g1

0x9d58,	// (0x0000a09e) dt_sta_signal_pane_g1

0x9d60,	// (0x0000a0a6) dt_sta_signal_pane_g2

0x0001,

0xfe65,	// (0x000101ab) dt_sta_signal_pane_g

0x9d68,	// (0x0000a0ae) dt_sta_battery_pane_g1

0x9d71,	// (0x0000a0b7) dt_sta_battery_pane_t1

0x6362,	// (0x000066a8) bg_dt_sta_control_pane_g1

0x1c36,	// (0x00001f7c) fep_china_uni_eep_pane

0x1c3e,	// (0x00001f84) fep_china_uni_entry_pane_ParamLimits

0x1c4e,	// (0x00001f94) popup_fep_china_uni_window_g1_ParamLimits

0x1c5e,	// (0x00001fa4) popup_fep_china_uni_window_g2_ParamLimits

0x1c5e,	// (0x00001fa4) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x0000fa37) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x0000fa37) popup_fep_china_uni_window_g

0x9d80,	// (0x0000a0c6) fep_china_uni_eep_pane_g1

0x9d88,	// (0x0000a0ce) fep_china_uni_eep_pane_t1

0x974c,	// (0x00009a92) aid_touch_area_size_smil_player

0x2fe4,	// (0x0000332a) lc0_clock_pane

0x31cb,	// (0x00003511) status_pane_g5_ParamLimits

0x31cb,	// (0x00003511) status_pane_g5

0xc65e,	// (0x0000c9a4) popup_keymap_window

0x3189,	// (0x000034cf) status_icon_pane

0x9987,	// (0x00009ccd) cell_ai5_widget_pane_g3_ParamLimits

0x99a1,	// (0x00009ce7) cell_ai5_widget_pane_g4_ParamLimits

0x99b1,	// (0x00009cf7) cell_ai5_widget_pane_g5_ParamLimits

0x99d9,	// (0x00009d1f) cell_ai5_widget_pane_g8_ParamLimits

0x99d9,	// (0x00009d1f) cell_ai5_widget_pane_g8

0x99ed,	// (0x00009d33) cell_ai5_widget_pane_g9_ParamLimits

0x99ed,	// (0x00009d33) cell_ai5_widget_pane_g9

0x9a01,	// (0x00009d47) cell_ai5_widget_pane_g10_ParamLimits

0x9a01,	// (0x00009d47) cell_ai5_widget_pane_g10

0x9d97,	// (0x0000a0dd) status_icon_pane_g1

0xf2fd,	// (0x0000f643) bg_popup_sub_pane_cp13

0x9d9f,	// (0x0000a0e5) popup_keymap_window_t1

0xc37e,	// (0x0000c6c4) control_pane_g6_ParamLimits

0xc37e,	// (0x0000c6c4) control_pane_g6

0xc38b,	// (0x0000c6d1) control_pane_g7_ParamLimits

0xc38b,	// (0x0000c6d1) control_pane_g7

0xc398,	// (0x0000c6de) control_pane_g8_ParamLimits

0xc398,	// (0x0000c6de) control_pane_g8

0xee7b,	// (0x0000f1c1) dt_sta_controll_pane_ParamLimits

0xee88,	// (0x0000f1ce) dt_sta_indi_pane_ParamLimits

0xee95,	// (0x0000f1db) dt_sta_title_pane_ParamLimits

0x0a37,	// (0x00000d7d) aid_size_touch_scroll_bar_cale

0xf4ed,	// (0x0000f833) popup_discreet_window_ParamLimits

0xf4ed,	// (0x0000f833) popup_discreet_window

0xb740,	// (0x0000ba86) popup_sk_window

0x3c58,	// (0x00003f9e) bg_popup_sub_pane_cp28_ParamLimits

0x3c58,	// (0x00003f9e) bg_popup_sub_pane_cp28

0x9dad,	// (0x0000a0f3) popup_discreet_window_g1_ParamLimits

0x9dad,	// (0x0000a0f3) popup_discreet_window_g1

0x9dcd,	// (0x0000a113) popup_discreet_window_t1_ParamLimits

0x9dcd,	// (0x0000a113) popup_discreet_window_t1

0x9deb,	// (0x0000a131) popup_discreet_window_t2_ParamLimits

0x9deb,	// (0x0000a131) popup_discreet_window_t2

0x0002,

0xfe6a,	// (0x000101b0) popup_discreet_window_t_ParamLimits

0xfe6a,	// (0x000101b0) popup_discreet_window_t

0x9e3d,	// (0x0000a183) popup_sk_window_g1

0x9e47,	// (0x0000a18d) popup_sk_window_g2

0x0001,

0xfe71,	// (0x000101b7) popup_sk_window_g

0x9e4f,	// (0x0000a195) popup_sk_window_t1

0x9e5d,	// (0x0000a1a3) popup_sk_window_t1_copy1

0x9973,	// (0x00009cb9) cell_ai5_widget_pane_g2_ParamLimits

0x9b0e,	// (0x00009e54) cell_ai5_widget_pane_t9_ParamLimits

0x9b0e,	// (0x00009e54) cell_ai5_widget_pane_t9

0xf2fd,	// (0x0000f643) main_fep_fshwr2_pane

0xeec1,	// (0x0000f207) aid_fshwr2_btn_pane

0xeed1,	// (0x0000f217) aid_fshwr2_syb_pane

0xeee5,	// (0x0000f22b) aid_fshwr2_txt_pane

0xeef5,	// (0x0000f23b) fshwr2_func_candi_pane

0xef15,	// (0x0000f25b) fshwr2_hwr_syb_pane

0xef37,	// (0x0000f27d) fshwr2_icf_pane

0xf2fd,	// (0x0000f643) fshwr2_icf_bg_pane

0xef67,	// (0x0000f2ad) fshwr2_icf_pane_t1_ParamLimits

0xef67,	// (0x0000f2ad) fshwr2_icf_pane_t1

0x1a34,	// (0x00001d7a) fshwr2_func_candi_pane_g1

0xef80,	// (0x0000f2c6) fshwr2_func_candi_row_pane_ParamLimits

0xef80,	// (0x0000f2c6) fshwr2_func_candi_row_pane

0xefa3,	// (0x0000f2e9) cell_fshwr2_syb_pane_ParamLimits

0xefa3,	// (0x0000f2e9) cell_fshwr2_syb_pane

0x96e8,	// (0x00009a2e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x96e8,	// (0x00009a2e) fshwr2_hwr_syb_pane_g1

0xf2fd,	// (0x0000f643) bg_popup_call_pane_cp01

0xefc9,	// (0x0000f30f) fshwr2_func_candi_cell_pane_ParamLimits

0xefc9,	// (0x0000f30f) fshwr2_func_candi_cell_pane

0x3a39,	// (0x00003d7f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3a39,	// (0x00003d7f) fshwr2_func_candi_cell_bg_pane

0xf014,	// (0x0000f35a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf014,	// (0x0000f35a) fshwr2_func_candi_cell_pane_g1

0xf04b,	// (0x0000f391) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf04b,	// (0x0000f391) fshwr2_func_candi_cell_pane_t1

0xf2fd,	// (0x0000f643) bg_button_pane_cp08

0x284f,	// (0x00002b95) cell_fshwr2_syb_bg_pane

0xf066,	// (0x0000f3ac) cell_fshwr2_syb_bg_pane_g1

0xf079,	// (0x0000f3bf) cell_fshwr2_syb_bg_pane_t1

0x1056,	// (0x0000139c) main_tmo_pane

0xd193,	// (0x0000d4d9) uni_indicator_pane_g1_ParamLimits

0xd1a9,	// (0x0000d4ef) uni_indicator_pane_g2_ParamLimits

0xd1bf,	// (0x0000d505) uni_indicator_pane_g3_ParamLimits

0x490a,	// (0x00004c50) uni_indicator_pane_g4_ParamLimits

0x490a,	// (0x00004c50) uni_indicator_pane_g4

0x491e,	// (0x00004c64) uni_indicator_pane_g5_ParamLimits

0x491e,	// (0x00004c64) uni_indicator_pane_g5

0x491e,	// (0x00004c64) uni_indicator_pane_g6_ParamLimits

0x491e,	// (0x00004c64) uni_indicator_pane_g6

0xf8e9,	// (0x0000fc2f) uni_indicator_pane_g_ParamLimits

0xde1e,	// (0x0000e164) popup_tmo_note_window_ParamLimits

0xde1e,	// (0x0000e164) popup_tmo_note_window

0x1056,	// (0x0000139c) fshwr2_bg_pane

0xf03c,	// (0x0000f382) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf03c,	// (0x0000f382) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe76,	// (0x000101bc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe76,	// (0x000101bc) fshwr2_func_candi_cell_pane_g

0x6362,	// (0x000066a8) bg_popup_window_pane_cp01

0xa020,	// (0x0000a366) bg_popup_window_pane_g1_cp01

0xa029,	// (0x0000a36f) bg_popup_window_pane_cp22_ParamLimits

0xa029,	// (0x0000a36f) bg_popup_window_pane_cp22

0xa037,	// (0x0000a37d) listscroll_tmo_link_pane_ParamLimits

0xa037,	// (0x0000a37d) listscroll_tmo_link_pane

0xa077,	// (0x0000a3bd) popup_tmo_note_window_g1_ParamLimits

0xa077,	// (0x0000a3bd) popup_tmo_note_window_g1

0xa084,	// (0x0000a3ca) tmo_note_info_pane_ParamLimits

0xa084,	// (0x0000a3ca) tmo_note_info_pane

0xf08f,	// (0x0000f3d5) list_tmo_note_info_pane_g1_ParamLimits

0xf08f,	// (0x0000f3d5) list_tmo_note_info_pane_g1

0xa0b5,	// (0x0000a3fb) list_tmo_note_info_pane_g2_ParamLimits

0xa0b5,	// (0x0000a3fb) list_tmo_note_info_pane_g2

0x0001,

0xfe7b,	// (0x000101c1) list_tmo_note_info_pane_g_ParamLimits

0xfe7b,	// (0x000101c1) list_tmo_note_info_pane_g

0xa0d1,	// (0x0000a417) list_tmo_note_info_text_pane_ParamLimits

0xa0d1,	// (0x0000a417) list_tmo_note_info_text_pane

0xa152,	// (0x0000a498) list_tmo_link_pane

0xa15f,	// (0x0000a4a5) scroll_pane_cp20

0xa16c,	// (0x0000a4b2) list_single_tmo_link_pane_ParamLimits

0xa16c,	// (0x0000a4b2) list_single_tmo_link_pane

0xa17c,	// (0x0000a4c2) list_single_tmo_link_pane_t1

0xa18a,	// (0x0000a4d0) list_tmo_note_info_text_pane_t1_ParamLimits

0xa18a,	// (0x0000a4d0) list_tmo_note_info_text_pane_t1

0xbffe,	// (0x0000c344) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbffe,	// (0x0000c344) aid_size_touch_scroll_bar_cp01

0xbf6d,	// (0x0000c2b3) aid_size_touch_slider_marker

0xb730,	// (0x0000ba76) popup_settings_window_ParamLimits

0xb730,	// (0x0000ba76) popup_settings_window

0x28ad,	// (0x00002bf3) popup_candi_list_indi_window

0x2e8e,	// (0x000031d4) aid_touch_navi_pane_ParamLimits

0x81c7,	// (0x0000850d) rs_clock_indi_pane

0x81d0,	// (0x00008516) sctrl_sk_bottom_pane_ParamLimits

0x81e1,	// (0x00008527) sctrl_sk_top_pane_ParamLimits

0x8a1a,	// (0x00008d60) popup_fep_tooltip_window

0x98e9,	// (0x00009c2f) aid_size_cell_widget_grid_ParamLimits

0x995e,	// (0x00009ca4) cell_ai5_widget_pane_g1_ParamLimits

0x995e,	// (0x00009ca4) cell_ai5_widget_pane_g1

0x99c1,	// (0x00009d07) cell_ai5_widget_pane_g6_ParamLimits

0x99cd,	// (0x00009d13) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdef,	// (0x00010135) cell_ai5_widget_pane_g_ParamLimits

0xfdef,	// (0x00010135) cell_ai5_widget_pane_g

0x9b3d,	// (0x00009e83) cell_ai5_widget_pane_t10_ParamLimits

0x9b3d,	// (0x00009e83) cell_ai5_widget_pane_t10

0x9b80,	// (0x00009ec6) grid_ai5_widget_pane_ParamLimits

0x9c1e,	// (0x00009f64) cell_contacts_ai5_widget_pane_ParamLimits

0x9c1e,	// (0x00009f64) cell_contacts_ai5_widget_pane

0x9e00,	// (0x0000a146) popup_discreet_window_t3_ParamLimits

0x9e00,	// (0x0000a146) popup_discreet_window_t3

0xef53,	// (0x0000f299) popup_fshwr2_char_preview_window_ParamLimits

0xef53,	// (0x0000f299) popup_fshwr2_char_preview_window

0xf0a6,	// (0x0000f3ec) tmo_note_info_pane_t1

0xf0bb,	// (0x0000f401) tmo_note_info_pane_t2

0xf0d2,	// (0x0000f418) tmo_note_info_pane_t3

0xa12e,	// (0x0000a474) tmo_note_info_pane_t4

0xa140,	// (0x0000a486) tmo_note_info_pane_t5

0x0004,

0xfe80,	// (0x000101c6) tmo_note_info_pane_t

0xa152,	// (0x0000a498) list_tmo_link_pane_ParamLimits

0xa15f,	// (0x0000a4a5) scroll_pane_cp20_ParamLimits

0xf2fd,	// (0x0000f643) bg_popup_fep_char_preview_window_cp01

0xf0e7,	// (0x0000f42d) popup_fshwr2_char_preview_window_t1

0xa1b1,	// (0x0000a4f7) popup_candi_list_indi_window_g1

0xa1ba,	// (0x0000a500) bg_cell_contacts_ai5_widget_pane

0xa1c6,	// (0x0000a50c) cell_contacts_ai5_widget_pane_g1

0x6e6d,	// (0x000071b3) cell_contacts_ai5_widget_pane_g2

0xa1db,	// (0x0000a521) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe8b,	// (0x000101d1) cell_contacts_ai5_widget_pane_g

0xa1e7,	// (0x0000a52d) cell_contacts_ai5_widget_pane_t1

0x1056,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa25e,	// (0x0000a5a4) settings_container_pane

0x2300,	// (0x00002646) listscroll_set_pane_copy1

0x56ff,	// (0x00005a45) scroll_pane_cp121_copy1

0x39f5,	// (0x00003d3b) set_content_pane_copy1

0xa26a,	// (0x0000a5b0) aid_height_set_list_copy1_ParamLimits

0xa26a,	// (0x0000a5b0) aid_height_set_list_copy1

0x4be0,	// (0x00004f26) aid_size_parent_copy1_ParamLimits

0x4be0,	// (0x00004f26) aid_size_parent_copy1

0xa276,	// (0x0000a5bc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa276,	// (0x0000a5bc) button_value_adjust_pane_cp6_copy1

0x284f,	// (0x00002b95) list_highlight_pane_cp2_copy1_ParamLimits

0x284f,	// (0x00002b95) list_highlight_pane_cp2_copy1

0xa28a,	// (0x0000a5d0) list_set_pane_copy1_ParamLimits

0xa28a,	// (0x0000a5d0) list_set_pane_copy1

0xa1f9,	// (0x0000a53f) main_pane_set_t1_copy1_ParamLimits

0xa1f9,	// (0x0000a53f) main_pane_set_t1_copy1

0xa233,	// (0x0000a579) main_pane_set_t2_copy1_ParamLimits

0xa233,	// (0x0000a579) main_pane_set_t2_copy1

0xa337,	// (0x0000a67d) main_pane_set_t3_copy1

0xa345,	// (0x0000a68b) main_pane_set_t4_copy1

0xa252,	// (0x0000a598) set_content_pane_g1_copy1_ParamLimits

0xa252,	// (0x0000a598) set_content_pane_g1_copy1

0xa353,	// (0x0000a699) setting_code_pane_copy1

0xa35b,	// (0x0000a6a1) setting_slider_graphic_pane_copy1

0xa35b,	// (0x0000a6a1) setting_slider_pane_copy1

0xa363,	// (0x0000a6a9) setting_text_pane_copy1

0xa363,	// (0x0000a6a9) setting_volume_pane_copy1

0xa353,	// (0x0000a699) settings_code_pane_cp2_copy1

0xa36b,	// (0x0000a6b1) settings_code_pane_cp_copy1_ParamLimits

0xa36b,	// (0x0000a6b1) settings_code_pane_cp_copy1

0xa37f,	// (0x0000a6c5) volume_set_pane_copy1

0xa387,	// (0x0000a6cd) volume_set_pane_g10_copy1

0xa38f,	// (0x0000a6d5) volume_set_pane_g1_copy1

0xa397,	// (0x0000a6dd) volume_set_pane_g2_copy1

0xa39f,	// (0x0000a6e5) volume_set_pane_g3_copy1

0xa3a7,	// (0x0000a6ed) volume_set_pane_g4_copy1

0xa3af,	// (0x0000a6f5) volume_set_pane_g5_copy1

0xa3b7,	// (0x0000a6fd) volume_set_pane_g6_copy1

0xa3bf,	// (0x0000a705) volume_set_pane_g7_copy1

0xa3c7,	// (0x0000a70d) volume_set_pane_g8_copy1

0xa3cf,	// (0x0000a715) volume_set_pane_g9_copy1

0x01c7,	// (0x0000050d) bg_set_opt_pane_cp_copy1_ParamLimits

0x01c7,	// (0x0000050d) bg_set_opt_pane_cp_copy1

0xa3d7,	// (0x0000a71d) setting_slider_pane_t1_copy1_ParamLimits

0xa3d7,	// (0x0000a71d) setting_slider_pane_t1_copy1

0xa3f6,	// (0x0000a73c) setting_slider_pane_t2_copy1_ParamLimits

0xa3f6,	// (0x0000a73c) setting_slider_pane_t2_copy1

0xa410,	// (0x0000a756) setting_slider_pane_t3_copy1_ParamLimits

0xa410,	// (0x0000a756) setting_slider_pane_t3_copy1

0xa428,	// (0x0000a76e) slider_set_pane_copy1_ParamLimits

0xa428,	// (0x0000a76e) slider_set_pane_copy1

0x1185,	// (0x000014cb) set_opt_bg_pane_g1_copy2

0x118d,	// (0x000014d3) set_opt_bg_pane_g2_copy2

0xa43e,	// (0x0000a784) set_opt_bg_pane_g3_copy2

0x119d,	// (0x000014e3) set_opt_bg_pane_g4_copy2

0x11a5,	// (0x000014eb) set_opt_bg_pane_g5_copy2

0x11ad,	// (0x000014f3) set_opt_bg_pane_g6_copy2

0xa448,	// (0x0000a78e) set_opt_bg_pane_g7_copy2

0xa450,	// (0x0000a796) set_opt_bg_pane_g8_copy2

0xa45a,	// (0x0000a7a0) set_opt_bg_pane_g9_copy2

0xa464,	// (0x0000a7aa) aid_size_touch_slider_mark_copy1_ParamLimits

0xa464,	// (0x0000a7aa) aid_size_touch_slider_mark_copy1

0xa478,	// (0x0000a7be) slider_set_pane_g1_copy1

0xa481,	// (0x0000a7c7) slider_set_pane_g2_copy1

0x4b49,	// (0x00004e8f) slider_set_pane_g3_copy1_ParamLimits

0x4b49,	// (0x00004e8f) slider_set_pane_g3_copy1

0x4b5d,	// (0x00004ea3) slider_set_pane_g4_copy1_ParamLimits

0x4b5d,	// (0x00004ea3) slider_set_pane_g4_copy1

0x4b75,	// (0x00004ebb) slider_set_pane_g5_copy1_ParamLimits

0x4b75,	// (0x00004ebb) slider_set_pane_g5_copy1

0x4b49,	// (0x00004e8f) slider_set_pane_g6_copy1_ParamLimits

0x4b49,	// (0x00004e8f) slider_set_pane_g6_copy1

0xa489,	// (0x0000a7cf) slider_set_pane_g7_copy1_ParamLimits

0xa489,	// (0x0000a7cf) slider_set_pane_g7_copy1

0xf4cf,	// (0x0000f815) bg_set_opt_pane_cp2_copy1

0xa49f,	// (0x0000a7e5) setting_slider_graphic_pane_g1_copy1

0xa4a8,	// (0x0000a7ee) setting_slider_graphic_pane_t1_copy1

0xa4b8,	// (0x0000a7fe) setting_slider_graphic_pane_t2_copy1

0xa4c8,	// (0x0000a80e) slider_set_pane_cp_copy1

0xa4d8,	// (0x0000a81e) input_focus_pane_cp1_copy1

0xa4e1,	// (0x0000a827) list_set_text_pane_copy1

0xa4e9,	// (0x0000a82f) setting_text_pane_g1_copy1

0x02b1,	// (0x000005f7) set_text_pane_t1_copy1

0xa4d8,	// (0x0000a81e) input_focus_pane_cp2_copy1

0xa4e9,	// (0x0000a82f) setting_code_pane_g1_copy1

0xa4f2,	// (0x0000a838) setting_code_pane_t1_copy1

0x5527,	// (0x0000586d) list_set_graphic_pane_copy1

0xf4cf,	// (0x0000f815) bg_set_opt_pane_cp4_copy1

0x2005,	// (0x0000234b) list_set_graphic_pane_g1_copy1_ParamLimits

0x2005,	// (0x0000234b) list_set_graphic_pane_g1_copy1

0xa500,	// (0x0000a846) list_set_graphic_pane_g2_copy1

0x201d,	// (0x00002363) list_set_graphic_pane_t1_copy1_ParamLimits

0x201d,	// (0x00002363) list_set_graphic_pane_t1_copy1

0x6362,	// (0x000066a8) rs_clock_indi_pane_g1

0xa508,	// (0x0000a84e) rs_clock_indi_pane_t1

0xa516,	// (0x0000a85c) rs_indi_pane

0xa51e,	// (0x0000a864) rs_indi_pane_g1

0xa527,	// (0x0000a86d) rs_indi_pane_g2

0xa530,	// (0x0000a876) rs_indi_pane_g3

0x0002,

0xfe92,	// (0x000101d8) rs_indi_pane_g

0x2300,	// (0x00002646) bg_popup_preview_window_pane_cp03

0xa539,	// (0x0000a87f) popup_fep_tooltip_window_t1

0x757d,	// (0x000078c3) popup_note2_window_g2_ParamLimits

0x757d,	// (0x000078c3) popup_note2_window_g2

0x0001,

0xfc1f,	// (0x0000ff65) popup_note2_window_g_ParamLimits

0xfc1f,	// (0x0000ff65) popup_note2_window_g

0x7b8b,	// (0x00007ed1) bg_popup_sub_pane_cp11_ParamLimits

0x7b98,	// (0x00007ede) cell_ai3_links_pane_g1_ParamLimits

0x7baf,	// (0x00007ef5) cell_ai3_links_pane_t1

0x02b1,	// (0x000005f7) set_text_pane_t1_copy1_ParamLimits

0x2210,	// (0x00002556) cell_graphic_popup_pane_cp2_ParamLimits

0x2210,	// (0x00002556) cell_graphic_popup_pane_cp2

0xa547,	// (0x0000a88d) cell_graphic_popup_pane_g1_cp2

0x084a,	// (0x00000b90) cell_graphic_popup_pane_g2_cp2

0xa54f,	// (0x0000a895) cell_graphic_popup_pane_g3_cp2

0xa557,	// (0x0000a89d) cell_graphic_popup_pane_t2_cp2

0x085b,	// (0x00000ba1) grid_highlight_pane_cp3_cp2

0x1713,	// (0x00001a59) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1056,	// (0x0000139c) main_tmo_pane_ParamLimits

0xde12,	// (0x0000e158) popup_tmo_big_image_note_window

0x994d,	// (0x00009c93) cell_ai5_widget_list_pane

0x9955,	// (0x00009c9b) cell_ai5_widget_lrg_icon_pane

0xf0a6,	// (0x0000f3ec) tmo_note_info_pane_t1_ParamLimits

0xf0bb,	// (0x0000f401) tmo_note_info_pane_t2_ParamLimits

0xf0d2,	// (0x0000f418) tmo_note_info_pane_t3_ParamLimits

0xa12e,	// (0x0000a474) tmo_note_info_pane_t4_ParamLimits

0xa140,	// (0x0000a486) tmo_note_info_pane_t5_ParamLimits

0xfe80,	// (0x000101c6) tmo_note_info_pane_t_ParamLimits

0xa25e,	// (0x0000a5a4) settings_container_pane_ParamLimits

0xa4d0,	// (0x0000a816) indicator_popup_pane_cp5

0xa4d0,	// (0x0000a816) indicator_popup_pane_cp6

0x5527,	// (0x0000586d) list_set_graphic_pane_copy1_ParamLimits

0xf2fd,	// (0x0000f643) bg_popup_window_pane_cp23

0xa565,	// (0x0000a8ab) popup_tmo_big_image_note_window_g1

0xa56f,	// (0x0000a8b5) popup_tmo_big_image_note_window_t1

0xa57f,	// (0x0000a8c5) popup_tmo_big_image_note_window_t2

0xa58f,	// (0x0000a8d5) popup_tmo_big_image_note_window_t3

0x0002,

0xfe99,	// (0x000101df) popup_tmo_big_image_note_window_t

0x6362,	// (0x000066a8) cell_ai5_widget_lrg_icon_pane_g1

0xa59f,	// (0x0000a8e5) cell_ai5_widget_lrg_icon_pane_t1

0xa5ad,	// (0x0000a8f3) cell_ai5_widget_list_row_pane_ParamLimits

0xa5ad,	// (0x0000a8f3) cell_ai5_widget_list_row_pane

0xa5c4,	// (0x0000a90a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa5c4,	// (0x0000a90a) cell_ai5_widget_list_row_pane_g1

0xa5d1,	// (0x0000a917) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa5d1,	// (0x0000a917) cell_ai5_widget_list_row_pane_t1

0xa5fc,	// (0x0000a942) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa5fc,	// (0x0000a942) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea0,	// (0x000101e6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea0,	// (0x000101e6) cell_ai5_widget_list_row_pane_t

0xf2fd,	// (0x0000f643) main_fep_vtchi_ss_pane

0xa64c,	// (0x0000a992) popup_fep_char_pre_window

0xa654,	// (0x0000a99a) popup_fep_ituss_window

0xf104,	// (0x0000f44a) popup_fep_vkbss_window

0x284f,	// (0x00002b95) grid_vkbss_keypad_pane_ParamLimits

0x284f,	// (0x00002b95) grid_vkbss_keypad_pane

0xa6ed,	// (0x0000aa33) ituss_keypad_pane

0xa703,	// (0x0000aa49) aid_vkbss_key_offset_ParamLimits

0xa703,	// (0x0000aa49) aid_vkbss_key_offset

0xf125,	// (0x0000f46b) cell_vkbss_key_pane_ParamLimits

0xf125,	// (0x0000f46b) cell_vkbss_key_pane

0xa76d,	// (0x0000aab3) bg_cell_vkbss_key_g1_ParamLimits

0xa76d,	// (0x0000aab3) bg_cell_vkbss_key_g1

0xf17c,	// (0x0000f4c2) cell_vkbss_key_3p_pane_ParamLimits

0xf17c,	// (0x0000f4c2) cell_vkbss_key_3p_pane

0xf1b2,	// (0x0000f4f8) cell_vkbss_key_g1_ParamLimits

0xf1b2,	// (0x0000f4f8) cell_vkbss_key_g1

0xf1e8,	// (0x0000f52e) cell_vkbss_key_t1_ParamLimits

0xf1e8,	// (0x0000f52e) cell_vkbss_key_t1

0xa841,	// (0x0000ab87) cell_ituss_key_pane_ParamLimits

0xa841,	// (0x0000ab87) cell_ituss_key_pane

0xa852,	// (0x0000ab98) bg_cell_ituss_key_g1_ParamLimits

0xa852,	// (0x0000ab98) bg_cell_ituss_key_g1

0xa85e,	// (0x0000aba4) cell_ituss_key_pane_g1_ParamLimits

0xa85e,	// (0x0000aba4) cell_ituss_key_pane_g1

0xa872,	// (0x0000abb8) cell_ituss_key_pane_g2_ParamLimits

0xa872,	// (0x0000abb8) cell_ituss_key_pane_g2

0x0005,

0xfea7,	// (0x000101ed) cell_ituss_key_pane_g_ParamLimits

0xfea7,	// (0x000101ed) cell_ituss_key_pane_g

0xa908,	// (0x0000ac4e) cell_ituss_key_t1_ParamLimits

0xa908,	// (0x0000ac4e) cell_ituss_key_t1

0xa942,	// (0x0000ac88) cell_ituss_key_t2_ParamLimits

0xa942,	// (0x0000ac88) cell_ituss_key_t2

0xa974,	// (0x0000acba) cell_ituss_key_t3_ParamLimits

0xa974,	// (0x0000acba) cell_ituss_key_t3

0xa9a5,	// (0x0000aceb) cell_ituss_key_t4_ParamLimits

0xa9a5,	// (0x0000aceb) cell_ituss_key_t4

0x0005,

0xfeb4,	// (0x000101fa) cell_ituss_key_t_ParamLimits

0xfeb4,	// (0x000101fa) cell_ituss_key_t

0xf244,	// (0x0000f58a) cell_vkbss_key_3p_pane_g1

0xf24c,	// (0x0000f592) cell_vkbss_key_3p_pane_g2

0xf254,	// (0x0000f59a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec1,	// (0x00010207) cell_vkbss_key_3p_pane_g

0x2300,	// (0x00002646) bg_popup_fep_char_preview_window_cp02

0xaa3e,	// (0x0000ad84) popup_fep_char_pre_window_t1

0xee4b,	// (0x0000f191) main_ai5_sk_pane

0xa1ba,	// (0x0000a500) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa1c6,	// (0x0000a50c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6e6d,	// (0x000071b3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa1db,	// (0x0000a521) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe8b,	// (0x000101d1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa1e7,	// (0x0000a52d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1056,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf25c,	// (0x0000f5a2) main_ai5_sk_pane_g1

0x3a91,	// (0x00003dd7) popup_query_code_window_g1

0xf0f5,	// (0x0000f43b) popup_fep_vkb_icf_pane

0xa6a0,	// (0x0000a9e6) popup_fep_vtchi_icf_pane

0xaa55,	// (0x0000ad9b) bg_icf_pane

0xaa55,	// (0x0000ad9b) list_vkb_icf_pane

0xaa61,	// (0x0000ada7) bg_icf_pane_cp01

0xaa74,	// (0x0000adba) vtchi_icf_list_pane

0xf2b1,	// (0x0000f5f7) list_vkb_icf_pane_t1_ParamLimits

0xf2b1,	// (0x0000f5f7) list_vkb_icf_pane_t1

0xaaf2,	// (0x0000ae38) vtchi_icf_list_pane_t1_ParamLimits

0xaaf2,	// (0x0000ae38) vtchi_icf_list_pane_t1

0xa654,	// (0x0000a99a) popup_fep_ituss_window_ParamLimits

0xa6a0,	// (0x0000a9e6) popup_fep_vtchi_icf_pane_ParamLimits

0xa6ed,	// (0x0000aa33) ituss_keypad_pane_ParamLimits

0xa6f9,	// (0x0000aa3f) ituss_sks_pane

0xaa55,	// (0x0000ad9b) bg_icf_pane_ParamLimits

0xa624,	// (0x0000a96a) icf_edit_indi_pane_ParamLimits

0xa624,	// (0x0000a96a) icf_edit_indi_pane

0xaa55,	// (0x0000ad9b) list_vkb_icf_pane_ParamLimits

0xaa61,	// (0x0000ada7) bg_icf_pane_cp01_ParamLimits

0xa63f,	// (0x0000a985) icf_edit_indi_pane_cp01_ParamLimits

0xa63f,	// (0x0000a985) icf_edit_indi_pane_cp01

0xaa74,	// (0x0000adba) vtchi_query_pane

0x96e8,	// (0x00009a2e) icf_edit_indi_pane_g1_ParamLimits

0x96e8,	// (0x00009a2e) icf_edit_indi_pane_g1

0xf2c8,	// (0x0000f60e) icf_edit_indi_pane_g2_ParamLimits

0xf2c8,	// (0x0000f60e) icf_edit_indi_pane_g2

0x0001,

0xfeec,	// (0x00010232) icf_edit_indi_pane_g_ParamLimits

0xfeec,	// (0x00010232) icf_edit_indi_pane_g

0xf2dc,	// (0x0000f622) icf_edit_indi_pane_t1

0xab10,	// (0x0000ae56) bg_input_focus_pane_cp042

0x0a2e,	// (0x00000d74) vtchi_button_pane

0xab19,	// (0x0000ae5f) vtchi_query_pane_t1

0xab27,	// (0x0000ae6d) vtchi_query_pane_t2

0xab35,	// (0x0000ae7b) vtchi_query_pane_t3

0x0002,

0xfedb,	// (0x00010221) vtchi_query_pane_t

0xf2fd,	// (0x0000f643) bg_button_pane_cp13

0xab43,	// (0x0000ae89) vtchi_button_pane_g1

0xab4b,	// (0x0000ae91) ituss_sks_pane_g1

0xab56,	// (0x0000ae9c) ituss_sks_pane_g2

0x0001,

0xfee2,	// (0x00010228) ituss_sks_pane_g

0xab5e,	// (0x0000aea4) ituss_sks_pane_t1

0xab6c,	// (0x0000aeb2) ituss_sks_pane_t2

0x0001,

0xfee7,	// (0x0001022d) ituss_sks_pane_t

0x5d4b,	// (0x00006091) indicator_nsta_pane_cp_g1

0x5d54,	// (0x0000609a) indicator_nsta_pane_cp_g2

0x5d5c,	// (0x000060a2) indicator_nsta_pane_cp_g3

0x5d64,	// (0x000060aa) indicator_nsta_pane_cp_g4

0x5d54,	// (0x0000609a) indicator_nsta_pane_cp_g5

0x5d5c,	// (0x000060a2) indicator_nsta_pane_cp_g6

0x0005,

0xfa69,	// (0x0000fdaf) indicator_nsta_pane_cp_g

0xebe4,	// (0x0000ef2a) cell_graphic2_pane_t2_ParamLimits

0xebe4,	// (0x0000ef2a) cell_graphic2_pane_t2

0x0001,

0xfd76,	// (0x000100bc) cell_graphic2_pane_t_ParamLimits

0xfd76,	// (0x000100bc) cell_graphic2_pane_t

0xec19,	// (0x0000ef5f) cell_graphic2_control_pane_t1

0xc1bb,	// (0x0000c501) signal_pane_g3_ParamLimits

0xc1bb,	// (0x0000c501) signal_pane_g3

0xc1cf,	// (0x0000c515) signal_pane_g4_ParamLimits

0xc1cf,	// (0x0000c515) signal_pane_g4

0xa60e,	// (0x0000a954) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa60e,	// (0x0000a954) cell_ai5_widget_list_row_pane_t3

0xa8f6,	// (0x0000ac3c) cell_ituss_key_pane_t1_ParamLimits

0xa8f6,	// (0x0000ac3c) cell_ituss_key_pane_t1

0x3691,	// (0x000039d7) form_field_data_wide_pane_vc_t2_ParamLimits

0x3691,	// (0x000039d7) form_field_data_wide_pane_vc_t2

0x36a5,	// (0x000039eb) form_field_data_wide_pane_vc_t3_ParamLimits

0x36a5,	// (0x000039eb) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d1,	// (0x0000fb17) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d1,	// (0x0000fb17) form_field_data_wide_pane_vc_t

0x59f5,	// (0x00005d3b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x59f5,	// (0x00005d3b) form_field_slider_wide_pane_vc_t3

0x5ad3,	// (0x00005e19) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5ad3,	// (0x00005e19) form_field_popup_wide_pane_vc_t2

0x5aea,	// (0x00005e30) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5aea,	// (0x00005e30) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa58,	// (0x0000fd9e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa58,	// (0x0000fd9e) form_field_popup_wide_pane_vc_t

0xeec1,	// (0x0000f207) aid_fshwr2_btn_pane_ParamLimits

0xeed1,	// (0x0000f217) aid_fshwr2_syb_pane_ParamLimits

0xeee5,	// (0x0000f22b) aid_fshwr2_txt_pane_ParamLimits

0x1056,	// (0x0000139c) fshwr2_bg_pane_ParamLimits

0xeef5,	// (0x0000f23b) fshwr2_func_candi_pane_ParamLimits

0xef15,	// (0x0000f25b) fshwr2_hwr_syb_pane_ParamLimits

0xef37,	// (0x0000f27d) fshwr2_icf_pane_ParamLimits

0x5956,	// (0x00005c9c) list_double_graphic_pane_vc_g4_ParamLimits

0x5956,	// (0x00005c9c) list_double_graphic_pane_vc_g4

0xa892,	// (0x0000abd8) cell_ituss_key_pane_g3_ParamLimits

0xa892,	// (0x0000abd8) cell_ituss_key_pane_g3

0xa9d6,	// (0x0000ad1c) cell_ituss_key_t5_ParamLimits

0xa9d6,	// (0x0000ad1c) cell_ituss_key_t5

0xf104,	// (0x0000f44a) popup_fep_vkbss_window_ParamLimits

0x98e0,	// (0x00009c26) aid_cell_ai5_quarter

0xf2dc,	// (0x0000f622) icf_edit_indi_pane_t1_ParamLimits

0x05a3,	// (0x000008e9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x05a3,	// (0x000008e9) aid_tch_indicator_popup_pane_cp2

0x05b6,	// (0x000008fc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x05b6,	// (0x000008fc) aid_tch_query_popup_data_pane_cp2

0x3a39,	// (0x00003d7f) aid_tch_query_popup_pane_ParamLimits

0x3a39,	// (0x00003d7f) aid_tch_query_popup_pane

0x3a39,	// (0x00003d7f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3a39,	// (0x00003d7f) aid_tch_query_popup_data_pane_cp1

0x284f,	// (0x00002b95) cell_fshwr2_syb_bg_pane_ParamLimits

0xf066,	// (0x0000f3ac) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf079,	// (0x0000f3bf) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf0f5,	// (0x0000f43b) popup_fep_vkb_icf_pane_ParamLimits

0xece9,	// (0x0000f02f) bg_popup_fep_char_preview_window_g10

0x9a15,	// (0x00009d5b) cell_ai5_widget_pane_g11_ParamLimits

0x9a15,	// (0x00009d5b) cell_ai5_widget_pane_g11

0x9a21,	// (0x00009d67) cell_ai5_widget_pane_g12_ParamLimits

0x9a21,	// (0x00009d67) cell_ai5_widget_pane_g12

0x9a2d,	// (0x00009d73) cell_ai5_widget_pane_g13_ParamLimits

0x9a2d,	// (0x00009d73) cell_ai5_widget_pane_g13

0x9b5c,	// (0x00009ea2) cell_ai5_widget_pane_t11_ParamLimits

0x9b5c,	// (0x00009ea2) cell_ai5_widget_pane_t11

0x9b6e,	// (0x00009eb4) cell_ai5_widget_pane_t12_ParamLimits

0x9b6e,	// (0x00009eb4) cell_ai5_widget_pane_t12

0xa89e,	// (0x0000abe4) cell_ituss_key_pane_g4_ParamLimits

0xa89e,	// (0x0000abe4) cell_ituss_key_pane_g4

0xa8ba,	// (0x0000ac00) cell_ituss_key_pane_g5_ParamLimits

0xa8ba,	// (0x0000ac00) cell_ituss_key_pane_g5

0xa8d6,	// (0x0000ac1c) cell_ituss_key_pane_g6_ParamLimits

0xa8d6,	// (0x0000ac1c) cell_ituss_key_pane_g6

0x33ca,	// (0x00003710) bg_icf_pane_g1

0xf265,	// (0x0000f5ab) bg_icf_pane_g2

0xf26f,	// (0x0000f5b5) bg_icf_pane_g3

0xf277,	// (0x0000f5bd) bg_icf_pane_g4

0xf281,	// (0x0000f5c7) bg_icf_pane_g5

0xf28b,	// (0x0000f5d1) bg_icf_pane_g6

0xf295,	// (0x0000f5db) bg_icf_pane_g7

0xf29d,	// (0x0000f5e3) bg_icf_pane_g8

0xf2a7,	// (0x0000f5ed) bg_icf_pane_g9

0x0008,

0xfec8,	// (0x0001020e) bg_icf_pane_g

0xa6b9,	// (0x0000a9ff) popup_hyb_candi_window_ParamLimits

0xa6b9,	// (0x0000a9ff) popup_hyb_candi_window

0x3578,	// (0x000038be) bg_popup_sub_pane_cp01_ParamLimits

0x3578,	// (0x000038be) bg_popup_sub_pane_cp01

0xaba7,	// (0x0000aeed) entry_hyb_candi_pane_ParamLimits

0xaba7,	// (0x0000aeed) entry_hyb_candi_pane

0xabb6,	// (0x0000aefc) grid_hyb_candi_pane_ParamLimits

0xabb6,	// (0x0000aefc) grid_hyb_candi_pane

0xabcb,	// (0x0000af11) grid_hyb_phrase_pane_ParamLimits

0xabcb,	// (0x0000af11) grid_hyb_phrase_pane

0xabda,	// (0x0000af20) cell_hyb_candi_pane_ParamLimits

0xabda,	// (0x0000af20) cell_hyb_candi_pane

0xabfd,	// (0x0000af43) cell_hyb_candi_scroll_pane

0x1a34,	// (0x00001d7a) cell_hyb_candi_pane_g1

0xac06,	// (0x0000af4c) cell_hyb_candi_pane_t1

0xac14,	// (0x0000af5a) cell_hyb_phrase_pane

0x1a34,	// (0x00001d7a) cell_hyb_phrase_pane_g1

0xac1d,	// (0x0000af63) cell_hyb_phrase_pane_t1

0xac2b,	// (0x0000af71) entry_hyb_candi_pane_t1

0x2300,	// (0x00002646) input_focus_pane_cp06

0xac39,	// (0x0000af7f) cell_hyb_candi_scroll_pane_g1

0xac41,	// (0x0000af87) cell_hyb_candi_scroll_pane_g1_aid

0xac49,	// (0x0000af8f) cell_hyb_candi_scroll_pane_g2

0xac51,	// (0x0000af97) cell_hyb_candi_scroll_pane_g2_aid

0xac59,	// (0x0000af9f) cell_hyb_candi_scroll_pane_g3

0xac61,	// (0x0000afa7) cell_hyb_candi_scroll_pane_g4

0xeddf,	// (0x0000f125) ai5_page_g1

0xa9e8,	// (0x0000ad2e) cell_ituss_key_t6_ParamLimits

0xa9e8,	// (0x0000ad2e) cell_ituss_key_t6

0xf111,	// (0x0000f457) icf_edit_indi_pane_cp02_ParamLimits

0xf111,	// (0x0000f457) icf_edit_indi_pane_cp02

0xa6e0,	// (0x0000aa26) icf_edit_indi_pane_cp03_ParamLimits

0xa6e0,	// (0x0000aa26) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

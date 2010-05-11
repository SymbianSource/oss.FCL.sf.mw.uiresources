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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f6c4 };

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
0x63ed,	// (0x00025ab1) Screen

0x63f9,	// (0x00025abd) application_window_ParamLimits

0x63f9,	// (0x00025abd) application_window

0x0c42,	// (0x00020306) screen_g1

0x6455,	// (0x00025b19) area_bottom_pane_ParamLimits

0x6455,	// (0x00025b19) area_bottom_pane

0x6515,	// (0x00025bd9) area_top_pane_ParamLimits

0x6515,	// (0x00025bd9) area_top_pane

0x65a9,	// (0x00025c6d) main_pane_ParamLimits

0x65a9,	// (0x00025c6d) main_pane

0x0c4c,	// (0x00020310) misc_graphics

0x7eaa,	// (0x0002756e) battery_pane_ParamLimits

0x7eaa,	// (0x0002756e) battery_pane

0x9f09,	// (0x000295cd) bg_status_flat_pane_g8

0x9f11,	// (0x000295d5) bg_status_flat_pane_g9

0x7f72,	// (0x00027636) context_pane_ParamLimits

0x7f72,	// (0x00027636) context_pane

0x8096,	// (0x0002775a) navi_pane_ParamLimits

0x8096,	// (0x0002775a) navi_pane

0x8126,	// (0x000277ea) signal_pane_ParamLimits

0x8126,	// (0x000277ea) signal_pane

0x0008,

0xf874,	// (0x0002ef38) bg_status_flat_pane_g

0x8193,	// (0x00027857) status_pane_g1_ParamLimits

0x8193,	// (0x00027857) status_pane_g1

0x81a7,	// (0x0002786b) status_pane_g2_ParamLimits

0x81a7,	// (0x0002786b) status_pane_g2

0x81b3,	// (0x00027877) status_pane_g3_ParamLimits

0x81b3,	// (0x00027877) status_pane_g3

0x0004,

0xf79b,	// (0x0002ee5f) status_pane_g_ParamLimits

0xf79b,	// (0x0002ee5f) status_pane_g

0x81e7,	// (0x000278ab) title_pane_ParamLimits

0x81e7,	// (0x000278ab) title_pane

0x8224,	// (0x000278e8) uni_indicator_pane_ParamLimits

0x8224,	// (0x000278e8) uni_indicator_pane

0x7793,	// (0x00026e57) bg_list_pane_ParamLimits

0x7793,	// (0x00026e57) bg_list_pane

0x77b3,	// (0x00026e77) find_pane

0x77bb,	// (0x00026e7f) listscroll_app_pane_ParamLimits

0x77bb,	// (0x00026e7f) listscroll_app_pane

0x77c7,	// (0x00026e8b) listscroll_form_pane

0x77cf,	// (0x00026e93) listscroll_gen_pane_ParamLimits

0x77cf,	// (0x00026e93) listscroll_gen_pane

0x77e3,	// (0x00026ea7) listscroll_set_pane

0x6bfc,	// (0x000262c0) main_idle_act_pane

0x382b,	// (0x00022eef) main_idle_trad_pane

0x382b,	// (0x00022eef) main_list_empty_pane

0x77fd,	// (0x00026ec1) main_midp_pane

0x7809,	// (0x00026ecd) main_pane_g1_ParamLimits

0x7809,	// (0x00026ecd) main_pane_g1

0x7817,	// (0x00026edb) popup_ai_message_window_ParamLimits

0x7817,	// (0x00026edb) popup_ai_message_window

0x78cb,	// (0x00026f8f) popup_fep_china_uni_window_ParamLimits

0x78cb,	// (0x00026f8f) popup_fep_china_uni_window

0x792b,	// (0x00026fef) popup_fep_japan_candidate_window_ParamLimits

0x792b,	// (0x00026fef) popup_fep_japan_candidate_window

0x7955,	// (0x00027019) popup_fep_japan_predictive_window_ParamLimits

0x7955,	// (0x00027019) popup_fep_japan_predictive_window

0x798b,	// (0x0002704f) popup_find_window

0x7998,	// (0x0002705c) popup_grid_graphic_window_ParamLimits

0x7998,	// (0x0002705c) popup_grid_graphic_window

0x79c6,	// (0x0002708a) popup_large_graphic_colour_window

0x79ec,	// (0x000270b0) popup_menu_window_ParamLimits

0x79ec,	// (0x000270b0) popup_menu_window

0x7bb6,	// (0x0002727a) popup_note_image_window

0x7ba0,	// (0x00027264) popup_note_wait_window_ParamLimits

0x7ba0,	// (0x00027264) popup_note_wait_window

0x7ba0,	// (0x00027264) popup_note_window_ParamLimits

0x7ba0,	// (0x00027264) popup_note_window

0x7c1c,	// (0x000272e0) popup_query_code_window_ParamLimits

0x7c1c,	// (0x000272e0) popup_query_code_window

0x7c32,	// (0x000272f6) popup_query_data_code_window_ParamLimits

0x7c32,	// (0x000272f6) popup_query_data_code_window

0x7c55,	// (0x00027319) popup_query_data_window_ParamLimits

0x7c55,	// (0x00027319) popup_query_data_window

0x7c77,	// (0x0002733b) popup_query_sat_info_window_ParamLimits

0x7c77,	// (0x0002733b) popup_query_sat_info_window

0x7cb6,	// (0x0002737a) popup_snote_single_graphic_window_ParamLimits

0x7cb6,	// (0x0002737a) popup_snote_single_graphic_window

0x7cb6,	// (0x0002737a) popup_snote_single_text_window_ParamLimits

0x7cb6,	// (0x0002737a) popup_snote_single_text_window

0x7ccd,	// (0x00027391) popup_sub_window_general

0x7e13,	// (0x000274d7) popup_window_general_ParamLimits

0x7e13,	// (0x000274d7) popup_window_general

0x7e2c,	// (0x000274f0) power_save_pane

0x75f2,	// (0x00026cb6) control_pane_g1_ParamLimits

0x75f2,	// (0x00026cb6) control_pane_g1

0x761b,	// (0x00026cdf) control_pane_g2_ParamLimits

0x761b,	// (0x00026cdf) control_pane_g2

0x7640,	// (0x00026d04) control_pane_g3_ParamLimits

0x7640,	// (0x00026d04) control_pane_g3

0x0007,

0xf783,	// (0x0002ee47) control_pane_g_ParamLimits

0xf783,	// (0x0002ee47) control_pane_g

0x7698,	// (0x00026d5c) control_pane_t1_ParamLimits

0x7698,	// (0x00026d5c) control_pane_t1

0x76e4,	// (0x00026da8) control_pane_t2_ParamLimits

0x76e4,	// (0x00026da8) control_pane_t2

0x0002,

0xf794,	// (0x0002ee58) control_pane_t_ParamLimits

0xf794,	// (0x0002ee58) control_pane_t

0x7517,	// (0x00026bdb) navi_navi_volume_pane_cp1

0x751f,	// (0x00026be3) status_small_icon_pane

0x7527,	// (0x00026beb) status_small_pane_g1_ParamLimits

0x7527,	// (0x00026beb) status_small_pane_g1

0x755b,	// (0x00026c1f) status_small_pane_g2_ParamLimits

0x755b,	// (0x00026c1f) status_small_pane_g2

0x7567,	// (0x00026c2b) status_small_pane_g3_ParamLimits

0x7567,	// (0x00026c2b) status_small_pane_g3

0x7573,	// (0x00026c37) status_small_pane_g4_ParamLimits

0x7573,	// (0x00026c37) status_small_pane_g4

0x757f,	// (0x00026c43) status_small_pane_g5_ParamLimits

0x757f,	// (0x00026c43) status_small_pane_g5

0x758d,	// (0x00026c51) status_small_pane_g6_ParamLimits

0x758d,	// (0x00026c51) status_small_pane_g6

0x0007,

0xf772,	// (0x0002ee36) status_small_pane_g_ParamLimits

0xf772,	// (0x0002ee36) status_small_pane_g

0x75bc,	// (0x00026c80) status_small_pane_t1

0x75de,	// (0x00026ca2) status_small_wait_pane_ParamLimits

0x75de,	// (0x00026ca2) status_small_wait_pane

0x6f6f,	// (0x00026633) aid_levels_signal_ParamLimits

0x6f6f,	// (0x00026633) aid_levels_signal

0x6f81,	// (0x00026645) signal_pane_g1_ParamLimits

0x6f81,	// (0x00026645) signal_pane_g1

0x6f96,	// (0x0002665a) signal_pane_g2_ParamLimits

0x6f96,	// (0x0002665a) signal_pane_g2

0x0003,

0xf703,	// (0x0002edc7) signal_pane_g_ParamLimits

0xf703,	// (0x0002edc7) signal_pane_g

0x341f,	// (0x00022ae3) context_pane_g1

0x6808,	// (0x00025ecc) title_pane_g1

0x6826,	// (0x00025eea) title_pane_t1

0x0c6e,	// (0x00020332) title_pane_t2

0x0c94,	// (0x00020358) title_pane_t3

0x0002,

0xf557,	// (0x0002ec1b) title_pane_t

0x823c,	// (0x00027900) aid_levels_battery_ParamLimits

0x823c,	// (0x00027900) aid_levels_battery

0x8250,	// (0x00027914) battery_pane_g1_ParamLimits

0x8250,	// (0x00027914) battery_pane_g1

0x8266,	// (0x0002792a) battery_pane_g2_ParamLimits

0x8266,	// (0x0002792a) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002ee6a) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002ee6a) battery_pane_g

0xa853,	// (0x00029f17) uni_indicator_pane_g1

0xa869,	// (0x00029f2d) uni_indicator_pane_g2

0xa87f,	// (0x00029f43) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002efe0) uni_indicator_pane_g

0x36cd,	// (0x00022d91) navi_icon_pane_ParamLimits

0x36cd,	// (0x00022d91) navi_icon_pane

0x3651,	// (0x00022d15) navi_midp_pane

0x36e9,	// (0x00022dad) navi_navi_pane

0x36f3,	// (0x00022db7) navi_text_pane_ParamLimits

0x36f3,	// (0x00022db7) navi_text_pane

0x0c42,	// (0x00020306) status_small_wait_pane_g1

0x0fa9,	// (0x0002066d) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002efdb) status_small_wait_pane_g

0xa566,	// (0x00029c2a) navi_navi_icon_text_pane

0xa56e,	// (0x00029c32) navi_navi_pane_g1_ParamLimits

0xa56e,	// (0x00029c32) navi_navi_pane_g1

0xa580,	// (0x00029c44) navi_navi_pane_g2_ParamLimits

0xa580,	// (0x00029c44) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002efa9) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002efa9) navi_navi_pane_g

0xa592,	// (0x00029c56) navi_navi_tabs_pane

0xa59b,	// (0x00029c5f) navi_navi_text_pane

0xa566,	// (0x00029c2a) navi_navi_volume_pane

0xa542,	// (0x00029c06) navi_text_pane_t1

0xa536,	// (0x00029bfa) navi_icon_pane_g1

0xa489,	// (0x00029b4d) navi_navi_text_pane_t1

0x89be,	// (0x00028082) navi_navi_volume_pane_g1

0x89c6,	// (0x0002808a) volume_small_pane

0xa3ef,	// (0x00029ab3) navi_navi_icon_text_pane_g1

0xa3f7,	// (0x00029abb) navi_navi_icon_text_pane_t1

0x36e9,	// (0x00022dad) navi_tabs_2_long_pane

0x36e9,	// (0x00022dad) navi_tabs_2_pane

0x36e9,	// (0x00022dad) navi_tabs_3_long_pane

0x36e9,	// (0x00022dad) navi_tabs_3_pane

0x36e9,	// (0x00022dad) navi_tabs_4_pane

0x899e,	// (0x00028062) tabs_2_active_pane_ParamLimits

0x899e,	// (0x00028062) tabs_2_active_pane

0x89ae,	// (0x00028072) tabs_2_passive_pane_ParamLimits

0x89ae,	// (0x00028072) tabs_2_passive_pane

0x896c,	// (0x00028030) tabs_3_active_pane_ParamLimits

0x896c,	// (0x00028030) tabs_3_active_pane

0x897c,	// (0x00028040) tabs_3_passive_pane_ParamLimits

0x897c,	// (0x00028040) tabs_3_passive_pane

0x898d,	// (0x00028051) tabs_3_passive_pane_cp_ParamLimits

0x898d,	// (0x00028051) tabs_3_passive_pane_cp

0x8920,	// (0x00027fe4) tabs_4_active_pane_ParamLimits

0x8920,	// (0x00027fe4) tabs_4_active_pane

0x8933,	// (0x00027ff7) tabs_4_passive_pane_ParamLimits

0x8933,	// (0x00027ff7) tabs_4_passive_pane

0x8944,	// (0x00028008) tabs_4_passive_pane_cp_ParamLimits

0x8944,	// (0x00028008) tabs_4_passive_pane_cp

0x8955,	// (0x00028019) tabs_4_passive_pane_cp2_ParamLimits

0x8955,	// (0x00028019) tabs_4_passive_pane_cp2

0x88fc,	// (0x00027fc0) tabs_2_long_active_pane_ParamLimits

0x88fc,	// (0x00027fc0) tabs_2_long_active_pane

0x890e,	// (0x00027fd2) tabs_2_long_passive_pane_ParamLimits

0x890e,	// (0x00027fd2) tabs_2_long_passive_pane

0x88bd,	// (0x00027f81) tabs_3_long_active_pane_ParamLimits

0x88bd,	// (0x00027f81) tabs_3_long_active_pane

0x88d0,	// (0x00027f94) tabs_3_long_passive_pane_ParamLimits

0x88d0,	// (0x00027f94) tabs_3_long_passive_pane

0x88e9,	// (0x00027fad) tabs_3_long_passive_pane_cp_ParamLimits

0x88e9,	// (0x00027fad) tabs_3_long_passive_pane_cp

0x8863,	// (0x00027f27) volume_small_pane_g1

0x886c,	// (0x00027f30) volume_small_pane_g2

0x8875,	// (0x00027f39) volume_small_pane_g3

0x887e,	// (0x00027f42) volume_small_pane_g4

0x8887,	// (0x00027f4b) volume_small_pane_g5

0x8890,	// (0x00027f54) volume_small_pane_g6

0x8899,	// (0x00027f5d) volume_small_pane_g7

0x88a2,	// (0x00027f66) volume_small_pane_g8

0x88ab,	// (0x00027f6f) volume_small_pane_g9

0x88b4,	// (0x00027f78) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002ef75) volume_small_pane_g

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp2_ParamLimits

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp2

0x688e,	// (0x00025f52) tabs_3_active_pane_g1

0x6896,	// (0x00025f5a) tabs_3_active_pane_t1

0x0cb4,	// (0x00020378) bg_passive_tab_pane_cp2_ParamLimits

0x0cb4,	// (0x00020378) bg_passive_tab_pane_cp2

0x688e,	// (0x00025f52) tabs_3_passive_pane_g1

0x6896,	// (0x00025f5a) tabs_3_passive_pane_t1

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp3_ParamLimits

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp3

0x68a8,	// (0x00025f6c) tabs_4_active_pane_g1

0x68b0,	// (0x00025f74) tabs_4_active_pane_t1

0x0cb4,	// (0x00020378) bg_passive_tab_pane_cp3_ParamLimits

0x0cb4,	// (0x00020378) bg_passive_tab_pane_cp3

0x68a8,	// (0x00025f6c) tabs_4_1_passive_pane_g1

0x68b0,	// (0x00025f74) tabs_4_1_passive_pane_t1

0x77fd,	// (0x00026ec1) list_highlight_pane_cp2

0xaace,	// (0x0002a192) list_set_pane_ParamLimits

0xaace,	// (0x0002a192) list_set_pane

0xab96,	// (0x0002a25a) main_pane_set_t1_ParamLimits

0xab96,	// (0x0002a25a) main_pane_set_t1

0xabb6,	// (0x0002a27a) main_pane_set_t2_ParamLimits

0xabb6,	// (0x0002a27a) main_pane_set_t2

0xabca,	// (0x0002a28e) main_pane_set_t3_ParamLimits

0xabca,	// (0x0002a28e) main_pane_set_t3

0xabde,	// (0x0002a2a2) main_pane_set_t4_ParamLimits

0xabde,	// (0x0002a2a2) main_pane_set_t4

0x0003,

0xf981,	// (0x0002f045) main_pane_set_t_ParamLimits

0xf981,	// (0x0002f045) main_pane_set_t

0xabf2,	// (0x0002a2b6) setting_code_pane

0xabfc,	// (0x0002a2c0) setting_slider_graphic_pane

0xabfc,	// (0x0002a2c0) setting_slider_pane

0xabfc,	// (0x0002a2c0) setting_text_pane

0xabfc,	// (0x0002a2c0) setting_volume_pane

0x68c2,	// (0x00025f86) volume_set_pane

0x0cb4,	// (0x00020378) bg_set_opt_pane_cp

0x68cc,	// (0x00025f90) setting_slider_pane_t1

0x68e5,	// (0x00025fa9) setting_slider_pane_t2

0x68ff,	// (0x00025fc3) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002ec22) setting_slider_pane_t

0x6917,	// (0x00025fdb) slider_set_pane

0x0c4c,	// (0x00020310) bg_set_opt_pane_cp2

0x0cc2,	// (0x00020386) setting_slider_graphic_pane_g1

0x692d,	// (0x00025ff1) setting_slider_graphic_pane_t1

0x693d,	// (0x00026001) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002ec29) setting_slider_graphic_pane_t

0x694d,	// (0x00026011) slider_set_pane_cp

0x0c4c,	// (0x00020310) input_focus_pane_cp1

0xaa8f,	// (0x0002a153) list_set_text_pane

0x0c42,	// (0x00020306) setting_text_pane_g1

0x0c4c,	// (0x00020310) input_focus_pane_cp2

0x0c42,	// (0x00020306) setting_code_pane_g1

0x0ccb,	// (0x0002038f) setting_code_pane_t1

0x52d6,	// (0x0002499a) set_text_pane_t1_ParamLimits

0x52d6,	// (0x0002499a) set_text_pane_t1

0x2d84,	// (0x00022448) set_opt_bg_pane_g1

0x2d8c,	// (0x00022450) set_opt_bg_pane_g2

0xaa67,	// (0x0002a12b) set_opt_bg_pane_g3

0x2d9c,	// (0x00022460) set_opt_bg_pane_g4

0x2da4,	// (0x00022468) set_opt_bg_pane_g5

0x2dac,	// (0x00022470) set_opt_bg_pane_g6

0xaa71,	// (0x0002a135) set_opt_bg_pane_g7

0xaa7b,	// (0x0002a13f) set_opt_bg_pane_g8

0xaa85,	// (0x0002a149) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002f032) set_opt_bg_pane_g

0xaa5a,	// (0x0002a11e) slider_set_pane_g1

0x8a47,	// (0x0002810b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002f023) slider_set_pane_g

0x89cf,	// (0x00028093) volume_set_pane_g1

0x89d9,	// (0x0002809d) volume_set_pane_g2

0x89e3,	// (0x000280a7) volume_set_pane_g3

0x89ed,	// (0x000280b1) volume_set_pane_g4

0x89f7,	// (0x000280bb) volume_set_pane_g5

0x8a01,	// (0x000280c5) volume_set_pane_g6

0x8a0b,	// (0x000280cf) volume_set_pane_g7

0x8a15,	// (0x000280d9) volume_set_pane_g8

0x8a1f,	// (0x000280e3) volume_set_pane_g9

0x8a29,	// (0x000280ed) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002effb) volume_set_pane_g

0x6955,	// (0x00026019) indicator_pane_ParamLimits

0x6955,	// (0x00026019) indicator_pane

0x6961,	// (0x00026025) main_idle_pane_g2_ParamLimits

0x6961,	// (0x00026025) main_idle_pane_g2

0x6989,	// (0x0002604d) main_pane_idle_g1_ParamLimits

0x6989,	// (0x0002604d) main_pane_idle_g1

0x0cf3,	// (0x000203b7) popup_clock_digital_analogue_window_ParamLimits

0x0cf3,	// (0x000203b7) popup_clock_digital_analogue_window

0x6997,	// (0x0002605b) soft_indicator_pane_ParamLimits

0x6997,	// (0x0002605b) soft_indicator_pane

0x69a5,	// (0x00026069) wallpaper_pane_ParamLimits

0x69a5,	// (0x00026069) wallpaper_pane

0x0c42,	// (0x00020306) wallpaper_pane_g1

0x69b1,	// (0x00026075) indicator_pane_g1_ParamLimits

0x69b1,	// (0x00026075) indicator_pane_g1

0xaed8,	// (0x0002a59c) navi_navi_icon_text_pane_srt_g1

0x0d21,	// (0x000203e5) soft_indicator_pane_t1

0x0d3b,	// (0x000203ff) aid_ps_area_pane

0x69bd,	// (0x00026081) aid_ps_clock_pane

0x0d4c,	// (0x00020410) aid_ps_indicator_pane

0x0d58,	// (0x0002041c) indicator_ps_pane_ParamLimits

0x0d58,	// (0x0002041c) indicator_ps_pane

0x0d67,	// (0x0002042b) power_save_pane_g1_ParamLimits

0x0d67,	// (0x0002042b) power_save_pane_g1

0x0d73,	// (0x00020437) power_save_pane_g2_ParamLimits

0x0d73,	// (0x00020437) power_save_pane_g2

0x6409,	// (0x00025acd) aid_navinavi_width_pane

0x0d3b,	// (0x000203ff) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002ec2e) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002ec2e) power_save_pane_g

0x0d81,	// (0x00020445) power_save_pane_t1_ParamLimits

0x0d81,	// (0x00020445) power_save_pane_t1

0x69bd,	// (0x00026081) aid_ps_clock_pane_ParamLimits

0x0d4c,	// (0x00020410) aid_ps_indicator_pane_ParamLimits

0x0d93,	// (0x00020457) power_save_pane_t4_ParamLimits

0x0d93,	// (0x00020457) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002ec33) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002ec33) power_save_pane_t

0x0dbd,	// (0x00020481) power_save_t3_ParamLimits

0x0dbd,	// (0x00020481) power_save_t3

0x0da8,	// (0x0002046c) power_save_t2_ParamLimits

0x0da8,	// (0x0002046c) power_save_t2

0x0dd2,	// (0x00020496) indicator_ps_pane_g1

0x69cb,	// (0x0002608f) ai_gene_pane_ParamLimits

0x69cb,	// (0x0002608f) ai_gene_pane

0x69d7,	// (0x0002609b) ai_links_pane_ParamLimits

0x69d7,	// (0x0002609b) ai_links_pane

0x69e3,	// (0x000260a7) indicator_pane_cp1_ParamLimits

0x69e3,	// (0x000260a7) indicator_pane_cp1

0x69ef,	// (0x000260b3) main_pane_idle_g1_cp_ParamLimits

0x69ef,	// (0x000260b3) main_pane_idle_g1_cp

0x0ddb,	// (0x0002049f) popup_ai_links_title_window

0x69fb,	// (0x000260bf) soft_indicator_pane_cp1_ParamLimits

0x69fb,	// (0x000260bf) soft_indicator_pane_cp1

0xa841,	// (0x00029f05) ai_links_pane_g1

0xa84a,	// (0x00029f0e) grid_ai_links_pane

0xa826,	// (0x00029eea) ai_gene_pane_1

0xa82f,	// (0x00029ef3) ai_gene_pane_2

0xa838,	// (0x00029efc) list_highlight_pane_cp4

0xa806,	// (0x00029eca) cell_ai_link_pane_ParamLimits

0xa806,	// (0x00029eca) cell_ai_link_pane

0xa7fe,	// (0x00029ec2) cell_ai_link_pane_g1

0x0fa9,	// (0x0002066d) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002efd6) cell_ai_link_pane_g

0x0c4c,	// (0x00020310) grid_highlight_cp2

0x0c4c,	// (0x00020310) bg_popup_sub_pane_cp1

0x0df2,	// (0x000204b6) popup_ai_links_title_window_t1

0xa74a,	// (0x00029e0e) ai_gene_pane_1_g1_ParamLimits

0xa74a,	// (0x00029e0e) ai_gene_pane_1_g1

0xa756,	// (0x00029e1a) ai_gene_pane_1_g2_ParamLimits

0xa756,	// (0x00029e1a) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002efcc) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002efcc) ai_gene_pane_1_g

0xa763,	// (0x00029e27) ai_gene_pane_1_t1_ParamLimits

0xa763,	// (0x00029e27) ai_gene_pane_1_t1

0xa797,	// (0x00029e5b) grid_ai_soft_ind_pane

0xa735,	// (0x00029df9) ai_gene_pane_2_t1_ParamLimits

0xa735,	// (0x00029df9) ai_gene_pane_2_t1

0x6a07,	// (0x000260cb) main_pane_empty_t1_ParamLimits

0x6a07,	// (0x000260cb) main_pane_empty_t1

0x6a1f,	// (0x000260e3) main_pane_empty_t2_ParamLimits

0x6a1f,	// (0x000260e3) main_pane_empty_t2

0x6a34,	// (0x000260f8) main_pane_empty_t3_ParamLimits

0x6a34,	// (0x000260f8) main_pane_empty_t3

0x6a46,	// (0x0002610a) main_pane_empty_t4_ParamLimits

0x6a46,	// (0x0002610a) main_pane_empty_t4

0x6a58,	// (0x0002611c) main_pane_empty_t5_ParamLimits

0x6a58,	// (0x0002611c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002ec38) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002ec38) main_pane_empty_t

0x2e04,	// (0x000224c8) bg_popup_window_pane_ParamLimits

0x2e04,	// (0x000224c8) bg_popup_window_pane

0xa497,	// (0x00029b5b) find_popup_pane_cp2_ParamLimits

0xa497,	// (0x00029b5b) find_popup_pane_cp2

0xa4a3,	// (0x00029b67) heading_pane_ParamLimits

0xa4a3,	// (0x00029b67) heading_pane

0x0c4c,	// (0x00020310) bg_popup_sub_pane

0xa411,	// (0x00029ad5) bg_popup_window_pane_g1_ParamLimits

0xa411,	// (0x00029ad5) bg_popup_window_pane_g1

0xa41d,	// (0x00029ae1) bg_popup_window_pane_g2_ParamLimits

0xa41d,	// (0x00029ae1) bg_popup_window_pane_g2

0xa429,	// (0x00029aed) bg_popup_window_pane_g3_ParamLimits

0xa429,	// (0x00029aed) bg_popup_window_pane_g3

0xa435,	// (0x00029af9) bg_popup_window_pane_g4_ParamLimits

0xa435,	// (0x00029af9) bg_popup_window_pane_g4

0xa441,	// (0x00029b05) bg_popup_window_pane_g5_ParamLimits

0xa441,	// (0x00029b05) bg_popup_window_pane_g5

0xa44d,	// (0x00029b11) bg_popup_window_pane_g6_ParamLimits

0xa44d,	// (0x00029b11) bg_popup_window_pane_g6

0xa459,	// (0x00029b1d) bg_popup_window_pane_g7_ParamLimits

0xa459,	// (0x00029b1d) bg_popup_window_pane_g7

0xa465,	// (0x00029b29) bg_popup_window_pane_g8_ParamLimits

0xa465,	// (0x00029b29) bg_popup_window_pane_g8

0xa471,	// (0x00029b35) bg_popup_window_pane_g9_ParamLimits

0xa471,	// (0x00029b35) bg_popup_window_pane_g9

0xa47d,	// (0x00029b41) bg_popup_window_pane_g10_ParamLimits

0xa47d,	// (0x00029b41) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002ef94) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002ef94) bg_popup_window_pane_g

0xa3a6,	// (0x00029a6a) bg_popup_heading_pane_ParamLimits

0xa3a6,	// (0x00029a6a) bg_popup_heading_pane

0x8acf,	// (0x00028193) tabs_4_passive_pane_cp_srt_ParamLimits

0x8acf,	// (0x00028193) tabs_4_passive_pane_cp_srt

0x8ae1,	// (0x000281a5) tabs_4_passive_pane_srt_ParamLimits

0xa3ba,	// (0x00029a7e) heading_pane_g2

0x8ae1,	// (0x000281a5) tabs_4_passive_pane_srt

0x77fd,	// (0x00026ec1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x77fd,	// (0x00026ec1) bg_passive_tab_pane_cp3_srt

0xa3c2,	// (0x00029a86) heading_pane_t1_ParamLimits

0xa3c2,	// (0x00029a86) heading_pane_t1

0xa3d9,	// (0x00029a9d) heading_pane_t2_ParamLimits

0xa3d9,	// (0x00029a9d) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002ef8f) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002ef8f) heading_pane_t

0x9ed1,	// (0x00029595) bg_popup_heading_pane_g1

0x9f80,	// (0x00029644) bg_popup_heading_pane_g2

0x9f8a,	// (0x0002964e) bg_popup_heading_pane_g3

0x9f94,	// (0x00029658) bg_popup_heading_pane_g4

0x9f9e,	// (0x00029662) bg_popup_heading_pane_g5

0x9fa8,	// (0x0002966c) bg_popup_heading_pane_g6

0x9fb0,	// (0x00029674) bg_popup_heading_pane_g7

0x9fb8,	// (0x0002967c) bg_popup_heading_pane_g8

0x9fc2,	// (0x00029686) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002ef4b) bg_popup_heading_pane_g

0x836e,	// (0x00027a32) bg_popup_sub_pane_g1

0x8376,	// (0x00027a3a) bg_popup_sub_pane_g2

0x837e,	// (0x00027a42) bg_popup_sub_pane_g3

0x8386,	// (0x00027a4a) bg_popup_sub_pane_g4

0x838e,	// (0x00027a52) bg_popup_sub_pane_g5

0x8396,	// (0x00027a5a) bg_popup_sub_pane_g6

0x839e,	// (0x00027a62) bg_popup_sub_pane_g7

0x83a6,	// (0x00027a6a) bg_popup_sub_pane_g8

0x83ae,	// (0x00027a72) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002ef25) bg_popup_sub_pane_g

0x0ca6,	// (0x0002036a) bg_popup_window_pane_cp5_ParamLimits

0x0ca6,	// (0x0002036a) bg_popup_window_pane_cp5

0x0e0f,	// (0x000204d3) popup_note_window_g1_ParamLimits

0x0e0f,	// (0x000204d3) popup_note_window_g1

0x0e1b,	// (0x000204df) popup_note_window_t1_ParamLimits

0x0e1b,	// (0x000204df) popup_note_window_t1

0x0e31,	// (0x000204f5) popup_note_window_t2_ParamLimits

0x0e31,	// (0x000204f5) popup_note_window_t2

0x0e47,	// (0x0002050b) popup_note_window_t3_ParamLimits

0x0e47,	// (0x0002050b) popup_note_window_t3

0x0e5d,	// (0x00020521) popup_note_window_t4_ParamLimits

0x0e5d,	// (0x00020521) popup_note_window_t4

0x0e85,	// (0x00020549) popup_note_window_t5_ParamLimits

0x0e85,	// (0x00020549) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002ec43) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002ec43) popup_note_window_t

0x0ea9,	// (0x0002056d) bg_popup_window_pane_cp6_ParamLimits

0x0ea9,	// (0x0002056d) bg_popup_window_pane_cp6

0x9e4d,	// (0x00029511) popup_note_image_window_g1_ParamLimits

0x9e4d,	// (0x00029511) popup_note_image_window_g1

0x9e59,	// (0x0002951d) popup_note_image_window_g2_ParamLimits

0x9e59,	// (0x0002951d) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002ef19) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002ef19) popup_note_image_window_g

0x9e72,	// (0x00029536) popup_note_image_window_t1_ParamLimits

0x9e72,	// (0x00029536) popup_note_image_window_t1

0x9e8b,	// (0x0002954f) popup_note_image_window_t2_ParamLimits

0x9e8b,	// (0x0002954f) popup_note_image_window_t2

0x9ea4,	// (0x00029568) popup_note_image_window_t3_ParamLimits

0x9ea4,	// (0x00029568) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002ef1e) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002ef1e) popup_note_image_window_t

0x9d0d,	// (0x000293d1) bg_popup_window_pane_cp7_ParamLimits

0x9d0d,	// (0x000293d1) bg_popup_window_pane_cp7

0x9d3d,	// (0x00029401) popup_note_wait_window_g1_ParamLimits

0x9d3d,	// (0x00029401) popup_note_wait_window_g1

0x9d49,	// (0x0002940d) popup_note_wait_window_g2_ParamLimits

0x9d49,	// (0x0002940d) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002ef07) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002ef07) popup_note_wait_window_g

0x9d61,	// (0x00029425) popup_note_wait_window_t1_ParamLimits

0x9d61,	// (0x00029425) popup_note_wait_window_t1

0x9d88,	// (0x0002944c) popup_note_wait_window_t2_ParamLimits

0x9d88,	// (0x0002944c) popup_note_wait_window_t2

0x9da6,	// (0x0002946a) popup_note_wait_window_t3_ParamLimits

0x9da6,	// (0x0002946a) popup_note_wait_window_t3

0x9db9,	// (0x0002947d) popup_note_wait_window_t4_ParamLimits

0x9db9,	// (0x0002947d) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002ef0e) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002ef0e) popup_note_wait_window_t

0x9dde,	// (0x000294a2) wait_bar_pane_ParamLimits

0x9dde,	// (0x000294a2) wait_bar_pane

0x0c4c,	// (0x00020310) wait_anim_pane

0x0c4c,	// (0x00020310) wait_border_pane

0x0c42,	// (0x00020306) wait_anim_pane_g1

0x0c42,	// (0x00020306) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002edc2) wait_anim_pane_g

0x9cb1,	// (0x00029375) wait_border_pane_g1

0x9cbc,	// (0x00029380) wait_border_pane_g2

0x9cc5,	// (0x00029389) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002ef00) wait_border_pane_g

0x9b1b,	// (0x000291df) bg_popup_window_pane_cp16_ParamLimits

0x9b1b,	// (0x000291df) bg_popup_window_pane_cp16

0x9c1b,	// (0x000292df) indicator_popup_pane_cp4_ParamLimits

0x9c1b,	// (0x000292df) indicator_popup_pane_cp4

0x9c2f,	// (0x000292f3) popup_query_data_window_t1_ParamLimits

0x9c2f,	// (0x000292f3) popup_query_data_window_t1

0x9c41,	// (0x00029305) popup_query_data_window_t2_ParamLimits

0x9c41,	// (0x00029305) popup_query_data_window_t2

0x9c5a,	// (0x0002931e) popup_query_data_window_t3_ParamLimits

0x9c5a,	// (0x0002931e) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002eef9) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002eef9) popup_query_data_window_t

0x9c74,	// (0x00029338) query_popup_data_pane_ParamLimits

0x9c74,	// (0x00029338) query_popup_data_pane

0x9c88,	// (0x0002934c) query_popup_data_pane_cp1_ParamLimits

0x9c88,	// (0x0002934c) query_popup_data_pane_cp1

0x9b1b,	// (0x000291df) bg_popup_window_pane_cp10_ParamLimits

0x9b1b,	// (0x000291df) bg_popup_window_pane_cp10

0x9b4d,	// (0x00029211) indicator_popup_pane_ParamLimits

0x9b4d,	// (0x00029211) indicator_popup_pane

0x9b6f,	// (0x00029233) popup_query_code_window_t1_ParamLimits

0x9b6f,	// (0x00029233) popup_query_code_window_t1

0x9b89,	// (0x0002924d) popup_query_code_window_t2_ParamLimits

0x9b89,	// (0x0002924d) popup_query_code_window_t2

0x9bd2,	// (0x00029296) popup_query_code_window_t3_ParamLimits

0x9bd2,	// (0x00029296) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002eef2) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002eef2) popup_query_code_window_t

0x9c01,	// (0x000292c5) query_popup_pane_ParamLimits

0x9c01,	// (0x000292c5) query_popup_pane

0x0ea9,	// (0x0002056d) bg_popup_window_pane_cp15_ParamLimits

0x0ea9,	// (0x0002056d) bg_popup_window_pane_cp15

0x0ec9,	// (0x0002058d) indicator_popup_pane_cp1_ParamLimits

0x0ec9,	// (0x0002058d) indicator_popup_pane_cp1

0x0edc,	// (0x000205a0) indicator_popup_pane_cp2_ParamLimits

0x0edc,	// (0x000205a0) indicator_popup_pane_cp2

0x0ef7,	// (0x000205bb) popup_query_data_code_window_g1_ParamLimits

0x0ef7,	// (0x000205bb) popup_query_data_code_window_g1

0x0f0a,	// (0x000205ce) popup_query_data_code_window_t1_ParamLimits

0x0f0a,	// (0x000205ce) popup_query_data_code_window_t1

0x0f1c,	// (0x000205e0) popup_query_data_code_window_t2_ParamLimits

0x0f1c,	// (0x000205e0) popup_query_data_code_window_t2

0x0f2e,	// (0x000205f2) popup_query_data_code_window_t3_ParamLimits

0x0f2e,	// (0x000205f2) popup_query_data_code_window_t3

0x0f44,	// (0x00020608) popup_query_data_code_window_t4_ParamLimits

0x0f44,	// (0x00020608) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002ec4e) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002ec4e) popup_query_data_code_window_t

0x369d,	// (0x00022d61) list_single_midp_graphic_pane_g3

0x0f5e,	// (0x00020622) query_popup_data_pane_cp2_ParamLimits

0x0f71,	// (0x00020635) query_popup_pane_cp2_ParamLimits

0x0f71,	// (0x00020635) query_popup_pane_cp2

0x0c4c,	// (0x00020310) bg_popup_window_pane_cp11

0x9b13,	// (0x000291d7) heading_pane_cp5

0x1007,	// (0x000206cb) listscroll_popup_info_pane

0x0c4c,	// (0x00020310) input_focus_pane_cp3

0x0f8c,	// (0x00020650) query_popup_pane_t1

0x0f9a,	// (0x0002065e) list_popup_info_pane_ParamLimits

0x0f9a,	// (0x0002065e) list_popup_info_pane

0x0fa9,	// (0x0002066d) listscroll_popup_info_pane_g1

0x0fb1,	// (0x00020675) scroll_pane_cp7

0x0fbb,	// (0x0002067f) popup_info_list_pane_t1_ParamLimits

0x0fbb,	// (0x0002067f) popup_info_list_pane_t1

0x0fd5,	// (0x00020699) popup_info_list_pane_t2_ParamLimits

0x0fd5,	// (0x00020699) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002ec57) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002ec57) popup_info_list_pane_t

0x0c4c,	// (0x00020310) bg_popup_window_pane_cp12

0xaef2,	// (0x0002a5b6) find_popup_pane

0x0cb4,	// (0x00020378) bg_popup_window_pane_cp3

0x0fef,	// (0x000206b3) heading_pane_cp3

0x0ffb,	// (0x000206bf) listscroll_popup_graphic_pane

0x0c4c,	// (0x00020310) bg_popup_window_pane_cp4

0x6aba,	// (0x0002617e) heading_pane_cp4

0x1007,	// (0x000206cb) listscroll_popup_colour_pane

0x6ac4,	// (0x00026188) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6ac4,	// (0x00026188) cell_large_graphic_colour_none_popup_pane

0x6ad8,	// (0x0002619c) grid_large_graphic_colour_popup_pane_ParamLimits

0x6ad8,	// (0x0002619c) grid_large_graphic_colour_popup_pane

0x6b04,	// (0x000261c8) listscroll_popup_colour_pane_g1_ParamLimits

0x6b04,	// (0x000261c8) listscroll_popup_colour_pane_g1

0x6b1b,	// (0x000261df) listscroll_popup_colour_pane_g2_ParamLimits

0x6b1b,	// (0x000261df) listscroll_popup_colour_pane_g2

0x6b32,	// (0x000261f6) listscroll_popup_colour_pane_g3_ParamLimits

0x6b32,	// (0x000261f6) listscroll_popup_colour_pane_g3

0x6b42,	// (0x00026206) listscroll_popup_colour_pane_g4_ParamLimits

0x6b42,	// (0x00026206) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002ec5c) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002ec5c) listscroll_popup_colour_pane_g

0x100f,	// (0x000206d3) scroll_pane_cp6_ParamLimits

0x100f,	// (0x000206d3) scroll_pane_cp6

0x6b56,	// (0x0002621a) cell_large_graphic_colour_popup_pane_ParamLimits

0x6b56,	// (0x0002621a) cell_large_graphic_colour_popup_pane

0x1021,	// (0x000206e5) cell_large_graphic_colour_none_popup_pane_t1

0x0c4c,	// (0x00020310) grid_highlight_pane_cp5

0x1030,	// (0x000206f4) cell_large_graphic_colour_popup_pane_g1

0x1038,	// (0x000206fc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002ec65) cell_large_graphic_colour_popup_pane_g

0x1040,	// (0x00020704) cell_large_graphic_colour_popup_pane_g2_copy1

0x1049,	// (0x0002070d) grid_highlight_pane_cp4

0x1051,	// (0x00020715) bg_popup_window_pane_cp8_ParamLimits

0x1051,	// (0x00020715) bg_popup_window_pane_cp8

0x106c,	// (0x00020730) popup_snote_single_text_window_g1_ParamLimits

0x106c,	// (0x00020730) popup_snote_single_text_window_g1

0x107e,	// (0x00020742) popup_snote_single_text_window_t1_ParamLimits

0x107e,	// (0x00020742) popup_snote_single_text_window_t1

0x1091,	// (0x00020755) popup_snote_single_text_window_t2_ParamLimits

0x1091,	// (0x00020755) popup_snote_single_text_window_t2

0x10a4,	// (0x00020768) popup_snote_single_text_window_t3_ParamLimits

0x10a4,	// (0x00020768) popup_snote_single_text_window_t3

0x10dd,	// (0x000207a1) popup_snote_single_text_window_t4_ParamLimits

0x10dd,	// (0x000207a1) popup_snote_single_text_window_t4

0x1111,	// (0x000207d5) popup_snote_single_text_window_t5_ParamLimits

0x1111,	// (0x000207d5) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002ec6a) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002ec6a) popup_snote_single_text_window_t

0x1140,	// (0x00020804) bg_popup_window_pane_cp9_ParamLimits

0x1140,	// (0x00020804) bg_popup_window_pane_cp9

0x106c,	// (0x00020730) popup_snote_single_graphic_window_g1_ParamLimits

0x106c,	// (0x00020730) popup_snote_single_graphic_window_g1

0x114e,	// (0x00020812) popup_snote_single_graphic_window_g2_ParamLimits

0x114e,	// (0x00020812) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002ec75) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002ec75) popup_snote_single_graphic_window_g

0x115a,	// (0x0002081e) popup_snote_single_graphic_window_t1_ParamLimits

0x115a,	// (0x0002081e) popup_snote_single_graphic_window_t1

0x116d,	// (0x00020831) popup_snote_single_graphic_window_t2_ParamLimits

0x116d,	// (0x00020831) popup_snote_single_graphic_window_t2

0x1180,	// (0x00020844) popup_snote_single_graphic_window_t3_ParamLimits

0x1180,	// (0x00020844) popup_snote_single_graphic_window_t3

0x11b9,	// (0x0002087d) popup_snote_single_graphic_window_t4_ParamLimits

0x11b9,	// (0x0002087d) popup_snote_single_graphic_window_t4

0x11ed,	// (0x000208b1) popup_snote_single_graphic_window_t5_ParamLimits

0x11ed,	// (0x000208b1) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002ec7a) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002ec7a) popup_snote_single_graphic_window_t

0xae30,	// (0x0002a4f4) grid_graphic_popup_pane_ParamLimits

0xae30,	// (0x0002a4f4) grid_graphic_popup_pane

0xae5e,	// (0x0002a522) listscroll_popup_graphic_pane_g1_ParamLimits

0xae5e,	// (0x0002a522) listscroll_popup_graphic_pane_g1

0xae72,	// (0x0002a536) listscroll_popup_graphic_pane_g2_ParamLimits

0xae72,	// (0x0002a536) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002f06f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002f06f) listscroll_popup_graphic_pane_g

0xae86,	// (0x0002a54a) scroll_pane_cp5

0xadd8,	// (0x0002a49c) cell_graphic_popup_pane_ParamLimits

0xadd8,	// (0x0002a49c) cell_graphic_popup_pane

0xadb9,	// (0x0002a47d) cell_graphic_popup_pane_g1

0xadc1,	// (0x0002a485) cell_graphic_popup_pane_g2

0x1040,	// (0x00020704) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002f068) cell_graphic_popup_pane_g

0xadca,	// (0x0002a48e) cell_graphic_popup_pane_t2

0x1049,	// (0x0002070d) grid_highlight_pane_cp3

0x122e,	// (0x000208f2) list_gen_pane_ParamLimits

0x122e,	// (0x000208f2) list_gen_pane

0x1256,	// (0x0002091a) scroll_pane

0xad11,	// (0x0002a3d5) bg_list_pane_g1_ParamLimits

0xad11,	// (0x0002a3d5) bg_list_pane_g1

0xad2e,	// (0x0002a3f2) bg_list_pane_g2_ParamLimits

0xad2e,	// (0x0002a3f2) bg_list_pane_g2

0xad43,	// (0x0002a407) bg_list_pane_g3_ParamLimits

0xad43,	// (0x0002a407) bg_list_pane_g3

0xad57,	// (0x0002a41b) bg_list_pane_g4_ParamLimits

0xad57,	// (0x0002a41b) bg_list_pane_g4

0xad6b,	// (0x0002a42f) bg_list_pane_g5_ParamLimits

0xad6b,	// (0x0002a42f) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002f05d) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002f05d) bg_list_pane_g

0x5c57,	// (0x0002531b) list_double2_graphic_large_graphic_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double2_graphic_large_graphic_pane

0x5c57,	// (0x0002531b) list_double2_graphic_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double2_graphic_pane

0x5c57,	// (0x0002531b) list_double2_large_graphic_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double2_large_graphic_pane

0x5c57,	// (0x0002531b) list_double2_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double2_pane

0x5c57,	// (0x0002531b) list_double_graphic_heading_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double_graphic_heading_pane

0x5c57,	// (0x0002531b) list_double_graphic_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double_graphic_pane

0x5c57,	// (0x0002531b) list_double_heading_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double_heading_pane

0x5c57,	// (0x0002531b) list_double_large_graphic_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double_large_graphic_pane

0x5c57,	// (0x0002531b) list_double_number_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double_number_pane

0x5c57,	// (0x0002531b) list_double_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double_pane

0x5c57,	// (0x0002531b) list_double_time_pane_ParamLimits

0x5c57,	// (0x0002531b) list_double_time_pane

0x5c57,	// (0x0002531b) list_setting_number_pane_ParamLimits

0x5c57,	// (0x0002531b) list_setting_number_pane

0x5c57,	// (0x0002531b) list_setting_pane_ParamLimits

0x5c57,	// (0x0002531b) list_setting_pane

0xaccd,	// (0x0002a391) list_single_2graphic_pane_ParamLimits

0xaccd,	// (0x0002a391) list_single_2graphic_pane

0xaccd,	// (0x0002a391) list_single_graphic_heading_pane_ParamLimits

0xaccd,	// (0x0002a391) list_single_graphic_heading_pane

0xaccd,	// (0x0002a391) list_single_graphic_pane_ParamLimits

0xaccd,	// (0x0002a391) list_single_graphic_pane

0xaccd,	// (0x0002a391) list_single_heading_pane_ParamLimits

0xaccd,	// (0x0002a391) list_single_heading_pane

0x5c96,	// (0x0002535a) list_single_large_graphic_pane_ParamLimits

0x5c96,	// (0x0002535a) list_single_large_graphic_pane

0xaccd,	// (0x0002a391) list_single_number_heading_pane_ParamLimits

0xaccd,	// (0x0002a391) list_single_number_heading_pane

0xaccd,	// (0x0002a391) list_single_number_pane_ParamLimits

0xaccd,	// (0x0002a391) list_single_number_pane

0xaccd,	// (0x0002a391) list_single_pane_ParamLimits

0xaccd,	// (0x0002a391) list_single_pane

0x0c4c,	// (0x00020310) list_highlight_pane_cp1

0x52fd,	// (0x000249c1) list_single_pane_g1_ParamLimits

0x52fd,	// (0x000249c1) list_single_pane_g1

0x5309,	// (0x000249cd) list_single_pane_g2_ParamLimits

0x5309,	// (0x000249cd) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002ec8c) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002ec8c) list_single_pane_g

0x5c41,	// (0x00025305) list_single_pane_t1_ParamLimits

0x5c41,	// (0x00025305) list_single_pane_t1

0x52fd,	// (0x000249c1) list_single_number_pane_g1_ParamLimits

0x52fd,	// (0x000249c1) list_single_number_pane_g1

0x5309,	// (0x000249cd) list_single_number_pane_g2_ParamLimits

0x5309,	// (0x000249cd) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002ec8c) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002ec8c) list_single_number_pane_g

0x5beb,	// (0x000252af) list_single_number_pane_t1_ParamLimits

0x5beb,	// (0x000252af) list_single_number_pane_t1

0x5c01,	// (0x000252c5) list_single_number_pane_t2_ParamLimits

0x5c01,	// (0x000252c5) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002f01e) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002f01e) list_single_number_pane_t

0x52f1,	// (0x000249b5) list_single_graphic_pane_g1_ParamLimits

0x52f1,	// (0x000249b5) list_single_graphic_pane_g1

0x52fd,	// (0x000249c1) list_single_graphic_pane_g2_ParamLimits

0x52fd,	// (0x000249c1) list_single_graphic_pane_g2

0x5309,	// (0x000249cd) list_single_graphic_pane_g3_ParamLimits

0x5309,	// (0x000249cd) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002ec85) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002ec85) list_single_graphic_pane_g

0x5315,	// (0x000249d9) list_single_graphic_pane_t1_ParamLimits

0x5315,	// (0x000249d9) list_single_graphic_pane_t1

0x52fd,	// (0x000249c1) list_single_heading_pane_g1_ParamLimits

0x52fd,	// (0x000249c1) list_single_heading_pane_g1

0x5309,	// (0x000249cd) list_single_heading_pane_g2_ParamLimits

0x5309,	// (0x000249cd) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ec8c) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ec8c) list_single_heading_pane_g

0x532b,	// (0x000249ef) list_single_heading_pane_t1_ParamLimits

0x532b,	// (0x000249ef) list_single_heading_pane_t1

0x5341,	// (0x00024a05) list_single_heading_pane_t2_ParamLimits

0x5341,	// (0x00024a05) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002ec91) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002ec91) list_single_heading_pane_t

0x52fd,	// (0x000249c1) list_single_number_heading_pane_g1_ParamLimits

0x52fd,	// (0x000249c1) list_single_number_heading_pane_g1

0x5309,	// (0x000249cd) list_single_number_heading_pane_g2_ParamLimits

0x5309,	// (0x000249cd) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ec8c) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ec8c) list_single_number_heading_pane_g

0x532b,	// (0x000249ef) list_single_number_heading_pane_t1_ParamLimits

0x532b,	// (0x000249ef) list_single_number_heading_pane_t1

0x5353,	// (0x00024a17) list_single_number_heading_pane_t2_ParamLimits

0x5353,	// (0x00024a17) list_single_number_heading_pane_t2

0x5365,	// (0x00024a29) list_single_number_heading_pane_t3_ParamLimits

0x5365,	// (0x00024a29) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002ec96) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002ec96) list_single_number_heading_pane_t

0x5377,	// (0x00024a3b) list_single_graphic_heading_pane_g1_ParamLimits

0x5377,	// (0x00024a3b) list_single_graphic_heading_pane_g1

0x5383,	// (0x00024a47) list_single_graphic_heading_pane_g4_ParamLimits

0x5383,	// (0x00024a47) list_single_graphic_heading_pane_g4

0x5309,	// (0x000249cd) list_single_graphic_heading_pane_g5_ParamLimits

0x5309,	// (0x000249cd) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002ec9d) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002ec9d) list_single_graphic_heading_pane_g

0x532b,	// (0x000249ef) list_single_graphic_heading_pane_t1_ParamLimits

0x532b,	// (0x000249ef) list_single_graphic_heading_pane_t1

0x5394,	// (0x00024a58) list_single_graphic_heading_pane_t2_ParamLimits

0x5394,	// (0x00024a58) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002eca4) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002eca4) list_single_graphic_heading_pane_t

0x53a6,	// (0x00024a6a) list_single_large_graphic_pane_g1_ParamLimits

0x53a6,	// (0x00024a6a) list_single_large_graphic_pane_g1

0x52fd,	// (0x000249c1) list_single_large_graphic_pane_g2_ParamLimits

0x52fd,	// (0x000249c1) list_single_large_graphic_pane_g2

0x5309,	// (0x000249cd) list_single_large_graphic_pane_g3_ParamLimits

0x5309,	// (0x000249cd) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002eca9) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002eca9) list_single_large_graphic_pane_g

0x9cbc,	// (0x00029380) wait_border_pane_g2_copy1

0x53b2,	// (0x00024a76) list_single_large_graphic_pane_g4_cp2

0x532b,	// (0x000249ef) list_single_large_graphic_pane_t1_ParamLimits

0x532b,	// (0x000249ef) list_single_large_graphic_pane_t1

0x53ba,	// (0x00024a7e) list_double_pane_g1_ParamLimits

0x53ba,	// (0x00024a7e) list_double_pane_g1

0x53c6,	// (0x00024a8a) list_double_pane_g2_ParamLimits

0x53c6,	// (0x00024a8a) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002ecb0) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002ecb0) list_double_pane_g

0x53d2,	// (0x00024a96) list_double_pane_t1_ParamLimits

0x53d2,	// (0x00024a96) list_double_pane_t1

0x53e8,	// (0x00024aac) list_double_pane_t2_ParamLimits

0x53e8,	// (0x00024aac) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002ecb5) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002ecb5) list_double_pane_t

0x53fa,	// (0x00024abe) list_double2_pane_g1_ParamLimits

0x53fa,	// (0x00024abe) list_double2_pane_g1

0x53c6,	// (0x00024a8a) list_double2_pane_g2_ParamLimits

0x53c6,	// (0x00024a8a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002ecba) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002ecba) list_double2_pane_g

0x53d2,	// (0x00024a96) list_double2_pane_t1_ParamLimits

0x53d2,	// (0x00024a96) list_double2_pane_t1

0x540b,	// (0x00024acf) list_double2_pane_t2_ParamLimits

0x540b,	// (0x00024acf) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002ecbf) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002ecbf) list_double2_pane_t

0x53ba,	// (0x00024a7e) list_double_number_pane_g1_ParamLimits

0x53ba,	// (0x00024a7e) list_double_number_pane_g1

0x53c6,	// (0x00024a8a) list_double_number_pane_g2_ParamLimits

0x53c6,	// (0x00024a8a) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002ecb0) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002ecb0) list_double_number_pane_g

0x541d,	// (0x00024ae1) list_double_number_pane_t1_ParamLimits

0x541d,	// (0x00024ae1) list_double_number_pane_t1

0x542f,	// (0x00024af3) list_double_number_pane_t2_ParamLimits

0x542f,	// (0x00024af3) list_double_number_pane_t2

0x5445,	// (0x00024b09) list_double_number_pane_t3_ParamLimits

0x5445,	// (0x00024b09) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002ecc4) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002ecc4) list_double_number_pane_t

0x5457,	// (0x00024b1b) list_double_graphic_pane_g1_ParamLimits

0x5457,	// (0x00024b1b) list_double_graphic_pane_g1

0x5463,	// (0x00024b27) list_double_graphic_pane_g2_ParamLimits

0x5463,	// (0x00024b27) list_double_graphic_pane_g2

0x5472,	// (0x00024b36) list_double_graphic_pane_g3_ParamLimits

0x5472,	// (0x00024b36) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002eccb) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002eccb) list_double_graphic_pane_g

0x548a,	// (0x00024b4e) list_double_graphic_pane_t1_ParamLimits

0x548a,	// (0x00024b4e) list_double_graphic_pane_t1

0x54a0,	// (0x00024b64) list_double_graphic_pane_t2_ParamLimits

0x54a0,	// (0x00024b64) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002ecd4) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002ecd4) list_double_graphic_pane_t

0x5457,	// (0x00024b1b) list_double2_graphic_pane_g1_ParamLimits

0x5457,	// (0x00024b1b) list_double2_graphic_pane_g1

0x54b2,	// (0x00024b76) list_double2_graphic_pane_g2_ParamLimits

0x54b2,	// (0x00024b76) list_double2_graphic_pane_g2

0x54be,	// (0x00024b82) list_double2_graphic_pane_g3_ParamLimits

0x54be,	// (0x00024b82) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002ecd9) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002ecd9) list_double2_graphic_pane_g

0x542f,	// (0x00024af3) list_double2_graphic_pane_t1_ParamLimits

0x542f,	// (0x00024af3) list_double2_graphic_pane_t1

0x54ca,	// (0x00024b8e) list_double2_graphic_pane_t2_ParamLimits

0x54ca,	// (0x00024b8e) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002ece0) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002ece0) list_double2_graphic_pane_t

0x54dc,	// (0x00024ba0) list_double_large_graphic_pane_g1_ParamLimits

0x54dc,	// (0x00024ba0) list_double_large_graphic_pane_g1

0x53fa,	// (0x00024abe) list_double_large_graphic_pane_g2_ParamLimits

0x53fa,	// (0x00024abe) list_double_large_graphic_pane_g2

0x53c6,	// (0x00024a8a) list_double_large_graphic_pane_g3_ParamLimits

0x53c6,	// (0x00024a8a) list_double_large_graphic_pane_g3

0x5507,	// (0x00024bcb) list_double_large_graphic_pane_g4_ParamLimits

0x5507,	// (0x00024bcb) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002ece5) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002ece5) list_double_large_graphic_pane_g

0x552f,	// (0x00024bf3) list_double_large_graphic_pane_t1_ParamLimits

0x552f,	// (0x00024bf3) list_double_large_graphic_pane_t1

0x5548,	// (0x00024c0c) list_double_large_graphic_pane_t2_ParamLimits

0x5548,	// (0x00024c0c) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002ecf0) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002ecf0) list_double_large_graphic_pane_t

0x555a,	// (0x00024c1e) list_double2_large_graphic_pane_g1_ParamLimits

0x555a,	// (0x00024c1e) list_double2_large_graphic_pane_g1

0x53fa,	// (0x00024abe) list_double2_large_graphic_pane_g2_ParamLimits

0x53fa,	// (0x00024abe) list_double2_large_graphic_pane_g2

0x53c6,	// (0x00024a8a) list_double2_large_graphic_pane_g3_ParamLimits

0x53c6,	// (0x00024a8a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002ecf5) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002ecf5) list_double2_large_graphic_pane_g

0x5566,	// (0x00024c2a) list_double2_large_graphic_pane_t1_ParamLimits

0x5566,	// (0x00024c2a) list_double2_large_graphic_pane_t1

0x557c,	// (0x00024c40) list_double2_large_graphic_pane_t2_ParamLimits

0x557c,	// (0x00024c40) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002ecfc) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002ecfc) list_double2_large_graphic_pane_t

0x558e,	// (0x00024c52) list_double_heading_pane_g1_ParamLimits

0x558e,	// (0x00024c52) list_double_heading_pane_g1

0x559f,	// (0x00024c63) list_double_heading_pane_g2_ParamLimits

0x559f,	// (0x00024c63) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002ed01) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002ed01) list_double_heading_pane_g

0x55ab,	// (0x00024c6f) list_double_heading_pane_t1_ParamLimits

0x55ab,	// (0x00024c6f) list_double_heading_pane_t1

0x55c1,	// (0x00024c85) list_double_heading_pane_t2_ParamLimits

0x55c1,	// (0x00024c85) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002ed06) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002ed06) list_double_heading_pane_t

0x55d3,	// (0x00024c97) list_double_graphic_heading_pane_g1_ParamLimits

0x55d3,	// (0x00024c97) list_double_graphic_heading_pane_g1

0x558e,	// (0x00024c52) list_double_graphic_heading_pane_g2_ParamLimits

0x558e,	// (0x00024c52) list_double_graphic_heading_pane_g2

0x559f,	// (0x00024c63) list_double_graphic_heading_pane_g3_ParamLimits

0x559f,	// (0x00024c63) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002ed0b) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002ed0b) list_double_graphic_heading_pane_g

0x55df,	// (0x00024ca3) list_double_graphic_heading_pane_t1_ParamLimits

0x55df,	// (0x00024ca3) list_double_graphic_heading_pane_t1

0x55f5,	// (0x00024cb9) list_double_graphic_heading_pane_t2_ParamLimits

0x55f5,	// (0x00024cb9) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002ed12) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002ed12) list_double_graphic_heading_pane_t

0x53fa,	// (0x00024abe) list_double_time_pane_g1_ParamLimits

0x53fa,	// (0x00024abe) list_double_time_pane_g1

0x53c6,	// (0x00024a8a) list_double_time_pane_g2_ParamLimits

0x53c6,	// (0x00024a8a) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0002ecba) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0002ecba) list_double_time_pane_g

0x5566,	// (0x00024c2a) list_double_time_pane_t1_ParamLimits

0x5566,	// (0x00024c2a) list_double_time_pane_t1

0x5607,	// (0x00024ccb) list_double_time_pane_t2_ParamLimits

0x5607,	// (0x00024ccb) list_double_time_pane_t2

0x5619,	// (0x00024cdd) list_double_time_pane_t3_ParamLimits

0x5619,	// (0x00024cdd) list_double_time_pane_t3

0x562b,	// (0x00024cef) list_double_time_pane_t4_ParamLimits

0x562b,	// (0x00024cef) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0002ed17) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0002ed17) list_double_time_pane_t

0x563d,	// (0x00024d01) list_setting_pane_g1_ParamLimits

0x563d,	// (0x00024d01) list_setting_pane_g1

0x5649,	// (0x00024d0d) list_setting_pane_g2_ParamLimits

0x5649,	// (0x00024d0d) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0002ed20) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0002ed20) list_setting_pane_g

0x5655,	// (0x00024d19) list_setting_pane_t1_ParamLimits

0x5655,	// (0x00024d19) list_setting_pane_t1

0x566f,	// (0x00024d33) list_setting_pane_t2_ParamLimits

0x566f,	// (0x00024d33) list_setting_pane_t2

0x0002,

0xf661,	// (0x0002ed25) list_setting_pane_t_ParamLimits

0xf661,	// (0x0002ed25) list_setting_pane_t

0x56ae,	// (0x00024d72) set_value_pane_cp_ParamLimits

0x56ae,	// (0x00024d72) set_value_pane_cp

0x56bc,	// (0x00024d80) list_setting_number_pane_g1_ParamLimits

0x56bc,	// (0x00024d80) list_setting_number_pane_g1

0x56c8,	// (0x00024d8c) list_setting_number_pane_g2_ParamLimits

0x56c8,	// (0x00024d8c) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0002ed2c) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0002ed2c) list_setting_number_pane_g

0x56d4,	// (0x00024d98) list_setting_number_pane_t1_ParamLimits

0x56d4,	// (0x00024d98) list_setting_number_pane_t1

0x56ed,	// (0x00024db1) list_setting_number_pane_t2_ParamLimits

0x56ed,	// (0x00024db1) list_setting_number_pane_t2

0x5707,	// (0x00024dcb) list_setting_number_pane_t3_ParamLimits

0x5707,	// (0x00024dcb) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0002ed31) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0002ed31) list_setting_number_pane_t

0x56ae,	// (0x00024d72) set_value_pane_ParamLimits

0x56ae,	// (0x00024d72) set_value_pane

0x12ab,	// (0x0002096f) bg_set_opt_pane_ParamLimits

0x12ab,	// (0x0002096f) bg_set_opt_pane

0x574a,	// (0x00024e0e) set_value_pane_t1

0x12da,	// (0x0002099e) slider_set_pane_cp3

0x12e3,	// (0x000209a7) volume_small_pane_cp

0x12ec,	// (0x000209b0) list_form_gen_pane

0x12f5,	// (0x000209b9) scroll_pane_cp8

0x5760,	// (0x00024e24) form_field_data_pane_ParamLimits

0x5760,	// (0x00024e24) form_field_data_pane

0x5786,	// (0x00024e4a) form_field_data_wide_pane_ParamLimits

0x5786,	// (0x00024e4a) form_field_data_wide_pane

0x57ab,	// (0x00024e6f) form_field_popup_pane_ParamLimits

0x57ab,	// (0x00024e6f) form_field_popup_pane

0x57cd,	// (0x00024e91) form_field_popup_wide_pane_ParamLimits

0x57cd,	// (0x00024e91) form_field_popup_wide_pane

0x57ee,	// (0x00024eb2) form_field_slider_pane_ParamLimits

0x57ee,	// (0x00024eb2) form_field_slider_pane

0x5801,	// (0x00024ec5) form_field_slider_wide_pane_ParamLimits

0x5801,	// (0x00024ec5) form_field_slider_wide_pane

0x2caf,	// (0x00022373) data_form_pane

0x581e,	// (0x00024ee2) form_field_data_pane_t1

0x2cbb,	// (0x0002237f) input_focus_pane

0x5838,	// (0x00024efc) data_form_wide_pane

0x5855,	// (0x00024f19) form_field_data_wide_pane_t1

0x105e,	// (0x00020722) input_focus_pane_cp6

0x5877,	// (0x00024f3b) form_field_popup_pane_t1

0x2cbb,	// (0x0002237f) input_focus_pane_cp7

0x2d28,	// (0x000223ec) list_form_pane

0x5899,	// (0x00024f5d) form_field_popup_wide_pane_t1

0x2cbb,	// (0x0002237f) input_focus_pane_cp8

0x2d51,	// (0x00022415) list_form_wide_pane

0x58b6,	// (0x00024f7a) form_field_slider_pane_t1_ParamLimits

0x58b6,	// (0x00024f7a) form_field_slider_pane_t1

0x58ce,	// (0x00024f92) form_field_slider_pane_t2_ParamLimits

0x58ce,	// (0x00024f92) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0002ed41) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0002ed41) form_field_slider_pane_t

0x0ca6,	// (0x0002036a) input_focus_pane_cp9_ParamLimits

0x0ca6,	// (0x0002036a) input_focus_pane_cp9

0x58e3,	// (0x00024fa7) slider_cont_pane_ParamLimits

0x58e3,	// (0x00024fa7) slider_cont_pane

0x2d60,	// (0x00022424) form_field_slider_wide_pane_t1_ParamLimits

0x2d60,	// (0x00022424) form_field_slider_wide_pane_t1

0x58f7,	// (0x00024fbb) form_field_slider_wide_pane_t2_ParamLimits

0x58f7,	// (0x00024fbb) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002ed46) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002ed46) form_field_slider_wide_pane_t

0x0ca6,	// (0x0002036a) input_focus_pane_cp10_ParamLimits

0x0ca6,	// (0x0002036a) input_focus_pane_cp10

0x5909,	// (0x00024fcd) slider_cont_pane_cp1_ParamLimits

0x5909,	// (0x00024fcd) slider_cont_pane_cp1

0x591d,	// (0x00024fe1) slider_form_pane_cp

0x2d84,	// (0x00022448) input_focus_pane_g1

0x2d8c,	// (0x00022450) input_focus_pane_g2

0x2d94,	// (0x00022458) input_focus_pane_g3

0x2d9c,	// (0x00022460) input_focus_pane_g4

0x2da4,	// (0x00022468) input_focus_pane_g5

0x2dac,	// (0x00022470) input_focus_pane_g6

0x2db4,	// (0x00022478) input_focus_pane_g7

0x2dbc,	// (0x00022480) input_focus_pane_g8

0x2dc4,	// (0x00022488) input_focus_pane_g9

0x0c42,	// (0x00020306) input_focus_pane_g10

0x0009,

0xf687,	// (0x0002ed4b) input_focus_pane_g

0x9cc5,	// (0x00029389) wait_border_pane_g3_copy1

0x5925,	// (0x00024fe9) data_form_pane_t1

0x0c42,	// (0x00020306) wait_anim_pane_g1_copy1

0x5c13,	// (0x000252d7) data_form_wide_pane_t1

0x5942,	// (0x00025006) list_form_graphic_pane_cp_ParamLimits

0x5942,	// (0x00025006) list_form_graphic_pane_cp

0xac24,	// (0x0002a2e8) slider_form_pane_g1

0xac2d,	// (0x0002a2f1) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002f04e) slider_form_pane_g

0x5957,	// (0x0002501b) list_form_graphic_pane_ParamLimits

0x5957,	// (0x0002501b) list_form_graphic_pane

0x5969,	// (0x0002502d) list_form_graphic_pane_g1

0x5971,	// (0x00025035) list_form_graphic_pane_t1_ParamLimits

0x5971,	// (0x00025035) list_form_graphic_pane_t1

0x0cb4,	// (0x00020378) list_highlight_pane_cp5_ParamLimits

0x0cb4,	// (0x00020378) list_highlight_pane_cp5

0x5986,	// (0x0002504a) find_pane_g1

0x2dfb,	// (0x000224bf) input_find_pane

0x598f,	// (0x00025053) input_find_pane_g1_ParamLimits

0x598f,	// (0x00025053) input_find_pane_g1

0x599b,	// (0x0002505f) input_find_pane_t1_ParamLimits

0x599b,	// (0x0002505f) input_find_pane_t1

0x59b0,	// (0x00025074) input_find_pane_t2_ParamLimits

0x59b0,	// (0x00025074) input_find_pane_t2

0x0001,

0xf69c,	// (0x0002ed60) input_find_pane_t_ParamLimits

0xf69c,	// (0x0002ed60) input_find_pane_t

0x2e04,	// (0x000224c8) input_focus_pane_cp5_ParamLimits

0x2e04,	// (0x000224c8) input_focus_pane_cp5

0x2e12,	// (0x000224d6) bg_popup_window_pane_cp2_ParamLimits

0x2e12,	// (0x000224d6) bg_popup_window_pane_cp2

0x2e1f,	// (0x000224e3) listscroll_menu_pane_ParamLimits

0x2e1f,	// (0x000224e3) listscroll_menu_pane

0x6b91,	// (0x00026255) popup_submenu_window_ParamLimits

0x6b91,	// (0x00026255) popup_submenu_window

0x2e2b,	// (0x000224ef) find_popup_pane_g1

0x2e33,	// (0x000224f7) input_popup_find_pane_cp

0x2e04,	// (0x000224c8) input_focus_pane_cp4_ParamLimits

0x2e04,	// (0x000224c8) input_focus_pane_cp4

0x2e3d,	// (0x00022501) input_popup_find_pane_t1_ParamLimits

0x2e3d,	// (0x00022501) input_popup_find_pane_t1

0x0c4c,	// (0x00020310) bg_popup_sub_pane_cp

0x2e6b,	// (0x0002252f) listscroll_popup_sub_pane

0x2e73,	// (0x00022537) list_submenu_pane_ParamLimits

0x2e73,	// (0x00022537) list_submenu_pane

0x2e84,	// (0x00022548) scroll_pane_cp4

0x2e8c,	// (0x00022550) list_single_popup_submenu_pane_ParamLimits

0x2e8c,	// (0x00022550) list_single_popup_submenu_pane

0x2ea1,	// (0x00022565) list_single_popup_submenu_pane_g1

0x2ea9,	// (0x0002256d) list_single_popup_submenu_pane_t1_ParamLimits

0x2ea9,	// (0x0002256d) list_single_popup_submenu_pane_t1

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp1_ParamLimits

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp1

0x6bcf,	// (0x00026293) tabs_2_active_pane_g1

0x6bd7,	// (0x0002629b) tabs_2_active_pane_t1

0x0cb4,	// (0x00020378) bg_passive_tab_pane_cp1_ParamLimits

0x0cb4,	// (0x00020378) bg_passive_tab_pane_cp1

0x6bcf,	// (0x00026293) tabs_2_passive_pane_g1

0x6bd7,	// (0x0002629b) tabs_2_passive_pane_t1

0x383f,	// (0x00022f03) bg_active_tab_pane_cp4

0x6be9,	// (0x000262ad) tabs_2_long_active_pane_t1

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp4

0x83db,	// (0x00027a9f) list_single_midp_graphic_pane_g4_ParamLimits

0x383f,	// (0x00022f03) bg_active_tab_pane_cp5

0x6c08,	// (0x000262cc) tabs_3_long_active_pane_t1

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp5

0x83db,	// (0x00027a9f) list_single_midp_graphic_pane_g4

0x0cb4,	// (0x00020378) bg_popup_window_pane_cp13_ParamLimits

0x0cb4,	// (0x00020378) bg_popup_window_pane_cp13

0x2ec7,	// (0x0002258b) listscroll_popup_fast_pane_ParamLimits

0x2ec7,	// (0x0002258b) listscroll_popup_fast_pane

0x2ed6,	// (0x0002259a) grid_popup_fast_pane_ParamLimits

0x2ed6,	// (0x0002259a) grid_popup_fast_pane

0x2ee8,	// (0x000225ac) scroll_pane_cp9_ParamLimits

0x2ee8,	// (0x000225ac) scroll_pane_cp9

0xc5a5,	// (0x0002bc69) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc5a5,	// (0x0002bc69) list_single_graphic_hl_pane_t1_cp2

0x2f0c,	// (0x000225d0) input_focus_pane_cp20_ParamLimits

0x2f0c,	// (0x000225d0) input_focus_pane_cp20

0x2f1a,	// (0x000225de) query_popup_data_pane_t1_ParamLimits

0x2f1a,	// (0x000225de) query_popup_data_pane_t1

0x2f2d,	// (0x000225f1) query_popup_data_pane_t2_ParamLimits

0x2f2d,	// (0x000225f1) query_popup_data_pane_t2

0x2f73,	// (0x00022637) query_popup_data_pane_t3_ParamLimits

0x2f73,	// (0x00022637) query_popup_data_pane_t3

0x2fb4,	// (0x00022678) query_popup_data_pane_t4_ParamLimits

0x2fb4,	// (0x00022678) query_popup_data_pane_t4

0x2ff0,	// (0x000226b4) query_popup_data_pane_t5_ParamLimits

0x2ff0,	// (0x000226b4) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002ed65) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002ed65) query_popup_data_pane_t

0x2d84,	// (0x00022448) bg_set_opt_pane_g1

0x2d8c,	// (0x00022450) bg_set_opt_pane_g2

0x2d94,	// (0x00022458) bg_set_opt_pane_g3

0x2d9c,	// (0x00022460) bg_set_opt_pane_g4

0x2da4,	// (0x00022468) bg_set_opt_pane_g5

0x2dac,	// (0x00022470) bg_set_opt_pane_g6

0x2db4,	// (0x00022478) bg_set_opt_pane_g7

0x2dbc,	// (0x00022480) bg_set_opt_pane_g8

0x2dc4,	// (0x00022488) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0002ed70) bg_set_opt_pane_g

0x707c,	// (0x00026740) control_top_pane_stacon_ParamLimits

0x707c,	// (0x00026740) control_top_pane_stacon

0x70cf,	// (0x00026793) signal_pane_stacon_ParamLimits

0x70cf,	// (0x00026793) signal_pane_stacon

0x3595,	// (0x00022c59) stacon_top_pane_g1_ParamLimits

0x3595,	// (0x00022c59) stacon_top_pane_g1

0x70f4,	// (0x000267b8) title_pane_stacon_ParamLimits

0x70f4,	// (0x000267b8) title_pane_stacon

0x711e,	// (0x000267e2) uni_indicator_pane_stacon_ParamLimits

0x711e,	// (0x000267e2) uni_indicator_pane_stacon

0x7136,	// (0x000267fa) battery_pane_stacon_ParamLimits

0x7136,	// (0x000267fa) battery_pane_stacon

0x717a,	// (0x0002683e) control_bottom_pane_stacon_ParamLimits

0x717a,	// (0x0002683e) control_bottom_pane_stacon

0x719d,	// (0x00026861) navi_pane_stacon_ParamLimits

0x719d,	// (0x00026861) navi_pane_stacon

0x35b7,	// (0x00022c7b) stacon_bottom_pane_g1_ParamLimits

0x35b7,	// (0x00022c7b) stacon_bottom_pane_g1

0x6c1a,	// (0x000262de) aid_levels_signal_lsc_ParamLimits

0x6c1a,	// (0x000262de) aid_levels_signal_lsc

0x6c31,	// (0x000262f5) signal_pane_stacon_g1_ParamLimits

0x6c31,	// (0x000262f5) signal_pane_stacon_g1

0x6c45,	// (0x00026309) signal_pane_stacon_g2_ParamLimits

0x6c45,	// (0x00026309) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002ed83) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002ed83) signal_pane_stacon_g

0x6c7a,	// (0x0002633e) title_pane_stacon_t1_ParamLimits

0x6c7a,	// (0x0002633e) title_pane_stacon_t1

0x30cd,	// (0x00022791) uni_indicator_pane_stacon_g1

0x30d7,	// (0x0002279b) uni_indicator_pane_stacon_g2

0x30b9,	// (0x0002277d) uni_indicator_pane_stacon_g3

0x30c3,	// (0x00022787) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0002ed8f) uni_indicator_pane_stacon_g

0x6c9f,	// (0x00026363) control_top_pane_stacon_g1

0x6ca7,	// (0x0002636b) control_top_pane_stacon_t1_ParamLimits

0x6ca7,	// (0x0002636b) control_top_pane_stacon_t1

0x6cde,	// (0x000263a2) aid_levels_battery_lsc_ParamLimits

0x6cde,	// (0x000263a2) aid_levels_battery_lsc

0x6cf6,	// (0x000263ba) battery_pane_stacon_g1_ParamLimits

0x6cf6,	// (0x000263ba) battery_pane_stacon_g1

0x6d09,	// (0x000263cd) battery_pane_stacon_g2_ParamLimits

0x6d09,	// (0x000263cd) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002ed98) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002ed98) battery_pane_stacon_g

0x6d47,	// (0x0002640b) navi_icon_pane_stacon

0x6d5b,	// (0x0002641f) navi_navi_pane_stacon

0x6d47,	// (0x0002640b) navi_text_pane_stacon

0x6c9f,	// (0x00026363) control_bottom_pane_stacon_g1

0x6d71,	// (0x00026435) control_bottom_pane_stacon_t1_ParamLimits

0x6d71,	// (0x00026435) control_bottom_pane_stacon_t1

0x6da8,	// (0x0002646c) grid_app_pane_ParamLimits

0x6da8,	// (0x0002646c) grid_app_pane

0x6dcc,	// (0x00026490) scroll_pane_cp15_ParamLimits

0x6dcc,	// (0x00026490) scroll_pane_cp15

0x6ddf,	// (0x000264a3) cell_app_pane_ParamLimits

0x6ddf,	// (0x000264a3) cell_app_pane

0x6e0b,	// (0x000264cf) cell_app_pane_g1_ParamLimits

0x6e0b,	// (0x000264cf) cell_app_pane_g1

0x3204,	// (0x000228c8) cell_app_pane_g2_ParamLimits

0x3204,	// (0x000228c8) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0002ed9d) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0002ed9d) cell_app_pane_g

0x3210,	// (0x000228d4) cell_app_pane_t1_ParamLimits

0x3210,	// (0x000228d4) cell_app_pane_t1

0x3227,	// (0x000228eb) grid_highlight_pane_ParamLimits

0x3227,	// (0x000228eb) grid_highlight_pane

0x2d84,	// (0x00022448) cell_highlight_pane_g1

0x2d8c,	// (0x00022450) cell_highlight_pane_g2

0x2d94,	// (0x00022458) cell_highlight_pane_g3

0x2d9c,	// (0x00022460) cell_highlight_pane_g4

0x2da4,	// (0x00022468) cell_highlight_pane_g5

0x2dac,	// (0x00022470) cell_highlight_pane_g6

0x2db4,	// (0x00022478) cell_highlight_pane_g7

0x2dbc,	// (0x00022480) cell_highlight_pane_g8

0x2dc4,	// (0x00022488) cell_highlight_pane_g9

0x0c42,	// (0x00020306) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0002ed4b) cell_highlight_pane_g

0x3238,	// (0x000228fc) bg_scroll_pane

0x6e3e,	// (0x00026502) scroll_handle_pane

0x327f,	// (0x00022943) scroll_bg_pane_g1

0x3294,	// (0x00022958) scroll_bg_pane_g2

0x32ac,	// (0x00022970) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002eda2) scroll_bg_pane_g

0x32c1,	// (0x00022985) scroll_handle_focus_pane_ParamLimits

0x32c1,	// (0x00022985) scroll_handle_focus_pane

0x327f,	// (0x00022943) scroll_handle_pane_g1

0x32ce,	// (0x00022992) scroll_handle_pane_g2

0x32ac,	// (0x00022970) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002eda9) scroll_handle_pane_g

0x2e04,	// (0x000224c8) bg_popup_sub_pane_cp21_ParamLimits

0x2e04,	// (0x000224c8) bg_popup_sub_pane_cp21

0x32e2,	// (0x000229a6) popup_fep_japan_predictive_window_t1_ParamLimits

0x32e2,	// (0x000229a6) popup_fep_japan_predictive_window_t1

0x32f9,	// (0x000229bd) popup_fep_japan_predictive_window_t2_ParamLimits

0x32f9,	// (0x000229bd) popup_fep_japan_predictive_window_t2

0x332c,	// (0x000229f0) popup_fep_japan_predictive_window_t3_ParamLimits

0x332c,	// (0x000229f0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0002edb0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0002edb0) popup_fep_japan_predictive_window_t

0x0c4c,	// (0x00020310) bg_popup_sub_pane_cp23

0x3363,	// (0x00022a27) listscroll_japin_cand_pane

0x336b,	// (0x00022a2f) popup_fep_japan_candidate_window_t1

0x3379,	// (0x00022a3d) candidate_pane_ParamLimits

0x3379,	// (0x00022a3d) candidate_pane

0x338b,	// (0x00022a4f) scroll_pane_cp30

0x3395,	// (0x00022a59) list_single_popup_jap_candidate_pane_ParamLimits

0x3395,	// (0x00022a59) list_single_popup_jap_candidate_pane

0x0c4c,	// (0x00020310) list_highlight_pane_cp30

0x33a9,	// (0x00022a6d) list_single_popup_jap_candidate_pane_t1

0x6e67,	// (0x0002652b) level_1_signal

0x6e74,	// (0x00026538) level_2_signal

0x6e81,	// (0x00026545) level_3_signal

0x6e8e,	// (0x00026552) level_4_signal

0x6e9b,	// (0x0002655f) level_5_signal

0x6ea8,	// (0x0002656c) level_6_signal

0x6eb5,	// (0x00026579) level_7_signal

0x6e67,	// (0x0002652b) level_1_battery

0x6e74,	// (0x00026538) level_2_battery

0x6e81,	// (0x00026545) level_3_battery

0x6e8e,	// (0x00026552) level_4_battery

0x6e9b,	// (0x0002655f) level_5_battery

0x6ea8,	// (0x0002656c) level_6_battery

0x6eb5,	// (0x00026579) level_7_battery

0x33d0,	// (0x00022a94) list_menu_pane_ParamLimits

0x33d0,	// (0x00022a94) list_menu_pane

0x33e6,	// (0x00022aaa) scroll_pane_cp25_ParamLimits

0x33e6,	// (0x00022aaa) scroll_pane_cp25

0x33ff,	// (0x00022ac3) list_double2_graphic_pane_cp2_ParamLimits

0x33ff,	// (0x00022ac3) list_double2_graphic_pane_cp2

0x33ff,	// (0x00022ac3) list_double2_large_graphic_pane_cp2_ParamLimits

0x33ff,	// (0x00022ac3) list_double2_large_graphic_pane_cp2

0x33ff,	// (0x00022ac3) list_double2_pane_cp2_ParamLimits

0x33ff,	// (0x00022ac3) list_double2_pane_cp2

0x33ff,	// (0x00022ac3) list_double_graphic_pane_cp2_ParamLimits

0x33ff,	// (0x00022ac3) list_double_graphic_pane_cp2

0x33ff,	// (0x00022ac3) list_double_large_graphic_pane_cp2_ParamLimits

0x33ff,	// (0x00022ac3) list_double_large_graphic_pane_cp2

0x33ff,	// (0x00022ac3) list_double_number_pane_cp2_ParamLimits

0x33ff,	// (0x00022ac3) list_double_number_pane_cp2

0x33ff,	// (0x00022ac3) list_double_pane_cp2_ParamLimits

0x33ff,	// (0x00022ac3) list_double_pane_cp2

0x6ef7,	// (0x000265bb) list_single_2graphic_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_2graphic_pane_cp2

0x6ef7,	// (0x000265bb) list_single_graphic_heading_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_graphic_heading_pane_cp2

0x6ef7,	// (0x000265bb) list_single_graphic_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_graphic_pane_cp2

0x6ef7,	// (0x000265bb) list_single_heading_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_heading_pane_cp2

0x340f,	// (0x00022ad3) list_single_large_graphic_pane_cp2_ParamLimits

0x340f,	// (0x00022ad3) list_single_large_graphic_pane_cp2

0x6ef7,	// (0x000265bb) list_single_number_heading_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_number_heading_pane_cp2

0x6ef7,	// (0x000265bb) list_single_number_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_number_pane_cp2

0x6ef7,	// (0x000265bb) list_single_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_pane_cp2

0x3428,	// (0x00022aec) bg_popup_sub_pane_cp22

0x6fe0,	// (0x000266a4) popup_side_volume_key_window_g1

0x700a,	// (0x000266ce) popup_side_volume_key_window_t1

0x7028,	// (0x000266ec) volume_small_pane_cp1

0x0ca6,	// (0x0002036a) bg_popup_sub_pane_cp24_ParamLimits

0x0ca6,	// (0x0002036a) bg_popup_sub_pane_cp24

0x343e,	// (0x00022b02) fep_china_uni_candidate_pane_ParamLimits

0x343e,	// (0x00022b02) fep_china_uni_candidate_pane

0x3452,	// (0x00022b16) fep_china_uni_entry_pane

0x3462,	// (0x00022b26) popup_fep_china_uni_window_g1

0x347e,	// (0x00022b42) fep_china_uni_entry_pane_g1

0x3488,	// (0x00022b4c) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0002ede1) fep_china_uni_entry_pane_g

0x3492,	// (0x00022b56) fep_entry_item_pane

0x349c,	// (0x00022b60) fep_candidate_item_pane

0x34a4,	// (0x00022b68) fep_china_uni_candidate_pane_g1

0x34ae,	// (0x00022b72) fep_china_uni_candidate_pane_g2

0x34b6,	// (0x00022b7a) fep_china_uni_candidate_pane_g3

0x34be,	// (0x00022b82) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002ede6) fep_china_uni_candidate_pane_g

0x0c42,	// (0x00020306) fep_entry_item_pane_g1

0x34c8,	// (0x00022b8c) fep_entry_item_pane_t1_ParamLimits

0x34c8,	// (0x00022b8c) fep_entry_item_pane_t1

0x34de,	// (0x00022ba2) fep_candidate_item_pane_t1_ParamLimits

0x34de,	// (0x00022ba2) fep_candidate_item_pane_t1

0x34f3,	// (0x00022bb7) fep_candidate_item_pane_t2_ParamLimits

0x34f3,	// (0x00022bb7) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0002edef) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0002edef) fep_candidate_item_pane_t

0x0cb4,	// (0x00020378) list_highlight_pane_cp31_ParamLimits

0x0cb4,	// (0x00020378) list_highlight_pane_cp31

0x3505,	// (0x00022bc9) level_1_signal_lsc

0x350e,	// (0x00022bd2) level_2_signal_lsc

0x3517,	// (0x00022bdb) level_3_signal_lsc

0x3520,	// (0x00022be4) level_4_signal_lsc

0x3529,	// (0x00022bed) level_5_signal_lsc

0x3532,	// (0x00022bf6) level_6_signal_lsc

0x353b,	// (0x00022bff) level_7_signal_lsc

0x353b,	// (0x00022bff) level_1_battery_lsc

0x3544,	// (0x00022c08) level_2_battery_lsc

0x354d,	// (0x00022c11) level_3_battery_lsc

0x3556,	// (0x00022c1a) level_4_battery_lsc

0x355f,	// (0x00022c23) level_5_battery_lsc

0x3568,	// (0x00022c2c) level_6_battery_lsc

0x3505,	// (0x00022bc9) level_7_battery_lsc

0x3571,	// (0x00022c35) scroll_handle_focus_pane_g1

0x357a,	// (0x00022c3e) scroll_handle_focus_pane_g2

0x3583,	// (0x00022c47) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002edf4) scroll_handle_focus_pane_g

0x59c5,	// (0x00025089) list_single_2graphic_pane_g1_ParamLimits

0x59c5,	// (0x00025089) list_single_2graphic_pane_g1

0x5383,	// (0x00024a47) list_single_2graphic_pane_g2_ParamLimits

0x5383,	// (0x00024a47) list_single_2graphic_pane_g2

0x5309,	// (0x000249cd) list_single_2graphic_pane_g3_ParamLimits

0x5309,	// (0x000249cd) list_single_2graphic_pane_g3

0x59d1,	// (0x00025095) list_single_2graphic_pane_g4_ParamLimits

0x59d1,	// (0x00025095) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0002edfb) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0002edfb) list_single_2graphic_pane_g

0x59dd,	// (0x000250a1) list_single_2graphic_pane_t1_ParamLimits

0x59dd,	// (0x000250a1) list_single_2graphic_pane_t1

0x5a0b,	// (0x000250cf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5a0b,	// (0x000250cf) list_double2_graphic_large_graphic_pane_g1

0x53fa,	// (0x00024abe) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x53fa,	// (0x00024abe) list_double2_graphic_large_graphic_pane_g2

0x53c6,	// (0x00024a8a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x53c6,	// (0x00024a8a) list_double2_graphic_large_graphic_pane_g3

0x5a1d,	// (0x000250e1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a1d,	// (0x000250e1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002ee04) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002ee04) list_double2_graphic_large_graphic_pane_g

0x5a29,	// (0x000250ed) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5a29,	// (0x000250ed) list_double2_graphic_large_graphic_pane_t1

0x5a3f,	// (0x00025103) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5a3f,	// (0x00025103) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0002ee0d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0002ee0d) list_double2_graphic_large_graphic_pane_t

0x3615,	// (0x00022cd9) popup_fast_swap_window_ParamLimits

0x3615,	// (0x00022cd9) popup_fast_swap_window

0x3633,	// (0x00022cf7) popup_side_volume_key_window

0x3651,	// (0x00022d15) stacon_top_pane

0x365b,	// (0x00022d1f) status_pane_ParamLimits

0x365b,	// (0x00022d1f) status_pane

0x7224,	// (0x000268e8) status_small_pane

0x0c4c,	// (0x00020310) control_pane

0x0c4c,	// (0x00020310) stacon_bottom_pane

0x12f5,	// (0x000209b9) scroll_pane_cp121

0x12ec,	// (0x000209b0) set_content_pane

0x7030,	// (0x000266f4) bg_active_tab_pane_g1_cp1

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp1

0x7039,	// (0x000266fd) bg_active_tab_pane_g3_cp1

0x7030,	// (0x000266f4) bg_passive_tab_pane_g1_cp1

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp1

0x7039,	// (0x000266fd) bg_passive_tab_pane_g3_cp1

0x7042,	// (0x00026706) bg_active_tab_pane_g1_cp2

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp2

0x704b,	// (0x0002670f) bg_active_tab_pane_g3_cp2

0x7042,	// (0x00026706) bg_passive_tab_pane_g1_cp2

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp2

0x704b,	// (0x0002670f) bg_passive_tab_pane_g3_cp2

0x7054,	// (0x00026718) bg_active_tab_pane_g1_cp3

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp3

0x705d,	// (0x00026721) bg_active_tab_pane_g3_cp3

0x7054,	// (0x00026718) bg_passive_tab_pane_g1_cp3

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp3

0x705d,	// (0x00026721) bg_passive_tab_pane_g3_cp3

0x7066,	// (0x0002672a) bg_active_tab_pane_g1_cp4

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp4

0x7071,	// (0x00026735) bg_active_tab_pane_g3_cp4

0x7066,	// (0x0002672a) bg_passive_tab_pane_g1_cp4

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp4

0x7071,	// (0x00026735) bg_passive_tab_pane_g3_cp4

0x35dc,	// (0x00022ca0) bg_active_tab_pane_g1_cp5

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp5

0x35d3,	// (0x00022c97) bg_active_tab_pane_g3_cp5

0x35dc,	// (0x00022ca0) bg_passive_tab_pane_g1_cp5

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp5

0x35d3,	// (0x00022c97) bg_passive_tab_pane_g3_cp5

0x71c0,	// (0x00026884) list_set_graphic_pane_ParamLimits

0x71c0,	// (0x00026884) list_set_graphic_pane

0x0c4c,	// (0x00020310) bg_set_opt_pane_cp4

0x71d5,	// (0x00026899) list_set_graphic_pane_g1_ParamLimits

0x71d5,	// (0x00026899) list_set_graphic_pane_g1

0x71e1,	// (0x000268a5) list_set_graphic_pane_g2_ParamLimits

0x71e1,	// (0x000268a5) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002ee12) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002ee12) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x0002f18e) volume_small_pane_cp_g

0x7205,	// (0x000268c9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7205,	// (0x000268c9) list_double2_large_graphic_pane_g1_cp2

0x7213,	// (0x000268d7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7213,	// (0x000268d7) list_double2_large_graphic_pane_g2_cp2

0x35e5,	// (0x00022ca9) list_double2_large_graphic_pane_g3_cp2

0x35ed,	// (0x00022cb1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x35ed,	// (0x00022cb1) list_double2_large_graphic_pane_t1_cp2

0x3603,	// (0x00022cc7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3603,	// (0x00022cc7) list_double2_large_graphic_pane_t2_cp2

0xa7a9,	// (0x00029e6d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa7a9,	// (0x00029e6d) list_double_large_graphic_pane_g1_cp2

0xa7bc,	// (0x00029e80) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa7bc,	// (0x00029e80) list_double_large_graphic_pane_g2_cp2

0x373c,	// (0x00022e00) list_double_large_graphic_pane_g3_cp2

0xa7cd,	// (0x00029e91) list_double_large_graphic_pane_g4_cp

0xa7d5,	// (0x00029e99) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa7d5,	// (0x00029e99) list_double_large_graphic_pane_t1_cp2

0xa7ec,	// (0x00029eb0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa7ec,	// (0x00029eb0) list_double_large_graphic_pane_t2_cp2

0x722f,	// (0x000268f3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x722f,	// (0x000268f3) list_double2_graphic_pane_g1_cp2

0x723d,	// (0x00026901) list_double2_graphic_pane_g2_cp2_ParamLimits

0x723d,	// (0x00026901) list_double2_graphic_pane_g2_cp2

0x724e,	// (0x00026912) list_double2_graphic_pane_g3_cp2

0x3669,	// (0x00022d2d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3669,	// (0x00022d2d) list_double2_graphic_pane_t1_cp2

0x367f,	// (0x00022d43) list_double2_graphic_pane_t2_cp2_ParamLimits

0x367f,	// (0x00022d43) list_double2_graphic_pane_t2_cp2

0x3691,	// (0x00022d55) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3691,	// (0x00022d55) list_single_number_heading_pane_g1_cp2

0x369d,	// (0x00022d61) list_single_number_heading_pane_g2_cp2

0x36a5,	// (0x00022d69) list_single_number_heading_pane_t1_cp2_ParamLimits

0x36a5,	// (0x00022d69) list_single_number_heading_pane_t1_cp2

0x7258,	// (0x0002691c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7258,	// (0x0002691c) list_single_number_heading_pane_t2_cp2

0x36bb,	// (0x00022d7f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x36bb,	// (0x00022d7f) list_single_number_heading_pane_t3_cp2

0x3691,	// (0x00022d55) list_single_heading_pane_g1_cp2_ParamLimits

0x3691,	// (0x00022d55) list_single_heading_pane_g1_cp2

0x369d,	// (0x00022d61) list_single_heading_pane_g2_cp2

0x36a5,	// (0x00022d69) list_single_heading_pane_t1_cp2_ParamLimits

0x36a5,	// (0x00022d69) list_single_heading_pane_t1_cp2

0xa5a3,	// (0x00029c67) list_single_heading_pane_t2_cp2_ParamLimits

0xa5a3,	// (0x00029c67) list_single_heading_pane_t2_cp2

0xa4eb,	// (0x00029baf) list_double_graphic_pane_g1_cp2_ParamLimits

0xa4eb,	// (0x00029baf) list_double_graphic_pane_g1_cp2

0xa4f7,	// (0x00029bbb) list_double_graphic_pane_g2_cp2_ParamLimits

0xa4f7,	// (0x00029bbb) list_double_graphic_pane_g2_cp2

0xa506,	// (0x00029bca) list_double_graphic_pane_g3_cp2

0xa50e,	// (0x00029bd2) list_double_graphic_pane_t1_cp2_ParamLimits

0xa50e,	// (0x00029bd2) list_double_graphic_pane_t1_cp2

0xa524,	// (0x00029be8) list_double_graphic_pane_t2_cp2_ParamLimits

0xa524,	// (0x00029be8) list_double_graphic_pane_t2_cp2

0x3730,	// (0x00022df4) list_double_number_pane_g1_cp2_ParamLimits

0x3730,	// (0x00022df4) list_double_number_pane_g1_cp2

0x373c,	// (0x00022e00) list_double_number_pane_g2_cp2

0xa4af,	// (0x00029b73) list_double_number_pane_t1_cp2_ParamLimits

0xa4af,	// (0x00029b73) list_double_number_pane_t1_cp2

0xa4c3,	// (0x00029b87) list_double_number_pane_t2_cp2_ParamLimits

0xa4c3,	// (0x00029b87) list_double_number_pane_t2_cp2

0xa4d9,	// (0x00029b9d) list_double_number_pane_t3_cp2_ParamLimits

0xa4d9,	// (0x00029b9d) list_double_number_pane_t3_cp2

0xa398,	// (0x00029a5c) list_single_graphic_pane_g1_cp2_ParamLimits

0xa398,	// (0x00029a5c) list_single_graphic_pane_g1_cp2

0x377c,	// (0x00022e40) list_single_graphic_pane_g2_cp2_ParamLimits

0x377c,	// (0x00022e40) list_single_graphic_pane_g2_cp2

0x3788,	// (0x00022e4c) list_single_graphic_pane_g3_cp2

0xa36e,	// (0x00029a32) list_single_graphic_pane_t1_cp2_ParamLimits

0xa36e,	// (0x00029a32) list_single_graphic_pane_t1_cp2

0x377c,	// (0x00022e40) list_single_number_pane_g1_cp2_ParamLimits

0x377c,	// (0x00022e40) list_single_number_pane_g1_cp2

0x3788,	// (0x00022e4c) list_single_number_pane_g2_cp2

0xa36e,	// (0x00029a32) list_single_number_pane_t1_cp2_ParamLimits

0xa36e,	// (0x00029a32) list_single_number_pane_t1_cp2

0xa384,	// (0x00029a48) list_single_number_pane_t2_cp2_ParamLimits

0xa384,	// (0x00029a48) list_single_number_pane_t2_cp2

0x7213,	// (0x000268d7) list_double2_pane_g1_cp2_ParamLimits

0x7213,	// (0x000268d7) list_double2_pane_g1_cp2

0x35e5,	// (0x00022ca9) list_double2_pane_g2_cp2

0x3708,	// (0x00022dcc) list_double2_pane_t1_cp2_ParamLimits

0x3708,	// (0x00022dcc) list_double2_pane_t1_cp2

0x371e,	// (0x00022de2) list_double2_pane_t2_cp2_ParamLimits

0x371e,	// (0x00022de2) list_double2_pane_t2_cp2

0x3730,	// (0x00022df4) list_double_pane_g1_cp2_ParamLimits

0x3730,	// (0x00022df4) list_double_pane_g1_cp2

0x373c,	// (0x00022e00) list_double_pane_g2_cp2

0x3744,	// (0x00022e08) list_double_pane_t1_cp2_ParamLimits

0x3744,	// (0x00022e08) list_double_pane_t1_cp2

0x375a,	// (0x00022e1e) list_double_pane_t2_cp2_ParamLimits

0x375a,	// (0x00022e1e) list_double_pane_t2_cp2

0x376c,	// (0x00022e30) list_single_pane_cp2_g3

0x377c,	// (0x00022e40) list_single_pane_g1_cp2_ParamLimits

0x377c,	// (0x00022e40) list_single_pane_g1_cp2

0x3788,	// (0x00022e4c) list_single_pane_g2_cp2

0x3790,	// (0x00022e54) list_single_pane_t1_cp2_ParamLimits

0x3790,	// (0x00022e54) list_single_pane_t1_cp2

0x7286,	// (0x0002694a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7286,	// (0x0002694a) list_single_large_graphic_pane_g1_cp2

0x2c7d,	// (0x00022341) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2c7d,	// (0x00022341) list_single_large_graphic_pane_g2_cp2

0x37a8,	// (0x00022e6c) list_single_large_graphic_pane_g3_cp2

0x37b0,	// (0x00022e74) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x37b0,	// (0x00022e74) list_single_large_graphic_pane_g4_cp1

0x37ca,	// (0x00022e8e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x37ca,	// (0x00022e8e) list_single_large_graphic_pane_t1_cp2

0xa338,	// (0x000299fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa338,	// (0x000299fc) list_single_graphic_heading_pane_g1_cp2

0xa305,	// (0x000299c9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa305,	// (0x000299c9) list_single_graphic_heading_pane_g4_cp2

0x3788,	// (0x00022e4c) list_single_graphic_heading_pane_g5_cp2

0xa344,	// (0x00029a08) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa344,	// (0x00029a08) list_single_graphic_heading_pane_t1_cp2

0xa35a,	// (0x00029a1e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa35a,	// (0x00029a1e) list_single_graphic_heading_pane_t2_cp2

0xa2f9,	// (0x000299bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa2f9,	// (0x000299bd) list_single_2graphic_pane_g1_cp2

0xa305,	// (0x000299c9) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa305,	// (0x000299c9) list_single_2graphic_pane_g2_cp2

0x3788,	// (0x00022e4c) list_single_2graphic_pane_g3_cp2

0xa316,	// (0x000299da) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa316,	// (0x000299da) list_single_2graphic_pane_g4_cp2

0xa322,	// (0x000299e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa322,	// (0x000299e6) list_single_2graphic_pane_t1_cp2

0x0c42,	// (0x00020306) list_highlight_pane_g10_cp1

0x9ed1,	// (0x00029595) list_highlight_pane_g1_cp1

0x9ed9,	// (0x0002959d) list_highlight_pane_g2_cp1

0x9ee1,	// (0x000295a5) list_highlight_pane_g3_cp1

0x9ee9,	// (0x000295ad) list_highlight_pane_g4_cp1

0x9ef1,	// (0x000295b5) list_highlight_pane_g5_cp1

0x9ef9,	// (0x000295bd) list_highlight_pane_g6_cp1

0x9f01,	// (0x000295c5) list_highlight_pane_g7_cp1

0x9f09,	// (0x000295cd) list_highlight_pane_g8_cp1

0x9f11,	// (0x000295d5) list_highlight_pane_g9_cp1

0x9df1,	// (0x000294b5) form_field_slider_pane_t3

0x9dff,	// (0x000294c3) form_field_slider_pane_t4

0x9e0d,	// (0x000294d1) slider_form_pane_ParamLimits

0x9e0d,	// (0x000294d1) slider_form_pane

0x0c4c,	// (0x00020310) control_abbreviations

0x0c4c,	// (0x00020310) control_conventions

0x0c4c,	// (0x00020310) control_definitions

0x0c4c,	// (0x00020310) format_table_attribute

0xa5f9,	// (0x00029cbd) bg_popup_preview_window_pane_g9

0x0c4c,	// (0x00020310) format_table_data2

0x0c4c,	// (0x00020310) format_table_data3

0x0c4c,	// (0x00020310) format_table_data_example

0x0008,

0x0c4c,	// (0x00020310) intro_purpose

0xf8ea,	// (0x0002efae) bg_popup_preview_window_pane_g

0x0c4c,	// (0x00020310) texts_category

0x0c4c,	// (0x00020310) texts_graphics

0x37e0,	// (0x00022ea4) text_digital

0x37ef,	// (0x00022eb3) text_primary

0x37fe,	// (0x00022ec2) text_primary_small

0x380d,	// (0x00022ed1) text_secondary

0x381c,	// (0x00022ee0) text_title

0xad8d,	// (0x0002a451) bg_passive_tab_pane_g1_cp3_srt

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp3_srt

0xad96,	// (0x0002a45a) bg_passive_tab_pane_g3_cp3_srt

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp3_srt_ParamLimits

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp3_srt

0xad9f,	// (0x0002a463) tabs_4_active_pane_srt_g1

0xada7,	// (0x0002a46b) tabs_4_active_pane_srt_t1_ParamLimits

0xada7,	// (0x0002a46b) tabs_4_active_pane_srt_t1

0xad8d,	// (0x0002a451) bg_active_tab_pane_g1_cp3_copy1

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp3_copy1

0xad96,	// (0x0002a45a) bg_active_tab_pane_g3_cp3_copy1

0x0cb4,	// (0x00020378) tabs_2_long_active_pane_srt_ParamLimits

0x0cb4,	// (0x00020378) tabs_2_long_active_pane_srt

0x0cb4,	// (0x00020378) tabs_2_long_passive_pane_srt_ParamLimits

0x0cb4,	// (0x00020378) tabs_2_long_passive_pane_srt

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp4_srt

0xaa35,	// (0x0002a0f9) bg_passive_tab_pane_g1_cp4_srt

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp4_srt

0xaa3e,	// (0x0002a102) bg_passive_tab_pane_g3_cp4_srt

0x383f,	// (0x00022f03) bg_active_tab_pane_cp4_srt_ParamLimits

0x383f,	// (0x00022f03) bg_active_tab_pane_cp4_srt

0xaa47,	// (0x0002a10b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaa47,	// (0x0002a10b) tabs_2_long_active_pane_srt_t1

0xaa35,	// (0x0002a0f9) bg_active_tab_pane_g1_cp4_srt

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp4_srt

0xaa3e,	// (0x0002a102) bg_active_tab_pane_g3_cp4_srt

0x0ca6,	// (0x0002036a) tabs_3_long_active_pane_srt_ParamLimits

0x0ca6,	// (0x0002036a) tabs_3_long_active_pane_srt

0x0ca6,	// (0x0002036a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0ca6,	// (0x0002036a) tabs_3_long_passive_pane_cp_srt

0x0ca6,	// (0x0002036a) tabs_3_long_passive_pane_srt_ParamLimits

0x0ca6,	// (0x0002036a) tabs_3_long_passive_pane_srt

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp5_srt

0x35dc,	// (0x00022ca0) bg_passive_tab_pane_g1_cp5_srt

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp5_srt

0x35d3,	// (0x00022c97) bg_passive_tab_pane_g3_cp5_srt

0x383f,	// (0x00022f03) bg_active_tab_pane_cp5_srt_ParamLimits

0x383f,	// (0x00022f03) bg_active_tab_pane_cp5_srt

0xaa23,	// (0x0002a0e7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaa23,	// (0x0002a0e7) tabs_3_long_active_pane_srt_t1

0x35dc,	// (0x00022ca0) bg_active_tab_pane_g1_cp5_srt

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp5_srt

0x35d3,	// (0x00022c97) bg_active_tab_pane_g3_cp5_srt

0xaa15,	// (0x0002a0d9) navi_text_pane_srt_t1

0xaa0d,	// (0x0002a0d1) navi_icon_pane_srt_g1

0x74f1,	// (0x00026bb5) midp_editing_number_pane_srt

0x382b,	// (0x00022eef) midp_ticker_pane_srt

0x74f9,	// (0x00026bbd) midp_ticker_pane_srt_g1

0x7501,	// (0x00026bc5) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0002ee31) midp_ticker_pane_srt_g

0x7509,	// (0x00026bcd) midp_ticker_pane_srt_t1

0xa9fe,	// (0x0002a0c2) midp_editing_number_pane_t1_copy1

0x6bfc,	// (0x000262c0) listscroll_midp_pane

0x6bfc,	// (0x000262c0) midp_form_pane

0x72f6,	// (0x000269ba) midp_info_popup_window_ParamLimits

0x72f6,	// (0x000269ba) midp_info_popup_window

0x2e04,	// (0x000224c8) bg_popup_sub_pane_cp50_ParamLimits

0x2e04,	// (0x000224c8) bg_popup_sub_pane_cp50

0x9b07,	// (0x000291cb) listscroll_midp_info_pane_ParamLimits

0x9b07,	// (0x000291cb) listscroll_midp_info_pane

0x9aef,	// (0x000291b3) listscroll_form_midp_pane_ParamLimits

0x9aef,	// (0x000291b3) listscroll_form_midp_pane

0x9afb,	// (0x000291bf) scroll_bar_cp050

0x9acf,	// (0x00029193) list_midp_pane

0xb822,	// (0x0002aee6) signal_pane_g2_cp

0x879d,	// (0x00027e61) listscroll_midp_info_pane_t1_ParamLimits

0x879d,	// (0x00027e61) listscroll_midp_info_pane_t1

0x87b5,	// (0x00027e79) listscroll_midp_info_pane_t2_ParamLimits

0x87b5,	// (0x00027e79) listscroll_midp_info_pane_t2

0x87f3,	// (0x00027eb7) listscroll_midp_info_pane_t3_ParamLimits

0x87f3,	// (0x00027eb7) listscroll_midp_info_pane_t3

0x882d,	// (0x00027ef1) listscroll_midp_info_pane_t4_ParamLimits

0x882d,	// (0x00027ef1) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002eee9) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002eee9) listscroll_midp_info_pane_t

0x2e84,	// (0x00022548) scroll_pane_cp21

0x8737,	// (0x00027dfb) form_midp_field_choice_group_pane

0x8740,	// (0x00027e04) form_midp_field_text_pane

0x8783,	// (0x00027e47) form_midp_field_time_pane

0x878b,	// (0x00027e4f) form_midp_gauge_slider_pane

0x8794,	// (0x00027e58) form_midp_gauge_wait_pane

0x0c4c,	// (0x00020310) form_midp_image_pane

0x5bc8,	// (0x0002528c) list_single_midp_pane_ParamLimits

0x5bc8,	// (0x0002528c) list_single_midp_pane

0x86fb,	// (0x00027dbf) form_midp_field_text_pane_t1

0x8459,	// (0x00027b1d) input_focus_pane_cp050

0x8726,	// (0x00027dea) list_midp_form_text_pane

0x86ca,	// (0x00027d8e) form_midp_field_choice_group_pane_t1

0x86d8,	// (0x00027d9c) input_focus_pane_cp051

0x86ec,	// (0x00027db0) list_midp_choice_pane

0x0c4c,	// (0x00020310) status_idle_pane

0x86ae,	// (0x00027d72) form_midp_field_time_pane_t1

0x0c42,	// (0x00020306) wait_anim_pane_g2_copy1

0x86bc,	// (0x00027d80) form_midp_field_time_pane_t2

0x0001,

0x73a6,	// (0x00026a6a) aid_navinavi_width_2_pane

0xf820,	// (0x0002eee4) form_midp_field_time_pane_t

0x0c4c,	// (0x00020310) input_focus_pane_cp052

0x0c4c,	// (0x00020310) bg_input_focus_pane_cp040

0x866e,	// (0x00027d32) form_midp_gauge_slider_pane_t1

0x867c,	// (0x00027d40) form_midp_gauge_slider_pane_t2

0x868a,	// (0x00027d4e) form_midp_gauge_slider_pane_t3

0x8698,	// (0x00027d5c) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002eedb) form_midp_gauge_slider_pane_t

0x86a6,	// (0x00027d6a) form_midp_slider_pane

0x0cb4,	// (0x00020378) bg_input_focus_pane_cp041_ParamLimits

0x0cb4,	// (0x00020378) bg_input_focus_pane_cp041

0x863b,	// (0x00027cff) form_midp_gauge_wait_pane_t1_ParamLimits

0x863b,	// (0x00027cff) form_midp_gauge_wait_pane_t1

0x864d,	// (0x00027d11) form_midp_gauge_wait_pane_t2_ParamLimits

0x864d,	// (0x00027d11) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002eed6) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002eed6) form_midp_gauge_wait_pane_t

0x865f,	// (0x00027d23) form_midp_wait_pane_ParamLimits

0x865f,	// (0x00027d23) form_midp_wait_pane

0x8603,	// (0x00027cc7) form_midp_image_pane_g1

0x860c,	// (0x00027cd0) form_midp_image_pane_t1

0x861b,	// (0x00027cdf) form_midp_image_pane_t2

0x862a,	// (0x00027cee) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002eecf) form_midp_image_pane_t

0x85fa,	// (0x00027cbe) list_single_midp_pane_g1

0x5bb9,	// (0x0002527d) list_single_midp_pane_t1

0x85e0,	// (0x00027ca4) list_midp_form_item_pane_ParamLimits

0x85e0,	// (0x00027ca4) list_midp_form_item_pane

0x734e,	// (0x00026a12) list_midp_form_item_pane_t1

0x735d,	// (0x00026a21) midp_ticker_pane_g1

0x7369,	// (0x00026a2d) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002ee17) midp_ticker_pane_g

0x7375,	// (0x00026a39) midp_ticker_pane_t1

0xac71,	// (0x0002a335) midp_editing_number_pane_t1

0xac4f,	// (0x0002a313) midp_editing_number_pane

0xac5e,	// (0x0002a322) midp_ticker_pane

0xa9ee,	// (0x0002a0b2) ai_message_heading_pane

0x0c4c,	// (0x00020310) bg_popup_window_pane_cp14

0xa9f6,	// (0x0002a0ba) listscroll_ai_message_pane

0xa974,	// (0x0002a038) ai_message_heading_pane_g1_ParamLimits

0xa974,	// (0x0002a038) ai_message_heading_pane_g1

0xa980,	// (0x0002a044) ai_message_heading_pane_g2_ParamLimits

0xa980,	// (0x0002a044) ai_message_heading_pane_g2

0xa98e,	// (0x0002a052) ai_message_heading_pane_g3_ParamLimits

0xa98e,	// (0x0002a052) ai_message_heading_pane_g3

0xa99a,	// (0x0002a05e) ai_message_heading_pane_g4_ParamLimits

0xa99a,	// (0x0002a05e) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002f010) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002f010) ai_message_heading_pane_g

0xa9a6,	// (0x0002a06a) ai_message_heading_pane_t1_ParamLimits

0xa9a6,	// (0x0002a06a) ai_message_heading_pane_t1

0xa9c0,	// (0x0002a084) ai_message_heading_pane_t2_ParamLimits

0xa9c0,	// (0x0002a084) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002f019) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002f019) ai_message_heading_pane_t

0xa9d4,	// (0x0002a098) bg_popup_heading_pane_cp1_ParamLimits

0xa9d4,	// (0x0002a098) bg_popup_heading_pane_cp1

0xa962,	// (0x0002a026) list_ai_message_pane_ParamLimits

0xa962,	// (0x0002a026) list_ai_message_pane

0x2e84,	// (0x00022548) scroll_pane_cp10

0xa8fe,	// (0x00029fc2) list_ai_message_pane_g1

0xa906,	// (0x00029fca) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002efed) list_ai_message_pane_g

0xa90e,	// (0x00029fd2) list_ai_message_pane_t1_ParamLimits

0xa90e,	// (0x00029fd2) list_ai_message_pane_t1

0xa923,	// (0x00029fe7) list_ai_message_pane_t2_ParamLimits

0xa923,	// (0x00029fe7) list_ai_message_pane_t2

0xa938,	// (0x00029ffc) list_ai_message_pane_t3_ParamLimits

0xa938,	// (0x00029ffc) list_ai_message_pane_t3

0xa94d,	// (0x0002a011) list_ai_message_pane_t4_ParamLimits

0xa94d,	// (0x0002a011) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002eff2) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002eff2) list_ai_message_pane_t

0xa8e7,	// (0x00029fab) cell_ai_soft_ind_pane_ParamLimits

0xa8e7,	// (0x00029fab) cell_ai_soft_ind_pane

0x7387,	// (0x00026a4b) cell_ai_soft_ind_pane_g1_ParamLimits

0x7387,	// (0x00026a4b) cell_ai_soft_ind_pane_g1

0x0c4c,	// (0x00020310) grid_highlight_cp1

0x7394,	// (0x00026a58) text_secondary_cp56_ParamLimits

0x7394,	// (0x00026a58) text_secondary_cp56

0xa8bc,	// (0x00029f80) example_general_pane_ParamLimits

0xa8bc,	// (0x00029f80) example_general_pane

0xa8c8,	// (0x00029f8c) example_parent_pane_g1_ParamLimits

0xa8c8,	// (0x00029f8c) example_parent_pane_g1

0xa8d4,	// (0x00029f98) example_parent_pane_t1_ParamLimits

0xa8d4,	// (0x00029f98) example_parent_pane_t1

0x7bc4,	// (0x00027288) popup_preview_text_window_ParamLimits

0x7bc4,	// (0x00027288) popup_preview_text_window

0x3774,	// (0x00022e38) list_single_pane_cp2_g4

0x0ea9,	// (0x0002056d) bg_popup_preview_window_pane_ParamLimits

0x0ea9,	// (0x0002056d) bg_popup_preview_window_pane

0xa603,	// (0x00029cc7) popup_preview_text_window_t1_ParamLimits

0xa603,	// (0x00029cc7) popup_preview_text_window_t1

0xa621,	// (0x00029ce5) popup_preview_text_window_t2_ParamLimits

0xa621,	// (0x00029ce5) popup_preview_text_window_t2

0xa66a,	// (0x00029d2e) popup_preview_text_window_t3_ParamLimits

0xa66a,	// (0x00029d2e) popup_preview_text_window_t3

0xa6af,	// (0x00029d73) popup_preview_text_window_t4_ParamLimits

0xa6af,	// (0x00029d73) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002efc1) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002efc1) popup_preview_text_window_t

0xa72d,	// (0x00029df1) scroll_pane_cp11

0x836e,	// (0x00027a32) bg_popup_preview_window_pane_g1

0xa5b7,	// (0x00029c7b) bg_popup_preview_window_pane_g2

0xa5c1,	// (0x00029c85) bg_popup_preview_window_pane_g3

0xa5cb,	// (0x00029c8f) bg_popup_preview_window_pane_g4

0xa5d5,	// (0x00029c99) bg_popup_preview_window_pane_g5

0xa5df,	// (0x00029ca3) bg_popup_preview_window_pane_g6

0xa5e7,	// (0x00029cab) bg_popup_preview_window_pane_g7

0xa5ef,	// (0x00029cb3) bg_popup_preview_window_pane_g8

0x6415,	// (0x00025ad9) aid_popup_width_pane

0x7ba0,	// (0x00027264) popup_midp_note_alarm_window_ParamLimits

0x7ba0,	// (0x00027264) popup_midp_note_alarm_window

0x2caf,	// (0x00022373) data_form_pane_ParamLimits

0x5814,	// (0x00024ed8) form_field_data_pane_g1

0x581e,	// (0x00024ee2) form_field_data_pane_t1_ParamLimits

0x2cbb,	// (0x0002237f) input_focus_pane_ParamLimits

0x5838,	// (0x00024efc) data_form_wide_pane_ParamLimits

0x5849,	// (0x00024f0d) form_field_data_wide_pane_g1

0x5855,	// (0x00024f19) form_field_data_wide_pane_t1_ParamLimits

0x105e,	// (0x00020722) input_focus_pane_cp6_ParamLimits

0x6bc1,	// (0x00026285) input_popup_find_pane_g1_ParamLimits

0x6bc1,	// (0x00026285) input_popup_find_pane_g1

0x6d1a,	// (0x000263de) aid_navi_side_left_pane

0x6d2f,	// (0x000263f3) aid_navi_side_right_pane

0x9fcc,	// (0x00029690) bg_popup_window_pane_cp30_ParamLimits

0x9fcc,	// (0x00029690) bg_popup_window_pane_cp30

0xa046,	// (0x0002970a) popup_midp_note_alarm_window_g1_ParamLimits

0xa046,	// (0x0002970a) popup_midp_note_alarm_window_g1

0xa076,	// (0x0002973a) popup_midp_note_alarm_window_t1_ParamLimits

0xa076,	// (0x0002973a) popup_midp_note_alarm_window_t1

0xa117,	// (0x000297db) popup_midp_note_alarm_window_t2_ParamLimits

0xa117,	// (0x000297db) popup_midp_note_alarm_window_t2

0xa1c5,	// (0x00029889) popup_midp_note_alarm_window_t3_ParamLimits

0xa1c5,	// (0x00029889) popup_midp_note_alarm_window_t3

0xa1f7,	// (0x000298bb) popup_midp_note_alarm_window_t4_ParamLimits

0xa1f7,	// (0x000298bb) popup_midp_note_alarm_window_t4

0xa21d,	// (0x000298e1) popup_midp_note_alarm_window_t5_ParamLimits

0xa21d,	// (0x000298e1) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002ef5e) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002ef5e) popup_midp_note_alarm_window_t

0xa2c9,	// (0x0002998d) wait_bar_pane_cp1_ParamLimits

0xa2c9,	// (0x0002998d) wait_bar_pane_cp1

0x0c4c,	// (0x00020310) wait_anim_pane_copy1

0x0c4c,	// (0x00020310) wait_border_pane_copy1

0x9cb1,	// (0x00029375) wait_border_pane_g1_copy1

0x586f,	// (0x00024f33) form_field_popup_pane_g1

0x5877,	// (0x00024f3b) form_field_popup_pane_t1_ParamLimits

0x2cbb,	// (0x0002237f) input_focus_pane_cp7_ParamLimits

0x2d28,	// (0x000223ec) list_form_pane_ParamLimits

0x5891,	// (0x00024f55) form_field_popup_wide_pane_g1

0x5899,	// (0x00024f5d) form_field_popup_wide_pane_t1_ParamLimits

0x2cbb,	// (0x0002237f) input_focus_pane_cp8_ParamLimits

0x2d51,	// (0x00022415) list_form_wide_pane_ParamLimits

0xae1a,	// (0x0002a4de) aid_size_cell_graphic_pane

0x5925,	// (0x00024fe9) data_form_pane_t1_ParamLimits

0x5c13,	// (0x000252d7) data_form_wide_pane_t1_ParamLimits

0x7eeb,	// (0x000275af) bg_status_flat_pane

0x6826,	// (0x00025eea) title_pane_t1_ParamLimits

0x0c6e,	// (0x00020332) title_pane_t2_ParamLimits

0x0c94,	// (0x00020358) title_pane_t3_ParamLimits

0xf557,	// (0x0002ec1b) title_pane_t_ParamLimits

0x6e67,	// (0x0002652b) level_1_signal_ParamLimits

0x6e74,	// (0x00026538) level_2_signal_ParamLimits

0x6e81,	// (0x00026545) level_3_signal_ParamLimits

0x6e8e,	// (0x00026552) level_4_signal_ParamLimits

0x6e9b,	// (0x0002655f) level_5_signal_ParamLimits

0x6ea8,	// (0x0002656c) level_6_signal_ParamLimits

0x6eb5,	// (0x00026579) level_7_signal_ParamLimits

0x6e67,	// (0x0002652b) level_1_battery_ParamLimits

0x6e74,	// (0x00026538) level_2_battery_ParamLimits

0x6e81,	// (0x00026545) level_3_battery_ParamLimits

0x6e8e,	// (0x00026552) level_4_battery_ParamLimits

0x6e9b,	// (0x0002655f) level_5_battery_ParamLimits

0x6ea8,	// (0x0002656c) level_6_battery_ParamLimits

0x6eb5,	// (0x00026579) level_7_battery_ParamLimits

0x9ed1,	// (0x00029595) bg_status_flat_pane_g1

0x9ed9,	// (0x0002959d) bg_status_flat_pane_g2

0x9ee1,	// (0x000295a5) bg_status_flat_pane_g3

0x9ee9,	// (0x000295ad) bg_status_flat_pane_g4

0x9ef1,	// (0x000295b5) bg_status_flat_pane_g5

0x9ef9,	// (0x000295bd) bg_status_flat_pane_g6

0x9f01,	// (0x000295c5) bg_status_flat_pane_g7

0x6896,	// (0x00025f5a) tabs_3_active_pane_t1_ParamLimits

0x6896,	// (0x00025f5a) tabs_3_passive_pane_t1_ParamLimits

0x68b0,	// (0x00025f74) tabs_4_active_pane_t1_ParamLimits

0x68b0,	// (0x00025f74) tabs_4_1_passive_pane_t1_ParamLimits

0x6bd7,	// (0x0002629b) tabs_2_active_pane_t1_ParamLimits

0x6bd7,	// (0x0002629b) tabs_2_passive_pane_t1_ParamLimits

0x383f,	// (0x00022f03) bg_active_tab_pane_cp4_ParamLimits

0x6be9,	// (0x000262ad) tabs_2_long_active_pane_t1_ParamLimits

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp4_ParamLimits

0x8402,	// (0x00027ac6) list_single_midp_graphic_pane_t1_ParamLimits

0x383f,	// (0x00022f03) bg_active_tab_pane_cp5_ParamLimits

0x6c08,	// (0x000262cc) tabs_3_long_active_pane_t1_ParamLimits

0x6bfc,	// (0x000262c0) bg_passive_tab_pane_cp5_ParamLimits

0x8402,	// (0x00027ac6) list_single_midp_graphic_pane_t1

0x7eeb,	// (0x000275af) bg_status_flat_pane_ParamLimits

0x7fb6,	// (0x0002767a) indicator_pane_cp2_ParamLimits

0x7fb6,	// (0x0002767a) indicator_pane_cp2

0x80f9,	// (0x000277bd) navi_pane_srt_ParamLimits

0x80f9,	// (0x000277bd) navi_pane_srt

0x811d,	// (0x000277e1) popup_clock_digital_analogue_window_cp1

0x0d12,	// (0x000203d6) indicator_pane_t1

0x382b,	// (0x00022eef) copy_highlight_pane

0x382b,	// (0x00022eef) cursor_graphics_pane

0x382b,	// (0x00022eef) graphic_within_text_pane

0x382b,	// (0x00022eef) link_highlight_pane

0xa6f0,	// (0x00029db4) popup_preview_text_window_t5_ParamLimits

0xa6f0,	// (0x00029db4) popup_preview_text_window_t5

0x73b0,	// (0x00026a74) cursor_digital_pane

0x73b0,	// (0x00026a74) cursor_primary_pane

0x73c1,	// (0x00026a85) cursor_primary_small_pane

0x73c9,	// (0x00026a8d) cursor_secondary_pane

0x73d1,	// (0x00026a95) cursor_title_pane

0x73b0,	// (0x00026a74) link_highlight_digital_pane

0x73b8,	// (0x00026a7c) link_highlight_primary_pane

0x73c1,	// (0x00026a85) link_highlight_primary_small_pane

0x73c9,	// (0x00026a8d) link_highlight_secondary_pane

0x73d1,	// (0x00026a95) link_highlight_title_pane

0x73b0,	// (0x00026a74) copy_highlight_digital_pane

0x73b0,	// (0x00026a74) copy_highlight_primary_pane

0x73c1,	// (0x00026a85) copy_highlight_primary_small_pane

0x73c9,	// (0x00026a8d) copy_highlight_secondary_pane

0x73d1,	// (0x00026a95) copy_highlight_title_pane

0x73c9,	// (0x00026a8d) graphic_text_digital_pane

0x9f6f,	// (0x00029633) graphic_text_primary_pane

0x9f78,	// (0x0002963c) graphic_text_primary_small_pane

0x73c1,	// (0x00026a85) graphic_text_secondary_pane

0x73b0,	// (0x00026a74) graphic_text_title_pane

0x73d9,	// (0x00026a9d) cursor_primary_pane_g1

0x9f61,	// (0x00029625) cursor_text_primary_t1

0x9f49,	// (0x0002960d) cursor_primary_small_pane_g1

0x9f53,	// (0x00029617) cursor_text_primary_small_t1

0x9f31,	// (0x000295f5) cursor_primary_small_pane_g1_copy1

0x9f3b,	// (0x000295ff) cursor_text_primary_small_t1_copy1

0x9f19,	// (0x000295dd) cursor_text_title_t1

0x9f27,	// (0x000295eb) cursor_title_pane_g1

0x73d9,	// (0x00026a9d) cursor_digital_pane_g1

0x73e3,	// (0x00026aa7) cursor_text_digital_t1

0x73f1,	// (0x00026ab5) link_highlight_primary_pane_g1

0x9ec2,	// (0x00029586) link_highlight_primary_pane_t1

0x73f1,	// (0x00026ab5) link_highlight_primary_small_pane_g1

0x73f9,	// (0x00026abd) link_highlight_primary_small_pane_t1

0x7408,	// (0x00026acc) link_highlight_secondary_pane_g1

0x7410,	// (0x00026ad4) link_highlight_secondary_pane_t1

0x9e36,	// (0x000294fa) link_highlight_title_pane_g1

0x9e3e,	// (0x00029502) link_highlight_title_pane_t1

0x9e1f,	// (0x000294e3) link_highlight_digital_pane_g1

0x9e27,	// (0x000294eb) link_highlight_digital_pane_t1

0x9ce7,	// (0x000293ab) copy_highlight_primary_pane_g1

0x9cfe,	// (0x000293c2) copy_highlight_primary_pane_t1

0x9ce7,	// (0x000293ab) copy_highlight_primary_small_pane_g1

0x9cef,	// (0x000293b3) copy_highlight_primary_small_pane_t1

0x741f,	// (0x00026ae3) copy_highlight_secondary_pane_g1

0x7427,	// (0x00026aeb) copy_highlight_secondary_pane_t1

0x9cd0,	// (0x00029394) copy_highlight_title_pane_g1

0x9cd8,	// (0x0002939c) copy_highlight_title_pane_t1

0x9ce7,	// (0x000293ab) copy_highlight_digital_pane_g1

0xafea,	// (0x0002a6ae) copy_highlight_digital_pane_t1

0xaf3e,	// (0x0002a602) graphic_text_primary_pane_g1

0xafce,	// (0x0002a692) graphic_text_primary_pane_t1

0xafdc,	// (0x0002a6a0) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0002f08d) graphic_text_primary_pane_t

0xafaa,	// (0x0002a66e) graphic_text_primary_small_pane_g1

0xafb2,	// (0x0002a676) graphic_text_primary_small_pane_t1

0xafc0,	// (0x0002a684) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0002f088) graphic_text_primary_small_pane_t

0xaf86,	// (0x0002a64a) graphic_text_secondary_pane_g1

0xaf8e,	// (0x0002a652) graphic_text_secondary_pane_t1

0xaf9c,	// (0x0002a660) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0002f083) graphic_text_secondary_pane_t

0xaf62,	// (0x0002a626) graphic_text_title_pane_g1

0xaf6a,	// (0x0002a62e) graphic_text_title_pane_t1

0xaf78,	// (0x0002a63c) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0002f07e) graphic_text_title_pane_t

0xaf3e,	// (0x0002a602) graphic_text_digital_pane_g1

0xaf46,	// (0x0002a60a) graphic_text_digital_pane_t1

0xaf54,	// (0x0002a618) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0002f079) graphic_text_digital_pane_t

0x0cb4,	// (0x00020378) navi_icon_pane_srt_ParamLimits

0x0cb4,	// (0x00020378) navi_icon_pane_srt

0x0c4c,	// (0x00020310) navi_midp_pane_srt

0x0c4c,	// (0x00020310) navi_navi_pane_srt

0x0cb4,	// (0x00020378) navi_text_pane_srt_ParamLimits

0x0cb4,	// (0x00020378) navi_text_pane_srt

0xaf09,	// (0x0002a5cd) navi_navi_icon_text_pane_srt

0xaf11,	// (0x0002a5d5) navi_navi_pane_srt_g1_ParamLimits

0xaf11,	// (0x0002a5d5) navi_navi_pane_srt_g1

0xaf23,	// (0x0002a5e7) navi_navi_pane_srt_g2_ParamLimits

0xaf23,	// (0x0002a5e7) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0002f074) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0002f074) navi_navi_pane_srt_g

0xaf35,	// (0x0002a5f9) navi_navi_tabs_pane_srt

0xaf09,	// (0x0002a5cd) navi_navi_text_pane_srt

0xaf09,	// (0x0002a5cd) navi_navi_volume_pane_srt

0xaefa,	// (0x0002a5be) navi_navi_text_pane_srt_t1

0x8b46,	// (0x0002820a) navi_navi_volume_pane_srt_g1

0x8b4e,	// (0x00028212) volume_small_pane_srt_ParamLimits

0x8b4e,	// (0x00028212) volume_small_pane_srt

0x7436,	// (0x00026afa) volume_small_pane_srt_g1_ParamLimits

0x7436,	// (0x00026afa) volume_small_pane_srt_g1

0x7446,	// (0x00026b0a) volume_small_pane_srt_g2_ParamLimits

0x7446,	// (0x00026b0a) volume_small_pane_srt_g2

0x7457,	// (0x00026b1b) volume_small_pane_srt_g3_ParamLimits

0x7457,	// (0x00026b1b) volume_small_pane_srt_g3

0x7468,	// (0x00026b2c) volume_small_pane_srt_g4_ParamLimits

0x7468,	// (0x00026b2c) volume_small_pane_srt_g4

0x7479,	// (0x00026b3d) volume_small_pane_srt_g5_ParamLimits

0x7479,	// (0x00026b3d) volume_small_pane_srt_g5

0x748a,	// (0x00026b4e) volume_small_pane_srt_g6_ParamLimits

0x748a,	// (0x00026b4e) volume_small_pane_srt_g6

0x749b,	// (0x00026b5f) volume_small_pane_srt_g7_ParamLimits

0x749b,	// (0x00026b5f) volume_small_pane_srt_g7

0x74ac,	// (0x00026b70) volume_small_pane_srt_g8_ParamLimits

0x74ac,	// (0x00026b70) volume_small_pane_srt_g8

0x74bd,	// (0x00026b81) volume_small_pane_srt_g9_ParamLimits

0x74bd,	// (0x00026b81) volume_small_pane_srt_g9

0x74ce,	// (0x00026b92) volume_small_pane_srt_g10_ParamLimits

0x74ce,	// (0x00026b92) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0002ee1c) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0002ee1c) volume_small_pane_srt_g

0x0f5e,	// (0x00020622) query_popup_data_pane_cp2

0xaee0,	// (0x0002a5a4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaee0,	// (0x0002a5a4) navi_navi_icon_text_pane_srt_t1

0x9f6f,	// (0x00029633) navi_tabs_2_long_pane_srt

0x9f6f,	// (0x00029633) navi_tabs_2_pane_srt

0x9f6f,	// (0x00029633) navi_tabs_3_long_pane_srt

0x9f6f,	// (0x00029633) navi_tabs_3_pane_srt

0x9f6f,	// (0x00029633) navi_tabs_4_pane_srt

0x8b26,	// (0x000281ea) tabs_2_active_pane_srt_ParamLimits

0x8b26,	// (0x000281ea) tabs_2_active_pane_srt

0x8b36,	// (0x000281fa) tabs_2_passive_pane_srt_ParamLimits

0x8b36,	// (0x000281fa) tabs_2_passive_pane_srt

0x77fd,	// (0x00026ec1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x77fd,	// (0x00026ec1) bg_passive_tab_pane_cp1_srt

0xaeac,	// (0x0002a570) bg_passive_tab_pane_g1_cp1_srt

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp1_srt

0xaeb5,	// (0x0002a579) bg_passive_tab_pane_g3_cp1_srt

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp1_srt_ParamLimits

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp1_srt

0xaebe,	// (0x0002a582) tabs_2_active_pane_srt_g1

0xaec6,	// (0x0002a58a) tabs_2_active_pane_srt_t1_ParamLimits

0xaec6,	// (0x0002a58a) tabs_2_active_pane_srt_t1

0xaeac,	// (0x0002a570) bg_active_tab_pane_g1_cp1_srt

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp1_srt

0xaeb5,	// (0x0002a579) bg_active_tab_pane_g3_cp1_srt

0x8af3,	// (0x000281b7) tabs_3_active_pane_srt_ParamLimits

0x8af3,	// (0x000281b7) tabs_3_active_pane_srt

0x8b04,	// (0x000281c8) tabs_3_passive_pane_cp_srt_ParamLimits

0x8b04,	// (0x000281c8) tabs_3_passive_pane_cp_srt

0x8b15,	// (0x000281d9) tabs_3_passive_pane_srt_ParamLimits

0x8b15,	// (0x000281d9) tabs_3_passive_pane_srt

0x77fd,	// (0x00026ec1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x77fd,	// (0x00026ec1) bg_passive_tab_pane_cp2_srt

0x74df,	// (0x00026ba3) bg_passive_tab_pane_g1_cp2_srt

0x358c,	// (0x00022c50) bg_passive_tab_pane_g2_cp2_srt

0x74e8,	// (0x00026bac) bg_passive_tab_pane_g3_cp2_srt

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp2_srt_ParamLimits

0x0cb4,	// (0x00020378) bg_active_tab_pane_cp2_srt

0xae92,	// (0x0002a556) tabs_3_active_pane_srt_g1

0xae9a,	// (0x0002a55e) tabs_3_active_pane_srt_t1_ParamLimits

0xae9a,	// (0x0002a55e) tabs_3_active_pane_srt_t1

0x74df,	// (0x00026ba3) bg_active_tab_pane_g1_cp2_srt

0x358c,	// (0x00022c50) bg_active_tab_pane_g2_cp2_srt

0x74e8,	// (0x00026bac) bg_active_tab_pane_g3_cp2_srt

0x8aab,	// (0x0002816f) tabs_4_active_pane_srt_ParamLimits

0x8aab,	// (0x0002816f) tabs_4_active_pane_srt

0x8abd,	// (0x00028181) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8abd,	// (0x00028181) tabs_4_passive_pane_cp2_srt

0x7783,	// (0x00026e47) aid_size_cell_toolbar

0x6bfc,	// (0x000262c0) main_idle_act_pane_ParamLimits

0x79c6,	// (0x0002708a) popup_large_graphic_colour_window_ParamLimits

0x7d6d,	// (0x00027431) popup_toolbar_window_ParamLimits

0x7d6d,	// (0x00027431) popup_toolbar_window

0x5c6c,	// (0x00025330) list_single_graphic_2heading_pane_ParamLimits

0x5c6c,	// (0x00025330) list_single_graphic_2heading_pane

0x31ea,	// (0x000228ae) aid_size_cell_apps_grid_lsc_pane

0x31fc,	// (0x000228c0) aid_size_cell_apps_grid_prt_pane

0x77fd,	// (0x00026ec1) bg_wml_button_pane_cp1_ParamLimits

0x77fd,	// (0x00026ec1) bg_wml_button_pane_cp1

0x86fb,	// (0x00027dbf) form_midp_field_text_pane_t1_ParamLimits

0x8459,	// (0x00027b1d) input_focus_pane_cp050_ParamLimits

0x8726,	// (0x00027dea) list_midp_form_text_pane_ParamLimits

0x86d8,	// (0x00027d9c) input_focus_pane_cp051_ParamLimits

0x86ec,	// (0x00027db0) list_midp_choice_pane_ParamLimits

0x85a0,	// (0x00027c64) list_single_2graphic_pane_cp3_ParamLimits

0x85a0,	// (0x00027c64) list_single_2graphic_pane_cp3

0x85b9,	// (0x00027c7d) list_single_midp_graphic_pane_ParamLimits

0x85b9,	// (0x00027c7d) list_single_midp_graphic_pane

0x5a61,	// (0x00025125) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a61,	// (0x00025125) list_single_graphic_2heading_pane_g1

0x5a6d,	// (0x00025131) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a6d,	// (0x00025131) list_single_graphic_2heading_pane_g4

0x5a79,	// (0x0002513d) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a79,	// (0x0002513d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0002ee6f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0002ee6f) list_single_graphic_2heading_pane_g

0x5a85,	// (0x00025149) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a85,	// (0x00025149) list_single_graphic_2heading_pane_t1

0x5a99,	// (0x0002515d) list_single_graphic_2heading_pane_t2_ParamLimits

0x5a99,	// (0x0002515d) list_single_graphic_2heading_pane_t2

0x5ab5,	// (0x00025179) list_single_graphic_2heading_pane_t3_ParamLimits

0x5ab5,	// (0x00025179) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002ee76) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002ee76) list_single_graphic_2heading_pane_t

0x827c,	// (0x00027940) bg_popup_sub_pane_cp2

0x82a6,	// (0x0002796a) grid_toobar_pane

0x82e2,	// (0x000279a6) cell_toolbar_pane_ParamLimits

0x82e2,	// (0x000279a6) cell_toolbar_pane

0x8312,	// (0x000279d6) cell_toolbar_pane_g1_ParamLimits

0x8312,	// (0x000279d6) cell_toolbar_pane_g1

0x8326,	// (0x000279ea) cell_toolbar_pane_g2_ParamLimits

0x8326,	// (0x000279ea) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0002ee84) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0002ee84) cell_toolbar_pane_g

0x8348,	// (0x00027a0c) grid_highlight_pane_cp2_ParamLimits

0x8348,	// (0x00027a0c) grid_highlight_pane_cp2

0x8362,	// (0x00027a26) toolbar_button_pane

0x836e,	// (0x00027a32) toolbar_button_pane_g1

0x8376,	// (0x00027a3a) toolbar_button_pane_g2

0x837e,	// (0x00027a42) toolbar_button_pane_g3

0x8386,	// (0x00027a4a) toolbar_button_pane_g4

0x838e,	// (0x00027a52) toolbar_button_pane_g5

0x8396,	// (0x00027a5a) toolbar_button_pane_g6

0x839e,	// (0x00027a62) toolbar_button_pane_g7

0x83a6,	// (0x00027a6a) toolbar_button_pane_g8

0x83ae,	// (0x00027a72) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0002ee89) toolbar_button_pane_g

0x83be,	// (0x00027a82) list_single_2graphic_pane_g1_cp3_ParamLimits

0x83be,	// (0x00027a82) list_single_2graphic_pane_g1_cp3

0x83ca,	// (0x00027a8e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x83ca,	// (0x00027a8e) list_single_2graphic_pane_g2_cp3

0x369d,	// (0x00022d61) list_single_2graphic_pane_g3_cp3

0x83db,	// (0x00027a9f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x83db,	// (0x00027a9f) list_single_2graphic_pane_g4_cp3

0x83e7,	// (0x00027aab) list_single_2graphic_pane_t1_cp3_ParamLimits

0x83e7,	// (0x00027aab) list_single_2graphic_pane_t1_cp3

0x3691,	// (0x00022d55) list_single_midp_graphic_pane_g2_ParamLimits

0x3691,	// (0x00022d55) list_single_midp_graphic_pane_g2

0x778b,	// (0x00026e4f) aid_zoom_text_primary

0x5a51,	// (0x00025115) aid_zoom_text_secondary

0x7599,	// (0x00026c5d) status_small_pane_g7_ParamLimits

0x7599,	// (0x00026c5d) status_small_pane_g7

0x75bc,	// (0x00026c80) status_small_pane_t1_ParamLimits

0x6815,	// (0x00025ed9) title_pane_g2

0x0003,

0xf54e,	// (0x0002ec12) title_pane_g

0x6a6a,	// (0x0002612e) aid_size_cell_colour_1_pane_ParamLimits

0x6a6a,	// (0x0002612e) aid_size_cell_colour_1_pane

0x6a7e,	// (0x00026142) aid_size_cell_colour_2_pane_ParamLimits

0x6a7e,	// (0x00026142) aid_size_cell_colour_2_pane

0x6a92,	// (0x00026156) aid_size_cell_colour_3_pane_ParamLimits

0x6a92,	// (0x00026156) aid_size_cell_colour_3_pane

0x6aa6,	// (0x0002616a) aid_size_cell_colour_4_pane_ParamLimits

0x6aa6,	// (0x0002616a) aid_size_cell_colour_4_pane

0x6c56,	// (0x0002631a) title_pane_stacon_g1_ParamLimits

0x6c56,	// (0x0002631a) title_pane_stacon_g1

0x9d55,	// (0x00029419) popup_note_wait_window_g3_ParamLimits

0x9d55,	// (0x00029419) popup_note_wait_window_g3

0x9dcc,	// (0x00029490) popup_note_wait_window_t5_ParamLimits

0x9dcc,	// (0x00029490) popup_note_wait_window_t5

0x0c4c,	// (0x00020310) main_feb_china_hwr_fs_writing_pane

0x788d,	// (0x00026f51) popup_feb_china_hwr_fs_window_ParamLimits

0x788d,	// (0x00026f51) popup_feb_china_hwr_fs_window

0x8444,	// (0x00027b08) aid_size_cell_hwr_fs_ParamLimits

0x8444,	// (0x00027b08) aid_size_cell_hwr_fs

0x8459,	// (0x00027b1d) bg_popup_sub_pane_cp3_ParamLimits

0x8459,	// (0x00027b1d) bg_popup_sub_pane_cp3

0x8465,	// (0x00027b29) grid_hwr_fs_pane_ParamLimits

0x8465,	// (0x00027b29) grid_hwr_fs_pane

0x847d,	// (0x00027b41) linegrid_hwr_fs_pane_ParamLimits

0x847d,	// (0x00027b41) linegrid_hwr_fs_pane

0x848d,	// (0x00027b51) cell_hwr_fs_pane_ParamLimits

0x848d,	// (0x00027b51) cell_hwr_fs_pane

0x84b1,	// (0x00027b75) linegrid_hwr_fs_pane_g1_ParamLimits

0x84b1,	// (0x00027b75) linegrid_hwr_fs_pane_g1

0x84bd,	// (0x00027b81) linegrid_hwr_fs_pane_g2_ParamLimits

0x84bd,	// (0x00027b81) linegrid_hwr_fs_pane_g2

0x84cf,	// (0x00027b93) linegrid_hwr_fs_pane_g3_ParamLimits

0x84cf,	// (0x00027b93) linegrid_hwr_fs_pane_g3

0x84db,	// (0x00027b9f) linegrid_hwr_fs_pane_g4_ParamLimits

0x84db,	// (0x00027b9f) linegrid_hwr_fs_pane_g4

0x84f9,	// (0x00027bbd) linegrid_hwr_fs_pane_g5_ParamLimits

0x84f9,	// (0x00027bbd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002eeb4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002eeb4) linegrid_hwr_fs_pane_g

0x850f,	// (0x00027bd3) cell_hwr_fs_pane_g1_ParamLimits

0x850f,	// (0x00027bd3) cell_hwr_fs_pane_g1

0x81b3,	// (0x00027877) cell_hwr_fs_pane_g2_ParamLimits

0x81b3,	// (0x00027877) cell_hwr_fs_pane_g2

0x8525,	// (0x00027be9) cell_hwr_fs_pane_g3_ParamLimits

0x8525,	// (0x00027be9) cell_hwr_fs_pane_g3

0x8532,	// (0x00027bf6) cell_hwr_fs_pane_g4_ParamLimits

0x8532,	// (0x00027bf6) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002eebf) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002eebf) cell_hwr_fs_pane_g

0x853f,	// (0x00027c03) cell_hwr_fs_pane_t1

0x0c4c,	// (0x00020310) grid_highlight_pane_cp6

0x0c4c,	// (0x00020310) main_idle_act2_pane

0x2e6b,	// (0x0002252f) aid_inside_area_popup_secondary

0xa405,	// (0x00029ac9) aid_inside_area_window_primary_ParamLimits

0xa405,	// (0x00029ac9) aid_inside_area_window_primary

0xaff9,	// (0x0002a6bd) ai2_news_ticker_pane

0xb001,	// (0x0002a6c5) aid_size_cell_ai1_link_ParamLimits

0xb001,	// (0x0002a6c5) aid_size_cell_ai1_link

0xb01b,	// (0x0002a6df) popup_ai2_data_window_ParamLimits

0xb01b,	// (0x0002a6df) popup_ai2_data_window

0xb039,	// (0x0002a6fd) popup_ai2_link_window_ParamLimits

0xb039,	// (0x0002a6fd) popup_ai2_link_window

0x8459,	// (0x00027b1d) bg_popup_sub_pane_cp4_ParamLimits

0x8459,	// (0x00027b1d) bg_popup_sub_pane_cp4

0xb04f,	// (0x0002a713) grid_ai2_link_pane_ParamLimits

0xb04f,	// (0x0002a713) grid_ai2_link_pane

0xb066,	// (0x0002a72a) popup_ai2_link_window_g1_ParamLimits

0xb066,	// (0x0002a72a) popup_ai2_link_window_g1

0xb072,	// (0x0002a736) popup_ai2_link_window_g2_ParamLimits

0xb072,	// (0x0002a736) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0002f092) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0002f092) popup_ai2_link_window_g

0xb083,	// (0x0002a747) ai2_mp_button_pane

0xb08b,	// (0x0002a74f) ai2_mp_volume_pane

0x86d8,	// (0x00027d9c) bg_popup_sub_pane_cp5_ParamLimits

0x86d8,	// (0x00027d9c) bg_popup_sub_pane_cp5

0xb093,	// (0x0002a757) heading_ai2_gene_pane_ParamLimits

0xb093,	// (0x0002a757) heading_ai2_gene_pane

0xb09f,	// (0x0002a763) list_ai2_gene_pane_ParamLimits

0xb09f,	// (0x0002a763) list_ai2_gene_pane

0xb0e7,	// (0x0002a7ab) cell_ai2_link_pane_ParamLimits

0xb0e7,	// (0x0002a7ab) cell_ai2_link_pane

0xb0fd,	// (0x0002a7c1) cell_ai2_link_pane_g1

0x0c4c,	// (0x00020310) grid_highlight_pane_cp7

0x8b63,	// (0x00028227) ai2_mp_volume_pane_g1

0xb1d0,	// (0x0002a894) ai2_mp_volume_pane_g2

0xb145,	// (0x0002a809) list_ai2_gene_pane_t1

0xb1d8,	// (0x0002a89c) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0002f0ab) ai2_mp_volume_pane_g

0x8b6b,	// (0x0002822f) volume_small_pane_cp3

0xb1e0,	// (0x0002a8a4) aid_size_cell_ai2_button

0xb1e8,	// (0x0002a8ac) grid_ai2_button_pane

0xb1f1,	// (0x0002a8b5) cell_ai2_button_pane_ParamLimits

0xb1f1,	// (0x0002a8b5) cell_ai2_button_pane

0x0c42,	// (0x00020306) cell_ai2_button_pane_g1

0x0c4c,	// (0x00020310) grid_highlight_pane_cp8

0xb190,	// (0x0002a854) ai2_gene_pane_t1_ParamLimits

0xb190,	// (0x0002a854) ai2_gene_pane_t1

0x7779,	// (0x00026e3d) aid_height_parent_landscape

0xaa97,	// (0x0002a15b) aid_height_set_list

0xaaa8,	// (0x0002a16c) aid_size_parent

0xae1a,	// (0x0002a4de) aid_size_cell_graphic_pane_ParamLimits

0xb0af,	// (0x0002a773) popup_ai2_data_window_g1_ParamLimits

0xb0af,	// (0x0002a773) popup_ai2_data_window_g1

0xb0bb,	// (0x0002a77f) ai2_news_ticker_pane_g1

0xb0c3,	// (0x0002a787) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0002f097) ai2_news_ticker_pane_g

0xb0cb,	// (0x0002a78f) ai2_news_ticker_pane_t1

0xb0d9,	// (0x0002a79d) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0002f09c) ai2_news_ticker_pane_t

0xb106,	// (0x0002a7ca) heading_ai2_gene_pane_g1

0xb10e,	// (0x0002a7d2) heading_ai2_gene_pane_t1_ParamLimits

0xb10e,	// (0x0002a7d2) heading_ai2_gene_pane_t1

0xb123,	// (0x0002a7e7) list_highlight_pane_cp6

0xb12b,	// (0x0002a7ef) ai2_gene_pane_ParamLimits

0xb12b,	// (0x0002a7ef) ai2_gene_pane

0xb153,	// (0x0002a817) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0002f0a1) list_ai2_gene_pane_t

0xb161,	// (0x0002a825) list_highlight_pane_cp8_ParamLimits

0xb161,	// (0x0002a825) list_highlight_pane_cp8

0xb172,	// (0x0002a836) ai2_gene_pane_g1_ParamLimits

0xb172,	// (0x0002a836) ai2_gene_pane_g1

0xb184,	// (0x0002a848) ai2_gene_pane_g2_ParamLimits

0xb184,	// (0x0002a848) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0002f0a6) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0002f0a6) ai2_gene_pane_g

0x1279,	// (0x0002093d) scroll_pane_cp12

0x7730,	// (0x00026df4) control_pane_t3_ParamLimits

0x7730,	// (0x00026df4) control_pane_t3

0x75ad,	// (0x00026c71) status_small_pane_g8_ParamLimits

0x75ad,	// (0x00026c71) status_small_pane_g8

0x798b,	// (0x0002704f) popup_find_window_ParamLimits

0x7bb6,	// (0x0002727a) popup_note_image_window_ParamLimits

0x5acd,	// (0x00025191) list_double2_graphic_pane_vc_g1_ParamLimits

0x5acd,	// (0x00025191) list_double2_graphic_pane_vc_g1

0x5ad9,	// (0x0002519d) list_double2_graphic_pane_vc_g2_ParamLimits

0x5ad9,	// (0x0002519d) list_double2_graphic_pane_vc_g2

0x5ae5,	// (0x000251a9) list_double2_graphic_pane_vc_g3_ParamLimits

0x5ae5,	// (0x000251a9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0002ee7d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0002ee7d) list_double2_graphic_pane_vc_g

0x5af1,	// (0x000251b5) list_double2_graphic_pane_vc_t1_ParamLimits

0x5af1,	// (0x000251b5) list_double2_graphic_pane_vc_t1

0x5a6d,	// (0x00025131) list_single_heading_pane_vc_g1_ParamLimits

0x5a6d,	// (0x00025131) list_single_heading_pane_vc_g1

0x5a79,	// (0x0002513d) list_single_heading_pane_vc_g2_ParamLimits

0x5a79,	// (0x0002513d) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee9e) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee9e) list_single_heading_pane_vc_g

0x5b07,	// (0x000251cb) list_single_heading_pane_vc_t1_ParamLimits

0x5b07,	// (0x000251cb) list_single_heading_pane_vc_t1

0x5b1f,	// (0x000251e3) list_single_heading_pane_vc_t2_ParamLimits

0x5b1f,	// (0x000251e3) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002eea3) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002eea3) list_single_heading_pane_vc_t

0x5b31,	// (0x000251f5) list_setting_number_pane_vc_g1_ParamLimits

0x5b31,	// (0x000251f5) list_setting_number_pane_vc_g1

0x5b3d,	// (0x00025201) list_setting_number_pane_vc_g2_ParamLimits

0x5b3d,	// (0x00025201) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002eea8) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002eea8) list_setting_number_pane_vc_g

0x5b49,	// (0x0002520d) list_setting_number_pane_vc_t1_ParamLimits

0x5b49,	// (0x0002520d) list_setting_number_pane_vc_t1

0x5b5d,	// (0x00025221) list_setting_number_pane_vc_t2_ParamLimits

0x5b5d,	// (0x00025221) list_setting_number_pane_vc_t2

0x5b79,	// (0x0002523d) list_setting_number_pane_vc_t3_ParamLimits

0x5b79,	// (0x0002523d) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002eead) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002eead) list_setting_number_pane_vc_t

0x5ba7,	// (0x0002526b) set_value_pane_vc_ParamLimits

0x5ba7,	// (0x0002526b) set_value_pane_vc

0x5c6c,	// (0x00025330) list_double2_graphic_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double2_graphic_pane_vc

0xac80,	// (0x0002a344) list_double2_large_graphic_pane_vc_ParamLimits

0xac80,	// (0x0002a344) list_double2_large_graphic_pane_vc

0x5c6c,	// (0x00025330) list_double2_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double2_pane_vc

0x5c6c,	// (0x00025330) list_double_graphic_heading_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double_graphic_heading_pane_vc

0x5c6c,	// (0x00025330) list_double_graphic_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double_graphic_pane_vc

0x5c6c,	// (0x00025330) list_double_heading_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double_heading_pane_vc

0xac94,	// (0x0002a358) list_double_large_graphic_pane_vc_ParamLimits

0xac94,	// (0x0002a358) list_double_large_graphic_pane_vc

0x5c6c,	// (0x00025330) list_double_number_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double_number_pane_vc

0x5c6c,	// (0x00025330) list_double_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double_pane_vc

0x5c6c,	// (0x00025330) list_double_time_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_double_time_pane_vc

0x5c6c,	// (0x00025330) list_setting_number_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_setting_number_pane_vc

0x5c6c,	// (0x00025330) list_setting_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_setting_pane_vc

0x5c6c,	// (0x00025330) list_single_graphic_heading_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_single_graphic_heading_pane_vc

0x5c6c,	// (0x00025330) list_single_heading_pane_vc_ParamLimits

0x5c6c,	// (0x00025330) list_single_heading_pane_vc

0xacb6,	// (0x0002a37a) list_single_number_heading_pane_vc_ParamLimits

0xacb6,	// (0x0002a37a) list_single_number_heading_pane_vc

0x5acd,	// (0x00025191) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5acd,	// (0x00025191) list_double_graphic_heading_pane_vc_g1

0x5a6d,	// (0x00025131) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5a6d,	// (0x00025131) list_double_graphic_heading_pane_vc_g2

0x5a79,	// (0x0002513d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5a79,	// (0x0002513d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0002f0b2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002f0b2) list_double_graphic_heading_pane_vc_g

0x5cb1,	// (0x00025375) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5cb1,	// (0x00025375) list_double_graphic_heading_pane_vc_t1

0x5cc7,	// (0x0002538b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5cc7,	// (0x0002538b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002f0b9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0002f0b9) list_double_graphic_heading_pane_vc_t

0x5b31,	// (0x000251f5) list_setting_pane_vc_g1_ParamLimits

0x5b31,	// (0x000251f5) list_setting_pane_vc_g1

0x5b3d,	// (0x00025201) list_setting_pane_vc_g2_ParamLimits

0x5b3d,	// (0x00025201) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002eea8) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002eea8) list_setting_pane_vc_g

0x5ce5,	// (0x000253a9) list_setting_pane_vc_t1_ParamLimits

0x5ce5,	// (0x000253a9) list_setting_pane_vc_t1

0x5d01,	// (0x000253c5) list_setting_pane_vc_t2_ParamLimits

0x5d01,	// (0x000253c5) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0002f0e7) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0002f0e7) list_setting_pane_vc_t

0x5ba7,	// (0x0002526b) set_value_pane_cp_vc_ParamLimits

0x5ba7,	// (0x0002526b) set_value_pane_cp_vc

0x5a6d,	// (0x00025131) list_single_number_heading_pane_vc_g1_ParamLimits

0x5a6d,	// (0x00025131) list_single_number_heading_pane_vc_g1

0x5a79,	// (0x0002513d) list_single_number_heading_pane_vc_g2_ParamLimits

0x5a79,	// (0x0002513d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee9e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee9e) list_single_number_heading_pane_vc_g

0x5b07,	// (0x000251cb) list_single_number_heading_pane_vc_t1_ParamLimits

0x5b07,	// (0x000251cb) list_single_number_heading_pane_vc_t1

0x5d1d,	// (0x000253e1) list_single_number_heading_pane_vc_t2_ParamLimits

0x5d1d,	// (0x000253e1) list_single_number_heading_pane_vc_t2

0x5d2f,	// (0x000253f3) list_single_number_heading_pane_vc_t3_ParamLimits

0x5d2f,	// (0x000253f3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0002f0ec) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0002f0ec) list_single_number_heading_pane_vc_t

0x5acd,	// (0x00025191) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5acd,	// (0x00025191) list_single_graphic_heading_pane_vc_g1

0x5a6d,	// (0x00025131) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5a6d,	// (0x00025131) list_single_graphic_heading_pane_vc_g4

0x5a79,	// (0x0002513d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5a79,	// (0x0002513d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x0002f0b2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002f0b2) list_single_graphic_heading_pane_vc_g

0x5b07,	// (0x000251cb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5b07,	// (0x000251cb) list_single_graphic_heading_pane_vc_t1

0x5d41,	// (0x00025405) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5d41,	// (0x00025405) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0002f0f3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0002f0f3) list_single_graphic_heading_pane_vc_t

0x5a6d,	// (0x00025131) list_double2_pane_vc_g1_ParamLimits

0x5a6d,	// (0x00025131) list_double2_pane_vc_g1

0x5a79,	// (0x0002513d) list_double2_pane_vc_g2_ParamLimits

0x5a79,	// (0x0002513d) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee9e) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee9e) list_double2_pane_vc_g

0x5d53,	// (0x00025417) list_double2_pane_vc_t1_ParamLimits

0x5d53,	// (0x00025417) list_double2_pane_vc_t1

0x5d69,	// (0x0002542d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5d69,	// (0x0002542d) list_double2_large_graphic_pane_vc_g1

0x5d75,	// (0x00025439) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5d75,	// (0x00025439) list_double2_large_graphic_pane_vc_g2

0x5d81,	// (0x00025445) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5d81,	// (0x00025445) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0002f0f8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0002f0f8) list_double2_large_graphic_pane_vc_g

0x5d8d,	// (0x00025451) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5d8d,	// (0x00025451) list_double2_large_graphic_pane_vc_t1

0x5da3,	// (0x00025467) list_double_time_pane_vc_g1_ParamLimits

0x5da3,	// (0x00025467) list_double_time_pane_vc_g1

0x5daf,	// (0x00025473) list_double_time_pane_vc_g2_ParamLimits

0x5daf,	// (0x00025473) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0002f0ff) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0002f0ff) list_double_time_pane_vc_g

0x5dbb,	// (0x0002547f) list_double_time_pane_vc_t1_ParamLimits

0x5dbb,	// (0x0002547f) list_double_time_pane_vc_t1

0x5de5,	// (0x000254a9) list_double_time_pane_vc_t2_ParamLimits

0x5de5,	// (0x000254a9) list_double_time_pane_vc_t2

0x5e2e,	// (0x000254f2) list_double_time_pane_vc_t3_ParamLimits

0x5e2e,	// (0x000254f2) list_double_time_pane_vc_t3

0x5e40,	// (0x00025504) list_double_time_pane_vc_t4_ParamLimits

0x5e40,	// (0x00025504) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0002f104) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0002f104) list_double_time_pane_vc_t

0x5a6d,	// (0x00025131) list_double_pane_vc_g1_ParamLimits

0x5a6d,	// (0x00025131) list_double_pane_vc_g1

0x5a79,	// (0x0002513d) list_double_pane_vc_g2_ParamLimits

0x5a79,	// (0x0002513d) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee9e) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee9e) list_double_pane_vc_g

0x5e65,	// (0x00025529) list_double_pane_vc_t1_ParamLimits

0x5e65,	// (0x00025529) list_double_pane_vc_t1

0x5e79,	// (0x0002553d) list_double_pane_vc_t2_ParamLimits

0x5e79,	// (0x0002553d) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0002f10d) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0002f10d) list_double_pane_vc_t

0x5a6d,	// (0x00025131) list_double_number_pane_vc_g1_ParamLimits

0x5a6d,	// (0x00025131) list_double_number_pane_vc_g1

0x5a79,	// (0x0002513d) list_double_number_pane_vc_g2_ParamLimits

0x5a79,	// (0x0002513d) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee9e) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee9e) list_double_number_pane_vc_g

0x5e8f,	// (0x00025553) list_double_number_pane_vc_t1_ParamLimits

0x5e8f,	// (0x00025553) list_double_number_pane_vc_t1

0x5ea3,	// (0x00025567) list_double_number_pane_vc_t2_ParamLimits

0x5ea3,	// (0x00025567) list_double_number_pane_vc_t2

0x5eb7,	// (0x0002557b) list_double_number_pane_vc_t3_ParamLimits

0x5eb7,	// (0x0002557b) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0002f112) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002f112) list_double_number_pane_vc_t

0x5ecd,	// (0x00025591) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ecd,	// (0x00025591) list_double_large_graphic_pane_vc_g1

0x5ef5,	// (0x000255b9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ef5,	// (0x000255b9) list_double_large_graphic_pane_vc_g2

0x5f09,	// (0x000255cd) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5f09,	// (0x000255cd) list_double_large_graphic_pane_vc_g3

0x5f18,	// (0x000255dc) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f18,	// (0x000255dc) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0002f119) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002f119) list_double_large_graphic_pane_vc_g

0x5f28,	// (0x000255ec) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f28,	// (0x000255ec) list_double_large_graphic_pane_vc_t1

0x5f4a,	// (0x0002560e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5f4a,	// (0x0002560e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002f122) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002f122) list_double_large_graphic_pane_vc_t

0x5a6d,	// (0x00025131) list_double_heading_pane_vc_g1_ParamLimits

0x5a6d,	// (0x00025131) list_double_heading_pane_vc_g1

0x5a79,	// (0x0002513d) list_double_heading_pane_vc_g2_ParamLimits

0x5a79,	// (0x0002513d) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002ee9e) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002ee9e) list_double_heading_pane_vc_g

0x5f6a,	// (0x0002562e) list_double_heading_pane_vc_t1_ParamLimits

0x5f6a,	// (0x0002562e) list_double_heading_pane_vc_t1

0x5b07,	// (0x000251cb) list_double_heading_pane_vc_t2_ParamLimits

0x5b07,	// (0x000251cb) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x0002f127) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0002f127) list_double_heading_pane_vc_t

0x5f7c,	// (0x00025640) list_double_graphic_pane_vc_g1_ParamLimits

0x5f7c,	// (0x00025640) list_double_graphic_pane_vc_g1

0x5f8f,	// (0x00025653) list_double_graphic_pane_vc_g2_ParamLimits

0x5f8f,	// (0x00025653) list_double_graphic_pane_vc_g2

0x5a6d,	// (0x00025131) list_double_graphic_pane_vc_g3_ParamLimits

0x5a6d,	// (0x00025131) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x0002f12c) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0002f12c) list_double_graphic_pane_vc_g

0x5fac,	// (0x00025670) list_double_graphic_pane_vc_t1_ParamLimits

0x5fac,	// (0x00025670) list_double_graphic_pane_vc_t1

0x5fd6,	// (0x0002569a) list_double_graphic_pane_vc_t2_ParamLimits

0x5fd6,	// (0x0002569a) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0002f135) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0002f135) list_double_graphic_pane_vc_t

0x6421,	// (0x00025ae5) aid_size_cell_fastswap

0x6429,	// (0x00025aed) aid_size_cell_touch_ParamLimits

0x6429,	// (0x00025aed) aid_size_cell_touch

0x668a,	// (0x00025d4e) popup_fast_swap_wide_window_ParamLimits

0x668a,	// (0x00025d4e) popup_fast_swap_wide_window

0x67a8,	// (0x00025e6c) touch_pane_ParamLimits

0x67a8,	// (0x00025e6c) touch_pane

0x12fe,	// (0x000209c2) button_value_adjust_pane_cp2

0x5758,	// (0x00024e1c) button_value_adjust_pane_cp4

0x577e,	// (0x00024e42) form_field_data_pane_cp2

0x57a1,	// (0x00024e65) form_field_data_wide_pane_cp2

0x3238,	// (0x000228fc) bg_scroll_pane_ParamLimits

0x6e3e,	// (0x00026502) scroll_handle_pane_ParamLimits

0x6e52,	// (0x00026516) scroll_sc2_down_pane_ParamLimits

0x6e52,	// (0x00026516) scroll_sc2_down_pane

0x3269,	// (0x0002292d) scroll_sc2_up_pane_ParamLimits

0x3269,	// (0x0002292d) scroll_sc2_up_pane

0xb90a,	// (0x0002afce) grid_wheel_folder_pane_g1_ParamLimits

0xb90a,	// (0x0002afce) grid_wheel_folder_pane_g1

0x7158,	// (0x0002681c) clock_nsta_pane_cp2_ParamLimits

0x7158,	// (0x0002681c) clock_nsta_pane_cp2

0x6bfc,	// (0x000262c0) listscroll_midp_pane_ParamLimits

0x7294,	// (0x00026958) midp_canvas_pane

0x7771,	// (0x00026e35) nsta_clock_indic_pane

0x77c7,	// (0x00026e8b) listscroll_form_pane_vc

0x77eb,	// (0x00026eaf) listscroll_set_pane_vc_ParamLimits

0x77eb,	// (0x00026eaf) listscroll_set_pane_vc

0x7f07,	// (0x000275cb) clock_nsta_pane

0x7f84,	// (0x00027648) indicator_nsta_pane

0x827c,	// (0x00027940) bg_popup_sub_pane_cp2_ParamLimits

0x8290,	// (0x00027954) find_pane_cp2_ParamLimits

0x8290,	// (0x00027954) find_pane_cp2

0x82a6,	// (0x0002796a) grid_toobar_pane_ParamLimits

0x8418,	// (0x00027adc) list_form_gen_pane_vc_ParamLimits

0x8418,	// (0x00027adc) list_form_gen_pane_vc

0x842e,	// (0x00027af2) scroll_pane_cp8_vc_ParamLimits

0x842e,	// (0x00027af2) scroll_pane_cp8_vc

0x854d,	// (0x00027c11) data_form_wide_pane_vc_ParamLimits

0x854d,	// (0x00027c11) data_form_wide_pane_vc

0x8559,	// (0x00027c1d) form_field_data_wide_pane_vc_g1

0x8561,	// (0x00027c25) form_field_data_wide_pane_vc_t1_ParamLimits

0x8561,	// (0x00027c25) form_field_data_wide_pane_vc_t1

0x2cbb,	// (0x0002237f) input_focus_pane_cp6_vc_ParamLimits

0x2cbb,	// (0x0002237f) input_focus_pane_cp6_vc

0x9acf,	// (0x00029193) list_midp_pane_ParamLimits

0x9adb,	// (0x0002919f) scroll_pane_cp16_ParamLimits

0x9adb,	// (0x0002919f) scroll_pane_cp16

0x9b29,	// (0x000291ed) button_value_adjust_pane_ParamLimits

0x9b29,	// (0x000291ed) button_value_adjust_pane

0xaaba,	// (0x0002a17e) button_value_adjust_pane_cp6_ParamLimits

0xaaba,	// (0x0002a17e) button_value_adjust_pane_cp6

0xac08,	// (0x0002a2cc) settings_code_pane_cp_ParamLimits

0xac08,	// (0x0002a2cc) settings_code_pane_cp

0x0c42,	// (0x00020306) cell_touch_pane_g1

0x0c42,	// (0x00020306) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002edc2) cell_touch_pane_g

0xb203,	// (0x0002a8c7) cell_touch_pane_cp_ParamLimits

0xb203,	// (0x0002a8c7) cell_touch_pane_cp

0xb213,	// (0x0002a8d7) cell_touch_pane_ParamLimits

0xb213,	// (0x0002a8d7) cell_touch_pane

0x0c42,	// (0x00020306) scroll_sc2_down_pane_g1

0x0c42,	// (0x00020306) scroll_sc2_up_pane_g1

0x0c4c,	// (0x00020310) bg_set_opt_pane_cp4_vc

0xb224,	// (0x0002a8e8) list_set_graphic_pane_vc_g1_ParamLimits

0xb224,	// (0x0002a8e8) list_set_graphic_pane_vc_g1

0x3833,	// (0x00022ef7) list_set_graphic_pane_vc_g2_ParamLimits

0x3833,	// (0x00022ef7) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0002f0be) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0002f0be) list_set_graphic_pane_vc_g

0xb230,	// (0x0002a8f4) text_primary_small_cp13_vc_ParamLimits

0xb230,	// (0x0002a8f4) text_primary_small_cp13_vc

0xb248,	// (0x0002a90c) list_set_graphic_pane_vc_ParamLimits

0xb248,	// (0x0002a90c) list_set_graphic_pane_vc

0x0c4c,	// (0x00020310) input_focus_pane_cp2_vc

0x0c42,	// (0x00020306) setting_code_pane_vc_g1

0x0ccb,	// (0x0002038f) setting_code_pane_vc_t1

0xb25d,	// (0x0002a921) set_text_pane_vc_t1_ParamLimits

0xb25d,	// (0x0002a921) set_text_pane_vc_t1

0x0c4c,	// (0x00020310) input_focus_pane_cp1_vc

0xb27b,	// (0x0002a93f) list_set_text_pane_vc

0x0c42,	// (0x00020306) setting_text_pane_vc_g1

0x0c4c,	// (0x00020310) bg_set_opt_pane_cp2_vc

0x0cc2,	// (0x00020386) setting_slider_graphic_pane_vc_g1

0xb285,	// (0x0002a949) setting_slider_graphic_pane_vc_t1

0xb297,	// (0x0002a95b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002f0c3) setting_slider_graphic_pane_vc_t

0xb2a9,	// (0x0002a96d) slider_set_pane_cp_vc

0xb2b3,	// (0x0002a977) slider_set_pane_vc_g1

0xb2bc,	// (0x0002a980) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0002f0c8) slider_set_pane_vc_g

0x2d84,	// (0x00022448) set_opt_bg_pane_g1_copy1

0x2d8c,	// (0x00022450) set_opt_bg_pane_g2_copy1

0xb2e8,	// (0x0002a9ac) set_opt_bg_pane_g3_copy1

0x2d9c,	// (0x00022460) set_opt_bg_pane_g4_copy1

0x2da4,	// (0x00022468) set_opt_bg_pane_g5_copy1

0x2dac,	// (0x00022470) set_opt_bg_pane_g6_copy1

0xb2f2,	// (0x0002a9b6) set_opt_bg_pane_g7_copy1

0xb2fc,	// (0x0002a9c0) set_opt_bg_pane_g8_copy1

0xb306,	// (0x0002a9ca) set_opt_bg_pane_g9_copy1

0x0c4c,	// (0x00020310) bg_set_opt_pane_cp_vc

0xb310,	// (0x0002a9d4) setting_slider_pane_vc_t1

0xb31f,	// (0x0002a9e3) setting_slider_pane_vc_t2

0xb331,	// (0x0002a9f5) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0002f0d7) setting_slider_pane_vc_t

0xb343,	// (0x0002aa07) slider_set_pane_vc

0x8863,	// (0x00027f27) volume_set_pane_vc_g1

0x886c,	// (0x00027f30) volume_set_pane_vc_g2

0x8875,	// (0x00027f39) volume_set_pane_vc_g3

0x887e,	// (0x00027f42) volume_set_pane_vc_g4

0x8887,	// (0x00027f4b) volume_set_pane_vc_g5

0x8890,	// (0x00027f54) volume_set_pane_vc_g6

0x8899,	// (0x00027f5d) volume_set_pane_vc_g7

0x88a2,	// (0x00027f66) volume_set_pane_vc_g8

0x88ab,	// (0x00027f6f) volume_set_pane_vc_g9

0x88b4,	// (0x00027f78) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0002ef75) volume_set_pane_vc_g

0xb34d,	// (0x0002aa11) volume_set_pane_vc

0xb357,	// (0x0002aa1b) button_value_adjust_pane_cp1_vc

0xb361,	// (0x0002aa25) list_highlight_pane_cp2_vc

0xb36a,	// (0x0002aa2e) list_set_pane_vc_ParamLimits

0xb36a,	// (0x0002aa2e) list_set_pane_vc

0xb3da,	// (0x0002aa9e) main_pane_set_vc_t1_ParamLimits

0xb3da,	// (0x0002aa9e) main_pane_set_vc_t1

0xb3ef,	// (0x0002aab3) main_pane_set_vc_t2_ParamLimits

0xb3ef,	// (0x0002aab3) main_pane_set_vc_t2

0xb401,	// (0x0002aac5) main_pane_set_vc_t3_ParamLimits

0xb401,	// (0x0002aac5) main_pane_set_vc_t3

0xb415,	// (0x0002aad9) main_pane_set_vc_t4_ParamLimits

0xb415,	// (0x0002aad9) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0002f0de) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0002f0de) main_pane_set_vc_t

0xb429,	// (0x0002aaed) setting_code_pane_vc_ParamLimits

0xb429,	// (0x0002aaed) setting_code_pane_vc

0xb43a,	// (0x0002aafe) setting_slider_graphic_pane_vc

0xb43a,	// (0x0002aafe) setting_slider_pane_vc

0xb43a,	// (0x0002aafe) setting_text_pane_vc

0xb43a,	// (0x0002aafe) setting_volume_pane_vc

0xb444,	// (0x0002ab08) scroll_pane_cp121_vc

0x12ec,	// (0x000209b0) set_content_pane_vc

0xb44c,	// (0x0002ab10) button_value_adjust_pane_g1

0xb455,	// (0x0002ab19) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x0002f13a) button_value_adjust_pane_g

0xb45e,	// (0x0002ab22) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb45e,	// (0x0002ab22) form_field_slider_wide_pane_vc_t1

0xb470,	// (0x0002ab34) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb470,	// (0x0002ab34) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x0002f13f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002f13f) form_field_slider_wide_pane_vc_t

0x0ca6,	// (0x0002036a) input_focus_pane_cp10_vc_ParamLimits

0x0ca6,	// (0x0002036a) input_focus_pane_cp10_vc

0xb49c,	// (0x0002ab60) slider_cont_pane_cp1_vc_ParamLimits

0xb49c,	// (0x0002ab60) slider_cont_pane_cp1_vc

0xb4ae,	// (0x0002ab72) slider_form_pane_g1_cp2

0xb2bc,	// (0x0002a980) slider_form_pane_g2_cp2

0xb4db,	// (0x0002ab9f) form_field_slider_pane_vc_t3

0xb4e9,	// (0x0002abad) form_field_slider_pane_vc_t4

0xb4f7,	// (0x0002abbb) slider_form_pane_vc_ParamLimits

0xb4f7,	// (0x0002abbb) slider_form_pane_vc

0xb504,	// (0x0002abc8) form_field_slider_pane_vc_t1_ParamLimits

0xb504,	// (0x0002abc8) form_field_slider_pane_vc_t1

0xb470,	// (0x0002ab34) form_field_slider_pane_vc_t2_ParamLimits

0xb470,	// (0x0002ab34) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x0002f151) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002f151) form_field_slider_pane_vc_t

0x0ca6,	// (0x0002036a) input_focus_pane_cp9_vc_ParamLimits

0x0ca6,	// (0x0002036a) input_focus_pane_cp9_vc

0xb51a,	// (0x0002abde) slider_cont_pane_vc_ParamLimits

0xb51a,	// (0x0002abde) slider_cont_pane_vc

0xb52e,	// (0x0002abf2) list_form_graphic_pane_cp_vc_ParamLimits

0xb52e,	// (0x0002abf2) list_form_graphic_pane_cp_vc

0x8559,	// (0x00027c1d) form_field_popup_wide_pane_vc_g1

0xb543,	// (0x0002ac07) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb543,	// (0x0002ac07) form_field_popup_wide_pane_vc_t1

0x2cbb,	// (0x0002237f) input_focus_pane_cp8_vc_ParamLimits

0x2cbb,	// (0x0002237f) input_focus_pane_cp8_vc

0xb588,	// (0x0002ac4c) list_form_wide_pane_vc_ParamLimits

0xb588,	// (0x0002ac4c) list_form_wide_pane_vc

0xb594,	// (0x0002ac58) list_form_graphic_pane_vc_g1

0xb59c,	// (0x0002ac60) list_form_graphic_pane_vc_t1_ParamLimits

0xb59c,	// (0x0002ac60) list_form_graphic_pane_vc_t1

0x0cb4,	// (0x00020378) list_highlight_pane_cp5_vc_ParamLimits

0x0cb4,	// (0x00020378) list_highlight_pane_cp5_vc

0xb5b8,	// (0x0002ac7c) list_form_graphic_pane_vc_ParamLimits

0xb5b8,	// (0x0002ac7c) list_form_graphic_pane_vc

0x8559,	// (0x00027c1d) form_field_popup_pane_vc_g1

0xb5ce,	// (0x0002ac92) form_field_popup_pane_vc_t1_ParamLimits

0xb5ce,	// (0x0002ac92) form_field_popup_pane_vc_t1

0x2cbb,	// (0x0002237f) input_focus_pane_cp7_vc_ParamLimits

0x2cbb,	// (0x0002237f) input_focus_pane_cp7_vc

0xb5e5,	// (0x0002aca9) list_form_pane_vc_ParamLimits

0xb5e5,	// (0x0002aca9) list_form_pane_vc

0xb5f1,	// (0x0002acb5) data_form_pane_vc_t1_ParamLimits

0xb5f1,	// (0x0002acb5) data_form_pane_vc_t1

0x2d84,	// (0x00022448) input_focus_pane_vc_g1

0x2d8c,	// (0x00022450) input_focus_pane_vc_g2

0x2d94,	// (0x00022458) input_focus_pane_vc_g3

0x2d9c,	// (0x00022460) input_focus_pane_vc_g4

0x2da4,	// (0x00022468) input_focus_pane_vc_g5

0x2dac,	// (0x00022470) input_focus_pane_vc_g6

0x2db4,	// (0x00022478) input_focus_pane_vc_g7

0x2dbc,	// (0x00022480) input_focus_pane_vc_g8

0x2dc4,	// (0x00022488) input_focus_pane_vc_g9

0x0c42,	// (0x00020306) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0002ed4b) input_focus_pane_vc_g

0x854d,	// (0x00027c11) data_form_pane_vc_ParamLimits

0x854d,	// (0x00027c11) data_form_pane_vc

0x8559,	// (0x00027c1d) form_field_data_pane_vc_g1

0xb60e,	// (0x0002acd2) form_field_data_pane_vc_t1_ParamLimits

0xb60e,	// (0x0002acd2) form_field_data_pane_vc_t1

0x2cbb,	// (0x0002237f) input_focus_pane_vc_ParamLimits

0x2cbb,	// (0x0002237f) input_focus_pane_vc

0xb628,	// (0x0002acec) button_value_adjust_pane_cp3_vc

0xb630,	// (0x0002acf4) button_value_adjust_pane_cp5_vc

0xb638,	// (0x0002acfc) form_field_data_pane_vc_ParamLimits

0xb638,	// (0x0002acfc) form_field_data_pane_vc

0xb653,	// (0x0002ad17) form_field_data_pane_vc_cp2

0xb65b,	// (0x0002ad1f) form_field_data_wide_pane_vc_ParamLimits

0xb65b,	// (0x0002ad1f) form_field_data_wide_pane_vc

0xb675,	// (0x0002ad39) form_field_data_wide_pane_vc_cp2

0xb67d,	// (0x0002ad41) form_field_popup_pane_vc_ParamLimits

0xb67d,	// (0x0002ad41) form_field_popup_pane_vc

0xb698,	// (0x0002ad5c) form_field_popup_wide_pane_vc_ParamLimits

0xb698,	// (0x0002ad5c) form_field_popup_wide_pane_vc

0xb6b2,	// (0x0002ad76) form_field_slider_pane_vc_ParamLimits

0xb6b2,	// (0x0002ad76) form_field_slider_pane_vc

0xb6c5,	// (0x0002ad89) form_field_slider_wide_pane_vc_ParamLimits

0xb6c5,	// (0x0002ad89) form_field_slider_wide_pane_vc

0xb6d8,	// (0x0002ad9c) grid_touch_1_pane_ParamLimits

0xb6d8,	// (0x0002ad9c) grid_touch_1_pane

0xb6e4,	// (0x0002ada8) grid_touch_2_pane_ParamLimits

0xb6e4,	// (0x0002ada8) grid_touch_2_pane

0x7640,	// (0x00026d04) touch_pane_g1_ParamLimits

0x7640,	// (0x00026d04) touch_pane_g1

0xb6fe,	// (0x0002adc2) cell_app_pane_cp_wide_ParamLimits

0xb6fe,	// (0x0002adc2) cell_app_pane_cp_wide

0xb70f,	// (0x0002add3) grid_popup_fast_wide_pane_ParamLimits

0xb70f,	// (0x0002add3) grid_popup_fast_wide_pane

0xb723,	// (0x0002ade7) scroll_pane_cp19_ParamLimits

0xb723,	// (0x0002ade7) scroll_pane_cp19

0x0c4c,	// (0x00020310) bg_popup_window_pane_cp20

0xb737,	// (0x0002adfb) listscroll_popup_fast_wide_pane

0x0cb4,	// (0x00020378) grid_indicator_nsta_pane

0xb73f,	// (0x0002ae03) clock_nsta_pane_g1

0xb748,	// (0x0002ae0c) clock_nsta_pane_t1

0xb764,	// (0x0002ae28) cell_indicator_nsta_pane_ParamLimits

0xb764,	// (0x0002ae28) cell_indicator_nsta_pane

0xb796,	// (0x0002ae5a) cell_indicator_nsta_pane_g1

0xb7a4,	// (0x0002ae68) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x0002f162) cell_indicator_nsta_pane_g

0xb7ba,	// (0x0002ae7e) clock_nsta_pane_cp

0xb7c2,	// (0x0002ae86) indicator_nsta_pane_cp

0xb7cb,	// (0x0002ae8f) nsta_clock_indic_pane_g1

0x0d0a,	// (0x000203ce) grid_indicator_pane

0x335b,	// (0x00022a1f) scroll_pane_cp29

0x70a4,	// (0x00026768) indicator_nsta_pane_cp2_ParamLimits

0x70a4,	// (0x00026768) indicator_nsta_pane_cp2

0x0cb4,	// (0x00020378) main_apps_wheel_pane

0x8740,	// (0x00027e04) form_midp_field_text_pane_ParamLimits

0x9afb,	// (0x000291bf) scroll_bar_cp050_ParamLimits

0xb834,	// (0x0002aef8) cell_indicator_pane_ParamLimits

0xb834,	// (0x0002aef8) cell_indicator_pane

0xb84c,	// (0x0002af10) cell_indicator_pane_g1

0xb856,	// (0x0002af1a) grid_wheel_folder_pane_ParamLimits

0xb856,	// (0x0002af1a) grid_wheel_folder_pane

0xb86a,	// (0x0002af2e) list_wheel_apps_pane_ParamLimits

0xb86a,	// (0x0002af2e) list_wheel_apps_pane

0xb87d,	// (0x0002af41) main_apps_wheel_pane_g1_ParamLimits

0xb87d,	// (0x0002af41) main_apps_wheel_pane_g1

0xb899,	// (0x0002af5d) main_apps_wheel_pane_g2_ParamLimits

0xb899,	// (0x0002af5d) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x0002f17e) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x0002f17e) main_apps_wheel_pane_g

0xb8b5,	// (0x0002af79) main_apps_wheel_pane_t1_ParamLimits

0xb8b5,	// (0x0002af79) main_apps_wheel_pane_t1

0xb8de,	// (0x0002afa2) list_wheel_apps_pane_g1

0xb8e6,	// (0x0002afaa) list_wheel_apps_pane_g2

0xb8ee,	// (0x0002afb2) list_wheel_apps_pane_g3

0xb8f6,	// (0x0002afba) list_wheel_apps_pane_g4

0xb900,	// (0x0002afc4) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x0002f183) list_wheel_apps_pane_g

0x36db,	// (0x00022d9f) navi_icon_text_pane

0x7e34,	// (0x000274f8) aid_fill_nsta

0xb921,	// (0x0002afe5) navi_icon_text_pane_g1

0xb92d,	// (0x0002aff1) navi_icon_text_pane_t1

0x71ed,	// (0x000268b1) list_set_graphic_pane_t1_ParamLimits

0x71ed,	// (0x000268b1) list_set_graphic_pane_t1

0xa24c,	// (0x00029910) popup_midp_note_alarm_window_t6_ParamLimits

0xa24c,	// (0x00029910) popup_midp_note_alarm_window_t6

0xa25e,	// (0x00029922) popup_midp_note_alarm_window_t7_ParamLimits

0xa25e,	// (0x00029922) popup_midp_note_alarm_window_t7

0xa270,	// (0x00029934) popup_midp_note_alarm_window_t8_ParamLimits

0xa270,	// (0x00029934) popup_midp_note_alarm_window_t8

0xa282,	// (0x00029946) popup_midp_note_alarm_window_t9_ParamLimits

0xa282,	// (0x00029946) popup_midp_note_alarm_window_t9

0xa294,	// (0x00029958) popup_midp_note_alarm_window_t10_ParamLimits

0xa294,	// (0x00029958) popup_midp_note_alarm_window_t10

0xa2a6,	// (0x0002996a) popup_midp_note_alarm_window_t11_ParamLimits

0xa2a6,	// (0x0002996a) popup_midp_note_alarm_window_t11

0xa2b8,	// (0x0002997c) scroll_pane_cp17_ParamLimits

0xa2b8,	// (0x0002997c) scroll_pane_cp17

0x8863,	// (0x00027f27) volume_small_pane_cp_g1

0x8b74,	// (0x00028238) volume_small_pane_cp_g2

0x8b7d,	// (0x00028241) volume_small_pane_cp_g3

0x8b86,	// (0x0002824a) volume_small_pane_cp_g4

0x8b8f,	// (0x00028253) volume_small_pane_cp_g5

0x8b98,	// (0x0002825c) volume_small_pane_cp_g6

0x8ba1,	// (0x00028265) volume_small_pane_cp_g7

0x8baa,	// (0x0002826e) volume_small_pane_cp_g8

0x8bb3,	// (0x00028277) volume_small_pane_cp_g9

0x8bbc,	// (0x00028280) volume_small_pane_cp_g10

0x735d,	// (0x00026a21) midp_ticker_pane_g1_ParamLimits

0x7369,	// (0x00026a2d) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002ee17) midp_ticker_pane_g_ParamLimits

0x7375,	// (0x00026a39) midp_ticker_pane_t1_ParamLimits

0x7e4a,	// (0x0002750e) aid_fill_nsta_2

0x9ae7,	// (0x000291ab) list_form2_midp_pane

0xac4f,	// (0x0002a313) midp_editing_number_pane_ParamLimits

0xac5e,	// (0x0002a322) midp_ticker_pane_ParamLimits

0xb93f,	// (0x0002b003) form2_midp_field_pane

0xb963,	// (0x0002b027) scroll_pane_cp51

0xb983,	// (0x0002b047) form2_midp_button_pane_ParamLimits

0xb983,	// (0x0002b047) form2_midp_button_pane

0xb995,	// (0x0002b059) form2_midp_content_pane_ParamLimits

0xb995,	// (0x0002b059) form2_midp_content_pane

0xb9af,	// (0x0002b073) form2_midp_field_choice_group_pane

0xb9b7,	// (0x0002b07b) form2_midp_field_pane_g1

0xb9bf,	// (0x0002b083) form2_midp_field_pane_g2

0xb9c7,	// (0x0002b08b) form2_midp_field_pane_g3

0xb9cf,	// (0x0002b093) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x0002f1a8) form2_midp_field_pane_g

0xb9d7,	// (0x0002b09b) form2_midp_gauge_slider_pane

0xb9df,	// (0x0002b0a3) form2_midp_gauge_wait_pane

0xb9e7,	// (0x0002b0ab) form2_midp_image_pane_ParamLimits

0xb9e7,	// (0x0002b0ab) form2_midp_image_pane

0xba02,	// (0x0002b0c6) form2_midp_label_pane_ParamLimits

0xba02,	// (0x0002b0c6) form2_midp_label_pane

0xba21,	// (0x0002b0e5) form2_midp_label_pane_cp_ParamLimits

0xba21,	// (0x0002b0e5) form2_midp_label_pane_cp

0xba42,	// (0x0002b106) form2_midp_string_pane_ParamLimits

0xba42,	// (0x0002b106) form2_midp_string_pane

0x5ff4,	// (0x000256b8) form2_midp_text_pane_ParamLimits

0x5ff4,	// (0x000256b8) form2_midp_text_pane

0xba54,	// (0x0002b118) form2_midp_time_pane

0xba64,	// (0x0002b128) input_focus_pane_cp51_ParamLimits

0xba64,	// (0x0002b128) input_focus_pane_cp51

0xba7c,	// (0x0002b140) form2_midp_label_pane_t1_ParamLimits

0xba7c,	// (0x0002b140) form2_midp_label_pane_t1

0x6015,	// (0x000256d9) form2_mdip_text_pane_t1_ParamLimits

0x6015,	// (0x000256d9) form2_mdip_text_pane_t1

0x6039,	// (0x000256fd) form2_midp_time_pane_t1

0xbaca,	// (0x0002b18e) form2_midp_gauge_slider_pane_t1

0xbadc,	// (0x0002b1a0) form2_midp_gauge_slider_pane_t2

0xbaee,	// (0x0002b1b2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x0002f1b1) form2_midp_gauge_slider_pane_t

0xbb00,	// (0x0002b1c4) form2_midp_slider_pane

0xbb0c,	// (0x0002b1d0) form2_midp_gauge_wait_pane_t1

0xbb1a,	// (0x0002b1de) form2_midp_wait_pane_ParamLimits

0xbb1a,	// (0x0002b1de) form2_midp_wait_pane

0x85a0,	// (0x00027c64) list_single_2graphic_pane_cp4_ParamLimits

0x85a0,	// (0x00027c64) list_single_2graphic_pane_cp4

0xbb45,	// (0x0002b209) list_single_midp_graphic_pane_cp_ParamLimits

0xbb45,	// (0x0002b209) list_single_midp_graphic_pane_cp

0x0c4c,	// (0x00020310) list_highlight_pane_cp20

0xbb69,	// (0x0002b22d) list_single_2graphic_pane_g1_cp4

0xb106,	// (0x0002a7ca) list_single_2graphic_pane_g2_cp4

0xbb71,	// (0x0002b235) list_single_2graphic_pane_t1_cp4

0x0cb4,	// (0x00020378) list_highlight_pane_cp21

0xbb80,	// (0x0002b244) list_single_midp_graphic_pane_g4_cp

0xbb8f,	// (0x0002b253) list_single_midp_graphic_pane_t1_cp

0xbba4,	// (0x0002b268) form2_mdip_string_pane_t1_ParamLimits

0xbba4,	// (0x0002b268) form2_mdip_string_pane_t1

0x0c4c,	// (0x00020310) bg_wml_button_pane_cp2

0x0c42,	// (0x00020306) form2_midp_image_pane_g1

0x551a,	// (0x00024bde) list_double_large_graphic_pane_g5_ParamLimits

0x551a,	// (0x00024bde) list_double_large_graphic_pane_g5

0x6bfc,	// (0x000262c0) midp_form_pane_ParamLimits

0x0cb4,	// (0x00020378) main_apps_wheel_pane_ParamLimits

0x7bde,	// (0x000272a2) popup_preview_window_ParamLimits

0x7bde,	// (0x000272a2) popup_preview_window

0x7dc5,	// (0x00027489) popup_touch_info_window_ParamLimits

0x7dc5,	// (0x00027489) popup_touch_info_window

0x7de7,	// (0x000274ab) popup_touch_menu_window_ParamLimits

0x7de7,	// (0x000274ab) popup_touch_menu_window

0x0c38,	// (0x000202fc) bg_popup_sub_pane_cp6

0xbc49,	// (0x0002b30d) list_touch_menu_pane

0xbc51,	// (0x0002b315) list_single_touch_menu_pane_ParamLimits

0xbc51,	// (0x0002b315) list_single_touch_menu_pane

0xbc69,	// (0x0002b32d) list_single_touch_menu_pane_t1

0x0cb4,	// (0x00020378) bg_popup_sub_pane_cp7_ParamLimits

0x0cb4,	// (0x00020378) bg_popup_sub_pane_cp7

0xbc77,	// (0x0002b33b) heading_sub_pane

0xbc7f,	// (0x0002b343) list_touch_info_pane_ParamLimits

0xbc7f,	// (0x0002b343) list_touch_info_pane

0xbc8e,	// (0x0002b352) list_single_touch_info_pane_ParamLimits

0xbc8e,	// (0x0002b352) list_single_touch_info_pane

0xbca0,	// (0x0002b364) list_single_touch_info_pane_t1

0xbcae,	// (0x0002b372) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x0002f1bf) list_single_touch_info_pane_t

0x382b,	// (0x00022eef) bg_popup_heading_pane_cp

0xbcbc,	// (0x0002b380) heading_sub_pane_t1

0x8459,	// (0x00027b1d) bg_popup_preview_window_pane_cp_ParamLimits

0x8459,	// (0x00027b1d) bg_popup_preview_window_pane_cp

0xbc77,	// (0x0002b33b) heading_preview_pane

0xbc7f,	// (0x0002b343) list_preview_pane_ParamLimits

0xbc7f,	// (0x0002b343) list_preview_pane

0xbcca,	// (0x0002b38e) popup_preview_window_g1

0xbc8e,	// (0x0002b352) list_single_preview_pane_ParamLimits

0xbc8e,	// (0x0002b352) list_single_preview_pane

0xbcd2,	// (0x0002b396) list_single_preview_pane_g1

0xbcda,	// (0x0002b39e) list_single_preview_pane_t1

0xbca0,	// (0x0002b364) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x0002f1c4) list_single_preview_pane_t

0xbce8,	// (0x0002b3ac) bg_popup_heading_pane_cp2_ParamLimits

0xbce8,	// (0x0002b3ac) bg_popup_heading_pane_cp2

0xbcfe,	// (0x0002b3c2) heading_preview_pane_g1

0xbd06,	// (0x0002b3ca) heading_preview_pane_t1_ParamLimits

0xbd06,	// (0x0002b3ca) heading_preview_pane_t1

0x0d21,	// (0x000203e5) soft_indicator_pane_t1_ParamLimits

0x1256,	// (0x0002091a) scroll_pane_ParamLimits

0x3260,	// (0x00022924) scroll_sc2_left_pane

0x3257,	// (0x0002291b) scroll_sc2_right_pane

0x327f,	// (0x00022943) scroll_bg_pane_g1_ParamLimits

0x3294,	// (0x00022958) scroll_bg_pane_g2_ParamLimits

0x32ac,	// (0x00022970) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002eda2) scroll_bg_pane_g_ParamLimits

0x327f,	// (0x00022943) scroll_handle_pane_g1_ParamLimits

0x32ce,	// (0x00022992) scroll_handle_pane_g2_ParamLimits

0x32ac,	// (0x00022970) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002eda9) scroll_handle_pane_g_ParamLimits

0x7825,	// (0x00026ee9) popup_choice_list_window_ParamLimits

0x7825,	// (0x00026ee9) popup_choice_list_window

0x8288,	// (0x0002794c) choice_list_pane

0x833a,	// (0x000279fe) cell_toolbar_pane_t1

0x8362,	// (0x00027a26) toolbar_button_pane_ParamLimits

0xa782,	// (0x00029e46) ai_gene_pane_1_t2_ParamLimits

0xa782,	// (0x00029e46) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002efd1) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002efd1) ai_gene_pane_1_t

0xbd23,	// (0x0002b3e7) scroll_sc2_left_pane_g1

0xbd23,	// (0x0002b3e7) scroll_sc2_right_pane_g1

0x77fd,	// (0x00026ec1) bg_popup_sub_pane_cp10

0xbd2d,	// (0x0002b3f1) list_choice_list_pane

0xbd46,	// (0x0002b40a) list_single_choice_list_pane_ParamLimits

0xbd46,	// (0x0002b40a) list_single_choice_list_pane

0xbd5e,	// (0x0002b422) list_single_choice_list_pane_g1

0x2ea9,	// (0x0002256d) list_single_choice_list_pane_t1_ParamLimits

0x2ea9,	// (0x0002256d) list_single_choice_list_pane_t1

0xbd66,	// (0x0002b42a) choice_list_pane_g1

0xbd6e,	// (0x0002b432) choice_list_pane_t1

0x0c38,	// (0x000202fc) input_focus_pane_cp11

0x3077,	// (0x0002273b) title_pane_stacon_g2_ParamLimits

0x3077,	// (0x0002273b) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002ed88) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002ed88) title_pane_stacon_g

0x382b,	// (0x00022eef) cursor_press_pane

0x78df,	// (0x00026fa3) popup_fep_hwr_window_ParamLimits

0x78df,	// (0x00026fa3) popup_fep_hwr_window

0x7969,	// (0x0002702d) popup_fep_vkb_window_ParamLimits

0x7969,	// (0x0002702d) popup_fep_vkb_window

0xbd7c,	// (0x0002b440) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x0002f1ed) fep_vkb_side_pane_g_ParamLimits

0x8bf0,	// (0x000282b4) fep_hwr_candidate_pane_ParamLimits

0x8bf0,	// (0x000282b4) fep_hwr_candidate_pane

0x8c1a,	// (0x000282de) fep_hwr_side_pane_ParamLimits

0x8c1a,	// (0x000282de) fep_hwr_side_pane

0x8c3c,	// (0x00028300) fep_hwr_top_pane_ParamLimits

0x8c3c,	// (0x00028300) fep_hwr_top_pane

0x8c54,	// (0x00028318) fep_hwr_write_pane_ParamLimits

0x8c54,	// (0x00028318) fep_hwr_write_pane

0xfb29,	// (0x0002f1ed) fep_vkb_side_pane_g

0xbd84,	// (0x0002b448) fep_hwr_top_pane_g1

0xbd96,	// (0x0002b45a) fep_hwr_top_pane_g2

0x8c80,	// (0x00028344) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x0002f1c9) fep_hwr_top_pane_g

0x8c95,	// (0x00028359) fep_hwr_top_text_pane

0x33c8,	// (0x00022a8c) fep_hwr_top_text_pane_g1

0xbdcc,	// (0x0002b490) fep_hwr_top_text_pane_t1

0x8d9f,	// (0x00028463) fep_hwr_candidate_pane_g1

0xc017,	// (0x0002b6db) fep_vkb_keypad_pane_g3_ParamLimits

0xc017,	// (0x0002b6db) fep_vkb_keypad_pane_g3

0xc043,	// (0x0002b707) fep_vkb_keypad_pane_g4_ParamLimits

0xc043,	// (0x0002b707) fep_vkb_keypad_pane_g4

0xc0ba,	// (0x0002b77e) fep_vkb_bottom_pane_g2_ParamLimits

0xc0ba,	// (0x0002b77e) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x0002f1f4) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x0002f1f4) fep_vkb_bottom_pane_g

0xbd23,	// (0x0002b3e7) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x0002f1fe) cell_vkb_side_pane_g

0xc145,	// (0x0002b809) cell_vkb_side_pane_t1

0xc153,	// (0x0002b817) cell_vkb_side_pane_t1_copy1

0xbd23,	// (0x0002b3e7) bg_fep_vkb_candidate_pane_g2

0xc297,	// (0x0002b95b) cell_vkb_candidate_pane_ParamLimits

0xbdda,	// (0x0002b49e) aid_size_cell_vkb_ParamLimits

0xbdda,	// (0x0002b49e) aid_size_cell_vkb

0xc297,	// (0x0002b95b) cell_vkb_candidate_pane

0x8db9,	// (0x0002847d) bg_popup_fep_shadow_pane_g1

0xbe6c,	// (0x0002b530) fep_vkb_bottom_pane_ParamLimits

0xbe6c,	// (0x0002b530) fep_vkb_bottom_pane

0xbea9,	// (0x0002b56d) fep_vkb_candidate_pane_ParamLimits

0xbea9,	// (0x0002b56d) fep_vkb_candidate_pane

0xbec5,	// (0x0002b589) fep_vkb_keypad_pane_ParamLimits

0xbec5,	// (0x0002b589) fep_vkb_keypad_pane

0xbef8,	// (0x0002b5bc) fep_vkb_side_pane_ParamLimits

0xbef8,	// (0x0002b5bc) fep_vkb_side_pane

0xbf34,	// (0x0002b5f8) fep_vkb_top_pane_ParamLimits

0xbf34,	// (0x0002b5f8) fep_vkb_top_pane

0xbf70,	// (0x0002b634) fep_vkb_top_pane_g1_ParamLimits

0xbf70,	// (0x0002b634) fep_vkb_top_pane_g1

0xbf7f,	// (0x0002b643) fep_vkb_top_pane_g2_ParamLimits

0xbf7f,	// (0x0002b643) fep_vkb_top_pane_g2

0xbf8e,	// (0x0002b652) fep_vkb_top_pane_g3_ParamLimits

0xbf8e,	// (0x0002b652) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x0002f1e4) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x0002f1e4) fep_vkb_top_pane_g

0xbfac,	// (0x0002b670) fep_vkb_top_text_pane_ParamLimits

0xbfac,	// (0x0002b670) fep_vkb_top_text_pane

0xbfbd,	// (0x0002b681) fep_vkb_side_pane_g1_ParamLimits

0xbfbd,	// (0x0002b681) fep_vkb_side_pane_g1

0xc006,	// (0x0002b6ca) grid_vkb_side_pane_ParamLimits

0xc006,	// (0x0002b6ca) grid_vkb_side_pane

0x8dc1,	// (0x00028485) bg_popup_fep_shadow_pane_g2

0x8dca,	// (0x0002848e) bg_popup_fep_shadow_pane_g3

0x8dd2,	// (0x00028496) bg_popup_fep_shadow_pane_g4

0x8ddb,	// (0x0002849f) bg_popup_fep_shadow_pane_g5

0x8de5,	// (0x000284a9) bg_popup_fep_shadow_pane_g6

0x8ded,	// (0x000284b1) bg_popup_fep_shadow_pane_g7

0x2da4,	// (0x00022468) bg_popup_fep_shadow_pane_g8

0xc065,	// (0x0002b729) grid_vkb_keypad_number_pane_ParamLimits

0xc065,	// (0x0002b729) grid_vkb_keypad_number_pane

0xc079,	// (0x0002b73d) grid_vkb_keypad_pane_ParamLimits

0xc079,	// (0x0002b73d) grid_vkb_keypad_pane

0xc09f,	// (0x0002b763) fep_vkb_bottom_pane_g1_ParamLimits

0xc09f,	// (0x0002b763) fep_vkb_bottom_pane_g1

0xc0c8,	// (0x0002b78c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc0c8,	// (0x0002b78c) grid_vkb_keypad_bottom_left_pane

0xc0dd,	// (0x0002b7a1) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc0dd,	// (0x0002b7a1) grid_vkb_keypad_bottom_right_pane

0xc0f2,	// (0x0002b7b6) fep_vkb_top_text_pane_g1

0xc10d,	// (0x0002b7d1) fep_vkb_top_text_pane_t1

0xc122,	// (0x0002b7e6) cell_vkb_side_pane_ParamLimits

0xc122,	// (0x0002b7e6) cell_vkb_side_pane

0xbd23,	// (0x0002b3e7) cell_vkb_side_pane_g1

0xc161,	// (0x0002b825) cell_vkb_keypad_pane_ParamLimits

0xc161,	// (0x0002b825) cell_vkb_keypad_pane

0xc1ee,	// (0x0002b8b2) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x0002f211) bg_popup_fep_shadow_pane_g

0xbd23,	// (0x0002b3e7) cell_hwr_side_pane_g1

0xbd23,	// (0x0002b3e7) cell_hwr_side_pane_g2

0xc1f8,	// (0x0002b8bc) cell_vkb_keypad_pane_t1

0xc206,	// (0x0002b8ca) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc206,	// (0x0002b8ca) cell_vkb_keypad_bottom_left_pane

0xc223,	// (0x0002b8e7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc223,	// (0x0002b8e7) cell_vkb_keypad_bottom_right_pane

0xbd23,	// (0x0002b3e7) cell_vkb_keypad_bottom_left_pane_g1

0xbd23,	// (0x0002b3e7) cell_vkb_keypad_bottom_right_pane_g1

0xc25c,	// (0x0002b920) cell_vkb_keypad_number_pane_ParamLimits

0xc25c,	// (0x0002b920) cell_vkb_keypad_number_pane

0xc27b,	// (0x0002b93f) cell_vkb_keypad_number_pane_g1

0xc285,	// (0x0002b949) cell_vkb_keypad_number_pane_g2

0xc28e,	// (0x0002b952) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x0002f203) cell_vkb_keypad_number_pane_g

0xc1f8,	// (0x0002b8bc) cell_vkb_keypad_number_pane_t1

0xc2b8,	// (0x0002b97c) fep_vkb_candidate_pane_g1

0x0001,

0xfb3a,	// (0x0002f1fe) cell_hwr_side_pane_g

0xc2d1,	// (0x0002b995) cell_hwr_side_pane_t1

0x8dff,	// (0x000284c3) cell_hwr_side_pane_t1_copy1

0xbf9e,	// (0x0002b662) cell_hwr_candidate_pane_g1

0x8e0d,	// (0x000284d1) cell_hwr_candidate_pane_t1

0xbd23,	// (0x0002b3e7) cell_vkb_candidate_pane_g2

0xc357,	// (0x0002ba1b) cell_vkb_candidate_pane_t1

0xf540,	// (0x0002ec04) bg_popup_fep_shadow_pane_ParamLimits

0xf540,	// (0x0002ec04) bg_popup_fep_shadow_pane

0x0c08,	// (0x000202cc) bg_fep_hwr_top_pane_g4

0xbda8,	// (0x0002b46c) bg_hwr_side_pane_g1_ParamLimits

0xbda8,	// (0x0002b46c) bg_hwr_side_pane_g1

0x8cd3,	// (0x00028397) cell_hwr_side_pane_ParamLimits

0x8cd3,	// (0x00028397) cell_hwr_side_pane

0x8d10,	// (0x000283d4) fep_hwr_write_pane_g1_ParamLimits

0x8d10,	// (0x000283d4) fep_hwr_write_pane_g1

0x8d1d,	// (0x000283e1) fep_hwr_write_pane_g2_ParamLimits

0x8d1d,	// (0x000283e1) fep_hwr_write_pane_g2

0x8d2a,	// (0x000283ee) fep_hwr_write_pane_g3_ParamLimits

0x8d2a,	// (0x000283ee) fep_hwr_write_pane_g3

0x8d38,	// (0x000283fc) fep_hwr_write_pane_g4_ParamLimits

0x8d38,	// (0x000283fc) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x0002f1d0) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x0002f1d0) fep_hwr_write_pane_g

0x0c08,	// (0x000202cc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0c08,	// (0x000202cc) bg_fep_hwr_candidate_pane_g2

0x8d4d,	// (0x00028411) cell_hwr_candidate_pane_ParamLimits

0x8d4d,	// (0x00028411) cell_hwr_candidate_pane

0x8d9f,	// (0x00028463) fep_hwr_candidate_pane_g1_ParamLimits

0xbe08,	// (0x0002b4cc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbe08,	// (0x0002b4cc) bg_popup_fep_shadow_pane_cp2

0xbf9e,	// (0x0002b662) fep_vkb_top_pane_g4_ParamLimits

0xbf9e,	// (0x0002b662) fep_vkb_top_pane_g4

0xbfe4,	// (0x0002b6a8) fep_vkb_side_pane_g2_ParamLimits

0xbfe4,	// (0x0002b6a8) fep_vkb_side_pane_g2

0x5683,	// (0x00024d47) list_setting_pane_t4_ParamLimits

0x5683,	// (0x00024d47) list_setting_pane_t4

0x571f,	// (0x00024de3) list_setting_number_pane_t5_ParamLimits

0x571f,	// (0x00024de3) list_setting_number_pane_t5

0x6ee1,	// (0x000265a5) list_double_heading_pane_cp2_ParamLimits

0x6ee1,	// (0x000265a5) list_double_heading_pane_cp2

0xc365,	// (0x0002ba29) list_double_heading_pane_g1_cp2_ParamLimits

0xc365,	// (0x0002ba29) list_double_heading_pane_g1_cp2

0xc371,	// (0x0002ba35) list_double_heading_pane_g2_cp2_ParamLimits

0xc371,	// (0x0002ba35) list_double_heading_pane_g2_cp2

0xc385,	// (0x0002ba49) list_double_heading_pane_t1_cp2_ParamLimits

0xc385,	// (0x0002ba49) list_double_heading_pane_t1_cp2

0xc39b,	// (0x0002ba5f) list_double_heading_pane_t2_cp2_ParamLimits

0xc39b,	// (0x0002ba5f) list_double_heading_pane_t2_cp2

0x0c30,	// (0x000202f4) aid_value_unit2

0x66e8,	// (0x00025dac) popup_preview_fixed_window

0x0e01,	// (0x000204c5) bg_popup_preview_window_pane_cp02

0xc3ad,	// (0x0002ba71) list_preview_fixed_pane

0xc3f3,	// (0x0002bab7) list_empty_pane_fp_ParamLimits

0xc3f3,	// (0x0002bab7) list_empty_pane_fp

0xc3f3,	// (0x0002bab7) list_single_cale_day_pane_fp_ParamLimits

0xc3f3,	// (0x0002bab7) list_single_cale_day_pane_fp

0xc3f3,	// (0x0002bab7) list_single_graphic_heading_pane_fp_ParamLimits

0xc3f3,	// (0x0002bab7) list_single_graphic_heading_pane_fp

0xc3f3,	// (0x0002bab7) list_single_graphic_pane_fp_ParamLimits

0xc3f3,	// (0x0002bab7) list_single_graphic_pane_fp

0xc3f3,	// (0x0002bab7) list_single_heading_pane_fp_ParamLimits

0xc3f3,	// (0x0002bab7) list_single_heading_pane_fp

0xc3f3,	// (0x0002bab7) list_single_pane_fp_ParamLimits

0xc3f3,	// (0x0002bab7) list_single_pane_fp

0xc40c,	// (0x0002bad0) list_single_pane_fp_g1_ParamLimits

0xc40c,	// (0x0002bad0) list_single_pane_fp_g1

0x604c,	// (0x00025710) list_single_pane_fp_g2_ParamLimits

0x604c,	// (0x00025710) list_single_pane_fp_g2

0x6058,	// (0x0002571c) list_single_pane_fp_g3_ParamLimits

0x6058,	// (0x0002571c) list_single_pane_fp_g3

0xc418,	// (0x0002badc) list_single_pane_fp_g4_ParamLimits

0xc418,	// (0x0002badc) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x0002f232) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002f232) list_single_pane_fp_g

0x606c,	// (0x00025730) list_single_pane_fp_t1_ParamLimits

0x606c,	// (0x00025730) list_single_pane_fp_t1

0x6083,	// (0x00025747) list_single_graphic_pane_fp_g1_ParamLimits

0x6083,	// (0x00025747) list_single_graphic_pane_fp_g1

0xc40c,	// (0x0002bad0) list_single_graphic_pane_fp_g2_ParamLimits

0xc40c,	// (0x0002bad0) list_single_graphic_pane_fp_g2

0x604c,	// (0x00025710) list_single_graphic_pane_fp_g3_ParamLimits

0x604c,	// (0x00025710) list_single_graphic_pane_fp_g3

0x6058,	// (0x0002571c) list_single_graphic_pane_fp_g4_ParamLimits

0x6058,	// (0x0002571c) list_single_graphic_pane_fp_g4

0xc418,	// (0x0002badc) list_single_graphic_pane_fp_g5_ParamLimits

0xc418,	// (0x0002badc) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f23b) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f23b) list_single_graphic_pane_fp_g

0x608f,	// (0x00025753) list_single_graphic_pane_fp_t1_ParamLimits

0x608f,	// (0x00025753) list_single_graphic_pane_fp_t1

0x6083,	// (0x00025747) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6083,	// (0x00025747) list_single_graphic_heading_pane_fp_g1

0xc40c,	// (0x0002bad0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc40c,	// (0x0002bad0) list_single_graphic_heading_pane_fp_g2

0x604c,	// (0x00025710) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x604c,	// (0x00025710) list_single_graphic_heading_pane_fp_g3

0x6058,	// (0x0002571c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6058,	// (0x0002571c) list_single_graphic_heading_pane_fp_g4

0xc418,	// (0x0002badc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc418,	// (0x0002badc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f23b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f23b) list_single_graphic_heading_pane_fp_g

0x60a5,	// (0x00025769) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x60a5,	// (0x00025769) list_single_graphic_heading_pane_fp_t1

0x60bb,	// (0x0002577f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x60bb,	// (0x0002577f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x0002f246) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x0002f246) list_single_graphic_heading_pane_fp_t

0x60cd,	// (0x00025791) list_single_cale_day_pane_fp_g1_ParamLimits

0x60cd,	// (0x00025791) list_single_cale_day_pane_fp_g1

0xc424,	// (0x0002bae8) list_single_cale_day_pane_fp_g2_ParamLimits

0xc424,	// (0x0002bae8) list_single_cale_day_pane_fp_g2

0x6105,	// (0x000257c9) list_single_cale_day_pane_fp_g3_ParamLimits

0x6105,	// (0x000257c9) list_single_cale_day_pane_fp_g3

0x612d,	// (0x000257f1) list_single_cale_day_pane_fp_g4_ParamLimits

0x612d,	// (0x000257f1) list_single_cale_day_pane_fp_g4

0x6151,	// (0x00025815) list_single_cale_day_pane_fp_g5_ParamLimits

0x6151,	// (0x00025815) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x0002f24b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x0002f24b) list_single_cale_day_pane_fp_g

0x6175,	// (0x00025839) list_single_cale_day_pane_fp_t1_ParamLimits

0x6175,	// (0x00025839) list_single_cale_day_pane_fp_t1

0x619b,	// (0x0002585f) list_single_cale_day_pane_fp_t2_ParamLimits

0x619b,	// (0x0002585f) list_single_cale_day_pane_fp_t2

0x61b4,	// (0x00025878) list_single_cale_day_pane_fp_t3_ParamLimits

0x61b4,	// (0x00025878) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x0002f256) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x0002f256) list_single_cale_day_pane_fp_t

0xc40c,	// (0x0002bad0) list_empty_pane_fp_g1_ParamLimits

0xc40c,	// (0x0002bad0) list_empty_pane_fp_g1

0x61cd,	// (0x00025891) list_empty_pane_fp_t1

0x61db,	// (0x0002589f) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x0002f25d) list_empty_pane_fp_t

0xc40c,	// (0x0002bad0) list_single_heading_pane_fp_g1_ParamLimits

0xc40c,	// (0x0002bad0) list_single_heading_pane_fp_g1

0x604c,	// (0x00025710) list_single_heading_pane_fp_g2_ParamLimits

0x604c,	// (0x00025710) list_single_heading_pane_fp_g2

0x6058,	// (0x0002571c) list_single_heading_pane_fp_g3_ParamLimits

0x6058,	// (0x0002571c) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x0002f262) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x0002f262) list_single_heading_pane_fp_g

0x61e9,	// (0x000258ad) list_single_heading_pane_fp_t1_ParamLimits

0x61e9,	// (0x000258ad) list_single_heading_pane_fp_t1

0x61fb,	// (0x000258bf) list_single_heading_pane_fp_t2_ParamLimits

0x61fb,	// (0x000258bf) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0002f269) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0002f269) list_single_heading_pane_fp_t

0x2ebe,	// (0x00022582) aid_size_cell_fast

0x0de4,	// (0x000204a8) soft_indicator_pane_cp1_t1

0x2efb,	// (0x000225bf) cell_app_pane_cp2_ParamLimits

0x2efb,	// (0x000225bf) cell_app_pane_cp2

0x8bd9,	// (0x0002829d) fep_hwr_candidate_drop_down_list_pane

0x0c16,	// (0x000202da) fep_hwr_candidate_pane_g3_ParamLimits

0x0c16,	// (0x000202da) fep_hwr_candidate_pane_g3

0x0c23,	// (0x000202e7) fep_hwr_candidate_pane_g4_ParamLimits

0x0c23,	// (0x000202e7) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x0002f1dd) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x0002f1dd) fep_hwr_candidate_pane_g

0xbe98,	// (0x0002b55c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe98,	// (0x0002b55c) fep_vkb_candidate_drop_down_list_pane

0xc2c0,	// (0x0002b984) fep_vkb_candidate_pane_g3

0xc2c8,	// (0x0002b98c) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002f20a) fep_vkb_candidate_pane_g

0xbf9e,	// (0x0002b662) cell_hwr_candidate_pane_g1_ParamLimits

0xc2df,	// (0x0002b9a3) cell_hwr_candidate_pane_g3_ParamLimits

0xc2df,	// (0x0002b9a3) cell_hwr_candidate_pane_g3

0xc300,	// (0x0002b9c4) cell_hwr_candidate_pane_g4_ParamLimits

0xc300,	// (0x0002b9c4) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x0002f224) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x0002f224) cell_hwr_candidate_pane_g

0xc321,	// (0x0002b9e5) cell_vkb_candidate_pane_g3_ParamLimits

0xc321,	// (0x0002b9e5) cell_vkb_candidate_pane_g3

0xc33c,	// (0x0002ba00) cell_vkb_candidate_pane_g4_ParamLimits

0xc33c,	// (0x0002ba00) cell_vkb_candidate_pane_g4

0xc430,	// (0x0002baf4) cell_app_pane_cp2_g1_ParamLimits

0xc430,	// (0x0002baf4) cell_app_pane_cp2_g1

0xc44e,	// (0x0002bb12) cell_app_pane_cp2_g2_ParamLimits

0xc44e,	// (0x0002bb12) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0002f26e) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0002f26e) cell_app_pane_cp2_g

0xc45a,	// (0x0002bb1e) cell_app_pane_cp2_t1_ParamLimits

0xc45a,	// (0x0002bb1e) cell_app_pane_cp2_t1

0x2cbb,	// (0x0002237f) grid_highlight_pane_cp1_ParamLimits

0x2cbb,	// (0x0002237f) grid_highlight_pane_cp1

0x8e2b,	// (0x000284ef) cell_hwr_candidate_pane_cp1_ParamLimits

0x8e2b,	// (0x000284ef) cell_hwr_candidate_pane_cp1

0xbf9e,	// (0x0002b662) fep_hwr_candidate_drop_down_list_pane_g1

0xc46c,	// (0x0002bb30) fep_hwr_candidate_drop_down_list_pane_g2

0xc479,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002f273) fep_hwr_candidate_drop_down_list_pane_g

0x8e4f,	// (0x00028513) fep_hwr_candidate_drop_down_list_scroll_pane

0x8e58,	// (0x0002851c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8e58,	// (0x0002851c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8e65,	// (0x00028529) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8e65,	// (0x00028529) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8e72,	// (0x00028536) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8e72,	// (0x00028536) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc321,	// (0x0002b9e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc321,	// (0x0002b9e5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc33c,	// (0x0002ba00) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc33c,	// (0x0002ba00) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8e7f,	// (0x00028543) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8e7f,	// (0x00028543) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8e9a,	// (0x0002855e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8e9a,	// (0x0002855e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8eb5,	// (0x00028579) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8eb5,	// (0x00028579) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0002f27a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0002f27a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc486,	// (0x0002bb4a) cell_vkb_candidate_pane_cp1_ParamLimits

0xc486,	// (0x0002bb4a) cell_vkb_candidate_pane_cp1

0xbf9e,	// (0x0002b662) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) fep_vkb_candidate_drop_down_list_pane_g1

0xc46c,	// (0x0002bb30) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc46c,	// (0x0002bb30) fep_vkb_candidate_drop_down_list_pane_g2

0xc479,	// (0x0002bb3d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc479,	// (0x0002bb3d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002f273) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x0002f273) fep_vkb_candidate_drop_down_list_pane_g

0xc4ac,	// (0x0002bb70) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc4ac,	// (0x0002bb70) fep_vkb_candidate_drop_down_list_scroll_pane

0xc4b9,	// (0x0002bb7d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc4b9,	// (0x0002bb7d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc4c6,	// (0x0002bb8a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc4c6,	// (0x0002bb8a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc4d2,	// (0x0002bb96) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc4d2,	// (0x0002bb96) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc2df,	// (0x0002b9a3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc2df,	// (0x0002b9a3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc300,	// (0x0002b9c4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc300,	// (0x0002b9c4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc4de,	// (0x0002bba2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc4de,	// (0x0002bba2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc4ff,	// (0x0002bbc3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc4ff,	// (0x0002bbc3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc520,	// (0x0002bbe4) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc520,	// (0x0002bbe4) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x0002f28b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x0002f28b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6808,	// (0x00025ecc) title_pane_g1_ParamLimits

0x6815,	// (0x00025ed9) title_pane_g2_ParamLimits

0xf54e,	// (0x0002ec12) title_pane_g_ParamLimits

0x33c0,	// (0x00022a84) aid_call2_pane

0x33b8,	// (0x00022a7c) aid_call_pane

0x33c8,	// (0x00022a8c) popup_clock_analogue_window_g1

0x33c8,	// (0x00022a8c) popup_clock_analogue_window_g2

0x6ec2,	// (0x00026586) popup_clock_analogue_window_g3

0x6ecb,	// (0x0002658f) popup_clock_analogue_window_g4

0x0c42,	// (0x00020306) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002edb7) popup_clock_analogue_window_g

0x6ed3,	// (0x00026597) popup_clock_analogue_window_t1

0x6f14,	// (0x000265d8) clock_digital_number_pane_ParamLimits

0x6f14,	// (0x000265d8) clock_digital_number_pane

0x6f20,	// (0x000265e4) clock_digital_number_pane_cp02_ParamLimits

0x6f20,	// (0x000265e4) clock_digital_number_pane_cp02

0x6f2c,	// (0x000265f0) clock_digital_number_pane_cp03_ParamLimits

0x6f2c,	// (0x000265f0) clock_digital_number_pane_cp03

0x6f38,	// (0x000265fc) clock_digital_number_pane_cp04_ParamLimits

0x6f38,	// (0x000265fc) clock_digital_number_pane_cp04

0x6f44,	// (0x00026608) clock_digital_separator_pane_ParamLimits

0x6f44,	// (0x00026608) clock_digital_separator_pane

0x6f50,	// (0x00026614) popup_clock_digital_window_t1_ParamLimits

0x6f50,	// (0x00026614) popup_clock_digital_window_t1

0x0c42,	// (0x00020306) clock_digital_number_pane_g1

0x0c42,	// (0x00020306) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002edc2) clock_digital_number_pane_g

0x0c42,	// (0x00020306) clock_digital_separator_pane_g1

0x0c42,	// (0x00020306) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002edc2) clock_digital_separator_pane_g

0x7e34,	// (0x000274f8) aid_fill_nsta_ParamLimits

0x7f84,	// (0x00027648) indicator_nsta_pane_ParamLimits

0x8115,	// (0x000277d9) popup_clock_analogue_window

0x8115,	// (0x000277d9) popup_clock_digital_window

0x0cb4,	// (0x00020378) grid_indicator_nsta_pane_ParamLimits

0xb756,	// (0x0002ae1a) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x0002f15d) clock_nsta_pane_t

0x6e2b,	// (0x000264ef) aid_size_max_handle

0x6e35,	// (0x000264f9) aid_size_min_handle

0x382b,	// (0x00022eef) editor_scroll_pane

0xc53b,	// (0x0002bbff) ex_editor_pane

0x2e84,	// (0x00022548) scroll_pane_cp13

0x1282,	// (0x00020946) scroll_pane_cp14

0x33f7,	// (0x00022abb) scroll_pane_cp36

0x6ef7,	// (0x000265bb) list_single_graphic_hl_pane_cp2_ParamLimits

0x6ef7,	// (0x000265bb) list_single_graphic_hl_pane_cp2

0x5c81,	// (0x00025345) list_single_graphic_hl_pane_ParamLimits

0x5c81,	// (0x00025345) list_single_graphic_hl_pane

0x6211,	// (0x000258d5) aid_size_min_hl_cp1

0xc543,	// (0x0002bc07) list_highlight_pane_cp34_ParamLimits

0xc543,	// (0x0002bc07) list_highlight_pane_cp34

0xc554,	// (0x0002bc18) list_single_graphic_hl_pane_g1_ParamLimits

0xc554,	// (0x0002bc18) list_single_graphic_hl_pane_g1

0x621a,	// (0x000258de) list_single_graphic_hl_pane_g2_ParamLimits

0x621a,	// (0x000258de) list_single_graphic_hl_pane_g2

0x621a,	// (0x000258de) list_single_graphic_hl_pane_g3_ParamLimits

0x621a,	// (0x000258de) list_single_graphic_hl_pane_g3

0x5a6d,	// (0x00025131) list_single_graphic_hl_pane_g4_ParamLimits

0x5a6d,	// (0x00025131) list_single_graphic_hl_pane_g4

0x6226,	// (0x000258ea) list_single_graphic_hl_pane_g5_ParamLimits

0x6226,	// (0x000258ea) list_single_graphic_hl_pane_g5

0x0004,

0xfbd8,	// (0x0002f29c) list_single_graphic_hl_pane_g_ParamLimits

0xfbd8,	// (0x0002f29c) list_single_graphic_hl_pane_g

0x623a,	// (0x000258fe) list_single_graphic_hl_pane_t1_ParamLimits

0x623a,	// (0x000258fe) list_single_graphic_hl_pane_t1

0xc561,	// (0x0002bc25) aid_size_min_hl_cp2

0xc56a,	// (0x0002bc2e) list_highlight_pane_cp34_cp2_ParamLimits

0xc56a,	// (0x0002bc2e) list_highlight_pane_cp34_cp2

0xc554,	// (0x0002bc18) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc554,	// (0x0002bc18) list_single_graphic_hl_pane_g1_cp2

0xc577,	// (0x0002bc3b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc577,	// (0x0002bc3b) list_single_graphic_hl_pane_g2_cp2

0xc583,	// (0x0002bc47) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc583,	// (0x0002bc47) list_single_graphic_hl_pane_g3_cp2

0x1350,	// (0x00020a14) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1350,	// (0x00020a14) list_single_graphic_hl_pane_g4_cp2

0xc591,	// (0x0002bc55) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc591,	// (0x0002bc55) list_single_graphic_hl_pane_g5_cp2

0x764e,	// (0x00026d12) control_pane_g4_ParamLimits

0x764e,	// (0x00026d12) control_pane_g4

0x77fd,	// (0x00026ec1) bg_popup_sub_pane_cp10_ParamLimits

0xbd2d,	// (0x0002b3f1) list_choice_list_pane_ParamLimits

0xbd3c,	// (0x0002b400) scroll_pane_cp23

0x0e01,	// (0x000204c5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3ad,	// (0x0002ba71) list_preview_fixed_pane_ParamLimits

0xc3c3,	// (0x0002ba87) list_preview_fixed_pane_cp_ParamLimits

0xc3c3,	// (0x0002ba87) list_preview_fixed_pane_cp

0xc3cf,	// (0x0002ba93) popup_preview_fixed_window_g1_ParamLimits

0xc3cf,	// (0x0002ba93) popup_preview_fixed_window_g1

0xc3db,	// (0x0002ba9f) popup_preview_fixed_window_g2_ParamLimits

0xc3db,	// (0x0002ba9f) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x0002f22b) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x0002f22b) popup_preview_fixed_window_g

0x6d1a,	// (0x000263de) aid_navi_side_left_pane_ParamLimits

0x6d2f,	// (0x000263f3) aid_navi_side_right_pane_ParamLimits

0x6d47,	// (0x0002640b) navi_icon_pane_stacon_ParamLimits

0x6d5b,	// (0x0002641f) navi_navi_pane_stacon_ParamLimits

0x6d47,	// (0x0002640b) navi_text_pane_stacon_ParamLimits

0x0c38,	// (0x000202fc) main_text_info_pane

0xc5bb,	// (0x0002bc7f) listscroll_text_info_pane

0xc5c3,	// (0x0002bc87) list_text_info_pane_ParamLimits

0xc5c3,	// (0x0002bc87) list_text_info_pane

0xc5d2,	// (0x0002bc96) scroll_pane_cp24_ParamLimits

0xc5d2,	// (0x0002bc96) scroll_pane_cp24

0xc5f0,	// (0x0002bcb4) list_text_info_pane_t1_ParamLimits

0xc5f0,	// (0x0002bcb4) list_text_info_pane_t1

0x7847,	// (0x00026f0b) popup_fast_swap2_window_ParamLimits

0x7847,	// (0x00026f0b) popup_fast_swap2_window

0xc615,	// (0x0002bcd9) aid_size_cell_fast2

0x0c38,	// (0x000202fc) bg_popup_window_pane_cp17

0x9b13,	// (0x000291d7) heading_pane_cp2

0x1007,	// (0x000206cb) listscroll_fast2_pane

0xc61f,	// (0x0002bce3) grid_fast2_pane

0xc629,	// (0x0002bced) listscroll_fast2_pane_g1

0xc633,	// (0x0002bcf7) listscroll_fast2_pane_g2

0x0001,

0xfbe3,	// (0x0002f2a7) listscroll_fast2_pane_g

0x2e84,	// (0x00022548) scroll_pane_cp26

0xc63d,	// (0x0002bd01) cell_fast2_pane_ParamLimits

0xc63d,	// (0x0002bd01) cell_fast2_pane

0xc654,	// (0x0002bd18) cell_fast2_pane_g1

0xc65d,	// (0x0002bd21) cell_fast2_pane_g2

0xc666,	// (0x0002bd2a) cell_fast2_pane_g3

0x0002,

0xfbe8,	// (0x0002f2ac) cell_fast2_pane_g

0x1049,	// (0x0002070d) grid_highlight_pane_cp9

0x105e,	// (0x00020722) main_eswt_pane_ParamLimits

0x105e,	// (0x00020722) main_eswt_pane

0xc5e7,	// (0x0002bcab) list_single_text_info_pane

0xc66e,	// (0x0002bd32) eswt_ctrl_button_pane

0xc66e,	// (0x0002bd32) eswt_ctrl_canvas_pane

0xc676,	// (0x0002bd3a) eswt_ctrl_combo_pane

0xc66e,	// (0x0002bd32) eswt_ctrl_default_pane

0xc66e,	// (0x0002bd32) eswt_ctrl_label_pane

0xc67e,	// (0x0002bd42) eswt_ctrl_wait_pane

0xc686,	// (0x0002bd4a) eswt_shell_pane

0x0c38,	// (0x000202fc) listscroll_eswt_app_pane

0xc6a6,	// (0x0002bd6a) popup_eswt_tasktip_window_ParamLimits

0xc6a6,	// (0x0002bd6a) popup_eswt_tasktip_window

0x8459,	// (0x00027b1d) bg_popup_window_pane_cp18

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_ParamLimits

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_ParamLimits

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_ParamLimits

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_ParamLimits

0xc6de,	// (0x0002bda2) eswt_control_pane_g4

0x0003,

0xfbef,	// (0x0002f2b3) eswt_control_pane_g_ParamLimits

0xfbef,	// (0x0002f2b3) eswt_control_pane_g

0x2cbb,	// (0x0002237f) bg_button_pane_ParamLimits

0x2cbb,	// (0x0002237f) bg_button_pane

0x105e,	// (0x00020722) common_borders_pane_copy2_ParamLimits

0x105e,	// (0x00020722) common_borders_pane_copy2

0xc6eb,	// (0x0002bdaf) control_button_pane_g1_ParamLimits

0xc6eb,	// (0x0002bdaf) control_button_pane_g1

0xc6f7,	// (0x0002bdbb) control_button_pane_g2_ParamLimits

0xc6f7,	// (0x0002bdbb) control_button_pane_g2

0xc703,	// (0x0002bdc7) control_button_pane_g3_ParamLimits

0xc703,	// (0x0002bdc7) control_button_pane_g3

0x0002,

0xfbf8,	// (0x0002f2bc) control_button_pane_g_ParamLimits

0xfbf8,	// (0x0002f2bc) control_button_pane_g

0xc717,	// (0x0002bddb) control_button_pane_t1

0xc725,	// (0x0002bde9) control_button_pane_t2

0x0001,

0xfbff,	// (0x0002f2c3) control_button_pane_t

0x836e,	// (0x00027a32) bg_button_pane_g1

0x8376,	// (0x00027a3a) bg_button_pane_g2

0x837e,	// (0x00027a42) bg_button_pane_g3

0x8386,	// (0x00027a4a) bg_button_pane_g4

0x838e,	// (0x00027a52) bg_button_pane_g5

0x8396,	// (0x00027a5a) bg_button_pane_g6

0x839e,	// (0x00027a62) bg_button_pane_g7

0x83a6,	// (0x00027a6a) bg_button_pane_g8

0x83ae,	// (0x00027a72) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002ef25) bg_button_pane_g

0xbce8,	// (0x0002b3ac) common_borders_pane_ParamLimits

0xbce8,	// (0x0002b3ac) common_borders_pane

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy1_ParamLimits

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy1

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy1_ParamLimits

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy1

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy1_ParamLimits

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy1

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy1_ParamLimits

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy1

0xbd23,	// (0x0002b3e7) bg_eswt_ctrl_canvas_pane_g1

0xbce8,	// (0x0002b3ac) common_borders_pane_cp2_ParamLimits

0xbce8,	// (0x0002b3ac) common_borders_pane_cp2

0xbce8,	// (0x0002b3ac) common_borders_pane_cp3_ParamLimits

0xbce8,	// (0x0002b3ac) common_borders_pane_cp3

0xc733,	// (0x0002bdf7) separator_horizontal_pane

0xc73b,	// (0x0002bdff) separator_vertical_pane

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy2_ParamLimits

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy2

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy2_ParamLimits

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy2

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy2_ParamLimits

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy2

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy2_ParamLimits

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy2

0x0c38,	// (0x000202fc) common_borders_pane_cp4

0xc744,	// (0x0002be08) separator_horizontal_pane_g1

0xc74d,	// (0x0002be11) separator_horizontal_pane_g2

0xc756,	// (0x0002be1a) separator_horizontal_pane_g3

0x0002,

0xfc04,	// (0x0002f2c8) separator_horizontal_pane_g

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy3_ParamLimits

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy3

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy3_ParamLimits

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy3

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy3_ParamLimits

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy3

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy3_ParamLimits

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy3

0x0c38,	// (0x000202fc) common_borders_pane_cp5

0xc75f,	// (0x0002be23) separator_vertical_pane_g1

0xc768,	// (0x0002be2c) separator_vertical_pane_g2

0xc771,	// (0x0002be35) separator_vertical_pane_g3

0x0002,

0xfc0b,	// (0x0002f2cf) separator_vertical_pane_g

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy4_ParamLimits

0xc6b7,	// (0x0002bd7b) eswt_control_pane_g1_copy4

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy4_ParamLimits

0xc6c4,	// (0x0002bd88) eswt_control_pane_g2_copy4

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy4_ParamLimits

0xc6d1,	// (0x0002bd95) eswt_control_pane_g3_copy4

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy4_ParamLimits

0xc6de,	// (0x0002bda2) eswt_control_pane_g4_copy4

0xc77a,	// (0x0002be3e) eswt_ctrl_combo_button_pane

0xc782,	// (0x0002be46) eswt_ctrl_input_pane

0xc78a,	// (0x0002be4e) popup_choice_list_window_cp70

0xc792,	// (0x0002be56) eswt_ctrl_input_pane_t1

0x0c38,	// (0x000202fc) input_focus_pane_cp70

0xbce8,	// (0x0002b3ac) bg_button_pane_cp70_ParamLimits

0xbce8,	// (0x0002b3ac) bg_button_pane_cp70

0xc7a0,	// (0x0002be64) eswt_ctrl_combo_button_pane_g1

0xc7a8,	// (0x0002be6c) wait_bar_pane_cp70

0x8459,	// (0x00027b1d) bg_popup_window_pane_cp70_ParamLimits

0x8459,	// (0x00027b1d) bg_popup_window_pane_cp70

0xc7b0,	// (0x0002be74) popup_eswt_tasktip_window_t1

0xc7c6,	// (0x0002be8a) wait_bar_pane_cp71_ParamLimits

0xc7c6,	// (0x0002be8a) wait_bar_pane_cp71

0xc7d2,	// (0x0002be96) grid_eswt_app_pane

0x3257,	// (0x0002291b) scroll_pane_cp70

0xc7db,	// (0x0002be9f) cell_eswt_app_pane_ParamLimits

0xc7db,	// (0x0002be9f) cell_eswt_app_pane

0xc80d,	// (0x0002bed1) cell_eswt_app_pane_g1_ParamLimits

0xc80d,	// (0x0002bed1) cell_eswt_app_pane_g1

0xc83c,	// (0x0002bf00) cell_eswt_app_pane_g2_ParamLimits

0xc83c,	// (0x0002bf00) cell_eswt_app_pane_g2

0x0001,

0xfc12,	// (0x0002f2d6) cell_eswt_app_pane_g_ParamLimits

0xfc12,	// (0x0002f2d6) cell_eswt_app_pane_g

0xc865,	// (0x0002bf29) cell_eswt_app_pane_t1_ParamLimits

0xc865,	// (0x0002bf29) cell_eswt_app_pane_t1

0xc897,	// (0x0002bf5b) grid_highlight_pane_cp70_ParamLimits

0xc897,	// (0x0002bf5b) grid_highlight_pane_cp70

0x3730,	// (0x00022df4) set_content_pane_g1

0x75d6,	// (0x00026c9a) status_small_volume_pane

0x8ed0,	// (0x00028594) status_small_volume_pane_g1

0x8ed8,	// (0x0002859c) volume_small2_pane

0x8ee1,	// (0x000285a5) volume_small2_pane_g1

0x8eea,	// (0x000285ae) volume_small2_pane_g2

0x8ef3,	// (0x000285b7) volume_small2_pane_g3

0x8efc,	// (0x000285c0) volume_small2_pane_g4

0x8f05,	// (0x000285c9) volume_small2_pane_g5

0x8f0e,	// (0x000285d2) volume_small2_pane_g6

0x8f17,	// (0x000285db) volume_small2_pane_g7

0x8f20,	// (0x000285e4) volume_small2_pane_g8

0x8f29,	// (0x000285ed) volume_small2_pane_g9

0x8f32,	// (0x000285f6) volume_small2_pane_g10

0x0009,

0xfc17,	// (0x0002f2db) volume_small2_pane_g

0xc0f2,	// (0x0002b7b6) fep_vkb_top_text_pane_g1_ParamLimits

0xc10d,	// (0x0002b7d1) fep_vkb_top_text_pane_t1_ParamLimits

0xc3e7,	// (0x0002baab) popup_preview_fixed_window_g3_ParamLimits

0xc3e7,	// (0x0002baab) popup_preview_fixed_window_g3

0x7d58,	// (0x0002741c) popup_toolbar_trans_pane

0xaa97,	// (0x0002a15b) aid_height_set_list_ParamLimits

0xaaa8,	// (0x0002a16c) aid_size_parent_ParamLimits

0x77fd,	// (0x00026ec1) list_highlight_pane_cp2_ParamLimits

0x3730,	// (0x00022df4) set_content_pane_g1_ParamLimits

0xacfd,	// (0x0002a3c1) list_single_image_pane_ParamLimits

0xacfd,	// (0x0002a3c1) list_single_image_pane

0xc8a3,	// (0x0002bf67) aid_size_cell_image_ParamLimits

0xc8a3,	// (0x0002bf67) aid_size_cell_image

0xc8b0,	// (0x0002bf74) grid_single_image_pane_ParamLimits

0xc8b0,	// (0x0002bf74) grid_single_image_pane

0x2ce6,	// (0x000223aa) list_single_image_pane_g1_ParamLimits

0x2ce6,	// (0x000223aa) list_single_image_pane_g1

0x2cf2,	// (0x000223b6) list_single_image_pane_g2_ParamLimits

0x2cf2,	// (0x000223b6) list_single_image_pane_g2

0x0001,

0xfc2c,	// (0x0002f2f0) list_single_image_pane_g_ParamLimits

0xfc2c,	// (0x0002f2f0) list_single_image_pane_g

0xc8be,	// (0x0002bf82) list_single_image_pane_t1_ParamLimits

0xc8be,	// (0x0002bf82) list_single_image_pane_t1

0xc8d4,	// (0x0002bf98) cell_image_list_pane_ParamLimits

0xc8d4,	// (0x0002bf98) cell_image_list_pane

0xc8ea,	// (0x0002bfae) cell_image_list_pane_g1

0xc8f3,	// (0x0002bfb7) cell_image_list_pane_g2

0x0001,

0xfc31,	// (0x0002f2f5) cell_image_list_pane_g

0xc8fc,	// (0x0002bfc0) aid_size_cell_tb_trans_pane

0x2cbb,	// (0x0002237f) bg_tb_trans_pane

0xc90e,	// (0x0002bfd2) grid_tb_trans_pane

0x836e,	// (0x00027a32) bg_tb_trans_pane_g1

0x8376,	// (0x00027a3a) bg_tb_trans_pane_g2

0x837e,	// (0x00027a42) bg_tb_trans_pane_g3

0x8386,	// (0x00027a4a) bg_tb_trans_pane_g4

0x838e,	// (0x00027a52) bg_tb_trans_pane_g5

0x83a6,	// (0x00027a6a) bg_tb_trans_pane_g6

0x83ae,	// (0x00027a72) bg_tb_trans_pane_g7

0x8396,	// (0x00027a5a) bg_tb_trans_pane_g8

0x839e,	// (0x00027a62) bg_tb_trans_pane_g9

0x0008,

0xfc36,	// (0x0002f2fa) bg_tb_trans_pane_g

0xc922,	// (0x0002bfe6) cell_toolbar_trans_pane_ParamLimits

0xc922,	// (0x0002bfe6) cell_toolbar_trans_pane

0xbd23,	// (0x0002b3e7) cell_toolbar_trans_pane_g1

0xb947,	// (0x0002b00b) list_form2_midp_pane_t1

0xb955,	// (0x0002b019) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x0002f1a3) list_form2_midp_pane_t

0xb963,	// (0x0002b027) scroll_pane_cp51_ParamLimits

0xbb2a,	// (0x0002b1ee) form2_midp_wait_pane_g1

0xbb33,	// (0x0002b1f7) form2_midp_wait_pane_g2

0xbb3c,	// (0x0002b200) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x0002f1b8) form2_midp_wait_pane_g

0x0cb4,	// (0x00020378) list_highlight_pane_cp21_ParamLimits

0xbb80,	// (0x0002b244) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb8f,	// (0x0002b253) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xacb6,	// (0x0002a37a) list_single_2graphic_im_pane_ParamLimits

0xacb6,	// (0x0002a37a) list_single_2graphic_im_pane

0xc948,	// (0x0002c00c) list_single_2graphic_im_pane_g1_ParamLimits

0xc948,	// (0x0002c00c) list_single_2graphic_im_pane_g1

0xc959,	// (0x0002c01d) list_single_2graphic_im_pane_g2_ParamLimits

0xc959,	// (0x0002c01d) list_single_2graphic_im_pane_g2

0xc965,	// (0x0002c029) list_single_2graphic_im_pane_g3_ParamLimits

0xc965,	// (0x0002c029) list_single_2graphic_im_pane_g3

0x0003,

0xfc49,	// (0x0002f30d) list_single_2graphic_im_pane_g_ParamLimits

0xfc49,	// (0x0002f30d) list_single_2graphic_im_pane_g

0xc985,	// (0x0002c049) list_single_2graphic_im_pane_t1_ParamLimits

0xc985,	// (0x0002c049) list_single_2graphic_im_pane_t1

0xc3f3,	// (0x0002bab7) list_single_graphic_2heading_pane_fp_ParamLimits

0xc3f3,	// (0x0002bab7) list_single_graphic_2heading_pane_fp

0x6083,	// (0x00025747) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6083,	// (0x00025747) list_single_graphic_2heading_pane_fp_g1

0xc40c,	// (0x0002bad0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc40c,	// (0x0002bad0) list_single_graphic_2heading_pane_fp_g2

0x604c,	// (0x00025710) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x604c,	// (0x00025710) list_single_graphic_2heading_pane_fp_g3

0x6058,	// (0x0002571c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6058,	// (0x0002571c) list_single_graphic_2heading_pane_fp_g4

0xc418,	// (0x0002badc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc418,	// (0x0002badc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002f23b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002f23b) list_single_graphic_2heading_pane_fp_g

0x6250,	// (0x00025914) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6250,	// (0x00025914) list_single_graphic_2heading_pane_fp_t1

0x60bb,	// (0x0002577f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x60bb,	// (0x0002577f) list_single_graphic_2heading_pane_fp_t2

0x6266,	// (0x0002592a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6266,	// (0x0002592a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc52,	// (0x0002f316) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc52,	// (0x0002f316) list_single_graphic_2heading_pane_fp_t

0xbdb4,	// (0x0002b478) fep_hwr_write_pane_g5_ParamLimits

0xbdb4,	// (0x0002b478) fep_hwr_write_pane_g5

0xbdc0,	// (0x0002b484) fep_hwr_write_pane_g6_ParamLimits

0xbdc0,	// (0x0002b484) fep_hwr_write_pane_g6

0xc686,	// (0x0002bd4a) eswt_shell_pane_ParamLimits

0x8459,	// (0x00027b1d) bg_popup_window_pane_cp18_ParamLimits

0xa9ee,	// (0x0002a0b2) heading_pane_cp70

0xc7b0,	// (0x0002be74) popup_eswt_tasktip_window_t1_ParamLimits

0x7e8b,	// (0x0002754f) aid_touch_tab_arrow_left

0x7e9a,	// (0x0002755e) aid_touch_tab_arrow_right

0x0c56,	// (0x0002031a) title_pane_g3_ParamLimits

0x0c56,	// (0x0002031a) title_pane_g3

0x12c3,	// (0x00020987) set_value_pane_g1

0x7d58,	// (0x0002741c) popup_toolbar_trans_pane_ParamLimits

0xc8fc,	// (0x0002bfc0) aid_size_cell_tb_trans_pane_ParamLimits

0x2cbb,	// (0x0002237f) bg_tb_trans_pane_ParamLimits

0xc90e,	// (0x0002bfd2) grid_tb_trans_pane_ParamLimits

0x0e01,	// (0x000204c5) cont_note_pane_ParamLimits

0x0e01,	// (0x000204c5) cont_note_pane

0x105e,	// (0x00020722) cont_snote2_single_text_pane_ParamLimits

0x105e,	// (0x00020722) cont_snote2_single_text_pane

0x105e,	// (0x00020722) cont_snote2_single_graphic_pane_ParamLimits

0x105e,	// (0x00020722) cont_snote2_single_graphic_pane

0x9d2f,	// (0x000293f3) cont_note_wait_pane_ParamLimits

0x9d2f,	// (0x000293f3) cont_note_wait_pane

0x9d2f,	// (0x000293f3) cont_note_image_pane_ParamLimits

0x9d2f,	// (0x000293f3) cont_note_image_pane

0xc9b6,	// (0x0002c07a) popup_note2_window_g1_ParamLimits

0xc9b6,	// (0x0002c07a) popup_note2_window_g1

0xc9e7,	// (0x0002c0ab) popup_note2_window_t1_ParamLimits

0xc9e7,	// (0x0002c0ab) popup_note2_window_t1

0xca2c,	// (0x0002c0f0) popup_note2_window_t2_ParamLimits

0xca2c,	// (0x0002c0f0) popup_note2_window_t2

0xca71,	// (0x0002c135) popup_note2_window_t3_ParamLimits

0xca71,	// (0x0002c135) popup_note2_window_t3

0xcab6,	// (0x0002c17a) popup_note2_window_t4_ParamLimits

0xcab6,	// (0x0002c17a) popup_note2_window_t4

0x0e85,	// (0x00020549) popup_note2_window_t5_ParamLimits

0x0e85,	// (0x00020549) popup_note2_window_t5

0x0004,

0xfc5e,	// (0x0002f322) popup_note2_window_t_ParamLimits

0xfc5e,	// (0x0002f322) popup_note2_window_t

0xcae5,	// (0x0002c1a9) popup_note2_image_window_g1_ParamLimits

0xcae5,	// (0x0002c1a9) popup_note2_image_window_g1

0xcaf1,	// (0x0002c1b5) popup_note2_image_window_g2_ParamLimits

0xcaf1,	// (0x0002c1b5) popup_note2_image_window_g2

0x0001,

0xfc69,	// (0x0002f32d) popup_note2_image_window_g_ParamLimits

0xfc69,	// (0x0002f32d) popup_note2_image_window_g

0xcb03,	// (0x0002c1c7) popup_note2_image_window_t1_ParamLimits

0xcb03,	// (0x0002c1c7) popup_note2_image_window_t1

0xcb1b,	// (0x0002c1df) popup_note2_image_window_t2_ParamLimits

0xcb1b,	// (0x0002c1df) popup_note2_image_window_t2

0xcb33,	// (0x0002c1f7) popup_note2_image_window_t3_ParamLimits

0xcb33,	// (0x0002c1f7) popup_note2_image_window_t3

0x0002,

0xfc6e,	// (0x0002f332) popup_note2_image_window_t_ParamLimits

0xfc6e,	// (0x0002f332) popup_note2_image_window_t

0x9d3d,	// (0x00029401) popup_note2_wait_window_g1_ParamLimits

0x9d3d,	// (0x00029401) popup_note2_wait_window_g1

0xcb4f,	// (0x0002c213) popup_note2_wait_window_g2_ParamLimits

0xcb4f,	// (0x0002c213) popup_note2_wait_window_g2

0x9d55,	// (0x00029419) popup_note2_wait_window_g3_ParamLimits

0x9d55,	// (0x00029419) popup_note2_wait_window_g3

0x0002,

0xfc75,	// (0x0002f339) popup_note2_wait_window_g_ParamLimits

0xfc75,	// (0x0002f339) popup_note2_wait_window_g

0xcb5b,	// (0x0002c21f) popup_note2_wait_window_t1_ParamLimits

0xcb5b,	// (0x0002c21f) popup_note2_wait_window_t1

0xcb79,	// (0x0002c23d) popup_note2_wait_window_t2_ParamLimits

0xcb79,	// (0x0002c23d) popup_note2_wait_window_t2

0xcb97,	// (0x0002c25b) popup_note2_wait_window_t3_ParamLimits

0xcb97,	// (0x0002c25b) popup_note2_wait_window_t3

0xcba9,	// (0x0002c26d) popup_note2_wait_window_t4_ParamLimits

0xcba9,	// (0x0002c26d) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x0002f340) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x0002f340) popup_note2_wait_window_t

0xcbbb,	// (0x0002c27f) wait_bar2_pane_ParamLimits

0xcbbb,	// (0x0002c27f) wait_bar2_pane

0xcbd3,	// (0x0002c297) popup_snote2_single_text_window_g1_ParamLimits

0xcbd3,	// (0x0002c297) popup_snote2_single_text_window_g1

0xcbfb,	// (0x0002c2bf) popup_snote2_single_text_window_t1_ParamLimits

0xcbfb,	// (0x0002c2bf) popup_snote2_single_text_window_t1

0xcc47,	// (0x0002c30b) popup_snote2_single_text_window_t2_ParamLimits

0xcc47,	// (0x0002c30b) popup_snote2_single_text_window_t2

0xcc93,	// (0x0002c357) popup_snote2_single_text_window_t3_ParamLimits

0xcc93,	// (0x0002c357) popup_snote2_single_text_window_t3

0xccd4,	// (0x0002c398) popup_snote2_single_text_window_t4_ParamLimits

0xccd4,	// (0x0002c398) popup_snote2_single_text_window_t4

0xcd0a,	// (0x0002c3ce) popup_snote2_single_text_window_t5_ParamLimits

0xcd0a,	// (0x0002c3ce) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x0002f349) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x0002f349) popup_snote2_single_text_window_t

0xcd35,	// (0x0002c3f9) popup_snote2_single_graphic_window_g1_ParamLimits

0xcd35,	// (0x0002c3f9) popup_snote2_single_graphic_window_g1

0xcd5d,	// (0x0002c421) popup_snote2_single_graphic_window_g2_ParamLimits

0xcd5d,	// (0x0002c421) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x0002f354) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x0002f354) popup_snote2_single_graphic_window_g

0xcd85,	// (0x0002c449) popup_snote2_single_graphic_window_t1_ParamLimits

0xcd85,	// (0x0002c449) popup_snote2_single_graphic_window_t1

0xcdd1,	// (0x0002c495) popup_snote2_single_graphic_window_t2_ParamLimits

0xcdd1,	// (0x0002c495) popup_snote2_single_graphic_window_t2

0xcc93,	// (0x0002c357) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc93,	// (0x0002c357) popup_snote2_single_graphic_window_t3

0xccd4,	// (0x0002c398) popup_snote2_single_graphic_window_t4_ParamLimits

0xccd4,	// (0x0002c398) popup_snote2_single_graphic_window_t4

0xcd0a,	// (0x0002c3ce) popup_snote2_single_graphic_window_t5_ParamLimits

0xcd0a,	// (0x0002c3ce) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x0002f359) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x0002f359) popup_snote2_single_graphic_window_t

0xb813,	// (0x0002aed7) clock_nsta_pane_cp2_t1

0xb813,	// (0x0002aed7) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x0002f179) clock_nsta_pane_cp2_t

0x5849,	// (0x00024f0d) form_field_data_wide_pane_g1_ParamLimits

0x2ce6,	// (0x000223aa) form_field_data_wide_pane_g2_ParamLimits

0x2ce6,	// (0x000223aa) form_field_data_wide_pane_g2

0x2cf2,	// (0x000223b6) form_field_data_wide_pane_g3_ParamLimits

0x2cf2,	// (0x000223b6) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002ed3a) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002ed3a) form_field_data_wide_pane_g

0xb6f2,	// (0x0002adb6) grid_touch_3_pane_ParamLimits

0xb6f2,	// (0x0002adb6) grid_touch_3_pane

0xce1d,	// (0x0002c4e1) cell_touch_3_pane_ParamLimits

0xce1d,	// (0x0002c4e1) cell_touch_3_pane

0xbd23,	// (0x0002b3e7) cell_touch_3_pane_g1

0xbd23,	// (0x0002b3e7) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x0002f1fe) cell_touch_3_pane_g

0x0eb7,	// (0x0002057b) cont_query_data_pane

0x0ebf,	// (0x00020583) cont_query_data_pane_cp1

0xce50,	// (0x0002c514) button_value_adjust_pane_cp7

0xce58,	// (0x0002c51c) query_popup_pane_cp3

0x3428,	// (0x00022aec) bg_popup_sub_pane_cp22_ParamLimits

0x6fd1,	// (0x00026695) navi_navi_volume_pane_cp2

0x6fec,	// (0x000266b0) popup_side_volume_key_window_g2

0x6ffb,	// (0x000266bf) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0002edd0) popup_side_volume_key_window_g

0x7018,	// (0x000266dc) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002edd7) popup_side_volume_key_window_t

0x3633,	// (0x00022cf7) popup_side_volume_key_window_ParamLimits

0x547e,	// (0x00024b42) list_double_graphic_pane_g4_ParamLimits

0x547e,	// (0x00024b42) list_double_graphic_pane_g4

0xace5,	// (0x0002a3a9) list_single_2heading_msg_pane_ParamLimits

0xace5,	// (0x0002a3a9) list_single_2heading_msg_pane

0x6286,	// (0x0002594a) list_single_2heading_msg_pane_g1_ParamLimits

0x6286,	// (0x0002594a) list_single_2heading_msg_pane_g1

0x52fd,	// (0x000249c1) list_single_2heading_msg_pane_g2_ParamLimits

0x52fd,	// (0x000249c1) list_single_2heading_msg_pane_g2

0x6292,	// (0x00025956) list_single_2heading_msg_pane_g3_ParamLimits

0x6292,	// (0x00025956) list_single_2heading_msg_pane_g3

0x629e,	// (0x00025962) list_single_2heading_msg_pane_g4_ParamLimits

0x629e,	// (0x00025962) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x0002f364) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x0002f364) list_single_2heading_msg_pane_g

0x62b6,	// (0x0002597a) list_single_2heading_msg_pane_t1_ParamLimits

0x62b6,	// (0x0002597a) list_single_2heading_msg_pane_t1

0x62de,	// (0x000259a2) list_single_2heading_msg_pane_t2_ParamLimits

0x62de,	// (0x000259a2) list_single_2heading_msg_pane_t2

0x6312,	// (0x000259d6) list_single_2heading_msg_pane_t3_ParamLimits

0x6312,	// (0x000259d6) list_single_2heading_msg_pane_t3

0x634b,	// (0x00025a0f) list_single_2heading_msg_pane_t4_ParamLimits

0x634b,	// (0x00025a0f) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x0002f36d) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x0002f36d) list_single_2heading_msg_pane_t

0x0c62,	// (0x00020326) title_pane_g4_ParamLimits

0x0c62,	// (0x00020326) title_pane_g4

0x6c6a,	// (0x0002632e) title_pane_stacon_g3_ParamLimits

0x6c6a,	// (0x0002632e) title_pane_stacon_g3

0xc979,	// (0x0002c03d) list_single_2graphic_im_pane_g4_ParamLimits

0xc979,	// (0x0002c03d) list_single_2graphic_im_pane_g4

0xa79f,	// (0x00029e63) popup_side_volume_key_window_cp

0xb00d,	// (0x0002a6d1) main_idle_act2_pane_t1

0x83b6,	// (0x00027a7a) toolbar_button_pane_g10

0x6b7b,	// (0x0002623f) popup_toolbar_window_cp1

0xb804,	// (0x0002aec8) clock_nsta_pane_cp_t1

0xb804,	// (0x0002aec8) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x0002f174) clock_nsta_pane_cp_t

0x6fd1,	// (0x00026695) navi_navi_volume_pane_cp2_ParamLimits

0x6fe0,	// (0x000266a4) popup_side_volume_key_window_g1_ParamLimits

0x6fec,	// (0x000266b0) popup_side_volume_key_window_g2_ParamLimits

0x6ffb,	// (0x000266bf) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0002edd0) popup_side_volume_key_window_g_ParamLimits

0x8bc5,	// (0x00028289) fep_hwr_aid_pane

0x0c08,	// (0x000202cc) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd84,	// (0x0002b448) fep_hwr_top_pane_g1_ParamLimits

0xbd96,	// (0x0002b45a) fep_hwr_top_pane_g2_ParamLimits

0x8c80,	// (0x00028344) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x0002f1c9) fep_hwr_top_pane_g_ParamLimits

0x8c95,	// (0x00028359) fep_hwr_top_text_pane_ParamLimits

0xa554,	// (0x00029c18) aid_touch_tab_arrow_arrow_2

0xa55d,	// (0x00029c21) aid_touch_tab_arrow_left_2

0x8bd9,	// (0x0002829d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8c10,	// (0x000282d4) fep_hwr_prediction_pane

0xbeec,	// (0x0002b5b0) fep_vkb_prediction_pane

0xbff2,	// (0x0002b6b6) fep_vkb_side_pane_g3_ParamLimits

0xbff2,	// (0x0002b6b6) fep_vkb_side_pane_g3

0xbf9e,	// (0x0002b662) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc46c,	// (0x0002bb30) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc479,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x0002f273) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xce7f,	// (0x0002c543) fep_hwr_prediction_pane_g1

0x8f3b,	// (0x000285ff) fep_hwr_prediction_pane_g2

0x8f43,	// (0x00028607) fep_hwr_prediction_pane_g3

0x8f4b,	// (0x0002860f) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002f376) fep_hwr_prediction_pane_g

0xce7f,	// (0x0002c543) fep_vkb_prediction_pane_g1

0xce89,	// (0x0002c54d) fep_vkb_prediction_pane_g2

0xce91,	// (0x0002c555) fep_vkb_prediction_pane_g3

0xce99,	// (0x0002c55d) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0002f37f) fep_vkb_prediction_pane_g

0x8a53,	// (0x00028117) slider_set_pane_g3

0x8a67,	// (0x0002812b) slider_set_pane_g4

0x8a7f,	// (0x00028143) slider_set_pane_g5

0x8a53,	// (0x00028117) slider_set_pane_g6

0x8a95,	// (0x00028159) slider_set_pane_g7

0xac2d,	// (0x0002a2f1) slider_form_pane_g3

0xac36,	// (0x0002a2fa) slider_form_pane_g4

0xac3e,	// (0x0002a302) slider_form_pane_g5

0xac2d,	// (0x0002a2f1) slider_form_pane_g6

0xac46,	// (0x0002a30a) slider_form_pane_g7

0xb2c4,	// (0x0002a988) slider_set_pane_vc_g3

0xb2cd,	// (0x0002a991) slider_set_pane_vc_g4

0xb2d6,	// (0x0002a99a) slider_set_pane_vc_g5

0xb2c4,	// (0x0002a988) slider_set_pane_vc_g6

0xb2df,	// (0x0002a9a3) slider_set_pane_vc_g7

0xb4b7,	// (0x0002ab7b) slider_form_pane_vc_g1

0xb4c0,	// (0x0002ab84) slider_form_pane_vc_g2

0xb4c9,	// (0x0002ab8d) slider_form_pane_vc_g3

0xb4b7,	// (0x0002ab7b) slider_form_pane_vc_g4

0xb4d2,	// (0x0002ab96) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x0002f146) slider_form_pane_vc_g

0x0c38,	// (0x000202fc) main_idle_act3_pane

0xcea1,	// (0x0002c565) ai3_links_pane

0xceaa,	// (0x0002c56e) popup_ai3_data_window_ParamLimits

0xceaa,	// (0x0002c56e) popup_ai3_data_window

0x0c38,	// (0x000202fc) grid_ai3_links_pane

0xcec8,	// (0x0002c58c) cell_ai3_links_pane_ParamLimits

0xcec8,	// (0x0002c58c) cell_ai3_links_pane

0xcee2,	// (0x0002c5a6) bg_popup_sub_pane_cp11

0xceef,	// (0x0002c5b3) cell_ai3_links_pane_g1

0x0c38,	// (0x000202fc) bg_popup_sub_pane_cp12

0xcf14,	// (0x0002c5d8) heading_ai3_data_pane

0xcf1c,	// (0x0002c5e0) list_ai3_gene_pane

0xcf28,	// (0x0002c5ec) popup_ai3_data_window_g1

0xcf30,	// (0x0002c5f4) heading_ai3_data_pane_g1

0xcf38,	// (0x0002c5fc) heading_ai3_data_pane_t1

0xcf46,	// (0x0002c60a) list_double_ai3_gene_pane_ParamLimits

0xcf46,	// (0x0002c60a) list_double_ai3_gene_pane

0xcf53,	// (0x0002c617) list_single_ai3_gene_pane_ParamLimits

0xcf53,	// (0x0002c617) list_single_ai3_gene_pane

0xbce8,	// (0x0002b3ac) list_highlight_pane_cp7_ParamLimits

0xbce8,	// (0x0002b3ac) list_highlight_pane_cp7

0xcf60,	// (0x0002c624) list_single_a13_gene_pane_t1_ParamLimits

0xcf60,	// (0x0002c624) list_single_a13_gene_pane_t1

0xcf77,	// (0x0002c63b) list_single_ai3_gene_pane_g1

0xcf80,	// (0x0002c644) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x0002f388) list_single_ai3_gene_pane_g

0xcf88,	// (0x0002c64c) list_double_ai3_gene_pane_g1_ParamLimits

0xcf88,	// (0x0002c64c) list_double_ai3_gene_pane_g1

0xcf94,	// (0x0002c658) list_double_ai3_gene_pane_t1_ParamLimits

0xcf94,	// (0x0002c658) list_double_ai3_gene_pane_t1

0xcfb0,	// (0x0002c674) list_double_ai3_gene_pane_t2_ParamLimits

0xcfb0,	// (0x0002c674) list_double_ai3_gene_pane_t2

0xcfc5,	// (0x0002c689) list_double_ai3_gene_pane_t3_ParamLimits

0xcfc5,	// (0x0002c689) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x0002f38d) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x0002f38d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x627c,	// (0x00025940) aid_size_min_col_2

0xce69,	// (0x0002c52d) aid_size_min_msg_ParamLimits

0xce69,	// (0x0002c52d) aid_size_min_msg

0xc0fe,	// (0x0002b7c2) fep_vkb_top_text_pane_g2_ParamLimits

0xc0fe,	// (0x0002b7c2) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x0002f1f9) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x0002f1f9) fep_vkb_top_text_pane_g

0x0c38,	// (0x000202fc) main_hc_apps_shell_pane

0xcfe2,	// (0x0002c6a6) grid_hc_apps_pane_ParamLimits

0xcfe2,	// (0x0002c6a6) grid_hc_apps_pane

0xcff1,	// (0x0002c6b5) list_hc_apps_pane

0xcff9,	// (0x0002c6bd) scroll_pane_cp37_ParamLimits

0xcff9,	// (0x0002c6bd) scroll_pane_cp37

0xd005,	// (0x0002c6c9) cell_hc_apps_pane_ParamLimits

0xd005,	// (0x0002c6c9) cell_hc_apps_pane

0xd0bd,	// (0x0002c781) cell_hc_apps_pane_g1_ParamLimits

0xd0bd,	// (0x0002c781) cell_hc_apps_pane_g1

0xd0ee,	// (0x0002c7b2) cell_hc_apps_pane_g2_ParamLimits

0xd0ee,	// (0x0002c7b2) cell_hc_apps_pane_g2

0xd10a,	// (0x0002c7ce) cell_hc_apps_pane_g3_ParamLimits

0xd10a,	// (0x0002c7ce) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x0002f394) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x0002f394) cell_hc_apps_pane_g

0xd12c,	// (0x0002c7f0) cell_hc_apps_pane_t1_ParamLimits

0xd12c,	// (0x0002c7f0) cell_hc_apps_pane_t1

0x0e01,	// (0x000204c5) grid_highlight_pane_cp10_ParamLimits

0x0e01,	// (0x000204c5) grid_highlight_pane_cp10

0xd16c,	// (0x0002c830) list_single_hc_apps_pane_ParamLimits

0xd16c,	// (0x0002c830) list_single_hc_apps_pane

0xd1ab,	// (0x0002c86f) list_single_hc_apps_pane_g1

0x6370,	// (0x00025a34) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x0002f39b) list_single_hc_apps_pane_g

0x6389,	// (0x00025a4d) list_single_hc_apps_pane_g2_copy1

0x63a5,	// (0x00025a69) list_single_hc_apps_pane_t1

0x0cb4,	// (0x00020378) bg_set_opt_pane_cp_ParamLimits

0x68cc,	// (0x00025f90) setting_slider_pane_t1_ParamLimits

0x68e5,	// (0x00025fa9) setting_slider_pane_t2_ParamLimits

0x68ff,	// (0x00025fc3) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002ec22) setting_slider_pane_t_ParamLimits

0x6917,	// (0x00025fdb) slider_set_pane_ParamLimits

0x7662,	// (0x00026d26) control_pane_g5_ParamLimits

0x7662,	// (0x00026d26) control_pane_g5

0xaa5a,	// (0x0002a11e) slider_set_pane_g1_ParamLimits

0x8a47,	// (0x0002810b) slider_set_pane_g2_ParamLimits

0x8a53,	// (0x00028117) slider_set_pane_g3_ParamLimits

0x8a67,	// (0x0002812b) slider_set_pane_g4_ParamLimits

0x8a7f,	// (0x00028143) slider_set_pane_g5_ParamLimits

0x8a53,	// (0x00028117) slider_set_pane_g6_ParamLimits

0x8a95,	// (0x00028159) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002f023) slider_set_pane_g_ParamLimits

0x36db,	// (0x00022d9f) navi_icon_text_pane_ParamLimits

0x7e4a,	// (0x0002750e) aid_fill_nsta_2_ParamLimits

0x7e8b,	// (0x0002754f) aid_touch_tab_arrow_left_ParamLimits

0x7e9a,	// (0x0002755e) aid_touch_tab_arrow_right_ParamLimits

0x7f07,	// (0x000275cb) clock_nsta_pane_ParamLimits

0xa536,	// (0x00029bfa) navi_icon_pane_g1_ParamLimits

0xa542,	// (0x00029c06) navi_text_pane_t1_ParamLimits

0xb921,	// (0x0002afe5) navi_icon_text_pane_g1_ParamLimits

0xb92d,	// (0x0002aff1) navi_icon_text_pane_t1_ParamLimits

0xd1ab,	// (0x0002c86f) list_single_hc_apps_pane_g1_ParamLimits

0x6370,	// (0x00025a34) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x0002f39b) list_single_hc_apps_pane_g_ParamLimits

0x6389,	// (0x00025a4d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x63a5,	// (0x00025a69) list_single_hc_apps_pane_t1_ParamLimits

0x6714,	// (0x00025dd8) popup_toolbar2_fixed_window_ParamLimits

0x6714,	// (0x00025dd8) popup_toolbar2_fixed_window

0x7d4e,	// (0x00027412) popup_toolbar2_float_window

0x0c38,	// (0x000202fc) bg_popup_sub_pane_cp27

0xd1c4,	// (0x0002c888) grid_toolbar2_float_pane

0x0c38,	// (0x000202fc) bg_popup_sub_pane_cp26

0xd1c4,	// (0x0002c888) grid_toolbar2_fixed_pane

0xd1cc,	// (0x0002c890) cell_toolbar2_fixed_pane_ParamLimits

0xd1cc,	// (0x0002c890) cell_toolbar2_fixed_pane

0xd1dc,	// (0x0002c8a0) cell_toolbar2_fixed_pane_g1

0xd1e5,	// (0x0002c8a9) toolbar2_fixed_button_pane

0x836e,	// (0x00027a32) toolbar2_fixed_button_pane_g1

0x8376,	// (0x00027a3a) toolbar2_fixed_button_pane_g2

0x837e,	// (0x00027a42) toolbar2_fixed_button_pane_g3

0x8386,	// (0x00027a4a) toolbar2_fixed_button_pane_g4

0x838e,	// (0x00027a52) toolbar2_fixed_button_pane_g5

0x8396,	// (0x00027a5a) toolbar2_fixed_button_pane_g6

0x839e,	// (0x00027a62) toolbar2_fixed_button_pane_g7

0x83a6,	// (0x00027a6a) toolbar2_fixed_button_pane_g8

0x83ae,	// (0x00027a72) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002ef25) toolbar2_fixed_button_pane_g

0xd1ed,	// (0x0002c8b1) cell_toolbar2_float_pane_ParamLimits

0xd1ed,	// (0x0002c8b1) cell_toolbar2_float_pane

0xd1fe,	// (0x0002c8c2) cell_toolbar2_float_pane_g1

0xd1e5,	// (0x0002c8a9) toolbar2_fixed_button_pane_cp

0xbe5a,	// (0x0002b51e) fep_vkb_accented_list_pane_ParamLimits

0xbe5a,	// (0x0002b51e) fep_vkb_accented_list_pane

0x8df7,	// (0x000284bb) bg_popup_fep_shadow_pane_g9

0x382b,	// (0x00022eef) bg_popup_fep_shadow_pane_cp3

0x2e6b,	// (0x0002252f) list_accented_list_pane

0xd207,	// (0x0002c8cb) list_single_accented_list_pane_ParamLimits

0xd207,	// (0x0002c8cb) list_single_accented_list_pane

0x382b,	// (0x00022eef) list_highlight_pane_cp10

0xd218,	// (0x0002c8dc) list_single_accented_list_pane_t1

0x7c94,	// (0x00027358) popup_slider_window_ParamLimits

0x7c94,	// (0x00027358) popup_slider_window

0xce60,	// (0x0002c524) aid_indentation_list_msg

0xd2e4,	// (0x0002c9a8) bg_popup_window_pane_cp19

0xd352,	// (0x0002ca16) popup_slider_window_g1

0xd36e,	// (0x0002ca32) popup_slider_window_g2

0xd38a,	// (0x0002ca4e) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x0002f3a0) popup_slider_window_g

0xd3e6,	// (0x0002caaa) popup_slider_window_t1

0xd45a,	// (0x0002cb1e) small_volume_slider_vertical_pane

0xbd23,	// (0x0002b3e7) small_volume_slider_vertical_pane_g1

0xbd23,	// (0x0002b3e7) small_volume_slider_vertical_pane_g2

0xd476,	// (0x0002cb3a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x0002f3b2) small_volume_slider_vertical_pane_g

0x64cc,	// (0x00025b90) area_side_right_pane_ParamLimits

0x64cc,	// (0x00025b90) area_side_right_pane

0x8f53,	// (0x00028617) aid_size_side_button_ParamLimits

0x8f53,	// (0x00028617) aid_size_side_button

0x8f67,	// (0x0002862b) grid_sctrl_middle_pane_ParamLimits

0x8f67,	// (0x0002862b) grid_sctrl_middle_pane

0x8f87,	// (0x0002864b) sctrl_sk_bottom_pane

0x8f98,	// (0x0002865c) sctrl_sk_top_pane

0x8faa,	// (0x0002866e) aid_touch_sctrl_top

0x0e01,	// (0x000204c5) bg_sctrl_sk_pane_ParamLimits

0x0e01,	// (0x000204c5) bg_sctrl_sk_pane

0x8fb7,	// (0x0002867b) sctrl_sk_top_pane_g1

0x8fc4,	// (0x00028688) sctrl_sk_top_pane_t1

0x8faa,	// (0x0002866e) aid_touch_sctrl_bottom

0x0e01,	// (0x000204c5) bg_sctrl_sk_pane_cp_ParamLimits

0x0e01,	// (0x000204c5) bg_sctrl_sk_pane_cp

0x8fdf,	// (0x000286a3) sctrl_sk_bottom_pane_g1

0x8fc4,	// (0x00028688) sctrl_sk_bottom_pane_t1

0x8fe8,	// (0x000286ac) cell_sctrl_middle_pane_ParamLimits

0x8fe8,	// (0x000286ac) cell_sctrl_middle_pane

0x9005,	// (0x000286c9) aid_touch_sctrl_middle_ParamLimits

0x9005,	// (0x000286c9) aid_touch_sctrl_middle

0x2cbb,	// (0x0002237f) bg_sctrl_middle_pane_ParamLimits

0x2cbb,	// (0x0002237f) bg_sctrl_middle_pane

0xbf9e,	// (0x0002b662) cell_sctrl_middle_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) cell_sctrl_middle_pane_g1

0x9017,	// (0x000286db) cell_sctrl_middle_pane_g2_ParamLimits

0x9017,	// (0x000286db) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x0002f3be) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x0002f3be) cell_sctrl_middle_pane_g

0x836e,	// (0x00027a32) bg_sctrl_middle_pane_g1

0x8376,	// (0x00027a3a) bg_sctrl_middle_pane_g2

0x837e,	// (0x00027a42) bg_sctrl_middle_pane_g3

0x8386,	// (0x00027a4a) bg_sctrl_middle_pane_g4

0x838e,	// (0x00027a52) bg_sctrl_middle_pane_g5

0x8396,	// (0x00027a5a) bg_sctrl_middle_pane_g6

0x839e,	// (0x00027a62) bg_sctrl_middle_pane_g7

0x83a6,	// (0x00027a6a) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x0002f3c3) bg_sctrl_middle_pane_g

0x83ae,	// (0x00027a72) bg_sctrl_middle_pane_g8_copy1

0x836e,	// (0x00027a32) bg_sctrl_sk_pane_g1

0x8376,	// (0x00027a3a) bg_sctrl_sk_pane_g2

0x837e,	// (0x00027a42) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002ef25) bg_sctrl_sk_pane_g

0x121c,	// (0x000208e0) aid_size_touch_scroll_bar

0x8386,	// (0x00027a4a) bg_sctrl_sk_pane_g4

0x838e,	// (0x00027a52) bg_sctrl_sk_pane_g5

0x8396,	// (0x00027a5a) bg_sctrl_sk_pane_g6

0x839e,	// (0x00027a62) bg_sctrl_sk_pane_g7

0x83a6,	// (0x00027a6a) bg_sctrl_sk_pane_g8

0x83ae,	// (0x00027a72) bg_sctrl_sk_pane_g9

0x78ab,	// (0x00026f6f) popup_fep_china_hwr2_fs_candidate_window

0x78b5,	// (0x00026f79) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x78b5,	// (0x00026f79) popup_fep_china_hwr2_fs_control_window

0xbf9e,	// (0x0002b662) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x0002f3b9) sctrl_sk_top_pane_g

0xd47f,	// (0x0002cb43) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd47f,	// (0x0002cb43) aid_fep_china_hwr2_fs_cell

0xd492,	// (0x0002cb56) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd492,	// (0x0002cb56) bg_popup_fep_shadow_pane_cp4

0xd4ab,	// (0x0002cb6f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd4ab,	// (0x0002cb6f) bg_popup_fep_shadow_pane_cp5

0xd4bd,	// (0x0002cb81) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd4bd,	// (0x0002cb81) popup_fep_china_hwr2_fs_control_bar_grid

0xd4cd,	// (0x0002cb91) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4d5,	// (0x0002cb99) aid_fep_china_hwr2_fs_candi_cell

0x0c38,	// (0x000202fc) bg_popup_fep_shadow_pane_cp6

0xd4df,	// (0x0002cba3) popup_fep_china_hwr2_fs_candidate_grid

0xd4e9,	// (0x0002cbad) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4e9,	// (0x0002cbad) cell_fep_china_hwr2_fs_funtion_grid

0xbd23,	// (0x0002b3e7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd501,	// (0x0002cbc5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd501,	// (0x0002cbc5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd50f,	// (0x0002cbd3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd50f,	// (0x0002cbd3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x0002f3d4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x0002f3d4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd525,	// (0x0002cbe9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd525,	// (0x0002cbe9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd53a,	// (0x0002cbfe) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd53a,	// (0x0002cbfe) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x0002f3d9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x0002f3d9) cell_fep_china_hwr2_fs_funtion_grid_t

0xd556,	// (0x0002cc1a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd55e,	// (0x0002cc22) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd566,	// (0x0002cc2a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x0002f3de) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd56e,	// (0x0002cc32) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd56e,	// (0x0002cc32) cell_fep_china_hwr2_fs_candidate_grid

0xd58d,	// (0x0002cc51) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd595,	// (0x0002cc59) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbd23,	// (0x0002b3e7) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbd23,	// (0x0002b3e7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x0002f1fe) cell_fep_china_hwr2_fs_candidate_grid_g

0xd59d,	// (0x0002cc61) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f1a,	// (0x000275de) clock_nsta_pane_cp_24_ParamLimits

0x7f1a,	// (0x000275de) clock_nsta_pane_cp_24

0x7f9a,	// (0x0002765e) indicator_nsta_pane_cp_24_ParamLimits

0x7f9a,	// (0x0002765e) indicator_nsta_pane_cp_24

0xa3b2,	// (0x00029a76) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002ef8a) heading_pane_g

0xae54,	// (0x0002a518) grid_sct_catagory_button_pane

0xae86,	// (0x0002a54a) scroll_pane_cp5_ParamLimits

0xb96f,	// (0x0002b033) button_value_adjust_pane_cp5_ParamLimits

0xb96f,	// (0x0002b033) button_value_adjust_pane_cp5

0xba54,	// (0x0002b118) form2_midp_time_pane_ParamLimits

0xd5ab,	// (0x0002cc6f) cell_sct_catagory_button_pane_ParamLimits

0xd5ab,	// (0x0002cc6f) cell_sct_catagory_button_pane

0xbce8,	// (0x0002b3ac) bg_button_pane_cp01_ParamLimits

0xbce8,	// (0x0002b3ac) bg_button_pane_cp01

0xbd23,	// (0x0002b3e7) cell_sct_catagory_button_pane_g1

0x7cd5,	// (0x00027399) popup_tb_extension_window

0xd5bd,	// (0x0002cc81) aid_size_cell_ext_ParamLimits

0xd5bd,	// (0x0002cc81) aid_size_cell_ext

0x0e01,	// (0x000204c5) bg_tb_trans_pane_cp1_ParamLimits

0x0e01,	// (0x000204c5) bg_tb_trans_pane_cp1

0xd5dd,	// (0x0002cca1) grid_tb_ext_pane_ParamLimits

0xd5dd,	// (0x0002cca1) grid_tb_ext_pane

0xd60d,	// (0x0002ccd1) cell_tb_ext_pane_ParamLimits

0xd60d,	// (0x0002ccd1) cell_tb_ext_pane

0xd624,	// (0x0002cce8) cell_tb_ext_pane_g1_ParamLimits

0xd624,	// (0x0002cce8) cell_tb_ext_pane_g1

0xd641,	// (0x0002cd05) cell_tb_ext_pane_t1

0x0e01,	// (0x000204c5) list_highlight_pane_cp11_ParamLimits

0x0e01,	// (0x000204c5) list_highlight_pane_cp11

0x6733,	// (0x00025df7) popup_uni_indicator_window_ParamLimits

0x6733,	// (0x00025df7) popup_uni_indicator_window

0x2cbb,	// (0x0002237f) bg_popup_sub_pane_cp14

0xd65c,	// (0x0002cd20) list_uniindi_pane

0xd668,	// (0x0002cd2c) uniindi_top_pane

0x0e01,	// (0x000204c5) bg_uniindi_top_pane

0xd689,	// (0x0002cd4d) uniindi_top_pane_g1

0xd69f,	// (0x0002cd63) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x0002f3e5) uniindi_top_pane_g

0xd6c9,	// (0x0002cd8d) uniindi_top_pane_t1

0xd6f5,	// (0x0002cdb9) list_single_uniindi_pane_ParamLimits

0xd6f5,	// (0x0002cdb9) list_single_uniindi_pane

0xbd23,	// (0x0002b3e7) bg_uniindi_top_pane_g1

0xd707,	// (0x0002cdcb) list_single_uniindi_pane_g1

0xd71a,	// (0x0002cdde) list_single_uniindi_pane_t1

0x0c38,	// (0x000202fc) control_bg_pane

0xd73f,	// (0x0002ce03) bg_sctrl_sk_pane_cp1

0xd748,	// (0x0002ce0c) bg_sctrl_sk_pane_cp2

0xd751,	// (0x0002ce15) control_bg_pane_g1

0xd75a,	// (0x0002ce1e) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x0002f3ee) control_bg_pane_g

0xb796,	// (0x0002ae5a) cell_indicator_nsta_pane_g1_ParamLimits

0xb7a4,	// (0x0002ae68) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x0002f162) cell_indicator_nsta_pane_g_ParamLimits

0x6039,	// (0x000256fd) form2_midp_time_pane_t1_ParamLimits

0x105e,	// (0x00020722) main_idle_act4_pane_ParamLimits

0x105e,	// (0x00020722) main_idle_act4_pane

0x7cd5,	// (0x00027399) popup_tb_extension_window_ParamLimits

0xd5ff,	// (0x0002ccc3) tb_ext_find_pane_ParamLimits

0xd5ff,	// (0x0002ccc3) tb_ext_find_pane

0xd763,	// (0x0002ce27) ai_gene_pane_1_cp1

0x73c9,	// (0x00026a8d) ai_gene_pane_2_cp1

0xd76b,	// (0x0002ce2f) list_single_idle_plugin_calendar_pane

0xd774,	// (0x0002ce38) list_single_idle_plugin_notification_pane

0xd77d,	// (0x0002ce41) list_single_idle_plugin_player_pane

0xd786,	// (0x0002ce4a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd786,	// (0x0002ce4a) list_single_idle_plugin_shortcut_pane

0xd7a8,	// (0x0002ce6c) main_idle_act4_pane_t1

0xd7ba,	// (0x0002ce7e) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x0002f3f3) main_idle_act4_pane_t

0xd7cc,	// (0x0002ce90) middle_sk_idle_act4_pane_ParamLimits

0xd7cc,	// (0x0002ce90) middle_sk_idle_act4_pane

0xd7e2,	// (0x0002cea6) popup_clock_digital_analogue_window_cp2

0xd7fc,	// (0x0002cec0) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7fc,	// (0x0002cec0) shortcut_wheel_idle_act4_pane

0xbd23,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g1

0xbd23,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g2

0xbd23,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g3

0xbd23,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g4

0xbd23,	// (0x0002b3e7) shortcut_wheel_idle_act4_pane_g5

0xd810,	// (0x0002ced4) shortcut_wheel_idle_act4_pane_g6

0xd818,	// (0x0002cedc) shortcut_wheel_idle_act4_pane_g7

0xd820,	// (0x0002cee4) shortcut_wheel_idle_act4_pane_g8

0xd828,	// (0x0002ceec) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x0002f3f8) shortcut_wheel_idle_act4_pane_g

0xbf9e,	// (0x0002b662) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) middle_sk_idle_act4_pane_g1

0xd88c,	// (0x0002cf50) middle_sk_idle_act4_pane_g2_ParamLimits

0xd88c,	// (0x0002cf50) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x0002f41b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x0002f41b) middle_sk_idle_act4_pane_g

0xd898,	// (0x0002cf5c) middle_sk_idle_act4_pane_t1_ParamLimits

0xd898,	// (0x0002cf5c) middle_sk_idle_act4_pane_t1

0xd8b5,	// (0x0002cf79) grid_ai_shortcut_pane_ParamLimits

0xd8b5,	// (0x0002cf79) grid_ai_shortcut_pane

0xd8ce,	// (0x0002cf92) list_highlight_pane_cp16_ParamLimits

0xd8ce,	// (0x0002cf92) list_highlight_pane_cp16

0xd8db,	// (0x0002cf9f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8db,	// (0x0002cf9f) list_single_idle_plugin_shortcut_pane_g1

0xd8e7,	// (0x0002cfab) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8e7,	// (0x0002cfab) list_single_idle_plugin_shortcut_pane_g2

0xd901,	// (0x0002cfc5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd901,	// (0x0002cfc5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x0002f420) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x0002f420) list_single_idle_plugin_shortcut_pane_g

0xd914,	// (0x0002cfd8) cell_ai_shortcut_pane_ParamLimits

0xd914,	// (0x0002cfd8) cell_ai_shortcut_pane

0xd937,	// (0x0002cffb) cell_ai_shortcut_pane_g1_ParamLimits

0xd937,	// (0x0002cffb) cell_ai_shortcut_pane_g1

0xd763,	// (0x0002ce27) ai_gene_pane_1_cp2

0xd959,	// (0x0002d01d) ai_gene_pane_2_cp2

0xd961,	// (0x0002d025) list_highlight_pane_cp15

0xd96a,	// (0x0002d02e) list_single_idle_plugin_calendar_pane_g1

0xd961,	// (0x0002d025) list_highlight_pane_cp17

0xd972,	// (0x0002d036) list_single_idle_plugin_calendar_pane_g1_copy1

0xd97a,	// (0x0002d03e) list_single_idle_plugin_player_pane_g1

0xb0bb,	// (0x0002a77f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x0002f427) list_single_idle_plugin_player_pane_g

0xd982,	// (0x0002d046) list_single_idle_plugin_player_pane_t1

0xd990,	// (0x0002d054) list_single_idle_plugin_player_pane_t2

0xd99e,	// (0x0002d062) list_single_idle_plugin_player_pane_t3

0xd9ac,	// (0x0002d070) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x0002f42c) list_single_idle_plugin_player_pane_t

0xd9ba,	// (0x0002d07e) wait_bar_pane_cp15

0xd9c2,	// (0x0002d086) grid_ai_notification_pane

0xb0bb,	// (0x0002a77f) list_single_idle_plugin_notification_pane_g1

0xd9cb,	// (0x0002d08f) cell_ai_notification_pane_ParamLimits

0xd9cb,	// (0x0002d08f) cell_ai_notification_pane

0xd9d8,	// (0x0002d09c) cell_ai_notification_pane_g1

0xd9e0,	// (0x0002d0a4) cell_ai_notification_pane_t1

0xd9ee,	// (0x0002d0b2) tb_ext_find_button_pane

0xd9f6,	// (0x0002d0ba) tb_ext_find_pane_g1

0xd9fe,	// (0x0002d0c2) tb_ext_find_pane_t1

0x33c8,	// (0x00022a8c) tb_ext_find_button_pane_g1

0xda0c,	// (0x0002d0d0) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x0002f435) tb_ext_find_button_pane_g

0xd7a8,	// (0x0002ce6c) main_idle_act4_pane_t1_ParamLimits

0xd7ba,	// (0x0002ce7e) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x0002f3f3) main_idle_act4_pane_t_ParamLimits

0xd7e2,	// (0x0002cea6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7f0,	// (0x0002ceb4) sat_plugin_idle_act4_pane_ParamLimits

0xd7f0,	// (0x0002ceb4) sat_plugin_idle_act4_pane

0xda15,	// (0x0002d0d9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda15,	// (0x0002d0d9) sat_plugin_idle_act4_pane_t1

0xda28,	// (0x0002d0ec) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda28,	// (0x0002d0ec) sat_plugin_idle_act4_pane_t2

0xda3b,	// (0x0002d0ff) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda3b,	// (0x0002d0ff) sat_plugin_idle_act4_pane_t3

0xda4e,	// (0x0002d112) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda4e,	// (0x0002d112) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x0002f43a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x0002f43a) sat_plugin_idle_act4_pane_t

0x6664,	// (0x00025d28) popup_battery_window_ParamLimits

0x6664,	// (0x00025d28) popup_battery_window

0x0e01,	// (0x000204c5) bg_popup_sub_pane_cp25_ParamLimits

0x0e01,	// (0x000204c5) bg_popup_sub_pane_cp25

0xda61,	// (0x0002d125) popup_battery_window_g1_ParamLimits

0xda61,	// (0x0002d125) popup_battery_window_g1

0xda6d,	// (0x0002d131) popup_battery_window_t1_ParamLimits

0xda6d,	// (0x0002d131) popup_battery_window_t1

0xda7f,	// (0x0002d143) popup_battery_window_t2_ParamLimits

0xda7f,	// (0x0002d143) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x0002f443) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x0002f443) popup_battery_window_t

0x7294,	// (0x00026958) midp_canvas_pane_ParamLimits

0x730b,	// (0x000269cf) midp_keypad_pane_ParamLimits

0x730b,	// (0x000269cf) midp_keypad_pane

0x77fd,	// (0x00026ec1) main_midp_pane_ParamLimits

0xb822,	// (0x0002aee6) signal_pane_g2_cp_ParamLimits

0xda9c,	// (0x0002d160) aid_size_cell_midp_keypad_ParamLimits

0xda9c,	// (0x0002d160) aid_size_cell_midp_keypad

0xdab6,	// (0x0002d17a) midp_keyp_game_grid_pane_ParamLimits

0xdab6,	// (0x0002d17a) midp_keyp_game_grid_pane

0xdad6,	// (0x0002d19a) midp_keyp_rocker_pane_ParamLimits

0xdad6,	// (0x0002d19a) midp_keyp_rocker_pane

0xdb01,	// (0x0002d1c5) midp_keyp_sk_left_pane_ParamLimits

0xdb01,	// (0x0002d1c5) midp_keyp_sk_left_pane

0xdb5b,	// (0x0002d21f) midp_keyp_sk_right_pane_ParamLimits

0xdb5b,	// (0x0002d21f) midp_keyp_sk_right_pane

0x0c38,	// (0x000202fc) bg_button_pane_cp03

0xdbb5,	// (0x0002d279) midp_keyp_sk_left_pane_g1

0x0c38,	// (0x000202fc) bg_button_pane_cp04

0xdbb5,	// (0x0002d279) midp_keyp_sk_right_pane_g1

0xbd23,	// (0x0002b3e7) midp_keyp_rocker_pane_g1

0xdbbe,	// (0x0002d282) keyp_game_cell_pane_ParamLimits

0xdbbe,	// (0x0002d282) keyp_game_cell_pane

0x0c38,	// (0x000202fc) bg_button_pane_cp02

0xdbd1,	// (0x0002d295) keyp_game_cell_pane_g1

0x66ae,	// (0x00025d72) popup_fep_vkb2_window_ParamLimits

0x66ae,	// (0x00025d72) popup_fep_vkb2_window

0x9035,	// (0x000286f9) aid_size_cell_vkb2_ParamLimits

0x9035,	// (0x000286f9) aid_size_cell_vkb2

0x9089,	// (0x0002874d) popup_fep_vkb2_window_g1_ParamLimits

0x9089,	// (0x0002874d) popup_fep_vkb2_window_g1

0x90d1,	// (0x00028795) vkb2_area_bottom_pane_ParamLimits

0x90d1,	// (0x00028795) vkb2_area_bottom_pane

0x9125,	// (0x000287e9) vkb2_area_keypad_pane_ParamLimits

0x9125,	// (0x000287e9) vkb2_area_keypad_pane

0x916b,	// (0x0002882f) vkb2_area_top_pane_ParamLimits

0x916b,	// (0x0002882f) vkb2_area_top_pane

0x91e5,	// (0x000288a9) vkb2_top_entry_pane_ParamLimits

0x91e5,	// (0x000288a9) vkb2_top_entry_pane

0x920f,	// (0x000288d3) vkb2_top_grid_left_pane_ParamLimits

0x920f,	// (0x000288d3) vkb2_top_grid_left_pane

0x922d,	// (0x000288f1) vkb2_top_grid_right_pane_ParamLimits

0x922d,	// (0x000288f1) vkb2_top_grid_right_pane

0x924b,	// (0x0002890f) vkb2_cell_keypad_pane_ParamLimits

0x924b,	// (0x0002890f) vkb2_cell_keypad_pane

0x931c,	// (0x000289e0) vkb2_area_bottom_grid_pane_ParamLimits

0x931c,	// (0x000289e0) vkb2_area_bottom_grid_pane

0x9342,	// (0x00028a06) vkb2_area_bottom_pane_g1_ParamLimits

0x9342,	// (0x00028a06) vkb2_area_bottom_pane_g1

0x9366,	// (0x00028a2a) vkb2_area_bottom_pane_g2_ParamLimits

0x9366,	// (0x00028a2a) vkb2_area_bottom_pane_g2

0x9394,	// (0x00028a58) vkb2_area_bottom_pane_g3_ParamLimits

0x9394,	// (0x00028a58) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x0002f448) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x0002f448) vkb2_area_bottom_pane_g

0x93f5,	// (0x00028ab9) vkb2_top_cell_left_pane_ParamLimits

0x93f5,	// (0x00028ab9) vkb2_top_cell_left_pane

0xdbe2,	// (0x0002d2a6) vkb2_top_entry_pane_g1_ParamLimits

0xdbe2,	// (0x0002d2a6) vkb2_top_entry_pane_g1

0xdbf0,	// (0x0002d2b4) vkb2_top_entry_pane_t1_ParamLimits

0xdbf0,	// (0x0002d2b4) vkb2_top_entry_pane_t1

0xdc22,	// (0x0002d2e6) vkb2_top_entry_pane_t2_ParamLimits

0xdc22,	// (0x0002d2e6) vkb2_top_entry_pane_t2

0xdc54,	// (0x0002d318) vkb2_top_entry_pane_t3_ParamLimits

0xdc54,	// (0x0002d318) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x0002f44f) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x0002f44f) vkb2_top_entry_pane_t

0x9442,	// (0x00028b06) vkb2_top_grid_right_pane_g1_ParamLimits

0x9442,	// (0x00028b06) vkb2_top_grid_right_pane_g1

0x9458,	// (0x00028b1c) vkb2_top_grid_right_pane_g2_ParamLimits

0x9458,	// (0x00028b1c) vkb2_top_grid_right_pane_g2

0x9470,	// (0x00028b34) vkb2_top_grid_right_pane_g3_ParamLimits

0x9470,	// (0x00028b34) vkb2_top_grid_right_pane_g3

0x9488,	// (0x00028b4c) vkb2_top_grid_right_pane_g4_ParamLimits

0x9488,	// (0x00028b4c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x0002f456) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x0002f456) vkb2_top_grid_right_pane_g

0x949e,	// (0x00028b62) vkb2_top_cell_left_pane_g1

0x94b5,	// (0x00028b79) vkb2_cell_keypad_pane_g1_ParamLimits

0x94b5,	// (0x00028b79) vkb2_cell_keypad_pane_g1

0xdc78,	// (0x0002d33c) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc78,	// (0x0002d33c) vkb2_cell_keypad_pane_t1

0x94c3,	// (0x00028b87) vkb2_cell_bottom_grid_pane_ParamLimits

0x94c3,	// (0x00028b87) vkb2_cell_bottom_grid_pane

0x94fc,	// (0x00028bc0) vkb2_cell_bottom_grid_pane_g1

0xd830,	// (0x0002cef4) aid_call2_pane_cp02

0xd838,	// (0x0002cefc) aid_call_pane_cp02

0xd840,	// (0x0002cf04) clock_digital_number_pane_cp10

0xd848,	// (0x0002cf0c) clock_digital_number_pane_cp11

0xd850,	// (0x0002cf14) clock_digital_number_pane_cp12

0xd858,	// (0x0002cf1c) clock_digital_number_pane_cp13

0xd860,	// (0x0002cf24) clock_digital_separator_pane_cp10

0x33c8,	// (0x00022a8c) popup_clock_digital_analogue_window_cp2_g1

0x33c8,	// (0x00022a8c) popup_clock_digital_analogue_window_cp2_g2

0xd868,	// (0x0002cf2c) popup_clock_digital_analogue_window_cp2_g3

0x33c8,	// (0x00022a8c) popup_clock_digital_analogue_window_cp2_g4

0xd868,	// (0x0002cf2c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x0002f40b) popup_clock_digital_analogue_window_cp2_g

0xd870,	// (0x0002cf34) popup_clock_digital_analogue_window_cp2_t1

0xd87e,	// (0x0002cf42) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x0002f416) popup_clock_digital_analogue_window_cp2_t

0xbd23,	// (0x0002b3e7) clock_digital_number_pane_cp10_g1

0xbd23,	// (0x0002b3e7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002f1fe) clock_digital_number_pane_cp10_g

0xbd23,	// (0x0002b3e7) clock_digital_separator_pane_cp10_g1

0xbd23,	// (0x0002b3e7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002f1fe) clock_digital_separator_pane_cp10_g

0xd6ab,	// (0x0002cd6f) uniindi_top_pane_g3

0xd6bc,	// (0x0002cd80) uniindi_top_pane_g4

0x92d6,	// (0x0002899a) vkb2_row_keypad_pane_ParamLimits

0x92d6,	// (0x0002899a) vkb2_row_keypad_pane

0x9518,	// (0x00028bdc) vkb2_cell_t_keypad_pane_ParamLimits

0x9518,	// (0x00028bdc) vkb2_cell_t_keypad_pane

0x9528,	// (0x00028bec) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9528,	// (0x00028bec) vkb2_cell_t_keypad_pane_cp08

0x953d,	// (0x00028c01) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x953d,	// (0x00028c01) vkb2_cell_t_keypad_pane_cp09

0x9551,	// (0x00028c15) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9551,	// (0x00028c15) vkb2_cell_t_keypad_pane_cp01

0x9562,	// (0x00028c26) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9562,	// (0x00028c26) vkb2_cell_t_keypad_pane_cp02

0x9573,	// (0x00028c37) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9573,	// (0x00028c37) vkb2_cell_t_keypad_pane_cp03

0x9584,	// (0x00028c48) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9584,	// (0x00028c48) vkb2_cell_t_keypad_pane_cp04

0x9595,	// (0x00028c59) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9595,	// (0x00028c59) vkb2_cell_t_keypad_pane_cp05

0x95a6,	// (0x00028c6a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x95a6,	// (0x00028c6a) vkb2_cell_t_keypad_pane_cp06

0x95b9,	// (0x00028c7d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x95b9,	// (0x00028c7d) vkb2_cell_t_keypad_pane_cp07

0x95ce,	// (0x00028c92) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x95ce,	// (0x00028c92) vkb2_cell_t_keypad_pane_cp10

0xbf9e,	// (0x0002b662) vkb2_cell_t_keypad_pane_g1

0xdc8f,	// (0x0002d353) vkb2_cell_t_keypad_pane_t1

0x0c38,	// (0x000202fc) popup_grid_graphic2_window

0xdca1,	// (0x0002d365) aid_size_cell_graphic2_ParamLimits

0xdca1,	// (0x0002d365) aid_size_cell_graphic2

0xdcd9,	// (0x0002d39d) bg_popup_window_pane_cp21_ParamLimits

0xdcd9,	// (0x0002d39d) bg_popup_window_pane_cp21

0xdce7,	// (0x0002d3ab) graphic2_pages_pane_ParamLimits

0xdce7,	// (0x0002d3ab) graphic2_pages_pane

0xdd2d,	// (0x0002d3f1) grid_graphic2_control_pane_ParamLimits

0xdd2d,	// (0x0002d3f1) grid_graphic2_control_pane

0xdd6b,	// (0x0002d42f) grid_graphic2_pane_ParamLimits

0xdd6b,	// (0x0002d42f) grid_graphic2_pane

0xdde1,	// (0x0002d4a5) cell_graphic2_pane

0x0c38,	// (0x000202fc) main_comp_mode_pane

0xcf1c,	// (0x0002c5e0) list_ai3_gene_pane_ParamLimits

0xd2e4,	// (0x0002c9a8) bg_popup_window_pane_cp19_ParamLimits

0xd2f0,	// (0x0002c9b4) bg_touch_area_indi_pane_ParamLimits

0xd2f0,	// (0x0002c9b4) bg_touch_area_indi_pane

0xd306,	// (0x0002c9ca) bg_touch_area_indi_pane_cp01_ParamLimits

0xd306,	// (0x0002c9ca) bg_touch_area_indi_pane_cp01

0xd31e,	// (0x0002c9e2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd31e,	// (0x0002c9e2) bg_touch_area_indi_pane_cp02

0xd338,	// (0x0002c9fc) bg_touch_area_indi_pane_cp03_ParamLimits

0xd338,	// (0x0002c9fc) bg_touch_area_indi_pane_cp03

0xd352,	// (0x0002ca16) popup_slider_window_g1_ParamLimits

0xd36e,	// (0x0002ca32) popup_slider_window_g2_ParamLimits

0xd38a,	// (0x0002ca4e) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x0002f3a0) popup_slider_window_g_ParamLimits

0xd3e6,	// (0x0002caaa) popup_slider_window_t1_ParamLimits

0xd45a,	// (0x0002cb1e) small_volume_slider_vertical_pane_ParamLimits

0xdde1,	// (0x0002d4a5) cell_graphic2_pane_ParamLimits

0xde33,	// (0x0002d4f7) bg_button_pane_cp10_ParamLimits

0xde33,	// (0x0002d4f7) bg_button_pane_cp10

0xde48,	// (0x0002d50c) bg_button_pane_cp11_ParamLimits

0xde48,	// (0x0002d50c) bg_button_pane_cp11

0xde5d,	// (0x0002d521) graphic2_pages_pane_g1_ParamLimits

0xde5d,	// (0x0002d521) graphic2_pages_pane_g1

0xde78,	// (0x0002d53c) graphic2_pages_pane_g2_ParamLimits

0xde78,	// (0x0002d53c) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x0002f464) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x0002f464) graphic2_pages_pane_g

0xde90,	// (0x0002d554) graphic2_pages_pane_t1_ParamLimits

0xde90,	// (0x0002d554) graphic2_pages_pane_t1

0xdea6,	// (0x0002d56a) cell_graphic2_control_pane_ParamLimits

0xdea6,	// (0x0002d56a) cell_graphic2_control_pane

0xdec9,	// (0x0002d58d) cell_graphic2_pane_g1_ParamLimits

0xdec9,	// (0x0002d58d) cell_graphic2_pane_g1

0xded6,	// (0x0002d59a) cell_graphic2_pane_g2_ParamLimits

0xded6,	// (0x0002d59a) cell_graphic2_pane_g2

0xdee3,	// (0x0002d5a7) cell_graphic2_pane_g3_ParamLimits

0xdee3,	// (0x0002d5a7) cell_graphic2_pane_g3

0xdef0,	// (0x0002d5b4) cell_graphic2_pane_g4_ParamLimits

0xdef0,	// (0x0002d5b4) cell_graphic2_pane_g4

0xdefd,	// (0x0002d5c1) cell_graphic2_pane_g5_ParamLimits

0xdefd,	// (0x0002d5c1) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x0002f469) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x0002f469) cell_graphic2_pane_g

0xdf18,	// (0x0002d5dc) cell_graphic2_pane_t1_ParamLimits

0xdf18,	// (0x0002d5dc) cell_graphic2_pane_t1

0x8459,	// (0x00027b1d) grid_highlight_pane_cp11_ParamLimits

0x8459,	// (0x00027b1d) grid_highlight_pane_cp11

0x0e01,	// (0x000204c5) bg_button_pane_cp05

0xdf41,	// (0x0002d605) cell_graphic2_control_pane_g1

0xbd23,	// (0x0002b3e7) bg_touch_area_indi_pane_g1

0xdf69,	// (0x0002d62d) aid_cmod_rocker_key_size

0xdf73,	// (0x0002d637) aid_cmode_itu_key_size

0xdf7d,	// (0x0002d641) main_cmode_video_pane

0xdf87,	// (0x0002d64b) main_comp_mode_itu_pane

0xdf93,	// (0x0002d657) main_comp_mode_rocker_pane

0xdf9f,	// (0x0002d663) cell_cmode_rocker_pane_ParamLimits

0xdf9f,	// (0x0002d663) cell_cmode_rocker_pane

0xdfb3,	// (0x0002d677) cell_cmode_itu_pane_ParamLimits

0xdfb3,	// (0x0002d677) cell_cmode_itu_pane

0x2cbb,	// (0x0002237f) bg_button_pane_cp06_ParamLimits

0x2cbb,	// (0x0002237f) bg_button_pane_cp06

0xbf9e,	// (0x0002b662) cell_cmode_rocker_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) cell_cmode_rocker_pane_g1

0xd501,	// (0x0002cbc5) cell_cmode_rocker_pane_g2_ParamLimits

0xd501,	// (0x0002cbc5) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x0002f479) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x0002f479) cell_cmode_rocker_pane_g

0x0c38,	// (0x000202fc) bg_button_pane_cp07

0xdfca,	// (0x0002d68e) cell_cmode_itu_pane_g1

0xdfd3,	// (0x0002d697) cell_cmode_itu_pane_t1

0xdfe1,	// (0x0002d6a5) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x0002f47e) cell_cmode_itu_pane_t

0xd72f,	// (0x0002cdf3) aid_touch_ctrl_left

0xd737,	// (0x0002cdfb) aid_touch_ctrl_right

0x0c38,	// (0x000202fc) compa_mode_pane

0xdfef,	// (0x0002d6b3) aid_cmod_rocker_key_size_cp

0xdff9,	// (0x0002d6bd) aid_cmode_itu_key_size_cp

0xe003,	// (0x0002d6c7) compa_mode_pane_g1

0xe00b,	// (0x0002d6cf) compa_mode_pane_g2

0xe013,	// (0x0002d6d7) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x0002f483) compa_mode_pane_g

0xe01b,	// (0x0002d6df) main_comp_mode_itu_pane_cp

0xe023,	// (0x0002d6e7) main_comp_mode_rocker_pane_cp

0xe02b,	// (0x0002d6ef) cell_cmode_itu_pane_cp_ParamLimits

0xe02b,	// (0x0002d6ef) cell_cmode_itu_pane_cp

0xe040,	// (0x0002d704) cell_cmode_rocker_pane_cp_ParamLimits

0xe040,	// (0x0002d704) cell_cmode_rocker_pane_cp

0x2cbb,	// (0x0002237f) bg_button_pane_cp06_cp_ParamLimits

0x2cbb,	// (0x0002237f) bg_button_pane_cp06_cp

0xbf9e,	// (0x0002b662) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf9e,	// (0x0002b662) cell_cmode_rocker_pane_g1_cp

0xbd23,	// (0x0002b3e7) cell_cmode_rocker_pane_g2_cp

0x0c38,	// (0x000202fc) bg_button_pane_cp07_cp

0xe052,	// (0x0002d716) cell_cmode_itu_pane_g1_cp

0xe05b,	// (0x0002d71f) cell_cmode_itu_pane_t1_cp

0xe05b,	// (0x0002d71f) cell_cmode_itu_pane_t2_cp

0xac1c,	// (0x0002a2e0) settings_code_pane_cp2

0x0cb4,	// (0x00020378) bg_popup_window_pane_cp3_ParamLimits

0x0fef,	// (0x000206b3) heading_pane_cp3_ParamLimits

0x0ffb,	// (0x000206bf) listscroll_popup_graphic_pane_ParamLimits

0x8bc5,	// (0x00028289) fep_hwr_aid_pane_ParamLimits

0x8faa,	// (0x0002866e) aid_touch_sctrl_top_ParamLimits

0x8fb7,	// (0x0002867b) sctrl_sk_top_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x0002f3b9) sctrl_sk_top_pane_g_ParamLimits

0x8fc4,	// (0x00028688) sctrl_sk_top_pane_t1_ParamLimits

0x8faa,	// (0x0002866e) aid_touch_sctrl_bottom_ParamLimits

0x8fc4,	// (0x00028688) sctrl_sk_bottom_pane_t1_ParamLimits

0xd675,	// (0x0002cd39) aid_area_touch_clock

0x91ad,	// (0x00028871) aid_vkb2_area_top_pane_cell_ParamLimits

0x91ad,	// (0x00028871) aid_vkb2_area_top_pane_cell

0x92f8,	// (0x000289bc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x92f8,	// (0x000289bc) aid_vkb2_area_bottom_pane_cell

0xdbda,	// (0x0002d29e) popup_char_count_window

0xe069,	// (0x0002d72d) popup_char_count_window_g1

0xe072,	// (0x0002d736) popup_char_count_window_g2

0xe07b,	// (0x0002d73f) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x0002f48a) popup_char_count_window_g

0xe084,	// (0x0002d748) popup_char_count_window_t1

0x9067,	// (0x0002872b) popup_fep_char_preview_window_ParamLimits

0x9067,	// (0x0002872b) popup_fep_char_preview_window

0x91cb,	// (0x0002888f) vkb2_top_candi_pane_ParamLimits

0x91cb,	// (0x0002888f) vkb2_top_candi_pane

0xe092,	// (0x0002d756) cell_vkb2_top_candi_pane_ParamLimits

0xe092,	// (0x0002d756) cell_vkb2_top_candi_pane

0x9d2f,	// (0x000293f3) bg_popup_fep_char_preview_window_ParamLimits

0x9d2f,	// (0x000293f3) bg_popup_fep_char_preview_window

0x95e3,	// (0x00028ca7) popup_fep_char_preview_window_t1_ParamLimits

0x95e3,	// (0x00028ca7) popup_fep_char_preview_window_t1

0xe0e3,	// (0x0002d7a7) bg_popup_fep_char_preview_window_g1

0xe0eb,	// (0x0002d7af) bg_popup_fep_char_preview_window_g2

0xe0f3,	// (0x0002d7b7) bg_popup_fep_char_preview_window_g3

0xe0fb,	// (0x0002d7bf) bg_popup_fep_char_preview_window_g4

0xe103,	// (0x0002d7c7) bg_popup_fep_char_preview_window_g5

0x961d,	// (0x00028ce1) bg_popup_fep_char_preview_window_g6

0xe10b,	// (0x0002d7cf) bg_popup_fep_char_preview_window_g7

0xe113,	// (0x0002d7d7) bg_popup_fep_char_preview_window_g8

0xe11b,	// (0x0002d7df) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x0002f491) bg_popup_fep_char_preview_window_g

0xbf9e,	// (0x0002b662) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) cell_vkb2_top_candi_pane_g1

0xc2df,	// (0x0002b9a3) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc2df,	// (0x0002b9a3) cell_vkb2_top_candi_pane_g2

0xc300,	// (0x0002b9c4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc300,	// (0x0002b9c4) cell_vkb2_top_candi_pane_g3

0x9625,	// (0x00028ce9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9625,	// (0x00028ce9) cell_vkb2_top_candi_pane_g4

0xe123,	// (0x0002d7e7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe123,	// (0x0002d7e7) cell_vkb2_top_candi_pane_g5

0xd501,	// (0x0002cbc5) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd501,	// (0x0002cbc5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x0002f4a4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x0002f4a4) cell_vkb2_top_candi_pane_g

0x9646,	// (0x00028d0a) cell_vkb2_top_candi_pane_t1

0x8a33,	// (0x000280f7) aid_size_touch_slider_mark_ParamLimits

0x8a33,	// (0x000280f7) aid_size_touch_slider_mark

0xdd1d,	// (0x0002d3e1) grid_graphic2_catg_pane_ParamLimits

0xdd1d,	// (0x0002d3e1) grid_graphic2_catg_pane

0xddbb,	// (0x0002d47f) popup_grid_graphic2_window_t1_ParamLimits

0xddbb,	// (0x0002d47f) popup_grid_graphic2_window_t1

0xddcd,	// (0x0002d491) popup_grid_graphic2_window_t2_ParamLimits

0xddcd,	// (0x0002d491) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x0002f45f) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x0002f45f) popup_grid_graphic2_window_t

0x0e01,	// (0x000204c5) bg_button_pane_cp05_ParamLimits

0xdf41,	// (0x0002d605) cell_graphic2_control_pane_g1_ParamLimits

0xe144,	// (0x0002d808) cell_graphic2_catg_pane_ParamLimits

0xe144,	// (0x0002d808) cell_graphic2_catg_pane

0x0c38,	// (0x000202fc) bg_button_pane_cp12

0xe156,	// (0x0002d81a) cell_graphic2_catg_pane_g1

0xd641,	// (0x0002cd05) cell_tb_ext_pane_t1_ParamLimits

0x9415,	// (0x00028ad9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9415,	// (0x00028ad9) vkb2_top_cell_right_narrow_pane

0x942d,	// (0x00028af1) vkb2_top_cell_right_wide_pane_ParamLimits

0x942d,	// (0x00028af1) vkb2_top_cell_right_wide_pane

0xf540,	// (0x0002ec04) bg_vkb2_func_pane_ParamLimits

0xf540,	// (0x0002ec04) bg_vkb2_func_pane

0x949e,	// (0x00028b62) vkb2_top_cell_left_pane_g1_ParamLimits

0xf540,	// (0x0002ec04) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf540,	// (0x0002ec04) bg_vkb2_fuc_pane_cp03

0x94fc,	// (0x00028bc0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8376,	// (0x00027a3a) bg_vkb2_func_pane_g1

0x837e,	// (0x00027a42) bg_vkb2_func_pane_g2

0x838e,	// (0x00027a52) bg_vkb2_func_pane_g3

0x8386,	// (0x00027a4a) bg_vkb2_func_pane_g4

0x8396,	// (0x00027a5a) bg_vkb2_func_pane_g5

0x839e,	// (0x00027a62) bg_vkb2_func_pane_g6

0x83a6,	// (0x00027a6a) bg_vkb2_func_pane_g7

0x83ae,	// (0x00027a72) bg_vkb2_func_pane_g8

0x836e,	// (0x00027a32) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x0002f4b1) bg_vkb2_func_pane_g

0xf540,	// (0x0002ec04) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf540,	// (0x0002ec04) bg_vkb2_fuc_pane_cp01

0x949e,	// (0x00028b62) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x949e,	// (0x00028b62) vkb2_top_cell_right_wide_pane_g1

0xf540,	// (0x0002ec04) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf540,	// (0x0002ec04) bg_vkb2_fuc_pane_cp02

0x94fc,	// (0x00028bc0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x94fc,	// (0x00028bc0) vkb2_top_cell_right_narrow_pane_g1

0xd262,	// (0x0002c926) aid_touch_area_decrease_ParamLimits

0xd262,	// (0x0002c926) aid_touch_area_decrease

0xd286,	// (0x0002c94a) aid_touch_area_increase_ParamLimits

0xd286,	// (0x0002c94a) aid_touch_area_increase

0xd292,	// (0x0002c956) aid_touch_area_mute_ParamLimits

0xd292,	// (0x0002c956) aid_touch_area_mute

0xd2b6,	// (0x0002c97a) aid_touch_area_slider_ParamLimits

0xd2b6,	// (0x0002c97a) aid_touch_area_slider

0xd3a6,	// (0x0002ca6a) popup_slider_window_g4_ParamLimits

0xd3a6,	// (0x0002ca6a) popup_slider_window_g4

0xd3b2,	// (0x0002ca76) popup_slider_window_g5_ParamLimits

0xd3b2,	// (0x0002ca76) popup_slider_window_g5

0xd3d4,	// (0x0002ca98) popup_slider_window_g6_ParamLimits

0xd3d4,	// (0x0002ca98) popup_slider_window_g6

0xd414,	// (0x0002cad8) popup_slider_window_t2_ParamLimits

0xd414,	// (0x0002cad8) popup_slider_window_t2

0x0001,

0xfce9,	// (0x0002f3ad) popup_slider_window_t_ParamLimits

0xfce9,	// (0x0002f3ad) popup_slider_window_t

0xd42c,	// (0x0002caf0) slider_pane_ParamLimits

0xd42c,	// (0x0002caf0) slider_pane

0xe15f,	// (0x0002d823) slider_pane_g1_ParamLimits

0xe15f,	// (0x0002d823) slider_pane_g1

0xe173,	// (0x0002d837) slider_pane_g2_ParamLimits

0xe173,	// (0x0002d837) slider_pane_g2

0xe189,	// (0x0002d84d) slider_pane_g3_ParamLimits

0xe189,	// (0x0002d84d) slider_pane_g3

0x0003,

0xfe00,	// (0x0002f4c4) slider_pane_g_ParamLimits

0xfe00,	// (0x0002f4c4) slider_pane_g

0x7d37,	// (0x000273fb) popup_tb_float_extension_window_ParamLimits

0x7d37,	// (0x000273fb) popup_tb_float_extension_window

0xe1b5,	// (0x0002d879) aid_size_cell_tb_float_ext

0x0c38,	// (0x000202fc) bg_popup_sub_window_cp28

0xe1c1,	// (0x0002d885) grid_tb_float_ext_pane

0xe1cd,	// (0x0002d891) cell_tb_float_ext_pane_ParamLimits

0xe1cd,	// (0x0002d891) cell_tb_float_ext_pane

0xe1e9,	// (0x0002d8ad) cell_tb_float_ext_pane_g1

0xe1f2,	// (0x0002d8b6) grid_highlight_pane_cp12

0x8cfe,	// (0x000283c2) cell_last_hwr_side_pane_ParamLimits

0x8cfe,	// (0x000283c2) cell_last_hwr_side_pane

0xbd23,	// (0x0002b3e7) cell_last_hwr_side_pane_g1

0xe1fb,	// (0x0002d8bf) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x0002f4cd) cell_last_hwr_side_pane_g

0x93c4,	// (0x00028a88) vkb2_area_bottom_space_btn_pane_ParamLimits

0x93c4,	// (0x00028a88) vkb2_area_bottom_space_btn_pane

0xbf9e,	// (0x0002b662) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc8f,	// (0x0002d353) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9646,	// (0x00028d0a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9664,	// (0x00028d28) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9664,	// (0x00028d28) vkb2_area_bottom_space_btn_pane_g1

0x969e,	// (0x00028d62) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x969e,	// (0x00028d62) vkb2_area_bottom_space_btn_pane_g2

0x96d4,	// (0x00028d98) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x96d4,	// (0x00028d98) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x0002f4d2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x0002f4d2) vkb2_area_bottom_space_btn_pane_g

0x8c6e,	// (0x00028332) cel_fep_hwr_func_pane_ParamLimits

0x8c6e,	// (0x00028332) cel_fep_hwr_func_pane

0x8caa,	// (0x0002836e) cell_hwr_side_button_pane_ParamLimits

0x8caa,	// (0x0002836e) cell_hwr_side_button_pane

0xd675,	// (0x0002cd39) aid_area_touch_clock_ParamLimits

0x0e01,	// (0x000204c5) bg_uniindi_top_pane_ParamLimits

0xd689,	// (0x0002cd4d) uniindi_top_pane_g1_ParamLimits

0xd69f,	// (0x0002cd63) uniindi_top_pane_g2_ParamLimits

0xd6ab,	// (0x0002cd6f) uniindi_top_pane_g3_ParamLimits

0xd6bc,	// (0x0002cd80) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x0002f3e5) uniindi_top_pane_g_ParamLimits

0xd6c9,	// (0x0002cd8d) uniindi_top_pane_t1_ParamLimits

0x0e01,	// (0x000204c5) bg_vkb2_func_pane_cp01_ParamLimits

0x0e01,	// (0x000204c5) bg_vkb2_func_pane_cp01

0xe204,	// (0x0002d8c8) cel_fep_hwr_func_pane_g1_ParamLimits

0xe204,	// (0x0002d8c8) cel_fep_hwr_func_pane_g1

0x0e01,	// (0x000204c5) bg_vkb2_func_pane_cp02_ParamLimits

0x0e01,	// (0x000204c5) bg_vkb2_func_pane_cp02

0xe204,	// (0x0002d8c8) cell_hwr_side_button_pane_g1_ParamLimits

0xe204,	// (0x0002d8c8) cell_hwr_side_button_pane_g1

0x81bf,	// (0x00027883) status_pane_g4_ParamLimits

0x81bf,	// (0x00027883) status_pane_g4

0x81d9,	// (0x0002789d) status_pane_t1

0xbac2,	// (0x0002b186) form2_midp_gauge_slider_cont_pane

0xbaca,	// (0x0002b18e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbadc,	// (0x0002b1a0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbaee,	// (0x0002b1b2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x0002f1b1) form2_midp_gauge_slider_pane_t_ParamLimits

0xbb00,	// (0x0002b1c4) form2_midp_slider_pane_ParamLimits

0x9027,	// (0x000286eb) aid_size_cell_func_vkb2_ParamLimits

0x9027,	// (0x000286eb) aid_size_cell_func_vkb2

0xe1a1,	// (0x0002d865) slider_pane_g4_ParamLimits

0xe1a1,	// (0x0002d865) slider_pane_g4

0x971e,	// (0x00028de2) form2_midp_gauge_slider_pane_t2_cp01

0x972c,	// (0x00028df0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x972c,	// (0x00028df0) form2_midp_gauge_slider_pane_t3_cp01

0x9749,	// (0x00028e0d) form2_midp_slider_pane_cp01

0x0c38,	// (0x000202fc) navi_smil_pane

0xe23d,	// (0x0002d901) navi_smil_pane_g1

0xe245,	// (0x0002d909) navi_smil_pane_t1

0xe212,	// (0x0002d8d6) form2_midp_slider_pane_g1

0xe21b,	// (0x0002d8df) form2_midp_slider_pane_g2

0xe223,	// (0x0002d8e7) form2_midp_slider_pane_g3

0xe212,	// (0x0002d8d6) form2_midp_slider_pane_g4

0xe22b,	// (0x0002d8ef) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x0002f4db) form2_midp_slider_pane_g

0x970e,	// (0x00028dd2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x970e,	// (0x00028dd2) vkb2_area_bottom_space_btn_pane_g4

0x7fd6,	// (0x0002769a) lc0_navi_pane_ParamLimits

0x7fd6,	// (0x0002769a) lc0_navi_pane

0x8052,	// (0x00027716) lc0_stat_indi_pane_ParamLimits

0x8052,	// (0x00027716) lc0_stat_indi_pane

0x8069,	// (0x0002772d) ls0_title_pane_ParamLimits

0x8069,	// (0x0002772d) ls0_title_pane

0x2cbb,	// (0x0002237f) bg_popup_sub_pane_cp14_ParamLimits

0xd65c,	// (0x0002cd20) list_uniindi_pane_ParamLimits

0xd668,	// (0x0002cd2c) uniindi_top_pane_ParamLimits

0xd707,	// (0x0002cdcb) list_single_uniindi_pane_g1_ParamLimits

0xd71a,	// (0x0002cdde) list_single_uniindi_pane_t1_ParamLimits

0x9752,	// (0x00028e16) lc0_stat_clock_pane_ParamLimits

0x9752,	// (0x00028e16) lc0_stat_clock_pane

0xe253,	// (0x0002d917) lc0_stat_indi_pane_g1_ParamLimits

0xe253,	// (0x0002d917) lc0_stat_indi_pane_g1

0xe260,	// (0x0002d924) lc0_stat_indi_pane_g2_ParamLimits

0xe260,	// (0x0002d924) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x0002f4e6) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x0002f4e6) lc0_stat_indi_pane_g

0x975f,	// (0x00028e23) lc0_uni_indicator_pane_ParamLimits

0x975f,	// (0x00028e23) lc0_uni_indicator_pane

0xe26d,	// (0x0002d931) ls0_title_pane_g1_ParamLimits

0xe26d,	// (0x0002d931) ls0_title_pane_g1

0xe281,	// (0x0002d945) ls0_title_pane_t1_ParamLimits

0xe281,	// (0x0002d945) ls0_title_pane_t1

0x976c,	// (0x00028e30) lc0_uni_indicator_pane_g1_ParamLimits

0x976c,	// (0x00028e30) lc0_uni_indicator_pane_g1

0xe2b7,	// (0x0002d97b) lc0_stat_clock_pane_t1

0x0c38,	// (0x000202fc) main_ai5_pane

0xe2c5,	// (0x0002d989) ai5_sk_pane_ParamLimits

0xe2c5,	// (0x0002d989) ai5_sk_pane

0xe2d2,	// (0x0002d996) cell_ai5_widget_pane_ParamLimits

0xe2d2,	// (0x0002d996) cell_ai5_widget_pane

0xe86e,	// (0x0002df32) aid_size_cell_widget_grid

0xe87c,	// (0x0002df40) bg_ai5_widget_pane_ParamLimits

0xe87c,	// (0x0002df40) bg_ai5_widget_pane

0xe8f0,	// (0x0002dfb4) cell_ai5_widget_pane_g2

0xe900,	// (0x0002dfc4) cell_ai5_widget_pane_g3

0xe917,	// (0x0002dfdb) cell_ai5_widget_pane_g4

0xe923,	// (0x0002dfe7) cell_ai5_widget_pane_g5

0xe92f,	// (0x0002dff3) cell_ai5_widget_pane_g6

0xe93b,	// (0x0002dfff) cell_ai5_widget_pane_g7

0xe983,	// (0x0002e047) cell_ai5_widget_pane_t1_ParamLimits

0xe983,	// (0x0002e047) cell_ai5_widget_pane_t1

0xe9a0,	// (0x0002e064) cell_ai5_widget_pane_t2_ParamLimits

0xe9a0,	// (0x0002e064) cell_ai5_widget_pane_t2

0xe9b8,	// (0x0002e07c) cell_ai5_widget_pane_t3_ParamLimits

0xe9b8,	// (0x0002e07c) cell_ai5_widget_pane_t3

0xe9d0,	// (0x0002e094) cell_ai5_widget_pane_t4_ParamLimits

0xe9d0,	// (0x0002e094) cell_ai5_widget_pane_t4

0xe9ed,	// (0x0002e0b1) cell_ai5_widget_pane_t5_ParamLimits

0xe9ed,	// (0x0002e0b1) cell_ai5_widget_pane_t5

0xea0c,	// (0x0002e0d0) cell_ai5_widget_pane_t6_ParamLimits

0xea0c,	// (0x0002e0d0) cell_ai5_widget_pane_t6

0xea1e,	// (0x0002e0e2) cell_ai5_widget_pane_t7_ParamLimits

0xea1e,	// (0x0002e0e2) cell_ai5_widget_pane_t7

0xea37,	// (0x0002e0fb) cell_ai5_widget_pane_t8_ParamLimits

0xea37,	// (0x0002e0fb) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x0002f500) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x0002f500) cell_ai5_widget_pane_t

0xea8b,	// (0x0002e14f) grid_ai5_widget_pane

0x2cbb,	// (0x0002237f) highlight_cell_ai5_widget_pane_ParamLimits

0x2cbb,	// (0x0002237f) highlight_cell_ai5_widget_pane

0xea99,	// (0x0002e15d) ai5_sk_left_pane

0xeaa3,	// (0x0002e167) ai5_sk_middle_pane

0xeaad,	// (0x0002e171) ai5_sk_right_pane

0xeab7,	// (0x0002e17b) bg_ai5_widget_pane_g1_ParamLimits

0xeab7,	// (0x0002e17b) bg_ai5_widget_pane_g1

0xeac3,	// (0x0002e187) bg_ai5_widget_pane_g2_ParamLimits

0xeac3,	// (0x0002e187) bg_ai5_widget_pane_g2

0xeacf,	// (0x0002e193) bg_ai5_widget_pane_g3_ParamLimits

0xeacf,	// (0x0002e193) bg_ai5_widget_pane_g3

0xeadb,	// (0x0002e19f) bg_ai5_widget_pane_g4_ParamLimits

0xeadb,	// (0x0002e19f) bg_ai5_widget_pane_g4

0xeae7,	// (0x0002e1ab) bg_ai5_widget_pane_g5_ParamLimits

0xeae7,	// (0x0002e1ab) bg_ai5_widget_pane_g5

0xeaf3,	// (0x0002e1b7) bg_ai5_widget_pane_g6_ParamLimits

0xeaf3,	// (0x0002e1b7) bg_ai5_widget_pane_g6

0xeaff,	// (0x0002e1c3) bg_ai5_widget_pane_g7_ParamLimits

0xeaff,	// (0x0002e1c3) bg_ai5_widget_pane_g7

0xeb0b,	// (0x0002e1cf) bg_ai5_widget_pane_g8_ParamLimits

0xeb0b,	// (0x0002e1cf) bg_ai5_widget_pane_g8

0xeb17,	// (0x0002e1db) bg_ai5_widget_pane_g9_ParamLimits

0xeb17,	// (0x0002e1db) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x0002f515) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002f515) bg_ai5_widget_pane_g

0xeb4f,	// (0x0002e213) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb4f,	// (0x0002e213) cell_shortcut_ai5_widget_pane

0x382b,	// (0x00022eef) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x0002e226) cell_grid_ai5_widget_pane_g1

0x382b,	// (0x00022eef) highlight_cell_shortcut_ai5_widget_pane

0x837e,	// (0x00027a42) ai5_sk_left_pane_g1

0xeb6b,	// (0x0002e22f) ai5_sk_left_pane_g2

0xeb73,	// (0x0002e237) ai5_sk_left_pane_g3

0xeb7b,	// (0x0002e23f) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x0002f528) ai5_sk_left_pane_g

0xeb83,	// (0x0002e247) ai5_sk_left_pane_t1

0x8376,	// (0x00027a3a) ai5_sk_right_pane_g1

0xeb91,	// (0x0002e255) ai5_sk_right_pane_g2

0xeb99,	// (0x0002e25d) ai5_sk_right_pane_g3

0xeba1,	// (0x0002e265) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x0002f531) ai5_sk_right_pane_g

0xeba9,	// (0x0002e26d) ai5_sk_right_pane_t1

0x8376,	// (0x00027a3a) ai5_sk_middle_pane_g1

0x837e,	// (0x00027a42) ai5_sk_middle_pane_g2

0x8396,	// (0x00027a5a) ai5_sk_middle_pane_g3

0xeb99,	// (0x0002e25d) ai5_sk_middle_pane_g4

0xeb73,	// (0x0002e237) ai5_sk_middle_pane_g5

0xebb7,	// (0x0002e27b) ai5_sk_middle_pane_g6

0xebbf,	// (0x0002e283) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x0002f53a) ai5_sk_middle_pane_g

0x7e58,	// (0x0002751c) aid_touch_area_size_lc0_ParamLimits

0x7e58,	// (0x0002751c) aid_touch_area_size_lc0

0x8e0d,	// (0x000284d1) cell_hwr_candidate_pane_t1_ParamLimits

0x7e76,	// (0x0002753a) aid_touch_navi_pane

0x8169,	// (0x0002782d) status_dt_navi_pane_ParamLimits

0x8169,	// (0x0002782d) status_dt_navi_pane

0x8176,	// (0x0002783a) status_dt_sta_pane_ParamLimits

0x8176,	// (0x0002783a) status_dt_sta_pane

0xebc7,	// (0x0002e28b) dt_sta_controll_pane

0xebd4,	// (0x0002e298) dt_sta_indi_pane

0xebe5,	// (0x0002e2a9) dt_sta_title_pane

0x0e01,	// (0x000204c5) bg_dt_sta_indi_pane_ParamLimits

0x0e01,	// (0x000204c5) bg_dt_sta_indi_pane

0xebf8,	// (0x0002e2bc) dt_sta_battery_pane

0xec00,	// (0x0002e2c4) dt_sta_indi_pane_g1

0xec09,	// (0x0002e2cd) dt_sta_indi_pane_g2

0xec12,	// (0x0002e2d6) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x0002f549) dt_sta_indi_pane_g

0xec1b,	// (0x0002e2df) dt_sta_signal_pane

0x2cbb,	// (0x0002237f) bg_dt_sta_title_pane_ParamLimits

0x2cbb,	// (0x0002237f) bg_dt_sta_title_pane

0xec24,	// (0x0002e2e8) dt_sta_title_pane_g1

0xec2c,	// (0x0002e2f0) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x0002e2f0) dt_sta_title_pane_t1

0x0c38,	// (0x000202fc) bg_dt_sta_control_pane

0xec41,	// (0x0002e305) dt_sta_controll_pane_g1

0xec4a,	// (0x0002e30e) bg_dt_sta_title_pane_g1

0xec53,	// (0x0002e317) bg_dt_sta_title_pane_g2

0xec5c,	// (0x0002e320) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x0002f550) bg_dt_sta_title_pane_g

0xbd23,	// (0x0002b3e7) bg_dt_sta_indi_pane_g1

0xec65,	// (0x0002e329) dt_sta_signal_pane_g1

0xec6d,	// (0x0002e331) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x0002f557) dt_sta_signal_pane_g

0xec75,	// (0x0002e339) dt_sta_battery_pane_g1

0xec7e,	// (0x0002e342) dt_sta_battery_pane_t1

0xbd23,	// (0x0002b3e7) bg_dt_sta_control_pane_g1

0x344a,	// (0x00022b0e) fep_china_uni_eep_pane

0x3452,	// (0x00022b16) fep_china_uni_entry_pane_ParamLimits

0x3462,	// (0x00022b26) popup_fep_china_uni_window_g1_ParamLimits

0x3472,	// (0x00022b36) popup_fep_china_uni_window_g2_ParamLimits

0x3472,	// (0x00022b36) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0002eddc) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0002eddc) popup_fep_china_uni_window_g

0xec8d,	// (0x0002e351) fep_china_uni_eep_pane_g1

0xec95,	// (0x0002e359) fep_china_uni_eep_pane_t1

0xe234,	// (0x0002d8f8) aid_touch_area_size_smil_player

0x7fce,	// (0x00027692) lc0_clock_pane

0x81cd,	// (0x00027891) status_pane_g5_ParamLimits

0x81cd,	// (0x00027891) status_pane_g5

0x79bc,	// (0x00027080) popup_keymap_window

0x818b,	// (0x0002784f) status_icon_pane

0xe900,	// (0x0002dfc4) cell_ai5_widget_pane_g3_ParamLimits

0xe917,	// (0x0002dfdb) cell_ai5_widget_pane_g4_ParamLimits

0xe923,	// (0x0002dfe7) cell_ai5_widget_pane_g5_ParamLimits

0xe947,	// (0x0002e00b) cell_ai5_widget_pane_g8_ParamLimits

0xe947,	// (0x0002e00b) cell_ai5_widget_pane_g8

0xe95b,	// (0x0002e01f) cell_ai5_widget_pane_g9_ParamLimits

0xe95b,	// (0x0002e01f) cell_ai5_widget_pane_g9

0xe96f,	// (0x0002e033) cell_ai5_widget_pane_g10_ParamLimits

0xe96f,	// (0x0002e033) cell_ai5_widget_pane_g10

0xeca4,	// (0x0002e368) status_icon_pane_g1

0x0c38,	// (0x000202fc) bg_popup_sub_pane_cp13

0xecac,	// (0x0002e370) popup_keymap_window_t1

0x7671,	// (0x00026d35) control_pane_g6_ParamLimits

0x7671,	// (0x00026d35) control_pane_g6

0x767e,	// (0x00026d42) control_pane_g7_ParamLimits

0x767e,	// (0x00026d42) control_pane_g7

0x768b,	// (0x00026d4f) control_pane_g8_ParamLimits

0x768b,	// (0x00026d4f) control_pane_g8

0xebc7,	// (0x0002e28b) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x0002e298) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x0002e2a9) dt_sta_title_pane_ParamLimits

0x1225,	// (0x000208e9) aid_size_touch_scroll_bar_cale

0x667c,	// (0x00025d40) popup_discreet_window_ParamLimits

0x667c,	// (0x00025d40) popup_discreet_window

0x670a,	// (0x00025dce) popup_sk_window

0x9d2f,	// (0x000293f3) bg_popup_sub_pane_cp28_ParamLimits

0x9d2f,	// (0x000293f3) bg_popup_sub_pane_cp28

0xecba,	// (0x0002e37e) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x0002e37e) popup_discreet_window_g1

0xecda,	// (0x0002e39e) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x0002e39e) popup_discreet_window_t1

0xecf8,	// (0x0002e3bc) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x0002e3bc) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x0002f55c) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x0002f55c) popup_discreet_window_t

0x977f,	// (0x00028e43) popup_sk_window_g1

0x9789,	// (0x00028e4d) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x0002f563) popup_sk_window_g

0x9793,	// (0x00028e57) popup_sk_window_t1

0x97a3,	// (0x00028e67) popup_sk_window_t1_copy1

0xe8f0,	// (0x0002dfb4) cell_ai5_widget_pane_g2_ParamLimits

0xea49,	// (0x0002e10d) cell_ai5_widget_pane_t9_ParamLimits

0xea49,	// (0x0002e10d) cell_ai5_widget_pane_t9

0x0c38,	// (0x000202fc) main_fep_fshwr2_pane

0x97b1,	// (0x00028e75) aid_fshwr2_btn_pane

0x97bd,	// (0x00028e81) aid_fshwr2_syb_pane

0x97c9,	// (0x00028e8d) aid_fshwr2_txt_pane

0x97d5,	// (0x00028e99) fshwr2_func_candi_pane

0x97e8,	// (0x00028eac) fshwr2_hwr_syb_pane

0x97f6,	// (0x00028eba) fshwr2_icf_pane

0x0c38,	// (0x000202fc) fshwr2_icf_bg_pane

0x9825,	// (0x00028ee9) fshwr2_icf_pane_t1_ParamLimits

0x9825,	// (0x00028ee9) fshwr2_icf_pane_t1

0x33c8,	// (0x00022a8c) fshwr2_func_candi_pane_g1

0xed4a,	// (0x0002e40e) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x0002e40e) fshwr2_func_candi_row_pane

0x983d,	// (0x00028f01) cell_fshwr2_syb_pane_ParamLimits

0x983d,	// (0x00028f01) cell_fshwr2_syb_pane

0xbf9e,	// (0x0002b662) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) fshwr2_hwr_syb_pane_g1

0x0c38,	// (0x000202fc) bg_popup_call_pane_cp01

0x9853,	// (0x00028f17) fshwr2_func_candi_cell_pane_ParamLimits

0x9853,	// (0x00028f17) fshwr2_func_candi_cell_pane

0xed5a,	// (0x0002e41e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed5a,	// (0x0002e41e) fshwr2_func_candi_cell_bg_pane

0x989d,	// (0x00028f61) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x989d,	// (0x00028f61) fshwr2_func_candi_cell_pane_g1

0x98bd,	// (0x00028f81) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x98bd,	// (0x00028f81) fshwr2_func_candi_cell_pane_t1

0x0c38,	// (0x000202fc) bg_button_pane_cp08

0xed66,	// (0x0002e42a) cell_fshwr2_syb_bg_pane

0x98d0,	// (0x00028f94) cell_fshwr2_syb_bg_pane_g1

0x98d8,	// (0x00028f9c) cell_fshwr2_syb_bg_pane_t1

0x2cbb,	// (0x0002237f) main_tmo_pane

0xa853,	// (0x00029f17) uni_indicator_pane_g1_ParamLimits

0xa869,	// (0x00029f2d) uni_indicator_pane_g2_ParamLimits

0xa87f,	// (0x00029f43) uni_indicator_pane_g3_ParamLimits

0xa894,	// (0x00029f58) uni_indicator_pane_g4_ParamLimits

0xa894,	// (0x00029f58) uni_indicator_pane_g4

0xa8a8,	// (0x00029f6c) uni_indicator_pane_g5_ParamLimits

0xa8a8,	// (0x00029f6c) uni_indicator_pane_g5

0xa8a8,	// (0x00029f6c) uni_indicator_pane_g6_ParamLimits

0xa8a8,	// (0x00029f6c) uni_indicator_pane_g6

0xf91c,	// (0x0002efe0) uni_indicator_pane_g_ParamLimits

0xd232,	// (0x0002c8f6) popup_tmo_note_window_ParamLimits

0xd232,	// (0x0002c8f6) popup_tmo_note_window

0x2cbb,	// (0x0002237f) fshwr2_bg_pane

0x98ae,	// (0x00028f72) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x98ae,	// (0x00028f72) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x0002f568) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x0002f568) fshwr2_func_candi_cell_pane_g

0xbd23,	// (0x0002b3e7) bg_popup_window_pane_cp01

0x98e7,	// (0x00028fab) bg_popup_window_pane_g1_cp01

0xed6e,	// (0x0002e432) bg_popup_window_pane_cp22_ParamLimits

0xed6e,	// (0x0002e432) bg_popup_window_pane_cp22

0xed7c,	// (0x0002e440) listscroll_tmo_link_pane_ParamLimits

0xed7c,	// (0x0002e440) listscroll_tmo_link_pane

0xedbc,	// (0x0002e480) popup_tmo_note_window_g1_ParamLimits

0xedbc,	// (0x0002e480) popup_tmo_note_window_g1

0xedc9,	// (0x0002e48d) tmo_note_info_pane_ParamLimits

0xedc9,	// (0x0002e48d) tmo_note_info_pane

0xede3,	// (0x0002e4a7) list_tmo_note_info_pane_g1_ParamLimits

0xede3,	// (0x0002e4a7) list_tmo_note_info_pane_g1

0xedfa,	// (0x0002e4be) list_tmo_note_info_pane_g2_ParamLimits

0xedfa,	// (0x0002e4be) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x0002f56d) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x0002f56d) list_tmo_note_info_pane_g

0xee16,	// (0x0002e4da) list_tmo_note_info_text_pane_ParamLimits

0xee16,	// (0x0002e4da) list_tmo_note_info_text_pane

0xee9b,	// (0x0002e55f) list_tmo_link_pane

0xeea8,	// (0x0002e56c) scroll_pane_cp20

0xeeb5,	// (0x0002e579) list_single_tmo_link_pane_ParamLimits

0xeeb5,	// (0x0002e579) list_single_tmo_link_pane

0xeec5,	// (0x0002e589) list_single_tmo_link_pane_t1

0xeed3,	// (0x0002e597) list_tmo_note_info_text_pane_t1_ParamLimits

0xeed3,	// (0x0002e597) list_tmo_note_info_text_pane_t1

0x6b85,	// (0x00026249) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b85,	// (0x00026249) aid_size_touch_scroll_bar_cp01

0x58ae,	// (0x00024f72) aid_size_touch_slider_marker

0x66f2,	// (0x00025db6) popup_settings_window_ParamLimits

0x66f2,	// (0x00025db6) popup_settings_window

0x5a59,	// (0x0002511d) popup_candi_list_indi_window

0x7e76,	// (0x0002753a) aid_touch_navi_pane_ParamLimits

0x8f7e,	// (0x00028642) rs_clock_indi_pane

0x8f87,	// (0x0002864b) sctrl_sk_bottom_pane_ParamLimits

0x8f98,	// (0x0002865c) sctrl_sk_top_pane_ParamLimits

0x9081,	// (0x00028745) popup_fep_tooltip_window

0xe86e,	// (0x0002df32) aid_size_cell_widget_grid_ParamLimits

0xe8db,	// (0x0002df9f) cell_ai5_widget_pane_g1_ParamLimits

0xe8db,	// (0x0002df9f) cell_ai5_widget_pane_g1

0xe92f,	// (0x0002dff3) cell_ai5_widget_pane_g6_ParamLimits

0xe93b,	// (0x0002dfff) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x0002f4eb) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x0002f4eb) cell_ai5_widget_pane_g

0xea6d,	// (0x0002e131) cell_ai5_widget_pane_t10_ParamLimits

0xea6d,	// (0x0002e131) cell_ai5_widget_pane_t10

0xea8b,	// (0x0002e14f) grid_ai5_widget_pane_ParamLimits

0xeb23,	// (0x0002e1e7) cell_contacts_ai5_widget_pane_ParamLimits

0xeb23,	// (0x0002e1e7) cell_contacts_ai5_widget_pane

0xed0d,	// (0x0002e3d1) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x0002e3d1) popup_discreet_window_t3

0x980d,	// (0x00028ed1) popup_fshwr2_char_preview_window_ParamLimits

0x980d,	// (0x00028ed1) popup_fshwr2_char_preview_window

0xee34,	// (0x0002e4f8) tmo_note_info_pane_t1

0xee49,	// (0x0002e50d) tmo_note_info_pane_t2

0xee62,	// (0x0002e526) tmo_note_info_pane_t3

0xee77,	// (0x0002e53b) tmo_note_info_pane_t4

0xee89,	// (0x0002e54d) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x0002f572) tmo_note_info_pane_t

0xee9b,	// (0x0002e55f) list_tmo_link_pane_ParamLimits

0xeea8,	// (0x0002e56c) scroll_pane_cp20_ParamLimits

0x0c38,	// (0x000202fc) bg_popup_fep_char_preview_window_cp01

0xeeec,	// (0x0002e5b0) popup_fshwr2_char_preview_window_t1

0xeefa,	// (0x0002e5be) popup_candi_list_indi_window_g1

0xef03,	// (0x0002e5c7) bg_cell_contacts_ai5_widget_pane

0xef0f,	// (0x0002e5d3) cell_contacts_ai5_widget_pane_g1

0xef24,	// (0x0002e5e8) cell_contacts_ai5_widget_pane_g2

0xef30,	// (0x0002e5f4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x0002f57d) cell_contacts_ai5_widget_pane_g

0xef3c,	// (0x0002e600) cell_contacts_ai5_widget_pane_t1

0x2cbb,	// (0x0002237f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb3,	// (0x0002e677) settings_container_pane

0x382b,	// (0x00022eef) listscroll_set_pane_copy1

0xb444,	// (0x0002ab08) scroll_pane_cp121_copy1

0xefbf,	// (0x0002e683) set_content_pane_copy1

0xefc7,	// (0x0002e68b) aid_height_set_list_copy1_ParamLimits

0xefc7,	// (0x0002e68b) aid_height_set_list_copy1

0xaaa8,	// (0x0002a16c) aid_size_parent_copy1_ParamLimits

0xaaa8,	// (0x0002a16c) aid_size_parent_copy1

0xefd3,	// (0x0002e697) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd3,	// (0x0002e697) button_value_adjust_pane_cp6_copy1

0x77fd,	// (0x00026ec1) list_highlight_pane_cp2_copy1_ParamLimits

0x77fd,	// (0x00026ec1) list_highlight_pane_cp2_copy1

0xefe7,	// (0x0002e6ab) list_set_pane_copy1_ParamLimits

0xefe7,	// (0x0002e6ab) list_set_pane_copy1

0xef4e,	// (0x0002e612) main_pane_set_t1_copy1_ParamLimits

0xef4e,	// (0x0002e612) main_pane_set_t1_copy1

0xef88,	// (0x0002e64c) main_pane_set_t2_copy1_ParamLimits

0xef88,	// (0x0002e64c) main_pane_set_t2_copy1

0xf0ae,	// (0x0002e772) main_pane_set_t3_copy1

0xf0bc,	// (0x0002e780) main_pane_set_t4_copy1

0xefa7,	// (0x0002e66b) set_content_pane_g1_copy1_ParamLimits

0xefa7,	// (0x0002e66b) set_content_pane_g1_copy1

0xf0ca,	// (0x0002e78e) setting_code_pane_copy1

0xf0d2,	// (0x0002e796) setting_slider_graphic_pane_copy1

0xf0d2,	// (0x0002e796) setting_slider_pane_copy1

0xf0d2,	// (0x0002e796) setting_text_pane_copy1

0xf0d2,	// (0x0002e796) setting_volume_pane_copy1

0xf0ca,	// (0x0002e78e) settings_code_pane_cp2_copy1

0xf0da,	// (0x0002e79e) settings_code_pane_cp_copy1_ParamLimits

0xf0da,	// (0x0002e79e) settings_code_pane_cp_copy1

0x98f0,	// (0x00028fb4) volume_set_pane_copy1

0xf0ee,	// (0x0002e7b2) volume_set_pane_g10_copy1

0xf0fa,	// (0x0002e7be) volume_set_pane_g1_copy1

0xf104,	// (0x0002e7c8) volume_set_pane_g2_copy1

0xf10e,	// (0x0002e7d2) volume_set_pane_g3_copy1

0xf118,	// (0x0002e7dc) volume_set_pane_g4_copy1

0xf122,	// (0x0002e7e6) volume_set_pane_g5_copy1

0xf12c,	// (0x0002e7f0) volume_set_pane_g6_copy1

0xf136,	// (0x0002e7fa) volume_set_pane_g7_copy1

0xf140,	// (0x0002e804) volume_set_pane_g8_copy1

0xf14a,	// (0x0002e80e) volume_set_pane_g9_copy1

0x0cb4,	// (0x00020378) bg_set_opt_pane_cp_copy1_ParamLimits

0x0cb4,	// (0x00020378) bg_set_opt_pane_cp_copy1

0x98fc,	// (0x00028fc0) setting_slider_pane_t1_copy1_ParamLimits

0x98fc,	// (0x00028fc0) setting_slider_pane_t1_copy1

0x991a,	// (0x00028fde) setting_slider_pane_t2_copy1_ParamLimits

0x991a,	// (0x00028fde) setting_slider_pane_t2_copy1

0x9934,	// (0x00028ff8) setting_slider_pane_t3_copy1_ParamLimits

0x9934,	// (0x00028ff8) setting_slider_pane_t3_copy1

0x994c,	// (0x00029010) slider_set_pane_copy1_ParamLimits

0x994c,	// (0x00029010) slider_set_pane_copy1

0x2d84,	// (0x00022448) set_opt_bg_pane_g1_copy2

0x2d8c,	// (0x00022450) set_opt_bg_pane_g2_copy2

0xf154,	// (0x0002e818) set_opt_bg_pane_g3_copy2

0x2d9c,	// (0x00022460) set_opt_bg_pane_g4_copy2

0x2da4,	// (0x00022468) set_opt_bg_pane_g5_copy2

0x2dac,	// (0x00022470) set_opt_bg_pane_g6_copy2

0xf15e,	// (0x0002e822) set_opt_bg_pane_g7_copy2

0xf168,	// (0x0002e82c) set_opt_bg_pane_g8_copy2

0xf172,	// (0x0002e836) set_opt_bg_pane_g9_copy2

0x9962,	// (0x00029026) aid_size_touch_slider_mark_copy1_ParamLimits

0x9962,	// (0x00029026) aid_size_touch_slider_mark_copy1

0xf17c,	// (0x0002e840) slider_set_pane_g1_copy1

0x9976,	// (0x0002903a) slider_set_pane_g2_copy1

0x8a53,	// (0x00028117) slider_set_pane_g3_copy1_ParamLimits

0x8a53,	// (0x00028117) slider_set_pane_g3_copy1

0x8a67,	// (0x0002812b) slider_set_pane_g4_copy1_ParamLimits

0x8a67,	// (0x0002812b) slider_set_pane_g4_copy1

0x8a7f,	// (0x00028143) slider_set_pane_g5_copy1_ParamLimits

0x8a7f,	// (0x00028143) slider_set_pane_g5_copy1

0x8a53,	// (0x00028117) slider_set_pane_g6_copy1_ParamLimits

0x8a53,	// (0x00028117) slider_set_pane_g6_copy1

0x997e,	// (0x00029042) slider_set_pane_g7_copy1_ParamLimits

0x997e,	// (0x00029042) slider_set_pane_g7_copy1

0x0c4c,	// (0x00020310) bg_set_opt_pane_cp2_copy1

0xf185,	// (0x0002e849) setting_slider_graphic_pane_g1_copy1

0xf18e,	// (0x0002e852) setting_slider_graphic_pane_t1_copy1

0xf19e,	// (0x0002e862) setting_slider_graphic_pane_t2_copy1

0xf1ae,	// (0x0002e872) slider_set_pane_cp_copy1

0xf1be,	// (0x0002e882) input_focus_pane_cp1_copy1

0xf1c7,	// (0x0002e88b) list_set_text_pane_copy1

0xf1cf,	// (0x0002e893) setting_text_pane_g1_copy1

0x63d3,	// (0x00025a97) set_text_pane_t1_copy1

0xf1be,	// (0x0002e882) input_focus_pane_cp2_copy1

0xf1cf,	// (0x0002e893) setting_code_pane_g1_copy1

0xf1d8,	// (0x0002e89c) setting_code_pane_t1_copy1

0xf1e6,	// (0x0002e8aa) list_set_graphic_pane_copy1

0x0c4c,	// (0x00020310) bg_set_opt_pane_cp4_copy1

0x71d5,	// (0x00026899) list_set_graphic_pane_g1_copy1_ParamLimits

0x71d5,	// (0x00026899) list_set_graphic_pane_g1_copy1

0xf1f8,	// (0x0002e8bc) list_set_graphic_pane_g2_copy1

0x71ed,	// (0x000268b1) list_set_graphic_pane_t1_copy1_ParamLimits

0x71ed,	// (0x000268b1) list_set_graphic_pane_t1_copy1

0xbd23,	// (0x0002b3e7) rs_clock_indi_pane_g1

0xf200,	// (0x0002e8c4) rs_clock_indi_pane_t1

0xf20e,	// (0x0002e8d2) rs_indi_pane

0xf216,	// (0x0002e8da) rs_indi_pane_g1

0xf21f,	// (0x0002e8e3) rs_indi_pane_g2

0xf228,	// (0x0002e8ec) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x0002f584) rs_indi_pane_g

0x382b,	// (0x00022eef) bg_popup_preview_window_pane_cp03

0xf231,	// (0x0002e8f5) popup_fep_tooltip_window_t1

0xc9da,	// (0x0002c09e) popup_note2_window_g2_ParamLimits

0xc9da,	// (0x0002c09e) popup_note2_window_g2

0x0001,

0xfc59,	// (0x0002f31d) popup_note2_window_g_ParamLimits

0xfc59,	// (0x0002f31d) popup_note2_window_g

0xcee2,	// (0x0002c5a6) bg_popup_sub_pane_cp11_ParamLimits

0xceef,	// (0x0002c5b3) cell_ai3_links_pane_g1_ParamLimits

0xcf06,	// (0x0002c5ca) cell_ai3_links_pane_t1

0x63d3,	// (0x00025a97) set_text_pane_t1_copy1_ParamLimits

0x726c,	// (0x00026930) cell_graphic_popup_pane_cp2_ParamLimits

0x726c,	// (0x00026930) cell_graphic_popup_pane_cp2

0xf23f,	// (0x0002e903) cell_graphic_popup_pane_g1_cp2

0x1038,	// (0x000206fc) cell_graphic_popup_pane_g2_cp2

0xf247,	// (0x0002e90b) cell_graphic_popup_pane_g3_cp2

0xf24f,	// (0x0002e913) cell_graphic_popup_pane_t2_cp2

0x1049,	// (0x0002070d) grid_highlight_pane_cp3_cp2

0x31ea,	// (0x000228ae) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2cbb,	// (0x0002237f) main_tmo_pane_ParamLimits

0xd226,	// (0x0002c8ea) popup_tmo_big_image_note_window

0xe8ca,	// (0x0002df8e) cell_ai5_widget_list_pane

0xe8d2,	// (0x0002df96) cell_ai5_widget_lrg_icon_pane

0xee34,	// (0x0002e4f8) tmo_note_info_pane_t1_ParamLimits

0xee49,	// (0x0002e50d) tmo_note_info_pane_t2_ParamLimits

0xee62,	// (0x0002e526) tmo_note_info_pane_t3_ParamLimits

0xee77,	// (0x0002e53b) tmo_note_info_pane_t4_ParamLimits

0xee89,	// (0x0002e54d) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x0002f572) tmo_note_info_pane_t_ParamLimits

0xefb3,	// (0x0002e677) settings_container_pane_ParamLimits

0xf1b6,	// (0x0002e87a) indicator_popup_pane_cp5

0xf1b6,	// (0x0002e87a) indicator_popup_pane_cp6

0xf1e6,	// (0x0002e8aa) list_set_graphic_pane_copy1_ParamLimits

0x0c38,	// (0x000202fc) bg_popup_window_pane_cp23

0xf25d,	// (0x0002e921) popup_tmo_big_image_note_window_g1

0xf269,	// (0x0002e92d) popup_tmo_big_image_note_window_t1

0xf279,	// (0x0002e93d) popup_tmo_big_image_note_window_t2

0xf289,	// (0x0002e94d) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x0002f58b) popup_tmo_big_image_note_window_t

0xbd23,	// (0x0002b3e7) cell_ai5_widget_lrg_icon_pane_g1

0xf299,	// (0x0002e95d) cell_ai5_widget_lrg_icon_pane_t1

0xf2a7,	// (0x0002e96b) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a7,	// (0x0002e96b) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x0002e983) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x0002e983) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x0002e990) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x0002e990) cell_ai5_widget_list_row_pane_t1

0xf2f7,	// (0x0002e9bb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2f7,	// (0x0002e9bb) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x0002f592) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x0002f592) cell_ai5_widget_list_row_pane_t

0x0c38,	// (0x000202fc) main_fep_vtchi_ss_pane

0xf33b,	// (0x0002e9ff) popup_fep_char_pre_window

0xf343,	// (0x0002ea07) popup_fep_ituss_window

0xf364,	// (0x0002ea28) popup_fep_vkbss_window

0xf385,	// (0x0002ea49) grid_vkbss_keypad_pane_ParamLimits

0xf385,	// (0x0002ea49) grid_vkbss_keypad_pane

0xf395,	// (0x0002ea59) ituss_keypad_pane

0x99a0,	// (0x00029064) aid_vkbss_key_offset_ParamLimits

0x99a0,	// (0x00029064) aid_vkbss_key_offset

0x99ac,	// (0x00029070) cell_vkbss_key_pane_ParamLimits

0x99ac,	// (0x00029070) cell_vkbss_key_pane

0xf3a4,	// (0x0002ea68) bg_cell_vkbss_key_g1_ParamLimits

0xf3a4,	// (0x0002ea68) bg_cell_vkbss_key_g1

0xf3b0,	// (0x0002ea74) cell_vkbss_key_3p_pane_ParamLimits

0xf3b0,	// (0x0002ea74) cell_vkbss_key_3p_pane

0xf3ca,	// (0x0002ea8e) cell_vkbss_key_g1_ParamLimits

0xf3ca,	// (0x0002ea8e) cell_vkbss_key_g1

0xf3e4,	// (0x0002eaa8) cell_vkbss_key_t1_ParamLimits

0xf3e4,	// (0x0002eaa8) cell_vkbss_key_t1

0x99c2,	// (0x00029086) cell_ituss_key_pane_ParamLimits

0x99c2,	// (0x00029086) cell_ituss_key_pane

0xf40f,	// (0x0002ead3) bg_cell_ituss_key_g1_ParamLimits

0xf40f,	// (0x0002ead3) bg_cell_ituss_key_g1

0xf41b,	// (0x0002eadf) cell_ituss_key_pane_g1_ParamLimits

0xf41b,	// (0x0002eadf) cell_ituss_key_pane_g1

0x99d3,	// (0x00029097) cell_ituss_key_pane_g2_ParamLimits

0x99d3,	// (0x00029097) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x0002f599) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x0002f599) cell_ituss_key_pane_g

0x99ff,	// (0x000290c3) cell_ituss_key_t1_ParamLimits

0x99ff,	// (0x000290c3) cell_ituss_key_t1

0x9a39,	// (0x000290fd) cell_ituss_key_t2_ParamLimits

0x9a39,	// (0x000290fd) cell_ituss_key_t2

0x9a6a,	// (0x0002912e) cell_ituss_key_t3_ParamLimits

0x9a6a,	// (0x0002912e) cell_ituss_key_t3

0x9a39,	// (0x000290fd) cell_ituss_key_t4_ParamLimits

0x9a39,	// (0x000290fd) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0002f5a0) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0002f5a0) cell_ituss_key_t

0xf441,	// (0x0002eb05) cell_vkbss_key_3p_pane_g1

0xf449,	// (0x0002eb0d) cell_vkbss_key_3p_pane_g2

0xf451,	// (0x0002eb15) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002f5ab) cell_vkbss_key_3p_pane_g

0x0c38,	// (0x000202fc) bg_popup_fep_char_preview_window_cp02

0x9aad,	// (0x00029171) popup_fep_char_pre_window_t1

0xe864,	// (0x0002df28) main_ai5_sk_pane

0xef03,	// (0x0002e5c7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef0f,	// (0x0002e5d3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef24,	// (0x0002e5e8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef30,	// (0x0002e5f4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x0002f57d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef3c,	// (0x0002e600) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2cbb,	// (0x0002237f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf459,	// (0x0002eb1d) main_ai5_sk_pane_g1

0x9b67,	// (0x0002922b) popup_query_code_window_g1

0xf359,	// (0x0002ea1d) popup_fep_vkb_icf_pane

0xf36f,	// (0x0002ea33) popup_fep_vtchi_icf_pane

0xf462,	// (0x0002eb26) bg_icf_pane

0xf46e,	// (0x0002eb32) list_vkb_icf_pane

0xf47a,	// (0x0002eb3e) bg_icf_pane_cp01

0xf48d,	// (0x0002eb51) vtchi_icf_list_pane

0xf49e,	// (0x0002eb62) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x0002eb62) list_vkb_icf_pane_t1

0xf4b4,	// (0x0002eb78) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0002eb78) vtchi_icf_list_pane_t1

0xf343,	// (0x0002ea07) popup_fep_ituss_window_ParamLimits

0xf36f,	// (0x0002ea33) popup_fep_vtchi_icf_pane_ParamLimits

0xf395,	// (0x0002ea59) ituss_keypad_pane_ParamLimits

0x9994,	// (0x00029058) ituss_sks_pane

0xf462,	// (0x0002eb26) bg_icf_pane_ParamLimits

0xf31f,	// (0x0002e9e3) icf_edit_indi_pane_ParamLimits

0xf31f,	// (0x0002e9e3) icf_edit_indi_pane

0xf46e,	// (0x0002eb32) list_vkb_icf_pane_ParamLimits

0xf47a,	// (0x0002eb3e) bg_icf_pane_cp01_ParamLimits

0xf32e,	// (0x0002e9f2) icf_edit_indi_pane_cp01_ParamLimits

0xf32e,	// (0x0002e9f2) icf_edit_indi_pane_cp01

0xf495,	// (0x0002eb59) vtchi_query_pane

0xbf9e,	// (0x0002b662) icf_edit_indi_pane_g1_ParamLimits

0xbf9e,	// (0x0002b662) icf_edit_indi_pane_g1

0xf523,	// (0x0002ebe7) icf_edit_indi_pane_g2_ParamLimits

0xf523,	// (0x0002ebe7) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002f5c3) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002f5c3) icf_edit_indi_pane_g

0xf532,	// (0x0002ebf6) icf_edit_indi_pane_t1

0xf4cc,	// (0x0002eb90) bg_input_focus_pane_cp042

0x121c,	// (0x000208e0) vtchi_button_pane

0xf4d5,	// (0x0002eb99) vtchi_query_pane_t1

0xf4e3,	// (0x0002eba7) vtchi_query_pane_t2

0xf4f1,	// (0x0002ebb5) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002f5b2) vtchi_query_pane_t

0x0c38,	// (0x000202fc) bg_button_pane_cp13

0xf4ff,	// (0x0002ebc3) vtchi_button_pane_g1

0x9abc,	// (0x00029180) ituss_sks_pane_g1

0x9ac7,	// (0x0002918b) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002f5b9) ituss_sks_pane_g

0xf507,	// (0x0002ebcb) ituss_sks_pane_t1

0xf515,	// (0x0002ebd9) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002f5be) ituss_sks_pane_t

0xb7d3,	// (0x0002ae97) indicator_nsta_pane_cp_g1

0xb7dc,	// (0x0002aea0) indicator_nsta_pane_cp_g2

0xb7e4,	// (0x0002aea8) indicator_nsta_pane_cp_g3

0xb7ec,	// (0x0002aeb0) indicator_nsta_pane_cp_g4

0xb7f4,	// (0x0002aeb8) indicator_nsta_pane_cp_g5

0xb7fc,	// (0x0002aec0) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x0002f167) indicator_nsta_pane_cp_g

0xdf2e,	// (0x0002d5f2) cell_graphic2_pane_t2_ParamLimits

0xdf2e,	// (0x0002d5f2) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x0002f474) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x0002f474) cell_graphic2_pane_t

0xdf5b,	// (0x0002d61f) cell_graphic2_control_pane_t1

0x6fab,	// (0x0002666f) signal_pane_g3_ParamLimits

0x6fab,	// (0x0002666f) signal_pane_g3

0x6fbd,	// (0x00026681) signal_pane_g4_ParamLimits

0x6fbd,	// (0x00026681) signal_pane_g4

0xf309,	// (0x0002e9cd) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf309,	// (0x0002e9cd) cell_ai5_widget_list_row_pane_t3

0xf42f,	// (0x0002eaf3) cell_ituss_key_pane_t1_ParamLimits

0xf42f,	// (0x0002eaf3) cell_ituss_key_pane_t1

0x8578,	// (0x00027c3c) form_field_data_wide_pane_vc_t2_ParamLimits

0x8578,	// (0x00027c3c) form_field_data_wide_pane_vc_t2

0x858c,	// (0x00027c50) form_field_data_wide_pane_vc_t3_ParamLimits

0x858c,	// (0x00027c50) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002eec8) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002eec8) form_field_data_wide_pane_vc_t

0xb484,	// (0x0002ab48) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb484,	// (0x0002ab48) form_field_slider_wide_pane_vc_t3

0xb55a,	// (0x0002ac1e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb55a,	// (0x0002ac1e) form_field_popup_wide_pane_vc_t2

0xb571,	// (0x0002ac35) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb571,	// (0x0002ac35) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x0002f156) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0002f156) form_field_popup_wide_pane_vc_t

0x97b1,	// (0x00028e75) aid_fshwr2_btn_pane_ParamLimits

0x97bd,	// (0x00028e81) aid_fshwr2_syb_pane_ParamLimits

0x97c9,	// (0x00028e8d) aid_fshwr2_txt_pane_ParamLimits

0x2cbb,	// (0x0002237f) fshwr2_bg_pane_ParamLimits

0x97d5,	// (0x00028e99) fshwr2_func_candi_pane_ParamLimits

0x97e8,	// (0x00028eac) fshwr2_hwr_syb_pane_ParamLimits

0x97f6,	// (0x00028eba) fshwr2_icf_pane_ParamLimits

0x5fa0,	// (0x00025664) list_double_graphic_pane_vc_g4_ParamLimits

0x5fa0,	// (0x00025664) list_double_graphic_pane_vc_g4

0x99f3,	// (0x000290b7) cell_ituss_key_pane_g3_ParamLimits

0x99f3,	// (0x000290b7) cell_ituss_key_pane_g3

0x9a9b,	// (0x0002915f) cell_ituss_key_t5_ParamLimits

0x9a9b,	// (0x0002915f) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

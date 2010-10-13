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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00024ef4 };

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
0xa2c1,	// (0x0002f1b5) Screen

0xa2cd,	// (0x0002f1c1) application_window_ParamLimits

0xa2cd,	// (0x0002f1c1) application_window

0xcc93,	// (0x00031b87) screen_g1

0xa305,	// (0x0002f1f9) area_bottom_pane_ParamLimits

0xa305,	// (0x0002f1f9) area_bottom_pane

0xf2f3,	// (0x000341e7) area_top_pane_ParamLimits

0xf2f3,	// (0x000341e7) area_top_pane

0xf387,	// (0x0003427b) main_pane_ParamLimits

0xf387,	// (0x0003427b) main_pane

0xcc9d,	// (0x00031b91) misc_graphics

0xb544,	// (0x00030438) battery_pane_ParamLimits

0xb544,	// (0x00030438) battery_pane

0x3c8f,	// (0x00028b83) bg_status_flat_pane_g8

0x3c97,	// (0x00028b8b) bg_status_flat_pane_g9

0x308d,	// (0x00027f81) context_pane_ParamLimits

0x308d,	// (0x00027f81) context_pane

0xb6bb,	// (0x000305af) navi_pane_ParamLimits

0xb6bb,	// (0x000305af) navi_pane

0xb745,	// (0x00030639) signal_pane_ParamLimits

0xb745,	// (0x00030639) signal_pane

0x0008,

0xf84f,	// (0x00034743) bg_status_flat_pane_g

0xb7d5,	// (0x000306c9) status_pane_g1_ParamLimits

0xb7d5,	// (0x000306c9) status_pane_g1

0xb7eb,	// (0x000306df) status_pane_g2_ParamLimits

0xb7eb,	// (0x000306df) status_pane_g2

0x32c6,	// (0x000281ba) status_pane_g3_ParamLimits

0x32c6,	// (0x000281ba) status_pane_g3

0x0004,

0xf77b,	// (0x0003466f) status_pane_g_ParamLimits

0xf77b,	// (0x0003466f) status_pane_g

0xb7f7,	// (0x000306eb) title_pane_ParamLimits

0xb7f7,	// (0x000306eb) title_pane

0xb860,	// (0x00030754) uni_indicator_pane_ParamLimits

0xb860,	// (0x00030754) uni_indicator_pane

0x2ef7,	// (0x00027deb) bg_list_pane_ParamLimits

0x2ef7,	// (0x00027deb) bg_list_pane

0x9fef,	// (0x0002eee3) find_pane

0x34c3,	// (0x000283b7) listscroll_app_pane_ParamLimits

0x34c3,	// (0x000283b7) listscroll_app_pane

0x2f23,	// (0x00027e17) listscroll_form_pane

0x9ff7,	// (0x0002eeeb) listscroll_gen_pane_ParamLimits

0x9ff7,	// (0x0002eeeb) listscroll_gen_pane

0x1068,	// (0x00025f5c) listscroll_set_pane

0x482c,	// (0x00029720) main_idle_act_pane

0x2bf0,	// (0x00027ae4) main_idle_trad_pane

0x2bf0,	// (0x00027ae4) main_list_empty_pane

0x2f17,	// (0x00027e0b) main_midp_pane

0x2f3d,	// (0x00027e31) main_pane_g1_ParamLimits

0x2f3d,	// (0x00027e31) main_pane_g1

0xad98,	// (0x0002fc8c) popup_ai_message_window_ParamLimits

0xad98,	// (0x0002fc8c) popup_ai_message_window

0xae38,	// (0x0002fd2c) popup_fep_china_uni_window_ParamLimits

0xae38,	// (0x0002fd2c) popup_fep_china_uni_window

0x1184,	// (0x00026078) popup_fep_japan_candidate_window_ParamLimits

0x1184,	// (0x00026078) popup_fep_japan_candidate_window

0x11ae,	// (0x000260a2) popup_fep_japan_predictive_window_ParamLimits

0x11ae,	// (0x000260a2) popup_fep_japan_predictive_window

0xae98,	// (0x0002fd8c) popup_find_window

0xaeb5,	// (0x0002fda9) popup_grid_graphic_window_ParamLimits

0xaeb5,	// (0x0002fda9) popup_grid_graphic_window

0x1221,	// (0x00026115) popup_large_graphic_colour_window

0xaf5f,	// (0x0002fe53) popup_menu_window_ParamLimits

0xaf5f,	// (0x0002fe53) popup_menu_window

0xb14f,	// (0x00030043) popup_note_image_window

0xb10f,	// (0x00030003) popup_note_wait_window_ParamLimits

0xb10f,	// (0x00030003) popup_note_wait_window

0xb167,	// (0x0003005b) popup_note_window_ParamLimits

0xb167,	// (0x0003005b) popup_note_window

0xb215,	// (0x00030109) popup_query_code_window_ParamLimits

0xb215,	// (0x00030109) popup_query_code_window

0x148d,	// (0x00026381) popup_query_data_code_window_ParamLimits

0x148d,	// (0x00026381) popup_query_data_code_window

0xb255,	// (0x00030149) popup_query_data_window_ParamLimits

0xb255,	// (0x00030149) popup_query_data_window

0xb2e9,	// (0x000301dd) popup_query_sat_info_window_ParamLimits

0xb2e9,	// (0x000301dd) popup_query_sat_info_window

0xb394,	// (0x00030288) popup_snote_single_graphic_window_ParamLimits

0xb394,	// (0x00030288) popup_snote_single_graphic_window

0xb394,	// (0x00030288) popup_snote_single_text_window_ParamLimits

0xb394,	// (0x00030288) popup_snote_single_text_window

0x1528,	// (0x0002641c) popup_sub_window_general

0x166e,	// (0x00026562) popup_window_general_ParamLimits

0x166e,	// (0x00026562) popup_window_general

0x2f4b,	// (0x00027e3f) power_save_pane

0x0f17,	// (0x00025e0b) control_pane_g1_ParamLimits

0x0f17,	// (0x00025e0b) control_pane_g1

0x0f3a,	// (0x00025e2e) control_pane_g2_ParamLimits

0x0f3a,	// (0x00025e2e) control_pane_g2

0x2eba,	// (0x00027dae) control_pane_g3_ParamLimits

0x2eba,	// (0x00027dae) control_pane_g3

0x0007,

0xf763,	// (0x00034657) control_pane_g_ParamLimits

0xf763,	// (0x00034657) control_pane_g

0xacaf,	// (0x0002fba3) control_pane_t1_ParamLimits

0xacaf,	// (0x0002fba3) control_pane_t1

0xacff,	// (0x0002fbf3) control_pane_t2_ParamLimits

0xacff,	// (0x0002fbf3) control_pane_t2

0x0002,

0xf774,	// (0x00034668) control_pane_t_ParamLimits

0xf774,	// (0x00034668) control_pane_t

0x2ddf,	// (0x00027cd3) navi_navi_volume_pane_cp1

0x2de7,	// (0x00027cdb) status_small_icon_pane

0x2def,	// (0x00027ce3) status_small_pane_g1_ParamLimits

0x2def,	// (0x00027ce3) status_small_pane_g1

0x2e23,	// (0x00027d17) status_small_pane_g2_ParamLimits

0x2e23,	// (0x00027d17) status_small_pane_g2

0x2e2f,	// (0x00027d23) status_small_pane_g3_ParamLimits

0x2e2f,	// (0x00027d23) status_small_pane_g3

0xac61,	// (0x0002fb55) status_small_pane_g4_ParamLimits

0xac61,	// (0x0002fb55) status_small_pane_g4

0xac6f,	// (0x0002fb63) status_small_pane_g5_ParamLimits

0xac6f,	// (0x0002fb63) status_small_pane_g5

0x2e55,	// (0x00027d49) status_small_pane_g6_ParamLimits

0x2e55,	// (0x00027d49) status_small_pane_g6

0x0007,

0xf752,	// (0x00034646) status_small_pane_g_ParamLimits

0xf752,	// (0x00034646) status_small_pane_g

0x2e84,	// (0x00027d78) status_small_pane_t1

0xac85,	// (0x0002fb79) status_small_wait_pane_ParamLimits

0xac85,	// (0x0002fb79) status_small_wait_pane

0xaade,	// (0x0002f9d2) aid_levels_signal_ParamLimits

0xaade,	// (0x0002f9d2) aid_levels_signal

0xaaf6,	// (0x0002f9ea) signal_pane_g1_ParamLimits

0xaaf6,	// (0x0002f9ea) signal_pane_g1

0xab11,	// (0x0002fa05) signal_pane_g2_ParamLimits

0xab11,	// (0x0002fa05) signal_pane_g2

0x0003,

0xf6e3,	// (0x000345d7) signal_pane_g_ParamLimits

0xf6e3,	// (0x000345d7) signal_pane_g

0x0818,	// (0x0002570c) context_pane_g1

0xa4f1,	// (0x0002f3e5) title_pane_g1

0xa534,	// (0x0002f428) title_pane_t1

0xccb3,	// (0x00031ba7) title_pane_t2

0xccd9,	// (0x00031bcd) title_pane_t3

0x0002,

0xf532,	// (0x00034426) title_pane_t

0xb888,	// (0x0003077c) aid_levels_battery_ParamLimits

0xb888,	// (0x0003077c) aid_levels_battery

0xb8a4,	// (0x00030798) battery_pane_g1_ParamLimits

0xb8a4,	// (0x00030798) battery_pane_g1

0xb8c1,	// (0x000307b5) battery_pane_g2_ParamLimits

0xb8c1,	// (0x000307b5) battery_pane_g2

0x0001,

0xf786,	// (0x0003467a) battery_pane_g_ParamLimits

0xf786,	// (0x0003467a) battery_pane_g

0xbcba,	// (0x00030bae) uni_indicator_pane_g1

0xbcd0,	// (0x00030bc4) uni_indicator_pane_g2

0xbce6,	// (0x00030bda) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000347eb) uni_indicator_pane_g

0x0d54,	// (0x00025c48) navi_icon_pane_ParamLimits

0x0d54,	// (0x00025c48) navi_icon_pane

0x0c9b,	// (0x00025b8f) navi_midp_pane

0x0d70,	// (0x00025c64) navi_navi_pane

0x0d7a,	// (0x00025c6e) navi_text_pane_ParamLimits

0x0d7a,	// (0x00025c6e) navi_text_pane

0xcc93,	// (0x00031b87) status_small_wait_pane_g1

0xcffa,	// (0x00031eee) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000347e6) status_small_wait_pane_g

0xbc59,	// (0x00030b4d) navi_navi_icon_text_pane

0xbc61,	// (0x00030b55) navi_navi_pane_g1_ParamLimits

0xbc61,	// (0x00030b55) navi_navi_pane_g1

0xbc73,	// (0x00030b67) navi_navi_pane_g2_ParamLimits

0xbc73,	// (0x00030b67) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000347b4) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000347b4) navi_navi_pane_g

0x4318,	// (0x0002920c) navi_navi_tabs_pane

0xbc85,	// (0x00030b79) navi_navi_text_pane

0xbc59,	// (0x00030b4d) navi_navi_volume_pane

0xbc47,	// (0x00030b3b) navi_text_pane_t1

0xbc3b,	// (0x00030b2f) navi_icon_pane_g1

0x420f,	// (0x00029103) navi_navi_text_pane_t1

0xbc2a,	// (0x00030b1e) navi_navi_volume_pane_g1

0xbc32,	// (0x00030b26) volume_small_pane

0xbb86,	// (0x00030a7a) navi_navi_icon_text_pane_g1

0xbb8e,	// (0x00030a82) navi_navi_icon_text_pane_t1

0x0d70,	// (0x00025c64) navi_tabs_2_long_pane

0x0d70,	// (0x00025c64) navi_tabs_2_pane

0x0d70,	// (0x00025c64) navi_tabs_3_long_pane

0x0d70,	// (0x00025c64) navi_tabs_3_pane

0x0d70,	// (0x00025c64) navi_tabs_4_pane

0xbb66,	// (0x00030a5a) tabs_2_active_pane_ParamLimits

0xbb66,	// (0x00030a5a) tabs_2_active_pane

0xbb76,	// (0x00030a6a) tabs_2_passive_pane_ParamLimits

0xbb76,	// (0x00030a6a) tabs_2_passive_pane

0xbb34,	// (0x00030a28) tabs_3_active_pane_ParamLimits

0xbb34,	// (0x00030a28) tabs_3_active_pane

0xbb44,	// (0x00030a38) tabs_3_passive_pane_ParamLimits

0xbb44,	// (0x00030a38) tabs_3_passive_pane

0xbb55,	// (0x00030a49) tabs_3_passive_pane_cp_ParamLimits

0xbb55,	// (0x00030a49) tabs_3_passive_pane_cp

0xbaf0,	// (0x000309e4) tabs_4_active_pane_ParamLimits

0xbaf0,	// (0x000309e4) tabs_4_active_pane

0xbb01,	// (0x000309f5) tabs_4_passive_pane_ParamLimits

0xbb01,	// (0x000309f5) tabs_4_passive_pane

0xbb12,	// (0x00030a06) tabs_4_passive_pane_cp_ParamLimits

0xbb12,	// (0x00030a06) tabs_4_passive_pane_cp

0xbb23,	// (0x00030a17) tabs_4_passive_pane_cp2_ParamLimits

0xbb23,	// (0x00030a17) tabs_4_passive_pane_cp2

0xbacc,	// (0x000309c0) tabs_2_long_active_pane_ParamLimits

0xbacc,	// (0x000309c0) tabs_2_long_active_pane

0xbade,	// (0x000309d2) tabs_2_long_passive_pane_ParamLimits

0xbade,	// (0x000309d2) tabs_2_long_passive_pane

0xba93,	// (0x00030987) tabs_3_long_active_pane_ParamLimits

0xba93,	// (0x00030987) tabs_3_long_active_pane

0xbaa6,	// (0x0003099a) tabs_3_long_passive_pane_ParamLimits

0xbaa6,	// (0x0003099a) tabs_3_long_passive_pane

0xbab9,	// (0x000309ad) tabs_3_long_passive_pane_cp_ParamLimits

0xbab9,	// (0x000309ad) tabs_3_long_passive_pane_cp

0x17bc,	// (0x000266b0) volume_small_pane_g1

0xba42,	// (0x00030936) volume_small_pane_g2

0xba4b,	// (0x0003093f) volume_small_pane_g3

0xba54,	// (0x00030948) volume_small_pane_g4

0xba5d,	// (0x00030951) volume_small_pane_g5

0xba66,	// (0x0003095a) volume_small_pane_g6

0xba6f,	// (0x00030963) volume_small_pane_g7

0xba78,	// (0x0003096c) volume_small_pane_g8

0xba81,	// (0x00030975) volume_small_pane_g9

0xba8a,	// (0x0003097e) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00034780) volume_small_pane_g

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp2_ParamLimits

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp2

0xa5c0,	// (0x0002f4b4) tabs_3_active_pane_g1

0xa5c8,	// (0x0002f4bc) tabs_3_active_pane_t1

0xcceb,	// (0x00031bdf) bg_passive_tab_pane_cp2_ParamLimits

0xcceb,	// (0x00031bdf) bg_passive_tab_pane_cp2

0xa5c0,	// (0x0002f4b4) tabs_3_passive_pane_g1

0xa5c8,	// (0x0002f4bc) tabs_3_passive_pane_t1

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp3_ParamLimits

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp3

0xa5da,	// (0x0002f4ce) tabs_4_active_pane_g1

0xa5e2,	// (0x0002f4d6) tabs_4_active_pane_t1

0xcceb,	// (0x00031bdf) bg_passive_tab_pane_cp3_ParamLimits

0xcceb,	// (0x00031bdf) bg_passive_tab_pane_cp3

0xa5da,	// (0x0002f4ce) tabs_4_1_passive_pane_g1

0xa5e2,	// (0x0002f4d6) tabs_4_1_passive_pane_t1

0x2f17,	// (0x00027e0b) list_highlight_pane_cp2

0xbd79,	// (0x00030c6d) list_set_pane_ParamLimits

0xbd79,	// (0x00030c6d) list_set_pane

0xbe3b,	// (0x00030d2f) main_pane_set_t1_ParamLimits

0xbe3b,	// (0x00030d2f) main_pane_set_t1

0xbe5b,	// (0x00030d4f) main_pane_set_t2_ParamLimits

0xbe5b,	// (0x00030d4f) main_pane_set_t2

0xbe6f,	// (0x00030d63) main_pane_set_t3_ParamLimits

0xbe6f,	// (0x00030d63) main_pane_set_t3

0xbe83,	// (0x00030d77) main_pane_set_t4_ParamLimits

0xbe83,	// (0x00030d77) main_pane_set_t4

0x0003,

0xf95c,	// (0x00034850) main_pane_set_t_ParamLimits

0xf95c,	// (0x00034850) main_pane_set_t

0xbe97,	// (0x00030d8b) setting_code_pane

0x497a,	// (0x0002986e) setting_slider_graphic_pane

0x497a,	// (0x0002986e) setting_slider_pane

0x497a,	// (0x0002986e) setting_text_pane

0x497a,	// (0x0002986e) setting_volume_pane

0xf496,	// (0x0003438a) volume_set_pane

0xccf9,	// (0x00031bed) bg_set_opt_pane_cp

0xf4a0,	// (0x00034394) setting_slider_pane_t1

0xf4b9,	// (0x000343ad) setting_slider_pane_t2

0xf4d3,	// (0x000343c7) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003442d) setting_slider_pane_t

0xf4eb,	// (0x000343df) slider_set_pane

0xcc9d,	// (0x00031b91) bg_set_opt_pane_cp2

0xcd07,	// (0x00031bfb) setting_slider_graphic_pane_g1

0xf501,	// (0x000343f5) setting_slider_graphic_pane_t1

0xf511,	// (0x00034405) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00034434) setting_slider_graphic_pane_t

0xf521,	// (0x00034415) slider_set_pane_cp

0xcc9d,	// (0x00031b91) input_focus_pane_cp1

0x4813,	// (0x00029707) list_set_text_pane

0xcc93,	// (0x00031b87) setting_text_pane_g1

0xcc9d,	// (0x00031b91) input_focus_pane_cp2

0xcc93,	// (0x00031b87) setting_code_pane_g1

0xcd10,	// (0x00031c04) setting_code_pane_t1

0xea82,	// (0x00033976) set_text_pane_t1_ParamLimits

0xea82,	// (0x00033976) set_text_pane_t1

0xd393,	// (0x00032287) set_opt_bg_pane_g1

0xd39b,	// (0x0003228f) set_opt_bg_pane_g2

0x47eb,	// (0x000296df) set_opt_bg_pane_g3

0xd3ab,	// (0x0003229f) set_opt_bg_pane_g4

0xd3b3,	// (0x000322a7) set_opt_bg_pane_g5

0xd3bb,	// (0x000322af) set_opt_bg_pane_g6

0x47f5,	// (0x000296e9) set_opt_bg_pane_g7

0x47ff,	// (0x000296f3) set_opt_bg_pane_g8

0x4809,	// (0x000296fd) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0003483d) set_opt_bg_pane_g

0x47de,	// (0x000296d2) slider_set_pane_g1

0x19a0,	// (0x00026894) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0003482e) slider_set_pane_g

0x1928,	// (0x0002681c) volume_set_pane_g1

0x1932,	// (0x00026826) volume_set_pane_g2

0x193c,	// (0x00026830) volume_set_pane_g3

0x1946,	// (0x0002683a) volume_set_pane_g4

0x1950,	// (0x00026844) volume_set_pane_g5

0x195a,	// (0x0002684e) volume_set_pane_g6

0x1964,	// (0x00026858) volume_set_pane_g7

0x196e,	// (0x00026862) volume_set_pane_g8

0x1978,	// (0x0002686c) volume_set_pane_g9

0x1982,	// (0x00026876) volume_set_pane_g10

0x0009,

0xf912,	// (0x00034806) volume_set_pane_g

0xa5f4,	// (0x0002f4e8) indicator_pane_ParamLimits

0xa5f4,	// (0x0002f4e8) indicator_pane

0xa620,	// (0x0002f514) main_idle_pane_g2_ParamLimits

0xa620,	// (0x0002f514) main_idle_pane_g2

0xa658,	// (0x0002f54c) main_pane_idle_g1_ParamLimits

0xa658,	// (0x0002f54c) main_pane_idle_g1

0xcd1e,	// (0x00031c12) popup_clock_digital_analogue_window_ParamLimits

0xcd1e,	// (0x00031c12) popup_clock_digital_analogue_window

0xa682,	// (0x0002f576) soft_indicator_pane_ParamLimits

0xa682,	// (0x0002f576) soft_indicator_pane

0xa69e,	// (0x0002f592) wallpaper_pane_ParamLimits

0xa69e,	// (0x0002f592) wallpaper_pane

0xcc93,	// (0x00031b87) wallpaper_pane_g1

0xa6b0,	// (0x0002f5a4) indicator_pane_g1_ParamLimits

0xa6b0,	// (0x0002f5a4) indicator_pane_g1

0x4c54,	// (0x00029b48) navi_navi_icon_text_pane_srt_g1

0xcd4c,	// (0x00031c40) soft_indicator_pane_t1

0xcd66,	// (0x00031c5a) aid_ps_area_pane

0xa6c9,	// (0x0002f5bd) aid_ps_clock_pane

0xcd77,	// (0x00031c6b) aid_ps_indicator_pane

0xcd83,	// (0x00031c77) indicator_ps_pane_ParamLimits

0xcd83,	// (0x00031c77) indicator_ps_pane

0xcd92,	// (0x00031c86) power_save_pane_g1_ParamLimits

0xcd92,	// (0x00031c86) power_save_pane_g1

0xcd9e,	// (0x00031c92) power_save_pane_g2_ParamLimits

0xcd9e,	// (0x00031c92) power_save_pane_g2

0xf011,	// (0x00033f05) aid_navinavi_width_pane

0xcd66,	// (0x00031c5a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00034439) power_save_pane_g_ParamLimits

0xf545,	// (0x00034439) power_save_pane_g

0xcdac,	// (0x00031ca0) power_save_pane_t1_ParamLimits

0xcdac,	// (0x00031ca0) power_save_pane_t1

0xa6c9,	// (0x0002f5bd) aid_ps_clock_pane_ParamLimits

0xcd77,	// (0x00031c6b) aid_ps_indicator_pane_ParamLimits

0xcdbe,	// (0x00031cb2) power_save_pane_t4_ParamLimits

0xcdbe,	// (0x00031cb2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003443e) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003443e) power_save_pane_t

0xcde8,	// (0x00031cdc) power_save_t3_ParamLimits

0xcde8,	// (0x00031cdc) power_save_t3

0xcdd3,	// (0x00031cc7) power_save_t2_ParamLimits

0xcdd3,	// (0x00031cc7) power_save_t2

0xcdfd,	// (0x00031cf1) indicator_ps_pane_g1

0xa6d7,	// (0x0002f5cb) ai_gene_pane_ParamLimits

0xa6d7,	// (0x0002f5cb) ai_gene_pane

0xa6ee,	// (0x0002f5e2) ai_links_pane_ParamLimits

0xa6ee,	// (0x0002f5e2) ai_links_pane

0xa706,	// (0x0002f5fa) indicator_pane_cp1_ParamLimits

0xa706,	// (0x0002f5fa) indicator_pane_cp1

0xa715,	// (0x0002f609) main_pane_idle_g1_cp_ParamLimits

0xa715,	// (0x0002f609) main_pane_idle_g1_cp

0xce06,	// (0x00031cfa) popup_ai_links_title_window

0xa72d,	// (0x0002f621) soft_indicator_pane_cp1_ParamLimits

0xa72d,	// (0x0002f621) soft_indicator_pane_cp1

0x45c7,	// (0x000294bb) ai_links_pane_g1

0x45d0,	// (0x000294c4) grid_ai_links_pane

0xbcb1,	// (0x00030ba5) ai_gene_pane_1

0x45b5,	// (0x000294a9) ai_gene_pane_2

0x45be,	// (0x000294b2) list_highlight_pane_cp4

0xbc8d,	// (0x00030b81) cell_ai_link_pane_ParamLimits

0xbc8d,	// (0x00030b81) cell_ai_link_pane

0x4584,	// (0x00029478) cell_ai_link_pane_g1

0xcffa,	// (0x00031eee) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000347e1) cell_ai_link_pane_g

0xcc9d,	// (0x00031b91) grid_highlight_cp2

0xcc9d,	// (0x00031b91) bg_popup_sub_pane_cp1

0xce1d,	// (0x00031d11) popup_ai_links_title_window_t1

0x44d0,	// (0x000293c4) ai_gene_pane_1_g1_ParamLimits

0x44d0,	// (0x000293c4) ai_gene_pane_1_g1

0x44dc,	// (0x000293d0) ai_gene_pane_1_g2_ParamLimits

0x44dc,	// (0x000293d0) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000347d7) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000347d7) ai_gene_pane_1_g

0x44e9,	// (0x000293dd) ai_gene_pane_1_t1_ParamLimits

0x44e9,	// (0x000293dd) ai_gene_pane_1_t1

0x451d,	// (0x00029411) grid_ai_soft_ind_pane

0x44bb,	// (0x000293af) ai_gene_pane_2_t1_ParamLimits

0x44bb,	// (0x000293af) ai_gene_pane_2_t1

0xa741,	// (0x0002f635) main_pane_empty_t1_ParamLimits

0xa741,	// (0x0002f635) main_pane_empty_t1

0xa759,	// (0x0002f64d) main_pane_empty_t2_ParamLimits

0xa759,	// (0x0002f64d) main_pane_empty_t2

0xa76e,	// (0x0002f662) main_pane_empty_t3_ParamLimits

0xa76e,	// (0x0002f662) main_pane_empty_t3

0xa780,	// (0x0002f674) main_pane_empty_t4_ParamLimits

0xa780,	// (0x0002f674) main_pane_empty_t4

0xa792,	// (0x0002f686) main_pane_empty_t5_ParamLimits

0xa792,	// (0x0002f686) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00034443) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00034443) main_pane_empty_t

0xd422,	// (0x00032316) bg_popup_window_pane_ParamLimits

0xd422,	// (0x00032316) bg_popup_window_pane

0x421d,	// (0x00029111) find_popup_pane_cp2_ParamLimits

0x421d,	// (0x00029111) find_popup_pane_cp2

0x4229,	// (0x0002911d) heading_pane_ParamLimits

0x4229,	// (0x0002911d) heading_pane

0xcc9d,	// (0x00031b91) bg_popup_sub_pane

0xbbab,	// (0x00030a9f) bg_popup_window_pane_g1_ParamLimits

0xbbab,	// (0x00030a9f) bg_popup_window_pane_g1

0xbbba,	// (0x00030aae) bg_popup_window_pane_g2_ParamLimits

0xbbba,	// (0x00030aae) bg_popup_window_pane_g2

0xbbc6,	// (0x00030aba) bg_popup_window_pane_g3_ParamLimits

0xbbc6,	// (0x00030aba) bg_popup_window_pane_g3

0xbbd2,	// (0x00030ac6) bg_popup_window_pane_g4_ParamLimits

0xbbd2,	// (0x00030ac6) bg_popup_window_pane_g4

0xbbe1,	// (0x00030ad5) bg_popup_window_pane_g5_ParamLimits

0xbbe1,	// (0x00030ad5) bg_popup_window_pane_g5

0xbbf1,	// (0x00030ae5) bg_popup_window_pane_g6_ParamLimits

0xbbf1,	// (0x00030ae5) bg_popup_window_pane_g6

0xbbfd,	// (0x00030af1) bg_popup_window_pane_g7_ParamLimits

0xbbfd,	// (0x00030af1) bg_popup_window_pane_g7

0xbc0c,	// (0x00030b00) bg_popup_window_pane_g8_ParamLimits

0xbc0c,	// (0x00030b00) bg_popup_window_pane_g8

0xbc1b,	// (0x00030b0f) bg_popup_window_pane_g9_ParamLimits

0xbc1b,	// (0x00030b0f) bg_popup_window_pane_g9

0x4203,	// (0x000290f7) bg_popup_window_pane_g10_ParamLimits

0x4203,	// (0x000290f7) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0003479f) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0003479f) bg_popup_window_pane_g

0x412c,	// (0x00029020) bg_popup_heading_pane_ParamLimits

0x412c,	// (0x00029020) bg_popup_heading_pane

0x1a28,	// (0x0002691c) tabs_4_passive_pane_cp_srt_ParamLimits

0x1a28,	// (0x0002691c) tabs_4_passive_pane_cp_srt

0x1a3a,	// (0x0002692e) tabs_4_passive_pane_srt_ParamLimits

0x4140,	// (0x00029034) heading_pane_g2

0x1a3a,	// (0x0002692e) tabs_4_passive_pane_srt

0x34c3,	// (0x000283b7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x34c3,	// (0x000283b7) bg_passive_tab_pane_cp3_srt

0x4148,	// (0x0002903c) heading_pane_t1_ParamLimits

0x4148,	// (0x0002903c) heading_pane_t1

0x415f,	// (0x00029053) heading_pane_t2_ParamLimits

0x415f,	// (0x00029053) heading_pane_t2

0x0001,

0xf8a6,	// (0x0003479a) heading_pane_t_ParamLimits

0xf8a6,	// (0x0003479a) heading_pane_t

0x3c57,	// (0x00028b4b) bg_popup_heading_pane_g1

0x3d06,	// (0x00028bfa) bg_popup_heading_pane_g2

0x3d10,	// (0x00028c04) bg_popup_heading_pane_g3

0x3d1a,	// (0x00028c0e) bg_popup_heading_pane_g4

0x3d24,	// (0x00028c18) bg_popup_heading_pane_g5

0x3d2e,	// (0x00028c22) bg_popup_heading_pane_g6

0x3d36,	// (0x00028c2a) bg_popup_heading_pane_g7

0x3d3e,	// (0x00028c32) bg_popup_heading_pane_g8

0x3d48,	// (0x00028c3c) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00034756) bg_popup_heading_pane_g

0x344f,	// (0x00028343) bg_popup_sub_pane_g1

0x3457,	// (0x0002834b) bg_popup_sub_pane_g2

0x345f,	// (0x00028353) bg_popup_sub_pane_g3

0x3467,	// (0x0002835b) bg_popup_sub_pane_g4

0x346f,	// (0x00028363) bg_popup_sub_pane_g5

0x3477,	// (0x0002836b) bg_popup_sub_pane_g6

0x347f,	// (0x00028373) bg_popup_sub_pane_g7

0x3487,	// (0x0002837b) bg_popup_sub_pane_g8

0x348f,	// (0x00028383) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00034730) bg_popup_sub_pane_g

0xcceb,	// (0x00031bdf) bg_popup_window_pane_cp5_ParamLimits

0xcceb,	// (0x00031bdf) bg_popup_window_pane_cp5

0xce3a,	// (0x00031d2e) popup_note_window_g1_ParamLimits

0xce3a,	// (0x00031d2e) popup_note_window_g1

0xce46,	// (0x00031d3a) popup_note_window_t1_ParamLimits

0xce46,	// (0x00031d3a) popup_note_window_t1

0xce5c,	// (0x00031d50) popup_note_window_t2_ParamLimits

0xce5c,	// (0x00031d50) popup_note_window_t2

0xce72,	// (0x00031d66) popup_note_window_t3_ParamLimits

0xce72,	// (0x00031d66) popup_note_window_t3

0xce88,	// (0x00031d7c) popup_note_window_t4_ParamLimits

0xce88,	// (0x00031d7c) popup_note_window_t4

0xceb0,	// (0x00031da4) popup_note_window_t5_ParamLimits

0xceb0,	// (0x00031da4) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003444e) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003444e) popup_note_window_t

0xcefa,	// (0x00031dee) bg_popup_window_pane_cp6_ParamLimits

0xcefa,	// (0x00031dee) bg_popup_window_pane_cp6

0x3bd3,	// (0x00028ac7) popup_note_image_window_g1_ParamLimits

0x3bd3,	// (0x00028ac7) popup_note_image_window_g1

0x3bdf,	// (0x00028ad3) popup_note_image_window_g2_ParamLimits

0x3bdf,	// (0x00028ad3) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00034724) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00034724) popup_note_image_window_g

0x3bf8,	// (0x00028aec) popup_note_image_window_t1_ParamLimits

0x3bf8,	// (0x00028aec) popup_note_image_window_t1

0x3c11,	// (0x00028b05) popup_note_image_window_t2_ParamLimits

0x3c11,	// (0x00028b05) popup_note_image_window_t2

0x3c2a,	// (0x00028b1e) popup_note_image_window_t3_ParamLimits

0x3c2a,	// (0x00028b1e) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00034729) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00034729) popup_note_image_window_t

0x3a93,	// (0x00028987) bg_popup_window_pane_cp7_ParamLimits

0x3a93,	// (0x00028987) bg_popup_window_pane_cp7

0x3ac3,	// (0x000289b7) popup_note_wait_window_g1_ParamLimits

0x3ac3,	// (0x000289b7) popup_note_wait_window_g1

0x3acf,	// (0x000289c3) popup_note_wait_window_g2_ParamLimits

0x3acf,	// (0x000289c3) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00034712) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00034712) popup_note_wait_window_g

0x3ae7,	// (0x000289db) popup_note_wait_window_t1_ParamLimits

0x3ae7,	// (0x000289db) popup_note_wait_window_t1

0x3b0e,	// (0x00028a02) popup_note_wait_window_t2_ParamLimits

0x3b0e,	// (0x00028a02) popup_note_wait_window_t2

0x3b2c,	// (0x00028a20) popup_note_wait_window_t3_ParamLimits

0x3b2c,	// (0x00028a20) popup_note_wait_window_t3

0x3b3f,	// (0x00028a33) popup_note_wait_window_t4_ParamLimits

0x3b3f,	// (0x00028a33) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00034719) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00034719) popup_note_wait_window_t

0x3b64,	// (0x00028a58) wait_bar_pane_ParamLimits

0x3b64,	// (0x00028a58) wait_bar_pane

0xcc9d,	// (0x00031b91) wait_anim_pane

0xcc9d,	// (0x00031b91) wait_border_pane

0xcc93,	// (0x00031b87) wait_anim_pane_g1

0xcc93,	// (0x00031b87) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x000345d2) wait_anim_pane_g

0x3a37,	// (0x0002892b) wait_border_pane_g1

0x3a42,	// (0x00028936) wait_border_pane_g2

0x3a4b,	// (0x0002893f) wait_border_pane_g3

0x0002,

0xf817,	// (0x0003470b) wait_border_pane_g

0x38a1,	// (0x00028795) bg_popup_window_pane_cp16_ParamLimits

0x38a1,	// (0x00028795) bg_popup_window_pane_cp16

0x39a1,	// (0x00028895) indicator_popup_pane_cp4_ParamLimits

0x39a1,	// (0x00028895) indicator_popup_pane_cp4

0x39b5,	// (0x000288a9) popup_query_data_window_t1_ParamLimits

0x39b5,	// (0x000288a9) popup_query_data_window_t1

0x39c7,	// (0x000288bb) popup_query_data_window_t2_ParamLimits

0x39c7,	// (0x000288bb) popup_query_data_window_t2

0x39e0,	// (0x000288d4) popup_query_data_window_t3_ParamLimits

0x39e0,	// (0x000288d4) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00034704) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00034704) popup_query_data_window_t

0x39fa,	// (0x000288ee) query_popup_data_pane_ParamLimits

0x39fa,	// (0x000288ee) query_popup_data_pane

0x3a0e,	// (0x00028902) query_popup_data_pane_cp1_ParamLimits

0x3a0e,	// (0x00028902) query_popup_data_pane_cp1

0x38a1,	// (0x00028795) bg_popup_window_pane_cp10_ParamLimits

0x38a1,	// (0x00028795) bg_popup_window_pane_cp10

0x38d3,	// (0x000287c7) indicator_popup_pane_ParamLimits

0x38d3,	// (0x000287c7) indicator_popup_pane

0x38f5,	// (0x000287e9) popup_query_code_window_t1_ParamLimits

0x38f5,	// (0x000287e9) popup_query_code_window_t1

0x390f,	// (0x00028803) popup_query_code_window_t2_ParamLimits

0x390f,	// (0x00028803) popup_query_code_window_t2

0x3958,	// (0x0002884c) popup_query_code_window_t3_ParamLimits

0x3958,	// (0x0002884c) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000346fd) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000346fd) popup_query_code_window_t

0x3987,	// (0x0002887b) query_popup_pane_ParamLimits

0x3987,	// (0x0002887b) query_popup_pane

0xcefa,	// (0x00031dee) bg_popup_window_pane_cp15_ParamLimits

0xcefa,	// (0x00031dee) bg_popup_window_pane_cp15

0xcf1a,	// (0x00031e0e) indicator_popup_pane_cp1_ParamLimits

0xcf1a,	// (0x00031e0e) indicator_popup_pane_cp1

0xcf2d,	// (0x00031e21) indicator_popup_pane_cp2_ParamLimits

0xcf2d,	// (0x00031e21) indicator_popup_pane_cp2

0xcf48,	// (0x00031e3c) popup_query_data_code_window_g1_ParamLimits

0xcf48,	// (0x00031e3c) popup_query_data_code_window_g1

0xcf5b,	// (0x00031e4f) popup_query_data_code_window_t1_ParamLimits

0xcf5b,	// (0x00031e4f) popup_query_data_code_window_t1

0xcf6d,	// (0x00031e61) popup_query_data_code_window_t2_ParamLimits

0xcf6d,	// (0x00031e61) popup_query_data_code_window_t2

0xcf7f,	// (0x00031e73) popup_query_data_code_window_t3_ParamLimits

0xcf7f,	// (0x00031e73) popup_query_data_code_window_t3

0xcf95,	// (0x00031e89) popup_query_data_code_window_t4_ParamLimits

0xcf95,	// (0x00031e89) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00034459) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00034459) popup_query_data_code_window_t

0x0d10,	// (0x00025c04) list_single_midp_graphic_pane_g3

0xcfaf,	// (0x00031ea3) query_popup_data_pane_cp2_ParamLimits

0xcfc2,	// (0x00031eb6) query_popup_pane_cp2_ParamLimits

0xcfc2,	// (0x00031eb6) query_popup_pane_cp2

0xcc9d,	// (0x00031b91) bg_popup_window_pane_cp11

0x3885,	// (0x00028779) heading_pane_cp5

0x388d,	// (0x00028781) listscroll_popup_info_pane

0xcc9d,	// (0x00031b91) input_focus_pane_cp3

0xcfdd,	// (0x00031ed1) query_popup_pane_t1

0xcfeb,	// (0x00031edf) list_popup_info_pane_ParamLimits

0xcfeb,	// (0x00031edf) list_popup_info_pane

0xcffa,	// (0x00031eee) listscroll_popup_info_pane_g1

0xd002,	// (0x00031ef6) scroll_pane_cp7

0xd00c,	// (0x00031f00) popup_info_list_pane_t1_ParamLimits

0xd00c,	// (0x00031f00) popup_info_list_pane_t1

0xd026,	// (0x00031f1a) popup_info_list_pane_t2_ParamLimits

0xd026,	// (0x00031f1a) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00034462) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00034462) popup_info_list_pane_t

0xcc9d,	// (0x00031b91) bg_popup_window_pane_cp12

0x4c6e,	// (0x00029b62) find_popup_pane

0xccf9,	// (0x00031bed) bg_popup_window_pane_cp3

0xd040,	// (0x00031f34) heading_pane_cp3

0xd04f,	// (0x00031f43) listscroll_popup_graphic_pane

0xcc9d,	// (0x00031b91) bg_popup_window_pane_cp4

0xa7f4,	// (0x0002f6e8) heading_pane_cp4

0xd05f,	// (0x00031f53) listscroll_popup_colour_pane

0xa7fe,	// (0x0002f6f2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa7fe,	// (0x0002f6f2) cell_large_graphic_colour_none_popup_pane

0xa812,	// (0x0002f706) grid_large_graphic_colour_popup_pane_ParamLimits

0xa812,	// (0x0002f706) grid_large_graphic_colour_popup_pane

0xa83a,	// (0x0002f72e) listscroll_popup_colour_pane_g1_ParamLimits

0xa83a,	// (0x0002f72e) listscroll_popup_colour_pane_g1

0xa851,	// (0x0002f745) listscroll_popup_colour_pane_g2_ParamLimits

0xa851,	// (0x0002f745) listscroll_popup_colour_pane_g2

0xa868,	// (0x0002f75c) listscroll_popup_colour_pane_g3_ParamLimits

0xa868,	// (0x0002f75c) listscroll_popup_colour_pane_g3

0xa878,	// (0x0002f76c) listscroll_popup_colour_pane_g4_ParamLimits

0xa878,	// (0x0002f76c) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00034467) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00034467) listscroll_popup_colour_pane_g

0xd067,	// (0x00031f5b) scroll_pane_cp6_ParamLimits

0xd067,	// (0x00031f5b) scroll_pane_cp6

0xa888,	// (0x0002f77c) cell_large_graphic_colour_popup_pane_ParamLimits

0xa888,	// (0x0002f77c) cell_large_graphic_colour_popup_pane

0xd079,	// (0x00031f6d) cell_large_graphic_colour_none_popup_pane_t1

0xcc9d,	// (0x00031b91) grid_highlight_pane_cp5

0xd088,	// (0x00031f7c) cell_large_graphic_colour_popup_pane_g1

0xd090,	// (0x00031f84) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00034470) cell_large_graphic_colour_popup_pane_g

0xd098,	// (0x00031f8c) cell_large_graphic_colour_popup_pane_g2_copy1

0xd0a1,	// (0x00031f95) grid_highlight_pane_cp4

0xd0a9,	// (0x00031f9d) bg_popup_window_pane_cp8_ParamLimits

0xd0a9,	// (0x00031f9d) bg_popup_window_pane_cp8

0xd0c4,	// (0x00031fb8) popup_snote_single_text_window_g1_ParamLimits

0xd0c4,	// (0x00031fb8) popup_snote_single_text_window_g1

0xd0d6,	// (0x00031fca) popup_snote_single_text_window_t1_ParamLimits

0xd0d6,	// (0x00031fca) popup_snote_single_text_window_t1

0xd0e9,	// (0x00031fdd) popup_snote_single_text_window_t2_ParamLimits

0xd0e9,	// (0x00031fdd) popup_snote_single_text_window_t2

0xd0fc,	// (0x00031ff0) popup_snote_single_text_window_t3_ParamLimits

0xd0fc,	// (0x00031ff0) popup_snote_single_text_window_t3

0xd135,	// (0x00032029) popup_snote_single_text_window_t4_ParamLimits

0xd135,	// (0x00032029) popup_snote_single_text_window_t4

0xd169,	// (0x0003205d) popup_snote_single_text_window_t5_ParamLimits

0xd169,	// (0x0003205d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00034475) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00034475) popup_snote_single_text_window_t

0xd198,	// (0x0003208c) bg_popup_window_pane_cp9_ParamLimits

0xd198,	// (0x0003208c) bg_popup_window_pane_cp9

0xd0c4,	// (0x00031fb8) popup_snote_single_graphic_window_g1_ParamLimits

0xd0c4,	// (0x00031fb8) popup_snote_single_graphic_window_g1

0xd1a6,	// (0x0003209a) popup_snote_single_graphic_window_g2_ParamLimits

0xd1a6,	// (0x0003209a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00034480) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00034480) popup_snote_single_graphic_window_g

0xd1b2,	// (0x000320a6) popup_snote_single_graphic_window_t1_ParamLimits

0xd1b2,	// (0x000320a6) popup_snote_single_graphic_window_t1

0xd1c5,	// (0x000320b9) popup_snote_single_graphic_window_t2_ParamLimits

0xd1c5,	// (0x000320b9) popup_snote_single_graphic_window_t2

0xd1d8,	// (0x000320cc) popup_snote_single_graphic_window_t3_ParamLimits

0xd1d8,	// (0x000320cc) popup_snote_single_graphic_window_t3

0xd211,	// (0x00032105) popup_snote_single_graphic_window_t4_ParamLimits

0xd211,	// (0x00032105) popup_snote_single_graphic_window_t4

0xd245,	// (0x00032139) popup_snote_single_graphic_window_t5_ParamLimits

0xd245,	// (0x00032139) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00034485) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00034485) popup_snote_single_graphic_window_t

0x4bac,	// (0x00029aa0) grid_graphic_popup_pane_ParamLimits

0x4bac,	// (0x00029aa0) grid_graphic_popup_pane

0x4bda,	// (0x00029ace) listscroll_popup_graphic_pane_g1_ParamLimits

0x4bda,	// (0x00029ace) listscroll_popup_graphic_pane_g1

0xbfa3,	// (0x00030e97) listscroll_popup_graphic_pane_g2_ParamLimits

0xbfa3,	// (0x00030e97) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0003487a) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0003487a) listscroll_popup_graphic_pane_g

0x4c02,	// (0x00029af6) scroll_pane_cp5

0xbf5b,	// (0x00030e4f) cell_graphic_popup_pane_ParamLimits

0xbf5b,	// (0x00030e4f) cell_graphic_popup_pane

0x4b25,	// (0x00029a19) cell_graphic_popup_pane_g1

0x4b2d,	// (0x00029a21) cell_graphic_popup_pane_g2

0xd098,	// (0x00031f8c) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00034873) cell_graphic_popup_pane_g

0x4b36,	// (0x00029a2a) cell_graphic_popup_pane_t2

0xd0a1,	// (0x00031f95) grid_highlight_pane_cp3

0xd286,	// (0x0003217a) list_gen_pane_ParamLimits

0xd286,	// (0x0003217a) list_gen_pane

0xd2ae,	// (0x000321a2) scroll_pane

0xbf12,	// (0x00030e06) bg_list_pane_g1_ParamLimits

0xbf12,	// (0x00030e06) bg_list_pane_g1

0x4a9a,	// (0x0002998e) bg_list_pane_g2_ParamLimits

0x4a9a,	// (0x0002998e) bg_list_pane_g2

0x4aaf,	// (0x000299a3) bg_list_pane_g3_ParamLimits

0x4aaf,	// (0x000299a3) bg_list_pane_g3

0x4ac3,	// (0x000299b7) bg_list_pane_g4_ParamLimits

0x4ac3,	// (0x000299b7) bg_list_pane_g4

0xbf2f,	// (0x00030e23) bg_list_pane_g5_ParamLimits

0xbf2f,	// (0x00030e23) bg_list_pane_g5

0x0004,

0xf974,	// (0x00034868) bg_list_pane_g_ParamLimits

0xf974,	// (0x00034868) bg_list_pane_g

0xbed5,	// (0x00030dc9) list_double2_graphic_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double2_graphic_large_graphic_pane

0xbed5,	// (0x00030dc9) list_double2_graphic_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double2_graphic_pane

0xbed5,	// (0x00030dc9) list_double2_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double2_large_graphic_pane

0xbed5,	// (0x00030dc9) list_double2_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double2_pane

0xbed5,	// (0x00030dc9) list_double_graphic_heading_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double_graphic_heading_pane

0xbed5,	// (0x00030dc9) list_double_graphic_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double_graphic_pane

0xbed5,	// (0x00030dc9) list_double_heading_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double_heading_pane

0xbed5,	// (0x00030dc9) list_double_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double_large_graphic_pane

0xbed5,	// (0x00030dc9) list_double_number_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double_number_pane

0xbed5,	// (0x00030dc9) list_double_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double_pane

0xbed5,	// (0x00030dc9) list_double_time_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_double_time_pane

0xbed5,	// (0x00030dc9) list_setting_number_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_setting_number_pane

0xbed5,	// (0x00030dc9) list_setting_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_setting_pane

0xa066,	// (0x0002ef5a) list_single_2graphic_pane_ParamLimits

0xa066,	// (0x0002ef5a) list_single_2graphic_pane

0xa066,	// (0x0002ef5a) list_single_graphic_heading_pane_ParamLimits

0xa066,	// (0x0002ef5a) list_single_graphic_heading_pane

0xa066,	// (0x0002ef5a) list_single_graphic_pane_ParamLimits

0xa066,	// (0x0002ef5a) list_single_graphic_pane

0xa066,	// (0x0002ef5a) list_single_heading_pane_ParamLimits

0xa066,	// (0x0002ef5a) list_single_heading_pane

0xbed5,	// (0x00030dc9) list_single_large_graphic_pane_ParamLimits

0xbed5,	// (0x00030dc9) list_single_large_graphic_pane

0xa066,	// (0x0002ef5a) list_single_number_heading_pane_ParamLimits

0xa066,	// (0x0002ef5a) list_single_number_heading_pane

0xa066,	// (0x0002ef5a) list_single_number_pane_ParamLimits

0xa066,	// (0x0002ef5a) list_single_number_pane

0xa066,	// (0x0002ef5a) list_single_pane_ParamLimits

0xa066,	// (0x0002ef5a) list_single_pane

0xcc9d,	// (0x00031b91) list_highlight_pane_cp1

0xea9d,	// (0x00033991) list_single_pane_g1_ParamLimits

0xea9d,	// (0x00033991) list_single_pane_g1

0xeaa9,	// (0x0003399d) list_single_pane_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00034497) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00034497) list_single_pane_g

0xed8c,	// (0x00033c80) list_single_pane_t1_ParamLimits

0xed8c,	// (0x00033c80) list_single_pane_t1

0xea9d,	// (0x00033991) list_single_number_pane_g1_ParamLimits

0xea9d,	// (0x00033991) list_single_number_pane_g1

0xeaa9,	// (0x0003399d) list_single_number_pane_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00034497) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00034497) list_single_number_pane_g

0xecb7,	// (0x00033bab) list_single_number_pane_t1_ParamLimits

0xecb7,	// (0x00033bab) list_single_number_pane_t1

0xa028,	// (0x0002ef1c) list_single_number_pane_t2_ParamLimits

0xa028,	// (0x0002ef1c) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00034829) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00034829) list_single_number_pane_t

0x99e2,	// (0x0002e8d6) list_single_graphic_pane_g1_ParamLimits

0x99e2,	// (0x0002e8d6) list_single_graphic_pane_g1

0xea9d,	// (0x00033991) list_single_graphic_pane_g2_ParamLimits

0xea9d,	// (0x00033991) list_single_graphic_pane_g2

0xeaa9,	// (0x0003399d) list_single_graphic_pane_g3_ParamLimits

0xeaa9,	// (0x0003399d) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00034490) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00034490) list_single_graphic_pane_g

0x99ee,	// (0x0002e8e2) list_single_graphic_pane_t1_ParamLimits

0x99ee,	// (0x0002e8e2) list_single_graphic_pane_t1

0xea9d,	// (0x00033991) list_single_heading_pane_g1_ParamLimits

0xea9d,	// (0x00033991) list_single_heading_pane_g1

0xeaa9,	// (0x0003399d) list_single_heading_pane_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00034497) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00034497) list_single_heading_pane_g

0xeab5,	// (0x000339a9) list_single_heading_pane_t1_ParamLimits

0xeab5,	// (0x000339a9) list_single_heading_pane_t1

0x9a04,	// (0x0002e8f8) list_single_heading_pane_t2_ParamLimits

0x9a04,	// (0x0002e8f8) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003449c) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003449c) list_single_heading_pane_t

0xea9d,	// (0x00033991) list_single_number_heading_pane_g1_ParamLimits

0xea9d,	// (0x00033991) list_single_number_heading_pane_g1

0xeaa9,	// (0x0003399d) list_single_number_heading_pane_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00034497) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00034497) list_single_number_heading_pane_g

0xeab5,	// (0x000339a9) list_single_number_heading_pane_t1_ParamLimits

0xeab5,	// (0x000339a9) list_single_number_heading_pane_t1

0x9a16,	// (0x0002e90a) list_single_number_heading_pane_t2_ParamLimits

0x9a16,	// (0x0002e90a) list_single_number_heading_pane_t2

0xeacb,	// (0x000339bf) list_single_number_heading_pane_t3_ParamLimits

0xeacb,	// (0x000339bf) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x000344a1) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x000344a1) list_single_number_heading_pane_t

0xeadd,	// (0x000339d1) list_single_graphic_heading_pane_g1_ParamLimits

0xeadd,	// (0x000339d1) list_single_graphic_heading_pane_g1

0x9a28,	// (0x0002e91c) list_single_graphic_heading_pane_g4_ParamLimits

0x9a28,	// (0x0002e91c) list_single_graphic_heading_pane_g4

0xeaa9,	// (0x0003399d) list_single_graphic_heading_pane_g5_ParamLimits

0xeaa9,	// (0x0003399d) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000344a8) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000344a8) list_single_graphic_heading_pane_g

0xeab5,	// (0x000339a9) list_single_graphic_heading_pane_t1_ParamLimits

0xeab5,	// (0x000339a9) list_single_graphic_heading_pane_t1

0x9a39,	// (0x0002e92d) list_single_graphic_heading_pane_t2_ParamLimits

0x9a39,	// (0x0002e92d) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000344af) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000344af) list_single_graphic_heading_pane_t

0xeae9,	// (0x000339dd) list_single_large_graphic_pane_g1_ParamLimits

0xeae9,	// (0x000339dd) list_single_large_graphic_pane_g1

0xeaf5,	// (0x000339e9) list_single_large_graphic_pane_g2_ParamLimits

0xeaf5,	// (0x000339e9) list_single_large_graphic_pane_g2

0xeb01,	// (0x000339f5) list_single_large_graphic_pane_g3_ParamLimits

0xeb01,	// (0x000339f5) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000344b4) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000344b4) list_single_large_graphic_pane_g

0x3a42,	// (0x00028936) wait_border_pane_g2_copy1

0x9a4b,	// (0x0002e93f) list_single_large_graphic_pane_g4_cp2

0xeb0d,	// (0x00033a01) list_single_large_graphic_pane_t1_ParamLimits

0xeb0d,	// (0x00033a01) list_single_large_graphic_pane_t1

0x9a53,	// (0x0002e947) list_double_pane_g1_ParamLimits

0x9a53,	// (0x0002e947) list_double_pane_g1

0x9a5f,	// (0x0002e953) list_double_pane_g2_ParamLimits

0x9a5f,	// (0x0002e953) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000344bb) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000344bb) list_double_pane_g

0x9a6b,	// (0x0002e95f) list_double_pane_t1_ParamLimits

0x9a6b,	// (0x0002e95f) list_double_pane_t1

0x9a81,	// (0x0002e975) list_double_pane_t2_ParamLimits

0x9a81,	// (0x0002e975) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000344c0) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000344c0) list_double_pane_t

0x9a93,	// (0x0002e987) list_double2_pane_g1_ParamLimits

0x9a93,	// (0x0002e987) list_double2_pane_g1

0x9aa4,	// (0x0002e998) list_double2_pane_g2_ParamLimits

0x9aa4,	// (0x0002e998) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000344c5) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000344c5) list_double2_pane_g

0x9ab0,	// (0x0002e9a4) list_double2_pane_t1_ParamLimits

0x9ab0,	// (0x0002e9a4) list_double2_pane_t1

0x9ac6,	// (0x0002e9ba) list_double2_pane_t2_ParamLimits

0x9ac6,	// (0x0002e9ba) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000344ca) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000344ca) list_double2_pane_t

0x9a53,	// (0x0002e947) list_double_number_pane_g1_ParamLimits

0x9a53,	// (0x0002e947) list_double_number_pane_g1

0x9a5f,	// (0x0002e953) list_double_number_pane_g2_ParamLimits

0x9a5f,	// (0x0002e953) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000344bb) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000344bb) list_double_number_pane_g

0x9ad8,	// (0x0002e9cc) list_double_number_pane_t1_ParamLimits

0x9ad8,	// (0x0002e9cc) list_double_number_pane_t1

0x9aea,	// (0x0002e9de) list_double_number_pane_t2_ParamLimits

0x9aea,	// (0x0002e9de) list_double_number_pane_t2

0x9b00,	// (0x0002e9f4) list_double_number_pane_t3_ParamLimits

0x9b00,	// (0x0002e9f4) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000344cf) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000344cf) list_double_number_pane_t

0x9b12,	// (0x0002ea06) list_double_graphic_pane_g1_ParamLimits

0x9b12,	// (0x0002ea06) list_double_graphic_pane_g1

0x9b1e,	// (0x0002ea12) list_double_graphic_pane_g2_ParamLimits

0x9b1e,	// (0x0002ea12) list_double_graphic_pane_g2

0x9b2d,	// (0x0002ea21) list_double_graphic_pane_g3_ParamLimits

0x9b2d,	// (0x0002ea21) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000344d6) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000344d6) list_double_graphic_pane_g

0x9b45,	// (0x0002ea39) list_double_graphic_pane_t1_ParamLimits

0x9b45,	// (0x0002ea39) list_double_graphic_pane_t1

0x9b5b,	// (0x0002ea4f) list_double_graphic_pane_t2_ParamLimits

0x9b5b,	// (0x0002ea4f) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000344df) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000344df) list_double_graphic_pane_t

0x9b6d,	// (0x0002ea61) list_double2_graphic_pane_g1_ParamLimits

0x9b6d,	// (0x0002ea61) list_double2_graphic_pane_g1

0x9b79,	// (0x0002ea6d) list_double2_graphic_pane_g2_ParamLimits

0x9b79,	// (0x0002ea6d) list_double2_graphic_pane_g2

0x9b85,	// (0x0002ea79) list_double2_graphic_pane_g3_ParamLimits

0x9b85,	// (0x0002ea79) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000344e4) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000344e4) list_double2_graphic_pane_g

0x9b91,	// (0x0002ea85) list_double2_graphic_pane_t1_ParamLimits

0x9b91,	// (0x0002ea85) list_double2_graphic_pane_t1

0x9ba7,	// (0x0002ea9b) list_double2_graphic_pane_t2_ParamLimits

0x9ba7,	// (0x0002ea9b) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000344eb) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000344eb) list_double2_graphic_pane_t

0x9bb9,	// (0x0002eaad) list_double_large_graphic_pane_g1_ParamLimits

0x9bb9,	// (0x0002eaad) list_double_large_graphic_pane_g1

0x9bd8,	// (0x0002eacc) list_double_large_graphic_pane_g2_ParamLimits

0x9bd8,	// (0x0002eacc) list_double_large_graphic_pane_g2

0x9a5f,	// (0x0002e953) list_double_large_graphic_pane_g3_ParamLimits

0x9a5f,	// (0x0002e953) list_double_large_graphic_pane_g3

0x9be9,	// (0x0002eadd) list_double_large_graphic_pane_g4_ParamLimits

0x9be9,	// (0x0002eadd) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000344f0) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000344f0) list_double_large_graphic_pane_g

0x9bfc,	// (0x0002eaf0) list_double_large_graphic_pane_t1_ParamLimits

0x9bfc,	// (0x0002eaf0) list_double_large_graphic_pane_t1

0x9c15,	// (0x0002eb09) list_double_large_graphic_pane_t2_ParamLimits

0x9c15,	// (0x0002eb09) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000344fb) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000344fb) list_double_large_graphic_pane_t

0x9c27,	// (0x0002eb1b) list_double2_large_graphic_pane_g1_ParamLimits

0x9c27,	// (0x0002eb1b) list_double2_large_graphic_pane_g1

0x9a93,	// (0x0002e987) list_double2_large_graphic_pane_g2_ParamLimits

0x9a93,	// (0x0002e987) list_double2_large_graphic_pane_g2

0x9aa4,	// (0x0002e998) list_double2_large_graphic_pane_g3_ParamLimits

0x9aa4,	// (0x0002e998) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00034500) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00034500) list_double2_large_graphic_pane_g

0x9c33,	// (0x0002eb27) list_double2_large_graphic_pane_t1_ParamLimits

0x9c33,	// (0x0002eb27) list_double2_large_graphic_pane_t1

0x9c49,	// (0x0002eb3d) list_double2_large_graphic_pane_t2_ParamLimits

0x9c49,	// (0x0002eb3d) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00034507) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00034507) list_double2_large_graphic_pane_t

0x9c5b,	// (0x0002eb4f) list_double_heading_pane_g1_ParamLimits

0x9c5b,	// (0x0002eb4f) list_double_heading_pane_g1

0x9c6c,	// (0x0002eb60) list_double_heading_pane_g2_ParamLimits

0x9c6c,	// (0x0002eb60) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003450c) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003450c) list_double_heading_pane_g

0x9c78,	// (0x0002eb6c) list_double_heading_pane_t1_ParamLimits

0x9c78,	// (0x0002eb6c) list_double_heading_pane_t1

0x9ac6,	// (0x0002e9ba) list_double_heading_pane_t2_ParamLimits

0x9ac6,	// (0x0002e9ba) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00034511) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00034511) list_double_heading_pane_t

0x9c8e,	// (0x0002eb82) list_double_graphic_heading_pane_g1_ParamLimits

0x9c8e,	// (0x0002eb82) list_double_graphic_heading_pane_g1

0x9c5b,	// (0x0002eb4f) list_double_graphic_heading_pane_g2_ParamLimits

0x9c5b,	// (0x0002eb4f) list_double_graphic_heading_pane_g2

0x9c6c,	// (0x0002eb60) list_double_graphic_heading_pane_g3_ParamLimits

0x9c6c,	// (0x0002eb60) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00034516) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00034516) list_double_graphic_heading_pane_g

0x9c9a,	// (0x0002eb8e) list_double_graphic_heading_pane_t1_ParamLimits

0x9c9a,	// (0x0002eb8e) list_double_graphic_heading_pane_t1

0x9ba7,	// (0x0002ea9b) list_double_graphic_heading_pane_t2_ParamLimits

0x9ba7,	// (0x0002ea9b) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003451d) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003451d) list_double_graphic_heading_pane_t

0x9bd8,	// (0x0002eacc) list_double_time_pane_g1_ParamLimits

0x9bd8,	// (0x0002eacc) list_double_time_pane_g1

0x9a5f,	// (0x0002e953) list_double_time_pane_g2_ParamLimits

0x9a5f,	// (0x0002e953) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00034522) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00034522) list_double_time_pane_g

0x9cb0,	// (0x0002eba4) list_double_time_pane_t1_ParamLimits

0x9cb0,	// (0x0002eba4) list_double_time_pane_t1

0x9cc6,	// (0x0002ebba) list_double_time_pane_t2_ParamLimits

0x9cc6,	// (0x0002ebba) list_double_time_pane_t2

0x9cd8,	// (0x0002ebcc) list_double_time_pane_t3_ParamLimits

0x9cd8,	// (0x0002ebcc) list_double_time_pane_t3

0x9cea,	// (0x0002ebde) list_double_time_pane_t4_ParamLimits

0x9cea,	// (0x0002ebde) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00034527) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00034527) list_double_time_pane_t

0x9cfc,	// (0x0002ebf0) list_setting_pane_g1_ParamLimits

0x9cfc,	// (0x0002ebf0) list_setting_pane_g1

0x9d08,	// (0x0002ebfc) list_setting_pane_g2_ParamLimits

0x9d08,	// (0x0002ebfc) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00034530) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00034530) list_setting_pane_g

0x9d14,	// (0x0002ec08) list_setting_pane_t1_ParamLimits

0x9d14,	// (0x0002ec08) list_setting_pane_t1

0x9d2e,	// (0x0002ec22) list_setting_pane_t2_ParamLimits

0x9d2e,	// (0x0002ec22) list_setting_pane_t2

0x0002,

0xf641,	// (0x00034535) list_setting_pane_t_ParamLimits

0xf641,	// (0x00034535) list_setting_pane_t

0x9d6d,	// (0x0002ec61) set_value_pane_cp_ParamLimits

0x9d6d,	// (0x0002ec61) set_value_pane_cp

0x9d7b,	// (0x0002ec6f) list_setting_number_pane_g1_ParamLimits

0x9d7b,	// (0x0002ec6f) list_setting_number_pane_g1

0x9d87,	// (0x0002ec7b) list_setting_number_pane_g2_ParamLimits

0x9d87,	// (0x0002ec7b) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003453c) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003453c) list_setting_number_pane_g

0x9d93,	// (0x0002ec87) list_setting_number_pane_t1_ParamLimits

0x9d93,	// (0x0002ec87) list_setting_number_pane_t1

0x9dac,	// (0x0002eca0) list_setting_number_pane_t2_ParamLimits

0x9dac,	// (0x0002eca0) list_setting_number_pane_t2

0x9dc6,	// (0x0002ecba) list_setting_number_pane_t3_ParamLimits

0x9dc6,	// (0x0002ecba) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00034541) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00034541) list_setting_number_pane_t

0x9d6d,	// (0x0002ec61) set_value_pane_ParamLimits

0x9d6d,	// (0x0002ec61) set_value_pane

0xd2e2,	// (0x000321d6) bg_set_opt_pane_ParamLimits

0xd2e2,	// (0x000321d6) bg_set_opt_pane

0xeb38,	// (0x00033a2c) set_value_pane_t1

0xd303,	// (0x000321f7) slider_set_pane_cp3

0xd30c,	// (0x00032200) volume_small_pane_cp

0xd315,	// (0x00032209) list_form_gen_pane

0xd31e,	// (0x00032212) scroll_pane_cp8

0x9e09,	// (0x0002ecfd) form_field_data_pane_ParamLimits

0x9e09,	// (0x0002ecfd) form_field_data_pane

0x9e24,	// (0x0002ed18) form_field_data_wide_pane_ParamLimits

0x9e24,	// (0x0002ed18) form_field_data_wide_pane

0xeb56,	// (0x00033a4a) form_field_popup_pane_ParamLimits

0xeb56,	// (0x00033a4a) form_field_popup_pane

0x9e46,	// (0x0002ed3a) form_field_popup_wide_pane_ParamLimits

0x9e46,	// (0x0002ed3a) form_field_popup_wide_pane

0xeb78,	// (0x00033a6c) form_field_slider_pane_ParamLimits

0xeb78,	// (0x00033a6c) form_field_slider_pane

0xeb8b,	// (0x00033a7f) form_field_slider_wide_pane_ParamLimits

0xeb8b,	// (0x00033a7f) form_field_slider_wide_pane

0xd32f,	// (0x00032223) data_form_pane

0x9e71,	// (0x0002ed65) form_field_data_pane_t1

0xd33b,	// (0x0003222f) input_focus_pane

0xeb9e,	// (0x00033a92) data_form_wide_pane

0xebbb,	// (0x00033aaf) form_field_data_wide_pane_t1

0xd0b6,	// (0x00031faa) input_focus_pane_cp6

0x9e8b,	// (0x0002ed7f) form_field_popup_pane_t1

0xd33b,	// (0x0003222f) input_focus_pane_cp7

0xd369,	// (0x0003225d) list_form_pane

0xebe5,	// (0x00033ad9) form_field_popup_wide_pane_t1

0xd33b,	// (0x0003222f) input_focus_pane_cp8

0xd375,	// (0x00032269) list_form_wide_pane

0x9ead,	// (0x0002eda1) form_field_slider_pane_t1_ParamLimits

0x9ead,	// (0x0002eda1) form_field_slider_pane_t1

0x9ec5,	// (0x0002edb9) form_field_slider_pane_t2_ParamLimits

0x9ec5,	// (0x0002edb9) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00034551) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00034551) form_field_slider_pane_t

0xcceb,	// (0x00031bdf) input_focus_pane_cp9_ParamLimits

0xcceb,	// (0x00031bdf) input_focus_pane_cp9

0x9eda,	// (0x0002edce) slider_cont_pane_ParamLimits

0x9eda,	// (0x0002edce) slider_cont_pane

0xd381,	// (0x00032275) form_field_slider_wide_pane_t1_ParamLimits

0xd381,	// (0x00032275) form_field_slider_wide_pane_t1

0xebfa,	// (0x00033aee) form_field_slider_wide_pane_t2_ParamLimits

0xebfa,	// (0x00033aee) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00034556) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00034556) form_field_slider_wide_pane_t

0xcceb,	// (0x00031bdf) input_focus_pane_cp10_ParamLimits

0xcceb,	// (0x00031bdf) input_focus_pane_cp10

0x9eee,	// (0x0002ede2) slider_cont_pane_cp1_ParamLimits

0x9eee,	// (0x0002ede2) slider_cont_pane_cp1

0x9f02,	// (0x0002edf6) slider_form_pane_cp

0xd393,	// (0x00032287) input_focus_pane_g1

0xd39b,	// (0x0003228f) input_focus_pane_g2

0xd3a3,	// (0x00032297) input_focus_pane_g3

0xd3ab,	// (0x0003229f) input_focus_pane_g4

0xd3b3,	// (0x000322a7) input_focus_pane_g5

0xd3bb,	// (0x000322af) input_focus_pane_g6

0xd3c3,	// (0x000322b7) input_focus_pane_g7

0xd3cb,	// (0x000322bf) input_focus_pane_g8

0xd3d3,	// (0x000322c7) input_focus_pane_g9

0xcc93,	// (0x00031b87) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003455b) input_focus_pane_g

0x3a4b,	// (0x0002893f) wait_border_pane_g3_copy1

0x9f0a,	// (0x0002edfe) data_form_pane_t1

0xcc93,	// (0x00031b87) wait_anim_pane_g1_copy1

0xa03a,	// (0x0002ef2e) data_form_wide_pane_t1

0xec0c,	// (0x00033b00) list_form_graphic_pane_cp_ParamLimits

0xec0c,	// (0x00033b00) list_form_graphic_pane_cp

0x49a2,	// (0x00029896) slider_form_pane_g1

0x49ab,	// (0x0002989f) slider_form_pane_g2

0x0006,

0xf965,	// (0x00034859) slider_form_pane_g

0xec0c,	// (0x00033b00) list_form_graphic_pane_ParamLimits

0xec0c,	// (0x00033b00) list_form_graphic_pane

0xec1e,	// (0x00033b12) list_form_graphic_pane_g1

0xec26,	// (0x00033b1a) list_form_graphic_pane_t1_ParamLimits

0xec26,	// (0x00033b1a) list_form_graphic_pane_t1

0xccf9,	// (0x00031bed) list_highlight_pane_cp5_ParamLimits

0xccf9,	// (0x00031bed) list_highlight_pane_cp5

0x9f24,	// (0x0002ee18) find_pane_g1

0xd3db,	// (0x000322cf) input_find_pane

0x9f2d,	// (0x0002ee21) input_find_pane_g1_ParamLimits

0x9f2d,	// (0x0002ee21) input_find_pane_g1

0x9f39,	// (0x0002ee2d) input_find_pane_t1_ParamLimits

0x9f39,	// (0x0002ee2d) input_find_pane_t1

0x9f4e,	// (0x0002ee42) input_find_pane_t2_ParamLimits

0x9f4e,	// (0x0002ee42) input_find_pane_t2

0x0001,

0xf67c,	// (0x00034570) input_find_pane_t_ParamLimits

0xf67c,	// (0x00034570) input_find_pane_t

0xd3e4,	// (0x000322d8) input_focus_pane_cp5_ParamLimits

0xd3e4,	// (0x000322d8) input_focus_pane_cp5

0xd3f7,	// (0x000322eb) bg_popup_window_pane_cp2_ParamLimits

0xd3f7,	// (0x000322eb) bg_popup_window_pane_cp2

0xd404,	// (0x000322f8) listscroll_menu_pane_ParamLimits

0xd404,	// (0x000322f8) listscroll_menu_pane

0xa8bf,	// (0x0002f7b3) popup_submenu_window_ParamLimits

0xa8bf,	// (0x0002f7b3) popup_submenu_window

0xd410,	// (0x00032304) find_popup_pane_g1

0xd418,	// (0x0003230c) input_popup_find_pane_cp

0xd422,	// (0x00032316) input_focus_pane_cp4_ParamLimits

0xd422,	// (0x00032316) input_focus_pane_cp4

0xd430,	// (0x00032324) input_popup_find_pane_t1_ParamLimits

0xd430,	// (0x00032324) input_popup_find_pane_t1

0xcc9d,	// (0x00031b91) bg_popup_sub_pane_cp

0xd45e,	// (0x00032352) listscroll_popup_sub_pane

0xd466,	// (0x0003235a) list_submenu_pane_ParamLimits

0xd466,	// (0x0003235a) list_submenu_pane

0xd477,	// (0x0003236b) scroll_pane_cp4

0xd47f,	// (0x00032373) list_single_popup_submenu_pane_ParamLimits

0xd47f,	// (0x00032373) list_single_popup_submenu_pane

0xd494,	// (0x00032388) list_single_popup_submenu_pane_g1

0xd49c,	// (0x00032390) list_single_popup_submenu_pane_t1_ParamLimits

0xd49c,	// (0x00032390) list_single_popup_submenu_pane_t1

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp1_ParamLimits

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp1

0xa8fd,	// (0x0002f7f1) tabs_2_active_pane_g1

0xa905,	// (0x0002f7f9) tabs_2_active_pane_t1

0xcceb,	// (0x00031bdf) bg_passive_tab_pane_cp1_ParamLimits

0xcceb,	// (0x00031bdf) bg_passive_tab_pane_cp1

0xa8fd,	// (0x0002f7f1) tabs_2_passive_pane_g1

0xa905,	// (0x0002f7f9) tabs_2_passive_pane_t1

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp4

0xa917,	// (0x0002f80b) tabs_2_long_active_pane_t1

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp4

0x16dc,	// (0x000265d0) list_single_midp_graphic_pane_g4_ParamLimits

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp5

0xa92a,	// (0x0002f81e) tabs_3_long_active_pane_t1

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp5

0x16dc,	// (0x000265d0) list_single_midp_graphic_pane_g4

0xccf9,	// (0x00031bed) bg_popup_window_pane_cp13_ParamLimits

0xccf9,	// (0x00031bed) bg_popup_window_pane_cp13

0xd4ba,	// (0x000323ae) listscroll_popup_fast_pane_ParamLimits

0xd4ba,	// (0x000323ae) listscroll_popup_fast_pane

0xd4c9,	// (0x000323bd) grid_popup_fast_pane_ParamLimits

0xd4c9,	// (0x000323bd) grid_popup_fast_pane

0xd4db,	// (0x000323cf) scroll_pane_cp9_ParamLimits

0xd4db,	// (0x000323cf) scroll_pane_cp9

0x6328,	// (0x0002b21c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6328,	// (0x0002b21c) list_single_graphic_hl_pane_t1_cp2

0xd4ff,	// (0x000323f3) input_focus_pane_cp20_ParamLimits

0xd4ff,	// (0x000323f3) input_focus_pane_cp20

0xd50d,	// (0x00032401) query_popup_data_pane_t1_ParamLimits

0xd50d,	// (0x00032401) query_popup_data_pane_t1

0xd520,	// (0x00032414) query_popup_data_pane_t2_ParamLimits

0xd520,	// (0x00032414) query_popup_data_pane_t2

0xd566,	// (0x0003245a) query_popup_data_pane_t3_ParamLimits

0xd566,	// (0x0003245a) query_popup_data_pane_t3

0xd5a7,	// (0x0003249b) query_popup_data_pane_t4_ParamLimits

0xd5a7,	// (0x0003249b) query_popup_data_pane_t4

0xd5e3,	// (0x000324d7) query_popup_data_pane_t5_ParamLimits

0xd5e3,	// (0x000324d7) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00034575) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00034575) query_popup_data_pane_t

0xd393,	// (0x00032287) bg_set_opt_pane_g1

0xd39b,	// (0x0003228f) bg_set_opt_pane_g2

0xd3a3,	// (0x00032297) bg_set_opt_pane_g3

0xd3ab,	// (0x0003229f) bg_set_opt_pane_g4

0xd3b3,	// (0x000322a7) bg_set_opt_pane_g5

0xd3bb,	// (0x000322af) bg_set_opt_pane_g6

0xd3c3,	// (0x000322b7) bg_set_opt_pane_g7

0xd3cb,	// (0x000322bf) bg_set_opt_pane_g8

0xd3d3,	// (0x000322c7) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00034580) bg_set_opt_pane_g

0x0a39,	// (0x0002592d) control_top_pane_stacon_ParamLimits

0x0a39,	// (0x0002592d) control_top_pane_stacon

0x0a8c,	// (0x00025980) signal_pane_stacon_ParamLimits

0x0a8c,	// (0x00025980) signal_pane_stacon

0x0ab1,	// (0x000259a5) stacon_top_pane_g1_ParamLimits

0x0ab1,	// (0x000259a5) stacon_top_pane_g1

0x0ad3,	// (0x000259c7) title_pane_stacon_ParamLimits

0x0ad3,	// (0x000259c7) title_pane_stacon

0x0afd,	// (0x000259f1) uni_indicator_pane_stacon_ParamLimits

0x0afd,	// (0x000259f1) uni_indicator_pane_stacon

0x0b12,	// (0x00025a06) battery_pane_stacon_ParamLimits

0x0b12,	// (0x00025a06) battery_pane_stacon

0x0b56,	// (0x00025a4a) control_bottom_pane_stacon_ParamLimits

0x0b56,	// (0x00025a4a) control_bottom_pane_stacon

0x0b79,	// (0x00025a6d) navi_pane_stacon_ParamLimits

0x0b79,	// (0x00025a6d) navi_pane_stacon

0x0b9c,	// (0x00025a90) stacon_bottom_pane_g1_ParamLimits

0x0b9c,	// (0x00025a90) stacon_bottom_pane_g1

0x0213,	// (0x00025107) aid_levels_signal_lsc_ParamLimits

0x0213,	// (0x00025107) aid_levels_signal_lsc

0x022a,	// (0x0002511e) signal_pane_stacon_g1_ParamLimits

0x022a,	// (0x0002511e) signal_pane_stacon_g1

0x023e,	// (0x00025132) signal_pane_stacon_g2_ParamLimits

0x023e,	// (0x00025132) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00034593) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00034593) signal_pane_stacon_g

0x0273,	// (0x00025167) title_pane_stacon_t1_ParamLimits

0x0273,	// (0x00025167) title_pane_stacon_t1

0xd627,	// (0x0003251b) uni_indicator_pane_stacon_g1

0xd631,	// (0x00032525) uni_indicator_pane_stacon_g2

0xd63b,	// (0x0003252f) uni_indicator_pane_stacon_g3

0xd645,	// (0x00032539) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003459f) uni_indicator_pane_stacon_g

0x0298,	// (0x0002518c) control_top_pane_stacon_g1

0x02a0,	// (0x00025194) control_top_pane_stacon_t1_ParamLimits

0x02a0,	// (0x00025194) control_top_pane_stacon_t1

0x02d7,	// (0x000251cb) aid_levels_battery_lsc_ParamLimits

0x02d7,	// (0x000251cb) aid_levels_battery_lsc

0x02ef,	// (0x000251e3) battery_pane_stacon_g1_ParamLimits

0x02ef,	// (0x000251e3) battery_pane_stacon_g1

0x0301,	// (0x000251f5) battery_pane_stacon_g2_ParamLimits

0x0301,	// (0x000251f5) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x000345a8) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x000345a8) battery_pane_stacon_g

0x033f,	// (0x00025233) navi_icon_pane_stacon

0x0353,	// (0x00025247) navi_navi_pane_stacon

0x033f,	// (0x00025233) navi_text_pane_stacon

0x0369,	// (0x0002525d) control_bottom_pane_stacon_g1

0x0371,	// (0x00025265) control_bottom_pane_stacon_t1_ParamLimits

0x0371,	// (0x00025265) control_bottom_pane_stacon_t1

0xa93c,	// (0x0002f830) grid_app_pane_ParamLimits

0xa93c,	// (0x0002f830) grid_app_pane

0xa974,	// (0x0002f868) scroll_pane_cp15_ParamLimits

0xa974,	// (0x0002f868) scroll_pane_cp15

0xa989,	// (0x0002f87d) cell_app_pane_ParamLimits

0xa989,	// (0x0002f87d) cell_app_pane

0xa9d4,	// (0x0002f8c8) cell_app_pane_g1_ParamLimits

0xa9d4,	// (0x0002f8c8) cell_app_pane_g1

0x042d,	// (0x00025321) cell_app_pane_g2_ParamLimits

0x042d,	// (0x00025321) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x000345ad) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x000345ad) cell_app_pane_g

0xa9f8,	// (0x0002f8ec) cell_app_pane_t1_ParamLimits

0xa9f8,	// (0x0002f8ec) cell_app_pane_t1

0x046a,	// (0x0002535e) grid_highlight_pane_ParamLimits

0x046a,	// (0x0002535e) grid_highlight_pane

0xd393,	// (0x00032287) cell_highlight_pane_g1

0xd39b,	// (0x0003228f) cell_highlight_pane_g2

0xd3a3,	// (0x00032297) cell_highlight_pane_g3

0xd3ab,	// (0x0003229f) cell_highlight_pane_g4

0xd3b3,	// (0x000322a7) cell_highlight_pane_g5

0xd3bb,	// (0x000322af) cell_highlight_pane_g6

0xd3c3,	// (0x000322b7) cell_highlight_pane_g7

0xd3cb,	// (0x000322bf) cell_highlight_pane_g8

0xd3d3,	// (0x000322c7) cell_highlight_pane_g9

0xcc93,	// (0x00031b87) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003455b) cell_highlight_pane_g

0x048e,	// (0x00025382) bg_scroll_pane

0x04ad,	// (0x000253a1) scroll_handle_pane

0x04fe,	// (0x000253f2) scroll_bg_pane_g1

0x0513,	// (0x00025407) scroll_bg_pane_g2

0x052b,	// (0x0002541f) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x000345b2) scroll_bg_pane_g

0x0540,	// (0x00025434) scroll_handle_focus_pane_ParamLimits

0x0540,	// (0x00025434) scroll_handle_focus_pane

0x04fe,	// (0x000253f2) scroll_handle_pane_g1

0x054d,	// (0x00025441) scroll_handle_pane_g2

0x052b,	// (0x0002541f) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x000345b9) scroll_handle_pane_g

0xd422,	// (0x00032316) bg_popup_sub_pane_cp21_ParamLimits

0xd422,	// (0x00032316) bg_popup_sub_pane_cp21

0x0561,	// (0x00025455) popup_fep_japan_predictive_window_t1_ParamLimits

0x0561,	// (0x00025455) popup_fep_japan_predictive_window_t1

0x0578,	// (0x0002546c) popup_fep_japan_predictive_window_t2_ParamLimits

0x0578,	// (0x0002546c) popup_fep_japan_predictive_window_t2

0x05ab,	// (0x0002549f) popup_fep_japan_predictive_window_t3_ParamLimits

0x05ab,	// (0x0002549f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x000345c0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x000345c0) popup_fep_japan_predictive_window_t

0xcc9d,	// (0x00031b91) bg_popup_sub_pane_cp23

0x05e2,	// (0x000254d6) listscroll_japin_cand_pane

0x05ea,	// (0x000254de) popup_fep_japan_candidate_window_t1

0x05f8,	// (0x000254ec) candidate_pane_ParamLimits

0x05f8,	// (0x000254ec) candidate_pane

0x060a,	// (0x000254fe) scroll_pane_cp30

0x0614,	// (0x00025508) list_single_popup_jap_candidate_pane_ParamLimits

0x0614,	// (0x00025508) list_single_popup_jap_candidate_pane

0xcc9d,	// (0x00031b91) list_highlight_pane_cp30

0x0628,	// (0x0002551c) list_single_popup_jap_candidate_pane_t1

0xaa32,	// (0x0002f926) level_1_signal

0xaa44,	// (0x0002f938) level_2_signal

0xaa57,	// (0x0002f94b) level_3_signal

0xaa6a,	// (0x0002f95e) level_4_signal

0xaa7d,	// (0x0002f971) level_5_signal

0xaa90,	// (0x0002f984) level_6_signal

0xaaa3,	// (0x0002f997) level_7_signal

0xaa32,	// (0x0002f926) level_1_battery

0xaa44,	// (0x0002f938) level_2_battery

0xaa57,	// (0x0002f94b) level_3_battery

0xaa6a,	// (0x0002f95e) level_4_battery

0xaa7d,	// (0x0002f971) level_5_battery

0xaa90,	// (0x0002f984) level_6_battery

0xaaa3,	// (0x0002f997) level_7_battery

0x06c9,	// (0x000255bd) list_menu_pane_ParamLimits

0x06c9,	// (0x000255bd) list_menu_pane

0x06df,	// (0x000255d3) scroll_pane_cp25_ParamLimits

0x06df,	// (0x000255d3) scroll_pane_cp25

0x06f8,	// (0x000255ec) list_double2_graphic_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double2_graphic_pane_cp2

0x06f8,	// (0x000255ec) list_double2_large_graphic_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double2_large_graphic_pane_cp2

0x06f8,	// (0x000255ec) list_double2_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double2_pane_cp2

0x06f8,	// (0x000255ec) list_double_graphic_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double_graphic_pane_cp2

0x06f8,	// (0x000255ec) list_double_large_graphic_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double_large_graphic_pane_cp2

0x06f8,	// (0x000255ec) list_double_number_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double_number_pane_cp2

0x06f8,	// (0x000255ec) list_double_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double_pane_cp2

0xaab6,	// (0x0002f9aa) list_single_2graphic_pane_cp2_ParamLimits

0xaab6,	// (0x0002f9aa) list_single_2graphic_pane_cp2

0xaab6,	// (0x0002f9aa) list_single_graphic_heading_pane_cp2_ParamLimits

0xaab6,	// (0x0002f9aa) list_single_graphic_heading_pane_cp2

0xaab6,	// (0x0002f9aa) list_single_graphic_pane_cp2_ParamLimits

0xaab6,	// (0x0002f9aa) list_single_graphic_pane_cp2

0xaab6,	// (0x0002f9aa) list_single_heading_pane_cp2_ParamLimits

0xaab6,	// (0x0002f9aa) list_single_heading_pane_cp2

0x073b,	// (0x0002562f) list_single_large_graphic_pane_cp2_ParamLimits

0x073b,	// (0x0002562f) list_single_large_graphic_pane_cp2

0xaab6,	// (0x0002f9aa) list_single_number_heading_pane_cp2_ParamLimits

0xaab6,	// (0x0002f9aa) list_single_number_heading_pane_cp2

0xaab6,	// (0x0002f9aa) list_single_number_pane_cp2_ParamLimits

0xaab6,	// (0x0002f9aa) list_single_number_pane_cp2

0xaaca,	// (0x0002f9be) list_single_pane_cp2_ParamLimits

0xaaca,	// (0x0002f9be) list_single_pane_cp2

0x0821,	// (0x00025715) bg_popup_sub_pane_cp22

0x0846,	// (0x0002573a) popup_side_volume_key_window_g1

0x0870,	// (0x00025764) popup_side_volume_key_window_t1

0x088e,	// (0x00025782) volume_small_pane_cp1

0xcceb,	// (0x00031bdf) bg_popup_sub_pane_cp24_ParamLimits

0xcceb,	// (0x00031bdf) bg_popup_sub_pane_cp24

0x0896,	// (0x0002578a) fep_china_uni_candidate_pane_ParamLimits

0x0896,	// (0x0002578a) fep_china_uni_candidate_pane

0x08aa,	// (0x0002579e) fep_china_uni_entry_pane

0x08ba,	// (0x000257ae) popup_fep_china_uni_window_g1

0x08d6,	// (0x000257ca) fep_china_uni_entry_pane_g1

0x08e0,	// (0x000257d4) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x000345f1) fep_china_uni_entry_pane_g

0x08ea,	// (0x000257de) fep_entry_item_pane

0x08f4,	// (0x000257e8) fep_candidate_item_pane

0x08fc,	// (0x000257f0) fep_china_uni_candidate_pane_g1

0x0906,	// (0x000257fa) fep_china_uni_candidate_pane_g2

0x090e,	// (0x00025802) fep_china_uni_candidate_pane_g3

0x0916,	// (0x0002580a) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x000345f6) fep_china_uni_candidate_pane_g

0xcc93,	// (0x00031b87) fep_entry_item_pane_g1

0x0920,	// (0x00025814) fep_entry_item_pane_t1_ParamLimits

0x0920,	// (0x00025814) fep_entry_item_pane_t1

0x0936,	// (0x0002582a) fep_candidate_item_pane_t1_ParamLimits

0x0936,	// (0x0002582a) fep_candidate_item_pane_t1

0x094b,	// (0x0002583f) fep_candidate_item_pane_t2_ParamLimits

0x094b,	// (0x0002583f) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x000345ff) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x000345ff) fep_candidate_item_pane_t

0xccf9,	// (0x00031bed) list_highlight_pane_cp31_ParamLimits

0xccf9,	// (0x00031bed) list_highlight_pane_cp31

0x095d,	// (0x00025851) level_1_signal_lsc

0x0966,	// (0x0002585a) level_2_signal_lsc

0x096f,	// (0x00025863) level_3_signal_lsc

0x0978,	// (0x0002586c) level_4_signal_lsc

0x0981,	// (0x00025875) level_5_signal_lsc

0x098a,	// (0x0002587e) level_6_signal_lsc

0x0993,	// (0x00025887) level_7_signal_lsc

0x0993,	// (0x00025887) level_1_battery_lsc

0x099c,	// (0x00025890) level_2_battery_lsc

0x09a5,	// (0x00025899) level_3_battery_lsc

0x09ae,	// (0x000258a2) level_4_battery_lsc

0x09b7,	// (0x000258ab) level_5_battery_lsc

0x09c0,	// (0x000258b4) level_6_battery_lsc

0x095d,	// (0x00025851) level_7_battery_lsc

0x09c9,	// (0x000258bd) scroll_handle_focus_pane_g1

0x09d2,	// (0x000258c6) scroll_handle_focus_pane_g2

0x09db,	// (0x000258cf) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00034604) scroll_handle_focus_pane_g

0x9f63,	// (0x0002ee57) list_single_2graphic_pane_g1_ParamLimits

0x9f63,	// (0x0002ee57) list_single_2graphic_pane_g1

0x9a28,	// (0x0002e91c) list_single_2graphic_pane_g2_ParamLimits

0x9a28,	// (0x0002e91c) list_single_2graphic_pane_g2

0xeaa9,	// (0x0003399d) list_single_2graphic_pane_g3_ParamLimits

0xeaa9,	// (0x0003399d) list_single_2graphic_pane_g3

0x9f6f,	// (0x0002ee63) list_single_2graphic_pane_g4_ParamLimits

0x9f6f,	// (0x0002ee63) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003460b) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003460b) list_single_2graphic_pane_g

0x9f7b,	// (0x0002ee6f) list_single_2graphic_pane_t1_ParamLimits

0x9f7b,	// (0x0002ee6f) list_single_2graphic_pane_t1

0x9fa9,	// (0x0002ee9d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9fa9,	// (0x0002ee9d) list_double2_graphic_large_graphic_pane_g1

0x9a93,	// (0x0002e987) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a93,	// (0x0002e987) list_double2_graphic_large_graphic_pane_g2

0x9aa4,	// (0x0002e998) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9aa4,	// (0x0002e998) list_double2_graphic_large_graphic_pane_g3

0x9fbb,	// (0x0002eeaf) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9fbb,	// (0x0002eeaf) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00034614) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00034614) list_double2_graphic_large_graphic_pane_g

0x9fc7,	// (0x0002eebb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9fc7,	// (0x0002eebb) list_double2_graphic_large_graphic_pane_t1

0x9fdd,	// (0x0002eed1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9fdd,	// (0x0002eed1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003461d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003461d) list_double2_graphic_large_graphic_pane_t

0x0c5f,	// (0x00025b53) popup_fast_swap_window_ParamLimits

0x0c5f,	// (0x00025b53) popup_fast_swap_window

0x0c7d,	// (0x00025b71) popup_side_volume_key_window

0x0c9b,	// (0x00025b8f) stacon_top_pane

0x0ca5,	// (0x00025b99) status_pane_ParamLimits

0x0ca5,	// (0x00025b99) status_pane

0xcc89,	// (0x00031b7d) status_small_pane

0xcc9d,	// (0x00031b91) control_pane

0xcc9d,	// (0x00031b91) stacon_bottom_pane

0xd31e,	// (0x00032212) scroll_pane_cp121

0xd315,	// (0x00032209) set_content_pane

0xab59,	// (0x0002fa4d) bg_active_tab_pane_g1_cp1

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp1

0xab62,	// (0x0002fa56) bg_active_tab_pane_g3_cp1

0xab59,	// (0x0002fa4d) bg_passive_tab_pane_g1_cp1

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp1

0xab62,	// (0x0002fa56) bg_passive_tab_pane_g3_cp1

0xab6b,	// (0x0002fa5f) bg_active_tab_pane_g1_cp2

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp2

0xab74,	// (0x0002fa68) bg_active_tab_pane_g3_cp2

0xab6b,	// (0x0002fa5f) bg_passive_tab_pane_g1_cp2

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp2

0xab74,	// (0x0002fa68) bg_passive_tab_pane_g3_cp2

0xab7d,	// (0x0002fa71) bg_active_tab_pane_g1_cp3

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp3

0xab86,	// (0x0002fa7a) bg_active_tab_pane_g3_cp3

0xab7d,	// (0x0002fa71) bg_passive_tab_pane_g1_cp3

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp3

0xab86,	// (0x0002fa7a) bg_passive_tab_pane_g3_cp3

0xab8f,	// (0x0002fa83) bg_active_tab_pane_g1_cp4

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp4

0xab98,	// (0x0002fa8c) bg_active_tab_pane_g3_cp4

0xab8f,	// (0x0002fa83) bg_passive_tab_pane_g1_cp4

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp4

0xab98,	// (0x0002fa8c) bg_passive_tab_pane_g3_cp4

0x0bb8,	// (0x00025aac) bg_active_tab_pane_g1_cp5

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp5

0x0bc1,	// (0x00025ab5) bg_active_tab_pane_g3_cp5

0x0bb8,	// (0x00025aac) bg_passive_tab_pane_g1_cp5

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp5

0x0bc1,	// (0x00025ab5) bg_passive_tab_pane_g3_cp5

0x4fd0,	// (0x00029ec4) list_set_graphic_pane_ParamLimits

0x4fd0,	// (0x00029ec4) list_set_graphic_pane

0xcc9d,	// (0x00031b91) bg_set_opt_pane_cp4

0x0be0,	// (0x00025ad4) list_set_graphic_pane_g1_ParamLimits

0x0be0,	// (0x00025ad4) list_set_graphic_pane_g1

0x0bec,	// (0x00025ae0) list_set_graphic_pane_g2_ParamLimits

0x0bec,	// (0x00025ae0) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00034622) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00034622) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x000349a7) volume_small_pane_cp_g

0x0c10,	// (0x00025b04) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0c10,	// (0x00025b04) list_double2_large_graphic_pane_g1_cp2

0x0c1e,	// (0x00025b12) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0c1e,	// (0x00025b12) list_double2_large_graphic_pane_g2_cp2

0x0c2f,	// (0x00025b23) list_double2_large_graphic_pane_g3_cp2

0x0c37,	// (0x00025b2b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0c37,	// (0x00025b2b) list_double2_large_graphic_pane_t1_cp2

0x0c4d,	// (0x00025b41) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0c4d,	// (0x00025b41) list_double2_large_graphic_pane_t2_cp2

0x452f,	// (0x00029423) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x452f,	// (0x00029423) list_double_large_graphic_pane_g1_cp2

0x4542,	// (0x00029436) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4542,	// (0x00029436) list_double_large_graphic_pane_g2_cp2

0x0dc3,	// (0x00025cb7) list_double_large_graphic_pane_g3_cp2

0x4553,	// (0x00029447) list_double_large_graphic_pane_g4_cp

0x455b,	// (0x0002944f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x455b,	// (0x0002944f) list_double_large_graphic_pane_t1_cp2

0x4572,	// (0x00029466) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4572,	// (0x00029466) list_double_large_graphic_pane_t2_cp2

0x0cb3,	// (0x00025ba7) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0cb3,	// (0x00025ba7) list_double2_graphic_pane_g1_cp2

0x0cc1,	// (0x00025bb5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0cc1,	// (0x00025bb5) list_double2_graphic_pane_g2_cp2

0x0cd2,	// (0x00025bc6) list_double2_graphic_pane_g3_cp2

0x0cdc,	// (0x00025bd0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0cdc,	// (0x00025bd0) list_double2_graphic_pane_t1_cp2

0x0cf2,	// (0x00025be6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0cf2,	// (0x00025be6) list_double2_graphic_pane_t2_cp2

0x0d04,	// (0x00025bf8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0d04,	// (0x00025bf8) list_single_number_heading_pane_g1_cp2

0x0d10,	// (0x00025c04) list_single_number_heading_pane_g2_cp2

0x0d18,	// (0x00025c0c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0d18,	// (0x00025c0c) list_single_number_heading_pane_t1_cp2

0x0d2e,	// (0x00025c22) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0d2e,	// (0x00025c22) list_single_number_heading_pane_t2_cp2

0x0d42,	// (0x00025c36) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0d42,	// (0x00025c36) list_single_number_heading_pane_t3_cp2

0x0d04,	// (0x00025bf8) list_single_heading_pane_g1_cp2_ParamLimits

0x0d04,	// (0x00025bf8) list_single_heading_pane_g1_cp2

0x0d10,	// (0x00025c04) list_single_heading_pane_g2_cp2

0x0d18,	// (0x00025c0c) list_single_heading_pane_t1_cp2_ParamLimits

0x0d18,	// (0x00025c0c) list_single_heading_pane_t1_cp2

0x4329,	// (0x0002921d) list_single_heading_pane_t2_cp2_ParamLimits

0x4329,	// (0x0002921d) list_single_heading_pane_t2_cp2

0x4271,	// (0x00029165) list_double_graphic_pane_g1_cp2_ParamLimits

0x4271,	// (0x00029165) list_double_graphic_pane_g1_cp2

0x427d,	// (0x00029171) list_double_graphic_pane_g2_cp2_ParamLimits

0x427d,	// (0x00029171) list_double_graphic_pane_g2_cp2

0x428c,	// (0x00029180) list_double_graphic_pane_g3_cp2

0x4294,	// (0x00029188) list_double_graphic_pane_t1_cp2_ParamLimits

0x4294,	// (0x00029188) list_double_graphic_pane_t1_cp2

0x42aa,	// (0x0002919e) list_double_graphic_pane_t2_cp2_ParamLimits

0x42aa,	// (0x0002919e) list_double_graphic_pane_t2_cp2

0x0db7,	// (0x00025cab) list_double_number_pane_g1_cp2_ParamLimits

0x0db7,	// (0x00025cab) list_double_number_pane_g1_cp2

0x0dc3,	// (0x00025cb7) list_double_number_pane_g2_cp2

0x4235,	// (0x00029129) list_double_number_pane_t1_cp2_ParamLimits

0x4235,	// (0x00029129) list_double_number_pane_t1_cp2

0x4249,	// (0x0002913d) list_double_number_pane_t2_cp2_ParamLimits

0x4249,	// (0x0002913d) list_double_number_pane_t2_cp2

0x425f,	// (0x00029153) list_double_number_pane_t3_cp2_ParamLimits

0x425f,	// (0x00029153) list_double_number_pane_t3_cp2

0x411e,	// (0x00029012) list_single_graphic_pane_g1_cp2_ParamLimits

0x411e,	// (0x00029012) list_single_graphic_pane_g1_cp2

0x0e28,	// (0x00025d1c) list_single_graphic_pane_g2_cp2_ParamLimits

0x0e28,	// (0x00025d1c) list_single_graphic_pane_g2_cp2

0x0e34,	// (0x00025d28) list_single_graphic_pane_g3_cp2

0x40f4,	// (0x00028fe8) list_single_graphic_pane_t1_cp2_ParamLimits

0x40f4,	// (0x00028fe8) list_single_graphic_pane_t1_cp2

0x0e28,	// (0x00025d1c) list_single_number_pane_g1_cp2_ParamLimits

0x0e28,	// (0x00025d1c) list_single_number_pane_g1_cp2

0x0e34,	// (0x00025d28) list_single_number_pane_g2_cp2

0x40f4,	// (0x00028fe8) list_single_number_pane_t1_cp2_ParamLimits

0x40f4,	// (0x00028fe8) list_single_number_pane_t1_cp2

0x410a,	// (0x00028ffe) list_single_number_pane_t2_cp2_ParamLimits

0x410a,	// (0x00028ffe) list_single_number_pane_t2_cp2

0x0c1e,	// (0x00025b12) list_double2_pane_g1_cp2_ParamLimits

0x0c1e,	// (0x00025b12) list_double2_pane_g1_cp2

0x0c2f,	// (0x00025b23) list_double2_pane_g2_cp2

0x0d8f,	// (0x00025c83) list_double2_pane_t1_cp2_ParamLimits

0x0d8f,	// (0x00025c83) list_double2_pane_t1_cp2

0x0da5,	// (0x00025c99) list_double2_pane_t2_cp2_ParamLimits

0x0da5,	// (0x00025c99) list_double2_pane_t2_cp2

0x0db7,	// (0x00025cab) list_double_pane_g1_cp2_ParamLimits

0x0db7,	// (0x00025cab) list_double_pane_g1_cp2

0x0dc3,	// (0x00025cb7) list_double_pane_g2_cp2

0x0dcb,	// (0x00025cbf) list_double_pane_t1_cp2_ParamLimits

0x0dcb,	// (0x00025cbf) list_double_pane_t1_cp2

0x0de1,	// (0x00025cd5) list_double_pane_t2_cp2_ParamLimits

0x0de1,	// (0x00025cd5) list_double_pane_t2_cp2

0x0e18,	// (0x00025d0c) list_single_pane_cp2_g3

0x0e28,	// (0x00025d1c) list_single_pane_g1_cp2_ParamLimits

0x0e28,	// (0x00025d1c) list_single_pane_g1_cp2

0x0e34,	// (0x00025d28) list_single_pane_g2_cp2

0x0e3c,	// (0x00025d30) list_single_pane_t1_cp2_ParamLimits

0x0e3c,	// (0x00025d30) list_single_pane_t1_cp2

0x0e54,	// (0x00025d48) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0e54,	// (0x00025d48) list_single_large_graphic_pane_g1_cp2

0x0e62,	// (0x00025d56) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0e62,	// (0x00025d56) list_single_large_graphic_pane_g2_cp2

0x2b6d,	// (0x00027a61) list_single_large_graphic_pane_g3_cp2

0x2b75,	// (0x00027a69) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2b75,	// (0x00027a69) list_single_large_graphic_pane_g4_cp1

0x2b8f,	// (0x00027a83) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2b8f,	// (0x00027a83) list_single_large_graphic_pane_t1_cp2

0x40be,	// (0x00028fb2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x40be,	// (0x00028fb2) list_single_graphic_heading_pane_g1_cp2

0x408b,	// (0x00028f7f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x408b,	// (0x00028f7f) list_single_graphic_heading_pane_g4_cp2

0x0e34,	// (0x00025d28) list_single_graphic_heading_pane_g5_cp2

0x40ca,	// (0x00028fbe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x40ca,	// (0x00028fbe) list_single_graphic_heading_pane_t1_cp2

0x40e0,	// (0x00028fd4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x40e0,	// (0x00028fd4) list_single_graphic_heading_pane_t2_cp2

0x407f,	// (0x00028f73) list_single_2graphic_pane_g1_cp2_ParamLimits

0x407f,	// (0x00028f73) list_single_2graphic_pane_g1_cp2

0x408b,	// (0x00028f7f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x408b,	// (0x00028f7f) list_single_2graphic_pane_g2_cp2

0x0e34,	// (0x00025d28) list_single_2graphic_pane_g3_cp2

0x409c,	// (0x00028f90) list_single_2graphic_pane_g4_cp2_ParamLimits

0x409c,	// (0x00028f90) list_single_2graphic_pane_g4_cp2

0x40a8,	// (0x00028f9c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x40a8,	// (0x00028f9c) list_single_2graphic_pane_t1_cp2

0xcc93,	// (0x00031b87) list_highlight_pane_g10_cp1

0x3c57,	// (0x00028b4b) list_highlight_pane_g1_cp1

0x3c5f,	// (0x00028b53) list_highlight_pane_g2_cp1

0x3c67,	// (0x00028b5b) list_highlight_pane_g3_cp1

0x3c6f,	// (0x00028b63) list_highlight_pane_g4_cp1

0x3c77,	// (0x00028b6b) list_highlight_pane_g5_cp1

0x3c7f,	// (0x00028b73) list_highlight_pane_g6_cp1

0x3c87,	// (0x00028b7b) list_highlight_pane_g7_cp1

0x3c8f,	// (0x00028b83) list_highlight_pane_g8_cp1

0x3c97,	// (0x00028b8b) list_highlight_pane_g9_cp1

0xba08,	// (0x000308fc) form_field_slider_pane_t3

0xba16,	// (0x0003090a) form_field_slider_pane_t4

0x3b93,	// (0x00028a87) slider_form_pane_ParamLimits

0x3b93,	// (0x00028a87) slider_form_pane

0xcc9d,	// (0x00031b91) control_abbreviations

0xcc9d,	// (0x00031b91) control_conventions

0xcc9d,	// (0x00031b91) control_definitions

0xcc9d,	// (0x00031b91) format_table_attribute

0x437f,	// (0x00029273) bg_popup_preview_window_pane_g9

0xcc9d,	// (0x00031b91) format_table_data2

0xcc9d,	// (0x00031b91) format_table_data3

0xcc9d,	// (0x00031b91) format_table_data_example

0x0008,

0xcc9d,	// (0x00031b91) intro_purpose

0xf8c5,	// (0x000347b9) bg_popup_preview_window_pane_g

0xcc9d,	// (0x00031b91) texts_category

0xcc9d,	// (0x00031b91) texts_graphics

0x2ba5,	// (0x00027a99) text_digital

0x2bb4,	// (0x00027aa8) text_primary

0x2bc3,	// (0x00027ab7) text_primary_small

0x2bd2,	// (0x00027ac6) text_secondary

0x2be1,	// (0x00027ad5) text_title

0x4af9,	// (0x000299ed) bg_passive_tab_pane_g1_cp3_srt

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp3_srt

0x4b02,	// (0x000299f6) bg_passive_tab_pane_g3_cp3_srt

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp3_srt_ParamLimits

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp3_srt

0x4b0b,	// (0x000299ff) tabs_4_active_pane_srt_g1

0xbf45,	// (0x00030e39) tabs_4_active_pane_srt_t1_ParamLimits

0xbf45,	// (0x00030e39) tabs_4_active_pane_srt_t1

0x4af9,	// (0x000299ed) bg_active_tab_pane_g1_cp3_copy1

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp3_copy1

0x4b02,	// (0x000299f6) bg_active_tab_pane_g3_cp3_copy1

0xccf9,	// (0x00031bed) tabs_2_long_active_pane_srt_ParamLimits

0xccf9,	// (0x00031bed) tabs_2_long_active_pane_srt

0xccf9,	// (0x00031bed) tabs_2_long_passive_pane_srt_ParamLimits

0xccf9,	// (0x00031bed) tabs_2_long_passive_pane_srt

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp4_srt

0x47b9,	// (0x000296ad) bg_passive_tab_pane_g1_cp4_srt

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp4_srt

0x47c2,	// (0x000296b6) bg_passive_tab_pane_g3_cp4_srt

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp4_srt_ParamLimits

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp4_srt

0xbd3d,	// (0x00030c31) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbd3d,	// (0x00030c31) tabs_2_long_active_pane_srt_t1

0x47b9,	// (0x000296ad) bg_active_tab_pane_g1_cp4_srt

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp4_srt

0x47c2,	// (0x000296b6) bg_active_tab_pane_g3_cp4_srt

0xcceb,	// (0x00031bdf) tabs_3_long_active_pane_srt_ParamLimits

0xcceb,	// (0x00031bdf) tabs_3_long_active_pane_srt

0xcceb,	// (0x00031bdf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xcceb,	// (0x00031bdf) tabs_3_long_passive_pane_cp_srt

0xcceb,	// (0x00031bdf) tabs_3_long_passive_pane_srt_ParamLimits

0xcceb,	// (0x00031bdf) tabs_3_long_passive_pane_srt

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp5_srt

0x0bb8,	// (0x00025aac) bg_passive_tab_pane_g1_cp5_srt

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp5_srt

0x0bc1,	// (0x00025ab5) bg_passive_tab_pane_g3_cp5_srt

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp5_srt_ParamLimits

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp5_srt

0xbd27,	// (0x00030c1b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbd27,	// (0x00030c1b) tabs_3_long_active_pane_srt_t1

0x0bb8,	// (0x00025aac) bg_active_tab_pane_g1_cp5_srt

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp5_srt

0x0bc1,	// (0x00025ab5) bg_active_tab_pane_g3_cp5_srt

0x4799,	// (0x0002968d) navi_text_pane_srt_t1

0x4791,	// (0x00029685) navi_icon_pane_srt_g1

0x2db9,	// (0x00027cad) midp_editing_number_pane_srt

0x2bf0,	// (0x00027ae4) midp_ticker_pane_srt

0x2dc1,	// (0x00027cb5) midp_ticker_pane_srt_g1

0x2dc9,	// (0x00027cbd) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00034641) midp_ticker_pane_srt_g

0x2dd1,	// (0x00027cc5) midp_ticker_pane_srt_t1

0x4782,	// (0x00029676) midp_editing_number_pane_t1_copy1

0xaba1,	// (0x0002fa95) listscroll_midp_pane

0xaba1,	// (0x0002fa95) midp_form_pane

0x2c67,	// (0x00027b5b) midp_info_popup_window_ParamLimits

0x2c67,	// (0x00027b5b) midp_info_popup_window

0xd422,	// (0x00032316) bg_popup_sub_pane_cp50_ParamLimits

0xd422,	// (0x00032316) bg_popup_sub_pane_cp50

0x3879,	// (0x0002876d) listscroll_midp_info_pane_ParamLimits

0x3879,	// (0x0002876d) listscroll_midp_info_pane

0x3859,	// (0x0002874d) listscroll_form_midp_pane_ParamLimits

0x3859,	// (0x0002874d) listscroll_form_midp_pane

0x3865,	// (0x00028759) scroll_bar_cp050

0x3859,	// (0x0002874d) list_midp_pane

0x55ad,	// (0x0002a4a1) signal_pane_g2_cp

0x3773,	// (0x00028667) listscroll_midp_info_pane_t1_ParamLimits

0x3773,	// (0x00028667) listscroll_midp_info_pane_t1

0x378b,	// (0x0002867f) listscroll_midp_info_pane_t2_ParamLimits

0x378b,	// (0x0002867f) listscroll_midp_info_pane_t2

0x37c9,	// (0x000286bd) listscroll_midp_info_pane_t3_ParamLimits

0x37c9,	// (0x000286bd) listscroll_midp_info_pane_t3

0x3803,	// (0x000286f7) listscroll_midp_info_pane_t4_ParamLimits

0x3803,	// (0x000286f7) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x000346f4) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x000346f4) listscroll_midp_info_pane_t

0xd477,	// (0x0003236b) scroll_pane_cp21

0x370d,	// (0x00028601) form_midp_field_choice_group_pane

0x3716,	// (0x0002860a) form_midp_field_text_pane

0x3759,	// (0x0002864d) form_midp_field_time_pane

0x3761,	// (0x00028655) form_midp_gauge_slider_pane

0x376a,	// (0x0002865e) form_midp_gauge_wait_pane

0xcc9d,	// (0x00031b91) form_midp_image_pane

0xa00b,	// (0x0002eeff) list_single_midp_pane_ParamLimits

0xa00b,	// (0x0002eeff) list_single_midp_pane

0xb9e3,	// (0x000308d7) form_midp_field_text_pane_t1

0x34c3,	// (0x000283b7) input_focus_pane_cp050

0x36fc,	// (0x000285f0) list_midp_form_text_pane

0x36a0,	// (0x00028594) form_midp_field_choice_group_pane_t1

0x36ae,	// (0x000285a2) input_focus_pane_cp051

0x36c2,	// (0x000285b6) list_midp_choice_pane

0xcc9d,	// (0x00031b91) status_idle_pane

0x3684,	// (0x00028578) form_midp_field_time_pane_t1

0xcc93,	// (0x00031b87) wait_anim_pane_g2_copy1

0x3692,	// (0x00028586) form_midp_field_time_pane_t2

0x0001,

0x2d17,	// (0x00027c0b) aid_navinavi_width_2_pane

0xf7fb,	// (0x000346ef) form_midp_field_time_pane_t

0xcc9d,	// (0x00031b91) input_focus_pane_cp052

0xcc9d,	// (0x00031b91) bg_input_focus_pane_cp040

0x3644,	// (0x00028538) form_midp_gauge_slider_pane_t1

0x3652,	// (0x00028546) form_midp_gauge_slider_pane_t2

0xb9c7,	// (0x000308bb) form_midp_gauge_slider_pane_t3

0xb9d5,	// (0x000308c9) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x000346e6) form_midp_gauge_slider_pane_t

0x367c,	// (0x00028570) form_midp_slider_pane

0xccf9,	// (0x00031bed) bg_input_focus_pane_cp041_ParamLimits

0xccf9,	// (0x00031bed) bg_input_focus_pane_cp041

0x3611,	// (0x00028505) form_midp_gauge_wait_pane_t1_ParamLimits

0x3611,	// (0x00028505) form_midp_gauge_wait_pane_t1

0x3623,	// (0x00028517) form_midp_gauge_wait_pane_t2_ParamLimits

0x3623,	// (0x00028517) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x000346e1) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x000346e1) form_midp_gauge_wait_pane_t

0x3635,	// (0x00028529) form_midp_wait_pane_ParamLimits

0x3635,	// (0x00028529) form_midp_wait_pane

0x35d9,	// (0x000284cd) form_midp_image_pane_g1

0x35e2,	// (0x000284d6) form_midp_image_pane_t1

0x35f1,	// (0x000284e5) form_midp_image_pane_t2

0x3600,	// (0x000284f4) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000346da) form_midp_image_pane_t

0x35d0,	// (0x000284c4) list_single_midp_pane_g1

0xed7d,	// (0x00033c71) list_single_midp_pane_t1

0xb9b0,	// (0x000308a4) list_midp_form_item_pane_ParamLimits

0xb9b0,	// (0x000308a4) list_midp_form_item_pane

0x2cbf,	// (0x00027bb3) list_midp_form_item_pane_t1

0x2cce,	// (0x00027bc2) midp_ticker_pane_g1

0x2cda,	// (0x00027bce) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00034627) midp_ticker_pane_g

0xac45,	// (0x0002fb39) midp_ticker_pane_t1

0xbec6,	// (0x00030dba) midp_editing_number_pane_t1

0x49cd,	// (0x000298c1) midp_editing_number_pane

0x49dc,	// (0x000298d0) midp_ticker_pane

0x4772,	// (0x00029666) ai_message_heading_pane

0xcc9d,	// (0x00031b91) bg_popup_window_pane_cp14

0x477a,	// (0x0002966e) listscroll_ai_message_pane

0x46f8,	// (0x000295ec) ai_message_heading_pane_g1_ParamLimits

0x46f8,	// (0x000295ec) ai_message_heading_pane_g1

0x4704,	// (0x000295f8) ai_message_heading_pane_g2_ParamLimits

0x4704,	// (0x000295f8) ai_message_heading_pane_g2

0x4712,	// (0x00029606) ai_message_heading_pane_g3_ParamLimits

0x4712,	// (0x00029606) ai_message_heading_pane_g3

0x471e,	// (0x00029612) ai_message_heading_pane_g4_ParamLimits

0x471e,	// (0x00029612) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0003481b) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0003481b) ai_message_heading_pane_g

0x472a,	// (0x0002961e) ai_message_heading_pane_t1_ParamLimits

0x472a,	// (0x0002961e) ai_message_heading_pane_t1

0x4744,	// (0x00029638) ai_message_heading_pane_t2_ParamLimits

0x4744,	// (0x00029638) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00034824) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00034824) ai_message_heading_pane_t

0x4758,	// (0x0002964c) bg_popup_heading_pane_cp1_ParamLimits

0x4758,	// (0x0002964c) bg_popup_heading_pane_cp1

0x46e6,	// (0x000295da) list_ai_message_pane_ParamLimits

0x46e6,	// (0x000295da) list_ai_message_pane

0xd477,	// (0x0003236b) scroll_pane_cp10

0x4682,	// (0x00029576) list_ai_message_pane_g1

0x468a,	// (0x0002957e) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000347f8) list_ai_message_pane_g

0x4692,	// (0x00029586) list_ai_message_pane_t1_ParamLimits

0x4692,	// (0x00029586) list_ai_message_pane_t1

0x46a7,	// (0x0002959b) list_ai_message_pane_t2_ParamLimits

0x46a7,	// (0x0002959b) list_ai_message_pane_t2

0x46bc,	// (0x000295b0) list_ai_message_pane_t3_ParamLimits

0x46bc,	// (0x000295b0) list_ai_message_pane_t3

0x46d1,	// (0x000295c5) list_ai_message_pane_t4_ParamLimits

0x46d1,	// (0x000295c5) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000347fd) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000347fd) list_ai_message_pane_t

0xbd0d,	// (0x00030c01) cell_ai_soft_ind_pane_ParamLimits

0xbd0d,	// (0x00030c01) cell_ai_soft_ind_pane

0x2cf8,	// (0x00027bec) cell_ai_soft_ind_pane_g1_ParamLimits

0x2cf8,	// (0x00027bec) cell_ai_soft_ind_pane_g1

0xcc9d,	// (0x00031b91) grid_highlight_cp1

0x2d05,	// (0x00027bf9) text_secondary_cp56_ParamLimits

0x2d05,	// (0x00027bf9) text_secondary_cp56

0x4640,	// (0x00029534) example_general_pane_ParamLimits

0x4640,	// (0x00029534) example_general_pane

0x464c,	// (0x00029540) example_parent_pane_g1_ParamLimits

0x464c,	// (0x00029540) example_parent_pane_g1

0x4658,	// (0x0002954c) example_parent_pane_t1_ParamLimits

0x4658,	// (0x0002954c) example_parent_pane_t1

0xb19f,	// (0x00030093) popup_preview_text_window_ParamLimits

0xb19f,	// (0x00030093) popup_preview_text_window

0x0e20,	// (0x00025d14) list_single_pane_cp2_g4

0xcefa,	// (0x00031dee) bg_popup_preview_window_pane_ParamLimits

0xcefa,	// (0x00031dee) bg_popup_preview_window_pane

0x4389,	// (0x0002927d) popup_preview_text_window_t1_ParamLimits

0x4389,	// (0x0002927d) popup_preview_text_window_t1

0x43a7,	// (0x0002929b) popup_preview_text_window_t2_ParamLimits

0x43a7,	// (0x0002929b) popup_preview_text_window_t2

0x43f0,	// (0x000292e4) popup_preview_text_window_t3_ParamLimits

0x43f0,	// (0x000292e4) popup_preview_text_window_t3

0x4435,	// (0x00029329) popup_preview_text_window_t4_ParamLimits

0x4435,	// (0x00029329) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000347cc) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000347cc) popup_preview_text_window_t

0x44b3,	// (0x000293a7) scroll_pane_cp11

0x344f,	// (0x00028343) bg_popup_preview_window_pane_g1

0x433d,	// (0x00029231) bg_popup_preview_window_pane_g2

0x4347,	// (0x0002923b) bg_popup_preview_window_pane_g3

0x4351,	// (0x00029245) bg_popup_preview_window_pane_g4

0x435b,	// (0x0002924f) bg_popup_preview_window_pane_g5

0x4365,	// (0x00029259) bg_popup_preview_window_pane_g6

0x436d,	// (0x00029261) bg_popup_preview_window_pane_g7

0x4375,	// (0x00029269) bg_popup_preview_window_pane_g8

0xf01d,	// (0x00033f11) aid_popup_width_pane

0xb10f,	// (0x00030003) popup_midp_note_alarm_window_ParamLimits

0xb10f,	// (0x00030003) popup_midp_note_alarm_window

0xd32f,	// (0x00032223) data_form_pane_ParamLimits

0x9e67,	// (0x0002ed5b) form_field_data_pane_g1

0x9e71,	// (0x0002ed65) form_field_data_pane_t1_ParamLimits

0xd33b,	// (0x0003222f) input_focus_pane_ParamLimits

0xeb9e,	// (0x00033a92) data_form_wide_pane_ParamLimits

0xebaf,	// (0x00033aa3) form_field_data_wide_pane_g1

0xebbb,	// (0x00033aaf) form_field_data_wide_pane_t1_ParamLimits

0xd0b6,	// (0x00031faa) input_focus_pane_cp6_ParamLimits

0xa8ef,	// (0x0002f7e3) input_popup_find_pane_g1_ParamLimits

0xa8ef,	// (0x0002f7e3) input_popup_find_pane_g1

0x0312,	// (0x00025206) aid_navi_side_left_pane

0x0327,	// (0x0002521b) aid_navi_side_right_pane

0x3d52,	// (0x00028c46) bg_popup_window_pane_cp30_ParamLimits

0x3d52,	// (0x00028c46) bg_popup_window_pane_cp30

0x3dcc,	// (0x00028cc0) popup_midp_note_alarm_window_g1_ParamLimits

0x3dcc,	// (0x00028cc0) popup_midp_note_alarm_window_g1

0x3dfc,	// (0x00028cf0) popup_midp_note_alarm_window_t1_ParamLimits

0x3dfc,	// (0x00028cf0) popup_midp_note_alarm_window_t1

0x3e9d,	// (0x00028d91) popup_midp_note_alarm_window_t2_ParamLimits

0x3e9d,	// (0x00028d91) popup_midp_note_alarm_window_t2

0x3f4b,	// (0x00028e3f) popup_midp_note_alarm_window_t3_ParamLimits

0x3f4b,	// (0x00028e3f) popup_midp_note_alarm_window_t3

0x3f7d,	// (0x00028e71) popup_midp_note_alarm_window_t4_ParamLimits

0x3f7d,	// (0x00028e71) popup_midp_note_alarm_window_t4

0x3fa3,	// (0x00028e97) popup_midp_note_alarm_window_t5_ParamLimits

0x3fa3,	// (0x00028e97) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00034769) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00034769) popup_midp_note_alarm_window_t

0x404f,	// (0x00028f43) wait_bar_pane_cp1_ParamLimits

0x404f,	// (0x00028f43) wait_bar_pane_cp1

0xcc9d,	// (0x00031b91) wait_anim_pane_copy1

0xcc9d,	// (0x00031b91) wait_border_pane_copy1

0x3a37,	// (0x0002892b) wait_border_pane_g1_copy1

0xebd5,	// (0x00033ac9) form_field_popup_pane_g1

0x9e8b,	// (0x0002ed7f) form_field_popup_pane_t1_ParamLimits

0xd33b,	// (0x0003222f) input_focus_pane_cp7_ParamLimits

0xd369,	// (0x0003225d) list_form_pane_ParamLimits

0xebdd,	// (0x00033ad1) form_field_popup_wide_pane_g1

0xebe5,	// (0x00033ad9) form_field_popup_wide_pane_t1_ParamLimits

0xd33b,	// (0x0003222f) input_focus_pane_cp8_ParamLimits

0xd375,	// (0x00032269) list_form_wide_pane_ParamLimits

0x4b94,	// (0x00029a88) aid_size_cell_graphic_pane

0x9f0a,	// (0x0002edfe) data_form_pane_t1_ParamLimits

0xa03a,	// (0x0002ef2e) data_form_wide_pane_t1_ParamLimits

0xb5a3,	// (0x00030497) bg_status_flat_pane

0xa534,	// (0x0002f428) title_pane_t1_ParamLimits

0xccb3,	// (0x00031ba7) title_pane_t2_ParamLimits

0xccd9,	// (0x00031bcd) title_pane_t3_ParamLimits

0xf532,	// (0x00034426) title_pane_t_ParamLimits

0xaa32,	// (0x0002f926) level_1_signal_ParamLimits

0xaa44,	// (0x0002f938) level_2_signal_ParamLimits

0xaa57,	// (0x0002f94b) level_3_signal_ParamLimits

0xaa6a,	// (0x0002f95e) level_4_signal_ParamLimits

0xaa7d,	// (0x0002f971) level_5_signal_ParamLimits

0xaa90,	// (0x0002f984) level_6_signal_ParamLimits

0xaaa3,	// (0x0002f997) level_7_signal_ParamLimits

0xaa32,	// (0x0002f926) level_1_battery_ParamLimits

0xaa44,	// (0x0002f938) level_2_battery_ParamLimits

0xaa57,	// (0x0002f94b) level_3_battery_ParamLimits

0xaa6a,	// (0x0002f95e) level_4_battery_ParamLimits

0xaa7d,	// (0x0002f971) level_5_battery_ParamLimits

0xaa90,	// (0x0002f984) level_6_battery_ParamLimits

0xaaa3,	// (0x0002f997) level_7_battery_ParamLimits

0x3c57,	// (0x00028b4b) bg_status_flat_pane_g1

0x3c5f,	// (0x00028b53) bg_status_flat_pane_g2

0x3c67,	// (0x00028b5b) bg_status_flat_pane_g3

0x3c6f,	// (0x00028b63) bg_status_flat_pane_g4

0x3c77,	// (0x00028b6b) bg_status_flat_pane_g5

0x3c7f,	// (0x00028b73) bg_status_flat_pane_g6

0x3c87,	// (0x00028b7b) bg_status_flat_pane_g7

0xa5c8,	// (0x0002f4bc) tabs_3_active_pane_t1_ParamLimits

0xa5c8,	// (0x0002f4bc) tabs_3_passive_pane_t1_ParamLimits

0xa5e2,	// (0x0002f4d6) tabs_4_active_pane_t1_ParamLimits

0xa5e2,	// (0x0002f4d6) tabs_4_1_passive_pane_t1_ParamLimits

0xa905,	// (0x0002f7f9) tabs_2_active_pane_t1_ParamLimits

0xa905,	// (0x0002f7f9) tabs_2_passive_pane_t1_ParamLimits

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp4_ParamLimits

0xa917,	// (0x0002f80b) tabs_2_long_active_pane_t1_ParamLimits

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp4_ParamLimits

0x1703,	// (0x000265f7) list_single_midp_graphic_pane_t1_ParamLimits

0xccf9,	// (0x00031bed) bg_active_tab_pane_cp5_ParamLimits

0xa92a,	// (0x0002f81e) tabs_3_long_active_pane_t1_ParamLimits

0x2f17,	// (0x00027e0b) bg_passive_tab_pane_cp5_ParamLimits

0x1703,	// (0x000265f7) list_single_midp_graphic_pane_t1

0xb5a3,	// (0x00030497) bg_status_flat_pane_ParamLimits

0x30d1,	// (0x00027fc5) indicator_pane_cp2_ParamLimits

0x30d1,	// (0x00027fc5) indicator_pane_cp2

0xb739,	// (0x0003062d) navi_pane_srt_ParamLimits

0xb739,	// (0x0003062d) navi_pane_srt

0x3238,	// (0x0002812c) popup_clock_digital_analogue_window_cp1

0xcd3d,	// (0x00031c31) indicator_pane_t1

0x2bf0,	// (0x00027ae4) copy_highlight_pane

0x2bf0,	// (0x00027ae4) cursor_graphics_pane

0x2bf0,	// (0x00027ae4) graphic_within_text_pane

0x2bf0,	// (0x00027ae4) link_highlight_pane

0x4476,	// (0x0002936a) popup_preview_text_window_t5_ParamLimits

0x4476,	// (0x0002936a) popup_preview_text_window_t5

0x2d21,	// (0x00027c15) cursor_digital_pane

0x2d21,	// (0x00027c15) cursor_primary_pane

0x2d32,	// (0x00027c26) cursor_primary_small_pane

0x2d3a,	// (0x00027c2e) cursor_secondary_pane

0x2d42,	// (0x00027c36) cursor_title_pane

0x2d21,	// (0x00027c15) link_highlight_digital_pane

0x2d29,	// (0x00027c1d) link_highlight_primary_pane

0x2d32,	// (0x00027c26) link_highlight_primary_small_pane

0x2d3a,	// (0x00027c2e) link_highlight_secondary_pane

0x2d42,	// (0x00027c36) link_highlight_title_pane

0x2d21,	// (0x00027c15) copy_highlight_digital_pane

0x2d21,	// (0x00027c15) copy_highlight_primary_pane

0x2d32,	// (0x00027c26) copy_highlight_primary_small_pane

0x2d3a,	// (0x00027c2e) copy_highlight_secondary_pane

0x2d42,	// (0x00027c36) copy_highlight_title_pane

0x2d3a,	// (0x00027c2e) graphic_text_digital_pane

0x3cf5,	// (0x00028be9) graphic_text_primary_pane

0x3cfe,	// (0x00028bf2) graphic_text_primary_small_pane

0x2d32,	// (0x00027c26) graphic_text_secondary_pane

0x2d21,	// (0x00027c15) graphic_text_title_pane

0xac57,	// (0x0002fb4b) cursor_primary_pane_g1

0x3ce7,	// (0x00028bdb) cursor_text_primary_t1

0xba38,	// (0x0003092c) cursor_primary_small_pane_g1

0x3cd9,	// (0x00028bcd) cursor_text_primary_small_t1

0xba2e,	// (0x00030922) cursor_primary_small_pane_g1_copy1

0x3cc1,	// (0x00028bb5) cursor_text_primary_small_t1_copy1

0x3c9f,	// (0x00028b93) cursor_text_title_t1

0xba24,	// (0x00030918) cursor_title_pane_g1

0xac57,	// (0x0002fb4b) cursor_digital_pane_g1

0x2d54,	// (0x00027c48) cursor_text_digital_t1

0x2d62,	// (0x00027c56) link_highlight_primary_pane_g1

0x3c48,	// (0x00028b3c) link_highlight_primary_pane_t1

0x2d62,	// (0x00027c56) link_highlight_primary_small_pane_g1

0x2d6a,	// (0x00027c5e) link_highlight_primary_small_pane_t1

0x2d79,	// (0x00027c6d) link_highlight_secondary_pane_g1

0x2d81,	// (0x00027c75) link_highlight_secondary_pane_t1

0x3bbc,	// (0x00028ab0) link_highlight_title_pane_g1

0x3bc4,	// (0x00028ab8) link_highlight_title_pane_t1

0x3ba5,	// (0x00028a99) link_highlight_digital_pane_g1

0x3bad,	// (0x00028aa1) link_highlight_digital_pane_t1

0x3a6d,	// (0x00028961) copy_highlight_primary_pane_g1

0x3a84,	// (0x00028978) copy_highlight_primary_pane_t1

0x3a6d,	// (0x00028961) copy_highlight_primary_small_pane_g1

0x3a75,	// (0x00028969) copy_highlight_primary_small_pane_t1

0x2d90,	// (0x00027c84) copy_highlight_secondary_pane_g1

0x2d98,	// (0x00027c8c) copy_highlight_secondary_pane_t1

0x3a56,	// (0x0002894a) copy_highlight_title_pane_g1

0x3a5e,	// (0x00028952) copy_highlight_title_pane_t1

0x3a6d,	// (0x00028961) copy_highlight_digital_pane_g1

0x4d66,	// (0x00029c5a) copy_highlight_digital_pane_t1

0x4cba,	// (0x00029bae) graphic_text_primary_pane_g1

0x4d4a,	// (0x00029c3e) graphic_text_primary_pane_t1

0x4d58,	// (0x00029c4c) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00034898) graphic_text_primary_pane_t

0x4d26,	// (0x00029c1a) graphic_text_primary_small_pane_g1

0x4d2e,	// (0x00029c22) graphic_text_primary_small_pane_t1

0x4d3c,	// (0x00029c30) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00034893) graphic_text_primary_small_pane_t

0x4d02,	// (0x00029bf6) graphic_text_secondary_pane_g1

0x4d0a,	// (0x00029bfe) graphic_text_secondary_pane_t1

0x4d18,	// (0x00029c0c) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0003488e) graphic_text_secondary_pane_t

0x4cde,	// (0x00029bd2) graphic_text_title_pane_g1

0x4ce6,	// (0x00029bda) graphic_text_title_pane_t1

0x4cf4,	// (0x00029be8) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00034889) graphic_text_title_pane_t

0x4cba,	// (0x00029bae) graphic_text_digital_pane_g1

0x4cc2,	// (0x00029bb6) graphic_text_digital_pane_t1

0x4cd0,	// (0x00029bc4) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00034884) graphic_text_digital_pane_t

0xccf9,	// (0x00031bed) navi_icon_pane_srt_ParamLimits

0xccf9,	// (0x00031bed) navi_icon_pane_srt

0xcc9d,	// (0x00031b91) navi_midp_pane_srt

0xcc9d,	// (0x00031b91) navi_navi_pane_srt

0xccf9,	// (0x00031bed) navi_text_pane_srt_ParamLimits

0xccf9,	// (0x00031bed) navi_text_pane_srt

0x4c85,	// (0x00029b79) navi_navi_icon_text_pane_srt

0x4c8d,	// (0x00029b81) navi_navi_pane_srt_g1_ParamLimits

0x4c8d,	// (0x00029b81) navi_navi_pane_srt_g1

0x4c9f,	// (0x00029b93) navi_navi_pane_srt_g2_ParamLimits

0x4c9f,	// (0x00029b93) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0003487f) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0003487f) navi_navi_pane_srt_g

0x4cb1,	// (0x00029ba5) navi_navi_tabs_pane_srt

0x4c85,	// (0x00029b79) navi_navi_text_pane_srt

0x4c85,	// (0x00029b79) navi_navi_volume_pane_srt

0x4c76,	// (0x00029b6a) navi_navi_text_pane_srt_t1

0x1a9f,	// (0x00026993) navi_navi_volume_pane_srt_g1

0x1aa7,	// (0x0002699b) volume_small_pane_srt_ParamLimits

0x1aa7,	// (0x0002699b) volume_small_pane_srt

0x0e6e,	// (0x00025d62) volume_small_pane_srt_g1_ParamLimits

0x0e6e,	// (0x00025d62) volume_small_pane_srt_g1

0x0e7e,	// (0x00025d72) volume_small_pane_srt_g2_ParamLimits

0x0e7e,	// (0x00025d72) volume_small_pane_srt_g2

0x0e8f,	// (0x00025d83) volume_small_pane_srt_g3_ParamLimits

0x0e8f,	// (0x00025d83) volume_small_pane_srt_g3

0x0ea0,	// (0x00025d94) volume_small_pane_srt_g4_ParamLimits

0x0ea0,	// (0x00025d94) volume_small_pane_srt_g4

0x0eb1,	// (0x00025da5) volume_small_pane_srt_g5_ParamLimits

0x0eb1,	// (0x00025da5) volume_small_pane_srt_g5

0x0ec2,	// (0x00025db6) volume_small_pane_srt_g6_ParamLimits

0x0ec2,	// (0x00025db6) volume_small_pane_srt_g6

0x0ed3,	// (0x00025dc7) volume_small_pane_srt_g7_ParamLimits

0x0ed3,	// (0x00025dc7) volume_small_pane_srt_g7

0x0ee4,	// (0x00025dd8) volume_small_pane_srt_g8_ParamLimits

0x0ee4,	// (0x00025dd8) volume_small_pane_srt_g8

0x0ef5,	// (0x00025de9) volume_small_pane_srt_g9_ParamLimits

0x0ef5,	// (0x00025de9) volume_small_pane_srt_g9

0x0f06,	// (0x00025dfa) volume_small_pane_srt_g10_ParamLimits

0x0f06,	// (0x00025dfa) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003462c) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003462c) volume_small_pane_srt_g

0xcfaf,	// (0x00031ea3) query_popup_data_pane_cp2

0x4c5c,	// (0x00029b50) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4c5c,	// (0x00029b50) navi_navi_icon_text_pane_srt_t1

0x3cf5,	// (0x00028be9) navi_tabs_2_long_pane_srt

0x3cf5,	// (0x00028be9) navi_tabs_2_pane_srt

0x3cf5,	// (0x00028be9) navi_tabs_3_long_pane_srt

0x3cf5,	// (0x00028be9) navi_tabs_3_pane_srt

0x3cf5,	// (0x00028be9) navi_tabs_4_pane_srt

0x1a7f,	// (0x00026973) tabs_2_active_pane_srt_ParamLimits

0x1a7f,	// (0x00026973) tabs_2_active_pane_srt

0x1a8f,	// (0x00026983) tabs_2_passive_pane_srt_ParamLimits

0x1a8f,	// (0x00026983) tabs_2_passive_pane_srt

0x34c3,	// (0x000283b7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x34c3,	// (0x000283b7) bg_passive_tab_pane_cp1_srt

0x4c28,	// (0x00029b1c) bg_passive_tab_pane_g1_cp1_srt

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp1_srt

0x4c31,	// (0x00029b25) bg_passive_tab_pane_g3_cp1_srt

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp1_srt_ParamLimits

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp1_srt

0x4c3a,	// (0x00029b2e) tabs_2_active_pane_srt_g1

0xbfcd,	// (0x00030ec1) tabs_2_active_pane_srt_t1_ParamLimits

0xbfcd,	// (0x00030ec1) tabs_2_active_pane_srt_t1

0x4c28,	// (0x00029b1c) bg_active_tab_pane_g1_cp1_srt

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp1_srt

0x4c31,	// (0x00029b25) bg_active_tab_pane_g3_cp1_srt

0x1a4c,	// (0x00026940) tabs_3_active_pane_srt_ParamLimits

0x1a4c,	// (0x00026940) tabs_3_active_pane_srt

0x1a5d,	// (0x00026951) tabs_3_passive_pane_cp_srt_ParamLimits

0x1a5d,	// (0x00026951) tabs_3_passive_pane_cp_srt

0x1a6e,	// (0x00026962) tabs_3_passive_pane_srt_ParamLimits

0x1a6e,	// (0x00026962) tabs_3_passive_pane_srt

0x34c3,	// (0x000283b7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x34c3,	// (0x000283b7) bg_passive_tab_pane_cp2_srt

0x2da7,	// (0x00027c9b) bg_passive_tab_pane_g1_cp2_srt

0x09ed,	// (0x000258e1) bg_passive_tab_pane_g2_cp2_srt

0x2db0,	// (0x00027ca4) bg_passive_tab_pane_g3_cp2_srt

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp2_srt_ParamLimits

0xcceb,	// (0x00031bdf) bg_active_tab_pane_cp2_srt

0x4c0e,	// (0x00029b02) tabs_3_active_pane_srt_g1

0xbfb7,	// (0x00030eab) tabs_3_active_pane_srt_t1_ParamLimits

0xbfb7,	// (0x00030eab) tabs_3_active_pane_srt_t1

0x2da7,	// (0x00027c9b) bg_active_tab_pane_g1_cp2_srt

0x09ed,	// (0x000258e1) bg_active_tab_pane_g2_cp2_srt

0x2db0,	// (0x00027ca4) bg_active_tab_pane_g3_cp2_srt

0x1a04,	// (0x000268f8) tabs_4_active_pane_srt_ParamLimits

0x1a04,	// (0x000268f8) tabs_4_active_pane_srt

0x1a16,	// (0x0002690a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1a16,	// (0x0002690a) tabs_4_passive_pane_cp2_srt

0x1058,	// (0x00025f4c) aid_size_cell_toolbar

0x482c,	// (0x00029720) main_idle_act_pane_ParamLimits

0x1221,	// (0x00026115) popup_large_graphic_colour_window_ParamLimits

0xb465,	// (0x00030359) popup_toolbar_window_ParamLimits

0xb465,	// (0x00030359) popup_toolbar_window

0xeda2,	// (0x00033c96) list_single_graphic_2heading_pane_ParamLimits

0xeda2,	// (0x00033c96) list_single_graphic_2heading_pane

0xd64f,	// (0x00032543) aid_size_cell_apps_grid_lsc_pane

0xd661,	// (0x00032555) aid_size_cell_apps_grid_prt_pane

0x2f17,	// (0x00027e0b) bg_wml_button_pane_cp1_ParamLimits

0x2f17,	// (0x00027e0b) bg_wml_button_pane_cp1

0xb9e3,	// (0x000308d7) form_midp_field_text_pane_t1_ParamLimits

0x34c3,	// (0x000283b7) input_focus_pane_cp050_ParamLimits

0x36fc,	// (0x000285f0) list_midp_form_text_pane_ParamLimits

0x36ae,	// (0x000285a2) input_focus_pane_cp051_ParamLimits

0x36c2,	// (0x000285b6) list_midp_choice_pane_ParamLimits

0xb97c,	// (0x00030870) list_single_2graphic_pane_cp3_ParamLimits

0xb97c,	// (0x00030870) list_single_2graphic_pane_cp3

0xb98f,	// (0x00030883) list_single_midp_graphic_pane_ParamLimits

0xb98f,	// (0x00030883) list_single_midp_graphic_pane

0xec4b,	// (0x00033b3f) list_single_graphic_2heading_pane_g1_ParamLimits

0xec4b,	// (0x00033b3f) list_single_graphic_2heading_pane_g1

0xea9d,	// (0x00033991) list_single_graphic_2heading_pane_g4_ParamLimits

0xea9d,	// (0x00033991) list_single_graphic_2heading_pane_g4

0xeaa9,	// (0x0003399d) list_single_graphic_2heading_pane_g5_ParamLimits

0xeaa9,	// (0x0003399d) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003467f) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003467f) list_single_graphic_2heading_pane_g

0xec57,	// (0x00033b4b) list_single_graphic_2heading_pane_t1_ParamLimits

0xec57,	// (0x00033b4b) list_single_graphic_2heading_pane_t1

0xec6b,	// (0x00033b5f) list_single_graphic_2heading_pane_t2_ParamLimits

0xec6b,	// (0x00033b5f) list_single_graphic_2heading_pane_t2

0xec87,	// (0x00033b7b) list_single_graphic_2heading_pane_t3_ParamLimits

0xec87,	// (0x00033b7b) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00034686) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00034686) list_single_graphic_2heading_pane_t

0x338d,	// (0x00028281) bg_popup_sub_pane_cp2

0x33b7,	// (0x000282ab) grid_toobar_pane

0x1687,	// (0x0002657b) cell_toolbar_pane_ParamLimits

0x1687,	// (0x0002657b) cell_toolbar_pane

0x33f3,	// (0x000282e7) cell_toolbar_pane_g1_ParamLimits

0x33f3,	// (0x000282e7) cell_toolbar_pane_g1

0x3407,	// (0x000282fb) cell_toolbar_pane_g2_ParamLimits

0x3407,	// (0x000282fb) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00034694) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00034694) cell_toolbar_pane_g

0x3429,	// (0x0002831d) grid_highlight_pane_cp2_ParamLimits

0x3429,	// (0x0002831d) grid_highlight_pane_cp2

0x3443,	// (0x00028337) toolbar_button_pane

0x344f,	// (0x00028343) toolbar_button_pane_g1

0x3457,	// (0x0002834b) toolbar_button_pane_g2

0x345f,	// (0x00028353) toolbar_button_pane_g3

0x3467,	// (0x0002835b) toolbar_button_pane_g4

0x346f,	// (0x00028363) toolbar_button_pane_g5

0x3477,	// (0x0002836b) toolbar_button_pane_g6

0x347f,	// (0x00028373) toolbar_button_pane_g7

0x3487,	// (0x0002837b) toolbar_button_pane_g8

0x348f,	// (0x00028383) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00034699) toolbar_button_pane_g

0x16bf,	// (0x000265b3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x16bf,	// (0x000265b3) list_single_2graphic_pane_g1_cp3

0xb8de,	// (0x000307d2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb8de,	// (0x000307d2) list_single_2graphic_pane_g2_cp3

0x0d10,	// (0x00025c04) list_single_2graphic_pane_g3_cp3

0x16dc,	// (0x000265d0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x16dc,	// (0x000265d0) list_single_2graphic_pane_g4_cp3

0x16e8,	// (0x000265dc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x16e8,	// (0x000265dc) list_single_2graphic_pane_t1_cp3

0x0d04,	// (0x00025bf8) list_single_midp_graphic_pane_g2_ParamLimits

0x0d04,	// (0x00025bf8) list_single_midp_graphic_pane_g2

0x1060,	// (0x00025f54) aid_zoom_text_primary

0xec3b,	// (0x00033b2f) aid_zoom_text_secondary

0x2e61,	// (0x00027d55) status_small_pane_g7_ParamLimits

0x2e61,	// (0x00027d55) status_small_pane_g7

0x2e84,	// (0x00027d78) status_small_pane_t1_ParamLimits

0xa504,	// (0x0002f3f8) title_pane_g2

0x0003,

0xf529,	// (0x0003441d) title_pane_g

0xa7a4,	// (0x0002f698) aid_size_cell_colour_1_pane_ParamLimits

0xa7a4,	// (0x0002f698) aid_size_cell_colour_1_pane

0xa7b8,	// (0x0002f6ac) aid_size_cell_colour_2_pane_ParamLimits

0xa7b8,	// (0x0002f6ac) aid_size_cell_colour_2_pane

0xa7cc,	// (0x0002f6c0) aid_size_cell_colour_3_pane_ParamLimits

0xa7cc,	// (0x0002f6c0) aid_size_cell_colour_3_pane

0xa7e0,	// (0x0002f6d4) aid_size_cell_colour_4_pane_ParamLimits

0xa7e0,	// (0x0002f6d4) aid_size_cell_colour_4_pane

0x024f,	// (0x00025143) title_pane_stacon_g1_ParamLimits

0x024f,	// (0x00025143) title_pane_stacon_g1

0x3adb,	// (0x000289cf) popup_note_wait_window_g3_ParamLimits

0x3adb,	// (0x000289cf) popup_note_wait_window_g3

0x3b52,	// (0x00028a46) popup_note_wait_window_t5_ParamLimits

0x3b52,	// (0x00028a46) popup_note_wait_window_t5

0xcc9d,	// (0x00031b91) main_feb_china_hwr_fs_writing_pane

0xadf6,	// (0x0002fcea) popup_feb_china_hwr_fs_window_ParamLimits

0xadf6,	// (0x0002fcea) popup_feb_china_hwr_fs_window

0xb8ef,	// (0x000307e3) aid_size_cell_hwr_fs_ParamLimits

0xb8ef,	// (0x000307e3) aid_size_cell_hwr_fs

0x34c3,	// (0x000283b7) bg_popup_sub_pane_cp3_ParamLimits

0x34c3,	// (0x000283b7) bg_popup_sub_pane_cp3

0xb904,	// (0x000307f8) grid_hwr_fs_pane_ParamLimits

0xb904,	// (0x000307f8) grid_hwr_fs_pane

0x1746,	// (0x0002663a) linegrid_hwr_fs_pane_ParamLimits

0x1746,	// (0x0002663a) linegrid_hwr_fs_pane

0xb91c,	// (0x00030810) cell_hwr_fs_pane_ParamLimits

0xb91c,	// (0x00030810) cell_hwr_fs_pane

0x34cf,	// (0x000283c3) linegrid_hwr_fs_pane_g1_ParamLimits

0x34cf,	// (0x000283c3) linegrid_hwr_fs_pane_g1

0xb942,	// (0x00030836) linegrid_hwr_fs_pane_g2_ParamLimits

0xb942,	// (0x00030836) linegrid_hwr_fs_pane_g2

0x34ed,	// (0x000283e1) linegrid_hwr_fs_pane_g3_ParamLimits

0x34ed,	// (0x000283e1) linegrid_hwr_fs_pane_g3

0x177a,	// (0x0002666e) linegrid_hwr_fs_pane_g4_ParamLimits

0x177a,	// (0x0002666e) linegrid_hwr_fs_pane_g4

0x1798,	// (0x0002668c) linegrid_hwr_fs_pane_g5_ParamLimits

0x1798,	// (0x0002668c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x000346bf) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x000346bf) linegrid_hwr_fs_pane_g

0x34f9,	// (0x000283ed) cell_hwr_fs_pane_g1_ParamLimits

0x34f9,	// (0x000283ed) cell_hwr_fs_pane_g1

0x32c6,	// (0x000281ba) cell_hwr_fs_pane_g2_ParamLimits

0x32c6,	// (0x000281ba) cell_hwr_fs_pane_g2

0xb954,	// (0x00030848) cell_hwr_fs_pane_g3_ParamLimits

0xb954,	// (0x00030848) cell_hwr_fs_pane_g3

0xb961,	// (0x00030855) cell_hwr_fs_pane_g4_ParamLimits

0xb961,	// (0x00030855) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000346ca) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000346ca) cell_hwr_fs_pane_g

0xb96e,	// (0x00030862) cell_hwr_fs_pane_t1

0xcc9d,	// (0x00031b91) grid_highlight_pane_cp6

0xcc9d,	// (0x00031b91) main_idle_act2_pane

0xd45e,	// (0x00032352) aid_inside_area_popup_secondary

0xbb9c,	// (0x00030a90) aid_inside_area_window_primary_ParamLimits

0xbb9c,	// (0x00030a90) aid_inside_area_window_primary

0x4d75,	// (0x00029c69) ai2_news_ticker_pane

0x4d7d,	// (0x00029c71) aid_size_cell_ai1_link_ParamLimits

0x4d7d,	// (0x00029c71) aid_size_cell_ai1_link

0x4d97,	// (0x00029c8b) popup_ai2_data_window_ParamLimits

0x4d97,	// (0x00029c8b) popup_ai2_data_window

0x4db5,	// (0x00029ca9) popup_ai2_link_window_ParamLimits

0x4db5,	// (0x00029ca9) popup_ai2_link_window

0x34c3,	// (0x000283b7) bg_popup_sub_pane_cp4_ParamLimits

0x34c3,	// (0x000283b7) bg_popup_sub_pane_cp4

0x4dcb,	// (0x00029cbf) grid_ai2_link_pane_ParamLimits

0x4dcb,	// (0x00029cbf) grid_ai2_link_pane

0x4de2,	// (0x00029cd6) popup_ai2_link_window_g1_ParamLimits

0x4de2,	// (0x00029cd6) popup_ai2_link_window_g1

0x4dee,	// (0x00029ce2) popup_ai2_link_window_g2_ParamLimits

0x4dee,	// (0x00029ce2) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0003489d) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0003489d) popup_ai2_link_window_g

0x4dff,	// (0x00029cf3) ai2_mp_button_pane

0x4e07,	// (0x00029cfb) ai2_mp_volume_pane

0x36ae,	// (0x000285a2) bg_popup_sub_pane_cp5_ParamLimits

0x36ae,	// (0x000285a2) bg_popup_sub_pane_cp5

0x4e0f,	// (0x00029d03) heading_ai2_gene_pane_ParamLimits

0x4e0f,	// (0x00029d03) heading_ai2_gene_pane

0x4e1b,	// (0x00029d0f) list_ai2_gene_pane_ParamLimits

0x4e1b,	// (0x00029d0f) list_ai2_gene_pane

0x4e63,	// (0x00029d57) cell_ai2_link_pane_ParamLimits

0x4e63,	// (0x00029d57) cell_ai2_link_pane

0x4e79,	// (0x00029d6d) cell_ai2_link_pane_g1

0xcc9d,	// (0x00031b91) grid_highlight_pane_cp7

0x1abc,	// (0x000269b0) ai2_mp_volume_pane_g1

0x4f4c,	// (0x00029e40) ai2_mp_volume_pane_g2

0x4ec1,	// (0x00029db5) list_ai2_gene_pane_t1

0x4f54,	// (0x00029e48) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000348b6) ai2_mp_volume_pane_g

0x1ac4,	// (0x000269b8) volume_small_pane_cp3

0x4f5c,	// (0x00029e50) aid_size_cell_ai2_button

0x4f64,	// (0x00029e58) grid_ai2_button_pane

0x4f6d,	// (0x00029e61) cell_ai2_button_pane_ParamLimits

0x4f6d,	// (0x00029e61) cell_ai2_button_pane

0xcc93,	// (0x00031b87) cell_ai2_button_pane_g1

0xcc9d,	// (0x00031b91) grid_highlight_pane_cp8

0x4f0c,	// (0x00029e00) ai2_gene_pane_t1_ParamLimits

0x4f0c,	// (0x00029e00) ai2_gene_pane_t1

0xad8e,	// (0x0002fc82) aid_height_parent_landscape

0xbd54,	// (0x00030c48) aid_height_set_list

0x482c,	// (0x00029720) aid_size_parent

0x4b94,	// (0x00029a88) aid_size_cell_graphic_pane_ParamLimits

0x4e2b,	// (0x00029d1f) popup_ai2_data_window_g1_ParamLimits

0x4e2b,	// (0x00029d1f) popup_ai2_data_window_g1

0x4e37,	// (0x00029d2b) ai2_news_ticker_pane_g1

0x4e3f,	// (0x00029d33) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x000348a2) ai2_news_ticker_pane_g

0x4e47,	// (0x00029d3b) ai2_news_ticker_pane_t1

0x4e55,	// (0x00029d49) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x000348a7) ai2_news_ticker_pane_t

0x4e82,	// (0x00029d76) heading_ai2_gene_pane_g1

0x4e8a,	// (0x00029d7e) heading_ai2_gene_pane_t1_ParamLimits

0x4e8a,	// (0x00029d7e) heading_ai2_gene_pane_t1

0x4e9f,	// (0x00029d93) list_highlight_pane_cp6

0x4ea7,	// (0x00029d9b) ai2_gene_pane_ParamLimits

0x4ea7,	// (0x00029d9b) ai2_gene_pane

0x4ecf,	// (0x00029dc3) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000348ac) list_ai2_gene_pane_t

0x4edd,	// (0x00029dd1) list_highlight_pane_cp8_ParamLimits

0x4edd,	// (0x00029dd1) list_highlight_pane_cp8

0x4eee,	// (0x00029de2) ai2_gene_pane_g1_ParamLimits

0x4eee,	// (0x00029de2) ai2_gene_pane_g1

0x4f00,	// (0x00029df4) ai2_gene_pane_g2_ParamLimits

0x4f00,	// (0x00029df4) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000348b1) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000348b1) ai2_gene_pane_g

0xd2d1,	// (0x000321c5) scroll_pane_cp12

0xad4d,	// (0x0002fc41) control_pane_t3_ParamLimits

0xad4d,	// (0x0002fc41) control_pane_t3

0x2e75,	// (0x00027d69) status_small_pane_g8_ParamLimits

0x2e75,	// (0x00027d69) status_small_pane_g8

0xae98,	// (0x0002fd8c) popup_find_window_ParamLimits

0xb14f,	// (0x00030043) popup_note_image_window_ParamLimits

0xeadd,	// (0x000339d1) list_double2_graphic_pane_vc_g1_ParamLimits

0xeadd,	// (0x000339d1) list_double2_graphic_pane_vc_g1

0xec9f,	// (0x00033b93) list_double2_graphic_pane_vc_g2_ParamLimits

0xec9f,	// (0x00033b93) list_double2_graphic_pane_vc_g2

0xecab,	// (0x00033b9f) list_double2_graphic_pane_vc_g3_ParamLimits

0xecab,	// (0x00033b9f) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003468d) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003468d) list_double2_graphic_pane_vc_g

0xecb7,	// (0x00033bab) list_double2_graphic_pane_vc_t1_ParamLimits

0xecb7,	// (0x00033bab) list_double2_graphic_pane_vc_t1

0xea9d,	// (0x00033991) list_single_heading_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033991) list_single_heading_pane_vc_g1

0xeaa9,	// (0x0003399d) list_single_heading_pane_vc_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00034497) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00034497) list_single_heading_pane_vc_g

0xeccd,	// (0x00033bc1) list_single_heading_pane_vc_t1_ParamLimits

0xeccd,	// (0x00033bc1) list_single_heading_pane_vc_t1

0xece3,	// (0x00033bd7) list_single_heading_pane_vc_t2_ParamLimits

0xece3,	// (0x00033bd7) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x000346ae) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x000346ae) list_single_heading_pane_vc_t

0xecf5,	// (0x00033be9) list_setting_number_pane_vc_g1_ParamLimits

0xecf5,	// (0x00033be9) list_setting_number_pane_vc_g1

0xed01,	// (0x00033bf5) list_setting_number_pane_vc_g2_ParamLimits

0xed01,	// (0x00033bf5) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000346b3) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000346b3) list_setting_number_pane_vc_g

0xed0d,	// (0x00033c01) list_setting_number_pane_vc_t1_ParamLimits

0xed0d,	// (0x00033c01) list_setting_number_pane_vc_t1

0xed21,	// (0x00033c15) list_setting_number_pane_vc_t2_ParamLimits

0xed21,	// (0x00033c15) list_setting_number_pane_vc_t2

0xed3d,	// (0x00033c31) list_setting_number_pane_vc_t3_ParamLimits

0xed3d,	// (0x00033c31) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x000346b8) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x000346b8) list_setting_number_pane_vc_t

0xed6b,	// (0x00033c5f) set_value_pane_vc_ParamLimits

0xed6b,	// (0x00033c5f) set_value_pane_vc

0xeda2,	// (0x00033c96) list_double2_graphic_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double2_graphic_pane_vc

0x4a15,	// (0x00029909) list_double2_large_graphic_pane_vc_ParamLimits

0x4a15,	// (0x00029909) list_double2_large_graphic_pane_vc

0xeda2,	// (0x00033c96) list_double2_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double2_pane_vc

0xeda2,	// (0x00033c96) list_double_graphic_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double_graphic_heading_pane_vc

0xeda2,	// (0x00033c96) list_double_graphic_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double_graphic_pane_vc

0xeda2,	// (0x00033c96) list_double_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double_heading_pane_vc

0x4a29,	// (0x0002991d) list_double_large_graphic_pane_vc_ParamLimits

0x4a29,	// (0x0002991d) list_double_large_graphic_pane_vc

0xeda2,	// (0x00033c96) list_double_number_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double_number_pane_vc

0xeda2,	// (0x00033c96) list_double_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double_pane_vc

0xeda2,	// (0x00033c96) list_double_time_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_double_time_pane_vc

0xeda2,	// (0x00033c96) list_setting_number_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_setting_number_pane_vc

0xeda2,	// (0x00033c96) list_setting_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_setting_pane_vc

0xeda2,	// (0x00033c96) list_single_graphic_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_single_graphic_heading_pane_vc

0xeda2,	// (0x00033c96) list_single_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_single_heading_pane_vc

0xeda2,	// (0x00033c96) list_single_number_heading_pane_vc_ParamLimits

0xeda2,	// (0x00033c96) list_single_number_heading_pane_vc

0xeadd,	// (0x000339d1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeadd,	// (0x000339d1) list_double_graphic_heading_pane_vc_g1

0xea9d,	// (0x00033991) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea9d,	// (0x00033991) list_double_graphic_heading_pane_vc_g2

0xeaa9,	// (0x0003399d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeaa9,	// (0x0003399d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x000348bd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000348bd) list_double_graphic_heading_pane_vc_g

0xedb9,	// (0x00033cad) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedb9,	// (0x00033cad) list_double_graphic_heading_pane_vc_t1

0xedcf,	// (0x00033cc3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xedcf,	// (0x00033cc3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000348c4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000348c4) list_double_graphic_heading_pane_vc_t

0xecf5,	// (0x00033be9) list_setting_pane_vc_g1_ParamLimits

0xecf5,	// (0x00033be9) list_setting_pane_vc_g1

0xed01,	// (0x00033bf5) list_setting_pane_vc_g2_ParamLimits

0xed01,	// (0x00033bf5) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x000346b3) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x000346b3) list_setting_pane_vc_g

0xeded,	// (0x00033ce1) list_setting_pane_vc_t1_ParamLimits

0xeded,	// (0x00033ce1) list_setting_pane_vc_t1

0xee09,	// (0x00033cfd) list_setting_pane_vc_t2_ParamLimits

0xee09,	// (0x00033cfd) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00034907) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00034907) list_setting_pane_vc_t

0xed6b,	// (0x00033c5f) set_value_pane_cp_vc_ParamLimits

0xed6b,	// (0x00033c5f) set_value_pane_cp_vc

0xea9d,	// (0x00033991) list_single_number_heading_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033991) list_single_number_heading_pane_vc_g1

0xeaa9,	// (0x0003399d) list_single_number_heading_pane_vc_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00034497) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00034497) list_single_number_heading_pane_vc_g

0xeab5,	// (0x000339a9) list_single_number_heading_pane_vc_t1_ParamLimits

0xeab5,	// (0x000339a9) list_single_number_heading_pane_vc_t1

0xee25,	// (0x00033d19) list_single_number_heading_pane_vc_t2_ParamLimits

0xee25,	// (0x00033d19) list_single_number_heading_pane_vc_t2

0xeacb,	// (0x000339bf) list_single_number_heading_pane_vc_t3_ParamLimits

0xeacb,	// (0x000339bf) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x0003490c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x0003490c) list_single_number_heading_pane_vc_t

0xeadd,	// (0x000339d1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeadd,	// (0x000339d1) list_single_graphic_heading_pane_vc_g1

0xea9d,	// (0x00033991) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea9d,	// (0x00033991) list_single_graphic_heading_pane_vc_g4

0xeaa9,	// (0x0003399d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeaa9,	// (0x0003399d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x000348bd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000348bd) list_single_graphic_heading_pane_vc_g

0xeab5,	// (0x000339a9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeab5,	// (0x000339a9) list_single_graphic_heading_pane_vc_t1

0xee3b,	// (0x00033d2f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee3b,	// (0x00033d2f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x00034913) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x00034913) list_single_graphic_heading_pane_vc_t

0xea9d,	// (0x00033991) list_double2_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033991) list_double2_pane_vc_g1

0xeaa9,	// (0x0003399d) list_double2_pane_vc_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00034497) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00034497) list_double2_pane_vc_g

0xed8c,	// (0x00033c80) list_double2_pane_vc_t1_ParamLimits

0xed8c,	// (0x00033c80) list_double2_pane_vc_t1

0xeae9,	// (0x000339dd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xeae9,	// (0x000339dd) list_double2_large_graphic_pane_vc_g1

0xeaf5,	// (0x000339e9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeaf5,	// (0x000339e9) list_double2_large_graphic_pane_vc_g2

0xeb01,	// (0x000339f5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeb01,	// (0x000339f5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000344b4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000344b4) list_double2_large_graphic_pane_vc_g

0xeb0d,	// (0x00033a01) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeb0d,	// (0x00033a01) list_double2_large_graphic_pane_vc_t1

0xee4d,	// (0x00033d41) list_double_time_pane_vc_g1_ParamLimits

0xee4d,	// (0x00033d41) list_double_time_pane_vc_g1

0xee59,	// (0x00033d4d) list_double_time_pane_vc_g2_ParamLimits

0xee59,	// (0x00033d4d) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x00034918) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x00034918) list_double_time_pane_vc_g

0xee65,	// (0x00033d59) list_double_time_pane_vc_t1_ParamLimits

0xee65,	// (0x00033d59) list_double_time_pane_vc_t1

0xee8f,	// (0x00033d83) list_double_time_pane_vc_t2_ParamLimits

0xee8f,	// (0x00033d83) list_double_time_pane_vc_t2

0xeed8,	// (0x00033dcc) list_double_time_pane_vc_t3_ParamLimits

0xeed8,	// (0x00033dcc) list_double_time_pane_vc_t3

0xeeea,	// (0x00033dde) list_double_time_pane_vc_t4_ParamLimits

0xeeea,	// (0x00033dde) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x0003491d) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x0003491d) list_double_time_pane_vc_t

0xea9d,	// (0x00033991) list_double_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033991) list_double_pane_vc_g1

0xeaa9,	// (0x0003399d) list_double_pane_vc_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00034497) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00034497) list_double_pane_vc_g

0xeefe,	// (0x00033df2) list_double_pane_vc_t1_ParamLimits

0xeefe,	// (0x00033df2) list_double_pane_vc_t1

0xef12,	// (0x00033e06) list_double_pane_vc_t2_ParamLimits

0xef12,	// (0x00033e06) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x00034926) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x00034926) list_double_pane_vc_t

0xea9d,	// (0x00033991) list_double_number_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033991) list_double_number_pane_vc_g1

0xeaa9,	// (0x0003399d) list_double_number_pane_vc_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00034497) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00034497) list_double_number_pane_vc_g

0xef28,	// (0x00033e1c) list_double_number_pane_vc_t1_ParamLimits

0xef28,	// (0x00033e1c) list_double_number_pane_vc_t1

0xef3a,	// (0x00033e2e) list_double_number_pane_vc_t2_ParamLimits

0xef3a,	// (0x00033e2e) list_double_number_pane_vc_t2

0xef12,	// (0x00033e06) list_double_number_pane_vc_t3_ParamLimits

0xef12,	// (0x00033e06) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x0003492b) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x0003492b) list_double_number_pane_vc_t

0xef4e,	// (0x00033e42) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef4e,	// (0x00033e42) list_double_large_graphic_pane_vc_g1

0xef70,	// (0x00033e64) list_double_large_graphic_pane_vc_g2_ParamLimits

0xef70,	// (0x00033e64) list_double_large_graphic_pane_vc_g2

0xef84,	// (0x00033e78) list_double_large_graphic_pane_vc_g3_ParamLimits

0xef84,	// (0x00033e78) list_double_large_graphic_pane_vc_g3

0xef93,	// (0x00033e87) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef93,	// (0x00033e87) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00034932) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00034932) list_double_large_graphic_pane_vc_g

0xef9f,	// (0x00033e93) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef9f,	// (0x00033e93) list_double_large_graphic_pane_vc_t1

0xefbb,	// (0x00033eaf) list_double_large_graphic_pane_vc_t2_ParamLimits

0xefbb,	// (0x00033eaf) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0003493b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0003493b) list_double_large_graphic_pane_vc_t

0xea9d,	// (0x00033991) list_double_heading_pane_vc_g1_ParamLimits

0xea9d,	// (0x00033991) list_double_heading_pane_vc_g1

0xeaa9,	// (0x0003399d) list_double_heading_pane_vc_g2_ParamLimits

0xeaa9,	// (0x0003399d) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00034497) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00034497) list_double_heading_pane_vc_g

0xefdb,	// (0x00033ecf) list_double_heading_pane_vc_t1_ParamLimits

0xefdb,	// (0x00033ecf) list_double_heading_pane_vc_t1

0xefed,	// (0x00033ee1) list_double_heading_pane_vc_t2_ParamLimits

0xefed,	// (0x00033ee1) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00034940) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00034940) list_double_heading_pane_vc_t

0xf031,	// (0x00033f25) list_double_graphic_pane_vc_g1_ParamLimits

0xf031,	// (0x00033f25) list_double_graphic_pane_vc_g1

0xf044,	// (0x00033f38) list_double_graphic_pane_vc_g2_ParamLimits

0xf044,	// (0x00033f38) list_double_graphic_pane_vc_g2

0xea9d,	// (0x00033991) list_double_graphic_pane_vc_g3_ParamLimits

0xea9d,	// (0x00033991) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00034945) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00034945) list_double_graphic_pane_vc_g

0xf061,	// (0x00033f55) list_double_graphic_pane_vc_t1_ParamLimits

0xf061,	// (0x00033f55) list_double_graphic_pane_vc_t1

0xf08b,	// (0x00033f7f) list_double_graphic_pane_vc_t2_ParamLimits

0xf08b,	// (0x00033f7f) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x0003494e) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x0003494e) list_double_graphic_pane_vc_t

0xf029,	// (0x00033f1d) aid_size_cell_fastswap

0xa2dd,	// (0x0002f1d1) aid_size_cell_touch_ParamLimits

0xa2dd,	// (0x0002f1d1) aid_size_cell_touch

0xf468,	// (0x0003435c) popup_fast_swap_wide_window_ParamLimits

0xf468,	// (0x0003435c) popup_fast_swap_wide_window

0xa49b,	// (0x0002f38f) touch_pane_ParamLimits

0xa49b,	// (0x0002f38f) touch_pane

0xd327,	// (0x0003221b) button_value_adjust_pane_cp2

0xeb46,	// (0x00033a3a) button_value_adjust_pane_cp4

0xeb4e,	// (0x00033a42) form_field_data_pane_cp2

0x9e3c,	// (0x0002ed30) form_field_data_wide_pane_cp2

0x048e,	// (0x00025382) bg_scroll_pane_ParamLimits

0x04ad,	// (0x000253a1) scroll_handle_pane_ParamLimits

0x04c1,	// (0x000253b5) scroll_sc2_down_pane_ParamLimits

0x04c1,	// (0x000253b5) scroll_sc2_down_pane

0x04e8,	// (0x000253dc) scroll_sc2_up_pane_ParamLimits

0x04e8,	// (0x000253dc) scroll_sc2_up_pane

0xc10f,	// (0x00031003) grid_wheel_folder_pane_g1_ParamLimits

0xc10f,	// (0x00031003) grid_wheel_folder_pane_g1

0x0b34,	// (0x00025a28) clock_nsta_pane_cp2_ParamLimits

0x0b34,	// (0x00025a28) clock_nsta_pane_cp2

0xaba1,	// (0x0002fa95) listscroll_midp_pane_ParamLimits

0xabad,	// (0x0002faa1) midp_canvas_pane

0x2eef,	// (0x00027de3) nsta_clock_indic_pane

0x2f23,	// (0x00027e17) listscroll_form_pane_vc

0x2f2b,	// (0x00027e1f) listscroll_set_pane_vc_ParamLimits

0x2f2b,	// (0x00027e1f) listscroll_set_pane_vc

0xb5cb,	// (0x000304bf) clock_nsta_pane

0xb5f5,	// (0x000304e9) indicator_nsta_pane

0x338d,	// (0x00028281) bg_popup_sub_pane_cp2_ParamLimits

0x33a1,	// (0x00028295) find_pane_cp2_ParamLimits

0x33a1,	// (0x00028295) find_pane_cp2

0x33b7,	// (0x000282ab) grid_toobar_pane_ParamLimits

0x3497,	// (0x0002838b) list_form_gen_pane_vc_ParamLimits

0x3497,	// (0x0002838b) list_form_gen_pane_vc

0x34ad,	// (0x000283a1) scroll_pane_cp8_vc_ParamLimits

0x34ad,	// (0x000283a1) scroll_pane_cp8_vc

0x3529,	// (0x0002841d) data_form_wide_pane_vc_ParamLimits

0x3529,	// (0x0002841d) data_form_wide_pane_vc

0x3535,	// (0x00028429) form_field_data_wide_pane_vc_g1

0x353d,	// (0x00028431) form_field_data_wide_pane_vc_t1_ParamLimits

0x353d,	// (0x00028431) form_field_data_wide_pane_vc_t1

0xd33b,	// (0x0003222f) input_focus_pane_cp6_vc_ParamLimits

0xd33b,	// (0x0003222f) input_focus_pane_cp6_vc

0x3859,	// (0x0002874d) list_midp_pane_ParamLimits

0x4c02,	// (0x00029af6) scroll_pane_cp16_ParamLimits

0x4c02,	// (0x00029af6) scroll_pane_cp16

0x38af,	// (0x000287a3) button_value_adjust_pane_ParamLimits

0x38af,	// (0x000287a3) button_value_adjust_pane

0xbd65,	// (0x00030c59) button_value_adjust_pane_cp6_ParamLimits

0xbd65,	// (0x00030c59) button_value_adjust_pane_cp6

0xbea1,	// (0x00030d95) settings_code_pane_cp_ParamLimits

0xbea1,	// (0x00030d95) settings_code_pane_cp

0xcc93,	// (0x00031b87) cell_touch_pane_g1

0xcc93,	// (0x00031b87) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x000345d2) cell_touch_pane_g

0xbfe3,	// (0x00030ed7) cell_touch_pane_cp_ParamLimits

0xbfe3,	// (0x00030ed7) cell_touch_pane_cp

0xbfff,	// (0x00030ef3) cell_touch_pane_ParamLimits

0xbfff,	// (0x00030ef3) cell_touch_pane

0xcc93,	// (0x00031b87) scroll_sc2_down_pane_g1

0xcc93,	// (0x00031b87) scroll_sc2_up_pane_g1

0xcc9d,	// (0x00031b91) bg_set_opt_pane_cp4_vc

0x4fa0,	// (0x00029e94) list_set_graphic_pane_vc_g1_ParamLimits

0x4fa0,	// (0x00029e94) list_set_graphic_pane_vc_g1

0x4fac,	// (0x00029ea0) list_set_graphic_pane_vc_g2_ParamLimits

0x4fac,	// (0x00029ea0) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000348c9) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000348c9) list_set_graphic_pane_vc_g

0x4fb8,	// (0x00029eac) text_primary_small_cp13_vc_ParamLimits

0x4fb8,	// (0x00029eac) text_primary_small_cp13_vc

0x4fd0,	// (0x00029ec4) list_set_graphic_pane_vc_ParamLimits

0x4fd0,	// (0x00029ec4) list_set_graphic_pane_vc

0xcc9d,	// (0x00031b91) input_focus_pane_cp2_vc

0xcc93,	// (0x00031b87) setting_code_pane_vc_g1

0xcd10,	// (0x00031c04) setting_code_pane_vc_t1

0x4fe3,	// (0x00029ed7) set_text_pane_vc_t1_ParamLimits

0x4fe3,	// (0x00029ed7) set_text_pane_vc_t1

0xcc9d,	// (0x00031b91) input_focus_pane_cp1_vc

0x5004,	// (0x00029ef8) list_set_text_pane_vc

0xcc93,	// (0x00031b87) setting_text_pane_vc_g1

0xcc9d,	// (0x00031b91) bg_set_opt_pane_cp2_vc

0xcd07,	// (0x00031bfb) setting_slider_graphic_pane_vc_g1

0x500e,	// (0x00029f02) setting_slider_graphic_pane_vc_t1

0x5020,	// (0x00029f14) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000348ce) setting_slider_graphic_pane_vc_t

0x5032,	// (0x00029f26) slider_set_pane_cp_vc

0x503c,	// (0x00029f30) slider_set_pane_vc_g1

0x5045,	// (0x00029f39) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000348d3) slider_set_pane_vc_g

0xd393,	// (0x00032287) set_opt_bg_pane_g1_copy1

0xd39b,	// (0x0003228f) set_opt_bg_pane_g2_copy1

0x5071,	// (0x00029f65) set_opt_bg_pane_g3_copy1

0xd3ab,	// (0x0003229f) set_opt_bg_pane_g4_copy1

0xd3b3,	// (0x000322a7) set_opt_bg_pane_g5_copy1

0xd3bb,	// (0x000322af) set_opt_bg_pane_g6_copy1

0x507b,	// (0x00029f6f) set_opt_bg_pane_g7_copy1

0x5085,	// (0x00029f79) set_opt_bg_pane_g8_copy1

0x508f,	// (0x00029f83) set_opt_bg_pane_g9_copy1

0xcc9d,	// (0x00031b91) bg_set_opt_pane_cp_vc

0x5099,	// (0x00029f8d) setting_slider_pane_vc_t1

0x50a8,	// (0x00029f9c) setting_slider_pane_vc_t2

0x50ba,	// (0x00029fae) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000348e2) setting_slider_pane_vc_t

0x50cc,	// (0x00029fc0) slider_set_pane_vc

0x17bc,	// (0x000266b0) volume_set_pane_vc_g1

0x17c5,	// (0x000266b9) volume_set_pane_vc_g2

0x17ce,	// (0x000266c2) volume_set_pane_vc_g3

0x17d7,	// (0x000266cb) volume_set_pane_vc_g4

0x17e0,	// (0x000266d4) volume_set_pane_vc_g5

0x17e9,	// (0x000266dd) volume_set_pane_vc_g6

0x17f2,	// (0x000266e6) volume_set_pane_vc_g7

0x17fb,	// (0x000266ef) volume_set_pane_vc_g8

0x1804,	// (0x000266f8) volume_set_pane_vc_g9

0x180d,	// (0x00026701) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x000348e9) volume_set_pane_vc_g

0x50d6,	// (0x00029fca) volume_set_pane_vc

0x50e0,	// (0x00029fd4) button_value_adjust_pane_cp1_vc

0x50ea,	// (0x00029fde) list_highlight_pane_cp2_vc

0x50f3,	// (0x00029fe7) list_set_pane_vc_ParamLimits

0x50f3,	// (0x00029fe7) list_set_pane_vc

0x5161,	// (0x0002a055) main_pane_set_vc_t1_ParamLimits

0x5161,	// (0x0002a055) main_pane_set_vc_t1

0x5176,	// (0x0002a06a) main_pane_set_vc_t2_ParamLimits

0x5176,	// (0x0002a06a) main_pane_set_vc_t2

0x5188,	// (0x0002a07c) main_pane_set_vc_t3_ParamLimits

0x5188,	// (0x0002a07c) main_pane_set_vc_t3

0x519c,	// (0x0002a090) main_pane_set_vc_t4_ParamLimits

0x519c,	// (0x0002a090) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x000348fe) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x000348fe) main_pane_set_vc_t

0x51b0,	// (0x0002a0a4) setting_code_pane_vc_ParamLimits

0x51b0,	// (0x0002a0a4) setting_code_pane_vc

0x51c1,	// (0x0002a0b5) setting_slider_graphic_pane_vc

0x51c1,	// (0x0002a0b5) setting_slider_pane_vc

0x51c1,	// (0x0002a0b5) setting_text_pane_vc

0x51c1,	// (0x0002a0b5) setting_volume_pane_vc

0x51cb,	// (0x0002a0bf) scroll_pane_cp121_vc

0xd315,	// (0x00032209) set_content_pane_vc

0x51d3,	// (0x0002a0c7) button_value_adjust_pane_g1

0x51dc,	// (0x0002a0d0) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00034953) button_value_adjust_pane_g

0x51e5,	// (0x0002a0d9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x51e5,	// (0x0002a0d9) form_field_slider_wide_pane_vc_t1

0x51f7,	// (0x0002a0eb) form_field_slider_wide_pane_vc_t2_ParamLimits

0x51f7,	// (0x0002a0eb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00034958) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00034958) form_field_slider_wide_pane_vc_t

0xcceb,	// (0x00031bdf) input_focus_pane_cp10_vc_ParamLimits

0xcceb,	// (0x00031bdf) input_focus_pane_cp10_vc

0x5223,	// (0x0002a117) slider_cont_pane_cp1_vc_ParamLimits

0x5223,	// (0x0002a117) slider_cont_pane_cp1_vc

0x5235,	// (0x0002a129) slider_form_pane_g1_cp2

0x5045,	// (0x00029f39) slider_form_pane_g2_cp2

0x5262,	// (0x0002a156) form_field_slider_pane_vc_t3

0x5270,	// (0x0002a164) form_field_slider_pane_vc_t4

0x527e,	// (0x0002a172) slider_form_pane_vc_ParamLimits

0x527e,	// (0x0002a172) slider_form_pane_vc

0x528b,	// (0x0002a17f) form_field_slider_pane_vc_t1_ParamLimits

0x528b,	// (0x0002a17f) form_field_slider_pane_vc_t1

0x51f7,	// (0x0002a0eb) form_field_slider_pane_vc_t2_ParamLimits

0x51f7,	// (0x0002a0eb) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x0003496a) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x0003496a) form_field_slider_pane_vc_t

0xcceb,	// (0x00031bdf) input_focus_pane_cp9_vc_ParamLimits

0xcceb,	// (0x00031bdf) input_focus_pane_cp9_vc

0x52a1,	// (0x0002a195) slider_cont_pane_vc_ParamLimits

0x52a1,	// (0x0002a195) slider_cont_pane_vc

0x52b5,	// (0x0002a1a9) list_form_graphic_pane_cp_vc_ParamLimits

0x52b5,	// (0x0002a1a9) list_form_graphic_pane_cp_vc

0x3535,	// (0x00028429) form_field_popup_wide_pane_vc_g1

0x52ca,	// (0x0002a1be) form_field_popup_wide_pane_vc_t1_ParamLimits

0x52ca,	// (0x0002a1be) form_field_popup_wide_pane_vc_t1

0xd33b,	// (0x0003222f) input_focus_pane_cp8_vc_ParamLimits

0xd33b,	// (0x0003222f) input_focus_pane_cp8_vc

0x530f,	// (0x0002a203) list_form_wide_pane_vc_ParamLimits

0x530f,	// (0x0002a203) list_form_wide_pane_vc

0x531b,	// (0x0002a20f) list_form_graphic_pane_vc_g1

0x5323,	// (0x0002a217) list_form_graphic_pane_vc_t1_ParamLimits

0x5323,	// (0x0002a217) list_form_graphic_pane_vc_t1

0xccf9,	// (0x00031bed) list_highlight_pane_cp5_vc_ParamLimits

0xccf9,	// (0x00031bed) list_highlight_pane_cp5_vc

0x533f,	// (0x0002a233) list_form_graphic_pane_vc_ParamLimits

0x533f,	// (0x0002a233) list_form_graphic_pane_vc

0x3535,	// (0x00028429) form_field_popup_pane_vc_g1

0x5355,	// (0x0002a249) form_field_popup_pane_vc_t1_ParamLimits

0x5355,	// (0x0002a249) form_field_popup_pane_vc_t1

0xd33b,	// (0x0003222f) input_focus_pane_cp7_vc_ParamLimits

0xd33b,	// (0x0003222f) input_focus_pane_cp7_vc

0x536c,	// (0x0002a260) list_form_pane_vc_ParamLimits

0x536c,	// (0x0002a260) list_form_pane_vc

0x5378,	// (0x0002a26c) data_form_pane_vc_t1_ParamLimits

0x5378,	// (0x0002a26c) data_form_pane_vc_t1

0xd393,	// (0x00032287) input_focus_pane_vc_g1

0xd39b,	// (0x0003228f) input_focus_pane_vc_g2

0xd3a3,	// (0x00032297) input_focus_pane_vc_g3

0xd3ab,	// (0x0003229f) input_focus_pane_vc_g4

0xd3b3,	// (0x000322a7) input_focus_pane_vc_g5

0xd3bb,	// (0x000322af) input_focus_pane_vc_g6

0xd3c3,	// (0x000322b7) input_focus_pane_vc_g7

0xd3cb,	// (0x000322bf) input_focus_pane_vc_g8

0xd3d3,	// (0x000322c7) input_focus_pane_vc_g9

0xcc93,	// (0x00031b87) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003455b) input_focus_pane_vc_g

0x3529,	// (0x0002841d) data_form_pane_vc_ParamLimits

0x3529,	// (0x0002841d) data_form_pane_vc

0x3535,	// (0x00028429) form_field_data_pane_vc_g1

0x5395,	// (0x0002a289) form_field_data_pane_vc_t1_ParamLimits

0x5395,	// (0x0002a289) form_field_data_pane_vc_t1

0xd33b,	// (0x0003222f) input_focus_pane_vc_ParamLimits

0xd33b,	// (0x0003222f) input_focus_pane_vc

0x53af,	// (0x0002a2a3) button_value_adjust_pane_cp3_vc

0x53b7,	// (0x0002a2ab) button_value_adjust_pane_cp5_vc

0x53bf,	// (0x0002a2b3) form_field_data_pane_vc_ParamLimits

0x53bf,	// (0x0002a2b3) form_field_data_pane_vc

0x53da,	// (0x0002a2ce) form_field_data_pane_vc_cp2

0x53e2,	// (0x0002a2d6) form_field_data_wide_pane_vc_ParamLimits

0x53e2,	// (0x0002a2d6) form_field_data_wide_pane_vc

0x53fc,	// (0x0002a2f0) form_field_data_wide_pane_vc_cp2

0x5404,	// (0x0002a2f8) form_field_popup_pane_vc_ParamLimits

0x5404,	// (0x0002a2f8) form_field_popup_pane_vc

0x541f,	// (0x0002a313) form_field_popup_wide_pane_vc_ParamLimits

0x541f,	// (0x0002a313) form_field_popup_wide_pane_vc

0x5439,	// (0x0002a32d) form_field_slider_pane_vc_ParamLimits

0x5439,	// (0x0002a32d) form_field_slider_pane_vc

0x544c,	// (0x0002a340) form_field_slider_wide_pane_vc_ParamLimits

0x544c,	// (0x0002a340) form_field_slider_wide_pane_vc

0xc01d,	// (0x00030f11) grid_touch_1_pane_ParamLimits

0xc01d,	// (0x00030f11) grid_touch_1_pane

0xc031,	// (0x00030f25) grid_touch_2_pane_ParamLimits

0xc031,	// (0x00030f25) grid_touch_2_pane

0x5532,	// (0x0002a426) touch_pane_g1_ParamLimits

0x5532,	// (0x0002a426) touch_pane_g1

0x5485,	// (0x0002a379) cell_app_pane_cp_wide_ParamLimits

0x5485,	// (0x0002a379) cell_app_pane_cp_wide

0x5496,	// (0x0002a38a) grid_popup_fast_wide_pane_ParamLimits

0x5496,	// (0x0002a38a) grid_popup_fast_wide_pane

0x54aa,	// (0x0002a39e) scroll_pane_cp19_ParamLimits

0x54aa,	// (0x0002a39e) scroll_pane_cp19

0xcc9d,	// (0x00031b91) bg_popup_window_pane_cp20

0x54be,	// (0x0002a3b2) listscroll_popup_fast_wide_pane

0xc05d,	// (0x00030f51) grid_indicator_nsta_pane

0x54d8,	// (0x0002a3cc) clock_nsta_pane_g1

0x54e1,	// (0x0002a3d5) clock_nsta_pane_t1

0xc069,	// (0x00030f5d) cell_indicator_nsta_pane_ParamLimits

0xc069,	// (0x00030f5d) cell_indicator_nsta_pane

0x5532,	// (0x0002a426) cell_indicator_nsta_pane_g1

0xc084,	// (0x00030f78) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x0003497b) cell_indicator_nsta_pane_g

0x5553,	// (0x0002a447) clock_nsta_pane_cp

0x555c,	// (0x0002a450) indicator_nsta_pane_cp

0x5566,	// (0x0002a45a) nsta_clock_indic_pane_g1

0xcd35,	// (0x00031c29) grid_indicator_pane

0x05da,	// (0x000254ce) scroll_pane_cp29

0x0a61,	// (0x00025955) indicator_nsta_pane_cp2_ParamLimits

0x0a61,	// (0x00025955) indicator_nsta_pane_cp2

0xccf9,	// (0x00031bed) main_apps_wheel_pane

0x3716,	// (0x0002860a) form_midp_field_text_pane_ParamLimits

0x3865,	// (0x00028759) scroll_bar_cp050_ParamLimits

0x55bf,	// (0x0002a4b3) cell_indicator_pane_ParamLimits

0x55bf,	// (0x0002a4b3) cell_indicator_pane

0x55d7,	// (0x0002a4cb) cell_indicator_pane_g1

0xc091,	// (0x00030f85) grid_wheel_folder_pane_ParamLimits

0xc091,	// (0x00030f85) grid_wheel_folder_pane

0xc09f,	// (0x00030f93) list_wheel_apps_pane_ParamLimits

0xc09f,	// (0x00030f93) list_wheel_apps_pane

0xc0ad,	// (0x00030fa1) main_apps_wheel_pane_g1_ParamLimits

0xc0ad,	// (0x00030fa1) main_apps_wheel_pane_g1

0xc0bd,	// (0x00030fb1) main_apps_wheel_pane_g2_ParamLimits

0xc0bd,	// (0x00030fb1) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x00034997) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x00034997) main_apps_wheel_pane_g

0xc0cd,	// (0x00030fc1) main_apps_wheel_pane_t1_ParamLimits

0xc0cd,	// (0x00030fc1) main_apps_wheel_pane_t1

0xc0e5,	// (0x00030fd9) list_wheel_apps_pane_g1

0xc0ed,	// (0x00030fe1) list_wheel_apps_pane_g2

0xc0f5,	// (0x00030fe9) list_wheel_apps_pane_g3

0xc0fd,	// (0x00030ff1) list_wheel_apps_pane_g4

0xc105,	// (0x00030ff9) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x0003499c) list_wheel_apps_pane_g

0x0d62,	// (0x00025c56) navi_icon_text_pane

0xb4bd,	// (0x000303b1) aid_fill_nsta

0xc120,	// (0x00031014) navi_icon_text_pane_g1

0xc12c,	// (0x00031020) navi_icon_text_pane_t1

0x0bf8,	// (0x00025aec) list_set_graphic_pane_t1_ParamLimits

0x0bf8,	// (0x00025aec) list_set_graphic_pane_t1

0x3fd2,	// (0x00028ec6) popup_midp_note_alarm_window_t6_ParamLimits

0x3fd2,	// (0x00028ec6) popup_midp_note_alarm_window_t6

0x3fe4,	// (0x00028ed8) popup_midp_note_alarm_window_t7_ParamLimits

0x3fe4,	// (0x00028ed8) popup_midp_note_alarm_window_t7

0x3ff6,	// (0x00028eea) popup_midp_note_alarm_window_t8_ParamLimits

0x3ff6,	// (0x00028eea) popup_midp_note_alarm_window_t8

0x4008,	// (0x00028efc) popup_midp_note_alarm_window_t9_ParamLimits

0x4008,	// (0x00028efc) popup_midp_note_alarm_window_t9

0x401a,	// (0x00028f0e) popup_midp_note_alarm_window_t10_ParamLimits

0x401a,	// (0x00028f0e) popup_midp_note_alarm_window_t10

0x402c,	// (0x00028f20) popup_midp_note_alarm_window_t11_ParamLimits

0x402c,	// (0x00028f20) popup_midp_note_alarm_window_t11

0x403e,	// (0x00028f32) scroll_pane_cp17_ParamLimits

0x403e,	// (0x00028f32) scroll_pane_cp17

0x17bc,	// (0x000266b0) volume_small_pane_cp_g1

0x1acd,	// (0x000269c1) volume_small_pane_cp_g2

0x1ad6,	// (0x000269ca) volume_small_pane_cp_g3

0x1adf,	// (0x000269d3) volume_small_pane_cp_g4

0x1ae8,	// (0x000269dc) volume_small_pane_cp_g5

0x1af1,	// (0x000269e5) volume_small_pane_cp_g6

0x1afa,	// (0x000269ee) volume_small_pane_cp_g7

0x1b03,	// (0x000269f7) volume_small_pane_cp_g8

0x1b0c,	// (0x00026a00) volume_small_pane_cp_g9

0x1b15,	// (0x00026a09) volume_small_pane_cp_g10

0x2cce,	// (0x00027bc2) midp_ticker_pane_g1_ParamLimits

0x2cda,	// (0x00027bce) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00034627) midp_ticker_pane_g_ParamLimits

0xac45,	// (0x0002fb39) midp_ticker_pane_t1_ParamLimits

0xb4e1,	// (0x000303d5) aid_fill_nsta_2

0x3851,	// (0x00028745) list_form2_midp_pane

0x49cd,	// (0x000298c1) midp_editing_number_pane_ParamLimits

0x49dc,	// (0x000298d0) midp_ticker_pane_ParamLimits

0x56ca,	// (0x0002a5be) form2_midp_field_pane

0x56ee,	// (0x0002a5e2) scroll_pane_cp51

0x570e,	// (0x0002a602) form2_midp_button_pane_ParamLimits

0x570e,	// (0x0002a602) form2_midp_button_pane

0x5720,	// (0x0002a614) form2_midp_content_pane_ParamLimits

0x5720,	// (0x0002a614) form2_midp_content_pane

0x573a,	// (0x0002a62e) form2_midp_field_choice_group_pane

0x5742,	// (0x0002a636) form2_midp_field_pane_g1

0x574a,	// (0x0002a63e) form2_midp_field_pane_g2

0x5752,	// (0x0002a646) form2_midp_field_pane_g3

0x575a,	// (0x0002a64e) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x000349c1) form2_midp_field_pane_g

0x5762,	// (0x0002a656) form2_midp_gauge_slider_pane

0x576a,	// (0x0002a65e) form2_midp_gauge_wait_pane

0x5772,	// (0x0002a666) form2_midp_image_pane_ParamLimits

0x5772,	// (0x0002a666) form2_midp_image_pane

0x578d,	// (0x0002a681) form2_midp_label_pane_ParamLimits

0x578d,	// (0x0002a681) form2_midp_label_pane

0xc15a,	// (0x0003104e) form2_midp_label_pane_cp_ParamLimits

0xc15a,	// (0x0003104e) form2_midp_label_pane_cp

0x57cd,	// (0x0002a6c1) form2_midp_string_pane_ParamLimits

0x57cd,	// (0x0002a6c1) form2_midp_string_pane

0xa096,	// (0x0002ef8a) form2_midp_text_pane_ParamLimits

0xa096,	// (0x0002ef8a) form2_midp_text_pane

0x57df,	// (0x0002a6d3) form2_midp_time_pane

0x57ef,	// (0x0002a6e3) input_focus_pane_cp51_ParamLimits

0x57ef,	// (0x0002a6e3) input_focus_pane_cp51

0x5807,	// (0x0002a6fb) form2_midp_label_pane_t1_ParamLimits

0x5807,	// (0x0002a6fb) form2_midp_label_pane_t1

0xa0b7,	// (0x0002efab) form2_mdip_text_pane_t1_ParamLimits

0xa0b7,	// (0x0002efab) form2_mdip_text_pane_t1

0xf0a9,	// (0x00033f9d) form2_midp_time_pane_t1

0x5855,	// (0x0002a749) form2_midp_gauge_slider_pane_t1

0xc17b,	// (0x0003106f) form2_midp_gauge_slider_pane_t2

0xc18d,	// (0x00031081) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x000349ca) form2_midp_gauge_slider_pane_t

0x588b,	// (0x0002a77f) form2_midp_slider_pane

0x5897,	// (0x0002a78b) form2_midp_gauge_wait_pane_t1

0x58a5,	// (0x0002a799) form2_midp_wait_pane_ParamLimits

0x58a5,	// (0x0002a799) form2_midp_wait_pane

0x357c,	// (0x00028470) list_single_2graphic_pane_cp4_ParamLimits

0x357c,	// (0x00028470) list_single_2graphic_pane_cp4

0xb98f,	// (0x00030883) list_single_midp_graphic_pane_cp_ParamLimits

0xb98f,	// (0x00030883) list_single_midp_graphic_pane_cp

0xcc9d,	// (0x00031b91) list_highlight_pane_cp20

0x58e9,	// (0x0002a7dd) list_single_2graphic_pane_g1_cp4

0x4e82,	// (0x00029d76) list_single_2graphic_pane_g2_cp4

0x58f1,	// (0x0002a7e5) list_single_2graphic_pane_t1_cp4

0xccf9,	// (0x00031bed) list_highlight_pane_cp21

0x5900,	// (0x0002a7f4) list_single_midp_graphic_pane_g4_cp

0x590f,	// (0x0002a803) list_single_midp_graphic_pane_t1_cp

0xc19f,	// (0x00031093) form2_mdip_string_pane_t1_ParamLimits

0xc19f,	// (0x00031093) form2_mdip_string_pane_t1

0xcc9d,	// (0x00031b91) bg_wml_button_pane_cp2

0xcc93,	// (0x00031b87) form2_midp_image_pane_g1

0xeb23,	// (0x00033a17) list_double_large_graphic_pane_g5_ParamLimits

0xeb23,	// (0x00033a17) list_double_large_graphic_pane_g5

0xaba1,	// (0x0002fa95) midp_form_pane_ParamLimits

0xccf9,	// (0x00031bed) main_apps_wheel_pane_ParamLimits

0xb1d5,	// (0x000300c9) popup_preview_window_ParamLimits

0xb1d5,	// (0x000300c9) popup_preview_window

0x1620,	// (0x00026514) popup_touch_info_window_ParamLimits

0x1620,	// (0x00026514) popup_touch_info_window

0x1642,	// (0x00026536) popup_touch_menu_window_ParamLimits

0x1642,	// (0x00026536) popup_touch_menu_window

0xcc89,	// (0x00031b7d) bg_popup_sub_pane_cp6

0x59c0,	// (0x0002a8b4) list_touch_menu_pane

0x59c8,	// (0x0002a8bc) list_single_touch_menu_pane_ParamLimits

0x59c8,	// (0x0002a8bc) list_single_touch_menu_pane

0x59e0,	// (0x0002a8d4) list_single_touch_menu_pane_t1

0xccf9,	// (0x00031bed) bg_popup_sub_pane_cp7_ParamLimits

0xccf9,	// (0x00031bed) bg_popup_sub_pane_cp7

0x59ee,	// (0x0002a8e2) heading_sub_pane

0x59f6,	// (0x0002a8ea) list_touch_info_pane_ParamLimits

0x59f6,	// (0x0002a8ea) list_touch_info_pane

0x5a05,	// (0x0002a8f9) list_single_touch_info_pane_ParamLimits

0x5a05,	// (0x0002a8f9) list_single_touch_info_pane

0x5a17,	// (0x0002a90b) list_single_touch_info_pane_t1

0x5a25,	// (0x0002a919) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x000349d8) list_single_touch_info_pane_t

0x2bf0,	// (0x00027ae4) bg_popup_heading_pane_cp

0x5a33,	// (0x0002a927) heading_sub_pane_t1

0x34c3,	// (0x000283b7) bg_popup_preview_window_pane_cp_ParamLimits

0x34c3,	// (0x000283b7) bg_popup_preview_window_pane_cp

0x59ee,	// (0x0002a8e2) heading_preview_pane

0x59f6,	// (0x0002a8ea) list_preview_pane_ParamLimits

0x59f6,	// (0x0002a8ea) list_preview_pane

0x5a41,	// (0x0002a935) popup_preview_window_g1

0x5a05,	// (0x0002a8f9) list_single_preview_pane_ParamLimits

0x5a05,	// (0x0002a8f9) list_single_preview_pane

0x5a49,	// (0x0002a93d) list_single_preview_pane_g1

0x5a51,	// (0x0002a945) list_single_preview_pane_t1

0x5a17,	// (0x0002a90b) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x000349dd) list_single_preview_pane_t

0x5a5f,	// (0x0002a953) bg_popup_heading_pane_cp2_ParamLimits

0x5a5f,	// (0x0002a953) bg_popup_heading_pane_cp2

0x5a75,	// (0x0002a969) heading_preview_pane_g1

0x5a7d,	// (0x0002a971) heading_preview_pane_t1_ParamLimits

0x5a7d,	// (0x0002a971) heading_preview_pane_t1

0xcd4c,	// (0x00031c40) soft_indicator_pane_t1_ParamLimits

0xd2ae,	// (0x000321a2) scroll_pane_ParamLimits

0x04d6,	// (0x000253ca) scroll_sc2_left_pane

0x04df,	// (0x000253d3) scroll_sc2_right_pane

0x04fe,	// (0x000253f2) scroll_bg_pane_g1_ParamLimits

0x0513,	// (0x00025407) scroll_bg_pane_g2_ParamLimits

0x052b,	// (0x0002541f) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x000345b2) scroll_bg_pane_g_ParamLimits

0x04fe,	// (0x000253f2) scroll_handle_pane_g1_ParamLimits

0x054d,	// (0x00025441) scroll_handle_pane_g2_ParamLimits

0x052b,	// (0x0002541f) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x000345b9) scroll_handle_pane_g_ParamLimits

0x107e,	// (0x00025f72) popup_choice_list_window_ParamLimits

0x107e,	// (0x00025f72) popup_choice_list_window

0x3399,	// (0x0002828d) choice_list_pane

0x341b,	// (0x0002830f) cell_toolbar_pane_t1

0x3443,	// (0x00028337) toolbar_button_pane_ParamLimits

0x4508,	// (0x000293fc) ai_gene_pane_1_t2_ParamLimits

0x4508,	// (0x000293fc) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000347dc) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000347dc) ai_gene_pane_1_t

0x5a9a,	// (0x0002a98e) scroll_sc2_left_pane_g1

0x5a9a,	// (0x0002a98e) scroll_sc2_right_pane_g1

0x2f17,	// (0x00027e0b) bg_popup_sub_pane_cp10

0x5aa4,	// (0x0002a998) list_choice_list_pane

0x5abd,	// (0x0002a9b1) list_single_choice_list_pane_ParamLimits

0x5abd,	// (0x0002a9b1) list_single_choice_list_pane

0x5ad5,	// (0x0002a9c9) list_single_choice_list_pane_g1

0xd49c,	// (0x00032390) list_single_choice_list_pane_t1_ParamLimits

0xd49c,	// (0x00032390) list_single_choice_list_pane_t1

0x5add,	// (0x0002a9d1) choice_list_pane_g1

0x5ae5,	// (0x0002a9d9) choice_list_pane_t1

0xcc89,	// (0x00031b7d) input_focus_pane_cp11

0xd61a,	// (0x0003250e) title_pane_stacon_g2_ParamLimits

0xd61a,	// (0x0003250e) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00034598) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00034598) title_pane_stacon_g

0x2bf0,	// (0x00027ae4) cursor_press_pane

0xae4c,	// (0x0002fd40) popup_fep_hwr_window_ParamLimits

0xae4c,	// (0x0002fd40) popup_fep_hwr_window

0x11c2,	// (0x000260b6) popup_fep_vkb_window_ParamLimits

0x11c2,	// (0x000260b6) popup_fep_vkb_window

0x5af3,	// (0x0002a9e7) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00034a06) fep_vkb_side_pane_g_ParamLimits

0x1b57,	// (0x00026a4b) fep_hwr_candidate_pane_ParamLimits

0x1b57,	// (0x00026a4b) fep_hwr_candidate_pane

0x1b81,	// (0x00026a75) fep_hwr_side_pane_ParamLimits

0x1b81,	// (0x00026a75) fep_hwr_side_pane

0x1ba3,	// (0x00026a97) fep_hwr_top_pane_ParamLimits

0x1ba3,	// (0x00026a97) fep_hwr_top_pane

0x1bbb,	// (0x00026aaf) fep_hwr_write_pane_ParamLimits

0x1bbb,	// (0x00026aaf) fep_hwr_write_pane

0xfb12,	// (0x00034a06) fep_vkb_side_pane_g

0x5afb,	// (0x0002a9ef) fep_hwr_top_pane_g1

0x5b0d,	// (0x0002aa01) fep_hwr_top_pane_g2

0x1be7,	// (0x00026adb) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x000349e2) fep_hwr_top_pane_g

0x1bfc,	// (0x00026af0) fep_hwr_top_text_pane

0x06a2,	// (0x00025596) fep_hwr_top_text_pane_g1

0x5b43,	// (0x0002aa37) fep_hwr_top_text_pane_t1

0x1d06,	// (0x00026bfa) fep_hwr_candidate_pane_g1

0x5d8e,	// (0x0002ac82) fep_vkb_keypad_pane_g3_ParamLimits

0x5d8e,	// (0x0002ac82) fep_vkb_keypad_pane_g3

0x5dba,	// (0x0002acae) fep_vkb_keypad_pane_g4_ParamLimits

0x5dba,	// (0x0002acae) fep_vkb_keypad_pane_g4

0x5e31,	// (0x0002ad25) fep_vkb_bottom_pane_g2_ParamLimits

0x5e31,	// (0x0002ad25) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00034a0d) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00034a0d) fep_vkb_bottom_pane_g

0x5a9a,	// (0x0002a98e) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00034a17) cell_vkb_side_pane_g

0x5ebc,	// (0x0002adb0) cell_vkb_side_pane_t1

0x5eca,	// (0x0002adbe) cell_vkb_side_pane_t1_copy1

0x5a9a,	// (0x0002a98e) bg_fep_vkb_candidate_pane_g2

0x600e,	// (0x0002af02) cell_vkb_candidate_pane_ParamLimits

0x5b51,	// (0x0002aa45) aid_size_cell_vkb_ParamLimits

0x5b51,	// (0x0002aa45) aid_size_cell_vkb

0x600e,	// (0x0002af02) cell_vkb_candidate_pane

0x1d20,	// (0x00026c14) bg_popup_fep_shadow_pane_g1

0xc282,	// (0x00031176) fep_vkb_bottom_pane_ParamLimits

0xc282,	// (0x00031176) fep_vkb_bottom_pane

0x5c20,	// (0x0002ab14) fep_vkb_candidate_pane_ParamLimits

0x5c20,	// (0x0002ab14) fep_vkb_candidate_pane

0xc2ae,	// (0x000311a2) fep_vkb_keypad_pane_ParamLimits

0xc2ae,	// (0x000311a2) fep_vkb_keypad_pane

0xc2d5,	// (0x000311c9) fep_vkb_side_pane_ParamLimits

0xc2d5,	// (0x000311c9) fep_vkb_side_pane

0xc311,	// (0x00031205) fep_vkb_top_pane_ParamLimits

0xc311,	// (0x00031205) fep_vkb_top_pane

0x5ce7,	// (0x0002abdb) fep_vkb_top_pane_g1_ParamLimits

0x5ce7,	// (0x0002abdb) fep_vkb_top_pane_g1

0x5cf6,	// (0x0002abea) fep_vkb_top_pane_g2_ParamLimits

0x5cf6,	// (0x0002abea) fep_vkb_top_pane_g2

0x5d05,	// (0x0002abf9) fep_vkb_top_pane_g3_ParamLimits

0x5d05,	// (0x0002abf9) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x000349fd) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x000349fd) fep_vkb_top_pane_g

0x5d23,	// (0x0002ac17) fep_vkb_top_text_pane_ParamLimits

0x5d23,	// (0x0002ac17) fep_vkb_top_text_pane

0xc34d,	// (0x00031241) fep_vkb_side_pane_g1_ParamLimits

0xc34d,	// (0x00031241) fep_vkb_side_pane_g1

0x5d7d,	// (0x0002ac71) grid_vkb_side_pane_ParamLimits

0x5d7d,	// (0x0002ac71) grid_vkb_side_pane

0x1d28,	// (0x00026c1c) bg_popup_fep_shadow_pane_g2

0x1d31,	// (0x00026c25) bg_popup_fep_shadow_pane_g3

0x1d39,	// (0x00026c2d) bg_popup_fep_shadow_pane_g4

0x1d42,	// (0x00026c36) bg_popup_fep_shadow_pane_g5

0x1d4c,	// (0x00026c40) bg_popup_fep_shadow_pane_g6

0x1d54,	// (0x00026c48) bg_popup_fep_shadow_pane_g7

0xd3b3,	// (0x000322a7) bg_popup_fep_shadow_pane_g8

0x5ddc,	// (0x0002acd0) grid_vkb_keypad_number_pane_ParamLimits

0x5ddc,	// (0x0002acd0) grid_vkb_keypad_number_pane

0x5df0,	// (0x0002ace4) grid_vkb_keypad_pane_ParamLimits

0x5df0,	// (0x0002ace4) grid_vkb_keypad_pane

0x5e16,	// (0x0002ad0a) fep_vkb_bottom_pane_g1_ParamLimits

0x5e16,	// (0x0002ad0a) fep_vkb_bottom_pane_g1

0x5e3f,	// (0x0002ad33) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5e3f,	// (0x0002ad33) grid_vkb_keypad_bottom_left_pane

0x5e54,	// (0x0002ad48) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5e54,	// (0x0002ad48) grid_vkb_keypad_bottom_right_pane

0x5e69,	// (0x0002ad5d) fep_vkb_top_text_pane_g1

0xc394,	// (0x00031288) fep_vkb_top_text_pane_t1

0xc3a6,	// (0x0003129a) cell_vkb_side_pane_ParamLimits

0xc3a6,	// (0x0003129a) cell_vkb_side_pane

0x5a9a,	// (0x0002a98e) cell_vkb_side_pane_g1

0x5ed8,	// (0x0002adcc) cell_vkb_keypad_pane_ParamLimits

0x5ed8,	// (0x0002adcc) cell_vkb_keypad_pane

0x5f65,	// (0x0002ae59) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00034a2a) bg_popup_fep_shadow_pane_g

0x5a9a,	// (0x0002a98e) cell_hwr_side_pane_g1

0x5a9a,	// (0x0002a98e) cell_hwr_side_pane_g2

0x5f6f,	// (0x0002ae63) cell_vkb_keypad_pane_t1

0xc3bc,	// (0x000312b0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3bc,	// (0x000312b0) cell_vkb_keypad_bottom_left_pane

0xc3d1,	// (0x000312c5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d1,	// (0x000312c5) cell_vkb_keypad_bottom_right_pane

0x5a9a,	// (0x0002a98e) cell_vkb_keypad_bottom_left_pane_g1

0x5a9a,	// (0x0002a98e) cell_vkb_keypad_bottom_right_pane_g1

0x5fd3,	// (0x0002aec7) cell_vkb_keypad_number_pane_ParamLimits

0x5fd3,	// (0x0002aec7) cell_vkb_keypad_number_pane

0x5ff2,	// (0x0002aee6) cell_vkb_keypad_number_pane_g1

0x5ffc,	// (0x0002aef0) cell_vkb_keypad_number_pane_g2

0x6005,	// (0x0002aef9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00034a1c) cell_vkb_keypad_number_pane_g

0x5f6f,	// (0x0002ae63) cell_vkb_keypad_number_pane_t1

0x602f,	// (0x0002af23) fep_vkb_candidate_pane_g1

0x0001,

0xfb23,	// (0x00034a17) cell_hwr_side_pane_g

0x6048,	// (0x0002af3c) cell_hwr_side_pane_t1

0x1d66,	// (0x00026c5a) cell_hwr_side_pane_t1_copy1

0x5d15,	// (0x0002ac09) cell_hwr_candidate_pane_g1

0x1d74,	// (0x00026c68) cell_hwr_candidate_pane_t1

0x5a9a,	// (0x0002a98e) cell_vkb_candidate_pane_g2

0x60ce,	// (0x0002afc2) cell_vkb_candidate_pane_t1

0x1b1e,	// (0x00026a12) bg_popup_fep_shadow_pane_ParamLimits

0x1b1e,	// (0x00026a12) bg_popup_fep_shadow_pane

0xd669,	// (0x0003255d) bg_fep_hwr_top_pane_g4

0x5b1f,	// (0x0002aa13) bg_hwr_side_pane_g1_ParamLimits

0x5b1f,	// (0x0002aa13) bg_hwr_side_pane_g1

0xc23b,	// (0x0003112f) cell_hwr_side_pane_ParamLimits

0xc23b,	// (0x0003112f) cell_hwr_side_pane

0x1c77,	// (0x00026b6b) fep_hwr_write_pane_g1_ParamLimits

0x1c77,	// (0x00026b6b) fep_hwr_write_pane_g1

0x1c84,	// (0x00026b78) fep_hwr_write_pane_g2_ParamLimits

0x1c84,	// (0x00026b78) fep_hwr_write_pane_g2

0x1c91,	// (0x00026b85) fep_hwr_write_pane_g3_ParamLimits

0x1c91,	// (0x00026b85) fep_hwr_write_pane_g3

0xc25b,	// (0x0003114f) fep_hwr_write_pane_g4_ParamLimits

0xc25b,	// (0x0003114f) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x000349e9) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x000349e9) fep_hwr_write_pane_g

0xd669,	// (0x0003255d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd669,	// (0x0003255d) bg_fep_hwr_candidate_pane_g2

0x1cb4,	// (0x00026ba8) cell_hwr_candidate_pane_ParamLimits

0x1cb4,	// (0x00026ba8) cell_hwr_candidate_pane

0x1d06,	// (0x00026bfa) fep_hwr_candidate_pane_g1_ParamLimits

0x5b7f,	// (0x0002aa73) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5b7f,	// (0x0002aa73) bg_popup_fep_shadow_pane_cp2

0x5d15,	// (0x0002ac09) fep_vkb_top_pane_g4_ParamLimits

0x5d15,	// (0x0002ac09) fep_vkb_top_pane_g4

0x5d5b,	// (0x0002ac4f) fep_vkb_side_pane_g2_ParamLimits

0x5d5b,	// (0x0002ac4f) fep_vkb_side_pane_g2

0x9d42,	// (0x0002ec36) list_setting_pane_t4_ParamLimits

0x9d42,	// (0x0002ec36) list_setting_pane_t4

0x9dde,	// (0x0002ecd2) list_setting_number_pane_t5_ParamLimits

0x9dde,	// (0x0002ecd2) list_setting_number_pane_t5

0x06f8,	// (0x000255ec) list_double_heading_pane_cp2_ParamLimits

0x06f8,	// (0x000255ec) list_double_heading_pane_cp2

0x60dc,	// (0x0002afd0) list_double_heading_pane_g1_cp2_ParamLimits

0x60dc,	// (0x0002afd0) list_double_heading_pane_g1_cp2

0x60e8,	// (0x0002afdc) list_double_heading_pane_g2_cp2_ParamLimits

0x60e8,	// (0x0002afdc) list_double_heading_pane_g2_cp2

0x60fc,	// (0x0002aff0) list_double_heading_pane_t1_cp2_ParamLimits

0x60fc,	// (0x0002aff0) list_double_heading_pane_t1_cp2

0x6112,	// (0x0002b006) list_double_heading_pane_t2_cp2_ParamLimits

0x6112,	// (0x0002b006) list_double_heading_pane_t2_cp2

0xcc81,	// (0x00031b75) aid_value_unit2

0xf48c,	// (0x00034380) popup_preview_fixed_window

0xce2c,	// (0x00031d20) bg_popup_preview_window_pane_cp02

0x6124,	// (0x0002b018) list_preview_fixed_pane

0x616a,	// (0x0002b05e) list_empty_pane_fp_ParamLimits

0x616a,	// (0x0002b05e) list_empty_pane_fp

0x616a,	// (0x0002b05e) list_single_cale_day_pane_fp_ParamLimits

0x616a,	// (0x0002b05e) list_single_cale_day_pane_fp

0x616a,	// (0x0002b05e) list_single_graphic_heading_pane_fp_ParamLimits

0x616a,	// (0x0002b05e) list_single_graphic_heading_pane_fp

0x616a,	// (0x0002b05e) list_single_graphic_pane_fp_ParamLimits

0x616a,	// (0x0002b05e) list_single_graphic_pane_fp

0x616a,	// (0x0002b05e) list_single_heading_pane_fp_ParamLimits

0x616a,	// (0x0002b05e) list_single_heading_pane_fp

0x616a,	// (0x0002b05e) list_single_pane_fp_ParamLimits

0x616a,	// (0x0002b05e) list_single_pane_fp

0x6183,	// (0x0002b077) list_single_pane_fp_g1_ParamLimits

0x6183,	// (0x0002b077) list_single_pane_fp_g1

0xf005,	// (0x00033ef9) list_single_pane_fp_g2_ParamLimits

0xf005,	// (0x00033ef9) list_single_pane_fp_g2

0xf0bc,	// (0x00033fb0) list_single_pane_fp_g3_ParamLimits

0xf0bc,	// (0x00033fb0) list_single_pane_fp_g3

0x618f,	// (0x0002b083) list_single_pane_fp_g4_ParamLimits

0x618f,	// (0x0002b083) list_single_pane_fp_g4

0x0003,

0xfb57,	// (0x00034a4b) list_single_pane_fp_g_ParamLimits

0xfb57,	// (0x00034a4b) list_single_pane_fp_g

0xf0d0,	// (0x00033fc4) list_single_pane_fp_t1_ParamLimits

0xf0d0,	// (0x00033fc4) list_single_pane_fp_t1

0xf0e7,	// (0x00033fdb) list_single_graphic_pane_fp_g1_ParamLimits

0xf0e7,	// (0x00033fdb) list_single_graphic_pane_fp_g1

0x6183,	// (0x0002b077) list_single_graphic_pane_fp_g2_ParamLimits

0x6183,	// (0x0002b077) list_single_graphic_pane_fp_g2

0xf005,	// (0x00033ef9) list_single_graphic_pane_fp_g3_ParamLimits

0xf005,	// (0x00033ef9) list_single_graphic_pane_fp_g3

0xf0bc,	// (0x00033fb0) list_single_graphic_pane_fp_g4_ParamLimits

0xf0bc,	// (0x00033fb0) list_single_graphic_pane_fp_g4

0x618f,	// (0x0002b083) list_single_graphic_pane_fp_g5_ParamLimits

0x618f,	// (0x0002b083) list_single_graphic_pane_fp_g5

0x0004,

0xfb60,	// (0x00034a54) list_single_graphic_pane_fp_g_ParamLimits

0xfb60,	// (0x00034a54) list_single_graphic_pane_fp_g

0xf0f3,	// (0x00033fe7) list_single_graphic_pane_fp_t1_ParamLimits

0xf0f3,	// (0x00033fe7) list_single_graphic_pane_fp_t1

0xf0e7,	// (0x00033fdb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf0e7,	// (0x00033fdb) list_single_graphic_heading_pane_fp_g1

0x6183,	// (0x0002b077) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6183,	// (0x0002b077) list_single_graphic_heading_pane_fp_g2

0xf005,	// (0x00033ef9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf005,	// (0x00033ef9) list_single_graphic_heading_pane_fp_g3

0xf0bc,	// (0x00033fb0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf0bc,	// (0x00033fb0) list_single_graphic_heading_pane_fp_g4

0x618f,	// (0x0002b083) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x618f,	// (0x0002b083) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034a54) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034a54) list_single_graphic_heading_pane_fp_g

0xf109,	// (0x00033ffd) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf109,	// (0x00033ffd) list_single_graphic_heading_pane_fp_t1

0xf11f,	// (0x00034013) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf11f,	// (0x00034013) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6b,	// (0x00034a5f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6b,	// (0x00034a5f) list_single_graphic_heading_pane_fp_t

0xf131,	// (0x00034025) list_single_cale_day_pane_fp_g1_ParamLimits

0xf131,	// (0x00034025) list_single_cale_day_pane_fp_g1

0x619b,	// (0x0002b08f) list_single_cale_day_pane_fp_g2_ParamLimits

0x619b,	// (0x0002b08f) list_single_cale_day_pane_fp_g2

0xf169,	// (0x0003405d) list_single_cale_day_pane_fp_g3_ParamLimits

0xf169,	// (0x0003405d) list_single_cale_day_pane_fp_g3

0xf191,	// (0x00034085) list_single_cale_day_pane_fp_g4_ParamLimits

0xf191,	// (0x00034085) list_single_cale_day_pane_fp_g4

0xf1b5,	// (0x000340a9) list_single_cale_day_pane_fp_g5_ParamLimits

0xf1b5,	// (0x000340a9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb70,	// (0x00034a64) list_single_cale_day_pane_fp_g_ParamLimits

0xfb70,	// (0x00034a64) list_single_cale_day_pane_fp_g

0xf1d9,	// (0x000340cd) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1d9,	// (0x000340cd) list_single_cale_day_pane_fp_t1

0xf1ff,	// (0x000340f3) list_single_cale_day_pane_fp_t2_ParamLimits

0xf1ff,	// (0x000340f3) list_single_cale_day_pane_fp_t2

0xf218,	// (0x0003410c) list_single_cale_day_pane_fp_t3_ParamLimits

0xf218,	// (0x0003410c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7b,	// (0x00034a6f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7b,	// (0x00034a6f) list_single_cale_day_pane_fp_t

0x6183,	// (0x0002b077) list_empty_pane_fp_g1_ParamLimits

0x6183,	// (0x0002b077) list_empty_pane_fp_g1

0xf231,	// (0x00034125) list_empty_pane_fp_t1

0xf23f,	// (0x00034133) list_empty_pane_fp_t2

0x0001,

0xfb82,	// (0x00034a76) list_empty_pane_fp_t

0x6183,	// (0x0002b077) list_single_heading_pane_fp_g1_ParamLimits

0x6183,	// (0x0002b077) list_single_heading_pane_fp_g1

0xf005,	// (0x00033ef9) list_single_heading_pane_fp_g2_ParamLimits

0xf005,	// (0x00033ef9) list_single_heading_pane_fp_g2

0xf0bc,	// (0x00033fb0) list_single_heading_pane_fp_g3_ParamLimits

0xf0bc,	// (0x00033fb0) list_single_heading_pane_fp_g3

0x0002,

0xfb87,	// (0x00034a7b) list_single_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x00034a7b) list_single_heading_pane_fp_g

0xf24d,	// (0x00034141) list_single_heading_pane_fp_t1_ParamLimits

0xf24d,	// (0x00034141) list_single_heading_pane_fp_t1

0xf25f,	// (0x00034153) list_single_heading_pane_fp_t2_ParamLimits

0xf25f,	// (0x00034153) list_single_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00034a82) list_single_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00034a82) list_single_heading_pane_fp_t

0xd4b1,	// (0x000323a5) aid_size_cell_fast

0xce0f,	// (0x00031d03) soft_indicator_pane_cp1_t1

0xd4ee,	// (0x000323e2) cell_app_pane_cp2_ParamLimits

0xd4ee,	// (0x000323e2) cell_app_pane_cp2

0x1b40,	// (0x00026a34) fep_hwr_candidate_drop_down_list_pane

0xd677,	// (0x0003256b) fep_hwr_candidate_pane_g3_ParamLimits

0xd677,	// (0x0003256b) fep_hwr_candidate_pane_g3

0xd684,	// (0x00032578) fep_hwr_candidate_pane_g4_ParamLimits

0xd684,	// (0x00032578) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x000349f6) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x000349f6) fep_hwr_candidate_pane_g

0x5c0f,	// (0x0002ab03) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5c0f,	// (0x0002ab03) fep_vkb_candidate_drop_down_list_pane

0x6037,	// (0x0002af2b) fep_vkb_candidate_pane_g3

0x603f,	// (0x0002af33) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00034a23) fep_vkb_candidate_pane_g

0x5d15,	// (0x0002ac09) cell_hwr_candidate_pane_g1_ParamLimits

0x6056,	// (0x0002af4a) cell_hwr_candidate_pane_g3_ParamLimits

0x6056,	// (0x0002af4a) cell_hwr_candidate_pane_g3

0x6077,	// (0x0002af6b) cell_hwr_candidate_pane_g4_ParamLimits

0x6077,	// (0x0002af6b) cell_hwr_candidate_pane_g4

0x0002,

0xfb49,	// (0x00034a3d) cell_hwr_candidate_pane_g_ParamLimits

0xfb49,	// (0x00034a3d) cell_hwr_candidate_pane_g

0x6098,	// (0x0002af8c) cell_vkb_candidate_pane_g3_ParamLimits

0x6098,	// (0x0002af8c) cell_vkb_candidate_pane_g3

0x60b3,	// (0x0002afa7) cell_vkb_candidate_pane_g4_ParamLimits

0x60b3,	// (0x0002afa7) cell_vkb_candidate_pane_g4

0x61a7,	// (0x0002b09b) cell_app_pane_cp2_g1_ParamLimits

0x61a7,	// (0x0002b09b) cell_app_pane_cp2_g1

0x61c5,	// (0x0002b0b9) cell_app_pane_cp2_g2_ParamLimits

0x61c5,	// (0x0002b0b9) cell_app_pane_cp2_g2

0x0001,

0xfb93,	// (0x00034a87) cell_app_pane_cp2_g_ParamLimits

0xfb93,	// (0x00034a87) cell_app_pane_cp2_g

0x61d1,	// (0x0002b0c5) cell_app_pane_cp2_t1_ParamLimits

0x61d1,	// (0x0002b0c5) cell_app_pane_cp2_t1

0xd33b,	// (0x0003222f) grid_highlight_pane_cp1_ParamLimits

0xd33b,	// (0x0003222f) grid_highlight_pane_cp1

0x1d92,	// (0x00026c86) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d92,	// (0x00026c86) cell_hwr_candidate_pane_cp1

0x5d15,	// (0x0002ac09) fep_hwr_candidate_drop_down_list_pane_g1

0x61e3,	// (0x0002b0d7) fep_hwr_candidate_drop_down_list_pane_g2

0x61f0,	// (0x0002b0e4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x00034a8c) fep_hwr_candidate_drop_down_list_pane_g

0x1db6,	// (0x00026caa) fep_hwr_candidate_drop_down_list_scroll_pane

0x1dbf,	// (0x00026cb3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1dbf,	// (0x00026cb3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1dcc,	// (0x00026cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1dcc,	// (0x00026cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1dd9,	// (0x00026ccd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1dd9,	// (0x00026ccd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6098,	// (0x0002af8c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6098,	// (0x0002af8c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x60b3,	// (0x0002afa7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x60b3,	// (0x0002afa7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1de6,	// (0x00026cda) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1de6,	// (0x00026cda) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e01,	// (0x00026cf5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e01,	// (0x00026cf5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e1c,	// (0x00026d10) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e1c,	// (0x00026d10) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9f,	// (0x00034a93) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9f,	// (0x00034a93) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x61fd,	// (0x0002b0f1) cell_vkb_candidate_pane_cp1_ParamLimits

0x61fd,	// (0x0002b0f1) cell_vkb_candidate_pane_cp1

0x5d15,	// (0x0002ac09) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5d15,	// (0x0002ac09) fep_vkb_candidate_drop_down_list_pane_g1

0x61e3,	// (0x0002b0d7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x61e3,	// (0x0002b0d7) fep_vkb_candidate_drop_down_list_pane_g2

0x61f0,	// (0x0002b0e4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x61f0,	// (0x0002b0e4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb98,	// (0x00034a8c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb98,	// (0x00034a8c) fep_vkb_candidate_drop_down_list_pane_g

0x6223,	// (0x0002b117) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6223,	// (0x0002b117) fep_vkb_candidate_drop_down_list_scroll_pane

0x6230,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6230,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x623d,	// (0x0002b131) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x623d,	// (0x0002b131) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6249,	// (0x0002b13d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6249,	// (0x0002b13d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6056,	// (0x0002af4a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6056,	// (0x0002af4a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6077,	// (0x0002af6b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6077,	// (0x0002af6b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6255,	// (0x0002b149) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6255,	// (0x0002b149) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6276,	// (0x0002b16a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6276,	// (0x0002b16a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6297,	// (0x0002b18b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6297,	// (0x0002b18b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x00034aa4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x00034aa4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa4f1,	// (0x0002f3e5) title_pane_g1_ParamLimits

0xa504,	// (0x0002f3f8) title_pane_g2_ParamLimits

0xf529,	// (0x0003441d) title_pane_g_ParamLimits

0x0692,	// (0x00025586) aid_call2_pane

0x069a,	// (0x0002558e) aid_call_pane

0x06a2,	// (0x00025596) popup_clock_analogue_window_g1

0x06a2,	// (0x00025596) popup_clock_analogue_window_g2

0x06aa,	// (0x0002559e) popup_clock_analogue_window_g3

0x06b3,	// (0x000255a7) popup_clock_analogue_window_g4

0xcc93,	// (0x00031b87) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x000345c7) popup_clock_analogue_window_g

0x06bb,	// (0x000255af) popup_clock_analogue_window_t1

0x0768,	// (0x0002565c) clock_digital_number_pane_ParamLimits

0x0768,	// (0x0002565c) clock_digital_number_pane

0x0774,	// (0x00025668) clock_digital_number_pane_cp02_ParamLimits

0x0774,	// (0x00025668) clock_digital_number_pane_cp02

0x0780,	// (0x00025674) clock_digital_number_pane_cp03_ParamLimits

0x0780,	// (0x00025674) clock_digital_number_pane_cp03

0x078c,	// (0x00025680) clock_digital_number_pane_cp04_ParamLimits

0x078c,	// (0x00025680) clock_digital_number_pane_cp04

0x0798,	// (0x0002568c) clock_digital_separator_pane_ParamLimits

0x0798,	// (0x0002568c) clock_digital_separator_pane

0x07a4,	// (0x00025698) popup_clock_digital_window_t1_ParamLimits

0x07a4,	// (0x00025698) popup_clock_digital_window_t1

0xcc93,	// (0x00031b87) clock_digital_number_pane_g1

0xcc93,	// (0x00031b87) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x000345d2) clock_digital_number_pane_g

0xcc93,	// (0x00031b87) clock_digital_separator_pane_g1

0xcc93,	// (0x00031b87) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x000345d2) clock_digital_separator_pane_g

0xb4bd,	// (0x000303b1) aid_fill_nsta_ParamLimits

0xb5f5,	// (0x000304e9) indicator_nsta_pane_ParamLimits

0x3230,	// (0x00028124) popup_clock_analogue_window

0x3230,	// (0x00028124) popup_clock_digital_window

0xc05d,	// (0x00030f51) grid_indicator_nsta_pane_ParamLimits

0x54ef,	// (0x0002a3e3) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00034976) clock_nsta_pane_t

0x047b,	// (0x0002536f) aid_size_max_handle

0xaa29,	// (0x0002f91d) aid_size_min_handle

0x2bf0,	// (0x00027ae4) editor_scroll_pane

0x62b2,	// (0x0002b1a6) ex_editor_pane

0xd477,	// (0x0003236b) scroll_pane_cp13

0xd2da,	// (0x000321ce) scroll_pane_cp14

0x06f0,	// (0x000255e4) scroll_pane_cp36

0xaab6,	// (0x0002f9aa) list_single_graphic_hl_pane_cp2_ParamLimits

0xaab6,	// (0x0002f9aa) list_single_graphic_hl_pane_cp2

0xbeea,	// (0x00030dde) list_single_graphic_hl_pane_ParamLimits

0xbeea,	// (0x00030dde) list_single_graphic_hl_pane

0xf275,	// (0x00034169) aid_size_min_hl_cp1

0x62ba,	// (0x0002b1ae) list_highlight_pane_cp34_ParamLimits

0x62ba,	// (0x0002b1ae) list_highlight_pane_cp34

0x62cb,	// (0x0002b1bf) list_single_graphic_hl_pane_g1_ParamLimits

0x62cb,	// (0x0002b1bf) list_single_graphic_hl_pane_g1

0xa0d8,	// (0x0002efcc) list_single_graphic_hl_pane_g2_ParamLimits

0xa0d8,	// (0x0002efcc) list_single_graphic_hl_pane_g2

0xa0d8,	// (0x0002efcc) list_single_graphic_hl_pane_g3_ParamLimits

0xa0d8,	// (0x0002efcc) list_single_graphic_hl_pane_g3

0xa0e4,	// (0x0002efd8) list_single_graphic_hl_pane_g4_ParamLimits

0xa0e4,	// (0x0002efd8) list_single_graphic_hl_pane_g4

0xa0f0,	// (0x0002efe4) list_single_graphic_hl_pane_g5_ParamLimits

0xa0f0,	// (0x0002efe4) list_single_graphic_hl_pane_g5

0x0004,

0xfbc1,	// (0x00034ab5) list_single_graphic_hl_pane_g_ParamLimits

0xfbc1,	// (0x00034ab5) list_single_graphic_hl_pane_g

0xa104,	// (0x0002eff8) list_single_graphic_hl_pane_t1_ParamLimits

0xa104,	// (0x0002eff8) list_single_graphic_hl_pane_t1

0x62d8,	// (0x0002b1cc) aid_size_min_hl_cp2

0x62e1,	// (0x0002b1d5) list_highlight_pane_cp34_cp2_ParamLimits

0x62e1,	// (0x0002b1d5) list_highlight_pane_cp34_cp2

0x62cb,	// (0x0002b1bf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x62cb,	// (0x0002b1bf) list_single_graphic_hl_pane_g1_cp2

0x62ee,	// (0x0002b1e2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x62ee,	// (0x0002b1e2) list_single_graphic_hl_pane_g2_cp2

0x62fa,	// (0x0002b1ee) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x62fa,	// (0x0002b1ee) list_single_graphic_hl_pane_g3_cp2

0x6308,	// (0x0002b1fc) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6308,	// (0x0002b1fc) list_single_graphic_hl_pane_g4_cp2

0x6314,	// (0x0002b208) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6314,	// (0x0002b208) list_single_graphic_hl_pane_g5_cp2

0xac99,	// (0x0002fb8d) control_pane_g4_ParamLimits

0xac99,	// (0x0002fb8d) control_pane_g4

0x2f17,	// (0x00027e0b) bg_popup_sub_pane_cp10_ParamLimits

0x5aa4,	// (0x0002a998) list_choice_list_pane_ParamLimits

0x5ab3,	// (0x0002a9a7) scroll_pane_cp23

0xce2c,	// (0x00031d20) bg_popup_preview_window_pane_cp02_ParamLimits

0x6124,	// (0x0002b018) list_preview_fixed_pane_ParamLimits

0x613a,	// (0x0002b02e) list_preview_fixed_pane_cp_ParamLimits

0x613a,	// (0x0002b02e) list_preview_fixed_pane_cp

0x6146,	// (0x0002b03a) popup_preview_fixed_window_g1_ParamLimits

0x6146,	// (0x0002b03a) popup_preview_fixed_window_g1

0x6152,	// (0x0002b046) popup_preview_fixed_window_g2_ParamLimits

0x6152,	// (0x0002b046) popup_preview_fixed_window_g2

0x0002,

0xfb50,	// (0x00034a44) popup_preview_fixed_window_g_ParamLimits

0xfb50,	// (0x00034a44) popup_preview_fixed_window_g

0x0312,	// (0x00025206) aid_navi_side_left_pane_ParamLimits

0x0327,	// (0x0002521b) aid_navi_side_right_pane_ParamLimits

0x033f,	// (0x00025233) navi_icon_pane_stacon_ParamLimits

0x0353,	// (0x00025247) navi_navi_pane_stacon_ParamLimits

0x033f,	// (0x00025233) navi_text_pane_stacon_ParamLimits

0xcc89,	// (0x00031b7d) main_text_info_pane

0x633e,	// (0x0002b232) listscroll_text_info_pane

0x6346,	// (0x0002b23a) list_text_info_pane_ParamLimits

0x6346,	// (0x0002b23a) list_text_info_pane

0x6355,	// (0x0002b249) scroll_pane_cp24_ParamLimits

0x6355,	// (0x0002b249) scroll_pane_cp24

0xc3ec,	// (0x000312e0) list_text_info_pane_t1_ParamLimits

0xc3ec,	// (0x000312e0) list_text_info_pane_t1

0xadb0,	// (0x0002fca4) popup_fast_swap2_window_ParamLimits

0xadb0,	// (0x0002fca4) popup_fast_swap2_window

0x6398,	// (0x0002b28c) aid_size_cell_fast2

0xcc89,	// (0x00031b7d) bg_popup_window_pane_cp17

0x63a2,	// (0x0002b296) heading_pane_cp2

0x63aa,	// (0x0002b29e) listscroll_fast2_pane

0x63b2,	// (0x0002b2a6) grid_fast2_pane

0x63bc,	// (0x0002b2b0) listscroll_fast2_pane_g1

0x63c6,	// (0x0002b2ba) listscroll_fast2_pane_g2

0x0001,

0xfbcc,	// (0x00034ac0) listscroll_fast2_pane_g

0xd477,	// (0x0003236b) scroll_pane_cp26

0x63d0,	// (0x0002b2c4) cell_fast2_pane_ParamLimits

0x63d0,	// (0x0002b2c4) cell_fast2_pane

0x63e7,	// (0x0002b2db) cell_fast2_pane_g1

0x63f0,	// (0x0002b2e4) cell_fast2_pane_g2

0x63f9,	// (0x0002b2ed) cell_fast2_pane_g3

0x0002,

0xfbd1,	// (0x00034ac5) cell_fast2_pane_g

0xd0a1,	// (0x00031f95) grid_highlight_pane_cp9

0xd0b6,	// (0x00031faa) main_eswt_pane_ParamLimits

0xd0b6,	// (0x00031faa) main_eswt_pane

0x636a,	// (0x0002b25e) list_single_text_info_pane

0x6401,	// (0x0002b2f5) eswt_ctrl_button_pane

0x6401,	// (0x0002b2f5) eswt_ctrl_canvas_pane

0x6409,	// (0x0002b2fd) eswt_ctrl_combo_pane

0x6401,	// (0x0002b2f5) eswt_ctrl_default_pane

0x6401,	// (0x0002b2f5) eswt_ctrl_label_pane

0x6411,	// (0x0002b305) eswt_ctrl_wait_pane

0x6419,	// (0x0002b30d) eswt_shell_pane

0xcc89,	// (0x00031b7d) listscroll_eswt_app_pane

0x6439,	// (0x0002b32d) popup_eswt_tasktip_window_ParamLimits

0x6439,	// (0x0002b32d) popup_eswt_tasktip_window

0x34c3,	// (0x000283b7) bg_popup_window_pane_cp18

0x6452,	// (0x0002b346) eswt_control_pane_g1_ParamLimits

0x6452,	// (0x0002b346) eswt_control_pane_g1

0x645f,	// (0x0002b353) eswt_control_pane_g2_ParamLimits

0x645f,	// (0x0002b353) eswt_control_pane_g2

0x646c,	// (0x0002b360) eswt_control_pane_g3_ParamLimits

0x646c,	// (0x0002b360) eswt_control_pane_g3

0x6479,	// (0x0002b36d) eswt_control_pane_g4_ParamLimits

0x6479,	// (0x0002b36d) eswt_control_pane_g4

0x0003,

0xfbd8,	// (0x00034acc) eswt_control_pane_g_ParamLimits

0xfbd8,	// (0x00034acc) eswt_control_pane_g

0xd33b,	// (0x0003222f) bg_button_pane_ParamLimits

0xd33b,	// (0x0003222f) bg_button_pane

0xd0b6,	// (0x00031faa) common_borders_pane_copy2_ParamLimits

0xd0b6,	// (0x00031faa) common_borders_pane_copy2

0x6486,	// (0x0002b37a) control_button_pane_g1_ParamLimits

0x6486,	// (0x0002b37a) control_button_pane_g1

0x6492,	// (0x0002b386) control_button_pane_g2_ParamLimits

0x6492,	// (0x0002b386) control_button_pane_g2

0x649e,	// (0x0002b392) control_button_pane_g3_ParamLimits

0x649e,	// (0x0002b392) control_button_pane_g3

0x0002,

0xfbe1,	// (0x00034ad5) control_button_pane_g_ParamLimits

0xfbe1,	// (0x00034ad5) control_button_pane_g

0x64b2,	// (0x0002b3a6) control_button_pane_t1

0x64c0,	// (0x0002b3b4) control_button_pane_t2

0x0001,

0xfbe8,	// (0x00034adc) control_button_pane_t

0x344f,	// (0x00028343) bg_button_pane_g1

0x3457,	// (0x0002834b) bg_button_pane_g2

0x345f,	// (0x00028353) bg_button_pane_g3

0x3467,	// (0x0002835b) bg_button_pane_g4

0x346f,	// (0x00028363) bg_button_pane_g5

0x3477,	// (0x0002836b) bg_button_pane_g6

0x347f,	// (0x00028373) bg_button_pane_g7

0x3487,	// (0x0002837b) bg_button_pane_g8

0x348f,	// (0x00028383) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00034730) bg_button_pane_g

0x5a5f,	// (0x0002a953) common_borders_pane_ParamLimits

0x5a5f,	// (0x0002a953) common_borders_pane

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy1_ParamLimits

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy1

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy1_ParamLimits

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy1

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy1_ParamLimits

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy1

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy1_ParamLimits

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy1

0x5a9a,	// (0x0002a98e) bg_eswt_ctrl_canvas_pane_g1

0x5a5f,	// (0x0002a953) common_borders_pane_cp2_ParamLimits

0x5a5f,	// (0x0002a953) common_borders_pane_cp2

0x5a5f,	// (0x0002a953) common_borders_pane_cp3_ParamLimits

0x5a5f,	// (0x0002a953) common_borders_pane_cp3

0x64ce,	// (0x0002b3c2) separator_horizontal_pane

0x64d6,	// (0x0002b3ca) separator_vertical_pane

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy2_ParamLimits

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy2

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy2_ParamLimits

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy2

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy2_ParamLimits

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy2

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy2_ParamLimits

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy2

0xcc89,	// (0x00031b7d) common_borders_pane_cp4

0x64df,	// (0x0002b3d3) separator_horizontal_pane_g1

0x64e8,	// (0x0002b3dc) separator_horizontal_pane_g2

0x64f1,	// (0x0002b3e5) separator_horizontal_pane_g3

0x0002,

0xfbed,	// (0x00034ae1) separator_horizontal_pane_g

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy3_ParamLimits

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy3

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy3_ParamLimits

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy3

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy3_ParamLimits

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy3

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy3_ParamLimits

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy3

0xcc89,	// (0x00031b7d) common_borders_pane_cp5

0x64fa,	// (0x0002b3ee) separator_vertical_pane_g1

0x6503,	// (0x0002b3f7) separator_vertical_pane_g2

0x650c,	// (0x0002b400) separator_vertical_pane_g3

0x0002,

0xfbf4,	// (0x00034ae8) separator_vertical_pane_g

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy4_ParamLimits

0x6452,	// (0x0002b346) eswt_control_pane_g1_copy4

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy4_ParamLimits

0x645f,	// (0x0002b353) eswt_control_pane_g2_copy4

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy4_ParamLimits

0x646c,	// (0x0002b360) eswt_control_pane_g3_copy4

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy4_ParamLimits

0x6479,	// (0x0002b36d) eswt_control_pane_g4_copy4

0xc40e,	// (0x00031302) eswt_ctrl_combo_button_pane

0xc416,	// (0x0003130a) eswt_ctrl_input_pane

0xc41e,	// (0x00031312) popup_choice_list_window_cp70

0xc426,	// (0x0003131a) eswt_ctrl_input_pane_t1

0xcc89,	// (0x00031b7d) input_focus_pane_cp70

0x5a5f,	// (0x0002a953) bg_button_pane_cp70_ParamLimits

0x5a5f,	// (0x0002a953) bg_button_pane_cp70

0xc434,	// (0x00031328) eswt_ctrl_combo_button_pane_g1

0x6543,	// (0x0002b437) wait_bar_pane_cp70

0x34c3,	// (0x000283b7) bg_popup_window_pane_cp70_ParamLimits

0x34c3,	// (0x000283b7) bg_popup_window_pane_cp70

0x654b,	// (0x0002b43f) popup_eswt_tasktip_window_t1

0x6561,	// (0x0002b455) wait_bar_pane_cp71_ParamLimits

0x6561,	// (0x0002b455) wait_bar_pane_cp71

0x656d,	// (0x0002b461) grid_eswt_app_pane

0x04df,	// (0x000253d3) scroll_pane_cp70

0xc43c,	// (0x00031330) cell_eswt_app_pane_ParamLimits

0xc43c,	// (0x00031330) cell_eswt_app_pane

0xc46e,	// (0x00031362) cell_eswt_app_pane_g1_ParamLimits

0xc46e,	// (0x00031362) cell_eswt_app_pane_g1

0xc49d,	// (0x00031391) cell_eswt_app_pane_g2_ParamLimits

0xc49d,	// (0x00031391) cell_eswt_app_pane_g2

0x0001,

0xfbfb,	// (0x00034aef) cell_eswt_app_pane_g_ParamLimits

0xfbfb,	// (0x00034aef) cell_eswt_app_pane_g

0xc4c6,	// (0x000313ba) cell_eswt_app_pane_t1_ParamLimits

0xc4c6,	// (0x000313ba) cell_eswt_app_pane_t1

0x6632,	// (0x0002b526) grid_highlight_pane_cp70_ParamLimits

0x6632,	// (0x0002b526) grid_highlight_pane_cp70

0x0db7,	// (0x00025cab) set_content_pane_g1

0xac7d,	// (0x0002fb71) status_small_volume_pane

0xc4f8,	// (0x000313ec) status_small_volume_pane_g1

0xc500,	// (0x000313f4) volume_small2_pane

0xc509,	// (0x000313fd) volume_small2_pane_g1

0xc512,	// (0x00031406) volume_small2_pane_g2

0xc51b,	// (0x0003140f) volume_small2_pane_g3

0xc524,	// (0x00031418) volume_small2_pane_g4

0xc52d,	// (0x00031421) volume_small2_pane_g5

0xc536,	// (0x0003142a) volume_small2_pane_g6

0xc53f,	// (0x00031433) volume_small2_pane_g7

0xc548,	// (0x0003143c) volume_small2_pane_g8

0xc551,	// (0x00031445) volume_small2_pane_g9

0xc55a,	// (0x0003144e) volume_small2_pane_g10

0x0009,

0xfc00,	// (0x00034af4) volume_small2_pane_g

0x5e69,	// (0x0002ad5d) fep_vkb_top_text_pane_g1_ParamLimits

0xc394,	// (0x00031288) fep_vkb_top_text_pane_t1_ParamLimits

0x615e,	// (0x0002b052) popup_preview_fixed_window_g3_ParamLimits

0x615e,	// (0x0002b052) popup_preview_fixed_window_g3

0xb450,	// (0x00030344) popup_toolbar_trans_pane

0xbd54,	// (0x00030c48) aid_height_set_list_ParamLimits

0x482c,	// (0x00029720) aid_size_parent_ParamLimits

0x2f17,	// (0x00027e0b) list_highlight_pane_cp2_ParamLimits

0x0db7,	// (0x00025cab) set_content_pane_g1_ParamLimits

0xbefe,	// (0x00030df2) list_single_image_pane_ParamLimits

0xbefe,	// (0x00030df2) list_single_image_pane

0xc563,	// (0x00031457) aid_size_cell_image_ParamLimits

0xc563,	// (0x00031457) aid_size_cell_image

0xc570,	// (0x00031464) grid_single_image_pane_ParamLimits

0xc570,	// (0x00031464) grid_single_image_pane

0xd349,	// (0x0003223d) list_single_image_pane_g1_ParamLimits

0xd349,	// (0x0003223d) list_single_image_pane_g1

0xd355,	// (0x00032249) list_single_image_pane_g2_ParamLimits

0xd355,	// (0x00032249) list_single_image_pane_g2

0x0001,

0xfc15,	// (0x00034b09) list_single_image_pane_g_ParamLimits

0xfc15,	// (0x00034b09) list_single_image_pane_g

0x6659,	// (0x0002b54d) list_single_image_pane_t1_ParamLimits

0x6659,	// (0x0002b54d) list_single_image_pane_t1

0xc57e,	// (0x00031472) cell_image_list_pane_ParamLimits

0xc57e,	// (0x00031472) cell_image_list_pane

0xc594,	// (0x00031488) cell_image_list_pane_g1

0xc59d,	// (0x00031491) cell_image_list_pane_g2

0x0001,

0xfc1a,	// (0x00034b0e) cell_image_list_pane_g

0x6699,	// (0x0002b58d) aid_size_cell_tb_trans_pane

0xd33b,	// (0x0003222f) bg_tb_trans_pane

0x66ab,	// (0x0002b59f) grid_tb_trans_pane

0x344f,	// (0x00028343) bg_tb_trans_pane_g1

0x3457,	// (0x0002834b) bg_tb_trans_pane_g2

0x345f,	// (0x00028353) bg_tb_trans_pane_g3

0x3467,	// (0x0002835b) bg_tb_trans_pane_g4

0x346f,	// (0x00028363) bg_tb_trans_pane_g5

0x3487,	// (0x0002837b) bg_tb_trans_pane_g6

0x348f,	// (0x00028383) bg_tb_trans_pane_g7

0x3477,	// (0x0002836b) bg_tb_trans_pane_g8

0x347f,	// (0x00028373) bg_tb_trans_pane_g9

0x0008,

0xfc1f,	// (0x00034b13) bg_tb_trans_pane_g

0x66bf,	// (0x0002b5b3) cell_toolbar_trans_pane_ParamLimits

0x66bf,	// (0x0002b5b3) cell_toolbar_trans_pane

0x5a9a,	// (0x0002a98e) cell_toolbar_trans_pane_g1

0xc13e,	// (0x00031032) list_form2_midp_pane_t1

0xc14c,	// (0x00031040) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x000349bc) list_form2_midp_pane_t

0x56ee,	// (0x0002a5e2) scroll_pane_cp51_ParamLimits

0x58b5,	// (0x0002a7a9) form2_midp_wait_pane_g1

0x58be,	// (0x0002a7b2) form2_midp_wait_pane_g2

0x58c7,	// (0x0002a7bb) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x000349d1) form2_midp_wait_pane_g

0xccf9,	// (0x00031bed) list_highlight_pane_cp21_ParamLimits

0x5900,	// (0x0002a7f4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x590f,	// (0x0002a803) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeda2,	// (0x00033c96) list_single_2graphic_im_pane_ParamLimits

0xeda2,	// (0x00033c96) list_single_2graphic_im_pane

0xc5a6,	// (0x0003149a) list_single_2graphic_im_pane_g1_ParamLimits

0xc5a6,	// (0x0003149a) list_single_2graphic_im_pane_g1

0xc5b7,	// (0x000314ab) list_single_2graphic_im_pane_g2_ParamLimits

0xc5b7,	// (0x000314ab) list_single_2graphic_im_pane_g2

0xc5c3,	// (0x000314b7) list_single_2graphic_im_pane_g3_ParamLimits

0xc5c3,	// (0x000314b7) list_single_2graphic_im_pane_g3

0x0003,

0xfc32,	// (0x00034b26) list_single_2graphic_im_pane_g_ParamLimits

0xfc32,	// (0x00034b26) list_single_2graphic_im_pane_g

0xc5d7,	// (0x000314cb) list_single_2graphic_im_pane_t1_ParamLimits

0xc5d7,	// (0x000314cb) list_single_2graphic_im_pane_t1

0x616a,	// (0x0002b05e) list_single_graphic_2heading_pane_fp_ParamLimits

0x616a,	// (0x0002b05e) list_single_graphic_2heading_pane_fp

0xf0e7,	// (0x00033fdb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf0e7,	// (0x00033fdb) list_single_graphic_2heading_pane_fp_g1

0x6183,	// (0x0002b077) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6183,	// (0x0002b077) list_single_graphic_2heading_pane_fp_g2

0xf005,	// (0x00033ef9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf005,	// (0x00033ef9) list_single_graphic_2heading_pane_fp_g3

0xf0bc,	// (0x00033fb0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf0bc,	// (0x00033fb0) list_single_graphic_2heading_pane_fp_g4

0x618f,	// (0x0002b083) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x618f,	// (0x0002b083) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb60,	// (0x00034a54) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb60,	// (0x00034a54) list_single_graphic_2heading_pane_fp_g

0xf27e,	// (0x00034172) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf27e,	// (0x00034172) list_single_graphic_2heading_pane_fp_t1

0xf11f,	// (0x00034013) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf11f,	// (0x00034013) list_single_graphic_2heading_pane_fp_t2

0xf294,	// (0x00034188) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf294,	// (0x00034188) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3b,	// (0x00034b2f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3b,	// (0x00034b2f) list_single_graphic_2heading_pane_fp_t

0x5b2b,	// (0x0002aa1f) fep_hwr_write_pane_g5_ParamLimits

0x5b2b,	// (0x0002aa1f) fep_hwr_write_pane_g5

0x5b37,	// (0x0002aa2b) fep_hwr_write_pane_g6_ParamLimits

0x5b37,	// (0x0002aa2b) fep_hwr_write_pane_g6

0x6419,	// (0x0002b30d) eswt_shell_pane_ParamLimits

0x34c3,	// (0x000283b7) bg_popup_window_pane_cp18_ParamLimits

0x644a,	// (0x0002b33e) heading_pane_cp70

0x654b,	// (0x0002b43f) popup_eswt_tasktip_window_t1_ParamLimits

0xb51a,	// (0x0003040e) aid_touch_tab_arrow_left

0xb530,	// (0x00030424) aid_touch_tab_arrow_right

0xa528,	// (0x0002f41c) title_pane_g3_ParamLimits

0xa528,	// (0x0002f41c) title_pane_g3

0xd2fa,	// (0x000321ee) set_value_pane_g1

0xb450,	// (0x00030344) popup_toolbar_trans_pane_ParamLimits

0x6699,	// (0x0002b58d) aid_size_cell_tb_trans_pane_ParamLimits

0xd33b,	// (0x0003222f) bg_tb_trans_pane_ParamLimits

0x66ab,	// (0x0002b59f) grid_tb_trans_pane_ParamLimits

0xce2c,	// (0x00031d20) cont_note_pane_ParamLimits

0xce2c,	// (0x00031d20) cont_note_pane

0xd0b6,	// (0x00031faa) cont_snote2_single_text_pane_ParamLimits

0xd0b6,	// (0x00031faa) cont_snote2_single_text_pane

0xd0b6,	// (0x00031faa) cont_snote2_single_graphic_pane_ParamLimits

0xd0b6,	// (0x00031faa) cont_snote2_single_graphic_pane

0x3ab5,	// (0x000289a9) cont_note_wait_pane_ParamLimits

0x3ab5,	// (0x000289a9) cont_note_wait_pane

0x3ab5,	// (0x000289a9) cont_note_image_pane_ParamLimits

0x3ab5,	// (0x000289a9) cont_note_image_pane

0x6753,	// (0x0002b647) popup_note2_window_g1_ParamLimits

0x6753,	// (0x0002b647) popup_note2_window_g1

0x6784,	// (0x0002b678) popup_note2_window_t1_ParamLimits

0x6784,	// (0x0002b678) popup_note2_window_t1

0x67c9,	// (0x0002b6bd) popup_note2_window_t2_ParamLimits

0x67c9,	// (0x0002b6bd) popup_note2_window_t2

0x680e,	// (0x0002b702) popup_note2_window_t3_ParamLimits

0x680e,	// (0x0002b702) popup_note2_window_t3

0x6853,	// (0x0002b747) popup_note2_window_t4_ParamLimits

0x6853,	// (0x0002b747) popup_note2_window_t4

0xceb0,	// (0x00031da4) popup_note2_window_t5_ParamLimits

0xceb0,	// (0x00031da4) popup_note2_window_t5

0x0004,

0xfc47,	// (0x00034b3b) popup_note2_window_t_ParamLimits

0xfc47,	// (0x00034b3b) popup_note2_window_t

0x6882,	// (0x0002b776) popup_note2_image_window_g1_ParamLimits

0x6882,	// (0x0002b776) popup_note2_image_window_g1

0x688e,	// (0x0002b782) popup_note2_image_window_g2_ParamLimits

0x688e,	// (0x0002b782) popup_note2_image_window_g2

0x0001,

0xfc52,	// (0x00034b46) popup_note2_image_window_g_ParamLimits

0xfc52,	// (0x00034b46) popup_note2_image_window_g

0x68a0,	// (0x0002b794) popup_note2_image_window_t1_ParamLimits

0x68a0,	// (0x0002b794) popup_note2_image_window_t1

0x68b8,	// (0x0002b7ac) popup_note2_image_window_t2_ParamLimits

0x68b8,	// (0x0002b7ac) popup_note2_image_window_t2

0x68d0,	// (0x0002b7c4) popup_note2_image_window_t3_ParamLimits

0x68d0,	// (0x0002b7c4) popup_note2_image_window_t3

0x0002,

0xfc57,	// (0x00034b4b) popup_note2_image_window_t_ParamLimits

0xfc57,	// (0x00034b4b) popup_note2_image_window_t

0x3ac3,	// (0x000289b7) popup_note2_wait_window_g1_ParamLimits

0x3ac3,	// (0x000289b7) popup_note2_wait_window_g1

0x68ec,	// (0x0002b7e0) popup_note2_wait_window_g2_ParamLimits

0x68ec,	// (0x0002b7e0) popup_note2_wait_window_g2

0x3adb,	// (0x000289cf) popup_note2_wait_window_g3_ParamLimits

0x3adb,	// (0x000289cf) popup_note2_wait_window_g3

0x0002,

0xfc5e,	// (0x00034b52) popup_note2_wait_window_g_ParamLimits

0xfc5e,	// (0x00034b52) popup_note2_wait_window_g

0x68f8,	// (0x0002b7ec) popup_note2_wait_window_t1_ParamLimits

0x68f8,	// (0x0002b7ec) popup_note2_wait_window_t1

0x6916,	// (0x0002b80a) popup_note2_wait_window_t2_ParamLimits

0x6916,	// (0x0002b80a) popup_note2_wait_window_t2

0x6934,	// (0x0002b828) popup_note2_wait_window_t3_ParamLimits

0x6934,	// (0x0002b828) popup_note2_wait_window_t3

0x6946,	// (0x0002b83a) popup_note2_wait_window_t4_ParamLimits

0x6946,	// (0x0002b83a) popup_note2_wait_window_t4

0x0003,

0xfc65,	// (0x00034b59) popup_note2_wait_window_t_ParamLimits

0xfc65,	// (0x00034b59) popup_note2_wait_window_t

0x6958,	// (0x0002b84c) wait_bar2_pane_ParamLimits

0x6958,	// (0x0002b84c) wait_bar2_pane

0x6970,	// (0x0002b864) popup_snote2_single_text_window_g1_ParamLimits

0x6970,	// (0x0002b864) popup_snote2_single_text_window_g1

0x6998,	// (0x0002b88c) popup_snote2_single_text_window_t1_ParamLimits

0x6998,	// (0x0002b88c) popup_snote2_single_text_window_t1

0x69e4,	// (0x0002b8d8) popup_snote2_single_text_window_t2_ParamLimits

0x69e4,	// (0x0002b8d8) popup_snote2_single_text_window_t2

0x6a30,	// (0x0002b924) popup_snote2_single_text_window_t3_ParamLimits

0x6a30,	// (0x0002b924) popup_snote2_single_text_window_t3

0x6a71,	// (0x0002b965) popup_snote2_single_text_window_t4_ParamLimits

0x6a71,	// (0x0002b965) popup_snote2_single_text_window_t4

0x6aa7,	// (0x0002b99b) popup_snote2_single_text_window_t5_ParamLimits

0x6aa7,	// (0x0002b99b) popup_snote2_single_text_window_t5

0x0004,

0xfc6e,	// (0x00034b62) popup_snote2_single_text_window_t_ParamLimits

0xfc6e,	// (0x00034b62) popup_snote2_single_text_window_t

0x6ad2,	// (0x0002b9c6) popup_snote2_single_graphic_window_g1_ParamLimits

0x6ad2,	// (0x0002b9c6) popup_snote2_single_graphic_window_g1

0x6afa,	// (0x0002b9ee) popup_snote2_single_graphic_window_g2_ParamLimits

0x6afa,	// (0x0002b9ee) popup_snote2_single_graphic_window_g2

0x0001,

0xfc79,	// (0x00034b6d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc79,	// (0x00034b6d) popup_snote2_single_graphic_window_g

0x6b22,	// (0x0002ba16) popup_snote2_single_graphic_window_t1_ParamLimits

0x6b22,	// (0x0002ba16) popup_snote2_single_graphic_window_t1

0x6b6e,	// (0x0002ba62) popup_snote2_single_graphic_window_t2_ParamLimits

0x6b6e,	// (0x0002ba62) popup_snote2_single_graphic_window_t2

0x6a30,	// (0x0002b924) popup_snote2_single_graphic_window_t3_ParamLimits

0x6a30,	// (0x0002b924) popup_snote2_single_graphic_window_t3

0x6a71,	// (0x0002b965) popup_snote2_single_graphic_window_t4_ParamLimits

0x6a71,	// (0x0002b965) popup_snote2_single_graphic_window_t4

0x6aa7,	// (0x0002b99b) popup_snote2_single_graphic_window_t5_ParamLimits

0x6aa7,	// (0x0002b99b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7e,	// (0x00034b72) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7e,	// (0x00034b72) popup_snote2_single_graphic_window_t

0x559e,	// (0x0002a492) clock_nsta_pane_cp2_t1

0x559e,	// (0x0002a492) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00034992) clock_nsta_pane_cp2_t

0xebaf,	// (0x00033aa3) form_field_data_wide_pane_g1_ParamLimits

0xd349,	// (0x0003223d) form_field_data_wide_pane_g2_ParamLimits

0xd349,	// (0x0003223d) form_field_data_wide_pane_g2

0xd355,	// (0x00032249) form_field_data_wide_pane_g3_ParamLimits

0xd355,	// (0x00032249) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003454a) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003454a) form_field_data_wide_pane_g

0xc047,	// (0x00030f3b) grid_touch_3_pane_ParamLimits

0xc047,	// (0x00030f3b) grid_touch_3_pane

0xc608,	// (0x000314fc) cell_touch_3_pane_ParamLimits

0xc608,	// (0x000314fc) cell_touch_3_pane

0x5a9a,	// (0x0002a98e) cell_touch_3_pane_g1

0x5a9a,	// (0x0002a98e) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00034a17) cell_touch_3_pane_g

0xcf08,	// (0x00031dfc) cont_query_data_pane

0xcf10,	// (0x00031e04) cont_query_data_pane_cp1

0x6bed,	// (0x0002bae1) button_value_adjust_pane_cp7

0x6bf5,	// (0x0002bae9) query_popup_pane_cp3

0x0821,	// (0x00025715) bg_popup_sub_pane_cp22_ParamLimits

0x0837,	// (0x0002572b) navi_navi_volume_pane_cp2

0x0852,	// (0x00025746) popup_side_volume_key_window_g2

0x0861,	// (0x00025755) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x000345e0) popup_side_volume_key_window_g

0x087e,	// (0x00025772) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x000345e7) popup_side_volume_key_window_t

0x0c7d,	// (0x00025b71) popup_side_volume_key_window_ParamLimits

0x9b39,	// (0x0002ea2d) list_double_graphic_pane_g4_ParamLimits

0x9b39,	// (0x0002ea2d) list_double_graphic_pane_g4

0xa07e,	// (0x0002ef72) list_single_2heading_msg_pane_ParamLimits

0xa07e,	// (0x0002ef72) list_single_2heading_msg_pane

0xa11a,	// (0x0002f00e) list_single_2heading_msg_pane_g1_ParamLimits

0xa11a,	// (0x0002f00e) list_single_2heading_msg_pane_g1

0xa126,	// (0x0002f01a) list_single_2heading_msg_pane_g2_ParamLimits

0xa126,	// (0x0002f01a) list_single_2heading_msg_pane_g2

0xa139,	// (0x0002f02d) list_single_2heading_msg_pane_g3_ParamLimits

0xa139,	// (0x0002f02d) list_single_2heading_msg_pane_g3

0xa145,	// (0x0002f039) list_single_2heading_msg_pane_g4_ParamLimits

0xa145,	// (0x0002f039) list_single_2heading_msg_pane_g4

0x0003,

0xfc89,	// (0x00034b7d) list_single_2heading_msg_pane_g_ParamLimits

0xfc89,	// (0x00034b7d) list_single_2heading_msg_pane_g

0xa15d,	// (0x0002f051) list_single_2heading_msg_pane_t1_ParamLimits

0xa15d,	// (0x0002f051) list_single_2heading_msg_pane_t1

0xa185,	// (0x0002f079) list_single_2heading_msg_pane_t2_ParamLimits

0xa185,	// (0x0002f079) list_single_2heading_msg_pane_t2

0xa1f0,	// (0x0002f0e4) list_single_2heading_msg_pane_t3_ParamLimits

0xa1f0,	// (0x0002f0e4) list_single_2heading_msg_pane_t3

0xf2b4,	// (0x000341a8) list_single_2heading_msg_pane_t4_ParamLimits

0xf2b4,	// (0x000341a8) list_single_2heading_msg_pane_t4

0x0003,

0xfc92,	// (0x00034b86) list_single_2heading_msg_pane_t_ParamLimits

0xfc92,	// (0x00034b86) list_single_2heading_msg_pane_t

0xcca7,	// (0x00031b9b) title_pane_g4_ParamLimits

0xcca7,	// (0x00031b9b) title_pane_g4

0x0263,	// (0x00025157) title_pane_stacon_g3_ParamLimits

0x0263,	// (0x00025157) title_pane_stacon_g3

0x6716,	// (0x0002b60a) list_single_2graphic_im_pane_g4_ParamLimits

0x6716,	// (0x0002b60a) list_single_2graphic_im_pane_g4

0x4525,	// (0x00029419) popup_side_volume_key_window_cp

0x4d89,	// (0x00029c7d) main_idle_act2_pane_t1

0x16b7,	// (0x000265ab) toolbar_button_pane_g10

0xa8a9,	// (0x0002f79d) popup_toolbar_window_cp1

0x558f,	// (0x0002a483) clock_nsta_pane_cp_t1

0x558f,	// (0x0002a483) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x0003498d) clock_nsta_pane_cp_t

0x0837,	// (0x0002572b) navi_navi_volume_pane_cp2_ParamLimits

0x0846,	// (0x0002573a) popup_side_volume_key_window_g1_ParamLimits

0x0852,	// (0x00025746) popup_side_volume_key_window_g2_ParamLimits

0x0861,	// (0x00025755) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x000345e0) popup_side_volume_key_window_g_ParamLimits

0x1b2c,	// (0x00026a20) fep_hwr_aid_pane

0xd669,	// (0x0003255d) bg_fep_hwr_top_pane_g4_ParamLimits

0x5afb,	// (0x0002a9ef) fep_hwr_top_pane_g1_ParamLimits

0x5b0d,	// (0x0002aa01) fep_hwr_top_pane_g2_ParamLimits

0x1be7,	// (0x00026adb) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x000349e2) fep_hwr_top_pane_g_ParamLimits

0x1bfc,	// (0x00026af0) fep_hwr_top_text_pane_ParamLimits

0x42da,	// (0x000291ce) aid_touch_tab_arrow_arrow_2

0x42e3,	// (0x000291d7) aid_touch_tab_arrow_left_2

0x1b40,	// (0x00026a34) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1b77,	// (0x00026a6b) fep_hwr_prediction_pane

0x5c63,	// (0x0002ab57) fep_vkb_prediction_pane

0xc374,	// (0x00031268) fep_vkb_side_pane_g3_ParamLimits

0xc374,	// (0x00031268) fep_vkb_side_pane_g3

0x5d15,	// (0x0002ac09) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x61e3,	// (0x0002b0d7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x61f0,	// (0x0002b0e4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb98,	// (0x00034a8c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6c1c,	// (0x0002bb10) fep_hwr_prediction_pane_g1

0x1ea2,	// (0x00026d96) fep_hwr_prediction_pane_g2

0x1eaa,	// (0x00026d9e) fep_hwr_prediction_pane_g3

0x1eb2,	// (0x00026da6) fep_hwr_prediction_pane_g4

0x0003,

0xfc9b,	// (0x00034b8f) fep_hwr_prediction_pane_g

0x6c1c,	// (0x0002bb10) fep_vkb_prediction_pane_g1

0x6c26,	// (0x0002bb1a) fep_vkb_prediction_pane_g2

0x6c2e,	// (0x0002bb22) fep_vkb_prediction_pane_g3

0x6c36,	// (0x0002bb2a) fep_vkb_prediction_pane_g4

0x0003,

0xfca4,	// (0x00034b98) fep_vkb_prediction_pane_g

0x19ac,	// (0x000268a0) slider_set_pane_g3

0x19c0,	// (0x000268b4) slider_set_pane_g4

0x19d8,	// (0x000268cc) slider_set_pane_g5

0x19ac,	// (0x000268a0) slider_set_pane_g6

0x19ee,	// (0x000268e2) slider_set_pane_g7

0x49ab,	// (0x0002989f) slider_form_pane_g3

0x49b4,	// (0x000298a8) slider_form_pane_g4

0x49bc,	// (0x000298b0) slider_form_pane_g5

0x49ab,	// (0x0002989f) slider_form_pane_g6

0xbebd,	// (0x00030db1) slider_form_pane_g7

0x504d,	// (0x00029f41) slider_set_pane_vc_g3

0x5056,	// (0x00029f4a) slider_set_pane_vc_g4

0x505f,	// (0x00029f53) slider_set_pane_vc_g5

0x504d,	// (0x00029f41) slider_set_pane_vc_g6

0x5068,	// (0x00029f5c) slider_set_pane_vc_g7

0x523e,	// (0x0002a132) slider_form_pane_vc_g1

0x5247,	// (0x0002a13b) slider_form_pane_vc_g2

0x5250,	// (0x0002a144) slider_form_pane_vc_g3

0x523e,	// (0x0002a132) slider_form_pane_vc_g4

0x5259,	// (0x0002a14d) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x0003495f) slider_form_pane_vc_g

0xcc89,	// (0x00031b7d) main_idle_act3_pane

0x6c3e,	// (0x0002bb32) ai3_links_pane

0xd691,	// (0x00032585) popup_ai3_data_window_ParamLimits

0xd691,	// (0x00032585) popup_ai3_data_window

0xcc89,	// (0x00031b7d) grid_ai3_links_pane

0xd6af,	// (0x000325a3) cell_ai3_links_pane_ParamLimits

0xd6af,	// (0x000325a3) cell_ai3_links_pane

0x6c7f,	// (0x0002bb73) bg_popup_sub_pane_cp11

0x6c8c,	// (0x0002bb80) cell_ai3_links_pane_g1

0xcc89,	// (0x00031b7d) bg_popup_sub_pane_cp12

0x6cb1,	// (0x0002bba5) heading_ai3_data_pane

0x6cb9,	// (0x0002bbad) list_ai3_gene_pane

0x6cc5,	// (0x0002bbb9) popup_ai3_data_window_g1

0x6ccd,	// (0x0002bbc1) heading_ai3_data_pane_g1

0x6cd5,	// (0x0002bbc9) heading_ai3_data_pane_t1

0x6ce3,	// (0x0002bbd7) list_double_ai3_gene_pane_ParamLimits

0x6ce3,	// (0x0002bbd7) list_double_ai3_gene_pane

0x6cf0,	// (0x0002bbe4) list_single_ai3_gene_pane_ParamLimits

0x6cf0,	// (0x0002bbe4) list_single_ai3_gene_pane

0x5a5f,	// (0x0002a953) list_highlight_pane_cp7_ParamLimits

0x5a5f,	// (0x0002a953) list_highlight_pane_cp7

0x6cfd,	// (0x0002bbf1) list_single_a13_gene_pane_t1_ParamLimits

0x6cfd,	// (0x0002bbf1) list_single_a13_gene_pane_t1

0x6d14,	// (0x0002bc08) list_single_ai3_gene_pane_g1

0x6d1d,	// (0x0002bc11) list_single_ai3_gene_pane_g2

0x0001,

0xfcad,	// (0x00034ba1) list_single_ai3_gene_pane_g

0x6d25,	// (0x0002bc19) list_double_ai3_gene_pane_g1_ParamLimits

0x6d25,	// (0x0002bc19) list_double_ai3_gene_pane_g1

0x6d31,	// (0x0002bc25) list_double_ai3_gene_pane_t1_ParamLimits

0x6d31,	// (0x0002bc25) list_double_ai3_gene_pane_t1

0x6d4d,	// (0x0002bc41) list_double_ai3_gene_pane_t2_ParamLimits

0x6d4d,	// (0x0002bc41) list_double_ai3_gene_pane_t2

0x6d62,	// (0x0002bc56) list_double_ai3_gene_pane_t3_ParamLimits

0x6d62,	// (0x0002bc56) list_double_ai3_gene_pane_t3

0x0002,

0xfcb2,	// (0x00034ba6) list_double_ai3_gene_pane_t_ParamLimits

0xfcb2,	// (0x00034ba6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2aa,	// (0x0003419e) aid_size_min_col_2

0xc63e,	// (0x00031532) aid_size_min_msg_ParamLimits

0xc63e,	// (0x00031532) aid_size_min_msg

0xc388,	// (0x0003127c) fep_vkb_top_text_pane_g2_ParamLimits

0xc388,	// (0x0003127c) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00034a12) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00034a12) fep_vkb_top_text_pane_g

0xcc89,	// (0x00031b7d) main_hc_apps_shell_pane

0x6d7f,	// (0x0002bc73) grid_hc_apps_pane_ParamLimits

0x6d7f,	// (0x0002bc73) grid_hc_apps_pane

0x6d91,	// (0x0002bc85) list_hc_apps_pane

0x6d99,	// (0x0002bc8d) scroll_pane_cp37_ParamLimits

0x6d99,	// (0x0002bc8d) scroll_pane_cp37

0xd6c9,	// (0x000325bd) cell_hc_apps_pane_ParamLimits

0xd6c9,	// (0x000325bd) cell_hc_apps_pane

0xd78f,	// (0x00032683) cell_hc_apps_pane_g1_ParamLimits

0xd78f,	// (0x00032683) cell_hc_apps_pane_g1

0x6e85,	// (0x0002bd79) cell_hc_apps_pane_g2_ParamLimits

0x6e85,	// (0x0002bd79) cell_hc_apps_pane_g2

0x6ea1,	// (0x0002bd95) cell_hc_apps_pane_g3_ParamLimits

0x6ea1,	// (0x0002bd95) cell_hc_apps_pane_g3

0x0002,

0xfcb9,	// (0x00034bad) cell_hc_apps_pane_g_ParamLimits

0xfcb9,	// (0x00034bad) cell_hc_apps_pane_g

0xd7bb,	// (0x000326af) cell_hc_apps_pane_t1_ParamLimits

0xd7bb,	// (0x000326af) cell_hc_apps_pane_t1

0xce2c,	// (0x00031d20) grid_highlight_pane_cp10_ParamLimits

0xce2c,	// (0x00031d20) grid_highlight_pane_cp10

0xd7f9,	// (0x000326ed) list_single_hc_apps_pane_ParamLimits

0xd7f9,	// (0x000326ed) list_single_hc_apps_pane

0xd82c,	// (0x00032720) list_single_hc_apps_pane_g1

0xa25e,	// (0x0002f152) list_single_hc_apps_pane_g2

0x0001,

0xfcc0,	// (0x00034bb4) list_single_hc_apps_pane_g

0xa277,	// (0x0002f16b) list_single_hc_apps_pane_g2_copy1

0xa293,	// (0x0002f187) list_single_hc_apps_pane_t1

0xccf9,	// (0x00031bed) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x00034394) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x000343ad) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x000343c7) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003442d) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x000343df) slider_set_pane_ParamLimits

0x0f70,	// (0x00025e64) control_pane_g5_ParamLimits

0x0f70,	// (0x00025e64) control_pane_g5

0x47de,	// (0x000296d2) slider_set_pane_g1_ParamLimits

0x19a0,	// (0x00026894) slider_set_pane_g2_ParamLimits

0x19ac,	// (0x000268a0) slider_set_pane_g3_ParamLimits

0x19c0,	// (0x000268b4) slider_set_pane_g4_ParamLimits

0x19d8,	// (0x000268cc) slider_set_pane_g5_ParamLimits

0x19ac,	// (0x000268a0) slider_set_pane_g6_ParamLimits

0x19ee,	// (0x000268e2) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0003482e) slider_set_pane_g_ParamLimits

0x0d62,	// (0x00025c56) navi_icon_text_pane_ParamLimits

0xb4e1,	// (0x000303d5) aid_fill_nsta_2_ParamLimits

0xb51a,	// (0x0003040e) aid_touch_tab_arrow_left_ParamLimits

0xb530,	// (0x00030424) aid_touch_tab_arrow_right_ParamLimits

0xb5cb,	// (0x000304bf) clock_nsta_pane_ParamLimits

0xbc3b,	// (0x00030b2f) navi_icon_pane_g1_ParamLimits

0xbc47,	// (0x00030b3b) navi_text_pane_t1_ParamLimits

0xc120,	// (0x00031014) navi_icon_text_pane_g1_ParamLimits

0xc12c,	// (0x00031020) navi_icon_text_pane_t1_ParamLimits

0xd82c,	// (0x00032720) list_single_hc_apps_pane_g1_ParamLimits

0xa25e,	// (0x0002f152) list_single_hc_apps_pane_g2_ParamLimits

0xfcc0,	// (0x00034bb4) list_single_hc_apps_pane_g_ParamLimits

0xa277,	// (0x0002f16b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa293,	// (0x0002f187) list_single_hc_apps_pane_t1_ParamLimits

0xa417,	// (0x0002f30b) popup_toolbar2_fixed_window_ParamLimits

0xa417,	// (0x0002f30b) popup_toolbar2_fixed_window

0xb446,	// (0x0003033a) popup_toolbar2_float_window

0xcc89,	// (0x00031b7d) bg_popup_sub_pane_cp27

0x6f5b,	// (0x0002be4f) grid_toolbar2_float_pane

0xcc89,	// (0x00031b7d) bg_popup_sub_pane_cp26

0x6f5b,	// (0x0002be4f) grid_toolbar2_fixed_pane

0xd845,	// (0x00032739) cell_toolbar2_fixed_pane_ParamLimits

0xd845,	// (0x00032739) cell_toolbar2_fixed_pane

0xd85f,	// (0x00032753) cell_toolbar2_fixed_pane_g1

0x6f7c,	// (0x0002be70) toolbar2_fixed_button_pane

0x344f,	// (0x00028343) toolbar2_fixed_button_pane_g1

0x3457,	// (0x0002834b) toolbar2_fixed_button_pane_g2

0x345f,	// (0x00028353) toolbar2_fixed_button_pane_g3

0x3467,	// (0x0002835b) toolbar2_fixed_button_pane_g4

0x346f,	// (0x00028363) toolbar2_fixed_button_pane_g5

0x3477,	// (0x0002836b) toolbar2_fixed_button_pane_g6

0x347f,	// (0x00028373) toolbar2_fixed_button_pane_g7

0x3487,	// (0x0002837b) toolbar2_fixed_button_pane_g8

0x348f,	// (0x00028383) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00034730) toolbar2_fixed_button_pane_g

0x6f84,	// (0x0002be78) cell_toolbar2_float_pane_ParamLimits

0x6f84,	// (0x0002be78) cell_toolbar2_float_pane

0x6f95,	// (0x0002be89) cell_toolbar2_float_pane_g1

0x6f7c,	// (0x0002be70) toolbar2_fixed_button_pane_cp

0xc270,	// (0x00031164) fep_vkb_accented_list_pane_ParamLimits

0xc270,	// (0x00031164) fep_vkb_accented_list_pane

0x1d5e,	// (0x00026c52) bg_popup_fep_shadow_pane_g9

0x2bf0,	// (0x00027ae4) bg_popup_fep_shadow_pane_cp3

0xd45e,	// (0x00032352) list_accented_list_pane

0x6f9e,	// (0x0002be92) list_single_accented_list_pane_ParamLimits

0x6f9e,	// (0x0002be92) list_single_accented_list_pane

0x2bf0,	// (0x00027ae4) list_highlight_pane_cp10

0x6faf,	// (0x0002bea3) list_single_accented_list_pane_t1

0xb362,	// (0x00030256) popup_slider_window_ParamLimits

0xb362,	// (0x00030256) popup_slider_window

0x6bfd,	// (0x0002baf1) aid_indentation_list_msg

0xd962,	// (0x00032856) bg_popup_window_pane_cp19

0x70eb,	// (0x0002bfdf) popup_slider_window_g1

0x7107,	// (0x0002bffb) popup_slider_window_g2

0x7123,	// (0x0002c017) popup_slider_window_g3

0x0005,

0xfcc5,	// (0x00034bb9) popup_slider_window_g

0x7189,	// (0x0002c07d) popup_slider_window_t1

0x71fd,	// (0x0002c0f1) small_volume_slider_vertical_pane

0x5a9a,	// (0x0002a98e) small_volume_slider_vertical_pane_g1

0x5a9a,	// (0x0002a98e) small_volume_slider_vertical_pane_g2

0x7219,	// (0x0002c10d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd7,	// (0x00034bcb) small_volume_slider_vertical_pane_g

0xa381,	// (0x0002f275) area_side_right_pane_ParamLimits

0xa381,	// (0x0002f275) area_side_right_pane

0xc654,	// (0x00031548) aid_size_side_button_ParamLimits

0xc654,	// (0x00031548) aid_size_side_button

0xc66d,	// (0x00031561) grid_sctrl_middle_pane_ParamLimits

0xc66d,	// (0x00031561) grid_sctrl_middle_pane

0x1eed,	// (0x00026de1) sctrl_sk_bottom_pane

0x1efe,	// (0x00026df2) sctrl_sk_top_pane

0x1f10,	// (0x00026e04) aid_touch_sctrl_top

0xce2c,	// (0x00031d20) bg_sctrl_sk_pane_ParamLimits

0xce2c,	// (0x00031d20) bg_sctrl_sk_pane

0x1f1d,	// (0x00026e11) sctrl_sk_top_pane_g1

0x1f2a,	// (0x00026e1e) sctrl_sk_top_pane_t1

0x1f10,	// (0x00026e04) aid_touch_sctrl_bottom

0xce2c,	// (0x00031d20) bg_sctrl_sk_pane_cp_ParamLimits

0xce2c,	// (0x00031d20) bg_sctrl_sk_pane_cp

0x1f45,	// (0x00026e39) sctrl_sk_bottom_pane_g1

0x1f2a,	// (0x00026e1e) sctrl_sk_bottom_pane_t1

0xc687,	// (0x0003157b) cell_sctrl_middle_pane_ParamLimits

0xc687,	// (0x0003157b) cell_sctrl_middle_pane

0xc69a,	// (0x0003158e) aid_touch_sctrl_middle_ParamLimits

0xc69a,	// (0x0003158e) aid_touch_sctrl_middle

0xc6a7,	// (0x0003159b) bg_sctrl_middle_pane_ParamLimits

0xc6a7,	// (0x0003159b) bg_sctrl_middle_pane

0x72a4,	// (0x0002c198) cell_sctrl_middle_pane_g1_ParamLimits

0x72a4,	// (0x0002c198) cell_sctrl_middle_pane_g1

0xc6b5,	// (0x000315a9) cell_sctrl_middle_pane_g2_ParamLimits

0xc6b5,	// (0x000315a9) cell_sctrl_middle_pane_g2

0x0001,

0xfce3,	// (0x00034bd7) cell_sctrl_middle_pane_g_ParamLimits

0xfce3,	// (0x00034bd7) cell_sctrl_middle_pane_g

0x344f,	// (0x00028343) bg_sctrl_middle_pane_g1

0x3457,	// (0x0002834b) bg_sctrl_middle_pane_g2

0x345f,	// (0x00028353) bg_sctrl_middle_pane_g3

0x3467,	// (0x0002835b) bg_sctrl_middle_pane_g4

0x346f,	// (0x00028363) bg_sctrl_middle_pane_g5

0x3477,	// (0x0002836b) bg_sctrl_middle_pane_g6

0x347f,	// (0x00028373) bg_sctrl_middle_pane_g7

0x3487,	// (0x0002837b) bg_sctrl_middle_pane_g8

0x0007,

0xfce8,	// (0x00034bdc) bg_sctrl_middle_pane_g

0x348f,	// (0x00028383) bg_sctrl_middle_pane_g8_copy1

0x344f,	// (0x00028343) bg_sctrl_sk_pane_g1

0x3457,	// (0x0002834b) bg_sctrl_sk_pane_g2

0x345f,	// (0x00028353) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00034730) bg_sctrl_sk_pane_g

0xd274,	// (0x00032168) aid_size_touch_scroll_bar

0x3467,	// (0x0002835b) bg_sctrl_sk_pane_g4

0x346f,	// (0x00028363) bg_sctrl_sk_pane_g5

0x3477,	// (0x0002836b) bg_sctrl_sk_pane_g6

0x347f,	// (0x00028373) bg_sctrl_sk_pane_g7

0x3487,	// (0x0002837b) bg_sctrl_sk_pane_g8

0x348f,	// (0x00028383) bg_sctrl_sk_pane_g9

0x1104,	// (0x00025ff8) popup_fep_china_hwr2_fs_candidate_window

0xae14,	// (0x0002fd08) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae14,	// (0x0002fd08) popup_fep_china_hwr2_fs_control_window

0x5d15,	// (0x0002ac09) sctrl_sk_top_pane_g2

0x0001,

0xfcde,	// (0x00034bd2) sctrl_sk_top_pane_g

0xda1a,	// (0x0003290e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda1a,	// (0x0003290e) aid_fep_china_hwr2_fs_cell

0xda30,	// (0x00032924) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda30,	// (0x00032924) bg_popup_fep_shadow_pane_cp4

0xda47,	// (0x0003293b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda47,	// (0x0003293b) bg_popup_fep_shadow_pane_cp5

0xda59,	// (0x0003294d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda59,	// (0x0003294d) popup_fep_china_hwr2_fs_control_bar_grid

0xda6d,	// (0x00032961) popup_fep_china_hwr2_fs_control_funtion_grid

0x7278,	// (0x0002c16c) aid_fep_china_hwr2_fs_candi_cell

0xcc89,	// (0x00031b7d) bg_popup_fep_shadow_pane_cp6

0x7282,	// (0x0002c176) popup_fep_china_hwr2_fs_candidate_grid

0xda75,	// (0x00032969) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda75,	// (0x00032969) cell_fep_china_hwr2_fs_funtion_grid

0x5a9a,	// (0x0002a98e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x72a4,	// (0x0002c198) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x72a4,	// (0x0002c198) cell_fep_china_hwr2_fs_funtion_grid_g1

0x72b2,	// (0x0002c1a6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x72b2,	// (0x0002c1a6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf9,	// (0x00034bed) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf9,	// (0x00034bed) cell_fep_china_hwr2_fs_funtion_grid_g

0xda8d,	// (0x00032981) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda8d,	// (0x00032981) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdaa2,	// (0x00032996) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdaa2,	// (0x00032996) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfe,	// (0x00034bf2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfe,	// (0x00034bf2) cell_fep_china_hwr2_fs_funtion_grid_t

0x72f9,	// (0x0002c1ed) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7301,	// (0x0002c1f5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7309,	// (0x0002c1fd) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd03,	// (0x00034bf7) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7311,	// (0x0002c205) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7311,	// (0x0002c205) cell_fep_china_hwr2_fs_candidate_grid

0x7330,	// (0x0002c224) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7338,	// (0x0002c22c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5a9a,	// (0x0002a98e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5a9a,	// (0x0002a98e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00034a17) cell_fep_china_hwr2_fs_candidate_grid_g

0x7340,	// (0x0002c234) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3035,	// (0x00027f29) clock_nsta_pane_cp_24_ParamLimits

0x3035,	// (0x00027f29) clock_nsta_pane_cp_24

0x30b5,	// (0x00027fa9) indicator_nsta_pane_cp_24_ParamLimits

0x30b5,	// (0x00027fa9) indicator_nsta_pane_cp_24

0x4138,	// (0x0002902c) heading_pane_g1

0x0001,

0xf8a1,	// (0x00034795) heading_pane_g

0x4bd0,	// (0x00029ac4) grid_sct_catagory_button_pane

0x4c02,	// (0x00029af6) scroll_pane_cp5_ParamLimits

0x56fa,	// (0x0002a5ee) button_value_adjust_pane_cp5_ParamLimits

0x56fa,	// (0x0002a5ee) button_value_adjust_pane_cp5

0x57df,	// (0x0002a6d3) form2_midp_time_pane_ParamLimits

0x734e,	// (0x0002c242) cell_sct_catagory_button_pane_ParamLimits

0x734e,	// (0x0002c242) cell_sct_catagory_button_pane

0x5a5f,	// (0x0002a953) bg_button_pane_cp01_ParamLimits

0x5a5f,	// (0x0002a953) bg_button_pane_cp01

0x5a9a,	// (0x0002a98e) cell_sct_catagory_button_pane_g1

0xb3e3,	// (0x000302d7) popup_tb_extension_window

0xdabe,	// (0x000329b2) aid_size_cell_ext_ParamLimits

0xdabe,	// (0x000329b2) aid_size_cell_ext

0xd0b6,	// (0x00031faa) bg_tb_trans_pane_cp1_ParamLimits

0xd0b6,	// (0x00031faa) bg_tb_trans_pane_cp1

0xdae4,	// (0x000329d8) grid_tb_ext_pane_ParamLimits

0xdae4,	// (0x000329d8) grid_tb_ext_pane

0xdb21,	// (0x00032a15) cell_tb_ext_pane_ParamLimits

0xdb21,	// (0x00032a15) cell_tb_ext_pane

0xdb49,	// (0x00032a3d) cell_tb_ext_pane_g1_ParamLimits

0xdb49,	// (0x00032a3d) cell_tb_ext_pane_g1

0x73e2,	// (0x0002c2d6) cell_tb_ext_pane_t1

0xce2c,	// (0x00031d20) list_highlight_pane_cp11_ParamLimits

0xce2c,	// (0x00031d20) list_highlight_pane_cp11

0xa42c,	// (0x0002f320) popup_uni_indicator_window_ParamLimits

0xa42c,	// (0x0002f320) popup_uni_indicator_window

0xd33b,	// (0x0003222f) bg_popup_sub_pane_cp14

0x73fd,	// (0x0002c2f1) list_uniindi_pane

0x7409,	// (0x0002c2fd) uniindi_top_pane

0xce2c,	// (0x00031d20) bg_uniindi_top_pane

0x742a,	// (0x0002c31e) uniindi_top_pane_g1

0x7440,	// (0x0002c334) uniindi_top_pane_g2

0x0003,

0xfd0a,	// (0x00034bfe) uniindi_top_pane_g

0x746a,	// (0x0002c35e) uniindi_top_pane_t1

0x7496,	// (0x0002c38a) list_single_uniindi_pane_ParamLimits

0x7496,	// (0x0002c38a) list_single_uniindi_pane

0x5a9a,	// (0x0002a98e) bg_uniindi_top_pane_g1

0x74a9,	// (0x0002c39d) list_single_uniindi_pane_g1

0x74bc,	// (0x0002c3b0) list_single_uniindi_pane_t1

0xcc89,	// (0x00031b7d) control_bg_pane

0x74e1,	// (0x0002c3d5) bg_sctrl_sk_pane_cp1

0x74ea,	// (0x0002c3de) bg_sctrl_sk_pane_cp2

0x74f3,	// (0x0002c3e7) control_bg_pane_g1

0x74fc,	// (0x0002c3f0) control_bg_pane_g2

0x0001,

0xfd13,	// (0x00034c07) control_bg_pane_g

0x5532,	// (0x0002a426) cell_indicator_nsta_pane_g1_ParamLimits

0xc084,	// (0x00030f78) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x0003497b) cell_indicator_nsta_pane_g_ParamLimits

0xf0a9,	// (0x00033f9d) form2_midp_time_pane_t1_ParamLimits

0x1b1e,	// (0x00026a12) main_idle_act4_pane_ParamLimits

0x1b1e,	// (0x00026a12) main_idle_act4_pane

0xb3e3,	// (0x000302d7) popup_tb_extension_window_ParamLimits

0xdb09,	// (0x000329fd) tb_ext_find_pane_ParamLimits

0xdb09,	// (0x000329fd) tb_ext_find_pane

0x7505,	// (0x0002c3f9) ai_gene_pane_1_cp1

0x2d3a,	// (0x00027c2e) ai_gene_pane_2_cp1

0x750d,	// (0x0002c401) list_single_idle_plugin_calendar_pane

0x7516,	// (0x0002c40a) list_single_idle_plugin_notification_pane

0x751f,	// (0x0002c413) list_single_idle_plugin_player_pane

0xdb66,	// (0x00032a5a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb66,	// (0x00032a5a) list_single_idle_plugin_shortcut_pane

0xdb8e,	// (0x00032a82) main_idle_act4_pane_t1

0xdba6,	// (0x00032a9a) main_idle_act4_pane_t2

0x0001,

0xfd18,	// (0x00034c0c) main_idle_act4_pane_t

0xdbbe,	// (0x00032ab2) middle_sk_idle_act4_pane_ParamLimits

0xdbbe,	// (0x00032ab2) middle_sk_idle_act4_pane

0xdbda,	// (0x00032ace) popup_clock_digital_analogue_window_cp2

0xdc01,	// (0x00032af5) shortcut_wheel_idle_act4_pane_ParamLimits

0xdc01,	// (0x00032af5) shortcut_wheel_idle_act4_pane

0x5a9a,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g1

0x5a9a,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g2

0x5a9a,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g3

0x5a9a,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g4

0x5a9a,	// (0x0002a98e) shortcut_wheel_idle_act4_pane_g5

0x75b2,	// (0x0002c4a6) shortcut_wheel_idle_act4_pane_g6

0x75ba,	// (0x0002c4ae) shortcut_wheel_idle_act4_pane_g7

0x75c2,	// (0x0002c4b6) shortcut_wheel_idle_act4_pane_g8

0x75ca,	// (0x0002c4be) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1d,	// (0x00034c11) shortcut_wheel_idle_act4_pane_g

0xd669,	// (0x0003255d) middle_sk_idle_act4_pane_g1_ParamLimits

0xd669,	// (0x0003255d) middle_sk_idle_act4_pane_g1

0xdc7e,	// (0x00032b72) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc7e,	// (0x00032b72) middle_sk_idle_act4_pane_g2

0x0001,

0xfd40,	// (0x00034c34) middle_sk_idle_act4_pane_g_ParamLimits

0xfd40,	// (0x00034c34) middle_sk_idle_act4_pane_g

0xdc96,	// (0x00032b8a) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc96,	// (0x00032b8a) middle_sk_idle_act4_pane_t1

0xdcc5,	// (0x00032bb9) grid_ai_shortcut_pane_ParamLimits

0xdcc5,	// (0x00032bb9) grid_ai_shortcut_pane

0xdce2,	// (0x00032bd6) list_highlight_pane_cp16_ParamLimits

0xdce2,	// (0x00032bd6) list_highlight_pane_cp16

0xdcef,	// (0x00032be3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdcef,	// (0x00032be3) list_single_idle_plugin_shortcut_pane_g1

0xdcfb,	// (0x00032bef) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdcfb,	// (0x00032bef) list_single_idle_plugin_shortcut_pane_g2

0xdd19,	// (0x00032c0d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd19,	// (0x00032c0d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd45,	// (0x00034c39) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd45,	// (0x00034c39) list_single_idle_plugin_shortcut_pane_g

0xdd2e,	// (0x00032c22) cell_ai_shortcut_pane_ParamLimits

0xdd2e,	// (0x00032c22) cell_ai_shortcut_pane

0xdd44,	// (0x00032c38) cell_ai_shortcut_pane_g1_ParamLimits

0xdd44,	// (0x00032c38) cell_ai_shortcut_pane_g1

0x7505,	// (0x0002c3f9) ai_gene_pane_1_cp2

0x76fb,	// (0x0002c5ef) ai_gene_pane_2_cp2

0x7703,	// (0x0002c5f7) list_highlight_pane_cp15

0x770c,	// (0x0002c600) list_single_idle_plugin_calendar_pane_g1

0x7703,	// (0x0002c5f7) list_highlight_pane_cp17

0x7714,	// (0x0002c608) list_single_idle_plugin_calendar_pane_g1_copy1

0x771c,	// (0x0002c610) list_single_idle_plugin_player_pane_g1

0x4e37,	// (0x00029d2b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4c,	// (0x00034c40) list_single_idle_plugin_player_pane_g

0x7724,	// (0x0002c618) list_single_idle_plugin_player_pane_t1

0x7732,	// (0x0002c626) list_single_idle_plugin_player_pane_t2

0x7740,	// (0x0002c634) list_single_idle_plugin_player_pane_t3

0x774e,	// (0x0002c642) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd51,	// (0x00034c45) list_single_idle_plugin_player_pane_t

0x775c,	// (0x0002c650) wait_bar_pane_cp15

0x7764,	// (0x0002c658) grid_ai_notification_pane

0x4e37,	// (0x00029d2b) list_single_idle_plugin_notification_pane_g1

0xdd66,	// (0x00032c5a) cell_ai_notification_pane_ParamLimits

0xdd66,	// (0x00032c5a) cell_ai_notification_pane

0x777a,	// (0x0002c66e) cell_ai_notification_pane_g1

0x7782,	// (0x0002c676) cell_ai_notification_pane_t1

0xdd73,	// (0x00032c67) tb_ext_find_button_pane

0xdd7b,	// (0x00032c6f) tb_ext_find_pane_g1

0xdd83,	// (0x00032c77) tb_ext_find_pane_t1

0x06a2,	// (0x00025596) tb_ext_find_button_pane_g1

0x77ae,	// (0x0002c6a2) tb_ext_find_button_pane_g2

0x0001,

0xfd5a,	// (0x00034c4e) tb_ext_find_button_pane_g

0xdb8e,	// (0x00032a82) main_idle_act4_pane_t1_ParamLimits

0xdba6,	// (0x00032a9a) main_idle_act4_pane_t2_ParamLimits

0xfd18,	// (0x00034c0c) main_idle_act4_pane_t_ParamLimits

0xdbda,	// (0x00032ace) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbf1,	// (0x00032ae5) sat_plugin_idle_act4_pane_ParamLimits

0xdbf1,	// (0x00032ae5) sat_plugin_idle_act4_pane

0xdd91,	// (0x00032c85) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd91,	// (0x00032c85) sat_plugin_idle_act4_pane_t1

0xdda9,	// (0x00032c9d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdda9,	// (0x00032c9d) sat_plugin_idle_act4_pane_t2

0xddc1,	// (0x00032cb5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddc1,	// (0x00032cb5) sat_plugin_idle_act4_pane_t3

0xddd9,	// (0x00032ccd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddd9,	// (0x00032ccd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5f,	// (0x00034c53) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5f,	// (0x00034c53) sat_plugin_idle_act4_pane_t

0xf442,	// (0x00034336) popup_battery_window_ParamLimits

0xf442,	// (0x00034336) popup_battery_window

0xce2c,	// (0x00031d20) bg_popup_sub_pane_cp25_ParamLimits

0xce2c,	// (0x00031d20) bg_popup_sub_pane_cp25

0x7803,	// (0x0002c6f7) popup_battery_window_g1_ParamLimits

0x7803,	// (0x0002c6f7) popup_battery_window_g1

0x780f,	// (0x0002c703) popup_battery_window_t1_ParamLimits

0x780f,	// (0x0002c703) popup_battery_window_t1

0x7821,	// (0x0002c715) popup_battery_window_t2_ParamLimits

0x7821,	// (0x0002c715) popup_battery_window_t2

0x0001,

0xfd68,	// (0x00034c5c) popup_battery_window_t_ParamLimits

0xfd68,	// (0x00034c5c) popup_battery_window_t

0xabad,	// (0x0002faa1) midp_canvas_pane_ParamLimits

0xac09,	// (0x0002fafd) midp_keypad_pane_ParamLimits

0xac09,	// (0x0002fafd) midp_keypad_pane

0x2f17,	// (0x00027e0b) main_midp_pane_ParamLimits

0x55ad,	// (0x0002a4a1) signal_pane_g2_cp_ParamLimits

0xddf1,	// (0x00032ce5) aid_size_cell_midp_keypad_ParamLimits

0xddf1,	// (0x00032ce5) aid_size_cell_midp_keypad

0xde0f,	// (0x00032d03) midp_keyp_game_grid_pane_ParamLimits

0xde0f,	// (0x00032d03) midp_keyp_game_grid_pane

0xde36,	// (0x00032d2a) midp_keyp_rocker_pane_ParamLimits

0xde36,	// (0x00032d2a) midp_keyp_rocker_pane

0xde85,	// (0x00032d79) midp_keyp_sk_left_pane_ParamLimits

0xde85,	// (0x00032d79) midp_keyp_sk_left_pane

0xdedb,	// (0x00032dcf) midp_keyp_sk_right_pane_ParamLimits

0xdedb,	// (0x00032dcf) midp_keyp_sk_right_pane

0xcc89,	// (0x00031b7d) bg_button_pane_cp03

0xdf31,	// (0x00032e25) midp_keyp_sk_left_pane_g1

0xcc89,	// (0x00031b7d) bg_button_pane_cp04

0xdf31,	// (0x00032e25) midp_keyp_sk_right_pane_g1

0x5a9a,	// (0x0002a98e) midp_keyp_rocker_pane_g1

0xdf39,	// (0x00032e2d) keyp_game_cell_pane_ParamLimits

0xdf39,	// (0x00032e2d) keyp_game_cell_pane

0xcc89,	// (0x00031b7d) bg_button_pane_cp02

0xdf5f,	// (0x00032e53) keyp_game_cell_pane_g1

0xa3c3,	// (0x0002f2b7) popup_fep_vkb2_window_ParamLimits

0xa3c3,	// (0x0002f2b7) popup_fep_vkb2_window

0xc6c1,	// (0x000315b5) aid_size_cell_vkb2_ParamLimits

0xc6c1,	// (0x000315b5) aid_size_cell_vkb2

0xc6ed,	// (0x000315e1) popup_fep_vkb2_window_g1_ParamLimits

0xc6ed,	// (0x000315e1) popup_fep_vkb2_window_g1

0xc73d,	// (0x00031631) vkb2_area_bottom_pane_ParamLimits

0xc73d,	// (0x00031631) vkb2_area_bottom_pane

0xc799,	// (0x0003168d) vkb2_area_keypad_pane_ParamLimits

0xc799,	// (0x0003168d) vkb2_area_keypad_pane

0xc7e7,	// (0x000316db) vkb2_area_top_pane_ParamLimits

0xc7e7,	// (0x000316db) vkb2_area_top_pane

0xc874,	// (0x00031768) vkb2_top_entry_pane_ParamLimits

0xc874,	// (0x00031768) vkb2_top_entry_pane

0xc8a1,	// (0x00031795) vkb2_top_grid_left_pane_ParamLimits

0xc8a1,	// (0x00031795) vkb2_top_grid_left_pane

0xc8c2,	// (0x000317b6) vkb2_top_grid_right_pane_ParamLimits

0xc8c2,	// (0x000317b6) vkb2_top_grid_right_pane

0x21b1,	// (0x000270a5) vkb2_cell_keypad_pane_ParamLimits

0x21b1,	// (0x000270a5) vkb2_cell_keypad_pane

0xc90a,	// (0x000317fe) vkb2_area_bottom_grid_pane_ParamLimits

0xc90a,	// (0x000317fe) vkb2_area_bottom_grid_pane

0xc934,	// (0x00031828) vkb2_area_bottom_pane_g1_ParamLimits

0xc934,	// (0x00031828) vkb2_area_bottom_pane_g1

0xc95a,	// (0x0003184e) vkb2_area_bottom_pane_g2_ParamLimits

0xc95a,	// (0x0003184e) vkb2_area_bottom_pane_g2

0xc98b,	// (0x0003187f) vkb2_area_bottom_pane_g3_ParamLimits

0xc98b,	// (0x0003187f) vkb2_area_bottom_pane_g3

0x0002,

0xfd6d,	// (0x00034c61) vkb2_area_bottom_pane_g_ParamLimits

0xfd6d,	// (0x00034c61) vkb2_area_bottom_pane_g

0x235b,	// (0x0002724f) vkb2_top_cell_left_pane_ParamLimits

0x235b,	// (0x0002724f) vkb2_top_cell_left_pane

0xdf68,	// (0x00032e5c) vkb2_top_entry_pane_g1_ParamLimits

0xdf68,	// (0x00032e5c) vkb2_top_entry_pane_g1

0xdf76,	// (0x00032e6a) vkb2_top_entry_pane_t1_ParamLimits

0xdf76,	// (0x00032e6a) vkb2_top_entry_pane_t1

0x79cb,	// (0x0002c8bf) vkb2_top_entry_pane_t2_ParamLimits

0x79cb,	// (0x0002c8bf) vkb2_top_entry_pane_t2

0x79fd,	// (0x0002c8f1) vkb2_top_entry_pane_t3_ParamLimits

0x79fd,	// (0x0002c8f1) vkb2_top_entry_pane_t3

0x0002,

0xfd74,	// (0x00034c68) vkb2_top_entry_pane_t_ParamLimits

0xfd74,	// (0x00034c68) vkb2_top_entry_pane_t

0xc9f5,	// (0x000318e9) vkb2_top_grid_right_pane_g1_ParamLimits

0xc9f5,	// (0x000318e9) vkb2_top_grid_right_pane_g1

0x23be,	// (0x000272b2) vkb2_top_grid_right_pane_g2_ParamLimits

0x23be,	// (0x000272b2) vkb2_top_grid_right_pane_g2

0x23d6,	// (0x000272ca) vkb2_top_grid_right_pane_g3_ParamLimits

0x23d6,	// (0x000272ca) vkb2_top_grid_right_pane_g3

0xca0b,	// (0x000318ff) vkb2_top_grid_right_pane_g4_ParamLimits

0xca0b,	// (0x000318ff) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7b,	// (0x00034c6f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7b,	// (0x00034c6f) vkb2_top_grid_right_pane_g

0x2404,	// (0x000272f8) vkb2_top_cell_left_pane_g1

0x241b,	// (0x0002730f) vkb2_cell_keypad_pane_g1_ParamLimits

0x241b,	// (0x0002730f) vkb2_cell_keypad_pane_g1

0x7a21,	// (0x0002c915) vkb2_cell_keypad_pane_t1_ParamLimits

0x7a21,	// (0x0002c915) vkb2_cell_keypad_pane_t1

0x2429,	// (0x0002731d) vkb2_cell_bottom_grid_pane_ParamLimits

0x2429,	// (0x0002731d) vkb2_cell_bottom_grid_pane

0x2462,	// (0x00027356) vkb2_cell_bottom_grid_pane_g1

0xdc22,	// (0x00032b16) aid_call2_pane_cp02

0xdc2a,	// (0x00032b1e) aid_call_pane_cp02

0xdc32,	// (0x00032b26) clock_digital_number_pane_cp10

0xdc3a,	// (0x00032b2e) clock_digital_number_pane_cp11

0xdc42,	// (0x00032b36) clock_digital_number_pane_cp12

0xdc4a,	// (0x00032b3e) clock_digital_number_pane_cp13

0xdc52,	// (0x00032b46) clock_digital_separator_pane_cp10

0x06a2,	// (0x00025596) popup_clock_digital_analogue_window_cp2_g1

0x06a2,	// (0x00025596) popup_clock_digital_analogue_window_cp2_g2

0xdc5a,	// (0x00032b4e) popup_clock_digital_analogue_window_cp2_g3

0x06a2,	// (0x00025596) popup_clock_digital_analogue_window_cp2_g4

0xdc5a,	// (0x00032b4e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd30,	// (0x00034c24) popup_clock_digital_analogue_window_cp2_g

0xdc62,	// (0x00032b56) popup_clock_digital_analogue_window_cp2_t1

0xdc70,	// (0x00032b64) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3b,	// (0x00034c2f) popup_clock_digital_analogue_window_cp2_t

0x5a9a,	// (0x0002a98e) clock_digital_number_pane_cp10_g1

0x5a9a,	// (0x0002a98e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00034a17) clock_digital_number_pane_cp10_g

0x5a9a,	// (0x0002a98e) clock_digital_separator_pane_cp10_g1

0x5a9a,	// (0x0002a98e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00034a17) clock_digital_separator_pane_cp10_g

0x744c,	// (0x0002c340) uniindi_top_pane_g3

0x745d,	// (0x0002c351) uniindi_top_pane_g4

0x223c,	// (0x00027130) vkb2_row_keypad_pane_ParamLimits

0x223c,	// (0x00027130) vkb2_row_keypad_pane

0x247e,	// (0x00027372) vkb2_cell_t_keypad_pane_ParamLimits

0x247e,	// (0x00027372) vkb2_cell_t_keypad_pane

0x248e,	// (0x00027382) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x248e,	// (0x00027382) vkb2_cell_t_keypad_pane_cp08

0x24a3,	// (0x00027397) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x24a3,	// (0x00027397) vkb2_cell_t_keypad_pane_cp09

0x24b7,	// (0x000273ab) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x24b7,	// (0x000273ab) vkb2_cell_t_keypad_pane_cp01

0x24c8,	// (0x000273bc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x24c8,	// (0x000273bc) vkb2_cell_t_keypad_pane_cp02

0x24d9,	// (0x000273cd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x24d9,	// (0x000273cd) vkb2_cell_t_keypad_pane_cp03

0x24ea,	// (0x000273de) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x24ea,	// (0x000273de) vkb2_cell_t_keypad_pane_cp04

0x24fb,	// (0x000273ef) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x24fb,	// (0x000273ef) vkb2_cell_t_keypad_pane_cp05

0x250c,	// (0x00027400) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x250c,	// (0x00027400) vkb2_cell_t_keypad_pane_cp06

0x251f,	// (0x00027413) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x251f,	// (0x00027413) vkb2_cell_t_keypad_pane_cp07

0x2534,	// (0x00027428) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2534,	// (0x00027428) vkb2_cell_t_keypad_pane_cp10

0x5d15,	// (0x0002ac09) vkb2_cell_t_keypad_pane_g1

0x7a38,	// (0x0002c92c) vkb2_cell_t_keypad_pane_t1

0xcc89,	// (0x00031b7d) popup_grid_graphic2_window

0xdfaf,	// (0x00032ea3) aid_size_cell_graphic2_ParamLimits

0xdfaf,	// (0x00032ea3) aid_size_cell_graphic2

0xdfed,	// (0x00032ee1) bg_popup_window_pane_cp21_ParamLimits

0xdfed,	// (0x00032ee1) bg_popup_window_pane_cp21

0xdffb,	// (0x00032eef) graphic2_pages_pane_ParamLimits

0xdffb,	// (0x00032eef) graphic2_pages_pane

0xe053,	// (0x00032f47) grid_graphic2_control_pane_ParamLimits

0xe053,	// (0x00032f47) grid_graphic2_control_pane

0xe09b,	// (0x00032f8f) grid_graphic2_pane_ParamLimits

0xe09b,	// (0x00032f8f) grid_graphic2_pane

0xe126,	// (0x0003301a) cell_graphic2_pane

0xcc89,	// (0x00031b7d) main_comp_mode_pane

0x6cb9,	// (0x0002bbad) list_ai3_gene_pane_ParamLimits

0xd962,	// (0x00032856) bg_popup_window_pane_cp19_ParamLimits

0x708b,	// (0x0002bf7f) bg_touch_area_indi_pane_ParamLimits

0x708b,	// (0x0002bf7f) bg_touch_area_indi_pane

0x70a1,	// (0x0002bf95) bg_touch_area_indi_pane_cp01_ParamLimits

0x70a1,	// (0x0002bf95) bg_touch_area_indi_pane_cp01

0x70b7,	// (0x0002bfab) bg_touch_area_indi_pane_cp02_ParamLimits

0x70b7,	// (0x0002bfab) bg_touch_area_indi_pane_cp02

0x70d1,	// (0x0002bfc5) bg_touch_area_indi_pane_cp03_ParamLimits

0x70d1,	// (0x0002bfc5) bg_touch_area_indi_pane_cp03

0x70eb,	// (0x0002bfdf) popup_slider_window_g1_ParamLimits

0x7107,	// (0x0002bffb) popup_slider_window_g2_ParamLimits

0x7123,	// (0x0002c017) popup_slider_window_g3_ParamLimits

0xfcc5,	// (0x00034bb9) popup_slider_window_g_ParamLimits

0x7189,	// (0x0002c07d) popup_slider_window_t1_ParamLimits

0x71fd,	// (0x0002c0f1) small_volume_slider_vertical_pane_ParamLimits

0xe126,	// (0x0003301a) cell_graphic2_pane_ParamLimits

0xe188,	// (0x0003307c) bg_button_pane_cp10_ParamLimits

0xe188,	// (0x0003307c) bg_button_pane_cp10

0xe19b,	// (0x0003308f) bg_button_pane_cp11_ParamLimits

0xe19b,	// (0x0003308f) bg_button_pane_cp11

0xe1ae,	// (0x000330a2) graphic2_pages_pane_g1_ParamLimits

0xe1ae,	// (0x000330a2) graphic2_pages_pane_g1

0xe1c9,	// (0x000330bd) graphic2_pages_pane_g2_ParamLimits

0xe1c9,	// (0x000330bd) graphic2_pages_pane_g2

0x0001,

0xfd89,	// (0x00034c7d) graphic2_pages_pane_g_ParamLimits

0xfd89,	// (0x00034c7d) graphic2_pages_pane_g

0xe1e1,	// (0x000330d5) graphic2_pages_pane_t1_ParamLimits

0xe1e1,	// (0x000330d5) graphic2_pages_pane_t1

0xe1f9,	// (0x000330ed) cell_graphic2_control_pane_ParamLimits

0xe1f9,	// (0x000330ed) cell_graphic2_control_pane

0xe22d,	// (0x00033121) cell_graphic2_pane_g1_ParamLimits

0xe22d,	// (0x00033121) cell_graphic2_pane_g1

0xd677,	// (0x0003256b) cell_graphic2_pane_g2_ParamLimits

0xd677,	// (0x0003256b) cell_graphic2_pane_g2

0xe23a,	// (0x0003312e) cell_graphic2_pane_g3_ParamLimits

0xe23a,	// (0x0003312e) cell_graphic2_pane_g3

0xd684,	// (0x00032578) cell_graphic2_pane_g4_ParamLimits

0xd684,	// (0x00032578) cell_graphic2_pane_g4

0xe247,	// (0x0003313b) cell_graphic2_pane_g5_ParamLimits

0xe247,	// (0x0003313b) cell_graphic2_pane_g5

0x0004,

0xfd8e,	// (0x00034c82) cell_graphic2_pane_g_ParamLimits

0xfd8e,	// (0x00034c82) cell_graphic2_pane_g

0xe263,	// (0x00033157) cell_graphic2_pane_t1_ParamLimits

0xe263,	// (0x00033157) cell_graphic2_pane_t1

0x412c,	// (0x00029020) grid_highlight_pane_cp11_ParamLimits

0x412c,	// (0x00029020) grid_highlight_pane_cp11

0xce2c,	// (0x00031d20) bg_button_pane_cp05

0xe2ac,	// (0x000331a0) cell_graphic2_control_pane_g1

0x5a9a,	// (0x0002a98e) bg_touch_area_indi_pane_g1

0x7d1b,	// (0x0002cc0f) aid_cmod_rocker_key_size

0x7d25,	// (0x0002cc19) aid_cmode_itu_key_size

0x7d2f,	// (0x0002cc23) main_cmode_video_pane

0x7d39,	// (0x0002cc2d) main_comp_mode_itu_pane

0x7d45,	// (0x0002cc39) main_comp_mode_rocker_pane

0x7d51,	// (0x0002cc45) cell_cmode_rocker_pane_ParamLimits

0x7d51,	// (0x0002cc45) cell_cmode_rocker_pane

0x7d65,	// (0x0002cc59) cell_cmode_itu_pane_ParamLimits

0x7d65,	// (0x0002cc59) cell_cmode_itu_pane

0xd33b,	// (0x0003222f) bg_button_pane_cp06_ParamLimits

0xd33b,	// (0x0003222f) bg_button_pane_cp06

0x5d15,	// (0x0002ac09) cell_cmode_rocker_pane_g1_ParamLimits

0x5d15,	// (0x0002ac09) cell_cmode_rocker_pane_g1

0x72a4,	// (0x0002c198) cell_cmode_rocker_pane_g2_ParamLimits

0x72a4,	// (0x0002c198) cell_cmode_rocker_pane_g2

0x0001,

0xfd9e,	// (0x00034c92) cell_cmode_rocker_pane_g_ParamLimits

0xfd9e,	// (0x00034c92) cell_cmode_rocker_pane_g

0xcc89,	// (0x00031b7d) bg_button_pane_cp07

0x7d7c,	// (0x0002cc70) cell_cmode_itu_pane_g1

0x7d85,	// (0x0002cc79) cell_cmode_itu_pane_t1

0x7d93,	// (0x0002cc87) cell_cmode_itu_pane_t2

0x0001,

0xfda3,	// (0x00034c97) cell_cmode_itu_pane_t

0x74d1,	// (0x0002c3c5) aid_touch_ctrl_left

0x74d9,	// (0x0002c3cd) aid_touch_ctrl_right

0xcc89,	// (0x00031b7d) compa_mode_pane

0xe2d4,	// (0x000331c8) aid_cmod_rocker_key_size_cp

0xe2de,	// (0x000331d2) aid_cmode_itu_key_size_cp

0x7db5,	// (0x0002cca9) compa_mode_pane_g1

0x7dbd,	// (0x0002ccb1) compa_mode_pane_g2

0x7dc5,	// (0x0002ccb9) compa_mode_pane_g3

0x0002,

0xfda8,	// (0x00034c9c) compa_mode_pane_g

0xe2e8,	// (0x000331dc) main_comp_mode_itu_pane_cp

0xe2f0,	// (0x000331e4) main_comp_mode_rocker_pane_cp

0xe2f8,	// (0x000331ec) cell_cmode_itu_pane_cp_ParamLimits

0xe2f8,	// (0x000331ec) cell_cmode_itu_pane_cp

0xe30d,	// (0x00033201) cell_cmode_rocker_pane_cp_ParamLimits

0xe30d,	// (0x00033201) cell_cmode_rocker_pane_cp

0xd33b,	// (0x0003222f) bg_button_pane_cp06_cp_ParamLimits

0xd33b,	// (0x0003222f) bg_button_pane_cp06_cp

0x5d15,	// (0x0002ac09) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5d15,	// (0x0002ac09) cell_cmode_rocker_pane_g1_cp

0x5a9a,	// (0x0002a98e) cell_cmode_rocker_pane_g2_cp

0xcc89,	// (0x00031b7d) bg_button_pane_cp07_cp

0xe31f,	// (0x00033213) cell_cmode_itu_pane_g1_cp

0xe328,	// (0x0003321c) cell_cmode_itu_pane_t1_cp

0xe328,	// (0x0003321c) cell_cmode_itu_pane_t2_cp

0xbeb5,	// (0x00030da9) settings_code_pane_cp2

0xccf9,	// (0x00031bed) bg_popup_window_pane_cp3_ParamLimits

0xd040,	// (0x00031f34) heading_pane_cp3_ParamLimits

0xd04f,	// (0x00031f43) listscroll_popup_graphic_pane_ParamLimits

0x1b2c,	// (0x00026a20) fep_hwr_aid_pane_ParamLimits

0x1f10,	// (0x00026e04) aid_touch_sctrl_top_ParamLimits

0x1f1d,	// (0x00026e11) sctrl_sk_top_pane_g1_ParamLimits

0x5d15,	// (0x0002ac09) sctrl_sk_top_pane_g2_ParamLimits

0xfcde,	// (0x00034bd2) sctrl_sk_top_pane_g_ParamLimits

0x1f2a,	// (0x00026e1e) sctrl_sk_top_pane_t1_ParamLimits

0x1f10,	// (0x00026e04) aid_touch_sctrl_bottom_ParamLimits

0x1f2a,	// (0x00026e1e) sctrl_sk_bottom_pane_t1_ParamLimits

0x7416,	// (0x0002c30a) aid_area_touch_clock

0xc833,	// (0x00031727) aid_vkb2_area_top_pane_cell_ParamLimits

0xc833,	// (0x00031727) aid_vkb2_area_top_pane_cell

0xc8e3,	// (0x000317d7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc8e3,	// (0x000317d7) aid_vkb2_area_bottom_pane_cell

0x7983,	// (0x0002c877) popup_char_count_window

0x7e1b,	// (0x0002cd0f) popup_char_count_window_g1

0x7e24,	// (0x0002cd18) popup_char_count_window_g2

0x7e2d,	// (0x0002cd21) popup_char_count_window_g3

0x0002,

0xfdaf,	// (0x00034ca3) popup_char_count_window_g

0x7e36,	// (0x0002cd2a) popup_char_count_window_t1

0x1fc5,	// (0x00026eb9) popup_fep_char_preview_window_ParamLimits

0x1fc5,	// (0x00026eb9) popup_fep_char_preview_window

0xc853,	// (0x00031747) vkb2_top_candi_pane_ParamLimits

0xc853,	// (0x00031747) vkb2_top_candi_pane

0xe336,	// (0x0003322a) cell_vkb2_top_candi_pane_ParamLimits

0xe336,	// (0x0003322a) cell_vkb2_top_candi_pane

0x3ab5,	// (0x000289a9) bg_popup_fep_char_preview_window_ParamLimits

0x3ab5,	// (0x000289a9) bg_popup_fep_char_preview_window

0x2549,	// (0x0002743d) popup_fep_char_preview_window_t1_ParamLimits

0x2549,	// (0x0002743d) popup_fep_char_preview_window_t1

0x7e92,	// (0x0002cd86) bg_popup_fep_char_preview_window_g1

0x7e9a,	// (0x0002cd8e) bg_popup_fep_char_preview_window_g2

0x7ea2,	// (0x0002cd96) bg_popup_fep_char_preview_window_g3

0x7eaa,	// (0x0002cd9e) bg_popup_fep_char_preview_window_g4

0x7eb2,	// (0x0002cda6) bg_popup_fep_char_preview_window_g5

0x7eba,	// (0x0002cdae) bg_popup_fep_char_preview_window_g6

0x7ec2,	// (0x0002cdb6) bg_popup_fep_char_preview_window_g7

0x7eca,	// (0x0002cdbe) bg_popup_fep_char_preview_window_g8

0x7ed2,	// (0x0002cdc6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb6,	// (0x00034caa) bg_popup_fep_char_preview_window_g

0x5d15,	// (0x0002ac09) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5d15,	// (0x0002ac09) cell_vkb2_top_candi_pane_g1

0x6056,	// (0x0002af4a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6056,	// (0x0002af4a) cell_vkb2_top_candi_pane_g2

0x6077,	// (0x0002af6b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6077,	// (0x0002af6b) cell_vkb2_top_candi_pane_g3

0x258b,	// (0x0002747f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x258b,	// (0x0002747f) cell_vkb2_top_candi_pane_g4

0x7eda,	// (0x0002cdce) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7eda,	// (0x0002cdce) cell_vkb2_top_candi_pane_g5

0x72a4,	// (0x0002c198) cell_vkb2_top_candi_pane_g6_ParamLimits

0x72a4,	// (0x0002c198) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x00034cbf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x00034cbf) cell_vkb2_top_candi_pane_g

0x25ac,	// (0x000274a0) cell_vkb2_top_candi_pane_t1

0x198c,	// (0x00026880) aid_size_touch_slider_mark_ParamLimits

0x198c,	// (0x00026880) aid_size_touch_slider_mark

0xe037,	// (0x00032f2b) grid_graphic2_catg_pane_ParamLimits

0xe037,	// (0x00032f2b) grid_graphic2_catg_pane

0xe0f5,	// (0x00032fe9) popup_grid_graphic2_window_t1_ParamLimits

0xe0f5,	// (0x00032fe9) popup_grid_graphic2_window_t1

0xe10b,	// (0x00032fff) popup_grid_graphic2_window_t2_ParamLimits

0xe10b,	// (0x00032fff) popup_grid_graphic2_window_t2

0x0001,

0xfd84,	// (0x00034c78) popup_grid_graphic2_window_t_ParamLimits

0xfd84,	// (0x00034c78) popup_grid_graphic2_window_t

0xce2c,	// (0x00031d20) bg_button_pane_cp05_ParamLimits

0xe2ac,	// (0x000331a0) cell_graphic2_control_pane_g1_ParamLimits

0xe39a,	// (0x0003328e) cell_graphic2_catg_pane_ParamLimits

0xe39a,	// (0x0003328e) cell_graphic2_catg_pane

0xcc89,	// (0x00031b7d) bg_button_pane_cp12

0xe3ac,	// (0x000332a0) cell_graphic2_catg_pane_g1

0x73e2,	// (0x0002c2d6) cell_tb_ext_pane_t1_ParamLimits

0x237b,	// (0x0002726f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x237b,	// (0x0002726f) vkb2_top_cell_right_narrow_pane

0x2393,	// (0x00027287) vkb2_top_cell_right_wide_pane_ParamLimits

0x2393,	// (0x00027287) vkb2_top_cell_right_wide_pane

0x1b1e,	// (0x00026a12) bg_vkb2_func_pane_ParamLimits

0x1b1e,	// (0x00026a12) bg_vkb2_func_pane

0x2404,	// (0x000272f8) vkb2_top_cell_left_pane_g1_ParamLimits

0x1b1e,	// (0x00026a12) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1b1e,	// (0x00026a12) bg_vkb2_fuc_pane_cp03

0x2462,	// (0x00027356) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3457,	// (0x0002834b) bg_vkb2_func_pane_g1

0x345f,	// (0x00028353) bg_vkb2_func_pane_g2

0x346f,	// (0x00028363) bg_vkb2_func_pane_g3

0x3467,	// (0x0002835b) bg_vkb2_func_pane_g4

0x3477,	// (0x0002836b) bg_vkb2_func_pane_g5

0x347f,	// (0x00028373) bg_vkb2_func_pane_g6

0x3487,	// (0x0002837b) bg_vkb2_func_pane_g7

0x348f,	// (0x00028383) bg_vkb2_func_pane_g8

0x344f,	// (0x00028343) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x00034ccc) bg_vkb2_func_pane_g

0x1b1e,	// (0x00026a12) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1b1e,	// (0x00026a12) bg_vkb2_fuc_pane_cp01

0x2404,	// (0x000272f8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2404,	// (0x000272f8) vkb2_top_cell_right_wide_pane_g1

0x1b1e,	// (0x00026a12) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1b1e,	// (0x00026a12) bg_vkb2_fuc_pane_cp02

0x25ca,	// (0x000274be) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x25ca,	// (0x000274be) vkb2_top_cell_right_narrow_pane_g1

0xd8a4,	// (0x00032798) aid_touch_area_decrease_ParamLimits

0xd8a4,	// (0x00032798) aid_touch_area_decrease

0xd8de,	// (0x000327d2) aid_touch_area_increase_ParamLimits

0xd8de,	// (0x000327d2) aid_touch_area_increase

0xd906,	// (0x000327fa) aid_touch_area_mute_ParamLimits

0xd906,	// (0x000327fa) aid_touch_area_mute

0xd92e,	// (0x00032822) aid_touch_area_slider_ParamLimits

0xd92e,	// (0x00032822) aid_touch_area_slider

0xd96e,	// (0x00032862) popup_slider_window_g4_ParamLimits

0xd96e,	// (0x00032862) popup_slider_window_g4

0xd996,	// (0x0003288a) popup_slider_window_g5_ParamLimits

0xd996,	// (0x0003288a) popup_slider_window_g5

0xd9ca,	// (0x000328be) popup_slider_window_g6_ParamLimits

0xd9ca,	// (0x000328be) popup_slider_window_g6

0x71b7,	// (0x0002c0ab) popup_slider_window_t2_ParamLimits

0x71b7,	// (0x0002c0ab) popup_slider_window_t2

0x0001,

0xfcd2,	// (0x00034bc6) popup_slider_window_t_ParamLimits

0xfcd2,	// (0x00034bc6) popup_slider_window_t

0xd9e6,	// (0x000328da) slider_pane_ParamLimits

0xd9e6,	// (0x000328da) slider_pane

0x7f16,	// (0x0002ce0a) slider_pane_g1_ParamLimits

0x7f16,	// (0x0002ce0a) slider_pane_g1

0x7f2a,	// (0x0002ce1e) slider_pane_g2_ParamLimits

0x7f2a,	// (0x0002ce1e) slider_pane_g2

0x7f40,	// (0x0002ce34) slider_pane_g3_ParamLimits

0x7f40,	// (0x0002ce34) slider_pane_g3

0x0003,

0xfdeb,	// (0x00034cdf) slider_pane_g_ParamLimits

0xfdeb,	// (0x00034cdf) slider_pane_g

0xb42f,	// (0x00030323) popup_tb_float_extension_window_ParamLimits

0xb42f,	// (0x00030323) popup_tb_float_extension_window

0x7f6c,	// (0x0002ce60) aid_size_cell_tb_float_ext

0xcc89,	// (0x00031b7d) bg_popup_sub_window_cp28

0x7f78,	// (0x0002ce6c) grid_tb_float_ext_pane

0x7f84,	// (0x0002ce78) cell_tb_float_ext_pane_ParamLimits

0x7f84,	// (0x0002ce78) cell_tb_float_ext_pane

0x7fa0,	// (0x0002ce94) cell_tb_float_ext_pane_g1

0x7fa9,	// (0x0002ce9d) grid_highlight_pane_cp12

0xc24e,	// (0x00031142) cell_last_hwr_side_pane_ParamLimits

0xc24e,	// (0x00031142) cell_last_hwr_side_pane

0x5a9a,	// (0x0002a98e) cell_last_hwr_side_pane_g1

0x7fb2,	// (0x0002cea6) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x00034ce8) cell_last_hwr_side_pane_g

0xc9c0,	// (0x000318b4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc9c0,	// (0x000318b4) vkb2_area_bottom_space_btn_pane

0x5d15,	// (0x0002ac09) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7a38,	// (0x0002c92c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x25ac,	// (0x000274a0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x25e6,	// (0x000274da) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x25e6,	// (0x000274da) vkb2_area_bottom_space_btn_pane_g1

0x2620,	// (0x00027514) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2620,	// (0x00027514) vkb2_area_bottom_space_btn_pane_g2

0x2656,	// (0x0002754a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2656,	// (0x0002754a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x00034ced) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x00034ced) vkb2_area_bottom_space_btn_pane_g

0x1bd5,	// (0x00026ac9) cel_fep_hwr_func_pane_ParamLimits

0x1bd5,	// (0x00026ac9) cel_fep_hwr_func_pane

0xc223,	// (0x00031117) cell_hwr_side_button_pane_ParamLimits

0xc223,	// (0x00031117) cell_hwr_side_button_pane

0x7416,	// (0x0002c30a) aid_area_touch_clock_ParamLimits

0xce2c,	// (0x00031d20) bg_uniindi_top_pane_ParamLimits

0x742a,	// (0x0002c31e) uniindi_top_pane_g1_ParamLimits

0x7440,	// (0x0002c334) uniindi_top_pane_g2_ParamLimits

0x744c,	// (0x0002c340) uniindi_top_pane_g3_ParamLimits

0x745d,	// (0x0002c351) uniindi_top_pane_g4_ParamLimits

0xfd0a,	// (0x00034bfe) uniindi_top_pane_g_ParamLimits

0x746a,	// (0x0002c35e) uniindi_top_pane_t1_ParamLimits

0xce2c,	// (0x00031d20) bg_vkb2_func_pane_cp01_ParamLimits

0xce2c,	// (0x00031d20) bg_vkb2_func_pane_cp01

0x7fbb,	// (0x0002ceaf) cel_fep_hwr_func_pane_g1_ParamLimits

0x7fbb,	// (0x0002ceaf) cel_fep_hwr_func_pane_g1

0xce2c,	// (0x00031d20) bg_vkb2_func_pane_cp02_ParamLimits

0xce2c,	// (0x00031d20) bg_vkb2_func_pane_cp02

0x7fbb,	// (0x0002ceaf) cell_hwr_side_button_pane_g1_ParamLimits

0x7fbb,	// (0x0002ceaf) cell_hwr_side_button_pane_g1

0x32d2,	// (0x000281c6) status_pane_g4_ParamLimits

0x32d2,	// (0x000281c6) status_pane_g4

0x32ec,	// (0x000281e0) status_pane_t1

0x584d,	// (0x0002a741) form2_midp_gauge_slider_cont_pane

0x5855,	// (0x0002a749) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc17b,	// (0x0003106f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc18d,	// (0x00031081) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x000349ca) form2_midp_gauge_slider_pane_t_ParamLimits

0x588b,	// (0x0002a77f) form2_midp_slider_pane_ParamLimits

0x1f8d,	// (0x00026e81) aid_size_cell_func_vkb2_ParamLimits

0x1f8d,	// (0x00026e81) aid_size_cell_func_vkb2

0x7f58,	// (0x0002ce4c) slider_pane_g4_ParamLimits

0x7f58,	// (0x0002ce4c) slider_pane_g4

0xca29,	// (0x0003191d) form2_midp_gauge_slider_pane_t2_cp01

0xca37,	// (0x0003192b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xca37,	// (0x0003192b) form2_midp_gauge_slider_pane_t3_cp01

0x26cb,	// (0x000275bf) form2_midp_slider_pane_cp01

0xcc89,	// (0x00031b7d) navi_smil_pane

0x7ff4,	// (0x0002cee8) navi_smil_pane_g1

0x7ffc,	// (0x0002cef0) navi_smil_pane_t1

0x7fc9,	// (0x0002cebd) form2_midp_slider_pane_g1

0x7fd2,	// (0x0002cec6) form2_midp_slider_pane_g2

0x7fda,	// (0x0002cece) form2_midp_slider_pane_g3

0x7fc9,	// (0x0002cebd) form2_midp_slider_pane_g4

0xe3b5,	// (0x000332a9) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x00034cf6) form2_midp_slider_pane_g

0x2690,	// (0x00027584) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2690,	// (0x00027584) vkb2_area_bottom_space_btn_pane_g4

0xb616,	// (0x0003050a) lc0_navi_pane_ParamLimits

0xb616,	// (0x0003050a) lc0_navi_pane

0xb686,	// (0x0003057a) lc0_stat_indi_pane_ParamLimits

0xb686,	// (0x0003057a) lc0_stat_indi_pane

0xb69b,	// (0x0003058f) ls0_title_pane_ParamLimits

0xb69b,	// (0x0003058f) ls0_title_pane

0xd33b,	// (0x0003222f) bg_popup_sub_pane_cp14_ParamLimits

0x73fd,	// (0x0002c2f1) list_uniindi_pane_ParamLimits

0x7409,	// (0x0002c2fd) uniindi_top_pane_ParamLimits

0x74a9,	// (0x0002c39d) list_single_uniindi_pane_g1_ParamLimits

0x74bc,	// (0x0002c3b0) list_single_uniindi_pane_t1_ParamLimits

0xca54,	// (0x00031948) lc0_stat_clock_pane_ParamLimits

0xca54,	// (0x00031948) lc0_stat_clock_pane

0xe3be,	// (0x000332b2) lc0_stat_indi_pane_g1_ParamLimits

0xe3be,	// (0x000332b2) lc0_stat_indi_pane_g1

0xe3cb,	// (0x000332bf) lc0_stat_indi_pane_g2_ParamLimits

0xe3cb,	// (0x000332bf) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x00034d01) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x00034d01) lc0_stat_indi_pane_g

0xca61,	// (0x00031955) lc0_uni_indicator_pane_ParamLimits

0xca61,	// (0x00031955) lc0_uni_indicator_pane

0xe3d8,	// (0x000332cc) ls0_title_pane_g1_ParamLimits

0xe3d8,	// (0x000332cc) ls0_title_pane_g1

0xe3ec,	// (0x000332e0) ls0_title_pane_t1_ParamLimits

0xe3ec,	// (0x000332e0) ls0_title_pane_t1

0xca6e,	// (0x00031962) lc0_uni_indicator_pane_g1_ParamLimits

0xca6e,	// (0x00031962) lc0_uni_indicator_pane_g1

0x806e,	// (0x0002cf62) lc0_stat_clock_pane_t1

0xcc89,	// (0x00031b7d) main_ai5_pane

0x807c,	// (0x0002cf70) ai5_sk_pane_ParamLimits

0x807c,	// (0x0002cf70) ai5_sk_pane

0xe41a,	// (0x0003330e) cell_ai5_widget_pane_ParamLimits

0xe41a,	// (0x0003330e) cell_ai5_widget_pane

0xe499,	// (0x0003338d) aid_size_cell_widget_grid

0x8136,	// (0x0002d02a) bg_ai5_widget_pane_ParamLimits

0x8136,	// (0x0002d02a) bg_ai5_widget_pane

0xe4cd,	// (0x000333c1) cell_ai5_widget_pane_g2

0xe4e1,	// (0x000333d5) cell_ai5_widget_pane_g3

0xe4fb,	// (0x000333ef) cell_ai5_widget_pane_g4

0xe50b,	// (0x000333ff) cell_ai5_widget_pane_g5

0xe51b,	// (0x0003340f) cell_ai5_widget_pane_g6

0xe527,	// (0x0003341b) cell_ai5_widget_pane_g7

0xe593,	// (0x00033487) cell_ai5_widget_pane_t1_ParamLimits

0xe593,	// (0x00033487) cell_ai5_widget_pane_t1

0xe5b0,	// (0x000334a4) cell_ai5_widget_pane_t2_ParamLimits

0xe5b0,	// (0x000334a4) cell_ai5_widget_pane_t2

0xe5c8,	// (0x000334bc) cell_ai5_widget_pane_t3_ParamLimits

0xe5c8,	// (0x000334bc) cell_ai5_widget_pane_t3

0xe5e0,	// (0x000334d4) cell_ai5_widget_pane_t4_ParamLimits

0xe5e0,	// (0x000334d4) cell_ai5_widget_pane_t4

0xe606,	// (0x000334fa) cell_ai5_widget_pane_t5_ParamLimits

0xe606,	// (0x000334fa) cell_ai5_widget_pane_t5

0x830b,	// (0x0002d1ff) cell_ai5_widget_pane_t6_ParamLimits

0x830b,	// (0x0002d1ff) cell_ai5_widget_pane_t6

0x831d,	// (0x0002d211) cell_ai5_widget_pane_t7_ParamLimits

0x831d,	// (0x0002d211) cell_ai5_widget_pane_t7

0xe626,	// (0x0003351a) cell_ai5_widget_pane_t8_ParamLimits

0xe626,	// (0x0003351a) cell_ai5_widget_pane_t8

0x000b,

0xfe2d,	// (0x00034d21) cell_ai5_widget_pane_t_ParamLimits

0xfe2d,	// (0x00034d21) cell_ai5_widget_pane_t

0xe6aa,	// (0x0003359e) grid_ai5_widget_pane

0xd33b,	// (0x0003222f) highlight_cell_ai5_widget_pane_ParamLimits

0xd33b,	// (0x0003222f) highlight_cell_ai5_widget_pane

0xe6b8,	// (0x000335ac) ai5_sk_left_pane

0xe6c2,	// (0x000335b6) ai5_sk_middle_pane

0xe6cc,	// (0x000335c0) ai5_sk_right_pane

0x83ec,	// (0x0002d2e0) bg_ai5_widget_pane_g1_ParamLimits

0x83ec,	// (0x0002d2e0) bg_ai5_widget_pane_g1

0x83f8,	// (0x0002d2ec) bg_ai5_widget_pane_g2_ParamLimits

0x83f8,	// (0x0002d2ec) bg_ai5_widget_pane_g2

0x8404,	// (0x0002d2f8) bg_ai5_widget_pane_g3_ParamLimits

0x8404,	// (0x0002d2f8) bg_ai5_widget_pane_g3

0x8410,	// (0x0002d304) bg_ai5_widget_pane_g4_ParamLimits

0x8410,	// (0x0002d304) bg_ai5_widget_pane_g4

0x841c,	// (0x0002d310) bg_ai5_widget_pane_g5_ParamLimits

0x841c,	// (0x0002d310) bg_ai5_widget_pane_g5

0x8428,	// (0x0002d31c) bg_ai5_widget_pane_g6_ParamLimits

0x8428,	// (0x0002d31c) bg_ai5_widget_pane_g6

0x8434,	// (0x0002d328) bg_ai5_widget_pane_g7_ParamLimits

0x8434,	// (0x0002d328) bg_ai5_widget_pane_g7

0x8440,	// (0x0002d334) bg_ai5_widget_pane_g8_ParamLimits

0x8440,	// (0x0002d334) bg_ai5_widget_pane_g8

0x844c,	// (0x0002d340) bg_ai5_widget_pane_g9_ParamLimits

0x844c,	// (0x0002d340) bg_ai5_widget_pane_g9

0x0008,

0xfe46,	// (0x00034d3a) bg_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x00034d3a) bg_ai5_widget_pane_g

0xe700,	// (0x000335f4) cell_shortcut_ai5_widget_pane_ParamLimits

0xe700,	// (0x000335f4) cell_shortcut_ai5_widget_pane

0x2bf0,	// (0x00027ae4) bg_cell_shortcut_ai5_widget_pane

0x8497,	// (0x0002d38b) cell_grid_ai5_widget_pane_g1

0x2bf0,	// (0x00027ae4) highlight_cell_shortcut_ai5_widget_pane

0x345f,	// (0x00028353) ai5_sk_left_pane_g1

0x84a0,	// (0x0002d394) ai5_sk_left_pane_g2

0x84a8,	// (0x0002d39c) ai5_sk_left_pane_g3

0x84b0,	// (0x0002d3a4) ai5_sk_left_pane_g4

0x0003,

0xfe59,	// (0x00034d4d) ai5_sk_left_pane_g

0x84b8,	// (0x0002d3ac) ai5_sk_left_pane_t1

0x3457,	// (0x0002834b) ai5_sk_right_pane_g1

0x84c6,	// (0x0002d3ba) ai5_sk_right_pane_g2

0x84ce,	// (0x0002d3c2) ai5_sk_right_pane_g3

0x84d6,	// (0x0002d3ca) ai5_sk_right_pane_g4

0x0003,

0xfe62,	// (0x00034d56) ai5_sk_right_pane_g

0x84de,	// (0x0002d3d2) ai5_sk_right_pane_t1

0x3457,	// (0x0002834b) ai5_sk_middle_pane_g1

0x345f,	// (0x00028353) ai5_sk_middle_pane_g2

0x3477,	// (0x0002836b) ai5_sk_middle_pane_g3

0x84ce,	// (0x0002d3c2) ai5_sk_middle_pane_g4

0x84a8,	// (0x0002d39c) ai5_sk_middle_pane_g5

0x84ec,	// (0x0002d3e0) ai5_sk_middle_pane_g6

0xe713,	// (0x00033607) ai5_sk_middle_pane_g7

0x0006,

0xfe6b,	// (0x00034d5f) ai5_sk_middle_pane_g

0xb500,	// (0x000303f4) aid_touch_area_size_lc0_ParamLimits

0xb500,	// (0x000303f4) aid_touch_area_size_lc0

0x1d74,	// (0x00026c68) cell_hwr_candidate_pane_t1_ParamLimits

0x2f95,	// (0x00027e89) aid_touch_navi_pane

0xb7a6,	// (0x0003069a) status_dt_navi_pane_ParamLimits

0xb7a6,	// (0x0003069a) status_dt_navi_pane

0xb7be,	// (0x000306b2) status_dt_sta_pane_ParamLimits

0xb7be,	// (0x000306b2) status_dt_sta_pane

0xe71b,	// (0x0003360f) dt_sta_controll_pane

0xe728,	// (0x0003361c) dt_sta_indi_pane

0xe735,	// (0x00033629) dt_sta_title_pane

0xce2c,	// (0x00031d20) bg_dt_sta_indi_pane_ParamLimits

0xce2c,	// (0x00031d20) bg_dt_sta_indi_pane

0xe747,	// (0x0003363b) dt_sta_battery_pane

0xe74f,	// (0x00033643) dt_sta_indi_pane_g1

0xe758,	// (0x0003364c) dt_sta_indi_pane_g2

0xe761,	// (0x00033655) dt_sta_indi_pane_g3

0x0002,

0xfe7a,	// (0x00034d6e) dt_sta_indi_pane_g

0xe76a,	// (0x0003365e) dt_sta_signal_pane

0xd33b,	// (0x0003222f) bg_dt_sta_title_pane_ParamLimits

0xd33b,	// (0x0003222f) bg_dt_sta_title_pane

0xe773,	// (0x00033667) dt_sta_title_pane_g1

0xe77b,	// (0x0003366f) dt_sta_title_pane_t1_ParamLimits

0xe77b,	// (0x0003366f) dt_sta_title_pane_t1

0xcc89,	// (0x00031b7d) bg_dt_sta_control_pane

0xe790,	// (0x00033684) dt_sta_controll_pane_g1

0xe799,	// (0x0003368d) bg_dt_sta_title_pane_g1

0xe7a2,	// (0x00033696) bg_dt_sta_title_pane_g2

0xe7ab,	// (0x0003369f) bg_dt_sta_title_pane_g3

0x0002,

0xfe81,	// (0x00034d75) bg_dt_sta_title_pane_g

0x5a9a,	// (0x0002a98e) bg_dt_sta_indi_pane_g1

0x859a,	// (0x0002d48e) dt_sta_signal_pane_g1

0x85a2,	// (0x0002d496) dt_sta_signal_pane_g2

0x0001,

0xfe88,	// (0x00034d7c) dt_sta_signal_pane_g

0x85aa,	// (0x0002d49e) dt_sta_battery_pane_g1

0x85b3,	// (0x0002d4a7) dt_sta_battery_pane_t1

0x5a9a,	// (0x0002a98e) bg_dt_sta_control_pane_g1

0x08a2,	// (0x00025796) fep_china_uni_eep_pane

0x08aa,	// (0x0002579e) fep_china_uni_entry_pane_ParamLimits

0x08ba,	// (0x000257ae) popup_fep_china_uni_window_g1_ParamLimits

0x08ca,	// (0x000257be) popup_fep_china_uni_window_g2_ParamLimits

0x08ca,	// (0x000257be) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x000345ec) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x000345ec) popup_fep_china_uni_window_g

0x85c2,	// (0x0002d4b6) fep_china_uni_eep_pane_g1

0x85ca,	// (0x0002d4be) fep_china_uni_eep_pane_t1

0x7feb,	// (0x0002cedf) aid_touch_area_size_smil_player

0x30e9,	// (0x00027fdd) lc0_clock_pane

0x32e0,	// (0x000281d4) status_pane_g5_ParamLimits

0x32e0,	// (0x000281d4) status_pane_g5

0xaf55,	// (0x0002fe49) popup_keymap_window

0x32a6,	// (0x0002819a) status_icon_pane

0xe4e1,	// (0x000333d5) cell_ai5_widget_pane_g3_ParamLimits

0xe4fb,	// (0x000333ef) cell_ai5_widget_pane_g4_ParamLimits

0xe50b,	// (0x000333ff) cell_ai5_widget_pane_g5_ParamLimits

0xe533,	// (0x00033427) cell_ai5_widget_pane_g8_ParamLimits

0xe533,	// (0x00033427) cell_ai5_widget_pane_g8

0xe547,	// (0x0003343b) cell_ai5_widget_pane_g9_ParamLimits

0xe547,	// (0x0003343b) cell_ai5_widget_pane_g9

0xe55b,	// (0x0003344f) cell_ai5_widget_pane_g10_ParamLimits

0xe55b,	// (0x0003344f) cell_ai5_widget_pane_g10

0x85d9,	// (0x0002d4cd) status_icon_pane_g1

0xcc89,	// (0x00031b7d) bg_popup_sub_pane_cp13

0x85e1,	// (0x0002d4d5) popup_keymap_window_t1

0x2ec8,	// (0x00027dbc) control_pane_g6_ParamLimits

0x2ec8,	// (0x00027dbc) control_pane_g6

0x2ed5,	// (0x00027dc9) control_pane_g7_ParamLimits

0x2ed5,	// (0x00027dc9) control_pane_g7

0x2ee2,	// (0x00027dd6) control_pane_g8_ParamLimits

0x2ee2,	// (0x00027dd6) control_pane_g8

0xe71b,	// (0x0003360f) dt_sta_controll_pane_ParamLimits

0xe728,	// (0x0003361c) dt_sta_indi_pane_ParamLimits

0xe735,	// (0x00033629) dt_sta_title_pane_ParamLimits

0xd27d,	// (0x00032171) aid_size_touch_scroll_bar_cale

0xf45a,	// (0x0003434e) popup_discreet_window_ParamLimits

0xf45a,	// (0x0003434e) popup_discreet_window

0xa40d,	// (0x0002f301) popup_sk_window

0x3ab5,	// (0x000289a9) bg_popup_sub_pane_cp28_ParamLimits

0x3ab5,	// (0x000289a9) bg_popup_sub_pane_cp28

0x85ef,	// (0x0002d4e3) popup_discreet_window_g1_ParamLimits

0x85ef,	// (0x0002d4e3) popup_discreet_window_g1

0x860f,	// (0x0002d503) popup_discreet_window_t1_ParamLimits

0x860f,	// (0x0002d503) popup_discreet_window_t1

0x862d,	// (0x0002d521) popup_discreet_window_t2_ParamLimits

0x862d,	// (0x0002d521) popup_discreet_window_t2

0x0002,

0xfe8d,	// (0x00034d81) popup_discreet_window_t_ParamLimits

0xfe8d,	// (0x00034d81) popup_discreet_window_t

0x2701,	// (0x000275f5) popup_sk_window_g1

0x270b,	// (0x000275ff) popup_sk_window_g2

0x0001,

0xfe94,	// (0x00034d88) popup_sk_window_g

0x2713,	// (0x00027607) popup_sk_window_t1

0x2721,	// (0x00027615) popup_sk_window_t1_copy1

0xe4cd,	// (0x000333c1) cell_ai5_widget_pane_g2_ParamLimits

0xe638,	// (0x0003352c) cell_ai5_widget_pane_t9_ParamLimits

0xe638,	// (0x0003352c) cell_ai5_widget_pane_t9

0xcc89,	// (0x00031b7d) main_fep_fshwr2_pane

0xca8d,	// (0x00031981) aid_fshwr2_btn_pane

0xcaa1,	// (0x00031995) aid_fshwr2_syb_pane

0xcab5,	// (0x000319a9) aid_fshwr2_txt_pane

0xcac5,	// (0x000319b9) fshwr2_func_candi_pane

0xcae7,	// (0x000319db) fshwr2_hwr_syb_pane

0xcb0b,	// (0x000319ff) fshwr2_icf_pane

0xcc89,	// (0x00031b7d) fshwr2_icf_bg_pane

0x27cd,	// (0x000276c1) fshwr2_icf_pane_t1_ParamLimits

0x27cd,	// (0x000276c1) fshwr2_icf_pane_t1

0x06a2,	// (0x00025596) fshwr2_func_candi_pane_g1

0xe7b4,	// (0x000336a8) fshwr2_func_candi_row_pane_ParamLimits

0xe7b4,	// (0x000336a8) fshwr2_func_candi_row_pane

0xcb3b,	// (0x00031a2f) cell_fshwr2_syb_pane_ParamLimits

0xcb3b,	// (0x00031a2f) cell_fshwr2_syb_pane

0x7fbb,	// (0x0002ceaf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7fbb,	// (0x0002ceaf) fshwr2_hwr_syb_pane_g1

0xcc89,	// (0x00031b7d) bg_popup_call_pane_cp01

0xcb63,	// (0x00031a57) fshwr2_func_candi_cell_pane_ParamLimits

0xcb63,	// (0x00031a57) fshwr2_func_candi_cell_pane

0x3895,	// (0x00028789) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3895,	// (0x00028789) fshwr2_func_candi_cell_bg_pane

0xcbae,	// (0x00031aa2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcbae,	// (0x00031aa2) fshwr2_func_candi_cell_pane_g1

0xcbe5,	// (0x00031ad9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcbe5,	// (0x00031ad9) fshwr2_func_candi_cell_pane_t1

0xcc89,	// (0x00031b7d) bg_button_pane_cp08

0x2f17,	// (0x00027e0b) cell_fshwr2_syb_bg_pane

0xcc00,	// (0x00031af4) cell_fshwr2_syb_bg_pane_g1

0xcc14,	// (0x00031b08) cell_fshwr2_syb_bg_pane_t1

0xd33b,	// (0x0003222f) main_tmo_pane

0xbcba,	// (0x00030bae) uni_indicator_pane_g1_ParamLimits

0xbcd0,	// (0x00030bc4) uni_indicator_pane_g2_ParamLimits

0xbce6,	// (0x00030bda) uni_indicator_pane_g3_ParamLimits

0xbcf9,	// (0x00030bed) uni_indicator_pane_g4_ParamLimits

0xbcf9,	// (0x00030bed) uni_indicator_pane_g4

0x462c,	// (0x00029520) uni_indicator_pane_g5_ParamLimits

0x462c,	// (0x00029520) uni_indicator_pane_g5

0x462c,	// (0x00029520) uni_indicator_pane_g6_ParamLimits

0x462c,	// (0x00029520) uni_indicator_pane_g6

0xf8f7,	// (0x000347eb) uni_indicator_pane_g_ParamLimits

0xd874,	// (0x00032768) popup_tmo_note_window_ParamLimits

0xd874,	// (0x00032768) popup_tmo_note_window

0xd33b,	// (0x0003222f) fshwr2_bg_pane

0xcbd6,	// (0x00031aca) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcbd6,	// (0x00031aca) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe99,	// (0x00034d8d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe99,	// (0x00034d8d) fshwr2_func_candi_cell_pane_g

0x5a9a,	// (0x0002a98e) bg_popup_window_pane_cp01

0x28bf,	// (0x000277b3) bg_popup_window_pane_g1_cp01

0x86a2,	// (0x0002d596) bg_popup_window_pane_cp22_ParamLimits

0x86a2,	// (0x0002d596) bg_popup_window_pane_cp22

0x86b0,	// (0x0002d5a4) listscroll_tmo_link_pane_ParamLimits

0x86b0,	// (0x0002d5a4) listscroll_tmo_link_pane

0x86f0,	// (0x0002d5e4) popup_tmo_note_window_g1_ParamLimits

0x86f0,	// (0x0002d5e4) popup_tmo_note_window_g1

0x86fd,	// (0x0002d5f1) tmo_note_info_pane_ParamLimits

0x86fd,	// (0x0002d5f1) tmo_note_info_pane

0xe7db,	// (0x000336cf) list_tmo_note_info_pane_g1_ParamLimits

0xe7db,	// (0x000336cf) list_tmo_note_info_pane_g1

0x872e,	// (0x0002d622) list_tmo_note_info_pane_g2_ParamLimits

0x872e,	// (0x0002d622) list_tmo_note_info_pane_g2

0x0001,

0xfe9e,	// (0x00034d92) list_tmo_note_info_pane_g_ParamLimits

0xfe9e,	// (0x00034d92) list_tmo_note_info_pane_g

0x874a,	// (0x0002d63e) list_tmo_note_info_text_pane_ParamLimits

0x874a,	// (0x0002d63e) list_tmo_note_info_text_pane

0x87cf,	// (0x0002d6c3) list_tmo_link_pane

0x87dc,	// (0x0002d6d0) scroll_pane_cp20

0x87e9,	// (0x0002d6dd) list_single_tmo_link_pane_ParamLimits

0x87e9,	// (0x0002d6dd) list_single_tmo_link_pane

0x87f9,	// (0x0002d6ed) list_single_tmo_link_pane_t1

0x8807,	// (0x0002d6fb) list_tmo_note_info_text_pane_t1_ParamLimits

0x8807,	// (0x0002d6fb) list_tmo_note_info_text_pane_t1

0xa8b3,	// (0x0002f7a7) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa8b3,	// (0x0002f7a7) aid_size_touch_scroll_bar_cp01

0x9ea5,	// (0x0002ed99) aid_size_touch_slider_marker

0xa3fd,	// (0x0002f2f1) popup_settings_window_ParamLimits

0xa3fd,	// (0x0002f2f1) popup_settings_window

0xec43,	// (0x00033b37) popup_candi_list_indi_window

0x2f95,	// (0x00027e89) aid_touch_navi_pane_ParamLimits

0x1ee4,	// (0x00026dd8) rs_clock_indi_pane

0x1eed,	// (0x00026de1) sctrl_sk_bottom_pane_ParamLimits

0x1efe,	// (0x00026df2) sctrl_sk_top_pane_ParamLimits

0x1fdf,	// (0x00026ed3) popup_fep_tooltip_window

0xe499,	// (0x0003338d) aid_size_cell_widget_grid_ParamLimits

0xe4b8,	// (0x000333ac) cell_ai5_widget_pane_g1_ParamLimits

0xe4b8,	// (0x000333ac) cell_ai5_widget_pane_g1

0xe51b,	// (0x0003340f) cell_ai5_widget_pane_g6_ParamLimits

0xe527,	// (0x0003341b) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe12,	// (0x00034d06) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x00034d06) cell_ai5_widget_pane_g

0xe667,	// (0x0003355b) cell_ai5_widget_pane_t10_ParamLimits

0xe667,	// (0x0003355b) cell_ai5_widget_pane_t10

0xe6aa,	// (0x0003359e) grid_ai5_widget_pane_ParamLimits

0xe6d6,	// (0x000335ca) cell_contacts_ai5_widget_pane_ParamLimits

0xe6d6,	// (0x000335ca) cell_contacts_ai5_widget_pane

0x8642,	// (0x0002d536) popup_discreet_window_t3_ParamLimits

0x8642,	// (0x0002d536) popup_discreet_window_t3

0xcb27,	// (0x00031a1b) popup_fshwr2_char_preview_window_ParamLimits

0xcb27,	// (0x00031a1b) popup_fshwr2_char_preview_window

0xe7f2,	// (0x000336e6) tmo_note_info_pane_t1

0xe807,	// (0x000336fb) tmo_note_info_pane_t2

0xe820,	// (0x00033714) tmo_note_info_pane_t3

0x87ab,	// (0x0002d69f) tmo_note_info_pane_t4

0x87bd,	// (0x0002d6b1) tmo_note_info_pane_t5

0x0004,

0xfea3,	// (0x00034d97) tmo_note_info_pane_t

0x87cf,	// (0x0002d6c3) list_tmo_link_pane_ParamLimits

0x87dc,	// (0x0002d6d0) scroll_pane_cp20_ParamLimits

0xcc89,	// (0x00031b7d) bg_popup_fep_char_preview_window_cp01

0x8820,	// (0x0002d714) popup_fshwr2_char_preview_window_t1

0x882e,	// (0x0002d722) popup_candi_list_indi_window_g1

0x8837,	// (0x0002d72b) bg_cell_contacts_ai5_widget_pane

0xe835,	// (0x00033729) cell_contacts_ai5_widget_pane_g1

0x8858,	// (0x0002d74c) cell_contacts_ai5_widget_pane_g2

0x8864,	// (0x0002d758) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeae,	// (0x00034da2) cell_contacts_ai5_widget_pane_g

0x8870,	// (0x0002d764) cell_contacts_ai5_widget_pane_t1

0xd33b,	// (0x0003222f) highlight_cell_shortcut_ai5_widget_pane_cp01

0x88e7,	// (0x0002d7db) settings_container_pane

0x2bf0,	// (0x00027ae4) listscroll_set_pane_copy1

0x51cb,	// (0x0002a0bf) scroll_pane_cp121_copy1

0x88f3,	// (0x0002d7e7) set_content_pane_copy1

0x88fb,	// (0x0002d7ef) aid_height_set_list_copy1_ParamLimits

0x88fb,	// (0x0002d7ef) aid_height_set_list_copy1

0x482c,	// (0x00029720) aid_size_parent_copy1_ParamLimits

0x482c,	// (0x00029720) aid_size_parent_copy1

0x8907,	// (0x0002d7fb) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8907,	// (0x0002d7fb) button_value_adjust_pane_cp6_copy1

0x2f17,	// (0x00027e0b) list_highlight_pane_cp2_copy1_ParamLimits

0x2f17,	// (0x00027e0b) list_highlight_pane_cp2_copy1

0x891b,	// (0x0002d80f) list_set_pane_copy1_ParamLimits

0x891b,	// (0x0002d80f) list_set_pane_copy1

0x8882,	// (0x0002d776) main_pane_set_t1_copy1_ParamLimits

0x8882,	// (0x0002d776) main_pane_set_t1_copy1

0x88bc,	// (0x0002d7b0) main_pane_set_t2_copy1_ParamLimits

0x88bc,	// (0x0002d7b0) main_pane_set_t2_copy1

0x89dc,	// (0x0002d8d0) main_pane_set_t3_copy1

0x89ea,	// (0x0002d8de) main_pane_set_t4_copy1

0x88db,	// (0x0002d7cf) set_content_pane_g1_copy1_ParamLimits

0x88db,	// (0x0002d7cf) set_content_pane_g1_copy1

0x89f8,	// (0x0002d8ec) setting_code_pane_copy1

0x8a00,	// (0x0002d8f4) setting_slider_graphic_pane_copy1

0x8a00,	// (0x0002d8f4) setting_slider_pane_copy1

0x8a08,	// (0x0002d8fc) setting_text_pane_copy1

0x8a08,	// (0x0002d8fc) setting_volume_pane_copy1

0x89f8,	// (0x0002d8ec) settings_code_pane_cp2_copy1

0x8a10,	// (0x0002d904) settings_code_pane_cp_copy1_ParamLimits

0x8a10,	// (0x0002d904) settings_code_pane_cp_copy1

0x28c8,	// (0x000277bc) volume_set_pane_copy1

0x8a24,	// (0x0002d918) volume_set_pane_g10_copy1

0x8a30,	// (0x0002d924) volume_set_pane_g1_copy1

0x8a3a,	// (0x0002d92e) volume_set_pane_g2_copy1

0x8a44,	// (0x0002d938) volume_set_pane_g3_copy1

0x8a4e,	// (0x0002d942) volume_set_pane_g4_copy1

0x8a58,	// (0x0002d94c) volume_set_pane_g5_copy1

0x8a62,	// (0x0002d956) volume_set_pane_g6_copy1

0x8a6c,	// (0x0002d960) volume_set_pane_g7_copy1

0x8a76,	// (0x0002d96a) volume_set_pane_g8_copy1

0x8a80,	// (0x0002d974) volume_set_pane_g9_copy1

0xccf9,	// (0x00031bed) bg_set_opt_pane_cp_copy1_ParamLimits

0xccf9,	// (0x00031bed) bg_set_opt_pane_cp_copy1

0x28d4,	// (0x000277c8) setting_slider_pane_t1_copy1_ParamLimits

0x28d4,	// (0x000277c8) setting_slider_pane_t1_copy1

0x28f3,	// (0x000277e7) setting_slider_pane_t2_copy1_ParamLimits

0x28f3,	// (0x000277e7) setting_slider_pane_t2_copy1

0x290d,	// (0x00027801) setting_slider_pane_t3_copy1_ParamLimits

0x290d,	// (0x00027801) setting_slider_pane_t3_copy1

0x2925,	// (0x00027819) slider_set_pane_copy1_ParamLimits

0x2925,	// (0x00027819) slider_set_pane_copy1

0xd393,	// (0x00032287) set_opt_bg_pane_g1_copy2

0xd39b,	// (0x0003228f) set_opt_bg_pane_g2_copy2

0x8a8c,	// (0x0002d980) set_opt_bg_pane_g3_copy2

0xd3ab,	// (0x0003229f) set_opt_bg_pane_g4_copy2

0xd3b3,	// (0x000322a7) set_opt_bg_pane_g5_copy2

0xd3bb,	// (0x000322af) set_opt_bg_pane_g6_copy2

0x8a96,	// (0x0002d98a) set_opt_bg_pane_g7_copy2

0x8aa0,	// (0x0002d994) set_opt_bg_pane_g8_copy2

0x8aaa,	// (0x0002d99e) set_opt_bg_pane_g9_copy2

0x293b,	// (0x0002782f) aid_size_touch_slider_mark_copy1_ParamLimits

0x293b,	// (0x0002782f) aid_size_touch_slider_mark_copy1

0x8ab4,	// (0x0002d9a8) slider_set_pane_g1_copy1

0x294f,	// (0x00027843) slider_set_pane_g2_copy1

0x19ac,	// (0x000268a0) slider_set_pane_g3_copy1_ParamLimits

0x19ac,	// (0x000268a0) slider_set_pane_g3_copy1

0x19c0,	// (0x000268b4) slider_set_pane_g4_copy1_ParamLimits

0x19c0,	// (0x000268b4) slider_set_pane_g4_copy1

0x19d8,	// (0x000268cc) slider_set_pane_g5_copy1_ParamLimits

0x19d8,	// (0x000268cc) slider_set_pane_g5_copy1

0x19ac,	// (0x000268a0) slider_set_pane_g6_copy1_ParamLimits

0x19ac,	// (0x000268a0) slider_set_pane_g6_copy1

0x2957,	// (0x0002784b) slider_set_pane_g7_copy1_ParamLimits

0x2957,	// (0x0002784b) slider_set_pane_g7_copy1

0xcc9d,	// (0x00031b91) bg_set_opt_pane_cp2_copy1

0x8abd,	// (0x0002d9b1) setting_slider_graphic_pane_g1_copy1

0x8ac6,	// (0x0002d9ba) setting_slider_graphic_pane_t1_copy1

0x8ad6,	// (0x0002d9ca) setting_slider_graphic_pane_t2_copy1

0x8ae6,	// (0x0002d9da) slider_set_pane_cp_copy1

0x8af6,	// (0x0002d9ea) input_focus_pane_cp1_copy1

0x8aff,	// (0x0002d9f3) list_set_text_pane_copy1

0x8b07,	// (0x0002d9fb) setting_text_pane_g1_copy1

0xf2d9,	// (0x000341cd) set_text_pane_t1_copy1

0x8af6,	// (0x0002d9ea) input_focus_pane_cp2_copy1

0x8b07,	// (0x0002d9fb) setting_code_pane_g1_copy1

0x8b10,	// (0x0002da04) setting_code_pane_t1_copy1

0x4fd0,	// (0x00029ec4) list_set_graphic_pane_copy1

0xcc9d,	// (0x00031b91) bg_set_opt_pane_cp4_copy1

0x0be0,	// (0x00025ad4) list_set_graphic_pane_g1_copy1_ParamLimits

0x0be0,	// (0x00025ad4) list_set_graphic_pane_g1_copy1

0x8b1e,	// (0x0002da12) list_set_graphic_pane_g2_copy1

0x0bf8,	// (0x00025aec) list_set_graphic_pane_t1_copy1_ParamLimits

0x0bf8,	// (0x00025aec) list_set_graphic_pane_t1_copy1

0x5a9a,	// (0x0002a98e) rs_clock_indi_pane_g1

0x8b26,	// (0x0002da1a) rs_clock_indi_pane_t1

0x8b34,	// (0x0002da28) rs_indi_pane

0x8b3c,	// (0x0002da30) rs_indi_pane_g1

0x8b45,	// (0x0002da39) rs_indi_pane_g2

0x882e,	// (0x0002d722) rs_indi_pane_g3

0x0002,

0xfeb5,	// (0x00034da9) rs_indi_pane_g

0x2bf0,	// (0x00027ae4) bg_popup_preview_window_pane_cp03

0x8b4e,	// (0x0002da42) popup_fep_tooltip_window_t1

0x6777,	// (0x0002b66b) popup_note2_window_g2_ParamLimits

0x6777,	// (0x0002b66b) popup_note2_window_g2

0x0001,

0xfc42,	// (0x00034b36) popup_note2_window_g_ParamLimits

0xfc42,	// (0x00034b36) popup_note2_window_g

0x6c7f,	// (0x0002bb73) bg_popup_sub_pane_cp11_ParamLimits

0x6c8c,	// (0x0002bb80) cell_ai3_links_pane_g1_ParamLimits

0x6ca3,	// (0x0002bb97) cell_ai3_links_pane_t1

0xf2d9,	// (0x000341cd) set_text_pane_t1_copy1_ParamLimits

0x0df3,	// (0x00025ce7) cell_graphic_popup_pane_cp2_ParamLimits

0x0df3,	// (0x00025ce7) cell_graphic_popup_pane_cp2

0x8b5c,	// (0x0002da50) cell_graphic_popup_pane_g1_cp2

0xd090,	// (0x00031f84) cell_graphic_popup_pane_g2_cp2

0x8b64,	// (0x0002da58) cell_graphic_popup_pane_g3_cp2

0x8b6c,	// (0x0002da60) cell_graphic_popup_pane_t2_cp2

0xd0a1,	// (0x00031f95) grid_highlight_pane_cp3_cp2

0xd64f,	// (0x00032543) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd33b,	// (0x0003222f) main_tmo_pane_ParamLimits

0xd868,	// (0x0003275c) popup_tmo_big_image_note_window

0xe4a7,	// (0x0003339b) cell_ai5_widget_list_pane

0xe4af,	// (0x000333a3) cell_ai5_widget_lrg_icon_pane

0xe7f2,	// (0x000336e6) tmo_note_info_pane_t1_ParamLimits

0xe807,	// (0x000336fb) tmo_note_info_pane_t2_ParamLimits

0xe820,	// (0x00033714) tmo_note_info_pane_t3_ParamLimits

0x87ab,	// (0x0002d69f) tmo_note_info_pane_t4_ParamLimits

0x87bd,	// (0x0002d6b1) tmo_note_info_pane_t5_ParamLimits

0xfea3,	// (0x00034d97) tmo_note_info_pane_t_ParamLimits

0x88e7,	// (0x0002d7db) settings_container_pane_ParamLimits

0x8aee,	// (0x0002d9e2) indicator_popup_pane_cp5

0x8aee,	// (0x0002d9e2) indicator_popup_pane_cp6

0x4fd0,	// (0x00029ec4) list_set_graphic_pane_copy1_ParamLimits

0xcc89,	// (0x00031b7d) bg_popup_window_pane_cp23

0x8b7a,	// (0x0002da6e) popup_tmo_big_image_note_window_g1

0x8b86,	// (0x0002da7a) popup_tmo_big_image_note_window_t1

0x8b96,	// (0x0002da8a) popup_tmo_big_image_note_window_t2

0x8ba6,	// (0x0002da9a) popup_tmo_big_image_note_window_t3

0x0002,

0xfebc,	// (0x00034db0) popup_tmo_big_image_note_window_t

0x5a9a,	// (0x0002a98e) cell_ai5_widget_lrg_icon_pane_g1

0xe84a,	// (0x0003373e) cell_ai5_widget_lrg_icon_pane_t1

0xe858,	// (0x0003374c) cell_ai5_widget_list_row_pane_ParamLimits

0xe858,	// (0x0003374c) cell_ai5_widget_list_row_pane

0xe870,	// (0x00033764) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe870,	// (0x00033764) cell_ai5_widget_list_row_pane_g1

0xe87d,	// (0x00033771) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe87d,	// (0x00033771) cell_ai5_widget_list_row_pane_t1

0xe8a8,	// (0x0003379c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe8a8,	// (0x0003379c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec3,	// (0x00034db7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec3,	// (0x00034db7) cell_ai5_widget_list_row_pane_t

0xcc89,	// (0x00031b7d) main_fep_vtchi_ss_pane

0x8c64,	// (0x0002db58) popup_fep_char_pre_window

0x8c6c,	// (0x0002db60) popup_fep_ituss_window

0xe8fa,	// (0x000337ee) popup_fep_vkbss_window

0x2f17,	// (0x00027e0b) grid_vkbss_keypad_pane_ParamLimits

0x2f17,	// (0x00027e0b) grid_vkbss_keypad_pane

0x8cda,	// (0x0002dbce) ituss_keypad_pane

0x2977,	// (0x0002786b) aid_vkbss_key_offset_ParamLimits

0x2977,	// (0x0002786b) aid_vkbss_key_offset

0xcc2a,	// (0x00031b1e) cell_vkbss_key_pane_ParamLimits

0xcc2a,	// (0x00031b1e) cell_vkbss_key_pane

0x8ce6,	// (0x0002dbda) bg_cell_vkbss_key_g1_ParamLimits

0x8ce6,	// (0x0002dbda) bg_cell_vkbss_key_g1

0xe909,	// (0x000337fd) cell_vkbss_key_3p_pane_ParamLimits

0xe909,	// (0x000337fd) cell_vkbss_key_3p_pane

0xe93f,	// (0x00033833) cell_vkbss_key_g1_ParamLimits

0xe93f,	// (0x00033833) cell_vkbss_key_g1

0xe975,	// (0x00033869) cell_vkbss_key_t1_ParamLimits

0xe975,	// (0x00033869) cell_vkbss_key_t1

0x29e5,	// (0x000278d9) cell_ituss_key_pane_ParamLimits

0x29e5,	// (0x000278d9) cell_ituss_key_pane

0x8dba,	// (0x0002dcae) bg_cell_ituss_key_g1_ParamLimits

0x8dba,	// (0x0002dcae) bg_cell_ituss_key_g1

0x8dc6,	// (0x0002dcba) cell_ituss_key_pane_g1_ParamLimits

0x8dc6,	// (0x0002dcba) cell_ituss_key_pane_g1

0x29f6,	// (0x000278ea) cell_ituss_key_pane_g2_ParamLimits

0x29f6,	// (0x000278ea) cell_ituss_key_pane_g2

0x0005,

0xfeca,	// (0x00034dbe) cell_ituss_key_pane_g_ParamLimits

0xfeca,	// (0x00034dbe) cell_ituss_key_pane_g

0x2a7a,	// (0x0002796e) cell_ituss_key_t1_ParamLimits

0x2a7a,	// (0x0002796e) cell_ituss_key_t1

0x2ab4,	// (0x000279a8) cell_ituss_key_t2_ParamLimits

0x2ab4,	// (0x000279a8) cell_ituss_key_t2

0x2ae6,	// (0x000279da) cell_ituss_key_t3_ParamLimits

0x2ae6,	// (0x000279da) cell_ituss_key_t3

0x2b17,	// (0x00027a0b) cell_ituss_key_t4_ParamLimits

0x2b17,	// (0x00027a0b) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x00034dcb) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00034dcb) cell_ituss_key_t

0xe9d1,	// (0x000338c5) cell_vkbss_key_3p_pane_g1

0xe9d9,	// (0x000338cd) cell_vkbss_key_3p_pane_g2

0xe9e1,	// (0x000338d5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x00034dd6) cell_vkbss_key_3p_pane_g

0x2bf0,	// (0x00027ae4) bg_popup_fep_char_preview_window_cp02

0x8e04,	// (0x0002dcf8) popup_fep_char_pre_window_t1

0xe486,	// (0x0003337a) main_ai5_sk_pane

0x8837,	// (0x0002d72b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe835,	// (0x00033729) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8858,	// (0x0002d74c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8864,	// (0x0002d758) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeae,	// (0x00034da2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8870,	// (0x0002d764) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd33b,	// (0x0003222f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9e9,	// (0x000338dd) main_ai5_sk_pane_g1

0x38ed,	// (0x000287e1) popup_query_code_window_g1

0xe8eb,	// (0x000337df) popup_fep_vkb_icf_pane

0x8cb1,	// (0x0002dba5) popup_fep_vtchi_icf_pane

0x8e1b,	// (0x0002dd0f) bg_icf_pane

0x8e1b,	// (0x0002dd0f) list_vkb_icf_pane

0x8e27,	// (0x0002dd1b) bg_icf_pane_cp01

0x8e3a,	// (0x0002dd2e) vtchi_icf_list_pane

0xea3e,	// (0x00033932) list_vkb_icf_pane_t1_ParamLimits

0xea3e,	// (0x00033932) list_vkb_icf_pane_t1

0x8eb3,	// (0x0002dda7) vtchi_icf_list_pane_t1_ParamLimits

0x8eb3,	// (0x0002dda7) vtchi_icf_list_pane_t1

0x8c6c,	// (0x0002db60) popup_fep_ituss_window_ParamLimits

0x8cb1,	// (0x0002dba5) popup_fep_vtchi_icf_pane_ParamLimits

0x8cda,	// (0x0002dbce) ituss_keypad_pane_ParamLimits

0x296d,	// (0x00027861) ituss_sks_pane

0x8e1b,	// (0x0002dd0f) bg_icf_pane_ParamLimits

0xe8d0,	// (0x000337c4) icf_edit_indi_pane_ParamLimits

0xe8d0,	// (0x000337c4) icf_edit_indi_pane

0x8e1b,	// (0x0002dd0f) list_vkb_icf_pane_ParamLimits

0x8e27,	// (0x0002dd1b) bg_icf_pane_cp01_ParamLimits

0x8c57,	// (0x0002db4b) icf_edit_indi_pane_cp01_ParamLimits

0x8c57,	// (0x0002db4b) icf_edit_indi_pane_cp01

0x8e3a,	// (0x0002dd2e) vtchi_query_pane

0x7fbb,	// (0x0002ceaf) icf_edit_indi_pane_g1_ParamLimits

0x7fbb,	// (0x0002ceaf) icf_edit_indi_pane_g1

0xea55,	// (0x00033949) icf_edit_indi_pane_g2_ParamLimits

0xea55,	// (0x00033949) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00034e01) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00034e01) icf_edit_indi_pane_g

0xea69,	// (0x0003395d) icf_edit_indi_pane_t1

0x8ecc,	// (0x0002ddc0) bg_input_focus_pane_cp042

0xd274,	// (0x00032168) vtchi_button_pane

0x8ed5,	// (0x0002ddc9) vtchi_query_pane_t1

0x8ee3,	// (0x0002ddd7) vtchi_query_pane_t2

0x8ef1,	// (0x0002dde5) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00034df0) vtchi_query_pane_t

0xcc89,	// (0x00031b7d) bg_button_pane_cp13

0x8eff,	// (0x0002ddf3) vtchi_button_pane_g1

0x2b5a,	// (0x00027a4e) ituss_sks_pane_g1

0x2b65,	// (0x00027a59) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00034df7) ituss_sks_pane_g

0x8f07,	// (0x0002ddfb) ituss_sks_pane_t1

0x8f15,	// (0x0002de09) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00034dfc) ituss_sks_pane_t

0x556e,	// (0x0002a462) indicator_nsta_pane_cp_g1

0x5577,	// (0x0002a46b) indicator_nsta_pane_cp_g2

0x557f,	// (0x0002a473) indicator_nsta_pane_cp_g3

0x5587,	// (0x0002a47b) indicator_nsta_pane_cp_g4

0x5577,	// (0x0002a46b) indicator_nsta_pane_cp_g5

0x557f,	// (0x0002a473) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00034980) indicator_nsta_pane_cp_g

0xe28e,	// (0x00033182) cell_graphic2_pane_t2_ParamLimits

0xe28e,	// (0x00033182) cell_graphic2_pane_t2

0x0001,

0xfd99,	// (0x00034c8d) cell_graphic2_pane_t_ParamLimits

0xfd99,	// (0x00034c8d) cell_graphic2_pane_t

0xe2c6,	// (0x000331ba) cell_graphic2_control_pane_t1

0xab2d,	// (0x0002fa21) signal_pane_g3_ParamLimits

0xab2d,	// (0x0002fa21) signal_pane_g3

0xab41,	// (0x0002fa35) signal_pane_g4_ParamLimits

0xab41,	// (0x0002fa35) signal_pane_g4

0xe8ba,	// (0x000337ae) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe8ba,	// (0x000337ae) cell_ai5_widget_list_row_pane_t3

0x8dda,	// (0x0002dcce) cell_ituss_key_pane_t1_ParamLimits

0x8dda,	// (0x0002dcce) cell_ituss_key_pane_t1

0x3554,	// (0x00028448) form_field_data_wide_pane_vc_t2_ParamLimits

0x3554,	// (0x00028448) form_field_data_wide_pane_vc_t2

0x3568,	// (0x0002845c) form_field_data_wide_pane_vc_t3_ParamLimits

0x3568,	// (0x0002845c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x000346d3) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x000346d3) form_field_data_wide_pane_vc_t

0x520b,	// (0x0002a0ff) form_field_slider_wide_pane_vc_t3_ParamLimits

0x520b,	// (0x0002a0ff) form_field_slider_wide_pane_vc_t3

0x52e1,	// (0x0002a1d5) form_field_popup_wide_pane_vc_t2_ParamLimits

0x52e1,	// (0x0002a1d5) form_field_popup_wide_pane_vc_t2

0x52f8,	// (0x0002a1ec) form_field_popup_wide_pane_vc_t3_ParamLimits

0x52f8,	// (0x0002a1ec) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x0003496f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0003496f) form_field_popup_wide_pane_vc_t

0xca8d,	// (0x00031981) aid_fshwr2_btn_pane_ParamLimits

0xcaa1,	// (0x00031995) aid_fshwr2_syb_pane_ParamLimits

0xcab5,	// (0x000319a9) aid_fshwr2_txt_pane_ParamLimits

0xd33b,	// (0x0003222f) fshwr2_bg_pane_ParamLimits

0xcac5,	// (0x000319b9) fshwr2_func_candi_pane_ParamLimits

0xcae7,	// (0x000319db) fshwr2_hwr_syb_pane_ParamLimits

0xcb0b,	// (0x000319ff) fshwr2_icf_pane_ParamLimits

0xf055,	// (0x00033f49) list_double_graphic_pane_vc_g4_ParamLimits

0xf055,	// (0x00033f49) list_double_graphic_pane_vc_g4

0x2a16,	// (0x0002790a) cell_ituss_key_pane_g3_ParamLimits

0x2a16,	// (0x0002790a) cell_ituss_key_pane_g3

0x2b48,	// (0x00027a3c) cell_ituss_key_t5_ParamLimits

0x2b48,	// (0x00027a3c) cell_ituss_key_t5

0xe8fa,	// (0x000337ee) popup_fep_vkbss_window_ParamLimits

0xe490,	// (0x00033384) aid_cell_ai5_quarter

0xea69,	// (0x0003395d) icf_edit_indi_pane_t1_ParamLimits

0xced4,	// (0x00031dc8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xced4,	// (0x00031dc8) aid_tch_indicator_popup_pane_cp2

0xcee7,	// (0x00031ddb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xcee7,	// (0x00031ddb) aid_tch_query_popup_data_pane_cp2

0x3895,	// (0x00028789) aid_tch_query_popup_pane_ParamLimits

0x3895,	// (0x00028789) aid_tch_query_popup_pane

0x3895,	// (0x00028789) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3895,	// (0x00028789) aid_tch_query_popup_data_pane_cp1

0x2f17,	// (0x00027e0b) cell_fshwr2_syb_bg_pane_ParamLimits

0xcc00,	// (0x00031af4) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcc14,	// (0x00031b08) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe8eb,	// (0x000337df) popup_fep_vkb_icf_pane_ParamLimits

0xca21,	// (0x00031915) bg_popup_fep_char_preview_window_g10

0xe56f,	// (0x00033463) cell_ai5_widget_pane_g11_ParamLimits

0xe56f,	// (0x00033463) cell_ai5_widget_pane_g11

0xe57b,	// (0x0003346f) cell_ai5_widget_pane_g12_ParamLimits

0xe57b,	// (0x0003346f) cell_ai5_widget_pane_g12

0xe587,	// (0x0003347b) cell_ai5_widget_pane_g13_ParamLimits

0xe587,	// (0x0003347b) cell_ai5_widget_pane_g13

0xe686,	// (0x0003357a) cell_ai5_widget_pane_t11_ParamLimits

0xe686,	// (0x0003357a) cell_ai5_widget_pane_t11

0xe698,	// (0x0003358c) cell_ai5_widget_pane_t12_ParamLimits

0xe698,	// (0x0003358c) cell_ai5_widget_pane_t12

0x2a22,	// (0x00027916) cell_ituss_key_pane_g4_ParamLimits

0x2a22,	// (0x00027916) cell_ituss_key_pane_g4

0x2a3e,	// (0x00027932) cell_ituss_key_pane_g5_ParamLimits

0x2a3e,	// (0x00027932) cell_ituss_key_pane_g5

0x2a5a,	// (0x0002794e) cell_ituss_key_pane_g6_ParamLimits

0x2a5a,	// (0x0002794e) cell_ituss_key_pane_g6

0x344f,	// (0x00028343) bg_icf_pane_g1

0xe9f2,	// (0x000338e6) bg_icf_pane_g2

0xe9fc,	// (0x000338f0) bg_icf_pane_g3

0xea04,	// (0x000338f8) bg_icf_pane_g4

0xea0e,	// (0x00033902) bg_icf_pane_g5

0xea18,	// (0x0003390c) bg_icf_pane_g6

0xea22,	// (0x00033916) bg_icf_pane_g7

0xea2a,	// (0x0003391e) bg_icf_pane_g8

0xea34,	// (0x00033928) bg_icf_pane_g9

0x0008,

0xfee9,	// (0x00034ddd) bg_icf_pane_g

0x8cc7,	// (0x0002dbbb) popup_hyb_candi_window_ParamLimits

0x8cc7,	// (0x0002dbbb) popup_hyb_candi_window

0x34c3,	// (0x000283b7) bg_popup_sub_pane_cp01_ParamLimits

0x34c3,	// (0x000283b7) bg_popup_sub_pane_cp01

0x8f50,	// (0x0002de44) entry_hyb_candi_pane_ParamLimits

0x8f50,	// (0x0002de44) entry_hyb_candi_pane

0x8f5f,	// (0x0002de53) grid_hyb_candi_pane_ParamLimits

0x8f5f,	// (0x0002de53) grid_hyb_candi_pane

0x8f74,	// (0x0002de68) grid_hyb_phrase_pane_ParamLimits

0x8f74,	// (0x0002de68) grid_hyb_phrase_pane

0x8f83,	// (0x0002de77) cell_hyb_candi_pane_ParamLimits

0x8f83,	// (0x0002de77) cell_hyb_candi_pane

0xd27d,	// (0x00032171) cell_hyb_candi_scroll_pane

0x06a2,	// (0x00025596) cell_hyb_candi_pane_g1

0x8f9f,	// (0x0002de93) cell_hyb_candi_pane_t1

0x8fad,	// (0x0002dea1) cell_hyb_phrase_pane

0x06a2,	// (0x00025596) cell_hyb_phrase_pane_g1

0x8fb6,	// (0x0002deaa) cell_hyb_phrase_pane_t1

0x8fc4,	// (0x0002deb8) entry_hyb_candi_pane_t1

0x2bf0,	// (0x00027ae4) input_focus_pane_cp06

0x8fd2,	// (0x0002dec6) cell_hyb_candi_scroll_pane_g1

0x8fda,	// (0x0002dece) cell_hyb_candi_scroll_pane_g1_aid

0x8fe2,	// (0x0002ded6) cell_hyb_candi_scroll_pane_g2

0x8fea,	// (0x0002dede) cell_hyb_candi_scroll_pane_g2_aid

0x8ff2,	// (0x0002dee6) cell_hyb_candi_scroll_pane_g3

0x8ffa,	// (0x0002deee) cell_hyb_candi_scroll_pane_g4
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

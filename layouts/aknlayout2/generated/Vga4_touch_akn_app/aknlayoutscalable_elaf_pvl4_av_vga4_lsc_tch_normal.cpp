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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00001ae2 };

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
0xa009,	// (0x0000baeb) Screen

0xa015,	// (0x0000baf7) application_window_ParamLimits

0xa015,	// (0x0000baf7) application_window

0xe629,	// (0x0001010b) screen_g1

0xa04d,	// (0x0000bb2f) area_bottom_pane_ParamLimits

0xa04d,	// (0x0000bb2f) area_bottom_pane

0xe653,	// (0x00010135) area_top_pane_ParamLimits

0xe653,	// (0x00010135) area_top_pane

0xe6e7,	// (0x000101c9) main_pane_ParamLimits

0xe6e7,	// (0x000101c9) main_pane

0xe7a2,	// (0x00010284) misc_graphics

0xb883,	// (0x0000d365) battery_pane_ParamLimits

0xb883,	// (0x0000d365) battery_pane

0x2748,	// (0x0000422a) bg_status_flat_pane_g8

0x2750,	// (0x00004232) bg_status_flat_pane_g9

0x18b0,	// (0x00003392) context_pane_ParamLimits

0x18b0,	// (0x00003392) context_pane

0xb9fa,	// (0x0000d4dc) navi_pane_ParamLimits

0xb9fa,	// (0x0000d4dc) navi_pane

0xba84,	// (0x0000d566) signal_pane_ParamLimits

0xba84,	// (0x0000d566) signal_pane

0x0008,

0xf843,	// (0x00011325) bg_status_flat_pane_g

0xbb14,	// (0x0000d5f6) status_pane_g1_ParamLimits

0xbb14,	// (0x0000d5f6) status_pane_g1

0xbb2a,	// (0x0000d60c) status_pane_g2_ParamLimits

0xbb2a,	// (0x0000d60c) status_pane_g2

0x1ae9,	// (0x000035cb) status_pane_g3_ParamLimits

0x1ae9,	// (0x000035cb) status_pane_g3

0x0004,

0xf776,	// (0x00011258) status_pane_g_ParamLimits

0xf776,	// (0x00011258) status_pane_g

0xbb36,	// (0x0000d618) title_pane_ParamLimits

0xbb36,	// (0x0000d618) title_pane

0xbb9f,	// (0x0000d681) uni_indicator_pane_ParamLimits

0xbb9f,	// (0x0000d681) uni_indicator_pane

0x10d7,	// (0x00002bb9) bg_list_pane_ParamLimits

0x10d7,	// (0x00002bb9) bg_list_pane

0xb0bb,	// (0x0000cb9d) find_pane

0x1ebf,	// (0x000039a1) listscroll_app_pane_ParamLimits

0x1ebf,	// (0x000039a1) listscroll_app_pane

0x110b,	// (0x00002bed) listscroll_form_pane

0xb0c3,	// (0x0000cba5) listscroll_gen_pane_ParamLimits

0xb0c3,	// (0x0000cba5) listscroll_gen_pane

0x1127,	// (0x00002c09) listscroll_set_pane

0x3555,	// (0x00005037) main_idle_act_pane

0x0bce,	// (0x000026b0) main_idle_trad_pane

0x0bce,	// (0x000026b0) main_list_empty_pane

0x10ff,	// (0x00002be1) main_midp_pane

0x1141,	// (0x00002c23) main_pane_g1_ParamLimits

0x1141,	// (0x00002c23) main_pane_g1

0xb0d7,	// (0x0000cbb9) popup_ai_message_window_ParamLimits

0xb0d7,	// (0x0000cbb9) popup_ai_message_window

0xb177,	// (0x0000cc59) popup_fep_china_uni_window_ParamLimits

0xb177,	// (0x0000cc59) popup_fep_china_uni_window

0x126b,	// (0x00002d4d) popup_fep_japan_candidate_window_ParamLimits

0x126b,	// (0x00002d4d) popup_fep_japan_candidate_window

0x1295,	// (0x00002d77) popup_fep_japan_predictive_window_ParamLimits

0x1295,	// (0x00002d77) popup_fep_japan_predictive_window

0xb1d7,	// (0x0000ccb9) popup_find_window

0xb1f4,	// (0x0000ccd6) popup_grid_graphic_window_ParamLimits

0xb1f4,	// (0x0000ccd6) popup_grid_graphic_window

0x1308,	// (0x00002dea) popup_large_graphic_colour_window

0xb29e,	// (0x0000cd80) popup_menu_window_ParamLimits

0xb29e,	// (0x0000cd80) popup_menu_window

0xb48e,	// (0x0000cf70) popup_note_image_window

0xb44e,	// (0x0000cf30) popup_note_wait_window_ParamLimits

0xb44e,	// (0x0000cf30) popup_note_wait_window

0xb4a6,	// (0x0000cf88) popup_note_window_ParamLimits

0xb4a6,	// (0x0000cf88) popup_note_window

0xb554,	// (0x0000d036) popup_query_code_window_ParamLimits

0xb554,	// (0x0000d036) popup_query_code_window

0x1574,	// (0x00003056) popup_query_data_code_window_ParamLimits

0x1574,	// (0x00003056) popup_query_data_code_window

0xb594,	// (0x0000d076) popup_query_data_window_ParamLimits

0xb594,	// (0x0000d076) popup_query_data_window

0xb628,	// (0x0000d10a) popup_query_sat_info_window_ParamLimits

0xb628,	// (0x0000d10a) popup_query_sat_info_window

0xb6d3,	// (0x0000d1b5) popup_snote_single_graphic_window_ParamLimits

0xb6d3,	// (0x0000d1b5) popup_snote_single_graphic_window

0xb6d3,	// (0x0000d1b5) popup_snote_single_text_window_ParamLimits

0xb6d3,	// (0x0000d1b5) popup_snote_single_text_window

0x160f,	// (0x000030f1) popup_sub_window_general

0x1755,	// (0x00003237) popup_window_general_ParamLimits

0x1755,	// (0x00003237) popup_window_general

0x176e,	// (0x00003250) power_save_pane

0x0f41,	// (0x00002a23) control_pane_g1_ParamLimits

0x0f41,	// (0x00002a23) control_pane_g1

0x0f64,	// (0x00002a46) control_pane_g2_ParamLimits

0x0f64,	// (0x00002a46) control_pane_g2

0x0f86,	// (0x00002a68) control_pane_g3_ParamLimits

0x0f86,	// (0x00002a68) control_pane_g3

0x0007,

0xf75e,	// (0x00011240) control_pane_g_ParamLimits

0xf75e,	// (0x00011240) control_pane_g

0xafd2,	// (0x0000cab4) control_pane_t1_ParamLimits

0xafd2,	// (0x0000cab4) control_pane_t1

0xb022,	// (0x0000cb04) control_pane_t2_ParamLimits

0xb022,	// (0x0000cb04) control_pane_t2

0x0002,

0xf76f,	// (0x00011251) control_pane_t_ParamLimits

0xf76f,	// (0x00011251) control_pane_t

0x0e66,	// (0x00002948) navi_navi_volume_pane_cp1

0x0e6e,	// (0x00002950) status_small_icon_pane

0x0e76,	// (0x00002958) status_small_pane_g1_ParamLimits

0x0e76,	// (0x00002958) status_small_pane_g1

0x0eaa,	// (0x0000298c) status_small_pane_g2_ParamLimits

0x0eaa,	// (0x0000298c) status_small_pane_g2

0x0eb6,	// (0x00002998) status_small_pane_g3_ParamLimits

0x0eb6,	// (0x00002998) status_small_pane_g3

0xaf84,	// (0x0000ca66) status_small_pane_g4_ParamLimits

0xaf84,	// (0x0000ca66) status_small_pane_g4

0xaf92,	// (0x0000ca74) status_small_pane_g5_ParamLimits

0xaf92,	// (0x0000ca74) status_small_pane_g5

0x0edc,	// (0x000029be) status_small_pane_g6_ParamLimits

0x0edc,	// (0x000029be) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001122f) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001122f) status_small_pane_g

0x0f0b,	// (0x000029ed) status_small_pane_t1

0xafa8,	// (0x0000ca8a) status_small_wait_pane_ParamLimits

0xafa8,	// (0x0000ca8a) status_small_wait_pane

0xad70,	// (0x0000c852) aid_levels_signal_ParamLimits

0xad70,	// (0x0000c852) aid_levels_signal

0xad88,	// (0x0000c86a) signal_pane_g1_ParamLimits

0xad88,	// (0x0000c86a) signal_pane_g1

0xada3,	// (0x0000c885) signal_pane_g2_ParamLimits

0xada3,	// (0x0000c885) signal_pane_g2

0x0003,

0xf6de,	// (0x000111c0) signal_pane_g_ParamLimits

0xf6de,	// (0x000111c0) signal_pane_g

0x0464,	// (0x00001f46) context_pane_g1

0xa239,	// (0x0000bd1b) title_pane_g1

0xa27c,	// (0x0000bd5e) title_pane_t1

0xe80c,	// (0x000102ee) title_pane_t2

0xe832,	// (0x00010314) title_pane_t3

0x0002,

0xf532,	// (0x00011014) title_pane_t

0xbbc7,	// (0x0000d6a9) aid_levels_battery_ParamLimits

0xbbc7,	// (0x0000d6a9) aid_levels_battery

0xbbe3,	// (0x0000d6c5) battery_pane_g1_ParamLimits

0xbbe3,	// (0x0000d6c5) battery_pane_g1

0xbc00,	// (0x0000d6e2) battery_pane_g2_ParamLimits

0xbc00,	// (0x0000d6e2) battery_pane_g2

0x0001,

0xf781,	// (0x00011263) battery_pane_g_ParamLimits

0xf781,	// (0x00011263) battery_pane_g

0xc016,	// (0x0000daf8) uni_indicator_pane_g1

0xc02c,	// (0x0000db0e) uni_indicator_pane_g2

0xc042,	// (0x0000db24) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x000113cd) uni_indicator_pane_g

0x0a31,	// (0x00002513) navi_icon_pane_ParamLimits

0x0a31,	// (0x00002513) navi_icon_pane

0x0978,	// (0x0000245a) navi_midp_pane

0x0a4d,	// (0x0000252f) navi_navi_pane

0x0a57,	// (0x00002539) navi_text_pane_ParamLimits

0x0a57,	// (0x00002539) navi_text_pane

0xe629,	// (0x0001010b) status_small_wait_pane_g1

0xec00,	// (0x000106e2) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x000113c8) status_small_wait_pane_g

0xbfb5,	// (0x0000da97) navi_navi_icon_text_pane

0xbfbd,	// (0x0000da9f) navi_navi_pane_g1_ParamLimits

0xbfbd,	// (0x0000da9f) navi_navi_pane_g1

0xbfcf,	// (0x0000dab1) navi_navi_pane_g2_ParamLimits

0xbfcf,	// (0x0000dab1) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x00011396) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x00011396) navi_navi_pane_g

0x2f3d,	// (0x00004a1f) navi_navi_tabs_pane

0xbfe1,	// (0x0000dac3) navi_navi_text_pane

0xbfb5,	// (0x0000da97) navi_navi_volume_pane

0xbfa3,	// (0x0000da85) navi_text_pane_t1

0xbf97,	// (0x0000da79) navi_icon_pane_g1

0x2e34,	// (0x00004916) navi_navi_text_pane_t1

0xbf86,	// (0x0000da68) navi_navi_volume_pane_g1

0xbf8e,	// (0x0000da70) volume_small_pane

0xbee2,	// (0x0000d9c4) navi_navi_icon_text_pane_g1

0xbeea,	// (0x0000d9cc) navi_navi_icon_text_pane_t1

0x0a4d,	// (0x0000252f) navi_tabs_2_long_pane

0x0a4d,	// (0x0000252f) navi_tabs_2_pane

0x0a4d,	// (0x0000252f) navi_tabs_3_long_pane

0x0a4d,	// (0x0000252f) navi_tabs_3_pane

0x0a4d,	// (0x0000252f) navi_tabs_4_pane

0xbec2,	// (0x0000d9a4) tabs_2_active_pane_ParamLimits

0xbec2,	// (0x0000d9a4) tabs_2_active_pane

0xbed2,	// (0x0000d9b4) tabs_2_passive_pane_ParamLimits

0xbed2,	// (0x0000d9b4) tabs_2_passive_pane

0xbe90,	// (0x0000d972) tabs_3_active_pane_ParamLimits

0xbe90,	// (0x0000d972) tabs_3_active_pane

0xbea0,	// (0x0000d982) tabs_3_passive_pane_ParamLimits

0xbea0,	// (0x0000d982) tabs_3_passive_pane

0xbeb1,	// (0x0000d993) tabs_3_passive_pane_cp_ParamLimits

0xbeb1,	// (0x0000d993) tabs_3_passive_pane_cp

0xbe4c,	// (0x0000d92e) tabs_4_active_pane_ParamLimits

0xbe4c,	// (0x0000d92e) tabs_4_active_pane

0xbe5d,	// (0x0000d93f) tabs_4_passive_pane_ParamLimits

0xbe5d,	// (0x0000d93f) tabs_4_passive_pane

0xbe6e,	// (0x0000d950) tabs_4_passive_pane_cp_ParamLimits

0xbe6e,	// (0x0000d950) tabs_4_passive_pane_cp

0xbe7f,	// (0x0000d961) tabs_4_passive_pane_cp2_ParamLimits

0xbe7f,	// (0x0000d961) tabs_4_passive_pane_cp2

0xbe28,	// (0x0000d90a) tabs_2_long_active_pane_ParamLimits

0xbe28,	// (0x0000d90a) tabs_2_long_active_pane

0xbe3a,	// (0x0000d91c) tabs_2_long_passive_pane_ParamLimits

0xbe3a,	// (0x0000d91c) tabs_2_long_passive_pane

0xbdef,	// (0x0000d8d1) tabs_3_long_active_pane_ParamLimits

0xbdef,	// (0x0000d8d1) tabs_3_long_active_pane

0xbe02,	// (0x0000d8e4) tabs_3_long_passive_pane_ParamLimits

0xbe02,	// (0x0000d8e4) tabs_3_long_passive_pane

0xbe15,	// (0x0000d8f7) tabs_3_long_passive_pane_cp_ParamLimits

0xbe15,	// (0x0000d8f7) tabs_3_long_passive_pane_cp

0x2bad,	// (0x0000468f) volume_small_pane_g1

0xbd9e,	// (0x0000d880) volume_small_pane_g2

0xbda7,	// (0x0000d889) volume_small_pane_g3

0xbdb0,	// (0x0000d892) volume_small_pane_g4

0xbdb9,	// (0x0000d89b) volume_small_pane_g5

0xbdc2,	// (0x0000d8a4) volume_small_pane_g6

0xbdcb,	// (0x0000d8ad) volume_small_pane_g7

0xbdd4,	// (0x0000d8b6) volume_small_pane_g8

0xbddd,	// (0x0000d8bf) volume_small_pane_g9

0xbde6,	// (0x0000d8c8) volume_small_pane_g10

0x0009,

0xf880,	// (0x00011362) volume_small_pane_g

0xe844,	// (0x00010326) bg_active_tab_pane_cp2_ParamLimits

0xe844,	// (0x00010326) bg_active_tab_pane_cp2

0xa308,	// (0x0000bdea) tabs_3_active_pane_g1

0xa310,	// (0x0000bdf2) tabs_3_active_pane_t1

0xe844,	// (0x00010326) bg_passive_tab_pane_cp2_ParamLimits

0xe844,	// (0x00010326) bg_passive_tab_pane_cp2

0xa308,	// (0x0000bdea) tabs_3_passive_pane_g1

0xa310,	// (0x0000bdf2) tabs_3_passive_pane_t1

0xe844,	// (0x00010326) bg_active_tab_pane_cp3_ParamLimits

0xe844,	// (0x00010326) bg_active_tab_pane_cp3

0xa322,	// (0x0000be04) tabs_4_active_pane_g1

0xa32a,	// (0x0000be0c) tabs_4_active_pane_t1

0xe844,	// (0x00010326) bg_passive_tab_pane_cp3_ParamLimits

0xe844,	// (0x00010326) bg_passive_tab_pane_cp3

0xa322,	// (0x0000be04) tabs_4_1_passive_pane_g1

0xa32a,	// (0x0000be0c) tabs_4_1_passive_pane_t1

0x10ff,	// (0x00002be1) list_highlight_pane_cp2

0xc0d5,	// (0x0000dbb7) list_set_pane_ParamLimits

0xc0d5,	// (0x0000dbb7) list_set_pane

0xc197,	// (0x0000dc79) main_pane_set_t1_ParamLimits

0xc197,	// (0x0000dc79) main_pane_set_t1

0xc1b7,	// (0x0000dc99) main_pane_set_t2_ParamLimits

0xc1b7,	// (0x0000dc99) main_pane_set_t2

0xc1cb,	// (0x0000dcad) main_pane_set_t3_ParamLimits

0xc1cb,	// (0x0000dcad) main_pane_set_t3

0xc1df,	// (0x0000dcc1) main_pane_set_t4_ParamLimits

0xc1df,	// (0x0000dcc1) main_pane_set_t4

0x0003,

0xf950,	// (0x00011432) main_pane_set_t_ParamLimits

0xf950,	// (0x00011432) main_pane_set_t

0xc1f3,	// (0x0000dcd5) setting_code_pane

0x36a3,	// (0x00005185) setting_slider_graphic_pane

0x36a3,	// (0x00005185) setting_slider_pane

0x36a3,	// (0x00005185) setting_text_pane

0x36a3,	// (0x00005185) setting_volume_pane

0xe852,	// (0x00010334) volume_set_pane

0xe85c,	// (0x0001033e) bg_set_opt_pane_cp

0xe86a,	// (0x0001034c) setting_slider_pane_t1

0xe883,	// (0x00010365) setting_slider_pane_t2

0xe89d,	// (0x0001037f) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001101b) setting_slider_pane_t

0xe8b5,	// (0x00010397) slider_set_pane

0xe7a2,	// (0x00010284) bg_set_opt_pane_cp2

0xe8cb,	// (0x000103ad) setting_slider_graphic_pane_g1

0xe8d4,	// (0x000103b6) setting_slider_graphic_pane_t1

0xe8e4,	// (0x000103c6) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00011022) setting_slider_graphic_pane_t

0xe8f4,	// (0x000103d6) slider_set_pane_cp

0xe7a2,	// (0x00010284) input_focus_pane_cp1

0x353c,	// (0x0000501e) list_set_text_pane

0xe629,	// (0x0001010b) setting_text_pane_g1

0xe7a2,	// (0x00010284) input_focus_pane_cp2

0xe629,	// (0x0001010b) setting_code_pane_g1

0xe8fc,	// (0x000103de) setting_code_pane_t1

0xe90a,	// (0x000103ec) set_text_pane_t1_ParamLimits

0xe90a,	// (0x000103ec) set_text_pane_t1

0xf08f,	// (0x00010b71) set_opt_bg_pane_g1

0xf097,	// (0x00010b79) set_opt_bg_pane_g2

0x3514,	// (0x00004ff6) set_opt_bg_pane_g3

0xf0a7,	// (0x00010b89) set_opt_bg_pane_g4

0xf0af,	// (0x00010b91) set_opt_bg_pane_g5

0xf0b7,	// (0x00010b99) set_opt_bg_pane_g6

0x351e,	// (0x00005000) set_opt_bg_pane_g7

0x3528,	// (0x0000500a) set_opt_bg_pane_g8

0x3532,	// (0x00005014) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x0001141f) set_opt_bg_pane_g

0x34a3,	// (0x00004f85) slider_set_pane_g1

0x34b0,	// (0x00004f92) slider_set_pane_g2

0x0006,

0xf92e,	// (0x00011410) slider_set_pane_g

0x330b,	// (0x00004ded) volume_set_pane_g1

0x3315,	// (0x00004df7) volume_set_pane_g2

0x331f,	// (0x00004e01) volume_set_pane_g3

0x3329,	// (0x00004e0b) volume_set_pane_g4

0x3333,	// (0x00004e15) volume_set_pane_g5

0x333d,	// (0x00004e1f) volume_set_pane_g6

0x3347,	// (0x00004e29) volume_set_pane_g7

0x3351,	// (0x00004e33) volume_set_pane_g8

0x335b,	// (0x00004e3d) volume_set_pane_g9

0x3365,	// (0x00004e47) volume_set_pane_g10

0x0009,

0xf906,	// (0x000113e8) volume_set_pane_g

0xa33c,	// (0x0000be1e) indicator_pane_ParamLimits

0xa33c,	// (0x0000be1e) indicator_pane

0xa368,	// (0x0000be4a) main_idle_pane_g2_ParamLimits

0xa368,	// (0x0000be4a) main_idle_pane_g2

0xa3a0,	// (0x0000be82) main_pane_idle_g1_ParamLimits

0xa3a0,	// (0x0000be82) main_pane_idle_g1

0xe924,	// (0x00010406) popup_clock_digital_analogue_window_ParamLimits

0xe924,	// (0x00010406) popup_clock_digital_analogue_window

0xa3ca,	// (0x0000beac) soft_indicator_pane_ParamLimits

0xa3ca,	// (0x0000beac) soft_indicator_pane

0xa3e6,	// (0x0000bec8) wallpaper_pane_ParamLimits

0xa3e6,	// (0x0000bec8) wallpaper_pane

0xe629,	// (0x0001010b) wallpaper_pane_g1

0xa3f8,	// (0x0000beda) indicator_pane_g1_ParamLimits

0xa3f8,	// (0x0000beda) indicator_pane_g1

0x3aa8,	// (0x0000558a) navi_navi_icon_text_pane_srt_g1

0xe952,	// (0x00010434) soft_indicator_pane_t1

0xe96c,	// (0x0001044e) aid_ps_area_pane

0xa411,	// (0x0000bef3) aid_ps_clock_pane

0xe97d,	// (0x0001045f) aid_ps_indicator_pane

0xe989,	// (0x0001046b) indicator_ps_pane_ParamLimits

0xe989,	// (0x0001046b) indicator_ps_pane

0xe998,	// (0x0001047a) power_save_pane_g1_ParamLimits

0xe998,	// (0x0001047a) power_save_pane_g1

0xe9a4,	// (0x00010486) power_save_pane_g2_ParamLimits

0xe9a4,	// (0x00010486) power_save_pane_g2

0xe633,	// (0x00010115) aid_navinavi_width_pane

0xe96c,	// (0x0001044e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00011027) power_save_pane_g_ParamLimits

0xf545,	// (0x00011027) power_save_pane_g

0xe9b2,	// (0x00010494) power_save_pane_t1_ParamLimits

0xe9b2,	// (0x00010494) power_save_pane_t1

0xa411,	// (0x0000bef3) aid_ps_clock_pane_ParamLimits

0xe97d,	// (0x0001045f) aid_ps_indicator_pane_ParamLimits

0xe9c4,	// (0x000104a6) power_save_pane_t4_ParamLimits

0xe9c4,	// (0x000104a6) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001102c) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001102c) power_save_pane_t

0xe9ee,	// (0x000104d0) power_save_t3_ParamLimits

0xe9ee,	// (0x000104d0) power_save_t3

0xe9d9,	// (0x000104bb) power_save_t2_ParamLimits

0xe9d9,	// (0x000104bb) power_save_t2

0xea03,	// (0x000104e5) indicator_ps_pane_g1

0xa41f,	// (0x0000bf01) ai_gene_pane_ParamLimits

0xa41f,	// (0x0000bf01) ai_gene_pane

0xa436,	// (0x0000bf18) ai_links_pane_ParamLimits

0xa436,	// (0x0000bf18) ai_links_pane

0xa44e,	// (0x0000bf30) indicator_pane_cp1_ParamLimits

0xa44e,	// (0x0000bf30) indicator_pane_cp1

0xa45d,	// (0x0000bf3f) main_pane_idle_g1_cp_ParamLimits

0xa45d,	// (0x0000bf3f) main_pane_idle_g1_cp

0xea0c,	// (0x000104ee) popup_ai_links_title_window

0xa475,	// (0x0000bf57) soft_indicator_pane_cp1_ParamLimits

0xa475,	// (0x0000bf57) soft_indicator_pane_cp1

0x31ec,	// (0x00004cce) ai_links_pane_g1

0x31f5,	// (0x00004cd7) grid_ai_links_pane

0xc00d,	// (0x0000daef) ai_gene_pane_1

0x31da,	// (0x00004cbc) ai_gene_pane_2

0x31e3,	// (0x00004cc5) list_highlight_pane_cp4

0xbfe9,	// (0x0000dacb) cell_ai_link_pane_ParamLimits

0xbfe9,	// (0x0000dacb) cell_ai_link_pane

0x31a9,	// (0x00004c8b) cell_ai_link_pane_g1

0xec00,	// (0x000106e2) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x000113c3) cell_ai_link_pane_g

0xe7a2,	// (0x00010284) grid_highlight_cp2

0xe7a2,	// (0x00010284) bg_popup_sub_pane_cp1

0xea23,	// (0x00010505) popup_ai_links_title_window_t1

0x30f5,	// (0x00004bd7) ai_gene_pane_1_g1_ParamLimits

0x30f5,	// (0x00004bd7) ai_gene_pane_1_g1

0x3101,	// (0x00004be3) ai_gene_pane_1_g2_ParamLimits

0x3101,	// (0x00004be3) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x000113b9) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x000113b9) ai_gene_pane_1_g

0x310e,	// (0x00004bf0) ai_gene_pane_1_t1_ParamLimits

0x310e,	// (0x00004bf0) ai_gene_pane_1_t1

0x3142,	// (0x00004c24) grid_ai_soft_ind_pane

0x30e0,	// (0x00004bc2) ai_gene_pane_2_t1_ParamLimits

0x30e0,	// (0x00004bc2) ai_gene_pane_2_t1

0xa489,	// (0x0000bf6b) main_pane_empty_t1_ParamLimits

0xa489,	// (0x0000bf6b) main_pane_empty_t1

0xa4a1,	// (0x0000bf83) main_pane_empty_t2_ParamLimits

0xa4a1,	// (0x0000bf83) main_pane_empty_t2

0xa4b6,	// (0x0000bf98) main_pane_empty_t3_ParamLimits

0xa4b6,	// (0x0000bf98) main_pane_empty_t3

0xa4c8,	// (0x0000bfaa) main_pane_empty_t4_ParamLimits

0xa4c8,	// (0x0000bfaa) main_pane_empty_t4

0xa4da,	// (0x0000bfbc) main_pane_empty_t5_ParamLimits

0xa4da,	// (0x0000bfbc) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00011031) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00011031) main_pane_empty_t

0xf14d,	// (0x00010c2f) bg_popup_window_pane_ParamLimits

0xf14d,	// (0x00010c2f) bg_popup_window_pane

0x2e42,	// (0x00004924) find_popup_pane_cp2_ParamLimits

0x2e42,	// (0x00004924) find_popup_pane_cp2

0x2e4e,	// (0x00004930) heading_pane_ParamLimits

0x2e4e,	// (0x00004930) heading_pane

0xe7a2,	// (0x00010284) bg_popup_sub_pane

0xbf07,	// (0x0000d9e9) bg_popup_window_pane_g1_ParamLimits

0xbf07,	// (0x0000d9e9) bg_popup_window_pane_g1

0xbf16,	// (0x0000d9f8) bg_popup_window_pane_g2_ParamLimits

0xbf16,	// (0x0000d9f8) bg_popup_window_pane_g2

0xbf22,	// (0x0000da04) bg_popup_window_pane_g3_ParamLimits

0xbf22,	// (0x0000da04) bg_popup_window_pane_g3

0xbf2e,	// (0x0000da10) bg_popup_window_pane_g4_ParamLimits

0xbf2e,	// (0x0000da10) bg_popup_window_pane_g4

0xbf3d,	// (0x0000da1f) bg_popup_window_pane_g5_ParamLimits

0xbf3d,	// (0x0000da1f) bg_popup_window_pane_g5

0xbf4d,	// (0x0000da2f) bg_popup_window_pane_g6_ParamLimits

0xbf4d,	// (0x0000da2f) bg_popup_window_pane_g6

0xbf59,	// (0x0000da3b) bg_popup_window_pane_g7_ParamLimits

0xbf59,	// (0x0000da3b) bg_popup_window_pane_g7

0xbf68,	// (0x0000da4a) bg_popup_window_pane_g8_ParamLimits

0xbf68,	// (0x0000da4a) bg_popup_window_pane_g8

0xbf77,	// (0x0000da59) bg_popup_window_pane_g9_ParamLimits

0xbf77,	// (0x0000da59) bg_popup_window_pane_g9

0x2e17,	// (0x000048f9) bg_popup_window_pane_g10_ParamLimits

0x2e17,	// (0x000048f9) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x00011381) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x00011381) bg_popup_window_pane_g

0x2d40,	// (0x00004822) bg_popup_heading_pane_ParamLimits

0x2d40,	// (0x00004822) bg_popup_heading_pane

0x39eb,	// (0x000054cd) tabs_4_passive_pane_cp_srt_ParamLimits

0x39eb,	// (0x000054cd) tabs_4_passive_pane_cp_srt

0x39fd,	// (0x000054df) tabs_4_passive_pane_srt_ParamLimits

0x2d54,	// (0x00004836) heading_pane_g2

0x39fd,	// (0x000054df) tabs_4_passive_pane_srt

0x1ebf,	// (0x000039a1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1ebf,	// (0x000039a1) bg_passive_tab_pane_cp3_srt

0x2d5c,	// (0x0000483e) heading_pane_t1_ParamLimits

0x2d5c,	// (0x0000483e) heading_pane_t1

0x2d73,	// (0x00004855) heading_pane_t2_ParamLimits

0x2d73,	// (0x00004855) heading_pane_t2

0x0001,

0xf89a,	// (0x0001137c) heading_pane_t_ParamLimits

0xf89a,	// (0x0001137c) heading_pane_t

0x2710,	// (0x000041f2) bg_popup_heading_pane_g1

0x27bf,	// (0x000042a1) bg_popup_heading_pane_g2

0x27c9,	// (0x000042ab) bg_popup_heading_pane_g3

0x27d3,	// (0x000042b5) bg_popup_heading_pane_g4

0x27dd,	// (0x000042bf) bg_popup_heading_pane_g5

0x27e7,	// (0x000042c9) bg_popup_heading_pane_g6

0x27ef,	// (0x000042d1) bg_popup_heading_pane_g7

0x27f7,	// (0x000042d9) bg_popup_heading_pane_g8

0x2801,	// (0x000042e3) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x00011338) bg_popup_heading_pane_g

0x1d24,	// (0x00003806) bg_popup_sub_pane_g1

0x1d2c,	// (0x0000380e) bg_popup_sub_pane_g2

0x1d34,	// (0x00003816) bg_popup_sub_pane_g3

0x1d3c,	// (0x0000381e) bg_popup_sub_pane_g4

0x1d44,	// (0x00003826) bg_popup_sub_pane_g5

0x1d4c,	// (0x0000382e) bg_popup_sub_pane_g6

0x1d54,	// (0x00003836) bg_popup_sub_pane_g7

0x1d5c,	// (0x0000383e) bg_popup_sub_pane_g8

0x1d64,	// (0x00003846) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x00011312) bg_popup_sub_pane_g

0xe844,	// (0x00010326) bg_popup_window_pane_cp5_ParamLimits

0xe844,	// (0x00010326) bg_popup_window_pane_cp5

0xea40,	// (0x00010522) popup_note_window_g1_ParamLimits

0xea40,	// (0x00010522) popup_note_window_g1

0xea4c,	// (0x0001052e) popup_note_window_t1_ParamLimits

0xea4c,	// (0x0001052e) popup_note_window_t1

0xea62,	// (0x00010544) popup_note_window_t2_ParamLimits

0xea62,	// (0x00010544) popup_note_window_t2

0xea78,	// (0x0001055a) popup_note_window_t3_ParamLimits

0xea78,	// (0x0001055a) popup_note_window_t3

0xea8e,	// (0x00010570) popup_note_window_t4_ParamLimits

0xea8e,	// (0x00010570) popup_note_window_t4

0xeab6,	// (0x00010598) popup_note_window_t5_ParamLimits

0xeab6,	// (0x00010598) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001103c) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001103c) popup_note_window_t

0xeb00,	// (0x000105e2) bg_popup_window_pane_cp6_ParamLimits

0xeb00,	// (0x000105e2) bg_popup_window_pane_cp6

0x268c,	// (0x0000416e) popup_note_image_window_g1_ParamLimits

0x268c,	// (0x0000416e) popup_note_image_window_g1

0x2698,	// (0x0000417a) popup_note_image_window_g2_ParamLimits

0x2698,	// (0x0000417a) popup_note_image_window_g2

0x0001,

0xf824,	// (0x00011306) popup_note_image_window_g_ParamLimits

0xf824,	// (0x00011306) popup_note_image_window_g

0x26b1,	// (0x00004193) popup_note_image_window_t1_ParamLimits

0x26b1,	// (0x00004193) popup_note_image_window_t1

0x26ca,	// (0x000041ac) popup_note_image_window_t2_ParamLimits

0x26ca,	// (0x000041ac) popup_note_image_window_t2

0x26e3,	// (0x000041c5) popup_note_image_window_t3_ParamLimits

0x26e3,	// (0x000041c5) popup_note_image_window_t3

0x0002,

0xf829,	// (0x0001130b) popup_note_image_window_t_ParamLimits

0xf829,	// (0x0001130b) popup_note_image_window_t

0x254c,	// (0x0000402e) bg_popup_window_pane_cp7_ParamLimits

0x254c,	// (0x0000402e) bg_popup_window_pane_cp7

0x257c,	// (0x0000405e) popup_note_wait_window_g1_ParamLimits

0x257c,	// (0x0000405e) popup_note_wait_window_g1

0x2588,	// (0x0000406a) popup_note_wait_window_g2_ParamLimits

0x2588,	// (0x0000406a) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x000112f4) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x000112f4) popup_note_wait_window_g

0x25a0,	// (0x00004082) popup_note_wait_window_t1_ParamLimits

0x25a0,	// (0x00004082) popup_note_wait_window_t1

0x25c7,	// (0x000040a9) popup_note_wait_window_t2_ParamLimits

0x25c7,	// (0x000040a9) popup_note_wait_window_t2

0x25e5,	// (0x000040c7) popup_note_wait_window_t3_ParamLimits

0x25e5,	// (0x000040c7) popup_note_wait_window_t3

0x25f8,	// (0x000040da) popup_note_wait_window_t4_ParamLimits

0x25f8,	// (0x000040da) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x000112fb) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x000112fb) popup_note_wait_window_t

0x261d,	// (0x000040ff) wait_bar_pane_ParamLimits

0x261d,	// (0x000040ff) wait_bar_pane

0xe7a2,	// (0x00010284) wait_anim_pane

0xe7a2,	// (0x00010284) wait_border_pane

0xe629,	// (0x0001010b) wait_anim_pane_g1

0xe629,	// (0x0001010b) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x000111bb) wait_anim_pane_g

0x24f0,	// (0x00003fd2) wait_border_pane_g1

0x24fb,	// (0x00003fdd) wait_border_pane_g2

0x2504,	// (0x00003fe6) wait_border_pane_g3

0x0002,

0xf80b,	// (0x000112ed) wait_border_pane_g

0x235a,	// (0x00003e3c) bg_popup_window_pane_cp16_ParamLimits

0x235a,	// (0x00003e3c) bg_popup_window_pane_cp16

0x245a,	// (0x00003f3c) indicator_popup_pane_cp4_ParamLimits

0x245a,	// (0x00003f3c) indicator_popup_pane_cp4

0x246e,	// (0x00003f50) popup_query_data_window_t1_ParamLimits

0x246e,	// (0x00003f50) popup_query_data_window_t1

0x2480,	// (0x00003f62) popup_query_data_window_t2_ParamLimits

0x2480,	// (0x00003f62) popup_query_data_window_t2

0x2499,	// (0x00003f7b) popup_query_data_window_t3_ParamLimits

0x2499,	// (0x00003f7b) popup_query_data_window_t3

0x0002,

0xf804,	// (0x000112e6) popup_query_data_window_t_ParamLimits

0xf804,	// (0x000112e6) popup_query_data_window_t

0x24b3,	// (0x00003f95) query_popup_data_pane_ParamLimits

0x24b3,	// (0x00003f95) query_popup_data_pane

0x24c7,	// (0x00003fa9) query_popup_data_pane_cp1_ParamLimits

0x24c7,	// (0x00003fa9) query_popup_data_pane_cp1

0x235a,	// (0x00003e3c) bg_popup_window_pane_cp10_ParamLimits

0x235a,	// (0x00003e3c) bg_popup_window_pane_cp10

0x238c,	// (0x00003e6e) indicator_popup_pane_ParamLimits

0x238c,	// (0x00003e6e) indicator_popup_pane

0x23ae,	// (0x00003e90) popup_query_code_window_t1_ParamLimits

0x23ae,	// (0x00003e90) popup_query_code_window_t1

0x23c8,	// (0x00003eaa) popup_query_code_window_t2_ParamLimits

0x23c8,	// (0x00003eaa) popup_query_code_window_t2

0x2411,	// (0x00003ef3) popup_query_code_window_t3_ParamLimits

0x2411,	// (0x00003ef3) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x000112df) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x000112df) popup_query_code_window_t

0x2440,	// (0x00003f22) query_popup_pane_ParamLimits

0x2440,	// (0x00003f22) query_popup_pane

0xeb00,	// (0x000105e2) bg_popup_window_pane_cp15_ParamLimits

0xeb00,	// (0x000105e2) bg_popup_window_pane_cp15

0xeb20,	// (0x00010602) indicator_popup_pane_cp1_ParamLimits

0xeb20,	// (0x00010602) indicator_popup_pane_cp1

0xeb33,	// (0x00010615) indicator_popup_pane_cp2_ParamLimits

0xeb33,	// (0x00010615) indicator_popup_pane_cp2

0xeb4e,	// (0x00010630) popup_query_data_code_window_g1_ParamLimits

0xeb4e,	// (0x00010630) popup_query_data_code_window_g1

0xeb61,	// (0x00010643) popup_query_data_code_window_t1_ParamLimits

0xeb61,	// (0x00010643) popup_query_data_code_window_t1

0xeb73,	// (0x00010655) popup_query_data_code_window_t2_ParamLimits

0xeb73,	// (0x00010655) popup_query_data_code_window_t2

0xeb85,	// (0x00010667) popup_query_data_code_window_t3_ParamLimits

0xeb85,	// (0x00010667) popup_query_data_code_window_t3

0xeb9b,	// (0x0001067d) popup_query_data_code_window_t4_ParamLimits

0xeb9b,	// (0x0001067d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00011047) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00011047) popup_query_data_code_window_t

0x09ed,	// (0x000024cf) list_single_midp_graphic_pane_g3

0xebb5,	// (0x00010697) query_popup_data_pane_cp2_ParamLimits

0xebc8,	// (0x000106aa) query_popup_pane_cp2_ParamLimits

0xebc8,	// (0x000106aa) query_popup_pane_cp2

0xe7a2,	// (0x00010284) bg_popup_window_pane_cp11

0x233e,	// (0x00003e20) heading_pane_cp5

0x2346,	// (0x00003e28) listscroll_popup_info_pane

0xe7a2,	// (0x00010284) input_focus_pane_cp3

0xebe3,	// (0x000106c5) query_popup_pane_t1

0xebf1,	// (0x000106d3) list_popup_info_pane_ParamLimits

0xebf1,	// (0x000106d3) list_popup_info_pane

0xec00,	// (0x000106e2) listscroll_popup_info_pane_g1

0xec08,	// (0x000106ea) scroll_pane_cp7

0xec12,	// (0x000106f4) popup_info_list_pane_t1_ParamLimits

0xec12,	// (0x000106f4) popup_info_list_pane_t1

0xec2c,	// (0x0001070e) popup_info_list_pane_t2_ParamLimits

0xec2c,	// (0x0001070e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00011050) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00011050) popup_info_list_pane_t

0xe7a2,	// (0x00010284) bg_popup_window_pane_cp12

0x3adf,	// (0x000055c1) find_popup_pane

0xe85c,	// (0x0001033e) bg_popup_window_pane_cp3

0xec46,	// (0x00010728) heading_pane_cp3

0xec55,	// (0x00010737) listscroll_popup_graphic_pane

0xe7a2,	// (0x00010284) bg_popup_window_pane_cp4

0xa53c,	// (0x0000c01e) heading_pane_cp4

0xec65,	// (0x00010747) listscroll_popup_colour_pane

0xa546,	// (0x0000c028) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa546,	// (0x0000c028) cell_large_graphic_colour_none_popup_pane

0xa55a,	// (0x0000c03c) grid_large_graphic_colour_popup_pane_ParamLimits

0xa55a,	// (0x0000c03c) grid_large_graphic_colour_popup_pane

0xa582,	// (0x0000c064) listscroll_popup_colour_pane_g1_ParamLimits

0xa582,	// (0x0000c064) listscroll_popup_colour_pane_g1

0xa599,	// (0x0000c07b) listscroll_popup_colour_pane_g2_ParamLimits

0xa599,	// (0x0000c07b) listscroll_popup_colour_pane_g2

0xa5b0,	// (0x0000c092) listscroll_popup_colour_pane_g3_ParamLimits

0xa5b0,	// (0x0000c092) listscroll_popup_colour_pane_g3

0xa5c0,	// (0x0000c0a2) listscroll_popup_colour_pane_g4_ParamLimits

0xa5c0,	// (0x0000c0a2) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00011055) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00011055) listscroll_popup_colour_pane_g

0xec6d,	// (0x0001074f) scroll_pane_cp6_ParamLimits

0xec6d,	// (0x0001074f) scroll_pane_cp6

0xa5d0,	// (0x0000c0b2) cell_large_graphic_colour_popup_pane_ParamLimits

0xa5d0,	// (0x0000c0b2) cell_large_graphic_colour_popup_pane

0xec7f,	// (0x00010761) cell_large_graphic_colour_none_popup_pane_t1

0xe7a2,	// (0x00010284) grid_highlight_pane_cp5

0xec8e,	// (0x00010770) cell_large_graphic_colour_popup_pane_g1

0xec96,	// (0x00010778) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001105e) cell_large_graphic_colour_popup_pane_g

0xec9e,	// (0x00010780) cell_large_graphic_colour_popup_pane_g2_copy1

0xeca7,	// (0x00010789) grid_highlight_pane_cp4

0xecaf,	// (0x00010791) bg_popup_window_pane_cp8_ParamLimits

0xecaf,	// (0x00010791) bg_popup_window_pane_cp8

0xecca,	// (0x000107ac) popup_snote_single_text_window_g1_ParamLimits

0xecca,	// (0x000107ac) popup_snote_single_text_window_g1

0xecdc,	// (0x000107be) popup_snote_single_text_window_t1_ParamLimits

0xecdc,	// (0x000107be) popup_snote_single_text_window_t1

0xecef,	// (0x000107d1) popup_snote_single_text_window_t2_ParamLimits

0xecef,	// (0x000107d1) popup_snote_single_text_window_t2

0xed02,	// (0x000107e4) popup_snote_single_text_window_t3_ParamLimits

0xed02,	// (0x000107e4) popup_snote_single_text_window_t3

0xed3b,	// (0x0001081d) popup_snote_single_text_window_t4_ParamLimits

0xed3b,	// (0x0001081d) popup_snote_single_text_window_t4

0xed6f,	// (0x00010851) popup_snote_single_text_window_t5_ParamLimits

0xed6f,	// (0x00010851) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00011063) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00011063) popup_snote_single_text_window_t

0xed9e,	// (0x00010880) bg_popup_window_pane_cp9_ParamLimits

0xed9e,	// (0x00010880) bg_popup_window_pane_cp9

0xecca,	// (0x000107ac) popup_snote_single_graphic_window_g1_ParamLimits

0xecca,	// (0x000107ac) popup_snote_single_graphic_window_g1

0xedac,	// (0x0001088e) popup_snote_single_graphic_window_g2_ParamLimits

0xedac,	// (0x0001088e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001106e) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001106e) popup_snote_single_graphic_window_g

0xedb8,	// (0x0001089a) popup_snote_single_graphic_window_t1_ParamLimits

0xedb8,	// (0x0001089a) popup_snote_single_graphic_window_t1

0xedcb,	// (0x000108ad) popup_snote_single_graphic_window_t2_ParamLimits

0xedcb,	// (0x000108ad) popup_snote_single_graphic_window_t2

0xedde,	// (0x000108c0) popup_snote_single_graphic_window_t3_ParamLimits

0xedde,	// (0x000108c0) popup_snote_single_graphic_window_t3

0xee17,	// (0x000108f9) popup_snote_single_graphic_window_t4_ParamLimits

0xee17,	// (0x000108f9) popup_snote_single_graphic_window_t4

0xee4b,	// (0x0001092d) popup_snote_single_graphic_window_t5_ParamLimits

0xee4b,	// (0x0001092d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00011073) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00011073) popup_snote_single_graphic_window_t

0x3965,	// (0x00005447) grid_graphic_popup_pane_ParamLimits

0x3965,	// (0x00005447) grid_graphic_popup_pane

0x3993,	// (0x00005475) listscroll_popup_graphic_pane_g1_ParamLimits

0x3993,	// (0x00005475) listscroll_popup_graphic_pane_g1

0xc344,	// (0x0000de26) listscroll_popup_graphic_pane_g2_ParamLimits

0xc344,	// (0x0000de26) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x0001145c) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x0001145c) listscroll_popup_graphic_pane_g

0x39bb,	// (0x0000549d) scroll_pane_cp5

0xc2fc,	// (0x0000ddde) cell_graphic_popup_pane_ParamLimits

0xc2fc,	// (0x0000ddde) cell_graphic_popup_pane

0x38de,	// (0x000053c0) cell_graphic_popup_pane_g1

0x38e6,	// (0x000053c8) cell_graphic_popup_pane_g2

0xec9e,	// (0x00010780) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x00011455) cell_graphic_popup_pane_g

0x38ef,	// (0x000053d1) cell_graphic_popup_pane_t2

0xeca7,	// (0x00010789) grid_highlight_pane_cp3

0xee8c,	// (0x0001096e) list_gen_pane_ParamLimits

0xee8c,	// (0x0001096e) list_gen_pane

0xeeb4,	// (0x00010996) scroll_pane

0xc2b3,	// (0x0000dd95) bg_list_pane_g1_ParamLimits

0xc2b3,	// (0x0000dd95) bg_list_pane_g1

0x3853,	// (0x00005335) bg_list_pane_g2_ParamLimits

0x3853,	// (0x00005335) bg_list_pane_g2

0x3868,	// (0x0000534a) bg_list_pane_g3_ParamLimits

0x3868,	// (0x0000534a) bg_list_pane_g3

0x387c,	// (0x0000535e) bg_list_pane_g4_ParamLimits

0x387c,	// (0x0000535e) bg_list_pane_g4

0xc2d0,	// (0x0000ddb2) bg_list_pane_g5_ParamLimits

0xc2d0,	// (0x0000ddb2) bg_list_pane_g5

0x0004,

0xf968,	// (0x0001144a) bg_list_pane_g_ParamLimits

0xf968,	// (0x0001144a) bg_list_pane_g

0xc24d,	// (0x0000dd2f) list_double2_graphic_large_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double2_graphic_large_graphic_pane

0xc24d,	// (0x0000dd2f) list_double2_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double2_graphic_pane

0xc24d,	// (0x0000dd2f) list_double2_large_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double2_large_graphic_pane

0xc24d,	// (0x0000dd2f) list_double2_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double2_pane

0xc24d,	// (0x0000dd2f) list_double_graphic_heading_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double_graphic_heading_pane

0xc24d,	// (0x0000dd2f) list_double_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double_graphic_pane

0xc24d,	// (0x0000dd2f) list_double_heading_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double_heading_pane

0xc24d,	// (0x0000dd2f) list_double_large_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double_large_graphic_pane

0xc24d,	// (0x0000dd2f) list_double_number_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double_number_pane

0xc24d,	// (0x0000dd2f) list_double_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double_pane

0xc24d,	// (0x0000dd2f) list_double_time_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_double_time_pane

0xc24d,	// (0x0000dd2f) list_setting_number_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_setting_number_pane

0xc24d,	// (0x0000dd2f) list_setting_pane_ParamLimits

0xc24d,	// (0x0000dd2f) list_setting_pane

0xc261,	// (0x0000dd43) list_single_2graphic_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_2graphic_pane

0xc261,	// (0x0000dd43) list_single_graphic_heading_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_graphic_heading_pane

0xc261,	// (0x0000dd43) list_single_graphic_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_graphic_pane

0xc261,	// (0x0000dd43) list_single_heading_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_heading_pane

0xc261,	// (0x0000dd43) list_single_large_graphic_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_large_graphic_pane

0xc261,	// (0x0000dd43) list_single_number_heading_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_number_heading_pane

0xc261,	// (0x0000dd43) list_single_number_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_number_pane

0xc261,	// (0x0000dd43) list_single_pane_ParamLimits

0xc261,	// (0x0000dd43) list_single_pane

0xe7a2,	// (0x00010284) list_highlight_pane_cp1

0x1bbc,	// (0x0000369e) list_single_pane_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_single_pane_g1

0x1bc8,	// (0x000036aa) list_single_pane_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00011085) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00011085) list_single_pane_g

0x411d,	// (0x00005bff) list_single_pane_t1_ParamLimits

0x411d,	// (0x00005bff) list_single_pane_t1

0x1bbc,	// (0x0000369e) list_single_number_pane_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_single_number_pane_g1

0x1bc8,	// (0x000036aa) list_single_number_pane_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00011085) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00011085) list_single_number_pane_g

0x1cb2,	// (0x00003794) list_single_number_pane_t1_ParamLimits

0x1cb2,	// (0x00003794) list_single_number_pane_t1

0x4216,	// (0x00005cf8) list_single_number_pane_t2_ParamLimits

0x4216,	// (0x00005cf8) list_single_number_pane_t2

0x0001,

0xf929,	// (0x0001140b) list_single_number_pane_t_ParamLimits

0xf929,	// (0x0001140b) list_single_number_pane_t

0xa5fb,	// (0x0000c0dd) list_single_graphic_pane_g1_ParamLimits

0xa5fb,	// (0x0000c0dd) list_single_graphic_pane_g1

0x1bbc,	// (0x0000369e) list_single_graphic_pane_g2_ParamLimits

0x1bbc,	// (0x0000369e) list_single_graphic_pane_g2

0x1bc8,	// (0x000036aa) list_single_graphic_pane_g3_ParamLimits

0x1bc8,	// (0x000036aa) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001107e) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001107e) list_single_graphic_pane_g

0xa607,	// (0x0000c0e9) list_single_graphic_pane_t1_ParamLimits

0xa607,	// (0x0000c0e9) list_single_graphic_pane_t1

0x1bbc,	// (0x0000369e) list_single_heading_pane_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_single_heading_pane_g1

0x1bc8,	// (0x000036aa) list_single_heading_pane_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00011085) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00011085) list_single_heading_pane_g

0x40cd,	// (0x00005baf) list_single_heading_pane_t1_ParamLimits

0x40cd,	// (0x00005baf) list_single_heading_pane_t1

0xa61d,	// (0x0000c0ff) list_single_heading_pane_t2_ParamLimits

0xa61d,	// (0x0000c0ff) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001108a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001108a) list_single_heading_pane_t

0x1bbc,	// (0x0000369e) list_single_number_heading_pane_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_single_number_heading_pane_g1

0x1bc8,	// (0x000036aa) list_single_number_heading_pane_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00011085) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00011085) list_single_number_heading_pane_g

0x40cd,	// (0x00005baf) list_single_number_heading_pane_t1_ParamLimits

0x40cd,	// (0x00005baf) list_single_number_heading_pane_t1

0xa62f,	// (0x0000c111) list_single_number_heading_pane_t2_ParamLimits

0xa62f,	// (0x0000c111) list_single_number_heading_pane_t2

0x40f9,	// (0x00005bdb) list_single_number_heading_pane_t3_ParamLimits

0x40f9,	// (0x00005bdb) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001108f) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001108f) list_single_number_heading_pane_t

0x1bb0,	// (0x00003692) list_single_graphic_heading_pane_g1_ParamLimits

0x1bb0,	// (0x00003692) list_single_graphic_heading_pane_g1

0xa641,	// (0x0000c123) list_single_graphic_heading_pane_g4_ParamLimits

0xa641,	// (0x0000c123) list_single_graphic_heading_pane_g4

0x1bc8,	// (0x000036aa) list_single_graphic_heading_pane_g5_ParamLimits

0x1bc8,	// (0x000036aa) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00011096) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00011096) list_single_graphic_heading_pane_g

0x40cd,	// (0x00005baf) list_single_graphic_heading_pane_t1_ParamLimits

0x40cd,	// (0x00005baf) list_single_graphic_heading_pane_t1

0xa652,	// (0x0000c134) list_single_graphic_heading_pane_t2_ParamLimits

0xa652,	// (0x0000c134) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001109d) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001109d) list_single_graphic_heading_pane_t

0x4133,	// (0x00005c15) list_single_large_graphic_pane_g1_ParamLimits

0x4133,	// (0x00005c15) list_single_large_graphic_pane_g1

0x1bbc,	// (0x0000369e) list_single_large_graphic_pane_g2_ParamLimits

0x1bbc,	// (0x0000369e) list_single_large_graphic_pane_g2

0x1bc8,	// (0x000036aa) list_single_large_graphic_pane_g3_ParamLimits

0x1bc8,	// (0x000036aa) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000110a2) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000110a2) list_single_large_graphic_pane_g

0x24fb,	// (0x00003fdd) wait_border_pane_g2_copy1

0xa664,	// (0x0000c146) list_single_large_graphic_pane_g4_cp2

0x413f,	// (0x00005c21) list_single_large_graphic_pane_t1_ParamLimits

0x413f,	// (0x00005c21) list_single_large_graphic_pane_t1

0xa66c,	// (0x0000c14e) list_double_pane_g1_ParamLimits

0xa66c,	// (0x0000c14e) list_double_pane_g1

0xa678,	// (0x0000c15a) list_double_pane_g2_ParamLimits

0xa678,	// (0x0000c15a) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000110a9) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000110a9) list_double_pane_g

0xa684,	// (0x0000c166) list_double_pane_t1_ParamLimits

0xa684,	// (0x0000c166) list_double_pane_t1

0xa69a,	// (0x0000c17c) list_double_pane_t2_ParamLimits

0xa69a,	// (0x0000c17c) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000110ae) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000110ae) list_double_pane_t

0xa6ac,	// (0x0000c18e) list_double2_pane_g1_ParamLimits

0xa6ac,	// (0x0000c18e) list_double2_pane_g1

0xa6bd,	// (0x0000c19f) list_double2_pane_g2_ParamLimits

0xa6bd,	// (0x0000c19f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000110b3) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000110b3) list_double2_pane_g

0xa6c9,	// (0x0000c1ab) list_double2_pane_t1_ParamLimits

0xa6c9,	// (0x0000c1ab) list_double2_pane_t1

0xa6df,	// (0x0000c1c1) list_double2_pane_t2_ParamLimits

0xa6df,	// (0x0000c1c1) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000110b8) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000110b8) list_double2_pane_t

0xa66c,	// (0x0000c14e) list_double_number_pane_g1_ParamLimits

0xa66c,	// (0x0000c14e) list_double_number_pane_g1

0xa678,	// (0x0000c15a) list_double_number_pane_g2_ParamLimits

0xa678,	// (0x0000c15a) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000110a9) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000110a9) list_double_number_pane_g

0xa6f1,	// (0x0000c1d3) list_double_number_pane_t1_ParamLimits

0xa6f1,	// (0x0000c1d3) list_double_number_pane_t1

0xa703,	// (0x0000c1e5) list_double_number_pane_t2_ParamLimits

0xa703,	// (0x0000c1e5) list_double_number_pane_t2

0xa719,	// (0x0000c1fb) list_double_number_pane_t3_ParamLimits

0xa719,	// (0x0000c1fb) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000110bd) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000110bd) list_double_number_pane_t

0xa72b,	// (0x0000c20d) list_double_graphic_pane_g1_ParamLimits

0xa72b,	// (0x0000c20d) list_double_graphic_pane_g1

0xa737,	// (0x0000c219) list_double_graphic_pane_g2_ParamLimits

0xa737,	// (0x0000c219) list_double_graphic_pane_g2

0x3e6e,	// (0x00005950) list_double_graphic_pane_g3_ParamLimits

0x3e6e,	// (0x00005950) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000110c4) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000110c4) list_double_graphic_pane_g

0xa752,	// (0x0000c234) list_double_graphic_pane_t1_ParamLimits

0xa752,	// (0x0000c234) list_double_graphic_pane_t1

0xa768,	// (0x0000c24a) list_double_graphic_pane_t2_ParamLimits

0xa768,	// (0x0000c24a) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000110cd) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000110cd) list_double_graphic_pane_t

0xeee8,	// (0x000109ca) list_double2_graphic_pane_g1_ParamLimits

0xeee8,	// (0x000109ca) list_double2_graphic_pane_g1

0xa77a,	// (0x0000c25c) list_double2_graphic_pane_g2_ParamLimits

0xa77a,	// (0x0000c25c) list_double2_graphic_pane_g2

0xa6bd,	// (0x0000c19f) list_double2_graphic_pane_g3_ParamLimits

0xa6bd,	// (0x0000c19f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000110d2) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000110d2) list_double2_graphic_pane_g

0xa786,	// (0x0000c268) list_double2_graphic_pane_t1_ParamLimits

0xa786,	// (0x0000c268) list_double2_graphic_pane_t1

0xa79c,	// (0x0000c27e) list_double2_graphic_pane_t2_ParamLimits

0xa79c,	// (0x0000c27e) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000110d9) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000110d9) list_double2_graphic_pane_t

0xa7ae,	// (0x0000c290) list_double_large_graphic_pane_g1_ParamLimits

0xa7ae,	// (0x0000c290) list_double_large_graphic_pane_g1

0xa7cd,	// (0x0000c2af) list_double_large_graphic_pane_g2_ParamLimits

0xa7cd,	// (0x0000c2af) list_double_large_graphic_pane_g2

0xa678,	// (0x0000c15a) list_double_large_graphic_pane_g3_ParamLimits

0xa678,	// (0x0000c15a) list_double_large_graphic_pane_g3

0xa7de,	// (0x0000c2c0) list_double_large_graphic_pane_g4_ParamLimits

0xa7de,	// (0x0000c2c0) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000110de) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000110de) list_double_large_graphic_pane_g

0xa7f1,	// (0x0000c2d3) list_double_large_graphic_pane_t1_ParamLimits

0xa7f1,	// (0x0000c2d3) list_double_large_graphic_pane_t1

0xa80a,	// (0x0000c2ec) list_double_large_graphic_pane_t2_ParamLimits

0xa80a,	// (0x0000c2ec) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000110e9) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000110e9) list_double_large_graphic_pane_t

0xa81c,	// (0x0000c2fe) list_double2_large_graphic_pane_g1_ParamLimits

0xa81c,	// (0x0000c2fe) list_double2_large_graphic_pane_g1

0xa6ac,	// (0x0000c18e) list_double2_large_graphic_pane_g2_ParamLimits

0xa6ac,	// (0x0000c18e) list_double2_large_graphic_pane_g2

0xa6bd,	// (0x0000c19f) list_double2_large_graphic_pane_g3_ParamLimits

0xa6bd,	// (0x0000c19f) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000110ee) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000110ee) list_double2_large_graphic_pane_g

0xa828,	// (0x0000c30a) list_double2_large_graphic_pane_t1_ParamLimits

0xa828,	// (0x0000c30a) list_double2_large_graphic_pane_t1

0xa83e,	// (0x0000c320) list_double2_large_graphic_pane_t2_ParamLimits

0xa83e,	// (0x0000c320) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x000110f5) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x000110f5) list_double2_large_graphic_pane_t

0xa850,	// (0x0000c332) list_double_heading_pane_g1_ParamLimits

0xa850,	// (0x0000c332) list_double_heading_pane_g1

0xa861,	// (0x0000c343) list_double_heading_pane_g2_ParamLimits

0xa861,	// (0x0000c343) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x000110fa) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x000110fa) list_double_heading_pane_g

0xa86d,	// (0x0000c34f) list_double_heading_pane_t1_ParamLimits

0xa86d,	// (0x0000c34f) list_double_heading_pane_t1

0xa883,	// (0x0000c365) list_double_heading_pane_t2_ParamLimits

0xa883,	// (0x0000c365) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x000110ff) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x000110ff) list_double_heading_pane_t

0xa895,	// (0x0000c377) list_double_graphic_heading_pane_g1_ParamLimits

0xa895,	// (0x0000c377) list_double_graphic_heading_pane_g1

0xa850,	// (0x0000c332) list_double_graphic_heading_pane_g2_ParamLimits

0xa850,	// (0x0000c332) list_double_graphic_heading_pane_g2

0xa861,	// (0x0000c343) list_double_graphic_heading_pane_g3_ParamLimits

0xa861,	// (0x0000c343) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00011104) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00011104) list_double_graphic_heading_pane_g

0xa8a1,	// (0x0000c383) list_double_graphic_heading_pane_t1_ParamLimits

0xa8a1,	// (0x0000c383) list_double_graphic_heading_pane_t1

0xa8b7,	// (0x0000c399) list_double_graphic_heading_pane_t2_ParamLimits

0xa8b7,	// (0x0000c399) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001110b) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001110b) list_double_graphic_heading_pane_t

0xa7cd,	// (0x0000c2af) list_double_time_pane_g1_ParamLimits

0xa7cd,	// (0x0000c2af) list_double_time_pane_g1

0xa678,	// (0x0000c15a) list_double_time_pane_g2_ParamLimits

0xa678,	// (0x0000c15a) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00011110) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00011110) list_double_time_pane_g

0xa8c9,	// (0x0000c3ab) list_double_time_pane_t1_ParamLimits

0xa8c9,	// (0x0000c3ab) list_double_time_pane_t1

0xa8df,	// (0x0000c3c1) list_double_time_pane_t2_ParamLimits

0xa8df,	// (0x0000c3c1) list_double_time_pane_t2

0xa8f1,	// (0x0000c3d3) list_double_time_pane_t3_ParamLimits

0xa8f1,	// (0x0000c3d3) list_double_time_pane_t3

0xa903,	// (0x0000c3e5) list_double_time_pane_t4_ParamLimits

0xa903,	// (0x0000c3e5) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00011115) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00011115) list_double_time_pane_t

0xa77a,	// (0x0000c25c) list_setting_pane_g1_ParamLimits

0xa77a,	// (0x0000c25c) list_setting_pane_g1

0xa6bd,	// (0x0000c19f) list_setting_pane_g2_ParamLimits

0xa6bd,	// (0x0000c19f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001111e) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001111e) list_setting_pane_g

0xa915,	// (0x0000c3f7) list_setting_pane_t1_ParamLimits

0xa915,	// (0x0000c3f7) list_setting_pane_t1

0xa92c,	// (0x0000c40e) list_setting_pane_t2_ParamLimits

0xa92c,	// (0x0000c40e) list_setting_pane_t2

0x0002,

0xf641,	// (0x00011123) list_setting_pane_t_ParamLimits

0xf641,	// (0x00011123) list_setting_pane_t

0xa96b,	// (0x0000c44d) set_value_pane_cp_ParamLimits

0xa96b,	// (0x0000c44d) set_value_pane_cp

0xa77a,	// (0x0000c25c) list_setting_number_pane_g1_ParamLimits

0xa77a,	// (0x0000c25c) list_setting_number_pane_g1

0xa6bd,	// (0x0000c19f) list_setting_number_pane_g2_ParamLimits

0xa6bd,	// (0x0000c19f) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001111e) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001111e) list_setting_number_pane_g

0xa979,	// (0x0000c45b) list_setting_number_pane_t1_ParamLimits

0xa979,	// (0x0000c45b) list_setting_number_pane_t1

0xa98d,	// (0x0000c46f) list_setting_number_pane_t2_ParamLimits

0xa98d,	// (0x0000c46f) list_setting_number_pane_t2

0xa9a4,	// (0x0000c486) list_setting_number_pane_t3_ParamLimits

0xa9a4,	// (0x0000c486) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001112a) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001112a) list_setting_number_pane_t

0xa96b,	// (0x0000c44d) set_value_pane_ParamLimits

0xa96b,	// (0x0000c44d) set_value_pane

0xef15,	// (0x000109f7) bg_set_opt_pane_ParamLimits

0xef15,	// (0x000109f7) bg_set_opt_pane

0xef36,	// (0x00010a18) set_value_pane_t1

0xef44,	// (0x00010a26) slider_set_pane_cp3

0xef4d,	// (0x00010a2f) volume_small_pane_cp

0xef56,	// (0x00010a38) list_form_gen_pane

0xef5f,	// (0x00010a41) scroll_pane_cp8

0xa9e7,	// (0x0000c4c9) form_field_data_pane_ParamLimits

0xa9e7,	// (0x0000c4c9) form_field_data_pane

0xaa02,	// (0x0000c4e4) form_field_data_wide_pane_ParamLimits

0xaa02,	// (0x0000c4e4) form_field_data_wide_pane

0xef80,	// (0x00010a62) form_field_popup_pane_ParamLimits

0xef80,	// (0x00010a62) form_field_popup_pane

0xaa26,	// (0x0000c508) form_field_popup_wide_pane_ParamLimits

0xaa26,	// (0x0000c508) form_field_popup_wide_pane

0xefa2,	// (0x00010a84) form_field_slider_pane_ParamLimits

0xefa2,	// (0x00010a84) form_field_slider_pane

0xefb5,	// (0x00010a97) form_field_slider_wide_pane_ParamLimits

0xefb5,	// (0x00010a97) form_field_slider_wide_pane

0xefc8,	// (0x00010aaa) data_form_pane

0xaa51,	// (0x0000c533) form_field_data_pane_t1

0xefd4,	// (0x00010ab6) input_focus_pane

0xefe2,	// (0x00010ac4) data_form_wide_pane

0xf01a,	// (0x00010afc) form_field_data_wide_pane_t1

0xecbc,	// (0x0001079e) input_focus_pane_cp6

0xaa6b,	// (0x0000c54d) form_field_popup_pane_t1

0xefd4,	// (0x00010ab6) input_focus_pane_cp7

0xf039,	// (0x00010b1b) list_form_pane

0xf04d,	// (0x00010b2f) form_field_popup_wide_pane_t1

0xefd4,	// (0x00010ab6) input_focus_pane_cp8

0xf05f,	// (0x00010b41) list_form_wide_pane

0xaa8d,	// (0x0000c56f) form_field_slider_pane_t1_ParamLimits

0xaa8d,	// (0x0000c56f) form_field_slider_pane_t1

0xaaa5,	// (0x0000c587) form_field_slider_pane_t2_ParamLimits

0xaaa5,	// (0x0000c587) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001113a) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001113a) form_field_slider_pane_t

0xe844,	// (0x00010326) input_focus_pane_cp9_ParamLimits

0xe844,	// (0x00010326) input_focus_pane_cp9

0xaaba,	// (0x0000c59c) slider_cont_pane_ParamLimits

0xaaba,	// (0x0000c59c) slider_cont_pane

0xf06b,	// (0x00010b4d) form_field_slider_wide_pane_t1_ParamLimits

0xf06b,	// (0x00010b4d) form_field_slider_wide_pane_t1

0xf07d,	// (0x00010b5f) form_field_slider_wide_pane_t2_ParamLimits

0xf07d,	// (0x00010b5f) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001113f) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001113f) form_field_slider_wide_pane_t

0xe844,	// (0x00010326) input_focus_pane_cp10_ParamLimits

0xe844,	// (0x00010326) input_focus_pane_cp10

0xaace,	// (0x0000c5b0) slider_cont_pane_cp1_ParamLimits

0xaace,	// (0x0000c5b0) slider_cont_pane_cp1

0xaae2,	// (0x0000c5c4) slider_form_pane_cp

0xf08f,	// (0x00010b71) input_focus_pane_g1

0xf097,	// (0x00010b79) input_focus_pane_g2

0xf09f,	// (0x00010b81) input_focus_pane_g3

0xf0a7,	// (0x00010b89) input_focus_pane_g4

0xf0af,	// (0x00010b91) input_focus_pane_g5

0xf0b7,	// (0x00010b99) input_focus_pane_g6

0xf0bf,	// (0x00010ba1) input_focus_pane_g7

0xf0c7,	// (0x00010ba9) input_focus_pane_g8

0xf0cf,	// (0x00010bb1) input_focus_pane_g9

0xe629,	// (0x0001010b) input_focus_pane_g10

0x0009,

0xf662,	// (0x00011144) input_focus_pane_g

0x2504,	// (0x00003fe6) wait_border_pane_g3_copy1

0xaaea,	// (0x0000c5cc) data_form_pane_t1

0xe629,	// (0x0001010b) wait_anim_pane_g1_copy1

0xc222,	// (0x0000dd04) data_form_wide_pane_t1

0xf0d7,	// (0x00010bb9) list_form_graphic_pane_cp_ParamLimits

0xf0d7,	// (0x00010bb9) list_form_graphic_pane_cp

0x36cb,	// (0x000051ad) slider_form_pane_g1

0x36d4,	// (0x000051b6) slider_form_pane_g2

0x0006,

0xf959,	// (0x0001143b) slider_form_pane_g

0xf0d7,	// (0x00010bb9) list_form_graphic_pane_ParamLimits

0xf0d7,	// (0x00010bb9) list_form_graphic_pane

0xf0e9,	// (0x00010bcb) list_form_graphic_pane_g1

0xf0f1,	// (0x00010bd3) list_form_graphic_pane_t1_ParamLimits

0xf0f1,	// (0x00010bd3) list_form_graphic_pane_t1

0xe85c,	// (0x0001033e) list_highlight_pane_cp5_ParamLimits

0xe85c,	// (0x0001033e) list_highlight_pane_cp5

0xab06,	// (0x0000c5e8) find_pane_g1

0xf106,	// (0x00010be8) input_find_pane

0xab0f,	// (0x0000c5f1) input_find_pane_g1_ParamLimits

0xab0f,	// (0x0000c5f1) input_find_pane_g1

0xab1b,	// (0x0000c5fd) input_find_pane_t1_ParamLimits

0xab1b,	// (0x0000c5fd) input_find_pane_t1

0xab30,	// (0x0000c612) input_find_pane_t2_ParamLimits

0xab30,	// (0x0000c612) input_find_pane_t2

0x0001,

0xf677,	// (0x00011159) input_find_pane_t_ParamLimits

0xf677,	// (0x00011159) input_find_pane_t

0xf10f,	// (0x00010bf1) input_focus_pane_cp5_ParamLimits

0xf10f,	// (0x00010bf1) input_focus_pane_cp5

0xf122,	// (0x00010c04) bg_popup_window_pane_cp2_ParamLimits

0xf122,	// (0x00010c04) bg_popup_window_pane_cp2

0xf12f,	// (0x00010c11) listscroll_menu_pane_ParamLimits

0xf12f,	// (0x00010c11) listscroll_menu_pane

0xab51,	// (0x0000c633) popup_submenu_window_ParamLimits

0xab51,	// (0x0000c633) popup_submenu_window

0xf13b,	// (0x00010c1d) find_popup_pane_g1

0xf143,	// (0x00010c25) input_popup_find_pane_cp

0xf14d,	// (0x00010c2f) input_focus_pane_cp4_ParamLimits

0xf14d,	// (0x00010c2f) input_focus_pane_cp4

0xf15b,	// (0x00010c3d) input_popup_find_pane_t1_ParamLimits

0xf15b,	// (0x00010c3d) input_popup_find_pane_t1

0xe7a2,	// (0x00010284) bg_popup_sub_pane_cp

0xf189,	// (0x00010c6b) listscroll_popup_sub_pane

0xf191,	// (0x00010c73) list_submenu_pane_ParamLimits

0xf191,	// (0x00010c73) list_submenu_pane

0xf1a2,	// (0x00010c84) scroll_pane_cp4

0xf1aa,	// (0x00010c8c) list_single_popup_submenu_pane_ParamLimits

0xf1aa,	// (0x00010c8c) list_single_popup_submenu_pane

0xf1bf,	// (0x00010ca1) list_single_popup_submenu_pane_g1

0xf1c7,	// (0x00010ca9) list_single_popup_submenu_pane_t1_ParamLimits

0xf1c7,	// (0x00010ca9) list_single_popup_submenu_pane_t1

0xe844,	// (0x00010326) bg_active_tab_pane_cp1_ParamLimits

0xe844,	// (0x00010326) bg_active_tab_pane_cp1

0xab8f,	// (0x0000c671) tabs_2_active_pane_g1

0xab97,	// (0x0000c679) tabs_2_active_pane_t1

0xe844,	// (0x00010326) bg_passive_tab_pane_cp1_ParamLimits

0xe844,	// (0x00010326) bg_passive_tab_pane_cp1

0xab8f,	// (0x0000c671) tabs_2_passive_pane_g1

0xab97,	// (0x0000c679) tabs_2_passive_pane_t1

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp4

0xaba9,	// (0x0000c68b) tabs_2_long_active_pane_t1

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp4

0x1d91,	// (0x00003873) list_single_midp_graphic_pane_g4_ParamLimits

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp5

0xabbc,	// (0x0000c69e) tabs_3_long_active_pane_t1

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp5

0x1d91,	// (0x00003873) list_single_midp_graphic_pane_g4

0xe85c,	// (0x0001033e) bg_popup_window_pane_cp13_ParamLimits

0xe85c,	// (0x0001033e) bg_popup_window_pane_cp13

0xf1e5,	// (0x00010cc7) listscroll_popup_fast_pane_ParamLimits

0xf1e5,	// (0x00010cc7) listscroll_popup_fast_pane

0xf1f4,	// (0x00010cd6) grid_popup_fast_pane_ParamLimits

0xf1f4,	// (0x00010cd6) grid_popup_fast_pane

0xf206,	// (0x00010ce8) scroll_pane_cp9_ParamLimits

0xf206,	// (0x00010ce8) scroll_pane_cp9

0x5a96,	// (0x00007578) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5a96,	// (0x00007578) list_single_graphic_hl_pane_t1_cp2

0xf22a,	// (0x00010d0c) input_focus_pane_cp20_ParamLimits

0xf22a,	// (0x00010d0c) input_focus_pane_cp20

0xf238,	// (0x00010d1a) query_popup_data_pane_t1_ParamLimits

0xf238,	// (0x00010d1a) query_popup_data_pane_t1

0xf24b,	// (0x00010d2d) query_popup_data_pane_t2_ParamLimits

0xf24b,	// (0x00010d2d) query_popup_data_pane_t2

0xf291,	// (0x00010d73) query_popup_data_pane_t3_ParamLimits

0xf291,	// (0x00010d73) query_popup_data_pane_t3

0xf2d2,	// (0x00010db4) query_popup_data_pane_t4_ParamLimits

0xf2d2,	// (0x00010db4) query_popup_data_pane_t4

0xf30e,	// (0x00010df0) query_popup_data_pane_t5_ParamLimits

0xf30e,	// (0x00010df0) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001115e) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001115e) query_popup_data_pane_t

0xf08f,	// (0x00010b71) bg_set_opt_pane_g1

0xf097,	// (0x00010b79) bg_set_opt_pane_g2

0xf09f,	// (0x00010b81) bg_set_opt_pane_g3

0xf0a7,	// (0x00010b89) bg_set_opt_pane_g4

0xf0af,	// (0x00010b91) bg_set_opt_pane_g5

0xf0b7,	// (0x00010b99) bg_set_opt_pane_g6

0xf0bf,	// (0x00010ba1) bg_set_opt_pane_g7

0xf0c7,	// (0x00010ba9) bg_set_opt_pane_g8

0xf0cf,	// (0x00010bb1) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00011169) bg_set_opt_pane_g

0x0716,	// (0x000021f8) control_top_pane_stacon_ParamLimits

0x0716,	// (0x000021f8) control_top_pane_stacon

0x0769,	// (0x0000224b) signal_pane_stacon_ParamLimits

0x0769,	// (0x0000224b) signal_pane_stacon

0x078e,	// (0x00002270) stacon_top_pane_g1_ParamLimits

0x078e,	// (0x00002270) stacon_top_pane_g1

0x07b0,	// (0x00002292) title_pane_stacon_ParamLimits

0x07b0,	// (0x00002292) title_pane_stacon

0x07da,	// (0x000022bc) uni_indicator_pane_stacon_ParamLimits

0x07da,	// (0x000022bc) uni_indicator_pane_stacon

0x07ef,	// (0x000022d1) battery_pane_stacon_ParamLimits

0x07ef,	// (0x000022d1) battery_pane_stacon

0x0833,	// (0x00002315) control_bottom_pane_stacon_ParamLimits

0x0833,	// (0x00002315) control_bottom_pane_stacon

0x0856,	// (0x00002338) navi_pane_stacon_ParamLimits

0x0856,	// (0x00002338) navi_pane_stacon

0x0879,	// (0x0000235b) stacon_bottom_pane_g1_ParamLimits

0x0879,	// (0x0000235b) stacon_bottom_pane_g1

0xf345,	// (0x00010e27) aid_levels_signal_lsc_ParamLimits

0xf345,	// (0x00010e27) aid_levels_signal_lsc

0xf35c,	// (0x00010e3e) signal_pane_stacon_g1_ParamLimits

0xf35c,	// (0x00010e3e) signal_pane_stacon_g1

0xf370,	// (0x00010e52) signal_pane_stacon_g2_ParamLimits

0xf370,	// (0x00010e52) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001117c) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001117c) signal_pane_stacon_g

0xf3b2,	// (0x00010e94) title_pane_stacon_t1_ParamLimits

0xf3b2,	// (0x00010e94) title_pane_stacon_t1

0xf3d7,	// (0x00010eb9) uni_indicator_pane_stacon_g1

0xf3e1,	// (0x00010ec3) uni_indicator_pane_stacon_g2

0xf3eb,	// (0x00010ecd) uni_indicator_pane_stacon_g3

0xf3f5,	// (0x00010ed7) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00011188) uni_indicator_pane_stacon_g

0xf3ff,	// (0x00010ee1) control_top_pane_stacon_g1

0xf407,	// (0x00010ee9) control_top_pane_stacon_t1_ParamLimits

0xf407,	// (0x00010ee9) control_top_pane_stacon_t1

0xf43e,	// (0x00010f20) aid_levels_battery_lsc_ParamLimits

0xf43e,	// (0x00010f20) aid_levels_battery_lsc

0xf456,	// (0x00010f38) battery_pane_stacon_g1_ParamLimits

0xf456,	// (0x00010f38) battery_pane_stacon_g1

0xf468,	// (0x00010f4a) battery_pane_stacon_g2_ParamLimits

0xf468,	// (0x00010f4a) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00011191) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00011191) battery_pane_stacon_g

0xf4a6,	// (0x00010f88) navi_icon_pane_stacon

0xf4ba,	// (0x00010f9c) navi_navi_pane_stacon

0xf4a6,	// (0x00010f88) navi_text_pane_stacon

0xf4d0,	// (0x00010fb2) control_bottom_pane_stacon_g1

0xf4d8,	// (0x00010fba) control_bottom_pane_stacon_t1_ParamLimits

0xf4d8,	// (0x00010fba) control_bottom_pane_stacon_t1

0xabce,	// (0x0000c6b0) grid_app_pane_ParamLimits

0xabce,	// (0x0000c6b0) grid_app_pane

0xac06,	// (0x0000c6e8) scroll_pane_cp15_ParamLimits

0xac06,	// (0x0000c6e8) scroll_pane_cp15

0xac1b,	// (0x0000c6fd) cell_app_pane_ParamLimits

0xac1b,	// (0x0000c6fd) cell_app_pane

0xac66,	// (0x0000c748) cell_app_pane_g1_ParamLimits

0xac66,	// (0x0000c748) cell_app_pane_g1

0x0079,	// (0x00001b5b) cell_app_pane_g2_ParamLimits

0x0079,	// (0x00001b5b) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00011196) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00011196) cell_app_pane_g

0xac8a,	// (0x0000c76c) cell_app_pane_t1_ParamLimits

0xac8a,	// (0x0000c76c) cell_app_pane_t1

0x00b6,	// (0x00001b98) grid_highlight_pane_ParamLimits

0x00b6,	// (0x00001b98) grid_highlight_pane

0xf08f,	// (0x00010b71) cell_highlight_pane_g1

0xf097,	// (0x00010b79) cell_highlight_pane_g2

0xf09f,	// (0x00010b81) cell_highlight_pane_g3

0xf0a7,	// (0x00010b89) cell_highlight_pane_g4

0xf0af,	// (0x00010b91) cell_highlight_pane_g5

0xf0b7,	// (0x00010b99) cell_highlight_pane_g6

0xf0bf,	// (0x00010ba1) cell_highlight_pane_g7

0xf0c7,	// (0x00010ba9) cell_highlight_pane_g8

0xf0cf,	// (0x00010bb1) cell_highlight_pane_g9

0xe629,	// (0x0001010b) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00011144) cell_highlight_pane_g

0x00da,	// (0x00001bbc) bg_scroll_pane

0x00f9,	// (0x00001bdb) scroll_handle_pane

0x014a,	// (0x00001c2c) scroll_bg_pane_g1

0x015f,	// (0x00001c41) scroll_bg_pane_g2

0x0177,	// (0x00001c59) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001119b) scroll_bg_pane_g

0x018c,	// (0x00001c6e) scroll_handle_focus_pane_ParamLimits

0x018c,	// (0x00001c6e) scroll_handle_focus_pane

0x014a,	// (0x00001c2c) scroll_handle_pane_g1

0x0199,	// (0x00001c7b) scroll_handle_pane_g2

0x0177,	// (0x00001c59) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x000111a2) scroll_handle_pane_g

0xf14d,	// (0x00010c2f) bg_popup_sub_pane_cp21_ParamLimits

0xf14d,	// (0x00010c2f) bg_popup_sub_pane_cp21

0x01ad,	// (0x00001c8f) popup_fep_japan_predictive_window_t1_ParamLimits

0x01ad,	// (0x00001c8f) popup_fep_japan_predictive_window_t1

0x01c4,	// (0x00001ca6) popup_fep_japan_predictive_window_t2_ParamLimits

0x01c4,	// (0x00001ca6) popup_fep_japan_predictive_window_t2

0x01f7,	// (0x00001cd9) popup_fep_japan_predictive_window_t3_ParamLimits

0x01f7,	// (0x00001cd9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x000111a9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x000111a9) popup_fep_japan_predictive_window_t

0xe7a2,	// (0x00010284) bg_popup_sub_pane_cp23

0x022e,	// (0x00001d10) listscroll_japin_cand_pane

0x0236,	// (0x00001d18) popup_fep_japan_candidate_window_t1

0x0244,	// (0x00001d26) candidate_pane_ParamLimits

0x0244,	// (0x00001d26) candidate_pane

0x0256,	// (0x00001d38) scroll_pane_cp30

0x0260,	// (0x00001d42) list_single_popup_jap_candidate_pane_ParamLimits

0x0260,	// (0x00001d42) list_single_popup_jap_candidate_pane

0xe7a2,	// (0x00010284) list_highlight_pane_cp30

0x0274,	// (0x00001d56) list_single_popup_jap_candidate_pane_t1

0xacc4,	// (0x0000c7a6) level_1_signal

0xacd6,	// (0x0000c7b8) level_2_signal

0xace9,	// (0x0000c7cb) level_3_signal

0xacfc,	// (0x0000c7de) level_4_signal

0xad0f,	// (0x0000c7f1) level_5_signal

0xad22,	// (0x0000c804) level_6_signal

0xad35,	// (0x0000c817) level_7_signal

0xacc4,	// (0x0000c7a6) level_1_battery

0xacd6,	// (0x0000c7b8) level_2_battery

0xace9,	// (0x0000c7cb) level_3_battery

0xacfc,	// (0x0000c7de) level_4_battery

0xad0f,	// (0x0000c7f1) level_5_battery

0xad22,	// (0x0000c804) level_6_battery

0xad35,	// (0x0000c817) level_7_battery

0x0315,	// (0x00001df7) list_menu_pane_ParamLimits

0x0315,	// (0x00001df7) list_menu_pane

0x032b,	// (0x00001e0d) scroll_pane_cp25_ParamLimits

0x032b,	// (0x00001e0d) scroll_pane_cp25

0x0344,	// (0x00001e26) list_double2_graphic_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double2_graphic_pane_cp2

0x0344,	// (0x00001e26) list_double2_large_graphic_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double2_large_graphic_pane_cp2

0x0344,	// (0x00001e26) list_double2_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double2_pane_cp2

0x0344,	// (0x00001e26) list_double_graphic_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double_graphic_pane_cp2

0x0344,	// (0x00001e26) list_double_large_graphic_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double_large_graphic_pane_cp2

0x0344,	// (0x00001e26) list_double_number_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double_number_pane_cp2

0x0344,	// (0x00001e26) list_double_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double_pane_cp2

0xad48,	// (0x0000c82a) list_single_2graphic_pane_cp2_ParamLimits

0xad48,	// (0x0000c82a) list_single_2graphic_pane_cp2

0xad48,	// (0x0000c82a) list_single_graphic_heading_pane_cp2_ParamLimits

0xad48,	// (0x0000c82a) list_single_graphic_heading_pane_cp2

0xad48,	// (0x0000c82a) list_single_graphic_pane_cp2_ParamLimits

0xad48,	// (0x0000c82a) list_single_graphic_pane_cp2

0xad48,	// (0x0000c82a) list_single_heading_pane_cp2_ParamLimits

0xad48,	// (0x0000c82a) list_single_heading_pane_cp2

0x0387,	// (0x00001e69) list_single_large_graphic_pane_cp2_ParamLimits

0x0387,	// (0x00001e69) list_single_large_graphic_pane_cp2

0xad48,	// (0x0000c82a) list_single_number_heading_pane_cp2_ParamLimits

0xad48,	// (0x0000c82a) list_single_number_heading_pane_cp2

0xad48,	// (0x0000c82a) list_single_number_pane_cp2_ParamLimits

0xad48,	// (0x0000c82a) list_single_number_pane_cp2

0xad5c,	// (0x0000c83e) list_single_pane_cp2_ParamLimits

0xad5c,	// (0x0000c83e) list_single_pane_cp2

0x046d,	// (0x00001f4f) bg_popup_sub_pane_cp22

0x0492,	// (0x00001f74) popup_side_volume_key_window_g1

0x04bc,	// (0x00001f9e) popup_side_volume_key_window_t1

0x04da,	// (0x00001fbc) volume_small_pane_cp1

0xe844,	// (0x00010326) bg_popup_sub_pane_cp24_ParamLimits

0xe844,	// (0x00010326) bg_popup_sub_pane_cp24

0x04e2,	// (0x00001fc4) fep_china_uni_candidate_pane_ParamLimits

0x04e2,	// (0x00001fc4) fep_china_uni_candidate_pane

0x04f6,	// (0x00001fd8) fep_china_uni_entry_pane

0x0506,	// (0x00001fe8) popup_fep_china_uni_window_g1

0x0522,	// (0x00002004) fep_china_uni_entry_pane_g1

0x052c,	// (0x0000200e) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x000111da) fep_china_uni_entry_pane_g

0x0536,	// (0x00002018) fep_entry_item_pane

0x0540,	// (0x00002022) fep_candidate_item_pane

0x0548,	// (0x0000202a) fep_china_uni_candidate_pane_g1

0x0552,	// (0x00002034) fep_china_uni_candidate_pane_g2

0x055a,	// (0x0000203c) fep_china_uni_candidate_pane_g3

0x0562,	// (0x00002044) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x000111df) fep_china_uni_candidate_pane_g

0xe629,	// (0x0001010b) fep_entry_item_pane_g1

0x056c,	// (0x0000204e) fep_entry_item_pane_t1_ParamLimits

0x056c,	// (0x0000204e) fep_entry_item_pane_t1

0x0582,	// (0x00002064) fep_candidate_item_pane_t1_ParamLimits

0x0582,	// (0x00002064) fep_candidate_item_pane_t1

0x0597,	// (0x00002079) fep_candidate_item_pane_t2_ParamLimits

0x0597,	// (0x00002079) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x000111e8) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x000111e8) fep_candidate_item_pane_t

0xe85c,	// (0x0001033e) list_highlight_pane_cp31_ParamLimits

0xe85c,	// (0x0001033e) list_highlight_pane_cp31

0x05a9,	// (0x0000208b) level_1_signal_lsc

0x05b2,	// (0x00002094) level_2_signal_lsc

0x05bb,	// (0x0000209d) level_3_signal_lsc

0x05c4,	// (0x000020a6) level_4_signal_lsc

0x05cd,	// (0x000020af) level_5_signal_lsc

0x05d6,	// (0x000020b8) level_6_signal_lsc

0x05df,	// (0x000020c1) level_7_signal_lsc

0x05df,	// (0x000020c1) level_1_battery_lsc

0x05e8,	// (0x000020ca) level_2_battery_lsc

0x05f1,	// (0x000020d3) level_3_battery_lsc

0x05fa,	// (0x000020dc) level_4_battery_lsc

0x0603,	// (0x000020e5) level_5_battery_lsc

0x060c,	// (0x000020ee) level_6_battery_lsc

0x05a9,	// (0x0000208b) level_7_battery_lsc

0x0615,	// (0x000020f7) scroll_handle_focus_pane_g1

0x061e,	// (0x00002100) scroll_handle_focus_pane_g2

0x0627,	// (0x00002109) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x000111ed) scroll_handle_focus_pane_g

0xadeb,	// (0x0000c8cd) list_single_2graphic_pane_g1_ParamLimits

0xadeb,	// (0x0000c8cd) list_single_2graphic_pane_g1

0xa641,	// (0x0000c123) list_single_2graphic_pane_g2_ParamLimits

0xa641,	// (0x0000c123) list_single_2graphic_pane_g2

0x1bc8,	// (0x000036aa) list_single_2graphic_pane_g3_ParamLimits

0x1bc8,	// (0x000036aa) list_single_2graphic_pane_g3

0xadf7,	// (0x0000c8d9) list_single_2graphic_pane_g4_ParamLimits

0xadf7,	// (0x0000c8d9) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x000111f4) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x000111f4) list_single_2graphic_pane_g

0xae08,	// (0x0000c8ea) list_single_2graphic_pane_t1_ParamLimits

0xae08,	// (0x0000c8ea) list_single_2graphic_pane_t1

0xae36,	// (0x0000c918) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xae36,	// (0x0000c918) list_double2_graphic_large_graphic_pane_g1

0xa6ac,	// (0x0000c18e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa6ac,	// (0x0000c18e) list_double2_graphic_large_graphic_pane_g2

0xa6bd,	// (0x0000c19f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa6bd,	// (0x0000c19f) list_double2_graphic_large_graphic_pane_g3

0xae48,	// (0x0000c92a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xae48,	// (0x0000c92a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x000111fd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x000111fd) list_double2_graphic_large_graphic_pane_g

0xae54,	// (0x0000c936) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xae54,	// (0x0000c936) list_double2_graphic_large_graphic_pane_t1

0xae6a,	// (0x0000c94c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xae6a,	// (0x0000c94c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00011206) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00011206) list_double2_graphic_large_graphic_pane_t

0x093c,	// (0x0000241e) popup_fast_swap_window_ParamLimits

0x093c,	// (0x0000241e) popup_fast_swap_window

0x095a,	// (0x0000243c) popup_side_volume_key_window

0x0978,	// (0x0000245a) stacon_top_pane

0x0982,	// (0x00002464) status_pane_ParamLimits

0x0982,	// (0x00002464) status_pane

0xe61f,	// (0x00010101) status_small_pane

0xe7a2,	// (0x00010284) control_pane

0xe7a2,	// (0x00010284) stacon_bottom_pane

0xef5f,	// (0x00010a41) scroll_pane_cp121

0xef56,	// (0x00010a38) set_content_pane

0xae7c,	// (0x0000c95e) bg_active_tab_pane_g1_cp1

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp1

0xae85,	// (0x0000c967) bg_active_tab_pane_g3_cp1

0xae7c,	// (0x0000c95e) bg_passive_tab_pane_g1_cp1

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp1

0xae85,	// (0x0000c967) bg_passive_tab_pane_g3_cp1

0xae8e,	// (0x0000c970) bg_active_tab_pane_g1_cp2

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp2

0xae97,	// (0x0000c979) bg_active_tab_pane_g3_cp2

0xae8e,	// (0x0000c970) bg_passive_tab_pane_g1_cp2

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp2

0xae97,	// (0x0000c979) bg_passive_tab_pane_g3_cp2

0xaea0,	// (0x0000c982) bg_active_tab_pane_g1_cp3

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp3

0xaea9,	// (0x0000c98b) bg_active_tab_pane_g3_cp3

0xaea0,	// (0x0000c982) bg_passive_tab_pane_g1_cp3

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp3

0xaea9,	// (0x0000c98b) bg_passive_tab_pane_g3_cp3

0xaeb2,	// (0x0000c994) bg_active_tab_pane_g1_cp4

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp4

0xaebb,	// (0x0000c99d) bg_active_tab_pane_g3_cp4

0xaeb2,	// (0x0000c994) bg_passive_tab_pane_g1_cp4

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp4

0xaebb,	// (0x0000c99d) bg_passive_tab_pane_g3_cp4

0x0895,	// (0x00002377) bg_active_tab_pane_g1_cp5

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp5

0x089e,	// (0x00002380) bg_active_tab_pane_g3_cp5

0x0895,	// (0x00002377) bg_passive_tab_pane_g1_cp5

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp5

0x089e,	// (0x00002380) bg_passive_tab_pane_g3_cp5

0x3e92,	// (0x00005974) list_set_graphic_pane_ParamLimits

0x3e92,	// (0x00005974) list_set_graphic_pane

0xe7a2,	// (0x00010284) bg_set_opt_pane_cp4

0x08bd,	// (0x0000239f) list_set_graphic_pane_g1_ParamLimits

0x08bd,	// (0x0000239f) list_set_graphic_pane_g1

0x08c9,	// (0x000023ab) list_set_graphic_pane_g2_ParamLimits

0x08c9,	// (0x000023ab) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001120b) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001120b) list_set_graphic_pane_g

0x0009,

0xfaac,	// (0x0001158e) volume_small_pane_cp_g

0x08ed,	// (0x000023cf) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x08ed,	// (0x000023cf) list_double2_large_graphic_pane_g1_cp2

0x08fb,	// (0x000023dd) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x08fb,	// (0x000023dd) list_double2_large_graphic_pane_g2_cp2

0x090c,	// (0x000023ee) list_double2_large_graphic_pane_g3_cp2

0x0914,	// (0x000023f6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0914,	// (0x000023f6) list_double2_large_graphic_pane_t1_cp2

0x092a,	// (0x0000240c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x092a,	// (0x0000240c) list_double2_large_graphic_pane_t2_cp2

0x3154,	// (0x00004c36) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3154,	// (0x00004c36) list_double_large_graphic_pane_g1_cp2

0x3167,	// (0x00004c49) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3167,	// (0x00004c49) list_double_large_graphic_pane_g2_cp2

0x0aa0,	// (0x00002582) list_double_large_graphic_pane_g3_cp2

0x3178,	// (0x00004c5a) list_double_large_graphic_pane_g4_cp

0x3180,	// (0x00004c62) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3180,	// (0x00004c62) list_double_large_graphic_pane_t1_cp2

0x3197,	// (0x00004c79) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3197,	// (0x00004c79) list_double_large_graphic_pane_t2_cp2

0x0990,	// (0x00002472) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0990,	// (0x00002472) list_double2_graphic_pane_g1_cp2

0x099e,	// (0x00002480) list_double2_graphic_pane_g2_cp2_ParamLimits

0x099e,	// (0x00002480) list_double2_graphic_pane_g2_cp2

0x09af,	// (0x00002491) list_double2_graphic_pane_g3_cp2

0x09b9,	// (0x0000249b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x09b9,	// (0x0000249b) list_double2_graphic_pane_t1_cp2

0x09cf,	// (0x000024b1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x09cf,	// (0x000024b1) list_double2_graphic_pane_t2_cp2

0x09e1,	// (0x000024c3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x09e1,	// (0x000024c3) list_single_number_heading_pane_g1_cp2

0x09ed,	// (0x000024cf) list_single_number_heading_pane_g2_cp2

0x09f5,	// (0x000024d7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x09f5,	// (0x000024d7) list_single_number_heading_pane_t1_cp2

0x0a0b,	// (0x000024ed) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0a0b,	// (0x000024ed) list_single_number_heading_pane_t2_cp2

0x0a1f,	// (0x00002501) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0a1f,	// (0x00002501) list_single_number_heading_pane_t3_cp2

0x09e1,	// (0x000024c3) list_single_heading_pane_g1_cp2_ParamLimits

0x09e1,	// (0x000024c3) list_single_heading_pane_g1_cp2

0x09ed,	// (0x000024cf) list_single_heading_pane_g2_cp2

0x09f5,	// (0x000024d7) list_single_heading_pane_t1_cp2_ParamLimits

0x09f5,	// (0x000024d7) list_single_heading_pane_t1_cp2

0x2f4e,	// (0x00004a30) list_single_heading_pane_t2_cp2_ParamLimits

0x2f4e,	// (0x00004a30) list_single_heading_pane_t2_cp2

0x2e96,	// (0x00004978) list_double_graphic_pane_g1_cp2_ParamLimits

0x2e96,	// (0x00004978) list_double_graphic_pane_g1_cp2

0x2ea2,	// (0x00004984) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ea2,	// (0x00004984) list_double_graphic_pane_g2_cp2

0x2eb1,	// (0x00004993) list_double_graphic_pane_g3_cp2

0x2eb9,	// (0x0000499b) list_double_graphic_pane_t1_cp2_ParamLimits

0x2eb9,	// (0x0000499b) list_double_graphic_pane_t1_cp2

0x2ecf,	// (0x000049b1) list_double_graphic_pane_t2_cp2_ParamLimits

0x2ecf,	// (0x000049b1) list_double_graphic_pane_t2_cp2

0x0a94,	// (0x00002576) list_double_number_pane_g1_cp2_ParamLimits

0x0a94,	// (0x00002576) list_double_number_pane_g1_cp2

0x0aa0,	// (0x00002582) list_double_number_pane_g2_cp2

0x2e5a,	// (0x0000493c) list_double_number_pane_t1_cp2_ParamLimits

0x2e5a,	// (0x0000493c) list_double_number_pane_t1_cp2

0x2e6e,	// (0x00004950) list_double_number_pane_t2_cp2_ParamLimits

0x2e6e,	// (0x00004950) list_double_number_pane_t2_cp2

0x2e84,	// (0x00004966) list_double_number_pane_t3_cp2_ParamLimits

0x2e84,	// (0x00004966) list_double_number_pane_t3_cp2

0x2d32,	// (0x00004814) list_single_graphic_pane_g1_cp2_ParamLimits

0x2d32,	// (0x00004814) list_single_graphic_pane_g1_cp2

0x0b05,	// (0x000025e7) list_single_graphic_pane_g2_cp2_ParamLimits

0x0b05,	// (0x000025e7) list_single_graphic_pane_g2_cp2

0x0b11,	// (0x000025f3) list_single_graphic_pane_g3_cp2

0x2d08,	// (0x000047ea) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d08,	// (0x000047ea) list_single_graphic_pane_t1_cp2

0x0b05,	// (0x000025e7) list_single_number_pane_g1_cp2_ParamLimits

0x0b05,	// (0x000025e7) list_single_number_pane_g1_cp2

0x0b11,	// (0x000025f3) list_single_number_pane_g2_cp2

0x2d08,	// (0x000047ea) list_single_number_pane_t1_cp2_ParamLimits

0x2d08,	// (0x000047ea) list_single_number_pane_t1_cp2

0x2d1e,	// (0x00004800) list_single_number_pane_t2_cp2_ParamLimits

0x2d1e,	// (0x00004800) list_single_number_pane_t2_cp2

0x08fb,	// (0x000023dd) list_double2_pane_g1_cp2_ParamLimits

0x08fb,	// (0x000023dd) list_double2_pane_g1_cp2

0x090c,	// (0x000023ee) list_double2_pane_g2_cp2

0x0a6c,	// (0x0000254e) list_double2_pane_t1_cp2_ParamLimits

0x0a6c,	// (0x0000254e) list_double2_pane_t1_cp2

0x0a82,	// (0x00002564) list_double2_pane_t2_cp2_ParamLimits

0x0a82,	// (0x00002564) list_double2_pane_t2_cp2

0x0a94,	// (0x00002576) list_double_pane_g1_cp2_ParamLimits

0x0a94,	// (0x00002576) list_double_pane_g1_cp2

0x0aa0,	// (0x00002582) list_double_pane_g2_cp2

0x0aa8,	// (0x0000258a) list_double_pane_t1_cp2_ParamLimits

0x0aa8,	// (0x0000258a) list_double_pane_t1_cp2

0x0abe,	// (0x000025a0) list_double_pane_t2_cp2_ParamLimits

0x0abe,	// (0x000025a0) list_double_pane_t2_cp2

0x0af5,	// (0x000025d7) list_single_pane_cp2_g3

0x0b05,	// (0x000025e7) list_single_pane_g1_cp2_ParamLimits

0x0b05,	// (0x000025e7) list_single_pane_g1_cp2

0x0b11,	// (0x000025f3) list_single_pane_g2_cp2

0x0b19,	// (0x000025fb) list_single_pane_t1_cp2_ParamLimits

0x0b19,	// (0x000025fb) list_single_pane_t1_cp2

0x0b31,	// (0x00002613) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0b31,	// (0x00002613) list_single_large_graphic_pane_g1_cp2

0x0b3f,	// (0x00002621) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0b3f,	// (0x00002621) list_single_large_graphic_pane_g2_cp2

0x0b4b,	// (0x0000262d) list_single_large_graphic_pane_g3_cp2

0x0b53,	// (0x00002635) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0b53,	// (0x00002635) list_single_large_graphic_pane_g4_cp1

0x0b6d,	// (0x0000264f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0b6d,	// (0x0000264f) list_single_large_graphic_pane_t1_cp2

0x2b77,	// (0x00004659) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2b77,	// (0x00004659) list_single_graphic_heading_pane_g1_cp2

0x2b44,	// (0x00004626) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2b44,	// (0x00004626) list_single_graphic_heading_pane_g4_cp2

0x0b11,	// (0x000025f3) list_single_graphic_heading_pane_g5_cp2

0x2b83,	// (0x00004665) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2b83,	// (0x00004665) list_single_graphic_heading_pane_t1_cp2

0x2b99,	// (0x0000467b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2b99,	// (0x0000467b) list_single_graphic_heading_pane_t2_cp2

0x2b38,	// (0x0000461a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2b38,	// (0x0000461a) list_single_2graphic_pane_g1_cp2

0x2b44,	// (0x00004626) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2b44,	// (0x00004626) list_single_2graphic_pane_g2_cp2

0x0b11,	// (0x000025f3) list_single_2graphic_pane_g3_cp2

0x2b55,	// (0x00004637) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2b55,	// (0x00004637) list_single_2graphic_pane_g4_cp2

0x2b61,	// (0x00004643) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2b61,	// (0x00004643) list_single_2graphic_pane_t1_cp2

0xe629,	// (0x0001010b) list_highlight_pane_g10_cp1

0x2710,	// (0x000041f2) list_highlight_pane_g1_cp1

0x2718,	// (0x000041fa) list_highlight_pane_g2_cp1

0x2720,	// (0x00004202) list_highlight_pane_g3_cp1

0x2728,	// (0x0000420a) list_highlight_pane_g4_cp1

0x2730,	// (0x00004212) list_highlight_pane_g5_cp1

0x2738,	// (0x0000421a) list_highlight_pane_g6_cp1

0x2740,	// (0x00004222) list_highlight_pane_g7_cp1

0x2748,	// (0x0000422a) list_highlight_pane_g8_cp1

0x2750,	// (0x00004232) list_highlight_pane_g9_cp1

0xbd64,	// (0x0000d846) form_field_slider_pane_t3

0xbd72,	// (0x0000d854) form_field_slider_pane_t4

0x264c,	// (0x0000412e) slider_form_pane_ParamLimits

0x264c,	// (0x0000412e) slider_form_pane

0xe7a2,	// (0x00010284) control_abbreviations

0xe7a2,	// (0x00010284) control_conventions

0xe7a2,	// (0x00010284) control_definitions

0xe7a2,	// (0x00010284) format_table_attribute

0x2fa4,	// (0x00004a86) bg_popup_preview_window_pane_g9

0xe7a2,	// (0x00010284) format_table_data2

0xe7a2,	// (0x00010284) format_table_data3

0xe7a2,	// (0x00010284) format_table_data_example

0x0008,

0xe7a2,	// (0x00010284) intro_purpose

0xf8b9,	// (0x0001139b) bg_popup_preview_window_pane_g

0xe7a2,	// (0x00010284) texts_category

0xe7a2,	// (0x00010284) texts_graphics

0x0b83,	// (0x00002665) text_digital

0x0b92,	// (0x00002674) text_primary

0x0ba1,	// (0x00002683) text_primary_small

0x0bb0,	// (0x00002692) text_secondary

0x0bbf,	// (0x000026a1) text_title

0x38b2,	// (0x00005394) bg_passive_tab_pane_g1_cp3_srt

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp3_srt

0x38bb,	// (0x0000539d) bg_passive_tab_pane_g3_cp3_srt

0xe844,	// (0x00010326) bg_active_tab_pane_cp3_srt_ParamLimits

0xe844,	// (0x00010326) bg_active_tab_pane_cp3_srt

0x38c4,	// (0x000053a6) tabs_4_active_pane_srt_g1

0xc2e6,	// (0x0000ddc8) tabs_4_active_pane_srt_t1_ParamLimits

0xc2e6,	// (0x0000ddc8) tabs_4_active_pane_srt_t1

0x38b2,	// (0x00005394) bg_active_tab_pane_g1_cp3_copy1

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp3_copy1

0x38bb,	// (0x0000539d) bg_active_tab_pane_g3_cp3_copy1

0xe85c,	// (0x0001033e) tabs_2_long_active_pane_srt_ParamLimits

0xe85c,	// (0x0001033e) tabs_2_long_active_pane_srt

0xe85c,	// (0x0001033e) tabs_2_long_passive_pane_srt_ParamLimits

0xe85c,	// (0x0001033e) tabs_2_long_passive_pane_srt

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp4_srt

0x346a,	// (0x00004f4c) bg_passive_tab_pane_g1_cp4_srt

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp4_srt

0x3473,	// (0x00004f55) bg_passive_tab_pane_g3_cp4_srt

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp4_srt_ParamLimits

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp4_srt

0xc099,	// (0x0000db7b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc099,	// (0x0000db7b) tabs_2_long_active_pane_srt_t1

0x346a,	// (0x00004f4c) bg_active_tab_pane_g1_cp4_srt

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp4_srt

0x3473,	// (0x00004f55) bg_active_tab_pane_g3_cp4_srt

0xe844,	// (0x00010326) tabs_3_long_active_pane_srt_ParamLimits

0xe844,	// (0x00010326) tabs_3_long_active_pane_srt

0xe844,	// (0x00010326) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe844,	// (0x00010326) tabs_3_long_passive_pane_cp_srt

0xe844,	// (0x00010326) tabs_3_long_passive_pane_srt_ParamLimits

0xe844,	// (0x00010326) tabs_3_long_passive_pane_srt

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp5_srt

0x0895,	// (0x00002377) bg_passive_tab_pane_g1_cp5_srt

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp5_srt

0x089e,	// (0x00002380) bg_passive_tab_pane_g3_cp5_srt

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp5_srt_ParamLimits

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp5_srt

0xc083,	// (0x0000db65) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc083,	// (0x0000db65) tabs_3_long_active_pane_srt_t1

0x0895,	// (0x00002377) bg_active_tab_pane_g1_cp5_srt

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp5_srt

0x089e,	// (0x00002380) bg_active_tab_pane_g3_cp5_srt

0x344a,	// (0x00004f2c) navi_text_pane_srt_t1

0x3442,	// (0x00004f24) navi_icon_pane_srt_g1

0x0e40,	// (0x00002922) midp_editing_number_pane_srt

0x0bce,	// (0x000026b0) midp_ticker_pane_srt

0x0e48,	// (0x0000292a) midp_ticker_pane_srt_g1

0x0e50,	// (0x00002932) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001122a) midp_ticker_pane_srt_g

0x0e58,	// (0x0000293a) midp_ticker_pane_srt_t1

0x3433,	// (0x00004f15) midp_editing_number_pane_t1_copy1

0xaec4,	// (0x0000c9a6) listscroll_midp_pane

0xaec4,	// (0x0000c9a6) midp_form_pane

0x0c45,	// (0x00002727) midp_info_popup_window_ParamLimits

0x0c45,	// (0x00002727) midp_info_popup_window

0xf14d,	// (0x00010c2f) bg_popup_sub_pane_cp50_ParamLimits

0xf14d,	// (0x00010c2f) bg_popup_sub_pane_cp50

0x2332,	// (0x00003e14) listscroll_midp_info_pane_ParamLimits

0x2332,	// (0x00003e14) listscroll_midp_info_pane

0x2312,	// (0x00003df4) listscroll_form_midp_pane_ParamLimits

0x2312,	// (0x00003df4) listscroll_form_midp_pane

0x231e,	// (0x00003e00) scroll_bar_cp050

0x2312,	// (0x00003df4) list_midp_pane

0x473e,	// (0x00006220) signal_pane_g2_cp

0x222c,	// (0x00003d0e) listscroll_midp_info_pane_t1_ParamLimits

0x222c,	// (0x00003d0e) listscroll_midp_info_pane_t1

0x2244,	// (0x00003d26) listscroll_midp_info_pane_t2_ParamLimits

0x2244,	// (0x00003d26) listscroll_midp_info_pane_t2

0x2282,	// (0x00003d64) listscroll_midp_info_pane_t3_ParamLimits

0x2282,	// (0x00003d64) listscroll_midp_info_pane_t3

0x22bc,	// (0x00003d9e) listscroll_midp_info_pane_t4_ParamLimits

0x22bc,	// (0x00003d9e) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x000112d6) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x000112d6) listscroll_midp_info_pane_t

0xf1a2,	// (0x00010c84) scroll_pane_cp21

0x21c6,	// (0x00003ca8) form_midp_field_choice_group_pane

0x21cf,	// (0x00003cb1) form_midp_field_text_pane

0x2212,	// (0x00003cf4) form_midp_field_time_pane

0x221a,	// (0x00003cfc) form_midp_gauge_slider_pane

0x2223,	// (0x00003d05) form_midp_gauge_wait_pane

0xe7a2,	// (0x00010284) form_midp_image_pane

0xbd47,	// (0x0000d829) list_single_midp_pane_ParamLimits

0xbd47,	// (0x0000d829) list_single_midp_pane

0xbd22,	// (0x0000d804) form_midp_field_text_pane_t1

0x1ebf,	// (0x000039a1) input_focus_pane_cp050

0x2195,	// (0x00003c77) list_midp_form_text_pane

0x2139,	// (0x00003c1b) form_midp_field_choice_group_pane_t1

0x2147,	// (0x00003c29) input_focus_pane_cp051

0x215b,	// (0x00003c3d) list_midp_choice_pane

0xe7a2,	// (0x00010284) status_idle_pane

0x211d,	// (0x00003bff) form_midp_field_time_pane_t1

0xe629,	// (0x0001010b) wait_anim_pane_g2_copy1

0x212b,	// (0x00003c0d) form_midp_field_time_pane_t2

0x0001,

0x0cf5,	// (0x000027d7) aid_navinavi_width_2_pane

0xf7ef,	// (0x000112d1) form_midp_field_time_pane_t

0xe7a2,	// (0x00010284) input_focus_pane_cp052

0xe7a2,	// (0x00010284) bg_input_focus_pane_cp040

0x20dd,	// (0x00003bbf) form_midp_gauge_slider_pane_t1

0x20eb,	// (0x00003bcd) form_midp_gauge_slider_pane_t2

0xbd06,	// (0x0000d7e8) form_midp_gauge_slider_pane_t3

0xbd14,	// (0x0000d7f6) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x000112c8) form_midp_gauge_slider_pane_t

0x2115,	// (0x00003bf7) form_midp_slider_pane

0xe85c,	// (0x0001033e) bg_input_focus_pane_cp041_ParamLimits

0xe85c,	// (0x0001033e) bg_input_focus_pane_cp041

0x20aa,	// (0x00003b8c) form_midp_gauge_wait_pane_t1_ParamLimits

0x20aa,	// (0x00003b8c) form_midp_gauge_wait_pane_t1

0x20bc,	// (0x00003b9e) form_midp_gauge_wait_pane_t2_ParamLimits

0x20bc,	// (0x00003b9e) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x000112c3) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x000112c3) form_midp_gauge_wait_pane_t

0x20ce,	// (0x00003bb0) form_midp_wait_pane_ParamLimits

0x20ce,	// (0x00003bb0) form_midp_wait_pane

0x2072,	// (0x00003b54) form_midp_image_pane_g1

0x207b,	// (0x00003b5d) form_midp_image_pane_t1

0x208a,	// (0x00003b6c) form_midp_image_pane_t2

0x2099,	// (0x00003b7b) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x000112bc) form_midp_image_pane_t

0x205a,	// (0x00003b3c) list_single_midp_pane_g1

0x2063,	// (0x00003b45) list_single_midp_pane_t1

0xbcef,	// (0x0000d7d1) list_midp_form_item_pane_ParamLimits

0xbcef,	// (0x0000d7d1) list_midp_form_item_pane

0x0c9d,	// (0x0000277f) list_midp_form_item_pane_t1

0x0cac,	// (0x0000278e) midp_ticker_pane_g1

0x0cb8,	// (0x0000279a) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00011210) midp_ticker_pane_g

0xaf68,	// (0x0000ca4a) midp_ticker_pane_t1

0xc23e,	// (0x0000dd20) midp_editing_number_pane_t1

0x372b,	// (0x0000520d) midp_editing_number_pane

0x373a,	// (0x0000521c) midp_ticker_pane

0x33fb,	// (0x00004edd) ai_message_heading_pane

0xe7a2,	// (0x00010284) bg_popup_window_pane_cp14

0x3403,	// (0x00004ee5) listscroll_ai_message_pane

0x3381,	// (0x00004e63) ai_message_heading_pane_g1_ParamLimits

0x3381,	// (0x00004e63) ai_message_heading_pane_g1

0x338d,	// (0x00004e6f) ai_message_heading_pane_g2_ParamLimits

0x338d,	// (0x00004e6f) ai_message_heading_pane_g2

0x339b,	// (0x00004e7d) ai_message_heading_pane_g3_ParamLimits

0x339b,	// (0x00004e7d) ai_message_heading_pane_g3

0x33a7,	// (0x00004e89) ai_message_heading_pane_g4_ParamLimits

0x33a7,	// (0x00004e89) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x000113fd) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x000113fd) ai_message_heading_pane_g

0x33b3,	// (0x00004e95) ai_message_heading_pane_t1_ParamLimits

0x33b3,	// (0x00004e95) ai_message_heading_pane_t1

0x33cd,	// (0x00004eaf) ai_message_heading_pane_t2_ParamLimits

0x33cd,	// (0x00004eaf) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x00011406) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x00011406) ai_message_heading_pane_t

0x33e1,	// (0x00004ec3) bg_popup_heading_pane_cp1_ParamLimits

0x33e1,	// (0x00004ec3) bg_popup_heading_pane_cp1

0x336f,	// (0x00004e51) list_ai_message_pane_ParamLimits

0x336f,	// (0x00004e51) list_ai_message_pane

0xf1a2,	// (0x00010c84) scroll_pane_cp10

0x32a7,	// (0x00004d89) list_ai_message_pane_g1

0x32af,	// (0x00004d91) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x000113da) list_ai_message_pane_g

0x32b7,	// (0x00004d99) list_ai_message_pane_t1_ParamLimits

0x32b7,	// (0x00004d99) list_ai_message_pane_t1

0x32cc,	// (0x00004dae) list_ai_message_pane_t2_ParamLimits

0x32cc,	// (0x00004dae) list_ai_message_pane_t2

0x32e1,	// (0x00004dc3) list_ai_message_pane_t3_ParamLimits

0x32e1,	// (0x00004dc3) list_ai_message_pane_t3

0x32f6,	// (0x00004dd8) list_ai_message_pane_t4_ParamLimits

0x32f6,	// (0x00004dd8) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x000113df) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x000113df) list_ai_message_pane_t

0xc069,	// (0x0000db4b) cell_ai_soft_ind_pane_ParamLimits

0xc069,	// (0x0000db4b) cell_ai_soft_ind_pane

0x0cd6,	// (0x000027b8) cell_ai_soft_ind_pane_g1_ParamLimits

0x0cd6,	// (0x000027b8) cell_ai_soft_ind_pane_g1

0xe7a2,	// (0x00010284) grid_highlight_cp1

0x0ce3,	// (0x000027c5) text_secondary_cp56_ParamLimits

0x0ce3,	// (0x000027c5) text_secondary_cp56

0x3265,	// (0x00004d47) example_general_pane_ParamLimits

0x3265,	// (0x00004d47) example_general_pane

0x3271,	// (0x00004d53) example_parent_pane_g1_ParamLimits

0x3271,	// (0x00004d53) example_parent_pane_g1

0x327d,	// (0x00004d5f) example_parent_pane_t1_ParamLimits

0x327d,	// (0x00004d5f) example_parent_pane_t1

0xb4de,	// (0x0000cfc0) popup_preview_text_window_ParamLimits

0xb4de,	// (0x0000cfc0) popup_preview_text_window

0x0afd,	// (0x000025df) list_single_pane_cp2_g4

0xeb00,	// (0x000105e2) bg_popup_preview_window_pane_ParamLimits

0xeb00,	// (0x000105e2) bg_popup_preview_window_pane

0x2fae,	// (0x00004a90) popup_preview_text_window_t1_ParamLimits

0x2fae,	// (0x00004a90) popup_preview_text_window_t1

0x2fcc,	// (0x00004aae) popup_preview_text_window_t2_ParamLimits

0x2fcc,	// (0x00004aae) popup_preview_text_window_t2

0x3015,	// (0x00004af7) popup_preview_text_window_t3_ParamLimits

0x3015,	// (0x00004af7) popup_preview_text_window_t3

0x305a,	// (0x00004b3c) popup_preview_text_window_t4_ParamLimits

0x305a,	// (0x00004b3c) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x000113ae) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x000113ae) popup_preview_text_window_t

0x30d8,	// (0x00004bba) scroll_pane_cp11

0x1d24,	// (0x00003806) bg_popup_preview_window_pane_g1

0x2f62,	// (0x00004a44) bg_popup_preview_window_pane_g2

0x2f6c,	// (0x00004a4e) bg_popup_preview_window_pane_g3

0x2f76,	// (0x00004a58) bg_popup_preview_window_pane_g4

0x2f80,	// (0x00004a62) bg_popup_preview_window_pane_g5

0x2f8a,	// (0x00004a6c) bg_popup_preview_window_pane_g6

0x2f92,	// (0x00004a74) bg_popup_preview_window_pane_g7

0x2f9a,	// (0x00004a7c) bg_popup_preview_window_pane_g8

0xe63f,	// (0x00010121) aid_popup_width_pane

0xb44e,	// (0x0000cf30) popup_midp_note_alarm_window_ParamLimits

0xb44e,	// (0x0000cf30) popup_midp_note_alarm_window

0xefc8,	// (0x00010aaa) data_form_pane_ParamLimits

0xaa47,	// (0x0000c529) form_field_data_pane_g1

0xaa51,	// (0x0000c533) form_field_data_pane_t1_ParamLimits

0xefd4,	// (0x00010ab6) input_focus_pane_ParamLimits

0xefe2,	// (0x00010ac4) data_form_wide_pane_ParamLimits

0xefee,	// (0x00010ad0) form_field_data_wide_pane_g1

0xf01a,	// (0x00010afc) form_field_data_wide_pane_t1_ParamLimits

0xecbc,	// (0x0001079e) input_focus_pane_cp6_ParamLimits

0xab81,	// (0x0000c663) input_popup_find_pane_g1_ParamLimits

0xab81,	// (0x0000c663) input_popup_find_pane_g1

0xf479,	// (0x00010f5b) aid_navi_side_left_pane

0xf48e,	// (0x00010f70) aid_navi_side_right_pane

0x280b,	// (0x000042ed) bg_popup_window_pane_cp30_ParamLimits

0x280b,	// (0x000042ed) bg_popup_window_pane_cp30

0x2885,	// (0x00004367) popup_midp_note_alarm_window_g1_ParamLimits

0x2885,	// (0x00004367) popup_midp_note_alarm_window_g1

0x28b5,	// (0x00004397) popup_midp_note_alarm_window_t1_ParamLimits

0x28b5,	// (0x00004397) popup_midp_note_alarm_window_t1

0x2956,	// (0x00004438) popup_midp_note_alarm_window_t2_ParamLimits

0x2956,	// (0x00004438) popup_midp_note_alarm_window_t2

0x2a04,	// (0x000044e6) popup_midp_note_alarm_window_t3_ParamLimits

0x2a04,	// (0x000044e6) popup_midp_note_alarm_window_t3

0x2a36,	// (0x00004518) popup_midp_note_alarm_window_t4_ParamLimits

0x2a36,	// (0x00004518) popup_midp_note_alarm_window_t4

0x2a5c,	// (0x0000453e) popup_midp_note_alarm_window_t5_ParamLimits

0x2a5c,	// (0x0000453e) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x0001134b) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x0001134b) popup_midp_note_alarm_window_t

0x2b08,	// (0x000045ea) wait_bar_pane_cp1_ParamLimits

0x2b08,	// (0x000045ea) wait_bar_pane_cp1

0xe7a2,	// (0x00010284) wait_anim_pane_copy1

0xe7a2,	// (0x00010284) wait_border_pane_copy1

0x24f0,	// (0x00003fd2) wait_border_pane_g1_copy1

0xf031,	// (0x00010b13) form_field_popup_pane_g1

0xaa6b,	// (0x0000c54d) form_field_popup_pane_t1_ParamLimits

0xefd4,	// (0x00010ab6) input_focus_pane_cp7_ParamLimits

0xf039,	// (0x00010b1b) list_form_pane_ParamLimits

0xf045,	// (0x00010b27) form_field_popup_wide_pane_g1

0xf04d,	// (0x00010b2f) form_field_popup_wide_pane_t1_ParamLimits

0xefd4,	// (0x00010ab6) input_focus_pane_cp8_ParamLimits

0xf05f,	// (0x00010b41) list_form_wide_pane_ParamLimits

0x394d,	// (0x0000542f) aid_size_cell_graphic_pane

0xaaea,	// (0x0000c5cc) data_form_pane_t1_ParamLimits

0xc222,	// (0x0000dd04) data_form_wide_pane_t1_ParamLimits

0xb8e2,	// (0x0000d3c4) bg_status_flat_pane

0xa27c,	// (0x0000bd5e) title_pane_t1_ParamLimits

0xe80c,	// (0x000102ee) title_pane_t2_ParamLimits

0xe832,	// (0x00010314) title_pane_t3_ParamLimits

0xf532,	// (0x00011014) title_pane_t_ParamLimits

0xacc4,	// (0x0000c7a6) level_1_signal_ParamLimits

0xacd6,	// (0x0000c7b8) level_2_signal_ParamLimits

0xace9,	// (0x0000c7cb) level_3_signal_ParamLimits

0xacfc,	// (0x0000c7de) level_4_signal_ParamLimits

0xad0f,	// (0x0000c7f1) level_5_signal_ParamLimits

0xad22,	// (0x0000c804) level_6_signal_ParamLimits

0xad35,	// (0x0000c817) level_7_signal_ParamLimits

0xacc4,	// (0x0000c7a6) level_1_battery_ParamLimits

0xacd6,	// (0x0000c7b8) level_2_battery_ParamLimits

0xace9,	// (0x0000c7cb) level_3_battery_ParamLimits

0xacfc,	// (0x0000c7de) level_4_battery_ParamLimits

0xad0f,	// (0x0000c7f1) level_5_battery_ParamLimits

0xad22,	// (0x0000c804) level_6_battery_ParamLimits

0xad35,	// (0x0000c817) level_7_battery_ParamLimits

0x2710,	// (0x000041f2) bg_status_flat_pane_g1

0x2718,	// (0x000041fa) bg_status_flat_pane_g2

0x2720,	// (0x00004202) bg_status_flat_pane_g3

0x2728,	// (0x0000420a) bg_status_flat_pane_g4

0x2730,	// (0x00004212) bg_status_flat_pane_g5

0x2738,	// (0x0000421a) bg_status_flat_pane_g6

0x2740,	// (0x00004222) bg_status_flat_pane_g7

0xa310,	// (0x0000bdf2) tabs_3_active_pane_t1_ParamLimits

0xa310,	// (0x0000bdf2) tabs_3_passive_pane_t1_ParamLimits

0xa32a,	// (0x0000be0c) tabs_4_active_pane_t1_ParamLimits

0xa32a,	// (0x0000be0c) tabs_4_1_passive_pane_t1_ParamLimits

0xab97,	// (0x0000c679) tabs_2_active_pane_t1_ParamLimits

0xab97,	// (0x0000c679) tabs_2_passive_pane_t1_ParamLimits

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp4_ParamLimits

0xaba9,	// (0x0000c68b) tabs_2_long_active_pane_t1_ParamLimits

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp4_ParamLimits

0x1de0,	// (0x000038c2) list_single_midp_graphic_pane_t1_ParamLimits

0xe85c,	// (0x0001033e) bg_active_tab_pane_cp5_ParamLimits

0xabbc,	// (0x0000c69e) tabs_3_long_active_pane_t1_ParamLimits

0x10ff,	// (0x00002be1) bg_passive_tab_pane_cp5_ParamLimits

0x1de0,	// (0x000038c2) list_single_midp_graphic_pane_t1

0xb8e2,	// (0x0000d3c4) bg_status_flat_pane_ParamLimits

0x18f4,	// (0x000033d6) indicator_pane_cp2_ParamLimits

0x18f4,	// (0x000033d6) indicator_pane_cp2

0xba78,	// (0x0000d55a) navi_pane_srt_ParamLimits

0xba78,	// (0x0000d55a) navi_pane_srt

0x1a5b,	// (0x0000353d) popup_clock_digital_analogue_window_cp1

0xe943,	// (0x00010425) indicator_pane_t1

0x0bce,	// (0x000026b0) copy_highlight_pane

0x0bce,	// (0x000026b0) cursor_graphics_pane

0x0bce,	// (0x000026b0) graphic_within_text_pane

0x0bce,	// (0x000026b0) link_highlight_pane

0x309b,	// (0x00004b7d) popup_preview_text_window_t5_ParamLimits

0x309b,	// (0x00004b7d) popup_preview_text_window_t5

0x0cff,	// (0x000027e1) cursor_digital_pane

0x0cff,	// (0x000027e1) cursor_primary_pane

0x0d10,	// (0x000027f2) cursor_primary_small_pane

0x0d18,	// (0x000027fa) cursor_secondary_pane

0x0d20,	// (0x00002802) cursor_title_pane

0x0cff,	// (0x000027e1) link_highlight_digital_pane

0x0d07,	// (0x000027e9) link_highlight_primary_pane

0x0d10,	// (0x000027f2) link_highlight_primary_small_pane

0x0d18,	// (0x000027fa) link_highlight_secondary_pane

0x0d20,	// (0x00002802) link_highlight_title_pane

0x0cff,	// (0x000027e1) copy_highlight_digital_pane

0x0cff,	// (0x000027e1) copy_highlight_primary_pane

0x0d10,	// (0x000027f2) copy_highlight_primary_small_pane

0x0d18,	// (0x000027fa) copy_highlight_secondary_pane

0x0d20,	// (0x00002802) copy_highlight_title_pane

0x0d18,	// (0x000027fa) graphic_text_digital_pane

0x27ae,	// (0x00004290) graphic_text_primary_pane

0x27b7,	// (0x00004299) graphic_text_primary_small_pane

0x0d10,	// (0x000027f2) graphic_text_secondary_pane

0x0cff,	// (0x000027e1) graphic_text_title_pane

0xaf7a,	// (0x0000ca5c) cursor_primary_pane_g1

0x27a0,	// (0x00004282) cursor_text_primary_t1

0xbd94,	// (0x0000d876) cursor_primary_small_pane_g1

0x2792,	// (0x00004274) cursor_text_primary_small_t1

0xbd8a,	// (0x0000d86c) cursor_primary_small_pane_g1_copy1

0x277a,	// (0x0000425c) cursor_text_primary_small_t1_copy1

0x2758,	// (0x0000423a) cursor_text_title_t1

0xbd80,	// (0x0000d862) cursor_title_pane_g1

0xaf7a,	// (0x0000ca5c) cursor_digital_pane_g1

0x0d32,	// (0x00002814) cursor_text_digital_t1

0x0d40,	// (0x00002822) link_highlight_primary_pane_g1

0x2701,	// (0x000041e3) link_highlight_primary_pane_t1

0x0d40,	// (0x00002822) link_highlight_primary_small_pane_g1

0x0d48,	// (0x0000282a) link_highlight_primary_small_pane_t1

0x0d57,	// (0x00002839) link_highlight_secondary_pane_g1

0x0d5f,	// (0x00002841) link_highlight_secondary_pane_t1

0x2675,	// (0x00004157) link_highlight_title_pane_g1

0x267d,	// (0x0000415f) link_highlight_title_pane_t1

0x265e,	// (0x00004140) link_highlight_digital_pane_g1

0x2666,	// (0x00004148) link_highlight_digital_pane_t1

0x2526,	// (0x00004008) copy_highlight_primary_pane_g1

0x253d,	// (0x0000401f) copy_highlight_primary_pane_t1

0x2526,	// (0x00004008) copy_highlight_primary_small_pane_g1

0x252e,	// (0x00004010) copy_highlight_primary_small_pane_t1

0x0d6e,	// (0x00002850) copy_highlight_secondary_pane_g1

0x0d76,	// (0x00002858) copy_highlight_secondary_pane_t1

0x250f,	// (0x00003ff1) copy_highlight_title_pane_g1

0x2517,	// (0x00003ff9) copy_highlight_title_pane_t1

0x2526,	// (0x00004008) copy_highlight_digital_pane_g1

0x3bd7,	// (0x000056b9) copy_highlight_digital_pane_t1

0x3b2b,	// (0x0000560d) graphic_text_primary_pane_g1

0x3bbb,	// (0x0000569d) graphic_text_primary_pane_t1

0x3bc9,	// (0x000056ab) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x0001147a) graphic_text_primary_pane_t

0x3b97,	// (0x00005679) graphic_text_primary_small_pane_g1

0x3b9f,	// (0x00005681) graphic_text_primary_small_pane_t1

0x3bad,	// (0x0000568f) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x00011475) graphic_text_primary_small_pane_t

0x3b73,	// (0x00005655) graphic_text_secondary_pane_g1

0x3b7b,	// (0x0000565d) graphic_text_secondary_pane_t1

0x3b89,	// (0x0000566b) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x00011470) graphic_text_secondary_pane_t

0x3b4f,	// (0x00005631) graphic_text_title_pane_g1

0x3b57,	// (0x00005639) graphic_text_title_pane_t1

0x3b65,	// (0x00005647) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x0001146b) graphic_text_title_pane_t

0x3b2b,	// (0x0000560d) graphic_text_digital_pane_g1

0x3b33,	// (0x00005615) graphic_text_digital_pane_t1

0x3b41,	// (0x00005623) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x00011466) graphic_text_digital_pane_t

0xe85c,	// (0x0001033e) navi_icon_pane_srt_ParamLimits

0xe85c,	// (0x0001033e) navi_icon_pane_srt

0xe7a2,	// (0x00010284) navi_midp_pane_srt

0xe7a2,	// (0x00010284) navi_navi_pane_srt

0xe85c,	// (0x0001033e) navi_text_pane_srt_ParamLimits

0xe85c,	// (0x0001033e) navi_text_pane_srt

0x3af6,	// (0x000055d8) navi_navi_icon_text_pane_srt

0x3afe,	// (0x000055e0) navi_navi_pane_srt_g1_ParamLimits

0x3afe,	// (0x000055e0) navi_navi_pane_srt_g1

0x3b10,	// (0x000055f2) navi_navi_pane_srt_g2_ParamLimits

0x3b10,	// (0x000055f2) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x00011461) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x00011461) navi_navi_pane_srt_g

0x3b22,	// (0x00005604) navi_navi_tabs_pane_srt

0x3af6,	// (0x000055d8) navi_navi_text_pane_srt

0x3af6,	// (0x000055d8) navi_navi_volume_pane_srt

0x3ae7,	// (0x000055c9) navi_navi_text_pane_srt_t1

0x3ac2,	// (0x000055a4) navi_navi_volume_pane_srt_g1

0x3aca,	// (0x000055ac) volume_small_pane_srt_ParamLimits

0x3aca,	// (0x000055ac) volume_small_pane_srt

0x0d85,	// (0x00002867) volume_small_pane_srt_g1_ParamLimits

0x0d85,	// (0x00002867) volume_small_pane_srt_g1

0x0d95,	// (0x00002877) volume_small_pane_srt_g2_ParamLimits

0x0d95,	// (0x00002877) volume_small_pane_srt_g2

0x0da6,	// (0x00002888) volume_small_pane_srt_g3_ParamLimits

0x0da6,	// (0x00002888) volume_small_pane_srt_g3

0x0db7,	// (0x00002899) volume_small_pane_srt_g4_ParamLimits

0x0db7,	// (0x00002899) volume_small_pane_srt_g4

0x0dc8,	// (0x000028aa) volume_small_pane_srt_g5_ParamLimits

0x0dc8,	// (0x000028aa) volume_small_pane_srt_g5

0x0dd9,	// (0x000028bb) volume_small_pane_srt_g6_ParamLimits

0x0dd9,	// (0x000028bb) volume_small_pane_srt_g6

0x0dea,	// (0x000028cc) volume_small_pane_srt_g7_ParamLimits

0x0dea,	// (0x000028cc) volume_small_pane_srt_g7

0x0dfb,	// (0x000028dd) volume_small_pane_srt_g8_ParamLimits

0x0dfb,	// (0x000028dd) volume_small_pane_srt_g8

0x0e0c,	// (0x000028ee) volume_small_pane_srt_g9_ParamLimits

0x0e0c,	// (0x000028ee) volume_small_pane_srt_g9

0x0e1d,	// (0x000028ff) volume_small_pane_srt_g10_ParamLimits

0x0e1d,	// (0x000028ff) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00011215) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00011215) volume_small_pane_srt_g

0xebb5,	// (0x00010697) query_popup_data_pane_cp2

0x3ab0,	// (0x00005592) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ab0,	// (0x00005592) navi_navi_icon_text_pane_srt_t1

0x27ae,	// (0x00004290) navi_tabs_2_long_pane_srt

0x27ae,	// (0x00004290) navi_tabs_2_pane_srt

0x27ae,	// (0x00004290) navi_tabs_3_long_pane_srt

0x27ae,	// (0x00004290) navi_tabs_3_pane_srt

0x27ae,	// (0x00004290) navi_tabs_4_pane_srt

0x3a88,	// (0x0000556a) tabs_2_active_pane_srt_ParamLimits

0x3a88,	// (0x0000556a) tabs_2_active_pane_srt

0x3a98,	// (0x0000557a) tabs_2_passive_pane_srt_ParamLimits

0x3a98,	// (0x0000557a) tabs_2_passive_pane_srt

0x1ebf,	// (0x000039a1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1ebf,	// (0x000039a1) bg_passive_tab_pane_cp1_srt

0x3a5c,	// (0x0000553e) bg_passive_tab_pane_g1_cp1_srt

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp1_srt

0x3a65,	// (0x00005547) bg_passive_tab_pane_g3_cp1_srt

0xe844,	// (0x00010326) bg_active_tab_pane_cp1_srt_ParamLimits

0xe844,	// (0x00010326) bg_active_tab_pane_cp1_srt

0x3a6e,	// (0x00005550) tabs_2_active_pane_srt_g1

0xc36e,	// (0x0000de50) tabs_2_active_pane_srt_t1_ParamLimits

0xc36e,	// (0x0000de50) tabs_2_active_pane_srt_t1

0x3a5c,	// (0x0000553e) bg_active_tab_pane_g1_cp1_srt

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp1_srt

0x3a65,	// (0x00005547) bg_active_tab_pane_g3_cp1_srt

0x3a29,	// (0x0000550b) tabs_3_active_pane_srt_ParamLimits

0x3a29,	// (0x0000550b) tabs_3_active_pane_srt

0x3a3a,	// (0x0000551c) tabs_3_passive_pane_cp_srt_ParamLimits

0x3a3a,	// (0x0000551c) tabs_3_passive_pane_cp_srt

0x3a4b,	// (0x0000552d) tabs_3_passive_pane_srt_ParamLimits

0x3a4b,	// (0x0000552d) tabs_3_passive_pane_srt

0x1ebf,	// (0x000039a1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1ebf,	// (0x000039a1) bg_passive_tab_pane_cp2_srt

0x0e2e,	// (0x00002910) bg_passive_tab_pane_g1_cp2_srt

0x06ca,	// (0x000021ac) bg_passive_tab_pane_g2_cp2_srt

0x0e37,	// (0x00002919) bg_passive_tab_pane_g3_cp2_srt

0xe844,	// (0x00010326) bg_active_tab_pane_cp2_srt_ParamLimits

0xe844,	// (0x00010326) bg_active_tab_pane_cp2_srt

0x3a0f,	// (0x000054f1) tabs_3_active_pane_srt_g1

0xc358,	// (0x0000de3a) tabs_3_active_pane_srt_t1_ParamLimits

0xc358,	// (0x0000de3a) tabs_3_active_pane_srt_t1

0x0e2e,	// (0x00002910) bg_active_tab_pane_g1_cp2_srt

0x06ca,	// (0x000021ac) bg_active_tab_pane_g2_cp2_srt

0x0e37,	// (0x00002919) bg_active_tab_pane_g3_cp2_srt

0x39c7,	// (0x000054a9) tabs_4_active_pane_srt_ParamLimits

0x39c7,	// (0x000054a9) tabs_4_active_pane_srt

0x39d9,	// (0x000054bb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x39d9,	// (0x000054bb) tabs_4_passive_pane_cp2_srt

0x10bf,	// (0x00002ba1) aid_size_cell_toolbar

0x3555,	// (0x00005037) main_idle_act_pane_ParamLimits

0x1308,	// (0x00002dea) popup_large_graphic_colour_window_ParamLimits

0xb7a4,	// (0x0000d286) popup_toolbar_window_ParamLimits

0xb7a4,	// (0x0000d286) popup_toolbar_window

0x3773,	// (0x00005255) list_single_graphic_2heading_pane_ParamLimits

0x3773,	// (0x00005255) list_single_graphic_2heading_pane

0xf50f,	// (0x00010ff1) aid_size_cell_apps_grid_lsc_pane

0xf521,	// (0x00011003) aid_size_cell_apps_grid_prt_pane

0x10ff,	// (0x00002be1) bg_wml_button_pane_cp1_ParamLimits

0x10ff,	// (0x00002be1) bg_wml_button_pane_cp1

0xbd22,	// (0x0000d804) form_midp_field_text_pane_t1_ParamLimits

0x1ebf,	// (0x000039a1) input_focus_pane_cp050_ParamLimits

0x2195,	// (0x00003c77) list_midp_form_text_pane_ParamLimits

0x2147,	// (0x00003c29) input_focus_pane_cp051_ParamLimits

0x215b,	// (0x00003c3d) list_midp_choice_pane_ParamLimits

0xbcbb,	// (0x0000d79d) list_single_2graphic_pane_cp3_ParamLimits

0xbcbb,	// (0x0000d79d) list_single_2graphic_pane_cp3

0xbcce,	// (0x0000d7b0) list_single_midp_graphic_pane_ParamLimits

0xbcce,	// (0x0000d7b0) list_single_midp_graphic_pane

0x1bb0,	// (0x00003692) list_single_graphic_2heading_pane_g1_ParamLimits

0x1bb0,	// (0x00003692) list_single_graphic_2heading_pane_g1

0x1bbc,	// (0x0000369e) list_single_graphic_2heading_pane_g4_ParamLimits

0x1bbc,	// (0x0000369e) list_single_graphic_2heading_pane_g4

0x1bc8,	// (0x000036aa) list_single_graphic_2heading_pane_g5_ParamLimits

0x1bc8,	// (0x000036aa) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00011268) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00011268) list_single_graphic_2heading_pane_g

0x1bd4,	// (0x000036b6) list_single_graphic_2heading_pane_t1_ParamLimits

0x1bd4,	// (0x000036b6) list_single_graphic_2heading_pane_t1

0x1be8,	// (0x000036ca) list_single_graphic_2heading_pane_t2_ParamLimits

0x1be8,	// (0x000036ca) list_single_graphic_2heading_pane_t2

0x1c04,	// (0x000036e6) list_single_graphic_2heading_pane_t3_ParamLimits

0x1c04,	// (0x000036e6) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001126f) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001126f) list_single_graphic_2heading_pane_t

0x1c1c,	// (0x000036fe) bg_popup_sub_pane_cp2

0x1c46,	// (0x00003728) grid_toobar_pane

0x1c82,	// (0x00003764) cell_toolbar_pane_ParamLimits

0x1c82,	// (0x00003764) cell_toolbar_pane

0x1cc8,	// (0x000037aa) cell_toolbar_pane_g1_ParamLimits

0x1cc8,	// (0x000037aa) cell_toolbar_pane_g1

0x1cdc,	// (0x000037be) cell_toolbar_pane_g2_ParamLimits

0x1cdc,	// (0x000037be) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x00011276) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x00011276) cell_toolbar_pane_g

0x1cfe,	// (0x000037e0) grid_highlight_pane_cp2_ParamLimits

0x1cfe,	// (0x000037e0) grid_highlight_pane_cp2

0x1d18,	// (0x000037fa) toolbar_button_pane

0x1d24,	// (0x00003806) toolbar_button_pane_g1

0x1d2c,	// (0x0000380e) toolbar_button_pane_g2

0x1d34,	// (0x00003816) toolbar_button_pane_g3

0x1d3c,	// (0x0000381e) toolbar_button_pane_g4

0x1d44,	// (0x00003826) toolbar_button_pane_g5

0x1d4c,	// (0x0000382e) toolbar_button_pane_g6

0x1d54,	// (0x00003836) toolbar_button_pane_g7

0x1d5c,	// (0x0000383e) toolbar_button_pane_g8

0x1d64,	// (0x00003846) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x0001127b) toolbar_button_pane_g

0x1d74,	// (0x00003856) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1d74,	// (0x00003856) list_single_2graphic_pane_g1_cp3

0xbc1d,	// (0x0000d6ff) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc1d,	// (0x0000d6ff) list_single_2graphic_pane_g2_cp3

0x09ed,	// (0x000024cf) list_single_2graphic_pane_g3_cp3

0x1d91,	// (0x00003873) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1d91,	// (0x00003873) list_single_2graphic_pane_g4_cp3

0x1d9d,	// (0x0000387f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1d9d,	// (0x0000387f) list_single_2graphic_pane_t1_cp3

0x09e1,	// (0x000024c3) list_single_midp_graphic_pane_g2_ParamLimits

0x09e1,	// (0x000024c3) list_single_midp_graphic_pane_g2

0x10c7,	// (0x00002ba9) aid_zoom_text_primary

0x10cf,	// (0x00002bb1) aid_zoom_text_secondary

0x0ee8,	// (0x000029ca) status_small_pane_g7_ParamLimits

0x0ee8,	// (0x000029ca) status_small_pane_g7

0x0f0b,	// (0x000029ed) status_small_pane_t1_ParamLimits

0xa24c,	// (0x0000bd2e) title_pane_g2

0x0003,

0xf529,	// (0x0001100b) title_pane_g

0xa4ec,	// (0x0000bfce) aid_size_cell_colour_1_pane_ParamLimits

0xa4ec,	// (0x0000bfce) aid_size_cell_colour_1_pane

0xa500,	// (0x0000bfe2) aid_size_cell_colour_2_pane_ParamLimits

0xa500,	// (0x0000bfe2) aid_size_cell_colour_2_pane

0xa514,	// (0x0000bff6) aid_size_cell_colour_3_pane_ParamLimits

0xa514,	// (0x0000bff6) aid_size_cell_colour_3_pane

0xa528,	// (0x0000c00a) aid_size_cell_colour_4_pane_ParamLimits

0xa528,	// (0x0000c00a) aid_size_cell_colour_4_pane

0xf381,	// (0x00010e63) title_pane_stacon_g1_ParamLimits

0xf381,	// (0x00010e63) title_pane_stacon_g1

0x2594,	// (0x00004076) popup_note_wait_window_g3_ParamLimits

0x2594,	// (0x00004076) popup_note_wait_window_g3

0x260b,	// (0x000040ed) popup_note_wait_window_t5_ParamLimits

0x260b,	// (0x000040ed) popup_note_wait_window_t5

0xe7a2,	// (0x00010284) main_feb_china_hwr_fs_writing_pane

0xb135,	// (0x0000cc17) popup_feb_china_hwr_fs_window_ParamLimits

0xb135,	// (0x0000cc17) popup_feb_china_hwr_fs_window

0xbc2e,	// (0x0000d710) aid_size_cell_hwr_fs_ParamLimits

0xbc2e,	// (0x0000d710) aid_size_cell_hwr_fs

0x1ebf,	// (0x000039a1) bg_popup_sub_pane_cp3_ParamLimits

0x1ebf,	// (0x000039a1) bg_popup_sub_pane_cp3

0xbc43,	// (0x0000d725) grid_hwr_fs_pane_ParamLimits

0xbc43,	// (0x0000d725) grid_hwr_fs_pane

0x1ee3,	// (0x000039c5) linegrid_hwr_fs_pane_ParamLimits

0x1ee3,	// (0x000039c5) linegrid_hwr_fs_pane

0xbc5b,	// (0x0000d73d) cell_hwr_fs_pane_ParamLimits

0xbc5b,	// (0x0000d73d) cell_hwr_fs_pane

0x1f17,	// (0x000039f9) linegrid_hwr_fs_pane_g1_ParamLimits

0x1f17,	// (0x000039f9) linegrid_hwr_fs_pane_g1

0xbc81,	// (0x0000d763) linegrid_hwr_fs_pane_g2_ParamLimits

0xbc81,	// (0x0000d763) linegrid_hwr_fs_pane_g2

0x1f35,	// (0x00003a17) linegrid_hwr_fs_pane_g3_ParamLimits

0x1f35,	// (0x00003a17) linegrid_hwr_fs_pane_g3

0x1f41,	// (0x00003a23) linegrid_hwr_fs_pane_g4_ParamLimits

0x1f41,	// (0x00003a23) linegrid_hwr_fs_pane_g4

0x1f5f,	// (0x00003a41) linegrid_hwr_fs_pane_g5_ParamLimits

0x1f5f,	// (0x00003a41) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x000112a1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x000112a1) linegrid_hwr_fs_pane_g

0x1f75,	// (0x00003a57) cell_hwr_fs_pane_g1_ParamLimits

0x1f75,	// (0x00003a57) cell_hwr_fs_pane_g1

0x1ae9,	// (0x000035cb) cell_hwr_fs_pane_g2_ParamLimits

0x1ae9,	// (0x000035cb) cell_hwr_fs_pane_g2

0xbc93,	// (0x0000d775) cell_hwr_fs_pane_g3_ParamLimits

0xbc93,	// (0x0000d775) cell_hwr_fs_pane_g3

0xbca0,	// (0x0000d782) cell_hwr_fs_pane_g4_ParamLimits

0xbca0,	// (0x0000d782) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x000112ac) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x000112ac) cell_hwr_fs_pane_g

0xbcad,	// (0x0000d78f) cell_hwr_fs_pane_t1

0xe7a2,	// (0x00010284) grid_highlight_pane_cp6

0xe7a2,	// (0x00010284) main_idle_act2_pane

0xf189,	// (0x00010c6b) aid_inside_area_popup_secondary

0xbef8,	// (0x0000d9da) aid_inside_area_window_primary_ParamLimits

0xbef8,	// (0x0000d9da) aid_inside_area_window_primary

0x3be6,	// (0x000056c8) ai2_news_ticker_pane

0x3bee,	// (0x000056d0) aid_size_cell_ai1_link_ParamLimits

0x3bee,	// (0x000056d0) aid_size_cell_ai1_link

0x3c08,	// (0x000056ea) popup_ai2_data_window_ParamLimits

0x3c08,	// (0x000056ea) popup_ai2_data_window

0x3c26,	// (0x00005708) popup_ai2_link_window_ParamLimits

0x3c26,	// (0x00005708) popup_ai2_link_window

0x1ebf,	// (0x000039a1) bg_popup_sub_pane_cp4_ParamLimits

0x1ebf,	// (0x000039a1) bg_popup_sub_pane_cp4

0x3c3c,	// (0x0000571e) grid_ai2_link_pane_ParamLimits

0x3c3c,	// (0x0000571e) grid_ai2_link_pane

0x3c53,	// (0x00005735) popup_ai2_link_window_g1_ParamLimits

0x3c53,	// (0x00005735) popup_ai2_link_window_g1

0x3c5f,	// (0x00005741) popup_ai2_link_window_g2_ParamLimits

0x3c5f,	// (0x00005741) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x0001147f) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x0001147f) popup_ai2_link_window_g

0x3c70,	// (0x00005752) ai2_mp_button_pane

0x3c78,	// (0x0000575a) ai2_mp_volume_pane

0x2147,	// (0x00003c29) bg_popup_sub_pane_cp5_ParamLimits

0x2147,	// (0x00003c29) bg_popup_sub_pane_cp5

0x3c80,	// (0x00005762) heading_ai2_gene_pane_ParamLimits

0x3c80,	// (0x00005762) heading_ai2_gene_pane

0x3c8c,	// (0x0000576e) list_ai2_gene_pane_ParamLimits

0x3c8c,	// (0x0000576e) list_ai2_gene_pane

0x3cd4,	// (0x000057b6) cell_ai2_link_pane_ParamLimits

0x3cd4,	// (0x000057b6) cell_ai2_link_pane

0x3cea,	// (0x000057cc) cell_ai2_link_pane_g1

0xe7a2,	// (0x00010284) grid_highlight_pane_cp7

0x3dbd,	// (0x0000589f) ai2_mp_volume_pane_g1

0x3dc5,	// (0x000058a7) ai2_mp_volume_pane_g2

0x3d32,	// (0x00005814) list_ai2_gene_pane_t1

0x3dcd,	// (0x000058af) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x00011498) ai2_mp_volume_pane_g

0x3dd5,	// (0x000058b7) volume_small_pane_cp3

0x3dde,	// (0x000058c0) aid_size_cell_ai2_button

0x3de6,	// (0x000058c8) grid_ai2_button_pane

0x3def,	// (0x000058d1) cell_ai2_button_pane_ParamLimits

0x3def,	// (0x000058d1) cell_ai2_button_pane

0xe629,	// (0x0001010b) cell_ai2_button_pane_g1

0xe7a2,	// (0x00010284) grid_highlight_pane_cp8

0x3d7d,	// (0x0000585f) ai2_gene_pane_t1_ParamLimits

0x3d7d,	// (0x0000585f) ai2_gene_pane_t1

0xb0b1,	// (0x0000cb93) aid_height_parent_landscape

0xc0b0,	// (0x0000db92) aid_height_set_list

0x3555,	// (0x00005037) aid_size_parent

0x394d,	// (0x0000542f) aid_size_cell_graphic_pane_ParamLimits

0x3c9c,	// (0x0000577e) popup_ai2_data_window_g1_ParamLimits

0x3c9c,	// (0x0000577e) popup_ai2_data_window_g1

0x3ca8,	// (0x0000578a) ai2_news_ticker_pane_g1

0x3cb0,	// (0x00005792) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x00011484) ai2_news_ticker_pane_g

0x3cb8,	// (0x0000579a) ai2_news_ticker_pane_t1

0x3cc6,	// (0x000057a8) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x00011489) ai2_news_ticker_pane_t

0x3cf3,	// (0x000057d5) heading_ai2_gene_pane_g1

0x3cfb,	// (0x000057dd) heading_ai2_gene_pane_t1_ParamLimits

0x3cfb,	// (0x000057dd) heading_ai2_gene_pane_t1

0x3d10,	// (0x000057f2) list_highlight_pane_cp6

0x3d18,	// (0x000057fa) ai2_gene_pane_ParamLimits

0x3d18,	// (0x000057fa) ai2_gene_pane

0x3d40,	// (0x00005822) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x0001148e) list_ai2_gene_pane_t

0x3d4e,	// (0x00005830) list_highlight_pane_cp8_ParamLimits

0x3d4e,	// (0x00005830) list_highlight_pane_cp8

0x3d5f,	// (0x00005841) ai2_gene_pane_g1_ParamLimits

0x3d5f,	// (0x00005841) ai2_gene_pane_g1

0x3d71,	// (0x00005853) ai2_gene_pane_g2_ParamLimits

0x3d71,	// (0x00005853) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x00011493) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x00011493) ai2_gene_pane_g

0xeed7,	// (0x000109b9) scroll_pane_cp12

0xb070,	// (0x0000cb52) control_pane_t3_ParamLimits

0xb070,	// (0x0000cb52) control_pane_t3

0x0efc,	// (0x000029de) status_small_pane_g8_ParamLimits

0x0efc,	// (0x000029de) status_small_pane_g8

0xb1d7,	// (0x0000ccb9) popup_find_window_ParamLimits

0xb48e,	// (0x0000cf70) popup_note_image_window_ParamLimits

0x1bb0,	// (0x00003692) list_double2_graphic_pane_vc_g1_ParamLimits

0x1bb0,	// (0x00003692) list_double2_graphic_pane_vc_g1

0x1bbc,	// (0x0000369e) list_double2_graphic_pane_vc_g2_ParamLimits

0x1bbc,	// (0x0000369e) list_double2_graphic_pane_vc_g2

0x1bc8,	// (0x000036aa) list_double2_graphic_pane_vc_g3_ParamLimits

0x1bc8,	// (0x000036aa) list_double2_graphic_pane_vc_g3

0x0002,

0xf786,	// (0x00011268) list_double2_graphic_pane_vc_g_ParamLimits

0xf786,	// (0x00011268) list_double2_graphic_pane_vc_g

0x1cb2,	// (0x00003794) list_double2_graphic_pane_vc_t1_ParamLimits

0x1cb2,	// (0x00003794) list_double2_graphic_pane_vc_t1

0x1bbc,	// (0x0000369e) list_single_heading_pane_vc_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_single_heading_pane_vc_g1

0x1bc8,	// (0x000036aa) list_single_heading_pane_vc_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011085) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011085) list_single_heading_pane_vc_g

0x1db8,	// (0x0000389a) list_single_heading_pane_vc_t1_ParamLimits

0x1db8,	// (0x0000389a) list_single_heading_pane_vc_t1

0x1dce,	// (0x000038b0) list_single_heading_pane_vc_t2_ParamLimits

0x1dce,	// (0x000038b0) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x00011290) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x00011290) list_single_heading_pane_vc_t

0x1df6,	// (0x000038d8) list_setting_number_pane_vc_g1_ParamLimits

0x1df6,	// (0x000038d8) list_setting_number_pane_vc_g1

0x1e02,	// (0x000038e4) list_setting_number_pane_vc_g2_ParamLimits

0x1e02,	// (0x000038e4) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x00011295) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x00011295) list_setting_number_pane_vc_g

0x1e0e,	// (0x000038f0) list_setting_number_pane_vc_t1_ParamLimits

0x1e0e,	// (0x000038f0) list_setting_number_pane_vc_t1

0x1e22,	// (0x00003904) list_setting_number_pane_vc_t2_ParamLimits

0x1e22,	// (0x00003904) list_setting_number_pane_vc_t2

0x1e3e,	// (0x00003920) list_setting_number_pane_vc_t3_ParamLimits

0x1e3e,	// (0x00003920) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x0001129a) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x0001129a) list_setting_number_pane_vc_t

0x1e6c,	// (0x0000394e) set_value_pane_vc_ParamLimits

0x1e6c,	// (0x0000394e) set_value_pane_vc

0x3773,	// (0x00005255) list_double2_graphic_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double2_graphic_pane_vc

0x3773,	// (0x00005255) list_double2_large_graphic_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double2_large_graphic_pane_vc

0x3773,	// (0x00005255) list_double2_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double2_pane_vc

0x3773,	// (0x00005255) list_double_graphic_heading_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double_graphic_heading_pane_vc

0x3773,	// (0x00005255) list_double_graphic_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double_graphic_pane_vc

0x3773,	// (0x00005255) list_double_heading_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double_heading_pane_vc

0x3787,	// (0x00005269) list_double_large_graphic_pane_vc_ParamLimits

0x3787,	// (0x00005269) list_double_large_graphic_pane_vc

0x3773,	// (0x00005255) list_double_number_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double_number_pane_vc

0x3773,	// (0x00005255) list_double_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double_pane_vc

0x3773,	// (0x00005255) list_double_time_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_double_time_pane_vc

0x3773,	// (0x00005255) list_setting_number_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_setting_number_pane_vc

0x3773,	// (0x00005255) list_setting_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_setting_pane_vc

0x3773,	// (0x00005255) list_single_graphic_heading_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_single_graphic_heading_pane_vc

0x3773,	// (0x00005255) list_single_heading_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_single_heading_pane_vc

0x3773,	// (0x00005255) list_single_number_heading_pane_vc_ParamLimits

0x3773,	// (0x00005255) list_single_number_heading_pane_vc

0x1bb0,	// (0x00003692) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1bb0,	// (0x00003692) list_double_graphic_heading_pane_vc_g1

0x0b3f,	// (0x00002621) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0b3f,	// (0x00002621) list_double_graphic_heading_pane_vc_g2

0x3e22,	// (0x00005904) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3e22,	// (0x00005904) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bd,	// (0x0001149f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bd,	// (0x0001149f) list_double_graphic_heading_pane_vc_g

0x3e2e,	// (0x00005910) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3e2e,	// (0x00005910) list_double_graphic_heading_pane_vc_t1

0x3e44,	// (0x00005926) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3e44,	// (0x00005926) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x000114a6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x000114a6) list_double_graphic_heading_pane_vc_t

0x1df6,	// (0x000038d8) list_setting_pane_vc_g1_ParamLimits

0x1df6,	// (0x000038d8) list_setting_pane_vc_g1

0x1e02,	// (0x000038e4) list_setting_pane_vc_g2_ParamLimits

0x1e02,	// (0x000038e4) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x00011295) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x00011295) list_setting_pane_vc_g

0x4095,	// (0x00005b77) list_setting_pane_vc_t1_ParamLimits

0x4095,	// (0x00005b77) list_setting_pane_vc_t1

0x40b1,	// (0x00005b93) list_setting_pane_vc_t2_ParamLimits

0x40b1,	// (0x00005b93) list_setting_pane_vc_t2

0x0001,

0xfa07,	// (0x000114e9) list_setting_pane_vc_t_ParamLimits

0xfa07,	// (0x000114e9) list_setting_pane_vc_t

0x1e6c,	// (0x0000394e) set_value_pane_cp_vc_ParamLimits

0x1e6c,	// (0x0000394e) set_value_pane_cp_vc

0x1bbc,	// (0x0000369e) list_single_number_heading_pane_vc_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_single_number_heading_pane_vc_g1

0x1bc8,	// (0x000036aa) list_single_number_heading_pane_vc_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011085) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011085) list_single_number_heading_pane_vc_g

0x40cd,	// (0x00005baf) list_single_number_heading_pane_vc_t1_ParamLimits

0x40cd,	// (0x00005baf) list_single_number_heading_pane_vc_t1

0x40e3,	// (0x00005bc5) list_single_number_heading_pane_vc_t2_ParamLimits

0x40e3,	// (0x00005bc5) list_single_number_heading_pane_vc_t2

0x40f9,	// (0x00005bdb) list_single_number_heading_pane_vc_t3_ParamLimits

0x40f9,	// (0x00005bdb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0c,	// (0x000114ee) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x000114ee) list_single_number_heading_pane_vc_t

0x1bb0,	// (0x00003692) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1bb0,	// (0x00003692) list_single_graphic_heading_pane_vc_g1

0x1bbc,	// (0x0000369e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1bbc,	// (0x0000369e) list_single_graphic_heading_pane_vc_g4

0x1bc8,	// (0x000036aa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1bc8,	// (0x000036aa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf786,	// (0x00011268) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf786,	// (0x00011268) list_single_graphic_heading_pane_vc_g

0x40cd,	// (0x00005baf) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x40cd,	// (0x00005baf) list_single_graphic_heading_pane_vc_t1

0x410b,	// (0x00005bed) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x410b,	// (0x00005bed) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa13,	// (0x000114f5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x000114f5) list_single_graphic_heading_pane_vc_t

0x1bbc,	// (0x0000369e) list_double2_pane_vc_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_double2_pane_vc_g1

0x1bc8,	// (0x000036aa) list_double2_pane_vc_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011085) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011085) list_double2_pane_vc_g

0x411d,	// (0x00005bff) list_double2_pane_vc_t1_ParamLimits

0x411d,	// (0x00005bff) list_double2_pane_vc_t1

0x4133,	// (0x00005c15) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4133,	// (0x00005c15) list_double2_large_graphic_pane_vc_g1

0x1bbc,	// (0x0000369e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1bbc,	// (0x0000369e) list_double2_large_graphic_pane_vc_g2

0x1bc8,	// (0x000036aa) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1bc8,	// (0x000036aa) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000110a2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000110a2) list_double2_large_graphic_pane_vc_g

0x413f,	// (0x00005c21) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x413f,	// (0x00005c21) list_double2_large_graphic_pane_vc_t1

0x4155,	// (0x00005c37) list_double_time_pane_vc_g1_ParamLimits

0x4155,	// (0x00005c37) list_double_time_pane_vc_g1

0x4161,	// (0x00005c43) list_double_time_pane_vc_g2_ParamLimits

0x4161,	// (0x00005c43) list_double_time_pane_vc_g2

0x0001,

0xfa18,	// (0x000114fa) list_double_time_pane_vc_g_ParamLimits

0xfa18,	// (0x000114fa) list_double_time_pane_vc_g

0x416d,	// (0x00005c4f) list_double_time_pane_vc_t1_ParamLimits

0x416d,	// (0x00005c4f) list_double_time_pane_vc_t1

0x419d,	// (0x00005c7f) list_double_time_pane_vc_t2_ParamLimits

0x419d,	// (0x00005c7f) list_double_time_pane_vc_t2

0x41c6,	// (0x00005ca8) list_double_time_pane_vc_t3_ParamLimits

0x41c6,	// (0x00005ca8) list_double_time_pane_vc_t3

0x41d8,	// (0x00005cba) list_double_time_pane_vc_t4_ParamLimits

0x41d8,	// (0x00005cba) list_double_time_pane_vc_t4

0x0003,

0xfa1d,	// (0x000114ff) list_double_time_pane_vc_t_ParamLimits

0xfa1d,	// (0x000114ff) list_double_time_pane_vc_t

0x1bbc,	// (0x0000369e) list_double_pane_vc_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_double_pane_vc_g1

0x1bc8,	// (0x000036aa) list_double_pane_vc_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011085) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011085) list_double_pane_vc_g

0x41ec,	// (0x00005cce) list_double_pane_vc_t1_ParamLimits

0x41ec,	// (0x00005cce) list_double_pane_vc_t1

0x4200,	// (0x00005ce2) list_double_pane_vc_t2_ParamLimits

0x4200,	// (0x00005ce2) list_double_pane_vc_t2

0x0001,

0xfa26,	// (0x00011508) list_double_pane_vc_t_ParamLimits

0xfa26,	// (0x00011508) list_double_pane_vc_t

0x1bbc,	// (0x0000369e) list_double_number_pane_vc_g1_ParamLimits

0x1bbc,	// (0x0000369e) list_double_number_pane_vc_g1

0x1bc8,	// (0x000036aa) list_double_number_pane_vc_g2_ParamLimits

0x1bc8,	// (0x000036aa) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011085) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011085) list_double_number_pane_vc_g

0x4216,	// (0x00005cf8) list_double_number_pane_vc_t1_ParamLimits

0x4216,	// (0x00005cf8) list_double_number_pane_vc_t1

0x4228,	// (0x00005d0a) list_double_number_pane_vc_t2_ParamLimits

0x4228,	// (0x00005d0a) list_double_number_pane_vc_t2

0x4200,	// (0x00005ce2) list_double_number_pane_vc_t3_ParamLimits

0x4200,	// (0x00005ce2) list_double_number_pane_vc_t3

0x0002,

0xfa2b,	// (0x0001150d) list_double_number_pane_vc_t_ParamLimits

0xfa2b,	// (0x0001150d) list_double_number_pane_vc_t

0x423c,	// (0x00005d1e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x423c,	// (0x00005d1e) list_double_large_graphic_pane_vc_g1

0x425e,	// (0x00005d40) list_double_large_graphic_pane_vc_g2_ParamLimits

0x425e,	// (0x00005d40) list_double_large_graphic_pane_vc_g2

0x4272,	// (0x00005d54) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4272,	// (0x00005d54) list_double_large_graphic_pane_vc_g3

0x4281,	// (0x00005d63) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4281,	// (0x00005d63) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa32,	// (0x00011514) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x00011514) list_double_large_graphic_pane_vc_g

0x428d,	// (0x00005d6f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x428d,	// (0x00005d6f) list_double_large_graphic_pane_vc_t1

0x42a9,	// (0x00005d8b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x42a9,	// (0x00005d8b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x0001151d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001151d) list_double_large_graphic_pane_vc_t

0x0b3f,	// (0x00002621) list_double_heading_pane_vc_g1_ParamLimits

0x0b3f,	// (0x00002621) list_double_heading_pane_vc_g1

0x3e22,	// (0x00005904) list_double_heading_pane_vc_g2_ParamLimits

0x3e22,	// (0x00005904) list_double_heading_pane_vc_g2

0x0001,

0xfa40,	// (0x00011522) list_double_heading_pane_vc_g_ParamLimits

0xfa40,	// (0x00011522) list_double_heading_pane_vc_g

0x42c9,	// (0x00005dab) list_double_heading_pane_vc_t1_ParamLimits

0x42c9,	// (0x00005dab) list_double_heading_pane_vc_t1

0x42db,	// (0x00005dbd) list_double_heading_pane_vc_t2_ParamLimits

0x42db,	// (0x00005dbd) list_double_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x00011527) list_double_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00011527) list_double_heading_pane_vc_t

0x42f3,	// (0x00005dd5) list_double_graphic_pane_vc_g1_ParamLimits

0x42f3,	// (0x00005dd5) list_double_graphic_pane_vc_g1

0x42ff,	// (0x00005de1) list_double_graphic_pane_vc_g2_ParamLimits

0x42ff,	// (0x00005de1) list_double_graphic_pane_vc_g2

0x1bbc,	// (0x0000369e) list_double_graphic_pane_vc_g3_ParamLimits

0x1bbc,	// (0x0000369e) list_double_graphic_pane_vc_g3

0x0003,

0xfa4a,	// (0x0001152c) list_double_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0001152c) list_double_graphic_pane_vc_g

0x431c,	// (0x00005dfe) list_double_graphic_pane_vc_t1_ParamLimits

0x431c,	// (0x00005dfe) list_double_graphic_pane_vc_t1

0x4346,	// (0x00005e28) list_double_graphic_pane_vc_t2_ParamLimits

0x4346,	// (0x00005e28) list_double_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x00011535) list_double_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x00011535) list_double_graphic_pane_vc_t

0xe64b,	// (0x0001012d) aid_size_cell_fastswap

0xa025,	// (0x0000bb07) aid_size_cell_touch_ParamLimits

0xa025,	// (0x0000bb07) aid_size_cell_touch

0xe7d2,	// (0x000102b4) popup_fast_swap_wide_window_ParamLimits

0xe7d2,	// (0x000102b4) popup_fast_swap_wide_window

0xa1e3,	// (0x0000bcc5) touch_pane_ParamLimits

0xa1e3,	// (0x0000bcc5) touch_pane

0xef68,	// (0x00010a4a) button_value_adjust_pane_cp2

0xef70,	// (0x00010a52) button_value_adjust_pane_cp4

0xef78,	// (0x00010a5a) form_field_data_pane_cp2

0xaa1c,	// (0x0000c4fe) form_field_data_wide_pane_cp2

0x00da,	// (0x00001bbc) bg_scroll_pane_ParamLimits

0x00f9,	// (0x00001bdb) scroll_handle_pane_ParamLimits

0x010d,	// (0x00001bef) scroll_sc2_down_pane_ParamLimits

0x010d,	// (0x00001bef) scroll_sc2_down_pane

0x0134,	// (0x00001c16) scroll_sc2_up_pane_ParamLimits

0x0134,	// (0x00001c16) scroll_sc2_up_pane

0xc4b0,	// (0x0000df92) grid_wheel_folder_pane_g1_ParamLimits

0xc4b0,	// (0x0000df92) grid_wheel_folder_pane_g1

0x0811,	// (0x000022f3) clock_nsta_pane_cp2_ParamLimits

0x0811,	// (0x000022f3) clock_nsta_pane_cp2

0xaec4,	// (0x0000c9a6) listscroll_midp_pane_ParamLimits

0xaed0,	// (0x0000c9b2) midp_canvas_pane

0x10ad,	// (0x00002b8f) nsta_clock_indic_pane

0x110b,	// (0x00002bed) listscroll_form_pane_vc

0x112f,	// (0x00002c11) listscroll_set_pane_vc_ParamLimits

0x112f,	// (0x00002c11) listscroll_set_pane_vc

0xb90a,	// (0x0000d3ec) clock_nsta_pane

0xb934,	// (0x0000d416) indicator_nsta_pane

0x1c1c,	// (0x000036fe) bg_popup_sub_pane_cp2_ParamLimits

0x1c30,	// (0x00003712) find_pane_cp2_ParamLimits

0x1c30,	// (0x00003712) find_pane_cp2

0x1c46,	// (0x00003728) grid_toobar_pane_ParamLimits

0x1e7e,	// (0x00003960) list_form_gen_pane_vc_ParamLimits

0x1e7e,	// (0x00003960) list_form_gen_pane_vc

0x1e94,	// (0x00003976) scroll_pane_cp8_vc_ParamLimits

0x1e94,	// (0x00003976) scroll_pane_cp8_vc

0x1fb3,	// (0x00003a95) data_form_wide_pane_vc_ParamLimits

0x1fb3,	// (0x00003a95) data_form_wide_pane_vc

0x1fbf,	// (0x00003aa1) form_field_data_wide_pane_vc_g1

0x1fc7,	// (0x00003aa9) form_field_data_wide_pane_vc_t1_ParamLimits

0x1fc7,	// (0x00003aa9) form_field_data_wide_pane_vc_t1

0xefd4,	// (0x00010ab6) input_focus_pane_cp6_vc_ParamLimits

0xefd4,	// (0x00010ab6) input_focus_pane_cp6_vc

0x2312,	// (0x00003df4) list_midp_pane_ParamLimits

0x39bb,	// (0x0000549d) scroll_pane_cp16_ParamLimits

0x39bb,	// (0x0000549d) scroll_pane_cp16

0x2368,	// (0x00003e4a) button_value_adjust_pane_ParamLimits

0x2368,	// (0x00003e4a) button_value_adjust_pane

0xc0c1,	// (0x0000dba3) button_value_adjust_pane_cp6_ParamLimits

0xc0c1,	// (0x0000dba3) button_value_adjust_pane_cp6

0xc1fd,	// (0x0000dcdf) settings_code_pane_cp_ParamLimits

0xc1fd,	// (0x0000dcdf) settings_code_pane_cp

0xe629,	// (0x0001010b) cell_touch_pane_g1

0xe629,	// (0x0001010b) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x000111bb) cell_touch_pane_g

0xc384,	// (0x0000de66) cell_touch_pane_cp_ParamLimits

0xc384,	// (0x0000de66) cell_touch_pane_cp

0xc3a0,	// (0x0000de82) cell_touch_pane_ParamLimits

0xc3a0,	// (0x0000de82) cell_touch_pane

0xe629,	// (0x0001010b) scroll_sc2_down_pane_g1

0xe629,	// (0x0001010b) scroll_sc2_up_pane_g1

0xe7a2,	// (0x00010284) bg_set_opt_pane_cp4_vc

0x3e62,	// (0x00005944) list_set_graphic_pane_vc_g1_ParamLimits

0x3e62,	// (0x00005944) list_set_graphic_pane_vc_g1

0x3e6e,	// (0x00005950) list_set_graphic_pane_vc_g2_ParamLimits

0x3e6e,	// (0x00005950) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x000114ab) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x000114ab) list_set_graphic_pane_vc_g

0x3e7a,	// (0x0000595c) text_primary_small_cp13_vc_ParamLimits

0x3e7a,	// (0x0000595c) text_primary_small_cp13_vc

0x3e92,	// (0x00005974) list_set_graphic_pane_vc_ParamLimits

0x3e92,	// (0x00005974) list_set_graphic_pane_vc

0xe7a2,	// (0x00010284) input_focus_pane_cp2_vc

0xe629,	// (0x0001010b) setting_code_pane_vc_g1

0xe8fc,	// (0x000103de) setting_code_pane_vc_t1

0x3ea5,	// (0x00005987) set_text_pane_vc_t1_ParamLimits

0x3ea5,	// (0x00005987) set_text_pane_vc_t1

0xe7a2,	// (0x00010284) input_focus_pane_cp1_vc

0x3ec6,	// (0x000059a8) list_set_text_pane_vc

0xe629,	// (0x0001010b) setting_text_pane_vc_g1

0xe7a2,	// (0x00010284) bg_set_opt_pane_cp2_vc

0xe8cb,	// (0x000103ad) setting_slider_graphic_pane_vc_g1

0x3ed0,	// (0x000059b2) setting_slider_graphic_pane_vc_t1

0x3ee2,	// (0x000059c4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x000114b0) setting_slider_graphic_pane_vc_t

0x3ef4,	// (0x000059d6) slider_set_pane_cp_vc

0x3efe,	// (0x000059e0) slider_set_pane_vc_g1

0x3f07,	// (0x000059e9) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x000114b5) slider_set_pane_vc_g

0xf08f,	// (0x00010b71) set_opt_bg_pane_g1_copy1

0xf097,	// (0x00010b79) set_opt_bg_pane_g2_copy1

0x3f33,	// (0x00005a15) set_opt_bg_pane_g3_copy1

0xf0a7,	// (0x00010b89) set_opt_bg_pane_g4_copy1

0xf0af,	// (0x00010b91) set_opt_bg_pane_g5_copy1

0xf0b7,	// (0x00010b99) set_opt_bg_pane_g6_copy1

0x3f3d,	// (0x00005a1f) set_opt_bg_pane_g7_copy1

0x3f47,	// (0x00005a29) set_opt_bg_pane_g8_copy1

0x3f51,	// (0x00005a33) set_opt_bg_pane_g9_copy1

0xe7a2,	// (0x00010284) bg_set_opt_pane_cp_vc

0x3f5b,	// (0x00005a3d) setting_slider_pane_vc_t1

0x3f6a,	// (0x00005a4c) setting_slider_pane_vc_t2

0x3f7c,	// (0x00005a5e) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x000114c4) setting_slider_pane_vc_t

0x3f8e,	// (0x00005a70) slider_set_pane_vc

0x2bad,	// (0x0000468f) volume_set_pane_vc_g1

0x2bb6,	// (0x00004698) volume_set_pane_vc_g2

0x2bbf,	// (0x000046a1) volume_set_pane_vc_g3

0x2bc8,	// (0x000046aa) volume_set_pane_vc_g4

0x2bd1,	// (0x000046b3) volume_set_pane_vc_g5

0x2bda,	// (0x000046bc) volume_set_pane_vc_g6

0x2be3,	// (0x000046c5) volume_set_pane_vc_g7

0x2bec,	// (0x000046ce) volume_set_pane_vc_g8

0x2bf5,	// (0x000046d7) volume_set_pane_vc_g9

0x2bfe,	// (0x000046e0) volume_set_pane_vc_g10

0x0009,

0xf9e9,	// (0x000114cb) volume_set_pane_vc_g

0x3f98,	// (0x00005a7a) volume_set_pane_vc

0x3fa2,	// (0x00005a84) button_value_adjust_pane_cp1_vc

0x3fac,	// (0x00005a8e) list_highlight_pane_cp2_vc

0x3fb5,	// (0x00005a97) list_set_pane_vc_ParamLimits

0x3fb5,	// (0x00005a97) list_set_pane_vc

0x4023,	// (0x00005b05) main_pane_set_vc_t1_ParamLimits

0x4023,	// (0x00005b05) main_pane_set_vc_t1

0x4038,	// (0x00005b1a) main_pane_set_vc_t2_ParamLimits

0x4038,	// (0x00005b1a) main_pane_set_vc_t2

0x404a,	// (0x00005b2c) main_pane_set_vc_t3_ParamLimits

0x404a,	// (0x00005b2c) main_pane_set_vc_t3

0x405e,	// (0x00005b40) main_pane_set_vc_t4_ParamLimits

0x405e,	// (0x00005b40) main_pane_set_vc_t4

0x0003,

0xf9fe,	// (0x000114e0) main_pane_set_vc_t_ParamLimits

0xf9fe,	// (0x000114e0) main_pane_set_vc_t

0x4072,	// (0x00005b54) setting_code_pane_vc_ParamLimits

0x4072,	// (0x00005b54) setting_code_pane_vc

0x4083,	// (0x00005b65) setting_slider_graphic_pane_vc

0x4083,	// (0x00005b65) setting_slider_pane_vc

0x4083,	// (0x00005b65) setting_text_pane_vc

0x4083,	// (0x00005b65) setting_volume_pane_vc

0x408d,	// (0x00005b6f) scroll_pane_cp121_vc

0xef56,	// (0x00010a38) set_content_pane_vc

0x4364,	// (0x00005e46) button_value_adjust_pane_g1

0x436d,	// (0x00005e4f) button_value_adjust_pane_g2

0x0001,

0xfa58,	// (0x0001153a) button_value_adjust_pane_g

0x4376,	// (0x00005e58) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4376,	// (0x00005e58) form_field_slider_wide_pane_vc_t1

0x4388,	// (0x00005e6a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4388,	// (0x00005e6a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5d,	// (0x0001153f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5d,	// (0x0001153f) form_field_slider_wide_pane_vc_t

0xe844,	// (0x00010326) input_focus_pane_cp10_vc_ParamLimits

0xe844,	// (0x00010326) input_focus_pane_cp10_vc

0x43b4,	// (0x00005e96) slider_cont_pane_cp1_vc_ParamLimits

0x43b4,	// (0x00005e96) slider_cont_pane_cp1_vc

0x43c6,	// (0x00005ea8) slider_form_pane_g1_cp2

0x3f07,	// (0x000059e9) slider_form_pane_g2_cp2

0x43f3,	// (0x00005ed5) form_field_slider_pane_vc_t3

0x4401,	// (0x00005ee3) form_field_slider_pane_vc_t4

0x440f,	// (0x00005ef1) slider_form_pane_vc_ParamLimits

0x440f,	// (0x00005ef1) slider_form_pane_vc

0x441c,	// (0x00005efe) form_field_slider_pane_vc_t1_ParamLimits

0x441c,	// (0x00005efe) form_field_slider_pane_vc_t1

0x4388,	// (0x00005e6a) form_field_slider_pane_vc_t2_ParamLimits

0x4388,	// (0x00005e6a) form_field_slider_pane_vc_t2

0x0001,

0xfa6f,	// (0x00011551) form_field_slider_pane_vc_t_ParamLimits

0xfa6f,	// (0x00011551) form_field_slider_pane_vc_t

0xe844,	// (0x00010326) input_focus_pane_cp9_vc_ParamLimits

0xe844,	// (0x00010326) input_focus_pane_cp9_vc

0x4432,	// (0x00005f14) slider_cont_pane_vc_ParamLimits

0x4432,	// (0x00005f14) slider_cont_pane_vc

0x4446,	// (0x00005f28) list_form_graphic_pane_cp_vc_ParamLimits

0x4446,	// (0x00005f28) list_form_graphic_pane_cp_vc

0x1fbf,	// (0x00003aa1) form_field_popup_wide_pane_vc_g1

0x445b,	// (0x00005f3d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x445b,	// (0x00005f3d) form_field_popup_wide_pane_vc_t1

0xefd4,	// (0x00010ab6) input_focus_pane_cp8_vc_ParamLimits

0xefd4,	// (0x00010ab6) input_focus_pane_cp8_vc

0x44a0,	// (0x00005f82) list_form_wide_pane_vc_ParamLimits

0x44a0,	// (0x00005f82) list_form_wide_pane_vc

0x44ac,	// (0x00005f8e) list_form_graphic_pane_vc_g1

0x44b4,	// (0x00005f96) list_form_graphic_pane_vc_t1_ParamLimits

0x44b4,	// (0x00005f96) list_form_graphic_pane_vc_t1

0xe85c,	// (0x0001033e) list_highlight_pane_cp5_vc_ParamLimits

0xe85c,	// (0x0001033e) list_highlight_pane_cp5_vc

0x44d0,	// (0x00005fb2) list_form_graphic_pane_vc_ParamLimits

0x44d0,	// (0x00005fb2) list_form_graphic_pane_vc

0x1fbf,	// (0x00003aa1) form_field_popup_pane_vc_g1

0x44e6,	// (0x00005fc8) form_field_popup_pane_vc_t1_ParamLimits

0x44e6,	// (0x00005fc8) form_field_popup_pane_vc_t1

0xefd4,	// (0x00010ab6) input_focus_pane_cp7_vc_ParamLimits

0xefd4,	// (0x00010ab6) input_focus_pane_cp7_vc

0x44fd,	// (0x00005fdf) list_form_pane_vc_ParamLimits

0x44fd,	// (0x00005fdf) list_form_pane_vc

0x4509,	// (0x00005feb) data_form_pane_vc_t1_ParamLimits

0x4509,	// (0x00005feb) data_form_pane_vc_t1

0xf08f,	// (0x00010b71) input_focus_pane_vc_g1

0xf097,	// (0x00010b79) input_focus_pane_vc_g2

0xf09f,	// (0x00010b81) input_focus_pane_vc_g3

0xf0a7,	// (0x00010b89) input_focus_pane_vc_g4

0xf0af,	// (0x00010b91) input_focus_pane_vc_g5

0xf0b7,	// (0x00010b99) input_focus_pane_vc_g6

0xf0bf,	// (0x00010ba1) input_focus_pane_vc_g7

0xf0c7,	// (0x00010ba9) input_focus_pane_vc_g8

0xf0cf,	// (0x00010bb1) input_focus_pane_vc_g9

0xe629,	// (0x0001010b) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00011144) input_focus_pane_vc_g

0x1fb3,	// (0x00003a95) data_form_pane_vc_ParamLimits

0x1fb3,	// (0x00003a95) data_form_pane_vc

0x1fbf,	// (0x00003aa1) form_field_data_pane_vc_g1

0x4526,	// (0x00006008) form_field_data_pane_vc_t1_ParamLimits

0x4526,	// (0x00006008) form_field_data_pane_vc_t1

0xefd4,	// (0x00010ab6) input_focus_pane_vc_ParamLimits

0xefd4,	// (0x00010ab6) input_focus_pane_vc

0x4540,	// (0x00006022) button_value_adjust_pane_cp3_vc

0x4548,	// (0x0000602a) button_value_adjust_pane_cp5_vc

0x4550,	// (0x00006032) form_field_data_pane_vc_ParamLimits

0x4550,	// (0x00006032) form_field_data_pane_vc

0x456b,	// (0x0000604d) form_field_data_pane_vc_cp2

0x4573,	// (0x00006055) form_field_data_wide_pane_vc_ParamLimits

0x4573,	// (0x00006055) form_field_data_wide_pane_vc

0x458d,	// (0x0000606f) form_field_data_wide_pane_vc_cp2

0x4595,	// (0x00006077) form_field_popup_pane_vc_ParamLimits

0x4595,	// (0x00006077) form_field_popup_pane_vc

0x45b0,	// (0x00006092) form_field_popup_wide_pane_vc_ParamLimits

0x45b0,	// (0x00006092) form_field_popup_wide_pane_vc

0x45ca,	// (0x000060ac) form_field_slider_pane_vc_ParamLimits

0x45ca,	// (0x000060ac) form_field_slider_pane_vc

0x45dd,	// (0x000060bf) form_field_slider_wide_pane_vc_ParamLimits

0x45dd,	// (0x000060bf) form_field_slider_wide_pane_vc

0xc3be,	// (0x0000dea0) grid_touch_1_pane_ParamLimits

0xc3be,	// (0x0000dea0) grid_touch_1_pane

0xc3d2,	// (0x0000deb4) grid_touch_2_pane_ParamLimits

0xc3d2,	// (0x0000deb4) grid_touch_2_pane

0x46c3,	// (0x000061a5) touch_pane_g1_ParamLimits

0x46c3,	// (0x000061a5) touch_pane_g1

0x4616,	// (0x000060f8) cell_app_pane_cp_wide_ParamLimits

0x4616,	// (0x000060f8) cell_app_pane_cp_wide

0x4627,	// (0x00006109) grid_popup_fast_wide_pane_ParamLimits

0x4627,	// (0x00006109) grid_popup_fast_wide_pane

0x463b,	// (0x0000611d) scroll_pane_cp19_ParamLimits

0x463b,	// (0x0000611d) scroll_pane_cp19

0xe7a2,	// (0x00010284) bg_popup_window_pane_cp20

0x464f,	// (0x00006131) listscroll_popup_fast_wide_pane

0xc3fe,	// (0x0000dee0) grid_indicator_nsta_pane

0x4669,	// (0x0000614b) clock_nsta_pane_g1

0x4672,	// (0x00006154) clock_nsta_pane_t1

0xc40a,	// (0x0000deec) cell_indicator_nsta_pane_ParamLimits

0xc40a,	// (0x0000deec) cell_indicator_nsta_pane

0x46c3,	// (0x000061a5) cell_indicator_nsta_pane_g1

0xc425,	// (0x0000df07) cell_indicator_nsta_pane_g2

0x0001,

0xfa80,	// (0x00011562) cell_indicator_nsta_pane_g

0x46e4,	// (0x000061c6) clock_nsta_pane_cp

0x46ed,	// (0x000061cf) indicator_nsta_pane_cp

0x46f7,	// (0x000061d9) nsta_clock_indic_pane_g1

0xe93b,	// (0x0001041d) grid_indicator_pane

0x0226,	// (0x00001d08) scroll_pane_cp29

0x073e,	// (0x00002220) indicator_nsta_pane_cp2_ParamLimits

0x073e,	// (0x00002220) indicator_nsta_pane_cp2

0xe85c,	// (0x0001033e) main_apps_wheel_pane

0x21cf,	// (0x00003cb1) form_midp_field_text_pane_ParamLimits

0x231e,	// (0x00003e00) scroll_bar_cp050_ParamLimits

0x4750,	// (0x00006232) cell_indicator_pane_ParamLimits

0x4750,	// (0x00006232) cell_indicator_pane

0x4768,	// (0x0000624a) cell_indicator_pane_g1

0xc432,	// (0x0000df14) grid_wheel_folder_pane_ParamLimits

0xc432,	// (0x0000df14) grid_wheel_folder_pane

0xc440,	// (0x0000df22) list_wheel_apps_pane_ParamLimits

0xc440,	// (0x0000df22) list_wheel_apps_pane

0xc44e,	// (0x0000df30) main_apps_wheel_pane_g1_ParamLimits

0xc44e,	// (0x0000df30) main_apps_wheel_pane_g1

0xc45e,	// (0x0000df40) main_apps_wheel_pane_g2_ParamLimits

0xc45e,	// (0x0000df40) main_apps_wheel_pane_g2

0x0001,

0xfa9c,	// (0x0001157e) main_apps_wheel_pane_g_ParamLimits

0xfa9c,	// (0x0001157e) main_apps_wheel_pane_g

0xc46e,	// (0x0000df50) main_apps_wheel_pane_t1_ParamLimits

0xc46e,	// (0x0000df50) main_apps_wheel_pane_t1

0xc486,	// (0x0000df68) list_wheel_apps_pane_g1

0xc48e,	// (0x0000df70) list_wheel_apps_pane_g2

0xc496,	// (0x0000df78) list_wheel_apps_pane_g3

0xc49e,	// (0x0000df80) list_wheel_apps_pane_g4

0xc4a6,	// (0x0000df88) list_wheel_apps_pane_g5

0x0004,

0xfaa1,	// (0x00011583) list_wheel_apps_pane_g

0x0a3f,	// (0x00002521) navi_icon_text_pane

0xb7fc,	// (0x0000d2de) aid_fill_nsta

0xc4c1,	// (0x0000dfa3) navi_icon_text_pane_g1

0xc4cd,	// (0x0000dfaf) navi_icon_text_pane_t1

0x08d5,	// (0x000023b7) list_set_graphic_pane_t1_ParamLimits

0x08d5,	// (0x000023b7) list_set_graphic_pane_t1

0x2a8b,	// (0x0000456d) popup_midp_note_alarm_window_t6_ParamLimits

0x2a8b,	// (0x0000456d) popup_midp_note_alarm_window_t6

0x2a9d,	// (0x0000457f) popup_midp_note_alarm_window_t7_ParamLimits

0x2a9d,	// (0x0000457f) popup_midp_note_alarm_window_t7

0x2aaf,	// (0x00004591) popup_midp_note_alarm_window_t8_ParamLimits

0x2aaf,	// (0x00004591) popup_midp_note_alarm_window_t8

0x2ac1,	// (0x000045a3) popup_midp_note_alarm_window_t9_ParamLimits

0x2ac1,	// (0x000045a3) popup_midp_note_alarm_window_t9

0x2ad3,	// (0x000045b5) popup_midp_note_alarm_window_t10_ParamLimits

0x2ad3,	// (0x000045b5) popup_midp_note_alarm_window_t10

0x2ae5,	// (0x000045c7) popup_midp_note_alarm_window_t11_ParamLimits

0x2ae5,	// (0x000045c7) popup_midp_note_alarm_window_t11

0x2af7,	// (0x000045d9) scroll_pane_cp17_ParamLimits

0x2af7,	// (0x000045d9) scroll_pane_cp17

0x2bad,	// (0x0000468f) volume_small_pane_cp_g1

0x485b,	// (0x0000633d) volume_small_pane_cp_g2

0x4864,	// (0x00006346) volume_small_pane_cp_g3

0x486d,	// (0x0000634f) volume_small_pane_cp_g4

0x4876,	// (0x00006358) volume_small_pane_cp_g5

0x487f,	// (0x00006361) volume_small_pane_cp_g6

0x4888,	// (0x0000636a) volume_small_pane_cp_g7

0x4891,	// (0x00006373) volume_small_pane_cp_g8

0x489a,	// (0x0000637c) volume_small_pane_cp_g9

0x48a3,	// (0x00006385) volume_small_pane_cp_g10

0x0cac,	// (0x0000278e) midp_ticker_pane_g1_ParamLimits

0x0cb8,	// (0x0000279a) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00011210) midp_ticker_pane_g_ParamLimits

0xaf68,	// (0x0000ca4a) midp_ticker_pane_t1_ParamLimits

0xb820,	// (0x0000d302) aid_fill_nsta_2

0x230a,	// (0x00003dec) list_form2_midp_pane

0x372b,	// (0x0000520d) midp_editing_number_pane_ParamLimits

0x373a,	// (0x0000521c) midp_ticker_pane_ParamLimits

0x48ac,	// (0x0000638e) form2_midp_field_pane

0x48d0,	// (0x000063b2) scroll_pane_cp51

0x48f0,	// (0x000063d2) form2_midp_button_pane_ParamLimits

0x48f0,	// (0x000063d2) form2_midp_button_pane

0x4902,	// (0x000063e4) form2_midp_content_pane_ParamLimits

0x4902,	// (0x000063e4) form2_midp_content_pane

0x491c,	// (0x000063fe) form2_midp_field_choice_group_pane

0x4924,	// (0x00006406) form2_midp_field_pane_g1

0x492c,	// (0x0000640e) form2_midp_field_pane_g2

0x4934,	// (0x00006416) form2_midp_field_pane_g3

0x493c,	// (0x0000641e) form2_midp_field_pane_g4

0x0003,

0xfac6,	// (0x000115a8) form2_midp_field_pane_g

0x4944,	// (0x00006426) form2_midp_gauge_slider_pane

0x494c,	// (0x0000642e) form2_midp_gauge_wait_pane

0x4954,	// (0x00006436) form2_midp_image_pane_ParamLimits

0x4954,	// (0x00006436) form2_midp_image_pane

0x496f,	// (0x00006451) form2_midp_label_pane_ParamLimits

0x496f,	// (0x00006451) form2_midp_label_pane

0xc4fb,	// (0x0000dfdd) form2_midp_label_pane_cp_ParamLimits

0xc4fb,	// (0x0000dfdd) form2_midp_label_pane_cp

0x49af,	// (0x00006491) form2_midp_string_pane_ParamLimits

0x49af,	// (0x00006491) form2_midp_string_pane

0xc51c,	// (0x0000dffe) form2_midp_text_pane_ParamLimits

0xc51c,	// (0x0000dffe) form2_midp_text_pane

0x49e2,	// (0x000064c4) form2_midp_time_pane

0x49f2,	// (0x000064d4) input_focus_pane_cp51_ParamLimits

0x49f2,	// (0x000064d4) input_focus_pane_cp51

0x4a0a,	// (0x000064ec) form2_midp_label_pane_t1_ParamLimits

0x4a0a,	// (0x000064ec) form2_midp_label_pane_t1

0xc53d,	// (0x0000e01f) form2_mdip_text_pane_t1_ParamLimits

0xc53d,	// (0x0000e01f) form2_mdip_text_pane_t1

0x4a6f,	// (0x00006551) form2_midp_time_pane_t1

0x4a8a,	// (0x0000656c) form2_midp_gauge_slider_pane_t1

0xc559,	// (0x0000e03b) form2_midp_gauge_slider_pane_t2

0xc56b,	// (0x0000e04d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacf,	// (0x000115b1) form2_midp_gauge_slider_pane_t

0x4ac0,	// (0x000065a2) form2_midp_slider_pane

0x4acc,	// (0x000065ae) form2_midp_gauge_wait_pane_t1

0x4ada,	// (0x000065bc) form2_midp_wait_pane_ParamLimits

0x4ada,	// (0x000065bc) form2_midp_wait_pane

0x2006,	// (0x00003ae8) list_single_2graphic_pane_cp4_ParamLimits

0x2006,	// (0x00003ae8) list_single_2graphic_pane_cp4

0xbcce,	// (0x0000d7b0) list_single_midp_graphic_pane_cp_ParamLimits

0xbcce,	// (0x0000d7b0) list_single_midp_graphic_pane_cp

0xe7a2,	// (0x00010284) list_highlight_pane_cp20

0x4b1e,	// (0x00006600) list_single_2graphic_pane_g1_cp4

0x3cf3,	// (0x000057d5) list_single_2graphic_pane_g2_cp4

0x4b26,	// (0x00006608) list_single_2graphic_pane_t1_cp4

0xe85c,	// (0x0001033e) list_highlight_pane_cp21

0x4b35,	// (0x00006617) list_single_midp_graphic_pane_g4_cp

0x4b44,	// (0x00006626) list_single_midp_graphic_pane_t1_cp

0xc57d,	// (0x0000e05f) form2_mdip_string_pane_t1_ParamLimits

0xc57d,	// (0x0000e05f) form2_mdip_string_pane_t1

0xe7a2,	// (0x00010284) bg_wml_button_pane_cp2

0xe629,	// (0x0001010b) form2_midp_image_pane_g1

0xeef4,	// (0x000109d6) list_double_large_graphic_pane_g5_ParamLimits

0xeef4,	// (0x000109d6) list_double_large_graphic_pane_g5

0xaec4,	// (0x0000c9a6) midp_form_pane_ParamLimits

0xe85c,	// (0x0001033e) main_apps_wheel_pane_ParamLimits

0xb514,	// (0x0000cff6) popup_preview_window_ParamLimits

0xb514,	// (0x0000cff6) popup_preview_window

0x1707,	// (0x000031e9) popup_touch_info_window_ParamLimits

0x1707,	// (0x000031e9) popup_touch_info_window

0x1729,	// (0x0000320b) popup_touch_menu_window_ParamLimits

0x1729,	// (0x0000320b) popup_touch_menu_window

0xe61f,	// (0x00010101) bg_popup_sub_pane_cp6

0x4bf5,	// (0x000066d7) list_touch_menu_pane

0x4bfd,	// (0x000066df) list_single_touch_menu_pane_ParamLimits

0x4bfd,	// (0x000066df) list_single_touch_menu_pane

0x4c15,	// (0x000066f7) list_single_touch_menu_pane_t1

0xe85c,	// (0x0001033e) bg_popup_sub_pane_cp7_ParamLimits

0xe85c,	// (0x0001033e) bg_popup_sub_pane_cp7

0x4c23,	// (0x00006705) heading_sub_pane

0x4c2b,	// (0x0000670d) list_touch_info_pane_ParamLimits

0x4c2b,	// (0x0000670d) list_touch_info_pane

0x4c3a,	// (0x0000671c) list_single_touch_info_pane_ParamLimits

0x4c3a,	// (0x0000671c) list_single_touch_info_pane

0x4c4c,	// (0x0000672e) list_single_touch_info_pane_t1

0x4c5a,	// (0x0000673c) list_single_touch_info_pane_t2

0x0001,

0xfadd,	// (0x000115bf) list_single_touch_info_pane_t

0x0bce,	// (0x000026b0) bg_popup_heading_pane_cp

0x4c68,	// (0x0000674a) heading_sub_pane_t1

0x1ebf,	// (0x000039a1) bg_popup_preview_window_pane_cp_ParamLimits

0x1ebf,	// (0x000039a1) bg_popup_preview_window_pane_cp

0x4c23,	// (0x00006705) heading_preview_pane

0x4c2b,	// (0x0000670d) list_preview_pane_ParamLimits

0x4c2b,	// (0x0000670d) list_preview_pane

0x4c76,	// (0x00006758) popup_preview_window_g1

0x4c3a,	// (0x0000671c) list_single_preview_pane_ParamLimits

0x4c3a,	// (0x0000671c) list_single_preview_pane

0x4c7e,	// (0x00006760) list_single_preview_pane_g1

0x4c86,	// (0x00006768) list_single_preview_pane_t1

0x4c4c,	// (0x0000672e) list_single_preview_pane_t2

0x0001,

0xfae2,	// (0x000115c4) list_single_preview_pane_t

0x4c94,	// (0x00006776) bg_popup_heading_pane_cp2_ParamLimits

0x4c94,	// (0x00006776) bg_popup_heading_pane_cp2

0x4caa,	// (0x0000678c) heading_preview_pane_g1

0x4cb2,	// (0x00006794) heading_preview_pane_t1_ParamLimits

0x4cb2,	// (0x00006794) heading_preview_pane_t1

0xe952,	// (0x00010434) soft_indicator_pane_t1_ParamLimits

0xeeb4,	// (0x00010996) scroll_pane_ParamLimits

0x0122,	// (0x00001c04) scroll_sc2_left_pane

0x012b,	// (0x00001c0d) scroll_sc2_right_pane

0x014a,	// (0x00001c2c) scroll_bg_pane_g1_ParamLimits

0x015f,	// (0x00001c41) scroll_bg_pane_g2_ParamLimits

0x0177,	// (0x00001c59) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001119b) scroll_bg_pane_g_ParamLimits

0x014a,	// (0x00001c2c) scroll_handle_pane_g1_ParamLimits

0x0199,	// (0x00001c7b) scroll_handle_pane_g2_ParamLimits

0x0177,	// (0x00001c59) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x000111a2) scroll_handle_pane_g_ParamLimits

0x1165,	// (0x00002c47) popup_choice_list_window_ParamLimits

0x1165,	// (0x00002c47) popup_choice_list_window

0x1c28,	// (0x0000370a) choice_list_pane

0x1cf0,	// (0x000037d2) cell_toolbar_pane_t1

0x1d18,	// (0x000037fa) toolbar_button_pane_ParamLimits

0x312d,	// (0x00004c0f) ai_gene_pane_1_t2_ParamLimits

0x312d,	// (0x00004c0f) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x000113be) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x000113be) ai_gene_pane_1_t

0x4ccf,	// (0x000067b1) scroll_sc2_left_pane_g1

0x4ccf,	// (0x000067b1) scroll_sc2_right_pane_g1

0x10ff,	// (0x00002be1) bg_popup_sub_pane_cp10

0x4cd9,	// (0x000067bb) list_choice_list_pane

0x4cf2,	// (0x000067d4) list_single_choice_list_pane_ParamLimits

0x4cf2,	// (0x000067d4) list_single_choice_list_pane

0x4d0a,	// (0x000067ec) list_single_choice_list_pane_g1

0xf1c7,	// (0x00010ca9) list_single_choice_list_pane_t1_ParamLimits

0xf1c7,	// (0x00010ca9) list_single_choice_list_pane_t1

0x4d12,	// (0x000067f4) choice_list_pane_g1

0x4d1a,	// (0x000067fc) choice_list_pane_t1

0xe61f,	// (0x00010101) input_focus_pane_cp11

0xf395,	// (0x00010e77) title_pane_stacon_g2_ParamLimits

0xf395,	// (0x00010e77) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00011181) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00011181) title_pane_stacon_g

0x0bce,	// (0x000026b0) cursor_press_pane

0xb18b,	// (0x0000cc6d) popup_fep_hwr_window_ParamLimits

0xb18b,	// (0x0000cc6d) popup_fep_hwr_window

0x12a9,	// (0x00002d8b) popup_fep_vkb_window_ParamLimits

0x12a9,	// (0x00002d8b) popup_fep_vkb_window

0x4d28,	// (0x0000680a) cursor_press_pane_g1

0x0002,

0xfb0b,	// (0x000115ed) fep_vkb_side_pane_g_ParamLimits

0x4d69,	// (0x0000684b) fep_hwr_candidate_pane_ParamLimits

0x4d69,	// (0x0000684b) fep_hwr_candidate_pane

0x4d93,	// (0x00006875) fep_hwr_side_pane_ParamLimits

0x4d93,	// (0x00006875) fep_hwr_side_pane

0x4db5,	// (0x00006897) fep_hwr_top_pane_ParamLimits

0x4db5,	// (0x00006897) fep_hwr_top_pane

0x4dcd,	// (0x000068af) fep_hwr_write_pane_ParamLimits

0x4dcd,	// (0x000068af) fep_hwr_write_pane

0xfb0b,	// (0x000115ed) fep_vkb_side_pane_g

0x4e07,	// (0x000068e9) fep_hwr_top_pane_g1

0x4e19,	// (0x000068fb) fep_hwr_top_pane_g2

0x4e2b,	// (0x0000690d) fep_hwr_top_pane_g3

0x0002,

0xfae7,	// (0x000115c9) fep_hwr_top_pane_g

0x4e40,	// (0x00006922) fep_hwr_top_text_pane

0x02ee,	// (0x00001dd0) fep_hwr_top_text_pane_g1

0x4f1c,	// (0x000069fe) fep_hwr_top_text_pane_t1

0x4f7c,	// (0x00006a5e) fep_hwr_candidate_pane_g1

0x51ed,	// (0x00006ccf) fep_vkb_keypad_pane_g3_ParamLimits

0x51ed,	// (0x00006ccf) fep_vkb_keypad_pane_g3

0x5219,	// (0x00006cfb) fep_vkb_keypad_pane_g4_ParamLimits

0x5219,	// (0x00006cfb) fep_vkb_keypad_pane_g4

0x5290,	// (0x00006d72) fep_vkb_bottom_pane_g2_ParamLimits

0x5290,	// (0x00006d72) fep_vkb_bottom_pane_g2

0x0001,

0xfb12,	// (0x000115f4) fep_vkb_bottom_pane_g_ParamLimits

0xfb12,	// (0x000115f4) fep_vkb_bottom_pane_g

0x4ccf,	// (0x000067b1) cell_vkb_side_pane_g2

0x0001,

0xfb1c,	// (0x000115fe) cell_vkb_side_pane_g

0x531b,	// (0x00006dfd) cell_vkb_side_pane_t1

0x5329,	// (0x00006e0b) cell_vkb_side_pane_t1_copy1

0x4ccf,	// (0x000067b1) bg_fep_vkb_candidate_pane_g2

0x546d,	// (0x00006f4f) cell_vkb_candidate_pane_ParamLimits

0x4fb0,	// (0x00006a92) aid_size_cell_vkb_ParamLimits

0x4fb0,	// (0x00006a92) aid_size_cell_vkb

0x546d,	// (0x00006f4f) cell_vkb_candidate_pane

0x54a7,	// (0x00006f89) bg_popup_fep_shadow_pane_g1

0xc660,	// (0x0000e142) fep_vkb_bottom_pane_ParamLimits

0xc660,	// (0x0000e142) fep_vkb_bottom_pane

0x507f,	// (0x00006b61) fep_vkb_candidate_pane_ParamLimits

0x507f,	// (0x00006b61) fep_vkb_candidate_pane

0xc68c,	// (0x0000e16e) fep_vkb_keypad_pane_ParamLimits

0xc68c,	// (0x0000e16e) fep_vkb_keypad_pane

0xc6b3,	// (0x0000e195) fep_vkb_side_pane_ParamLimits

0xc6b3,	// (0x0000e195) fep_vkb_side_pane

0xc6ef,	// (0x0000e1d1) fep_vkb_top_pane_ParamLimits

0xc6ef,	// (0x0000e1d1) fep_vkb_top_pane

0x5146,	// (0x00006c28) fep_vkb_top_pane_g1_ParamLimits

0x5146,	// (0x00006c28) fep_vkb_top_pane_g1

0x5155,	// (0x00006c37) fep_vkb_top_pane_g2_ParamLimits

0x5155,	// (0x00006c37) fep_vkb_top_pane_g2

0x5164,	// (0x00006c46) fep_vkb_top_pane_g3_ParamLimits

0x5164,	// (0x00006c46) fep_vkb_top_pane_g3

0x0003,

0xfb02,	// (0x000115e4) fep_vkb_top_pane_g_ParamLimits

0xfb02,	// (0x000115e4) fep_vkb_top_pane_g

0x5182,	// (0x00006c64) fep_vkb_top_text_pane_ParamLimits

0x5182,	// (0x00006c64) fep_vkb_top_text_pane

0xc72b,	// (0x0000e20d) fep_vkb_side_pane_g1_ParamLimits

0xc72b,	// (0x0000e20d) fep_vkb_side_pane_g1

0x51dc,	// (0x00006cbe) grid_vkb_side_pane_ParamLimits

0x51dc,	// (0x00006cbe) grid_vkb_side_pane

0x54af,	// (0x00006f91) bg_popup_fep_shadow_pane_g2

0x54b8,	// (0x00006f9a) bg_popup_fep_shadow_pane_g3

0x54c0,	// (0x00006fa2) bg_popup_fep_shadow_pane_g4

0x54c9,	// (0x00006fab) bg_popup_fep_shadow_pane_g5

0x54d3,	// (0x00006fb5) bg_popup_fep_shadow_pane_g6

0x54db,	// (0x00006fbd) bg_popup_fep_shadow_pane_g7

0xf0af,	// (0x00010b91) bg_popup_fep_shadow_pane_g8

0x523b,	// (0x00006d1d) grid_vkb_keypad_number_pane_ParamLimits

0x523b,	// (0x00006d1d) grid_vkb_keypad_number_pane

0x524f,	// (0x00006d31) grid_vkb_keypad_pane_ParamLimits

0x524f,	// (0x00006d31) grid_vkb_keypad_pane

0x5275,	// (0x00006d57) fep_vkb_bottom_pane_g1_ParamLimits

0x5275,	// (0x00006d57) fep_vkb_bottom_pane_g1

0x529e,	// (0x00006d80) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x529e,	// (0x00006d80) grid_vkb_keypad_bottom_left_pane

0x52b3,	// (0x00006d95) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x52b3,	// (0x00006d95) grid_vkb_keypad_bottom_right_pane

0x52c8,	// (0x00006daa) fep_vkb_top_text_pane_g1

0xc772,	// (0x0000e254) fep_vkb_top_text_pane_t1

0xc784,	// (0x0000e266) cell_vkb_side_pane_ParamLimits

0xc784,	// (0x0000e266) cell_vkb_side_pane

0x4ccf,	// (0x000067b1) cell_vkb_side_pane_g1

0x5337,	// (0x00006e19) cell_vkb_keypad_pane_ParamLimits

0x5337,	// (0x00006e19) cell_vkb_keypad_pane

0x53c4,	// (0x00006ea6) cell_vkb_keypad_pane_g1

0x0008,

0xfb2f,	// (0x00011611) bg_popup_fep_shadow_pane_g

0x4ccf,	// (0x000067b1) cell_hwr_side_pane_g1

0x4ccf,	// (0x000067b1) cell_hwr_side_pane_g2

0x53ce,	// (0x00006eb0) cell_vkb_keypad_pane_t1

0xc79a,	// (0x0000e27c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc79a,	// (0x0000e27c) cell_vkb_keypad_bottom_left_pane

0xc7af,	// (0x0000e291) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7af,	// (0x0000e291) cell_vkb_keypad_bottom_right_pane

0x4ccf,	// (0x000067b1) cell_vkb_keypad_bottom_left_pane_g1

0x4ccf,	// (0x000067b1) cell_vkb_keypad_bottom_right_pane_g1

0x5432,	// (0x00006f14) cell_vkb_keypad_number_pane_ParamLimits

0x5432,	// (0x00006f14) cell_vkb_keypad_number_pane

0x5451,	// (0x00006f33) cell_vkb_keypad_number_pane_g1

0x545b,	// (0x00006f3d) cell_vkb_keypad_number_pane_g2

0x5464,	// (0x00006f46) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb21,	// (0x00011603) cell_vkb_keypad_number_pane_g

0x53ce,	// (0x00006eb0) cell_vkb_keypad_number_pane_t1

0x548e,	// (0x00006f70) fep_vkb_candidate_pane_g1

0x0001,

0xfb1c,	// (0x000115fe) cell_hwr_side_pane_g

0x54ed,	// (0x00006fcf) cell_hwr_side_pane_t1

0x54fb,	// (0x00006fdd) cell_hwr_side_pane_t1_copy1

0x5174,	// (0x00006c56) cell_hwr_candidate_pane_g1

0x554b,	// (0x0000702d) cell_hwr_candidate_pane_t1

0x4ccf,	// (0x000067b1) cell_vkb_candidate_pane_g2

0x559f,	// (0x00007081) cell_vkb_candidate_pane_t1

0x4d30,	// (0x00006812) bg_popup_fep_shadow_pane_ParamLimits

0x4d30,	// (0x00006812) bg_popup_fep_shadow_pane

0x4de7,	// (0x000068c9) bg_fep_hwr_top_pane_g4

0x4e55,	// (0x00006937) bg_hwr_side_pane_g1_ParamLimits

0x4e55,	// (0x00006937) bg_hwr_side_pane_g1

0xc619,	// (0x0000e0fb) cell_hwr_side_pane_ParamLimits

0xc619,	// (0x0000e0fb) cell_hwr_side_pane

0x4ec7,	// (0x000069a9) fep_hwr_write_pane_g1_ParamLimits

0x4ec7,	// (0x000069a9) fep_hwr_write_pane_g1

0x4ed4,	// (0x000069b6) fep_hwr_write_pane_g2_ParamLimits

0x4ed4,	// (0x000069b6) fep_hwr_write_pane_g2

0x4ee1,	// (0x000069c3) fep_hwr_write_pane_g3_ParamLimits

0x4ee1,	// (0x000069c3) fep_hwr_write_pane_g3

0xc639,	// (0x0000e11b) fep_hwr_write_pane_g4_ParamLimits

0xc639,	// (0x0000e11b) fep_hwr_write_pane_g4

0x0005,

0xfaee,	// (0x000115d0) fep_hwr_write_pane_g_ParamLimits

0xfaee,	// (0x000115d0) fep_hwr_write_pane_g

0x4de7,	// (0x000068c9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4de7,	// (0x000068c9) bg_fep_hwr_candidate_pane_g2

0x4f2a,	// (0x00006a0c) cell_hwr_candidate_pane_ParamLimits

0x4f2a,	// (0x00006a0c) cell_hwr_candidate_pane

0x4f7c,	// (0x00006a5e) fep_hwr_candidate_pane_g1_ParamLimits

0x4fde,	// (0x00006ac0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4fde,	// (0x00006ac0) bg_popup_fep_shadow_pane_cp2

0x5174,	// (0x00006c56) fep_vkb_top_pane_g4_ParamLimits

0x5174,	// (0x00006c56) fep_vkb_top_pane_g4

0x51ba,	// (0x00006c9c) fep_vkb_side_pane_g2_ParamLimits

0x51ba,	// (0x00006c9c) fep_vkb_side_pane_g2

0xa940,	// (0x0000c422) list_setting_pane_t4_ParamLimits

0xa940,	// (0x0000c422) list_setting_pane_t4

0xa9bc,	// (0x0000c49e) list_setting_number_pane_t5_ParamLimits

0xa9bc,	// (0x0000c49e) list_setting_number_pane_t5

0x0344,	// (0x00001e26) list_double_heading_pane_cp2_ParamLimits

0x0344,	// (0x00001e26) list_double_heading_pane_cp2

0x55ad,	// (0x0000708f) list_double_heading_pane_g1_cp2_ParamLimits

0x55ad,	// (0x0000708f) list_double_heading_pane_g1_cp2

0x55b9,	// (0x0000709b) list_double_heading_pane_g2_cp2_ParamLimits

0x55b9,	// (0x0000709b) list_double_heading_pane_g2_cp2

0x55cd,	// (0x000070af) list_double_heading_pane_t1_cp2_ParamLimits

0x55cd,	// (0x000070af) list_double_heading_pane_t1_cp2

0x55e3,	// (0x000070c5) list_double_heading_pane_t2_cp2_ParamLimits

0x55e3,	// (0x000070c5) list_double_heading_pane_t2_cp2

0xe617,	// (0x000100f9) aid_value_unit2

0xe7f6,	// (0x000102d8) popup_preview_fixed_window

0xea32,	// (0x00010514) bg_popup_preview_window_pane_cp02

0x55f5,	// (0x000070d7) list_preview_fixed_pane

0x563b,	// (0x0000711d) list_empty_pane_fp_ParamLimits

0x563b,	// (0x0000711d) list_empty_pane_fp

0x563b,	// (0x0000711d) list_single_cale_day_pane_fp_ParamLimits

0x563b,	// (0x0000711d) list_single_cale_day_pane_fp

0x563b,	// (0x0000711d) list_single_graphic_heading_pane_fp_ParamLimits

0x563b,	// (0x0000711d) list_single_graphic_heading_pane_fp

0x563b,	// (0x0000711d) list_single_graphic_pane_fp_ParamLimits

0x563b,	// (0x0000711d) list_single_graphic_pane_fp

0x563b,	// (0x0000711d) list_single_heading_pane_fp_ParamLimits

0x563b,	// (0x0000711d) list_single_heading_pane_fp

0x563b,	// (0x0000711d) list_single_pane_fp_ParamLimits

0x563b,	// (0x0000711d) list_single_pane_fp

0x5654,	// (0x00007136) list_single_pane_fp_g1_ParamLimits

0x5654,	// (0x00007136) list_single_pane_fp_g1

0xef09,	// (0x000109eb) list_single_pane_fp_g2_ParamLimits

0xef09,	// (0x000109eb) list_single_pane_fp_g2

0x5660,	// (0x00007142) list_single_pane_fp_g3_ParamLimits

0x5660,	// (0x00007142) list_single_pane_fp_g3

0x5674,	// (0x00007156) list_single_pane_fp_g4_ParamLimits

0x5674,	// (0x00007156) list_single_pane_fp_g4

0x0003,

0xfb50,	// (0x00011632) list_single_pane_fp_g_ParamLimits

0xfb50,	// (0x00011632) list_single_pane_fp_g

0x5680,	// (0x00007162) list_single_pane_fp_t1_ParamLimits

0x5680,	// (0x00007162) list_single_pane_fp_t1

0x5697,	// (0x00007179) list_single_graphic_pane_fp_g1_ParamLimits

0x5697,	// (0x00007179) list_single_graphic_pane_fp_g1

0x5654,	// (0x00007136) list_single_graphic_pane_fp_g2_ParamLimits

0x5654,	// (0x00007136) list_single_graphic_pane_fp_g2

0xef09,	// (0x000109eb) list_single_graphic_pane_fp_g3_ParamLimits

0xef09,	// (0x000109eb) list_single_graphic_pane_fp_g3

0x5660,	// (0x00007142) list_single_graphic_pane_fp_g4_ParamLimits

0x5660,	// (0x00007142) list_single_graphic_pane_fp_g4

0x5674,	// (0x00007156) list_single_graphic_pane_fp_g5_ParamLimits

0x5674,	// (0x00007156) list_single_graphic_pane_fp_g5

0x0004,

0xfb59,	// (0x0001163b) list_single_graphic_pane_fp_g_ParamLimits

0xfb59,	// (0x0001163b) list_single_graphic_pane_fp_g

0x56a3,	// (0x00007185) list_single_graphic_pane_fp_t1_ParamLimits

0x56a3,	// (0x00007185) list_single_graphic_pane_fp_t1

0x5697,	// (0x00007179) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5697,	// (0x00007179) list_single_graphic_heading_pane_fp_g1

0x5654,	// (0x00007136) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5654,	// (0x00007136) list_single_graphic_heading_pane_fp_g2

0xef09,	// (0x000109eb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xef09,	// (0x000109eb) list_single_graphic_heading_pane_fp_g3

0x5660,	// (0x00007142) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5660,	// (0x00007142) list_single_graphic_heading_pane_fp_g4

0x5674,	// (0x00007156) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5674,	// (0x00007156) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb59,	// (0x0001163b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb59,	// (0x0001163b) list_single_graphic_heading_pane_fp_g

0x56b9,	// (0x0000719b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x56b9,	// (0x0000719b) list_single_graphic_heading_pane_fp_t1

0x56cf,	// (0x000071b1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x56cf,	// (0x000071b1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb64,	// (0x00011646) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb64,	// (0x00011646) list_single_graphic_heading_pane_fp_t

0x56e1,	// (0x000071c3) list_single_cale_day_pane_fp_g1_ParamLimits

0x56e1,	// (0x000071c3) list_single_cale_day_pane_fp_g1

0x5719,	// (0x000071fb) list_single_cale_day_pane_fp_g2_ParamLimits

0x5719,	// (0x000071fb) list_single_cale_day_pane_fp_g2

0x5725,	// (0x00007207) list_single_cale_day_pane_fp_g3_ParamLimits

0x5725,	// (0x00007207) list_single_cale_day_pane_fp_g3

0x574d,	// (0x0000722f) list_single_cale_day_pane_fp_g4_ParamLimits

0x574d,	// (0x0000722f) list_single_cale_day_pane_fp_g4

0x5771,	// (0x00007253) list_single_cale_day_pane_fp_g5_ParamLimits

0x5771,	// (0x00007253) list_single_cale_day_pane_fp_g5

0x0004,

0xfb69,	// (0x0001164b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb69,	// (0x0001164b) list_single_cale_day_pane_fp_g

0x5795,	// (0x00007277) list_single_cale_day_pane_fp_t1_ParamLimits

0x5795,	// (0x00007277) list_single_cale_day_pane_fp_t1

0x57bb,	// (0x0000729d) list_single_cale_day_pane_fp_t2_ParamLimits

0x57bb,	// (0x0000729d) list_single_cale_day_pane_fp_t2

0x57d4,	// (0x000072b6) list_single_cale_day_pane_fp_t3_ParamLimits

0x57d4,	// (0x000072b6) list_single_cale_day_pane_fp_t3

0x0002,

0xfb74,	// (0x00011656) list_single_cale_day_pane_fp_t_ParamLimits

0xfb74,	// (0x00011656) list_single_cale_day_pane_fp_t

0x5654,	// (0x00007136) list_empty_pane_fp_g1_ParamLimits

0x5654,	// (0x00007136) list_empty_pane_fp_g1

0x57ed,	// (0x000072cf) list_empty_pane_fp_t1

0x57fb,	// (0x000072dd) list_empty_pane_fp_t2

0x0001,

0xfb7b,	// (0x0001165d) list_empty_pane_fp_t

0x5654,	// (0x00007136) list_single_heading_pane_fp_g1_ParamLimits

0x5654,	// (0x00007136) list_single_heading_pane_fp_g1

0xef09,	// (0x000109eb) list_single_heading_pane_fp_g2_ParamLimits

0xef09,	// (0x000109eb) list_single_heading_pane_fp_g2

0x5660,	// (0x00007142) list_single_heading_pane_fp_g3_ParamLimits

0x5660,	// (0x00007142) list_single_heading_pane_fp_g3

0x0002,

0xfb80,	// (0x00011662) list_single_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x00011662) list_single_heading_pane_fp_g

0x5809,	// (0x000072eb) list_single_heading_pane_fp_t1_ParamLimits

0x5809,	// (0x000072eb) list_single_heading_pane_fp_t1

0x581b,	// (0x000072fd) list_single_heading_pane_fp_t2_ParamLimits

0x581b,	// (0x000072fd) list_single_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00011669) list_single_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00011669) list_single_heading_pane_fp_t

0xf1dc,	// (0x00010cbe) aid_size_cell_fast

0xea15,	// (0x000104f7) soft_indicator_pane_cp1_t1

0xf219,	// (0x00010cfb) cell_app_pane_cp2_ParamLimits

0xf219,	// (0x00010cfb) cell_app_pane_cp2

0x4d52,	// (0x00006834) fep_hwr_candidate_drop_down_list_pane

0x4f96,	// (0x00006a78) fep_hwr_candidate_pane_g3_ParamLimits

0x4f96,	// (0x00006a78) fep_hwr_candidate_pane_g3

0x4fa3,	// (0x00006a85) fep_hwr_candidate_pane_g4_ParamLimits

0x4fa3,	// (0x00006a85) fep_hwr_candidate_pane_g4

0x0002,

0xfafb,	// (0x000115dd) fep_hwr_candidate_pane_g_ParamLimits

0xfafb,	// (0x000115dd) fep_hwr_candidate_pane_g

0x506e,	// (0x00006b50) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x506e,	// (0x00006b50) fep_vkb_candidate_drop_down_list_pane

0x5496,	// (0x00006f78) fep_vkb_candidate_pane_g3

0x549e,	// (0x00006f80) fep_vkb_candidate_pane_g4

0x0002,

0xfb28,	// (0x0001160a) fep_vkb_candidate_pane_g

0x5174,	// (0x00006c56) cell_hwr_candidate_pane_g1_ParamLimits

0x5509,	// (0x00006feb) cell_hwr_candidate_pane_g3_ParamLimits

0x5509,	// (0x00006feb) cell_hwr_candidate_pane_g3

0x552a,	// (0x0000700c) cell_hwr_candidate_pane_g4_ParamLimits

0x552a,	// (0x0000700c) cell_hwr_candidate_pane_g4

0x0002,

0xfb42,	// (0x00011624) cell_hwr_candidate_pane_g_ParamLimits

0xfb42,	// (0x00011624) cell_hwr_candidate_pane_g

0x5569,	// (0x0000704b) cell_vkb_candidate_pane_g3_ParamLimits

0x5569,	// (0x0000704b) cell_vkb_candidate_pane_g3

0x5584,	// (0x00007066) cell_vkb_candidate_pane_g4_ParamLimits

0x5584,	// (0x00007066) cell_vkb_candidate_pane_g4

0x5831,	// (0x00007313) cell_app_pane_cp2_g1_ParamLimits

0x5831,	// (0x00007313) cell_app_pane_cp2_g1

0x584f,	// (0x00007331) cell_app_pane_cp2_g2_ParamLimits

0x584f,	// (0x00007331) cell_app_pane_cp2_g2

0x0001,

0xfb8c,	// (0x0001166e) cell_app_pane_cp2_g_ParamLimits

0xfb8c,	// (0x0001166e) cell_app_pane_cp2_g

0x585b,	// (0x0000733d) cell_app_pane_cp2_t1_ParamLimits

0x585b,	// (0x0000733d) cell_app_pane_cp2_t1

0xefd4,	// (0x00010ab6) grid_highlight_pane_cp1_ParamLimits

0xefd4,	// (0x00010ab6) grid_highlight_pane_cp1

0x586d,	// (0x0000734f) cell_hwr_candidate_pane_cp1_ParamLimits

0x586d,	// (0x0000734f) cell_hwr_candidate_pane_cp1

0x5174,	// (0x00006c56) fep_hwr_candidate_drop_down_list_pane_g1

0x5891,	// (0x00007373) fep_hwr_candidate_drop_down_list_pane_g2

0x589e,	// (0x00007380) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x00011673) fep_hwr_candidate_drop_down_list_pane_g

0x58ab,	// (0x0000738d) fep_hwr_candidate_drop_down_list_scroll_pane

0x58b4,	// (0x00007396) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x58b4,	// (0x00007396) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x58c1,	// (0x000073a3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x58c1,	// (0x000073a3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x58ce,	// (0x000073b0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x58ce,	// (0x000073b0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5569,	// (0x0000704b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5569,	// (0x0000704b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5584,	// (0x00007066) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5584,	// (0x00007066) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x58db,	// (0x000073bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x58db,	// (0x000073bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x58f6,	// (0x000073d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x58f6,	// (0x000073d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5911,	// (0x000073f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5911,	// (0x000073f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb98,	// (0x0001167a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb98,	// (0x0001167a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x592c,	// (0x0000740e) cell_vkb_candidate_pane_cp1_ParamLimits

0x592c,	// (0x0000740e) cell_vkb_candidate_pane_cp1

0x5174,	// (0x00006c56) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5174,	// (0x00006c56) fep_vkb_candidate_drop_down_list_pane_g1

0x5891,	// (0x00007373) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5891,	// (0x00007373) fep_vkb_candidate_drop_down_list_pane_g2

0x589e,	// (0x00007380) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x589e,	// (0x00007380) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x00011673) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb91,	// (0x00011673) fep_vkb_candidate_drop_down_list_pane_g

0x5952,	// (0x00007434) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5952,	// (0x00007434) fep_vkb_candidate_drop_down_list_scroll_pane

0x595f,	// (0x00007441) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x595f,	// (0x00007441) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x596c,	// (0x0000744e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x596c,	// (0x0000744e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5978,	// (0x0000745a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5978,	// (0x0000745a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5509,	// (0x00006feb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5509,	// (0x00006feb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x552a,	// (0x0000700c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x552a,	// (0x0000700c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5984,	// (0x00007466) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5984,	// (0x00007466) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x59a5,	// (0x00007487) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x59a5,	// (0x00007487) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x59c6,	// (0x000074a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x59c6,	// (0x000074a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x0001168b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x0001168b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa239,	// (0x0000bd1b) title_pane_g1_ParamLimits

0xa24c,	// (0x0000bd2e) title_pane_g2_ParamLimits

0xf529,	// (0x0001100b) title_pane_g_ParamLimits

0x02de,	// (0x00001dc0) aid_call2_pane

0x02e6,	// (0x00001dc8) aid_call_pane

0x02ee,	// (0x00001dd0) popup_clock_analogue_window_g1

0x02ee,	// (0x00001dd0) popup_clock_analogue_window_g2

0x02f6,	// (0x00001dd8) popup_clock_analogue_window_g3

0x02ff,	// (0x00001de1) popup_clock_analogue_window_g4

0xe629,	// (0x0001010b) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x000111b0) popup_clock_analogue_window_g

0x0307,	// (0x00001de9) popup_clock_analogue_window_t1

0x03b4,	// (0x00001e96) clock_digital_number_pane_ParamLimits

0x03b4,	// (0x00001e96) clock_digital_number_pane

0x03c0,	// (0x00001ea2) clock_digital_number_pane_cp02_ParamLimits

0x03c0,	// (0x00001ea2) clock_digital_number_pane_cp02

0x03cc,	// (0x00001eae) clock_digital_number_pane_cp03_ParamLimits

0x03cc,	// (0x00001eae) clock_digital_number_pane_cp03

0x03d8,	// (0x00001eba) clock_digital_number_pane_cp04_ParamLimits

0x03d8,	// (0x00001eba) clock_digital_number_pane_cp04

0x03e4,	// (0x00001ec6) clock_digital_separator_pane_ParamLimits

0x03e4,	// (0x00001ec6) clock_digital_separator_pane

0x03f0,	// (0x00001ed2) popup_clock_digital_window_t1_ParamLimits

0x03f0,	// (0x00001ed2) popup_clock_digital_window_t1

0xe629,	// (0x0001010b) clock_digital_number_pane_g1

0xe629,	// (0x0001010b) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x000111bb) clock_digital_number_pane_g

0xe629,	// (0x0001010b) clock_digital_separator_pane_g1

0xe629,	// (0x0001010b) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x000111bb) clock_digital_separator_pane_g

0xb7fc,	// (0x0000d2de) aid_fill_nsta_ParamLimits

0xb934,	// (0x0000d416) indicator_nsta_pane_ParamLimits

0x1a53,	// (0x00003535) popup_clock_analogue_window

0x1a53,	// (0x00003535) popup_clock_digital_window

0xc3fe,	// (0x0000dee0) grid_indicator_nsta_pane_ParamLimits

0x4680,	// (0x00006162) clock_nsta_pane_t2

0x0001,

0xfa7b,	// (0x0001155d) clock_nsta_pane_t

0x00c7,	// (0x00001ba9) aid_size_max_handle

0xacbb,	// (0x0000c79d) aid_size_min_handle

0x0bce,	// (0x000026b0) editor_scroll_pane

0x59e1,	// (0x000074c3) ex_editor_pane

0xf1a2,	// (0x00010c84) scroll_pane_cp13

0xeee0,	// (0x000109c2) scroll_pane_cp14

0x033c,	// (0x00001e1e) scroll_pane_cp36

0xad48,	// (0x0000c82a) list_single_graphic_hl_pane_cp2_ParamLimits

0xad48,	// (0x0000c82a) list_single_graphic_hl_pane_cp2

0xc28b,	// (0x0000dd6d) list_single_graphic_hl_pane_ParamLimits

0xc28b,	// (0x0000dd6d) list_single_graphic_hl_pane

0x59e9,	// (0x000074cb) aid_size_min_hl_cp1

0x59f2,	// (0x000074d4) list_highlight_pane_cp34_ParamLimits

0x59f2,	// (0x000074d4) list_highlight_pane_cp34

0x5a03,	// (0x000074e5) list_single_graphic_hl_pane_g1_ParamLimits

0x5a03,	// (0x000074e5) list_single_graphic_hl_pane_g1

0xc7ca,	// (0x0000e2ac) list_single_graphic_hl_pane_g2_ParamLimits

0xc7ca,	// (0x0000e2ac) list_single_graphic_hl_pane_g2

0xc7ca,	// (0x0000e2ac) list_single_graphic_hl_pane_g3_ParamLimits

0xc7ca,	// (0x0000e2ac) list_single_graphic_hl_pane_g3

0x0b05,	// (0x000025e7) list_single_graphic_hl_pane_g4_ParamLimits

0x0b05,	// (0x000025e7) list_single_graphic_hl_pane_g4

0xc7d6,	// (0x0000e2b8) list_single_graphic_hl_pane_g5_ParamLimits

0xc7d6,	// (0x0000e2b8) list_single_graphic_hl_pane_g5

0x0004,

0xfbba,	// (0x0001169c) list_single_graphic_hl_pane_g_ParamLimits

0xfbba,	// (0x0001169c) list_single_graphic_hl_pane_g

0x2d08,	// (0x000047ea) list_single_graphic_hl_pane_t1_ParamLimits

0x2d08,	// (0x000047ea) list_single_graphic_hl_pane_t1

0x5a46,	// (0x00007528) aid_size_min_hl_cp2

0x5a4f,	// (0x00007531) list_highlight_pane_cp34_cp2_ParamLimits

0x5a4f,	// (0x00007531) list_highlight_pane_cp34_cp2

0x5a03,	// (0x000074e5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5a03,	// (0x000074e5) list_single_graphic_hl_pane_g1_cp2

0x5a5c,	// (0x0000753e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a5c,	// (0x0000753e) list_single_graphic_hl_pane_g2_cp2

0x5a68,	// (0x0000754a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5a68,	// (0x0000754a) list_single_graphic_hl_pane_g3_cp2

0x5a76,	// (0x00007558) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5a76,	// (0x00007558) list_single_graphic_hl_pane_g4_cp2

0x5a82,	// (0x00007564) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5a82,	// (0x00007564) list_single_graphic_hl_pane_g5_cp2

0xafbc,	// (0x0000ca9e) control_pane_g4_ParamLimits

0xafbc,	// (0x0000ca9e) control_pane_g4

0x10ff,	// (0x00002be1) bg_popup_sub_pane_cp10_ParamLimits

0x4cd9,	// (0x000067bb) list_choice_list_pane_ParamLimits

0x4ce8,	// (0x000067ca) scroll_pane_cp23

0xea32,	// (0x00010514) bg_popup_preview_window_pane_cp02_ParamLimits

0x55f5,	// (0x000070d7) list_preview_fixed_pane_ParamLimits

0x560b,	// (0x000070ed) list_preview_fixed_pane_cp_ParamLimits

0x560b,	// (0x000070ed) list_preview_fixed_pane_cp

0x5617,	// (0x000070f9) popup_preview_fixed_window_g1_ParamLimits

0x5617,	// (0x000070f9) popup_preview_fixed_window_g1

0x5623,	// (0x00007105) popup_preview_fixed_window_g2_ParamLimits

0x5623,	// (0x00007105) popup_preview_fixed_window_g2

0x0002,

0xfb49,	// (0x0001162b) popup_preview_fixed_window_g_ParamLimits

0xfb49,	// (0x0001162b) popup_preview_fixed_window_g

0xf479,	// (0x00010f5b) aid_navi_side_left_pane_ParamLimits

0xf48e,	// (0x00010f70) aid_navi_side_right_pane_ParamLimits

0xf4a6,	// (0x00010f88) navi_icon_pane_stacon_ParamLimits

0xf4ba,	// (0x00010f9c) navi_navi_pane_stacon_ParamLimits

0xf4a6,	// (0x00010f88) navi_text_pane_stacon_ParamLimits

0xe61f,	// (0x00010101) main_text_info_pane

0x5aac,	// (0x0000758e) listscroll_text_info_pane

0x5ab4,	// (0x00007596) list_text_info_pane_ParamLimits

0x5ab4,	// (0x00007596) list_text_info_pane

0x5ac3,	// (0x000075a5) scroll_pane_cp24_ParamLimits

0x5ac3,	// (0x000075a5) scroll_pane_cp24

0xc7ea,	// (0x0000e2cc) list_text_info_pane_t1_ParamLimits

0xc7ea,	// (0x0000e2cc) list_text_info_pane_t1

0xb0ef,	// (0x0000cbd1) popup_fast_swap2_window_ParamLimits

0xb0ef,	// (0x0000cbd1) popup_fast_swap2_window

0x5b06,	// (0x000075e8) aid_size_cell_fast2

0xe61f,	// (0x00010101) bg_popup_window_pane_cp17

0x5b10,	// (0x000075f2) heading_pane_cp2

0x5b18,	// (0x000075fa) listscroll_fast2_pane

0x5b20,	// (0x00007602) grid_fast2_pane

0x5b2a,	// (0x0000760c) listscroll_fast2_pane_g1

0x5b34,	// (0x00007616) listscroll_fast2_pane_g2

0x0001,

0xfbc5,	// (0x000116a7) listscroll_fast2_pane_g

0xf1a2,	// (0x00010c84) scroll_pane_cp26

0x5b3e,	// (0x00007620) cell_fast2_pane_ParamLimits

0x5b3e,	// (0x00007620) cell_fast2_pane

0x5b55,	// (0x00007637) cell_fast2_pane_g1

0x5b5e,	// (0x00007640) cell_fast2_pane_g2

0x5b67,	// (0x00007649) cell_fast2_pane_g3

0x0002,

0xfbca,	// (0x000116ac) cell_fast2_pane_g

0xeca7,	// (0x00010789) grid_highlight_pane_cp9

0xecbc,	// (0x0001079e) main_eswt_pane_ParamLimits

0xecbc,	// (0x0001079e) main_eswt_pane

0x5ad8,	// (0x000075ba) list_single_text_info_pane

0x5b6f,	// (0x00007651) eswt_ctrl_button_pane

0x5b6f,	// (0x00007651) eswt_ctrl_canvas_pane

0x5b77,	// (0x00007659) eswt_ctrl_combo_pane

0x5b6f,	// (0x00007651) eswt_ctrl_default_pane

0x5b6f,	// (0x00007651) eswt_ctrl_label_pane

0x5b7f,	// (0x00007661) eswt_ctrl_wait_pane

0x5b87,	// (0x00007669) eswt_shell_pane

0xe61f,	// (0x00010101) listscroll_eswt_app_pane

0x5ba7,	// (0x00007689) popup_eswt_tasktip_window_ParamLimits

0x5ba7,	// (0x00007689) popup_eswt_tasktip_window

0x1ebf,	// (0x000039a1) bg_popup_window_pane_cp18

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_ParamLimits

0x5bc0,	// (0x000076a2) eswt_control_pane_g1

0x5bcd,	// (0x000076af) eswt_control_pane_g2_ParamLimits

0x5bcd,	// (0x000076af) eswt_control_pane_g2

0x5bda,	// (0x000076bc) eswt_control_pane_g3_ParamLimits

0x5bda,	// (0x000076bc) eswt_control_pane_g3

0x5be7,	// (0x000076c9) eswt_control_pane_g4_ParamLimits

0x5be7,	// (0x000076c9) eswt_control_pane_g4

0x0003,

0xfbd1,	// (0x000116b3) eswt_control_pane_g_ParamLimits

0xfbd1,	// (0x000116b3) eswt_control_pane_g

0xefd4,	// (0x00010ab6) bg_button_pane_ParamLimits

0xefd4,	// (0x00010ab6) bg_button_pane

0xecbc,	// (0x0001079e) common_borders_pane_copy2_ParamLimits

0xecbc,	// (0x0001079e) common_borders_pane_copy2

0x5bf4,	// (0x000076d6) control_button_pane_g1_ParamLimits

0x5bf4,	// (0x000076d6) control_button_pane_g1

0x5c00,	// (0x000076e2) control_button_pane_g2_ParamLimits

0x5c00,	// (0x000076e2) control_button_pane_g2

0x5c0c,	// (0x000076ee) control_button_pane_g3_ParamLimits

0x5c0c,	// (0x000076ee) control_button_pane_g3

0x0002,

0xfbda,	// (0x000116bc) control_button_pane_g_ParamLimits

0xfbda,	// (0x000116bc) control_button_pane_g

0x5c20,	// (0x00007702) control_button_pane_t1

0x5c2e,	// (0x00007710) control_button_pane_t2

0x0001,

0xfbe1,	// (0x000116c3) control_button_pane_t

0x1d24,	// (0x00003806) bg_button_pane_g1

0x1d2c,	// (0x0000380e) bg_button_pane_g2

0x1d34,	// (0x00003816) bg_button_pane_g3

0x1d3c,	// (0x0000381e) bg_button_pane_g4

0x1d44,	// (0x00003826) bg_button_pane_g5

0x1d4c,	// (0x0000382e) bg_button_pane_g6

0x1d54,	// (0x00003836) bg_button_pane_g7

0x1d5c,	// (0x0000383e) bg_button_pane_g8

0x1d64,	// (0x00003846) bg_button_pane_g9

0x0008,

0xf830,	// (0x00011312) bg_button_pane_g

0x4c94,	// (0x00006776) common_borders_pane_ParamLimits

0x4c94,	// (0x00006776) common_borders_pane

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy1_ParamLimits

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy1

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy1_ParamLimits

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy1

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy1_ParamLimits

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy1

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy1_ParamLimits

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy1

0x4ccf,	// (0x000067b1) bg_eswt_ctrl_canvas_pane_g1

0x4c94,	// (0x00006776) common_borders_pane_cp2_ParamLimits

0x4c94,	// (0x00006776) common_borders_pane_cp2

0x4c94,	// (0x00006776) common_borders_pane_cp3_ParamLimits

0x4c94,	// (0x00006776) common_borders_pane_cp3

0x5c3c,	// (0x0000771e) separator_horizontal_pane

0x5c44,	// (0x00007726) separator_vertical_pane

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy2_ParamLimits

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy2

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy2_ParamLimits

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy2

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy2_ParamLimits

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy2

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy2_ParamLimits

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy2

0xe61f,	// (0x00010101) common_borders_pane_cp4

0x5c4d,	// (0x0000772f) separator_horizontal_pane_g1

0x5c56,	// (0x00007738) separator_horizontal_pane_g2

0x5c5f,	// (0x00007741) separator_horizontal_pane_g3

0x0002,

0xfbe6,	// (0x000116c8) separator_horizontal_pane_g

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy3_ParamLimits

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy3

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy3_ParamLimits

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy3

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy3_ParamLimits

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy3

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy3_ParamLimits

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy3

0xe61f,	// (0x00010101) common_borders_pane_cp5

0x5c68,	// (0x0000774a) separator_vertical_pane_g1

0x5c71,	// (0x00007753) separator_vertical_pane_g2

0x5c7a,	// (0x0000775c) separator_vertical_pane_g3

0x0002,

0xfbed,	// (0x000116cf) separator_vertical_pane_g

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy4_ParamLimits

0x5bc0,	// (0x000076a2) eswt_control_pane_g1_copy4

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy4_ParamLimits

0x5bcd,	// (0x000076af) eswt_control_pane_g2_copy4

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy4_ParamLimits

0x5bda,	// (0x000076bc) eswt_control_pane_g3_copy4

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy4_ParamLimits

0x5be7,	// (0x000076c9) eswt_control_pane_g4_copy4

0xc80c,	// (0x0000e2ee) eswt_ctrl_combo_button_pane

0xc814,	// (0x0000e2f6) eswt_ctrl_input_pane

0xc81c,	// (0x0000e2fe) popup_choice_list_window_cp70

0xc824,	// (0x0000e306) eswt_ctrl_input_pane_t1

0xe61f,	// (0x00010101) input_focus_pane_cp70

0x4c94,	// (0x00006776) bg_button_pane_cp70_ParamLimits

0x4c94,	// (0x00006776) bg_button_pane_cp70

0xc832,	// (0x0000e314) eswt_ctrl_combo_button_pane_g1

0x5cb1,	// (0x00007793) wait_bar_pane_cp70

0x1ebf,	// (0x000039a1) bg_popup_window_pane_cp70_ParamLimits

0x1ebf,	// (0x000039a1) bg_popup_window_pane_cp70

0x5cb9,	// (0x0000779b) popup_eswt_tasktip_window_t1

0x5ccf,	// (0x000077b1) wait_bar_pane_cp71_ParamLimits

0x5ccf,	// (0x000077b1) wait_bar_pane_cp71

0x5cdb,	// (0x000077bd) grid_eswt_app_pane

0x012b,	// (0x00001c0d) scroll_pane_cp70

0xc83a,	// (0x0000e31c) cell_eswt_app_pane_ParamLimits

0xc83a,	// (0x0000e31c) cell_eswt_app_pane

0xc86c,	// (0x0000e34e) cell_eswt_app_pane_g1_ParamLimits

0xc86c,	// (0x0000e34e) cell_eswt_app_pane_g1

0xc89b,	// (0x0000e37d) cell_eswt_app_pane_g2_ParamLimits

0xc89b,	// (0x0000e37d) cell_eswt_app_pane_g2

0x0001,

0xfbf4,	// (0x000116d6) cell_eswt_app_pane_g_ParamLimits

0xfbf4,	// (0x000116d6) cell_eswt_app_pane_g

0xc8c4,	// (0x0000e3a6) cell_eswt_app_pane_t1_ParamLimits

0xc8c4,	// (0x0000e3a6) cell_eswt_app_pane_t1

0x5da0,	// (0x00007882) grid_highlight_pane_cp70_ParamLimits

0x5da0,	// (0x00007882) grid_highlight_pane_cp70

0x0a94,	// (0x00002576) set_content_pane_g1

0xafa0,	// (0x0000ca82) status_small_volume_pane

0xc8f6,	// (0x0000e3d8) status_small_volume_pane_g1

0xc8fe,	// (0x0000e3e0) volume_small2_pane

0xc907,	// (0x0000e3e9) volume_small2_pane_g1

0xc910,	// (0x0000e3f2) volume_small2_pane_g2

0xc919,	// (0x0000e3fb) volume_small2_pane_g3

0xc922,	// (0x0000e404) volume_small2_pane_g4

0xc92b,	// (0x0000e40d) volume_small2_pane_g5

0xc934,	// (0x0000e416) volume_small2_pane_g6

0xc93d,	// (0x0000e41f) volume_small2_pane_g7

0xc946,	// (0x0000e428) volume_small2_pane_g8

0xc94f,	// (0x0000e431) volume_small2_pane_g9

0xc958,	// (0x0000e43a) volume_small2_pane_g10

0x0009,

0xfbf9,	// (0x000116db) volume_small2_pane_g

0x52c8,	// (0x00006daa) fep_vkb_top_text_pane_g1_ParamLimits

0xc772,	// (0x0000e254) fep_vkb_top_text_pane_t1_ParamLimits

0x562f,	// (0x00007111) popup_preview_fixed_window_g3_ParamLimits

0x562f,	// (0x00007111) popup_preview_fixed_window_g3

0xb78f,	// (0x0000d271) popup_toolbar_trans_pane

0xc0b0,	// (0x0000db92) aid_height_set_list_ParamLimits

0x3555,	// (0x00005037) aid_size_parent_ParamLimits

0x10ff,	// (0x00002be1) list_highlight_pane_cp2_ParamLimits

0x0a94,	// (0x00002576) set_content_pane_g1_ParamLimits

0xc29f,	// (0x0000dd81) list_single_image_pane_ParamLimits

0xc29f,	// (0x0000dd81) list_single_image_pane

0xc961,	// (0x0000e443) aid_size_cell_image_ParamLimits

0xc961,	// (0x0000e443) aid_size_cell_image

0xc96e,	// (0x0000e450) grid_single_image_pane_ParamLimits

0xc96e,	// (0x0000e450) grid_single_image_pane

0xeffa,	// (0x00010adc) list_single_image_pane_g1_ParamLimits

0xeffa,	// (0x00010adc) list_single_image_pane_g1

0xf006,	// (0x00010ae8) list_single_image_pane_g2_ParamLimits

0xf006,	// (0x00010ae8) list_single_image_pane_g2

0x0001,

0xfc0e,	// (0x000116f0) list_single_image_pane_g_ParamLimits

0xfc0e,	// (0x000116f0) list_single_image_pane_g

0x5e32,	// (0x00007914) list_single_image_pane_t1_ParamLimits

0x5e32,	// (0x00007914) list_single_image_pane_t1

0xc97c,	// (0x0000e45e) cell_image_list_pane_ParamLimits

0xc97c,	// (0x0000e45e) cell_image_list_pane

0xc992,	// (0x0000e474) cell_image_list_pane_g1

0xc99b,	// (0x0000e47d) cell_image_list_pane_g2

0x0001,

0xfc13,	// (0x000116f5) cell_image_list_pane_g

0x5e72,	// (0x00007954) aid_size_cell_tb_trans_pane

0xefd4,	// (0x00010ab6) bg_tb_trans_pane

0x5e84,	// (0x00007966) grid_tb_trans_pane

0x1d24,	// (0x00003806) bg_tb_trans_pane_g1

0x1d2c,	// (0x0000380e) bg_tb_trans_pane_g2

0x1d34,	// (0x00003816) bg_tb_trans_pane_g3

0x1d3c,	// (0x0000381e) bg_tb_trans_pane_g4

0x1d44,	// (0x00003826) bg_tb_trans_pane_g5

0x1d5c,	// (0x0000383e) bg_tb_trans_pane_g6

0x1d64,	// (0x00003846) bg_tb_trans_pane_g7

0x1d4c,	// (0x0000382e) bg_tb_trans_pane_g8

0x1d54,	// (0x00003836) bg_tb_trans_pane_g9

0x0008,

0xfc18,	// (0x000116fa) bg_tb_trans_pane_g

0x5e98,	// (0x0000797a) cell_toolbar_trans_pane_ParamLimits

0x5e98,	// (0x0000797a) cell_toolbar_trans_pane

0x4ccf,	// (0x000067b1) cell_toolbar_trans_pane_g1

0xc4df,	// (0x0000dfc1) list_form2_midp_pane_t1

0xc4ed,	// (0x0000dfcf) list_form2_midp_pane_t2

0x0001,

0xfac1,	// (0x000115a3) list_form2_midp_pane_t

0x48d0,	// (0x000063b2) scroll_pane_cp51_ParamLimits

0x4aea,	// (0x000065cc) form2_midp_wait_pane_g1

0x4af3,	// (0x000065d5) form2_midp_wait_pane_g2

0x4afc,	// (0x000065de) form2_midp_wait_pane_g3

0x0002,

0xfad6,	// (0x000115b8) form2_midp_wait_pane_g

0xe85c,	// (0x0001033e) list_highlight_pane_cp21_ParamLimits

0x4b35,	// (0x00006617) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4b44,	// (0x00006626) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3773,	// (0x00005255) list_single_2graphic_im_pane_ParamLimits

0x3773,	// (0x00005255) list_single_2graphic_im_pane

0xc9a4,	// (0x0000e486) list_single_2graphic_im_pane_g1_ParamLimits

0xc9a4,	// (0x0000e486) list_single_2graphic_im_pane_g1

0xc9b5,	// (0x0000e497) list_single_2graphic_im_pane_g2_ParamLimits

0xc9b5,	// (0x0000e497) list_single_2graphic_im_pane_g2

0xc9c1,	// (0x0000e4a3) list_single_2graphic_im_pane_g3_ParamLimits

0xc9c1,	// (0x0000e4a3) list_single_2graphic_im_pane_g3

0x0003,

0xfc2b,	// (0x0001170d) list_single_2graphic_im_pane_g_ParamLimits

0xfc2b,	// (0x0001170d) list_single_2graphic_im_pane_g

0xc9d5,	// (0x0000e4b7) list_single_2graphic_im_pane_t1_ParamLimits

0xc9d5,	// (0x0000e4b7) list_single_2graphic_im_pane_t1

0x563b,	// (0x0000711d) list_single_graphic_2heading_pane_fp_ParamLimits

0x563b,	// (0x0000711d) list_single_graphic_2heading_pane_fp

0x5697,	// (0x00007179) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5697,	// (0x00007179) list_single_graphic_2heading_pane_fp_g1

0x5654,	// (0x00007136) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5654,	// (0x00007136) list_single_graphic_2heading_pane_fp_g2

0xef09,	// (0x000109eb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xef09,	// (0x000109eb) list_single_graphic_2heading_pane_fp_g3

0x5660,	// (0x00007142) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5660,	// (0x00007142) list_single_graphic_2heading_pane_fp_g4

0x5674,	// (0x00007156) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5674,	// (0x00007156) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb59,	// (0x0001163b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb59,	// (0x0001163b) list_single_graphic_2heading_pane_fp_g

0x5f2c,	// (0x00007a0e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5f2c,	// (0x00007a0e) list_single_graphic_2heading_pane_fp_t1

0x56cf,	// (0x000071b1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x56cf,	// (0x000071b1) list_single_graphic_2heading_pane_fp_t2

0x5f42,	// (0x00007a24) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5f42,	// (0x00007a24) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc34,	// (0x00011716) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc34,	// (0x00011716) list_single_graphic_2heading_pane_fp_t

0x4f04,	// (0x000069e6) fep_hwr_write_pane_g5_ParamLimits

0x4f04,	// (0x000069e6) fep_hwr_write_pane_g5

0x4f10,	// (0x000069f2) fep_hwr_write_pane_g6_ParamLimits

0x4f10,	// (0x000069f2) fep_hwr_write_pane_g6

0x5b87,	// (0x00007669) eswt_shell_pane_ParamLimits

0x1ebf,	// (0x000039a1) bg_popup_window_pane_cp18_ParamLimits

0x5bb8,	// (0x0000769a) heading_pane_cp70

0x5cb9,	// (0x0000779b) popup_eswt_tasktip_window_t1_ParamLimits

0xb859,	// (0x0000d33b) aid_touch_tab_arrow_left

0xb86f,	// (0x0000d351) aid_touch_tab_arrow_right

0xa270,	// (0x0000bd52) title_pane_g3_ParamLimits

0xa270,	// (0x0000bd52) title_pane_g3

0xef2d,	// (0x00010a0f) set_value_pane_g1

0xb78f,	// (0x0000d271) popup_toolbar_trans_pane_ParamLimits

0x5e72,	// (0x00007954) aid_size_cell_tb_trans_pane_ParamLimits

0xefd4,	// (0x00010ab6) bg_tb_trans_pane_ParamLimits

0x5e84,	// (0x00007966) grid_tb_trans_pane_ParamLimits

0xea32,	// (0x00010514) cont_note_pane_ParamLimits

0xea32,	// (0x00010514) cont_note_pane

0xecbc,	// (0x0001079e) cont_snote2_single_text_pane_ParamLimits

0xecbc,	// (0x0001079e) cont_snote2_single_text_pane

0xecbc,	// (0x0001079e) cont_snote2_single_graphic_pane_ParamLimits

0xecbc,	// (0x0001079e) cont_snote2_single_graphic_pane

0x256e,	// (0x00004050) cont_note_wait_pane_ParamLimits

0x256e,	// (0x00004050) cont_note_wait_pane

0x256e,	// (0x00004050) cont_note_image_pane_ParamLimits

0x256e,	// (0x00004050) cont_note_image_pane

0x5f58,	// (0x00007a3a) popup_note2_window_g1_ParamLimits

0x5f58,	// (0x00007a3a) popup_note2_window_g1

0x5f89,	// (0x00007a6b) popup_note2_window_t1_ParamLimits

0x5f89,	// (0x00007a6b) popup_note2_window_t1

0x5fce,	// (0x00007ab0) popup_note2_window_t2_ParamLimits

0x5fce,	// (0x00007ab0) popup_note2_window_t2

0x6013,	// (0x00007af5) popup_note2_window_t3_ParamLimits

0x6013,	// (0x00007af5) popup_note2_window_t3

0x6058,	// (0x00007b3a) popup_note2_window_t4_ParamLimits

0x6058,	// (0x00007b3a) popup_note2_window_t4

0xeab6,	// (0x00010598) popup_note2_window_t5_ParamLimits

0xeab6,	// (0x00010598) popup_note2_window_t5

0x0004,

0xfc40,	// (0x00011722) popup_note2_window_t_ParamLimits

0xfc40,	// (0x00011722) popup_note2_window_t

0x6087,	// (0x00007b69) popup_note2_image_window_g1_ParamLimits

0x6087,	// (0x00007b69) popup_note2_image_window_g1

0x6093,	// (0x00007b75) popup_note2_image_window_g2_ParamLimits

0x6093,	// (0x00007b75) popup_note2_image_window_g2

0x0001,

0xfc4b,	// (0x0001172d) popup_note2_image_window_g_ParamLimits

0xfc4b,	// (0x0001172d) popup_note2_image_window_g

0x60a5,	// (0x00007b87) popup_note2_image_window_t1_ParamLimits

0x60a5,	// (0x00007b87) popup_note2_image_window_t1

0x60bd,	// (0x00007b9f) popup_note2_image_window_t2_ParamLimits

0x60bd,	// (0x00007b9f) popup_note2_image_window_t2

0x60d5,	// (0x00007bb7) popup_note2_image_window_t3_ParamLimits

0x60d5,	// (0x00007bb7) popup_note2_image_window_t3

0x0002,

0xfc50,	// (0x00011732) popup_note2_image_window_t_ParamLimits

0xfc50,	// (0x00011732) popup_note2_image_window_t

0x257c,	// (0x0000405e) popup_note2_wait_window_g1_ParamLimits

0x257c,	// (0x0000405e) popup_note2_wait_window_g1

0x60f1,	// (0x00007bd3) popup_note2_wait_window_g2_ParamLimits

0x60f1,	// (0x00007bd3) popup_note2_wait_window_g2

0x2594,	// (0x00004076) popup_note2_wait_window_g3_ParamLimits

0x2594,	// (0x00004076) popup_note2_wait_window_g3

0x0002,

0xfc57,	// (0x00011739) popup_note2_wait_window_g_ParamLimits

0xfc57,	// (0x00011739) popup_note2_wait_window_g

0x60fd,	// (0x00007bdf) popup_note2_wait_window_t1_ParamLimits

0x60fd,	// (0x00007bdf) popup_note2_wait_window_t1

0x611b,	// (0x00007bfd) popup_note2_wait_window_t2_ParamLimits

0x611b,	// (0x00007bfd) popup_note2_wait_window_t2

0x6139,	// (0x00007c1b) popup_note2_wait_window_t3_ParamLimits

0x6139,	// (0x00007c1b) popup_note2_wait_window_t3

0x614b,	// (0x00007c2d) popup_note2_wait_window_t4_ParamLimits

0x614b,	// (0x00007c2d) popup_note2_wait_window_t4

0x0003,

0xfc5e,	// (0x00011740) popup_note2_wait_window_t_ParamLimits

0xfc5e,	// (0x00011740) popup_note2_wait_window_t

0x615d,	// (0x00007c3f) wait_bar2_pane_ParamLimits

0x615d,	// (0x00007c3f) wait_bar2_pane

0x6175,	// (0x00007c57) popup_snote2_single_text_window_g1_ParamLimits

0x6175,	// (0x00007c57) popup_snote2_single_text_window_g1

0x619d,	// (0x00007c7f) popup_snote2_single_text_window_t1_ParamLimits

0x619d,	// (0x00007c7f) popup_snote2_single_text_window_t1

0x61e9,	// (0x00007ccb) popup_snote2_single_text_window_t2_ParamLimits

0x61e9,	// (0x00007ccb) popup_snote2_single_text_window_t2

0x6235,	// (0x00007d17) popup_snote2_single_text_window_t3_ParamLimits

0x6235,	// (0x00007d17) popup_snote2_single_text_window_t3

0x6276,	// (0x00007d58) popup_snote2_single_text_window_t4_ParamLimits

0x6276,	// (0x00007d58) popup_snote2_single_text_window_t4

0x62ac,	// (0x00007d8e) popup_snote2_single_text_window_t5_ParamLimits

0x62ac,	// (0x00007d8e) popup_snote2_single_text_window_t5

0x0004,

0xfc67,	// (0x00011749) popup_snote2_single_text_window_t_ParamLimits

0xfc67,	// (0x00011749) popup_snote2_single_text_window_t

0x62d7,	// (0x00007db9) popup_snote2_single_graphic_window_g1_ParamLimits

0x62d7,	// (0x00007db9) popup_snote2_single_graphic_window_g1

0x62ff,	// (0x00007de1) popup_snote2_single_graphic_window_g2_ParamLimits

0x62ff,	// (0x00007de1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc72,	// (0x00011754) popup_snote2_single_graphic_window_g_ParamLimits

0xfc72,	// (0x00011754) popup_snote2_single_graphic_window_g

0x6327,	// (0x00007e09) popup_snote2_single_graphic_window_t1_ParamLimits

0x6327,	// (0x00007e09) popup_snote2_single_graphic_window_t1

0x6373,	// (0x00007e55) popup_snote2_single_graphic_window_t2_ParamLimits

0x6373,	// (0x00007e55) popup_snote2_single_graphic_window_t2

0x6235,	// (0x00007d17) popup_snote2_single_graphic_window_t3_ParamLimits

0x6235,	// (0x00007d17) popup_snote2_single_graphic_window_t3

0x6276,	// (0x00007d58) popup_snote2_single_graphic_window_t4_ParamLimits

0x6276,	// (0x00007d58) popup_snote2_single_graphic_window_t4

0x62ac,	// (0x00007d8e) popup_snote2_single_graphic_window_t5_ParamLimits

0x62ac,	// (0x00007d8e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc77,	// (0x00011759) popup_snote2_single_graphic_window_t_ParamLimits

0xfc77,	// (0x00011759) popup_snote2_single_graphic_window_t

0x472f,	// (0x00006211) clock_nsta_pane_cp2_t1

0x472f,	// (0x00006211) clock_nsta_pane_cp2_t2

0x0001,

0xfa97,	// (0x00011579) clock_nsta_pane_cp2_t

0xefee,	// (0x00010ad0) form_field_data_wide_pane_g1_ParamLimits

0xeffa,	// (0x00010adc) form_field_data_wide_pane_g2_ParamLimits

0xeffa,	// (0x00010adc) form_field_data_wide_pane_g2

0xf006,	// (0x00010ae8) form_field_data_wide_pane_g3_ParamLimits

0xf006,	// (0x00010ae8) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00011133) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00011133) form_field_data_wide_pane_g

0xc3e8,	// (0x0000deca) grid_touch_3_pane_ParamLimits

0xc3e8,	// (0x0000deca) grid_touch_3_pane

0xca06,	// (0x0000e4e8) cell_touch_3_pane_ParamLimits

0xca06,	// (0x0000e4e8) cell_touch_3_pane

0x4ccf,	// (0x000067b1) cell_touch_3_pane_g1

0x4ccf,	// (0x000067b1) cell_touch_3_pane_g2

0x0001,

0xfb1c,	// (0x000115fe) cell_touch_3_pane_g

0xeb0e,	// (0x000105f0) cont_query_data_pane

0xeb16,	// (0x000105f8) cont_query_data_pane_cp1

0x63f2,	// (0x00007ed4) button_value_adjust_pane_cp7

0x63fa,	// (0x00007edc) query_popup_pane_cp3

0x046d,	// (0x00001f4f) bg_popup_sub_pane_cp22_ParamLimits

0x0483,	// (0x00001f65) navi_navi_volume_pane_cp2

0x049e,	// (0x00001f80) popup_side_volume_key_window_g2

0x04ad,	// (0x00001f8f) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x000111c9) popup_side_volume_key_window_g

0x04ca,	// (0x00001fac) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x000111d0) popup_side_volume_key_window_t

0x095a,	// (0x0000243c) popup_side_volume_key_window_ParamLimits

0xa746,	// (0x0000c228) list_double_graphic_pane_g4_ParamLimits

0xa746,	// (0x0000c228) list_double_graphic_pane_g4

0xc276,	// (0x0000dd58) list_single_2heading_msg_pane_ParamLimits

0xc276,	// (0x0000dd58) list_single_2heading_msg_pane

0xca52,	// (0x0000e534) list_single_2heading_msg_pane_g1_ParamLimits

0xca52,	// (0x0000e534) list_single_2heading_msg_pane_g1

0xca5e,	// (0x0000e540) list_single_2heading_msg_pane_g2_ParamLimits

0xca5e,	// (0x0000e540) list_single_2heading_msg_pane_g2

0xca71,	// (0x0000e553) list_single_2heading_msg_pane_g3_ParamLimits

0xca71,	// (0x0000e553) list_single_2heading_msg_pane_g3

0xca7d,	// (0x0000e55f) list_single_2heading_msg_pane_g4_ParamLimits

0xca7d,	// (0x0000e55f) list_single_2heading_msg_pane_g4

0x0003,

0xfc82,	// (0x00011764) list_single_2heading_msg_pane_g_ParamLimits

0xfc82,	// (0x00011764) list_single_2heading_msg_pane_g

0xca95,	// (0x0000e577) list_single_2heading_msg_pane_t1_ParamLimits

0xca95,	// (0x0000e577) list_single_2heading_msg_pane_t1

0xcabd,	// (0x0000e59f) list_single_2heading_msg_pane_t2_ParamLimits

0xcabd,	// (0x0000e59f) list_single_2heading_msg_pane_t2

0xcb28,	// (0x0000e60a) list_single_2heading_msg_pane_t3_ParamLimits

0xcb28,	// (0x0000e60a) list_single_2heading_msg_pane_t3

0x64f7,	// (0x00007fd9) list_single_2heading_msg_pane_t4_ParamLimits

0x64f7,	// (0x00007fd9) list_single_2heading_msg_pane_t4

0x0003,

0xfc8b,	// (0x0001176d) list_single_2heading_msg_pane_t_ParamLimits

0xfc8b,	// (0x0001176d) list_single_2heading_msg_pane_t

0xe800,	// (0x000102e2) title_pane_g4_ParamLimits

0xe800,	// (0x000102e2) title_pane_g4

0xf3a2,	// (0x00010e84) title_pane_stacon_g3_ParamLimits

0xf3a2,	// (0x00010e84) title_pane_stacon_g3

0x5eef,	// (0x000079d1) list_single_2graphic_im_pane_g4_ParamLimits

0x5eef,	// (0x000079d1) list_single_2graphic_im_pane_g4

0x314a,	// (0x00004c2c) popup_side_volume_key_window_cp

0x3bfa,	// (0x000056dc) main_idle_act2_pane_t1

0x1d6c,	// (0x0000384e) toolbar_button_pane_g10

0xa5f1,	// (0x0000c0d3) popup_toolbar_window_cp1

0x4720,	// (0x00006202) clock_nsta_pane_cp_t1

0x4720,	// (0x00006202) clock_nsta_pane_cp_t2

0x0001,

0xfa92,	// (0x00011574) clock_nsta_pane_cp_t

0x0483,	// (0x00001f65) navi_navi_volume_pane_cp2_ParamLimits

0x0492,	// (0x00001f74) popup_side_volume_key_window_g1_ParamLimits

0x049e,	// (0x00001f80) popup_side_volume_key_window_g2_ParamLimits

0x04ad,	// (0x00001f8f) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x000111c9) popup_side_volume_key_window_g_ParamLimits

0x4d3e,	// (0x00006820) fep_hwr_aid_pane

0x4de7,	// (0x000068c9) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e07,	// (0x000068e9) fep_hwr_top_pane_g1_ParamLimits

0x4e19,	// (0x000068fb) fep_hwr_top_pane_g2_ParamLimits

0x4e2b,	// (0x0000690d) fep_hwr_top_pane_g3_ParamLimits

0xfae7,	// (0x000115c9) fep_hwr_top_pane_g_ParamLimits

0x4e40,	// (0x00006922) fep_hwr_top_text_pane_ParamLimits

0x2eff,	// (0x000049e1) aid_touch_tab_arrow_arrow_2

0x2f08,	// (0x000049ea) aid_touch_tab_arrow_left_2

0x4d52,	// (0x00006834) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4d89,	// (0x0000686b) fep_hwr_prediction_pane

0x50c2,	// (0x00006ba4) fep_vkb_prediction_pane

0xc752,	// (0x0000e234) fep_vkb_side_pane_g3_ParamLimits

0xc752,	// (0x0000e234) fep_vkb_side_pane_g3

0x5174,	// (0x00006c56) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5891,	// (0x00007373) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x589e,	// (0x00007380) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb91,	// (0x00011673) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x651c,	// (0x00007ffe) fep_hwr_prediction_pane_g1

0x6526,	// (0x00008008) fep_hwr_prediction_pane_g2

0x652e,	// (0x00008010) fep_hwr_prediction_pane_g3

0x6536,	// (0x00008018) fep_hwr_prediction_pane_g4

0x0003,

0xfc94,	// (0x00011776) fep_hwr_prediction_pane_g

0x651c,	// (0x00007ffe) fep_vkb_prediction_pane_g1

0x653e,	// (0x00008020) fep_vkb_prediction_pane_g2

0x6546,	// (0x00008028) fep_vkb_prediction_pane_g3

0x654e,	// (0x00008030) fep_vkb_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0001177f) fep_vkb_prediction_pane_g

0x34bc,	// (0x00004f9e) slider_set_pane_g3

0x34d0,	// (0x00004fb2) slider_set_pane_g4

0x34e8,	// (0x00004fca) slider_set_pane_g5

0x34bc,	// (0x00004f9e) slider_set_pane_g6

0x34fe,	// (0x00004fe0) slider_set_pane_g7

0x36d4,	// (0x000051b6) slider_form_pane_g3

0x36dd,	// (0x000051bf) slider_form_pane_g4

0x36e5,	// (0x000051c7) slider_form_pane_g5

0x36d4,	// (0x000051b6) slider_form_pane_g6

0xc219,	// (0x0000dcfb) slider_form_pane_g7

0x3f0f,	// (0x000059f1) slider_set_pane_vc_g3

0x3f18,	// (0x000059fa) slider_set_pane_vc_g4

0x3f21,	// (0x00005a03) slider_set_pane_vc_g5

0x3f0f,	// (0x000059f1) slider_set_pane_vc_g6

0x3f2a,	// (0x00005a0c) slider_set_pane_vc_g7

0x43cf,	// (0x00005eb1) slider_form_pane_vc_g1

0x43d8,	// (0x00005eba) slider_form_pane_vc_g2

0x43e1,	// (0x00005ec3) slider_form_pane_vc_g3

0x43cf,	// (0x00005eb1) slider_form_pane_vc_g4

0x43ea,	// (0x00005ecc) slider_form_pane_vc_g5

0x0004,

0xfa64,	// (0x00011546) slider_form_pane_vc_g

0xe61f,	// (0x00010101) main_idle_act3_pane

0x6556,	// (0x00008038) ai3_links_pane

0xcb96,	// (0x0000e678) popup_ai3_data_window_ParamLimits

0xcb96,	// (0x0000e678) popup_ai3_data_window

0xe61f,	// (0x00010101) grid_ai3_links_pane

0xcbb4,	// (0x0000e696) cell_ai3_links_pane_ParamLimits

0xcbb4,	// (0x0000e696) cell_ai3_links_pane

0x6597,	// (0x00008079) bg_popup_sub_pane_cp11

0x65a4,	// (0x00008086) cell_ai3_links_pane_g1

0xe61f,	// (0x00010101) bg_popup_sub_pane_cp12

0x65c9,	// (0x000080ab) heading_ai3_data_pane

0x65d1,	// (0x000080b3) list_ai3_gene_pane

0x65dd,	// (0x000080bf) popup_ai3_data_window_g1

0x65e5,	// (0x000080c7) heading_ai3_data_pane_g1

0x65ed,	// (0x000080cf) heading_ai3_data_pane_t1

0x65fb,	// (0x000080dd) list_double_ai3_gene_pane_ParamLimits

0x65fb,	// (0x000080dd) list_double_ai3_gene_pane

0x6608,	// (0x000080ea) list_single_ai3_gene_pane_ParamLimits

0x6608,	// (0x000080ea) list_single_ai3_gene_pane

0x4c94,	// (0x00006776) list_highlight_pane_cp7_ParamLimits

0x4c94,	// (0x00006776) list_highlight_pane_cp7

0x6615,	// (0x000080f7) list_single_a13_gene_pane_t1_ParamLimits

0x6615,	// (0x000080f7) list_single_a13_gene_pane_t1

0x662c,	// (0x0000810e) list_single_ai3_gene_pane_g1

0x6635,	// (0x00008117) list_single_ai3_gene_pane_g2

0x0001,

0xfca6,	// (0x00011788) list_single_ai3_gene_pane_g

0x663d,	// (0x0000811f) list_double_ai3_gene_pane_g1_ParamLimits

0x663d,	// (0x0000811f) list_double_ai3_gene_pane_g1

0x6649,	// (0x0000812b) list_double_ai3_gene_pane_t1_ParamLimits

0x6649,	// (0x0000812b) list_double_ai3_gene_pane_t1

0x6665,	// (0x00008147) list_double_ai3_gene_pane_t2_ParamLimits

0x6665,	// (0x00008147) list_double_ai3_gene_pane_t2

0x667a,	// (0x0000815c) list_double_ai3_gene_pane_t3_ParamLimits

0x667a,	// (0x0000815c) list_double_ai3_gene_pane_t3

0x0002,

0xfcab,	// (0x0001178d) list_double_ai3_gene_pane_t_ParamLimits

0xfcab,	// (0x0001178d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x640b,	// (0x00007eed) aid_size_min_col_2

0xca3c,	// (0x0000e51e) aid_size_min_msg_ParamLimits

0xca3c,	// (0x0000e51e) aid_size_min_msg

0xc766,	// (0x0000e248) fep_vkb_top_text_pane_g2_ParamLimits

0xc766,	// (0x0000e248) fep_vkb_top_text_pane_g2

0x0001,

0xfb17,	// (0x000115f9) fep_vkb_top_text_pane_g_ParamLimits

0xfb17,	// (0x000115f9) fep_vkb_top_text_pane_g

0xe61f,	// (0x00010101) main_hc_apps_shell_pane

0x6697,	// (0x00008179) grid_hc_apps_pane_ParamLimits

0x6697,	// (0x00008179) grid_hc_apps_pane

0x66a9,	// (0x0000818b) list_hc_apps_pane

0x66b1,	// (0x00008193) scroll_pane_cp37_ParamLimits

0x66b1,	// (0x00008193) scroll_pane_cp37

0xcbce,	// (0x0000e6b0) cell_hc_apps_pane_ParamLimits

0xcbce,	// (0x0000e6b0) cell_hc_apps_pane

0xcc94,	// (0x0000e776) cell_hc_apps_pane_g1_ParamLimits

0xcc94,	// (0x0000e776) cell_hc_apps_pane_g1

0x679d,	// (0x0000827f) cell_hc_apps_pane_g2_ParamLimits

0x679d,	// (0x0000827f) cell_hc_apps_pane_g2

0x67b9,	// (0x0000829b) cell_hc_apps_pane_g3_ParamLimits

0x67b9,	// (0x0000829b) cell_hc_apps_pane_g3

0x0002,

0xfcb2,	// (0x00011794) cell_hc_apps_pane_g_ParamLimits

0xfcb2,	// (0x00011794) cell_hc_apps_pane_g

0xccc0,	// (0x0000e7a2) cell_hc_apps_pane_t1_ParamLimits

0xccc0,	// (0x0000e7a2) cell_hc_apps_pane_t1

0xea32,	// (0x00010514) grid_highlight_pane_cp10_ParamLimits

0xea32,	// (0x00010514) grid_highlight_pane_cp10

0xccfe,	// (0x0000e7e0) list_single_hc_apps_pane_ParamLimits

0xccfe,	// (0x0000e7e0) list_single_hc_apps_pane

0xcd31,	// (0x0000e813) list_single_hc_apps_pane_g1

0xcd4a,	// (0x0000e82c) list_single_hc_apps_pane_g2

0x0001,

0xfcb9,	// (0x0001179b) list_single_hc_apps_pane_g

0xcd63,	// (0x0000e845) list_single_hc_apps_pane_g2_copy1

0xcd7f,	// (0x0000e861) list_single_hc_apps_pane_t1

0xe85c,	// (0x0001033e) bg_set_opt_pane_cp_ParamLimits

0xe86a,	// (0x0001034c) setting_slider_pane_t1_ParamLimits

0xe883,	// (0x00010365) setting_slider_pane_t2_ParamLimits

0xe89d,	// (0x0001037f) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001101b) setting_slider_pane_t_ParamLimits

0xe8b5,	// (0x00010397) slider_set_pane_ParamLimits

0x0fa8,	// (0x00002a8a) control_pane_g5_ParamLimits

0x0fa8,	// (0x00002a8a) control_pane_g5

0x34a3,	// (0x00004f85) slider_set_pane_g1_ParamLimits

0x34b0,	// (0x00004f92) slider_set_pane_g2_ParamLimits

0x34bc,	// (0x00004f9e) slider_set_pane_g3_ParamLimits

0x34d0,	// (0x00004fb2) slider_set_pane_g4_ParamLimits

0x34e8,	// (0x00004fca) slider_set_pane_g5_ParamLimits

0x34bc,	// (0x00004f9e) slider_set_pane_g6_ParamLimits

0x34fe,	// (0x00004fe0) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x00011410) slider_set_pane_g_ParamLimits

0x0a3f,	// (0x00002521) navi_icon_text_pane_ParamLimits

0xb820,	// (0x0000d302) aid_fill_nsta_2_ParamLimits

0xb859,	// (0x0000d33b) aid_touch_tab_arrow_left_ParamLimits

0xb86f,	// (0x0000d351) aid_touch_tab_arrow_right_ParamLimits

0xb90a,	// (0x0000d3ec) clock_nsta_pane_ParamLimits

0xbf97,	// (0x0000da79) navi_icon_pane_g1_ParamLimits

0xbfa3,	// (0x0000da85) navi_text_pane_t1_ParamLimits

0xc4c1,	// (0x0000dfa3) navi_icon_text_pane_g1_ParamLimits

0xc4cd,	// (0x0000dfaf) navi_icon_text_pane_t1_ParamLimits

0xcd31,	// (0x0000e813) list_single_hc_apps_pane_g1_ParamLimits

0xcd4a,	// (0x0000e82c) list_single_hc_apps_pane_g2_ParamLimits

0xfcb9,	// (0x0001179b) list_single_hc_apps_pane_g_ParamLimits

0xcd63,	// (0x0000e845) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcd7f,	// (0x0000e861) list_single_hc_apps_pane_t1_ParamLimits

0xa15f,	// (0x0000bc41) popup_toolbar2_fixed_window_ParamLimits

0xa15f,	// (0x0000bc41) popup_toolbar2_fixed_window

0xb785,	// (0x0000d267) popup_toolbar2_float_window

0xe61f,	// (0x00010101) bg_popup_sub_pane_cp27

0x68d6,	// (0x000083b8) grid_toolbar2_float_pane

0xe61f,	// (0x00010101) bg_popup_sub_pane_cp26

0x68d6,	// (0x000083b8) grid_toolbar2_fixed_pane

0xcdad,	// (0x0000e88f) cell_toolbar2_fixed_pane_ParamLimits

0xcdad,	// (0x0000e88f) cell_toolbar2_fixed_pane

0xcdc7,	// (0x0000e8a9) cell_toolbar2_fixed_pane_g1

0x68f7,	// (0x000083d9) toolbar2_fixed_button_pane

0x1d24,	// (0x00003806) toolbar2_fixed_button_pane_g1

0x1d2c,	// (0x0000380e) toolbar2_fixed_button_pane_g2

0x1d34,	// (0x00003816) toolbar2_fixed_button_pane_g3

0x1d3c,	// (0x0000381e) toolbar2_fixed_button_pane_g4

0x1d44,	// (0x00003826) toolbar2_fixed_button_pane_g5

0x1d4c,	// (0x0000382e) toolbar2_fixed_button_pane_g6

0x1d54,	// (0x00003836) toolbar2_fixed_button_pane_g7

0x1d5c,	// (0x0000383e) toolbar2_fixed_button_pane_g8

0x1d64,	// (0x00003846) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x00011312) toolbar2_fixed_button_pane_g

0x68ff,	// (0x000083e1) cell_toolbar2_float_pane_ParamLimits

0x68ff,	// (0x000083e1) cell_toolbar2_float_pane

0x6910,	// (0x000083f2) cell_toolbar2_float_pane_g1

0x68f7,	// (0x000083d9) toolbar2_fixed_button_pane_cp

0xc64e,	// (0x0000e130) fep_vkb_accented_list_pane_ParamLimits

0xc64e,	// (0x0000e130) fep_vkb_accented_list_pane

0x54e5,	// (0x00006fc7) bg_popup_fep_shadow_pane_g9

0x0bce,	// (0x000026b0) bg_popup_fep_shadow_pane_cp3

0xf189,	// (0x00010c6b) list_accented_list_pane

0x6919,	// (0x000083fb) list_single_accented_list_pane_ParamLimits

0x6919,	// (0x000083fb) list_single_accented_list_pane

0x0bce,	// (0x000026b0) list_highlight_pane_cp10

0x692a,	// (0x0000840c) list_single_accented_list_pane_t1

0xb6a1,	// (0x0000d183) popup_slider_window_ParamLimits

0xb6a1,	// (0x0000d183) popup_slider_window

0x6402,	// (0x00007ee4) aid_indentation_list_msg

0xceca,	// (0x0000e9ac) bg_popup_window_pane_cp19

0x6a66,	// (0x00008548) popup_slider_window_g1

0x6a82,	// (0x00008564) popup_slider_window_g2

0x6a9e,	// (0x00008580) popup_slider_window_g3

0x0005,

0xfcbe,	// (0x000117a0) popup_slider_window_g

0x6b04,	// (0x000085e6) popup_slider_window_t1

0x6b78,	// (0x0000865a) small_volume_slider_vertical_pane

0x4ccf,	// (0x000067b1) small_volume_slider_vertical_pane_g1

0x4ccf,	// (0x000067b1) small_volume_slider_vertical_pane_g2

0x6b94,	// (0x00008676) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd0,	// (0x000117b2) small_volume_slider_vertical_pane_g

0xa0c9,	// (0x0000bbab) area_side_right_pane_ParamLimits

0xa0c9,	// (0x0000bbab) area_side_right_pane

0xcf82,	// (0x0000ea64) aid_size_side_button_ParamLimits

0xcf82,	// (0x0000ea64) aid_size_side_button

0xcf9b,	// (0x0000ea7d) grid_sctrl_middle_pane_ParamLimits

0xcf9b,	// (0x0000ea7d) grid_sctrl_middle_pane

0x6bd0,	// (0x000086b2) sctrl_sk_bottom_pane

0x6be1,	// (0x000086c3) sctrl_sk_top_pane

0x6bf3,	// (0x000086d5) aid_touch_sctrl_top

0xea32,	// (0x00010514) bg_sctrl_sk_pane_ParamLimits

0xea32,	// (0x00010514) bg_sctrl_sk_pane

0x6c00,	// (0x000086e2) sctrl_sk_top_pane_g1

0x6c0d,	// (0x000086ef) sctrl_sk_top_pane_t1

0x6bf3,	// (0x000086d5) aid_touch_sctrl_bottom

0xea32,	// (0x00010514) bg_sctrl_sk_pane_cp_ParamLimits

0xea32,	// (0x00010514) bg_sctrl_sk_pane_cp

0x6c28,	// (0x0000870a) sctrl_sk_bottom_pane_g1

0x6c0d,	// (0x000086ef) sctrl_sk_bottom_pane_t1

0xcfb5,	// (0x0000ea97) cell_sctrl_middle_pane_ParamLimits

0xcfb5,	// (0x0000ea97) cell_sctrl_middle_pane

0xcfc8,	// (0x0000eaaa) aid_touch_sctrl_middle_ParamLimits

0xcfc8,	// (0x0000eaaa) aid_touch_sctrl_middle

0xcfd5,	// (0x0000eab7) bg_sctrl_middle_pane_ParamLimits

0xcfd5,	// (0x0000eab7) bg_sctrl_middle_pane

0x6cf2,	// (0x000087d4) cell_sctrl_middle_pane_g1_ParamLimits

0x6cf2,	// (0x000087d4) cell_sctrl_middle_pane_g1

0xcfe3,	// (0x0000eac5) cell_sctrl_middle_pane_g2_ParamLimits

0xcfe3,	// (0x0000eac5) cell_sctrl_middle_pane_g2

0x0001,

0xfcdc,	// (0x000117be) cell_sctrl_middle_pane_g_ParamLimits

0xfcdc,	// (0x000117be) cell_sctrl_middle_pane_g

0x1d24,	// (0x00003806) bg_sctrl_middle_pane_g1

0x1d2c,	// (0x0000380e) bg_sctrl_middle_pane_g2

0x1d34,	// (0x00003816) bg_sctrl_middle_pane_g3

0x1d3c,	// (0x0000381e) bg_sctrl_middle_pane_g4

0x1d44,	// (0x00003826) bg_sctrl_middle_pane_g5

0x1d4c,	// (0x0000382e) bg_sctrl_middle_pane_g6

0x1d54,	// (0x00003836) bg_sctrl_middle_pane_g7

0x1d5c,	// (0x0000383e) bg_sctrl_middle_pane_g8

0x0007,

0xfce1,	// (0x000117c3) bg_sctrl_middle_pane_g

0x1d64,	// (0x00003846) bg_sctrl_middle_pane_g8_copy1

0x1d24,	// (0x00003806) bg_sctrl_sk_pane_g1

0x1d2c,	// (0x0000380e) bg_sctrl_sk_pane_g2

0x1d34,	// (0x00003816) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x00011312) bg_sctrl_sk_pane_g

0xee7a,	// (0x0001095c) aid_size_touch_scroll_bar

0x1d3c,	// (0x0000381e) bg_sctrl_sk_pane_g4

0x1d44,	// (0x00003826) bg_sctrl_sk_pane_g5

0x1d4c,	// (0x0000382e) bg_sctrl_sk_pane_g6

0x1d54,	// (0x00003836) bg_sctrl_sk_pane_g7

0x1d5c,	// (0x0000383e) bg_sctrl_sk_pane_g8

0x1d64,	// (0x00003846) bg_sctrl_sk_pane_g9

0x11eb,	// (0x00002ccd) popup_fep_china_hwr2_fs_candidate_window

0xb153,	// (0x0000cc35) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb153,	// (0x0000cc35) popup_fep_china_hwr2_fs_control_window

0x5174,	// (0x00006c56) sctrl_sk_top_pane_g2

0x0001,

0xfcd7,	// (0x000117b9) sctrl_sk_top_pane_g

0xcfef,	// (0x0000ead1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcfef,	// (0x0000ead1) aid_fep_china_hwr2_fs_cell

0xd005,	// (0x0000eae7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd005,	// (0x0000eae7) bg_popup_fep_shadow_pane_cp4

0xd01c,	// (0x0000eafe) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd01c,	// (0x0000eafe) bg_popup_fep_shadow_pane_cp5

0xd02e,	// (0x0000eb10) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd02e,	// (0x0000eb10) popup_fep_china_hwr2_fs_control_bar_grid

0xd042,	// (0x0000eb24) popup_fep_china_hwr2_fs_control_funtion_grid

0x6cc6,	// (0x000087a8) aid_fep_china_hwr2_fs_candi_cell

0xe61f,	// (0x00010101) bg_popup_fep_shadow_pane_cp6

0x6cd0,	// (0x000087b2) popup_fep_china_hwr2_fs_candidate_grid

0xd04a,	// (0x0000eb2c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd04a,	// (0x0000eb2c) cell_fep_china_hwr2_fs_funtion_grid

0x4ccf,	// (0x000067b1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6cf2,	// (0x000087d4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6cf2,	// (0x000087d4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6d00,	// (0x000087e2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6d00,	// (0x000087e2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf2,	// (0x000117d4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf2,	// (0x000117d4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd062,	// (0x0000eb44) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd062,	// (0x0000eb44) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd077,	// (0x0000eb59) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd077,	// (0x0000eb59) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf7,	// (0x000117d9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf7,	// (0x000117d9) cell_fep_china_hwr2_fs_funtion_grid_t

0x6d47,	// (0x00008829) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6d4f,	// (0x00008831) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6d57,	// (0x00008839) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfc,	// (0x000117de) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6d5f,	// (0x00008841) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6d5f,	// (0x00008841) cell_fep_china_hwr2_fs_candidate_grid

0x6d7e,	// (0x00008860) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6d86,	// (0x00008868) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4ccf,	// (0x000067b1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4ccf,	// (0x000067b1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1c,	// (0x000115fe) cell_fep_china_hwr2_fs_candidate_grid_g

0x6d8e,	// (0x00008870) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1858,	// (0x0000333a) clock_nsta_pane_cp_24_ParamLimits

0x1858,	// (0x0000333a) clock_nsta_pane_cp_24

0x18d8,	// (0x000033ba) indicator_nsta_pane_cp_24_ParamLimits

0x18d8,	// (0x000033ba) indicator_nsta_pane_cp_24

0x2d4c,	// (0x0000482e) heading_pane_g1

0x0001,

0xf895,	// (0x00011377) heading_pane_g

0x3989,	// (0x0000546b) grid_sct_catagory_button_pane

0x39bb,	// (0x0000549d) scroll_pane_cp5_ParamLimits

0x48dc,	// (0x000063be) button_value_adjust_pane_cp5_ParamLimits

0x48dc,	// (0x000063be) button_value_adjust_pane_cp5

0x49e2,	// (0x000064c4) form2_midp_time_pane_ParamLimits

0x6d9c,	// (0x0000887e) cell_sct_catagory_button_pane_ParamLimits

0x6d9c,	// (0x0000887e) cell_sct_catagory_button_pane

0x4c94,	// (0x00006776) bg_button_pane_cp01_ParamLimits

0x4c94,	// (0x00006776) bg_button_pane_cp01

0x4ccf,	// (0x000067b1) cell_sct_catagory_button_pane_g1

0xb722,	// (0x0000d204) popup_tb_extension_window

0xd093,	// (0x0000eb75) aid_size_cell_ext_ParamLimits

0xd093,	// (0x0000eb75) aid_size_cell_ext

0xecbc,	// (0x0001079e) bg_tb_trans_pane_cp1_ParamLimits

0xecbc,	// (0x0001079e) bg_tb_trans_pane_cp1

0xd0b9,	// (0x0000eb9b) grid_tb_ext_pane_ParamLimits

0xd0b9,	// (0x0000eb9b) grid_tb_ext_pane

0xd0f6,	// (0x0000ebd8) cell_tb_ext_pane_ParamLimits

0xd0f6,	// (0x0000ebd8) cell_tb_ext_pane

0xd11e,	// (0x0000ec00) cell_tb_ext_pane_g1_ParamLimits

0xd11e,	// (0x0000ec00) cell_tb_ext_pane_g1

0x6e30,	// (0x00008912) cell_tb_ext_pane_t1

0xea32,	// (0x00010514) list_highlight_pane_cp11_ParamLimits

0xea32,	// (0x00010514) list_highlight_pane_cp11

0xa174,	// (0x0000bc56) popup_uni_indicator_window_ParamLimits

0xa174,	// (0x0000bc56) popup_uni_indicator_window

0xefd4,	// (0x00010ab6) bg_popup_sub_pane_cp14

0x6e4b,	// (0x0000892d) list_uniindi_pane

0x6e57,	// (0x00008939) uniindi_top_pane

0xea32,	// (0x00010514) bg_uniindi_top_pane

0x6e78,	// (0x0000895a) uniindi_top_pane_g1

0x6e8e,	// (0x00008970) uniindi_top_pane_g2

0x0003,

0xfd03,	// (0x000117e5) uniindi_top_pane_g

0x6eb8,	// (0x0000899a) uniindi_top_pane_t1

0x6ee4,	// (0x000089c6) list_single_uniindi_pane_ParamLimits

0x6ee4,	// (0x000089c6) list_single_uniindi_pane

0x4ccf,	// (0x000067b1) bg_uniindi_top_pane_g1

0x6ef7,	// (0x000089d9) list_single_uniindi_pane_g1

0x6f0a,	// (0x000089ec) list_single_uniindi_pane_t1

0xe61f,	// (0x00010101) control_bg_pane

0x6f2f,	// (0x00008a11) bg_sctrl_sk_pane_cp1

0x6f38,	// (0x00008a1a) bg_sctrl_sk_pane_cp2

0x6f41,	// (0x00008a23) control_bg_pane_g1

0x6f4a,	// (0x00008a2c) control_bg_pane_g2

0x0001,

0xfd0c,	// (0x000117ee) control_bg_pane_g

0x46c3,	// (0x000061a5) cell_indicator_nsta_pane_g1_ParamLimits

0xc425,	// (0x0000df07) cell_indicator_nsta_pane_g2_ParamLimits

0xfa80,	// (0x00011562) cell_indicator_nsta_pane_g_ParamLimits

0x4a6f,	// (0x00006551) form2_midp_time_pane_t1_ParamLimits

0x4d30,	// (0x00006812) main_idle_act4_pane_ParamLimits

0x4d30,	// (0x00006812) main_idle_act4_pane

0xb722,	// (0x0000d204) popup_tb_extension_window_ParamLimits

0xd0de,	// (0x0000ebc0) tb_ext_find_pane_ParamLimits

0xd0de,	// (0x0000ebc0) tb_ext_find_pane

0x6f53,	// (0x00008a35) ai_gene_pane_1_cp1

0x0d18,	// (0x000027fa) ai_gene_pane_2_cp1

0x6f5b,	// (0x00008a3d) list_single_idle_plugin_calendar_pane

0x6f64,	// (0x00008a46) list_single_idle_plugin_notification_pane

0x6f6d,	// (0x00008a4f) list_single_idle_plugin_player_pane

0xd13b,	// (0x0000ec1d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd13b,	// (0x0000ec1d) list_single_idle_plugin_shortcut_pane

0xd163,	// (0x0000ec45) main_idle_act4_pane_t1

0xd17b,	// (0x0000ec5d) main_idle_act4_pane_t2

0x0001,

0xfd11,	// (0x000117f3) main_idle_act4_pane_t

0xd193,	// (0x0000ec75) middle_sk_idle_act4_pane_ParamLimits

0xd193,	// (0x0000ec75) middle_sk_idle_act4_pane

0xd1af,	// (0x0000ec91) popup_clock_digital_analogue_window_cp2

0xd1d6,	// (0x0000ecb8) shortcut_wheel_idle_act4_pane_ParamLimits

0xd1d6,	// (0x0000ecb8) shortcut_wheel_idle_act4_pane

0x4ccf,	// (0x000067b1) shortcut_wheel_idle_act4_pane_g1

0x4ccf,	// (0x000067b1) shortcut_wheel_idle_act4_pane_g2

0x4ccf,	// (0x000067b1) shortcut_wheel_idle_act4_pane_g3

0x4ccf,	// (0x000067b1) shortcut_wheel_idle_act4_pane_g4

0x4ccf,	// (0x000067b1) shortcut_wheel_idle_act4_pane_g5

0x7000,	// (0x00008ae2) shortcut_wheel_idle_act4_pane_g6

0x7008,	// (0x00008aea) shortcut_wheel_idle_act4_pane_g7

0x7010,	// (0x00008af2) shortcut_wheel_idle_act4_pane_g8

0x7018,	// (0x00008afa) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd16,	// (0x000117f8) shortcut_wheel_idle_act4_pane_g

0x4de7,	// (0x000068c9) middle_sk_idle_act4_pane_g1_ParamLimits

0x4de7,	// (0x000068c9) middle_sk_idle_act4_pane_g1

0xd253,	// (0x0000ed35) middle_sk_idle_act4_pane_g2_ParamLimits

0xd253,	// (0x0000ed35) middle_sk_idle_act4_pane_g2

0x0001,

0xfd39,	// (0x0001181b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd39,	// (0x0001181b) middle_sk_idle_act4_pane_g

0xd26b,	// (0x0000ed4d) middle_sk_idle_act4_pane_t1_ParamLimits

0xd26b,	// (0x0000ed4d) middle_sk_idle_act4_pane_t1

0xd29a,	// (0x0000ed7c) grid_ai_shortcut_pane_ParamLimits

0xd29a,	// (0x0000ed7c) grid_ai_shortcut_pane

0xd2b7,	// (0x0000ed99) list_highlight_pane_cp16_ParamLimits

0xd2b7,	// (0x0000ed99) list_highlight_pane_cp16

0xd2c4,	// (0x0000eda6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd2c4,	// (0x0000eda6) list_single_idle_plugin_shortcut_pane_g1

0xd2d0,	// (0x0000edb2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd2d0,	// (0x0000edb2) list_single_idle_plugin_shortcut_pane_g2

0xd2ee,	// (0x0000edd0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2ee,	// (0x0000edd0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3e,	// (0x00011820) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3e,	// (0x00011820) list_single_idle_plugin_shortcut_pane_g

0xd303,	// (0x0000ede5) cell_ai_shortcut_pane_ParamLimits

0xd303,	// (0x0000ede5) cell_ai_shortcut_pane

0xd319,	// (0x0000edfb) cell_ai_shortcut_pane_g1_ParamLimits

0xd319,	// (0x0000edfb) cell_ai_shortcut_pane_g1

0x6f53,	// (0x00008a35) ai_gene_pane_1_cp2

0x7149,	// (0x00008c2b) ai_gene_pane_2_cp2

0x7151,	// (0x00008c33) list_highlight_pane_cp15

0x715a,	// (0x00008c3c) list_single_idle_plugin_calendar_pane_g1

0x7151,	// (0x00008c33) list_highlight_pane_cp17

0x7162,	// (0x00008c44) list_single_idle_plugin_calendar_pane_g1_copy1

0x716a,	// (0x00008c4c) list_single_idle_plugin_player_pane_g1

0x3ca8,	// (0x0000578a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd45,	// (0x00011827) list_single_idle_plugin_player_pane_g

0x7172,	// (0x00008c54) list_single_idle_plugin_player_pane_t1

0x7180,	// (0x00008c62) list_single_idle_plugin_player_pane_t2

0x718e,	// (0x00008c70) list_single_idle_plugin_player_pane_t3

0x719c,	// (0x00008c7e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4a,	// (0x0001182c) list_single_idle_plugin_player_pane_t

0x71aa,	// (0x00008c8c) wait_bar_pane_cp15

0x71b2,	// (0x00008c94) grid_ai_notification_pane

0x3ca8,	// (0x0000578a) list_single_idle_plugin_notification_pane_g1

0xd33b,	// (0x0000ee1d) cell_ai_notification_pane_ParamLimits

0xd33b,	// (0x0000ee1d) cell_ai_notification_pane

0x71c8,	// (0x00008caa) cell_ai_notification_pane_g1

0x71d0,	// (0x00008cb2) cell_ai_notification_pane_t1

0xd348,	// (0x0000ee2a) tb_ext_find_button_pane

0xd350,	// (0x0000ee32) tb_ext_find_pane_g1

0xd358,	// (0x0000ee3a) tb_ext_find_pane_t1

0x02ee,	// (0x00001dd0) tb_ext_find_button_pane_g1

0x71fc,	// (0x00008cde) tb_ext_find_button_pane_g2

0x0001,

0xfd53,	// (0x00011835) tb_ext_find_button_pane_g

0xd163,	// (0x0000ec45) main_idle_act4_pane_t1_ParamLimits

0xd17b,	// (0x0000ec5d) main_idle_act4_pane_t2_ParamLimits

0xfd11,	// (0x000117f3) main_idle_act4_pane_t_ParamLimits

0xd1af,	// (0x0000ec91) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd1c6,	// (0x0000eca8) sat_plugin_idle_act4_pane_ParamLimits

0xd1c6,	// (0x0000eca8) sat_plugin_idle_act4_pane

0xd366,	// (0x0000ee48) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd366,	// (0x0000ee48) sat_plugin_idle_act4_pane_t1

0xd37e,	// (0x0000ee60) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd37e,	// (0x0000ee60) sat_plugin_idle_act4_pane_t2

0xd396,	// (0x0000ee78) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd396,	// (0x0000ee78) sat_plugin_idle_act4_pane_t3

0xd3ae,	// (0x0000ee90) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd3ae,	// (0x0000ee90) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd58,	// (0x0001183a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd58,	// (0x0001183a) sat_plugin_idle_act4_pane_t

0xe7ac,	// (0x0001028e) popup_battery_window_ParamLimits

0xe7ac,	// (0x0001028e) popup_battery_window

0xea32,	// (0x00010514) bg_popup_sub_pane_cp25_ParamLimits

0xea32,	// (0x00010514) bg_popup_sub_pane_cp25

0x7251,	// (0x00008d33) popup_battery_window_g1_ParamLimits

0x7251,	// (0x00008d33) popup_battery_window_g1

0x725d,	// (0x00008d3f) popup_battery_window_t1_ParamLimits

0x725d,	// (0x00008d3f) popup_battery_window_t1

0x726f,	// (0x00008d51) popup_battery_window_t2_ParamLimits

0x726f,	// (0x00008d51) popup_battery_window_t2

0x0001,

0xfd61,	// (0x00011843) popup_battery_window_t_ParamLimits

0xfd61,	// (0x00011843) popup_battery_window_t

0xaed0,	// (0x0000c9b2) midp_canvas_pane_ParamLimits

0xaf2c,	// (0x0000ca0e) midp_keypad_pane_ParamLimits

0xaf2c,	// (0x0000ca0e) midp_keypad_pane

0x10ff,	// (0x00002be1) main_midp_pane_ParamLimits

0x473e,	// (0x00006220) signal_pane_g2_cp_ParamLimits

0xd3c6,	// (0x0000eea8) aid_size_cell_midp_keypad_ParamLimits

0xd3c6,	// (0x0000eea8) aid_size_cell_midp_keypad

0xd3e4,	// (0x0000eec6) midp_keyp_game_grid_pane_ParamLimits

0xd3e4,	// (0x0000eec6) midp_keyp_game_grid_pane

0xd40b,	// (0x0000eeed) midp_keyp_rocker_pane_ParamLimits

0xd40b,	// (0x0000eeed) midp_keyp_rocker_pane

0xd45a,	// (0x0000ef3c) midp_keyp_sk_left_pane_ParamLimits

0xd45a,	// (0x0000ef3c) midp_keyp_sk_left_pane

0xd4b0,	// (0x0000ef92) midp_keyp_sk_right_pane_ParamLimits

0xd4b0,	// (0x0000ef92) midp_keyp_sk_right_pane

0xe61f,	// (0x00010101) bg_button_pane_cp03

0xd506,	// (0x0000efe8) midp_keyp_sk_left_pane_g1

0xe61f,	// (0x00010101) bg_button_pane_cp04

0xd506,	// (0x0000efe8) midp_keyp_sk_right_pane_g1

0x4ccf,	// (0x000067b1) midp_keyp_rocker_pane_g1

0xd50e,	// (0x0000eff0) keyp_game_cell_pane_ParamLimits

0xd50e,	// (0x0000eff0) keyp_game_cell_pane

0xe61f,	// (0x00010101) bg_button_pane_cp02

0xd534,	// (0x0000f016) keyp_game_cell_pane_g1

0xa10b,	// (0x0000bbed) popup_fep_vkb2_window_ParamLimits

0xa10b,	// (0x0000bbed) popup_fep_vkb2_window

0xd53d,	// (0x0000f01f) aid_size_cell_vkb2_ParamLimits

0xd53d,	// (0x0000f01f) aid_size_cell_vkb2

0xd569,	// (0x0000f04b) popup_fep_vkb2_window_g1_ParamLimits

0xd569,	// (0x0000f04b) popup_fep_vkb2_window_g1

0xd5b9,	// (0x0000f09b) vkb2_area_bottom_pane_ParamLimits

0xd5b9,	// (0x0000f09b) vkb2_area_bottom_pane

0xd615,	// (0x0000f0f7) vkb2_area_keypad_pane_ParamLimits

0xd615,	// (0x0000f0f7) vkb2_area_keypad_pane

0xd663,	// (0x0000f145) vkb2_area_top_pane_ParamLimits

0xd663,	// (0x0000f145) vkb2_area_top_pane

0xd6f0,	// (0x0000f1d2) vkb2_top_entry_pane_ParamLimits

0xd6f0,	// (0x0000f1d2) vkb2_top_entry_pane

0xd71d,	// (0x0000f1ff) vkb2_top_grid_left_pane_ParamLimits

0xd71d,	// (0x0000f1ff) vkb2_top_grid_left_pane

0xd73e,	// (0x0000f220) vkb2_top_grid_right_pane_ParamLimits

0xd73e,	// (0x0000f220) vkb2_top_grid_right_pane

0x75f5,	// (0x000090d7) vkb2_cell_keypad_pane_ParamLimits

0x75f5,	// (0x000090d7) vkb2_cell_keypad_pane

0xd786,	// (0x0000f268) vkb2_area_bottom_grid_pane_ParamLimits

0xd786,	// (0x0000f268) vkb2_area_bottom_grid_pane

0xd7b0,	// (0x0000f292) vkb2_area_bottom_pane_g1_ParamLimits

0xd7b0,	// (0x0000f292) vkb2_area_bottom_pane_g1

0xd7d6,	// (0x0000f2b8) vkb2_area_bottom_pane_g2_ParamLimits

0xd7d6,	// (0x0000f2b8) vkb2_area_bottom_pane_g2

0xd807,	// (0x0000f2e9) vkb2_area_bottom_pane_g3_ParamLimits

0xd807,	// (0x0000f2e9) vkb2_area_bottom_pane_g3

0x0002,

0xfd66,	// (0x00011848) vkb2_area_bottom_pane_g_ParamLimits

0xfd66,	// (0x00011848) vkb2_area_bottom_pane_g

0x779f,	// (0x00009281) vkb2_top_cell_left_pane_ParamLimits

0x779f,	// (0x00009281) vkb2_top_cell_left_pane

0xd871,	// (0x0000f353) vkb2_top_entry_pane_g1_ParamLimits

0xd871,	// (0x0000f353) vkb2_top_entry_pane_g1

0xd87f,	// (0x0000f361) vkb2_top_entry_pane_t1_ParamLimits

0xd87f,	// (0x0000f361) vkb2_top_entry_pane_t1

0x7807,	// (0x000092e9) vkb2_top_entry_pane_t2_ParamLimits

0x7807,	// (0x000092e9) vkb2_top_entry_pane_t2

0x7839,	// (0x0000931b) vkb2_top_entry_pane_t3_ParamLimits

0x7839,	// (0x0000931b) vkb2_top_entry_pane_t3

0x0002,

0xfd6d,	// (0x0001184f) vkb2_top_entry_pane_t_ParamLimits

0xfd6d,	// (0x0001184f) vkb2_top_entry_pane_t

0xd8b8,	// (0x0000f39a) vkb2_top_grid_right_pane_g1_ParamLimits

0xd8b8,	// (0x0000f39a) vkb2_top_grid_right_pane_g1

0x78a0,	// (0x00009382) vkb2_top_grid_right_pane_g2_ParamLimits

0x78a0,	// (0x00009382) vkb2_top_grid_right_pane_g2

0x78b8,	// (0x0000939a) vkb2_top_grid_right_pane_g3_ParamLimits

0x78b8,	// (0x0000939a) vkb2_top_grid_right_pane_g3

0xd8ce,	// (0x0000f3b0) vkb2_top_grid_right_pane_g4_ParamLimits

0xd8ce,	// (0x0000f3b0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd74,	// (0x00011856) vkb2_top_grid_right_pane_g_ParamLimits

0xfd74,	// (0x00011856) vkb2_top_grid_right_pane_g

0x78e6,	// (0x000093c8) vkb2_top_cell_left_pane_g1

0x78fd,	// (0x000093df) vkb2_cell_keypad_pane_g1_ParamLimits

0x78fd,	// (0x000093df) vkb2_cell_keypad_pane_g1

0x790b,	// (0x000093ed) vkb2_cell_keypad_pane_t1_ParamLimits

0x790b,	// (0x000093ed) vkb2_cell_keypad_pane_t1

0x7922,	// (0x00009404) vkb2_cell_bottom_grid_pane_ParamLimits

0x7922,	// (0x00009404) vkb2_cell_bottom_grid_pane

0x795b,	// (0x0000943d) vkb2_cell_bottom_grid_pane_g1

0xd1f7,	// (0x0000ecd9) aid_call2_pane_cp02

0xd1ff,	// (0x0000ece1) aid_call_pane_cp02

0xd207,	// (0x0000ece9) clock_digital_number_pane_cp10

0xd20f,	// (0x0000ecf1) clock_digital_number_pane_cp11

0xd217,	// (0x0000ecf9) clock_digital_number_pane_cp12

0xd21f,	// (0x0000ed01) clock_digital_number_pane_cp13

0xd227,	// (0x0000ed09) clock_digital_separator_pane_cp10

0x02ee,	// (0x00001dd0) popup_clock_digital_analogue_window_cp2_g1

0x02ee,	// (0x00001dd0) popup_clock_digital_analogue_window_cp2_g2

0xd22f,	// (0x0000ed11) popup_clock_digital_analogue_window_cp2_g3

0x02ee,	// (0x00001dd0) popup_clock_digital_analogue_window_cp2_g4

0xd22f,	// (0x0000ed11) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd29,	// (0x0001180b) popup_clock_digital_analogue_window_cp2_g

0xd237,	// (0x0000ed19) popup_clock_digital_analogue_window_cp2_t1

0xd245,	// (0x0000ed27) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd34,	// (0x00011816) popup_clock_digital_analogue_window_cp2_t

0x4ccf,	// (0x000067b1) clock_digital_number_pane_cp10_g1

0x4ccf,	// (0x000067b1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000115fe) clock_digital_number_pane_cp10_g

0x4ccf,	// (0x000067b1) clock_digital_separator_pane_cp10_g1

0x4ccf,	// (0x000067b1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000115fe) clock_digital_separator_pane_cp10_g

0x6e9a,	// (0x0000897c) uniindi_top_pane_g3

0x6eab,	// (0x0000898d) uniindi_top_pane_g4

0x7680,	// (0x00009162) vkb2_row_keypad_pane_ParamLimits

0x7680,	// (0x00009162) vkb2_row_keypad_pane

0x7977,	// (0x00009459) vkb2_cell_t_keypad_pane_ParamLimits

0x7977,	// (0x00009459) vkb2_cell_t_keypad_pane

0x7987,	// (0x00009469) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7987,	// (0x00009469) vkb2_cell_t_keypad_pane_cp08

0x799c,	// (0x0000947e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x799c,	// (0x0000947e) vkb2_cell_t_keypad_pane_cp09

0x79b0,	// (0x00009492) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x79b0,	// (0x00009492) vkb2_cell_t_keypad_pane_cp01

0x79c1,	// (0x000094a3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x79c1,	// (0x000094a3) vkb2_cell_t_keypad_pane_cp02

0x79d2,	// (0x000094b4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x79d2,	// (0x000094b4) vkb2_cell_t_keypad_pane_cp03

0x79e3,	// (0x000094c5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x79e3,	// (0x000094c5) vkb2_cell_t_keypad_pane_cp04

0x79f4,	// (0x000094d6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x79f4,	// (0x000094d6) vkb2_cell_t_keypad_pane_cp05

0x7a05,	// (0x000094e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7a05,	// (0x000094e7) vkb2_cell_t_keypad_pane_cp06

0x7a18,	// (0x000094fa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7a18,	// (0x000094fa) vkb2_cell_t_keypad_pane_cp07

0x7a2d,	// (0x0000950f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7a2d,	// (0x0000950f) vkb2_cell_t_keypad_pane_cp10

0x5174,	// (0x00006c56) vkb2_cell_t_keypad_pane_g1

0x7a42,	// (0x00009524) vkb2_cell_t_keypad_pane_t1

0xe61f,	// (0x00010101) popup_grid_graphic2_window

0xd8e4,	// (0x0000f3c6) aid_size_cell_graphic2_ParamLimits

0xd8e4,	// (0x0000f3c6) aid_size_cell_graphic2

0xd922,	// (0x0000f404) bg_popup_window_pane_cp21_ParamLimits

0xd922,	// (0x0000f404) bg_popup_window_pane_cp21

0xd930,	// (0x0000f412) graphic2_pages_pane_ParamLimits

0xd930,	// (0x0000f412) graphic2_pages_pane

0xd988,	// (0x0000f46a) grid_graphic2_control_pane_ParamLimits

0xd988,	// (0x0000f46a) grid_graphic2_control_pane

0xd9d0,	// (0x0000f4b2) grid_graphic2_pane_ParamLimits

0xd9d0,	// (0x0000f4b2) grid_graphic2_pane

0xda5b,	// (0x0000f53d) cell_graphic2_pane

0xe61f,	// (0x00010101) main_comp_mode_pane

0x65d1,	// (0x000080b3) list_ai3_gene_pane_ParamLimits

0xceca,	// (0x0000e9ac) bg_popup_window_pane_cp19_ParamLimits

0x6a06,	// (0x000084e8) bg_touch_area_indi_pane_ParamLimits

0x6a06,	// (0x000084e8) bg_touch_area_indi_pane

0x6a1c,	// (0x000084fe) bg_touch_area_indi_pane_cp01_ParamLimits

0x6a1c,	// (0x000084fe) bg_touch_area_indi_pane_cp01

0x6a32,	// (0x00008514) bg_touch_area_indi_pane_cp02_ParamLimits

0x6a32,	// (0x00008514) bg_touch_area_indi_pane_cp02

0x6a4c,	// (0x0000852e) bg_touch_area_indi_pane_cp03_ParamLimits

0x6a4c,	// (0x0000852e) bg_touch_area_indi_pane_cp03

0x6a66,	// (0x00008548) popup_slider_window_g1_ParamLimits

0x6a82,	// (0x00008564) popup_slider_window_g2_ParamLimits

0x6a9e,	// (0x00008580) popup_slider_window_g3_ParamLimits

0xfcbe,	// (0x000117a0) popup_slider_window_g_ParamLimits

0x6b04,	// (0x000085e6) popup_slider_window_t1_ParamLimits

0x6b78,	// (0x0000865a) small_volume_slider_vertical_pane_ParamLimits

0xda5b,	// (0x0000f53d) cell_graphic2_pane_ParamLimits

0xdabd,	// (0x0000f59f) bg_button_pane_cp10_ParamLimits

0xdabd,	// (0x0000f59f) bg_button_pane_cp10

0xdad0,	// (0x0000f5b2) bg_button_pane_cp11_ParamLimits

0xdad0,	// (0x0000f5b2) bg_button_pane_cp11

0xdae3,	// (0x0000f5c5) graphic2_pages_pane_g1_ParamLimits

0xdae3,	// (0x0000f5c5) graphic2_pages_pane_g1

0xdafe,	// (0x0000f5e0) graphic2_pages_pane_g2_ParamLimits

0xdafe,	// (0x0000f5e0) graphic2_pages_pane_g2

0x0001,

0xfd82,	// (0x00011864) graphic2_pages_pane_g_ParamLimits

0xfd82,	// (0x00011864) graphic2_pages_pane_g

0xdb16,	// (0x0000f5f8) graphic2_pages_pane_t1_ParamLimits

0xdb16,	// (0x0000f5f8) graphic2_pages_pane_t1

0xdb2e,	// (0x0000f610) cell_graphic2_control_pane_ParamLimits

0xdb2e,	// (0x0000f610) cell_graphic2_control_pane

0xdb62,	// (0x0000f644) cell_graphic2_pane_g1_ParamLimits

0xdb62,	// (0x0000f644) cell_graphic2_pane_g1

0x4f96,	// (0x00006a78) cell_graphic2_pane_g2_ParamLimits

0x4f96,	// (0x00006a78) cell_graphic2_pane_g2

0xdb6f,	// (0x0000f651) cell_graphic2_pane_g3_ParamLimits

0xdb6f,	// (0x0000f651) cell_graphic2_pane_g3

0x4fa3,	// (0x00006a85) cell_graphic2_pane_g4_ParamLimits

0x4fa3,	// (0x00006a85) cell_graphic2_pane_g4

0xdb7c,	// (0x0000f65e) cell_graphic2_pane_g5_ParamLimits

0xdb7c,	// (0x0000f65e) cell_graphic2_pane_g5

0x0004,

0xfd87,	// (0x00011869) cell_graphic2_pane_g_ParamLimits

0xfd87,	// (0x00011869) cell_graphic2_pane_g

0xdb98,	// (0x0000f67a) cell_graphic2_pane_t1_ParamLimits

0xdb98,	// (0x0000f67a) cell_graphic2_pane_t1

0x2d40,	// (0x00004822) grid_highlight_pane_cp11_ParamLimits

0x2d40,	// (0x00004822) grid_highlight_pane_cp11

0xea32,	// (0x00010514) bg_button_pane_cp05

0xdbe1,	// (0x0000f6c3) cell_graphic2_control_pane_g1

0x4ccf,	// (0x000067b1) bg_touch_area_indi_pane_g1

0x7d25,	// (0x00009807) aid_cmod_rocker_key_size

0x7d2f,	// (0x00009811) aid_cmode_itu_key_size

0x7d39,	// (0x0000981b) main_cmode_video_pane

0x7d43,	// (0x00009825) main_comp_mode_itu_pane

0x7d4f,	// (0x00009831) main_comp_mode_rocker_pane

0x7d5b,	// (0x0000983d) cell_cmode_rocker_pane_ParamLimits

0x7d5b,	// (0x0000983d) cell_cmode_rocker_pane

0x7d6f,	// (0x00009851) cell_cmode_itu_pane_ParamLimits

0x7d6f,	// (0x00009851) cell_cmode_itu_pane

0xefd4,	// (0x00010ab6) bg_button_pane_cp06_ParamLimits

0xefd4,	// (0x00010ab6) bg_button_pane_cp06

0x5174,	// (0x00006c56) cell_cmode_rocker_pane_g1_ParamLimits

0x5174,	// (0x00006c56) cell_cmode_rocker_pane_g1

0x6cf2,	// (0x000087d4) cell_cmode_rocker_pane_g2_ParamLimits

0x6cf2,	// (0x000087d4) cell_cmode_rocker_pane_g2

0x0001,

0xfd97,	// (0x00011879) cell_cmode_rocker_pane_g_ParamLimits

0xfd97,	// (0x00011879) cell_cmode_rocker_pane_g

0xe61f,	// (0x00010101) bg_button_pane_cp07

0x7d86,	// (0x00009868) cell_cmode_itu_pane_g1

0x7d8f,	// (0x00009871) cell_cmode_itu_pane_t1

0x7d9d,	// (0x0000987f) cell_cmode_itu_pane_t2

0x0001,

0xfd9c,	// (0x0001187e) cell_cmode_itu_pane_t

0x6f1f,	// (0x00008a01) aid_touch_ctrl_left

0x6f27,	// (0x00008a09) aid_touch_ctrl_right

0xe61f,	// (0x00010101) compa_mode_pane

0xdc09,	// (0x0000f6eb) aid_cmod_rocker_key_size_cp

0xdc13,	// (0x0000f6f5) aid_cmode_itu_key_size_cp

0x7dbf,	// (0x000098a1) compa_mode_pane_g1

0x7dc7,	// (0x000098a9) compa_mode_pane_g2

0x7dcf,	// (0x000098b1) compa_mode_pane_g3

0x0002,

0xfda1,	// (0x00011883) compa_mode_pane_g

0xdc1d,	// (0x0000f6ff) main_comp_mode_itu_pane_cp

0xdc25,	// (0x0000f707) main_comp_mode_rocker_pane_cp

0xdc2d,	// (0x0000f70f) cell_cmode_itu_pane_cp_ParamLimits

0xdc2d,	// (0x0000f70f) cell_cmode_itu_pane_cp

0xdc42,	// (0x0000f724) cell_cmode_rocker_pane_cp_ParamLimits

0xdc42,	// (0x0000f724) cell_cmode_rocker_pane_cp

0xefd4,	// (0x00010ab6) bg_button_pane_cp06_cp_ParamLimits

0xefd4,	// (0x00010ab6) bg_button_pane_cp06_cp

0x5174,	// (0x00006c56) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5174,	// (0x00006c56) cell_cmode_rocker_pane_g1_cp

0x4ccf,	// (0x000067b1) cell_cmode_rocker_pane_g2_cp

0xe61f,	// (0x00010101) bg_button_pane_cp07_cp

0xdc54,	// (0x0000f736) cell_cmode_itu_pane_g1_cp

0xdc5d,	// (0x0000f73f) cell_cmode_itu_pane_t1_cp

0xdc5d,	// (0x0000f73f) cell_cmode_itu_pane_t2_cp

0xc211,	// (0x0000dcf3) settings_code_pane_cp2

0xe85c,	// (0x0001033e) bg_popup_window_pane_cp3_ParamLimits

0xec46,	// (0x00010728) heading_pane_cp3_ParamLimits

0xec55,	// (0x00010737) listscroll_popup_graphic_pane_ParamLimits

0x4d3e,	// (0x00006820) fep_hwr_aid_pane_ParamLimits

0x6bf3,	// (0x000086d5) aid_touch_sctrl_top_ParamLimits

0x6c00,	// (0x000086e2) sctrl_sk_top_pane_g1_ParamLimits

0x5174,	// (0x00006c56) sctrl_sk_top_pane_g2_ParamLimits

0xfcd7,	// (0x000117b9) sctrl_sk_top_pane_g_ParamLimits

0x6c0d,	// (0x000086ef) sctrl_sk_top_pane_t1_ParamLimits

0x6bf3,	// (0x000086d5) aid_touch_sctrl_bottom_ParamLimits

0x6c0d,	// (0x000086ef) sctrl_sk_bottom_pane_t1_ParamLimits

0x6e64,	// (0x00008946) aid_area_touch_clock

0xd6af,	// (0x0000f191) aid_vkb2_area_top_pane_cell_ParamLimits

0xd6af,	// (0x0000f191) aid_vkb2_area_top_pane_cell

0xd75f,	// (0x0000f241) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd75f,	// (0x0000f241) aid_vkb2_area_bottom_pane_cell

0x77bf,	// (0x000092a1) popup_char_count_window

0x7e25,	// (0x00009907) popup_char_count_window_g1

0x7e2e,	// (0x00009910) popup_char_count_window_g2

0x7e37,	// (0x00009919) popup_char_count_window_g3

0x0002,

0xfda8,	// (0x0001188a) popup_char_count_window_g

0x7e40,	// (0x00009922) popup_char_count_window_t1

0x7409,	// (0x00008eeb) popup_fep_char_preview_window_ParamLimits

0x7409,	// (0x00008eeb) popup_fep_char_preview_window

0xd6cf,	// (0x0000f1b1) vkb2_top_candi_pane_ParamLimits

0xd6cf,	// (0x0000f1b1) vkb2_top_candi_pane

0xdc6b,	// (0x0000f74d) cell_vkb2_top_candi_pane_ParamLimits

0xdc6b,	// (0x0000f74d) cell_vkb2_top_candi_pane

0x256e,	// (0x00004050) bg_popup_fep_char_preview_window_ParamLimits

0x256e,	// (0x00004050) bg_popup_fep_char_preview_window

0x7e9c,	// (0x0000997e) popup_fep_char_preview_window_t1_ParamLimits

0x7e9c,	// (0x0000997e) popup_fep_char_preview_window_t1

0x7ed6,	// (0x000099b8) bg_popup_fep_char_preview_window_g1

0x7ede,	// (0x000099c0) bg_popup_fep_char_preview_window_g2

0x7ee6,	// (0x000099c8) bg_popup_fep_char_preview_window_g3

0x7eee,	// (0x000099d0) bg_popup_fep_char_preview_window_g4

0x7ef6,	// (0x000099d8) bg_popup_fep_char_preview_window_g5

0x7efe,	// (0x000099e0) bg_popup_fep_char_preview_window_g6

0x7f06,	// (0x000099e8) bg_popup_fep_char_preview_window_g7

0x7f0e,	// (0x000099f0) bg_popup_fep_char_preview_window_g8

0x7f16,	// (0x000099f8) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaf,	// (0x00011891) bg_popup_fep_char_preview_window_g

0x5174,	// (0x00006c56) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5174,	// (0x00006c56) cell_vkb2_top_candi_pane_g1

0x5509,	// (0x00006feb) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5509,	// (0x00006feb) cell_vkb2_top_candi_pane_g2

0x552a,	// (0x0000700c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x552a,	// (0x0000700c) cell_vkb2_top_candi_pane_g3

0x7f26,	// (0x00009a08) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7f26,	// (0x00009a08) cell_vkb2_top_candi_pane_g4

0x7f47,	// (0x00009a29) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7f47,	// (0x00009a29) cell_vkb2_top_candi_pane_g5

0x6cf2,	// (0x000087d4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6cf2,	// (0x000087d4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc4,	// (0x000118a6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc4,	// (0x000118a6) cell_vkb2_top_candi_pane_g

0x7f68,	// (0x00009a4a) cell_vkb2_top_candi_pane_t1

0x348f,	// (0x00004f71) aid_size_touch_slider_mark_ParamLimits

0x348f,	// (0x00004f71) aid_size_touch_slider_mark

0xd96c,	// (0x0000f44e) grid_graphic2_catg_pane_ParamLimits

0xd96c,	// (0x0000f44e) grid_graphic2_catg_pane

0xda2a,	// (0x0000f50c) popup_grid_graphic2_window_t1_ParamLimits

0xda2a,	// (0x0000f50c) popup_grid_graphic2_window_t1

0xda40,	// (0x0000f522) popup_grid_graphic2_window_t2_ParamLimits

0xda40,	// (0x0000f522) popup_grid_graphic2_window_t2

0x0001,

0xfd7d,	// (0x0001185f) popup_grid_graphic2_window_t_ParamLimits

0xfd7d,	// (0x0001185f) popup_grid_graphic2_window_t

0xea32,	// (0x00010514) bg_button_pane_cp05_ParamLimits

0xdbe1,	// (0x0000f6c3) cell_graphic2_control_pane_g1_ParamLimits

0xdcd7,	// (0x0000f7b9) cell_graphic2_catg_pane_ParamLimits

0xdcd7,	// (0x0000f7b9) cell_graphic2_catg_pane

0xe61f,	// (0x00010101) bg_button_pane_cp12

0xdce9,	// (0x0000f7cb) cell_graphic2_catg_pane_g1

0x6e30,	// (0x00008912) cell_tb_ext_pane_t1_ParamLimits

0x785d,	// (0x0000933f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x785d,	// (0x0000933f) vkb2_top_cell_right_narrow_pane

0x7875,	// (0x00009357) vkb2_top_cell_right_wide_pane_ParamLimits

0x7875,	// (0x00009357) vkb2_top_cell_right_wide_pane

0x4d30,	// (0x00006812) bg_vkb2_func_pane_ParamLimits

0x4d30,	// (0x00006812) bg_vkb2_func_pane

0x78e6,	// (0x000093c8) vkb2_top_cell_left_pane_g1_ParamLimits

0x4d30,	// (0x00006812) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4d30,	// (0x00006812) bg_vkb2_fuc_pane_cp03

0x795b,	// (0x0000943d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1d2c,	// (0x0000380e) bg_vkb2_func_pane_g1

0x1d34,	// (0x00003816) bg_vkb2_func_pane_g2

0x1d44,	// (0x00003826) bg_vkb2_func_pane_g3

0x1d3c,	// (0x0000381e) bg_vkb2_func_pane_g4

0x1d4c,	// (0x0000382e) bg_vkb2_func_pane_g5

0x1d54,	// (0x00003836) bg_vkb2_func_pane_g6

0x1d5c,	// (0x0000383e) bg_vkb2_func_pane_g7

0x1d64,	// (0x00003846) bg_vkb2_func_pane_g8

0x1d24,	// (0x00003806) bg_vkb2_func_pane_g9

0x0008,

0xfdd1,	// (0x000118b3) bg_vkb2_func_pane_g

0x4d30,	// (0x00006812) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4d30,	// (0x00006812) bg_vkb2_fuc_pane_cp01

0x78e6,	// (0x000093c8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x78e6,	// (0x000093c8) vkb2_top_cell_right_wide_pane_g1

0x4d30,	// (0x00006812) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4d30,	// (0x00006812) bg_vkb2_fuc_pane_cp02

0x7fa1,	// (0x00009a83) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7fa1,	// (0x00009a83) vkb2_top_cell_right_narrow_pane_g1

0xce0c,	// (0x0000e8ee) aid_touch_area_decrease_ParamLimits

0xce0c,	// (0x0000e8ee) aid_touch_area_decrease

0xce46,	// (0x0000e928) aid_touch_area_increase_ParamLimits

0xce46,	// (0x0000e928) aid_touch_area_increase

0xce6e,	// (0x0000e950) aid_touch_area_mute_ParamLimits

0xce6e,	// (0x0000e950) aid_touch_area_mute

0xce96,	// (0x0000e978) aid_touch_area_slider_ParamLimits

0xce96,	// (0x0000e978) aid_touch_area_slider

0xced6,	// (0x0000e9b8) popup_slider_window_g4_ParamLimits

0xced6,	// (0x0000e9b8) popup_slider_window_g4

0xcefe,	// (0x0000e9e0) popup_slider_window_g5_ParamLimits

0xcefe,	// (0x0000e9e0) popup_slider_window_g5

0xcf32,	// (0x0000ea14) popup_slider_window_g6_ParamLimits

0xcf32,	// (0x0000ea14) popup_slider_window_g6

0x6b32,	// (0x00008614) popup_slider_window_t2_ParamLimits

0x6b32,	// (0x00008614) popup_slider_window_t2

0x0001,

0xfccb,	// (0x000117ad) popup_slider_window_t_ParamLimits

0xfccb,	// (0x000117ad) popup_slider_window_t

0xcf4e,	// (0x0000ea30) slider_pane_ParamLimits

0xcf4e,	// (0x0000ea30) slider_pane

0x7fbd,	// (0x00009a9f) slider_pane_g1_ParamLimits

0x7fbd,	// (0x00009a9f) slider_pane_g1

0x7fd1,	// (0x00009ab3) slider_pane_g2_ParamLimits

0x7fd1,	// (0x00009ab3) slider_pane_g2

0x7fe7,	// (0x00009ac9) slider_pane_g3_ParamLimits

0x7fe7,	// (0x00009ac9) slider_pane_g3

0x0003,

0xfde4,	// (0x000118c6) slider_pane_g_ParamLimits

0xfde4,	// (0x000118c6) slider_pane_g

0xb76e,	// (0x0000d250) popup_tb_float_extension_window_ParamLimits

0xb76e,	// (0x0000d250) popup_tb_float_extension_window

0x8013,	// (0x00009af5) aid_size_cell_tb_float_ext

0xe61f,	// (0x00010101) bg_popup_sub_window_cp28

0x801f,	// (0x00009b01) grid_tb_float_ext_pane

0x802b,	// (0x00009b0d) cell_tb_float_ext_pane_ParamLimits

0x802b,	// (0x00009b0d) cell_tb_float_ext_pane

0x8047,	// (0x00009b29) cell_tb_float_ext_pane_g1

0x8050,	// (0x00009b32) grid_highlight_pane_cp12

0xc62c,	// (0x0000e10e) cell_last_hwr_side_pane_ParamLimits

0xc62c,	// (0x0000e10e) cell_last_hwr_side_pane

0x4ccf,	// (0x000067b1) cell_last_hwr_side_pane_g1

0x8059,	// (0x00009b3b) cell_last_hwr_side_pane_g2

0x0001,

0xfded,	// (0x000118cf) cell_last_hwr_side_pane_g

0xd83c,	// (0x0000f31e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd83c,	// (0x0000f31e) vkb2_area_bottom_space_btn_pane

0x5174,	// (0x00006c56) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7a42,	// (0x00009524) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7f68,	// (0x00009a4a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8062,	// (0x00009b44) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8062,	// (0x00009b44) vkb2_area_bottom_space_btn_pane_g1

0x809c,	// (0x00009b7e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x809c,	// (0x00009b7e) vkb2_area_bottom_space_btn_pane_g2

0x80d2,	// (0x00009bb4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x80d2,	// (0x00009bb4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf2,	// (0x000118d4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf2,	// (0x000118d4) vkb2_area_bottom_space_btn_pane_g

0x4df5,	// (0x000068d7) cel_fep_hwr_func_pane_ParamLimits

0x4df5,	// (0x000068d7) cel_fep_hwr_func_pane

0xc601,	// (0x0000e0e3) cell_hwr_side_button_pane_ParamLimits

0xc601,	// (0x0000e0e3) cell_hwr_side_button_pane

0x6e64,	// (0x00008946) aid_area_touch_clock_ParamLimits

0xea32,	// (0x00010514) bg_uniindi_top_pane_ParamLimits

0x6e78,	// (0x0000895a) uniindi_top_pane_g1_ParamLimits

0x6e8e,	// (0x00008970) uniindi_top_pane_g2_ParamLimits

0x6e9a,	// (0x0000897c) uniindi_top_pane_g3_ParamLimits

0x6eab,	// (0x0000898d) uniindi_top_pane_g4_ParamLimits

0xfd03,	// (0x000117e5) uniindi_top_pane_g_ParamLimits

0x6eb8,	// (0x0000899a) uniindi_top_pane_t1_ParamLimits

0xea32,	// (0x00010514) bg_vkb2_func_pane_cp01_ParamLimits

0xea32,	// (0x00010514) bg_vkb2_func_pane_cp01

0x811c,	// (0x00009bfe) cel_fep_hwr_func_pane_g1_ParamLimits

0x811c,	// (0x00009bfe) cel_fep_hwr_func_pane_g1

0xea32,	// (0x00010514) bg_vkb2_func_pane_cp02_ParamLimits

0xea32,	// (0x00010514) bg_vkb2_func_pane_cp02

0x811c,	// (0x00009bfe) cell_hwr_side_button_pane_g1_ParamLimits

0x811c,	// (0x00009bfe) cell_hwr_side_button_pane_g1

0x1af5,	// (0x000035d7) status_pane_g4_ParamLimits

0x1af5,	// (0x000035d7) status_pane_g4

0x1b0f,	// (0x000035f1) status_pane_t1

0x4a82,	// (0x00006564) form2_midp_gauge_slider_cont_pane

0x4a8a,	// (0x0000656c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc559,	// (0x0000e03b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc56b,	// (0x0000e04d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacf,	// (0x000115b1) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ac0,	// (0x000065a2) form2_midp_slider_pane_ParamLimits

0x73d1,	// (0x00008eb3) aid_size_cell_func_vkb2_ParamLimits

0x73d1,	// (0x00008eb3) aid_size_cell_func_vkb2

0x7fff,	// (0x00009ae1) slider_pane_g4_ParamLimits

0x7fff,	// (0x00009ae1) slider_pane_g4

0xdcf2,	// (0x0000f7d4) form2_midp_gauge_slider_pane_t2_cp01

0xdd00,	// (0x0000f7e2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdd00,	// (0x0000f7e2) form2_midp_gauge_slider_pane_t3_cp01

0x8155,	// (0x00009c37) form2_midp_slider_pane_cp01

0xe61f,	// (0x00010101) navi_smil_pane

0x8189,	// (0x00009c6b) navi_smil_pane_g1

0x8191,	// (0x00009c73) navi_smil_pane_t1

0x815e,	// (0x00009c40) form2_midp_slider_pane_g1

0x8167,	// (0x00009c49) form2_midp_slider_pane_g2

0x816f,	// (0x00009c51) form2_midp_slider_pane_g3

0x815e,	// (0x00009c40) form2_midp_slider_pane_g4

0xdd1d,	// (0x0000f7ff) form2_midp_slider_pane_g5

0x0004,

0xfdfb,	// (0x000118dd) form2_midp_slider_pane_g

0x810c,	// (0x00009bee) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x810c,	// (0x00009bee) vkb2_area_bottom_space_btn_pane_g4

0xb955,	// (0x0000d437) lc0_navi_pane_ParamLimits

0xb955,	// (0x0000d437) lc0_navi_pane

0xb9c5,	// (0x0000d4a7) lc0_stat_indi_pane_ParamLimits

0xb9c5,	// (0x0000d4a7) lc0_stat_indi_pane

0xb9da,	// (0x0000d4bc) ls0_title_pane_ParamLimits

0xb9da,	// (0x0000d4bc) ls0_title_pane

0xefd4,	// (0x00010ab6) bg_popup_sub_pane_cp14_ParamLimits

0x6e4b,	// (0x0000892d) list_uniindi_pane_ParamLimits

0x6e57,	// (0x00008939) uniindi_top_pane_ParamLimits

0x6ef7,	// (0x000089d9) list_single_uniindi_pane_g1_ParamLimits

0x6f0a,	// (0x000089ec) list_single_uniindi_pane_t1_ParamLimits

0xdd26,	// (0x0000f808) lc0_stat_clock_pane_ParamLimits

0xdd26,	// (0x0000f808) lc0_stat_clock_pane

0xdd33,	// (0x0000f815) lc0_stat_indi_pane_g1_ParamLimits

0xdd33,	// (0x0000f815) lc0_stat_indi_pane_g1

0xdd40,	// (0x0000f822) lc0_stat_indi_pane_g2_ParamLimits

0xdd40,	// (0x0000f822) lc0_stat_indi_pane_g2

0x0001,

0xfe06,	// (0x000118e8) lc0_stat_indi_pane_g_ParamLimits

0xfe06,	// (0x000118e8) lc0_stat_indi_pane_g

0xdd4d,	// (0x0000f82f) lc0_uni_indicator_pane_ParamLimits

0xdd4d,	// (0x0000f82f) lc0_uni_indicator_pane

0xdd5a,	// (0x0000f83c) ls0_title_pane_g1_ParamLimits

0xdd5a,	// (0x0000f83c) ls0_title_pane_g1

0xdd6e,	// (0x0000f850) ls0_title_pane_t1_ParamLimits

0xdd6e,	// (0x0000f850) ls0_title_pane_t1

0xdd9c,	// (0x0000f87e) lc0_uni_indicator_pane_g1_ParamLimits

0xdd9c,	// (0x0000f87e) lc0_uni_indicator_pane_g1

0x8230,	// (0x00009d12) lc0_stat_clock_pane_t1

0xe61f,	// (0x00010101) main_ai5_pane

0x823e,	// (0x00009d20) ai5_sk_pane_ParamLimits

0x823e,	// (0x00009d20) ai5_sk_pane

0xddbb,	// (0x0000f89d) cell_ai5_widget_pane_ParamLimits

0xddbb,	// (0x0000f89d) cell_ai5_widget_pane

0xde3a,	// (0x0000f91c) aid_size_cell_widget_grid

0x82f8,	// (0x00009dda) bg_ai5_widget_pane_ParamLimits

0x82f8,	// (0x00009dda) bg_ai5_widget_pane

0xde6e,	// (0x0000f950) cell_ai5_widget_pane_g2

0xde82,	// (0x0000f964) cell_ai5_widget_pane_g3

0xde9c,	// (0x0000f97e) cell_ai5_widget_pane_g4

0xdeac,	// (0x0000f98e) cell_ai5_widget_pane_g5

0xdebc,	// (0x0000f99e) cell_ai5_widget_pane_g6

0xdec8,	// (0x0000f9aa) cell_ai5_widget_pane_g7

0xdf34,	// (0x0000fa16) cell_ai5_widget_pane_t1_ParamLimits

0xdf34,	// (0x0000fa16) cell_ai5_widget_pane_t1

0xdf51,	// (0x0000fa33) cell_ai5_widget_pane_t2_ParamLimits

0xdf51,	// (0x0000fa33) cell_ai5_widget_pane_t2

0xdf69,	// (0x0000fa4b) cell_ai5_widget_pane_t3_ParamLimits

0xdf69,	// (0x0000fa4b) cell_ai5_widget_pane_t3

0xdf81,	// (0x0000fa63) cell_ai5_widget_pane_t4_ParamLimits

0xdf81,	// (0x0000fa63) cell_ai5_widget_pane_t4

0xdfa7,	// (0x0000fa89) cell_ai5_widget_pane_t5_ParamLimits

0xdfa7,	// (0x0000fa89) cell_ai5_widget_pane_t5

0x84cd,	// (0x00009faf) cell_ai5_widget_pane_t6_ParamLimits

0x84cd,	// (0x00009faf) cell_ai5_widget_pane_t6

0x84df,	// (0x00009fc1) cell_ai5_widget_pane_t7_ParamLimits

0x84df,	// (0x00009fc1) cell_ai5_widget_pane_t7

0xdfc7,	// (0x0000faa9) cell_ai5_widget_pane_t8_ParamLimits

0xdfc7,	// (0x0000faa9) cell_ai5_widget_pane_t8

0x000b,

0xfe26,	// (0x00011908) cell_ai5_widget_pane_t_ParamLimits

0xfe26,	// (0x00011908) cell_ai5_widget_pane_t

0xe04b,	// (0x0000fb2d) grid_ai5_widget_pane

0xefd4,	// (0x00010ab6) highlight_cell_ai5_widget_pane_ParamLimits

0xefd4,	// (0x00010ab6) highlight_cell_ai5_widget_pane

0xe059,	// (0x0000fb3b) ai5_sk_left_pane

0xe063,	// (0x0000fb45) ai5_sk_middle_pane

0xe06d,	// (0x0000fb4f) ai5_sk_right_pane

0x85ae,	// (0x0000a090) bg_ai5_widget_pane_g1_ParamLimits

0x85ae,	// (0x0000a090) bg_ai5_widget_pane_g1

0x85ba,	// (0x0000a09c) bg_ai5_widget_pane_g2_ParamLimits

0x85ba,	// (0x0000a09c) bg_ai5_widget_pane_g2

0x85c6,	// (0x0000a0a8) bg_ai5_widget_pane_g3_ParamLimits

0x85c6,	// (0x0000a0a8) bg_ai5_widget_pane_g3

0x85d2,	// (0x0000a0b4) bg_ai5_widget_pane_g4_ParamLimits

0x85d2,	// (0x0000a0b4) bg_ai5_widget_pane_g4

0x85de,	// (0x0000a0c0) bg_ai5_widget_pane_g5_ParamLimits

0x85de,	// (0x0000a0c0) bg_ai5_widget_pane_g5

0x85ea,	// (0x0000a0cc) bg_ai5_widget_pane_g6_ParamLimits

0x85ea,	// (0x0000a0cc) bg_ai5_widget_pane_g6

0x85f6,	// (0x0000a0d8) bg_ai5_widget_pane_g7_ParamLimits

0x85f6,	// (0x0000a0d8) bg_ai5_widget_pane_g7

0x8602,	// (0x0000a0e4) bg_ai5_widget_pane_g8_ParamLimits

0x8602,	// (0x0000a0e4) bg_ai5_widget_pane_g8

0x860e,	// (0x0000a0f0) bg_ai5_widget_pane_g9_ParamLimits

0x860e,	// (0x0000a0f0) bg_ai5_widget_pane_g9

0x0008,

0xfe3f,	// (0x00011921) bg_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x00011921) bg_ai5_widget_pane_g

0xe0a1,	// (0x0000fb83) cell_shortcut_ai5_widget_pane_ParamLimits

0xe0a1,	// (0x0000fb83) cell_shortcut_ai5_widget_pane

0x0bce,	// (0x000026b0) bg_cell_shortcut_ai5_widget_pane

0x8659,	// (0x0000a13b) cell_grid_ai5_widget_pane_g1

0x0bce,	// (0x000026b0) highlight_cell_shortcut_ai5_widget_pane

0x1d34,	// (0x00003816) ai5_sk_left_pane_g1

0x8662,	// (0x0000a144) ai5_sk_left_pane_g2

0x866a,	// (0x0000a14c) ai5_sk_left_pane_g3

0x8672,	// (0x0000a154) ai5_sk_left_pane_g4

0x0003,

0xfe52,	// (0x00011934) ai5_sk_left_pane_g

0x867a,	// (0x0000a15c) ai5_sk_left_pane_t1

0x1d2c,	// (0x0000380e) ai5_sk_right_pane_g1

0x8688,	// (0x0000a16a) ai5_sk_right_pane_g2

0x8690,	// (0x0000a172) ai5_sk_right_pane_g3

0x8698,	// (0x0000a17a) ai5_sk_right_pane_g4

0x0003,

0xfe5b,	// (0x0001193d) ai5_sk_right_pane_g

0x86a0,	// (0x0000a182) ai5_sk_right_pane_t1

0x1d2c,	// (0x0000380e) ai5_sk_middle_pane_g1

0x1d34,	// (0x00003816) ai5_sk_middle_pane_g2

0x1d4c,	// (0x0000382e) ai5_sk_middle_pane_g3

0x8690,	// (0x0000a172) ai5_sk_middle_pane_g4

0x866a,	// (0x0000a14c) ai5_sk_middle_pane_g5

0x86ae,	// (0x0000a190) ai5_sk_middle_pane_g6

0xe0b4,	// (0x0000fb96) ai5_sk_middle_pane_g7

0x0006,

0xfe64,	// (0x00011946) ai5_sk_middle_pane_g

0xb83f,	// (0x0000d321) aid_touch_area_size_lc0_ParamLimits

0xb83f,	// (0x0000d321) aid_touch_area_size_lc0

0x554b,	// (0x0000702d) cell_hwr_candidate_pane_t1_ParamLimits

0x17b8,	// (0x0000329a) aid_touch_navi_pane

0xbae5,	// (0x0000d5c7) status_dt_navi_pane_ParamLimits

0xbae5,	// (0x0000d5c7) status_dt_navi_pane

0xbafd,	// (0x0000d5df) status_dt_sta_pane_ParamLimits

0xbafd,	// (0x0000d5df) status_dt_sta_pane

0xe0bc,	// (0x0000fb9e) dt_sta_controll_pane

0xe0c9,	// (0x0000fbab) dt_sta_indi_pane

0xe0d6,	// (0x0000fbb8) dt_sta_title_pane

0xea32,	// (0x00010514) bg_dt_sta_indi_pane_ParamLimits

0xea32,	// (0x00010514) bg_dt_sta_indi_pane

0xe0e8,	// (0x0000fbca) dt_sta_battery_pane

0xe0f0,	// (0x0000fbd2) dt_sta_indi_pane_g1

0xe0f9,	// (0x0000fbdb) dt_sta_indi_pane_g2

0xe102,	// (0x0000fbe4) dt_sta_indi_pane_g3

0x0002,

0xfe73,	// (0x00011955) dt_sta_indi_pane_g

0xe10b,	// (0x0000fbed) dt_sta_signal_pane

0xefd4,	// (0x00010ab6) bg_dt_sta_title_pane_ParamLimits

0xefd4,	// (0x00010ab6) bg_dt_sta_title_pane

0xe114,	// (0x0000fbf6) dt_sta_title_pane_g1

0xe11c,	// (0x0000fbfe) dt_sta_title_pane_t1_ParamLimits

0xe11c,	// (0x0000fbfe) dt_sta_title_pane_t1

0xe61f,	// (0x00010101) bg_dt_sta_control_pane

0xe131,	// (0x0000fc13) dt_sta_controll_pane_g1

0xe13a,	// (0x0000fc1c) bg_dt_sta_title_pane_g1

0xe143,	// (0x0000fc25) bg_dt_sta_title_pane_g2

0xe14c,	// (0x0000fc2e) bg_dt_sta_title_pane_g3

0x0002,

0xfe7a,	// (0x0001195c) bg_dt_sta_title_pane_g

0x4ccf,	// (0x000067b1) bg_dt_sta_indi_pane_g1

0x875c,	// (0x0000a23e) dt_sta_signal_pane_g1

0x8764,	// (0x0000a246) dt_sta_signal_pane_g2

0x0001,

0xfe81,	// (0x00011963) dt_sta_signal_pane_g

0x876c,	// (0x0000a24e) dt_sta_battery_pane_g1

0x8775,	// (0x0000a257) dt_sta_battery_pane_t1

0x4ccf,	// (0x000067b1) bg_dt_sta_control_pane_g1

0x04ee,	// (0x00001fd0) fep_china_uni_eep_pane

0x04f6,	// (0x00001fd8) fep_china_uni_entry_pane_ParamLimits

0x0506,	// (0x00001fe8) popup_fep_china_uni_window_g1_ParamLimits

0x0516,	// (0x00001ff8) popup_fep_china_uni_window_g2_ParamLimits

0x0516,	// (0x00001ff8) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x000111d5) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x000111d5) popup_fep_china_uni_window_g

0x8784,	// (0x0000a266) fep_china_uni_eep_pane_g1

0x878c,	// (0x0000a26e) fep_china_uni_eep_pane_t1

0x8180,	// (0x00009c62) aid_touch_area_size_smil_player

0x190c,	// (0x000033ee) lc0_clock_pane

0x1b03,	// (0x000035e5) status_pane_g5_ParamLimits

0x1b03,	// (0x000035e5) status_pane_g5

0xb294,	// (0x0000cd76) popup_keymap_window

0x1ac9,	// (0x000035ab) status_icon_pane

0xde82,	// (0x0000f964) cell_ai5_widget_pane_g3_ParamLimits

0xde9c,	// (0x0000f97e) cell_ai5_widget_pane_g4_ParamLimits

0xdeac,	// (0x0000f98e) cell_ai5_widget_pane_g5_ParamLimits

0xded4,	// (0x0000f9b6) cell_ai5_widget_pane_g8_ParamLimits

0xded4,	// (0x0000f9b6) cell_ai5_widget_pane_g8

0xdee8,	// (0x0000f9ca) cell_ai5_widget_pane_g9_ParamLimits

0xdee8,	// (0x0000f9ca) cell_ai5_widget_pane_g9

0xdefc,	// (0x0000f9de) cell_ai5_widget_pane_g10_ParamLimits

0xdefc,	// (0x0000f9de) cell_ai5_widget_pane_g10

0x879b,	// (0x0000a27d) status_icon_pane_g1

0xe61f,	// (0x00010101) bg_popup_sub_pane_cp13

0x87a3,	// (0x0000a285) popup_keymap_window_t1

0x0fb7,	// (0x00002a99) control_pane_g6_ParamLimits

0x0fb7,	// (0x00002a99) control_pane_g6

0x0fc4,	// (0x00002aa6) control_pane_g7_ParamLimits

0x0fc4,	// (0x00002aa6) control_pane_g7

0x0fd1,	// (0x00002ab3) control_pane_g8_ParamLimits

0x0fd1,	// (0x00002ab3) control_pane_g8

0xe0bc,	// (0x0000fb9e) dt_sta_controll_pane_ParamLimits

0xe0c9,	// (0x0000fbab) dt_sta_indi_pane_ParamLimits

0xe0d6,	// (0x0000fbb8) dt_sta_title_pane_ParamLimits

0xee83,	// (0x00010965) aid_size_touch_scroll_bar_cale

0xe7c4,	// (0x000102a6) popup_discreet_window_ParamLimits

0xe7c4,	// (0x000102a6) popup_discreet_window

0xa155,	// (0x0000bc37) popup_sk_window

0x256e,	// (0x00004050) bg_popup_sub_pane_cp28_ParamLimits

0x256e,	// (0x00004050) bg_popup_sub_pane_cp28

0x87b1,	// (0x0000a293) popup_discreet_window_g1_ParamLimits

0x87b1,	// (0x0000a293) popup_discreet_window_g1

0x87d1,	// (0x0000a2b3) popup_discreet_window_t1_ParamLimits

0x87d1,	// (0x0000a2b3) popup_discreet_window_t1

0x87ef,	// (0x0000a2d1) popup_discreet_window_t2_ParamLimits

0x87ef,	// (0x0000a2d1) popup_discreet_window_t2

0x0002,

0xfe86,	// (0x00011968) popup_discreet_window_t_ParamLimits

0xfe86,	// (0x00011968) popup_discreet_window_t

0x8841,	// (0x0000a323) popup_sk_window_g1

0x884b,	// (0x0000a32d) popup_sk_window_g2

0x0001,

0xfe8d,	// (0x0001196f) popup_sk_window_g

0x8853,	// (0x0000a335) popup_sk_window_t1

0x8861,	// (0x0000a343) popup_sk_window_t1_copy1

0xde6e,	// (0x0000f950) cell_ai5_widget_pane_g2_ParamLimits

0xdfd9,	// (0x0000fabb) cell_ai5_widget_pane_t9_ParamLimits

0xdfd9,	// (0x0000fabb) cell_ai5_widget_pane_t9

0xe61f,	// (0x00010101) main_fep_fshwr2_pane

0xe155,	// (0x0000fc37) aid_fshwr2_btn_pane

0xe169,	// (0x0000fc4b) aid_fshwr2_syb_pane

0xe17d,	// (0x0000fc5f) aid_fshwr2_txt_pane

0xe18d,	// (0x0000fc6f) fshwr2_func_candi_pane

0xe1af,	// (0x0000fc91) fshwr2_hwr_syb_pane

0xe1d3,	// (0x0000fcb5) fshwr2_icf_pane

0xe61f,	// (0x00010101) fshwr2_icf_bg_pane

0x890d,	// (0x0000a3ef) fshwr2_icf_pane_t1_ParamLimits

0x890d,	// (0x0000a3ef) fshwr2_icf_pane_t1

0x02ee,	// (0x00001dd0) fshwr2_func_candi_pane_g1

0xe203,	// (0x0000fce5) fshwr2_func_candi_row_pane_ParamLimits

0xe203,	// (0x0000fce5) fshwr2_func_candi_row_pane

0xe22a,	// (0x0000fd0c) cell_fshwr2_syb_pane_ParamLimits

0xe22a,	// (0x0000fd0c) cell_fshwr2_syb_pane

0x811c,	// (0x00009bfe) fshwr2_hwr_syb_pane_g1_ParamLimits

0x811c,	// (0x00009bfe) fshwr2_hwr_syb_pane_g1

0xe61f,	// (0x00010101) bg_popup_call_pane_cp01

0xe252,	// (0x0000fd34) fshwr2_func_candi_cell_pane_ParamLimits

0xe252,	// (0x0000fd34) fshwr2_func_candi_cell_pane

0x234e,	// (0x00003e30) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x234e,	// (0x00003e30) fshwr2_func_candi_cell_bg_pane

0xe29d,	// (0x0000fd7f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe29d,	// (0x0000fd7f) fshwr2_func_candi_cell_pane_g1

0xe2d4,	// (0x0000fdb6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe2d4,	// (0x0000fdb6) fshwr2_func_candi_cell_pane_t1

0xe61f,	// (0x00010101) bg_button_pane_cp08

0x10ff,	// (0x00002be1) cell_fshwr2_syb_bg_pane

0xe2ef,	// (0x0000fdd1) cell_fshwr2_syb_bg_pane_g1

0xe303,	// (0x0000fde5) cell_fshwr2_syb_bg_pane_t1

0xefd4,	// (0x00010ab6) main_tmo_pane

0xc016,	// (0x0000daf8) uni_indicator_pane_g1_ParamLimits

0xc02c,	// (0x0000db0e) uni_indicator_pane_g2_ParamLimits

0xc042,	// (0x0000db24) uni_indicator_pane_g3_ParamLimits

0xc055,	// (0x0000db37) uni_indicator_pane_g4_ParamLimits

0xc055,	// (0x0000db37) uni_indicator_pane_g4

0x3251,	// (0x00004d33) uni_indicator_pane_g5_ParamLimits

0x3251,	// (0x00004d33) uni_indicator_pane_g5

0x3251,	// (0x00004d33) uni_indicator_pane_g6_ParamLimits

0x3251,	// (0x00004d33) uni_indicator_pane_g6

0xf8eb,	// (0x000113cd) uni_indicator_pane_g_ParamLimits

0xcddc,	// (0x0000e8be) popup_tmo_note_window_ParamLimits

0xcddc,	// (0x0000e8be) popup_tmo_note_window

0xefd4,	// (0x00010ab6) fshwr2_bg_pane

0xe2c5,	// (0x0000fda7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe2c5,	// (0x0000fda7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe92,	// (0x00011974) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe92,	// (0x00011974) fshwr2_func_candi_cell_pane_g

0x4ccf,	// (0x000067b1) bg_popup_window_pane_cp01

0x8a22,	// (0x0000a504) bg_popup_window_pane_g1_cp01

0x8a2b,	// (0x0000a50d) bg_popup_window_pane_cp22_ParamLimits

0x8a2b,	// (0x0000a50d) bg_popup_window_pane_cp22

0x8a39,	// (0x0000a51b) listscroll_tmo_link_pane_ParamLimits

0x8a39,	// (0x0000a51b) listscroll_tmo_link_pane

0x8a79,	// (0x0000a55b) popup_tmo_note_window_g1_ParamLimits

0x8a79,	// (0x0000a55b) popup_tmo_note_window_g1

0x8a86,	// (0x0000a568) tmo_note_info_pane_ParamLimits

0x8a86,	// (0x0000a568) tmo_note_info_pane

0xe319,	// (0x0000fdfb) list_tmo_note_info_pane_g1_ParamLimits

0xe319,	// (0x0000fdfb) list_tmo_note_info_pane_g1

0x8ab7,	// (0x0000a599) list_tmo_note_info_pane_g2_ParamLimits

0x8ab7,	// (0x0000a599) list_tmo_note_info_pane_g2

0x0001,

0xfe97,	// (0x00011979) list_tmo_note_info_pane_g_ParamLimits

0xfe97,	// (0x00011979) list_tmo_note_info_pane_g

0x8ad3,	// (0x0000a5b5) list_tmo_note_info_text_pane_ParamLimits

0x8ad3,	// (0x0000a5b5) list_tmo_note_info_text_pane

0x8b58,	// (0x0000a63a) list_tmo_link_pane

0x8b65,	// (0x0000a647) scroll_pane_cp20

0x8b72,	// (0x0000a654) list_single_tmo_link_pane_ParamLimits

0x8b72,	// (0x0000a654) list_single_tmo_link_pane

0x8b82,	// (0x0000a664) list_single_tmo_link_pane_t1

0x8b90,	// (0x0000a672) list_tmo_note_info_text_pane_t1_ParamLimits

0x8b90,	// (0x0000a672) list_tmo_note_info_text_pane_t1

0xab45,	// (0x0000c627) aid_size_touch_scroll_bar_cp01_ParamLimits

0xab45,	// (0x0000c627) aid_size_touch_scroll_bar_cp01

0xaa85,	// (0x0000c567) aid_size_touch_slider_marker

0xa145,	// (0x0000bc27) popup_settings_window_ParamLimits

0xa145,	// (0x0000bc27) popup_settings_window

0x115d,	// (0x00002c3f) popup_candi_list_indi_window

0x17b8,	// (0x0000329a) aid_touch_navi_pane_ParamLimits

0x6bc7,	// (0x000086a9) rs_clock_indi_pane

0x6bd0,	// (0x000086b2) sctrl_sk_bottom_pane_ParamLimits

0x6be1,	// (0x000086c3) sctrl_sk_top_pane_ParamLimits

0x7423,	// (0x00008f05) popup_fep_tooltip_window

0xde3a,	// (0x0000f91c) aid_size_cell_widget_grid_ParamLimits

0xde59,	// (0x0000f93b) cell_ai5_widget_pane_g1_ParamLimits

0xde59,	// (0x0000f93b) cell_ai5_widget_pane_g1

0xdebc,	// (0x0000f99e) cell_ai5_widget_pane_g6_ParamLimits

0xdec8,	// (0x0000f9aa) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0b,	// (0x000118ed) cell_ai5_widget_pane_g_ParamLimits

0xfe0b,	// (0x000118ed) cell_ai5_widget_pane_g

0xe008,	// (0x0000faea) cell_ai5_widget_pane_t10_ParamLimits

0xe008,	// (0x0000faea) cell_ai5_widget_pane_t10

0xe04b,	// (0x0000fb2d) grid_ai5_widget_pane_ParamLimits

0xe077,	// (0x0000fb59) cell_contacts_ai5_widget_pane_ParamLimits

0xe077,	// (0x0000fb59) cell_contacts_ai5_widget_pane

0x8804,	// (0x0000a2e6) popup_discreet_window_t3_ParamLimits

0x8804,	// (0x0000a2e6) popup_discreet_window_t3

0xe1ef,	// (0x0000fcd1) popup_fshwr2_char_preview_window_ParamLimits

0xe1ef,	// (0x0000fcd1) popup_fshwr2_char_preview_window

0xe330,	// (0x0000fe12) tmo_note_info_pane_t1

0xe345,	// (0x0000fe27) tmo_note_info_pane_t2

0xe35e,	// (0x0000fe40) tmo_note_info_pane_t3

0x8b34,	// (0x0000a616) tmo_note_info_pane_t4

0x8b46,	// (0x0000a628) tmo_note_info_pane_t5

0x0004,

0xfe9c,	// (0x0001197e) tmo_note_info_pane_t

0x8b58,	// (0x0000a63a) list_tmo_link_pane_ParamLimits

0x8b65,	// (0x0000a647) scroll_pane_cp20_ParamLimits

0xe61f,	// (0x00010101) bg_popup_fep_char_preview_window_cp01

0x8ba9,	// (0x0000a68b) popup_fshwr2_char_preview_window_t1

0x8bb7,	// (0x0000a699) popup_candi_list_indi_window_g1

0x8bc0,	// (0x0000a6a2) bg_cell_contacts_ai5_widget_pane

0xe373,	// (0x0000fe55) cell_contacts_ai5_widget_pane_g1

0x8be1,	// (0x0000a6c3) cell_contacts_ai5_widget_pane_g2

0x8bed,	// (0x0000a6cf) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea7,	// (0x00011989) cell_contacts_ai5_widget_pane_g

0x8bf9,	// (0x0000a6db) cell_contacts_ai5_widget_pane_t1

0xefd4,	// (0x00010ab6) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8c70,	// (0x0000a752) settings_container_pane

0x0bce,	// (0x000026b0) listscroll_set_pane_copy1

0x408d,	// (0x00005b6f) scroll_pane_cp121_copy1

0x8c7c,	// (0x0000a75e) set_content_pane_copy1

0x8c84,	// (0x0000a766) aid_height_set_list_copy1_ParamLimits

0x8c84,	// (0x0000a766) aid_height_set_list_copy1

0x3555,	// (0x00005037) aid_size_parent_copy1_ParamLimits

0x3555,	// (0x00005037) aid_size_parent_copy1

0x8c90,	// (0x0000a772) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8c90,	// (0x0000a772) button_value_adjust_pane_cp6_copy1

0x10ff,	// (0x00002be1) list_highlight_pane_cp2_copy1_ParamLimits

0x10ff,	// (0x00002be1) list_highlight_pane_cp2_copy1

0x8ca4,	// (0x0000a786) list_set_pane_copy1_ParamLimits

0x8ca4,	// (0x0000a786) list_set_pane_copy1

0x8c0b,	// (0x0000a6ed) main_pane_set_t1_copy1_ParamLimits

0x8c0b,	// (0x0000a6ed) main_pane_set_t1_copy1

0x8c45,	// (0x0000a727) main_pane_set_t2_copy1_ParamLimits

0x8c45,	// (0x0000a727) main_pane_set_t2_copy1

0x8d65,	// (0x0000a847) main_pane_set_t3_copy1

0x8d73,	// (0x0000a855) main_pane_set_t4_copy1

0x8c64,	// (0x0000a746) set_content_pane_g1_copy1_ParamLimits

0x8c64,	// (0x0000a746) set_content_pane_g1_copy1

0x8d81,	// (0x0000a863) setting_code_pane_copy1

0x8d89,	// (0x0000a86b) setting_slider_graphic_pane_copy1

0x8d89,	// (0x0000a86b) setting_slider_pane_copy1

0x8d91,	// (0x0000a873) setting_text_pane_copy1

0x8d91,	// (0x0000a873) setting_volume_pane_copy1

0x8d81,	// (0x0000a863) settings_code_pane_cp2_copy1

0x8d99,	// (0x0000a87b) settings_code_pane_cp_copy1_ParamLimits

0x8d99,	// (0x0000a87b) settings_code_pane_cp_copy1

0x8dad,	// (0x0000a88f) volume_set_pane_copy1

0x8db9,	// (0x0000a89b) volume_set_pane_g10_copy1

0x8dc5,	// (0x0000a8a7) volume_set_pane_g1_copy1

0x8dcf,	// (0x0000a8b1) volume_set_pane_g2_copy1

0x8dd9,	// (0x0000a8bb) volume_set_pane_g3_copy1

0x8de3,	// (0x0000a8c5) volume_set_pane_g4_copy1

0x8ded,	// (0x0000a8cf) volume_set_pane_g5_copy1

0x8df7,	// (0x0000a8d9) volume_set_pane_g6_copy1

0x8e01,	// (0x0000a8e3) volume_set_pane_g7_copy1

0x8e0b,	// (0x0000a8ed) volume_set_pane_g8_copy1

0x8e15,	// (0x0000a8f7) volume_set_pane_g9_copy1

0xe85c,	// (0x0001033e) bg_set_opt_pane_cp_copy1_ParamLimits

0xe85c,	// (0x0001033e) bg_set_opt_pane_cp_copy1

0x8e21,	// (0x0000a903) setting_slider_pane_t1_copy1_ParamLimits

0x8e21,	// (0x0000a903) setting_slider_pane_t1_copy1

0x8e40,	// (0x0000a922) setting_slider_pane_t2_copy1_ParamLimits

0x8e40,	// (0x0000a922) setting_slider_pane_t2_copy1

0x8e5a,	// (0x0000a93c) setting_slider_pane_t3_copy1_ParamLimits

0x8e5a,	// (0x0000a93c) setting_slider_pane_t3_copy1

0x8e72,	// (0x0000a954) slider_set_pane_copy1_ParamLimits

0x8e72,	// (0x0000a954) slider_set_pane_copy1

0xf08f,	// (0x00010b71) set_opt_bg_pane_g1_copy2

0xf097,	// (0x00010b79) set_opt_bg_pane_g2_copy2

0x8e88,	// (0x0000a96a) set_opt_bg_pane_g3_copy2

0xf0a7,	// (0x00010b89) set_opt_bg_pane_g4_copy2

0xf0af,	// (0x00010b91) set_opt_bg_pane_g5_copy2

0xf0b7,	// (0x00010b99) set_opt_bg_pane_g6_copy2

0x8e92,	// (0x0000a974) set_opt_bg_pane_g7_copy2

0x8e9c,	// (0x0000a97e) set_opt_bg_pane_g8_copy2

0x8ea6,	// (0x0000a988) set_opt_bg_pane_g9_copy2

0x8eb0,	// (0x0000a992) aid_size_touch_slider_mark_copy1_ParamLimits

0x8eb0,	// (0x0000a992) aid_size_touch_slider_mark_copy1

0x8ec4,	// (0x0000a9a6) slider_set_pane_g1_copy1

0x8ecd,	// (0x0000a9af) slider_set_pane_g2_copy1

0x34bc,	// (0x00004f9e) slider_set_pane_g3_copy1_ParamLimits

0x34bc,	// (0x00004f9e) slider_set_pane_g3_copy1

0x34d0,	// (0x00004fb2) slider_set_pane_g4_copy1_ParamLimits

0x34d0,	// (0x00004fb2) slider_set_pane_g4_copy1

0x34e8,	// (0x00004fca) slider_set_pane_g5_copy1_ParamLimits

0x34e8,	// (0x00004fca) slider_set_pane_g5_copy1

0x34bc,	// (0x00004f9e) slider_set_pane_g6_copy1_ParamLimits

0x34bc,	// (0x00004f9e) slider_set_pane_g6_copy1

0x8ed5,	// (0x0000a9b7) slider_set_pane_g7_copy1_ParamLimits

0x8ed5,	// (0x0000a9b7) slider_set_pane_g7_copy1

0xe7a2,	// (0x00010284) bg_set_opt_pane_cp2_copy1

0x8eeb,	// (0x0000a9cd) setting_slider_graphic_pane_g1_copy1

0x8ef4,	// (0x0000a9d6) setting_slider_graphic_pane_t1_copy1

0x8f04,	// (0x0000a9e6) setting_slider_graphic_pane_t2_copy1

0x8f14,	// (0x0000a9f6) slider_set_pane_cp_copy1

0x8f24,	// (0x0000aa06) input_focus_pane_cp1_copy1

0x8f2d,	// (0x0000aa0f) list_set_text_pane_copy1

0x8f35,	// (0x0000aa17) setting_text_pane_g1_copy1

0xe90a,	// (0x000103ec) set_text_pane_t1_copy1

0x8f24,	// (0x0000aa06) input_focus_pane_cp2_copy1

0x8f35,	// (0x0000aa17) setting_code_pane_g1_copy1

0x8f3e,	// (0x0000aa20) setting_code_pane_t1_copy1

0x3e92,	// (0x00005974) list_set_graphic_pane_copy1

0xe7a2,	// (0x00010284) bg_set_opt_pane_cp4_copy1

0x08bd,	// (0x0000239f) list_set_graphic_pane_g1_copy1_ParamLimits

0x08bd,	// (0x0000239f) list_set_graphic_pane_g1_copy1

0x8f4c,	// (0x0000aa2e) list_set_graphic_pane_g2_copy1

0x08d5,	// (0x000023b7) list_set_graphic_pane_t1_copy1_ParamLimits

0x08d5,	// (0x000023b7) list_set_graphic_pane_t1_copy1

0x4ccf,	// (0x000067b1) rs_clock_indi_pane_g1

0x8f54,	// (0x0000aa36) rs_clock_indi_pane_t1

0x8f62,	// (0x0000aa44) rs_indi_pane

0x8f6a,	// (0x0000aa4c) rs_indi_pane_g1

0x8f73,	// (0x0000aa55) rs_indi_pane_g2

0x8bb7,	// (0x0000a699) rs_indi_pane_g3

0x0002,

0xfeae,	// (0x00011990) rs_indi_pane_g

0x0bce,	// (0x000026b0) bg_popup_preview_window_pane_cp03

0x8f7c,	// (0x0000aa5e) popup_fep_tooltip_window_t1

0x5f7c,	// (0x00007a5e) popup_note2_window_g2_ParamLimits

0x5f7c,	// (0x00007a5e) popup_note2_window_g2

0x0001,

0xfc3b,	// (0x0001171d) popup_note2_window_g_ParamLimits

0xfc3b,	// (0x0001171d) popup_note2_window_g

0x6597,	// (0x00008079) bg_popup_sub_pane_cp11_ParamLimits

0x65a4,	// (0x00008086) cell_ai3_links_pane_g1_ParamLimits

0x65bb,	// (0x0000809d) cell_ai3_links_pane_t1

0xe90a,	// (0x000103ec) set_text_pane_t1_copy1_ParamLimits

0x0ad0,	// (0x000025b2) cell_graphic_popup_pane_cp2_ParamLimits

0x0ad0,	// (0x000025b2) cell_graphic_popup_pane_cp2

0x8f8a,	// (0x0000aa6c) cell_graphic_popup_pane_g1_cp2

0xec96,	// (0x00010778) cell_graphic_popup_pane_g2_cp2

0x8f92,	// (0x0000aa74) cell_graphic_popup_pane_g3_cp2

0x8f9a,	// (0x0000aa7c) cell_graphic_popup_pane_t2_cp2

0xeca7,	// (0x00010789) grid_highlight_pane_cp3_cp2

0xf50f,	// (0x00010ff1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xefd4,	// (0x00010ab6) main_tmo_pane_ParamLimits

0xcdd0,	// (0x0000e8b2) popup_tmo_big_image_note_window

0xde48,	// (0x0000f92a) cell_ai5_widget_list_pane

0xde50,	// (0x0000f932) cell_ai5_widget_lrg_icon_pane

0xe330,	// (0x0000fe12) tmo_note_info_pane_t1_ParamLimits

0xe345,	// (0x0000fe27) tmo_note_info_pane_t2_ParamLimits

0xe35e,	// (0x0000fe40) tmo_note_info_pane_t3_ParamLimits

0x8b34,	// (0x0000a616) tmo_note_info_pane_t4_ParamLimits

0x8b46,	// (0x0000a628) tmo_note_info_pane_t5_ParamLimits

0xfe9c,	// (0x0001197e) tmo_note_info_pane_t_ParamLimits

0x8c70,	// (0x0000a752) settings_container_pane_ParamLimits

0x8f1c,	// (0x0000a9fe) indicator_popup_pane_cp5

0x8f1c,	// (0x0000a9fe) indicator_popup_pane_cp6

0x3e92,	// (0x00005974) list_set_graphic_pane_copy1_ParamLimits

0xe61f,	// (0x00010101) bg_popup_window_pane_cp23

0x8fa8,	// (0x0000aa8a) popup_tmo_big_image_note_window_g1

0x8fb4,	// (0x0000aa96) popup_tmo_big_image_note_window_t1

0x8fc4,	// (0x0000aaa6) popup_tmo_big_image_note_window_t2

0x8fd4,	// (0x0000aab6) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb5,	// (0x00011997) popup_tmo_big_image_note_window_t

0x4ccf,	// (0x000067b1) cell_ai5_widget_lrg_icon_pane_g1

0xe388,	// (0x0000fe6a) cell_ai5_widget_lrg_icon_pane_t1

0xe396,	// (0x0000fe78) cell_ai5_widget_list_row_pane_ParamLimits

0xe396,	// (0x0000fe78) cell_ai5_widget_list_row_pane

0xe3ae,	// (0x0000fe90) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe3ae,	// (0x0000fe90) cell_ai5_widget_list_row_pane_g1

0xe3bb,	// (0x0000fe9d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe3bb,	// (0x0000fe9d) cell_ai5_widget_list_row_pane_t1

0xe3e6,	// (0x0000fec8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe3e6,	// (0x0000fec8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebc,	// (0x0001199e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebc,	// (0x0001199e) cell_ai5_widget_list_row_pane_t

0xe61f,	// (0x00010101) main_fep_vtchi_ss_pane

0x9092,	// (0x0000ab74) popup_fep_char_pre_window

0x909a,	// (0x0000ab7c) popup_fep_ituss_window

0xe438,	// (0x0000ff1a) popup_fep_vkbss_window

0x10ff,	// (0x00002be1) grid_vkbss_keypad_pane_ParamLimits

0x10ff,	// (0x00002be1) grid_vkbss_keypad_pane

0x9108,	// (0x0000abea) ituss_keypad_pane

0x911e,	// (0x0000ac00) aid_vkbss_key_offset_ParamLimits

0x911e,	// (0x0000ac00) aid_vkbss_key_offset

0xe447,	// (0x0000ff29) cell_vkbss_key_pane_ParamLimits

0xe447,	// (0x0000ff29) cell_vkbss_key_pane

0x918c,	// (0x0000ac6e) bg_cell_vkbss_key_g1_ParamLimits

0x918c,	// (0x0000ac6e) bg_cell_vkbss_key_g1

0xe49e,	// (0x0000ff80) cell_vkbss_key_3p_pane_ParamLimits

0xe49e,	// (0x0000ff80) cell_vkbss_key_3p_pane

0xe4d4,	// (0x0000ffb6) cell_vkbss_key_g1_ParamLimits

0xe4d4,	// (0x0000ffb6) cell_vkbss_key_g1

0xe50a,	// (0x0000ffec) cell_vkbss_key_t1_ParamLimits

0xe50a,	// (0x0000ffec) cell_vkbss_key_t1

0x9260,	// (0x0000ad42) cell_ituss_key_pane_ParamLimits

0x9260,	// (0x0000ad42) cell_ituss_key_pane

0x9271,	// (0x0000ad53) bg_cell_ituss_key_g1_ParamLimits

0x9271,	// (0x0000ad53) bg_cell_ituss_key_g1

0x927d,	// (0x0000ad5f) cell_ituss_key_pane_g1_ParamLimits

0x927d,	// (0x0000ad5f) cell_ituss_key_pane_g1

0x9291,	// (0x0000ad73) cell_ituss_key_pane_g2_ParamLimits

0x9291,	// (0x0000ad73) cell_ituss_key_pane_g2

0x0005,

0xfec3,	// (0x000119a5) cell_ituss_key_pane_g_ParamLimits

0xfec3,	// (0x000119a5) cell_ituss_key_pane_g

0x9327,	// (0x0000ae09) cell_ituss_key_t1_ParamLimits

0x9327,	// (0x0000ae09) cell_ituss_key_t1

0x9361,	// (0x0000ae43) cell_ituss_key_t2_ParamLimits

0x9361,	// (0x0000ae43) cell_ituss_key_t2

0x9393,	// (0x0000ae75) cell_ituss_key_t3_ParamLimits

0x9393,	// (0x0000ae75) cell_ituss_key_t3

0x93c4,	// (0x0000aea6) cell_ituss_key_t4_ParamLimits

0x93c4,	// (0x0000aea6) cell_ituss_key_t4

0x0004,

0xfed0,	// (0x000119b2) cell_ituss_key_t_ParamLimits

0xfed0,	// (0x000119b2) cell_ituss_key_t

0xe566,	// (0x00010048) cell_vkbss_key_3p_pane_g1

0xe56e,	// (0x00010050) cell_vkbss_key_3p_pane_g2

0xe576,	// (0x00010058) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedb,	// (0x000119bd) cell_vkbss_key_3p_pane_g

0x0bce,	// (0x000026b0) bg_popup_fep_char_preview_window_cp02

0x941f,	// (0x0000af01) popup_fep_char_pre_window_t1

0xde27,	// (0x0000f909) main_ai5_sk_pane

0x8bc0,	// (0x0000a6a2) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe373,	// (0x0000fe55) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8be1,	// (0x0000a6c3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8bed,	// (0x0000a6cf) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea7,	// (0x00011989) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8bf9,	// (0x0000a6db) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xefd4,	// (0x00010ab6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe57e,	// (0x00010060) main_ai5_sk_pane_g1

0x23a6,	// (0x00003e88) popup_query_code_window_g1

0xe429,	// (0x0000ff0b) popup_fep_vkb_icf_pane

0x90df,	// (0x0000abc1) popup_fep_vtchi_icf_pane

0x9436,	// (0x0000af18) bg_icf_pane

0x9436,	// (0x0000af18) list_vkb_icf_pane

0x9442,	// (0x0000af24) bg_icf_pane_cp01

0x9455,	// (0x0000af37) vtchi_icf_list_pane

0xe5d3,	// (0x000100b5) list_vkb_icf_pane_t1_ParamLimits

0xe5d3,	// (0x000100b5) list_vkb_icf_pane_t1

0x94ce,	// (0x0000afb0) vtchi_icf_list_pane_t1_ParamLimits

0x94ce,	// (0x0000afb0) vtchi_icf_list_pane_t1

0x909a,	// (0x0000ab7c) popup_fep_ituss_window_ParamLimits

0x90df,	// (0x0000abc1) popup_fep_vtchi_icf_pane_ParamLimits

0x9108,	// (0x0000abea) ituss_keypad_pane_ParamLimits

0x9114,	// (0x0000abf6) ituss_sks_pane

0x9436,	// (0x0000af18) bg_icf_pane_ParamLimits

0xe40e,	// (0x0000fef0) icf_edit_indi_pane_ParamLimits

0xe40e,	// (0x0000fef0) icf_edit_indi_pane

0x9436,	// (0x0000af18) list_vkb_icf_pane_ParamLimits

0x9442,	// (0x0000af24) bg_icf_pane_cp01_ParamLimits

0x9085,	// (0x0000ab67) icf_edit_indi_pane_cp01_ParamLimits

0x9085,	// (0x0000ab67) icf_edit_indi_pane_cp01

0x9455,	// (0x0000af37) vtchi_query_pane

0x811c,	// (0x00009bfe) icf_edit_indi_pane_g1_ParamLimits

0x811c,	// (0x00009bfe) icf_edit_indi_pane_g1

0xe5ea,	// (0x000100cc) icf_edit_indi_pane_g2_ParamLimits

0xe5ea,	// (0x000100cc) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000119e8) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000119e8) icf_edit_indi_pane_g

0xe5fe,	// (0x000100e0) icf_edit_indi_pane_t1

0x94e7,	// (0x0000afc9) bg_input_focus_pane_cp042

0xee7a,	// (0x0001095c) vtchi_button_pane

0x94f0,	// (0x0000afd2) vtchi_query_pane_t1

0x94fe,	// (0x0000afe0) vtchi_query_pane_t2

0x950c,	// (0x0000afee) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x000119d7) vtchi_query_pane_t

0xe61f,	// (0x00010101) bg_button_pane_cp13

0x951a,	// (0x0000affc) vtchi_button_pane_g1

0x9522,	// (0x0000b004) ituss_sks_pane_g1

0x952d,	// (0x0000b00f) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x000119de) ituss_sks_pane_g

0x9535,	// (0x0000b017) ituss_sks_pane_t1

0x9543,	// (0x0000b025) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x000119e3) ituss_sks_pane_t

0x46ff,	// (0x000061e1) indicator_nsta_pane_cp_g1

0x4708,	// (0x000061ea) indicator_nsta_pane_cp_g2

0x4710,	// (0x000061f2) indicator_nsta_pane_cp_g3

0x4718,	// (0x000061fa) indicator_nsta_pane_cp_g4

0x4708,	// (0x000061ea) indicator_nsta_pane_cp_g5

0x4710,	// (0x000061f2) indicator_nsta_pane_cp_g6

0x0005,

0xfa85,	// (0x00011567) indicator_nsta_pane_cp_g

0xdbc3,	// (0x0000f6a5) cell_graphic2_pane_t2_ParamLimits

0xdbc3,	// (0x0000f6a5) cell_graphic2_pane_t2

0x0001,

0xfd92,	// (0x00011874) cell_graphic2_pane_t_ParamLimits

0xfd92,	// (0x00011874) cell_graphic2_pane_t

0xdbfb,	// (0x0000f6dd) cell_graphic2_control_pane_t1

0xadbf,	// (0x0000c8a1) signal_pane_g3_ParamLimits

0xadbf,	// (0x0000c8a1) signal_pane_g3

0xadd3,	// (0x0000c8b5) signal_pane_g4_ParamLimits

0xadd3,	// (0x0000c8b5) signal_pane_g4

0xe3f8,	// (0x0000feda) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe3f8,	// (0x0000feda) cell_ai5_widget_list_row_pane_t3

0x9315,	// (0x0000adf7) cell_ituss_key_pane_t1_ParamLimits

0x9315,	// (0x0000adf7) cell_ituss_key_pane_t1

0x1fde,	// (0x00003ac0) form_field_data_wide_pane_vc_t2_ParamLimits

0x1fde,	// (0x00003ac0) form_field_data_wide_pane_vc_t2

0x1ff2,	// (0x00003ad4) form_field_data_wide_pane_vc_t3_ParamLimits

0x1ff2,	// (0x00003ad4) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x000112b5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x000112b5) form_field_data_wide_pane_vc_t

0x439c,	// (0x00005e7e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x439c,	// (0x00005e7e) form_field_slider_wide_pane_vc_t3

0x4472,	// (0x00005f54) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4472,	// (0x00005f54) form_field_popup_wide_pane_vc_t2

0x4489,	// (0x00005f6b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4489,	// (0x00005f6b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa74,	// (0x00011556) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x00011556) form_field_popup_wide_pane_vc_t

0xe155,	// (0x0000fc37) aid_fshwr2_btn_pane_ParamLimits

0xe169,	// (0x0000fc4b) aid_fshwr2_syb_pane_ParamLimits

0xe17d,	// (0x0000fc5f) aid_fshwr2_txt_pane_ParamLimits

0xefd4,	// (0x00010ab6) fshwr2_bg_pane_ParamLimits

0xe18d,	// (0x0000fc6f) fshwr2_func_candi_pane_ParamLimits

0xe1af,	// (0x0000fc91) fshwr2_hwr_syb_pane_ParamLimits

0xe1d3,	// (0x0000fcb5) fshwr2_icf_pane_ParamLimits

0x4310,	// (0x00005df2) list_double_graphic_pane_vc_g4_ParamLimits

0x4310,	// (0x00005df2) list_double_graphic_pane_vc_g4

0x92b1,	// (0x0000ad93) cell_ituss_key_pane_g3_ParamLimits

0x92b1,	// (0x0000ad93) cell_ituss_key_pane_g3

0x93f5,	// (0x0000aed7) cell_ituss_key_t5_ParamLimits

0x93f5,	// (0x0000aed7) cell_ituss_key_t5

0xe438,	// (0x0000ff1a) popup_fep_vkbss_window_ParamLimits

0xde31,	// (0x0000f913) aid_cell_ai5_quarter

0xe5fe,	// (0x000100e0) icf_edit_indi_pane_t1_ParamLimits

0xeada,	// (0x000105bc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xeada,	// (0x000105bc) aid_tch_indicator_popup_pane_cp2

0xeaed,	// (0x000105cf) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xeaed,	// (0x000105cf) aid_tch_query_popup_data_pane_cp2

0x234e,	// (0x00003e30) aid_tch_query_popup_pane_ParamLimits

0x234e,	// (0x00003e30) aid_tch_query_popup_pane

0x234e,	// (0x00003e30) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x234e,	// (0x00003e30) aid_tch_query_popup_data_pane_cp1

0x10ff,	// (0x00002be1) cell_fshwr2_syb_bg_pane_ParamLimits

0xe2ef,	// (0x0000fdd1) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe303,	// (0x0000fde5) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe429,	// (0x0000ff0b) popup_fep_vkb_icf_pane_ParamLimits

0xdccf,	// (0x0000f7b1) bg_popup_fep_char_preview_window_g10

0xdf10,	// (0x0000f9f2) cell_ai5_widget_pane_g11_ParamLimits

0xdf10,	// (0x0000f9f2) cell_ai5_widget_pane_g11

0xdf1c,	// (0x0000f9fe) cell_ai5_widget_pane_g12_ParamLimits

0xdf1c,	// (0x0000f9fe) cell_ai5_widget_pane_g12

0xdf28,	// (0x0000fa0a) cell_ai5_widget_pane_g13_ParamLimits

0xdf28,	// (0x0000fa0a) cell_ai5_widget_pane_g13

0xe027,	// (0x0000fb09) cell_ai5_widget_pane_t11_ParamLimits

0xe027,	// (0x0000fb09) cell_ai5_widget_pane_t11

0xe039,	// (0x0000fb1b) cell_ai5_widget_pane_t12_ParamLimits

0xe039,	// (0x0000fb1b) cell_ai5_widget_pane_t12

0x92bd,	// (0x0000ad9f) cell_ituss_key_pane_g4_ParamLimits

0x92bd,	// (0x0000ad9f) cell_ituss_key_pane_g4

0x92d9,	// (0x0000adbb) cell_ituss_key_pane_g5_ParamLimits

0x92d9,	// (0x0000adbb) cell_ituss_key_pane_g5

0x92f5,	// (0x0000add7) cell_ituss_key_pane_g6_ParamLimits

0x92f5,	// (0x0000add7) cell_ituss_key_pane_g6

0x1d24,	// (0x00003806) bg_icf_pane_g1

0xe587,	// (0x00010069) bg_icf_pane_g2

0xe591,	// (0x00010073) bg_icf_pane_g3

0xe599,	// (0x0001007b) bg_icf_pane_g4

0xe5a3,	// (0x00010085) bg_icf_pane_g5

0xe5ad,	// (0x0001008f) bg_icf_pane_g6

0xe5b7,	// (0x00010099) bg_icf_pane_g7

0xe5bf,	// (0x000100a1) bg_icf_pane_g8

0xe5c9,	// (0x000100ab) bg_icf_pane_g9

0x0008,

0xfee2,	// (0x000119c4) bg_icf_pane_g

0x90f5,	// (0x0000abd7) popup_hyb_candi_window_ParamLimits

0x90f5,	// (0x0000abd7) popup_hyb_candi_window

0x1ebf,	// (0x000039a1) bg_popup_sub_pane_cp01_ParamLimits

0x1ebf,	// (0x000039a1) bg_popup_sub_pane_cp01

0x957e,	// (0x0000b060) entry_hyb_candi_pane_ParamLimits

0x957e,	// (0x0000b060) entry_hyb_candi_pane

0x958d,	// (0x0000b06f) grid_hyb_candi_pane_ParamLimits

0x958d,	// (0x0000b06f) grid_hyb_candi_pane

0x95a2,	// (0x0000b084) grid_hyb_phrase_pane_ParamLimits

0x95a2,	// (0x0000b084) grid_hyb_phrase_pane

0x95b1,	// (0x0000b093) cell_hyb_candi_pane_ParamLimits

0x95b1,	// (0x0000b093) cell_hyb_candi_pane

0xee83,	// (0x00010965) cell_hyb_candi_scroll_pane

0x02ee,	// (0x00001dd0) cell_hyb_candi_pane_g1

0x95cd,	// (0x0000b0af) cell_hyb_candi_pane_t1

0x95db,	// (0x0000b0bd) cell_hyb_phrase_pane

0x02ee,	// (0x00001dd0) cell_hyb_phrase_pane_g1

0x95e4,	// (0x0000b0c6) cell_hyb_phrase_pane_t1

0x95f2,	// (0x0000b0d4) entry_hyb_candi_pane_t1

0x0bce,	// (0x000026b0) input_focus_pane_cp06

0x9600,	// (0x0000b0e2) cell_hyb_candi_scroll_pane_g1

0x9608,	// (0x0000b0ea) cell_hyb_candi_scroll_pane_g1_aid

0x9610,	// (0x0000b0f2) cell_hyb_candi_scroll_pane_g2

0x9618,	// (0x0000b0fa) cell_hyb_candi_scroll_pane_g2_aid

0x9620,	// (0x0000b102) cell_hyb_candi_scroll_pane_g3

0x9628,	// (0x0000b10a) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

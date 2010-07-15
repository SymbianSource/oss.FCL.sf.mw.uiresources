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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00000000 };

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
0xa9e7,	// (0x0000a9e7) Screen

0xa9f1,	// (0x0000a9f1) application_window_ParamLimits

0xa9f1,	// (0x0000a9f1) application_window

0x002a,	// (0x0000002a) screen_g1

0xaa1f,	// (0x0000aa1f) area_bottom_pane_ParamLimits

0xaa1f,	// (0x0000aa1f) area_bottom_pane

0x011d,	// (0x0000011d) area_top_pane_ParamLimits

0x011d,	// (0x0000011d) area_top_pane

0x0195,	// (0x00000195) main_pane_ParamLimits

0x0195,	// (0x00000195) main_pane

0x024e,	// (0x0000024e) misc_graphics

0xc002,	// (0x0000c002) battery_pane_ParamLimits

0xc002,	// (0x0000c002) battery_pane

0x3c02,	// (0x00003c02) bg_status_flat_pane_g8

0x3c0a,	// (0x00003c0a) bg_status_flat_pane_g9

0x2e63,	// (0x00002e63) context_pane_ParamLimits

0x2e63,	// (0x00002e63) context_pane

0xc15c,	// (0x0000c15c) navi_pane_ParamLimits

0xc15c,	// (0x0000c15c) navi_pane

0xc1d1,	// (0x0000c1d1) signal_pane_ParamLimits

0xc1d1,	// (0x0000c1d1) signal_pane

0x0008,

0xa35c,	// (0x0000a35c) bg_status_flat_pane_g

0xc25d,	// (0x0000c25d) status_pane_g1_ParamLimits

0xc25d,	// (0x0000c25d) status_pane_g1

0xc269,	// (0x0000c269) status_pane_g2_ParamLimits

0xc269,	// (0x0000c269) status_pane_g2

0x3078,	// (0x00003078) status_pane_g3_ParamLimits

0x3078,	// (0x00003078) status_pane_g3

0x0004,

0xe8cb,	// (0x0000e8cb) status_pane_g_ParamLimits

0xe8cb,	// (0x0000e8cb) status_pane_g

0xc275,	// (0x0000c275) title_pane_ParamLimits

0xc275,	// (0x0000c275) title_pane

0xc2d0,	// (0x0000c2d0) uni_indicator_pane_ParamLimits

0xc2d0,	// (0x0000c2d0) uni_indicator_pane

0x2830,	// (0x00002830) bg_list_pane_ParamLimits

0x2830,	// (0x00002830) bg_list_pane

0xb9c6,	// (0x0000b9c6) find_pane

0xb9ce,	// (0x0000b9ce) listscroll_app_pane_ParamLimits

0xb9ce,	// (0x0000b9ce) listscroll_app_pane

0x2864,	// (0x00002864) listscroll_form_pane

0xb9de,	// (0x0000b9de) listscroll_gen_pane_ParamLimits

0xb9de,	// (0x0000b9de) listscroll_gen_pane

0x2881,	// (0x00002881) listscroll_set_pane

0xb9f3,	// (0x0000b9f3) main_idle_act_pane

0x232f,	// (0x0000232f) main_idle_trad_pane

0x232f,	// (0x0000232f) main_list_empty_pane

0x289b,	// (0x0000289b) main_midp_pane

0x28a7,	// (0x000028a7) main_pane_g1_ParamLimits

0x28a7,	// (0x000028a7) main_pane_g1

0xba06,	// (0x0000ba06) popup_ai_message_window_ParamLimits

0xba06,	// (0x0000ba06) popup_ai_message_window

0xba8a,	// (0x0000ba8a) popup_fep_china_uni_window_ParamLimits

0xba8a,	// (0x0000ba8a) popup_fep_china_uni_window

0x2991,	// (0x00002991) popup_fep_japan_candidate_window_ParamLimits

0x2991,	// (0x00002991) popup_fep_japan_candidate_window

0x29af,	// (0x000029af) popup_fep_japan_predictive_window_ParamLimits

0x29af,	// (0x000029af) popup_fep_japan_predictive_window

0xbac8,	// (0x0000bac8) popup_find_window

0xbae1,	// (0x0000bae1) popup_grid_graphic_window_ParamLimits

0xbae1,	// (0x0000bae1) popup_grid_graphic_window

0x2a06,	// (0x00002a06) popup_large_graphic_colour_window

0xbb5d,	// (0x0000bb5d) popup_menu_window_ParamLimits

0xbb5d,	// (0x0000bb5d) popup_menu_window

0xbcbb,	// (0x0000bcbb) popup_note_image_window

0xbc83,	// (0x0000bc83) popup_note_wait_window_ParamLimits

0xbc83,	// (0x0000bc83) popup_note_wait_window

0xbcd1,	// (0x0000bcd1) popup_note_window_ParamLimits

0xbcd1,	// (0x0000bcd1) popup_note_window

0xbd65,	// (0x0000bd65) popup_query_code_window_ParamLimits

0xbd65,	// (0x0000bd65) popup_query_code_window

0x2bc3,	// (0x00002bc3) popup_query_data_code_window_ParamLimits

0x2bc3,	// (0x00002bc3) popup_query_data_code_window

0xbd9d,	// (0x0000bd9d) popup_query_data_window_ParamLimits

0xbd9d,	// (0x0000bd9d) popup_query_data_window

0xbe11,	// (0x0000be11) popup_query_sat_info_window_ParamLimits

0xbe11,	// (0x0000be11) popup_query_sat_info_window

0xbe9e,	// (0x0000be9e) popup_snote_single_graphic_window_ParamLimits

0xbe9e,	// (0x0000be9e) popup_snote_single_graphic_window

0xbe9e,	// (0x0000be9e) popup_snote_single_text_window_ParamLimits

0xbe9e,	// (0x0000be9e) popup_snote_single_text_window

0x2c32,	// (0x00002c32) popup_sub_window_general

0x2d36,	// (0x00002d36) popup_window_general_ParamLimits

0x2d36,	// (0x00002d36) popup_window_general

0x2d49,	// (0x00002d49) power_save_pane

0xb870,	// (0x0000b870) control_pane_g1_ParamLimits

0xb870,	// (0x0000b870) control_pane_g1

0x26b0,	// (0x000026b0) control_pane_g2_ParamLimits

0x26b0,	// (0x000026b0) control_pane_g2

0x26d1,	// (0x000026d1) control_pane_g3_ParamLimits

0x26d1,	// (0x000026d1) control_pane_g3

0x0007,

0xe8b3,	// (0x0000e8b3) control_pane_g_ParamLimits

0xe8b3,	// (0x0000e8b3) control_pane_g

0xb8cc,	// (0x0000b8cc) control_pane_t1_ParamLimits

0xb8cc,	// (0x0000b8cc) control_pane_t1

0xb928,	// (0x0000b928) control_pane_t2_ParamLimits

0xb928,	// (0x0000b928) control_pane_t2

0x0002,

0xe8c4,	// (0x0000e8c4) control_pane_t_ParamLimits

0xe8c4,	// (0x0000e8c4) control_pane_t

0x25b6,	// (0x000025b6) navi_navi_volume_pane_cp1

0x25be,	// (0x000025be) status_small_icon_pane

0x25c6,	// (0x000025c6) status_small_pane_g1_ParamLimits

0x25c6,	// (0x000025c6) status_small_pane_g1

0xb7ef,	// (0x0000b7ef) status_small_pane_g2_ParamLimits

0xb7ef,	// (0x0000b7ef) status_small_pane_g2

0xb7fb,	// (0x0000b7fb) status_small_pane_g3_ParamLimits

0xb7fb,	// (0x0000b7fb) status_small_pane_g3

0xb807,	// (0x0000b807) status_small_pane_g4_ParamLimits

0xb807,	// (0x0000b807) status_small_pane_g4

0xb813,	// (0x0000b813) status_small_pane_g5_ParamLimits

0xb813,	// (0x0000b813) status_small_pane_g5

0x262a,	// (0x0000262a) status_small_pane_g6_ParamLimits

0x262a,	// (0x0000262a) status_small_pane_g6

0x0007,

0xe8a2,	// (0x0000e8a2) status_small_pane_g_ParamLimits

0xe8a2,	// (0x0000e8a2) status_small_pane_g

0xb842,	// (0x0000b842) status_small_pane_t1

0xb85c,	// (0x0000b85c) status_small_wait_pane_ParamLimits

0xb85c,	// (0x0000b85c) status_small_wait_pane

0xb5f7,	// (0x0000b5f7) aid_levels_signal_ParamLimits

0xb5f7,	// (0x0000b5f7) aid_levels_signal

0xb60b,	// (0x0000b60b) signal_pane_g1_ParamLimits

0xb60b,	// (0x0000b60b) signal_pane_g1

0xb625,	// (0x0000b625) signal_pane_g2_ParamLimits

0xb625,	// (0x0000b625) signal_pane_g2

0x0003,

0xe882,	// (0x0000e882) signal_pane_g_ParamLimits

0xe882,	// (0x0000e882) signal_pane_g

0x1c78,	// (0x00001c78) context_pane_g1

0xabb6,	// (0x0000abb6) title_pane_g1

0xabf8,	// (0x0000abf8) title_pane_t1

0x043c,	// (0x0000043c) title_pane_t2

0x0462,	// (0x00000462) title_pane_t3

0x0002,

0xe7b4,	// (0x0000e7b4) title_pane_t

0xc2f6,	// (0x0000c2f6) aid_levels_battery_ParamLimits

0xc2f6,	// (0x0000c2f6) aid_levels_battery

0xc30e,	// (0x0000c30e) battery_pane_g1_ParamLimits

0xc30e,	// (0x0000c30e) battery_pane_g1

0xc329,	// (0x0000c329) battery_pane_g2_ParamLimits

0xc329,	// (0x0000c329) battery_pane_g2

0x0001,

0xe8d6,	// (0x0000e8d6) battery_pane_g_ParamLimits

0xe8d6,	// (0x0000e8d6) battery_pane_g

0xc647,	// (0x0000c647) uni_indicator_pane_g1

0xc65d,	// (0x0000c65d) uni_indicator_pane_g2

0xc673,	// (0x0000c673) uni_indicator_pane_g3

0x0005,

0xe912,	// (0x0000e912) uni_indicator_pane_g

0x1423,	// (0x00001423) navi_icon_pane_ParamLimits

0x1423,	// (0x00001423) navi_icon_pane

0x024e,	// (0x0000024e) navi_midp_pane

0x024e,	// (0x0000024e) navi_navi_pane

0x1423,	// (0x00001423) navi_text_pane_ParamLimits

0x1423,	// (0x00001423) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x095f,	// (0x0000095f) status_small_wait_pane_g2

0x0001,

0xa3ff,	// (0x0000a3ff) status_small_wait_pane_g

0xc5ed,	// (0x0000c5ed) navi_navi_icon_text_pane

0xc5f5,	// (0x0000c5f5) navi_navi_pane_g1_ParamLimits

0xc5f5,	// (0x0000c5f5) navi_navi_pane_g1

0xc607,	// (0x0000c607) navi_navi_pane_g2_ParamLimits

0xc607,	// (0x0000c607) navi_navi_pane_g2

0x0001,

0xe90d,	// (0x0000e90d) navi_navi_pane_g_ParamLimits

0xe90d,	// (0x0000e90d) navi_navi_pane_g

0xc619,	// (0x0000c619) navi_navi_tabs_pane

0xc5ed,	// (0x0000c5ed) navi_navi_text_pane

0xc5ed,	// (0x0000c5ed) navi_navi_volume_pane

0x4344,	// (0x00004344) navi_text_pane_t1

0x4338,	// (0x00004338) navi_icon_pane_g1

0x428c,	// (0x0000428c) navi_navi_text_pane_t1

0x427b,	// (0x0000427b) navi_navi_volume_pane_g1

0xc5e4,	// (0x0000c5e4) volume_small_pane

0xc540,	// (0x0000c540) navi_navi_icon_text_pane_g1

0xc548,	// (0x0000c548) navi_navi_icon_text_pane_t1

0x3c62,	// (0x00003c62) navi_tabs_2_long_pane

0x3c62,	// (0x00003c62) navi_tabs_2_pane

0x3c62,	// (0x00003c62) navi_tabs_3_long_pane

0x3c62,	// (0x00003c62) navi_tabs_3_pane

0x3c62,	// (0x00003c62) navi_tabs_4_pane

0xc520,	// (0x0000c520) tabs_2_active_pane_ParamLimits

0xc520,	// (0x0000c520) tabs_2_active_pane

0xc530,	// (0x0000c530) tabs_2_passive_pane_ParamLimits

0xc530,	// (0x0000c530) tabs_2_passive_pane

0xc4ee,	// (0x0000c4ee) tabs_3_active_pane_ParamLimits

0xc4ee,	// (0x0000c4ee) tabs_3_active_pane

0xc4fe,	// (0x0000c4fe) tabs_3_passive_pane_ParamLimits

0xc4fe,	// (0x0000c4fe) tabs_3_passive_pane

0xc50f,	// (0x0000c50f) tabs_3_passive_pane_cp_ParamLimits

0xc50f,	// (0x0000c50f) tabs_3_passive_pane_cp

0xc4aa,	// (0x0000c4aa) tabs_4_active_pane_ParamLimits

0xc4aa,	// (0x0000c4aa) tabs_4_active_pane

0xc4bb,	// (0x0000c4bb) tabs_4_passive_pane_ParamLimits

0xc4bb,	// (0x0000c4bb) tabs_4_passive_pane

0xc4cc,	// (0x0000c4cc) tabs_4_passive_pane_cp_ParamLimits

0xc4cc,	// (0x0000c4cc) tabs_4_passive_pane_cp

0xc4dd,	// (0x0000c4dd) tabs_4_passive_pane_cp2_ParamLimits

0xc4dd,	// (0x0000c4dd) tabs_4_passive_pane_cp2

0xc48a,	// (0x0000c48a) tabs_2_long_active_pane_ParamLimits

0xc48a,	// (0x0000c48a) tabs_2_long_active_pane

0xc49a,	// (0x0000c49a) tabs_2_long_passive_pane_ParamLimits

0xc49a,	// (0x0000c49a) tabs_2_long_passive_pane

0xc453,	// (0x0000c453) tabs_3_long_active_pane_ParamLimits

0xc453,	// (0x0000c453) tabs_3_long_active_pane

0xc466,	// (0x0000c466) tabs_3_long_passive_pane_ParamLimits

0xc466,	// (0x0000c466) tabs_3_long_passive_pane

0xc477,	// (0x0000c477) tabs_3_long_passive_pane_cp_ParamLimits

0xc477,	// (0x0000c477) tabs_3_long_passive_pane_cp

0x401f,	// (0x0000401f) volume_small_pane_g1

0x4028,	// (0x00004028) volume_small_pane_g2

0x4031,	// (0x00004031) volume_small_pane_g3

0x403a,	// (0x0000403a) volume_small_pane_g4

0x4043,	// (0x00004043) volume_small_pane_g5

0x404c,	// (0x0000404c) volume_small_pane_g6

0x4055,	// (0x00004055) volume_small_pane_g7

0x405e,	// (0x0000405e) volume_small_pane_g8

0x4067,	// (0x00004067) volume_small_pane_g9

0x4070,	// (0x00004070) volume_small_pane_g10

0x0009,

0xa399,	// (0x0000a399) volume_small_pane_g

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_active_pane_g1

0xac85,	// (0x0000ac85) tabs_3_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_passive_pane_g1

0xac85,	// (0x0000ac85) tabs_3_passive_pane_t1

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3

0x4c2a,	// (0x00004c2a) tabs_4_active_pane_g1

0xac9b,	// (0x0000ac9b) tabs_4_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3

0x4c2a,	// (0x00004c2a) tabs_4_1_passive_pane_g1

0xac9b,	// (0x0000ac9b) tabs_4_1_passive_pane_t1

0x289b,	// (0x0000289b) list_highlight_pane_cp2

0xc740,	// (0x0000c740) list_set_pane_ParamLimits

0xc740,	// (0x0000c740) list_set_pane

0xc7ce,	// (0x0000c7ce) main_pane_set_t1_ParamLimits

0xc7ce,	// (0x0000c7ce) main_pane_set_t1

0xc7ee,	// (0x0000c7ee) main_pane_set_t2_ParamLimits

0xc7ee,	// (0x0000c7ee) main_pane_set_t2

0xc802,	// (0x0000c802) main_pane_set_t3_ParamLimits

0xc802,	// (0x0000c802) main_pane_set_t3

0xc814,	// (0x0000c814) main_pane_set_t4_ParamLimits

0xc814,	// (0x0000c814) main_pane_set_t4

0x0003,

0xe95b,	// (0x0000e95b) main_pane_set_t_ParamLimits

0xe95b,	// (0x0000e95b) main_pane_set_t

0xc826,	// (0x0000c826) setting_code_pane

0xc82e,	// (0x0000c82e) setting_slider_graphic_pane

0xc82e,	// (0x0000c82e) setting_slider_pane

0xc82e,	// (0x0000c82e) setting_text_pane

0xc82e,	// (0x0000c82e) setting_volume_pane

0xacb1,	// (0x0000acb1) volume_set_pane

0x0474,	// (0x00000474) bg_set_opt_pane_cp

0x04be,	// (0x000004be) setting_slider_pane_t1

0xacb9,	// (0x0000acb9) setting_slider_pane_t2

0xacd2,	// (0x0000acd2) setting_slider_pane_t3

0x0002,

0xe7bb,	// (0x0000e7bb) setting_slider_pane_t

0x0504,	// (0x00000504) slider_set_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1

0xace9,	// (0x0000ace9) setting_slider_graphic_pane_t1

0xacf8,	// (0x0000acf8) setting_slider_graphic_pane_t2

0x0001,

0xe7c2,	// (0x0000e7c2) setting_slider_graphic_pane_t

0xad07,	// (0x0000ad07) slider_set_pane_cp

0x024e,	// (0x0000024e) input_focus_pane_cp1

0x4915,	// (0x00004915) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x024e,	// (0x0000024e) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x0549,	// (0x00000549) setting_code_pane_t1

0x9b84,	// (0x00009b84) set_text_pane_t1_ParamLimits

0x9b84,	// (0x00009b84) set_text_pane_t1

0x1331,	// (0x00001331) set_opt_bg_pane_g1

0x1339,	// (0x00001339) set_opt_bg_pane_g2

0xc700,	// (0x0000c700) set_opt_bg_pane_g3

0x1349,	// (0x00001349) set_opt_bg_pane_g4

0x1351,	// (0x00001351) set_opt_bg_pane_g5

0x1359,	// (0x00001359) set_opt_bg_pane_g6

0xc708,	// (0x0000c708) set_opt_bg_pane_g7

0xc710,	// (0x0000c710) set_opt_bg_pane_g8

0xc718,	// (0x0000c718) set_opt_bg_pane_g9

0x0008,

0xe948,	// (0x0000e948) set_opt_bg_pane_g

0x4884,	// (0x00004884) slider_set_pane_g1

0x4891,	// (0x00004891) slider_set_pane_g2

0x0006,

0xe939,	// (0x0000e939) slider_set_pane_g

0xc688,	// (0x0000c688) volume_set_pane_g1

0xc690,	// (0x0000c690) volume_set_pane_g2

0xc698,	// (0x0000c698) volume_set_pane_g3

0xc6a0,	// (0x0000c6a0) volume_set_pane_g4

0xc6a8,	// (0x0000c6a8) volume_set_pane_g5

0xc6b0,	// (0x0000c6b0) volume_set_pane_g6

0xc6b8,	// (0x0000c6b8) volume_set_pane_g7

0xc6c0,	// (0x0000c6c0) volume_set_pane_g8

0xc6c8,	// (0x0000c6c8) volume_set_pane_g9

0xc6d0,	// (0x0000c6d0) volume_set_pane_g10

0x0009,

0xe91f,	// (0x0000e91f) volume_set_pane_g

0xad0f,	// (0x0000ad0f) indicator_pane_ParamLimits

0xad0f,	// (0x0000ad0f) indicator_pane

0xad37,	// (0x0000ad37) main_idle_pane_g2_ParamLimits

0xad37,	// (0x0000ad37) main_idle_pane_g2

0xad67,	// (0x0000ad67) main_pane_idle_g1_ParamLimits

0xad67,	// (0x0000ad67) main_pane_idle_g1

0x05af,	// (0x000005af) popup_clock_digital_analogue_window_ParamLimits

0x05af,	// (0x000005af) popup_clock_digital_analogue_window

0xad8c,	// (0x0000ad8c) soft_indicator_pane_ParamLimits

0xad8c,	// (0x0000ad8c) soft_indicator_pane

0xada6,	// (0x0000ada6) wallpaper_pane_ParamLimits

0xada6,	// (0x0000ada6) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xadb8,	// (0x0000adb8) indicator_pane_g1_ParamLimits

0xadb8,	// (0x0000adb8) indicator_pane_g1

0x4dc2,	// (0x00004dc2) navi_navi_icon_text_pane_srt_g1

0x0601,	// (0x00000601) soft_indicator_pane_t1

0x061b,	// (0x0000061b) aid_ps_area_pane

0xadd1,	// (0x0000add1) aid_ps_clock_pane

0x0638,	// (0x00000638) aid_ps_indicator_pane

0x0644,	// (0x00000644) indicator_ps_pane_ParamLimits

0x0644,	// (0x00000644) indicator_ps_pane

0x0653,	// (0x00000653) power_save_pane_g1_ParamLimits

0x0653,	// (0x00000653) power_save_pane_g1

0x065f,	// (0x0000065f) power_save_pane_g2_ParamLimits

0x065f,	// (0x0000065f) power_save_pane_g2

0x0034,	// (0x00000034) aid_navinavi_width_pane

0x061b,	// (0x0000061b) aid_ps_area_pane_ParamLimits

0x0001,

0xa05e,	// (0x0000a05e) power_save_pane_g_ParamLimits

0xa05e,	// (0x0000a05e) power_save_pane_g

0x066d,	// (0x0000066d) power_save_pane_t1_ParamLimits

0x066d,	// (0x0000066d) power_save_pane_t1

0xadd1,	// (0x0000add1) aid_ps_clock_pane_ParamLimits

0x0638,	// (0x00000638) aid_ps_indicator_pane_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4

0x0001,

0xa063,	// (0x0000a063) power_save_pane_t_ParamLimits

0xa063,	// (0x0000a063) power_save_pane_t

0x06a9,	// (0x000006a9) power_save_t3_ParamLimits

0x06a9,	// (0x000006a9) power_save_t3

0x0694,	// (0x00000694) power_save_t2_ParamLimits

0x0694,	// (0x00000694) power_save_t2

0x06be,	// (0x000006be) indicator_ps_pane_g1

0xaddd,	// (0x0000addd) ai_gene_pane_ParamLimits

0xaddd,	// (0x0000addd) ai_gene_pane

0xadf4,	// (0x0000adf4) ai_links_pane_ParamLimits

0xadf4,	// (0x0000adf4) ai_links_pane

0xae06,	// (0x0000ae06) indicator_pane_cp1_ParamLimits

0xae06,	// (0x0000ae06) indicator_pane_cp1

0xae15,	// (0x0000ae15) main_pane_idle_g1_cp_ParamLimits

0xae15,	// (0x0000ae15) main_pane_idle_g1_cp

0x06f7,	// (0x000006f7) popup_ai_links_title_window

0xae2d,	// (0x0000ae2d) soft_indicator_pane_cp1_ParamLimits

0xae2d,	// (0x0000ae2d) soft_indicator_pane_cp1

0x4623,	// (0x00004623) ai_links_pane_g1

0x462c,	// (0x0000462c) grid_ai_links_pane

0xc63e,	// (0x0000c63e) ai_gene_pane_1

0x4611,	// (0x00004611) ai_gene_pane_2

0x461a,	// (0x0000461a) list_highlight_pane_cp4

0xc622,	// (0x0000c622) cell_ai_link_pane_ParamLimits

0xc622,	// (0x0000c622) cell_ai_link_pane

0x45e4,	// (0x000045e4) cell_ai_link_pane_g1

0x095f,	// (0x0000095f) cell_ai_link_pane_g2

0x0001,

0xa3fa,	// (0x0000a3fa) cell_ai_link_pane_g

0x024e,	// (0x0000024e) grid_highlight_cp2

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp1

0x071a,	// (0x0000071a) popup_ai_links_title_window_t1

0x4536,	// (0x00004536) ai_gene_pane_1_g1_ParamLimits

0x4536,	// (0x00004536) ai_gene_pane_1_g1

0x4542,	// (0x00004542) ai_gene_pane_1_g2_ParamLimits

0x4542,	// (0x00004542) ai_gene_pane_1_g2

0x0001,

0xa3f0,	// (0x0000a3f0) ai_gene_pane_1_g_ParamLimits

0xa3f0,	// (0x0000a3f0) ai_gene_pane_1_g

0x454f,	// (0x0000454f) ai_gene_pane_1_t1_ParamLimits

0x454f,	// (0x0000454f) ai_gene_pane_1_t1

0x4583,	// (0x00004583) grid_ai_soft_ind_pane

0x4521,	// (0x00004521) ai_gene_pane_2_t1_ParamLimits

0x4521,	// (0x00004521) ai_gene_pane_2_t1

0xae41,	// (0x0000ae41) main_pane_empty_t1_ParamLimits

0xae41,	// (0x0000ae41) main_pane_empty_t1

0xae5e,	// (0x0000ae5e) main_pane_empty_t2_ParamLimits

0xae5e,	// (0x0000ae5e) main_pane_empty_t2

0xae76,	// (0x0000ae76) main_pane_empty_t3_ParamLimits

0xae76,	// (0x0000ae76) main_pane_empty_t3

0xae89,	// (0x0000ae89) main_pane_empty_t4_ParamLimits

0xae89,	// (0x0000ae89) main_pane_empty_t4

0xae9c,	// (0x0000ae9c) main_pane_empty_t5_ParamLimits

0xae9c,	// (0x0000ae9c) main_pane_empty_t5

0x0004,

0xe7c7,	// (0x0000e7c7) main_pane_empty_t_ParamLimits

0xe7c7,	// (0x0000e7c7) main_pane_empty_t

0x1423,	// (0x00001423) bg_popup_window_pane_ParamLimits

0x1423,	// (0x00001423) bg_popup_window_pane

0x429b,	// (0x0000429b) find_popup_pane_cp2_ParamLimits

0x429b,	// (0x0000429b) find_popup_pane_cp2

0x42a7,	// (0x000042a7) heading_pane_ParamLimits

0x42a7,	// (0x000042a7) heading_pane

0x024e,	// (0x0000024e) bg_popup_sub_pane

0xc565,	// (0x0000c565) bg_popup_window_pane_g1_ParamLimits

0xc565,	// (0x0000c565) bg_popup_window_pane_g1

0xc574,	// (0x0000c574) bg_popup_window_pane_g2_ParamLimits

0xc574,	// (0x0000c574) bg_popup_window_pane_g2

0xc580,	// (0x0000c580) bg_popup_window_pane_g3_ParamLimits

0xc580,	// (0x0000c580) bg_popup_window_pane_g3

0xc58c,	// (0x0000c58c) bg_popup_window_pane_g4_ParamLimits

0xc58c,	// (0x0000c58c) bg_popup_window_pane_g4

0xc59b,	// (0x0000c59b) bg_popup_window_pane_g5_ParamLimits

0xc59b,	// (0x0000c59b) bg_popup_window_pane_g5

0xc5ab,	// (0x0000c5ab) bg_popup_window_pane_g6_ParamLimits

0xc5ab,	// (0x0000c5ab) bg_popup_window_pane_g6

0xc5b7,	// (0x0000c5b7) bg_popup_window_pane_g7_ParamLimits

0xc5b7,	// (0x0000c5b7) bg_popup_window_pane_g7

0xc5c6,	// (0x0000c5c6) bg_popup_window_pane_g8_ParamLimits

0xc5c6,	// (0x0000c5c6) bg_popup_window_pane_g8

0xc5d5,	// (0x0000c5d5) bg_popup_window_pane_g9_ParamLimits

0xc5d5,	// (0x0000c5d5) bg_popup_window_pane_g9

0x426f,	// (0x0000426f) bg_popup_window_pane_g10_ParamLimits

0x426f,	// (0x0000426f) bg_popup_window_pane_g10

0x0009,

0xe8f8,	// (0x0000e8f8) bg_popup_window_pane_g_ParamLimits

0xe8f8,	// (0x0000e8f8) bg_popup_window_pane_g

0x4198,	// (0x00004198) bg_popup_heading_pane_ParamLimits

0x4198,	// (0x00004198) bg_popup_heading_pane

0x4d29,	// (0x00004d29) tabs_4_passive_pane_cp_srt_ParamLimits

0x4d29,	// (0x00004d29) tabs_4_passive_pane_cp_srt

0x4d3b,	// (0x00004d3b) tabs_4_passive_pane_srt_ParamLimits

0x41ac,	// (0x000041ac) heading_pane_g2

0x4d3b,	// (0x00004d3b) tabs_4_passive_pane_srt

0x33f3,	// (0x000033f3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x33f3,	// (0x000033f3) bg_passive_tab_pane_cp3_srt

0x41b4,	// (0x000041b4) heading_pane_t1_ParamLimits

0x41b4,	// (0x000041b4) heading_pane_t1

0x41cb,	// (0x000041cb) heading_pane_t2_ParamLimits

0x41cb,	// (0x000041cb) heading_pane_t2

0x0001,

0xa3b3,	// (0x0000a3b3) heading_pane_t_ParamLimits

0xa3b3,	// (0x0000a3b3) heading_pane_t

0x3bca,	// (0x00003bca) bg_popup_heading_pane_g1

0x3c73,	// (0x00003c73) bg_popup_heading_pane_g2

0x3c7b,	// (0x00003c7b) bg_popup_heading_pane_g3

0x3c83,	// (0x00003c83) bg_popup_heading_pane_g4

0x3c8b,	// (0x00003c8b) bg_popup_heading_pane_g5

0x3c93,	// (0x00003c93) bg_popup_heading_pane_g6

0x3c9b,	// (0x00003c9b) bg_popup_heading_pane_g7

0x3ca3,	// (0x00003ca3) bg_popup_heading_pane_g8

0x3cab,	// (0x00003cab) bg_popup_heading_pane_g9

0x0008,

0xa36f,	// (0x0000a36f) bg_popup_heading_pane_g

0x3269,	// (0x00003269) bg_popup_sub_pane_g1

0x3271,	// (0x00003271) bg_popup_sub_pane_g2

0x3279,	// (0x00003279) bg_popup_sub_pane_g3

0x3281,	// (0x00003281) bg_popup_sub_pane_g4

0x3289,	// (0x00003289) bg_popup_sub_pane_g5

0x3291,	// (0x00003291) bg_popup_sub_pane_g6

0x3299,	// (0x00003299) bg_popup_sub_pane_g7

0x32a1,	// (0x000032a1) bg_popup_sub_pane_g8

0x32a9,	// (0x000032a9) bg_popup_sub_pane_g9

0x0008,

0xa349,	// (0x0000a349) bg_popup_sub_pane_g

0x0797,	// (0x00000797) bg_popup_window_pane_cp5_ParamLimits

0x0797,	// (0x00000797) bg_popup_window_pane_cp5

0x07b3,	// (0x000007b3) popup_note_window_g1_ParamLimits

0x07b3,	// (0x000007b3) popup_note_window_g1

0x07bf,	// (0x000007bf) popup_note_window_t1_ParamLimits

0x07bf,	// (0x000007bf) popup_note_window_t1

0x07d5,	// (0x000007d5) popup_note_window_t2_ParamLimits

0x07d5,	// (0x000007d5) popup_note_window_t2

0x07eb,	// (0x000007eb) popup_note_window_t3_ParamLimits

0x07eb,	// (0x000007eb) popup_note_window_t3

0x0801,	// (0x00000801) popup_note_window_t4_ParamLimits

0x0801,	// (0x00000801) popup_note_window_t4

0x0829,	// (0x00000829) popup_note_window_t5_ParamLimits

0x0829,	// (0x00000829) popup_note_window_t5

0x0004,

0xa073,	// (0x0000a073) popup_note_window_t_ParamLimits

0xa073,	// (0x0000a073) popup_note_window_t

0x0873,	// (0x00000873) bg_popup_window_pane_cp6_ParamLimits

0x0873,	// (0x00000873) bg_popup_window_pane_cp6

0x3b46,	// (0x00003b46) popup_note_image_window_g1_ParamLimits

0x3b46,	// (0x00003b46) popup_note_image_window_g1

0x3b52,	// (0x00003b52) popup_note_image_window_g2_ParamLimits

0x3b52,	// (0x00003b52) popup_note_image_window_g2

0x0001,

0xa33d,	// (0x0000a33d) popup_note_image_window_g_ParamLimits

0xa33d,	// (0x0000a33d) popup_note_image_window_g

0x3b6b,	// (0x00003b6b) popup_note_image_window_t1_ParamLimits

0x3b6b,	// (0x00003b6b) popup_note_image_window_t1

0x3b84,	// (0x00003b84) popup_note_image_window_t2_ParamLimits

0x3b84,	// (0x00003b84) popup_note_image_window_t2

0x3b9d,	// (0x00003b9d) popup_note_image_window_t3_ParamLimits

0x3b9d,	// (0x00003b9d) popup_note_image_window_t3

0x0002,

0xa342,	// (0x0000a342) popup_note_image_window_t_ParamLimits

0xa342,	// (0x0000a342) popup_note_image_window_t

0x3a15,	// (0x00003a15) bg_popup_window_pane_cp7_ParamLimits

0x3a15,	// (0x00003a15) bg_popup_window_pane_cp7

0x3a45,	// (0x00003a45) popup_note_wait_window_g1_ParamLimits

0x3a45,	// (0x00003a45) popup_note_wait_window_g1

0x3a51,	// (0x00003a51) popup_note_wait_window_g2_ParamLimits

0x3a51,	// (0x00003a51) popup_note_wait_window_g2

0x0002,

0xa32b,	// (0x0000a32b) popup_note_wait_window_g_ParamLimits

0xa32b,	// (0x0000a32b) popup_note_wait_window_g

0x3a69,	// (0x00003a69) popup_note_wait_window_t1_ParamLimits

0x3a69,	// (0x00003a69) popup_note_wait_window_t1

0x3a90,	// (0x00003a90) popup_note_wait_window_t2_ParamLimits

0x3a90,	// (0x00003a90) popup_note_wait_window_t2

0x3aad,	// (0x00003aad) popup_note_wait_window_t3_ParamLimits

0x3aad,	// (0x00003aad) popup_note_wait_window_t3

0x3ac0,	// (0x00003ac0) popup_note_wait_window_t4_ParamLimits

0x3ac0,	// (0x00003ac0) popup_note_wait_window_t4

0x0004,

0xa332,	// (0x0000a332) popup_note_wait_window_t_ParamLimits

0xa332,	// (0x0000a332) popup_note_wait_window_t

0x3ae5,	// (0x00003ae5) wait_bar_pane_ParamLimits

0x3ae5,	// (0x00003ae5) wait_bar_pane

0x024e,	// (0x0000024e) wait_anim_pane

0x024e,	// (0x0000024e) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0xa1f2,	// (0x0000a1f2) wait_anim_pane_g

0x39c5,	// (0x000039c5) wait_border_pane_g1

0x39ce,	// (0x000039ce) wait_border_pane_g2

0x39d7,	// (0x000039d7) wait_border_pane_g3

0x0002,

0xa324,	// (0x0000a324) wait_border_pane_g

0x3835,	// (0x00003835) bg_popup_window_pane_cp16_ParamLimits

0x3835,	// (0x00003835) bg_popup_window_pane_cp16

0x3935,	// (0x00003935) indicator_popup_pane_cp4_ParamLimits

0x3935,	// (0x00003935) indicator_popup_pane_cp4

0x3949,	// (0x00003949) popup_query_data_window_t1_ParamLimits

0x3949,	// (0x00003949) popup_query_data_window_t1

0x395b,	// (0x0000395b) popup_query_data_window_t2_ParamLimits

0x395b,	// (0x0000395b) popup_query_data_window_t2

0x3974,	// (0x00003974) popup_query_data_window_t3_ParamLimits

0x3974,	// (0x00003974) popup_query_data_window_t3

0x0002,

0xa31d,	// (0x0000a31d) popup_query_data_window_t_ParamLimits

0xa31d,	// (0x0000a31d) popup_query_data_window_t

0x398e,	// (0x0000398e) query_popup_data_pane_ParamLimits

0x398e,	// (0x0000398e) query_popup_data_pane

0x39a2,	// (0x000039a2) query_popup_data_pane_cp1_ParamLimits

0x39a2,	// (0x000039a2) query_popup_data_pane_cp1

0x3835,	// (0x00003835) bg_popup_window_pane_cp10_ParamLimits

0x3835,	// (0x00003835) bg_popup_window_pane_cp10

0x3867,	// (0x00003867) indicator_popup_pane_ParamLimits

0x3867,	// (0x00003867) indicator_popup_pane

0x3889,	// (0x00003889) popup_query_code_window_t1_ParamLimits

0x3889,	// (0x00003889) popup_query_code_window_t1

0x38a3,	// (0x000038a3) popup_query_code_window_t2_ParamLimits

0x38a3,	// (0x000038a3) popup_query_code_window_t2

0x38ec,	// (0x000038ec) popup_query_code_window_t3_ParamLimits

0x38ec,	// (0x000038ec) popup_query_code_window_t3

0x0002,

0xa316,	// (0x0000a316) popup_query_code_window_t_ParamLimits

0xa316,	// (0x0000a316) popup_query_code_window_t

0x391b,	// (0x0000391b) query_popup_pane_ParamLimits

0x391b,	// (0x0000391b) query_popup_pane

0x0873,	// (0x00000873) bg_popup_window_pane_cp15_ParamLimits

0x0873,	// (0x00000873) bg_popup_window_pane_cp15

0x0891,	// (0x00000891) indicator_popup_pane_cp1_ParamLimits

0x0891,	// (0x00000891) indicator_popup_pane_cp1

0x08a4,	// (0x000008a4) indicator_popup_pane_cp2_ParamLimits

0x08a4,	// (0x000008a4) indicator_popup_pane_cp2

0x08b7,	// (0x000008b7) popup_query_data_code_window_g1_ParamLimits

0x08b7,	// (0x000008b7) popup_query_data_code_window_g1

0x08ca,	// (0x000008ca) popup_query_data_code_window_t1_ParamLimits

0x08ca,	// (0x000008ca) popup_query_data_code_window_t1

0x08dc,	// (0x000008dc) popup_query_data_code_window_t2_ParamLimits

0x08dc,	// (0x000008dc) popup_query_data_code_window_t2

0x08ee,	// (0x000008ee) popup_query_data_code_window_t3_ParamLimits

0x08ee,	// (0x000008ee) popup_query_data_code_window_t3

0x0904,	// (0x00000904) popup_query_data_code_window_t4_ParamLimits

0x0904,	// (0x00000904) popup_query_data_code_window_t4

0x0003,

0xa07e,	// (0x0000a07e) popup_query_data_code_window_t_ParamLimits

0xa07e,	// (0x0000a07e) popup_query_data_code_window_t

0x21b0,	// (0x000021b0) list_single_midp_graphic_pane_g3

0x091c,	// (0x0000091c) query_popup_data_pane_cp2_ParamLimits

0x092f,	// (0x0000092f) query_popup_pane_cp2_ParamLimits

0x092f,	// (0x0000092f) query_popup_pane_cp2

0x024e,	// (0x0000024e) bg_popup_window_pane_cp11

0x3821,	// (0x00003821) heading_pane_cp5

0x0a13,	// (0x00000a13) listscroll_popup_info_pane

0x024e,	// (0x0000024e) input_focus_pane_cp3

0x0942,	// (0x00000942) query_popup_pane_t1

0x0950,	// (0x00000950) list_popup_info_pane_ParamLimits

0x0950,	// (0x00000950) list_popup_info_pane

0x095f,	// (0x0000095f) listscroll_popup_info_pane_g1

0x0967,	// (0x00000967) scroll_pane_cp7

0x096f,	// (0x0000096f) popup_info_list_pane_t1_ParamLimits

0x096f,	// (0x0000096f) popup_info_list_pane_t1

0x0989,	// (0x00000989) popup_info_list_pane_t2_ParamLimits

0x0989,	// (0x00000989) popup_info_list_pane_t2

0x0001,

0xa087,	// (0x0000a087) popup_info_list_pane_t_ParamLimits

0xa087,	// (0x0000a087) popup_info_list_pane_t

0x024e,	// (0x0000024e) bg_popup_window_pane_cp12

0x4df9,	// (0x00004df9) find_popup_pane

0x0474,	// (0x00000474) bg_popup_window_pane_cp3

0x09a3,	// (0x000009a3) heading_pane_cp3

0x09af,	// (0x000009af) listscroll_popup_graphic_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp4

0xaeff,	// (0x0000aeff) heading_pane_cp4

0x0a13,	// (0x00000a13) listscroll_popup_colour_pane

0x0a1b,	// (0x00000a1b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a1b,	// (0x00000a1b) cell_large_graphic_colour_none_popup_pane

0xaf07,	// (0x0000af07) grid_large_graphic_colour_popup_pane_ParamLimits

0xaf07,	// (0x0000af07) grid_large_graphic_colour_popup_pane

0xaf23,	// (0x0000af23) listscroll_popup_colour_pane_g1_ParamLimits

0xaf23,	// (0x0000af23) listscroll_popup_colour_pane_g1

0xaf3a,	// (0x0000af3a) listscroll_popup_colour_pane_g2_ParamLimits

0xaf3a,	// (0x0000af3a) listscroll_popup_colour_pane_g2

0x0a72,	// (0x00000a72) listscroll_popup_colour_pane_g3_ParamLimits

0x0a72,	// (0x00000a72) listscroll_popup_colour_pane_g3

0xaf4e,	// (0x0000af4e) listscroll_popup_colour_pane_g4_ParamLimits

0xaf4e,	// (0x0000af4e) listscroll_popup_colour_pane_g4

0x0003,

0xe7d2,	// (0x0000e7d2) listscroll_popup_colour_pane_g_ParamLimits

0xe7d2,	// (0x0000e7d2) listscroll_popup_colour_pane_g

0x0a91,	// (0x00000a91) scroll_pane_cp6_ParamLimits

0x0a91,	// (0x00000a91) scroll_pane_cp6

0xaf5d,	// (0x0000af5d) cell_large_graphic_colour_popup_pane_ParamLimits

0xaf5d,	// (0x0000af5d) cell_large_graphic_colour_popup_pane

0x0ac2,	// (0x00000ac2) cell_large_graphic_colour_none_popup_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp5

0x0ad1,	// (0x00000ad1) cell_large_graphic_colour_popup_pane_g1

0x0ad9,	// (0x00000ad9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa095,	// (0x0000a095) cell_large_graphic_colour_popup_pane_g

0x0ae1,	// (0x00000ae1) cell_large_graphic_colour_popup_pane_g2_copy1

0x0aea,	// (0x00000aea) grid_highlight_pane_cp4

0x0af2,	// (0x00000af2) bg_popup_window_pane_cp8_ParamLimits

0x0af2,	// (0x00000af2) bg_popup_window_pane_cp8

0x0b0d,	// (0x00000b0d) popup_snote_single_text_window_g1_ParamLimits

0x0b0d,	// (0x00000b0d) popup_snote_single_text_window_g1

0x0b1f,	// (0x00000b1f) popup_snote_single_text_window_t1_ParamLimits

0x0b1f,	// (0x00000b1f) popup_snote_single_text_window_t1

0x0b32,	// (0x00000b32) popup_snote_single_text_window_t2_ParamLimits

0x0b32,	// (0x00000b32) popup_snote_single_text_window_t2

0x0b45,	// (0x00000b45) popup_snote_single_text_window_t3_ParamLimits

0x0b45,	// (0x00000b45) popup_snote_single_text_window_t3

0x0b7e,	// (0x00000b7e) popup_snote_single_text_window_t4_ParamLimits

0x0b7e,	// (0x00000b7e) popup_snote_single_text_window_t4

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t5_ParamLimits

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t5

0x0004,

0xa09a,	// (0x0000a09a) popup_snote_single_text_window_t_ParamLimits

0xa09a,	// (0x0000a09a) popup_snote_single_text_window_t

0x0be1,	// (0x00000be1) bg_popup_window_pane_cp9_ParamLimits

0x0be1,	// (0x00000be1) bg_popup_window_pane_cp9

0x0b0d,	// (0x00000b0d) popup_snote_single_graphic_window_g1_ParamLimits

0x0b0d,	// (0x00000b0d) popup_snote_single_graphic_window_g1

0x0bef,	// (0x00000bef) popup_snote_single_graphic_window_g2_ParamLimits

0x0bef,	// (0x00000bef) popup_snote_single_graphic_window_g2

0x0001,

0xa0a5,	// (0x0000a0a5) popup_snote_single_graphic_window_g_ParamLimits

0xa0a5,	// (0x0000a0a5) popup_snote_single_graphic_window_g

0x0bfb,	// (0x00000bfb) popup_snote_single_graphic_window_t1_ParamLimits

0x0bfb,	// (0x00000bfb) popup_snote_single_graphic_window_t1

0x0c0e,	// (0x00000c0e) popup_snote_single_graphic_window_t2_ParamLimits

0x0c0e,	// (0x00000c0e) popup_snote_single_graphic_window_t2

0x0b45,	// (0x00000b45) popup_snote_single_graphic_window_t3_ParamLimits

0x0b45,	// (0x00000b45) popup_snote_single_graphic_window_t3

0x0b7e,	// (0x00000b7e) popup_snote_single_graphic_window_t4_ParamLimits

0x0b7e,	// (0x00000b7e) popup_snote_single_graphic_window_t4

0x0bb2,	// (0x00000bb2) popup_snote_single_graphic_window_t5_ParamLimits

0x0bb2,	// (0x00000bb2) popup_snote_single_graphic_window_t5

0x0004,

0xa0aa,	// (0x0000a0aa) popup_snote_single_graphic_window_t_ParamLimits

0xa0aa,	// (0x0000a0aa) popup_snote_single_graphic_window_t

0xc956,	// (0x0000c956) grid_graphic_popup_pane_ParamLimits

0xc956,	// (0x0000c956) grid_graphic_popup_pane

0xc979,	// (0x0000c979) listscroll_popup_graphic_pane_g1_ParamLimits

0xc979,	// (0x0000c979) listscroll_popup_graphic_pane_g1

0xc98d,	// (0x0000c98d) listscroll_popup_graphic_pane_g2_ParamLimits

0xc98d,	// (0x0000c98d) listscroll_popup_graphic_pane_g2

0x0001,

0xe97e,	// (0x0000e97e) listscroll_popup_graphic_pane_g_ParamLimits

0xe97e,	// (0x0000e97e) listscroll_popup_graphic_pane_g

0x4cf9,	// (0x00004cf9) scroll_pane_cp5

0xc911,	// (0x0000c911) cell_graphic_popup_pane_ParamLimits

0xc911,	// (0x0000c911) cell_graphic_popup_pane

0x4c32,	// (0x00004c32) cell_graphic_popup_pane_g1

0x4c3a,	// (0x00004c3a) cell_graphic_popup_pane_g2

0x0ae1,	// (0x00000ae1) cell_graphic_popup_pane_g3

0x0002,

0xa48c,	// (0x0000a48c) cell_graphic_popup_pane_g

0x4c43,	// (0x00004c43) cell_graphic_popup_pane_t2

0x0aea,	// (0x00000aea) grid_highlight_pane_cp3

0x0c33,	// (0x00000c33) list_gen_pane_ParamLimits

0x0c33,	// (0x00000c33) list_gen_pane

0x0c64,	// (0x00000c64) scroll_pane

0xc8e4,	// (0x0000c8e4) bg_list_pane_g1_ParamLimits

0xc8e4,	// (0x0000c8e4) bg_list_pane_g1

0x4bc9,	// (0x00004bc9) bg_list_pane_g2_ParamLimits

0x4bc9,	// (0x00004bc9) bg_list_pane_g2

0x4bdc,	// (0x00004bdc) bg_list_pane_g3_ParamLimits

0x4bdc,	// (0x00004bdc) bg_list_pane_g3

0x4bee,	// (0x00004bee) bg_list_pane_g4_ParamLimits

0x4bee,	// (0x00004bee) bg_list_pane_g4

0xc8ff,	// (0x0000c8ff) bg_list_pane_g5_ParamLimits

0xc8ff,	// (0x0000c8ff) bg_list_pane_g5

0x0004,

0xe973,	// (0x0000e973) bg_list_pane_g_ParamLimits

0xe973,	// (0x0000e973) bg_list_pane_g

0xc874,	// (0x0000c874) list_double2_graphic_large_graphic_pane_ParamLimits

0xc874,	// (0x0000c874) list_double2_graphic_large_graphic_pane

0xc874,	// (0x0000c874) list_double2_graphic_pane_ParamLimits

0xc874,	// (0x0000c874) list_double2_graphic_pane

0xc874,	// (0x0000c874) list_double2_large_graphic_pane_ParamLimits

0xc874,	// (0x0000c874) list_double2_large_graphic_pane

0xc874,	// (0x0000c874) list_double2_pane_ParamLimits

0xc874,	// (0x0000c874) list_double2_pane

0xc874,	// (0x0000c874) list_double_graphic_heading_pane_ParamLimits

0xc874,	// (0x0000c874) list_double_graphic_heading_pane

0xc874,	// (0x0000c874) list_double_graphic_pane_ParamLimits

0xc874,	// (0x0000c874) list_double_graphic_pane

0xc874,	// (0x0000c874) list_double_heading_pane_ParamLimits

0xc874,	// (0x0000c874) list_double_heading_pane

0xc874,	// (0x0000c874) list_double_large_graphic_pane_ParamLimits

0xc874,	// (0x0000c874) list_double_large_graphic_pane

0xc874,	// (0x0000c874) list_double_number_pane_ParamLimits

0xc874,	// (0x0000c874) list_double_number_pane

0xc874,	// (0x0000c874) list_double_pane_ParamLimits

0xc874,	// (0x0000c874) list_double_pane

0xc874,	// (0x0000c874) list_double_time_pane_ParamLimits

0xc874,	// (0x0000c874) list_double_time_pane

0xc874,	// (0x0000c874) list_setting_number_pane_ParamLimits

0xc874,	// (0x0000c874) list_setting_number_pane

0xc874,	// (0x0000c874) list_setting_pane_ParamLimits

0xc874,	// (0x0000c874) list_setting_pane

0xc885,	// (0x0000c885) list_single_2graphic_pane_ParamLimits

0xc885,	// (0x0000c885) list_single_2graphic_pane

0xc885,	// (0x0000c885) list_single_graphic_heading_pane_ParamLimits

0xc885,	// (0x0000c885) list_single_graphic_heading_pane

0xc885,	// (0x0000c885) list_single_graphic_pane_ParamLimits

0xc885,	// (0x0000c885) list_single_graphic_pane

0xc885,	// (0x0000c885) list_single_heading_pane_ParamLimits

0xc885,	// (0x0000c885) list_single_heading_pane

0xc8d2,	// (0x0000c8d2) list_single_large_graphic_pane_ParamLimits

0xc8d2,	// (0x0000c8d2) list_single_large_graphic_pane

0xc885,	// (0x0000c885) list_single_number_heading_pane_ParamLimits

0xc885,	// (0x0000c885) list_single_number_heading_pane

0xc885,	// (0x0000c885) list_single_number_pane_ParamLimits

0xc885,	// (0x0000c885) list_single_number_pane

0xc885,	// (0x0000c885) list_single_pane_ParamLimits

0xc885,	// (0x0000c885) list_single_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp1

0x0ea6,	// (0x00000ea6) list_single_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_pane_g1

0x0dd1,	// (0x00000dd1) list_single_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_pane_g2

0x0001,

0xa155,	// (0x0000a155) list_single_pane_g_ParamLimits

0xa155,	// (0x0000a155) list_single_pane_g

0x0ddd,	// (0x00000ddd) list_single_pane_t1_ParamLimits

0x0ddd,	// (0x00000ddd) list_single_pane_t1

0x0ea6,	// (0x00000ea6) list_single_number_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_number_pane_g1

0x0dd1,	// (0x00000dd1) list_single_number_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_number_pane_g2

0x0001,

0xa155,	// (0x0000a155) list_single_number_pane_g_ParamLimits

0xa155,	// (0x0000a155) list_single_number_pane_g

0x0eb2,	// (0x00000eb2) list_single_number_pane_t1_ParamLimits

0x0eb2,	// (0x00000eb2) list_single_number_pane_t1

0xc6d8,	// (0x0000c6d8) list_single_number_pane_t2_ParamLimits

0xc6d8,	// (0x0000c6d8) list_single_number_pane_t2

0x0001,

0xe934,	// (0x0000e934) list_single_number_pane_t_ParamLimits

0xe934,	// (0x0000e934) list_single_number_pane_t

0x0e9a,	// (0x00000e9a) list_single_graphic_pane_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_single_graphic_pane_g1

0x0ea6,	// (0x00000ea6) list_single_graphic_pane_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_pane_g2

0x0dd1,	// (0x00000dd1) list_single_graphic_pane_g3_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_graphic_pane_g3

0x0002,

0xa109,	// (0x0000a109) list_single_graphic_pane_g_ParamLimits

0xa109,	// (0x0000a109) list_single_graphic_pane_g

0x0eb2,	// (0x00000eb2) list_single_graphic_pane_t1_ParamLimits

0x0eb2,	// (0x00000eb2) list_single_graphic_pane_t1

0x0ea6,	// (0x00000ea6) list_single_heading_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_heading_pane_g1

0x0dd1,	// (0x00000dd1) list_single_heading_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_heading_pane_g2

0x0001,

0xa155,	// (0x0000a155) list_single_heading_pane_g_ParamLimits

0xa155,	// (0x0000a155) list_single_heading_pane_g

0x0f6f,	// (0x00000f6f) list_single_heading_pane_t1_ParamLimits

0x0f6f,	// (0x00000f6f) list_single_heading_pane_t1

0xaf84,	// (0x0000af84) list_single_heading_pane_t2_ParamLimits

0xaf84,	// (0x0000af84) list_single_heading_pane_t2

0x0001,

0xe7db,	// (0x0000e7db) list_single_heading_pane_t_ParamLimits

0xe7db,	// (0x0000e7db) list_single_heading_pane_t

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_g1

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_g2

0x0001,

0xa155,	// (0x0000a155) list_single_number_heading_pane_g_ParamLimits

0xa155,	// (0x0000a155) list_single_number_heading_pane_g

0x0f6f,	// (0x00000f6f) list_single_number_heading_pane_t1_ParamLimits

0x0f6f,	// (0x00000f6f) list_single_number_heading_pane_t1

0xaf96,	// (0x0000af96) list_single_number_heading_pane_t2_ParamLimits

0xaf96,	// (0x0000af96) list_single_number_heading_pane_t2

0x5393,	// (0x00005393) list_single_number_heading_pane_t3_ParamLimits

0x5393,	// (0x00005393) list_single_number_heading_pane_t3

0x0002,

0xe7e0,	// (0x0000e7e0) list_single_number_heading_pane_t_ParamLimits

0xe7e0,	// (0x0000e7e0) list_single_number_heading_pane_t

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_g1

0xafa8,	// (0x0000afa8) list_single_graphic_heading_pane_g4_ParamLimits

0xafa8,	// (0x0000afa8) list_single_graphic_heading_pane_g4

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_g5_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_g5

0x0002,

0xe7e7,	// (0x0000e7e7) list_single_graphic_heading_pane_g_ParamLimits

0xe7e7,	// (0x0000e7e7) list_single_graphic_heading_pane_g

0x0f6f,	// (0x00000f6f) list_single_graphic_heading_pane_t1_ParamLimits

0x0f6f,	// (0x00000f6f) list_single_graphic_heading_pane_t1

0xafb9,	// (0x0000afb9) list_single_graphic_heading_pane_t2_ParamLimits

0xafb9,	// (0x0000afb9) list_single_graphic_heading_pane_t2

0x0001,

0xe7ee,	// (0x0000e7ee) list_single_graphic_heading_pane_t_ParamLimits

0xe7ee,	// (0x0000e7ee) list_single_graphic_heading_pane_t

0x0d40,	// (0x00000d40) list_single_large_graphic_pane_g1_ParamLimits

0x0d40,	// (0x00000d40) list_single_large_graphic_pane_g1

0x0d4c,	// (0x00000d4c) list_single_large_graphic_pane_g2_ParamLimits

0x0d4c,	// (0x00000d4c) list_single_large_graphic_pane_g2

0x0d58,	// (0x00000d58) list_single_large_graphic_pane_g3_ParamLimits

0x0d58,	// (0x00000d58) list_single_large_graphic_pane_g3

0x0002,

0xa0d9,	// (0x0000a0d9) list_single_large_graphic_pane_g_ParamLimits

0xa0d9,	// (0x0000a0d9) list_single_large_graphic_pane_g

0x39ce,	// (0x000039ce) wait_border_pane_g2_copy1

0x0d64,	// (0x00000d64) list_single_large_graphic_pane_g4_cp2

0x0d6c,	// (0x00000d6c) list_single_large_graphic_pane_t1_ParamLimits

0x0d6c,	// (0x00000d6c) list_single_large_graphic_pane_t1

0xafcb,	// (0x0000afcb) list_double_pane_g1_ParamLimits

0xafcb,	// (0x0000afcb) list_double_pane_g1

0xafd7,	// (0x0000afd7) list_double_pane_g2_ParamLimits

0xafd7,	// (0x0000afd7) list_double_pane_g2

0x0001,

0xe7f3,	// (0x0000e7f3) list_double_pane_g_ParamLimits

0xe7f3,	// (0x0000e7f3) list_double_pane_g

0xafe3,	// (0x0000afe3) list_double_pane_t1_ParamLimits

0xafe3,	// (0x0000afe3) list_double_pane_t1

0xaff9,	// (0x0000aff9) list_double_pane_t2_ParamLimits

0xaff9,	// (0x0000aff9) list_double_pane_t2

0x0001,

0xe7f8,	// (0x0000e7f8) list_double_pane_t_ParamLimits

0xe7f8,	// (0x0000e7f8) list_double_pane_t

0xb00b,	// (0x0000b00b) list_double2_pane_g1_ParamLimits

0xb00b,	// (0x0000b00b) list_double2_pane_g1

0xafd7,	// (0x0000afd7) list_double2_pane_g2_ParamLimits

0xafd7,	// (0x0000afd7) list_double2_pane_g2

0x0001,

0xe7fd,	// (0x0000e7fd) list_double2_pane_g_ParamLimits

0xe7fd,	// (0x0000e7fd) list_double2_pane_g

0xafe3,	// (0x0000afe3) list_double2_pane_t1_ParamLimits

0xafe3,	// (0x0000afe3) list_double2_pane_t1

0xb01c,	// (0x0000b01c) list_double2_pane_t2_ParamLimits

0xb01c,	// (0x0000b01c) list_double2_pane_t2

0x0001,

0xe802,	// (0x0000e802) list_double2_pane_t_ParamLimits

0xe802,	// (0x0000e802) list_double2_pane_t

0xafcb,	// (0x0000afcb) list_double_number_pane_g1_ParamLimits

0xafcb,	// (0x0000afcb) list_double_number_pane_g1

0xafd7,	// (0x0000afd7) list_double_number_pane_g2_ParamLimits

0xafd7,	// (0x0000afd7) list_double_number_pane_g2

0x0001,

0xe7f3,	// (0x0000e7f3) list_double_number_pane_g_ParamLimits

0xe7f3,	// (0x0000e7f3) list_double_number_pane_g

0xb02e,	// (0x0000b02e) list_double_number_pane_t1_ParamLimits

0xb02e,	// (0x0000b02e) list_double_number_pane_t1

0xb040,	// (0x0000b040) list_double_number_pane_t2_ParamLimits

0xb040,	// (0x0000b040) list_double_number_pane_t2

0xb056,	// (0x0000b056) list_double_number_pane_t3_ParamLimits

0xb056,	// (0x0000b056) list_double_number_pane_t3

0x0002,

0xe807,	// (0x0000e807) list_double_number_pane_t_ParamLimits

0xe807,	// (0x0000e807) list_double_number_pane_t

0xb068,	// (0x0000b068) list_double_graphic_pane_g1_ParamLimits

0xb068,	// (0x0000b068) list_double_graphic_pane_g1

0xb074,	// (0x0000b074) list_double_graphic_pane_g2_ParamLimits

0xb074,	// (0x0000b074) list_double_graphic_pane_g2

0xb083,	// (0x0000b083) list_double_graphic_pane_g3_ParamLimits

0xb083,	// (0x0000b083) list_double_graphic_pane_g3

0x0003,

0xe80e,	// (0x0000e80e) list_double_graphic_pane_g_ParamLimits

0xe80e,	// (0x0000e80e) list_double_graphic_pane_g

0xb09b,	// (0x0000b09b) list_double_graphic_pane_t1_ParamLimits

0xb09b,	// (0x0000b09b) list_double_graphic_pane_t1

0xb0b1,	// (0x0000b0b1) list_double_graphic_pane_t2_ParamLimits

0xb0b1,	// (0x0000b0b1) list_double_graphic_pane_t2

0x0001,

0xe817,	// (0x0000e817) list_double_graphic_pane_t_ParamLimits

0xe817,	// (0x0000e817) list_double_graphic_pane_t

0xb068,	// (0x0000b068) list_double2_graphic_pane_g1_ParamLimits

0xb068,	// (0x0000b068) list_double2_graphic_pane_g1

0xafcb,	// (0x0000afcb) list_double2_graphic_pane_g2_ParamLimits

0xafcb,	// (0x0000afcb) list_double2_graphic_pane_g2

0xafd7,	// (0x0000afd7) list_double2_graphic_pane_g3_ParamLimits

0xafd7,	// (0x0000afd7) list_double2_graphic_pane_g3

0x0002,

0xe81c,	// (0x0000e81c) list_double2_graphic_pane_g_ParamLimits

0xe81c,	// (0x0000e81c) list_double2_graphic_pane_g

0xb040,	// (0x0000b040) list_double2_graphic_pane_t1_ParamLimits

0xb040,	// (0x0000b040) list_double2_graphic_pane_t1

0xb0c3,	// (0x0000b0c3) list_double2_graphic_pane_t2_ParamLimits

0xb0c3,	// (0x0000b0c3) list_double2_graphic_pane_t2

0x0001,

0xe823,	// (0x0000e823) list_double2_graphic_pane_t_ParamLimits

0xe823,	// (0x0000e823) list_double2_graphic_pane_t

0xb0d5,	// (0x0000b0d5) list_double_large_graphic_pane_g1_ParamLimits

0xb0d5,	// (0x0000b0d5) list_double_large_graphic_pane_g1

0xb00b,	// (0x0000b00b) list_double_large_graphic_pane_g2_ParamLimits

0xb00b,	// (0x0000b00b) list_double_large_graphic_pane_g2

0xafd7,	// (0x0000afd7) list_double_large_graphic_pane_g3_ParamLimits

0xafd7,	// (0x0000afd7) list_double_large_graphic_pane_g3

0xb0fe,	// (0x0000b0fe) list_double_large_graphic_pane_g4_ParamLimits

0xb0fe,	// (0x0000b0fe) list_double_large_graphic_pane_g4

0x0004,

0xe828,	// (0x0000e828) list_double_large_graphic_pane_g_ParamLimits

0xe828,	// (0x0000e828) list_double_large_graphic_pane_g

0xb10f,	// (0x0000b10f) list_double_large_graphic_pane_t1_ParamLimits

0xb10f,	// (0x0000b10f) list_double_large_graphic_pane_t1

0xb128,	// (0x0000b128) list_double_large_graphic_pane_t2_ParamLimits

0xb128,	// (0x0000b128) list_double_large_graphic_pane_t2

0x0001,

0xe833,	// (0x0000e833) list_double_large_graphic_pane_t_ParamLimits

0xe833,	// (0x0000e833) list_double_large_graphic_pane_t

0xb13a,	// (0x0000b13a) list_double2_large_graphic_pane_g1_ParamLimits

0xb13a,	// (0x0000b13a) list_double2_large_graphic_pane_g1

0xb00b,	// (0x0000b00b) list_double2_large_graphic_pane_g2_ParamLimits

0xb00b,	// (0x0000b00b) list_double2_large_graphic_pane_g2

0xafd7,	// (0x0000afd7) list_double2_large_graphic_pane_g3_ParamLimits

0xafd7,	// (0x0000afd7) list_double2_large_graphic_pane_g3

0x0002,

0xe838,	// (0x0000e838) list_double2_large_graphic_pane_g_ParamLimits

0xe838,	// (0x0000e838) list_double2_large_graphic_pane_g

0xb146,	// (0x0000b146) list_double2_large_graphic_pane_t1_ParamLimits

0xb146,	// (0x0000b146) list_double2_large_graphic_pane_t1

0xb15c,	// (0x0000b15c) list_double2_large_graphic_pane_t2_ParamLimits

0xb15c,	// (0x0000b15c) list_double2_large_graphic_pane_t2

0x0001,

0xe83f,	// (0x0000e83f) list_double2_large_graphic_pane_t_ParamLimits

0xe83f,	// (0x0000e83f) list_double2_large_graphic_pane_t

0xb16e,	// (0x0000b16e) list_double_heading_pane_g1_ParamLimits

0xb16e,	// (0x0000b16e) list_double_heading_pane_g1

0x0cb1,	// (0x00000cb1) list_double_heading_pane_g2_ParamLimits

0x0cb1,	// (0x00000cb1) list_double_heading_pane_g2

0x0001,

0xe844,	// (0x0000e844) list_double_heading_pane_g_ParamLimits

0xe844,	// (0x0000e844) list_double_heading_pane_g

0xb17f,	// (0x0000b17f) list_double_heading_pane_t1_ParamLimits

0xb17f,	// (0x0000b17f) list_double_heading_pane_t1

0xb195,	// (0x0000b195) list_double_heading_pane_t2_ParamLimits

0xb195,	// (0x0000b195) list_double_heading_pane_t2

0x0001,

0xe849,	// (0x0000e849) list_double_heading_pane_t_ParamLimits

0xe849,	// (0x0000e849) list_double_heading_pane_t

0x0e3f,	// (0x00000e3f) list_double_graphic_heading_pane_g1_ParamLimits

0x0e3f,	// (0x00000e3f) list_double_graphic_heading_pane_g1

0xb16e,	// (0x0000b16e) list_double_graphic_heading_pane_g2_ParamLimits

0xb16e,	// (0x0000b16e) list_double_graphic_heading_pane_g2

0x0cb1,	// (0x00000cb1) list_double_graphic_heading_pane_g3_ParamLimits

0x0cb1,	// (0x00000cb1) list_double_graphic_heading_pane_g3

0x0002,

0xe84e,	// (0x0000e84e) list_double_graphic_heading_pane_g_ParamLimits

0xe84e,	// (0x0000e84e) list_double_graphic_heading_pane_g

0xb1a7,	// (0x0000b1a7) list_double_graphic_heading_pane_t1_ParamLimits

0xb1a7,	// (0x0000b1a7) list_double_graphic_heading_pane_t1

0xb1bd,	// (0x0000b1bd) list_double_graphic_heading_pane_t2_ParamLimits

0xb1bd,	// (0x0000b1bd) list_double_graphic_heading_pane_t2

0x0001,

0xe855,	// (0x0000e855) list_double_graphic_heading_pane_t_ParamLimits

0xe855,	// (0x0000e855) list_double_graphic_heading_pane_t

0xb00b,	// (0x0000b00b) list_double_time_pane_g1_ParamLimits

0xb00b,	// (0x0000b00b) list_double_time_pane_g1

0xafd7,	// (0x0000afd7) list_double_time_pane_g2_ParamLimits

0xafd7,	// (0x0000afd7) list_double_time_pane_g2

0x0001,

0xe7fd,	// (0x0000e7fd) list_double_time_pane_g_ParamLimits

0xe7fd,	// (0x0000e7fd) list_double_time_pane_g

0xb146,	// (0x0000b146) list_double_time_pane_t1_ParamLimits

0xb146,	// (0x0000b146) list_double_time_pane_t1

0xb1cf,	// (0x0000b1cf) list_double_time_pane_t2_ParamLimits

0xb1cf,	// (0x0000b1cf) list_double_time_pane_t2

0xb1e1,	// (0x0000b1e1) list_double_time_pane_t3_ParamLimits

0xb1e1,	// (0x0000b1e1) list_double_time_pane_t3

0xb1f3,	// (0x0000b1f3) list_double_time_pane_t4_ParamLimits

0xb1f3,	// (0x0000b1f3) list_double_time_pane_t4

0x0003,

0xe85a,	// (0x0000e85a) list_double_time_pane_t_ParamLimits

0xe85a,	// (0x0000e85a) list_double_time_pane_t

0xafcb,	// (0x0000afcb) list_setting_pane_g1_ParamLimits

0xafcb,	// (0x0000afcb) list_setting_pane_g1

0xafd7,	// (0x0000afd7) list_setting_pane_g2_ParamLimits

0xafd7,	// (0x0000afd7) list_setting_pane_g2

0x0001,

0xe7f3,	// (0x0000e7f3) list_setting_pane_g_ParamLimits

0xe7f3,	// (0x0000e7f3) list_setting_pane_g

0xb205,	// (0x0000b205) list_setting_pane_t1_ParamLimits

0xb205,	// (0x0000b205) list_setting_pane_t1

0xb21f,	// (0x0000b21f) list_setting_pane_t2_ParamLimits

0xb21f,	// (0x0000b21f) list_setting_pane_t2

0x0002,

0xe863,	// (0x0000e863) list_setting_pane_t_ParamLimits

0xe863,	// (0x0000e863) list_setting_pane_t

0xb25c,	// (0x0000b25c) set_value_pane_cp_ParamLimits

0xb25c,	// (0x0000b25c) set_value_pane_cp

0xafcb,	// (0x0000afcb) list_setting_number_pane_g1_ParamLimits

0xafcb,	// (0x0000afcb) list_setting_number_pane_g1

0xafd7,	// (0x0000afd7) list_setting_number_pane_g2_ParamLimits

0xafd7,	// (0x0000afd7) list_setting_number_pane_g2

0x0001,

0xe7f3,	// (0x0000e7f3) list_setting_number_pane_g_ParamLimits

0xe7f3,	// (0x0000e7f3) list_setting_number_pane_g

0xb268,	// (0x0000b268) list_setting_number_pane_t1_ParamLimits

0xb268,	// (0x0000b268) list_setting_number_pane_t1

0xb281,	// (0x0000b281) list_setting_number_pane_t2_ParamLimits

0xb281,	// (0x0000b281) list_setting_number_pane_t2

0xb29b,	// (0x0000b29b) list_setting_number_pane_t3_ParamLimits

0xb29b,	// (0x0000b29b) list_setting_number_pane_t3

0x0003,

0xe86a,	// (0x0000e86a) list_setting_number_pane_t_ParamLimits

0xe86a,	// (0x0000e86a) list_setting_number_pane_t

0xb25c,	// (0x0000b25c) set_value_pane_ParamLimits

0xb25c,	// (0x0000b25c) set_value_pane

0x10f4,	// (0x000010f4) bg_set_opt_pane_ParamLimits

0x10f4,	// (0x000010f4) bg_set_opt_pane

0x1115,	// (0x00001115) set_value_pane_t1

0x1123,	// (0x00001123) slider_set_pane_cp3

0x112c,	// (0x0000112c) volume_small_pane_cp

0x1135,	// (0x00001135) list_form_gen_pane

0x0c88,	// (0x00000c88) scroll_pane_cp8

0x576a,	// (0x0000576a) form_field_data_pane_ParamLimits

0x576a,	// (0x0000576a) form_field_data_pane

0xb2de,	// (0x0000b2de) form_field_data_wide_pane_ParamLimits

0xb2de,	// (0x0000b2de) form_field_data_wide_pane

0xb2fe,	// (0x0000b2fe) form_field_popup_pane_ParamLimits

0xb2fe,	// (0x0000b2fe) form_field_popup_pane

0xb316,	// (0x0000b316) form_field_popup_wide_pane_ParamLimits

0xb316,	// (0x0000b316) form_field_popup_wide_pane

0x11bc,	// (0x000011bc) form_field_slider_pane_ParamLimits

0x11bc,	// (0x000011bc) form_field_slider_pane

0x11cf,	// (0x000011cf) form_field_slider_wide_pane_ParamLimits

0x11cf,	// (0x000011cf) form_field_slider_wide_pane

0x11e2,	// (0x000011e2) data_form_pane

0xb337,	// (0x0000b337) form_field_data_pane_t1

0x120e,	// (0x0000120e) input_focus_pane

0x121c,	// (0x0000121c) data_form_wide_pane

0x1248,	// (0x00001248) form_field_data_wide_pane_t1

0x0aff,	// (0x00000aff) input_focus_pane_cp6

0xb34f,	// (0x0000b34f) form_field_popup_pane_t1

0x120e,	// (0x0000120e) input_focus_pane_cp7

0x11e2,	// (0x000011e2) list_form_pane

0x1287,	// (0x00001287) form_field_popup_wide_pane_t1

0x120e,	// (0x0000120e) input_focus_pane_cp8

0x129c,	// (0x0000129c) list_form_wide_pane

0xb36f,	// (0x0000b36f) form_field_slider_pane_t1_ParamLimits

0xb36f,	// (0x0000b36f) form_field_slider_pane_t1

0xb385,	// (0x0000b385) form_field_slider_pane_t2_ParamLimits

0xb385,	// (0x0000b385) form_field_slider_pane_t2

0x0001,

0xe873,	// (0x0000e873) form_field_slider_pane_t_ParamLimits

0xe873,	// (0x0000e873) form_field_slider_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp9_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9

0xb39a,	// (0x0000b39a) slider_cont_pane_ParamLimits

0xb39a,	// (0x0000b39a) slider_cont_pane

0x12ef,	// (0x000012ef) form_field_slider_wide_pane_t1_ParamLimits

0x12ef,	// (0x000012ef) form_field_slider_wide_pane_t1

0x1301,	// (0x00001301) form_field_slider_wide_pane_t2_ParamLimits

0x1301,	// (0x00001301) form_field_slider_wide_pane_t2

0x0001,

0xa176,	// (0x0000a176) form_field_slider_wide_pane_t_ParamLimits

0xa176,	// (0x0000a176) form_field_slider_wide_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp10_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10

0xb3ae,	// (0x0000b3ae) slider_cont_pane_cp1_ParamLimits

0xb3ae,	// (0x0000b3ae) slider_cont_pane_cp1

0xb3c4,	// (0x0000b3c4) slider_form_pane_cp

0x1331,	// (0x00001331) input_focus_pane_g1

0x1339,	// (0x00001339) input_focus_pane_g2

0x1341,	// (0x00001341) input_focus_pane_g3

0x1349,	// (0x00001349) input_focus_pane_g4

0x1351,	// (0x00001351) input_focus_pane_g5

0x1359,	// (0x00001359) input_focus_pane_g6

0x1361,	// (0x00001361) input_focus_pane_g7

0x1369,	// (0x00001369) input_focus_pane_g8

0x1371,	// (0x00001371) input_focus_pane_g9

0x002a,	// (0x0000002a) input_focus_pane_g10

0x0009,

0xa17b,	// (0x0000a17b) input_focus_pane_g

0x39d7,	// (0x000039d7) wait_border_pane_g3_copy1

0xb3cc,	// (0x0000b3cc) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xc85b,	// (0x0000c85b) data_form_wide_pane_t1

0x514d,	// (0x0000514d) list_form_graphic_pane_cp_ParamLimits

0x514d,	// (0x0000514d) list_form_graphic_pane_cp

0x4a5f,	// (0x00004a5f) slider_form_pane_g1

0x4a68,	// (0x00004a68) slider_form_pane_g2

0x0006,

0xe964,	// (0x0000e964) slider_form_pane_g

0x1393,	// (0x00001393) list_form_graphic_pane_ParamLimits

0x1393,	// (0x00001393) list_form_graphic_pane

0x13be,	// (0x000013be) list_form_graphic_pane_g1

0x13c6,	// (0x000013c6) list_form_graphic_pane_t1_ParamLimits

0x13c6,	// (0x000013c6) list_form_graphic_pane_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5

0xb3e5,	// (0x0000b3e5) find_pane_g1

0x13e4,	// (0x000013e4) input_find_pane

0xb3f0,	// (0x0000b3f0) input_find_pane_g1_ParamLimits

0xb3f0,	// (0x0000b3f0) input_find_pane_g1

0xb3fc,	// (0x0000b3fc) input_find_pane_t1_ParamLimits

0xb3fc,	// (0x0000b3fc) input_find_pane_t1

0xb411,	// (0x0000b411) input_find_pane_t2_ParamLimits

0xb411,	// (0x0000b411) input_find_pane_t2

0x0001,

0xe878,	// (0x0000e878) input_find_pane_t_ParamLimits

0xe878,	// (0x0000e878) input_find_pane_t

0x1423,	// (0x00001423) input_focus_pane_cp5_ParamLimits

0x1423,	// (0x00001423) input_focus_pane_cp5

0x0797,	// (0x00000797) bg_popup_window_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_popup_window_pane_cp2

0x143d,	// (0x0000143d) listscroll_menu_pane_ParamLimits

0x143d,	// (0x0000143d) listscroll_menu_pane

0x1449,	// (0x00001449) popup_submenu_window_ParamLimits

0x1449,	// (0x00001449) popup_submenu_window

0x146d,	// (0x0000146d) find_popup_pane_g1

0x1475,	// (0x00001475) input_popup_find_pane_cp

0x1423,	// (0x00001423) input_focus_pane_cp4_ParamLimits

0x1423,	// (0x00001423) input_focus_pane_cp4

0x148b,	// (0x0000148b) input_popup_find_pane_t1_ParamLimits

0x148b,	// (0x0000148b) input_popup_find_pane_t1

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp

0x14b9,	// (0x000014b9) listscroll_popup_sub_pane

0x14c1,	// (0x000014c1) list_submenu_pane_ParamLimits

0x14c1,	// (0x000014c1) list_submenu_pane

0x14d2,	// (0x000014d2) scroll_pane_cp4

0x14da,	// (0x000014da) list_single_popup_submenu_pane_ParamLimits

0x14da,	// (0x000014da) list_single_popup_submenu_pane

0x14ec,	// (0x000014ec) list_single_popup_submenu_pane_g1

0x14f4,	// (0x000014f4) list_single_popup_submenu_pane_t1_ParamLimits

0x14f4,	// (0x000014f4) list_single_popup_submenu_pane_t1

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp1

0x4d9a,	// (0x00004d9a) tabs_2_active_pane_g1

0xb432,	// (0x0000b432) tabs_2_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1

0x4d9a,	// (0x00004d9a) tabs_2_passive_pane_g1

0xb432,	// (0x0000b432) tabs_2_passive_pane_t1

0x0474,	// (0x00000474) bg_active_tab_pane_cp4

0xb448,	// (0x0000b448) tabs_2_long_active_pane_t1

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp4

0x32d4,	// (0x000032d4) list_single_midp_graphic_pane_g4_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5

0xb45f,	// (0x0000b45f) tabs_3_long_active_pane_t1

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp5

0x32d4,	// (0x000032d4) list_single_midp_graphic_pane_g4

0x0474,	// (0x00000474) bg_popup_window_pane_cp13_ParamLimits

0x0474,	// (0x00000474) bg_popup_window_pane_cp13

0x156b,	// (0x0000156b) listscroll_popup_fast_pane_ParamLimits

0x156b,	// (0x0000156b) listscroll_popup_fast_pane

0x157a,	// (0x0000157a) grid_popup_fast_pane_ParamLimits

0x157a,	// (0x0000157a) grid_popup_fast_pane

0x158c,	// (0x0000158c) scroll_pane_cp9_ParamLimits

0x158c,	// (0x0000158c) scroll_pane_cp9

0x6afe,	// (0x00006afe) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6afe,	// (0x00006afe) list_single_graphic_hl_pane_t1_cp2

0x15b0,	// (0x000015b0) input_focus_pane_cp20_ParamLimits

0x15b0,	// (0x000015b0) input_focus_pane_cp20

0x15be,	// (0x000015be) query_popup_data_pane_t1_ParamLimits

0x15be,	// (0x000015be) query_popup_data_pane_t1

0x15d1,	// (0x000015d1) query_popup_data_pane_t2_ParamLimits

0x15d1,	// (0x000015d1) query_popup_data_pane_t2

0x1617,	// (0x00001617) query_popup_data_pane_t3_ParamLimits

0x1617,	// (0x00001617) query_popup_data_pane_t3

0x1658,	// (0x00001658) query_popup_data_pane_t4_ParamLimits

0x1658,	// (0x00001658) query_popup_data_pane_t4

0x1694,	// (0x00001694) query_popup_data_pane_t5_ParamLimits

0x1694,	// (0x00001694) query_popup_data_pane_t5

0x0004,

0xa195,	// (0x0000a195) query_popup_data_pane_t_ParamLimits

0xa195,	// (0x0000a195) query_popup_data_pane_t

0x1331,	// (0x00001331) bg_set_opt_pane_g1

0x1339,	// (0x00001339) bg_set_opt_pane_g2

0x1341,	// (0x00001341) bg_set_opt_pane_g3

0x1349,	// (0x00001349) bg_set_opt_pane_g4

0x1351,	// (0x00001351) bg_set_opt_pane_g5

0x1359,	// (0x00001359) bg_set_opt_pane_g6

0x1361,	// (0x00001361) bg_set_opt_pane_g7

0x1369,	// (0x00001369) bg_set_opt_pane_g8

0x1371,	// (0x00001371) bg_set_opt_pane_g9

0x0008,

0xa1a0,	// (0x0000a1a0) bg_set_opt_pane_g

0x1f0c,	// (0x00001f0c) control_top_pane_stacon_ParamLimits

0x1f0c,	// (0x00001f0c) control_top_pane_stacon

0x1f5f,	// (0x00001f5f) signal_pane_stacon_ParamLimits

0x1f5f,	// (0x00001f5f) signal_pane_stacon

0x1f84,	// (0x00001f84) stacon_top_pane_g1_ParamLimits

0x1f84,	// (0x00001f84) stacon_top_pane_g1

0x1fa6,	// (0x00001fa6) title_pane_stacon_ParamLimits

0x1fa6,	// (0x00001fa6) title_pane_stacon

0x1fc8,	// (0x00001fc8) uni_indicator_pane_stacon_ParamLimits

0x1fc8,	// (0x00001fc8) uni_indicator_pane_stacon

0x1fdd,	// (0x00001fdd) battery_pane_stacon_ParamLimits

0x1fdd,	// (0x00001fdd) battery_pane_stacon

0x201d,	// (0x0000201d) control_bottom_pane_stacon_ParamLimits

0x201d,	// (0x0000201d) control_bottom_pane_stacon

0x203c,	// (0x0000203c) navi_pane_stacon_ParamLimits

0x203c,	// (0x0000203c) navi_pane_stacon

0x205b,	// (0x0000205b) stacon_bottom_pane_g1_ParamLimits

0x205b,	// (0x0000205b) stacon_bottom_pane_g1

0x16cb,	// (0x000016cb) aid_levels_signal_lsc_ParamLimits

0x16cb,	// (0x000016cb) aid_levels_signal_lsc

0x16d8,	// (0x000016d8) signal_pane_stacon_g1_ParamLimits

0x16d8,	// (0x000016d8) signal_pane_stacon_g1

0x16e4,	// (0x000016e4) signal_pane_stacon_g2_ParamLimits

0x16e4,	// (0x000016e4) signal_pane_stacon_g2

0x0001,

0xa1b3,	// (0x0000a1b3) signal_pane_stacon_g_ParamLimits

0xa1b3,	// (0x0000a1b3) signal_pane_stacon_g

0x1725,	// (0x00001725) title_pane_stacon_t1_ParamLimits

0x1725,	// (0x00001725) title_pane_stacon_t1

0x174a,	// (0x0000174a) uni_indicator_pane_stacon_g1

0x1754,	// (0x00001754) uni_indicator_pane_stacon_g2

0x175e,	// (0x0000175e) uni_indicator_pane_stacon_g3

0x1768,	// (0x00001768) uni_indicator_pane_stacon_g4

0x0003,

0xa1bf,	// (0x0000a1bf) uni_indicator_pane_stacon_g

0x1772,	// (0x00001772) control_top_pane_stacon_g1

0x177a,	// (0x0000177a) control_top_pane_stacon_t1_ParamLimits

0x177a,	// (0x0000177a) control_top_pane_stacon_t1

0x17ab,	// (0x000017ab) aid_levels_battery_lsc_ParamLimits

0x17ab,	// (0x000017ab) aid_levels_battery_lsc

0x17b9,	// (0x000017b9) battery_pane_stacon_g1_ParamLimits

0x17b9,	// (0x000017b9) battery_pane_stacon_g1

0x17c5,	// (0x000017c5) battery_pane_stacon_g2_ParamLimits

0x17c5,	// (0x000017c5) battery_pane_stacon_g2

0x0001,

0xa1c8,	// (0x0000a1c8) battery_pane_stacon_g_ParamLimits

0xa1c8,	// (0x0000a1c8) battery_pane_stacon_g

0x17f4,	// (0x000017f4) navi_icon_pane_stacon

0x1804,	// (0x00001804) navi_navi_pane_stacon

0x17f4,	// (0x000017f4) navi_text_pane_stacon

0x1772,	// (0x00001772) control_bottom_pane_stacon_g1

0x1814,	// (0x00001814) control_bottom_pane_stacon_t1_ParamLimits

0x1814,	// (0x00001814) control_bottom_pane_stacon_t1

0xb475,	// (0x0000b475) grid_app_pane_ParamLimits

0xb475,	// (0x0000b475) grid_app_pane

0xb4a3,	// (0x0000b4a3) scroll_pane_cp15_ParamLimits

0xb4a3,	// (0x0000b4a3) scroll_pane_cp15

0xb4b6,	// (0x0000b4b6) cell_app_pane_ParamLimits

0xb4b6,	// (0x0000b4b6) cell_app_pane

0xb4f3,	// (0x0000b4f3) cell_app_pane_g1_ParamLimits

0xb4f3,	// (0x0000b4f3) cell_app_pane_g1

0x18d4,	// (0x000018d4) cell_app_pane_g2_ParamLimits

0x18d4,	// (0x000018d4) cell_app_pane_g2

0x0001,

0xe87d,	// (0x0000e87d) cell_app_pane_g_ParamLimits

0xe87d,	// (0x0000e87d) cell_app_pane_g

0xb517,	// (0x0000b517) cell_app_pane_t1_ParamLimits

0xb517,	// (0x0000b517) cell_app_pane_t1

0x18f7,	// (0x000018f7) grid_highlight_pane_ParamLimits

0x18f7,	// (0x000018f7) grid_highlight_pane

0x1331,	// (0x00001331) cell_highlight_pane_g1

0x1339,	// (0x00001339) cell_highlight_pane_g2

0x1341,	// (0x00001341) cell_highlight_pane_g3

0x1349,	// (0x00001349) cell_highlight_pane_g4

0x1351,	// (0x00001351) cell_highlight_pane_g5

0x1359,	// (0x00001359) cell_highlight_pane_g6

0x1361,	// (0x00001361) cell_highlight_pane_g7

0x1369,	// (0x00001369) cell_highlight_pane_g8

0x1371,	// (0x00001371) cell_highlight_pane_g9

0x002a,	// (0x0000002a) cell_highlight_pane_g10

0x0009,

0xa17b,	// (0x0000a17b) cell_highlight_pane_g

0x191b,	// (0x0000191b) bg_scroll_pane

0x193a,	// (0x0000193a) scroll_handle_pane

0x198b,	// (0x0000198b) scroll_bg_pane_g1

0x19a0,	// (0x000019a0) scroll_bg_pane_g2

0x19b8,	// (0x000019b8) scroll_bg_pane_g3

0x0002,

0xa1d2,	// (0x0000a1d2) scroll_bg_pane_g

0x19cd,	// (0x000019cd) scroll_handle_focus_pane_ParamLimits

0x19cd,	// (0x000019cd) scroll_handle_focus_pane

0x198b,	// (0x0000198b) scroll_handle_pane_g1

0x19da,	// (0x000019da) scroll_handle_pane_g2

0x19b8,	// (0x000019b8) scroll_handle_pane_g3

0x0002,

0xa1d9,	// (0x0000a1d9) scroll_handle_pane_g

0x1423,	// (0x00001423) bg_popup_sub_pane_cp21_ParamLimits

0x1423,	// (0x00001423) bg_popup_sub_pane_cp21

0x19ee,	// (0x000019ee) popup_fep_japan_predictive_window_t1_ParamLimits

0x19ee,	// (0x000019ee) popup_fep_japan_predictive_window_t1

0x1a05,	// (0x00001a05) popup_fep_japan_predictive_window_t2_ParamLimits

0x1a05,	// (0x00001a05) popup_fep_japan_predictive_window_t2

0x1a38,	// (0x00001a38) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a38,	// (0x00001a38) popup_fep_japan_predictive_window_t3

0x0002,

0xa1e0,	// (0x0000a1e0) popup_fep_japan_predictive_window_t_ParamLimits

0xa1e0,	// (0x0000a1e0) popup_fep_japan_predictive_window_t

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp23

0x1a6f,	// (0x00001a6f) listscroll_japin_cand_pane

0x1a77,	// (0x00001a77) popup_fep_japan_candidate_window_t1

0x1a85,	// (0x00001a85) candidate_pane_ParamLimits

0x1a85,	// (0x00001a85) candidate_pane

0x1a98,	// (0x00001a98) scroll_pane_cp30

0x1aa0,	// (0x00001aa0) list_single_popup_jap_candidate_pane_ParamLimits

0x1aa0,	// (0x00001aa0) list_single_popup_jap_candidate_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp30

0x1ab5,	// (0x00001ab5) list_single_popup_jap_candidate_pane_t1

0xb537,	// (0x0000b537) level_1_signal

0xb549,	// (0x0000b549) level_2_signal

0xb55c,	// (0x0000b55c) level_3_signal

0xb56f,	// (0x0000b56f) level_4_signal

0xb582,	// (0x0000b582) level_5_signal

0xb595,	// (0x0000b595) level_6_signal

0xb5a8,	// (0x0000b5a8) level_7_signal

0xb537,	// (0x0000b537) level_1_battery

0xb549,	// (0x0000b549) level_2_battery

0xb55c,	// (0x0000b55c) level_3_battery

0xb56f,	// (0x0000b56f) level_4_battery

0xb582,	// (0x0000b582) level_5_battery

0xb595,	// (0x0000b595) level_6_battery

0xb5a8,	// (0x0000b5a8) level_7_battery

0x1b56,	// (0x00001b56) list_menu_pane_ParamLimits

0x1b56,	// (0x00001b56) list_menu_pane

0x1b6c,	// (0x00001b6c) scroll_pane_cp25_ParamLimits

0x1b6c,	// (0x00001b6c) scroll_pane_cp25

0xb5bb,	// (0x0000b5bb) list_double2_graphic_pane_cp2_ParamLimits

0xb5bb,	// (0x0000b5bb) list_double2_graphic_pane_cp2

0xb5bb,	// (0x0000b5bb) list_double2_large_graphic_pane_cp2_ParamLimits

0xb5bb,	// (0x0000b5bb) list_double2_large_graphic_pane_cp2

0xb5bb,	// (0x0000b5bb) list_double2_pane_cp2_ParamLimits

0xb5bb,	// (0x0000b5bb) list_double2_pane_cp2

0xb5bb,	// (0x0000b5bb) list_double_graphic_pane_cp2_ParamLimits

0xb5bb,	// (0x0000b5bb) list_double_graphic_pane_cp2

0xb5bb,	// (0x0000b5bb) list_double_large_graphic_pane_cp2_ParamLimits

0xb5bb,	// (0x0000b5bb) list_double_large_graphic_pane_cp2

0xb5bb,	// (0x0000b5bb) list_double_number_pane_cp2_ParamLimits

0xb5bb,	// (0x0000b5bb) list_double_number_pane_cp2

0xb5bb,	// (0x0000b5bb) list_double_pane_cp2_ParamLimits

0xb5bb,	// (0x0000b5bb) list_double_pane_cp2

0xb5d6,	// (0x0000b5d6) list_single_2graphic_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_2graphic_pane_cp2

0xb5d6,	// (0x0000b5d6) list_single_graphic_heading_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_graphic_heading_pane_cp2

0xb5d6,	// (0x0000b5d6) list_single_graphic_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_graphic_pane_cp2

0xb5d6,	// (0x0000b5d6) list_single_heading_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_heading_pane_cp2

0xb5e7,	// (0x0000b5e7) list_single_large_graphic_pane_cp2_ParamLimits

0xb5e7,	// (0x0000b5e7) list_single_large_graphic_pane_cp2

0xb5d6,	// (0x0000b5d6) list_single_number_heading_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_number_heading_pane_cp2

0xb5d6,	// (0x0000b5d6) list_single_number_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_number_pane_cp2

0xb5d6,	// (0x0000b5d6) list_single_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_pane_cp2

0x1c81,	// (0x00001c81) bg_popup_sub_pane_cp22

0x1ca3,	// (0x00001ca3) popup_side_volume_key_window_g1

0x1cc7,	// (0x00001cc7) popup_side_volume_key_window_t1

0x1ce3,	// (0x00001ce3) volume_small_pane_cp1

0x0797,	// (0x00000797) bg_popup_sub_pane_cp24_ParamLimits

0x0797,	// (0x00000797) bg_popup_sub_pane_cp24

0x1ceb,	// (0x00001ceb) fep_china_uni_candidate_pane_ParamLimits

0x1ceb,	// (0x00001ceb) fep_china_uni_candidate_pane

0x1cff,	// (0x00001cff) fep_china_uni_entry_pane

0x1d0f,	// (0x00001d0f) popup_fep_china_uni_window_g1

0x1d2b,	// (0x00001d2b) fep_china_uni_entry_pane_g1

0x1d33,	// (0x00001d33) fep_china_uni_entry_pane_g2

0x0001,

0xa211,	// (0x0000a211) fep_china_uni_entry_pane_g

0x1d3b,	// (0x00001d3b) fep_entry_item_pane

0x1d45,	// (0x00001d45) fep_candidate_item_pane

0x1d4d,	// (0x00001d4d) fep_china_uni_candidate_pane_g1

0x1d55,	// (0x00001d55) fep_china_uni_candidate_pane_g2

0x1d5d,	// (0x00001d5d) fep_china_uni_candidate_pane_g3

0x1d65,	// (0x00001d65) fep_china_uni_candidate_pane_g4

0x0003,

0xa216,	// (0x0000a216) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1d6d,	// (0x00001d6d) fep_entry_item_pane_t1_ParamLimits

0x1d6d,	// (0x00001d6d) fep_entry_item_pane_t1

0x1d83,	// (0x00001d83) fep_candidate_item_pane_t1_ParamLimits

0x1d83,	// (0x00001d83) fep_candidate_item_pane_t1

0x1d98,	// (0x00001d98) fep_candidate_item_pane_t2_ParamLimits

0x1d98,	// (0x00001d98) fep_candidate_item_pane_t2

0x0001,

0xa21f,	// (0x0000a21f) fep_candidate_item_pane_t_ParamLimits

0xa21f,	// (0x0000a21f) fep_candidate_item_pane_t

0x0474,	// (0x00000474) list_highlight_pane_cp31_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp31

0x1daa,	// (0x00001daa) level_1_signal_lsc

0x1db3,	// (0x00001db3) level_2_signal_lsc

0x1dbc,	// (0x00001dbc) level_3_signal_lsc

0x1dc5,	// (0x00001dc5) level_4_signal_lsc

0x1dce,	// (0x00001dce) level_5_signal_lsc

0x1dd7,	// (0x00001dd7) level_6_signal_lsc

0x1de0,	// (0x00001de0) level_7_signal_lsc

0x1de0,	// (0x00001de0) level_1_battery_lsc

0x1de9,	// (0x00001de9) level_2_battery_lsc

0x1df2,	// (0x00001df2) level_3_battery_lsc

0x1dfb,	// (0x00001dfb) level_4_battery_lsc

0x1e04,	// (0x00001e04) level_5_battery_lsc

0x1e0d,	// (0x00001e0d) level_6_battery_lsc

0x1daa,	// (0x00001daa) level_7_battery_lsc

0x1e16,	// (0x00001e16) scroll_handle_focus_pane_g1

0x1e1f,	// (0x00001e1f) scroll_handle_focus_pane_g2

0x1e28,	// (0x00001e28) scroll_handle_focus_pane_g3

0x0002,

0xa224,	// (0x0000a224) scroll_handle_focus_pane_g

0xb66c,	// (0x0000b66c) list_single_2graphic_pane_g1_ParamLimits

0xb66c,	// (0x0000b66c) list_single_2graphic_pane_g1

0xafa8,	// (0x0000afa8) list_single_2graphic_pane_g2_ParamLimits

0xafa8,	// (0x0000afa8) list_single_2graphic_pane_g2

0x0dd1,	// (0x00000dd1) list_single_2graphic_pane_g3_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_2graphic_pane_g3

0xb678,	// (0x0000b678) list_single_2graphic_pane_g4_ParamLimits

0xb678,	// (0x0000b678) list_single_2graphic_pane_g4

0x0003,

0xe88b,	// (0x0000e88b) list_single_2graphic_pane_g_ParamLimits

0xe88b,	// (0x0000e88b) list_single_2graphic_pane_g

0xb684,	// (0x0000b684) list_single_2graphic_pane_t1_ParamLimits

0xb684,	// (0x0000b684) list_single_2graphic_pane_t1

0xb6b2,	// (0x0000b6b2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb6b2,	// (0x0000b6b2) list_double2_graphic_large_graphic_pane_g1

0xb00b,	// (0x0000b00b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb00b,	// (0x0000b00b) list_double2_graphic_large_graphic_pane_g2

0xafd7,	// (0x0000afd7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xafd7,	// (0x0000afd7) list_double2_graphic_large_graphic_pane_g3

0xb6c2,	// (0x0000b6c2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb6c2,	// (0x0000b6c2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xe894,	// (0x0000e894) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xe894,	// (0x0000e894) list_double2_graphic_large_graphic_pane_g

0xb6ce,	// (0x0000b6ce) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb6ce,	// (0x0000b6ce) list_double2_graphic_large_graphic_pane_t1

0xb6e4,	// (0x0000b6e4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb6e4,	// (0x0000b6e4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xe89d,	// (0x0000e89d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xe89d,	// (0x0000e89d) list_double2_graphic_large_graphic_pane_t

0x2102,	// (0x00002102) popup_fast_swap_window_ParamLimits

0x2102,	// (0x00002102) popup_fast_swap_window

0x211e,	// (0x0000211e) popup_side_volume_key_window

0x2138,	// (0x00002138) stacon_top_pane

0x2142,	// (0x00002142) status_pane_ParamLimits

0x2142,	// (0x00002142) status_pane

0xb740,	// (0x0000b740) status_small_pane

0x024e,	// (0x0000024e) control_pane

0x024e,	// (0x0000024e) stacon_bottom_pane

0x0c88,	// (0x00000c88) scroll_pane_cp121

0x1135,	// (0x00001135) set_content_pane

0x4d88,	// (0x00004d88) bg_active_tab_pane_g1_cp1

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp1

0x4d91,	// (0x00004d91) bg_active_tab_pane_g3_cp1

0x4d88,	// (0x00004d88) bg_passive_tab_pane_g1_cp1

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp1

0x4d91,	// (0x00004d91) bg_passive_tab_pane_g3_cp1

0xb6f6,	// (0x0000b6f6) bg_active_tab_pane_g1_cp2

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp2

0xb6ff,	// (0x0000b6ff) bg_active_tab_pane_g3_cp2

0xb6f6,	// (0x0000b6f6) bg_passive_tab_pane_g1_cp2

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp2

0xb6ff,	// (0x0000b6ff) bg_passive_tab_pane_g3_cp2

0xb708,	// (0x0000b708) bg_active_tab_pane_g1_cp3

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp3

0xb711,	// (0x0000b711) bg_active_tab_pane_g3_cp3

0xb708,	// (0x0000b708) bg_passive_tab_pane_g1_cp3

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp3

0xb711,	// (0x0000b711) bg_passive_tab_pane_g3_cp3

0xb71a,	// (0x0000b71a) bg_active_tab_pane_g1_cp4

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp4

0xb723,	// (0x0000b723) bg_active_tab_pane_g3_cp4

0xb71a,	// (0x0000b71a) bg_passive_tab_pane_g1_cp4

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp4

0xb723,	// (0x0000b723) bg_passive_tab_pane_g3_cp4

0x2077,	// (0x00002077) bg_active_tab_pane_g1_cp5

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp5

0x2080,	// (0x00002080) bg_active_tab_pane_g3_cp5

0x2077,	// (0x00002077) bg_passive_tab_pane_g1_cp5

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp5

0x2080,	// (0x00002080) bg_passive_tab_pane_g3_cp5

0xb72c,	// (0x0000b72c) list_set_graphic_pane_ParamLimits

0xb72c,	// (0x0000b72c) list_set_graphic_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4

0x2089,	// (0x00002089) list_set_graphic_pane_g1_ParamLimits

0x2089,	// (0x00002089) list_set_graphic_pane_g1

0x2095,	// (0x00002095) list_set_graphic_pane_g2_ParamLimits

0x2095,	// (0x00002095) list_set_graphic_pane_g2

0x0001,

0xa242,	// (0x0000a242) list_set_graphic_pane_g_ParamLimits

0xa242,	// (0x0000a242) list_set_graphic_pane_g

0x0009,

0xa5b4,	// (0x0000a5b4) volume_small_pane_cp_g

0x20b7,	// (0x000020b7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x20b7,	// (0x000020b7) list_double2_large_graphic_pane_g1_cp2

0x20c3,	// (0x000020c3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x20c3,	// (0x000020c3) list_double2_large_graphic_pane_g2_cp2

0x20d2,	// (0x000020d2) list_double2_large_graphic_pane_g3_cp2

0x20da,	// (0x000020da) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x20da,	// (0x000020da) list_double2_large_graphic_pane_t1_cp2

0x20f0,	// (0x000020f0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x20f0,	// (0x000020f0) list_double2_large_graphic_pane_t2_cp2

0x4593,	// (0x00004593) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4593,	// (0x00004593) list_double_large_graphic_pane_g1_cp2

0x45a4,	// (0x000045a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x45a4,	// (0x000045a4) list_double_large_graphic_pane_g2_cp2

0x2226,	// (0x00002226) list_double_large_graphic_pane_g3_cp2

0x45b3,	// (0x000045b3) list_double_large_graphic_pane_g4_cp

0x45bb,	// (0x000045bb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x45bb,	// (0x000045bb) list_double_large_graphic_pane_t1_cp2

0x45d2,	// (0x000045d2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x45d2,	// (0x000045d2) list_double_large_graphic_pane_t2_cp2

0x2159,	// (0x00002159) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2159,	// (0x00002159) list_double2_graphic_pane_g1_cp2

0x2165,	// (0x00002165) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2165,	// (0x00002165) list_double2_graphic_pane_g2_cp2

0x2174,	// (0x00002174) list_double2_graphic_pane_g3_cp2

0x217c,	// (0x0000217c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x217c,	// (0x0000217c) list_double2_graphic_pane_t1_cp2

0x2192,	// (0x00002192) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2192,	// (0x00002192) list_double2_graphic_pane_t2_cp2

0x21a4,	// (0x000021a4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x21a4,	// (0x000021a4) list_single_number_heading_pane_g1_cp2

0x21b0,	// (0x000021b0) list_single_number_heading_pane_g2_cp2

0x21b8,	// (0x000021b8) list_single_number_heading_pane_t1_cp2_ParamLimits

0x21b8,	// (0x000021b8) list_single_number_heading_pane_t1_cp2

0x21ce,	// (0x000021ce) list_single_number_heading_pane_t2_cp2_ParamLimits

0x21ce,	// (0x000021ce) list_single_number_heading_pane_t2_cp2

0x21e0,	// (0x000021e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x21e0,	// (0x000021e0) list_single_number_heading_pane_t3_cp2

0x21a4,	// (0x000021a4) list_single_heading_pane_g1_cp2_ParamLimits

0x21a4,	// (0x000021a4) list_single_heading_pane_g1_cp2

0x21b0,	// (0x000021b0) list_single_heading_pane_g2_cp2

0x21b8,	// (0x000021b8) list_single_heading_pane_t1_cp2_ParamLimits

0x21b8,	// (0x000021b8) list_single_heading_pane_t1_cp2

0x439d,	// (0x0000439d) list_single_heading_pane_t2_cp2_ParamLimits

0x439d,	// (0x0000439d) list_single_heading_pane_t2_cp2

0x42ed,	// (0x000042ed) list_double_graphic_pane_g1_cp2_ParamLimits

0x42ed,	// (0x000042ed) list_double_graphic_pane_g1_cp2

0x42f9,	// (0x000042f9) list_double_graphic_pane_g2_cp2_ParamLimits

0x42f9,	// (0x000042f9) list_double_graphic_pane_g2_cp2

0x4308,	// (0x00004308) list_double_graphic_pane_g3_cp2

0x4310,	// (0x00004310) list_double_graphic_pane_t1_cp2_ParamLimits

0x4310,	// (0x00004310) list_double_graphic_pane_t1_cp2

0x4326,	// (0x00004326) list_double_graphic_pane_t2_cp2_ParamLimits

0x4326,	// (0x00004326) list_double_graphic_pane_t2_cp2

0x221a,	// (0x0000221a) list_double_number_pane_g1_cp2_ParamLimits

0x221a,	// (0x0000221a) list_double_number_pane_g1_cp2

0x2226,	// (0x00002226) list_double_number_pane_g2_cp2

0x42b3,	// (0x000042b3) list_double_number_pane_t1_cp2_ParamLimits

0x42b3,	// (0x000042b3) list_double_number_pane_t1_cp2

0x42c5,	// (0x000042c5) list_double_number_pane_t2_cp2_ParamLimits

0x42c5,	// (0x000042c5) list_double_number_pane_t2_cp2

0x42db,	// (0x000042db) list_double_number_pane_t3_cp2_ParamLimits

0x42db,	// (0x000042db) list_double_number_pane_t3_cp2

0x418c,	// (0x0000418c) list_single_graphic_pane_g1_cp2_ParamLimits

0x418c,	// (0x0000418c) list_single_graphic_pane_g1_cp2

0x21a4,	// (0x000021a4) list_single_graphic_pane_g2_cp2_ParamLimits

0x21a4,	// (0x000021a4) list_single_graphic_pane_g2_cp2

0x21b0,	// (0x000021b0) list_single_graphic_pane_g3_cp2

0x4164,	// (0x00004164) list_single_graphic_pane_t1_cp2_ParamLimits

0x4164,	// (0x00004164) list_single_graphic_pane_t1_cp2

0x21a4,	// (0x000021a4) list_single_number_pane_g1_cp2_ParamLimits

0x21a4,	// (0x000021a4) list_single_number_pane_g1_cp2

0x21b0,	// (0x000021b0) list_single_number_pane_g2_cp2

0x4164,	// (0x00004164) list_single_number_pane_t1_cp2_ParamLimits

0x4164,	// (0x00004164) list_single_number_pane_t1_cp2

0x417a,	// (0x0000417a) list_single_number_pane_t2_cp2_ParamLimits

0x417a,	// (0x0000417a) list_single_number_pane_t2_cp2

0x20c3,	// (0x000020c3) list_double2_pane_g1_cp2_ParamLimits

0x20c3,	// (0x000020c3) list_double2_pane_g1_cp2

0x20d2,	// (0x000020d2) list_double2_pane_g2_cp2

0x21f2,	// (0x000021f2) list_double2_pane_t1_cp2_ParamLimits

0x21f2,	// (0x000021f2) list_double2_pane_t1_cp2

0x2208,	// (0x00002208) list_double2_pane_t2_cp2_ParamLimits

0x2208,	// (0x00002208) list_double2_pane_t2_cp2

0x221a,	// (0x0000221a) list_double_pane_g1_cp2_ParamLimits

0x221a,	// (0x0000221a) list_double_pane_g1_cp2

0x2226,	// (0x00002226) list_double_pane_g2_cp2

0x222e,	// (0x0000222e) list_double_pane_t1_cp2_ParamLimits

0x222e,	// (0x0000222e) list_double_pane_t1_cp2

0x2244,	// (0x00002244) list_double_pane_t2_cp2_ParamLimits

0x2244,	// (0x00002244) list_double_pane_t2_cp2

0x226c,	// (0x0000226c) list_single_pane_cp2_g3

0x21a4,	// (0x000021a4) list_single_pane_g1_cp2_ParamLimits

0x21a4,	// (0x000021a4) list_single_pane_g1_cp2

0x21b0,	// (0x000021b0) list_single_pane_g2_cp2

0x227c,	// (0x0000227c) list_single_pane_t1_cp2_ParamLimits

0x227c,	// (0x0000227c) list_single_pane_t1_cp2

0x2294,	// (0x00002294) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2294,	// (0x00002294) list_single_large_graphic_pane_g1_cp2

0x22a0,	// (0x000022a0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x22a0,	// (0x000022a0) list_single_large_graphic_pane_g2_cp2

0x22ac,	// (0x000022ac) list_single_large_graphic_pane_g3_cp2

0x22b4,	// (0x000022b4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x22b4,	// (0x000022b4) list_single_large_graphic_pane_g4_cp1

0x22ce,	// (0x000022ce) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x22ce,	// (0x000022ce) list_single_large_graphic_pane_t1_cp2

0x4001,	// (0x00004001) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4001,	// (0x00004001) list_single_graphic_heading_pane_g1_cp2

0x3fdc,	// (0x00003fdc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3fdc,	// (0x00003fdc) list_single_graphic_heading_pane_g4_cp2

0x21b0,	// (0x000021b0) list_single_graphic_heading_pane_g5_cp2

0x21b8,	// (0x000021b8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x21b8,	// (0x000021b8) list_single_graphic_heading_pane_t1_cp2

0x400d,	// (0x0000400d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x400d,	// (0x0000400d) list_single_graphic_heading_pane_t2_cp2

0x3fd0,	// (0x00003fd0) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3fd0,	// (0x00003fd0) list_single_2graphic_pane_g1_cp2

0x3fdc,	// (0x00003fdc) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3fdc,	// (0x00003fdc) list_single_2graphic_pane_g2_cp2

0x21b0,	// (0x000021b0) list_single_2graphic_pane_g3_cp2

0x32d4,	// (0x000032d4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x32d4,	// (0x000032d4) list_single_2graphic_pane_g4_cp2

0x3feb,	// (0x00003feb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3feb,	// (0x00003feb) list_single_2graphic_pane_t1_cp2

0x002a,	// (0x0000002a) list_highlight_pane_g10_cp1

0x3bca,	// (0x00003bca) list_highlight_pane_g1_cp1

0x3bd2,	// (0x00003bd2) list_highlight_pane_g2_cp1

0x3bda,	// (0x00003bda) list_highlight_pane_g3_cp1

0x3be2,	// (0x00003be2) list_highlight_pane_g4_cp1

0x3bea,	// (0x00003bea) list_highlight_pane_g5_cp1

0x3bf2,	// (0x00003bf2) list_highlight_pane_g6_cp1

0x3bfa,	// (0x00003bfa) list_highlight_pane_g7_cp1

0x3c02,	// (0x00003c02) list_highlight_pane_g8_cp1

0x3c0a,	// (0x00003c0a) list_highlight_pane_g9_cp1

0xc419,	// (0x0000c419) form_field_slider_pane_t3

0xc427,	// (0x0000c427) form_field_slider_pane_t4

0x3b14,	// (0x00003b14) slider_form_pane_ParamLimits

0x3b14,	// (0x00003b14) slider_form_pane

0x024e,	// (0x0000024e) control_abbreviations

0x024e,	// (0x0000024e) control_conventions

0x024e,	// (0x0000024e) control_definitions

0x024e,	// (0x0000024e) format_table_attribute

0x43e7,	// (0x000043e7) bg_popup_preview_window_pane_g9

0x024e,	// (0x0000024e) format_table_data2

0x024e,	// (0x0000024e) format_table_data3

0x024e,	// (0x0000024e) format_table_data_example

0x0008,

0x024e,	// (0x0000024e) intro_purpose

0xa3d2,	// (0x0000a3d2) bg_popup_preview_window_pane_g

0x024e,	// (0x0000024e) texts_category

0x024e,	// (0x0000024e) texts_graphics

0x22e4,	// (0x000022e4) text_digital

0x22f3,	// (0x000022f3) text_primary

0x2302,	// (0x00002302) text_primary_small

0x2311,	// (0x00002311) text_secondary

0x2320,	// (0x00002320) text_title

0x4c18,	// (0x00004c18) bg_passive_tab_pane_g1_cp3_srt

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp3_srt

0x4c21,	// (0x00004c21) bg_passive_tab_pane_g3_cp3_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt

0x4c2a,	// (0x00004c2a) tabs_4_active_pane_srt_g1

0xac9b,	// (0x0000ac9b) tabs_4_active_pane_srt_t1_ParamLimits

0xac9b,	// (0x0000ac9b) tabs_4_active_pane_srt_t1

0x4c18,	// (0x00004c18) bg_active_tab_pane_g1_cp3_copy1

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp3_copy1

0x4c21,	// (0x00004c21) bg_active_tab_pane_g3_cp3_copy1

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp4_srt

0x485e,	// (0x0000485e) bg_passive_tab_pane_g1_cp4_srt

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp4_srt

0x4867,	// (0x00004867) bg_passive_tab_pane_g3_cp4_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt

0xb448,	// (0x0000b448) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb448,	// (0x0000b448) tabs_2_long_active_pane_srt_t1

0x485e,	// (0x0000485e) bg_active_tab_pane_g1_cp4_srt

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp4_srt

0x4867,	// (0x00004867) bg_active_tab_pane_g3_cp4_srt

0x0797,	// (0x00000797) tabs_3_long_active_pane_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_active_pane_srt

0x0797,	// (0x00000797) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_passive_pane_cp_srt

0x0797,	// (0x00000797) tabs_3_long_passive_pane_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_passive_pane_srt

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp5_srt

0x2077,	// (0x00002077) bg_passive_tab_pane_g1_cp5_srt

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp5_srt

0x2080,	// (0x00002080) bg_passive_tab_pane_g3_cp5_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt

0xb45f,	// (0x0000b45f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb45f,	// (0x0000b45f) tabs_3_long_active_pane_srt_t1

0x2077,	// (0x00002077) bg_active_tab_pane_g1_cp5_srt

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp5_srt

0x2080,	// (0x00002080) bg_active_tab_pane_g3_cp5_srt

0x4850,	// (0x00004850) navi_text_pane_srt_t1

0x4848,	// (0x00004848) navi_icon_pane_srt_g1

0x2590,	// (0x00002590) midp_editing_number_pane_srt

0x232f,	// (0x0000232f) midp_ticker_pane_srt

0x2598,	// (0x00002598) midp_ticker_pane_srt_g1

0x25a0,	// (0x000025a0) midp_ticker_pane_srt_g2

0x0001,

0xa261,	// (0x0000a261) midp_ticker_pane_srt_g

0x25a8,	// (0x000025a8) midp_ticker_pane_srt_t1

0x4839,	// (0x00004839) midp_editing_number_pane_t1_copy1

0xb749,	// (0x0000b749) listscroll_midp_pane

0xb749,	// (0x0000b749) midp_form_pane

0x239f,	// (0x0000239f) midp_info_popup_window_ParamLimits

0x239f,	// (0x0000239f) midp_info_popup_window

0x1423,	// (0x00001423) bg_popup_sub_pane_cp50_ParamLimits

0x1423,	// (0x00001423) bg_popup_sub_pane_cp50

0x3815,	// (0x00003815) listscroll_midp_info_pane_ParamLimits

0x3815,	// (0x00003815) listscroll_midp_info_pane

0x37fd,	// (0x000037fd) listscroll_form_midp_pane_ParamLimits

0x37fd,	// (0x000037fd) listscroll_form_midp_pane

0x3809,	// (0x00003809) scroll_bar_cp050

0xc40d,	// (0x0000c40d) list_midp_pane

0x592f,	// (0x0000592f) signal_pane_g2_cp

0x3717,	// (0x00003717) listscroll_midp_info_pane_t1_ParamLimits

0x3717,	// (0x00003717) listscroll_midp_info_pane_t1

0x372f,	// (0x0000372f) listscroll_midp_info_pane_t2_ParamLimits

0x372f,	// (0x0000372f) listscroll_midp_info_pane_t2

0x376d,	// (0x0000376d) listscroll_midp_info_pane_t3_ParamLimits

0x376d,	// (0x0000376d) listscroll_midp_info_pane_t3

0x37a7,	// (0x000037a7) listscroll_midp_info_pane_t4_ParamLimits

0x37a7,	// (0x000037a7) listscroll_midp_info_pane_t4

0x0003,

0xa30d,	// (0x0000a30d) listscroll_midp_info_pane_t_ParamLimits

0xa30d,	// (0x0000a30d) listscroll_midp_info_pane_t

0x14d2,	// (0x000014d2) scroll_pane_cp21

0x36bb,	// (0x000036bb) form_midp_field_choice_group_pane

0x36c4,	// (0x000036c4) form_midp_field_text_pane

0x36fd,	// (0x000036fd) form_midp_field_time_pane

0x3705,	// (0x00003705) form_midp_gauge_slider_pane

0x370e,	// (0x0000370e) form_midp_gauge_wait_pane

0x024e,	// (0x0000024e) form_midp_image_pane

0xc3f7,	// (0x0000c3f7) list_single_midp_pane_ParamLimits

0xc3f7,	// (0x0000c3f7) list_single_midp_pane

0x3674,	// (0x00003674) form_midp_field_text_pane_t1

0x33f3,	// (0x000033f3) input_focus_pane_cp050

0x3695,	// (0x00003695) list_midp_form_text_pane

0x3643,	// (0x00003643) form_midp_field_choice_group_pane_t1

0x3651,	// (0x00003651) input_focus_pane_cp051

0x3665,	// (0x00003665) list_midp_choice_pane

0x024e,	// (0x0000024e) status_idle_pane

0x3627,	// (0x00003627) form_midp_field_time_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g2_copy1

0x3635,	// (0x00003635) form_midp_field_time_pane_t2

0x0001,

0x2449,	// (0x00002449) aid_navinavi_width_2_pane

0xa308,	// (0x0000a308) form_midp_field_time_pane_t

0x024e,	// (0x0000024e) input_focus_pane_cp052

0x024e,	// (0x0000024e) bg_input_focus_pane_cp040

0x35e7,	// (0x000035e7) form_midp_gauge_slider_pane_t1

0x35f5,	// (0x000035f5) form_midp_gauge_slider_pane_t2

0xc3db,	// (0x0000c3db) form_midp_gauge_slider_pane_t3

0xc3e9,	// (0x0000c3e9) form_midp_gauge_slider_pane_t4

0x0003,

0xe8ef,	// (0x0000e8ef) form_midp_gauge_slider_pane_t

0x361f,	// (0x0000361f) form_midp_slider_pane

0x0474,	// (0x00000474) bg_input_focus_pane_cp041_ParamLimits

0x0474,	// (0x00000474) bg_input_focus_pane_cp041

0x35b7,	// (0x000035b7) form_midp_gauge_wait_pane_t1_ParamLimits

0x35b7,	// (0x000035b7) form_midp_gauge_wait_pane_t1

0x35c9,	// (0x000035c9) form_midp_gauge_wait_pane_t2_ParamLimits

0x35c9,	// (0x000035c9) form_midp_gauge_wait_pane_t2

0x0001,

0xa2fa,	// (0x0000a2fa) form_midp_gauge_wait_pane_t_ParamLimits

0xa2fa,	// (0x0000a2fa) form_midp_gauge_wait_pane_t

0x35db,	// (0x000035db) form_midp_wait_pane_ParamLimits

0x35db,	// (0x000035db) form_midp_wait_pane

0x3581,	// (0x00003581) form_midp_image_pane_g1

0x358a,	// (0x0000358a) form_midp_image_pane_t1

0x3599,	// (0x00003599) form_midp_image_pane_t2

0x35a8,	// (0x000035a8) form_midp_image_pane_t3

0x0002,

0xa2f3,	// (0x0000a2f3) form_midp_image_pane_t

0x3569,	// (0x00003569) list_single_midp_pane_g1

0x3572,	// (0x00003572) list_single_midp_pane_t1

0x3555,	// (0x00003555) list_midp_form_item_pane_ParamLimits

0x3555,	// (0x00003555) list_midp_form_item_pane

0x23f1,	// (0x000023f1) list_midp_form_item_pane_t1

0x2400,	// (0x00002400) midp_ticker_pane_g1

0x240c,	// (0x0000240c) midp_ticker_pane_g2

0x0001,

0xa247,	// (0x0000a247) midp_ticker_pane_g

0x2418,	// (0x00002418) midp_ticker_pane_t1

0x4839,	// (0x00004839) midp_editing_number_pane_t1

0x4ac2,	// (0x00004ac2) midp_editing_number_pane

0x4ace,	// (0x00004ace) midp_ticker_pane

0x4817,	// (0x00004817) ai_message_heading_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp14

0x481f,	// (0x0000481f) listscroll_ai_message_pane

0x47a1,	// (0x000047a1) ai_message_heading_pane_g1_ParamLimits

0x47a1,	// (0x000047a1) ai_message_heading_pane_g1

0x47ad,	// (0x000047ad) ai_message_heading_pane_g2_ParamLimits

0x47ad,	// (0x000047ad) ai_message_heading_pane_g2

0x47b9,	// (0x000047b9) ai_message_heading_pane_g3_ParamLimits

0x47b9,	// (0x000047b9) ai_message_heading_pane_g3

0x47c5,	// (0x000047c5) ai_message_heading_pane_g4_ParamLimits

0x47c5,	// (0x000047c5) ai_message_heading_pane_g4

0x0003,

0xa434,	// (0x0000a434) ai_message_heading_pane_g_ParamLimits

0xa434,	// (0x0000a434) ai_message_heading_pane_g

0x47d1,	// (0x000047d1) ai_message_heading_pane_t1_ParamLimits

0x47d1,	// (0x000047d1) ai_message_heading_pane_t1

0x47eb,	// (0x000047eb) ai_message_heading_pane_t2_ParamLimits

0x47eb,	// (0x000047eb) ai_message_heading_pane_t2

0x0001,

0xa43d,	// (0x0000a43d) ai_message_heading_pane_t_ParamLimits

0xa43d,	// (0x0000a43d) ai_message_heading_pane_t

0x47fd,	// (0x000047fd) bg_popup_heading_pane_cp1_ParamLimits

0x47fd,	// (0x000047fd) bg_popup_heading_pane_cp1

0x478f,	// (0x0000478f) list_ai_message_pane_ParamLimits

0x478f,	// (0x0000478f) list_ai_message_pane

0x14d2,	// (0x000014d2) scroll_pane_cp10

0x46db,	// (0x000046db) list_ai_message_pane_g1

0x46e3,	// (0x000046e3) list_ai_message_pane_g2

0x0001,

0xa411,	// (0x0000a411) list_ai_message_pane_g

0x46eb,	// (0x000046eb) list_ai_message_pane_t1_ParamLimits

0x46eb,	// (0x000046eb) list_ai_message_pane_t1

0x4700,	// (0x00004700) list_ai_message_pane_t2_ParamLimits

0x4700,	// (0x00004700) list_ai_message_pane_t2

0x4715,	// (0x00004715) list_ai_message_pane_t3_ParamLimits

0x4715,	// (0x00004715) list_ai_message_pane_t3

0x472a,	// (0x0000472a) list_ai_message_pane_t4_ParamLimits

0x472a,	// (0x0000472a) list_ai_message_pane_t4

0x0003,

0xa416,	// (0x0000a416) list_ai_message_pane_t_ParamLimits

0xa416,	// (0x0000a416) list_ai_message_pane_t

0x46c9,	// (0x000046c9) cell_ai_soft_ind_pane_ParamLimits

0x46c9,	// (0x000046c9) cell_ai_soft_ind_pane

0x242a,	// (0x0000242a) cell_ai_soft_ind_pane_g1_ParamLimits

0x242a,	// (0x0000242a) cell_ai_soft_ind_pane_g1

0x024e,	// (0x0000024e) grid_highlight_cp1

0x2437,	// (0x00002437) text_secondary_cp56_ParamLimits

0x2437,	// (0x00002437) text_secondary_cp56

0x469e,	// (0x0000469e) example_general_pane_ParamLimits

0x469e,	// (0x0000469e) example_general_pane

0x46aa,	// (0x000046aa) example_parent_pane_g1_ParamLimits

0x46aa,	// (0x000046aa) example_parent_pane_g1

0x46b6,	// (0x000046b6) example_parent_pane_t1_ParamLimits

0x46b6,	// (0x000046b6) example_parent_pane_t1

0xbd01,	// (0x0000bd01) popup_preview_text_window_ParamLimits

0xbd01,	// (0x0000bd01) popup_preview_text_window

0x2274,	// (0x00002274) list_single_pane_cp2_g4

0x0873,	// (0x00000873) bg_popup_preview_window_pane_ParamLimits

0x0873,	// (0x00000873) bg_popup_preview_window_pane

0x43ef,	// (0x000043ef) popup_preview_text_window_t1_ParamLimits

0x43ef,	// (0x000043ef) popup_preview_text_window_t1

0x440d,	// (0x0000440d) popup_preview_text_window_t2_ParamLimits

0x440d,	// (0x0000440d) popup_preview_text_window_t2

0x4456,	// (0x00004456) popup_preview_text_window_t3_ParamLimits

0x4456,	// (0x00004456) popup_preview_text_window_t3

0x449b,	// (0x0000449b) popup_preview_text_window_t4_ParamLimits

0x449b,	// (0x0000449b) popup_preview_text_window_t4

0x0004,

0xa3e5,	// (0x0000a3e5) popup_preview_text_window_t_ParamLimits

0xa3e5,	// (0x0000a3e5) popup_preview_text_window_t

0x4519,	// (0x00004519) scroll_pane_cp11

0x3269,	// (0x00003269) bg_popup_preview_window_pane_g1

0x43af,	// (0x000043af) bg_popup_preview_window_pane_g2

0x43b7,	// (0x000043b7) bg_popup_preview_window_pane_g3

0x43bf,	// (0x000043bf) bg_popup_preview_window_pane_g4

0x43c7,	// (0x000043c7) bg_popup_preview_window_pane_g5

0x43cf,	// (0x000043cf) bg_popup_preview_window_pane_g6

0x43d7,	// (0x000043d7) bg_popup_preview_window_pane_g7

0x43df,	// (0x000043df) bg_popup_preview_window_pane_g8

0x003c,	// (0x0000003c) aid_popup_width_pane

0xbc83,	// (0x0000bc83) popup_midp_note_alarm_window_ParamLimits

0xbc83,	// (0x0000bc83) popup_midp_note_alarm_window

0x11e2,	// (0x000011e2) data_form_pane_ParamLimits

0xb32d,	// (0x0000b32d) form_field_data_pane_g1

0xb337,	// (0x0000b337) form_field_data_pane_t1_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_ParamLimits

0x121c,	// (0x0000121c) data_form_wide_pane_ParamLimits

0x1228,	// (0x00001228) form_field_data_wide_pane_g1

0x1248,	// (0x00001248) form_field_data_wide_pane_t1_ParamLimits

0x0aff,	// (0x00000aff) input_focus_pane_cp6_ParamLimits

0xb426,	// (0x0000b426) input_popup_find_pane_g1_ParamLimits

0xb426,	// (0x0000b426) input_popup_find_pane_g1

0x17d5,	// (0x000017d5) aid_navi_side_left_pane

0x17e5,	// (0x000017e5) aid_navi_side_right_pane

0x3cb3,	// (0x00003cb3) bg_popup_window_pane_cp30_ParamLimits

0x3cb3,	// (0x00003cb3) bg_popup_window_pane_cp30

0x3d2d,	// (0x00003d2d) popup_midp_note_alarm_window_g1_ParamLimits

0x3d2d,	// (0x00003d2d) popup_midp_note_alarm_window_g1

0x3d5d,	// (0x00003d5d) popup_midp_note_alarm_window_t1_ParamLimits

0x3d5d,	// (0x00003d5d) popup_midp_note_alarm_window_t1

0x3dfe,	// (0x00003dfe) popup_midp_note_alarm_window_t2_ParamLimits

0x3dfe,	// (0x00003dfe) popup_midp_note_alarm_window_t2

0x3eac,	// (0x00003eac) popup_midp_note_alarm_window_t3_ParamLimits

0x3eac,	// (0x00003eac) popup_midp_note_alarm_window_t3

0x3ed4,	// (0x00003ed4) popup_midp_note_alarm_window_t4_ParamLimits

0x3ed4,	// (0x00003ed4) popup_midp_note_alarm_window_t4

0x3ef4,	// (0x00003ef4) popup_midp_note_alarm_window_t5_ParamLimits

0x3ef4,	// (0x00003ef4) popup_midp_note_alarm_window_t5

0x000a,

0xa382,	// (0x0000a382) popup_midp_note_alarm_window_t_ParamLimits

0xa382,	// (0x0000a382) popup_midp_note_alarm_window_t

0x3fa0,	// (0x00003fa0) wait_bar_pane_cp1_ParamLimits

0x3fa0,	// (0x00003fa0) wait_bar_pane_cp1

0x024e,	// (0x0000024e) wait_anim_pane_copy1

0x024e,	// (0x0000024e) wait_border_pane_copy1

0x39c5,	// (0x000039c5) wait_border_pane_g1_copy1

0x125f,	// (0x0000125f) form_field_popup_pane_g1

0xb34f,	// (0x0000b34f) form_field_popup_pane_t1_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_cp7_ParamLimits

0x11e2,	// (0x000011e2) list_form_pane_ParamLimits

0x127f,	// (0x0000127f) form_field_popup_wide_pane_g1

0x1287,	// (0x00001287) form_field_popup_wide_pane_t1_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_cp8_ParamLimits

0x129c,	// (0x0000129c) list_form_wide_pane_ParamLimits

0x4c98,	// (0x00004c98) aid_size_cell_graphic_pane

0xb3cc,	// (0x0000b3cc) data_form_pane_t1_ParamLimits

0xc85b,	// (0x0000c85b) data_form_wide_pane_t1_ParamLimits

0xc05f,	// (0x0000c05f) bg_status_flat_pane

0xabf8,	// (0x0000abf8) title_pane_t1_ParamLimits

0x043c,	// (0x0000043c) title_pane_t2_ParamLimits

0x0462,	// (0x00000462) title_pane_t3_ParamLimits

0xe7b4,	// (0x0000e7b4) title_pane_t_ParamLimits

0xb537,	// (0x0000b537) level_1_signal_ParamLimits

0xb549,	// (0x0000b549) level_2_signal_ParamLimits

0xb55c,	// (0x0000b55c) level_3_signal_ParamLimits

0xb56f,	// (0x0000b56f) level_4_signal_ParamLimits

0xb582,	// (0x0000b582) level_5_signal_ParamLimits

0xb595,	// (0x0000b595) level_6_signal_ParamLimits

0xb5a8,	// (0x0000b5a8) level_7_signal_ParamLimits

0xb537,	// (0x0000b537) level_1_battery_ParamLimits

0xb549,	// (0x0000b549) level_2_battery_ParamLimits

0xb55c,	// (0x0000b55c) level_3_battery_ParamLimits

0xb56f,	// (0x0000b56f) level_4_battery_ParamLimits

0xb582,	// (0x0000b582) level_5_battery_ParamLimits

0xb595,	// (0x0000b595) level_6_battery_ParamLimits

0xb5a8,	// (0x0000b5a8) level_7_battery_ParamLimits

0x3bca,	// (0x00003bca) bg_status_flat_pane_g1

0x3bd2,	// (0x00003bd2) bg_status_flat_pane_g2

0x3bda,	// (0x00003bda) bg_status_flat_pane_g3

0x3be2,	// (0x00003be2) bg_status_flat_pane_g4

0x3bea,	// (0x00003bea) bg_status_flat_pane_g5

0x3bf2,	// (0x00003bf2) bg_status_flat_pane_g6

0x3bfa,	// (0x00003bfa) bg_status_flat_pane_g7

0xac85,	// (0x0000ac85) tabs_3_active_pane_t1_ParamLimits

0xac85,	// (0x0000ac85) tabs_3_passive_pane_t1_ParamLimits

0xac9b,	// (0x0000ac9b) tabs_4_active_pane_t1_ParamLimits

0xac9b,	// (0x0000ac9b) tabs_4_1_passive_pane_t1_ParamLimits

0xb432,	// (0x0000b432) tabs_2_active_pane_t1_ParamLimits

0xb432,	// (0x0000b432) tabs_2_passive_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_ParamLimits

0xb448,	// (0x0000b448) tabs_2_long_active_pane_t1_ParamLimits

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp4_ParamLimits

0x3322,	// (0x00003322) list_single_midp_graphic_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_ParamLimits

0xb45f,	// (0x0000b45f) tabs_3_long_active_pane_t1_ParamLimits

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp5_ParamLimits

0x3322,	// (0x00003322) list_single_midp_graphic_pane_t1

0xc05f,	// (0x0000c05f) bg_status_flat_pane_ParamLimits

0x2ea6,	// (0x00002ea6) indicator_pane_cp2_ParamLimits

0x2ea6,	// (0x00002ea6) indicator_pane_cp2

0xc1c5,	// (0x0000c1c5) navi_pane_srt_ParamLimits

0xc1c5,	// (0x0000c1c5) navi_pane_srt

0x2fee,	// (0x00002fee) popup_clock_digital_analogue_window_cp1

0x05f2,	// (0x000005f2) indicator_pane_t1

0x232f,	// (0x0000232f) copy_highlight_pane

0x232f,	// (0x0000232f) cursor_graphics_pane

0x232f,	// (0x0000232f) graphic_within_text_pane

0x232f,	// (0x0000232f) link_highlight_pane

0x44dc,	// (0x000044dc) popup_preview_text_window_t5_ParamLimits

0x44dc,	// (0x000044dc) popup_preview_text_window_t5

0x2451,	// (0x00002451) cursor_digital_pane

0x2451,	// (0x00002451) cursor_primary_pane

0x2462,	// (0x00002462) cursor_primary_small_pane

0x246a,	// (0x0000246a) cursor_secondary_pane

0x2472,	// (0x00002472) cursor_title_pane

0x2451,	// (0x00002451) link_highlight_digital_pane

0x2459,	// (0x00002459) link_highlight_primary_pane

0x2462,	// (0x00002462) link_highlight_primary_small_pane

0x246a,	// (0x0000246a) link_highlight_secondary_pane

0x2472,	// (0x00002472) link_highlight_title_pane

0x2451,	// (0x00002451) copy_highlight_digital_pane

0x2451,	// (0x00002451) copy_highlight_primary_pane

0x2462,	// (0x00002462) copy_highlight_primary_small_pane

0x246a,	// (0x0000246a) copy_highlight_secondary_pane

0x2472,	// (0x00002472) copy_highlight_title_pane

0x246a,	// (0x0000246a) graphic_text_digital_pane

0x3c62,	// (0x00003c62) graphic_text_primary_pane

0x3c6b,	// (0x00003c6b) graphic_text_primary_small_pane

0x2462,	// (0x00002462) graphic_text_secondary_pane

0x2451,	// (0x00002451) graphic_text_title_pane

0xb7e5,	// (0x0000b7e5) cursor_primary_pane_g1

0x3c54,	// (0x00003c54) cursor_text_primary_t1

0xc449,	// (0x0000c449) cursor_primary_small_pane_g1

0x3c46,	// (0x00003c46) cursor_text_primary_small_t1

0xc43f,	// (0x0000c43f) cursor_primary_small_pane_g1_copy1

0x3c30,	// (0x00003c30) cursor_text_primary_small_t1_copy1

0x3c12,	// (0x00003c12) cursor_text_title_t1

0xc435,	// (0x0000c435) cursor_title_pane_g1

0xb7e5,	// (0x0000b7e5) cursor_digital_pane_g1

0x2482,	// (0x00002482) cursor_text_digital_t1

0x2490,	// (0x00002490) link_highlight_primary_pane_g1

0x3bbb,	// (0x00003bbb) link_highlight_primary_pane_t1

0x2490,	// (0x00002490) link_highlight_primary_small_pane_g1

0x2498,	// (0x00002498) link_highlight_primary_small_pane_t1

0x24a7,	// (0x000024a7) link_highlight_secondary_pane_g1

0x24af,	// (0x000024af) link_highlight_secondary_pane_t1

0x3b20,	// (0x00003b20) link_highlight_title_pane_g1

0x3b37,	// (0x00003b37) link_highlight_title_pane_t1

0x3b20,	// (0x00003b20) link_highlight_digital_pane_g1

0x3b28,	// (0x00003b28) link_highlight_digital_pane_t1

0x39e0,	// (0x000039e0) copy_highlight_primary_pane_g1

0x3a06,	// (0x00003a06) copy_highlight_primary_pane_t1

0x39e0,	// (0x000039e0) copy_highlight_primary_small_pane_g1

0x39f7,	// (0x000039f7) copy_highlight_primary_small_pane_t1

0x24be,	// (0x000024be) copy_highlight_secondary_pane_g1

0x24c6,	// (0x000024c6) copy_highlight_secondary_pane_t1

0x39e0,	// (0x000039e0) copy_highlight_title_pane_g1

0x39e8,	// (0x000039e8) copy_highlight_title_pane_t1

0x39e0,	// (0x000039e0) copy_highlight_digital_pane_g1

0x4ebc,	// (0x00004ebc) copy_highlight_digital_pane_t1

0x4e10,	// (0x00004e10) graphic_text_primary_pane_g1

0x4ea0,	// (0x00004ea0) graphic_text_primary_pane_t1

0x4eae,	// (0x00004eae) graphic_text_primary_pane_t2

0x0001,

0xa4ac,	// (0x0000a4ac) graphic_text_primary_pane_t

0x4e7c,	// (0x00004e7c) graphic_text_primary_small_pane_g1

0x4e84,	// (0x00004e84) graphic_text_primary_small_pane_t1

0x4e92,	// (0x00004e92) graphic_text_primary_small_pane_t2

0x0001,

0xa4a7,	// (0x0000a4a7) graphic_text_primary_small_pane_t

0x4e58,	// (0x00004e58) graphic_text_secondary_pane_g1

0x4e60,	// (0x00004e60) graphic_text_secondary_pane_t1

0x4e6e,	// (0x00004e6e) graphic_text_secondary_pane_t2

0x0001,

0xa4a2,	// (0x0000a4a2) graphic_text_secondary_pane_t

0x4e34,	// (0x00004e34) graphic_text_title_pane_g1

0x4e3c,	// (0x00004e3c) graphic_text_title_pane_t1

0x4e4a,	// (0x00004e4a) graphic_text_title_pane_t2

0x0001,

0xa49d,	// (0x0000a49d) graphic_text_title_pane_t

0x4e10,	// (0x00004e10) graphic_text_digital_pane_g1

0x4e18,	// (0x00004e18) graphic_text_digital_pane_t1

0x4e26,	// (0x00004e26) graphic_text_digital_pane_t2

0x0001,

0xa498,	// (0x0000a498) graphic_text_digital_pane_t

0x0474,	// (0x00000474) navi_icon_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_icon_pane_srt

0x024e,	// (0x0000024e) navi_midp_pane_srt

0x024e,	// (0x0000024e) navi_navi_pane_srt

0x0474,	// (0x00000474) navi_text_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_text_pane_srt

0x4368,	// (0x00004368) navi_navi_icon_text_pane_srt

0x4370,	// (0x00004370) navi_navi_pane_srt_g1_ParamLimits

0x4370,	// (0x00004370) navi_navi_pane_srt_g1

0x4382,	// (0x00004382) navi_navi_pane_srt_g2_ParamLimits

0x4382,	// (0x00004382) navi_navi_pane_srt_g2

0x0001,

0xa3cd,	// (0x0000a3cd) navi_navi_pane_srt_g_ParamLimits

0xa3cd,	// (0x0000a3cd) navi_navi_pane_srt_g

0x4394,	// (0x00004394) navi_navi_tabs_pane_srt

0x4368,	// (0x00004368) navi_navi_text_pane_srt

0x4368,	// (0x00004368) navi_navi_volume_pane_srt

0x4e01,	// (0x00004e01) navi_navi_text_pane_srt_t1

0x4ddc,	// (0x00004ddc) navi_navi_volume_pane_srt_g1

0x4de4,	// (0x00004de4) volume_small_pane_srt_ParamLimits

0x4de4,	// (0x00004de4) volume_small_pane_srt

0x24d5,	// (0x000024d5) volume_small_pane_srt_g1_ParamLimits

0x24d5,	// (0x000024d5) volume_small_pane_srt_g1

0x24e5,	// (0x000024e5) volume_small_pane_srt_g2_ParamLimits

0x24e5,	// (0x000024e5) volume_small_pane_srt_g2

0x24f6,	// (0x000024f6) volume_small_pane_srt_g3_ParamLimits

0x24f6,	// (0x000024f6) volume_small_pane_srt_g3

0x2507,	// (0x00002507) volume_small_pane_srt_g4_ParamLimits

0x2507,	// (0x00002507) volume_small_pane_srt_g4

0x2518,	// (0x00002518) volume_small_pane_srt_g5_ParamLimits

0x2518,	// (0x00002518) volume_small_pane_srt_g5

0x2529,	// (0x00002529) volume_small_pane_srt_g6_ParamLimits

0x2529,	// (0x00002529) volume_small_pane_srt_g6

0x253a,	// (0x0000253a) volume_small_pane_srt_g7_ParamLimits

0x253a,	// (0x0000253a) volume_small_pane_srt_g7

0x254b,	// (0x0000254b) volume_small_pane_srt_g8_ParamLimits

0x254b,	// (0x0000254b) volume_small_pane_srt_g8

0x255c,	// (0x0000255c) volume_small_pane_srt_g9_ParamLimits

0x255c,	// (0x0000255c) volume_small_pane_srt_g9

0x256d,	// (0x0000256d) volume_small_pane_srt_g10_ParamLimits

0x256d,	// (0x0000256d) volume_small_pane_srt_g10

0x0009,

0xa24c,	// (0x0000a24c) volume_small_pane_srt_g_ParamLimits

0xa24c,	// (0x0000a24c) volume_small_pane_srt_g

0x091c,	// (0x0000091c) query_popup_data_pane_cp2

0x4dca,	// (0x00004dca) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4dca,	// (0x00004dca) navi_navi_icon_text_pane_srt_t1

0x3c62,	// (0x00003c62) navi_tabs_2_long_pane_srt

0x3c62,	// (0x00003c62) navi_tabs_2_pane_srt

0x3c62,	// (0x00003c62) navi_tabs_3_long_pane_srt

0x3c62,	// (0x00003c62) navi_tabs_3_pane_srt

0x3c62,	// (0x00003c62) navi_tabs_4_pane_srt

0x4da2,	// (0x00004da2) tabs_2_active_pane_srt_ParamLimits

0x4da2,	// (0x00004da2) tabs_2_active_pane_srt

0x4db2,	// (0x00004db2) tabs_2_passive_pane_srt_ParamLimits

0x4db2,	// (0x00004db2) tabs_2_passive_pane_srt

0x33f3,	// (0x000033f3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x33f3,	// (0x000033f3) bg_passive_tab_pane_cp1_srt

0x4d88,	// (0x00004d88) bg_passive_tab_pane_g1_cp1_srt

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp1_srt

0x4d91,	// (0x00004d91) bg_passive_tab_pane_g3_cp1_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt

0x4d9a,	// (0x00004d9a) tabs_2_active_pane_srt_g1

0xb432,	// (0x0000b432) tabs_2_active_pane_srt_t1_ParamLimits

0xb432,	// (0x0000b432) tabs_2_active_pane_srt_t1

0x4d88,	// (0x00004d88) bg_active_tab_pane_g1_cp1_srt

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp1_srt

0x4d91,	// (0x00004d91) bg_active_tab_pane_g3_cp1_srt

0x4d55,	// (0x00004d55) tabs_3_active_pane_srt_ParamLimits

0x4d55,	// (0x00004d55) tabs_3_active_pane_srt

0x4d66,	// (0x00004d66) tabs_3_passive_pane_cp_srt_ParamLimits

0x4d66,	// (0x00004d66) tabs_3_passive_pane_cp_srt

0x4d77,	// (0x00004d77) tabs_3_passive_pane_srt_ParamLimits

0x4d77,	// (0x00004d77) tabs_3_passive_pane_srt

0x33f3,	// (0x000033f3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x33f3,	// (0x000033f3) bg_passive_tab_pane_cp2_srt

0x257e,	// (0x0000257e) bg_passive_tab_pane_g1_cp2_srt

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp2_srt

0x2587,	// (0x00002587) bg_passive_tab_pane_g3_cp2_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt

0x4d4d,	// (0x00004d4d) tabs_3_active_pane_srt_g1

0xac85,	// (0x0000ac85) tabs_3_active_pane_srt_t1_ParamLimits

0xac85,	// (0x0000ac85) tabs_3_active_pane_srt_t1

0x257e,	// (0x0000257e) bg_active_tab_pane_g1_cp2_srt

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp2_srt

0x2587,	// (0x00002587) bg_active_tab_pane_g3_cp2_srt

0x4d05,	// (0x00004d05) tabs_4_active_pane_srt_ParamLimits

0x4d05,	// (0x00004d05) tabs_4_active_pane_srt

0x4d17,	// (0x00004d17) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4d17,	// (0x00004d17) tabs_4_passive_pane_cp2_srt

0x2818,	// (0x00002818) aid_size_cell_toolbar

0xb9f3,	// (0x0000b9f3) main_idle_act_pane_ParamLimits

0x2a06,	// (0x00002a06) popup_large_graphic_colour_window_ParamLimits

0xbf51,	// (0x0000bf51) popup_toolbar_window_ParamLimits

0xbf51,	// (0x0000bf51) popup_toolbar_window

0x4af3,	// (0x00004af3) list_single_graphic_2heading_pane_ParamLimits

0x4af3,	// (0x00004af3) list_single_graphic_2heading_pane

0x1845,	// (0x00001845) aid_size_cell_apps_grid_lsc_pane

0x1857,	// (0x00001857) aid_size_cell_apps_grid_prt_pane

0x289b,	// (0x0000289b) bg_wml_button_pane_cp1_ParamLimits

0x289b,	// (0x0000289b) bg_wml_button_pane_cp1

0x3674,	// (0x00003674) form_midp_field_text_pane_t1_ParamLimits

0x33f3,	// (0x000033f3) input_focus_pane_cp050_ParamLimits

0x3695,	// (0x00003695) list_midp_form_text_pane_ParamLimits

0x3651,	// (0x00003651) input_focus_pane_cp051_ParamLimits

0x3665,	// (0x00003665) list_midp_choice_pane_ParamLimits

0x3523,	// (0x00003523) list_single_2graphic_pane_cp3_ParamLimits

0x3523,	// (0x00003523) list_single_2graphic_pane_cp3

0x3536,	// (0x00003536) list_single_midp_graphic_pane_ParamLimits

0x3536,	// (0x00003536) list_single_midp_graphic_pane

0x313a,	// (0x0000313a) list_single_graphic_2heading_pane_g1_ParamLimits

0x313a,	// (0x0000313a) list_single_graphic_2heading_pane_g1

0x0ea6,	// (0x00000ea6) list_single_graphic_2heading_pane_g4_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_2heading_pane_g4

0x0dd1,	// (0x00000dd1) list_single_graphic_2heading_pane_g5_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_graphic_2heading_pane_g5

0x0002,

0xa29f,	// (0x0000a29f) list_single_graphic_2heading_pane_g_ParamLimits

0xa29f,	// (0x0000a29f) list_single_graphic_2heading_pane_g

0x3146,	// (0x00003146) list_single_graphic_2heading_pane_t1_ParamLimits

0x3146,	// (0x00003146) list_single_graphic_2heading_pane_t1

0x315a,	// (0x0000315a) list_single_graphic_2heading_pane_t2_ParamLimits

0x315a,	// (0x0000315a) list_single_graphic_2heading_pane_t2

0x3174,	// (0x00003174) list_single_graphic_2heading_pane_t3_ParamLimits

0x3174,	// (0x00003174) list_single_graphic_2heading_pane_t3

0x0002,

0xa2a6,	// (0x0000a2a6) list_single_graphic_2heading_pane_t_ParamLimits

0xa2a6,	// (0x0000a2a6) list_single_graphic_2heading_pane_t

0x318c,	// (0x0000318c) bg_popup_sub_pane_cp2

0x31b2,	// (0x000031b2) grid_toobar_pane

0x31e8,	// (0x000031e8) cell_toolbar_pane_ParamLimits

0x31e8,	// (0x000031e8) cell_toolbar_pane

0x320f,	// (0x0000320f) cell_toolbar_pane_g1_ParamLimits

0x320f,	// (0x0000320f) cell_toolbar_pane_g1

0x3221,	// (0x00003221) cell_toolbar_pane_g2_ParamLimits

0x3221,	// (0x00003221) cell_toolbar_pane_g2

0x0001,

0xa2ad,	// (0x0000a2ad) cell_toolbar_pane_g_ParamLimits

0xa2ad,	// (0x0000a2ad) cell_toolbar_pane_g

0x3243,	// (0x00003243) grid_highlight_pane_cp2_ParamLimits

0x3243,	// (0x00003243) grid_highlight_pane_cp2

0x325d,	// (0x0000325d) toolbar_button_pane

0x3269,	// (0x00003269) toolbar_button_pane_g1

0x3271,	// (0x00003271) toolbar_button_pane_g2

0x3279,	// (0x00003279) toolbar_button_pane_g3

0x3281,	// (0x00003281) toolbar_button_pane_g4

0x3289,	// (0x00003289) toolbar_button_pane_g5

0x3291,	// (0x00003291) toolbar_button_pane_g6

0x3299,	// (0x00003299) toolbar_button_pane_g7

0x32a1,	// (0x000032a1) toolbar_button_pane_g8

0x32a9,	// (0x000032a9) toolbar_button_pane_g9

0x0009,

0xa2b2,	// (0x0000a2b2) toolbar_button_pane_g

0x32b9,	// (0x000032b9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x32b9,	// (0x000032b9) list_single_2graphic_pane_g1_cp3

0xc343,	// (0x0000c343) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc343,	// (0x0000c343) list_single_2graphic_pane_g2_cp3

0x21b0,	// (0x000021b0) list_single_2graphic_pane_g3_cp3

0x32d4,	// (0x000032d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x32d4,	// (0x000032d4) list_single_2graphic_pane_g4_cp3

0x32e0,	// (0x000032e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x32e0,	// (0x000032e0) list_single_2graphic_pane_t1_cp3

0x21a4,	// (0x000021a4) list_single_midp_graphic_pane_g2_ParamLimits

0x21a4,	// (0x000021a4) list_single_midp_graphic_pane_g2

0x2820,	// (0x00002820) aid_zoom_text_primary

0x2828,	// (0x00002828) aid_zoom_text_secondary

0xb81f,	// (0x0000b81f) status_small_pane_g7_ParamLimits

0xb81f,	// (0x0000b81f) status_small_pane_g7

0xb842,	// (0x0000b842) status_small_pane_t1_ParamLimits

0xabcd,	// (0x0000abcd) title_pane_g2

0x0003,

0xe7ab,	// (0x0000e7ab) title_pane_g

0xaeaf,	// (0x0000aeaf) aid_size_cell_colour_1_pane_ParamLimits

0xaeaf,	// (0x0000aeaf) aid_size_cell_colour_1_pane

0xaec3,	// (0x0000aec3) aid_size_cell_colour_2_pane_ParamLimits

0xaec3,	// (0x0000aec3) aid_size_cell_colour_2_pane

0xaed7,	// (0x0000aed7) aid_size_cell_colour_3_pane_ParamLimits

0xaed7,	// (0x0000aed7) aid_size_cell_colour_3_pane

0xaeeb,	// (0x0000aeeb) aid_size_cell_colour_4_pane_ParamLimits

0xaeeb,	// (0x0000aeeb) aid_size_cell_colour_4_pane

0x16f4,	// (0x000016f4) title_pane_stacon_g1_ParamLimits

0x16f4,	// (0x000016f4) title_pane_stacon_g1

0x3a5d,	// (0x00003a5d) popup_note_wait_window_g3_ParamLimits

0x3a5d,	// (0x00003a5d) popup_note_wait_window_g3

0x3ad3,	// (0x00003ad3) popup_note_wait_window_t5_ParamLimits

0x3ad3,	// (0x00003ad3) popup_note_wait_window_t5

0x024e,	// (0x0000024e) main_feb_china_hwr_fs_writing_pane

0xba54,	// (0x0000ba54) popup_feb_china_hwr_fs_window_ParamLimits

0xba54,	// (0x0000ba54) popup_feb_china_hwr_fs_window

0xc354,	// (0x0000c354) aid_size_cell_hwr_fs_ParamLimits

0xc354,	// (0x0000c354) aid_size_cell_hwr_fs

0x33f3,	// (0x000033f3) bg_popup_sub_pane_cp3_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_sub_pane_cp3

0xc369,	// (0x0000c369) grid_hwr_fs_pane_ParamLimits

0xc369,	// (0x0000c369) grid_hwr_fs_pane

0x3413,	// (0x00003413) linegrid_hwr_fs_pane_ParamLimits

0x3413,	// (0x00003413) linegrid_hwr_fs_pane

0xc381,	// (0x0000c381) cell_hwr_fs_pane_ParamLimits

0xc381,	// (0x0000c381) cell_hwr_fs_pane

0x3441,	// (0x00003441) linegrid_hwr_fs_pane_g1_ParamLimits

0x3441,	// (0x00003441) linegrid_hwr_fs_pane_g1

0xc3a1,	// (0x0000c3a1) linegrid_hwr_fs_pane_g2_ParamLimits

0xc3a1,	// (0x0000c3a1) linegrid_hwr_fs_pane_g2

0x345f,	// (0x0000345f) linegrid_hwr_fs_pane_g3_ParamLimits

0x345f,	// (0x0000345f) linegrid_hwr_fs_pane_g3

0x346b,	// (0x0000346b) linegrid_hwr_fs_pane_g4_ParamLimits

0x346b,	// (0x0000346b) linegrid_hwr_fs_pane_g4

0x3485,	// (0x00003485) linegrid_hwr_fs_pane_g5_ParamLimits

0x3485,	// (0x00003485) linegrid_hwr_fs_pane_g5

0x0004,

0xe8db,	// (0x0000e8db) linegrid_hwr_fs_pane_g_ParamLimits

0xe8db,	// (0x0000e8db) linegrid_hwr_fs_pane_g

0x349b,	// (0x0000349b) cell_hwr_fs_pane_g1_ParamLimits

0x349b,	// (0x0000349b) cell_hwr_fs_pane_g1

0x3078,	// (0x00003078) cell_hwr_fs_pane_g2_ParamLimits

0x3078,	// (0x00003078) cell_hwr_fs_pane_g2

0xc3b3,	// (0x0000c3b3) cell_hwr_fs_pane_g3_ParamLimits

0xc3b3,	// (0x0000c3b3) cell_hwr_fs_pane_g3

0xc3c0,	// (0x0000c3c0) cell_hwr_fs_pane_g4_ParamLimits

0xc3c0,	// (0x0000c3c0) cell_hwr_fs_pane_g4

0x0003,

0xe8e6,	// (0x0000e8e6) cell_hwr_fs_pane_g_ParamLimits

0xe8e6,	// (0x0000e8e6) cell_hwr_fs_pane_g

0xc3cd,	// (0x0000c3cd) cell_hwr_fs_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp6

0x024e,	// (0x0000024e) main_idle_act2_pane

0x14b9,	// (0x000014b9) aid_inside_area_popup_secondary

0xc556,	// (0x0000c556) aid_inside_area_window_primary_ParamLimits

0xc556,	// (0x0000c556) aid_inside_area_window_primary

0x4ecb,	// (0x00004ecb) ai2_news_ticker_pane

0x4ed3,	// (0x00004ed3) aid_size_cell_ai1_link_ParamLimits

0x4ed3,	// (0x00004ed3) aid_size_cell_ai1_link

0xc9a1,	// (0x0000c9a1) popup_ai2_data_window_ParamLimits

0xc9a1,	// (0x0000c9a1) popup_ai2_data_window

0x4f01,	// (0x00004f01) popup_ai2_link_window_ParamLimits

0x4f01,	// (0x00004f01) popup_ai2_link_window

0x33f3,	// (0x000033f3) bg_popup_sub_pane_cp4_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_sub_pane_cp4

0x4f15,	// (0x00004f15) grid_ai2_link_pane_ParamLimits

0x4f15,	// (0x00004f15) grid_ai2_link_pane

0x4f2c,	// (0x00004f2c) popup_ai2_link_window_g1_ParamLimits

0x4f2c,	// (0x00004f2c) popup_ai2_link_window_g1

0x4f38,	// (0x00004f38) popup_ai2_link_window_g2_ParamLimits

0x4f38,	// (0x00004f38) popup_ai2_link_window_g2

0x0001,

0xa4b1,	// (0x0000a4b1) popup_ai2_link_window_g_ParamLimits

0xa4b1,	// (0x0000a4b1) popup_ai2_link_window_g

0x4f47,	// (0x00004f47) ai2_mp_button_pane

0x4f4f,	// (0x00004f4f) ai2_mp_volume_pane

0x3651,	// (0x00003651) bg_popup_sub_pane_cp5_ParamLimits

0x3651,	// (0x00003651) bg_popup_sub_pane_cp5

0x4f57,	// (0x00004f57) heading_ai2_gene_pane_ParamLimits

0x4f57,	// (0x00004f57) heading_ai2_gene_pane

0x4f63,	// (0x00004f63) list_ai2_gene_pane_ParamLimits

0x4f63,	// (0x00004f63) list_ai2_gene_pane

0x4fab,	// (0x00004fab) cell_ai2_link_pane_ParamLimits

0x4fab,	// (0x00004fab) cell_ai2_link_pane

0x4fc1,	// (0x00004fc1) cell_ai2_link_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp7

0x5089,	// (0x00005089) ai2_mp_volume_pane_g1

0x5091,	// (0x00005091) ai2_mp_volume_pane_g2

0xc9cb,	// (0x0000c9cb) list_ai2_gene_pane_t1

0x5099,	// (0x00005099) ai2_mp_volume_pane_g3

0x0002,

0xa4ca,	// (0x0000a4ca) ai2_mp_volume_pane_g

0x50a1,	// (0x000050a1) volume_small_pane_cp3

0x50aa,	// (0x000050aa) aid_size_cell_ai2_button

0x50b2,	// (0x000050b2) grid_ai2_button_pane

0x50bb,	// (0x000050bb) cell_ai2_button_pane_ParamLimits

0x50bb,	// (0x000050bb) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp8

0x5049,	// (0x00005049) ai2_gene_pane_t1_ParamLimits

0x5049,	// (0x00005049) ai2_gene_pane_t1

0xb9be,	// (0x0000b9be) aid_height_parent_landscape

0xc720,	// (0x0000c720) aid_height_set_list

0x4929,	// (0x00004929) aid_size_parent

0x4c98,	// (0x00004c98) aid_size_cell_graphic_pane_ParamLimits

0x4f73,	// (0x00004f73) popup_ai2_data_window_g1_ParamLimits

0x4f73,	// (0x00004f73) popup_ai2_data_window_g1

0x4f7f,	// (0x00004f7f) ai2_news_ticker_pane_g1

0x4f87,	// (0x00004f87) ai2_news_ticker_pane_g2

0x0001,

0xa4b6,	// (0x0000a4b6) ai2_news_ticker_pane_g

0x4f8f,	// (0x00004f8f) ai2_news_ticker_pane_t1

0x4f9d,	// (0x00004f9d) ai2_news_ticker_pane_t2

0x0001,

0xa4bb,	// (0x0000a4bb) ai2_news_ticker_pane_t

0x4c32,	// (0x00004c32) heading_ai2_gene_pane_g1

0x4fca,	// (0x00004fca) heading_ai2_gene_pane_t1_ParamLimits

0x4fca,	// (0x00004fca) heading_ai2_gene_pane_t1

0x4fdf,	// (0x00004fdf) list_highlight_pane_cp6

0xc9b5,	// (0x0000c9b5) ai2_gene_pane_ParamLimits

0xc9b5,	// (0x0000c9b5) ai2_gene_pane

0xc9d9,	// (0x0000c9d9) list_ai2_gene_pane_t2

0x0001,

0xe983,	// (0x0000e983) list_ai2_gene_pane_t

0x501a,	// (0x0000501a) list_highlight_pane_cp8_ParamLimits

0x501a,	// (0x0000501a) list_highlight_pane_cp8

0x502b,	// (0x0000502b) ai2_gene_pane_g1_ParamLimits

0x502b,	// (0x0000502b) ai2_gene_pane_g1

0x503d,	// (0x0000503d) ai2_gene_pane_g2_ParamLimits

0x503d,	// (0x0000503d) ai2_gene_pane_g2

0x0001,

0xa4c5,	// (0x0000a4c5) ai2_gene_pane_g_ParamLimits

0xa4c5,	// (0x0000a4c5) ai2_gene_pane_g

0x0c88,	// (0x00000c88) scroll_pane_cp12

0xb97d,	// (0x0000b97d) control_pane_t3_ParamLimits

0xb97d,	// (0x0000b97d) control_pane_t3

0xb833,	// (0x0000b833) status_small_pane_g8_ParamLimits

0xb833,	// (0x0000b833) status_small_pane_g8

0xbac8,	// (0x0000bac8) popup_find_window_ParamLimits

0xbcbb,	// (0x0000bcbb) popup_note_image_window_ParamLimits

0x0e9a,	// (0x00000e9a) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_double2_graphic_pane_vc_g1

0x0ea6,	// (0x00000ea6) list_double2_graphic_pane_vc_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_double2_graphic_pane_vc_g2

0x0dd1,	// (0x00000dd1) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dd1,	// (0x00000dd1) list_double2_graphic_pane_vc_g3

0x0002,

0xa109,	// (0x0000a109) list_double2_graphic_pane_vc_g_ParamLimits

0xa109,	// (0x0000a109) list_double2_graphic_pane_vc_g

0x0eb2,	// (0x00000eb2) list_double2_graphic_pane_vc_t1_ParamLimits

0x0eb2,	// (0x00000eb2) list_double2_graphic_pane_vc_t1

0x0ea6,	// (0x00000ea6) list_single_heading_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_heading_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_single_heading_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_heading_pane_vc_g2

0x0001,

0xa155,	// (0x0000a155) list_single_heading_pane_vc_g_ParamLimits

0xa155,	// (0x0000a155) list_single_heading_pane_vc_g

0x32fa,	// (0x000032fa) list_single_heading_pane_vc_t1_ParamLimits

0x32fa,	// (0x000032fa) list_single_heading_pane_vc_t1

0x3310,	// (0x00003310) list_single_heading_pane_vc_t2_ParamLimits

0x3310,	// (0x00003310) list_single_heading_pane_vc_t2

0x0001,

0xa2c7,	// (0x0000a2c7) list_single_heading_pane_vc_t_ParamLimits

0xa2c7,	// (0x0000a2c7) list_single_heading_pane_vc_t

0x3338,	// (0x00003338) list_setting_number_pane_vc_g1_ParamLimits

0x3338,	// (0x00003338) list_setting_number_pane_vc_g1

0x3344,	// (0x00003344) list_setting_number_pane_vc_g2_ParamLimits

0x3344,	// (0x00003344) list_setting_number_pane_vc_g2

0x0001,

0xa2cc,	// (0x0000a2cc) list_setting_number_pane_vc_g_ParamLimits

0xa2cc,	// (0x0000a2cc) list_setting_number_pane_vc_g

0x3350,	// (0x00003350) list_setting_number_pane_vc_t1_ParamLimits

0x3350,	// (0x00003350) list_setting_number_pane_vc_t1

0x3364,	// (0x00003364) list_setting_number_pane_vc_t2_ParamLimits

0x3364,	// (0x00003364) list_setting_number_pane_vc_t2

0x3380,	// (0x00003380) list_setting_number_pane_vc_t3_ParamLimits

0x3380,	// (0x00003380) list_setting_number_pane_vc_t3

0x0002,

0xa2d1,	// (0x0000a2d1) list_setting_number_pane_vc_t_ParamLimits

0xa2d1,	// (0x0000a2d1) list_setting_number_pane_vc_t

0x33a6,	// (0x000033a6) set_value_pane_vc_ParamLimits

0x33a6,	// (0x000033a6) set_value_pane_vc

0x4af3,	// (0x00004af3) list_double2_graphic_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double2_graphic_pane_vc

0x4b06,	// (0x00004b06) list_double2_large_graphic_pane_vc_ParamLimits

0x4b06,	// (0x00004b06) list_double2_large_graphic_pane_vc

0x4af3,	// (0x00004af3) list_double2_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double2_pane_vc

0x4af3,	// (0x00004af3) list_double_graphic_heading_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double_graphic_heading_pane_vc

0x4af3,	// (0x00004af3) list_double_graphic_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double_graphic_pane_vc

0x4af3,	// (0x00004af3) list_double_heading_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double_heading_pane_vc

0x4b17,	// (0x00004b17) list_double_large_graphic_pane_vc_ParamLimits

0x4b17,	// (0x00004b17) list_double_large_graphic_pane_vc

0x4af3,	// (0x00004af3) list_double_number_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double_number_pane_vc

0x4af3,	// (0x00004af3) list_double_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double_pane_vc

0x4af3,	// (0x00004af3) list_double_time_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_double_time_pane_vc

0x4af3,	// (0x00004af3) list_setting_number_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_setting_number_pane_vc

0x4af3,	// (0x00004af3) list_setting_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_setting_pane_vc

0x4af3,	// (0x00004af3) list_single_graphic_heading_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_single_graphic_heading_pane_vc

0x4af3,	// (0x00004af3) list_single_heading_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_single_heading_pane_vc

0x4af3,	// (0x00004af3) list_single_number_heading_pane_vc_ParamLimits

0x4af3,	// (0x00004af3) list_single_number_heading_pane_vc

0x0e9a,	// (0x00000e9a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_double_graphic_heading_pane_vc_g1

0x0ea6,	// (0x00000ea6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_graphic_heading_pane_vc_g2

0x0dd1,	// (0x00000dd1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0dd1,	// (0x00000dd1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xa109,	// (0x0000a109) list_double_graphic_heading_pane_vc_g_ParamLimits

0xa109,	// (0x0000a109) list_double_graphic_heading_pane_vc_g

0x50ef,	// (0x000050ef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x50ef,	// (0x000050ef) list_double_graphic_heading_pane_vc_t1

0x5105,	// (0x00005105) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5105,	// (0x00005105) list_double_graphic_heading_pane_vc_t2

0x0001,

0xa4d1,	// (0x0000a4d1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xa4d1,	// (0x0000a4d1) list_double_graphic_heading_pane_vc_t

0x3338,	// (0x00003338) list_setting_pane_vc_g1_ParamLimits

0x3338,	// (0x00003338) list_setting_pane_vc_g1

0x3344,	// (0x00003344) list_setting_pane_vc_g2_ParamLimits

0x3344,	// (0x00003344) list_setting_pane_vc_g2

0x0001,

0xa2cc,	// (0x0000a2cc) list_setting_pane_vc_g_ParamLimits

0xa2cc,	// (0x0000a2cc) list_setting_pane_vc_g

0x534b,	// (0x0000534b) list_setting_pane_vc_t1_ParamLimits

0x534b,	// (0x0000534b) list_setting_pane_vc_t1

0x535f,	// (0x0000535f) list_setting_pane_vc_t2_ParamLimits

0x535f,	// (0x0000535f) list_setting_pane_vc_t2

0x0001,

0xa514,	// (0x0000a514) list_setting_pane_vc_t_ParamLimits

0xa514,	// (0x0000a514) list_setting_pane_vc_t

0x33a6,	// (0x000033a6) set_value_pane_cp_vc_ParamLimits

0x33a6,	// (0x000033a6) set_value_pane_cp_vc

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_vc_g2

0x0001,

0xa155,	// (0x0000a155) list_single_number_heading_pane_vc_g_ParamLimits

0xa155,	// (0x0000a155) list_single_number_heading_pane_vc_g

0x32fa,	// (0x000032fa) list_single_number_heading_pane_vc_t1_ParamLimits

0x32fa,	// (0x000032fa) list_single_number_heading_pane_vc_t1

0x5381,	// (0x00005381) list_single_number_heading_pane_vc_t2_ParamLimits

0x5381,	// (0x00005381) list_single_number_heading_pane_vc_t2

0x5393,	// (0x00005393) list_single_number_heading_pane_vc_t3_ParamLimits

0x5393,	// (0x00005393) list_single_number_heading_pane_vc_t3

0x0002,

0xa519,	// (0x0000a519) list_single_number_heading_pane_vc_t_ParamLimits

0xa519,	// (0x0000a519) list_single_number_heading_pane_vc_t

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_vc_g1

0x0ea6,	// (0x00000ea6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_heading_pane_vc_g4

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa109,	// (0x0000a109) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa109,	// (0x0000a109) list_single_graphic_heading_pane_vc_g

0x32fa,	// (0x000032fa) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x32fa,	// (0x000032fa) list_single_graphic_heading_pane_vc_t1

0x53a5,	// (0x000053a5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53a5,	// (0x000053a5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa520,	// (0x0000a520) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa520,	// (0x0000a520) list_single_graphic_heading_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double2_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double2_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double2_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double2_pane_vc_g2

0x0001,

0xa155,	// (0x0000a155) list_double2_pane_vc_g_ParamLimits

0xa155,	// (0x0000a155) list_double2_pane_vc_g

0x0ddd,	// (0x00000ddd) list_double2_pane_vc_t1_ParamLimits

0x0ddd,	// (0x00000ddd) list_double2_pane_vc_t1

0x0d40,	// (0x00000d40) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d40,	// (0x00000d40) list_double2_large_graphic_pane_vc_g1

0x0d4c,	// (0x00000d4c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d4c,	// (0x00000d4c) list_double2_large_graphic_pane_vc_g2

0x0d58,	// (0x00000d58) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d58,	// (0x00000d58) list_double2_large_graphic_pane_vc_g3

0x0002,

0xa0d9,	// (0x0000a0d9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xa0d9,	// (0x0000a0d9) list_double2_large_graphic_pane_vc_g

0x0d6c,	// (0x00000d6c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d6c,	// (0x00000d6c) list_double2_large_graphic_pane_vc_t1

0x53b7,	// (0x000053b7) list_double_time_pane_vc_g1_ParamLimits

0x53b7,	// (0x000053b7) list_double_time_pane_vc_g1

0x53c3,	// (0x000053c3) list_double_time_pane_vc_g2_ParamLimits

0x53c3,	// (0x000053c3) list_double_time_pane_vc_g2

0x0001,

0xa525,	// (0x0000a525) list_double_time_pane_vc_g_ParamLimits

0xa525,	// (0x0000a525) list_double_time_pane_vc_g

0x53cf,	// (0x000053cf) list_double_time_pane_vc_t1_ParamLimits

0x53cf,	// (0x000053cf) list_double_time_pane_vc_t1

0x53ed,	// (0x000053ed) list_double_time_pane_vc_t2_ParamLimits

0x53ed,	// (0x000053ed) list_double_time_pane_vc_t2

0x5411,	// (0x00005411) list_double_time_pane_vc_t3_ParamLimits

0x5411,	// (0x00005411) list_double_time_pane_vc_t3

0x5423,	// (0x00005423) list_double_time_pane_vc_t4_ParamLimits

0x5423,	// (0x00005423) list_double_time_pane_vc_t4

0x0003,

0xa52a,	// (0x0000a52a) list_double_time_pane_vc_t_ParamLimits

0xa52a,	// (0x0000a52a) list_double_time_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double_pane_vc_g2

0x0001,

0xa155,	// (0x0000a155) list_double_pane_vc_g_ParamLimits

0xa155,	// (0x0000a155) list_double_pane_vc_g

0x5435,	// (0x00005435) list_double_pane_vc_t1_ParamLimits

0x5435,	// (0x00005435) list_double_pane_vc_t1

0x5447,	// (0x00005447) list_double_pane_vc_t2_ParamLimits

0x5447,	// (0x00005447) list_double_pane_vc_t2

0x0001,

0xa533,	// (0x0000a533) list_double_pane_vc_t_ParamLimits

0xa533,	// (0x0000a533) list_double_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double_number_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_number_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double_number_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double_number_pane_vc_g2

0x0001,

0xa155,	// (0x0000a155) list_double_number_pane_vc_g_ParamLimits

0xa155,	// (0x0000a155) list_double_number_pane_vc_g

0x545d,	// (0x0000545d) list_double_number_pane_vc_t1_ParamLimits

0x545d,	// (0x0000545d) list_double_number_pane_vc_t1

0x5471,	// (0x00005471) list_double_number_pane_vc_t2_ParamLimits

0x5471,	// (0x00005471) list_double_number_pane_vc_t2

0x5483,	// (0x00005483) list_double_number_pane_vc_t3_ParamLimits

0x5483,	// (0x00005483) list_double_number_pane_vc_t3

0x0002,

0xa538,	// (0x0000a538) list_double_number_pane_vc_t_ParamLimits

0xa538,	// (0x0000a538) list_double_number_pane_vc_t

0x5499,	// (0x00005499) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5499,	// (0x00005499) list_double_large_graphic_pane_vc_g1

0x54c1,	// (0x000054c1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x54c1,	// (0x000054c1) list_double_large_graphic_pane_vc_g2

0x54d5,	// (0x000054d5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54d5,	// (0x000054d5) list_double_large_graphic_pane_vc_g3

0x54e4,	// (0x000054e4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54e4,	// (0x000054e4) list_double_large_graphic_pane_vc_g4

0x0003,

0xa53f,	// (0x0000a53f) list_double_large_graphic_pane_vc_g_ParamLimits

0xa53f,	// (0x0000a53f) list_double_large_graphic_pane_vc_g

0x54f4,	// (0x000054f4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54f4,	// (0x000054f4) list_double_large_graphic_pane_vc_t1

0x550e,	// (0x0000550e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x550e,	// (0x0000550e) list_double_large_graphic_pane_vc_t2

0x0001,

0xa548,	// (0x0000a548) list_double_large_graphic_pane_vc_t_ParamLimits

0xa548,	// (0x0000a548) list_double_large_graphic_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double_heading_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_heading_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double_heading_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double_heading_pane_vc_g2

0x0001,

0xa155,	// (0x0000a155) list_double_heading_pane_vc_g_ParamLimits

0xa155,	// (0x0000a155) list_double_heading_pane_vc_g

0x552e,	// (0x0000552e) list_double_heading_pane_vc_t1_ParamLimits

0x552e,	// (0x0000552e) list_double_heading_pane_vc_t1

0x32fa,	// (0x000032fa) list_double_heading_pane_vc_t2_ParamLimits

0x32fa,	// (0x000032fa) list_double_heading_pane_vc_t2

0x0001,

0xa54d,	// (0x0000a54d) list_double_heading_pane_vc_t_ParamLimits

0xa54d,	// (0x0000a54d) list_double_heading_pane_vc_t

0x5540,	// (0x00005540) list_double_graphic_pane_vc_g1_ParamLimits

0x5540,	// (0x00005540) list_double_graphic_pane_vc_g1

0x554c,	// (0x0000554c) list_double_graphic_pane_vc_g2_ParamLimits

0x554c,	// (0x0000554c) list_double_graphic_pane_vc_g2

0x0ea6,	// (0x00000ea6) list_double_graphic_pane_vc_g3_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_graphic_pane_vc_g3

0x0003,

0xa552,	// (0x0000a552) list_double_graphic_pane_vc_g_ParamLimits

0xa552,	// (0x0000a552) list_double_graphic_pane_vc_g

0x5569,	// (0x00005569) list_double_graphic_pane_vc_t1_ParamLimits

0x5569,	// (0x00005569) list_double_graphic_pane_vc_t1

0x5587,	// (0x00005587) list_double_graphic_pane_vc_t2_ParamLimits

0x5587,	// (0x00005587) list_double_graphic_pane_vc_t2

0x0001,

0xa55b,	// (0x0000a55b) list_double_graphic_pane_vc_t_ParamLimits

0xa55b,	// (0x0000a55b) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xa9ff,	// (0x0000a9ff) aid_size_cell_touch_ParamLimits

0xa9ff,	// (0x0000a9ff) aid_size_cell_touch

0x0278,	// (0x00000278) popup_fast_swap_wide_window_ParamLimits

0x0278,	// (0x00000278) popup_fast_swap_wide_window

0xab60,	// (0x0000ab60) touch_pane_ParamLimits

0xab60,	// (0x0000ab60) touch_pane

0x113e,	// (0x0000113e) button_value_adjust_pane_cp2

0x1146,	// (0x00001146) button_value_adjust_pane_cp4

0x1166,	// (0x00001166) form_field_data_pane_cp2

0xb2f4,	// (0x0000b2f4) form_field_data_wide_pane_cp2

0x191b,	// (0x0000191b) bg_scroll_pane_ParamLimits

0x193a,	// (0x0000193a) scroll_handle_pane_ParamLimits

0x194e,	// (0x0000194e) scroll_sc2_down_pane_ParamLimits

0x194e,	// (0x0000194e) scroll_sc2_down_pane

0x1975,	// (0x00001975) scroll_sc2_up_pane_ParamLimits

0x1975,	// (0x00001975) scroll_sc2_up_pane

0xcaef,	// (0x0000caef) grid_wheel_folder_pane_g1_ParamLimits

0xcaef,	// (0x0000caef) grid_wheel_folder_pane_g1

0x1fff,	// (0x00001fff) clock_nsta_pane_cp2_ParamLimits

0x1fff,	// (0x00001fff) clock_nsta_pane_cp2

0xb749,	// (0x0000b749) listscroll_midp_pane_ParamLimits

0xb758,	// (0x0000b758) midp_canvas_pane

0x2806,	// (0x00002806) nsta_clock_indic_pane

0x2864,	// (0x00002864) listscroll_form_pane_vc

0x2889,	// (0x00002889) listscroll_set_pane_vc_ParamLimits

0x2889,	// (0x00002889) listscroll_set_pane_vc

0xc087,	// (0x0000c087) clock_nsta_pane

0xc0aa,	// (0x0000c0aa) indicator_nsta_pane

0x318c,	// (0x0000318c) bg_popup_sub_pane_cp2_ParamLimits

0x31a0,	// (0x000031a0) find_pane_cp2_ParamLimits

0x31a0,	// (0x000031a0) find_pane_cp2

0x31b2,	// (0x000031b2) grid_toobar_pane_ParamLimits

0x33b2,	// (0x000033b2) list_form_gen_pane_vc_ParamLimits

0x33b2,	// (0x000033b2) list_form_gen_pane_vc

0x33c8,	// (0x000033c8) scroll_pane_cp8_vc_ParamLimits

0x33c8,	// (0x000033c8) scroll_pane_cp8_vc

0x34d9,	// (0x000034d9) data_form_wide_pane_vc_ParamLimits

0x34d9,	// (0x000034d9) data_form_wide_pane_vc

0x34e5,	// (0x000034e5) form_field_data_wide_pane_vc_g1

0x34ed,	// (0x000034ed) form_field_data_wide_pane_vc_t1_ParamLimits

0x34ed,	// (0x000034ed) form_field_data_wide_pane_vc_t1

0x120e,	// (0x0000120e) input_focus_pane_cp6_vc_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_cp6_vc

0xc40d,	// (0x0000c40d) list_midp_pane_ParamLimits

0x4cf9,	// (0x00004cf9) scroll_pane_cp16_ParamLimits

0x4cf9,	// (0x00004cf9) scroll_pane_cp16

0x3843,	// (0x00003843) button_value_adjust_pane_ParamLimits

0x3843,	// (0x00003843) button_value_adjust_pane

0xc72c,	// (0x0000c72c) button_value_adjust_pane_cp6_ParamLimits

0xc72c,	// (0x0000c72c) button_value_adjust_pane_cp6

0xc836,	// (0x0000c836) settings_code_pane_cp_ParamLimits

0xc836,	// (0x0000c836) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0xa1f2,	// (0x0000a1f2) cell_touch_pane_g

0xc9e7,	// (0x0000c9e7) cell_touch_pane_cp_ParamLimits

0xc9e7,	// (0x0000c9e7) cell_touch_pane_cp

0xca03,	// (0x0000ca03) cell_touch_pane_ParamLimits

0xca03,	// (0x0000ca03) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_vc

0x511d,	// (0x0000511d) list_set_graphic_pane_vc_g1_ParamLimits

0x511d,	// (0x0000511d) list_set_graphic_pane_vc_g1

0x5129,	// (0x00005129) list_set_graphic_pane_vc_g2_ParamLimits

0x5129,	// (0x00005129) list_set_graphic_pane_vc_g2

0x0001,

0xa4d6,	// (0x0000a4d6) list_set_graphic_pane_vc_g_ParamLimits

0xa4d6,	// (0x0000a4d6) list_set_graphic_pane_vc_g

0x5135,	// (0x00005135) text_primary_small_cp13_vc_ParamLimits

0x5135,	// (0x00005135) text_primary_small_cp13_vc

0x514d,	// (0x0000514d) list_set_graphic_pane_vc_ParamLimits

0x514d,	// (0x0000514d) list_set_graphic_pane_vc

0x024e,	// (0x0000024e) input_focus_pane_cp2_vc

0x002a,	// (0x0000002a) setting_code_pane_vc_g1

0x5160,	// (0x00005160) setting_code_pane_vc_t1

0x516e,	// (0x0000516e) set_text_pane_vc_t1_ParamLimits

0x516e,	// (0x0000516e) set_text_pane_vc_t1

0x024e,	// (0x0000024e) input_focus_pane_cp1_vc

0x5189,	// (0x00005189) list_set_text_pane_vc

0x002a,	// (0x0000002a) setting_text_pane_vc_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_vc

0x5193,	// (0x00005193) setting_slider_graphic_pane_vc_g1

0x519b,	// (0x0000519b) setting_slider_graphic_pane_vc_t1

0x51a9,	// (0x000051a9) setting_slider_graphic_pane_vc_t2

0x0001,

0xa4db,	// (0x0000a4db) setting_slider_graphic_pane_vc_t

0x51b7,	// (0x000051b7) slider_set_pane_cp_vc

0x51bf,	// (0x000051bf) slider_set_pane_vc_g1

0x51c8,	// (0x000051c8) slider_set_pane_vc_g2

0x0006,

0xa4e0,	// (0x0000a4e0) slider_set_pane_vc_g

0x1331,	// (0x00001331) set_opt_bg_pane_g1_copy1

0x1339,	// (0x00001339) set_opt_bg_pane_g2_copy1

0x51f4,	// (0x000051f4) set_opt_bg_pane_g3_copy1

0x1349,	// (0x00001349) set_opt_bg_pane_g4_copy1

0x1351,	// (0x00001351) set_opt_bg_pane_g5_copy1

0x1359,	// (0x00001359) set_opt_bg_pane_g6_copy1

0x51fc,	// (0x000051fc) set_opt_bg_pane_g7_copy1

0x5204,	// (0x00005204) set_opt_bg_pane_g8_copy1

0x520c,	// (0x0000520c) set_opt_bg_pane_g9_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp_vc

0x5214,	// (0x00005214) setting_slider_pane_vc_t1

0x519b,	// (0x0000519b) setting_slider_pane_vc_t2

0x51a9,	// (0x000051a9) setting_slider_pane_vc_t3

0x0002,

0xa4ef,	// (0x0000a4ef) setting_slider_pane_vc_t

0x51b7,	// (0x000051b7) slider_set_pane_vc

0x401f,	// (0x0000401f) volume_set_pane_vc_g1

0x5223,	// (0x00005223) volume_set_pane_vc_g2

0x522c,	// (0x0000522c) volume_set_pane_vc_g3

0x5235,	// (0x00005235) volume_set_pane_vc_g4

0x523e,	// (0x0000523e) volume_set_pane_vc_g5

0x5247,	// (0x00005247) volume_set_pane_vc_g6

0x5250,	// (0x00005250) volume_set_pane_vc_g7

0x5259,	// (0x00005259) volume_set_pane_vc_g8

0x5262,	// (0x00005262) volume_set_pane_vc_g9

0x526b,	// (0x0000526b) volume_set_pane_vc_g10

0x0009,

0xa4f6,	// (0x0000a4f6) volume_set_pane_vc_g

0x5274,	// (0x00005274) volume_set_pane_vc

0x527c,	// (0x0000527c) button_value_adjust_pane_cp1_vc

0x5286,	// (0x00005286) list_highlight_pane_cp2_vc

0x528f,	// (0x0000528f) list_set_pane_vc_ParamLimits

0x528f,	// (0x0000528f) list_set_pane_vc

0x52e1,	// (0x000052e1) main_pane_set_vc_t1_ParamLimits

0x52e1,	// (0x000052e1) main_pane_set_vc_t1

0x52f6,	// (0x000052f6) main_pane_set_vc_t2_ParamLimits

0x52f6,	// (0x000052f6) main_pane_set_vc_t2

0x5308,	// (0x00005308) main_pane_set_vc_t3_ParamLimits

0x5308,	// (0x00005308) main_pane_set_vc_t3

0x531a,	// (0x0000531a) main_pane_set_vc_t4_ParamLimits

0x531a,	// (0x0000531a) main_pane_set_vc_t4

0x0003,

0xa50b,	// (0x0000a50b) main_pane_set_vc_t_ParamLimits

0xa50b,	// (0x0000a50b) main_pane_set_vc_t

0x532c,	// (0x0000532c) setting_code_pane_vc_ParamLimits

0x532c,	// (0x0000532c) setting_code_pane_vc

0x533b,	// (0x0000533b) setting_slider_graphic_pane_vc

0x533b,	// (0x0000533b) setting_slider_pane_vc

0x533b,	// (0x0000533b) setting_text_pane_vc

0x533b,	// (0x0000533b) setting_volume_pane_vc

0x5343,	// (0x00005343) scroll_pane_cp121_vc

0x1135,	// (0x00001135) set_content_pane_vc

0x55a5,	// (0x000055a5) button_value_adjust_pane_g1

0x55ae,	// (0x000055ae) button_value_adjust_pane_g2

0x0001,

0xa560,	// (0x0000a560) button_value_adjust_pane_g

0x55b7,	// (0x000055b7) form_field_slider_wide_pane_vc_t1_ParamLimits

0x55b7,	// (0x000055b7) form_field_slider_wide_pane_vc_t1

0x55cd,	// (0x000055cd) form_field_slider_wide_pane_vc_t2_ParamLimits

0x55cd,	// (0x000055cd) form_field_slider_wide_pane_vc_t2

0x0002,

0xa565,	// (0x0000a565) form_field_slider_wide_pane_vc_t_ParamLimits

0xa565,	// (0x0000a565) form_field_slider_wide_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp10_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10_vc

0x55f8,	// (0x000055f8) slider_cont_pane_cp1_vc_ParamLimits

0x55f8,	// (0x000055f8) slider_cont_pane_cp1_vc

0x51bf,	// (0x000051bf) slider_form_pane_g1_cp2

0x51c8,	// (0x000051c8) slider_form_pane_g2_cp2

0x5613,	// (0x00005613) form_field_slider_pane_vc_t3

0x5621,	// (0x00005621) form_field_slider_pane_vc_t4

0x562f,	// (0x0000562f) slider_form_pane_vc_ParamLimits

0x562f,	// (0x0000562f) slider_form_pane_vc

0x563c,	// (0x0000563c) form_field_slider_pane_vc_t1_ParamLimits

0x563c,	// (0x0000563c) form_field_slider_pane_vc_t1

0x5652,	// (0x00005652) form_field_slider_pane_vc_t2_ParamLimits

0x5652,	// (0x00005652) form_field_slider_pane_vc_t2

0x0001,

0xa577,	// (0x0000a577) form_field_slider_pane_vc_t_ParamLimits

0xa577,	// (0x0000a577) form_field_slider_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp9_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9_vc

0x5664,	// (0x00005664) slider_cont_pane_vc_ParamLimits

0x5664,	// (0x00005664) slider_cont_pane_vc

0x5676,	// (0x00005676) list_form_graphic_pane_cp_vc_ParamLimits

0x5676,	// (0x00005676) list_form_graphic_pane_cp_vc

0x34e5,	// (0x000034e5) form_field_popup_wide_pane_vc_g1

0x568b,	// (0x0000568b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x568b,	// (0x0000568b) form_field_popup_wide_pane_vc_t1

0x120e,	// (0x0000120e) input_focus_pane_cp8_vc_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_cp8_vc

0x56ca,	// (0x000056ca) list_form_wide_pane_vc_ParamLimits

0x56ca,	// (0x000056ca) list_form_wide_pane_vc

0x56d6,	// (0x000056d6) list_form_graphic_pane_vc_g1

0x56de,	// (0x000056de) list_form_graphic_pane_vc_t1_ParamLimits

0x56de,	// (0x000056de) list_form_graphic_pane_vc_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc

0x56fa,	// (0x000056fa) list_form_graphic_pane_vc_ParamLimits

0x56fa,	// (0x000056fa) list_form_graphic_pane_vc

0x34e5,	// (0x000034e5) form_field_popup_pane_vc_g1

0x5710,	// (0x00005710) form_field_popup_pane_vc_t1_ParamLimits

0x5710,	// (0x00005710) form_field_popup_pane_vc_t1

0x120e,	// (0x0000120e) input_focus_pane_cp7_vc_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_cp7_vc

0x5725,	// (0x00005725) list_form_pane_vc_ParamLimits

0x5725,	// (0x00005725) list_form_pane_vc

0x5731,	// (0x00005731) data_form_pane_vc_t1_ParamLimits

0x5731,	// (0x00005731) data_form_pane_vc_t1

0x1331,	// (0x00001331) input_focus_pane_vc_g1

0x1339,	// (0x00001339) input_focus_pane_vc_g2

0x1341,	// (0x00001341) input_focus_pane_vc_g3

0x1349,	// (0x00001349) input_focus_pane_vc_g4

0x1351,	// (0x00001351) input_focus_pane_vc_g5

0x1359,	// (0x00001359) input_focus_pane_vc_g6

0x1361,	// (0x00001361) input_focus_pane_vc_g7

0x1369,	// (0x00001369) input_focus_pane_vc_g8

0x1371,	// (0x00001371) input_focus_pane_vc_g9

0x002a,	// (0x0000002a) input_focus_pane_vc_g10

0x0009,

0xa17b,	// (0x0000a17b) input_focus_pane_vc_g

0x34d9,	// (0x000034d9) data_form_pane_vc_ParamLimits

0x34d9,	// (0x000034d9) data_form_pane_vc

0x34e5,	// (0x000034e5) form_field_data_pane_vc_g1

0x574c,	// (0x0000574c) form_field_data_pane_vc_t1_ParamLimits

0x574c,	// (0x0000574c) form_field_data_pane_vc_t1

0x120e,	// (0x0000120e) input_focus_pane_vc_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_vc

0x113e,	// (0x0000113e) button_value_adjust_pane_cp3_vc

0x5762,	// (0x00005762) button_value_adjust_pane_cp5_vc

0x576a,	// (0x0000576a) form_field_data_pane_vc_ParamLimits

0x576a,	// (0x0000576a) form_field_data_pane_vc

0x1166,	// (0x00001166) form_field_data_pane_vc_cp2

0x5781,	// (0x00005781) form_field_data_wide_pane_vc_ParamLimits

0x5781,	// (0x00005781) form_field_data_wide_pane_vc

0x5797,	// (0x00005797) form_field_data_wide_pane_vc_cp2

0x579f,	// (0x0000579f) form_field_popup_pane_vc_ParamLimits

0x579f,	// (0x0000579f) form_field_popup_pane_vc

0x57b6,	// (0x000057b6) form_field_popup_wide_pane_vc_ParamLimits

0x57b6,	// (0x000057b6) form_field_popup_wide_pane_vc

0x57cc,	// (0x000057cc) form_field_slider_pane_vc_ParamLimits

0x57cc,	// (0x000057cc) form_field_slider_pane_vc

0x57df,	// (0x000057df) form_field_slider_wide_pane_vc_ParamLimits

0x57df,	// (0x000057df) form_field_slider_wide_pane_vc

0xca21,	// (0x0000ca21) grid_touch_1_pane_ParamLimits

0xca21,	// (0x0000ca21) grid_touch_1_pane

0xca35,	// (0x0000ca35) grid_touch_2_pane_ParamLimits

0xca35,	// (0x0000ca35) grid_touch_2_pane

0x58ac,	// (0x000058ac) touch_pane_g1_ParamLimits

0x58ac,	// (0x000058ac) touch_pane_g1

0x5816,	// (0x00005816) cell_app_pane_cp_wide_ParamLimits

0x5816,	// (0x00005816) cell_app_pane_cp_wide

0x5826,	// (0x00005826) grid_popup_fast_wide_pane_ParamLimits

0x5826,	// (0x00005826) grid_popup_fast_wide_pane

0x583a,	// (0x0000583a) scroll_pane_cp19_ParamLimits

0x583a,	// (0x0000583a) scroll_pane_cp19

0x024e,	// (0x0000024e) bg_popup_window_pane_cp20

0x584e,	// (0x0000584e) listscroll_popup_fast_wide_pane

0x1523,	// (0x00001523) grid_indicator_nsta_pane

0x5856,	// (0x00005856) clock_nsta_pane_g1

0x585f,	// (0x0000585f) clock_nsta_pane_t1

0xca5f,	// (0x0000ca5f) cell_indicator_nsta_pane_ParamLimits

0xca5f,	// (0x0000ca5f) cell_indicator_nsta_pane

0x58ac,	// (0x000058ac) cell_indicator_nsta_pane_g1

0xca76,	// (0x0000ca76) cell_indicator_nsta_pane_g2

0x0001,

0xe988,	// (0x0000e988) cell_indicator_nsta_pane_g

0x58c7,	// (0x000058c7) clock_nsta_pane_cp

0x58cf,	// (0x000058cf) indicator_nsta_pane_cp

0x58d8,	// (0x000058d8) nsta_clock_indic_pane_g1

0x05de,	// (0x000005de) grid_indicator_pane

0x1a67,	// (0x00001a67) scroll_pane_cp29

0x1f34,	// (0x00001f34) indicator_nsta_pane_cp2_ParamLimits

0x1f34,	// (0x00001f34) indicator_nsta_pane_cp2

0x0474,	// (0x00000474) main_apps_wheel_pane

0x36c4,	// (0x000036c4) form_midp_field_text_pane_ParamLimits

0x3809,	// (0x00003809) scroll_bar_cp050_ParamLimits

0x5941,	// (0x00005941) cell_indicator_pane_ParamLimits

0x5941,	// (0x00005941) cell_indicator_pane

0x5957,	// (0x00005957) cell_indicator_pane_g1

0xca83,	// (0x0000ca83) grid_wheel_folder_pane_ParamLimits

0xca83,	// (0x0000ca83) grid_wheel_folder_pane

0xca91,	// (0x0000ca91) list_wheel_apps_pane_ParamLimits

0xca91,	// (0x0000ca91) list_wheel_apps_pane

0xca9d,	// (0x0000ca9d) main_apps_wheel_pane_g1_ParamLimits

0xca9d,	// (0x0000ca9d) main_apps_wheel_pane_g1

0xcaa9,	// (0x0000caa9) main_apps_wheel_pane_g2_ParamLimits

0xcaa9,	// (0x0000caa9) main_apps_wheel_pane_g2

0x0001,

0xe98d,	// (0x0000e98d) main_apps_wheel_pane_g_ParamLimits

0xe98d,	// (0x0000e98d) main_apps_wheel_pane_g

0xcab5,	// (0x0000cab5) main_apps_wheel_pane_t1_ParamLimits

0xcab5,	// (0x0000cab5) main_apps_wheel_pane_t1

0xcac7,	// (0x0000cac7) list_wheel_apps_pane_g1

0xcacf,	// (0x0000cacf) list_wheel_apps_pane_g2

0xcad7,	// (0x0000cad7) list_wheel_apps_pane_g3

0xcadf,	// (0x0000cadf) list_wheel_apps_pane_g4

0xcae7,	// (0x0000cae7) list_wheel_apps_pane_g5

0x0004,

0xe992,	// (0x0000e992) list_wheel_apps_pane_g

0x0474,	// (0x00000474) navi_icon_text_pane

0xbf93,	// (0x0000bf93) aid_fill_nsta

0x5a08,	// (0x00005a08) navi_icon_text_pane_g1

0x5a14,	// (0x00005a14) navi_icon_text_pane_t1

0x20a1,	// (0x000020a1) list_set_graphic_pane_t1_ParamLimits

0x20a1,	// (0x000020a1) list_set_graphic_pane_t1

0x3f23,	// (0x00003f23) popup_midp_note_alarm_window_t6_ParamLimits

0x3f23,	// (0x00003f23) popup_midp_note_alarm_window_t6

0x3f35,	// (0x00003f35) popup_midp_note_alarm_window_t7_ParamLimits

0x3f35,	// (0x00003f35) popup_midp_note_alarm_window_t7

0x3f47,	// (0x00003f47) popup_midp_note_alarm_window_t8_ParamLimits

0x3f47,	// (0x00003f47) popup_midp_note_alarm_window_t8

0x3f59,	// (0x00003f59) popup_midp_note_alarm_window_t9_ParamLimits

0x3f59,	// (0x00003f59) popup_midp_note_alarm_window_t9

0x3f6b,	// (0x00003f6b) popup_midp_note_alarm_window_t10_ParamLimits

0x3f6b,	// (0x00003f6b) popup_midp_note_alarm_window_t10

0x3f7d,	// (0x00003f7d) popup_midp_note_alarm_window_t11_ParamLimits

0x3f7d,	// (0x00003f7d) popup_midp_note_alarm_window_t11

0x3f8f,	// (0x00003f8f) scroll_pane_cp17_ParamLimits

0x3f8f,	// (0x00003f8f) scroll_pane_cp17

0x401f,	// (0x0000401f) volume_small_pane_cp_g1

0x5a26,	// (0x00005a26) volume_small_pane_cp_g2

0x5a2f,	// (0x00005a2f) volume_small_pane_cp_g3

0x5a38,	// (0x00005a38) volume_small_pane_cp_g4

0x404c,	// (0x0000404c) volume_small_pane_cp_g5

0x5a41,	// (0x00005a41) volume_small_pane_cp_g6

0x5a4a,	// (0x00005a4a) volume_small_pane_cp_g7

0x5a53,	// (0x00005a53) volume_small_pane_cp_g8

0x5a5c,	// (0x00005a5c) volume_small_pane_cp_g9

0x5a65,	// (0x00005a65) volume_small_pane_cp_g10

0x2400,	// (0x00002400) midp_ticker_pane_g1_ParamLimits

0x240c,	// (0x0000240c) midp_ticker_pane_g2_ParamLimits

0xa247,	// (0x0000a247) midp_ticker_pane_g_ParamLimits

0x2418,	// (0x00002418) midp_ticker_pane_t1_ParamLimits

0xbfa9,	// (0x0000bfa9) aid_fill_nsta_2

0x37f5,	// (0x000037f5) list_form2_midp_pane

0x4ac2,	// (0x00004ac2) midp_editing_number_pane_ParamLimits

0x4ace,	// (0x00004ace) midp_ticker_pane_ParamLimits

0x5a6e,	// (0x00005a6e) form2_midp_field_pane

0x5a92,	// (0x00005a92) scroll_pane_cp51

0x5ab2,	// (0x00005ab2) form2_midp_button_pane_ParamLimits

0x5ab2,	// (0x00005ab2) form2_midp_button_pane

0x5ac4,	// (0x00005ac4) form2_midp_content_pane_ParamLimits

0x5ac4,	// (0x00005ac4) form2_midp_content_pane

0x5ade,	// (0x00005ade) form2_midp_field_choice_group_pane

0x5ae6,	// (0x00005ae6) form2_midp_field_pane_g1

0x5aee,	// (0x00005aee) form2_midp_field_pane_g2

0x5af6,	// (0x00005af6) form2_midp_field_pane_g3

0x5afe,	// (0x00005afe) form2_midp_field_pane_g4

0x0003,

0xa5ce,	// (0x0000a5ce) form2_midp_field_pane_g

0x5b06,	// (0x00005b06) form2_midp_gauge_slider_pane

0x5b0e,	// (0x00005b0e) form2_midp_gauge_wait_pane

0x5b16,	// (0x00005b16) form2_midp_image_pane_ParamLimits

0x5b16,	// (0x00005b16) form2_midp_image_pane

0x5b31,	// (0x00005b31) form2_midp_label_pane_ParamLimits

0x5b31,	// (0x00005b31) form2_midp_label_pane

0xcb1c,	// (0x0000cb1c) form2_midp_label_pane_cp_ParamLimits

0xcb1c,	// (0x0000cb1c) form2_midp_label_pane_cp

0x5b69,	// (0x00005b69) form2_midp_string_pane_ParamLimits

0x5b69,	// (0x00005b69) form2_midp_string_pane

0x5b7b,	// (0x00005b7b) form2_midp_text_pane_ParamLimits

0x5b7b,	// (0x00005b7b) form2_midp_text_pane

0x5b94,	// (0x00005b94) form2_midp_time_pane

0x5ba4,	// (0x00005ba4) input_focus_pane_cp51_ParamLimits

0x5ba4,	// (0x00005ba4) input_focus_pane_cp51

0x5bbc,	// (0x00005bbc) form2_midp_label_pane_t1_ParamLimits

0x5bbc,	// (0x00005bbc) form2_midp_label_pane_t1

0x1379,	// (0x00001379) form2_mdip_text_pane_t1_ParamLimits

0x1379,	// (0x00001379) form2_mdip_text_pane_t1

0x5bfc,	// (0x00005bfc) form2_midp_time_pane_t1

0x5c17,	// (0x00005c17) form2_midp_gauge_slider_pane_t1

0xcb3b,	// (0x0000cb3b) form2_midp_gauge_slider_pane_t2

0xcb4d,	// (0x0000cb4d) form2_midp_gauge_slider_pane_t3

0x0002,

0xe9a2,	// (0x0000e9a2) form2_midp_gauge_slider_pane_t

0x5c4d,	// (0x00005c4d) form2_midp_slider_pane

0x5c59,	// (0x00005c59) form2_midp_gauge_wait_pane_t1

0x5c67,	// (0x00005c67) form2_midp_wait_pane_ParamLimits

0x5c67,	// (0x00005c67) form2_midp_wait_pane

0x3523,	// (0x00003523) list_single_2graphic_pane_cp4_ParamLimits

0x3523,	// (0x00003523) list_single_2graphic_pane_cp4

0x5c92,	// (0x00005c92) list_single_midp_graphic_pane_cp_ParamLimits

0x5c92,	// (0x00005c92) list_single_midp_graphic_pane_cp

0x024e,	// (0x0000024e) list_highlight_pane_cp20

0x5cb0,	// (0x00005cb0) list_single_2graphic_pane_g1_cp4

0x4c32,	// (0x00004c32) list_single_2graphic_pane_g2_cp4

0x5cb8,	// (0x00005cb8) list_single_2graphic_pane_t1_cp4

0x0474,	// (0x00000474) list_highlight_pane_cp21

0x5cc7,	// (0x00005cc7) list_single_midp_graphic_pane_g4_cp

0x5cd6,	// (0x00005cd6) list_single_midp_graphic_pane_t1_cp

0x5ceb,	// (0x00005ceb) form2_mdip_string_pane_t1_ParamLimits

0x5ceb,	// (0x00005ceb) form2_mdip_string_pane_t1

0x024e,	// (0x0000024e) bg_wml_button_pane_cp2

0x002a,	// (0x0000002a) form2_midp_image_pane_g1

0x0f23,	// (0x00000f23) list_double_large_graphic_pane_g5_ParamLimits

0x0f23,	// (0x00000f23) list_double_large_graphic_pane_g5

0xb749,	// (0x0000b749) midp_form_pane_ParamLimits

0x0474,	// (0x00000474) main_apps_wheel_pane_ParamLimits

0xbd35,	// (0x0000bd35) popup_preview_window_ParamLimits

0xbd35,	// (0x0000bd35) popup_preview_window

0x2cfc,	// (0x00002cfc) popup_touch_info_window_ParamLimits

0x2cfc,	// (0x00002cfc) popup_touch_info_window

0x2d1a,	// (0x00002d1a) popup_touch_menu_window_ParamLimits

0x2d1a,	// (0x00002d1a) popup_touch_menu_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp6

0x5d55,	// (0x00005d55) list_touch_menu_pane

0x5d5d,	// (0x00005d5d) list_single_touch_menu_pane_ParamLimits

0x5d5d,	// (0x00005d5d) list_single_touch_menu_pane

0x5d74,	// (0x00005d74) list_single_touch_menu_pane_t1

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7_ParamLimits

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7

0x5d82,	// (0x00005d82) heading_sub_pane

0x5d8a,	// (0x00005d8a) list_touch_info_pane_ParamLimits

0x5d8a,	// (0x00005d8a) list_touch_info_pane

0x5d99,	// (0x00005d99) list_single_touch_info_pane_ParamLimits

0x5d99,	// (0x00005d99) list_single_touch_info_pane

0x5daa,	// (0x00005daa) list_single_touch_info_pane_t1

0x5db8,	// (0x00005db8) list_single_touch_info_pane_t2

0x0001,

0xa5e5,	// (0x0000a5e5) list_single_touch_info_pane_t

0x232f,	// (0x0000232f) bg_popup_heading_pane_cp

0x5dc6,	// (0x00005dc6) heading_sub_pane_t1

0x33f3,	// (0x000033f3) bg_popup_preview_window_pane_cp_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_preview_window_pane_cp

0x5d82,	// (0x00005d82) heading_preview_pane

0x5d8a,	// (0x00005d8a) list_preview_pane_ParamLimits

0x5d8a,	// (0x00005d8a) list_preview_pane

0x5dd4,	// (0x00005dd4) popup_preview_window_g1

0x5d99,	// (0x00005d99) list_single_preview_pane_ParamLimits

0x5d99,	// (0x00005d99) list_single_preview_pane

0x5ddc,	// (0x00005ddc) list_single_preview_pane_g1

0x5de4,	// (0x00005de4) list_single_preview_pane_t1

0x5daa,	// (0x00005daa) list_single_preview_pane_t2

0x0001,

0xa5ea,	// (0x0000a5ea) list_single_preview_pane_t

0x5df2,	// (0x00005df2) bg_popup_heading_pane_cp2_ParamLimits

0x5df2,	// (0x00005df2) bg_popup_heading_pane_cp2

0x5e08,	// (0x00005e08) heading_preview_pane_g1

0x5e10,	// (0x00005e10) heading_preview_pane_t1_ParamLimits

0x5e10,	// (0x00005e10) heading_preview_pane_t1

0x0601,	// (0x00000601) soft_indicator_pane_t1_ParamLimits

0x0c64,	// (0x00000c64) scroll_pane_ParamLimits

0x1963,	// (0x00001963) scroll_sc2_left_pane

0x196c,	// (0x0000196c) scroll_sc2_right_pane

0x198b,	// (0x0000198b) scroll_bg_pane_g1_ParamLimits

0x19a0,	// (0x000019a0) scroll_bg_pane_g2_ParamLimits

0x19b8,	// (0x000019b8) scroll_bg_pane_g3_ParamLimits

0xa1d2,	// (0x0000a1d2) scroll_bg_pane_g_ParamLimits

0x198b,	// (0x0000198b) scroll_handle_pane_g1_ParamLimits

0x19da,	// (0x000019da) scroll_handle_pane_g2_ParamLimits

0x19b8,	// (0x000019b8) scroll_handle_pane_g3_ParamLimits

0xa1d9,	// (0x0000a1d9) scroll_handle_pane_g_ParamLimits

0x28c9,	// (0x000028c9) popup_choice_list_window_ParamLimits

0x28c9,	// (0x000028c9) popup_choice_list_window

0x3198,	// (0x00003198) choice_list_pane

0x3235,	// (0x00003235) cell_toolbar_pane_t1

0x325d,	// (0x0000325d) toolbar_button_pane_ParamLimits

0x456e,	// (0x0000456e) ai_gene_pane_1_t2_ParamLimits

0x456e,	// (0x0000456e) ai_gene_pane_1_t2

0x0001,

0xa3f5,	// (0x0000a3f5) ai_gene_pane_1_t_ParamLimits

0xa3f5,	// (0x0000a3f5) ai_gene_pane_1_t

0x5e2d,	// (0x00005e2d) scroll_sc2_left_pane_g1

0x5e2d,	// (0x00005e2d) scroll_sc2_right_pane_g1

0x289b,	// (0x0000289b) bg_popup_sub_pane_cp10

0x5e37,	// (0x00005e37) list_choice_list_pane

0x5e4e,	// (0x00005e4e) list_single_choice_list_pane_ParamLimits

0x5e4e,	// (0x00005e4e) list_single_choice_list_pane

0x5e60,	// (0x00005e60) list_single_choice_list_pane_g1

0x14f4,	// (0x000014f4) list_single_choice_list_pane_t1_ParamLimits

0x14f4,	// (0x000014f4) list_single_choice_list_pane_t1

0x5e68,	// (0x00005e68) choice_list_pane_g1

0x5e70,	// (0x00005e70) choice_list_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp11

0x1708,	// (0x00001708) title_pane_stacon_g2_ParamLimits

0x1708,	// (0x00001708) title_pane_stacon_g2

0x0002,

0xa1b8,	// (0x0000a1b8) title_pane_stacon_g_ParamLimits

0xa1b8,	// (0x0000a1b8) title_pane_stacon_g

0x232f,	// (0x0000232f) cursor_press_pane

0xba9c,	// (0x0000ba9c) popup_fep_hwr_window_ParamLimits

0xba9c,	// (0x0000ba9c) popup_fep_hwr_window

0x29c1,	// (0x000029c1) popup_fep_vkb_window_ParamLimits

0x29c1,	// (0x000029c1) popup_fep_vkb_window

0x5e7e,	// (0x00005e7e) cursor_press_pane_g1

0x0002,

0xe9b6,	// (0x0000e9b6) fep_vkb_side_pane_g_ParamLimits

0x5ebb,	// (0x00005ebb) fep_hwr_candidate_pane_ParamLimits

0x5ebb,	// (0x00005ebb) fep_hwr_candidate_pane

0x5ee3,	// (0x00005ee3) fep_hwr_side_pane_ParamLimits

0x5ee3,	// (0x00005ee3) fep_hwr_side_pane

0x5f03,	// (0x00005f03) fep_hwr_top_pane_ParamLimits

0x5f03,	// (0x00005f03) fep_hwr_top_pane

0x5f1b,	// (0x00005f1b) fep_hwr_write_pane_ParamLimits

0x5f1b,	// (0x00005f1b) fep_hwr_write_pane

0xe9b6,	// (0x0000e9b6) fep_vkb_side_pane_g

0x5f55,	// (0x00005f55) fep_hwr_top_pane_g1

0x5f67,	// (0x00005f67) fep_hwr_top_pane_g2

0x5f79,	// (0x00005f79) fep_hwr_top_pane_g3

0x0002,

0xa5ef,	// (0x0000a5ef) fep_hwr_top_pane_g

0x5f8e,	// (0x00005f8e) fep_hwr_top_text_pane

0x1b2f,	// (0x00001b2f) fep_hwr_top_text_pane_g1

0x6066,	// (0x00006066) fep_hwr_top_text_pane_t1

0x60ae,	// (0x000060ae) fep_hwr_candidate_pane_g1

0x62e4,	// (0x000062e4) fep_vkb_keypad_pane_g3_ParamLimits

0x62e4,	// (0x000062e4) fep_vkb_keypad_pane_g3

0x6306,	// (0x00006306) fep_vkb_keypad_pane_g4_ParamLimits

0x6306,	// (0x00006306) fep_vkb_keypad_pane_g4

0x6375,	// (0x00006375) fep_vkb_bottom_pane_g2_ParamLimits

0x6375,	// (0x00006375) fep_vkb_bottom_pane_g2

0x0001,

0xa61a,	// (0x0000a61a) fep_vkb_bottom_pane_g_ParamLimits

0xa61a,	// (0x0000a61a) fep_vkb_bottom_pane_g

0x5e2d,	// (0x00005e2d) cell_vkb_side_pane_g2

0x0001,

0xa624,	// (0x0000a624) cell_vkb_side_pane_g

0x6400,	// (0x00006400) cell_vkb_side_pane_t1

0x640e,	// (0x0000640e) cell_vkb_side_pane_t1_copy1

0x5e2d,	// (0x00005e2d) bg_fep_vkb_candidate_pane_g2

0x6532,	// (0x00006532) cell_vkb_candidate_pane_ParamLimits

0x60e2,	// (0x000060e2) aid_size_cell_vkb_ParamLimits

0x60e2,	// (0x000060e2) aid_size_cell_vkb

0x6532,	// (0x00006532) cell_vkb_candidate_pane

0x6564,	// (0x00006564) bg_popup_fep_shadow_pane_g1

0x6158,	// (0x00006158) fep_vkb_bottom_pane_ParamLimits

0x6158,	// (0x00006158) fep_vkb_bottom_pane

0x6195,	// (0x00006195) fep_vkb_candidate_pane_ParamLimits

0x6195,	// (0x00006195) fep_vkb_candidate_pane

0x61b1,	// (0x000061b1) fep_vkb_keypad_pane_ParamLimits

0x61b1,	// (0x000061b1) fep_vkb_keypad_pane

0x61e5,	// (0x000061e5) fep_vkb_side_pane_ParamLimits

0x61e5,	// (0x000061e5) fep_vkb_side_pane

0x6211,	// (0x00006211) fep_vkb_top_pane_ParamLimits

0x6211,	// (0x00006211) fep_vkb_top_pane

0x623d,	// (0x0000623d) fep_vkb_top_pane_g1_ParamLimits

0x623d,	// (0x0000623d) fep_vkb_top_pane_g1

0x624c,	// (0x0000624c) fep_vkb_top_pane_g2_ParamLimits

0x624c,	// (0x0000624c) fep_vkb_top_pane_g2

0x625b,	// (0x0000625b) fep_vkb_top_pane_g3_ParamLimits

0x625b,	// (0x0000625b) fep_vkb_top_pane_g3

0x0003,

0xa60a,	// (0x0000a60a) fep_vkb_top_pane_g_ParamLimits

0xa60a,	// (0x0000a60a) fep_vkb_top_pane_g

0x6279,	// (0x00006279) fep_vkb_top_text_pane_ParamLimits

0x6279,	// (0x00006279) fep_vkb_top_text_pane

0xcbbc,	// (0x0000cbbc) fep_vkb_side_pane_g1_ParamLimits

0xcbbc,	// (0x0000cbbc) fep_vkb_side_pane_g1

0x62d3,	// (0x000062d3) grid_vkb_side_pane_ParamLimits

0x62d3,	// (0x000062d3) grid_vkb_side_pane

0x656c,	// (0x0000656c) bg_popup_fep_shadow_pane_g2

0x6575,	// (0x00006575) bg_popup_fep_shadow_pane_g3

0x657d,	// (0x0000657d) bg_popup_fep_shadow_pane_g4

0x6586,	// (0x00006586) bg_popup_fep_shadow_pane_g5

0x658e,	// (0x0000658e) bg_popup_fep_shadow_pane_g6

0x6596,	// (0x00006596) bg_popup_fep_shadow_pane_g7

0x1351,	// (0x00001351) bg_popup_fep_shadow_pane_g8

0x6324,	// (0x00006324) grid_vkb_keypad_number_pane_ParamLimits

0x6324,	// (0x00006324) grid_vkb_keypad_number_pane

0x6334,	// (0x00006334) grid_vkb_keypad_pane_ParamLimits

0x6334,	// (0x00006334) grid_vkb_keypad_pane

0x635a,	// (0x0000635a) fep_vkb_bottom_pane_g1_ParamLimits

0x635a,	// (0x0000635a) fep_vkb_bottom_pane_g1

0x6383,	// (0x00006383) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6383,	// (0x00006383) grid_vkb_keypad_bottom_left_pane

0x6398,	// (0x00006398) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6398,	// (0x00006398) grid_vkb_keypad_bottom_right_pane

0x63ad,	// (0x000063ad) fep_vkb_top_text_pane_g1

0xcc03,	// (0x0000cc03) fep_vkb_top_text_pane_t1

0xcc15,	// (0x0000cc15) cell_vkb_side_pane_ParamLimits

0xcc15,	// (0x0000cc15) cell_vkb_side_pane

0x5e2d,	// (0x00005e2d) cell_vkb_side_pane_g1

0x641c,	// (0x0000641c) cell_vkb_keypad_pane_ParamLimits

0x641c,	// (0x0000641c) cell_vkb_keypad_pane

0x6489,	// (0x00006489) cell_vkb_keypad_pane_g1

0x0008,

0xa637,	// (0x0000a637) bg_popup_fep_shadow_pane_g

0x5e2d,	// (0x00005e2d) cell_hwr_side_pane_g1

0x5e2d,	// (0x00005e2d) cell_hwr_side_pane_g2

0x6493,	// (0x00006493) cell_vkb_keypad_pane_t1

0xcc2b,	// (0x0000cc2b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcc2b,	// (0x0000cc2b) cell_vkb_keypad_bottom_left_pane

0xcc40,	// (0x0000cc40) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc40,	// (0x0000cc40) cell_vkb_keypad_bottom_right_pane

0x5e2d,	// (0x00005e2d) cell_vkb_keypad_bottom_left_pane_g1

0x5e2d,	// (0x00005e2d) cell_vkb_keypad_bottom_right_pane_g1

0x64f7,	// (0x000064f7) cell_vkb_keypad_number_pane_ParamLimits

0x64f7,	// (0x000064f7) cell_vkb_keypad_number_pane

0x6516,	// (0x00006516) cell_vkb_keypad_number_pane_g1

0x6520,	// (0x00006520) cell_vkb_keypad_number_pane_g2

0x6529,	// (0x00006529) cell_vkb_keypad_number_pane_g3

0x0002,

0xa629,	// (0x0000a629) cell_vkb_keypad_number_pane_g

0x6493,	// (0x00006493) cell_vkb_keypad_number_pane_t1

0x654b,	// (0x0000654b) fep_vkb_candidate_pane_g1

0x0001,

0xa624,	// (0x0000a624) cell_hwr_side_pane_g

0x65a6,	// (0x000065a6) cell_hwr_side_pane_t1

0x65b4,	// (0x000065b4) cell_hwr_side_pane_t1_copy1

0x626b,	// (0x0000626b) cell_hwr_candidate_pane_g1

0x6604,	// (0x00006604) cell_hwr_candidate_pane_t1

0x5e2d,	// (0x00005e2d) cell_vkb_candidate_pane_g2

0x6657,	// (0x00006657) cell_vkb_candidate_pane_t1

0x5e86,	// (0x00005e86) bg_popup_fep_shadow_pane_ParamLimits

0x5e86,	// (0x00005e86) bg_popup_fep_shadow_pane

0x5f35,	// (0x00005f35) bg_fep_hwr_top_pane_g4

0x5fa3,	// (0x00005fa3) bg_hwr_side_pane_g1_ParamLimits

0x5fa3,	// (0x00005fa3) bg_hwr_side_pane_g1

0xcb77,	// (0x0000cb77) cell_hwr_side_pane_ParamLimits

0xcb77,	// (0x0000cb77) cell_hwr_side_pane

0x6011,	// (0x00006011) fep_hwr_write_pane_g1_ParamLimits

0x6011,	// (0x00006011) fep_hwr_write_pane_g1

0x601e,	// (0x0000601e) fep_hwr_write_pane_g2_ParamLimits

0x601e,	// (0x0000601e) fep_hwr_write_pane_g2

0x602b,	// (0x0000602b) fep_hwr_write_pane_g3_ParamLimits

0x602b,	// (0x0000602b) fep_hwr_write_pane_g3

0xcb97,	// (0x0000cb97) fep_hwr_write_pane_g4_ParamLimits

0xcb97,	// (0x0000cb97) fep_hwr_write_pane_g4

0x0005,

0xe9a9,	// (0x0000e9a9) fep_hwr_write_pane_g_ParamLimits

0xe9a9,	// (0x0000e9a9) fep_hwr_write_pane_g

0x5f35,	// (0x00005f35) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5f35,	// (0x00005f35) bg_fep_hwr_candidate_pane_g2

0x6074,	// (0x00006074) cell_hwr_candidate_pane_ParamLimits

0x6074,	// (0x00006074) cell_hwr_candidate_pane

0x60ae,	// (0x000060ae) fep_hwr_candidate_pane_g1_ParamLimits

0x6110,	// (0x00006110) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6110,	// (0x00006110) bg_popup_fep_shadow_pane_cp2

0x626b,	// (0x0000626b) fep_vkb_top_pane_g4_ParamLimits

0x626b,	// (0x0000626b) fep_vkb_top_pane_g4

0x62b1,	// (0x000062b1) fep_vkb_side_pane_g2_ParamLimits

0x62b1,	// (0x000062b1) fep_vkb_side_pane_g2

0xb231,	// (0x0000b231) list_setting_pane_t4_ParamLimits

0xb231,	// (0x0000b231) list_setting_pane_t4

0xb2b3,	// (0x0000b2b3) list_setting_number_pane_t5_ParamLimits

0xb2b3,	// (0x0000b2b3) list_setting_number_pane_t5

0xb5ca,	// (0x0000b5ca) list_double_heading_pane_cp2_ParamLimits

0xb5ca,	// (0x0000b5ca) list_double_heading_pane_cp2

0x21a4,	// (0x000021a4) list_double_heading_pane_g1_cp2_ParamLimits

0x21a4,	// (0x000021a4) list_double_heading_pane_g1_cp2

0x6665,	// (0x00006665) list_double_heading_pane_g2_cp2_ParamLimits

0x6665,	// (0x00006665) list_double_heading_pane_g2_cp2

0x6679,	// (0x00006679) list_double_heading_pane_t1_cp2_ParamLimits

0x6679,	// (0x00006679) list_double_heading_pane_t1_cp2

0x668f,	// (0x0000668f) list_double_heading_pane_t2_cp2_ParamLimits

0x668f,	// (0x0000668f) list_double_heading_pane_t2_cp2

0x000a,	// (0x0000000a) aid_value_unit2

0x02b4,	// (0x000002b4) popup_preview_fixed_window

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02

0x66a1,	// (0x000066a1) list_preview_fixed_pane

0x66e7,	// (0x000066e7) list_empty_pane_fp_ParamLimits

0x66e7,	// (0x000066e7) list_empty_pane_fp

0x66e7,	// (0x000066e7) list_single_cale_day_pane_fp_ParamLimits

0x66e7,	// (0x000066e7) list_single_cale_day_pane_fp

0x66e7,	// (0x000066e7) list_single_graphic_heading_pane_fp_ParamLimits

0x66e7,	// (0x000066e7) list_single_graphic_heading_pane_fp

0x66e7,	// (0x000066e7) list_single_graphic_pane_fp_ParamLimits

0x66e7,	// (0x000066e7) list_single_graphic_pane_fp

0x66e7,	// (0x000066e7) list_single_heading_pane_fp_ParamLimits

0x66e7,	// (0x000066e7) list_single_heading_pane_fp

0x66e7,	// (0x000066e7) list_single_pane_fp_ParamLimits

0x66e7,	// (0x000066e7) list_single_pane_fp

0x66fb,	// (0x000066fb) list_single_pane_fp_g1_ParamLimits

0x66fb,	// (0x000066fb) list_single_pane_fp_g1

0x0ea6,	// (0x00000ea6) list_single_pane_fp_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_pane_fp_g2

0x6707,	// (0x00006707) list_single_pane_fp_g3_ParamLimits

0x6707,	// (0x00006707) list_single_pane_fp_g3

0x671b,	// (0x0000671b) list_single_pane_fp_g4_ParamLimits

0x671b,	// (0x0000671b) list_single_pane_fp_g4

0x0003,

0xa658,	// (0x0000a658) list_single_pane_fp_g_ParamLimits

0xa658,	// (0x0000a658) list_single_pane_fp_g

0x6727,	// (0x00006727) list_single_pane_fp_t1_ParamLimits

0x6727,	// (0x00006727) list_single_pane_fp_t1

0x673e,	// (0x0000673e) list_single_graphic_pane_fp_g1_ParamLimits

0x673e,	// (0x0000673e) list_single_graphic_pane_fp_g1

0x66fb,	// (0x000066fb) list_single_graphic_pane_fp_g2_ParamLimits

0x66fb,	// (0x000066fb) list_single_graphic_pane_fp_g2

0x0ea6,	// (0x00000ea6) list_single_graphic_pane_fp_g3_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_pane_fp_g3

0x6707,	// (0x00006707) list_single_graphic_pane_fp_g4_ParamLimits

0x6707,	// (0x00006707) list_single_graphic_pane_fp_g4

0x671b,	// (0x0000671b) list_single_graphic_pane_fp_g5_ParamLimits

0x671b,	// (0x0000671b) list_single_graphic_pane_fp_g5

0x0004,

0xa661,	// (0x0000a661) list_single_graphic_pane_fp_g_ParamLimits

0xa661,	// (0x0000a661) list_single_graphic_pane_fp_g

0x674a,	// (0x0000674a) list_single_graphic_pane_fp_t1_ParamLimits

0x674a,	// (0x0000674a) list_single_graphic_pane_fp_t1

0x673e,	// (0x0000673e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x673e,	// (0x0000673e) list_single_graphic_heading_pane_fp_g1

0x66fb,	// (0x000066fb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x66fb,	// (0x000066fb) list_single_graphic_heading_pane_fp_g2

0x0ea6,	// (0x00000ea6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_heading_pane_fp_g3

0x6707,	// (0x00006707) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6707,	// (0x00006707) list_single_graphic_heading_pane_fp_g4

0x671b,	// (0x0000671b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x671b,	// (0x0000671b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xa661,	// (0x0000a661) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa661,	// (0x0000a661) list_single_graphic_heading_pane_fp_g

0x6760,	// (0x00006760) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6760,	// (0x00006760) list_single_graphic_heading_pane_fp_t1

0x6776,	// (0x00006776) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6776,	// (0x00006776) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa66c,	// (0x0000a66c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa66c,	// (0x0000a66c) list_single_graphic_heading_pane_fp_t

0x6788,	// (0x00006788) list_single_cale_day_pane_fp_g1_ParamLimits

0x6788,	// (0x00006788) list_single_cale_day_pane_fp_g1

0x67c0,	// (0x000067c0) list_single_cale_day_pane_fp_g2_ParamLimits

0x67c0,	// (0x000067c0) list_single_cale_day_pane_fp_g2

0x67cc,	// (0x000067cc) list_single_cale_day_pane_fp_g3_ParamLimits

0x67cc,	// (0x000067cc) list_single_cale_day_pane_fp_g3

0x67f4,	// (0x000067f4) list_single_cale_day_pane_fp_g4_ParamLimits

0x67f4,	// (0x000067f4) list_single_cale_day_pane_fp_g4

0x6818,	// (0x00006818) list_single_cale_day_pane_fp_g5_ParamLimits

0x6818,	// (0x00006818) list_single_cale_day_pane_fp_g5

0x0004,

0xa671,	// (0x0000a671) list_single_cale_day_pane_fp_g_ParamLimits

0xa671,	// (0x0000a671) list_single_cale_day_pane_fp_g

0x683c,	// (0x0000683c) list_single_cale_day_pane_fp_t1_ParamLimits

0x683c,	// (0x0000683c) list_single_cale_day_pane_fp_t1

0x6862,	// (0x00006862) list_single_cale_day_pane_fp_t2_ParamLimits

0x6862,	// (0x00006862) list_single_cale_day_pane_fp_t2

0x687b,	// (0x0000687b) list_single_cale_day_pane_fp_t3_ParamLimits

0x687b,	// (0x0000687b) list_single_cale_day_pane_fp_t3

0x0002,

0xa67c,	// (0x0000a67c) list_single_cale_day_pane_fp_t_ParamLimits

0xa67c,	// (0x0000a67c) list_single_cale_day_pane_fp_t

0x66fb,	// (0x000066fb) list_empty_pane_fp_g1_ParamLimits

0x66fb,	// (0x000066fb) list_empty_pane_fp_g1

0x6894,	// (0x00006894) list_empty_pane_fp_t1

0x68a2,	// (0x000068a2) list_empty_pane_fp_t2

0x0001,

0xa683,	// (0x0000a683) list_empty_pane_fp_t

0x66fb,	// (0x000066fb) list_single_heading_pane_fp_g1_ParamLimits

0x66fb,	// (0x000066fb) list_single_heading_pane_fp_g1

0x0ea6,	// (0x00000ea6) list_single_heading_pane_fp_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_heading_pane_fp_g2

0x6707,	// (0x00006707) list_single_heading_pane_fp_g3_ParamLimits

0x6707,	// (0x00006707) list_single_heading_pane_fp_g3

0x0002,

0xa688,	// (0x0000a688) list_single_heading_pane_fp_g_ParamLimits

0xa688,	// (0x0000a688) list_single_heading_pane_fp_g

0x68b0,	// (0x000068b0) list_single_heading_pane_fp_t1_ParamLimits

0x68b0,	// (0x000068b0) list_single_heading_pane_fp_t1

0x68c2,	// (0x000068c2) list_single_heading_pane_fp_t2_ParamLimits

0x68c2,	// (0x000068c2) list_single_heading_pane_fp_t2

0x0001,

0xa68f,	// (0x0000a68f) list_single_heading_pane_fp_t_ParamLimits

0xa68f,	// (0x0000a68f) list_single_heading_pane_fp_t

0x1562,	// (0x00001562) aid_size_cell_fast

0x070c,	// (0x0000070c) soft_indicator_pane_cp1_t1

0x159f,	// (0x0000159f) cell_app_pane_cp2_ParamLimits

0x159f,	// (0x0000159f) cell_app_pane_cp2

0x5ea8,	// (0x00005ea8) fep_hwr_candidate_drop_down_list_pane

0x60c8,	// (0x000060c8) fep_hwr_candidate_pane_g3_ParamLimits

0x60c8,	// (0x000060c8) fep_hwr_candidate_pane_g3

0x60d5,	// (0x000060d5) fep_hwr_candidate_pane_g4_ParamLimits

0x60d5,	// (0x000060d5) fep_hwr_candidate_pane_g4

0x0002,

0xa603,	// (0x0000a603) fep_hwr_candidate_pane_g_ParamLimits

0xa603,	// (0x0000a603) fep_hwr_candidate_pane_g

0x6184,	// (0x00006184) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6184,	// (0x00006184) fep_vkb_candidate_drop_down_list_pane

0x6553,	// (0x00006553) fep_vkb_candidate_pane_g3

0x655b,	// (0x0000655b) fep_vkb_candidate_pane_g4

0x0002,

0xa630,	// (0x0000a630) fep_vkb_candidate_pane_g

0x626b,	// (0x0000626b) cell_hwr_candidate_pane_g1_ParamLimits

0x65c2,	// (0x000065c2) cell_hwr_candidate_pane_g3_ParamLimits

0x65c2,	// (0x000065c2) cell_hwr_candidate_pane_g3

0x65e3,	// (0x000065e3) cell_hwr_candidate_pane_g4_ParamLimits

0x65e3,	// (0x000065e3) cell_hwr_candidate_pane_g4

0x0002,

0xa64a,	// (0x0000a64a) cell_hwr_candidate_pane_g_ParamLimits

0xa64a,	// (0x0000a64a) cell_hwr_candidate_pane_g

0x6621,	// (0x00006621) cell_vkb_candidate_pane_g3_ParamLimits

0x6621,	// (0x00006621) cell_vkb_candidate_pane_g3

0x663c,	// (0x0000663c) cell_vkb_candidate_pane_g4_ParamLimits

0x663c,	// (0x0000663c) cell_vkb_candidate_pane_g4

0x68d8,	// (0x000068d8) cell_app_pane_cp2_g1_ParamLimits

0x68d8,	// (0x000068d8) cell_app_pane_cp2_g1

0x68f6,	// (0x000068f6) cell_app_pane_cp2_g2_ParamLimits

0x68f6,	// (0x000068f6) cell_app_pane_cp2_g2

0x0001,

0xa694,	// (0x0000a694) cell_app_pane_cp2_g_ParamLimits

0xa694,	// (0x0000a694) cell_app_pane_cp2_g

0x6902,	// (0x00006902) cell_app_pane_cp2_t1_ParamLimits

0x6902,	// (0x00006902) cell_app_pane_cp2_t1

0x120e,	// (0x0000120e) grid_highlight_pane_cp1_ParamLimits

0x120e,	// (0x0000120e) grid_highlight_pane_cp1

0x6914,	// (0x00006914) cell_hwr_candidate_pane_cp1_ParamLimits

0x6914,	// (0x00006914) cell_hwr_candidate_pane_cp1

0x626b,	// (0x0000626b) fep_hwr_candidate_drop_down_list_pane_g1

0x6932,	// (0x00006932) fep_hwr_candidate_drop_down_list_pane_g2

0x693f,	// (0x0000693f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xa699,	// (0x0000a699) fep_hwr_candidate_drop_down_list_pane_g

0x694c,	// (0x0000694c) fep_hwr_candidate_drop_down_list_scroll_pane

0x6955,	// (0x00006955) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6955,	// (0x00006955) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6962,	// (0x00006962) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6962,	// (0x00006962) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x696f,	// (0x0000696f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x696f,	// (0x0000696f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6621,	// (0x00006621) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6621,	// (0x00006621) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x663c,	// (0x0000663c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x663c,	// (0x0000663c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x697c,	// (0x0000697c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x697c,	// (0x0000697c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6997,	// (0x00006997) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6997,	// (0x00006997) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x69b2,	// (0x000069b2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x69b2,	// (0x000069b2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa6a0,	// (0x0000a6a0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa6a0,	// (0x0000a6a0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcc5b,	// (0x0000cc5b) cell_vkb_candidate_pane_cp1_ParamLimits

0xcc5b,	// (0x0000cc5b) cell_vkb_candidate_pane_cp1

0x626b,	// (0x0000626b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x626b,	// (0x0000626b) fep_vkb_candidate_drop_down_list_pane_g1

0x6932,	// (0x00006932) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6932,	// (0x00006932) fep_vkb_candidate_drop_down_list_pane_g2

0x693f,	// (0x0000693f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x693f,	// (0x0000693f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa699,	// (0x0000a699) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa699,	// (0x0000a699) fep_vkb_candidate_drop_down_list_pane_g

0x69f0,	// (0x000069f0) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x69f0,	// (0x000069f0) fep_vkb_candidate_drop_down_list_scroll_pane

0x69fd,	// (0x000069fd) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69fd,	// (0x000069fd) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6a0a,	// (0x00006a0a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6a0a,	// (0x00006a0a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6a16,	// (0x00006a16) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6a16,	// (0x00006a16) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x65c2,	// (0x000065c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x65c2,	// (0x000065c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x65e3,	// (0x000065e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x65e3,	// (0x000065e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6a22,	// (0x00006a22) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6a22,	// (0x00006a22) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6a43,	// (0x00006a43) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a43,	// (0x00006a43) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6a64,	// (0x00006a64) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a64,	// (0x00006a64) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa6b1,	// (0x0000a6b1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa6b1,	// (0x0000a6b1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xabb6,	// (0x0000abb6) title_pane_g1_ParamLimits

0xabcd,	// (0x0000abcd) title_pane_g2_ParamLimits

0xe7ab,	// (0x0000e7ab) title_pane_g_ParamLimits

0x1b1f,	// (0x00001b1f) aid_call2_pane

0x1b27,	// (0x00001b27) aid_call_pane

0x1b2f,	// (0x00001b2f) popup_clock_analogue_window_g1

0x1b2f,	// (0x00001b2f) popup_clock_analogue_window_g2

0x1b37,	// (0x00001b37) popup_clock_analogue_window_g3

0x1b40,	// (0x00001b40) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0xa1e7,	// (0x0000a1e7) popup_clock_analogue_window_g

0x1b48,	// (0x00001b48) popup_clock_analogue_window_t1

0x1bbb,	// (0x00001bbb) clock_digital_number_pane_ParamLimits

0x1bbb,	// (0x00001bbb) clock_digital_number_pane

0x1bc7,	// (0x00001bc7) clock_digital_number_pane_cp02_ParamLimits

0x1bc7,	// (0x00001bc7) clock_digital_number_pane_cp02

0x1bd3,	// (0x00001bd3) clock_digital_number_pane_cp03_ParamLimits

0x1bd3,	// (0x00001bd3) clock_digital_number_pane_cp03

0x1bdf,	// (0x00001bdf) clock_digital_number_pane_cp04_ParamLimits

0x1bdf,	// (0x00001bdf) clock_digital_number_pane_cp04

0x1beb,	// (0x00001beb) clock_digital_separator_pane_ParamLimits

0x1beb,	// (0x00001beb) clock_digital_separator_pane

0x1bf7,	// (0x00001bf7) popup_clock_digital_window_t1_ParamLimits

0x1bf7,	// (0x00001bf7) popup_clock_digital_window_t1

0x002a,	// (0x0000002a) clock_digital_number_pane_g1

0x002a,	// (0x0000002a) clock_digital_number_pane_g2

0x0001,

0xa1f2,	// (0x0000a1f2) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0xa1f2,	// (0x0000a1f2) clock_digital_separator_pane_g

0xbf93,	// (0x0000bf93) aid_fill_nsta_ParamLimits

0xc0aa,	// (0x0000c0aa) indicator_nsta_pane_ParamLimits

0x2fe6,	// (0x00002fe6) popup_clock_analogue_window

0x2fe6,	// (0x00002fe6) popup_clock_digital_window

0x1523,	// (0x00001523) grid_indicator_nsta_pane_ParamLimits

0x586d,	// (0x0000586d) clock_nsta_pane_t2

0x0001,

0xa583,	// (0x0000a583) clock_nsta_pane_t

0x1908,	// (0x00001908) aid_size_max_handle

0xb52e,	// (0x0000b52e) aid_size_min_handle

0x232f,	// (0x0000232f) editor_scroll_pane

0x6a7f,	// (0x00006a7f) ex_editor_pane

0x14d2,	// (0x000014d2) scroll_pane_cp13

0x0c91,	// (0x00000c91) scroll_pane_cp14

0x1b7d,	// (0x00001b7d) scroll_pane_cp36

0xb5d6,	// (0x0000b5d6) list_single_graphic_hl_pane_cp2_ParamLimits

0xb5d6,	// (0x0000b5d6) list_single_graphic_hl_pane_cp2

0xc8ae,	// (0x0000c8ae) list_single_graphic_hl_pane_ParamLimits

0xc8ae,	// (0x0000c8ae) list_single_graphic_hl_pane

0x6a87,	// (0x00006a87) aid_size_min_hl_cp1

0x6a90,	// (0x00006a90) list_highlight_pane_cp34_ParamLimits

0x6a90,	// (0x00006a90) list_highlight_pane_cp34

0x6aa1,	// (0x00006aa1) list_single_graphic_hl_pane_g1_ParamLimits

0x6aa1,	// (0x00006aa1) list_single_graphic_hl_pane_g1

0xcc7b,	// (0x0000cc7b) list_single_graphic_hl_pane_g2_ParamLimits

0xcc7b,	// (0x0000cc7b) list_single_graphic_hl_pane_g2

0xcc7b,	// (0x0000cc7b) list_single_graphic_hl_pane_g3_ParamLimits

0xcc7b,	// (0x0000cc7b) list_single_graphic_hl_pane_g3

0x0ca5,	// (0x00000ca5) list_single_graphic_hl_pane_g4_ParamLimits

0x0ca5,	// (0x00000ca5) list_single_graphic_hl_pane_g4

0x1234,	// (0x00001234) list_single_graphic_hl_pane_g5_ParamLimits

0x1234,	// (0x00001234) list_single_graphic_hl_pane_g5

0x0004,

0xe9c2,	// (0x0000e9c2) list_single_graphic_hl_pane_g_ParamLimits

0xe9c2,	// (0x0000e9c2) list_single_graphic_hl_pane_g

0xcc87,	// (0x0000cc87) list_single_graphic_hl_pane_t1_ParamLimits

0xcc87,	// (0x0000cc87) list_single_graphic_hl_pane_t1

0x6ad0,	// (0x00006ad0) aid_size_min_hl_cp2

0x6ad9,	// (0x00006ad9) list_highlight_pane_cp34_cp2_ParamLimits

0x6ad9,	// (0x00006ad9) list_highlight_pane_cp34_cp2

0x6aa1,	// (0x00006aa1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6aa1,	// (0x00006aa1) list_single_graphic_hl_pane_g1_cp2

0x6ae6,	// (0x00006ae6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6ae6,	// (0x00006ae6) list_single_graphic_hl_pane_g2_cp2

0x6af2,	// (0x00006af2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6af2,	// (0x00006af2) list_single_graphic_hl_pane_g3_cp2

0x21a4,	// (0x000021a4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x21a4,	// (0x000021a4) list_single_graphic_hl_pane_g4_cp2

0x6665,	// (0x00006665) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6665,	// (0x00006665) list_single_graphic_hl_pane_g5_cp2

0xb891,	// (0x0000b891) control_pane_g4_ParamLimits

0xb891,	// (0x0000b891) control_pane_g4

0x289b,	// (0x0000289b) bg_popup_sub_pane_cp10_ParamLimits

0x5e37,	// (0x00005e37) list_choice_list_pane_ParamLimits

0x5e46,	// (0x00005e46) scroll_pane_cp23

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02_ParamLimits

0x66a1,	// (0x000066a1) list_preview_fixed_pane_ParamLimits

0x66b7,	// (0x000066b7) list_preview_fixed_pane_cp_ParamLimits

0x66b7,	// (0x000066b7) list_preview_fixed_pane_cp

0x66c3,	// (0x000066c3) popup_preview_fixed_window_g1_ParamLimits

0x66c3,	// (0x000066c3) popup_preview_fixed_window_g1

0x66cf,	// (0x000066cf) popup_preview_fixed_window_g2_ParamLimits

0x66cf,	// (0x000066cf) popup_preview_fixed_window_g2

0x0002,

0xa651,	// (0x0000a651) popup_preview_fixed_window_g_ParamLimits

0xa651,	// (0x0000a651) popup_preview_fixed_window_g

0x17d5,	// (0x000017d5) aid_navi_side_left_pane_ParamLimits

0x17e5,	// (0x000017e5) aid_navi_side_right_pane_ParamLimits

0x17f4,	// (0x000017f4) navi_icon_pane_stacon_ParamLimits

0x1804,	// (0x00001804) navi_navi_pane_stacon_ParamLimits

0x17f4,	// (0x000017f4) navi_text_pane_stacon_ParamLimits

0x0020,	// (0x00000020) main_text_info_pane

0x6b14,	// (0x00006b14) listscroll_text_info_pane

0x6b1c,	// (0x00006b1c) list_text_info_pane_ParamLimits

0x6b1c,	// (0x00006b1c) list_text_info_pane

0x6b2b,	// (0x00006b2b) scroll_pane_cp24_ParamLimits

0x6b2b,	// (0x00006b2b) scroll_pane_cp24

0xcc9d,	// (0x0000cc9d) list_text_info_pane_t1_ParamLimits

0xcc9d,	// (0x0000cc9d) list_text_info_pane_t1

0xba1c,	// (0x0000ba1c) popup_fast_swap2_window_ParamLimits

0xba1c,	// (0x0000ba1c) popup_fast_swap2_window

0x6b66,	// (0x00006b66) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x3821,	// (0x00003821) heading_pane_cp2

0x0a13,	// (0x00000a13) listscroll_fast2_pane

0x6b70,	// (0x00006b70) grid_fast2_pane

0x6b78,	// (0x00006b78) listscroll_fast2_pane_g1

0x6b80,	// (0x00006b80) listscroll_fast2_pane_g2

0x0001,

0xa6cd,	// (0x0000a6cd) listscroll_fast2_pane_g

0x14d2,	// (0x000014d2) scroll_pane_cp26

0x6b88,	// (0x00006b88) cell_fast2_pane_ParamLimits

0x6b88,	// (0x00006b88) cell_fast2_pane

0x6b9e,	// (0x00006b9e) cell_fast2_pane_g1

0x6ba7,	// (0x00006ba7) cell_fast2_pane_g2

0x6bb0,	// (0x00006bb0) cell_fast2_pane_g3

0x0002,

0xa6d2,	// (0x0000a6d2) cell_fast2_pane_g

0x0aea,	// (0x00000aea) grid_highlight_pane_cp9

0x0aff,	// (0x00000aff) main_eswt_pane_ParamLimits

0x0aff,	// (0x00000aff) main_eswt_pane

0x6b40,	// (0x00006b40) list_single_text_info_pane

0x6bb8,	// (0x00006bb8) eswt_ctrl_button_pane

0x6bb8,	// (0x00006bb8) eswt_ctrl_canvas_pane

0x6bc0,	// (0x00006bc0) eswt_ctrl_combo_pane

0x6bb8,	// (0x00006bb8) eswt_ctrl_default_pane

0x6bb8,	// (0x00006bb8) eswt_ctrl_label_pane

0x6bc8,	// (0x00006bc8) eswt_ctrl_wait_pane

0x6bd0,	// (0x00006bd0) eswt_shell_pane

0x0020,	// (0x00000020) listscroll_eswt_app_pane

0x6bec,	// (0x00006bec) popup_eswt_tasktip_window_ParamLimits

0x6bec,	// (0x00006bec) popup_eswt_tasktip_window

0x33f3,	// (0x000033f3) bg_popup_window_pane_cp18

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_ParamLimits

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_ParamLimits

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2

0x6c17,	// (0x00006c17) eswt_control_pane_g3_ParamLimits

0x6c17,	// (0x00006c17) eswt_control_pane_g3

0x6c24,	// (0x00006c24) eswt_control_pane_g4_ParamLimits

0x6c24,	// (0x00006c24) eswt_control_pane_g4

0x0003,

0xa6d9,	// (0x0000a6d9) eswt_control_pane_g_ParamLimits

0xa6d9,	// (0x0000a6d9) eswt_control_pane_g

0x120e,	// (0x0000120e) bg_button_pane_ParamLimits

0x120e,	// (0x0000120e) bg_button_pane

0x0aff,	// (0x00000aff) common_borders_pane_copy2_ParamLimits

0x0aff,	// (0x00000aff) common_borders_pane_copy2

0x6c31,	// (0x00006c31) control_button_pane_g1_ParamLimits

0x6c31,	// (0x00006c31) control_button_pane_g1

0x6c3d,	// (0x00006c3d) control_button_pane_g2_ParamLimits

0x6c3d,	// (0x00006c3d) control_button_pane_g2

0x6c49,	// (0x00006c49) control_button_pane_g3_ParamLimits

0x6c49,	// (0x00006c49) control_button_pane_g3

0x0002,

0xa6e2,	// (0x0000a6e2) control_button_pane_g_ParamLimits

0xa6e2,	// (0x0000a6e2) control_button_pane_g

0x6c5d,	// (0x00006c5d) control_button_pane_t1

0x6c6b,	// (0x00006c6b) control_button_pane_t2

0x0001,

0xa6e9,	// (0x0000a6e9) control_button_pane_t

0x3269,	// (0x00003269) bg_button_pane_g1

0x3271,	// (0x00003271) bg_button_pane_g2

0x3279,	// (0x00003279) bg_button_pane_g3

0x3281,	// (0x00003281) bg_button_pane_g4

0x3289,	// (0x00003289) bg_button_pane_g5

0x3291,	// (0x00003291) bg_button_pane_g6

0x3299,	// (0x00003299) bg_button_pane_g7

0x32a1,	// (0x000032a1) bg_button_pane_g8

0x32a9,	// (0x000032a9) bg_button_pane_g9

0x0008,

0xa349,	// (0x0000a349) bg_button_pane_g

0x5df2,	// (0x00005df2) common_borders_pane_ParamLimits

0x5df2,	// (0x00005df2) common_borders_pane

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy1_ParamLimits

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy1

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy1_ParamLimits

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy1

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy1_ParamLimits

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy1

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy1_ParamLimits

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy1

0x5e2d,	// (0x00005e2d) bg_eswt_ctrl_canvas_pane_g1

0x5df2,	// (0x00005df2) common_borders_pane_cp2_ParamLimits

0x5df2,	// (0x00005df2) common_borders_pane_cp2

0x5df2,	// (0x00005df2) common_borders_pane_cp3_ParamLimits

0x5df2,	// (0x00005df2) common_borders_pane_cp3

0x6c79,	// (0x00006c79) separator_horizontal_pane

0x1963,	// (0x00001963) separator_vertical_pane

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy2_ParamLimits

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy2

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy2_ParamLimits

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy2

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy2_ParamLimits

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy2

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy2_ParamLimits

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy2

0x0020,	// (0x00000020) common_borders_pane_cp4

0x6c81,	// (0x00006c81) separator_horizontal_pane_g1

0x6c8a,	// (0x00006c8a) separator_horizontal_pane_g2

0x6c93,	// (0x00006c93) separator_horizontal_pane_g3

0x0002,

0xa6ee,	// (0x0000a6ee) separator_horizontal_pane_g

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy3_ParamLimits

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy3

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy3_ParamLimits

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy3

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy3_ParamLimits

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy3

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy3_ParamLimits

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy3

0x0020,	// (0x00000020) common_borders_pane_cp5

0x6c9c,	// (0x00006c9c) separator_vertical_pane_g1

0x6ca5,	// (0x00006ca5) separator_vertical_pane_g2

0x6cae,	// (0x00006cae) separator_vertical_pane_g3

0x0002,

0xa6f5,	// (0x0000a6f5) separator_vertical_pane_g

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy4_ParamLimits

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy4

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy4_ParamLimits

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy4

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy4_ParamLimits

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy4

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy4_ParamLimits

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy4

0xccb8,	// (0x0000ccb8) eswt_ctrl_combo_button_pane

0xccc0,	// (0x0000ccc0) eswt_ctrl_input_pane

0xccc8,	// (0x0000ccc8) popup_choice_list_window_cp70

0xccd0,	// (0x0000ccd0) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x5df2,	// (0x00005df2) bg_button_pane_cp70_ParamLimits

0x5df2,	// (0x00005df2) bg_button_pane_cp70

0xccde,	// (0x0000ccde) eswt_ctrl_combo_button_pane_g1

0x6ce5,	// (0x00006ce5) wait_bar_pane_cp70

0x33f3,	// (0x000033f3) bg_popup_window_pane_cp70_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_window_pane_cp70

0x6ced,	// (0x00006ced) popup_eswt_tasktip_window_t1

0x6d03,	// (0x00006d03) wait_bar_pane_cp71_ParamLimits

0x6d03,	// (0x00006d03) wait_bar_pane_cp71

0x6d0f,	// (0x00006d0f) grid_eswt_app_pane

0x196c,	// (0x0000196c) scroll_pane_cp70

0xcce6,	// (0x0000cce6) cell_eswt_app_pane_ParamLimits

0xcce6,	// (0x0000cce6) cell_eswt_app_pane

0xcd0e,	// (0x0000cd0e) cell_eswt_app_pane_g1_ParamLimits

0xcd0e,	// (0x0000cd0e) cell_eswt_app_pane_g1

0xcd3d,	// (0x0000cd3d) cell_eswt_app_pane_g2_ParamLimits

0xcd3d,	// (0x0000cd3d) cell_eswt_app_pane_g2

0x0001,

0xe9cd,	// (0x0000e9cd) cell_eswt_app_pane_g_ParamLimits

0xe9cd,	// (0x0000e9cd) cell_eswt_app_pane_g

0xcd66,	// (0x0000cd66) cell_eswt_app_pane_t1_ParamLimits

0xcd66,	// (0x0000cd66) cell_eswt_app_pane_t1

0x6dca,	// (0x00006dca) grid_highlight_pane_cp70_ParamLimits

0x6dca,	// (0x00006dca) grid_highlight_pane_cp70

0x0ca5,	// (0x00000ca5) set_content_pane_g1

0x2673,	// (0x00002673) status_small_volume_pane

0x6dd6,	// (0x00006dd6) status_small_volume_pane_g1

0x6dde,	// (0x00006dde) volume_small2_pane

0x6de7,	// (0x00006de7) volume_small2_pane_g1

0x6df0,	// (0x00006df0) volume_small2_pane_g2

0x6df9,	// (0x00006df9) volume_small2_pane_g3

0x6e02,	// (0x00006e02) volume_small2_pane_g4

0x6e0b,	// (0x00006e0b) volume_small2_pane_g5

0x6e14,	// (0x00006e14) volume_small2_pane_g6

0x6e1d,	// (0x00006e1d) volume_small2_pane_g7

0x6e26,	// (0x00006e26) volume_small2_pane_g8

0x6e2f,	// (0x00006e2f) volume_small2_pane_g9

0x6e38,	// (0x00006e38) volume_small2_pane_g10

0x0009,

0xa701,	// (0x0000a701) volume_small2_pane_g

0x63ad,	// (0x000063ad) fep_vkb_top_text_pane_g1_ParamLimits

0xcc03,	// (0x0000cc03) fep_vkb_top_text_pane_t1_ParamLimits

0x66db,	// (0x000066db) popup_preview_fixed_window_g3_ParamLimits

0x66db,	// (0x000066db) popup_preview_fixed_window_g3

0xbf3c,	// (0x0000bf3c) popup_toolbar_trans_pane

0xc720,	// (0x0000c720) aid_height_set_list_ParamLimits

0x4929,	// (0x00004929) aid_size_parent_ParamLimits

0x289b,	// (0x0000289b) list_highlight_pane_cp2_ParamLimits

0x0ca5,	// (0x00000ca5) set_content_pane_g1_ParamLimits

0xc8c1,	// (0x0000c8c1) list_single_image_pane_ParamLimits

0xc8c1,	// (0x0000c8c1) list_single_image_pane

0xcd98,	// (0x0000cd98) aid_size_cell_image_ParamLimits

0xcd98,	// (0x0000cd98) aid_size_cell_image

0xcda5,	// (0x0000cda5) grid_single_image_pane_ParamLimits

0xcda5,	// (0x0000cda5) grid_single_image_pane

0x0ca5,	// (0x00000ca5) list_single_image_pane_g1_ParamLimits

0x0ca5,	// (0x00000ca5) list_single_image_pane_g1

0x1234,	// (0x00001234) list_single_image_pane_g2_ParamLimits

0x1234,	// (0x00001234) list_single_image_pane_g2

0x0001,

0xa716,	// (0x0000a716) list_single_image_pane_g_ParamLimits

0xa716,	// (0x0000a716) list_single_image_pane_g

0x4aac,	// (0x00004aac) list_single_image_pane_t1_ParamLimits

0x4aac,	// (0x00004aac) list_single_image_pane_t1

0xcdb1,	// (0x0000cdb1) cell_image_list_pane_ParamLimits

0xcdb1,	// (0x0000cdb1) cell_image_list_pane

0xcdc5,	// (0x0000cdc5) cell_image_list_pane_g1

0xcdce,	// (0x0000cdce) cell_image_list_pane_g2

0x0001,

0xe9d2,	// (0x0000e9d2) cell_image_list_pane_g

0x6e7f,	// (0x00006e7f) aid_size_cell_tb_trans_pane

0x120e,	// (0x0000120e) bg_tb_trans_pane

0x6e91,	// (0x00006e91) grid_tb_trans_pane

0x3269,	// (0x00003269) bg_tb_trans_pane_g1

0x3271,	// (0x00003271) bg_tb_trans_pane_g2

0x3279,	// (0x00003279) bg_tb_trans_pane_g3

0x3281,	// (0x00003281) bg_tb_trans_pane_g4

0x3289,	// (0x00003289) bg_tb_trans_pane_g5

0x32a1,	// (0x000032a1) bg_tb_trans_pane_g6

0x32a9,	// (0x000032a9) bg_tb_trans_pane_g7

0x3291,	// (0x00003291) bg_tb_trans_pane_g8

0x3299,	// (0x00003299) bg_tb_trans_pane_g9

0x0008,

0xa720,	// (0x0000a720) bg_tb_trans_pane_g

0x6ea5,	// (0x00006ea5) cell_toolbar_trans_pane_ParamLimits

0x6ea5,	// (0x00006ea5) cell_toolbar_trans_pane

0x5e2d,	// (0x00005e2d) cell_toolbar_trans_pane_g1

0xcb00,	// (0x0000cb00) list_form2_midp_pane_t1

0xcb0e,	// (0x0000cb0e) list_form2_midp_pane_t2

0x0001,

0xe99d,	// (0x0000e99d) list_form2_midp_pane_t

0x5a92,	// (0x00005a92) scroll_pane_cp51_ParamLimits

0x5c77,	// (0x00005c77) form2_midp_wait_pane_g1

0x5c80,	// (0x00005c80) form2_midp_wait_pane_g2

0x5c89,	// (0x00005c89) form2_midp_wait_pane_g3

0x0002,

0xa5de,	// (0x0000a5de) form2_midp_wait_pane_g

0x0474,	// (0x00000474) list_highlight_pane_cp21_ParamLimits

0x5cc7,	// (0x00005cc7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5cd6,	// (0x00005cd6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4af3,	// (0x00004af3) list_single_2graphic_im_pane_ParamLimits

0x4af3,	// (0x00004af3) list_single_2graphic_im_pane

0xcdd7,	// (0x0000cdd7) list_single_2graphic_im_pane_g1_ParamLimits

0xcdd7,	// (0x0000cdd7) list_single_2graphic_im_pane_g1

0xcde8,	// (0x0000cde8) list_single_2graphic_im_pane_g2_ParamLimits

0xcde8,	// (0x0000cde8) list_single_2graphic_im_pane_g2

0xcdf4,	// (0x0000cdf4) list_single_2graphic_im_pane_g3_ParamLimits

0xcdf4,	// (0x0000cdf4) list_single_2graphic_im_pane_g3

0x0003,

0xe9d7,	// (0x0000e9d7) list_single_2graphic_im_pane_g_ParamLimits

0xe9d7,	// (0x0000e9d7) list_single_2graphic_im_pane_g

0xce08,	// (0x0000ce08) list_single_2graphic_im_pane_t1_ParamLimits

0xce08,	// (0x0000ce08) list_single_2graphic_im_pane_t1

0x66e7,	// (0x000066e7) list_single_graphic_2heading_pane_fp_ParamLimits

0x66e7,	// (0x000066e7) list_single_graphic_2heading_pane_fp

0x673e,	// (0x0000673e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x673e,	// (0x0000673e) list_single_graphic_2heading_pane_fp_g1

0x66fb,	// (0x000066fb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x66fb,	// (0x000066fb) list_single_graphic_2heading_pane_fp_g2

0x0ea6,	// (0x00000ea6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_2heading_pane_fp_g3

0x6707,	// (0x00006707) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6707,	// (0x00006707) list_single_graphic_2heading_pane_fp_g4

0x671b,	// (0x0000671b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x671b,	// (0x0000671b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xa661,	// (0x0000a661) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa661,	// (0x0000a661) list_single_graphic_2heading_pane_fp_g

0x6f39,	// (0x00006f39) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6f39,	// (0x00006f39) list_single_graphic_2heading_pane_fp_t1

0x6776,	// (0x00006776) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6776,	// (0x00006776) list_single_graphic_2heading_pane_fp_t2

0x6f4f,	// (0x00006f4f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6f4f,	// (0x00006f4f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xa73c,	// (0x0000a73c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xa73c,	// (0x0000a73c) list_single_graphic_2heading_pane_fp_t

0x604e,	// (0x0000604e) fep_hwr_write_pane_g5_ParamLimits

0x604e,	// (0x0000604e) fep_hwr_write_pane_g5

0x605a,	// (0x0000605a) fep_hwr_write_pane_g6_ParamLimits

0x605a,	// (0x0000605a) fep_hwr_write_pane_g6

0x6bd0,	// (0x00006bd0) eswt_shell_pane_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_window_pane_cp18_ParamLimits

0x4817,	// (0x00004817) heading_pane_cp70

0x6ced,	// (0x00006ced) popup_eswt_tasktip_window_t1_ParamLimits

0xbfd7,	// (0x0000bfd7) aid_touch_tab_arrow_left

0xbfeb,	// (0x0000bfeb) aid_touch_tab_arrow_right

0xabec,	// (0x0000abec) title_pane_g3_ParamLimits

0xabec,	// (0x0000abec) title_pane_g3

0x110c,	// (0x0000110c) set_value_pane_g1

0xbf3c,	// (0x0000bf3c) popup_toolbar_trans_pane_ParamLimits

0x6e7f,	// (0x00006e7f) aid_size_cell_tb_trans_pane_ParamLimits

0x120e,	// (0x0000120e) bg_tb_trans_pane_ParamLimits

0x6e91,	// (0x00006e91) grid_tb_trans_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane

0x0aff,	// (0x00000aff) cont_snote2_single_text_pane_ParamLimits

0x0aff,	// (0x00000aff) cont_snote2_single_text_pane

0x0aff,	// (0x00000aff) cont_snote2_single_graphic_pane_ParamLimits

0x0aff,	// (0x00000aff) cont_snote2_single_graphic_pane

0x3a37,	// (0x00003a37) cont_note_wait_pane_ParamLimits

0x3a37,	// (0x00003a37) cont_note_wait_pane

0x3a37,	// (0x00003a37) cont_note_image_pane_ParamLimits

0x3a37,	// (0x00003a37) cont_note_image_pane

0x6f65,	// (0x00006f65) popup_note2_window_g1_ParamLimits

0x6f65,	// (0x00006f65) popup_note2_window_g1

0x6f96,	// (0x00006f96) popup_note2_window_t1_ParamLimits

0x6f96,	// (0x00006f96) popup_note2_window_t1

0x6fdb,	// (0x00006fdb) popup_note2_window_t2_ParamLimits

0x6fdb,	// (0x00006fdb) popup_note2_window_t2

0x7020,	// (0x00007020) popup_note2_window_t3_ParamLimits

0x7020,	// (0x00007020) popup_note2_window_t3

0x7065,	// (0x00007065) popup_note2_window_t4_ParamLimits

0x7065,	// (0x00007065) popup_note2_window_t4

0x0829,	// (0x00000829) popup_note2_window_t5_ParamLimits

0x0829,	// (0x00000829) popup_note2_window_t5

0x0004,

0xa748,	// (0x0000a748) popup_note2_window_t_ParamLimits

0xa748,	// (0x0000a748) popup_note2_window_t

0x7094,	// (0x00007094) popup_note2_image_window_g1_ParamLimits

0x7094,	// (0x00007094) popup_note2_image_window_g1

0x70a0,	// (0x000070a0) popup_note2_image_window_g2_ParamLimits

0x70a0,	// (0x000070a0) popup_note2_image_window_g2

0x0001,

0xa753,	// (0x0000a753) popup_note2_image_window_g_ParamLimits

0xa753,	// (0x0000a753) popup_note2_image_window_g

0x70b2,	// (0x000070b2) popup_note2_image_window_t1_ParamLimits

0x70b2,	// (0x000070b2) popup_note2_image_window_t1

0x70ca,	// (0x000070ca) popup_note2_image_window_t2_ParamLimits

0x70ca,	// (0x000070ca) popup_note2_image_window_t2

0x70e2,	// (0x000070e2) popup_note2_image_window_t3_ParamLimits

0x70e2,	// (0x000070e2) popup_note2_image_window_t3

0x0002,

0xa758,	// (0x0000a758) popup_note2_image_window_t_ParamLimits

0xa758,	// (0x0000a758) popup_note2_image_window_t

0x3a45,	// (0x00003a45) popup_note2_wait_window_g1_ParamLimits

0x3a45,	// (0x00003a45) popup_note2_wait_window_g1

0x3a51,	// (0x00003a51) popup_note2_wait_window_g2_ParamLimits

0x3a51,	// (0x00003a51) popup_note2_wait_window_g2

0x3a5d,	// (0x00003a5d) popup_note2_wait_window_g3_ParamLimits

0x3a5d,	// (0x00003a5d) popup_note2_wait_window_g3

0x0002,

0xa32b,	// (0x0000a32b) popup_note2_wait_window_g_ParamLimits

0xa32b,	// (0x0000a32b) popup_note2_wait_window_g

0x70fe,	// (0x000070fe) popup_note2_wait_window_t1_ParamLimits

0x70fe,	// (0x000070fe) popup_note2_wait_window_t1

0x711c,	// (0x0000711c) popup_note2_wait_window_t2_ParamLimits

0x711c,	// (0x0000711c) popup_note2_wait_window_t2

0x713a,	// (0x0000713a) popup_note2_wait_window_t3_ParamLimits

0x713a,	// (0x0000713a) popup_note2_wait_window_t3

0x714c,	// (0x0000714c) popup_note2_wait_window_t4_ParamLimits

0x714c,	// (0x0000714c) popup_note2_wait_window_t4

0x0003,

0xa75f,	// (0x0000a75f) popup_note2_wait_window_t_ParamLimits

0xa75f,	// (0x0000a75f) popup_note2_wait_window_t

0x715e,	// (0x0000715e) wait_bar2_pane_ParamLimits

0x715e,	// (0x0000715e) wait_bar2_pane

0x7176,	// (0x00007176) popup_snote2_single_text_window_g1_ParamLimits

0x7176,	// (0x00007176) popup_snote2_single_text_window_g1

0x719e,	// (0x0000719e) popup_snote2_single_text_window_t1_ParamLimits

0x719e,	// (0x0000719e) popup_snote2_single_text_window_t1

0x71ea,	// (0x000071ea) popup_snote2_single_text_window_t2_ParamLimits

0x71ea,	// (0x000071ea) popup_snote2_single_text_window_t2

0x7236,	// (0x00007236) popup_snote2_single_text_window_t3_ParamLimits

0x7236,	// (0x00007236) popup_snote2_single_text_window_t3

0x7277,	// (0x00007277) popup_snote2_single_text_window_t4_ParamLimits

0x7277,	// (0x00007277) popup_snote2_single_text_window_t4

0x72ad,	// (0x000072ad) popup_snote2_single_text_window_t5_ParamLimits

0x72ad,	// (0x000072ad) popup_snote2_single_text_window_t5

0x0004,

0xa768,	// (0x0000a768) popup_snote2_single_text_window_t_ParamLimits

0xa768,	// (0x0000a768) popup_snote2_single_text_window_t

0x72d8,	// (0x000072d8) popup_snote2_single_graphic_window_g1_ParamLimits

0x72d8,	// (0x000072d8) popup_snote2_single_graphic_window_g1

0x7300,	// (0x00007300) popup_snote2_single_graphic_window_g2_ParamLimits

0x7300,	// (0x00007300) popup_snote2_single_graphic_window_g2

0x0001,

0xa773,	// (0x0000a773) popup_snote2_single_graphic_window_g_ParamLimits

0xa773,	// (0x0000a773) popup_snote2_single_graphic_window_g

0x7328,	// (0x00007328) popup_snote2_single_graphic_window_t1_ParamLimits

0x7328,	// (0x00007328) popup_snote2_single_graphic_window_t1

0x7374,	// (0x00007374) popup_snote2_single_graphic_window_t2_ParamLimits

0x7374,	// (0x00007374) popup_snote2_single_graphic_window_t2

0x7236,	// (0x00007236) popup_snote2_single_graphic_window_t3_ParamLimits

0x7236,	// (0x00007236) popup_snote2_single_graphic_window_t3

0x7277,	// (0x00007277) popup_snote2_single_graphic_window_t4_ParamLimits

0x7277,	// (0x00007277) popup_snote2_single_graphic_window_t4

0x72ad,	// (0x000072ad) popup_snote2_single_graphic_window_t5_ParamLimits

0x72ad,	// (0x000072ad) popup_snote2_single_graphic_window_t5

0x0004,

0xa778,	// (0x0000a778) popup_snote2_single_graphic_window_t_ParamLimits

0xa778,	// (0x0000a778) popup_snote2_single_graphic_window_t

0x5920,	// (0x00005920) clock_nsta_pane_cp2_t1

0x5920,	// (0x00005920) clock_nsta_pane_cp2_t2

0x0001,

0xa59f,	// (0x0000a59f) clock_nsta_pane_cp2_t

0x1228,	// (0x00001228) form_field_data_wide_pane_g1_ParamLimits

0x0ca5,	// (0x00000ca5) form_field_data_wide_pane_g2_ParamLimits

0x0ca5,	// (0x00000ca5) form_field_data_wide_pane_g2

0x1234,	// (0x00001234) form_field_data_wide_pane_g3_ParamLimits

0x1234,	// (0x00001234) form_field_data_wide_pane_g3

0x0002,

0xa16a,	// (0x0000a16a) form_field_data_wide_pane_g_ParamLimits

0xa16a,	// (0x0000a16a) form_field_data_wide_pane_g

0xca49,	// (0x0000ca49) grid_touch_3_pane_ParamLimits

0xca49,	// (0x0000ca49) grid_touch_3_pane

0xce39,	// (0x0000ce39) cell_touch_3_pane_ParamLimits

0xce39,	// (0x0000ce39) cell_touch_3_pane

0x5e2d,	// (0x00005e2d) cell_touch_3_pane_g1

0x5e2d,	// (0x00005e2d) cell_touch_3_pane_g2

0x0001,

0xa624,	// (0x0000a624) cell_touch_3_pane_g

0x0881,	// (0x00000881) cont_query_data_pane

0x0889,	// (0x00000889) cont_query_data_pane_cp1

0x73ed,	// (0x000073ed) button_value_adjust_pane_cp7

0x73f5,	// (0x000073f5) query_popup_pane_cp3

0x1c81,	// (0x00001c81) bg_popup_sub_pane_cp22_ParamLimits

0x1c97,	// (0x00001c97) navi_navi_volume_pane_cp2

0x1caf,	// (0x00001caf) popup_side_volume_key_window_g2

0x1cbb,	// (0x00001cbb) popup_side_volume_key_window_g3

0x0002,

0xa200,	// (0x0000a200) popup_side_volume_key_window_g

0x1cd5,	// (0x00001cd5) popup_side_volume_key_window_t2

0x0001,

0xa207,	// (0x0000a207) popup_side_volume_key_window_t

0x211e,	// (0x0000211e) popup_side_volume_key_window_ParamLimits

0xb08f,	// (0x0000b08f) list_double_graphic_pane_g4_ParamLimits

0xb08f,	// (0x0000b08f) list_double_graphic_pane_g4

0xc899,	// (0x0000c899) list_single_2heading_msg_pane_ParamLimits

0xc899,	// (0x0000c899) list_single_2heading_msg_pane

0xce80,	// (0x0000ce80) list_single_2heading_msg_pane_g1_ParamLimits

0xce80,	// (0x0000ce80) list_single_2heading_msg_pane_g1

0xce8c,	// (0x0000ce8c) list_single_2heading_msg_pane_g2_ParamLimits

0xce8c,	// (0x0000ce8c) list_single_2heading_msg_pane_g2

0xce9f,	// (0x0000ce9f) list_single_2heading_msg_pane_g3_ParamLimits

0xce9f,	// (0x0000ce9f) list_single_2heading_msg_pane_g3

0x7446,	// (0x00007446) list_single_2heading_msg_pane_g4_ParamLimits

0x7446,	// (0x00007446) list_single_2heading_msg_pane_g4

0x0003,

0xe9e0,	// (0x0000e9e0) list_single_2heading_msg_pane_g_ParamLimits

0xe9e0,	// (0x0000e9e0) list_single_2heading_msg_pane_g

0xceab,	// (0x0000ceab) list_single_2heading_msg_pane_t1_ParamLimits

0xceab,	// (0x0000ceab) list_single_2heading_msg_pane_t1

0xced3,	// (0x0000ced3) list_single_2heading_msg_pane_t2_ParamLimits

0xced3,	// (0x0000ced3) list_single_2heading_msg_pane_t2

0xcf3e,	// (0x0000cf3e) list_single_2heading_msg_pane_t3_ParamLimits

0xcf3e,	// (0x0000cf3e) list_single_2heading_msg_pane_t3

0x74ee,	// (0x000074ee) list_single_2heading_msg_pane_t4_ParamLimits

0x74ee,	// (0x000074ee) list_single_2heading_msg_pane_t4

0x0003,

0xe9e9,	// (0x0000e9e9) list_single_2heading_msg_pane_t_ParamLimits

0xe9e9,	// (0x0000e9e9) list_single_2heading_msg_pane_t

0x03c8,	// (0x000003c8) title_pane_g4_ParamLimits

0x03c8,	// (0x000003c8) title_pane_g4

0x1715,	// (0x00001715) title_pane_stacon_g3_ParamLimits

0x1715,	// (0x00001715) title_pane_stacon_g3

0x6efc,	// (0x00006efc) list_single_2graphic_im_pane_g4_ParamLimits

0x6efc,	// (0x00006efc) list_single_2graphic_im_pane_g4

0x458b,	// (0x0000458b) popup_side_volume_key_window_cp

0x4edf,	// (0x00004edf) main_idle_act2_pane_t1

0x32b1,	// (0x000032b1) toolbar_button_pane_g10

0xaf7c,	// (0x0000af7c) popup_toolbar_window_cp1

0x5911,	// (0x00005911) clock_nsta_pane_cp_t1

0x5911,	// (0x00005911) clock_nsta_pane_cp_t2

0x0001,

0xa59a,	// (0x0000a59a) clock_nsta_pane_cp_t

0x1c97,	// (0x00001c97) navi_navi_volume_pane_cp2_ParamLimits

0x1ca3,	// (0x00001ca3) popup_side_volume_key_window_g1_ParamLimits

0x1caf,	// (0x00001caf) popup_side_volume_key_window_g2_ParamLimits

0x1cbb,	// (0x00001cbb) popup_side_volume_key_window_g3_ParamLimits

0xa200,	// (0x0000a200) popup_side_volume_key_window_g_ParamLimits

0x5e94,	// (0x00005e94) fep_hwr_aid_pane

0x5f35,	// (0x00005f35) bg_fep_hwr_top_pane_g4_ParamLimits

0x5f55,	// (0x00005f55) fep_hwr_top_pane_g1_ParamLimits

0x5f67,	// (0x00005f67) fep_hwr_top_pane_g2_ParamLimits

0x5f79,	// (0x00005f79) fep_hwr_top_pane_g3_ParamLimits

0xa5ef,	// (0x0000a5ef) fep_hwr_top_pane_g_ParamLimits

0x5f8e,	// (0x00005f8e) fep_hwr_top_text_pane_ParamLimits

0x4356,	// (0x00004356) aid_touch_tab_arrow_arrow_2

0x435f,	// (0x0000435f) aid_touch_tab_arrow_left_2

0x5ea8,	// (0x00005ea8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5edb,	// (0x00005edb) fep_hwr_prediction_pane

0x61dd,	// (0x000061dd) fep_vkb_prediction_pane

0xcbe3,	// (0x0000cbe3) fep_vkb_side_pane_g3_ParamLimits

0xcbe3,	// (0x0000cbe3) fep_vkb_side_pane_g3

0x626b,	// (0x0000626b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6932,	// (0x00006932) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x693f,	// (0x0000693f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa699,	// (0x0000a699) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7513,	// (0x00007513) fep_hwr_prediction_pane_g1

0x751d,	// (0x0000751d) fep_hwr_prediction_pane_g2

0x7525,	// (0x00007525) fep_hwr_prediction_pane_g3

0x752d,	// (0x0000752d) fep_hwr_prediction_pane_g4

0x0003,

0xa795,	// (0x0000a795) fep_hwr_prediction_pane_g

0x7513,	// (0x00007513) fep_vkb_prediction_pane_g1

0x7535,	// (0x00007535) fep_vkb_prediction_pane_g2

0x753d,	// (0x0000753d) fep_vkb_prediction_pane_g3

0x7545,	// (0x00007545) fep_vkb_prediction_pane_g4

0x0003,

0xa79e,	// (0x0000a79e) fep_vkb_prediction_pane_g

0x489d,	// (0x0000489d) slider_set_pane_g3

0x48b1,	// (0x000048b1) slider_set_pane_g4

0x48c9,	// (0x000048c9) slider_set_pane_g5

0x489d,	// (0x0000489d) slider_set_pane_g6

0xc6ea,	// (0x0000c6ea) slider_set_pane_g7

0x4a70,	// (0x00004a70) slider_form_pane_g3

0x4a79,	// (0x00004a79) slider_form_pane_g4

0x4a81,	// (0x00004a81) slider_form_pane_g5

0x4a70,	// (0x00004a70) slider_form_pane_g6

0xc852,	// (0x0000c852) slider_form_pane_g7

0x51d0,	// (0x000051d0) slider_set_pane_vc_g3

0x51d9,	// (0x000051d9) slider_set_pane_vc_g4

0x51e2,	// (0x000051e2) slider_set_pane_vc_g5

0x51d0,	// (0x000051d0) slider_set_pane_vc_g6

0x51eb,	// (0x000051eb) slider_set_pane_vc_g7

0x51d0,	// (0x000051d0) slider_form_pane_vc_g1

0x51d9,	// (0x000051d9) slider_form_pane_vc_g2

0x51e2,	// (0x000051e2) slider_form_pane_vc_g3

0x51d0,	// (0x000051d0) slider_form_pane_vc_g4

0x560a,	// (0x0000560a) slider_form_pane_vc_g5

0x0004,

0xa56c,	// (0x0000a56c) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x754d,	// (0x0000754d) ai3_links_pane

0xcfac,	// (0x0000cfac) popup_ai3_data_window_ParamLimits

0xcfac,	// (0x0000cfac) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xcfc4,	// (0x0000cfc4) cell_ai3_links_pane_ParamLimits

0xcfc4,	// (0x0000cfc4) cell_ai3_links_pane

0x7582,	// (0x00007582) bg_popup_sub_pane_cp11

0x758f,	// (0x0000758f) cell_ai3_links_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp12

0x75b4,	// (0x000075b4) heading_ai3_data_pane

0x75bc,	// (0x000075bc) list_ai3_gene_pane

0x75c8,	// (0x000075c8) popup_ai3_data_window_g1

0x75d0,	// (0x000075d0) heading_ai3_data_pane_g1

0x75d8,	// (0x000075d8) heading_ai3_data_pane_t1

0x75e6,	// (0x000075e6) list_double_ai3_gene_pane_ParamLimits

0x75e6,	// (0x000075e6) list_double_ai3_gene_pane

0x75f3,	// (0x000075f3) list_single_ai3_gene_pane_ParamLimits

0x75f3,	// (0x000075f3) list_single_ai3_gene_pane

0x5df2,	// (0x00005df2) list_highlight_pane_cp7_ParamLimits

0x5df2,	// (0x00005df2) list_highlight_pane_cp7

0x7600,	// (0x00007600) list_single_a13_gene_pane_t1_ParamLimits

0x7600,	// (0x00007600) list_single_a13_gene_pane_t1

0x7617,	// (0x00007617) list_single_ai3_gene_pane_g1

0x7620,	// (0x00007620) list_single_ai3_gene_pane_g2

0x0001,

0xa7a7,	// (0x0000a7a7) list_single_ai3_gene_pane_g

0x7628,	// (0x00007628) list_double_ai3_gene_pane_g1_ParamLimits

0x7628,	// (0x00007628) list_double_ai3_gene_pane_g1

0x7634,	// (0x00007634) list_double_ai3_gene_pane_t1_ParamLimits

0x7634,	// (0x00007634) list_double_ai3_gene_pane_t1

0x7650,	// (0x00007650) list_double_ai3_gene_pane_t2_ParamLimits

0x7650,	// (0x00007650) list_double_ai3_gene_pane_t2

0x7665,	// (0x00007665) list_double_ai3_gene_pane_t3_ParamLimits

0x7665,	// (0x00007665) list_double_ai3_gene_pane_t3

0x0002,

0xa7ac,	// (0x0000a7ac) list_double_ai3_gene_pane_t_ParamLimits

0xa7ac,	// (0x0000a7ac) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7406,	// (0x00007406) aid_size_min_col_2

0xce6c,	// (0x0000ce6c) aid_size_min_msg_ParamLimits

0xce6c,	// (0x0000ce6c) aid_size_min_msg

0xcbf7,	// (0x0000cbf7) fep_vkb_top_text_pane_g2_ParamLimits

0xcbf7,	// (0x0000cbf7) fep_vkb_top_text_pane_g2

0x0001,

0xe9bd,	// (0x0000e9bd) fep_vkb_top_text_pane_g_ParamLimits

0xe9bd,	// (0x0000e9bd) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x7682,	// (0x00007682) grid_hc_apps_pane_ParamLimits

0x7682,	// (0x00007682) grid_hc_apps_pane

0x7691,	// (0x00007691) list_hc_apps_pane

0x7699,	// (0x00007699) scroll_pane_cp37_ParamLimits

0x7699,	// (0x00007699) scroll_pane_cp37

0xcfda,	// (0x0000cfda) cell_hc_apps_pane_ParamLimits

0xcfda,	// (0x0000cfda) cell_hc_apps_pane

0xd074,	// (0x0000d074) cell_hc_apps_pane_g1_ParamLimits

0xd074,	// (0x0000d074) cell_hc_apps_pane_g1

0x7760,	// (0x00007760) cell_hc_apps_pane_g2_ParamLimits

0x7760,	// (0x00007760) cell_hc_apps_pane_g2

0x777c,	// (0x0000777c) cell_hc_apps_pane_g3_ParamLimits

0x777c,	// (0x0000777c) cell_hc_apps_pane_g3

0x0002,

0xe9f2,	// (0x0000e9f2) cell_hc_apps_pane_g_ParamLimits

0xe9f2,	// (0x0000e9f2) cell_hc_apps_pane_g

0xd0a1,	// (0x0000d0a1) cell_hc_apps_pane_t1_ParamLimits

0xd0a1,	// (0x0000d0a1) cell_hc_apps_pane_t1

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10_ParamLimits

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10

0xd0df,	// (0x0000d0df) list_single_hc_apps_pane_ParamLimits

0xd0df,	// (0x0000d0df) list_single_hc_apps_pane

0xd10b,	// (0x0000d10b) list_single_hc_apps_pane_g1

0xd124,	// (0x0000d124) list_single_hc_apps_pane_g2

0x0001,

0xe9f9,	// (0x0000e9f9) list_single_hc_apps_pane_g

0xd13d,	// (0x0000d13d) list_single_hc_apps_pane_g2_copy1

0xd159,	// (0x0000d159) list_single_hc_apps_pane_t1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_ParamLimits

0xacb9,	// (0x0000acb9) setting_slider_pane_t2_ParamLimits

0xacd2,	// (0x0000acd2) setting_slider_pane_t3_ParamLimits

0xe7bb,	// (0x0000e7bb) setting_slider_pane_t_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_ParamLimits

0x26f3,	// (0x000026f3) control_pane_g5_ParamLimits

0x26f3,	// (0x000026f3) control_pane_g5

0x4884,	// (0x00004884) slider_set_pane_g1_ParamLimits

0x4891,	// (0x00004891) slider_set_pane_g2_ParamLimits

0x489d,	// (0x0000489d) slider_set_pane_g3_ParamLimits

0x48b1,	// (0x000048b1) slider_set_pane_g4_ParamLimits

0x48c9,	// (0x000048c9) slider_set_pane_g5_ParamLimits

0x489d,	// (0x0000489d) slider_set_pane_g6_ParamLimits

0xc6ea,	// (0x0000c6ea) slider_set_pane_g7_ParamLimits

0xe939,	// (0x0000e939) slider_set_pane_g_ParamLimits

0x0474,	// (0x00000474) navi_icon_text_pane_ParamLimits

0xbfa9,	// (0x0000bfa9) aid_fill_nsta_2_ParamLimits

0xbfd7,	// (0x0000bfd7) aid_touch_tab_arrow_left_ParamLimits

0xbfeb,	// (0x0000bfeb) aid_touch_tab_arrow_right_ParamLimits

0xc087,	// (0x0000c087) clock_nsta_pane_ParamLimits

0x4338,	// (0x00004338) navi_icon_pane_g1_ParamLimits

0x4344,	// (0x00004344) navi_text_pane_t1_ParamLimits

0x5a08,	// (0x00005a08) navi_icon_text_pane_g1_ParamLimits

0x5a14,	// (0x00005a14) navi_icon_text_pane_t1_ParamLimits

0xd10b,	// (0x0000d10b) list_single_hc_apps_pane_g1_ParamLimits

0xd124,	// (0x0000d124) list_single_hc_apps_pane_g2_ParamLimits

0xe9f9,	// (0x0000e9f9) list_single_hc_apps_pane_g_ParamLimits

0xd13d,	// (0x0000d13d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd159,	// (0x0000d159) list_single_hc_apps_pane_t1_ParamLimits

0xab04,	// (0x0000ab04) popup_toolbar2_fixed_window_ParamLimits

0xab04,	// (0x0000ab04) popup_toolbar2_fixed_window

0xbf34,	// (0x0000bf34) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x7888,	// (0x00007888) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x7888,	// (0x00007888) grid_toolbar2_fixed_pane

0xd187,	// (0x0000d187) cell_toolbar2_fixed_pane_ParamLimits

0xd187,	// (0x0000d187) cell_toolbar2_fixed_pane

0xd1a2,	// (0x0000d1a2) cell_toolbar2_fixed_pane_g1

0x78aa,	// (0x000078aa) toolbar2_fixed_button_pane

0x3269,	// (0x00003269) toolbar2_fixed_button_pane_g1

0x3271,	// (0x00003271) toolbar2_fixed_button_pane_g2

0x3279,	// (0x00003279) toolbar2_fixed_button_pane_g3

0x3281,	// (0x00003281) toolbar2_fixed_button_pane_g4

0x3289,	// (0x00003289) toolbar2_fixed_button_pane_g5

0x3291,	// (0x00003291) toolbar2_fixed_button_pane_g6

0x3299,	// (0x00003299) toolbar2_fixed_button_pane_g7

0x32a1,	// (0x000032a1) toolbar2_fixed_button_pane_g8

0x32a9,	// (0x000032a9) toolbar2_fixed_button_pane_g9

0x0008,

0xa349,	// (0x0000a349) toolbar2_fixed_button_pane_g

0x78b2,	// (0x000078b2) cell_toolbar2_float_pane_ParamLimits

0x78b2,	// (0x000078b2) cell_toolbar2_float_pane

0x78c3,	// (0x000078c3) cell_toolbar2_float_pane_g1

0x78aa,	// (0x000078aa) toolbar2_fixed_button_pane_cp

0xcbac,	// (0x0000cbac) fep_vkb_accented_list_pane_ParamLimits

0xcbac,	// (0x0000cbac) fep_vkb_accented_list_pane

0x659e,	// (0x0000659e) bg_popup_fep_shadow_pane_g9

0x232f,	// (0x0000232f) bg_popup_fep_shadow_pane_cp3

0x14b9,	// (0x000014b9) list_accented_list_pane

0x78cc,	// (0x000078cc) list_single_accented_list_pane_ParamLimits

0x78cc,	// (0x000078cc) list_single_accented_list_pane

0x232f,	// (0x0000232f) list_highlight_pane_cp10

0x78dd,	// (0x000078dd) list_single_accented_list_pane_t1

0xbe76,	// (0x0000be76) popup_slider_window_ParamLimits

0xbe76,	// (0x0000be76) popup_slider_window

0x73fd,	// (0x000073fd) aid_indentation_list_msg

0xd281,	// (0x0000d281) bg_popup_window_pane_cp19

0x79e1,	// (0x000079e1) popup_slider_window_g1

0x79fd,	// (0x000079fd) popup_slider_window_g2

0x7a19,	// (0x00007a19) popup_slider_window_g3

0x0005,

0xe9fe,	// (0x0000e9fe) popup_slider_window_g

0x7a75,	// (0x00007a75) popup_slider_window_t1

0x7ae7,	// (0x00007ae7) small_volume_slider_vertical_pane

0x5e2d,	// (0x00005e2d) small_volume_slider_vertical_pane_g1

0x5e2d,	// (0x00005e2d) small_volume_slider_vertical_pane_g2

0x7b03,	// (0x00007b03) small_volume_slider_vertical_pane_g3

0x0002,

0xa7d1,	// (0x0000a7d1) small_volume_slider_vertical_pane_g

0xaa88,	// (0x0000aa88) area_side_right_pane_ParamLimits

0xaa88,	// (0x0000aa88) area_side_right_pane

0xd339,	// (0x0000d339) aid_size_side_button_ParamLimits

0xd339,	// (0x0000d339) aid_size_side_button

0xd352,	// (0x0000d352) grid_sctrl_middle_pane_ParamLimits

0xd352,	// (0x0000d352) grid_sctrl_middle_pane

0x7b3c,	// (0x00007b3c) sctrl_sk_bottom_pane

0x7b4d,	// (0x00007b4d) sctrl_sk_top_pane

0x7b5f,	// (0x00007b5f) aid_touch_sctrl_top

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane

0x7b6c,	// (0x00007b6c) sctrl_sk_top_pane_g1

0x7b79,	// (0x00007b79) sctrl_sk_top_pane_t1

0x7b5f,	// (0x00007b5f) aid_touch_sctrl_bottom

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp

0x7b94,	// (0x00007b94) sctrl_sk_bottom_pane_g1

0x7b79,	// (0x00007b79) sctrl_sk_bottom_pane_t1

0xd368,	// (0x0000d368) cell_sctrl_middle_pane_ParamLimits

0xd368,	// (0x0000d368) cell_sctrl_middle_pane

0xd379,	// (0x0000d379) aid_touch_sctrl_middle_ParamLimits

0xd379,	// (0x0000d379) aid_touch_sctrl_middle

0xd386,	// (0x0000d386) bg_sctrl_middle_pane_ParamLimits

0xd386,	// (0x0000d386) bg_sctrl_middle_pane

0x7c5b,	// (0x00007c5b) cell_sctrl_middle_pane_g1_ParamLimits

0x7c5b,	// (0x00007c5b) cell_sctrl_middle_pane_g1

0xd394,	// (0x0000d394) cell_sctrl_middle_pane_g2_ParamLimits

0xd394,	// (0x0000d394) cell_sctrl_middle_pane_g2

0x0001,

0xea0b,	// (0x0000ea0b) cell_sctrl_middle_pane_g_ParamLimits

0xea0b,	// (0x0000ea0b) cell_sctrl_middle_pane_g

0x3269,	// (0x00003269) bg_sctrl_middle_pane_g1

0x3271,	// (0x00003271) bg_sctrl_middle_pane_g2

0x3279,	// (0x00003279) bg_sctrl_middle_pane_g3

0x3281,	// (0x00003281) bg_sctrl_middle_pane_g4

0x3289,	// (0x00003289) bg_sctrl_middle_pane_g5

0x3291,	// (0x00003291) bg_sctrl_middle_pane_g6

0x3299,	// (0x00003299) bg_sctrl_middle_pane_g7

0x32a1,	// (0x000032a1) bg_sctrl_middle_pane_g8

0x0007,

0xa7e2,	// (0x0000a7e2) bg_sctrl_middle_pane_g

0x32a9,	// (0x000032a9) bg_sctrl_middle_pane_g8_copy1

0x3269,	// (0x00003269) bg_sctrl_sk_pane_g1

0x3271,	// (0x00003271) bg_sctrl_sk_pane_g2

0x3279,	// (0x00003279) bg_sctrl_sk_pane_g3

0x0008,

0xa349,	// (0x0000a349) bg_sctrl_sk_pane_g

0x0c21,	// (0x00000c21) aid_size_touch_scroll_bar

0x3281,	// (0x00003281) bg_sctrl_sk_pane_g4

0x3289,	// (0x00003289) bg_sctrl_sk_pane_g5

0x3291,	// (0x00003291) bg_sctrl_sk_pane_g6

0x3299,	// (0x00003299) bg_sctrl_sk_pane_g7

0x32a1,	// (0x000032a1) bg_sctrl_sk_pane_g8

0x32a9,	// (0x000032a9) bg_sctrl_sk_pane_g9

0x2939,	// (0x00002939) popup_fep_china_hwr2_fs_candidate_window

0xba71,	// (0x0000ba71) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xba71,	// (0x0000ba71) popup_fep_china_hwr2_fs_control_window

0x626b,	// (0x0000626b) sctrl_sk_top_pane_g2

0x0001,

0xa7d8,	// (0x0000a7d8) sctrl_sk_top_pane_g

0xd3a1,	// (0x0000d3a1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd3a1,	// (0x0000d3a1) aid_fep_china_hwr2_fs_cell

0xd3b5,	// (0x0000d3b5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd3b5,	// (0x0000d3b5) bg_popup_fep_shadow_pane_cp4

0xd3cc,	// (0x0000d3cc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd3cc,	// (0x0000d3cc) bg_popup_fep_shadow_pane_cp5

0xd3de,	// (0x0000d3de) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd3de,	// (0x0000d3de) popup_fep_china_hwr2_fs_control_bar_grid

0xd3f2,	// (0x0000d3f2) popup_fep_china_hwr2_fs_control_funtion_grid

0x7c31,	// (0x00007c31) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7c3b,	// (0x00007c3b) popup_fep_china_hwr2_fs_candidate_grid

0xd3fa,	// (0x0000d3fa) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd3fa,	// (0x0000d3fa) cell_fep_china_hwr2_fs_funtion_grid

0x5e2d,	// (0x00005e2d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7c5b,	// (0x00007c5b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7c5b,	// (0x00007c5b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7c69,	// (0x00007c69) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7c69,	// (0x00007c69) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xa7f3,	// (0x0000a7f3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xa7f3,	// (0x0000a7f3) cell_fep_china_hwr2_fs_funtion_grid_g

0xd412,	// (0x0000d412) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd412,	// (0x0000d412) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd427,	// (0x0000d427) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd427,	// (0x0000d427) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xea10,	// (0x0000ea10) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xea10,	// (0x0000ea10) cell_fep_china_hwr2_fs_funtion_grid_t

0x7cb0,	// (0x00007cb0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7cb8,	// (0x00007cb8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7cc0,	// (0x00007cc0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xa7fd,	// (0x0000a7fd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7cc8,	// (0x00007cc8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7cc8,	// (0x00007cc8) cell_fep_china_hwr2_fs_candidate_grid

0x7ce1,	// (0x00007ce1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7ce9,	// (0x00007ce9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5e2d,	// (0x00005e2d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5e2d,	// (0x00005e2d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa624,	// (0x0000a624) cell_fep_china_hwr2_fs_candidate_grid_g

0x7cf1,	// (0x00007cf1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e16,	// (0x00002e16) clock_nsta_pane_cp_24_ParamLimits

0x2e16,	// (0x00002e16) clock_nsta_pane_cp_24

0x2e89,	// (0x00002e89) indicator_nsta_pane_cp_24_ParamLimits

0x2e89,	// (0x00002e89) indicator_nsta_pane_cp_24

0x41a4,	// (0x000041a4) heading_pane_g1

0x0001,

0xa3ae,	// (0x0000a3ae) heading_pane_g

0xc971,	// (0x0000c971) grid_sct_catagory_button_pane

0x4cf9,	// (0x00004cf9) scroll_pane_cp5_ParamLimits

0x5a9e,	// (0x00005a9e) button_value_adjust_pane_cp5_ParamLimits

0x5a9e,	// (0x00005a9e) button_value_adjust_pane_cp5

0x5b94,	// (0x00005b94) form2_midp_time_pane_ParamLimits

0x7cff,	// (0x00007cff) cell_sct_catagory_button_pane_ParamLimits

0x7cff,	// (0x00007cff) cell_sct_catagory_button_pane

0x5df2,	// (0x00005df2) bg_button_pane_cp01_ParamLimits

0x5df2,	// (0x00005df2) bg_button_pane_cp01

0x5e2d,	// (0x00005e2d) cell_sct_catagory_button_pane_g1

0xbee5,	// (0x0000bee5) popup_tb_extension_window

0xd443,	// (0x0000d443) aid_size_cell_ext_ParamLimits

0xd443,	// (0x0000d443) aid_size_cell_ext

0x0aff,	// (0x00000aff) bg_tb_trans_pane_cp1_ParamLimits

0x0aff,	// (0x00000aff) bg_tb_trans_pane_cp1

0xd469,	// (0x0000d469) grid_tb_ext_pane_ParamLimits

0xd469,	// (0x0000d469) grid_tb_ext_pane

0xd49f,	// (0x0000d49f) cell_tb_ext_pane_ParamLimits

0xd49f,	// (0x0000d49f) cell_tb_ext_pane

0xd4c3,	// (0x0000d4c3) cell_tb_ext_pane_g1_ParamLimits

0xd4c3,	// (0x0000d4c3) cell_tb_ext_pane_g1

0x7d89,	// (0x00007d89) cell_tb_ext_pane_t1

0x07a5,	// (0x000007a5) list_highlight_pane_cp11_ParamLimits

0x07a5,	// (0x000007a5) list_highlight_pane_cp11

0xab19,	// (0x0000ab19) popup_uni_indicator_window_ParamLimits

0xab19,	// (0x0000ab19) popup_uni_indicator_window

0x120e,	// (0x0000120e) bg_popup_sub_pane_cp14

0x7da4,	// (0x00007da4) list_uniindi_pane

0x7db0,	// (0x00007db0) uniindi_top_pane

0x07a5,	// (0x000007a5) bg_uniindi_top_pane

0x7dcf,	// (0x00007dcf) uniindi_top_pane_g1

0x7de5,	// (0x00007de5) uniindi_top_pane_g2

0x0003,

0xa804,	// (0x0000a804) uniindi_top_pane_g

0x7e0f,	// (0x00007e0f) uniindi_top_pane_t1

0x7e39,	// (0x00007e39) list_single_uniindi_pane_ParamLimits

0x7e39,	// (0x00007e39) list_single_uniindi_pane

0x5e2d,	// (0x00005e2d) bg_uniindi_top_pane_g1

0x7e4b,	// (0x00007e4b) list_single_uniindi_pane_g1

0x7e5e,	// (0x00007e5e) list_single_uniindi_pane_t1

0x0020,	// (0x00000020) control_bg_pane

0x7e83,	// (0x00007e83) bg_sctrl_sk_pane_cp1

0x7e8c,	// (0x00007e8c) bg_sctrl_sk_pane_cp2

0x7e95,	// (0x00007e95) control_bg_pane_g1

0x7e9e,	// (0x00007e9e) control_bg_pane_g2

0x0001,

0xa80d,	// (0x0000a80d) control_bg_pane_g

0x58ac,	// (0x000058ac) cell_indicator_nsta_pane_g1_ParamLimits

0xca76,	// (0x0000ca76) cell_indicator_nsta_pane_g2_ParamLimits

0xe988,	// (0x0000e988) cell_indicator_nsta_pane_g_ParamLimits

0x5bfc,	// (0x00005bfc) form2_midp_time_pane_t1_ParamLimits

0x5e86,	// (0x00005e86) main_idle_act4_pane_ParamLimits

0x5e86,	// (0x00005e86) main_idle_act4_pane

0xbee5,	// (0x0000bee5) popup_tb_extension_window_ParamLimits

0xd489,	// (0x0000d489) tb_ext_find_pane_ParamLimits

0xd489,	// (0x0000d489) tb_ext_find_pane

0x7ea7,	// (0x00007ea7) ai_gene_pane_1_cp1

0x246a,	// (0x0000246a) ai_gene_pane_2_cp1

0x7eaf,	// (0x00007eaf) list_single_idle_plugin_calendar_pane

0x7eb8,	// (0x00007eb8) list_single_idle_plugin_notification_pane

0x7ec1,	// (0x00007ec1) list_single_idle_plugin_player_pane

0xd4e0,	// (0x0000d4e0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd4e0,	// (0x0000d4e0) list_single_idle_plugin_shortcut_pane

0xd508,	// (0x0000d508) main_idle_act4_pane_t1

0xd51e,	// (0x0000d51e) main_idle_act4_pane_t2

0x0001,

0xea15,	// (0x0000ea15) main_idle_act4_pane_t

0xd534,	// (0x0000d534) middle_sk_idle_act4_pane_ParamLimits

0xd534,	// (0x0000d534) middle_sk_idle_act4_pane

0xd550,	// (0x0000d550) popup_clock_digital_analogue_window_cp2

0xd576,	// (0x0000d576) shortcut_wheel_idle_act4_pane_ParamLimits

0xd576,	// (0x0000d576) shortcut_wheel_idle_act4_pane

0x5e2d,	// (0x00005e2d) shortcut_wheel_idle_act4_pane_g1

0x5e2d,	// (0x00005e2d) shortcut_wheel_idle_act4_pane_g2

0x5e2d,	// (0x00005e2d) shortcut_wheel_idle_act4_pane_g3

0x5e2d,	// (0x00005e2d) shortcut_wheel_idle_act4_pane_g4

0x5e2d,	// (0x00005e2d) shortcut_wheel_idle_act4_pane_g5

0x7f54,	// (0x00007f54) shortcut_wheel_idle_act4_pane_g6

0x7f5c,	// (0x00007f5c) shortcut_wheel_idle_act4_pane_g7

0x7f64,	// (0x00007f64) shortcut_wheel_idle_act4_pane_g8

0x7f6c,	// (0x00007f6c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xa817,	// (0x0000a817) shortcut_wheel_idle_act4_pane_g

0x5f35,	// (0x00005f35) middle_sk_idle_act4_pane_g1_ParamLimits

0x5f35,	// (0x00005f35) middle_sk_idle_act4_pane_g1

0xd5f1,	// (0x0000d5f1) middle_sk_idle_act4_pane_g2_ParamLimits

0xd5f1,	// (0x0000d5f1) middle_sk_idle_act4_pane_g2

0x0001,

0xea2a,	// (0x0000ea2a) middle_sk_idle_act4_pane_g_ParamLimits

0xea2a,	// (0x0000ea2a) middle_sk_idle_act4_pane_g

0xd609,	// (0x0000d609) middle_sk_idle_act4_pane_t1_ParamLimits

0xd609,	// (0x0000d609) middle_sk_idle_act4_pane_t1

0xd638,	// (0x0000d638) grid_ai_shortcut_pane_ParamLimits

0xd638,	// (0x0000d638) grid_ai_shortcut_pane

0xd655,	// (0x0000d655) list_highlight_pane_cp16_ParamLimits

0xd655,	// (0x0000d655) list_highlight_pane_cp16

0xd662,	// (0x0000d662) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd662,	// (0x0000d662) list_single_idle_plugin_shortcut_pane_g1

0xd66e,	// (0x0000d66e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd66e,	// (0x0000d66e) list_single_idle_plugin_shortcut_pane_g2

0xd68a,	// (0x0000d68a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd68a,	// (0x0000d68a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xea2f,	// (0x0000ea2f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xea2f,	// (0x0000ea2f) list_single_idle_plugin_shortcut_pane_g

0xd69f,	// (0x0000d69f) cell_ai_shortcut_pane_ParamLimits

0xd69f,	// (0x0000d69f) cell_ai_shortcut_pane

0xd6b5,	// (0x0000d6b5) cell_ai_shortcut_pane_g1_ParamLimits

0xd6b5,	// (0x0000d6b5) cell_ai_shortcut_pane_g1

0x7ea7,	// (0x00007ea7) ai_gene_pane_1_cp2

0x8099,	// (0x00008099) ai_gene_pane_2_cp2

0x80a1,	// (0x000080a1) list_highlight_pane_cp15

0x80aa,	// (0x000080aa) list_single_idle_plugin_calendar_pane_g1

0x80a1,	// (0x000080a1) list_highlight_pane_cp17

0x80b2,	// (0x000080b2) list_single_idle_plugin_calendar_pane_g1_copy1

0x80ba,	// (0x000080ba) list_single_idle_plugin_player_pane_g1

0x4f7f,	// (0x00004f7f) list_single_idle_plugin_player_pane_g2

0x0001,

0xa846,	// (0x0000a846) list_single_idle_plugin_player_pane_g

0x80c2,	// (0x000080c2) list_single_idle_plugin_player_pane_t1

0x80d0,	// (0x000080d0) list_single_idle_plugin_player_pane_t2

0x80de,	// (0x000080de) list_single_idle_plugin_player_pane_t3

0x80ec,	// (0x000080ec) list_single_idle_plugin_player_pane_t4

0x0003,

0xa84b,	// (0x0000a84b) list_single_idle_plugin_player_pane_t

0x80fa,	// (0x000080fa) wait_bar_pane_cp15

0x8102,	// (0x00008102) grid_ai_notification_pane

0x4f7f,	// (0x00004f7f) list_single_idle_plugin_notification_pane_g1

0xd6d7,	// (0x0000d6d7) cell_ai_notification_pane_ParamLimits

0xd6d7,	// (0x0000d6d7) cell_ai_notification_pane

0x8118,	// (0x00008118) cell_ai_notification_pane_g1

0x8120,	// (0x00008120) cell_ai_notification_pane_t1

0xd6e4,	// (0x0000d6e4) tb_ext_find_button_pane

0xd6ec,	// (0x0000d6ec) tb_ext_find_pane_g1

0xd6f4,	// (0x0000d6f4) tb_ext_find_pane_t1

0x1b2f,	// (0x00001b2f) tb_ext_find_button_pane_g1

0x814c,	// (0x0000814c) tb_ext_find_button_pane_g2

0x0001,

0xa854,	// (0x0000a854) tb_ext_find_button_pane_g

0xd508,	// (0x0000d508) main_idle_act4_pane_t1_ParamLimits

0xd51e,	// (0x0000d51e) main_idle_act4_pane_t2_ParamLimits

0xea15,	// (0x0000ea15) main_idle_act4_pane_t_ParamLimits

0xd550,	// (0x0000d550) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd566,	// (0x0000d566) sat_plugin_idle_act4_pane_ParamLimits

0xd566,	// (0x0000d566) sat_plugin_idle_act4_pane

0xd702,	// (0x0000d702) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd702,	// (0x0000d702) sat_plugin_idle_act4_pane_t1

0xd71a,	// (0x0000d71a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd71a,	// (0x0000d71a) sat_plugin_idle_act4_pane_t2

0xd732,	// (0x0000d732) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd732,	// (0x0000d732) sat_plugin_idle_act4_pane_t3

0xd74a,	// (0x0000d74a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd74a,	// (0x0000d74a) sat_plugin_idle_act4_pane_t4

0x0003,

0xea36,	// (0x0000ea36) sat_plugin_idle_act4_pane_t_ParamLimits

0xea36,	// (0x0000ea36) sat_plugin_idle_act4_pane_t

0x0258,	// (0x00000258) popup_battery_window_ParamLimits

0x0258,	// (0x00000258) popup_battery_window

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25_ParamLimits

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25

0x81a1,	// (0x000081a1) popup_battery_window_g1_ParamLimits

0x81a1,	// (0x000081a1) popup_battery_window_g1

0x81ad,	// (0x000081ad) popup_battery_window_t1_ParamLimits

0x81ad,	// (0x000081ad) popup_battery_window_t1

0x81bf,	// (0x000081bf) popup_battery_window_t2_ParamLimits

0x81bf,	// (0x000081bf) popup_battery_window_t2

0x0001,

0xa862,	// (0x0000a862) popup_battery_window_t_ParamLimits

0xa862,	// (0x0000a862) popup_battery_window_t

0xb758,	// (0x0000b758) midp_canvas_pane_ParamLimits

0xb7ad,	// (0x0000b7ad) midp_keypad_pane_ParamLimits

0xb7ad,	// (0x0000b7ad) midp_keypad_pane

0x289b,	// (0x0000289b) main_midp_pane_ParamLimits

0x592f,	// (0x0000592f) signal_pane_g2_cp_ParamLimits

0xd762,	// (0x0000d762) aid_size_cell_midp_keypad_ParamLimits

0xd762,	// (0x0000d762) aid_size_cell_midp_keypad

0xd780,	// (0x0000d780) midp_keyp_game_grid_pane_ParamLimits

0xd780,	// (0x0000d780) midp_keyp_game_grid_pane

0xd79f,	// (0x0000d79f) midp_keyp_rocker_pane_ParamLimits

0xd79f,	// (0x0000d79f) midp_keyp_rocker_pane

0xd7e0,	// (0x0000d7e0) midp_keyp_sk_left_pane_ParamLimits

0xd7e0,	// (0x0000d7e0) midp_keyp_sk_left_pane

0xd832,	// (0x0000d832) midp_keyp_sk_right_pane_ParamLimits

0xd832,	// (0x0000d832) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xd87e,	// (0x0000d87e) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xd87e,	// (0x0000d87e) midp_keyp_sk_right_pane_g1

0x5e2d,	// (0x00005e2d) midp_keyp_rocker_pane_g1

0xd887,	// (0x0000d887) keyp_game_cell_pane_ParamLimits

0xd887,	// (0x0000d887) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xd8a9,	// (0x0000d8a9) keyp_game_cell_pane_g1

0xaaca,	// (0x0000aaca) popup_fep_vkb2_window_ParamLimits

0xaaca,	// (0x0000aaca) popup_fep_vkb2_window

0xd8b2,	// (0x0000d8b2) aid_size_cell_vkb2_ParamLimits

0xd8b2,	// (0x0000d8b2) aid_size_cell_vkb2

0xd8e8,	// (0x0000d8e8) popup_fep_vkb2_window_g1_ParamLimits

0xd8e8,	// (0x0000d8e8) popup_fep_vkb2_window_g1

0xd938,	// (0x0000d938) vkb2_area_bottom_pane_ParamLimits

0xd938,	// (0x0000d938) vkb2_area_bottom_pane

0xd976,	// (0x0000d976) vkb2_area_keypad_pane_ParamLimits

0xd976,	// (0x0000d976) vkb2_area_keypad_pane

0xd9b4,	// (0x0000d9b4) vkb2_area_top_pane_ParamLimits

0xd9b4,	// (0x0000d9b4) vkb2_area_top_pane

0xda30,	// (0x0000da30) vkb2_top_entry_pane_ParamLimits

0xda30,	// (0x0000da30) vkb2_top_entry_pane

0xda5d,	// (0x0000da5d) vkb2_top_grid_left_pane_ParamLimits

0xda5d,	// (0x0000da5d) vkb2_top_grid_left_pane

0xda7d,	// (0x0000da7d) vkb2_top_grid_right_pane_ParamLimits

0xda7d,	// (0x0000da7d) vkb2_top_grid_right_pane

0x84fa,	// (0x000084fa) vkb2_cell_keypad_pane_ParamLimits

0x84fa,	// (0x000084fa) vkb2_cell_keypad_pane

0xdac3,	// (0x0000dac3) vkb2_area_bottom_grid_pane_ParamLimits

0xdac3,	// (0x0000dac3) vkb2_area_bottom_grid_pane

0xdae9,	// (0x0000dae9) vkb2_area_bottom_pane_g1_ParamLimits

0xdae9,	// (0x0000dae9) vkb2_area_bottom_pane_g1

0xdb0f,	// (0x0000db0f) vkb2_area_bottom_pane_g2_ParamLimits

0xdb0f,	// (0x0000db0f) vkb2_area_bottom_pane_g2

0xdb40,	// (0x0000db40) vkb2_area_bottom_pane_g3_ParamLimits

0xdb40,	// (0x0000db40) vkb2_area_bottom_pane_g3

0x0002,

0xea3f,	// (0x0000ea3f) vkb2_area_bottom_pane_g_ParamLimits

0xea3f,	// (0x0000ea3f) vkb2_area_bottom_pane_g

0x8672,	// (0x00008672) vkb2_top_cell_left_pane_ParamLimits

0x8672,	// (0x00008672) vkb2_top_cell_left_pane

0xdb96,	// (0x0000db96) vkb2_top_entry_pane_g1_ParamLimits

0xdb96,	// (0x0000db96) vkb2_top_entry_pane_g1

0xdba4,	// (0x0000dba4) vkb2_top_entry_pane_t1_ParamLimits

0xdba4,	// (0x0000dba4) vkb2_top_entry_pane_t1

0x86da,	// (0x000086da) vkb2_top_entry_pane_t2_ParamLimits

0x86da,	// (0x000086da) vkb2_top_entry_pane_t2

0x870c,	// (0x0000870c) vkb2_top_entry_pane_t3_ParamLimits

0x870c,	// (0x0000870c) vkb2_top_entry_pane_t3

0x0002,

0xea46,	// (0x0000ea46) vkb2_top_entry_pane_t_ParamLimits

0xea46,	// (0x0000ea46) vkb2_top_entry_pane_t

0xdbdd,	// (0x0000dbdd) vkb2_top_grid_right_pane_g1_ParamLimits

0xdbdd,	// (0x0000dbdd) vkb2_top_grid_right_pane_g1

0x8765,	// (0x00008765) vkb2_top_grid_right_pane_g2_ParamLimits

0x8765,	// (0x00008765) vkb2_top_grid_right_pane_g2

0x877d,	// (0x0000877d) vkb2_top_grid_right_pane_g3_ParamLimits

0x877d,	// (0x0000877d) vkb2_top_grid_right_pane_g3

0xdbf3,	// (0x0000dbf3) vkb2_top_grid_right_pane_g4_ParamLimits

0xdbf3,	// (0x0000dbf3) vkb2_top_grid_right_pane_g4

0x0003,

0xea4d,	// (0x0000ea4d) vkb2_top_grid_right_pane_g_ParamLimits

0xea4d,	// (0x0000ea4d) vkb2_top_grid_right_pane_g

0x87ab,	// (0x000087ab) vkb2_top_cell_left_pane_g1

0x87c2,	// (0x000087c2) vkb2_cell_keypad_pane_g1_ParamLimits

0x87c2,	// (0x000087c2) vkb2_cell_keypad_pane_g1

0x87d0,	// (0x000087d0) vkb2_cell_keypad_pane_t1_ParamLimits

0x87d0,	// (0x000087d0) vkb2_cell_keypad_pane_t1

0x87e7,	// (0x000087e7) vkb2_cell_bottom_grid_pane_ParamLimits

0x87e7,	// (0x000087e7) vkb2_cell_bottom_grid_pane

0x8820,	// (0x00008820) vkb2_cell_bottom_grid_pane_g1

0xd595,	// (0x0000d595) aid_call2_pane_cp02

0xd59d,	// (0x0000d59d) aid_call_pane_cp02

0xd5a5,	// (0x0000d5a5) clock_digital_number_pane_cp10

0xd5ad,	// (0x0000d5ad) clock_digital_number_pane_cp11

0xd5b5,	// (0x0000d5b5) clock_digital_number_pane_cp12

0xd5bd,	// (0x0000d5bd) clock_digital_number_pane_cp13

0xd5c5,	// (0x0000d5c5) clock_digital_separator_pane_cp10

0x1b2f,	// (0x00001b2f) popup_clock_digital_analogue_window_cp2_g1

0x1b2f,	// (0x00001b2f) popup_clock_digital_analogue_window_cp2_g2

0xd5cd,	// (0x0000d5cd) popup_clock_digital_analogue_window_cp2_g3

0x1b2f,	// (0x00001b2f) popup_clock_digital_analogue_window_cp2_g4

0xd5cd,	// (0x0000d5cd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xea1a,	// (0x0000ea1a) popup_clock_digital_analogue_window_cp2_g

0xd5d5,	// (0x0000d5d5) popup_clock_digital_analogue_window_cp2_t1

0xd5e3,	// (0x0000d5e3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xea25,	// (0x0000ea25) popup_clock_digital_analogue_window_cp2_t

0x5e2d,	// (0x00005e2d) clock_digital_number_pane_cp10_g1

0x5e2d,	// (0x00005e2d) clock_digital_number_pane_cp10_g2

0x0001,

0xa624,	// (0x0000a624) clock_digital_number_pane_cp10_g

0x5e2d,	// (0x00005e2d) clock_digital_separator_pane_cp10_g1

0x5e2d,	// (0x00005e2d) clock_digital_separator_pane_cp10_g2

0x0001,

0xa624,	// (0x0000a624) clock_digital_separator_pane_cp10_g

0x7df1,	// (0x00007df1) uniindi_top_pane_g3

0x7e02,	// (0x00007e02) uniindi_top_pane_g4

0x8565,	// (0x00008565) vkb2_row_keypad_pane_ParamLimits

0x8565,	// (0x00008565) vkb2_row_keypad_pane

0x883c,	// (0x0000883c) vkb2_cell_t_keypad_pane_ParamLimits

0x883c,	// (0x0000883c) vkb2_cell_t_keypad_pane

0x8849,	// (0x00008849) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8849,	// (0x00008849) vkb2_cell_t_keypad_pane_cp08

0x8859,	// (0x00008859) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8859,	// (0x00008859) vkb2_cell_t_keypad_pane_cp09

0x886a,	// (0x0000886a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x886a,	// (0x0000886a) vkb2_cell_t_keypad_pane_cp01

0x887a,	// (0x0000887a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x887a,	// (0x0000887a) vkb2_cell_t_keypad_pane_cp02

0x888a,	// (0x0000888a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x888a,	// (0x0000888a) vkb2_cell_t_keypad_pane_cp03

0x889a,	// (0x0000889a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x889a,	// (0x0000889a) vkb2_cell_t_keypad_pane_cp04

0x88aa,	// (0x000088aa) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x88aa,	// (0x000088aa) vkb2_cell_t_keypad_pane_cp05

0x88ba,	// (0x000088ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x88ba,	// (0x000088ba) vkb2_cell_t_keypad_pane_cp06

0x88ca,	// (0x000088ca) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x88ca,	// (0x000088ca) vkb2_cell_t_keypad_pane_cp07

0x88da,	// (0x000088da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x88da,	// (0x000088da) vkb2_cell_t_keypad_pane_cp10

0x626b,	// (0x0000626b) vkb2_cell_t_keypad_pane_g1

0x88ef,	// (0x000088ef) vkb2_cell_t_keypad_pane_t1

0x0020,	// (0x00000020) popup_grid_graphic2_window

0xdc09,	// (0x0000dc09) aid_size_cell_graphic2_ParamLimits

0xdc09,	// (0x0000dc09) aid_size_cell_graphic2

0xdc47,	// (0x0000dc47) bg_popup_window_pane_cp21_ParamLimits

0xdc47,	// (0x0000dc47) bg_popup_window_pane_cp21

0xdc55,	// (0x0000dc55) graphic2_pages_pane_ParamLimits

0xdc55,	// (0x0000dc55) graphic2_pages_pane

0xdc9e,	// (0x0000dc9e) grid_graphic2_control_pane_ParamLimits

0xdc9e,	// (0x0000dc9e) grid_graphic2_control_pane

0xdcdc,	// (0x0000dcdc) grid_graphic2_pane_ParamLimits

0xdcdc,	// (0x0000dcdc) grid_graphic2_pane

0xdd4b,	// (0x0000dd4b) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x75bc,	// (0x000075bc) list_ai3_gene_pane_ParamLimits

0xd281,	// (0x0000d281) bg_popup_window_pane_cp19_ParamLimits

0x7989,	// (0x00007989) bg_touch_area_indi_pane_ParamLimits

0x7989,	// (0x00007989) bg_touch_area_indi_pane

0x799f,	// (0x0000799f) bg_touch_area_indi_pane_cp01_ParamLimits

0x799f,	// (0x0000799f) bg_touch_area_indi_pane_cp01

0x79b5,	// (0x000079b5) bg_touch_area_indi_pane_cp02_ParamLimits

0x79b5,	// (0x000079b5) bg_touch_area_indi_pane_cp02

0x79cb,	// (0x000079cb) bg_touch_area_indi_pane_cp03_ParamLimits

0x79cb,	// (0x000079cb) bg_touch_area_indi_pane_cp03

0x79e1,	// (0x000079e1) popup_slider_window_g1_ParamLimits

0x79fd,	// (0x000079fd) popup_slider_window_g2_ParamLimits

0x7a19,	// (0x00007a19) popup_slider_window_g3_ParamLimits

0xe9fe,	// (0x0000e9fe) popup_slider_window_g_ParamLimits

0x7a75,	// (0x00007a75) popup_slider_window_t1_ParamLimits

0x7ae7,	// (0x00007ae7) small_volume_slider_vertical_pane_ParamLimits

0xdd4b,	// (0x0000dd4b) cell_graphic2_pane_ParamLimits

0xdd96,	// (0x0000dd96) bg_button_pane_cp10_ParamLimits

0xdd96,	// (0x0000dd96) bg_button_pane_cp10

0xdda7,	// (0x0000dda7) bg_button_pane_cp11_ParamLimits

0xdda7,	// (0x0000dda7) bg_button_pane_cp11

0xddb8,	// (0x0000ddb8) graphic2_pages_pane_g1_ParamLimits

0xddb8,	// (0x0000ddb8) graphic2_pages_pane_g1

0xddd3,	// (0x0000ddd3) graphic2_pages_pane_g2_ParamLimits

0xddd3,	// (0x0000ddd3) graphic2_pages_pane_g2

0x0001,

0xea5b,	// (0x0000ea5b) graphic2_pages_pane_g_ParamLimits

0xea5b,	// (0x0000ea5b) graphic2_pages_pane_g

0xddeb,	// (0x0000ddeb) graphic2_pages_pane_t1_ParamLimits

0xddeb,	// (0x0000ddeb) graphic2_pages_pane_t1

0xde03,	// (0x0000de03) cell_graphic2_control_pane_ParamLimits

0xde03,	// (0x0000de03) cell_graphic2_control_pane

0xde2d,	// (0x0000de2d) cell_graphic2_pane_g1_ParamLimits

0xde2d,	// (0x0000de2d) cell_graphic2_pane_g1

0x60c8,	// (0x000060c8) cell_graphic2_pane_g2_ParamLimits

0x60c8,	// (0x000060c8) cell_graphic2_pane_g2

0xde3a,	// (0x0000de3a) cell_graphic2_pane_g3_ParamLimits

0xde3a,	// (0x0000de3a) cell_graphic2_pane_g3

0x60d5,	// (0x000060d5) cell_graphic2_pane_g4_ParamLimits

0x60d5,	// (0x000060d5) cell_graphic2_pane_g4

0xde47,	// (0x0000de47) cell_graphic2_pane_g5_ParamLimits

0xde47,	// (0x0000de47) cell_graphic2_pane_g5

0x0004,

0xea60,	// (0x0000ea60) cell_graphic2_pane_g_ParamLimits

0xea60,	// (0x0000ea60) cell_graphic2_pane_g

0xde67,	// (0x0000de67) cell_graphic2_pane_t1_ParamLimits

0xde67,	// (0x0000de67) cell_graphic2_pane_t1

0x4198,	// (0x00004198) grid_highlight_pane_cp11_ParamLimits

0x4198,	// (0x00004198) grid_highlight_pane_cp11

0x07a5,	// (0x000007a5) bg_button_pane_cp05

0xde9c,	// (0x0000de9c) cell_graphic2_control_pane_g1

0x5e2d,	// (0x00005e2d) bg_touch_area_indi_pane_g1

0x8b73,	// (0x00008b73) aid_cmod_rocker_key_size

0x8b7d,	// (0x00008b7d) aid_cmode_itu_key_size

0x8b87,	// (0x00008b87) main_cmode_video_pane

0x8b8f,	// (0x00008b8f) main_comp_mode_itu_pane

0x8b99,	// (0x00008b99) main_comp_mode_rocker_pane

0x8ba1,	// (0x00008ba1) cell_cmode_rocker_pane_ParamLimits

0x8ba1,	// (0x00008ba1) cell_cmode_rocker_pane

0x8bb3,	// (0x00008bb3) cell_cmode_itu_pane_ParamLimits

0x8bb3,	// (0x00008bb3) cell_cmode_itu_pane

0x120e,	// (0x0000120e) bg_button_pane_cp06_ParamLimits

0x120e,	// (0x0000120e) bg_button_pane_cp06

0x626b,	// (0x0000626b) cell_cmode_rocker_pane_g1_ParamLimits

0x626b,	// (0x0000626b) cell_cmode_rocker_pane_g1

0x7c5b,	// (0x00007c5b) cell_cmode_rocker_pane_g2_ParamLimits

0x7c5b,	// (0x00007c5b) cell_cmode_rocker_pane_g2

0x0001,

0xa898,	// (0x0000a898) cell_cmode_rocker_pane_g_ParamLimits

0xa898,	// (0x0000a898) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x8bc8,	// (0x00008bc8) cell_cmode_itu_pane_g1

0x8bd1,	// (0x00008bd1) cell_cmode_itu_pane_t1

0x8bdf,	// (0x00008bdf) cell_cmode_itu_pane_t2

0x0001,

0xa89d,	// (0x0000a89d) cell_cmode_itu_pane_t

0x7e73,	// (0x00007e73) aid_touch_ctrl_left

0x7e7b,	// (0x00007e7b) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xdec4,	// (0x0000dec4) aid_cmod_rocker_key_size_cp

0xdece,	// (0x0000dece) aid_cmode_itu_key_size_cp

0x8c01,	// (0x00008c01) compa_mode_pane_g1

0x8c09,	// (0x00008c09) compa_mode_pane_g2

0x8c11,	// (0x00008c11) compa_mode_pane_g3

0x0002,

0xa8a2,	// (0x0000a8a2) compa_mode_pane_g

0xded8,	// (0x0000ded8) main_comp_mode_itu_pane_cp

0xdee2,	// (0x0000dee2) main_comp_mode_rocker_pane_cp

0xdeec,	// (0x0000deec) cell_cmode_itu_pane_cp_ParamLimits

0xdeec,	// (0x0000deec) cell_cmode_itu_pane_cp

0xdf01,	// (0x0000df01) cell_cmode_rocker_pane_cp_ParamLimits

0xdf01,	// (0x0000df01) cell_cmode_rocker_pane_cp

0x120e,	// (0x0000120e) bg_button_pane_cp06_cp_ParamLimits

0x120e,	// (0x0000120e) bg_button_pane_cp06_cp

0x626b,	// (0x0000626b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x626b,	// (0x0000626b) cell_cmode_rocker_pane_g1_cp

0x5e2d,	// (0x00005e2d) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xdf13,	// (0x0000df13) cell_cmode_itu_pane_g1_cp

0xdf1c,	// (0x0000df1c) cell_cmode_itu_pane_t1_cp

0xdf2a,	// (0x0000df2a) cell_cmode_itu_pane_t2_cp

0xc84a,	// (0x0000c84a) settings_code_pane_cp2

0x0474,	// (0x00000474) bg_popup_window_pane_cp3_ParamLimits

0x09a3,	// (0x000009a3) heading_pane_cp3_ParamLimits

0x09af,	// (0x000009af) listscroll_popup_graphic_pane_ParamLimits

0x5e94,	// (0x00005e94) fep_hwr_aid_pane_ParamLimits

0x7b5f,	// (0x00007b5f) aid_touch_sctrl_top_ParamLimits

0x7b6c,	// (0x00007b6c) sctrl_sk_top_pane_g1_ParamLimits

0x626b,	// (0x0000626b) sctrl_sk_top_pane_g2_ParamLimits

0xa7d8,	// (0x0000a7d8) sctrl_sk_top_pane_g_ParamLimits

0x7b79,	// (0x00007b79) sctrl_sk_top_pane_t1_ParamLimits

0x7b5f,	// (0x00007b5f) aid_touch_sctrl_bottom_ParamLimits

0x7b79,	// (0x00007b79) sctrl_sk_bottom_pane_t1_ParamLimits

0x7dbd,	// (0x00007dbd) aid_area_touch_clock

0xd9f2,	// (0x0000d9f2) aid_vkb2_area_top_pane_cell_ParamLimits

0xd9f2,	// (0x0000d9f2) aid_vkb2_area_top_pane_cell

0xda9d,	// (0x0000da9d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xda9d,	// (0x0000da9d) aid_vkb2_area_bottom_pane_cell

0x8692,	// (0x00008692) popup_char_count_window

0x8c75,	// (0x00008c75) popup_char_count_window_g1

0x8c7e,	// (0x00008c7e) popup_char_count_window_g2

0x8c87,	// (0x00008c87) popup_char_count_window_g3

0x0002,

0xa8a9,	// (0x0000a8a9) popup_char_count_window_g

0x8c90,	// (0x00008c90) popup_char_count_window_t1

0x834a,	// (0x0000834a) popup_fep_char_preview_window_ParamLimits

0x834a,	// (0x0000834a) popup_fep_char_preview_window

0xda12,	// (0x0000da12) vkb2_top_candi_pane_ParamLimits

0xda12,	// (0x0000da12) vkb2_top_candi_pane

0xdf38,	// (0x0000df38) cell_vkb2_top_candi_pane_ParamLimits

0xdf38,	// (0x0000df38) cell_vkb2_top_candi_pane

0x3a37,	// (0x00003a37) bg_popup_fep_char_preview_window_ParamLimits

0x3a37,	// (0x00003a37) bg_popup_fep_char_preview_window

0x8cd7,	// (0x00008cd7) popup_fep_char_preview_window_t1_ParamLimits

0x8cd7,	// (0x00008cd7) popup_fep_char_preview_window_t1

0x8d11,	// (0x00008d11) bg_popup_fep_char_preview_window_g1

0x8d19,	// (0x00008d19) bg_popup_fep_char_preview_window_g2

0x8d21,	// (0x00008d21) bg_popup_fep_char_preview_window_g3

0x8d29,	// (0x00008d29) bg_popup_fep_char_preview_window_g4

0x8d31,	// (0x00008d31) bg_popup_fep_char_preview_window_g5

0x8d39,	// (0x00008d39) bg_popup_fep_char_preview_window_g6

0x8d41,	// (0x00008d41) bg_popup_fep_char_preview_window_g7

0x8d49,	// (0x00008d49) bg_popup_fep_char_preview_window_g8

0x8d51,	// (0x00008d51) bg_popup_fep_char_preview_window_g9

0x0008,

0xa8b0,	// (0x0000a8b0) bg_popup_fep_char_preview_window_g

0x626b,	// (0x0000626b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x626b,	// (0x0000626b) cell_vkb2_top_candi_pane_g1

0x65c2,	// (0x000065c2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x65c2,	// (0x000065c2) cell_vkb2_top_candi_pane_g2

0x65e3,	// (0x000065e3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x65e3,	// (0x000065e3) cell_vkb2_top_candi_pane_g3

0x8d59,	// (0x00008d59) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8d59,	// (0x00008d59) cell_vkb2_top_candi_pane_g4

0x8d7a,	// (0x00008d7a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8d7a,	// (0x00008d7a) cell_vkb2_top_candi_pane_g5

0x7c5b,	// (0x00007c5b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7c5b,	// (0x00007c5b) cell_vkb2_top_candi_pane_g6

0x0005,

0xa8c3,	// (0x0000a8c3) cell_vkb2_top_candi_pane_g_ParamLimits

0xa8c3,	// (0x0000a8c3) cell_vkb2_top_candi_pane_g

0x8d9b,	// (0x00008d9b) cell_vkb2_top_candi_pane_t1

0x4870,	// (0x00004870) aid_size_touch_slider_mark_ParamLimits

0x4870,	// (0x00004870) aid_size_touch_slider_mark

0xdc89,	// (0x0000dc89) grid_graphic2_catg_pane_ParamLimits

0xdc89,	// (0x0000dc89) grid_graphic2_catg_pane

0xdd20,	// (0x0000dd20) popup_grid_graphic2_window_t1_ParamLimits

0xdd20,	// (0x0000dd20) popup_grid_graphic2_window_t1

0xdd35,	// (0x0000dd35) popup_grid_graphic2_window_t2_ParamLimits

0xdd35,	// (0x0000dd35) popup_grid_graphic2_window_t2

0x0001,

0xea56,	// (0x0000ea56) popup_grid_graphic2_window_t_ParamLimits

0xea56,	// (0x0000ea56) popup_grid_graphic2_window_t

0x07a5,	// (0x000007a5) bg_button_pane_cp05_ParamLimits

0xde9c,	// (0x0000de9c) cell_graphic2_control_pane_g1_ParamLimits

0x7e39,	// (0x00007e39) cell_graphic2_catg_pane_ParamLimits

0x7e39,	// (0x00007e39) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xdf82,	// (0x0000df82) cell_graphic2_catg_pane_g1

0x7d89,	// (0x00007d89) cell_tb_ext_pane_t1_ParamLimits

0x8722,	// (0x00008722) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8722,	// (0x00008722) vkb2_top_cell_right_narrow_pane

0x873a,	// (0x0000873a) vkb2_top_cell_right_wide_pane_ParamLimits

0x873a,	// (0x0000873a) vkb2_top_cell_right_wide_pane

0x5e86,	// (0x00005e86) bg_vkb2_func_pane_ParamLimits

0x5e86,	// (0x00005e86) bg_vkb2_func_pane

0x87ab,	// (0x000087ab) vkb2_top_cell_left_pane_g1_ParamLimits

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp03

0x8820,	// (0x00008820) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3271,	// (0x00003271) bg_vkb2_func_pane_g1

0x3279,	// (0x00003279) bg_vkb2_func_pane_g2

0x3289,	// (0x00003289) bg_vkb2_func_pane_g3

0x3281,	// (0x00003281) bg_vkb2_func_pane_g4

0x3291,	// (0x00003291) bg_vkb2_func_pane_g5

0x3299,	// (0x00003299) bg_vkb2_func_pane_g6

0x32a1,	// (0x000032a1) bg_vkb2_func_pane_g7

0x32a9,	// (0x000032a9) bg_vkb2_func_pane_g8

0x3269,	// (0x00003269) bg_vkb2_func_pane_g9

0x0008,

0xa8d0,	// (0x0000a8d0) bg_vkb2_func_pane_g

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp01

0x87ab,	// (0x000087ab) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x87ab,	// (0x000087ab) vkb2_top_cell_right_wide_pane_g1

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp02

0x8820,	// (0x00008820) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8820,	// (0x00008820) vkb2_top_cell_right_narrow_pane_g1

0xd1cf,	// (0x0000d1cf) aid_touch_area_decrease_ParamLimits

0xd1cf,	// (0x0000d1cf) aid_touch_area_decrease

0xd1fd,	// (0x0000d1fd) aid_touch_area_increase_ParamLimits

0xd1fd,	// (0x0000d1fd) aid_touch_area_increase

0xd225,	// (0x0000d225) aid_touch_area_mute_ParamLimits

0xd225,	// (0x0000d225) aid_touch_area_mute

0xd24d,	// (0x0000d24d) aid_touch_area_slider_ParamLimits

0xd24d,	// (0x0000d24d) aid_touch_area_slider

0xd28d,	// (0x0000d28d) popup_slider_window_g4_ParamLimits

0xd28d,	// (0x0000d28d) popup_slider_window_g4

0xd2b5,	// (0x0000d2b5) popup_slider_window_g5_ParamLimits

0xd2b5,	// (0x0000d2b5) popup_slider_window_g5

0xd2e9,	// (0x0000d2e9) popup_slider_window_g6_ParamLimits

0xd2e9,	// (0x0000d2e9) popup_slider_window_g6

0x7aa1,	// (0x00007aa1) popup_slider_window_t2_ParamLimits

0x7aa1,	// (0x00007aa1) popup_slider_window_t2

0x0001,

0xa7cc,	// (0x0000a7cc) popup_slider_window_t_ParamLimits

0xa7cc,	// (0x0000a7cc) popup_slider_window_t

0xd305,	// (0x0000d305) slider_pane_ParamLimits

0xd305,	// (0x0000d305) slider_pane

0x8dcc,	// (0x00008dcc) slider_pane_g1_ParamLimits

0x8dcc,	// (0x00008dcc) slider_pane_g1

0x8de0,	// (0x00008de0) slider_pane_g2_ParamLimits

0x8de0,	// (0x00008de0) slider_pane_g2

0x8df6,	// (0x00008df6) slider_pane_g3_ParamLimits

0x8df6,	// (0x00008df6) slider_pane_g3

0x0003,

0xa8e3,	// (0x0000a8e3) slider_pane_g_ParamLimits

0xa8e3,	// (0x0000a8e3) slider_pane_g

0xbf21,	// (0x0000bf21) popup_tb_float_extension_window_ParamLimits

0xbf21,	// (0x0000bf21) popup_tb_float_extension_window

0x8e22,	// (0x00008e22) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x8e2d,	// (0x00008e2d) grid_tb_float_ext_pane

0x8e35,	// (0x00008e35) cell_tb_float_ext_pane_ParamLimits

0x8e35,	// (0x00008e35) cell_tb_float_ext_pane

0x8e4d,	// (0x00008e4d) cell_tb_float_ext_pane_g1

0x8e56,	// (0x00008e56) grid_highlight_pane_cp12

0xcb8a,	// (0x0000cb8a) cell_last_hwr_side_pane_ParamLimits

0xcb8a,	// (0x0000cb8a) cell_last_hwr_side_pane

0x5e2d,	// (0x00005e2d) cell_last_hwr_side_pane_g1

0x8e5f,	// (0x00008e5f) cell_last_hwr_side_pane_g2

0x0001,

0xa8ec,	// (0x0000a8ec) cell_last_hwr_side_pane_g

0xdb71,	// (0x0000db71) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdb71,	// (0x0000db71) vkb2_area_bottom_space_btn_pane

0x626b,	// (0x0000626b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x88ef,	// (0x000088ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8d9b,	// (0x00008d9b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8e68,	// (0x00008e68) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8e68,	// (0x00008e68) vkb2_area_bottom_space_btn_pane_g1

0x8e9e,	// (0x00008e9e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8e9e,	// (0x00008e9e) vkb2_area_bottom_space_btn_pane_g2

0x8ed4,	// (0x00008ed4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8ed4,	// (0x00008ed4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xa8f1,	// (0x0000a8f1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xa8f1,	// (0x0000a8f1) vkb2_area_bottom_space_btn_pane_g

0x5f43,	// (0x00005f43) cel_fep_hwr_func_pane_ParamLimits

0x5f43,	// (0x00005f43) cel_fep_hwr_func_pane

0xcb5f,	// (0x0000cb5f) cell_hwr_side_button_pane_ParamLimits

0xcb5f,	// (0x0000cb5f) cell_hwr_side_button_pane

0x7dbd,	// (0x00007dbd) aid_area_touch_clock_ParamLimits

0x07a5,	// (0x000007a5) bg_uniindi_top_pane_ParamLimits

0x7dcf,	// (0x00007dcf) uniindi_top_pane_g1_ParamLimits

0x7de5,	// (0x00007de5) uniindi_top_pane_g2_ParamLimits

0x7df1,	// (0x00007df1) uniindi_top_pane_g3_ParamLimits

0x7e02,	// (0x00007e02) uniindi_top_pane_g4_ParamLimits

0xa804,	// (0x0000a804) uniindi_top_pane_g_ParamLimits

0x7e0f,	// (0x00007e0f) uniindi_top_pane_t1_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01

0x8f1a,	// (0x00008f1a) cel_fep_hwr_func_pane_g1_ParamLimits

0x8f1a,	// (0x00008f1a) cel_fep_hwr_func_pane_g1

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02

0x8f1a,	// (0x00008f1a) cell_hwr_side_button_pane_g1_ParamLimits

0x8f1a,	// (0x00008f1a) cell_hwr_side_button_pane_g1

0x3084,	// (0x00003084) status_pane_g4_ParamLimits

0x3084,	// (0x00003084) status_pane_g4

0x309c,	// (0x0000309c) status_pane_t1

0x5c0f,	// (0x00005c0f) form2_midp_gauge_slider_cont_pane

0x5c17,	// (0x00005c17) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb3b,	// (0x0000cb3b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb4d,	// (0x0000cb4d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xe9a2,	// (0x0000e9a2) form2_midp_gauge_slider_pane_t_ParamLimits

0x5c4d,	// (0x00005c4d) form2_midp_slider_pane_ParamLimits

0x830a,	// (0x0000830a) aid_size_cell_func_vkb2_ParamLimits

0x830a,	// (0x0000830a) aid_size_cell_func_vkb2

0x8e0e,	// (0x00008e0e) slider_pane_g4_ParamLimits

0x8e0e,	// (0x00008e0e) slider_pane_g4

0xdf8b,	// (0x0000df8b) form2_midp_gauge_slider_pane_t2_cp01

0xdf99,	// (0x0000df99) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdf99,	// (0x0000df99) form2_midp_gauge_slider_pane_t3_cp01

0x8f53,	// (0x00008f53) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x8f87,	// (0x00008f87) navi_smil_pane_g1

0x8f8f,	// (0x00008f8f) navi_smil_pane_t1

0x8f5c,	// (0x00008f5c) form2_midp_slider_pane_g1

0x8f65,	// (0x00008f65) form2_midp_slider_pane_g2

0x8f6d,	// (0x00008f6d) form2_midp_slider_pane_g3

0x8f5c,	// (0x00008f5c) form2_midp_slider_pane_g4

0xdfb6,	// (0x0000dfb6) form2_midp_slider_pane_g5

0x0004,

0xea70,	// (0x0000ea70) form2_midp_slider_pane_g

0x8f0a,	// (0x00008f0a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8f0a,	// (0x00008f0a) vkb2_area_bottom_space_btn_pane_g4

0xc0c3,	// (0x0000c0c3) lc0_navi_pane_ParamLimits

0xc0c3,	// (0x0000c0c3) lc0_navi_pane

0xc12d,	// (0x0000c12d) lc0_stat_indi_pane_ParamLimits

0xc12d,	// (0x0000c12d) lc0_stat_indi_pane

0xc142,	// (0x0000c142) ls0_title_pane_ParamLimits

0xc142,	// (0x0000c142) ls0_title_pane

0x120e,	// (0x0000120e) bg_popup_sub_pane_cp14_ParamLimits

0x7da4,	// (0x00007da4) list_uniindi_pane_ParamLimits

0x7db0,	// (0x00007db0) uniindi_top_pane_ParamLimits

0x7e4b,	// (0x00007e4b) list_single_uniindi_pane_g1_ParamLimits

0x7e5e,	// (0x00007e5e) list_single_uniindi_pane_t1_ParamLimits

0xdfbf,	// (0x0000dfbf) lc0_stat_clock_pane_ParamLimits

0xdfbf,	// (0x0000dfbf) lc0_stat_clock_pane

0xdfcc,	// (0x0000dfcc) lc0_stat_indi_pane_g1_ParamLimits

0xdfcc,	// (0x0000dfcc) lc0_stat_indi_pane_g1

0xdfd9,	// (0x0000dfd9) lc0_stat_indi_pane_g2_ParamLimits

0xdfd9,	// (0x0000dfd9) lc0_stat_indi_pane_g2

0x0001,

0xea7b,	// (0x0000ea7b) lc0_stat_indi_pane_g_ParamLimits

0xea7b,	// (0x0000ea7b) lc0_stat_indi_pane_g

0xdfe6,	// (0x0000dfe6) lc0_uni_indicator_pane_ParamLimits

0xdfe6,	// (0x0000dfe6) lc0_uni_indicator_pane

0x8fd1,	// (0x00008fd1) ls0_title_pane_g1_ParamLimits

0x8fd1,	// (0x00008fd1) ls0_title_pane_g1

0xdff3,	// (0x0000dff3) ls0_title_pane_t1_ParamLimits

0xdff3,	// (0x0000dff3) ls0_title_pane_t1

0xe021,	// (0x0000e021) lc0_uni_indicator_pane_g1_ParamLimits

0xe021,	// (0x0000e021) lc0_uni_indicator_pane_g1

0x902d,	// (0x0000902d) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x903b,	// (0x0000903b) ai5_sk_pane_ParamLimits

0x903b,	// (0x0000903b) ai5_sk_pane

0xe036,	// (0x0000e036) cell_ai5_widget_pane_ParamLimits

0xe036,	// (0x0000e036) cell_ai5_widget_pane

0x90be,	// (0x000090be) aid_size_cell_widget_grid

0x90cb,	// (0x000090cb) bg_ai5_widget_pane_ParamLimits

0x90cb,	// (0x000090cb) bg_ai5_widget_pane

0xe0c3,	// (0x0000e0c3) cell_ai5_widget_pane_g2

0xe0d7,	// (0x0000e0d7) cell_ai5_widget_pane_g3

0xe0f1,	// (0x0000e0f1) cell_ai5_widget_pane_g4

0xe101,	// (0x0000e101) cell_ai5_widget_pane_g5

0xe111,	// (0x0000e111) cell_ai5_widget_pane_g6

0xe11d,	// (0x0000e11d) cell_ai5_widget_pane_g7

0xe165,	// (0x0000e165) cell_ai5_widget_pane_t1_ParamLimits

0xe165,	// (0x0000e165) cell_ai5_widget_pane_t1

0xe182,	// (0x0000e182) cell_ai5_widget_pane_t2_ParamLimits

0xe182,	// (0x0000e182) cell_ai5_widget_pane_t2

0xe19a,	// (0x0000e19a) cell_ai5_widget_pane_t3_ParamLimits

0xe19a,	// (0x0000e19a) cell_ai5_widget_pane_t3

0xe1b2,	// (0x0000e1b2) cell_ai5_widget_pane_t4_ParamLimits

0xe1b2,	// (0x0000e1b2) cell_ai5_widget_pane_t4

0xe1d8,	// (0x0000e1d8) cell_ai5_widget_pane_t5_ParamLimits

0xe1d8,	// (0x0000e1d8) cell_ai5_widget_pane_t5

0x9254,	// (0x00009254) cell_ai5_widget_pane_t6_ParamLimits

0x9254,	// (0x00009254) cell_ai5_widget_pane_t6

0x9266,	// (0x00009266) cell_ai5_widget_pane_t7_ParamLimits

0x9266,	// (0x00009266) cell_ai5_widget_pane_t7

0xe1f7,	// (0x0000e1f7) cell_ai5_widget_pane_t8_ParamLimits

0xe1f7,	// (0x0000e1f7) cell_ai5_widget_pane_t8

0x0009,

0xea95,	// (0x0000ea95) cell_ai5_widget_pane_t_ParamLimits

0xea95,	// (0x0000ea95) cell_ai5_widget_pane_t

0xe256,	// (0x0000e256) grid_ai5_widget_pane

0x120e,	// (0x0000120e) highlight_cell_ai5_widget_pane_ParamLimits

0x120e,	// (0x0000120e) highlight_cell_ai5_widget_pane

0xe262,	// (0x0000e262) ai5_sk_left_pane

0xe26c,	// (0x0000e26c) ai5_sk_middle_pane

0xe276,	// (0x0000e276) ai5_sk_right_pane

0x9308,	// (0x00009308) bg_ai5_widget_pane_g1_ParamLimits

0x9308,	// (0x00009308) bg_ai5_widget_pane_g1

0x9314,	// (0x00009314) bg_ai5_widget_pane_g2_ParamLimits

0x9314,	// (0x00009314) bg_ai5_widget_pane_g2

0x9320,	// (0x00009320) bg_ai5_widget_pane_g3_ParamLimits

0x9320,	// (0x00009320) bg_ai5_widget_pane_g3

0x932c,	// (0x0000932c) bg_ai5_widget_pane_g4_ParamLimits

0x932c,	// (0x0000932c) bg_ai5_widget_pane_g4

0x9338,	// (0x00009338) bg_ai5_widget_pane_g5_ParamLimits

0x9338,	// (0x00009338) bg_ai5_widget_pane_g5

0x9344,	// (0x00009344) bg_ai5_widget_pane_g6_ParamLimits

0x9344,	// (0x00009344) bg_ai5_widget_pane_g6

0x9350,	// (0x00009350) bg_ai5_widget_pane_g7_ParamLimits

0x9350,	// (0x00009350) bg_ai5_widget_pane_g7

0x935c,	// (0x0000935c) bg_ai5_widget_pane_g8_ParamLimits

0x935c,	// (0x0000935c) bg_ai5_widget_pane_g8

0x9368,	// (0x00009368) bg_ai5_widget_pane_g9_ParamLimits

0x9368,	// (0x00009368) bg_ai5_widget_pane_g9

0x0008,

0xa934,	// (0x0000a934) bg_ai5_widget_pane_g_ParamLimits

0xa934,	// (0x0000a934) bg_ai5_widget_pane_g

0x9398,	// (0x00009398) cell_shortcut_ai5_widget_pane_ParamLimits

0x9398,	// (0x00009398) cell_shortcut_ai5_widget_pane

0x93a9,	// (0x000093a9) bg_cell_shortcut_ai5_widget_pane

0x095f,	// (0x0000095f) cell_grid_ai5_widget_pane_g1

0x232f,	// (0x0000232f) highlight_cell_shortcut_ai5_widget_pane

0x3279,	// (0x00003279) ai5_sk_left_pane_g1

0x93b1,	// (0x000093b1) ai5_sk_left_pane_g2

0x93b9,	// (0x000093b9) ai5_sk_left_pane_g3

0x93c1,	// (0x000093c1) ai5_sk_left_pane_g4

0x0003,

0xa947,	// (0x0000a947) ai5_sk_left_pane_g

0x93c9,	// (0x000093c9) ai5_sk_left_pane_t1

0x3271,	// (0x00003271) ai5_sk_right_pane_g1

0x93d7,	// (0x000093d7) ai5_sk_right_pane_g2

0x93df,	// (0x000093df) ai5_sk_right_pane_g3

0x93e7,	// (0x000093e7) ai5_sk_right_pane_g4

0x0003,

0xa950,	// (0x0000a950) ai5_sk_right_pane_g

0x93ef,	// (0x000093ef) ai5_sk_right_pane_t1

0x3271,	// (0x00003271) ai5_sk_middle_pane_g1

0x3279,	// (0x00003279) ai5_sk_middle_pane_g2

0x3291,	// (0x00003291) ai5_sk_middle_pane_g3

0x93df,	// (0x000093df) ai5_sk_middle_pane_g4

0x93b9,	// (0x000093b9) ai5_sk_middle_pane_g5

0x93fd,	// (0x000093fd) ai5_sk_middle_pane_g6

0xe280,	// (0x0000e280) ai5_sk_middle_pane_g7

0x0006,

0xeaaa,	// (0x0000eaaa) ai5_sk_middle_pane_g

0xbfc1,	// (0x0000bfc1) aid_touch_area_size_lc0_ParamLimits

0xbfc1,	// (0x0000bfc1) aid_touch_area_size_lc0

0x6604,	// (0x00006604) cell_hwr_candidate_pane_t1_ParamLimits

0x2d87,	// (0x00002d87) aid_touch_navi_pane

0xc22e,	// (0x0000c22e) status_dt_navi_pane_ParamLimits

0xc22e,	// (0x0000c22e) status_dt_navi_pane

0xc246,	// (0x0000c246) status_dt_sta_pane_ParamLimits

0xc246,	// (0x0000c246) status_dt_sta_pane

0xe288,	// (0x0000e288) dt_sta_controll_pane

0xe295,	// (0x0000e295) dt_sta_indi_pane

0xe2a2,	// (0x0000e2a2) dt_sta_title_pane

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane

0xe2b4,	// (0x0000e2b4) dt_sta_battery_pane

0xe2bc,	// (0x0000e2bc) dt_sta_indi_pane_g1

0xe2c5,	// (0x0000e2c5) dt_sta_indi_pane_g2

0xe2ce,	// (0x0000e2ce) dt_sta_indi_pane_g3

0x0002,

0xeab9,	// (0x0000eab9) dt_sta_indi_pane_g

0xe2d7,	// (0x0000e2d7) dt_sta_signal_pane

0x120e,	// (0x0000120e) bg_dt_sta_title_pane_ParamLimits

0x120e,	// (0x0000120e) bg_dt_sta_title_pane

0xe2e0,	// (0x0000e2e0) dt_sta_title_pane_g1

0xe2e8,	// (0x0000e2e8) dt_sta_title_pane_t1_ParamLimits

0xe2e8,	// (0x0000e2e8) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0xe2fd,	// (0x0000e2fd) dt_sta_controll_pane_g1

0xe306,	// (0x0000e306) bg_dt_sta_title_pane_g1

0xe30f,	// (0x0000e30f) bg_dt_sta_title_pane_g2

0xe318,	// (0x0000e318) bg_dt_sta_title_pane_g3

0x0002,

0xeac0,	// (0x0000eac0) bg_dt_sta_title_pane_g

0x5e2d,	// (0x00005e2d) bg_dt_sta_indi_pane_g1

0xe321,	// (0x0000e321) dt_sta_signal_pane_g1

0xe329,	// (0x0000e329) dt_sta_signal_pane_g2

0x0001,

0xeac7,	// (0x0000eac7) dt_sta_signal_pane_g

0x94bb,	// (0x000094bb) dt_sta_battery_pane_g1

0x94c4,	// (0x000094c4) dt_sta_battery_pane_t1

0x5e2d,	// (0x00005e2d) bg_dt_sta_control_pane_g1

0x1cf7,	// (0x00001cf7) fep_china_uni_eep_pane

0x1cff,	// (0x00001cff) fep_china_uni_entry_pane_ParamLimits

0x1d0f,	// (0x00001d0f) popup_fep_china_uni_window_g1_ParamLimits

0x1d1f,	// (0x00001d1f) popup_fep_china_uni_window_g2_ParamLimits

0x1d1f,	// (0x00001d1f) popup_fep_china_uni_window_g2

0x0001,

0xa20c,	// (0x0000a20c) popup_fep_china_uni_window_g_ParamLimits

0xa20c,	// (0x0000a20c) popup_fep_china_uni_window_g

0x94d3,	// (0x000094d3) fep_china_uni_eep_pane_g1

0x94db,	// (0x000094db) fep_china_uni_eep_pane_t1

0x8f7e,	// (0x00008f7e) aid_touch_area_size_smil_player

0x2ebe,	// (0x00002ebe) lc0_clock_pane

0x3090,	// (0x00003090) status_pane_g5_ParamLimits

0x3090,	// (0x00003090) status_pane_g5

0xbb55,	// (0x0000bb55) popup_keymap_window

0x3058,	// (0x00003058) status_icon_pane

0xe0d7,	// (0x0000e0d7) cell_ai5_widget_pane_g3_ParamLimits

0xe0f1,	// (0x0000e0f1) cell_ai5_widget_pane_g4_ParamLimits

0xe101,	// (0x0000e101) cell_ai5_widget_pane_g5_ParamLimits

0xe129,	// (0x0000e129) cell_ai5_widget_pane_g8_ParamLimits

0xe129,	// (0x0000e129) cell_ai5_widget_pane_g8

0xe13d,	// (0x0000e13d) cell_ai5_widget_pane_g9_ParamLimits

0xe13d,	// (0x0000e13d) cell_ai5_widget_pane_g9

0xe151,	// (0x0000e151) cell_ai5_widget_pane_g10_ParamLimits

0xe151,	// (0x0000e151) cell_ai5_widget_pane_g10

0x94ea,	// (0x000094ea) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x94f2,	// (0x000094f2) popup_keymap_window_t1

0xb8a5,	// (0x0000b8a5) control_pane_g6_ParamLimits

0xb8a5,	// (0x0000b8a5) control_pane_g6

0xb8b2,	// (0x0000b8b2) control_pane_g7_ParamLimits

0xb8b2,	// (0x0000b8b2) control_pane_g7

0xb8bf,	// (0x0000b8bf) control_pane_g8_ParamLimits

0xb8bf,	// (0x0000b8bf) control_pane_g8

0xe288,	// (0x0000e288) dt_sta_controll_pane_ParamLimits

0xe295,	// (0x0000e295) dt_sta_indi_pane_ParamLimits

0xe2a2,	// (0x0000e2a2) dt_sta_title_pane_ParamLimits

0x0c2a,	// (0x00000c2a) aid_size_touch_scroll_bar_cale

0x026c,	// (0x0000026c) popup_discreet_window_ParamLimits

0x026c,	// (0x0000026c) popup_discreet_window

0xaafc,	// (0x0000aafc) popup_sk_window

0x3a37,	// (0x00003a37) bg_popup_sub_pane_cp28_ParamLimits

0x3a37,	// (0x00003a37) bg_popup_sub_pane_cp28

0x9500,	// (0x00009500) popup_discreet_window_g1_ParamLimits

0x9500,	// (0x00009500) popup_discreet_window_g1

0x9520,	// (0x00009520) popup_discreet_window_t1_ParamLimits

0x9520,	// (0x00009520) popup_discreet_window_t1

0x953e,	// (0x0000953e) popup_discreet_window_t2_ParamLimits

0x953e,	// (0x0000953e) popup_discreet_window_t2

0x0002,

0xa97b,	// (0x0000a97b) popup_discreet_window_t_ParamLimits

0xa97b,	// (0x0000a97b) popup_discreet_window_t

0x9590,	// (0x00009590) popup_sk_window_g1

0x9599,	// (0x00009599) popup_sk_window_g2

0x0001,

0xa982,	// (0x0000a982) popup_sk_window_g

0x95a2,	// (0x000095a2) popup_sk_window_t1

0x95b0,	// (0x000095b0) popup_sk_window_t1_copy1

0xe0c3,	// (0x0000e0c3) cell_ai5_widget_pane_g2_ParamLimits

0xe209,	// (0x0000e209) cell_ai5_widget_pane_t9_ParamLimits

0xe209,	// (0x0000e209) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xe331,	// (0x0000e331) aid_fshwr2_btn_pane

0xe345,	// (0x0000e345) aid_fshwr2_syb_pane

0xe359,	// (0x0000e359) aid_fshwr2_txt_pane

0xe369,	// (0x0000e369) fshwr2_func_candi_pane

0xe381,	// (0x0000e381) fshwr2_hwr_syb_pane

0xe399,	// (0x0000e399) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xe3c3,	// (0x0000e3c3) fshwr2_icf_pane_t1_ParamLimits

0xe3c3,	// (0x0000e3c3) fshwr2_icf_pane_t1

0x1b2f,	// (0x00001b2f) fshwr2_func_candi_pane_g1

0xe3da,	// (0x0000e3da) fshwr2_func_candi_row_pane_ParamLimits

0xe3da,	// (0x0000e3da) fshwr2_func_candi_row_pane

0xe3fd,	// (0x0000e3fd) cell_fshwr2_syb_pane_ParamLimits

0xe3fd,	// (0x0000e3fd) cell_fshwr2_syb_pane

0x8f1a,	// (0x00008f1a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8f1a,	// (0x00008f1a) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0xe41f,	// (0x0000e41f) fshwr2_func_candi_cell_pane_ParamLimits

0xe41f,	// (0x0000e41f) fshwr2_func_candi_cell_pane

0x3829,	// (0x00003829) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3829,	// (0x00003829) fshwr2_func_candi_cell_bg_pane

0xe45e,	// (0x0000e45e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe45e,	// (0x0000e45e) fshwr2_func_candi_cell_pane_g1

0xe495,	// (0x0000e495) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe495,	// (0x0000e495) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x289b,	// (0x0000289b) cell_fshwr2_syb_bg_pane

0xe4b0,	// (0x0000e4b0) cell_fshwr2_syb_bg_pane_g1

0xe4c0,	// (0x0000e4c0) cell_fshwr2_syb_bg_pane_t1

0x120e,	// (0x0000120e) main_tmo_pane

0xc647,	// (0x0000c647) uni_indicator_pane_g1_ParamLimits

0xc65d,	// (0x0000c65d) uni_indicator_pane_g2_ParamLimits

0xc673,	// (0x0000c673) uni_indicator_pane_g3_ParamLimits

0x4676,	// (0x00004676) uni_indicator_pane_g4_ParamLimits

0x4676,	// (0x00004676) uni_indicator_pane_g4

0x468a,	// (0x0000468a) uni_indicator_pane_g5_ParamLimits

0x468a,	// (0x0000468a) uni_indicator_pane_g5

0x468a,	// (0x0000468a) uni_indicator_pane_g6_ParamLimits

0x468a,	// (0x0000468a) uni_indicator_pane_g6

0xe912,	// (0x0000e912) uni_indicator_pane_g_ParamLimits

0xd1b3,	// (0x0000d1b3) popup_tmo_note_window_ParamLimits

0xd1b3,	// (0x0000d1b3) popup_tmo_note_window

0x120e,	// (0x0000120e) fshwr2_bg_pane

0xe486,	// (0x0000e486) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe486,	// (0x0000e486) fshwr2_func_candi_cell_pane_g2

0x0001,

0xeacc,	// (0x0000eacc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xeacc,	// (0x0000eacc) fshwr2_func_candi_cell_pane_g

0x5e2d,	// (0x00005e2d) bg_popup_window_pane_cp01

0x972c,	// (0x0000972c) bg_popup_window_pane_g1_cp01

0x9735,	// (0x00009735) bg_popup_window_pane_cp22_ParamLimits

0x9735,	// (0x00009735) bg_popup_window_pane_cp22

0x9743,	// (0x00009743) listscroll_tmo_link_pane_ParamLimits

0x9743,	// (0x00009743) listscroll_tmo_link_pane

0x9783,	// (0x00009783) popup_tmo_note_window_g1_ParamLimits

0x9783,	// (0x00009783) popup_tmo_note_window_g1

0x9790,	// (0x00009790) tmo_note_info_pane_ParamLimits

0x9790,	// (0x00009790) tmo_note_info_pane

0xe4d6,	// (0x0000e4d6) list_tmo_note_info_pane_g1_ParamLimits

0xe4d6,	// (0x0000e4d6) list_tmo_note_info_pane_g1

0x97c1,	// (0x000097c1) list_tmo_note_info_pane_g2_ParamLimits

0x97c1,	// (0x000097c1) list_tmo_note_info_pane_g2

0x0001,

0xead1,	// (0x0000ead1) list_tmo_note_info_pane_g_ParamLimits

0xead1,	// (0x0000ead1) list_tmo_note_info_pane_g

0x97dd,	// (0x000097dd) list_tmo_note_info_text_pane_ParamLimits

0x97dd,	// (0x000097dd) list_tmo_note_info_text_pane

0x985e,	// (0x0000985e) list_tmo_link_pane

0x986b,	// (0x0000986b) scroll_pane_cp20

0x9878,	// (0x00009878) list_single_tmo_link_pane_ParamLimits

0x9878,	// (0x00009878) list_single_tmo_link_pane

0x9888,	// (0x00009888) list_single_tmo_link_pane_t1

0x9896,	// (0x00009896) list_tmo_note_info_text_pane_t1_ParamLimits

0x9896,	// (0x00009896) list_tmo_note_info_text_pane_t1

0x1431,	// (0x00001431) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1431,	// (0x00001431) aid_size_touch_scroll_bar_cp01

0xb367,	// (0x0000b367) aid_size_touch_slider_marker

0xaaf0,	// (0x0000aaf0) popup_settings_window_ParamLimits

0xaaf0,	// (0x0000aaf0) popup_settings_window

0x28c1,	// (0x000028c1) popup_candi_list_indi_window

0x2d87,	// (0x00002d87) aid_touch_navi_pane_ParamLimits

0x7b33,	// (0x00007b33) rs_clock_indi_pane

0x7b3c,	// (0x00007b3c) sctrl_sk_bottom_pane_ParamLimits

0x7b4d,	// (0x00007b4d) sctrl_sk_top_pane_ParamLimits

0x8364,	// (0x00008364) popup_fep_tooltip_window

0x90be,	// (0x000090be) aid_size_cell_widget_grid_ParamLimits

0xe0af,	// (0x0000e0af) cell_ai5_widget_pane_g1_ParamLimits

0xe0af,	// (0x0000e0af) cell_ai5_widget_pane_g1

0xe111,	// (0x0000e111) cell_ai5_widget_pane_g6_ParamLimits

0xe11d,	// (0x0000e11d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xea80,	// (0x0000ea80) cell_ai5_widget_pane_g_ParamLimits

0xea80,	// (0x0000ea80) cell_ai5_widget_pane_g

0xe238,	// (0x0000e238) cell_ai5_widget_pane_t10_ParamLimits

0xe238,	// (0x0000e238) cell_ai5_widget_pane_t10

0xe256,	// (0x0000e256) grid_ai5_widget_pane_ParamLimits

0x9374,	// (0x00009374) cell_contacts_ai5_widget_pane_ParamLimits

0x9374,	// (0x00009374) cell_contacts_ai5_widget_pane

0x9553,	// (0x00009553) popup_discreet_window_t3_ParamLimits

0x9553,	// (0x00009553) popup_discreet_window_t3

0xe3b1,	// (0x0000e3b1) popup_fshwr2_char_preview_window_ParamLimits

0xe3b1,	// (0x0000e3b1) popup_fshwr2_char_preview_window

0xe4ed,	// (0x0000e4ed) tmo_note_info_pane_t1

0xe502,	// (0x0000e502) tmo_note_info_pane_t2

0xe517,	// (0x0000e517) tmo_note_info_pane_t3

0x983a,	// (0x0000983a) tmo_note_info_pane_t4

0x984c,	// (0x0000984c) tmo_note_info_pane_t5

0x0004,

0xead6,	// (0x0000ead6) tmo_note_info_pane_t

0x985e,	// (0x0000985e) list_tmo_link_pane_ParamLimits

0x986b,	// (0x0000986b) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x98af,	// (0x000098af) popup_fshwr2_char_preview_window_t1

0x98bd,	// (0x000098bd) popup_candi_list_indi_window_g1

0x98c6,	// (0x000098c6) bg_cell_contacts_ai5_widget_pane

0x98d2,	// (0x000098d2) cell_contacts_ai5_widget_pane_g1

0x98e7,	// (0x000098e7) cell_contacts_ai5_widget_pane_g2

0x98f3,	// (0x000098f3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xa99c,	// (0x0000a99c) cell_contacts_ai5_widget_pane_g

0x98ff,	// (0x000098ff) cell_contacts_ai5_widget_pane_t1

0x120e,	// (0x0000120e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe58f,	// (0x0000e58f) settings_container_pane

0x232f,	// (0x0000232f) listscroll_set_pane_copy1

0x5343,	// (0x00005343) scroll_pane_cp121_copy1

0x9980,	// (0x00009980) set_content_pane_copy1

0x9988,	// (0x00009988) aid_height_set_list_copy1_ParamLimits

0x9988,	// (0x00009988) aid_height_set_list_copy1

0x4929,	// (0x00004929) aid_size_parent_copy1_ParamLimits

0x4929,	// (0x00004929) aid_size_parent_copy1

0x9994,	// (0x00009994) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9994,	// (0x00009994) button_value_adjust_pane_cp6_copy1

0x289b,	// (0x0000289b) list_highlight_pane_cp2_copy1_ParamLimits

0x289b,	// (0x0000289b) list_highlight_pane_cp2_copy1

0xe59b,	// (0x0000e59b) list_set_pane_copy1_ParamLimits

0xe59b,	// (0x0000e59b) list_set_pane_copy1

0xe52c,	// (0x0000e52c) main_pane_set_t1_copy1_ParamLimits

0xe52c,	// (0x0000e52c) main_pane_set_t1_copy1

0xe566,	// (0x0000e566) main_pane_set_t2_copy1_ParamLimits

0xe566,	// (0x0000e566) main_pane_set_t2_copy1

0x9a36,	// (0x00009a36) main_pane_set_t3_copy1

0x9a44,	// (0x00009a44) main_pane_set_t4_copy1

0xe583,	// (0x0000e583) set_content_pane_g1_copy1_ParamLimits

0xe583,	// (0x0000e583) set_content_pane_g1_copy1

0x9a52,	// (0x00009a52) setting_code_pane_copy1

0x9a5a,	// (0x00009a5a) setting_slider_graphic_pane_copy1

0x9a5a,	// (0x00009a5a) setting_slider_pane_copy1

0x9a5a,	// (0x00009a5a) setting_text_pane_copy1

0x9a5a,	// (0x00009a5a) setting_volume_pane_copy1

0x9a62,	// (0x00009a62) settings_code_pane_cp2_copy1

0x9a6a,	// (0x00009a6a) settings_code_pane_cp_copy1_ParamLimits

0x9a6a,	// (0x00009a6a) settings_code_pane_cp_copy1

0xe629,	// (0x0000e629) volume_set_pane_copy1

0xe631,	// (0x0000e631) volume_set_pane_g10_copy1

0xe639,	// (0x0000e639) volume_set_pane_g1_copy1

0xe641,	// (0x0000e641) volume_set_pane_g2_copy1

0xe649,	// (0x0000e649) volume_set_pane_g3_copy1

0xe651,	// (0x0000e651) volume_set_pane_g4_copy1

0xe659,	// (0x0000e659) volume_set_pane_g5_copy1

0xe661,	// (0x0000e661) volume_set_pane_g6_copy1

0xe669,	// (0x0000e669) volume_set_pane_g7_copy1

0xe671,	// (0x0000e671) volume_set_pane_g8_copy1

0xe679,	// (0x0000e679) volume_set_pane_g9_copy1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1_ParamLimits

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1

0x9ad6,	// (0x00009ad6) setting_slider_pane_t2_copy1_ParamLimits

0x9ad6,	// (0x00009ad6) setting_slider_pane_t2_copy1

0x9aef,	// (0x00009aef) setting_slider_pane_t3_copy1_ParamLimits

0x9aef,	// (0x00009aef) setting_slider_pane_t3_copy1

0x0504,	// (0x00000504) slider_set_pane_copy1_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_copy1

0x1331,	// (0x00001331) set_opt_bg_pane_g1_copy2

0x1339,	// (0x00001339) set_opt_bg_pane_g2_copy2

0x9b06,	// (0x00009b06) set_opt_bg_pane_g3_copy2

0x1349,	// (0x00001349) set_opt_bg_pane_g4_copy2

0x1351,	// (0x00001351) set_opt_bg_pane_g5_copy2

0x1359,	// (0x00001359) set_opt_bg_pane_g6_copy2

0xe681,	// (0x0000e681) set_opt_bg_pane_g7_copy2

0x9b16,	// (0x00009b16) set_opt_bg_pane_g8_copy2

0x9b1e,	// (0x00009b1e) set_opt_bg_pane_g9_copy2

0x4870,	// (0x00004870) aid_size_touch_slider_mark_copy1_ParamLimits

0x4870,	// (0x00004870) aid_size_touch_slider_mark_copy1

0x4a5f,	// (0x00004a5f) slider_set_pane_g1_copy1

0x4a68,	// (0x00004a68) slider_set_pane_g2_copy1

0x489d,	// (0x0000489d) slider_set_pane_g3_copy1_ParamLimits

0x489d,	// (0x0000489d) slider_set_pane_g3_copy1

0x48b1,	// (0x000048b1) slider_set_pane_g4_copy1_ParamLimits

0x48b1,	// (0x000048b1) slider_set_pane_g4_copy1

0x48c9,	// (0x000048c9) slider_set_pane_g5_copy1_ParamLimits

0x48c9,	// (0x000048c9) slider_set_pane_g5_copy1

0x489d,	// (0x0000489d) slider_set_pane_g6_copy1_ParamLimits

0x489d,	// (0x0000489d) slider_set_pane_g6_copy1

0xe689,	// (0x0000e689) slider_set_pane_g7_copy1_ParamLimits

0xe689,	// (0x0000e689) slider_set_pane_g7_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_copy1

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1_copy1

0xe69f,	// (0x0000e69f) setting_slider_graphic_pane_t1_copy1

0xe6ae,	// (0x0000e6ae) setting_slider_graphic_pane_t2_copy1

0xe6bd,	// (0x0000e6bd) slider_set_pane_cp_copy1

0x9b6a,	// (0x00009b6a) input_focus_pane_cp1_copy1

0x9b73,	// (0x00009b73) list_set_text_pane_copy1

0x9b7b,	// (0x00009b7b) setting_text_pane_g1_copy1

0x9b84,	// (0x00009b84) set_text_pane_t1_copy1

0x9b6a,	// (0x00009b6a) input_focus_pane_cp2_copy1

0x9b7b,	// (0x00009b7b) setting_code_pane_g1_copy1

0x9b9d,	// (0x00009b9d) setting_code_pane_t1_copy1

0xb72c,	// (0x0000b72c) list_set_graphic_pane_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_copy1

0x9bbf,	// (0x00009bbf) list_set_graphic_pane_g1_copy1_ParamLimits

0x9bbf,	// (0x00009bbf) list_set_graphic_pane_g1_copy1

0x9bcb,	// (0x00009bcb) list_set_graphic_pane_g2_copy1

0x20a1,	// (0x000020a1) list_set_graphic_pane_t1_copy1_ParamLimits

0x20a1,	// (0x000020a1) list_set_graphic_pane_t1_copy1

0x5e2d,	// (0x00005e2d) rs_clock_indi_pane_g1

0x9bd3,	// (0x00009bd3) rs_clock_indi_pane_t1

0x9be1,	// (0x00009be1) rs_indi_pane

0x9be9,	// (0x00009be9) rs_indi_pane_g1

0x9bf2,	// (0x00009bf2) rs_indi_pane_g2

0x98bd,	// (0x000098bd) rs_indi_pane_g3

0x0002,

0xa9a3,	// (0x0000a9a3) rs_indi_pane_g

0x232f,	// (0x0000232f) bg_popup_preview_window_pane_cp03

0x9bfb,	// (0x00009bfb) popup_fep_tooltip_window_t1

0x6f89,	// (0x00006f89) popup_note2_window_g2_ParamLimits

0x6f89,	// (0x00006f89) popup_note2_window_g2

0x0001,

0xa743,	// (0x0000a743) popup_note2_window_g_ParamLimits

0xa743,	// (0x0000a743) popup_note2_window_g

0x7582,	// (0x00007582) bg_popup_sub_pane_cp11_ParamLimits

0x758f,	// (0x0000758f) cell_ai3_links_pane_g1_ParamLimits

0x75a6,	// (0x000075a6) cell_ai3_links_pane_t1

0x9b84,	// (0x00009b84) set_text_pane_t1_copy1_ParamLimits

0x2256,	// (0x00002256) cell_graphic_popup_pane_cp2_ParamLimits

0x2256,	// (0x00002256) cell_graphic_popup_pane_cp2

0x9c09,	// (0x00009c09) cell_graphic_popup_pane_g1_cp2

0x0ad9,	// (0x00000ad9) cell_graphic_popup_pane_g2_cp2

0x9c11,	// (0x00009c11) cell_graphic_popup_pane_g3_cp2

0x9c19,	// (0x00009c19) cell_graphic_popup_pane_t2_cp2

0x0aea,	// (0x00000aea) grid_highlight_pane_cp3_cp2

0x1845,	// (0x00001845) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x120e,	// (0x0000120e) main_tmo_pane_ParamLimits

0xd1ab,	// (0x0000d1ab) popup_tmo_big_image_note_window

0x90fb,	// (0x000090fb) cell_ai5_widget_list_pane

0xe0a6,	// (0x0000e0a6) cell_ai5_widget_lrg_icon_pane

0xe4ed,	// (0x0000e4ed) tmo_note_info_pane_t1_ParamLimits

0xe502,	// (0x0000e502) tmo_note_info_pane_t2_ParamLimits

0xe517,	// (0x0000e517) tmo_note_info_pane_t3_ParamLimits

0x983a,	// (0x0000983a) tmo_note_info_pane_t4_ParamLimits

0x984c,	// (0x0000984c) tmo_note_info_pane_t5_ParamLimits

0xead6,	// (0x0000ead6) tmo_note_info_pane_t_ParamLimits

0xe58f,	// (0x0000e58f) settings_container_pane_ParamLimits

0x9b62,	// (0x00009b62) indicator_popup_pane_cp5

0x9b62,	// (0x00009b62) indicator_popup_pane_cp6

0xb72c,	// (0x0000b72c) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x9c27,	// (0x00009c27) popup_tmo_big_image_note_window_g1

0x9c30,	// (0x00009c30) popup_tmo_big_image_note_window_t1

0x9c3e,	// (0x00009c3e) popup_tmo_big_image_note_window_t2

0x9c4c,	// (0x00009c4c) popup_tmo_big_image_note_window_t3

0x0002,

0xa9aa,	// (0x0000a9aa) popup_tmo_big_image_note_window_t

0x5e2d,	// (0x00005e2d) cell_ai5_widget_lrg_icon_pane_g1

0x9c5a,	// (0x00009c5a) cell_ai5_widget_lrg_icon_pane_t1

0xe6c5,	// (0x0000e6c5) cell_ai5_widget_list_row_pane_ParamLimits

0xe6c5,	// (0x0000e6c5) cell_ai5_widget_list_row_pane

0xe6dc,	// (0x0000e6dc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe6dc,	// (0x0000e6dc) cell_ai5_widget_list_row_pane_g1

0xe6e9,	// (0x0000e6e9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe6e9,	// (0x0000e6e9) cell_ai5_widget_list_row_pane_t1

0xe71a,	// (0x0000e71a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe71a,	// (0x0000e71a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xeae1,	// (0x0000eae1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xeae1,	// (0x0000eae1) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x9d02,	// (0x00009d02) popup_fep_char_pre_window

0x9d0a,	// (0x00009d0a) popup_fep_ituss_window

0xe751,	// (0x0000e751) popup_fep_vkbss_window

0x9d4e,	// (0x00009d4e) grid_vkbss_keypad_pane_ParamLimits

0x9d4e,	// (0x00009d4e) grid_vkbss_keypad_pane

0x9d5e,	// (0x00009d5e) ituss_keypad_pane

0x9d77,	// (0x00009d77) aid_vkbss_key_offset_ParamLimits

0x9d77,	// (0x00009d77) aid_vkbss_key_offset

0x9d83,	// (0x00009d83) cell_vkbss_key_pane_ParamLimits

0x9d83,	// (0x00009d83) cell_vkbss_key_pane

0x306c,	// (0x0000306c) bg_cell_vkbss_key_g1_ParamLimits

0x306c,	// (0x0000306c) bg_cell_vkbss_key_g1

0x9d99,	// (0x00009d99) cell_vkbss_key_3p_pane_ParamLimits

0x9d99,	// (0x00009d99) cell_vkbss_key_3p_pane

0x9db3,	// (0x00009db3) cell_vkbss_key_g1_ParamLimits

0x9db3,	// (0x00009db3) cell_vkbss_key_g1

0x9dcd,	// (0x00009dcd) cell_vkbss_key_t1_ParamLimits

0x9dcd,	// (0x00009dcd) cell_vkbss_key_t1

0x9df8,	// (0x00009df8) cell_ituss_key_pane_ParamLimits

0x9df8,	// (0x00009df8) cell_ituss_key_pane

0x9e09,	// (0x00009e09) bg_cell_ituss_key_g1_ParamLimits

0x9e09,	// (0x00009e09) bg_cell_ituss_key_g1

0x9e15,	// (0x00009e15) cell_ituss_key_pane_g1_ParamLimits

0x9e15,	// (0x00009e15) cell_ituss_key_pane_g1

0x9e29,	// (0x00009e29) cell_ituss_key_pane_g2_ParamLimits

0x9e29,	// (0x00009e29) cell_ituss_key_pane_g2

0x0002,

0xa9b8,	// (0x0000a9b8) cell_ituss_key_pane_g_ParamLimits

0xa9b8,	// (0x0000a9b8) cell_ituss_key_pane_g

0x9e67,	// (0x00009e67) cell_ituss_key_t1_ParamLimits

0x9e67,	// (0x00009e67) cell_ituss_key_t1

0x9e9d,	// (0x00009e9d) cell_ituss_key_t2_ParamLimits

0x9e9d,	// (0x00009e9d) cell_ituss_key_t2

0x9ece,	// (0x00009ece) cell_ituss_key_t3_ParamLimits

0x9ece,	// (0x00009ece) cell_ituss_key_t3

0x9e9d,	// (0x00009e9d) cell_ituss_key_t4_ParamLimits

0x9e9d,	// (0x00009e9d) cell_ituss_key_t4

0x0004,

0xa9bf,	// (0x0000a9bf) cell_ituss_key_t_ParamLimits

0xa9bf,	// (0x0000a9bf) cell_ituss_key_t

0x9f11,	// (0x00009f11) cell_vkbss_key_3p_pane_g1

0x9f19,	// (0x00009f19) cell_vkbss_key_3p_pane_g2

0x9f21,	// (0x00009f21) cell_vkbss_key_3p_pane_g3

0x0002,

0xa9ca,	// (0x0000a9ca) cell_vkbss_key_3p_pane_g

0x232f,	// (0x0000232f) bg_popup_fep_char_preview_window_cp02

0x9f29,	// (0x00009f29) popup_fep_char_pre_window_t1

0xe093,	// (0x0000e093) main_ai5_sk_pane

0x98c6,	// (0x000098c6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x98d2,	// (0x000098d2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x98e7,	// (0x000098e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x98f3,	// (0x000098f3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xa99c,	// (0x0000a99c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x98ff,	// (0x000098ff) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x120e,	// (0x0000120e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe75e,	// (0x0000e75e) main_ai5_sk_pane_g1

0x3881,	// (0x00003881) popup_query_code_window_g1

0xe742,	// (0x0000e742) popup_fep_vkb_icf_pane

0x9d38,	// (0x00009d38) popup_fep_vtchi_icf_pane

0x9f40,	// (0x00009f40) bg_icf_pane

0x9f4c,	// (0x00009f4c) list_vkb_icf_pane

0x9f58,	// (0x00009f58) bg_icf_pane_cp01

0x9f6b,	// (0x00009f6b) vtchi_icf_list_pane

0xe767,	// (0x0000e767) list_vkb_icf_pane_t1_ParamLimits

0xe767,	// (0x0000e767) list_vkb_icf_pane_t1

0x9f8d,	// (0x00009f8d) vtchi_icf_list_pane_t1_ParamLimits

0x9f8d,	// (0x00009f8d) vtchi_icf_list_pane_t1

0x9d0a,	// (0x00009d0a) popup_fep_ituss_window_ParamLimits

0x9d38,	// (0x00009d38) popup_fep_vtchi_icf_pane_ParamLimits

0x9d5e,	// (0x00009d5e) ituss_keypad_pane_ParamLimits

0x9d6d,	// (0x00009d6d) ituss_sks_pane

0x9f40,	// (0x00009f40) bg_icf_pane_ParamLimits

0x9ce2,	// (0x00009ce2) icf_edit_indi_pane_ParamLimits

0x9ce2,	// (0x00009ce2) icf_edit_indi_pane

0x9f4c,	// (0x00009f4c) list_vkb_icf_pane_ParamLimits

0x9f58,	// (0x00009f58) bg_icf_pane_cp01_ParamLimits

0x9cf5,	// (0x00009cf5) icf_edit_indi_pane_cp01_ParamLimits

0x9cf5,	// (0x00009cf5) icf_edit_indi_pane_cp01

0x9f73,	// (0x00009f73) vtchi_query_pane

0x8f1a,	// (0x00008f1a) icf_edit_indi_pane_g1_ParamLimits

0x8f1a,	// (0x00008f1a) icf_edit_indi_pane_g1

0xe77d,	// (0x0000e77d) icf_edit_indi_pane_g2_ParamLimits

0xe77d,	// (0x0000e77d) icf_edit_indi_pane_g2

0x0001,

0xeae8,	// (0x0000eae8) icf_edit_indi_pane_g_ParamLimits

0xeae8,	// (0x0000eae8) icf_edit_indi_pane_g

0xe78d,	// (0x0000e78d) icf_edit_indi_pane_t1

0x9fa4,	// (0x00009fa4) bg_input_focus_pane_cp042

0x9fad,	// (0x00009fad) vtchi_button_pane

0x9fb6,	// (0x00009fb6) vtchi_query_pane_t1

0x9fc4,	// (0x00009fc4) vtchi_query_pane_t2

0x9fd2,	// (0x00009fd2) vtchi_query_pane_t3

0x0002,

0xa9d1,	// (0x0000a9d1) vtchi_query_pane_t

0x0020,	// (0x00000020) bg_button_pane_cp13

0x9fe0,	// (0x00009fe0) vtchi_button_pane_g1

0x9fe8,	// (0x00009fe8) ituss_sks_pane_g1

0x9ff1,	// (0x00009ff1) ituss_sks_pane_g2

0x0001,

0xa9d8,	// (0x0000a9d8) ituss_sks_pane_g

0x9ffa,	// (0x00009ffa) ituss_sks_pane_t1

0xa008,	// (0x0000a008) ituss_sks_pane_t2

0x0001,

0xa9dd,	// (0x0000a9dd) ituss_sks_pane_t

0x58e0,	// (0x000058e0) indicator_nsta_pane_cp_g1

0x58e9,	// (0x000058e9) indicator_nsta_pane_cp_g2

0x58f1,	// (0x000058f1) indicator_nsta_pane_cp_g3

0x58f9,	// (0x000058f9) indicator_nsta_pane_cp_g4

0x5901,	// (0x00005901) indicator_nsta_pane_cp_g5

0x5909,	// (0x00005909) indicator_nsta_pane_cp_g6

0x0005,

0xa58d,	// (0x0000a58d) indicator_nsta_pane_cp_g

0xde7e,	// (0x0000de7e) cell_graphic2_pane_t2_ParamLimits

0xde7e,	// (0x0000de7e) cell_graphic2_pane_t2

0x0001,

0xea6b,	// (0x0000ea6b) cell_graphic2_pane_t_ParamLimits

0xea6b,	// (0x0000ea6b) cell_graphic2_pane_t

0xdeb6,	// (0x0000deb6) cell_graphic2_control_pane_t1

0xb640,	// (0x0000b640) signal_pane_g3_ParamLimits

0xb640,	// (0x0000b640) signal_pane_g3

0xb654,	// (0x0000b654) signal_pane_g4_ParamLimits

0xb654,	// (0x0000b654) signal_pane_g4

0xe72c,	// (0x0000e72c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe72c,	// (0x0000e72c) cell_ai5_widget_list_row_pane_t3

0x9e55,	// (0x00009e55) cell_ituss_key_pane_t1_ParamLimits

0x9e55,	// (0x00009e55) cell_ituss_key_pane_t1

0x34ff,	// (0x000034ff) form_field_data_wide_pane_vc_t2_ParamLimits

0x34ff,	// (0x000034ff) form_field_data_wide_pane_vc_t2

0x3511,	// (0x00003511) form_field_data_wide_pane_vc_t3_ParamLimits

0x3511,	// (0x00003511) form_field_data_wide_pane_vc_t3

0x0002,

0xa2ec,	// (0x0000a2ec) form_field_data_wide_pane_vc_t_ParamLimits

0xa2ec,	// (0x0000a2ec) form_field_data_wide_pane_vc_t

0x55e2,	// (0x000055e2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x55e2,	// (0x000055e2) form_field_slider_wide_pane_vc_t3

0x56a0,	// (0x000056a0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x56a0,	// (0x000056a0) form_field_popup_wide_pane_vc_t2

0x56b5,	// (0x000056b5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x56b5,	// (0x000056b5) form_field_popup_wide_pane_vc_t3

0x0002,

0xa57c,	// (0x0000a57c) form_field_popup_wide_pane_vc_t_ParamLimits

0xa57c,	// (0x0000a57c) form_field_popup_wide_pane_vc_t

0xe331,	// (0x0000e331) aid_fshwr2_btn_pane_ParamLimits

0xe345,	// (0x0000e345) aid_fshwr2_syb_pane_ParamLimits

0xe359,	// (0x0000e359) aid_fshwr2_txt_pane_ParamLimits

0x120e,	// (0x0000120e) fshwr2_bg_pane_ParamLimits

0xe369,	// (0x0000e369) fshwr2_func_candi_pane_ParamLimits

0xe381,	// (0x0000e381) fshwr2_hwr_syb_pane_ParamLimits

0xe399,	// (0x0000e399) fshwr2_icf_pane_ParamLimits

0x555d,	// (0x0000555d) list_double_graphic_pane_vc_g4_ParamLimits

0x555d,	// (0x0000555d) list_double_graphic_pane_vc_g4

0x9e49,	// (0x00009e49) cell_ituss_key_pane_g3_ParamLimits

0x9e49,	// (0x00009e49) cell_ituss_key_pane_g3

0x9eff,	// (0x00009eff) cell_ituss_key_t5_ParamLimits

0x9eff,	// (0x00009eff) cell_ituss_key_t5

0xe751,	// (0x0000e751) popup_fep_vkbss_window_ParamLimits

0xe09d,	// (0x0000e09d) aid_cell_ai5_quarter

0xe78d,	// (0x0000e78d) icf_edit_indi_pane_t1_ParamLimits

0x084d,	// (0x0000084d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x084d,	// (0x0000084d) aid_tch_indicator_popup_pane_cp2

0x0860,	// (0x00000860) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0860,	// (0x00000860) aid_tch_query_popup_data_pane_cp2

0x3829,	// (0x00003829) aid_tch_query_popup_pane_ParamLimits

0x3829,	// (0x00003829) aid_tch_query_popup_pane

0x3829,	// (0x00003829) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3829,	// (0x00003829) aid_tch_query_popup_data_pane_cp1

0x289b,	// (0x0000289b) cell_fshwr2_syb_bg_pane_ParamLimits

0xe4b0,	// (0x0000e4b0) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe4c0,	// (0x0000e4c0) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe742,	// (0x0000e742) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal

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
0xa9a8,	// (0x0000a9a8) Screen

0xa9b2,	// (0x0000a9b2) application_window_ParamLimits

0xa9b2,	// (0x0000a9b2) application_window

0x002a,	// (0x0000002a) screen_g1

0xa9e0,	// (0x0000a9e0) area_bottom_pane_ParamLimits

0xa9e0,	// (0x0000a9e0) area_bottom_pane

0x011d,	// (0x0000011d) area_top_pane_ParamLimits

0x011d,	// (0x0000011d) area_top_pane

0x0195,	// (0x00000195) main_pane_ParamLimits

0x0195,	// (0x00000195) main_pane

0x024e,	// (0x0000024e) misc_graphics

0xbfc3,	// (0x0000bfc3) battery_pane_ParamLimits

0xbfc3,	// (0x0000bfc3) battery_pane

0x3c02,	// (0x00003c02) bg_status_flat_pane_g8

0x3c0a,	// (0x00003c0a) bg_status_flat_pane_g9

0x2e63,	// (0x00002e63) context_pane_ParamLimits

0x2e63,	// (0x00002e63) context_pane

0xc11d,	// (0x0000c11d) navi_pane_ParamLimits

0xc11d,	// (0x0000c11d) navi_pane

0xc192,	// (0x0000c192) signal_pane_ParamLimits

0xc192,	// (0x0000c192) signal_pane

0x0008,

0xa31d,	// (0x0000a31d) bg_status_flat_pane_g

0xc21e,	// (0x0000c21e) status_pane_g1_ParamLimits

0xc21e,	// (0x0000c21e) status_pane_g1

0xc22a,	// (0x0000c22a) status_pane_g2_ParamLimits

0xc22a,	// (0x0000c22a) status_pane_g2

0x3078,	// (0x00003078) status_pane_g3_ParamLimits

0x3078,	// (0x00003078) status_pane_g3

0x0004,

0xe83b,	// (0x0000e83b) status_pane_g_ParamLimits

0xe83b,	// (0x0000e83b) status_pane_g

0xc236,	// (0x0000c236) title_pane_ParamLimits

0xc236,	// (0x0000c236) title_pane

0xc291,	// (0x0000c291) uni_indicator_pane_ParamLimits

0xc291,	// (0x0000c291) uni_indicator_pane

0x2830,	// (0x00002830) bg_list_pane_ParamLimits

0x2830,	// (0x00002830) bg_list_pane

0xb987,	// (0x0000b987) find_pane

0xb98f,	// (0x0000b98f) listscroll_app_pane_ParamLimits

0xb98f,	// (0x0000b98f) listscroll_app_pane

0x2864,	// (0x00002864) listscroll_form_pane

0xb99f,	// (0x0000b99f) listscroll_gen_pane_ParamLimits

0xb99f,	// (0x0000b99f) listscroll_gen_pane

0x2881,	// (0x00002881) listscroll_set_pane

0xb9b4,	// (0x0000b9b4) main_idle_act_pane

0x232f,	// (0x0000232f) main_idle_trad_pane

0x232f,	// (0x0000232f) main_list_empty_pane

0x289b,	// (0x0000289b) main_midp_pane

0x28a7,	// (0x000028a7) main_pane_g1_ParamLimits

0x28a7,	// (0x000028a7) main_pane_g1

0xb9c7,	// (0x0000b9c7) popup_ai_message_window_ParamLimits

0xb9c7,	// (0x0000b9c7) popup_ai_message_window

0xba4b,	// (0x0000ba4b) popup_fep_china_uni_window_ParamLimits

0xba4b,	// (0x0000ba4b) popup_fep_china_uni_window

0x2991,	// (0x00002991) popup_fep_japan_candidate_window_ParamLimits

0x2991,	// (0x00002991) popup_fep_japan_candidate_window

0x29af,	// (0x000029af) popup_fep_japan_predictive_window_ParamLimits

0x29af,	// (0x000029af) popup_fep_japan_predictive_window

0xba89,	// (0x0000ba89) popup_find_window

0xbaa2,	// (0x0000baa2) popup_grid_graphic_window_ParamLimits

0xbaa2,	// (0x0000baa2) popup_grid_graphic_window

0x2a06,	// (0x00002a06) popup_large_graphic_colour_window

0xbb1e,	// (0x0000bb1e) popup_menu_window_ParamLimits

0xbb1e,	// (0x0000bb1e) popup_menu_window

0xbc7c,	// (0x0000bc7c) popup_note_image_window

0xbc44,	// (0x0000bc44) popup_note_wait_window_ParamLimits

0xbc44,	// (0x0000bc44) popup_note_wait_window

0xbc92,	// (0x0000bc92) popup_note_window_ParamLimits

0xbc92,	// (0x0000bc92) popup_note_window

0xbd26,	// (0x0000bd26) popup_query_code_window_ParamLimits

0xbd26,	// (0x0000bd26) popup_query_code_window

0x2bc3,	// (0x00002bc3) popup_query_data_code_window_ParamLimits

0x2bc3,	// (0x00002bc3) popup_query_data_code_window

0xbd5e,	// (0x0000bd5e) popup_query_data_window_ParamLimits

0xbd5e,	// (0x0000bd5e) popup_query_data_window

0xbdd2,	// (0x0000bdd2) popup_query_sat_info_window_ParamLimits

0xbdd2,	// (0x0000bdd2) popup_query_sat_info_window

0xbe5f,	// (0x0000be5f) popup_snote_single_graphic_window_ParamLimits

0xbe5f,	// (0x0000be5f) popup_snote_single_graphic_window

0xbe5f,	// (0x0000be5f) popup_snote_single_text_window_ParamLimits

0xbe5f,	// (0x0000be5f) popup_snote_single_text_window

0x2c32,	// (0x00002c32) popup_sub_window_general

0x2d36,	// (0x00002d36) popup_window_general_ParamLimits

0x2d36,	// (0x00002d36) popup_window_general

0x2d49,	// (0x00002d49) power_save_pane

0xb831,	// (0x0000b831) control_pane_g1_ParamLimits

0xb831,	// (0x0000b831) control_pane_g1

0x26b0,	// (0x000026b0) control_pane_g2_ParamLimits

0x26b0,	// (0x000026b0) control_pane_g2

0x26d1,	// (0x000026d1) control_pane_g3_ParamLimits

0x26d1,	// (0x000026d1) control_pane_g3

0x0007,

0xe823,	// (0x0000e823) control_pane_g_ParamLimits

0xe823,	// (0x0000e823) control_pane_g

0xb88d,	// (0x0000b88d) control_pane_t1_ParamLimits

0xb88d,	// (0x0000b88d) control_pane_t1

0xb8e9,	// (0x0000b8e9) control_pane_t2_ParamLimits

0xb8e9,	// (0x0000b8e9) control_pane_t2

0x0002,

0xe834,	// (0x0000e834) control_pane_t_ParamLimits

0xe834,	// (0x0000e834) control_pane_t

0x25b6,	// (0x000025b6) navi_navi_volume_pane_cp1

0x25be,	// (0x000025be) status_small_icon_pane

0x25c6,	// (0x000025c6) status_small_pane_g1_ParamLimits

0x25c6,	// (0x000025c6) status_small_pane_g1

0xb7b0,	// (0x0000b7b0) status_small_pane_g2_ParamLimits

0xb7b0,	// (0x0000b7b0) status_small_pane_g2

0xb7bc,	// (0x0000b7bc) status_small_pane_g3_ParamLimits

0xb7bc,	// (0x0000b7bc) status_small_pane_g3

0xb7c8,	// (0x0000b7c8) status_small_pane_g4_ParamLimits

0xb7c8,	// (0x0000b7c8) status_small_pane_g4

0xb7d4,	// (0x0000b7d4) status_small_pane_g5_ParamLimits

0xb7d4,	// (0x0000b7d4) status_small_pane_g5

0x262a,	// (0x0000262a) status_small_pane_g6_ParamLimits

0x262a,	// (0x0000262a) status_small_pane_g6

0x0007,

0xe812,	// (0x0000e812) status_small_pane_g_ParamLimits

0xe812,	// (0x0000e812) status_small_pane_g

0xb803,	// (0x0000b803) status_small_pane_t1

0xb81d,	// (0x0000b81d) status_small_wait_pane_ParamLimits

0xb81d,	// (0x0000b81d) status_small_wait_pane

0xb5b8,	// (0x0000b5b8) aid_levels_signal_ParamLimits

0xb5b8,	// (0x0000b5b8) aid_levels_signal

0xb5cc,	// (0x0000b5cc) signal_pane_g1_ParamLimits

0xb5cc,	// (0x0000b5cc) signal_pane_g1

0xb5e6,	// (0x0000b5e6) signal_pane_g2_ParamLimits

0xb5e6,	// (0x0000b5e6) signal_pane_g2

0x0003,

0xe7f2,	// (0x0000e7f2) signal_pane_g_ParamLimits

0xe7f2,	// (0x0000e7f2) signal_pane_g

0x1c78,	// (0x00001c78) context_pane_g1

0xab77,	// (0x0000ab77) title_pane_g1

0xabb9,	// (0x0000abb9) title_pane_t1

0x043c,	// (0x0000043c) title_pane_t2

0x0462,	// (0x00000462) title_pane_t3

0x0002,

0xe724,	// (0x0000e724) title_pane_t

0xc2b7,	// (0x0000c2b7) aid_levels_battery_ParamLimits

0xc2b7,	// (0x0000c2b7) aid_levels_battery

0xc2cf,	// (0x0000c2cf) battery_pane_g1_ParamLimits

0xc2cf,	// (0x0000c2cf) battery_pane_g1

0xc2ea,	// (0x0000c2ea) battery_pane_g2_ParamLimits

0xc2ea,	// (0x0000c2ea) battery_pane_g2

0x0001,

0xe846,	// (0x0000e846) battery_pane_g_ParamLimits

0xe846,	// (0x0000e846) battery_pane_g

0xc608,	// (0x0000c608) uni_indicator_pane_g1

0xc61e,	// (0x0000c61e) uni_indicator_pane_g2

0xc634,	// (0x0000c634) uni_indicator_pane_g3

0x0005,

0xe882,	// (0x0000e882) uni_indicator_pane_g

0x1423,	// (0x00001423) navi_icon_pane_ParamLimits

0x1423,	// (0x00001423) navi_icon_pane

0x024e,	// (0x0000024e) navi_midp_pane

0x024e,	// (0x0000024e) navi_navi_pane

0x1423,	// (0x00001423) navi_text_pane_ParamLimits

0x1423,	// (0x00001423) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x095f,	// (0x0000095f) status_small_wait_pane_g2

0x0001,

0xa3c0,	// (0x0000a3c0) status_small_wait_pane_g

0xc5ae,	// (0x0000c5ae) navi_navi_icon_text_pane

0xc5b6,	// (0x0000c5b6) navi_navi_pane_g1_ParamLimits

0xc5b6,	// (0x0000c5b6) navi_navi_pane_g1

0xc5c8,	// (0x0000c5c8) navi_navi_pane_g2_ParamLimits

0xc5c8,	// (0x0000c5c8) navi_navi_pane_g2

0x0001,

0xe87d,	// (0x0000e87d) navi_navi_pane_g_ParamLimits

0xe87d,	// (0x0000e87d) navi_navi_pane_g

0xc5da,	// (0x0000c5da) navi_navi_tabs_pane

0xc5ae,	// (0x0000c5ae) navi_navi_text_pane

0xc5ae,	// (0x0000c5ae) navi_navi_volume_pane

0x4344,	// (0x00004344) navi_text_pane_t1

0x4338,	// (0x00004338) navi_icon_pane_g1

0x428c,	// (0x0000428c) navi_navi_text_pane_t1

0x427b,	// (0x0000427b) navi_navi_volume_pane_g1

0xc5a5,	// (0x0000c5a5) volume_small_pane

0xc501,	// (0x0000c501) navi_navi_icon_text_pane_g1

0xc509,	// (0x0000c509) navi_navi_icon_text_pane_t1

0x3c62,	// (0x00003c62) navi_tabs_2_long_pane

0x3c62,	// (0x00003c62) navi_tabs_2_pane

0x3c62,	// (0x00003c62) navi_tabs_3_long_pane

0x3c62,	// (0x00003c62) navi_tabs_3_pane

0x3c62,	// (0x00003c62) navi_tabs_4_pane

0xc4e1,	// (0x0000c4e1) tabs_2_active_pane_ParamLimits

0xc4e1,	// (0x0000c4e1) tabs_2_active_pane

0xc4f1,	// (0x0000c4f1) tabs_2_passive_pane_ParamLimits

0xc4f1,	// (0x0000c4f1) tabs_2_passive_pane

0xc4af,	// (0x0000c4af) tabs_3_active_pane_ParamLimits

0xc4af,	// (0x0000c4af) tabs_3_active_pane

0xc4bf,	// (0x0000c4bf) tabs_3_passive_pane_ParamLimits

0xc4bf,	// (0x0000c4bf) tabs_3_passive_pane

0xc4d0,	// (0x0000c4d0) tabs_3_passive_pane_cp_ParamLimits

0xc4d0,	// (0x0000c4d0) tabs_3_passive_pane_cp

0xc46b,	// (0x0000c46b) tabs_4_active_pane_ParamLimits

0xc46b,	// (0x0000c46b) tabs_4_active_pane

0xc47c,	// (0x0000c47c) tabs_4_passive_pane_ParamLimits

0xc47c,	// (0x0000c47c) tabs_4_passive_pane

0xc48d,	// (0x0000c48d) tabs_4_passive_pane_cp_ParamLimits

0xc48d,	// (0x0000c48d) tabs_4_passive_pane_cp

0xc49e,	// (0x0000c49e) tabs_4_passive_pane_cp2_ParamLimits

0xc49e,	// (0x0000c49e) tabs_4_passive_pane_cp2

0xc44b,	// (0x0000c44b) tabs_2_long_active_pane_ParamLimits

0xc44b,	// (0x0000c44b) tabs_2_long_active_pane

0xc45b,	// (0x0000c45b) tabs_2_long_passive_pane_ParamLimits

0xc45b,	// (0x0000c45b) tabs_2_long_passive_pane

0xc414,	// (0x0000c414) tabs_3_long_active_pane_ParamLimits

0xc414,	// (0x0000c414) tabs_3_long_active_pane

0xc427,	// (0x0000c427) tabs_3_long_passive_pane_ParamLimits

0xc427,	// (0x0000c427) tabs_3_long_passive_pane

0xc438,	// (0x0000c438) tabs_3_long_passive_pane_cp_ParamLimits

0xc438,	// (0x0000c438) tabs_3_long_passive_pane_cp

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

0xa35a,	// (0x0000a35a) volume_small_pane_g

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_active_pane_g1

0xac46,	// (0x0000ac46) tabs_3_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_passive_pane_g1

0xac46,	// (0x0000ac46) tabs_3_passive_pane_t1

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3

0x4c2a,	// (0x00004c2a) tabs_4_active_pane_g1

0xac5c,	// (0x0000ac5c) tabs_4_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3

0x4c2a,	// (0x00004c2a) tabs_4_1_passive_pane_g1

0xac5c,	// (0x0000ac5c) tabs_4_1_passive_pane_t1

0x289b,	// (0x0000289b) list_highlight_pane_cp2

0xc701,	// (0x0000c701) list_set_pane_ParamLimits

0xc701,	// (0x0000c701) list_set_pane

0xc78f,	// (0x0000c78f) main_pane_set_t1_ParamLimits

0xc78f,	// (0x0000c78f) main_pane_set_t1

0xc7af,	// (0x0000c7af) main_pane_set_t2_ParamLimits

0xc7af,	// (0x0000c7af) main_pane_set_t2

0xc7c3,	// (0x0000c7c3) main_pane_set_t3_ParamLimits

0xc7c3,	// (0x0000c7c3) main_pane_set_t3

0xc7d5,	// (0x0000c7d5) main_pane_set_t4_ParamLimits

0xc7d5,	// (0x0000c7d5) main_pane_set_t4

0x0003,

0xe8cb,	// (0x0000e8cb) main_pane_set_t_ParamLimits

0xe8cb,	// (0x0000e8cb) main_pane_set_t

0xc7e7,	// (0x0000c7e7) setting_code_pane

0xc7ef,	// (0x0000c7ef) setting_slider_graphic_pane

0xc7ef,	// (0x0000c7ef) setting_slider_pane

0xc7ef,	// (0x0000c7ef) setting_text_pane

0xc7ef,	// (0x0000c7ef) setting_volume_pane

0xac72,	// (0x0000ac72) volume_set_pane

0x0474,	// (0x00000474) bg_set_opt_pane_cp

0x04be,	// (0x000004be) setting_slider_pane_t1

0xac7a,	// (0x0000ac7a) setting_slider_pane_t2

0xac93,	// (0x0000ac93) setting_slider_pane_t3

0x0002,

0xe72b,	// (0x0000e72b) setting_slider_pane_t

0x0504,	// (0x00000504) slider_set_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1

0xacaa,	// (0x0000acaa) setting_slider_graphic_pane_t1

0xacb9,	// (0x0000acb9) setting_slider_graphic_pane_t2

0x0001,

0xe732,	// (0x0000e732) setting_slider_graphic_pane_t

0xacc8,	// (0x0000acc8) slider_set_pane_cp

0x024e,	// (0x0000024e) input_focus_pane_cp1

0x4915,	// (0x00004915) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x024e,	// (0x0000024e) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x0549,	// (0x00000549) setting_code_pane_t1

0x9b41,	// (0x00009b41) set_text_pane_t1_ParamLimits

0x9b41,	// (0x00009b41) set_text_pane_t1

0x1331,	// (0x00001331) set_opt_bg_pane_g1

0x1339,	// (0x00001339) set_opt_bg_pane_g2

0xc6c1,	// (0x0000c6c1) set_opt_bg_pane_g3

0x1349,	// (0x00001349) set_opt_bg_pane_g4

0x1351,	// (0x00001351) set_opt_bg_pane_g5

0x1359,	// (0x00001359) set_opt_bg_pane_g6

0xc6c9,	// (0x0000c6c9) set_opt_bg_pane_g7

0xc6d1,	// (0x0000c6d1) set_opt_bg_pane_g8

0xc6d9,	// (0x0000c6d9) set_opt_bg_pane_g9

0x0008,

0xe8b8,	// (0x0000e8b8) set_opt_bg_pane_g

0x4884,	// (0x00004884) slider_set_pane_g1

0x4891,	// (0x00004891) slider_set_pane_g2

0x0006,

0xe8a9,	// (0x0000e8a9) slider_set_pane_g

0xc649,	// (0x0000c649) volume_set_pane_g1

0xc651,	// (0x0000c651) volume_set_pane_g2

0xc659,	// (0x0000c659) volume_set_pane_g3

0xc661,	// (0x0000c661) volume_set_pane_g4

0xc669,	// (0x0000c669) volume_set_pane_g5

0xc671,	// (0x0000c671) volume_set_pane_g6

0xc679,	// (0x0000c679) volume_set_pane_g7

0xc681,	// (0x0000c681) volume_set_pane_g8

0xc689,	// (0x0000c689) volume_set_pane_g9

0xc691,	// (0x0000c691) volume_set_pane_g10

0x0009,

0xe88f,	// (0x0000e88f) volume_set_pane_g

0xacd0,	// (0x0000acd0) indicator_pane_ParamLimits

0xacd0,	// (0x0000acd0) indicator_pane

0xacf8,	// (0x0000acf8) main_idle_pane_g2_ParamLimits

0xacf8,	// (0x0000acf8) main_idle_pane_g2

0xad28,	// (0x0000ad28) main_pane_idle_g1_ParamLimits

0xad28,	// (0x0000ad28) main_pane_idle_g1

0x05af,	// (0x000005af) popup_clock_digital_analogue_window_ParamLimits

0x05af,	// (0x000005af) popup_clock_digital_analogue_window

0xad4d,	// (0x0000ad4d) soft_indicator_pane_ParamLimits

0xad4d,	// (0x0000ad4d) soft_indicator_pane

0xad67,	// (0x0000ad67) wallpaper_pane_ParamLimits

0xad67,	// (0x0000ad67) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xad79,	// (0x0000ad79) indicator_pane_g1_ParamLimits

0xad79,	// (0x0000ad79) indicator_pane_g1

0x4dc2,	// (0x00004dc2) navi_navi_icon_text_pane_srt_g1

0x0601,	// (0x00000601) soft_indicator_pane_t1

0x061b,	// (0x0000061b) aid_ps_area_pane

0xad92,	// (0x0000ad92) aid_ps_clock_pane

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

0xa01f,	// (0x0000a01f) power_save_pane_g_ParamLimits

0xa01f,	// (0x0000a01f) power_save_pane_g

0x066d,	// (0x0000066d) power_save_pane_t1_ParamLimits

0x066d,	// (0x0000066d) power_save_pane_t1

0xad92,	// (0x0000ad92) aid_ps_clock_pane_ParamLimits

0x0638,	// (0x00000638) aid_ps_indicator_pane_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4

0x0001,

0xa024,	// (0x0000a024) power_save_pane_t_ParamLimits

0xa024,	// (0x0000a024) power_save_pane_t

0x06a9,	// (0x000006a9) power_save_t3_ParamLimits

0x06a9,	// (0x000006a9) power_save_t3

0x0694,	// (0x00000694) power_save_t2_ParamLimits

0x0694,	// (0x00000694) power_save_t2

0x06be,	// (0x000006be) indicator_ps_pane_g1

0xad9e,	// (0x0000ad9e) ai_gene_pane_ParamLimits

0xad9e,	// (0x0000ad9e) ai_gene_pane

0xadb5,	// (0x0000adb5) ai_links_pane_ParamLimits

0xadb5,	// (0x0000adb5) ai_links_pane

0xadc7,	// (0x0000adc7) indicator_pane_cp1_ParamLimits

0xadc7,	// (0x0000adc7) indicator_pane_cp1

0xadd6,	// (0x0000add6) main_pane_idle_g1_cp_ParamLimits

0xadd6,	// (0x0000add6) main_pane_idle_g1_cp

0x06f7,	// (0x000006f7) popup_ai_links_title_window

0xadee,	// (0x0000adee) soft_indicator_pane_cp1_ParamLimits

0xadee,	// (0x0000adee) soft_indicator_pane_cp1

0x4623,	// (0x00004623) ai_links_pane_g1

0x462c,	// (0x0000462c) grid_ai_links_pane

0xc5ff,	// (0x0000c5ff) ai_gene_pane_1

0x4611,	// (0x00004611) ai_gene_pane_2

0x461a,	// (0x0000461a) list_highlight_pane_cp4

0xc5e3,	// (0x0000c5e3) cell_ai_link_pane_ParamLimits

0xc5e3,	// (0x0000c5e3) cell_ai_link_pane

0x45e4,	// (0x000045e4) cell_ai_link_pane_g1

0x095f,	// (0x0000095f) cell_ai_link_pane_g2

0x0001,

0xa3bb,	// (0x0000a3bb) cell_ai_link_pane_g

0x024e,	// (0x0000024e) grid_highlight_cp2

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp1

0x071a,	// (0x0000071a) popup_ai_links_title_window_t1

0x4536,	// (0x00004536) ai_gene_pane_1_g1_ParamLimits

0x4536,	// (0x00004536) ai_gene_pane_1_g1

0x4542,	// (0x00004542) ai_gene_pane_1_g2_ParamLimits

0x4542,	// (0x00004542) ai_gene_pane_1_g2

0x0001,

0xa3b1,	// (0x0000a3b1) ai_gene_pane_1_g_ParamLimits

0xa3b1,	// (0x0000a3b1) ai_gene_pane_1_g

0x454f,	// (0x0000454f) ai_gene_pane_1_t1_ParamLimits

0x454f,	// (0x0000454f) ai_gene_pane_1_t1

0x4583,	// (0x00004583) grid_ai_soft_ind_pane

0x4521,	// (0x00004521) ai_gene_pane_2_t1_ParamLimits

0x4521,	// (0x00004521) ai_gene_pane_2_t1

0xae02,	// (0x0000ae02) main_pane_empty_t1_ParamLimits

0xae02,	// (0x0000ae02) main_pane_empty_t1

0xae1f,	// (0x0000ae1f) main_pane_empty_t2_ParamLimits

0xae1f,	// (0x0000ae1f) main_pane_empty_t2

0xae37,	// (0x0000ae37) main_pane_empty_t3_ParamLimits

0xae37,	// (0x0000ae37) main_pane_empty_t3

0xae4a,	// (0x0000ae4a) main_pane_empty_t4_ParamLimits

0xae4a,	// (0x0000ae4a) main_pane_empty_t4

0xae5d,	// (0x0000ae5d) main_pane_empty_t5_ParamLimits

0xae5d,	// (0x0000ae5d) main_pane_empty_t5

0x0004,

0xe737,	// (0x0000e737) main_pane_empty_t_ParamLimits

0xe737,	// (0x0000e737) main_pane_empty_t

0x1423,	// (0x00001423) bg_popup_window_pane_ParamLimits

0x1423,	// (0x00001423) bg_popup_window_pane

0x429b,	// (0x0000429b) find_popup_pane_cp2_ParamLimits

0x429b,	// (0x0000429b) find_popup_pane_cp2

0x42a7,	// (0x000042a7) heading_pane_ParamLimits

0x42a7,	// (0x000042a7) heading_pane

0x024e,	// (0x0000024e) bg_popup_sub_pane

0xc526,	// (0x0000c526) bg_popup_window_pane_g1_ParamLimits

0xc526,	// (0x0000c526) bg_popup_window_pane_g1

0xc535,	// (0x0000c535) bg_popup_window_pane_g2_ParamLimits

0xc535,	// (0x0000c535) bg_popup_window_pane_g2

0xc541,	// (0x0000c541) bg_popup_window_pane_g3_ParamLimits

0xc541,	// (0x0000c541) bg_popup_window_pane_g3

0xc54d,	// (0x0000c54d) bg_popup_window_pane_g4_ParamLimits

0xc54d,	// (0x0000c54d) bg_popup_window_pane_g4

0xc55c,	// (0x0000c55c) bg_popup_window_pane_g5_ParamLimits

0xc55c,	// (0x0000c55c) bg_popup_window_pane_g5

0xc56c,	// (0x0000c56c) bg_popup_window_pane_g6_ParamLimits

0xc56c,	// (0x0000c56c) bg_popup_window_pane_g6

0xc578,	// (0x0000c578) bg_popup_window_pane_g7_ParamLimits

0xc578,	// (0x0000c578) bg_popup_window_pane_g7

0xc587,	// (0x0000c587) bg_popup_window_pane_g8_ParamLimits

0xc587,	// (0x0000c587) bg_popup_window_pane_g8

0xc596,	// (0x0000c596) bg_popup_window_pane_g9_ParamLimits

0xc596,	// (0x0000c596) bg_popup_window_pane_g9

0x426f,	// (0x0000426f) bg_popup_window_pane_g10_ParamLimits

0x426f,	// (0x0000426f) bg_popup_window_pane_g10

0x0009,

0xe868,	// (0x0000e868) bg_popup_window_pane_g_ParamLimits

0xe868,	// (0x0000e868) bg_popup_window_pane_g

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

0xa374,	// (0x0000a374) heading_pane_t_ParamLimits

0xa374,	// (0x0000a374) heading_pane_t

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

0xa330,	// (0x0000a330) bg_popup_heading_pane_g

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

0xa30a,	// (0x0000a30a) bg_popup_sub_pane_g

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

0xa034,	// (0x0000a034) popup_note_window_t_ParamLimits

0xa034,	// (0x0000a034) popup_note_window_t

0x0873,	// (0x00000873) bg_popup_window_pane_cp6_ParamLimits

0x0873,	// (0x00000873) bg_popup_window_pane_cp6

0x3b46,	// (0x00003b46) popup_note_image_window_g1_ParamLimits

0x3b46,	// (0x00003b46) popup_note_image_window_g1

0x3b52,	// (0x00003b52) popup_note_image_window_g2_ParamLimits

0x3b52,	// (0x00003b52) popup_note_image_window_g2

0x0001,

0xa2fe,	// (0x0000a2fe) popup_note_image_window_g_ParamLimits

0xa2fe,	// (0x0000a2fe) popup_note_image_window_g

0x3b6b,	// (0x00003b6b) popup_note_image_window_t1_ParamLimits

0x3b6b,	// (0x00003b6b) popup_note_image_window_t1

0x3b84,	// (0x00003b84) popup_note_image_window_t2_ParamLimits

0x3b84,	// (0x00003b84) popup_note_image_window_t2

0x3b9d,	// (0x00003b9d) popup_note_image_window_t3_ParamLimits

0x3b9d,	// (0x00003b9d) popup_note_image_window_t3

0x0002,

0xa303,	// (0x0000a303) popup_note_image_window_t_ParamLimits

0xa303,	// (0x0000a303) popup_note_image_window_t

0x3a15,	// (0x00003a15) bg_popup_window_pane_cp7_ParamLimits

0x3a15,	// (0x00003a15) bg_popup_window_pane_cp7

0x3a45,	// (0x00003a45) popup_note_wait_window_g1_ParamLimits

0x3a45,	// (0x00003a45) popup_note_wait_window_g1

0x3a51,	// (0x00003a51) popup_note_wait_window_g2_ParamLimits

0x3a51,	// (0x00003a51) popup_note_wait_window_g2

0x0002,

0xa2ec,	// (0x0000a2ec) popup_note_wait_window_g_ParamLimits

0xa2ec,	// (0x0000a2ec) popup_note_wait_window_g

0x3a69,	// (0x00003a69) popup_note_wait_window_t1_ParamLimits

0x3a69,	// (0x00003a69) popup_note_wait_window_t1

0x3a90,	// (0x00003a90) popup_note_wait_window_t2_ParamLimits

0x3a90,	// (0x00003a90) popup_note_wait_window_t2

0x3aad,	// (0x00003aad) popup_note_wait_window_t3_ParamLimits

0x3aad,	// (0x00003aad) popup_note_wait_window_t3

0x3ac0,	// (0x00003ac0) popup_note_wait_window_t4_ParamLimits

0x3ac0,	// (0x00003ac0) popup_note_wait_window_t4

0x0004,

0xa2f3,	// (0x0000a2f3) popup_note_wait_window_t_ParamLimits

0xa2f3,	// (0x0000a2f3) popup_note_wait_window_t

0x3ae5,	// (0x00003ae5) wait_bar_pane_ParamLimits

0x3ae5,	// (0x00003ae5) wait_bar_pane

0x024e,	// (0x0000024e) wait_anim_pane

0x024e,	// (0x0000024e) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0xa1b3,	// (0x0000a1b3) wait_anim_pane_g

0x39c5,	// (0x000039c5) wait_border_pane_g1

0x39ce,	// (0x000039ce) wait_border_pane_g2

0x39d7,	// (0x000039d7) wait_border_pane_g3

0x0002,

0xa2e5,	// (0x0000a2e5) wait_border_pane_g

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

0xa2de,	// (0x0000a2de) popup_query_data_window_t_ParamLimits

0xa2de,	// (0x0000a2de) popup_query_data_window_t

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

0xa2d7,	// (0x0000a2d7) popup_query_code_window_t_ParamLimits

0xa2d7,	// (0x0000a2d7) popup_query_code_window_t

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

0xa03f,	// (0x0000a03f) popup_query_data_code_window_t_ParamLimits

0xa03f,	// (0x0000a03f) popup_query_data_code_window_t

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

0xa048,	// (0x0000a048) popup_info_list_pane_t_ParamLimits

0xa048,	// (0x0000a048) popup_info_list_pane_t

0x024e,	// (0x0000024e) bg_popup_window_pane_cp12

0x4df9,	// (0x00004df9) find_popup_pane

0x0474,	// (0x00000474) bg_popup_window_pane_cp3

0x09a3,	// (0x000009a3) heading_pane_cp3

0x09af,	// (0x000009af) listscroll_popup_graphic_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp4

0xaec0,	// (0x0000aec0) heading_pane_cp4

0x0a13,	// (0x00000a13) listscroll_popup_colour_pane

0x0a1b,	// (0x00000a1b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a1b,	// (0x00000a1b) cell_large_graphic_colour_none_popup_pane

0xaec8,	// (0x0000aec8) grid_large_graphic_colour_popup_pane_ParamLimits

0xaec8,	// (0x0000aec8) grid_large_graphic_colour_popup_pane

0xaee4,	// (0x0000aee4) listscroll_popup_colour_pane_g1_ParamLimits

0xaee4,	// (0x0000aee4) listscroll_popup_colour_pane_g1

0xaefb,	// (0x0000aefb) listscroll_popup_colour_pane_g2_ParamLimits

0xaefb,	// (0x0000aefb) listscroll_popup_colour_pane_g2

0x0a72,	// (0x00000a72) listscroll_popup_colour_pane_g3_ParamLimits

0x0a72,	// (0x00000a72) listscroll_popup_colour_pane_g3

0xaf0f,	// (0x0000af0f) listscroll_popup_colour_pane_g4_ParamLimits

0xaf0f,	// (0x0000af0f) listscroll_popup_colour_pane_g4

0x0003,

0xe742,	// (0x0000e742) listscroll_popup_colour_pane_g_ParamLimits

0xe742,	// (0x0000e742) listscroll_popup_colour_pane_g

0x0a91,	// (0x00000a91) scroll_pane_cp6_ParamLimits

0x0a91,	// (0x00000a91) scroll_pane_cp6

0xaf1e,	// (0x0000af1e) cell_large_graphic_colour_popup_pane_ParamLimits

0xaf1e,	// (0x0000af1e) cell_large_graphic_colour_popup_pane

0x0ac2,	// (0x00000ac2) cell_large_graphic_colour_none_popup_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp5

0x0ad1,	// (0x00000ad1) cell_large_graphic_colour_popup_pane_g1

0x0ad9,	// (0x00000ad9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa056,	// (0x0000a056) cell_large_graphic_colour_popup_pane_g

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

0xa05b,	// (0x0000a05b) popup_snote_single_text_window_t_ParamLimits

0xa05b,	// (0x0000a05b) popup_snote_single_text_window_t

0x0be1,	// (0x00000be1) bg_popup_window_pane_cp9_ParamLimits

0x0be1,	// (0x00000be1) bg_popup_window_pane_cp9

0x0b0d,	// (0x00000b0d) popup_snote_single_graphic_window_g1_ParamLimits

0x0b0d,	// (0x00000b0d) popup_snote_single_graphic_window_g1

0x0bef,	// (0x00000bef) popup_snote_single_graphic_window_g2_ParamLimits

0x0bef,	// (0x00000bef) popup_snote_single_graphic_window_g2

0x0001,

0xa066,	// (0x0000a066) popup_snote_single_graphic_window_g_ParamLimits

0xa066,	// (0x0000a066) popup_snote_single_graphic_window_g

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

0xa06b,	// (0x0000a06b) popup_snote_single_graphic_window_t_ParamLimits

0xa06b,	// (0x0000a06b) popup_snote_single_graphic_window_t

0xc917,	// (0x0000c917) grid_graphic_popup_pane_ParamLimits

0xc917,	// (0x0000c917) grid_graphic_popup_pane

0xc93a,	// (0x0000c93a) listscroll_popup_graphic_pane_g1_ParamLimits

0xc93a,	// (0x0000c93a) listscroll_popup_graphic_pane_g1

0xc94e,	// (0x0000c94e) listscroll_popup_graphic_pane_g2_ParamLimits

0xc94e,	// (0x0000c94e) listscroll_popup_graphic_pane_g2

0x0001,

0xe8ee,	// (0x0000e8ee) listscroll_popup_graphic_pane_g_ParamLimits

0xe8ee,	// (0x0000e8ee) listscroll_popup_graphic_pane_g

0x4cf9,	// (0x00004cf9) scroll_pane_cp5

0xc8d2,	// (0x0000c8d2) cell_graphic_popup_pane_ParamLimits

0xc8d2,	// (0x0000c8d2) cell_graphic_popup_pane

0x4c32,	// (0x00004c32) cell_graphic_popup_pane_g1

0x4c3a,	// (0x00004c3a) cell_graphic_popup_pane_g2

0x0ae1,	// (0x00000ae1) cell_graphic_popup_pane_g3

0x0002,

0xa44d,	// (0x0000a44d) cell_graphic_popup_pane_g

0x4c43,	// (0x00004c43) cell_graphic_popup_pane_t2

0x0aea,	// (0x00000aea) grid_highlight_pane_cp3

0x0c33,	// (0x00000c33) list_gen_pane_ParamLimits

0x0c33,	// (0x00000c33) list_gen_pane

0x0c64,	// (0x00000c64) scroll_pane

0xc8a5,	// (0x0000c8a5) bg_list_pane_g1_ParamLimits

0xc8a5,	// (0x0000c8a5) bg_list_pane_g1

0x4bc9,	// (0x00004bc9) bg_list_pane_g2_ParamLimits

0x4bc9,	// (0x00004bc9) bg_list_pane_g2

0x4bdc,	// (0x00004bdc) bg_list_pane_g3_ParamLimits

0x4bdc,	// (0x00004bdc) bg_list_pane_g3

0x4bee,	// (0x00004bee) bg_list_pane_g4_ParamLimits

0x4bee,	// (0x00004bee) bg_list_pane_g4

0xc8c0,	// (0x0000c8c0) bg_list_pane_g5_ParamLimits

0xc8c0,	// (0x0000c8c0) bg_list_pane_g5

0x0004,

0xe8e3,	// (0x0000e8e3) bg_list_pane_g_ParamLimits

0xe8e3,	// (0x0000e8e3) bg_list_pane_g

0xc835,	// (0x0000c835) list_double2_graphic_large_graphic_pane_ParamLimits

0xc835,	// (0x0000c835) list_double2_graphic_large_graphic_pane

0xc835,	// (0x0000c835) list_double2_graphic_pane_ParamLimits

0xc835,	// (0x0000c835) list_double2_graphic_pane

0xc835,	// (0x0000c835) list_double2_large_graphic_pane_ParamLimits

0xc835,	// (0x0000c835) list_double2_large_graphic_pane

0xc835,	// (0x0000c835) list_double2_pane_ParamLimits

0xc835,	// (0x0000c835) list_double2_pane

0xc835,	// (0x0000c835) list_double_graphic_heading_pane_ParamLimits

0xc835,	// (0x0000c835) list_double_graphic_heading_pane

0xc835,	// (0x0000c835) list_double_graphic_pane_ParamLimits

0xc835,	// (0x0000c835) list_double_graphic_pane

0xc835,	// (0x0000c835) list_double_heading_pane_ParamLimits

0xc835,	// (0x0000c835) list_double_heading_pane

0xc835,	// (0x0000c835) list_double_large_graphic_pane_ParamLimits

0xc835,	// (0x0000c835) list_double_large_graphic_pane

0xc835,	// (0x0000c835) list_double_number_pane_ParamLimits

0xc835,	// (0x0000c835) list_double_number_pane

0xc835,	// (0x0000c835) list_double_pane_ParamLimits

0xc835,	// (0x0000c835) list_double_pane

0xc835,	// (0x0000c835) list_double_time_pane_ParamLimits

0xc835,	// (0x0000c835) list_double_time_pane

0xc835,	// (0x0000c835) list_setting_number_pane_ParamLimits

0xc835,	// (0x0000c835) list_setting_number_pane

0xc835,	// (0x0000c835) list_setting_pane_ParamLimits

0xc835,	// (0x0000c835) list_setting_pane

0xc846,	// (0x0000c846) list_single_2graphic_pane_ParamLimits

0xc846,	// (0x0000c846) list_single_2graphic_pane

0xc846,	// (0x0000c846) list_single_graphic_heading_pane_ParamLimits

0xc846,	// (0x0000c846) list_single_graphic_heading_pane

0xc846,	// (0x0000c846) list_single_graphic_pane_ParamLimits

0xc846,	// (0x0000c846) list_single_graphic_pane

0xc846,	// (0x0000c846) list_single_heading_pane_ParamLimits

0xc846,	// (0x0000c846) list_single_heading_pane

0xc893,	// (0x0000c893) list_single_large_graphic_pane_ParamLimits

0xc893,	// (0x0000c893) list_single_large_graphic_pane

0xc846,	// (0x0000c846) list_single_number_heading_pane_ParamLimits

0xc846,	// (0x0000c846) list_single_number_heading_pane

0xc846,	// (0x0000c846) list_single_number_pane_ParamLimits

0xc846,	// (0x0000c846) list_single_number_pane

0xc846,	// (0x0000c846) list_single_pane_ParamLimits

0xc846,	// (0x0000c846) list_single_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp1

0x0ea6,	// (0x00000ea6) list_single_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_pane_g1

0x0dd1,	// (0x00000dd1) list_single_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_pane_g2

0x0001,

0xa116,	// (0x0000a116) list_single_pane_g_ParamLimits

0xa116,	// (0x0000a116) list_single_pane_g

0x0ddd,	// (0x00000ddd) list_single_pane_t1_ParamLimits

0x0ddd,	// (0x00000ddd) list_single_pane_t1

0x0ea6,	// (0x00000ea6) list_single_number_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_number_pane_g1

0x0dd1,	// (0x00000dd1) list_single_number_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_number_pane_g2

0x0001,

0xa116,	// (0x0000a116) list_single_number_pane_g_ParamLimits

0xa116,	// (0x0000a116) list_single_number_pane_g

0x0eb2,	// (0x00000eb2) list_single_number_pane_t1_ParamLimits

0x0eb2,	// (0x00000eb2) list_single_number_pane_t1

0xc699,	// (0x0000c699) list_single_number_pane_t2_ParamLimits

0xc699,	// (0x0000c699) list_single_number_pane_t2

0x0001,

0xe8a4,	// (0x0000e8a4) list_single_number_pane_t_ParamLimits

0xe8a4,	// (0x0000e8a4) list_single_number_pane_t

0x0e9a,	// (0x00000e9a) list_single_graphic_pane_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_single_graphic_pane_g1

0x0ea6,	// (0x00000ea6) list_single_graphic_pane_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_pane_g2

0x0dd1,	// (0x00000dd1) list_single_graphic_pane_g3_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_graphic_pane_g3

0x0002,

0xa0ca,	// (0x0000a0ca) list_single_graphic_pane_g_ParamLimits

0xa0ca,	// (0x0000a0ca) list_single_graphic_pane_g

0x0eb2,	// (0x00000eb2) list_single_graphic_pane_t1_ParamLimits

0x0eb2,	// (0x00000eb2) list_single_graphic_pane_t1

0x0ea6,	// (0x00000ea6) list_single_heading_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_heading_pane_g1

0x0dd1,	// (0x00000dd1) list_single_heading_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_heading_pane_g2

0x0001,

0xa116,	// (0x0000a116) list_single_heading_pane_g_ParamLimits

0xa116,	// (0x0000a116) list_single_heading_pane_g

0x0f6f,	// (0x00000f6f) list_single_heading_pane_t1_ParamLimits

0x0f6f,	// (0x00000f6f) list_single_heading_pane_t1

0xaf45,	// (0x0000af45) list_single_heading_pane_t2_ParamLimits

0xaf45,	// (0x0000af45) list_single_heading_pane_t2

0x0001,

0xe74b,	// (0x0000e74b) list_single_heading_pane_t_ParamLimits

0xe74b,	// (0x0000e74b) list_single_heading_pane_t

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_g1

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_g2

0x0001,

0xa116,	// (0x0000a116) list_single_number_heading_pane_g_ParamLimits

0xa116,	// (0x0000a116) list_single_number_heading_pane_g

0x0f6f,	// (0x00000f6f) list_single_number_heading_pane_t1_ParamLimits

0x0f6f,	// (0x00000f6f) list_single_number_heading_pane_t1

0xaf57,	// (0x0000af57) list_single_number_heading_pane_t2_ParamLimits

0xaf57,	// (0x0000af57) list_single_number_heading_pane_t2

0x5393,	// (0x00005393) list_single_number_heading_pane_t3_ParamLimits

0x5393,	// (0x00005393) list_single_number_heading_pane_t3

0x0002,

0xe750,	// (0x0000e750) list_single_number_heading_pane_t_ParamLimits

0xe750,	// (0x0000e750) list_single_number_heading_pane_t

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_g1

0xaf69,	// (0x0000af69) list_single_graphic_heading_pane_g4_ParamLimits

0xaf69,	// (0x0000af69) list_single_graphic_heading_pane_g4

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_g5_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_g5

0x0002,

0xe757,	// (0x0000e757) list_single_graphic_heading_pane_g_ParamLimits

0xe757,	// (0x0000e757) list_single_graphic_heading_pane_g

0x0f6f,	// (0x00000f6f) list_single_graphic_heading_pane_t1_ParamLimits

0x0f6f,	// (0x00000f6f) list_single_graphic_heading_pane_t1

0xaf7a,	// (0x0000af7a) list_single_graphic_heading_pane_t2_ParamLimits

0xaf7a,	// (0x0000af7a) list_single_graphic_heading_pane_t2

0x0001,

0xe75e,	// (0x0000e75e) list_single_graphic_heading_pane_t_ParamLimits

0xe75e,	// (0x0000e75e) list_single_graphic_heading_pane_t

0x0d40,	// (0x00000d40) list_single_large_graphic_pane_g1_ParamLimits

0x0d40,	// (0x00000d40) list_single_large_graphic_pane_g1

0x0d4c,	// (0x00000d4c) list_single_large_graphic_pane_g2_ParamLimits

0x0d4c,	// (0x00000d4c) list_single_large_graphic_pane_g2

0x0d58,	// (0x00000d58) list_single_large_graphic_pane_g3_ParamLimits

0x0d58,	// (0x00000d58) list_single_large_graphic_pane_g3

0x0002,

0xa09a,	// (0x0000a09a) list_single_large_graphic_pane_g_ParamLimits

0xa09a,	// (0x0000a09a) list_single_large_graphic_pane_g

0x39ce,	// (0x000039ce) wait_border_pane_g2_copy1

0x0d64,	// (0x00000d64) list_single_large_graphic_pane_g4_cp2

0x0d6c,	// (0x00000d6c) list_single_large_graphic_pane_t1_ParamLimits

0x0d6c,	// (0x00000d6c) list_single_large_graphic_pane_t1

0xaf8c,	// (0x0000af8c) list_double_pane_g1_ParamLimits

0xaf8c,	// (0x0000af8c) list_double_pane_g1

0xaf98,	// (0x0000af98) list_double_pane_g2_ParamLimits

0xaf98,	// (0x0000af98) list_double_pane_g2

0x0001,

0xe763,	// (0x0000e763) list_double_pane_g_ParamLimits

0xe763,	// (0x0000e763) list_double_pane_g

0xafa4,	// (0x0000afa4) list_double_pane_t1_ParamLimits

0xafa4,	// (0x0000afa4) list_double_pane_t1

0xafba,	// (0x0000afba) list_double_pane_t2_ParamLimits

0xafba,	// (0x0000afba) list_double_pane_t2

0x0001,

0xe768,	// (0x0000e768) list_double_pane_t_ParamLimits

0xe768,	// (0x0000e768) list_double_pane_t

0xafcc,	// (0x0000afcc) list_double2_pane_g1_ParamLimits

0xafcc,	// (0x0000afcc) list_double2_pane_g1

0xaf98,	// (0x0000af98) list_double2_pane_g2_ParamLimits

0xaf98,	// (0x0000af98) list_double2_pane_g2

0x0001,

0xe76d,	// (0x0000e76d) list_double2_pane_g_ParamLimits

0xe76d,	// (0x0000e76d) list_double2_pane_g

0xafa4,	// (0x0000afa4) list_double2_pane_t1_ParamLimits

0xafa4,	// (0x0000afa4) list_double2_pane_t1

0xafdd,	// (0x0000afdd) list_double2_pane_t2_ParamLimits

0xafdd,	// (0x0000afdd) list_double2_pane_t2

0x0001,

0xe772,	// (0x0000e772) list_double2_pane_t_ParamLimits

0xe772,	// (0x0000e772) list_double2_pane_t

0xaf8c,	// (0x0000af8c) list_double_number_pane_g1_ParamLimits

0xaf8c,	// (0x0000af8c) list_double_number_pane_g1

0xaf98,	// (0x0000af98) list_double_number_pane_g2_ParamLimits

0xaf98,	// (0x0000af98) list_double_number_pane_g2

0x0001,

0xe763,	// (0x0000e763) list_double_number_pane_g_ParamLimits

0xe763,	// (0x0000e763) list_double_number_pane_g

0xafef,	// (0x0000afef) list_double_number_pane_t1_ParamLimits

0xafef,	// (0x0000afef) list_double_number_pane_t1

0xb001,	// (0x0000b001) list_double_number_pane_t2_ParamLimits

0xb001,	// (0x0000b001) list_double_number_pane_t2

0xb017,	// (0x0000b017) list_double_number_pane_t3_ParamLimits

0xb017,	// (0x0000b017) list_double_number_pane_t3

0x0002,

0xe777,	// (0x0000e777) list_double_number_pane_t_ParamLimits

0xe777,	// (0x0000e777) list_double_number_pane_t

0xb029,	// (0x0000b029) list_double_graphic_pane_g1_ParamLimits

0xb029,	// (0x0000b029) list_double_graphic_pane_g1

0xb035,	// (0x0000b035) list_double_graphic_pane_g2_ParamLimits

0xb035,	// (0x0000b035) list_double_graphic_pane_g2

0xb044,	// (0x0000b044) list_double_graphic_pane_g3_ParamLimits

0xb044,	// (0x0000b044) list_double_graphic_pane_g3

0x0003,

0xe77e,	// (0x0000e77e) list_double_graphic_pane_g_ParamLimits

0xe77e,	// (0x0000e77e) list_double_graphic_pane_g

0xb05c,	// (0x0000b05c) list_double_graphic_pane_t1_ParamLimits

0xb05c,	// (0x0000b05c) list_double_graphic_pane_t1

0xb072,	// (0x0000b072) list_double_graphic_pane_t2_ParamLimits

0xb072,	// (0x0000b072) list_double_graphic_pane_t2

0x0001,

0xe787,	// (0x0000e787) list_double_graphic_pane_t_ParamLimits

0xe787,	// (0x0000e787) list_double_graphic_pane_t

0xb029,	// (0x0000b029) list_double2_graphic_pane_g1_ParamLimits

0xb029,	// (0x0000b029) list_double2_graphic_pane_g1

0xaf8c,	// (0x0000af8c) list_double2_graphic_pane_g2_ParamLimits

0xaf8c,	// (0x0000af8c) list_double2_graphic_pane_g2

0xaf98,	// (0x0000af98) list_double2_graphic_pane_g3_ParamLimits

0xaf98,	// (0x0000af98) list_double2_graphic_pane_g3

0x0002,

0xe78c,	// (0x0000e78c) list_double2_graphic_pane_g_ParamLimits

0xe78c,	// (0x0000e78c) list_double2_graphic_pane_g

0xb001,	// (0x0000b001) list_double2_graphic_pane_t1_ParamLimits

0xb001,	// (0x0000b001) list_double2_graphic_pane_t1

0xb084,	// (0x0000b084) list_double2_graphic_pane_t2_ParamLimits

0xb084,	// (0x0000b084) list_double2_graphic_pane_t2

0x0001,

0xe793,	// (0x0000e793) list_double2_graphic_pane_t_ParamLimits

0xe793,	// (0x0000e793) list_double2_graphic_pane_t

0xb096,	// (0x0000b096) list_double_large_graphic_pane_g1_ParamLimits

0xb096,	// (0x0000b096) list_double_large_graphic_pane_g1

0xafcc,	// (0x0000afcc) list_double_large_graphic_pane_g2_ParamLimits

0xafcc,	// (0x0000afcc) list_double_large_graphic_pane_g2

0xaf98,	// (0x0000af98) list_double_large_graphic_pane_g3_ParamLimits

0xaf98,	// (0x0000af98) list_double_large_graphic_pane_g3

0xb0bf,	// (0x0000b0bf) list_double_large_graphic_pane_g4_ParamLimits

0xb0bf,	// (0x0000b0bf) list_double_large_graphic_pane_g4

0x0004,

0xe798,	// (0x0000e798) list_double_large_graphic_pane_g_ParamLimits

0xe798,	// (0x0000e798) list_double_large_graphic_pane_g

0xb0d0,	// (0x0000b0d0) list_double_large_graphic_pane_t1_ParamLimits

0xb0d0,	// (0x0000b0d0) list_double_large_graphic_pane_t1

0xb0e9,	// (0x0000b0e9) list_double_large_graphic_pane_t2_ParamLimits

0xb0e9,	// (0x0000b0e9) list_double_large_graphic_pane_t2

0x0001,

0xe7a3,	// (0x0000e7a3) list_double_large_graphic_pane_t_ParamLimits

0xe7a3,	// (0x0000e7a3) list_double_large_graphic_pane_t

0xb0fb,	// (0x0000b0fb) list_double2_large_graphic_pane_g1_ParamLimits

0xb0fb,	// (0x0000b0fb) list_double2_large_graphic_pane_g1

0xafcc,	// (0x0000afcc) list_double2_large_graphic_pane_g2_ParamLimits

0xafcc,	// (0x0000afcc) list_double2_large_graphic_pane_g2

0xaf98,	// (0x0000af98) list_double2_large_graphic_pane_g3_ParamLimits

0xaf98,	// (0x0000af98) list_double2_large_graphic_pane_g3

0x0002,

0xe7a8,	// (0x0000e7a8) list_double2_large_graphic_pane_g_ParamLimits

0xe7a8,	// (0x0000e7a8) list_double2_large_graphic_pane_g

0xb107,	// (0x0000b107) list_double2_large_graphic_pane_t1_ParamLimits

0xb107,	// (0x0000b107) list_double2_large_graphic_pane_t1

0xb11d,	// (0x0000b11d) list_double2_large_graphic_pane_t2_ParamLimits

0xb11d,	// (0x0000b11d) list_double2_large_graphic_pane_t2

0x0001,

0xe7af,	// (0x0000e7af) list_double2_large_graphic_pane_t_ParamLimits

0xe7af,	// (0x0000e7af) list_double2_large_graphic_pane_t

0xb12f,	// (0x0000b12f) list_double_heading_pane_g1_ParamLimits

0xb12f,	// (0x0000b12f) list_double_heading_pane_g1

0x0cb1,	// (0x00000cb1) list_double_heading_pane_g2_ParamLimits

0x0cb1,	// (0x00000cb1) list_double_heading_pane_g2

0x0001,

0xe7b4,	// (0x0000e7b4) list_double_heading_pane_g_ParamLimits

0xe7b4,	// (0x0000e7b4) list_double_heading_pane_g

0xb140,	// (0x0000b140) list_double_heading_pane_t1_ParamLimits

0xb140,	// (0x0000b140) list_double_heading_pane_t1

0xb156,	// (0x0000b156) list_double_heading_pane_t2_ParamLimits

0xb156,	// (0x0000b156) list_double_heading_pane_t2

0x0001,

0xe7b9,	// (0x0000e7b9) list_double_heading_pane_t_ParamLimits

0xe7b9,	// (0x0000e7b9) list_double_heading_pane_t

0x0e3f,	// (0x00000e3f) list_double_graphic_heading_pane_g1_ParamLimits

0x0e3f,	// (0x00000e3f) list_double_graphic_heading_pane_g1

0xb12f,	// (0x0000b12f) list_double_graphic_heading_pane_g2_ParamLimits

0xb12f,	// (0x0000b12f) list_double_graphic_heading_pane_g2

0x0cb1,	// (0x00000cb1) list_double_graphic_heading_pane_g3_ParamLimits

0x0cb1,	// (0x00000cb1) list_double_graphic_heading_pane_g3

0x0002,

0xe7be,	// (0x0000e7be) list_double_graphic_heading_pane_g_ParamLimits

0xe7be,	// (0x0000e7be) list_double_graphic_heading_pane_g

0xb168,	// (0x0000b168) list_double_graphic_heading_pane_t1_ParamLimits

0xb168,	// (0x0000b168) list_double_graphic_heading_pane_t1

0xb17e,	// (0x0000b17e) list_double_graphic_heading_pane_t2_ParamLimits

0xb17e,	// (0x0000b17e) list_double_graphic_heading_pane_t2

0x0001,

0xe7c5,	// (0x0000e7c5) list_double_graphic_heading_pane_t_ParamLimits

0xe7c5,	// (0x0000e7c5) list_double_graphic_heading_pane_t

0xafcc,	// (0x0000afcc) list_double_time_pane_g1_ParamLimits

0xafcc,	// (0x0000afcc) list_double_time_pane_g1

0xaf98,	// (0x0000af98) list_double_time_pane_g2_ParamLimits

0xaf98,	// (0x0000af98) list_double_time_pane_g2

0x0001,

0xe76d,	// (0x0000e76d) list_double_time_pane_g_ParamLimits

0xe76d,	// (0x0000e76d) list_double_time_pane_g

0xb107,	// (0x0000b107) list_double_time_pane_t1_ParamLimits

0xb107,	// (0x0000b107) list_double_time_pane_t1

0xb190,	// (0x0000b190) list_double_time_pane_t2_ParamLimits

0xb190,	// (0x0000b190) list_double_time_pane_t2

0xb1a2,	// (0x0000b1a2) list_double_time_pane_t3_ParamLimits

0xb1a2,	// (0x0000b1a2) list_double_time_pane_t3

0xb1b4,	// (0x0000b1b4) list_double_time_pane_t4_ParamLimits

0xb1b4,	// (0x0000b1b4) list_double_time_pane_t4

0x0003,

0xe7ca,	// (0x0000e7ca) list_double_time_pane_t_ParamLimits

0xe7ca,	// (0x0000e7ca) list_double_time_pane_t

0xaf8c,	// (0x0000af8c) list_setting_pane_g1_ParamLimits

0xaf8c,	// (0x0000af8c) list_setting_pane_g1

0xaf98,	// (0x0000af98) list_setting_pane_g2_ParamLimits

0xaf98,	// (0x0000af98) list_setting_pane_g2

0x0001,

0xe763,	// (0x0000e763) list_setting_pane_g_ParamLimits

0xe763,	// (0x0000e763) list_setting_pane_g

0xb1c6,	// (0x0000b1c6) list_setting_pane_t1_ParamLimits

0xb1c6,	// (0x0000b1c6) list_setting_pane_t1

0xb1e0,	// (0x0000b1e0) list_setting_pane_t2_ParamLimits

0xb1e0,	// (0x0000b1e0) list_setting_pane_t2

0x0002,

0xe7d3,	// (0x0000e7d3) list_setting_pane_t_ParamLimits

0xe7d3,	// (0x0000e7d3) list_setting_pane_t

0xb21d,	// (0x0000b21d) set_value_pane_cp_ParamLimits

0xb21d,	// (0x0000b21d) set_value_pane_cp

0xaf8c,	// (0x0000af8c) list_setting_number_pane_g1_ParamLimits

0xaf8c,	// (0x0000af8c) list_setting_number_pane_g1

0xaf98,	// (0x0000af98) list_setting_number_pane_g2_ParamLimits

0xaf98,	// (0x0000af98) list_setting_number_pane_g2

0x0001,

0xe763,	// (0x0000e763) list_setting_number_pane_g_ParamLimits

0xe763,	// (0x0000e763) list_setting_number_pane_g

0xb229,	// (0x0000b229) list_setting_number_pane_t1_ParamLimits

0xb229,	// (0x0000b229) list_setting_number_pane_t1

0xb242,	// (0x0000b242) list_setting_number_pane_t2_ParamLimits

0xb242,	// (0x0000b242) list_setting_number_pane_t2

0xb25c,	// (0x0000b25c) list_setting_number_pane_t3_ParamLimits

0xb25c,	// (0x0000b25c) list_setting_number_pane_t3

0x0003,

0xe7da,	// (0x0000e7da) list_setting_number_pane_t_ParamLimits

0xe7da,	// (0x0000e7da) list_setting_number_pane_t

0xb21d,	// (0x0000b21d) set_value_pane_ParamLimits

0xb21d,	// (0x0000b21d) set_value_pane

0x10f4,	// (0x000010f4) bg_set_opt_pane_ParamLimits

0x10f4,	// (0x000010f4) bg_set_opt_pane

0x1115,	// (0x00001115) set_value_pane_t1

0x1123,	// (0x00001123) slider_set_pane_cp3

0x112c,	// (0x0000112c) volume_small_pane_cp

0x1135,	// (0x00001135) list_form_gen_pane

0x0c88,	// (0x00000c88) scroll_pane_cp8

0x576a,	// (0x0000576a) form_field_data_pane_ParamLimits

0x576a,	// (0x0000576a) form_field_data_pane

0xb29f,	// (0x0000b29f) form_field_data_wide_pane_ParamLimits

0xb29f,	// (0x0000b29f) form_field_data_wide_pane

0xb2bf,	// (0x0000b2bf) form_field_popup_pane_ParamLimits

0xb2bf,	// (0x0000b2bf) form_field_popup_pane

0xb2d7,	// (0x0000b2d7) form_field_popup_wide_pane_ParamLimits

0xb2d7,	// (0x0000b2d7) form_field_popup_wide_pane

0x11bc,	// (0x000011bc) form_field_slider_pane_ParamLimits

0x11bc,	// (0x000011bc) form_field_slider_pane

0x11cf,	// (0x000011cf) form_field_slider_wide_pane_ParamLimits

0x11cf,	// (0x000011cf) form_field_slider_wide_pane

0x11e2,	// (0x000011e2) data_form_pane

0xb2f8,	// (0x0000b2f8) form_field_data_pane_t1

0x120e,	// (0x0000120e) input_focus_pane

0x121c,	// (0x0000121c) data_form_wide_pane

0x1248,	// (0x00001248) form_field_data_wide_pane_t1

0x0aff,	// (0x00000aff) input_focus_pane_cp6

0xb310,	// (0x0000b310) form_field_popup_pane_t1

0x120e,	// (0x0000120e) input_focus_pane_cp7

0x11e2,	// (0x000011e2) list_form_pane

0x1287,	// (0x00001287) form_field_popup_wide_pane_t1

0x120e,	// (0x0000120e) input_focus_pane_cp8

0x129c,	// (0x0000129c) list_form_wide_pane

0xb330,	// (0x0000b330) form_field_slider_pane_t1_ParamLimits

0xb330,	// (0x0000b330) form_field_slider_pane_t1

0xb346,	// (0x0000b346) form_field_slider_pane_t2_ParamLimits

0xb346,	// (0x0000b346) form_field_slider_pane_t2

0x0001,

0xe7e3,	// (0x0000e7e3) form_field_slider_pane_t_ParamLimits

0xe7e3,	// (0x0000e7e3) form_field_slider_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp9_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9

0xb35b,	// (0x0000b35b) slider_cont_pane_ParamLimits

0xb35b,	// (0x0000b35b) slider_cont_pane

0x12ef,	// (0x000012ef) form_field_slider_wide_pane_t1_ParamLimits

0x12ef,	// (0x000012ef) form_field_slider_wide_pane_t1

0x1301,	// (0x00001301) form_field_slider_wide_pane_t2_ParamLimits

0x1301,	// (0x00001301) form_field_slider_wide_pane_t2

0x0001,

0xa137,	// (0x0000a137) form_field_slider_wide_pane_t_ParamLimits

0xa137,	// (0x0000a137) form_field_slider_wide_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp10_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10

0xb36f,	// (0x0000b36f) slider_cont_pane_cp1_ParamLimits

0xb36f,	// (0x0000b36f) slider_cont_pane_cp1

0xb385,	// (0x0000b385) slider_form_pane_cp

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

0xa13c,	// (0x0000a13c) input_focus_pane_g

0x39d7,	// (0x000039d7) wait_border_pane_g3_copy1

0xb38d,	// (0x0000b38d) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xc81c,	// (0x0000c81c) data_form_wide_pane_t1

0x514d,	// (0x0000514d) list_form_graphic_pane_cp_ParamLimits

0x514d,	// (0x0000514d) list_form_graphic_pane_cp

0x4a5f,	// (0x00004a5f) slider_form_pane_g1

0x4a68,	// (0x00004a68) slider_form_pane_g2

0x0006,

0xe8d4,	// (0x0000e8d4) slider_form_pane_g

0x1393,	// (0x00001393) list_form_graphic_pane_ParamLimits

0x1393,	// (0x00001393) list_form_graphic_pane

0x13be,	// (0x000013be) list_form_graphic_pane_g1

0x13c6,	// (0x000013c6) list_form_graphic_pane_t1_ParamLimits

0x13c6,	// (0x000013c6) list_form_graphic_pane_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5

0xb3a6,	// (0x0000b3a6) find_pane_g1

0x13e4,	// (0x000013e4) input_find_pane

0xb3b1,	// (0x0000b3b1) input_find_pane_g1_ParamLimits

0xb3b1,	// (0x0000b3b1) input_find_pane_g1

0xb3bd,	// (0x0000b3bd) input_find_pane_t1_ParamLimits

0xb3bd,	// (0x0000b3bd) input_find_pane_t1

0xb3d2,	// (0x0000b3d2) input_find_pane_t2_ParamLimits

0xb3d2,	// (0x0000b3d2) input_find_pane_t2

0x0001,

0xe7e8,	// (0x0000e7e8) input_find_pane_t_ParamLimits

0xe7e8,	// (0x0000e7e8) input_find_pane_t

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

0xb3f3,	// (0x0000b3f3) tabs_2_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1

0x4d9a,	// (0x00004d9a) tabs_2_passive_pane_g1

0xb3f3,	// (0x0000b3f3) tabs_2_passive_pane_t1

0x0474,	// (0x00000474) bg_active_tab_pane_cp4

0xb409,	// (0x0000b409) tabs_2_long_active_pane_t1

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp4

0x32d4,	// (0x000032d4) list_single_midp_graphic_pane_g4_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5

0xb420,	// (0x0000b420) tabs_3_long_active_pane_t1

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

0xa156,	// (0x0000a156) query_popup_data_pane_t_ParamLimits

0xa156,	// (0x0000a156) query_popup_data_pane_t

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

0xa161,	// (0x0000a161) bg_set_opt_pane_g

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

0xa174,	// (0x0000a174) signal_pane_stacon_g_ParamLimits

0xa174,	// (0x0000a174) signal_pane_stacon_g

0x1725,	// (0x00001725) title_pane_stacon_t1_ParamLimits

0x1725,	// (0x00001725) title_pane_stacon_t1

0x174a,	// (0x0000174a) uni_indicator_pane_stacon_g1

0x1754,	// (0x00001754) uni_indicator_pane_stacon_g2

0x175e,	// (0x0000175e) uni_indicator_pane_stacon_g3

0x1768,	// (0x00001768) uni_indicator_pane_stacon_g4

0x0003,

0xa180,	// (0x0000a180) uni_indicator_pane_stacon_g

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

0xa189,	// (0x0000a189) battery_pane_stacon_g_ParamLimits

0xa189,	// (0x0000a189) battery_pane_stacon_g

0x17f4,	// (0x000017f4) navi_icon_pane_stacon

0x1804,	// (0x00001804) navi_navi_pane_stacon

0x17f4,	// (0x000017f4) navi_text_pane_stacon

0x1772,	// (0x00001772) control_bottom_pane_stacon_g1

0x1814,	// (0x00001814) control_bottom_pane_stacon_t1_ParamLimits

0x1814,	// (0x00001814) control_bottom_pane_stacon_t1

0xb436,	// (0x0000b436) grid_app_pane_ParamLimits

0xb436,	// (0x0000b436) grid_app_pane

0xb464,	// (0x0000b464) scroll_pane_cp15_ParamLimits

0xb464,	// (0x0000b464) scroll_pane_cp15

0xb477,	// (0x0000b477) cell_app_pane_ParamLimits

0xb477,	// (0x0000b477) cell_app_pane

0xb4b4,	// (0x0000b4b4) cell_app_pane_g1_ParamLimits

0xb4b4,	// (0x0000b4b4) cell_app_pane_g1

0x18d4,	// (0x000018d4) cell_app_pane_g2_ParamLimits

0x18d4,	// (0x000018d4) cell_app_pane_g2

0x0001,

0xe7ed,	// (0x0000e7ed) cell_app_pane_g_ParamLimits

0xe7ed,	// (0x0000e7ed) cell_app_pane_g

0xb4d8,	// (0x0000b4d8) cell_app_pane_t1_ParamLimits

0xb4d8,	// (0x0000b4d8) cell_app_pane_t1

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

0xa13c,	// (0x0000a13c) cell_highlight_pane_g

0x191b,	// (0x0000191b) bg_scroll_pane

0x193a,	// (0x0000193a) scroll_handle_pane

0x198b,	// (0x0000198b) scroll_bg_pane_g1

0x19a0,	// (0x000019a0) scroll_bg_pane_g2

0x19b8,	// (0x000019b8) scroll_bg_pane_g3

0x0002,

0xa193,	// (0x0000a193) scroll_bg_pane_g

0x19cd,	// (0x000019cd) scroll_handle_focus_pane_ParamLimits

0x19cd,	// (0x000019cd) scroll_handle_focus_pane

0x198b,	// (0x0000198b) scroll_handle_pane_g1

0x19da,	// (0x000019da) scroll_handle_pane_g2

0x19b8,	// (0x000019b8) scroll_handle_pane_g3

0x0002,

0xa19a,	// (0x0000a19a) scroll_handle_pane_g

0x1423,	// (0x00001423) bg_popup_sub_pane_cp21_ParamLimits

0x1423,	// (0x00001423) bg_popup_sub_pane_cp21

0x19ee,	// (0x000019ee) popup_fep_japan_predictive_window_t1_ParamLimits

0x19ee,	// (0x000019ee) popup_fep_japan_predictive_window_t1

0x1a05,	// (0x00001a05) popup_fep_japan_predictive_window_t2_ParamLimits

0x1a05,	// (0x00001a05) popup_fep_japan_predictive_window_t2

0x1a38,	// (0x00001a38) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a38,	// (0x00001a38) popup_fep_japan_predictive_window_t3

0x0002,

0xa1a1,	// (0x0000a1a1) popup_fep_japan_predictive_window_t_ParamLimits

0xa1a1,	// (0x0000a1a1) popup_fep_japan_predictive_window_t

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

0xb4f8,	// (0x0000b4f8) level_1_signal

0xb50a,	// (0x0000b50a) level_2_signal

0xb51d,	// (0x0000b51d) level_3_signal

0xb530,	// (0x0000b530) level_4_signal

0xb543,	// (0x0000b543) level_5_signal

0xb556,	// (0x0000b556) level_6_signal

0xb569,	// (0x0000b569) level_7_signal

0xb4f8,	// (0x0000b4f8) level_1_battery

0xb50a,	// (0x0000b50a) level_2_battery

0xb51d,	// (0x0000b51d) level_3_battery

0xb530,	// (0x0000b530) level_4_battery

0xb543,	// (0x0000b543) level_5_battery

0xb556,	// (0x0000b556) level_6_battery

0xb569,	// (0x0000b569) level_7_battery

0x1b56,	// (0x00001b56) list_menu_pane_ParamLimits

0x1b56,	// (0x00001b56) list_menu_pane

0x1b6c,	// (0x00001b6c) scroll_pane_cp25_ParamLimits

0x1b6c,	// (0x00001b6c) scroll_pane_cp25

0xb57c,	// (0x0000b57c) list_double2_graphic_pane_cp2_ParamLimits

0xb57c,	// (0x0000b57c) list_double2_graphic_pane_cp2

0xb57c,	// (0x0000b57c) list_double2_large_graphic_pane_cp2_ParamLimits

0xb57c,	// (0x0000b57c) list_double2_large_graphic_pane_cp2

0xb57c,	// (0x0000b57c) list_double2_pane_cp2_ParamLimits

0xb57c,	// (0x0000b57c) list_double2_pane_cp2

0xb57c,	// (0x0000b57c) list_double_graphic_pane_cp2_ParamLimits

0xb57c,	// (0x0000b57c) list_double_graphic_pane_cp2

0xb57c,	// (0x0000b57c) list_double_large_graphic_pane_cp2_ParamLimits

0xb57c,	// (0x0000b57c) list_double_large_graphic_pane_cp2

0xb57c,	// (0x0000b57c) list_double_number_pane_cp2_ParamLimits

0xb57c,	// (0x0000b57c) list_double_number_pane_cp2

0xb57c,	// (0x0000b57c) list_double_pane_cp2_ParamLimits

0xb57c,	// (0x0000b57c) list_double_pane_cp2

0xb597,	// (0x0000b597) list_single_2graphic_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_2graphic_pane_cp2

0xb597,	// (0x0000b597) list_single_graphic_heading_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_graphic_heading_pane_cp2

0xb597,	// (0x0000b597) list_single_graphic_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_graphic_pane_cp2

0xb597,	// (0x0000b597) list_single_heading_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_heading_pane_cp2

0xb5a8,	// (0x0000b5a8) list_single_large_graphic_pane_cp2_ParamLimits

0xb5a8,	// (0x0000b5a8) list_single_large_graphic_pane_cp2

0xb597,	// (0x0000b597) list_single_number_heading_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_number_heading_pane_cp2

0xb597,	// (0x0000b597) list_single_number_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_number_pane_cp2

0xb597,	// (0x0000b597) list_single_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_pane_cp2

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

0xa1d2,	// (0x0000a1d2) fep_china_uni_entry_pane_g

0x1d3b,	// (0x00001d3b) fep_entry_item_pane

0x1d45,	// (0x00001d45) fep_candidate_item_pane

0x1d4d,	// (0x00001d4d) fep_china_uni_candidate_pane_g1

0x1d55,	// (0x00001d55) fep_china_uni_candidate_pane_g2

0x1d5d,	// (0x00001d5d) fep_china_uni_candidate_pane_g3

0x1d65,	// (0x00001d65) fep_china_uni_candidate_pane_g4

0x0003,

0xa1d7,	// (0x0000a1d7) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1d6d,	// (0x00001d6d) fep_entry_item_pane_t1_ParamLimits

0x1d6d,	// (0x00001d6d) fep_entry_item_pane_t1

0x1d83,	// (0x00001d83) fep_candidate_item_pane_t1_ParamLimits

0x1d83,	// (0x00001d83) fep_candidate_item_pane_t1

0x1d98,	// (0x00001d98) fep_candidate_item_pane_t2_ParamLimits

0x1d98,	// (0x00001d98) fep_candidate_item_pane_t2

0x0001,

0xa1e0,	// (0x0000a1e0) fep_candidate_item_pane_t_ParamLimits

0xa1e0,	// (0x0000a1e0) fep_candidate_item_pane_t

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

0xa1e5,	// (0x0000a1e5) scroll_handle_focus_pane_g

0xb62d,	// (0x0000b62d) list_single_2graphic_pane_g1_ParamLimits

0xb62d,	// (0x0000b62d) list_single_2graphic_pane_g1

0xaf69,	// (0x0000af69) list_single_2graphic_pane_g2_ParamLimits

0xaf69,	// (0x0000af69) list_single_2graphic_pane_g2

0x0dd1,	// (0x00000dd1) list_single_2graphic_pane_g3_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_2graphic_pane_g3

0xb639,	// (0x0000b639) list_single_2graphic_pane_g4_ParamLimits

0xb639,	// (0x0000b639) list_single_2graphic_pane_g4

0x0003,

0xe7fb,	// (0x0000e7fb) list_single_2graphic_pane_g_ParamLimits

0xe7fb,	// (0x0000e7fb) list_single_2graphic_pane_g

0xb645,	// (0x0000b645) list_single_2graphic_pane_t1_ParamLimits

0xb645,	// (0x0000b645) list_single_2graphic_pane_t1

0xb673,	// (0x0000b673) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb673,	// (0x0000b673) list_double2_graphic_large_graphic_pane_g1

0xafcc,	// (0x0000afcc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xafcc,	// (0x0000afcc) list_double2_graphic_large_graphic_pane_g2

0xaf98,	// (0x0000af98) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xaf98,	// (0x0000af98) list_double2_graphic_large_graphic_pane_g3

0xb683,	// (0x0000b683) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb683,	// (0x0000b683) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xe804,	// (0x0000e804) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xe804,	// (0x0000e804) list_double2_graphic_large_graphic_pane_g

0xb68f,	// (0x0000b68f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb68f,	// (0x0000b68f) list_double2_graphic_large_graphic_pane_t1

0xb6a5,	// (0x0000b6a5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb6a5,	// (0x0000b6a5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xe80d,	// (0x0000e80d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xe80d,	// (0x0000e80d) list_double2_graphic_large_graphic_pane_t

0x2102,	// (0x00002102) popup_fast_swap_window_ParamLimits

0x2102,	// (0x00002102) popup_fast_swap_window

0x211e,	// (0x0000211e) popup_side_volume_key_window

0x2138,	// (0x00002138) stacon_top_pane

0x2142,	// (0x00002142) status_pane_ParamLimits

0x2142,	// (0x00002142) status_pane

0xb701,	// (0x0000b701) status_small_pane

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

0xb6b7,	// (0x0000b6b7) bg_active_tab_pane_g1_cp2

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp2

0xb6c0,	// (0x0000b6c0) bg_active_tab_pane_g3_cp2

0xb6b7,	// (0x0000b6b7) bg_passive_tab_pane_g1_cp2

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp2

0xb6c0,	// (0x0000b6c0) bg_passive_tab_pane_g3_cp2

0xb6c9,	// (0x0000b6c9) bg_active_tab_pane_g1_cp3

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp3

0xb6d2,	// (0x0000b6d2) bg_active_tab_pane_g3_cp3

0xb6c9,	// (0x0000b6c9) bg_passive_tab_pane_g1_cp3

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp3

0xb6d2,	// (0x0000b6d2) bg_passive_tab_pane_g3_cp3

0xb6db,	// (0x0000b6db) bg_active_tab_pane_g1_cp4

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp4

0xb6e4,	// (0x0000b6e4) bg_active_tab_pane_g3_cp4

0xb6db,	// (0x0000b6db) bg_passive_tab_pane_g1_cp4

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp4

0xb6e4,	// (0x0000b6e4) bg_passive_tab_pane_g3_cp4

0x2077,	// (0x00002077) bg_active_tab_pane_g1_cp5

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp5

0x2080,	// (0x00002080) bg_active_tab_pane_g3_cp5

0x2077,	// (0x00002077) bg_passive_tab_pane_g1_cp5

0x1ec4,	// (0x00001ec4) bg_passive_tab_pane_g2_cp5

0x2080,	// (0x00002080) bg_passive_tab_pane_g3_cp5

0xb6ed,	// (0x0000b6ed) list_set_graphic_pane_ParamLimits

0xb6ed,	// (0x0000b6ed) list_set_graphic_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4

0x2089,	// (0x00002089) list_set_graphic_pane_g1_ParamLimits

0x2089,	// (0x00002089) list_set_graphic_pane_g1

0x2095,	// (0x00002095) list_set_graphic_pane_g2_ParamLimits

0x2095,	// (0x00002095) list_set_graphic_pane_g2

0x0001,

0xa203,	// (0x0000a203) list_set_graphic_pane_g_ParamLimits

0xa203,	// (0x0000a203) list_set_graphic_pane_g

0x0009,

0xa575,	// (0x0000a575) volume_small_pane_cp_g

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

0xc3da,	// (0x0000c3da) form_field_slider_pane_t3

0xc3e8,	// (0x0000c3e8) form_field_slider_pane_t4

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

0xa393,	// (0x0000a393) bg_popup_preview_window_pane_g

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

0xac5c,	// (0x0000ac5c) tabs_4_active_pane_srt_t1_ParamLimits

0xac5c,	// (0x0000ac5c) tabs_4_active_pane_srt_t1

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

0xb409,	// (0x0000b409) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb409,	// (0x0000b409) tabs_2_long_active_pane_srt_t1

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

0xb420,	// (0x0000b420) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb420,	// (0x0000b420) tabs_3_long_active_pane_srt_t1

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

0xa222,	// (0x0000a222) midp_ticker_pane_srt_g

0x25a8,	// (0x000025a8) midp_ticker_pane_srt_t1

0x4839,	// (0x00004839) midp_editing_number_pane_t1_copy1

0xb70a,	// (0x0000b70a) listscroll_midp_pane

0xb70a,	// (0x0000b70a) midp_form_pane

0x239f,	// (0x0000239f) midp_info_popup_window_ParamLimits

0x239f,	// (0x0000239f) midp_info_popup_window

0x1423,	// (0x00001423) bg_popup_sub_pane_cp50_ParamLimits

0x1423,	// (0x00001423) bg_popup_sub_pane_cp50

0x3815,	// (0x00003815) listscroll_midp_info_pane_ParamLimits

0x3815,	// (0x00003815) listscroll_midp_info_pane

0x37fd,	// (0x000037fd) listscroll_form_midp_pane_ParamLimits

0x37fd,	// (0x000037fd) listscroll_form_midp_pane

0x3809,	// (0x00003809) scroll_bar_cp050

0xc3ce,	// (0x0000c3ce) list_midp_pane

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

0xa2ce,	// (0x0000a2ce) listscroll_midp_info_pane_t_ParamLimits

0xa2ce,	// (0x0000a2ce) listscroll_midp_info_pane_t

0x14d2,	// (0x000014d2) scroll_pane_cp21

0x36bb,	// (0x000036bb) form_midp_field_choice_group_pane

0x36c4,	// (0x000036c4) form_midp_field_text_pane

0x36fd,	// (0x000036fd) form_midp_field_time_pane

0x3705,	// (0x00003705) form_midp_gauge_slider_pane

0x370e,	// (0x0000370e) form_midp_gauge_wait_pane

0x024e,	// (0x0000024e) form_midp_image_pane

0xc3b8,	// (0x0000c3b8) list_single_midp_pane_ParamLimits

0xc3b8,	// (0x0000c3b8) list_single_midp_pane

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

0xa2c9,	// (0x0000a2c9) form_midp_field_time_pane_t

0x024e,	// (0x0000024e) input_focus_pane_cp052

0x024e,	// (0x0000024e) bg_input_focus_pane_cp040

0x35e7,	// (0x000035e7) form_midp_gauge_slider_pane_t1

0x35f5,	// (0x000035f5) form_midp_gauge_slider_pane_t2

0xc39c,	// (0x0000c39c) form_midp_gauge_slider_pane_t3

0xc3aa,	// (0x0000c3aa) form_midp_gauge_slider_pane_t4

0x0003,

0xe85f,	// (0x0000e85f) form_midp_gauge_slider_pane_t

0x361f,	// (0x0000361f) form_midp_slider_pane

0x0474,	// (0x00000474) bg_input_focus_pane_cp041_ParamLimits

0x0474,	// (0x00000474) bg_input_focus_pane_cp041

0x35b7,	// (0x000035b7) form_midp_gauge_wait_pane_t1_ParamLimits

0x35b7,	// (0x000035b7) form_midp_gauge_wait_pane_t1

0x35c9,	// (0x000035c9) form_midp_gauge_wait_pane_t2_ParamLimits

0x35c9,	// (0x000035c9) form_midp_gauge_wait_pane_t2

0x0001,

0xa2bb,	// (0x0000a2bb) form_midp_gauge_wait_pane_t_ParamLimits

0xa2bb,	// (0x0000a2bb) form_midp_gauge_wait_pane_t

0x35db,	// (0x000035db) form_midp_wait_pane_ParamLimits

0x35db,	// (0x000035db) form_midp_wait_pane

0x3581,	// (0x00003581) form_midp_image_pane_g1

0x358a,	// (0x0000358a) form_midp_image_pane_t1

0x3599,	// (0x00003599) form_midp_image_pane_t2

0x35a8,	// (0x000035a8) form_midp_image_pane_t3

0x0002,

0xa2b4,	// (0x0000a2b4) form_midp_image_pane_t

0x3569,	// (0x00003569) list_single_midp_pane_g1

0x3572,	// (0x00003572) list_single_midp_pane_t1

0x3555,	// (0x00003555) list_midp_form_item_pane_ParamLimits

0x3555,	// (0x00003555) list_midp_form_item_pane

0x23f1,	// (0x000023f1) list_midp_form_item_pane_t1

0x2400,	// (0x00002400) midp_ticker_pane_g1

0x240c,	// (0x0000240c) midp_ticker_pane_g2

0x0001,

0xa208,	// (0x0000a208) midp_ticker_pane_g

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

0xa3f5,	// (0x0000a3f5) ai_message_heading_pane_g_ParamLimits

0xa3f5,	// (0x0000a3f5) ai_message_heading_pane_g

0x47d1,	// (0x000047d1) ai_message_heading_pane_t1_ParamLimits

0x47d1,	// (0x000047d1) ai_message_heading_pane_t1

0x47eb,	// (0x000047eb) ai_message_heading_pane_t2_ParamLimits

0x47eb,	// (0x000047eb) ai_message_heading_pane_t2

0x0001,

0xa3fe,	// (0x0000a3fe) ai_message_heading_pane_t_ParamLimits

0xa3fe,	// (0x0000a3fe) ai_message_heading_pane_t

0x47fd,	// (0x000047fd) bg_popup_heading_pane_cp1_ParamLimits

0x47fd,	// (0x000047fd) bg_popup_heading_pane_cp1

0x478f,	// (0x0000478f) list_ai_message_pane_ParamLimits

0x478f,	// (0x0000478f) list_ai_message_pane

0x14d2,	// (0x000014d2) scroll_pane_cp10

0x46db,	// (0x000046db) list_ai_message_pane_g1

0x46e3,	// (0x000046e3) list_ai_message_pane_g2

0x0001,

0xa3d2,	// (0x0000a3d2) list_ai_message_pane_g

0x46eb,	// (0x000046eb) list_ai_message_pane_t1_ParamLimits

0x46eb,	// (0x000046eb) list_ai_message_pane_t1

0x4700,	// (0x00004700) list_ai_message_pane_t2_ParamLimits

0x4700,	// (0x00004700) list_ai_message_pane_t2

0x4715,	// (0x00004715) list_ai_message_pane_t3_ParamLimits

0x4715,	// (0x00004715) list_ai_message_pane_t3

0x472a,	// (0x0000472a) list_ai_message_pane_t4_ParamLimits

0x472a,	// (0x0000472a) list_ai_message_pane_t4

0x0003,

0xa3d7,	// (0x0000a3d7) list_ai_message_pane_t_ParamLimits

0xa3d7,	// (0x0000a3d7) list_ai_message_pane_t

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

0xbcc2,	// (0x0000bcc2) popup_preview_text_window_ParamLimits

0xbcc2,	// (0x0000bcc2) popup_preview_text_window

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

0xa3a6,	// (0x0000a3a6) popup_preview_text_window_t_ParamLimits

0xa3a6,	// (0x0000a3a6) popup_preview_text_window_t

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

0xbc44,	// (0x0000bc44) popup_midp_note_alarm_window_ParamLimits

0xbc44,	// (0x0000bc44) popup_midp_note_alarm_window

0x11e2,	// (0x000011e2) data_form_pane_ParamLimits

0xb2ee,	// (0x0000b2ee) form_field_data_pane_g1

0xb2f8,	// (0x0000b2f8) form_field_data_pane_t1_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_ParamLimits

0x121c,	// (0x0000121c) data_form_wide_pane_ParamLimits

0x1228,	// (0x00001228) form_field_data_wide_pane_g1

0x1248,	// (0x00001248) form_field_data_wide_pane_t1_ParamLimits

0x0aff,	// (0x00000aff) input_focus_pane_cp6_ParamLimits

0xb3e7,	// (0x0000b3e7) input_popup_find_pane_g1_ParamLimits

0xb3e7,	// (0x0000b3e7) input_popup_find_pane_g1

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

0xa343,	// (0x0000a343) popup_midp_note_alarm_window_t_ParamLimits

0xa343,	// (0x0000a343) popup_midp_note_alarm_window_t

0x3fa0,	// (0x00003fa0) wait_bar_pane_cp1_ParamLimits

0x3fa0,	// (0x00003fa0) wait_bar_pane_cp1

0x024e,	// (0x0000024e) wait_anim_pane_copy1

0x024e,	// (0x0000024e) wait_border_pane_copy1

0x39c5,	// (0x000039c5) wait_border_pane_g1_copy1

0x125f,	// (0x0000125f) form_field_popup_pane_g1

0xb310,	// (0x0000b310) form_field_popup_pane_t1_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_cp7_ParamLimits

0x11e2,	// (0x000011e2) list_form_pane_ParamLimits

0x127f,	// (0x0000127f) form_field_popup_wide_pane_g1

0x1287,	// (0x00001287) form_field_popup_wide_pane_t1_ParamLimits

0x120e,	// (0x0000120e) input_focus_pane_cp8_ParamLimits

0x129c,	// (0x0000129c) list_form_wide_pane_ParamLimits

0x4c98,	// (0x00004c98) aid_size_cell_graphic_pane

0xb38d,	// (0x0000b38d) data_form_pane_t1_ParamLimits

0xc81c,	// (0x0000c81c) data_form_wide_pane_t1_ParamLimits

0xc020,	// (0x0000c020) bg_status_flat_pane

0xabb9,	// (0x0000abb9) title_pane_t1_ParamLimits

0x043c,	// (0x0000043c) title_pane_t2_ParamLimits

0x0462,	// (0x00000462) title_pane_t3_ParamLimits

0xe724,	// (0x0000e724) title_pane_t_ParamLimits

0xb4f8,	// (0x0000b4f8) level_1_signal_ParamLimits

0xb50a,	// (0x0000b50a) level_2_signal_ParamLimits

0xb51d,	// (0x0000b51d) level_3_signal_ParamLimits

0xb530,	// (0x0000b530) level_4_signal_ParamLimits

0xb543,	// (0x0000b543) level_5_signal_ParamLimits

0xb556,	// (0x0000b556) level_6_signal_ParamLimits

0xb569,	// (0x0000b569) level_7_signal_ParamLimits

0xb4f8,	// (0x0000b4f8) level_1_battery_ParamLimits

0xb50a,	// (0x0000b50a) level_2_battery_ParamLimits

0xb51d,	// (0x0000b51d) level_3_battery_ParamLimits

0xb530,	// (0x0000b530) level_4_battery_ParamLimits

0xb543,	// (0x0000b543) level_5_battery_ParamLimits

0xb556,	// (0x0000b556) level_6_battery_ParamLimits

0xb569,	// (0x0000b569) level_7_battery_ParamLimits

0x3bca,	// (0x00003bca) bg_status_flat_pane_g1

0x3bd2,	// (0x00003bd2) bg_status_flat_pane_g2

0x3bda,	// (0x00003bda) bg_status_flat_pane_g3

0x3be2,	// (0x00003be2) bg_status_flat_pane_g4

0x3bea,	// (0x00003bea) bg_status_flat_pane_g5

0x3bf2,	// (0x00003bf2) bg_status_flat_pane_g6

0x3bfa,	// (0x00003bfa) bg_status_flat_pane_g7

0xac46,	// (0x0000ac46) tabs_3_active_pane_t1_ParamLimits

0xac46,	// (0x0000ac46) tabs_3_passive_pane_t1_ParamLimits

0xac5c,	// (0x0000ac5c) tabs_4_active_pane_t1_ParamLimits

0xac5c,	// (0x0000ac5c) tabs_4_1_passive_pane_t1_ParamLimits

0xb3f3,	// (0x0000b3f3) tabs_2_active_pane_t1_ParamLimits

0xb3f3,	// (0x0000b3f3) tabs_2_passive_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_ParamLimits

0xb409,	// (0x0000b409) tabs_2_long_active_pane_t1_ParamLimits

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp4_ParamLimits

0x3322,	// (0x00003322) list_single_midp_graphic_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_ParamLimits

0xb420,	// (0x0000b420) tabs_3_long_active_pane_t1_ParamLimits

0x289b,	// (0x0000289b) bg_passive_tab_pane_cp5_ParamLimits

0x3322,	// (0x00003322) list_single_midp_graphic_pane_t1

0xc020,	// (0x0000c020) bg_status_flat_pane_ParamLimits

0x2ea6,	// (0x00002ea6) indicator_pane_cp2_ParamLimits

0x2ea6,	// (0x00002ea6) indicator_pane_cp2

0xc186,	// (0x0000c186) navi_pane_srt_ParamLimits

0xc186,	// (0x0000c186) navi_pane_srt

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

0xb7a6,	// (0x0000b7a6) cursor_primary_pane_g1

0x3c54,	// (0x00003c54) cursor_text_primary_t1

0xc40a,	// (0x0000c40a) cursor_primary_small_pane_g1

0x3c46,	// (0x00003c46) cursor_text_primary_small_t1

0xc400,	// (0x0000c400) cursor_primary_small_pane_g1_copy1

0x3c30,	// (0x00003c30) cursor_text_primary_small_t1_copy1

0x3c12,	// (0x00003c12) cursor_text_title_t1

0xc3f6,	// (0x0000c3f6) cursor_title_pane_g1

0xb7a6,	// (0x0000b7a6) cursor_digital_pane_g1

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

0xa46d,	// (0x0000a46d) graphic_text_primary_pane_t

0x4e7c,	// (0x00004e7c) graphic_text_primary_small_pane_g1

0x4e84,	// (0x00004e84) graphic_text_primary_small_pane_t1

0x4e92,	// (0x00004e92) graphic_text_primary_small_pane_t2

0x0001,

0xa468,	// (0x0000a468) graphic_text_primary_small_pane_t

0x4e58,	// (0x00004e58) graphic_text_secondary_pane_g1

0x4e60,	// (0x00004e60) graphic_text_secondary_pane_t1

0x4e6e,	// (0x00004e6e) graphic_text_secondary_pane_t2

0x0001,

0xa463,	// (0x0000a463) graphic_text_secondary_pane_t

0x4e34,	// (0x00004e34) graphic_text_title_pane_g1

0x4e3c,	// (0x00004e3c) graphic_text_title_pane_t1

0x4e4a,	// (0x00004e4a) graphic_text_title_pane_t2

0x0001,

0xa45e,	// (0x0000a45e) graphic_text_title_pane_t

0x4e10,	// (0x00004e10) graphic_text_digital_pane_g1

0x4e18,	// (0x00004e18) graphic_text_digital_pane_t1

0x4e26,	// (0x00004e26) graphic_text_digital_pane_t2

0x0001,

0xa459,	// (0x0000a459) graphic_text_digital_pane_t

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

0xa38e,	// (0x0000a38e) navi_navi_pane_srt_g_ParamLimits

0xa38e,	// (0x0000a38e) navi_navi_pane_srt_g

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

0xa20d,	// (0x0000a20d) volume_small_pane_srt_g_ParamLimits

0xa20d,	// (0x0000a20d) volume_small_pane_srt_g

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

0xb3f3,	// (0x0000b3f3) tabs_2_active_pane_srt_t1_ParamLimits

0xb3f3,	// (0x0000b3f3) tabs_2_active_pane_srt_t1

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

0xac46,	// (0x0000ac46) tabs_3_active_pane_srt_t1_ParamLimits

0xac46,	// (0x0000ac46) tabs_3_active_pane_srt_t1

0x257e,	// (0x0000257e) bg_active_tab_pane_g1_cp2_srt

0x1ec4,	// (0x00001ec4) bg_active_tab_pane_g2_cp2_srt

0x2587,	// (0x00002587) bg_active_tab_pane_g3_cp2_srt

0x4d05,	// (0x00004d05) tabs_4_active_pane_srt_ParamLimits

0x4d05,	// (0x00004d05) tabs_4_active_pane_srt

0x4d17,	// (0x00004d17) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4d17,	// (0x00004d17) tabs_4_passive_pane_cp2_srt

0x2818,	// (0x00002818) aid_size_cell_toolbar

0xb9b4,	// (0x0000b9b4) main_idle_act_pane_ParamLimits

0x2a06,	// (0x00002a06) popup_large_graphic_colour_window_ParamLimits

0xbf12,	// (0x0000bf12) popup_toolbar_window_ParamLimits

0xbf12,	// (0x0000bf12) popup_toolbar_window

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

0xa260,	// (0x0000a260) list_single_graphic_2heading_pane_g_ParamLimits

0xa260,	// (0x0000a260) list_single_graphic_2heading_pane_g

0x3146,	// (0x00003146) list_single_graphic_2heading_pane_t1_ParamLimits

0x3146,	// (0x00003146) list_single_graphic_2heading_pane_t1

0x315a,	// (0x0000315a) list_single_graphic_2heading_pane_t2_ParamLimits

0x315a,	// (0x0000315a) list_single_graphic_2heading_pane_t2

0x3174,	// (0x00003174) list_single_graphic_2heading_pane_t3_ParamLimits

0x3174,	// (0x00003174) list_single_graphic_2heading_pane_t3

0x0002,

0xa267,	// (0x0000a267) list_single_graphic_2heading_pane_t_ParamLimits

0xa267,	// (0x0000a267) list_single_graphic_2heading_pane_t

0x318c,	// (0x0000318c) bg_popup_sub_pane_cp2

0x31b2,	// (0x000031b2) grid_toobar_pane

0x31e8,	// (0x000031e8) cell_toolbar_pane_ParamLimits

0x31e8,	// (0x000031e8) cell_toolbar_pane

0x320f,	// (0x0000320f) cell_toolbar_pane_g1_ParamLimits

0x320f,	// (0x0000320f) cell_toolbar_pane_g1

0x3221,	// (0x00003221) cell_toolbar_pane_g2_ParamLimits

0x3221,	// (0x00003221) cell_toolbar_pane_g2

0x0001,

0xa26e,	// (0x0000a26e) cell_toolbar_pane_g_ParamLimits

0xa26e,	// (0x0000a26e) cell_toolbar_pane_g

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

0xa273,	// (0x0000a273) toolbar_button_pane_g

0x32b9,	// (0x000032b9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x32b9,	// (0x000032b9) list_single_2graphic_pane_g1_cp3

0xc304,	// (0x0000c304) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc304,	// (0x0000c304) list_single_2graphic_pane_g2_cp3

0x21b0,	// (0x000021b0) list_single_2graphic_pane_g3_cp3

0x32d4,	// (0x000032d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x32d4,	// (0x000032d4) list_single_2graphic_pane_g4_cp3

0x32e0,	// (0x000032e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x32e0,	// (0x000032e0) list_single_2graphic_pane_t1_cp3

0x21a4,	// (0x000021a4) list_single_midp_graphic_pane_g2_ParamLimits

0x21a4,	// (0x000021a4) list_single_midp_graphic_pane_g2

0x2820,	// (0x00002820) aid_zoom_text_primary

0x2828,	// (0x00002828) aid_zoom_text_secondary

0xb7e0,	// (0x0000b7e0) status_small_pane_g7_ParamLimits

0xb7e0,	// (0x0000b7e0) status_small_pane_g7

0xb803,	// (0x0000b803) status_small_pane_t1_ParamLimits

0xab8e,	// (0x0000ab8e) title_pane_g2

0x0003,

0xe71b,	// (0x0000e71b) title_pane_g

0xae70,	// (0x0000ae70) aid_size_cell_colour_1_pane_ParamLimits

0xae70,	// (0x0000ae70) aid_size_cell_colour_1_pane

0xae84,	// (0x0000ae84) aid_size_cell_colour_2_pane_ParamLimits

0xae84,	// (0x0000ae84) aid_size_cell_colour_2_pane

0xae98,	// (0x0000ae98) aid_size_cell_colour_3_pane_ParamLimits

0xae98,	// (0x0000ae98) aid_size_cell_colour_3_pane

0xaeac,	// (0x0000aeac) aid_size_cell_colour_4_pane_ParamLimits

0xaeac,	// (0x0000aeac) aid_size_cell_colour_4_pane

0x16f4,	// (0x000016f4) title_pane_stacon_g1_ParamLimits

0x16f4,	// (0x000016f4) title_pane_stacon_g1

0x3a5d,	// (0x00003a5d) popup_note_wait_window_g3_ParamLimits

0x3a5d,	// (0x00003a5d) popup_note_wait_window_g3

0x3ad3,	// (0x00003ad3) popup_note_wait_window_t5_ParamLimits

0x3ad3,	// (0x00003ad3) popup_note_wait_window_t5

0x024e,	// (0x0000024e) main_feb_china_hwr_fs_writing_pane

0xba15,	// (0x0000ba15) popup_feb_china_hwr_fs_window_ParamLimits

0xba15,	// (0x0000ba15) popup_feb_china_hwr_fs_window

0xc315,	// (0x0000c315) aid_size_cell_hwr_fs_ParamLimits

0xc315,	// (0x0000c315) aid_size_cell_hwr_fs

0x33f3,	// (0x000033f3) bg_popup_sub_pane_cp3_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_sub_pane_cp3

0xc32a,	// (0x0000c32a) grid_hwr_fs_pane_ParamLimits

0xc32a,	// (0x0000c32a) grid_hwr_fs_pane

0x3413,	// (0x00003413) linegrid_hwr_fs_pane_ParamLimits

0x3413,	// (0x00003413) linegrid_hwr_fs_pane

0xc342,	// (0x0000c342) cell_hwr_fs_pane_ParamLimits

0xc342,	// (0x0000c342) cell_hwr_fs_pane

0x3441,	// (0x00003441) linegrid_hwr_fs_pane_g1_ParamLimits

0x3441,	// (0x00003441) linegrid_hwr_fs_pane_g1

0xc362,	// (0x0000c362) linegrid_hwr_fs_pane_g2_ParamLimits

0xc362,	// (0x0000c362) linegrid_hwr_fs_pane_g2

0x345f,	// (0x0000345f) linegrid_hwr_fs_pane_g3_ParamLimits

0x345f,	// (0x0000345f) linegrid_hwr_fs_pane_g3

0x346b,	// (0x0000346b) linegrid_hwr_fs_pane_g4_ParamLimits

0x346b,	// (0x0000346b) linegrid_hwr_fs_pane_g4

0x3485,	// (0x00003485) linegrid_hwr_fs_pane_g5_ParamLimits

0x3485,	// (0x00003485) linegrid_hwr_fs_pane_g5

0x0004,

0xe84b,	// (0x0000e84b) linegrid_hwr_fs_pane_g_ParamLimits

0xe84b,	// (0x0000e84b) linegrid_hwr_fs_pane_g

0x349b,	// (0x0000349b) cell_hwr_fs_pane_g1_ParamLimits

0x349b,	// (0x0000349b) cell_hwr_fs_pane_g1

0x3078,	// (0x00003078) cell_hwr_fs_pane_g2_ParamLimits

0x3078,	// (0x00003078) cell_hwr_fs_pane_g2

0xc374,	// (0x0000c374) cell_hwr_fs_pane_g3_ParamLimits

0xc374,	// (0x0000c374) cell_hwr_fs_pane_g3

0xc381,	// (0x0000c381) cell_hwr_fs_pane_g4_ParamLimits

0xc381,	// (0x0000c381) cell_hwr_fs_pane_g4

0x0003,

0xe856,	// (0x0000e856) cell_hwr_fs_pane_g_ParamLimits

0xe856,	// (0x0000e856) cell_hwr_fs_pane_g

0xc38e,	// (0x0000c38e) cell_hwr_fs_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp6

0x024e,	// (0x0000024e) main_idle_act2_pane

0x14b9,	// (0x000014b9) aid_inside_area_popup_secondary

0xc517,	// (0x0000c517) aid_inside_area_window_primary_ParamLimits

0xc517,	// (0x0000c517) aid_inside_area_window_primary

0x4ecb,	// (0x00004ecb) ai2_news_ticker_pane

0x4ed3,	// (0x00004ed3) aid_size_cell_ai1_link_ParamLimits

0x4ed3,	// (0x00004ed3) aid_size_cell_ai1_link

0xc962,	// (0x0000c962) popup_ai2_data_window_ParamLimits

0xc962,	// (0x0000c962) popup_ai2_data_window

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

0xa472,	// (0x0000a472) popup_ai2_link_window_g_ParamLimits

0xa472,	// (0x0000a472) popup_ai2_link_window_g

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

0xc98c,	// (0x0000c98c) list_ai2_gene_pane_t1

0x5099,	// (0x00005099) ai2_mp_volume_pane_g3

0x0002,

0xa48b,	// (0x0000a48b) ai2_mp_volume_pane_g

0x50a1,	// (0x000050a1) volume_small_pane_cp3

0x50aa,	// (0x000050aa) aid_size_cell_ai2_button

0x50b2,	// (0x000050b2) grid_ai2_button_pane

0x50bb,	// (0x000050bb) cell_ai2_button_pane_ParamLimits

0x50bb,	// (0x000050bb) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp8

0x5049,	// (0x00005049) ai2_gene_pane_t1_ParamLimits

0x5049,	// (0x00005049) ai2_gene_pane_t1

0xb97f,	// (0x0000b97f) aid_height_parent_landscape

0xc6e1,	// (0x0000c6e1) aid_height_set_list

0x4929,	// (0x00004929) aid_size_parent

0x4c98,	// (0x00004c98) aid_size_cell_graphic_pane_ParamLimits

0x4f73,	// (0x00004f73) popup_ai2_data_window_g1_ParamLimits

0x4f73,	// (0x00004f73) popup_ai2_data_window_g1

0x4f7f,	// (0x00004f7f) ai2_news_ticker_pane_g1

0x4f87,	// (0x00004f87) ai2_news_ticker_pane_g2

0x0001,

0xa477,	// (0x0000a477) ai2_news_ticker_pane_g

0x4f8f,	// (0x00004f8f) ai2_news_ticker_pane_t1

0x4f9d,	// (0x00004f9d) ai2_news_ticker_pane_t2

0x0001,

0xa47c,	// (0x0000a47c) ai2_news_ticker_pane_t

0x4c32,	// (0x00004c32) heading_ai2_gene_pane_g1

0x4fca,	// (0x00004fca) heading_ai2_gene_pane_t1_ParamLimits

0x4fca,	// (0x00004fca) heading_ai2_gene_pane_t1

0x4fdf,	// (0x00004fdf) list_highlight_pane_cp6

0xc976,	// (0x0000c976) ai2_gene_pane_ParamLimits

0xc976,	// (0x0000c976) ai2_gene_pane

0xc99a,	// (0x0000c99a) list_ai2_gene_pane_t2

0x0001,

0xe8f3,	// (0x0000e8f3) list_ai2_gene_pane_t

0x501a,	// (0x0000501a) list_highlight_pane_cp8_ParamLimits

0x501a,	// (0x0000501a) list_highlight_pane_cp8

0x502b,	// (0x0000502b) ai2_gene_pane_g1_ParamLimits

0x502b,	// (0x0000502b) ai2_gene_pane_g1

0x503d,	// (0x0000503d) ai2_gene_pane_g2_ParamLimits

0x503d,	// (0x0000503d) ai2_gene_pane_g2

0x0001,

0xa486,	// (0x0000a486) ai2_gene_pane_g_ParamLimits

0xa486,	// (0x0000a486) ai2_gene_pane_g

0x0c88,	// (0x00000c88) scroll_pane_cp12

0xb93e,	// (0x0000b93e) control_pane_t3_ParamLimits

0xb93e,	// (0x0000b93e) control_pane_t3

0xb7f4,	// (0x0000b7f4) status_small_pane_g8_ParamLimits

0xb7f4,	// (0x0000b7f4) status_small_pane_g8

0xba89,	// (0x0000ba89) popup_find_window_ParamLimits

0xbc7c,	// (0x0000bc7c) popup_note_image_window_ParamLimits

0x0e9a,	// (0x00000e9a) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_double2_graphic_pane_vc_g1

0x0ea6,	// (0x00000ea6) list_double2_graphic_pane_vc_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_double2_graphic_pane_vc_g2

0x0dd1,	// (0x00000dd1) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dd1,	// (0x00000dd1) list_double2_graphic_pane_vc_g3

0x0002,

0xa0ca,	// (0x0000a0ca) list_double2_graphic_pane_vc_g_ParamLimits

0xa0ca,	// (0x0000a0ca) list_double2_graphic_pane_vc_g

0x0eb2,	// (0x00000eb2) list_double2_graphic_pane_vc_t1_ParamLimits

0x0eb2,	// (0x00000eb2) list_double2_graphic_pane_vc_t1

0x0ea6,	// (0x00000ea6) list_single_heading_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_heading_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_single_heading_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_heading_pane_vc_g2

0x0001,

0xa116,	// (0x0000a116) list_single_heading_pane_vc_g_ParamLimits

0xa116,	// (0x0000a116) list_single_heading_pane_vc_g

0x32fa,	// (0x000032fa) list_single_heading_pane_vc_t1_ParamLimits

0x32fa,	// (0x000032fa) list_single_heading_pane_vc_t1

0x3310,	// (0x00003310) list_single_heading_pane_vc_t2_ParamLimits

0x3310,	// (0x00003310) list_single_heading_pane_vc_t2

0x0001,

0xa288,	// (0x0000a288) list_single_heading_pane_vc_t_ParamLimits

0xa288,	// (0x0000a288) list_single_heading_pane_vc_t

0x3338,	// (0x00003338) list_setting_number_pane_vc_g1_ParamLimits

0x3338,	// (0x00003338) list_setting_number_pane_vc_g1

0x3344,	// (0x00003344) list_setting_number_pane_vc_g2_ParamLimits

0x3344,	// (0x00003344) list_setting_number_pane_vc_g2

0x0001,

0xa28d,	// (0x0000a28d) list_setting_number_pane_vc_g_ParamLimits

0xa28d,	// (0x0000a28d) list_setting_number_pane_vc_g

0x3350,	// (0x00003350) list_setting_number_pane_vc_t1_ParamLimits

0x3350,	// (0x00003350) list_setting_number_pane_vc_t1

0x3364,	// (0x00003364) list_setting_number_pane_vc_t2_ParamLimits

0x3364,	// (0x00003364) list_setting_number_pane_vc_t2

0x3380,	// (0x00003380) list_setting_number_pane_vc_t3_ParamLimits

0x3380,	// (0x00003380) list_setting_number_pane_vc_t3

0x0002,

0xa292,	// (0x0000a292) list_setting_number_pane_vc_t_ParamLimits

0xa292,	// (0x0000a292) list_setting_number_pane_vc_t

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

0xa0ca,	// (0x0000a0ca) list_double_graphic_heading_pane_vc_g_ParamLimits

0xa0ca,	// (0x0000a0ca) list_double_graphic_heading_pane_vc_g

0x50ef,	// (0x000050ef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x50ef,	// (0x000050ef) list_double_graphic_heading_pane_vc_t1

0x5105,	// (0x00005105) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5105,	// (0x00005105) list_double_graphic_heading_pane_vc_t2

0x0001,

0xa492,	// (0x0000a492) list_double_graphic_heading_pane_vc_t_ParamLimits

0xa492,	// (0x0000a492) list_double_graphic_heading_pane_vc_t

0x3338,	// (0x00003338) list_setting_pane_vc_g1_ParamLimits

0x3338,	// (0x00003338) list_setting_pane_vc_g1

0x3344,	// (0x00003344) list_setting_pane_vc_g2_ParamLimits

0x3344,	// (0x00003344) list_setting_pane_vc_g2

0x0001,

0xa28d,	// (0x0000a28d) list_setting_pane_vc_g_ParamLimits

0xa28d,	// (0x0000a28d) list_setting_pane_vc_g

0x534b,	// (0x0000534b) list_setting_pane_vc_t1_ParamLimits

0x534b,	// (0x0000534b) list_setting_pane_vc_t1

0x535f,	// (0x0000535f) list_setting_pane_vc_t2_ParamLimits

0x535f,	// (0x0000535f) list_setting_pane_vc_t2

0x0001,

0xa4d5,	// (0x0000a4d5) list_setting_pane_vc_t_ParamLimits

0xa4d5,	// (0x0000a4d5) list_setting_pane_vc_t

0x33a6,	// (0x000033a6) set_value_pane_cp_vc_ParamLimits

0x33a6,	// (0x000033a6) set_value_pane_cp_vc

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_number_heading_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_number_heading_pane_vc_g2

0x0001,

0xa116,	// (0x0000a116) list_single_number_heading_pane_vc_g_ParamLimits

0xa116,	// (0x0000a116) list_single_number_heading_pane_vc_g

0x32fa,	// (0x000032fa) list_single_number_heading_pane_vc_t1_ParamLimits

0x32fa,	// (0x000032fa) list_single_number_heading_pane_vc_t1

0x5381,	// (0x00005381) list_single_number_heading_pane_vc_t2_ParamLimits

0x5381,	// (0x00005381) list_single_number_heading_pane_vc_t2

0x5393,	// (0x00005393) list_single_number_heading_pane_vc_t3_ParamLimits

0x5393,	// (0x00005393) list_single_number_heading_pane_vc_t3

0x0002,

0xa4da,	// (0x0000a4da) list_single_number_heading_pane_vc_t_ParamLimits

0xa4da,	// (0x0000a4da) list_single_number_heading_pane_vc_t

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e9a,	// (0x00000e9a) list_single_graphic_heading_pane_vc_g1

0x0ea6,	// (0x00000ea6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_graphic_heading_pane_vc_g4

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dd1,	// (0x00000dd1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa0ca,	// (0x0000a0ca) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa0ca,	// (0x0000a0ca) list_single_graphic_heading_pane_vc_g

0x32fa,	// (0x000032fa) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x32fa,	// (0x000032fa) list_single_graphic_heading_pane_vc_t1

0x53a5,	// (0x000053a5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53a5,	// (0x000053a5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa4e1,	// (0x0000a4e1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa4e1,	// (0x0000a4e1) list_single_graphic_heading_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double2_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double2_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double2_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double2_pane_vc_g2

0x0001,

0xa116,	// (0x0000a116) list_double2_pane_vc_g_ParamLimits

0xa116,	// (0x0000a116) list_double2_pane_vc_g

0x0ddd,	// (0x00000ddd) list_double2_pane_vc_t1_ParamLimits

0x0ddd,	// (0x00000ddd) list_double2_pane_vc_t1

0x0d40,	// (0x00000d40) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d40,	// (0x00000d40) list_double2_large_graphic_pane_vc_g1

0x0d4c,	// (0x00000d4c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d4c,	// (0x00000d4c) list_double2_large_graphic_pane_vc_g2

0x0d58,	// (0x00000d58) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d58,	// (0x00000d58) list_double2_large_graphic_pane_vc_g3

0x0002,

0xa09a,	// (0x0000a09a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xa09a,	// (0x0000a09a) list_double2_large_graphic_pane_vc_g

0x0d6c,	// (0x00000d6c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d6c,	// (0x00000d6c) list_double2_large_graphic_pane_vc_t1

0x53b7,	// (0x000053b7) list_double_time_pane_vc_g1_ParamLimits

0x53b7,	// (0x000053b7) list_double_time_pane_vc_g1

0x53c3,	// (0x000053c3) list_double_time_pane_vc_g2_ParamLimits

0x53c3,	// (0x000053c3) list_double_time_pane_vc_g2

0x0001,

0xa4e6,	// (0x0000a4e6) list_double_time_pane_vc_g_ParamLimits

0xa4e6,	// (0x0000a4e6) list_double_time_pane_vc_g

0x53cf,	// (0x000053cf) list_double_time_pane_vc_t1_ParamLimits

0x53cf,	// (0x000053cf) list_double_time_pane_vc_t1

0x53ed,	// (0x000053ed) list_double_time_pane_vc_t2_ParamLimits

0x53ed,	// (0x000053ed) list_double_time_pane_vc_t2

0x5411,	// (0x00005411) list_double_time_pane_vc_t3_ParamLimits

0x5411,	// (0x00005411) list_double_time_pane_vc_t3

0x5423,	// (0x00005423) list_double_time_pane_vc_t4_ParamLimits

0x5423,	// (0x00005423) list_double_time_pane_vc_t4

0x0003,

0xa4eb,	// (0x0000a4eb) list_double_time_pane_vc_t_ParamLimits

0xa4eb,	// (0x0000a4eb) list_double_time_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double_pane_vc_g2

0x0001,

0xa116,	// (0x0000a116) list_double_pane_vc_g_ParamLimits

0xa116,	// (0x0000a116) list_double_pane_vc_g

0x5435,	// (0x00005435) list_double_pane_vc_t1_ParamLimits

0x5435,	// (0x00005435) list_double_pane_vc_t1

0x5447,	// (0x00005447) list_double_pane_vc_t2_ParamLimits

0x5447,	// (0x00005447) list_double_pane_vc_t2

0x0001,

0xa4f4,	// (0x0000a4f4) list_double_pane_vc_t_ParamLimits

0xa4f4,	// (0x0000a4f4) list_double_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double_number_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_number_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double_number_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double_number_pane_vc_g2

0x0001,

0xa116,	// (0x0000a116) list_double_number_pane_vc_g_ParamLimits

0xa116,	// (0x0000a116) list_double_number_pane_vc_g

0x545d,	// (0x0000545d) list_double_number_pane_vc_t1_ParamLimits

0x545d,	// (0x0000545d) list_double_number_pane_vc_t1

0x5471,	// (0x00005471) list_double_number_pane_vc_t2_ParamLimits

0x5471,	// (0x00005471) list_double_number_pane_vc_t2

0x5483,	// (0x00005483) list_double_number_pane_vc_t3_ParamLimits

0x5483,	// (0x00005483) list_double_number_pane_vc_t3

0x0002,

0xa4f9,	// (0x0000a4f9) list_double_number_pane_vc_t_ParamLimits

0xa4f9,	// (0x0000a4f9) list_double_number_pane_vc_t

0x5499,	// (0x00005499) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5499,	// (0x00005499) list_double_large_graphic_pane_vc_g1

0x54c1,	// (0x000054c1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x54c1,	// (0x000054c1) list_double_large_graphic_pane_vc_g2

0x54d5,	// (0x000054d5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54d5,	// (0x000054d5) list_double_large_graphic_pane_vc_g3

0x54e4,	// (0x000054e4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54e4,	// (0x000054e4) list_double_large_graphic_pane_vc_g4

0x0003,

0xa500,	// (0x0000a500) list_double_large_graphic_pane_vc_g_ParamLimits

0xa500,	// (0x0000a500) list_double_large_graphic_pane_vc_g

0x54f4,	// (0x000054f4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54f4,	// (0x000054f4) list_double_large_graphic_pane_vc_t1

0x550e,	// (0x0000550e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x550e,	// (0x0000550e) list_double_large_graphic_pane_vc_t2

0x0001,

0xa509,	// (0x0000a509) list_double_large_graphic_pane_vc_t_ParamLimits

0xa509,	// (0x0000a509) list_double_large_graphic_pane_vc_t

0x0ea6,	// (0x00000ea6) list_double_heading_pane_vc_g1_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_heading_pane_vc_g1

0x0dd1,	// (0x00000dd1) list_double_heading_pane_vc_g2_ParamLimits

0x0dd1,	// (0x00000dd1) list_double_heading_pane_vc_g2

0x0001,

0xa116,	// (0x0000a116) list_double_heading_pane_vc_g_ParamLimits

0xa116,	// (0x0000a116) list_double_heading_pane_vc_g

0x552e,	// (0x0000552e) list_double_heading_pane_vc_t1_ParamLimits

0x552e,	// (0x0000552e) list_double_heading_pane_vc_t1

0x32fa,	// (0x000032fa) list_double_heading_pane_vc_t2_ParamLimits

0x32fa,	// (0x000032fa) list_double_heading_pane_vc_t2

0x0001,

0xa50e,	// (0x0000a50e) list_double_heading_pane_vc_t_ParamLimits

0xa50e,	// (0x0000a50e) list_double_heading_pane_vc_t

0x5540,	// (0x00005540) list_double_graphic_pane_vc_g1_ParamLimits

0x5540,	// (0x00005540) list_double_graphic_pane_vc_g1

0x554c,	// (0x0000554c) list_double_graphic_pane_vc_g2_ParamLimits

0x554c,	// (0x0000554c) list_double_graphic_pane_vc_g2

0x0ea6,	// (0x00000ea6) list_double_graphic_pane_vc_g3_ParamLimits

0x0ea6,	// (0x00000ea6) list_double_graphic_pane_vc_g3

0x0003,

0xa513,	// (0x0000a513) list_double_graphic_pane_vc_g_ParamLimits

0xa513,	// (0x0000a513) list_double_graphic_pane_vc_g

0x5569,	// (0x00005569) list_double_graphic_pane_vc_t1_ParamLimits

0x5569,	// (0x00005569) list_double_graphic_pane_vc_t1

0x5587,	// (0x00005587) list_double_graphic_pane_vc_t2_ParamLimits

0x5587,	// (0x00005587) list_double_graphic_pane_vc_t2

0x0001,

0xa51c,	// (0x0000a51c) list_double_graphic_pane_vc_t_ParamLimits

0xa51c,	// (0x0000a51c) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xa9c0,	// (0x0000a9c0) aid_size_cell_touch_ParamLimits

0xa9c0,	// (0x0000a9c0) aid_size_cell_touch

0x0278,	// (0x00000278) popup_fast_swap_wide_window_ParamLimits

0x0278,	// (0x00000278) popup_fast_swap_wide_window

0xab21,	// (0x0000ab21) touch_pane_ParamLimits

0xab21,	// (0x0000ab21) touch_pane

0x113e,	// (0x0000113e) button_value_adjust_pane_cp2

0x1146,	// (0x00001146) button_value_adjust_pane_cp4

0x1166,	// (0x00001166) form_field_data_pane_cp2

0xb2b5,	// (0x0000b2b5) form_field_data_wide_pane_cp2

0x191b,	// (0x0000191b) bg_scroll_pane_ParamLimits

0x193a,	// (0x0000193a) scroll_handle_pane_ParamLimits

0x194e,	// (0x0000194e) scroll_sc2_down_pane_ParamLimits

0x194e,	// (0x0000194e) scroll_sc2_down_pane

0x1975,	// (0x00001975) scroll_sc2_up_pane_ParamLimits

0x1975,	// (0x00001975) scroll_sc2_up_pane

0xcab0,	// (0x0000cab0) grid_wheel_folder_pane_g1_ParamLimits

0xcab0,	// (0x0000cab0) grid_wheel_folder_pane_g1

0x1fff,	// (0x00001fff) clock_nsta_pane_cp2_ParamLimits

0x1fff,	// (0x00001fff) clock_nsta_pane_cp2

0xb70a,	// (0x0000b70a) listscroll_midp_pane_ParamLimits

0xb719,	// (0x0000b719) midp_canvas_pane

0x2806,	// (0x00002806) nsta_clock_indic_pane

0x2864,	// (0x00002864) listscroll_form_pane_vc

0x2889,	// (0x00002889) listscroll_set_pane_vc_ParamLimits

0x2889,	// (0x00002889) listscroll_set_pane_vc

0xc048,	// (0x0000c048) clock_nsta_pane

0xc06b,	// (0x0000c06b) indicator_nsta_pane

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

0xc3ce,	// (0x0000c3ce) list_midp_pane_ParamLimits

0x4cf9,	// (0x00004cf9) scroll_pane_cp16_ParamLimits

0x4cf9,	// (0x00004cf9) scroll_pane_cp16

0x3843,	// (0x00003843) button_value_adjust_pane_ParamLimits

0x3843,	// (0x00003843) button_value_adjust_pane

0xc6ed,	// (0x0000c6ed) button_value_adjust_pane_cp6_ParamLimits

0xc6ed,	// (0x0000c6ed) button_value_adjust_pane_cp6

0xc7f7,	// (0x0000c7f7) settings_code_pane_cp_ParamLimits

0xc7f7,	// (0x0000c7f7) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0xa1b3,	// (0x0000a1b3) cell_touch_pane_g

0xc9a8,	// (0x0000c9a8) cell_touch_pane_cp_ParamLimits

0xc9a8,	// (0x0000c9a8) cell_touch_pane_cp

0xc9c4,	// (0x0000c9c4) cell_touch_pane_ParamLimits

0xc9c4,	// (0x0000c9c4) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_vc

0x511d,	// (0x0000511d) list_set_graphic_pane_vc_g1_ParamLimits

0x511d,	// (0x0000511d) list_set_graphic_pane_vc_g1

0x5129,	// (0x00005129) list_set_graphic_pane_vc_g2_ParamLimits

0x5129,	// (0x00005129) list_set_graphic_pane_vc_g2

0x0001,

0xa497,	// (0x0000a497) list_set_graphic_pane_vc_g_ParamLimits

0xa497,	// (0x0000a497) list_set_graphic_pane_vc_g

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

0xa49c,	// (0x0000a49c) setting_slider_graphic_pane_vc_t

0x51b7,	// (0x000051b7) slider_set_pane_cp_vc

0x51bf,	// (0x000051bf) slider_set_pane_vc_g1

0x51c8,	// (0x000051c8) slider_set_pane_vc_g2

0x0006,

0xa4a1,	// (0x0000a4a1) slider_set_pane_vc_g

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

0xa4b0,	// (0x0000a4b0) setting_slider_pane_vc_t

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

0xa4b7,	// (0x0000a4b7) volume_set_pane_vc_g

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

0xa4cc,	// (0x0000a4cc) main_pane_set_vc_t_ParamLimits

0xa4cc,	// (0x0000a4cc) main_pane_set_vc_t

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

0xa521,	// (0x0000a521) button_value_adjust_pane_g

0x55b7,	// (0x000055b7) form_field_slider_wide_pane_vc_t1_ParamLimits

0x55b7,	// (0x000055b7) form_field_slider_wide_pane_vc_t1

0x55cd,	// (0x000055cd) form_field_slider_wide_pane_vc_t2_ParamLimits

0x55cd,	// (0x000055cd) form_field_slider_wide_pane_vc_t2

0x0002,

0xa526,	// (0x0000a526) form_field_slider_wide_pane_vc_t_ParamLimits

0xa526,	// (0x0000a526) form_field_slider_wide_pane_vc_t

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

0xa538,	// (0x0000a538) form_field_slider_pane_vc_t_ParamLimits

0xa538,	// (0x0000a538) form_field_slider_pane_vc_t

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

0xa13c,	// (0x0000a13c) input_focus_pane_vc_g

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

0xc9e2,	// (0x0000c9e2) grid_touch_1_pane_ParamLimits

0xc9e2,	// (0x0000c9e2) grid_touch_1_pane

0xc9f6,	// (0x0000c9f6) grid_touch_2_pane_ParamLimits

0xc9f6,	// (0x0000c9f6) grid_touch_2_pane

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

0xca20,	// (0x0000ca20) cell_indicator_nsta_pane_ParamLimits

0xca20,	// (0x0000ca20) cell_indicator_nsta_pane

0x58ac,	// (0x000058ac) cell_indicator_nsta_pane_g1

0xca37,	// (0x0000ca37) cell_indicator_nsta_pane_g2

0x0001,

0xe8f8,	// (0x0000e8f8) cell_indicator_nsta_pane_g

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

0xca44,	// (0x0000ca44) grid_wheel_folder_pane_ParamLimits

0xca44,	// (0x0000ca44) grid_wheel_folder_pane

0xca52,	// (0x0000ca52) list_wheel_apps_pane_ParamLimits

0xca52,	// (0x0000ca52) list_wheel_apps_pane

0xca5e,	// (0x0000ca5e) main_apps_wheel_pane_g1_ParamLimits

0xca5e,	// (0x0000ca5e) main_apps_wheel_pane_g1

0xca6a,	// (0x0000ca6a) main_apps_wheel_pane_g2_ParamLimits

0xca6a,	// (0x0000ca6a) main_apps_wheel_pane_g2

0x0001,

0xe8fd,	// (0x0000e8fd) main_apps_wheel_pane_g_ParamLimits

0xe8fd,	// (0x0000e8fd) main_apps_wheel_pane_g

0xca76,	// (0x0000ca76) main_apps_wheel_pane_t1_ParamLimits

0xca76,	// (0x0000ca76) main_apps_wheel_pane_t1

0xca88,	// (0x0000ca88) list_wheel_apps_pane_g1

0xca90,	// (0x0000ca90) list_wheel_apps_pane_g2

0xca98,	// (0x0000ca98) list_wheel_apps_pane_g3

0xcaa0,	// (0x0000caa0) list_wheel_apps_pane_g4

0xcaa8,	// (0x0000caa8) list_wheel_apps_pane_g5

0x0004,

0xe902,	// (0x0000e902) list_wheel_apps_pane_g

0x0474,	// (0x00000474) navi_icon_text_pane

0xbf54,	// (0x0000bf54) aid_fill_nsta

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

0xa208,	// (0x0000a208) midp_ticker_pane_g_ParamLimits

0x2418,	// (0x00002418) midp_ticker_pane_t1_ParamLimits

0xbf6a,	// (0x0000bf6a) aid_fill_nsta_2

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

0xa58f,	// (0x0000a58f) form2_midp_field_pane_g

0x5b06,	// (0x00005b06) form2_midp_gauge_slider_pane

0x5b0e,	// (0x00005b0e) form2_midp_gauge_wait_pane

0x5b16,	// (0x00005b16) form2_midp_image_pane_ParamLimits

0x5b16,	// (0x00005b16) form2_midp_image_pane

0x5b31,	// (0x00005b31) form2_midp_label_pane_ParamLimits

0x5b31,	// (0x00005b31) form2_midp_label_pane

0xcadd,	// (0x0000cadd) form2_midp_label_pane_cp_ParamLimits

0xcadd,	// (0x0000cadd) form2_midp_label_pane_cp

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

0xcafc,	// (0x0000cafc) form2_midp_gauge_slider_pane_t2

0xcb0e,	// (0x0000cb0e) form2_midp_gauge_slider_pane_t3

0x0002,

0xe912,	// (0x0000e912) form2_midp_gauge_slider_pane_t

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

0xb70a,	// (0x0000b70a) midp_form_pane_ParamLimits

0x0474,	// (0x00000474) main_apps_wheel_pane_ParamLimits

0xbcf6,	// (0x0000bcf6) popup_preview_window_ParamLimits

0xbcf6,	// (0x0000bcf6) popup_preview_window

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

0xa5a6,	// (0x0000a5a6) list_single_touch_info_pane_t

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

0xa5ab,	// (0x0000a5ab) list_single_preview_pane_t

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

0xa193,	// (0x0000a193) scroll_bg_pane_g_ParamLimits

0x198b,	// (0x0000198b) scroll_handle_pane_g1_ParamLimits

0x19da,	// (0x000019da) scroll_handle_pane_g2_ParamLimits

0x19b8,	// (0x000019b8) scroll_handle_pane_g3_ParamLimits

0xa19a,	// (0x0000a19a) scroll_handle_pane_g_ParamLimits

0x28c9,	// (0x000028c9) popup_choice_list_window_ParamLimits

0x28c9,	// (0x000028c9) popup_choice_list_window

0x3198,	// (0x00003198) choice_list_pane

0x3235,	// (0x00003235) cell_toolbar_pane_t1

0x325d,	// (0x0000325d) toolbar_button_pane_ParamLimits

0x456e,	// (0x0000456e) ai_gene_pane_1_t2_ParamLimits

0x456e,	// (0x0000456e) ai_gene_pane_1_t2

0x0001,

0xa3b6,	// (0x0000a3b6) ai_gene_pane_1_t_ParamLimits

0xa3b6,	// (0x0000a3b6) ai_gene_pane_1_t

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

0xa179,	// (0x0000a179) title_pane_stacon_g_ParamLimits

0xa179,	// (0x0000a179) title_pane_stacon_g

0x232f,	// (0x0000232f) cursor_press_pane

0xba5d,	// (0x0000ba5d) popup_fep_hwr_window_ParamLimits

0xba5d,	// (0x0000ba5d) popup_fep_hwr_window

0x29c1,	// (0x000029c1) popup_fep_vkb_window_ParamLimits

0x29c1,	// (0x000029c1) popup_fep_vkb_window

0x5e7e,	// (0x00005e7e) cursor_press_pane_g1

0x0002,

0xe926,	// (0x0000e926) fep_vkb_side_pane_g_ParamLimits

0x5ebb,	// (0x00005ebb) fep_hwr_candidate_pane_ParamLimits

0x5ebb,	// (0x00005ebb) fep_hwr_candidate_pane

0x5ee3,	// (0x00005ee3) fep_hwr_side_pane_ParamLimits

0x5ee3,	// (0x00005ee3) fep_hwr_side_pane

0x5f03,	// (0x00005f03) fep_hwr_top_pane_ParamLimits

0x5f03,	// (0x00005f03) fep_hwr_top_pane

0x5f1b,	// (0x00005f1b) fep_hwr_write_pane_ParamLimits

0x5f1b,	// (0x00005f1b) fep_hwr_write_pane

0xe926,	// (0x0000e926) fep_vkb_side_pane_g

0x5f55,	// (0x00005f55) fep_hwr_top_pane_g1

0x5f67,	// (0x00005f67) fep_hwr_top_pane_g2

0x5f79,	// (0x00005f79) fep_hwr_top_pane_g3

0x0002,

0xa5b0,	// (0x0000a5b0) fep_hwr_top_pane_g

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

0xa5db,	// (0x0000a5db) fep_vkb_bottom_pane_g_ParamLimits

0xa5db,	// (0x0000a5db) fep_vkb_bottom_pane_g

0x5e2d,	// (0x00005e2d) cell_vkb_side_pane_g2

0x0001,

0xa5e5,	// (0x0000a5e5) cell_vkb_side_pane_g

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

0xa5cb,	// (0x0000a5cb) fep_vkb_top_pane_g_ParamLimits

0xa5cb,	// (0x0000a5cb) fep_vkb_top_pane_g

0x6279,	// (0x00006279) fep_vkb_top_text_pane_ParamLimits

0x6279,	// (0x00006279) fep_vkb_top_text_pane

0xcb7d,	// (0x0000cb7d) fep_vkb_side_pane_g1_ParamLimits

0xcb7d,	// (0x0000cb7d) fep_vkb_side_pane_g1

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

0xcbc4,	// (0x0000cbc4) fep_vkb_top_text_pane_t1

0xcbd6,	// (0x0000cbd6) cell_vkb_side_pane_ParamLimits

0xcbd6,	// (0x0000cbd6) cell_vkb_side_pane

0x5e2d,	// (0x00005e2d) cell_vkb_side_pane_g1

0x641c,	// (0x0000641c) cell_vkb_keypad_pane_ParamLimits

0x641c,	// (0x0000641c) cell_vkb_keypad_pane

0x6489,	// (0x00006489) cell_vkb_keypad_pane_g1

0x0008,

0xa5f8,	// (0x0000a5f8) bg_popup_fep_shadow_pane_g

0x5e2d,	// (0x00005e2d) cell_hwr_side_pane_g1

0x5e2d,	// (0x00005e2d) cell_hwr_side_pane_g2

0x6493,	// (0x00006493) cell_vkb_keypad_pane_t1

0xcbec,	// (0x0000cbec) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcbec,	// (0x0000cbec) cell_vkb_keypad_bottom_left_pane

0xcc01,	// (0x0000cc01) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc01,	// (0x0000cc01) cell_vkb_keypad_bottom_right_pane

0x5e2d,	// (0x00005e2d) cell_vkb_keypad_bottom_left_pane_g1

0x5e2d,	// (0x00005e2d) cell_vkb_keypad_bottom_right_pane_g1

0x64f7,	// (0x000064f7) cell_vkb_keypad_number_pane_ParamLimits

0x64f7,	// (0x000064f7) cell_vkb_keypad_number_pane

0x6516,	// (0x00006516) cell_vkb_keypad_number_pane_g1

0x6520,	// (0x00006520) cell_vkb_keypad_number_pane_g2

0x6529,	// (0x00006529) cell_vkb_keypad_number_pane_g3

0x0002,

0xa5ea,	// (0x0000a5ea) cell_vkb_keypad_number_pane_g

0x6493,	// (0x00006493) cell_vkb_keypad_number_pane_t1

0x654b,	// (0x0000654b) fep_vkb_candidate_pane_g1

0x0001,

0xa5e5,	// (0x0000a5e5) cell_hwr_side_pane_g

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

0xcb38,	// (0x0000cb38) cell_hwr_side_pane_ParamLimits

0xcb38,	// (0x0000cb38) cell_hwr_side_pane

0x6011,	// (0x00006011) fep_hwr_write_pane_g1_ParamLimits

0x6011,	// (0x00006011) fep_hwr_write_pane_g1

0x601e,	// (0x0000601e) fep_hwr_write_pane_g2_ParamLimits

0x601e,	// (0x0000601e) fep_hwr_write_pane_g2

0x602b,	// (0x0000602b) fep_hwr_write_pane_g3_ParamLimits

0x602b,	// (0x0000602b) fep_hwr_write_pane_g3

0xcb58,	// (0x0000cb58) fep_hwr_write_pane_g4_ParamLimits

0xcb58,	// (0x0000cb58) fep_hwr_write_pane_g4

0x0005,

0xe919,	// (0x0000e919) fep_hwr_write_pane_g_ParamLimits

0xe919,	// (0x0000e919) fep_hwr_write_pane_g

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

0xb1f2,	// (0x0000b1f2) list_setting_pane_t4_ParamLimits

0xb1f2,	// (0x0000b1f2) list_setting_pane_t4

0xb274,	// (0x0000b274) list_setting_number_pane_t5_ParamLimits

0xb274,	// (0x0000b274) list_setting_number_pane_t5

0xb58b,	// (0x0000b58b) list_double_heading_pane_cp2_ParamLimits

0xb58b,	// (0x0000b58b) list_double_heading_pane_cp2

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

0xa619,	// (0x0000a619) list_single_pane_fp_g_ParamLimits

0xa619,	// (0x0000a619) list_single_pane_fp_g

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

0xa622,	// (0x0000a622) list_single_graphic_pane_fp_g_ParamLimits

0xa622,	// (0x0000a622) list_single_graphic_pane_fp_g

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

0xa622,	// (0x0000a622) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa622,	// (0x0000a622) list_single_graphic_heading_pane_fp_g

0x6760,	// (0x00006760) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6760,	// (0x00006760) list_single_graphic_heading_pane_fp_t1

0x6776,	// (0x00006776) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6776,	// (0x00006776) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa62d,	// (0x0000a62d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa62d,	// (0x0000a62d) list_single_graphic_heading_pane_fp_t

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

0xa632,	// (0x0000a632) list_single_cale_day_pane_fp_g_ParamLimits

0xa632,	// (0x0000a632) list_single_cale_day_pane_fp_g

0x683c,	// (0x0000683c) list_single_cale_day_pane_fp_t1_ParamLimits

0x683c,	// (0x0000683c) list_single_cale_day_pane_fp_t1

0x6862,	// (0x00006862) list_single_cale_day_pane_fp_t2_ParamLimits

0x6862,	// (0x00006862) list_single_cale_day_pane_fp_t2

0x687b,	// (0x0000687b) list_single_cale_day_pane_fp_t3_ParamLimits

0x687b,	// (0x0000687b) list_single_cale_day_pane_fp_t3

0x0002,

0xa63d,	// (0x0000a63d) list_single_cale_day_pane_fp_t_ParamLimits

0xa63d,	// (0x0000a63d) list_single_cale_day_pane_fp_t

0x66fb,	// (0x000066fb) list_empty_pane_fp_g1_ParamLimits

0x66fb,	// (0x000066fb) list_empty_pane_fp_g1

0x6894,	// (0x00006894) list_empty_pane_fp_t1

0x68a2,	// (0x000068a2) list_empty_pane_fp_t2

0x0001,

0xa644,	// (0x0000a644) list_empty_pane_fp_t

0x66fb,	// (0x000066fb) list_single_heading_pane_fp_g1_ParamLimits

0x66fb,	// (0x000066fb) list_single_heading_pane_fp_g1

0x0ea6,	// (0x00000ea6) list_single_heading_pane_fp_g2_ParamLimits

0x0ea6,	// (0x00000ea6) list_single_heading_pane_fp_g2

0x6707,	// (0x00006707) list_single_heading_pane_fp_g3_ParamLimits

0x6707,	// (0x00006707) list_single_heading_pane_fp_g3

0x0002,

0xa649,	// (0x0000a649) list_single_heading_pane_fp_g_ParamLimits

0xa649,	// (0x0000a649) list_single_heading_pane_fp_g

0x68b0,	// (0x000068b0) list_single_heading_pane_fp_t1_ParamLimits

0x68b0,	// (0x000068b0) list_single_heading_pane_fp_t1

0x68c2,	// (0x000068c2) list_single_heading_pane_fp_t2_ParamLimits

0x68c2,	// (0x000068c2) list_single_heading_pane_fp_t2

0x0001,

0xa650,	// (0x0000a650) list_single_heading_pane_fp_t_ParamLimits

0xa650,	// (0x0000a650) list_single_heading_pane_fp_t

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

0xa5c4,	// (0x0000a5c4) fep_hwr_candidate_pane_g_ParamLimits

0xa5c4,	// (0x0000a5c4) fep_hwr_candidate_pane_g

0x6184,	// (0x00006184) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6184,	// (0x00006184) fep_vkb_candidate_drop_down_list_pane

0x6553,	// (0x00006553) fep_vkb_candidate_pane_g3

0x655b,	// (0x0000655b) fep_vkb_candidate_pane_g4

0x0002,

0xa5f1,	// (0x0000a5f1) fep_vkb_candidate_pane_g

0x626b,	// (0x0000626b) cell_hwr_candidate_pane_g1_ParamLimits

0x65c2,	// (0x000065c2) cell_hwr_candidate_pane_g3_ParamLimits

0x65c2,	// (0x000065c2) cell_hwr_candidate_pane_g3

0x65e3,	// (0x000065e3) cell_hwr_candidate_pane_g4_ParamLimits

0x65e3,	// (0x000065e3) cell_hwr_candidate_pane_g4

0x0002,

0xa60b,	// (0x0000a60b) cell_hwr_candidate_pane_g_ParamLimits

0xa60b,	// (0x0000a60b) cell_hwr_candidate_pane_g

0x6621,	// (0x00006621) cell_vkb_candidate_pane_g3_ParamLimits

0x6621,	// (0x00006621) cell_vkb_candidate_pane_g3

0x663c,	// (0x0000663c) cell_vkb_candidate_pane_g4_ParamLimits

0x663c,	// (0x0000663c) cell_vkb_candidate_pane_g4

0x68d8,	// (0x000068d8) cell_app_pane_cp2_g1_ParamLimits

0x68d8,	// (0x000068d8) cell_app_pane_cp2_g1

0x68f6,	// (0x000068f6) cell_app_pane_cp2_g2_ParamLimits

0x68f6,	// (0x000068f6) cell_app_pane_cp2_g2

0x0001,

0xa655,	// (0x0000a655) cell_app_pane_cp2_g_ParamLimits

0xa655,	// (0x0000a655) cell_app_pane_cp2_g

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

0xa65a,	// (0x0000a65a) fep_hwr_candidate_drop_down_list_pane_g

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

0xa661,	// (0x0000a661) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa661,	// (0x0000a661) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcc1c,	// (0x0000cc1c) cell_vkb_candidate_pane_cp1_ParamLimits

0xcc1c,	// (0x0000cc1c) cell_vkb_candidate_pane_cp1

0x626b,	// (0x0000626b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x626b,	// (0x0000626b) fep_vkb_candidate_drop_down_list_pane_g1

0x6932,	// (0x00006932) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6932,	// (0x00006932) fep_vkb_candidate_drop_down_list_pane_g2

0x693f,	// (0x0000693f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x693f,	// (0x0000693f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa65a,	// (0x0000a65a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa65a,	// (0x0000a65a) fep_vkb_candidate_drop_down_list_pane_g

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

0xa672,	// (0x0000a672) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa672,	// (0x0000a672) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xab77,	// (0x0000ab77) title_pane_g1_ParamLimits

0xab8e,	// (0x0000ab8e) title_pane_g2_ParamLimits

0xe71b,	// (0x0000e71b) title_pane_g_ParamLimits

0x1b1f,	// (0x00001b1f) aid_call2_pane

0x1b27,	// (0x00001b27) aid_call_pane

0x1b2f,	// (0x00001b2f) popup_clock_analogue_window_g1

0x1b2f,	// (0x00001b2f) popup_clock_analogue_window_g2

0x1b37,	// (0x00001b37) popup_clock_analogue_window_g3

0x1b40,	// (0x00001b40) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0xa1a8,	// (0x0000a1a8) popup_clock_analogue_window_g

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

0xa1b3,	// (0x0000a1b3) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0xa1b3,	// (0x0000a1b3) clock_digital_separator_pane_g

0xbf54,	// (0x0000bf54) aid_fill_nsta_ParamLimits

0xc06b,	// (0x0000c06b) indicator_nsta_pane_ParamLimits

0x2fe6,	// (0x00002fe6) popup_clock_analogue_window

0x2fe6,	// (0x00002fe6) popup_clock_digital_window

0x1523,	// (0x00001523) grid_indicator_nsta_pane_ParamLimits

0x586d,	// (0x0000586d) clock_nsta_pane_t2

0x0001,

0xa544,	// (0x0000a544) clock_nsta_pane_t

0x1908,	// (0x00001908) aid_size_max_handle

0xb4ef,	// (0x0000b4ef) aid_size_min_handle

0x232f,	// (0x0000232f) editor_scroll_pane

0x6a7f,	// (0x00006a7f) ex_editor_pane

0x14d2,	// (0x000014d2) scroll_pane_cp13

0x0c91,	// (0x00000c91) scroll_pane_cp14

0x1b7d,	// (0x00001b7d) scroll_pane_cp36

0xb597,	// (0x0000b597) list_single_graphic_hl_pane_cp2_ParamLimits

0xb597,	// (0x0000b597) list_single_graphic_hl_pane_cp2

0xc86f,	// (0x0000c86f) list_single_graphic_hl_pane_ParamLimits

0xc86f,	// (0x0000c86f) list_single_graphic_hl_pane

0x6a87,	// (0x00006a87) aid_size_min_hl_cp1

0x6a90,	// (0x00006a90) list_highlight_pane_cp34_ParamLimits

0x6a90,	// (0x00006a90) list_highlight_pane_cp34

0x6aa1,	// (0x00006aa1) list_single_graphic_hl_pane_g1_ParamLimits

0x6aa1,	// (0x00006aa1) list_single_graphic_hl_pane_g1

0xcc3c,	// (0x0000cc3c) list_single_graphic_hl_pane_g2_ParamLimits

0xcc3c,	// (0x0000cc3c) list_single_graphic_hl_pane_g2

0xcc3c,	// (0x0000cc3c) list_single_graphic_hl_pane_g3_ParamLimits

0xcc3c,	// (0x0000cc3c) list_single_graphic_hl_pane_g3

0x0ca5,	// (0x00000ca5) list_single_graphic_hl_pane_g4_ParamLimits

0x0ca5,	// (0x00000ca5) list_single_graphic_hl_pane_g4

0x1234,	// (0x00001234) list_single_graphic_hl_pane_g5_ParamLimits

0x1234,	// (0x00001234) list_single_graphic_hl_pane_g5

0x0004,

0xe932,	// (0x0000e932) list_single_graphic_hl_pane_g_ParamLimits

0xe932,	// (0x0000e932) list_single_graphic_hl_pane_g

0xcc48,	// (0x0000cc48) list_single_graphic_hl_pane_t1_ParamLimits

0xcc48,	// (0x0000cc48) list_single_graphic_hl_pane_t1

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

0xb852,	// (0x0000b852) control_pane_g4_ParamLimits

0xb852,	// (0x0000b852) control_pane_g4

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

0xa612,	// (0x0000a612) popup_preview_fixed_window_g_ParamLimits

0xa612,	// (0x0000a612) popup_preview_fixed_window_g

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

0xcc5e,	// (0x0000cc5e) list_text_info_pane_t1_ParamLimits

0xcc5e,	// (0x0000cc5e) list_text_info_pane_t1

0xb9dd,	// (0x0000b9dd) popup_fast_swap2_window_ParamLimits

0xb9dd,	// (0x0000b9dd) popup_fast_swap2_window

0x6b66,	// (0x00006b66) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x3821,	// (0x00003821) heading_pane_cp2

0x0a13,	// (0x00000a13) listscroll_fast2_pane

0x6b70,	// (0x00006b70) grid_fast2_pane

0x6b78,	// (0x00006b78) listscroll_fast2_pane_g1

0x6b80,	// (0x00006b80) listscroll_fast2_pane_g2

0x0001,

0xa68e,	// (0x0000a68e) listscroll_fast2_pane_g

0x14d2,	// (0x000014d2) scroll_pane_cp26

0x6b88,	// (0x00006b88) cell_fast2_pane_ParamLimits

0x6b88,	// (0x00006b88) cell_fast2_pane

0x6b9e,	// (0x00006b9e) cell_fast2_pane_g1

0x6ba7,	// (0x00006ba7) cell_fast2_pane_g2

0x6bb0,	// (0x00006bb0) cell_fast2_pane_g3

0x0002,

0xa693,	// (0x0000a693) cell_fast2_pane_g

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

0xa69a,	// (0x0000a69a) eswt_control_pane_g_ParamLimits

0xa69a,	// (0x0000a69a) eswt_control_pane_g

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

0xa6a3,	// (0x0000a6a3) control_button_pane_g_ParamLimits

0xa6a3,	// (0x0000a6a3) control_button_pane_g

0x6c5d,	// (0x00006c5d) control_button_pane_t1

0x6c6b,	// (0x00006c6b) control_button_pane_t2

0x0001,

0xa6aa,	// (0x0000a6aa) control_button_pane_t

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

0xa30a,	// (0x0000a30a) bg_button_pane_g

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

0xa6af,	// (0x0000a6af) separator_horizontal_pane_g

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

0xa6b6,	// (0x0000a6b6) separator_vertical_pane_g

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy4_ParamLimits

0x6bfd,	// (0x00006bfd) eswt_control_pane_g1_copy4

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy4_ParamLimits

0x6c0a,	// (0x00006c0a) eswt_control_pane_g2_copy4

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy4_ParamLimits

0x6c17,	// (0x00006c17) eswt_control_pane_g3_copy4

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy4_ParamLimits

0x6c24,	// (0x00006c24) eswt_control_pane_g4_copy4

0xcc79,	// (0x0000cc79) eswt_ctrl_combo_button_pane

0xcc81,	// (0x0000cc81) eswt_ctrl_input_pane

0xcc89,	// (0x0000cc89) popup_choice_list_window_cp70

0xcc91,	// (0x0000cc91) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x5df2,	// (0x00005df2) bg_button_pane_cp70_ParamLimits

0x5df2,	// (0x00005df2) bg_button_pane_cp70

0xcc9f,	// (0x0000cc9f) eswt_ctrl_combo_button_pane_g1

0x6ce5,	// (0x00006ce5) wait_bar_pane_cp70

0x33f3,	// (0x000033f3) bg_popup_window_pane_cp70_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_window_pane_cp70

0x6ced,	// (0x00006ced) popup_eswt_tasktip_window_t1

0x6d03,	// (0x00006d03) wait_bar_pane_cp71_ParamLimits

0x6d03,	// (0x00006d03) wait_bar_pane_cp71

0x6d0f,	// (0x00006d0f) grid_eswt_app_pane

0x196c,	// (0x0000196c) scroll_pane_cp70

0xcca7,	// (0x0000cca7) cell_eswt_app_pane_ParamLimits

0xcca7,	// (0x0000cca7) cell_eswt_app_pane

0xcccf,	// (0x0000cccf) cell_eswt_app_pane_g1_ParamLimits

0xcccf,	// (0x0000cccf) cell_eswt_app_pane_g1

0xccfe,	// (0x0000ccfe) cell_eswt_app_pane_g2_ParamLimits

0xccfe,	// (0x0000ccfe) cell_eswt_app_pane_g2

0x0001,

0xe93d,	// (0x0000e93d) cell_eswt_app_pane_g_ParamLimits

0xe93d,	// (0x0000e93d) cell_eswt_app_pane_g

0xcd27,	// (0x0000cd27) cell_eswt_app_pane_t1_ParamLimits

0xcd27,	// (0x0000cd27) cell_eswt_app_pane_t1

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

0xa6c2,	// (0x0000a6c2) volume_small2_pane_g

0x63ad,	// (0x000063ad) fep_vkb_top_text_pane_g1_ParamLimits

0xcbc4,	// (0x0000cbc4) fep_vkb_top_text_pane_t1_ParamLimits

0x66db,	// (0x000066db) popup_preview_fixed_window_g3_ParamLimits

0x66db,	// (0x000066db) popup_preview_fixed_window_g3

0xbefd,	// (0x0000befd) popup_toolbar_trans_pane

0xc6e1,	// (0x0000c6e1) aid_height_set_list_ParamLimits

0x4929,	// (0x00004929) aid_size_parent_ParamLimits

0x289b,	// (0x0000289b) list_highlight_pane_cp2_ParamLimits

0x0ca5,	// (0x00000ca5) set_content_pane_g1_ParamLimits

0xc882,	// (0x0000c882) list_single_image_pane_ParamLimits

0xc882,	// (0x0000c882) list_single_image_pane

0xcd59,	// (0x0000cd59) aid_size_cell_image_ParamLimits

0xcd59,	// (0x0000cd59) aid_size_cell_image

0xcd66,	// (0x0000cd66) grid_single_image_pane_ParamLimits

0xcd66,	// (0x0000cd66) grid_single_image_pane

0x0ca5,	// (0x00000ca5) list_single_image_pane_g1_ParamLimits

0x0ca5,	// (0x00000ca5) list_single_image_pane_g1

0x1234,	// (0x00001234) list_single_image_pane_g2_ParamLimits

0x1234,	// (0x00001234) list_single_image_pane_g2

0x0001,

0xa6d7,	// (0x0000a6d7) list_single_image_pane_g_ParamLimits

0xa6d7,	// (0x0000a6d7) list_single_image_pane_g

0x4aac,	// (0x00004aac) list_single_image_pane_t1_ParamLimits

0x4aac,	// (0x00004aac) list_single_image_pane_t1

0xcd72,	// (0x0000cd72) cell_image_list_pane_ParamLimits

0xcd72,	// (0x0000cd72) cell_image_list_pane

0xcd86,	// (0x0000cd86) cell_image_list_pane_g1

0xcd8f,	// (0x0000cd8f) cell_image_list_pane_g2

0x0001,

0xe942,	// (0x0000e942) cell_image_list_pane_g

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

0xa6e1,	// (0x0000a6e1) bg_tb_trans_pane_g

0x6ea5,	// (0x00006ea5) cell_toolbar_trans_pane_ParamLimits

0x6ea5,	// (0x00006ea5) cell_toolbar_trans_pane

0x5e2d,	// (0x00005e2d) cell_toolbar_trans_pane_g1

0xcac1,	// (0x0000cac1) list_form2_midp_pane_t1

0xcacf,	// (0x0000cacf) list_form2_midp_pane_t2

0x0001,

0xe90d,	// (0x0000e90d) list_form2_midp_pane_t

0x5a92,	// (0x00005a92) scroll_pane_cp51_ParamLimits

0x5c77,	// (0x00005c77) form2_midp_wait_pane_g1

0x5c80,	// (0x00005c80) form2_midp_wait_pane_g2

0x5c89,	// (0x00005c89) form2_midp_wait_pane_g3

0x0002,

0xa59f,	// (0x0000a59f) form2_midp_wait_pane_g

0x0474,	// (0x00000474) list_highlight_pane_cp21_ParamLimits

0x5cc7,	// (0x00005cc7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5cd6,	// (0x00005cd6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4af3,	// (0x00004af3) list_single_2graphic_im_pane_ParamLimits

0x4af3,	// (0x00004af3) list_single_2graphic_im_pane

0xcd98,	// (0x0000cd98) list_single_2graphic_im_pane_g1_ParamLimits

0xcd98,	// (0x0000cd98) list_single_2graphic_im_pane_g1

0xcda9,	// (0x0000cda9) list_single_2graphic_im_pane_g2_ParamLimits

0xcda9,	// (0x0000cda9) list_single_2graphic_im_pane_g2

0xcdb5,	// (0x0000cdb5) list_single_2graphic_im_pane_g3_ParamLimits

0xcdb5,	// (0x0000cdb5) list_single_2graphic_im_pane_g3

0x0003,

0xe947,	// (0x0000e947) list_single_2graphic_im_pane_g_ParamLimits

0xe947,	// (0x0000e947) list_single_2graphic_im_pane_g

0xcdc9,	// (0x0000cdc9) list_single_2graphic_im_pane_t1_ParamLimits

0xcdc9,	// (0x0000cdc9) list_single_2graphic_im_pane_t1

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

0xa622,	// (0x0000a622) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa622,	// (0x0000a622) list_single_graphic_2heading_pane_fp_g

0x6f39,	// (0x00006f39) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6f39,	// (0x00006f39) list_single_graphic_2heading_pane_fp_t1

0x6776,	// (0x00006776) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6776,	// (0x00006776) list_single_graphic_2heading_pane_fp_t2

0x6f4f,	// (0x00006f4f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6f4f,	// (0x00006f4f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xa6fd,	// (0x0000a6fd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xa6fd,	// (0x0000a6fd) list_single_graphic_2heading_pane_fp_t

0x604e,	// (0x0000604e) fep_hwr_write_pane_g5_ParamLimits

0x604e,	// (0x0000604e) fep_hwr_write_pane_g5

0x605a,	// (0x0000605a) fep_hwr_write_pane_g6_ParamLimits

0x605a,	// (0x0000605a) fep_hwr_write_pane_g6

0x6bd0,	// (0x00006bd0) eswt_shell_pane_ParamLimits

0x33f3,	// (0x000033f3) bg_popup_window_pane_cp18_ParamLimits

0x4817,	// (0x00004817) heading_pane_cp70

0x6ced,	// (0x00006ced) popup_eswt_tasktip_window_t1_ParamLimits

0xbf98,	// (0x0000bf98) aid_touch_tab_arrow_left

0xbfac,	// (0x0000bfac) aid_touch_tab_arrow_right

0xabad,	// (0x0000abad) title_pane_g3_ParamLimits

0xabad,	// (0x0000abad) title_pane_g3

0x110c,	// (0x0000110c) set_value_pane_g1

0xbefd,	// (0x0000befd) popup_toolbar_trans_pane_ParamLimits

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

0xa709,	// (0x0000a709) popup_note2_window_t_ParamLimits

0xa709,	// (0x0000a709) popup_note2_window_t

0x7094,	// (0x00007094) popup_note2_image_window_g1_ParamLimits

0x7094,	// (0x00007094) popup_note2_image_window_g1

0x70a0,	// (0x000070a0) popup_note2_image_window_g2_ParamLimits

0x70a0,	// (0x000070a0) popup_note2_image_window_g2

0x0001,

0xa714,	// (0x0000a714) popup_note2_image_window_g_ParamLimits

0xa714,	// (0x0000a714) popup_note2_image_window_g

0x70b2,	// (0x000070b2) popup_note2_image_window_t1_ParamLimits

0x70b2,	// (0x000070b2) popup_note2_image_window_t1

0x70ca,	// (0x000070ca) popup_note2_image_window_t2_ParamLimits

0x70ca,	// (0x000070ca) popup_note2_image_window_t2

0x70e2,	// (0x000070e2) popup_note2_image_window_t3_ParamLimits

0x70e2,	// (0x000070e2) popup_note2_image_window_t3

0x0002,

0xa719,	// (0x0000a719) popup_note2_image_window_t_ParamLimits

0xa719,	// (0x0000a719) popup_note2_image_window_t

0x3a45,	// (0x00003a45) popup_note2_wait_window_g1_ParamLimits

0x3a45,	// (0x00003a45) popup_note2_wait_window_g1

0x3a51,	// (0x00003a51) popup_note2_wait_window_g2_ParamLimits

0x3a51,	// (0x00003a51) popup_note2_wait_window_g2

0x3a5d,	// (0x00003a5d) popup_note2_wait_window_g3_ParamLimits

0x3a5d,	// (0x00003a5d) popup_note2_wait_window_g3

0x0002,

0xa2ec,	// (0x0000a2ec) popup_note2_wait_window_g_ParamLimits

0xa2ec,	// (0x0000a2ec) popup_note2_wait_window_g

0x70fe,	// (0x000070fe) popup_note2_wait_window_t1_ParamLimits

0x70fe,	// (0x000070fe) popup_note2_wait_window_t1

0x711c,	// (0x0000711c) popup_note2_wait_window_t2_ParamLimits

0x711c,	// (0x0000711c) popup_note2_wait_window_t2

0x713a,	// (0x0000713a) popup_note2_wait_window_t3_ParamLimits

0x713a,	// (0x0000713a) popup_note2_wait_window_t3

0x714c,	// (0x0000714c) popup_note2_wait_window_t4_ParamLimits

0x714c,	// (0x0000714c) popup_note2_wait_window_t4

0x0003,

0xa720,	// (0x0000a720) popup_note2_wait_window_t_ParamLimits

0xa720,	// (0x0000a720) popup_note2_wait_window_t

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

0xa729,	// (0x0000a729) popup_snote2_single_text_window_t_ParamLimits

0xa729,	// (0x0000a729) popup_snote2_single_text_window_t

0x72d8,	// (0x000072d8) popup_snote2_single_graphic_window_g1_ParamLimits

0x72d8,	// (0x000072d8) popup_snote2_single_graphic_window_g1

0x7300,	// (0x00007300) popup_snote2_single_graphic_window_g2_ParamLimits

0x7300,	// (0x00007300) popup_snote2_single_graphic_window_g2

0x0001,

0xa734,	// (0x0000a734) popup_snote2_single_graphic_window_g_ParamLimits

0xa734,	// (0x0000a734) popup_snote2_single_graphic_window_g

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

0xa739,	// (0x0000a739) popup_snote2_single_graphic_window_t_ParamLimits

0xa739,	// (0x0000a739) popup_snote2_single_graphic_window_t

0x5920,	// (0x00005920) clock_nsta_pane_cp2_t1

0x5920,	// (0x00005920) clock_nsta_pane_cp2_t2

0x0001,

0xa560,	// (0x0000a560) clock_nsta_pane_cp2_t

0x1228,	// (0x00001228) form_field_data_wide_pane_g1_ParamLimits

0x0ca5,	// (0x00000ca5) form_field_data_wide_pane_g2_ParamLimits

0x0ca5,	// (0x00000ca5) form_field_data_wide_pane_g2

0x1234,	// (0x00001234) form_field_data_wide_pane_g3_ParamLimits

0x1234,	// (0x00001234) form_field_data_wide_pane_g3

0x0002,

0xa12b,	// (0x0000a12b) form_field_data_wide_pane_g_ParamLimits

0xa12b,	// (0x0000a12b) form_field_data_wide_pane_g

0xca0a,	// (0x0000ca0a) grid_touch_3_pane_ParamLimits

0xca0a,	// (0x0000ca0a) grid_touch_3_pane

0xcdfa,	// (0x0000cdfa) cell_touch_3_pane_ParamLimits

0xcdfa,	// (0x0000cdfa) cell_touch_3_pane

0x5e2d,	// (0x00005e2d) cell_touch_3_pane_g1

0x5e2d,	// (0x00005e2d) cell_touch_3_pane_g2

0x0001,

0xa5e5,	// (0x0000a5e5) cell_touch_3_pane_g

0x0881,	// (0x00000881) cont_query_data_pane

0x0889,	// (0x00000889) cont_query_data_pane_cp1

0x73ed,	// (0x000073ed) button_value_adjust_pane_cp7

0x73f5,	// (0x000073f5) query_popup_pane_cp3

0x1c81,	// (0x00001c81) bg_popup_sub_pane_cp22_ParamLimits

0x1c97,	// (0x00001c97) navi_navi_volume_pane_cp2

0x1caf,	// (0x00001caf) popup_side_volume_key_window_g2

0x1cbb,	// (0x00001cbb) popup_side_volume_key_window_g3

0x0002,

0xa1c1,	// (0x0000a1c1) popup_side_volume_key_window_g

0x1cd5,	// (0x00001cd5) popup_side_volume_key_window_t2

0x0001,

0xa1c8,	// (0x0000a1c8) popup_side_volume_key_window_t

0x211e,	// (0x0000211e) popup_side_volume_key_window_ParamLimits

0xb050,	// (0x0000b050) list_double_graphic_pane_g4_ParamLimits

0xb050,	// (0x0000b050) list_double_graphic_pane_g4

0xc85a,	// (0x0000c85a) list_single_2heading_msg_pane_ParamLimits

0xc85a,	// (0x0000c85a) list_single_2heading_msg_pane

0xce41,	// (0x0000ce41) list_single_2heading_msg_pane_g1_ParamLimits

0xce41,	// (0x0000ce41) list_single_2heading_msg_pane_g1

0xce4d,	// (0x0000ce4d) list_single_2heading_msg_pane_g2_ParamLimits

0xce4d,	// (0x0000ce4d) list_single_2heading_msg_pane_g2

0xce60,	// (0x0000ce60) list_single_2heading_msg_pane_g3_ParamLimits

0xce60,	// (0x0000ce60) list_single_2heading_msg_pane_g3

0x7446,	// (0x00007446) list_single_2heading_msg_pane_g4_ParamLimits

0x7446,	// (0x00007446) list_single_2heading_msg_pane_g4

0x0003,

0xe950,	// (0x0000e950) list_single_2heading_msg_pane_g_ParamLimits

0xe950,	// (0x0000e950) list_single_2heading_msg_pane_g

0xce6c,	// (0x0000ce6c) list_single_2heading_msg_pane_t1_ParamLimits

0xce6c,	// (0x0000ce6c) list_single_2heading_msg_pane_t1

0xce94,	// (0x0000ce94) list_single_2heading_msg_pane_t2_ParamLimits

0xce94,	// (0x0000ce94) list_single_2heading_msg_pane_t2

0xceff,	// (0x0000ceff) list_single_2heading_msg_pane_t3_ParamLimits

0xceff,	// (0x0000ceff) list_single_2heading_msg_pane_t3

0x74ee,	// (0x000074ee) list_single_2heading_msg_pane_t4_ParamLimits

0x74ee,	// (0x000074ee) list_single_2heading_msg_pane_t4

0x0003,

0xe959,	// (0x0000e959) list_single_2heading_msg_pane_t_ParamLimits

0xe959,	// (0x0000e959) list_single_2heading_msg_pane_t

0x03c8,	// (0x000003c8) title_pane_g4_ParamLimits

0x03c8,	// (0x000003c8) title_pane_g4

0x1715,	// (0x00001715) title_pane_stacon_g3_ParamLimits

0x1715,	// (0x00001715) title_pane_stacon_g3

0x6efc,	// (0x00006efc) list_single_2graphic_im_pane_g4_ParamLimits

0x6efc,	// (0x00006efc) list_single_2graphic_im_pane_g4

0x458b,	// (0x0000458b) popup_side_volume_key_window_cp

0x4edf,	// (0x00004edf) main_idle_act2_pane_t1

0x32b1,	// (0x000032b1) toolbar_button_pane_g10

0xaf3d,	// (0x0000af3d) popup_toolbar_window_cp1

0x5911,	// (0x00005911) clock_nsta_pane_cp_t1

0x5911,	// (0x00005911) clock_nsta_pane_cp_t2

0x0001,

0xa55b,	// (0x0000a55b) clock_nsta_pane_cp_t

0x1c97,	// (0x00001c97) navi_navi_volume_pane_cp2_ParamLimits

0x1ca3,	// (0x00001ca3) popup_side_volume_key_window_g1_ParamLimits

0x1caf,	// (0x00001caf) popup_side_volume_key_window_g2_ParamLimits

0x1cbb,	// (0x00001cbb) popup_side_volume_key_window_g3_ParamLimits

0xa1c1,	// (0x0000a1c1) popup_side_volume_key_window_g_ParamLimits

0x5e94,	// (0x00005e94) fep_hwr_aid_pane

0x5f35,	// (0x00005f35) bg_fep_hwr_top_pane_g4_ParamLimits

0x5f55,	// (0x00005f55) fep_hwr_top_pane_g1_ParamLimits

0x5f67,	// (0x00005f67) fep_hwr_top_pane_g2_ParamLimits

0x5f79,	// (0x00005f79) fep_hwr_top_pane_g3_ParamLimits

0xa5b0,	// (0x0000a5b0) fep_hwr_top_pane_g_ParamLimits

0x5f8e,	// (0x00005f8e) fep_hwr_top_text_pane_ParamLimits

0x4356,	// (0x00004356) aid_touch_tab_arrow_arrow_2

0x435f,	// (0x0000435f) aid_touch_tab_arrow_left_2

0x5ea8,	// (0x00005ea8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5edb,	// (0x00005edb) fep_hwr_prediction_pane

0x61dd,	// (0x000061dd) fep_vkb_prediction_pane

0xcba4,	// (0x0000cba4) fep_vkb_side_pane_g3_ParamLimits

0xcba4,	// (0x0000cba4) fep_vkb_side_pane_g3

0x626b,	// (0x0000626b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6932,	// (0x00006932) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x693f,	// (0x0000693f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa65a,	// (0x0000a65a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7513,	// (0x00007513) fep_hwr_prediction_pane_g1

0x751d,	// (0x0000751d) fep_hwr_prediction_pane_g2

0x7525,	// (0x00007525) fep_hwr_prediction_pane_g3

0x752d,	// (0x0000752d) fep_hwr_prediction_pane_g4

0x0003,

0xa756,	// (0x0000a756) fep_hwr_prediction_pane_g

0x7513,	// (0x00007513) fep_vkb_prediction_pane_g1

0x7535,	// (0x00007535) fep_vkb_prediction_pane_g2

0x753d,	// (0x0000753d) fep_vkb_prediction_pane_g3

0x7545,	// (0x00007545) fep_vkb_prediction_pane_g4

0x0003,

0xa75f,	// (0x0000a75f) fep_vkb_prediction_pane_g

0x489d,	// (0x0000489d) slider_set_pane_g3

0x48b1,	// (0x000048b1) slider_set_pane_g4

0x48c9,	// (0x000048c9) slider_set_pane_g5

0x489d,	// (0x0000489d) slider_set_pane_g6

0xc6ab,	// (0x0000c6ab) slider_set_pane_g7

0x4a70,	// (0x00004a70) slider_form_pane_g3

0x4a79,	// (0x00004a79) slider_form_pane_g4

0x4a81,	// (0x00004a81) slider_form_pane_g5

0x4a70,	// (0x00004a70) slider_form_pane_g6

0xc813,	// (0x0000c813) slider_form_pane_g7

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

0xa52d,	// (0x0000a52d) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x754d,	// (0x0000754d) ai3_links_pane

0xcf6d,	// (0x0000cf6d) popup_ai3_data_window_ParamLimits

0xcf6d,	// (0x0000cf6d) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xcf85,	// (0x0000cf85) cell_ai3_links_pane_ParamLimits

0xcf85,	// (0x0000cf85) cell_ai3_links_pane

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

0xa768,	// (0x0000a768) list_single_ai3_gene_pane_g

0x7628,	// (0x00007628) list_double_ai3_gene_pane_g1_ParamLimits

0x7628,	// (0x00007628) list_double_ai3_gene_pane_g1

0x7634,	// (0x00007634) list_double_ai3_gene_pane_t1_ParamLimits

0x7634,	// (0x00007634) list_double_ai3_gene_pane_t1

0x7650,	// (0x00007650) list_double_ai3_gene_pane_t2_ParamLimits

0x7650,	// (0x00007650) list_double_ai3_gene_pane_t2

0x7665,	// (0x00007665) list_double_ai3_gene_pane_t3_ParamLimits

0x7665,	// (0x00007665) list_double_ai3_gene_pane_t3

0x0002,

0xa76d,	// (0x0000a76d) list_double_ai3_gene_pane_t_ParamLimits

0xa76d,	// (0x0000a76d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7406,	// (0x00007406) aid_size_min_col_2

0xce2d,	// (0x0000ce2d) aid_size_min_msg_ParamLimits

0xce2d,	// (0x0000ce2d) aid_size_min_msg

0xcbb8,	// (0x0000cbb8) fep_vkb_top_text_pane_g2_ParamLimits

0xcbb8,	// (0x0000cbb8) fep_vkb_top_text_pane_g2

0x0001,

0xe92d,	// (0x0000e92d) fep_vkb_top_text_pane_g_ParamLimits

0xe92d,	// (0x0000e92d) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x7682,	// (0x00007682) grid_hc_apps_pane_ParamLimits

0x7682,	// (0x00007682) grid_hc_apps_pane

0x7691,	// (0x00007691) list_hc_apps_pane

0x7699,	// (0x00007699) scroll_pane_cp37_ParamLimits

0x7699,	// (0x00007699) scroll_pane_cp37

0xcf9b,	// (0x0000cf9b) cell_hc_apps_pane_ParamLimits

0xcf9b,	// (0x0000cf9b) cell_hc_apps_pane

0xd035,	// (0x0000d035) cell_hc_apps_pane_g1_ParamLimits

0xd035,	// (0x0000d035) cell_hc_apps_pane_g1

0x7760,	// (0x00007760) cell_hc_apps_pane_g2_ParamLimits

0x7760,	// (0x00007760) cell_hc_apps_pane_g2

0x777c,	// (0x0000777c) cell_hc_apps_pane_g3_ParamLimits

0x777c,	// (0x0000777c) cell_hc_apps_pane_g3

0x0002,

0xe962,	// (0x0000e962) cell_hc_apps_pane_g_ParamLimits

0xe962,	// (0x0000e962) cell_hc_apps_pane_g

0xd062,	// (0x0000d062) cell_hc_apps_pane_t1_ParamLimits

0xd062,	// (0x0000d062) cell_hc_apps_pane_t1

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10_ParamLimits

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10

0xd0a0,	// (0x0000d0a0) list_single_hc_apps_pane_ParamLimits

0xd0a0,	// (0x0000d0a0) list_single_hc_apps_pane

0xd0cc,	// (0x0000d0cc) list_single_hc_apps_pane_g1

0xd0e5,	// (0x0000d0e5) list_single_hc_apps_pane_g2

0x0001,

0xe969,	// (0x0000e969) list_single_hc_apps_pane_g

0xd0fe,	// (0x0000d0fe) list_single_hc_apps_pane_g2_copy1

0xd11a,	// (0x0000d11a) list_single_hc_apps_pane_t1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_ParamLimits

0xac7a,	// (0x0000ac7a) setting_slider_pane_t2_ParamLimits

0xac93,	// (0x0000ac93) setting_slider_pane_t3_ParamLimits

0xe72b,	// (0x0000e72b) setting_slider_pane_t_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_ParamLimits

0x26f3,	// (0x000026f3) control_pane_g5_ParamLimits

0x26f3,	// (0x000026f3) control_pane_g5

0x4884,	// (0x00004884) slider_set_pane_g1_ParamLimits

0x4891,	// (0x00004891) slider_set_pane_g2_ParamLimits

0x489d,	// (0x0000489d) slider_set_pane_g3_ParamLimits

0x48b1,	// (0x000048b1) slider_set_pane_g4_ParamLimits

0x48c9,	// (0x000048c9) slider_set_pane_g5_ParamLimits

0x489d,	// (0x0000489d) slider_set_pane_g6_ParamLimits

0xc6ab,	// (0x0000c6ab) slider_set_pane_g7_ParamLimits

0xe8a9,	// (0x0000e8a9) slider_set_pane_g_ParamLimits

0x0474,	// (0x00000474) navi_icon_text_pane_ParamLimits

0xbf6a,	// (0x0000bf6a) aid_fill_nsta_2_ParamLimits

0xbf98,	// (0x0000bf98) aid_touch_tab_arrow_left_ParamLimits

0xbfac,	// (0x0000bfac) aid_touch_tab_arrow_right_ParamLimits

0xc048,	// (0x0000c048) clock_nsta_pane_ParamLimits

0x4338,	// (0x00004338) navi_icon_pane_g1_ParamLimits

0x4344,	// (0x00004344) navi_text_pane_t1_ParamLimits

0x5a08,	// (0x00005a08) navi_icon_text_pane_g1_ParamLimits

0x5a14,	// (0x00005a14) navi_icon_text_pane_t1_ParamLimits

0xd0cc,	// (0x0000d0cc) list_single_hc_apps_pane_g1_ParamLimits

0xd0e5,	// (0x0000d0e5) list_single_hc_apps_pane_g2_ParamLimits

0xe969,	// (0x0000e969) list_single_hc_apps_pane_g_ParamLimits

0xd0fe,	// (0x0000d0fe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd11a,	// (0x0000d11a) list_single_hc_apps_pane_t1_ParamLimits

0xaac5,	// (0x0000aac5) popup_toolbar2_fixed_window_ParamLimits

0xaac5,	// (0x0000aac5) popup_toolbar2_fixed_window

0xbef5,	// (0x0000bef5) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x7888,	// (0x00007888) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x7888,	// (0x00007888) grid_toolbar2_fixed_pane

0xd148,	// (0x0000d148) cell_toolbar2_fixed_pane_ParamLimits

0xd148,	// (0x0000d148) cell_toolbar2_fixed_pane

0xd163,	// (0x0000d163) cell_toolbar2_fixed_pane_g1

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

0xa30a,	// (0x0000a30a) toolbar2_fixed_button_pane_g

0x78b2,	// (0x000078b2) cell_toolbar2_float_pane_ParamLimits

0x78b2,	// (0x000078b2) cell_toolbar2_float_pane

0x78c3,	// (0x000078c3) cell_toolbar2_float_pane_g1

0x78aa,	// (0x000078aa) toolbar2_fixed_button_pane_cp

0xcb6d,	// (0x0000cb6d) fep_vkb_accented_list_pane_ParamLimits

0xcb6d,	// (0x0000cb6d) fep_vkb_accented_list_pane

0x659e,	// (0x0000659e) bg_popup_fep_shadow_pane_g9

0x232f,	// (0x0000232f) bg_popup_fep_shadow_pane_cp3

0x14b9,	// (0x000014b9) list_accented_list_pane

0x78cc,	// (0x000078cc) list_single_accented_list_pane_ParamLimits

0x78cc,	// (0x000078cc) list_single_accented_list_pane

0x232f,	// (0x0000232f) list_highlight_pane_cp10

0x78dd,	// (0x000078dd) list_single_accented_list_pane_t1

0xbe37,	// (0x0000be37) popup_slider_window_ParamLimits

0xbe37,	// (0x0000be37) popup_slider_window

0x73fd,	// (0x000073fd) aid_indentation_list_msg

0xd242,	// (0x0000d242) bg_popup_window_pane_cp19

0x79e1,	// (0x000079e1) popup_slider_window_g1

0x79fd,	// (0x000079fd) popup_slider_window_g2

0x7a19,	// (0x00007a19) popup_slider_window_g3

0x0005,

0xe96e,	// (0x0000e96e) popup_slider_window_g

0x7a75,	// (0x00007a75) popup_slider_window_t1

0x7ae7,	// (0x00007ae7) small_volume_slider_vertical_pane

0x5e2d,	// (0x00005e2d) small_volume_slider_vertical_pane_g1

0x5e2d,	// (0x00005e2d) small_volume_slider_vertical_pane_g2

0x7b03,	// (0x00007b03) small_volume_slider_vertical_pane_g3

0x0002,

0xa792,	// (0x0000a792) small_volume_slider_vertical_pane_g

0xaa49,	// (0x0000aa49) area_side_right_pane_ParamLimits

0xaa49,	// (0x0000aa49) area_side_right_pane

0xd2fa,	// (0x0000d2fa) aid_size_side_button_ParamLimits

0xd2fa,	// (0x0000d2fa) aid_size_side_button

0xd313,	// (0x0000d313) grid_sctrl_middle_pane_ParamLimits

0xd313,	// (0x0000d313) grid_sctrl_middle_pane

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

0xd329,	// (0x0000d329) cell_sctrl_middle_pane_ParamLimits

0xd329,	// (0x0000d329) cell_sctrl_middle_pane

0xd33a,	// (0x0000d33a) aid_touch_sctrl_middle_ParamLimits

0xd33a,	// (0x0000d33a) aid_touch_sctrl_middle

0xd347,	// (0x0000d347) bg_sctrl_middle_pane_ParamLimits

0xd347,	// (0x0000d347) bg_sctrl_middle_pane

0x7c5b,	// (0x00007c5b) cell_sctrl_middle_pane_g1_ParamLimits

0x7c5b,	// (0x00007c5b) cell_sctrl_middle_pane_g1

0xd355,	// (0x0000d355) cell_sctrl_middle_pane_g2_ParamLimits

0xd355,	// (0x0000d355) cell_sctrl_middle_pane_g2

0x0001,

0xe97b,	// (0x0000e97b) cell_sctrl_middle_pane_g_ParamLimits

0xe97b,	// (0x0000e97b) cell_sctrl_middle_pane_g

0x3269,	// (0x00003269) bg_sctrl_middle_pane_g1

0x3271,	// (0x00003271) bg_sctrl_middle_pane_g2

0x3279,	// (0x00003279) bg_sctrl_middle_pane_g3

0x3281,	// (0x00003281) bg_sctrl_middle_pane_g4

0x3289,	// (0x00003289) bg_sctrl_middle_pane_g5

0x3291,	// (0x00003291) bg_sctrl_middle_pane_g6

0x3299,	// (0x00003299) bg_sctrl_middle_pane_g7

0x32a1,	// (0x000032a1) bg_sctrl_middle_pane_g8

0x0007,

0xa7a3,	// (0x0000a7a3) bg_sctrl_middle_pane_g

0x32a9,	// (0x000032a9) bg_sctrl_middle_pane_g8_copy1

0x3269,	// (0x00003269) bg_sctrl_sk_pane_g1

0x3271,	// (0x00003271) bg_sctrl_sk_pane_g2

0x3279,	// (0x00003279) bg_sctrl_sk_pane_g3

0x0008,

0xa30a,	// (0x0000a30a) bg_sctrl_sk_pane_g

0x0c21,	// (0x00000c21) aid_size_touch_scroll_bar

0x3281,	// (0x00003281) bg_sctrl_sk_pane_g4

0x3289,	// (0x00003289) bg_sctrl_sk_pane_g5

0x3291,	// (0x00003291) bg_sctrl_sk_pane_g6

0x3299,	// (0x00003299) bg_sctrl_sk_pane_g7

0x32a1,	// (0x000032a1) bg_sctrl_sk_pane_g8

0x32a9,	// (0x000032a9) bg_sctrl_sk_pane_g9

0x2939,	// (0x00002939) popup_fep_china_hwr2_fs_candidate_window

0xba32,	// (0x0000ba32) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xba32,	// (0x0000ba32) popup_fep_china_hwr2_fs_control_window

0x626b,	// (0x0000626b) sctrl_sk_top_pane_g2

0x0001,

0xa799,	// (0x0000a799) sctrl_sk_top_pane_g

0xd362,	// (0x0000d362) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd362,	// (0x0000d362) aid_fep_china_hwr2_fs_cell

0xd376,	// (0x0000d376) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd376,	// (0x0000d376) bg_popup_fep_shadow_pane_cp4

0xd38d,	// (0x0000d38d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd38d,	// (0x0000d38d) bg_popup_fep_shadow_pane_cp5

0xd39f,	// (0x0000d39f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd39f,	// (0x0000d39f) popup_fep_china_hwr2_fs_control_bar_grid

0xd3b3,	// (0x0000d3b3) popup_fep_china_hwr2_fs_control_funtion_grid

0x7c31,	// (0x00007c31) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7c3b,	// (0x00007c3b) popup_fep_china_hwr2_fs_candidate_grid

0xd3bb,	// (0x0000d3bb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd3bb,	// (0x0000d3bb) cell_fep_china_hwr2_fs_funtion_grid

0x5e2d,	// (0x00005e2d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7c5b,	// (0x00007c5b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7c5b,	// (0x00007c5b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7c69,	// (0x00007c69) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7c69,	// (0x00007c69) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xa7b4,	// (0x0000a7b4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xa7b4,	// (0x0000a7b4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3d3,	// (0x0000d3d3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3d3,	// (0x0000d3d3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3e8,	// (0x0000d3e8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3e8,	// (0x0000d3e8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xe980,	// (0x0000e980) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xe980,	// (0x0000e980) cell_fep_china_hwr2_fs_funtion_grid_t

0x7cb0,	// (0x00007cb0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7cb8,	// (0x00007cb8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7cc0,	// (0x00007cc0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xa7be,	// (0x0000a7be) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7cc8,	// (0x00007cc8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7cc8,	// (0x00007cc8) cell_fep_china_hwr2_fs_candidate_grid

0x7ce1,	// (0x00007ce1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7ce9,	// (0x00007ce9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5e2d,	// (0x00005e2d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5e2d,	// (0x00005e2d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa5e5,	// (0x0000a5e5) cell_fep_china_hwr2_fs_candidate_grid_g

0x7cf1,	// (0x00007cf1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e16,	// (0x00002e16) clock_nsta_pane_cp_24_ParamLimits

0x2e16,	// (0x00002e16) clock_nsta_pane_cp_24

0x2e89,	// (0x00002e89) indicator_nsta_pane_cp_24_ParamLimits

0x2e89,	// (0x00002e89) indicator_nsta_pane_cp_24

0x41a4,	// (0x000041a4) heading_pane_g1

0x0001,

0xa36f,	// (0x0000a36f) heading_pane_g

0xc932,	// (0x0000c932) grid_sct_catagory_button_pane

0x4cf9,	// (0x00004cf9) scroll_pane_cp5_ParamLimits

0x5a9e,	// (0x00005a9e) button_value_adjust_pane_cp5_ParamLimits

0x5a9e,	// (0x00005a9e) button_value_adjust_pane_cp5

0x5b94,	// (0x00005b94) form2_midp_time_pane_ParamLimits

0x7cff,	// (0x00007cff) cell_sct_catagory_button_pane_ParamLimits

0x7cff,	// (0x00007cff) cell_sct_catagory_button_pane

0x5df2,	// (0x00005df2) bg_button_pane_cp01_ParamLimits

0x5df2,	// (0x00005df2) bg_button_pane_cp01

0x5e2d,	// (0x00005e2d) cell_sct_catagory_button_pane_g1

0xbea6,	// (0x0000bea6) popup_tb_extension_window

0xd404,	// (0x0000d404) aid_size_cell_ext_ParamLimits

0xd404,	// (0x0000d404) aid_size_cell_ext

0x0aff,	// (0x00000aff) bg_tb_trans_pane_cp1_ParamLimits

0x0aff,	// (0x00000aff) bg_tb_trans_pane_cp1

0xd42a,	// (0x0000d42a) grid_tb_ext_pane_ParamLimits

0xd42a,	// (0x0000d42a) grid_tb_ext_pane

0xd460,	// (0x0000d460) cell_tb_ext_pane_ParamLimits

0xd460,	// (0x0000d460) cell_tb_ext_pane

0xd484,	// (0x0000d484) cell_tb_ext_pane_g1_ParamLimits

0xd484,	// (0x0000d484) cell_tb_ext_pane_g1

0x7d89,	// (0x00007d89) cell_tb_ext_pane_t1

0x07a5,	// (0x000007a5) list_highlight_pane_cp11_ParamLimits

0x07a5,	// (0x000007a5) list_highlight_pane_cp11

0xaada,	// (0x0000aada) popup_uni_indicator_window_ParamLimits

0xaada,	// (0x0000aada) popup_uni_indicator_window

0x120e,	// (0x0000120e) bg_popup_sub_pane_cp14

0x7da4,	// (0x00007da4) list_uniindi_pane

0x7db0,	// (0x00007db0) uniindi_top_pane

0x07a5,	// (0x000007a5) bg_uniindi_top_pane

0x7dcf,	// (0x00007dcf) uniindi_top_pane_g1

0x7de5,	// (0x00007de5) uniindi_top_pane_g2

0x0003,

0xa7c5,	// (0x0000a7c5) uniindi_top_pane_g

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

0xa7ce,	// (0x0000a7ce) control_bg_pane_g

0x58ac,	// (0x000058ac) cell_indicator_nsta_pane_g1_ParamLimits

0xca37,	// (0x0000ca37) cell_indicator_nsta_pane_g2_ParamLimits

0xe8f8,	// (0x0000e8f8) cell_indicator_nsta_pane_g_ParamLimits

0x5bfc,	// (0x00005bfc) form2_midp_time_pane_t1_ParamLimits

0x5e86,	// (0x00005e86) main_idle_act4_pane_ParamLimits

0x5e86,	// (0x00005e86) main_idle_act4_pane

0xbea6,	// (0x0000bea6) popup_tb_extension_window_ParamLimits

0xd44a,	// (0x0000d44a) tb_ext_find_pane_ParamLimits

0xd44a,	// (0x0000d44a) tb_ext_find_pane

0x7ea7,	// (0x00007ea7) ai_gene_pane_1_cp1

0x246a,	// (0x0000246a) ai_gene_pane_2_cp1

0x7eaf,	// (0x00007eaf) list_single_idle_plugin_calendar_pane

0x7eb8,	// (0x00007eb8) list_single_idle_plugin_notification_pane

0x7ec1,	// (0x00007ec1) list_single_idle_plugin_player_pane

0xd4a1,	// (0x0000d4a1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd4a1,	// (0x0000d4a1) list_single_idle_plugin_shortcut_pane

0xd4c9,	// (0x0000d4c9) main_idle_act4_pane_t1

0xd4df,	// (0x0000d4df) main_idle_act4_pane_t2

0x0001,

0xe985,	// (0x0000e985) main_idle_act4_pane_t

0xd4f5,	// (0x0000d4f5) middle_sk_idle_act4_pane_ParamLimits

0xd4f5,	// (0x0000d4f5) middle_sk_idle_act4_pane

0xd511,	// (0x0000d511) popup_clock_digital_analogue_window_cp2

0xd537,	// (0x0000d537) shortcut_wheel_idle_act4_pane_ParamLimits

0xd537,	// (0x0000d537) shortcut_wheel_idle_act4_pane

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

0xa7d8,	// (0x0000a7d8) shortcut_wheel_idle_act4_pane_g

0x5f35,	// (0x00005f35) middle_sk_idle_act4_pane_g1_ParamLimits

0x5f35,	// (0x00005f35) middle_sk_idle_act4_pane_g1

0xd5b2,	// (0x0000d5b2) middle_sk_idle_act4_pane_g2_ParamLimits

0xd5b2,	// (0x0000d5b2) middle_sk_idle_act4_pane_g2

0x0001,

0xe99a,	// (0x0000e99a) middle_sk_idle_act4_pane_g_ParamLimits

0xe99a,	// (0x0000e99a) middle_sk_idle_act4_pane_g

0xd5ca,	// (0x0000d5ca) middle_sk_idle_act4_pane_t1_ParamLimits

0xd5ca,	// (0x0000d5ca) middle_sk_idle_act4_pane_t1

0xd5f9,	// (0x0000d5f9) grid_ai_shortcut_pane_ParamLimits

0xd5f9,	// (0x0000d5f9) grid_ai_shortcut_pane

0xd616,	// (0x0000d616) list_highlight_pane_cp16_ParamLimits

0xd616,	// (0x0000d616) list_highlight_pane_cp16

0xd623,	// (0x0000d623) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd623,	// (0x0000d623) list_single_idle_plugin_shortcut_pane_g1

0xd62f,	// (0x0000d62f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd62f,	// (0x0000d62f) list_single_idle_plugin_shortcut_pane_g2

0xd64b,	// (0x0000d64b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd64b,	// (0x0000d64b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xe99f,	// (0x0000e99f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xe99f,	// (0x0000e99f) list_single_idle_plugin_shortcut_pane_g

0xd660,	// (0x0000d660) cell_ai_shortcut_pane_ParamLimits

0xd660,	// (0x0000d660) cell_ai_shortcut_pane

0xd676,	// (0x0000d676) cell_ai_shortcut_pane_g1_ParamLimits

0xd676,	// (0x0000d676) cell_ai_shortcut_pane_g1

0x7ea7,	// (0x00007ea7) ai_gene_pane_1_cp2

0x8099,	// (0x00008099) ai_gene_pane_2_cp2

0x80a1,	// (0x000080a1) list_highlight_pane_cp15

0x80aa,	// (0x000080aa) list_single_idle_plugin_calendar_pane_g1

0x80a1,	// (0x000080a1) list_highlight_pane_cp17

0x80b2,	// (0x000080b2) list_single_idle_plugin_calendar_pane_g1_copy1

0x80ba,	// (0x000080ba) list_single_idle_plugin_player_pane_g1

0x4f7f,	// (0x00004f7f) list_single_idle_plugin_player_pane_g2

0x0001,

0xa807,	// (0x0000a807) list_single_idle_plugin_player_pane_g

0x80c2,	// (0x000080c2) list_single_idle_plugin_player_pane_t1

0x80d0,	// (0x000080d0) list_single_idle_plugin_player_pane_t2

0x80de,	// (0x000080de) list_single_idle_plugin_player_pane_t3

0x80ec,	// (0x000080ec) list_single_idle_plugin_player_pane_t4

0x0003,

0xa80c,	// (0x0000a80c) list_single_idle_plugin_player_pane_t

0x80fa,	// (0x000080fa) wait_bar_pane_cp15

0x8102,	// (0x00008102) grid_ai_notification_pane

0x4f7f,	// (0x00004f7f) list_single_idle_plugin_notification_pane_g1

0xd698,	// (0x0000d698) cell_ai_notification_pane_ParamLimits

0xd698,	// (0x0000d698) cell_ai_notification_pane

0x8118,	// (0x00008118) cell_ai_notification_pane_g1

0x8120,	// (0x00008120) cell_ai_notification_pane_t1

0xd6a5,	// (0x0000d6a5) tb_ext_find_button_pane

0xd6ad,	// (0x0000d6ad) tb_ext_find_pane_g1

0xd6b5,	// (0x0000d6b5) tb_ext_find_pane_t1

0x1b2f,	// (0x00001b2f) tb_ext_find_button_pane_g1

0x814c,	// (0x0000814c) tb_ext_find_button_pane_g2

0x0001,

0xa815,	// (0x0000a815) tb_ext_find_button_pane_g

0xd4c9,	// (0x0000d4c9) main_idle_act4_pane_t1_ParamLimits

0xd4df,	// (0x0000d4df) main_idle_act4_pane_t2_ParamLimits

0xe985,	// (0x0000e985) main_idle_act4_pane_t_ParamLimits

0xd511,	// (0x0000d511) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd527,	// (0x0000d527) sat_plugin_idle_act4_pane_ParamLimits

0xd527,	// (0x0000d527) sat_plugin_idle_act4_pane

0xd6c3,	// (0x0000d6c3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd6c3,	// (0x0000d6c3) sat_plugin_idle_act4_pane_t1

0xd6db,	// (0x0000d6db) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd6db,	// (0x0000d6db) sat_plugin_idle_act4_pane_t2

0xd6f3,	// (0x0000d6f3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd6f3,	// (0x0000d6f3) sat_plugin_idle_act4_pane_t3

0xd70b,	// (0x0000d70b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd70b,	// (0x0000d70b) sat_plugin_idle_act4_pane_t4

0x0003,

0xe9a6,	// (0x0000e9a6) sat_plugin_idle_act4_pane_t_ParamLimits

0xe9a6,	// (0x0000e9a6) sat_plugin_idle_act4_pane_t

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

0xa823,	// (0x0000a823) popup_battery_window_t_ParamLimits

0xa823,	// (0x0000a823) popup_battery_window_t

0xb719,	// (0x0000b719) midp_canvas_pane_ParamLimits

0xb76e,	// (0x0000b76e) midp_keypad_pane_ParamLimits

0xb76e,	// (0x0000b76e) midp_keypad_pane

0x289b,	// (0x0000289b) main_midp_pane_ParamLimits

0x592f,	// (0x0000592f) signal_pane_g2_cp_ParamLimits

0xd723,	// (0x0000d723) aid_size_cell_midp_keypad_ParamLimits

0xd723,	// (0x0000d723) aid_size_cell_midp_keypad

0xd741,	// (0x0000d741) midp_keyp_game_grid_pane_ParamLimits

0xd741,	// (0x0000d741) midp_keyp_game_grid_pane

0xd760,	// (0x0000d760) midp_keyp_rocker_pane_ParamLimits

0xd760,	// (0x0000d760) midp_keyp_rocker_pane

0xd7a1,	// (0x0000d7a1) midp_keyp_sk_left_pane_ParamLimits

0xd7a1,	// (0x0000d7a1) midp_keyp_sk_left_pane

0xd7f3,	// (0x0000d7f3) midp_keyp_sk_right_pane_ParamLimits

0xd7f3,	// (0x0000d7f3) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xd83f,	// (0x0000d83f) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xd83f,	// (0x0000d83f) midp_keyp_sk_right_pane_g1

0x5e2d,	// (0x00005e2d) midp_keyp_rocker_pane_g1

0xd848,	// (0x0000d848) keyp_game_cell_pane_ParamLimits

0xd848,	// (0x0000d848) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xd86a,	// (0x0000d86a) keyp_game_cell_pane_g1

0xaa8b,	// (0x0000aa8b) popup_fep_vkb2_window_ParamLimits

0xaa8b,	// (0x0000aa8b) popup_fep_vkb2_window

0xd873,	// (0x0000d873) aid_size_cell_vkb2_ParamLimits

0xd873,	// (0x0000d873) aid_size_cell_vkb2

0xd8a9,	// (0x0000d8a9) popup_fep_vkb2_window_g1_ParamLimits

0xd8a9,	// (0x0000d8a9) popup_fep_vkb2_window_g1

0xd8f9,	// (0x0000d8f9) vkb2_area_bottom_pane_ParamLimits

0xd8f9,	// (0x0000d8f9) vkb2_area_bottom_pane

0xd937,	// (0x0000d937) vkb2_area_keypad_pane_ParamLimits

0xd937,	// (0x0000d937) vkb2_area_keypad_pane

0xd975,	// (0x0000d975) vkb2_area_top_pane_ParamLimits

0xd975,	// (0x0000d975) vkb2_area_top_pane

0xd9f1,	// (0x0000d9f1) vkb2_top_entry_pane_ParamLimits

0xd9f1,	// (0x0000d9f1) vkb2_top_entry_pane

0xda1e,	// (0x0000da1e) vkb2_top_grid_left_pane_ParamLimits

0xda1e,	// (0x0000da1e) vkb2_top_grid_left_pane

0xda3e,	// (0x0000da3e) vkb2_top_grid_right_pane_ParamLimits

0xda3e,	// (0x0000da3e) vkb2_top_grid_right_pane

0x84fa,	// (0x000084fa) vkb2_cell_keypad_pane_ParamLimits

0x84fa,	// (0x000084fa) vkb2_cell_keypad_pane

0xda84,	// (0x0000da84) vkb2_area_bottom_grid_pane_ParamLimits

0xda84,	// (0x0000da84) vkb2_area_bottom_grid_pane

0xdaaa,	// (0x0000daaa) vkb2_area_bottom_pane_g1_ParamLimits

0xdaaa,	// (0x0000daaa) vkb2_area_bottom_pane_g1

0xdad0,	// (0x0000dad0) vkb2_area_bottom_pane_g2_ParamLimits

0xdad0,	// (0x0000dad0) vkb2_area_bottom_pane_g2

0xdb01,	// (0x0000db01) vkb2_area_bottom_pane_g3_ParamLimits

0xdb01,	// (0x0000db01) vkb2_area_bottom_pane_g3

0x0002,

0xe9af,	// (0x0000e9af) vkb2_area_bottom_pane_g_ParamLimits

0xe9af,	// (0x0000e9af) vkb2_area_bottom_pane_g

0x8672,	// (0x00008672) vkb2_top_cell_left_pane_ParamLimits

0x8672,	// (0x00008672) vkb2_top_cell_left_pane

0xdb57,	// (0x0000db57) vkb2_top_entry_pane_g1_ParamLimits

0xdb57,	// (0x0000db57) vkb2_top_entry_pane_g1

0xdb65,	// (0x0000db65) vkb2_top_entry_pane_t1_ParamLimits

0xdb65,	// (0x0000db65) vkb2_top_entry_pane_t1

0x86da,	// (0x000086da) vkb2_top_entry_pane_t2_ParamLimits

0x86da,	// (0x000086da) vkb2_top_entry_pane_t2

0x870c,	// (0x0000870c) vkb2_top_entry_pane_t3_ParamLimits

0x870c,	// (0x0000870c) vkb2_top_entry_pane_t3

0x0002,

0xe9b6,	// (0x0000e9b6) vkb2_top_entry_pane_t_ParamLimits

0xe9b6,	// (0x0000e9b6) vkb2_top_entry_pane_t

0xdb9e,	// (0x0000db9e) vkb2_top_grid_right_pane_g1_ParamLimits

0xdb9e,	// (0x0000db9e) vkb2_top_grid_right_pane_g1

0x8765,	// (0x00008765) vkb2_top_grid_right_pane_g2_ParamLimits

0x8765,	// (0x00008765) vkb2_top_grid_right_pane_g2

0x877d,	// (0x0000877d) vkb2_top_grid_right_pane_g3_ParamLimits

0x877d,	// (0x0000877d) vkb2_top_grid_right_pane_g3

0xdbb4,	// (0x0000dbb4) vkb2_top_grid_right_pane_g4_ParamLimits

0xdbb4,	// (0x0000dbb4) vkb2_top_grid_right_pane_g4

0x0003,

0xe9bd,	// (0x0000e9bd) vkb2_top_grid_right_pane_g_ParamLimits

0xe9bd,	// (0x0000e9bd) vkb2_top_grid_right_pane_g

0x87ab,	// (0x000087ab) vkb2_top_cell_left_pane_g1

0x87c2,	// (0x000087c2) vkb2_cell_keypad_pane_g1_ParamLimits

0x87c2,	// (0x000087c2) vkb2_cell_keypad_pane_g1

0x87d0,	// (0x000087d0) vkb2_cell_keypad_pane_t1_ParamLimits

0x87d0,	// (0x000087d0) vkb2_cell_keypad_pane_t1

0x87e7,	// (0x000087e7) vkb2_cell_bottom_grid_pane_ParamLimits

0x87e7,	// (0x000087e7) vkb2_cell_bottom_grid_pane

0x8820,	// (0x00008820) vkb2_cell_bottom_grid_pane_g1

0xd556,	// (0x0000d556) aid_call2_pane_cp02

0xd55e,	// (0x0000d55e) aid_call_pane_cp02

0xd566,	// (0x0000d566) clock_digital_number_pane_cp10

0xd56e,	// (0x0000d56e) clock_digital_number_pane_cp11

0xd576,	// (0x0000d576) clock_digital_number_pane_cp12

0xd57e,	// (0x0000d57e) clock_digital_number_pane_cp13

0xd586,	// (0x0000d586) clock_digital_separator_pane_cp10

0x1b2f,	// (0x00001b2f) popup_clock_digital_analogue_window_cp2_g1

0x1b2f,	// (0x00001b2f) popup_clock_digital_analogue_window_cp2_g2

0xd58e,	// (0x0000d58e) popup_clock_digital_analogue_window_cp2_g3

0x1b2f,	// (0x00001b2f) popup_clock_digital_analogue_window_cp2_g4

0xd58e,	// (0x0000d58e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xe98a,	// (0x0000e98a) popup_clock_digital_analogue_window_cp2_g

0xd596,	// (0x0000d596) popup_clock_digital_analogue_window_cp2_t1

0xd5a4,	// (0x0000d5a4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xe995,	// (0x0000e995) popup_clock_digital_analogue_window_cp2_t

0x5e2d,	// (0x00005e2d) clock_digital_number_pane_cp10_g1

0x5e2d,	// (0x00005e2d) clock_digital_number_pane_cp10_g2

0x0001,

0xa5e5,	// (0x0000a5e5) clock_digital_number_pane_cp10_g

0x5e2d,	// (0x00005e2d) clock_digital_separator_pane_cp10_g1

0x5e2d,	// (0x00005e2d) clock_digital_separator_pane_cp10_g2

0x0001,

0xa5e5,	// (0x0000a5e5) clock_digital_separator_pane_cp10_g

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

0xdbca,	// (0x0000dbca) aid_size_cell_graphic2_ParamLimits

0xdbca,	// (0x0000dbca) aid_size_cell_graphic2

0xdc08,	// (0x0000dc08) bg_popup_window_pane_cp21_ParamLimits

0xdc08,	// (0x0000dc08) bg_popup_window_pane_cp21

0xdc16,	// (0x0000dc16) graphic2_pages_pane_ParamLimits

0xdc16,	// (0x0000dc16) graphic2_pages_pane

0xdc5f,	// (0x0000dc5f) grid_graphic2_control_pane_ParamLimits

0xdc5f,	// (0x0000dc5f) grid_graphic2_control_pane

0xdc9d,	// (0x0000dc9d) grid_graphic2_pane_ParamLimits

0xdc9d,	// (0x0000dc9d) grid_graphic2_pane

0xdd0c,	// (0x0000dd0c) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x75bc,	// (0x000075bc) list_ai3_gene_pane_ParamLimits

0xd242,	// (0x0000d242) bg_popup_window_pane_cp19_ParamLimits

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

0xe96e,	// (0x0000e96e) popup_slider_window_g_ParamLimits

0x7a75,	// (0x00007a75) popup_slider_window_t1_ParamLimits

0x7ae7,	// (0x00007ae7) small_volume_slider_vertical_pane_ParamLimits

0xdd0c,	// (0x0000dd0c) cell_graphic2_pane_ParamLimits

0xdd57,	// (0x0000dd57) bg_button_pane_cp10_ParamLimits

0xdd57,	// (0x0000dd57) bg_button_pane_cp10

0xdd68,	// (0x0000dd68) bg_button_pane_cp11_ParamLimits

0xdd68,	// (0x0000dd68) bg_button_pane_cp11

0xdd79,	// (0x0000dd79) graphic2_pages_pane_g1_ParamLimits

0xdd79,	// (0x0000dd79) graphic2_pages_pane_g1

0xdd94,	// (0x0000dd94) graphic2_pages_pane_g2_ParamLimits

0xdd94,	// (0x0000dd94) graphic2_pages_pane_g2

0x0001,

0xe9cb,	// (0x0000e9cb) graphic2_pages_pane_g_ParamLimits

0xe9cb,	// (0x0000e9cb) graphic2_pages_pane_g

0xddac,	// (0x0000ddac) graphic2_pages_pane_t1_ParamLimits

0xddac,	// (0x0000ddac) graphic2_pages_pane_t1

0xddc4,	// (0x0000ddc4) cell_graphic2_control_pane_ParamLimits

0xddc4,	// (0x0000ddc4) cell_graphic2_control_pane

0xddee,	// (0x0000ddee) cell_graphic2_pane_g1_ParamLimits

0xddee,	// (0x0000ddee) cell_graphic2_pane_g1

0x60c8,	// (0x000060c8) cell_graphic2_pane_g2_ParamLimits

0x60c8,	// (0x000060c8) cell_graphic2_pane_g2

0xddfb,	// (0x0000ddfb) cell_graphic2_pane_g3_ParamLimits

0xddfb,	// (0x0000ddfb) cell_graphic2_pane_g3

0x60d5,	// (0x000060d5) cell_graphic2_pane_g4_ParamLimits

0x60d5,	// (0x000060d5) cell_graphic2_pane_g4

0xde08,	// (0x0000de08) cell_graphic2_pane_g5_ParamLimits

0xde08,	// (0x0000de08) cell_graphic2_pane_g5

0x0004,

0xe9d0,	// (0x0000e9d0) cell_graphic2_pane_g_ParamLimits

0xe9d0,	// (0x0000e9d0) cell_graphic2_pane_g

0xde28,	// (0x0000de28) cell_graphic2_pane_t1_ParamLimits

0xde28,	// (0x0000de28) cell_graphic2_pane_t1

0x4198,	// (0x00004198) grid_highlight_pane_cp11_ParamLimits

0x4198,	// (0x00004198) grid_highlight_pane_cp11

0x07a5,	// (0x000007a5) bg_button_pane_cp05

0xde5d,	// (0x0000de5d) cell_graphic2_control_pane_g1

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

0xa859,	// (0x0000a859) cell_cmode_rocker_pane_g_ParamLimits

0xa859,	// (0x0000a859) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x8bc8,	// (0x00008bc8) cell_cmode_itu_pane_g1

0x8bd1,	// (0x00008bd1) cell_cmode_itu_pane_t1

0x8bdf,	// (0x00008bdf) cell_cmode_itu_pane_t2

0x0001,

0xa85e,	// (0x0000a85e) cell_cmode_itu_pane_t

0x7e73,	// (0x00007e73) aid_touch_ctrl_left

0x7e7b,	// (0x00007e7b) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xde85,	// (0x0000de85) aid_cmod_rocker_key_size_cp

0xde8f,	// (0x0000de8f) aid_cmode_itu_key_size_cp

0x8c01,	// (0x00008c01) compa_mode_pane_g1

0x8c09,	// (0x00008c09) compa_mode_pane_g2

0x8c11,	// (0x00008c11) compa_mode_pane_g3

0x0002,

0xa863,	// (0x0000a863) compa_mode_pane_g

0xde99,	// (0x0000de99) main_comp_mode_itu_pane_cp

0xdea3,	// (0x0000dea3) main_comp_mode_rocker_pane_cp

0xdead,	// (0x0000dead) cell_cmode_itu_pane_cp_ParamLimits

0xdead,	// (0x0000dead) cell_cmode_itu_pane_cp

0xdec2,	// (0x0000dec2) cell_cmode_rocker_pane_cp_ParamLimits

0xdec2,	// (0x0000dec2) cell_cmode_rocker_pane_cp

0x120e,	// (0x0000120e) bg_button_pane_cp06_cp_ParamLimits

0x120e,	// (0x0000120e) bg_button_pane_cp06_cp

0x626b,	// (0x0000626b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x626b,	// (0x0000626b) cell_cmode_rocker_pane_g1_cp

0x5e2d,	// (0x00005e2d) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xded4,	// (0x0000ded4) cell_cmode_itu_pane_g1_cp

0xdedd,	// (0x0000dedd) cell_cmode_itu_pane_t1_cp

0xdeeb,	// (0x0000deeb) cell_cmode_itu_pane_t2_cp

0xc80b,	// (0x0000c80b) settings_code_pane_cp2

0x0474,	// (0x00000474) bg_popup_window_pane_cp3_ParamLimits

0x09a3,	// (0x000009a3) heading_pane_cp3_ParamLimits

0x09af,	// (0x000009af) listscroll_popup_graphic_pane_ParamLimits

0x5e94,	// (0x00005e94) fep_hwr_aid_pane_ParamLimits

0x7b5f,	// (0x00007b5f) aid_touch_sctrl_top_ParamLimits

0x7b6c,	// (0x00007b6c) sctrl_sk_top_pane_g1_ParamLimits

0x626b,	// (0x0000626b) sctrl_sk_top_pane_g2_ParamLimits

0xa799,	// (0x0000a799) sctrl_sk_top_pane_g_ParamLimits

0x7b79,	// (0x00007b79) sctrl_sk_top_pane_t1_ParamLimits

0x7b5f,	// (0x00007b5f) aid_touch_sctrl_bottom_ParamLimits

0x7b79,	// (0x00007b79) sctrl_sk_bottom_pane_t1_ParamLimits

0x7dbd,	// (0x00007dbd) aid_area_touch_clock

0xd9b3,	// (0x0000d9b3) aid_vkb2_area_top_pane_cell_ParamLimits

0xd9b3,	// (0x0000d9b3) aid_vkb2_area_top_pane_cell

0xda5e,	// (0x0000da5e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xda5e,	// (0x0000da5e) aid_vkb2_area_bottom_pane_cell

0x8692,	// (0x00008692) popup_char_count_window

0x8c75,	// (0x00008c75) popup_char_count_window_g1

0x8c7e,	// (0x00008c7e) popup_char_count_window_g2

0x8c87,	// (0x00008c87) popup_char_count_window_g3

0x0002,

0xa86a,	// (0x0000a86a) popup_char_count_window_g

0x8c90,	// (0x00008c90) popup_char_count_window_t1

0x834a,	// (0x0000834a) popup_fep_char_preview_window_ParamLimits

0x834a,	// (0x0000834a) popup_fep_char_preview_window

0xd9d3,	// (0x0000d9d3) vkb2_top_candi_pane_ParamLimits

0xd9d3,	// (0x0000d9d3) vkb2_top_candi_pane

0xdef9,	// (0x0000def9) cell_vkb2_top_candi_pane_ParamLimits

0xdef9,	// (0x0000def9) cell_vkb2_top_candi_pane

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

0xa871,	// (0x0000a871) bg_popup_fep_char_preview_window_g

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

0xa884,	// (0x0000a884) cell_vkb2_top_candi_pane_g_ParamLimits

0xa884,	// (0x0000a884) cell_vkb2_top_candi_pane_g

0x8d9b,	// (0x00008d9b) cell_vkb2_top_candi_pane_t1

0x4870,	// (0x00004870) aid_size_touch_slider_mark_ParamLimits

0x4870,	// (0x00004870) aid_size_touch_slider_mark

0xdc4a,	// (0x0000dc4a) grid_graphic2_catg_pane_ParamLimits

0xdc4a,	// (0x0000dc4a) grid_graphic2_catg_pane

0xdce1,	// (0x0000dce1) popup_grid_graphic2_window_t1_ParamLimits

0xdce1,	// (0x0000dce1) popup_grid_graphic2_window_t1

0xdcf6,	// (0x0000dcf6) popup_grid_graphic2_window_t2_ParamLimits

0xdcf6,	// (0x0000dcf6) popup_grid_graphic2_window_t2

0x0001,

0xe9c6,	// (0x0000e9c6) popup_grid_graphic2_window_t_ParamLimits

0xe9c6,	// (0x0000e9c6) popup_grid_graphic2_window_t

0x07a5,	// (0x000007a5) bg_button_pane_cp05_ParamLimits

0xde5d,	// (0x0000de5d) cell_graphic2_control_pane_g1_ParamLimits

0x7e39,	// (0x00007e39) cell_graphic2_catg_pane_ParamLimits

0x7e39,	// (0x00007e39) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xdf43,	// (0x0000df43) cell_graphic2_catg_pane_g1

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

0xa891,	// (0x0000a891) bg_vkb2_func_pane_g

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp01

0x87ab,	// (0x000087ab) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x87ab,	// (0x000087ab) vkb2_top_cell_right_wide_pane_g1

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5e86,	// (0x00005e86) bg_vkb2_fuc_pane_cp02

0x8820,	// (0x00008820) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8820,	// (0x00008820) vkb2_top_cell_right_narrow_pane_g1

0xd190,	// (0x0000d190) aid_touch_area_decrease_ParamLimits

0xd190,	// (0x0000d190) aid_touch_area_decrease

0xd1be,	// (0x0000d1be) aid_touch_area_increase_ParamLimits

0xd1be,	// (0x0000d1be) aid_touch_area_increase

0xd1e6,	// (0x0000d1e6) aid_touch_area_mute_ParamLimits

0xd1e6,	// (0x0000d1e6) aid_touch_area_mute

0xd20e,	// (0x0000d20e) aid_touch_area_slider_ParamLimits

0xd20e,	// (0x0000d20e) aid_touch_area_slider

0xd24e,	// (0x0000d24e) popup_slider_window_g4_ParamLimits

0xd24e,	// (0x0000d24e) popup_slider_window_g4

0xd276,	// (0x0000d276) popup_slider_window_g5_ParamLimits

0xd276,	// (0x0000d276) popup_slider_window_g5

0xd2aa,	// (0x0000d2aa) popup_slider_window_g6_ParamLimits

0xd2aa,	// (0x0000d2aa) popup_slider_window_g6

0x7aa1,	// (0x00007aa1) popup_slider_window_t2_ParamLimits

0x7aa1,	// (0x00007aa1) popup_slider_window_t2

0x0001,

0xa78d,	// (0x0000a78d) popup_slider_window_t_ParamLimits

0xa78d,	// (0x0000a78d) popup_slider_window_t

0xd2c6,	// (0x0000d2c6) slider_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) slider_pane

0x8dcc,	// (0x00008dcc) slider_pane_g1_ParamLimits

0x8dcc,	// (0x00008dcc) slider_pane_g1

0x8de0,	// (0x00008de0) slider_pane_g2_ParamLimits

0x8de0,	// (0x00008de0) slider_pane_g2

0x8df6,	// (0x00008df6) slider_pane_g3_ParamLimits

0x8df6,	// (0x00008df6) slider_pane_g3

0x0003,

0xa8a4,	// (0x0000a8a4) slider_pane_g_ParamLimits

0xa8a4,	// (0x0000a8a4) slider_pane_g

0xbee2,	// (0x0000bee2) popup_tb_float_extension_window_ParamLimits

0xbee2,	// (0x0000bee2) popup_tb_float_extension_window

0x8e22,	// (0x00008e22) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x8e2d,	// (0x00008e2d) grid_tb_float_ext_pane

0x8e35,	// (0x00008e35) cell_tb_float_ext_pane_ParamLimits

0x8e35,	// (0x00008e35) cell_tb_float_ext_pane

0x8e4d,	// (0x00008e4d) cell_tb_float_ext_pane_g1

0x8e56,	// (0x00008e56) grid_highlight_pane_cp12

0xcb4b,	// (0x0000cb4b) cell_last_hwr_side_pane_ParamLimits

0xcb4b,	// (0x0000cb4b) cell_last_hwr_side_pane

0x5e2d,	// (0x00005e2d) cell_last_hwr_side_pane_g1

0x8e5f,	// (0x00008e5f) cell_last_hwr_side_pane_g2

0x0001,

0xa8ad,	// (0x0000a8ad) cell_last_hwr_side_pane_g

0xdb32,	// (0x0000db32) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdb32,	// (0x0000db32) vkb2_area_bottom_space_btn_pane

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

0xa8b2,	// (0x0000a8b2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xa8b2,	// (0x0000a8b2) vkb2_area_bottom_space_btn_pane_g

0x5f43,	// (0x00005f43) cel_fep_hwr_func_pane_ParamLimits

0x5f43,	// (0x00005f43) cel_fep_hwr_func_pane

0xcb20,	// (0x0000cb20) cell_hwr_side_button_pane_ParamLimits

0xcb20,	// (0x0000cb20) cell_hwr_side_button_pane

0x7dbd,	// (0x00007dbd) aid_area_touch_clock_ParamLimits

0x07a5,	// (0x000007a5) bg_uniindi_top_pane_ParamLimits

0x7dcf,	// (0x00007dcf) uniindi_top_pane_g1_ParamLimits

0x7de5,	// (0x00007de5) uniindi_top_pane_g2_ParamLimits

0x7df1,	// (0x00007df1) uniindi_top_pane_g3_ParamLimits

0x7e02,	// (0x00007e02) uniindi_top_pane_g4_ParamLimits

0xa7c5,	// (0x0000a7c5) uniindi_top_pane_g_ParamLimits

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

0xcafc,	// (0x0000cafc) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb0e,	// (0x0000cb0e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xe912,	// (0x0000e912) form2_midp_gauge_slider_pane_t_ParamLimits

0x5c4d,	// (0x00005c4d) form2_midp_slider_pane_ParamLimits

0x830a,	// (0x0000830a) aid_size_cell_func_vkb2_ParamLimits

0x830a,	// (0x0000830a) aid_size_cell_func_vkb2

0x8e0e,	// (0x00008e0e) slider_pane_g4_ParamLimits

0x8e0e,	// (0x00008e0e) slider_pane_g4

0xdf4c,	// (0x0000df4c) form2_midp_gauge_slider_pane_t2_cp01

0xdf5a,	// (0x0000df5a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdf5a,	// (0x0000df5a) form2_midp_gauge_slider_pane_t3_cp01

0x8f53,	// (0x00008f53) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x8f87,	// (0x00008f87) navi_smil_pane_g1

0x8f8f,	// (0x00008f8f) navi_smil_pane_t1

0x8f5c,	// (0x00008f5c) form2_midp_slider_pane_g1

0x8f65,	// (0x00008f65) form2_midp_slider_pane_g2

0x8f6d,	// (0x00008f6d) form2_midp_slider_pane_g3

0x8f5c,	// (0x00008f5c) form2_midp_slider_pane_g4

0xdf77,	// (0x0000df77) form2_midp_slider_pane_g5

0x0004,

0xe9e0,	// (0x0000e9e0) form2_midp_slider_pane_g

0x8f0a,	// (0x00008f0a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8f0a,	// (0x00008f0a) vkb2_area_bottom_space_btn_pane_g4

0xc084,	// (0x0000c084) lc0_navi_pane_ParamLimits

0xc084,	// (0x0000c084) lc0_navi_pane

0xc0ee,	// (0x0000c0ee) lc0_stat_indi_pane_ParamLimits

0xc0ee,	// (0x0000c0ee) lc0_stat_indi_pane

0xc103,	// (0x0000c103) ls0_title_pane_ParamLimits

0xc103,	// (0x0000c103) ls0_title_pane

0x120e,	// (0x0000120e) bg_popup_sub_pane_cp14_ParamLimits

0x7da4,	// (0x00007da4) list_uniindi_pane_ParamLimits

0x7db0,	// (0x00007db0) uniindi_top_pane_ParamLimits

0x7e4b,	// (0x00007e4b) list_single_uniindi_pane_g1_ParamLimits

0x7e5e,	// (0x00007e5e) list_single_uniindi_pane_t1_ParamLimits

0xdf80,	// (0x0000df80) lc0_stat_clock_pane_ParamLimits

0xdf80,	// (0x0000df80) lc0_stat_clock_pane

0xdf8d,	// (0x0000df8d) lc0_stat_indi_pane_g1_ParamLimits

0xdf8d,	// (0x0000df8d) lc0_stat_indi_pane_g1

0xdf9a,	// (0x0000df9a) lc0_stat_indi_pane_g2_ParamLimits

0xdf9a,	// (0x0000df9a) lc0_stat_indi_pane_g2

0x0001,

0xe9eb,	// (0x0000e9eb) lc0_stat_indi_pane_g_ParamLimits

0xe9eb,	// (0x0000e9eb) lc0_stat_indi_pane_g

0xdfa7,	// (0x0000dfa7) lc0_uni_indicator_pane_ParamLimits

0xdfa7,	// (0x0000dfa7) lc0_uni_indicator_pane

0x8fd1,	// (0x00008fd1) ls0_title_pane_g1_ParamLimits

0x8fd1,	// (0x00008fd1) ls0_title_pane_g1

0xdfb4,	// (0x0000dfb4) ls0_title_pane_t1_ParamLimits

0xdfb4,	// (0x0000dfb4) ls0_title_pane_t1

0xdfe2,	// (0x0000dfe2) lc0_uni_indicator_pane_g1_ParamLimits

0xdfe2,	// (0x0000dfe2) lc0_uni_indicator_pane_g1

0x902d,	// (0x0000902d) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x903b,	// (0x0000903b) ai5_sk_pane_ParamLimits

0x903b,	// (0x0000903b) ai5_sk_pane

0xdff7,	// (0x0000dff7) cell_ai5_widget_pane_ParamLimits

0xdff7,	// (0x0000dff7) cell_ai5_widget_pane

0x90be,	// (0x000090be) aid_size_cell_widget_grid

0x90cb,	// (0x000090cb) bg_ai5_widget_pane_ParamLimits

0x90cb,	// (0x000090cb) bg_ai5_widget_pane

0xe084,	// (0x0000e084) cell_ai5_widget_pane_g2

0xe098,	// (0x0000e098) cell_ai5_widget_pane_g3

0xe0b2,	// (0x0000e0b2) cell_ai5_widget_pane_g4

0xe0c2,	// (0x0000e0c2) cell_ai5_widget_pane_g5

0xe0d2,	// (0x0000e0d2) cell_ai5_widget_pane_g6

0xe0de,	// (0x0000e0de) cell_ai5_widget_pane_g7

0xe126,	// (0x0000e126) cell_ai5_widget_pane_t1_ParamLimits

0xe126,	// (0x0000e126) cell_ai5_widget_pane_t1

0xe143,	// (0x0000e143) cell_ai5_widget_pane_t2_ParamLimits

0xe143,	// (0x0000e143) cell_ai5_widget_pane_t2

0xe15b,	// (0x0000e15b) cell_ai5_widget_pane_t3_ParamLimits

0xe15b,	// (0x0000e15b) cell_ai5_widget_pane_t3

0xe173,	// (0x0000e173) cell_ai5_widget_pane_t4_ParamLimits

0xe173,	// (0x0000e173) cell_ai5_widget_pane_t4

0xe199,	// (0x0000e199) cell_ai5_widget_pane_t5_ParamLimits

0xe199,	// (0x0000e199) cell_ai5_widget_pane_t5

0x9254,	// (0x00009254) cell_ai5_widget_pane_t6_ParamLimits

0x9254,	// (0x00009254) cell_ai5_widget_pane_t6

0x9266,	// (0x00009266) cell_ai5_widget_pane_t7_ParamLimits

0x9266,	// (0x00009266) cell_ai5_widget_pane_t7

0xe1b8,	// (0x0000e1b8) cell_ai5_widget_pane_t8_ParamLimits

0xe1b8,	// (0x0000e1b8) cell_ai5_widget_pane_t8

0x0009,

0xea05,	// (0x0000ea05) cell_ai5_widget_pane_t_ParamLimits

0xea05,	// (0x0000ea05) cell_ai5_widget_pane_t

0xe217,	// (0x0000e217) grid_ai5_widget_pane

0x120e,	// (0x0000120e) highlight_cell_ai5_widget_pane_ParamLimits

0x120e,	// (0x0000120e) highlight_cell_ai5_widget_pane

0xe223,	// (0x0000e223) ai5_sk_left_pane

0xe22d,	// (0x0000e22d) ai5_sk_middle_pane

0xe237,	// (0x0000e237) ai5_sk_right_pane

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

0xa8f5,	// (0x0000a8f5) bg_ai5_widget_pane_g_ParamLimits

0xa8f5,	// (0x0000a8f5) bg_ai5_widget_pane_g

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

0xa908,	// (0x0000a908) ai5_sk_left_pane_g

0x93c9,	// (0x000093c9) ai5_sk_left_pane_t1

0x3271,	// (0x00003271) ai5_sk_right_pane_g1

0x93d7,	// (0x000093d7) ai5_sk_right_pane_g2

0x93df,	// (0x000093df) ai5_sk_right_pane_g3

0x93e7,	// (0x000093e7) ai5_sk_right_pane_g4

0x0003,

0xa911,	// (0x0000a911) ai5_sk_right_pane_g

0x93ef,	// (0x000093ef) ai5_sk_right_pane_t1

0x3271,	// (0x00003271) ai5_sk_middle_pane_g1

0x3279,	// (0x00003279) ai5_sk_middle_pane_g2

0x3291,	// (0x00003291) ai5_sk_middle_pane_g3

0x93df,	// (0x000093df) ai5_sk_middle_pane_g4

0x93b9,	// (0x000093b9) ai5_sk_middle_pane_g5

0x93fd,	// (0x000093fd) ai5_sk_middle_pane_g6

0xe241,	// (0x0000e241) ai5_sk_middle_pane_g7

0x0006,

0xea1a,	// (0x0000ea1a) ai5_sk_middle_pane_g

0xbf82,	// (0x0000bf82) aid_touch_area_size_lc0_ParamLimits

0xbf82,	// (0x0000bf82) aid_touch_area_size_lc0

0x6604,	// (0x00006604) cell_hwr_candidate_pane_t1_ParamLimits

0x2d87,	// (0x00002d87) aid_touch_navi_pane

0xc1ef,	// (0x0000c1ef) status_dt_navi_pane_ParamLimits

0xc1ef,	// (0x0000c1ef) status_dt_navi_pane

0xc207,	// (0x0000c207) status_dt_sta_pane_ParamLimits

0xc207,	// (0x0000c207) status_dt_sta_pane

0xe249,	// (0x0000e249) dt_sta_controll_pane

0xe256,	// (0x0000e256) dt_sta_indi_pane

0xe263,	// (0x0000e263) dt_sta_title_pane

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane

0xe275,	// (0x0000e275) dt_sta_battery_pane

0xe27d,	// (0x0000e27d) dt_sta_indi_pane_g1

0xe286,	// (0x0000e286) dt_sta_indi_pane_g2

0xe28f,	// (0x0000e28f) dt_sta_indi_pane_g3

0x0002,

0xea29,	// (0x0000ea29) dt_sta_indi_pane_g

0xe298,	// (0x0000e298) dt_sta_signal_pane

0x120e,	// (0x0000120e) bg_dt_sta_title_pane_ParamLimits

0x120e,	// (0x0000120e) bg_dt_sta_title_pane

0xe2a1,	// (0x0000e2a1) dt_sta_title_pane_g1

0xe2a9,	// (0x0000e2a9) dt_sta_title_pane_t1_ParamLimits

0xe2a9,	// (0x0000e2a9) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0xe2be,	// (0x0000e2be) dt_sta_controll_pane_g1

0xe2c7,	// (0x0000e2c7) bg_dt_sta_title_pane_g1

0xe2d0,	// (0x0000e2d0) bg_dt_sta_title_pane_g2

0xe2d9,	// (0x0000e2d9) bg_dt_sta_title_pane_g3

0x0002,

0xea30,	// (0x0000ea30) bg_dt_sta_title_pane_g

0x5e2d,	// (0x00005e2d) bg_dt_sta_indi_pane_g1

0xe2e2,	// (0x0000e2e2) dt_sta_signal_pane_g1

0xe2ea,	// (0x0000e2ea) dt_sta_signal_pane_g2

0x0001,

0xea37,	// (0x0000ea37) dt_sta_signal_pane_g

0x94bb,	// (0x000094bb) dt_sta_battery_pane_g1

0x94c4,	// (0x000094c4) dt_sta_battery_pane_t1

0x5e2d,	// (0x00005e2d) bg_dt_sta_control_pane_g1

0x1cf7,	// (0x00001cf7) fep_china_uni_eep_pane

0x1cff,	// (0x00001cff) fep_china_uni_entry_pane_ParamLimits

0x1d0f,	// (0x00001d0f) popup_fep_china_uni_window_g1_ParamLimits

0x1d1f,	// (0x00001d1f) popup_fep_china_uni_window_g2_ParamLimits

0x1d1f,	// (0x00001d1f) popup_fep_china_uni_window_g2

0x0001,

0xa1cd,	// (0x0000a1cd) popup_fep_china_uni_window_g_ParamLimits

0xa1cd,	// (0x0000a1cd) popup_fep_china_uni_window_g

0x94d3,	// (0x000094d3) fep_china_uni_eep_pane_g1

0x94db,	// (0x000094db) fep_china_uni_eep_pane_t1

0x8f7e,	// (0x00008f7e) aid_touch_area_size_smil_player

0x2ebe,	// (0x00002ebe) lc0_clock_pane

0x3090,	// (0x00003090) status_pane_g5_ParamLimits

0x3090,	// (0x00003090) status_pane_g5

0xbb16,	// (0x0000bb16) popup_keymap_window

0x3058,	// (0x00003058) status_icon_pane

0xe098,	// (0x0000e098) cell_ai5_widget_pane_g3_ParamLimits

0xe0b2,	// (0x0000e0b2) cell_ai5_widget_pane_g4_ParamLimits

0xe0c2,	// (0x0000e0c2) cell_ai5_widget_pane_g5_ParamLimits

0xe0ea,	// (0x0000e0ea) cell_ai5_widget_pane_g8_ParamLimits

0xe0ea,	// (0x0000e0ea) cell_ai5_widget_pane_g8

0xe0fe,	// (0x0000e0fe) cell_ai5_widget_pane_g9_ParamLimits

0xe0fe,	// (0x0000e0fe) cell_ai5_widget_pane_g9

0xe112,	// (0x0000e112) cell_ai5_widget_pane_g10_ParamLimits

0xe112,	// (0x0000e112) cell_ai5_widget_pane_g10

0x94ea,	// (0x000094ea) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x94f2,	// (0x000094f2) popup_keymap_window_t1

0xb866,	// (0x0000b866) control_pane_g6_ParamLimits

0xb866,	// (0x0000b866) control_pane_g6

0xb873,	// (0x0000b873) control_pane_g7_ParamLimits

0xb873,	// (0x0000b873) control_pane_g7

0xb880,	// (0x0000b880) control_pane_g8_ParamLimits

0xb880,	// (0x0000b880) control_pane_g8

0xe249,	// (0x0000e249) dt_sta_controll_pane_ParamLimits

0xe256,	// (0x0000e256) dt_sta_indi_pane_ParamLimits

0xe263,	// (0x0000e263) dt_sta_title_pane_ParamLimits

0x0c2a,	// (0x00000c2a) aid_size_touch_scroll_bar_cale

0x026c,	// (0x0000026c) popup_discreet_window_ParamLimits

0x026c,	// (0x0000026c) popup_discreet_window

0xaabd,	// (0x0000aabd) popup_sk_window

0x3a37,	// (0x00003a37) bg_popup_sub_pane_cp28_ParamLimits

0x3a37,	// (0x00003a37) bg_popup_sub_pane_cp28

0x9500,	// (0x00009500) popup_discreet_window_g1_ParamLimits

0x9500,	// (0x00009500) popup_discreet_window_g1

0x9520,	// (0x00009520) popup_discreet_window_t1_ParamLimits

0x9520,	// (0x00009520) popup_discreet_window_t1

0x953e,	// (0x0000953e) popup_discreet_window_t2_ParamLimits

0x953e,	// (0x0000953e) popup_discreet_window_t2

0x0002,

0xa93c,	// (0x0000a93c) popup_discreet_window_t_ParamLimits

0xa93c,	// (0x0000a93c) popup_discreet_window_t

0x9590,	// (0x00009590) popup_sk_window_g1

0x9599,	// (0x00009599) popup_sk_window_g2

0x0001,

0xa943,	// (0x0000a943) popup_sk_window_g

0x95a2,	// (0x000095a2) popup_sk_window_t1

0x95b0,	// (0x000095b0) popup_sk_window_t1_copy1

0xe084,	// (0x0000e084) cell_ai5_widget_pane_g2_ParamLimits

0xe1ca,	// (0x0000e1ca) cell_ai5_widget_pane_t9_ParamLimits

0xe1ca,	// (0x0000e1ca) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xe2f2,	// (0x0000e2f2) aid_fshwr2_btn_pane

0xe303,	// (0x0000e303) aid_fshwr2_syb_pane

0xe314,	// (0x0000e314) aid_fshwr2_txt_pane

0xe320,	// (0x0000e320) fshwr2_func_candi_pane

0xe33a,	// (0x0000e33a) fshwr2_hwr_syb_pane

0xe34f,	// (0x0000e34f) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xe375,	// (0x0000e375) fshwr2_icf_pane_t1_ParamLimits

0xe375,	// (0x0000e375) fshwr2_icf_pane_t1

0x1b2f,	// (0x00001b2f) fshwr2_func_candi_pane_g1

0xe38c,	// (0x0000e38c) fshwr2_func_candi_row_pane_ParamLimits

0xe38c,	// (0x0000e38c) fshwr2_func_candi_row_pane

0xe3af,	// (0x0000e3af) cell_fshwr2_syb_pane_ParamLimits

0xe3af,	// (0x0000e3af) cell_fshwr2_syb_pane

0x626b,	// (0x0000626b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x626b,	// (0x0000626b) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0xe3c3,	// (0x0000e3c3) fshwr2_func_candi_cell_pane_ParamLimits

0xe3c3,	// (0x0000e3c3) fshwr2_func_candi_cell_pane

0x3829,	// (0x00003829) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3829,	// (0x00003829) fshwr2_func_candi_cell_bg_pane

0xe402,	// (0x0000e402) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe402,	// (0x0000e402) fshwr2_func_candi_cell_pane_g1

0xe439,	// (0x0000e439) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe439,	// (0x0000e439) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x232f,	// (0x0000232f) cell_fshwr2_syb_bg_pane

0xe454,	// (0x0000e454) cell_fshwr2_syb_bg_pane_g1

0xe45c,	// (0x0000e45c) cell_fshwr2_syb_bg_pane_t1

0x120e,	// (0x0000120e) main_tmo_pane

0xc608,	// (0x0000c608) uni_indicator_pane_g1_ParamLimits

0xc61e,	// (0x0000c61e) uni_indicator_pane_g2_ParamLimits

0xc634,	// (0x0000c634) uni_indicator_pane_g3_ParamLimits

0x4676,	// (0x00004676) uni_indicator_pane_g4_ParamLimits

0x4676,	// (0x00004676) uni_indicator_pane_g4

0x468a,	// (0x0000468a) uni_indicator_pane_g5_ParamLimits

0x468a,	// (0x0000468a) uni_indicator_pane_g5

0x468a,	// (0x0000468a) uni_indicator_pane_g6_ParamLimits

0x468a,	// (0x0000468a) uni_indicator_pane_g6

0xe882,	// (0x0000e882) uni_indicator_pane_g_ParamLimits

0xd174,	// (0x0000d174) popup_tmo_note_window_ParamLimits

0xd174,	// (0x0000d174) popup_tmo_note_window

0x120e,	// (0x0000120e) fshwr2_bg_pane

0xe42a,	// (0x0000e42a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe42a,	// (0x0000e42a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xea3c,	// (0x0000ea3c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xea3c,	// (0x0000ea3c) fshwr2_func_candi_cell_pane_g

0x5e2d,	// (0x00005e2d) bg_popup_window_pane_cp01

0x96e9,	// (0x000096e9) bg_popup_window_pane_g1_cp01

0x96f2,	// (0x000096f2) bg_popup_window_pane_cp22_ParamLimits

0x96f2,	// (0x000096f2) bg_popup_window_pane_cp22

0x9700,	// (0x00009700) listscroll_tmo_link_pane_ParamLimits

0x9700,	// (0x00009700) listscroll_tmo_link_pane

0x9740,	// (0x00009740) popup_tmo_note_window_g1_ParamLimits

0x9740,	// (0x00009740) popup_tmo_note_window_g1

0x974d,	// (0x0000974d) tmo_note_info_pane_ParamLimits

0x974d,	// (0x0000974d) tmo_note_info_pane

0xe46b,	// (0x0000e46b) list_tmo_note_info_pane_g1_ParamLimits

0xe46b,	// (0x0000e46b) list_tmo_note_info_pane_g1

0x977e,	// (0x0000977e) list_tmo_note_info_pane_g2_ParamLimits

0x977e,	// (0x0000977e) list_tmo_note_info_pane_g2

0x0001,

0xea41,	// (0x0000ea41) list_tmo_note_info_pane_g_ParamLimits

0xea41,	// (0x0000ea41) list_tmo_note_info_pane_g

0x979a,	// (0x0000979a) list_tmo_note_info_text_pane_ParamLimits

0x979a,	// (0x0000979a) list_tmo_note_info_text_pane

0x981b,	// (0x0000981b) list_tmo_link_pane

0x9828,	// (0x00009828) scroll_pane_cp20

0x9835,	// (0x00009835) list_single_tmo_link_pane_ParamLimits

0x9835,	// (0x00009835) list_single_tmo_link_pane

0x9845,	// (0x00009845) list_single_tmo_link_pane_t1

0x9853,	// (0x00009853) list_tmo_note_info_text_pane_t1_ParamLimits

0x9853,	// (0x00009853) list_tmo_note_info_text_pane_t1

0x1431,	// (0x00001431) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1431,	// (0x00001431) aid_size_touch_scroll_bar_cp01

0xb328,	// (0x0000b328) aid_size_touch_slider_marker

0xaab1,	// (0x0000aab1) popup_settings_window_ParamLimits

0xaab1,	// (0x0000aab1) popup_settings_window

0x28c1,	// (0x000028c1) popup_candi_list_indi_window

0x2d87,	// (0x00002d87) aid_touch_navi_pane_ParamLimits

0x7b33,	// (0x00007b33) rs_clock_indi_pane

0x7b3c,	// (0x00007b3c) sctrl_sk_bottom_pane_ParamLimits

0x7b4d,	// (0x00007b4d) sctrl_sk_top_pane_ParamLimits

0x8364,	// (0x00008364) popup_fep_tooltip_window

0x90be,	// (0x000090be) aid_size_cell_widget_grid_ParamLimits

0xe070,	// (0x0000e070) cell_ai5_widget_pane_g1_ParamLimits

0xe070,	// (0x0000e070) cell_ai5_widget_pane_g1

0xe0d2,	// (0x0000e0d2) cell_ai5_widget_pane_g6_ParamLimits

0xe0de,	// (0x0000e0de) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xe9f0,	// (0x0000e9f0) cell_ai5_widget_pane_g_ParamLimits

0xe9f0,	// (0x0000e9f0) cell_ai5_widget_pane_g

0xe1f9,	// (0x0000e1f9) cell_ai5_widget_pane_t10_ParamLimits

0xe1f9,	// (0x0000e1f9) cell_ai5_widget_pane_t10

0xe217,	// (0x0000e217) grid_ai5_widget_pane_ParamLimits

0x9374,	// (0x00009374) cell_contacts_ai5_widget_pane_ParamLimits

0x9374,	// (0x00009374) cell_contacts_ai5_widget_pane

0x9553,	// (0x00009553) popup_discreet_window_t3_ParamLimits

0x9553,	// (0x00009553) popup_discreet_window_t3

0xe363,	// (0x0000e363) popup_fshwr2_char_preview_window_ParamLimits

0xe363,	// (0x0000e363) popup_fshwr2_char_preview_window

0xe482,	// (0x0000e482) tmo_note_info_pane_t1

0xe497,	// (0x0000e497) tmo_note_info_pane_t2

0xe4ac,	// (0x0000e4ac) tmo_note_info_pane_t3

0x97f7,	// (0x000097f7) tmo_note_info_pane_t4

0x9809,	// (0x00009809) tmo_note_info_pane_t5

0x0004,

0xea46,	// (0x0000ea46) tmo_note_info_pane_t

0x981b,	// (0x0000981b) list_tmo_link_pane_ParamLimits

0x9828,	// (0x00009828) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x986c,	// (0x0000986c) popup_fshwr2_char_preview_window_t1

0x987a,	// (0x0000987a) popup_candi_list_indi_window_g1

0x9883,	// (0x00009883) bg_cell_contacts_ai5_widget_pane

0x988f,	// (0x0000988f) cell_contacts_ai5_widget_pane_g1

0x98a4,	// (0x000098a4) cell_contacts_ai5_widget_pane_g2

0x98b0,	// (0x000098b0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xa95d,	// (0x0000a95d) cell_contacts_ai5_widget_pane_g

0x98bc,	// (0x000098bc) cell_contacts_ai5_widget_pane_t1

0x120e,	// (0x0000120e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe524,	// (0x0000e524) settings_container_pane

0x232f,	// (0x0000232f) listscroll_set_pane_copy1

0x5343,	// (0x00005343) scroll_pane_cp121_copy1

0x993d,	// (0x0000993d) set_content_pane_copy1

0x9945,	// (0x00009945) aid_height_set_list_copy1_ParamLimits

0x9945,	// (0x00009945) aid_height_set_list_copy1

0x4929,	// (0x00004929) aid_size_parent_copy1_ParamLimits

0x4929,	// (0x00004929) aid_size_parent_copy1

0x9951,	// (0x00009951) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9951,	// (0x00009951) button_value_adjust_pane_cp6_copy1

0x289b,	// (0x0000289b) list_highlight_pane_cp2_copy1_ParamLimits

0x289b,	// (0x0000289b) list_highlight_pane_cp2_copy1

0xe530,	// (0x0000e530) list_set_pane_copy1_ParamLimits

0xe530,	// (0x0000e530) list_set_pane_copy1

0xe4c1,	// (0x0000e4c1) main_pane_set_t1_copy1_ParamLimits

0xe4c1,	// (0x0000e4c1) main_pane_set_t1_copy1

0xe4fb,	// (0x0000e4fb) main_pane_set_t2_copy1_ParamLimits

0xe4fb,	// (0x0000e4fb) main_pane_set_t2_copy1

0x99f3,	// (0x000099f3) main_pane_set_t3_copy1

0x9a01,	// (0x00009a01) main_pane_set_t4_copy1

0xe518,	// (0x0000e518) set_content_pane_g1_copy1_ParamLimits

0xe518,	// (0x0000e518) set_content_pane_g1_copy1

0x9a0f,	// (0x00009a0f) setting_code_pane_copy1

0x9a17,	// (0x00009a17) setting_slider_graphic_pane_copy1

0x9a17,	// (0x00009a17) setting_slider_pane_copy1

0x9a17,	// (0x00009a17) setting_text_pane_copy1

0x9a17,	// (0x00009a17) setting_volume_pane_copy1

0x9a1f,	// (0x00009a1f) settings_code_pane_cp2_copy1

0x9a27,	// (0x00009a27) settings_code_pane_cp_copy1_ParamLimits

0x9a27,	// (0x00009a27) settings_code_pane_cp_copy1

0xe5be,	// (0x0000e5be) volume_set_pane_copy1

0xe5c6,	// (0x0000e5c6) volume_set_pane_g10_copy1

0xe5ce,	// (0x0000e5ce) volume_set_pane_g1_copy1

0xe5d6,	// (0x0000e5d6) volume_set_pane_g2_copy1

0xe5de,	// (0x0000e5de) volume_set_pane_g3_copy1

0xe5e6,	// (0x0000e5e6) volume_set_pane_g4_copy1

0xe5ee,	// (0x0000e5ee) volume_set_pane_g5_copy1

0xe5f6,	// (0x0000e5f6) volume_set_pane_g6_copy1

0xe5fe,	// (0x0000e5fe) volume_set_pane_g7_copy1

0xe606,	// (0x0000e606) volume_set_pane_g8_copy1

0xe60e,	// (0x0000e60e) volume_set_pane_g9_copy1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1_ParamLimits

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1

0x9a93,	// (0x00009a93) setting_slider_pane_t2_copy1_ParamLimits

0x9a93,	// (0x00009a93) setting_slider_pane_t2_copy1

0x9aac,	// (0x00009aac) setting_slider_pane_t3_copy1_ParamLimits

0x9aac,	// (0x00009aac) setting_slider_pane_t3_copy1

0x0504,	// (0x00000504) slider_set_pane_copy1_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_copy1

0x1331,	// (0x00001331) set_opt_bg_pane_g1_copy2

0x1339,	// (0x00001339) set_opt_bg_pane_g2_copy2

0x9ac3,	// (0x00009ac3) set_opt_bg_pane_g3_copy2

0x1349,	// (0x00001349) set_opt_bg_pane_g4_copy2

0x1351,	// (0x00001351) set_opt_bg_pane_g5_copy2

0x1359,	// (0x00001359) set_opt_bg_pane_g6_copy2

0xe616,	// (0x0000e616) set_opt_bg_pane_g7_copy2

0x9ad3,	// (0x00009ad3) set_opt_bg_pane_g8_copy2

0x9adb,	// (0x00009adb) set_opt_bg_pane_g9_copy2

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

0xe61e,	// (0x0000e61e) slider_set_pane_g7_copy1_ParamLimits

0xe61e,	// (0x0000e61e) slider_set_pane_g7_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_copy1

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1_copy1

0xe634,	// (0x0000e634) setting_slider_graphic_pane_t1_copy1

0xe643,	// (0x0000e643) setting_slider_graphic_pane_t2_copy1

0xe652,	// (0x0000e652) slider_set_pane_cp_copy1

0x9b27,	// (0x00009b27) input_focus_pane_cp1_copy1

0x9b30,	// (0x00009b30) list_set_text_pane_copy1

0x9b38,	// (0x00009b38) setting_text_pane_g1_copy1

0x9b41,	// (0x00009b41) set_text_pane_t1_copy1

0x9b27,	// (0x00009b27) input_focus_pane_cp2_copy1

0x9b38,	// (0x00009b38) setting_code_pane_g1_copy1

0x9b5a,	// (0x00009b5a) setting_code_pane_t1_copy1

0xb6ed,	// (0x0000b6ed) list_set_graphic_pane_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_copy1

0x9b7c,	// (0x00009b7c) list_set_graphic_pane_g1_copy1_ParamLimits

0x9b7c,	// (0x00009b7c) list_set_graphic_pane_g1_copy1

0x9b88,	// (0x00009b88) list_set_graphic_pane_g2_copy1

0x20a1,	// (0x000020a1) list_set_graphic_pane_t1_copy1_ParamLimits

0x20a1,	// (0x000020a1) list_set_graphic_pane_t1_copy1

0x5e2d,	// (0x00005e2d) rs_clock_indi_pane_g1

0x9b90,	// (0x00009b90) rs_clock_indi_pane_t1

0x9b9e,	// (0x00009b9e) rs_indi_pane

0x9ba6,	// (0x00009ba6) rs_indi_pane_g1

0x9baf,	// (0x00009baf) rs_indi_pane_g2

0x987a,	// (0x0000987a) rs_indi_pane_g3

0x0002,

0xa964,	// (0x0000a964) rs_indi_pane_g

0x232f,	// (0x0000232f) bg_popup_preview_window_pane_cp03

0x9bb8,	// (0x00009bb8) popup_fep_tooltip_window_t1

0x6f89,	// (0x00006f89) popup_note2_window_g2_ParamLimits

0x6f89,	// (0x00006f89) popup_note2_window_g2

0x0001,

0xa704,	// (0x0000a704) popup_note2_window_g_ParamLimits

0xa704,	// (0x0000a704) popup_note2_window_g

0x7582,	// (0x00007582) bg_popup_sub_pane_cp11_ParamLimits

0x758f,	// (0x0000758f) cell_ai3_links_pane_g1_ParamLimits

0x75a6,	// (0x000075a6) cell_ai3_links_pane_t1

0x9b41,	// (0x00009b41) set_text_pane_t1_copy1_ParamLimits

0x2256,	// (0x00002256) cell_graphic_popup_pane_cp2_ParamLimits

0x2256,	// (0x00002256) cell_graphic_popup_pane_cp2

0x9bc6,	// (0x00009bc6) cell_graphic_popup_pane_g1_cp2

0x0ad9,	// (0x00000ad9) cell_graphic_popup_pane_g2_cp2

0x9bce,	// (0x00009bce) cell_graphic_popup_pane_g3_cp2

0x9bd6,	// (0x00009bd6) cell_graphic_popup_pane_t2_cp2

0x0aea,	// (0x00000aea) grid_highlight_pane_cp3_cp2

0x1845,	// (0x00001845) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x120e,	// (0x0000120e) main_tmo_pane_ParamLimits

0xd16c,	// (0x0000d16c) popup_tmo_big_image_note_window

0x90fb,	// (0x000090fb) cell_ai5_widget_list_pane

0xe067,	// (0x0000e067) cell_ai5_widget_lrg_icon_pane

0xe482,	// (0x0000e482) tmo_note_info_pane_t1_ParamLimits

0xe497,	// (0x0000e497) tmo_note_info_pane_t2_ParamLimits

0xe4ac,	// (0x0000e4ac) tmo_note_info_pane_t3_ParamLimits

0x97f7,	// (0x000097f7) tmo_note_info_pane_t4_ParamLimits

0x9809,	// (0x00009809) tmo_note_info_pane_t5_ParamLimits

0xea46,	// (0x0000ea46) tmo_note_info_pane_t_ParamLimits

0xe524,	// (0x0000e524) settings_container_pane_ParamLimits

0x9b1f,	// (0x00009b1f) indicator_popup_pane_cp5

0x9b1f,	// (0x00009b1f) indicator_popup_pane_cp6

0xb6ed,	// (0x0000b6ed) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x9be4,	// (0x00009be4) popup_tmo_big_image_note_window_g1

0x9bed,	// (0x00009bed) popup_tmo_big_image_note_window_t1

0x9bfb,	// (0x00009bfb) popup_tmo_big_image_note_window_t2

0x9c09,	// (0x00009c09) popup_tmo_big_image_note_window_t3

0x0002,

0xa96b,	// (0x0000a96b) popup_tmo_big_image_note_window_t

0x5e2d,	// (0x00005e2d) cell_ai5_widget_lrg_icon_pane_g1

0x9c17,	// (0x00009c17) cell_ai5_widget_lrg_icon_pane_t1

0xe65a,	// (0x0000e65a) cell_ai5_widget_list_row_pane_ParamLimits

0xe65a,	// (0x0000e65a) cell_ai5_widget_list_row_pane

0xe671,	// (0x0000e671) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe671,	// (0x0000e671) cell_ai5_widget_list_row_pane_g1

0xe67e,	// (0x0000e67e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe67e,	// (0x0000e67e) cell_ai5_widget_list_row_pane_t1

0xe6af,	// (0x0000e6af) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe6af,	// (0x0000e6af) cell_ai5_widget_list_row_pane_t2

0x0002,

0xea51,	// (0x0000ea51) cell_ai5_widget_list_row_pane_t_ParamLimits

0xea51,	// (0x0000ea51) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x9cbf,	// (0x00009cbf) popup_fep_char_pre_window

0x9cc7,	// (0x00009cc7) popup_fep_ituss_window

0xe6d7,	// (0x0000e6d7) popup_fep_vkbss_window

0x9d0c,	// (0x00009d0c) grid_vkbss_keypad_pane_ParamLimits

0x9d0c,	// (0x00009d0c) grid_vkbss_keypad_pane

0x9d1c,	// (0x00009d1c) ituss_keypad_pane

0x9d35,	// (0x00009d35) aid_vkbss_key_offset_ParamLimits

0x9d35,	// (0x00009d35) aid_vkbss_key_offset

0x9d41,	// (0x00009d41) cell_vkbss_key_pane_ParamLimits

0x9d41,	// (0x00009d41) cell_vkbss_key_pane

0x306c,	// (0x0000306c) bg_cell_vkbss_key_g1_ParamLimits

0x306c,	// (0x0000306c) bg_cell_vkbss_key_g1

0x9d57,	// (0x00009d57) cell_vkbss_key_3p_pane_ParamLimits

0x9d57,	// (0x00009d57) cell_vkbss_key_3p_pane

0x9d71,	// (0x00009d71) cell_vkbss_key_g1_ParamLimits

0x9d71,	// (0x00009d71) cell_vkbss_key_g1

0x9d8b,	// (0x00009d8b) cell_vkbss_key_t1_ParamLimits

0x9d8b,	// (0x00009d8b) cell_vkbss_key_t1

0x9db6,	// (0x00009db6) cell_ituss_key_pane_ParamLimits

0x9db6,	// (0x00009db6) cell_ituss_key_pane

0x9dc7,	// (0x00009dc7) bg_cell_ituss_key_g1_ParamLimits

0x9dc7,	// (0x00009dc7) bg_cell_ituss_key_g1

0x9dd3,	// (0x00009dd3) cell_ituss_key_pane_g1_ParamLimits

0x9dd3,	// (0x00009dd3) cell_ituss_key_pane_g1

0x9de7,	// (0x00009de7) cell_ituss_key_pane_g2_ParamLimits

0x9de7,	// (0x00009de7) cell_ituss_key_pane_g2

0x0002,

0xa979,	// (0x0000a979) cell_ituss_key_pane_g_ParamLimits

0xa979,	// (0x0000a979) cell_ituss_key_pane_g

0x9e21,	// (0x00009e21) cell_ituss_key_t1_ParamLimits

0x9e21,	// (0x00009e21) cell_ituss_key_t1

0x9e5b,	// (0x00009e5b) cell_ituss_key_t2_ParamLimits

0x9e5b,	// (0x00009e5b) cell_ituss_key_t2

0x9e8c,	// (0x00009e8c) cell_ituss_key_t3_ParamLimits

0x9e8c,	// (0x00009e8c) cell_ituss_key_t3

0x9e5b,	// (0x00009e5b) cell_ituss_key_t4_ParamLimits

0x9e5b,	// (0x00009e5b) cell_ituss_key_t4

0x0004,

0xa980,	// (0x0000a980) cell_ituss_key_t_ParamLimits

0xa980,	// (0x0000a980) cell_ituss_key_t

0x9ecf,	// (0x00009ecf) cell_vkbss_key_3p_pane_g1

0x9ed7,	// (0x00009ed7) cell_vkbss_key_3p_pane_g2

0x9edf,	// (0x00009edf) cell_vkbss_key_3p_pane_g3

0x0002,

0xa98b,	// (0x0000a98b) cell_vkbss_key_3p_pane_g

0x232f,	// (0x0000232f) bg_popup_fep_char_preview_window_cp02

0x9ee7,	// (0x00009ee7) popup_fep_char_pre_window_t1

0xe054,	// (0x0000e054) main_ai5_sk_pane

0x9883,	// (0x00009883) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x988f,	// (0x0000988f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x98a4,	// (0x000098a4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x98b0,	// (0x000098b0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xa95d,	// (0x0000a95d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x98bc,	// (0x000098bc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x120e,	// (0x0000120e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe6e4,	// (0x0000e6e4) main_ai5_sk_pane_g1

0x3881,	// (0x00003881) popup_query_code_window_g1

0x9cd9,	// (0x00009cd9) popup_fep_vkb_icf_pane

0x9cf6,	// (0x00009cf6) popup_fep_vtchi_icf_pane

0x9efe,	// (0x00009efe) bg_icf_pane

0x9f0a,	// (0x00009f0a) list_vkb_icf_pane

0x9f16,	// (0x00009f16) bg_icf_pane_cp01

0x9f29,	// (0x00009f29) vtchi_icf_list_pane

0x9f39,	// (0x00009f39) list_vkb_icf_pane_t1_ParamLimits

0x9f39,	// (0x00009f39) list_vkb_icf_pane_t1

0x9f4e,	// (0x00009f4e) vtchi_icf_list_pane_t1_ParamLimits

0x9f4e,	// (0x00009f4e) vtchi_icf_list_pane_t1

0x9cc7,	// (0x00009cc7) popup_fep_ituss_window_ParamLimits

0x9cf6,	// (0x00009cf6) popup_fep_vtchi_icf_pane_ParamLimits

0x9d1c,	// (0x00009d1c) ituss_keypad_pane_ParamLimits

0x9d2b,	// (0x00009d2b) ituss_sks_pane

0x9efe,	// (0x00009efe) bg_icf_pane_ParamLimits

0x9c9f,	// (0x00009c9f) icf_edit_indi_pane_ParamLimits

0x9c9f,	// (0x00009c9f) icf_edit_indi_pane

0x9f0a,	// (0x00009f0a) list_vkb_icf_pane_ParamLimits

0x9f16,	// (0x00009f16) bg_icf_pane_cp01_ParamLimits

0x9cb2,	// (0x00009cb2) icf_edit_indi_pane_cp01_ParamLimits

0x9cb2,	// (0x00009cb2) icf_edit_indi_pane_cp01

0x9f31,	// (0x00009f31) vtchi_query_pane

0x8f1a,	// (0x00008f1a) icf_edit_indi_pane_g1_ParamLimits

0x8f1a,	// (0x00008f1a) icf_edit_indi_pane_g1

0xe6ed,	// (0x0000e6ed) icf_edit_indi_pane_g2_ParamLimits

0xe6ed,	// (0x0000e6ed) icf_edit_indi_pane_g2

0x0001,

0xea58,	// (0x0000ea58) icf_edit_indi_pane_g_ParamLimits

0xea58,	// (0x0000ea58) icf_edit_indi_pane_g

0xe6fd,	// (0x0000e6fd) icf_edit_indi_pane_t1

0x9f65,	// (0x00009f65) bg_input_focus_pane_cp042

0x9f6e,	// (0x00009f6e) vtchi_button_pane

0x9f77,	// (0x00009f77) vtchi_query_pane_t1

0x9f85,	// (0x00009f85) vtchi_query_pane_t2

0x9f93,	// (0x00009f93) vtchi_query_pane_t3

0x0002,

0xa992,	// (0x0000a992) vtchi_query_pane_t

0x0020,	// (0x00000020) bg_button_pane_cp13

0x9fa1,	// (0x00009fa1) vtchi_button_pane_g1

0x9fa9,	// (0x00009fa9) ituss_sks_pane_g1

0x9fb2,	// (0x00009fb2) ituss_sks_pane_g2

0x0001,

0xa999,	// (0x0000a999) ituss_sks_pane_g

0x9fbb,	// (0x00009fbb) ituss_sks_pane_t1

0x9fc9,	// (0x00009fc9) ituss_sks_pane_t2

0x0001,

0xa99e,	// (0x0000a99e) ituss_sks_pane_t

0x58e0,	// (0x000058e0) indicator_nsta_pane_cp_g1

0x58e9,	// (0x000058e9) indicator_nsta_pane_cp_g2

0x58f1,	// (0x000058f1) indicator_nsta_pane_cp_g3

0x58f9,	// (0x000058f9) indicator_nsta_pane_cp_g4

0x5901,	// (0x00005901) indicator_nsta_pane_cp_g5

0x5909,	// (0x00005909) indicator_nsta_pane_cp_g6

0x0005,

0xa54e,	// (0x0000a54e) indicator_nsta_pane_cp_g

0xde3f,	// (0x0000de3f) cell_graphic2_pane_t2_ParamLimits

0xde3f,	// (0x0000de3f) cell_graphic2_pane_t2

0x0001,

0xe9db,	// (0x0000e9db) cell_graphic2_pane_t_ParamLimits

0xe9db,	// (0x0000e9db) cell_graphic2_pane_t

0xde77,	// (0x0000de77) cell_graphic2_control_pane_t1

0xb601,	// (0x0000b601) signal_pane_g3_ParamLimits

0xb601,	// (0x0000b601) signal_pane_g3

0xb615,	// (0x0000b615) signal_pane_g4_ParamLimits

0xb615,	// (0x0000b615) signal_pane_g4

0xe6c1,	// (0x0000e6c1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe6c1,	// (0x0000e6c1) cell_ai5_widget_list_row_pane_t3

0x9e0f,	// (0x00009e0f) cell_ituss_key_pane_t1_ParamLimits

0x9e0f,	// (0x00009e0f) cell_ituss_key_pane_t1

0x34ff,	// (0x000034ff) form_field_data_wide_pane_vc_t2_ParamLimits

0x34ff,	// (0x000034ff) form_field_data_wide_pane_vc_t2

0x3511,	// (0x00003511) form_field_data_wide_pane_vc_t3_ParamLimits

0x3511,	// (0x00003511) form_field_data_wide_pane_vc_t3

0x0002,

0xa2ad,	// (0x0000a2ad) form_field_data_wide_pane_vc_t_ParamLimits

0xa2ad,	// (0x0000a2ad) form_field_data_wide_pane_vc_t

0x55e2,	// (0x000055e2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x55e2,	// (0x000055e2) form_field_slider_wide_pane_vc_t3

0x56a0,	// (0x000056a0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x56a0,	// (0x000056a0) form_field_popup_wide_pane_vc_t2

0x56b5,	// (0x000056b5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x56b5,	// (0x000056b5) form_field_popup_wide_pane_vc_t3

0x0002,

0xa53d,	// (0x0000a53d) form_field_popup_wide_pane_vc_t_ParamLimits

0xa53d,	// (0x0000a53d) form_field_popup_wide_pane_vc_t

0xe2f2,	// (0x0000e2f2) aid_fshwr2_btn_pane_ParamLimits

0xe303,	// (0x0000e303) aid_fshwr2_syb_pane_ParamLimits

0xe314,	// (0x0000e314) aid_fshwr2_txt_pane_ParamLimits

0x120e,	// (0x0000120e) fshwr2_bg_pane_ParamLimits

0xe320,	// (0x0000e320) fshwr2_func_candi_pane_ParamLimits

0xe33a,	// (0x0000e33a) fshwr2_hwr_syb_pane_ParamLimits

0xe34f,	// (0x0000e34f) fshwr2_icf_pane_ParamLimits

0x555d,	// (0x0000555d) list_double_graphic_pane_vc_g4_ParamLimits

0x555d,	// (0x0000555d) list_double_graphic_pane_vc_g4

0x9e03,	// (0x00009e03) cell_ituss_key_pane_g3_ParamLimits

0x9e03,	// (0x00009e03) cell_ituss_key_pane_g3

0x9ebd,	// (0x00009ebd) cell_ituss_key_t5_ParamLimits

0x9ebd,	// (0x00009ebd) cell_ituss_key_t5

0xe6d7,	// (0x0000e6d7) popup_fep_vkbss_window_ParamLimits

0xe05e,	// (0x0000e05e) aid_cell_ai5_quarter

0xe6fd,	// (0x0000e6fd) icf_edit_indi_pane_t1_ParamLimits

0x084d,	// (0x0000084d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x084d,	// (0x0000084d) aid_tch_indicator_popup_pane_cp2

0x0860,	// (0x00000860) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0860,	// (0x00000860) aid_tch_query_popup_data_pane_cp2

0x3829,	// (0x00003829) aid_tch_query_popup_pane_ParamLimits

0x3829,	// (0x00003829) aid_tch_query_popup_pane

0x3829,	// (0x00003829) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3829,	// (0x00003829) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal

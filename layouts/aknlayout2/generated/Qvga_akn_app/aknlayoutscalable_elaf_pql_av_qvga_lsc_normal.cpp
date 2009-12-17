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
0xa4c3,	// (0x0000a4c3) Screen

0xa4cd,	// (0x0000a4cd) application_window_ParamLimits

0xa4cd,	// (0x0000a4cd) application_window

0x002a,	// (0x0000002a) screen_g1

0xa4fb,	// (0x0000a4fb) area_bottom_pane_ParamLimits

0xa4fb,	// (0x0000a4fb) area_bottom_pane

0x011d,	// (0x0000011d) area_top_pane_ParamLimits

0x011d,	// (0x0000011d) area_top_pane

0x0195,	// (0x00000195) main_pane_ParamLimits

0x0195,	// (0x00000195) main_pane

0x024e,	// (0x0000024e) misc_graphics

0xb9c5,	// (0x0000b9c5) battery_pane_ParamLimits

0xb9c5,	// (0x0000b9c5) battery_pane

0x3b43,	// (0x00003b43) bg_status_flat_pane_g8

0x3b4b,	// (0x00003b4b) bg_status_flat_pane_g9

0x2dfc,	// (0x00002dfc) context_pane_ParamLimits

0x2dfc,	// (0x00002dfc) context_pane

0xbb1f,	// (0x0000bb1f) navi_pane_ParamLimits

0xbb1f,	// (0x0000bb1f) navi_pane

0xbb94,	// (0x0000bb94) signal_pane_ParamLimits

0xbb94,	// (0x0000bb94) signal_pane

0x0008,

0x9e76,	// (0x00009e76) bg_status_flat_pane_g

0xbc20,	// (0x0000bc20) status_pane_g1_ParamLimits

0xbc20,	// (0x0000bc20) status_pane_g1

0xbc2c,	// (0x0000bc2c) status_pane_g2_ParamLimits

0xbc2c,	// (0x0000bc2c) status_pane_g2

0x3011,	// (0x00003011) status_pane_g3_ParamLimits

0x3011,	// (0x00003011) status_pane_g3

0x0004,

0xe192,	// (0x0000e192) status_pane_g_ParamLimits

0xe192,	// (0x0000e192) status_pane_g

0xbc38,	// (0x0000bc38) title_pane_ParamLimits

0xbc38,	// (0x0000bc38) title_pane

0xbc93,	// (0x0000bc93) uni_indicator_pane_ParamLimits

0xbc93,	// (0x0000bc93) uni_indicator_pane

0x27d1,	// (0x000027d1) bg_list_pane_ParamLimits

0x27d1,	// (0x000027d1) bg_list_pane

0xb38d,	// (0x0000b38d) find_pane

0xb395,	// (0x0000b395) listscroll_app_pane_ParamLimits

0xb395,	// (0x0000b395) listscroll_app_pane

0x2805,	// (0x00002805) listscroll_form_pane

0xb3a1,	// (0x0000b3a1) listscroll_gen_pane_ParamLimits

0xb3a1,	// (0x0000b3a1) listscroll_gen_pane

0x2805,	// (0x00002805) listscroll_set_pane

0xb3b6,	// (0x0000b3b6) main_idle_act_pane

0x22d6,	// (0x000022d6) main_idle_trad_pane

0x22d6,	// (0x000022d6) main_list_empty_pane

0x2834,	// (0x00002834) main_midp_pane

0x2840,	// (0x00002840) main_pane_g1_ParamLimits

0x2840,	// (0x00002840) main_pane_g1

0xb3c9,	// (0x0000b3c9) popup_ai_message_window_ParamLimits

0xb3c9,	// (0x0000b3c9) popup_ai_message_window

0xb44d,	// (0x0000b44d) popup_fep_china_uni_window_ParamLimits

0xb44d,	// (0x0000b44d) popup_fep_china_uni_window

0x292a,	// (0x0000292a) popup_fep_japan_candidate_window_ParamLimits

0x292a,	// (0x0000292a) popup_fep_japan_candidate_window

0x2948,	// (0x00002948) popup_fep_japan_predictive_window_ParamLimits

0x2948,	// (0x00002948) popup_fep_japan_predictive_window

0xb48b,	// (0x0000b48b) popup_find_window

0xb4a4,	// (0x0000b4a4) popup_grid_graphic_window_ParamLimits

0xb4a4,	// (0x0000b4a4) popup_grid_graphic_window

0x299f,	// (0x0000299f) popup_large_graphic_colour_window

0xb520,	// (0x0000b520) popup_menu_window_ParamLimits

0xb520,	// (0x0000b520) popup_menu_window

0xb67e,	// (0x0000b67e) popup_note_image_window

0xb646,	// (0x0000b646) popup_note_wait_window_ParamLimits

0xb646,	// (0x0000b646) popup_note_wait_window

0xb694,	// (0x0000b694) popup_note_window_ParamLimits

0xb694,	// (0x0000b694) popup_note_window

0xb728,	// (0x0000b728) popup_query_code_window_ParamLimits

0xb728,	// (0x0000b728) popup_query_code_window

0x2b5c,	// (0x00002b5c) popup_query_data_code_window_ParamLimits

0x2b5c,	// (0x00002b5c) popup_query_data_code_window

0xb760,	// (0x0000b760) popup_query_data_window_ParamLimits

0xb760,	// (0x0000b760) popup_query_data_window

0xb7d4,	// (0x0000b7d4) popup_query_sat_info_window_ParamLimits

0xb7d4,	// (0x0000b7d4) popup_query_sat_info_window

0xb861,	// (0x0000b861) popup_snote_single_graphic_window_ParamLimits

0xb861,	// (0x0000b861) popup_snote_single_graphic_window

0xb861,	// (0x0000b861) popup_snote_single_text_window_ParamLimits

0xb861,	// (0x0000b861) popup_snote_single_text_window

0x2bcb,	// (0x00002bcb) popup_sub_window_general

0x2ccf,	// (0x00002ccf) popup_window_general_ParamLimits

0x2ccf,	// (0x00002ccf) popup_window_general

0x2ce2,	// (0x00002ce2) power_save_pane

0xb23f,	// (0x0000b23f) control_pane_g1_ParamLimits

0xb23f,	// (0x0000b23f) control_pane_g1

0x2659,	// (0x00002659) control_pane_g2_ParamLimits

0x2659,	// (0x00002659) control_pane_g2

0x267a,	// (0x0000267a) control_pane_g3_ParamLimits

0x267a,	// (0x0000267a) control_pane_g3

0x0007,

0xe17a,	// (0x0000e17a) control_pane_g_ParamLimits

0xe17a,	// (0x0000e17a) control_pane_g

0xb293,	// (0x0000b293) control_pane_t1_ParamLimits

0xb293,	// (0x0000b293) control_pane_t1

0xb2ef,	// (0x0000b2ef) control_pane_t2_ParamLimits

0xb2ef,	// (0x0000b2ef) control_pane_t2

0x0002,

0xe18b,	// (0x0000e18b) control_pane_t_ParamLimits

0xe18b,	// (0x0000e18b) control_pane_t

0x255b,	// (0x0000255b) navi_navi_volume_pane_cp1

0x2564,	// (0x00002564) status_small_icon_pane

0x256c,	// (0x0000256c) status_small_pane_g1_ParamLimits

0x256c,	// (0x0000256c) status_small_pane_g1

0x25a0,	// (0x000025a0) status_small_pane_g2_ParamLimits

0x25a0,	// (0x000025a0) status_small_pane_g2

0x25ac,	// (0x000025ac) status_small_pane_g3_ParamLimits

0x25ac,	// (0x000025ac) status_small_pane_g3

0x25b8,	// (0x000025b8) status_small_pane_g4_ParamLimits

0x25b8,	// (0x000025b8) status_small_pane_g4

0x25c4,	// (0x000025c4) status_small_pane_g5_ParamLimits

0x25c4,	// (0x000025c4) status_small_pane_g5

0x25d1,	// (0x000025d1) status_small_pane_g6_ParamLimits

0x25d1,	// (0x000025d1) status_small_pane_g6

0x0007,

0x9d87,	// (0x00009d87) status_small_pane_g_ParamLimits

0x9d87,	// (0x00009d87) status_small_pane_g

0x2601,	// (0x00002601) status_small_pane_t1

0x2624,	// (0x00002624) status_small_wait_pane_ParamLimits

0x2624,	// (0x00002624) status_small_wait_pane

0xb07b,	// (0x0000b07b) aid_levels_signal_ParamLimits

0xb07b,	// (0x0000b07b) aid_levels_signal

0xb08f,	// (0x0000b08f) signal_pane_g1_ParamLimits

0xb08f,	// (0x0000b08f) signal_pane_g1

0xb0a9,	// (0x0000b0a9) signal_pane_g2_ParamLimits

0xb0a9,	// (0x0000b0a9) signal_pane_g2

0x0001,

0xe15e,	// (0x0000e15e) signal_pane_g_ParamLimits

0xe15e,	// (0x0000e15e) signal_pane_g

0x1c28,	// (0x00001c28) context_pane_g1

0xa64b,	// (0x0000a64b) title_pane_g1

0xa68d,	// (0x0000a68d) title_pane_t1

0x043c,	// (0x0000043c) title_pane_t2

0x0462,	// (0x00000462) title_pane_t3

0x0002,

0xe090,	// (0x0000e090) title_pane_t

0xbcb9,	// (0x0000bcb9) aid_levels_battery_ParamLimits

0xbcb9,	// (0x0000bcb9) aid_levels_battery

0xbcd1,	// (0x0000bcd1) battery_pane_g1_ParamLimits

0xbcd1,	// (0x0000bcd1) battery_pane_g1

0xbcec,	// (0x0000bcec) battery_pane_g2_ParamLimits

0xbcec,	// (0x0000bcec) battery_pane_g2

0x0001,

0xe19d,	// (0x0000e19d) battery_pane_g_ParamLimits

0xe19d,	// (0x0000e19d) battery_pane_g

0xc071,	// (0x0000c071) uni_indicator_pane_g1

0xc086,	// (0x0000c086) uni_indicator_pane_g2

0xc09c,	// (0x0000c09c) uni_indicator_pane_g3

0x0005,

0xe1d9,	// (0x0000e1d9) uni_indicator_pane_g

0x1400,	// (0x00001400) navi_icon_pane_ParamLimits

0x1400,	// (0x00001400) navi_icon_pane

0x024e,	// (0x0000024e) navi_midp_pane

0x024e,	// (0x0000024e) navi_navi_pane

0x1400,	// (0x00001400) navi_text_pane_ParamLimits

0x1400,	// (0x00001400) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x0939,	// (0x00000939) status_small_wait_pane_g2

0x0001,

0x9f19,	// (0x00009f19) status_small_wait_pane_g

0xc017,	// (0x0000c017) navi_navi_icon_text_pane

0xc01f,	// (0x0000c01f) navi_navi_pane_g1_ParamLimits

0xc01f,	// (0x0000c01f) navi_navi_pane_g1

0xc031,	// (0x0000c031) navi_navi_pane_g2_ParamLimits

0xc031,	// (0x0000c031) navi_navi_pane_g2

0x0001,

0xe1d4,	// (0x0000e1d4) navi_navi_pane_g_ParamLimits

0xe1d4,	// (0x0000e1d4) navi_navi_pane_g

0xc043,	// (0x0000c043) navi_navi_tabs_pane

0xc017,	// (0x0000c017) navi_navi_text_pane

0xc017,	// (0x0000c017) navi_navi_volume_pane

0x4285,	// (0x00004285) navi_text_pane_t1

0x4279,	// (0x00004279) navi_icon_pane_g1

0x41cd,	// (0x000041cd) navi_navi_text_pane_t1

0x41bc,	// (0x000041bc) navi_navi_volume_pane_g1

0xc00e,	// (0x0000c00e) volume_small_pane

0xbf6a,	// (0x0000bf6a) navi_navi_icon_text_pane_g1

0xbf72,	// (0x0000bf72) navi_navi_icon_text_pane_t1

0x3ba3,	// (0x00003ba3) navi_tabs_2_long_pane

0x3ba3,	// (0x00003ba3) navi_tabs_2_pane

0x3ba3,	// (0x00003ba3) navi_tabs_3_long_pane

0x3ba3,	// (0x00003ba3) navi_tabs_3_pane

0x3ba3,	// (0x00003ba3) navi_tabs_4_pane

0xbf4a,	// (0x0000bf4a) tabs_2_active_pane_ParamLimits

0xbf4a,	// (0x0000bf4a) tabs_2_active_pane

0xbf5a,	// (0x0000bf5a) tabs_2_passive_pane_ParamLimits

0xbf5a,	// (0x0000bf5a) tabs_2_passive_pane

0xbf18,	// (0x0000bf18) tabs_3_active_pane_ParamLimits

0xbf18,	// (0x0000bf18) tabs_3_active_pane

0xbf28,	// (0x0000bf28) tabs_3_passive_pane_ParamLimits

0xbf28,	// (0x0000bf28) tabs_3_passive_pane

0xbf39,	// (0x0000bf39) tabs_3_passive_pane_cp_ParamLimits

0xbf39,	// (0x0000bf39) tabs_3_passive_pane_cp

0xbed4,	// (0x0000bed4) tabs_4_active_pane_ParamLimits

0xbed4,	// (0x0000bed4) tabs_4_active_pane

0xbee5,	// (0x0000bee5) tabs_4_passive_pane_ParamLimits

0xbee5,	// (0x0000bee5) tabs_4_passive_pane

0xbef6,	// (0x0000bef6) tabs_4_passive_pane_cp_ParamLimits

0xbef6,	// (0x0000bef6) tabs_4_passive_pane_cp

0xbf07,	// (0x0000bf07) tabs_4_passive_pane_cp2_ParamLimits

0xbf07,	// (0x0000bf07) tabs_4_passive_pane_cp2

0xbeb4,	// (0x0000beb4) tabs_2_long_active_pane_ParamLimits

0xbeb4,	// (0x0000beb4) tabs_2_long_active_pane

0xbec4,	// (0x0000bec4) tabs_2_long_passive_pane_ParamLimits

0xbec4,	// (0x0000bec4) tabs_2_long_passive_pane

0xbe7d,	// (0x0000be7d) tabs_3_long_active_pane_ParamLimits

0xbe7d,	// (0x0000be7d) tabs_3_long_active_pane

0xbe90,	// (0x0000be90) tabs_3_long_passive_pane_ParamLimits

0xbe90,	// (0x0000be90) tabs_3_long_passive_pane

0xbea1,	// (0x0000bea1) tabs_3_long_passive_pane_cp_ParamLimits

0xbea1,	// (0x0000bea1) tabs_3_long_passive_pane_cp

0x3f60,	// (0x00003f60) volume_small_pane_g1

0x3f69,	// (0x00003f69) volume_small_pane_g2

0x3f72,	// (0x00003f72) volume_small_pane_g3

0x3f7b,	// (0x00003f7b) volume_small_pane_g4

0x3f84,	// (0x00003f84) volume_small_pane_g5

0x3f8d,	// (0x00003f8d) volume_small_pane_g6

0x3f96,	// (0x00003f96) volume_small_pane_g7

0x3f9f,	// (0x00003f9f) volume_small_pane_g8

0x3fa8,	// (0x00003fa8) volume_small_pane_g9

0x3fb1,	// (0x00003fb1) volume_small_pane_g10

0x0009,

0x9eb3,	// (0x00009eb3) volume_small_pane_g

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_active_pane_g1

0xa71a,	// (0x0000a71a) tabs_3_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_passive_pane_g1

0xa71a,	// (0x0000a71a) tabs_3_passive_pane_t1

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3

0x4b63,	// (0x00004b63) tabs_4_active_pane_g1

0xa730,	// (0x0000a730) tabs_4_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3

0x4b63,	// (0x00004b63) tabs_4_1_passive_pane_g1

0xa730,	// (0x0000a730) tabs_4_1_passive_pane_t1

0x2834,	// (0x00002834) list_highlight_pane_cp2

0xc16a,	// (0x0000c16a) list_set_pane_ParamLimits

0xc16a,	// (0x0000c16a) list_set_pane

0xc1f8,	// (0x0000c1f8) main_pane_set_t1_ParamLimits

0xc1f8,	// (0x0000c1f8) main_pane_set_t1

0xc218,	// (0x0000c218) main_pane_set_t2_ParamLimits

0xc218,	// (0x0000c218) main_pane_set_t2

0xc22c,	// (0x0000c22c) main_pane_set_t3_ParamLimits

0xc22c,	// (0x0000c22c) main_pane_set_t3

0xc23e,	// (0x0000c23e) main_pane_set_t4_ParamLimits

0xc23e,	// (0x0000c23e) main_pane_set_t4

0x0003,

0xe222,	// (0x0000e222) main_pane_set_t_ParamLimits

0xe222,	// (0x0000e222) main_pane_set_t

0xc250,	// (0x0000c250) setting_code_pane

0xc258,	// (0x0000c258) setting_slider_graphic_pane

0xc258,	// (0x0000c258) setting_slider_pane

0xc258,	// (0x0000c258) setting_text_pane

0xc258,	// (0x0000c258) setting_volume_pane

0xa746,	// (0x0000a746) volume_set_pane

0x0474,	// (0x00000474) bg_set_opt_pane_cp

0x04be,	// (0x000004be) setting_slider_pane_t1

0xa74e,	// (0x0000a74e) setting_slider_pane_t2

0xa767,	// (0x0000a767) setting_slider_pane_t3

0x0002,

0xe097,	// (0x0000e097) setting_slider_pane_t

0x0504,	// (0x00000504) slider_set_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1

0xa77e,	// (0x0000a77e) setting_slider_graphic_pane_t1

0xa78d,	// (0x0000a78d) setting_slider_graphic_pane_t2

0x0001,

0xe09e,	// (0x0000e09e) setting_slider_graphic_pane_t

0xa79c,	// (0x0000a79c) slider_set_pane_cp

0x024e,	// (0x0000024e) input_focus_pane_cp1

0x486a,	// (0x0000486a) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x024e,	// (0x0000024e) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x0549,	// (0x00000549) setting_code_pane_t1

0x9890,	// (0x00009890) set_text_pane_t1_ParamLimits

0x9890,	// (0x00009890) set_text_pane_t1

0x130e,	// (0x0000130e) set_opt_bg_pane_g1

0x1316,	// (0x00001316) set_opt_bg_pane_g2

0xc12a,	// (0x0000c12a) set_opt_bg_pane_g3

0x1326,	// (0x00001326) set_opt_bg_pane_g4

0x132e,	// (0x0000132e) set_opt_bg_pane_g5

0x1336,	// (0x00001336) set_opt_bg_pane_g6

0xc132,	// (0x0000c132) set_opt_bg_pane_g7

0xc13a,	// (0x0000c13a) set_opt_bg_pane_g8

0xc142,	// (0x0000c142) set_opt_bg_pane_g9

0x0008,

0xe20f,	// (0x0000e20f) set_opt_bg_pane_g

0x47d9,	// (0x000047d9) slider_set_pane_g1

0x47e6,	// (0x000047e6) slider_set_pane_g2

0x0006,

0xe200,	// (0x0000e200) slider_set_pane_g

0xc0b2,	// (0x0000c0b2) volume_set_pane_g1

0xc0ba,	// (0x0000c0ba) volume_set_pane_g2

0xc0c2,	// (0x0000c0c2) volume_set_pane_g3

0xc0ca,	// (0x0000c0ca) volume_set_pane_g4

0xc0d2,	// (0x0000c0d2) volume_set_pane_g5

0xc0da,	// (0x0000c0da) volume_set_pane_g6

0xc0e2,	// (0x0000c0e2) volume_set_pane_g7

0xc0ea,	// (0x0000c0ea) volume_set_pane_g8

0xc0f2,	// (0x0000c0f2) volume_set_pane_g9

0xc0fa,	// (0x0000c0fa) volume_set_pane_g10

0x0009,

0xe1e6,	// (0x0000e1e6) volume_set_pane_g

0xa7a4,	// (0x0000a7a4) indicator_pane_ParamLimits

0xa7a4,	// (0x0000a7a4) indicator_pane

0xa7cc,	// (0x0000a7cc) main_idle_pane_g2_ParamLimits

0xa7cc,	// (0x0000a7cc) main_idle_pane_g2

0xa7fc,	// (0x0000a7fc) main_pane_idle_g1_ParamLimits

0xa7fc,	// (0x0000a7fc) main_pane_idle_g1

0x05af,	// (0x000005af) popup_clock_digital_analogue_window_ParamLimits

0x05af,	// (0x000005af) popup_clock_digital_analogue_window

0xa821,	// (0x0000a821) soft_indicator_pane_ParamLimits

0xa821,	// (0x0000a821) soft_indicator_pane

0xa83b,	// (0x0000a83b) wallpaper_pane_ParamLimits

0xa83b,	// (0x0000a83b) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xa84d,	// (0x0000a84d) indicator_pane_g1_ParamLimits

0xa84d,	// (0x0000a84d) indicator_pane_g1

0x4cfb,	// (0x00004cfb) navi_navi_icon_text_pane_srt_g1

0x0601,	// (0x00000601) soft_indicator_pane_t1

0x061b,	// (0x0000061b) aid_ps_area_pane

0xa866,	// (0x0000a866) aid_ps_clock_pane

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

0x9b83,	// (0x00009b83) power_save_pane_g_ParamLimits

0x9b83,	// (0x00009b83) power_save_pane_g

0x066d,	// (0x0000066d) power_save_pane_t1_ParamLimits

0x066d,	// (0x0000066d) power_save_pane_t1

0xa866,	// (0x0000a866) aid_ps_clock_pane_ParamLimits

0x0638,	// (0x00000638) aid_ps_indicator_pane_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4

0x0001,

0x9b88,	// (0x00009b88) power_save_pane_t_ParamLimits

0x9b88,	// (0x00009b88) power_save_pane_t

0x06a9,	// (0x000006a9) power_save_t3_ParamLimits

0x06a9,	// (0x000006a9) power_save_t3

0x0694,	// (0x00000694) power_save_t2_ParamLimits

0x0694,	// (0x00000694) power_save_t2

0x06be,	// (0x000006be) indicator_ps_pane_g1

0xa872,	// (0x0000a872) ai_gene_pane_ParamLimits

0xa872,	// (0x0000a872) ai_gene_pane

0xa889,	// (0x0000a889) ai_links_pane_ParamLimits

0xa889,	// (0x0000a889) ai_links_pane

0xa89b,	// (0x0000a89b) indicator_pane_cp1_ParamLimits

0xa89b,	// (0x0000a89b) indicator_pane_cp1

0xa8aa,	// (0x0000a8aa) main_pane_idle_g1_cp_ParamLimits

0xa8aa,	// (0x0000a8aa) main_pane_idle_g1_cp

0x06f7,	// (0x000006f7) popup_ai_links_title_window

0xa8c2,	// (0x0000a8c2) soft_indicator_pane_cp1_ParamLimits

0xa8c2,	// (0x0000a8c2) soft_indicator_pane_cp1

0x4564,	// (0x00004564) ai_links_pane_g1

0x456d,	// (0x0000456d) grid_ai_links_pane

0xc068,	// (0x0000c068) ai_gene_pane_1

0x4552,	// (0x00004552) ai_gene_pane_2

0x455b,	// (0x0000455b) list_highlight_pane_cp4

0xc04c,	// (0x0000c04c) cell_ai_link_pane_ParamLimits

0xc04c,	// (0x0000c04c) cell_ai_link_pane

0x4525,	// (0x00004525) cell_ai_link_pane_g1

0x0939,	// (0x00000939) cell_ai_link_pane_g2

0x0001,

0x9f14,	// (0x00009f14) cell_ai_link_pane_g

0x024e,	// (0x0000024e) grid_highlight_cp2

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp1

0x071a,	// (0x0000071a) popup_ai_links_title_window_t1

0x4477,	// (0x00004477) ai_gene_pane_1_g1_ParamLimits

0x4477,	// (0x00004477) ai_gene_pane_1_g1

0x4483,	// (0x00004483) ai_gene_pane_1_g2_ParamLimits

0x4483,	// (0x00004483) ai_gene_pane_1_g2

0x0001,

0x9f0a,	// (0x00009f0a) ai_gene_pane_1_g_ParamLimits

0x9f0a,	// (0x00009f0a) ai_gene_pane_1_g

0x4490,	// (0x00004490) ai_gene_pane_1_t1_ParamLimits

0x4490,	// (0x00004490) ai_gene_pane_1_t1

0x44c4,	// (0x000044c4) grid_ai_soft_ind_pane

0x4462,	// (0x00004462) ai_gene_pane_2_t1_ParamLimits

0x4462,	// (0x00004462) ai_gene_pane_2_t1

0xa8d6,	// (0x0000a8d6) main_pane_empty_t1_ParamLimits

0xa8d6,	// (0x0000a8d6) main_pane_empty_t1

0xa8f3,	// (0x0000a8f3) main_pane_empty_t2_ParamLimits

0xa8f3,	// (0x0000a8f3) main_pane_empty_t2

0xa90b,	// (0x0000a90b) main_pane_empty_t3_ParamLimits

0xa90b,	// (0x0000a90b) main_pane_empty_t3

0xa91e,	// (0x0000a91e) main_pane_empty_t4_ParamLimits

0xa91e,	// (0x0000a91e) main_pane_empty_t4

0xa931,	// (0x0000a931) main_pane_empty_t5_ParamLimits

0xa931,	// (0x0000a931) main_pane_empty_t5

0x0004,

0xe0a3,	// (0x0000e0a3) main_pane_empty_t_ParamLimits

0xe0a3,	// (0x0000e0a3) main_pane_empty_t

0x1400,	// (0x00001400) bg_popup_window_pane_ParamLimits

0x1400,	// (0x00001400) bg_popup_window_pane

0x41dc,	// (0x000041dc) find_popup_pane_cp2_ParamLimits

0x41dc,	// (0x000041dc) find_popup_pane_cp2

0x41e8,	// (0x000041e8) heading_pane_ParamLimits

0x41e8,	// (0x000041e8) heading_pane

0x024e,	// (0x0000024e) bg_popup_sub_pane

0xbf8f,	// (0x0000bf8f) bg_popup_window_pane_g1_ParamLimits

0xbf8f,	// (0x0000bf8f) bg_popup_window_pane_g1

0xbf9e,	// (0x0000bf9e) bg_popup_window_pane_g2_ParamLimits

0xbf9e,	// (0x0000bf9e) bg_popup_window_pane_g2

0xbfaa,	// (0x0000bfaa) bg_popup_window_pane_g3_ParamLimits

0xbfaa,	// (0x0000bfaa) bg_popup_window_pane_g3

0xbfb6,	// (0x0000bfb6) bg_popup_window_pane_g4_ParamLimits

0xbfb6,	// (0x0000bfb6) bg_popup_window_pane_g4

0xbfc5,	// (0x0000bfc5) bg_popup_window_pane_g5_ParamLimits

0xbfc5,	// (0x0000bfc5) bg_popup_window_pane_g5

0xbfd5,	// (0x0000bfd5) bg_popup_window_pane_g6_ParamLimits

0xbfd5,	// (0x0000bfd5) bg_popup_window_pane_g6

0xbfe1,	// (0x0000bfe1) bg_popup_window_pane_g7_ParamLimits

0xbfe1,	// (0x0000bfe1) bg_popup_window_pane_g7

0xbff0,	// (0x0000bff0) bg_popup_window_pane_g8_ParamLimits

0xbff0,	// (0x0000bff0) bg_popup_window_pane_g8

0xbfff,	// (0x0000bfff) bg_popup_window_pane_g9_ParamLimits

0xbfff,	// (0x0000bfff) bg_popup_window_pane_g9

0x41b0,	// (0x000041b0) bg_popup_window_pane_g10_ParamLimits

0x41b0,	// (0x000041b0) bg_popup_window_pane_g10

0x0009,

0xe1bf,	// (0x0000e1bf) bg_popup_window_pane_g_ParamLimits

0xe1bf,	// (0x0000e1bf) bg_popup_window_pane_g

0x40d9,	// (0x000040d9) bg_popup_heading_pane_ParamLimits

0x40d9,	// (0x000040d9) bg_popup_heading_pane

0x4c62,	// (0x00004c62) tabs_4_passive_pane_cp_srt_ParamLimits

0x4c62,	// (0x00004c62) tabs_4_passive_pane_cp_srt

0x4c74,	// (0x00004c74) tabs_4_passive_pane_srt_ParamLimits

0x40ed,	// (0x000040ed) heading_pane_g2

0x4c74,	// (0x00004c74) tabs_4_passive_pane_srt

0x338c,	// (0x0000338c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x338c,	// (0x0000338c) bg_passive_tab_pane_cp3_srt

0x40f5,	// (0x000040f5) heading_pane_t1_ParamLimits

0x40f5,	// (0x000040f5) heading_pane_t1

0x410c,	// (0x0000410c) heading_pane_t2_ParamLimits

0x410c,	// (0x0000410c) heading_pane_t2

0x0001,

0x9ecd,	// (0x00009ecd) heading_pane_t_ParamLimits

0x9ecd,	// (0x00009ecd) heading_pane_t

0x3b0b,	// (0x00003b0b) bg_popup_heading_pane_g1

0x3bb4,	// (0x00003bb4) bg_popup_heading_pane_g2

0x3bbc,	// (0x00003bbc) bg_popup_heading_pane_g3

0x3bc4,	// (0x00003bc4) bg_popup_heading_pane_g4

0x3bcc,	// (0x00003bcc) bg_popup_heading_pane_g5

0x3bd4,	// (0x00003bd4) bg_popup_heading_pane_g6

0x3bdc,	// (0x00003bdc) bg_popup_heading_pane_g7

0x3be4,	// (0x00003be4) bg_popup_heading_pane_g8

0x3bec,	// (0x00003bec) bg_popup_heading_pane_g9

0x0008,

0x9e89,	// (0x00009e89) bg_popup_heading_pane_g

0x3202,	// (0x00003202) bg_popup_sub_pane_g1

0x320a,	// (0x0000320a) bg_popup_sub_pane_g2

0x3212,	// (0x00003212) bg_popup_sub_pane_g3

0x321a,	// (0x0000321a) bg_popup_sub_pane_g4

0x3222,	// (0x00003222) bg_popup_sub_pane_g5

0x322a,	// (0x0000322a) bg_popup_sub_pane_g6

0x3232,	// (0x00003232) bg_popup_sub_pane_g7

0x323a,	// (0x0000323a) bg_popup_sub_pane_g8

0x3242,	// (0x00003242) bg_popup_sub_pane_g9

0x0008,

0x9e63,	// (0x00009e63) bg_popup_sub_pane_g

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

0x9b98,	// (0x00009b98) popup_note_window_t_ParamLimits

0x9b98,	// (0x00009b98) popup_note_window_t

0x084d,	// (0x0000084d) bg_popup_window_pane_cp6_ParamLimits

0x084d,	// (0x0000084d) bg_popup_window_pane_cp6

0x3a87,	// (0x00003a87) popup_note_image_window_g1_ParamLimits

0x3a87,	// (0x00003a87) popup_note_image_window_g1

0x3a93,	// (0x00003a93) popup_note_image_window_g2_ParamLimits

0x3a93,	// (0x00003a93) popup_note_image_window_g2

0x0001,

0x9e57,	// (0x00009e57) popup_note_image_window_g_ParamLimits

0x9e57,	// (0x00009e57) popup_note_image_window_g

0x3aac,	// (0x00003aac) popup_note_image_window_t1_ParamLimits

0x3aac,	// (0x00003aac) popup_note_image_window_t1

0x3ac5,	// (0x00003ac5) popup_note_image_window_t2_ParamLimits

0x3ac5,	// (0x00003ac5) popup_note_image_window_t2

0x3ade,	// (0x00003ade) popup_note_image_window_t3_ParamLimits

0x3ade,	// (0x00003ade) popup_note_image_window_t3

0x0002,

0x9e5c,	// (0x00009e5c) popup_note_image_window_t_ParamLimits

0x9e5c,	// (0x00009e5c) popup_note_image_window_t

0x3956,	// (0x00003956) bg_popup_window_pane_cp7_ParamLimits

0x3956,	// (0x00003956) bg_popup_window_pane_cp7

0x3986,	// (0x00003986) popup_note_wait_window_g1_ParamLimits

0x3986,	// (0x00003986) popup_note_wait_window_g1

0x3992,	// (0x00003992) popup_note_wait_window_g2_ParamLimits

0x3992,	// (0x00003992) popup_note_wait_window_g2

0x0002,

0x9e45,	// (0x00009e45) popup_note_wait_window_g_ParamLimits

0x9e45,	// (0x00009e45) popup_note_wait_window_g

0x39aa,	// (0x000039aa) popup_note_wait_window_t1_ParamLimits

0x39aa,	// (0x000039aa) popup_note_wait_window_t1

0x39d1,	// (0x000039d1) popup_note_wait_window_t2_ParamLimits

0x39d1,	// (0x000039d1) popup_note_wait_window_t2

0x39ee,	// (0x000039ee) popup_note_wait_window_t3_ParamLimits

0x39ee,	// (0x000039ee) popup_note_wait_window_t3

0x3a01,	// (0x00003a01) popup_note_wait_window_t4_ParamLimits

0x3a01,	// (0x00003a01) popup_note_wait_window_t4

0x0004,

0x9e4c,	// (0x00009e4c) popup_note_wait_window_t_ParamLimits

0x9e4c,	// (0x00009e4c) popup_note_wait_window_t

0x3a26,	// (0x00003a26) wait_bar_pane_ParamLimits

0x3a26,	// (0x00003a26) wait_bar_pane

0x024e,	// (0x0000024e) wait_anim_pane

0x024e,	// (0x0000024e) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0x9d17,	// (0x00009d17) wait_anim_pane_g

0x3906,	// (0x00003906) wait_border_pane_g1

0x390f,	// (0x0000390f) wait_border_pane_g2

0x3918,	// (0x00003918) wait_border_pane_g3

0x0002,

0x9e3e,	// (0x00009e3e) wait_border_pane_g

0x3868,	// (0x00003868) bg_popup_window_pane_cp16_ParamLimits

0x3868,	// (0x00003868) bg_popup_window_pane_cp16

0x3876,	// (0x00003876) indicator_popup_pane_cp4_ParamLimits

0x3876,	// (0x00003876) indicator_popup_pane_cp4

0x388a,	// (0x0000388a) popup_query_data_window_t1_ParamLimits

0x388a,	// (0x0000388a) popup_query_data_window_t1

0x389c,	// (0x0000389c) popup_query_data_window_t2_ParamLimits

0x389c,	// (0x0000389c) popup_query_data_window_t2

0x38b5,	// (0x000038b5) popup_query_data_window_t3_ParamLimits

0x38b5,	// (0x000038b5) popup_query_data_window_t3

0x0002,

0x9e37,	// (0x00009e37) popup_query_data_window_t_ParamLimits

0x9e37,	// (0x00009e37) popup_query_data_window_t

0x38cf,	// (0x000038cf) query_popup_data_pane_ParamLimits

0x38cf,	// (0x000038cf) query_popup_data_pane

0x38e3,	// (0x000038e3) query_popup_data_pane_cp1_ParamLimits

0x38e3,	// (0x000038e3) query_popup_data_pane_cp1

0x084d,	// (0x0000084d) bg_popup_window_pane_cp10_ParamLimits

0x084d,	// (0x0000084d) bg_popup_window_pane_cp10

0x37cb,	// (0x000037cb) indicator_popup_pane_ParamLimits

0x37cb,	// (0x000037cb) indicator_popup_pane

0x08a4,	// (0x000008a4) popup_query_code_window_t1_ParamLimits

0x08a4,	// (0x000008a4) popup_query_code_window_t1

0x37e3,	// (0x000037e3) popup_query_code_window_t2_ParamLimits

0x37e3,	// (0x000037e3) popup_query_code_window_t2

0x3821,	// (0x00003821) popup_query_code_window_t3_ParamLimits

0x3821,	// (0x00003821) popup_query_code_window_t3

0x0002,

0x9e30,	// (0x00009e30) popup_query_code_window_t_ParamLimits

0x9e30,	// (0x00009e30) popup_query_code_window_t

0x3850,	// (0x00003850) query_popup_pane_ParamLimits

0x3850,	// (0x00003850) query_popup_pane

0x084d,	// (0x0000084d) bg_popup_window_pane_cp15_ParamLimits

0x084d,	// (0x0000084d) bg_popup_window_pane_cp15

0x086b,	// (0x0000086b) indicator_popup_pane_cp1_ParamLimits

0x086b,	// (0x0000086b) indicator_popup_pane_cp1

0x087e,	// (0x0000087e) indicator_popup_pane_cp2_ParamLimits

0x087e,	// (0x0000087e) indicator_popup_pane_cp2

0x0891,	// (0x00000891) popup_query_data_code_window_g1_ParamLimits

0x0891,	// (0x00000891) popup_query_data_code_window_g1

0x08a4,	// (0x000008a4) popup_query_data_code_window_t1_ParamLimits

0x08a4,	// (0x000008a4) popup_query_data_code_window_t1

0x08b6,	// (0x000008b6) popup_query_data_code_window_t2_ParamLimits

0x08b6,	// (0x000008b6) popup_query_data_code_window_t2

0x08c8,	// (0x000008c8) popup_query_data_code_window_t3_ParamLimits

0x08c8,	// (0x000008c8) popup_query_data_code_window_t3

0x08de,	// (0x000008de) popup_query_data_code_window_t4_ParamLimits

0x08de,	// (0x000008de) popup_query_data_code_window_t4

0x0003,

0x9ba3,	// (0x00009ba3) popup_query_data_code_window_t_ParamLimits

0x9ba3,	// (0x00009ba3) popup_query_data_code_window_t

0x2157,	// (0x00002157) list_single_midp_graphic_pane_g3

0x08f6,	// (0x000008f6) query_popup_data_pane_cp2_ParamLimits

0x0909,	// (0x00000909) query_popup_pane_cp2_ParamLimits

0x0909,	// (0x00000909) query_popup_pane_cp2

0x024e,	// (0x0000024e) bg_popup_window_pane_cp11

0x379f,	// (0x0000379f) heading_pane_cp5

0x09ed,	// (0x000009ed) listscroll_popup_info_pane

0x024e,	// (0x0000024e) input_focus_pane_cp3

0x091c,	// (0x0000091c) query_popup_pane_t1

0x092a,	// (0x0000092a) list_popup_info_pane_ParamLimits

0x092a,	// (0x0000092a) list_popup_info_pane

0x0939,	// (0x00000939) listscroll_popup_info_pane_g1

0x0941,	// (0x00000941) scroll_pane_cp7

0x0949,	// (0x00000949) popup_info_list_pane_t1_ParamLimits

0x0949,	// (0x00000949) popup_info_list_pane_t1

0x0963,	// (0x00000963) popup_info_list_pane_t2_ParamLimits

0x0963,	// (0x00000963) popup_info_list_pane_t2

0x0001,

0x9bac,	// (0x00009bac) popup_info_list_pane_t_ParamLimits

0x9bac,	// (0x00009bac) popup_info_list_pane_t

0x024e,	// (0x0000024e) bg_popup_window_pane_cp12

0x4d32,	// (0x00004d32) find_popup_pane

0x0474,	// (0x00000474) bg_popup_window_pane_cp3

0x097d,	// (0x0000097d) heading_pane_cp3

0x0989,	// (0x00000989) listscroll_popup_graphic_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp4

0xa994,	// (0x0000a994) heading_pane_cp4

0x09ed,	// (0x000009ed) listscroll_popup_colour_pane

0x09f5,	// (0x000009f5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x09f5,	// (0x000009f5) cell_large_graphic_colour_none_popup_pane

0xa99c,	// (0x0000a99c) grid_large_graphic_colour_popup_pane_ParamLimits

0xa99c,	// (0x0000a99c) grid_large_graphic_colour_popup_pane

0xa9b8,	// (0x0000a9b8) listscroll_popup_colour_pane_g1_ParamLimits

0xa9b8,	// (0x0000a9b8) listscroll_popup_colour_pane_g1

0xa9cf,	// (0x0000a9cf) listscroll_popup_colour_pane_g2_ParamLimits

0xa9cf,	// (0x0000a9cf) listscroll_popup_colour_pane_g2

0x0a4c,	// (0x00000a4c) listscroll_popup_colour_pane_g3_ParamLimits

0x0a4c,	// (0x00000a4c) listscroll_popup_colour_pane_g3

0xa9e3,	// (0x0000a9e3) listscroll_popup_colour_pane_g4_ParamLimits

0xa9e3,	// (0x0000a9e3) listscroll_popup_colour_pane_g4

0x0003,

0xe0ae,	// (0x0000e0ae) listscroll_popup_colour_pane_g_ParamLimits

0xe0ae,	// (0x0000e0ae) listscroll_popup_colour_pane_g

0x0a6b,	// (0x00000a6b) scroll_pane_cp6_ParamLimits

0x0a6b,	// (0x00000a6b) scroll_pane_cp6

0xa9f2,	// (0x0000a9f2) cell_large_graphic_colour_popup_pane_ParamLimits

0xa9f2,	// (0x0000a9f2) cell_large_graphic_colour_popup_pane

0x0a9c,	// (0x00000a9c) cell_large_graphic_colour_none_popup_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp5

0x0aab,	// (0x00000aab) cell_large_graphic_colour_popup_pane_g1

0x0ab3,	// (0x00000ab3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0x9bba,	// (0x00009bba) cell_large_graphic_colour_popup_pane_g

0x0abb,	// (0x00000abb) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp4

0x0acc,	// (0x00000acc) bg_popup_window_pane_cp8_ParamLimits

0x0acc,	// (0x00000acc) bg_popup_window_pane_cp8

0x0ae7,	// (0x00000ae7) popup_snote_single_text_window_g1_ParamLimits

0x0ae7,	// (0x00000ae7) popup_snote_single_text_window_g1

0x0af9,	// (0x00000af9) popup_snote_single_text_window_t1_ParamLimits

0x0af9,	// (0x00000af9) popup_snote_single_text_window_t1

0x0b0c,	// (0x00000b0c) popup_snote_single_text_window_t2_ParamLimits

0x0b0c,	// (0x00000b0c) popup_snote_single_text_window_t2

0x0b1f,	// (0x00000b1f) popup_snote_single_text_window_t3_ParamLimits

0x0b1f,	// (0x00000b1f) popup_snote_single_text_window_t3

0x0b58,	// (0x00000b58) popup_snote_single_text_window_t4_ParamLimits

0x0b58,	// (0x00000b58) popup_snote_single_text_window_t4

0x0b8c,	// (0x00000b8c) popup_snote_single_text_window_t5_ParamLimits

0x0b8c,	// (0x00000b8c) popup_snote_single_text_window_t5

0x0004,

0x9bbf,	// (0x00009bbf) popup_snote_single_text_window_t_ParamLimits

0x9bbf,	// (0x00009bbf) popup_snote_single_text_window_t

0x0bbb,	// (0x00000bbb) bg_popup_window_pane_cp9_ParamLimits

0x0bbb,	// (0x00000bbb) bg_popup_window_pane_cp9

0x0ae7,	// (0x00000ae7) popup_snote_single_graphic_window_g1_ParamLimits

0x0ae7,	// (0x00000ae7) popup_snote_single_graphic_window_g1

0x0bc9,	// (0x00000bc9) popup_snote_single_graphic_window_g2_ParamLimits

0x0bc9,	// (0x00000bc9) popup_snote_single_graphic_window_g2

0x0001,

0x9bca,	// (0x00009bca) popup_snote_single_graphic_window_g_ParamLimits

0x9bca,	// (0x00009bca) popup_snote_single_graphic_window_g

0x0bd5,	// (0x00000bd5) popup_snote_single_graphic_window_t1_ParamLimits

0x0bd5,	// (0x00000bd5) popup_snote_single_graphic_window_t1

0x0be8,	// (0x00000be8) popup_snote_single_graphic_window_t2_ParamLimits

0x0be8,	// (0x00000be8) popup_snote_single_graphic_window_t2

0x0b1f,	// (0x00000b1f) popup_snote_single_graphic_window_t3_ParamLimits

0x0b1f,	// (0x00000b1f) popup_snote_single_graphic_window_t3

0x0b58,	// (0x00000b58) popup_snote_single_graphic_window_t4_ParamLimits

0x0b58,	// (0x00000b58) popup_snote_single_graphic_window_t4

0x0b8c,	// (0x00000b8c) popup_snote_single_graphic_window_t5_ParamLimits

0x0b8c,	// (0x00000b8c) popup_snote_single_graphic_window_t5

0x0004,

0x9bcf,	// (0x00009bcf) popup_snote_single_graphic_window_t_ParamLimits

0x9bcf,	// (0x00009bcf) popup_snote_single_graphic_window_t

0xc380,	// (0x0000c380) grid_graphic_popup_pane_ParamLimits

0xc380,	// (0x0000c380) grid_graphic_popup_pane

0xc3a3,	// (0x0000c3a3) listscroll_popup_graphic_pane_g1_ParamLimits

0xc3a3,	// (0x0000c3a3) listscroll_popup_graphic_pane_g1

0xc3b7,	// (0x0000c3b7) listscroll_popup_graphic_pane_g2_ParamLimits

0xc3b7,	// (0x0000c3b7) listscroll_popup_graphic_pane_g2

0x0001,

0xe245,	// (0x0000e245) listscroll_popup_graphic_pane_g_ParamLimits

0xe245,	// (0x0000e245) listscroll_popup_graphic_pane_g

0x4c32,	// (0x00004c32) scroll_pane_cp5

0xc33b,	// (0x0000c33b) cell_graphic_popup_pane_ParamLimits

0xc33b,	// (0x0000c33b) cell_graphic_popup_pane

0x4b6b,	// (0x00004b6b) cell_graphic_popup_pane_g1

0x4b73,	// (0x00004b73) cell_graphic_popup_pane_g2

0x0abb,	// (0x00000abb) cell_graphic_popup_pane_g3

0x0002,

0x9fa6,	// (0x00009fa6) cell_graphic_popup_pane_g

0x4b7c,	// (0x00004b7c) cell_graphic_popup_pane_t2

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp3

0x0c0d,	// (0x00000c0d) list_gen_pane_ParamLimits

0x0c0d,	// (0x00000c0d) list_gen_pane

0x0c3e,	// (0x00000c3e) scroll_pane

0xc30e,	// (0x0000c30e) bg_list_pane_g1_ParamLimits

0xc30e,	// (0x0000c30e) bg_list_pane_g1

0x4b02,	// (0x00004b02) bg_list_pane_g2_ParamLimits

0x4b02,	// (0x00004b02) bg_list_pane_g2

0x4b15,	// (0x00004b15) bg_list_pane_g3_ParamLimits

0x4b15,	// (0x00004b15) bg_list_pane_g3

0x4b27,	// (0x00004b27) bg_list_pane_g4_ParamLimits

0x4b27,	// (0x00004b27) bg_list_pane_g4

0xc329,	// (0x0000c329) bg_list_pane_g5_ParamLimits

0xc329,	// (0x0000c329) bg_list_pane_g5

0x0004,

0xe23a,	// (0x0000e23a) bg_list_pane_g_ParamLimits

0xe23a,	// (0x0000e23a) bg_list_pane_g

0xc29e,	// (0x0000c29e) list_double2_graphic_large_graphic_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double2_graphic_large_graphic_pane

0xc29e,	// (0x0000c29e) list_double2_graphic_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double2_graphic_pane

0xc29e,	// (0x0000c29e) list_double2_large_graphic_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double2_large_graphic_pane

0xc29e,	// (0x0000c29e) list_double2_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double2_pane

0xc29e,	// (0x0000c29e) list_double_graphic_heading_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double_graphic_heading_pane

0xc29e,	// (0x0000c29e) list_double_graphic_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double_graphic_pane

0xc29e,	// (0x0000c29e) list_double_heading_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double_heading_pane

0xc29e,	// (0x0000c29e) list_double_large_graphic_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double_large_graphic_pane

0xc29e,	// (0x0000c29e) list_double_number_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double_number_pane

0xc29e,	// (0x0000c29e) list_double_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double_pane

0xc29e,	// (0x0000c29e) list_double_time_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_double_time_pane

0xc29e,	// (0x0000c29e) list_setting_number_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_setting_number_pane

0xc29e,	// (0x0000c29e) list_setting_pane_ParamLimits

0xc29e,	// (0x0000c29e) list_setting_pane

0xc2af,	// (0x0000c2af) list_single_2graphic_pane_ParamLimits

0xc2af,	// (0x0000c2af) list_single_2graphic_pane

0xc2af,	// (0x0000c2af) list_single_graphic_heading_pane_ParamLimits

0xc2af,	// (0x0000c2af) list_single_graphic_heading_pane

0xc2af,	// (0x0000c2af) list_single_graphic_pane_ParamLimits

0xc2af,	// (0x0000c2af) list_single_graphic_pane

0xc2af,	// (0x0000c2af) list_single_heading_pane_ParamLimits

0xc2af,	// (0x0000c2af) list_single_heading_pane

0xc2fc,	// (0x0000c2fc) list_single_large_graphic_pane_ParamLimits

0xc2fc,	// (0x0000c2fc) list_single_large_graphic_pane

0xc2af,	// (0x0000c2af) list_single_number_heading_pane_ParamLimits

0xc2af,	// (0x0000c2af) list_single_number_heading_pane

0xc2af,	// (0x0000c2af) list_single_number_pane_ParamLimits

0xc2af,	// (0x0000c2af) list_single_number_pane

0xc2af,	// (0x0000c2af) list_single_pane_ParamLimits

0xc2af,	// (0x0000c2af) list_single_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp1

0x0e80,	// (0x00000e80) list_single_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_pane_g1

0x0dab,	// (0x00000dab) list_single_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_pane_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_single_pane_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_single_pane_g

0x0db7,	// (0x00000db7) list_single_pane_t1_ParamLimits

0x0db7,	// (0x00000db7) list_single_pane_t1

0x0e80,	// (0x00000e80) list_single_number_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_pane_g1

0x0dab,	// (0x00000dab) list_single_number_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_pane_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_single_number_pane_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_single_number_pane_g

0x0e8c,	// (0x00000e8c) list_single_number_pane_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_single_number_pane_t1

0xc102,	// (0x0000c102) list_single_number_pane_t2_ParamLimits

0xc102,	// (0x0000c102) list_single_number_pane_t2

0x0001,

0xe1fb,	// (0x0000e1fb) list_single_number_pane_t_ParamLimits

0xe1fb,	// (0x0000e1fb) list_single_number_pane_t

0x0e74,	// (0x00000e74) list_single_graphic_pane_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_pane_g1

0x0e80,	// (0x00000e80) list_single_graphic_pane_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_pane_g2

0x0dab,	// (0x00000dab) list_single_graphic_pane_g3_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_pane_g3

0x0002,

0x9c2e,	// (0x00009c2e) list_single_graphic_pane_g_ParamLimits

0x9c2e,	// (0x00009c2e) list_single_graphic_pane_g

0x0e8c,	// (0x00000e8c) list_single_graphic_pane_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_single_graphic_pane_t1

0x0e80,	// (0x00000e80) list_single_heading_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_g1

0x0dab,	// (0x00000dab) list_single_heading_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_heading_pane_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_single_heading_pane_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_single_heading_pane_g

0x0f49,	// (0x00000f49) list_single_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_heading_pane_t1

0xaa19,	// (0x0000aa19) list_single_heading_pane_t2_ParamLimits

0xaa19,	// (0x0000aa19) list_single_heading_pane_t2

0x0001,

0xe0b7,	// (0x0000e0b7) list_single_heading_pane_t_ParamLimits

0xe0b7,	// (0x0000e0b7) list_single_heading_pane_t

0x0e80,	// (0x00000e80) list_single_number_heading_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_heading_pane_g1

0x0dab,	// (0x00000dab) list_single_number_heading_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_heading_pane_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_single_number_heading_pane_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_single_number_heading_pane_g

0x0f49,	// (0x00000f49) list_single_number_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_number_heading_pane_t1

0xaa2b,	// (0x0000aa2b) list_single_number_heading_pane_t2_ParamLimits

0xaa2b,	// (0x0000aa2b) list_single_number_heading_pane_t2

0x52b0,	// (0x000052b0) list_single_number_heading_pane_t3_ParamLimits

0x52b0,	// (0x000052b0) list_single_number_heading_pane_t3

0x0002,

0xe0bc,	// (0x0000e0bc) list_single_number_heading_pane_t_ParamLimits

0xe0bc,	// (0x0000e0bc) list_single_number_heading_pane_t

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_g1

0xaa3d,	// (0x0000aa3d) list_single_graphic_heading_pane_g4_ParamLimits

0xaa3d,	// (0x0000aa3d) list_single_graphic_heading_pane_g4

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_g5

0x0002,

0xe0c3,	// (0x0000e0c3) list_single_graphic_heading_pane_g_ParamLimits

0xe0c3,	// (0x0000e0c3) list_single_graphic_heading_pane_g

0x0f49,	// (0x00000f49) list_single_graphic_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_graphic_heading_pane_t1

0xaa4e,	// (0x0000aa4e) list_single_graphic_heading_pane_t2_ParamLimits

0xaa4e,	// (0x0000aa4e) list_single_graphic_heading_pane_t2

0x0001,

0xe0ca,	// (0x0000e0ca) list_single_graphic_heading_pane_t_ParamLimits

0xe0ca,	// (0x0000e0ca) list_single_graphic_heading_pane_t

0x0d1a,	// (0x00000d1a) list_single_large_graphic_pane_g1_ParamLimits

0x0d1a,	// (0x00000d1a) list_single_large_graphic_pane_g1

0x0d26,	// (0x00000d26) list_single_large_graphic_pane_g2_ParamLimits

0x0d26,	// (0x00000d26) list_single_large_graphic_pane_g2

0x0d32,	// (0x00000d32) list_single_large_graphic_pane_g3_ParamLimits

0x0d32,	// (0x00000d32) list_single_large_graphic_pane_g3

0x0002,

0x9bfe,	// (0x00009bfe) list_single_large_graphic_pane_g_ParamLimits

0x9bfe,	// (0x00009bfe) list_single_large_graphic_pane_g

0x390f,	// (0x0000390f) wait_border_pane_g2_copy1

0x0d3e,	// (0x00000d3e) list_single_large_graphic_pane_g4_cp2

0x0d46,	// (0x00000d46) list_single_large_graphic_pane_t1_ParamLimits

0x0d46,	// (0x00000d46) list_single_large_graphic_pane_t1

0xaa60,	// (0x0000aa60) list_double_pane_g1_ParamLimits

0xaa60,	// (0x0000aa60) list_double_pane_g1

0xaa6c,	// (0x0000aa6c) list_double_pane_g2_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double_pane_g2

0x0001,

0xe0cf,	// (0x0000e0cf) list_double_pane_g_ParamLimits

0xe0cf,	// (0x0000e0cf) list_double_pane_g

0xaa78,	// (0x0000aa78) list_double_pane_t1_ParamLimits

0xaa78,	// (0x0000aa78) list_double_pane_t1

0xaa8e,	// (0x0000aa8e) list_double_pane_t2_ParamLimits

0xaa8e,	// (0x0000aa8e) list_double_pane_t2

0x0001,

0xe0d4,	// (0x0000e0d4) list_double_pane_t_ParamLimits

0xe0d4,	// (0x0000e0d4) list_double_pane_t

0xaaa0,	// (0x0000aaa0) list_double2_pane_g1_ParamLimits

0xaaa0,	// (0x0000aaa0) list_double2_pane_g1

0xaa6c,	// (0x0000aa6c) list_double2_pane_g2_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double2_pane_g2

0x0001,

0xe0d9,	// (0x0000e0d9) list_double2_pane_g_ParamLimits

0xe0d9,	// (0x0000e0d9) list_double2_pane_g

0xaa78,	// (0x0000aa78) list_double2_pane_t1_ParamLimits

0xaa78,	// (0x0000aa78) list_double2_pane_t1

0xaab1,	// (0x0000aab1) list_double2_pane_t2_ParamLimits

0xaab1,	// (0x0000aab1) list_double2_pane_t2

0x0001,

0xe0de,	// (0x0000e0de) list_double2_pane_t_ParamLimits

0xe0de,	// (0x0000e0de) list_double2_pane_t

0xaa60,	// (0x0000aa60) list_double_number_pane_g1_ParamLimits

0xaa60,	// (0x0000aa60) list_double_number_pane_g1

0xaa6c,	// (0x0000aa6c) list_double_number_pane_g2_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double_number_pane_g2

0x0001,

0xe0cf,	// (0x0000e0cf) list_double_number_pane_g_ParamLimits

0xe0cf,	// (0x0000e0cf) list_double_number_pane_g

0xaac3,	// (0x0000aac3) list_double_number_pane_t1_ParamLimits

0xaac3,	// (0x0000aac3) list_double_number_pane_t1

0xaad5,	// (0x0000aad5) list_double_number_pane_t2_ParamLimits

0xaad5,	// (0x0000aad5) list_double_number_pane_t2

0xaaeb,	// (0x0000aaeb) list_double_number_pane_t3_ParamLimits

0xaaeb,	// (0x0000aaeb) list_double_number_pane_t3

0x0002,

0xe0e3,	// (0x0000e0e3) list_double_number_pane_t_ParamLimits

0xe0e3,	// (0x0000e0e3) list_double_number_pane_t

0xaafd,	// (0x0000aafd) list_double_graphic_pane_g1_ParamLimits

0xaafd,	// (0x0000aafd) list_double_graphic_pane_g1

0xab09,	// (0x0000ab09) list_double_graphic_pane_g2_ParamLimits

0xab09,	// (0x0000ab09) list_double_graphic_pane_g2

0xab18,	// (0x0000ab18) list_double_graphic_pane_g3_ParamLimits

0xab18,	// (0x0000ab18) list_double_graphic_pane_g3

0x0003,

0xe0ea,	// (0x0000e0ea) list_double_graphic_pane_g_ParamLimits

0xe0ea,	// (0x0000e0ea) list_double_graphic_pane_g

0xab30,	// (0x0000ab30) list_double_graphic_pane_t1_ParamLimits

0xab30,	// (0x0000ab30) list_double_graphic_pane_t1

0xab46,	// (0x0000ab46) list_double_graphic_pane_t2_ParamLimits

0xab46,	// (0x0000ab46) list_double_graphic_pane_t2

0x0001,

0xe0f3,	// (0x0000e0f3) list_double_graphic_pane_t_ParamLimits

0xe0f3,	// (0x0000e0f3) list_double_graphic_pane_t

0xaafd,	// (0x0000aafd) list_double2_graphic_pane_g1_ParamLimits

0xaafd,	// (0x0000aafd) list_double2_graphic_pane_g1

0xaa60,	// (0x0000aa60) list_double2_graphic_pane_g2_ParamLimits

0xaa60,	// (0x0000aa60) list_double2_graphic_pane_g2

0xaa6c,	// (0x0000aa6c) list_double2_graphic_pane_g3_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double2_graphic_pane_g3

0x0002,

0xe0f8,	// (0x0000e0f8) list_double2_graphic_pane_g_ParamLimits

0xe0f8,	// (0x0000e0f8) list_double2_graphic_pane_g

0xaad5,	// (0x0000aad5) list_double2_graphic_pane_t1_ParamLimits

0xaad5,	// (0x0000aad5) list_double2_graphic_pane_t1

0xab58,	// (0x0000ab58) list_double2_graphic_pane_t2_ParamLimits

0xab58,	// (0x0000ab58) list_double2_graphic_pane_t2

0x0001,

0xe0ff,	// (0x0000e0ff) list_double2_graphic_pane_t_ParamLimits

0xe0ff,	// (0x0000e0ff) list_double2_graphic_pane_t

0xab6a,	// (0x0000ab6a) list_double_large_graphic_pane_g1_ParamLimits

0xab6a,	// (0x0000ab6a) list_double_large_graphic_pane_g1

0xaaa0,	// (0x0000aaa0) list_double_large_graphic_pane_g2_ParamLimits

0xaaa0,	// (0x0000aaa0) list_double_large_graphic_pane_g2

0xaa6c,	// (0x0000aa6c) list_double_large_graphic_pane_g3_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double_large_graphic_pane_g3

0xab93,	// (0x0000ab93) list_double_large_graphic_pane_g4_ParamLimits

0xab93,	// (0x0000ab93) list_double_large_graphic_pane_g4

0x0004,

0xe104,	// (0x0000e104) list_double_large_graphic_pane_g_ParamLimits

0xe104,	// (0x0000e104) list_double_large_graphic_pane_g

0xaba4,	// (0x0000aba4) list_double_large_graphic_pane_t1_ParamLimits

0xaba4,	// (0x0000aba4) list_double_large_graphic_pane_t1

0xabbd,	// (0x0000abbd) list_double_large_graphic_pane_t2_ParamLimits

0xabbd,	// (0x0000abbd) list_double_large_graphic_pane_t2

0x0001,

0xe10f,	// (0x0000e10f) list_double_large_graphic_pane_t_ParamLimits

0xe10f,	// (0x0000e10f) list_double_large_graphic_pane_t

0xabcf,	// (0x0000abcf) list_double2_large_graphic_pane_g1_ParamLimits

0xabcf,	// (0x0000abcf) list_double2_large_graphic_pane_g1

0xaaa0,	// (0x0000aaa0) list_double2_large_graphic_pane_g2_ParamLimits

0xaaa0,	// (0x0000aaa0) list_double2_large_graphic_pane_g2

0xaa6c,	// (0x0000aa6c) list_double2_large_graphic_pane_g3_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double2_large_graphic_pane_g3

0x0002,

0xe114,	// (0x0000e114) list_double2_large_graphic_pane_g_ParamLimits

0xe114,	// (0x0000e114) list_double2_large_graphic_pane_g

0xabdb,	// (0x0000abdb) list_double2_large_graphic_pane_t1_ParamLimits

0xabdb,	// (0x0000abdb) list_double2_large_graphic_pane_t1

0xabf1,	// (0x0000abf1) list_double2_large_graphic_pane_t2_ParamLimits

0xabf1,	// (0x0000abf1) list_double2_large_graphic_pane_t2

0x0001,

0xe11b,	// (0x0000e11b) list_double2_large_graphic_pane_t_ParamLimits

0xe11b,	// (0x0000e11b) list_double2_large_graphic_pane_t

0xac03,	// (0x0000ac03) list_double_heading_pane_g1_ParamLimits

0xac03,	// (0x0000ac03) list_double_heading_pane_g1

0x0c8b,	// (0x00000c8b) list_double_heading_pane_g2_ParamLimits

0x0c8b,	// (0x00000c8b) list_double_heading_pane_g2

0x0001,

0xe120,	// (0x0000e120) list_double_heading_pane_g_ParamLimits

0xe120,	// (0x0000e120) list_double_heading_pane_g

0xac14,	// (0x0000ac14) list_double_heading_pane_t1_ParamLimits

0xac14,	// (0x0000ac14) list_double_heading_pane_t1

0xac2a,	// (0x0000ac2a) list_double_heading_pane_t2_ParamLimits

0xac2a,	// (0x0000ac2a) list_double_heading_pane_t2

0x0001,

0xe125,	// (0x0000e125) list_double_heading_pane_t_ParamLimits

0xe125,	// (0x0000e125) list_double_heading_pane_t

0x0e19,	// (0x00000e19) list_double_graphic_heading_pane_g1_ParamLimits

0x0e19,	// (0x00000e19) list_double_graphic_heading_pane_g1

0xac03,	// (0x0000ac03) list_double_graphic_heading_pane_g2_ParamLimits

0xac03,	// (0x0000ac03) list_double_graphic_heading_pane_g2

0x0c8b,	// (0x00000c8b) list_double_graphic_heading_pane_g3_ParamLimits

0x0c8b,	// (0x00000c8b) list_double_graphic_heading_pane_g3

0x0002,

0xe12a,	// (0x0000e12a) list_double_graphic_heading_pane_g_ParamLimits

0xe12a,	// (0x0000e12a) list_double_graphic_heading_pane_g

0xac3c,	// (0x0000ac3c) list_double_graphic_heading_pane_t1_ParamLimits

0xac3c,	// (0x0000ac3c) list_double_graphic_heading_pane_t1

0xac52,	// (0x0000ac52) list_double_graphic_heading_pane_t2_ParamLimits

0xac52,	// (0x0000ac52) list_double_graphic_heading_pane_t2

0x0001,

0xe131,	// (0x0000e131) list_double_graphic_heading_pane_t_ParamLimits

0xe131,	// (0x0000e131) list_double_graphic_heading_pane_t

0xaaa0,	// (0x0000aaa0) list_double_time_pane_g1_ParamLimits

0xaaa0,	// (0x0000aaa0) list_double_time_pane_g1

0xaa6c,	// (0x0000aa6c) list_double_time_pane_g2_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double_time_pane_g2

0x0001,

0xe0d9,	// (0x0000e0d9) list_double_time_pane_g_ParamLimits

0xe0d9,	// (0x0000e0d9) list_double_time_pane_g

0xabdb,	// (0x0000abdb) list_double_time_pane_t1_ParamLimits

0xabdb,	// (0x0000abdb) list_double_time_pane_t1

0xac64,	// (0x0000ac64) list_double_time_pane_t2_ParamLimits

0xac64,	// (0x0000ac64) list_double_time_pane_t2

0xac76,	// (0x0000ac76) list_double_time_pane_t3_ParamLimits

0xac76,	// (0x0000ac76) list_double_time_pane_t3

0xac88,	// (0x0000ac88) list_double_time_pane_t4_ParamLimits

0xac88,	// (0x0000ac88) list_double_time_pane_t4

0x0003,

0xe136,	// (0x0000e136) list_double_time_pane_t_ParamLimits

0xe136,	// (0x0000e136) list_double_time_pane_t

0xaa60,	// (0x0000aa60) list_setting_pane_g1_ParamLimits

0xaa60,	// (0x0000aa60) list_setting_pane_g1

0xaa6c,	// (0x0000aa6c) list_setting_pane_g2_ParamLimits

0xaa6c,	// (0x0000aa6c) list_setting_pane_g2

0x0001,

0xe0cf,	// (0x0000e0cf) list_setting_pane_g_ParamLimits

0xe0cf,	// (0x0000e0cf) list_setting_pane_g

0xac9a,	// (0x0000ac9a) list_setting_pane_t1_ParamLimits

0xac9a,	// (0x0000ac9a) list_setting_pane_t1

0xacb4,	// (0x0000acb4) list_setting_pane_t2_ParamLimits

0xacb4,	// (0x0000acb4) list_setting_pane_t2

0x0002,

0xe13f,	// (0x0000e13f) list_setting_pane_t_ParamLimits

0xe13f,	// (0x0000e13f) list_setting_pane_t

0xacf1,	// (0x0000acf1) set_value_pane_cp_ParamLimits

0xacf1,	// (0x0000acf1) set_value_pane_cp

0xaa60,	// (0x0000aa60) list_setting_number_pane_g1_ParamLimits

0xaa60,	// (0x0000aa60) list_setting_number_pane_g1

0xaa6c,	// (0x0000aa6c) list_setting_number_pane_g2_ParamLimits

0xaa6c,	// (0x0000aa6c) list_setting_number_pane_g2

0x0001,

0xe0cf,	// (0x0000e0cf) list_setting_number_pane_g_ParamLimits

0xe0cf,	// (0x0000e0cf) list_setting_number_pane_g

0xacfd,	// (0x0000acfd) list_setting_number_pane_t1_ParamLimits

0xacfd,	// (0x0000acfd) list_setting_number_pane_t1

0xad16,	// (0x0000ad16) list_setting_number_pane_t2_ParamLimits

0xad16,	// (0x0000ad16) list_setting_number_pane_t2

0xad30,	// (0x0000ad30) list_setting_number_pane_t3_ParamLimits

0xad30,	// (0x0000ad30) list_setting_number_pane_t3

0x0003,

0xe146,	// (0x0000e146) list_setting_number_pane_t_ParamLimits

0xe146,	// (0x0000e146) list_setting_number_pane_t

0xacf1,	// (0x0000acf1) set_value_pane_ParamLimits

0xacf1,	// (0x0000acf1) set_value_pane

0x10ce,	// (0x000010ce) bg_set_opt_pane_ParamLimits

0x10ce,	// (0x000010ce) bg_set_opt_pane

0x10ef,	// (0x000010ef) set_value_pane_t1

0x10fd,	// (0x000010fd) slider_set_pane_cp3

0x1106,	// (0x00001106) volume_small_pane_cp

0x110f,	// (0x0000110f) list_form_gen_pane

0x0c62,	// (0x00000c62) scroll_pane_cp8

0x55aa,	// (0x000055aa) form_field_data_pane_ParamLimits

0x55aa,	// (0x000055aa) form_field_data_pane

0xad73,	// (0x0000ad73) form_field_data_wide_pane_ParamLimits

0xad73,	// (0x0000ad73) form_field_data_wide_pane

0xad93,	// (0x0000ad93) form_field_popup_pane_ParamLimits

0xad93,	// (0x0000ad93) form_field_popup_pane

0xadab,	// (0x0000adab) form_field_popup_wide_pane_ParamLimits

0xadab,	// (0x0000adab) form_field_popup_wide_pane

0x1196,	// (0x00001196) form_field_slider_pane_ParamLimits

0x1196,	// (0x00001196) form_field_slider_pane

0x11a9,	// (0x000011a9) form_field_slider_wide_pane_ParamLimits

0x11a9,	// (0x000011a9) form_field_slider_wide_pane

0x11bc,	// (0x000011bc) data_form_pane

0xadcc,	// (0x0000adcc) form_field_data_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane

0x11f6,	// (0x000011f6) data_form_wide_pane

0x1222,	// (0x00001222) form_field_data_wide_pane_t1

0x0ad9,	// (0x00000ad9) input_focus_pane_cp6

0xade4,	// (0x0000ade4) form_field_popup_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp7

0x11bc,	// (0x000011bc) list_form_pane

0x1264,	// (0x00001264) form_field_popup_wide_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp8

0x1279,	// (0x00001279) list_form_wide_pane

0xae04,	// (0x0000ae04) form_field_slider_pane_t1_ParamLimits

0xae04,	// (0x0000ae04) form_field_slider_pane_t1

0xae1a,	// (0x0000ae1a) form_field_slider_pane_t2_ParamLimits

0xae1a,	// (0x0000ae1a) form_field_slider_pane_t2

0x0001,

0xe14f,	// (0x0000e14f) form_field_slider_pane_t_ParamLimits

0xe14f,	// (0x0000e14f) form_field_slider_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp9_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9

0xae2f,	// (0x0000ae2f) slider_cont_pane_ParamLimits

0xae2f,	// (0x0000ae2f) slider_cont_pane

0x12cc,	// (0x000012cc) form_field_slider_wide_pane_t1_ParamLimits

0x12cc,	// (0x000012cc) form_field_slider_wide_pane_t1

0x12de,	// (0x000012de) form_field_slider_wide_pane_t2_ParamLimits

0x12de,	// (0x000012de) form_field_slider_wide_pane_t2

0x0001,

0x9c9b,	// (0x00009c9b) form_field_slider_wide_pane_t_ParamLimits

0x9c9b,	// (0x00009c9b) form_field_slider_wide_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp10_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10

0xae43,	// (0x0000ae43) slider_cont_pane_cp1_ParamLimits

0xae43,	// (0x0000ae43) slider_cont_pane_cp1

0xae59,	// (0x0000ae59) slider_form_pane_cp

0x130e,	// (0x0000130e) input_focus_pane_g1

0x1316,	// (0x00001316) input_focus_pane_g2

0x131e,	// (0x0000131e) input_focus_pane_g3

0x1326,	// (0x00001326) input_focus_pane_g4

0x132e,	// (0x0000132e) input_focus_pane_g5

0x1336,	// (0x00001336) input_focus_pane_g6

0x133e,	// (0x0000133e) input_focus_pane_g7

0x1346,	// (0x00001346) input_focus_pane_g8

0x134e,	// (0x0000134e) input_focus_pane_g9

0x002a,	// (0x0000002a) input_focus_pane_g10

0x0009,

0x9ca0,	// (0x00009ca0) input_focus_pane_g

0x3918,	// (0x00003918) wait_border_pane_g3_copy1

0xae61,	// (0x0000ae61) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xc285,	// (0x0000c285) data_form_wide_pane_t1

0x506a,	// (0x0000506a) list_form_graphic_pane_cp_ParamLimits

0x506a,	// (0x0000506a) list_form_graphic_pane_cp

0x49b4,	// (0x000049b4) slider_form_pane_g1

0x49bd,	// (0x000049bd) slider_form_pane_g2

0x0006,

0xe22b,	// (0x0000e22b) slider_form_pane_g

0x1370,	// (0x00001370) list_form_graphic_pane_ParamLimits

0x1370,	// (0x00001370) list_form_graphic_pane

0x139b,	// (0x0000139b) list_form_graphic_pane_g1

0x13a3,	// (0x000013a3) list_form_graphic_pane_t1_ParamLimits

0x13a3,	// (0x000013a3) list_form_graphic_pane_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5

0xae7a,	// (0x0000ae7a) find_pane_g1

0x13c1,	// (0x000013c1) input_find_pane

0xae85,	// (0x0000ae85) input_find_pane_g1_ParamLimits

0xae85,	// (0x0000ae85) input_find_pane_g1

0xae91,	// (0x0000ae91) input_find_pane_t1_ParamLimits

0xae91,	// (0x0000ae91) input_find_pane_t1

0xaea6,	// (0x0000aea6) input_find_pane_t2_ParamLimits

0xaea6,	// (0x0000aea6) input_find_pane_t2

0x0001,

0xe154,	// (0x0000e154) input_find_pane_t_ParamLimits

0xe154,	// (0x0000e154) input_find_pane_t

0x1400,	// (0x00001400) input_focus_pane_cp5_ParamLimits

0x1400,	// (0x00001400) input_focus_pane_cp5

0x0797,	// (0x00000797) bg_popup_window_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_popup_window_pane_cp2

0x141a,	// (0x0000141a) listscroll_menu_pane_ParamLimits

0x141a,	// (0x0000141a) listscroll_menu_pane

0x1426,	// (0x00001426) popup_submenu_window_ParamLimits

0x1426,	// (0x00001426) popup_submenu_window

0x144a,	// (0x0000144a) find_popup_pane_g1

0x1452,	// (0x00001452) input_popup_find_pane_cp

0x1400,	// (0x00001400) input_focus_pane_cp4_ParamLimits

0x1400,	// (0x00001400) input_focus_pane_cp4

0x1468,	// (0x00001468) input_popup_find_pane_t1_ParamLimits

0x1468,	// (0x00001468) input_popup_find_pane_t1

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp

0x1496,	// (0x00001496) listscroll_popup_sub_pane

0x149e,	// (0x0000149e) list_submenu_pane_ParamLimits

0x149e,	// (0x0000149e) list_submenu_pane

0x14af,	// (0x000014af) scroll_pane_cp4

0x14b7,	// (0x000014b7) list_single_popup_submenu_pane_ParamLimits

0x14b7,	// (0x000014b7) list_single_popup_submenu_pane

0x14cb,	// (0x000014cb) list_single_popup_submenu_pane_g1

0x14d3,	// (0x000014d3) list_single_popup_submenu_pane_t1_ParamLimits

0x14d3,	// (0x000014d3) list_single_popup_submenu_pane_t1

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp1

0x4cd3,	// (0x00004cd3) tabs_2_active_pane_g1

0xaec7,	// (0x0000aec7) tabs_2_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1

0x4cd3,	// (0x00004cd3) tabs_2_passive_pane_g1

0xaec7,	// (0x0000aec7) tabs_2_passive_pane_t1

0x0474,	// (0x00000474) bg_active_tab_pane_cp4

0xaedd,	// (0x0000aedd) tabs_2_long_active_pane_t1

0x2834,	// (0x00002834) bg_passive_tab_pane_cp4

0x326d,	// (0x0000326d) list_single_midp_graphic_pane_g4_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5

0xaef4,	// (0x0000aef4) tabs_3_long_active_pane_t1

0x2834,	// (0x00002834) bg_passive_tab_pane_cp5

0x326d,	// (0x0000326d) list_single_midp_graphic_pane_g4

0x0474,	// (0x00000474) bg_popup_window_pane_cp13_ParamLimits

0x0474,	// (0x00000474) bg_popup_window_pane_cp13

0x154a,	// (0x0000154a) listscroll_popup_fast_pane_ParamLimits

0x154a,	// (0x0000154a) listscroll_popup_fast_pane

0x1559,	// (0x00001559) grid_popup_fast_pane_ParamLimits

0x1559,	// (0x00001559) grid_popup_fast_pane

0x156b,	// (0x0000156b) scroll_pane_cp9_ParamLimits

0x156b,	// (0x0000156b) scroll_pane_cp9

0x692a,	// (0x0000692a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x692a,	// (0x0000692a) list_single_graphic_hl_pane_t1_cp2

0x158f,	// (0x0000158f) input_focus_pane_cp20_ParamLimits

0x158f,	// (0x0000158f) input_focus_pane_cp20

0x159d,	// (0x0000159d) query_popup_data_pane_t1_ParamLimits

0x159d,	// (0x0000159d) query_popup_data_pane_t1

0x15b0,	// (0x000015b0) query_popup_data_pane_t2_ParamLimits

0x15b0,	// (0x000015b0) query_popup_data_pane_t2

0x15f6,	// (0x000015f6) query_popup_data_pane_t3_ParamLimits

0x15f6,	// (0x000015f6) query_popup_data_pane_t3

0x1637,	// (0x00001637) query_popup_data_pane_t4_ParamLimits

0x1637,	// (0x00001637) query_popup_data_pane_t4

0x1673,	// (0x00001673) query_popup_data_pane_t5_ParamLimits

0x1673,	// (0x00001673) query_popup_data_pane_t5

0x0004,

0x9cba,	// (0x00009cba) query_popup_data_pane_t_ParamLimits

0x9cba,	// (0x00009cba) query_popup_data_pane_t

0x130e,	// (0x0000130e) bg_set_opt_pane_g1

0x1316,	// (0x00001316) bg_set_opt_pane_g2

0x131e,	// (0x0000131e) bg_set_opt_pane_g3

0x1326,	// (0x00001326) bg_set_opt_pane_g4

0x132e,	// (0x0000132e) bg_set_opt_pane_g5

0x1336,	// (0x00001336) bg_set_opt_pane_g6

0x133e,	// (0x0000133e) bg_set_opt_pane_g7

0x1346,	// (0x00001346) bg_set_opt_pane_g8

0x134e,	// (0x0000134e) bg_set_opt_pane_g9

0x0008,

0x9cc5,	// (0x00009cc5) bg_set_opt_pane_g

0x1ebc,	// (0x00001ebc) control_top_pane_stacon_ParamLimits

0x1ebc,	// (0x00001ebc) control_top_pane_stacon

0x1f0f,	// (0x00001f0f) signal_pane_stacon_ParamLimits

0x1f0f,	// (0x00001f0f) signal_pane_stacon

0x1f34,	// (0x00001f34) stacon_top_pane_g1_ParamLimits

0x1f34,	// (0x00001f34) stacon_top_pane_g1

0x1f56,	// (0x00001f56) title_pane_stacon_ParamLimits

0x1f56,	// (0x00001f56) title_pane_stacon

0x1f78,	// (0x00001f78) uni_indicator_pane_stacon_ParamLimits

0x1f78,	// (0x00001f78) uni_indicator_pane_stacon

0x1f8d,	// (0x00001f8d) battery_pane_stacon_ParamLimits

0x1f8d,	// (0x00001f8d) battery_pane_stacon

0x1fcd,	// (0x00001fcd) control_bottom_pane_stacon_ParamLimits

0x1fcd,	// (0x00001fcd) control_bottom_pane_stacon

0x1fec,	// (0x00001fec) navi_pane_stacon_ParamLimits

0x1fec,	// (0x00001fec) navi_pane_stacon

0x200b,	// (0x0000200b) stacon_bottom_pane_g1_ParamLimits

0x200b,	// (0x0000200b) stacon_bottom_pane_g1

0x16aa,	// (0x000016aa) aid_levels_signal_lsc_ParamLimits

0x16aa,	// (0x000016aa) aid_levels_signal_lsc

0x16b7,	// (0x000016b7) signal_pane_stacon_g1_ParamLimits

0x16b7,	// (0x000016b7) signal_pane_stacon_g1

0x16c3,	// (0x000016c3) signal_pane_stacon_g2_ParamLimits

0x16c3,	// (0x000016c3) signal_pane_stacon_g2

0x0001,

0x9cd8,	// (0x00009cd8) signal_pane_stacon_g_ParamLimits

0x9cd8,	// (0x00009cd8) signal_pane_stacon_g

0x1704,	// (0x00001704) title_pane_stacon_t1_ParamLimits

0x1704,	// (0x00001704) title_pane_stacon_t1

0x1729,	// (0x00001729) uni_indicator_pane_stacon_g1

0x1733,	// (0x00001733) uni_indicator_pane_stacon_g2

0x173d,	// (0x0000173d) uni_indicator_pane_stacon_g3

0x1747,	// (0x00001747) uni_indicator_pane_stacon_g4

0x0003,

0x9ce4,	// (0x00009ce4) uni_indicator_pane_stacon_g

0x1751,	// (0x00001751) control_top_pane_stacon_g1

0x1759,	// (0x00001759) control_top_pane_stacon_t1_ParamLimits

0x1759,	// (0x00001759) control_top_pane_stacon_t1

0x178a,	// (0x0000178a) aid_levels_battery_lsc_ParamLimits

0x178a,	// (0x0000178a) aid_levels_battery_lsc

0x1798,	// (0x00001798) battery_pane_stacon_g1_ParamLimits

0x1798,	// (0x00001798) battery_pane_stacon_g1

0x17a4,	// (0x000017a4) battery_pane_stacon_g2_ParamLimits

0x17a4,	// (0x000017a4) battery_pane_stacon_g2

0x0001,

0x9ced,	// (0x00009ced) battery_pane_stacon_g_ParamLimits

0x9ced,	// (0x00009ced) battery_pane_stacon_g

0x17d3,	// (0x000017d3) navi_icon_pane_stacon

0x17e3,	// (0x000017e3) navi_navi_pane_stacon

0x17d3,	// (0x000017d3) navi_text_pane_stacon

0x1751,	// (0x00001751) control_bottom_pane_stacon_g1

0x17f3,	// (0x000017f3) control_bottom_pane_stacon_t1_ParamLimits

0x17f3,	// (0x000017f3) control_bottom_pane_stacon_t1

0xaf0a,	// (0x0000af0a) grid_app_pane_ParamLimits

0xaf0a,	// (0x0000af0a) grid_app_pane

0xaf38,	// (0x0000af38) scroll_pane_cp15_ParamLimits

0xaf38,	// (0x0000af38) scroll_pane_cp15

0xaf4f,	// (0x0000af4f) cell_app_pane_ParamLimits

0xaf4f,	// (0x0000af4f) cell_app_pane

0xaf8e,	// (0x0000af8e) cell_app_pane_g1_ParamLimits

0xaf8e,	// (0x0000af8e) cell_app_pane_g1

0x18b3,	// (0x000018b3) cell_app_pane_g2_ParamLimits

0x18b3,	// (0x000018b3) cell_app_pane_g2

0x0001,

0xe159,	// (0x0000e159) cell_app_pane_g_ParamLimits

0xe159,	// (0x0000e159) cell_app_pane_g

0x18bf,	// (0x000018bf) cell_app_pane_t1_ParamLimits

0x18bf,	// (0x000018bf) cell_app_pane_t1

0x18d1,	// (0x000018d1) grid_highlight_pane_ParamLimits

0x18d1,	// (0x000018d1) grid_highlight_pane

0x130e,	// (0x0000130e) cell_highlight_pane_g1

0x1316,	// (0x00001316) cell_highlight_pane_g2

0x131e,	// (0x0000131e) cell_highlight_pane_g3

0x1326,	// (0x00001326) cell_highlight_pane_g4

0x132e,	// (0x0000132e) cell_highlight_pane_g5

0x1336,	// (0x00001336) cell_highlight_pane_g6

0x133e,	// (0x0000133e) cell_highlight_pane_g7

0x1346,	// (0x00001346) cell_highlight_pane_g8

0x134e,	// (0x0000134e) cell_highlight_pane_g9

0x002a,	// (0x0000002a) cell_highlight_pane_g10

0x0009,

0x9ca0,	// (0x00009ca0) cell_highlight_pane_g

0x18f5,	// (0x000018f5) bg_scroll_pane

0x1914,	// (0x00001914) scroll_handle_pane

0x1965,	// (0x00001965) scroll_bg_pane_g1

0x197a,	// (0x0000197a) scroll_bg_pane_g2

0x1992,	// (0x00001992) scroll_bg_pane_g3

0x0002,

0x9cf7,	// (0x00009cf7) scroll_bg_pane_g

0x19a7,	// (0x000019a7) scroll_handle_focus_pane_ParamLimits

0x19a7,	// (0x000019a7) scroll_handle_focus_pane

0x1965,	// (0x00001965) scroll_handle_pane_g1

0x19b4,	// (0x000019b4) scroll_handle_pane_g2

0x1992,	// (0x00001992) scroll_handle_pane_g3

0x0002,

0x9cfe,	// (0x00009cfe) scroll_handle_pane_g

0x1400,	// (0x00001400) bg_popup_sub_pane_cp21_ParamLimits

0x1400,	// (0x00001400) bg_popup_sub_pane_cp21

0x19c8,	// (0x000019c8) popup_fep_japan_predictive_window_t1_ParamLimits

0x19c8,	// (0x000019c8) popup_fep_japan_predictive_window_t1

0x19df,	// (0x000019df) popup_fep_japan_predictive_window_t2_ParamLimits

0x19df,	// (0x000019df) popup_fep_japan_predictive_window_t2

0x1a12,	// (0x00001a12) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a12,	// (0x00001a12) popup_fep_japan_predictive_window_t3

0x0002,

0x9d05,	// (0x00009d05) popup_fep_japan_predictive_window_t_ParamLimits

0x9d05,	// (0x00009d05) popup_fep_japan_predictive_window_t

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp23

0x1a49,	// (0x00001a49) listscroll_japin_cand_pane

0x1a51,	// (0x00001a51) popup_fep_japan_candidate_window_t1

0x1a5f,	// (0x00001a5f) candidate_pane_ParamLimits

0x1a5f,	// (0x00001a5f) candidate_pane

0x1a72,	// (0x00001a72) scroll_pane_cp30

0x1a7a,	// (0x00001a7a) list_single_popup_jap_candidate_pane_ParamLimits

0x1a7a,	// (0x00001a7a) list_single_popup_jap_candidate_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp30

0x1a8f,	// (0x00001a8f) list_single_popup_jap_candidate_pane_t1

0xafbb,	// (0x0000afbb) level_1_signal

0xafcd,	// (0x0000afcd) level_2_signal

0xafe0,	// (0x0000afe0) level_3_signal

0xaff3,	// (0x0000aff3) level_4_signal

0xb006,	// (0x0000b006) level_5_signal

0xb019,	// (0x0000b019) level_6_signal

0xb02c,	// (0x0000b02c) level_7_signal

0xafbb,	// (0x0000afbb) level_1_battery

0xafcd,	// (0x0000afcd) level_2_battery

0xafe0,	// (0x0000afe0) level_3_battery

0xaff3,	// (0x0000aff3) level_4_battery

0xb006,	// (0x0000b006) level_5_battery

0xb019,	// (0x0000b019) level_6_battery

0xb02c,	// (0x0000b02c) level_7_battery

0x1b30,	// (0x00001b30) list_menu_pane_ParamLimits

0x1b30,	// (0x00001b30) list_menu_pane

0x1b41,	// (0x00001b41) scroll_pane_cp25_ParamLimits

0x1b41,	// (0x00001b41) scroll_pane_cp25

0xb03f,	// (0x0000b03f) list_double2_graphic_pane_cp2_ParamLimits

0xb03f,	// (0x0000b03f) list_double2_graphic_pane_cp2

0xb03f,	// (0x0000b03f) list_double2_large_graphic_pane_cp2_ParamLimits

0xb03f,	// (0x0000b03f) list_double2_large_graphic_pane_cp2

0xb03f,	// (0x0000b03f) list_double2_pane_cp2_ParamLimits

0xb03f,	// (0x0000b03f) list_double2_pane_cp2

0xb03f,	// (0x0000b03f) list_double_graphic_pane_cp2_ParamLimits

0xb03f,	// (0x0000b03f) list_double_graphic_pane_cp2

0xb03f,	// (0x0000b03f) list_double_large_graphic_pane_cp2_ParamLimits

0xb03f,	// (0x0000b03f) list_double_large_graphic_pane_cp2

0xb03f,	// (0x0000b03f) list_double_number_pane_cp2_ParamLimits

0xb03f,	// (0x0000b03f) list_double_number_pane_cp2

0xb03f,	// (0x0000b03f) list_double_pane_cp2_ParamLimits

0xb03f,	// (0x0000b03f) list_double_pane_cp2

0xb05a,	// (0x0000b05a) list_single_2graphic_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_2graphic_pane_cp2

0xb05a,	// (0x0000b05a) list_single_graphic_heading_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_graphic_heading_pane_cp2

0xb05a,	// (0x0000b05a) list_single_graphic_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_graphic_pane_cp2

0xb05a,	// (0x0000b05a) list_single_heading_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_heading_pane_cp2

0xb06b,	// (0x0000b06b) list_single_large_graphic_pane_cp2_ParamLimits

0xb06b,	// (0x0000b06b) list_single_large_graphic_pane_cp2

0xb05a,	// (0x0000b05a) list_single_number_heading_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_number_heading_pane_cp2

0xb05a,	// (0x0000b05a) list_single_number_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_number_pane_cp2

0xb05a,	// (0x0000b05a) list_single_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_pane_cp2

0x1c31,	// (0x00001c31) bg_popup_sub_pane_cp22

0x1c53,	// (0x00001c53) popup_side_volume_key_window_g1

0x1c77,	// (0x00001c77) popup_side_volume_key_window_t1

0x1c93,	// (0x00001c93) volume_small_pane_cp1

0x0797,	// (0x00000797) bg_popup_sub_pane_cp24_ParamLimits

0x0797,	// (0x00000797) bg_popup_sub_pane_cp24

0x1c9b,	// (0x00001c9b) fep_china_uni_candidate_pane_ParamLimits

0x1c9b,	// (0x00001c9b) fep_china_uni_candidate_pane

0x1caf,	// (0x00001caf) fep_china_uni_entry_pane

0x1cbf,	// (0x00001cbf) popup_fep_china_uni_window_g1

0x1cdb,	// (0x00001cdb) fep_china_uni_entry_pane_g1

0x1ce3,	// (0x00001ce3) fep_china_uni_entry_pane_g2

0x0001,

0x9d32,	// (0x00009d32) fep_china_uni_entry_pane_g

0x1ceb,	// (0x00001ceb) fep_entry_item_pane

0x1cf5,	// (0x00001cf5) fep_candidate_item_pane

0x1cfd,	// (0x00001cfd) fep_china_uni_candidate_pane_g1

0x1d05,	// (0x00001d05) fep_china_uni_candidate_pane_g2

0x1d0d,	// (0x00001d0d) fep_china_uni_candidate_pane_g3

0x1d15,	// (0x00001d15) fep_china_uni_candidate_pane_g4

0x0003,

0x9d37,	// (0x00009d37) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1d1d,	// (0x00001d1d) fep_entry_item_pane_t1_ParamLimits

0x1d1d,	// (0x00001d1d) fep_entry_item_pane_t1

0x1d33,	// (0x00001d33) fep_candidate_item_pane_t1_ParamLimits

0x1d33,	// (0x00001d33) fep_candidate_item_pane_t1

0x1d48,	// (0x00001d48) fep_candidate_item_pane_t2_ParamLimits

0x1d48,	// (0x00001d48) fep_candidate_item_pane_t2

0x0001,

0x9d40,	// (0x00009d40) fep_candidate_item_pane_t_ParamLimits

0x9d40,	// (0x00009d40) fep_candidate_item_pane_t

0x0474,	// (0x00000474) list_highlight_pane_cp31_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp31

0x1d5a,	// (0x00001d5a) level_1_signal_lsc

0x1d63,	// (0x00001d63) level_2_signal_lsc

0x1d6c,	// (0x00001d6c) level_3_signal_lsc

0x1d75,	// (0x00001d75) level_4_signal_lsc

0x1d7e,	// (0x00001d7e) level_5_signal_lsc

0x1d87,	// (0x00001d87) level_6_signal_lsc

0x1d90,	// (0x00001d90) level_7_signal_lsc

0x1d90,	// (0x00001d90) level_1_battery_lsc

0x1d99,	// (0x00001d99) level_2_battery_lsc

0x1da2,	// (0x00001da2) level_3_battery_lsc

0x1dab,	// (0x00001dab) level_4_battery_lsc

0x1db4,	// (0x00001db4) level_5_battery_lsc

0x1dbd,	// (0x00001dbd) level_6_battery_lsc

0x1d5a,	// (0x00001d5a) level_7_battery_lsc

0x1dc6,	// (0x00001dc6) scroll_handle_focus_pane_g1

0x1dcf,	// (0x00001dcf) scroll_handle_focus_pane_g2

0x1dd8,	// (0x00001dd8) scroll_handle_focus_pane_g3

0x0002,

0x9d45,	// (0x00009d45) scroll_handle_focus_pane_g

0xb0c4,	// (0x0000b0c4) list_single_2graphic_pane_g1_ParamLimits

0xb0c4,	// (0x0000b0c4) list_single_2graphic_pane_g1

0xaa3d,	// (0x0000aa3d) list_single_2graphic_pane_g2_ParamLimits

0xaa3d,	// (0x0000aa3d) list_single_2graphic_pane_g2

0x0dab,	// (0x00000dab) list_single_2graphic_pane_g3_ParamLimits

0x0dab,	// (0x00000dab) list_single_2graphic_pane_g3

0xb0d0,	// (0x0000b0d0) list_single_2graphic_pane_g4_ParamLimits

0xb0d0,	// (0x0000b0d0) list_single_2graphic_pane_g4

0x0003,

0xe163,	// (0x0000e163) list_single_2graphic_pane_g_ParamLimits

0xe163,	// (0x0000e163) list_single_2graphic_pane_g

0xb0dc,	// (0x0000b0dc) list_single_2graphic_pane_t1_ParamLimits

0xb0dc,	// (0x0000b0dc) list_single_2graphic_pane_t1

0xb10a,	// (0x0000b10a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb10a,	// (0x0000b10a) list_double2_graphic_large_graphic_pane_g1

0xaaa0,	// (0x0000aaa0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaaa0,	// (0x0000aaa0) list_double2_graphic_large_graphic_pane_g2

0xaa6c,	// (0x0000aa6c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xaa6c,	// (0x0000aa6c) list_double2_graphic_large_graphic_pane_g3

0xb11a,	// (0x0000b11a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb11a,	// (0x0000b11a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xe16c,	// (0x0000e16c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xe16c,	// (0x0000e16c) list_double2_graphic_large_graphic_pane_g

0xb126,	// (0x0000b126) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb126,	// (0x0000b126) list_double2_graphic_large_graphic_pane_t1

0xb13c,	// (0x0000b13c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb13c,	// (0x0000b13c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xe175,	// (0x0000e175) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xe175,	// (0x0000e175) list_double2_graphic_large_graphic_pane_t

0x20b2,	// (0x000020b2) popup_fast_swap_window_ParamLimits

0x20b2,	// (0x000020b2) popup_fast_swap_window

0x20ce,	// (0x000020ce) popup_side_volume_key_window

0x20e8,	// (0x000020e8) stacon_top_pane

0x20f2,	// (0x000020f2) status_pane_ParamLimits

0x20f2,	// (0x000020f2) status_pane

0x20e8,	// (0x000020e8) status_small_pane

0x024e,	// (0x0000024e) control_pane

0x024e,	// (0x0000024e) stacon_bottom_pane

0x0c62,	// (0x00000c62) scroll_pane_cp121

0x110f,	// (0x0000110f) set_content_pane

0x4cc1,	// (0x00004cc1) bg_active_tab_pane_g1_cp1

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp1

0x4cca,	// (0x00004cca) bg_active_tab_pane_g3_cp1

0x4cc1,	// (0x00004cc1) bg_passive_tab_pane_g1_cp1

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp1

0x4cca,	// (0x00004cca) bg_passive_tab_pane_g3_cp1

0xb14e,	// (0x0000b14e) bg_active_tab_pane_g1_cp2

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp2

0xb157,	// (0x0000b157) bg_active_tab_pane_g3_cp2

0xb14e,	// (0x0000b14e) bg_passive_tab_pane_g1_cp2

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp2

0xb157,	// (0x0000b157) bg_passive_tab_pane_g3_cp2

0xb160,	// (0x0000b160) bg_active_tab_pane_g1_cp3

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp3

0xb169,	// (0x0000b169) bg_active_tab_pane_g3_cp3

0xb160,	// (0x0000b160) bg_passive_tab_pane_g1_cp3

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp3

0xb169,	// (0x0000b169) bg_passive_tab_pane_g3_cp3

0xb172,	// (0x0000b172) bg_active_tab_pane_g1_cp4

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp4

0xb17b,	// (0x0000b17b) bg_active_tab_pane_g3_cp4

0xb172,	// (0x0000b172) bg_passive_tab_pane_g1_cp4

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp4

0xb17b,	// (0x0000b17b) bg_passive_tab_pane_g3_cp4

0x2027,	// (0x00002027) bg_active_tab_pane_g1_cp5

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp5

0x2030,	// (0x00002030) bg_active_tab_pane_g3_cp5

0x2027,	// (0x00002027) bg_passive_tab_pane_g1_cp5

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp5

0x2030,	// (0x00002030) bg_passive_tab_pane_g3_cp5

0xb184,	// (0x0000b184) list_set_graphic_pane_ParamLimits

0xb184,	// (0x0000b184) list_set_graphic_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4

0x2039,	// (0x00002039) list_set_graphic_pane_g1_ParamLimits

0x2039,	// (0x00002039) list_set_graphic_pane_g1

0x2045,	// (0x00002045) list_set_graphic_pane_g2_ParamLimits

0x2045,	// (0x00002045) list_set_graphic_pane_g2

0x0001,

0x9d63,	// (0x00009d63) list_set_graphic_pane_g_ParamLimits

0x9d63,	// (0x00009d63) list_set_graphic_pane_g

0x0009,

0xa0b6,	// (0x0000a0b6) volume_small_pane_cp_g

0x2067,	// (0x00002067) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2067,	// (0x00002067) list_double2_large_graphic_pane_g1_cp2

0x2073,	// (0x00002073) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2073,	// (0x00002073) list_double2_large_graphic_pane_g2_cp2

0x2082,	// (0x00002082) list_double2_large_graphic_pane_g3_cp2

0x208a,	// (0x0000208a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x208a,	// (0x0000208a) list_double2_large_graphic_pane_t1_cp2

0x20a0,	// (0x000020a0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x20a0,	// (0x000020a0) list_double2_large_graphic_pane_t2_cp2

0x44d4,	// (0x000044d4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x44d4,	// (0x000044d4) list_double_large_graphic_pane_g1_cp2

0x44e5,	// (0x000044e5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x44e5,	// (0x000044e5) list_double_large_graphic_pane_g2_cp2

0x21cd,	// (0x000021cd) list_double_large_graphic_pane_g3_cp2

0x44f4,	// (0x000044f4) list_double_large_graphic_pane_g4_cp

0x44fc,	// (0x000044fc) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x44fc,	// (0x000044fc) list_double_large_graphic_pane_t1_cp2

0x4513,	// (0x00004513) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4513,	// (0x00004513) list_double_large_graphic_pane_t2_cp2

0x2100,	// (0x00002100) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2100,	// (0x00002100) list_double2_graphic_pane_g1_cp2

0x210c,	// (0x0000210c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x210c,	// (0x0000210c) list_double2_graphic_pane_g2_cp2

0x211b,	// (0x0000211b) list_double2_graphic_pane_g3_cp2

0x2123,	// (0x00002123) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2123,	// (0x00002123) list_double2_graphic_pane_t1_cp2

0x2139,	// (0x00002139) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2139,	// (0x00002139) list_double2_graphic_pane_t2_cp2

0x214b,	// (0x0000214b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_number_heading_pane_g1_cp2

0x2157,	// (0x00002157) list_single_number_heading_pane_g2_cp2

0x215f,	// (0x0000215f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x215f,	// (0x0000215f) list_single_number_heading_pane_t1_cp2

0x2175,	// (0x00002175) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2175,	// (0x00002175) list_single_number_heading_pane_t2_cp2

0x2187,	// (0x00002187) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2187,	// (0x00002187) list_single_number_heading_pane_t3_cp2

0x214b,	// (0x0000214b) list_single_heading_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_heading_pane_g1_cp2

0x2157,	// (0x00002157) list_single_heading_pane_g2_cp2

0x215f,	// (0x0000215f) list_single_heading_pane_t1_cp2_ParamLimits

0x215f,	// (0x0000215f) list_single_heading_pane_t1_cp2

0x42de,	// (0x000042de) list_single_heading_pane_t2_cp2_ParamLimits

0x42de,	// (0x000042de) list_single_heading_pane_t2_cp2

0x422e,	// (0x0000422e) list_double_graphic_pane_g1_cp2_ParamLimits

0x422e,	// (0x0000422e) list_double_graphic_pane_g1_cp2

0x423a,	// (0x0000423a) list_double_graphic_pane_g2_cp2_ParamLimits

0x423a,	// (0x0000423a) list_double_graphic_pane_g2_cp2

0x4249,	// (0x00004249) list_double_graphic_pane_g3_cp2

0x4251,	// (0x00004251) list_double_graphic_pane_t1_cp2_ParamLimits

0x4251,	// (0x00004251) list_double_graphic_pane_t1_cp2

0x4267,	// (0x00004267) list_double_graphic_pane_t2_cp2_ParamLimits

0x4267,	// (0x00004267) list_double_graphic_pane_t2_cp2

0x21c1,	// (0x000021c1) list_double_number_pane_g1_cp2_ParamLimits

0x21c1,	// (0x000021c1) list_double_number_pane_g1_cp2

0x21cd,	// (0x000021cd) list_double_number_pane_g2_cp2

0x41f4,	// (0x000041f4) list_double_number_pane_t1_cp2_ParamLimits

0x41f4,	// (0x000041f4) list_double_number_pane_t1_cp2

0x4206,	// (0x00004206) list_double_number_pane_t2_cp2_ParamLimits

0x4206,	// (0x00004206) list_double_number_pane_t2_cp2

0x421c,	// (0x0000421c) list_double_number_pane_t3_cp2_ParamLimits

0x421c,	// (0x0000421c) list_double_number_pane_t3_cp2

0x40cd,	// (0x000040cd) list_single_graphic_pane_g1_cp2_ParamLimits

0x40cd,	// (0x000040cd) list_single_graphic_pane_g1_cp2

0x214b,	// (0x0000214b) list_single_graphic_pane_g2_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_graphic_pane_g2_cp2

0x2157,	// (0x00002157) list_single_graphic_pane_g3_cp2

0x40a5,	// (0x000040a5) list_single_graphic_pane_t1_cp2_ParamLimits

0x40a5,	// (0x000040a5) list_single_graphic_pane_t1_cp2

0x214b,	// (0x0000214b) list_single_number_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_number_pane_g1_cp2

0x2157,	// (0x00002157) list_single_number_pane_g2_cp2

0x40a5,	// (0x000040a5) list_single_number_pane_t1_cp2_ParamLimits

0x40a5,	// (0x000040a5) list_single_number_pane_t1_cp2

0x40bb,	// (0x000040bb) list_single_number_pane_t2_cp2_ParamLimits

0x40bb,	// (0x000040bb) list_single_number_pane_t2_cp2

0x2073,	// (0x00002073) list_double2_pane_g1_cp2_ParamLimits

0x2073,	// (0x00002073) list_double2_pane_g1_cp2

0x2082,	// (0x00002082) list_double2_pane_g2_cp2

0x2199,	// (0x00002199) list_double2_pane_t1_cp2_ParamLimits

0x2199,	// (0x00002199) list_double2_pane_t1_cp2

0x21af,	// (0x000021af) list_double2_pane_t2_cp2_ParamLimits

0x21af,	// (0x000021af) list_double2_pane_t2_cp2

0x21c1,	// (0x000021c1) list_double_pane_g1_cp2_ParamLimits

0x21c1,	// (0x000021c1) list_double_pane_g1_cp2

0x21cd,	// (0x000021cd) list_double_pane_g2_cp2

0x21d5,	// (0x000021d5) list_double_pane_t1_cp2_ParamLimits

0x21d5,	// (0x000021d5) list_double_pane_t1_cp2

0x21eb,	// (0x000021eb) list_double_pane_t2_cp2_ParamLimits

0x21eb,	// (0x000021eb) list_double_pane_t2_cp2

0x2213,	// (0x00002213) list_single_pane_cp2_g3

0x214b,	// (0x0000214b) list_single_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_pane_g1_cp2

0x2157,	// (0x00002157) list_single_pane_g2_cp2

0x2223,	// (0x00002223) list_single_pane_t1_cp2_ParamLimits

0x2223,	// (0x00002223) list_single_pane_t1_cp2

0x223b,	// (0x0000223b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x223b,	// (0x0000223b) list_single_large_graphic_pane_g1_cp2

0x2247,	// (0x00002247) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2247,	// (0x00002247) list_single_large_graphic_pane_g2_cp2

0x2253,	// (0x00002253) list_single_large_graphic_pane_g3_cp2

0x225b,	// (0x0000225b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x225b,	// (0x0000225b) list_single_large_graphic_pane_g4_cp1

0x2275,	// (0x00002275) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2275,	// (0x00002275) list_single_large_graphic_pane_t1_cp2

0x3f42,	// (0x00003f42) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3f42,	// (0x00003f42) list_single_graphic_heading_pane_g1_cp2

0x3f1d,	// (0x00003f1d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3f1d,	// (0x00003f1d) list_single_graphic_heading_pane_g4_cp2

0x2157,	// (0x00002157) list_single_graphic_heading_pane_g5_cp2

0x215f,	// (0x0000215f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x215f,	// (0x0000215f) list_single_graphic_heading_pane_t1_cp2

0x3f4e,	// (0x00003f4e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3f4e,	// (0x00003f4e) list_single_graphic_heading_pane_t2_cp2

0x3f11,	// (0x00003f11) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3f11,	// (0x00003f11) list_single_2graphic_pane_g1_cp2

0x3f1d,	// (0x00003f1d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3f1d,	// (0x00003f1d) list_single_2graphic_pane_g2_cp2

0x2157,	// (0x00002157) list_single_2graphic_pane_g3_cp2

0x326d,	// (0x0000326d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x326d,	// (0x0000326d) list_single_2graphic_pane_g4_cp2

0x3f2c,	// (0x00003f2c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3f2c,	// (0x00003f2c) list_single_2graphic_pane_t1_cp2

0x002a,	// (0x0000002a) list_highlight_pane_g10_cp1

0x3b0b,	// (0x00003b0b) list_highlight_pane_g1_cp1

0x3b13,	// (0x00003b13) list_highlight_pane_g2_cp1

0x3b1b,	// (0x00003b1b) list_highlight_pane_g3_cp1

0x3b23,	// (0x00003b23) list_highlight_pane_g4_cp1

0x3b2b,	// (0x00003b2b) list_highlight_pane_g5_cp1

0x3b33,	// (0x00003b33) list_highlight_pane_g6_cp1

0x3b3b,	// (0x00003b3b) list_highlight_pane_g7_cp1

0x3b43,	// (0x00003b43) list_highlight_pane_g8_cp1

0x3b4b,	// (0x00003b4b) list_highlight_pane_g9_cp1

0xbe43,	// (0x0000be43) form_field_slider_pane_t3

0xbe51,	// (0x0000be51) form_field_slider_pane_t4

0x3a55,	// (0x00003a55) slider_form_pane_ParamLimits

0x3a55,	// (0x00003a55) slider_form_pane

0x024e,	// (0x0000024e) control_abbreviations

0x024e,	// (0x0000024e) control_conventions

0x024e,	// (0x0000024e) control_definitions

0x024e,	// (0x0000024e) format_table_attribute

0x4328,	// (0x00004328) bg_popup_preview_window_pane_g9

0x024e,	// (0x0000024e) format_table_data2

0x024e,	// (0x0000024e) format_table_data3

0x024e,	// (0x0000024e) format_table_data_example

0x0008,

0x024e,	// (0x0000024e) intro_purpose

0x9eec,	// (0x00009eec) bg_popup_preview_window_pane_g

0x024e,	// (0x0000024e) texts_category

0x024e,	// (0x0000024e) texts_graphics

0x228b,	// (0x0000228b) text_digital

0x229a,	// (0x0000229a) text_primary

0x22a9,	// (0x000022a9) text_primary_small

0x22b8,	// (0x000022b8) text_secondary

0x22c7,	// (0x000022c7) text_title

0x4b51,	// (0x00004b51) bg_passive_tab_pane_g1_cp3_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp3_srt

0x4b5a,	// (0x00004b5a) bg_passive_tab_pane_g3_cp3_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt

0x4b63,	// (0x00004b63) tabs_4_active_pane_srt_g1

0xa730,	// (0x0000a730) tabs_4_active_pane_srt_t1_ParamLimits

0xa730,	// (0x0000a730) tabs_4_active_pane_srt_t1

0x4b51,	// (0x00004b51) bg_active_tab_pane_g1_cp3_copy1

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp3_copy1

0x4b5a,	// (0x00004b5a) bg_active_tab_pane_g3_cp3_copy1

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt

0x2834,	// (0x00002834) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2834,	// (0x00002834) bg_passive_tab_pane_cp4_srt

0x47b3,	// (0x000047b3) bg_passive_tab_pane_g1_cp4_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp4_srt

0x47bc,	// (0x000047bc) bg_passive_tab_pane_g3_cp4_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt

0xaedd,	// (0x0000aedd) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaedd,	// (0x0000aedd) tabs_2_long_active_pane_srt_t1

0x47b3,	// (0x000047b3) bg_active_tab_pane_g1_cp4_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp4_srt

0x47bc,	// (0x000047bc) bg_active_tab_pane_g3_cp4_srt

0x0797,	// (0x00000797) tabs_3_long_active_pane_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_active_pane_srt

0x0797,	// (0x00000797) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_passive_pane_cp_srt

0x0797,	// (0x00000797) tabs_3_long_passive_pane_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_passive_pane_srt

0x2834,	// (0x00002834) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2834,	// (0x00002834) bg_passive_tab_pane_cp5_srt

0x2027,	// (0x00002027) bg_passive_tab_pane_g1_cp5_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp5_srt

0x2030,	// (0x00002030) bg_passive_tab_pane_g3_cp5_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt

0xaef4,	// (0x0000aef4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaef4,	// (0x0000aef4) tabs_3_long_active_pane_srt_t1

0x2027,	// (0x00002027) bg_active_tab_pane_g1_cp5_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp5_srt

0x2030,	// (0x00002030) bg_active_tab_pane_g3_cp5_srt

0x47a5,	// (0x000047a5) navi_text_pane_srt_t1

0x479d,	// (0x0000479d) navi_icon_pane_srt_g1

0x2535,	// (0x00002535) midp_editing_number_pane_srt

0x22d6,	// (0x000022d6) midp_ticker_pane_srt

0x253d,	// (0x0000253d) midp_ticker_pane_srt_g1

0x2545,	// (0x00002545) midp_ticker_pane_srt_g2

0x0001,

0x9d82,	// (0x00009d82) midp_ticker_pane_srt_g

0x254d,	// (0x0000254d) midp_ticker_pane_srt_t1

0x478e,	// (0x0000478e) midp_editing_number_pane_t1_copy1

0xb198,	// (0x0000b198) listscroll_midp_pane

0xb198,	// (0x0000b198) midp_form_pane

0x2346,	// (0x00002346) midp_info_popup_window_ParamLimits

0x2346,	// (0x00002346) midp_info_popup_window

0x1400,	// (0x00001400) bg_popup_sub_pane_cp50_ParamLimits

0x1400,	// (0x00001400) bg_popup_sub_pane_cp50

0x3793,	// (0x00003793) listscroll_midp_info_pane_ParamLimits

0x3793,	// (0x00003793) listscroll_midp_info_pane

0x377b,	// (0x0000377b) listscroll_form_midp_pane_ParamLimits

0x377b,	// (0x0000377b) listscroll_form_midp_pane

0x3787,	// (0x00003787) scroll_bar_cp050

0xbe37,	// (0x0000be37) list_midp_pane

0x574d,	// (0x0000574d) signal_pane_g2_cp

0x3695,	// (0x00003695) listscroll_midp_info_pane_t1_ParamLimits

0x3695,	// (0x00003695) listscroll_midp_info_pane_t1

0x36ad,	// (0x000036ad) listscroll_midp_info_pane_t2_ParamLimits

0x36ad,	// (0x000036ad) listscroll_midp_info_pane_t2

0x36eb,	// (0x000036eb) listscroll_midp_info_pane_t3_ParamLimits

0x36eb,	// (0x000036eb) listscroll_midp_info_pane_t3

0x3725,	// (0x00003725) listscroll_midp_info_pane_t4_ParamLimits

0x3725,	// (0x00003725) listscroll_midp_info_pane_t4

0x0003,

0x9e27,	// (0x00009e27) listscroll_midp_info_pane_t_ParamLimits

0x9e27,	// (0x00009e27) listscroll_midp_info_pane_t

0x14af,	// (0x000014af) scroll_pane_cp21

0x3639,	// (0x00003639) form_midp_field_choice_group_pane

0x3642,	// (0x00003642) form_midp_field_text_pane

0x367b,	// (0x0000367b) form_midp_field_time_pane

0x3683,	// (0x00003683) form_midp_gauge_slider_pane

0x368c,	// (0x0000368c) form_midp_gauge_wait_pane

0x024e,	// (0x0000024e) form_midp_image_pane

0xbe21,	// (0x0000be21) list_single_midp_pane_ParamLimits

0xbe21,	// (0x0000be21) list_single_midp_pane

0xbe00,	// (0x0000be00) form_midp_field_text_pane_t1

0x338c,	// (0x0000338c) input_focus_pane_cp050

0x3610,	// (0x00003610) list_midp_form_text_pane

0x35bc,	// (0x000035bc) form_midp_field_choice_group_pane_t1

0x35ca,	// (0x000035ca) input_focus_pane_cp051

0x35de,	// (0x000035de) list_midp_choice_pane

0x024e,	// (0x0000024e) status_idle_pane

0x35a0,	// (0x000035a0) form_midp_field_time_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g2_copy1

0x35ae,	// (0x000035ae) form_midp_field_time_pane_t2

0x0001,

0x23ee,	// (0x000023ee) aid_navinavi_width_2_pane

0x9e22,	// (0x00009e22) form_midp_field_time_pane_t

0x024e,	// (0x0000024e) input_focus_pane_cp052

0x024e,	// (0x0000024e) bg_input_focus_pane_cp040

0x3560,	// (0x00003560) form_midp_gauge_slider_pane_t1

0x356e,	// (0x0000356e) form_midp_gauge_slider_pane_t2

0xbde4,	// (0x0000bde4) form_midp_gauge_slider_pane_t3

0xbdf2,	// (0x0000bdf2) form_midp_gauge_slider_pane_t4

0x0003,

0xe1b6,	// (0x0000e1b6) form_midp_gauge_slider_pane_t

0x3598,	// (0x00003598) form_midp_slider_pane

0x0474,	// (0x00000474) bg_input_focus_pane_cp041_ParamLimits

0x0474,	// (0x00000474) bg_input_focus_pane_cp041

0x3530,	// (0x00003530) form_midp_gauge_wait_pane_t1_ParamLimits

0x3530,	// (0x00003530) form_midp_gauge_wait_pane_t1

0x3542,	// (0x00003542) form_midp_gauge_wait_pane_t2_ParamLimits

0x3542,	// (0x00003542) form_midp_gauge_wait_pane_t2

0x0001,

0x9e14,	// (0x00009e14) form_midp_gauge_wait_pane_t_ParamLimits

0x9e14,	// (0x00009e14) form_midp_gauge_wait_pane_t

0x3554,	// (0x00003554) form_midp_wait_pane_ParamLimits

0x3554,	// (0x00003554) form_midp_wait_pane

0x34fa,	// (0x000034fa) form_midp_image_pane_g1

0x3503,	// (0x00003503) form_midp_image_pane_t1

0x3512,	// (0x00003512) form_midp_image_pane_t2

0x3521,	// (0x00003521) form_midp_image_pane_t3

0x0002,

0x9e0d,	// (0x00009e0d) form_midp_image_pane_t

0x34e2,	// (0x000034e2) list_single_midp_pane_g1

0x34eb,	// (0x000034eb) list_single_midp_pane_t1

0xbdd0,	// (0x0000bdd0) list_midp_form_item_pane_ParamLimits

0xbdd0,	// (0x0000bdd0) list_midp_form_item_pane

0x2396,	// (0x00002396) list_midp_form_item_pane_t1

0x23a5,	// (0x000023a5) midp_ticker_pane_g1

0x23b1,	// (0x000023b1) midp_ticker_pane_g2

0x0001,

0x9d68,	// (0x00009d68) midp_ticker_pane_g

0x23bd,	// (0x000023bd) midp_ticker_pane_t1

0x478e,	// (0x0000478e) midp_editing_number_pane_t1

0x4a17,	// (0x00004a17) midp_editing_number_pane

0x4a23,	// (0x00004a23) midp_ticker_pane

0x476c,	// (0x0000476c) ai_message_heading_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp14

0x4774,	// (0x00004774) listscroll_ai_message_pane

0x46f6,	// (0x000046f6) ai_message_heading_pane_g1_ParamLimits

0x46f6,	// (0x000046f6) ai_message_heading_pane_g1

0x4702,	// (0x00004702) ai_message_heading_pane_g2_ParamLimits

0x4702,	// (0x00004702) ai_message_heading_pane_g2

0x470e,	// (0x0000470e) ai_message_heading_pane_g3_ParamLimits

0x470e,	// (0x0000470e) ai_message_heading_pane_g3

0x471a,	// (0x0000471a) ai_message_heading_pane_g4_ParamLimits

0x471a,	// (0x0000471a) ai_message_heading_pane_g4

0x0003,

0x9f4e,	// (0x00009f4e) ai_message_heading_pane_g_ParamLimits

0x9f4e,	// (0x00009f4e) ai_message_heading_pane_g

0x4726,	// (0x00004726) ai_message_heading_pane_t1_ParamLimits

0x4726,	// (0x00004726) ai_message_heading_pane_t1

0x4740,	// (0x00004740) ai_message_heading_pane_t2_ParamLimits

0x4740,	// (0x00004740) ai_message_heading_pane_t2

0x0001,

0x9f57,	// (0x00009f57) ai_message_heading_pane_t_ParamLimits

0x9f57,	// (0x00009f57) ai_message_heading_pane_t

0x4752,	// (0x00004752) bg_popup_heading_pane_cp1_ParamLimits

0x4752,	// (0x00004752) bg_popup_heading_pane_cp1

0x46e4,	// (0x000046e4) list_ai_message_pane_ParamLimits

0x46e4,	// (0x000046e4) list_ai_message_pane

0x14af,	// (0x000014af) scroll_pane_cp10

0x4630,	// (0x00004630) list_ai_message_pane_g1

0x4638,	// (0x00004638) list_ai_message_pane_g2

0x0001,

0x9f2b,	// (0x00009f2b) list_ai_message_pane_g

0x4640,	// (0x00004640) list_ai_message_pane_t1_ParamLimits

0x4640,	// (0x00004640) list_ai_message_pane_t1

0x4655,	// (0x00004655) list_ai_message_pane_t2_ParamLimits

0x4655,	// (0x00004655) list_ai_message_pane_t2

0x466a,	// (0x0000466a) list_ai_message_pane_t3_ParamLimits

0x466a,	// (0x0000466a) list_ai_message_pane_t3

0x467f,	// (0x0000467f) list_ai_message_pane_t4_ParamLimits

0x467f,	// (0x0000467f) list_ai_message_pane_t4

0x0003,

0x9f30,	// (0x00009f30) list_ai_message_pane_t_ParamLimits

0x9f30,	// (0x00009f30) list_ai_message_pane_t

0x461e,	// (0x0000461e) cell_ai_soft_ind_pane_ParamLimits

0x461e,	// (0x0000461e) cell_ai_soft_ind_pane

0x23cf,	// (0x000023cf) cell_ai_soft_ind_pane_g1_ParamLimits

0x23cf,	// (0x000023cf) cell_ai_soft_ind_pane_g1

0x024e,	// (0x0000024e) grid_highlight_cp1

0x23dc,	// (0x000023dc) text_secondary_cp56_ParamLimits

0x23dc,	// (0x000023dc) text_secondary_cp56

0x45f3,	// (0x000045f3) example_general_pane_ParamLimits

0x45f3,	// (0x000045f3) example_general_pane

0x45ff,	// (0x000045ff) example_parent_pane_g1_ParamLimits

0x45ff,	// (0x000045ff) example_parent_pane_g1

0x460b,	// (0x0000460b) example_parent_pane_t1_ParamLimits

0x460b,	// (0x0000460b) example_parent_pane_t1

0xb6c4,	// (0x0000b6c4) popup_preview_text_window_ParamLimits

0xb6c4,	// (0x0000b6c4) popup_preview_text_window

0x221b,	// (0x0000221b) list_single_pane_cp2_g4

0x084d,	// (0x0000084d) bg_popup_preview_window_pane_ParamLimits

0x084d,	// (0x0000084d) bg_popup_preview_window_pane

0x4330,	// (0x00004330) popup_preview_text_window_t1_ParamLimits

0x4330,	// (0x00004330) popup_preview_text_window_t1

0x434e,	// (0x0000434e) popup_preview_text_window_t2_ParamLimits

0x434e,	// (0x0000434e) popup_preview_text_window_t2

0x4397,	// (0x00004397) popup_preview_text_window_t3_ParamLimits

0x4397,	// (0x00004397) popup_preview_text_window_t3

0x43dc,	// (0x000043dc) popup_preview_text_window_t4_ParamLimits

0x43dc,	// (0x000043dc) popup_preview_text_window_t4

0x0004,

0x9eff,	// (0x00009eff) popup_preview_text_window_t_ParamLimits

0x9eff,	// (0x00009eff) popup_preview_text_window_t

0x445a,	// (0x0000445a) scroll_pane_cp11

0x3202,	// (0x00003202) bg_popup_preview_window_pane_g1

0x42f0,	// (0x000042f0) bg_popup_preview_window_pane_g2

0x42f8,	// (0x000042f8) bg_popup_preview_window_pane_g3

0x4300,	// (0x00004300) bg_popup_preview_window_pane_g4

0x4308,	// (0x00004308) bg_popup_preview_window_pane_g5

0x4310,	// (0x00004310) bg_popup_preview_window_pane_g6

0x4318,	// (0x00004318) bg_popup_preview_window_pane_g7

0x4320,	// (0x00004320) bg_popup_preview_window_pane_g8

0x003c,	// (0x0000003c) aid_popup_width_pane

0xb646,	// (0x0000b646) popup_midp_note_alarm_window_ParamLimits

0xb646,	// (0x0000b646) popup_midp_note_alarm_window

0x11bc,	// (0x000011bc) data_form_pane_ParamLimits

0xadc2,	// (0x0000adc2) form_field_data_pane_g1

0xadcc,	// (0x0000adcc) form_field_data_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_ParamLimits

0x11f6,	// (0x000011f6) data_form_wide_pane_ParamLimits

0x1202,	// (0x00001202) form_field_data_wide_pane_g1

0x1222,	// (0x00001222) form_field_data_wide_pane_t1_ParamLimits

0x0ad9,	// (0x00000ad9) input_focus_pane_cp6_ParamLimits

0xaebb,	// (0x0000aebb) input_popup_find_pane_g1_ParamLimits

0xaebb,	// (0x0000aebb) input_popup_find_pane_g1

0x17b4,	// (0x000017b4) aid_navi_side_left_pane

0x17c4,	// (0x000017c4) aid_navi_side_right_pane

0x3bf4,	// (0x00003bf4) bg_popup_window_pane_cp30_ParamLimits

0x3bf4,	// (0x00003bf4) bg_popup_window_pane_cp30

0x3c6e,	// (0x00003c6e) popup_midp_note_alarm_window_g1_ParamLimits

0x3c6e,	// (0x00003c6e) popup_midp_note_alarm_window_g1

0x3c9e,	// (0x00003c9e) popup_midp_note_alarm_window_t1_ParamLimits

0x3c9e,	// (0x00003c9e) popup_midp_note_alarm_window_t1

0x3d3f,	// (0x00003d3f) popup_midp_note_alarm_window_t2_ParamLimits

0x3d3f,	// (0x00003d3f) popup_midp_note_alarm_window_t2

0x3ded,	// (0x00003ded) popup_midp_note_alarm_window_t3_ParamLimits

0x3ded,	// (0x00003ded) popup_midp_note_alarm_window_t3

0x3e15,	// (0x00003e15) popup_midp_note_alarm_window_t4_ParamLimits

0x3e15,	// (0x00003e15) popup_midp_note_alarm_window_t4

0x3e35,	// (0x00003e35) popup_midp_note_alarm_window_t5_ParamLimits

0x3e35,	// (0x00003e35) popup_midp_note_alarm_window_t5

0x000a,

0x9e9c,	// (0x00009e9c) popup_midp_note_alarm_window_t_ParamLimits

0x9e9c,	// (0x00009e9c) popup_midp_note_alarm_window_t

0x3ee1,	// (0x00003ee1) wait_bar_pane_cp1_ParamLimits

0x3ee1,	// (0x00003ee1) wait_bar_pane_cp1

0x024e,	// (0x0000024e) wait_anim_pane_copy1

0x024e,	// (0x0000024e) wait_border_pane_copy1

0x3906,	// (0x00003906) wait_border_pane_g1_copy1

0x123c,	// (0x0000123c) form_field_popup_pane_g1

0xade4,	// (0x0000ade4) form_field_popup_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp7_ParamLimits

0x11bc,	// (0x000011bc) list_form_pane_ParamLimits

0x125c,	// (0x0000125c) form_field_popup_wide_pane_g1

0x1264,	// (0x00001264) form_field_popup_wide_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp8_ParamLimits

0x1279,	// (0x00001279) list_form_wide_pane_ParamLimits

0x4bd1,	// (0x00004bd1) aid_size_cell_graphic_pane

0xae61,	// (0x0000ae61) data_form_pane_t1_ParamLimits

0xc285,	// (0x0000c285) data_form_wide_pane_t1_ParamLimits

0xba22,	// (0x0000ba22) bg_status_flat_pane

0xa68d,	// (0x0000a68d) title_pane_t1_ParamLimits

0x043c,	// (0x0000043c) title_pane_t2_ParamLimits

0x0462,	// (0x00000462) title_pane_t3_ParamLimits

0xe090,	// (0x0000e090) title_pane_t_ParamLimits

0xafbb,	// (0x0000afbb) level_1_signal_ParamLimits

0xafcd,	// (0x0000afcd) level_2_signal_ParamLimits

0xafe0,	// (0x0000afe0) level_3_signal_ParamLimits

0xaff3,	// (0x0000aff3) level_4_signal_ParamLimits

0xb006,	// (0x0000b006) level_5_signal_ParamLimits

0xb019,	// (0x0000b019) level_6_signal_ParamLimits

0xb02c,	// (0x0000b02c) level_7_signal_ParamLimits

0xafbb,	// (0x0000afbb) level_1_battery_ParamLimits

0xafcd,	// (0x0000afcd) level_2_battery_ParamLimits

0xafe0,	// (0x0000afe0) level_3_battery_ParamLimits

0xaff3,	// (0x0000aff3) level_4_battery_ParamLimits

0xb006,	// (0x0000b006) level_5_battery_ParamLimits

0xb019,	// (0x0000b019) level_6_battery_ParamLimits

0xb02c,	// (0x0000b02c) level_7_battery_ParamLimits

0x3b0b,	// (0x00003b0b) bg_status_flat_pane_g1

0x3b13,	// (0x00003b13) bg_status_flat_pane_g2

0x3b1b,	// (0x00003b1b) bg_status_flat_pane_g3

0x3b23,	// (0x00003b23) bg_status_flat_pane_g4

0x3b2b,	// (0x00003b2b) bg_status_flat_pane_g5

0x3b33,	// (0x00003b33) bg_status_flat_pane_g6

0x3b3b,	// (0x00003b3b) bg_status_flat_pane_g7

0xa71a,	// (0x0000a71a) tabs_3_active_pane_t1_ParamLimits

0xa71a,	// (0x0000a71a) tabs_3_passive_pane_t1_ParamLimits

0xa730,	// (0x0000a730) tabs_4_active_pane_t1_ParamLimits

0xa730,	// (0x0000a730) tabs_4_1_passive_pane_t1_ParamLimits

0xaec7,	// (0x0000aec7) tabs_2_active_pane_t1_ParamLimits

0xaec7,	// (0x0000aec7) tabs_2_passive_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_ParamLimits

0xaedd,	// (0x0000aedd) tabs_2_long_active_pane_t1_ParamLimits

0x2834,	// (0x00002834) bg_passive_tab_pane_cp4_ParamLimits

0x32bb,	// (0x000032bb) list_single_midp_graphic_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_ParamLimits

0xaef4,	// (0x0000aef4) tabs_3_long_active_pane_t1_ParamLimits

0x2834,	// (0x00002834) bg_passive_tab_pane_cp5_ParamLimits

0x32bb,	// (0x000032bb) list_single_midp_graphic_pane_t1

0xba22,	// (0x0000ba22) bg_status_flat_pane_ParamLimits

0x2e3f,	// (0x00002e3f) indicator_pane_cp2_ParamLimits

0x2e3f,	// (0x00002e3f) indicator_pane_cp2

0xbb88,	// (0x0000bb88) navi_pane_srt_ParamLimits

0xbb88,	// (0x0000bb88) navi_pane_srt

0x2f87,	// (0x00002f87) popup_clock_digital_analogue_window_cp1

0x05f2,	// (0x000005f2) indicator_pane_t1

0x22d6,	// (0x000022d6) copy_highlight_pane

0x22d6,	// (0x000022d6) cursor_graphics_pane

0x22d6,	// (0x000022d6) graphic_within_text_pane

0x22d6,	// (0x000022d6) link_highlight_pane

0x441d,	// (0x0000441d) popup_preview_text_window_t5_ParamLimits

0x441d,	// (0x0000441d) popup_preview_text_window_t5

0x23f6,	// (0x000023f6) cursor_digital_pane

0x23f6,	// (0x000023f6) cursor_primary_pane

0x2407,	// (0x00002407) cursor_primary_small_pane

0x240f,	// (0x0000240f) cursor_secondary_pane

0x2417,	// (0x00002417) cursor_title_pane

0x23f6,	// (0x000023f6) link_highlight_digital_pane

0x23fe,	// (0x000023fe) link_highlight_primary_pane

0x2407,	// (0x00002407) link_highlight_primary_small_pane

0x240f,	// (0x0000240f) link_highlight_secondary_pane

0x2417,	// (0x00002417) link_highlight_title_pane

0x23f6,	// (0x000023f6) copy_highlight_digital_pane

0x23f6,	// (0x000023f6) copy_highlight_primary_pane

0x2407,	// (0x00002407) copy_highlight_primary_small_pane

0x240f,	// (0x0000240f) copy_highlight_secondary_pane

0x2417,	// (0x00002417) copy_highlight_title_pane

0x240f,	// (0x0000240f) graphic_text_digital_pane

0x3ba3,	// (0x00003ba3) graphic_text_primary_pane

0x3bac,	// (0x00003bac) graphic_text_primary_small_pane

0x2407,	// (0x00002407) graphic_text_secondary_pane

0x23f6,	// (0x000023f6) graphic_text_title_pane

0xb235,	// (0x0000b235) cursor_primary_pane_g1

0x3b95,	// (0x00003b95) cursor_text_primary_t1

0xbe73,	// (0x0000be73) cursor_primary_small_pane_g1

0x3b87,	// (0x00003b87) cursor_text_primary_small_t1

0xbe69,	// (0x0000be69) cursor_primary_small_pane_g1_copy1

0x3b71,	// (0x00003b71) cursor_text_primary_small_t1_copy1

0x3b53,	// (0x00003b53) cursor_text_title_t1

0xbe5f,	// (0x0000be5f) cursor_title_pane_g1

0xb235,	// (0x0000b235) cursor_digital_pane_g1

0x2427,	// (0x00002427) cursor_text_digital_t1

0x2435,	// (0x00002435) link_highlight_primary_pane_g1

0x3afc,	// (0x00003afc) link_highlight_primary_pane_t1

0x2435,	// (0x00002435) link_highlight_primary_small_pane_g1

0x243d,	// (0x0000243d) link_highlight_primary_small_pane_t1

0x244c,	// (0x0000244c) link_highlight_secondary_pane_g1

0x2454,	// (0x00002454) link_highlight_secondary_pane_t1

0x3a61,	// (0x00003a61) link_highlight_title_pane_g1

0x3a78,	// (0x00003a78) link_highlight_title_pane_t1

0x3a61,	// (0x00003a61) link_highlight_digital_pane_g1

0x3a69,	// (0x00003a69) link_highlight_digital_pane_t1

0x3921,	// (0x00003921) copy_highlight_primary_pane_g1

0x3947,	// (0x00003947) copy_highlight_primary_pane_t1

0x3921,	// (0x00003921) copy_highlight_primary_small_pane_g1

0x3938,	// (0x00003938) copy_highlight_primary_small_pane_t1

0x2463,	// (0x00002463) copy_highlight_secondary_pane_g1

0x246b,	// (0x0000246b) copy_highlight_secondary_pane_t1

0x3921,	// (0x00003921) copy_highlight_title_pane_g1

0x3929,	// (0x00003929) copy_highlight_title_pane_t1

0x3921,	// (0x00003921) copy_highlight_digital_pane_g1

0x4df5,	// (0x00004df5) copy_highlight_digital_pane_t1

0x4d49,	// (0x00004d49) graphic_text_primary_pane_g1

0x4dd9,	// (0x00004dd9) graphic_text_primary_pane_t1

0x4de7,	// (0x00004de7) graphic_text_primary_pane_t2

0x0001,

0x9fc6,	// (0x00009fc6) graphic_text_primary_pane_t

0x4db5,	// (0x00004db5) graphic_text_primary_small_pane_g1

0x4dbd,	// (0x00004dbd) graphic_text_primary_small_pane_t1

0x4dcb,	// (0x00004dcb) graphic_text_primary_small_pane_t2

0x0001,

0x9fc1,	// (0x00009fc1) graphic_text_primary_small_pane_t

0x4d91,	// (0x00004d91) graphic_text_secondary_pane_g1

0x4d99,	// (0x00004d99) graphic_text_secondary_pane_t1

0x4da7,	// (0x00004da7) graphic_text_secondary_pane_t2

0x0001,

0x9fbc,	// (0x00009fbc) graphic_text_secondary_pane_t

0x4d6d,	// (0x00004d6d) graphic_text_title_pane_g1

0x4d75,	// (0x00004d75) graphic_text_title_pane_t1

0x4d83,	// (0x00004d83) graphic_text_title_pane_t2

0x0001,

0x9fb7,	// (0x00009fb7) graphic_text_title_pane_t

0x4d49,	// (0x00004d49) graphic_text_digital_pane_g1

0x4d51,	// (0x00004d51) graphic_text_digital_pane_t1

0x4d5f,	// (0x00004d5f) graphic_text_digital_pane_t2

0x0001,

0x9fb2,	// (0x00009fb2) graphic_text_digital_pane_t

0x0474,	// (0x00000474) navi_icon_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_icon_pane_srt

0x024e,	// (0x0000024e) navi_midp_pane_srt

0x024e,	// (0x0000024e) navi_navi_pane_srt

0x0474,	// (0x00000474) navi_text_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_text_pane_srt

0x42a9,	// (0x000042a9) navi_navi_icon_text_pane_srt

0x42b1,	// (0x000042b1) navi_navi_pane_srt_g1_ParamLimits

0x42b1,	// (0x000042b1) navi_navi_pane_srt_g1

0x42c3,	// (0x000042c3) navi_navi_pane_srt_g2_ParamLimits

0x42c3,	// (0x000042c3) navi_navi_pane_srt_g2

0x0001,

0x9ee7,	// (0x00009ee7) navi_navi_pane_srt_g_ParamLimits

0x9ee7,	// (0x00009ee7) navi_navi_pane_srt_g

0x42d5,	// (0x000042d5) navi_navi_tabs_pane_srt

0x42a9,	// (0x000042a9) navi_navi_text_pane_srt

0x42a9,	// (0x000042a9) navi_navi_volume_pane_srt

0x4d3a,	// (0x00004d3a) navi_navi_text_pane_srt_t1

0x4d15,	// (0x00004d15) navi_navi_volume_pane_srt_g1

0x4d1d,	// (0x00004d1d) volume_small_pane_srt_ParamLimits

0x4d1d,	// (0x00004d1d) volume_small_pane_srt

0x247a,	// (0x0000247a) volume_small_pane_srt_g1_ParamLimits

0x247a,	// (0x0000247a) volume_small_pane_srt_g1

0x248a,	// (0x0000248a) volume_small_pane_srt_g2_ParamLimits

0x248a,	// (0x0000248a) volume_small_pane_srt_g2

0x249b,	// (0x0000249b) volume_small_pane_srt_g3_ParamLimits

0x249b,	// (0x0000249b) volume_small_pane_srt_g3

0x24ac,	// (0x000024ac) volume_small_pane_srt_g4_ParamLimits

0x24ac,	// (0x000024ac) volume_small_pane_srt_g4

0x24bd,	// (0x000024bd) volume_small_pane_srt_g5_ParamLimits

0x24bd,	// (0x000024bd) volume_small_pane_srt_g5

0x24ce,	// (0x000024ce) volume_small_pane_srt_g6_ParamLimits

0x24ce,	// (0x000024ce) volume_small_pane_srt_g6

0x24df,	// (0x000024df) volume_small_pane_srt_g7_ParamLimits

0x24df,	// (0x000024df) volume_small_pane_srt_g7

0x24f0,	// (0x000024f0) volume_small_pane_srt_g8_ParamLimits

0x24f0,	// (0x000024f0) volume_small_pane_srt_g8

0x2501,	// (0x00002501) volume_small_pane_srt_g9_ParamLimits

0x2501,	// (0x00002501) volume_small_pane_srt_g9

0x2512,	// (0x00002512) volume_small_pane_srt_g10_ParamLimits

0x2512,	// (0x00002512) volume_small_pane_srt_g10

0x0009,

0x9d6d,	// (0x00009d6d) volume_small_pane_srt_g_ParamLimits

0x9d6d,	// (0x00009d6d) volume_small_pane_srt_g

0x08f6,	// (0x000008f6) query_popup_data_pane_cp2

0x4d03,	// (0x00004d03) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4d03,	// (0x00004d03) navi_navi_icon_text_pane_srt_t1

0x3ba3,	// (0x00003ba3) navi_tabs_2_long_pane_srt

0x3ba3,	// (0x00003ba3) navi_tabs_2_pane_srt

0x3ba3,	// (0x00003ba3) navi_tabs_3_long_pane_srt

0x3ba3,	// (0x00003ba3) navi_tabs_3_pane_srt

0x3ba3,	// (0x00003ba3) navi_tabs_4_pane_srt

0x4cdb,	// (0x00004cdb) tabs_2_active_pane_srt_ParamLimits

0x4cdb,	// (0x00004cdb) tabs_2_active_pane_srt

0x4ceb,	// (0x00004ceb) tabs_2_passive_pane_srt_ParamLimits

0x4ceb,	// (0x00004ceb) tabs_2_passive_pane_srt

0x338c,	// (0x0000338c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x338c,	// (0x0000338c) bg_passive_tab_pane_cp1_srt

0x4cc1,	// (0x00004cc1) bg_passive_tab_pane_g1_cp1_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp1_srt

0x4cca,	// (0x00004cca) bg_passive_tab_pane_g3_cp1_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt

0x4cd3,	// (0x00004cd3) tabs_2_active_pane_srt_g1

0xaec7,	// (0x0000aec7) tabs_2_active_pane_srt_t1_ParamLimits

0xaec7,	// (0x0000aec7) tabs_2_active_pane_srt_t1

0x4cc1,	// (0x00004cc1) bg_active_tab_pane_g1_cp1_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp1_srt

0x4cca,	// (0x00004cca) bg_active_tab_pane_g3_cp1_srt

0x4c8e,	// (0x00004c8e) tabs_3_active_pane_srt_ParamLimits

0x4c8e,	// (0x00004c8e) tabs_3_active_pane_srt

0x4c9f,	// (0x00004c9f) tabs_3_passive_pane_cp_srt_ParamLimits

0x4c9f,	// (0x00004c9f) tabs_3_passive_pane_cp_srt

0x4cb0,	// (0x00004cb0) tabs_3_passive_pane_srt_ParamLimits

0x4cb0,	// (0x00004cb0) tabs_3_passive_pane_srt

0x338c,	// (0x0000338c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x338c,	// (0x0000338c) bg_passive_tab_pane_cp2_srt

0x2523,	// (0x00002523) bg_passive_tab_pane_g1_cp2_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp2_srt

0x252c,	// (0x0000252c) bg_passive_tab_pane_g3_cp2_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt

0x4c86,	// (0x00004c86) tabs_3_active_pane_srt_g1

0xa71a,	// (0x0000a71a) tabs_3_active_pane_srt_t1_ParamLimits

0xa71a,	// (0x0000a71a) tabs_3_active_pane_srt_t1

0x2523,	// (0x00002523) bg_active_tab_pane_g1_cp2_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp2_srt

0x252c,	// (0x0000252c) bg_active_tab_pane_g3_cp2_srt

0x4c3e,	// (0x00004c3e) tabs_4_active_pane_srt_ParamLimits

0x4c3e,	// (0x00004c3e) tabs_4_active_pane_srt

0x4c50,	// (0x00004c50) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4c50,	// (0x00004c50) tabs_4_passive_pane_cp2_srt

0x27b9,	// (0x000027b9) aid_size_cell_toolbar

0xb3b6,	// (0x0000b3b6) main_idle_act_pane_ParamLimits

0x299f,	// (0x0000299f) popup_large_graphic_colour_window_ParamLimits

0xb914,	// (0x0000b914) popup_toolbar_window_ParamLimits

0xb914,	// (0x0000b914) popup_toolbar_window

0x4a48,	// (0x00004a48) list_single_graphic_2heading_pane_ParamLimits

0x4a48,	// (0x00004a48) list_single_graphic_2heading_pane

0x1824,	// (0x00001824) aid_size_cell_apps_grid_lsc_pane

0x1836,	// (0x00001836) aid_size_cell_apps_grid_prt_pane

0x2834,	// (0x00002834) bg_wml_button_pane_cp1_ParamLimits

0x2834,	// (0x00002834) bg_wml_button_pane_cp1

0xbe00,	// (0x0000be00) form_midp_field_text_pane_t1_ParamLimits

0x338c,	// (0x0000338c) input_focus_pane_cp050_ParamLimits

0x3610,	// (0x00003610) list_midp_form_text_pane_ParamLimits

0x35ca,	// (0x000035ca) input_focus_pane_cp051_ParamLimits

0x35de,	// (0x000035de) list_midp_choice_pane_ParamLimits

0xbd9e,	// (0x0000bd9e) list_single_2graphic_pane_cp3_ParamLimits

0xbd9e,	// (0x0000bd9e) list_single_2graphic_pane_cp3

0xbdb1,	// (0x0000bdb1) list_single_midp_graphic_pane_ParamLimits

0xbdb1,	// (0x0000bdb1) list_single_midp_graphic_pane

0x30d3,	// (0x000030d3) list_single_graphic_2heading_pane_g1_ParamLimits

0x30d3,	// (0x000030d3) list_single_graphic_2heading_pane_g1

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_g4_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_g4

0x0dab,	// (0x00000dab) list_single_graphic_2heading_pane_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_2heading_pane_g5

0x0002,

0x9dc0,	// (0x00009dc0) list_single_graphic_2heading_pane_g_ParamLimits

0x9dc0,	// (0x00009dc0) list_single_graphic_2heading_pane_g

0x30df,	// (0x000030df) list_single_graphic_2heading_pane_t1_ParamLimits

0x30df,	// (0x000030df) list_single_graphic_2heading_pane_t1

0x30f3,	// (0x000030f3) list_single_graphic_2heading_pane_t2_ParamLimits

0x30f3,	// (0x000030f3) list_single_graphic_2heading_pane_t2

0x310d,	// (0x0000310d) list_single_graphic_2heading_pane_t3_ParamLimits

0x310d,	// (0x0000310d) list_single_graphic_2heading_pane_t3

0x0002,

0x9dc7,	// (0x00009dc7) list_single_graphic_2heading_pane_t_ParamLimits

0x9dc7,	// (0x00009dc7) list_single_graphic_2heading_pane_t

0x3125,	// (0x00003125) bg_popup_sub_pane_cp2

0x314b,	// (0x0000314b) grid_toobar_pane

0x3181,	// (0x00003181) cell_toolbar_pane_ParamLimits

0x3181,	// (0x00003181) cell_toolbar_pane

0x31a8,	// (0x000031a8) cell_toolbar_pane_g1_ParamLimits

0x31a8,	// (0x000031a8) cell_toolbar_pane_g1

0x31ba,	// (0x000031ba) cell_toolbar_pane_g2_ParamLimits

0x31ba,	// (0x000031ba) cell_toolbar_pane_g2

0x0001,

0x9dce,	// (0x00009dce) cell_toolbar_pane_g_ParamLimits

0x9dce,	// (0x00009dce) cell_toolbar_pane_g

0x31dc,	// (0x000031dc) grid_highlight_pane_cp2_ParamLimits

0x31dc,	// (0x000031dc) grid_highlight_pane_cp2

0x31f6,	// (0x000031f6) toolbar_button_pane

0x3202,	// (0x00003202) toolbar_button_pane_g1

0x320a,	// (0x0000320a) toolbar_button_pane_g2

0x3212,	// (0x00003212) toolbar_button_pane_g3

0x321a,	// (0x0000321a) toolbar_button_pane_g4

0x3222,	// (0x00003222) toolbar_button_pane_g5

0x322a,	// (0x0000322a) toolbar_button_pane_g6

0x3232,	// (0x00003232) toolbar_button_pane_g7

0x323a,	// (0x0000323a) toolbar_button_pane_g8

0x3242,	// (0x00003242) toolbar_button_pane_g9

0x0009,

0x9dd3,	// (0x00009dd3) toolbar_button_pane_g

0x3252,	// (0x00003252) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3252,	// (0x00003252) list_single_2graphic_pane_g1_cp3

0xbd06,	// (0x0000bd06) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbd06,	// (0x0000bd06) list_single_2graphic_pane_g2_cp3

0x2157,	// (0x00002157) list_single_2graphic_pane_g3_cp3

0x326d,	// (0x0000326d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x326d,	// (0x0000326d) list_single_2graphic_pane_g4_cp3

0x3279,	// (0x00003279) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3279,	// (0x00003279) list_single_2graphic_pane_t1_cp3

0x214b,	// (0x0000214b) list_single_midp_graphic_pane_g2_ParamLimits

0x214b,	// (0x0000214b) list_single_midp_graphic_pane_g2

0x27c1,	// (0x000027c1) aid_zoom_text_primary

0x27c9,	// (0x000027c9) aid_zoom_text_secondary

0x25de,	// (0x000025de) status_small_pane_g7_ParamLimits

0x25de,	// (0x000025de) status_small_pane_g7

0x2601,	// (0x00002601) status_small_pane_t1_ParamLimits

0xa662,	// (0x0000a662) title_pane_g2

0x0003,

0xe087,	// (0x0000e087) title_pane_g

0xa944,	// (0x0000a944) aid_size_cell_colour_1_pane_ParamLimits

0xa944,	// (0x0000a944) aid_size_cell_colour_1_pane

0xa958,	// (0x0000a958) aid_size_cell_colour_2_pane_ParamLimits

0xa958,	// (0x0000a958) aid_size_cell_colour_2_pane

0xa96c,	// (0x0000a96c) aid_size_cell_colour_3_pane_ParamLimits

0xa96c,	// (0x0000a96c) aid_size_cell_colour_3_pane

0xa980,	// (0x0000a980) aid_size_cell_colour_4_pane_ParamLimits

0xa980,	// (0x0000a980) aid_size_cell_colour_4_pane

0x16d3,	// (0x000016d3) title_pane_stacon_g1_ParamLimits

0x16d3,	// (0x000016d3) title_pane_stacon_g1

0x399e,	// (0x0000399e) popup_note_wait_window_g3_ParamLimits

0x399e,	// (0x0000399e) popup_note_wait_window_g3

0x3a14,	// (0x00003a14) popup_note_wait_window_t5_ParamLimits

0x3a14,	// (0x00003a14) popup_note_wait_window_t5

0x024e,	// (0x0000024e) main_feb_china_hwr_fs_writing_pane

0xb417,	// (0x0000b417) popup_feb_china_hwr_fs_window_ParamLimits

0xb417,	// (0x0000b417) popup_feb_china_hwr_fs_window

0xbd17,	// (0x0000bd17) aid_size_cell_hwr_fs_ParamLimits

0xbd17,	// (0x0000bd17) aid_size_cell_hwr_fs

0x338c,	// (0x0000338c) bg_popup_sub_pane_cp3_ParamLimits

0x338c,	// (0x0000338c) bg_popup_sub_pane_cp3

0xbd2c,	// (0x0000bd2c) grid_hwr_fs_pane_ParamLimits

0xbd2c,	// (0x0000bd2c) grid_hwr_fs_pane

0x33ac,	// (0x000033ac) linegrid_hwr_fs_pane_ParamLimits

0x33ac,	// (0x000033ac) linegrid_hwr_fs_pane

0xbd44,	// (0x0000bd44) cell_hwr_fs_pane_ParamLimits

0xbd44,	// (0x0000bd44) cell_hwr_fs_pane

0x33da,	// (0x000033da) linegrid_hwr_fs_pane_g1_ParamLimits

0x33da,	// (0x000033da) linegrid_hwr_fs_pane_g1

0xbd64,	// (0x0000bd64) linegrid_hwr_fs_pane_g2_ParamLimits

0xbd64,	// (0x0000bd64) linegrid_hwr_fs_pane_g2

0x33f8,	// (0x000033f8) linegrid_hwr_fs_pane_g3_ParamLimits

0x33f8,	// (0x000033f8) linegrid_hwr_fs_pane_g3

0x3404,	// (0x00003404) linegrid_hwr_fs_pane_g4_ParamLimits

0x3404,	// (0x00003404) linegrid_hwr_fs_pane_g4

0x341e,	// (0x0000341e) linegrid_hwr_fs_pane_g5_ParamLimits

0x341e,	// (0x0000341e) linegrid_hwr_fs_pane_g5

0x0004,

0xe1a2,	// (0x0000e1a2) linegrid_hwr_fs_pane_g_ParamLimits

0xe1a2,	// (0x0000e1a2) linegrid_hwr_fs_pane_g

0x3434,	// (0x00003434) cell_hwr_fs_pane_g1_ParamLimits

0x3434,	// (0x00003434) cell_hwr_fs_pane_g1

0x3011,	// (0x00003011) cell_hwr_fs_pane_g2_ParamLimits

0x3011,	// (0x00003011) cell_hwr_fs_pane_g2

0xbd76,	// (0x0000bd76) cell_hwr_fs_pane_g3_ParamLimits

0xbd76,	// (0x0000bd76) cell_hwr_fs_pane_g3

0xbd83,	// (0x0000bd83) cell_hwr_fs_pane_g4_ParamLimits

0xbd83,	// (0x0000bd83) cell_hwr_fs_pane_g4

0x0003,

0xe1ad,	// (0x0000e1ad) cell_hwr_fs_pane_g_ParamLimits

0xe1ad,	// (0x0000e1ad) cell_hwr_fs_pane_g

0xbd90,	// (0x0000bd90) cell_hwr_fs_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp6

0x024e,	// (0x0000024e) main_idle_act2_pane

0x1496,	// (0x00001496) aid_inside_area_popup_secondary

0xbf80,	// (0x0000bf80) aid_inside_area_window_primary_ParamLimits

0xbf80,	// (0x0000bf80) aid_inside_area_window_primary

0x4e04,	// (0x00004e04) ai2_news_ticker_pane

0x4e0c,	// (0x00004e0c) aid_size_cell_ai1_link_ParamLimits

0x4e0c,	// (0x00004e0c) aid_size_cell_ai1_link

0xc3cb,	// (0x0000c3cb) popup_ai2_data_window_ParamLimits

0xc3cb,	// (0x0000c3cb) popup_ai2_data_window

0x4e3a,	// (0x00004e3a) popup_ai2_link_window_ParamLimits

0x4e3a,	// (0x00004e3a) popup_ai2_link_window

0x338c,	// (0x0000338c) bg_popup_sub_pane_cp4_ParamLimits

0x338c,	// (0x0000338c) bg_popup_sub_pane_cp4

0x4e4e,	// (0x00004e4e) grid_ai2_link_pane_ParamLimits

0x4e4e,	// (0x00004e4e) grid_ai2_link_pane

0x4e65,	// (0x00004e65) popup_ai2_link_window_g1_ParamLimits

0x4e65,	// (0x00004e65) popup_ai2_link_window_g1

0x4e71,	// (0x00004e71) popup_ai2_link_window_g2_ParamLimits

0x4e71,	// (0x00004e71) popup_ai2_link_window_g2

0x0001,

0x9fcb,	// (0x00009fcb) popup_ai2_link_window_g_ParamLimits

0x9fcb,	// (0x00009fcb) popup_ai2_link_window_g

0x4e80,	// (0x00004e80) ai2_mp_button_pane

0x4e88,	// (0x00004e88) ai2_mp_volume_pane

0x35ca,	// (0x000035ca) bg_popup_sub_pane_cp5_ParamLimits

0x35ca,	// (0x000035ca) bg_popup_sub_pane_cp5

0x4e90,	// (0x00004e90) heading_ai2_gene_pane_ParamLimits

0x4e90,	// (0x00004e90) heading_ai2_gene_pane

0x4e9c,	// (0x00004e9c) list_ai2_gene_pane_ParamLimits

0x4e9c,	// (0x00004e9c) list_ai2_gene_pane

0x4ee4,	// (0x00004ee4) cell_ai2_link_pane_ParamLimits

0x4ee4,	// (0x00004ee4) cell_ai2_link_pane

0x4efa,	// (0x00004efa) cell_ai2_link_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp7

0x4fc2,	// (0x00004fc2) ai2_mp_volume_pane_g1

0x4fca,	// (0x00004fca) ai2_mp_volume_pane_g2

0xc3f5,	// (0x0000c3f5) list_ai2_gene_pane_t1

0x4fd2,	// (0x00004fd2) ai2_mp_volume_pane_g3

0x0002,

0x9fe4,	// (0x00009fe4) ai2_mp_volume_pane_g

0x4fda,	// (0x00004fda) volume_small_pane_cp3

0x4fe3,	// (0x00004fe3) aid_size_cell_ai2_button

0x4feb,	// (0x00004feb) grid_ai2_button_pane

0x4ff4,	// (0x00004ff4) cell_ai2_button_pane_ParamLimits

0x4ff4,	// (0x00004ff4) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp8

0x4f82,	// (0x00004f82) ai2_gene_pane_t1_ParamLimits

0x4f82,	// (0x00004f82) ai2_gene_pane_t1

0xb385,	// (0x0000b385) aid_height_parent_landscape

0xc14a,	// (0x0000c14a) aid_height_set_list

0x487e,	// (0x0000487e) aid_size_parent

0x4bd1,	// (0x00004bd1) aid_size_cell_graphic_pane_ParamLimits

0x4eac,	// (0x00004eac) popup_ai2_data_window_g1_ParamLimits

0x4eac,	// (0x00004eac) popup_ai2_data_window_g1

0x4eb8,	// (0x00004eb8) ai2_news_ticker_pane_g1

0x4ec0,	// (0x00004ec0) ai2_news_ticker_pane_g2

0x0001,

0x9fd0,	// (0x00009fd0) ai2_news_ticker_pane_g

0x4ec8,	// (0x00004ec8) ai2_news_ticker_pane_t1

0x4ed6,	// (0x00004ed6) ai2_news_ticker_pane_t2

0x0001,

0x9fd5,	// (0x00009fd5) ai2_news_ticker_pane_t

0x4b6b,	// (0x00004b6b) heading_ai2_gene_pane_g1

0x4f03,	// (0x00004f03) heading_ai2_gene_pane_t1_ParamLimits

0x4f03,	// (0x00004f03) heading_ai2_gene_pane_t1

0x4f18,	// (0x00004f18) list_highlight_pane_cp6

0xc3df,	// (0x0000c3df) ai2_gene_pane_ParamLimits

0xc3df,	// (0x0000c3df) ai2_gene_pane

0xc403,	// (0x0000c403) list_ai2_gene_pane_t2

0x0001,

0xe24a,	// (0x0000e24a) list_ai2_gene_pane_t

0x4f53,	// (0x00004f53) list_highlight_pane_cp8_ParamLimits

0x4f53,	// (0x00004f53) list_highlight_pane_cp8

0x4f64,	// (0x00004f64) ai2_gene_pane_g1_ParamLimits

0x4f64,	// (0x00004f64) ai2_gene_pane_g1

0x4f76,	// (0x00004f76) ai2_gene_pane_g2_ParamLimits

0x4f76,	// (0x00004f76) ai2_gene_pane_g2

0x0001,

0x9fdf,	// (0x00009fdf) ai2_gene_pane_g_ParamLimits

0x9fdf,	// (0x00009fdf) ai2_gene_pane_g

0x0c62,	// (0x00000c62) scroll_pane_cp12

0xb344,	// (0x0000b344) control_pane_t3_ParamLimits

0xb344,	// (0x0000b344) control_pane_t3

0x25f2,	// (0x000025f2) status_small_pane_g8_ParamLimits

0x25f2,	// (0x000025f2) status_small_pane_g8

0xb48b,	// (0x0000b48b) popup_find_window_ParamLimits

0xb67e,	// (0x0000b67e) popup_note_image_window_ParamLimits

0x0e74,	// (0x00000e74) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double2_graphic_pane_vc_g1

0x0e80,	// (0x00000e80) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e80,	// (0x00000e80) list_double2_graphic_pane_vc_g2

0x0dab,	// (0x00000dab) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dab,	// (0x00000dab) list_double2_graphic_pane_vc_g3

0x0002,

0x9c2e,	// (0x00009c2e) list_double2_graphic_pane_vc_g_ParamLimits

0x9c2e,	// (0x00009c2e) list_double2_graphic_pane_vc_g

0x0e8c,	// (0x00000e8c) list_double2_graphic_pane_vc_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_double2_graphic_pane_vc_t1

0x0e80,	// (0x00000e80) list_single_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_single_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_heading_pane_vc_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_single_heading_pane_vc_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_single_heading_pane_vc_g

0x3293,	// (0x00003293) list_single_heading_pane_vc_t1_ParamLimits

0x3293,	// (0x00003293) list_single_heading_pane_vc_t1

0x32a9,	// (0x000032a9) list_single_heading_pane_vc_t2_ParamLimits

0x32a9,	// (0x000032a9) list_single_heading_pane_vc_t2

0x0001,

0x9de8,	// (0x00009de8) list_single_heading_pane_vc_t_ParamLimits

0x9de8,	// (0x00009de8) list_single_heading_pane_vc_t

0x32d1,	// (0x000032d1) list_setting_number_pane_vc_g1_ParamLimits

0x32d1,	// (0x000032d1) list_setting_number_pane_vc_g1

0x32dd,	// (0x000032dd) list_setting_number_pane_vc_g2_ParamLimits

0x32dd,	// (0x000032dd) list_setting_number_pane_vc_g2

0x0001,

0x9ded,	// (0x00009ded) list_setting_number_pane_vc_g_ParamLimits

0x9ded,	// (0x00009ded) list_setting_number_pane_vc_g

0x32e9,	// (0x000032e9) list_setting_number_pane_vc_t1_ParamLimits

0x32e9,	// (0x000032e9) list_setting_number_pane_vc_t1

0x32fd,	// (0x000032fd) list_setting_number_pane_vc_t2_ParamLimits

0x32fd,	// (0x000032fd) list_setting_number_pane_vc_t2

0x3319,	// (0x00003319) list_setting_number_pane_vc_t3_ParamLimits

0x3319,	// (0x00003319) list_setting_number_pane_vc_t3

0x0002,

0x9df2,	// (0x00009df2) list_setting_number_pane_vc_t_ParamLimits

0x9df2,	// (0x00009df2) list_setting_number_pane_vc_t

0x333f,	// (0x0000333f) set_value_pane_vc_ParamLimits

0x333f,	// (0x0000333f) set_value_pane_vc

0x4a48,	// (0x00004a48) list_double2_graphic_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double2_graphic_pane_vc

0x4a5b,	// (0x00004a5b) list_double2_large_graphic_pane_vc_ParamLimits

0x4a5b,	// (0x00004a5b) list_double2_large_graphic_pane_vc

0x4a48,	// (0x00004a48) list_double2_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double2_pane_vc

0x4a48,	// (0x00004a48) list_double_graphic_heading_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double_graphic_heading_pane_vc

0x4a48,	// (0x00004a48) list_double_graphic_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double_graphic_pane_vc

0x4a48,	// (0x00004a48) list_double_heading_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double_heading_pane_vc

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_vc_ParamLimits

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_vc

0x4a48,	// (0x00004a48) list_double_number_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double_number_pane_vc

0x4a48,	// (0x00004a48) list_double_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double_pane_vc

0x4a48,	// (0x00004a48) list_double_time_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_double_time_pane_vc

0x4a48,	// (0x00004a48) list_setting_number_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_setting_number_pane_vc

0x4a48,	// (0x00004a48) list_setting_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_setting_pane_vc

0x4a48,	// (0x00004a48) list_single_graphic_heading_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_single_graphic_heading_pane_vc

0x4a48,	// (0x00004a48) list_single_heading_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_single_heading_pane_vc

0x4a48,	// (0x00004a48) list_single_number_heading_pane_vc_ParamLimits

0x4a48,	// (0x00004a48) list_single_number_heading_pane_vc

0x0e74,	// (0x00000e74) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double_graphic_heading_pane_vc_g1

0x0e80,	// (0x00000e80) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0e80,	// (0x00000e80) list_double_graphic_heading_pane_vc_g2

0x0dab,	// (0x00000dab) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0dab,	// (0x00000dab) list_double_graphic_heading_pane_vc_g3

0x0002,

0x9c2e,	// (0x00009c2e) list_double_graphic_heading_pane_vc_g_ParamLimits

0x9c2e,	// (0x00009c2e) list_double_graphic_heading_pane_vc_g

0x5028,	// (0x00005028) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5028,	// (0x00005028) list_double_graphic_heading_pane_vc_t1

0x3293,	// (0x00003293) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3293,	// (0x00003293) list_double_graphic_heading_pane_vc_t2

0x0001,

0x9feb,	// (0x00009feb) list_double_graphic_heading_pane_vc_t_ParamLimits

0x9feb,	// (0x00009feb) list_double_graphic_heading_pane_vc_t

0x32d1,	// (0x000032d1) list_setting_pane_vc_g1_ParamLimits

0x32d1,	// (0x000032d1) list_setting_pane_vc_g1

0x32dd,	// (0x000032dd) list_setting_pane_vc_g2_ParamLimits

0x32dd,	// (0x000032dd) list_setting_pane_vc_g2

0x0001,

0x9ded,	// (0x00009ded) list_setting_pane_vc_g_ParamLimits

0x9ded,	// (0x00009ded) list_setting_pane_vc_g

0x5268,	// (0x00005268) list_setting_pane_vc_t1_ParamLimits

0x5268,	// (0x00005268) list_setting_pane_vc_t1

0x527c,	// (0x0000527c) list_setting_pane_vc_t2_ParamLimits

0x527c,	// (0x0000527c) list_setting_pane_vc_t2

0x0001,

0xa02e,	// (0x0000a02e) list_setting_pane_vc_t_ParamLimits

0xa02e,	// (0x0000a02e) list_setting_pane_vc_t

0x333f,	// (0x0000333f) set_value_pane_cp_vc_ParamLimits

0x333f,	// (0x0000333f) set_value_pane_cp_vc

0x0e80,	// (0x00000e80) list_single_number_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_heading_pane_vc_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_single_number_heading_pane_vc_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_single_number_heading_pane_vc_g

0x3293,	// (0x00003293) list_single_number_heading_pane_vc_t1_ParamLimits

0x3293,	// (0x00003293) list_single_number_heading_pane_vc_t1

0x529e,	// (0x0000529e) list_single_number_heading_pane_vc_t2_ParamLimits

0x529e,	// (0x0000529e) list_single_number_heading_pane_vc_t2

0x52b0,	// (0x000052b0) list_single_number_heading_pane_vc_t3_ParamLimits

0x52b0,	// (0x000052b0) list_single_number_heading_pane_vc_t3

0x0002,

0xa033,	// (0x0000a033) list_single_number_heading_pane_vc_t_ParamLimits

0xa033,	// (0x0000a033) list_single_number_heading_pane_vc_t

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_vc_g1

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_vc_g4

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_vc_g5

0x0002,

0x9c2e,	// (0x00009c2e) list_single_graphic_heading_pane_vc_g_ParamLimits

0x9c2e,	// (0x00009c2e) list_single_graphic_heading_pane_vc_g

0x3293,	// (0x00003293) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3293,	// (0x00003293) list_single_graphic_heading_pane_vc_t1

0x52c2,	// (0x000052c2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x52c2,	// (0x000052c2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa03a,	// (0x0000a03a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa03a,	// (0x0000a03a) list_single_graphic_heading_pane_vc_t

0x0e80,	// (0x00000e80) list_double2_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double2_pane_vc_g1

0x0dab,	// (0x00000dab) list_double2_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double2_pane_vc_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_double2_pane_vc_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_double2_pane_vc_g

0x0db7,	// (0x00000db7) list_double2_pane_vc_t1_ParamLimits

0x0db7,	// (0x00000db7) list_double2_pane_vc_t1

0x0d1a,	// (0x00000d1a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d1a,	// (0x00000d1a) list_double2_large_graphic_pane_vc_g1

0x0d26,	// (0x00000d26) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d26,	// (0x00000d26) list_double2_large_graphic_pane_vc_g2

0x0d32,	// (0x00000d32) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d32,	// (0x00000d32) list_double2_large_graphic_pane_vc_g3

0x0002,

0x9bfe,	// (0x00009bfe) list_double2_large_graphic_pane_vc_g_ParamLimits

0x9bfe,	// (0x00009bfe) list_double2_large_graphic_pane_vc_g

0x0d46,	// (0x00000d46) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d46,	// (0x00000d46) list_double2_large_graphic_pane_vc_t1

0x52d4,	// (0x000052d4) list_double_time_pane_vc_g1_ParamLimits

0x52d4,	// (0x000052d4) list_double_time_pane_vc_g1

0x52e0,	// (0x000052e0) list_double_time_pane_vc_g2_ParamLimits

0x52e0,	// (0x000052e0) list_double_time_pane_vc_g2

0x0001,

0xa03f,	// (0x0000a03f) list_double_time_pane_vc_g_ParamLimits

0xa03f,	// (0x0000a03f) list_double_time_pane_vc_g

0x52ec,	// (0x000052ec) list_double_time_pane_vc_t1_ParamLimits

0x52ec,	// (0x000052ec) list_double_time_pane_vc_t1

0x5305,	// (0x00005305) list_double_time_pane_vc_t2_ParamLimits

0x5305,	// (0x00005305) list_double_time_pane_vc_t2

0x531e,	// (0x0000531e) list_double_time_pane_vc_t3_ParamLimits

0x531e,	// (0x0000531e) list_double_time_pane_vc_t3

0x5336,	// (0x00005336) list_double_time_pane_vc_t4_ParamLimits

0x5336,	// (0x00005336) list_double_time_pane_vc_t4

0x0003,

0xa044,	// (0x0000a044) list_double_time_pane_vc_t_ParamLimits

0xa044,	// (0x0000a044) list_double_time_pane_vc_t

0x0e80,	// (0x00000e80) list_double_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_pane_vc_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_double_pane_vc_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_double_pane_vc_g

0x5348,	// (0x00005348) list_double_pane_vc_t1_ParamLimits

0x5348,	// (0x00005348) list_double_pane_vc_t1

0x535a,	// (0x0000535a) list_double_pane_vc_t2_ParamLimits

0x535a,	// (0x0000535a) list_double_pane_vc_t2

0x0001,

0xa04d,	// (0x0000a04d) list_double_pane_vc_t_ParamLimits

0xa04d,	// (0x0000a04d) list_double_pane_vc_t

0x0e80,	// (0x00000e80) list_double_number_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_number_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_number_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_number_pane_vc_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_double_number_pane_vc_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_double_number_pane_vc_g

0x5370,	// (0x00005370) list_double_number_pane_vc_t1_ParamLimits

0x5370,	// (0x00005370) list_double_number_pane_vc_t1

0x5384,	// (0x00005384) list_double_number_pane_vc_t2_ParamLimits

0x5384,	// (0x00005384) list_double_number_pane_vc_t2

0x535a,	// (0x0000535a) list_double_number_pane_vc_t3_ParamLimits

0x535a,	// (0x0000535a) list_double_number_pane_vc_t3

0x0002,

0xa052,	// (0x0000a052) list_double_number_pane_vc_t_ParamLimits

0xa052,	// (0x0000a052) list_double_number_pane_vc_t

0x5396,	// (0x00005396) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5396,	// (0x00005396) list_double_large_graphic_pane_vc_g1

0x53a2,	// (0x000053a2) list_double_large_graphic_pane_vc_g2_ParamLimits

0x53a2,	// (0x000053a2) list_double_large_graphic_pane_vc_g2

0x0d32,	// (0x00000d32) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0d32,	// (0x00000d32) list_double_large_graphic_pane_vc_g3

0x53b1,	// (0x000053b1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x53b1,	// (0x000053b1) list_double_large_graphic_pane_vc_g4

0x0003,

0xa059,	// (0x0000a059) list_double_large_graphic_pane_vc_g_ParamLimits

0xa059,	// (0x0000a059) list_double_large_graphic_pane_vc_g

0x53bd,	// (0x000053bd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x53bd,	// (0x000053bd) list_double_large_graphic_pane_vc_t1

0x53cf,	// (0x000053cf) list_double_large_graphic_pane_vc_t2_ParamLimits

0x53cf,	// (0x000053cf) list_double_large_graphic_pane_vc_t2

0x0001,

0xa062,	// (0x0000a062) list_double_large_graphic_pane_vc_t_ParamLimits

0xa062,	// (0x0000a062) list_double_large_graphic_pane_vc_t

0x0e80,	// (0x00000e80) list_double_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_heading_pane_vc_g2

0x0001,

0x9c7a,	// (0x00009c7a) list_double_heading_pane_vc_g_ParamLimits

0x9c7a,	// (0x00009c7a) list_double_heading_pane_vc_g

0x53e6,	// (0x000053e6) list_double_heading_pane_vc_t1_ParamLimits

0x53e6,	// (0x000053e6) list_double_heading_pane_vc_t1

0x3293,	// (0x00003293) list_double_heading_pane_vc_t2_ParamLimits

0x3293,	// (0x00003293) list_double_heading_pane_vc_t2

0x0001,

0xa067,	// (0x0000a067) list_double_heading_pane_vc_t_ParamLimits

0xa067,	// (0x0000a067) list_double_heading_pane_vc_t

0x0e74,	// (0x00000e74) list_double_graphic_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double_graphic_pane_vc_g1

0x53f8,	// (0x000053f8) list_double_graphic_pane_vc_g2_ParamLimits

0x53f8,	// (0x000053f8) list_double_graphic_pane_vc_g2

0x5407,	// (0x00005407) list_double_graphic_pane_vc_g3_ParamLimits

0x5407,	// (0x00005407) list_double_graphic_pane_vc_g3

0x0002,

0xa06c,	// (0x0000a06c) list_double_graphic_pane_vc_g_ParamLimits

0xa06c,	// (0x0000a06c) list_double_graphic_pane_vc_g

0x5413,	// (0x00005413) list_double_graphic_pane_vc_t1_ParamLimits

0x5413,	// (0x00005413) list_double_graphic_pane_vc_t1

0x535a,	// (0x0000535a) list_double_graphic_pane_vc_t2_ParamLimits

0x535a,	// (0x0000535a) list_double_graphic_pane_vc_t2

0x0001,

0xa073,	// (0x0000a073) list_double_graphic_pane_vc_t_ParamLimits

0xa073,	// (0x0000a073) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xa4db,	// (0x0000a4db) aid_size_cell_touch_ParamLimits

0xa4db,	// (0x0000a4db) aid_size_cell_touch

0x0278,	// (0x00000278) popup_fast_swap_wide_window_ParamLimits

0x0278,	// (0x00000278) popup_fast_swap_wide_window

0xa5f5,	// (0x0000a5f5) touch_pane_ParamLimits

0xa5f5,	// (0x0000a5f5) touch_pane

0x1118,	// (0x00001118) button_value_adjust_pane_cp2

0x1120,	// (0x00001120) button_value_adjust_pane_cp4

0x1140,	// (0x00001140) form_field_data_pane_cp2

0xad89,	// (0x0000ad89) form_field_data_wide_pane_cp2

0x18f5,	// (0x000018f5) bg_scroll_pane_ParamLimits

0x1914,	// (0x00001914) scroll_handle_pane_ParamLimits

0x1928,	// (0x00001928) scroll_sc2_down_pane_ParamLimits

0x1928,	// (0x00001928) scroll_sc2_down_pane

0x194f,	// (0x0000194f) scroll_sc2_up_pane_ParamLimits

0x194f,	// (0x0000194f) scroll_sc2_up_pane

0xc527,	// (0x0000c527) grid_wheel_folder_pane_g1_ParamLimits

0xc527,	// (0x0000c527) grid_wheel_folder_pane_g1

0x1faf,	// (0x00001faf) clock_nsta_pane_cp2_ParamLimits

0x1faf,	// (0x00001faf) clock_nsta_pane_cp2

0xb198,	// (0x0000b198) listscroll_midp_pane_ParamLimits

0xb1a8,	// (0x0000b1a8) midp_canvas_pane

0x27a7,	// (0x000027a7) nsta_clock_indic_pane

0x2805,	// (0x00002805) listscroll_form_pane_vc

0x2822,	// (0x00002822) listscroll_set_pane_vc_ParamLimits

0x2822,	// (0x00002822) listscroll_set_pane_vc

0xba4a,	// (0x0000ba4a) clock_nsta_pane

0xba6d,	// (0x0000ba6d) indicator_nsta_pane

0x3125,	// (0x00003125) bg_popup_sub_pane_cp2_ParamLimits

0x3139,	// (0x00003139) find_pane_cp2_ParamLimits

0x3139,	// (0x00003139) find_pane_cp2

0x314b,	// (0x0000314b) grid_toobar_pane_ParamLimits

0x334b,	// (0x0000334b) list_form_gen_pane_vc_ParamLimits

0x334b,	// (0x0000334b) list_form_gen_pane_vc

0x3361,	// (0x00003361) scroll_pane_cp8_vc_ParamLimits

0x3361,	// (0x00003361) scroll_pane_cp8_vc

0x3472,	// (0x00003472) data_form_wide_pane_vc_ParamLimits

0x3472,	// (0x00003472) data_form_wide_pane_vc

0x347e,	// (0x0000347e) form_field_data_wide_pane_vc_g1

0x3486,	// (0x00003486) form_field_data_wide_pane_vc_t1_ParamLimits

0x3486,	// (0x00003486) form_field_data_wide_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp6_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp6_vc

0xbe37,	// (0x0000be37) list_midp_pane_ParamLimits

0x4c32,	// (0x00004c32) scroll_pane_cp16_ParamLimits

0x4c32,	// (0x00004c32) scroll_pane_cp16

0x37a7,	// (0x000037a7) button_value_adjust_pane_ParamLimits

0x37a7,	// (0x000037a7) button_value_adjust_pane

0xc156,	// (0x0000c156) button_value_adjust_pane_cp6_ParamLimits

0xc156,	// (0x0000c156) button_value_adjust_pane_cp6

0xc260,	// (0x0000c260) settings_code_pane_cp_ParamLimits

0xc260,	// (0x0000c260) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0x9d17,	// (0x00009d17) cell_touch_pane_g

0xc411,	// (0x0000c411) cell_touch_pane_cp_ParamLimits

0xc411,	// (0x0000c411) cell_touch_pane_cp

0xc42d,	// (0x0000c42d) cell_touch_pane_ParamLimits

0xc42d,	// (0x0000c42d) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_vc

0x503a,	// (0x0000503a) list_set_graphic_pane_vc_g1_ParamLimits

0x503a,	// (0x0000503a) list_set_graphic_pane_vc_g1

0x5046,	// (0x00005046) list_set_graphic_pane_vc_g2_ParamLimits

0x5046,	// (0x00005046) list_set_graphic_pane_vc_g2

0x0001,

0x9ff0,	// (0x00009ff0) list_set_graphic_pane_vc_g_ParamLimits

0x9ff0,	// (0x00009ff0) list_set_graphic_pane_vc_g

0x5052,	// (0x00005052) text_primary_small_cp13_vc_ParamLimits

0x5052,	// (0x00005052) text_primary_small_cp13_vc

0x506a,	// (0x0000506a) list_set_graphic_pane_vc_ParamLimits

0x506a,	// (0x0000506a) list_set_graphic_pane_vc

0x024e,	// (0x0000024e) input_focus_pane_cp2_vc

0x002a,	// (0x0000002a) setting_code_pane_vc_g1

0x507d,	// (0x0000507d) setting_code_pane_vc_t1

0x508b,	// (0x0000508b) set_text_pane_vc_t1_ParamLimits

0x508b,	// (0x0000508b) set_text_pane_vc_t1

0x024e,	// (0x0000024e) input_focus_pane_cp1_vc

0x50a6,	// (0x000050a6) list_set_text_pane_vc

0x002a,	// (0x0000002a) setting_text_pane_vc_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_vc

0x50b0,	// (0x000050b0) setting_slider_graphic_pane_vc_g1

0x50b8,	// (0x000050b8) setting_slider_graphic_pane_vc_t1

0x50c6,	// (0x000050c6) setting_slider_graphic_pane_vc_t2

0x0001,

0x9ff5,	// (0x00009ff5) setting_slider_graphic_pane_vc_t

0x50d4,	// (0x000050d4) slider_set_pane_cp_vc

0x50dc,	// (0x000050dc) slider_set_pane_vc_g1

0x50e5,	// (0x000050e5) slider_set_pane_vc_g2

0x0006,

0x9ffa,	// (0x00009ffa) slider_set_pane_vc_g

0x130e,	// (0x0000130e) set_opt_bg_pane_g1_copy1

0x1316,	// (0x00001316) set_opt_bg_pane_g2_copy1

0x5111,	// (0x00005111) set_opt_bg_pane_g3_copy1

0x1326,	// (0x00001326) set_opt_bg_pane_g4_copy1

0x132e,	// (0x0000132e) set_opt_bg_pane_g5_copy1

0x1336,	// (0x00001336) set_opt_bg_pane_g6_copy1

0x5119,	// (0x00005119) set_opt_bg_pane_g7_copy1

0x5121,	// (0x00005121) set_opt_bg_pane_g8_copy1

0x5129,	// (0x00005129) set_opt_bg_pane_g9_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp_vc

0x5131,	// (0x00005131) setting_slider_pane_vc_t1

0x50b8,	// (0x000050b8) setting_slider_pane_vc_t2

0x50c6,	// (0x000050c6) setting_slider_pane_vc_t3

0x0002,

0xa009,	// (0x0000a009) setting_slider_pane_vc_t

0x50d4,	// (0x000050d4) slider_set_pane_vc

0x3f60,	// (0x00003f60) volume_set_pane_vc_g1

0x5140,	// (0x00005140) volume_set_pane_vc_g2

0x5149,	// (0x00005149) volume_set_pane_vc_g3

0x5152,	// (0x00005152) volume_set_pane_vc_g4

0x515b,	// (0x0000515b) volume_set_pane_vc_g5

0x5164,	// (0x00005164) volume_set_pane_vc_g6

0x516d,	// (0x0000516d) volume_set_pane_vc_g7

0x5176,	// (0x00005176) volume_set_pane_vc_g8

0x517f,	// (0x0000517f) volume_set_pane_vc_g9

0x5188,	// (0x00005188) volume_set_pane_vc_g10

0x0009,

0xa010,	// (0x0000a010) volume_set_pane_vc_g

0x5191,	// (0x00005191) volume_set_pane_vc

0x5199,	// (0x00005199) button_value_adjust_pane_cp1_vc

0x51a3,	// (0x000051a3) list_highlight_pane_cp2_vc

0x51ac,	// (0x000051ac) list_set_pane_vc_ParamLimits

0x51ac,	// (0x000051ac) list_set_pane_vc

0x51fe,	// (0x000051fe) main_pane_set_vc_t1_ParamLimits

0x51fe,	// (0x000051fe) main_pane_set_vc_t1

0x5213,	// (0x00005213) main_pane_set_vc_t2_ParamLimits

0x5213,	// (0x00005213) main_pane_set_vc_t2

0x5225,	// (0x00005225) main_pane_set_vc_t3_ParamLimits

0x5225,	// (0x00005225) main_pane_set_vc_t3

0x5237,	// (0x00005237) main_pane_set_vc_t4_ParamLimits

0x5237,	// (0x00005237) main_pane_set_vc_t4

0x0003,

0xa025,	// (0x0000a025) main_pane_set_vc_t_ParamLimits

0xa025,	// (0x0000a025) main_pane_set_vc_t

0x5249,	// (0x00005249) setting_code_pane_vc_ParamLimits

0x5249,	// (0x00005249) setting_code_pane_vc

0x5258,	// (0x00005258) setting_slider_graphic_pane_vc

0x5258,	// (0x00005258) setting_slider_pane_vc

0x5258,	// (0x00005258) setting_text_pane_vc

0x5258,	// (0x00005258) setting_volume_pane_vc

0x5260,	// (0x00005260) scroll_pane_cp121_vc

0x110f,	// (0x0000110f) set_content_pane_vc

0x5425,	// (0x00005425) button_value_adjust_pane_g1

0x542e,	// (0x0000542e) button_value_adjust_pane_g2

0x0001,

0xa078,	// (0x0000a078) button_value_adjust_pane_g

0x5437,	// (0x00005437) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5437,	// (0x00005437) form_field_slider_wide_pane_vc_t1

0x544d,	// (0x0000544d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x544d,	// (0x0000544d) form_field_slider_wide_pane_vc_t2

0x0001,

0xa07d,	// (0x0000a07d) form_field_slider_wide_pane_vc_t_ParamLimits

0xa07d,	// (0x0000a07d) form_field_slider_wide_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp10_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10_vc

0x5462,	// (0x00005462) slider_cont_pane_cp1_vc_ParamLimits

0x5462,	// (0x00005462) slider_cont_pane_cp1_vc

0x50dc,	// (0x000050dc) slider_form_pane_g1_cp2

0x50e5,	// (0x000050e5) slider_form_pane_g2_cp2

0x547d,	// (0x0000547d) form_field_slider_pane_vc_t3

0x548b,	// (0x0000548b) form_field_slider_pane_vc_t4

0x5499,	// (0x00005499) slider_form_pane_vc_ParamLimits

0x5499,	// (0x00005499) slider_form_pane_vc

0x54a6,	// (0x000054a6) form_field_slider_pane_vc_t1_ParamLimits

0x54a6,	// (0x000054a6) form_field_slider_pane_vc_t1

0x54bc,	// (0x000054bc) form_field_slider_pane_vc_t2_ParamLimits

0x54bc,	// (0x000054bc) form_field_slider_pane_vc_t2

0x0001,

0xa08d,	// (0x0000a08d) form_field_slider_pane_vc_t_ParamLimits

0xa08d,	// (0x0000a08d) form_field_slider_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp9_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9_vc

0x54ce,	// (0x000054ce) slider_cont_pane_vc_ParamLimits

0x54ce,	// (0x000054ce) slider_cont_pane_vc

0x54e0,	// (0x000054e0) list_form_graphic_pane_cp_vc_ParamLimits

0x54e0,	// (0x000054e0) list_form_graphic_pane_cp_vc

0x347e,	// (0x0000347e) form_field_popup_wide_pane_vc_g1

0x54f5,	// (0x000054f5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x54f5,	// (0x000054f5) form_field_popup_wide_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp8_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp8_vc

0x550a,	// (0x0000550a) list_form_wide_pane_vc_ParamLimits

0x550a,	// (0x0000550a) list_form_wide_pane_vc

0x5516,	// (0x00005516) list_form_graphic_pane_vc_g1

0x551e,	// (0x0000551e) list_form_graphic_pane_vc_t1_ParamLimits

0x551e,	// (0x0000551e) list_form_graphic_pane_vc_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc

0x553a,	// (0x0000553a) list_form_graphic_pane_vc_ParamLimits

0x553a,	// (0x0000553a) list_form_graphic_pane_vc

0x347e,	// (0x0000347e) form_field_popup_pane_vc_g1

0x5550,	// (0x00005550) form_field_popup_pane_vc_t1_ParamLimits

0x5550,	// (0x00005550) form_field_popup_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp7_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp7_vc

0x5565,	// (0x00005565) list_form_pane_vc_ParamLimits

0x5565,	// (0x00005565) list_form_pane_vc

0x5571,	// (0x00005571) data_form_pane_vc_t1_ParamLimits

0x5571,	// (0x00005571) data_form_pane_vc_t1

0x130e,	// (0x0000130e) input_focus_pane_vc_g1

0x1316,	// (0x00001316) input_focus_pane_vc_g2

0x131e,	// (0x0000131e) input_focus_pane_vc_g3

0x1326,	// (0x00001326) input_focus_pane_vc_g4

0x132e,	// (0x0000132e) input_focus_pane_vc_g5

0x1336,	// (0x00001336) input_focus_pane_vc_g6

0x133e,	// (0x0000133e) input_focus_pane_vc_g7

0x1346,	// (0x00001346) input_focus_pane_vc_g8

0x134e,	// (0x0000134e) input_focus_pane_vc_g9

0x002a,	// (0x0000002a) input_focus_pane_vc_g10

0x0009,

0x9ca0,	// (0x00009ca0) input_focus_pane_vc_g

0x3472,	// (0x00003472) data_form_pane_vc_ParamLimits

0x3472,	// (0x00003472) data_form_pane_vc

0x347e,	// (0x0000347e) form_field_data_pane_vc_g1

0x558c,	// (0x0000558c) form_field_data_pane_vc_t1_ParamLimits

0x558c,	// (0x0000558c) form_field_data_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_vc

0x1118,	// (0x00001118) button_value_adjust_pane_cp3_vc

0x55a2,	// (0x000055a2) button_value_adjust_pane_cp5_vc

0x55aa,	// (0x000055aa) form_field_data_pane_vc_ParamLimits

0x55aa,	// (0x000055aa) form_field_data_pane_vc

0x1140,	// (0x00001140) form_field_data_pane_vc_cp2

0x55c1,	// (0x000055c1) form_field_data_wide_pane_vc_ParamLimits

0x55c1,	// (0x000055c1) form_field_data_wide_pane_vc

0x55d7,	// (0x000055d7) form_field_data_wide_pane_vc_cp2

0x55df,	// (0x000055df) form_field_popup_pane_vc_ParamLimits

0x55df,	// (0x000055df) form_field_popup_pane_vc

0x55f6,	// (0x000055f6) form_field_popup_wide_pane_vc_ParamLimits

0x55f6,	// (0x000055f6) form_field_popup_wide_pane_vc

0x560c,	// (0x0000560c) form_field_slider_pane_vc_ParamLimits

0x560c,	// (0x0000560c) form_field_slider_pane_vc

0x561f,	// (0x0000561f) form_field_slider_wide_pane_vc_ParamLimits

0x561f,	// (0x0000561f) form_field_slider_wide_pane_vc

0xc44b,	// (0x0000c44b) grid_touch_1_pane_ParamLimits

0xc44b,	// (0x0000c44b) grid_touch_1_pane

0xc45f,	// (0x0000c45f) grid_touch_2_pane_ParamLimits

0xc45f,	// (0x0000c45f) grid_touch_2_pane

0x56f3,	// (0x000056f3) touch_pane_g1_ParamLimits

0x56f3,	// (0x000056f3) touch_pane_g1

0x5656,	// (0x00005656) cell_app_pane_cp_wide_ParamLimits

0x5656,	// (0x00005656) cell_app_pane_cp_wide

0x5666,	// (0x00005666) grid_popup_fast_wide_pane_ParamLimits

0x5666,	// (0x00005666) grid_popup_fast_wide_pane

0x567a,	// (0x0000567a) scroll_pane_cp19_ParamLimits

0x567a,	// (0x0000567a) scroll_pane_cp19

0x024e,	// (0x0000024e) bg_popup_window_pane_cp20

0x568e,	// (0x0000568e) listscroll_popup_fast_wide_pane

0x1502,	// (0x00001502) grid_indicator_nsta_pane

0x5696,	// (0x00005696) clock_nsta_pane_g1

0x569f,	// (0x0000569f) clock_nsta_pane_t1

0xc489,	// (0x0000c489) cell_indicator_nsta_pane_ParamLimits

0xc489,	// (0x0000c489) cell_indicator_nsta_pane

0x56f3,	// (0x000056f3) cell_indicator_nsta_pane_g1

0xc4a6,	// (0x0000c4a6) cell_indicator_nsta_pane_g2

0x0001,

0xe24f,	// (0x0000e24f) cell_indicator_nsta_pane_g

0x5716,	// (0x00005716) clock_nsta_pane_cp

0x571e,	// (0x0000571e) indicator_nsta_pane_cp

0x5727,	// (0x00005727) nsta_clock_indic_pane_g1

0x05de,	// (0x000005de) grid_indicator_pane

0x1a41,	// (0x00001a41) scroll_pane_cp29

0x1ee4,	// (0x00001ee4) indicator_nsta_pane_cp2_ParamLimits

0x1ee4,	// (0x00001ee4) indicator_nsta_pane_cp2

0x0474,	// (0x00000474) main_apps_wheel_pane

0x3642,	// (0x00003642) form_midp_field_text_pane_ParamLimits

0x3787,	// (0x00003787) scroll_bar_cp050_ParamLimits

0x575f,	// (0x0000575f) cell_indicator_pane_ParamLimits

0x575f,	// (0x0000575f) cell_indicator_pane

0x5775,	// (0x00005775) cell_indicator_pane_g1

0xc4bb,	// (0x0000c4bb) grid_wheel_folder_pane_ParamLimits

0xc4bb,	// (0x0000c4bb) grid_wheel_folder_pane

0xc4c9,	// (0x0000c4c9) list_wheel_apps_pane_ParamLimits

0xc4c9,	// (0x0000c4c9) list_wheel_apps_pane

0xc4d5,	// (0x0000c4d5) main_apps_wheel_pane_g1_ParamLimits

0xc4d5,	// (0x0000c4d5) main_apps_wheel_pane_g1

0xc4e1,	// (0x0000c4e1) main_apps_wheel_pane_g2_ParamLimits

0xc4e1,	// (0x0000c4e1) main_apps_wheel_pane_g2

0x0001,

0xe254,	// (0x0000e254) main_apps_wheel_pane_g_ParamLimits

0xe254,	// (0x0000e254) main_apps_wheel_pane_g

0xc4ed,	// (0x0000c4ed) main_apps_wheel_pane_t1_ParamLimits

0xc4ed,	// (0x0000c4ed) main_apps_wheel_pane_t1

0xc4ff,	// (0x0000c4ff) list_wheel_apps_pane_g1

0xc507,	// (0x0000c507) list_wheel_apps_pane_g2

0xc50f,	// (0x0000c50f) list_wheel_apps_pane_g3

0xc517,	// (0x0000c517) list_wheel_apps_pane_g4

0xc51f,	// (0x0000c51f) list_wheel_apps_pane_g5

0x0004,

0xe259,	// (0x0000e259) list_wheel_apps_pane_g

0x0474,	// (0x00000474) navi_icon_text_pane

0xb956,	// (0x0000b956) aid_fill_nsta

0x5826,	// (0x00005826) navi_icon_text_pane_g1

0x5832,	// (0x00005832) navi_icon_text_pane_t1

0x2051,	// (0x00002051) list_set_graphic_pane_t1_ParamLimits

0x2051,	// (0x00002051) list_set_graphic_pane_t1

0x3e64,	// (0x00003e64) popup_midp_note_alarm_window_t6_ParamLimits

0x3e64,	// (0x00003e64) popup_midp_note_alarm_window_t6

0x3e76,	// (0x00003e76) popup_midp_note_alarm_window_t7_ParamLimits

0x3e76,	// (0x00003e76) popup_midp_note_alarm_window_t7

0x3e88,	// (0x00003e88) popup_midp_note_alarm_window_t8_ParamLimits

0x3e88,	// (0x00003e88) popup_midp_note_alarm_window_t8

0x3e9a,	// (0x00003e9a) popup_midp_note_alarm_window_t9_ParamLimits

0x3e9a,	// (0x00003e9a) popup_midp_note_alarm_window_t9

0x3eac,	// (0x00003eac) popup_midp_note_alarm_window_t10_ParamLimits

0x3eac,	// (0x00003eac) popup_midp_note_alarm_window_t10

0x3ebe,	// (0x00003ebe) popup_midp_note_alarm_window_t11_ParamLimits

0x3ebe,	// (0x00003ebe) popup_midp_note_alarm_window_t11

0x3ed0,	// (0x00003ed0) scroll_pane_cp17_ParamLimits

0x3ed0,	// (0x00003ed0) scroll_pane_cp17

0x3f60,	// (0x00003f60) volume_small_pane_cp_g1

0x5844,	// (0x00005844) volume_small_pane_cp_g2

0x584d,	// (0x0000584d) volume_small_pane_cp_g3

0x5856,	// (0x00005856) volume_small_pane_cp_g4

0x3f8d,	// (0x00003f8d) volume_small_pane_cp_g5

0x585f,	// (0x0000585f) volume_small_pane_cp_g6

0x5868,	// (0x00005868) volume_small_pane_cp_g7

0x5871,	// (0x00005871) volume_small_pane_cp_g8

0x587a,	// (0x0000587a) volume_small_pane_cp_g9

0x5883,	// (0x00005883) volume_small_pane_cp_g10

0x23a5,	// (0x000023a5) midp_ticker_pane_g1_ParamLimits

0x23b1,	// (0x000023b1) midp_ticker_pane_g2_ParamLimits

0x9d68,	// (0x00009d68) midp_ticker_pane_g_ParamLimits

0x23bd,	// (0x000023bd) midp_ticker_pane_t1_ParamLimits

0xb96c,	// (0x0000b96c) aid_fill_nsta_2

0x3773,	// (0x00003773) list_form2_midp_pane

0x4a17,	// (0x00004a17) midp_editing_number_pane_ParamLimits

0x4a23,	// (0x00004a23) midp_ticker_pane_ParamLimits

0x588c,	// (0x0000588c) form2_midp_field_pane

0x58b0,	// (0x000058b0) scroll_pane_cp51

0x58d0,	// (0x000058d0) form2_midp_button_pane_ParamLimits

0x58d0,	// (0x000058d0) form2_midp_button_pane

0x58e2,	// (0x000058e2) form2_midp_content_pane_ParamLimits

0x58e2,	// (0x000058e2) form2_midp_content_pane

0x58fc,	// (0x000058fc) form2_midp_field_choice_group_pane

0x5904,	// (0x00005904) form2_midp_field_pane_g1

0x590c,	// (0x0000590c) form2_midp_field_pane_g2

0x5914,	// (0x00005914) form2_midp_field_pane_g3

0x591c,	// (0x0000591c) form2_midp_field_pane_g4

0x0003,

0xa0d0,	// (0x0000a0d0) form2_midp_field_pane_g

0x5924,	// (0x00005924) form2_midp_gauge_slider_pane

0x592c,	// (0x0000592c) form2_midp_gauge_wait_pane

0x5934,	// (0x00005934) form2_midp_image_pane_ParamLimits

0x5934,	// (0x00005934) form2_midp_image_pane

0x594f,	// (0x0000594f) form2_midp_label_pane_ParamLimits

0x594f,	// (0x0000594f) form2_midp_label_pane

0xc554,	// (0x0000c554) form2_midp_label_pane_cp_ParamLimits

0xc554,	// (0x0000c554) form2_midp_label_pane_cp

0x5987,	// (0x00005987) form2_midp_string_pane_ParamLimits

0x5987,	// (0x00005987) form2_midp_string_pane

0xc573,	// (0x0000c573) form2_midp_text_pane_ParamLimits

0xc573,	// (0x0000c573) form2_midp_text_pane

0x59b2,	// (0x000059b2) form2_midp_time_pane

0x59c2,	// (0x000059c2) input_focus_pane_cp51_ParamLimits

0x59c2,	// (0x000059c2) input_focus_pane_cp51

0x59da,	// (0x000059da) form2_midp_label_pane_t1_ParamLimits

0x59da,	// (0x000059da) form2_midp_label_pane_t1

0x1356,	// (0x00001356) form2_mdip_text_pane_t1_ParamLimits

0x1356,	// (0x00001356) form2_mdip_text_pane_t1

0x5a36,	// (0x00005a36) form2_midp_time_pane_t1

0x5a51,	// (0x00005a51) form2_midp_gauge_slider_pane_t1

0xc58c,	// (0x0000c58c) form2_midp_gauge_slider_pane_t2

0xc59e,	// (0x0000c59e) form2_midp_gauge_slider_pane_t3

0x0002,

0xe269,	// (0x0000e269) form2_midp_gauge_slider_pane_t

0x5a87,	// (0x00005a87) form2_midp_slider_pane

0x5a93,	// (0x00005a93) form2_midp_gauge_wait_pane_t1

0x5aa1,	// (0x00005aa1) form2_midp_wait_pane_ParamLimits

0x5aa1,	// (0x00005aa1) form2_midp_wait_pane

0xbd9e,	// (0x0000bd9e) list_single_2graphic_pane_cp4_ParamLimits

0xbd9e,	// (0x0000bd9e) list_single_2graphic_pane_cp4

0xc5b0,	// (0x0000c5b0) list_single_midp_graphic_pane_cp_ParamLimits

0xc5b0,	// (0x0000c5b0) list_single_midp_graphic_pane_cp

0x024e,	// (0x0000024e) list_highlight_pane_cp20

0x5acc,	// (0x00005acc) list_single_2graphic_pane_g1_cp4

0x4b6b,	// (0x00004b6b) list_single_2graphic_pane_g2_cp4

0x5ad4,	// (0x00005ad4) list_single_2graphic_pane_t1_cp4

0x0474,	// (0x00000474) list_highlight_pane_cp21

0x5ae3,	// (0x00005ae3) list_single_midp_graphic_pane_g4_cp

0x5af2,	// (0x00005af2) list_single_midp_graphic_pane_t1_cp

0xc5ce,	// (0x0000c5ce) form2_mdip_string_pane_t1_ParamLimits

0xc5ce,	// (0x0000c5ce) form2_mdip_string_pane_t1

0x024e,	// (0x0000024e) bg_wml_button_pane_cp2

0x002a,	// (0x0000002a) form2_midp_image_pane_g1

0x0efd,	// (0x00000efd) list_double_large_graphic_pane_g5_ParamLimits

0x0efd,	// (0x00000efd) list_double_large_graphic_pane_g5

0xb198,	// (0x0000b198) midp_form_pane_ParamLimits

0x0474,	// (0x00000474) main_apps_wheel_pane_ParamLimits

0xb6f8,	// (0x0000b6f8) popup_preview_window_ParamLimits

0xb6f8,	// (0x0000b6f8) popup_preview_window

0x2c95,	// (0x00002c95) popup_touch_info_window_ParamLimits

0x2c95,	// (0x00002c95) popup_touch_info_window

0x2cb3,	// (0x00002cb3) popup_touch_menu_window_ParamLimits

0x2cb3,	// (0x00002cb3) popup_touch_menu_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp6

0x5b7f,	// (0x00005b7f) list_touch_menu_pane

0x5b87,	// (0x00005b87) list_single_touch_menu_pane_ParamLimits

0x5b87,	// (0x00005b87) list_single_touch_menu_pane

0x5b9e,	// (0x00005b9e) list_single_touch_menu_pane_t1

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7_ParamLimits

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7

0x5bac,	// (0x00005bac) heading_sub_pane

0x5bb4,	// (0x00005bb4) list_touch_info_pane_ParamLimits

0x5bb4,	// (0x00005bb4) list_touch_info_pane

0x5bc3,	// (0x00005bc3) list_single_touch_info_pane_ParamLimits

0x5bc3,	// (0x00005bc3) list_single_touch_info_pane

0x5bd4,	// (0x00005bd4) list_single_touch_info_pane_t1

0x5be2,	// (0x00005be2) list_single_touch_info_pane_t2

0x0001,

0xa0e7,	// (0x0000a0e7) list_single_touch_info_pane_t

0x22d6,	// (0x000022d6) bg_popup_heading_pane_cp

0x5bf0,	// (0x00005bf0) heading_sub_pane_t1

0x338c,	// (0x0000338c) bg_popup_preview_window_pane_cp_ParamLimits

0x338c,	// (0x0000338c) bg_popup_preview_window_pane_cp

0x5bac,	// (0x00005bac) heading_preview_pane

0x5bb4,	// (0x00005bb4) list_preview_pane_ParamLimits

0x5bb4,	// (0x00005bb4) list_preview_pane

0x5bfe,	// (0x00005bfe) popup_preview_window_g1

0x5bc3,	// (0x00005bc3) list_single_preview_pane_ParamLimits

0x5bc3,	// (0x00005bc3) list_single_preview_pane

0x5c06,	// (0x00005c06) list_single_preview_pane_g1

0x5c0e,	// (0x00005c0e) list_single_preview_pane_t1

0x5bd4,	// (0x00005bd4) list_single_preview_pane_t2

0x0001,

0xa0ec,	// (0x0000a0ec) list_single_preview_pane_t

0x5c1c,	// (0x00005c1c) bg_popup_heading_pane_cp2_ParamLimits

0x5c1c,	// (0x00005c1c) bg_popup_heading_pane_cp2

0x5c32,	// (0x00005c32) heading_preview_pane_g1

0x5c3a,	// (0x00005c3a) heading_preview_pane_t1_ParamLimits

0x5c3a,	// (0x00005c3a) heading_preview_pane_t1

0x0601,	// (0x00000601) soft_indicator_pane_t1_ParamLimits

0x0c3e,	// (0x00000c3e) scroll_pane_ParamLimits

0x193d,	// (0x0000193d) scroll_sc2_left_pane

0x1946,	// (0x00001946) scroll_sc2_right_pane

0x1965,	// (0x00001965) scroll_bg_pane_g1_ParamLimits

0x197a,	// (0x0000197a) scroll_bg_pane_g2_ParamLimits

0x1992,	// (0x00001992) scroll_bg_pane_g3_ParamLimits

0x9cf7,	// (0x00009cf7) scroll_bg_pane_g_ParamLimits

0x1965,	// (0x00001965) scroll_handle_pane_g1_ParamLimits

0x19b4,	// (0x000019b4) scroll_handle_pane_g2_ParamLimits

0x1992,	// (0x00001992) scroll_handle_pane_g3_ParamLimits

0x9cfe,	// (0x00009cfe) scroll_handle_pane_g_ParamLimits

0x2862,	// (0x00002862) popup_choice_list_window_ParamLimits

0x2862,	// (0x00002862) popup_choice_list_window

0x3131,	// (0x00003131) choice_list_pane

0x31ce,	// (0x000031ce) cell_toolbar_pane_t1

0x31f6,	// (0x000031f6) toolbar_button_pane_ParamLimits

0x44af,	// (0x000044af) ai_gene_pane_1_t2_ParamLimits

0x44af,	// (0x000044af) ai_gene_pane_1_t2

0x0001,

0x9f0f,	// (0x00009f0f) ai_gene_pane_1_t_ParamLimits

0x9f0f,	// (0x00009f0f) ai_gene_pane_1_t

0x5c57,	// (0x00005c57) scroll_sc2_left_pane_g1

0x5c57,	// (0x00005c57) scroll_sc2_right_pane_g1

0x2834,	// (0x00002834) bg_popup_sub_pane_cp10

0x5c61,	// (0x00005c61) list_choice_list_pane

0x5c78,	// (0x00005c78) list_single_choice_list_pane_ParamLimits

0x5c78,	// (0x00005c78) list_single_choice_list_pane

0x5c8c,	// (0x00005c8c) list_single_choice_list_pane_g1

0x14d3,	// (0x000014d3) list_single_choice_list_pane_t1_ParamLimits

0x14d3,	// (0x000014d3) list_single_choice_list_pane_t1

0x5c94,	// (0x00005c94) choice_list_pane_g1

0x5c9c,	// (0x00005c9c) choice_list_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp11

0x16e7,	// (0x000016e7) title_pane_stacon_g2_ParamLimits

0x16e7,	// (0x000016e7) title_pane_stacon_g2

0x0002,

0x9cdd,	// (0x00009cdd) title_pane_stacon_g_ParamLimits

0x9cdd,	// (0x00009cdd) title_pane_stacon_g

0x22d6,	// (0x000022d6) cursor_press_pane

0xb45f,	// (0x0000b45f) popup_fep_hwr_window_ParamLimits

0xb45f,	// (0x0000b45f) popup_fep_hwr_window

0x295a,	// (0x0000295a) popup_fep_vkb_window_ParamLimits

0x295a,	// (0x0000295a) popup_fep_vkb_window

0x5caa,	// (0x00005caa) cursor_press_pane_g1

0x0002,

0xe27d,	// (0x0000e27d) fep_vkb_side_pane_g_ParamLimits

0x5ce7,	// (0x00005ce7) fep_hwr_candidate_pane_ParamLimits

0x5ce7,	// (0x00005ce7) fep_hwr_candidate_pane

0x5d0f,	// (0x00005d0f) fep_hwr_side_pane_ParamLimits

0x5d0f,	// (0x00005d0f) fep_hwr_side_pane

0x5d2f,	// (0x00005d2f) fep_hwr_top_pane_ParamLimits

0x5d2f,	// (0x00005d2f) fep_hwr_top_pane

0x5d47,	// (0x00005d47) fep_hwr_write_pane_ParamLimits

0x5d47,	// (0x00005d47) fep_hwr_write_pane

0xe27d,	// (0x0000e27d) fep_vkb_side_pane_g

0x5d81,	// (0x00005d81) fep_hwr_top_pane_g1

0x5d93,	// (0x00005d93) fep_hwr_top_pane_g2

0x5da5,	// (0x00005da5) fep_hwr_top_pane_g3

0x0002,

0xa0f1,	// (0x0000a0f1) fep_hwr_top_pane_g

0x5dba,	// (0x00005dba) fep_hwr_top_text_pane

0x1b09,	// (0x00001b09) fep_hwr_top_text_pane_g1

0x5e92,	// (0x00005e92) fep_hwr_top_text_pane_t1

0x5eda,	// (0x00005eda) fep_hwr_candidate_pane_g1

0x6110,	// (0x00006110) fep_vkb_keypad_pane_g3_ParamLimits

0x6110,	// (0x00006110) fep_vkb_keypad_pane_g3

0x6132,	// (0x00006132) fep_vkb_keypad_pane_g4_ParamLimits

0x6132,	// (0x00006132) fep_vkb_keypad_pane_g4

0x61a1,	// (0x000061a1) fep_vkb_bottom_pane_g2_ParamLimits

0x61a1,	// (0x000061a1) fep_vkb_bottom_pane_g2

0x0001,

0xa11c,	// (0x0000a11c) fep_vkb_bottom_pane_g_ParamLimits

0xa11c,	// (0x0000a11c) fep_vkb_bottom_pane_g

0x5c57,	// (0x00005c57) cell_vkb_side_pane_g2

0x0001,

0xa126,	// (0x0000a126) cell_vkb_side_pane_g

0x622c,	// (0x0000622c) cell_vkb_side_pane_t1

0x623a,	// (0x0000623a) cell_vkb_side_pane_t1_copy1

0x5c57,	// (0x00005c57) bg_fep_vkb_candidate_pane_g2

0x635e,	// (0x0000635e) cell_vkb_candidate_pane_ParamLimits

0x5f0e,	// (0x00005f0e) aid_size_cell_vkb_ParamLimits

0x5f0e,	// (0x00005f0e) aid_size_cell_vkb

0x635e,	// (0x0000635e) cell_vkb_candidate_pane

0x6390,	// (0x00006390) bg_popup_fep_shadow_pane_g1

0x5f84,	// (0x00005f84) fep_vkb_bottom_pane_ParamLimits

0x5f84,	// (0x00005f84) fep_vkb_bottom_pane

0x5fc1,	// (0x00005fc1) fep_vkb_candidate_pane_ParamLimits

0x5fc1,	// (0x00005fc1) fep_vkb_candidate_pane

0x5fdd,	// (0x00005fdd) fep_vkb_keypad_pane_ParamLimits

0x5fdd,	// (0x00005fdd) fep_vkb_keypad_pane

0x6011,	// (0x00006011) fep_vkb_side_pane_ParamLimits

0x6011,	// (0x00006011) fep_vkb_side_pane

0x603d,	// (0x0000603d) fep_vkb_top_pane_ParamLimits

0x603d,	// (0x0000603d) fep_vkb_top_pane

0x6069,	// (0x00006069) fep_vkb_top_pane_g1_ParamLimits

0x6069,	// (0x00006069) fep_vkb_top_pane_g1

0x6078,	// (0x00006078) fep_vkb_top_pane_g2_ParamLimits

0x6078,	// (0x00006078) fep_vkb_top_pane_g2

0x6087,	// (0x00006087) fep_vkb_top_pane_g3_ParamLimits

0x6087,	// (0x00006087) fep_vkb_top_pane_g3

0x0003,

0xa10c,	// (0x0000a10c) fep_vkb_top_pane_g_ParamLimits

0xa10c,	// (0x0000a10c) fep_vkb_top_pane_g

0x60a5,	// (0x000060a5) fep_vkb_top_text_pane_ParamLimits

0x60a5,	// (0x000060a5) fep_vkb_top_text_pane

0xc695,	// (0x0000c695) fep_vkb_side_pane_g1_ParamLimits

0xc695,	// (0x0000c695) fep_vkb_side_pane_g1

0x60ff,	// (0x000060ff) grid_vkb_side_pane_ParamLimits

0x60ff,	// (0x000060ff) grid_vkb_side_pane

0x6398,	// (0x00006398) bg_popup_fep_shadow_pane_g2

0x63a1,	// (0x000063a1) bg_popup_fep_shadow_pane_g3

0x63a9,	// (0x000063a9) bg_popup_fep_shadow_pane_g4

0x63b2,	// (0x000063b2) bg_popup_fep_shadow_pane_g5

0x63ba,	// (0x000063ba) bg_popup_fep_shadow_pane_g6

0x63c2,	// (0x000063c2) bg_popup_fep_shadow_pane_g7

0x132e,	// (0x0000132e) bg_popup_fep_shadow_pane_g8

0x6150,	// (0x00006150) grid_vkb_keypad_number_pane_ParamLimits

0x6150,	// (0x00006150) grid_vkb_keypad_number_pane

0x6160,	// (0x00006160) grid_vkb_keypad_pane_ParamLimits

0x6160,	// (0x00006160) grid_vkb_keypad_pane

0x6186,	// (0x00006186) fep_vkb_bottom_pane_g1_ParamLimits

0x6186,	// (0x00006186) fep_vkb_bottom_pane_g1

0x61af,	// (0x000061af) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x61af,	// (0x000061af) grid_vkb_keypad_bottom_left_pane

0x61c4,	// (0x000061c4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x61c4,	// (0x000061c4) grid_vkb_keypad_bottom_right_pane

0x61d9,	// (0x000061d9) fep_vkb_top_text_pane_g1

0xc6dc,	// (0x0000c6dc) fep_vkb_top_text_pane_t1

0xc6ee,	// (0x0000c6ee) cell_vkb_side_pane_ParamLimits

0xc6ee,	// (0x0000c6ee) cell_vkb_side_pane

0x5c57,	// (0x00005c57) cell_vkb_side_pane_g1

0x6248,	// (0x00006248) cell_vkb_keypad_pane_ParamLimits

0x6248,	// (0x00006248) cell_vkb_keypad_pane

0x62b5,	// (0x000062b5) cell_vkb_keypad_pane_g1

0x0008,

0xa139,	// (0x0000a139) bg_popup_fep_shadow_pane_g

0x5c57,	// (0x00005c57) cell_hwr_side_pane_g1

0x5c57,	// (0x00005c57) cell_hwr_side_pane_g2

0x62bf,	// (0x000062bf) cell_vkb_keypad_pane_t1

0xc704,	// (0x0000c704) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc704,	// (0x0000c704) cell_vkb_keypad_bottom_left_pane

0xc719,	// (0x0000c719) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc719,	// (0x0000c719) cell_vkb_keypad_bottom_right_pane

0x5c57,	// (0x00005c57) cell_vkb_keypad_bottom_left_pane_g1

0x5c57,	// (0x00005c57) cell_vkb_keypad_bottom_right_pane_g1

0x6323,	// (0x00006323) cell_vkb_keypad_number_pane_ParamLimits

0x6323,	// (0x00006323) cell_vkb_keypad_number_pane

0x6342,	// (0x00006342) cell_vkb_keypad_number_pane_g1

0x634c,	// (0x0000634c) cell_vkb_keypad_number_pane_g2

0x6355,	// (0x00006355) cell_vkb_keypad_number_pane_g3

0x0002,

0xa12b,	// (0x0000a12b) cell_vkb_keypad_number_pane_g

0x62bf,	// (0x000062bf) cell_vkb_keypad_number_pane_t1

0x6377,	// (0x00006377) fep_vkb_candidate_pane_g1

0x0001,

0xa126,	// (0x0000a126) cell_hwr_side_pane_g

0x63d2,	// (0x000063d2) cell_hwr_side_pane_t1

0x63e0,	// (0x000063e0) cell_hwr_side_pane_t1_copy1

0x6097,	// (0x00006097) cell_hwr_candidate_pane_g1

0x6430,	// (0x00006430) cell_hwr_candidate_pane_t1

0x5c57,	// (0x00005c57) cell_vkb_candidate_pane_g2

0x6483,	// (0x00006483) cell_vkb_candidate_pane_t1

0x5cb2,	// (0x00005cb2) bg_popup_fep_shadow_pane_ParamLimits

0x5cb2,	// (0x00005cb2) bg_popup_fep_shadow_pane

0x5d61,	// (0x00005d61) bg_fep_hwr_top_pane_g4

0x5dcf,	// (0x00005dcf) bg_hwr_side_pane_g1_ParamLimits

0x5dcf,	// (0x00005dcf) bg_hwr_side_pane_g1

0xc650,	// (0x0000c650) cell_hwr_side_pane_ParamLimits

0xc650,	// (0x0000c650) cell_hwr_side_pane

0x5e3d,	// (0x00005e3d) fep_hwr_write_pane_g1_ParamLimits

0x5e3d,	// (0x00005e3d) fep_hwr_write_pane_g1

0x5e4a,	// (0x00005e4a) fep_hwr_write_pane_g2_ParamLimits

0x5e4a,	// (0x00005e4a) fep_hwr_write_pane_g2

0x5e57,	// (0x00005e57) fep_hwr_write_pane_g3_ParamLimits

0x5e57,	// (0x00005e57) fep_hwr_write_pane_g3

0xc670,	// (0x0000c670) fep_hwr_write_pane_g4_ParamLimits

0xc670,	// (0x0000c670) fep_hwr_write_pane_g4

0x0005,

0xe270,	// (0x0000e270) fep_hwr_write_pane_g_ParamLimits

0xe270,	// (0x0000e270) fep_hwr_write_pane_g

0x5d61,	// (0x00005d61) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5d61,	// (0x00005d61) bg_fep_hwr_candidate_pane_g2

0x5ea0,	// (0x00005ea0) cell_hwr_candidate_pane_ParamLimits

0x5ea0,	// (0x00005ea0) cell_hwr_candidate_pane

0x5eda,	// (0x00005eda) fep_hwr_candidate_pane_g1_ParamLimits

0x5f3c,	// (0x00005f3c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5f3c,	// (0x00005f3c) bg_popup_fep_shadow_pane_cp2

0x6097,	// (0x00006097) fep_vkb_top_pane_g4_ParamLimits

0x6097,	// (0x00006097) fep_vkb_top_pane_g4

0x60dd,	// (0x000060dd) fep_vkb_side_pane_g2_ParamLimits

0x60dd,	// (0x000060dd) fep_vkb_side_pane_g2

0xacc6,	// (0x0000acc6) list_setting_pane_t4_ParamLimits

0xacc6,	// (0x0000acc6) list_setting_pane_t4

0xad48,	// (0x0000ad48) list_setting_number_pane_t5_ParamLimits

0xad48,	// (0x0000ad48) list_setting_number_pane_t5

0xb04e,	// (0x0000b04e) list_double_heading_pane_cp2_ParamLimits

0xb04e,	// (0x0000b04e) list_double_heading_pane_cp2

0x214b,	// (0x0000214b) list_double_heading_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_double_heading_pane_g1_cp2

0x6491,	// (0x00006491) list_double_heading_pane_g2_cp2_ParamLimits

0x6491,	// (0x00006491) list_double_heading_pane_g2_cp2

0x64a5,	// (0x000064a5) list_double_heading_pane_t1_cp2_ParamLimits

0x64a5,	// (0x000064a5) list_double_heading_pane_t1_cp2

0x64bb,	// (0x000064bb) list_double_heading_pane_t2_cp2_ParamLimits

0x64bb,	// (0x000064bb) list_double_heading_pane_t2_cp2

0x000a,	// (0x0000000a) aid_value_unit2

0x02b4,	// (0x000002b4) popup_preview_fixed_window

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02

0x64cd,	// (0x000064cd) list_preview_fixed_pane

0x6513,	// (0x00006513) list_empty_pane_fp_ParamLimits

0x6513,	// (0x00006513) list_empty_pane_fp

0x6513,	// (0x00006513) list_single_cale_day_pane_fp_ParamLimits

0x6513,	// (0x00006513) list_single_cale_day_pane_fp

0x6513,	// (0x00006513) list_single_graphic_heading_pane_fp_ParamLimits

0x6513,	// (0x00006513) list_single_graphic_heading_pane_fp

0x6513,	// (0x00006513) list_single_graphic_pane_fp_ParamLimits

0x6513,	// (0x00006513) list_single_graphic_pane_fp

0x6513,	// (0x00006513) list_single_heading_pane_fp_ParamLimits

0x6513,	// (0x00006513) list_single_heading_pane_fp

0x6513,	// (0x00006513) list_single_pane_fp_ParamLimits

0x6513,	// (0x00006513) list_single_pane_fp

0x6527,	// (0x00006527) list_single_pane_fp_g1_ParamLimits

0x6527,	// (0x00006527) list_single_pane_fp_g1

0x0e80,	// (0x00000e80) list_single_pane_fp_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_pane_fp_g2

0x6533,	// (0x00006533) list_single_pane_fp_g3_ParamLimits

0x6533,	// (0x00006533) list_single_pane_fp_g3

0x6547,	// (0x00006547) list_single_pane_fp_g4_ParamLimits

0x6547,	// (0x00006547) list_single_pane_fp_g4

0x0003,

0xa15a,	// (0x0000a15a) list_single_pane_fp_g_ParamLimits

0xa15a,	// (0x0000a15a) list_single_pane_fp_g

0x6553,	// (0x00006553) list_single_pane_fp_t1_ParamLimits

0x6553,	// (0x00006553) list_single_pane_fp_t1

0x656a,	// (0x0000656a) list_single_graphic_pane_fp_g1_ParamLimits

0x656a,	// (0x0000656a) list_single_graphic_pane_fp_g1

0x6527,	// (0x00006527) list_single_graphic_pane_fp_g2_ParamLimits

0x6527,	// (0x00006527) list_single_graphic_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_pane_fp_g3

0x6533,	// (0x00006533) list_single_graphic_pane_fp_g4_ParamLimits

0x6533,	// (0x00006533) list_single_graphic_pane_fp_g4

0x6547,	// (0x00006547) list_single_graphic_pane_fp_g5_ParamLimits

0x6547,	// (0x00006547) list_single_graphic_pane_fp_g5

0x0004,

0xa163,	// (0x0000a163) list_single_graphic_pane_fp_g_ParamLimits

0xa163,	// (0x0000a163) list_single_graphic_pane_fp_g

0x6576,	// (0x00006576) list_single_graphic_pane_fp_t1_ParamLimits

0x6576,	// (0x00006576) list_single_graphic_pane_fp_t1

0x656a,	// (0x0000656a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x656a,	// (0x0000656a) list_single_graphic_heading_pane_fp_g1

0x6527,	// (0x00006527) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6527,	// (0x00006527) list_single_graphic_heading_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_fp_g3

0x6533,	// (0x00006533) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6533,	// (0x00006533) list_single_graphic_heading_pane_fp_g4

0x6547,	// (0x00006547) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6547,	// (0x00006547) list_single_graphic_heading_pane_fp_g5

0x0004,

0xa163,	// (0x0000a163) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa163,	// (0x0000a163) list_single_graphic_heading_pane_fp_g

0x658c,	// (0x0000658c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x658c,	// (0x0000658c) list_single_graphic_heading_pane_fp_t1

0x65a2,	// (0x000065a2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x65a2,	// (0x000065a2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa16e,	// (0x0000a16e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa16e,	// (0x0000a16e) list_single_graphic_heading_pane_fp_t

0x65b4,	// (0x000065b4) list_single_cale_day_pane_fp_g1_ParamLimits

0x65b4,	// (0x000065b4) list_single_cale_day_pane_fp_g1

0x65ec,	// (0x000065ec) list_single_cale_day_pane_fp_g2_ParamLimits

0x65ec,	// (0x000065ec) list_single_cale_day_pane_fp_g2

0x65f8,	// (0x000065f8) list_single_cale_day_pane_fp_g3_ParamLimits

0x65f8,	// (0x000065f8) list_single_cale_day_pane_fp_g3

0x6620,	// (0x00006620) list_single_cale_day_pane_fp_g4_ParamLimits

0x6620,	// (0x00006620) list_single_cale_day_pane_fp_g4

0x6644,	// (0x00006644) list_single_cale_day_pane_fp_g5_ParamLimits

0x6644,	// (0x00006644) list_single_cale_day_pane_fp_g5

0x0004,

0xa173,	// (0x0000a173) list_single_cale_day_pane_fp_g_ParamLimits

0xa173,	// (0x0000a173) list_single_cale_day_pane_fp_g

0x6668,	// (0x00006668) list_single_cale_day_pane_fp_t1_ParamLimits

0x6668,	// (0x00006668) list_single_cale_day_pane_fp_t1

0x668e,	// (0x0000668e) list_single_cale_day_pane_fp_t2_ParamLimits

0x668e,	// (0x0000668e) list_single_cale_day_pane_fp_t2

0x66a7,	// (0x000066a7) list_single_cale_day_pane_fp_t3_ParamLimits

0x66a7,	// (0x000066a7) list_single_cale_day_pane_fp_t3

0x0002,

0xa17e,	// (0x0000a17e) list_single_cale_day_pane_fp_t_ParamLimits

0xa17e,	// (0x0000a17e) list_single_cale_day_pane_fp_t

0x6527,	// (0x00006527) list_empty_pane_fp_g1_ParamLimits

0x6527,	// (0x00006527) list_empty_pane_fp_g1

0x66c0,	// (0x000066c0) list_empty_pane_fp_t1

0x66ce,	// (0x000066ce) list_empty_pane_fp_t2

0x0001,

0xa185,	// (0x0000a185) list_empty_pane_fp_t

0x6527,	// (0x00006527) list_single_heading_pane_fp_g1_ParamLimits

0x6527,	// (0x00006527) list_single_heading_pane_fp_g1

0x0e80,	// (0x00000e80) list_single_heading_pane_fp_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_fp_g2

0x6533,	// (0x00006533) list_single_heading_pane_fp_g3_ParamLimits

0x6533,	// (0x00006533) list_single_heading_pane_fp_g3

0x0002,

0xa18a,	// (0x0000a18a) list_single_heading_pane_fp_g_ParamLimits

0xa18a,	// (0x0000a18a) list_single_heading_pane_fp_g

0x66dc,	// (0x000066dc) list_single_heading_pane_fp_t1_ParamLimits

0x66dc,	// (0x000066dc) list_single_heading_pane_fp_t1

0x66ee,	// (0x000066ee) list_single_heading_pane_fp_t2_ParamLimits

0x66ee,	// (0x000066ee) list_single_heading_pane_fp_t2

0x0001,

0xa191,	// (0x0000a191) list_single_heading_pane_fp_t_ParamLimits

0xa191,	// (0x0000a191) list_single_heading_pane_fp_t

0x1541,	// (0x00001541) aid_size_cell_fast

0x070c,	// (0x0000070c) soft_indicator_pane_cp1_t1

0x157e,	// (0x0000157e) cell_app_pane_cp2_ParamLimits

0x157e,	// (0x0000157e) cell_app_pane_cp2

0x5cd4,	// (0x00005cd4) fep_hwr_candidate_drop_down_list_pane

0x5ef4,	// (0x00005ef4) fep_hwr_candidate_pane_g3_ParamLimits

0x5ef4,	// (0x00005ef4) fep_hwr_candidate_pane_g3

0x5f01,	// (0x00005f01) fep_hwr_candidate_pane_g4_ParamLimits

0x5f01,	// (0x00005f01) fep_hwr_candidate_pane_g4

0x0002,

0xa105,	// (0x0000a105) fep_hwr_candidate_pane_g_ParamLimits

0xa105,	// (0x0000a105) fep_hwr_candidate_pane_g

0x5fb0,	// (0x00005fb0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5fb0,	// (0x00005fb0) fep_vkb_candidate_drop_down_list_pane

0x637f,	// (0x0000637f) fep_vkb_candidate_pane_g3

0x6387,	// (0x00006387) fep_vkb_candidate_pane_g4

0x0002,

0xa132,	// (0x0000a132) fep_vkb_candidate_pane_g

0x6097,	// (0x00006097) cell_hwr_candidate_pane_g1_ParamLimits

0x63ee,	// (0x000063ee) cell_hwr_candidate_pane_g3_ParamLimits

0x63ee,	// (0x000063ee) cell_hwr_candidate_pane_g3

0x640f,	// (0x0000640f) cell_hwr_candidate_pane_g4_ParamLimits

0x640f,	// (0x0000640f) cell_hwr_candidate_pane_g4

0x0002,

0xa14c,	// (0x0000a14c) cell_hwr_candidate_pane_g_ParamLimits

0xa14c,	// (0x0000a14c) cell_hwr_candidate_pane_g

0x644d,	// (0x0000644d) cell_vkb_candidate_pane_g3_ParamLimits

0x644d,	// (0x0000644d) cell_vkb_candidate_pane_g3

0x6468,	// (0x00006468) cell_vkb_candidate_pane_g4_ParamLimits

0x6468,	// (0x00006468) cell_vkb_candidate_pane_g4

0x6704,	// (0x00006704) cell_app_pane_cp2_g1_ParamLimits

0x6704,	// (0x00006704) cell_app_pane_cp2_g1

0x6722,	// (0x00006722) cell_app_pane_cp2_g2_ParamLimits

0x6722,	// (0x00006722) cell_app_pane_cp2_g2

0x0001,

0xa196,	// (0x0000a196) cell_app_pane_cp2_g_ParamLimits

0xa196,	// (0x0000a196) cell_app_pane_cp2_g

0x672e,	// (0x0000672e) cell_app_pane_cp2_t1_ParamLimits

0x672e,	// (0x0000672e) cell_app_pane_cp2_t1

0x11e8,	// (0x000011e8) grid_highlight_pane_cp1_ParamLimits

0x11e8,	// (0x000011e8) grid_highlight_pane_cp1

0x6740,	// (0x00006740) cell_hwr_candidate_pane_cp1_ParamLimits

0x6740,	// (0x00006740) cell_hwr_candidate_pane_cp1

0x6097,	// (0x00006097) fep_hwr_candidate_drop_down_list_pane_g1

0x675e,	// (0x0000675e) fep_hwr_candidate_drop_down_list_pane_g2

0x676b,	// (0x0000676b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xa19b,	// (0x0000a19b) fep_hwr_candidate_drop_down_list_pane_g

0x6778,	// (0x00006778) fep_hwr_candidate_drop_down_list_scroll_pane

0x6781,	// (0x00006781) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6781,	// (0x00006781) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x678e,	// (0x0000678e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x678e,	// (0x0000678e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x679b,	// (0x0000679b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x679b,	// (0x0000679b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x644d,	// (0x0000644d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x644d,	// (0x0000644d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6468,	// (0x00006468) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6468,	// (0x00006468) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x67a8,	// (0x000067a8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x67a8,	// (0x000067a8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x67c3,	// (0x000067c3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x67c3,	// (0x000067c3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x67de,	// (0x000067de) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x67de,	// (0x000067de) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa1a2,	// (0x0000a1a2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa1a2,	// (0x0000a1a2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc734,	// (0x0000c734) cell_vkb_candidate_pane_cp1_ParamLimits

0xc734,	// (0x0000c734) cell_vkb_candidate_pane_cp1

0x6097,	// (0x00006097) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6097,	// (0x00006097) fep_vkb_candidate_drop_down_list_pane_g1

0x675e,	// (0x0000675e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x675e,	// (0x0000675e) fep_vkb_candidate_drop_down_list_pane_g2

0x676b,	// (0x0000676b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x676b,	// (0x0000676b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa19b,	// (0x0000a19b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa19b,	// (0x0000a19b) fep_vkb_candidate_drop_down_list_pane_g

0x681c,	// (0x0000681c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x681c,	// (0x0000681c) fep_vkb_candidate_drop_down_list_scroll_pane

0x6829,	// (0x00006829) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6829,	// (0x00006829) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6836,	// (0x00006836) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6836,	// (0x00006836) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6842,	// (0x00006842) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6842,	// (0x00006842) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x63ee,	// (0x000063ee) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x63ee,	// (0x000063ee) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x640f,	// (0x0000640f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x640f,	// (0x0000640f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x684e,	// (0x0000684e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x684e,	// (0x0000684e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x686f,	// (0x0000686f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x686f,	// (0x0000686f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6890,	// (0x00006890) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6890,	// (0x00006890) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa1b3,	// (0x0000a1b3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa1b3,	// (0x0000a1b3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa64b,	// (0x0000a64b) title_pane_g1_ParamLimits

0xa662,	// (0x0000a662) title_pane_g2_ParamLimits

0xe087,	// (0x0000e087) title_pane_g_ParamLimits

0x1af9,	// (0x00001af9) aid_call2_pane

0x1b01,	// (0x00001b01) aid_call_pane

0x1b09,	// (0x00001b09) popup_clock_analogue_window_g1

0x1b09,	// (0x00001b09) popup_clock_analogue_window_g2

0x1b11,	// (0x00001b11) popup_clock_analogue_window_g3

0x1b1a,	// (0x00001b1a) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0x9d0c,	// (0x00009d0c) popup_clock_analogue_window_g

0x1b22,	// (0x00001b22) popup_clock_analogue_window_t1

0x1b90,	// (0x00001b90) clock_digital_number_pane_ParamLimits

0x1b90,	// (0x00001b90) clock_digital_number_pane

0x1b9c,	// (0x00001b9c) clock_digital_number_pane_cp02_ParamLimits

0x1b9c,	// (0x00001b9c) clock_digital_number_pane_cp02

0x1ba8,	// (0x00001ba8) clock_digital_number_pane_cp03_ParamLimits

0x1ba8,	// (0x00001ba8) clock_digital_number_pane_cp03

0x1bb4,	// (0x00001bb4) clock_digital_number_pane_cp04_ParamLimits

0x1bb4,	// (0x00001bb4) clock_digital_number_pane_cp04

0x1bc0,	// (0x00001bc0) clock_digital_separator_pane_ParamLimits

0x1bc0,	// (0x00001bc0) clock_digital_separator_pane

0x1bcc,	// (0x00001bcc) popup_clock_digital_window_t1_ParamLimits

0x1bcc,	// (0x00001bcc) popup_clock_digital_window_t1

0x002a,	// (0x0000002a) clock_digital_number_pane_g1

0x002a,	// (0x0000002a) clock_digital_number_pane_g2

0x0001,

0x9d17,	// (0x00009d17) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0x9d17,	// (0x00009d17) clock_digital_separator_pane_g

0xb956,	// (0x0000b956) aid_fill_nsta_ParamLimits

0xba6d,	// (0x0000ba6d) indicator_nsta_pane_ParamLimits

0x2f7f,	// (0x00002f7f) popup_clock_analogue_window

0x2f7f,	// (0x00002f7f) popup_clock_digital_window

0x1502,	// (0x00001502) grid_indicator_nsta_pane_ParamLimits

0x56ad,	// (0x000056ad) clock_nsta_pane_t2

0x0001,

0xa092,	// (0x0000a092) clock_nsta_pane_t

0x18e2,	// (0x000018e2) aid_size_max_handle

0xafb2,	// (0x0000afb2) aid_size_min_handle

0x22d6,	// (0x000022d6) editor_scroll_pane

0x68ab,	// (0x000068ab) ex_editor_pane

0x14af,	// (0x000014af) scroll_pane_cp13

0x0c6b,	// (0x00000c6b) scroll_pane_cp14

0x1b52,	// (0x00001b52) scroll_pane_cp36

0xb05a,	// (0x0000b05a) list_single_graphic_hl_pane_cp2_ParamLimits

0xb05a,	// (0x0000b05a) list_single_graphic_hl_pane_cp2

0xc2d8,	// (0x0000c2d8) list_single_graphic_hl_pane_ParamLimits

0xc2d8,	// (0x0000c2d8) list_single_graphic_hl_pane

0x68b3,	// (0x000068b3) aid_size_min_hl_cp1

0x68bc,	// (0x000068bc) list_highlight_pane_cp34_ParamLimits

0x68bc,	// (0x000068bc) list_highlight_pane_cp34

0x68cd,	// (0x000068cd) list_single_graphic_hl_pane_g1_ParamLimits

0x68cd,	// (0x000068cd) list_single_graphic_hl_pane_g1

0xc754,	// (0x0000c754) list_single_graphic_hl_pane_g2_ParamLimits

0xc754,	// (0x0000c754) list_single_graphic_hl_pane_g2

0xc754,	// (0x0000c754) list_single_graphic_hl_pane_g3_ParamLimits

0xc754,	// (0x0000c754) list_single_graphic_hl_pane_g3

0x0c7f,	// (0x00000c7f) list_single_graphic_hl_pane_g4_ParamLimits

0x0c7f,	// (0x00000c7f) list_single_graphic_hl_pane_g4

0x120e,	// (0x0000120e) list_single_graphic_hl_pane_g5_ParamLimits

0x120e,	// (0x0000120e) list_single_graphic_hl_pane_g5

0x0004,

0xe289,	// (0x0000e289) list_single_graphic_hl_pane_g_ParamLimits

0xe289,	// (0x0000e289) list_single_graphic_hl_pane_g

0xc760,	// (0x0000c760) list_single_graphic_hl_pane_t1_ParamLimits

0xc760,	// (0x0000c760) list_single_graphic_hl_pane_t1

0x68fc,	// (0x000068fc) aid_size_min_hl_cp2

0x6905,	// (0x00006905) list_highlight_pane_cp34_cp2_ParamLimits

0x6905,	// (0x00006905) list_highlight_pane_cp34_cp2

0x68cd,	// (0x000068cd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x68cd,	// (0x000068cd) list_single_graphic_hl_pane_g1_cp2

0x6912,	// (0x00006912) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6912,	// (0x00006912) list_single_graphic_hl_pane_g2_cp2

0x691e,	// (0x0000691e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x691e,	// (0x0000691e) list_single_graphic_hl_pane_g3_cp2

0x214b,	// (0x0000214b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_graphic_hl_pane_g4_cp2

0x6491,	// (0x00006491) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6491,	// (0x00006491) list_single_graphic_hl_pane_g5_cp2

0xb260,	// (0x0000b260) control_pane_g4_ParamLimits

0xb260,	// (0x0000b260) control_pane_g4

0x2834,	// (0x00002834) bg_popup_sub_pane_cp10_ParamLimits

0x5c61,	// (0x00005c61) list_choice_list_pane_ParamLimits

0x5c70,	// (0x00005c70) scroll_pane_cp23

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02_ParamLimits

0x64cd,	// (0x000064cd) list_preview_fixed_pane_ParamLimits

0x64e3,	// (0x000064e3) list_preview_fixed_pane_cp_ParamLimits

0x64e3,	// (0x000064e3) list_preview_fixed_pane_cp

0x64ef,	// (0x000064ef) popup_preview_fixed_window_g1_ParamLimits

0x64ef,	// (0x000064ef) popup_preview_fixed_window_g1

0x64fb,	// (0x000064fb) popup_preview_fixed_window_g2_ParamLimits

0x64fb,	// (0x000064fb) popup_preview_fixed_window_g2

0x0002,

0xa153,	// (0x0000a153) popup_preview_fixed_window_g_ParamLimits

0xa153,	// (0x0000a153) popup_preview_fixed_window_g

0x17b4,	// (0x000017b4) aid_navi_side_left_pane_ParamLimits

0x17c4,	// (0x000017c4) aid_navi_side_right_pane_ParamLimits

0x17d3,	// (0x000017d3) navi_icon_pane_stacon_ParamLimits

0x17e3,	// (0x000017e3) navi_navi_pane_stacon_ParamLimits

0x17d3,	// (0x000017d3) navi_text_pane_stacon_ParamLimits

0x0020,	// (0x00000020) main_text_info_pane

0x6940,	// (0x00006940) listscroll_text_info_pane

0x6948,	// (0x00006948) list_text_info_pane_ParamLimits

0x6948,	// (0x00006948) list_text_info_pane

0x6957,	// (0x00006957) scroll_pane_cp24_ParamLimits

0x6957,	// (0x00006957) scroll_pane_cp24

0xc776,	// (0x0000c776) list_text_info_pane_t1_ParamLimits

0xc776,	// (0x0000c776) list_text_info_pane_t1

0xb3df,	// (0x0000b3df) popup_fast_swap2_window_ParamLimits

0xb3df,	// (0x0000b3df) popup_fast_swap2_window

0x6992,	// (0x00006992) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x379f,	// (0x0000379f) heading_pane_cp2

0x09ed,	// (0x000009ed) listscroll_fast2_pane

0x699c,	// (0x0000699c) grid_fast2_pane

0x69a4,	// (0x000069a4) listscroll_fast2_pane_g1

0x69ac,	// (0x000069ac) listscroll_fast2_pane_g2

0x0001,

0xa1cf,	// (0x0000a1cf) listscroll_fast2_pane_g

0x14af,	// (0x000014af) scroll_pane_cp26

0x69b4,	// (0x000069b4) cell_fast2_pane_ParamLimits

0x69b4,	// (0x000069b4) cell_fast2_pane

0x69ca,	// (0x000069ca) cell_fast2_pane_g1

0x69d3,	// (0x000069d3) cell_fast2_pane_g2

0x69dc,	// (0x000069dc) cell_fast2_pane_g3

0x0002,

0xa1d4,	// (0x0000a1d4) cell_fast2_pane_g

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp9

0x0ad9,	// (0x00000ad9) main_eswt_pane_ParamLimits

0x0ad9,	// (0x00000ad9) main_eswt_pane

0x696c,	// (0x0000696c) list_single_text_info_pane

0x69e4,	// (0x000069e4) eswt_ctrl_button_pane

0x69e4,	// (0x000069e4) eswt_ctrl_canvas_pane

0x69ec,	// (0x000069ec) eswt_ctrl_combo_pane

0x69e4,	// (0x000069e4) eswt_ctrl_default_pane

0x69e4,	// (0x000069e4) eswt_ctrl_label_pane

0x69f4,	// (0x000069f4) eswt_ctrl_wait_pane

0x69fc,	// (0x000069fc) eswt_shell_pane

0x0020,	// (0x00000020) listscroll_eswt_app_pane

0x6a18,	// (0x00006a18) popup_eswt_tasktip_window_ParamLimits

0x6a18,	// (0x00006a18) popup_eswt_tasktip_window

0x338c,	// (0x0000338c) bg_popup_window_pane_cp18

0x6a29,	// (0x00006a29) eswt_control_pane_g1_ParamLimits

0x6a29,	// (0x00006a29) eswt_control_pane_g1

0x6a36,	// (0x00006a36) eswt_control_pane_g2_ParamLimits

0x6a36,	// (0x00006a36) eswt_control_pane_g2

0x6a43,	// (0x00006a43) eswt_control_pane_g3_ParamLimits

0x6a43,	// (0x00006a43) eswt_control_pane_g3

0x6a50,	// (0x00006a50) eswt_control_pane_g4_ParamLimits

0x6a50,	// (0x00006a50) eswt_control_pane_g4

0x0003,

0xa1db,	// (0x0000a1db) eswt_control_pane_g_ParamLimits

0xa1db,	// (0x0000a1db) eswt_control_pane_g

0x11e8,	// (0x000011e8) bg_button_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane

0x0ad9,	// (0x00000ad9) common_borders_pane_copy2_ParamLimits

0x0ad9,	// (0x00000ad9) common_borders_pane_copy2

0x6a5d,	// (0x00006a5d) control_button_pane_g1_ParamLimits

0x6a5d,	// (0x00006a5d) control_button_pane_g1

0x6a69,	// (0x00006a69) control_button_pane_g2_ParamLimits

0x6a69,	// (0x00006a69) control_button_pane_g2

0x6a75,	// (0x00006a75) control_button_pane_g3_ParamLimits

0x6a75,	// (0x00006a75) control_button_pane_g3

0x0002,

0xa1e4,	// (0x0000a1e4) control_button_pane_g_ParamLimits

0xa1e4,	// (0x0000a1e4) control_button_pane_g

0x6a89,	// (0x00006a89) control_button_pane_t1

0x6a97,	// (0x00006a97) control_button_pane_t2

0x0001,

0xa1eb,	// (0x0000a1eb) control_button_pane_t

0x3202,	// (0x00003202) bg_button_pane_g1

0x320a,	// (0x0000320a) bg_button_pane_g2

0x3212,	// (0x00003212) bg_button_pane_g3

0x321a,	// (0x0000321a) bg_button_pane_g4

0x3222,	// (0x00003222) bg_button_pane_g5

0x322a,	// (0x0000322a) bg_button_pane_g6

0x3232,	// (0x00003232) bg_button_pane_g7

0x323a,	// (0x0000323a) bg_button_pane_g8

0x3242,	// (0x00003242) bg_button_pane_g9

0x0008,

0x9e63,	// (0x00009e63) bg_button_pane_g

0x5c1c,	// (0x00005c1c) common_borders_pane_ParamLimits

0x5c1c,	// (0x00005c1c) common_borders_pane

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy1_ParamLimits

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy1

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy1_ParamLimits

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy1

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy1_ParamLimits

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy1

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy1_ParamLimits

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy1

0x5c57,	// (0x00005c57) bg_eswt_ctrl_canvas_pane_g1

0x5c1c,	// (0x00005c1c) common_borders_pane_cp2_ParamLimits

0x5c1c,	// (0x00005c1c) common_borders_pane_cp2

0x5c1c,	// (0x00005c1c) common_borders_pane_cp3_ParamLimits

0x5c1c,	// (0x00005c1c) common_borders_pane_cp3

0x6aa5,	// (0x00006aa5) separator_horizontal_pane

0x193d,	// (0x0000193d) separator_vertical_pane

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy2_ParamLimits

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy2

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy2_ParamLimits

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy2

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy2_ParamLimits

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy2

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy2_ParamLimits

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy2

0x0020,	// (0x00000020) common_borders_pane_cp4

0x6aad,	// (0x00006aad) separator_horizontal_pane_g1

0x6ab6,	// (0x00006ab6) separator_horizontal_pane_g2

0x6abf,	// (0x00006abf) separator_horizontal_pane_g3

0x0002,

0xa1f0,	// (0x0000a1f0) separator_horizontal_pane_g

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy3_ParamLimits

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy3

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy3_ParamLimits

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy3

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy3_ParamLimits

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy3

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy3_ParamLimits

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy3

0x0020,	// (0x00000020) common_borders_pane_cp5

0x6ac8,	// (0x00006ac8) separator_vertical_pane_g1

0x6ad1,	// (0x00006ad1) separator_vertical_pane_g2

0x6ada,	// (0x00006ada) separator_vertical_pane_g3

0x0002,

0xa1f7,	// (0x0000a1f7) separator_vertical_pane_g

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy4_ParamLimits

0x6a29,	// (0x00006a29) eswt_control_pane_g1_copy4

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy4_ParamLimits

0x6a36,	// (0x00006a36) eswt_control_pane_g2_copy4

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy4_ParamLimits

0x6a43,	// (0x00006a43) eswt_control_pane_g3_copy4

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy4_ParamLimits

0x6a50,	// (0x00006a50) eswt_control_pane_g4_copy4

0xc791,	// (0x0000c791) eswt_ctrl_combo_button_pane

0xc799,	// (0x0000c799) eswt_ctrl_input_pane

0xc7a1,	// (0x0000c7a1) popup_choice_list_window_cp70

0xc7a9,	// (0x0000c7a9) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x5c1c,	// (0x00005c1c) bg_button_pane_cp70_ParamLimits

0x5c1c,	// (0x00005c1c) bg_button_pane_cp70

0xc7b7,	// (0x0000c7b7) eswt_ctrl_combo_button_pane_g1

0x6b11,	// (0x00006b11) wait_bar_pane_cp70

0x338c,	// (0x0000338c) bg_popup_window_pane_cp70_ParamLimits

0x338c,	// (0x0000338c) bg_popup_window_pane_cp70

0x6b19,	// (0x00006b19) popup_eswt_tasktip_window_t1

0x6b2f,	// (0x00006b2f) wait_bar_pane_cp71_ParamLimits

0x6b2f,	// (0x00006b2f) wait_bar_pane_cp71

0x6b3b,	// (0x00006b3b) grid_eswt_app_pane

0x1946,	// (0x00001946) scroll_pane_cp70

0xc7bf,	// (0x0000c7bf) cell_eswt_app_pane_ParamLimits

0xc7bf,	// (0x0000c7bf) cell_eswt_app_pane

0xc7e7,	// (0x0000c7e7) cell_eswt_app_pane_g1_ParamLimits

0xc7e7,	// (0x0000c7e7) cell_eswt_app_pane_g1

0xc816,	// (0x0000c816) cell_eswt_app_pane_g2_ParamLimits

0xc816,	// (0x0000c816) cell_eswt_app_pane_g2

0x0001,

0xe294,	// (0x0000e294) cell_eswt_app_pane_g_ParamLimits

0xe294,	// (0x0000e294) cell_eswt_app_pane_g

0xc83f,	// (0x0000c83f) cell_eswt_app_pane_t1_ParamLimits

0xc83f,	// (0x0000c83f) cell_eswt_app_pane_t1

0x6bf6,	// (0x00006bf6) grid_highlight_pane_cp70_ParamLimits

0x6bf6,	// (0x00006bf6) grid_highlight_pane_cp70

0x0c7f,	// (0x00000c7f) set_content_pane_g1

0x261b,	// (0x0000261b) status_small_volume_pane

0x6c02,	// (0x00006c02) status_small_volume_pane_g1

0x6c0a,	// (0x00006c0a) volume_small2_pane

0x6c13,	// (0x00006c13) volume_small2_pane_g1

0x6c1c,	// (0x00006c1c) volume_small2_pane_g2

0x6c25,	// (0x00006c25) volume_small2_pane_g3

0x6c2e,	// (0x00006c2e) volume_small2_pane_g4

0x6c37,	// (0x00006c37) volume_small2_pane_g5

0x6c40,	// (0x00006c40) volume_small2_pane_g6

0x6c49,	// (0x00006c49) volume_small2_pane_g7

0x6c52,	// (0x00006c52) volume_small2_pane_g8

0x6c5b,	// (0x00006c5b) volume_small2_pane_g9

0x6c64,	// (0x00006c64) volume_small2_pane_g10

0x0009,

0xa203,	// (0x0000a203) volume_small2_pane_g

0x61d9,	// (0x000061d9) fep_vkb_top_text_pane_g1_ParamLimits

0xc6dc,	// (0x0000c6dc) fep_vkb_top_text_pane_t1_ParamLimits

0x6507,	// (0x00006507) popup_preview_fixed_window_g3_ParamLimits

0x6507,	// (0x00006507) popup_preview_fixed_window_g3

0xb8ff,	// (0x0000b8ff) popup_toolbar_trans_pane

0xc14a,	// (0x0000c14a) aid_height_set_list_ParamLimits

0x487e,	// (0x0000487e) aid_size_parent_ParamLimits

0x2834,	// (0x00002834) list_highlight_pane_cp2_ParamLimits

0x0c7f,	// (0x00000c7f) set_content_pane_g1_ParamLimits

0xc2eb,	// (0x0000c2eb) list_single_image_pane_ParamLimits

0xc2eb,	// (0x0000c2eb) list_single_image_pane

0xc871,	// (0x0000c871) aid_size_cell_image_ParamLimits

0xc871,	// (0x0000c871) aid_size_cell_image

0xc87e,	// (0x0000c87e) grid_single_image_pane_ParamLimits

0xc87e,	// (0x0000c87e) grid_single_image_pane

0x0c7f,	// (0x00000c7f) list_single_image_pane_g1_ParamLimits

0x0c7f,	// (0x00000c7f) list_single_image_pane_g1

0x120e,	// (0x0000120e) list_single_image_pane_g2_ParamLimits

0x120e,	// (0x0000120e) list_single_image_pane_g2

0x0001,

0x9c91,	// (0x00009c91) list_single_image_pane_g_ParamLimits

0x9c91,	// (0x00009c91) list_single_image_pane_g

0x4a01,	// (0x00004a01) list_single_image_pane_t1_ParamLimits

0x4a01,	// (0x00004a01) list_single_image_pane_t1

0xc88a,	// (0x0000c88a) cell_image_list_pane_ParamLimits

0xc88a,	// (0x0000c88a) cell_image_list_pane

0xc89e,	// (0x0000c89e) cell_image_list_pane_g1

0xc8a7,	// (0x0000c8a7) cell_image_list_pane_g2

0x0001,

0xe299,	// (0x0000e299) cell_image_list_pane_g

0x6cab,	// (0x00006cab) aid_size_cell_tb_trans_pane

0x11e8,	// (0x000011e8) bg_tb_trans_pane

0x6cbd,	// (0x00006cbd) grid_tb_trans_pane

0x3202,	// (0x00003202) bg_tb_trans_pane_g1

0x320a,	// (0x0000320a) bg_tb_trans_pane_g2

0x3212,	// (0x00003212) bg_tb_trans_pane_g3

0x321a,	// (0x0000321a) bg_tb_trans_pane_g4

0x3222,	// (0x00003222) bg_tb_trans_pane_g5

0x323a,	// (0x0000323a) bg_tb_trans_pane_g6

0x3242,	// (0x00003242) bg_tb_trans_pane_g7

0x322a,	// (0x0000322a) bg_tb_trans_pane_g8

0x3232,	// (0x00003232) bg_tb_trans_pane_g9

0x0008,

0xa21d,	// (0x0000a21d) bg_tb_trans_pane_g

0x6cd1,	// (0x00006cd1) cell_toolbar_trans_pane_ParamLimits

0x6cd1,	// (0x00006cd1) cell_toolbar_trans_pane

0x5c57,	// (0x00005c57) cell_toolbar_trans_pane_g1

0xc538,	// (0x0000c538) list_form2_midp_pane_t1

0xc546,	// (0x0000c546) list_form2_midp_pane_t2

0x0001,

0xe264,	// (0x0000e264) list_form2_midp_pane_t

0x58b0,	// (0x000058b0) scroll_pane_cp51_ParamLimits

0x5ab1,	// (0x00005ab1) form2_midp_wait_pane_g1

0x5aba,	// (0x00005aba) form2_midp_wait_pane_g2

0x5ac3,	// (0x00005ac3) form2_midp_wait_pane_g3

0x0002,

0xa0e0,	// (0x0000a0e0) form2_midp_wait_pane_g

0x0474,	// (0x00000474) list_highlight_pane_cp21_ParamLimits

0x5ae3,	// (0x00005ae3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5af2,	// (0x00005af2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4a48,	// (0x00004a48) list_single_2graphic_im_pane_ParamLimits

0x4a48,	// (0x00004a48) list_single_2graphic_im_pane

0xc8b0,	// (0x0000c8b0) list_single_2graphic_im_pane_g1_ParamLimits

0xc8b0,	// (0x0000c8b0) list_single_2graphic_im_pane_g1

0xc8c1,	// (0x0000c8c1) list_single_2graphic_im_pane_g2_ParamLimits

0xc8c1,	// (0x0000c8c1) list_single_2graphic_im_pane_g2

0xc8cd,	// (0x0000c8cd) list_single_2graphic_im_pane_g3_ParamLimits

0xc8cd,	// (0x0000c8cd) list_single_2graphic_im_pane_g3

0x0003,

0xe29e,	// (0x0000e29e) list_single_2graphic_im_pane_g_ParamLimits

0xe29e,	// (0x0000e29e) list_single_2graphic_im_pane_g

0xc8e1,	// (0x0000c8e1) list_single_2graphic_im_pane_t1_ParamLimits

0xc8e1,	// (0x0000c8e1) list_single_2graphic_im_pane_t1

0x6513,	// (0x00006513) list_single_graphic_2heading_pane_fp_ParamLimits

0x6513,	// (0x00006513) list_single_graphic_2heading_pane_fp

0x656a,	// (0x0000656a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x656a,	// (0x0000656a) list_single_graphic_2heading_pane_fp_g1

0x6527,	// (0x00006527) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6527,	// (0x00006527) list_single_graphic_2heading_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_fp_g3

0x6533,	// (0x00006533) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6533,	// (0x00006533) list_single_graphic_2heading_pane_fp_g4

0x6547,	// (0x00006547) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6547,	// (0x00006547) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xa163,	// (0x0000a163) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa163,	// (0x0000a163) list_single_graphic_2heading_pane_fp_g

0x6d65,	// (0x00006d65) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6d65,	// (0x00006d65) list_single_graphic_2heading_pane_fp_t1

0x65a2,	// (0x000065a2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x65a2,	// (0x000065a2) list_single_graphic_2heading_pane_fp_t2

0x6d7b,	// (0x00006d7b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6d7b,	// (0x00006d7b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xa239,	// (0x0000a239) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xa239,	// (0x0000a239) list_single_graphic_2heading_pane_fp_t

0x5e7a,	// (0x00005e7a) fep_hwr_write_pane_g5_ParamLimits

0x5e7a,	// (0x00005e7a) fep_hwr_write_pane_g5

0x5e86,	// (0x00005e86) fep_hwr_write_pane_g6_ParamLimits

0x5e86,	// (0x00005e86) fep_hwr_write_pane_g6

0x69fc,	// (0x000069fc) eswt_shell_pane_ParamLimits

0x338c,	// (0x0000338c) bg_popup_window_pane_cp18_ParamLimits

0x476c,	// (0x0000476c) heading_pane_cp70

0x6b19,	// (0x00006b19) popup_eswt_tasktip_window_t1_ParamLimits

0xb99a,	// (0x0000b99a) aid_touch_tab_arrow_left

0xb9ae,	// (0x0000b9ae) aid_touch_tab_arrow_right

0xa681,	// (0x0000a681) title_pane_g3_ParamLimits

0xa681,	// (0x0000a681) title_pane_g3

0x10e6,	// (0x000010e6) set_value_pane_g1

0xb8ff,	// (0x0000b8ff) popup_toolbar_trans_pane_ParamLimits

0x6cab,	// (0x00006cab) aid_size_cell_tb_trans_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_tb_trans_pane_ParamLimits

0x6cbd,	// (0x00006cbd) grid_tb_trans_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane

0x0ad9,	// (0x00000ad9) cont_snote2_single_text_pane_ParamLimits

0x0ad9,	// (0x00000ad9) cont_snote2_single_text_pane

0x0ad9,	// (0x00000ad9) cont_snote2_single_graphic_pane_ParamLimits

0x0ad9,	// (0x00000ad9) cont_snote2_single_graphic_pane

0x3978,	// (0x00003978) cont_note_wait_pane_ParamLimits

0x3978,	// (0x00003978) cont_note_wait_pane

0x3978,	// (0x00003978) cont_note_image_pane_ParamLimits

0x3978,	// (0x00003978) cont_note_image_pane

0x6d91,	// (0x00006d91) popup_note2_window_g1_ParamLimits

0x6d91,	// (0x00006d91) popup_note2_window_g1

0x6dc2,	// (0x00006dc2) popup_note2_window_t1_ParamLimits

0x6dc2,	// (0x00006dc2) popup_note2_window_t1

0x6e07,	// (0x00006e07) popup_note2_window_t2_ParamLimits

0x6e07,	// (0x00006e07) popup_note2_window_t2

0x6e4c,	// (0x00006e4c) popup_note2_window_t3_ParamLimits

0x6e4c,	// (0x00006e4c) popup_note2_window_t3

0x6e91,	// (0x00006e91) popup_note2_window_t4_ParamLimits

0x6e91,	// (0x00006e91) popup_note2_window_t4

0x0829,	// (0x00000829) popup_note2_window_t5_ParamLimits

0x0829,	// (0x00000829) popup_note2_window_t5

0x0004,

0xa245,	// (0x0000a245) popup_note2_window_t_ParamLimits

0xa245,	// (0x0000a245) popup_note2_window_t

0x6ec0,	// (0x00006ec0) popup_note2_image_window_g1_ParamLimits

0x6ec0,	// (0x00006ec0) popup_note2_image_window_g1

0x6ecc,	// (0x00006ecc) popup_note2_image_window_g2_ParamLimits

0x6ecc,	// (0x00006ecc) popup_note2_image_window_g2

0x0001,

0xa250,	// (0x0000a250) popup_note2_image_window_g_ParamLimits

0xa250,	// (0x0000a250) popup_note2_image_window_g

0x6ede,	// (0x00006ede) popup_note2_image_window_t1_ParamLimits

0x6ede,	// (0x00006ede) popup_note2_image_window_t1

0x6ef6,	// (0x00006ef6) popup_note2_image_window_t2_ParamLimits

0x6ef6,	// (0x00006ef6) popup_note2_image_window_t2

0x6f0e,	// (0x00006f0e) popup_note2_image_window_t3_ParamLimits

0x6f0e,	// (0x00006f0e) popup_note2_image_window_t3

0x0002,

0xa255,	// (0x0000a255) popup_note2_image_window_t_ParamLimits

0xa255,	// (0x0000a255) popup_note2_image_window_t

0x3986,	// (0x00003986) popup_note2_wait_window_g1_ParamLimits

0x3986,	// (0x00003986) popup_note2_wait_window_g1

0x3992,	// (0x00003992) popup_note2_wait_window_g2_ParamLimits

0x3992,	// (0x00003992) popup_note2_wait_window_g2

0x399e,	// (0x0000399e) popup_note2_wait_window_g3_ParamLimits

0x399e,	// (0x0000399e) popup_note2_wait_window_g3

0x0002,

0x9e45,	// (0x00009e45) popup_note2_wait_window_g_ParamLimits

0x9e45,	// (0x00009e45) popup_note2_wait_window_g

0x6f2a,	// (0x00006f2a) popup_note2_wait_window_t1_ParamLimits

0x6f2a,	// (0x00006f2a) popup_note2_wait_window_t1

0x6f48,	// (0x00006f48) popup_note2_wait_window_t2_ParamLimits

0x6f48,	// (0x00006f48) popup_note2_wait_window_t2

0x6f66,	// (0x00006f66) popup_note2_wait_window_t3_ParamLimits

0x6f66,	// (0x00006f66) popup_note2_wait_window_t3

0x6f78,	// (0x00006f78) popup_note2_wait_window_t4_ParamLimits

0x6f78,	// (0x00006f78) popup_note2_wait_window_t4

0x0003,

0xa25c,	// (0x0000a25c) popup_note2_wait_window_t_ParamLimits

0xa25c,	// (0x0000a25c) popup_note2_wait_window_t

0x6f8a,	// (0x00006f8a) wait_bar2_pane_ParamLimits

0x6f8a,	// (0x00006f8a) wait_bar2_pane

0x6fa2,	// (0x00006fa2) popup_snote2_single_text_window_g1_ParamLimits

0x6fa2,	// (0x00006fa2) popup_snote2_single_text_window_g1

0x6fca,	// (0x00006fca) popup_snote2_single_text_window_t1_ParamLimits

0x6fca,	// (0x00006fca) popup_snote2_single_text_window_t1

0x7016,	// (0x00007016) popup_snote2_single_text_window_t2_ParamLimits

0x7016,	// (0x00007016) popup_snote2_single_text_window_t2

0x7062,	// (0x00007062) popup_snote2_single_text_window_t3_ParamLimits

0x7062,	// (0x00007062) popup_snote2_single_text_window_t3

0x70a3,	// (0x000070a3) popup_snote2_single_text_window_t4_ParamLimits

0x70a3,	// (0x000070a3) popup_snote2_single_text_window_t4

0x70d9,	// (0x000070d9) popup_snote2_single_text_window_t5_ParamLimits

0x70d9,	// (0x000070d9) popup_snote2_single_text_window_t5

0x0004,

0xa265,	// (0x0000a265) popup_snote2_single_text_window_t_ParamLimits

0xa265,	// (0x0000a265) popup_snote2_single_text_window_t

0x7104,	// (0x00007104) popup_snote2_single_graphic_window_g1_ParamLimits

0x7104,	// (0x00007104) popup_snote2_single_graphic_window_g1

0x712c,	// (0x0000712c) popup_snote2_single_graphic_window_g2_ParamLimits

0x712c,	// (0x0000712c) popup_snote2_single_graphic_window_g2

0x0001,

0xa270,	// (0x0000a270) popup_snote2_single_graphic_window_g_ParamLimits

0xa270,	// (0x0000a270) popup_snote2_single_graphic_window_g

0x7154,	// (0x00007154) popup_snote2_single_graphic_window_t1_ParamLimits

0x7154,	// (0x00007154) popup_snote2_single_graphic_window_t1

0x71a0,	// (0x000071a0) popup_snote2_single_graphic_window_t2_ParamLimits

0x71a0,	// (0x000071a0) popup_snote2_single_graphic_window_t2

0x7062,	// (0x00007062) popup_snote2_single_graphic_window_t3_ParamLimits

0x7062,	// (0x00007062) popup_snote2_single_graphic_window_t3

0x70a3,	// (0x000070a3) popup_snote2_single_graphic_window_t4_ParamLimits

0x70a3,	// (0x000070a3) popup_snote2_single_graphic_window_t4

0x70d9,	// (0x000070d9) popup_snote2_single_graphic_window_t5_ParamLimits

0x70d9,	// (0x000070d9) popup_snote2_single_graphic_window_t5

0x0004,

0xa275,	// (0x0000a275) popup_snote2_single_graphic_window_t_ParamLimits

0xa275,	// (0x0000a275) popup_snote2_single_graphic_window_t

0x573e,	// (0x0000573e) clock_nsta_pane_cp2_t1

0x573e,	// (0x0000573e) clock_nsta_pane_cp2_t2

0x0001,

0xa0a1,	// (0x0000a0a1) clock_nsta_pane_cp2_t

0x1202,	// (0x00001202) form_field_data_wide_pane_g1_ParamLimits

0x0c7f,	// (0x00000c7f) form_field_data_wide_pane_g2_ParamLimits

0x0c7f,	// (0x00000c7f) form_field_data_wide_pane_g2

0x120e,	// (0x0000120e) form_field_data_wide_pane_g3_ParamLimits

0x120e,	// (0x0000120e) form_field_data_wide_pane_g3

0x0002,

0x9c8f,	// (0x00009c8f) form_field_data_wide_pane_g_ParamLimits

0x9c8f,	// (0x00009c8f) form_field_data_wide_pane_g

0xc473,	// (0x0000c473) grid_touch_3_pane_ParamLimits

0xc473,	// (0x0000c473) grid_touch_3_pane

0xc912,	// (0x0000c912) cell_touch_3_pane_ParamLimits

0xc912,	// (0x0000c912) cell_touch_3_pane

0x5c57,	// (0x00005c57) cell_touch_3_pane_g1

0x5c57,	// (0x00005c57) cell_touch_3_pane_g2

0x0001,

0xa126,	// (0x0000a126) cell_touch_3_pane_g

0x085b,	// (0x0000085b) cont_query_data_pane

0x0863,	// (0x00000863) cont_query_data_pane_cp1

0x7219,	// (0x00007219) button_value_adjust_pane_cp7

0x7221,	// (0x00007221) query_popup_pane_cp3

0x1c31,	// (0x00001c31) bg_popup_sub_pane_cp22_ParamLimits

0x1c47,	// (0x00001c47) navi_navi_volume_pane_cp2

0x1c5f,	// (0x00001c5f) popup_side_volume_key_window_g2

0x1c6b,	// (0x00001c6b) popup_side_volume_key_window_g3

0x0002,

0x9d21,	// (0x00009d21) popup_side_volume_key_window_g

0x1c85,	// (0x00001c85) popup_side_volume_key_window_t2

0x0001,

0x9d28,	// (0x00009d28) popup_side_volume_key_window_t

0x20ce,	// (0x000020ce) popup_side_volume_key_window_ParamLimits

0xab24,	// (0x0000ab24) list_double_graphic_pane_g4_ParamLimits

0xab24,	// (0x0000ab24) list_double_graphic_pane_g4

0xc2c3,	// (0x0000c2c3) list_single_2heading_msg_pane_ParamLimits

0xc2c3,	// (0x0000c2c3) list_single_2heading_msg_pane

0xc959,	// (0x0000c959) list_single_2heading_msg_pane_g1_ParamLimits

0xc959,	// (0x0000c959) list_single_2heading_msg_pane_g1

0xc965,	// (0x0000c965) list_single_2heading_msg_pane_g2_ParamLimits

0xc965,	// (0x0000c965) list_single_2heading_msg_pane_g2

0xc978,	// (0x0000c978) list_single_2heading_msg_pane_g3_ParamLimits

0xc978,	// (0x0000c978) list_single_2heading_msg_pane_g3

0x7272,	// (0x00007272) list_single_2heading_msg_pane_g4_ParamLimits

0x7272,	// (0x00007272) list_single_2heading_msg_pane_g4

0x0003,

0xe2a7,	// (0x0000e2a7) list_single_2heading_msg_pane_g_ParamLimits

0xe2a7,	// (0x0000e2a7) list_single_2heading_msg_pane_g

0xc984,	// (0x0000c984) list_single_2heading_msg_pane_t1_ParamLimits

0xc984,	// (0x0000c984) list_single_2heading_msg_pane_t1

0xc9ac,	// (0x0000c9ac) list_single_2heading_msg_pane_t2_ParamLimits

0xc9ac,	// (0x0000c9ac) list_single_2heading_msg_pane_t2

0xca17,	// (0x0000ca17) list_single_2heading_msg_pane_t3_ParamLimits

0xca17,	// (0x0000ca17) list_single_2heading_msg_pane_t3

0x731a,	// (0x0000731a) list_single_2heading_msg_pane_t4_ParamLimits

0x731a,	// (0x0000731a) list_single_2heading_msg_pane_t4

0x0003,

0xe2b0,	// (0x0000e2b0) list_single_2heading_msg_pane_t_ParamLimits

0xe2b0,	// (0x0000e2b0) list_single_2heading_msg_pane_t

0x03c8,	// (0x000003c8) title_pane_g4_ParamLimits

0x03c8,	// (0x000003c8) title_pane_g4

0x16f4,	// (0x000016f4) title_pane_stacon_g3_ParamLimits

0x16f4,	// (0x000016f4) title_pane_stacon_g3

0x6d28,	// (0x00006d28) list_single_2graphic_im_pane_g4_ParamLimits

0x6d28,	// (0x00006d28) list_single_2graphic_im_pane_g4

0x44cc,	// (0x000044cc) popup_side_volume_key_window_cp

0x4e18,	// (0x00004e18) main_idle_act2_pane_t1

0x324a,	// (0x0000324a) toolbar_button_pane_g10

0xaa11,	// (0x0000aa11) popup_toolbar_window_cp1

0x572f,	// (0x0000572f) clock_nsta_pane_cp_t1

0x572f,	// (0x0000572f) clock_nsta_pane_cp_t2

0x0001,

0xa09c,	// (0x0000a09c) clock_nsta_pane_cp_t

0x1c47,	// (0x00001c47) navi_navi_volume_pane_cp2_ParamLimits

0x1c53,	// (0x00001c53) popup_side_volume_key_window_g1_ParamLimits

0x1c5f,	// (0x00001c5f) popup_side_volume_key_window_g2_ParamLimits

0x1c6b,	// (0x00001c6b) popup_side_volume_key_window_g3_ParamLimits

0x9d21,	// (0x00009d21) popup_side_volume_key_window_g_ParamLimits

0x5cc0,	// (0x00005cc0) fep_hwr_aid_pane

0x5d61,	// (0x00005d61) bg_fep_hwr_top_pane_g4_ParamLimits

0x5d81,	// (0x00005d81) fep_hwr_top_pane_g1_ParamLimits

0x5d93,	// (0x00005d93) fep_hwr_top_pane_g2_ParamLimits

0x5da5,	// (0x00005da5) fep_hwr_top_pane_g3_ParamLimits

0xa0f1,	// (0x0000a0f1) fep_hwr_top_pane_g_ParamLimits

0x5dba,	// (0x00005dba) fep_hwr_top_text_pane_ParamLimits

0x4297,	// (0x00004297) aid_touch_tab_arrow_arrow_2

0x42a0,	// (0x000042a0) aid_touch_tab_arrow_left_2

0x5cd4,	// (0x00005cd4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5d07,	// (0x00005d07) fep_hwr_prediction_pane

0x6009,	// (0x00006009) fep_vkb_prediction_pane

0xc6bc,	// (0x0000c6bc) fep_vkb_side_pane_g3_ParamLimits

0xc6bc,	// (0x0000c6bc) fep_vkb_side_pane_g3

0x6097,	// (0x00006097) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x675e,	// (0x0000675e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x676b,	// (0x0000676b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa19b,	// (0x0000a19b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x733f,	// (0x0000733f) fep_hwr_prediction_pane_g1

0x7349,	// (0x00007349) fep_hwr_prediction_pane_g2

0x7351,	// (0x00007351) fep_hwr_prediction_pane_g3

0x7359,	// (0x00007359) fep_hwr_prediction_pane_g4

0x0003,

0xa292,	// (0x0000a292) fep_hwr_prediction_pane_g

0x733f,	// (0x0000733f) fep_vkb_prediction_pane_g1

0x7361,	// (0x00007361) fep_vkb_prediction_pane_g2

0x7369,	// (0x00007369) fep_vkb_prediction_pane_g3

0x7371,	// (0x00007371) fep_vkb_prediction_pane_g4

0x0003,

0xa29b,	// (0x0000a29b) fep_vkb_prediction_pane_g

0x47f2,	// (0x000047f2) slider_set_pane_g3

0x4806,	// (0x00004806) slider_set_pane_g4

0x481e,	// (0x0000481e) slider_set_pane_g5

0x47f2,	// (0x000047f2) slider_set_pane_g6

0xc114,	// (0x0000c114) slider_set_pane_g7

0x49c5,	// (0x000049c5) slider_form_pane_g3

0x49ce,	// (0x000049ce) slider_form_pane_g4

0x49d6,	// (0x000049d6) slider_form_pane_g5

0x49c5,	// (0x000049c5) slider_form_pane_g6

0xc27c,	// (0x0000c27c) slider_form_pane_g7

0x50ed,	// (0x000050ed) slider_set_pane_vc_g3

0x50f6,	// (0x000050f6) slider_set_pane_vc_g4

0x50ff,	// (0x000050ff) slider_set_pane_vc_g5

0x50ed,	// (0x000050ed) slider_set_pane_vc_g6

0x5108,	// (0x00005108) slider_set_pane_vc_g7

0x50ed,	// (0x000050ed) slider_form_pane_vc_g1

0x50f6,	// (0x000050f6) slider_form_pane_vc_g2

0x50ff,	// (0x000050ff) slider_form_pane_vc_g3

0x50ed,	// (0x000050ed) slider_form_pane_vc_g4

0x5474,	// (0x00005474) slider_form_pane_vc_g5

0x0004,

0xa082,	// (0x0000a082) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x7379,	// (0x00007379) ai3_links_pane

0xca85,	// (0x0000ca85) popup_ai3_data_window_ParamLimits

0xca85,	// (0x0000ca85) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xca9d,	// (0x0000ca9d) cell_ai3_links_pane_ParamLimits

0xca9d,	// (0x0000ca9d) cell_ai3_links_pane

0x73ae,	// (0x000073ae) bg_popup_sub_pane_cp11

0x73bb,	// (0x000073bb) cell_ai3_links_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp12

0x73e0,	// (0x000073e0) heading_ai3_data_pane

0x73e8,	// (0x000073e8) list_ai3_gene_pane

0x73f4,	// (0x000073f4) popup_ai3_data_window_g1

0x73fc,	// (0x000073fc) heading_ai3_data_pane_g1

0x7404,	// (0x00007404) heading_ai3_data_pane_t1

0x7412,	// (0x00007412) list_double_ai3_gene_pane_ParamLimits

0x7412,	// (0x00007412) list_double_ai3_gene_pane

0x741f,	// (0x0000741f) list_single_ai3_gene_pane_ParamLimits

0x741f,	// (0x0000741f) list_single_ai3_gene_pane

0x5c1c,	// (0x00005c1c) list_highlight_pane_cp7_ParamLimits

0x5c1c,	// (0x00005c1c) list_highlight_pane_cp7

0x742c,	// (0x0000742c) list_single_a13_gene_pane_t1_ParamLimits

0x742c,	// (0x0000742c) list_single_a13_gene_pane_t1

0x7443,	// (0x00007443) list_single_ai3_gene_pane_g1

0x744c,	// (0x0000744c) list_single_ai3_gene_pane_g2

0x0001,

0xa2a4,	// (0x0000a2a4) list_single_ai3_gene_pane_g

0x7454,	// (0x00007454) list_double_ai3_gene_pane_g1_ParamLimits

0x7454,	// (0x00007454) list_double_ai3_gene_pane_g1

0x7460,	// (0x00007460) list_double_ai3_gene_pane_t1_ParamLimits

0x7460,	// (0x00007460) list_double_ai3_gene_pane_t1

0x747c,	// (0x0000747c) list_double_ai3_gene_pane_t2_ParamLimits

0x747c,	// (0x0000747c) list_double_ai3_gene_pane_t2

0x7491,	// (0x00007491) list_double_ai3_gene_pane_t3_ParamLimits

0x7491,	// (0x00007491) list_double_ai3_gene_pane_t3

0x0002,

0xa2a9,	// (0x0000a2a9) list_double_ai3_gene_pane_t_ParamLimits

0xa2a9,	// (0x0000a2a9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7232,	// (0x00007232) aid_size_min_col_2

0xc945,	// (0x0000c945) aid_size_min_msg_ParamLimits

0xc945,	// (0x0000c945) aid_size_min_msg

0xc6d0,	// (0x0000c6d0) fep_vkb_top_text_pane_g2_ParamLimits

0xc6d0,	// (0x0000c6d0) fep_vkb_top_text_pane_g2

0x0001,

0xe284,	// (0x0000e284) fep_vkb_top_text_pane_g_ParamLimits

0xe284,	// (0x0000e284) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x74ae,	// (0x000074ae) grid_hc_apps_pane_ParamLimits

0x74ae,	// (0x000074ae) grid_hc_apps_pane

0x74bd,	// (0x000074bd) list_hc_apps_pane

0x74c5,	// (0x000074c5) scroll_pane_cp37_ParamLimits

0x74c5,	// (0x000074c5) scroll_pane_cp37

0xcab3,	// (0x0000cab3) cell_hc_apps_pane_ParamLimits

0xcab3,	// (0x0000cab3) cell_hc_apps_pane

0xcb4d,	// (0x0000cb4d) cell_hc_apps_pane_g1_ParamLimits

0xcb4d,	// (0x0000cb4d) cell_hc_apps_pane_g1

0x758c,	// (0x0000758c) cell_hc_apps_pane_g2_ParamLimits

0x758c,	// (0x0000758c) cell_hc_apps_pane_g2

0x75a8,	// (0x000075a8) cell_hc_apps_pane_g3_ParamLimits

0x75a8,	// (0x000075a8) cell_hc_apps_pane_g3

0x0002,

0xe2b9,	// (0x0000e2b9) cell_hc_apps_pane_g_ParamLimits

0xe2b9,	// (0x0000e2b9) cell_hc_apps_pane_g

0xcb7a,	// (0x0000cb7a) cell_hc_apps_pane_t1_ParamLimits

0xcb7a,	// (0x0000cb7a) cell_hc_apps_pane_t1

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10_ParamLimits

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10

0xcbb8,	// (0x0000cbb8) list_single_hc_apps_pane_ParamLimits

0xcbb8,	// (0x0000cbb8) list_single_hc_apps_pane

0xcbe4,	// (0x0000cbe4) list_single_hc_apps_pane_g1

0xcbfd,	// (0x0000cbfd) list_single_hc_apps_pane_g2

0x0001,

0xe2c0,	// (0x0000e2c0) list_single_hc_apps_pane_g

0xcc16,	// (0x0000cc16) list_single_hc_apps_pane_g2_copy1

0xcc32,	// (0x0000cc32) list_single_hc_apps_pane_t1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_ParamLimits

0xa74e,	// (0x0000a74e) setting_slider_pane_t2_ParamLimits

0xa767,	// (0x0000a767) setting_slider_pane_t3_ParamLimits

0xe097,	// (0x0000e097) setting_slider_pane_t_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_ParamLimits

0x2694,	// (0x00002694) control_pane_g5_ParamLimits

0x2694,	// (0x00002694) control_pane_g5

0x47d9,	// (0x000047d9) slider_set_pane_g1_ParamLimits

0x47e6,	// (0x000047e6) slider_set_pane_g2_ParamLimits

0x47f2,	// (0x000047f2) slider_set_pane_g3_ParamLimits

0x4806,	// (0x00004806) slider_set_pane_g4_ParamLimits

0x481e,	// (0x0000481e) slider_set_pane_g5_ParamLimits

0x47f2,	// (0x000047f2) slider_set_pane_g6_ParamLimits

0xc114,	// (0x0000c114) slider_set_pane_g7_ParamLimits

0xe200,	// (0x0000e200) slider_set_pane_g_ParamLimits

0x0474,	// (0x00000474) navi_icon_text_pane_ParamLimits

0xb96c,	// (0x0000b96c) aid_fill_nsta_2_ParamLimits

0xb99a,	// (0x0000b99a) aid_touch_tab_arrow_left_ParamLimits

0xb9ae,	// (0x0000b9ae) aid_touch_tab_arrow_right_ParamLimits

0xba4a,	// (0x0000ba4a) clock_nsta_pane_ParamLimits

0x4279,	// (0x00004279) navi_icon_pane_g1_ParamLimits

0x4285,	// (0x00004285) navi_text_pane_t1_ParamLimits

0x5826,	// (0x00005826) navi_icon_text_pane_g1_ParamLimits

0x5832,	// (0x00005832) navi_icon_text_pane_t1_ParamLimits

0xcbe4,	// (0x0000cbe4) list_single_hc_apps_pane_g1_ParamLimits

0xcbfd,	// (0x0000cbfd) list_single_hc_apps_pane_g2_ParamLimits

0xe2c0,	// (0x0000e2c0) list_single_hc_apps_pane_g_ParamLimits

0xcc16,	// (0x0000cc16) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcc32,	// (0x0000cc32) list_single_hc_apps_pane_t1_ParamLimits

0xa5e0,	// (0x0000a5e0) popup_toolbar2_fixed_window_ParamLimits

0xa5e0,	// (0x0000a5e0) popup_toolbar2_fixed_window

0xb8f7,	// (0x0000b8f7) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x76b4,	// (0x000076b4) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x76b4,	// (0x000076b4) grid_toolbar2_fixed_pane

0xcc60,	// (0x0000cc60) cell_toolbar2_fixed_pane_ParamLimits

0xcc60,	// (0x0000cc60) cell_toolbar2_fixed_pane

0xcc7b,	// (0x0000cc7b) cell_toolbar2_fixed_pane_g1

0x76d6,	// (0x000076d6) toolbar2_fixed_button_pane

0x3202,	// (0x00003202) toolbar2_fixed_button_pane_g1

0x320a,	// (0x0000320a) toolbar2_fixed_button_pane_g2

0x3212,	// (0x00003212) toolbar2_fixed_button_pane_g3

0x321a,	// (0x0000321a) toolbar2_fixed_button_pane_g4

0x3222,	// (0x00003222) toolbar2_fixed_button_pane_g5

0x322a,	// (0x0000322a) toolbar2_fixed_button_pane_g6

0x3232,	// (0x00003232) toolbar2_fixed_button_pane_g7

0x323a,	// (0x0000323a) toolbar2_fixed_button_pane_g8

0x3242,	// (0x00003242) toolbar2_fixed_button_pane_g9

0x0008,

0x9e63,	// (0x00009e63) toolbar2_fixed_button_pane_g

0x76de,	// (0x000076de) cell_toolbar2_float_pane_ParamLimits

0x76de,	// (0x000076de) cell_toolbar2_float_pane

0x76ef,	// (0x000076ef) cell_toolbar2_float_pane_g1

0x76d6,	// (0x000076d6) toolbar2_fixed_button_pane_cp

0xc685,	// (0x0000c685) fep_vkb_accented_list_pane_ParamLimits

0xc685,	// (0x0000c685) fep_vkb_accented_list_pane

0x63ca,	// (0x000063ca) bg_popup_fep_shadow_pane_g9

0x22d6,	// (0x000022d6) bg_popup_fep_shadow_pane_cp3

0x1496,	// (0x00001496) list_accented_list_pane

0x76f8,	// (0x000076f8) list_single_accented_list_pane_ParamLimits

0x76f8,	// (0x000076f8) list_single_accented_list_pane

0x22d6,	// (0x000022d6) list_highlight_pane_cp10

0x7709,	// (0x00007709) list_single_accented_list_pane_t1

0xb839,	// (0x0000b839) popup_slider_window_ParamLimits

0xb839,	// (0x0000b839) popup_slider_window

0x7229,	// (0x00007229) aid_indentation_list_msg

0xcd5a,	// (0x0000cd5a) bg_popup_window_pane_cp19

0x780d,	// (0x0000780d) popup_slider_window_g1

0x7829,	// (0x00007829) popup_slider_window_g2

0x7845,	// (0x00007845) popup_slider_window_g3

0x0005,

0xe2c5,	// (0x0000e2c5) popup_slider_window_g

0x78a1,	// (0x000078a1) popup_slider_window_t1

0x7913,	// (0x00007913) small_volume_slider_vertical_pane

0x5c57,	// (0x00005c57) small_volume_slider_vertical_pane_g1

0x5c57,	// (0x00005c57) small_volume_slider_vertical_pane_g2

0x792f,	// (0x0000792f) small_volume_slider_vertical_pane_g3

0x0002,

0xa2ce,	// (0x0000a2ce) small_volume_slider_vertical_pane_g

0xa564,	// (0x0000a564) area_side_right_pane_ParamLimits

0xa564,	// (0x0000a564) area_side_right_pane

0xce12,	// (0x0000ce12) aid_size_side_button_ParamLimits

0xce12,	// (0x0000ce12) aid_size_side_button

0xce2b,	// (0x0000ce2b) grid_sctrl_middle_pane_ParamLimits

0xce2b,	// (0x0000ce2b) grid_sctrl_middle_pane

0x7968,	// (0x00007968) sctrl_sk_bottom_pane

0x7979,	// (0x00007979) sctrl_sk_top_pane

0x798b,	// (0x0000798b) aid_touch_sctrl_top

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane

0x7998,	// (0x00007998) sctrl_sk_top_pane_g1

0x79a5,	// (0x000079a5) sctrl_sk_top_pane_t1

0x798b,	// (0x0000798b) aid_touch_sctrl_bottom

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp

0x79c0,	// (0x000079c0) sctrl_sk_bottom_pane_g1

0x79a5,	// (0x000079a5) sctrl_sk_bottom_pane_t1

0xce41,	// (0x0000ce41) cell_sctrl_middle_pane_ParamLimits

0xce41,	// (0x0000ce41) cell_sctrl_middle_pane

0xce52,	// (0x0000ce52) aid_touch_sctrl_middle_ParamLimits

0xce52,	// (0x0000ce52) aid_touch_sctrl_middle

0xce5f,	// (0x0000ce5f) bg_sctrl_middle_pane_ParamLimits

0xce5f,	// (0x0000ce5f) bg_sctrl_middle_pane

0x7a87,	// (0x00007a87) cell_sctrl_middle_pane_g1_ParamLimits

0x7a87,	// (0x00007a87) cell_sctrl_middle_pane_g1

0xce6d,	// (0x0000ce6d) cell_sctrl_middle_pane_g2_ParamLimits

0xce6d,	// (0x0000ce6d) cell_sctrl_middle_pane_g2

0x0001,

0xe2d2,	// (0x0000e2d2) cell_sctrl_middle_pane_g_ParamLimits

0xe2d2,	// (0x0000e2d2) cell_sctrl_middle_pane_g

0x3202,	// (0x00003202) bg_sctrl_middle_pane_g1

0x320a,	// (0x0000320a) bg_sctrl_middle_pane_g2

0x3212,	// (0x00003212) bg_sctrl_middle_pane_g3

0x321a,	// (0x0000321a) bg_sctrl_middle_pane_g4

0x3222,	// (0x00003222) bg_sctrl_middle_pane_g5

0x322a,	// (0x0000322a) bg_sctrl_middle_pane_g6

0x3232,	// (0x00003232) bg_sctrl_middle_pane_g7

0x323a,	// (0x0000323a) bg_sctrl_middle_pane_g8

0x0007,

0xa2df,	// (0x0000a2df) bg_sctrl_middle_pane_g

0x3242,	// (0x00003242) bg_sctrl_middle_pane_g8_copy1

0x3202,	// (0x00003202) bg_sctrl_sk_pane_g1

0x320a,	// (0x0000320a) bg_sctrl_sk_pane_g2

0x3212,	// (0x00003212) bg_sctrl_sk_pane_g3

0x0008,

0x9e63,	// (0x00009e63) bg_sctrl_sk_pane_g

0x0bfb,	// (0x00000bfb) aid_size_touch_scroll_bar

0x321a,	// (0x0000321a) bg_sctrl_sk_pane_g4

0x3222,	// (0x00003222) bg_sctrl_sk_pane_g5

0x322a,	// (0x0000322a) bg_sctrl_sk_pane_g6

0x3232,	// (0x00003232) bg_sctrl_sk_pane_g7

0x323a,	// (0x0000323a) bg_sctrl_sk_pane_g8

0x3242,	// (0x00003242) bg_sctrl_sk_pane_g9

0x28d2,	// (0x000028d2) popup_fep_china_hwr2_fs_candidate_window

0xb434,	// (0x0000b434) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb434,	// (0x0000b434) popup_fep_china_hwr2_fs_control_window

0x6097,	// (0x00006097) sctrl_sk_top_pane_g2

0x0001,

0xa2d5,	// (0x0000a2d5) sctrl_sk_top_pane_g

0xce7a,	// (0x0000ce7a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce7a,	// (0x0000ce7a) aid_fep_china_hwr2_fs_cell

0xce8e,	// (0x0000ce8e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce8e,	// (0x0000ce8e) bg_popup_fep_shadow_pane_cp4

0xcea5,	// (0x0000cea5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcea5,	// (0x0000cea5) bg_popup_fep_shadow_pane_cp5

0xceb7,	// (0x0000ceb7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xceb7,	// (0x0000ceb7) popup_fep_china_hwr2_fs_control_bar_grid

0xcecb,	// (0x0000cecb) popup_fep_china_hwr2_fs_control_funtion_grid

0x7a5d,	// (0x00007a5d) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7a67,	// (0x00007a67) popup_fep_china_hwr2_fs_candidate_grid

0xced3,	// (0x0000ced3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xced3,	// (0x0000ced3) cell_fep_china_hwr2_fs_funtion_grid

0x5c57,	// (0x00005c57) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7a87,	// (0x00007a87) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7a87,	// (0x00007a87) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7a95,	// (0x00007a95) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7a95,	// (0x00007a95) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xa2f0,	// (0x0000a2f0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xa2f0,	// (0x0000a2f0) cell_fep_china_hwr2_fs_funtion_grid_g

0xceeb,	// (0x0000ceeb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xceeb,	// (0x0000ceeb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf00,	// (0x0000cf00) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf00,	// (0x0000cf00) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xe2d7,	// (0x0000e2d7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xe2d7,	// (0x0000e2d7) cell_fep_china_hwr2_fs_funtion_grid_t

0x7adc,	// (0x00007adc) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7ae4,	// (0x00007ae4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7aec,	// (0x00007aec) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xa2fa,	// (0x0000a2fa) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7af4,	// (0x00007af4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7af4,	// (0x00007af4) cell_fep_china_hwr2_fs_candidate_grid

0x7b0d,	// (0x00007b0d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7b15,	// (0x00007b15) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5c57,	// (0x00005c57) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5c57,	// (0x00005c57) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa126,	// (0x0000a126) cell_fep_china_hwr2_fs_candidate_grid_g

0x7b1d,	// (0x00007b1d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2daf,	// (0x00002daf) clock_nsta_pane_cp_24_ParamLimits

0x2daf,	// (0x00002daf) clock_nsta_pane_cp_24

0x2e22,	// (0x00002e22) indicator_nsta_pane_cp_24_ParamLimits

0x2e22,	// (0x00002e22) indicator_nsta_pane_cp_24

0x40e5,	// (0x000040e5) heading_pane_g1

0x0001,

0x9ec8,	// (0x00009ec8) heading_pane_g

0xc39b,	// (0x0000c39b) grid_sct_catagory_button_pane

0x4c32,	// (0x00004c32) scroll_pane_cp5_ParamLimits

0x58bc,	// (0x000058bc) button_value_adjust_pane_cp5_ParamLimits

0x58bc,	// (0x000058bc) button_value_adjust_pane_cp5

0x59b2,	// (0x000059b2) form2_midp_time_pane_ParamLimits

0x7b2b,	// (0x00007b2b) cell_sct_catagory_button_pane_ParamLimits

0x7b2b,	// (0x00007b2b) cell_sct_catagory_button_pane

0x5c1c,	// (0x00005c1c) bg_button_pane_cp01_ParamLimits

0x5c1c,	// (0x00005c1c) bg_button_pane_cp01

0x5c57,	// (0x00005c57) cell_sct_catagory_button_pane_g1

0xb8a8,	// (0x0000b8a8) popup_tb_extension_window

0xcf1c,	// (0x0000cf1c) aid_size_cell_ext_ParamLimits

0xcf1c,	// (0x0000cf1c) aid_size_cell_ext

0x0ad9,	// (0x00000ad9) bg_tb_trans_pane_cp1_ParamLimits

0x0ad9,	// (0x00000ad9) bg_tb_trans_pane_cp1

0xcf42,	// (0x0000cf42) grid_tb_ext_pane_ParamLimits

0xcf42,	// (0x0000cf42) grid_tb_ext_pane

0xcf78,	// (0x0000cf78) cell_tb_ext_pane_ParamLimits

0xcf78,	// (0x0000cf78) cell_tb_ext_pane

0xcf9c,	// (0x0000cf9c) cell_tb_ext_pane_g1_ParamLimits

0xcf9c,	// (0x0000cf9c) cell_tb_ext_pane_g1

0x7bb5,	// (0x00007bb5) cell_tb_ext_pane_t1

0x07a5,	// (0x000007a5) list_highlight_pane_cp11_ParamLimits

0x07a5,	// (0x000007a5) list_highlight_pane_cp11

0x02f7,	// (0x000002f7) popup_uni_indicator_window_ParamLimits

0x02f7,	// (0x000002f7) popup_uni_indicator_window

0x11e8,	// (0x000011e8) bg_popup_sub_pane_cp14

0x7bd0,	// (0x00007bd0) list_uniindi_pane

0x7bdc,	// (0x00007bdc) uniindi_top_pane

0x07a5,	// (0x000007a5) bg_uniindi_top_pane

0x7bfb,	// (0x00007bfb) uniindi_top_pane_g1

0x7c11,	// (0x00007c11) uniindi_top_pane_g2

0x0003,

0xa301,	// (0x0000a301) uniindi_top_pane_g

0x7c3b,	// (0x00007c3b) uniindi_top_pane_t1

0x7c65,	// (0x00007c65) list_single_uniindi_pane_ParamLimits

0x7c65,	// (0x00007c65) list_single_uniindi_pane

0x5c57,	// (0x00005c57) bg_uniindi_top_pane_g1

0x7c77,	// (0x00007c77) list_single_uniindi_pane_g1

0x7c8a,	// (0x00007c8a) list_single_uniindi_pane_t1

0x0020,	// (0x00000020) control_bg_pane

0x7caf,	// (0x00007caf) bg_sctrl_sk_pane_cp1

0x7cb8,	// (0x00007cb8) bg_sctrl_sk_pane_cp2

0x7cc1,	// (0x00007cc1) control_bg_pane_g1

0x7cca,	// (0x00007cca) control_bg_pane_g2

0x0001,

0xa30a,	// (0x0000a30a) control_bg_pane_g

0x56f3,	// (0x000056f3) cell_indicator_nsta_pane_g1_ParamLimits

0xc4a6,	// (0x0000c4a6) cell_indicator_nsta_pane_g2_ParamLimits

0xe24f,	// (0x0000e24f) cell_indicator_nsta_pane_g_ParamLimits

0x5a36,	// (0x00005a36) form2_midp_time_pane_t1_ParamLimits

0x5cb2,	// (0x00005cb2) main_idle_act4_pane_ParamLimits

0x5cb2,	// (0x00005cb2) main_idle_act4_pane

0xb8a8,	// (0x0000b8a8) popup_tb_extension_window_ParamLimits

0xcf62,	// (0x0000cf62) tb_ext_find_pane_ParamLimits

0xcf62,	// (0x0000cf62) tb_ext_find_pane

0x7cd3,	// (0x00007cd3) ai_gene_pane_1_cp1

0x240f,	// (0x0000240f) ai_gene_pane_2_cp1

0x7cdb,	// (0x00007cdb) list_single_idle_plugin_calendar_pane

0x7ce4,	// (0x00007ce4) list_single_idle_plugin_notification_pane

0x7ced,	// (0x00007ced) list_single_idle_plugin_player_pane

0xcfb9,	// (0x0000cfb9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcfb9,	// (0x0000cfb9) list_single_idle_plugin_shortcut_pane

0xcfe1,	// (0x0000cfe1) main_idle_act4_pane_t1

0xcff7,	// (0x0000cff7) main_idle_act4_pane_t2

0x0001,

0xe2dc,	// (0x0000e2dc) main_idle_act4_pane_t

0xd00d,	// (0x0000d00d) middle_sk_idle_act4_pane_ParamLimits

0xd00d,	// (0x0000d00d) middle_sk_idle_act4_pane

0xd029,	// (0x0000d029) popup_clock_digital_analogue_window_cp2

0xd04f,	// (0x0000d04f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd04f,	// (0x0000d04f) shortcut_wheel_idle_act4_pane

0x5c57,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g1

0x5c57,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g2

0x5c57,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g3

0x5c57,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g4

0x5c57,	// (0x00005c57) shortcut_wheel_idle_act4_pane_g5

0x7d80,	// (0x00007d80) shortcut_wheel_idle_act4_pane_g6

0x7d88,	// (0x00007d88) shortcut_wheel_idle_act4_pane_g7

0x7d90,	// (0x00007d90) shortcut_wheel_idle_act4_pane_g8

0x7d98,	// (0x00007d98) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xa314,	// (0x0000a314) shortcut_wheel_idle_act4_pane_g

0x5d61,	// (0x00005d61) middle_sk_idle_act4_pane_g1_ParamLimits

0x5d61,	// (0x00005d61) middle_sk_idle_act4_pane_g1

0xd0ca,	// (0x0000d0ca) middle_sk_idle_act4_pane_g2_ParamLimits

0xd0ca,	// (0x0000d0ca) middle_sk_idle_act4_pane_g2

0x0001,

0xe2f1,	// (0x0000e2f1) middle_sk_idle_act4_pane_g_ParamLimits

0xe2f1,	// (0x0000e2f1) middle_sk_idle_act4_pane_g

0xd0e2,	// (0x0000d0e2) middle_sk_idle_act4_pane_t1_ParamLimits

0xd0e2,	// (0x0000d0e2) middle_sk_idle_act4_pane_t1

0xd111,	// (0x0000d111) grid_ai_shortcut_pane_ParamLimits

0xd111,	// (0x0000d111) grid_ai_shortcut_pane

0xd12e,	// (0x0000d12e) list_highlight_pane_cp16_ParamLimits

0xd12e,	// (0x0000d12e) list_highlight_pane_cp16

0xd13b,	// (0x0000d13b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd13b,	// (0x0000d13b) list_single_idle_plugin_shortcut_pane_g1

0xd147,	// (0x0000d147) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd147,	// (0x0000d147) list_single_idle_plugin_shortcut_pane_g2

0xd163,	// (0x0000d163) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd163,	// (0x0000d163) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xe2f6,	// (0x0000e2f6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xe2f6,	// (0x0000e2f6) list_single_idle_plugin_shortcut_pane_g

0xd178,	// (0x0000d178) cell_ai_shortcut_pane_ParamLimits

0xd178,	// (0x0000d178) cell_ai_shortcut_pane

0xd18e,	// (0x0000d18e) cell_ai_shortcut_pane_g1_ParamLimits

0xd18e,	// (0x0000d18e) cell_ai_shortcut_pane_g1

0x7cd3,	// (0x00007cd3) ai_gene_pane_1_cp2

0x7ec5,	// (0x00007ec5) ai_gene_pane_2_cp2

0x7ecd,	// (0x00007ecd) list_highlight_pane_cp15

0x7ed6,	// (0x00007ed6) list_single_idle_plugin_calendar_pane_g1

0x7ecd,	// (0x00007ecd) list_highlight_pane_cp17

0x7ede,	// (0x00007ede) list_single_idle_plugin_calendar_pane_g1_copy1

0x7ee6,	// (0x00007ee6) list_single_idle_plugin_player_pane_g1

0x4eb8,	// (0x00004eb8) list_single_idle_plugin_player_pane_g2

0x0001,

0xa343,	// (0x0000a343) list_single_idle_plugin_player_pane_g

0x7eee,	// (0x00007eee) list_single_idle_plugin_player_pane_t1

0x7efc,	// (0x00007efc) list_single_idle_plugin_player_pane_t2

0x7f0a,	// (0x00007f0a) list_single_idle_plugin_player_pane_t3

0x7f18,	// (0x00007f18) list_single_idle_plugin_player_pane_t4

0x0003,

0xa348,	// (0x0000a348) list_single_idle_plugin_player_pane_t

0x7f26,	// (0x00007f26) wait_bar_pane_cp15

0x7f2e,	// (0x00007f2e) grid_ai_notification_pane

0x4eb8,	// (0x00004eb8) list_single_idle_plugin_notification_pane_g1

0xd1b0,	// (0x0000d1b0) cell_ai_notification_pane_ParamLimits

0xd1b0,	// (0x0000d1b0) cell_ai_notification_pane

0x7f44,	// (0x00007f44) cell_ai_notification_pane_g1

0x7f4c,	// (0x00007f4c) cell_ai_notification_pane_t1

0xd1bd,	// (0x0000d1bd) tb_ext_find_button_pane

0xd1c5,	// (0x0000d1c5) tb_ext_find_pane_g1

0xd1cd,	// (0x0000d1cd) tb_ext_find_pane_t1

0x1b09,	// (0x00001b09) tb_ext_find_button_pane_g1

0x7f78,	// (0x00007f78) tb_ext_find_button_pane_g2

0x0001,

0xa351,	// (0x0000a351) tb_ext_find_button_pane_g

0xcfe1,	// (0x0000cfe1) main_idle_act4_pane_t1_ParamLimits

0xcff7,	// (0x0000cff7) main_idle_act4_pane_t2_ParamLimits

0xe2dc,	// (0x0000e2dc) main_idle_act4_pane_t_ParamLimits

0xd029,	// (0x0000d029) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd03f,	// (0x0000d03f) sat_plugin_idle_act4_pane_ParamLimits

0xd03f,	// (0x0000d03f) sat_plugin_idle_act4_pane

0xd1db,	// (0x0000d1db) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd1db,	// (0x0000d1db) sat_plugin_idle_act4_pane_t1

0xd1f3,	// (0x0000d1f3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd1f3,	// (0x0000d1f3) sat_plugin_idle_act4_pane_t2

0xd20b,	// (0x0000d20b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd20b,	// (0x0000d20b) sat_plugin_idle_act4_pane_t3

0xd223,	// (0x0000d223) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd223,	// (0x0000d223) sat_plugin_idle_act4_pane_t4

0x0003,

0xe2fd,	// (0x0000e2fd) sat_plugin_idle_act4_pane_t_ParamLimits

0xe2fd,	// (0x0000e2fd) sat_plugin_idle_act4_pane_t

0x0258,	// (0x00000258) popup_battery_window_ParamLimits

0x0258,	// (0x00000258) popup_battery_window

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25_ParamLimits

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25

0x7fcd,	// (0x00007fcd) popup_battery_window_g1_ParamLimits

0x7fcd,	// (0x00007fcd) popup_battery_window_g1

0x7fd9,	// (0x00007fd9) popup_battery_window_t1_ParamLimits

0x7fd9,	// (0x00007fd9) popup_battery_window_t1

0x7feb,	// (0x00007feb) popup_battery_window_t2_ParamLimits

0x7feb,	// (0x00007feb) popup_battery_window_t2

0x0001,

0xa35f,	// (0x0000a35f) popup_battery_window_t_ParamLimits

0xa35f,	// (0x0000a35f) popup_battery_window_t

0xb1a8,	// (0x0000b1a8) midp_canvas_pane_ParamLimits

0xb1fd,	// (0x0000b1fd) midp_keypad_pane_ParamLimits

0xb1fd,	// (0x0000b1fd) midp_keypad_pane

0x2834,	// (0x00002834) main_midp_pane_ParamLimits

0x574d,	// (0x0000574d) signal_pane_g2_cp_ParamLimits

0xd23b,	// (0x0000d23b) aid_size_cell_midp_keypad_ParamLimits

0xd23b,	// (0x0000d23b) aid_size_cell_midp_keypad

0xd259,	// (0x0000d259) midp_keyp_game_grid_pane_ParamLimits

0xd259,	// (0x0000d259) midp_keyp_game_grid_pane

0xd278,	// (0x0000d278) midp_keyp_rocker_pane_ParamLimits

0xd278,	// (0x0000d278) midp_keyp_rocker_pane

0xd2b9,	// (0x0000d2b9) midp_keyp_sk_left_pane_ParamLimits

0xd2b9,	// (0x0000d2b9) midp_keyp_sk_left_pane

0xd30b,	// (0x0000d30b) midp_keyp_sk_right_pane_ParamLimits

0xd30b,	// (0x0000d30b) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xd357,	// (0x0000d357) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xd357,	// (0x0000d357) midp_keyp_sk_right_pane_g1

0x5c57,	// (0x00005c57) midp_keyp_rocker_pane_g1

0xd360,	// (0x0000d360) keyp_game_cell_pane_ParamLimits

0xd360,	// (0x0000d360) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xd382,	// (0x0000d382) keyp_game_cell_pane_g1

0xa5a6,	// (0x0000a5a6) popup_fep_vkb2_window_ParamLimits

0xa5a6,	// (0x0000a5a6) popup_fep_vkb2_window

0xd38b,	// (0x0000d38b) aid_size_cell_vkb2_ParamLimits

0xd38b,	// (0x0000d38b) aid_size_cell_vkb2

0xd3c1,	// (0x0000d3c1) popup_fep_vkb2_window_g1_ParamLimits

0xd3c1,	// (0x0000d3c1) popup_fep_vkb2_window_g1

0xd411,	// (0x0000d411) vkb2_area_bottom_pane_ParamLimits

0xd411,	// (0x0000d411) vkb2_area_bottom_pane

0xd44f,	// (0x0000d44f) vkb2_area_keypad_pane_ParamLimits

0xd44f,	// (0x0000d44f) vkb2_area_keypad_pane

0xd48d,	// (0x0000d48d) vkb2_area_top_pane_ParamLimits

0xd48d,	// (0x0000d48d) vkb2_area_top_pane

0xd509,	// (0x0000d509) vkb2_top_entry_pane_ParamLimits

0xd509,	// (0x0000d509) vkb2_top_entry_pane

0xd536,	// (0x0000d536) vkb2_top_grid_left_pane_ParamLimits

0xd536,	// (0x0000d536) vkb2_top_grid_left_pane

0xd556,	// (0x0000d556) vkb2_top_grid_right_pane_ParamLimits

0xd556,	// (0x0000d556) vkb2_top_grid_right_pane

0x8326,	// (0x00008326) vkb2_cell_keypad_pane_ParamLimits

0x8326,	// (0x00008326) vkb2_cell_keypad_pane

0xd59c,	// (0x0000d59c) vkb2_area_bottom_grid_pane_ParamLimits

0xd59c,	// (0x0000d59c) vkb2_area_bottom_grid_pane

0xd5c2,	// (0x0000d5c2) vkb2_area_bottom_pane_g1_ParamLimits

0xd5c2,	// (0x0000d5c2) vkb2_area_bottom_pane_g1

0xd5e8,	// (0x0000d5e8) vkb2_area_bottom_pane_g2_ParamLimits

0xd5e8,	// (0x0000d5e8) vkb2_area_bottom_pane_g2

0xd619,	// (0x0000d619) vkb2_area_bottom_pane_g3_ParamLimits

0xd619,	// (0x0000d619) vkb2_area_bottom_pane_g3

0x0002,

0xe306,	// (0x0000e306) vkb2_area_bottom_pane_g_ParamLimits

0xe306,	// (0x0000e306) vkb2_area_bottom_pane_g

0x849e,	// (0x0000849e) vkb2_top_cell_left_pane_ParamLimits

0x849e,	// (0x0000849e) vkb2_top_cell_left_pane

0xd66f,	// (0x0000d66f) vkb2_top_entry_pane_g1_ParamLimits

0xd66f,	// (0x0000d66f) vkb2_top_entry_pane_g1

0xd67d,	// (0x0000d67d) vkb2_top_entry_pane_t1_ParamLimits

0xd67d,	// (0x0000d67d) vkb2_top_entry_pane_t1

0x8506,	// (0x00008506) vkb2_top_entry_pane_t2_ParamLimits

0x8506,	// (0x00008506) vkb2_top_entry_pane_t2

0x8538,	// (0x00008538) vkb2_top_entry_pane_t3_ParamLimits

0x8538,	// (0x00008538) vkb2_top_entry_pane_t3

0x0002,

0xe30d,	// (0x0000e30d) vkb2_top_entry_pane_t_ParamLimits

0xe30d,	// (0x0000e30d) vkb2_top_entry_pane_t

0xd6b6,	// (0x0000d6b6) vkb2_top_grid_right_pane_g1_ParamLimits

0xd6b6,	// (0x0000d6b6) vkb2_top_grid_right_pane_g1

0x8591,	// (0x00008591) vkb2_top_grid_right_pane_g2_ParamLimits

0x8591,	// (0x00008591) vkb2_top_grid_right_pane_g2

0x85a9,	// (0x000085a9) vkb2_top_grid_right_pane_g3_ParamLimits

0x85a9,	// (0x000085a9) vkb2_top_grid_right_pane_g3

0xd6cc,	// (0x0000d6cc) vkb2_top_grid_right_pane_g4_ParamLimits

0xd6cc,	// (0x0000d6cc) vkb2_top_grid_right_pane_g4

0x0003,

0xe314,	// (0x0000e314) vkb2_top_grid_right_pane_g_ParamLimits

0xe314,	// (0x0000e314) vkb2_top_grid_right_pane_g

0x85d7,	// (0x000085d7) vkb2_top_cell_left_pane_g1

0x85ee,	// (0x000085ee) vkb2_cell_keypad_pane_g1_ParamLimits

0x85ee,	// (0x000085ee) vkb2_cell_keypad_pane_g1

0x85fc,	// (0x000085fc) vkb2_cell_keypad_pane_t1_ParamLimits

0x85fc,	// (0x000085fc) vkb2_cell_keypad_pane_t1

0x8613,	// (0x00008613) vkb2_cell_bottom_grid_pane_ParamLimits

0x8613,	// (0x00008613) vkb2_cell_bottom_grid_pane

0x864c,	// (0x0000864c) vkb2_cell_bottom_grid_pane_g1

0xd06e,	// (0x0000d06e) aid_call2_pane_cp02

0xd076,	// (0x0000d076) aid_call_pane_cp02

0xd07e,	// (0x0000d07e) clock_digital_number_pane_cp10

0xd086,	// (0x0000d086) clock_digital_number_pane_cp11

0xd08e,	// (0x0000d08e) clock_digital_number_pane_cp12

0xd096,	// (0x0000d096) clock_digital_number_pane_cp13

0xd09e,	// (0x0000d09e) clock_digital_separator_pane_cp10

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g1

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g2

0xd0a6,	// (0x0000d0a6) popup_clock_digital_analogue_window_cp2_g3

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g4

0xd0a6,	// (0x0000d0a6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xe2e1,	// (0x0000e2e1) popup_clock_digital_analogue_window_cp2_g

0xd0ae,	// (0x0000d0ae) popup_clock_digital_analogue_window_cp2_t1

0xd0bc,	// (0x0000d0bc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xe2ec,	// (0x0000e2ec) popup_clock_digital_analogue_window_cp2_t

0x5c57,	// (0x00005c57) clock_digital_number_pane_cp10_g1

0x5c57,	// (0x00005c57) clock_digital_number_pane_cp10_g2

0x0001,

0xa126,	// (0x0000a126) clock_digital_number_pane_cp10_g

0x5c57,	// (0x00005c57) clock_digital_separator_pane_cp10_g1

0x5c57,	// (0x00005c57) clock_digital_separator_pane_cp10_g2

0x0001,

0xa126,	// (0x0000a126) clock_digital_separator_pane_cp10_g

0x7c1d,	// (0x00007c1d) uniindi_top_pane_g3

0x7c2e,	// (0x00007c2e) uniindi_top_pane_g4

0x8391,	// (0x00008391) vkb2_row_keypad_pane_ParamLimits

0x8391,	// (0x00008391) vkb2_row_keypad_pane

0x8668,	// (0x00008668) vkb2_cell_t_keypad_pane_ParamLimits

0x8668,	// (0x00008668) vkb2_cell_t_keypad_pane

0x8675,	// (0x00008675) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8675,	// (0x00008675) vkb2_cell_t_keypad_pane_cp08

0x8685,	// (0x00008685) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8685,	// (0x00008685) vkb2_cell_t_keypad_pane_cp09

0x8696,	// (0x00008696) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8696,	// (0x00008696) vkb2_cell_t_keypad_pane_cp01

0x86a6,	// (0x000086a6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x86a6,	// (0x000086a6) vkb2_cell_t_keypad_pane_cp02

0x86b6,	// (0x000086b6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x86b6,	// (0x000086b6) vkb2_cell_t_keypad_pane_cp03

0x86c6,	// (0x000086c6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x86c6,	// (0x000086c6) vkb2_cell_t_keypad_pane_cp04

0x86d6,	// (0x000086d6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x86d6,	// (0x000086d6) vkb2_cell_t_keypad_pane_cp05

0x86e6,	// (0x000086e6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x86e6,	// (0x000086e6) vkb2_cell_t_keypad_pane_cp06

0x86f6,	// (0x000086f6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x86f6,	// (0x000086f6) vkb2_cell_t_keypad_pane_cp07

0x8706,	// (0x00008706) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8706,	// (0x00008706) vkb2_cell_t_keypad_pane_cp10

0x6097,	// (0x00006097) vkb2_cell_t_keypad_pane_g1

0x871b,	// (0x0000871b) vkb2_cell_t_keypad_pane_t1

0x0020,	// (0x00000020) popup_grid_graphic2_window

0xd6e2,	// (0x0000d6e2) aid_size_cell_graphic2_ParamLimits

0xd6e2,	// (0x0000d6e2) aid_size_cell_graphic2

0x3978,	// (0x00003978) bg_popup_window_pane_cp21_ParamLimits

0x3978,	// (0x00003978) bg_popup_window_pane_cp21

0xd714,	// (0x0000d714) graphic2_pages_pane_ParamLimits

0xd714,	// (0x0000d714) graphic2_pages_pane

0xd75d,	// (0x0000d75d) grid_graphic2_control_pane_ParamLimits

0xd75d,	// (0x0000d75d) grid_graphic2_control_pane

0xd78b,	// (0x0000d78b) grid_graphic2_pane_ParamLimits

0xd78b,	// (0x0000d78b) grid_graphic2_pane

0xd7ea,	// (0x0000d7ea) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x73e8,	// (0x000073e8) list_ai3_gene_pane_ParamLimits

0xcd5a,	// (0x0000cd5a) bg_popup_window_pane_cp19_ParamLimits

0x77b5,	// (0x000077b5) bg_touch_area_indi_pane_ParamLimits

0x77b5,	// (0x000077b5) bg_touch_area_indi_pane

0x77cb,	// (0x000077cb) bg_touch_area_indi_pane_cp01_ParamLimits

0x77cb,	// (0x000077cb) bg_touch_area_indi_pane_cp01

0x77e1,	// (0x000077e1) bg_touch_area_indi_pane_cp02_ParamLimits

0x77e1,	// (0x000077e1) bg_touch_area_indi_pane_cp02

0x77f7,	// (0x000077f7) bg_touch_area_indi_pane_cp03_ParamLimits

0x77f7,	// (0x000077f7) bg_touch_area_indi_pane_cp03

0x780d,	// (0x0000780d) popup_slider_window_g1_ParamLimits

0x7829,	// (0x00007829) popup_slider_window_g2_ParamLimits

0x7845,	// (0x00007845) popup_slider_window_g3_ParamLimits

0xe2c5,	// (0x0000e2c5) popup_slider_window_g_ParamLimits

0x78a1,	// (0x000078a1) popup_slider_window_t1_ParamLimits

0x7913,	// (0x00007913) small_volume_slider_vertical_pane_ParamLimits

0xd7ea,	// (0x0000d7ea) cell_graphic2_pane_ParamLimits

0xd833,	// (0x0000d833) bg_button_pane_cp10_ParamLimits

0xd833,	// (0x0000d833) bg_button_pane_cp10

0xd844,	// (0x0000d844) bg_button_pane_cp11_ParamLimits

0xd844,	// (0x0000d844) bg_button_pane_cp11

0xd855,	// (0x0000d855) graphic2_pages_pane_g1_ParamLimits

0xd855,	// (0x0000d855) graphic2_pages_pane_g1

0xd870,	// (0x0000d870) graphic2_pages_pane_g2_ParamLimits

0xd870,	// (0x0000d870) graphic2_pages_pane_g2

0x0001,

0xe322,	// (0x0000e322) graphic2_pages_pane_g_ParamLimits

0xe322,	// (0x0000e322) graphic2_pages_pane_g

0xd888,	// (0x0000d888) graphic2_pages_pane_t1_ParamLimits

0xd888,	// (0x0000d888) graphic2_pages_pane_t1

0xd8a0,	// (0x0000d8a0) cell_graphic2_control_pane_ParamLimits

0xd8a0,	// (0x0000d8a0) cell_graphic2_control_pane

0xd8ba,	// (0x0000d8ba) cell_graphic2_pane_g1_ParamLimits

0xd8ba,	// (0x0000d8ba) cell_graphic2_pane_g1

0x5ef4,	// (0x00005ef4) cell_graphic2_pane_g2_ParamLimits

0x5ef4,	// (0x00005ef4) cell_graphic2_pane_g2

0xd8c7,	// (0x0000d8c7) cell_graphic2_pane_g3_ParamLimits

0xd8c7,	// (0x0000d8c7) cell_graphic2_pane_g3

0x5f01,	// (0x00005f01) cell_graphic2_pane_g4_ParamLimits

0x5f01,	// (0x00005f01) cell_graphic2_pane_g4

0xd8d4,	// (0x0000d8d4) cell_graphic2_pane_g5_ParamLimits

0xd8d4,	// (0x0000d8d4) cell_graphic2_pane_g5

0x0004,

0xe327,	// (0x0000e327) cell_graphic2_pane_g_ParamLimits

0xe327,	// (0x0000e327) cell_graphic2_pane_g

0xd8f4,	// (0x0000d8f4) cell_graphic2_pane_t1_ParamLimits

0xd8f4,	// (0x0000d8f4) cell_graphic2_pane_t1

0x40d9,	// (0x000040d9) grid_highlight_pane_cp11_ParamLimits

0x40d9,	// (0x000040d9) grid_highlight_pane_cp11

0x11e8,	// (0x000011e8) bg_button_pane_cp05

0xd90b,	// (0x0000d90b) cell_graphic2_control_pane_g1

0x5c57,	// (0x00005c57) bg_touch_area_indi_pane_g1

0x8935,	// (0x00008935) aid_cmod_rocker_key_size

0x893f,	// (0x0000893f) aid_cmode_itu_key_size

0x8949,	// (0x00008949) main_cmode_video_pane

0x8951,	// (0x00008951) main_comp_mode_itu_pane

0x895b,	// (0x0000895b) main_comp_mode_rocker_pane

0x8963,	// (0x00008963) cell_cmode_rocker_pane_ParamLimits

0x8963,	// (0x00008963) cell_cmode_rocker_pane

0x8975,	// (0x00008975) cell_cmode_itu_pane_ParamLimits

0x8975,	// (0x00008975) cell_cmode_itu_pane

0x11e8,	// (0x000011e8) bg_button_pane_cp06_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane_cp06

0x6097,	// (0x00006097) cell_cmode_rocker_pane_g1_ParamLimits

0x6097,	// (0x00006097) cell_cmode_rocker_pane_g1

0x7a87,	// (0x00007a87) cell_cmode_rocker_pane_g2_ParamLimits

0x7a87,	// (0x00007a87) cell_cmode_rocker_pane_g2

0x0001,

0xa390,	// (0x0000a390) cell_cmode_rocker_pane_g_ParamLimits

0xa390,	// (0x0000a390) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x898a,	// (0x0000898a) cell_cmode_itu_pane_g1

0x8993,	// (0x00008993) cell_cmode_itu_pane_t1

0x89a1,	// (0x000089a1) cell_cmode_itu_pane_t2

0x0001,

0xa395,	// (0x0000a395) cell_cmode_itu_pane_t

0x7c9f,	// (0x00007c9f) aid_touch_ctrl_left

0x7ca7,	// (0x00007ca7) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xd918,	// (0x0000d918) aid_cmod_rocker_key_size_cp

0xd922,	// (0x0000d922) aid_cmode_itu_key_size_cp

0x89c3,	// (0x000089c3) compa_mode_pane_g1

0x89cb,	// (0x000089cb) compa_mode_pane_g2

0x89d3,	// (0x000089d3) compa_mode_pane_g3

0x0002,

0xa39a,	// (0x0000a39a) compa_mode_pane_g

0xd92c,	// (0x0000d92c) main_comp_mode_itu_pane_cp

0xd936,	// (0x0000d936) main_comp_mode_rocker_pane_cp

0xd940,	// (0x0000d940) cell_cmode_itu_pane_cp_ParamLimits

0xd940,	// (0x0000d940) cell_cmode_itu_pane_cp

0xd955,	// (0x0000d955) cell_cmode_rocker_pane_cp_ParamLimits

0xd955,	// (0x0000d955) cell_cmode_rocker_pane_cp

0x11e8,	// (0x000011e8) bg_button_pane_cp06_cp_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane_cp06_cp

0x6097,	// (0x00006097) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6097,	// (0x00006097) cell_cmode_rocker_pane_g1_cp

0x5c57,	// (0x00005c57) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xd967,	// (0x0000d967) cell_cmode_itu_pane_g1_cp

0xd970,	// (0x0000d970) cell_cmode_itu_pane_t1_cp

0xd97e,	// (0x0000d97e) cell_cmode_itu_pane_t2_cp

0xc274,	// (0x0000c274) settings_code_pane_cp2

0x0474,	// (0x00000474) bg_popup_window_pane_cp3_ParamLimits

0x097d,	// (0x0000097d) heading_pane_cp3_ParamLimits

0x0989,	// (0x00000989) listscroll_popup_graphic_pane_ParamLimits

0x5cc0,	// (0x00005cc0) fep_hwr_aid_pane_ParamLimits

0x798b,	// (0x0000798b) aid_touch_sctrl_top_ParamLimits

0x7998,	// (0x00007998) sctrl_sk_top_pane_g1_ParamLimits

0x6097,	// (0x00006097) sctrl_sk_top_pane_g2_ParamLimits

0xa2d5,	// (0x0000a2d5) sctrl_sk_top_pane_g_ParamLimits

0x79a5,	// (0x000079a5) sctrl_sk_top_pane_t1_ParamLimits

0x798b,	// (0x0000798b) aid_touch_sctrl_bottom_ParamLimits

0x79a5,	// (0x000079a5) sctrl_sk_bottom_pane_t1_ParamLimits

0x7be9,	// (0x00007be9) aid_area_touch_clock

0xd4cb,	// (0x0000d4cb) aid_vkb2_area_top_pane_cell_ParamLimits

0xd4cb,	// (0x0000d4cb) aid_vkb2_area_top_pane_cell

0xd576,	// (0x0000d576) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd576,	// (0x0000d576) aid_vkb2_area_bottom_pane_cell

0x84be,	// (0x000084be) popup_char_count_window

0x8a37,	// (0x00008a37) popup_char_count_window_g1

0x8a40,	// (0x00008a40) popup_char_count_window_g2

0x8a49,	// (0x00008a49) popup_char_count_window_g3

0x0002,

0xa3a1,	// (0x0000a3a1) popup_char_count_window_g

0x8a52,	// (0x00008a52) popup_char_count_window_t1

0x8176,	// (0x00008176) popup_fep_char_preview_window_ParamLimits

0x8176,	// (0x00008176) popup_fep_char_preview_window

0xd4eb,	// (0x0000d4eb) vkb2_top_candi_pane_ParamLimits

0xd4eb,	// (0x0000d4eb) vkb2_top_candi_pane

0xd98c,	// (0x0000d98c) cell_vkb2_top_candi_pane_ParamLimits

0xd98c,	// (0x0000d98c) cell_vkb2_top_candi_pane

0x3978,	// (0x00003978) bg_popup_fep_char_preview_window_ParamLimits

0x3978,	// (0x00003978) bg_popup_fep_char_preview_window

0x8a99,	// (0x00008a99) popup_fep_char_preview_window_t1_ParamLimits

0x8a99,	// (0x00008a99) popup_fep_char_preview_window_t1

0x8ad3,	// (0x00008ad3) bg_popup_fep_char_preview_window_g1

0x8adb,	// (0x00008adb) bg_popup_fep_char_preview_window_g2

0x8ae3,	// (0x00008ae3) bg_popup_fep_char_preview_window_g3

0x8aeb,	// (0x00008aeb) bg_popup_fep_char_preview_window_g4

0x8af3,	// (0x00008af3) bg_popup_fep_char_preview_window_g5

0x8afb,	// (0x00008afb) bg_popup_fep_char_preview_window_g6

0x8b03,	// (0x00008b03) bg_popup_fep_char_preview_window_g7

0x8b0b,	// (0x00008b0b) bg_popup_fep_char_preview_window_g8

0x8b13,	// (0x00008b13) bg_popup_fep_char_preview_window_g9

0x0008,

0xa3a8,	// (0x0000a3a8) bg_popup_fep_char_preview_window_g

0x6097,	// (0x00006097) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6097,	// (0x00006097) cell_vkb2_top_candi_pane_g1

0x63ee,	// (0x000063ee) cell_vkb2_top_candi_pane_g2_ParamLimits

0x63ee,	// (0x000063ee) cell_vkb2_top_candi_pane_g2

0x640f,	// (0x0000640f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x640f,	// (0x0000640f) cell_vkb2_top_candi_pane_g3

0x8b1b,	// (0x00008b1b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8b1b,	// (0x00008b1b) cell_vkb2_top_candi_pane_g4

0x8b3c,	// (0x00008b3c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8b3c,	// (0x00008b3c) cell_vkb2_top_candi_pane_g5

0x7a87,	// (0x00007a87) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7a87,	// (0x00007a87) cell_vkb2_top_candi_pane_g6

0x0005,

0xa3bb,	// (0x0000a3bb) cell_vkb2_top_candi_pane_g_ParamLimits

0xa3bb,	// (0x0000a3bb) cell_vkb2_top_candi_pane_g

0x8b5d,	// (0x00008b5d) cell_vkb2_top_candi_pane_t1

0x47c5,	// (0x000047c5) aid_size_touch_slider_mark_ParamLimits

0x47c5,	// (0x000047c5) aid_size_touch_slider_mark

0xd748,	// (0x0000d748) grid_graphic2_catg_pane_ParamLimits

0xd748,	// (0x0000d748) grid_graphic2_catg_pane

0xd7bf,	// (0x0000d7bf) popup_grid_graphic2_window_t1_ParamLimits

0xd7bf,	// (0x0000d7bf) popup_grid_graphic2_window_t1

0xd7d4,	// (0x0000d7d4) popup_grid_graphic2_window_t2_ParamLimits

0xd7d4,	// (0x0000d7d4) popup_grid_graphic2_window_t2

0x0001,

0xe31d,	// (0x0000e31d) popup_grid_graphic2_window_t_ParamLimits

0xe31d,	// (0x0000e31d) popup_grid_graphic2_window_t

0x11e8,	// (0x000011e8) bg_button_pane_cp05_ParamLimits

0xd90b,	// (0x0000d90b) cell_graphic2_control_pane_g1_ParamLimits

0x7c65,	// (0x00007c65) cell_graphic2_catg_pane_ParamLimits

0x7c65,	// (0x00007c65) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xd9d6,	// (0x0000d9d6) cell_graphic2_catg_pane_g1

0x7bb5,	// (0x00007bb5) cell_tb_ext_pane_t1_ParamLimits

0x854e,	// (0x0000854e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x854e,	// (0x0000854e) vkb2_top_cell_right_narrow_pane

0x8566,	// (0x00008566) vkb2_top_cell_right_wide_pane_ParamLimits

0x8566,	// (0x00008566) vkb2_top_cell_right_wide_pane

0x5cb2,	// (0x00005cb2) bg_vkb2_func_pane_ParamLimits

0x5cb2,	// (0x00005cb2) bg_vkb2_func_pane

0x85d7,	// (0x000085d7) vkb2_top_cell_left_pane_g1_ParamLimits

0x5cb2,	// (0x00005cb2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5cb2,	// (0x00005cb2) bg_vkb2_fuc_pane_cp03

0x864c,	// (0x0000864c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x320a,	// (0x0000320a) bg_vkb2_func_pane_g1

0x3212,	// (0x00003212) bg_vkb2_func_pane_g2

0x3222,	// (0x00003222) bg_vkb2_func_pane_g3

0x321a,	// (0x0000321a) bg_vkb2_func_pane_g4

0x322a,	// (0x0000322a) bg_vkb2_func_pane_g5

0x3232,	// (0x00003232) bg_vkb2_func_pane_g6

0x323a,	// (0x0000323a) bg_vkb2_func_pane_g7

0x3242,	// (0x00003242) bg_vkb2_func_pane_g8

0x3202,	// (0x00003202) bg_vkb2_func_pane_g9

0x0008,

0xa3c8,	// (0x0000a3c8) bg_vkb2_func_pane_g

0x5cb2,	// (0x00005cb2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5cb2,	// (0x00005cb2) bg_vkb2_fuc_pane_cp01

0x85d7,	// (0x000085d7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x85d7,	// (0x000085d7) vkb2_top_cell_right_wide_pane_g1

0x5cb2,	// (0x00005cb2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5cb2,	// (0x00005cb2) bg_vkb2_fuc_pane_cp02

0x864c,	// (0x0000864c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x864c,	// (0x0000864c) vkb2_top_cell_right_narrow_pane_g1

0xcca8,	// (0x0000cca8) aid_touch_area_decrease_ParamLimits

0xcca8,	// (0x0000cca8) aid_touch_area_decrease

0xccd6,	// (0x0000ccd6) aid_touch_area_increase_ParamLimits

0xccd6,	// (0x0000ccd6) aid_touch_area_increase

0xccfe,	// (0x0000ccfe) aid_touch_area_mute_ParamLimits

0xccfe,	// (0x0000ccfe) aid_touch_area_mute

0xcd26,	// (0x0000cd26) aid_touch_area_slider_ParamLimits

0xcd26,	// (0x0000cd26) aid_touch_area_slider

0xcd66,	// (0x0000cd66) popup_slider_window_g4_ParamLimits

0xcd66,	// (0x0000cd66) popup_slider_window_g4

0xcd8e,	// (0x0000cd8e) popup_slider_window_g5_ParamLimits

0xcd8e,	// (0x0000cd8e) popup_slider_window_g5

0xcdc2,	// (0x0000cdc2) popup_slider_window_g6_ParamLimits

0xcdc2,	// (0x0000cdc2) popup_slider_window_g6

0x78cd,	// (0x000078cd) popup_slider_window_t2_ParamLimits

0x78cd,	// (0x000078cd) popup_slider_window_t2

0x0001,

0xa2c9,	// (0x0000a2c9) popup_slider_window_t_ParamLimits

0xa2c9,	// (0x0000a2c9) popup_slider_window_t

0xcdde,	// (0x0000cdde) slider_pane_ParamLimits

0xcdde,	// (0x0000cdde) slider_pane

0x8b8e,	// (0x00008b8e) slider_pane_g1_ParamLimits

0x8b8e,	// (0x00008b8e) slider_pane_g1

0x8ba2,	// (0x00008ba2) slider_pane_g2_ParamLimits

0x8ba2,	// (0x00008ba2) slider_pane_g2

0x8bb8,	// (0x00008bb8) slider_pane_g3_ParamLimits

0x8bb8,	// (0x00008bb8) slider_pane_g3

0x0003,

0xa3db,	// (0x0000a3db) slider_pane_g_ParamLimits

0xa3db,	// (0x0000a3db) slider_pane_g

0xb8e4,	// (0x0000b8e4) popup_tb_float_extension_window_ParamLimits

0xb8e4,	// (0x0000b8e4) popup_tb_float_extension_window

0x8be4,	// (0x00008be4) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x8bef,	// (0x00008bef) grid_tb_float_ext_pane

0x8bf7,	// (0x00008bf7) cell_tb_float_ext_pane_ParamLimits

0x8bf7,	// (0x00008bf7) cell_tb_float_ext_pane

0x8c0f,	// (0x00008c0f) cell_tb_float_ext_pane_g1

0x8c18,	// (0x00008c18) grid_highlight_pane_cp12

0xc663,	// (0x0000c663) cell_last_hwr_side_pane_ParamLimits

0xc663,	// (0x0000c663) cell_last_hwr_side_pane

0x5c57,	// (0x00005c57) cell_last_hwr_side_pane_g1

0x8c21,	// (0x00008c21) cell_last_hwr_side_pane_g2

0x0001,

0xa3e4,	// (0x0000a3e4) cell_last_hwr_side_pane_g

0xd64a,	// (0x0000d64a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd64a,	// (0x0000d64a) vkb2_area_bottom_space_btn_pane

0x6097,	// (0x00006097) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x871b,	// (0x0000871b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8b5d,	// (0x00008b5d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8c2a,	// (0x00008c2a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8c2a,	// (0x00008c2a) vkb2_area_bottom_space_btn_pane_g1

0x8c60,	// (0x00008c60) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8c60,	// (0x00008c60) vkb2_area_bottom_space_btn_pane_g2

0x8c96,	// (0x00008c96) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8c96,	// (0x00008c96) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xa3e9,	// (0x0000a3e9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xa3e9,	// (0x0000a3e9) vkb2_area_bottom_space_btn_pane_g

0x5d6f,	// (0x00005d6f) cel_fep_hwr_func_pane_ParamLimits

0x5d6f,	// (0x00005d6f) cel_fep_hwr_func_pane

0xc638,	// (0x0000c638) cell_hwr_side_button_pane_ParamLimits

0xc638,	// (0x0000c638) cell_hwr_side_button_pane

0x7be9,	// (0x00007be9) aid_area_touch_clock_ParamLimits

0x07a5,	// (0x000007a5) bg_uniindi_top_pane_ParamLimits

0x7bfb,	// (0x00007bfb) uniindi_top_pane_g1_ParamLimits

0x7c11,	// (0x00007c11) uniindi_top_pane_g2_ParamLimits

0x7c1d,	// (0x00007c1d) uniindi_top_pane_g3_ParamLimits

0x7c2e,	// (0x00007c2e) uniindi_top_pane_g4_ParamLimits

0xa301,	// (0x0000a301) uniindi_top_pane_g_ParamLimits

0x7c3b,	// (0x00007c3b) uniindi_top_pane_t1_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01

0x8cdc,	// (0x00008cdc) cel_fep_hwr_func_pane_g1_ParamLimits

0x8cdc,	// (0x00008cdc) cel_fep_hwr_func_pane_g1

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02

0x8cdc,	// (0x00008cdc) cell_hwr_side_button_pane_g1_ParamLimits

0x8cdc,	// (0x00008cdc) cell_hwr_side_button_pane_g1

0x301d,	// (0x0000301d) status_pane_g4_ParamLimits

0x301d,	// (0x0000301d) status_pane_g4

0x3035,	// (0x00003035) status_pane_t1

0x5a49,	// (0x00005a49) form2_midp_gauge_slider_cont_pane

0x5a51,	// (0x00005a51) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc58c,	// (0x0000c58c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc59e,	// (0x0000c59e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xe269,	// (0x0000e269) form2_midp_gauge_slider_pane_t_ParamLimits

0x5a87,	// (0x00005a87) form2_midp_slider_pane_ParamLimits

0x8136,	// (0x00008136) aid_size_cell_func_vkb2_ParamLimits

0x8136,	// (0x00008136) aid_size_cell_func_vkb2

0x8bd0,	// (0x00008bd0) slider_pane_g4_ParamLimits

0x8bd0,	// (0x00008bd0) slider_pane_g4

0xd9df,	// (0x0000d9df) form2_midp_gauge_slider_pane_t2_cp01

0xd9ed,	// (0x0000d9ed) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd9ed,	// (0x0000d9ed) form2_midp_gauge_slider_pane_t3_cp01

0x8d15,	// (0x00008d15) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x8d49,	// (0x00008d49) navi_smil_pane_g1

0x8d51,	// (0x00008d51) navi_smil_pane_t1

0x8d1e,	// (0x00008d1e) form2_midp_slider_pane_g1

0x8d27,	// (0x00008d27) form2_midp_slider_pane_g2

0x8d2f,	// (0x00008d2f) form2_midp_slider_pane_g3

0x8d1e,	// (0x00008d1e) form2_midp_slider_pane_g4

0xda0a,	// (0x0000da0a) form2_midp_slider_pane_g5

0x0004,

0xe332,	// (0x0000e332) form2_midp_slider_pane_g

0x8ccc,	// (0x00008ccc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8ccc,	// (0x00008ccc) vkb2_area_bottom_space_btn_pane_g4

0xba86,	// (0x0000ba86) lc0_navi_pane_ParamLimits

0xba86,	// (0x0000ba86) lc0_navi_pane

0xbaf0,	// (0x0000baf0) lc0_stat_indi_pane_ParamLimits

0xbaf0,	// (0x0000baf0) lc0_stat_indi_pane

0xbb05,	// (0x0000bb05) ls0_title_pane_ParamLimits

0xbb05,	// (0x0000bb05) ls0_title_pane

0x11e8,	// (0x000011e8) bg_popup_sub_pane_cp14_ParamLimits

0x7bd0,	// (0x00007bd0) list_uniindi_pane_ParamLimits

0x7bdc,	// (0x00007bdc) uniindi_top_pane_ParamLimits

0x7c77,	// (0x00007c77) list_single_uniindi_pane_g1_ParamLimits

0x7c8a,	// (0x00007c8a) list_single_uniindi_pane_t1_ParamLimits

0xda13,	// (0x0000da13) lc0_stat_clock_pane_ParamLimits

0xda13,	// (0x0000da13) lc0_stat_clock_pane

0xda20,	// (0x0000da20) lc0_stat_indi_pane_g1_ParamLimits

0xda20,	// (0x0000da20) lc0_stat_indi_pane_g1

0xda2d,	// (0x0000da2d) lc0_stat_indi_pane_g2_ParamLimits

0xda2d,	// (0x0000da2d) lc0_stat_indi_pane_g2

0x0001,

0xe33d,	// (0x0000e33d) lc0_stat_indi_pane_g_ParamLimits

0xe33d,	// (0x0000e33d) lc0_stat_indi_pane_g

0xda3a,	// (0x0000da3a) lc0_uni_indicator_pane_ParamLimits

0xda3a,	// (0x0000da3a) lc0_uni_indicator_pane

0x8d93,	// (0x00008d93) ls0_title_pane_g1_ParamLimits

0x8d93,	// (0x00008d93) ls0_title_pane_g1

0xda47,	// (0x0000da47) ls0_title_pane_t1_ParamLimits

0xda47,	// (0x0000da47) ls0_title_pane_t1

0xda75,	// (0x0000da75) lc0_uni_indicator_pane_g1_ParamLimits

0xda75,	// (0x0000da75) lc0_uni_indicator_pane_g1

0x8def,	// (0x00008def) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x8dfd,	// (0x00008dfd) ai5_sk_pane_ParamLimits

0x8dfd,	// (0x00008dfd) ai5_sk_pane

0xda8a,	// (0x0000da8a) cell_ai5_widget_pane_ParamLimits

0xda8a,	// (0x0000da8a) cell_ai5_widget_pane

0xdaf1,	// (0x0000daf1) aid_size_cell_widget_grid

0x8e77,	// (0x00008e77) bg_ai5_widget_pane_ParamLimits

0x8e77,	// (0x00008e77) bg_ai5_widget_pane

0xdb1f,	// (0x0000db1f) cell_ai5_widget_pane_g2

0xdb2f,	// (0x0000db2f) cell_ai5_widget_pane_g3

0xdb43,	// (0x0000db43) cell_ai5_widget_pane_g4

0xdb4f,	// (0x0000db4f) cell_ai5_widget_pane_g5

0xdb5b,	// (0x0000db5b) cell_ai5_widget_pane_g6

0xdb67,	// (0x0000db67) cell_ai5_widget_pane_g7

0xdbaf,	// (0x0000dbaf) cell_ai5_widget_pane_t1_ParamLimits

0xdbaf,	// (0x0000dbaf) cell_ai5_widget_pane_t1

0xdbcc,	// (0x0000dbcc) cell_ai5_widget_pane_t2_ParamLimits

0xdbcc,	// (0x0000dbcc) cell_ai5_widget_pane_t2

0xdbe4,	// (0x0000dbe4) cell_ai5_widget_pane_t3_ParamLimits

0xdbe4,	// (0x0000dbe4) cell_ai5_widget_pane_t3

0xdbfc,	// (0x0000dbfc) cell_ai5_widget_pane_t4_ParamLimits

0xdbfc,	// (0x0000dbfc) cell_ai5_widget_pane_t4

0xdc16,	// (0x0000dc16) cell_ai5_widget_pane_t5_ParamLimits

0xdc16,	// (0x0000dc16) cell_ai5_widget_pane_t5

0x8fb5,	// (0x00008fb5) cell_ai5_widget_pane_t6_ParamLimits

0x8fb5,	// (0x00008fb5) cell_ai5_widget_pane_t6

0x8fc7,	// (0x00008fc7) cell_ai5_widget_pane_t7_ParamLimits

0x8fc7,	// (0x00008fc7) cell_ai5_widget_pane_t7

0xdc35,	// (0x0000dc35) cell_ai5_widget_pane_t8_ParamLimits

0xdc35,	// (0x0000dc35) cell_ai5_widget_pane_t8

0x0009,

0xe357,	// (0x0000e357) cell_ai5_widget_pane_t_ParamLimits

0xe357,	// (0x0000e357) cell_ai5_widget_pane_t

0xdc7d,	// (0x0000dc7d) grid_ai5_widget_pane

0x11e8,	// (0x000011e8) highlight_cell_ai5_widget_pane_ParamLimits

0x11e8,	// (0x000011e8) highlight_cell_ai5_widget_pane

0xdc91,	// (0x0000dc91) ai5_sk_left_pane

0xdc9b,	// (0x0000dc9b) ai5_sk_middle_pane

0xdca5,	// (0x0000dca5) ai5_sk_right_pane

0x905c,	// (0x0000905c) bg_ai5_widget_pane_g1_ParamLimits

0x905c,	// (0x0000905c) bg_ai5_widget_pane_g1

0x9068,	// (0x00009068) bg_ai5_widget_pane_g2_ParamLimits

0x9068,	// (0x00009068) bg_ai5_widget_pane_g2

0x9074,	// (0x00009074) bg_ai5_widget_pane_g3_ParamLimits

0x9074,	// (0x00009074) bg_ai5_widget_pane_g3

0x9080,	// (0x00009080) bg_ai5_widget_pane_g4_ParamLimits

0x9080,	// (0x00009080) bg_ai5_widget_pane_g4

0x908c,	// (0x0000908c) bg_ai5_widget_pane_g5_ParamLimits

0x908c,	// (0x0000908c) bg_ai5_widget_pane_g5

0x9098,	// (0x00009098) bg_ai5_widget_pane_g6_ParamLimits

0x9098,	// (0x00009098) bg_ai5_widget_pane_g6

0x90a4,	// (0x000090a4) bg_ai5_widget_pane_g7_ParamLimits

0x90a4,	// (0x000090a4) bg_ai5_widget_pane_g7

0x90b0,	// (0x000090b0) bg_ai5_widget_pane_g8_ParamLimits

0x90b0,	// (0x000090b0) bg_ai5_widget_pane_g8

0x90bc,	// (0x000090bc) bg_ai5_widget_pane_g9_ParamLimits

0x90bc,	// (0x000090bc) bg_ai5_widget_pane_g9

0x0008,

0xa42c,	// (0x0000a42c) bg_ai5_widget_pane_g_ParamLimits

0xa42c,	// (0x0000a42c) bg_ai5_widget_pane_g

0xdcaf,	// (0x0000dcaf) cell_shortcut_ai5_widget_pane_ParamLimits

0xdcaf,	// (0x0000dcaf) cell_shortcut_ai5_widget_pane

0x05de,	// (0x000005de) bg_cell_shortcut_ai5_widget_pane

0xdcc1,	// (0x0000dcc1) cell_grid_ai5_widget_pane_g1

0x90ff,	// (0x000090ff) highlight_cell_shortcut_ai5_widget_pane

0x3212,	// (0x00003212) ai5_sk_left_pane_g1

0x9107,	// (0x00009107) ai5_sk_left_pane_g2

0x910f,	// (0x0000910f) ai5_sk_left_pane_g3

0x9117,	// (0x00009117) ai5_sk_left_pane_g4

0x0003,

0xa43f,	// (0x0000a43f) ai5_sk_left_pane_g

0x911f,	// (0x0000911f) ai5_sk_left_pane_t1

0x320a,	// (0x0000320a) ai5_sk_right_pane_g1

0x912d,	// (0x0000912d) ai5_sk_right_pane_g2

0x9135,	// (0x00009135) ai5_sk_right_pane_g3

0x913d,	// (0x0000913d) ai5_sk_right_pane_g4

0x0003,

0xa448,	// (0x0000a448) ai5_sk_right_pane_g

0x9145,	// (0x00009145) ai5_sk_right_pane_t1

0x320a,	// (0x0000320a) ai5_sk_middle_pane_g1

0x3212,	// (0x00003212) ai5_sk_middle_pane_g2

0x322a,	// (0x0000322a) ai5_sk_middle_pane_g3

0x9135,	// (0x00009135) ai5_sk_middle_pane_g4

0x910f,	// (0x0000910f) ai5_sk_middle_pane_g5

0x9153,	// (0x00009153) ai5_sk_middle_pane_g6

0xdcca,	// (0x0000dcca) ai5_sk_middle_pane_g7

0x0006,

0xe36c,	// (0x0000e36c) ai5_sk_middle_pane_g

0xb984,	// (0x0000b984) aid_touch_area_size_lc0_ParamLimits

0xb984,	// (0x0000b984) aid_touch_area_size_lc0

0x6430,	// (0x00006430) cell_hwr_candidate_pane_t1_ParamLimits

0x2d20,	// (0x00002d20) aid_touch_navi_pane

0xbbf1,	// (0x0000bbf1) status_dt_navi_pane_ParamLimits

0xbbf1,	// (0x0000bbf1) status_dt_navi_pane

0xbc09,	// (0x0000bc09) status_dt_sta_pane_ParamLimits

0xbc09,	// (0x0000bc09) status_dt_sta_pane

0xdcd2,	// (0x0000dcd2) dt_sta_controll_pane

0xdcdf,	// (0x0000dcdf) dt_sta_indi_pane

0xdcec,	// (0x0000dcec) dt_sta_title_pane

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane

0xdcfe,	// (0x0000dcfe) dt_sta_battery_pane

0xdd06,	// (0x0000dd06) dt_sta_indi_pane_g1

0xdd0f,	// (0x0000dd0f) dt_sta_indi_pane_g2

0xdd18,	// (0x0000dd18) dt_sta_indi_pane_g3

0x0002,

0xe37b,	// (0x0000e37b) dt_sta_indi_pane_g

0xdd21,	// (0x0000dd21) dt_sta_signal_pane

0x11e8,	// (0x000011e8) bg_dt_sta_title_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_dt_sta_title_pane

0xdd2a,	// (0x0000dd2a) dt_sta_title_pane_g1

0xdd32,	// (0x0000dd32) dt_sta_title_pane_t1_ParamLimits

0xdd32,	// (0x0000dd32) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0xdd47,	// (0x0000dd47) dt_sta_controll_pane_g1

0xdd50,	// (0x0000dd50) bg_dt_sta_title_pane_g1

0xdd59,	// (0x0000dd59) bg_dt_sta_title_pane_g2

0xdd62,	// (0x0000dd62) bg_dt_sta_title_pane_g3

0x0002,

0xe382,	// (0x0000e382) bg_dt_sta_title_pane_g

0x5c57,	// (0x00005c57) bg_dt_sta_indi_pane_g1

0xdd6b,	// (0x0000dd6b) dt_sta_signal_pane_g1

0xdd73,	// (0x0000dd73) dt_sta_signal_pane_g2

0x0001,

0xe389,	// (0x0000e389) dt_sta_signal_pane_g

0x9211,	// (0x00009211) dt_sta_battery_pane_g1

0x921a,	// (0x0000921a) dt_sta_battery_pane_t1

0x5c57,	// (0x00005c57) bg_dt_sta_control_pane_g1

0x1ca7,	// (0x00001ca7) fep_china_uni_eep_pane

0x1caf,	// (0x00001caf) fep_china_uni_entry_pane_ParamLimits

0x1cbf,	// (0x00001cbf) popup_fep_china_uni_window_g1_ParamLimits

0x1ccf,	// (0x00001ccf) popup_fep_china_uni_window_g2_ParamLimits

0x1ccf,	// (0x00001ccf) popup_fep_china_uni_window_g2

0x0001,

0x9d2d,	// (0x00009d2d) popup_fep_china_uni_window_g_ParamLimits

0x9d2d,	// (0x00009d2d) popup_fep_china_uni_window_g

0x9229,	// (0x00009229) fep_china_uni_eep_pane_g1

0x9231,	// (0x00009231) fep_china_uni_eep_pane_t1

0x8d40,	// (0x00008d40) aid_touch_area_size_smil_player

0x2e57,	// (0x00002e57) lc0_clock_pane

0x3029,	// (0x00003029) status_pane_g5_ParamLimits

0x3029,	// (0x00003029) status_pane_g5

0xb518,	// (0x0000b518) popup_keymap_window

0x2ff1,	// (0x00002ff1) status_icon_pane

0xdb2f,	// (0x0000db2f) cell_ai5_widget_pane_g3_ParamLimits

0xdb43,	// (0x0000db43) cell_ai5_widget_pane_g4_ParamLimits

0xdb4f,	// (0x0000db4f) cell_ai5_widget_pane_g5_ParamLimits

0xdb73,	// (0x0000db73) cell_ai5_widget_pane_g8_ParamLimits

0xdb73,	// (0x0000db73) cell_ai5_widget_pane_g8

0xdb87,	// (0x0000db87) cell_ai5_widget_pane_g9_ParamLimits

0xdb87,	// (0x0000db87) cell_ai5_widget_pane_g9

0xdb9b,	// (0x0000db9b) cell_ai5_widget_pane_g10_ParamLimits

0xdb9b,	// (0x0000db9b) cell_ai5_widget_pane_g10

0x9240,	// (0x00009240) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x9248,	// (0x00009248) popup_keymap_window_t1

0xb26c,	// (0x0000b26c) control_pane_g6_ParamLimits

0xb26c,	// (0x0000b26c) control_pane_g6

0xb279,	// (0x0000b279) control_pane_g7_ParamLimits

0xb279,	// (0x0000b279) control_pane_g7

0xb286,	// (0x0000b286) control_pane_g8_ParamLimits

0xb286,	// (0x0000b286) control_pane_g8

0xdcd2,	// (0x0000dcd2) dt_sta_controll_pane_ParamLimits

0xdcdf,	// (0x0000dcdf) dt_sta_indi_pane_ParamLimits

0xdcec,	// (0x0000dcec) dt_sta_title_pane_ParamLimits

0x0c04,	// (0x00000c04) aid_size_touch_scroll_bar_cale

0x026c,	// (0x0000026c) popup_discreet_window_ParamLimits

0x026c,	// (0x0000026c) popup_discreet_window

0xa5d8,	// (0x0000a5d8) popup_sk_window

0x3978,	// (0x00003978) bg_popup_sub_pane_cp28_ParamLimits

0x3978,	// (0x00003978) bg_popup_sub_pane_cp28

0x9256,	// (0x00009256) popup_discreet_window_g1_ParamLimits

0x9256,	// (0x00009256) popup_discreet_window_g1

0x9276,	// (0x00009276) popup_discreet_window_t1_ParamLimits

0x9276,	// (0x00009276) popup_discreet_window_t1

0x9294,	// (0x00009294) popup_discreet_window_t2_ParamLimits

0x9294,	// (0x00009294) popup_discreet_window_t2

0x0002,

0xa473,	// (0x0000a473) popup_discreet_window_t_ParamLimits

0xa473,	// (0x0000a473) popup_discreet_window_t

0x92e6,	// (0x000092e6) popup_sk_window_g1

0x92ef,	// (0x000092ef) popup_sk_window_g2

0x0001,

0xa47a,	// (0x0000a47a) popup_sk_window_g

0x92f8,	// (0x000092f8) popup_sk_window_t1

0x9306,	// (0x00009306) popup_sk_window_t1_copy1

0xdb1f,	// (0x0000db1f) cell_ai5_widget_pane_g2_ParamLimits

0xdc47,	// (0x0000dc47) cell_ai5_widget_pane_t9_ParamLimits

0xdc47,	// (0x0000dc47) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xdd7b,	// (0x0000dd7b) aid_fshwr2_btn_pane

0xdd83,	// (0x0000dd83) aid_fshwr2_syb_pane

0xdd8b,	// (0x0000dd8b) aid_fshwr2_txt_pane

0xdd93,	// (0x0000dd93) fshwr2_func_candi_pane

0xdd9b,	// (0x0000dd9b) fshwr2_hwr_syb_pane

0xdda3,	// (0x0000dda3) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xddab,	// (0x0000ddab) fshwr2_icf_pane_t1_ParamLimits

0xddab,	// (0x0000ddab) fshwr2_icf_pane_t1

0x5c57,	// (0x00005c57) fshwr2_func_candi_pane_g1

0x936d,	// (0x0000936d) fshwr2_func_candi_row_pane_ParamLimits

0x936d,	// (0x0000936d) fshwr2_func_candi_row_pane

0xddc3,	// (0x0000ddc3) cell_fshwr2_syb_pane_ParamLimits

0xddc3,	// (0x0000ddc3) cell_fshwr2_syb_pane

0x6097,	// (0x00006097) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6097,	// (0x00006097) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0x9395,	// (0x00009395) fshwr2_func_candi_cell_pane_ParamLimits

0x9395,	// (0x00009395) fshwr2_func_candi_cell_pane

0x93c0,	// (0x000093c0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x93c0,	// (0x000093c0) fshwr2_func_candi_cell_bg_pane

0x93da,	// (0x000093da) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x93da,	// (0x000093da) fshwr2_func_candi_cell_pane_g1

0x93fa,	// (0x000093fa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x93fa,	// (0x000093fa) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x22d6,	// (0x000022d6) cell_fshwr2_syb_bg_pane

0xddda,	// (0x0000ddda) cell_fshwr2_syb_bg_pane_g1

0xdde2,	// (0x0000dde2) cell_fshwr2_syb_bg_pane_t1

0x11e8,	// (0x000011e8) main_tmo_pane

0xc071,	// (0x0000c071) uni_indicator_pane_g1_ParamLimits

0xc086,	// (0x0000c086) uni_indicator_pane_g2_ParamLimits

0xc09c,	// (0x0000c09c) uni_indicator_pane_g3_ParamLimits

0x45b7,	// (0x000045b7) uni_indicator_pane_g4_ParamLimits

0x45b7,	// (0x000045b7) uni_indicator_pane_g4

0x45cb,	// (0x000045cb) uni_indicator_pane_g5_ParamLimits

0x45cb,	// (0x000045cb) uni_indicator_pane_g5

0x45df,	// (0x000045df) uni_indicator_pane_g6_ParamLimits

0x45df,	// (0x000045df) uni_indicator_pane_g6

0xe1d9,	// (0x0000e1d9) uni_indicator_pane_g_ParamLimits

0xcc8c,	// (0x0000cc8c) popup_tmo_note_window_ParamLimits

0xcc8c,	// (0x0000cc8c) popup_tmo_note_window

0x0020,	// (0x00000020) fshwr2_bg_pane

0x93eb,	// (0x000093eb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x93eb,	// (0x000093eb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xa47f,	// (0x0000a47f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xa47f,	// (0x0000a47f) fshwr2_func_candi_cell_pane_g

0x5c57,	// (0x00005c57) bg_popup_window_pane_cp01

0x9424,	// (0x00009424) bg_popup_window_pane_g1_cp01

0x942d,	// (0x0000942d) bg_popup_window_pane_cp22_ParamLimits

0x942d,	// (0x0000942d) bg_popup_window_pane_cp22

0x943b,	// (0x0000943b) listscroll_tmo_link_pane_ParamLimits

0x943b,	// (0x0000943b) listscroll_tmo_link_pane

0x947b,	// (0x0000947b) popup_tmo_note_window_g1_ParamLimits

0x947b,	// (0x0000947b) popup_tmo_note_window_g1

0x9488,	// (0x00009488) tmo_note_info_pane_ParamLimits

0x9488,	// (0x00009488) tmo_note_info_pane

0xddf1,	// (0x0000ddf1) list_tmo_note_info_pane_g1_ParamLimits

0xddf1,	// (0x0000ddf1) list_tmo_note_info_pane_g1

0x94b9,	// (0x000094b9) list_tmo_note_info_pane_g2_ParamLimits

0x94b9,	// (0x000094b9) list_tmo_note_info_pane_g2

0x0001,

0xe38e,	// (0x0000e38e) list_tmo_note_info_pane_g_ParamLimits

0xe38e,	// (0x0000e38e) list_tmo_note_info_pane_g

0x94d5,	// (0x000094d5) list_tmo_note_info_text_pane_ParamLimits

0x94d5,	// (0x000094d5) list_tmo_note_info_text_pane

0x9556,	// (0x00009556) list_tmo_link_pane

0x9563,	// (0x00009563) scroll_pane_cp20

0x9570,	// (0x00009570) list_single_tmo_link_pane_ParamLimits

0x9570,	// (0x00009570) list_single_tmo_link_pane

0x9580,	// (0x00009580) list_single_tmo_link_pane_t1

0x958e,	// (0x0000958e) list_tmo_note_info_text_pane_t1_ParamLimits

0x958e,	// (0x0000958e) list_tmo_note_info_text_pane_t1

0x140e,	// (0x0000140e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x140e,	// (0x0000140e) aid_size_touch_scroll_bar_cp01

0xadfc,	// (0x0000adfc) aid_size_touch_slider_marker

0xa5cc,	// (0x0000a5cc) popup_settings_window_ParamLimits

0xa5cc,	// (0x0000a5cc) popup_settings_window

0x285a,	// (0x0000285a) popup_candi_list_indi_window

0x2d20,	// (0x00002d20) aid_touch_navi_pane_ParamLimits

0x795f,	// (0x0000795f) rs_clock_indi_pane

0x7968,	// (0x00007968) sctrl_sk_bottom_pane_ParamLimits

0x7979,	// (0x00007979) sctrl_sk_top_pane_ParamLimits

0x8190,	// (0x00008190) popup_fep_tooltip_window

0xdaf1,	// (0x0000daf1) aid_size_cell_widget_grid_ParamLimits

0xdb13,	// (0x0000db13) cell_ai5_widget_pane_g1_ParamLimits

0xdb13,	// (0x0000db13) cell_ai5_widget_pane_g1

0xdb5b,	// (0x0000db5b) cell_ai5_widget_pane_g6_ParamLimits

0xdb67,	// (0x0000db67) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xe342,	// (0x0000e342) cell_ai5_widget_pane_g_ParamLimits

0xe342,	// (0x0000e342) cell_ai5_widget_pane_g

0xdc6b,	// (0x0000dc6b) cell_ai5_widget_pane_t10_ParamLimits

0xdc6b,	// (0x0000dc6b) cell_ai5_widget_pane_t10

0xdc7d,	// (0x0000dc7d) grid_ai5_widget_pane_ParamLimits

0x90c8,	// (0x000090c8) cell_contacts_ai5_widget_pane_ParamLimits

0x90c8,	// (0x000090c8) cell_contacts_ai5_widget_pane

0x92a9,	// (0x000092a9) popup_discreet_window_t3_ParamLimits

0x92a9,	// (0x000092a9) popup_discreet_window_t3

0x9344,	// (0x00009344) popup_fshwr2_char_preview_window_ParamLimits

0x9344,	// (0x00009344) popup_fshwr2_char_preview_window

0xde08,	// (0x0000de08) tmo_note_info_pane_t1

0xde1d,	// (0x0000de1d) tmo_note_info_pane_t2

0xde32,	// (0x0000de32) tmo_note_info_pane_t3

0x9532,	// (0x00009532) tmo_note_info_pane_t4

0x9544,	// (0x00009544) tmo_note_info_pane_t5

0x0004,

0xe393,	// (0x0000e393) tmo_note_info_pane_t

0x9556,	// (0x00009556) list_tmo_link_pane_ParamLimits

0x9563,	// (0x00009563) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x95a7,	// (0x000095a7) popup_fshwr2_char_preview_window_t1

0x95b5,	// (0x000095b5) popup_candi_list_indi_window_g1

0x95be,	// (0x000095be) bg_cell_contacts_ai5_widget_pane

0x95ca,	// (0x000095ca) cell_contacts_ai5_widget_pane_g1

0x95de,	// (0x000095de) cell_contacts_ai5_widget_pane_g2

0x95ed,	// (0x000095ed) cell_contacts_ai5_widget_pane_g3

0x0002,

0xa494,	// (0x0000a494) cell_contacts_ai5_widget_pane_g

0x9600,	// (0x00009600) cell_contacts_ai5_widget_pane_t1

0x11e8,	// (0x000011e8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdeaa,	// (0x0000deaa) settings_container_pane

0x22d6,	// (0x000022d6) listscroll_set_pane_copy1

0x5260,	// (0x00005260) scroll_pane_cp121_copy1

0x9684,	// (0x00009684) set_content_pane_copy1

0x968c,	// (0x0000968c) aid_height_set_list_copy1_ParamLimits

0x968c,	// (0x0000968c) aid_height_set_list_copy1

0x487e,	// (0x0000487e) aid_size_parent_copy1_ParamLimits

0x487e,	// (0x0000487e) aid_size_parent_copy1

0xdeb6,	// (0x0000deb6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdeb6,	// (0x0000deb6) button_value_adjust_pane_cp6_copy1

0x2834,	// (0x00002834) list_highlight_pane_cp2_copy1_ParamLimits

0x2834,	// (0x00002834) list_highlight_pane_cp2_copy1

0xdeca,	// (0x0000deca) list_set_pane_copy1_ParamLimits

0xdeca,	// (0x0000deca) list_set_pane_copy1

0xde47,	// (0x0000de47) main_pane_set_t1_copy1_ParamLimits

0xde47,	// (0x0000de47) main_pane_set_t1_copy1

0xde81,	// (0x0000de81) main_pane_set_t2_copy1_ParamLimits

0xde81,	// (0x0000de81) main_pane_set_t2_copy1

0x973a,	// (0x0000973a) main_pane_set_t3_copy1

0x9748,	// (0x00009748) main_pane_set_t4_copy1

0xde9e,	// (0x0000de9e) set_content_pane_g1_copy1_ParamLimits

0xde9e,	// (0x0000de9e) set_content_pane_g1_copy1

0xdf58,	// (0x0000df58) setting_code_pane_copy1

0x975e,	// (0x0000975e) setting_slider_graphic_pane_copy1

0x975e,	// (0x0000975e) setting_slider_pane_copy1

0x9766,	// (0x00009766) setting_text_pane_copy1

0x975e,	// (0x0000975e) setting_volume_pane_copy1

0xdf60,	// (0x0000df60) settings_code_pane_cp2_copy1

0xdf68,	// (0x0000df68) settings_code_pane_cp_copy1_ParamLimits

0xdf68,	// (0x0000df68) settings_code_pane_cp_copy1

0xdf7c,	// (0x0000df7c) volume_set_pane_copy1

0xdf84,	// (0x0000df84) volume_set_pane_g10_copy1

0xdf8c,	// (0x0000df8c) volume_set_pane_g1_copy1

0xdf94,	// (0x0000df94) volume_set_pane_g2_copy1

0xdf9c,	// (0x0000df9c) volume_set_pane_g3_copy1

0xdfa4,	// (0x0000dfa4) volume_set_pane_g4_copy1

0xdfac,	// (0x0000dfac) volume_set_pane_g5_copy1

0xdfb4,	// (0x0000dfb4) volume_set_pane_g6_copy1

0xdfbc,	// (0x0000dfbc) volume_set_pane_g7_copy1

0xdfc4,	// (0x0000dfc4) volume_set_pane_g8_copy1

0xdfcc,	// (0x0000dfcc) volume_set_pane_g9_copy1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1_ParamLimits

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1

0x97e2,	// (0x000097e2) setting_slider_pane_t2_copy1_ParamLimits

0x97e2,	// (0x000097e2) setting_slider_pane_t2_copy1

0x97fb,	// (0x000097fb) setting_slider_pane_t3_copy1_ParamLimits

0x97fb,	// (0x000097fb) setting_slider_pane_t3_copy1

0x0504,	// (0x00000504) slider_set_pane_copy1_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_copy1

0x130e,	// (0x0000130e) set_opt_bg_pane_g1_copy2

0x1316,	// (0x00001316) set_opt_bg_pane_g2_copy2

0x9812,	// (0x00009812) set_opt_bg_pane_g3_copy2

0x1326,	// (0x00001326) set_opt_bg_pane_g4_copy2

0x132e,	// (0x0000132e) set_opt_bg_pane_g5_copy2

0x1336,	// (0x00001336) set_opt_bg_pane_g6_copy2

0xdfd4,	// (0x0000dfd4) set_opt_bg_pane_g7_copy2

0x9822,	// (0x00009822) set_opt_bg_pane_g8_copy2

0x982a,	// (0x0000982a) set_opt_bg_pane_g9_copy2

0x47c5,	// (0x000047c5) aid_size_touch_slider_mark_copy1_ParamLimits

0x47c5,	// (0x000047c5) aid_size_touch_slider_mark_copy1

0x49b4,	// (0x000049b4) slider_set_pane_g1_copy1

0x49bd,	// (0x000049bd) slider_set_pane_g2_copy1

0x47f2,	// (0x000047f2) slider_set_pane_g3_copy1_ParamLimits

0x47f2,	// (0x000047f2) slider_set_pane_g3_copy1

0x4806,	// (0x00004806) slider_set_pane_g4_copy1_ParamLimits

0x4806,	// (0x00004806) slider_set_pane_g4_copy1

0x481e,	// (0x0000481e) slider_set_pane_g5_copy1_ParamLimits

0x481e,	// (0x0000481e) slider_set_pane_g5_copy1

0x47f2,	// (0x000047f2) slider_set_pane_g6_copy1_ParamLimits

0x47f2,	// (0x000047f2) slider_set_pane_g6_copy1

0xdfdc,	// (0x0000dfdc) slider_set_pane_g7_copy1_ParamLimits

0xdfdc,	// (0x0000dfdc) slider_set_pane_g7_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_copy1

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1_copy1

0xdff2,	// (0x0000dff2) setting_slider_graphic_pane_t1_copy1

0xe001,	// (0x0000e001) setting_slider_graphic_pane_t2_copy1

0xe010,	// (0x0000e010) slider_set_pane_cp_copy1

0x9876,	// (0x00009876) input_focus_pane_cp1_copy1

0x987f,	// (0x0000987f) list_set_text_pane_copy1

0x9887,	// (0x00009887) setting_text_pane_g1_copy1

0x9890,	// (0x00009890) set_text_pane_t1_copy1

0x9876,	// (0x00009876) input_focus_pane_cp2_copy1

0x9887,	// (0x00009887) setting_code_pane_g1_copy1

0x98a9,	// (0x000098a9) setting_code_pane_t1_copy1

0xb184,	// (0x0000b184) list_set_graphic_pane_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_copy1

0x98cb,	// (0x000098cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x98cb,	// (0x000098cb) list_set_graphic_pane_g1_copy1

0x98d7,	// (0x000098d7) list_set_graphic_pane_g2_copy1

0x2051,	// (0x00002051) list_set_graphic_pane_t1_copy1_ParamLimits

0x2051,	// (0x00002051) list_set_graphic_pane_t1_copy1

0x5c57,	// (0x00005c57) rs_clock_indi_pane_g1

0x98df,	// (0x000098df) rs_clock_indi_pane_t1

0x98ed,	// (0x000098ed) rs_indi_pane

0x98f5,	// (0x000098f5) rs_indi_pane_g1

0x98fe,	// (0x000098fe) rs_indi_pane_g2

0x95b5,	// (0x000095b5) rs_indi_pane_g3

0x0002,

0xa49b,	// (0x0000a49b) rs_indi_pane_g

0x22d6,	// (0x000022d6) bg_popup_preview_window_pane_cp03

0x9907,	// (0x00009907) popup_fep_tooltip_window_t1

0x6db5,	// (0x00006db5) popup_note2_window_g2_ParamLimits

0x6db5,	// (0x00006db5) popup_note2_window_g2

0x0001,

0xa240,	// (0x0000a240) popup_note2_window_g_ParamLimits

0xa240,	// (0x0000a240) popup_note2_window_g

0x73ae,	// (0x000073ae) bg_popup_sub_pane_cp11_ParamLimits

0x73bb,	// (0x000073bb) cell_ai3_links_pane_g1_ParamLimits

0x73d2,	// (0x000073d2) cell_ai3_links_pane_t1

0x9890,	// (0x00009890) set_text_pane_t1_copy1_ParamLimits

0x21fd,	// (0x000021fd) cell_graphic_popup_pane_cp2_ParamLimits

0x21fd,	// (0x000021fd) cell_graphic_popup_pane_cp2

0x9915,	// (0x00009915) cell_graphic_popup_pane_g1_cp2

0x0ab3,	// (0x00000ab3) cell_graphic_popup_pane_g2_cp2

0x991d,	// (0x0000991d) cell_graphic_popup_pane_g3_cp2

0x9925,	// (0x00009925) cell_graphic_popup_pane_t2_cp2

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp3_cp2

0x1824,	// (0x00001824) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x11e8,	// (0x000011e8) main_tmo_pane_ParamLimits

0xcc84,	// (0x0000cc84) popup_tmo_big_image_note_window

0xdb03,	// (0x0000db03) cell_ai5_widget_list_pane

0xdb0b,	// (0x0000db0b) cell_ai5_widget_lrg_icon_pane

0xde08,	// (0x0000de08) tmo_note_info_pane_t1_ParamLimits

0xde1d,	// (0x0000de1d) tmo_note_info_pane_t2_ParamLimits

0xde32,	// (0x0000de32) tmo_note_info_pane_t3_ParamLimits

0x9532,	// (0x00009532) tmo_note_info_pane_t4_ParamLimits

0x9544,	// (0x00009544) tmo_note_info_pane_t5_ParamLimits

0xe393,	// (0x0000e393) tmo_note_info_pane_t_ParamLimits

0xdeaa,	// (0x0000deaa) settings_container_pane_ParamLimits

0x986e,	// (0x0000986e) indicator_popup_pane_cp5

0x986e,	// (0x0000986e) indicator_popup_pane_cp6

0xb184,	// (0x0000b184) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x9933,	// (0x00009933) popup_tmo_big_image_note_window_g1

0x993c,	// (0x0000993c) popup_tmo_big_image_note_window_t1

0x994a,	// (0x0000994a) popup_tmo_big_image_note_window_t2

0x9958,	// (0x00009958) popup_tmo_big_image_note_window_t3

0x0002,

0xa4a2,	// (0x0000a4a2) popup_tmo_big_image_note_window_t

0xe018,	// (0x0000e018) cell_ai5_widget_lrg_icon_pane_g1

0xe020,	// (0x0000e020) cell_ai5_widget_lrg_icon_pane_t1

0xe02e,	// (0x0000e02e) cell_ai5_widget_list_row_pane_ParamLimits

0xe02e,	// (0x0000e02e) cell_ai5_widget_list_row_pane

0xe047,	// (0x0000e047) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe047,	// (0x0000e047) cell_ai5_widget_list_row_pane_g1

0xe054,	// (0x0000e054) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe054,	// (0x0000e054) cell_ai5_widget_list_row_pane_t1

0xe06c,	// (0x0000e06c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe06c,	// (0x0000e06c) cell_ai5_widget_list_row_pane_t2

0x0001,

0xe39e,	// (0x0000e39e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xe39e,	// (0x0000e39e) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x99cc,	// (0x000099cc) popup_fep_char_pre_window

0x99d4,	// (0x000099d4) popup_fep_ituss_window

0x99dd,	// (0x000099dd) popup_fep_vkbss_window

0x99e6,	// (0x000099e6) grid_vkbss_keypad_pane_ParamLimits

0x99e6,	// (0x000099e6) grid_vkbss_keypad_pane

0x99f6,	// (0x000099f6) ituss_keypad_pane

0x99fe,	// (0x000099fe) aid_vkbss_key_offset_ParamLimits

0x99fe,	// (0x000099fe) aid_vkbss_key_offset

0x9a0d,	// (0x00009a0d) cell_vkbss_key_pane_ParamLimits

0x9a0d,	// (0x00009a0d) cell_vkbss_key_pane

0x9a23,	// (0x00009a23) bg_cell_vkbss_key_g1_ParamLimits

0x9a23,	// (0x00009a23) bg_cell_vkbss_key_g1

0x9a2f,	// (0x00009a2f) cell_vkbss_key_3p_pane_ParamLimits

0x9a2f,	// (0x00009a2f) cell_vkbss_key_3p_pane

0x9a43,	// (0x00009a43) cell_vkbss_key_g1_ParamLimits

0x9a43,	// (0x00009a43) cell_vkbss_key_g1

0x9a57,	// (0x00009a57) cell_vkbss_key_t1_ParamLimits

0x9a57,	// (0x00009a57) cell_vkbss_key_t1

0x9a82,	// (0x00009a82) cell_ituss_key_pane_ParamLimits

0x9a82,	// (0x00009a82) cell_ituss_key_pane

0x9a91,	// (0x00009a91) bg_cell_ituss_key_g1_ParamLimits

0x9a91,	// (0x00009a91) bg_cell_ituss_key_g1

0x9a9d,	// (0x00009a9d) cell_ituss_key_pane_g1_ParamLimits

0x9a9d,	// (0x00009a9d) cell_ituss_key_pane_g1

0x9aa9,	// (0x00009aa9) cell_ituss_key_pane_g2_ParamLimits

0x9aa9,	// (0x00009aa9) cell_ituss_key_pane_g2

0x0001,

0xa4ae,	// (0x0000a4ae) cell_ituss_key_pane_g_ParamLimits

0xa4ae,	// (0x0000a4ae) cell_ituss_key_pane_g

0x9abc,	// (0x00009abc) cell_ituss_key_t1_ParamLimits

0x9abc,	// (0x00009abc) cell_ituss_key_t1

0x9ada,	// (0x00009ada) cell_ituss_key_t2_ParamLimits

0x9ada,	// (0x00009ada) cell_ituss_key_t2

0x9af9,	// (0x00009af9) cell_ituss_key_t3_ParamLimits

0x9af9,	// (0x00009af9) cell_ituss_key_t3

0x9b18,	// (0x00009b18) cell_ituss_key_t4_ParamLimits

0x9b18,	// (0x00009b18) cell_ituss_key_t4

0x0003,

0xa4b3,	// (0x0000a4b3) cell_ituss_key_t_ParamLimits

0xa4b3,	// (0x0000a4b3) cell_ituss_key_t

0x9b37,	// (0x00009b37) cell_vkbss_key_3p_pane_g1

0x9b3f,	// (0x00009b3f) cell_vkbss_key_3p_pane_g2

0x9b47,	// (0x00009b47) cell_vkbss_key_3p_pane_g3

0x0002,

0xa4bc,	// (0x0000a4bc) cell_vkbss_key_3p_pane_g

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp02

0x9b4f,	// (0x00009b4f) popup_fep_char_pre_window_t1

0xdae7,	// (0x0000dae7) main_ai5_sk_pane

0x95be,	// (0x000095be) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x95ca,	// (0x000095ca) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x95de,	// (0x000095de) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x95ed,	// (0x000095ed) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xa494,	// (0x0000a494) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9600,	// (0x00009600) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe07e,	// (0x0000e07e) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal

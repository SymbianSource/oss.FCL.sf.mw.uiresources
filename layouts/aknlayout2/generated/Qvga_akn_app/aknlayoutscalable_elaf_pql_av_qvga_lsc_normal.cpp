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
0xa6e2,	// (0x0000a6e2) Screen

0xa6ec,	// (0x0000a6ec) application_window_ParamLimits

0xa6ec,	// (0x0000a6ec) application_window

0x002a,	// (0x0000002a) screen_g1

0xa71a,	// (0x0000a71a) area_bottom_pane_ParamLimits

0xa71a,	// (0x0000a71a) area_bottom_pane

0x011d,	// (0x0000011d) area_top_pane_ParamLimits

0x011d,	// (0x0000011d) area_top_pane

0x0195,	// (0x00000195) main_pane_ParamLimits

0x0195,	// (0x00000195) main_pane

0x024e,	// (0x0000024e) misc_graphics

0xbbed,	// (0x0000bbed) battery_pane_ParamLimits

0xbbed,	// (0x0000bbed) battery_pane

0x3b7d,	// (0x00003b7d) bg_status_flat_pane_g8

0x3b85,	// (0x00003b85) bg_status_flat_pane_g9

0x2e05,	// (0x00002e05) context_pane_ParamLimits

0x2e05,	// (0x00002e05) context_pane

0xbd47,	// (0x0000bd47) navi_pane_ParamLimits

0xbd47,	// (0x0000bd47) navi_pane

0xbdbc,	// (0x0000bdbc) signal_pane_ParamLimits

0xbdbc,	// (0x0000bdbc) signal_pane

0x0008,

0xa06d,	// (0x0000a06d) bg_status_flat_pane_g

0xbe48,	// (0x0000be48) status_pane_g1_ParamLimits

0xbe48,	// (0x0000be48) status_pane_g1

0xbe54,	// (0x0000be54) status_pane_g2_ParamLimits

0xbe54,	// (0x0000be54) status_pane_g2

0x301a,	// (0x0000301a) status_pane_g3_ParamLimits

0x301a,	// (0x0000301a) status_pane_g3

0x0004,

0xe37f,	// (0x0000e37f) status_pane_g_ParamLimits

0xe37f,	// (0x0000e37f) status_pane_g

0xbe60,	// (0x0000be60) title_pane_ParamLimits

0xbe60,	// (0x0000be60) title_pane

0xbebb,	// (0x0000bebb) uni_indicator_pane_ParamLimits

0xbebb,	// (0x0000bebb) uni_indicator_pane

0x27da,	// (0x000027da) bg_list_pane_ParamLimits

0x27da,	// (0x000027da) bg_list_pane

0xb5b5,	// (0x0000b5b5) find_pane

0xb5bd,	// (0x0000b5bd) listscroll_app_pane_ParamLimits

0xb5bd,	// (0x0000b5bd) listscroll_app_pane

0x280e,	// (0x0000280e) listscroll_form_pane

0xb5c9,	// (0x0000b5c9) listscroll_gen_pane_ParamLimits

0xb5c9,	// (0x0000b5c9) listscroll_gen_pane

0x280e,	// (0x0000280e) listscroll_set_pane

0xb5de,	// (0x0000b5de) main_idle_act_pane

0x22d6,	// (0x000022d6) main_idle_trad_pane

0x22d6,	// (0x000022d6) main_list_empty_pane

0x283d,	// (0x0000283d) main_midp_pane

0x2849,	// (0x00002849) main_pane_g1_ParamLimits

0x2849,	// (0x00002849) main_pane_g1

0xb5f1,	// (0x0000b5f1) popup_ai_message_window_ParamLimits

0xb5f1,	// (0x0000b5f1) popup_ai_message_window

0xb675,	// (0x0000b675) popup_fep_china_uni_window_ParamLimits

0xb675,	// (0x0000b675) popup_fep_china_uni_window

0x2933,	// (0x00002933) popup_fep_japan_candidate_window_ParamLimits

0x2933,	// (0x00002933) popup_fep_japan_candidate_window

0x2951,	// (0x00002951) popup_fep_japan_predictive_window_ParamLimits

0x2951,	// (0x00002951) popup_fep_japan_predictive_window

0xb6b3,	// (0x0000b6b3) popup_find_window

0xb6cc,	// (0x0000b6cc) popup_grid_graphic_window_ParamLimits

0xb6cc,	// (0x0000b6cc) popup_grid_graphic_window

0x29a8,	// (0x000029a8) popup_large_graphic_colour_window

0xb748,	// (0x0000b748) popup_menu_window_ParamLimits

0xb748,	// (0x0000b748) popup_menu_window

0xb8a6,	// (0x0000b8a6) popup_note_image_window

0xb86e,	// (0x0000b86e) popup_note_wait_window_ParamLimits

0xb86e,	// (0x0000b86e) popup_note_wait_window

0xb8bc,	// (0x0000b8bc) popup_note_window_ParamLimits

0xb8bc,	// (0x0000b8bc) popup_note_window

0xb950,	// (0x0000b950) popup_query_code_window_ParamLimits

0xb950,	// (0x0000b950) popup_query_code_window

0x2b65,	// (0x00002b65) popup_query_data_code_window_ParamLimits

0x2b65,	// (0x00002b65) popup_query_data_code_window

0xb988,	// (0x0000b988) popup_query_data_window_ParamLimits

0xb988,	// (0x0000b988) popup_query_data_window

0xb9fc,	// (0x0000b9fc) popup_query_sat_info_window_ParamLimits

0xb9fc,	// (0x0000b9fc) popup_query_sat_info_window

0xba89,	// (0x0000ba89) popup_snote_single_graphic_window_ParamLimits

0xba89,	// (0x0000ba89) popup_snote_single_graphic_window

0xba89,	// (0x0000ba89) popup_snote_single_text_window_ParamLimits

0xba89,	// (0x0000ba89) popup_snote_single_text_window

0x2bd4,	// (0x00002bd4) popup_sub_window_general

0x2cd8,	// (0x00002cd8) popup_window_general_ParamLimits

0x2cd8,	// (0x00002cd8) popup_window_general

0x2ceb,	// (0x00002ceb) power_save_pane

0xb45e,	// (0x0000b45e) control_pane_g1_ParamLimits

0xb45e,	// (0x0000b45e) control_pane_g1

0x2659,	// (0x00002659) control_pane_g2_ParamLimits

0x2659,	// (0x00002659) control_pane_g2

0x267a,	// (0x0000267a) control_pane_g3_ParamLimits

0x267a,	// (0x0000267a) control_pane_g3

0x0007,

0xe367,	// (0x0000e367) control_pane_g_ParamLimits

0xe367,	// (0x0000e367) control_pane_g

0xb4bb,	// (0x0000b4bb) control_pane_t1_ParamLimits

0xb4bb,	// (0x0000b4bb) control_pane_t1

0xb517,	// (0x0000b517) control_pane_t2_ParamLimits

0xb517,	// (0x0000b517) control_pane_t2

0x0002,

0xe378,	// (0x0000e378) control_pane_t_ParamLimits

0xe378,	// (0x0000e378) control_pane_t

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

0x9f7e,	// (0x00009f7e) status_small_pane_g_ParamLimits

0x9f7e,	// (0x00009f7e) status_small_pane_g

0x2601,	// (0x00002601) status_small_pane_t1

0x2624,	// (0x00002624) status_small_wait_pane_ParamLimits

0x2624,	// (0x00002624) status_small_wait_pane

0xb29a,	// (0x0000b29a) aid_levels_signal_ParamLimits

0xb29a,	// (0x0000b29a) aid_levels_signal

0xb2ae,	// (0x0000b2ae) signal_pane_g1_ParamLimits

0xb2ae,	// (0x0000b2ae) signal_pane_g1

0xb2c8,	// (0x0000b2c8) signal_pane_g2_ParamLimits

0xb2c8,	// (0x0000b2c8) signal_pane_g2

0x0001,

0xe34b,	// (0x0000e34b) signal_pane_g_ParamLimits

0xe34b,	// (0x0000e34b) signal_pane_g

0x1c28,	// (0x00001c28) context_pane_g1

0xa86a,	// (0x0000a86a) title_pane_g1

0xa8ac,	// (0x0000a8ac) title_pane_t1

0x043c,	// (0x0000043c) title_pane_t2

0x0462,	// (0x00000462) title_pane_t3

0x0002,

0xe27d,	// (0x0000e27d) title_pane_t

0xbee1,	// (0x0000bee1) aid_levels_battery_ParamLimits

0xbee1,	// (0x0000bee1) aid_levels_battery

0xbef9,	// (0x0000bef9) battery_pane_g1_ParamLimits

0xbef9,	// (0x0000bef9) battery_pane_g1

0xbf14,	// (0x0000bf14) battery_pane_g2_ParamLimits

0xbf14,	// (0x0000bf14) battery_pane_g2

0x0001,

0xe38a,	// (0x0000e38a) battery_pane_g_ParamLimits

0xe38a,	// (0x0000e38a) battery_pane_g

0xc299,	// (0x0000c299) uni_indicator_pane_g1

0xc2ae,	// (0x0000c2ae) uni_indicator_pane_g2

0xc2c4,	// (0x0000c2c4) uni_indicator_pane_g3

0x0005,

0xe3c6,	// (0x0000e3c6) uni_indicator_pane_g

0x1400,	// (0x00001400) navi_icon_pane_ParamLimits

0x1400,	// (0x00001400) navi_icon_pane

0x024e,	// (0x0000024e) navi_midp_pane

0x024e,	// (0x0000024e) navi_navi_pane

0x1400,	// (0x00001400) navi_text_pane_ParamLimits

0x1400,	// (0x00001400) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x0939,	// (0x00000939) status_small_wait_pane_g2

0x0001,

0xa110,	// (0x0000a110) status_small_wait_pane_g

0xc23f,	// (0x0000c23f) navi_navi_icon_text_pane

0xc247,	// (0x0000c247) navi_navi_pane_g1_ParamLimits

0xc247,	// (0x0000c247) navi_navi_pane_g1

0xc259,	// (0x0000c259) navi_navi_pane_g2_ParamLimits

0xc259,	// (0x0000c259) navi_navi_pane_g2

0x0001,

0xe3c1,	// (0x0000e3c1) navi_navi_pane_g_ParamLimits

0xe3c1,	// (0x0000e3c1) navi_navi_pane_g

0xc26b,	// (0x0000c26b) navi_navi_tabs_pane

0xc23f,	// (0x0000c23f) navi_navi_text_pane

0xc23f,	// (0x0000c23f) navi_navi_volume_pane

0x42bf,	// (0x000042bf) navi_text_pane_t1

0x42b3,	// (0x000042b3) navi_icon_pane_g1

0x4207,	// (0x00004207) navi_navi_text_pane_t1

0x41f6,	// (0x000041f6) navi_navi_volume_pane_g1

0xc236,	// (0x0000c236) volume_small_pane

0xc192,	// (0x0000c192) navi_navi_icon_text_pane_g1

0xc19a,	// (0x0000c19a) navi_navi_icon_text_pane_t1

0x3bdd,	// (0x00003bdd) navi_tabs_2_long_pane

0x3bdd,	// (0x00003bdd) navi_tabs_2_pane

0x3bdd,	// (0x00003bdd) navi_tabs_3_long_pane

0x3bdd,	// (0x00003bdd) navi_tabs_3_pane

0x3bdd,	// (0x00003bdd) navi_tabs_4_pane

0xc172,	// (0x0000c172) tabs_2_active_pane_ParamLimits

0xc172,	// (0x0000c172) tabs_2_active_pane

0xc182,	// (0x0000c182) tabs_2_passive_pane_ParamLimits

0xc182,	// (0x0000c182) tabs_2_passive_pane

0xc140,	// (0x0000c140) tabs_3_active_pane_ParamLimits

0xc140,	// (0x0000c140) tabs_3_active_pane

0xc150,	// (0x0000c150) tabs_3_passive_pane_ParamLimits

0xc150,	// (0x0000c150) tabs_3_passive_pane

0xc161,	// (0x0000c161) tabs_3_passive_pane_cp_ParamLimits

0xc161,	// (0x0000c161) tabs_3_passive_pane_cp

0xc0fc,	// (0x0000c0fc) tabs_4_active_pane_ParamLimits

0xc0fc,	// (0x0000c0fc) tabs_4_active_pane

0xc10d,	// (0x0000c10d) tabs_4_passive_pane_ParamLimits

0xc10d,	// (0x0000c10d) tabs_4_passive_pane

0xc11e,	// (0x0000c11e) tabs_4_passive_pane_cp_ParamLimits

0xc11e,	// (0x0000c11e) tabs_4_passive_pane_cp

0xc12f,	// (0x0000c12f) tabs_4_passive_pane_cp2_ParamLimits

0xc12f,	// (0x0000c12f) tabs_4_passive_pane_cp2

0xc0dc,	// (0x0000c0dc) tabs_2_long_active_pane_ParamLimits

0xc0dc,	// (0x0000c0dc) tabs_2_long_active_pane

0xc0ec,	// (0x0000c0ec) tabs_2_long_passive_pane_ParamLimits

0xc0ec,	// (0x0000c0ec) tabs_2_long_passive_pane

0xc0a5,	// (0x0000c0a5) tabs_3_long_active_pane_ParamLimits

0xc0a5,	// (0x0000c0a5) tabs_3_long_active_pane

0xc0b8,	// (0x0000c0b8) tabs_3_long_passive_pane_ParamLimits

0xc0b8,	// (0x0000c0b8) tabs_3_long_passive_pane

0xc0c9,	// (0x0000c0c9) tabs_3_long_passive_pane_cp_ParamLimits

0xc0c9,	// (0x0000c0c9) tabs_3_long_passive_pane_cp

0x3f9a,	// (0x00003f9a) volume_small_pane_g1

0x3fa3,	// (0x00003fa3) volume_small_pane_g2

0x3fac,	// (0x00003fac) volume_small_pane_g3

0x3fb5,	// (0x00003fb5) volume_small_pane_g4

0x3fbe,	// (0x00003fbe) volume_small_pane_g5

0x3fc7,	// (0x00003fc7) volume_small_pane_g6

0x3fd0,	// (0x00003fd0) volume_small_pane_g7

0x3fd9,	// (0x00003fd9) volume_small_pane_g8

0x3fe2,	// (0x00003fe2) volume_small_pane_g9

0x3feb,	// (0x00003feb) volume_small_pane_g10

0x0009,

0xa0aa,	// (0x0000a0aa) volume_small_pane_g

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_active_pane_g1

0xa939,	// (0x0000a939) tabs_3_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_passive_pane_g1

0xa939,	// (0x0000a939) tabs_3_passive_pane_t1

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3

0x4b9d,	// (0x00004b9d) tabs_4_active_pane_g1

0xa94f,	// (0x0000a94f) tabs_4_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3

0x4b9d,	// (0x00004b9d) tabs_4_1_passive_pane_g1

0xa94f,	// (0x0000a94f) tabs_4_1_passive_pane_t1

0x283d,	// (0x0000283d) list_highlight_pane_cp2

0xc392,	// (0x0000c392) list_set_pane_ParamLimits

0xc392,	// (0x0000c392) list_set_pane

0xc420,	// (0x0000c420) main_pane_set_t1_ParamLimits

0xc420,	// (0x0000c420) main_pane_set_t1

0xc440,	// (0x0000c440) main_pane_set_t2_ParamLimits

0xc440,	// (0x0000c440) main_pane_set_t2

0xc454,	// (0x0000c454) main_pane_set_t3_ParamLimits

0xc454,	// (0x0000c454) main_pane_set_t3

0xc466,	// (0x0000c466) main_pane_set_t4_ParamLimits

0xc466,	// (0x0000c466) main_pane_set_t4

0x0003,

0xe40f,	// (0x0000e40f) main_pane_set_t_ParamLimits

0xe40f,	// (0x0000e40f) main_pane_set_t

0xc478,	// (0x0000c478) setting_code_pane

0xc480,	// (0x0000c480) setting_slider_graphic_pane

0xc480,	// (0x0000c480) setting_slider_pane

0xc480,	// (0x0000c480) setting_text_pane

0xc480,	// (0x0000c480) setting_volume_pane

0xa965,	// (0x0000a965) volume_set_pane

0x0474,	// (0x00000474) bg_set_opt_pane_cp

0x04be,	// (0x000004be) setting_slider_pane_t1

0xa96d,	// (0x0000a96d) setting_slider_pane_t2

0xa986,	// (0x0000a986) setting_slider_pane_t3

0x0002,

0xe284,	// (0x0000e284) setting_slider_pane_t

0x0504,	// (0x00000504) slider_set_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1

0xa99d,	// (0x0000a99d) setting_slider_graphic_pane_t1

0xa9ac,	// (0x0000a9ac) setting_slider_graphic_pane_t2

0x0001,

0xe28b,	// (0x0000e28b) setting_slider_graphic_pane_t

0xa9bb,	// (0x0000a9bb) slider_set_pane_cp

0x024e,	// (0x0000024e) input_focus_pane_cp1

0x48a4,	// (0x000048a4) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x024e,	// (0x0000024e) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x0549,	// (0x00000549) setting_code_pane_t1

0x9914,	// (0x00009914) set_text_pane_t1_ParamLimits

0x9914,	// (0x00009914) set_text_pane_t1

0x130e,	// (0x0000130e) set_opt_bg_pane_g1

0x1316,	// (0x00001316) set_opt_bg_pane_g2

0xc352,	// (0x0000c352) set_opt_bg_pane_g3

0x1326,	// (0x00001326) set_opt_bg_pane_g4

0x132e,	// (0x0000132e) set_opt_bg_pane_g5

0x1336,	// (0x00001336) set_opt_bg_pane_g6

0xc35a,	// (0x0000c35a) set_opt_bg_pane_g7

0xc362,	// (0x0000c362) set_opt_bg_pane_g8

0xc36a,	// (0x0000c36a) set_opt_bg_pane_g9

0x0008,

0xe3fc,	// (0x0000e3fc) set_opt_bg_pane_g

0x4813,	// (0x00004813) slider_set_pane_g1

0x4820,	// (0x00004820) slider_set_pane_g2

0x0006,

0xe3ed,	// (0x0000e3ed) slider_set_pane_g

0xc2da,	// (0x0000c2da) volume_set_pane_g1

0xc2e2,	// (0x0000c2e2) volume_set_pane_g2

0xc2ea,	// (0x0000c2ea) volume_set_pane_g3

0xc2f2,	// (0x0000c2f2) volume_set_pane_g4

0xc2fa,	// (0x0000c2fa) volume_set_pane_g5

0xc302,	// (0x0000c302) volume_set_pane_g6

0xc30a,	// (0x0000c30a) volume_set_pane_g7

0xc312,	// (0x0000c312) volume_set_pane_g8

0xc31a,	// (0x0000c31a) volume_set_pane_g9

0xc322,	// (0x0000c322) volume_set_pane_g10

0x0009,

0xe3d3,	// (0x0000e3d3) volume_set_pane_g

0xa9c3,	// (0x0000a9c3) indicator_pane_ParamLimits

0xa9c3,	// (0x0000a9c3) indicator_pane

0xa9eb,	// (0x0000a9eb) main_idle_pane_g2_ParamLimits

0xa9eb,	// (0x0000a9eb) main_idle_pane_g2

0xaa1b,	// (0x0000aa1b) main_pane_idle_g1_ParamLimits

0xaa1b,	// (0x0000aa1b) main_pane_idle_g1

0x05af,	// (0x000005af) popup_clock_digital_analogue_window_ParamLimits

0x05af,	// (0x000005af) popup_clock_digital_analogue_window

0xaa40,	// (0x0000aa40) soft_indicator_pane_ParamLimits

0xaa40,	// (0x0000aa40) soft_indicator_pane

0xaa5a,	// (0x0000aa5a) wallpaper_pane_ParamLimits

0xaa5a,	// (0x0000aa5a) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xaa6c,	// (0x0000aa6c) indicator_pane_g1_ParamLimits

0xaa6c,	// (0x0000aa6c) indicator_pane_g1

0x4d35,	// (0x00004d35) navi_navi_icon_text_pane_srt_g1

0x0601,	// (0x00000601) soft_indicator_pane_t1

0x061b,	// (0x0000061b) aid_ps_area_pane

0xaa85,	// (0x0000aa85) aid_ps_clock_pane

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

0x9d7a,	// (0x00009d7a) power_save_pane_g_ParamLimits

0x9d7a,	// (0x00009d7a) power_save_pane_g

0x066d,	// (0x0000066d) power_save_pane_t1_ParamLimits

0x066d,	// (0x0000066d) power_save_pane_t1

0xaa85,	// (0x0000aa85) aid_ps_clock_pane_ParamLimits

0x0638,	// (0x00000638) aid_ps_indicator_pane_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4

0x0001,

0x9d7f,	// (0x00009d7f) power_save_pane_t_ParamLimits

0x9d7f,	// (0x00009d7f) power_save_pane_t

0x06a9,	// (0x000006a9) power_save_t3_ParamLimits

0x06a9,	// (0x000006a9) power_save_t3

0x0694,	// (0x00000694) power_save_t2_ParamLimits

0x0694,	// (0x00000694) power_save_t2

0x06be,	// (0x000006be) indicator_ps_pane_g1

0xaa91,	// (0x0000aa91) ai_gene_pane_ParamLimits

0xaa91,	// (0x0000aa91) ai_gene_pane

0xaaa8,	// (0x0000aaa8) ai_links_pane_ParamLimits

0xaaa8,	// (0x0000aaa8) ai_links_pane

0xaaba,	// (0x0000aaba) indicator_pane_cp1_ParamLimits

0xaaba,	// (0x0000aaba) indicator_pane_cp1

0xaac9,	// (0x0000aac9) main_pane_idle_g1_cp_ParamLimits

0xaac9,	// (0x0000aac9) main_pane_idle_g1_cp

0x06f7,	// (0x000006f7) popup_ai_links_title_window

0xaae1,	// (0x0000aae1) soft_indicator_pane_cp1_ParamLimits

0xaae1,	// (0x0000aae1) soft_indicator_pane_cp1

0x459e,	// (0x0000459e) ai_links_pane_g1

0x45a7,	// (0x000045a7) grid_ai_links_pane

0xc290,	// (0x0000c290) ai_gene_pane_1

0x458c,	// (0x0000458c) ai_gene_pane_2

0x4595,	// (0x00004595) list_highlight_pane_cp4

0xc274,	// (0x0000c274) cell_ai_link_pane_ParamLimits

0xc274,	// (0x0000c274) cell_ai_link_pane

0x455f,	// (0x0000455f) cell_ai_link_pane_g1

0x0939,	// (0x00000939) cell_ai_link_pane_g2

0x0001,

0xa10b,	// (0x0000a10b) cell_ai_link_pane_g

0x024e,	// (0x0000024e) grid_highlight_cp2

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp1

0x071a,	// (0x0000071a) popup_ai_links_title_window_t1

0x44b1,	// (0x000044b1) ai_gene_pane_1_g1_ParamLimits

0x44b1,	// (0x000044b1) ai_gene_pane_1_g1

0x44bd,	// (0x000044bd) ai_gene_pane_1_g2_ParamLimits

0x44bd,	// (0x000044bd) ai_gene_pane_1_g2

0x0001,

0xa101,	// (0x0000a101) ai_gene_pane_1_g_ParamLimits

0xa101,	// (0x0000a101) ai_gene_pane_1_g

0x44ca,	// (0x000044ca) ai_gene_pane_1_t1_ParamLimits

0x44ca,	// (0x000044ca) ai_gene_pane_1_t1

0x44fe,	// (0x000044fe) grid_ai_soft_ind_pane

0x449c,	// (0x0000449c) ai_gene_pane_2_t1_ParamLimits

0x449c,	// (0x0000449c) ai_gene_pane_2_t1

0xaaf5,	// (0x0000aaf5) main_pane_empty_t1_ParamLimits

0xaaf5,	// (0x0000aaf5) main_pane_empty_t1

0xab12,	// (0x0000ab12) main_pane_empty_t2_ParamLimits

0xab12,	// (0x0000ab12) main_pane_empty_t2

0xab2a,	// (0x0000ab2a) main_pane_empty_t3_ParamLimits

0xab2a,	// (0x0000ab2a) main_pane_empty_t3

0xab3d,	// (0x0000ab3d) main_pane_empty_t4_ParamLimits

0xab3d,	// (0x0000ab3d) main_pane_empty_t4

0xab50,	// (0x0000ab50) main_pane_empty_t5_ParamLimits

0xab50,	// (0x0000ab50) main_pane_empty_t5

0x0004,

0xe290,	// (0x0000e290) main_pane_empty_t_ParamLimits

0xe290,	// (0x0000e290) main_pane_empty_t

0x1400,	// (0x00001400) bg_popup_window_pane_ParamLimits

0x1400,	// (0x00001400) bg_popup_window_pane

0x4216,	// (0x00004216) find_popup_pane_cp2_ParamLimits

0x4216,	// (0x00004216) find_popup_pane_cp2

0x4222,	// (0x00004222) heading_pane_ParamLimits

0x4222,	// (0x00004222) heading_pane

0x024e,	// (0x0000024e) bg_popup_sub_pane

0xc1b7,	// (0x0000c1b7) bg_popup_window_pane_g1_ParamLimits

0xc1b7,	// (0x0000c1b7) bg_popup_window_pane_g1

0xc1c6,	// (0x0000c1c6) bg_popup_window_pane_g2_ParamLimits

0xc1c6,	// (0x0000c1c6) bg_popup_window_pane_g2

0xc1d2,	// (0x0000c1d2) bg_popup_window_pane_g3_ParamLimits

0xc1d2,	// (0x0000c1d2) bg_popup_window_pane_g3

0xc1de,	// (0x0000c1de) bg_popup_window_pane_g4_ParamLimits

0xc1de,	// (0x0000c1de) bg_popup_window_pane_g4

0xc1ed,	// (0x0000c1ed) bg_popup_window_pane_g5_ParamLimits

0xc1ed,	// (0x0000c1ed) bg_popup_window_pane_g5

0xc1fd,	// (0x0000c1fd) bg_popup_window_pane_g6_ParamLimits

0xc1fd,	// (0x0000c1fd) bg_popup_window_pane_g6

0xc209,	// (0x0000c209) bg_popup_window_pane_g7_ParamLimits

0xc209,	// (0x0000c209) bg_popup_window_pane_g7

0xc218,	// (0x0000c218) bg_popup_window_pane_g8_ParamLimits

0xc218,	// (0x0000c218) bg_popup_window_pane_g8

0xc227,	// (0x0000c227) bg_popup_window_pane_g9_ParamLimits

0xc227,	// (0x0000c227) bg_popup_window_pane_g9

0x41ea,	// (0x000041ea) bg_popup_window_pane_g10_ParamLimits

0x41ea,	// (0x000041ea) bg_popup_window_pane_g10

0x0009,

0xe3ac,	// (0x0000e3ac) bg_popup_window_pane_g_ParamLimits

0xe3ac,	// (0x0000e3ac) bg_popup_window_pane_g

0x4113,	// (0x00004113) bg_popup_heading_pane_ParamLimits

0x4113,	// (0x00004113) bg_popup_heading_pane

0x4c9c,	// (0x00004c9c) tabs_4_passive_pane_cp_srt_ParamLimits

0x4c9c,	// (0x00004c9c) tabs_4_passive_pane_cp_srt

0x4cae,	// (0x00004cae) tabs_4_passive_pane_srt_ParamLimits

0x4127,	// (0x00004127) heading_pane_g2

0x4cae,	// (0x00004cae) tabs_4_passive_pane_srt

0x3395,	// (0x00003395) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3395,	// (0x00003395) bg_passive_tab_pane_cp3_srt

0x412f,	// (0x0000412f) heading_pane_t1_ParamLimits

0x412f,	// (0x0000412f) heading_pane_t1

0x4146,	// (0x00004146) heading_pane_t2_ParamLimits

0x4146,	// (0x00004146) heading_pane_t2

0x0001,

0xa0c4,	// (0x0000a0c4) heading_pane_t_ParamLimits

0xa0c4,	// (0x0000a0c4) heading_pane_t

0x3b45,	// (0x00003b45) bg_popup_heading_pane_g1

0x3bee,	// (0x00003bee) bg_popup_heading_pane_g2

0x3bf6,	// (0x00003bf6) bg_popup_heading_pane_g3

0x3bfe,	// (0x00003bfe) bg_popup_heading_pane_g4

0x3c06,	// (0x00003c06) bg_popup_heading_pane_g5

0x3c0e,	// (0x00003c0e) bg_popup_heading_pane_g6

0x3c16,	// (0x00003c16) bg_popup_heading_pane_g7

0x3c1e,	// (0x00003c1e) bg_popup_heading_pane_g8

0x3c26,	// (0x00003c26) bg_popup_heading_pane_g9

0x0008,

0xa080,	// (0x0000a080) bg_popup_heading_pane_g

0x320b,	// (0x0000320b) bg_popup_sub_pane_g1

0x3213,	// (0x00003213) bg_popup_sub_pane_g2

0x321b,	// (0x0000321b) bg_popup_sub_pane_g3

0x3223,	// (0x00003223) bg_popup_sub_pane_g4

0x322b,	// (0x0000322b) bg_popup_sub_pane_g5

0x3233,	// (0x00003233) bg_popup_sub_pane_g6

0x323b,	// (0x0000323b) bg_popup_sub_pane_g7

0x3243,	// (0x00003243) bg_popup_sub_pane_g8

0x324b,	// (0x0000324b) bg_popup_sub_pane_g9

0x0008,

0xa05a,	// (0x0000a05a) bg_popup_sub_pane_g

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

0x9d8f,	// (0x00009d8f) popup_note_window_t_ParamLimits

0x9d8f,	// (0x00009d8f) popup_note_window_t

0x084d,	// (0x0000084d) bg_popup_window_pane_cp6_ParamLimits

0x084d,	// (0x0000084d) bg_popup_window_pane_cp6

0x3ac1,	// (0x00003ac1) popup_note_image_window_g1_ParamLimits

0x3ac1,	// (0x00003ac1) popup_note_image_window_g1

0x3acd,	// (0x00003acd) popup_note_image_window_g2_ParamLimits

0x3acd,	// (0x00003acd) popup_note_image_window_g2

0x0001,

0xa04e,	// (0x0000a04e) popup_note_image_window_g_ParamLimits

0xa04e,	// (0x0000a04e) popup_note_image_window_g

0x3ae6,	// (0x00003ae6) popup_note_image_window_t1_ParamLimits

0x3ae6,	// (0x00003ae6) popup_note_image_window_t1

0x3aff,	// (0x00003aff) popup_note_image_window_t2_ParamLimits

0x3aff,	// (0x00003aff) popup_note_image_window_t2

0x3b18,	// (0x00003b18) popup_note_image_window_t3_ParamLimits

0x3b18,	// (0x00003b18) popup_note_image_window_t3

0x0002,

0xa053,	// (0x0000a053) popup_note_image_window_t_ParamLimits

0xa053,	// (0x0000a053) popup_note_image_window_t

0x3990,	// (0x00003990) bg_popup_window_pane_cp7_ParamLimits

0x3990,	// (0x00003990) bg_popup_window_pane_cp7

0x39c0,	// (0x000039c0) popup_note_wait_window_g1_ParamLimits

0x39c0,	// (0x000039c0) popup_note_wait_window_g1

0x39cc,	// (0x000039cc) popup_note_wait_window_g2_ParamLimits

0x39cc,	// (0x000039cc) popup_note_wait_window_g2

0x0002,

0xa03c,	// (0x0000a03c) popup_note_wait_window_g_ParamLimits

0xa03c,	// (0x0000a03c) popup_note_wait_window_g

0x39e4,	// (0x000039e4) popup_note_wait_window_t1_ParamLimits

0x39e4,	// (0x000039e4) popup_note_wait_window_t1

0x3a0b,	// (0x00003a0b) popup_note_wait_window_t2_ParamLimits

0x3a0b,	// (0x00003a0b) popup_note_wait_window_t2

0x3a28,	// (0x00003a28) popup_note_wait_window_t3_ParamLimits

0x3a28,	// (0x00003a28) popup_note_wait_window_t3

0x3a3b,	// (0x00003a3b) popup_note_wait_window_t4_ParamLimits

0x3a3b,	// (0x00003a3b) popup_note_wait_window_t4

0x0004,

0xa043,	// (0x0000a043) popup_note_wait_window_t_ParamLimits

0xa043,	// (0x0000a043) popup_note_wait_window_t

0x3a60,	// (0x00003a60) wait_bar_pane_ParamLimits

0x3a60,	// (0x00003a60) wait_bar_pane

0x024e,	// (0x0000024e) wait_anim_pane

0x024e,	// (0x0000024e) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0x9f0e,	// (0x00009f0e) wait_anim_pane_g

0x3940,	// (0x00003940) wait_border_pane_g1

0x3949,	// (0x00003949) wait_border_pane_g2

0x3952,	// (0x00003952) wait_border_pane_g3

0x0002,

0xa035,	// (0x0000a035) wait_border_pane_g

0x37b0,	// (0x000037b0) bg_popup_window_pane_cp16_ParamLimits

0x37b0,	// (0x000037b0) bg_popup_window_pane_cp16

0x38b0,	// (0x000038b0) indicator_popup_pane_cp4_ParamLimits

0x38b0,	// (0x000038b0) indicator_popup_pane_cp4

0x38c4,	// (0x000038c4) popup_query_data_window_t1_ParamLimits

0x38c4,	// (0x000038c4) popup_query_data_window_t1

0x38d6,	// (0x000038d6) popup_query_data_window_t2_ParamLimits

0x38d6,	// (0x000038d6) popup_query_data_window_t2

0x38ef,	// (0x000038ef) popup_query_data_window_t3_ParamLimits

0x38ef,	// (0x000038ef) popup_query_data_window_t3

0x0002,

0xa02e,	// (0x0000a02e) popup_query_data_window_t_ParamLimits

0xa02e,	// (0x0000a02e) popup_query_data_window_t

0x3909,	// (0x00003909) query_popup_data_pane_ParamLimits

0x3909,	// (0x00003909) query_popup_data_pane

0x391d,	// (0x0000391d) query_popup_data_pane_cp1_ParamLimits

0x391d,	// (0x0000391d) query_popup_data_pane_cp1

0x37b0,	// (0x000037b0) bg_popup_window_pane_cp10_ParamLimits

0x37b0,	// (0x000037b0) bg_popup_window_pane_cp10

0x37e2,	// (0x000037e2) indicator_popup_pane_ParamLimits

0x37e2,	// (0x000037e2) indicator_popup_pane

0x3804,	// (0x00003804) popup_query_code_window_t1_ParamLimits

0x3804,	// (0x00003804) popup_query_code_window_t1

0x381e,	// (0x0000381e) popup_query_code_window_t2_ParamLimits

0x381e,	// (0x0000381e) popup_query_code_window_t2

0x3867,	// (0x00003867) popup_query_code_window_t3_ParamLimits

0x3867,	// (0x00003867) popup_query_code_window_t3

0x0002,

0xa027,	// (0x0000a027) popup_query_code_window_t_ParamLimits

0xa027,	// (0x0000a027) popup_query_code_window_t

0x3896,	// (0x00003896) query_popup_pane_ParamLimits

0x3896,	// (0x00003896) query_popup_pane

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

0x9d9a,	// (0x00009d9a) popup_query_data_code_window_t_ParamLimits

0x9d9a,	// (0x00009d9a) popup_query_data_code_window_t

0x2157,	// (0x00002157) list_single_midp_graphic_pane_g3

0x08f6,	// (0x000008f6) query_popup_data_pane_cp2_ParamLimits

0x0909,	// (0x00000909) query_popup_pane_cp2_ParamLimits

0x0909,	// (0x00000909) query_popup_pane_cp2

0x024e,	// (0x0000024e) bg_popup_window_pane_cp11

0x37a8,	// (0x000037a8) heading_pane_cp5

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

0x9da3,	// (0x00009da3) popup_info_list_pane_t_ParamLimits

0x9da3,	// (0x00009da3) popup_info_list_pane_t

0x024e,	// (0x0000024e) bg_popup_window_pane_cp12

0x4d6c,	// (0x00004d6c) find_popup_pane

0x0474,	// (0x00000474) bg_popup_window_pane_cp3

0x097d,	// (0x0000097d) heading_pane_cp3

0x0989,	// (0x00000989) listscroll_popup_graphic_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp4

0xabb3,	// (0x0000abb3) heading_pane_cp4

0x09ed,	// (0x000009ed) listscroll_popup_colour_pane

0x09f5,	// (0x000009f5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x09f5,	// (0x000009f5) cell_large_graphic_colour_none_popup_pane

0xabbb,	// (0x0000abbb) grid_large_graphic_colour_popup_pane_ParamLimits

0xabbb,	// (0x0000abbb) grid_large_graphic_colour_popup_pane

0xabd7,	// (0x0000abd7) listscroll_popup_colour_pane_g1_ParamLimits

0xabd7,	// (0x0000abd7) listscroll_popup_colour_pane_g1

0xabee,	// (0x0000abee) listscroll_popup_colour_pane_g2_ParamLimits

0xabee,	// (0x0000abee) listscroll_popup_colour_pane_g2

0x0a4c,	// (0x00000a4c) listscroll_popup_colour_pane_g3_ParamLimits

0x0a4c,	// (0x00000a4c) listscroll_popup_colour_pane_g3

0xac02,	// (0x0000ac02) listscroll_popup_colour_pane_g4_ParamLimits

0xac02,	// (0x0000ac02) listscroll_popup_colour_pane_g4

0x0003,

0xe29b,	// (0x0000e29b) listscroll_popup_colour_pane_g_ParamLimits

0xe29b,	// (0x0000e29b) listscroll_popup_colour_pane_g

0x0a6b,	// (0x00000a6b) scroll_pane_cp6_ParamLimits

0x0a6b,	// (0x00000a6b) scroll_pane_cp6

0xac11,	// (0x0000ac11) cell_large_graphic_colour_popup_pane_ParamLimits

0xac11,	// (0x0000ac11) cell_large_graphic_colour_popup_pane

0x0a9c,	// (0x00000a9c) cell_large_graphic_colour_none_popup_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp5

0x0aab,	// (0x00000aab) cell_large_graphic_colour_popup_pane_g1

0x0ab3,	// (0x00000ab3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0x9db1,	// (0x00009db1) cell_large_graphic_colour_popup_pane_g

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

0x9db6,	// (0x00009db6) popup_snote_single_text_window_t_ParamLimits

0x9db6,	// (0x00009db6) popup_snote_single_text_window_t

0x0bbb,	// (0x00000bbb) bg_popup_window_pane_cp9_ParamLimits

0x0bbb,	// (0x00000bbb) bg_popup_window_pane_cp9

0x0ae7,	// (0x00000ae7) popup_snote_single_graphic_window_g1_ParamLimits

0x0ae7,	// (0x00000ae7) popup_snote_single_graphic_window_g1

0x0bc9,	// (0x00000bc9) popup_snote_single_graphic_window_g2_ParamLimits

0x0bc9,	// (0x00000bc9) popup_snote_single_graphic_window_g2

0x0001,

0x9dc1,	// (0x00009dc1) popup_snote_single_graphic_window_g_ParamLimits

0x9dc1,	// (0x00009dc1) popup_snote_single_graphic_window_g

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

0x9dc6,	// (0x00009dc6) popup_snote_single_graphic_window_t_ParamLimits

0x9dc6,	// (0x00009dc6) popup_snote_single_graphic_window_t

0xc5a8,	// (0x0000c5a8) grid_graphic_popup_pane_ParamLimits

0xc5a8,	// (0x0000c5a8) grid_graphic_popup_pane

0xc5cb,	// (0x0000c5cb) listscroll_popup_graphic_pane_g1_ParamLimits

0xc5cb,	// (0x0000c5cb) listscroll_popup_graphic_pane_g1

0xc5df,	// (0x0000c5df) listscroll_popup_graphic_pane_g2_ParamLimits

0xc5df,	// (0x0000c5df) listscroll_popup_graphic_pane_g2

0x0001,

0xe432,	// (0x0000e432) listscroll_popup_graphic_pane_g_ParamLimits

0xe432,	// (0x0000e432) listscroll_popup_graphic_pane_g

0x4c6c,	// (0x00004c6c) scroll_pane_cp5

0xc563,	// (0x0000c563) cell_graphic_popup_pane_ParamLimits

0xc563,	// (0x0000c563) cell_graphic_popup_pane

0x4ba5,	// (0x00004ba5) cell_graphic_popup_pane_g1

0x4bad,	// (0x00004bad) cell_graphic_popup_pane_g2

0x0abb,	// (0x00000abb) cell_graphic_popup_pane_g3

0x0002,

0xa19d,	// (0x0000a19d) cell_graphic_popup_pane_g

0x4bb6,	// (0x00004bb6) cell_graphic_popup_pane_t2

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp3

0x0c0d,	// (0x00000c0d) list_gen_pane_ParamLimits

0x0c0d,	// (0x00000c0d) list_gen_pane

0x0c3e,	// (0x00000c3e) scroll_pane

0xc536,	// (0x0000c536) bg_list_pane_g1_ParamLimits

0xc536,	// (0x0000c536) bg_list_pane_g1

0x4b3c,	// (0x00004b3c) bg_list_pane_g2_ParamLimits

0x4b3c,	// (0x00004b3c) bg_list_pane_g2

0x4b4f,	// (0x00004b4f) bg_list_pane_g3_ParamLimits

0x4b4f,	// (0x00004b4f) bg_list_pane_g3

0x4b61,	// (0x00004b61) bg_list_pane_g4_ParamLimits

0x4b61,	// (0x00004b61) bg_list_pane_g4

0xc551,	// (0x0000c551) bg_list_pane_g5_ParamLimits

0xc551,	// (0x0000c551) bg_list_pane_g5

0x0004,

0xe427,	// (0x0000e427) bg_list_pane_g_ParamLimits

0xe427,	// (0x0000e427) bg_list_pane_g

0xc4c6,	// (0x0000c4c6) list_double2_graphic_large_graphic_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double2_graphic_large_graphic_pane

0xc4c6,	// (0x0000c4c6) list_double2_graphic_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double2_graphic_pane

0xc4c6,	// (0x0000c4c6) list_double2_large_graphic_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double2_large_graphic_pane

0xc4c6,	// (0x0000c4c6) list_double2_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double2_pane

0xc4c6,	// (0x0000c4c6) list_double_graphic_heading_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double_graphic_heading_pane

0xc4c6,	// (0x0000c4c6) list_double_graphic_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double_graphic_pane

0xc4c6,	// (0x0000c4c6) list_double_heading_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double_heading_pane

0xc4c6,	// (0x0000c4c6) list_double_large_graphic_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double_large_graphic_pane

0xc4c6,	// (0x0000c4c6) list_double_number_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double_number_pane

0xc4c6,	// (0x0000c4c6) list_double_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double_pane

0xc4c6,	// (0x0000c4c6) list_double_time_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_double_time_pane

0xc4c6,	// (0x0000c4c6) list_setting_number_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_setting_number_pane

0xc4c6,	// (0x0000c4c6) list_setting_pane_ParamLimits

0xc4c6,	// (0x0000c4c6) list_setting_pane

0xc4d7,	// (0x0000c4d7) list_single_2graphic_pane_ParamLimits

0xc4d7,	// (0x0000c4d7) list_single_2graphic_pane

0xc4d7,	// (0x0000c4d7) list_single_graphic_heading_pane_ParamLimits

0xc4d7,	// (0x0000c4d7) list_single_graphic_heading_pane

0xc4d7,	// (0x0000c4d7) list_single_graphic_pane_ParamLimits

0xc4d7,	// (0x0000c4d7) list_single_graphic_pane

0xc4d7,	// (0x0000c4d7) list_single_heading_pane_ParamLimits

0xc4d7,	// (0x0000c4d7) list_single_heading_pane

0xc524,	// (0x0000c524) list_single_large_graphic_pane_ParamLimits

0xc524,	// (0x0000c524) list_single_large_graphic_pane

0xc4d7,	// (0x0000c4d7) list_single_number_heading_pane_ParamLimits

0xc4d7,	// (0x0000c4d7) list_single_number_heading_pane

0xc4d7,	// (0x0000c4d7) list_single_number_pane_ParamLimits

0xc4d7,	// (0x0000c4d7) list_single_number_pane

0xc4d7,	// (0x0000c4d7) list_single_pane_ParamLimits

0xc4d7,	// (0x0000c4d7) list_single_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp1

0x0e80,	// (0x00000e80) list_single_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_pane_g1

0x0dab,	// (0x00000dab) list_single_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_pane_g2

0x0001,

0x9e71,	// (0x00009e71) list_single_pane_g_ParamLimits

0x9e71,	// (0x00009e71) list_single_pane_g

0x0db7,	// (0x00000db7) list_single_pane_t1_ParamLimits

0x0db7,	// (0x00000db7) list_single_pane_t1

0x0e80,	// (0x00000e80) list_single_number_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_pane_g1

0x0dab,	// (0x00000dab) list_single_number_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_pane_g2

0x0001,

0x9e71,	// (0x00009e71) list_single_number_pane_g_ParamLimits

0x9e71,	// (0x00009e71) list_single_number_pane_g

0x0e8c,	// (0x00000e8c) list_single_number_pane_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_single_number_pane_t1

0xc32a,	// (0x0000c32a) list_single_number_pane_t2_ParamLimits

0xc32a,	// (0x0000c32a) list_single_number_pane_t2

0x0001,

0xe3e8,	// (0x0000e3e8) list_single_number_pane_t_ParamLimits

0xe3e8,	// (0x0000e3e8) list_single_number_pane_t

0x0e74,	// (0x00000e74) list_single_graphic_pane_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_pane_g1

0x0e80,	// (0x00000e80) list_single_graphic_pane_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_pane_g2

0x0dab,	// (0x00000dab) list_single_graphic_pane_g3_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_pane_g3

0x0002,

0x9e25,	// (0x00009e25) list_single_graphic_pane_g_ParamLimits

0x9e25,	// (0x00009e25) list_single_graphic_pane_g

0x0e8c,	// (0x00000e8c) list_single_graphic_pane_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_single_graphic_pane_t1

0x0e80,	// (0x00000e80) list_single_heading_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_g1

0x0dab,	// (0x00000dab) list_single_heading_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_heading_pane_g2

0x0001,

0x9e71,	// (0x00009e71) list_single_heading_pane_g_ParamLimits

0x9e71,	// (0x00009e71) list_single_heading_pane_g

0x0f49,	// (0x00000f49) list_single_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_heading_pane_t1

0xac38,	// (0x0000ac38) list_single_heading_pane_t2_ParamLimits

0xac38,	// (0x0000ac38) list_single_heading_pane_t2

0x0001,

0xe2a4,	// (0x0000e2a4) list_single_heading_pane_t_ParamLimits

0xe2a4,	// (0x0000e2a4) list_single_heading_pane_t

0x0e80,	// (0x00000e80) list_single_number_heading_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_heading_pane_g1

0x0dab,	// (0x00000dab) list_single_number_heading_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_heading_pane_g2

0x0001,

0x9e71,	// (0x00009e71) list_single_number_heading_pane_g_ParamLimits

0x9e71,	// (0x00009e71) list_single_number_heading_pane_g

0x0f49,	// (0x00000f49) list_single_number_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_number_heading_pane_t1

0xac4a,	// (0x0000ac4a) list_single_number_heading_pane_t2_ParamLimits

0xac4a,	// (0x0000ac4a) list_single_number_heading_pane_t2

0x52ea,	// (0x000052ea) list_single_number_heading_pane_t3_ParamLimits

0x52ea,	// (0x000052ea) list_single_number_heading_pane_t3

0x0002,

0xe2a9,	// (0x0000e2a9) list_single_number_heading_pane_t_ParamLimits

0xe2a9,	// (0x0000e2a9) list_single_number_heading_pane_t

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_g1

0xac5c,	// (0x0000ac5c) list_single_graphic_heading_pane_g4_ParamLimits

0xac5c,	// (0x0000ac5c) list_single_graphic_heading_pane_g4

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_g5

0x0002,

0xe2b0,	// (0x0000e2b0) list_single_graphic_heading_pane_g_ParamLimits

0xe2b0,	// (0x0000e2b0) list_single_graphic_heading_pane_g

0x0f49,	// (0x00000f49) list_single_graphic_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_graphic_heading_pane_t1

0xac6d,	// (0x0000ac6d) list_single_graphic_heading_pane_t2_ParamLimits

0xac6d,	// (0x0000ac6d) list_single_graphic_heading_pane_t2

0x0001,

0xe2b7,	// (0x0000e2b7) list_single_graphic_heading_pane_t_ParamLimits

0xe2b7,	// (0x0000e2b7) list_single_graphic_heading_pane_t

0x0d1a,	// (0x00000d1a) list_single_large_graphic_pane_g1_ParamLimits

0x0d1a,	// (0x00000d1a) list_single_large_graphic_pane_g1

0x0d26,	// (0x00000d26) list_single_large_graphic_pane_g2_ParamLimits

0x0d26,	// (0x00000d26) list_single_large_graphic_pane_g2

0x0d32,	// (0x00000d32) list_single_large_graphic_pane_g3_ParamLimits

0x0d32,	// (0x00000d32) list_single_large_graphic_pane_g3

0x0002,

0x9df5,	// (0x00009df5) list_single_large_graphic_pane_g_ParamLimits

0x9df5,	// (0x00009df5) list_single_large_graphic_pane_g

0x3949,	// (0x00003949) wait_border_pane_g2_copy1

0x0d3e,	// (0x00000d3e) list_single_large_graphic_pane_g4_cp2

0x0d46,	// (0x00000d46) list_single_large_graphic_pane_t1_ParamLimits

0x0d46,	// (0x00000d46) list_single_large_graphic_pane_t1

0xac7f,	// (0x0000ac7f) list_double_pane_g1_ParamLimits

0xac7f,	// (0x0000ac7f) list_double_pane_g1

0xac8b,	// (0x0000ac8b) list_double_pane_g2_ParamLimits

0xac8b,	// (0x0000ac8b) list_double_pane_g2

0x0001,

0xe2bc,	// (0x0000e2bc) list_double_pane_g_ParamLimits

0xe2bc,	// (0x0000e2bc) list_double_pane_g

0xac97,	// (0x0000ac97) list_double_pane_t1_ParamLimits

0xac97,	// (0x0000ac97) list_double_pane_t1

0xacad,	// (0x0000acad) list_double_pane_t2_ParamLimits

0xacad,	// (0x0000acad) list_double_pane_t2

0x0001,

0xe2c1,	// (0x0000e2c1) list_double_pane_t_ParamLimits

0xe2c1,	// (0x0000e2c1) list_double_pane_t

0xacbf,	// (0x0000acbf) list_double2_pane_g1_ParamLimits

0xacbf,	// (0x0000acbf) list_double2_pane_g1

0xac8b,	// (0x0000ac8b) list_double2_pane_g2_ParamLimits

0xac8b,	// (0x0000ac8b) list_double2_pane_g2

0x0001,

0xe2c6,	// (0x0000e2c6) list_double2_pane_g_ParamLimits

0xe2c6,	// (0x0000e2c6) list_double2_pane_g

0xac97,	// (0x0000ac97) list_double2_pane_t1_ParamLimits

0xac97,	// (0x0000ac97) list_double2_pane_t1

0xacd0,	// (0x0000acd0) list_double2_pane_t2_ParamLimits

0xacd0,	// (0x0000acd0) list_double2_pane_t2

0x0001,

0xe2cb,	// (0x0000e2cb) list_double2_pane_t_ParamLimits

0xe2cb,	// (0x0000e2cb) list_double2_pane_t

0xac7f,	// (0x0000ac7f) list_double_number_pane_g1_ParamLimits

0xac7f,	// (0x0000ac7f) list_double_number_pane_g1

0xac8b,	// (0x0000ac8b) list_double_number_pane_g2_ParamLimits

0xac8b,	// (0x0000ac8b) list_double_number_pane_g2

0x0001,

0xe2bc,	// (0x0000e2bc) list_double_number_pane_g_ParamLimits

0xe2bc,	// (0x0000e2bc) list_double_number_pane_g

0xace2,	// (0x0000ace2) list_double_number_pane_t1_ParamLimits

0xace2,	// (0x0000ace2) list_double_number_pane_t1

0xacf4,	// (0x0000acf4) list_double_number_pane_t2_ParamLimits

0xacf4,	// (0x0000acf4) list_double_number_pane_t2

0xad0a,	// (0x0000ad0a) list_double_number_pane_t3_ParamLimits

0xad0a,	// (0x0000ad0a) list_double_number_pane_t3

0x0002,

0xe2d0,	// (0x0000e2d0) list_double_number_pane_t_ParamLimits

0xe2d0,	// (0x0000e2d0) list_double_number_pane_t

0xad1c,	// (0x0000ad1c) list_double_graphic_pane_g1_ParamLimits

0xad1c,	// (0x0000ad1c) list_double_graphic_pane_g1

0xad28,	// (0x0000ad28) list_double_graphic_pane_g2_ParamLimits

0xad28,	// (0x0000ad28) list_double_graphic_pane_g2

0xad37,	// (0x0000ad37) list_double_graphic_pane_g3_ParamLimits

0xad37,	// (0x0000ad37) list_double_graphic_pane_g3

0x0003,

0xe2d7,	// (0x0000e2d7) list_double_graphic_pane_g_ParamLimits

0xe2d7,	// (0x0000e2d7) list_double_graphic_pane_g

0xad4f,	// (0x0000ad4f) list_double_graphic_pane_t1_ParamLimits

0xad4f,	// (0x0000ad4f) list_double_graphic_pane_t1

0xad65,	// (0x0000ad65) list_double_graphic_pane_t2_ParamLimits

0xad65,	// (0x0000ad65) list_double_graphic_pane_t2

0x0001,

0xe2e0,	// (0x0000e2e0) list_double_graphic_pane_t_ParamLimits

0xe2e0,	// (0x0000e2e0) list_double_graphic_pane_t

0xad1c,	// (0x0000ad1c) list_double2_graphic_pane_g1_ParamLimits

0xad1c,	// (0x0000ad1c) list_double2_graphic_pane_g1

0xac7f,	// (0x0000ac7f) list_double2_graphic_pane_g2_ParamLimits

0xac7f,	// (0x0000ac7f) list_double2_graphic_pane_g2

0xac8b,	// (0x0000ac8b) list_double2_graphic_pane_g3_ParamLimits

0xac8b,	// (0x0000ac8b) list_double2_graphic_pane_g3

0x0002,

0xe2e5,	// (0x0000e2e5) list_double2_graphic_pane_g_ParamLimits

0xe2e5,	// (0x0000e2e5) list_double2_graphic_pane_g

0xacf4,	// (0x0000acf4) list_double2_graphic_pane_t1_ParamLimits

0xacf4,	// (0x0000acf4) list_double2_graphic_pane_t1

0xad77,	// (0x0000ad77) list_double2_graphic_pane_t2_ParamLimits

0xad77,	// (0x0000ad77) list_double2_graphic_pane_t2

0x0001,

0xe2ec,	// (0x0000e2ec) list_double2_graphic_pane_t_ParamLimits

0xe2ec,	// (0x0000e2ec) list_double2_graphic_pane_t

0xad89,	// (0x0000ad89) list_double_large_graphic_pane_g1_ParamLimits

0xad89,	// (0x0000ad89) list_double_large_graphic_pane_g1

0xacbf,	// (0x0000acbf) list_double_large_graphic_pane_g2_ParamLimits

0xacbf,	// (0x0000acbf) list_double_large_graphic_pane_g2

0xac8b,	// (0x0000ac8b) list_double_large_graphic_pane_g3_ParamLimits

0xac8b,	// (0x0000ac8b) list_double_large_graphic_pane_g3

0xadb2,	// (0x0000adb2) list_double_large_graphic_pane_g4_ParamLimits

0xadb2,	// (0x0000adb2) list_double_large_graphic_pane_g4

0x0004,

0xe2f1,	// (0x0000e2f1) list_double_large_graphic_pane_g_ParamLimits

0xe2f1,	// (0x0000e2f1) list_double_large_graphic_pane_g

0xadc3,	// (0x0000adc3) list_double_large_graphic_pane_t1_ParamLimits

0xadc3,	// (0x0000adc3) list_double_large_graphic_pane_t1

0xaddc,	// (0x0000addc) list_double_large_graphic_pane_t2_ParamLimits

0xaddc,	// (0x0000addc) list_double_large_graphic_pane_t2

0x0001,

0xe2fc,	// (0x0000e2fc) list_double_large_graphic_pane_t_ParamLimits

0xe2fc,	// (0x0000e2fc) list_double_large_graphic_pane_t

0xadee,	// (0x0000adee) list_double2_large_graphic_pane_g1_ParamLimits

0xadee,	// (0x0000adee) list_double2_large_graphic_pane_g1

0xacbf,	// (0x0000acbf) list_double2_large_graphic_pane_g2_ParamLimits

0xacbf,	// (0x0000acbf) list_double2_large_graphic_pane_g2

0xac8b,	// (0x0000ac8b) list_double2_large_graphic_pane_g3_ParamLimits

0xac8b,	// (0x0000ac8b) list_double2_large_graphic_pane_g3

0x0002,

0xe301,	// (0x0000e301) list_double2_large_graphic_pane_g_ParamLimits

0xe301,	// (0x0000e301) list_double2_large_graphic_pane_g

0xadfa,	// (0x0000adfa) list_double2_large_graphic_pane_t1_ParamLimits

0xadfa,	// (0x0000adfa) list_double2_large_graphic_pane_t1

0xae10,	// (0x0000ae10) list_double2_large_graphic_pane_t2_ParamLimits

0xae10,	// (0x0000ae10) list_double2_large_graphic_pane_t2

0x0001,

0xe308,	// (0x0000e308) list_double2_large_graphic_pane_t_ParamLimits

0xe308,	// (0x0000e308) list_double2_large_graphic_pane_t

0xae22,	// (0x0000ae22) list_double_heading_pane_g1_ParamLimits

0xae22,	// (0x0000ae22) list_double_heading_pane_g1

0x0c8b,	// (0x00000c8b) list_double_heading_pane_g2_ParamLimits

0x0c8b,	// (0x00000c8b) list_double_heading_pane_g2

0x0001,

0xe30d,	// (0x0000e30d) list_double_heading_pane_g_ParamLimits

0xe30d,	// (0x0000e30d) list_double_heading_pane_g

0xae33,	// (0x0000ae33) list_double_heading_pane_t1_ParamLimits

0xae33,	// (0x0000ae33) list_double_heading_pane_t1

0xae49,	// (0x0000ae49) list_double_heading_pane_t2_ParamLimits

0xae49,	// (0x0000ae49) list_double_heading_pane_t2

0x0001,

0xe312,	// (0x0000e312) list_double_heading_pane_t_ParamLimits

0xe312,	// (0x0000e312) list_double_heading_pane_t

0x0e19,	// (0x00000e19) list_double_graphic_heading_pane_g1_ParamLimits

0x0e19,	// (0x00000e19) list_double_graphic_heading_pane_g1

0xae22,	// (0x0000ae22) list_double_graphic_heading_pane_g2_ParamLimits

0xae22,	// (0x0000ae22) list_double_graphic_heading_pane_g2

0x0c8b,	// (0x00000c8b) list_double_graphic_heading_pane_g3_ParamLimits

0x0c8b,	// (0x00000c8b) list_double_graphic_heading_pane_g3

0x0002,

0xe317,	// (0x0000e317) list_double_graphic_heading_pane_g_ParamLimits

0xe317,	// (0x0000e317) list_double_graphic_heading_pane_g

0xae5b,	// (0x0000ae5b) list_double_graphic_heading_pane_t1_ParamLimits

0xae5b,	// (0x0000ae5b) list_double_graphic_heading_pane_t1

0xae71,	// (0x0000ae71) list_double_graphic_heading_pane_t2_ParamLimits

0xae71,	// (0x0000ae71) list_double_graphic_heading_pane_t2

0x0001,

0xe31e,	// (0x0000e31e) list_double_graphic_heading_pane_t_ParamLimits

0xe31e,	// (0x0000e31e) list_double_graphic_heading_pane_t

0xacbf,	// (0x0000acbf) list_double_time_pane_g1_ParamLimits

0xacbf,	// (0x0000acbf) list_double_time_pane_g1

0xac8b,	// (0x0000ac8b) list_double_time_pane_g2_ParamLimits

0xac8b,	// (0x0000ac8b) list_double_time_pane_g2

0x0001,

0xe2c6,	// (0x0000e2c6) list_double_time_pane_g_ParamLimits

0xe2c6,	// (0x0000e2c6) list_double_time_pane_g

0xadfa,	// (0x0000adfa) list_double_time_pane_t1_ParamLimits

0xadfa,	// (0x0000adfa) list_double_time_pane_t1

0xae83,	// (0x0000ae83) list_double_time_pane_t2_ParamLimits

0xae83,	// (0x0000ae83) list_double_time_pane_t2

0xae95,	// (0x0000ae95) list_double_time_pane_t3_ParamLimits

0xae95,	// (0x0000ae95) list_double_time_pane_t3

0xaea7,	// (0x0000aea7) list_double_time_pane_t4_ParamLimits

0xaea7,	// (0x0000aea7) list_double_time_pane_t4

0x0003,

0xe323,	// (0x0000e323) list_double_time_pane_t_ParamLimits

0xe323,	// (0x0000e323) list_double_time_pane_t

0xac7f,	// (0x0000ac7f) list_setting_pane_g1_ParamLimits

0xac7f,	// (0x0000ac7f) list_setting_pane_g1

0xac8b,	// (0x0000ac8b) list_setting_pane_g2_ParamLimits

0xac8b,	// (0x0000ac8b) list_setting_pane_g2

0x0001,

0xe2bc,	// (0x0000e2bc) list_setting_pane_g_ParamLimits

0xe2bc,	// (0x0000e2bc) list_setting_pane_g

0xaeb9,	// (0x0000aeb9) list_setting_pane_t1_ParamLimits

0xaeb9,	// (0x0000aeb9) list_setting_pane_t1

0xaed3,	// (0x0000aed3) list_setting_pane_t2_ParamLimits

0xaed3,	// (0x0000aed3) list_setting_pane_t2

0x0002,

0xe32c,	// (0x0000e32c) list_setting_pane_t_ParamLimits

0xe32c,	// (0x0000e32c) list_setting_pane_t

0xaf10,	// (0x0000af10) set_value_pane_cp_ParamLimits

0xaf10,	// (0x0000af10) set_value_pane_cp

0xac7f,	// (0x0000ac7f) list_setting_number_pane_g1_ParamLimits

0xac7f,	// (0x0000ac7f) list_setting_number_pane_g1

0xac8b,	// (0x0000ac8b) list_setting_number_pane_g2_ParamLimits

0xac8b,	// (0x0000ac8b) list_setting_number_pane_g2

0x0001,

0xe2bc,	// (0x0000e2bc) list_setting_number_pane_g_ParamLimits

0xe2bc,	// (0x0000e2bc) list_setting_number_pane_g

0xaf1c,	// (0x0000af1c) list_setting_number_pane_t1_ParamLimits

0xaf1c,	// (0x0000af1c) list_setting_number_pane_t1

0xaf35,	// (0x0000af35) list_setting_number_pane_t2_ParamLimits

0xaf35,	// (0x0000af35) list_setting_number_pane_t2

0xaf4f,	// (0x0000af4f) list_setting_number_pane_t3_ParamLimits

0xaf4f,	// (0x0000af4f) list_setting_number_pane_t3

0x0003,

0xe333,	// (0x0000e333) list_setting_number_pane_t_ParamLimits

0xe333,	// (0x0000e333) list_setting_number_pane_t

0xaf10,	// (0x0000af10) set_value_pane_ParamLimits

0xaf10,	// (0x0000af10) set_value_pane

0x10ce,	// (0x000010ce) bg_set_opt_pane_ParamLimits

0x10ce,	// (0x000010ce) bg_set_opt_pane

0x10ef,	// (0x000010ef) set_value_pane_t1

0x10fd,	// (0x000010fd) slider_set_pane_cp3

0x1106,	// (0x00001106) volume_small_pane_cp

0x110f,	// (0x0000110f) list_form_gen_pane

0x0c62,	// (0x00000c62) scroll_pane_cp8

0x55e4,	// (0x000055e4) form_field_data_pane_ParamLimits

0x55e4,	// (0x000055e4) form_field_data_pane

0xaf92,	// (0x0000af92) form_field_data_wide_pane_ParamLimits

0xaf92,	// (0x0000af92) form_field_data_wide_pane

0xafb2,	// (0x0000afb2) form_field_popup_pane_ParamLimits

0xafb2,	// (0x0000afb2) form_field_popup_pane

0xafca,	// (0x0000afca) form_field_popup_wide_pane_ParamLimits

0xafca,	// (0x0000afca) form_field_popup_wide_pane

0x1196,	// (0x00001196) form_field_slider_pane_ParamLimits

0x1196,	// (0x00001196) form_field_slider_pane

0x11a9,	// (0x000011a9) form_field_slider_wide_pane_ParamLimits

0x11a9,	// (0x000011a9) form_field_slider_wide_pane

0x11bc,	// (0x000011bc) data_form_pane

0xafeb,	// (0x0000afeb) form_field_data_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane

0x11f6,	// (0x000011f6) data_form_wide_pane

0x1222,	// (0x00001222) form_field_data_wide_pane_t1

0x0ad9,	// (0x00000ad9) input_focus_pane_cp6

0xb003,	// (0x0000b003) form_field_popup_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp7

0x11bc,	// (0x000011bc) list_form_pane

0x1264,	// (0x00001264) form_field_popup_wide_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp8

0x1279,	// (0x00001279) list_form_wide_pane

0xb023,	// (0x0000b023) form_field_slider_pane_t1_ParamLimits

0xb023,	// (0x0000b023) form_field_slider_pane_t1

0xb039,	// (0x0000b039) form_field_slider_pane_t2_ParamLimits

0xb039,	// (0x0000b039) form_field_slider_pane_t2

0x0001,

0xe33c,	// (0x0000e33c) form_field_slider_pane_t_ParamLimits

0xe33c,	// (0x0000e33c) form_field_slider_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp9_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9

0xb04e,	// (0x0000b04e) slider_cont_pane_ParamLimits

0xb04e,	// (0x0000b04e) slider_cont_pane

0x12cc,	// (0x000012cc) form_field_slider_wide_pane_t1_ParamLimits

0x12cc,	// (0x000012cc) form_field_slider_wide_pane_t1

0x12de,	// (0x000012de) form_field_slider_wide_pane_t2_ParamLimits

0x12de,	// (0x000012de) form_field_slider_wide_pane_t2

0x0001,

0x9e92,	// (0x00009e92) form_field_slider_wide_pane_t_ParamLimits

0x9e92,	// (0x00009e92) form_field_slider_wide_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp10_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10

0xb062,	// (0x0000b062) slider_cont_pane_cp1_ParamLimits

0xb062,	// (0x0000b062) slider_cont_pane_cp1

0xb078,	// (0x0000b078) slider_form_pane_cp

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

0x9e97,	// (0x00009e97) input_focus_pane_g

0x3952,	// (0x00003952) wait_border_pane_g3_copy1

0xb080,	// (0x0000b080) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xc4ad,	// (0x0000c4ad) data_form_wide_pane_t1

0x50a4,	// (0x000050a4) list_form_graphic_pane_cp_ParamLimits

0x50a4,	// (0x000050a4) list_form_graphic_pane_cp

0x49ee,	// (0x000049ee) slider_form_pane_g1

0x49f7,	// (0x000049f7) slider_form_pane_g2

0x0006,

0xe418,	// (0x0000e418) slider_form_pane_g

0x1370,	// (0x00001370) list_form_graphic_pane_ParamLimits

0x1370,	// (0x00001370) list_form_graphic_pane

0x139b,	// (0x0000139b) list_form_graphic_pane_g1

0x13a3,	// (0x000013a3) list_form_graphic_pane_t1_ParamLimits

0x13a3,	// (0x000013a3) list_form_graphic_pane_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5

0xb099,	// (0x0000b099) find_pane_g1

0x13c1,	// (0x000013c1) input_find_pane

0xb0a4,	// (0x0000b0a4) input_find_pane_g1_ParamLimits

0xb0a4,	// (0x0000b0a4) input_find_pane_g1

0xb0b0,	// (0x0000b0b0) input_find_pane_t1_ParamLimits

0xb0b0,	// (0x0000b0b0) input_find_pane_t1

0xb0c5,	// (0x0000b0c5) input_find_pane_t2_ParamLimits

0xb0c5,	// (0x0000b0c5) input_find_pane_t2

0x0001,

0xe341,	// (0x0000e341) input_find_pane_t_ParamLimits

0xe341,	// (0x0000e341) input_find_pane_t

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

0x4d0d,	// (0x00004d0d) tabs_2_active_pane_g1

0xb0e6,	// (0x0000b0e6) tabs_2_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1

0x4d0d,	// (0x00004d0d) tabs_2_passive_pane_g1

0xb0e6,	// (0x0000b0e6) tabs_2_passive_pane_t1

0x0474,	// (0x00000474) bg_active_tab_pane_cp4

0xb0fc,	// (0x0000b0fc) tabs_2_long_active_pane_t1

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4

0x3276,	// (0x00003276) list_single_midp_graphic_pane_g4_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5

0xb113,	// (0x0000b113) tabs_3_long_active_pane_t1

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp5

0x3276,	// (0x00003276) list_single_midp_graphic_pane_g4

0x0474,	// (0x00000474) bg_popup_window_pane_cp13_ParamLimits

0x0474,	// (0x00000474) bg_popup_window_pane_cp13

0x154a,	// (0x0000154a) listscroll_popup_fast_pane_ParamLimits

0x154a,	// (0x0000154a) listscroll_popup_fast_pane

0x1559,	// (0x00001559) grid_popup_fast_pane_ParamLimits

0x1559,	// (0x00001559) grid_popup_fast_pane

0x156b,	// (0x0000156b) scroll_pane_cp9_ParamLimits

0x156b,	// (0x0000156b) scroll_pane_cp9

0x6995,	// (0x00006995) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6995,	// (0x00006995) list_single_graphic_hl_pane_t1_cp2

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

0x9eb1,	// (0x00009eb1) query_popup_data_pane_t_ParamLimits

0x9eb1,	// (0x00009eb1) query_popup_data_pane_t

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

0x9ebc,	// (0x00009ebc) bg_set_opt_pane_g

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

0x9ecf,	// (0x00009ecf) signal_pane_stacon_g_ParamLimits

0x9ecf,	// (0x00009ecf) signal_pane_stacon_g

0x1704,	// (0x00001704) title_pane_stacon_t1_ParamLimits

0x1704,	// (0x00001704) title_pane_stacon_t1

0x1729,	// (0x00001729) uni_indicator_pane_stacon_g1

0x1733,	// (0x00001733) uni_indicator_pane_stacon_g2

0x173d,	// (0x0000173d) uni_indicator_pane_stacon_g3

0x1747,	// (0x00001747) uni_indicator_pane_stacon_g4

0x0003,

0x9edb,	// (0x00009edb) uni_indicator_pane_stacon_g

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

0x9ee4,	// (0x00009ee4) battery_pane_stacon_g_ParamLimits

0x9ee4,	// (0x00009ee4) battery_pane_stacon_g

0x17d3,	// (0x000017d3) navi_icon_pane_stacon

0x17e3,	// (0x000017e3) navi_navi_pane_stacon

0x17d3,	// (0x000017d3) navi_text_pane_stacon

0x1751,	// (0x00001751) control_bottom_pane_stacon_g1

0x17f3,	// (0x000017f3) control_bottom_pane_stacon_t1_ParamLimits

0x17f3,	// (0x000017f3) control_bottom_pane_stacon_t1

0xb129,	// (0x0000b129) grid_app_pane_ParamLimits

0xb129,	// (0x0000b129) grid_app_pane

0xb157,	// (0x0000b157) scroll_pane_cp15_ParamLimits

0xb157,	// (0x0000b157) scroll_pane_cp15

0xb16e,	// (0x0000b16e) cell_app_pane_ParamLimits

0xb16e,	// (0x0000b16e) cell_app_pane

0xb1ad,	// (0x0000b1ad) cell_app_pane_g1_ParamLimits

0xb1ad,	// (0x0000b1ad) cell_app_pane_g1

0x18b3,	// (0x000018b3) cell_app_pane_g2_ParamLimits

0x18b3,	// (0x000018b3) cell_app_pane_g2

0x0001,

0xe346,	// (0x0000e346) cell_app_pane_g_ParamLimits

0xe346,	// (0x0000e346) cell_app_pane_g

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

0x9e97,	// (0x00009e97) cell_highlight_pane_g

0x18f5,	// (0x000018f5) bg_scroll_pane

0x1914,	// (0x00001914) scroll_handle_pane

0x1965,	// (0x00001965) scroll_bg_pane_g1

0x197a,	// (0x0000197a) scroll_bg_pane_g2

0x1992,	// (0x00001992) scroll_bg_pane_g3

0x0002,

0x9eee,	// (0x00009eee) scroll_bg_pane_g

0x19a7,	// (0x000019a7) scroll_handle_focus_pane_ParamLimits

0x19a7,	// (0x000019a7) scroll_handle_focus_pane

0x1965,	// (0x00001965) scroll_handle_pane_g1

0x19b4,	// (0x000019b4) scroll_handle_pane_g2

0x1992,	// (0x00001992) scroll_handle_pane_g3

0x0002,

0x9ef5,	// (0x00009ef5) scroll_handle_pane_g

0x1400,	// (0x00001400) bg_popup_sub_pane_cp21_ParamLimits

0x1400,	// (0x00001400) bg_popup_sub_pane_cp21

0x19c8,	// (0x000019c8) popup_fep_japan_predictive_window_t1_ParamLimits

0x19c8,	// (0x000019c8) popup_fep_japan_predictive_window_t1

0x19df,	// (0x000019df) popup_fep_japan_predictive_window_t2_ParamLimits

0x19df,	// (0x000019df) popup_fep_japan_predictive_window_t2

0x1a12,	// (0x00001a12) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a12,	// (0x00001a12) popup_fep_japan_predictive_window_t3

0x0002,

0x9efc,	// (0x00009efc) popup_fep_japan_predictive_window_t_ParamLimits

0x9efc,	// (0x00009efc) popup_fep_japan_predictive_window_t

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

0xb1da,	// (0x0000b1da) level_1_signal

0xb1ec,	// (0x0000b1ec) level_2_signal

0xb1ff,	// (0x0000b1ff) level_3_signal

0xb212,	// (0x0000b212) level_4_signal

0xb225,	// (0x0000b225) level_5_signal

0xb238,	// (0x0000b238) level_6_signal

0xb24b,	// (0x0000b24b) level_7_signal

0xb1da,	// (0x0000b1da) level_1_battery

0xb1ec,	// (0x0000b1ec) level_2_battery

0xb1ff,	// (0x0000b1ff) level_3_battery

0xb212,	// (0x0000b212) level_4_battery

0xb225,	// (0x0000b225) level_5_battery

0xb238,	// (0x0000b238) level_6_battery

0xb24b,	// (0x0000b24b) level_7_battery

0x1b30,	// (0x00001b30) list_menu_pane_ParamLimits

0x1b30,	// (0x00001b30) list_menu_pane

0x1b41,	// (0x00001b41) scroll_pane_cp25_ParamLimits

0x1b41,	// (0x00001b41) scroll_pane_cp25

0xb25e,	// (0x0000b25e) list_double2_graphic_pane_cp2_ParamLimits

0xb25e,	// (0x0000b25e) list_double2_graphic_pane_cp2

0xb25e,	// (0x0000b25e) list_double2_large_graphic_pane_cp2_ParamLimits

0xb25e,	// (0x0000b25e) list_double2_large_graphic_pane_cp2

0xb25e,	// (0x0000b25e) list_double2_pane_cp2_ParamLimits

0xb25e,	// (0x0000b25e) list_double2_pane_cp2

0xb25e,	// (0x0000b25e) list_double_graphic_pane_cp2_ParamLimits

0xb25e,	// (0x0000b25e) list_double_graphic_pane_cp2

0xb25e,	// (0x0000b25e) list_double_large_graphic_pane_cp2_ParamLimits

0xb25e,	// (0x0000b25e) list_double_large_graphic_pane_cp2

0xb25e,	// (0x0000b25e) list_double_number_pane_cp2_ParamLimits

0xb25e,	// (0x0000b25e) list_double_number_pane_cp2

0xb25e,	// (0x0000b25e) list_double_pane_cp2_ParamLimits

0xb25e,	// (0x0000b25e) list_double_pane_cp2

0xb279,	// (0x0000b279) list_single_2graphic_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_2graphic_pane_cp2

0xb279,	// (0x0000b279) list_single_graphic_heading_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_graphic_heading_pane_cp2

0xb279,	// (0x0000b279) list_single_graphic_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_graphic_pane_cp2

0xb279,	// (0x0000b279) list_single_heading_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_heading_pane_cp2

0xb28a,	// (0x0000b28a) list_single_large_graphic_pane_cp2_ParamLimits

0xb28a,	// (0x0000b28a) list_single_large_graphic_pane_cp2

0xb279,	// (0x0000b279) list_single_number_heading_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_number_heading_pane_cp2

0xb279,	// (0x0000b279) list_single_number_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_number_pane_cp2

0xb279,	// (0x0000b279) list_single_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_pane_cp2

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

0x9f29,	// (0x00009f29) fep_china_uni_entry_pane_g

0x1ceb,	// (0x00001ceb) fep_entry_item_pane

0x1cf5,	// (0x00001cf5) fep_candidate_item_pane

0x1cfd,	// (0x00001cfd) fep_china_uni_candidate_pane_g1

0x1d05,	// (0x00001d05) fep_china_uni_candidate_pane_g2

0x1d0d,	// (0x00001d0d) fep_china_uni_candidate_pane_g3

0x1d15,	// (0x00001d15) fep_china_uni_candidate_pane_g4

0x0003,

0x9f2e,	// (0x00009f2e) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1d1d,	// (0x00001d1d) fep_entry_item_pane_t1_ParamLimits

0x1d1d,	// (0x00001d1d) fep_entry_item_pane_t1

0x1d33,	// (0x00001d33) fep_candidate_item_pane_t1_ParamLimits

0x1d33,	// (0x00001d33) fep_candidate_item_pane_t1

0x1d48,	// (0x00001d48) fep_candidate_item_pane_t2_ParamLimits

0x1d48,	// (0x00001d48) fep_candidate_item_pane_t2

0x0001,

0x9f37,	// (0x00009f37) fep_candidate_item_pane_t_ParamLimits

0x9f37,	// (0x00009f37) fep_candidate_item_pane_t

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

0x9f3c,	// (0x00009f3c) scroll_handle_focus_pane_g

0xb2e3,	// (0x0000b2e3) list_single_2graphic_pane_g1_ParamLimits

0xb2e3,	// (0x0000b2e3) list_single_2graphic_pane_g1

0xac5c,	// (0x0000ac5c) list_single_2graphic_pane_g2_ParamLimits

0xac5c,	// (0x0000ac5c) list_single_2graphic_pane_g2

0x0dab,	// (0x00000dab) list_single_2graphic_pane_g3_ParamLimits

0x0dab,	// (0x00000dab) list_single_2graphic_pane_g3

0xb2ef,	// (0x0000b2ef) list_single_2graphic_pane_g4_ParamLimits

0xb2ef,	// (0x0000b2ef) list_single_2graphic_pane_g4

0x0003,

0xe350,	// (0x0000e350) list_single_2graphic_pane_g_ParamLimits

0xe350,	// (0x0000e350) list_single_2graphic_pane_g

0xb2fb,	// (0x0000b2fb) list_single_2graphic_pane_t1_ParamLimits

0xb2fb,	// (0x0000b2fb) list_single_2graphic_pane_t1

0xb329,	// (0x0000b329) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb329,	// (0x0000b329) list_double2_graphic_large_graphic_pane_g1

0xacbf,	// (0x0000acbf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xacbf,	// (0x0000acbf) list_double2_graphic_large_graphic_pane_g2

0xac8b,	// (0x0000ac8b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xac8b,	// (0x0000ac8b) list_double2_graphic_large_graphic_pane_g3

0xb339,	// (0x0000b339) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb339,	// (0x0000b339) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xe359,	// (0x0000e359) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xe359,	// (0x0000e359) list_double2_graphic_large_graphic_pane_g

0xb345,	// (0x0000b345) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb345,	// (0x0000b345) list_double2_graphic_large_graphic_pane_t1

0xb35b,	// (0x0000b35b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb35b,	// (0x0000b35b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xe362,	// (0x0000e362) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xe362,	// (0x0000e362) list_double2_graphic_large_graphic_pane_t

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

0x4cfb,	// (0x00004cfb) bg_active_tab_pane_g1_cp1

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp1

0x4d04,	// (0x00004d04) bg_active_tab_pane_g3_cp1

0x4cfb,	// (0x00004cfb) bg_passive_tab_pane_g1_cp1

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp1

0x4d04,	// (0x00004d04) bg_passive_tab_pane_g3_cp1

0xb36d,	// (0x0000b36d) bg_active_tab_pane_g1_cp2

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp2

0xb376,	// (0x0000b376) bg_active_tab_pane_g3_cp2

0xb36d,	// (0x0000b36d) bg_passive_tab_pane_g1_cp2

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp2

0xb376,	// (0x0000b376) bg_passive_tab_pane_g3_cp2

0xb37f,	// (0x0000b37f) bg_active_tab_pane_g1_cp3

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp3

0xb388,	// (0x0000b388) bg_active_tab_pane_g3_cp3

0xb37f,	// (0x0000b37f) bg_passive_tab_pane_g1_cp3

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp3

0xb388,	// (0x0000b388) bg_passive_tab_pane_g3_cp3

0xb391,	// (0x0000b391) bg_active_tab_pane_g1_cp4

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp4

0xb39a,	// (0x0000b39a) bg_active_tab_pane_g3_cp4

0xb391,	// (0x0000b391) bg_passive_tab_pane_g1_cp4

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp4

0xb39a,	// (0x0000b39a) bg_passive_tab_pane_g3_cp4

0x2027,	// (0x00002027) bg_active_tab_pane_g1_cp5

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp5

0x2030,	// (0x00002030) bg_active_tab_pane_g3_cp5

0x2027,	// (0x00002027) bg_passive_tab_pane_g1_cp5

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp5

0x2030,	// (0x00002030) bg_passive_tab_pane_g3_cp5

0xb3a3,	// (0x0000b3a3) list_set_graphic_pane_ParamLimits

0xb3a3,	// (0x0000b3a3) list_set_graphic_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4

0x2039,	// (0x00002039) list_set_graphic_pane_g1_ParamLimits

0x2039,	// (0x00002039) list_set_graphic_pane_g1

0x2045,	// (0x00002045) list_set_graphic_pane_g2_ParamLimits

0x2045,	// (0x00002045) list_set_graphic_pane_g2

0x0001,

0x9f5a,	// (0x00009f5a) list_set_graphic_pane_g_ParamLimits

0x9f5a,	// (0x00009f5a) list_set_graphic_pane_g

0x0009,

0xa2ba,	// (0x0000a2ba) volume_small_pane_cp_g

0x2067,	// (0x00002067) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2067,	// (0x00002067) list_double2_large_graphic_pane_g1_cp2

0x2073,	// (0x00002073) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2073,	// (0x00002073) list_double2_large_graphic_pane_g2_cp2

0x2082,	// (0x00002082) list_double2_large_graphic_pane_g3_cp2

0x208a,	// (0x0000208a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x208a,	// (0x0000208a) list_double2_large_graphic_pane_t1_cp2

0x20a0,	// (0x000020a0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x20a0,	// (0x000020a0) list_double2_large_graphic_pane_t2_cp2

0x450e,	// (0x0000450e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x450e,	// (0x0000450e) list_double_large_graphic_pane_g1_cp2

0x451f,	// (0x0000451f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x451f,	// (0x0000451f) list_double_large_graphic_pane_g2_cp2

0x21cd,	// (0x000021cd) list_double_large_graphic_pane_g3_cp2

0x452e,	// (0x0000452e) list_double_large_graphic_pane_g4_cp

0x4536,	// (0x00004536) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4536,	// (0x00004536) list_double_large_graphic_pane_t1_cp2

0x454d,	// (0x0000454d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x454d,	// (0x0000454d) list_double_large_graphic_pane_t2_cp2

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

0x4318,	// (0x00004318) list_single_heading_pane_t2_cp2_ParamLimits

0x4318,	// (0x00004318) list_single_heading_pane_t2_cp2

0x4268,	// (0x00004268) list_double_graphic_pane_g1_cp2_ParamLimits

0x4268,	// (0x00004268) list_double_graphic_pane_g1_cp2

0x4274,	// (0x00004274) list_double_graphic_pane_g2_cp2_ParamLimits

0x4274,	// (0x00004274) list_double_graphic_pane_g2_cp2

0x4283,	// (0x00004283) list_double_graphic_pane_g3_cp2

0x428b,	// (0x0000428b) list_double_graphic_pane_t1_cp2_ParamLimits

0x428b,	// (0x0000428b) list_double_graphic_pane_t1_cp2

0x42a1,	// (0x000042a1) list_double_graphic_pane_t2_cp2_ParamLimits

0x42a1,	// (0x000042a1) list_double_graphic_pane_t2_cp2

0x21c1,	// (0x000021c1) list_double_number_pane_g1_cp2_ParamLimits

0x21c1,	// (0x000021c1) list_double_number_pane_g1_cp2

0x21cd,	// (0x000021cd) list_double_number_pane_g2_cp2

0x422e,	// (0x0000422e) list_double_number_pane_t1_cp2_ParamLimits

0x422e,	// (0x0000422e) list_double_number_pane_t1_cp2

0x4240,	// (0x00004240) list_double_number_pane_t2_cp2_ParamLimits

0x4240,	// (0x00004240) list_double_number_pane_t2_cp2

0x4256,	// (0x00004256) list_double_number_pane_t3_cp2_ParamLimits

0x4256,	// (0x00004256) list_double_number_pane_t3_cp2

0x4107,	// (0x00004107) list_single_graphic_pane_g1_cp2_ParamLimits

0x4107,	// (0x00004107) list_single_graphic_pane_g1_cp2

0x214b,	// (0x0000214b) list_single_graphic_pane_g2_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_graphic_pane_g2_cp2

0x2157,	// (0x00002157) list_single_graphic_pane_g3_cp2

0x40df,	// (0x000040df) list_single_graphic_pane_t1_cp2_ParamLimits

0x40df,	// (0x000040df) list_single_graphic_pane_t1_cp2

0x214b,	// (0x0000214b) list_single_number_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_number_pane_g1_cp2

0x2157,	// (0x00002157) list_single_number_pane_g2_cp2

0x40df,	// (0x000040df) list_single_number_pane_t1_cp2_ParamLimits

0x40df,	// (0x000040df) list_single_number_pane_t1_cp2

0x40f5,	// (0x000040f5) list_single_number_pane_t2_cp2_ParamLimits

0x40f5,	// (0x000040f5) list_single_number_pane_t2_cp2

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

0x3f7c,	// (0x00003f7c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3f7c,	// (0x00003f7c) list_single_graphic_heading_pane_g1_cp2

0x3f57,	// (0x00003f57) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3f57,	// (0x00003f57) list_single_graphic_heading_pane_g4_cp2

0x2157,	// (0x00002157) list_single_graphic_heading_pane_g5_cp2

0x215f,	// (0x0000215f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x215f,	// (0x0000215f) list_single_graphic_heading_pane_t1_cp2

0x3f88,	// (0x00003f88) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3f88,	// (0x00003f88) list_single_graphic_heading_pane_t2_cp2

0x3f4b,	// (0x00003f4b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3f4b,	// (0x00003f4b) list_single_2graphic_pane_g1_cp2

0x3f57,	// (0x00003f57) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3f57,	// (0x00003f57) list_single_2graphic_pane_g2_cp2

0x2157,	// (0x00002157) list_single_2graphic_pane_g3_cp2

0x3276,	// (0x00003276) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3276,	// (0x00003276) list_single_2graphic_pane_g4_cp2

0x3f66,	// (0x00003f66) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3f66,	// (0x00003f66) list_single_2graphic_pane_t1_cp2

0x002a,	// (0x0000002a) list_highlight_pane_g10_cp1

0x3b45,	// (0x00003b45) list_highlight_pane_g1_cp1

0x3b4d,	// (0x00003b4d) list_highlight_pane_g2_cp1

0x3b55,	// (0x00003b55) list_highlight_pane_g3_cp1

0x3b5d,	// (0x00003b5d) list_highlight_pane_g4_cp1

0x3b65,	// (0x00003b65) list_highlight_pane_g5_cp1

0x3b6d,	// (0x00003b6d) list_highlight_pane_g6_cp1

0x3b75,	// (0x00003b75) list_highlight_pane_g7_cp1

0x3b7d,	// (0x00003b7d) list_highlight_pane_g8_cp1

0x3b85,	// (0x00003b85) list_highlight_pane_g9_cp1

0xc06b,	// (0x0000c06b) form_field_slider_pane_t3

0xc079,	// (0x0000c079) form_field_slider_pane_t4

0x3a8f,	// (0x00003a8f) slider_form_pane_ParamLimits

0x3a8f,	// (0x00003a8f) slider_form_pane

0x024e,	// (0x0000024e) control_abbreviations

0x024e,	// (0x0000024e) control_conventions

0x024e,	// (0x0000024e) control_definitions

0x024e,	// (0x0000024e) format_table_attribute

0x4362,	// (0x00004362) bg_popup_preview_window_pane_g9

0x024e,	// (0x0000024e) format_table_data2

0x024e,	// (0x0000024e) format_table_data3

0x024e,	// (0x0000024e) format_table_data_example

0x0008,

0x024e,	// (0x0000024e) intro_purpose

0xa0e3,	// (0x0000a0e3) bg_popup_preview_window_pane_g

0x024e,	// (0x0000024e) texts_category

0x024e,	// (0x0000024e) texts_graphics

0x228b,	// (0x0000228b) text_digital

0x229a,	// (0x0000229a) text_primary

0x22a9,	// (0x000022a9) text_primary_small

0x22b8,	// (0x000022b8) text_secondary

0x22c7,	// (0x000022c7) text_title

0x4b8b,	// (0x00004b8b) bg_passive_tab_pane_g1_cp3_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp3_srt

0x4b94,	// (0x00004b94) bg_passive_tab_pane_g3_cp3_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt

0x4b9d,	// (0x00004b9d) tabs_4_active_pane_srt_g1

0xa94f,	// (0x0000a94f) tabs_4_active_pane_srt_t1_ParamLimits

0xa94f,	// (0x0000a94f) tabs_4_active_pane_srt_t1

0x4b8b,	// (0x00004b8b) bg_active_tab_pane_g1_cp3_copy1

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp3_copy1

0x4b94,	// (0x00004b94) bg_active_tab_pane_g3_cp3_copy1

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4_srt

0x47ed,	// (0x000047ed) bg_passive_tab_pane_g1_cp4_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp4_srt

0x47f6,	// (0x000047f6) bg_passive_tab_pane_g3_cp4_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt

0xb0fc,	// (0x0000b0fc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0fc,	// (0x0000b0fc) tabs_2_long_active_pane_srt_t1

0x47ed,	// (0x000047ed) bg_active_tab_pane_g1_cp4_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp4_srt

0x47f6,	// (0x000047f6) bg_active_tab_pane_g3_cp4_srt

0x0797,	// (0x00000797) tabs_3_long_active_pane_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_active_pane_srt

0x0797,	// (0x00000797) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_passive_pane_cp_srt

0x0797,	// (0x00000797) tabs_3_long_passive_pane_srt_ParamLimits

0x0797,	// (0x00000797) tabs_3_long_passive_pane_srt

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp5_srt

0x2027,	// (0x00002027) bg_passive_tab_pane_g1_cp5_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp5_srt

0x2030,	// (0x00002030) bg_passive_tab_pane_g3_cp5_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt

0xb113,	// (0x0000b113) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb113,	// (0x0000b113) tabs_3_long_active_pane_srt_t1

0x2027,	// (0x00002027) bg_active_tab_pane_g1_cp5_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp5_srt

0x2030,	// (0x00002030) bg_active_tab_pane_g3_cp5_srt

0x47df,	// (0x000047df) navi_text_pane_srt_t1

0x47d7,	// (0x000047d7) navi_icon_pane_srt_g1

0x2535,	// (0x00002535) midp_editing_number_pane_srt

0x22d6,	// (0x000022d6) midp_ticker_pane_srt

0x253d,	// (0x0000253d) midp_ticker_pane_srt_g1

0x2545,	// (0x00002545) midp_ticker_pane_srt_g2

0x0001,

0x9f79,	// (0x00009f79) midp_ticker_pane_srt_g

0x254d,	// (0x0000254d) midp_ticker_pane_srt_t1

0x47c8,	// (0x000047c8) midp_editing_number_pane_t1_copy1

0xb3b7,	// (0x0000b3b7) listscroll_midp_pane

0xb3b7,	// (0x0000b3b7) midp_form_pane

0x2346,	// (0x00002346) midp_info_popup_window_ParamLimits

0x2346,	// (0x00002346) midp_info_popup_window

0x1400,	// (0x00001400) bg_popup_sub_pane_cp50_ParamLimits

0x1400,	// (0x00001400) bg_popup_sub_pane_cp50

0x379c,	// (0x0000379c) listscroll_midp_info_pane_ParamLimits

0x379c,	// (0x0000379c) listscroll_midp_info_pane

0x3784,	// (0x00003784) listscroll_form_midp_pane_ParamLimits

0x3784,	// (0x00003784) listscroll_form_midp_pane

0x3790,	// (0x00003790) scroll_bar_cp050

0xc05f,	// (0x0000c05f) list_midp_pane

0x57b8,	// (0x000057b8) signal_pane_g2_cp

0x369e,	// (0x0000369e) listscroll_midp_info_pane_t1_ParamLimits

0x369e,	// (0x0000369e) listscroll_midp_info_pane_t1

0x36b6,	// (0x000036b6) listscroll_midp_info_pane_t2_ParamLimits

0x36b6,	// (0x000036b6) listscroll_midp_info_pane_t2

0x36f4,	// (0x000036f4) listscroll_midp_info_pane_t3_ParamLimits

0x36f4,	// (0x000036f4) listscroll_midp_info_pane_t3

0x372e,	// (0x0000372e) listscroll_midp_info_pane_t4_ParamLimits

0x372e,	// (0x0000372e) listscroll_midp_info_pane_t4

0x0003,

0xa01e,	// (0x0000a01e) listscroll_midp_info_pane_t_ParamLimits

0xa01e,	// (0x0000a01e) listscroll_midp_info_pane_t

0x14af,	// (0x000014af) scroll_pane_cp21

0x3642,	// (0x00003642) form_midp_field_choice_group_pane

0x364b,	// (0x0000364b) form_midp_field_text_pane

0x3684,	// (0x00003684) form_midp_field_time_pane

0x368c,	// (0x0000368c) form_midp_gauge_slider_pane

0x3695,	// (0x00003695) form_midp_gauge_wait_pane

0x024e,	// (0x0000024e) form_midp_image_pane

0xc049,	// (0x0000c049) list_single_midp_pane_ParamLimits

0xc049,	// (0x0000c049) list_single_midp_pane

0xc028,	// (0x0000c028) form_midp_field_text_pane_t1

0x3395,	// (0x00003395) input_focus_pane_cp050

0x3619,	// (0x00003619) list_midp_form_text_pane

0x35c5,	// (0x000035c5) form_midp_field_choice_group_pane_t1

0x35d3,	// (0x000035d3) input_focus_pane_cp051

0x35e7,	// (0x000035e7) list_midp_choice_pane

0x024e,	// (0x0000024e) status_idle_pane

0x35a9,	// (0x000035a9) form_midp_field_time_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g2_copy1

0x35b7,	// (0x000035b7) form_midp_field_time_pane_t2

0x0001,

0x23ee,	// (0x000023ee) aid_navinavi_width_2_pane

0xa019,	// (0x0000a019) form_midp_field_time_pane_t

0x024e,	// (0x0000024e) input_focus_pane_cp052

0x024e,	// (0x0000024e) bg_input_focus_pane_cp040

0x3569,	// (0x00003569) form_midp_gauge_slider_pane_t1

0x3577,	// (0x00003577) form_midp_gauge_slider_pane_t2

0xc00c,	// (0x0000c00c) form_midp_gauge_slider_pane_t3

0xc01a,	// (0x0000c01a) form_midp_gauge_slider_pane_t4

0x0003,

0xe3a3,	// (0x0000e3a3) form_midp_gauge_slider_pane_t

0x35a1,	// (0x000035a1) form_midp_slider_pane

0x0474,	// (0x00000474) bg_input_focus_pane_cp041_ParamLimits

0x0474,	// (0x00000474) bg_input_focus_pane_cp041

0x3539,	// (0x00003539) form_midp_gauge_wait_pane_t1_ParamLimits

0x3539,	// (0x00003539) form_midp_gauge_wait_pane_t1

0x354b,	// (0x0000354b) form_midp_gauge_wait_pane_t2_ParamLimits

0x354b,	// (0x0000354b) form_midp_gauge_wait_pane_t2

0x0001,

0xa00b,	// (0x0000a00b) form_midp_gauge_wait_pane_t_ParamLimits

0xa00b,	// (0x0000a00b) form_midp_gauge_wait_pane_t

0x355d,	// (0x0000355d) form_midp_wait_pane_ParamLimits

0x355d,	// (0x0000355d) form_midp_wait_pane

0x3503,	// (0x00003503) form_midp_image_pane_g1

0x350c,	// (0x0000350c) form_midp_image_pane_t1

0x351b,	// (0x0000351b) form_midp_image_pane_t2

0x352a,	// (0x0000352a) form_midp_image_pane_t3

0x0002,

0xa004,	// (0x0000a004) form_midp_image_pane_t

0x34eb,	// (0x000034eb) list_single_midp_pane_g1

0x34f4,	// (0x000034f4) list_single_midp_pane_t1

0xbff8,	// (0x0000bff8) list_midp_form_item_pane_ParamLimits

0xbff8,	// (0x0000bff8) list_midp_form_item_pane

0x2396,	// (0x00002396) list_midp_form_item_pane_t1

0x23a5,	// (0x000023a5) midp_ticker_pane_g1

0x23b1,	// (0x000023b1) midp_ticker_pane_g2

0x0001,

0x9f5f,	// (0x00009f5f) midp_ticker_pane_g

0x23bd,	// (0x000023bd) midp_ticker_pane_t1

0x47c8,	// (0x000047c8) midp_editing_number_pane_t1

0x4a51,	// (0x00004a51) midp_editing_number_pane

0x4a5d,	// (0x00004a5d) midp_ticker_pane

0x47a6,	// (0x000047a6) ai_message_heading_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp14

0x47ae,	// (0x000047ae) listscroll_ai_message_pane

0x4730,	// (0x00004730) ai_message_heading_pane_g1_ParamLimits

0x4730,	// (0x00004730) ai_message_heading_pane_g1

0x473c,	// (0x0000473c) ai_message_heading_pane_g2_ParamLimits

0x473c,	// (0x0000473c) ai_message_heading_pane_g2

0x4748,	// (0x00004748) ai_message_heading_pane_g3_ParamLimits

0x4748,	// (0x00004748) ai_message_heading_pane_g3

0x4754,	// (0x00004754) ai_message_heading_pane_g4_ParamLimits

0x4754,	// (0x00004754) ai_message_heading_pane_g4

0x0003,

0xa145,	// (0x0000a145) ai_message_heading_pane_g_ParamLimits

0xa145,	// (0x0000a145) ai_message_heading_pane_g

0x4760,	// (0x00004760) ai_message_heading_pane_t1_ParamLimits

0x4760,	// (0x00004760) ai_message_heading_pane_t1

0x477a,	// (0x0000477a) ai_message_heading_pane_t2_ParamLimits

0x477a,	// (0x0000477a) ai_message_heading_pane_t2

0x0001,

0xa14e,	// (0x0000a14e) ai_message_heading_pane_t_ParamLimits

0xa14e,	// (0x0000a14e) ai_message_heading_pane_t

0x478c,	// (0x0000478c) bg_popup_heading_pane_cp1_ParamLimits

0x478c,	// (0x0000478c) bg_popup_heading_pane_cp1

0x471e,	// (0x0000471e) list_ai_message_pane_ParamLimits

0x471e,	// (0x0000471e) list_ai_message_pane

0x14af,	// (0x000014af) scroll_pane_cp10

0x466a,	// (0x0000466a) list_ai_message_pane_g1

0x4672,	// (0x00004672) list_ai_message_pane_g2

0x0001,

0xa122,	// (0x0000a122) list_ai_message_pane_g

0x467a,	// (0x0000467a) list_ai_message_pane_t1_ParamLimits

0x467a,	// (0x0000467a) list_ai_message_pane_t1

0x468f,	// (0x0000468f) list_ai_message_pane_t2_ParamLimits

0x468f,	// (0x0000468f) list_ai_message_pane_t2

0x46a4,	// (0x000046a4) list_ai_message_pane_t3_ParamLimits

0x46a4,	// (0x000046a4) list_ai_message_pane_t3

0x46b9,	// (0x000046b9) list_ai_message_pane_t4_ParamLimits

0x46b9,	// (0x000046b9) list_ai_message_pane_t4

0x0003,

0xa127,	// (0x0000a127) list_ai_message_pane_t_ParamLimits

0xa127,	// (0x0000a127) list_ai_message_pane_t

0x4658,	// (0x00004658) cell_ai_soft_ind_pane_ParamLimits

0x4658,	// (0x00004658) cell_ai_soft_ind_pane

0x23cf,	// (0x000023cf) cell_ai_soft_ind_pane_g1_ParamLimits

0x23cf,	// (0x000023cf) cell_ai_soft_ind_pane_g1

0x024e,	// (0x0000024e) grid_highlight_cp1

0x23dc,	// (0x000023dc) text_secondary_cp56_ParamLimits

0x23dc,	// (0x000023dc) text_secondary_cp56

0x462d,	// (0x0000462d) example_general_pane_ParamLimits

0x462d,	// (0x0000462d) example_general_pane

0x4639,	// (0x00004639) example_parent_pane_g1_ParamLimits

0x4639,	// (0x00004639) example_parent_pane_g1

0x4645,	// (0x00004645) example_parent_pane_t1_ParamLimits

0x4645,	// (0x00004645) example_parent_pane_t1

0xb8ec,	// (0x0000b8ec) popup_preview_text_window_ParamLimits

0xb8ec,	// (0x0000b8ec) popup_preview_text_window

0x221b,	// (0x0000221b) list_single_pane_cp2_g4

0x084d,	// (0x0000084d) bg_popup_preview_window_pane_ParamLimits

0x084d,	// (0x0000084d) bg_popup_preview_window_pane

0x436a,	// (0x0000436a) popup_preview_text_window_t1_ParamLimits

0x436a,	// (0x0000436a) popup_preview_text_window_t1

0x4388,	// (0x00004388) popup_preview_text_window_t2_ParamLimits

0x4388,	// (0x00004388) popup_preview_text_window_t2

0x43d1,	// (0x000043d1) popup_preview_text_window_t3_ParamLimits

0x43d1,	// (0x000043d1) popup_preview_text_window_t3

0x4416,	// (0x00004416) popup_preview_text_window_t4_ParamLimits

0x4416,	// (0x00004416) popup_preview_text_window_t4

0x0004,

0xa0f6,	// (0x0000a0f6) popup_preview_text_window_t_ParamLimits

0xa0f6,	// (0x0000a0f6) popup_preview_text_window_t

0x4494,	// (0x00004494) scroll_pane_cp11

0x320b,	// (0x0000320b) bg_popup_preview_window_pane_g1

0x432a,	// (0x0000432a) bg_popup_preview_window_pane_g2

0x4332,	// (0x00004332) bg_popup_preview_window_pane_g3

0x433a,	// (0x0000433a) bg_popup_preview_window_pane_g4

0x4342,	// (0x00004342) bg_popup_preview_window_pane_g5

0x434a,	// (0x0000434a) bg_popup_preview_window_pane_g6

0x4352,	// (0x00004352) bg_popup_preview_window_pane_g7

0x435a,	// (0x0000435a) bg_popup_preview_window_pane_g8

0x003c,	// (0x0000003c) aid_popup_width_pane

0xb86e,	// (0x0000b86e) popup_midp_note_alarm_window_ParamLimits

0xb86e,	// (0x0000b86e) popup_midp_note_alarm_window

0x11bc,	// (0x000011bc) data_form_pane_ParamLimits

0xafe1,	// (0x0000afe1) form_field_data_pane_g1

0xafeb,	// (0x0000afeb) form_field_data_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_ParamLimits

0x11f6,	// (0x000011f6) data_form_wide_pane_ParamLimits

0x1202,	// (0x00001202) form_field_data_wide_pane_g1

0x1222,	// (0x00001222) form_field_data_wide_pane_t1_ParamLimits

0x0ad9,	// (0x00000ad9) input_focus_pane_cp6_ParamLimits

0xb0da,	// (0x0000b0da) input_popup_find_pane_g1_ParamLimits

0xb0da,	// (0x0000b0da) input_popup_find_pane_g1

0x17b4,	// (0x000017b4) aid_navi_side_left_pane

0x17c4,	// (0x000017c4) aid_navi_side_right_pane

0x3c2e,	// (0x00003c2e) bg_popup_window_pane_cp30_ParamLimits

0x3c2e,	// (0x00003c2e) bg_popup_window_pane_cp30

0x3ca8,	// (0x00003ca8) popup_midp_note_alarm_window_g1_ParamLimits

0x3ca8,	// (0x00003ca8) popup_midp_note_alarm_window_g1

0x3cd8,	// (0x00003cd8) popup_midp_note_alarm_window_t1_ParamLimits

0x3cd8,	// (0x00003cd8) popup_midp_note_alarm_window_t1

0x3d79,	// (0x00003d79) popup_midp_note_alarm_window_t2_ParamLimits

0x3d79,	// (0x00003d79) popup_midp_note_alarm_window_t2

0x3e27,	// (0x00003e27) popup_midp_note_alarm_window_t3_ParamLimits

0x3e27,	// (0x00003e27) popup_midp_note_alarm_window_t3

0x3e4f,	// (0x00003e4f) popup_midp_note_alarm_window_t4_ParamLimits

0x3e4f,	// (0x00003e4f) popup_midp_note_alarm_window_t4

0x3e6f,	// (0x00003e6f) popup_midp_note_alarm_window_t5_ParamLimits

0x3e6f,	// (0x00003e6f) popup_midp_note_alarm_window_t5

0x000a,

0xa093,	// (0x0000a093) popup_midp_note_alarm_window_t_ParamLimits

0xa093,	// (0x0000a093) popup_midp_note_alarm_window_t

0x3f1b,	// (0x00003f1b) wait_bar_pane_cp1_ParamLimits

0x3f1b,	// (0x00003f1b) wait_bar_pane_cp1

0x024e,	// (0x0000024e) wait_anim_pane_copy1

0x024e,	// (0x0000024e) wait_border_pane_copy1

0x3940,	// (0x00003940) wait_border_pane_g1_copy1

0x123c,	// (0x0000123c) form_field_popup_pane_g1

0xb003,	// (0x0000b003) form_field_popup_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp7_ParamLimits

0x11bc,	// (0x000011bc) list_form_pane_ParamLimits

0x125c,	// (0x0000125c) form_field_popup_wide_pane_g1

0x1264,	// (0x00001264) form_field_popup_wide_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp8_ParamLimits

0x1279,	// (0x00001279) list_form_wide_pane_ParamLimits

0x4c0b,	// (0x00004c0b) aid_size_cell_graphic_pane

0xb080,	// (0x0000b080) data_form_pane_t1_ParamLimits

0xc4ad,	// (0x0000c4ad) data_form_wide_pane_t1_ParamLimits

0xbc4a,	// (0x0000bc4a) bg_status_flat_pane

0xa8ac,	// (0x0000a8ac) title_pane_t1_ParamLimits

0x043c,	// (0x0000043c) title_pane_t2_ParamLimits

0x0462,	// (0x00000462) title_pane_t3_ParamLimits

0xe27d,	// (0x0000e27d) title_pane_t_ParamLimits

0xb1da,	// (0x0000b1da) level_1_signal_ParamLimits

0xb1ec,	// (0x0000b1ec) level_2_signal_ParamLimits

0xb1ff,	// (0x0000b1ff) level_3_signal_ParamLimits

0xb212,	// (0x0000b212) level_4_signal_ParamLimits

0xb225,	// (0x0000b225) level_5_signal_ParamLimits

0xb238,	// (0x0000b238) level_6_signal_ParamLimits

0xb24b,	// (0x0000b24b) level_7_signal_ParamLimits

0xb1da,	// (0x0000b1da) level_1_battery_ParamLimits

0xb1ec,	// (0x0000b1ec) level_2_battery_ParamLimits

0xb1ff,	// (0x0000b1ff) level_3_battery_ParamLimits

0xb212,	// (0x0000b212) level_4_battery_ParamLimits

0xb225,	// (0x0000b225) level_5_battery_ParamLimits

0xb238,	// (0x0000b238) level_6_battery_ParamLimits

0xb24b,	// (0x0000b24b) level_7_battery_ParamLimits

0x3b45,	// (0x00003b45) bg_status_flat_pane_g1

0x3b4d,	// (0x00003b4d) bg_status_flat_pane_g2

0x3b55,	// (0x00003b55) bg_status_flat_pane_g3

0x3b5d,	// (0x00003b5d) bg_status_flat_pane_g4

0x3b65,	// (0x00003b65) bg_status_flat_pane_g5

0x3b6d,	// (0x00003b6d) bg_status_flat_pane_g6

0x3b75,	// (0x00003b75) bg_status_flat_pane_g7

0xa939,	// (0x0000a939) tabs_3_active_pane_t1_ParamLimits

0xa939,	// (0x0000a939) tabs_3_passive_pane_t1_ParamLimits

0xa94f,	// (0x0000a94f) tabs_4_active_pane_t1_ParamLimits

0xa94f,	// (0x0000a94f) tabs_4_1_passive_pane_t1_ParamLimits

0xb0e6,	// (0x0000b0e6) tabs_2_active_pane_t1_ParamLimits

0xb0e6,	// (0x0000b0e6) tabs_2_passive_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_ParamLimits

0xb0fc,	// (0x0000b0fc) tabs_2_long_active_pane_t1_ParamLimits

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4_ParamLimits

0x32c4,	// (0x000032c4) list_single_midp_graphic_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_ParamLimits

0xb113,	// (0x0000b113) tabs_3_long_active_pane_t1_ParamLimits

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp5_ParamLimits

0x32c4,	// (0x000032c4) list_single_midp_graphic_pane_t1

0xbc4a,	// (0x0000bc4a) bg_status_flat_pane_ParamLimits

0x2e48,	// (0x00002e48) indicator_pane_cp2_ParamLimits

0x2e48,	// (0x00002e48) indicator_pane_cp2

0xbdb0,	// (0x0000bdb0) navi_pane_srt_ParamLimits

0xbdb0,	// (0x0000bdb0) navi_pane_srt

0x2f90,	// (0x00002f90) popup_clock_digital_analogue_window_cp1

0x05f2,	// (0x000005f2) indicator_pane_t1

0x22d6,	// (0x000022d6) copy_highlight_pane

0x22d6,	// (0x000022d6) cursor_graphics_pane

0x22d6,	// (0x000022d6) graphic_within_text_pane

0x22d6,	// (0x000022d6) link_highlight_pane

0x4457,	// (0x00004457) popup_preview_text_window_t5_ParamLimits

0x4457,	// (0x00004457) popup_preview_text_window_t5

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

0x3bdd,	// (0x00003bdd) graphic_text_primary_pane

0x3be6,	// (0x00003be6) graphic_text_primary_small_pane

0x2407,	// (0x00002407) graphic_text_secondary_pane

0x23f6,	// (0x000023f6) graphic_text_title_pane

0xb454,	// (0x0000b454) cursor_primary_pane_g1

0x3bcf,	// (0x00003bcf) cursor_text_primary_t1

0xc09b,	// (0x0000c09b) cursor_primary_small_pane_g1

0x3bc1,	// (0x00003bc1) cursor_text_primary_small_t1

0xc091,	// (0x0000c091) cursor_primary_small_pane_g1_copy1

0x3bab,	// (0x00003bab) cursor_text_primary_small_t1_copy1

0x3b8d,	// (0x00003b8d) cursor_text_title_t1

0xc087,	// (0x0000c087) cursor_title_pane_g1

0xb454,	// (0x0000b454) cursor_digital_pane_g1

0x2427,	// (0x00002427) cursor_text_digital_t1

0x2435,	// (0x00002435) link_highlight_primary_pane_g1

0x3b36,	// (0x00003b36) link_highlight_primary_pane_t1

0x2435,	// (0x00002435) link_highlight_primary_small_pane_g1

0x243d,	// (0x0000243d) link_highlight_primary_small_pane_t1

0x244c,	// (0x0000244c) link_highlight_secondary_pane_g1

0x2454,	// (0x00002454) link_highlight_secondary_pane_t1

0x3a9b,	// (0x00003a9b) link_highlight_title_pane_g1

0x3ab2,	// (0x00003ab2) link_highlight_title_pane_t1

0x3a9b,	// (0x00003a9b) link_highlight_digital_pane_g1

0x3aa3,	// (0x00003aa3) link_highlight_digital_pane_t1

0x395b,	// (0x0000395b) copy_highlight_primary_pane_g1

0x3981,	// (0x00003981) copy_highlight_primary_pane_t1

0x395b,	// (0x0000395b) copy_highlight_primary_small_pane_g1

0x3972,	// (0x00003972) copy_highlight_primary_small_pane_t1

0x2463,	// (0x00002463) copy_highlight_secondary_pane_g1

0x246b,	// (0x0000246b) copy_highlight_secondary_pane_t1

0x395b,	// (0x0000395b) copy_highlight_title_pane_g1

0x3963,	// (0x00003963) copy_highlight_title_pane_t1

0x395b,	// (0x0000395b) copy_highlight_digital_pane_g1

0x4e2f,	// (0x00004e2f) copy_highlight_digital_pane_t1

0x4d83,	// (0x00004d83) graphic_text_primary_pane_g1

0x4e13,	// (0x00004e13) graphic_text_primary_pane_t1

0x4e21,	// (0x00004e21) graphic_text_primary_pane_t2

0x0001,

0xa1bd,	// (0x0000a1bd) graphic_text_primary_pane_t

0x4def,	// (0x00004def) graphic_text_primary_small_pane_g1

0x4df7,	// (0x00004df7) graphic_text_primary_small_pane_t1

0x4e05,	// (0x00004e05) graphic_text_primary_small_pane_t2

0x0001,

0xa1b8,	// (0x0000a1b8) graphic_text_primary_small_pane_t

0x4dcb,	// (0x00004dcb) graphic_text_secondary_pane_g1

0x4dd3,	// (0x00004dd3) graphic_text_secondary_pane_t1

0x4de1,	// (0x00004de1) graphic_text_secondary_pane_t2

0x0001,

0xa1b3,	// (0x0000a1b3) graphic_text_secondary_pane_t

0x4da7,	// (0x00004da7) graphic_text_title_pane_g1

0x4daf,	// (0x00004daf) graphic_text_title_pane_t1

0x4dbd,	// (0x00004dbd) graphic_text_title_pane_t2

0x0001,

0xa1ae,	// (0x0000a1ae) graphic_text_title_pane_t

0x4d83,	// (0x00004d83) graphic_text_digital_pane_g1

0x4d8b,	// (0x00004d8b) graphic_text_digital_pane_t1

0x4d99,	// (0x00004d99) graphic_text_digital_pane_t2

0x0001,

0xa1a9,	// (0x0000a1a9) graphic_text_digital_pane_t

0x0474,	// (0x00000474) navi_icon_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_icon_pane_srt

0x024e,	// (0x0000024e) navi_midp_pane_srt

0x024e,	// (0x0000024e) navi_navi_pane_srt

0x0474,	// (0x00000474) navi_text_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_text_pane_srt

0x42e3,	// (0x000042e3) navi_navi_icon_text_pane_srt

0x42eb,	// (0x000042eb) navi_navi_pane_srt_g1_ParamLimits

0x42eb,	// (0x000042eb) navi_navi_pane_srt_g1

0x42fd,	// (0x000042fd) navi_navi_pane_srt_g2_ParamLimits

0x42fd,	// (0x000042fd) navi_navi_pane_srt_g2

0x0001,

0xa0de,	// (0x0000a0de) navi_navi_pane_srt_g_ParamLimits

0xa0de,	// (0x0000a0de) navi_navi_pane_srt_g

0x430f,	// (0x0000430f) navi_navi_tabs_pane_srt

0x42e3,	// (0x000042e3) navi_navi_text_pane_srt

0x42e3,	// (0x000042e3) navi_navi_volume_pane_srt

0x4d74,	// (0x00004d74) navi_navi_text_pane_srt_t1

0x4d4f,	// (0x00004d4f) navi_navi_volume_pane_srt_g1

0x4d57,	// (0x00004d57) volume_small_pane_srt_ParamLimits

0x4d57,	// (0x00004d57) volume_small_pane_srt

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

0x9f64,	// (0x00009f64) volume_small_pane_srt_g_ParamLimits

0x9f64,	// (0x00009f64) volume_small_pane_srt_g

0x08f6,	// (0x000008f6) query_popup_data_pane_cp2

0x4d3d,	// (0x00004d3d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4d3d,	// (0x00004d3d) navi_navi_icon_text_pane_srt_t1

0x3bdd,	// (0x00003bdd) navi_tabs_2_long_pane_srt

0x3bdd,	// (0x00003bdd) navi_tabs_2_pane_srt

0x3bdd,	// (0x00003bdd) navi_tabs_3_long_pane_srt

0x3bdd,	// (0x00003bdd) navi_tabs_3_pane_srt

0x3bdd,	// (0x00003bdd) navi_tabs_4_pane_srt

0x4d15,	// (0x00004d15) tabs_2_active_pane_srt_ParamLimits

0x4d15,	// (0x00004d15) tabs_2_active_pane_srt

0x4d25,	// (0x00004d25) tabs_2_passive_pane_srt_ParamLimits

0x4d25,	// (0x00004d25) tabs_2_passive_pane_srt

0x3395,	// (0x00003395) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3395,	// (0x00003395) bg_passive_tab_pane_cp1_srt

0x4cfb,	// (0x00004cfb) bg_passive_tab_pane_g1_cp1_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp1_srt

0x4d04,	// (0x00004d04) bg_passive_tab_pane_g3_cp1_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt

0x4d0d,	// (0x00004d0d) tabs_2_active_pane_srt_g1

0xb0e6,	// (0x0000b0e6) tabs_2_active_pane_srt_t1_ParamLimits

0xb0e6,	// (0x0000b0e6) tabs_2_active_pane_srt_t1

0x4cfb,	// (0x00004cfb) bg_active_tab_pane_g1_cp1_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp1_srt

0x4d04,	// (0x00004d04) bg_active_tab_pane_g3_cp1_srt

0x4cc8,	// (0x00004cc8) tabs_3_active_pane_srt_ParamLimits

0x4cc8,	// (0x00004cc8) tabs_3_active_pane_srt

0x4cd9,	// (0x00004cd9) tabs_3_passive_pane_cp_srt_ParamLimits

0x4cd9,	// (0x00004cd9) tabs_3_passive_pane_cp_srt

0x4cea,	// (0x00004cea) tabs_3_passive_pane_srt_ParamLimits

0x4cea,	// (0x00004cea) tabs_3_passive_pane_srt

0x3395,	// (0x00003395) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3395,	// (0x00003395) bg_passive_tab_pane_cp2_srt

0x2523,	// (0x00002523) bg_passive_tab_pane_g1_cp2_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp2_srt

0x252c,	// (0x0000252c) bg_passive_tab_pane_g3_cp2_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt

0x4cc0,	// (0x00004cc0) tabs_3_active_pane_srt_g1

0xa939,	// (0x0000a939) tabs_3_active_pane_srt_t1_ParamLimits

0xa939,	// (0x0000a939) tabs_3_active_pane_srt_t1

0x2523,	// (0x00002523) bg_active_tab_pane_g1_cp2_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp2_srt

0x252c,	// (0x0000252c) bg_active_tab_pane_g3_cp2_srt

0x4c78,	// (0x00004c78) tabs_4_active_pane_srt_ParamLimits

0x4c78,	// (0x00004c78) tabs_4_active_pane_srt

0x4c8a,	// (0x00004c8a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4c8a,	// (0x00004c8a) tabs_4_passive_pane_cp2_srt

0x27c2,	// (0x000027c2) aid_size_cell_toolbar

0xb5de,	// (0x0000b5de) main_idle_act_pane_ParamLimits

0x29a8,	// (0x000029a8) popup_large_graphic_colour_window_ParamLimits

0xbb3c,	// (0x0000bb3c) popup_toolbar_window_ParamLimits

0xbb3c,	// (0x0000bb3c) popup_toolbar_window

0x4a82,	// (0x00004a82) list_single_graphic_2heading_pane_ParamLimits

0x4a82,	// (0x00004a82) list_single_graphic_2heading_pane

0x1824,	// (0x00001824) aid_size_cell_apps_grid_lsc_pane

0x1836,	// (0x00001836) aid_size_cell_apps_grid_prt_pane

0x283d,	// (0x0000283d) bg_wml_button_pane_cp1_ParamLimits

0x283d,	// (0x0000283d) bg_wml_button_pane_cp1

0xc028,	// (0x0000c028) form_midp_field_text_pane_t1_ParamLimits

0x3395,	// (0x00003395) input_focus_pane_cp050_ParamLimits

0x3619,	// (0x00003619) list_midp_form_text_pane_ParamLimits

0x35d3,	// (0x000035d3) input_focus_pane_cp051_ParamLimits

0x35e7,	// (0x000035e7) list_midp_choice_pane_ParamLimits

0xbfc6,	// (0x0000bfc6) list_single_2graphic_pane_cp3_ParamLimits

0xbfc6,	// (0x0000bfc6) list_single_2graphic_pane_cp3

0xbfd9,	// (0x0000bfd9) list_single_midp_graphic_pane_ParamLimits

0xbfd9,	// (0x0000bfd9) list_single_midp_graphic_pane

0x30dc,	// (0x000030dc) list_single_graphic_2heading_pane_g1_ParamLimits

0x30dc,	// (0x000030dc) list_single_graphic_2heading_pane_g1

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_g4_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_g4

0x0dab,	// (0x00000dab) list_single_graphic_2heading_pane_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_2heading_pane_g5

0x0002,

0x9fb7,	// (0x00009fb7) list_single_graphic_2heading_pane_g_ParamLimits

0x9fb7,	// (0x00009fb7) list_single_graphic_2heading_pane_g

0x30e8,	// (0x000030e8) list_single_graphic_2heading_pane_t1_ParamLimits

0x30e8,	// (0x000030e8) list_single_graphic_2heading_pane_t1

0x30fc,	// (0x000030fc) list_single_graphic_2heading_pane_t2_ParamLimits

0x30fc,	// (0x000030fc) list_single_graphic_2heading_pane_t2

0x3116,	// (0x00003116) list_single_graphic_2heading_pane_t3_ParamLimits

0x3116,	// (0x00003116) list_single_graphic_2heading_pane_t3

0x0002,

0x9fbe,	// (0x00009fbe) list_single_graphic_2heading_pane_t_ParamLimits

0x9fbe,	// (0x00009fbe) list_single_graphic_2heading_pane_t

0x312e,	// (0x0000312e) bg_popup_sub_pane_cp2

0x3154,	// (0x00003154) grid_toobar_pane

0x318a,	// (0x0000318a) cell_toolbar_pane_ParamLimits

0x318a,	// (0x0000318a) cell_toolbar_pane

0x31b1,	// (0x000031b1) cell_toolbar_pane_g1_ParamLimits

0x31b1,	// (0x000031b1) cell_toolbar_pane_g1

0x31c3,	// (0x000031c3) cell_toolbar_pane_g2_ParamLimits

0x31c3,	// (0x000031c3) cell_toolbar_pane_g2

0x0001,

0x9fc5,	// (0x00009fc5) cell_toolbar_pane_g_ParamLimits

0x9fc5,	// (0x00009fc5) cell_toolbar_pane_g

0x31e5,	// (0x000031e5) grid_highlight_pane_cp2_ParamLimits

0x31e5,	// (0x000031e5) grid_highlight_pane_cp2

0x31ff,	// (0x000031ff) toolbar_button_pane

0x320b,	// (0x0000320b) toolbar_button_pane_g1

0x3213,	// (0x00003213) toolbar_button_pane_g2

0x321b,	// (0x0000321b) toolbar_button_pane_g3

0x3223,	// (0x00003223) toolbar_button_pane_g4

0x322b,	// (0x0000322b) toolbar_button_pane_g5

0x3233,	// (0x00003233) toolbar_button_pane_g6

0x323b,	// (0x0000323b) toolbar_button_pane_g7

0x3243,	// (0x00003243) toolbar_button_pane_g8

0x324b,	// (0x0000324b) toolbar_button_pane_g9

0x0009,

0x9fca,	// (0x00009fca) toolbar_button_pane_g

0x325b,	// (0x0000325b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x325b,	// (0x0000325b) list_single_2graphic_pane_g1_cp3

0xbf2e,	// (0x0000bf2e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbf2e,	// (0x0000bf2e) list_single_2graphic_pane_g2_cp3

0x2157,	// (0x00002157) list_single_2graphic_pane_g3_cp3

0x3276,	// (0x00003276) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3276,	// (0x00003276) list_single_2graphic_pane_g4_cp3

0x3282,	// (0x00003282) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3282,	// (0x00003282) list_single_2graphic_pane_t1_cp3

0x214b,	// (0x0000214b) list_single_midp_graphic_pane_g2_ParamLimits

0x214b,	// (0x0000214b) list_single_midp_graphic_pane_g2

0x27ca,	// (0x000027ca) aid_zoom_text_primary

0x27d2,	// (0x000027d2) aid_zoom_text_secondary

0x25de,	// (0x000025de) status_small_pane_g7_ParamLimits

0x25de,	// (0x000025de) status_small_pane_g7

0x2601,	// (0x00002601) status_small_pane_t1_ParamLimits

0xa881,	// (0x0000a881) title_pane_g2

0x0003,

0xe274,	// (0x0000e274) title_pane_g

0xab63,	// (0x0000ab63) aid_size_cell_colour_1_pane_ParamLimits

0xab63,	// (0x0000ab63) aid_size_cell_colour_1_pane

0xab77,	// (0x0000ab77) aid_size_cell_colour_2_pane_ParamLimits

0xab77,	// (0x0000ab77) aid_size_cell_colour_2_pane

0xab8b,	// (0x0000ab8b) aid_size_cell_colour_3_pane_ParamLimits

0xab8b,	// (0x0000ab8b) aid_size_cell_colour_3_pane

0xab9f,	// (0x0000ab9f) aid_size_cell_colour_4_pane_ParamLimits

0xab9f,	// (0x0000ab9f) aid_size_cell_colour_4_pane

0x16d3,	// (0x000016d3) title_pane_stacon_g1_ParamLimits

0x16d3,	// (0x000016d3) title_pane_stacon_g1

0x39d8,	// (0x000039d8) popup_note_wait_window_g3_ParamLimits

0x39d8,	// (0x000039d8) popup_note_wait_window_g3

0x3a4e,	// (0x00003a4e) popup_note_wait_window_t5_ParamLimits

0x3a4e,	// (0x00003a4e) popup_note_wait_window_t5

0x024e,	// (0x0000024e) main_feb_china_hwr_fs_writing_pane

0xb63f,	// (0x0000b63f) popup_feb_china_hwr_fs_window_ParamLimits

0xb63f,	// (0x0000b63f) popup_feb_china_hwr_fs_window

0xbf3f,	// (0x0000bf3f) aid_size_cell_hwr_fs_ParamLimits

0xbf3f,	// (0x0000bf3f) aid_size_cell_hwr_fs

0x3395,	// (0x00003395) bg_popup_sub_pane_cp3_ParamLimits

0x3395,	// (0x00003395) bg_popup_sub_pane_cp3

0xbf54,	// (0x0000bf54) grid_hwr_fs_pane_ParamLimits

0xbf54,	// (0x0000bf54) grid_hwr_fs_pane

0x33b5,	// (0x000033b5) linegrid_hwr_fs_pane_ParamLimits

0x33b5,	// (0x000033b5) linegrid_hwr_fs_pane

0xbf6c,	// (0x0000bf6c) cell_hwr_fs_pane_ParamLimits

0xbf6c,	// (0x0000bf6c) cell_hwr_fs_pane

0x33e3,	// (0x000033e3) linegrid_hwr_fs_pane_g1_ParamLimits

0x33e3,	// (0x000033e3) linegrid_hwr_fs_pane_g1

0xbf8c,	// (0x0000bf8c) linegrid_hwr_fs_pane_g2_ParamLimits

0xbf8c,	// (0x0000bf8c) linegrid_hwr_fs_pane_g2

0x3401,	// (0x00003401) linegrid_hwr_fs_pane_g3_ParamLimits

0x3401,	// (0x00003401) linegrid_hwr_fs_pane_g3

0x340d,	// (0x0000340d) linegrid_hwr_fs_pane_g4_ParamLimits

0x340d,	// (0x0000340d) linegrid_hwr_fs_pane_g4

0x3427,	// (0x00003427) linegrid_hwr_fs_pane_g5_ParamLimits

0x3427,	// (0x00003427) linegrid_hwr_fs_pane_g5

0x0004,

0xe38f,	// (0x0000e38f) linegrid_hwr_fs_pane_g_ParamLimits

0xe38f,	// (0x0000e38f) linegrid_hwr_fs_pane_g

0x343d,	// (0x0000343d) cell_hwr_fs_pane_g1_ParamLimits

0x343d,	// (0x0000343d) cell_hwr_fs_pane_g1

0x301a,	// (0x0000301a) cell_hwr_fs_pane_g2_ParamLimits

0x301a,	// (0x0000301a) cell_hwr_fs_pane_g2

0xbf9e,	// (0x0000bf9e) cell_hwr_fs_pane_g3_ParamLimits

0xbf9e,	// (0x0000bf9e) cell_hwr_fs_pane_g3

0xbfab,	// (0x0000bfab) cell_hwr_fs_pane_g4_ParamLimits

0xbfab,	// (0x0000bfab) cell_hwr_fs_pane_g4

0x0003,

0xe39a,	// (0x0000e39a) cell_hwr_fs_pane_g_ParamLimits

0xe39a,	// (0x0000e39a) cell_hwr_fs_pane_g

0xbfb8,	// (0x0000bfb8) cell_hwr_fs_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp6

0x024e,	// (0x0000024e) main_idle_act2_pane

0x1496,	// (0x00001496) aid_inside_area_popup_secondary

0xc1a8,	// (0x0000c1a8) aid_inside_area_window_primary_ParamLimits

0xc1a8,	// (0x0000c1a8) aid_inside_area_window_primary

0x4e3e,	// (0x00004e3e) ai2_news_ticker_pane

0x4e46,	// (0x00004e46) aid_size_cell_ai1_link_ParamLimits

0x4e46,	// (0x00004e46) aid_size_cell_ai1_link

0xc5f3,	// (0x0000c5f3) popup_ai2_data_window_ParamLimits

0xc5f3,	// (0x0000c5f3) popup_ai2_data_window

0x4e74,	// (0x00004e74) popup_ai2_link_window_ParamLimits

0x4e74,	// (0x00004e74) popup_ai2_link_window

0x3395,	// (0x00003395) bg_popup_sub_pane_cp4_ParamLimits

0x3395,	// (0x00003395) bg_popup_sub_pane_cp4

0x4e88,	// (0x00004e88) grid_ai2_link_pane_ParamLimits

0x4e88,	// (0x00004e88) grid_ai2_link_pane

0x4e9f,	// (0x00004e9f) popup_ai2_link_window_g1_ParamLimits

0x4e9f,	// (0x00004e9f) popup_ai2_link_window_g1

0x4eab,	// (0x00004eab) popup_ai2_link_window_g2_ParamLimits

0x4eab,	// (0x00004eab) popup_ai2_link_window_g2

0x0001,

0xa1c2,	// (0x0000a1c2) popup_ai2_link_window_g_ParamLimits

0xa1c2,	// (0x0000a1c2) popup_ai2_link_window_g

0x4eba,	// (0x00004eba) ai2_mp_button_pane

0x4ec2,	// (0x00004ec2) ai2_mp_volume_pane

0x35d3,	// (0x000035d3) bg_popup_sub_pane_cp5_ParamLimits

0x35d3,	// (0x000035d3) bg_popup_sub_pane_cp5

0x4eca,	// (0x00004eca) heading_ai2_gene_pane_ParamLimits

0x4eca,	// (0x00004eca) heading_ai2_gene_pane

0x4ed6,	// (0x00004ed6) list_ai2_gene_pane_ParamLimits

0x4ed6,	// (0x00004ed6) list_ai2_gene_pane

0x4f1e,	// (0x00004f1e) cell_ai2_link_pane_ParamLimits

0x4f1e,	// (0x00004f1e) cell_ai2_link_pane

0x4f34,	// (0x00004f34) cell_ai2_link_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp7

0x4ffc,	// (0x00004ffc) ai2_mp_volume_pane_g1

0x5004,	// (0x00005004) ai2_mp_volume_pane_g2

0xc61d,	// (0x0000c61d) list_ai2_gene_pane_t1

0x500c,	// (0x0000500c) ai2_mp_volume_pane_g3

0x0002,

0xa1db,	// (0x0000a1db) ai2_mp_volume_pane_g

0x5014,	// (0x00005014) volume_small_pane_cp3

0x501d,	// (0x0000501d) aid_size_cell_ai2_button

0x5025,	// (0x00005025) grid_ai2_button_pane

0x502e,	// (0x0000502e) cell_ai2_button_pane_ParamLimits

0x502e,	// (0x0000502e) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp8

0x4fbc,	// (0x00004fbc) ai2_gene_pane_t1_ParamLimits

0x4fbc,	// (0x00004fbc) ai2_gene_pane_t1

0xb5ad,	// (0x0000b5ad) aid_height_parent_landscape

0xc372,	// (0x0000c372) aid_height_set_list

0x48b8,	// (0x000048b8) aid_size_parent

0x4c0b,	// (0x00004c0b) aid_size_cell_graphic_pane_ParamLimits

0x4ee6,	// (0x00004ee6) popup_ai2_data_window_g1_ParamLimits

0x4ee6,	// (0x00004ee6) popup_ai2_data_window_g1

0x4ef2,	// (0x00004ef2) ai2_news_ticker_pane_g1

0x4efa,	// (0x00004efa) ai2_news_ticker_pane_g2

0x0001,

0xa1c7,	// (0x0000a1c7) ai2_news_ticker_pane_g

0x4f02,	// (0x00004f02) ai2_news_ticker_pane_t1

0x4f10,	// (0x00004f10) ai2_news_ticker_pane_t2

0x0001,

0xa1cc,	// (0x0000a1cc) ai2_news_ticker_pane_t

0x4ba5,	// (0x00004ba5) heading_ai2_gene_pane_g1

0x4f3d,	// (0x00004f3d) heading_ai2_gene_pane_t1_ParamLimits

0x4f3d,	// (0x00004f3d) heading_ai2_gene_pane_t1

0x4f52,	// (0x00004f52) list_highlight_pane_cp6

0xc607,	// (0x0000c607) ai2_gene_pane_ParamLimits

0xc607,	// (0x0000c607) ai2_gene_pane

0xc62b,	// (0x0000c62b) list_ai2_gene_pane_t2

0x0001,

0xe437,	// (0x0000e437) list_ai2_gene_pane_t

0x4f8d,	// (0x00004f8d) list_highlight_pane_cp8_ParamLimits

0x4f8d,	// (0x00004f8d) list_highlight_pane_cp8

0x4f9e,	// (0x00004f9e) ai2_gene_pane_g1_ParamLimits

0x4f9e,	// (0x00004f9e) ai2_gene_pane_g1

0x4fb0,	// (0x00004fb0) ai2_gene_pane_g2_ParamLimits

0x4fb0,	// (0x00004fb0) ai2_gene_pane_g2

0x0001,

0xa1d6,	// (0x0000a1d6) ai2_gene_pane_g_ParamLimits

0xa1d6,	// (0x0000a1d6) ai2_gene_pane_g

0x0c62,	// (0x00000c62) scroll_pane_cp12

0xb56c,	// (0x0000b56c) control_pane_t3_ParamLimits

0xb56c,	// (0x0000b56c) control_pane_t3

0x25f2,	// (0x000025f2) status_small_pane_g8_ParamLimits

0x25f2,	// (0x000025f2) status_small_pane_g8

0xb6b3,	// (0x0000b6b3) popup_find_window_ParamLimits

0xb8a6,	// (0x0000b8a6) popup_note_image_window_ParamLimits

0x0e74,	// (0x00000e74) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double2_graphic_pane_vc_g1

0x0e80,	// (0x00000e80) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e80,	// (0x00000e80) list_double2_graphic_pane_vc_g2

0x0dab,	// (0x00000dab) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dab,	// (0x00000dab) list_double2_graphic_pane_vc_g3

0x0002,

0x9e25,	// (0x00009e25) list_double2_graphic_pane_vc_g_ParamLimits

0x9e25,	// (0x00009e25) list_double2_graphic_pane_vc_g

0x0e8c,	// (0x00000e8c) list_double2_graphic_pane_vc_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_double2_graphic_pane_vc_t1

0x0e80,	// (0x00000e80) list_single_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_single_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_heading_pane_vc_g2

0x0001,

0x9e71,	// (0x00009e71) list_single_heading_pane_vc_g_ParamLimits

0x9e71,	// (0x00009e71) list_single_heading_pane_vc_g

0x329c,	// (0x0000329c) list_single_heading_pane_vc_t1_ParamLimits

0x329c,	// (0x0000329c) list_single_heading_pane_vc_t1

0x32b2,	// (0x000032b2) list_single_heading_pane_vc_t2_ParamLimits

0x32b2,	// (0x000032b2) list_single_heading_pane_vc_t2

0x0001,

0x9fdf,	// (0x00009fdf) list_single_heading_pane_vc_t_ParamLimits

0x9fdf,	// (0x00009fdf) list_single_heading_pane_vc_t

0x32da,	// (0x000032da) list_setting_number_pane_vc_g1_ParamLimits

0x32da,	// (0x000032da) list_setting_number_pane_vc_g1

0x32e6,	// (0x000032e6) list_setting_number_pane_vc_g2_ParamLimits

0x32e6,	// (0x000032e6) list_setting_number_pane_vc_g2

0x0001,

0x9fe4,	// (0x00009fe4) list_setting_number_pane_vc_g_ParamLimits

0x9fe4,	// (0x00009fe4) list_setting_number_pane_vc_g

0x32f2,	// (0x000032f2) list_setting_number_pane_vc_t1_ParamLimits

0x32f2,	// (0x000032f2) list_setting_number_pane_vc_t1

0x3306,	// (0x00003306) list_setting_number_pane_vc_t2_ParamLimits

0x3306,	// (0x00003306) list_setting_number_pane_vc_t2

0x3322,	// (0x00003322) list_setting_number_pane_vc_t3_ParamLimits

0x3322,	// (0x00003322) list_setting_number_pane_vc_t3

0x0002,

0x9fe9,	// (0x00009fe9) list_setting_number_pane_vc_t_ParamLimits

0x9fe9,	// (0x00009fe9) list_setting_number_pane_vc_t

0x3348,	// (0x00003348) set_value_pane_vc_ParamLimits

0x3348,	// (0x00003348) set_value_pane_vc

0x4a82,	// (0x00004a82) list_double2_graphic_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double2_graphic_pane_vc

0x4a95,	// (0x00004a95) list_double2_large_graphic_pane_vc_ParamLimits

0x4a95,	// (0x00004a95) list_double2_large_graphic_pane_vc

0x4a82,	// (0x00004a82) list_double2_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double2_pane_vc

0x4a82,	// (0x00004a82) list_double_graphic_heading_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double_graphic_heading_pane_vc

0x4a82,	// (0x00004a82) list_double_graphic_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double_graphic_pane_vc

0x4a82,	// (0x00004a82) list_double_heading_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double_heading_pane_vc

0x4a95,	// (0x00004a95) list_double_large_graphic_pane_vc_ParamLimits

0x4a95,	// (0x00004a95) list_double_large_graphic_pane_vc

0x4a82,	// (0x00004a82) list_double_number_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double_number_pane_vc

0x4a82,	// (0x00004a82) list_double_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double_pane_vc

0x4a82,	// (0x00004a82) list_double_time_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_double_time_pane_vc

0x4a82,	// (0x00004a82) list_setting_number_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_setting_number_pane_vc

0x4a82,	// (0x00004a82) list_setting_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_setting_pane_vc

0x4a82,	// (0x00004a82) list_single_graphic_heading_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_single_graphic_heading_pane_vc

0x4a82,	// (0x00004a82) list_single_heading_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_single_heading_pane_vc

0x4a82,	// (0x00004a82) list_single_number_heading_pane_vc_ParamLimits

0x4a82,	// (0x00004a82) list_single_number_heading_pane_vc

0x0e74,	// (0x00000e74) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double_graphic_heading_pane_vc_g1

0x0e80,	// (0x00000e80) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0e80,	// (0x00000e80) list_double_graphic_heading_pane_vc_g2

0x0dab,	// (0x00000dab) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0dab,	// (0x00000dab) list_double_graphic_heading_pane_vc_g3

0x0002,

0x9e25,	// (0x00009e25) list_double_graphic_heading_pane_vc_g_ParamLimits

0x9e25,	// (0x00009e25) list_double_graphic_heading_pane_vc_g

0x5062,	// (0x00005062) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5062,	// (0x00005062) list_double_graphic_heading_pane_vc_t1

0x329c,	// (0x0000329c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x329c,	// (0x0000329c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xa1e2,	// (0x0000a1e2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xa1e2,	// (0x0000a1e2) list_double_graphic_heading_pane_vc_t

0x32da,	// (0x000032da) list_setting_pane_vc_g1_ParamLimits

0x32da,	// (0x000032da) list_setting_pane_vc_g1

0x32e6,	// (0x000032e6) list_setting_pane_vc_g2_ParamLimits

0x32e6,	// (0x000032e6) list_setting_pane_vc_g2

0x0001,

0x9fe4,	// (0x00009fe4) list_setting_pane_vc_g_ParamLimits

0x9fe4,	// (0x00009fe4) list_setting_pane_vc_g

0x52a2,	// (0x000052a2) list_setting_pane_vc_t1_ParamLimits

0x52a2,	// (0x000052a2) list_setting_pane_vc_t1

0x52b6,	// (0x000052b6) list_setting_pane_vc_t2_ParamLimits

0x52b6,	// (0x000052b6) list_setting_pane_vc_t2

0x0001,

0xa225,	// (0x0000a225) list_setting_pane_vc_t_ParamLimits

0xa225,	// (0x0000a225) list_setting_pane_vc_t

0x3348,	// (0x00003348) set_value_pane_cp_vc_ParamLimits

0x3348,	// (0x00003348) set_value_pane_cp_vc

0x0e80,	// (0x00000e80) list_single_number_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_heading_pane_vc_g2

0x0001,

0x9e71,	// (0x00009e71) list_single_number_heading_pane_vc_g_ParamLimits

0x9e71,	// (0x00009e71) list_single_number_heading_pane_vc_g

0x329c,	// (0x0000329c) list_single_number_heading_pane_vc_t1_ParamLimits

0x329c,	// (0x0000329c) list_single_number_heading_pane_vc_t1

0x52d8,	// (0x000052d8) list_single_number_heading_pane_vc_t2_ParamLimits

0x52d8,	// (0x000052d8) list_single_number_heading_pane_vc_t2

0x52ea,	// (0x000052ea) list_single_number_heading_pane_vc_t3_ParamLimits

0x52ea,	// (0x000052ea) list_single_number_heading_pane_vc_t3

0x0002,

0xa22a,	// (0x0000a22a) list_single_number_heading_pane_vc_t_ParamLimits

0xa22a,	// (0x0000a22a) list_single_number_heading_pane_vc_t

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_vc_g1

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_vc_g4

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_vc_g5

0x0002,

0x9e25,	// (0x00009e25) list_single_graphic_heading_pane_vc_g_ParamLimits

0x9e25,	// (0x00009e25) list_single_graphic_heading_pane_vc_g

0x329c,	// (0x0000329c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x329c,	// (0x0000329c) list_single_graphic_heading_pane_vc_t1

0x52fc,	// (0x000052fc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x52fc,	// (0x000052fc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa231,	// (0x0000a231) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa231,	// (0x0000a231) list_single_graphic_heading_pane_vc_t

0x0e80,	// (0x00000e80) list_double2_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double2_pane_vc_g1

0x0dab,	// (0x00000dab) list_double2_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double2_pane_vc_g2

0x0001,

0x9e71,	// (0x00009e71) list_double2_pane_vc_g_ParamLimits

0x9e71,	// (0x00009e71) list_double2_pane_vc_g

0x0db7,	// (0x00000db7) list_double2_pane_vc_t1_ParamLimits

0x0db7,	// (0x00000db7) list_double2_pane_vc_t1

0x0d1a,	// (0x00000d1a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d1a,	// (0x00000d1a) list_double2_large_graphic_pane_vc_g1

0x0d26,	// (0x00000d26) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d26,	// (0x00000d26) list_double2_large_graphic_pane_vc_g2

0x0d32,	// (0x00000d32) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d32,	// (0x00000d32) list_double2_large_graphic_pane_vc_g3

0x0002,

0x9df5,	// (0x00009df5) list_double2_large_graphic_pane_vc_g_ParamLimits

0x9df5,	// (0x00009df5) list_double2_large_graphic_pane_vc_g

0x0d46,	// (0x00000d46) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d46,	// (0x00000d46) list_double2_large_graphic_pane_vc_t1

0x530e,	// (0x0000530e) list_double_time_pane_vc_g1_ParamLimits

0x530e,	// (0x0000530e) list_double_time_pane_vc_g1

0x531a,	// (0x0000531a) list_double_time_pane_vc_g2_ParamLimits

0x531a,	// (0x0000531a) list_double_time_pane_vc_g2

0x0001,

0xa236,	// (0x0000a236) list_double_time_pane_vc_g_ParamLimits

0xa236,	// (0x0000a236) list_double_time_pane_vc_g

0x5326,	// (0x00005326) list_double_time_pane_vc_t1_ParamLimits

0x5326,	// (0x00005326) list_double_time_pane_vc_t1

0x533f,	// (0x0000533f) list_double_time_pane_vc_t2_ParamLimits

0x533f,	// (0x0000533f) list_double_time_pane_vc_t2

0x5358,	// (0x00005358) list_double_time_pane_vc_t3_ParamLimits

0x5358,	// (0x00005358) list_double_time_pane_vc_t3

0x5370,	// (0x00005370) list_double_time_pane_vc_t4_ParamLimits

0x5370,	// (0x00005370) list_double_time_pane_vc_t4

0x0003,

0xa23b,	// (0x0000a23b) list_double_time_pane_vc_t_ParamLimits

0xa23b,	// (0x0000a23b) list_double_time_pane_vc_t

0x0e80,	// (0x00000e80) list_double_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_pane_vc_g2

0x0001,

0x9e71,	// (0x00009e71) list_double_pane_vc_g_ParamLimits

0x9e71,	// (0x00009e71) list_double_pane_vc_g

0x5382,	// (0x00005382) list_double_pane_vc_t1_ParamLimits

0x5382,	// (0x00005382) list_double_pane_vc_t1

0x5394,	// (0x00005394) list_double_pane_vc_t2_ParamLimits

0x5394,	// (0x00005394) list_double_pane_vc_t2

0x0001,

0xa244,	// (0x0000a244) list_double_pane_vc_t_ParamLimits

0xa244,	// (0x0000a244) list_double_pane_vc_t

0x0e80,	// (0x00000e80) list_double_number_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_number_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_number_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_number_pane_vc_g2

0x0001,

0x9e71,	// (0x00009e71) list_double_number_pane_vc_g_ParamLimits

0x9e71,	// (0x00009e71) list_double_number_pane_vc_g

0x53aa,	// (0x000053aa) list_double_number_pane_vc_t1_ParamLimits

0x53aa,	// (0x000053aa) list_double_number_pane_vc_t1

0x53be,	// (0x000053be) list_double_number_pane_vc_t2_ParamLimits

0x53be,	// (0x000053be) list_double_number_pane_vc_t2

0x5394,	// (0x00005394) list_double_number_pane_vc_t3_ParamLimits

0x5394,	// (0x00005394) list_double_number_pane_vc_t3

0x0002,

0xa249,	// (0x0000a249) list_double_number_pane_vc_t_ParamLimits

0xa249,	// (0x0000a249) list_double_number_pane_vc_t

0x53d0,	// (0x000053d0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x53d0,	// (0x000053d0) list_double_large_graphic_pane_vc_g1

0x53dc,	// (0x000053dc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x53dc,	// (0x000053dc) list_double_large_graphic_pane_vc_g2

0x0d32,	// (0x00000d32) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0d32,	// (0x00000d32) list_double_large_graphic_pane_vc_g3

0x53eb,	// (0x000053eb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x53eb,	// (0x000053eb) list_double_large_graphic_pane_vc_g4

0x0003,

0xa250,	// (0x0000a250) list_double_large_graphic_pane_vc_g_ParamLimits

0xa250,	// (0x0000a250) list_double_large_graphic_pane_vc_g

0x53f7,	// (0x000053f7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x53f7,	// (0x000053f7) list_double_large_graphic_pane_vc_t1

0x5409,	// (0x00005409) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5409,	// (0x00005409) list_double_large_graphic_pane_vc_t2

0x0001,

0xa259,	// (0x0000a259) list_double_large_graphic_pane_vc_t_ParamLimits

0xa259,	// (0x0000a259) list_double_large_graphic_pane_vc_t

0x0e80,	// (0x00000e80) list_double_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_heading_pane_vc_g2

0x0001,

0x9e71,	// (0x00009e71) list_double_heading_pane_vc_g_ParamLimits

0x9e71,	// (0x00009e71) list_double_heading_pane_vc_g

0x5420,	// (0x00005420) list_double_heading_pane_vc_t1_ParamLimits

0x5420,	// (0x00005420) list_double_heading_pane_vc_t1

0x329c,	// (0x0000329c) list_double_heading_pane_vc_t2_ParamLimits

0x329c,	// (0x0000329c) list_double_heading_pane_vc_t2

0x0001,

0xa25e,	// (0x0000a25e) list_double_heading_pane_vc_t_ParamLimits

0xa25e,	// (0x0000a25e) list_double_heading_pane_vc_t

0x0e74,	// (0x00000e74) list_double_graphic_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double_graphic_pane_vc_g1

0x5432,	// (0x00005432) list_double_graphic_pane_vc_g2_ParamLimits

0x5432,	// (0x00005432) list_double_graphic_pane_vc_g2

0x5441,	// (0x00005441) list_double_graphic_pane_vc_g3_ParamLimits

0x5441,	// (0x00005441) list_double_graphic_pane_vc_g3

0x0002,

0xa263,	// (0x0000a263) list_double_graphic_pane_vc_g_ParamLimits

0xa263,	// (0x0000a263) list_double_graphic_pane_vc_g

0x544d,	// (0x0000544d) list_double_graphic_pane_vc_t1_ParamLimits

0x544d,	// (0x0000544d) list_double_graphic_pane_vc_t1

0x5394,	// (0x00005394) list_double_graphic_pane_vc_t2_ParamLimits

0x5394,	// (0x00005394) list_double_graphic_pane_vc_t2

0x0001,

0xa26a,	// (0x0000a26a) list_double_graphic_pane_vc_t_ParamLimits

0xa26a,	// (0x0000a26a) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xa6fa,	// (0x0000a6fa) aid_size_cell_touch_ParamLimits

0xa6fa,	// (0x0000a6fa) aid_size_cell_touch

0x0278,	// (0x00000278) popup_fast_swap_wide_window_ParamLimits

0x0278,	// (0x00000278) popup_fast_swap_wide_window

0xa814,	// (0x0000a814) touch_pane_ParamLimits

0xa814,	// (0x0000a814) touch_pane

0x1118,	// (0x00001118) button_value_adjust_pane_cp2

0x1120,	// (0x00001120) button_value_adjust_pane_cp4

0x1140,	// (0x00001140) form_field_data_pane_cp2

0xafa8,	// (0x0000afa8) form_field_data_wide_pane_cp2

0x18f5,	// (0x000018f5) bg_scroll_pane_ParamLimits

0x1914,	// (0x00001914) scroll_handle_pane_ParamLimits

0x1928,	// (0x00001928) scroll_sc2_down_pane_ParamLimits

0x1928,	// (0x00001928) scroll_sc2_down_pane

0x194f,	// (0x0000194f) scroll_sc2_up_pane_ParamLimits

0x194f,	// (0x0000194f) scroll_sc2_up_pane

0xc74f,	// (0x0000c74f) grid_wheel_folder_pane_g1_ParamLimits

0xc74f,	// (0x0000c74f) grid_wheel_folder_pane_g1

0x1faf,	// (0x00001faf) clock_nsta_pane_cp2_ParamLimits

0x1faf,	// (0x00001faf) clock_nsta_pane_cp2

0xb3b7,	// (0x0000b3b7) listscroll_midp_pane_ParamLimits

0xb3c7,	// (0x0000b3c7) midp_canvas_pane

0x27b0,	// (0x000027b0) nsta_clock_indic_pane

0x280e,	// (0x0000280e) listscroll_form_pane_vc

0x282b,	// (0x0000282b) listscroll_set_pane_vc_ParamLimits

0x282b,	// (0x0000282b) listscroll_set_pane_vc

0xbc72,	// (0x0000bc72) clock_nsta_pane

0xbc95,	// (0x0000bc95) indicator_nsta_pane

0x312e,	// (0x0000312e) bg_popup_sub_pane_cp2_ParamLimits

0x3142,	// (0x00003142) find_pane_cp2_ParamLimits

0x3142,	// (0x00003142) find_pane_cp2

0x3154,	// (0x00003154) grid_toobar_pane_ParamLimits

0x3354,	// (0x00003354) list_form_gen_pane_vc_ParamLimits

0x3354,	// (0x00003354) list_form_gen_pane_vc

0x336a,	// (0x0000336a) scroll_pane_cp8_vc_ParamLimits

0x336a,	// (0x0000336a) scroll_pane_cp8_vc

0x347b,	// (0x0000347b) data_form_wide_pane_vc_ParamLimits

0x347b,	// (0x0000347b) data_form_wide_pane_vc

0x3487,	// (0x00003487) form_field_data_wide_pane_vc_g1

0x348f,	// (0x0000348f) form_field_data_wide_pane_vc_t1_ParamLimits

0x348f,	// (0x0000348f) form_field_data_wide_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp6_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp6_vc

0xc05f,	// (0x0000c05f) list_midp_pane_ParamLimits

0x4c6c,	// (0x00004c6c) scroll_pane_cp16_ParamLimits

0x4c6c,	// (0x00004c6c) scroll_pane_cp16

0x37be,	// (0x000037be) button_value_adjust_pane_ParamLimits

0x37be,	// (0x000037be) button_value_adjust_pane

0xc37e,	// (0x0000c37e) button_value_adjust_pane_cp6_ParamLimits

0xc37e,	// (0x0000c37e) button_value_adjust_pane_cp6

0xc488,	// (0x0000c488) settings_code_pane_cp_ParamLimits

0xc488,	// (0x0000c488) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0x9f0e,	// (0x00009f0e) cell_touch_pane_g

0xc639,	// (0x0000c639) cell_touch_pane_cp_ParamLimits

0xc639,	// (0x0000c639) cell_touch_pane_cp

0xc655,	// (0x0000c655) cell_touch_pane_ParamLimits

0xc655,	// (0x0000c655) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_vc

0x5074,	// (0x00005074) list_set_graphic_pane_vc_g1_ParamLimits

0x5074,	// (0x00005074) list_set_graphic_pane_vc_g1

0x5080,	// (0x00005080) list_set_graphic_pane_vc_g2_ParamLimits

0x5080,	// (0x00005080) list_set_graphic_pane_vc_g2

0x0001,

0xa1e7,	// (0x0000a1e7) list_set_graphic_pane_vc_g_ParamLimits

0xa1e7,	// (0x0000a1e7) list_set_graphic_pane_vc_g

0x508c,	// (0x0000508c) text_primary_small_cp13_vc_ParamLimits

0x508c,	// (0x0000508c) text_primary_small_cp13_vc

0x50a4,	// (0x000050a4) list_set_graphic_pane_vc_ParamLimits

0x50a4,	// (0x000050a4) list_set_graphic_pane_vc

0x024e,	// (0x0000024e) input_focus_pane_cp2_vc

0x002a,	// (0x0000002a) setting_code_pane_vc_g1

0x50b7,	// (0x000050b7) setting_code_pane_vc_t1

0x50c5,	// (0x000050c5) set_text_pane_vc_t1_ParamLimits

0x50c5,	// (0x000050c5) set_text_pane_vc_t1

0x024e,	// (0x0000024e) input_focus_pane_cp1_vc

0x50e0,	// (0x000050e0) list_set_text_pane_vc

0x002a,	// (0x0000002a) setting_text_pane_vc_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_vc

0x50ea,	// (0x000050ea) setting_slider_graphic_pane_vc_g1

0x50f2,	// (0x000050f2) setting_slider_graphic_pane_vc_t1

0x5100,	// (0x00005100) setting_slider_graphic_pane_vc_t2

0x0001,

0xa1ec,	// (0x0000a1ec) setting_slider_graphic_pane_vc_t

0x510e,	// (0x0000510e) slider_set_pane_cp_vc

0x5116,	// (0x00005116) slider_set_pane_vc_g1

0x511f,	// (0x0000511f) slider_set_pane_vc_g2

0x0006,

0xa1f1,	// (0x0000a1f1) slider_set_pane_vc_g

0x130e,	// (0x0000130e) set_opt_bg_pane_g1_copy1

0x1316,	// (0x00001316) set_opt_bg_pane_g2_copy1

0x514b,	// (0x0000514b) set_opt_bg_pane_g3_copy1

0x1326,	// (0x00001326) set_opt_bg_pane_g4_copy1

0x132e,	// (0x0000132e) set_opt_bg_pane_g5_copy1

0x1336,	// (0x00001336) set_opt_bg_pane_g6_copy1

0x5153,	// (0x00005153) set_opt_bg_pane_g7_copy1

0x515b,	// (0x0000515b) set_opt_bg_pane_g8_copy1

0x5163,	// (0x00005163) set_opt_bg_pane_g9_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp_vc

0x516b,	// (0x0000516b) setting_slider_pane_vc_t1

0x50f2,	// (0x000050f2) setting_slider_pane_vc_t2

0x5100,	// (0x00005100) setting_slider_pane_vc_t3

0x0002,

0xa200,	// (0x0000a200) setting_slider_pane_vc_t

0x510e,	// (0x0000510e) slider_set_pane_vc

0x3f9a,	// (0x00003f9a) volume_set_pane_vc_g1

0x517a,	// (0x0000517a) volume_set_pane_vc_g2

0x5183,	// (0x00005183) volume_set_pane_vc_g3

0x518c,	// (0x0000518c) volume_set_pane_vc_g4

0x5195,	// (0x00005195) volume_set_pane_vc_g5

0x519e,	// (0x0000519e) volume_set_pane_vc_g6

0x51a7,	// (0x000051a7) volume_set_pane_vc_g7

0x51b0,	// (0x000051b0) volume_set_pane_vc_g8

0x51b9,	// (0x000051b9) volume_set_pane_vc_g9

0x51c2,	// (0x000051c2) volume_set_pane_vc_g10

0x0009,

0xa207,	// (0x0000a207) volume_set_pane_vc_g

0x51cb,	// (0x000051cb) volume_set_pane_vc

0x51d3,	// (0x000051d3) button_value_adjust_pane_cp1_vc

0x51dd,	// (0x000051dd) list_highlight_pane_cp2_vc

0x51e6,	// (0x000051e6) list_set_pane_vc_ParamLimits

0x51e6,	// (0x000051e6) list_set_pane_vc

0x5238,	// (0x00005238) main_pane_set_vc_t1_ParamLimits

0x5238,	// (0x00005238) main_pane_set_vc_t1

0x524d,	// (0x0000524d) main_pane_set_vc_t2_ParamLimits

0x524d,	// (0x0000524d) main_pane_set_vc_t2

0x525f,	// (0x0000525f) main_pane_set_vc_t3_ParamLimits

0x525f,	// (0x0000525f) main_pane_set_vc_t3

0x5271,	// (0x00005271) main_pane_set_vc_t4_ParamLimits

0x5271,	// (0x00005271) main_pane_set_vc_t4

0x0003,

0xa21c,	// (0x0000a21c) main_pane_set_vc_t_ParamLimits

0xa21c,	// (0x0000a21c) main_pane_set_vc_t

0x5283,	// (0x00005283) setting_code_pane_vc_ParamLimits

0x5283,	// (0x00005283) setting_code_pane_vc

0x5292,	// (0x00005292) setting_slider_graphic_pane_vc

0x5292,	// (0x00005292) setting_slider_pane_vc

0x5292,	// (0x00005292) setting_text_pane_vc

0x5292,	// (0x00005292) setting_volume_pane_vc

0x529a,	// (0x0000529a) scroll_pane_cp121_vc

0x110f,	// (0x0000110f) set_content_pane_vc

0x545f,	// (0x0000545f) button_value_adjust_pane_g1

0x5468,	// (0x00005468) button_value_adjust_pane_g2

0x0001,

0xa26f,	// (0x0000a26f) button_value_adjust_pane_g

0x5471,	// (0x00005471) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5471,	// (0x00005471) form_field_slider_wide_pane_vc_t1

0x5487,	// (0x00005487) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5487,	// (0x00005487) form_field_slider_wide_pane_vc_t2

0x0001,

0xa274,	// (0x0000a274) form_field_slider_wide_pane_vc_t_ParamLimits

0xa274,	// (0x0000a274) form_field_slider_wide_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp10_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10_vc

0x549c,	// (0x0000549c) slider_cont_pane_cp1_vc_ParamLimits

0x549c,	// (0x0000549c) slider_cont_pane_cp1_vc

0x5116,	// (0x00005116) slider_form_pane_g1_cp2

0x511f,	// (0x0000511f) slider_form_pane_g2_cp2

0x54b7,	// (0x000054b7) form_field_slider_pane_vc_t3

0x54c5,	// (0x000054c5) form_field_slider_pane_vc_t4

0x54d3,	// (0x000054d3) slider_form_pane_vc_ParamLimits

0x54d3,	// (0x000054d3) slider_form_pane_vc

0x54e0,	// (0x000054e0) form_field_slider_pane_vc_t1_ParamLimits

0x54e0,	// (0x000054e0) form_field_slider_pane_vc_t1

0x54f6,	// (0x000054f6) form_field_slider_pane_vc_t2_ParamLimits

0x54f6,	// (0x000054f6) form_field_slider_pane_vc_t2

0x0001,

0xa284,	// (0x0000a284) form_field_slider_pane_vc_t_ParamLimits

0xa284,	// (0x0000a284) form_field_slider_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp9_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9_vc

0x5508,	// (0x00005508) slider_cont_pane_vc_ParamLimits

0x5508,	// (0x00005508) slider_cont_pane_vc

0x551a,	// (0x0000551a) list_form_graphic_pane_cp_vc_ParamLimits

0x551a,	// (0x0000551a) list_form_graphic_pane_cp_vc

0x3487,	// (0x00003487) form_field_popup_wide_pane_vc_g1

0x552f,	// (0x0000552f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x552f,	// (0x0000552f) form_field_popup_wide_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp8_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp8_vc

0x5544,	// (0x00005544) list_form_wide_pane_vc_ParamLimits

0x5544,	// (0x00005544) list_form_wide_pane_vc

0x5550,	// (0x00005550) list_form_graphic_pane_vc_g1

0x5558,	// (0x00005558) list_form_graphic_pane_vc_t1_ParamLimits

0x5558,	// (0x00005558) list_form_graphic_pane_vc_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc

0x5574,	// (0x00005574) list_form_graphic_pane_vc_ParamLimits

0x5574,	// (0x00005574) list_form_graphic_pane_vc

0x3487,	// (0x00003487) form_field_popup_pane_vc_g1

0x558a,	// (0x0000558a) form_field_popup_pane_vc_t1_ParamLimits

0x558a,	// (0x0000558a) form_field_popup_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp7_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp7_vc

0x559f,	// (0x0000559f) list_form_pane_vc_ParamLimits

0x559f,	// (0x0000559f) list_form_pane_vc

0x55ab,	// (0x000055ab) data_form_pane_vc_t1_ParamLimits

0x55ab,	// (0x000055ab) data_form_pane_vc_t1

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

0x9e97,	// (0x00009e97) input_focus_pane_vc_g

0x347b,	// (0x0000347b) data_form_pane_vc_ParamLimits

0x347b,	// (0x0000347b) data_form_pane_vc

0x3487,	// (0x00003487) form_field_data_pane_vc_g1

0x55c6,	// (0x000055c6) form_field_data_pane_vc_t1_ParamLimits

0x55c6,	// (0x000055c6) form_field_data_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_vc

0x1118,	// (0x00001118) button_value_adjust_pane_cp3_vc

0x55dc,	// (0x000055dc) button_value_adjust_pane_cp5_vc

0x55e4,	// (0x000055e4) form_field_data_pane_vc_ParamLimits

0x55e4,	// (0x000055e4) form_field_data_pane_vc

0x1140,	// (0x00001140) form_field_data_pane_vc_cp2

0x55fb,	// (0x000055fb) form_field_data_wide_pane_vc_ParamLimits

0x55fb,	// (0x000055fb) form_field_data_wide_pane_vc

0x5611,	// (0x00005611) form_field_data_wide_pane_vc_cp2

0x5619,	// (0x00005619) form_field_popup_pane_vc_ParamLimits

0x5619,	// (0x00005619) form_field_popup_pane_vc

0x5630,	// (0x00005630) form_field_popup_wide_pane_vc_ParamLimits

0x5630,	// (0x00005630) form_field_popup_wide_pane_vc

0x5646,	// (0x00005646) form_field_slider_pane_vc_ParamLimits

0x5646,	// (0x00005646) form_field_slider_pane_vc

0x5659,	// (0x00005659) form_field_slider_wide_pane_vc_ParamLimits

0x5659,	// (0x00005659) form_field_slider_wide_pane_vc

0xc673,	// (0x0000c673) grid_touch_1_pane_ParamLimits

0xc673,	// (0x0000c673) grid_touch_1_pane

0xc687,	// (0x0000c687) grid_touch_2_pane_ParamLimits

0xc687,	// (0x0000c687) grid_touch_2_pane

0x572d,	// (0x0000572d) touch_pane_g1_ParamLimits

0x572d,	// (0x0000572d) touch_pane_g1

0x5690,	// (0x00005690) cell_app_pane_cp_wide_ParamLimits

0x5690,	// (0x00005690) cell_app_pane_cp_wide

0x56a0,	// (0x000056a0) grid_popup_fast_wide_pane_ParamLimits

0x56a0,	// (0x000056a0) grid_popup_fast_wide_pane

0x56b4,	// (0x000056b4) scroll_pane_cp19_ParamLimits

0x56b4,	// (0x000056b4) scroll_pane_cp19

0x024e,	// (0x0000024e) bg_popup_window_pane_cp20

0x56c8,	// (0x000056c8) listscroll_popup_fast_wide_pane

0x1502,	// (0x00001502) grid_indicator_nsta_pane

0x56d0,	// (0x000056d0) clock_nsta_pane_g1

0x56d9,	// (0x000056d9) clock_nsta_pane_t1

0xc6b1,	// (0x0000c6b1) cell_indicator_nsta_pane_ParamLimits

0xc6b1,	// (0x0000c6b1) cell_indicator_nsta_pane

0x572d,	// (0x0000572d) cell_indicator_nsta_pane_g1

0xc6ce,	// (0x0000c6ce) cell_indicator_nsta_pane_g2

0x0001,

0xe43c,	// (0x0000e43c) cell_indicator_nsta_pane_g

0x5750,	// (0x00005750) clock_nsta_pane_cp

0x5758,	// (0x00005758) indicator_nsta_pane_cp

0x5761,	// (0x00005761) nsta_clock_indic_pane_g1

0x05de,	// (0x000005de) grid_indicator_pane

0x1a41,	// (0x00001a41) scroll_pane_cp29

0x1ee4,	// (0x00001ee4) indicator_nsta_pane_cp2_ParamLimits

0x1ee4,	// (0x00001ee4) indicator_nsta_pane_cp2

0x0474,	// (0x00000474) main_apps_wheel_pane

0x364b,	// (0x0000364b) form_midp_field_text_pane_ParamLimits

0x3790,	// (0x00003790) scroll_bar_cp050_ParamLimits

0x57ca,	// (0x000057ca) cell_indicator_pane_ParamLimits

0x57ca,	// (0x000057ca) cell_indicator_pane

0x57e0,	// (0x000057e0) cell_indicator_pane_g1

0xc6e3,	// (0x0000c6e3) grid_wheel_folder_pane_ParamLimits

0xc6e3,	// (0x0000c6e3) grid_wheel_folder_pane

0xc6f1,	// (0x0000c6f1) list_wheel_apps_pane_ParamLimits

0xc6f1,	// (0x0000c6f1) list_wheel_apps_pane

0xc6fd,	// (0x0000c6fd) main_apps_wheel_pane_g1_ParamLimits

0xc6fd,	// (0x0000c6fd) main_apps_wheel_pane_g1

0xc709,	// (0x0000c709) main_apps_wheel_pane_g2_ParamLimits

0xc709,	// (0x0000c709) main_apps_wheel_pane_g2

0x0001,

0xe441,	// (0x0000e441) main_apps_wheel_pane_g_ParamLimits

0xe441,	// (0x0000e441) main_apps_wheel_pane_g

0xc715,	// (0x0000c715) main_apps_wheel_pane_t1_ParamLimits

0xc715,	// (0x0000c715) main_apps_wheel_pane_t1

0xc727,	// (0x0000c727) list_wheel_apps_pane_g1

0xc72f,	// (0x0000c72f) list_wheel_apps_pane_g2

0xc737,	// (0x0000c737) list_wheel_apps_pane_g3

0xc73f,	// (0x0000c73f) list_wheel_apps_pane_g4

0xc747,	// (0x0000c747) list_wheel_apps_pane_g5

0x0004,

0xe446,	// (0x0000e446) list_wheel_apps_pane_g

0x0474,	// (0x00000474) navi_icon_text_pane

0xbb7e,	// (0x0000bb7e) aid_fill_nsta

0x5891,	// (0x00005891) navi_icon_text_pane_g1

0x589d,	// (0x0000589d) navi_icon_text_pane_t1

0x2051,	// (0x00002051) list_set_graphic_pane_t1_ParamLimits

0x2051,	// (0x00002051) list_set_graphic_pane_t1

0x3e9e,	// (0x00003e9e) popup_midp_note_alarm_window_t6_ParamLimits

0x3e9e,	// (0x00003e9e) popup_midp_note_alarm_window_t6

0x3eb0,	// (0x00003eb0) popup_midp_note_alarm_window_t7_ParamLimits

0x3eb0,	// (0x00003eb0) popup_midp_note_alarm_window_t7

0x3ec2,	// (0x00003ec2) popup_midp_note_alarm_window_t8_ParamLimits

0x3ec2,	// (0x00003ec2) popup_midp_note_alarm_window_t8

0x3ed4,	// (0x00003ed4) popup_midp_note_alarm_window_t9_ParamLimits

0x3ed4,	// (0x00003ed4) popup_midp_note_alarm_window_t9

0x3ee6,	// (0x00003ee6) popup_midp_note_alarm_window_t10_ParamLimits

0x3ee6,	// (0x00003ee6) popup_midp_note_alarm_window_t10

0x3ef8,	// (0x00003ef8) popup_midp_note_alarm_window_t11_ParamLimits

0x3ef8,	// (0x00003ef8) popup_midp_note_alarm_window_t11

0x3f0a,	// (0x00003f0a) scroll_pane_cp17_ParamLimits

0x3f0a,	// (0x00003f0a) scroll_pane_cp17

0x3f9a,	// (0x00003f9a) volume_small_pane_cp_g1

0x58af,	// (0x000058af) volume_small_pane_cp_g2

0x58b8,	// (0x000058b8) volume_small_pane_cp_g3

0x58c1,	// (0x000058c1) volume_small_pane_cp_g4

0x3fc7,	// (0x00003fc7) volume_small_pane_cp_g5

0x58ca,	// (0x000058ca) volume_small_pane_cp_g6

0x58d3,	// (0x000058d3) volume_small_pane_cp_g7

0x58dc,	// (0x000058dc) volume_small_pane_cp_g8

0x58e5,	// (0x000058e5) volume_small_pane_cp_g9

0x58ee,	// (0x000058ee) volume_small_pane_cp_g10

0x23a5,	// (0x000023a5) midp_ticker_pane_g1_ParamLimits

0x23b1,	// (0x000023b1) midp_ticker_pane_g2_ParamLimits

0x9f5f,	// (0x00009f5f) midp_ticker_pane_g_ParamLimits

0x23bd,	// (0x000023bd) midp_ticker_pane_t1_ParamLimits

0xbb94,	// (0x0000bb94) aid_fill_nsta_2

0x377c,	// (0x0000377c) list_form2_midp_pane

0x4a51,	// (0x00004a51) midp_editing_number_pane_ParamLimits

0x4a5d,	// (0x00004a5d) midp_ticker_pane_ParamLimits

0x58f7,	// (0x000058f7) form2_midp_field_pane

0x591b,	// (0x0000591b) scroll_pane_cp51

0x593b,	// (0x0000593b) form2_midp_button_pane_ParamLimits

0x593b,	// (0x0000593b) form2_midp_button_pane

0x594d,	// (0x0000594d) form2_midp_content_pane_ParamLimits

0x594d,	// (0x0000594d) form2_midp_content_pane

0x5967,	// (0x00005967) form2_midp_field_choice_group_pane

0x596f,	// (0x0000596f) form2_midp_field_pane_g1

0x5977,	// (0x00005977) form2_midp_field_pane_g2

0x597f,	// (0x0000597f) form2_midp_field_pane_g3

0x5987,	// (0x00005987) form2_midp_field_pane_g4

0x0003,

0xa2d4,	// (0x0000a2d4) form2_midp_field_pane_g

0x598f,	// (0x0000598f) form2_midp_gauge_slider_pane

0x5997,	// (0x00005997) form2_midp_gauge_wait_pane

0x599f,	// (0x0000599f) form2_midp_image_pane_ParamLimits

0x599f,	// (0x0000599f) form2_midp_image_pane

0x59ba,	// (0x000059ba) form2_midp_label_pane_ParamLimits

0x59ba,	// (0x000059ba) form2_midp_label_pane

0xc77c,	// (0x0000c77c) form2_midp_label_pane_cp_ParamLimits

0xc77c,	// (0x0000c77c) form2_midp_label_pane_cp

0x59f2,	// (0x000059f2) form2_midp_string_pane_ParamLimits

0x59f2,	// (0x000059f2) form2_midp_string_pane

0xc79b,	// (0x0000c79b) form2_midp_text_pane_ParamLimits

0xc79b,	// (0x0000c79b) form2_midp_text_pane

0x5a1d,	// (0x00005a1d) form2_midp_time_pane

0x5a2d,	// (0x00005a2d) input_focus_pane_cp51_ParamLimits

0x5a2d,	// (0x00005a2d) input_focus_pane_cp51

0x5a45,	// (0x00005a45) form2_midp_label_pane_t1_ParamLimits

0x5a45,	// (0x00005a45) form2_midp_label_pane_t1

0x1356,	// (0x00001356) form2_mdip_text_pane_t1_ParamLimits

0x1356,	// (0x00001356) form2_mdip_text_pane_t1

0x5aa1,	// (0x00005aa1) form2_midp_time_pane_t1

0x5abc,	// (0x00005abc) form2_midp_gauge_slider_pane_t1

0xc7b4,	// (0x0000c7b4) form2_midp_gauge_slider_pane_t2

0xc7c6,	// (0x0000c7c6) form2_midp_gauge_slider_pane_t3

0x0002,

0xe456,	// (0x0000e456) form2_midp_gauge_slider_pane_t

0x5af2,	// (0x00005af2) form2_midp_slider_pane

0x5afe,	// (0x00005afe) form2_midp_gauge_wait_pane_t1

0x5b0c,	// (0x00005b0c) form2_midp_wait_pane_ParamLimits

0x5b0c,	// (0x00005b0c) form2_midp_wait_pane

0xbfc6,	// (0x0000bfc6) list_single_2graphic_pane_cp4_ParamLimits

0xbfc6,	// (0x0000bfc6) list_single_2graphic_pane_cp4

0xc7d8,	// (0x0000c7d8) list_single_midp_graphic_pane_cp_ParamLimits

0xc7d8,	// (0x0000c7d8) list_single_midp_graphic_pane_cp

0x024e,	// (0x0000024e) list_highlight_pane_cp20

0x5b37,	// (0x00005b37) list_single_2graphic_pane_g1_cp4

0x4ba5,	// (0x00004ba5) list_single_2graphic_pane_g2_cp4

0x5b3f,	// (0x00005b3f) list_single_2graphic_pane_t1_cp4

0x0474,	// (0x00000474) list_highlight_pane_cp21

0x5b4e,	// (0x00005b4e) list_single_midp_graphic_pane_g4_cp

0x5b5d,	// (0x00005b5d) list_single_midp_graphic_pane_t1_cp

0xc7f6,	// (0x0000c7f6) form2_mdip_string_pane_t1_ParamLimits

0xc7f6,	// (0x0000c7f6) form2_mdip_string_pane_t1

0x024e,	// (0x0000024e) bg_wml_button_pane_cp2

0x002a,	// (0x0000002a) form2_midp_image_pane_g1

0x0efd,	// (0x00000efd) list_double_large_graphic_pane_g5_ParamLimits

0x0efd,	// (0x00000efd) list_double_large_graphic_pane_g5

0xb3b7,	// (0x0000b3b7) midp_form_pane_ParamLimits

0x0474,	// (0x00000474) main_apps_wheel_pane_ParamLimits

0xb920,	// (0x0000b920) popup_preview_window_ParamLimits

0xb920,	// (0x0000b920) popup_preview_window

0x2c9e,	// (0x00002c9e) popup_touch_info_window_ParamLimits

0x2c9e,	// (0x00002c9e) popup_touch_info_window

0x2cbc,	// (0x00002cbc) popup_touch_menu_window_ParamLimits

0x2cbc,	// (0x00002cbc) popup_touch_menu_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp6

0x5bea,	// (0x00005bea) list_touch_menu_pane

0x5bf2,	// (0x00005bf2) list_single_touch_menu_pane_ParamLimits

0x5bf2,	// (0x00005bf2) list_single_touch_menu_pane

0x5c09,	// (0x00005c09) list_single_touch_menu_pane_t1

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7_ParamLimits

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7

0x5c17,	// (0x00005c17) heading_sub_pane

0x5c1f,	// (0x00005c1f) list_touch_info_pane_ParamLimits

0x5c1f,	// (0x00005c1f) list_touch_info_pane

0x5c2e,	// (0x00005c2e) list_single_touch_info_pane_ParamLimits

0x5c2e,	// (0x00005c2e) list_single_touch_info_pane

0x5c3f,	// (0x00005c3f) list_single_touch_info_pane_t1

0x5c4d,	// (0x00005c4d) list_single_touch_info_pane_t2

0x0001,

0xa2eb,	// (0x0000a2eb) list_single_touch_info_pane_t

0x22d6,	// (0x000022d6) bg_popup_heading_pane_cp

0x5c5b,	// (0x00005c5b) heading_sub_pane_t1

0x3395,	// (0x00003395) bg_popup_preview_window_pane_cp_ParamLimits

0x3395,	// (0x00003395) bg_popup_preview_window_pane_cp

0x5c17,	// (0x00005c17) heading_preview_pane

0x5c1f,	// (0x00005c1f) list_preview_pane_ParamLimits

0x5c1f,	// (0x00005c1f) list_preview_pane

0x5c69,	// (0x00005c69) popup_preview_window_g1

0x5c2e,	// (0x00005c2e) list_single_preview_pane_ParamLimits

0x5c2e,	// (0x00005c2e) list_single_preview_pane

0x5c71,	// (0x00005c71) list_single_preview_pane_g1

0x5c79,	// (0x00005c79) list_single_preview_pane_t1

0x5c3f,	// (0x00005c3f) list_single_preview_pane_t2

0x0001,

0xa2f0,	// (0x0000a2f0) list_single_preview_pane_t

0x5c87,	// (0x00005c87) bg_popup_heading_pane_cp2_ParamLimits

0x5c87,	// (0x00005c87) bg_popup_heading_pane_cp2

0x5c9d,	// (0x00005c9d) heading_preview_pane_g1

0x5ca5,	// (0x00005ca5) heading_preview_pane_t1_ParamLimits

0x5ca5,	// (0x00005ca5) heading_preview_pane_t1

0x0601,	// (0x00000601) soft_indicator_pane_t1_ParamLimits

0x0c3e,	// (0x00000c3e) scroll_pane_ParamLimits

0x193d,	// (0x0000193d) scroll_sc2_left_pane

0x1946,	// (0x00001946) scroll_sc2_right_pane

0x1965,	// (0x00001965) scroll_bg_pane_g1_ParamLimits

0x197a,	// (0x0000197a) scroll_bg_pane_g2_ParamLimits

0x1992,	// (0x00001992) scroll_bg_pane_g3_ParamLimits

0x9eee,	// (0x00009eee) scroll_bg_pane_g_ParamLimits

0x1965,	// (0x00001965) scroll_handle_pane_g1_ParamLimits

0x19b4,	// (0x000019b4) scroll_handle_pane_g2_ParamLimits

0x1992,	// (0x00001992) scroll_handle_pane_g3_ParamLimits

0x9ef5,	// (0x00009ef5) scroll_handle_pane_g_ParamLimits

0x286b,	// (0x0000286b) popup_choice_list_window_ParamLimits

0x286b,	// (0x0000286b) popup_choice_list_window

0x313a,	// (0x0000313a) choice_list_pane

0x31d7,	// (0x000031d7) cell_toolbar_pane_t1

0x31ff,	// (0x000031ff) toolbar_button_pane_ParamLimits

0x44e9,	// (0x000044e9) ai_gene_pane_1_t2_ParamLimits

0x44e9,	// (0x000044e9) ai_gene_pane_1_t2

0x0001,

0xa106,	// (0x0000a106) ai_gene_pane_1_t_ParamLimits

0xa106,	// (0x0000a106) ai_gene_pane_1_t

0x5cc2,	// (0x00005cc2) scroll_sc2_left_pane_g1

0x5cc2,	// (0x00005cc2) scroll_sc2_right_pane_g1

0x283d,	// (0x0000283d) bg_popup_sub_pane_cp10

0x5ccc,	// (0x00005ccc) list_choice_list_pane

0x5ce3,	// (0x00005ce3) list_single_choice_list_pane_ParamLimits

0x5ce3,	// (0x00005ce3) list_single_choice_list_pane

0x5cf7,	// (0x00005cf7) list_single_choice_list_pane_g1

0x14d3,	// (0x000014d3) list_single_choice_list_pane_t1_ParamLimits

0x14d3,	// (0x000014d3) list_single_choice_list_pane_t1

0x5cff,	// (0x00005cff) choice_list_pane_g1

0x5d07,	// (0x00005d07) choice_list_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp11

0x16e7,	// (0x000016e7) title_pane_stacon_g2_ParamLimits

0x16e7,	// (0x000016e7) title_pane_stacon_g2

0x0002,

0x9ed4,	// (0x00009ed4) title_pane_stacon_g_ParamLimits

0x9ed4,	// (0x00009ed4) title_pane_stacon_g

0x22d6,	// (0x000022d6) cursor_press_pane

0xb687,	// (0x0000b687) popup_fep_hwr_window_ParamLimits

0xb687,	// (0x0000b687) popup_fep_hwr_window

0x2963,	// (0x00002963) popup_fep_vkb_window_ParamLimits

0x2963,	// (0x00002963) popup_fep_vkb_window

0x5d15,	// (0x00005d15) cursor_press_pane_g1

0x0002,

0xe46a,	// (0x0000e46a) fep_vkb_side_pane_g_ParamLimits

0x5d52,	// (0x00005d52) fep_hwr_candidate_pane_ParamLimits

0x5d52,	// (0x00005d52) fep_hwr_candidate_pane

0x5d7a,	// (0x00005d7a) fep_hwr_side_pane_ParamLimits

0x5d7a,	// (0x00005d7a) fep_hwr_side_pane

0x5d9a,	// (0x00005d9a) fep_hwr_top_pane_ParamLimits

0x5d9a,	// (0x00005d9a) fep_hwr_top_pane

0x5db2,	// (0x00005db2) fep_hwr_write_pane_ParamLimits

0x5db2,	// (0x00005db2) fep_hwr_write_pane

0xe46a,	// (0x0000e46a) fep_vkb_side_pane_g

0x5dec,	// (0x00005dec) fep_hwr_top_pane_g1

0x5dfe,	// (0x00005dfe) fep_hwr_top_pane_g2

0x5e10,	// (0x00005e10) fep_hwr_top_pane_g3

0x0002,

0xa2f5,	// (0x0000a2f5) fep_hwr_top_pane_g

0x5e25,	// (0x00005e25) fep_hwr_top_text_pane

0x1b09,	// (0x00001b09) fep_hwr_top_text_pane_g1

0x5efd,	// (0x00005efd) fep_hwr_top_text_pane_t1

0x5f45,	// (0x00005f45) fep_hwr_candidate_pane_g1

0x617b,	// (0x0000617b) fep_vkb_keypad_pane_g3_ParamLimits

0x617b,	// (0x0000617b) fep_vkb_keypad_pane_g3

0x619d,	// (0x0000619d) fep_vkb_keypad_pane_g4_ParamLimits

0x619d,	// (0x0000619d) fep_vkb_keypad_pane_g4

0x620c,	// (0x0000620c) fep_vkb_bottom_pane_g2_ParamLimits

0x620c,	// (0x0000620c) fep_vkb_bottom_pane_g2

0x0001,

0xa320,	// (0x0000a320) fep_vkb_bottom_pane_g_ParamLimits

0xa320,	// (0x0000a320) fep_vkb_bottom_pane_g

0x5cc2,	// (0x00005cc2) cell_vkb_side_pane_g2

0x0001,

0xa32a,	// (0x0000a32a) cell_vkb_side_pane_g

0x6297,	// (0x00006297) cell_vkb_side_pane_t1

0x62a5,	// (0x000062a5) cell_vkb_side_pane_t1_copy1

0x5cc2,	// (0x00005cc2) bg_fep_vkb_candidate_pane_g2

0x63c9,	// (0x000063c9) cell_vkb_candidate_pane_ParamLimits

0x5f79,	// (0x00005f79) aid_size_cell_vkb_ParamLimits

0x5f79,	// (0x00005f79) aid_size_cell_vkb

0x63c9,	// (0x000063c9) cell_vkb_candidate_pane

0x63fb,	// (0x000063fb) bg_popup_fep_shadow_pane_g1

0x5fef,	// (0x00005fef) fep_vkb_bottom_pane_ParamLimits

0x5fef,	// (0x00005fef) fep_vkb_bottom_pane

0x602c,	// (0x0000602c) fep_vkb_candidate_pane_ParamLimits

0x602c,	// (0x0000602c) fep_vkb_candidate_pane

0x6048,	// (0x00006048) fep_vkb_keypad_pane_ParamLimits

0x6048,	// (0x00006048) fep_vkb_keypad_pane

0x607c,	// (0x0000607c) fep_vkb_side_pane_ParamLimits

0x607c,	// (0x0000607c) fep_vkb_side_pane

0x60a8,	// (0x000060a8) fep_vkb_top_pane_ParamLimits

0x60a8,	// (0x000060a8) fep_vkb_top_pane

0x60d4,	// (0x000060d4) fep_vkb_top_pane_g1_ParamLimits

0x60d4,	// (0x000060d4) fep_vkb_top_pane_g1

0x60e3,	// (0x000060e3) fep_vkb_top_pane_g2_ParamLimits

0x60e3,	// (0x000060e3) fep_vkb_top_pane_g2

0x60f2,	// (0x000060f2) fep_vkb_top_pane_g3_ParamLimits

0x60f2,	// (0x000060f2) fep_vkb_top_pane_g3

0x0003,

0xa310,	// (0x0000a310) fep_vkb_top_pane_g_ParamLimits

0xa310,	// (0x0000a310) fep_vkb_top_pane_g

0x6110,	// (0x00006110) fep_vkb_top_text_pane_ParamLimits

0x6110,	// (0x00006110) fep_vkb_top_text_pane

0xc8bd,	// (0x0000c8bd) fep_vkb_side_pane_g1_ParamLimits

0xc8bd,	// (0x0000c8bd) fep_vkb_side_pane_g1

0x616a,	// (0x0000616a) grid_vkb_side_pane_ParamLimits

0x616a,	// (0x0000616a) grid_vkb_side_pane

0x6403,	// (0x00006403) bg_popup_fep_shadow_pane_g2

0x640c,	// (0x0000640c) bg_popup_fep_shadow_pane_g3

0x6414,	// (0x00006414) bg_popup_fep_shadow_pane_g4

0x641d,	// (0x0000641d) bg_popup_fep_shadow_pane_g5

0x6425,	// (0x00006425) bg_popup_fep_shadow_pane_g6

0x642d,	// (0x0000642d) bg_popup_fep_shadow_pane_g7

0x132e,	// (0x0000132e) bg_popup_fep_shadow_pane_g8

0x61bb,	// (0x000061bb) grid_vkb_keypad_number_pane_ParamLimits

0x61bb,	// (0x000061bb) grid_vkb_keypad_number_pane

0x61cb,	// (0x000061cb) grid_vkb_keypad_pane_ParamLimits

0x61cb,	// (0x000061cb) grid_vkb_keypad_pane

0x61f1,	// (0x000061f1) fep_vkb_bottom_pane_g1_ParamLimits

0x61f1,	// (0x000061f1) fep_vkb_bottom_pane_g1

0x621a,	// (0x0000621a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x621a,	// (0x0000621a) grid_vkb_keypad_bottom_left_pane

0x622f,	// (0x0000622f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x622f,	// (0x0000622f) grid_vkb_keypad_bottom_right_pane

0x6244,	// (0x00006244) fep_vkb_top_text_pane_g1

0xc904,	// (0x0000c904) fep_vkb_top_text_pane_t1

0xc916,	// (0x0000c916) cell_vkb_side_pane_ParamLimits

0xc916,	// (0x0000c916) cell_vkb_side_pane

0x5cc2,	// (0x00005cc2) cell_vkb_side_pane_g1

0x62b3,	// (0x000062b3) cell_vkb_keypad_pane_ParamLimits

0x62b3,	// (0x000062b3) cell_vkb_keypad_pane

0x6320,	// (0x00006320) cell_vkb_keypad_pane_g1

0x0008,

0xa33d,	// (0x0000a33d) bg_popup_fep_shadow_pane_g

0x5cc2,	// (0x00005cc2) cell_hwr_side_pane_g1

0x5cc2,	// (0x00005cc2) cell_hwr_side_pane_g2

0x632a,	// (0x0000632a) cell_vkb_keypad_pane_t1

0xc92c,	// (0x0000c92c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc92c,	// (0x0000c92c) cell_vkb_keypad_bottom_left_pane

0xc941,	// (0x0000c941) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc941,	// (0x0000c941) cell_vkb_keypad_bottom_right_pane

0x5cc2,	// (0x00005cc2) cell_vkb_keypad_bottom_left_pane_g1

0x5cc2,	// (0x00005cc2) cell_vkb_keypad_bottom_right_pane_g1

0x638e,	// (0x0000638e) cell_vkb_keypad_number_pane_ParamLimits

0x638e,	// (0x0000638e) cell_vkb_keypad_number_pane

0x63ad,	// (0x000063ad) cell_vkb_keypad_number_pane_g1

0x63b7,	// (0x000063b7) cell_vkb_keypad_number_pane_g2

0x63c0,	// (0x000063c0) cell_vkb_keypad_number_pane_g3

0x0002,

0xa32f,	// (0x0000a32f) cell_vkb_keypad_number_pane_g

0x632a,	// (0x0000632a) cell_vkb_keypad_number_pane_t1

0x63e2,	// (0x000063e2) fep_vkb_candidate_pane_g1

0x0001,

0xa32a,	// (0x0000a32a) cell_hwr_side_pane_g

0x643d,	// (0x0000643d) cell_hwr_side_pane_t1

0x644b,	// (0x0000644b) cell_hwr_side_pane_t1_copy1

0x6102,	// (0x00006102) cell_hwr_candidate_pane_g1

0x649b,	// (0x0000649b) cell_hwr_candidate_pane_t1

0x5cc2,	// (0x00005cc2) cell_vkb_candidate_pane_g2

0x64ee,	// (0x000064ee) cell_vkb_candidate_pane_t1

0x5d1d,	// (0x00005d1d) bg_popup_fep_shadow_pane_ParamLimits

0x5d1d,	// (0x00005d1d) bg_popup_fep_shadow_pane

0x5dcc,	// (0x00005dcc) bg_fep_hwr_top_pane_g4

0x5e3a,	// (0x00005e3a) bg_hwr_side_pane_g1_ParamLimits

0x5e3a,	// (0x00005e3a) bg_hwr_side_pane_g1

0xc878,	// (0x0000c878) cell_hwr_side_pane_ParamLimits

0xc878,	// (0x0000c878) cell_hwr_side_pane

0x5ea8,	// (0x00005ea8) fep_hwr_write_pane_g1_ParamLimits

0x5ea8,	// (0x00005ea8) fep_hwr_write_pane_g1

0x5eb5,	// (0x00005eb5) fep_hwr_write_pane_g2_ParamLimits

0x5eb5,	// (0x00005eb5) fep_hwr_write_pane_g2

0x5ec2,	// (0x00005ec2) fep_hwr_write_pane_g3_ParamLimits

0x5ec2,	// (0x00005ec2) fep_hwr_write_pane_g3

0xc898,	// (0x0000c898) fep_hwr_write_pane_g4_ParamLimits

0xc898,	// (0x0000c898) fep_hwr_write_pane_g4

0x0005,

0xe45d,	// (0x0000e45d) fep_hwr_write_pane_g_ParamLimits

0xe45d,	// (0x0000e45d) fep_hwr_write_pane_g

0x5dcc,	// (0x00005dcc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5dcc,	// (0x00005dcc) bg_fep_hwr_candidate_pane_g2

0x5f0b,	// (0x00005f0b) cell_hwr_candidate_pane_ParamLimits

0x5f0b,	// (0x00005f0b) cell_hwr_candidate_pane

0x5f45,	// (0x00005f45) fep_hwr_candidate_pane_g1_ParamLimits

0x5fa7,	// (0x00005fa7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5fa7,	// (0x00005fa7) bg_popup_fep_shadow_pane_cp2

0x6102,	// (0x00006102) fep_vkb_top_pane_g4_ParamLimits

0x6102,	// (0x00006102) fep_vkb_top_pane_g4

0x6148,	// (0x00006148) fep_vkb_side_pane_g2_ParamLimits

0x6148,	// (0x00006148) fep_vkb_side_pane_g2

0xaee5,	// (0x0000aee5) list_setting_pane_t4_ParamLimits

0xaee5,	// (0x0000aee5) list_setting_pane_t4

0xaf67,	// (0x0000af67) list_setting_number_pane_t5_ParamLimits

0xaf67,	// (0x0000af67) list_setting_number_pane_t5

0xb26d,	// (0x0000b26d) list_double_heading_pane_cp2_ParamLimits

0xb26d,	// (0x0000b26d) list_double_heading_pane_cp2

0x214b,	// (0x0000214b) list_double_heading_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_double_heading_pane_g1_cp2

0x64fc,	// (0x000064fc) list_double_heading_pane_g2_cp2_ParamLimits

0x64fc,	// (0x000064fc) list_double_heading_pane_g2_cp2

0x6510,	// (0x00006510) list_double_heading_pane_t1_cp2_ParamLimits

0x6510,	// (0x00006510) list_double_heading_pane_t1_cp2

0x6526,	// (0x00006526) list_double_heading_pane_t2_cp2_ParamLimits

0x6526,	// (0x00006526) list_double_heading_pane_t2_cp2

0x000a,	// (0x0000000a) aid_value_unit2

0x02b4,	// (0x000002b4) popup_preview_fixed_window

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02

0x6538,	// (0x00006538) list_preview_fixed_pane

0x657e,	// (0x0000657e) list_empty_pane_fp_ParamLimits

0x657e,	// (0x0000657e) list_empty_pane_fp

0x657e,	// (0x0000657e) list_single_cale_day_pane_fp_ParamLimits

0x657e,	// (0x0000657e) list_single_cale_day_pane_fp

0x657e,	// (0x0000657e) list_single_graphic_heading_pane_fp_ParamLimits

0x657e,	// (0x0000657e) list_single_graphic_heading_pane_fp

0x657e,	// (0x0000657e) list_single_graphic_pane_fp_ParamLimits

0x657e,	// (0x0000657e) list_single_graphic_pane_fp

0x657e,	// (0x0000657e) list_single_heading_pane_fp_ParamLimits

0x657e,	// (0x0000657e) list_single_heading_pane_fp

0x657e,	// (0x0000657e) list_single_pane_fp_ParamLimits

0x657e,	// (0x0000657e) list_single_pane_fp

0x6592,	// (0x00006592) list_single_pane_fp_g1_ParamLimits

0x6592,	// (0x00006592) list_single_pane_fp_g1

0x0e80,	// (0x00000e80) list_single_pane_fp_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_pane_fp_g2

0x659e,	// (0x0000659e) list_single_pane_fp_g3_ParamLimits

0x659e,	// (0x0000659e) list_single_pane_fp_g3

0x65b2,	// (0x000065b2) list_single_pane_fp_g4_ParamLimits

0x65b2,	// (0x000065b2) list_single_pane_fp_g4

0x0003,

0xa35e,	// (0x0000a35e) list_single_pane_fp_g_ParamLimits

0xa35e,	// (0x0000a35e) list_single_pane_fp_g

0x65be,	// (0x000065be) list_single_pane_fp_t1_ParamLimits

0x65be,	// (0x000065be) list_single_pane_fp_t1

0x65d5,	// (0x000065d5) list_single_graphic_pane_fp_g1_ParamLimits

0x65d5,	// (0x000065d5) list_single_graphic_pane_fp_g1

0x6592,	// (0x00006592) list_single_graphic_pane_fp_g2_ParamLimits

0x6592,	// (0x00006592) list_single_graphic_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_pane_fp_g3

0x659e,	// (0x0000659e) list_single_graphic_pane_fp_g4_ParamLimits

0x659e,	// (0x0000659e) list_single_graphic_pane_fp_g4

0x65b2,	// (0x000065b2) list_single_graphic_pane_fp_g5_ParamLimits

0x65b2,	// (0x000065b2) list_single_graphic_pane_fp_g5

0x0004,

0xa367,	// (0x0000a367) list_single_graphic_pane_fp_g_ParamLimits

0xa367,	// (0x0000a367) list_single_graphic_pane_fp_g

0x65e1,	// (0x000065e1) list_single_graphic_pane_fp_t1_ParamLimits

0x65e1,	// (0x000065e1) list_single_graphic_pane_fp_t1

0x65d5,	// (0x000065d5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x65d5,	// (0x000065d5) list_single_graphic_heading_pane_fp_g1

0x6592,	// (0x00006592) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6592,	// (0x00006592) list_single_graphic_heading_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_fp_g3

0x659e,	// (0x0000659e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x659e,	// (0x0000659e) list_single_graphic_heading_pane_fp_g4

0x65b2,	// (0x000065b2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x65b2,	// (0x000065b2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xa367,	// (0x0000a367) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa367,	// (0x0000a367) list_single_graphic_heading_pane_fp_g

0x65f7,	// (0x000065f7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x65f7,	// (0x000065f7) list_single_graphic_heading_pane_fp_t1

0x660d,	// (0x0000660d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x660d,	// (0x0000660d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa372,	// (0x0000a372) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa372,	// (0x0000a372) list_single_graphic_heading_pane_fp_t

0x661f,	// (0x0000661f) list_single_cale_day_pane_fp_g1_ParamLimits

0x661f,	// (0x0000661f) list_single_cale_day_pane_fp_g1

0x6657,	// (0x00006657) list_single_cale_day_pane_fp_g2_ParamLimits

0x6657,	// (0x00006657) list_single_cale_day_pane_fp_g2

0x6663,	// (0x00006663) list_single_cale_day_pane_fp_g3_ParamLimits

0x6663,	// (0x00006663) list_single_cale_day_pane_fp_g3

0x668b,	// (0x0000668b) list_single_cale_day_pane_fp_g4_ParamLimits

0x668b,	// (0x0000668b) list_single_cale_day_pane_fp_g4

0x66af,	// (0x000066af) list_single_cale_day_pane_fp_g5_ParamLimits

0x66af,	// (0x000066af) list_single_cale_day_pane_fp_g5

0x0004,

0xa377,	// (0x0000a377) list_single_cale_day_pane_fp_g_ParamLimits

0xa377,	// (0x0000a377) list_single_cale_day_pane_fp_g

0x66d3,	// (0x000066d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x66d3,	// (0x000066d3) list_single_cale_day_pane_fp_t1

0x66f9,	// (0x000066f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x66f9,	// (0x000066f9) list_single_cale_day_pane_fp_t2

0x6712,	// (0x00006712) list_single_cale_day_pane_fp_t3_ParamLimits

0x6712,	// (0x00006712) list_single_cale_day_pane_fp_t3

0x0002,

0xa382,	// (0x0000a382) list_single_cale_day_pane_fp_t_ParamLimits

0xa382,	// (0x0000a382) list_single_cale_day_pane_fp_t

0x6592,	// (0x00006592) list_empty_pane_fp_g1_ParamLimits

0x6592,	// (0x00006592) list_empty_pane_fp_g1

0x672b,	// (0x0000672b) list_empty_pane_fp_t1

0x6739,	// (0x00006739) list_empty_pane_fp_t2

0x0001,

0xa389,	// (0x0000a389) list_empty_pane_fp_t

0x6592,	// (0x00006592) list_single_heading_pane_fp_g1_ParamLimits

0x6592,	// (0x00006592) list_single_heading_pane_fp_g1

0x0e80,	// (0x00000e80) list_single_heading_pane_fp_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_fp_g2

0x659e,	// (0x0000659e) list_single_heading_pane_fp_g3_ParamLimits

0x659e,	// (0x0000659e) list_single_heading_pane_fp_g3

0x0002,

0xa38e,	// (0x0000a38e) list_single_heading_pane_fp_g_ParamLimits

0xa38e,	// (0x0000a38e) list_single_heading_pane_fp_g

0x6747,	// (0x00006747) list_single_heading_pane_fp_t1_ParamLimits

0x6747,	// (0x00006747) list_single_heading_pane_fp_t1

0x6759,	// (0x00006759) list_single_heading_pane_fp_t2_ParamLimits

0x6759,	// (0x00006759) list_single_heading_pane_fp_t2

0x0001,

0xa395,	// (0x0000a395) list_single_heading_pane_fp_t_ParamLimits

0xa395,	// (0x0000a395) list_single_heading_pane_fp_t

0x1541,	// (0x00001541) aid_size_cell_fast

0x070c,	// (0x0000070c) soft_indicator_pane_cp1_t1

0x157e,	// (0x0000157e) cell_app_pane_cp2_ParamLimits

0x157e,	// (0x0000157e) cell_app_pane_cp2

0x5d3f,	// (0x00005d3f) fep_hwr_candidate_drop_down_list_pane

0x5f5f,	// (0x00005f5f) fep_hwr_candidate_pane_g3_ParamLimits

0x5f5f,	// (0x00005f5f) fep_hwr_candidate_pane_g3

0x5f6c,	// (0x00005f6c) fep_hwr_candidate_pane_g4_ParamLimits

0x5f6c,	// (0x00005f6c) fep_hwr_candidate_pane_g4

0x0002,

0xa309,	// (0x0000a309) fep_hwr_candidate_pane_g_ParamLimits

0xa309,	// (0x0000a309) fep_hwr_candidate_pane_g

0x601b,	// (0x0000601b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x601b,	// (0x0000601b) fep_vkb_candidate_drop_down_list_pane

0x63ea,	// (0x000063ea) fep_vkb_candidate_pane_g3

0x63f2,	// (0x000063f2) fep_vkb_candidate_pane_g4

0x0002,

0xa336,	// (0x0000a336) fep_vkb_candidate_pane_g

0x6102,	// (0x00006102) cell_hwr_candidate_pane_g1_ParamLimits

0x6459,	// (0x00006459) cell_hwr_candidate_pane_g3_ParamLimits

0x6459,	// (0x00006459) cell_hwr_candidate_pane_g3

0x647a,	// (0x0000647a) cell_hwr_candidate_pane_g4_ParamLimits

0x647a,	// (0x0000647a) cell_hwr_candidate_pane_g4

0x0002,

0xa350,	// (0x0000a350) cell_hwr_candidate_pane_g_ParamLimits

0xa350,	// (0x0000a350) cell_hwr_candidate_pane_g

0x64b8,	// (0x000064b8) cell_vkb_candidate_pane_g3_ParamLimits

0x64b8,	// (0x000064b8) cell_vkb_candidate_pane_g3

0x64d3,	// (0x000064d3) cell_vkb_candidate_pane_g4_ParamLimits

0x64d3,	// (0x000064d3) cell_vkb_candidate_pane_g4

0x676f,	// (0x0000676f) cell_app_pane_cp2_g1_ParamLimits

0x676f,	// (0x0000676f) cell_app_pane_cp2_g1

0x678d,	// (0x0000678d) cell_app_pane_cp2_g2_ParamLimits

0x678d,	// (0x0000678d) cell_app_pane_cp2_g2

0x0001,

0xa39a,	// (0x0000a39a) cell_app_pane_cp2_g_ParamLimits

0xa39a,	// (0x0000a39a) cell_app_pane_cp2_g

0x6799,	// (0x00006799) cell_app_pane_cp2_t1_ParamLimits

0x6799,	// (0x00006799) cell_app_pane_cp2_t1

0x11e8,	// (0x000011e8) grid_highlight_pane_cp1_ParamLimits

0x11e8,	// (0x000011e8) grid_highlight_pane_cp1

0x67ab,	// (0x000067ab) cell_hwr_candidate_pane_cp1_ParamLimits

0x67ab,	// (0x000067ab) cell_hwr_candidate_pane_cp1

0x6102,	// (0x00006102) fep_hwr_candidate_drop_down_list_pane_g1

0x67c9,	// (0x000067c9) fep_hwr_candidate_drop_down_list_pane_g2

0x67d6,	// (0x000067d6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xa39f,	// (0x0000a39f) fep_hwr_candidate_drop_down_list_pane_g

0x67e3,	// (0x000067e3) fep_hwr_candidate_drop_down_list_scroll_pane

0x67ec,	// (0x000067ec) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67ec,	// (0x000067ec) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67f9,	// (0x000067f9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67f9,	// (0x000067f9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6806,	// (0x00006806) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6806,	// (0x00006806) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x64b8,	// (0x000064b8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x64b8,	// (0x000064b8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x64d3,	// (0x000064d3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x64d3,	// (0x000064d3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6813,	// (0x00006813) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6813,	// (0x00006813) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x682e,	// (0x0000682e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x682e,	// (0x0000682e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6849,	// (0x00006849) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6849,	// (0x00006849) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa3a6,	// (0x0000a3a6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa3a6,	// (0x0000a3a6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc95c,	// (0x0000c95c) cell_vkb_candidate_pane_cp1_ParamLimits

0xc95c,	// (0x0000c95c) cell_vkb_candidate_pane_cp1

0x6102,	// (0x00006102) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6102,	// (0x00006102) fep_vkb_candidate_drop_down_list_pane_g1

0x67c9,	// (0x000067c9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x67c9,	// (0x000067c9) fep_vkb_candidate_drop_down_list_pane_g2

0x67d6,	// (0x000067d6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x67d6,	// (0x000067d6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa39f,	// (0x0000a39f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa39f,	// (0x0000a39f) fep_vkb_candidate_drop_down_list_pane_g

0x6887,	// (0x00006887) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6887,	// (0x00006887) fep_vkb_candidate_drop_down_list_scroll_pane

0x6894,	// (0x00006894) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6894,	// (0x00006894) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x68a1,	// (0x000068a1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x68a1,	// (0x000068a1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x68ad,	// (0x000068ad) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x68ad,	// (0x000068ad) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6459,	// (0x00006459) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6459,	// (0x00006459) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x647a,	// (0x0000647a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x647a,	// (0x0000647a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x68b9,	// (0x000068b9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x68b9,	// (0x000068b9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x68da,	// (0x000068da) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x68da,	// (0x000068da) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x68fb,	// (0x000068fb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x68fb,	// (0x000068fb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa3b7,	// (0x0000a3b7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa3b7,	// (0x0000a3b7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa86a,	// (0x0000a86a) title_pane_g1_ParamLimits

0xa881,	// (0x0000a881) title_pane_g2_ParamLimits

0xe274,	// (0x0000e274) title_pane_g_ParamLimits

0x1af9,	// (0x00001af9) aid_call2_pane

0x1b01,	// (0x00001b01) aid_call_pane

0x1b09,	// (0x00001b09) popup_clock_analogue_window_g1

0x1b09,	// (0x00001b09) popup_clock_analogue_window_g2

0x1b11,	// (0x00001b11) popup_clock_analogue_window_g3

0x1b1a,	// (0x00001b1a) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0x9f03,	// (0x00009f03) popup_clock_analogue_window_g

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

0x9f0e,	// (0x00009f0e) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0x9f0e,	// (0x00009f0e) clock_digital_separator_pane_g

0xbb7e,	// (0x0000bb7e) aid_fill_nsta_ParamLimits

0xbc95,	// (0x0000bc95) indicator_nsta_pane_ParamLimits

0x2f88,	// (0x00002f88) popup_clock_analogue_window

0x2f88,	// (0x00002f88) popup_clock_digital_window

0x1502,	// (0x00001502) grid_indicator_nsta_pane_ParamLimits

0x56e7,	// (0x000056e7) clock_nsta_pane_t2

0x0001,

0xa289,	// (0x0000a289) clock_nsta_pane_t

0x18e2,	// (0x000018e2) aid_size_max_handle

0xb1d1,	// (0x0000b1d1) aid_size_min_handle

0x22d6,	// (0x000022d6) editor_scroll_pane

0x6916,	// (0x00006916) ex_editor_pane

0x14af,	// (0x000014af) scroll_pane_cp13

0x0c6b,	// (0x00000c6b) scroll_pane_cp14

0x1b52,	// (0x00001b52) scroll_pane_cp36

0xb279,	// (0x0000b279) list_single_graphic_hl_pane_cp2_ParamLimits

0xb279,	// (0x0000b279) list_single_graphic_hl_pane_cp2

0xc500,	// (0x0000c500) list_single_graphic_hl_pane_ParamLimits

0xc500,	// (0x0000c500) list_single_graphic_hl_pane

0x691e,	// (0x0000691e) aid_size_min_hl_cp1

0x6927,	// (0x00006927) list_highlight_pane_cp34_ParamLimits

0x6927,	// (0x00006927) list_highlight_pane_cp34

0x6938,	// (0x00006938) list_single_graphic_hl_pane_g1_ParamLimits

0x6938,	// (0x00006938) list_single_graphic_hl_pane_g1

0xc97c,	// (0x0000c97c) list_single_graphic_hl_pane_g2_ParamLimits

0xc97c,	// (0x0000c97c) list_single_graphic_hl_pane_g2

0xc97c,	// (0x0000c97c) list_single_graphic_hl_pane_g3_ParamLimits

0xc97c,	// (0x0000c97c) list_single_graphic_hl_pane_g3

0x0c7f,	// (0x00000c7f) list_single_graphic_hl_pane_g4_ParamLimits

0x0c7f,	// (0x00000c7f) list_single_graphic_hl_pane_g4

0x120e,	// (0x0000120e) list_single_graphic_hl_pane_g5_ParamLimits

0x120e,	// (0x0000120e) list_single_graphic_hl_pane_g5

0x0004,

0xe476,	// (0x0000e476) list_single_graphic_hl_pane_g_ParamLimits

0xe476,	// (0x0000e476) list_single_graphic_hl_pane_g

0xc988,	// (0x0000c988) list_single_graphic_hl_pane_t1_ParamLimits

0xc988,	// (0x0000c988) list_single_graphic_hl_pane_t1

0x6967,	// (0x00006967) aid_size_min_hl_cp2

0x6970,	// (0x00006970) list_highlight_pane_cp34_cp2_ParamLimits

0x6970,	// (0x00006970) list_highlight_pane_cp34_cp2

0x6938,	// (0x00006938) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6938,	// (0x00006938) list_single_graphic_hl_pane_g1_cp2

0x697d,	// (0x0000697d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x697d,	// (0x0000697d) list_single_graphic_hl_pane_g2_cp2

0x6989,	// (0x00006989) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6989,	// (0x00006989) list_single_graphic_hl_pane_g3_cp2

0x214b,	// (0x0000214b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_graphic_hl_pane_g4_cp2

0x64fc,	// (0x000064fc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x64fc,	// (0x000064fc) list_single_graphic_hl_pane_g5_cp2

0xb47f,	// (0x0000b47f) control_pane_g4_ParamLimits

0xb47f,	// (0x0000b47f) control_pane_g4

0x283d,	// (0x0000283d) bg_popup_sub_pane_cp10_ParamLimits

0x5ccc,	// (0x00005ccc) list_choice_list_pane_ParamLimits

0x5cdb,	// (0x00005cdb) scroll_pane_cp23

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02_ParamLimits

0x6538,	// (0x00006538) list_preview_fixed_pane_ParamLimits

0x654e,	// (0x0000654e) list_preview_fixed_pane_cp_ParamLimits

0x654e,	// (0x0000654e) list_preview_fixed_pane_cp

0x655a,	// (0x0000655a) popup_preview_fixed_window_g1_ParamLimits

0x655a,	// (0x0000655a) popup_preview_fixed_window_g1

0x6566,	// (0x00006566) popup_preview_fixed_window_g2_ParamLimits

0x6566,	// (0x00006566) popup_preview_fixed_window_g2

0x0002,

0xa357,	// (0x0000a357) popup_preview_fixed_window_g_ParamLimits

0xa357,	// (0x0000a357) popup_preview_fixed_window_g

0x17b4,	// (0x000017b4) aid_navi_side_left_pane_ParamLimits

0x17c4,	// (0x000017c4) aid_navi_side_right_pane_ParamLimits

0x17d3,	// (0x000017d3) navi_icon_pane_stacon_ParamLimits

0x17e3,	// (0x000017e3) navi_navi_pane_stacon_ParamLimits

0x17d3,	// (0x000017d3) navi_text_pane_stacon_ParamLimits

0x0020,	// (0x00000020) main_text_info_pane

0x69ab,	// (0x000069ab) listscroll_text_info_pane

0x69b3,	// (0x000069b3) list_text_info_pane_ParamLimits

0x69b3,	// (0x000069b3) list_text_info_pane

0x69c2,	// (0x000069c2) scroll_pane_cp24_ParamLimits

0x69c2,	// (0x000069c2) scroll_pane_cp24

0xc99e,	// (0x0000c99e) list_text_info_pane_t1_ParamLimits

0xc99e,	// (0x0000c99e) list_text_info_pane_t1

0xb607,	// (0x0000b607) popup_fast_swap2_window_ParamLimits

0xb607,	// (0x0000b607) popup_fast_swap2_window

0x69fd,	// (0x000069fd) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x37a8,	// (0x000037a8) heading_pane_cp2

0x09ed,	// (0x000009ed) listscroll_fast2_pane

0x6a07,	// (0x00006a07) grid_fast2_pane

0x6a0f,	// (0x00006a0f) listscroll_fast2_pane_g1

0x6a17,	// (0x00006a17) listscroll_fast2_pane_g2

0x0001,

0xa3d3,	// (0x0000a3d3) listscroll_fast2_pane_g

0x14af,	// (0x000014af) scroll_pane_cp26

0x6a1f,	// (0x00006a1f) cell_fast2_pane_ParamLimits

0x6a1f,	// (0x00006a1f) cell_fast2_pane

0x6a35,	// (0x00006a35) cell_fast2_pane_g1

0x6a3e,	// (0x00006a3e) cell_fast2_pane_g2

0x6a47,	// (0x00006a47) cell_fast2_pane_g3

0x0002,

0xa3d8,	// (0x0000a3d8) cell_fast2_pane_g

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp9

0x0ad9,	// (0x00000ad9) main_eswt_pane_ParamLimits

0x0ad9,	// (0x00000ad9) main_eswt_pane

0x69d7,	// (0x000069d7) list_single_text_info_pane

0x6a4f,	// (0x00006a4f) eswt_ctrl_button_pane

0x6a4f,	// (0x00006a4f) eswt_ctrl_canvas_pane

0x6a57,	// (0x00006a57) eswt_ctrl_combo_pane

0x6a4f,	// (0x00006a4f) eswt_ctrl_default_pane

0x6a4f,	// (0x00006a4f) eswt_ctrl_label_pane

0x6a5f,	// (0x00006a5f) eswt_ctrl_wait_pane

0x6a67,	// (0x00006a67) eswt_shell_pane

0x0020,	// (0x00000020) listscroll_eswt_app_pane

0x6a83,	// (0x00006a83) popup_eswt_tasktip_window_ParamLimits

0x6a83,	// (0x00006a83) popup_eswt_tasktip_window

0x3395,	// (0x00003395) bg_popup_window_pane_cp18

0x6a94,	// (0x00006a94) eswt_control_pane_g1_ParamLimits

0x6a94,	// (0x00006a94) eswt_control_pane_g1

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_ParamLimits

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2

0x6aae,	// (0x00006aae) eswt_control_pane_g3_ParamLimits

0x6aae,	// (0x00006aae) eswt_control_pane_g3

0x6abb,	// (0x00006abb) eswt_control_pane_g4_ParamLimits

0x6abb,	// (0x00006abb) eswt_control_pane_g4

0x0003,

0xa3df,	// (0x0000a3df) eswt_control_pane_g_ParamLimits

0xa3df,	// (0x0000a3df) eswt_control_pane_g

0x11e8,	// (0x000011e8) bg_button_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane

0x0ad9,	// (0x00000ad9) common_borders_pane_copy2_ParamLimits

0x0ad9,	// (0x00000ad9) common_borders_pane_copy2

0x6ac8,	// (0x00006ac8) control_button_pane_g1_ParamLimits

0x6ac8,	// (0x00006ac8) control_button_pane_g1

0x6ad4,	// (0x00006ad4) control_button_pane_g2_ParamLimits

0x6ad4,	// (0x00006ad4) control_button_pane_g2

0x6ae0,	// (0x00006ae0) control_button_pane_g3_ParamLimits

0x6ae0,	// (0x00006ae0) control_button_pane_g3

0x0002,

0xa3e8,	// (0x0000a3e8) control_button_pane_g_ParamLimits

0xa3e8,	// (0x0000a3e8) control_button_pane_g

0x6af4,	// (0x00006af4) control_button_pane_t1

0x6b02,	// (0x00006b02) control_button_pane_t2

0x0001,

0xa3ef,	// (0x0000a3ef) control_button_pane_t

0x320b,	// (0x0000320b) bg_button_pane_g1

0x3213,	// (0x00003213) bg_button_pane_g2

0x321b,	// (0x0000321b) bg_button_pane_g3

0x3223,	// (0x00003223) bg_button_pane_g4

0x322b,	// (0x0000322b) bg_button_pane_g5

0x3233,	// (0x00003233) bg_button_pane_g6

0x323b,	// (0x0000323b) bg_button_pane_g7

0x3243,	// (0x00003243) bg_button_pane_g8

0x324b,	// (0x0000324b) bg_button_pane_g9

0x0008,

0xa05a,	// (0x0000a05a) bg_button_pane_g

0x5c87,	// (0x00005c87) common_borders_pane_ParamLimits

0x5c87,	// (0x00005c87) common_borders_pane

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy1_ParamLimits

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy1

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy1_ParamLimits

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy1

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy1_ParamLimits

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy1

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy1_ParamLimits

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy1

0x5cc2,	// (0x00005cc2) bg_eswt_ctrl_canvas_pane_g1

0x5c87,	// (0x00005c87) common_borders_pane_cp2_ParamLimits

0x5c87,	// (0x00005c87) common_borders_pane_cp2

0x5c87,	// (0x00005c87) common_borders_pane_cp3_ParamLimits

0x5c87,	// (0x00005c87) common_borders_pane_cp3

0x6b10,	// (0x00006b10) separator_horizontal_pane

0x193d,	// (0x0000193d) separator_vertical_pane

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy2_ParamLimits

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy2

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy2_ParamLimits

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy2

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy2_ParamLimits

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy2

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy2_ParamLimits

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy2

0x0020,	// (0x00000020) common_borders_pane_cp4

0x6b18,	// (0x00006b18) separator_horizontal_pane_g1

0x6b21,	// (0x00006b21) separator_horizontal_pane_g2

0x6b2a,	// (0x00006b2a) separator_horizontal_pane_g3

0x0002,

0xa3f4,	// (0x0000a3f4) separator_horizontal_pane_g

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy3_ParamLimits

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy3

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy3_ParamLimits

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy3

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy3_ParamLimits

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy3

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy3_ParamLimits

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy3

0x0020,	// (0x00000020) common_borders_pane_cp5

0x6b33,	// (0x00006b33) separator_vertical_pane_g1

0x6b3c,	// (0x00006b3c) separator_vertical_pane_g2

0x6b45,	// (0x00006b45) separator_vertical_pane_g3

0x0002,

0xa3fb,	// (0x0000a3fb) separator_vertical_pane_g

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy4_ParamLimits

0x6a94,	// (0x00006a94) eswt_control_pane_g1_copy4

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy4_ParamLimits

0x6aa1,	// (0x00006aa1) eswt_control_pane_g2_copy4

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy4_ParamLimits

0x6aae,	// (0x00006aae) eswt_control_pane_g3_copy4

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy4_ParamLimits

0x6abb,	// (0x00006abb) eswt_control_pane_g4_copy4

0xc9b9,	// (0x0000c9b9) eswt_ctrl_combo_button_pane

0xc9c1,	// (0x0000c9c1) eswt_ctrl_input_pane

0xc9c9,	// (0x0000c9c9) popup_choice_list_window_cp70

0xc9d1,	// (0x0000c9d1) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x5c87,	// (0x00005c87) bg_button_pane_cp70_ParamLimits

0x5c87,	// (0x00005c87) bg_button_pane_cp70

0xc9df,	// (0x0000c9df) eswt_ctrl_combo_button_pane_g1

0x6b7c,	// (0x00006b7c) wait_bar_pane_cp70

0x3395,	// (0x00003395) bg_popup_window_pane_cp70_ParamLimits

0x3395,	// (0x00003395) bg_popup_window_pane_cp70

0x6b84,	// (0x00006b84) popup_eswt_tasktip_window_t1

0x6b9a,	// (0x00006b9a) wait_bar_pane_cp71_ParamLimits

0x6b9a,	// (0x00006b9a) wait_bar_pane_cp71

0x6ba6,	// (0x00006ba6) grid_eswt_app_pane

0x1946,	// (0x00001946) scroll_pane_cp70

0xc9e7,	// (0x0000c9e7) cell_eswt_app_pane_ParamLimits

0xc9e7,	// (0x0000c9e7) cell_eswt_app_pane

0xca0f,	// (0x0000ca0f) cell_eswt_app_pane_g1_ParamLimits

0xca0f,	// (0x0000ca0f) cell_eswt_app_pane_g1

0xca3e,	// (0x0000ca3e) cell_eswt_app_pane_g2_ParamLimits

0xca3e,	// (0x0000ca3e) cell_eswt_app_pane_g2

0x0001,

0xe481,	// (0x0000e481) cell_eswt_app_pane_g_ParamLimits

0xe481,	// (0x0000e481) cell_eswt_app_pane_g

0xca67,	// (0x0000ca67) cell_eswt_app_pane_t1_ParamLimits

0xca67,	// (0x0000ca67) cell_eswt_app_pane_t1

0x6c61,	// (0x00006c61) grid_highlight_pane_cp70_ParamLimits

0x6c61,	// (0x00006c61) grid_highlight_pane_cp70

0x0c7f,	// (0x00000c7f) set_content_pane_g1

0x261b,	// (0x0000261b) status_small_volume_pane

0x6c6d,	// (0x00006c6d) status_small_volume_pane_g1

0x6c75,	// (0x00006c75) volume_small2_pane

0x6c7e,	// (0x00006c7e) volume_small2_pane_g1

0x6c87,	// (0x00006c87) volume_small2_pane_g2

0x6c90,	// (0x00006c90) volume_small2_pane_g3

0x6c99,	// (0x00006c99) volume_small2_pane_g4

0x6ca2,	// (0x00006ca2) volume_small2_pane_g5

0x6cab,	// (0x00006cab) volume_small2_pane_g6

0x6cb4,	// (0x00006cb4) volume_small2_pane_g7

0x6cbd,	// (0x00006cbd) volume_small2_pane_g8

0x6cc6,	// (0x00006cc6) volume_small2_pane_g9

0x6ccf,	// (0x00006ccf) volume_small2_pane_g10

0x0009,

0xa407,	// (0x0000a407) volume_small2_pane_g

0x6244,	// (0x00006244) fep_vkb_top_text_pane_g1_ParamLimits

0xc904,	// (0x0000c904) fep_vkb_top_text_pane_t1_ParamLimits

0x6572,	// (0x00006572) popup_preview_fixed_window_g3_ParamLimits

0x6572,	// (0x00006572) popup_preview_fixed_window_g3

0xbb27,	// (0x0000bb27) popup_toolbar_trans_pane

0xc372,	// (0x0000c372) aid_height_set_list_ParamLimits

0x48b8,	// (0x000048b8) aid_size_parent_ParamLimits

0x283d,	// (0x0000283d) list_highlight_pane_cp2_ParamLimits

0x0c7f,	// (0x00000c7f) set_content_pane_g1_ParamLimits

0xc513,	// (0x0000c513) list_single_image_pane_ParamLimits

0xc513,	// (0x0000c513) list_single_image_pane

0xca99,	// (0x0000ca99) aid_size_cell_image_ParamLimits

0xca99,	// (0x0000ca99) aid_size_cell_image

0xcaa6,	// (0x0000caa6) grid_single_image_pane_ParamLimits

0xcaa6,	// (0x0000caa6) grid_single_image_pane

0x0c7f,	// (0x00000c7f) list_single_image_pane_g1_ParamLimits

0x0c7f,	// (0x00000c7f) list_single_image_pane_g1

0x120e,	// (0x0000120e) list_single_image_pane_g2_ParamLimits

0x120e,	// (0x0000120e) list_single_image_pane_g2

0x0001,

0x9e88,	// (0x00009e88) list_single_image_pane_g_ParamLimits

0x9e88,	// (0x00009e88) list_single_image_pane_g

0x4a3b,	// (0x00004a3b) list_single_image_pane_t1_ParamLimits

0x4a3b,	// (0x00004a3b) list_single_image_pane_t1

0xcab2,	// (0x0000cab2) cell_image_list_pane_ParamLimits

0xcab2,	// (0x0000cab2) cell_image_list_pane

0xcac6,	// (0x0000cac6) cell_image_list_pane_g1

0xcacf,	// (0x0000cacf) cell_image_list_pane_g2

0x0001,

0xe486,	// (0x0000e486) cell_image_list_pane_g

0x6d16,	// (0x00006d16) aid_size_cell_tb_trans_pane

0x11e8,	// (0x000011e8) bg_tb_trans_pane

0x6d28,	// (0x00006d28) grid_tb_trans_pane

0x320b,	// (0x0000320b) bg_tb_trans_pane_g1

0x3213,	// (0x00003213) bg_tb_trans_pane_g2

0x321b,	// (0x0000321b) bg_tb_trans_pane_g3

0x3223,	// (0x00003223) bg_tb_trans_pane_g4

0x322b,	// (0x0000322b) bg_tb_trans_pane_g5

0x3243,	// (0x00003243) bg_tb_trans_pane_g6

0x324b,	// (0x0000324b) bg_tb_trans_pane_g7

0x3233,	// (0x00003233) bg_tb_trans_pane_g8

0x323b,	// (0x0000323b) bg_tb_trans_pane_g9

0x0008,

0xa421,	// (0x0000a421) bg_tb_trans_pane_g

0x6d3c,	// (0x00006d3c) cell_toolbar_trans_pane_ParamLimits

0x6d3c,	// (0x00006d3c) cell_toolbar_trans_pane

0x5cc2,	// (0x00005cc2) cell_toolbar_trans_pane_g1

0xc760,	// (0x0000c760) list_form2_midp_pane_t1

0xc76e,	// (0x0000c76e) list_form2_midp_pane_t2

0x0001,

0xe451,	// (0x0000e451) list_form2_midp_pane_t

0x591b,	// (0x0000591b) scroll_pane_cp51_ParamLimits

0x5b1c,	// (0x00005b1c) form2_midp_wait_pane_g1

0x5b25,	// (0x00005b25) form2_midp_wait_pane_g2

0x5b2e,	// (0x00005b2e) form2_midp_wait_pane_g3

0x0002,

0xa2e4,	// (0x0000a2e4) form2_midp_wait_pane_g

0x0474,	// (0x00000474) list_highlight_pane_cp21_ParamLimits

0x5b4e,	// (0x00005b4e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5b5d,	// (0x00005b5d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4a82,	// (0x00004a82) list_single_2graphic_im_pane_ParamLimits

0x4a82,	// (0x00004a82) list_single_2graphic_im_pane

0xcad8,	// (0x0000cad8) list_single_2graphic_im_pane_g1_ParamLimits

0xcad8,	// (0x0000cad8) list_single_2graphic_im_pane_g1

0xcae9,	// (0x0000cae9) list_single_2graphic_im_pane_g2_ParamLimits

0xcae9,	// (0x0000cae9) list_single_2graphic_im_pane_g2

0xcaf5,	// (0x0000caf5) list_single_2graphic_im_pane_g3_ParamLimits

0xcaf5,	// (0x0000caf5) list_single_2graphic_im_pane_g3

0x0003,

0xe48b,	// (0x0000e48b) list_single_2graphic_im_pane_g_ParamLimits

0xe48b,	// (0x0000e48b) list_single_2graphic_im_pane_g

0xcb09,	// (0x0000cb09) list_single_2graphic_im_pane_t1_ParamLimits

0xcb09,	// (0x0000cb09) list_single_2graphic_im_pane_t1

0x657e,	// (0x0000657e) list_single_graphic_2heading_pane_fp_ParamLimits

0x657e,	// (0x0000657e) list_single_graphic_2heading_pane_fp

0x65d5,	// (0x000065d5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x65d5,	// (0x000065d5) list_single_graphic_2heading_pane_fp_g1

0x6592,	// (0x00006592) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6592,	// (0x00006592) list_single_graphic_2heading_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_fp_g3

0x659e,	// (0x0000659e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x659e,	// (0x0000659e) list_single_graphic_2heading_pane_fp_g4

0x65b2,	// (0x000065b2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x65b2,	// (0x000065b2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xa367,	// (0x0000a367) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa367,	// (0x0000a367) list_single_graphic_2heading_pane_fp_g

0x6dd0,	// (0x00006dd0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6dd0,	// (0x00006dd0) list_single_graphic_2heading_pane_fp_t1

0x660d,	// (0x0000660d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x660d,	// (0x0000660d) list_single_graphic_2heading_pane_fp_t2

0x6de6,	// (0x00006de6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6de6,	// (0x00006de6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xa43d,	// (0x0000a43d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xa43d,	// (0x0000a43d) list_single_graphic_2heading_pane_fp_t

0x5ee5,	// (0x00005ee5) fep_hwr_write_pane_g5_ParamLimits

0x5ee5,	// (0x00005ee5) fep_hwr_write_pane_g5

0x5ef1,	// (0x00005ef1) fep_hwr_write_pane_g6_ParamLimits

0x5ef1,	// (0x00005ef1) fep_hwr_write_pane_g6

0x6a67,	// (0x00006a67) eswt_shell_pane_ParamLimits

0x3395,	// (0x00003395) bg_popup_window_pane_cp18_ParamLimits

0x47a6,	// (0x000047a6) heading_pane_cp70

0x6b84,	// (0x00006b84) popup_eswt_tasktip_window_t1_ParamLimits

0xbbc2,	// (0x0000bbc2) aid_touch_tab_arrow_left

0xbbd6,	// (0x0000bbd6) aid_touch_tab_arrow_right

0xa8a0,	// (0x0000a8a0) title_pane_g3_ParamLimits

0xa8a0,	// (0x0000a8a0) title_pane_g3

0x10e6,	// (0x000010e6) set_value_pane_g1

0xbb27,	// (0x0000bb27) popup_toolbar_trans_pane_ParamLimits

0x6d16,	// (0x00006d16) aid_size_cell_tb_trans_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_tb_trans_pane_ParamLimits

0x6d28,	// (0x00006d28) grid_tb_trans_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane

0x0ad9,	// (0x00000ad9) cont_snote2_single_text_pane_ParamLimits

0x0ad9,	// (0x00000ad9) cont_snote2_single_text_pane

0x0ad9,	// (0x00000ad9) cont_snote2_single_graphic_pane_ParamLimits

0x0ad9,	// (0x00000ad9) cont_snote2_single_graphic_pane

0x39b2,	// (0x000039b2) cont_note_wait_pane_ParamLimits

0x39b2,	// (0x000039b2) cont_note_wait_pane

0x39b2,	// (0x000039b2) cont_note_image_pane_ParamLimits

0x39b2,	// (0x000039b2) cont_note_image_pane

0x6dfc,	// (0x00006dfc) popup_note2_window_g1_ParamLimits

0x6dfc,	// (0x00006dfc) popup_note2_window_g1

0x6e2d,	// (0x00006e2d) popup_note2_window_t1_ParamLimits

0x6e2d,	// (0x00006e2d) popup_note2_window_t1

0x6e72,	// (0x00006e72) popup_note2_window_t2_ParamLimits

0x6e72,	// (0x00006e72) popup_note2_window_t2

0x6eb7,	// (0x00006eb7) popup_note2_window_t3_ParamLimits

0x6eb7,	// (0x00006eb7) popup_note2_window_t3

0x6efc,	// (0x00006efc) popup_note2_window_t4_ParamLimits

0x6efc,	// (0x00006efc) popup_note2_window_t4

0x0829,	// (0x00000829) popup_note2_window_t5_ParamLimits

0x0829,	// (0x00000829) popup_note2_window_t5

0x0004,

0xa449,	// (0x0000a449) popup_note2_window_t_ParamLimits

0xa449,	// (0x0000a449) popup_note2_window_t

0x6f2b,	// (0x00006f2b) popup_note2_image_window_g1_ParamLimits

0x6f2b,	// (0x00006f2b) popup_note2_image_window_g1

0x6f37,	// (0x00006f37) popup_note2_image_window_g2_ParamLimits

0x6f37,	// (0x00006f37) popup_note2_image_window_g2

0x0001,

0xa454,	// (0x0000a454) popup_note2_image_window_g_ParamLimits

0xa454,	// (0x0000a454) popup_note2_image_window_g

0x6f49,	// (0x00006f49) popup_note2_image_window_t1_ParamLimits

0x6f49,	// (0x00006f49) popup_note2_image_window_t1

0x6f61,	// (0x00006f61) popup_note2_image_window_t2_ParamLimits

0x6f61,	// (0x00006f61) popup_note2_image_window_t2

0x6f79,	// (0x00006f79) popup_note2_image_window_t3_ParamLimits

0x6f79,	// (0x00006f79) popup_note2_image_window_t3

0x0002,

0xa459,	// (0x0000a459) popup_note2_image_window_t_ParamLimits

0xa459,	// (0x0000a459) popup_note2_image_window_t

0x39c0,	// (0x000039c0) popup_note2_wait_window_g1_ParamLimits

0x39c0,	// (0x000039c0) popup_note2_wait_window_g1

0x39cc,	// (0x000039cc) popup_note2_wait_window_g2_ParamLimits

0x39cc,	// (0x000039cc) popup_note2_wait_window_g2

0x39d8,	// (0x000039d8) popup_note2_wait_window_g3_ParamLimits

0x39d8,	// (0x000039d8) popup_note2_wait_window_g3

0x0002,

0xa03c,	// (0x0000a03c) popup_note2_wait_window_g_ParamLimits

0xa03c,	// (0x0000a03c) popup_note2_wait_window_g

0x6f95,	// (0x00006f95) popup_note2_wait_window_t1_ParamLimits

0x6f95,	// (0x00006f95) popup_note2_wait_window_t1

0x6fb3,	// (0x00006fb3) popup_note2_wait_window_t2_ParamLimits

0x6fb3,	// (0x00006fb3) popup_note2_wait_window_t2

0x6fd1,	// (0x00006fd1) popup_note2_wait_window_t3_ParamLimits

0x6fd1,	// (0x00006fd1) popup_note2_wait_window_t3

0x6fe3,	// (0x00006fe3) popup_note2_wait_window_t4_ParamLimits

0x6fe3,	// (0x00006fe3) popup_note2_wait_window_t4

0x0003,

0xa460,	// (0x0000a460) popup_note2_wait_window_t_ParamLimits

0xa460,	// (0x0000a460) popup_note2_wait_window_t

0x6ff5,	// (0x00006ff5) wait_bar2_pane_ParamLimits

0x6ff5,	// (0x00006ff5) wait_bar2_pane

0x700d,	// (0x0000700d) popup_snote2_single_text_window_g1_ParamLimits

0x700d,	// (0x0000700d) popup_snote2_single_text_window_g1

0x7035,	// (0x00007035) popup_snote2_single_text_window_t1_ParamLimits

0x7035,	// (0x00007035) popup_snote2_single_text_window_t1

0x7081,	// (0x00007081) popup_snote2_single_text_window_t2_ParamLimits

0x7081,	// (0x00007081) popup_snote2_single_text_window_t2

0x70cd,	// (0x000070cd) popup_snote2_single_text_window_t3_ParamLimits

0x70cd,	// (0x000070cd) popup_snote2_single_text_window_t3

0x710e,	// (0x0000710e) popup_snote2_single_text_window_t4_ParamLimits

0x710e,	// (0x0000710e) popup_snote2_single_text_window_t4

0x7144,	// (0x00007144) popup_snote2_single_text_window_t5_ParamLimits

0x7144,	// (0x00007144) popup_snote2_single_text_window_t5

0x0004,

0xa469,	// (0x0000a469) popup_snote2_single_text_window_t_ParamLimits

0xa469,	// (0x0000a469) popup_snote2_single_text_window_t

0x716f,	// (0x0000716f) popup_snote2_single_graphic_window_g1_ParamLimits

0x716f,	// (0x0000716f) popup_snote2_single_graphic_window_g1

0x7197,	// (0x00007197) popup_snote2_single_graphic_window_g2_ParamLimits

0x7197,	// (0x00007197) popup_snote2_single_graphic_window_g2

0x0001,

0xa474,	// (0x0000a474) popup_snote2_single_graphic_window_g_ParamLimits

0xa474,	// (0x0000a474) popup_snote2_single_graphic_window_g

0x71bf,	// (0x000071bf) popup_snote2_single_graphic_window_t1_ParamLimits

0x71bf,	// (0x000071bf) popup_snote2_single_graphic_window_t1

0x720b,	// (0x0000720b) popup_snote2_single_graphic_window_t2_ParamLimits

0x720b,	// (0x0000720b) popup_snote2_single_graphic_window_t2

0x70cd,	// (0x000070cd) popup_snote2_single_graphic_window_t3_ParamLimits

0x70cd,	// (0x000070cd) popup_snote2_single_graphic_window_t3

0x710e,	// (0x0000710e) popup_snote2_single_graphic_window_t4_ParamLimits

0x710e,	// (0x0000710e) popup_snote2_single_graphic_window_t4

0x7144,	// (0x00007144) popup_snote2_single_graphic_window_t5_ParamLimits

0x7144,	// (0x00007144) popup_snote2_single_graphic_window_t5

0x0004,

0xa479,	// (0x0000a479) popup_snote2_single_graphic_window_t_ParamLimits

0xa479,	// (0x0000a479) popup_snote2_single_graphic_window_t

0x57a9,	// (0x000057a9) clock_nsta_pane_cp2_t1

0x57a9,	// (0x000057a9) clock_nsta_pane_cp2_t2

0x0001,

0xa2a5,	// (0x0000a2a5) clock_nsta_pane_cp2_t

0x1202,	// (0x00001202) form_field_data_wide_pane_g1_ParamLimits

0x0c7f,	// (0x00000c7f) form_field_data_wide_pane_g2_ParamLimits

0x0c7f,	// (0x00000c7f) form_field_data_wide_pane_g2

0x120e,	// (0x0000120e) form_field_data_wide_pane_g3_ParamLimits

0x120e,	// (0x0000120e) form_field_data_wide_pane_g3

0x0002,

0x9e86,	// (0x00009e86) form_field_data_wide_pane_g_ParamLimits

0x9e86,	// (0x00009e86) form_field_data_wide_pane_g

0xc69b,	// (0x0000c69b) grid_touch_3_pane_ParamLimits

0xc69b,	// (0x0000c69b) grid_touch_3_pane

0xcb3a,	// (0x0000cb3a) cell_touch_3_pane_ParamLimits

0xcb3a,	// (0x0000cb3a) cell_touch_3_pane

0x5cc2,	// (0x00005cc2) cell_touch_3_pane_g1

0x5cc2,	// (0x00005cc2) cell_touch_3_pane_g2

0x0001,

0xa32a,	// (0x0000a32a) cell_touch_3_pane_g

0x085b,	// (0x0000085b) cont_query_data_pane

0x0863,	// (0x00000863) cont_query_data_pane_cp1

0x7284,	// (0x00007284) button_value_adjust_pane_cp7

0x728c,	// (0x0000728c) query_popup_pane_cp3

0x1c31,	// (0x00001c31) bg_popup_sub_pane_cp22_ParamLimits

0x1c47,	// (0x00001c47) navi_navi_volume_pane_cp2

0x1c5f,	// (0x00001c5f) popup_side_volume_key_window_g2

0x1c6b,	// (0x00001c6b) popup_side_volume_key_window_g3

0x0002,

0x9f18,	// (0x00009f18) popup_side_volume_key_window_g

0x1c85,	// (0x00001c85) popup_side_volume_key_window_t2

0x0001,

0x9f1f,	// (0x00009f1f) popup_side_volume_key_window_t

0x20ce,	// (0x000020ce) popup_side_volume_key_window_ParamLimits

0xad43,	// (0x0000ad43) list_double_graphic_pane_g4_ParamLimits

0xad43,	// (0x0000ad43) list_double_graphic_pane_g4

0xc4eb,	// (0x0000c4eb) list_single_2heading_msg_pane_ParamLimits

0xc4eb,	// (0x0000c4eb) list_single_2heading_msg_pane

0xcb81,	// (0x0000cb81) list_single_2heading_msg_pane_g1_ParamLimits

0xcb81,	// (0x0000cb81) list_single_2heading_msg_pane_g1

0xcb8d,	// (0x0000cb8d) list_single_2heading_msg_pane_g2_ParamLimits

0xcb8d,	// (0x0000cb8d) list_single_2heading_msg_pane_g2

0xcba0,	// (0x0000cba0) list_single_2heading_msg_pane_g3_ParamLimits

0xcba0,	// (0x0000cba0) list_single_2heading_msg_pane_g3

0x72dd,	// (0x000072dd) list_single_2heading_msg_pane_g4_ParamLimits

0x72dd,	// (0x000072dd) list_single_2heading_msg_pane_g4

0x0003,

0xe494,	// (0x0000e494) list_single_2heading_msg_pane_g_ParamLimits

0xe494,	// (0x0000e494) list_single_2heading_msg_pane_g

0xcbac,	// (0x0000cbac) list_single_2heading_msg_pane_t1_ParamLimits

0xcbac,	// (0x0000cbac) list_single_2heading_msg_pane_t1

0xcbd4,	// (0x0000cbd4) list_single_2heading_msg_pane_t2_ParamLimits

0xcbd4,	// (0x0000cbd4) list_single_2heading_msg_pane_t2

0xcc3f,	// (0x0000cc3f) list_single_2heading_msg_pane_t3_ParamLimits

0xcc3f,	// (0x0000cc3f) list_single_2heading_msg_pane_t3

0x7385,	// (0x00007385) list_single_2heading_msg_pane_t4_ParamLimits

0x7385,	// (0x00007385) list_single_2heading_msg_pane_t4

0x0003,

0xe49d,	// (0x0000e49d) list_single_2heading_msg_pane_t_ParamLimits

0xe49d,	// (0x0000e49d) list_single_2heading_msg_pane_t

0x03c8,	// (0x000003c8) title_pane_g4_ParamLimits

0x03c8,	// (0x000003c8) title_pane_g4

0x16f4,	// (0x000016f4) title_pane_stacon_g3_ParamLimits

0x16f4,	// (0x000016f4) title_pane_stacon_g3

0x6d93,	// (0x00006d93) list_single_2graphic_im_pane_g4_ParamLimits

0x6d93,	// (0x00006d93) list_single_2graphic_im_pane_g4

0x4506,	// (0x00004506) popup_side_volume_key_window_cp

0x4e52,	// (0x00004e52) main_idle_act2_pane_t1

0x3253,	// (0x00003253) toolbar_button_pane_g10

0xac30,	// (0x0000ac30) popup_toolbar_window_cp1

0x579a,	// (0x0000579a) clock_nsta_pane_cp_t1

0x579a,	// (0x0000579a) clock_nsta_pane_cp_t2

0x0001,

0xa2a0,	// (0x0000a2a0) clock_nsta_pane_cp_t

0x1c47,	// (0x00001c47) navi_navi_volume_pane_cp2_ParamLimits

0x1c53,	// (0x00001c53) popup_side_volume_key_window_g1_ParamLimits

0x1c5f,	// (0x00001c5f) popup_side_volume_key_window_g2_ParamLimits

0x1c6b,	// (0x00001c6b) popup_side_volume_key_window_g3_ParamLimits

0x9f18,	// (0x00009f18) popup_side_volume_key_window_g_ParamLimits

0x5d2b,	// (0x00005d2b) fep_hwr_aid_pane

0x5dcc,	// (0x00005dcc) bg_fep_hwr_top_pane_g4_ParamLimits

0x5dec,	// (0x00005dec) fep_hwr_top_pane_g1_ParamLimits

0x5dfe,	// (0x00005dfe) fep_hwr_top_pane_g2_ParamLimits

0x5e10,	// (0x00005e10) fep_hwr_top_pane_g3_ParamLimits

0xa2f5,	// (0x0000a2f5) fep_hwr_top_pane_g_ParamLimits

0x5e25,	// (0x00005e25) fep_hwr_top_text_pane_ParamLimits

0x42d1,	// (0x000042d1) aid_touch_tab_arrow_arrow_2

0x42da,	// (0x000042da) aid_touch_tab_arrow_left_2

0x5d3f,	// (0x00005d3f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5d72,	// (0x00005d72) fep_hwr_prediction_pane

0x6074,	// (0x00006074) fep_vkb_prediction_pane

0xc8e4,	// (0x0000c8e4) fep_vkb_side_pane_g3_ParamLimits

0xc8e4,	// (0x0000c8e4) fep_vkb_side_pane_g3

0x6102,	// (0x00006102) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67c9,	// (0x000067c9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67d6,	// (0x000067d6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa39f,	// (0x0000a39f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x73aa,	// (0x000073aa) fep_hwr_prediction_pane_g1

0x73b4,	// (0x000073b4) fep_hwr_prediction_pane_g2

0x73bc,	// (0x000073bc) fep_hwr_prediction_pane_g3

0x73c4,	// (0x000073c4) fep_hwr_prediction_pane_g4

0x0003,

0xa496,	// (0x0000a496) fep_hwr_prediction_pane_g

0x73aa,	// (0x000073aa) fep_vkb_prediction_pane_g1

0x73cc,	// (0x000073cc) fep_vkb_prediction_pane_g2

0x73d4,	// (0x000073d4) fep_vkb_prediction_pane_g3

0x73dc,	// (0x000073dc) fep_vkb_prediction_pane_g4

0x0003,

0xa49f,	// (0x0000a49f) fep_vkb_prediction_pane_g

0x482c,	// (0x0000482c) slider_set_pane_g3

0x4840,	// (0x00004840) slider_set_pane_g4

0x4858,	// (0x00004858) slider_set_pane_g5

0x482c,	// (0x0000482c) slider_set_pane_g6

0xc33c,	// (0x0000c33c) slider_set_pane_g7

0x49ff,	// (0x000049ff) slider_form_pane_g3

0x4a08,	// (0x00004a08) slider_form_pane_g4

0x4a10,	// (0x00004a10) slider_form_pane_g5

0x49ff,	// (0x000049ff) slider_form_pane_g6

0xc4a4,	// (0x0000c4a4) slider_form_pane_g7

0x5127,	// (0x00005127) slider_set_pane_vc_g3

0x5130,	// (0x00005130) slider_set_pane_vc_g4

0x5139,	// (0x00005139) slider_set_pane_vc_g5

0x5127,	// (0x00005127) slider_set_pane_vc_g6

0x5142,	// (0x00005142) slider_set_pane_vc_g7

0x5127,	// (0x00005127) slider_form_pane_vc_g1

0x5130,	// (0x00005130) slider_form_pane_vc_g2

0x5139,	// (0x00005139) slider_form_pane_vc_g3

0x5127,	// (0x00005127) slider_form_pane_vc_g4

0x54ae,	// (0x000054ae) slider_form_pane_vc_g5

0x0004,

0xa279,	// (0x0000a279) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x73e4,	// (0x000073e4) ai3_links_pane

0xccad,	// (0x0000ccad) popup_ai3_data_window_ParamLimits

0xccad,	// (0x0000ccad) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xccc5,	// (0x0000ccc5) cell_ai3_links_pane_ParamLimits

0xccc5,	// (0x0000ccc5) cell_ai3_links_pane

0x7419,	// (0x00007419) bg_popup_sub_pane_cp11

0x7426,	// (0x00007426) cell_ai3_links_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp12

0x744b,	// (0x0000744b) heading_ai3_data_pane

0x7453,	// (0x00007453) list_ai3_gene_pane

0x745f,	// (0x0000745f) popup_ai3_data_window_g1

0x7467,	// (0x00007467) heading_ai3_data_pane_g1

0x746f,	// (0x0000746f) heading_ai3_data_pane_t1

0x747d,	// (0x0000747d) list_double_ai3_gene_pane_ParamLimits

0x747d,	// (0x0000747d) list_double_ai3_gene_pane

0x748a,	// (0x0000748a) list_single_ai3_gene_pane_ParamLimits

0x748a,	// (0x0000748a) list_single_ai3_gene_pane

0x5c87,	// (0x00005c87) list_highlight_pane_cp7_ParamLimits

0x5c87,	// (0x00005c87) list_highlight_pane_cp7

0x7497,	// (0x00007497) list_single_a13_gene_pane_t1_ParamLimits

0x7497,	// (0x00007497) list_single_a13_gene_pane_t1

0x74ae,	// (0x000074ae) list_single_ai3_gene_pane_g1

0x74b7,	// (0x000074b7) list_single_ai3_gene_pane_g2

0x0001,

0xa4a8,	// (0x0000a4a8) list_single_ai3_gene_pane_g

0x74bf,	// (0x000074bf) list_double_ai3_gene_pane_g1_ParamLimits

0x74bf,	// (0x000074bf) list_double_ai3_gene_pane_g1

0x74cb,	// (0x000074cb) list_double_ai3_gene_pane_t1_ParamLimits

0x74cb,	// (0x000074cb) list_double_ai3_gene_pane_t1

0x74e7,	// (0x000074e7) list_double_ai3_gene_pane_t2_ParamLimits

0x74e7,	// (0x000074e7) list_double_ai3_gene_pane_t2

0x74fc,	// (0x000074fc) list_double_ai3_gene_pane_t3_ParamLimits

0x74fc,	// (0x000074fc) list_double_ai3_gene_pane_t3

0x0002,

0xa4ad,	// (0x0000a4ad) list_double_ai3_gene_pane_t_ParamLimits

0xa4ad,	// (0x0000a4ad) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x729d,	// (0x0000729d) aid_size_min_col_2

0xcb6d,	// (0x0000cb6d) aid_size_min_msg_ParamLimits

0xcb6d,	// (0x0000cb6d) aid_size_min_msg

0xc8f8,	// (0x0000c8f8) fep_vkb_top_text_pane_g2_ParamLimits

0xc8f8,	// (0x0000c8f8) fep_vkb_top_text_pane_g2

0x0001,

0xe471,	// (0x0000e471) fep_vkb_top_text_pane_g_ParamLimits

0xe471,	// (0x0000e471) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x7519,	// (0x00007519) grid_hc_apps_pane_ParamLimits

0x7519,	// (0x00007519) grid_hc_apps_pane

0x7528,	// (0x00007528) list_hc_apps_pane

0x7530,	// (0x00007530) scroll_pane_cp37_ParamLimits

0x7530,	// (0x00007530) scroll_pane_cp37

0xccdb,	// (0x0000ccdb) cell_hc_apps_pane_ParamLimits

0xccdb,	// (0x0000ccdb) cell_hc_apps_pane

0xcd75,	// (0x0000cd75) cell_hc_apps_pane_g1_ParamLimits

0xcd75,	// (0x0000cd75) cell_hc_apps_pane_g1

0x75f7,	// (0x000075f7) cell_hc_apps_pane_g2_ParamLimits

0x75f7,	// (0x000075f7) cell_hc_apps_pane_g2

0x7613,	// (0x00007613) cell_hc_apps_pane_g3_ParamLimits

0x7613,	// (0x00007613) cell_hc_apps_pane_g3

0x0002,

0xe4a6,	// (0x0000e4a6) cell_hc_apps_pane_g_ParamLimits

0xe4a6,	// (0x0000e4a6) cell_hc_apps_pane_g

0xcda2,	// (0x0000cda2) cell_hc_apps_pane_t1_ParamLimits

0xcda2,	// (0x0000cda2) cell_hc_apps_pane_t1

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10_ParamLimits

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10

0xcde0,	// (0x0000cde0) list_single_hc_apps_pane_ParamLimits

0xcde0,	// (0x0000cde0) list_single_hc_apps_pane

0xce0c,	// (0x0000ce0c) list_single_hc_apps_pane_g1

0xce25,	// (0x0000ce25) list_single_hc_apps_pane_g2

0x0001,

0xe4ad,	// (0x0000e4ad) list_single_hc_apps_pane_g

0xce3e,	// (0x0000ce3e) list_single_hc_apps_pane_g2_copy1

0xce5a,	// (0x0000ce5a) list_single_hc_apps_pane_t1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_ParamLimits

0xa96d,	// (0x0000a96d) setting_slider_pane_t2_ParamLimits

0xa986,	// (0x0000a986) setting_slider_pane_t3_ParamLimits

0xe284,	// (0x0000e284) setting_slider_pane_t_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_ParamLimits

0x269d,	// (0x0000269d) control_pane_g5_ParamLimits

0x269d,	// (0x0000269d) control_pane_g5

0x4813,	// (0x00004813) slider_set_pane_g1_ParamLimits

0x4820,	// (0x00004820) slider_set_pane_g2_ParamLimits

0x482c,	// (0x0000482c) slider_set_pane_g3_ParamLimits

0x4840,	// (0x00004840) slider_set_pane_g4_ParamLimits

0x4858,	// (0x00004858) slider_set_pane_g5_ParamLimits

0x482c,	// (0x0000482c) slider_set_pane_g6_ParamLimits

0xc33c,	// (0x0000c33c) slider_set_pane_g7_ParamLimits

0xe3ed,	// (0x0000e3ed) slider_set_pane_g_ParamLimits

0x0474,	// (0x00000474) navi_icon_text_pane_ParamLimits

0xbb94,	// (0x0000bb94) aid_fill_nsta_2_ParamLimits

0xbbc2,	// (0x0000bbc2) aid_touch_tab_arrow_left_ParamLimits

0xbbd6,	// (0x0000bbd6) aid_touch_tab_arrow_right_ParamLimits

0xbc72,	// (0x0000bc72) clock_nsta_pane_ParamLimits

0x42b3,	// (0x000042b3) navi_icon_pane_g1_ParamLimits

0x42bf,	// (0x000042bf) navi_text_pane_t1_ParamLimits

0x5891,	// (0x00005891) navi_icon_text_pane_g1_ParamLimits

0x589d,	// (0x0000589d) navi_icon_text_pane_t1_ParamLimits

0xce0c,	// (0x0000ce0c) list_single_hc_apps_pane_g1_ParamLimits

0xce25,	// (0x0000ce25) list_single_hc_apps_pane_g2_ParamLimits

0xe4ad,	// (0x0000e4ad) list_single_hc_apps_pane_g_ParamLimits

0xce3e,	// (0x0000ce3e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xce5a,	// (0x0000ce5a) list_single_hc_apps_pane_t1_ParamLimits

0xa7ff,	// (0x0000a7ff) popup_toolbar2_fixed_window_ParamLimits

0xa7ff,	// (0x0000a7ff) popup_toolbar2_fixed_window

0xbb1f,	// (0x0000bb1f) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x771f,	// (0x0000771f) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x771f,	// (0x0000771f) grid_toolbar2_fixed_pane

0xce88,	// (0x0000ce88) cell_toolbar2_fixed_pane_ParamLimits

0xce88,	// (0x0000ce88) cell_toolbar2_fixed_pane

0xcea3,	// (0x0000cea3) cell_toolbar2_fixed_pane_g1

0x7741,	// (0x00007741) toolbar2_fixed_button_pane

0x320b,	// (0x0000320b) toolbar2_fixed_button_pane_g1

0x3213,	// (0x00003213) toolbar2_fixed_button_pane_g2

0x321b,	// (0x0000321b) toolbar2_fixed_button_pane_g3

0x3223,	// (0x00003223) toolbar2_fixed_button_pane_g4

0x322b,	// (0x0000322b) toolbar2_fixed_button_pane_g5

0x3233,	// (0x00003233) toolbar2_fixed_button_pane_g6

0x323b,	// (0x0000323b) toolbar2_fixed_button_pane_g7

0x3243,	// (0x00003243) toolbar2_fixed_button_pane_g8

0x324b,	// (0x0000324b) toolbar2_fixed_button_pane_g9

0x0008,

0xa05a,	// (0x0000a05a) toolbar2_fixed_button_pane_g

0x7749,	// (0x00007749) cell_toolbar2_float_pane_ParamLimits

0x7749,	// (0x00007749) cell_toolbar2_float_pane

0x775a,	// (0x0000775a) cell_toolbar2_float_pane_g1

0x7741,	// (0x00007741) toolbar2_fixed_button_pane_cp

0xc8ad,	// (0x0000c8ad) fep_vkb_accented_list_pane_ParamLimits

0xc8ad,	// (0x0000c8ad) fep_vkb_accented_list_pane

0x6435,	// (0x00006435) bg_popup_fep_shadow_pane_g9

0x22d6,	// (0x000022d6) bg_popup_fep_shadow_pane_cp3

0x1496,	// (0x00001496) list_accented_list_pane

0x7763,	// (0x00007763) list_single_accented_list_pane_ParamLimits

0x7763,	// (0x00007763) list_single_accented_list_pane

0x22d6,	// (0x000022d6) list_highlight_pane_cp10

0x7774,	// (0x00007774) list_single_accented_list_pane_t1

0xba61,	// (0x0000ba61) popup_slider_window_ParamLimits

0xba61,	// (0x0000ba61) popup_slider_window

0x7294,	// (0x00007294) aid_indentation_list_msg

0xcf82,	// (0x0000cf82) bg_popup_window_pane_cp19

0x7878,	// (0x00007878) popup_slider_window_g1

0x7894,	// (0x00007894) popup_slider_window_g2

0x78b0,	// (0x000078b0) popup_slider_window_g3

0x0005,

0xe4b2,	// (0x0000e4b2) popup_slider_window_g

0x790c,	// (0x0000790c) popup_slider_window_t1

0x797e,	// (0x0000797e) small_volume_slider_vertical_pane

0x5cc2,	// (0x00005cc2) small_volume_slider_vertical_pane_g1

0x5cc2,	// (0x00005cc2) small_volume_slider_vertical_pane_g2

0x799a,	// (0x0000799a) small_volume_slider_vertical_pane_g3

0x0002,

0xa4d2,	// (0x0000a4d2) small_volume_slider_vertical_pane_g

0xa783,	// (0x0000a783) area_side_right_pane_ParamLimits

0xa783,	// (0x0000a783) area_side_right_pane

0xd03a,	// (0x0000d03a) aid_size_side_button_ParamLimits

0xd03a,	// (0x0000d03a) aid_size_side_button

0xd053,	// (0x0000d053) grid_sctrl_middle_pane_ParamLimits

0xd053,	// (0x0000d053) grid_sctrl_middle_pane

0x79d3,	// (0x000079d3) sctrl_sk_bottom_pane

0x79e4,	// (0x000079e4) sctrl_sk_top_pane

0x79f6,	// (0x000079f6) aid_touch_sctrl_top

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane

0x7a03,	// (0x00007a03) sctrl_sk_top_pane_g1

0x7a10,	// (0x00007a10) sctrl_sk_top_pane_t1

0x79f6,	// (0x000079f6) aid_touch_sctrl_bottom

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp

0x7a2b,	// (0x00007a2b) sctrl_sk_bottom_pane_g1

0x7a10,	// (0x00007a10) sctrl_sk_bottom_pane_t1

0xd069,	// (0x0000d069) cell_sctrl_middle_pane_ParamLimits

0xd069,	// (0x0000d069) cell_sctrl_middle_pane

0xd07a,	// (0x0000d07a) aid_touch_sctrl_middle_ParamLimits

0xd07a,	// (0x0000d07a) aid_touch_sctrl_middle

0xd087,	// (0x0000d087) bg_sctrl_middle_pane_ParamLimits

0xd087,	// (0x0000d087) bg_sctrl_middle_pane

0x7af2,	// (0x00007af2) cell_sctrl_middle_pane_g1_ParamLimits

0x7af2,	// (0x00007af2) cell_sctrl_middle_pane_g1

0xd095,	// (0x0000d095) cell_sctrl_middle_pane_g2_ParamLimits

0xd095,	// (0x0000d095) cell_sctrl_middle_pane_g2

0x0001,

0xe4bf,	// (0x0000e4bf) cell_sctrl_middle_pane_g_ParamLimits

0xe4bf,	// (0x0000e4bf) cell_sctrl_middle_pane_g

0x320b,	// (0x0000320b) bg_sctrl_middle_pane_g1

0x3213,	// (0x00003213) bg_sctrl_middle_pane_g2

0x321b,	// (0x0000321b) bg_sctrl_middle_pane_g3

0x3223,	// (0x00003223) bg_sctrl_middle_pane_g4

0x322b,	// (0x0000322b) bg_sctrl_middle_pane_g5

0x3233,	// (0x00003233) bg_sctrl_middle_pane_g6

0x323b,	// (0x0000323b) bg_sctrl_middle_pane_g7

0x3243,	// (0x00003243) bg_sctrl_middle_pane_g8

0x0007,

0xa4e3,	// (0x0000a4e3) bg_sctrl_middle_pane_g

0x324b,	// (0x0000324b) bg_sctrl_middle_pane_g8_copy1

0x320b,	// (0x0000320b) bg_sctrl_sk_pane_g1

0x3213,	// (0x00003213) bg_sctrl_sk_pane_g2

0x321b,	// (0x0000321b) bg_sctrl_sk_pane_g3

0x0008,

0xa05a,	// (0x0000a05a) bg_sctrl_sk_pane_g

0x0bfb,	// (0x00000bfb) aid_size_touch_scroll_bar

0x3223,	// (0x00003223) bg_sctrl_sk_pane_g4

0x322b,	// (0x0000322b) bg_sctrl_sk_pane_g5

0x3233,	// (0x00003233) bg_sctrl_sk_pane_g6

0x323b,	// (0x0000323b) bg_sctrl_sk_pane_g7

0x3243,	// (0x00003243) bg_sctrl_sk_pane_g8

0x324b,	// (0x0000324b) bg_sctrl_sk_pane_g9

0x28db,	// (0x000028db) popup_fep_china_hwr2_fs_candidate_window

0xb65c,	// (0x0000b65c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb65c,	// (0x0000b65c) popup_fep_china_hwr2_fs_control_window

0x6102,	// (0x00006102) sctrl_sk_top_pane_g2

0x0001,

0xa4d9,	// (0x0000a4d9) sctrl_sk_top_pane_g

0xd0a2,	// (0x0000d0a2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd0a2,	// (0x0000d0a2) aid_fep_china_hwr2_fs_cell

0xd0b6,	// (0x0000d0b6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd0b6,	// (0x0000d0b6) bg_popup_fep_shadow_pane_cp4

0xd0cd,	// (0x0000d0cd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd0cd,	// (0x0000d0cd) bg_popup_fep_shadow_pane_cp5

0xd0df,	// (0x0000d0df) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd0df,	// (0x0000d0df) popup_fep_china_hwr2_fs_control_bar_grid

0xd0f3,	// (0x0000d0f3) popup_fep_china_hwr2_fs_control_funtion_grid

0x7ac8,	// (0x00007ac8) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7ad2,	// (0x00007ad2) popup_fep_china_hwr2_fs_candidate_grid

0xd0fb,	// (0x0000d0fb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd0fb,	// (0x0000d0fb) cell_fep_china_hwr2_fs_funtion_grid

0x5cc2,	// (0x00005cc2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7af2,	// (0x00007af2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7af2,	// (0x00007af2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7b00,	// (0x00007b00) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7b00,	// (0x00007b00) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xa4f4,	// (0x0000a4f4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xa4f4,	// (0x0000a4f4) cell_fep_china_hwr2_fs_funtion_grid_g

0xd113,	// (0x0000d113) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd113,	// (0x0000d113) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd128,	// (0x0000d128) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd128,	// (0x0000d128) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xe4c4,	// (0x0000e4c4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xe4c4,	// (0x0000e4c4) cell_fep_china_hwr2_fs_funtion_grid_t

0x7b47,	// (0x00007b47) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7b4f,	// (0x00007b4f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7b57,	// (0x00007b57) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xa4fe,	// (0x0000a4fe) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7b5f,	// (0x00007b5f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7b5f,	// (0x00007b5f) cell_fep_china_hwr2_fs_candidate_grid

0x7b78,	// (0x00007b78) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7b80,	// (0x00007b80) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5cc2,	// (0x00005cc2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5cc2,	// (0x00005cc2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa32a,	// (0x0000a32a) cell_fep_china_hwr2_fs_candidate_grid_g

0x7b88,	// (0x00007b88) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2db8,	// (0x00002db8) clock_nsta_pane_cp_24_ParamLimits

0x2db8,	// (0x00002db8) clock_nsta_pane_cp_24

0x2e2b,	// (0x00002e2b) indicator_nsta_pane_cp_24_ParamLimits

0x2e2b,	// (0x00002e2b) indicator_nsta_pane_cp_24

0x411f,	// (0x0000411f) heading_pane_g1

0x0001,

0xa0bf,	// (0x0000a0bf) heading_pane_g

0xc5c3,	// (0x0000c5c3) grid_sct_catagory_button_pane

0x4c6c,	// (0x00004c6c) scroll_pane_cp5_ParamLimits

0x5927,	// (0x00005927) button_value_adjust_pane_cp5_ParamLimits

0x5927,	// (0x00005927) button_value_adjust_pane_cp5

0x5a1d,	// (0x00005a1d) form2_midp_time_pane_ParamLimits

0x7b96,	// (0x00007b96) cell_sct_catagory_button_pane_ParamLimits

0x7b96,	// (0x00007b96) cell_sct_catagory_button_pane

0x5c87,	// (0x00005c87) bg_button_pane_cp01_ParamLimits

0x5c87,	// (0x00005c87) bg_button_pane_cp01

0x5cc2,	// (0x00005cc2) cell_sct_catagory_button_pane_g1

0xbad0,	// (0x0000bad0) popup_tb_extension_window

0xd144,	// (0x0000d144) aid_size_cell_ext_ParamLimits

0xd144,	// (0x0000d144) aid_size_cell_ext

0x0ad9,	// (0x00000ad9) bg_tb_trans_pane_cp1_ParamLimits

0x0ad9,	// (0x00000ad9) bg_tb_trans_pane_cp1

0xd16a,	// (0x0000d16a) grid_tb_ext_pane_ParamLimits

0xd16a,	// (0x0000d16a) grid_tb_ext_pane

0xd1a0,	// (0x0000d1a0) cell_tb_ext_pane_ParamLimits

0xd1a0,	// (0x0000d1a0) cell_tb_ext_pane

0xd1c4,	// (0x0000d1c4) cell_tb_ext_pane_g1_ParamLimits

0xd1c4,	// (0x0000d1c4) cell_tb_ext_pane_g1

0x7c20,	// (0x00007c20) cell_tb_ext_pane_t1

0x07a5,	// (0x000007a5) list_highlight_pane_cp11_ParamLimits

0x07a5,	// (0x000007a5) list_highlight_pane_cp11

0x02f7,	// (0x000002f7) popup_uni_indicator_window_ParamLimits

0x02f7,	// (0x000002f7) popup_uni_indicator_window

0x11e8,	// (0x000011e8) bg_popup_sub_pane_cp14

0x7c3b,	// (0x00007c3b) list_uniindi_pane

0x7c47,	// (0x00007c47) uniindi_top_pane

0x07a5,	// (0x000007a5) bg_uniindi_top_pane

0x7c66,	// (0x00007c66) uniindi_top_pane_g1

0x7c7c,	// (0x00007c7c) uniindi_top_pane_g2

0x0003,

0xa505,	// (0x0000a505) uniindi_top_pane_g

0x7ca6,	// (0x00007ca6) uniindi_top_pane_t1

0x7cd0,	// (0x00007cd0) list_single_uniindi_pane_ParamLimits

0x7cd0,	// (0x00007cd0) list_single_uniindi_pane

0x5cc2,	// (0x00005cc2) bg_uniindi_top_pane_g1

0x7ce2,	// (0x00007ce2) list_single_uniindi_pane_g1

0x7cf5,	// (0x00007cf5) list_single_uniindi_pane_t1

0x0020,	// (0x00000020) control_bg_pane

0x7d1a,	// (0x00007d1a) bg_sctrl_sk_pane_cp1

0x7d23,	// (0x00007d23) bg_sctrl_sk_pane_cp2

0x7d2c,	// (0x00007d2c) control_bg_pane_g1

0x7d35,	// (0x00007d35) control_bg_pane_g2

0x0001,

0xa50e,	// (0x0000a50e) control_bg_pane_g

0x572d,	// (0x0000572d) cell_indicator_nsta_pane_g1_ParamLimits

0xc6ce,	// (0x0000c6ce) cell_indicator_nsta_pane_g2_ParamLimits

0xe43c,	// (0x0000e43c) cell_indicator_nsta_pane_g_ParamLimits

0x5aa1,	// (0x00005aa1) form2_midp_time_pane_t1_ParamLimits

0x5d1d,	// (0x00005d1d) main_idle_act4_pane_ParamLimits

0x5d1d,	// (0x00005d1d) main_idle_act4_pane

0xbad0,	// (0x0000bad0) popup_tb_extension_window_ParamLimits

0xd18a,	// (0x0000d18a) tb_ext_find_pane_ParamLimits

0xd18a,	// (0x0000d18a) tb_ext_find_pane

0x7d3e,	// (0x00007d3e) ai_gene_pane_1_cp1

0x240f,	// (0x0000240f) ai_gene_pane_2_cp1

0x7d46,	// (0x00007d46) list_single_idle_plugin_calendar_pane

0x7d4f,	// (0x00007d4f) list_single_idle_plugin_notification_pane

0x7d58,	// (0x00007d58) list_single_idle_plugin_player_pane

0xd1e1,	// (0x0000d1e1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd1e1,	// (0x0000d1e1) list_single_idle_plugin_shortcut_pane

0xd209,	// (0x0000d209) main_idle_act4_pane_t1

0xd21f,	// (0x0000d21f) main_idle_act4_pane_t2

0x0001,

0xe4c9,	// (0x0000e4c9) main_idle_act4_pane_t

0xd235,	// (0x0000d235) middle_sk_idle_act4_pane_ParamLimits

0xd235,	// (0x0000d235) middle_sk_idle_act4_pane

0xd251,	// (0x0000d251) popup_clock_digital_analogue_window_cp2

0xd277,	// (0x0000d277) shortcut_wheel_idle_act4_pane_ParamLimits

0xd277,	// (0x0000d277) shortcut_wheel_idle_act4_pane

0x5cc2,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g1

0x5cc2,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g2

0x5cc2,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g3

0x5cc2,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g4

0x5cc2,	// (0x00005cc2) shortcut_wheel_idle_act4_pane_g5

0x7deb,	// (0x00007deb) shortcut_wheel_idle_act4_pane_g6

0x7df3,	// (0x00007df3) shortcut_wheel_idle_act4_pane_g7

0x7dfb,	// (0x00007dfb) shortcut_wheel_idle_act4_pane_g8

0x7e03,	// (0x00007e03) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xa518,	// (0x0000a518) shortcut_wheel_idle_act4_pane_g

0x5dcc,	// (0x00005dcc) middle_sk_idle_act4_pane_g1_ParamLimits

0x5dcc,	// (0x00005dcc) middle_sk_idle_act4_pane_g1

0xd2f2,	// (0x0000d2f2) middle_sk_idle_act4_pane_g2_ParamLimits

0xd2f2,	// (0x0000d2f2) middle_sk_idle_act4_pane_g2

0x0001,

0xe4de,	// (0x0000e4de) middle_sk_idle_act4_pane_g_ParamLimits

0xe4de,	// (0x0000e4de) middle_sk_idle_act4_pane_g

0xd30a,	// (0x0000d30a) middle_sk_idle_act4_pane_t1_ParamLimits

0xd30a,	// (0x0000d30a) middle_sk_idle_act4_pane_t1

0xd339,	// (0x0000d339) grid_ai_shortcut_pane_ParamLimits

0xd339,	// (0x0000d339) grid_ai_shortcut_pane

0xd356,	// (0x0000d356) list_highlight_pane_cp16_ParamLimits

0xd356,	// (0x0000d356) list_highlight_pane_cp16

0xd363,	// (0x0000d363) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd363,	// (0x0000d363) list_single_idle_plugin_shortcut_pane_g1

0xd36f,	// (0x0000d36f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd36f,	// (0x0000d36f) list_single_idle_plugin_shortcut_pane_g2

0xd38b,	// (0x0000d38b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd38b,	// (0x0000d38b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xe4e3,	// (0x0000e4e3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xe4e3,	// (0x0000e4e3) list_single_idle_plugin_shortcut_pane_g

0xd3a0,	// (0x0000d3a0) cell_ai_shortcut_pane_ParamLimits

0xd3a0,	// (0x0000d3a0) cell_ai_shortcut_pane

0xd3b6,	// (0x0000d3b6) cell_ai_shortcut_pane_g1_ParamLimits

0xd3b6,	// (0x0000d3b6) cell_ai_shortcut_pane_g1

0x7d3e,	// (0x00007d3e) ai_gene_pane_1_cp2

0x7f30,	// (0x00007f30) ai_gene_pane_2_cp2

0x7f38,	// (0x00007f38) list_highlight_pane_cp15

0x7f41,	// (0x00007f41) list_single_idle_plugin_calendar_pane_g1

0x7f38,	// (0x00007f38) list_highlight_pane_cp17

0x7f49,	// (0x00007f49) list_single_idle_plugin_calendar_pane_g1_copy1

0x7f51,	// (0x00007f51) list_single_idle_plugin_player_pane_g1

0x4ef2,	// (0x00004ef2) list_single_idle_plugin_player_pane_g2

0x0001,

0xa547,	// (0x0000a547) list_single_idle_plugin_player_pane_g

0x7f59,	// (0x00007f59) list_single_idle_plugin_player_pane_t1

0x7f67,	// (0x00007f67) list_single_idle_plugin_player_pane_t2

0x7f75,	// (0x00007f75) list_single_idle_plugin_player_pane_t3

0x7f83,	// (0x00007f83) list_single_idle_plugin_player_pane_t4

0x0003,

0xa54c,	// (0x0000a54c) list_single_idle_plugin_player_pane_t

0x7f91,	// (0x00007f91) wait_bar_pane_cp15

0x7f99,	// (0x00007f99) grid_ai_notification_pane

0x4ef2,	// (0x00004ef2) list_single_idle_plugin_notification_pane_g1

0xd3d8,	// (0x0000d3d8) cell_ai_notification_pane_ParamLimits

0xd3d8,	// (0x0000d3d8) cell_ai_notification_pane

0x7faf,	// (0x00007faf) cell_ai_notification_pane_g1

0x7fb7,	// (0x00007fb7) cell_ai_notification_pane_t1

0xd3e5,	// (0x0000d3e5) tb_ext_find_button_pane

0xd3ed,	// (0x0000d3ed) tb_ext_find_pane_g1

0xd3f5,	// (0x0000d3f5) tb_ext_find_pane_t1

0x1b09,	// (0x00001b09) tb_ext_find_button_pane_g1

0x7fe3,	// (0x00007fe3) tb_ext_find_button_pane_g2

0x0001,

0xa555,	// (0x0000a555) tb_ext_find_button_pane_g

0xd209,	// (0x0000d209) main_idle_act4_pane_t1_ParamLimits

0xd21f,	// (0x0000d21f) main_idle_act4_pane_t2_ParamLimits

0xe4c9,	// (0x0000e4c9) main_idle_act4_pane_t_ParamLimits

0xd251,	// (0x0000d251) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd267,	// (0x0000d267) sat_plugin_idle_act4_pane_ParamLimits

0xd267,	// (0x0000d267) sat_plugin_idle_act4_pane

0xd403,	// (0x0000d403) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd403,	// (0x0000d403) sat_plugin_idle_act4_pane_t1

0xd41b,	// (0x0000d41b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd41b,	// (0x0000d41b) sat_plugin_idle_act4_pane_t2

0xd433,	// (0x0000d433) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd433,	// (0x0000d433) sat_plugin_idle_act4_pane_t3

0xd44b,	// (0x0000d44b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd44b,	// (0x0000d44b) sat_plugin_idle_act4_pane_t4

0x0003,

0xe4ea,	// (0x0000e4ea) sat_plugin_idle_act4_pane_t_ParamLimits

0xe4ea,	// (0x0000e4ea) sat_plugin_idle_act4_pane_t

0x0258,	// (0x00000258) popup_battery_window_ParamLimits

0x0258,	// (0x00000258) popup_battery_window

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25_ParamLimits

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25

0x8038,	// (0x00008038) popup_battery_window_g1_ParamLimits

0x8038,	// (0x00008038) popup_battery_window_g1

0x8044,	// (0x00008044) popup_battery_window_t1_ParamLimits

0x8044,	// (0x00008044) popup_battery_window_t1

0x8056,	// (0x00008056) popup_battery_window_t2_ParamLimits

0x8056,	// (0x00008056) popup_battery_window_t2

0x0001,

0xa563,	// (0x0000a563) popup_battery_window_t_ParamLimits

0xa563,	// (0x0000a563) popup_battery_window_t

0xb3c7,	// (0x0000b3c7) midp_canvas_pane_ParamLimits

0xb41c,	// (0x0000b41c) midp_keypad_pane_ParamLimits

0xb41c,	// (0x0000b41c) midp_keypad_pane

0x283d,	// (0x0000283d) main_midp_pane_ParamLimits

0x57b8,	// (0x000057b8) signal_pane_g2_cp_ParamLimits

0xd463,	// (0x0000d463) aid_size_cell_midp_keypad_ParamLimits

0xd463,	// (0x0000d463) aid_size_cell_midp_keypad

0xd481,	// (0x0000d481) midp_keyp_game_grid_pane_ParamLimits

0xd481,	// (0x0000d481) midp_keyp_game_grid_pane

0xd4a0,	// (0x0000d4a0) midp_keyp_rocker_pane_ParamLimits

0xd4a0,	// (0x0000d4a0) midp_keyp_rocker_pane

0xd4e1,	// (0x0000d4e1) midp_keyp_sk_left_pane_ParamLimits

0xd4e1,	// (0x0000d4e1) midp_keyp_sk_left_pane

0xd533,	// (0x0000d533) midp_keyp_sk_right_pane_ParamLimits

0xd533,	// (0x0000d533) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xd57f,	// (0x0000d57f) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xd57f,	// (0x0000d57f) midp_keyp_sk_right_pane_g1

0x5cc2,	// (0x00005cc2) midp_keyp_rocker_pane_g1

0xd588,	// (0x0000d588) keyp_game_cell_pane_ParamLimits

0xd588,	// (0x0000d588) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xd5aa,	// (0x0000d5aa) keyp_game_cell_pane_g1

0xa7c5,	// (0x0000a7c5) popup_fep_vkb2_window_ParamLimits

0xa7c5,	// (0x0000a7c5) popup_fep_vkb2_window

0xd5b3,	// (0x0000d5b3) aid_size_cell_vkb2_ParamLimits

0xd5b3,	// (0x0000d5b3) aid_size_cell_vkb2

0xd5e9,	// (0x0000d5e9) popup_fep_vkb2_window_g1_ParamLimits

0xd5e9,	// (0x0000d5e9) popup_fep_vkb2_window_g1

0xd639,	// (0x0000d639) vkb2_area_bottom_pane_ParamLimits

0xd639,	// (0x0000d639) vkb2_area_bottom_pane

0xd677,	// (0x0000d677) vkb2_area_keypad_pane_ParamLimits

0xd677,	// (0x0000d677) vkb2_area_keypad_pane

0xd6b5,	// (0x0000d6b5) vkb2_area_top_pane_ParamLimits

0xd6b5,	// (0x0000d6b5) vkb2_area_top_pane

0xd731,	// (0x0000d731) vkb2_top_entry_pane_ParamLimits

0xd731,	// (0x0000d731) vkb2_top_entry_pane

0xd75e,	// (0x0000d75e) vkb2_top_grid_left_pane_ParamLimits

0xd75e,	// (0x0000d75e) vkb2_top_grid_left_pane

0xd77e,	// (0x0000d77e) vkb2_top_grid_right_pane_ParamLimits

0xd77e,	// (0x0000d77e) vkb2_top_grid_right_pane

0x8391,	// (0x00008391) vkb2_cell_keypad_pane_ParamLimits

0x8391,	// (0x00008391) vkb2_cell_keypad_pane

0xd7c4,	// (0x0000d7c4) vkb2_area_bottom_grid_pane_ParamLimits

0xd7c4,	// (0x0000d7c4) vkb2_area_bottom_grid_pane

0xd7ea,	// (0x0000d7ea) vkb2_area_bottom_pane_g1_ParamLimits

0xd7ea,	// (0x0000d7ea) vkb2_area_bottom_pane_g1

0xd810,	// (0x0000d810) vkb2_area_bottom_pane_g2_ParamLimits

0xd810,	// (0x0000d810) vkb2_area_bottom_pane_g2

0xd841,	// (0x0000d841) vkb2_area_bottom_pane_g3_ParamLimits

0xd841,	// (0x0000d841) vkb2_area_bottom_pane_g3

0x0002,

0xe4f3,	// (0x0000e4f3) vkb2_area_bottom_pane_g_ParamLimits

0xe4f3,	// (0x0000e4f3) vkb2_area_bottom_pane_g

0x8509,	// (0x00008509) vkb2_top_cell_left_pane_ParamLimits

0x8509,	// (0x00008509) vkb2_top_cell_left_pane

0xd897,	// (0x0000d897) vkb2_top_entry_pane_g1_ParamLimits

0xd897,	// (0x0000d897) vkb2_top_entry_pane_g1

0xd8a5,	// (0x0000d8a5) vkb2_top_entry_pane_t1_ParamLimits

0xd8a5,	// (0x0000d8a5) vkb2_top_entry_pane_t1

0x8571,	// (0x00008571) vkb2_top_entry_pane_t2_ParamLimits

0x8571,	// (0x00008571) vkb2_top_entry_pane_t2

0x85a3,	// (0x000085a3) vkb2_top_entry_pane_t3_ParamLimits

0x85a3,	// (0x000085a3) vkb2_top_entry_pane_t3

0x0002,

0xe4fa,	// (0x0000e4fa) vkb2_top_entry_pane_t_ParamLimits

0xe4fa,	// (0x0000e4fa) vkb2_top_entry_pane_t

0xd8de,	// (0x0000d8de) vkb2_top_grid_right_pane_g1_ParamLimits

0xd8de,	// (0x0000d8de) vkb2_top_grid_right_pane_g1

0x85fc,	// (0x000085fc) vkb2_top_grid_right_pane_g2_ParamLimits

0x85fc,	// (0x000085fc) vkb2_top_grid_right_pane_g2

0x8614,	// (0x00008614) vkb2_top_grid_right_pane_g3_ParamLimits

0x8614,	// (0x00008614) vkb2_top_grid_right_pane_g3

0xd8f4,	// (0x0000d8f4) vkb2_top_grid_right_pane_g4_ParamLimits

0xd8f4,	// (0x0000d8f4) vkb2_top_grid_right_pane_g4

0x0003,

0xe501,	// (0x0000e501) vkb2_top_grid_right_pane_g_ParamLimits

0xe501,	// (0x0000e501) vkb2_top_grid_right_pane_g

0x8642,	// (0x00008642) vkb2_top_cell_left_pane_g1

0x8659,	// (0x00008659) vkb2_cell_keypad_pane_g1_ParamLimits

0x8659,	// (0x00008659) vkb2_cell_keypad_pane_g1

0x8667,	// (0x00008667) vkb2_cell_keypad_pane_t1_ParamLimits

0x8667,	// (0x00008667) vkb2_cell_keypad_pane_t1

0x867e,	// (0x0000867e) vkb2_cell_bottom_grid_pane_ParamLimits

0x867e,	// (0x0000867e) vkb2_cell_bottom_grid_pane

0x86b7,	// (0x000086b7) vkb2_cell_bottom_grid_pane_g1

0xd296,	// (0x0000d296) aid_call2_pane_cp02

0xd29e,	// (0x0000d29e) aid_call_pane_cp02

0xd2a6,	// (0x0000d2a6) clock_digital_number_pane_cp10

0xd2ae,	// (0x0000d2ae) clock_digital_number_pane_cp11

0xd2b6,	// (0x0000d2b6) clock_digital_number_pane_cp12

0xd2be,	// (0x0000d2be) clock_digital_number_pane_cp13

0xd2c6,	// (0x0000d2c6) clock_digital_separator_pane_cp10

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g1

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g2

0xd2ce,	// (0x0000d2ce) popup_clock_digital_analogue_window_cp2_g3

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g4

0xd2ce,	// (0x0000d2ce) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xe4ce,	// (0x0000e4ce) popup_clock_digital_analogue_window_cp2_g

0xd2d6,	// (0x0000d2d6) popup_clock_digital_analogue_window_cp2_t1

0xd2e4,	// (0x0000d2e4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xe4d9,	// (0x0000e4d9) popup_clock_digital_analogue_window_cp2_t

0x5cc2,	// (0x00005cc2) clock_digital_number_pane_cp10_g1

0x5cc2,	// (0x00005cc2) clock_digital_number_pane_cp10_g2

0x0001,

0xa32a,	// (0x0000a32a) clock_digital_number_pane_cp10_g

0x5cc2,	// (0x00005cc2) clock_digital_separator_pane_cp10_g1

0x5cc2,	// (0x00005cc2) clock_digital_separator_pane_cp10_g2

0x0001,

0xa32a,	// (0x0000a32a) clock_digital_separator_pane_cp10_g

0x7c88,	// (0x00007c88) uniindi_top_pane_g3

0x7c99,	// (0x00007c99) uniindi_top_pane_g4

0x83fc,	// (0x000083fc) vkb2_row_keypad_pane_ParamLimits

0x83fc,	// (0x000083fc) vkb2_row_keypad_pane

0x86d3,	// (0x000086d3) vkb2_cell_t_keypad_pane_ParamLimits

0x86d3,	// (0x000086d3) vkb2_cell_t_keypad_pane

0x86e0,	// (0x000086e0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x86e0,	// (0x000086e0) vkb2_cell_t_keypad_pane_cp08

0x86f0,	// (0x000086f0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x86f0,	// (0x000086f0) vkb2_cell_t_keypad_pane_cp09

0x8701,	// (0x00008701) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8701,	// (0x00008701) vkb2_cell_t_keypad_pane_cp01

0x8711,	// (0x00008711) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8711,	// (0x00008711) vkb2_cell_t_keypad_pane_cp02

0x8721,	// (0x00008721) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8721,	// (0x00008721) vkb2_cell_t_keypad_pane_cp03

0x8731,	// (0x00008731) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8731,	// (0x00008731) vkb2_cell_t_keypad_pane_cp04

0x8741,	// (0x00008741) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8741,	// (0x00008741) vkb2_cell_t_keypad_pane_cp05

0x8751,	// (0x00008751) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8751,	// (0x00008751) vkb2_cell_t_keypad_pane_cp06

0x8761,	// (0x00008761) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8761,	// (0x00008761) vkb2_cell_t_keypad_pane_cp07

0x8771,	// (0x00008771) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8771,	// (0x00008771) vkb2_cell_t_keypad_pane_cp10

0x6102,	// (0x00006102) vkb2_cell_t_keypad_pane_g1

0x8786,	// (0x00008786) vkb2_cell_t_keypad_pane_t1

0x0020,	// (0x00000020) popup_grid_graphic2_window

0xd90a,	// (0x0000d90a) aid_size_cell_graphic2_ParamLimits

0xd90a,	// (0x0000d90a) aid_size_cell_graphic2

0x39b2,	// (0x000039b2) bg_popup_window_pane_cp21_ParamLimits

0x39b2,	// (0x000039b2) bg_popup_window_pane_cp21

0xd93c,	// (0x0000d93c) graphic2_pages_pane_ParamLimits

0xd93c,	// (0x0000d93c) graphic2_pages_pane

0xd985,	// (0x0000d985) grid_graphic2_control_pane_ParamLimits

0xd985,	// (0x0000d985) grid_graphic2_control_pane

0xd9b3,	// (0x0000d9b3) grid_graphic2_pane_ParamLimits

0xd9b3,	// (0x0000d9b3) grid_graphic2_pane

0xda12,	// (0x0000da12) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x7453,	// (0x00007453) list_ai3_gene_pane_ParamLimits

0xcf82,	// (0x0000cf82) bg_popup_window_pane_cp19_ParamLimits

0x7820,	// (0x00007820) bg_touch_area_indi_pane_ParamLimits

0x7820,	// (0x00007820) bg_touch_area_indi_pane

0x7836,	// (0x00007836) bg_touch_area_indi_pane_cp01_ParamLimits

0x7836,	// (0x00007836) bg_touch_area_indi_pane_cp01

0x784c,	// (0x0000784c) bg_touch_area_indi_pane_cp02_ParamLimits

0x784c,	// (0x0000784c) bg_touch_area_indi_pane_cp02

0x7862,	// (0x00007862) bg_touch_area_indi_pane_cp03_ParamLimits

0x7862,	// (0x00007862) bg_touch_area_indi_pane_cp03

0x7878,	// (0x00007878) popup_slider_window_g1_ParamLimits

0x7894,	// (0x00007894) popup_slider_window_g2_ParamLimits

0x78b0,	// (0x000078b0) popup_slider_window_g3_ParamLimits

0xe4b2,	// (0x0000e4b2) popup_slider_window_g_ParamLimits

0x790c,	// (0x0000790c) popup_slider_window_t1_ParamLimits

0x797e,	// (0x0000797e) small_volume_slider_vertical_pane_ParamLimits

0xda12,	// (0x0000da12) cell_graphic2_pane_ParamLimits

0xda5b,	// (0x0000da5b) bg_button_pane_cp10_ParamLimits

0xda5b,	// (0x0000da5b) bg_button_pane_cp10

0xda6c,	// (0x0000da6c) bg_button_pane_cp11_ParamLimits

0xda6c,	// (0x0000da6c) bg_button_pane_cp11

0xda7d,	// (0x0000da7d) graphic2_pages_pane_g1_ParamLimits

0xda7d,	// (0x0000da7d) graphic2_pages_pane_g1

0xda98,	// (0x0000da98) graphic2_pages_pane_g2_ParamLimits

0xda98,	// (0x0000da98) graphic2_pages_pane_g2

0x0001,

0xe50f,	// (0x0000e50f) graphic2_pages_pane_g_ParamLimits

0xe50f,	// (0x0000e50f) graphic2_pages_pane_g

0xdab0,	// (0x0000dab0) graphic2_pages_pane_t1_ParamLimits

0xdab0,	// (0x0000dab0) graphic2_pages_pane_t1

0xdac8,	// (0x0000dac8) cell_graphic2_control_pane_ParamLimits

0xdac8,	// (0x0000dac8) cell_graphic2_control_pane

0xdae2,	// (0x0000dae2) cell_graphic2_pane_g1_ParamLimits

0xdae2,	// (0x0000dae2) cell_graphic2_pane_g1

0x5f5f,	// (0x00005f5f) cell_graphic2_pane_g2_ParamLimits

0x5f5f,	// (0x00005f5f) cell_graphic2_pane_g2

0xdaef,	// (0x0000daef) cell_graphic2_pane_g3_ParamLimits

0xdaef,	// (0x0000daef) cell_graphic2_pane_g3

0x5f6c,	// (0x00005f6c) cell_graphic2_pane_g4_ParamLimits

0x5f6c,	// (0x00005f6c) cell_graphic2_pane_g4

0xdafc,	// (0x0000dafc) cell_graphic2_pane_g5_ParamLimits

0xdafc,	// (0x0000dafc) cell_graphic2_pane_g5

0x0004,

0xe514,	// (0x0000e514) cell_graphic2_pane_g_ParamLimits

0xe514,	// (0x0000e514) cell_graphic2_pane_g

0xdb1c,	// (0x0000db1c) cell_graphic2_pane_t1_ParamLimits

0xdb1c,	// (0x0000db1c) cell_graphic2_pane_t1

0x4113,	// (0x00004113) grid_highlight_pane_cp11_ParamLimits

0x4113,	// (0x00004113) grid_highlight_pane_cp11

0x11e8,	// (0x000011e8) bg_button_pane_cp05

0xdb51,	// (0x0000db51) cell_graphic2_control_pane_g1

0x5cc2,	// (0x00005cc2) bg_touch_area_indi_pane_g1

0x89b3,	// (0x000089b3) aid_cmod_rocker_key_size

0x89bd,	// (0x000089bd) aid_cmode_itu_key_size

0x89c7,	// (0x000089c7) main_cmode_video_pane

0x89cf,	// (0x000089cf) main_comp_mode_itu_pane

0x89d9,	// (0x000089d9) main_comp_mode_rocker_pane

0x89e1,	// (0x000089e1) cell_cmode_rocker_pane_ParamLimits

0x89e1,	// (0x000089e1) cell_cmode_rocker_pane

0x89f3,	// (0x000089f3) cell_cmode_itu_pane_ParamLimits

0x89f3,	// (0x000089f3) cell_cmode_itu_pane

0x11e8,	// (0x000011e8) bg_button_pane_cp06_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane_cp06

0x6102,	// (0x00006102) cell_cmode_rocker_pane_g1_ParamLimits

0x6102,	// (0x00006102) cell_cmode_rocker_pane_g1

0x7af2,	// (0x00007af2) cell_cmode_rocker_pane_g2_ParamLimits

0x7af2,	// (0x00007af2) cell_cmode_rocker_pane_g2

0x0001,

0xa599,	// (0x0000a599) cell_cmode_rocker_pane_g_ParamLimits

0xa599,	// (0x0000a599) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x8a08,	// (0x00008a08) cell_cmode_itu_pane_g1

0x8a11,	// (0x00008a11) cell_cmode_itu_pane_t1

0x8a1f,	// (0x00008a1f) cell_cmode_itu_pane_t2

0x0001,

0xa59e,	// (0x0000a59e) cell_cmode_itu_pane_t

0x7d0a,	// (0x00007d0a) aid_touch_ctrl_left

0x7d12,	// (0x00007d12) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xdb5e,	// (0x0000db5e) aid_cmod_rocker_key_size_cp

0xdb68,	// (0x0000db68) aid_cmode_itu_key_size_cp

0x8a41,	// (0x00008a41) compa_mode_pane_g1

0x8a49,	// (0x00008a49) compa_mode_pane_g2

0x8a51,	// (0x00008a51) compa_mode_pane_g3

0x0002,

0xa5a3,	// (0x0000a5a3) compa_mode_pane_g

0xdb72,	// (0x0000db72) main_comp_mode_itu_pane_cp

0xdb7c,	// (0x0000db7c) main_comp_mode_rocker_pane_cp

0xdb86,	// (0x0000db86) cell_cmode_itu_pane_cp_ParamLimits

0xdb86,	// (0x0000db86) cell_cmode_itu_pane_cp

0xdb9b,	// (0x0000db9b) cell_cmode_rocker_pane_cp_ParamLimits

0xdb9b,	// (0x0000db9b) cell_cmode_rocker_pane_cp

0x11e8,	// (0x000011e8) bg_button_pane_cp06_cp_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane_cp06_cp

0x6102,	// (0x00006102) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6102,	// (0x00006102) cell_cmode_rocker_pane_g1_cp

0x5cc2,	// (0x00005cc2) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xdbad,	// (0x0000dbad) cell_cmode_itu_pane_g1_cp

0xdbb6,	// (0x0000dbb6) cell_cmode_itu_pane_t1_cp

0xdbc4,	// (0x0000dbc4) cell_cmode_itu_pane_t2_cp

0xc49c,	// (0x0000c49c) settings_code_pane_cp2

0x0474,	// (0x00000474) bg_popup_window_pane_cp3_ParamLimits

0x097d,	// (0x0000097d) heading_pane_cp3_ParamLimits

0x0989,	// (0x00000989) listscroll_popup_graphic_pane_ParamLimits

0x5d2b,	// (0x00005d2b) fep_hwr_aid_pane_ParamLimits

0x79f6,	// (0x000079f6) aid_touch_sctrl_top_ParamLimits

0x7a03,	// (0x00007a03) sctrl_sk_top_pane_g1_ParamLimits

0x6102,	// (0x00006102) sctrl_sk_top_pane_g2_ParamLimits

0xa4d9,	// (0x0000a4d9) sctrl_sk_top_pane_g_ParamLimits

0x7a10,	// (0x00007a10) sctrl_sk_top_pane_t1_ParamLimits

0x79f6,	// (0x000079f6) aid_touch_sctrl_bottom_ParamLimits

0x7a10,	// (0x00007a10) sctrl_sk_bottom_pane_t1_ParamLimits

0x7c54,	// (0x00007c54) aid_area_touch_clock

0xd6f3,	// (0x0000d6f3) aid_vkb2_area_top_pane_cell_ParamLimits

0xd6f3,	// (0x0000d6f3) aid_vkb2_area_top_pane_cell

0xd79e,	// (0x0000d79e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd79e,	// (0x0000d79e) aid_vkb2_area_bottom_pane_cell

0x8529,	// (0x00008529) popup_char_count_window

0x8ab5,	// (0x00008ab5) popup_char_count_window_g1

0x8abe,	// (0x00008abe) popup_char_count_window_g2

0x8ac7,	// (0x00008ac7) popup_char_count_window_g3

0x0002,

0xa5aa,	// (0x0000a5aa) popup_char_count_window_g

0x8ad0,	// (0x00008ad0) popup_char_count_window_t1

0x81e1,	// (0x000081e1) popup_fep_char_preview_window_ParamLimits

0x81e1,	// (0x000081e1) popup_fep_char_preview_window

0xd713,	// (0x0000d713) vkb2_top_candi_pane_ParamLimits

0xd713,	// (0x0000d713) vkb2_top_candi_pane

0xdbd2,	// (0x0000dbd2) cell_vkb2_top_candi_pane_ParamLimits

0xdbd2,	// (0x0000dbd2) cell_vkb2_top_candi_pane

0x39b2,	// (0x000039b2) bg_popup_fep_char_preview_window_ParamLimits

0x39b2,	// (0x000039b2) bg_popup_fep_char_preview_window

0x8b17,	// (0x00008b17) popup_fep_char_preview_window_t1_ParamLimits

0x8b17,	// (0x00008b17) popup_fep_char_preview_window_t1

0x8b51,	// (0x00008b51) bg_popup_fep_char_preview_window_g1

0x8b59,	// (0x00008b59) bg_popup_fep_char_preview_window_g2

0x8b61,	// (0x00008b61) bg_popup_fep_char_preview_window_g3

0x8b69,	// (0x00008b69) bg_popup_fep_char_preview_window_g4

0x8b71,	// (0x00008b71) bg_popup_fep_char_preview_window_g5

0x8b79,	// (0x00008b79) bg_popup_fep_char_preview_window_g6

0x8b81,	// (0x00008b81) bg_popup_fep_char_preview_window_g7

0x8b89,	// (0x00008b89) bg_popup_fep_char_preview_window_g8

0x8b91,	// (0x00008b91) bg_popup_fep_char_preview_window_g9

0x0008,

0xa5b1,	// (0x0000a5b1) bg_popup_fep_char_preview_window_g

0x6102,	// (0x00006102) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6102,	// (0x00006102) cell_vkb2_top_candi_pane_g1

0x6459,	// (0x00006459) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6459,	// (0x00006459) cell_vkb2_top_candi_pane_g2

0x647a,	// (0x0000647a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x647a,	// (0x0000647a) cell_vkb2_top_candi_pane_g3

0x8b99,	// (0x00008b99) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8b99,	// (0x00008b99) cell_vkb2_top_candi_pane_g4

0x8bba,	// (0x00008bba) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8bba,	// (0x00008bba) cell_vkb2_top_candi_pane_g5

0x7af2,	// (0x00007af2) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7af2,	// (0x00007af2) cell_vkb2_top_candi_pane_g6

0x0005,

0xa5c4,	// (0x0000a5c4) cell_vkb2_top_candi_pane_g_ParamLimits

0xa5c4,	// (0x0000a5c4) cell_vkb2_top_candi_pane_g

0x8bdb,	// (0x00008bdb) cell_vkb2_top_candi_pane_t1

0x47ff,	// (0x000047ff) aid_size_touch_slider_mark_ParamLimits

0x47ff,	// (0x000047ff) aid_size_touch_slider_mark

0xd970,	// (0x0000d970) grid_graphic2_catg_pane_ParamLimits

0xd970,	// (0x0000d970) grid_graphic2_catg_pane

0xd9e7,	// (0x0000d9e7) popup_grid_graphic2_window_t1_ParamLimits

0xd9e7,	// (0x0000d9e7) popup_grid_graphic2_window_t1

0xd9fc,	// (0x0000d9fc) popup_grid_graphic2_window_t2_ParamLimits

0xd9fc,	// (0x0000d9fc) popup_grid_graphic2_window_t2

0x0001,

0xe50a,	// (0x0000e50a) popup_grid_graphic2_window_t_ParamLimits

0xe50a,	// (0x0000e50a) popup_grid_graphic2_window_t

0x11e8,	// (0x000011e8) bg_button_pane_cp05_ParamLimits

0xdb51,	// (0x0000db51) cell_graphic2_control_pane_g1_ParamLimits

0x7cd0,	// (0x00007cd0) cell_graphic2_catg_pane_ParamLimits

0x7cd0,	// (0x00007cd0) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xdc1c,	// (0x0000dc1c) cell_graphic2_catg_pane_g1

0x7c20,	// (0x00007c20) cell_tb_ext_pane_t1_ParamLimits

0x85b9,	// (0x000085b9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x85b9,	// (0x000085b9) vkb2_top_cell_right_narrow_pane

0x85d1,	// (0x000085d1) vkb2_top_cell_right_wide_pane_ParamLimits

0x85d1,	// (0x000085d1) vkb2_top_cell_right_wide_pane

0x5d1d,	// (0x00005d1d) bg_vkb2_func_pane_ParamLimits

0x5d1d,	// (0x00005d1d) bg_vkb2_func_pane

0x8642,	// (0x00008642) vkb2_top_cell_left_pane_g1_ParamLimits

0x5d1d,	// (0x00005d1d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5d1d,	// (0x00005d1d) bg_vkb2_fuc_pane_cp03

0x86b7,	// (0x000086b7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3213,	// (0x00003213) bg_vkb2_func_pane_g1

0x321b,	// (0x0000321b) bg_vkb2_func_pane_g2

0x322b,	// (0x0000322b) bg_vkb2_func_pane_g3

0x3223,	// (0x00003223) bg_vkb2_func_pane_g4

0x3233,	// (0x00003233) bg_vkb2_func_pane_g5

0x323b,	// (0x0000323b) bg_vkb2_func_pane_g6

0x3243,	// (0x00003243) bg_vkb2_func_pane_g7

0x324b,	// (0x0000324b) bg_vkb2_func_pane_g8

0x320b,	// (0x0000320b) bg_vkb2_func_pane_g9

0x0008,

0xa5d1,	// (0x0000a5d1) bg_vkb2_func_pane_g

0x5d1d,	// (0x00005d1d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5d1d,	// (0x00005d1d) bg_vkb2_fuc_pane_cp01

0x8642,	// (0x00008642) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8642,	// (0x00008642) vkb2_top_cell_right_wide_pane_g1

0x5d1d,	// (0x00005d1d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5d1d,	// (0x00005d1d) bg_vkb2_fuc_pane_cp02

0x86b7,	// (0x000086b7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x86b7,	// (0x000086b7) vkb2_top_cell_right_narrow_pane_g1

0xced0,	// (0x0000ced0) aid_touch_area_decrease_ParamLimits

0xced0,	// (0x0000ced0) aid_touch_area_decrease

0xcefe,	// (0x0000cefe) aid_touch_area_increase_ParamLimits

0xcefe,	// (0x0000cefe) aid_touch_area_increase

0xcf26,	// (0x0000cf26) aid_touch_area_mute_ParamLimits

0xcf26,	// (0x0000cf26) aid_touch_area_mute

0xcf4e,	// (0x0000cf4e) aid_touch_area_slider_ParamLimits

0xcf4e,	// (0x0000cf4e) aid_touch_area_slider

0xcf8e,	// (0x0000cf8e) popup_slider_window_g4_ParamLimits

0xcf8e,	// (0x0000cf8e) popup_slider_window_g4

0xcfb6,	// (0x0000cfb6) popup_slider_window_g5_ParamLimits

0xcfb6,	// (0x0000cfb6) popup_slider_window_g5

0xcfea,	// (0x0000cfea) popup_slider_window_g6_ParamLimits

0xcfea,	// (0x0000cfea) popup_slider_window_g6

0x7938,	// (0x00007938) popup_slider_window_t2_ParamLimits

0x7938,	// (0x00007938) popup_slider_window_t2

0x0001,

0xa4cd,	// (0x0000a4cd) popup_slider_window_t_ParamLimits

0xa4cd,	// (0x0000a4cd) popup_slider_window_t

0xd006,	// (0x0000d006) slider_pane_ParamLimits

0xd006,	// (0x0000d006) slider_pane

0x8c0c,	// (0x00008c0c) slider_pane_g1_ParamLimits

0x8c0c,	// (0x00008c0c) slider_pane_g1

0x8c20,	// (0x00008c20) slider_pane_g2_ParamLimits

0x8c20,	// (0x00008c20) slider_pane_g2

0x8c36,	// (0x00008c36) slider_pane_g3_ParamLimits

0x8c36,	// (0x00008c36) slider_pane_g3

0x0003,

0xa5e4,	// (0x0000a5e4) slider_pane_g_ParamLimits

0xa5e4,	// (0x0000a5e4) slider_pane_g

0xbb0c,	// (0x0000bb0c) popup_tb_float_extension_window_ParamLimits

0xbb0c,	// (0x0000bb0c) popup_tb_float_extension_window

0x8c62,	// (0x00008c62) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x8c6d,	// (0x00008c6d) grid_tb_float_ext_pane

0x8c75,	// (0x00008c75) cell_tb_float_ext_pane_ParamLimits

0x8c75,	// (0x00008c75) cell_tb_float_ext_pane

0x8c8d,	// (0x00008c8d) cell_tb_float_ext_pane_g1

0x8c96,	// (0x00008c96) grid_highlight_pane_cp12

0xc88b,	// (0x0000c88b) cell_last_hwr_side_pane_ParamLimits

0xc88b,	// (0x0000c88b) cell_last_hwr_side_pane

0x5cc2,	// (0x00005cc2) cell_last_hwr_side_pane_g1

0x8c9f,	// (0x00008c9f) cell_last_hwr_side_pane_g2

0x0001,

0xa5ed,	// (0x0000a5ed) cell_last_hwr_side_pane_g

0xd872,	// (0x0000d872) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd872,	// (0x0000d872) vkb2_area_bottom_space_btn_pane

0x6102,	// (0x00006102) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8786,	// (0x00008786) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8bdb,	// (0x00008bdb) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8ca8,	// (0x00008ca8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8ca8,	// (0x00008ca8) vkb2_area_bottom_space_btn_pane_g1

0x8cde,	// (0x00008cde) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8cde,	// (0x00008cde) vkb2_area_bottom_space_btn_pane_g2

0x8d14,	// (0x00008d14) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8d14,	// (0x00008d14) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xa5f2,	// (0x0000a5f2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xa5f2,	// (0x0000a5f2) vkb2_area_bottom_space_btn_pane_g

0x5dda,	// (0x00005dda) cel_fep_hwr_func_pane_ParamLimits

0x5dda,	// (0x00005dda) cel_fep_hwr_func_pane

0xc860,	// (0x0000c860) cell_hwr_side_button_pane_ParamLimits

0xc860,	// (0x0000c860) cell_hwr_side_button_pane

0x7c54,	// (0x00007c54) aid_area_touch_clock_ParamLimits

0x07a5,	// (0x000007a5) bg_uniindi_top_pane_ParamLimits

0x7c66,	// (0x00007c66) uniindi_top_pane_g1_ParamLimits

0x7c7c,	// (0x00007c7c) uniindi_top_pane_g2_ParamLimits

0x7c88,	// (0x00007c88) uniindi_top_pane_g3_ParamLimits

0x7c99,	// (0x00007c99) uniindi_top_pane_g4_ParamLimits

0xa505,	// (0x0000a505) uniindi_top_pane_g_ParamLimits

0x7ca6,	// (0x00007ca6) uniindi_top_pane_t1_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01

0x8d5a,	// (0x00008d5a) cel_fep_hwr_func_pane_g1_ParamLimits

0x8d5a,	// (0x00008d5a) cel_fep_hwr_func_pane_g1

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02

0x8d5a,	// (0x00008d5a) cell_hwr_side_button_pane_g1_ParamLimits

0x8d5a,	// (0x00008d5a) cell_hwr_side_button_pane_g1

0x3026,	// (0x00003026) status_pane_g4_ParamLimits

0x3026,	// (0x00003026) status_pane_g4

0x303e,	// (0x0000303e) status_pane_t1

0x5ab4,	// (0x00005ab4) form2_midp_gauge_slider_cont_pane

0x5abc,	// (0x00005abc) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc7b4,	// (0x0000c7b4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc7c6,	// (0x0000c7c6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xe456,	// (0x0000e456) form2_midp_gauge_slider_pane_t_ParamLimits

0x5af2,	// (0x00005af2) form2_midp_slider_pane_ParamLimits

0x81a1,	// (0x000081a1) aid_size_cell_func_vkb2_ParamLimits

0x81a1,	// (0x000081a1) aid_size_cell_func_vkb2

0x8c4e,	// (0x00008c4e) slider_pane_g4_ParamLimits

0x8c4e,	// (0x00008c4e) slider_pane_g4

0xdc25,	// (0x0000dc25) form2_midp_gauge_slider_pane_t2_cp01

0xdc33,	// (0x0000dc33) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdc33,	// (0x0000dc33) form2_midp_gauge_slider_pane_t3_cp01

0x8d93,	// (0x00008d93) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x8dc7,	// (0x00008dc7) navi_smil_pane_g1

0x8dcf,	// (0x00008dcf) navi_smil_pane_t1

0x8d9c,	// (0x00008d9c) form2_midp_slider_pane_g1

0x8da5,	// (0x00008da5) form2_midp_slider_pane_g2

0x8dad,	// (0x00008dad) form2_midp_slider_pane_g3

0x8d9c,	// (0x00008d9c) form2_midp_slider_pane_g4

0xdc50,	// (0x0000dc50) form2_midp_slider_pane_g5

0x0004,

0xe524,	// (0x0000e524) form2_midp_slider_pane_g

0x8d4a,	// (0x00008d4a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8d4a,	// (0x00008d4a) vkb2_area_bottom_space_btn_pane_g4

0xbcae,	// (0x0000bcae) lc0_navi_pane_ParamLimits

0xbcae,	// (0x0000bcae) lc0_navi_pane

0xbd18,	// (0x0000bd18) lc0_stat_indi_pane_ParamLimits

0xbd18,	// (0x0000bd18) lc0_stat_indi_pane

0xbd2d,	// (0x0000bd2d) ls0_title_pane_ParamLimits

0xbd2d,	// (0x0000bd2d) ls0_title_pane

0x11e8,	// (0x000011e8) bg_popup_sub_pane_cp14_ParamLimits

0x7c3b,	// (0x00007c3b) list_uniindi_pane_ParamLimits

0x7c47,	// (0x00007c47) uniindi_top_pane_ParamLimits

0x7ce2,	// (0x00007ce2) list_single_uniindi_pane_g1_ParamLimits

0x7cf5,	// (0x00007cf5) list_single_uniindi_pane_t1_ParamLimits

0xdc59,	// (0x0000dc59) lc0_stat_clock_pane_ParamLimits

0xdc59,	// (0x0000dc59) lc0_stat_clock_pane

0xdc66,	// (0x0000dc66) lc0_stat_indi_pane_g1_ParamLimits

0xdc66,	// (0x0000dc66) lc0_stat_indi_pane_g1

0xdc73,	// (0x0000dc73) lc0_stat_indi_pane_g2_ParamLimits

0xdc73,	// (0x0000dc73) lc0_stat_indi_pane_g2

0x0001,

0xe52f,	// (0x0000e52f) lc0_stat_indi_pane_g_ParamLimits

0xe52f,	// (0x0000e52f) lc0_stat_indi_pane_g

0xdc80,	// (0x0000dc80) lc0_uni_indicator_pane_ParamLimits

0xdc80,	// (0x0000dc80) lc0_uni_indicator_pane

0x8e11,	// (0x00008e11) ls0_title_pane_g1_ParamLimits

0x8e11,	// (0x00008e11) ls0_title_pane_g1

0xdc8d,	// (0x0000dc8d) ls0_title_pane_t1_ParamLimits

0xdc8d,	// (0x0000dc8d) ls0_title_pane_t1

0xdcbb,	// (0x0000dcbb) lc0_uni_indicator_pane_g1_ParamLimits

0xdcbb,	// (0x0000dcbb) lc0_uni_indicator_pane_g1

0x8e6d,	// (0x00008e6d) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x8e7b,	// (0x00008e7b) ai5_sk_pane_ParamLimits

0x8e7b,	// (0x00008e7b) ai5_sk_pane

0xdcd0,	// (0x0000dcd0) cell_ai5_widget_pane_ParamLimits

0xdcd0,	// (0x0000dcd0) cell_ai5_widget_pane

0x8ee1,	// (0x00008ee1) aid_size_cell_widget_grid

0x8ef3,	// (0x00008ef3) bg_ai5_widget_pane_ParamLimits

0x8ef3,	// (0x00008ef3) bg_ai5_widget_pane

0xdd51,	// (0x0000dd51) cell_ai5_widget_pane_g2

0xdd61,	// (0x0000dd61) cell_ai5_widget_pane_g3

0xdd80,	// (0x0000dd80) cell_ai5_widget_pane_g4

0xdd8c,	// (0x0000dd8c) cell_ai5_widget_pane_g5

0xdd98,	// (0x0000dd98) cell_ai5_widget_pane_g6

0xdda4,	// (0x0000dda4) cell_ai5_widget_pane_g7

0xddec,	// (0x0000ddec) cell_ai5_widget_pane_t1_ParamLimits

0xddec,	// (0x0000ddec) cell_ai5_widget_pane_t1

0xde09,	// (0x0000de09) cell_ai5_widget_pane_t2_ParamLimits

0xde09,	// (0x0000de09) cell_ai5_widget_pane_t2

0xde21,	// (0x0000de21) cell_ai5_widget_pane_t3_ParamLimits

0xde21,	// (0x0000de21) cell_ai5_widget_pane_t3

0xde39,	// (0x0000de39) cell_ai5_widget_pane_t4_ParamLimits

0xde39,	// (0x0000de39) cell_ai5_widget_pane_t4

0xde53,	// (0x0000de53) cell_ai5_widget_pane_t5_ParamLimits

0xde53,	// (0x0000de53) cell_ai5_widget_pane_t5

0x903c,	// (0x0000903c) cell_ai5_widget_pane_t6_ParamLimits

0x903c,	// (0x0000903c) cell_ai5_widget_pane_t6

0x904e,	// (0x0000904e) cell_ai5_widget_pane_t7_ParamLimits

0x904e,	// (0x0000904e) cell_ai5_widget_pane_t7

0xde72,	// (0x0000de72) cell_ai5_widget_pane_t8_ParamLimits

0xde72,	// (0x0000de72) cell_ai5_widget_pane_t8

0x0009,

0xe549,	// (0x0000e549) cell_ai5_widget_pane_t_ParamLimits

0xe549,	// (0x0000e549) cell_ai5_widget_pane_t

0xdebd,	// (0x0000debd) grid_ai5_widget_pane

0x11e8,	// (0x000011e8) highlight_cell_ai5_widget_pane_ParamLimits

0x11e8,	// (0x000011e8) highlight_cell_ai5_widget_pane

0xded1,	// (0x0000ded1) ai5_sk_left_pane

0xdedb,	// (0x0000dedb) ai5_sk_middle_pane

0xdee5,	// (0x0000dee5) ai5_sk_right_pane

0x90e4,	// (0x000090e4) bg_ai5_widget_pane_g1_ParamLimits

0x90e4,	// (0x000090e4) bg_ai5_widget_pane_g1

0x90f0,	// (0x000090f0) bg_ai5_widget_pane_g2_ParamLimits

0x90f0,	// (0x000090f0) bg_ai5_widget_pane_g2

0x90fc,	// (0x000090fc) bg_ai5_widget_pane_g3_ParamLimits

0x90fc,	// (0x000090fc) bg_ai5_widget_pane_g3

0x9108,	// (0x00009108) bg_ai5_widget_pane_g4_ParamLimits

0x9108,	// (0x00009108) bg_ai5_widget_pane_g4

0x9114,	// (0x00009114) bg_ai5_widget_pane_g5_ParamLimits

0x9114,	// (0x00009114) bg_ai5_widget_pane_g5

0x9120,	// (0x00009120) bg_ai5_widget_pane_g6_ParamLimits

0x9120,	// (0x00009120) bg_ai5_widget_pane_g6

0x912c,	// (0x0000912c) bg_ai5_widget_pane_g7_ParamLimits

0x912c,	// (0x0000912c) bg_ai5_widget_pane_g7

0x9138,	// (0x00009138) bg_ai5_widget_pane_g8_ParamLimits

0x9138,	// (0x00009138) bg_ai5_widget_pane_g8

0x9144,	// (0x00009144) bg_ai5_widget_pane_g9_ParamLimits

0x9144,	// (0x00009144) bg_ai5_widget_pane_g9

0x0008,

0xa635,	// (0x0000a635) bg_ai5_widget_pane_g_ParamLimits

0xa635,	// (0x0000a635) bg_ai5_widget_pane_g

0x9176,	// (0x00009176) cell_shortcut_ai5_widget_pane_ParamLimits

0x9176,	// (0x00009176) cell_shortcut_ai5_widget_pane

0x05de,	// (0x000005de) bg_cell_shortcut_ai5_widget_pane

0x9182,	// (0x00009182) cell_grid_ai5_widget_pane_g1

0x918b,	// (0x0000918b) highlight_cell_shortcut_ai5_widget_pane

0x321b,	// (0x0000321b) ai5_sk_left_pane_g1

0x9193,	// (0x00009193) ai5_sk_left_pane_g2

0x919b,	// (0x0000919b) ai5_sk_left_pane_g3

0x91a3,	// (0x000091a3) ai5_sk_left_pane_g4

0x0003,

0xa648,	// (0x0000a648) ai5_sk_left_pane_g

0x91ab,	// (0x000091ab) ai5_sk_left_pane_t1

0x3213,	// (0x00003213) ai5_sk_right_pane_g1

0x91b9,	// (0x000091b9) ai5_sk_right_pane_g2

0x91c1,	// (0x000091c1) ai5_sk_right_pane_g3

0x91c9,	// (0x000091c9) ai5_sk_right_pane_g4

0x0003,

0xa651,	// (0x0000a651) ai5_sk_right_pane_g

0x91d1,	// (0x000091d1) ai5_sk_right_pane_t1

0x3213,	// (0x00003213) ai5_sk_middle_pane_g1

0x321b,	// (0x0000321b) ai5_sk_middle_pane_g2

0x3233,	// (0x00003233) ai5_sk_middle_pane_g3

0x91c1,	// (0x000091c1) ai5_sk_middle_pane_g4

0x919b,	// (0x0000919b) ai5_sk_middle_pane_g5

0x91df,	// (0x000091df) ai5_sk_middle_pane_g6

0xdeef,	// (0x0000deef) ai5_sk_middle_pane_g7

0x0006,

0xe55e,	// (0x0000e55e) ai5_sk_middle_pane_g

0xbbac,	// (0x0000bbac) aid_touch_area_size_lc0_ParamLimits

0xbbac,	// (0x0000bbac) aid_touch_area_size_lc0

0x649b,	// (0x0000649b) cell_hwr_candidate_pane_t1_ParamLimits

0x2d29,	// (0x00002d29) aid_touch_navi_pane

0xbe19,	// (0x0000be19) status_dt_navi_pane_ParamLimits

0xbe19,	// (0x0000be19) status_dt_navi_pane

0xbe31,	// (0x0000be31) status_dt_sta_pane_ParamLimits

0xbe31,	// (0x0000be31) status_dt_sta_pane

0xdef7,	// (0x0000def7) dt_sta_controll_pane

0xdf04,	// (0x0000df04) dt_sta_indi_pane

0xdf11,	// (0x0000df11) dt_sta_title_pane

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane

0xdf23,	// (0x0000df23) dt_sta_battery_pane

0xdf2b,	// (0x0000df2b) dt_sta_indi_pane_g1

0xdf34,	// (0x0000df34) dt_sta_indi_pane_g2

0xdf3d,	// (0x0000df3d) dt_sta_indi_pane_g3

0x0002,

0xe56d,	// (0x0000e56d) dt_sta_indi_pane_g

0xdf46,	// (0x0000df46) dt_sta_signal_pane

0x11e8,	// (0x000011e8) bg_dt_sta_title_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_dt_sta_title_pane

0xdf4f,	// (0x0000df4f) dt_sta_title_pane_g1

0xdf57,	// (0x0000df57) dt_sta_title_pane_t1_ParamLimits

0xdf57,	// (0x0000df57) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0xdf6c,	// (0x0000df6c) dt_sta_controll_pane_g1

0xdf75,	// (0x0000df75) bg_dt_sta_title_pane_g1

0xdf7e,	// (0x0000df7e) bg_dt_sta_title_pane_g2

0xdf87,	// (0x0000df87) bg_dt_sta_title_pane_g3

0x0002,

0xe574,	// (0x0000e574) bg_dt_sta_title_pane_g

0x5cc2,	// (0x00005cc2) bg_dt_sta_indi_pane_g1

0xdf90,	// (0x0000df90) dt_sta_signal_pane_g1

0xdf98,	// (0x0000df98) dt_sta_signal_pane_g2

0x0001,

0xe57b,	// (0x0000e57b) dt_sta_signal_pane_g

0x929d,	// (0x0000929d) dt_sta_battery_pane_g1

0x92a6,	// (0x000092a6) dt_sta_battery_pane_t1

0x5cc2,	// (0x00005cc2) bg_dt_sta_control_pane_g1

0x1ca7,	// (0x00001ca7) fep_china_uni_eep_pane

0x1caf,	// (0x00001caf) fep_china_uni_entry_pane_ParamLimits

0x1cbf,	// (0x00001cbf) popup_fep_china_uni_window_g1_ParamLimits

0x1ccf,	// (0x00001ccf) popup_fep_china_uni_window_g2_ParamLimits

0x1ccf,	// (0x00001ccf) popup_fep_china_uni_window_g2

0x0001,

0x9f24,	// (0x00009f24) popup_fep_china_uni_window_g_ParamLimits

0x9f24,	// (0x00009f24) popup_fep_china_uni_window_g

0x92b5,	// (0x000092b5) fep_china_uni_eep_pane_g1

0x92bd,	// (0x000092bd) fep_china_uni_eep_pane_t1

0x8dbe,	// (0x00008dbe) aid_touch_area_size_smil_player

0x2e60,	// (0x00002e60) lc0_clock_pane

0x3032,	// (0x00003032) status_pane_g5_ParamLimits

0x3032,	// (0x00003032) status_pane_g5

0xb740,	// (0x0000b740) popup_keymap_window

0x2ffa,	// (0x00002ffa) status_icon_pane

0xdd61,	// (0x0000dd61) cell_ai5_widget_pane_g3_ParamLimits

0xdd80,	// (0x0000dd80) cell_ai5_widget_pane_g4_ParamLimits

0xdd8c,	// (0x0000dd8c) cell_ai5_widget_pane_g5_ParamLimits

0xddb0,	// (0x0000ddb0) cell_ai5_widget_pane_g8_ParamLimits

0xddb0,	// (0x0000ddb0) cell_ai5_widget_pane_g8

0xddc4,	// (0x0000ddc4) cell_ai5_widget_pane_g9_ParamLimits

0xddc4,	// (0x0000ddc4) cell_ai5_widget_pane_g9

0xddd8,	// (0x0000ddd8) cell_ai5_widget_pane_g10_ParamLimits

0xddd8,	// (0x0000ddd8) cell_ai5_widget_pane_g10

0x92cc,	// (0x000092cc) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x92d4,	// (0x000092d4) popup_keymap_window_t1

0xb494,	// (0x0000b494) control_pane_g6_ParamLimits

0xb494,	// (0x0000b494) control_pane_g6

0xb4a1,	// (0x0000b4a1) control_pane_g7_ParamLimits

0xb4a1,	// (0x0000b4a1) control_pane_g7

0xb4ae,	// (0x0000b4ae) control_pane_g8_ParamLimits

0xb4ae,	// (0x0000b4ae) control_pane_g8

0xdef7,	// (0x0000def7) dt_sta_controll_pane_ParamLimits

0xdf04,	// (0x0000df04) dt_sta_indi_pane_ParamLimits

0xdf11,	// (0x0000df11) dt_sta_title_pane_ParamLimits

0x0c04,	// (0x00000c04) aid_size_touch_scroll_bar_cale

0x026c,	// (0x0000026c) popup_discreet_window_ParamLimits

0x026c,	// (0x0000026c) popup_discreet_window

0xa7f7,	// (0x0000a7f7) popup_sk_window

0x39b2,	// (0x000039b2) bg_popup_sub_pane_cp28_ParamLimits

0x39b2,	// (0x000039b2) bg_popup_sub_pane_cp28

0x92e2,	// (0x000092e2) popup_discreet_window_g1_ParamLimits

0x92e2,	// (0x000092e2) popup_discreet_window_g1

0x9302,	// (0x00009302) popup_discreet_window_t1_ParamLimits

0x9302,	// (0x00009302) popup_discreet_window_t1

0x9320,	// (0x00009320) popup_discreet_window_t2_ParamLimits

0x9320,	// (0x00009320) popup_discreet_window_t2

0x0002,

0xa67c,	// (0x0000a67c) popup_discreet_window_t_ParamLimits

0xa67c,	// (0x0000a67c) popup_discreet_window_t

0x9372,	// (0x00009372) popup_sk_window_g1

0x937b,	// (0x0000937b) popup_sk_window_g2

0x0001,

0xa683,	// (0x0000a683) popup_sk_window_g

0x9384,	// (0x00009384) popup_sk_window_t1

0x9392,	// (0x00009392) popup_sk_window_t1_copy1

0xdd51,	// (0x0000dd51) cell_ai5_widget_pane_g2_ParamLimits

0xde84,	// (0x0000de84) cell_ai5_widget_pane_t9_ParamLimits

0xde84,	// (0x0000de84) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xdfa0,	// (0x0000dfa0) aid_fshwr2_btn_pane

0xdfa8,	// (0x0000dfa8) aid_fshwr2_syb_pane

0xdfb0,	// (0x0000dfb0) aid_fshwr2_txt_pane

0xdfb8,	// (0x0000dfb8) fshwr2_func_candi_pane

0xdfc0,	// (0x0000dfc0) fshwr2_hwr_syb_pane

0xdfc8,	// (0x0000dfc8) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xdfd0,	// (0x0000dfd0) fshwr2_icf_pane_t1_ParamLimits

0xdfd0,	// (0x0000dfd0) fshwr2_icf_pane_t1

0x5cc2,	// (0x00005cc2) fshwr2_func_candi_pane_g1

0x93f9,	// (0x000093f9) fshwr2_func_candi_row_pane_ParamLimits

0x93f9,	// (0x000093f9) fshwr2_func_candi_row_pane

0xdfe8,	// (0x0000dfe8) cell_fshwr2_syb_pane_ParamLimits

0xdfe8,	// (0x0000dfe8) cell_fshwr2_syb_pane

0x6102,	// (0x00006102) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6102,	// (0x00006102) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0x9421,	// (0x00009421) fshwr2_func_candi_cell_pane_ParamLimits

0x9421,	// (0x00009421) fshwr2_func_candi_cell_pane

0x944c,	// (0x0000944c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x944c,	// (0x0000944c) fshwr2_func_candi_cell_bg_pane

0x9466,	// (0x00009466) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9466,	// (0x00009466) fshwr2_func_candi_cell_pane_g1

0x9486,	// (0x00009486) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9486,	// (0x00009486) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x22d6,	// (0x000022d6) cell_fshwr2_syb_bg_pane

0xdfff,	// (0x0000dfff) cell_fshwr2_syb_bg_pane_g1

0xe007,	// (0x0000e007) cell_fshwr2_syb_bg_pane_t1

0x11e8,	// (0x000011e8) main_tmo_pane

0xc299,	// (0x0000c299) uni_indicator_pane_g1_ParamLimits

0xc2ae,	// (0x0000c2ae) uni_indicator_pane_g2_ParamLimits

0xc2c4,	// (0x0000c2c4) uni_indicator_pane_g3_ParamLimits

0x45f1,	// (0x000045f1) uni_indicator_pane_g4_ParamLimits

0x45f1,	// (0x000045f1) uni_indicator_pane_g4

0x4605,	// (0x00004605) uni_indicator_pane_g5_ParamLimits

0x4605,	// (0x00004605) uni_indicator_pane_g5

0x4619,	// (0x00004619) uni_indicator_pane_g6_ParamLimits

0x4619,	// (0x00004619) uni_indicator_pane_g6

0xe3c6,	// (0x0000e3c6) uni_indicator_pane_g_ParamLimits

0xceb4,	// (0x0000ceb4) popup_tmo_note_window_ParamLimits

0xceb4,	// (0x0000ceb4) popup_tmo_note_window

0x0020,	// (0x00000020) fshwr2_bg_pane

0x9477,	// (0x00009477) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9477,	// (0x00009477) fshwr2_func_candi_cell_pane_g2

0x0001,

0xa688,	// (0x0000a688) fshwr2_func_candi_cell_pane_g_ParamLimits

0xa688,	// (0x0000a688) fshwr2_func_candi_cell_pane_g

0x5cc2,	// (0x00005cc2) bg_popup_window_pane_cp01

0x94b0,	// (0x000094b0) bg_popup_window_pane_g1_cp01

0x94b9,	// (0x000094b9) bg_popup_window_pane_cp22_ParamLimits

0x94b9,	// (0x000094b9) bg_popup_window_pane_cp22

0x94c7,	// (0x000094c7) listscroll_tmo_link_pane_ParamLimits

0x94c7,	// (0x000094c7) listscroll_tmo_link_pane

0x9507,	// (0x00009507) popup_tmo_note_window_g1_ParamLimits

0x9507,	// (0x00009507) popup_tmo_note_window_g1

0x9514,	// (0x00009514) tmo_note_info_pane_ParamLimits

0x9514,	// (0x00009514) tmo_note_info_pane

0xe016,	// (0x0000e016) list_tmo_note_info_pane_g1_ParamLimits

0xe016,	// (0x0000e016) list_tmo_note_info_pane_g1

0x9545,	// (0x00009545) list_tmo_note_info_pane_g2_ParamLimits

0x9545,	// (0x00009545) list_tmo_note_info_pane_g2

0x0001,

0xe580,	// (0x0000e580) list_tmo_note_info_pane_g_ParamLimits

0xe580,	// (0x0000e580) list_tmo_note_info_pane_g

0x9561,	// (0x00009561) list_tmo_note_info_text_pane_ParamLimits

0x9561,	// (0x00009561) list_tmo_note_info_text_pane

0x95e2,	// (0x000095e2) list_tmo_link_pane

0x95ef,	// (0x000095ef) scroll_pane_cp20

0x95fc,	// (0x000095fc) list_single_tmo_link_pane_ParamLimits

0x95fc,	// (0x000095fc) list_single_tmo_link_pane

0x960c,	// (0x0000960c) list_single_tmo_link_pane_t1

0x961a,	// (0x0000961a) list_tmo_note_info_text_pane_t1_ParamLimits

0x961a,	// (0x0000961a) list_tmo_note_info_text_pane_t1

0x140e,	// (0x0000140e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x140e,	// (0x0000140e) aid_size_touch_scroll_bar_cp01

0xb01b,	// (0x0000b01b) aid_size_touch_slider_marker

0xa7eb,	// (0x0000a7eb) popup_settings_window_ParamLimits

0xa7eb,	// (0x0000a7eb) popup_settings_window

0x2863,	// (0x00002863) popup_candi_list_indi_window

0x2d29,	// (0x00002d29) aid_touch_navi_pane_ParamLimits

0x79ca,	// (0x000079ca) rs_clock_indi_pane

0x79d3,	// (0x000079d3) sctrl_sk_bottom_pane_ParamLimits

0x79e4,	// (0x000079e4) sctrl_sk_top_pane_ParamLimits

0x81fb,	// (0x000081fb) popup_fep_tooltip_window

0x8ee1,	// (0x00008ee1) aid_size_cell_widget_grid_ParamLimits

0xdd45,	// (0x0000dd45) cell_ai5_widget_pane_g1_ParamLimits

0xdd45,	// (0x0000dd45) cell_ai5_widget_pane_g1

0xdd98,	// (0x0000dd98) cell_ai5_widget_pane_g6_ParamLimits

0xdda4,	// (0x0000dda4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xe534,	// (0x0000e534) cell_ai5_widget_pane_g_ParamLimits

0xe534,	// (0x0000e534) cell_ai5_widget_pane_g

0xdea8,	// (0x0000dea8) cell_ai5_widget_pane_t10_ParamLimits

0xdea8,	// (0x0000dea8) cell_ai5_widget_pane_t10

0xdebd,	// (0x0000debd) grid_ai5_widget_pane_ParamLimits

0x9150,	// (0x00009150) cell_contacts_ai5_widget_pane_ParamLimits

0x9150,	// (0x00009150) cell_contacts_ai5_widget_pane

0x9335,	// (0x00009335) popup_discreet_window_t3_ParamLimits

0x9335,	// (0x00009335) popup_discreet_window_t3

0x93d0,	// (0x000093d0) popup_fshwr2_char_preview_window_ParamLimits

0x93d0,	// (0x000093d0) popup_fshwr2_char_preview_window

0xe02d,	// (0x0000e02d) tmo_note_info_pane_t1

0xe042,	// (0x0000e042) tmo_note_info_pane_t2

0xe057,	// (0x0000e057) tmo_note_info_pane_t3

0x95be,	// (0x000095be) tmo_note_info_pane_t4

0x95d0,	// (0x000095d0) tmo_note_info_pane_t5

0x0004,

0xe585,	// (0x0000e585) tmo_note_info_pane_t

0x95e2,	// (0x000095e2) list_tmo_link_pane_ParamLimits

0x95ef,	// (0x000095ef) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x9633,	// (0x00009633) popup_fshwr2_char_preview_window_t1

0x9641,	// (0x00009641) popup_candi_list_indi_window_g1

0x964a,	// (0x0000964a) bg_cell_contacts_ai5_widget_pane

0x9656,	// (0x00009656) cell_contacts_ai5_widget_pane_g1

0x966a,	// (0x0000966a) cell_contacts_ai5_widget_pane_g2

0x9679,	// (0x00009679) cell_contacts_ai5_widget_pane_g3

0x0002,

0xa69d,	// (0x0000a69d) cell_contacts_ai5_widget_pane_g

0x968c,	// (0x0000968c) cell_contacts_ai5_widget_pane_t1

0x11e8,	// (0x000011e8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe0cf,	// (0x0000e0cf) settings_container_pane

0x22d6,	// (0x000022d6) listscroll_set_pane_copy1

0x529a,	// (0x0000529a) scroll_pane_cp121_copy1

0x9710,	// (0x00009710) set_content_pane_copy1

0x9718,	// (0x00009718) aid_height_set_list_copy1_ParamLimits

0x9718,	// (0x00009718) aid_height_set_list_copy1

0x48b8,	// (0x000048b8) aid_size_parent_copy1_ParamLimits

0x48b8,	// (0x000048b8) aid_size_parent_copy1

0x9724,	// (0x00009724) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9724,	// (0x00009724) button_value_adjust_pane_cp6_copy1

0x283d,	// (0x0000283d) list_highlight_pane_cp2_copy1_ParamLimits

0x283d,	// (0x0000283d) list_highlight_pane_cp2_copy1

0xe0db,	// (0x0000e0db) list_set_pane_copy1_ParamLimits

0xe0db,	// (0x0000e0db) list_set_pane_copy1

0xe06c,	// (0x0000e06c) main_pane_set_t1_copy1_ParamLimits

0xe06c,	// (0x0000e06c) main_pane_set_t1_copy1

0xe0a6,	// (0x0000e0a6) main_pane_set_t2_copy1_ParamLimits

0xe0a6,	// (0x0000e0a6) main_pane_set_t2_copy1

0x97c6,	// (0x000097c6) main_pane_set_t3_copy1

0x97d4,	// (0x000097d4) main_pane_set_t4_copy1

0xe0c3,	// (0x0000e0c3) set_content_pane_g1_copy1_ParamLimits

0xe0c3,	// (0x0000e0c3) set_content_pane_g1_copy1

0x97e2,	// (0x000097e2) setting_code_pane_copy1

0x97ea,	// (0x000097ea) setting_slider_graphic_pane_copy1

0x97ea,	// (0x000097ea) setting_slider_pane_copy1

0x97ea,	// (0x000097ea) setting_text_pane_copy1

0x97ea,	// (0x000097ea) setting_volume_pane_copy1

0x97f2,	// (0x000097f2) settings_code_pane_cp2_copy1

0x97fa,	// (0x000097fa) settings_code_pane_cp_copy1_ParamLimits

0x97fa,	// (0x000097fa) settings_code_pane_cp_copy1

0xe169,	// (0x0000e169) volume_set_pane_copy1

0xe171,	// (0x0000e171) volume_set_pane_g10_copy1

0xe179,	// (0x0000e179) volume_set_pane_g1_copy1

0xe181,	// (0x0000e181) volume_set_pane_g2_copy1

0xe189,	// (0x0000e189) volume_set_pane_g3_copy1

0xe191,	// (0x0000e191) volume_set_pane_g4_copy1

0xe199,	// (0x0000e199) volume_set_pane_g5_copy1

0xe1a1,	// (0x0000e1a1) volume_set_pane_g6_copy1

0xe1a9,	// (0x0000e1a9) volume_set_pane_g7_copy1

0xe1b1,	// (0x0000e1b1) volume_set_pane_g8_copy1

0xe1b9,	// (0x0000e1b9) volume_set_pane_g9_copy1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1_ParamLimits

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1

0x9866,	// (0x00009866) setting_slider_pane_t2_copy1_ParamLimits

0x9866,	// (0x00009866) setting_slider_pane_t2_copy1

0x987f,	// (0x0000987f) setting_slider_pane_t3_copy1_ParamLimits

0x987f,	// (0x0000987f) setting_slider_pane_t3_copy1

0x0504,	// (0x00000504) slider_set_pane_copy1_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_copy1

0x130e,	// (0x0000130e) set_opt_bg_pane_g1_copy2

0x1316,	// (0x00001316) set_opt_bg_pane_g2_copy2

0x9896,	// (0x00009896) set_opt_bg_pane_g3_copy2

0x1326,	// (0x00001326) set_opt_bg_pane_g4_copy2

0x132e,	// (0x0000132e) set_opt_bg_pane_g5_copy2

0x1336,	// (0x00001336) set_opt_bg_pane_g6_copy2

0xe1c1,	// (0x0000e1c1) set_opt_bg_pane_g7_copy2

0x98a6,	// (0x000098a6) set_opt_bg_pane_g8_copy2

0x98ae,	// (0x000098ae) set_opt_bg_pane_g9_copy2

0x47ff,	// (0x000047ff) aid_size_touch_slider_mark_copy1_ParamLimits

0x47ff,	// (0x000047ff) aid_size_touch_slider_mark_copy1

0x49ee,	// (0x000049ee) slider_set_pane_g1_copy1

0x49f7,	// (0x000049f7) slider_set_pane_g2_copy1

0x482c,	// (0x0000482c) slider_set_pane_g3_copy1_ParamLimits

0x482c,	// (0x0000482c) slider_set_pane_g3_copy1

0x4840,	// (0x00004840) slider_set_pane_g4_copy1_ParamLimits

0x4840,	// (0x00004840) slider_set_pane_g4_copy1

0x4858,	// (0x00004858) slider_set_pane_g5_copy1_ParamLimits

0x4858,	// (0x00004858) slider_set_pane_g5_copy1

0x482c,	// (0x0000482c) slider_set_pane_g6_copy1_ParamLimits

0x482c,	// (0x0000482c) slider_set_pane_g6_copy1

0xe1c9,	// (0x0000e1c9) slider_set_pane_g7_copy1_ParamLimits

0xe1c9,	// (0x0000e1c9) slider_set_pane_g7_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_copy1

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1_copy1

0xe1df,	// (0x0000e1df) setting_slider_graphic_pane_t1_copy1

0xe1ee,	// (0x0000e1ee) setting_slider_graphic_pane_t2_copy1

0xe1fd,	// (0x0000e1fd) slider_set_pane_cp_copy1

0x98fa,	// (0x000098fa) input_focus_pane_cp1_copy1

0x9903,	// (0x00009903) list_set_text_pane_copy1

0x990b,	// (0x0000990b) setting_text_pane_g1_copy1

0x9914,	// (0x00009914) set_text_pane_t1_copy1

0x98fa,	// (0x000098fa) input_focus_pane_cp2_copy1

0x990b,	// (0x0000990b) setting_code_pane_g1_copy1

0x992d,	// (0x0000992d) setting_code_pane_t1_copy1

0xb3a3,	// (0x0000b3a3) list_set_graphic_pane_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_copy1

0x994f,	// (0x0000994f) list_set_graphic_pane_g1_copy1_ParamLimits

0x994f,	// (0x0000994f) list_set_graphic_pane_g1_copy1

0x995b,	// (0x0000995b) list_set_graphic_pane_g2_copy1

0x2051,	// (0x00002051) list_set_graphic_pane_t1_copy1_ParamLimits

0x2051,	// (0x00002051) list_set_graphic_pane_t1_copy1

0x5cc2,	// (0x00005cc2) rs_clock_indi_pane_g1

0x9963,	// (0x00009963) rs_clock_indi_pane_t1

0x9971,	// (0x00009971) rs_indi_pane

0x9979,	// (0x00009979) rs_indi_pane_g1

0x9982,	// (0x00009982) rs_indi_pane_g2

0x9641,	// (0x00009641) rs_indi_pane_g3

0x0002,

0xa6a4,	// (0x0000a6a4) rs_indi_pane_g

0x22d6,	// (0x000022d6) bg_popup_preview_window_pane_cp03

0x998b,	// (0x0000998b) popup_fep_tooltip_window_t1

0x6e20,	// (0x00006e20) popup_note2_window_g2_ParamLimits

0x6e20,	// (0x00006e20) popup_note2_window_g2

0x0001,

0xa444,	// (0x0000a444) popup_note2_window_g_ParamLimits

0xa444,	// (0x0000a444) popup_note2_window_g

0x7419,	// (0x00007419) bg_popup_sub_pane_cp11_ParamLimits

0x7426,	// (0x00007426) cell_ai3_links_pane_g1_ParamLimits

0x743d,	// (0x0000743d) cell_ai3_links_pane_t1

0x9914,	// (0x00009914) set_text_pane_t1_copy1_ParamLimits

0x21fd,	// (0x000021fd) cell_graphic_popup_pane_cp2_ParamLimits

0x21fd,	// (0x000021fd) cell_graphic_popup_pane_cp2

0x9999,	// (0x00009999) cell_graphic_popup_pane_g1_cp2

0x0ab3,	// (0x00000ab3) cell_graphic_popup_pane_g2_cp2

0x99a1,	// (0x000099a1) cell_graphic_popup_pane_g3_cp2

0x99a9,	// (0x000099a9) cell_graphic_popup_pane_t2_cp2

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp3_cp2

0x1824,	// (0x00001824) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x11e8,	// (0x000011e8) main_tmo_pane_ParamLimits

0xceac,	// (0x0000ceac) popup_tmo_big_image_note_window

0xdd35,	// (0x0000dd35) cell_ai5_widget_list_pane

0xdd3d,	// (0x0000dd3d) cell_ai5_widget_lrg_icon_pane

0xe02d,	// (0x0000e02d) tmo_note_info_pane_t1_ParamLimits

0xe042,	// (0x0000e042) tmo_note_info_pane_t2_ParamLimits

0xe057,	// (0x0000e057) tmo_note_info_pane_t3_ParamLimits

0x95be,	// (0x000095be) tmo_note_info_pane_t4_ParamLimits

0x95d0,	// (0x000095d0) tmo_note_info_pane_t5_ParamLimits

0xe585,	// (0x0000e585) tmo_note_info_pane_t_ParamLimits

0xe0cf,	// (0x0000e0cf) settings_container_pane_ParamLimits

0x98f2,	// (0x000098f2) indicator_popup_pane_cp5

0x98f2,	// (0x000098f2) indicator_popup_pane_cp6

0xb3a3,	// (0x0000b3a3) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x99b7,	// (0x000099b7) popup_tmo_big_image_note_window_g1

0x99c0,	// (0x000099c0) popup_tmo_big_image_note_window_t1

0x99ce,	// (0x000099ce) popup_tmo_big_image_note_window_t2

0x99dc,	// (0x000099dc) popup_tmo_big_image_note_window_t3

0x0002,

0xa6ab,	// (0x0000a6ab) popup_tmo_big_image_note_window_t

0xe205,	// (0x0000e205) cell_ai5_widget_lrg_icon_pane_g1

0xe20d,	// (0x0000e20d) cell_ai5_widget_lrg_icon_pane_t1

0xe21b,	// (0x0000e21b) cell_ai5_widget_list_row_pane_ParamLimits

0xe21b,	// (0x0000e21b) cell_ai5_widget_list_row_pane

0xe234,	// (0x0000e234) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe234,	// (0x0000e234) cell_ai5_widget_list_row_pane_g1

0xe241,	// (0x0000e241) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe241,	// (0x0000e241) cell_ai5_widget_list_row_pane_t1

0xe259,	// (0x0000e259) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe259,	// (0x0000e259) cell_ai5_widget_list_row_pane_t2

0x0001,

0xe590,	// (0x0000e590) cell_ai5_widget_list_row_pane_t_ParamLimits

0xe590,	// (0x0000e590) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x9a50,	// (0x00009a50) popup_fep_char_pre_window

0x9a58,	// (0x00009a58) popup_fep_ituss_window

0x9a75,	// (0x00009a75) popup_fep_vkbss_window

0x9a94,	// (0x00009a94) grid_vkbss_keypad_pane_ParamLimits

0x9a94,	// (0x00009a94) grid_vkbss_keypad_pane

0x9aa4,	// (0x00009aa4) ituss_keypad_pane

0x9abd,	// (0x00009abd) aid_vkbss_key_offset_ParamLimits

0x9abd,	// (0x00009abd) aid_vkbss_key_offset

0x9ac9,	// (0x00009ac9) cell_vkbss_key_pane_ParamLimits

0x9ac9,	// (0x00009ac9) cell_vkbss_key_pane

0x9adf,	// (0x00009adf) bg_cell_vkbss_key_g1_ParamLimits

0x9adf,	// (0x00009adf) bg_cell_vkbss_key_g1

0x9aeb,	// (0x00009aeb) cell_vkbss_key_3p_pane_ParamLimits

0x9aeb,	// (0x00009aeb) cell_vkbss_key_3p_pane

0x9b05,	// (0x00009b05) cell_vkbss_key_g1_ParamLimits

0x9b05,	// (0x00009b05) cell_vkbss_key_g1

0x9b1f,	// (0x00009b1f) cell_vkbss_key_t1_ParamLimits

0x9b1f,	// (0x00009b1f) cell_vkbss_key_t1

0x9b4a,	// (0x00009b4a) cell_ituss_key_pane_ParamLimits

0x9b4a,	// (0x00009b4a) cell_ituss_key_pane

0x9b5a,	// (0x00009b5a) bg_cell_ituss_key_g1_ParamLimits

0x9b5a,	// (0x00009b5a) bg_cell_ituss_key_g1

0x9b66,	// (0x00009b66) cell_ituss_key_pane_g1_ParamLimits

0x9b66,	// (0x00009b66) cell_ituss_key_pane_g1

0x9b72,	// (0x00009b72) cell_ituss_key_pane_g2_ParamLimits

0x9b72,	// (0x00009b72) cell_ituss_key_pane_g2

0x0001,

0xa6b7,	// (0x0000a6b7) cell_ituss_key_pane_g_ParamLimits

0xa6b7,	// (0x0000a6b7) cell_ituss_key_pane_g

0x9b8b,	// (0x00009b8b) cell_ituss_key_t1_ParamLimits

0x9b8b,	// (0x00009b8b) cell_ituss_key_t1

0x9bb9,	// (0x00009bb9) cell_ituss_key_t2_ParamLimits

0x9bb9,	// (0x00009bb9) cell_ituss_key_t2

0x9bea,	// (0x00009bea) cell_ituss_key_t3_ParamLimits

0x9bea,	// (0x00009bea) cell_ituss_key_t3

0x9c1b,	// (0x00009c1b) cell_ituss_key_t4_ParamLimits

0x9c1b,	// (0x00009c1b) cell_ituss_key_t4

0x0003,

0xa6bc,	// (0x0000a6bc) cell_ituss_key_t_ParamLimits

0xa6bc,	// (0x0000a6bc) cell_ituss_key_t

0x9c4c,	// (0x00009c4c) cell_vkbss_key_3p_pane_g1

0x9c54,	// (0x00009c54) cell_vkbss_key_3p_pane_g2

0x9c5c,	// (0x00009c5c) cell_vkbss_key_3p_pane_g3

0x0002,

0xa6c5,	// (0x0000a6c5) cell_vkbss_key_3p_pane_g

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp02

0x9c64,	// (0x00009c64) popup_fep_char_pre_window_t1

0xdd2b,	// (0x0000dd2b) main_ai5_sk_pane

0x964a,	// (0x0000964a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9656,	// (0x00009656) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x966a,	// (0x0000966a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9679,	// (0x00009679) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xa69d,	// (0x0000a69d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x968c,	// (0x0000968c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe26b,	// (0x0000e26b) main_ai5_sk_pane_g1

0x37fc,	// (0x000037fc) popup_query_code_window_g1

0x9a6a,	// (0x00009a6a) popup_fep_vkb_icf_pane

0x9a7e,	// (0x00009a7e) popup_fep_vtchi_icf_pane

0x11e8,	// (0x000011e8) bg_icf_pane

0x9c8b,	// (0x00009c8b) list_vkb_icf_pane

0x11e8,	// (0x000011e8) bg_icf_pane_cp01

0x7741,	// (0x00007741) vtchi_icf_list_pane

0x9cab,	// (0x00009cab) list_vkb_icf_pane_t1_ParamLimits

0x9cab,	// (0x00009cab) list_vkb_icf_pane_t1

0x9cc2,	// (0x00009cc2) vtchi_icf_list_pane_t1_ParamLimits

0x9cc2,	// (0x00009cc2) vtchi_icf_list_pane_t1

0x9a58,	// (0x00009a58) popup_fep_ituss_window_ParamLimits

0x9a7e,	// (0x00009a7e) popup_fep_vtchi_icf_pane_ParamLimits

0x9aa4,	// (0x00009aa4) ituss_keypad_pane_ParamLimits

0x9ab4,	// (0x00009ab4) ituss_sks_pane

0x11e8,	// (0x000011e8) bg_icf_pane_ParamLimits

0x9c7c,	// (0x00009c7c) icf_edit_indi_pane_ParamLimits

0x9c7c,	// (0x00009c7c) icf_edit_indi_pane

0x9c8b,	// (0x00009c8b) list_vkb_icf_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_icf_pane_cp01_ParamLimits

0x9c97,	// (0x00009c97) icf_edit_indi_pane_cp01_ParamLimits

0x9c97,	// (0x00009c97) icf_edit_indi_pane_cp01

0x9ca3,	// (0x00009ca3) vtchi_query_pane

0x6102,	// (0x00006102) icf_edit_indi_pane_g1_ParamLimits

0x6102,	// (0x00006102) icf_edit_indi_pane_g1

0x9cdb,	// (0x00009cdb) icf_edit_indi_pane_g2_ParamLimits

0x9cdb,	// (0x00009cdb) icf_edit_indi_pane_g2

0x0001,

0xa6cc,	// (0x0000a6cc) icf_edit_indi_pane_g_ParamLimits

0xa6cc,	// (0x0000a6cc) icf_edit_indi_pane_g

0x9ce7,	// (0x00009ce7) icf_edit_indi_pane_t1

0x9cf5,	// (0x00009cf5) bg_input_focus_pane_cp042

0x9cfe,	// (0x00009cfe) vtchi_button_pane

0x9d07,	// (0x00009d07) vtchi_query_pane_t1

0x9d15,	// (0x00009d15) vtchi_query_pane_t2

0x9d23,	// (0x00009d23) vtchi_query_pane_t3

0x0002,

0xa6d1,	// (0x0000a6d1) vtchi_query_pane_t

0x0020,	// (0x00000020) bg_button_pane_cp13

0x9d31,	// (0x00009d31) vtchi_button_pane_g1

0x7d2c,	// (0x00007d2c) ituss_sks_pane_g1

0x9d39,	// (0x00009d39) ituss_sks_pane_g2

0x0001,

0xa6d8,	// (0x0000a6d8) ituss_sks_pane_g

0x9d42,	// (0x00009d42) ituss_sks_pane_t1

0x9d50,	// (0x00009d50) ituss_sks_pane_t2

0x0001,

0xa6dd,	// (0x0000a6dd) ituss_sks_pane_t

0x5769,	// (0x00005769) indicator_nsta_pane_cp_g1

0x5772,	// (0x00005772) indicator_nsta_pane_cp_g2

0x577a,	// (0x0000577a) indicator_nsta_pane_cp_g3

0x5782,	// (0x00005782) indicator_nsta_pane_cp_g4

0x578a,	// (0x0000578a) indicator_nsta_pane_cp_g5

0x5792,	// (0x00005792) indicator_nsta_pane_cp_g6

0x0005,

0xa293,	// (0x0000a293) indicator_nsta_pane_cp_g

0xdb33,	// (0x0000db33) cell_graphic2_pane_t2_ParamLimits

0xdb33,	// (0x0000db33) cell_graphic2_pane_t2

0x0001,

0xe51f,	// (0x0000e51f) cell_graphic2_pane_t_ParamLimits

0xe51f,	// (0x0000e51f) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal

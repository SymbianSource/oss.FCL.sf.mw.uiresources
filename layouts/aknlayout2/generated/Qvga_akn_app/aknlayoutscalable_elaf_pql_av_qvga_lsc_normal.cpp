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
0xa4cd,	// (0x0000a4cd) Screen

0xa4d7,	// (0x0000a4d7) application_window_ParamLimits

0xa4d7,	// (0x0000a4d7) application_window

0x002a,	// (0x0000002a) screen_g1

0xa505,	// (0x0000a505) area_bottom_pane_ParamLimits

0xa505,	// (0x0000a505) area_bottom_pane

0x011d,	// (0x0000011d) area_top_pane_ParamLimits

0x011d,	// (0x0000011d) area_top_pane

0x0195,	// (0x00000195) main_pane_ParamLimits

0x0195,	// (0x00000195) main_pane

0x024e,	// (0x0000024e) misc_graphics

0xb9d8,	// (0x0000b9d8) battery_pane_ParamLimits

0xb9d8,	// (0x0000b9d8) battery_pane

0x3b4c,	// (0x00003b4c) bg_status_flat_pane_g8

0x3b54,	// (0x00003b54) bg_status_flat_pane_g9

0x2e05,	// (0x00002e05) context_pane_ParamLimits

0x2e05,	// (0x00002e05) context_pane

0xbb32,	// (0x0000bb32) navi_pane_ParamLimits

0xbb32,	// (0x0000bb32) navi_pane

0xbba7,	// (0x0000bba7) signal_pane_ParamLimits

0xbba7,	// (0x0000bba7) signal_pane

0x0008,

0x9e80,	// (0x00009e80) bg_status_flat_pane_g

0xbc33,	// (0x0000bc33) status_pane_g1_ParamLimits

0xbc33,	// (0x0000bc33) status_pane_g1

0xbc3f,	// (0x0000bc3f) status_pane_g2_ParamLimits

0xbc3f,	// (0x0000bc3f) status_pane_g2

0x301a,	// (0x0000301a) status_pane_g3_ParamLimits

0x301a,	// (0x0000301a) status_pane_g3

0x0004,

0xe1a5,	// (0x0000e1a5) status_pane_g_ParamLimits

0xe1a5,	// (0x0000e1a5) status_pane_g

0xbc4b,	// (0x0000bc4b) title_pane_ParamLimits

0xbc4b,	// (0x0000bc4b) title_pane

0xbca6,	// (0x0000bca6) uni_indicator_pane_ParamLimits

0xbca6,	// (0x0000bca6) uni_indicator_pane

0x27da,	// (0x000027da) bg_list_pane_ParamLimits

0x27da,	// (0x000027da) bg_list_pane

0xb3a0,	// (0x0000b3a0) find_pane

0xb3a8,	// (0x0000b3a8) listscroll_app_pane_ParamLimits

0xb3a8,	// (0x0000b3a8) listscroll_app_pane

0x280e,	// (0x0000280e) listscroll_form_pane

0xb3b4,	// (0x0000b3b4) listscroll_gen_pane_ParamLimits

0xb3b4,	// (0x0000b3b4) listscroll_gen_pane

0x280e,	// (0x0000280e) listscroll_set_pane

0xb3c9,	// (0x0000b3c9) main_idle_act_pane

0x22d6,	// (0x000022d6) main_idle_trad_pane

0x22d6,	// (0x000022d6) main_list_empty_pane

0x283d,	// (0x0000283d) main_midp_pane

0x2849,	// (0x00002849) main_pane_g1_ParamLimits

0x2849,	// (0x00002849) main_pane_g1

0xb3dc,	// (0x0000b3dc) popup_ai_message_window_ParamLimits

0xb3dc,	// (0x0000b3dc) popup_ai_message_window

0xb460,	// (0x0000b460) popup_fep_china_uni_window_ParamLimits

0xb460,	// (0x0000b460) popup_fep_china_uni_window

0x2933,	// (0x00002933) popup_fep_japan_candidate_window_ParamLimits

0x2933,	// (0x00002933) popup_fep_japan_candidate_window

0x2951,	// (0x00002951) popup_fep_japan_predictive_window_ParamLimits

0x2951,	// (0x00002951) popup_fep_japan_predictive_window

0xb49e,	// (0x0000b49e) popup_find_window

0xb4b7,	// (0x0000b4b7) popup_grid_graphic_window_ParamLimits

0xb4b7,	// (0x0000b4b7) popup_grid_graphic_window

0x29a8,	// (0x000029a8) popup_large_graphic_colour_window

0xb533,	// (0x0000b533) popup_menu_window_ParamLimits

0xb533,	// (0x0000b533) popup_menu_window

0xb691,	// (0x0000b691) popup_note_image_window

0xb659,	// (0x0000b659) popup_note_wait_window_ParamLimits

0xb659,	// (0x0000b659) popup_note_wait_window

0xb6a7,	// (0x0000b6a7) popup_note_window_ParamLimits

0xb6a7,	// (0x0000b6a7) popup_note_window

0xb73b,	// (0x0000b73b) popup_query_code_window_ParamLimits

0xb73b,	// (0x0000b73b) popup_query_code_window

0x2b65,	// (0x00002b65) popup_query_data_code_window_ParamLimits

0x2b65,	// (0x00002b65) popup_query_data_code_window

0xb773,	// (0x0000b773) popup_query_data_window_ParamLimits

0xb773,	// (0x0000b773) popup_query_data_window

0xb7e7,	// (0x0000b7e7) popup_query_sat_info_window_ParamLimits

0xb7e7,	// (0x0000b7e7) popup_query_sat_info_window

0xb874,	// (0x0000b874) popup_snote_single_graphic_window_ParamLimits

0xb874,	// (0x0000b874) popup_snote_single_graphic_window

0xb874,	// (0x0000b874) popup_snote_single_text_window_ParamLimits

0xb874,	// (0x0000b874) popup_snote_single_text_window

0x2bd4,	// (0x00002bd4) popup_sub_window_general

0x2cd8,	// (0x00002cd8) popup_window_general_ParamLimits

0x2cd8,	// (0x00002cd8) popup_window_general

0x2ceb,	// (0x00002ceb) power_save_pane

0xb249,	// (0x0000b249) control_pane_g1_ParamLimits

0xb249,	// (0x0000b249) control_pane_g1

0x2659,	// (0x00002659) control_pane_g2_ParamLimits

0x2659,	// (0x00002659) control_pane_g2

0x267a,	// (0x0000267a) control_pane_g3_ParamLimits

0x267a,	// (0x0000267a) control_pane_g3

0x0007,

0xe18d,	// (0x0000e18d) control_pane_g_ParamLimits

0xe18d,	// (0x0000e18d) control_pane_g

0xb2a6,	// (0x0000b2a6) control_pane_t1_ParamLimits

0xb2a6,	// (0x0000b2a6) control_pane_t1

0xb302,	// (0x0000b302) control_pane_t2_ParamLimits

0xb302,	// (0x0000b302) control_pane_t2

0x0002,

0xe19e,	// (0x0000e19e) control_pane_t_ParamLimits

0xe19e,	// (0x0000e19e) control_pane_t

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

0x9d91,	// (0x00009d91) status_small_pane_g_ParamLimits

0x9d91,	// (0x00009d91) status_small_pane_g

0x2601,	// (0x00002601) status_small_pane_t1

0x2624,	// (0x00002624) status_small_wait_pane_ParamLimits

0x2624,	// (0x00002624) status_small_wait_pane

0xb085,	// (0x0000b085) aid_levels_signal_ParamLimits

0xb085,	// (0x0000b085) aid_levels_signal

0xb099,	// (0x0000b099) signal_pane_g1_ParamLimits

0xb099,	// (0x0000b099) signal_pane_g1

0xb0b3,	// (0x0000b0b3) signal_pane_g2_ParamLimits

0xb0b3,	// (0x0000b0b3) signal_pane_g2

0x0001,

0xe171,	// (0x0000e171) signal_pane_g_ParamLimits

0xe171,	// (0x0000e171) signal_pane_g

0x1c28,	// (0x00001c28) context_pane_g1

0xa655,	// (0x0000a655) title_pane_g1

0xa697,	// (0x0000a697) title_pane_t1

0x043c,	// (0x0000043c) title_pane_t2

0x0462,	// (0x00000462) title_pane_t3

0x0002,

0xe0a3,	// (0x0000e0a3) title_pane_t

0xbccc,	// (0x0000bccc) aid_levels_battery_ParamLimits

0xbccc,	// (0x0000bccc) aid_levels_battery

0xbce4,	// (0x0000bce4) battery_pane_g1_ParamLimits

0xbce4,	// (0x0000bce4) battery_pane_g1

0xbcff,	// (0x0000bcff) battery_pane_g2_ParamLimits

0xbcff,	// (0x0000bcff) battery_pane_g2

0x0001,

0xe1b0,	// (0x0000e1b0) battery_pane_g_ParamLimits

0xe1b0,	// (0x0000e1b0) battery_pane_g

0xc084,	// (0x0000c084) uni_indicator_pane_g1

0xc099,	// (0x0000c099) uni_indicator_pane_g2

0xc0af,	// (0x0000c0af) uni_indicator_pane_g3

0x0005,

0xe1ec,	// (0x0000e1ec) uni_indicator_pane_g

0x1400,	// (0x00001400) navi_icon_pane_ParamLimits

0x1400,	// (0x00001400) navi_icon_pane

0x024e,	// (0x0000024e) navi_midp_pane

0x024e,	// (0x0000024e) navi_navi_pane

0x1400,	// (0x00001400) navi_text_pane_ParamLimits

0x1400,	// (0x00001400) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x0939,	// (0x00000939) status_small_wait_pane_g2

0x0001,

0x9f23,	// (0x00009f23) status_small_wait_pane_g

0xc02a,	// (0x0000c02a) navi_navi_icon_text_pane

0xc032,	// (0x0000c032) navi_navi_pane_g1_ParamLimits

0xc032,	// (0x0000c032) navi_navi_pane_g1

0xc044,	// (0x0000c044) navi_navi_pane_g2_ParamLimits

0xc044,	// (0x0000c044) navi_navi_pane_g2

0x0001,

0xe1e7,	// (0x0000e1e7) navi_navi_pane_g_ParamLimits

0xe1e7,	// (0x0000e1e7) navi_navi_pane_g

0xc056,	// (0x0000c056) navi_navi_tabs_pane

0xc02a,	// (0x0000c02a) navi_navi_text_pane

0xc02a,	// (0x0000c02a) navi_navi_volume_pane

0x428e,	// (0x0000428e) navi_text_pane_t1

0x4282,	// (0x00004282) navi_icon_pane_g1

0x41d6,	// (0x000041d6) navi_navi_text_pane_t1

0x41c5,	// (0x000041c5) navi_navi_volume_pane_g1

0xc021,	// (0x0000c021) volume_small_pane

0xbf7d,	// (0x0000bf7d) navi_navi_icon_text_pane_g1

0xbf85,	// (0x0000bf85) navi_navi_icon_text_pane_t1

0x3bac,	// (0x00003bac) navi_tabs_2_long_pane

0x3bac,	// (0x00003bac) navi_tabs_2_pane

0x3bac,	// (0x00003bac) navi_tabs_3_long_pane

0x3bac,	// (0x00003bac) navi_tabs_3_pane

0x3bac,	// (0x00003bac) navi_tabs_4_pane

0xbf5d,	// (0x0000bf5d) tabs_2_active_pane_ParamLimits

0xbf5d,	// (0x0000bf5d) tabs_2_active_pane

0xbf6d,	// (0x0000bf6d) tabs_2_passive_pane_ParamLimits

0xbf6d,	// (0x0000bf6d) tabs_2_passive_pane

0xbf2b,	// (0x0000bf2b) tabs_3_active_pane_ParamLimits

0xbf2b,	// (0x0000bf2b) tabs_3_active_pane

0xbf3b,	// (0x0000bf3b) tabs_3_passive_pane_ParamLimits

0xbf3b,	// (0x0000bf3b) tabs_3_passive_pane

0xbf4c,	// (0x0000bf4c) tabs_3_passive_pane_cp_ParamLimits

0xbf4c,	// (0x0000bf4c) tabs_3_passive_pane_cp

0xbee7,	// (0x0000bee7) tabs_4_active_pane_ParamLimits

0xbee7,	// (0x0000bee7) tabs_4_active_pane

0xbef8,	// (0x0000bef8) tabs_4_passive_pane_ParamLimits

0xbef8,	// (0x0000bef8) tabs_4_passive_pane

0xbf09,	// (0x0000bf09) tabs_4_passive_pane_cp_ParamLimits

0xbf09,	// (0x0000bf09) tabs_4_passive_pane_cp

0xbf1a,	// (0x0000bf1a) tabs_4_passive_pane_cp2_ParamLimits

0xbf1a,	// (0x0000bf1a) tabs_4_passive_pane_cp2

0xbec7,	// (0x0000bec7) tabs_2_long_active_pane_ParamLimits

0xbec7,	// (0x0000bec7) tabs_2_long_active_pane

0xbed7,	// (0x0000bed7) tabs_2_long_passive_pane_ParamLimits

0xbed7,	// (0x0000bed7) tabs_2_long_passive_pane

0xbe90,	// (0x0000be90) tabs_3_long_active_pane_ParamLimits

0xbe90,	// (0x0000be90) tabs_3_long_active_pane

0xbea3,	// (0x0000bea3) tabs_3_long_passive_pane_ParamLimits

0xbea3,	// (0x0000bea3) tabs_3_long_passive_pane

0xbeb4,	// (0x0000beb4) tabs_3_long_passive_pane_cp_ParamLimits

0xbeb4,	// (0x0000beb4) tabs_3_long_passive_pane_cp

0x3f69,	// (0x00003f69) volume_small_pane_g1

0x3f72,	// (0x00003f72) volume_small_pane_g2

0x3f7b,	// (0x00003f7b) volume_small_pane_g3

0x3f84,	// (0x00003f84) volume_small_pane_g4

0x3f8d,	// (0x00003f8d) volume_small_pane_g5

0x3f96,	// (0x00003f96) volume_small_pane_g6

0x3f9f,	// (0x00003f9f) volume_small_pane_g7

0x3fa8,	// (0x00003fa8) volume_small_pane_g8

0x3fb1,	// (0x00003fb1) volume_small_pane_g9

0x3fba,	// (0x00003fba) volume_small_pane_g10

0x0009,

0x9ebd,	// (0x00009ebd) volume_small_pane_g

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_active_pane_g1

0xa724,	// (0x0000a724) tabs_3_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_passive_pane_g1

0xa724,	// (0x0000a724) tabs_3_passive_pane_t1

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3

0x4b6c,	// (0x00004b6c) tabs_4_active_pane_g1

0xa73a,	// (0x0000a73a) tabs_4_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp3

0x4b6c,	// (0x00004b6c) tabs_4_1_passive_pane_g1

0xa73a,	// (0x0000a73a) tabs_4_1_passive_pane_t1

0x283d,	// (0x0000283d) list_highlight_pane_cp2

0xc17d,	// (0x0000c17d) list_set_pane_ParamLimits

0xc17d,	// (0x0000c17d) list_set_pane

0xc20b,	// (0x0000c20b) main_pane_set_t1_ParamLimits

0xc20b,	// (0x0000c20b) main_pane_set_t1

0xc22b,	// (0x0000c22b) main_pane_set_t2_ParamLimits

0xc22b,	// (0x0000c22b) main_pane_set_t2

0xc23f,	// (0x0000c23f) main_pane_set_t3_ParamLimits

0xc23f,	// (0x0000c23f) main_pane_set_t3

0xc251,	// (0x0000c251) main_pane_set_t4_ParamLimits

0xc251,	// (0x0000c251) main_pane_set_t4

0x0003,

0xe235,	// (0x0000e235) main_pane_set_t_ParamLimits

0xe235,	// (0x0000e235) main_pane_set_t

0xc263,	// (0x0000c263) setting_code_pane

0xc26b,	// (0x0000c26b) setting_slider_graphic_pane

0xc26b,	// (0x0000c26b) setting_slider_pane

0xc26b,	// (0x0000c26b) setting_text_pane

0xc26b,	// (0x0000c26b) setting_volume_pane

0xa750,	// (0x0000a750) volume_set_pane

0x0474,	// (0x00000474) bg_set_opt_pane_cp

0x04be,	// (0x000004be) setting_slider_pane_t1

0xa758,	// (0x0000a758) setting_slider_pane_t2

0xa771,	// (0x0000a771) setting_slider_pane_t3

0x0002,

0xe0aa,	// (0x0000e0aa) setting_slider_pane_t

0x0504,	// (0x00000504) slider_set_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1

0xa788,	// (0x0000a788) setting_slider_graphic_pane_t1

0xa797,	// (0x0000a797) setting_slider_graphic_pane_t2

0x0001,

0xe0b1,	// (0x0000e0b1) setting_slider_graphic_pane_t

0xa7a6,	// (0x0000a7a6) slider_set_pane_cp

0x024e,	// (0x0000024e) input_focus_pane_cp1

0x4873,	// (0x00004873) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x024e,	// (0x0000024e) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x0549,	// (0x00000549) setting_code_pane_t1

0x989a,	// (0x0000989a) set_text_pane_t1_ParamLimits

0x989a,	// (0x0000989a) set_text_pane_t1

0x130e,	// (0x0000130e) set_opt_bg_pane_g1

0x1316,	// (0x00001316) set_opt_bg_pane_g2

0xc13d,	// (0x0000c13d) set_opt_bg_pane_g3

0x1326,	// (0x00001326) set_opt_bg_pane_g4

0x132e,	// (0x0000132e) set_opt_bg_pane_g5

0x1336,	// (0x00001336) set_opt_bg_pane_g6

0xc145,	// (0x0000c145) set_opt_bg_pane_g7

0xc14d,	// (0x0000c14d) set_opt_bg_pane_g8

0xc155,	// (0x0000c155) set_opt_bg_pane_g9

0x0008,

0xe222,	// (0x0000e222) set_opt_bg_pane_g

0x47e2,	// (0x000047e2) slider_set_pane_g1

0x47ef,	// (0x000047ef) slider_set_pane_g2

0x0006,

0xe213,	// (0x0000e213) slider_set_pane_g

0xc0c5,	// (0x0000c0c5) volume_set_pane_g1

0xc0cd,	// (0x0000c0cd) volume_set_pane_g2

0xc0d5,	// (0x0000c0d5) volume_set_pane_g3

0xc0dd,	// (0x0000c0dd) volume_set_pane_g4

0xc0e5,	// (0x0000c0e5) volume_set_pane_g5

0xc0ed,	// (0x0000c0ed) volume_set_pane_g6

0xc0f5,	// (0x0000c0f5) volume_set_pane_g7

0xc0fd,	// (0x0000c0fd) volume_set_pane_g8

0xc105,	// (0x0000c105) volume_set_pane_g9

0xc10d,	// (0x0000c10d) volume_set_pane_g10

0x0009,

0xe1f9,	// (0x0000e1f9) volume_set_pane_g

0xa7ae,	// (0x0000a7ae) indicator_pane_ParamLimits

0xa7ae,	// (0x0000a7ae) indicator_pane

0xa7d6,	// (0x0000a7d6) main_idle_pane_g2_ParamLimits

0xa7d6,	// (0x0000a7d6) main_idle_pane_g2

0xa806,	// (0x0000a806) main_pane_idle_g1_ParamLimits

0xa806,	// (0x0000a806) main_pane_idle_g1

0x05af,	// (0x000005af) popup_clock_digital_analogue_window_ParamLimits

0x05af,	// (0x000005af) popup_clock_digital_analogue_window

0xa82b,	// (0x0000a82b) soft_indicator_pane_ParamLimits

0xa82b,	// (0x0000a82b) soft_indicator_pane

0xa845,	// (0x0000a845) wallpaper_pane_ParamLimits

0xa845,	// (0x0000a845) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xa857,	// (0x0000a857) indicator_pane_g1_ParamLimits

0xa857,	// (0x0000a857) indicator_pane_g1

0x4d04,	// (0x00004d04) navi_navi_icon_text_pane_srt_g1

0x0601,	// (0x00000601) soft_indicator_pane_t1

0x061b,	// (0x0000061b) aid_ps_area_pane

0xa870,	// (0x0000a870) aid_ps_clock_pane

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

0x9b8d,	// (0x00009b8d) power_save_pane_g_ParamLimits

0x9b8d,	// (0x00009b8d) power_save_pane_g

0x066d,	// (0x0000066d) power_save_pane_t1_ParamLimits

0x066d,	// (0x0000066d) power_save_pane_t1

0xa870,	// (0x0000a870) aid_ps_clock_pane_ParamLimits

0x0638,	// (0x00000638) aid_ps_indicator_pane_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4_ParamLimits

0x067f,	// (0x0000067f) power_save_pane_t4

0x0001,

0x9b92,	// (0x00009b92) power_save_pane_t_ParamLimits

0x9b92,	// (0x00009b92) power_save_pane_t

0x06a9,	// (0x000006a9) power_save_t3_ParamLimits

0x06a9,	// (0x000006a9) power_save_t3

0x0694,	// (0x00000694) power_save_t2_ParamLimits

0x0694,	// (0x00000694) power_save_t2

0x06be,	// (0x000006be) indicator_ps_pane_g1

0xa87c,	// (0x0000a87c) ai_gene_pane_ParamLimits

0xa87c,	// (0x0000a87c) ai_gene_pane

0xa893,	// (0x0000a893) ai_links_pane_ParamLimits

0xa893,	// (0x0000a893) ai_links_pane

0xa8a5,	// (0x0000a8a5) indicator_pane_cp1_ParamLimits

0xa8a5,	// (0x0000a8a5) indicator_pane_cp1

0xa8b4,	// (0x0000a8b4) main_pane_idle_g1_cp_ParamLimits

0xa8b4,	// (0x0000a8b4) main_pane_idle_g1_cp

0x06f7,	// (0x000006f7) popup_ai_links_title_window

0xa8cc,	// (0x0000a8cc) soft_indicator_pane_cp1_ParamLimits

0xa8cc,	// (0x0000a8cc) soft_indicator_pane_cp1

0x456d,	// (0x0000456d) ai_links_pane_g1

0x4576,	// (0x00004576) grid_ai_links_pane

0xc07b,	// (0x0000c07b) ai_gene_pane_1

0x455b,	// (0x0000455b) ai_gene_pane_2

0x4564,	// (0x00004564) list_highlight_pane_cp4

0xc05f,	// (0x0000c05f) cell_ai_link_pane_ParamLimits

0xc05f,	// (0x0000c05f) cell_ai_link_pane

0x452e,	// (0x0000452e) cell_ai_link_pane_g1

0x0939,	// (0x00000939) cell_ai_link_pane_g2

0x0001,

0x9f1e,	// (0x00009f1e) cell_ai_link_pane_g

0x024e,	// (0x0000024e) grid_highlight_cp2

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp1

0x071a,	// (0x0000071a) popup_ai_links_title_window_t1

0x4480,	// (0x00004480) ai_gene_pane_1_g1_ParamLimits

0x4480,	// (0x00004480) ai_gene_pane_1_g1

0x448c,	// (0x0000448c) ai_gene_pane_1_g2_ParamLimits

0x448c,	// (0x0000448c) ai_gene_pane_1_g2

0x0001,

0x9f14,	// (0x00009f14) ai_gene_pane_1_g_ParamLimits

0x9f14,	// (0x00009f14) ai_gene_pane_1_g

0x4499,	// (0x00004499) ai_gene_pane_1_t1_ParamLimits

0x4499,	// (0x00004499) ai_gene_pane_1_t1

0x44cd,	// (0x000044cd) grid_ai_soft_ind_pane

0x446b,	// (0x0000446b) ai_gene_pane_2_t1_ParamLimits

0x446b,	// (0x0000446b) ai_gene_pane_2_t1

0xa8e0,	// (0x0000a8e0) main_pane_empty_t1_ParamLimits

0xa8e0,	// (0x0000a8e0) main_pane_empty_t1

0xa8fd,	// (0x0000a8fd) main_pane_empty_t2_ParamLimits

0xa8fd,	// (0x0000a8fd) main_pane_empty_t2

0xa915,	// (0x0000a915) main_pane_empty_t3_ParamLimits

0xa915,	// (0x0000a915) main_pane_empty_t3

0xa928,	// (0x0000a928) main_pane_empty_t4_ParamLimits

0xa928,	// (0x0000a928) main_pane_empty_t4

0xa93b,	// (0x0000a93b) main_pane_empty_t5_ParamLimits

0xa93b,	// (0x0000a93b) main_pane_empty_t5

0x0004,

0xe0b6,	// (0x0000e0b6) main_pane_empty_t_ParamLimits

0xe0b6,	// (0x0000e0b6) main_pane_empty_t

0x1400,	// (0x00001400) bg_popup_window_pane_ParamLimits

0x1400,	// (0x00001400) bg_popup_window_pane

0x41e5,	// (0x000041e5) find_popup_pane_cp2_ParamLimits

0x41e5,	// (0x000041e5) find_popup_pane_cp2

0x41f1,	// (0x000041f1) heading_pane_ParamLimits

0x41f1,	// (0x000041f1) heading_pane

0x024e,	// (0x0000024e) bg_popup_sub_pane

0xbfa2,	// (0x0000bfa2) bg_popup_window_pane_g1_ParamLimits

0xbfa2,	// (0x0000bfa2) bg_popup_window_pane_g1

0xbfb1,	// (0x0000bfb1) bg_popup_window_pane_g2_ParamLimits

0xbfb1,	// (0x0000bfb1) bg_popup_window_pane_g2

0xbfbd,	// (0x0000bfbd) bg_popup_window_pane_g3_ParamLimits

0xbfbd,	// (0x0000bfbd) bg_popup_window_pane_g3

0xbfc9,	// (0x0000bfc9) bg_popup_window_pane_g4_ParamLimits

0xbfc9,	// (0x0000bfc9) bg_popup_window_pane_g4

0xbfd8,	// (0x0000bfd8) bg_popup_window_pane_g5_ParamLimits

0xbfd8,	// (0x0000bfd8) bg_popup_window_pane_g5

0xbfe8,	// (0x0000bfe8) bg_popup_window_pane_g6_ParamLimits

0xbfe8,	// (0x0000bfe8) bg_popup_window_pane_g6

0xbff4,	// (0x0000bff4) bg_popup_window_pane_g7_ParamLimits

0xbff4,	// (0x0000bff4) bg_popup_window_pane_g7

0xc003,	// (0x0000c003) bg_popup_window_pane_g8_ParamLimits

0xc003,	// (0x0000c003) bg_popup_window_pane_g8

0xc012,	// (0x0000c012) bg_popup_window_pane_g9_ParamLimits

0xc012,	// (0x0000c012) bg_popup_window_pane_g9

0x41b9,	// (0x000041b9) bg_popup_window_pane_g10_ParamLimits

0x41b9,	// (0x000041b9) bg_popup_window_pane_g10

0x0009,

0xe1d2,	// (0x0000e1d2) bg_popup_window_pane_g_ParamLimits

0xe1d2,	// (0x0000e1d2) bg_popup_window_pane_g

0x40e2,	// (0x000040e2) bg_popup_heading_pane_ParamLimits

0x40e2,	// (0x000040e2) bg_popup_heading_pane

0x4c6b,	// (0x00004c6b) tabs_4_passive_pane_cp_srt_ParamLimits

0x4c6b,	// (0x00004c6b) tabs_4_passive_pane_cp_srt

0x4c7d,	// (0x00004c7d) tabs_4_passive_pane_srt_ParamLimits

0x40f6,	// (0x000040f6) heading_pane_g2

0x4c7d,	// (0x00004c7d) tabs_4_passive_pane_srt

0x3395,	// (0x00003395) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3395,	// (0x00003395) bg_passive_tab_pane_cp3_srt

0x40fe,	// (0x000040fe) heading_pane_t1_ParamLimits

0x40fe,	// (0x000040fe) heading_pane_t1

0x4115,	// (0x00004115) heading_pane_t2_ParamLimits

0x4115,	// (0x00004115) heading_pane_t2

0x0001,

0x9ed7,	// (0x00009ed7) heading_pane_t_ParamLimits

0x9ed7,	// (0x00009ed7) heading_pane_t

0x3b14,	// (0x00003b14) bg_popup_heading_pane_g1

0x3bbd,	// (0x00003bbd) bg_popup_heading_pane_g2

0x3bc5,	// (0x00003bc5) bg_popup_heading_pane_g3

0x3bcd,	// (0x00003bcd) bg_popup_heading_pane_g4

0x3bd5,	// (0x00003bd5) bg_popup_heading_pane_g5

0x3bdd,	// (0x00003bdd) bg_popup_heading_pane_g6

0x3be5,	// (0x00003be5) bg_popup_heading_pane_g7

0x3bed,	// (0x00003bed) bg_popup_heading_pane_g8

0x3bf5,	// (0x00003bf5) bg_popup_heading_pane_g9

0x0008,

0x9e93,	// (0x00009e93) bg_popup_heading_pane_g

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

0x9e6d,	// (0x00009e6d) bg_popup_sub_pane_g

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

0x9ba2,	// (0x00009ba2) popup_note_window_t_ParamLimits

0x9ba2,	// (0x00009ba2) popup_note_window_t

0x084d,	// (0x0000084d) bg_popup_window_pane_cp6_ParamLimits

0x084d,	// (0x0000084d) bg_popup_window_pane_cp6

0x3a90,	// (0x00003a90) popup_note_image_window_g1_ParamLimits

0x3a90,	// (0x00003a90) popup_note_image_window_g1

0x3a9c,	// (0x00003a9c) popup_note_image_window_g2_ParamLimits

0x3a9c,	// (0x00003a9c) popup_note_image_window_g2

0x0001,

0x9e61,	// (0x00009e61) popup_note_image_window_g_ParamLimits

0x9e61,	// (0x00009e61) popup_note_image_window_g

0x3ab5,	// (0x00003ab5) popup_note_image_window_t1_ParamLimits

0x3ab5,	// (0x00003ab5) popup_note_image_window_t1

0x3ace,	// (0x00003ace) popup_note_image_window_t2_ParamLimits

0x3ace,	// (0x00003ace) popup_note_image_window_t2

0x3ae7,	// (0x00003ae7) popup_note_image_window_t3_ParamLimits

0x3ae7,	// (0x00003ae7) popup_note_image_window_t3

0x0002,

0x9e66,	// (0x00009e66) popup_note_image_window_t_ParamLimits

0x9e66,	// (0x00009e66) popup_note_image_window_t

0x395f,	// (0x0000395f) bg_popup_window_pane_cp7_ParamLimits

0x395f,	// (0x0000395f) bg_popup_window_pane_cp7

0x398f,	// (0x0000398f) popup_note_wait_window_g1_ParamLimits

0x398f,	// (0x0000398f) popup_note_wait_window_g1

0x399b,	// (0x0000399b) popup_note_wait_window_g2_ParamLimits

0x399b,	// (0x0000399b) popup_note_wait_window_g2

0x0002,

0x9e4f,	// (0x00009e4f) popup_note_wait_window_g_ParamLimits

0x9e4f,	// (0x00009e4f) popup_note_wait_window_g

0x39b3,	// (0x000039b3) popup_note_wait_window_t1_ParamLimits

0x39b3,	// (0x000039b3) popup_note_wait_window_t1

0x39da,	// (0x000039da) popup_note_wait_window_t2_ParamLimits

0x39da,	// (0x000039da) popup_note_wait_window_t2

0x39f7,	// (0x000039f7) popup_note_wait_window_t3_ParamLimits

0x39f7,	// (0x000039f7) popup_note_wait_window_t3

0x3a0a,	// (0x00003a0a) popup_note_wait_window_t4_ParamLimits

0x3a0a,	// (0x00003a0a) popup_note_wait_window_t4

0x0004,

0x9e56,	// (0x00009e56) popup_note_wait_window_t_ParamLimits

0x9e56,	// (0x00009e56) popup_note_wait_window_t

0x3a2f,	// (0x00003a2f) wait_bar_pane_ParamLimits

0x3a2f,	// (0x00003a2f) wait_bar_pane

0x024e,	// (0x0000024e) wait_anim_pane

0x024e,	// (0x0000024e) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0x9d21,	// (0x00009d21) wait_anim_pane_g

0x390f,	// (0x0000390f) wait_border_pane_g1

0x3918,	// (0x00003918) wait_border_pane_g2

0x3921,	// (0x00003921) wait_border_pane_g3

0x0002,

0x9e48,	// (0x00009e48) wait_border_pane_g

0x3871,	// (0x00003871) bg_popup_window_pane_cp16_ParamLimits

0x3871,	// (0x00003871) bg_popup_window_pane_cp16

0x387f,	// (0x0000387f) indicator_popup_pane_cp4_ParamLimits

0x387f,	// (0x0000387f) indicator_popup_pane_cp4

0x3893,	// (0x00003893) popup_query_data_window_t1_ParamLimits

0x3893,	// (0x00003893) popup_query_data_window_t1

0x38a5,	// (0x000038a5) popup_query_data_window_t2_ParamLimits

0x38a5,	// (0x000038a5) popup_query_data_window_t2

0x38be,	// (0x000038be) popup_query_data_window_t3_ParamLimits

0x38be,	// (0x000038be) popup_query_data_window_t3

0x0002,

0x9e41,	// (0x00009e41) popup_query_data_window_t_ParamLimits

0x9e41,	// (0x00009e41) popup_query_data_window_t

0x38d8,	// (0x000038d8) query_popup_data_pane_ParamLimits

0x38d8,	// (0x000038d8) query_popup_data_pane

0x38ec,	// (0x000038ec) query_popup_data_pane_cp1_ParamLimits

0x38ec,	// (0x000038ec) query_popup_data_pane_cp1

0x084d,	// (0x0000084d) bg_popup_window_pane_cp10_ParamLimits

0x084d,	// (0x0000084d) bg_popup_window_pane_cp10

0x37d4,	// (0x000037d4) indicator_popup_pane_ParamLimits

0x37d4,	// (0x000037d4) indicator_popup_pane

0x08a4,	// (0x000008a4) popup_query_code_window_t1_ParamLimits

0x08a4,	// (0x000008a4) popup_query_code_window_t1

0x37ec,	// (0x000037ec) popup_query_code_window_t2_ParamLimits

0x37ec,	// (0x000037ec) popup_query_code_window_t2

0x382a,	// (0x0000382a) popup_query_code_window_t3_ParamLimits

0x382a,	// (0x0000382a) popup_query_code_window_t3

0x0002,

0x9e3a,	// (0x00009e3a) popup_query_code_window_t_ParamLimits

0x9e3a,	// (0x00009e3a) popup_query_code_window_t

0x3859,	// (0x00003859) query_popup_pane_ParamLimits

0x3859,	// (0x00003859) query_popup_pane

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

0x9bad,	// (0x00009bad) popup_query_data_code_window_t_ParamLimits

0x9bad,	// (0x00009bad) popup_query_data_code_window_t

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

0x9bb6,	// (0x00009bb6) popup_info_list_pane_t_ParamLimits

0x9bb6,	// (0x00009bb6) popup_info_list_pane_t

0x024e,	// (0x0000024e) bg_popup_window_pane_cp12

0x4d3b,	// (0x00004d3b) find_popup_pane

0x0474,	// (0x00000474) bg_popup_window_pane_cp3

0x097d,	// (0x0000097d) heading_pane_cp3

0x0989,	// (0x00000989) listscroll_popup_graphic_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp4

0xa99e,	// (0x0000a99e) heading_pane_cp4

0x09ed,	// (0x000009ed) listscroll_popup_colour_pane

0x09f5,	// (0x000009f5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x09f5,	// (0x000009f5) cell_large_graphic_colour_none_popup_pane

0xa9a6,	// (0x0000a9a6) grid_large_graphic_colour_popup_pane_ParamLimits

0xa9a6,	// (0x0000a9a6) grid_large_graphic_colour_popup_pane

0xa9c2,	// (0x0000a9c2) listscroll_popup_colour_pane_g1_ParamLimits

0xa9c2,	// (0x0000a9c2) listscroll_popup_colour_pane_g1

0xa9d9,	// (0x0000a9d9) listscroll_popup_colour_pane_g2_ParamLimits

0xa9d9,	// (0x0000a9d9) listscroll_popup_colour_pane_g2

0x0a4c,	// (0x00000a4c) listscroll_popup_colour_pane_g3_ParamLimits

0x0a4c,	// (0x00000a4c) listscroll_popup_colour_pane_g3

0xa9ed,	// (0x0000a9ed) listscroll_popup_colour_pane_g4_ParamLimits

0xa9ed,	// (0x0000a9ed) listscroll_popup_colour_pane_g4

0x0003,

0xe0c1,	// (0x0000e0c1) listscroll_popup_colour_pane_g_ParamLimits

0xe0c1,	// (0x0000e0c1) listscroll_popup_colour_pane_g

0x0a6b,	// (0x00000a6b) scroll_pane_cp6_ParamLimits

0x0a6b,	// (0x00000a6b) scroll_pane_cp6

0xa9fc,	// (0x0000a9fc) cell_large_graphic_colour_popup_pane_ParamLimits

0xa9fc,	// (0x0000a9fc) cell_large_graphic_colour_popup_pane

0x0a9c,	// (0x00000a9c) cell_large_graphic_colour_none_popup_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp5

0x0aab,	// (0x00000aab) cell_large_graphic_colour_popup_pane_g1

0x0ab3,	// (0x00000ab3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0x9bc4,	// (0x00009bc4) cell_large_graphic_colour_popup_pane_g

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

0x9bc9,	// (0x00009bc9) popup_snote_single_text_window_t_ParamLimits

0x9bc9,	// (0x00009bc9) popup_snote_single_text_window_t

0x0bbb,	// (0x00000bbb) bg_popup_window_pane_cp9_ParamLimits

0x0bbb,	// (0x00000bbb) bg_popup_window_pane_cp9

0x0ae7,	// (0x00000ae7) popup_snote_single_graphic_window_g1_ParamLimits

0x0ae7,	// (0x00000ae7) popup_snote_single_graphic_window_g1

0x0bc9,	// (0x00000bc9) popup_snote_single_graphic_window_g2_ParamLimits

0x0bc9,	// (0x00000bc9) popup_snote_single_graphic_window_g2

0x0001,

0x9bd4,	// (0x00009bd4) popup_snote_single_graphic_window_g_ParamLimits

0x9bd4,	// (0x00009bd4) popup_snote_single_graphic_window_g

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

0x9bd9,	// (0x00009bd9) popup_snote_single_graphic_window_t_ParamLimits

0x9bd9,	// (0x00009bd9) popup_snote_single_graphic_window_t

0xc393,	// (0x0000c393) grid_graphic_popup_pane_ParamLimits

0xc393,	// (0x0000c393) grid_graphic_popup_pane

0xc3b6,	// (0x0000c3b6) listscroll_popup_graphic_pane_g1_ParamLimits

0xc3b6,	// (0x0000c3b6) listscroll_popup_graphic_pane_g1

0xc3ca,	// (0x0000c3ca) listscroll_popup_graphic_pane_g2_ParamLimits

0xc3ca,	// (0x0000c3ca) listscroll_popup_graphic_pane_g2

0x0001,

0xe258,	// (0x0000e258) listscroll_popup_graphic_pane_g_ParamLimits

0xe258,	// (0x0000e258) listscroll_popup_graphic_pane_g

0x4c3b,	// (0x00004c3b) scroll_pane_cp5

0xc34e,	// (0x0000c34e) cell_graphic_popup_pane_ParamLimits

0xc34e,	// (0x0000c34e) cell_graphic_popup_pane

0x4b74,	// (0x00004b74) cell_graphic_popup_pane_g1

0x4b7c,	// (0x00004b7c) cell_graphic_popup_pane_g2

0x0abb,	// (0x00000abb) cell_graphic_popup_pane_g3

0x0002,

0x9fb0,	// (0x00009fb0) cell_graphic_popup_pane_g

0x4b85,	// (0x00004b85) cell_graphic_popup_pane_t2

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp3

0x0c0d,	// (0x00000c0d) list_gen_pane_ParamLimits

0x0c0d,	// (0x00000c0d) list_gen_pane

0x0c3e,	// (0x00000c3e) scroll_pane

0xc321,	// (0x0000c321) bg_list_pane_g1_ParamLimits

0xc321,	// (0x0000c321) bg_list_pane_g1

0x4b0b,	// (0x00004b0b) bg_list_pane_g2_ParamLimits

0x4b0b,	// (0x00004b0b) bg_list_pane_g2

0x4b1e,	// (0x00004b1e) bg_list_pane_g3_ParamLimits

0x4b1e,	// (0x00004b1e) bg_list_pane_g3

0x4b30,	// (0x00004b30) bg_list_pane_g4_ParamLimits

0x4b30,	// (0x00004b30) bg_list_pane_g4

0xc33c,	// (0x0000c33c) bg_list_pane_g5_ParamLimits

0xc33c,	// (0x0000c33c) bg_list_pane_g5

0x0004,

0xe24d,	// (0x0000e24d) bg_list_pane_g_ParamLimits

0xe24d,	// (0x0000e24d) bg_list_pane_g

0xc2b1,	// (0x0000c2b1) list_double2_graphic_large_graphic_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double2_graphic_large_graphic_pane

0xc2b1,	// (0x0000c2b1) list_double2_graphic_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double2_graphic_pane

0xc2b1,	// (0x0000c2b1) list_double2_large_graphic_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double2_large_graphic_pane

0xc2b1,	// (0x0000c2b1) list_double2_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double2_pane

0xc2b1,	// (0x0000c2b1) list_double_graphic_heading_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double_graphic_heading_pane

0xc2b1,	// (0x0000c2b1) list_double_graphic_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double_graphic_pane

0xc2b1,	// (0x0000c2b1) list_double_heading_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double_heading_pane

0xc2b1,	// (0x0000c2b1) list_double_large_graphic_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double_large_graphic_pane

0xc2b1,	// (0x0000c2b1) list_double_number_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double_number_pane

0xc2b1,	// (0x0000c2b1) list_double_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double_pane

0xc2b1,	// (0x0000c2b1) list_double_time_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_double_time_pane

0xc2b1,	// (0x0000c2b1) list_setting_number_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_setting_number_pane

0xc2b1,	// (0x0000c2b1) list_setting_pane_ParamLimits

0xc2b1,	// (0x0000c2b1) list_setting_pane

0xc2c2,	// (0x0000c2c2) list_single_2graphic_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) list_single_2graphic_pane

0xc2c2,	// (0x0000c2c2) list_single_graphic_heading_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) list_single_graphic_heading_pane

0xc2c2,	// (0x0000c2c2) list_single_graphic_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) list_single_graphic_pane

0xc2c2,	// (0x0000c2c2) list_single_heading_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) list_single_heading_pane

0xc30f,	// (0x0000c30f) list_single_large_graphic_pane_ParamLimits

0xc30f,	// (0x0000c30f) list_single_large_graphic_pane

0xc2c2,	// (0x0000c2c2) list_single_number_heading_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) list_single_number_heading_pane

0xc2c2,	// (0x0000c2c2) list_single_number_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) list_single_number_pane

0xc2c2,	// (0x0000c2c2) list_single_pane_ParamLimits

0xc2c2,	// (0x0000c2c2) list_single_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp1

0x0e80,	// (0x00000e80) list_single_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_pane_g1

0x0dab,	// (0x00000dab) list_single_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_pane_g2

0x0001,

0x9c84,	// (0x00009c84) list_single_pane_g_ParamLimits

0x9c84,	// (0x00009c84) list_single_pane_g

0x0db7,	// (0x00000db7) list_single_pane_t1_ParamLimits

0x0db7,	// (0x00000db7) list_single_pane_t1

0x0e80,	// (0x00000e80) list_single_number_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_pane_g1

0x0dab,	// (0x00000dab) list_single_number_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_pane_g2

0x0001,

0x9c84,	// (0x00009c84) list_single_number_pane_g_ParamLimits

0x9c84,	// (0x00009c84) list_single_number_pane_g

0x0e8c,	// (0x00000e8c) list_single_number_pane_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_single_number_pane_t1

0xc115,	// (0x0000c115) list_single_number_pane_t2_ParamLimits

0xc115,	// (0x0000c115) list_single_number_pane_t2

0x0001,

0xe20e,	// (0x0000e20e) list_single_number_pane_t_ParamLimits

0xe20e,	// (0x0000e20e) list_single_number_pane_t

0x0e74,	// (0x00000e74) list_single_graphic_pane_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_pane_g1

0x0e80,	// (0x00000e80) list_single_graphic_pane_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_pane_g2

0x0dab,	// (0x00000dab) list_single_graphic_pane_g3_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_pane_g3

0x0002,

0x9c38,	// (0x00009c38) list_single_graphic_pane_g_ParamLimits

0x9c38,	// (0x00009c38) list_single_graphic_pane_g

0x0e8c,	// (0x00000e8c) list_single_graphic_pane_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_single_graphic_pane_t1

0x0e80,	// (0x00000e80) list_single_heading_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_g1

0x0dab,	// (0x00000dab) list_single_heading_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_heading_pane_g2

0x0001,

0x9c84,	// (0x00009c84) list_single_heading_pane_g_ParamLimits

0x9c84,	// (0x00009c84) list_single_heading_pane_g

0x0f49,	// (0x00000f49) list_single_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_heading_pane_t1

0xaa23,	// (0x0000aa23) list_single_heading_pane_t2_ParamLimits

0xaa23,	// (0x0000aa23) list_single_heading_pane_t2

0x0001,

0xe0ca,	// (0x0000e0ca) list_single_heading_pane_t_ParamLimits

0xe0ca,	// (0x0000e0ca) list_single_heading_pane_t

0x0e80,	// (0x00000e80) list_single_number_heading_pane_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_heading_pane_g1

0x0dab,	// (0x00000dab) list_single_number_heading_pane_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_heading_pane_g2

0x0001,

0x9c84,	// (0x00009c84) list_single_number_heading_pane_g_ParamLimits

0x9c84,	// (0x00009c84) list_single_number_heading_pane_g

0x0f49,	// (0x00000f49) list_single_number_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_number_heading_pane_t1

0xaa35,	// (0x0000aa35) list_single_number_heading_pane_t2_ParamLimits

0xaa35,	// (0x0000aa35) list_single_number_heading_pane_t2

0x52b9,	// (0x000052b9) list_single_number_heading_pane_t3_ParamLimits

0x52b9,	// (0x000052b9) list_single_number_heading_pane_t3

0x0002,

0xe0cf,	// (0x0000e0cf) list_single_number_heading_pane_t_ParamLimits

0xe0cf,	// (0x0000e0cf) list_single_number_heading_pane_t

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_g1

0xaa47,	// (0x0000aa47) list_single_graphic_heading_pane_g4_ParamLimits

0xaa47,	// (0x0000aa47) list_single_graphic_heading_pane_g4

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_g5

0x0002,

0xe0d6,	// (0x0000e0d6) list_single_graphic_heading_pane_g_ParamLimits

0xe0d6,	// (0x0000e0d6) list_single_graphic_heading_pane_g

0x0f49,	// (0x00000f49) list_single_graphic_heading_pane_t1_ParamLimits

0x0f49,	// (0x00000f49) list_single_graphic_heading_pane_t1

0xaa58,	// (0x0000aa58) list_single_graphic_heading_pane_t2_ParamLimits

0xaa58,	// (0x0000aa58) list_single_graphic_heading_pane_t2

0x0001,

0xe0dd,	// (0x0000e0dd) list_single_graphic_heading_pane_t_ParamLimits

0xe0dd,	// (0x0000e0dd) list_single_graphic_heading_pane_t

0x0d1a,	// (0x00000d1a) list_single_large_graphic_pane_g1_ParamLimits

0x0d1a,	// (0x00000d1a) list_single_large_graphic_pane_g1

0x0d26,	// (0x00000d26) list_single_large_graphic_pane_g2_ParamLimits

0x0d26,	// (0x00000d26) list_single_large_graphic_pane_g2

0x0d32,	// (0x00000d32) list_single_large_graphic_pane_g3_ParamLimits

0x0d32,	// (0x00000d32) list_single_large_graphic_pane_g3

0x0002,

0x9c08,	// (0x00009c08) list_single_large_graphic_pane_g_ParamLimits

0x9c08,	// (0x00009c08) list_single_large_graphic_pane_g

0x3918,	// (0x00003918) wait_border_pane_g2_copy1

0x0d3e,	// (0x00000d3e) list_single_large_graphic_pane_g4_cp2

0x0d46,	// (0x00000d46) list_single_large_graphic_pane_t1_ParamLimits

0x0d46,	// (0x00000d46) list_single_large_graphic_pane_t1

0xaa6a,	// (0x0000aa6a) list_double_pane_g1_ParamLimits

0xaa6a,	// (0x0000aa6a) list_double_pane_g1

0xaa76,	// (0x0000aa76) list_double_pane_g2_ParamLimits

0xaa76,	// (0x0000aa76) list_double_pane_g2

0x0001,

0xe0e2,	// (0x0000e0e2) list_double_pane_g_ParamLimits

0xe0e2,	// (0x0000e0e2) list_double_pane_g

0xaa82,	// (0x0000aa82) list_double_pane_t1_ParamLimits

0xaa82,	// (0x0000aa82) list_double_pane_t1

0xaa98,	// (0x0000aa98) list_double_pane_t2_ParamLimits

0xaa98,	// (0x0000aa98) list_double_pane_t2

0x0001,

0xe0e7,	// (0x0000e0e7) list_double_pane_t_ParamLimits

0xe0e7,	// (0x0000e0e7) list_double_pane_t

0xaaaa,	// (0x0000aaaa) list_double2_pane_g1_ParamLimits

0xaaaa,	// (0x0000aaaa) list_double2_pane_g1

0xaa76,	// (0x0000aa76) list_double2_pane_g2_ParamLimits

0xaa76,	// (0x0000aa76) list_double2_pane_g2

0x0001,

0xe0ec,	// (0x0000e0ec) list_double2_pane_g_ParamLimits

0xe0ec,	// (0x0000e0ec) list_double2_pane_g

0xaa82,	// (0x0000aa82) list_double2_pane_t1_ParamLimits

0xaa82,	// (0x0000aa82) list_double2_pane_t1

0xaabb,	// (0x0000aabb) list_double2_pane_t2_ParamLimits

0xaabb,	// (0x0000aabb) list_double2_pane_t2

0x0001,

0xe0f1,	// (0x0000e0f1) list_double2_pane_t_ParamLimits

0xe0f1,	// (0x0000e0f1) list_double2_pane_t

0xaa6a,	// (0x0000aa6a) list_double_number_pane_g1_ParamLimits

0xaa6a,	// (0x0000aa6a) list_double_number_pane_g1

0xaa76,	// (0x0000aa76) list_double_number_pane_g2_ParamLimits

0xaa76,	// (0x0000aa76) list_double_number_pane_g2

0x0001,

0xe0e2,	// (0x0000e0e2) list_double_number_pane_g_ParamLimits

0xe0e2,	// (0x0000e0e2) list_double_number_pane_g

0xaacd,	// (0x0000aacd) list_double_number_pane_t1_ParamLimits

0xaacd,	// (0x0000aacd) list_double_number_pane_t1

0xaadf,	// (0x0000aadf) list_double_number_pane_t2_ParamLimits

0xaadf,	// (0x0000aadf) list_double_number_pane_t2

0xaaf5,	// (0x0000aaf5) list_double_number_pane_t3_ParamLimits

0xaaf5,	// (0x0000aaf5) list_double_number_pane_t3

0x0002,

0xe0f6,	// (0x0000e0f6) list_double_number_pane_t_ParamLimits

0xe0f6,	// (0x0000e0f6) list_double_number_pane_t

0xab07,	// (0x0000ab07) list_double_graphic_pane_g1_ParamLimits

0xab07,	// (0x0000ab07) list_double_graphic_pane_g1

0xab13,	// (0x0000ab13) list_double_graphic_pane_g2_ParamLimits

0xab13,	// (0x0000ab13) list_double_graphic_pane_g2

0xab22,	// (0x0000ab22) list_double_graphic_pane_g3_ParamLimits

0xab22,	// (0x0000ab22) list_double_graphic_pane_g3

0x0003,

0xe0fd,	// (0x0000e0fd) list_double_graphic_pane_g_ParamLimits

0xe0fd,	// (0x0000e0fd) list_double_graphic_pane_g

0xab3a,	// (0x0000ab3a) list_double_graphic_pane_t1_ParamLimits

0xab3a,	// (0x0000ab3a) list_double_graphic_pane_t1

0xab50,	// (0x0000ab50) list_double_graphic_pane_t2_ParamLimits

0xab50,	// (0x0000ab50) list_double_graphic_pane_t2

0x0001,

0xe106,	// (0x0000e106) list_double_graphic_pane_t_ParamLimits

0xe106,	// (0x0000e106) list_double_graphic_pane_t

0xab07,	// (0x0000ab07) list_double2_graphic_pane_g1_ParamLimits

0xab07,	// (0x0000ab07) list_double2_graphic_pane_g1

0xaa6a,	// (0x0000aa6a) list_double2_graphic_pane_g2_ParamLimits

0xaa6a,	// (0x0000aa6a) list_double2_graphic_pane_g2

0xaa76,	// (0x0000aa76) list_double2_graphic_pane_g3_ParamLimits

0xaa76,	// (0x0000aa76) list_double2_graphic_pane_g3

0x0002,

0xe10b,	// (0x0000e10b) list_double2_graphic_pane_g_ParamLimits

0xe10b,	// (0x0000e10b) list_double2_graphic_pane_g

0xaadf,	// (0x0000aadf) list_double2_graphic_pane_t1_ParamLimits

0xaadf,	// (0x0000aadf) list_double2_graphic_pane_t1

0xab62,	// (0x0000ab62) list_double2_graphic_pane_t2_ParamLimits

0xab62,	// (0x0000ab62) list_double2_graphic_pane_t2

0x0001,

0xe112,	// (0x0000e112) list_double2_graphic_pane_t_ParamLimits

0xe112,	// (0x0000e112) list_double2_graphic_pane_t

0xab74,	// (0x0000ab74) list_double_large_graphic_pane_g1_ParamLimits

0xab74,	// (0x0000ab74) list_double_large_graphic_pane_g1

0xaaaa,	// (0x0000aaaa) list_double_large_graphic_pane_g2_ParamLimits

0xaaaa,	// (0x0000aaaa) list_double_large_graphic_pane_g2

0xaa76,	// (0x0000aa76) list_double_large_graphic_pane_g3_ParamLimits

0xaa76,	// (0x0000aa76) list_double_large_graphic_pane_g3

0xab9d,	// (0x0000ab9d) list_double_large_graphic_pane_g4_ParamLimits

0xab9d,	// (0x0000ab9d) list_double_large_graphic_pane_g4

0x0004,

0xe117,	// (0x0000e117) list_double_large_graphic_pane_g_ParamLimits

0xe117,	// (0x0000e117) list_double_large_graphic_pane_g

0xabae,	// (0x0000abae) list_double_large_graphic_pane_t1_ParamLimits

0xabae,	// (0x0000abae) list_double_large_graphic_pane_t1

0xabc7,	// (0x0000abc7) list_double_large_graphic_pane_t2_ParamLimits

0xabc7,	// (0x0000abc7) list_double_large_graphic_pane_t2

0x0001,

0xe122,	// (0x0000e122) list_double_large_graphic_pane_t_ParamLimits

0xe122,	// (0x0000e122) list_double_large_graphic_pane_t

0xabd9,	// (0x0000abd9) list_double2_large_graphic_pane_g1_ParamLimits

0xabd9,	// (0x0000abd9) list_double2_large_graphic_pane_g1

0xaaaa,	// (0x0000aaaa) list_double2_large_graphic_pane_g2_ParamLimits

0xaaaa,	// (0x0000aaaa) list_double2_large_graphic_pane_g2

0xaa76,	// (0x0000aa76) list_double2_large_graphic_pane_g3_ParamLimits

0xaa76,	// (0x0000aa76) list_double2_large_graphic_pane_g3

0x0002,

0xe127,	// (0x0000e127) list_double2_large_graphic_pane_g_ParamLimits

0xe127,	// (0x0000e127) list_double2_large_graphic_pane_g

0xabe5,	// (0x0000abe5) list_double2_large_graphic_pane_t1_ParamLimits

0xabe5,	// (0x0000abe5) list_double2_large_graphic_pane_t1

0xabfb,	// (0x0000abfb) list_double2_large_graphic_pane_t2_ParamLimits

0xabfb,	// (0x0000abfb) list_double2_large_graphic_pane_t2

0x0001,

0xe12e,	// (0x0000e12e) list_double2_large_graphic_pane_t_ParamLimits

0xe12e,	// (0x0000e12e) list_double2_large_graphic_pane_t

0xac0d,	// (0x0000ac0d) list_double_heading_pane_g1_ParamLimits

0xac0d,	// (0x0000ac0d) list_double_heading_pane_g1

0x0c8b,	// (0x00000c8b) list_double_heading_pane_g2_ParamLimits

0x0c8b,	// (0x00000c8b) list_double_heading_pane_g2

0x0001,

0xe133,	// (0x0000e133) list_double_heading_pane_g_ParamLimits

0xe133,	// (0x0000e133) list_double_heading_pane_g

0xac1e,	// (0x0000ac1e) list_double_heading_pane_t1_ParamLimits

0xac1e,	// (0x0000ac1e) list_double_heading_pane_t1

0xac34,	// (0x0000ac34) list_double_heading_pane_t2_ParamLimits

0xac34,	// (0x0000ac34) list_double_heading_pane_t2

0x0001,

0xe138,	// (0x0000e138) list_double_heading_pane_t_ParamLimits

0xe138,	// (0x0000e138) list_double_heading_pane_t

0x0e19,	// (0x00000e19) list_double_graphic_heading_pane_g1_ParamLimits

0x0e19,	// (0x00000e19) list_double_graphic_heading_pane_g1

0xac0d,	// (0x0000ac0d) list_double_graphic_heading_pane_g2_ParamLimits

0xac0d,	// (0x0000ac0d) list_double_graphic_heading_pane_g2

0x0c8b,	// (0x00000c8b) list_double_graphic_heading_pane_g3_ParamLimits

0x0c8b,	// (0x00000c8b) list_double_graphic_heading_pane_g3

0x0002,

0xe13d,	// (0x0000e13d) list_double_graphic_heading_pane_g_ParamLimits

0xe13d,	// (0x0000e13d) list_double_graphic_heading_pane_g

0xac46,	// (0x0000ac46) list_double_graphic_heading_pane_t1_ParamLimits

0xac46,	// (0x0000ac46) list_double_graphic_heading_pane_t1

0xac5c,	// (0x0000ac5c) list_double_graphic_heading_pane_t2_ParamLimits

0xac5c,	// (0x0000ac5c) list_double_graphic_heading_pane_t2

0x0001,

0xe144,	// (0x0000e144) list_double_graphic_heading_pane_t_ParamLimits

0xe144,	// (0x0000e144) list_double_graphic_heading_pane_t

0xaaaa,	// (0x0000aaaa) list_double_time_pane_g1_ParamLimits

0xaaaa,	// (0x0000aaaa) list_double_time_pane_g1

0xaa76,	// (0x0000aa76) list_double_time_pane_g2_ParamLimits

0xaa76,	// (0x0000aa76) list_double_time_pane_g2

0x0001,

0xe0ec,	// (0x0000e0ec) list_double_time_pane_g_ParamLimits

0xe0ec,	// (0x0000e0ec) list_double_time_pane_g

0xabe5,	// (0x0000abe5) list_double_time_pane_t1_ParamLimits

0xabe5,	// (0x0000abe5) list_double_time_pane_t1

0xac6e,	// (0x0000ac6e) list_double_time_pane_t2_ParamLimits

0xac6e,	// (0x0000ac6e) list_double_time_pane_t2

0xac80,	// (0x0000ac80) list_double_time_pane_t3_ParamLimits

0xac80,	// (0x0000ac80) list_double_time_pane_t3

0xac92,	// (0x0000ac92) list_double_time_pane_t4_ParamLimits

0xac92,	// (0x0000ac92) list_double_time_pane_t4

0x0003,

0xe149,	// (0x0000e149) list_double_time_pane_t_ParamLimits

0xe149,	// (0x0000e149) list_double_time_pane_t

0xaa6a,	// (0x0000aa6a) list_setting_pane_g1_ParamLimits

0xaa6a,	// (0x0000aa6a) list_setting_pane_g1

0xaa76,	// (0x0000aa76) list_setting_pane_g2_ParamLimits

0xaa76,	// (0x0000aa76) list_setting_pane_g2

0x0001,

0xe0e2,	// (0x0000e0e2) list_setting_pane_g_ParamLimits

0xe0e2,	// (0x0000e0e2) list_setting_pane_g

0xaca4,	// (0x0000aca4) list_setting_pane_t1_ParamLimits

0xaca4,	// (0x0000aca4) list_setting_pane_t1

0xacbe,	// (0x0000acbe) list_setting_pane_t2_ParamLimits

0xacbe,	// (0x0000acbe) list_setting_pane_t2

0x0002,

0xe152,	// (0x0000e152) list_setting_pane_t_ParamLimits

0xe152,	// (0x0000e152) list_setting_pane_t

0xacfb,	// (0x0000acfb) set_value_pane_cp_ParamLimits

0xacfb,	// (0x0000acfb) set_value_pane_cp

0xaa6a,	// (0x0000aa6a) list_setting_number_pane_g1_ParamLimits

0xaa6a,	// (0x0000aa6a) list_setting_number_pane_g1

0xaa76,	// (0x0000aa76) list_setting_number_pane_g2_ParamLimits

0xaa76,	// (0x0000aa76) list_setting_number_pane_g2

0x0001,

0xe0e2,	// (0x0000e0e2) list_setting_number_pane_g_ParamLimits

0xe0e2,	// (0x0000e0e2) list_setting_number_pane_g

0xad07,	// (0x0000ad07) list_setting_number_pane_t1_ParamLimits

0xad07,	// (0x0000ad07) list_setting_number_pane_t1

0xad20,	// (0x0000ad20) list_setting_number_pane_t2_ParamLimits

0xad20,	// (0x0000ad20) list_setting_number_pane_t2

0xad3a,	// (0x0000ad3a) list_setting_number_pane_t3_ParamLimits

0xad3a,	// (0x0000ad3a) list_setting_number_pane_t3

0x0003,

0xe159,	// (0x0000e159) list_setting_number_pane_t_ParamLimits

0xe159,	// (0x0000e159) list_setting_number_pane_t

0xacfb,	// (0x0000acfb) set_value_pane_ParamLimits

0xacfb,	// (0x0000acfb) set_value_pane

0x10ce,	// (0x000010ce) bg_set_opt_pane_ParamLimits

0x10ce,	// (0x000010ce) bg_set_opt_pane

0x10ef,	// (0x000010ef) set_value_pane_t1

0x10fd,	// (0x000010fd) slider_set_pane_cp3

0x1106,	// (0x00001106) volume_small_pane_cp

0x110f,	// (0x0000110f) list_form_gen_pane

0x0c62,	// (0x00000c62) scroll_pane_cp8

0x55b3,	// (0x000055b3) form_field_data_pane_ParamLimits

0x55b3,	// (0x000055b3) form_field_data_pane

0xad7d,	// (0x0000ad7d) form_field_data_wide_pane_ParamLimits

0xad7d,	// (0x0000ad7d) form_field_data_wide_pane

0xad9d,	// (0x0000ad9d) form_field_popup_pane_ParamLimits

0xad9d,	// (0x0000ad9d) form_field_popup_pane

0xadb5,	// (0x0000adb5) form_field_popup_wide_pane_ParamLimits

0xadb5,	// (0x0000adb5) form_field_popup_wide_pane

0x1196,	// (0x00001196) form_field_slider_pane_ParamLimits

0x1196,	// (0x00001196) form_field_slider_pane

0x11a9,	// (0x000011a9) form_field_slider_wide_pane_ParamLimits

0x11a9,	// (0x000011a9) form_field_slider_wide_pane

0x11bc,	// (0x000011bc) data_form_pane

0xadd6,	// (0x0000add6) form_field_data_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane

0x11f6,	// (0x000011f6) data_form_wide_pane

0x1222,	// (0x00001222) form_field_data_wide_pane_t1

0x0ad9,	// (0x00000ad9) input_focus_pane_cp6

0xadee,	// (0x0000adee) form_field_popup_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp7

0x11bc,	// (0x000011bc) list_form_pane

0x1264,	// (0x00001264) form_field_popup_wide_pane_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp8

0x1279,	// (0x00001279) list_form_wide_pane

0xae0e,	// (0x0000ae0e) form_field_slider_pane_t1_ParamLimits

0xae0e,	// (0x0000ae0e) form_field_slider_pane_t1

0xae24,	// (0x0000ae24) form_field_slider_pane_t2_ParamLimits

0xae24,	// (0x0000ae24) form_field_slider_pane_t2

0x0001,

0xe162,	// (0x0000e162) form_field_slider_pane_t_ParamLimits

0xe162,	// (0x0000e162) form_field_slider_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp9_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9

0xae39,	// (0x0000ae39) slider_cont_pane_ParamLimits

0xae39,	// (0x0000ae39) slider_cont_pane

0x12cc,	// (0x000012cc) form_field_slider_wide_pane_t1_ParamLimits

0x12cc,	// (0x000012cc) form_field_slider_wide_pane_t1

0x12de,	// (0x000012de) form_field_slider_wide_pane_t2_ParamLimits

0x12de,	// (0x000012de) form_field_slider_wide_pane_t2

0x0001,

0x9ca5,	// (0x00009ca5) form_field_slider_wide_pane_t_ParamLimits

0x9ca5,	// (0x00009ca5) form_field_slider_wide_pane_t

0x0797,	// (0x00000797) input_focus_pane_cp10_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10

0xae4d,	// (0x0000ae4d) slider_cont_pane_cp1_ParamLimits

0xae4d,	// (0x0000ae4d) slider_cont_pane_cp1

0xae63,	// (0x0000ae63) slider_form_pane_cp

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

0x9caa,	// (0x00009caa) input_focus_pane_g

0x3921,	// (0x00003921) wait_border_pane_g3_copy1

0xae6b,	// (0x0000ae6b) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xc298,	// (0x0000c298) data_form_wide_pane_t1

0x5073,	// (0x00005073) list_form_graphic_pane_cp_ParamLimits

0x5073,	// (0x00005073) list_form_graphic_pane_cp

0x49bd,	// (0x000049bd) slider_form_pane_g1

0x49c6,	// (0x000049c6) slider_form_pane_g2

0x0006,

0xe23e,	// (0x0000e23e) slider_form_pane_g

0x1370,	// (0x00001370) list_form_graphic_pane_ParamLimits

0x1370,	// (0x00001370) list_form_graphic_pane

0x139b,	// (0x0000139b) list_form_graphic_pane_g1

0x13a3,	// (0x000013a3) list_form_graphic_pane_t1_ParamLimits

0x13a3,	// (0x000013a3) list_form_graphic_pane_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5

0xae84,	// (0x0000ae84) find_pane_g1

0x13c1,	// (0x000013c1) input_find_pane

0xae8f,	// (0x0000ae8f) input_find_pane_g1_ParamLimits

0xae8f,	// (0x0000ae8f) input_find_pane_g1

0xae9b,	// (0x0000ae9b) input_find_pane_t1_ParamLimits

0xae9b,	// (0x0000ae9b) input_find_pane_t1

0xaeb0,	// (0x0000aeb0) input_find_pane_t2_ParamLimits

0xaeb0,	// (0x0000aeb0) input_find_pane_t2

0x0001,

0xe167,	// (0x0000e167) input_find_pane_t_ParamLimits

0xe167,	// (0x0000e167) input_find_pane_t

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

0x4cdc,	// (0x00004cdc) tabs_2_active_pane_g1

0xaed1,	// (0x0000aed1) tabs_2_active_pane_t1

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1_ParamLimits

0x0797,	// (0x00000797) bg_passive_tab_pane_cp1

0x4cdc,	// (0x00004cdc) tabs_2_passive_pane_g1

0xaed1,	// (0x0000aed1) tabs_2_passive_pane_t1

0x0474,	// (0x00000474) bg_active_tab_pane_cp4

0xaee7,	// (0x0000aee7) tabs_2_long_active_pane_t1

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4

0x3276,	// (0x00003276) list_single_midp_graphic_pane_g4_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5

0xaefe,	// (0x0000aefe) tabs_3_long_active_pane_t1

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

0x6933,	// (0x00006933) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6933,	// (0x00006933) list_single_graphic_hl_pane_t1_cp2

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

0x9cc4,	// (0x00009cc4) query_popup_data_pane_t_ParamLimits

0x9cc4,	// (0x00009cc4) query_popup_data_pane_t

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

0x9ccf,	// (0x00009ccf) bg_set_opt_pane_g

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

0x9ce2,	// (0x00009ce2) signal_pane_stacon_g_ParamLimits

0x9ce2,	// (0x00009ce2) signal_pane_stacon_g

0x1704,	// (0x00001704) title_pane_stacon_t1_ParamLimits

0x1704,	// (0x00001704) title_pane_stacon_t1

0x1729,	// (0x00001729) uni_indicator_pane_stacon_g1

0x1733,	// (0x00001733) uni_indicator_pane_stacon_g2

0x173d,	// (0x0000173d) uni_indicator_pane_stacon_g3

0x1747,	// (0x00001747) uni_indicator_pane_stacon_g4

0x0003,

0x9cee,	// (0x00009cee) uni_indicator_pane_stacon_g

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

0x9cf7,	// (0x00009cf7) battery_pane_stacon_g_ParamLimits

0x9cf7,	// (0x00009cf7) battery_pane_stacon_g

0x17d3,	// (0x000017d3) navi_icon_pane_stacon

0x17e3,	// (0x000017e3) navi_navi_pane_stacon

0x17d3,	// (0x000017d3) navi_text_pane_stacon

0x1751,	// (0x00001751) control_bottom_pane_stacon_g1

0x17f3,	// (0x000017f3) control_bottom_pane_stacon_t1_ParamLimits

0x17f3,	// (0x000017f3) control_bottom_pane_stacon_t1

0xaf14,	// (0x0000af14) grid_app_pane_ParamLimits

0xaf14,	// (0x0000af14) grid_app_pane

0xaf42,	// (0x0000af42) scroll_pane_cp15_ParamLimits

0xaf42,	// (0x0000af42) scroll_pane_cp15

0xaf59,	// (0x0000af59) cell_app_pane_ParamLimits

0xaf59,	// (0x0000af59) cell_app_pane

0xaf98,	// (0x0000af98) cell_app_pane_g1_ParamLimits

0xaf98,	// (0x0000af98) cell_app_pane_g1

0x18b3,	// (0x000018b3) cell_app_pane_g2_ParamLimits

0x18b3,	// (0x000018b3) cell_app_pane_g2

0x0001,

0xe16c,	// (0x0000e16c) cell_app_pane_g_ParamLimits

0xe16c,	// (0x0000e16c) cell_app_pane_g

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

0x9caa,	// (0x00009caa) cell_highlight_pane_g

0x18f5,	// (0x000018f5) bg_scroll_pane

0x1914,	// (0x00001914) scroll_handle_pane

0x1965,	// (0x00001965) scroll_bg_pane_g1

0x197a,	// (0x0000197a) scroll_bg_pane_g2

0x1992,	// (0x00001992) scroll_bg_pane_g3

0x0002,

0x9d01,	// (0x00009d01) scroll_bg_pane_g

0x19a7,	// (0x000019a7) scroll_handle_focus_pane_ParamLimits

0x19a7,	// (0x000019a7) scroll_handle_focus_pane

0x1965,	// (0x00001965) scroll_handle_pane_g1

0x19b4,	// (0x000019b4) scroll_handle_pane_g2

0x1992,	// (0x00001992) scroll_handle_pane_g3

0x0002,

0x9d08,	// (0x00009d08) scroll_handle_pane_g

0x1400,	// (0x00001400) bg_popup_sub_pane_cp21_ParamLimits

0x1400,	// (0x00001400) bg_popup_sub_pane_cp21

0x19c8,	// (0x000019c8) popup_fep_japan_predictive_window_t1_ParamLimits

0x19c8,	// (0x000019c8) popup_fep_japan_predictive_window_t1

0x19df,	// (0x000019df) popup_fep_japan_predictive_window_t2_ParamLimits

0x19df,	// (0x000019df) popup_fep_japan_predictive_window_t2

0x1a12,	// (0x00001a12) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a12,	// (0x00001a12) popup_fep_japan_predictive_window_t3

0x0002,

0x9d0f,	// (0x00009d0f) popup_fep_japan_predictive_window_t_ParamLimits

0x9d0f,	// (0x00009d0f) popup_fep_japan_predictive_window_t

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

0xafc5,	// (0x0000afc5) level_1_signal

0xafd7,	// (0x0000afd7) level_2_signal

0xafea,	// (0x0000afea) level_3_signal

0xaffd,	// (0x0000affd) level_4_signal

0xb010,	// (0x0000b010) level_5_signal

0xb023,	// (0x0000b023) level_6_signal

0xb036,	// (0x0000b036) level_7_signal

0xafc5,	// (0x0000afc5) level_1_battery

0xafd7,	// (0x0000afd7) level_2_battery

0xafea,	// (0x0000afea) level_3_battery

0xaffd,	// (0x0000affd) level_4_battery

0xb010,	// (0x0000b010) level_5_battery

0xb023,	// (0x0000b023) level_6_battery

0xb036,	// (0x0000b036) level_7_battery

0x1b30,	// (0x00001b30) list_menu_pane_ParamLimits

0x1b30,	// (0x00001b30) list_menu_pane

0x1b41,	// (0x00001b41) scroll_pane_cp25_ParamLimits

0x1b41,	// (0x00001b41) scroll_pane_cp25

0xb049,	// (0x0000b049) list_double2_graphic_pane_cp2_ParamLimits

0xb049,	// (0x0000b049) list_double2_graphic_pane_cp2

0xb049,	// (0x0000b049) list_double2_large_graphic_pane_cp2_ParamLimits

0xb049,	// (0x0000b049) list_double2_large_graphic_pane_cp2

0xb049,	// (0x0000b049) list_double2_pane_cp2_ParamLimits

0xb049,	// (0x0000b049) list_double2_pane_cp2

0xb049,	// (0x0000b049) list_double_graphic_pane_cp2_ParamLimits

0xb049,	// (0x0000b049) list_double_graphic_pane_cp2

0xb049,	// (0x0000b049) list_double_large_graphic_pane_cp2_ParamLimits

0xb049,	// (0x0000b049) list_double_large_graphic_pane_cp2

0xb049,	// (0x0000b049) list_double_number_pane_cp2_ParamLimits

0xb049,	// (0x0000b049) list_double_number_pane_cp2

0xb049,	// (0x0000b049) list_double_pane_cp2_ParamLimits

0xb049,	// (0x0000b049) list_double_pane_cp2

0xb064,	// (0x0000b064) list_single_2graphic_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_2graphic_pane_cp2

0xb064,	// (0x0000b064) list_single_graphic_heading_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_graphic_heading_pane_cp2

0xb064,	// (0x0000b064) list_single_graphic_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_graphic_pane_cp2

0xb064,	// (0x0000b064) list_single_heading_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_heading_pane_cp2

0xb075,	// (0x0000b075) list_single_large_graphic_pane_cp2_ParamLimits

0xb075,	// (0x0000b075) list_single_large_graphic_pane_cp2

0xb064,	// (0x0000b064) list_single_number_heading_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_number_heading_pane_cp2

0xb064,	// (0x0000b064) list_single_number_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_number_pane_cp2

0xb064,	// (0x0000b064) list_single_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_pane_cp2

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

0x9d3c,	// (0x00009d3c) fep_china_uni_entry_pane_g

0x1ceb,	// (0x00001ceb) fep_entry_item_pane

0x1cf5,	// (0x00001cf5) fep_candidate_item_pane

0x1cfd,	// (0x00001cfd) fep_china_uni_candidate_pane_g1

0x1d05,	// (0x00001d05) fep_china_uni_candidate_pane_g2

0x1d0d,	// (0x00001d0d) fep_china_uni_candidate_pane_g3

0x1d15,	// (0x00001d15) fep_china_uni_candidate_pane_g4

0x0003,

0x9d41,	// (0x00009d41) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1d1d,	// (0x00001d1d) fep_entry_item_pane_t1_ParamLimits

0x1d1d,	// (0x00001d1d) fep_entry_item_pane_t1

0x1d33,	// (0x00001d33) fep_candidate_item_pane_t1_ParamLimits

0x1d33,	// (0x00001d33) fep_candidate_item_pane_t1

0x1d48,	// (0x00001d48) fep_candidate_item_pane_t2_ParamLimits

0x1d48,	// (0x00001d48) fep_candidate_item_pane_t2

0x0001,

0x9d4a,	// (0x00009d4a) fep_candidate_item_pane_t_ParamLimits

0x9d4a,	// (0x00009d4a) fep_candidate_item_pane_t

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

0x9d4f,	// (0x00009d4f) scroll_handle_focus_pane_g

0xb0ce,	// (0x0000b0ce) list_single_2graphic_pane_g1_ParamLimits

0xb0ce,	// (0x0000b0ce) list_single_2graphic_pane_g1

0xaa47,	// (0x0000aa47) list_single_2graphic_pane_g2_ParamLimits

0xaa47,	// (0x0000aa47) list_single_2graphic_pane_g2

0x0dab,	// (0x00000dab) list_single_2graphic_pane_g3_ParamLimits

0x0dab,	// (0x00000dab) list_single_2graphic_pane_g3

0xb0da,	// (0x0000b0da) list_single_2graphic_pane_g4_ParamLimits

0xb0da,	// (0x0000b0da) list_single_2graphic_pane_g4

0x0003,

0xe176,	// (0x0000e176) list_single_2graphic_pane_g_ParamLimits

0xe176,	// (0x0000e176) list_single_2graphic_pane_g

0xb0e6,	// (0x0000b0e6) list_single_2graphic_pane_t1_ParamLimits

0xb0e6,	// (0x0000b0e6) list_single_2graphic_pane_t1

0xb114,	// (0x0000b114) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb114,	// (0x0000b114) list_double2_graphic_large_graphic_pane_g1

0xaaaa,	// (0x0000aaaa) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaaaa,	// (0x0000aaaa) list_double2_graphic_large_graphic_pane_g2

0xaa76,	// (0x0000aa76) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xaa76,	// (0x0000aa76) list_double2_graphic_large_graphic_pane_g3

0xb124,	// (0x0000b124) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb124,	// (0x0000b124) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xe17f,	// (0x0000e17f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xe17f,	// (0x0000e17f) list_double2_graphic_large_graphic_pane_g

0xb130,	// (0x0000b130) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb130,	// (0x0000b130) list_double2_graphic_large_graphic_pane_t1

0xb146,	// (0x0000b146) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb146,	// (0x0000b146) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xe188,	// (0x0000e188) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xe188,	// (0x0000e188) list_double2_graphic_large_graphic_pane_t

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

0x4cca,	// (0x00004cca) bg_active_tab_pane_g1_cp1

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp1

0x4cd3,	// (0x00004cd3) bg_active_tab_pane_g3_cp1

0x4cca,	// (0x00004cca) bg_passive_tab_pane_g1_cp1

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp1

0x4cd3,	// (0x00004cd3) bg_passive_tab_pane_g3_cp1

0xb158,	// (0x0000b158) bg_active_tab_pane_g1_cp2

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp2

0xb161,	// (0x0000b161) bg_active_tab_pane_g3_cp2

0xb158,	// (0x0000b158) bg_passive_tab_pane_g1_cp2

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp2

0xb161,	// (0x0000b161) bg_passive_tab_pane_g3_cp2

0xb16a,	// (0x0000b16a) bg_active_tab_pane_g1_cp3

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp3

0xb173,	// (0x0000b173) bg_active_tab_pane_g3_cp3

0xb16a,	// (0x0000b16a) bg_passive_tab_pane_g1_cp3

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp3

0xb173,	// (0x0000b173) bg_passive_tab_pane_g3_cp3

0xb17c,	// (0x0000b17c) bg_active_tab_pane_g1_cp4

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp4

0xb185,	// (0x0000b185) bg_active_tab_pane_g3_cp4

0xb17c,	// (0x0000b17c) bg_passive_tab_pane_g1_cp4

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp4

0xb185,	// (0x0000b185) bg_passive_tab_pane_g3_cp4

0x2027,	// (0x00002027) bg_active_tab_pane_g1_cp5

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp5

0x2030,	// (0x00002030) bg_active_tab_pane_g3_cp5

0x2027,	// (0x00002027) bg_passive_tab_pane_g1_cp5

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp5

0x2030,	// (0x00002030) bg_passive_tab_pane_g3_cp5

0xb18e,	// (0x0000b18e) list_set_graphic_pane_ParamLimits

0xb18e,	// (0x0000b18e) list_set_graphic_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4

0x2039,	// (0x00002039) list_set_graphic_pane_g1_ParamLimits

0x2039,	// (0x00002039) list_set_graphic_pane_g1

0x2045,	// (0x00002045) list_set_graphic_pane_g2_ParamLimits

0x2045,	// (0x00002045) list_set_graphic_pane_g2

0x0001,

0x9d6d,	// (0x00009d6d) list_set_graphic_pane_g_ParamLimits

0x9d6d,	// (0x00009d6d) list_set_graphic_pane_g

0x0009,

0xa0c0,	// (0x0000a0c0) volume_small_pane_cp_g

0x2067,	// (0x00002067) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2067,	// (0x00002067) list_double2_large_graphic_pane_g1_cp2

0x2073,	// (0x00002073) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2073,	// (0x00002073) list_double2_large_graphic_pane_g2_cp2

0x2082,	// (0x00002082) list_double2_large_graphic_pane_g3_cp2

0x208a,	// (0x0000208a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x208a,	// (0x0000208a) list_double2_large_graphic_pane_t1_cp2

0x20a0,	// (0x000020a0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x20a0,	// (0x000020a0) list_double2_large_graphic_pane_t2_cp2

0x44dd,	// (0x000044dd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x44dd,	// (0x000044dd) list_double_large_graphic_pane_g1_cp2

0x44ee,	// (0x000044ee) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x44ee,	// (0x000044ee) list_double_large_graphic_pane_g2_cp2

0x21cd,	// (0x000021cd) list_double_large_graphic_pane_g3_cp2

0x44fd,	// (0x000044fd) list_double_large_graphic_pane_g4_cp

0x4505,	// (0x00004505) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4505,	// (0x00004505) list_double_large_graphic_pane_t1_cp2

0x451c,	// (0x0000451c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x451c,	// (0x0000451c) list_double_large_graphic_pane_t2_cp2

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

0x42e7,	// (0x000042e7) list_single_heading_pane_t2_cp2_ParamLimits

0x42e7,	// (0x000042e7) list_single_heading_pane_t2_cp2

0x4237,	// (0x00004237) list_double_graphic_pane_g1_cp2_ParamLimits

0x4237,	// (0x00004237) list_double_graphic_pane_g1_cp2

0x4243,	// (0x00004243) list_double_graphic_pane_g2_cp2_ParamLimits

0x4243,	// (0x00004243) list_double_graphic_pane_g2_cp2

0x4252,	// (0x00004252) list_double_graphic_pane_g3_cp2

0x425a,	// (0x0000425a) list_double_graphic_pane_t1_cp2_ParamLimits

0x425a,	// (0x0000425a) list_double_graphic_pane_t1_cp2

0x4270,	// (0x00004270) list_double_graphic_pane_t2_cp2_ParamLimits

0x4270,	// (0x00004270) list_double_graphic_pane_t2_cp2

0x21c1,	// (0x000021c1) list_double_number_pane_g1_cp2_ParamLimits

0x21c1,	// (0x000021c1) list_double_number_pane_g1_cp2

0x21cd,	// (0x000021cd) list_double_number_pane_g2_cp2

0x41fd,	// (0x000041fd) list_double_number_pane_t1_cp2_ParamLimits

0x41fd,	// (0x000041fd) list_double_number_pane_t1_cp2

0x420f,	// (0x0000420f) list_double_number_pane_t2_cp2_ParamLimits

0x420f,	// (0x0000420f) list_double_number_pane_t2_cp2

0x4225,	// (0x00004225) list_double_number_pane_t3_cp2_ParamLimits

0x4225,	// (0x00004225) list_double_number_pane_t3_cp2

0x40d6,	// (0x000040d6) list_single_graphic_pane_g1_cp2_ParamLimits

0x40d6,	// (0x000040d6) list_single_graphic_pane_g1_cp2

0x214b,	// (0x0000214b) list_single_graphic_pane_g2_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_graphic_pane_g2_cp2

0x2157,	// (0x00002157) list_single_graphic_pane_g3_cp2

0x40ae,	// (0x000040ae) list_single_graphic_pane_t1_cp2_ParamLimits

0x40ae,	// (0x000040ae) list_single_graphic_pane_t1_cp2

0x214b,	// (0x0000214b) list_single_number_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_number_pane_g1_cp2

0x2157,	// (0x00002157) list_single_number_pane_g2_cp2

0x40ae,	// (0x000040ae) list_single_number_pane_t1_cp2_ParamLimits

0x40ae,	// (0x000040ae) list_single_number_pane_t1_cp2

0x40c4,	// (0x000040c4) list_single_number_pane_t2_cp2_ParamLimits

0x40c4,	// (0x000040c4) list_single_number_pane_t2_cp2

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

0x3f4b,	// (0x00003f4b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3f4b,	// (0x00003f4b) list_single_graphic_heading_pane_g1_cp2

0x3f26,	// (0x00003f26) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3f26,	// (0x00003f26) list_single_graphic_heading_pane_g4_cp2

0x2157,	// (0x00002157) list_single_graphic_heading_pane_g5_cp2

0x215f,	// (0x0000215f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x215f,	// (0x0000215f) list_single_graphic_heading_pane_t1_cp2

0x3f57,	// (0x00003f57) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3f57,	// (0x00003f57) list_single_graphic_heading_pane_t2_cp2

0x3f1a,	// (0x00003f1a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3f1a,	// (0x00003f1a) list_single_2graphic_pane_g1_cp2

0x3f26,	// (0x00003f26) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3f26,	// (0x00003f26) list_single_2graphic_pane_g2_cp2

0x2157,	// (0x00002157) list_single_2graphic_pane_g3_cp2

0x3276,	// (0x00003276) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3276,	// (0x00003276) list_single_2graphic_pane_g4_cp2

0x3f35,	// (0x00003f35) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3f35,	// (0x00003f35) list_single_2graphic_pane_t1_cp2

0x002a,	// (0x0000002a) list_highlight_pane_g10_cp1

0x3b14,	// (0x00003b14) list_highlight_pane_g1_cp1

0x3b1c,	// (0x00003b1c) list_highlight_pane_g2_cp1

0x3b24,	// (0x00003b24) list_highlight_pane_g3_cp1

0x3b2c,	// (0x00003b2c) list_highlight_pane_g4_cp1

0x3b34,	// (0x00003b34) list_highlight_pane_g5_cp1

0x3b3c,	// (0x00003b3c) list_highlight_pane_g6_cp1

0x3b44,	// (0x00003b44) list_highlight_pane_g7_cp1

0x3b4c,	// (0x00003b4c) list_highlight_pane_g8_cp1

0x3b54,	// (0x00003b54) list_highlight_pane_g9_cp1

0xbe56,	// (0x0000be56) form_field_slider_pane_t3

0xbe64,	// (0x0000be64) form_field_slider_pane_t4

0x3a5e,	// (0x00003a5e) slider_form_pane_ParamLimits

0x3a5e,	// (0x00003a5e) slider_form_pane

0x024e,	// (0x0000024e) control_abbreviations

0x024e,	// (0x0000024e) control_conventions

0x024e,	// (0x0000024e) control_definitions

0x024e,	// (0x0000024e) format_table_attribute

0x4331,	// (0x00004331) bg_popup_preview_window_pane_g9

0x024e,	// (0x0000024e) format_table_data2

0x024e,	// (0x0000024e) format_table_data3

0x024e,	// (0x0000024e) format_table_data_example

0x0008,

0x024e,	// (0x0000024e) intro_purpose

0x9ef6,	// (0x00009ef6) bg_popup_preview_window_pane_g

0x024e,	// (0x0000024e) texts_category

0x024e,	// (0x0000024e) texts_graphics

0x228b,	// (0x0000228b) text_digital

0x229a,	// (0x0000229a) text_primary

0x22a9,	// (0x000022a9) text_primary_small

0x22b8,	// (0x000022b8) text_secondary

0x22c7,	// (0x000022c7) text_title

0x4b5a,	// (0x00004b5a) bg_passive_tab_pane_g1_cp3_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp3_srt

0x4b63,	// (0x00004b63) bg_passive_tab_pane_g3_cp3_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp3_srt

0x4b6c,	// (0x00004b6c) tabs_4_active_pane_srt_g1

0xa73a,	// (0x0000a73a) tabs_4_active_pane_srt_t1_ParamLimits

0xa73a,	// (0x0000a73a) tabs_4_active_pane_srt_t1

0x4b5a,	// (0x00004b5a) bg_active_tab_pane_g1_cp3_copy1

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp3_copy1

0x4b63,	// (0x00004b63) bg_active_tab_pane_g3_cp3_copy1

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4_srt

0x47bc,	// (0x000047bc) bg_passive_tab_pane_g1_cp4_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp4_srt

0x47c5,	// (0x000047c5) bg_passive_tab_pane_g3_cp4_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt

0xaee7,	// (0x0000aee7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaee7,	// (0x0000aee7) tabs_2_long_active_pane_srt_t1

0x47bc,	// (0x000047bc) bg_active_tab_pane_g1_cp4_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp4_srt

0x47c5,	// (0x000047c5) bg_active_tab_pane_g3_cp4_srt

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

0xaefe,	// (0x0000aefe) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaefe,	// (0x0000aefe) tabs_3_long_active_pane_srt_t1

0x2027,	// (0x00002027) bg_active_tab_pane_g1_cp5_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp5_srt

0x2030,	// (0x00002030) bg_active_tab_pane_g3_cp5_srt

0x47ae,	// (0x000047ae) navi_text_pane_srt_t1

0x47a6,	// (0x000047a6) navi_icon_pane_srt_g1

0x2535,	// (0x00002535) midp_editing_number_pane_srt

0x22d6,	// (0x000022d6) midp_ticker_pane_srt

0x253d,	// (0x0000253d) midp_ticker_pane_srt_g1

0x2545,	// (0x00002545) midp_ticker_pane_srt_g2

0x0001,

0x9d8c,	// (0x00009d8c) midp_ticker_pane_srt_g

0x254d,	// (0x0000254d) midp_ticker_pane_srt_t1

0x4797,	// (0x00004797) midp_editing_number_pane_t1_copy1

0xb1a2,	// (0x0000b1a2) listscroll_midp_pane

0xb1a2,	// (0x0000b1a2) midp_form_pane

0x2346,	// (0x00002346) midp_info_popup_window_ParamLimits

0x2346,	// (0x00002346) midp_info_popup_window

0x1400,	// (0x00001400) bg_popup_sub_pane_cp50_ParamLimits

0x1400,	// (0x00001400) bg_popup_sub_pane_cp50

0x379c,	// (0x0000379c) listscroll_midp_info_pane_ParamLimits

0x379c,	// (0x0000379c) listscroll_midp_info_pane

0x3784,	// (0x00003784) listscroll_form_midp_pane_ParamLimits

0x3784,	// (0x00003784) listscroll_form_midp_pane

0x3790,	// (0x00003790) scroll_bar_cp050

0xbe4a,	// (0x0000be4a) list_midp_pane

0x5756,	// (0x00005756) signal_pane_g2_cp

0x369e,	// (0x0000369e) listscroll_midp_info_pane_t1_ParamLimits

0x369e,	// (0x0000369e) listscroll_midp_info_pane_t1

0x36b6,	// (0x000036b6) listscroll_midp_info_pane_t2_ParamLimits

0x36b6,	// (0x000036b6) listscroll_midp_info_pane_t2

0x36f4,	// (0x000036f4) listscroll_midp_info_pane_t3_ParamLimits

0x36f4,	// (0x000036f4) listscroll_midp_info_pane_t3

0x372e,	// (0x0000372e) listscroll_midp_info_pane_t4_ParamLimits

0x372e,	// (0x0000372e) listscroll_midp_info_pane_t4

0x0003,

0x9e31,	// (0x00009e31) listscroll_midp_info_pane_t_ParamLimits

0x9e31,	// (0x00009e31) listscroll_midp_info_pane_t

0x14af,	// (0x000014af) scroll_pane_cp21

0x3642,	// (0x00003642) form_midp_field_choice_group_pane

0x364b,	// (0x0000364b) form_midp_field_text_pane

0x3684,	// (0x00003684) form_midp_field_time_pane

0x368c,	// (0x0000368c) form_midp_gauge_slider_pane

0x3695,	// (0x00003695) form_midp_gauge_wait_pane

0x024e,	// (0x0000024e) form_midp_image_pane

0xbe34,	// (0x0000be34) list_single_midp_pane_ParamLimits

0xbe34,	// (0x0000be34) list_single_midp_pane

0xbe13,	// (0x0000be13) form_midp_field_text_pane_t1

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

0x9e2c,	// (0x00009e2c) form_midp_field_time_pane_t

0x024e,	// (0x0000024e) input_focus_pane_cp052

0x024e,	// (0x0000024e) bg_input_focus_pane_cp040

0x3569,	// (0x00003569) form_midp_gauge_slider_pane_t1

0x3577,	// (0x00003577) form_midp_gauge_slider_pane_t2

0xbdf7,	// (0x0000bdf7) form_midp_gauge_slider_pane_t3

0xbe05,	// (0x0000be05) form_midp_gauge_slider_pane_t4

0x0003,

0xe1c9,	// (0x0000e1c9) form_midp_gauge_slider_pane_t

0x35a1,	// (0x000035a1) form_midp_slider_pane

0x0474,	// (0x00000474) bg_input_focus_pane_cp041_ParamLimits

0x0474,	// (0x00000474) bg_input_focus_pane_cp041

0x3539,	// (0x00003539) form_midp_gauge_wait_pane_t1_ParamLimits

0x3539,	// (0x00003539) form_midp_gauge_wait_pane_t1

0x354b,	// (0x0000354b) form_midp_gauge_wait_pane_t2_ParamLimits

0x354b,	// (0x0000354b) form_midp_gauge_wait_pane_t2

0x0001,

0x9e1e,	// (0x00009e1e) form_midp_gauge_wait_pane_t_ParamLimits

0x9e1e,	// (0x00009e1e) form_midp_gauge_wait_pane_t

0x355d,	// (0x0000355d) form_midp_wait_pane_ParamLimits

0x355d,	// (0x0000355d) form_midp_wait_pane

0x3503,	// (0x00003503) form_midp_image_pane_g1

0x350c,	// (0x0000350c) form_midp_image_pane_t1

0x351b,	// (0x0000351b) form_midp_image_pane_t2

0x352a,	// (0x0000352a) form_midp_image_pane_t3

0x0002,

0x9e17,	// (0x00009e17) form_midp_image_pane_t

0x34eb,	// (0x000034eb) list_single_midp_pane_g1

0x34f4,	// (0x000034f4) list_single_midp_pane_t1

0xbde3,	// (0x0000bde3) list_midp_form_item_pane_ParamLimits

0xbde3,	// (0x0000bde3) list_midp_form_item_pane

0x2396,	// (0x00002396) list_midp_form_item_pane_t1

0x23a5,	// (0x000023a5) midp_ticker_pane_g1

0x23b1,	// (0x000023b1) midp_ticker_pane_g2

0x0001,

0x9d72,	// (0x00009d72) midp_ticker_pane_g

0x23bd,	// (0x000023bd) midp_ticker_pane_t1

0x4797,	// (0x00004797) midp_editing_number_pane_t1

0x4a20,	// (0x00004a20) midp_editing_number_pane

0x4a2c,	// (0x00004a2c) midp_ticker_pane

0x4775,	// (0x00004775) ai_message_heading_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp14

0x477d,	// (0x0000477d) listscroll_ai_message_pane

0x46ff,	// (0x000046ff) ai_message_heading_pane_g1_ParamLimits

0x46ff,	// (0x000046ff) ai_message_heading_pane_g1

0x470b,	// (0x0000470b) ai_message_heading_pane_g2_ParamLimits

0x470b,	// (0x0000470b) ai_message_heading_pane_g2

0x4717,	// (0x00004717) ai_message_heading_pane_g3_ParamLimits

0x4717,	// (0x00004717) ai_message_heading_pane_g3

0x4723,	// (0x00004723) ai_message_heading_pane_g4_ParamLimits

0x4723,	// (0x00004723) ai_message_heading_pane_g4

0x0003,

0x9f58,	// (0x00009f58) ai_message_heading_pane_g_ParamLimits

0x9f58,	// (0x00009f58) ai_message_heading_pane_g

0x472f,	// (0x0000472f) ai_message_heading_pane_t1_ParamLimits

0x472f,	// (0x0000472f) ai_message_heading_pane_t1

0x4749,	// (0x00004749) ai_message_heading_pane_t2_ParamLimits

0x4749,	// (0x00004749) ai_message_heading_pane_t2

0x0001,

0x9f61,	// (0x00009f61) ai_message_heading_pane_t_ParamLimits

0x9f61,	// (0x00009f61) ai_message_heading_pane_t

0x475b,	// (0x0000475b) bg_popup_heading_pane_cp1_ParamLimits

0x475b,	// (0x0000475b) bg_popup_heading_pane_cp1

0x46ed,	// (0x000046ed) list_ai_message_pane_ParamLimits

0x46ed,	// (0x000046ed) list_ai_message_pane

0x14af,	// (0x000014af) scroll_pane_cp10

0x4639,	// (0x00004639) list_ai_message_pane_g1

0x4641,	// (0x00004641) list_ai_message_pane_g2

0x0001,

0x9f35,	// (0x00009f35) list_ai_message_pane_g

0x4649,	// (0x00004649) list_ai_message_pane_t1_ParamLimits

0x4649,	// (0x00004649) list_ai_message_pane_t1

0x465e,	// (0x0000465e) list_ai_message_pane_t2_ParamLimits

0x465e,	// (0x0000465e) list_ai_message_pane_t2

0x4673,	// (0x00004673) list_ai_message_pane_t3_ParamLimits

0x4673,	// (0x00004673) list_ai_message_pane_t3

0x4688,	// (0x00004688) list_ai_message_pane_t4_ParamLimits

0x4688,	// (0x00004688) list_ai_message_pane_t4

0x0003,

0x9f3a,	// (0x00009f3a) list_ai_message_pane_t_ParamLimits

0x9f3a,	// (0x00009f3a) list_ai_message_pane_t

0x4627,	// (0x00004627) cell_ai_soft_ind_pane_ParamLimits

0x4627,	// (0x00004627) cell_ai_soft_ind_pane

0x23cf,	// (0x000023cf) cell_ai_soft_ind_pane_g1_ParamLimits

0x23cf,	// (0x000023cf) cell_ai_soft_ind_pane_g1

0x024e,	// (0x0000024e) grid_highlight_cp1

0x23dc,	// (0x000023dc) text_secondary_cp56_ParamLimits

0x23dc,	// (0x000023dc) text_secondary_cp56

0x45fc,	// (0x000045fc) example_general_pane_ParamLimits

0x45fc,	// (0x000045fc) example_general_pane

0x4608,	// (0x00004608) example_parent_pane_g1_ParamLimits

0x4608,	// (0x00004608) example_parent_pane_g1

0x4614,	// (0x00004614) example_parent_pane_t1_ParamLimits

0x4614,	// (0x00004614) example_parent_pane_t1

0xb6d7,	// (0x0000b6d7) popup_preview_text_window_ParamLimits

0xb6d7,	// (0x0000b6d7) popup_preview_text_window

0x221b,	// (0x0000221b) list_single_pane_cp2_g4

0x084d,	// (0x0000084d) bg_popup_preview_window_pane_ParamLimits

0x084d,	// (0x0000084d) bg_popup_preview_window_pane

0x4339,	// (0x00004339) popup_preview_text_window_t1_ParamLimits

0x4339,	// (0x00004339) popup_preview_text_window_t1

0x4357,	// (0x00004357) popup_preview_text_window_t2_ParamLimits

0x4357,	// (0x00004357) popup_preview_text_window_t2

0x43a0,	// (0x000043a0) popup_preview_text_window_t3_ParamLimits

0x43a0,	// (0x000043a0) popup_preview_text_window_t3

0x43e5,	// (0x000043e5) popup_preview_text_window_t4_ParamLimits

0x43e5,	// (0x000043e5) popup_preview_text_window_t4

0x0004,

0x9f09,	// (0x00009f09) popup_preview_text_window_t_ParamLimits

0x9f09,	// (0x00009f09) popup_preview_text_window_t

0x4463,	// (0x00004463) scroll_pane_cp11

0x320b,	// (0x0000320b) bg_popup_preview_window_pane_g1

0x42f9,	// (0x000042f9) bg_popup_preview_window_pane_g2

0x4301,	// (0x00004301) bg_popup_preview_window_pane_g3

0x4309,	// (0x00004309) bg_popup_preview_window_pane_g4

0x4311,	// (0x00004311) bg_popup_preview_window_pane_g5

0x4319,	// (0x00004319) bg_popup_preview_window_pane_g6

0x4321,	// (0x00004321) bg_popup_preview_window_pane_g7

0x4329,	// (0x00004329) bg_popup_preview_window_pane_g8

0x003c,	// (0x0000003c) aid_popup_width_pane

0xb659,	// (0x0000b659) popup_midp_note_alarm_window_ParamLimits

0xb659,	// (0x0000b659) popup_midp_note_alarm_window

0x11bc,	// (0x000011bc) data_form_pane_ParamLimits

0xadcc,	// (0x0000adcc) form_field_data_pane_g1

0xadd6,	// (0x0000add6) form_field_data_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_ParamLimits

0x11f6,	// (0x000011f6) data_form_wide_pane_ParamLimits

0x1202,	// (0x00001202) form_field_data_wide_pane_g1

0x1222,	// (0x00001222) form_field_data_wide_pane_t1_ParamLimits

0x0ad9,	// (0x00000ad9) input_focus_pane_cp6_ParamLimits

0xaec5,	// (0x0000aec5) input_popup_find_pane_g1_ParamLimits

0xaec5,	// (0x0000aec5) input_popup_find_pane_g1

0x17b4,	// (0x000017b4) aid_navi_side_left_pane

0x17c4,	// (0x000017c4) aid_navi_side_right_pane

0x3bfd,	// (0x00003bfd) bg_popup_window_pane_cp30_ParamLimits

0x3bfd,	// (0x00003bfd) bg_popup_window_pane_cp30

0x3c77,	// (0x00003c77) popup_midp_note_alarm_window_g1_ParamLimits

0x3c77,	// (0x00003c77) popup_midp_note_alarm_window_g1

0x3ca7,	// (0x00003ca7) popup_midp_note_alarm_window_t1_ParamLimits

0x3ca7,	// (0x00003ca7) popup_midp_note_alarm_window_t1

0x3d48,	// (0x00003d48) popup_midp_note_alarm_window_t2_ParamLimits

0x3d48,	// (0x00003d48) popup_midp_note_alarm_window_t2

0x3df6,	// (0x00003df6) popup_midp_note_alarm_window_t3_ParamLimits

0x3df6,	// (0x00003df6) popup_midp_note_alarm_window_t3

0x3e1e,	// (0x00003e1e) popup_midp_note_alarm_window_t4_ParamLimits

0x3e1e,	// (0x00003e1e) popup_midp_note_alarm_window_t4

0x3e3e,	// (0x00003e3e) popup_midp_note_alarm_window_t5_ParamLimits

0x3e3e,	// (0x00003e3e) popup_midp_note_alarm_window_t5

0x000a,

0x9ea6,	// (0x00009ea6) popup_midp_note_alarm_window_t_ParamLimits

0x9ea6,	// (0x00009ea6) popup_midp_note_alarm_window_t

0x3eea,	// (0x00003eea) wait_bar_pane_cp1_ParamLimits

0x3eea,	// (0x00003eea) wait_bar_pane_cp1

0x024e,	// (0x0000024e) wait_anim_pane_copy1

0x024e,	// (0x0000024e) wait_border_pane_copy1

0x390f,	// (0x0000390f) wait_border_pane_g1_copy1

0x123c,	// (0x0000123c) form_field_popup_pane_g1

0xadee,	// (0x0000adee) form_field_popup_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp7_ParamLimits

0x11bc,	// (0x000011bc) list_form_pane_ParamLimits

0x125c,	// (0x0000125c) form_field_popup_wide_pane_g1

0x1264,	// (0x00001264) form_field_popup_wide_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp8_ParamLimits

0x1279,	// (0x00001279) list_form_wide_pane_ParamLimits

0x4bda,	// (0x00004bda) aid_size_cell_graphic_pane

0xae6b,	// (0x0000ae6b) data_form_pane_t1_ParamLimits

0xc298,	// (0x0000c298) data_form_wide_pane_t1_ParamLimits

0xba35,	// (0x0000ba35) bg_status_flat_pane

0xa697,	// (0x0000a697) title_pane_t1_ParamLimits

0x043c,	// (0x0000043c) title_pane_t2_ParamLimits

0x0462,	// (0x00000462) title_pane_t3_ParamLimits

0xe0a3,	// (0x0000e0a3) title_pane_t_ParamLimits

0xafc5,	// (0x0000afc5) level_1_signal_ParamLimits

0xafd7,	// (0x0000afd7) level_2_signal_ParamLimits

0xafea,	// (0x0000afea) level_3_signal_ParamLimits

0xaffd,	// (0x0000affd) level_4_signal_ParamLimits

0xb010,	// (0x0000b010) level_5_signal_ParamLimits

0xb023,	// (0x0000b023) level_6_signal_ParamLimits

0xb036,	// (0x0000b036) level_7_signal_ParamLimits

0xafc5,	// (0x0000afc5) level_1_battery_ParamLimits

0xafd7,	// (0x0000afd7) level_2_battery_ParamLimits

0xafea,	// (0x0000afea) level_3_battery_ParamLimits

0xaffd,	// (0x0000affd) level_4_battery_ParamLimits

0xb010,	// (0x0000b010) level_5_battery_ParamLimits

0xb023,	// (0x0000b023) level_6_battery_ParamLimits

0xb036,	// (0x0000b036) level_7_battery_ParamLimits

0x3b14,	// (0x00003b14) bg_status_flat_pane_g1

0x3b1c,	// (0x00003b1c) bg_status_flat_pane_g2

0x3b24,	// (0x00003b24) bg_status_flat_pane_g3

0x3b2c,	// (0x00003b2c) bg_status_flat_pane_g4

0x3b34,	// (0x00003b34) bg_status_flat_pane_g5

0x3b3c,	// (0x00003b3c) bg_status_flat_pane_g6

0x3b44,	// (0x00003b44) bg_status_flat_pane_g7

0xa724,	// (0x0000a724) tabs_3_active_pane_t1_ParamLimits

0xa724,	// (0x0000a724) tabs_3_passive_pane_t1_ParamLimits

0xa73a,	// (0x0000a73a) tabs_4_active_pane_t1_ParamLimits

0xa73a,	// (0x0000a73a) tabs_4_1_passive_pane_t1_ParamLimits

0xaed1,	// (0x0000aed1) tabs_2_active_pane_t1_ParamLimits

0xaed1,	// (0x0000aed1) tabs_2_passive_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_ParamLimits

0xaee7,	// (0x0000aee7) tabs_2_long_active_pane_t1_ParamLimits

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp4_ParamLimits

0x32c4,	// (0x000032c4) list_single_midp_graphic_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_ParamLimits

0xaefe,	// (0x0000aefe) tabs_3_long_active_pane_t1_ParamLimits

0x283d,	// (0x0000283d) bg_passive_tab_pane_cp5_ParamLimits

0x32c4,	// (0x000032c4) list_single_midp_graphic_pane_t1

0xba35,	// (0x0000ba35) bg_status_flat_pane_ParamLimits

0x2e48,	// (0x00002e48) indicator_pane_cp2_ParamLimits

0x2e48,	// (0x00002e48) indicator_pane_cp2

0xbb9b,	// (0x0000bb9b) navi_pane_srt_ParamLimits

0xbb9b,	// (0x0000bb9b) navi_pane_srt

0x2f90,	// (0x00002f90) popup_clock_digital_analogue_window_cp1

0x05f2,	// (0x000005f2) indicator_pane_t1

0x22d6,	// (0x000022d6) copy_highlight_pane

0x22d6,	// (0x000022d6) cursor_graphics_pane

0x22d6,	// (0x000022d6) graphic_within_text_pane

0x22d6,	// (0x000022d6) link_highlight_pane

0x4426,	// (0x00004426) popup_preview_text_window_t5_ParamLimits

0x4426,	// (0x00004426) popup_preview_text_window_t5

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

0x3bac,	// (0x00003bac) graphic_text_primary_pane

0x3bb5,	// (0x00003bb5) graphic_text_primary_small_pane

0x2407,	// (0x00002407) graphic_text_secondary_pane

0x23f6,	// (0x000023f6) graphic_text_title_pane

0xb23f,	// (0x0000b23f) cursor_primary_pane_g1

0x3b9e,	// (0x00003b9e) cursor_text_primary_t1

0xbe86,	// (0x0000be86) cursor_primary_small_pane_g1

0x3b90,	// (0x00003b90) cursor_text_primary_small_t1

0xbe7c,	// (0x0000be7c) cursor_primary_small_pane_g1_copy1

0x3b7a,	// (0x00003b7a) cursor_text_primary_small_t1_copy1

0x3b5c,	// (0x00003b5c) cursor_text_title_t1

0xbe72,	// (0x0000be72) cursor_title_pane_g1

0xb23f,	// (0x0000b23f) cursor_digital_pane_g1

0x2427,	// (0x00002427) cursor_text_digital_t1

0x2435,	// (0x00002435) link_highlight_primary_pane_g1

0x3b05,	// (0x00003b05) link_highlight_primary_pane_t1

0x2435,	// (0x00002435) link_highlight_primary_small_pane_g1

0x243d,	// (0x0000243d) link_highlight_primary_small_pane_t1

0x244c,	// (0x0000244c) link_highlight_secondary_pane_g1

0x2454,	// (0x00002454) link_highlight_secondary_pane_t1

0x3a6a,	// (0x00003a6a) link_highlight_title_pane_g1

0x3a81,	// (0x00003a81) link_highlight_title_pane_t1

0x3a6a,	// (0x00003a6a) link_highlight_digital_pane_g1

0x3a72,	// (0x00003a72) link_highlight_digital_pane_t1

0x392a,	// (0x0000392a) copy_highlight_primary_pane_g1

0x3950,	// (0x00003950) copy_highlight_primary_pane_t1

0x392a,	// (0x0000392a) copy_highlight_primary_small_pane_g1

0x3941,	// (0x00003941) copy_highlight_primary_small_pane_t1

0x2463,	// (0x00002463) copy_highlight_secondary_pane_g1

0x246b,	// (0x0000246b) copy_highlight_secondary_pane_t1

0x392a,	// (0x0000392a) copy_highlight_title_pane_g1

0x3932,	// (0x00003932) copy_highlight_title_pane_t1

0x392a,	// (0x0000392a) copy_highlight_digital_pane_g1

0x4dfe,	// (0x00004dfe) copy_highlight_digital_pane_t1

0x4d52,	// (0x00004d52) graphic_text_primary_pane_g1

0x4de2,	// (0x00004de2) graphic_text_primary_pane_t1

0x4df0,	// (0x00004df0) graphic_text_primary_pane_t2

0x0001,

0x9fd0,	// (0x00009fd0) graphic_text_primary_pane_t

0x4dbe,	// (0x00004dbe) graphic_text_primary_small_pane_g1

0x4dc6,	// (0x00004dc6) graphic_text_primary_small_pane_t1

0x4dd4,	// (0x00004dd4) graphic_text_primary_small_pane_t2

0x0001,

0x9fcb,	// (0x00009fcb) graphic_text_primary_small_pane_t

0x4d9a,	// (0x00004d9a) graphic_text_secondary_pane_g1

0x4da2,	// (0x00004da2) graphic_text_secondary_pane_t1

0x4db0,	// (0x00004db0) graphic_text_secondary_pane_t2

0x0001,

0x9fc6,	// (0x00009fc6) graphic_text_secondary_pane_t

0x4d76,	// (0x00004d76) graphic_text_title_pane_g1

0x4d7e,	// (0x00004d7e) graphic_text_title_pane_t1

0x4d8c,	// (0x00004d8c) graphic_text_title_pane_t2

0x0001,

0x9fc1,	// (0x00009fc1) graphic_text_title_pane_t

0x4d52,	// (0x00004d52) graphic_text_digital_pane_g1

0x4d5a,	// (0x00004d5a) graphic_text_digital_pane_t1

0x4d68,	// (0x00004d68) graphic_text_digital_pane_t2

0x0001,

0x9fbc,	// (0x00009fbc) graphic_text_digital_pane_t

0x0474,	// (0x00000474) navi_icon_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_icon_pane_srt

0x024e,	// (0x0000024e) navi_midp_pane_srt

0x024e,	// (0x0000024e) navi_navi_pane_srt

0x0474,	// (0x00000474) navi_text_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_text_pane_srt

0x42b2,	// (0x000042b2) navi_navi_icon_text_pane_srt

0x42ba,	// (0x000042ba) navi_navi_pane_srt_g1_ParamLimits

0x42ba,	// (0x000042ba) navi_navi_pane_srt_g1

0x42cc,	// (0x000042cc) navi_navi_pane_srt_g2_ParamLimits

0x42cc,	// (0x000042cc) navi_navi_pane_srt_g2

0x0001,

0x9ef1,	// (0x00009ef1) navi_navi_pane_srt_g_ParamLimits

0x9ef1,	// (0x00009ef1) navi_navi_pane_srt_g

0x42de,	// (0x000042de) navi_navi_tabs_pane_srt

0x42b2,	// (0x000042b2) navi_navi_text_pane_srt

0x42b2,	// (0x000042b2) navi_navi_volume_pane_srt

0x4d43,	// (0x00004d43) navi_navi_text_pane_srt_t1

0x4d1e,	// (0x00004d1e) navi_navi_volume_pane_srt_g1

0x4d26,	// (0x00004d26) volume_small_pane_srt_ParamLimits

0x4d26,	// (0x00004d26) volume_small_pane_srt

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

0x9d77,	// (0x00009d77) volume_small_pane_srt_g_ParamLimits

0x9d77,	// (0x00009d77) volume_small_pane_srt_g

0x08f6,	// (0x000008f6) query_popup_data_pane_cp2

0x4d0c,	// (0x00004d0c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4d0c,	// (0x00004d0c) navi_navi_icon_text_pane_srt_t1

0x3bac,	// (0x00003bac) navi_tabs_2_long_pane_srt

0x3bac,	// (0x00003bac) navi_tabs_2_pane_srt

0x3bac,	// (0x00003bac) navi_tabs_3_long_pane_srt

0x3bac,	// (0x00003bac) navi_tabs_3_pane_srt

0x3bac,	// (0x00003bac) navi_tabs_4_pane_srt

0x4ce4,	// (0x00004ce4) tabs_2_active_pane_srt_ParamLimits

0x4ce4,	// (0x00004ce4) tabs_2_active_pane_srt

0x4cf4,	// (0x00004cf4) tabs_2_passive_pane_srt_ParamLimits

0x4cf4,	// (0x00004cf4) tabs_2_passive_pane_srt

0x3395,	// (0x00003395) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3395,	// (0x00003395) bg_passive_tab_pane_cp1_srt

0x4cca,	// (0x00004cca) bg_passive_tab_pane_g1_cp1_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp1_srt

0x4cd3,	// (0x00004cd3) bg_passive_tab_pane_g3_cp1_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp1_srt

0x4cdc,	// (0x00004cdc) tabs_2_active_pane_srt_g1

0xaed1,	// (0x0000aed1) tabs_2_active_pane_srt_t1_ParamLimits

0xaed1,	// (0x0000aed1) tabs_2_active_pane_srt_t1

0x4cca,	// (0x00004cca) bg_active_tab_pane_g1_cp1_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp1_srt

0x4cd3,	// (0x00004cd3) bg_active_tab_pane_g3_cp1_srt

0x4c97,	// (0x00004c97) tabs_3_active_pane_srt_ParamLimits

0x4c97,	// (0x00004c97) tabs_3_active_pane_srt

0x4ca8,	// (0x00004ca8) tabs_3_passive_pane_cp_srt_ParamLimits

0x4ca8,	// (0x00004ca8) tabs_3_passive_pane_cp_srt

0x4cb9,	// (0x00004cb9) tabs_3_passive_pane_srt_ParamLimits

0x4cb9,	// (0x00004cb9) tabs_3_passive_pane_srt

0x3395,	// (0x00003395) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3395,	// (0x00003395) bg_passive_tab_pane_cp2_srt

0x2523,	// (0x00002523) bg_passive_tab_pane_g1_cp2_srt

0x1e74,	// (0x00001e74) bg_passive_tab_pane_g2_cp2_srt

0x252c,	// (0x0000252c) bg_passive_tab_pane_g3_cp2_srt

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt_ParamLimits

0x0797,	// (0x00000797) bg_active_tab_pane_cp2_srt

0x4c8f,	// (0x00004c8f) tabs_3_active_pane_srt_g1

0xa724,	// (0x0000a724) tabs_3_active_pane_srt_t1_ParamLimits

0xa724,	// (0x0000a724) tabs_3_active_pane_srt_t1

0x2523,	// (0x00002523) bg_active_tab_pane_g1_cp2_srt

0x1e74,	// (0x00001e74) bg_active_tab_pane_g2_cp2_srt

0x252c,	// (0x0000252c) bg_active_tab_pane_g3_cp2_srt

0x4c47,	// (0x00004c47) tabs_4_active_pane_srt_ParamLimits

0x4c47,	// (0x00004c47) tabs_4_active_pane_srt

0x4c59,	// (0x00004c59) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4c59,	// (0x00004c59) tabs_4_passive_pane_cp2_srt

0x27c2,	// (0x000027c2) aid_size_cell_toolbar

0xb3c9,	// (0x0000b3c9) main_idle_act_pane_ParamLimits

0x29a8,	// (0x000029a8) popup_large_graphic_colour_window_ParamLimits

0xb927,	// (0x0000b927) popup_toolbar_window_ParamLimits

0xb927,	// (0x0000b927) popup_toolbar_window

0x4a51,	// (0x00004a51) list_single_graphic_2heading_pane_ParamLimits

0x4a51,	// (0x00004a51) list_single_graphic_2heading_pane

0x1824,	// (0x00001824) aid_size_cell_apps_grid_lsc_pane

0x1836,	// (0x00001836) aid_size_cell_apps_grid_prt_pane

0x283d,	// (0x0000283d) bg_wml_button_pane_cp1_ParamLimits

0x283d,	// (0x0000283d) bg_wml_button_pane_cp1

0xbe13,	// (0x0000be13) form_midp_field_text_pane_t1_ParamLimits

0x3395,	// (0x00003395) input_focus_pane_cp050_ParamLimits

0x3619,	// (0x00003619) list_midp_form_text_pane_ParamLimits

0x35d3,	// (0x000035d3) input_focus_pane_cp051_ParamLimits

0x35e7,	// (0x000035e7) list_midp_choice_pane_ParamLimits

0xbdb1,	// (0x0000bdb1) list_single_2graphic_pane_cp3_ParamLimits

0xbdb1,	// (0x0000bdb1) list_single_2graphic_pane_cp3

0xbdc4,	// (0x0000bdc4) list_single_midp_graphic_pane_ParamLimits

0xbdc4,	// (0x0000bdc4) list_single_midp_graphic_pane

0x30dc,	// (0x000030dc) list_single_graphic_2heading_pane_g1_ParamLimits

0x30dc,	// (0x000030dc) list_single_graphic_2heading_pane_g1

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_g4_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_g4

0x0dab,	// (0x00000dab) list_single_graphic_2heading_pane_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_2heading_pane_g5

0x0002,

0x9dca,	// (0x00009dca) list_single_graphic_2heading_pane_g_ParamLimits

0x9dca,	// (0x00009dca) list_single_graphic_2heading_pane_g

0x30e8,	// (0x000030e8) list_single_graphic_2heading_pane_t1_ParamLimits

0x30e8,	// (0x000030e8) list_single_graphic_2heading_pane_t1

0x30fc,	// (0x000030fc) list_single_graphic_2heading_pane_t2_ParamLimits

0x30fc,	// (0x000030fc) list_single_graphic_2heading_pane_t2

0x3116,	// (0x00003116) list_single_graphic_2heading_pane_t3_ParamLimits

0x3116,	// (0x00003116) list_single_graphic_2heading_pane_t3

0x0002,

0x9dd1,	// (0x00009dd1) list_single_graphic_2heading_pane_t_ParamLimits

0x9dd1,	// (0x00009dd1) list_single_graphic_2heading_pane_t

0x312e,	// (0x0000312e) bg_popup_sub_pane_cp2

0x3154,	// (0x00003154) grid_toobar_pane

0x318a,	// (0x0000318a) cell_toolbar_pane_ParamLimits

0x318a,	// (0x0000318a) cell_toolbar_pane

0x31b1,	// (0x000031b1) cell_toolbar_pane_g1_ParamLimits

0x31b1,	// (0x000031b1) cell_toolbar_pane_g1

0x31c3,	// (0x000031c3) cell_toolbar_pane_g2_ParamLimits

0x31c3,	// (0x000031c3) cell_toolbar_pane_g2

0x0001,

0x9dd8,	// (0x00009dd8) cell_toolbar_pane_g_ParamLimits

0x9dd8,	// (0x00009dd8) cell_toolbar_pane_g

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

0x9ddd,	// (0x00009ddd) toolbar_button_pane_g

0x325b,	// (0x0000325b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x325b,	// (0x0000325b) list_single_2graphic_pane_g1_cp3

0xbd19,	// (0x0000bd19) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbd19,	// (0x0000bd19) list_single_2graphic_pane_g2_cp3

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

0xa66c,	// (0x0000a66c) title_pane_g2

0x0003,

0xe09a,	// (0x0000e09a) title_pane_g

0xa94e,	// (0x0000a94e) aid_size_cell_colour_1_pane_ParamLimits

0xa94e,	// (0x0000a94e) aid_size_cell_colour_1_pane

0xa962,	// (0x0000a962) aid_size_cell_colour_2_pane_ParamLimits

0xa962,	// (0x0000a962) aid_size_cell_colour_2_pane

0xa976,	// (0x0000a976) aid_size_cell_colour_3_pane_ParamLimits

0xa976,	// (0x0000a976) aid_size_cell_colour_3_pane

0xa98a,	// (0x0000a98a) aid_size_cell_colour_4_pane_ParamLimits

0xa98a,	// (0x0000a98a) aid_size_cell_colour_4_pane

0x16d3,	// (0x000016d3) title_pane_stacon_g1_ParamLimits

0x16d3,	// (0x000016d3) title_pane_stacon_g1

0x39a7,	// (0x000039a7) popup_note_wait_window_g3_ParamLimits

0x39a7,	// (0x000039a7) popup_note_wait_window_g3

0x3a1d,	// (0x00003a1d) popup_note_wait_window_t5_ParamLimits

0x3a1d,	// (0x00003a1d) popup_note_wait_window_t5

0x024e,	// (0x0000024e) main_feb_china_hwr_fs_writing_pane

0xb42a,	// (0x0000b42a) popup_feb_china_hwr_fs_window_ParamLimits

0xb42a,	// (0x0000b42a) popup_feb_china_hwr_fs_window

0xbd2a,	// (0x0000bd2a) aid_size_cell_hwr_fs_ParamLimits

0xbd2a,	// (0x0000bd2a) aid_size_cell_hwr_fs

0x3395,	// (0x00003395) bg_popup_sub_pane_cp3_ParamLimits

0x3395,	// (0x00003395) bg_popup_sub_pane_cp3

0xbd3f,	// (0x0000bd3f) grid_hwr_fs_pane_ParamLimits

0xbd3f,	// (0x0000bd3f) grid_hwr_fs_pane

0x33b5,	// (0x000033b5) linegrid_hwr_fs_pane_ParamLimits

0x33b5,	// (0x000033b5) linegrid_hwr_fs_pane

0xbd57,	// (0x0000bd57) cell_hwr_fs_pane_ParamLimits

0xbd57,	// (0x0000bd57) cell_hwr_fs_pane

0x33e3,	// (0x000033e3) linegrid_hwr_fs_pane_g1_ParamLimits

0x33e3,	// (0x000033e3) linegrid_hwr_fs_pane_g1

0xbd77,	// (0x0000bd77) linegrid_hwr_fs_pane_g2_ParamLimits

0xbd77,	// (0x0000bd77) linegrid_hwr_fs_pane_g2

0x3401,	// (0x00003401) linegrid_hwr_fs_pane_g3_ParamLimits

0x3401,	// (0x00003401) linegrid_hwr_fs_pane_g3

0x340d,	// (0x0000340d) linegrid_hwr_fs_pane_g4_ParamLimits

0x340d,	// (0x0000340d) linegrid_hwr_fs_pane_g4

0x3427,	// (0x00003427) linegrid_hwr_fs_pane_g5_ParamLimits

0x3427,	// (0x00003427) linegrid_hwr_fs_pane_g5

0x0004,

0xe1b5,	// (0x0000e1b5) linegrid_hwr_fs_pane_g_ParamLimits

0xe1b5,	// (0x0000e1b5) linegrid_hwr_fs_pane_g

0x343d,	// (0x0000343d) cell_hwr_fs_pane_g1_ParamLimits

0x343d,	// (0x0000343d) cell_hwr_fs_pane_g1

0x301a,	// (0x0000301a) cell_hwr_fs_pane_g2_ParamLimits

0x301a,	// (0x0000301a) cell_hwr_fs_pane_g2

0xbd89,	// (0x0000bd89) cell_hwr_fs_pane_g3_ParamLimits

0xbd89,	// (0x0000bd89) cell_hwr_fs_pane_g3

0xbd96,	// (0x0000bd96) cell_hwr_fs_pane_g4_ParamLimits

0xbd96,	// (0x0000bd96) cell_hwr_fs_pane_g4

0x0003,

0xe1c0,	// (0x0000e1c0) cell_hwr_fs_pane_g_ParamLimits

0xe1c0,	// (0x0000e1c0) cell_hwr_fs_pane_g

0xbda3,	// (0x0000bda3) cell_hwr_fs_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp6

0x024e,	// (0x0000024e) main_idle_act2_pane

0x1496,	// (0x00001496) aid_inside_area_popup_secondary

0xbf93,	// (0x0000bf93) aid_inside_area_window_primary_ParamLimits

0xbf93,	// (0x0000bf93) aid_inside_area_window_primary

0x4e0d,	// (0x00004e0d) ai2_news_ticker_pane

0x4e15,	// (0x00004e15) aid_size_cell_ai1_link_ParamLimits

0x4e15,	// (0x00004e15) aid_size_cell_ai1_link

0xc3de,	// (0x0000c3de) popup_ai2_data_window_ParamLimits

0xc3de,	// (0x0000c3de) popup_ai2_data_window

0x4e43,	// (0x00004e43) popup_ai2_link_window_ParamLimits

0x4e43,	// (0x00004e43) popup_ai2_link_window

0x3395,	// (0x00003395) bg_popup_sub_pane_cp4_ParamLimits

0x3395,	// (0x00003395) bg_popup_sub_pane_cp4

0x4e57,	// (0x00004e57) grid_ai2_link_pane_ParamLimits

0x4e57,	// (0x00004e57) grid_ai2_link_pane

0x4e6e,	// (0x00004e6e) popup_ai2_link_window_g1_ParamLimits

0x4e6e,	// (0x00004e6e) popup_ai2_link_window_g1

0x4e7a,	// (0x00004e7a) popup_ai2_link_window_g2_ParamLimits

0x4e7a,	// (0x00004e7a) popup_ai2_link_window_g2

0x0001,

0x9fd5,	// (0x00009fd5) popup_ai2_link_window_g_ParamLimits

0x9fd5,	// (0x00009fd5) popup_ai2_link_window_g

0x4e89,	// (0x00004e89) ai2_mp_button_pane

0x4e91,	// (0x00004e91) ai2_mp_volume_pane

0x35d3,	// (0x000035d3) bg_popup_sub_pane_cp5_ParamLimits

0x35d3,	// (0x000035d3) bg_popup_sub_pane_cp5

0x4e99,	// (0x00004e99) heading_ai2_gene_pane_ParamLimits

0x4e99,	// (0x00004e99) heading_ai2_gene_pane

0x4ea5,	// (0x00004ea5) list_ai2_gene_pane_ParamLimits

0x4ea5,	// (0x00004ea5) list_ai2_gene_pane

0x4eed,	// (0x00004eed) cell_ai2_link_pane_ParamLimits

0x4eed,	// (0x00004eed) cell_ai2_link_pane

0x4f03,	// (0x00004f03) cell_ai2_link_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp7

0x4fcb,	// (0x00004fcb) ai2_mp_volume_pane_g1

0x4fd3,	// (0x00004fd3) ai2_mp_volume_pane_g2

0xc408,	// (0x0000c408) list_ai2_gene_pane_t1

0x4fdb,	// (0x00004fdb) ai2_mp_volume_pane_g3

0x0002,

0x9fee,	// (0x00009fee) ai2_mp_volume_pane_g

0x4fe3,	// (0x00004fe3) volume_small_pane_cp3

0x4fec,	// (0x00004fec) aid_size_cell_ai2_button

0x4ff4,	// (0x00004ff4) grid_ai2_button_pane

0x4ffd,	// (0x00004ffd) cell_ai2_button_pane_ParamLimits

0x4ffd,	// (0x00004ffd) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp8

0x4f8b,	// (0x00004f8b) ai2_gene_pane_t1_ParamLimits

0x4f8b,	// (0x00004f8b) ai2_gene_pane_t1

0xb398,	// (0x0000b398) aid_height_parent_landscape

0xc15d,	// (0x0000c15d) aid_height_set_list

0x4887,	// (0x00004887) aid_size_parent

0x4bda,	// (0x00004bda) aid_size_cell_graphic_pane_ParamLimits

0x4eb5,	// (0x00004eb5) popup_ai2_data_window_g1_ParamLimits

0x4eb5,	// (0x00004eb5) popup_ai2_data_window_g1

0x4ec1,	// (0x00004ec1) ai2_news_ticker_pane_g1

0x4ec9,	// (0x00004ec9) ai2_news_ticker_pane_g2

0x0001,

0x9fda,	// (0x00009fda) ai2_news_ticker_pane_g

0x4ed1,	// (0x00004ed1) ai2_news_ticker_pane_t1

0x4edf,	// (0x00004edf) ai2_news_ticker_pane_t2

0x0001,

0x9fdf,	// (0x00009fdf) ai2_news_ticker_pane_t

0x4b74,	// (0x00004b74) heading_ai2_gene_pane_g1

0x4f0c,	// (0x00004f0c) heading_ai2_gene_pane_t1_ParamLimits

0x4f0c,	// (0x00004f0c) heading_ai2_gene_pane_t1

0x4f21,	// (0x00004f21) list_highlight_pane_cp6

0xc3f2,	// (0x0000c3f2) ai2_gene_pane_ParamLimits

0xc3f2,	// (0x0000c3f2) ai2_gene_pane

0xc416,	// (0x0000c416) list_ai2_gene_pane_t2

0x0001,

0xe25d,	// (0x0000e25d) list_ai2_gene_pane_t

0x4f5c,	// (0x00004f5c) list_highlight_pane_cp8_ParamLimits

0x4f5c,	// (0x00004f5c) list_highlight_pane_cp8

0x4f6d,	// (0x00004f6d) ai2_gene_pane_g1_ParamLimits

0x4f6d,	// (0x00004f6d) ai2_gene_pane_g1

0x4f7f,	// (0x00004f7f) ai2_gene_pane_g2_ParamLimits

0x4f7f,	// (0x00004f7f) ai2_gene_pane_g2

0x0001,

0x9fe9,	// (0x00009fe9) ai2_gene_pane_g_ParamLimits

0x9fe9,	// (0x00009fe9) ai2_gene_pane_g

0x0c62,	// (0x00000c62) scroll_pane_cp12

0xb357,	// (0x0000b357) control_pane_t3_ParamLimits

0xb357,	// (0x0000b357) control_pane_t3

0x25f2,	// (0x000025f2) status_small_pane_g8_ParamLimits

0x25f2,	// (0x000025f2) status_small_pane_g8

0xb49e,	// (0x0000b49e) popup_find_window_ParamLimits

0xb691,	// (0x0000b691) popup_note_image_window_ParamLimits

0x0e74,	// (0x00000e74) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double2_graphic_pane_vc_g1

0x0e80,	// (0x00000e80) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e80,	// (0x00000e80) list_double2_graphic_pane_vc_g2

0x0dab,	// (0x00000dab) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dab,	// (0x00000dab) list_double2_graphic_pane_vc_g3

0x0002,

0x9c38,	// (0x00009c38) list_double2_graphic_pane_vc_g_ParamLimits

0x9c38,	// (0x00009c38) list_double2_graphic_pane_vc_g

0x0e8c,	// (0x00000e8c) list_double2_graphic_pane_vc_t1_ParamLimits

0x0e8c,	// (0x00000e8c) list_double2_graphic_pane_vc_t1

0x0e80,	// (0x00000e80) list_single_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_single_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_heading_pane_vc_g2

0x0001,

0x9c84,	// (0x00009c84) list_single_heading_pane_vc_g_ParamLimits

0x9c84,	// (0x00009c84) list_single_heading_pane_vc_g

0x329c,	// (0x0000329c) list_single_heading_pane_vc_t1_ParamLimits

0x329c,	// (0x0000329c) list_single_heading_pane_vc_t1

0x32b2,	// (0x000032b2) list_single_heading_pane_vc_t2_ParamLimits

0x32b2,	// (0x000032b2) list_single_heading_pane_vc_t2

0x0001,

0x9df2,	// (0x00009df2) list_single_heading_pane_vc_t_ParamLimits

0x9df2,	// (0x00009df2) list_single_heading_pane_vc_t

0x32da,	// (0x000032da) list_setting_number_pane_vc_g1_ParamLimits

0x32da,	// (0x000032da) list_setting_number_pane_vc_g1

0x32e6,	// (0x000032e6) list_setting_number_pane_vc_g2_ParamLimits

0x32e6,	// (0x000032e6) list_setting_number_pane_vc_g2

0x0001,

0x9df7,	// (0x00009df7) list_setting_number_pane_vc_g_ParamLimits

0x9df7,	// (0x00009df7) list_setting_number_pane_vc_g

0x32f2,	// (0x000032f2) list_setting_number_pane_vc_t1_ParamLimits

0x32f2,	// (0x000032f2) list_setting_number_pane_vc_t1

0x3306,	// (0x00003306) list_setting_number_pane_vc_t2_ParamLimits

0x3306,	// (0x00003306) list_setting_number_pane_vc_t2

0x3322,	// (0x00003322) list_setting_number_pane_vc_t3_ParamLimits

0x3322,	// (0x00003322) list_setting_number_pane_vc_t3

0x0002,

0x9dfc,	// (0x00009dfc) list_setting_number_pane_vc_t_ParamLimits

0x9dfc,	// (0x00009dfc) list_setting_number_pane_vc_t

0x3348,	// (0x00003348) set_value_pane_vc_ParamLimits

0x3348,	// (0x00003348) set_value_pane_vc

0x4a51,	// (0x00004a51) list_double2_graphic_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double2_graphic_pane_vc

0x4a64,	// (0x00004a64) list_double2_large_graphic_pane_vc_ParamLimits

0x4a64,	// (0x00004a64) list_double2_large_graphic_pane_vc

0x4a51,	// (0x00004a51) list_double2_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double2_pane_vc

0x4a51,	// (0x00004a51) list_double_graphic_heading_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double_graphic_heading_pane_vc

0x4a51,	// (0x00004a51) list_double_graphic_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double_graphic_pane_vc

0x4a51,	// (0x00004a51) list_double_heading_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double_heading_pane_vc

0x4a64,	// (0x00004a64) list_double_large_graphic_pane_vc_ParamLimits

0x4a64,	// (0x00004a64) list_double_large_graphic_pane_vc

0x4a51,	// (0x00004a51) list_double_number_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double_number_pane_vc

0x4a51,	// (0x00004a51) list_double_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double_pane_vc

0x4a51,	// (0x00004a51) list_double_time_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_double_time_pane_vc

0x4a51,	// (0x00004a51) list_setting_number_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_setting_number_pane_vc

0x4a51,	// (0x00004a51) list_setting_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_setting_pane_vc

0x4a51,	// (0x00004a51) list_single_graphic_heading_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_single_graphic_heading_pane_vc

0x4a51,	// (0x00004a51) list_single_heading_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_single_heading_pane_vc

0x4a51,	// (0x00004a51) list_single_number_heading_pane_vc_ParamLimits

0x4a51,	// (0x00004a51) list_single_number_heading_pane_vc

0x0e74,	// (0x00000e74) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double_graphic_heading_pane_vc_g1

0x0e80,	// (0x00000e80) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0e80,	// (0x00000e80) list_double_graphic_heading_pane_vc_g2

0x0dab,	// (0x00000dab) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0dab,	// (0x00000dab) list_double_graphic_heading_pane_vc_g3

0x0002,

0x9c38,	// (0x00009c38) list_double_graphic_heading_pane_vc_g_ParamLimits

0x9c38,	// (0x00009c38) list_double_graphic_heading_pane_vc_g

0x5031,	// (0x00005031) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5031,	// (0x00005031) list_double_graphic_heading_pane_vc_t1

0x329c,	// (0x0000329c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x329c,	// (0x0000329c) list_double_graphic_heading_pane_vc_t2

0x0001,

0x9ff5,	// (0x00009ff5) list_double_graphic_heading_pane_vc_t_ParamLimits

0x9ff5,	// (0x00009ff5) list_double_graphic_heading_pane_vc_t

0x32da,	// (0x000032da) list_setting_pane_vc_g1_ParamLimits

0x32da,	// (0x000032da) list_setting_pane_vc_g1

0x32e6,	// (0x000032e6) list_setting_pane_vc_g2_ParamLimits

0x32e6,	// (0x000032e6) list_setting_pane_vc_g2

0x0001,

0x9df7,	// (0x00009df7) list_setting_pane_vc_g_ParamLimits

0x9df7,	// (0x00009df7) list_setting_pane_vc_g

0x5271,	// (0x00005271) list_setting_pane_vc_t1_ParamLimits

0x5271,	// (0x00005271) list_setting_pane_vc_t1

0x5285,	// (0x00005285) list_setting_pane_vc_t2_ParamLimits

0x5285,	// (0x00005285) list_setting_pane_vc_t2

0x0001,

0xa038,	// (0x0000a038) list_setting_pane_vc_t_ParamLimits

0xa038,	// (0x0000a038) list_setting_pane_vc_t

0x3348,	// (0x00003348) set_value_pane_cp_vc_ParamLimits

0x3348,	// (0x00003348) set_value_pane_cp_vc

0x0e80,	// (0x00000e80) list_single_number_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_single_number_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_single_number_heading_pane_vc_g2

0x0001,

0x9c84,	// (0x00009c84) list_single_number_heading_pane_vc_g_ParamLimits

0x9c84,	// (0x00009c84) list_single_number_heading_pane_vc_g

0x329c,	// (0x0000329c) list_single_number_heading_pane_vc_t1_ParamLimits

0x329c,	// (0x0000329c) list_single_number_heading_pane_vc_t1

0x52a7,	// (0x000052a7) list_single_number_heading_pane_vc_t2_ParamLimits

0x52a7,	// (0x000052a7) list_single_number_heading_pane_vc_t2

0x52b9,	// (0x000052b9) list_single_number_heading_pane_vc_t3_ParamLimits

0x52b9,	// (0x000052b9) list_single_number_heading_pane_vc_t3

0x0002,

0xa03d,	// (0x0000a03d) list_single_number_heading_pane_vc_t_ParamLimits

0xa03d,	// (0x0000a03d) list_single_number_heading_pane_vc_t

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_single_graphic_heading_pane_vc_g1

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_vc_g4

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dab,	// (0x00000dab) list_single_graphic_heading_pane_vc_g5

0x0002,

0x9c38,	// (0x00009c38) list_single_graphic_heading_pane_vc_g_ParamLimits

0x9c38,	// (0x00009c38) list_single_graphic_heading_pane_vc_g

0x329c,	// (0x0000329c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x329c,	// (0x0000329c) list_single_graphic_heading_pane_vc_t1

0x52cb,	// (0x000052cb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x52cb,	// (0x000052cb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa044,	// (0x0000a044) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa044,	// (0x0000a044) list_single_graphic_heading_pane_vc_t

0x0e80,	// (0x00000e80) list_double2_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double2_pane_vc_g1

0x0dab,	// (0x00000dab) list_double2_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double2_pane_vc_g2

0x0001,

0x9c84,	// (0x00009c84) list_double2_pane_vc_g_ParamLimits

0x9c84,	// (0x00009c84) list_double2_pane_vc_g

0x0db7,	// (0x00000db7) list_double2_pane_vc_t1_ParamLimits

0x0db7,	// (0x00000db7) list_double2_pane_vc_t1

0x0d1a,	// (0x00000d1a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d1a,	// (0x00000d1a) list_double2_large_graphic_pane_vc_g1

0x0d26,	// (0x00000d26) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d26,	// (0x00000d26) list_double2_large_graphic_pane_vc_g2

0x0d32,	// (0x00000d32) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d32,	// (0x00000d32) list_double2_large_graphic_pane_vc_g3

0x0002,

0x9c08,	// (0x00009c08) list_double2_large_graphic_pane_vc_g_ParamLimits

0x9c08,	// (0x00009c08) list_double2_large_graphic_pane_vc_g

0x0d46,	// (0x00000d46) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d46,	// (0x00000d46) list_double2_large_graphic_pane_vc_t1

0x52dd,	// (0x000052dd) list_double_time_pane_vc_g1_ParamLimits

0x52dd,	// (0x000052dd) list_double_time_pane_vc_g1

0x52e9,	// (0x000052e9) list_double_time_pane_vc_g2_ParamLimits

0x52e9,	// (0x000052e9) list_double_time_pane_vc_g2

0x0001,

0xa049,	// (0x0000a049) list_double_time_pane_vc_g_ParamLimits

0xa049,	// (0x0000a049) list_double_time_pane_vc_g

0x52f5,	// (0x000052f5) list_double_time_pane_vc_t1_ParamLimits

0x52f5,	// (0x000052f5) list_double_time_pane_vc_t1

0x530e,	// (0x0000530e) list_double_time_pane_vc_t2_ParamLimits

0x530e,	// (0x0000530e) list_double_time_pane_vc_t2

0x5327,	// (0x00005327) list_double_time_pane_vc_t3_ParamLimits

0x5327,	// (0x00005327) list_double_time_pane_vc_t3

0x533f,	// (0x0000533f) list_double_time_pane_vc_t4_ParamLimits

0x533f,	// (0x0000533f) list_double_time_pane_vc_t4

0x0003,

0xa04e,	// (0x0000a04e) list_double_time_pane_vc_t_ParamLimits

0xa04e,	// (0x0000a04e) list_double_time_pane_vc_t

0x0e80,	// (0x00000e80) list_double_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_pane_vc_g2

0x0001,

0x9c84,	// (0x00009c84) list_double_pane_vc_g_ParamLimits

0x9c84,	// (0x00009c84) list_double_pane_vc_g

0x5351,	// (0x00005351) list_double_pane_vc_t1_ParamLimits

0x5351,	// (0x00005351) list_double_pane_vc_t1

0x5363,	// (0x00005363) list_double_pane_vc_t2_ParamLimits

0x5363,	// (0x00005363) list_double_pane_vc_t2

0x0001,

0xa057,	// (0x0000a057) list_double_pane_vc_t_ParamLimits

0xa057,	// (0x0000a057) list_double_pane_vc_t

0x0e80,	// (0x00000e80) list_double_number_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_number_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_number_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_number_pane_vc_g2

0x0001,

0x9c84,	// (0x00009c84) list_double_number_pane_vc_g_ParamLimits

0x9c84,	// (0x00009c84) list_double_number_pane_vc_g

0x5379,	// (0x00005379) list_double_number_pane_vc_t1_ParamLimits

0x5379,	// (0x00005379) list_double_number_pane_vc_t1

0x538d,	// (0x0000538d) list_double_number_pane_vc_t2_ParamLimits

0x538d,	// (0x0000538d) list_double_number_pane_vc_t2

0x5363,	// (0x00005363) list_double_number_pane_vc_t3_ParamLimits

0x5363,	// (0x00005363) list_double_number_pane_vc_t3

0x0002,

0xa05c,	// (0x0000a05c) list_double_number_pane_vc_t_ParamLimits

0xa05c,	// (0x0000a05c) list_double_number_pane_vc_t

0x539f,	// (0x0000539f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x539f,	// (0x0000539f) list_double_large_graphic_pane_vc_g1

0x53ab,	// (0x000053ab) list_double_large_graphic_pane_vc_g2_ParamLimits

0x53ab,	// (0x000053ab) list_double_large_graphic_pane_vc_g2

0x0d32,	// (0x00000d32) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0d32,	// (0x00000d32) list_double_large_graphic_pane_vc_g3

0x53ba,	// (0x000053ba) list_double_large_graphic_pane_vc_g4_ParamLimits

0x53ba,	// (0x000053ba) list_double_large_graphic_pane_vc_g4

0x0003,

0xa063,	// (0x0000a063) list_double_large_graphic_pane_vc_g_ParamLimits

0xa063,	// (0x0000a063) list_double_large_graphic_pane_vc_g

0x53c6,	// (0x000053c6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x53c6,	// (0x000053c6) list_double_large_graphic_pane_vc_t1

0x53d8,	// (0x000053d8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x53d8,	// (0x000053d8) list_double_large_graphic_pane_vc_t2

0x0001,

0xa06c,	// (0x0000a06c) list_double_large_graphic_pane_vc_t_ParamLimits

0xa06c,	// (0x0000a06c) list_double_large_graphic_pane_vc_t

0x0e80,	// (0x00000e80) list_double_heading_pane_vc_g1_ParamLimits

0x0e80,	// (0x00000e80) list_double_heading_pane_vc_g1

0x0dab,	// (0x00000dab) list_double_heading_pane_vc_g2_ParamLimits

0x0dab,	// (0x00000dab) list_double_heading_pane_vc_g2

0x0001,

0x9c84,	// (0x00009c84) list_double_heading_pane_vc_g_ParamLimits

0x9c84,	// (0x00009c84) list_double_heading_pane_vc_g

0x53ef,	// (0x000053ef) list_double_heading_pane_vc_t1_ParamLimits

0x53ef,	// (0x000053ef) list_double_heading_pane_vc_t1

0x329c,	// (0x0000329c) list_double_heading_pane_vc_t2_ParamLimits

0x329c,	// (0x0000329c) list_double_heading_pane_vc_t2

0x0001,

0xa071,	// (0x0000a071) list_double_heading_pane_vc_t_ParamLimits

0xa071,	// (0x0000a071) list_double_heading_pane_vc_t

0x0e74,	// (0x00000e74) list_double_graphic_pane_vc_g1_ParamLimits

0x0e74,	// (0x00000e74) list_double_graphic_pane_vc_g1

0x5401,	// (0x00005401) list_double_graphic_pane_vc_g2_ParamLimits

0x5401,	// (0x00005401) list_double_graphic_pane_vc_g2

0x5410,	// (0x00005410) list_double_graphic_pane_vc_g3_ParamLimits

0x5410,	// (0x00005410) list_double_graphic_pane_vc_g3

0x0002,

0xa076,	// (0x0000a076) list_double_graphic_pane_vc_g_ParamLimits

0xa076,	// (0x0000a076) list_double_graphic_pane_vc_g

0x541c,	// (0x0000541c) list_double_graphic_pane_vc_t1_ParamLimits

0x541c,	// (0x0000541c) list_double_graphic_pane_vc_t1

0x5363,	// (0x00005363) list_double_graphic_pane_vc_t2_ParamLimits

0x5363,	// (0x00005363) list_double_graphic_pane_vc_t2

0x0001,

0xa07d,	// (0x0000a07d) list_double_graphic_pane_vc_t_ParamLimits

0xa07d,	// (0x0000a07d) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xa4e5,	// (0x0000a4e5) aid_size_cell_touch_ParamLimits

0xa4e5,	// (0x0000a4e5) aid_size_cell_touch

0x0278,	// (0x00000278) popup_fast_swap_wide_window_ParamLimits

0x0278,	// (0x00000278) popup_fast_swap_wide_window

0xa5ff,	// (0x0000a5ff) touch_pane_ParamLimits

0xa5ff,	// (0x0000a5ff) touch_pane

0x1118,	// (0x00001118) button_value_adjust_pane_cp2

0x1120,	// (0x00001120) button_value_adjust_pane_cp4

0x1140,	// (0x00001140) form_field_data_pane_cp2

0xad93,	// (0x0000ad93) form_field_data_wide_pane_cp2

0x18f5,	// (0x000018f5) bg_scroll_pane_ParamLimits

0x1914,	// (0x00001914) scroll_handle_pane_ParamLimits

0x1928,	// (0x00001928) scroll_sc2_down_pane_ParamLimits

0x1928,	// (0x00001928) scroll_sc2_down_pane

0x194f,	// (0x0000194f) scroll_sc2_up_pane_ParamLimits

0x194f,	// (0x0000194f) scroll_sc2_up_pane

0xc53a,	// (0x0000c53a) grid_wheel_folder_pane_g1_ParamLimits

0xc53a,	// (0x0000c53a) grid_wheel_folder_pane_g1

0x1faf,	// (0x00001faf) clock_nsta_pane_cp2_ParamLimits

0x1faf,	// (0x00001faf) clock_nsta_pane_cp2

0xb1a2,	// (0x0000b1a2) listscroll_midp_pane_ParamLimits

0xb1b2,	// (0x0000b1b2) midp_canvas_pane

0x27b0,	// (0x000027b0) nsta_clock_indic_pane

0x280e,	// (0x0000280e) listscroll_form_pane_vc

0x282b,	// (0x0000282b) listscroll_set_pane_vc_ParamLimits

0x282b,	// (0x0000282b) listscroll_set_pane_vc

0xba5d,	// (0x0000ba5d) clock_nsta_pane

0xba80,	// (0x0000ba80) indicator_nsta_pane

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

0xbe4a,	// (0x0000be4a) list_midp_pane_ParamLimits

0x4c3b,	// (0x00004c3b) scroll_pane_cp16_ParamLimits

0x4c3b,	// (0x00004c3b) scroll_pane_cp16

0x37b0,	// (0x000037b0) button_value_adjust_pane_ParamLimits

0x37b0,	// (0x000037b0) button_value_adjust_pane

0xc169,	// (0x0000c169) button_value_adjust_pane_cp6_ParamLimits

0xc169,	// (0x0000c169) button_value_adjust_pane_cp6

0xc273,	// (0x0000c273) settings_code_pane_cp_ParamLimits

0xc273,	// (0x0000c273) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0x9d21,	// (0x00009d21) cell_touch_pane_g

0xc424,	// (0x0000c424) cell_touch_pane_cp_ParamLimits

0xc424,	// (0x0000c424) cell_touch_pane_cp

0xc440,	// (0x0000c440) cell_touch_pane_ParamLimits

0xc440,	// (0x0000c440) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_vc

0x5043,	// (0x00005043) list_set_graphic_pane_vc_g1_ParamLimits

0x5043,	// (0x00005043) list_set_graphic_pane_vc_g1

0x504f,	// (0x0000504f) list_set_graphic_pane_vc_g2_ParamLimits

0x504f,	// (0x0000504f) list_set_graphic_pane_vc_g2

0x0001,

0x9ffa,	// (0x00009ffa) list_set_graphic_pane_vc_g_ParamLimits

0x9ffa,	// (0x00009ffa) list_set_graphic_pane_vc_g

0x505b,	// (0x0000505b) text_primary_small_cp13_vc_ParamLimits

0x505b,	// (0x0000505b) text_primary_small_cp13_vc

0x5073,	// (0x00005073) list_set_graphic_pane_vc_ParamLimits

0x5073,	// (0x00005073) list_set_graphic_pane_vc

0x024e,	// (0x0000024e) input_focus_pane_cp2_vc

0x002a,	// (0x0000002a) setting_code_pane_vc_g1

0x5086,	// (0x00005086) setting_code_pane_vc_t1

0x5094,	// (0x00005094) set_text_pane_vc_t1_ParamLimits

0x5094,	// (0x00005094) set_text_pane_vc_t1

0x024e,	// (0x0000024e) input_focus_pane_cp1_vc

0x50af,	// (0x000050af) list_set_text_pane_vc

0x002a,	// (0x0000002a) setting_text_pane_vc_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_vc

0x50b9,	// (0x000050b9) setting_slider_graphic_pane_vc_g1

0x50c1,	// (0x000050c1) setting_slider_graphic_pane_vc_t1

0x50cf,	// (0x000050cf) setting_slider_graphic_pane_vc_t2

0x0001,

0x9fff,	// (0x00009fff) setting_slider_graphic_pane_vc_t

0x50dd,	// (0x000050dd) slider_set_pane_cp_vc

0x50e5,	// (0x000050e5) slider_set_pane_vc_g1

0x50ee,	// (0x000050ee) slider_set_pane_vc_g2

0x0006,

0xa004,	// (0x0000a004) slider_set_pane_vc_g

0x130e,	// (0x0000130e) set_opt_bg_pane_g1_copy1

0x1316,	// (0x00001316) set_opt_bg_pane_g2_copy1

0x511a,	// (0x0000511a) set_opt_bg_pane_g3_copy1

0x1326,	// (0x00001326) set_opt_bg_pane_g4_copy1

0x132e,	// (0x0000132e) set_opt_bg_pane_g5_copy1

0x1336,	// (0x00001336) set_opt_bg_pane_g6_copy1

0x5122,	// (0x00005122) set_opt_bg_pane_g7_copy1

0x512a,	// (0x0000512a) set_opt_bg_pane_g8_copy1

0x5132,	// (0x00005132) set_opt_bg_pane_g9_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp_vc

0x513a,	// (0x0000513a) setting_slider_pane_vc_t1

0x50c1,	// (0x000050c1) setting_slider_pane_vc_t2

0x50cf,	// (0x000050cf) setting_slider_pane_vc_t3

0x0002,

0xa013,	// (0x0000a013) setting_slider_pane_vc_t

0x50dd,	// (0x000050dd) slider_set_pane_vc

0x3f69,	// (0x00003f69) volume_set_pane_vc_g1

0x5149,	// (0x00005149) volume_set_pane_vc_g2

0x5152,	// (0x00005152) volume_set_pane_vc_g3

0x515b,	// (0x0000515b) volume_set_pane_vc_g4

0x5164,	// (0x00005164) volume_set_pane_vc_g5

0x516d,	// (0x0000516d) volume_set_pane_vc_g6

0x5176,	// (0x00005176) volume_set_pane_vc_g7

0x517f,	// (0x0000517f) volume_set_pane_vc_g8

0x5188,	// (0x00005188) volume_set_pane_vc_g9

0x5191,	// (0x00005191) volume_set_pane_vc_g10

0x0009,

0xa01a,	// (0x0000a01a) volume_set_pane_vc_g

0x519a,	// (0x0000519a) volume_set_pane_vc

0x51a2,	// (0x000051a2) button_value_adjust_pane_cp1_vc

0x51ac,	// (0x000051ac) list_highlight_pane_cp2_vc

0x51b5,	// (0x000051b5) list_set_pane_vc_ParamLimits

0x51b5,	// (0x000051b5) list_set_pane_vc

0x5207,	// (0x00005207) main_pane_set_vc_t1_ParamLimits

0x5207,	// (0x00005207) main_pane_set_vc_t1

0x521c,	// (0x0000521c) main_pane_set_vc_t2_ParamLimits

0x521c,	// (0x0000521c) main_pane_set_vc_t2

0x522e,	// (0x0000522e) main_pane_set_vc_t3_ParamLimits

0x522e,	// (0x0000522e) main_pane_set_vc_t3

0x5240,	// (0x00005240) main_pane_set_vc_t4_ParamLimits

0x5240,	// (0x00005240) main_pane_set_vc_t4

0x0003,

0xa02f,	// (0x0000a02f) main_pane_set_vc_t_ParamLimits

0xa02f,	// (0x0000a02f) main_pane_set_vc_t

0x5252,	// (0x00005252) setting_code_pane_vc_ParamLimits

0x5252,	// (0x00005252) setting_code_pane_vc

0x5261,	// (0x00005261) setting_slider_graphic_pane_vc

0x5261,	// (0x00005261) setting_slider_pane_vc

0x5261,	// (0x00005261) setting_text_pane_vc

0x5261,	// (0x00005261) setting_volume_pane_vc

0x5269,	// (0x00005269) scroll_pane_cp121_vc

0x110f,	// (0x0000110f) set_content_pane_vc

0x542e,	// (0x0000542e) button_value_adjust_pane_g1

0x5437,	// (0x00005437) button_value_adjust_pane_g2

0x0001,

0xa082,	// (0x0000a082) button_value_adjust_pane_g

0x5440,	// (0x00005440) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5440,	// (0x00005440) form_field_slider_wide_pane_vc_t1

0x5456,	// (0x00005456) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5456,	// (0x00005456) form_field_slider_wide_pane_vc_t2

0x0001,

0xa087,	// (0x0000a087) form_field_slider_wide_pane_vc_t_ParamLimits

0xa087,	// (0x0000a087) form_field_slider_wide_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp10_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp10_vc

0x546b,	// (0x0000546b) slider_cont_pane_cp1_vc_ParamLimits

0x546b,	// (0x0000546b) slider_cont_pane_cp1_vc

0x50e5,	// (0x000050e5) slider_form_pane_g1_cp2

0x50ee,	// (0x000050ee) slider_form_pane_g2_cp2

0x5486,	// (0x00005486) form_field_slider_pane_vc_t3

0x5494,	// (0x00005494) form_field_slider_pane_vc_t4

0x54a2,	// (0x000054a2) slider_form_pane_vc_ParamLimits

0x54a2,	// (0x000054a2) slider_form_pane_vc

0x54af,	// (0x000054af) form_field_slider_pane_vc_t1_ParamLimits

0x54af,	// (0x000054af) form_field_slider_pane_vc_t1

0x54c5,	// (0x000054c5) form_field_slider_pane_vc_t2_ParamLimits

0x54c5,	// (0x000054c5) form_field_slider_pane_vc_t2

0x0001,

0xa097,	// (0x0000a097) form_field_slider_pane_vc_t_ParamLimits

0xa097,	// (0x0000a097) form_field_slider_pane_vc_t

0x0797,	// (0x00000797) input_focus_pane_cp9_vc_ParamLimits

0x0797,	// (0x00000797) input_focus_pane_cp9_vc

0x54d7,	// (0x000054d7) slider_cont_pane_vc_ParamLimits

0x54d7,	// (0x000054d7) slider_cont_pane_vc

0x54e9,	// (0x000054e9) list_form_graphic_pane_cp_vc_ParamLimits

0x54e9,	// (0x000054e9) list_form_graphic_pane_cp_vc

0x3487,	// (0x00003487) form_field_popup_wide_pane_vc_g1

0x54fe,	// (0x000054fe) form_field_popup_wide_pane_vc_t1_ParamLimits

0x54fe,	// (0x000054fe) form_field_popup_wide_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp8_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp8_vc

0x5513,	// (0x00005513) list_form_wide_pane_vc_ParamLimits

0x5513,	// (0x00005513) list_form_wide_pane_vc

0x551f,	// (0x0000551f) list_form_graphic_pane_vc_g1

0x5527,	// (0x00005527) list_form_graphic_pane_vc_t1_ParamLimits

0x5527,	// (0x00005527) list_form_graphic_pane_vc_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc

0x5543,	// (0x00005543) list_form_graphic_pane_vc_ParamLimits

0x5543,	// (0x00005543) list_form_graphic_pane_vc

0x3487,	// (0x00003487) form_field_popup_pane_vc_g1

0x5559,	// (0x00005559) form_field_popup_pane_vc_t1_ParamLimits

0x5559,	// (0x00005559) form_field_popup_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_cp7_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_cp7_vc

0x556e,	// (0x0000556e) list_form_pane_vc_ParamLimits

0x556e,	// (0x0000556e) list_form_pane_vc

0x557a,	// (0x0000557a) data_form_pane_vc_t1_ParamLimits

0x557a,	// (0x0000557a) data_form_pane_vc_t1

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

0x9caa,	// (0x00009caa) input_focus_pane_vc_g

0x347b,	// (0x0000347b) data_form_pane_vc_ParamLimits

0x347b,	// (0x0000347b) data_form_pane_vc

0x3487,	// (0x00003487) form_field_data_pane_vc_g1

0x5595,	// (0x00005595) form_field_data_pane_vc_t1_ParamLimits

0x5595,	// (0x00005595) form_field_data_pane_vc_t1

0x11e8,	// (0x000011e8) input_focus_pane_vc_ParamLimits

0x11e8,	// (0x000011e8) input_focus_pane_vc

0x1118,	// (0x00001118) button_value_adjust_pane_cp3_vc

0x55ab,	// (0x000055ab) button_value_adjust_pane_cp5_vc

0x55b3,	// (0x000055b3) form_field_data_pane_vc_ParamLimits

0x55b3,	// (0x000055b3) form_field_data_pane_vc

0x1140,	// (0x00001140) form_field_data_pane_vc_cp2

0x55ca,	// (0x000055ca) form_field_data_wide_pane_vc_ParamLimits

0x55ca,	// (0x000055ca) form_field_data_wide_pane_vc

0x55e0,	// (0x000055e0) form_field_data_wide_pane_vc_cp2

0x55e8,	// (0x000055e8) form_field_popup_pane_vc_ParamLimits

0x55e8,	// (0x000055e8) form_field_popup_pane_vc

0x55ff,	// (0x000055ff) form_field_popup_wide_pane_vc_ParamLimits

0x55ff,	// (0x000055ff) form_field_popup_wide_pane_vc

0x5615,	// (0x00005615) form_field_slider_pane_vc_ParamLimits

0x5615,	// (0x00005615) form_field_slider_pane_vc

0x5628,	// (0x00005628) form_field_slider_wide_pane_vc_ParamLimits

0x5628,	// (0x00005628) form_field_slider_wide_pane_vc

0xc45e,	// (0x0000c45e) grid_touch_1_pane_ParamLimits

0xc45e,	// (0x0000c45e) grid_touch_1_pane

0xc472,	// (0x0000c472) grid_touch_2_pane_ParamLimits

0xc472,	// (0x0000c472) grid_touch_2_pane

0x56fc,	// (0x000056fc) touch_pane_g1_ParamLimits

0x56fc,	// (0x000056fc) touch_pane_g1

0x565f,	// (0x0000565f) cell_app_pane_cp_wide_ParamLimits

0x565f,	// (0x0000565f) cell_app_pane_cp_wide

0x566f,	// (0x0000566f) grid_popup_fast_wide_pane_ParamLimits

0x566f,	// (0x0000566f) grid_popup_fast_wide_pane

0x5683,	// (0x00005683) scroll_pane_cp19_ParamLimits

0x5683,	// (0x00005683) scroll_pane_cp19

0x024e,	// (0x0000024e) bg_popup_window_pane_cp20

0x5697,	// (0x00005697) listscroll_popup_fast_wide_pane

0x1502,	// (0x00001502) grid_indicator_nsta_pane

0x569f,	// (0x0000569f) clock_nsta_pane_g1

0x56a8,	// (0x000056a8) clock_nsta_pane_t1

0xc49c,	// (0x0000c49c) cell_indicator_nsta_pane_ParamLimits

0xc49c,	// (0x0000c49c) cell_indicator_nsta_pane

0x56fc,	// (0x000056fc) cell_indicator_nsta_pane_g1

0xc4b9,	// (0x0000c4b9) cell_indicator_nsta_pane_g2

0x0001,

0xe262,	// (0x0000e262) cell_indicator_nsta_pane_g

0x571f,	// (0x0000571f) clock_nsta_pane_cp

0x5727,	// (0x00005727) indicator_nsta_pane_cp

0x5730,	// (0x00005730) nsta_clock_indic_pane_g1

0x05de,	// (0x000005de) grid_indicator_pane

0x1a41,	// (0x00001a41) scroll_pane_cp29

0x1ee4,	// (0x00001ee4) indicator_nsta_pane_cp2_ParamLimits

0x1ee4,	// (0x00001ee4) indicator_nsta_pane_cp2

0x0474,	// (0x00000474) main_apps_wheel_pane

0x364b,	// (0x0000364b) form_midp_field_text_pane_ParamLimits

0x3790,	// (0x00003790) scroll_bar_cp050_ParamLimits

0x5768,	// (0x00005768) cell_indicator_pane_ParamLimits

0x5768,	// (0x00005768) cell_indicator_pane

0x577e,	// (0x0000577e) cell_indicator_pane_g1

0xc4ce,	// (0x0000c4ce) grid_wheel_folder_pane_ParamLimits

0xc4ce,	// (0x0000c4ce) grid_wheel_folder_pane

0xc4dc,	// (0x0000c4dc) list_wheel_apps_pane_ParamLimits

0xc4dc,	// (0x0000c4dc) list_wheel_apps_pane

0xc4e8,	// (0x0000c4e8) main_apps_wheel_pane_g1_ParamLimits

0xc4e8,	// (0x0000c4e8) main_apps_wheel_pane_g1

0xc4f4,	// (0x0000c4f4) main_apps_wheel_pane_g2_ParamLimits

0xc4f4,	// (0x0000c4f4) main_apps_wheel_pane_g2

0x0001,

0xe267,	// (0x0000e267) main_apps_wheel_pane_g_ParamLimits

0xe267,	// (0x0000e267) main_apps_wheel_pane_g

0xc500,	// (0x0000c500) main_apps_wheel_pane_t1_ParamLimits

0xc500,	// (0x0000c500) main_apps_wheel_pane_t1

0xc512,	// (0x0000c512) list_wheel_apps_pane_g1

0xc51a,	// (0x0000c51a) list_wheel_apps_pane_g2

0xc522,	// (0x0000c522) list_wheel_apps_pane_g3

0xc52a,	// (0x0000c52a) list_wheel_apps_pane_g4

0xc532,	// (0x0000c532) list_wheel_apps_pane_g5

0x0004,

0xe26c,	// (0x0000e26c) list_wheel_apps_pane_g

0x0474,	// (0x00000474) navi_icon_text_pane

0xb969,	// (0x0000b969) aid_fill_nsta

0x582f,	// (0x0000582f) navi_icon_text_pane_g1

0x583b,	// (0x0000583b) navi_icon_text_pane_t1

0x2051,	// (0x00002051) list_set_graphic_pane_t1_ParamLimits

0x2051,	// (0x00002051) list_set_graphic_pane_t1

0x3e6d,	// (0x00003e6d) popup_midp_note_alarm_window_t6_ParamLimits

0x3e6d,	// (0x00003e6d) popup_midp_note_alarm_window_t6

0x3e7f,	// (0x00003e7f) popup_midp_note_alarm_window_t7_ParamLimits

0x3e7f,	// (0x00003e7f) popup_midp_note_alarm_window_t7

0x3e91,	// (0x00003e91) popup_midp_note_alarm_window_t8_ParamLimits

0x3e91,	// (0x00003e91) popup_midp_note_alarm_window_t8

0x3ea3,	// (0x00003ea3) popup_midp_note_alarm_window_t9_ParamLimits

0x3ea3,	// (0x00003ea3) popup_midp_note_alarm_window_t9

0x3eb5,	// (0x00003eb5) popup_midp_note_alarm_window_t10_ParamLimits

0x3eb5,	// (0x00003eb5) popup_midp_note_alarm_window_t10

0x3ec7,	// (0x00003ec7) popup_midp_note_alarm_window_t11_ParamLimits

0x3ec7,	// (0x00003ec7) popup_midp_note_alarm_window_t11

0x3ed9,	// (0x00003ed9) scroll_pane_cp17_ParamLimits

0x3ed9,	// (0x00003ed9) scroll_pane_cp17

0x3f69,	// (0x00003f69) volume_small_pane_cp_g1

0x584d,	// (0x0000584d) volume_small_pane_cp_g2

0x5856,	// (0x00005856) volume_small_pane_cp_g3

0x585f,	// (0x0000585f) volume_small_pane_cp_g4

0x3f96,	// (0x00003f96) volume_small_pane_cp_g5

0x5868,	// (0x00005868) volume_small_pane_cp_g6

0x5871,	// (0x00005871) volume_small_pane_cp_g7

0x587a,	// (0x0000587a) volume_small_pane_cp_g8

0x5883,	// (0x00005883) volume_small_pane_cp_g9

0x588c,	// (0x0000588c) volume_small_pane_cp_g10

0x23a5,	// (0x000023a5) midp_ticker_pane_g1_ParamLimits

0x23b1,	// (0x000023b1) midp_ticker_pane_g2_ParamLimits

0x9d72,	// (0x00009d72) midp_ticker_pane_g_ParamLimits

0x23bd,	// (0x000023bd) midp_ticker_pane_t1_ParamLimits

0xb97f,	// (0x0000b97f) aid_fill_nsta_2

0x377c,	// (0x0000377c) list_form2_midp_pane

0x4a20,	// (0x00004a20) midp_editing_number_pane_ParamLimits

0x4a2c,	// (0x00004a2c) midp_ticker_pane_ParamLimits

0x5895,	// (0x00005895) form2_midp_field_pane

0x58b9,	// (0x000058b9) scroll_pane_cp51

0x58d9,	// (0x000058d9) form2_midp_button_pane_ParamLimits

0x58d9,	// (0x000058d9) form2_midp_button_pane

0x58eb,	// (0x000058eb) form2_midp_content_pane_ParamLimits

0x58eb,	// (0x000058eb) form2_midp_content_pane

0x5905,	// (0x00005905) form2_midp_field_choice_group_pane

0x590d,	// (0x0000590d) form2_midp_field_pane_g1

0x5915,	// (0x00005915) form2_midp_field_pane_g2

0x591d,	// (0x0000591d) form2_midp_field_pane_g3

0x5925,	// (0x00005925) form2_midp_field_pane_g4

0x0003,

0xa0da,	// (0x0000a0da) form2_midp_field_pane_g

0x592d,	// (0x0000592d) form2_midp_gauge_slider_pane

0x5935,	// (0x00005935) form2_midp_gauge_wait_pane

0x593d,	// (0x0000593d) form2_midp_image_pane_ParamLimits

0x593d,	// (0x0000593d) form2_midp_image_pane

0x5958,	// (0x00005958) form2_midp_label_pane_ParamLimits

0x5958,	// (0x00005958) form2_midp_label_pane

0xc567,	// (0x0000c567) form2_midp_label_pane_cp_ParamLimits

0xc567,	// (0x0000c567) form2_midp_label_pane_cp

0x5990,	// (0x00005990) form2_midp_string_pane_ParamLimits

0x5990,	// (0x00005990) form2_midp_string_pane

0xc586,	// (0x0000c586) form2_midp_text_pane_ParamLimits

0xc586,	// (0x0000c586) form2_midp_text_pane

0x59bb,	// (0x000059bb) form2_midp_time_pane

0x59cb,	// (0x000059cb) input_focus_pane_cp51_ParamLimits

0x59cb,	// (0x000059cb) input_focus_pane_cp51

0x59e3,	// (0x000059e3) form2_midp_label_pane_t1_ParamLimits

0x59e3,	// (0x000059e3) form2_midp_label_pane_t1

0x1356,	// (0x00001356) form2_mdip_text_pane_t1_ParamLimits

0x1356,	// (0x00001356) form2_mdip_text_pane_t1

0x5a3f,	// (0x00005a3f) form2_midp_time_pane_t1

0x5a5a,	// (0x00005a5a) form2_midp_gauge_slider_pane_t1

0xc59f,	// (0x0000c59f) form2_midp_gauge_slider_pane_t2

0xc5b1,	// (0x0000c5b1) form2_midp_gauge_slider_pane_t3

0x0002,

0xe27c,	// (0x0000e27c) form2_midp_gauge_slider_pane_t

0x5a90,	// (0x00005a90) form2_midp_slider_pane

0x5a9c,	// (0x00005a9c) form2_midp_gauge_wait_pane_t1

0x5aaa,	// (0x00005aaa) form2_midp_wait_pane_ParamLimits

0x5aaa,	// (0x00005aaa) form2_midp_wait_pane

0xbdb1,	// (0x0000bdb1) list_single_2graphic_pane_cp4_ParamLimits

0xbdb1,	// (0x0000bdb1) list_single_2graphic_pane_cp4

0xc5c3,	// (0x0000c5c3) list_single_midp_graphic_pane_cp_ParamLimits

0xc5c3,	// (0x0000c5c3) list_single_midp_graphic_pane_cp

0x024e,	// (0x0000024e) list_highlight_pane_cp20

0x5ad5,	// (0x00005ad5) list_single_2graphic_pane_g1_cp4

0x4b74,	// (0x00004b74) list_single_2graphic_pane_g2_cp4

0x5add,	// (0x00005add) list_single_2graphic_pane_t1_cp4

0x0474,	// (0x00000474) list_highlight_pane_cp21

0x5aec,	// (0x00005aec) list_single_midp_graphic_pane_g4_cp

0x5afb,	// (0x00005afb) list_single_midp_graphic_pane_t1_cp

0xc5e1,	// (0x0000c5e1) form2_mdip_string_pane_t1_ParamLimits

0xc5e1,	// (0x0000c5e1) form2_mdip_string_pane_t1

0x024e,	// (0x0000024e) bg_wml_button_pane_cp2

0x002a,	// (0x0000002a) form2_midp_image_pane_g1

0x0efd,	// (0x00000efd) list_double_large_graphic_pane_g5_ParamLimits

0x0efd,	// (0x00000efd) list_double_large_graphic_pane_g5

0xb1a2,	// (0x0000b1a2) midp_form_pane_ParamLimits

0x0474,	// (0x00000474) main_apps_wheel_pane_ParamLimits

0xb70b,	// (0x0000b70b) popup_preview_window_ParamLimits

0xb70b,	// (0x0000b70b) popup_preview_window

0x2c9e,	// (0x00002c9e) popup_touch_info_window_ParamLimits

0x2c9e,	// (0x00002c9e) popup_touch_info_window

0x2cbc,	// (0x00002cbc) popup_touch_menu_window_ParamLimits

0x2cbc,	// (0x00002cbc) popup_touch_menu_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp6

0x5b88,	// (0x00005b88) list_touch_menu_pane

0x5b90,	// (0x00005b90) list_single_touch_menu_pane_ParamLimits

0x5b90,	// (0x00005b90) list_single_touch_menu_pane

0x5ba7,	// (0x00005ba7) list_single_touch_menu_pane_t1

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7_ParamLimits

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7

0x5bb5,	// (0x00005bb5) heading_sub_pane

0x5bbd,	// (0x00005bbd) list_touch_info_pane_ParamLimits

0x5bbd,	// (0x00005bbd) list_touch_info_pane

0x5bcc,	// (0x00005bcc) list_single_touch_info_pane_ParamLimits

0x5bcc,	// (0x00005bcc) list_single_touch_info_pane

0x5bdd,	// (0x00005bdd) list_single_touch_info_pane_t1

0x5beb,	// (0x00005beb) list_single_touch_info_pane_t2

0x0001,

0xa0f1,	// (0x0000a0f1) list_single_touch_info_pane_t

0x22d6,	// (0x000022d6) bg_popup_heading_pane_cp

0x5bf9,	// (0x00005bf9) heading_sub_pane_t1

0x3395,	// (0x00003395) bg_popup_preview_window_pane_cp_ParamLimits

0x3395,	// (0x00003395) bg_popup_preview_window_pane_cp

0x5bb5,	// (0x00005bb5) heading_preview_pane

0x5bbd,	// (0x00005bbd) list_preview_pane_ParamLimits

0x5bbd,	// (0x00005bbd) list_preview_pane

0x5c07,	// (0x00005c07) popup_preview_window_g1

0x5bcc,	// (0x00005bcc) list_single_preview_pane_ParamLimits

0x5bcc,	// (0x00005bcc) list_single_preview_pane

0x5c0f,	// (0x00005c0f) list_single_preview_pane_g1

0x5c17,	// (0x00005c17) list_single_preview_pane_t1

0x5bdd,	// (0x00005bdd) list_single_preview_pane_t2

0x0001,

0xa0f6,	// (0x0000a0f6) list_single_preview_pane_t

0x5c25,	// (0x00005c25) bg_popup_heading_pane_cp2_ParamLimits

0x5c25,	// (0x00005c25) bg_popup_heading_pane_cp2

0x5c3b,	// (0x00005c3b) heading_preview_pane_g1

0x5c43,	// (0x00005c43) heading_preview_pane_t1_ParamLimits

0x5c43,	// (0x00005c43) heading_preview_pane_t1

0x0601,	// (0x00000601) soft_indicator_pane_t1_ParamLimits

0x0c3e,	// (0x00000c3e) scroll_pane_ParamLimits

0x193d,	// (0x0000193d) scroll_sc2_left_pane

0x1946,	// (0x00001946) scroll_sc2_right_pane

0x1965,	// (0x00001965) scroll_bg_pane_g1_ParamLimits

0x197a,	// (0x0000197a) scroll_bg_pane_g2_ParamLimits

0x1992,	// (0x00001992) scroll_bg_pane_g3_ParamLimits

0x9d01,	// (0x00009d01) scroll_bg_pane_g_ParamLimits

0x1965,	// (0x00001965) scroll_handle_pane_g1_ParamLimits

0x19b4,	// (0x000019b4) scroll_handle_pane_g2_ParamLimits

0x1992,	// (0x00001992) scroll_handle_pane_g3_ParamLimits

0x9d08,	// (0x00009d08) scroll_handle_pane_g_ParamLimits

0x286b,	// (0x0000286b) popup_choice_list_window_ParamLimits

0x286b,	// (0x0000286b) popup_choice_list_window

0x313a,	// (0x0000313a) choice_list_pane

0x31d7,	// (0x000031d7) cell_toolbar_pane_t1

0x31ff,	// (0x000031ff) toolbar_button_pane_ParamLimits

0x44b8,	// (0x000044b8) ai_gene_pane_1_t2_ParamLimits

0x44b8,	// (0x000044b8) ai_gene_pane_1_t2

0x0001,

0x9f19,	// (0x00009f19) ai_gene_pane_1_t_ParamLimits

0x9f19,	// (0x00009f19) ai_gene_pane_1_t

0x5c60,	// (0x00005c60) scroll_sc2_left_pane_g1

0x5c60,	// (0x00005c60) scroll_sc2_right_pane_g1

0x283d,	// (0x0000283d) bg_popup_sub_pane_cp10

0x5c6a,	// (0x00005c6a) list_choice_list_pane

0x5c81,	// (0x00005c81) list_single_choice_list_pane_ParamLimits

0x5c81,	// (0x00005c81) list_single_choice_list_pane

0x5c95,	// (0x00005c95) list_single_choice_list_pane_g1

0x14d3,	// (0x000014d3) list_single_choice_list_pane_t1_ParamLimits

0x14d3,	// (0x000014d3) list_single_choice_list_pane_t1

0x5c9d,	// (0x00005c9d) choice_list_pane_g1

0x5ca5,	// (0x00005ca5) choice_list_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp11

0x16e7,	// (0x000016e7) title_pane_stacon_g2_ParamLimits

0x16e7,	// (0x000016e7) title_pane_stacon_g2

0x0002,

0x9ce7,	// (0x00009ce7) title_pane_stacon_g_ParamLimits

0x9ce7,	// (0x00009ce7) title_pane_stacon_g

0x22d6,	// (0x000022d6) cursor_press_pane

0xb472,	// (0x0000b472) popup_fep_hwr_window_ParamLimits

0xb472,	// (0x0000b472) popup_fep_hwr_window

0x2963,	// (0x00002963) popup_fep_vkb_window_ParamLimits

0x2963,	// (0x00002963) popup_fep_vkb_window

0x5cb3,	// (0x00005cb3) cursor_press_pane_g1

0x0002,

0xe290,	// (0x0000e290) fep_vkb_side_pane_g_ParamLimits

0x5cf0,	// (0x00005cf0) fep_hwr_candidate_pane_ParamLimits

0x5cf0,	// (0x00005cf0) fep_hwr_candidate_pane

0x5d18,	// (0x00005d18) fep_hwr_side_pane_ParamLimits

0x5d18,	// (0x00005d18) fep_hwr_side_pane

0x5d38,	// (0x00005d38) fep_hwr_top_pane_ParamLimits

0x5d38,	// (0x00005d38) fep_hwr_top_pane

0x5d50,	// (0x00005d50) fep_hwr_write_pane_ParamLimits

0x5d50,	// (0x00005d50) fep_hwr_write_pane

0xe290,	// (0x0000e290) fep_vkb_side_pane_g

0x5d8a,	// (0x00005d8a) fep_hwr_top_pane_g1

0x5d9c,	// (0x00005d9c) fep_hwr_top_pane_g2

0x5dae,	// (0x00005dae) fep_hwr_top_pane_g3

0x0002,

0xa0fb,	// (0x0000a0fb) fep_hwr_top_pane_g

0x5dc3,	// (0x00005dc3) fep_hwr_top_text_pane

0x1b09,	// (0x00001b09) fep_hwr_top_text_pane_g1

0x5e9b,	// (0x00005e9b) fep_hwr_top_text_pane_t1

0x5ee3,	// (0x00005ee3) fep_hwr_candidate_pane_g1

0x6119,	// (0x00006119) fep_vkb_keypad_pane_g3_ParamLimits

0x6119,	// (0x00006119) fep_vkb_keypad_pane_g3

0x613b,	// (0x0000613b) fep_vkb_keypad_pane_g4_ParamLimits

0x613b,	// (0x0000613b) fep_vkb_keypad_pane_g4

0x61aa,	// (0x000061aa) fep_vkb_bottom_pane_g2_ParamLimits

0x61aa,	// (0x000061aa) fep_vkb_bottom_pane_g2

0x0001,

0xa126,	// (0x0000a126) fep_vkb_bottom_pane_g_ParamLimits

0xa126,	// (0x0000a126) fep_vkb_bottom_pane_g

0x5c60,	// (0x00005c60) cell_vkb_side_pane_g2

0x0001,

0xa130,	// (0x0000a130) cell_vkb_side_pane_g

0x6235,	// (0x00006235) cell_vkb_side_pane_t1

0x6243,	// (0x00006243) cell_vkb_side_pane_t1_copy1

0x5c60,	// (0x00005c60) bg_fep_vkb_candidate_pane_g2

0x6367,	// (0x00006367) cell_vkb_candidate_pane_ParamLimits

0x5f17,	// (0x00005f17) aid_size_cell_vkb_ParamLimits

0x5f17,	// (0x00005f17) aid_size_cell_vkb

0x6367,	// (0x00006367) cell_vkb_candidate_pane

0x6399,	// (0x00006399) bg_popup_fep_shadow_pane_g1

0x5f8d,	// (0x00005f8d) fep_vkb_bottom_pane_ParamLimits

0x5f8d,	// (0x00005f8d) fep_vkb_bottom_pane

0x5fca,	// (0x00005fca) fep_vkb_candidate_pane_ParamLimits

0x5fca,	// (0x00005fca) fep_vkb_candidate_pane

0x5fe6,	// (0x00005fe6) fep_vkb_keypad_pane_ParamLimits

0x5fe6,	// (0x00005fe6) fep_vkb_keypad_pane

0x601a,	// (0x0000601a) fep_vkb_side_pane_ParamLimits

0x601a,	// (0x0000601a) fep_vkb_side_pane

0x6046,	// (0x00006046) fep_vkb_top_pane_ParamLimits

0x6046,	// (0x00006046) fep_vkb_top_pane

0x6072,	// (0x00006072) fep_vkb_top_pane_g1_ParamLimits

0x6072,	// (0x00006072) fep_vkb_top_pane_g1

0x6081,	// (0x00006081) fep_vkb_top_pane_g2_ParamLimits

0x6081,	// (0x00006081) fep_vkb_top_pane_g2

0x6090,	// (0x00006090) fep_vkb_top_pane_g3_ParamLimits

0x6090,	// (0x00006090) fep_vkb_top_pane_g3

0x0003,

0xa116,	// (0x0000a116) fep_vkb_top_pane_g_ParamLimits

0xa116,	// (0x0000a116) fep_vkb_top_pane_g

0x60ae,	// (0x000060ae) fep_vkb_top_text_pane_ParamLimits

0x60ae,	// (0x000060ae) fep_vkb_top_text_pane

0xc6a8,	// (0x0000c6a8) fep_vkb_side_pane_g1_ParamLimits

0xc6a8,	// (0x0000c6a8) fep_vkb_side_pane_g1

0x6108,	// (0x00006108) grid_vkb_side_pane_ParamLimits

0x6108,	// (0x00006108) grid_vkb_side_pane

0x63a1,	// (0x000063a1) bg_popup_fep_shadow_pane_g2

0x63aa,	// (0x000063aa) bg_popup_fep_shadow_pane_g3

0x63b2,	// (0x000063b2) bg_popup_fep_shadow_pane_g4

0x63bb,	// (0x000063bb) bg_popup_fep_shadow_pane_g5

0x63c3,	// (0x000063c3) bg_popup_fep_shadow_pane_g6

0x63cb,	// (0x000063cb) bg_popup_fep_shadow_pane_g7

0x132e,	// (0x0000132e) bg_popup_fep_shadow_pane_g8

0x6159,	// (0x00006159) grid_vkb_keypad_number_pane_ParamLimits

0x6159,	// (0x00006159) grid_vkb_keypad_number_pane

0x6169,	// (0x00006169) grid_vkb_keypad_pane_ParamLimits

0x6169,	// (0x00006169) grid_vkb_keypad_pane

0x618f,	// (0x0000618f) fep_vkb_bottom_pane_g1_ParamLimits

0x618f,	// (0x0000618f) fep_vkb_bottom_pane_g1

0x61b8,	// (0x000061b8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x61b8,	// (0x000061b8) grid_vkb_keypad_bottom_left_pane

0x61cd,	// (0x000061cd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x61cd,	// (0x000061cd) grid_vkb_keypad_bottom_right_pane

0x61e2,	// (0x000061e2) fep_vkb_top_text_pane_g1

0xc6ef,	// (0x0000c6ef) fep_vkb_top_text_pane_t1

0xc701,	// (0x0000c701) cell_vkb_side_pane_ParamLimits

0xc701,	// (0x0000c701) cell_vkb_side_pane

0x5c60,	// (0x00005c60) cell_vkb_side_pane_g1

0x6251,	// (0x00006251) cell_vkb_keypad_pane_ParamLimits

0x6251,	// (0x00006251) cell_vkb_keypad_pane

0x62be,	// (0x000062be) cell_vkb_keypad_pane_g1

0x0008,

0xa143,	// (0x0000a143) bg_popup_fep_shadow_pane_g

0x5c60,	// (0x00005c60) cell_hwr_side_pane_g1

0x5c60,	// (0x00005c60) cell_hwr_side_pane_g2

0x62c8,	// (0x000062c8) cell_vkb_keypad_pane_t1

0xc717,	// (0x0000c717) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc717,	// (0x0000c717) cell_vkb_keypad_bottom_left_pane

0xc72c,	// (0x0000c72c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc72c,	// (0x0000c72c) cell_vkb_keypad_bottom_right_pane

0x5c60,	// (0x00005c60) cell_vkb_keypad_bottom_left_pane_g1

0x5c60,	// (0x00005c60) cell_vkb_keypad_bottom_right_pane_g1

0x632c,	// (0x0000632c) cell_vkb_keypad_number_pane_ParamLimits

0x632c,	// (0x0000632c) cell_vkb_keypad_number_pane

0x634b,	// (0x0000634b) cell_vkb_keypad_number_pane_g1

0x6355,	// (0x00006355) cell_vkb_keypad_number_pane_g2

0x635e,	// (0x0000635e) cell_vkb_keypad_number_pane_g3

0x0002,

0xa135,	// (0x0000a135) cell_vkb_keypad_number_pane_g

0x62c8,	// (0x000062c8) cell_vkb_keypad_number_pane_t1

0x6380,	// (0x00006380) fep_vkb_candidate_pane_g1

0x0001,

0xa130,	// (0x0000a130) cell_hwr_side_pane_g

0x63db,	// (0x000063db) cell_hwr_side_pane_t1

0x63e9,	// (0x000063e9) cell_hwr_side_pane_t1_copy1

0x60a0,	// (0x000060a0) cell_hwr_candidate_pane_g1

0x6439,	// (0x00006439) cell_hwr_candidate_pane_t1

0x5c60,	// (0x00005c60) cell_vkb_candidate_pane_g2

0x648c,	// (0x0000648c) cell_vkb_candidate_pane_t1

0x5cbb,	// (0x00005cbb) bg_popup_fep_shadow_pane_ParamLimits

0x5cbb,	// (0x00005cbb) bg_popup_fep_shadow_pane

0x5d6a,	// (0x00005d6a) bg_fep_hwr_top_pane_g4

0x5dd8,	// (0x00005dd8) bg_hwr_side_pane_g1_ParamLimits

0x5dd8,	// (0x00005dd8) bg_hwr_side_pane_g1

0xc663,	// (0x0000c663) cell_hwr_side_pane_ParamLimits

0xc663,	// (0x0000c663) cell_hwr_side_pane

0x5e46,	// (0x00005e46) fep_hwr_write_pane_g1_ParamLimits

0x5e46,	// (0x00005e46) fep_hwr_write_pane_g1

0x5e53,	// (0x00005e53) fep_hwr_write_pane_g2_ParamLimits

0x5e53,	// (0x00005e53) fep_hwr_write_pane_g2

0x5e60,	// (0x00005e60) fep_hwr_write_pane_g3_ParamLimits

0x5e60,	// (0x00005e60) fep_hwr_write_pane_g3

0xc683,	// (0x0000c683) fep_hwr_write_pane_g4_ParamLimits

0xc683,	// (0x0000c683) fep_hwr_write_pane_g4

0x0005,

0xe283,	// (0x0000e283) fep_hwr_write_pane_g_ParamLimits

0xe283,	// (0x0000e283) fep_hwr_write_pane_g

0x5d6a,	// (0x00005d6a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5d6a,	// (0x00005d6a) bg_fep_hwr_candidate_pane_g2

0x5ea9,	// (0x00005ea9) cell_hwr_candidate_pane_ParamLimits

0x5ea9,	// (0x00005ea9) cell_hwr_candidate_pane

0x5ee3,	// (0x00005ee3) fep_hwr_candidate_pane_g1_ParamLimits

0x5f45,	// (0x00005f45) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5f45,	// (0x00005f45) bg_popup_fep_shadow_pane_cp2

0x60a0,	// (0x000060a0) fep_vkb_top_pane_g4_ParamLimits

0x60a0,	// (0x000060a0) fep_vkb_top_pane_g4

0x60e6,	// (0x000060e6) fep_vkb_side_pane_g2_ParamLimits

0x60e6,	// (0x000060e6) fep_vkb_side_pane_g2

0xacd0,	// (0x0000acd0) list_setting_pane_t4_ParamLimits

0xacd0,	// (0x0000acd0) list_setting_pane_t4

0xad52,	// (0x0000ad52) list_setting_number_pane_t5_ParamLimits

0xad52,	// (0x0000ad52) list_setting_number_pane_t5

0xb058,	// (0x0000b058) list_double_heading_pane_cp2_ParamLimits

0xb058,	// (0x0000b058) list_double_heading_pane_cp2

0x214b,	// (0x0000214b) list_double_heading_pane_g1_cp2_ParamLimits

0x214b,	// (0x0000214b) list_double_heading_pane_g1_cp2

0x649a,	// (0x0000649a) list_double_heading_pane_g2_cp2_ParamLimits

0x649a,	// (0x0000649a) list_double_heading_pane_g2_cp2

0x64ae,	// (0x000064ae) list_double_heading_pane_t1_cp2_ParamLimits

0x64ae,	// (0x000064ae) list_double_heading_pane_t1_cp2

0x64c4,	// (0x000064c4) list_double_heading_pane_t2_cp2_ParamLimits

0x64c4,	// (0x000064c4) list_double_heading_pane_t2_cp2

0x000a,	// (0x0000000a) aid_value_unit2

0x02b4,	// (0x000002b4) popup_preview_fixed_window

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02

0x64d6,	// (0x000064d6) list_preview_fixed_pane

0x651c,	// (0x0000651c) list_empty_pane_fp_ParamLimits

0x651c,	// (0x0000651c) list_empty_pane_fp

0x651c,	// (0x0000651c) list_single_cale_day_pane_fp_ParamLimits

0x651c,	// (0x0000651c) list_single_cale_day_pane_fp

0x651c,	// (0x0000651c) list_single_graphic_heading_pane_fp_ParamLimits

0x651c,	// (0x0000651c) list_single_graphic_heading_pane_fp

0x651c,	// (0x0000651c) list_single_graphic_pane_fp_ParamLimits

0x651c,	// (0x0000651c) list_single_graphic_pane_fp

0x651c,	// (0x0000651c) list_single_heading_pane_fp_ParamLimits

0x651c,	// (0x0000651c) list_single_heading_pane_fp

0x651c,	// (0x0000651c) list_single_pane_fp_ParamLimits

0x651c,	// (0x0000651c) list_single_pane_fp

0x6530,	// (0x00006530) list_single_pane_fp_g1_ParamLimits

0x6530,	// (0x00006530) list_single_pane_fp_g1

0x0e80,	// (0x00000e80) list_single_pane_fp_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_pane_fp_g2

0x653c,	// (0x0000653c) list_single_pane_fp_g3_ParamLimits

0x653c,	// (0x0000653c) list_single_pane_fp_g3

0x6550,	// (0x00006550) list_single_pane_fp_g4_ParamLimits

0x6550,	// (0x00006550) list_single_pane_fp_g4

0x0003,

0xa164,	// (0x0000a164) list_single_pane_fp_g_ParamLimits

0xa164,	// (0x0000a164) list_single_pane_fp_g

0x655c,	// (0x0000655c) list_single_pane_fp_t1_ParamLimits

0x655c,	// (0x0000655c) list_single_pane_fp_t1

0x6573,	// (0x00006573) list_single_graphic_pane_fp_g1_ParamLimits

0x6573,	// (0x00006573) list_single_graphic_pane_fp_g1

0x6530,	// (0x00006530) list_single_graphic_pane_fp_g2_ParamLimits

0x6530,	// (0x00006530) list_single_graphic_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_pane_fp_g3

0x653c,	// (0x0000653c) list_single_graphic_pane_fp_g4_ParamLimits

0x653c,	// (0x0000653c) list_single_graphic_pane_fp_g4

0x6550,	// (0x00006550) list_single_graphic_pane_fp_g5_ParamLimits

0x6550,	// (0x00006550) list_single_graphic_pane_fp_g5

0x0004,

0xa16d,	// (0x0000a16d) list_single_graphic_pane_fp_g_ParamLimits

0xa16d,	// (0x0000a16d) list_single_graphic_pane_fp_g

0x657f,	// (0x0000657f) list_single_graphic_pane_fp_t1_ParamLimits

0x657f,	// (0x0000657f) list_single_graphic_pane_fp_t1

0x6573,	// (0x00006573) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6573,	// (0x00006573) list_single_graphic_heading_pane_fp_g1

0x6530,	// (0x00006530) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6530,	// (0x00006530) list_single_graphic_heading_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_heading_pane_fp_g3

0x653c,	// (0x0000653c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x653c,	// (0x0000653c) list_single_graphic_heading_pane_fp_g4

0x6550,	// (0x00006550) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6550,	// (0x00006550) list_single_graphic_heading_pane_fp_g5

0x0004,

0xa16d,	// (0x0000a16d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa16d,	// (0x0000a16d) list_single_graphic_heading_pane_fp_g

0x6595,	// (0x00006595) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6595,	// (0x00006595) list_single_graphic_heading_pane_fp_t1

0x65ab,	// (0x000065ab) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x65ab,	// (0x000065ab) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa178,	// (0x0000a178) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa178,	// (0x0000a178) list_single_graphic_heading_pane_fp_t

0x65bd,	// (0x000065bd) list_single_cale_day_pane_fp_g1_ParamLimits

0x65bd,	// (0x000065bd) list_single_cale_day_pane_fp_g1

0x65f5,	// (0x000065f5) list_single_cale_day_pane_fp_g2_ParamLimits

0x65f5,	// (0x000065f5) list_single_cale_day_pane_fp_g2

0x6601,	// (0x00006601) list_single_cale_day_pane_fp_g3_ParamLimits

0x6601,	// (0x00006601) list_single_cale_day_pane_fp_g3

0x6629,	// (0x00006629) list_single_cale_day_pane_fp_g4_ParamLimits

0x6629,	// (0x00006629) list_single_cale_day_pane_fp_g4

0x664d,	// (0x0000664d) list_single_cale_day_pane_fp_g5_ParamLimits

0x664d,	// (0x0000664d) list_single_cale_day_pane_fp_g5

0x0004,

0xa17d,	// (0x0000a17d) list_single_cale_day_pane_fp_g_ParamLimits

0xa17d,	// (0x0000a17d) list_single_cale_day_pane_fp_g

0x6671,	// (0x00006671) list_single_cale_day_pane_fp_t1_ParamLimits

0x6671,	// (0x00006671) list_single_cale_day_pane_fp_t1

0x6697,	// (0x00006697) list_single_cale_day_pane_fp_t2_ParamLimits

0x6697,	// (0x00006697) list_single_cale_day_pane_fp_t2

0x66b0,	// (0x000066b0) list_single_cale_day_pane_fp_t3_ParamLimits

0x66b0,	// (0x000066b0) list_single_cale_day_pane_fp_t3

0x0002,

0xa188,	// (0x0000a188) list_single_cale_day_pane_fp_t_ParamLimits

0xa188,	// (0x0000a188) list_single_cale_day_pane_fp_t

0x6530,	// (0x00006530) list_empty_pane_fp_g1_ParamLimits

0x6530,	// (0x00006530) list_empty_pane_fp_g1

0x66c9,	// (0x000066c9) list_empty_pane_fp_t1

0x66d7,	// (0x000066d7) list_empty_pane_fp_t2

0x0001,

0xa18f,	// (0x0000a18f) list_empty_pane_fp_t

0x6530,	// (0x00006530) list_single_heading_pane_fp_g1_ParamLimits

0x6530,	// (0x00006530) list_single_heading_pane_fp_g1

0x0e80,	// (0x00000e80) list_single_heading_pane_fp_g2_ParamLimits

0x0e80,	// (0x00000e80) list_single_heading_pane_fp_g2

0x653c,	// (0x0000653c) list_single_heading_pane_fp_g3_ParamLimits

0x653c,	// (0x0000653c) list_single_heading_pane_fp_g3

0x0002,

0xa194,	// (0x0000a194) list_single_heading_pane_fp_g_ParamLimits

0xa194,	// (0x0000a194) list_single_heading_pane_fp_g

0x66e5,	// (0x000066e5) list_single_heading_pane_fp_t1_ParamLimits

0x66e5,	// (0x000066e5) list_single_heading_pane_fp_t1

0x66f7,	// (0x000066f7) list_single_heading_pane_fp_t2_ParamLimits

0x66f7,	// (0x000066f7) list_single_heading_pane_fp_t2

0x0001,

0xa19b,	// (0x0000a19b) list_single_heading_pane_fp_t_ParamLimits

0xa19b,	// (0x0000a19b) list_single_heading_pane_fp_t

0x1541,	// (0x00001541) aid_size_cell_fast

0x070c,	// (0x0000070c) soft_indicator_pane_cp1_t1

0x157e,	// (0x0000157e) cell_app_pane_cp2_ParamLimits

0x157e,	// (0x0000157e) cell_app_pane_cp2

0x5cdd,	// (0x00005cdd) fep_hwr_candidate_drop_down_list_pane

0x5efd,	// (0x00005efd) fep_hwr_candidate_pane_g3_ParamLimits

0x5efd,	// (0x00005efd) fep_hwr_candidate_pane_g3

0x5f0a,	// (0x00005f0a) fep_hwr_candidate_pane_g4_ParamLimits

0x5f0a,	// (0x00005f0a) fep_hwr_candidate_pane_g4

0x0002,

0xa10f,	// (0x0000a10f) fep_hwr_candidate_pane_g_ParamLimits

0xa10f,	// (0x0000a10f) fep_hwr_candidate_pane_g

0x5fb9,	// (0x00005fb9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5fb9,	// (0x00005fb9) fep_vkb_candidate_drop_down_list_pane

0x6388,	// (0x00006388) fep_vkb_candidate_pane_g3

0x6390,	// (0x00006390) fep_vkb_candidate_pane_g4

0x0002,

0xa13c,	// (0x0000a13c) fep_vkb_candidate_pane_g

0x60a0,	// (0x000060a0) cell_hwr_candidate_pane_g1_ParamLimits

0x63f7,	// (0x000063f7) cell_hwr_candidate_pane_g3_ParamLimits

0x63f7,	// (0x000063f7) cell_hwr_candidate_pane_g3

0x6418,	// (0x00006418) cell_hwr_candidate_pane_g4_ParamLimits

0x6418,	// (0x00006418) cell_hwr_candidate_pane_g4

0x0002,

0xa156,	// (0x0000a156) cell_hwr_candidate_pane_g_ParamLimits

0xa156,	// (0x0000a156) cell_hwr_candidate_pane_g

0x6456,	// (0x00006456) cell_vkb_candidate_pane_g3_ParamLimits

0x6456,	// (0x00006456) cell_vkb_candidate_pane_g3

0x6471,	// (0x00006471) cell_vkb_candidate_pane_g4_ParamLimits

0x6471,	// (0x00006471) cell_vkb_candidate_pane_g4

0x670d,	// (0x0000670d) cell_app_pane_cp2_g1_ParamLimits

0x670d,	// (0x0000670d) cell_app_pane_cp2_g1

0x672b,	// (0x0000672b) cell_app_pane_cp2_g2_ParamLimits

0x672b,	// (0x0000672b) cell_app_pane_cp2_g2

0x0001,

0xa1a0,	// (0x0000a1a0) cell_app_pane_cp2_g_ParamLimits

0xa1a0,	// (0x0000a1a0) cell_app_pane_cp2_g

0x6737,	// (0x00006737) cell_app_pane_cp2_t1_ParamLimits

0x6737,	// (0x00006737) cell_app_pane_cp2_t1

0x11e8,	// (0x000011e8) grid_highlight_pane_cp1_ParamLimits

0x11e8,	// (0x000011e8) grid_highlight_pane_cp1

0x6749,	// (0x00006749) cell_hwr_candidate_pane_cp1_ParamLimits

0x6749,	// (0x00006749) cell_hwr_candidate_pane_cp1

0x60a0,	// (0x000060a0) fep_hwr_candidate_drop_down_list_pane_g1

0x6767,	// (0x00006767) fep_hwr_candidate_drop_down_list_pane_g2

0x6774,	// (0x00006774) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xa1a5,	// (0x0000a1a5) fep_hwr_candidate_drop_down_list_pane_g

0x6781,	// (0x00006781) fep_hwr_candidate_drop_down_list_scroll_pane

0x678a,	// (0x0000678a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x678a,	// (0x0000678a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6797,	// (0x00006797) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6797,	// (0x00006797) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67a4,	// (0x000067a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67a4,	// (0x000067a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6456,	// (0x00006456) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6456,	// (0x00006456) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6471,	// (0x00006471) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6471,	// (0x00006471) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x67b1,	// (0x000067b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x67b1,	// (0x000067b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x67cc,	// (0x000067cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x67cc,	// (0x000067cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x67e7,	// (0x000067e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x67e7,	// (0x000067e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa1ac,	// (0x0000a1ac) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa1ac,	// (0x0000a1ac) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc747,	// (0x0000c747) cell_vkb_candidate_pane_cp1_ParamLimits

0xc747,	// (0x0000c747) cell_vkb_candidate_pane_cp1

0x60a0,	// (0x000060a0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x60a0,	// (0x000060a0) fep_vkb_candidate_drop_down_list_pane_g1

0x6767,	// (0x00006767) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6767,	// (0x00006767) fep_vkb_candidate_drop_down_list_pane_g2

0x6774,	// (0x00006774) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6774,	// (0x00006774) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa1a5,	// (0x0000a1a5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa1a5,	// (0x0000a1a5) fep_vkb_candidate_drop_down_list_pane_g

0x6825,	// (0x00006825) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6825,	// (0x00006825) fep_vkb_candidate_drop_down_list_scroll_pane

0x6832,	// (0x00006832) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6832,	// (0x00006832) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x683f,	// (0x0000683f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x683f,	// (0x0000683f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x684b,	// (0x0000684b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x684b,	// (0x0000684b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x63f7,	// (0x000063f7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x63f7,	// (0x000063f7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6418,	// (0x00006418) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6418,	// (0x00006418) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6857,	// (0x00006857) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6857,	// (0x00006857) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6878,	// (0x00006878) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6878,	// (0x00006878) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6899,	// (0x00006899) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6899,	// (0x00006899) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa1bd,	// (0x0000a1bd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa1bd,	// (0x0000a1bd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa655,	// (0x0000a655) title_pane_g1_ParamLimits

0xa66c,	// (0x0000a66c) title_pane_g2_ParamLimits

0xe09a,	// (0x0000e09a) title_pane_g_ParamLimits

0x1af9,	// (0x00001af9) aid_call2_pane

0x1b01,	// (0x00001b01) aid_call_pane

0x1b09,	// (0x00001b09) popup_clock_analogue_window_g1

0x1b09,	// (0x00001b09) popup_clock_analogue_window_g2

0x1b11,	// (0x00001b11) popup_clock_analogue_window_g3

0x1b1a,	// (0x00001b1a) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0x9d16,	// (0x00009d16) popup_clock_analogue_window_g

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

0x9d21,	// (0x00009d21) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0x9d21,	// (0x00009d21) clock_digital_separator_pane_g

0xb969,	// (0x0000b969) aid_fill_nsta_ParamLimits

0xba80,	// (0x0000ba80) indicator_nsta_pane_ParamLimits

0x2f88,	// (0x00002f88) popup_clock_analogue_window

0x2f88,	// (0x00002f88) popup_clock_digital_window

0x1502,	// (0x00001502) grid_indicator_nsta_pane_ParamLimits

0x56b6,	// (0x000056b6) clock_nsta_pane_t2

0x0001,

0xa09c,	// (0x0000a09c) clock_nsta_pane_t

0x18e2,	// (0x000018e2) aid_size_max_handle

0xafbc,	// (0x0000afbc) aid_size_min_handle

0x22d6,	// (0x000022d6) editor_scroll_pane

0x68b4,	// (0x000068b4) ex_editor_pane

0x14af,	// (0x000014af) scroll_pane_cp13

0x0c6b,	// (0x00000c6b) scroll_pane_cp14

0x1b52,	// (0x00001b52) scroll_pane_cp36

0xb064,	// (0x0000b064) list_single_graphic_hl_pane_cp2_ParamLimits

0xb064,	// (0x0000b064) list_single_graphic_hl_pane_cp2

0xc2eb,	// (0x0000c2eb) list_single_graphic_hl_pane_ParamLimits

0xc2eb,	// (0x0000c2eb) list_single_graphic_hl_pane

0x68bc,	// (0x000068bc) aid_size_min_hl_cp1

0x68c5,	// (0x000068c5) list_highlight_pane_cp34_ParamLimits

0x68c5,	// (0x000068c5) list_highlight_pane_cp34

0x68d6,	// (0x000068d6) list_single_graphic_hl_pane_g1_ParamLimits

0x68d6,	// (0x000068d6) list_single_graphic_hl_pane_g1

0xc767,	// (0x0000c767) list_single_graphic_hl_pane_g2_ParamLimits

0xc767,	// (0x0000c767) list_single_graphic_hl_pane_g2

0xc767,	// (0x0000c767) list_single_graphic_hl_pane_g3_ParamLimits

0xc767,	// (0x0000c767) list_single_graphic_hl_pane_g3

0x0c7f,	// (0x00000c7f) list_single_graphic_hl_pane_g4_ParamLimits

0x0c7f,	// (0x00000c7f) list_single_graphic_hl_pane_g4

0x120e,	// (0x0000120e) list_single_graphic_hl_pane_g5_ParamLimits

0x120e,	// (0x0000120e) list_single_graphic_hl_pane_g5

0x0004,

0xe29c,	// (0x0000e29c) list_single_graphic_hl_pane_g_ParamLimits

0xe29c,	// (0x0000e29c) list_single_graphic_hl_pane_g

0xc773,	// (0x0000c773) list_single_graphic_hl_pane_t1_ParamLimits

0xc773,	// (0x0000c773) list_single_graphic_hl_pane_t1

0x6905,	// (0x00006905) aid_size_min_hl_cp2

0x690e,	// (0x0000690e) list_highlight_pane_cp34_cp2_ParamLimits

0x690e,	// (0x0000690e) list_highlight_pane_cp34_cp2

0x68d6,	// (0x000068d6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x68d6,	// (0x000068d6) list_single_graphic_hl_pane_g1_cp2

0x691b,	// (0x0000691b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x691b,	// (0x0000691b) list_single_graphic_hl_pane_g2_cp2

0x6927,	// (0x00006927) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6927,	// (0x00006927) list_single_graphic_hl_pane_g3_cp2

0x214b,	// (0x0000214b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x214b,	// (0x0000214b) list_single_graphic_hl_pane_g4_cp2

0x649a,	// (0x0000649a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x649a,	// (0x0000649a) list_single_graphic_hl_pane_g5_cp2

0xb26a,	// (0x0000b26a) control_pane_g4_ParamLimits

0xb26a,	// (0x0000b26a) control_pane_g4

0x283d,	// (0x0000283d) bg_popup_sub_pane_cp10_ParamLimits

0x5c6a,	// (0x00005c6a) list_choice_list_pane_ParamLimits

0x5c79,	// (0x00005c79) scroll_pane_cp23

0x07a5,	// (0x000007a5) bg_popup_preview_window_pane_cp02_ParamLimits

0x64d6,	// (0x000064d6) list_preview_fixed_pane_ParamLimits

0x64ec,	// (0x000064ec) list_preview_fixed_pane_cp_ParamLimits

0x64ec,	// (0x000064ec) list_preview_fixed_pane_cp

0x64f8,	// (0x000064f8) popup_preview_fixed_window_g1_ParamLimits

0x64f8,	// (0x000064f8) popup_preview_fixed_window_g1

0x6504,	// (0x00006504) popup_preview_fixed_window_g2_ParamLimits

0x6504,	// (0x00006504) popup_preview_fixed_window_g2

0x0002,

0xa15d,	// (0x0000a15d) popup_preview_fixed_window_g_ParamLimits

0xa15d,	// (0x0000a15d) popup_preview_fixed_window_g

0x17b4,	// (0x000017b4) aid_navi_side_left_pane_ParamLimits

0x17c4,	// (0x000017c4) aid_navi_side_right_pane_ParamLimits

0x17d3,	// (0x000017d3) navi_icon_pane_stacon_ParamLimits

0x17e3,	// (0x000017e3) navi_navi_pane_stacon_ParamLimits

0x17d3,	// (0x000017d3) navi_text_pane_stacon_ParamLimits

0x0020,	// (0x00000020) main_text_info_pane

0x6949,	// (0x00006949) listscroll_text_info_pane

0x6951,	// (0x00006951) list_text_info_pane_ParamLimits

0x6951,	// (0x00006951) list_text_info_pane

0x6960,	// (0x00006960) scroll_pane_cp24_ParamLimits

0x6960,	// (0x00006960) scroll_pane_cp24

0xc789,	// (0x0000c789) list_text_info_pane_t1_ParamLimits

0xc789,	// (0x0000c789) list_text_info_pane_t1

0xb3f2,	// (0x0000b3f2) popup_fast_swap2_window_ParamLimits

0xb3f2,	// (0x0000b3f2) popup_fast_swap2_window

0x699b,	// (0x0000699b) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x37a8,	// (0x000037a8) heading_pane_cp2

0x09ed,	// (0x000009ed) listscroll_fast2_pane

0x69a5,	// (0x000069a5) grid_fast2_pane

0x69ad,	// (0x000069ad) listscroll_fast2_pane_g1

0x69b5,	// (0x000069b5) listscroll_fast2_pane_g2

0x0001,

0xa1d9,	// (0x0000a1d9) listscroll_fast2_pane_g

0x14af,	// (0x000014af) scroll_pane_cp26

0x69bd,	// (0x000069bd) cell_fast2_pane_ParamLimits

0x69bd,	// (0x000069bd) cell_fast2_pane

0x69d3,	// (0x000069d3) cell_fast2_pane_g1

0x69dc,	// (0x000069dc) cell_fast2_pane_g2

0x69e5,	// (0x000069e5) cell_fast2_pane_g3

0x0002,

0xa1de,	// (0x0000a1de) cell_fast2_pane_g

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp9

0x0ad9,	// (0x00000ad9) main_eswt_pane_ParamLimits

0x0ad9,	// (0x00000ad9) main_eswt_pane

0x6975,	// (0x00006975) list_single_text_info_pane

0x69ed,	// (0x000069ed) eswt_ctrl_button_pane

0x69ed,	// (0x000069ed) eswt_ctrl_canvas_pane

0x69f5,	// (0x000069f5) eswt_ctrl_combo_pane

0x69ed,	// (0x000069ed) eswt_ctrl_default_pane

0x69ed,	// (0x000069ed) eswt_ctrl_label_pane

0x69fd,	// (0x000069fd) eswt_ctrl_wait_pane

0x6a05,	// (0x00006a05) eswt_shell_pane

0x0020,	// (0x00000020) listscroll_eswt_app_pane

0x6a21,	// (0x00006a21) popup_eswt_tasktip_window_ParamLimits

0x6a21,	// (0x00006a21) popup_eswt_tasktip_window

0x3395,	// (0x00003395) bg_popup_window_pane_cp18

0x6a32,	// (0x00006a32) eswt_control_pane_g1_ParamLimits

0x6a32,	// (0x00006a32) eswt_control_pane_g1

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_ParamLimits

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_ParamLimits

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3

0x6a59,	// (0x00006a59) eswt_control_pane_g4_ParamLimits

0x6a59,	// (0x00006a59) eswt_control_pane_g4

0x0003,

0xa1e5,	// (0x0000a1e5) eswt_control_pane_g_ParamLimits

0xa1e5,	// (0x0000a1e5) eswt_control_pane_g

0x11e8,	// (0x000011e8) bg_button_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane

0x0ad9,	// (0x00000ad9) common_borders_pane_copy2_ParamLimits

0x0ad9,	// (0x00000ad9) common_borders_pane_copy2

0x6a66,	// (0x00006a66) control_button_pane_g1_ParamLimits

0x6a66,	// (0x00006a66) control_button_pane_g1

0x6a72,	// (0x00006a72) control_button_pane_g2_ParamLimits

0x6a72,	// (0x00006a72) control_button_pane_g2

0x6a7e,	// (0x00006a7e) control_button_pane_g3_ParamLimits

0x6a7e,	// (0x00006a7e) control_button_pane_g3

0x0002,

0xa1ee,	// (0x0000a1ee) control_button_pane_g_ParamLimits

0xa1ee,	// (0x0000a1ee) control_button_pane_g

0x6a92,	// (0x00006a92) control_button_pane_t1

0x6aa0,	// (0x00006aa0) control_button_pane_t2

0x0001,

0xa1f5,	// (0x0000a1f5) control_button_pane_t

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

0x9e6d,	// (0x00009e6d) bg_button_pane_g

0x5c25,	// (0x00005c25) common_borders_pane_ParamLimits

0x5c25,	// (0x00005c25) common_borders_pane

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy1_ParamLimits

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy1

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy1_ParamLimits

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy1

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy1_ParamLimits

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy1

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy1_ParamLimits

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy1

0x5c60,	// (0x00005c60) bg_eswt_ctrl_canvas_pane_g1

0x5c25,	// (0x00005c25) common_borders_pane_cp2_ParamLimits

0x5c25,	// (0x00005c25) common_borders_pane_cp2

0x5c25,	// (0x00005c25) common_borders_pane_cp3_ParamLimits

0x5c25,	// (0x00005c25) common_borders_pane_cp3

0x6aae,	// (0x00006aae) separator_horizontal_pane

0x193d,	// (0x0000193d) separator_vertical_pane

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy2_ParamLimits

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy2

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy2_ParamLimits

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy2

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy2_ParamLimits

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy2

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy2_ParamLimits

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy2

0x0020,	// (0x00000020) common_borders_pane_cp4

0x6ab6,	// (0x00006ab6) separator_horizontal_pane_g1

0x6abf,	// (0x00006abf) separator_horizontal_pane_g2

0x6ac8,	// (0x00006ac8) separator_horizontal_pane_g3

0x0002,

0xa1fa,	// (0x0000a1fa) separator_horizontal_pane_g

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy3_ParamLimits

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy3

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy3_ParamLimits

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy3

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy3_ParamLimits

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy3

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy3_ParamLimits

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy3

0x0020,	// (0x00000020) common_borders_pane_cp5

0x6ad1,	// (0x00006ad1) separator_vertical_pane_g1

0x6ada,	// (0x00006ada) separator_vertical_pane_g2

0x6ae3,	// (0x00006ae3) separator_vertical_pane_g3

0x0002,

0xa201,	// (0x0000a201) separator_vertical_pane_g

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy4_ParamLimits

0x6a32,	// (0x00006a32) eswt_control_pane_g1_copy4

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy4_ParamLimits

0x6a3f,	// (0x00006a3f) eswt_control_pane_g2_copy4

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy4_ParamLimits

0x6a4c,	// (0x00006a4c) eswt_control_pane_g3_copy4

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy4_ParamLimits

0x6a59,	// (0x00006a59) eswt_control_pane_g4_copy4

0xc7a4,	// (0x0000c7a4) eswt_ctrl_combo_button_pane

0xc7ac,	// (0x0000c7ac) eswt_ctrl_input_pane

0xc7b4,	// (0x0000c7b4) popup_choice_list_window_cp70

0xc7bc,	// (0x0000c7bc) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x5c25,	// (0x00005c25) bg_button_pane_cp70_ParamLimits

0x5c25,	// (0x00005c25) bg_button_pane_cp70

0xc7ca,	// (0x0000c7ca) eswt_ctrl_combo_button_pane_g1

0x6b1a,	// (0x00006b1a) wait_bar_pane_cp70

0x3395,	// (0x00003395) bg_popup_window_pane_cp70_ParamLimits

0x3395,	// (0x00003395) bg_popup_window_pane_cp70

0x6b22,	// (0x00006b22) popup_eswt_tasktip_window_t1

0x6b38,	// (0x00006b38) wait_bar_pane_cp71_ParamLimits

0x6b38,	// (0x00006b38) wait_bar_pane_cp71

0x6b44,	// (0x00006b44) grid_eswt_app_pane

0x1946,	// (0x00001946) scroll_pane_cp70

0xc7d2,	// (0x0000c7d2) cell_eswt_app_pane_ParamLimits

0xc7d2,	// (0x0000c7d2) cell_eswt_app_pane

0xc7fa,	// (0x0000c7fa) cell_eswt_app_pane_g1_ParamLimits

0xc7fa,	// (0x0000c7fa) cell_eswt_app_pane_g1

0xc829,	// (0x0000c829) cell_eswt_app_pane_g2_ParamLimits

0xc829,	// (0x0000c829) cell_eswt_app_pane_g2

0x0001,

0xe2a7,	// (0x0000e2a7) cell_eswt_app_pane_g_ParamLimits

0xe2a7,	// (0x0000e2a7) cell_eswt_app_pane_g

0xc852,	// (0x0000c852) cell_eswt_app_pane_t1_ParamLimits

0xc852,	// (0x0000c852) cell_eswt_app_pane_t1

0x6bff,	// (0x00006bff) grid_highlight_pane_cp70_ParamLimits

0x6bff,	// (0x00006bff) grid_highlight_pane_cp70

0x0c7f,	// (0x00000c7f) set_content_pane_g1

0x261b,	// (0x0000261b) status_small_volume_pane

0x6c0b,	// (0x00006c0b) status_small_volume_pane_g1

0x6c13,	// (0x00006c13) volume_small2_pane

0x6c1c,	// (0x00006c1c) volume_small2_pane_g1

0x6c25,	// (0x00006c25) volume_small2_pane_g2

0x6c2e,	// (0x00006c2e) volume_small2_pane_g3

0x6c37,	// (0x00006c37) volume_small2_pane_g4

0x6c40,	// (0x00006c40) volume_small2_pane_g5

0x6c49,	// (0x00006c49) volume_small2_pane_g6

0x6c52,	// (0x00006c52) volume_small2_pane_g7

0x6c5b,	// (0x00006c5b) volume_small2_pane_g8

0x6c64,	// (0x00006c64) volume_small2_pane_g9

0x6c6d,	// (0x00006c6d) volume_small2_pane_g10

0x0009,

0xa20d,	// (0x0000a20d) volume_small2_pane_g

0x61e2,	// (0x000061e2) fep_vkb_top_text_pane_g1_ParamLimits

0xc6ef,	// (0x0000c6ef) fep_vkb_top_text_pane_t1_ParamLimits

0x6510,	// (0x00006510) popup_preview_fixed_window_g3_ParamLimits

0x6510,	// (0x00006510) popup_preview_fixed_window_g3

0xb912,	// (0x0000b912) popup_toolbar_trans_pane

0xc15d,	// (0x0000c15d) aid_height_set_list_ParamLimits

0x4887,	// (0x00004887) aid_size_parent_ParamLimits

0x283d,	// (0x0000283d) list_highlight_pane_cp2_ParamLimits

0x0c7f,	// (0x00000c7f) set_content_pane_g1_ParamLimits

0xc2fe,	// (0x0000c2fe) list_single_image_pane_ParamLimits

0xc2fe,	// (0x0000c2fe) list_single_image_pane

0xc884,	// (0x0000c884) aid_size_cell_image_ParamLimits

0xc884,	// (0x0000c884) aid_size_cell_image

0xc891,	// (0x0000c891) grid_single_image_pane_ParamLimits

0xc891,	// (0x0000c891) grid_single_image_pane

0x0c7f,	// (0x00000c7f) list_single_image_pane_g1_ParamLimits

0x0c7f,	// (0x00000c7f) list_single_image_pane_g1

0x120e,	// (0x0000120e) list_single_image_pane_g2_ParamLimits

0x120e,	// (0x0000120e) list_single_image_pane_g2

0x0001,

0x9c9b,	// (0x00009c9b) list_single_image_pane_g_ParamLimits

0x9c9b,	// (0x00009c9b) list_single_image_pane_g

0x4a0a,	// (0x00004a0a) list_single_image_pane_t1_ParamLimits

0x4a0a,	// (0x00004a0a) list_single_image_pane_t1

0xc89d,	// (0x0000c89d) cell_image_list_pane_ParamLimits

0xc89d,	// (0x0000c89d) cell_image_list_pane

0xc8b1,	// (0x0000c8b1) cell_image_list_pane_g1

0xc8ba,	// (0x0000c8ba) cell_image_list_pane_g2

0x0001,

0xe2ac,	// (0x0000e2ac) cell_image_list_pane_g

0x6cb4,	// (0x00006cb4) aid_size_cell_tb_trans_pane

0x11e8,	// (0x000011e8) bg_tb_trans_pane

0x6cc6,	// (0x00006cc6) grid_tb_trans_pane

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

0xa227,	// (0x0000a227) bg_tb_trans_pane_g

0x6cda,	// (0x00006cda) cell_toolbar_trans_pane_ParamLimits

0x6cda,	// (0x00006cda) cell_toolbar_trans_pane

0x5c60,	// (0x00005c60) cell_toolbar_trans_pane_g1

0xc54b,	// (0x0000c54b) list_form2_midp_pane_t1

0xc559,	// (0x0000c559) list_form2_midp_pane_t2

0x0001,

0xe277,	// (0x0000e277) list_form2_midp_pane_t

0x58b9,	// (0x000058b9) scroll_pane_cp51_ParamLimits

0x5aba,	// (0x00005aba) form2_midp_wait_pane_g1

0x5ac3,	// (0x00005ac3) form2_midp_wait_pane_g2

0x5acc,	// (0x00005acc) form2_midp_wait_pane_g3

0x0002,

0xa0ea,	// (0x0000a0ea) form2_midp_wait_pane_g

0x0474,	// (0x00000474) list_highlight_pane_cp21_ParamLimits

0x5aec,	// (0x00005aec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5afb,	// (0x00005afb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4a51,	// (0x00004a51) list_single_2graphic_im_pane_ParamLimits

0x4a51,	// (0x00004a51) list_single_2graphic_im_pane

0xc8c3,	// (0x0000c8c3) list_single_2graphic_im_pane_g1_ParamLimits

0xc8c3,	// (0x0000c8c3) list_single_2graphic_im_pane_g1

0xc8d4,	// (0x0000c8d4) list_single_2graphic_im_pane_g2_ParamLimits

0xc8d4,	// (0x0000c8d4) list_single_2graphic_im_pane_g2

0xc8e0,	// (0x0000c8e0) list_single_2graphic_im_pane_g3_ParamLimits

0xc8e0,	// (0x0000c8e0) list_single_2graphic_im_pane_g3

0x0003,

0xe2b1,	// (0x0000e2b1) list_single_2graphic_im_pane_g_ParamLimits

0xe2b1,	// (0x0000e2b1) list_single_2graphic_im_pane_g

0xc8f4,	// (0x0000c8f4) list_single_2graphic_im_pane_t1_ParamLimits

0xc8f4,	// (0x0000c8f4) list_single_2graphic_im_pane_t1

0x651c,	// (0x0000651c) list_single_graphic_2heading_pane_fp_ParamLimits

0x651c,	// (0x0000651c) list_single_graphic_2heading_pane_fp

0x6573,	// (0x00006573) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6573,	// (0x00006573) list_single_graphic_2heading_pane_fp_g1

0x6530,	// (0x00006530) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6530,	// (0x00006530) list_single_graphic_2heading_pane_fp_g2

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0e80,	// (0x00000e80) list_single_graphic_2heading_pane_fp_g3

0x653c,	// (0x0000653c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x653c,	// (0x0000653c) list_single_graphic_2heading_pane_fp_g4

0x6550,	// (0x00006550) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6550,	// (0x00006550) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xa16d,	// (0x0000a16d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa16d,	// (0x0000a16d) list_single_graphic_2heading_pane_fp_g

0x6d6e,	// (0x00006d6e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6d6e,	// (0x00006d6e) list_single_graphic_2heading_pane_fp_t1

0x65ab,	// (0x000065ab) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x65ab,	// (0x000065ab) list_single_graphic_2heading_pane_fp_t2

0x6d84,	// (0x00006d84) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6d84,	// (0x00006d84) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xa243,	// (0x0000a243) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xa243,	// (0x0000a243) list_single_graphic_2heading_pane_fp_t

0x5e83,	// (0x00005e83) fep_hwr_write_pane_g5_ParamLimits

0x5e83,	// (0x00005e83) fep_hwr_write_pane_g5

0x5e8f,	// (0x00005e8f) fep_hwr_write_pane_g6_ParamLimits

0x5e8f,	// (0x00005e8f) fep_hwr_write_pane_g6

0x6a05,	// (0x00006a05) eswt_shell_pane_ParamLimits

0x3395,	// (0x00003395) bg_popup_window_pane_cp18_ParamLimits

0x4775,	// (0x00004775) heading_pane_cp70

0x6b22,	// (0x00006b22) popup_eswt_tasktip_window_t1_ParamLimits

0xb9ad,	// (0x0000b9ad) aid_touch_tab_arrow_left

0xb9c1,	// (0x0000b9c1) aid_touch_tab_arrow_right

0xa68b,	// (0x0000a68b) title_pane_g3_ParamLimits

0xa68b,	// (0x0000a68b) title_pane_g3

0x10e6,	// (0x000010e6) set_value_pane_g1

0xb912,	// (0x0000b912) popup_toolbar_trans_pane_ParamLimits

0x6cb4,	// (0x00006cb4) aid_size_cell_tb_trans_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_tb_trans_pane_ParamLimits

0x6cc6,	// (0x00006cc6) grid_tb_trans_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane_ParamLimits

0x07a5,	// (0x000007a5) cont_note_pane

0x0ad9,	// (0x00000ad9) cont_snote2_single_text_pane_ParamLimits

0x0ad9,	// (0x00000ad9) cont_snote2_single_text_pane

0x0ad9,	// (0x00000ad9) cont_snote2_single_graphic_pane_ParamLimits

0x0ad9,	// (0x00000ad9) cont_snote2_single_graphic_pane

0x3981,	// (0x00003981) cont_note_wait_pane_ParamLimits

0x3981,	// (0x00003981) cont_note_wait_pane

0x3981,	// (0x00003981) cont_note_image_pane_ParamLimits

0x3981,	// (0x00003981) cont_note_image_pane

0x6d9a,	// (0x00006d9a) popup_note2_window_g1_ParamLimits

0x6d9a,	// (0x00006d9a) popup_note2_window_g1

0x6dcb,	// (0x00006dcb) popup_note2_window_t1_ParamLimits

0x6dcb,	// (0x00006dcb) popup_note2_window_t1

0x6e10,	// (0x00006e10) popup_note2_window_t2_ParamLimits

0x6e10,	// (0x00006e10) popup_note2_window_t2

0x6e55,	// (0x00006e55) popup_note2_window_t3_ParamLimits

0x6e55,	// (0x00006e55) popup_note2_window_t3

0x6e9a,	// (0x00006e9a) popup_note2_window_t4_ParamLimits

0x6e9a,	// (0x00006e9a) popup_note2_window_t4

0x0829,	// (0x00000829) popup_note2_window_t5_ParamLimits

0x0829,	// (0x00000829) popup_note2_window_t5

0x0004,

0xa24f,	// (0x0000a24f) popup_note2_window_t_ParamLimits

0xa24f,	// (0x0000a24f) popup_note2_window_t

0x6ec9,	// (0x00006ec9) popup_note2_image_window_g1_ParamLimits

0x6ec9,	// (0x00006ec9) popup_note2_image_window_g1

0x6ed5,	// (0x00006ed5) popup_note2_image_window_g2_ParamLimits

0x6ed5,	// (0x00006ed5) popup_note2_image_window_g2

0x0001,

0xa25a,	// (0x0000a25a) popup_note2_image_window_g_ParamLimits

0xa25a,	// (0x0000a25a) popup_note2_image_window_g

0x6ee7,	// (0x00006ee7) popup_note2_image_window_t1_ParamLimits

0x6ee7,	// (0x00006ee7) popup_note2_image_window_t1

0x6eff,	// (0x00006eff) popup_note2_image_window_t2_ParamLimits

0x6eff,	// (0x00006eff) popup_note2_image_window_t2

0x6f17,	// (0x00006f17) popup_note2_image_window_t3_ParamLimits

0x6f17,	// (0x00006f17) popup_note2_image_window_t3

0x0002,

0xa25f,	// (0x0000a25f) popup_note2_image_window_t_ParamLimits

0xa25f,	// (0x0000a25f) popup_note2_image_window_t

0x398f,	// (0x0000398f) popup_note2_wait_window_g1_ParamLimits

0x398f,	// (0x0000398f) popup_note2_wait_window_g1

0x399b,	// (0x0000399b) popup_note2_wait_window_g2_ParamLimits

0x399b,	// (0x0000399b) popup_note2_wait_window_g2

0x39a7,	// (0x000039a7) popup_note2_wait_window_g3_ParamLimits

0x39a7,	// (0x000039a7) popup_note2_wait_window_g3

0x0002,

0x9e4f,	// (0x00009e4f) popup_note2_wait_window_g_ParamLimits

0x9e4f,	// (0x00009e4f) popup_note2_wait_window_g

0x6f33,	// (0x00006f33) popup_note2_wait_window_t1_ParamLimits

0x6f33,	// (0x00006f33) popup_note2_wait_window_t1

0x6f51,	// (0x00006f51) popup_note2_wait_window_t2_ParamLimits

0x6f51,	// (0x00006f51) popup_note2_wait_window_t2

0x6f6f,	// (0x00006f6f) popup_note2_wait_window_t3_ParamLimits

0x6f6f,	// (0x00006f6f) popup_note2_wait_window_t3

0x6f81,	// (0x00006f81) popup_note2_wait_window_t4_ParamLimits

0x6f81,	// (0x00006f81) popup_note2_wait_window_t4

0x0003,

0xa266,	// (0x0000a266) popup_note2_wait_window_t_ParamLimits

0xa266,	// (0x0000a266) popup_note2_wait_window_t

0x6f93,	// (0x00006f93) wait_bar2_pane_ParamLimits

0x6f93,	// (0x00006f93) wait_bar2_pane

0x6fab,	// (0x00006fab) popup_snote2_single_text_window_g1_ParamLimits

0x6fab,	// (0x00006fab) popup_snote2_single_text_window_g1

0x6fd3,	// (0x00006fd3) popup_snote2_single_text_window_t1_ParamLimits

0x6fd3,	// (0x00006fd3) popup_snote2_single_text_window_t1

0x701f,	// (0x0000701f) popup_snote2_single_text_window_t2_ParamLimits

0x701f,	// (0x0000701f) popup_snote2_single_text_window_t2

0x706b,	// (0x0000706b) popup_snote2_single_text_window_t3_ParamLimits

0x706b,	// (0x0000706b) popup_snote2_single_text_window_t3

0x70ac,	// (0x000070ac) popup_snote2_single_text_window_t4_ParamLimits

0x70ac,	// (0x000070ac) popup_snote2_single_text_window_t4

0x70e2,	// (0x000070e2) popup_snote2_single_text_window_t5_ParamLimits

0x70e2,	// (0x000070e2) popup_snote2_single_text_window_t5

0x0004,

0xa26f,	// (0x0000a26f) popup_snote2_single_text_window_t_ParamLimits

0xa26f,	// (0x0000a26f) popup_snote2_single_text_window_t

0x710d,	// (0x0000710d) popup_snote2_single_graphic_window_g1_ParamLimits

0x710d,	// (0x0000710d) popup_snote2_single_graphic_window_g1

0x7135,	// (0x00007135) popup_snote2_single_graphic_window_g2_ParamLimits

0x7135,	// (0x00007135) popup_snote2_single_graphic_window_g2

0x0001,

0xa27a,	// (0x0000a27a) popup_snote2_single_graphic_window_g_ParamLimits

0xa27a,	// (0x0000a27a) popup_snote2_single_graphic_window_g

0x715d,	// (0x0000715d) popup_snote2_single_graphic_window_t1_ParamLimits

0x715d,	// (0x0000715d) popup_snote2_single_graphic_window_t1

0x71a9,	// (0x000071a9) popup_snote2_single_graphic_window_t2_ParamLimits

0x71a9,	// (0x000071a9) popup_snote2_single_graphic_window_t2

0x706b,	// (0x0000706b) popup_snote2_single_graphic_window_t3_ParamLimits

0x706b,	// (0x0000706b) popup_snote2_single_graphic_window_t3

0x70ac,	// (0x000070ac) popup_snote2_single_graphic_window_t4_ParamLimits

0x70ac,	// (0x000070ac) popup_snote2_single_graphic_window_t4

0x70e2,	// (0x000070e2) popup_snote2_single_graphic_window_t5_ParamLimits

0x70e2,	// (0x000070e2) popup_snote2_single_graphic_window_t5

0x0004,

0xa27f,	// (0x0000a27f) popup_snote2_single_graphic_window_t_ParamLimits

0xa27f,	// (0x0000a27f) popup_snote2_single_graphic_window_t

0x5747,	// (0x00005747) clock_nsta_pane_cp2_t1

0x5747,	// (0x00005747) clock_nsta_pane_cp2_t2

0x0001,

0xa0ab,	// (0x0000a0ab) clock_nsta_pane_cp2_t

0x1202,	// (0x00001202) form_field_data_wide_pane_g1_ParamLimits

0x0c7f,	// (0x00000c7f) form_field_data_wide_pane_g2_ParamLimits

0x0c7f,	// (0x00000c7f) form_field_data_wide_pane_g2

0x120e,	// (0x0000120e) form_field_data_wide_pane_g3_ParamLimits

0x120e,	// (0x0000120e) form_field_data_wide_pane_g3

0x0002,

0x9c99,	// (0x00009c99) form_field_data_wide_pane_g_ParamLimits

0x9c99,	// (0x00009c99) form_field_data_wide_pane_g

0xc486,	// (0x0000c486) grid_touch_3_pane_ParamLimits

0xc486,	// (0x0000c486) grid_touch_3_pane

0xc925,	// (0x0000c925) cell_touch_3_pane_ParamLimits

0xc925,	// (0x0000c925) cell_touch_3_pane

0x5c60,	// (0x00005c60) cell_touch_3_pane_g1

0x5c60,	// (0x00005c60) cell_touch_3_pane_g2

0x0001,

0xa130,	// (0x0000a130) cell_touch_3_pane_g

0x085b,	// (0x0000085b) cont_query_data_pane

0x0863,	// (0x00000863) cont_query_data_pane_cp1

0x7222,	// (0x00007222) button_value_adjust_pane_cp7

0x722a,	// (0x0000722a) query_popup_pane_cp3

0x1c31,	// (0x00001c31) bg_popup_sub_pane_cp22_ParamLimits

0x1c47,	// (0x00001c47) navi_navi_volume_pane_cp2

0x1c5f,	// (0x00001c5f) popup_side_volume_key_window_g2

0x1c6b,	// (0x00001c6b) popup_side_volume_key_window_g3

0x0002,

0x9d2b,	// (0x00009d2b) popup_side_volume_key_window_g

0x1c85,	// (0x00001c85) popup_side_volume_key_window_t2

0x0001,

0x9d32,	// (0x00009d32) popup_side_volume_key_window_t

0x20ce,	// (0x000020ce) popup_side_volume_key_window_ParamLimits

0xab2e,	// (0x0000ab2e) list_double_graphic_pane_g4_ParamLimits

0xab2e,	// (0x0000ab2e) list_double_graphic_pane_g4

0xc2d6,	// (0x0000c2d6) list_single_2heading_msg_pane_ParamLimits

0xc2d6,	// (0x0000c2d6) list_single_2heading_msg_pane

0xc96c,	// (0x0000c96c) list_single_2heading_msg_pane_g1_ParamLimits

0xc96c,	// (0x0000c96c) list_single_2heading_msg_pane_g1

0xc978,	// (0x0000c978) list_single_2heading_msg_pane_g2_ParamLimits

0xc978,	// (0x0000c978) list_single_2heading_msg_pane_g2

0xc98b,	// (0x0000c98b) list_single_2heading_msg_pane_g3_ParamLimits

0xc98b,	// (0x0000c98b) list_single_2heading_msg_pane_g3

0x727b,	// (0x0000727b) list_single_2heading_msg_pane_g4_ParamLimits

0x727b,	// (0x0000727b) list_single_2heading_msg_pane_g4

0x0003,

0xe2ba,	// (0x0000e2ba) list_single_2heading_msg_pane_g_ParamLimits

0xe2ba,	// (0x0000e2ba) list_single_2heading_msg_pane_g

0xc997,	// (0x0000c997) list_single_2heading_msg_pane_t1_ParamLimits

0xc997,	// (0x0000c997) list_single_2heading_msg_pane_t1

0xc9bf,	// (0x0000c9bf) list_single_2heading_msg_pane_t2_ParamLimits

0xc9bf,	// (0x0000c9bf) list_single_2heading_msg_pane_t2

0xca2a,	// (0x0000ca2a) list_single_2heading_msg_pane_t3_ParamLimits

0xca2a,	// (0x0000ca2a) list_single_2heading_msg_pane_t3

0x7323,	// (0x00007323) list_single_2heading_msg_pane_t4_ParamLimits

0x7323,	// (0x00007323) list_single_2heading_msg_pane_t4

0x0003,

0xe2c3,	// (0x0000e2c3) list_single_2heading_msg_pane_t_ParamLimits

0xe2c3,	// (0x0000e2c3) list_single_2heading_msg_pane_t

0x03c8,	// (0x000003c8) title_pane_g4_ParamLimits

0x03c8,	// (0x000003c8) title_pane_g4

0x16f4,	// (0x000016f4) title_pane_stacon_g3_ParamLimits

0x16f4,	// (0x000016f4) title_pane_stacon_g3

0x6d31,	// (0x00006d31) list_single_2graphic_im_pane_g4_ParamLimits

0x6d31,	// (0x00006d31) list_single_2graphic_im_pane_g4

0x44d5,	// (0x000044d5) popup_side_volume_key_window_cp

0x4e21,	// (0x00004e21) main_idle_act2_pane_t1

0x3253,	// (0x00003253) toolbar_button_pane_g10

0xaa1b,	// (0x0000aa1b) popup_toolbar_window_cp1

0x5738,	// (0x00005738) clock_nsta_pane_cp_t1

0x5738,	// (0x00005738) clock_nsta_pane_cp_t2

0x0001,

0xa0a6,	// (0x0000a0a6) clock_nsta_pane_cp_t

0x1c47,	// (0x00001c47) navi_navi_volume_pane_cp2_ParamLimits

0x1c53,	// (0x00001c53) popup_side_volume_key_window_g1_ParamLimits

0x1c5f,	// (0x00001c5f) popup_side_volume_key_window_g2_ParamLimits

0x1c6b,	// (0x00001c6b) popup_side_volume_key_window_g3_ParamLimits

0x9d2b,	// (0x00009d2b) popup_side_volume_key_window_g_ParamLimits

0x5cc9,	// (0x00005cc9) fep_hwr_aid_pane

0x5d6a,	// (0x00005d6a) bg_fep_hwr_top_pane_g4_ParamLimits

0x5d8a,	// (0x00005d8a) fep_hwr_top_pane_g1_ParamLimits

0x5d9c,	// (0x00005d9c) fep_hwr_top_pane_g2_ParamLimits

0x5dae,	// (0x00005dae) fep_hwr_top_pane_g3_ParamLimits

0xa0fb,	// (0x0000a0fb) fep_hwr_top_pane_g_ParamLimits

0x5dc3,	// (0x00005dc3) fep_hwr_top_text_pane_ParamLimits

0x42a0,	// (0x000042a0) aid_touch_tab_arrow_arrow_2

0x42a9,	// (0x000042a9) aid_touch_tab_arrow_left_2

0x5cdd,	// (0x00005cdd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5d10,	// (0x00005d10) fep_hwr_prediction_pane

0x6012,	// (0x00006012) fep_vkb_prediction_pane

0xc6cf,	// (0x0000c6cf) fep_vkb_side_pane_g3_ParamLimits

0xc6cf,	// (0x0000c6cf) fep_vkb_side_pane_g3

0x60a0,	// (0x000060a0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6767,	// (0x00006767) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6774,	// (0x00006774) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa1a5,	// (0x0000a1a5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7348,	// (0x00007348) fep_hwr_prediction_pane_g1

0x7352,	// (0x00007352) fep_hwr_prediction_pane_g2

0x735a,	// (0x0000735a) fep_hwr_prediction_pane_g3

0x7362,	// (0x00007362) fep_hwr_prediction_pane_g4

0x0003,

0xa29c,	// (0x0000a29c) fep_hwr_prediction_pane_g

0x7348,	// (0x00007348) fep_vkb_prediction_pane_g1

0x736a,	// (0x0000736a) fep_vkb_prediction_pane_g2

0x7372,	// (0x00007372) fep_vkb_prediction_pane_g3

0x737a,	// (0x0000737a) fep_vkb_prediction_pane_g4

0x0003,

0xa2a5,	// (0x0000a2a5) fep_vkb_prediction_pane_g

0x47fb,	// (0x000047fb) slider_set_pane_g3

0x480f,	// (0x0000480f) slider_set_pane_g4

0x4827,	// (0x00004827) slider_set_pane_g5

0x47fb,	// (0x000047fb) slider_set_pane_g6

0xc127,	// (0x0000c127) slider_set_pane_g7

0x49ce,	// (0x000049ce) slider_form_pane_g3

0x49d7,	// (0x000049d7) slider_form_pane_g4

0x49df,	// (0x000049df) slider_form_pane_g5

0x49ce,	// (0x000049ce) slider_form_pane_g6

0xc28f,	// (0x0000c28f) slider_form_pane_g7

0x50f6,	// (0x000050f6) slider_set_pane_vc_g3

0x50ff,	// (0x000050ff) slider_set_pane_vc_g4

0x5108,	// (0x00005108) slider_set_pane_vc_g5

0x50f6,	// (0x000050f6) slider_set_pane_vc_g6

0x5111,	// (0x00005111) slider_set_pane_vc_g7

0x50f6,	// (0x000050f6) slider_form_pane_vc_g1

0x50ff,	// (0x000050ff) slider_form_pane_vc_g2

0x5108,	// (0x00005108) slider_form_pane_vc_g3

0x50f6,	// (0x000050f6) slider_form_pane_vc_g4

0x547d,	// (0x0000547d) slider_form_pane_vc_g5

0x0004,

0xa08c,	// (0x0000a08c) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x7382,	// (0x00007382) ai3_links_pane

0xca98,	// (0x0000ca98) popup_ai3_data_window_ParamLimits

0xca98,	// (0x0000ca98) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xcab0,	// (0x0000cab0) cell_ai3_links_pane_ParamLimits

0xcab0,	// (0x0000cab0) cell_ai3_links_pane

0x73b7,	// (0x000073b7) bg_popup_sub_pane_cp11

0x73c4,	// (0x000073c4) cell_ai3_links_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp12

0x73e9,	// (0x000073e9) heading_ai3_data_pane

0x73f1,	// (0x000073f1) list_ai3_gene_pane

0x73fd,	// (0x000073fd) popup_ai3_data_window_g1

0x7405,	// (0x00007405) heading_ai3_data_pane_g1

0x740d,	// (0x0000740d) heading_ai3_data_pane_t1

0x741b,	// (0x0000741b) list_double_ai3_gene_pane_ParamLimits

0x741b,	// (0x0000741b) list_double_ai3_gene_pane

0x7428,	// (0x00007428) list_single_ai3_gene_pane_ParamLimits

0x7428,	// (0x00007428) list_single_ai3_gene_pane

0x5c25,	// (0x00005c25) list_highlight_pane_cp7_ParamLimits

0x5c25,	// (0x00005c25) list_highlight_pane_cp7

0x7435,	// (0x00007435) list_single_a13_gene_pane_t1_ParamLimits

0x7435,	// (0x00007435) list_single_a13_gene_pane_t1

0x744c,	// (0x0000744c) list_single_ai3_gene_pane_g1

0x7455,	// (0x00007455) list_single_ai3_gene_pane_g2

0x0001,

0xa2ae,	// (0x0000a2ae) list_single_ai3_gene_pane_g

0x745d,	// (0x0000745d) list_double_ai3_gene_pane_g1_ParamLimits

0x745d,	// (0x0000745d) list_double_ai3_gene_pane_g1

0x7469,	// (0x00007469) list_double_ai3_gene_pane_t1_ParamLimits

0x7469,	// (0x00007469) list_double_ai3_gene_pane_t1

0x7485,	// (0x00007485) list_double_ai3_gene_pane_t2_ParamLimits

0x7485,	// (0x00007485) list_double_ai3_gene_pane_t2

0x749a,	// (0x0000749a) list_double_ai3_gene_pane_t3_ParamLimits

0x749a,	// (0x0000749a) list_double_ai3_gene_pane_t3

0x0002,

0xa2b3,	// (0x0000a2b3) list_double_ai3_gene_pane_t_ParamLimits

0xa2b3,	// (0x0000a2b3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x723b,	// (0x0000723b) aid_size_min_col_2

0xc958,	// (0x0000c958) aid_size_min_msg_ParamLimits

0xc958,	// (0x0000c958) aid_size_min_msg

0xc6e3,	// (0x0000c6e3) fep_vkb_top_text_pane_g2_ParamLimits

0xc6e3,	// (0x0000c6e3) fep_vkb_top_text_pane_g2

0x0001,

0xe297,	// (0x0000e297) fep_vkb_top_text_pane_g_ParamLimits

0xe297,	// (0x0000e297) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x74b7,	// (0x000074b7) grid_hc_apps_pane_ParamLimits

0x74b7,	// (0x000074b7) grid_hc_apps_pane

0x74c6,	// (0x000074c6) list_hc_apps_pane

0x74ce,	// (0x000074ce) scroll_pane_cp37_ParamLimits

0x74ce,	// (0x000074ce) scroll_pane_cp37

0xcac6,	// (0x0000cac6) cell_hc_apps_pane_ParamLimits

0xcac6,	// (0x0000cac6) cell_hc_apps_pane

0xcb60,	// (0x0000cb60) cell_hc_apps_pane_g1_ParamLimits

0xcb60,	// (0x0000cb60) cell_hc_apps_pane_g1

0x7595,	// (0x00007595) cell_hc_apps_pane_g2_ParamLimits

0x7595,	// (0x00007595) cell_hc_apps_pane_g2

0x75b1,	// (0x000075b1) cell_hc_apps_pane_g3_ParamLimits

0x75b1,	// (0x000075b1) cell_hc_apps_pane_g3

0x0002,

0xe2cc,	// (0x0000e2cc) cell_hc_apps_pane_g_ParamLimits

0xe2cc,	// (0x0000e2cc) cell_hc_apps_pane_g

0xcb8d,	// (0x0000cb8d) cell_hc_apps_pane_t1_ParamLimits

0xcb8d,	// (0x0000cb8d) cell_hc_apps_pane_t1

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10_ParamLimits

0x07a5,	// (0x000007a5) grid_highlight_pane_cp10

0xcbcb,	// (0x0000cbcb) list_single_hc_apps_pane_ParamLimits

0xcbcb,	// (0x0000cbcb) list_single_hc_apps_pane

0xcbf7,	// (0x0000cbf7) list_single_hc_apps_pane_g1

0xcc10,	// (0x0000cc10) list_single_hc_apps_pane_g2

0x0001,

0xe2d3,	// (0x0000e2d3) list_single_hc_apps_pane_g

0xcc29,	// (0x0000cc29) list_single_hc_apps_pane_g2_copy1

0xcc45,	// (0x0000cc45) list_single_hc_apps_pane_t1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_ParamLimits

0xa758,	// (0x0000a758) setting_slider_pane_t2_ParamLimits

0xa771,	// (0x0000a771) setting_slider_pane_t3_ParamLimits

0xe0aa,	// (0x0000e0aa) setting_slider_pane_t_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_ParamLimits

0x269d,	// (0x0000269d) control_pane_g5_ParamLimits

0x269d,	// (0x0000269d) control_pane_g5

0x47e2,	// (0x000047e2) slider_set_pane_g1_ParamLimits

0x47ef,	// (0x000047ef) slider_set_pane_g2_ParamLimits

0x47fb,	// (0x000047fb) slider_set_pane_g3_ParamLimits

0x480f,	// (0x0000480f) slider_set_pane_g4_ParamLimits

0x4827,	// (0x00004827) slider_set_pane_g5_ParamLimits

0x47fb,	// (0x000047fb) slider_set_pane_g6_ParamLimits

0xc127,	// (0x0000c127) slider_set_pane_g7_ParamLimits

0xe213,	// (0x0000e213) slider_set_pane_g_ParamLimits

0x0474,	// (0x00000474) navi_icon_text_pane_ParamLimits

0xb97f,	// (0x0000b97f) aid_fill_nsta_2_ParamLimits

0xb9ad,	// (0x0000b9ad) aid_touch_tab_arrow_left_ParamLimits

0xb9c1,	// (0x0000b9c1) aid_touch_tab_arrow_right_ParamLimits

0xba5d,	// (0x0000ba5d) clock_nsta_pane_ParamLimits

0x4282,	// (0x00004282) navi_icon_pane_g1_ParamLimits

0x428e,	// (0x0000428e) navi_text_pane_t1_ParamLimits

0x582f,	// (0x0000582f) navi_icon_text_pane_g1_ParamLimits

0x583b,	// (0x0000583b) navi_icon_text_pane_t1_ParamLimits

0xcbf7,	// (0x0000cbf7) list_single_hc_apps_pane_g1_ParamLimits

0xcc10,	// (0x0000cc10) list_single_hc_apps_pane_g2_ParamLimits

0xe2d3,	// (0x0000e2d3) list_single_hc_apps_pane_g_ParamLimits

0xcc29,	// (0x0000cc29) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcc45,	// (0x0000cc45) list_single_hc_apps_pane_t1_ParamLimits

0xa5ea,	// (0x0000a5ea) popup_toolbar2_fixed_window_ParamLimits

0xa5ea,	// (0x0000a5ea) popup_toolbar2_fixed_window

0xb90a,	// (0x0000b90a) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x76bd,	// (0x000076bd) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x76bd,	// (0x000076bd) grid_toolbar2_fixed_pane

0xcc73,	// (0x0000cc73) cell_toolbar2_fixed_pane_ParamLimits

0xcc73,	// (0x0000cc73) cell_toolbar2_fixed_pane

0xcc8e,	// (0x0000cc8e) cell_toolbar2_fixed_pane_g1

0x76df,	// (0x000076df) toolbar2_fixed_button_pane

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

0x9e6d,	// (0x00009e6d) toolbar2_fixed_button_pane_g

0x76e7,	// (0x000076e7) cell_toolbar2_float_pane_ParamLimits

0x76e7,	// (0x000076e7) cell_toolbar2_float_pane

0x76f8,	// (0x000076f8) cell_toolbar2_float_pane_g1

0x76df,	// (0x000076df) toolbar2_fixed_button_pane_cp

0xc698,	// (0x0000c698) fep_vkb_accented_list_pane_ParamLimits

0xc698,	// (0x0000c698) fep_vkb_accented_list_pane

0x63d3,	// (0x000063d3) bg_popup_fep_shadow_pane_g9

0x22d6,	// (0x000022d6) bg_popup_fep_shadow_pane_cp3

0x1496,	// (0x00001496) list_accented_list_pane

0x7701,	// (0x00007701) list_single_accented_list_pane_ParamLimits

0x7701,	// (0x00007701) list_single_accented_list_pane

0x22d6,	// (0x000022d6) list_highlight_pane_cp10

0x7712,	// (0x00007712) list_single_accented_list_pane_t1

0xb84c,	// (0x0000b84c) popup_slider_window_ParamLimits

0xb84c,	// (0x0000b84c) popup_slider_window

0x7232,	// (0x00007232) aid_indentation_list_msg

0xcd6d,	// (0x0000cd6d) bg_popup_window_pane_cp19

0x7816,	// (0x00007816) popup_slider_window_g1

0x7832,	// (0x00007832) popup_slider_window_g2

0x784e,	// (0x0000784e) popup_slider_window_g3

0x0005,

0xe2d8,	// (0x0000e2d8) popup_slider_window_g

0x78aa,	// (0x000078aa) popup_slider_window_t1

0x791c,	// (0x0000791c) small_volume_slider_vertical_pane

0x5c60,	// (0x00005c60) small_volume_slider_vertical_pane_g1

0x5c60,	// (0x00005c60) small_volume_slider_vertical_pane_g2

0x7938,	// (0x00007938) small_volume_slider_vertical_pane_g3

0x0002,

0xa2d8,	// (0x0000a2d8) small_volume_slider_vertical_pane_g

0xa56e,	// (0x0000a56e) area_side_right_pane_ParamLimits

0xa56e,	// (0x0000a56e) area_side_right_pane

0xce25,	// (0x0000ce25) aid_size_side_button_ParamLimits

0xce25,	// (0x0000ce25) aid_size_side_button

0xce3e,	// (0x0000ce3e) grid_sctrl_middle_pane_ParamLimits

0xce3e,	// (0x0000ce3e) grid_sctrl_middle_pane

0x7971,	// (0x00007971) sctrl_sk_bottom_pane

0x7982,	// (0x00007982) sctrl_sk_top_pane

0x7994,	// (0x00007994) aid_touch_sctrl_top

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane

0x79a1,	// (0x000079a1) sctrl_sk_top_pane_g1

0x79ae,	// (0x000079ae) sctrl_sk_top_pane_t1

0x7994,	// (0x00007994) aid_touch_sctrl_bottom

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp_ParamLimits

0x07a5,	// (0x000007a5) bg_sctrl_sk_pane_cp

0x79c9,	// (0x000079c9) sctrl_sk_bottom_pane_g1

0x79ae,	// (0x000079ae) sctrl_sk_bottom_pane_t1

0xce54,	// (0x0000ce54) cell_sctrl_middle_pane_ParamLimits

0xce54,	// (0x0000ce54) cell_sctrl_middle_pane

0xce65,	// (0x0000ce65) aid_touch_sctrl_middle_ParamLimits

0xce65,	// (0x0000ce65) aid_touch_sctrl_middle

0xce72,	// (0x0000ce72) bg_sctrl_middle_pane_ParamLimits

0xce72,	// (0x0000ce72) bg_sctrl_middle_pane

0x7a90,	// (0x00007a90) cell_sctrl_middle_pane_g1_ParamLimits

0x7a90,	// (0x00007a90) cell_sctrl_middle_pane_g1

0xce80,	// (0x0000ce80) cell_sctrl_middle_pane_g2_ParamLimits

0xce80,	// (0x0000ce80) cell_sctrl_middle_pane_g2

0x0001,

0xe2e5,	// (0x0000e2e5) cell_sctrl_middle_pane_g_ParamLimits

0xe2e5,	// (0x0000e2e5) cell_sctrl_middle_pane_g

0x320b,	// (0x0000320b) bg_sctrl_middle_pane_g1

0x3213,	// (0x00003213) bg_sctrl_middle_pane_g2

0x321b,	// (0x0000321b) bg_sctrl_middle_pane_g3

0x3223,	// (0x00003223) bg_sctrl_middle_pane_g4

0x322b,	// (0x0000322b) bg_sctrl_middle_pane_g5

0x3233,	// (0x00003233) bg_sctrl_middle_pane_g6

0x323b,	// (0x0000323b) bg_sctrl_middle_pane_g7

0x3243,	// (0x00003243) bg_sctrl_middle_pane_g8

0x0007,

0xa2e9,	// (0x0000a2e9) bg_sctrl_middle_pane_g

0x324b,	// (0x0000324b) bg_sctrl_middle_pane_g8_copy1

0x320b,	// (0x0000320b) bg_sctrl_sk_pane_g1

0x3213,	// (0x00003213) bg_sctrl_sk_pane_g2

0x321b,	// (0x0000321b) bg_sctrl_sk_pane_g3

0x0008,

0x9e6d,	// (0x00009e6d) bg_sctrl_sk_pane_g

0x0bfb,	// (0x00000bfb) aid_size_touch_scroll_bar

0x3223,	// (0x00003223) bg_sctrl_sk_pane_g4

0x322b,	// (0x0000322b) bg_sctrl_sk_pane_g5

0x3233,	// (0x00003233) bg_sctrl_sk_pane_g6

0x323b,	// (0x0000323b) bg_sctrl_sk_pane_g7

0x3243,	// (0x00003243) bg_sctrl_sk_pane_g8

0x324b,	// (0x0000324b) bg_sctrl_sk_pane_g9

0x28db,	// (0x000028db) popup_fep_china_hwr2_fs_candidate_window

0xb447,	// (0x0000b447) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb447,	// (0x0000b447) popup_fep_china_hwr2_fs_control_window

0x60a0,	// (0x000060a0) sctrl_sk_top_pane_g2

0x0001,

0xa2df,	// (0x0000a2df) sctrl_sk_top_pane_g

0xce8d,	// (0x0000ce8d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce8d,	// (0x0000ce8d) aid_fep_china_hwr2_fs_cell

0xcea1,	// (0x0000cea1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcea1,	// (0x0000cea1) bg_popup_fep_shadow_pane_cp4

0xceb8,	// (0x0000ceb8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xceb8,	// (0x0000ceb8) bg_popup_fep_shadow_pane_cp5

0xceca,	// (0x0000ceca) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xceca,	// (0x0000ceca) popup_fep_china_hwr2_fs_control_bar_grid

0xcede,	// (0x0000cede) popup_fep_china_hwr2_fs_control_funtion_grid

0x7a66,	// (0x00007a66) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7a70,	// (0x00007a70) popup_fep_china_hwr2_fs_candidate_grid

0xcee6,	// (0x0000cee6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcee6,	// (0x0000cee6) cell_fep_china_hwr2_fs_funtion_grid

0x5c60,	// (0x00005c60) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7a90,	// (0x00007a90) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7a90,	// (0x00007a90) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7a9e,	// (0x00007a9e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7a9e,	// (0x00007a9e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xa2fa,	// (0x0000a2fa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xa2fa,	// (0x0000a2fa) cell_fep_china_hwr2_fs_funtion_grid_g

0xcefe,	// (0x0000cefe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcefe,	// (0x0000cefe) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf13,	// (0x0000cf13) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf13,	// (0x0000cf13) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xe2ea,	// (0x0000e2ea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xe2ea,	// (0x0000e2ea) cell_fep_china_hwr2_fs_funtion_grid_t

0x7ae5,	// (0x00007ae5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7aed,	// (0x00007aed) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7af5,	// (0x00007af5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xa304,	// (0x0000a304) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7afd,	// (0x00007afd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7afd,	// (0x00007afd) cell_fep_china_hwr2_fs_candidate_grid

0x7b16,	// (0x00007b16) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7b1e,	// (0x00007b1e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5c60,	// (0x00005c60) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5c60,	// (0x00005c60) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa130,	// (0x0000a130) cell_fep_china_hwr2_fs_candidate_grid_g

0x7b26,	// (0x00007b26) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2db8,	// (0x00002db8) clock_nsta_pane_cp_24_ParamLimits

0x2db8,	// (0x00002db8) clock_nsta_pane_cp_24

0x2e2b,	// (0x00002e2b) indicator_nsta_pane_cp_24_ParamLimits

0x2e2b,	// (0x00002e2b) indicator_nsta_pane_cp_24

0x40ee,	// (0x000040ee) heading_pane_g1

0x0001,

0x9ed2,	// (0x00009ed2) heading_pane_g

0xc3ae,	// (0x0000c3ae) grid_sct_catagory_button_pane

0x4c3b,	// (0x00004c3b) scroll_pane_cp5_ParamLimits

0x58c5,	// (0x000058c5) button_value_adjust_pane_cp5_ParamLimits

0x58c5,	// (0x000058c5) button_value_adjust_pane_cp5

0x59bb,	// (0x000059bb) form2_midp_time_pane_ParamLimits

0x7b34,	// (0x00007b34) cell_sct_catagory_button_pane_ParamLimits

0x7b34,	// (0x00007b34) cell_sct_catagory_button_pane

0x5c25,	// (0x00005c25) bg_button_pane_cp01_ParamLimits

0x5c25,	// (0x00005c25) bg_button_pane_cp01

0x5c60,	// (0x00005c60) cell_sct_catagory_button_pane_g1

0xb8bb,	// (0x0000b8bb) popup_tb_extension_window

0xcf2f,	// (0x0000cf2f) aid_size_cell_ext_ParamLimits

0xcf2f,	// (0x0000cf2f) aid_size_cell_ext

0x0ad9,	// (0x00000ad9) bg_tb_trans_pane_cp1_ParamLimits

0x0ad9,	// (0x00000ad9) bg_tb_trans_pane_cp1

0xcf55,	// (0x0000cf55) grid_tb_ext_pane_ParamLimits

0xcf55,	// (0x0000cf55) grid_tb_ext_pane

0xcf8b,	// (0x0000cf8b) cell_tb_ext_pane_ParamLimits

0xcf8b,	// (0x0000cf8b) cell_tb_ext_pane

0xcfaf,	// (0x0000cfaf) cell_tb_ext_pane_g1_ParamLimits

0xcfaf,	// (0x0000cfaf) cell_tb_ext_pane_g1

0x7bbe,	// (0x00007bbe) cell_tb_ext_pane_t1

0x07a5,	// (0x000007a5) list_highlight_pane_cp11_ParamLimits

0x07a5,	// (0x000007a5) list_highlight_pane_cp11

0x02f7,	// (0x000002f7) popup_uni_indicator_window_ParamLimits

0x02f7,	// (0x000002f7) popup_uni_indicator_window

0x11e8,	// (0x000011e8) bg_popup_sub_pane_cp14

0x7bd9,	// (0x00007bd9) list_uniindi_pane

0x7be5,	// (0x00007be5) uniindi_top_pane

0x07a5,	// (0x000007a5) bg_uniindi_top_pane

0x7c04,	// (0x00007c04) uniindi_top_pane_g1

0x7c1a,	// (0x00007c1a) uniindi_top_pane_g2

0x0003,

0xa30b,	// (0x0000a30b) uniindi_top_pane_g

0x7c44,	// (0x00007c44) uniindi_top_pane_t1

0x7c6e,	// (0x00007c6e) list_single_uniindi_pane_ParamLimits

0x7c6e,	// (0x00007c6e) list_single_uniindi_pane

0x5c60,	// (0x00005c60) bg_uniindi_top_pane_g1

0x7c80,	// (0x00007c80) list_single_uniindi_pane_g1

0x7c93,	// (0x00007c93) list_single_uniindi_pane_t1

0x0020,	// (0x00000020) control_bg_pane

0x7cb8,	// (0x00007cb8) bg_sctrl_sk_pane_cp1

0x7cc1,	// (0x00007cc1) bg_sctrl_sk_pane_cp2

0x7cca,	// (0x00007cca) control_bg_pane_g1

0x7cd3,	// (0x00007cd3) control_bg_pane_g2

0x0001,

0xa314,	// (0x0000a314) control_bg_pane_g

0x56fc,	// (0x000056fc) cell_indicator_nsta_pane_g1_ParamLimits

0xc4b9,	// (0x0000c4b9) cell_indicator_nsta_pane_g2_ParamLimits

0xe262,	// (0x0000e262) cell_indicator_nsta_pane_g_ParamLimits

0x5a3f,	// (0x00005a3f) form2_midp_time_pane_t1_ParamLimits

0x5cbb,	// (0x00005cbb) main_idle_act4_pane_ParamLimits

0x5cbb,	// (0x00005cbb) main_idle_act4_pane

0xb8bb,	// (0x0000b8bb) popup_tb_extension_window_ParamLimits

0xcf75,	// (0x0000cf75) tb_ext_find_pane_ParamLimits

0xcf75,	// (0x0000cf75) tb_ext_find_pane

0x7cdc,	// (0x00007cdc) ai_gene_pane_1_cp1

0x240f,	// (0x0000240f) ai_gene_pane_2_cp1

0x7ce4,	// (0x00007ce4) list_single_idle_plugin_calendar_pane

0x7ced,	// (0x00007ced) list_single_idle_plugin_notification_pane

0x7cf6,	// (0x00007cf6) list_single_idle_plugin_player_pane

0xcfcc,	// (0x0000cfcc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcfcc,	// (0x0000cfcc) list_single_idle_plugin_shortcut_pane

0xcff4,	// (0x0000cff4) main_idle_act4_pane_t1

0xd00a,	// (0x0000d00a) main_idle_act4_pane_t2

0x0001,

0xe2ef,	// (0x0000e2ef) main_idle_act4_pane_t

0xd020,	// (0x0000d020) middle_sk_idle_act4_pane_ParamLimits

0xd020,	// (0x0000d020) middle_sk_idle_act4_pane

0xd03c,	// (0x0000d03c) popup_clock_digital_analogue_window_cp2

0xd062,	// (0x0000d062) shortcut_wheel_idle_act4_pane_ParamLimits

0xd062,	// (0x0000d062) shortcut_wheel_idle_act4_pane

0x5c60,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g1

0x5c60,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g2

0x5c60,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g3

0x5c60,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g4

0x5c60,	// (0x00005c60) shortcut_wheel_idle_act4_pane_g5

0x7d89,	// (0x00007d89) shortcut_wheel_idle_act4_pane_g6

0x7d91,	// (0x00007d91) shortcut_wheel_idle_act4_pane_g7

0x7d99,	// (0x00007d99) shortcut_wheel_idle_act4_pane_g8

0x7da1,	// (0x00007da1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xa31e,	// (0x0000a31e) shortcut_wheel_idle_act4_pane_g

0x5d6a,	// (0x00005d6a) middle_sk_idle_act4_pane_g1_ParamLimits

0x5d6a,	// (0x00005d6a) middle_sk_idle_act4_pane_g1

0xd0dd,	// (0x0000d0dd) middle_sk_idle_act4_pane_g2_ParamLimits

0xd0dd,	// (0x0000d0dd) middle_sk_idle_act4_pane_g2

0x0001,

0xe304,	// (0x0000e304) middle_sk_idle_act4_pane_g_ParamLimits

0xe304,	// (0x0000e304) middle_sk_idle_act4_pane_g

0xd0f5,	// (0x0000d0f5) middle_sk_idle_act4_pane_t1_ParamLimits

0xd0f5,	// (0x0000d0f5) middle_sk_idle_act4_pane_t1

0xd124,	// (0x0000d124) grid_ai_shortcut_pane_ParamLimits

0xd124,	// (0x0000d124) grid_ai_shortcut_pane

0xd141,	// (0x0000d141) list_highlight_pane_cp16_ParamLimits

0xd141,	// (0x0000d141) list_highlight_pane_cp16

0xd14e,	// (0x0000d14e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd14e,	// (0x0000d14e) list_single_idle_plugin_shortcut_pane_g1

0xd15a,	// (0x0000d15a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd15a,	// (0x0000d15a) list_single_idle_plugin_shortcut_pane_g2

0xd176,	// (0x0000d176) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd176,	// (0x0000d176) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xe309,	// (0x0000e309) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xe309,	// (0x0000e309) list_single_idle_plugin_shortcut_pane_g

0xd18b,	// (0x0000d18b) cell_ai_shortcut_pane_ParamLimits

0xd18b,	// (0x0000d18b) cell_ai_shortcut_pane

0xd1a1,	// (0x0000d1a1) cell_ai_shortcut_pane_g1_ParamLimits

0xd1a1,	// (0x0000d1a1) cell_ai_shortcut_pane_g1

0x7cdc,	// (0x00007cdc) ai_gene_pane_1_cp2

0x7ece,	// (0x00007ece) ai_gene_pane_2_cp2

0x7ed6,	// (0x00007ed6) list_highlight_pane_cp15

0x7edf,	// (0x00007edf) list_single_idle_plugin_calendar_pane_g1

0x7ed6,	// (0x00007ed6) list_highlight_pane_cp17

0x7ee7,	// (0x00007ee7) list_single_idle_plugin_calendar_pane_g1_copy1

0x7eef,	// (0x00007eef) list_single_idle_plugin_player_pane_g1

0x4ec1,	// (0x00004ec1) list_single_idle_plugin_player_pane_g2

0x0001,

0xa34d,	// (0x0000a34d) list_single_idle_plugin_player_pane_g

0x7ef7,	// (0x00007ef7) list_single_idle_plugin_player_pane_t1

0x7f05,	// (0x00007f05) list_single_idle_plugin_player_pane_t2

0x7f13,	// (0x00007f13) list_single_idle_plugin_player_pane_t3

0x7f21,	// (0x00007f21) list_single_idle_plugin_player_pane_t4

0x0003,

0xa352,	// (0x0000a352) list_single_idle_plugin_player_pane_t

0x7f2f,	// (0x00007f2f) wait_bar_pane_cp15

0x7f37,	// (0x00007f37) grid_ai_notification_pane

0x4ec1,	// (0x00004ec1) list_single_idle_plugin_notification_pane_g1

0xd1c3,	// (0x0000d1c3) cell_ai_notification_pane_ParamLimits

0xd1c3,	// (0x0000d1c3) cell_ai_notification_pane

0x7f4d,	// (0x00007f4d) cell_ai_notification_pane_g1

0x7f55,	// (0x00007f55) cell_ai_notification_pane_t1

0xd1d0,	// (0x0000d1d0) tb_ext_find_button_pane

0xd1d8,	// (0x0000d1d8) tb_ext_find_pane_g1

0xd1e0,	// (0x0000d1e0) tb_ext_find_pane_t1

0x1b09,	// (0x00001b09) tb_ext_find_button_pane_g1

0x7f81,	// (0x00007f81) tb_ext_find_button_pane_g2

0x0001,

0xa35b,	// (0x0000a35b) tb_ext_find_button_pane_g

0xcff4,	// (0x0000cff4) main_idle_act4_pane_t1_ParamLimits

0xd00a,	// (0x0000d00a) main_idle_act4_pane_t2_ParamLimits

0xe2ef,	// (0x0000e2ef) main_idle_act4_pane_t_ParamLimits

0xd03c,	// (0x0000d03c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd052,	// (0x0000d052) sat_plugin_idle_act4_pane_ParamLimits

0xd052,	// (0x0000d052) sat_plugin_idle_act4_pane

0xd1ee,	// (0x0000d1ee) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd1ee,	// (0x0000d1ee) sat_plugin_idle_act4_pane_t1

0xd206,	// (0x0000d206) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd206,	// (0x0000d206) sat_plugin_idle_act4_pane_t2

0xd21e,	// (0x0000d21e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd21e,	// (0x0000d21e) sat_plugin_idle_act4_pane_t3

0xd236,	// (0x0000d236) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd236,	// (0x0000d236) sat_plugin_idle_act4_pane_t4

0x0003,

0xe310,	// (0x0000e310) sat_plugin_idle_act4_pane_t_ParamLimits

0xe310,	// (0x0000e310) sat_plugin_idle_act4_pane_t

0x0258,	// (0x00000258) popup_battery_window_ParamLimits

0x0258,	// (0x00000258) popup_battery_window

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25_ParamLimits

0x07a5,	// (0x000007a5) bg_popup_sub_pane_cp25

0x7fd6,	// (0x00007fd6) popup_battery_window_g1_ParamLimits

0x7fd6,	// (0x00007fd6) popup_battery_window_g1

0x7fe2,	// (0x00007fe2) popup_battery_window_t1_ParamLimits

0x7fe2,	// (0x00007fe2) popup_battery_window_t1

0x7ff4,	// (0x00007ff4) popup_battery_window_t2_ParamLimits

0x7ff4,	// (0x00007ff4) popup_battery_window_t2

0x0001,

0xa369,	// (0x0000a369) popup_battery_window_t_ParamLimits

0xa369,	// (0x0000a369) popup_battery_window_t

0xb1b2,	// (0x0000b1b2) midp_canvas_pane_ParamLimits

0xb207,	// (0x0000b207) midp_keypad_pane_ParamLimits

0xb207,	// (0x0000b207) midp_keypad_pane

0x283d,	// (0x0000283d) main_midp_pane_ParamLimits

0x5756,	// (0x00005756) signal_pane_g2_cp_ParamLimits

0xd24e,	// (0x0000d24e) aid_size_cell_midp_keypad_ParamLimits

0xd24e,	// (0x0000d24e) aid_size_cell_midp_keypad

0xd26c,	// (0x0000d26c) midp_keyp_game_grid_pane_ParamLimits

0xd26c,	// (0x0000d26c) midp_keyp_game_grid_pane

0xd28b,	// (0x0000d28b) midp_keyp_rocker_pane_ParamLimits

0xd28b,	// (0x0000d28b) midp_keyp_rocker_pane

0xd2cc,	// (0x0000d2cc) midp_keyp_sk_left_pane_ParamLimits

0xd2cc,	// (0x0000d2cc) midp_keyp_sk_left_pane

0xd31e,	// (0x0000d31e) midp_keyp_sk_right_pane_ParamLimits

0xd31e,	// (0x0000d31e) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xd36a,	// (0x0000d36a) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xd36a,	// (0x0000d36a) midp_keyp_sk_right_pane_g1

0x5c60,	// (0x00005c60) midp_keyp_rocker_pane_g1

0xd373,	// (0x0000d373) keyp_game_cell_pane_ParamLimits

0xd373,	// (0x0000d373) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xd395,	// (0x0000d395) keyp_game_cell_pane_g1

0xa5b0,	// (0x0000a5b0) popup_fep_vkb2_window_ParamLimits

0xa5b0,	// (0x0000a5b0) popup_fep_vkb2_window

0xd39e,	// (0x0000d39e) aid_size_cell_vkb2_ParamLimits

0xd39e,	// (0x0000d39e) aid_size_cell_vkb2

0xd3d4,	// (0x0000d3d4) popup_fep_vkb2_window_g1_ParamLimits

0xd3d4,	// (0x0000d3d4) popup_fep_vkb2_window_g1

0xd424,	// (0x0000d424) vkb2_area_bottom_pane_ParamLimits

0xd424,	// (0x0000d424) vkb2_area_bottom_pane

0xd462,	// (0x0000d462) vkb2_area_keypad_pane_ParamLimits

0xd462,	// (0x0000d462) vkb2_area_keypad_pane

0xd4a0,	// (0x0000d4a0) vkb2_area_top_pane_ParamLimits

0xd4a0,	// (0x0000d4a0) vkb2_area_top_pane

0xd51c,	// (0x0000d51c) vkb2_top_entry_pane_ParamLimits

0xd51c,	// (0x0000d51c) vkb2_top_entry_pane

0xd549,	// (0x0000d549) vkb2_top_grid_left_pane_ParamLimits

0xd549,	// (0x0000d549) vkb2_top_grid_left_pane

0xd569,	// (0x0000d569) vkb2_top_grid_right_pane_ParamLimits

0xd569,	// (0x0000d569) vkb2_top_grid_right_pane

0x832f,	// (0x0000832f) vkb2_cell_keypad_pane_ParamLimits

0x832f,	// (0x0000832f) vkb2_cell_keypad_pane

0xd5af,	// (0x0000d5af) vkb2_area_bottom_grid_pane_ParamLimits

0xd5af,	// (0x0000d5af) vkb2_area_bottom_grid_pane

0xd5d5,	// (0x0000d5d5) vkb2_area_bottom_pane_g1_ParamLimits

0xd5d5,	// (0x0000d5d5) vkb2_area_bottom_pane_g1

0xd5fb,	// (0x0000d5fb) vkb2_area_bottom_pane_g2_ParamLimits

0xd5fb,	// (0x0000d5fb) vkb2_area_bottom_pane_g2

0xd62c,	// (0x0000d62c) vkb2_area_bottom_pane_g3_ParamLimits

0xd62c,	// (0x0000d62c) vkb2_area_bottom_pane_g3

0x0002,

0xe319,	// (0x0000e319) vkb2_area_bottom_pane_g_ParamLimits

0xe319,	// (0x0000e319) vkb2_area_bottom_pane_g

0x84a7,	// (0x000084a7) vkb2_top_cell_left_pane_ParamLimits

0x84a7,	// (0x000084a7) vkb2_top_cell_left_pane

0xd682,	// (0x0000d682) vkb2_top_entry_pane_g1_ParamLimits

0xd682,	// (0x0000d682) vkb2_top_entry_pane_g1

0xd690,	// (0x0000d690) vkb2_top_entry_pane_t1_ParamLimits

0xd690,	// (0x0000d690) vkb2_top_entry_pane_t1

0x850f,	// (0x0000850f) vkb2_top_entry_pane_t2_ParamLimits

0x850f,	// (0x0000850f) vkb2_top_entry_pane_t2

0x8541,	// (0x00008541) vkb2_top_entry_pane_t3_ParamLimits

0x8541,	// (0x00008541) vkb2_top_entry_pane_t3

0x0002,

0xe320,	// (0x0000e320) vkb2_top_entry_pane_t_ParamLimits

0xe320,	// (0x0000e320) vkb2_top_entry_pane_t

0xd6c9,	// (0x0000d6c9) vkb2_top_grid_right_pane_g1_ParamLimits

0xd6c9,	// (0x0000d6c9) vkb2_top_grid_right_pane_g1

0x859a,	// (0x0000859a) vkb2_top_grid_right_pane_g2_ParamLimits

0x859a,	// (0x0000859a) vkb2_top_grid_right_pane_g2

0x85b2,	// (0x000085b2) vkb2_top_grid_right_pane_g3_ParamLimits

0x85b2,	// (0x000085b2) vkb2_top_grid_right_pane_g3

0xd6df,	// (0x0000d6df) vkb2_top_grid_right_pane_g4_ParamLimits

0xd6df,	// (0x0000d6df) vkb2_top_grid_right_pane_g4

0x0003,

0xe327,	// (0x0000e327) vkb2_top_grid_right_pane_g_ParamLimits

0xe327,	// (0x0000e327) vkb2_top_grid_right_pane_g

0x85e0,	// (0x000085e0) vkb2_top_cell_left_pane_g1

0x85f7,	// (0x000085f7) vkb2_cell_keypad_pane_g1_ParamLimits

0x85f7,	// (0x000085f7) vkb2_cell_keypad_pane_g1

0x8605,	// (0x00008605) vkb2_cell_keypad_pane_t1_ParamLimits

0x8605,	// (0x00008605) vkb2_cell_keypad_pane_t1

0x861c,	// (0x0000861c) vkb2_cell_bottom_grid_pane_ParamLimits

0x861c,	// (0x0000861c) vkb2_cell_bottom_grid_pane

0x8655,	// (0x00008655) vkb2_cell_bottom_grid_pane_g1

0xd081,	// (0x0000d081) aid_call2_pane_cp02

0xd089,	// (0x0000d089) aid_call_pane_cp02

0xd091,	// (0x0000d091) clock_digital_number_pane_cp10

0xd099,	// (0x0000d099) clock_digital_number_pane_cp11

0xd0a1,	// (0x0000d0a1) clock_digital_number_pane_cp12

0xd0a9,	// (0x0000d0a9) clock_digital_number_pane_cp13

0xd0b1,	// (0x0000d0b1) clock_digital_separator_pane_cp10

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g1

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g2

0xd0b9,	// (0x0000d0b9) popup_clock_digital_analogue_window_cp2_g3

0x1b09,	// (0x00001b09) popup_clock_digital_analogue_window_cp2_g4

0xd0b9,	// (0x0000d0b9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xe2f4,	// (0x0000e2f4) popup_clock_digital_analogue_window_cp2_g

0xd0c1,	// (0x0000d0c1) popup_clock_digital_analogue_window_cp2_t1

0xd0cf,	// (0x0000d0cf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xe2ff,	// (0x0000e2ff) popup_clock_digital_analogue_window_cp2_t

0x5c60,	// (0x00005c60) clock_digital_number_pane_cp10_g1

0x5c60,	// (0x00005c60) clock_digital_number_pane_cp10_g2

0x0001,

0xa130,	// (0x0000a130) clock_digital_number_pane_cp10_g

0x5c60,	// (0x00005c60) clock_digital_separator_pane_cp10_g1

0x5c60,	// (0x00005c60) clock_digital_separator_pane_cp10_g2

0x0001,

0xa130,	// (0x0000a130) clock_digital_separator_pane_cp10_g

0x7c26,	// (0x00007c26) uniindi_top_pane_g3

0x7c37,	// (0x00007c37) uniindi_top_pane_g4

0x839a,	// (0x0000839a) vkb2_row_keypad_pane_ParamLimits

0x839a,	// (0x0000839a) vkb2_row_keypad_pane

0x8671,	// (0x00008671) vkb2_cell_t_keypad_pane_ParamLimits

0x8671,	// (0x00008671) vkb2_cell_t_keypad_pane

0x867e,	// (0x0000867e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x867e,	// (0x0000867e) vkb2_cell_t_keypad_pane_cp08

0x868e,	// (0x0000868e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x868e,	// (0x0000868e) vkb2_cell_t_keypad_pane_cp09

0x869f,	// (0x0000869f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x869f,	// (0x0000869f) vkb2_cell_t_keypad_pane_cp01

0x86af,	// (0x000086af) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x86af,	// (0x000086af) vkb2_cell_t_keypad_pane_cp02

0x86bf,	// (0x000086bf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x86bf,	// (0x000086bf) vkb2_cell_t_keypad_pane_cp03

0x86cf,	// (0x000086cf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x86cf,	// (0x000086cf) vkb2_cell_t_keypad_pane_cp04

0x86df,	// (0x000086df) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x86df,	// (0x000086df) vkb2_cell_t_keypad_pane_cp05

0x86ef,	// (0x000086ef) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x86ef,	// (0x000086ef) vkb2_cell_t_keypad_pane_cp06

0x86ff,	// (0x000086ff) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x86ff,	// (0x000086ff) vkb2_cell_t_keypad_pane_cp07

0x870f,	// (0x0000870f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x870f,	// (0x0000870f) vkb2_cell_t_keypad_pane_cp10

0x60a0,	// (0x000060a0) vkb2_cell_t_keypad_pane_g1

0x8724,	// (0x00008724) vkb2_cell_t_keypad_pane_t1

0x0020,	// (0x00000020) popup_grid_graphic2_window

0xd6f5,	// (0x0000d6f5) aid_size_cell_graphic2_ParamLimits

0xd6f5,	// (0x0000d6f5) aid_size_cell_graphic2

0x3981,	// (0x00003981) bg_popup_window_pane_cp21_ParamLimits

0x3981,	// (0x00003981) bg_popup_window_pane_cp21

0xd727,	// (0x0000d727) graphic2_pages_pane_ParamLimits

0xd727,	// (0x0000d727) graphic2_pages_pane

0xd770,	// (0x0000d770) grid_graphic2_control_pane_ParamLimits

0xd770,	// (0x0000d770) grid_graphic2_control_pane

0xd79e,	// (0x0000d79e) grid_graphic2_pane_ParamLimits

0xd79e,	// (0x0000d79e) grid_graphic2_pane

0xd7fd,	// (0x0000d7fd) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x73f1,	// (0x000073f1) list_ai3_gene_pane_ParamLimits

0xcd6d,	// (0x0000cd6d) bg_popup_window_pane_cp19_ParamLimits

0x77be,	// (0x000077be) bg_touch_area_indi_pane_ParamLimits

0x77be,	// (0x000077be) bg_touch_area_indi_pane

0x77d4,	// (0x000077d4) bg_touch_area_indi_pane_cp01_ParamLimits

0x77d4,	// (0x000077d4) bg_touch_area_indi_pane_cp01

0x77ea,	// (0x000077ea) bg_touch_area_indi_pane_cp02_ParamLimits

0x77ea,	// (0x000077ea) bg_touch_area_indi_pane_cp02

0x7800,	// (0x00007800) bg_touch_area_indi_pane_cp03_ParamLimits

0x7800,	// (0x00007800) bg_touch_area_indi_pane_cp03

0x7816,	// (0x00007816) popup_slider_window_g1_ParamLimits

0x7832,	// (0x00007832) popup_slider_window_g2_ParamLimits

0x784e,	// (0x0000784e) popup_slider_window_g3_ParamLimits

0xe2d8,	// (0x0000e2d8) popup_slider_window_g_ParamLimits

0x78aa,	// (0x000078aa) popup_slider_window_t1_ParamLimits

0x791c,	// (0x0000791c) small_volume_slider_vertical_pane_ParamLimits

0xd7fd,	// (0x0000d7fd) cell_graphic2_pane_ParamLimits

0xd846,	// (0x0000d846) bg_button_pane_cp10_ParamLimits

0xd846,	// (0x0000d846) bg_button_pane_cp10

0xd857,	// (0x0000d857) bg_button_pane_cp11_ParamLimits

0xd857,	// (0x0000d857) bg_button_pane_cp11

0xd868,	// (0x0000d868) graphic2_pages_pane_g1_ParamLimits

0xd868,	// (0x0000d868) graphic2_pages_pane_g1

0xd883,	// (0x0000d883) graphic2_pages_pane_g2_ParamLimits

0xd883,	// (0x0000d883) graphic2_pages_pane_g2

0x0001,

0xe335,	// (0x0000e335) graphic2_pages_pane_g_ParamLimits

0xe335,	// (0x0000e335) graphic2_pages_pane_g

0xd89b,	// (0x0000d89b) graphic2_pages_pane_t1_ParamLimits

0xd89b,	// (0x0000d89b) graphic2_pages_pane_t1

0xd8b3,	// (0x0000d8b3) cell_graphic2_control_pane_ParamLimits

0xd8b3,	// (0x0000d8b3) cell_graphic2_control_pane

0xd8cd,	// (0x0000d8cd) cell_graphic2_pane_g1_ParamLimits

0xd8cd,	// (0x0000d8cd) cell_graphic2_pane_g1

0x5efd,	// (0x00005efd) cell_graphic2_pane_g2_ParamLimits

0x5efd,	// (0x00005efd) cell_graphic2_pane_g2

0xd8da,	// (0x0000d8da) cell_graphic2_pane_g3_ParamLimits

0xd8da,	// (0x0000d8da) cell_graphic2_pane_g3

0x5f0a,	// (0x00005f0a) cell_graphic2_pane_g4_ParamLimits

0x5f0a,	// (0x00005f0a) cell_graphic2_pane_g4

0xd8e7,	// (0x0000d8e7) cell_graphic2_pane_g5_ParamLimits

0xd8e7,	// (0x0000d8e7) cell_graphic2_pane_g5

0x0004,

0xe33a,	// (0x0000e33a) cell_graphic2_pane_g_ParamLimits

0xe33a,	// (0x0000e33a) cell_graphic2_pane_g

0xd907,	// (0x0000d907) cell_graphic2_pane_t1_ParamLimits

0xd907,	// (0x0000d907) cell_graphic2_pane_t1

0x40e2,	// (0x000040e2) grid_highlight_pane_cp11_ParamLimits

0x40e2,	// (0x000040e2) grid_highlight_pane_cp11

0x11e8,	// (0x000011e8) bg_button_pane_cp05

0xd91e,	// (0x0000d91e) cell_graphic2_control_pane_g1

0x5c60,	// (0x00005c60) bg_touch_area_indi_pane_g1

0x893e,	// (0x0000893e) aid_cmod_rocker_key_size

0x8948,	// (0x00008948) aid_cmode_itu_key_size

0x8952,	// (0x00008952) main_cmode_video_pane

0x895a,	// (0x0000895a) main_comp_mode_itu_pane

0x8964,	// (0x00008964) main_comp_mode_rocker_pane

0x896c,	// (0x0000896c) cell_cmode_rocker_pane_ParamLimits

0x896c,	// (0x0000896c) cell_cmode_rocker_pane

0x897e,	// (0x0000897e) cell_cmode_itu_pane_ParamLimits

0x897e,	// (0x0000897e) cell_cmode_itu_pane

0x11e8,	// (0x000011e8) bg_button_pane_cp06_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane_cp06

0x60a0,	// (0x000060a0) cell_cmode_rocker_pane_g1_ParamLimits

0x60a0,	// (0x000060a0) cell_cmode_rocker_pane_g1

0x7a90,	// (0x00007a90) cell_cmode_rocker_pane_g2_ParamLimits

0x7a90,	// (0x00007a90) cell_cmode_rocker_pane_g2

0x0001,

0xa39a,	// (0x0000a39a) cell_cmode_rocker_pane_g_ParamLimits

0xa39a,	// (0x0000a39a) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x8993,	// (0x00008993) cell_cmode_itu_pane_g1

0x899c,	// (0x0000899c) cell_cmode_itu_pane_t1

0x89aa,	// (0x000089aa) cell_cmode_itu_pane_t2

0x0001,

0xa39f,	// (0x0000a39f) cell_cmode_itu_pane_t

0x7ca8,	// (0x00007ca8) aid_touch_ctrl_left

0x7cb0,	// (0x00007cb0) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xd92b,	// (0x0000d92b) aid_cmod_rocker_key_size_cp

0xd935,	// (0x0000d935) aid_cmode_itu_key_size_cp

0x89cc,	// (0x000089cc) compa_mode_pane_g1

0x89d4,	// (0x000089d4) compa_mode_pane_g2

0x89dc,	// (0x000089dc) compa_mode_pane_g3

0x0002,

0xa3a4,	// (0x0000a3a4) compa_mode_pane_g

0xd93f,	// (0x0000d93f) main_comp_mode_itu_pane_cp

0xd949,	// (0x0000d949) main_comp_mode_rocker_pane_cp

0xd953,	// (0x0000d953) cell_cmode_itu_pane_cp_ParamLimits

0xd953,	// (0x0000d953) cell_cmode_itu_pane_cp

0xd968,	// (0x0000d968) cell_cmode_rocker_pane_cp_ParamLimits

0xd968,	// (0x0000d968) cell_cmode_rocker_pane_cp

0x11e8,	// (0x000011e8) bg_button_pane_cp06_cp_ParamLimits

0x11e8,	// (0x000011e8) bg_button_pane_cp06_cp

0x60a0,	// (0x000060a0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x60a0,	// (0x000060a0) cell_cmode_rocker_pane_g1_cp

0x5c60,	// (0x00005c60) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xd97a,	// (0x0000d97a) cell_cmode_itu_pane_g1_cp

0xd983,	// (0x0000d983) cell_cmode_itu_pane_t1_cp

0xd991,	// (0x0000d991) cell_cmode_itu_pane_t2_cp

0xc287,	// (0x0000c287) settings_code_pane_cp2

0x0474,	// (0x00000474) bg_popup_window_pane_cp3_ParamLimits

0x097d,	// (0x0000097d) heading_pane_cp3_ParamLimits

0x0989,	// (0x00000989) listscroll_popup_graphic_pane_ParamLimits

0x5cc9,	// (0x00005cc9) fep_hwr_aid_pane_ParamLimits

0x7994,	// (0x00007994) aid_touch_sctrl_top_ParamLimits

0x79a1,	// (0x000079a1) sctrl_sk_top_pane_g1_ParamLimits

0x60a0,	// (0x000060a0) sctrl_sk_top_pane_g2_ParamLimits

0xa2df,	// (0x0000a2df) sctrl_sk_top_pane_g_ParamLimits

0x79ae,	// (0x000079ae) sctrl_sk_top_pane_t1_ParamLimits

0x7994,	// (0x00007994) aid_touch_sctrl_bottom_ParamLimits

0x79ae,	// (0x000079ae) sctrl_sk_bottom_pane_t1_ParamLimits

0x7bf2,	// (0x00007bf2) aid_area_touch_clock

0xd4de,	// (0x0000d4de) aid_vkb2_area_top_pane_cell_ParamLimits

0xd4de,	// (0x0000d4de) aid_vkb2_area_top_pane_cell

0xd589,	// (0x0000d589) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd589,	// (0x0000d589) aid_vkb2_area_bottom_pane_cell

0x84c7,	// (0x000084c7) popup_char_count_window

0x8a40,	// (0x00008a40) popup_char_count_window_g1

0x8a49,	// (0x00008a49) popup_char_count_window_g2

0x8a52,	// (0x00008a52) popup_char_count_window_g3

0x0002,

0xa3ab,	// (0x0000a3ab) popup_char_count_window_g

0x8a5b,	// (0x00008a5b) popup_char_count_window_t1

0x817f,	// (0x0000817f) popup_fep_char_preview_window_ParamLimits

0x817f,	// (0x0000817f) popup_fep_char_preview_window

0xd4fe,	// (0x0000d4fe) vkb2_top_candi_pane_ParamLimits

0xd4fe,	// (0x0000d4fe) vkb2_top_candi_pane

0xd99f,	// (0x0000d99f) cell_vkb2_top_candi_pane_ParamLimits

0xd99f,	// (0x0000d99f) cell_vkb2_top_candi_pane

0x3981,	// (0x00003981) bg_popup_fep_char_preview_window_ParamLimits

0x3981,	// (0x00003981) bg_popup_fep_char_preview_window

0x8aa2,	// (0x00008aa2) popup_fep_char_preview_window_t1_ParamLimits

0x8aa2,	// (0x00008aa2) popup_fep_char_preview_window_t1

0x8adc,	// (0x00008adc) bg_popup_fep_char_preview_window_g1

0x8ae4,	// (0x00008ae4) bg_popup_fep_char_preview_window_g2

0x8aec,	// (0x00008aec) bg_popup_fep_char_preview_window_g3

0x8af4,	// (0x00008af4) bg_popup_fep_char_preview_window_g4

0x8afc,	// (0x00008afc) bg_popup_fep_char_preview_window_g5

0x8b04,	// (0x00008b04) bg_popup_fep_char_preview_window_g6

0x8b0c,	// (0x00008b0c) bg_popup_fep_char_preview_window_g7

0x8b14,	// (0x00008b14) bg_popup_fep_char_preview_window_g8

0x8b1c,	// (0x00008b1c) bg_popup_fep_char_preview_window_g9

0x0008,

0xa3b2,	// (0x0000a3b2) bg_popup_fep_char_preview_window_g

0x60a0,	// (0x000060a0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x60a0,	// (0x000060a0) cell_vkb2_top_candi_pane_g1

0x63f7,	// (0x000063f7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x63f7,	// (0x000063f7) cell_vkb2_top_candi_pane_g2

0x6418,	// (0x00006418) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6418,	// (0x00006418) cell_vkb2_top_candi_pane_g3

0x8b24,	// (0x00008b24) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8b24,	// (0x00008b24) cell_vkb2_top_candi_pane_g4

0x8b45,	// (0x00008b45) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8b45,	// (0x00008b45) cell_vkb2_top_candi_pane_g5

0x7a90,	// (0x00007a90) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7a90,	// (0x00007a90) cell_vkb2_top_candi_pane_g6

0x0005,

0xa3c5,	// (0x0000a3c5) cell_vkb2_top_candi_pane_g_ParamLimits

0xa3c5,	// (0x0000a3c5) cell_vkb2_top_candi_pane_g

0x8b66,	// (0x00008b66) cell_vkb2_top_candi_pane_t1

0x47ce,	// (0x000047ce) aid_size_touch_slider_mark_ParamLimits

0x47ce,	// (0x000047ce) aid_size_touch_slider_mark

0xd75b,	// (0x0000d75b) grid_graphic2_catg_pane_ParamLimits

0xd75b,	// (0x0000d75b) grid_graphic2_catg_pane

0xd7d2,	// (0x0000d7d2) popup_grid_graphic2_window_t1_ParamLimits

0xd7d2,	// (0x0000d7d2) popup_grid_graphic2_window_t1

0xd7e7,	// (0x0000d7e7) popup_grid_graphic2_window_t2_ParamLimits

0xd7e7,	// (0x0000d7e7) popup_grid_graphic2_window_t2

0x0001,

0xe330,	// (0x0000e330) popup_grid_graphic2_window_t_ParamLimits

0xe330,	// (0x0000e330) popup_grid_graphic2_window_t

0x11e8,	// (0x000011e8) bg_button_pane_cp05_ParamLimits

0xd91e,	// (0x0000d91e) cell_graphic2_control_pane_g1_ParamLimits

0x7c6e,	// (0x00007c6e) cell_graphic2_catg_pane_ParamLimits

0x7c6e,	// (0x00007c6e) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xd9e9,	// (0x0000d9e9) cell_graphic2_catg_pane_g1

0x7bbe,	// (0x00007bbe) cell_tb_ext_pane_t1_ParamLimits

0x8557,	// (0x00008557) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8557,	// (0x00008557) vkb2_top_cell_right_narrow_pane

0x856f,	// (0x0000856f) vkb2_top_cell_right_wide_pane_ParamLimits

0x856f,	// (0x0000856f) vkb2_top_cell_right_wide_pane

0x5cbb,	// (0x00005cbb) bg_vkb2_func_pane_ParamLimits

0x5cbb,	// (0x00005cbb) bg_vkb2_func_pane

0x85e0,	// (0x000085e0) vkb2_top_cell_left_pane_g1_ParamLimits

0x5cbb,	// (0x00005cbb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5cbb,	// (0x00005cbb) bg_vkb2_fuc_pane_cp03

0x8655,	// (0x00008655) vkb2_cell_bottom_grid_pane_g1_ParamLimits

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

0xa3d2,	// (0x0000a3d2) bg_vkb2_func_pane_g

0x5cbb,	// (0x00005cbb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5cbb,	// (0x00005cbb) bg_vkb2_fuc_pane_cp01

0x85e0,	// (0x000085e0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x85e0,	// (0x000085e0) vkb2_top_cell_right_wide_pane_g1

0x5cbb,	// (0x00005cbb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5cbb,	// (0x00005cbb) bg_vkb2_fuc_pane_cp02

0x8655,	// (0x00008655) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8655,	// (0x00008655) vkb2_top_cell_right_narrow_pane_g1

0xccbb,	// (0x0000ccbb) aid_touch_area_decrease_ParamLimits

0xccbb,	// (0x0000ccbb) aid_touch_area_decrease

0xcce9,	// (0x0000cce9) aid_touch_area_increase_ParamLimits

0xcce9,	// (0x0000cce9) aid_touch_area_increase

0xcd11,	// (0x0000cd11) aid_touch_area_mute_ParamLimits

0xcd11,	// (0x0000cd11) aid_touch_area_mute

0xcd39,	// (0x0000cd39) aid_touch_area_slider_ParamLimits

0xcd39,	// (0x0000cd39) aid_touch_area_slider

0xcd79,	// (0x0000cd79) popup_slider_window_g4_ParamLimits

0xcd79,	// (0x0000cd79) popup_slider_window_g4

0xcda1,	// (0x0000cda1) popup_slider_window_g5_ParamLimits

0xcda1,	// (0x0000cda1) popup_slider_window_g5

0xcdd5,	// (0x0000cdd5) popup_slider_window_g6_ParamLimits

0xcdd5,	// (0x0000cdd5) popup_slider_window_g6

0x78d6,	// (0x000078d6) popup_slider_window_t2_ParamLimits

0x78d6,	// (0x000078d6) popup_slider_window_t2

0x0001,

0xa2d3,	// (0x0000a2d3) popup_slider_window_t_ParamLimits

0xa2d3,	// (0x0000a2d3) popup_slider_window_t

0xcdf1,	// (0x0000cdf1) slider_pane_ParamLimits

0xcdf1,	// (0x0000cdf1) slider_pane

0x8b97,	// (0x00008b97) slider_pane_g1_ParamLimits

0x8b97,	// (0x00008b97) slider_pane_g1

0x8bab,	// (0x00008bab) slider_pane_g2_ParamLimits

0x8bab,	// (0x00008bab) slider_pane_g2

0x8bc1,	// (0x00008bc1) slider_pane_g3_ParamLimits

0x8bc1,	// (0x00008bc1) slider_pane_g3

0x0003,

0xa3e5,	// (0x0000a3e5) slider_pane_g_ParamLimits

0xa3e5,	// (0x0000a3e5) slider_pane_g

0xb8f7,	// (0x0000b8f7) popup_tb_float_extension_window_ParamLimits

0xb8f7,	// (0x0000b8f7) popup_tb_float_extension_window

0x8bed,	// (0x00008bed) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x8bf8,	// (0x00008bf8) grid_tb_float_ext_pane

0x8c00,	// (0x00008c00) cell_tb_float_ext_pane_ParamLimits

0x8c00,	// (0x00008c00) cell_tb_float_ext_pane

0x8c18,	// (0x00008c18) cell_tb_float_ext_pane_g1

0x8c21,	// (0x00008c21) grid_highlight_pane_cp12

0xc676,	// (0x0000c676) cell_last_hwr_side_pane_ParamLimits

0xc676,	// (0x0000c676) cell_last_hwr_side_pane

0x5c60,	// (0x00005c60) cell_last_hwr_side_pane_g1

0x8c2a,	// (0x00008c2a) cell_last_hwr_side_pane_g2

0x0001,

0xa3ee,	// (0x0000a3ee) cell_last_hwr_side_pane_g

0xd65d,	// (0x0000d65d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd65d,	// (0x0000d65d) vkb2_area_bottom_space_btn_pane

0x60a0,	// (0x000060a0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8724,	// (0x00008724) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8b66,	// (0x00008b66) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8c33,	// (0x00008c33) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8c33,	// (0x00008c33) vkb2_area_bottom_space_btn_pane_g1

0x8c69,	// (0x00008c69) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8c69,	// (0x00008c69) vkb2_area_bottom_space_btn_pane_g2

0x8c9f,	// (0x00008c9f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8c9f,	// (0x00008c9f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xa3f3,	// (0x0000a3f3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xa3f3,	// (0x0000a3f3) vkb2_area_bottom_space_btn_pane_g

0x5d78,	// (0x00005d78) cel_fep_hwr_func_pane_ParamLimits

0x5d78,	// (0x00005d78) cel_fep_hwr_func_pane

0xc64b,	// (0x0000c64b) cell_hwr_side_button_pane_ParamLimits

0xc64b,	// (0x0000c64b) cell_hwr_side_button_pane

0x7bf2,	// (0x00007bf2) aid_area_touch_clock_ParamLimits

0x07a5,	// (0x000007a5) bg_uniindi_top_pane_ParamLimits

0x7c04,	// (0x00007c04) uniindi_top_pane_g1_ParamLimits

0x7c1a,	// (0x00007c1a) uniindi_top_pane_g2_ParamLimits

0x7c26,	// (0x00007c26) uniindi_top_pane_g3_ParamLimits

0x7c37,	// (0x00007c37) uniindi_top_pane_g4_ParamLimits

0xa30b,	// (0x0000a30b) uniindi_top_pane_g_ParamLimits

0x7c44,	// (0x00007c44) uniindi_top_pane_t1_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp01

0x8ce5,	// (0x00008ce5) cel_fep_hwr_func_pane_g1_ParamLimits

0x8ce5,	// (0x00008ce5) cel_fep_hwr_func_pane_g1

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02_ParamLimits

0x07a5,	// (0x000007a5) bg_vkb2_func_pane_cp02

0x8ce5,	// (0x00008ce5) cell_hwr_side_button_pane_g1_ParamLimits

0x8ce5,	// (0x00008ce5) cell_hwr_side_button_pane_g1

0x3026,	// (0x00003026) status_pane_g4_ParamLimits

0x3026,	// (0x00003026) status_pane_g4

0x303e,	// (0x0000303e) status_pane_t1

0x5a52,	// (0x00005a52) form2_midp_gauge_slider_cont_pane

0x5a5a,	// (0x00005a5a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc59f,	// (0x0000c59f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc5b1,	// (0x0000c5b1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xe27c,	// (0x0000e27c) form2_midp_gauge_slider_pane_t_ParamLimits

0x5a90,	// (0x00005a90) form2_midp_slider_pane_ParamLimits

0x813f,	// (0x0000813f) aid_size_cell_func_vkb2_ParamLimits

0x813f,	// (0x0000813f) aid_size_cell_func_vkb2

0x8bd9,	// (0x00008bd9) slider_pane_g4_ParamLimits

0x8bd9,	// (0x00008bd9) slider_pane_g4

0xd9f2,	// (0x0000d9f2) form2_midp_gauge_slider_pane_t2_cp01

0xda00,	// (0x0000da00) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xda00,	// (0x0000da00) form2_midp_gauge_slider_pane_t3_cp01

0x8d1e,	// (0x00008d1e) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x8d52,	// (0x00008d52) navi_smil_pane_g1

0x8d5a,	// (0x00008d5a) navi_smil_pane_t1

0x8d27,	// (0x00008d27) form2_midp_slider_pane_g1

0x8d30,	// (0x00008d30) form2_midp_slider_pane_g2

0x8d38,	// (0x00008d38) form2_midp_slider_pane_g3

0x8d27,	// (0x00008d27) form2_midp_slider_pane_g4

0xda1d,	// (0x0000da1d) form2_midp_slider_pane_g5

0x0004,

0xe345,	// (0x0000e345) form2_midp_slider_pane_g

0x8cd5,	// (0x00008cd5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8cd5,	// (0x00008cd5) vkb2_area_bottom_space_btn_pane_g4

0xba99,	// (0x0000ba99) lc0_navi_pane_ParamLimits

0xba99,	// (0x0000ba99) lc0_navi_pane

0xbb03,	// (0x0000bb03) lc0_stat_indi_pane_ParamLimits

0xbb03,	// (0x0000bb03) lc0_stat_indi_pane

0xbb18,	// (0x0000bb18) ls0_title_pane_ParamLimits

0xbb18,	// (0x0000bb18) ls0_title_pane

0x11e8,	// (0x000011e8) bg_popup_sub_pane_cp14_ParamLimits

0x7bd9,	// (0x00007bd9) list_uniindi_pane_ParamLimits

0x7be5,	// (0x00007be5) uniindi_top_pane_ParamLimits

0x7c80,	// (0x00007c80) list_single_uniindi_pane_g1_ParamLimits

0x7c93,	// (0x00007c93) list_single_uniindi_pane_t1_ParamLimits

0xda26,	// (0x0000da26) lc0_stat_clock_pane_ParamLimits

0xda26,	// (0x0000da26) lc0_stat_clock_pane

0xda33,	// (0x0000da33) lc0_stat_indi_pane_g1_ParamLimits

0xda33,	// (0x0000da33) lc0_stat_indi_pane_g1

0xda40,	// (0x0000da40) lc0_stat_indi_pane_g2_ParamLimits

0xda40,	// (0x0000da40) lc0_stat_indi_pane_g2

0x0001,

0xe350,	// (0x0000e350) lc0_stat_indi_pane_g_ParamLimits

0xe350,	// (0x0000e350) lc0_stat_indi_pane_g

0xda4d,	// (0x0000da4d) lc0_uni_indicator_pane_ParamLimits

0xda4d,	// (0x0000da4d) lc0_uni_indicator_pane

0x8d9c,	// (0x00008d9c) ls0_title_pane_g1_ParamLimits

0x8d9c,	// (0x00008d9c) ls0_title_pane_g1

0xda5a,	// (0x0000da5a) ls0_title_pane_t1_ParamLimits

0xda5a,	// (0x0000da5a) ls0_title_pane_t1

0xda88,	// (0x0000da88) lc0_uni_indicator_pane_g1_ParamLimits

0xda88,	// (0x0000da88) lc0_uni_indicator_pane_g1

0x8df8,	// (0x00008df8) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x8e06,	// (0x00008e06) ai5_sk_pane_ParamLimits

0x8e06,	// (0x00008e06) ai5_sk_pane

0xda9d,	// (0x0000da9d) cell_ai5_widget_pane_ParamLimits

0xda9d,	// (0x0000da9d) cell_ai5_widget_pane

0xdb04,	// (0x0000db04) aid_size_cell_widget_grid

0x8e82,	// (0x00008e82) bg_ai5_widget_pane_ParamLimits

0x8e82,	// (0x00008e82) bg_ai5_widget_pane

0xdb33,	// (0x0000db33) cell_ai5_widget_pane_g2

0xdb43,	// (0x0000db43) cell_ai5_widget_pane_g3

0xdb57,	// (0x0000db57) cell_ai5_widget_pane_g4

0xdb63,	// (0x0000db63) cell_ai5_widget_pane_g5

0xdb6f,	// (0x0000db6f) cell_ai5_widget_pane_g6

0xdb7b,	// (0x0000db7b) cell_ai5_widget_pane_g7

0xdbc3,	// (0x0000dbc3) cell_ai5_widget_pane_t1_ParamLimits

0xdbc3,	// (0x0000dbc3) cell_ai5_widget_pane_t1

0xdbe0,	// (0x0000dbe0) cell_ai5_widget_pane_t2_ParamLimits

0xdbe0,	// (0x0000dbe0) cell_ai5_widget_pane_t2

0xdbf8,	// (0x0000dbf8) cell_ai5_widget_pane_t3_ParamLimits

0xdbf8,	// (0x0000dbf8) cell_ai5_widget_pane_t3

0xdc10,	// (0x0000dc10) cell_ai5_widget_pane_t4_ParamLimits

0xdc10,	// (0x0000dc10) cell_ai5_widget_pane_t4

0xdc2a,	// (0x0000dc2a) cell_ai5_widget_pane_t5_ParamLimits

0xdc2a,	// (0x0000dc2a) cell_ai5_widget_pane_t5

0x8fc0,	// (0x00008fc0) cell_ai5_widget_pane_t6_ParamLimits

0x8fc0,	// (0x00008fc0) cell_ai5_widget_pane_t6

0x8fd2,	// (0x00008fd2) cell_ai5_widget_pane_t7_ParamLimits

0x8fd2,	// (0x00008fd2) cell_ai5_widget_pane_t7

0xdc49,	// (0x0000dc49) cell_ai5_widget_pane_t8_ParamLimits

0xdc49,	// (0x0000dc49) cell_ai5_widget_pane_t8

0x0009,

0xe36a,	// (0x0000e36a) cell_ai5_widget_pane_t_ParamLimits

0xe36a,	// (0x0000e36a) cell_ai5_widget_pane_t

0xdc91,	// (0x0000dc91) grid_ai5_widget_pane

0x11e8,	// (0x000011e8) highlight_cell_ai5_widget_pane_ParamLimits

0x11e8,	// (0x000011e8) highlight_cell_ai5_widget_pane

0xdca5,	// (0x0000dca5) ai5_sk_left_pane

0xdcaf,	// (0x0000dcaf) ai5_sk_middle_pane

0xdcb9,	// (0x0000dcb9) ai5_sk_right_pane

0x9067,	// (0x00009067) bg_ai5_widget_pane_g1_ParamLimits

0x9067,	// (0x00009067) bg_ai5_widget_pane_g1

0x9073,	// (0x00009073) bg_ai5_widget_pane_g2_ParamLimits

0x9073,	// (0x00009073) bg_ai5_widget_pane_g2

0x907f,	// (0x0000907f) bg_ai5_widget_pane_g3_ParamLimits

0x907f,	// (0x0000907f) bg_ai5_widget_pane_g3

0x908b,	// (0x0000908b) bg_ai5_widget_pane_g4_ParamLimits

0x908b,	// (0x0000908b) bg_ai5_widget_pane_g4

0x9097,	// (0x00009097) bg_ai5_widget_pane_g5_ParamLimits

0x9097,	// (0x00009097) bg_ai5_widget_pane_g5

0x90a3,	// (0x000090a3) bg_ai5_widget_pane_g6_ParamLimits

0x90a3,	// (0x000090a3) bg_ai5_widget_pane_g6

0x90af,	// (0x000090af) bg_ai5_widget_pane_g7_ParamLimits

0x90af,	// (0x000090af) bg_ai5_widget_pane_g7

0x90bb,	// (0x000090bb) bg_ai5_widget_pane_g8_ParamLimits

0x90bb,	// (0x000090bb) bg_ai5_widget_pane_g8

0x90c7,	// (0x000090c7) bg_ai5_widget_pane_g9_ParamLimits

0x90c7,	// (0x000090c7) bg_ai5_widget_pane_g9

0x0008,

0xa436,	// (0x0000a436) bg_ai5_widget_pane_g_ParamLimits

0xa436,	// (0x0000a436) bg_ai5_widget_pane_g

0xdcc3,	// (0x0000dcc3) cell_shortcut_ai5_widget_pane_ParamLimits

0xdcc3,	// (0x0000dcc3) cell_shortcut_ai5_widget_pane

0x05de,	// (0x000005de) bg_cell_shortcut_ai5_widget_pane

0xdcd4,	// (0x0000dcd4) cell_grid_ai5_widget_pane_g1

0x9109,	// (0x00009109) highlight_cell_shortcut_ai5_widget_pane

0x321b,	// (0x0000321b) ai5_sk_left_pane_g1

0x9111,	// (0x00009111) ai5_sk_left_pane_g2

0x9119,	// (0x00009119) ai5_sk_left_pane_g3

0x9121,	// (0x00009121) ai5_sk_left_pane_g4

0x0003,

0xa449,	// (0x0000a449) ai5_sk_left_pane_g

0x9129,	// (0x00009129) ai5_sk_left_pane_t1

0x3213,	// (0x00003213) ai5_sk_right_pane_g1

0x9137,	// (0x00009137) ai5_sk_right_pane_g2

0x913f,	// (0x0000913f) ai5_sk_right_pane_g3

0x9147,	// (0x00009147) ai5_sk_right_pane_g4

0x0003,

0xa452,	// (0x0000a452) ai5_sk_right_pane_g

0x914f,	// (0x0000914f) ai5_sk_right_pane_t1

0x3213,	// (0x00003213) ai5_sk_middle_pane_g1

0x321b,	// (0x0000321b) ai5_sk_middle_pane_g2

0x3233,	// (0x00003233) ai5_sk_middle_pane_g3

0x913f,	// (0x0000913f) ai5_sk_middle_pane_g4

0x9119,	// (0x00009119) ai5_sk_middle_pane_g5

0x915d,	// (0x0000915d) ai5_sk_middle_pane_g6

0xdcdd,	// (0x0000dcdd) ai5_sk_middle_pane_g7

0x0006,

0xe37f,	// (0x0000e37f) ai5_sk_middle_pane_g

0xb997,	// (0x0000b997) aid_touch_area_size_lc0_ParamLimits

0xb997,	// (0x0000b997) aid_touch_area_size_lc0

0x6439,	// (0x00006439) cell_hwr_candidate_pane_t1_ParamLimits

0x2d29,	// (0x00002d29) aid_touch_navi_pane

0xbc04,	// (0x0000bc04) status_dt_navi_pane_ParamLimits

0xbc04,	// (0x0000bc04) status_dt_navi_pane

0xbc1c,	// (0x0000bc1c) status_dt_sta_pane_ParamLimits

0xbc1c,	// (0x0000bc1c) status_dt_sta_pane

0xdce5,	// (0x0000dce5) dt_sta_controll_pane

0xdcf2,	// (0x0000dcf2) dt_sta_indi_pane

0xdcff,	// (0x0000dcff) dt_sta_title_pane

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane_ParamLimits

0x07a5,	// (0x000007a5) bg_dt_sta_indi_pane

0xdd11,	// (0x0000dd11) dt_sta_battery_pane

0xdd19,	// (0x0000dd19) dt_sta_indi_pane_g1

0xdd22,	// (0x0000dd22) dt_sta_indi_pane_g2

0xdd2b,	// (0x0000dd2b) dt_sta_indi_pane_g3

0x0002,

0xe38e,	// (0x0000e38e) dt_sta_indi_pane_g

0xdd34,	// (0x0000dd34) dt_sta_signal_pane

0x11e8,	// (0x000011e8) bg_dt_sta_title_pane_ParamLimits

0x11e8,	// (0x000011e8) bg_dt_sta_title_pane

0xdd3d,	// (0x0000dd3d) dt_sta_title_pane_g1

0xdd45,	// (0x0000dd45) dt_sta_title_pane_t1_ParamLimits

0xdd45,	// (0x0000dd45) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0xdd5a,	// (0x0000dd5a) dt_sta_controll_pane_g1

0xdd63,	// (0x0000dd63) bg_dt_sta_title_pane_g1

0xdd6c,	// (0x0000dd6c) bg_dt_sta_title_pane_g2

0xdd75,	// (0x0000dd75) bg_dt_sta_title_pane_g3

0x0002,

0xe395,	// (0x0000e395) bg_dt_sta_title_pane_g

0x5c60,	// (0x00005c60) bg_dt_sta_indi_pane_g1

0xdd7e,	// (0x0000dd7e) dt_sta_signal_pane_g1

0xdd86,	// (0x0000dd86) dt_sta_signal_pane_g2

0x0001,

0xe39c,	// (0x0000e39c) dt_sta_signal_pane_g

0x921b,	// (0x0000921b) dt_sta_battery_pane_g1

0x9224,	// (0x00009224) dt_sta_battery_pane_t1

0x5c60,	// (0x00005c60) bg_dt_sta_control_pane_g1

0x1ca7,	// (0x00001ca7) fep_china_uni_eep_pane

0x1caf,	// (0x00001caf) fep_china_uni_entry_pane_ParamLimits

0x1cbf,	// (0x00001cbf) popup_fep_china_uni_window_g1_ParamLimits

0x1ccf,	// (0x00001ccf) popup_fep_china_uni_window_g2_ParamLimits

0x1ccf,	// (0x00001ccf) popup_fep_china_uni_window_g2

0x0001,

0x9d37,	// (0x00009d37) popup_fep_china_uni_window_g_ParamLimits

0x9d37,	// (0x00009d37) popup_fep_china_uni_window_g

0x9233,	// (0x00009233) fep_china_uni_eep_pane_g1

0x923b,	// (0x0000923b) fep_china_uni_eep_pane_t1

0x8d49,	// (0x00008d49) aid_touch_area_size_smil_player

0x2e60,	// (0x00002e60) lc0_clock_pane

0x3032,	// (0x00003032) status_pane_g5_ParamLimits

0x3032,	// (0x00003032) status_pane_g5

0xb52b,	// (0x0000b52b) popup_keymap_window

0x2ffa,	// (0x00002ffa) status_icon_pane

0xdb43,	// (0x0000db43) cell_ai5_widget_pane_g3_ParamLimits

0xdb57,	// (0x0000db57) cell_ai5_widget_pane_g4_ParamLimits

0xdb63,	// (0x0000db63) cell_ai5_widget_pane_g5_ParamLimits

0xdb87,	// (0x0000db87) cell_ai5_widget_pane_g8_ParamLimits

0xdb87,	// (0x0000db87) cell_ai5_widget_pane_g8

0xdb9b,	// (0x0000db9b) cell_ai5_widget_pane_g9_ParamLimits

0xdb9b,	// (0x0000db9b) cell_ai5_widget_pane_g9

0xdbaf,	// (0x0000dbaf) cell_ai5_widget_pane_g10_ParamLimits

0xdbaf,	// (0x0000dbaf) cell_ai5_widget_pane_g10

0x924a,	// (0x0000924a) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x9252,	// (0x00009252) popup_keymap_window_t1

0xb27f,	// (0x0000b27f) control_pane_g6_ParamLimits

0xb27f,	// (0x0000b27f) control_pane_g6

0xb28c,	// (0x0000b28c) control_pane_g7_ParamLimits

0xb28c,	// (0x0000b28c) control_pane_g7

0xb299,	// (0x0000b299) control_pane_g8_ParamLimits

0xb299,	// (0x0000b299) control_pane_g8

0xdce5,	// (0x0000dce5) dt_sta_controll_pane_ParamLimits

0xdcf2,	// (0x0000dcf2) dt_sta_indi_pane_ParamLimits

0xdcff,	// (0x0000dcff) dt_sta_title_pane_ParamLimits

0x0c04,	// (0x00000c04) aid_size_touch_scroll_bar_cale

0x026c,	// (0x0000026c) popup_discreet_window_ParamLimits

0x026c,	// (0x0000026c) popup_discreet_window

0xa5e2,	// (0x0000a5e2) popup_sk_window

0x3981,	// (0x00003981) bg_popup_sub_pane_cp28_ParamLimits

0x3981,	// (0x00003981) bg_popup_sub_pane_cp28

0x9260,	// (0x00009260) popup_discreet_window_g1_ParamLimits

0x9260,	// (0x00009260) popup_discreet_window_g1

0x9280,	// (0x00009280) popup_discreet_window_t1_ParamLimits

0x9280,	// (0x00009280) popup_discreet_window_t1

0x929e,	// (0x0000929e) popup_discreet_window_t2_ParamLimits

0x929e,	// (0x0000929e) popup_discreet_window_t2

0x0002,

0xa47d,	// (0x0000a47d) popup_discreet_window_t_ParamLimits

0xa47d,	// (0x0000a47d) popup_discreet_window_t

0x92f0,	// (0x000092f0) popup_sk_window_g1

0x92f9,	// (0x000092f9) popup_sk_window_g2

0x0001,

0xa484,	// (0x0000a484) popup_sk_window_g

0x9302,	// (0x00009302) popup_sk_window_t1

0x9310,	// (0x00009310) popup_sk_window_t1_copy1

0xdb33,	// (0x0000db33) cell_ai5_widget_pane_g2_ParamLimits

0xdc5b,	// (0x0000dc5b) cell_ai5_widget_pane_t9_ParamLimits

0xdc5b,	// (0x0000dc5b) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xdd8e,	// (0x0000dd8e) aid_fshwr2_btn_pane

0xdd96,	// (0x0000dd96) aid_fshwr2_syb_pane

0xdd9e,	// (0x0000dd9e) aid_fshwr2_txt_pane

0xdda6,	// (0x0000dda6) fshwr2_func_candi_pane

0xddae,	// (0x0000ddae) fshwr2_hwr_syb_pane

0xddb6,	// (0x0000ddb6) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xddbe,	// (0x0000ddbe) fshwr2_icf_pane_t1_ParamLimits

0xddbe,	// (0x0000ddbe) fshwr2_icf_pane_t1

0x5c60,	// (0x00005c60) fshwr2_func_candi_pane_g1

0x9377,	// (0x00009377) fshwr2_func_candi_row_pane_ParamLimits

0x9377,	// (0x00009377) fshwr2_func_candi_row_pane

0xddd6,	// (0x0000ddd6) cell_fshwr2_syb_pane_ParamLimits

0xddd6,	// (0x0000ddd6) cell_fshwr2_syb_pane

0x60a0,	// (0x000060a0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x60a0,	// (0x000060a0) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0x939f,	// (0x0000939f) fshwr2_func_candi_cell_pane_ParamLimits

0x939f,	// (0x0000939f) fshwr2_func_candi_cell_pane

0x93ca,	// (0x000093ca) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x93ca,	// (0x000093ca) fshwr2_func_candi_cell_bg_pane

0x93e4,	// (0x000093e4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x93e4,	// (0x000093e4) fshwr2_func_candi_cell_pane_g1

0x9404,	// (0x00009404) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9404,	// (0x00009404) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x22d6,	// (0x000022d6) cell_fshwr2_syb_bg_pane

0xdded,	// (0x0000dded) cell_fshwr2_syb_bg_pane_g1

0xddf5,	// (0x0000ddf5) cell_fshwr2_syb_bg_pane_t1

0x11e8,	// (0x000011e8) main_tmo_pane

0xc084,	// (0x0000c084) uni_indicator_pane_g1_ParamLimits

0xc099,	// (0x0000c099) uni_indicator_pane_g2_ParamLimits

0xc0af,	// (0x0000c0af) uni_indicator_pane_g3_ParamLimits

0x45c0,	// (0x000045c0) uni_indicator_pane_g4_ParamLimits

0x45c0,	// (0x000045c0) uni_indicator_pane_g4

0x45d4,	// (0x000045d4) uni_indicator_pane_g5_ParamLimits

0x45d4,	// (0x000045d4) uni_indicator_pane_g5

0x45e8,	// (0x000045e8) uni_indicator_pane_g6_ParamLimits

0x45e8,	// (0x000045e8) uni_indicator_pane_g6

0xe1ec,	// (0x0000e1ec) uni_indicator_pane_g_ParamLimits

0xcc9f,	// (0x0000cc9f) popup_tmo_note_window_ParamLimits

0xcc9f,	// (0x0000cc9f) popup_tmo_note_window

0x0020,	// (0x00000020) fshwr2_bg_pane

0x93f5,	// (0x000093f5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x93f5,	// (0x000093f5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xa489,	// (0x0000a489) fshwr2_func_candi_cell_pane_g_ParamLimits

0xa489,	// (0x0000a489) fshwr2_func_candi_cell_pane_g

0x5c60,	// (0x00005c60) bg_popup_window_pane_cp01

0x942e,	// (0x0000942e) bg_popup_window_pane_g1_cp01

0x9437,	// (0x00009437) bg_popup_window_pane_cp22_ParamLimits

0x9437,	// (0x00009437) bg_popup_window_pane_cp22

0x9445,	// (0x00009445) listscroll_tmo_link_pane_ParamLimits

0x9445,	// (0x00009445) listscroll_tmo_link_pane

0x9485,	// (0x00009485) popup_tmo_note_window_g1_ParamLimits

0x9485,	// (0x00009485) popup_tmo_note_window_g1

0x9492,	// (0x00009492) tmo_note_info_pane_ParamLimits

0x9492,	// (0x00009492) tmo_note_info_pane

0xde04,	// (0x0000de04) list_tmo_note_info_pane_g1_ParamLimits

0xde04,	// (0x0000de04) list_tmo_note_info_pane_g1

0x94c3,	// (0x000094c3) list_tmo_note_info_pane_g2_ParamLimits

0x94c3,	// (0x000094c3) list_tmo_note_info_pane_g2

0x0001,

0xe3a1,	// (0x0000e3a1) list_tmo_note_info_pane_g_ParamLimits

0xe3a1,	// (0x0000e3a1) list_tmo_note_info_pane_g

0x94df,	// (0x000094df) list_tmo_note_info_text_pane_ParamLimits

0x94df,	// (0x000094df) list_tmo_note_info_text_pane

0x9560,	// (0x00009560) list_tmo_link_pane

0x956d,	// (0x0000956d) scroll_pane_cp20

0x957a,	// (0x0000957a) list_single_tmo_link_pane_ParamLimits

0x957a,	// (0x0000957a) list_single_tmo_link_pane

0x958a,	// (0x0000958a) list_single_tmo_link_pane_t1

0x9598,	// (0x00009598) list_tmo_note_info_text_pane_t1_ParamLimits

0x9598,	// (0x00009598) list_tmo_note_info_text_pane_t1

0x140e,	// (0x0000140e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x140e,	// (0x0000140e) aid_size_touch_scroll_bar_cp01

0xae06,	// (0x0000ae06) aid_size_touch_slider_marker

0xa5d6,	// (0x0000a5d6) popup_settings_window_ParamLimits

0xa5d6,	// (0x0000a5d6) popup_settings_window

0x2863,	// (0x00002863) popup_candi_list_indi_window

0x2d29,	// (0x00002d29) aid_touch_navi_pane_ParamLimits

0x7968,	// (0x00007968) rs_clock_indi_pane

0x7971,	// (0x00007971) sctrl_sk_bottom_pane_ParamLimits

0x7982,	// (0x00007982) sctrl_sk_top_pane_ParamLimits

0x8199,	// (0x00008199) popup_fep_tooltip_window

0xdb04,	// (0x0000db04) aid_size_cell_widget_grid_ParamLimits

0xdb27,	// (0x0000db27) cell_ai5_widget_pane_g1_ParamLimits

0xdb27,	// (0x0000db27) cell_ai5_widget_pane_g1

0xdb6f,	// (0x0000db6f) cell_ai5_widget_pane_g6_ParamLimits

0xdb7b,	// (0x0000db7b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xe355,	// (0x0000e355) cell_ai5_widget_pane_g_ParamLimits

0xe355,	// (0x0000e355) cell_ai5_widget_pane_g

0xdc7f,	// (0x0000dc7f) cell_ai5_widget_pane_t10_ParamLimits

0xdc7f,	// (0x0000dc7f) cell_ai5_widget_pane_t10

0xdc91,	// (0x0000dc91) grid_ai5_widget_pane_ParamLimits

0x90d3,	// (0x000090d3) cell_contacts_ai5_widget_pane_ParamLimits

0x90d3,	// (0x000090d3) cell_contacts_ai5_widget_pane

0x92b3,	// (0x000092b3) popup_discreet_window_t3_ParamLimits

0x92b3,	// (0x000092b3) popup_discreet_window_t3

0x934e,	// (0x0000934e) popup_fshwr2_char_preview_window_ParamLimits

0x934e,	// (0x0000934e) popup_fshwr2_char_preview_window

0xde1b,	// (0x0000de1b) tmo_note_info_pane_t1

0xde30,	// (0x0000de30) tmo_note_info_pane_t2

0xde45,	// (0x0000de45) tmo_note_info_pane_t3

0x953c,	// (0x0000953c) tmo_note_info_pane_t4

0x954e,	// (0x0000954e) tmo_note_info_pane_t5

0x0004,

0xe3a6,	// (0x0000e3a6) tmo_note_info_pane_t

0x9560,	// (0x00009560) list_tmo_link_pane_ParamLimits

0x956d,	// (0x0000956d) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x95b1,	// (0x000095b1) popup_fshwr2_char_preview_window_t1

0x95bf,	// (0x000095bf) popup_candi_list_indi_window_g1

0x95c8,	// (0x000095c8) bg_cell_contacts_ai5_widget_pane

0x95d4,	// (0x000095d4) cell_contacts_ai5_widget_pane_g1

0x95e8,	// (0x000095e8) cell_contacts_ai5_widget_pane_g2

0x95f7,	// (0x000095f7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xa49e,	// (0x0000a49e) cell_contacts_ai5_widget_pane_g

0x960a,	// (0x0000960a) cell_contacts_ai5_widget_pane_t1

0x11e8,	// (0x000011e8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdebd,	// (0x0000debd) settings_container_pane

0x22d6,	// (0x000022d6) listscroll_set_pane_copy1

0x5269,	// (0x00005269) scroll_pane_cp121_copy1

0x968e,	// (0x0000968e) set_content_pane_copy1

0x9696,	// (0x00009696) aid_height_set_list_copy1_ParamLimits

0x9696,	// (0x00009696) aid_height_set_list_copy1

0x4887,	// (0x00004887) aid_size_parent_copy1_ParamLimits

0x4887,	// (0x00004887) aid_size_parent_copy1

0xdec9,	// (0x0000dec9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdec9,	// (0x0000dec9) button_value_adjust_pane_cp6_copy1

0x283d,	// (0x0000283d) list_highlight_pane_cp2_copy1_ParamLimits

0x283d,	// (0x0000283d) list_highlight_pane_cp2_copy1

0xdedd,	// (0x0000dedd) list_set_pane_copy1_ParamLimits

0xdedd,	// (0x0000dedd) list_set_pane_copy1

0xde5a,	// (0x0000de5a) main_pane_set_t1_copy1_ParamLimits

0xde5a,	// (0x0000de5a) main_pane_set_t1_copy1

0xde94,	// (0x0000de94) main_pane_set_t2_copy1_ParamLimits

0xde94,	// (0x0000de94) main_pane_set_t2_copy1

0x9744,	// (0x00009744) main_pane_set_t3_copy1

0x9752,	// (0x00009752) main_pane_set_t4_copy1

0xdeb1,	// (0x0000deb1) set_content_pane_g1_copy1_ParamLimits

0xdeb1,	// (0x0000deb1) set_content_pane_g1_copy1

0xdf6b,	// (0x0000df6b) setting_code_pane_copy1

0x9768,	// (0x00009768) setting_slider_graphic_pane_copy1

0x9768,	// (0x00009768) setting_slider_pane_copy1

0x9770,	// (0x00009770) setting_text_pane_copy1

0x9768,	// (0x00009768) setting_volume_pane_copy1

0xdf73,	// (0x0000df73) settings_code_pane_cp2_copy1

0xdf7b,	// (0x0000df7b) settings_code_pane_cp_copy1_ParamLimits

0xdf7b,	// (0x0000df7b) settings_code_pane_cp_copy1

0xdf8f,	// (0x0000df8f) volume_set_pane_copy1

0xdf97,	// (0x0000df97) volume_set_pane_g10_copy1

0xdf9f,	// (0x0000df9f) volume_set_pane_g1_copy1

0xdfa7,	// (0x0000dfa7) volume_set_pane_g2_copy1

0xdfaf,	// (0x0000dfaf) volume_set_pane_g3_copy1

0xdfb7,	// (0x0000dfb7) volume_set_pane_g4_copy1

0xdfbf,	// (0x0000dfbf) volume_set_pane_g5_copy1

0xdfc7,	// (0x0000dfc7) volume_set_pane_g6_copy1

0xdfcf,	// (0x0000dfcf) volume_set_pane_g7_copy1

0xdfd7,	// (0x0000dfd7) volume_set_pane_g8_copy1

0xdfdf,	// (0x0000dfdf) volume_set_pane_g9_copy1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1_ParamLimits

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_copy1

0x97ec,	// (0x000097ec) setting_slider_pane_t2_copy1_ParamLimits

0x97ec,	// (0x000097ec) setting_slider_pane_t2_copy1

0x9805,	// (0x00009805) setting_slider_pane_t3_copy1_ParamLimits

0x9805,	// (0x00009805) setting_slider_pane_t3_copy1

0x0504,	// (0x00000504) slider_set_pane_copy1_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_copy1

0x130e,	// (0x0000130e) set_opt_bg_pane_g1_copy2

0x1316,	// (0x00001316) set_opt_bg_pane_g2_copy2

0x981c,	// (0x0000981c) set_opt_bg_pane_g3_copy2

0x1326,	// (0x00001326) set_opt_bg_pane_g4_copy2

0x132e,	// (0x0000132e) set_opt_bg_pane_g5_copy2

0x1336,	// (0x00001336) set_opt_bg_pane_g6_copy2

0xdfe7,	// (0x0000dfe7) set_opt_bg_pane_g7_copy2

0x982c,	// (0x0000982c) set_opt_bg_pane_g8_copy2

0x9834,	// (0x00009834) set_opt_bg_pane_g9_copy2

0x47ce,	// (0x000047ce) aid_size_touch_slider_mark_copy1_ParamLimits

0x47ce,	// (0x000047ce) aid_size_touch_slider_mark_copy1

0x49bd,	// (0x000049bd) slider_set_pane_g1_copy1

0x49c6,	// (0x000049c6) slider_set_pane_g2_copy1

0x47fb,	// (0x000047fb) slider_set_pane_g3_copy1_ParamLimits

0x47fb,	// (0x000047fb) slider_set_pane_g3_copy1

0x480f,	// (0x0000480f) slider_set_pane_g4_copy1_ParamLimits

0x480f,	// (0x0000480f) slider_set_pane_g4_copy1

0x4827,	// (0x00004827) slider_set_pane_g5_copy1_ParamLimits

0x4827,	// (0x00004827) slider_set_pane_g5_copy1

0x47fb,	// (0x000047fb) slider_set_pane_g6_copy1_ParamLimits

0x47fb,	// (0x000047fb) slider_set_pane_g6_copy1

0xdfef,	// (0x0000dfef) slider_set_pane_g7_copy1_ParamLimits

0xdfef,	// (0x0000dfef) slider_set_pane_g7_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_copy1

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1_copy1

0xe005,	// (0x0000e005) setting_slider_graphic_pane_t1_copy1

0xe014,	// (0x0000e014) setting_slider_graphic_pane_t2_copy1

0xe023,	// (0x0000e023) slider_set_pane_cp_copy1

0x9880,	// (0x00009880) input_focus_pane_cp1_copy1

0x9889,	// (0x00009889) list_set_text_pane_copy1

0x9891,	// (0x00009891) setting_text_pane_g1_copy1

0x989a,	// (0x0000989a) set_text_pane_t1_copy1

0x9880,	// (0x00009880) input_focus_pane_cp2_copy1

0x9891,	// (0x00009891) setting_code_pane_g1_copy1

0x98b3,	// (0x000098b3) setting_code_pane_t1_copy1

0xb18e,	// (0x0000b18e) list_set_graphic_pane_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_copy1

0x98d5,	// (0x000098d5) list_set_graphic_pane_g1_copy1_ParamLimits

0x98d5,	// (0x000098d5) list_set_graphic_pane_g1_copy1

0x98e1,	// (0x000098e1) list_set_graphic_pane_g2_copy1

0x2051,	// (0x00002051) list_set_graphic_pane_t1_copy1_ParamLimits

0x2051,	// (0x00002051) list_set_graphic_pane_t1_copy1

0x5c60,	// (0x00005c60) rs_clock_indi_pane_g1

0x98e9,	// (0x000098e9) rs_clock_indi_pane_t1

0x98f7,	// (0x000098f7) rs_indi_pane

0x98ff,	// (0x000098ff) rs_indi_pane_g1

0x9908,	// (0x00009908) rs_indi_pane_g2

0x95bf,	// (0x000095bf) rs_indi_pane_g3

0x0002,

0xa4a5,	// (0x0000a4a5) rs_indi_pane_g

0x22d6,	// (0x000022d6) bg_popup_preview_window_pane_cp03

0x9911,	// (0x00009911) popup_fep_tooltip_window_t1

0x6dbe,	// (0x00006dbe) popup_note2_window_g2_ParamLimits

0x6dbe,	// (0x00006dbe) popup_note2_window_g2

0x0001,

0xa24a,	// (0x0000a24a) popup_note2_window_g_ParamLimits

0xa24a,	// (0x0000a24a) popup_note2_window_g

0x73b7,	// (0x000073b7) bg_popup_sub_pane_cp11_ParamLimits

0x73c4,	// (0x000073c4) cell_ai3_links_pane_g1_ParamLimits

0x73db,	// (0x000073db) cell_ai3_links_pane_t1

0x989a,	// (0x0000989a) set_text_pane_t1_copy1_ParamLimits

0x21fd,	// (0x000021fd) cell_graphic_popup_pane_cp2_ParamLimits

0x21fd,	// (0x000021fd) cell_graphic_popup_pane_cp2

0x991f,	// (0x0000991f) cell_graphic_popup_pane_g1_cp2

0x0ab3,	// (0x00000ab3) cell_graphic_popup_pane_g2_cp2

0x9927,	// (0x00009927) cell_graphic_popup_pane_g3_cp2

0x992f,	// (0x0000992f) cell_graphic_popup_pane_t2_cp2

0x0ac4,	// (0x00000ac4) grid_highlight_pane_cp3_cp2

0x1824,	// (0x00001824) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x11e8,	// (0x000011e8) main_tmo_pane_ParamLimits

0xcc97,	// (0x0000cc97) popup_tmo_big_image_note_window

0xdb17,	// (0x0000db17) cell_ai5_widget_list_pane

0xdb1f,	// (0x0000db1f) cell_ai5_widget_lrg_icon_pane

0xde1b,	// (0x0000de1b) tmo_note_info_pane_t1_ParamLimits

0xde30,	// (0x0000de30) tmo_note_info_pane_t2_ParamLimits

0xde45,	// (0x0000de45) tmo_note_info_pane_t3_ParamLimits

0x953c,	// (0x0000953c) tmo_note_info_pane_t4_ParamLimits

0x954e,	// (0x0000954e) tmo_note_info_pane_t5_ParamLimits

0xe3a6,	// (0x0000e3a6) tmo_note_info_pane_t_ParamLimits

0xdebd,	// (0x0000debd) settings_container_pane_ParamLimits

0x9878,	// (0x00009878) indicator_popup_pane_cp5

0x9878,	// (0x00009878) indicator_popup_pane_cp6

0xb18e,	// (0x0000b18e) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x993d,	// (0x0000993d) popup_tmo_big_image_note_window_g1

0x9946,	// (0x00009946) popup_tmo_big_image_note_window_t1

0x9954,	// (0x00009954) popup_tmo_big_image_note_window_t2

0x9962,	// (0x00009962) popup_tmo_big_image_note_window_t3

0x0002,

0xa4ac,	// (0x0000a4ac) popup_tmo_big_image_note_window_t

0xe02b,	// (0x0000e02b) cell_ai5_widget_lrg_icon_pane_g1

0xe033,	// (0x0000e033) cell_ai5_widget_lrg_icon_pane_t1

0xe041,	// (0x0000e041) cell_ai5_widget_list_row_pane_ParamLimits

0xe041,	// (0x0000e041) cell_ai5_widget_list_row_pane

0xe05a,	// (0x0000e05a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe05a,	// (0x0000e05a) cell_ai5_widget_list_row_pane_g1

0xe067,	// (0x0000e067) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe067,	// (0x0000e067) cell_ai5_widget_list_row_pane_t1

0xe07f,	// (0x0000e07f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe07f,	// (0x0000e07f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xe3b1,	// (0x0000e3b1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xe3b1,	// (0x0000e3b1) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x99d6,	// (0x000099d6) popup_fep_char_pre_window

0x99de,	// (0x000099de) popup_fep_ituss_window

0x99e7,	// (0x000099e7) popup_fep_vkbss_window

0x99f0,	// (0x000099f0) grid_vkbss_keypad_pane_ParamLimits

0x99f0,	// (0x000099f0) grid_vkbss_keypad_pane

0x9a00,	// (0x00009a00) ituss_keypad_pane

0x9a08,	// (0x00009a08) aid_vkbss_key_offset_ParamLimits

0x9a08,	// (0x00009a08) aid_vkbss_key_offset

0x9a17,	// (0x00009a17) cell_vkbss_key_pane_ParamLimits

0x9a17,	// (0x00009a17) cell_vkbss_key_pane

0x9a2d,	// (0x00009a2d) bg_cell_vkbss_key_g1_ParamLimits

0x9a2d,	// (0x00009a2d) bg_cell_vkbss_key_g1

0x9a39,	// (0x00009a39) cell_vkbss_key_3p_pane_ParamLimits

0x9a39,	// (0x00009a39) cell_vkbss_key_3p_pane

0x9a4d,	// (0x00009a4d) cell_vkbss_key_g1_ParamLimits

0x9a4d,	// (0x00009a4d) cell_vkbss_key_g1

0x9a61,	// (0x00009a61) cell_vkbss_key_t1_ParamLimits

0x9a61,	// (0x00009a61) cell_vkbss_key_t1

0x9a8c,	// (0x00009a8c) cell_ituss_key_pane_ParamLimits

0x9a8c,	// (0x00009a8c) cell_ituss_key_pane

0x9a9b,	// (0x00009a9b) bg_cell_ituss_key_g1_ParamLimits

0x9a9b,	// (0x00009a9b) bg_cell_ituss_key_g1

0x9aa7,	// (0x00009aa7) cell_ituss_key_pane_g1_ParamLimits

0x9aa7,	// (0x00009aa7) cell_ituss_key_pane_g1

0x9ab3,	// (0x00009ab3) cell_ituss_key_pane_g2_ParamLimits

0x9ab3,	// (0x00009ab3) cell_ituss_key_pane_g2

0x0001,

0xa4b8,	// (0x0000a4b8) cell_ituss_key_pane_g_ParamLimits

0xa4b8,	// (0x0000a4b8) cell_ituss_key_pane_g

0x9ac6,	// (0x00009ac6) cell_ituss_key_t1_ParamLimits

0x9ac6,	// (0x00009ac6) cell_ituss_key_t1

0x9ae4,	// (0x00009ae4) cell_ituss_key_t2_ParamLimits

0x9ae4,	// (0x00009ae4) cell_ituss_key_t2

0x9b03,	// (0x00009b03) cell_ituss_key_t3_ParamLimits

0x9b03,	// (0x00009b03) cell_ituss_key_t3

0x9b22,	// (0x00009b22) cell_ituss_key_t4_ParamLimits

0x9b22,	// (0x00009b22) cell_ituss_key_t4

0x0003,

0xa4bd,	// (0x0000a4bd) cell_ituss_key_t_ParamLimits

0xa4bd,	// (0x0000a4bd) cell_ituss_key_t

0x9b41,	// (0x00009b41) cell_vkbss_key_3p_pane_g1

0x9b49,	// (0x00009b49) cell_vkbss_key_3p_pane_g2

0x9b51,	// (0x00009b51) cell_vkbss_key_3p_pane_g3

0x0002,

0xa4c6,	// (0x0000a4c6) cell_vkbss_key_3p_pane_g

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp02

0x9b59,	// (0x00009b59) popup_fep_char_pre_window_t1

0xdafa,	// (0x0000dafa) main_ai5_sk_pane

0x95c8,	// (0x000095c8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x95d4,	// (0x000095d4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x95e8,	// (0x000095e8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x95f7,	// (0x000095f7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xa49e,	// (0x0000a49e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x960a,	// (0x0000960a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x11e8,	// (0x000011e8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe091,	// (0x0000e091) main_ai5_sk_pane_g1
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

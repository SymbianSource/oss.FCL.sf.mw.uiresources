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
0xad00,	// (0x0000ad00) Screen

0xad0a,	// (0x0000ad0a) application_window_ParamLimits

0xad0a,	// (0x0000ad0a) application_window

0x002a,	// (0x0000002a) screen_g1

0xad38,	// (0x0000ad38) area_bottom_pane_ParamLimits

0xad38,	// (0x0000ad38) area_bottom_pane

0x011d,	// (0x0000011d) area_top_pane_ParamLimits

0x011d,	// (0x0000011d) area_top_pane

0x0195,	// (0x00000195) main_pane_ParamLimits

0x0195,	// (0x00000195) main_pane

0x024e,	// (0x0000024e) misc_graphics

0xc31e,	// (0x0000c31e) battery_pane_ParamLimits

0xc31e,	// (0x0000c31e) battery_pane

0x3c56,	// (0x00003c56) bg_status_flat_pane_g8

0x3c5e,	// (0x00003c5e) bg_status_flat_pane_g9

0x2e7f,	// (0x00002e7f) context_pane_ParamLimits

0x2e7f,	// (0x00002e7f) context_pane

0xc478,	// (0x0000c478) navi_pane_ParamLimits

0xc478,	// (0x0000c478) navi_pane

0xc4ed,	// (0x0000c4ed) signal_pane_ParamLimits

0xc4ed,	// (0x0000c4ed) signal_pane

0x0008,

0xa650,	// (0x0000a650) bg_status_flat_pane_g

0xc579,	// (0x0000c579) status_pane_g1_ParamLimits

0xc579,	// (0x0000c579) status_pane_g1

0xc585,	// (0x0000c585) status_pane_g2_ParamLimits

0xc585,	// (0x0000c585) status_pane_g2

0x3094,	// (0x00003094) status_pane_g3_ParamLimits

0x3094,	// (0x00003094) status_pane_g3

0x0004,

0xeae2,	// (0x0000eae2) status_pane_g_ParamLimits

0xeae2,	// (0x0000eae2) status_pane_g

0xc591,	// (0x0000c591) title_pane_ParamLimits

0xc591,	// (0x0000c591) title_pane

0xc5ec,	// (0x0000c5ec) uni_indicator_pane_ParamLimits

0xc5ec,	// (0x0000c5ec) uni_indicator_pane

0x2846,	// (0x00002846) bg_list_pane_ParamLimits

0x2846,	// (0x00002846) bg_list_pane

0xbce2,	// (0x0000bce2) find_pane

0xbcea,	// (0x0000bcea) listscroll_app_pane_ParamLimits

0xbcea,	// (0x0000bcea) listscroll_app_pane

0x287a,	// (0x0000287a) listscroll_form_pane

0xbcfa,	// (0x0000bcfa) listscroll_gen_pane_ParamLimits

0xbcfa,	// (0x0000bcfa) listscroll_gen_pane

0x2897,	// (0x00002897) listscroll_set_pane

0xbd0f,	// (0x0000bd0f) main_idle_act_pane

0x2345,	// (0x00002345) main_idle_trad_pane

0x2345,	// (0x00002345) main_list_empty_pane

0x28b1,	// (0x000028b1) main_midp_pane

0x28bd,	// (0x000028bd) main_pane_g1_ParamLimits

0x28bd,	// (0x000028bd) main_pane_g1

0xbd22,	// (0x0000bd22) popup_ai_message_window_ParamLimits

0xbd22,	// (0x0000bd22) popup_ai_message_window

0xbda6,	// (0x0000bda6) popup_fep_china_uni_window_ParamLimits

0xbda6,	// (0x0000bda6) popup_fep_china_uni_window

0x29a7,	// (0x000029a7) popup_fep_japan_candidate_window_ParamLimits

0x29a7,	// (0x000029a7) popup_fep_japan_candidate_window

0x29c5,	// (0x000029c5) popup_fep_japan_predictive_window_ParamLimits

0x29c5,	// (0x000029c5) popup_fep_japan_predictive_window

0xbde4,	// (0x0000bde4) popup_find_window

0xbdfd,	// (0x0000bdfd) popup_grid_graphic_window_ParamLimits

0xbdfd,	// (0x0000bdfd) popup_grid_graphic_window

0x2a1c,	// (0x00002a1c) popup_large_graphic_colour_window

0xbe79,	// (0x0000be79) popup_menu_window_ParamLimits

0xbe79,	// (0x0000be79) popup_menu_window

0xbfd7,	// (0x0000bfd7) popup_note_image_window

0xbf9f,	// (0x0000bf9f) popup_note_wait_window_ParamLimits

0xbf9f,	// (0x0000bf9f) popup_note_wait_window

0xbfed,	// (0x0000bfed) popup_note_window_ParamLimits

0xbfed,	// (0x0000bfed) popup_note_window

0xc081,	// (0x0000c081) popup_query_code_window_ParamLimits

0xc081,	// (0x0000c081) popup_query_code_window

0x2bd9,	// (0x00002bd9) popup_query_data_code_window_ParamLimits

0x2bd9,	// (0x00002bd9) popup_query_data_code_window

0xc0b9,	// (0x0000c0b9) popup_query_data_window_ParamLimits

0xc0b9,	// (0x0000c0b9) popup_query_data_window

0xc12d,	// (0x0000c12d) popup_query_sat_info_window_ParamLimits

0xc12d,	// (0x0000c12d) popup_query_sat_info_window

0xc1ba,	// (0x0000c1ba) popup_snote_single_graphic_window_ParamLimits

0xc1ba,	// (0x0000c1ba) popup_snote_single_graphic_window

0xc1ba,	// (0x0000c1ba) popup_snote_single_text_window_ParamLimits

0xc1ba,	// (0x0000c1ba) popup_snote_single_text_window

0x2c48,	// (0x00002c48) popup_sub_window_general

0x2d4c,	// (0x00002d4c) popup_window_general_ParamLimits

0x2d4c,	// (0x00002d4c) popup_window_general

0x2d5f,	// (0x00002d5f) power_save_pane

0xbb8c,	// (0x0000bb8c) control_pane_g1_ParamLimits

0xbb8c,	// (0x0000bb8c) control_pane_g1

0x26c6,	// (0x000026c6) control_pane_g2_ParamLimits

0x26c6,	// (0x000026c6) control_pane_g2

0x26e7,	// (0x000026e7) control_pane_g3_ParamLimits

0x26e7,	// (0x000026e7) control_pane_g3

0x0007,

0xeaca,	// (0x0000eaca) control_pane_g_ParamLimits

0xeaca,	// (0x0000eaca) control_pane_g

0xbbe8,	// (0x0000bbe8) control_pane_t1_ParamLimits

0xbbe8,	// (0x0000bbe8) control_pane_t1

0xbc44,	// (0x0000bc44) control_pane_t2_ParamLimits

0xbc44,	// (0x0000bc44) control_pane_t2

0x0002,

0xeadb,	// (0x0000eadb) control_pane_t_ParamLimits

0xeadb,	// (0x0000eadb) control_pane_t

0x25cc,	// (0x000025cc) navi_navi_volume_pane_cp1

0x25d4,	// (0x000025d4) status_small_icon_pane

0x25dc,	// (0x000025dc) status_small_pane_g1_ParamLimits

0x25dc,	// (0x000025dc) status_small_pane_g1

0xbb0b,	// (0x0000bb0b) status_small_pane_g2_ParamLimits

0xbb0b,	// (0x0000bb0b) status_small_pane_g2

0xbb17,	// (0x0000bb17) status_small_pane_g3_ParamLimits

0xbb17,	// (0x0000bb17) status_small_pane_g3

0xbb23,	// (0x0000bb23) status_small_pane_g4_ParamLimits

0xbb23,	// (0x0000bb23) status_small_pane_g4

0xbb2f,	// (0x0000bb2f) status_small_pane_g5_ParamLimits

0xbb2f,	// (0x0000bb2f) status_small_pane_g5

0x2640,	// (0x00002640) status_small_pane_g6_ParamLimits

0x2640,	// (0x00002640) status_small_pane_g6

0x0007,

0xeab9,	// (0x0000eab9) status_small_pane_g_ParamLimits

0xeab9,	// (0x0000eab9) status_small_pane_g

0xbb5e,	// (0x0000bb5e) status_small_pane_t1

0xbb78,	// (0x0000bb78) status_small_wait_pane_ParamLimits

0xbb78,	// (0x0000bb78) status_small_wait_pane

0xb927,	// (0x0000b927) aid_levels_signal_ParamLimits

0xb927,	// (0x0000b927) aid_levels_signal

0xb93b,	// (0x0000b93b) signal_pane_g1_ParamLimits

0xb93b,	// (0x0000b93b) signal_pane_g1

0xb955,	// (0x0000b955) signal_pane_g2_ParamLimits

0xb955,	// (0x0000b955) signal_pane_g2

0x0003,

0xea99,	// (0x0000ea99) signal_pane_g_ParamLimits

0xea99,	// (0x0000ea99) signal_pane_g

0x1c77,	// (0x00001c77) context_pane_g1

0xaecf,	// (0x0000aecf) title_pane_g1

0xaf11,	// (0x0000af11) title_pane_t1

0x043c,	// (0x0000043c) title_pane_t2

0x0462,	// (0x00000462) title_pane_t3

0x0002,

0xe9c6,	// (0x0000e9c6) title_pane_t

0xc612,	// (0x0000c612) aid_levels_battery_ParamLimits

0xc612,	// (0x0000c612) aid_levels_battery

0xc62a,	// (0x0000c62a) battery_pane_g1_ParamLimits

0xc62a,	// (0x0000c62a) battery_pane_g1

0xc645,	// (0x0000c645) battery_pane_g2_ParamLimits

0xc645,	// (0x0000c645) battery_pane_g2

0x0001,

0xeaed,	// (0x0000eaed) battery_pane_g_ParamLimits

0xeaed,	// (0x0000eaed) battery_pane_g

0xc963,	// (0x0000c963) uni_indicator_pane_g1

0xc977,	// (0x0000c977) uni_indicator_pane_g2

0xc98c,	// (0x0000c98c) uni_indicator_pane_g3

0x0005,

0xeb29,	// (0x0000eb29) uni_indicator_pane_g

0x1470,	// (0x00001470) navi_icon_pane_ParamLimits

0x1470,	// (0x00001470) navi_icon_pane

0x024e,	// (0x0000024e) navi_midp_pane

0x024e,	// (0x0000024e) navi_navi_pane

0x1470,	// (0x00001470) navi_text_pane_ParamLimits

0x1470,	// (0x00001470) navi_text_pane

0x002a,	// (0x0000002a) status_small_wait_pane_g1

0x0960,	// (0x00000960) status_small_wait_pane_g2

0x0001,

0xa6f3,	// (0x0000a6f3) status_small_wait_pane_g

0xc909,	// (0x0000c909) navi_navi_icon_text_pane

0xc911,	// (0x0000c911) navi_navi_pane_g1_ParamLimits

0xc911,	// (0x0000c911) navi_navi_pane_g1

0xc923,	// (0x0000c923) navi_navi_pane_g2_ParamLimits

0xc923,	// (0x0000c923) navi_navi_pane_g2

0x0001,

0xeb24,	// (0x0000eb24) navi_navi_pane_g_ParamLimits

0xeb24,	// (0x0000eb24) navi_navi_pane_g

0xc935,	// (0x0000c935) navi_navi_tabs_pane

0xc909,	// (0x0000c909) navi_navi_text_pane

0xc909,	// (0x0000c909) navi_navi_volume_pane

0x438c,	// (0x0000438c) navi_text_pane_t1

0x4380,	// (0x00004380) navi_icon_pane_g1

0x42d4,	// (0x000042d4) navi_navi_text_pane_t1

0x42c3,	// (0x000042c3) navi_navi_volume_pane_g1

0xc900,	// (0x0000c900) volume_small_pane

0xc85c,	// (0x0000c85c) navi_navi_icon_text_pane_g1

0xc864,	// (0x0000c864) navi_navi_icon_text_pane_t1

0x3cb6,	// (0x00003cb6) navi_tabs_2_long_pane

0x3cb6,	// (0x00003cb6) navi_tabs_2_pane

0x3cb6,	// (0x00003cb6) navi_tabs_3_long_pane

0x3cb6,	// (0x00003cb6) navi_tabs_3_pane

0x3cb6,	// (0x00003cb6) navi_tabs_4_pane

0xc83c,	// (0x0000c83c) tabs_2_active_pane_ParamLimits

0xc83c,	// (0x0000c83c) tabs_2_active_pane

0xc84c,	// (0x0000c84c) tabs_2_passive_pane_ParamLimits

0xc84c,	// (0x0000c84c) tabs_2_passive_pane

0xc80a,	// (0x0000c80a) tabs_3_active_pane_ParamLimits

0xc80a,	// (0x0000c80a) tabs_3_active_pane

0xc81a,	// (0x0000c81a) tabs_3_passive_pane_ParamLimits

0xc81a,	// (0x0000c81a) tabs_3_passive_pane

0xc82b,	// (0x0000c82b) tabs_3_passive_pane_cp_ParamLimits

0xc82b,	// (0x0000c82b) tabs_3_passive_pane_cp

0xc7c6,	// (0x0000c7c6) tabs_4_active_pane_ParamLimits

0xc7c6,	// (0x0000c7c6) tabs_4_active_pane

0xc7d7,	// (0x0000c7d7) tabs_4_passive_pane_ParamLimits

0xc7d7,	// (0x0000c7d7) tabs_4_passive_pane

0xc7e8,	// (0x0000c7e8) tabs_4_passive_pane_cp_ParamLimits

0xc7e8,	// (0x0000c7e8) tabs_4_passive_pane_cp

0xc7f9,	// (0x0000c7f9) tabs_4_passive_pane_cp2_ParamLimits

0xc7f9,	// (0x0000c7f9) tabs_4_passive_pane_cp2

0xc7a6,	// (0x0000c7a6) tabs_2_long_active_pane_ParamLimits

0xc7a6,	// (0x0000c7a6) tabs_2_long_active_pane

0xc7b6,	// (0x0000c7b6) tabs_2_long_passive_pane_ParamLimits

0xc7b6,	// (0x0000c7b6) tabs_2_long_passive_pane

0xc76f,	// (0x0000c76f) tabs_3_long_active_pane_ParamLimits

0xc76f,	// (0x0000c76f) tabs_3_long_active_pane

0xc782,	// (0x0000c782) tabs_3_long_passive_pane_ParamLimits

0xc782,	// (0x0000c782) tabs_3_long_passive_pane

0xc793,	// (0x0000c793) tabs_3_long_passive_pane_cp_ParamLimits

0xc793,	// (0x0000c793) tabs_3_long_passive_pane_cp

0x4067,	// (0x00004067) volume_small_pane_g1

0x4070,	// (0x00004070) volume_small_pane_g2

0x4079,	// (0x00004079) volume_small_pane_g3

0x4082,	// (0x00004082) volume_small_pane_g4

0x408b,	// (0x0000408b) volume_small_pane_g5

0x4094,	// (0x00004094) volume_small_pane_g6

0x409d,	// (0x0000409d) volume_small_pane_g7

0x40a6,	// (0x000040a6) volume_small_pane_g8

0x40af,	// (0x000040af) volume_small_pane_g9

0x40b8,	// (0x000040b8) volume_small_pane_g10

0x0009,

0xa68d,	// (0x0000a68d) volume_small_pane_g

0x0798,	// (0x00000798) bg_active_tab_pane_cp2_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_active_pane_g1

0xaf9e,	// (0x0000af9e) tabs_3_active_pane_t1

0x0798,	// (0x00000798) bg_passive_tab_pane_cp2_ParamLimits

0x0798,	// (0x00000798) bg_passive_tab_pane_cp2

0x0482,	// (0x00000482) tabs_3_passive_pane_g1

0xaf9e,	// (0x0000af9e) tabs_3_passive_pane_t1

0x0798,	// (0x00000798) bg_active_tab_pane_cp3_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp3

0x4c70,	// (0x00004c70) tabs_4_active_pane_g1

0xafb4,	// (0x0000afb4) tabs_4_active_pane_t1

0x0798,	// (0x00000798) bg_passive_tab_pane_cp3_ParamLimits

0x0798,	// (0x00000798) bg_passive_tab_pane_cp3

0x4c70,	// (0x00004c70) tabs_4_1_passive_pane_g1

0xafb4,	// (0x0000afb4) tabs_4_1_passive_pane_t1

0x28b1,	// (0x000028b1) list_highlight_pane_cp2

0xca4d,	// (0x0000ca4d) list_set_pane_ParamLimits

0xca4d,	// (0x0000ca4d) list_set_pane

0xcadb,	// (0x0000cadb) main_pane_set_t1_ParamLimits

0xcadb,	// (0x0000cadb) main_pane_set_t1

0xcafb,	// (0x0000cafb) main_pane_set_t2_ParamLimits

0xcafb,	// (0x0000cafb) main_pane_set_t2

0xcb0f,	// (0x0000cb0f) main_pane_set_t3_ParamLimits

0xcb0f,	// (0x0000cb0f) main_pane_set_t3

0xcb21,	// (0x0000cb21) main_pane_set_t4_ParamLimits

0xcb21,	// (0x0000cb21) main_pane_set_t4

0x0003,

0xeb72,	// (0x0000eb72) main_pane_set_t_ParamLimits

0xeb72,	// (0x0000eb72) main_pane_set_t

0xcb33,	// (0x0000cb33) setting_code_pane

0xcb3b,	// (0x0000cb3b) setting_slider_graphic_pane

0xcb3b,	// (0x0000cb3b) setting_slider_pane

0xcb3b,	// (0x0000cb3b) setting_text_pane

0xcb3b,	// (0x0000cb3b) setting_volume_pane

0xafca,	// (0x0000afca) volume_set_pane

0x0474,	// (0x00000474) bg_set_opt_pane_cp

0x04be,	// (0x000004be) setting_slider_pane_t1

0xafd2,	// (0x0000afd2) setting_slider_pane_t2

0xafeb,	// (0x0000afeb) setting_slider_pane_t3

0x0002,

0xe9cd,	// (0x0000e9cd) setting_slider_pane_t

0x0504,	// (0x00000504) slider_set_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1

0xb002,	// (0x0000b002) setting_slider_graphic_pane_t1

0xb011,	// (0x0000b011) setting_slider_graphic_pane_t2

0x0001,

0xe9d4,	// (0x0000e9d4) setting_slider_graphic_pane_t

0xb020,	// (0x0000b020) slider_set_pane_cp

0x024e,	// (0x0000024e) input_focus_pane_cp1

0x495a,	// (0x0000495a) list_set_text_pane

0x002a,	// (0x0000002a) setting_text_pane_g1

0x024e,	// (0x0000024e) input_focus_pane_cp2

0x002a,	// (0x0000002a) setting_code_pane_g1

0x0549,	// (0x00000549) setting_code_pane_t1

0xb028,	// (0x0000b028) set_text_pane_t1_ParamLimits

0xb028,	// (0x0000b028) set_text_pane_t1

0x131d,	// (0x0000131d) set_opt_bg_pane_g1

0x1325,	// (0x00001325) set_opt_bg_pane_g2

0xca19,	// (0x0000ca19) set_opt_bg_pane_g3

0x1335,	// (0x00001335) set_opt_bg_pane_g4

0x133d,	// (0x0000133d) set_opt_bg_pane_g5

0x1345,	// (0x00001345) set_opt_bg_pane_g6

0xca21,	// (0x0000ca21) set_opt_bg_pane_g7

0xca29,	// (0x0000ca29) set_opt_bg_pane_g8

0xca31,	// (0x0000ca31) set_opt_bg_pane_g9

0x0008,

0xeb5f,	// (0x0000eb5f) set_opt_bg_pane_g

0x48c9,	// (0x000048c9) slider_set_pane_g1

0x48d6,	// (0x000048d6) slider_set_pane_g2

0x0006,

0xeb50,	// (0x0000eb50) slider_set_pane_g

0xc9a1,	// (0x0000c9a1) volume_set_pane_g1

0xc9a9,	// (0x0000c9a9) volume_set_pane_g2

0xc9b1,	// (0x0000c9b1) volume_set_pane_g3

0xc9b9,	// (0x0000c9b9) volume_set_pane_g4

0xc9c1,	// (0x0000c9c1) volume_set_pane_g5

0xc9c9,	// (0x0000c9c9) volume_set_pane_g6

0xc9d1,	// (0x0000c9d1) volume_set_pane_g7

0xc9d9,	// (0x0000c9d9) volume_set_pane_g8

0xc9e1,	// (0x0000c9e1) volume_set_pane_g9

0xc9e9,	// (0x0000c9e9) volume_set_pane_g10

0x0009,

0xeb36,	// (0x0000eb36) volume_set_pane_g

0xb042,	// (0x0000b042) indicator_pane_ParamLimits

0xb042,	// (0x0000b042) indicator_pane

0xb06a,	// (0x0000b06a) main_idle_pane_g2_ParamLimits

0xb06a,	// (0x0000b06a) main_idle_pane_g2

0xb09a,	// (0x0000b09a) main_pane_idle_g1_ParamLimits

0xb09a,	// (0x0000b09a) main_pane_idle_g1

0x05b0,	// (0x000005b0) popup_clock_digital_analogue_window_ParamLimits

0x05b0,	// (0x000005b0) popup_clock_digital_analogue_window

0xb0bf,	// (0x0000b0bf) soft_indicator_pane_ParamLimits

0xb0bf,	// (0x0000b0bf) soft_indicator_pane

0xb0d9,	// (0x0000b0d9) wallpaper_pane_ParamLimits

0xb0d9,	// (0x0000b0d9) wallpaper_pane

0x002a,	// (0x0000002a) wallpaper_pane_g1

0xb0eb,	// (0x0000b0eb) indicator_pane_g1_ParamLimits

0xb0eb,	// (0x0000b0eb) indicator_pane_g1

0x4e07,	// (0x00004e07) navi_navi_icon_text_pane_srt_g1

0x0602,	// (0x00000602) soft_indicator_pane_t1

0x061c,	// (0x0000061c) aid_ps_area_pane

0xb104,	// (0x0000b104) aid_ps_clock_pane

0x0639,	// (0x00000639) aid_ps_indicator_pane

0x0645,	// (0x00000645) indicator_ps_pane_ParamLimits

0x0645,	// (0x00000645) indicator_ps_pane

0x0654,	// (0x00000654) power_save_pane_g1_ParamLimits

0x0654,	// (0x00000654) power_save_pane_g1

0x0660,	// (0x00000660) power_save_pane_g2_ParamLimits

0x0660,	// (0x00000660) power_save_pane_g2

0x0034,	// (0x00000034) aid_navinavi_width_pane

0x061c,	// (0x0000061c) aid_ps_area_pane_ParamLimits

0x0001,

0xa346,	// (0x0000a346) power_save_pane_g_ParamLimits

0xa346,	// (0x0000a346) power_save_pane_g

0x066e,	// (0x0000066e) power_save_pane_t1_ParamLimits

0x066e,	// (0x0000066e) power_save_pane_t1

0xb104,	// (0x0000b104) aid_ps_clock_pane_ParamLimits

0x0639,	// (0x00000639) aid_ps_indicator_pane_ParamLimits

0x0680,	// (0x00000680) power_save_pane_t4_ParamLimits

0x0680,	// (0x00000680) power_save_pane_t4

0x0001,

0xa34b,	// (0x0000a34b) power_save_pane_t_ParamLimits

0xa34b,	// (0x0000a34b) power_save_pane_t

0x06aa,	// (0x000006aa) power_save_t3_ParamLimits

0x06aa,	// (0x000006aa) power_save_t3

0x0695,	// (0x00000695) power_save_t2_ParamLimits

0x0695,	// (0x00000695) power_save_t2

0x06bf,	// (0x000006bf) indicator_ps_pane_g1

0xb110,	// (0x0000b110) ai_gene_pane_ParamLimits

0xb110,	// (0x0000b110) ai_gene_pane

0xb127,	// (0x0000b127) ai_links_pane_ParamLimits

0xb127,	// (0x0000b127) ai_links_pane

0xb139,	// (0x0000b139) indicator_pane_cp1_ParamLimits

0xb139,	// (0x0000b139) indicator_pane_cp1

0xb148,	// (0x0000b148) main_pane_idle_g1_cp_ParamLimits

0xb148,	// (0x0000b148) main_pane_idle_g1_cp

0x06f8,	// (0x000006f8) popup_ai_links_title_window

0xb160,	// (0x0000b160) soft_indicator_pane_cp1_ParamLimits

0xb160,	// (0x0000b160) soft_indicator_pane_cp1

0x466b,	// (0x0000466b) ai_links_pane_g1

0x4674,	// (0x00004674) grid_ai_links_pane

0xc95a,	// (0x0000c95a) ai_gene_pane_1

0x4659,	// (0x00004659) ai_gene_pane_2

0x4662,	// (0x00004662) list_highlight_pane_cp4

0xc93e,	// (0x0000c93e) cell_ai_link_pane_ParamLimits

0xc93e,	// (0x0000c93e) cell_ai_link_pane

0x462c,	// (0x0000462c) cell_ai_link_pane_g1

0x0960,	// (0x00000960) cell_ai_link_pane_g2

0x0001,

0xa6ee,	// (0x0000a6ee) cell_ai_link_pane_g

0x024e,	// (0x0000024e) grid_highlight_cp2

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp1

0x071b,	// (0x0000071b) popup_ai_links_title_window_t1

0x457e,	// (0x0000457e) ai_gene_pane_1_g1_ParamLimits

0x457e,	// (0x0000457e) ai_gene_pane_1_g1

0x458a,	// (0x0000458a) ai_gene_pane_1_g2_ParamLimits

0x458a,	// (0x0000458a) ai_gene_pane_1_g2

0x0001,

0xa6e4,	// (0x0000a6e4) ai_gene_pane_1_g_ParamLimits

0xa6e4,	// (0x0000a6e4) ai_gene_pane_1_g

0x4597,	// (0x00004597) ai_gene_pane_1_t1_ParamLimits

0x4597,	// (0x00004597) ai_gene_pane_1_t1

0x45cb,	// (0x000045cb) grid_ai_soft_ind_pane

0x4569,	// (0x00004569) ai_gene_pane_2_t1_ParamLimits

0x4569,	// (0x00004569) ai_gene_pane_2_t1

0xb174,	// (0x0000b174) main_pane_empty_t1_ParamLimits

0xb174,	// (0x0000b174) main_pane_empty_t1

0xb191,	// (0x0000b191) main_pane_empty_t2_ParamLimits

0xb191,	// (0x0000b191) main_pane_empty_t2

0xb1a9,	// (0x0000b1a9) main_pane_empty_t3_ParamLimits

0xb1a9,	// (0x0000b1a9) main_pane_empty_t3

0xb1bc,	// (0x0000b1bc) main_pane_empty_t4_ParamLimits

0xb1bc,	// (0x0000b1bc) main_pane_empty_t4

0xb1cf,	// (0x0000b1cf) main_pane_empty_t5_ParamLimits

0xb1cf,	// (0x0000b1cf) main_pane_empty_t5

0x0004,

0xe9d9,	// (0x0000e9d9) main_pane_empty_t_ParamLimits

0xe9d9,	// (0x0000e9d9) main_pane_empty_t

0x1470,	// (0x00001470) bg_popup_window_pane_ParamLimits

0x1470,	// (0x00001470) bg_popup_window_pane

0x42e3,	// (0x000042e3) find_popup_pane_cp2_ParamLimits

0x42e3,	// (0x000042e3) find_popup_pane_cp2

0x42ef,	// (0x000042ef) heading_pane_ParamLimits

0x42ef,	// (0x000042ef) heading_pane

0x024e,	// (0x0000024e) bg_popup_sub_pane

0xc881,	// (0x0000c881) bg_popup_window_pane_g1_ParamLimits

0xc881,	// (0x0000c881) bg_popup_window_pane_g1

0xc890,	// (0x0000c890) bg_popup_window_pane_g2_ParamLimits

0xc890,	// (0x0000c890) bg_popup_window_pane_g2

0xc89c,	// (0x0000c89c) bg_popup_window_pane_g3_ParamLimits

0xc89c,	// (0x0000c89c) bg_popup_window_pane_g3

0xc8a8,	// (0x0000c8a8) bg_popup_window_pane_g4_ParamLimits

0xc8a8,	// (0x0000c8a8) bg_popup_window_pane_g4

0xc8b7,	// (0x0000c8b7) bg_popup_window_pane_g5_ParamLimits

0xc8b7,	// (0x0000c8b7) bg_popup_window_pane_g5

0xc8c7,	// (0x0000c8c7) bg_popup_window_pane_g6_ParamLimits

0xc8c7,	// (0x0000c8c7) bg_popup_window_pane_g6

0xc8d3,	// (0x0000c8d3) bg_popup_window_pane_g7_ParamLimits

0xc8d3,	// (0x0000c8d3) bg_popup_window_pane_g7

0xc8e2,	// (0x0000c8e2) bg_popup_window_pane_g8_ParamLimits

0xc8e2,	// (0x0000c8e2) bg_popup_window_pane_g8

0xc8f1,	// (0x0000c8f1) bg_popup_window_pane_g9_ParamLimits

0xc8f1,	// (0x0000c8f1) bg_popup_window_pane_g9

0x42b7,	// (0x000042b7) bg_popup_window_pane_g10_ParamLimits

0x42b7,	// (0x000042b7) bg_popup_window_pane_g10

0x0009,

0xeb0f,	// (0x0000eb0f) bg_popup_window_pane_g_ParamLimits

0xeb0f,	// (0x0000eb0f) bg_popup_window_pane_g

0x41e0,	// (0x000041e0) bg_popup_heading_pane_ParamLimits

0x41e0,	// (0x000041e0) bg_popup_heading_pane

0x4d6e,	// (0x00004d6e) tabs_4_passive_pane_cp_srt_ParamLimits

0x4d6e,	// (0x00004d6e) tabs_4_passive_pane_cp_srt

0x4d80,	// (0x00004d80) tabs_4_passive_pane_srt_ParamLimits

0x41f4,	// (0x000041f4) heading_pane_g2

0x4d80,	// (0x00004d80) tabs_4_passive_pane_srt

0x343f,	// (0x0000343f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x343f,	// (0x0000343f) bg_passive_tab_pane_cp3_srt

0x41fc,	// (0x000041fc) heading_pane_t1_ParamLimits

0x41fc,	// (0x000041fc) heading_pane_t1

0x4213,	// (0x00004213) heading_pane_t2_ParamLimits

0x4213,	// (0x00004213) heading_pane_t2

0x0001,

0xa6a7,	// (0x0000a6a7) heading_pane_t_ParamLimits

0xa6a7,	// (0x0000a6a7) heading_pane_t

0x3c1e,	// (0x00003c1e) bg_popup_heading_pane_g1

0x3cc7,	// (0x00003cc7) bg_popup_heading_pane_g2

0x3ccf,	// (0x00003ccf) bg_popup_heading_pane_g3

0x3cd7,	// (0x00003cd7) bg_popup_heading_pane_g4

0x3cdf,	// (0x00003cdf) bg_popup_heading_pane_g5

0x3ce7,	// (0x00003ce7) bg_popup_heading_pane_g6

0x3cef,	// (0x00003cef) bg_popup_heading_pane_g7

0x3cf7,	// (0x00003cf7) bg_popup_heading_pane_g8

0x3cff,	// (0x00003cff) bg_popup_heading_pane_g9

0x0008,

0xa663,	// (0x0000a663) bg_popup_heading_pane_g

0x32b3,	// (0x000032b3) bg_popup_sub_pane_g1

0x32bb,	// (0x000032bb) bg_popup_sub_pane_g2

0x32c3,	// (0x000032c3) bg_popup_sub_pane_g3

0x32cb,	// (0x000032cb) bg_popup_sub_pane_g4

0x32d3,	// (0x000032d3) bg_popup_sub_pane_g5

0x32db,	// (0x000032db) bg_popup_sub_pane_g6

0x32e3,	// (0x000032e3) bg_popup_sub_pane_g7

0x32eb,	// (0x000032eb) bg_popup_sub_pane_g8

0x32f3,	// (0x000032f3) bg_popup_sub_pane_g9

0x0008,

0xa63d,	// (0x0000a63d) bg_popup_sub_pane_g

0x0798,	// (0x00000798) bg_popup_window_pane_cp5_ParamLimits

0x0798,	// (0x00000798) bg_popup_window_pane_cp5

0x07b4,	// (0x000007b4) popup_note_window_g1_ParamLimits

0x07b4,	// (0x000007b4) popup_note_window_g1

0x07c0,	// (0x000007c0) popup_note_window_t1_ParamLimits

0x07c0,	// (0x000007c0) popup_note_window_t1

0x07d6,	// (0x000007d6) popup_note_window_t2_ParamLimits

0x07d6,	// (0x000007d6) popup_note_window_t2

0x07ec,	// (0x000007ec) popup_note_window_t3_ParamLimits

0x07ec,	// (0x000007ec) popup_note_window_t3

0x0802,	// (0x00000802) popup_note_window_t4_ParamLimits

0x0802,	// (0x00000802) popup_note_window_t4

0x082a,	// (0x0000082a) popup_note_window_t5_ParamLimits

0x082a,	// (0x0000082a) popup_note_window_t5

0x0004,

0xa35b,	// (0x0000a35b) popup_note_window_t_ParamLimits

0xa35b,	// (0x0000a35b) popup_note_window_t

0x0874,	// (0x00000874) bg_popup_window_pane_cp6_ParamLimits

0x0874,	// (0x00000874) bg_popup_window_pane_cp6

0x3b9a,	// (0x00003b9a) popup_note_image_window_g1_ParamLimits

0x3b9a,	// (0x00003b9a) popup_note_image_window_g1

0x3ba6,	// (0x00003ba6) popup_note_image_window_g2_ParamLimits

0x3ba6,	// (0x00003ba6) popup_note_image_window_g2

0x0001,

0xa631,	// (0x0000a631) popup_note_image_window_g_ParamLimits

0xa631,	// (0x0000a631) popup_note_image_window_g

0x3bbf,	// (0x00003bbf) popup_note_image_window_t1_ParamLimits

0x3bbf,	// (0x00003bbf) popup_note_image_window_t1

0x3bd8,	// (0x00003bd8) popup_note_image_window_t2_ParamLimits

0x3bd8,	// (0x00003bd8) popup_note_image_window_t2

0x3bf1,	// (0x00003bf1) popup_note_image_window_t3_ParamLimits

0x3bf1,	// (0x00003bf1) popup_note_image_window_t3

0x0002,

0xa636,	// (0x0000a636) popup_note_image_window_t_ParamLimits

0xa636,	// (0x0000a636) popup_note_image_window_t

0x3a69,	// (0x00003a69) bg_popup_window_pane_cp7_ParamLimits

0x3a69,	// (0x00003a69) bg_popup_window_pane_cp7

0x3a99,	// (0x00003a99) popup_note_wait_window_g1_ParamLimits

0x3a99,	// (0x00003a99) popup_note_wait_window_g1

0x3aa5,	// (0x00003aa5) popup_note_wait_window_g2_ParamLimits

0x3aa5,	// (0x00003aa5) popup_note_wait_window_g2

0x0002,

0xa61f,	// (0x0000a61f) popup_note_wait_window_g_ParamLimits

0xa61f,	// (0x0000a61f) popup_note_wait_window_g

0x3abd,	// (0x00003abd) popup_note_wait_window_t1_ParamLimits

0x3abd,	// (0x00003abd) popup_note_wait_window_t1

0x3ae4,	// (0x00003ae4) popup_note_wait_window_t2_ParamLimits

0x3ae4,	// (0x00003ae4) popup_note_wait_window_t2

0x3b01,	// (0x00003b01) popup_note_wait_window_t3_ParamLimits

0x3b01,	// (0x00003b01) popup_note_wait_window_t3

0x3b14,	// (0x00003b14) popup_note_wait_window_t4_ParamLimits

0x3b14,	// (0x00003b14) popup_note_wait_window_t4

0x0004,

0xa626,	// (0x0000a626) popup_note_wait_window_t_ParamLimits

0xa626,	// (0x0000a626) popup_note_wait_window_t

0x3b39,	// (0x00003b39) wait_bar_pane_ParamLimits

0x3b39,	// (0x00003b39) wait_bar_pane

0x024e,	// (0x0000024e) wait_anim_pane

0x024e,	// (0x0000024e) wait_border_pane

0x002a,	// (0x0000002a) wait_anim_pane_g1

0x002a,	// (0x0000002a) wait_anim_pane_g2

0x0001,

0xa4da,	// (0x0000a4da) wait_anim_pane_g

0x3a19,	// (0x00003a19) wait_border_pane_g1

0x3a22,	// (0x00003a22) wait_border_pane_g2

0x3a2b,	// (0x00003a2b) wait_border_pane_g3

0x0002,

0xa618,	// (0x0000a618) wait_border_pane_g

0x3889,	// (0x00003889) bg_popup_window_pane_cp16_ParamLimits

0x3889,	// (0x00003889) bg_popup_window_pane_cp16

0x3989,	// (0x00003989) indicator_popup_pane_cp4_ParamLimits

0x3989,	// (0x00003989) indicator_popup_pane_cp4

0x399d,	// (0x0000399d) popup_query_data_window_t1_ParamLimits

0x399d,	// (0x0000399d) popup_query_data_window_t1

0x39af,	// (0x000039af) popup_query_data_window_t2_ParamLimits

0x39af,	// (0x000039af) popup_query_data_window_t2

0x39c8,	// (0x000039c8) popup_query_data_window_t3_ParamLimits

0x39c8,	// (0x000039c8) popup_query_data_window_t3

0x0002,

0xa611,	// (0x0000a611) popup_query_data_window_t_ParamLimits

0xa611,	// (0x0000a611) popup_query_data_window_t

0x39e2,	// (0x000039e2) query_popup_data_pane_ParamLimits

0x39e2,	// (0x000039e2) query_popup_data_pane

0x39f6,	// (0x000039f6) query_popup_data_pane_cp1_ParamLimits

0x39f6,	// (0x000039f6) query_popup_data_pane_cp1

0x3889,	// (0x00003889) bg_popup_window_pane_cp10_ParamLimits

0x3889,	// (0x00003889) bg_popup_window_pane_cp10

0x38bb,	// (0x000038bb) indicator_popup_pane_ParamLimits

0x38bb,	// (0x000038bb) indicator_popup_pane

0x38dd,	// (0x000038dd) popup_query_code_window_t1_ParamLimits

0x38dd,	// (0x000038dd) popup_query_code_window_t1

0x38f7,	// (0x000038f7) popup_query_code_window_t2_ParamLimits

0x38f7,	// (0x000038f7) popup_query_code_window_t2

0x3940,	// (0x00003940) popup_query_code_window_t3_ParamLimits

0x3940,	// (0x00003940) popup_query_code_window_t3

0x0002,

0xa60a,	// (0x0000a60a) popup_query_code_window_t_ParamLimits

0xa60a,	// (0x0000a60a) popup_query_code_window_t

0x396f,	// (0x0000396f) query_popup_pane_ParamLimits

0x396f,	// (0x0000396f) query_popup_pane

0x0874,	// (0x00000874) bg_popup_window_pane_cp15_ParamLimits

0x0874,	// (0x00000874) bg_popup_window_pane_cp15

0x0892,	// (0x00000892) indicator_popup_pane_cp1_ParamLimits

0x0892,	// (0x00000892) indicator_popup_pane_cp1

0x08a5,	// (0x000008a5) indicator_popup_pane_cp2_ParamLimits

0x08a5,	// (0x000008a5) indicator_popup_pane_cp2

0x08b8,	// (0x000008b8) popup_query_data_code_window_g1_ParamLimits

0x08b8,	// (0x000008b8) popup_query_data_code_window_g1

0x08cb,	// (0x000008cb) popup_query_data_code_window_t1_ParamLimits

0x08cb,	// (0x000008cb) popup_query_data_code_window_t1

0x08dd,	// (0x000008dd) popup_query_data_code_window_t2_ParamLimits

0x08dd,	// (0x000008dd) popup_query_data_code_window_t2

0x08ef,	// (0x000008ef) popup_query_data_code_window_t3_ParamLimits

0x08ef,	// (0x000008ef) popup_query_data_code_window_t3

0x0905,	// (0x00000905) popup_query_data_code_window_t4_ParamLimits

0x0905,	// (0x00000905) popup_query_data_code_window_t4

0x0003,

0xa366,	// (0x0000a366) popup_query_data_code_window_t_ParamLimits

0xa366,	// (0x0000a366) popup_query_data_code_window_t

0x21c6,	// (0x000021c6) list_single_midp_graphic_pane_g3

0x091d,	// (0x0000091d) query_popup_data_pane_cp2_ParamLimits

0x0930,	// (0x00000930) query_popup_pane_cp2_ParamLimits

0x0930,	// (0x00000930) query_popup_pane_cp2

0x024e,	// (0x0000024e) bg_popup_window_pane_cp11

0x386d,	// (0x0000386d) heading_pane_cp5

0x3875,	// (0x00003875) listscroll_popup_info_pane

0x024e,	// (0x0000024e) input_focus_pane_cp3

0x0943,	// (0x00000943) query_popup_pane_t1

0x0951,	// (0x00000951) list_popup_info_pane_ParamLimits

0x0951,	// (0x00000951) list_popup_info_pane

0x0960,	// (0x00000960) listscroll_popup_info_pane_g1

0x0968,	// (0x00000968) scroll_pane_cp7

0x0970,	// (0x00000970) popup_info_list_pane_t1_ParamLimits

0x0970,	// (0x00000970) popup_info_list_pane_t1

0x098a,	// (0x0000098a) popup_info_list_pane_t2_ParamLimits

0x098a,	// (0x0000098a) popup_info_list_pane_t2

0x0001,

0xa36f,	// (0x0000a36f) popup_info_list_pane_t_ParamLimits

0xa36f,	// (0x0000a36f) popup_info_list_pane_t

0x024e,	// (0x0000024e) bg_popup_window_pane_cp12

0x4e3e,	// (0x00004e3e) find_popup_pane

0x0474,	// (0x00000474) bg_popup_window_pane_cp3

0x09a4,	// (0x000009a4) heading_pane_cp3

0x09b3,	// (0x000009b3) listscroll_popup_graphic_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp4

0xb232,	// (0x0000b232) heading_pane_cp4

0x0a1a,	// (0x00000a1a) listscroll_popup_colour_pane

0x0a22,	// (0x00000a22) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a22,	// (0x00000a22) cell_large_graphic_colour_none_popup_pane

0xb23a,	// (0x0000b23a) grid_large_graphic_colour_popup_pane_ParamLimits

0xb23a,	// (0x0000b23a) grid_large_graphic_colour_popup_pane

0xb256,	// (0x0000b256) listscroll_popup_colour_pane_g1_ParamLimits

0xb256,	// (0x0000b256) listscroll_popup_colour_pane_g1

0xb26d,	// (0x0000b26d) listscroll_popup_colour_pane_g2_ParamLimits

0xb26d,	// (0x0000b26d) listscroll_popup_colour_pane_g2

0x0a79,	// (0x00000a79) listscroll_popup_colour_pane_g3_ParamLimits

0x0a79,	// (0x00000a79) listscroll_popup_colour_pane_g3

0xb281,	// (0x0000b281) listscroll_popup_colour_pane_g4_ParamLimits

0xb281,	// (0x0000b281) listscroll_popup_colour_pane_g4

0x0003,

0xe9e4,	// (0x0000e9e4) listscroll_popup_colour_pane_g_ParamLimits

0xe9e4,	// (0x0000e9e4) listscroll_popup_colour_pane_g

0x0a98,	// (0x00000a98) scroll_pane_cp6_ParamLimits

0x0a98,	// (0x00000a98) scroll_pane_cp6

0xb290,	// (0x0000b290) cell_large_graphic_colour_popup_pane_ParamLimits

0xb290,	// (0x0000b290) cell_large_graphic_colour_popup_pane

0x0ac9,	// (0x00000ac9) cell_large_graphic_colour_none_popup_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp5

0x0ad8,	// (0x00000ad8) cell_large_graphic_colour_popup_pane_g1

0x0ae0,	// (0x00000ae0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa37d,	// (0x0000a37d) cell_large_graphic_colour_popup_pane_g

0x0ae8,	// (0x00000ae8) cell_large_graphic_colour_popup_pane_g2_copy1

0x0af1,	// (0x00000af1) grid_highlight_pane_cp4

0x0af9,	// (0x00000af9) bg_popup_window_pane_cp8_ParamLimits

0x0af9,	// (0x00000af9) bg_popup_window_pane_cp8

0x0b14,	// (0x00000b14) popup_snote_single_text_window_g1_ParamLimits

0x0b14,	// (0x00000b14) popup_snote_single_text_window_g1

0x0b26,	// (0x00000b26) popup_snote_single_text_window_t1_ParamLimits

0x0b26,	// (0x00000b26) popup_snote_single_text_window_t1

0x0b39,	// (0x00000b39) popup_snote_single_text_window_t2_ParamLimits

0x0b39,	// (0x00000b39) popup_snote_single_text_window_t2

0x0b4c,	// (0x00000b4c) popup_snote_single_text_window_t3_ParamLimits

0x0b4c,	// (0x00000b4c) popup_snote_single_text_window_t3

0x0b85,	// (0x00000b85) popup_snote_single_text_window_t4_ParamLimits

0x0b85,	// (0x00000b85) popup_snote_single_text_window_t4

0x0bb9,	// (0x00000bb9) popup_snote_single_text_window_t5_ParamLimits

0x0bb9,	// (0x00000bb9) popup_snote_single_text_window_t5

0x0004,

0xa382,	// (0x0000a382) popup_snote_single_text_window_t_ParamLimits

0xa382,	// (0x0000a382) popup_snote_single_text_window_t

0x0be8,	// (0x00000be8) bg_popup_window_pane_cp9_ParamLimits

0x0be8,	// (0x00000be8) bg_popup_window_pane_cp9

0x0b14,	// (0x00000b14) popup_snote_single_graphic_window_g1_ParamLimits

0x0b14,	// (0x00000b14) popup_snote_single_graphic_window_g1

0x0bf6,	// (0x00000bf6) popup_snote_single_graphic_window_g2_ParamLimits

0x0bf6,	// (0x00000bf6) popup_snote_single_graphic_window_g2

0x0001,

0xa38d,	// (0x0000a38d) popup_snote_single_graphic_window_g_ParamLimits

0xa38d,	// (0x0000a38d) popup_snote_single_graphic_window_g

0x0c02,	// (0x00000c02) popup_snote_single_graphic_window_t1_ParamLimits

0x0c02,	// (0x00000c02) popup_snote_single_graphic_window_t1

0x0c15,	// (0x00000c15) popup_snote_single_graphic_window_t2_ParamLimits

0x0c15,	// (0x00000c15) popup_snote_single_graphic_window_t2

0x0b4c,	// (0x00000b4c) popup_snote_single_graphic_window_t3_ParamLimits

0x0b4c,	// (0x00000b4c) popup_snote_single_graphic_window_t3

0x0b85,	// (0x00000b85) popup_snote_single_graphic_window_t4_ParamLimits

0x0b85,	// (0x00000b85) popup_snote_single_graphic_window_t4

0x0bb9,	// (0x00000bb9) popup_snote_single_graphic_window_t5_ParamLimits

0x0bb9,	// (0x00000bb9) popup_snote_single_graphic_window_t5

0x0004,

0xa392,	// (0x0000a392) popup_snote_single_graphic_window_t_ParamLimits

0xa392,	// (0x0000a392) popup_snote_single_graphic_window_t

0xcc52,	// (0x0000cc52) grid_graphic_popup_pane_ParamLimits

0xcc52,	// (0x0000cc52) grid_graphic_popup_pane

0xcc75,	// (0x0000cc75) listscroll_popup_graphic_pane_g1_ParamLimits

0xcc75,	// (0x0000cc75) listscroll_popup_graphic_pane_g1

0xcc89,	// (0x0000cc89) listscroll_popup_graphic_pane_g2_ParamLimits

0xcc89,	// (0x0000cc89) listscroll_popup_graphic_pane_g2

0x0001,

0xeb95,	// (0x0000eb95) listscroll_popup_graphic_pane_g_ParamLimits

0xeb95,	// (0x0000eb95) listscroll_popup_graphic_pane_g

0x4d3e,	// (0x00004d3e) scroll_pane_cp5

0xcc0e,	// (0x0000cc0e) cell_graphic_popup_pane_ParamLimits

0xcc0e,	// (0x0000cc0e) cell_graphic_popup_pane

0x4c78,	// (0x00004c78) cell_graphic_popup_pane_g1

0x4c80,	// (0x00004c80) cell_graphic_popup_pane_g2

0x0ae8,	// (0x00000ae8) cell_graphic_popup_pane_g3

0x0002,

0xa780,	// (0x0000a780) cell_graphic_popup_pane_g

0x4c89,	// (0x00004c89) cell_graphic_popup_pane_t2

0x0af1,	// (0x00000af1) grid_highlight_pane_cp3

0x0c3a,	// (0x00000c3a) list_gen_pane_ParamLimits

0x0c3a,	// (0x00000c3a) list_gen_pane

0x0c6b,	// (0x00000c6b) scroll_pane

0xcbe1,	// (0x0000cbe1) bg_list_pane_g1_ParamLimits

0xcbe1,	// (0x0000cbe1) bg_list_pane_g1

0x4c0f,	// (0x00004c0f) bg_list_pane_g2_ParamLimits

0x4c0f,	// (0x00004c0f) bg_list_pane_g2

0x4c22,	// (0x00004c22) bg_list_pane_g3_ParamLimits

0x4c22,	// (0x00004c22) bg_list_pane_g3

0x4c34,	// (0x00004c34) bg_list_pane_g4_ParamLimits

0x4c34,	// (0x00004c34) bg_list_pane_g4

0xcbfc,	// (0x0000cbfc) bg_list_pane_g5_ParamLimits

0xcbfc,	// (0x0000cbfc) bg_list_pane_g5

0x0004,

0xeb8a,	// (0x0000eb8a) bg_list_pane_g_ParamLimits

0xeb8a,	// (0x0000eb8a) bg_list_pane_g

0xcb81,	// (0x0000cb81) list_double2_graphic_large_graphic_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double2_graphic_large_graphic_pane

0xcb81,	// (0x0000cb81) list_double2_graphic_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double2_graphic_pane

0xcb81,	// (0x0000cb81) list_double2_large_graphic_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double2_large_graphic_pane

0xcb81,	// (0x0000cb81) list_double2_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double2_pane

0xcb81,	// (0x0000cb81) list_double_graphic_heading_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double_graphic_heading_pane

0xcb81,	// (0x0000cb81) list_double_graphic_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double_graphic_pane

0xcb81,	// (0x0000cb81) list_double_heading_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double_heading_pane

0xcb81,	// (0x0000cb81) list_double_large_graphic_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double_large_graphic_pane

0xcb81,	// (0x0000cb81) list_double_number_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double_number_pane

0xcb81,	// (0x0000cb81) list_double_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double_pane

0xcb81,	// (0x0000cb81) list_double_time_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_double_time_pane

0xcb81,	// (0x0000cb81) list_setting_number_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_setting_number_pane

0xcb81,	// (0x0000cb81) list_setting_pane_ParamLimits

0xcb81,	// (0x0000cb81) list_setting_pane

0xcb92,	// (0x0000cb92) list_single_2graphic_pane_ParamLimits

0xcb92,	// (0x0000cb92) list_single_2graphic_pane

0xcb92,	// (0x0000cb92) list_single_graphic_heading_pane_ParamLimits

0xcb92,	// (0x0000cb92) list_single_graphic_heading_pane

0xcb92,	// (0x0000cb92) list_single_graphic_pane_ParamLimits

0xcb92,	// (0x0000cb92) list_single_graphic_pane

0xcb92,	// (0x0000cb92) list_single_heading_pane_ParamLimits

0xcb92,	// (0x0000cb92) list_single_heading_pane

0xcbcf,	// (0x0000cbcf) list_single_large_graphic_pane_ParamLimits

0xcbcf,	// (0x0000cbcf) list_single_large_graphic_pane

0xcb92,	// (0x0000cb92) list_single_number_heading_pane_ParamLimits

0xcb92,	// (0x0000cb92) list_single_number_heading_pane

0xcb92,	// (0x0000cb92) list_single_number_pane_ParamLimits

0xcb92,	// (0x0000cb92) list_single_number_pane

0xcb92,	// (0x0000cb92) list_single_pane_ParamLimits

0xcb92,	// (0x0000cb92) list_single_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp1

0x21ba,	// (0x000021ba) list_single_pane_g1_ParamLimits

0x21ba,	// (0x000021ba) list_single_pane_g1

0x3162,	// (0x00003162) list_single_pane_g2_ParamLimits

0x3162,	// (0x00003162) list_single_pane_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_single_pane_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_single_pane_g

0x53f2,	// (0x000053f2) list_single_pane_t1_ParamLimits

0x53f2,	// (0x000053f2) list_single_pane_t1

0x21ba,	// (0x000021ba) list_single_number_pane_g1_ParamLimits

0x21ba,	// (0x000021ba) list_single_number_pane_g1

0x3162,	// (0x00003162) list_single_number_pane_g2_ParamLimits

0x3162,	// (0x00003162) list_single_number_pane_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_single_number_pane_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_single_number_pane_g

0x3243,	// (0x00003243) list_single_number_pane_t1_ParamLimits

0x3243,	// (0x00003243) list_single_number_pane_t1

0xc9f1,	// (0x0000c9f1) list_single_number_pane_t2_ParamLimits

0xc9f1,	// (0x0000c9f1) list_single_number_pane_t2

0x0001,

0xeb4b,	// (0x0000eb4b) list_single_number_pane_t_ParamLimits

0xeb4b,	// (0x0000eb4b) list_single_number_pane_t

0x3237,	// (0x00003237) list_single_graphic_pane_g1_ParamLimits

0x3237,	// (0x00003237) list_single_graphic_pane_g1

0x21ba,	// (0x000021ba) list_single_graphic_pane_g2_ParamLimits

0x21ba,	// (0x000021ba) list_single_graphic_pane_g2

0x3162,	// (0x00003162) list_single_graphic_pane_g3_ParamLimits

0x3162,	// (0x00003162) list_single_graphic_pane_g3

0x0002,

0xa595,	// (0x0000a595) list_single_graphic_pane_g_ParamLimits

0xa595,	// (0x0000a595) list_single_graphic_pane_g

0x3243,	// (0x00003243) list_single_graphic_pane_t1_ParamLimits

0x3243,	// (0x00003243) list_single_graphic_pane_t1

0x21ba,	// (0x000021ba) list_single_heading_pane_g1_ParamLimits

0x21ba,	// (0x000021ba) list_single_heading_pane_g1

0x3162,	// (0x00003162) list_single_heading_pane_g2_ParamLimits

0x3162,	// (0x00003162) list_single_heading_pane_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_single_heading_pane_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_single_heading_pane_g

0xb2b7,	// (0x0000b2b7) list_single_heading_pane_t1_ParamLimits

0xb2b7,	// (0x0000b2b7) list_single_heading_pane_t1

0xb2cd,	// (0x0000b2cd) list_single_heading_pane_t2_ParamLimits

0xb2cd,	// (0x0000b2cd) list_single_heading_pane_t2

0x0001,

0xe9ed,	// (0x0000e9ed) list_single_heading_pane_t_ParamLimits

0xe9ed,	// (0x0000e9ed) list_single_heading_pane_t

0x21ba,	// (0x000021ba) list_single_number_heading_pane_g1_ParamLimits

0x21ba,	// (0x000021ba) list_single_number_heading_pane_g1

0x3162,	// (0x00003162) list_single_number_heading_pane_g2_ParamLimits

0x3162,	// (0x00003162) list_single_number_heading_pane_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_single_number_heading_pane_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_single_number_heading_pane_g

0xb2b7,	// (0x0000b2b7) list_single_number_heading_pane_t1_ParamLimits

0xb2b7,	// (0x0000b2b7) list_single_number_heading_pane_t1

0xb2df,	// (0x0000b2df) list_single_number_heading_pane_t2_ParamLimits

0xb2df,	// (0x0000b2df) list_single_number_heading_pane_t2

0x21f6,	// (0x000021f6) list_single_number_heading_pane_t3_ParamLimits

0x21f6,	// (0x000021f6) list_single_number_heading_pane_t3

0x0002,

0xe9f2,	// (0x0000e9f2) list_single_number_heading_pane_t_ParamLimits

0xe9f2,	// (0x0000e9f2) list_single_number_heading_pane_t

0x3237,	// (0x00003237) list_single_graphic_heading_pane_g1_ParamLimits

0x3237,	// (0x00003237) list_single_graphic_heading_pane_g1

0xb2f1,	// (0x0000b2f1) list_single_graphic_heading_pane_g4_ParamLimits

0xb2f1,	// (0x0000b2f1) list_single_graphic_heading_pane_g4

0x3162,	// (0x00003162) list_single_graphic_heading_pane_g5_ParamLimits

0x3162,	// (0x00003162) list_single_graphic_heading_pane_g5

0x0002,

0xe9f9,	// (0x0000e9f9) list_single_graphic_heading_pane_g_ParamLimits

0xe9f9,	// (0x0000e9f9) list_single_graphic_heading_pane_g

0xb2b7,	// (0x0000b2b7) list_single_graphic_heading_pane_t1_ParamLimits

0xb2b7,	// (0x0000b2b7) list_single_graphic_heading_pane_t1

0xb302,	// (0x0000b302) list_single_graphic_heading_pane_t2_ParamLimits

0xb302,	// (0x0000b302) list_single_graphic_heading_pane_t2

0x0001,

0xea00,	// (0x0000ea00) list_single_graphic_heading_pane_t_ParamLimits

0xea00,	// (0x0000ea00) list_single_graphic_heading_pane_t

0x0d47,	// (0x00000d47) list_single_large_graphic_pane_g1_ParamLimits

0x0d47,	// (0x00000d47) list_single_large_graphic_pane_g1

0x0d53,	// (0x00000d53) list_single_large_graphic_pane_g2_ParamLimits

0x0d53,	// (0x00000d53) list_single_large_graphic_pane_g2

0x0d5f,	// (0x00000d5f) list_single_large_graphic_pane_g3_ParamLimits

0x0d5f,	// (0x00000d5f) list_single_large_graphic_pane_g3

0x0002,

0xa3c1,	// (0x0000a3c1) list_single_large_graphic_pane_g_ParamLimits

0xa3c1,	// (0x0000a3c1) list_single_large_graphic_pane_g

0x3a22,	// (0x00003a22) wait_border_pane_g2_copy1

0x0d6b,	// (0x00000d6b) list_single_large_graphic_pane_g4_cp2

0x0d73,	// (0x00000d73) list_single_large_graphic_pane_t1_ParamLimits

0x0d73,	// (0x00000d73) list_single_large_graphic_pane_t1

0x2230,	// (0x00002230) list_double_pane_g1_ParamLimits

0x2230,	// (0x00002230) list_double_pane_g1

0xb314,	// (0x0000b314) list_double_pane_g2_ParamLimits

0xb314,	// (0x0000b314) list_double_pane_g2

0x0001,

0xea05,	// (0x0000ea05) list_double_pane_g_ParamLimits

0xea05,	// (0x0000ea05) list_double_pane_g

0xb320,	// (0x0000b320) list_double_pane_t1_ParamLimits

0xb320,	// (0x0000b320) list_double_pane_t1

0xb336,	// (0x0000b336) list_double_pane_t2_ParamLimits

0xb336,	// (0x0000b336) list_double_pane_t2

0x0001,

0xea0a,	// (0x0000ea0a) list_double_pane_t_ParamLimits

0xea0a,	// (0x0000ea0a) list_double_pane_t

0xb348,	// (0x0000b348) list_double2_pane_g1_ParamLimits

0xb348,	// (0x0000b348) list_double2_pane_g1

0x0d95,	// (0x00000d95) list_double2_pane_g2_ParamLimits

0x0d95,	// (0x00000d95) list_double2_pane_g2

0x0001,

0xea0f,	// (0x0000ea0f) list_double2_pane_g_ParamLimits

0xea0f,	// (0x0000ea0f) list_double2_pane_g

0x0da1,	// (0x00000da1) list_double2_pane_t1_ParamLimits

0x0da1,	// (0x00000da1) list_double2_pane_t1

0xb359,	// (0x0000b359) list_double2_pane_t2_ParamLimits

0xb359,	// (0x0000b359) list_double2_pane_t2

0x0001,

0xea14,	// (0x0000ea14) list_double2_pane_t_ParamLimits

0xea14,	// (0x0000ea14) list_double2_pane_t

0x2230,	// (0x00002230) list_double_number_pane_g1_ParamLimits

0x2230,	// (0x00002230) list_double_number_pane_g1

0xb314,	// (0x0000b314) list_double_number_pane_g2_ParamLimits

0xb314,	// (0x0000b314) list_double_number_pane_g2

0x0001,

0xea05,	// (0x0000ea05) list_double_number_pane_g_ParamLimits

0xea05,	// (0x0000ea05) list_double_number_pane_g

0xb36b,	// (0x0000b36b) list_double_number_pane_t1_ParamLimits

0xb36b,	// (0x0000b36b) list_double_number_pane_t1

0xb37d,	// (0x0000b37d) list_double_number_pane_t2_ParamLimits

0xb37d,	// (0x0000b37d) list_double_number_pane_t2

0xb393,	// (0x0000b393) list_double_number_pane_t3_ParamLimits

0xb393,	// (0x0000b393) list_double_number_pane_t3

0x0002,

0xea19,	// (0x0000ea19) list_double_number_pane_t_ParamLimits

0xea19,	// (0x0000ea19) list_double_number_pane_t

0xb3a5,	// (0x0000b3a5) list_double_graphic_pane_g1_ParamLimits

0xb3a5,	// (0x0000b3a5) list_double_graphic_pane_g1

0x4341,	// (0x00004341) list_double_graphic_pane_g2_ParamLimits

0x4341,	// (0x00004341) list_double_graphic_pane_g2

0xb3b1,	// (0x0000b3b1) list_double_graphic_pane_g3_ParamLimits

0xb3b1,	// (0x0000b3b1) list_double_graphic_pane_g3

0x0003,

0xea20,	// (0x0000ea20) list_double_graphic_pane_g_ParamLimits

0xea20,	// (0x0000ea20) list_double_graphic_pane_g

0xb3c9,	// (0x0000b3c9) list_double_graphic_pane_t1_ParamLimits

0xb3c9,	// (0x0000b3c9) list_double_graphic_pane_t1

0xb3df,	// (0x0000b3df) list_double_graphic_pane_t2_ParamLimits

0xb3df,	// (0x0000b3df) list_double_graphic_pane_t2

0x0001,

0xea29,	// (0x0000ea29) list_double_graphic_pane_t_ParamLimits

0xea29,	// (0x0000ea29) list_double_graphic_pane_t

0x0e46,	// (0x00000e46) list_double2_graphic_pane_g1_ParamLimits

0x0e46,	// (0x00000e46) list_double2_graphic_pane_g1

0x0d89,	// (0x00000d89) list_double2_graphic_pane_g2_ParamLimits

0x0d89,	// (0x00000d89) list_double2_graphic_pane_g2

0x0d95,	// (0x00000d95) list_double2_graphic_pane_g3_ParamLimits

0x0d95,	// (0x00000d95) list_double2_graphic_pane_g3

0x0002,

0xea2e,	// (0x0000ea2e) list_double2_graphic_pane_g_ParamLimits

0xea2e,	// (0x0000ea2e) list_double2_graphic_pane_g

0x0e1e,	// (0x00000e1e) list_double2_graphic_pane_t1_ParamLimits

0x0e1e,	// (0x00000e1e) list_double2_graphic_pane_t1

0xb3f1,	// (0x0000b3f1) list_double2_graphic_pane_t2_ParamLimits

0xb3f1,	// (0x0000b3f1) list_double2_graphic_pane_t2

0x0001,

0xea35,	// (0x0000ea35) list_double2_graphic_pane_t_ParamLimits

0xea35,	// (0x0000ea35) list_double2_graphic_pane_t

0xb403,	// (0x0000b403) list_double_large_graphic_pane_g1_ParamLimits

0xb403,	// (0x0000b403) list_double_large_graphic_pane_g1

0xb42c,	// (0x0000b42c) list_double_large_graphic_pane_g2_ParamLimits

0xb42c,	// (0x0000b42c) list_double_large_graphic_pane_g2

0xb314,	// (0x0000b314) list_double_large_graphic_pane_g3_ParamLimits

0xb314,	// (0x0000b314) list_double_large_graphic_pane_g3

0xb43d,	// (0x0000b43d) list_double_large_graphic_pane_g4_ParamLimits

0xb43d,	// (0x0000b43d) list_double_large_graphic_pane_g4

0x0004,

0xea3a,	// (0x0000ea3a) list_double_large_graphic_pane_g_ParamLimits

0xea3a,	// (0x0000ea3a) list_double_large_graphic_pane_g

0xb44e,	// (0x0000b44e) list_double_large_graphic_pane_t1_ParamLimits

0xb44e,	// (0x0000b44e) list_double_large_graphic_pane_t1

0xb467,	// (0x0000b467) list_double_large_graphic_pane_t2_ParamLimits

0xb467,	// (0x0000b467) list_double_large_graphic_pane_t2

0x0001,

0xea45,	// (0x0000ea45) list_double_large_graphic_pane_t_ParamLimits

0xea45,	// (0x0000ea45) list_double_large_graphic_pane_t

0xb479,	// (0x0000b479) list_double2_large_graphic_pane_g1_ParamLimits

0xb479,	// (0x0000b479) list_double2_large_graphic_pane_g1

0xb348,	// (0x0000b348) list_double2_large_graphic_pane_g2_ParamLimits

0xb348,	// (0x0000b348) list_double2_large_graphic_pane_g2

0x0d95,	// (0x00000d95) list_double2_large_graphic_pane_g3_ParamLimits

0x0d95,	// (0x00000d95) list_double2_large_graphic_pane_g3

0x0002,

0xea4a,	// (0x0000ea4a) list_double2_large_graphic_pane_g_ParamLimits

0xea4a,	// (0x0000ea4a) list_double2_large_graphic_pane_g

0x0fca,	// (0x00000fca) list_double2_large_graphic_pane_t1_ParamLimits

0x0fca,	// (0x00000fca) list_double2_large_graphic_pane_t1

0xb485,	// (0x0000b485) list_double2_large_graphic_pane_t2_ParamLimits

0xb485,	// (0x0000b485) list_double2_large_graphic_pane_t2

0x0001,

0xea51,	// (0x0000ea51) list_double2_large_graphic_pane_t_ParamLimits

0xea51,	// (0x0000ea51) list_double2_large_graphic_pane_t

0xb497,	// (0x0000b497) list_double_heading_pane_g1_ParamLimits

0xb497,	// (0x0000b497) list_double_heading_pane_g1

0xb4a8,	// (0x0000b4a8) list_double_heading_pane_g2_ParamLimits

0xb4a8,	// (0x0000b4a8) list_double_heading_pane_g2

0x0001,

0xea56,	// (0x0000ea56) list_double_heading_pane_g_ParamLimits

0xea56,	// (0x0000ea56) list_double_heading_pane_g

0xb4b4,	// (0x0000b4b4) list_double_heading_pane_t1_ParamLimits

0xb4b4,	// (0x0000b4b4) list_double_heading_pane_t1

0xb359,	// (0x0000b359) list_double_heading_pane_t2_ParamLimits

0xb359,	// (0x0000b359) list_double_heading_pane_t2

0x0001,

0xea5b,	// (0x0000ea5b) list_double_heading_pane_t_ParamLimits

0xea5b,	// (0x0000ea5b) list_double_heading_pane_t

0x0ea1,	// (0x00000ea1) list_double_graphic_heading_pane_g1_ParamLimits

0x0ea1,	// (0x00000ea1) list_double_graphic_heading_pane_g1

0xb497,	// (0x0000b497) list_double_graphic_heading_pane_g2_ParamLimits

0xb497,	// (0x0000b497) list_double_graphic_heading_pane_g2

0xb4a8,	// (0x0000b4a8) list_double_graphic_heading_pane_g3_ParamLimits

0xb4a8,	// (0x0000b4a8) list_double_graphic_heading_pane_g3

0x0002,

0xea60,	// (0x0000ea60) list_double_graphic_heading_pane_g_ParamLimits

0xea60,	// (0x0000ea60) list_double_graphic_heading_pane_g

0xb4ca,	// (0x0000b4ca) list_double_graphic_heading_pane_t1_ParamLimits

0xb4ca,	// (0x0000b4ca) list_double_graphic_heading_pane_t1

0xb3f1,	// (0x0000b3f1) list_double_graphic_heading_pane_t2_ParamLimits

0xb3f1,	// (0x0000b3f1) list_double_graphic_heading_pane_t2

0x0001,

0xea67,	// (0x0000ea67) list_double_graphic_heading_pane_t_ParamLimits

0xea67,	// (0x0000ea67) list_double_graphic_heading_pane_t

0xb42c,	// (0x0000b42c) list_double_time_pane_g1_ParamLimits

0xb42c,	// (0x0000b42c) list_double_time_pane_g1

0xb314,	// (0x0000b314) list_double_time_pane_g2_ParamLimits

0xb314,	// (0x0000b314) list_double_time_pane_g2

0x0001,

0xea6c,	// (0x0000ea6c) list_double_time_pane_g_ParamLimits

0xea6c,	// (0x0000ea6c) list_double_time_pane_g

0xb4e0,	// (0x0000b4e0) list_double_time_pane_t1_ParamLimits

0xb4e0,	// (0x0000b4e0) list_double_time_pane_t1

0xb4f6,	// (0x0000b4f6) list_double_time_pane_t2_ParamLimits

0xb4f6,	// (0x0000b4f6) list_double_time_pane_t2

0xb508,	// (0x0000b508) list_double_time_pane_t3_ParamLimits

0xb508,	// (0x0000b508) list_double_time_pane_t3

0xb51a,	// (0x0000b51a) list_double_time_pane_t4_ParamLimits

0xb51a,	// (0x0000b51a) list_double_time_pane_t4

0x0003,

0xea71,	// (0x0000ea71) list_double_time_pane_t_ParamLimits

0xea71,	// (0x0000ea71) list_double_time_pane_t

0x0d89,	// (0x00000d89) list_setting_pane_g1_ParamLimits

0x0d89,	// (0x00000d89) list_setting_pane_g1

0x0d95,	// (0x00000d95) list_setting_pane_g2_ParamLimits

0x0d95,	// (0x00000d95) list_setting_pane_g2

0x0001,

0xa3c8,	// (0x0000a3c8) list_setting_pane_g_ParamLimits

0xa3c8,	// (0x0000a3c8) list_setting_pane_g

0xb52c,	// (0x0000b52c) list_setting_pane_t1_ParamLimits

0xb52c,	// (0x0000b52c) list_setting_pane_t1

0xb543,	// (0x0000b543) list_setting_pane_t2_ParamLimits

0xb543,	// (0x0000b543) list_setting_pane_t2

0x0002,

0xea7a,	// (0x0000ea7a) list_setting_pane_t_ParamLimits

0xea7a,	// (0x0000ea7a) list_setting_pane_t

0xb580,	// (0x0000b580) set_value_pane_cp_ParamLimits

0xb580,	// (0x0000b580) set_value_pane_cp

0x0d89,	// (0x00000d89) list_setting_number_pane_g1_ParamLimits

0x0d89,	// (0x00000d89) list_setting_number_pane_g1

0x0d95,	// (0x00000d95) list_setting_number_pane_g2_ParamLimits

0x0d95,	// (0x00000d95) list_setting_number_pane_g2

0x0001,

0xa3c8,	// (0x0000a3c8) list_setting_number_pane_g_ParamLimits

0xa3c8,	// (0x0000a3c8) list_setting_number_pane_g

0xb58c,	// (0x0000b58c) list_setting_number_pane_t1_ParamLimits

0xb58c,	// (0x0000b58c) list_setting_number_pane_t1

0xb5a0,	// (0x0000b5a0) list_setting_number_pane_t2_ParamLimits

0xb5a0,	// (0x0000b5a0) list_setting_number_pane_t2

0xb5b7,	// (0x0000b5b7) list_setting_number_pane_t3_ParamLimits

0xb5b7,	// (0x0000b5b7) list_setting_number_pane_t3

0x0003,

0xea81,	// (0x0000ea81) list_setting_number_pane_t_ParamLimits

0xea81,	// (0x0000ea81) list_setting_number_pane_t

0xb580,	// (0x0000b580) set_value_pane_ParamLimits

0xb580,	// (0x0000b580) set_value_pane

0x10e0,	// (0x000010e0) bg_set_opt_pane_ParamLimits

0x10e0,	// (0x000010e0) bg_set_opt_pane

0x1101,	// (0x00001101) set_value_pane_t1

0x110f,	// (0x0000110f) slider_set_pane_cp3

0x1118,	// (0x00001118) volume_small_pane_cp

0x1121,	// (0x00001121) list_form_gen_pane

0x0c8f,	// (0x00000c8f) scroll_pane_cp8

0x57bb,	// (0x000057bb) form_field_data_pane_ParamLimits

0x57bb,	// (0x000057bb) form_field_data_pane

0xb5fa,	// (0x0000b5fa) form_field_data_wide_pane_ParamLimits

0xb5fa,	// (0x0000b5fa) form_field_data_wide_pane

0xb61a,	// (0x0000b61a) form_field_popup_pane_ParamLimits

0xb61a,	// (0x0000b61a) form_field_popup_pane

0xb632,	// (0x0000b632) form_field_popup_wide_pane_ParamLimits

0xb632,	// (0x0000b632) form_field_popup_wide_pane

0x11a8,	// (0x000011a8) form_field_slider_pane_ParamLimits

0x11a8,	// (0x000011a8) form_field_slider_pane

0x11bb,	// (0x000011bb) form_field_slider_wide_pane_ParamLimits

0x11bb,	// (0x000011bb) form_field_slider_wide_pane

0x11ce,	// (0x000011ce) data_form_pane

0xb653,	// (0x0000b653) form_field_data_pane_t1

0x11fa,	// (0x000011fa) input_focus_pane

0x1208,	// (0x00001208) data_form_wide_pane

0x1234,	// (0x00001234) form_field_data_wide_pane_t1

0x0b06,	// (0x00000b06) input_focus_pane_cp6

0xb66b,	// (0x0000b66b) form_field_popup_pane_t1

0x11fa,	// (0x000011fa) input_focus_pane_cp7

0x11ce,	// (0x000011ce) list_form_pane

0x1273,	// (0x00001273) form_field_popup_wide_pane_t1

0x11fa,	// (0x000011fa) input_focus_pane_cp8

0x1288,	// (0x00001288) list_form_wide_pane

0xb68b,	// (0x0000b68b) form_field_slider_pane_t1_ParamLimits

0xb68b,	// (0x0000b68b) form_field_slider_pane_t1

0xb6a1,	// (0x0000b6a1) form_field_slider_pane_t2_ParamLimits

0xb6a1,	// (0x0000b6a1) form_field_slider_pane_t2

0x0001,

0xea8a,	// (0x0000ea8a) form_field_slider_pane_t_ParamLimits

0xea8a,	// (0x0000ea8a) form_field_slider_pane_t

0x0798,	// (0x00000798) input_focus_pane_cp9_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp9

0xb6b6,	// (0x0000b6b6) slider_cont_pane_ParamLimits

0xb6b6,	// (0x0000b6b6) slider_cont_pane

0x12db,	// (0x000012db) form_field_slider_wide_pane_t1_ParamLimits

0x12db,	// (0x000012db) form_field_slider_wide_pane_t1

0x12ed,	// (0x000012ed) form_field_slider_wide_pane_t2_ParamLimits

0x12ed,	// (0x000012ed) form_field_slider_wide_pane_t2

0x0001,

0xa45e,	// (0x0000a45e) form_field_slider_wide_pane_t_ParamLimits

0xa45e,	// (0x0000a45e) form_field_slider_wide_pane_t

0x0798,	// (0x00000798) input_focus_pane_cp10_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp10

0xb6ca,	// (0x0000b6ca) slider_cont_pane_cp1_ParamLimits

0xb6ca,	// (0x0000b6ca) slider_cont_pane_cp1

0xb6e0,	// (0x0000b6e0) slider_form_pane_cp

0x131d,	// (0x0000131d) input_focus_pane_g1

0x1325,	// (0x00001325) input_focus_pane_g2

0x132d,	// (0x0000132d) input_focus_pane_g3

0x1335,	// (0x00001335) input_focus_pane_g4

0x133d,	// (0x0000133d) input_focus_pane_g5

0x1345,	// (0x00001345) input_focus_pane_g6

0x134d,	// (0x0000134d) input_focus_pane_g7

0x1355,	// (0x00001355) input_focus_pane_g8

0x135d,	// (0x0000135d) input_focus_pane_g9

0x002a,	// (0x0000002a) input_focus_pane_g10

0x0009,

0xa463,	// (0x0000a463) input_focus_pane_g

0x3a2b,	// (0x00003a2b) wait_border_pane_g3_copy1

0xb6e8,	// (0x0000b6e8) data_form_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g1_copy1

0xcb68,	// (0x0000cb68) data_form_wide_pane_t1

0xb701,	// (0x0000b701) list_form_graphic_pane_cp_ParamLimits

0xb701,	// (0x0000b701) list_form_graphic_pane_cp

0x4aa4,	// (0x00004aa4) slider_form_pane_g1

0x4aad,	// (0x00004aad) slider_form_pane_g2

0x0006,

0xeb7b,	// (0x0000eb7b) slider_form_pane_g

0x137f,	// (0x0000137f) list_form_graphic_pane_ParamLimits

0x137f,	// (0x0000137f) list_form_graphic_pane

0x13aa,	// (0x000013aa) list_form_graphic_pane_g1

0x13b2,	// (0x000013b2) list_form_graphic_pane_t1_ParamLimits

0x13b2,	// (0x000013b2) list_form_graphic_pane_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5

0xb715,	// (0x0000b715) find_pane_g1

0x13d0,	// (0x000013d0) input_find_pane

0xb720,	// (0x0000b720) input_find_pane_g1_ParamLimits

0xb720,	// (0x0000b720) input_find_pane_g1

0xb72c,	// (0x0000b72c) input_find_pane_t1_ParamLimits

0xb72c,	// (0x0000b72c) input_find_pane_t1

0xb741,	// (0x0000b741) input_find_pane_t2_ParamLimits

0xb741,	// (0x0000b741) input_find_pane_t2

0x0001,

0xea8f,	// (0x0000ea8f) input_find_pane_t_ParamLimits

0xea8f,	// (0x0000ea8f) input_find_pane_t

0x140f,	// (0x0000140f) input_focus_pane_cp5_ParamLimits

0x140f,	// (0x0000140f) input_focus_pane_cp5

0x0798,	// (0x00000798) bg_popup_window_pane_cp2_ParamLimits

0x0798,	// (0x00000798) bg_popup_window_pane_cp2

0x142e,	// (0x0000142e) listscroll_menu_pane_ParamLimits

0x142e,	// (0x0000142e) listscroll_menu_pane

0x143a,	// (0x0000143a) popup_submenu_window_ParamLimits

0x143a,	// (0x0000143a) popup_submenu_window

0x145e,	// (0x0000145e) find_popup_pane_g1

0x1466,	// (0x00001466) input_popup_find_pane_cp

0x1470,	// (0x00001470) input_focus_pane_cp4_ParamLimits

0x1470,	// (0x00001470) input_focus_pane_cp4

0x148a,	// (0x0000148a) input_popup_find_pane_t1_ParamLimits

0x148a,	// (0x0000148a) input_popup_find_pane_t1

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp

0x14b8,	// (0x000014b8) listscroll_popup_sub_pane

0x14c0,	// (0x000014c0) list_submenu_pane_ParamLimits

0x14c0,	// (0x000014c0) list_submenu_pane

0x14d1,	// (0x000014d1) scroll_pane_cp4

0x14d9,	// (0x000014d9) list_single_popup_submenu_pane_ParamLimits

0x14d9,	// (0x000014d9) list_single_popup_submenu_pane

0x14eb,	// (0x000014eb) list_single_popup_submenu_pane_g1

0x14f3,	// (0x000014f3) list_single_popup_submenu_pane_t1_ParamLimits

0x14f3,	// (0x000014f3) list_single_popup_submenu_pane_t1

0x0798,	// (0x00000798) bg_active_tab_pane_cp1_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp1

0x4ddf,	// (0x00004ddf) tabs_2_active_pane_g1

0xb762,	// (0x0000b762) tabs_2_active_pane_t1

0x0798,	// (0x00000798) bg_passive_tab_pane_cp1_ParamLimits

0x0798,	// (0x00000798) bg_passive_tab_pane_cp1

0x4ddf,	// (0x00004ddf) tabs_2_passive_pane_g1

0xb762,	// (0x0000b762) tabs_2_passive_pane_t1

0x0474,	// (0x00000474) bg_active_tab_pane_cp4

0xb778,	// (0x0000b778) tabs_2_long_active_pane_t1

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp4

0x331e,	// (0x0000331e) list_single_midp_graphic_pane_g4_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5

0xb78f,	// (0x0000b78f) tabs_3_long_active_pane_t1

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp5

0x331e,	// (0x0000331e) list_single_midp_graphic_pane_g4

0x0474,	// (0x00000474) bg_popup_window_pane_cp13_ParamLimits

0x0474,	// (0x00000474) bg_popup_window_pane_cp13

0x156a,	// (0x0000156a) listscroll_popup_fast_pane_ParamLimits

0x156a,	// (0x0000156a) listscroll_popup_fast_pane

0x1579,	// (0x00001579) grid_popup_fast_pane_ParamLimits

0x1579,	// (0x00001579) grid_popup_fast_pane

0x158b,	// (0x0000158b) scroll_pane_cp9_ParamLimits

0x158b,	// (0x0000158b) scroll_pane_cp9

0x6b70,	// (0x00006b70) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6b70,	// (0x00006b70) list_single_graphic_hl_pane_t1_cp2

0x15af,	// (0x000015af) input_focus_pane_cp20_ParamLimits

0x15af,	// (0x000015af) input_focus_pane_cp20

0x15bd,	// (0x000015bd) query_popup_data_pane_t1_ParamLimits

0x15bd,	// (0x000015bd) query_popup_data_pane_t1

0x15d0,	// (0x000015d0) query_popup_data_pane_t2_ParamLimits

0x15d0,	// (0x000015d0) query_popup_data_pane_t2

0x1616,	// (0x00001616) query_popup_data_pane_t3_ParamLimits

0x1616,	// (0x00001616) query_popup_data_pane_t3

0x1657,	// (0x00001657) query_popup_data_pane_t4_ParamLimits

0x1657,	// (0x00001657) query_popup_data_pane_t4

0x1693,	// (0x00001693) query_popup_data_pane_t5_ParamLimits

0x1693,	// (0x00001693) query_popup_data_pane_t5

0x0004,

0xa47d,	// (0x0000a47d) query_popup_data_pane_t_ParamLimits

0xa47d,	// (0x0000a47d) query_popup_data_pane_t

0x131d,	// (0x0000131d) bg_set_opt_pane_g1

0x1325,	// (0x00001325) bg_set_opt_pane_g2

0x132d,	// (0x0000132d) bg_set_opt_pane_g3

0x1335,	// (0x00001335) bg_set_opt_pane_g4

0x133d,	// (0x0000133d) bg_set_opt_pane_g5

0x1345,	// (0x00001345) bg_set_opt_pane_g6

0x134d,	// (0x0000134d) bg_set_opt_pane_g7

0x1355,	// (0x00001355) bg_set_opt_pane_g8

0x135d,	// (0x0000135d) bg_set_opt_pane_g9

0x0008,

0xa488,	// (0x0000a488) bg_set_opt_pane_g

0x1f0b,	// (0x00001f0b) control_top_pane_stacon_ParamLimits

0x1f0b,	// (0x00001f0b) control_top_pane_stacon

0x1f5e,	// (0x00001f5e) signal_pane_stacon_ParamLimits

0x1f5e,	// (0x00001f5e) signal_pane_stacon

0x1f83,	// (0x00001f83) stacon_top_pane_g1_ParamLimits

0x1f83,	// (0x00001f83) stacon_top_pane_g1

0x1fa5,	// (0x00001fa5) title_pane_stacon_ParamLimits

0x1fa5,	// (0x00001fa5) title_pane_stacon

0x1fc7,	// (0x00001fc7) uni_indicator_pane_stacon_ParamLimits

0x1fc7,	// (0x00001fc7) uni_indicator_pane_stacon

0x1fdc,	// (0x00001fdc) battery_pane_stacon_ParamLimits

0x1fdc,	// (0x00001fdc) battery_pane_stacon

0x201c,	// (0x0000201c) control_bottom_pane_stacon_ParamLimits

0x201c,	// (0x0000201c) control_bottom_pane_stacon

0x203b,	// (0x0000203b) navi_pane_stacon_ParamLimits

0x203b,	// (0x0000203b) navi_pane_stacon

0x205a,	// (0x0000205a) stacon_bottom_pane_g1_ParamLimits

0x205a,	// (0x0000205a) stacon_bottom_pane_g1

0x16ca,	// (0x000016ca) aid_levels_signal_lsc_ParamLimits

0x16ca,	// (0x000016ca) aid_levels_signal_lsc

0x16d7,	// (0x000016d7) signal_pane_stacon_g1_ParamLimits

0x16d7,	// (0x000016d7) signal_pane_stacon_g1

0x16e3,	// (0x000016e3) signal_pane_stacon_g2_ParamLimits

0x16e3,	// (0x000016e3) signal_pane_stacon_g2

0x0001,

0xa49b,	// (0x0000a49b) signal_pane_stacon_g_ParamLimits

0xa49b,	// (0x0000a49b) signal_pane_stacon_g

0x1724,	// (0x00001724) title_pane_stacon_t1_ParamLimits

0x1724,	// (0x00001724) title_pane_stacon_t1

0x1749,	// (0x00001749) uni_indicator_pane_stacon_g1

0x1753,	// (0x00001753) uni_indicator_pane_stacon_g2

0x175d,	// (0x0000175d) uni_indicator_pane_stacon_g3

0x1767,	// (0x00001767) uni_indicator_pane_stacon_g4

0x0003,

0xa4a7,	// (0x0000a4a7) uni_indicator_pane_stacon_g

0x1771,	// (0x00001771) control_top_pane_stacon_g1

0x1779,	// (0x00001779) control_top_pane_stacon_t1_ParamLimits

0x1779,	// (0x00001779) control_top_pane_stacon_t1

0x17aa,	// (0x000017aa) aid_levels_battery_lsc_ParamLimits

0x17aa,	// (0x000017aa) aid_levels_battery_lsc

0x17b8,	// (0x000017b8) battery_pane_stacon_g1_ParamLimits

0x17b8,	// (0x000017b8) battery_pane_stacon_g1

0x17c4,	// (0x000017c4) battery_pane_stacon_g2_ParamLimits

0x17c4,	// (0x000017c4) battery_pane_stacon_g2

0x0001,

0xa4b0,	// (0x0000a4b0) battery_pane_stacon_g_ParamLimits

0xa4b0,	// (0x0000a4b0) battery_pane_stacon_g

0x17f3,	// (0x000017f3) navi_icon_pane_stacon

0x1803,	// (0x00001803) navi_navi_pane_stacon

0x17f3,	// (0x000017f3) navi_text_pane_stacon

0x1771,	// (0x00001771) control_bottom_pane_stacon_g1

0x1813,	// (0x00001813) control_bottom_pane_stacon_t1_ParamLimits

0x1813,	// (0x00001813) control_bottom_pane_stacon_t1

0xb7a5,	// (0x0000b7a5) grid_app_pane_ParamLimits

0xb7a5,	// (0x0000b7a5) grid_app_pane

0xb7d3,	// (0x0000b7d3) scroll_pane_cp15_ParamLimits

0xb7d3,	// (0x0000b7d3) scroll_pane_cp15

0xb7e6,	// (0x0000b7e6) cell_app_pane_ParamLimits

0xb7e6,	// (0x0000b7e6) cell_app_pane

0xb823,	// (0x0000b823) cell_app_pane_g1_ParamLimits

0xb823,	// (0x0000b823) cell_app_pane_g1

0x18d3,	// (0x000018d3) cell_app_pane_g2_ParamLimits

0x18d3,	// (0x000018d3) cell_app_pane_g2

0x0001,

0xea94,	// (0x0000ea94) cell_app_pane_g_ParamLimits

0xea94,	// (0x0000ea94) cell_app_pane_g

0xb847,	// (0x0000b847) cell_app_pane_t1_ParamLimits

0xb847,	// (0x0000b847) cell_app_pane_t1

0x18f6,	// (0x000018f6) grid_highlight_pane_ParamLimits

0x18f6,	// (0x000018f6) grid_highlight_pane

0x131d,	// (0x0000131d) cell_highlight_pane_g1

0x1325,	// (0x00001325) cell_highlight_pane_g2

0x132d,	// (0x0000132d) cell_highlight_pane_g3

0x1335,	// (0x00001335) cell_highlight_pane_g4

0x133d,	// (0x0000133d) cell_highlight_pane_g5

0x1345,	// (0x00001345) cell_highlight_pane_g6

0x134d,	// (0x0000134d) cell_highlight_pane_g7

0x1355,	// (0x00001355) cell_highlight_pane_g8

0x135d,	// (0x0000135d) cell_highlight_pane_g9

0x002a,	// (0x0000002a) cell_highlight_pane_g10

0x0009,

0xa463,	// (0x0000a463) cell_highlight_pane_g

0x191a,	// (0x0000191a) bg_scroll_pane

0x1939,	// (0x00001939) scroll_handle_pane

0x198a,	// (0x0000198a) scroll_bg_pane_g1

0x199f,	// (0x0000199f) scroll_bg_pane_g2

0x19b7,	// (0x000019b7) scroll_bg_pane_g3

0x0002,

0xa4ba,	// (0x0000a4ba) scroll_bg_pane_g

0x19cc,	// (0x000019cc) scroll_handle_focus_pane_ParamLimits

0x19cc,	// (0x000019cc) scroll_handle_focus_pane

0x198a,	// (0x0000198a) scroll_handle_pane_g1

0x19d9,	// (0x000019d9) scroll_handle_pane_g2

0x19b7,	// (0x000019b7) scroll_handle_pane_g3

0x0002,

0xa4c1,	// (0x0000a4c1) scroll_handle_pane_g

0x1470,	// (0x00001470) bg_popup_sub_pane_cp21_ParamLimits

0x1470,	// (0x00001470) bg_popup_sub_pane_cp21

0x19ed,	// (0x000019ed) popup_fep_japan_predictive_window_t1_ParamLimits

0x19ed,	// (0x000019ed) popup_fep_japan_predictive_window_t1

0x1a04,	// (0x00001a04) popup_fep_japan_predictive_window_t2_ParamLimits

0x1a04,	// (0x00001a04) popup_fep_japan_predictive_window_t2

0x1a37,	// (0x00001a37) popup_fep_japan_predictive_window_t3_ParamLimits

0x1a37,	// (0x00001a37) popup_fep_japan_predictive_window_t3

0x0002,

0xa4c8,	// (0x0000a4c8) popup_fep_japan_predictive_window_t_ParamLimits

0xa4c8,	// (0x0000a4c8) popup_fep_japan_predictive_window_t

0x024e,	// (0x0000024e) bg_popup_sub_pane_cp23

0x1a6e,	// (0x00001a6e) listscroll_japin_cand_pane

0x1a76,	// (0x00001a76) popup_fep_japan_candidate_window_t1

0x1a84,	// (0x00001a84) candidate_pane_ParamLimits

0x1a84,	// (0x00001a84) candidate_pane

0x1a97,	// (0x00001a97) scroll_pane_cp30

0x1a9f,	// (0x00001a9f) list_single_popup_jap_candidate_pane_ParamLimits

0x1a9f,	// (0x00001a9f) list_single_popup_jap_candidate_pane

0x024e,	// (0x0000024e) list_highlight_pane_cp30

0x1ab4,	// (0x00001ab4) list_single_popup_jap_candidate_pane_t1

0xb867,	// (0x0000b867) level_1_signal

0xb879,	// (0x0000b879) level_2_signal

0xb88c,	// (0x0000b88c) level_3_signal

0xb89f,	// (0x0000b89f) level_4_signal

0xb8b2,	// (0x0000b8b2) level_5_signal

0xb8c5,	// (0x0000b8c5) level_6_signal

0xb8d8,	// (0x0000b8d8) level_7_signal

0xb867,	// (0x0000b867) level_1_battery

0xb879,	// (0x0000b879) level_2_battery

0xb88c,	// (0x0000b88c) level_3_battery

0xb89f,	// (0x0000b89f) level_4_battery

0xb8b2,	// (0x0000b8b2) level_5_battery

0xb8c5,	// (0x0000b8c5) level_6_battery

0xb8d8,	// (0x0000b8d8) level_7_battery

0x1b55,	// (0x00001b55) list_menu_pane_ParamLimits

0x1b55,	// (0x00001b55) list_menu_pane

0x1b6b,	// (0x00001b6b) scroll_pane_cp25_ParamLimits

0x1b6b,	// (0x00001b6b) scroll_pane_cp25

0xb8eb,	// (0x0000b8eb) list_double2_graphic_pane_cp2_ParamLimits

0xb8eb,	// (0x0000b8eb) list_double2_graphic_pane_cp2

0xb8eb,	// (0x0000b8eb) list_double2_large_graphic_pane_cp2_ParamLimits

0xb8eb,	// (0x0000b8eb) list_double2_large_graphic_pane_cp2

0xb8eb,	// (0x0000b8eb) list_double2_pane_cp2_ParamLimits

0xb8eb,	// (0x0000b8eb) list_double2_pane_cp2

0xb8eb,	// (0x0000b8eb) list_double_graphic_pane_cp2_ParamLimits

0xb8eb,	// (0x0000b8eb) list_double_graphic_pane_cp2

0xb8eb,	// (0x0000b8eb) list_double_large_graphic_pane_cp2_ParamLimits

0xb8eb,	// (0x0000b8eb) list_double_large_graphic_pane_cp2

0xb8eb,	// (0x0000b8eb) list_double_number_pane_cp2_ParamLimits

0xb8eb,	// (0x0000b8eb) list_double_number_pane_cp2

0xb8eb,	// (0x0000b8eb) list_double_pane_cp2_ParamLimits

0xb8eb,	// (0x0000b8eb) list_double_pane_cp2

0xb906,	// (0x0000b906) list_single_2graphic_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_2graphic_pane_cp2

0xb906,	// (0x0000b906) list_single_graphic_heading_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_graphic_heading_pane_cp2

0xb906,	// (0x0000b906) list_single_graphic_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_graphic_pane_cp2

0xb906,	// (0x0000b906) list_single_heading_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_heading_pane_cp2

0xb917,	// (0x0000b917) list_single_large_graphic_pane_cp2_ParamLimits

0xb917,	// (0x0000b917) list_single_large_graphic_pane_cp2

0xb906,	// (0x0000b906) list_single_number_heading_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_number_heading_pane_cp2

0xb906,	// (0x0000b906) list_single_number_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_number_pane_cp2

0xb906,	// (0x0000b906) list_single_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_pane_cp2

0x1c80,	// (0x00001c80) bg_popup_sub_pane_cp22

0x1ca2,	// (0x00001ca2) popup_side_volume_key_window_g1

0x1cc6,	// (0x00001cc6) popup_side_volume_key_window_t1

0x1ce2,	// (0x00001ce2) volume_small_pane_cp1

0x0798,	// (0x00000798) bg_popup_sub_pane_cp24_ParamLimits

0x0798,	// (0x00000798) bg_popup_sub_pane_cp24

0x1cea,	// (0x00001cea) fep_china_uni_candidate_pane_ParamLimits

0x1cea,	// (0x00001cea) fep_china_uni_candidate_pane

0x1cfe,	// (0x00001cfe) fep_china_uni_entry_pane

0x1d0e,	// (0x00001d0e) popup_fep_china_uni_window_g1

0x1d2a,	// (0x00001d2a) fep_china_uni_entry_pane_g1

0x1d32,	// (0x00001d32) fep_china_uni_entry_pane_g2

0x0001,

0xa4f9,	// (0x0000a4f9) fep_china_uni_entry_pane_g

0x1d3a,	// (0x00001d3a) fep_entry_item_pane

0x1d44,	// (0x00001d44) fep_candidate_item_pane

0x1d4c,	// (0x00001d4c) fep_china_uni_candidate_pane_g1

0x1d54,	// (0x00001d54) fep_china_uni_candidate_pane_g2

0x1d5c,	// (0x00001d5c) fep_china_uni_candidate_pane_g3

0x1d64,	// (0x00001d64) fep_china_uni_candidate_pane_g4

0x0003,

0xa4fe,	// (0x0000a4fe) fep_china_uni_candidate_pane_g

0x002a,	// (0x0000002a) fep_entry_item_pane_g1

0x1d6c,	// (0x00001d6c) fep_entry_item_pane_t1_ParamLimits

0x1d6c,	// (0x00001d6c) fep_entry_item_pane_t1

0x1d82,	// (0x00001d82) fep_candidate_item_pane_t1_ParamLimits

0x1d82,	// (0x00001d82) fep_candidate_item_pane_t1

0x1d97,	// (0x00001d97) fep_candidate_item_pane_t2_ParamLimits

0x1d97,	// (0x00001d97) fep_candidate_item_pane_t2

0x0001,

0xa507,	// (0x0000a507) fep_candidate_item_pane_t_ParamLimits

0xa507,	// (0x0000a507) fep_candidate_item_pane_t

0x0474,	// (0x00000474) list_highlight_pane_cp31_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp31

0x1da9,	// (0x00001da9) level_1_signal_lsc

0x1db2,	// (0x00001db2) level_2_signal_lsc

0x1dbb,	// (0x00001dbb) level_3_signal_lsc

0x1dc4,	// (0x00001dc4) level_4_signal_lsc

0x1dcd,	// (0x00001dcd) level_5_signal_lsc

0x1dd6,	// (0x00001dd6) level_6_signal_lsc

0x1ddf,	// (0x00001ddf) level_7_signal_lsc

0x1ddf,	// (0x00001ddf) level_1_battery_lsc

0x1de8,	// (0x00001de8) level_2_battery_lsc

0x1df1,	// (0x00001df1) level_3_battery_lsc

0x1dfa,	// (0x00001dfa) level_4_battery_lsc

0x1e03,	// (0x00001e03) level_5_battery_lsc

0x1e0c,	// (0x00001e0c) level_6_battery_lsc

0x1da9,	// (0x00001da9) level_7_battery_lsc

0x1e15,	// (0x00001e15) scroll_handle_focus_pane_g1

0x1e1e,	// (0x00001e1e) scroll_handle_focus_pane_g2

0x1e27,	// (0x00001e27) scroll_handle_focus_pane_g3

0x0002,

0xa50c,	// (0x0000a50c) scroll_handle_focus_pane_g

0xb99c,	// (0x0000b99c) list_single_2graphic_pane_g1_ParamLimits

0xb99c,	// (0x0000b99c) list_single_2graphic_pane_g1

0xb2f1,	// (0x0000b2f1) list_single_2graphic_pane_g2_ParamLimits

0xb2f1,	// (0x0000b2f1) list_single_2graphic_pane_g2

0x3162,	// (0x00003162) list_single_2graphic_pane_g3_ParamLimits

0x3162,	// (0x00003162) list_single_2graphic_pane_g3

0xb9a8,	// (0x0000b9a8) list_single_2graphic_pane_g4_ParamLimits

0xb9a8,	// (0x0000b9a8) list_single_2graphic_pane_g4

0x0003,

0xeaa2,	// (0x0000eaa2) list_single_2graphic_pane_g_ParamLimits

0xeaa2,	// (0x0000eaa2) list_single_2graphic_pane_g

0xb9b4,	// (0x0000b9b4) list_single_2graphic_pane_t1_ParamLimits

0xb9b4,	// (0x0000b9b4) list_single_2graphic_pane_t1

0xb9e2,	// (0x0000b9e2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb9e2,	// (0x0000b9e2) list_double2_graphic_large_graphic_pane_g1

0xb348,	// (0x0000b348) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb348,	// (0x0000b348) list_double2_graphic_large_graphic_pane_g2

0x0d95,	// (0x00000d95) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0d95,	// (0x00000d95) list_double2_graphic_large_graphic_pane_g3

0xb9f2,	// (0x0000b9f2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb9f2,	// (0x0000b9f2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xeaab,	// (0x0000eaab) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xeaab,	// (0x0000eaab) list_double2_graphic_large_graphic_pane_g

0xb9fe,	// (0x0000b9fe) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb9fe,	// (0x0000b9fe) list_double2_graphic_large_graphic_pane_t1

0xba14,	// (0x0000ba14) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba14,	// (0x0000ba14) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xeab4,	// (0x0000eab4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xeab4,	// (0x0000eab4) list_double2_graphic_large_graphic_pane_t

0x2118,	// (0x00002118) popup_fast_swap_window_ParamLimits

0x2118,	// (0x00002118) popup_fast_swap_window

0x2134,	// (0x00002134) popup_side_volume_key_window

0x214e,	// (0x0000214e) stacon_top_pane

0x2158,	// (0x00002158) status_pane_ParamLimits

0x2158,	// (0x00002158) status_pane

0xba5c,	// (0x0000ba5c) status_small_pane

0x024e,	// (0x0000024e) control_pane

0x024e,	// (0x0000024e) stacon_bottom_pane

0x0c8f,	// (0x00000c8f) scroll_pane_cp121

0x1121,	// (0x00001121) set_content_pane

0x4dcd,	// (0x00004dcd) bg_active_tab_pane_g1_cp1

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp1

0x4dd6,	// (0x00004dd6) bg_active_tab_pane_g3_cp1

0x4dcd,	// (0x00004dcd) bg_passive_tab_pane_g1_cp1

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp1

0x4dd6,	// (0x00004dd6) bg_passive_tab_pane_g3_cp1

0xba26,	// (0x0000ba26) bg_active_tab_pane_g1_cp2

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp2

0xba2f,	// (0x0000ba2f) bg_active_tab_pane_g3_cp2

0xba26,	// (0x0000ba26) bg_passive_tab_pane_g1_cp2

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp2

0xba2f,	// (0x0000ba2f) bg_passive_tab_pane_g3_cp2

0xba38,	// (0x0000ba38) bg_active_tab_pane_g1_cp3

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp3

0xba41,	// (0x0000ba41) bg_active_tab_pane_g3_cp3

0xba38,	// (0x0000ba38) bg_passive_tab_pane_g1_cp3

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp3

0xba41,	// (0x0000ba41) bg_passive_tab_pane_g3_cp3

0xba4a,	// (0x0000ba4a) bg_active_tab_pane_g1_cp4

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp4

0xba53,	// (0x0000ba53) bg_active_tab_pane_g3_cp4

0xba4a,	// (0x0000ba4a) bg_passive_tab_pane_g1_cp4

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp4

0xba53,	// (0x0000ba53) bg_passive_tab_pane_g3_cp4

0x2076,	// (0x00002076) bg_active_tab_pane_g1_cp5

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp5

0x207f,	// (0x0000207f) bg_active_tab_pane_g3_cp5

0x2076,	// (0x00002076) bg_passive_tab_pane_g1_cp5

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp5

0x207f,	// (0x0000207f) bg_passive_tab_pane_g3_cp5

0x9c8b,	// (0x00009c8b) list_set_graphic_pane_ParamLimits

0x9c8b,	// (0x00009c8b) list_set_graphic_pane

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4

0x209f,	// (0x0000209f) list_set_graphic_pane_g1_ParamLimits

0x209f,	// (0x0000209f) list_set_graphic_pane_g1

0x20ab,	// (0x000020ab) list_set_graphic_pane_g2_ParamLimits

0x20ab,	// (0x000020ab) list_set_graphic_pane_g2

0x0001,

0xa52a,	// (0x0000a52a) list_set_graphic_pane_g_ParamLimits

0xa52a,	// (0x0000a52a) list_set_graphic_pane_g

0x0009,

0xa8a8,	// (0x0000a8a8) volume_small_pane_cp_g

0x20cd,	// (0x000020cd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x20cd,	// (0x000020cd) list_double2_large_graphic_pane_g1_cp2

0x20d9,	// (0x000020d9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x20d9,	// (0x000020d9) list_double2_large_graphic_pane_g2_cp2

0x20e8,	// (0x000020e8) list_double2_large_graphic_pane_g3_cp2

0x20f0,	// (0x000020f0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x20f0,	// (0x000020f0) list_double2_large_graphic_pane_t1_cp2

0x2106,	// (0x00002106) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2106,	// (0x00002106) list_double2_large_graphic_pane_t2_cp2

0x45db,	// (0x000045db) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x45db,	// (0x000045db) list_double_large_graphic_pane_g1_cp2

0x45ec,	// (0x000045ec) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x45ec,	// (0x000045ec) list_double_large_graphic_pane_g2_cp2

0x223c,	// (0x0000223c) list_double_large_graphic_pane_g3_cp2

0x45fb,	// (0x000045fb) list_double_large_graphic_pane_g4_cp

0x4603,	// (0x00004603) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4603,	// (0x00004603) list_double_large_graphic_pane_t1_cp2

0x461a,	// (0x0000461a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x461a,	// (0x0000461a) list_double_large_graphic_pane_t2_cp2

0x216f,	// (0x0000216f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x216f,	// (0x0000216f) list_double2_graphic_pane_g1_cp2

0x217b,	// (0x0000217b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x217b,	// (0x0000217b) list_double2_graphic_pane_g2_cp2

0x218a,	// (0x0000218a) list_double2_graphic_pane_g3_cp2

0x2192,	// (0x00002192) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2192,	// (0x00002192) list_double2_graphic_pane_t1_cp2

0x21a8,	// (0x000021a8) list_double2_graphic_pane_t2_cp2_ParamLimits

0x21a8,	// (0x000021a8) list_double2_graphic_pane_t2_cp2

0x21ba,	// (0x000021ba) list_single_number_heading_pane_g1_cp2_ParamLimits

0x21ba,	// (0x000021ba) list_single_number_heading_pane_g1_cp2

0x21c6,	// (0x000021c6) list_single_number_heading_pane_g2_cp2

0x21ce,	// (0x000021ce) list_single_number_heading_pane_t1_cp2_ParamLimits

0x21ce,	// (0x000021ce) list_single_number_heading_pane_t1_cp2

0x21e4,	// (0x000021e4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x21e4,	// (0x000021e4) list_single_number_heading_pane_t2_cp2

0x21f6,	// (0x000021f6) list_single_number_heading_pane_t3_cp2_ParamLimits

0x21f6,	// (0x000021f6) list_single_number_heading_pane_t3_cp2

0x21ba,	// (0x000021ba) list_single_heading_pane_g1_cp2_ParamLimits

0x21ba,	// (0x000021ba) list_single_heading_pane_g1_cp2

0x21c6,	// (0x000021c6) list_single_heading_pane_g2_cp2

0x21ce,	// (0x000021ce) list_single_heading_pane_t1_cp2_ParamLimits

0x21ce,	// (0x000021ce) list_single_heading_pane_t1_cp2

0x43e5,	// (0x000043e5) list_single_heading_pane_t2_cp2_ParamLimits

0x43e5,	// (0x000043e5) list_single_heading_pane_t2_cp2

0x4335,	// (0x00004335) list_double_graphic_pane_g1_cp2_ParamLimits

0x4335,	// (0x00004335) list_double_graphic_pane_g1_cp2

0x4341,	// (0x00004341) list_double_graphic_pane_g2_cp2_ParamLimits

0x4341,	// (0x00004341) list_double_graphic_pane_g2_cp2

0x4350,	// (0x00004350) list_double_graphic_pane_g3_cp2

0x4358,	// (0x00004358) list_double_graphic_pane_t1_cp2_ParamLimits

0x4358,	// (0x00004358) list_double_graphic_pane_t1_cp2

0x436e,	// (0x0000436e) list_double_graphic_pane_t2_cp2_ParamLimits

0x436e,	// (0x0000436e) list_double_graphic_pane_t2_cp2

0x2230,	// (0x00002230) list_double_number_pane_g1_cp2_ParamLimits

0x2230,	// (0x00002230) list_double_number_pane_g1_cp2

0x223c,	// (0x0000223c) list_double_number_pane_g2_cp2

0x42fb,	// (0x000042fb) list_double_number_pane_t1_cp2_ParamLimits

0x42fb,	// (0x000042fb) list_double_number_pane_t1_cp2

0x430d,	// (0x0000430d) list_double_number_pane_t2_cp2_ParamLimits

0x430d,	// (0x0000430d) list_double_number_pane_t2_cp2

0x4323,	// (0x00004323) list_double_number_pane_t3_cp2_ParamLimits

0x4323,	// (0x00004323) list_double_number_pane_t3_cp2

0x41d4,	// (0x000041d4) list_single_graphic_pane_g1_cp2_ParamLimits

0x41d4,	// (0x000041d4) list_single_graphic_pane_g1_cp2

0x21ba,	// (0x000021ba) list_single_graphic_pane_g2_cp2_ParamLimits

0x21ba,	// (0x000021ba) list_single_graphic_pane_g2_cp2

0x21c6,	// (0x000021c6) list_single_graphic_pane_g3_cp2

0x41ac,	// (0x000041ac) list_single_graphic_pane_t1_cp2_ParamLimits

0x41ac,	// (0x000041ac) list_single_graphic_pane_t1_cp2

0x21ba,	// (0x000021ba) list_single_number_pane_g1_cp2_ParamLimits

0x21ba,	// (0x000021ba) list_single_number_pane_g1_cp2

0x21c6,	// (0x000021c6) list_single_number_pane_g2_cp2

0x41ac,	// (0x000041ac) list_single_number_pane_t1_cp2_ParamLimits

0x41ac,	// (0x000041ac) list_single_number_pane_t1_cp2

0x41c2,	// (0x000041c2) list_single_number_pane_t2_cp2_ParamLimits

0x41c2,	// (0x000041c2) list_single_number_pane_t2_cp2

0x20d9,	// (0x000020d9) list_double2_pane_g1_cp2_ParamLimits

0x20d9,	// (0x000020d9) list_double2_pane_g1_cp2

0x20e8,	// (0x000020e8) list_double2_pane_g2_cp2

0x2208,	// (0x00002208) list_double2_pane_t1_cp2_ParamLimits

0x2208,	// (0x00002208) list_double2_pane_t1_cp2

0x221e,	// (0x0000221e) list_double2_pane_t2_cp2_ParamLimits

0x221e,	// (0x0000221e) list_double2_pane_t2_cp2

0x2230,	// (0x00002230) list_double_pane_g1_cp2_ParamLimits

0x2230,	// (0x00002230) list_double_pane_g1_cp2

0x223c,	// (0x0000223c) list_double_pane_g2_cp2

0x2244,	// (0x00002244) list_double_pane_t1_cp2_ParamLimits

0x2244,	// (0x00002244) list_double_pane_t1_cp2

0x225a,	// (0x0000225a) list_double_pane_t2_cp2_ParamLimits

0x225a,	// (0x0000225a) list_double_pane_t2_cp2

0x2282,	// (0x00002282) list_single_pane_cp2_g3

0x21ba,	// (0x000021ba) list_single_pane_g1_cp2_ParamLimits

0x21ba,	// (0x000021ba) list_single_pane_g1_cp2

0x21c6,	// (0x000021c6) list_single_pane_g2_cp2

0x2292,	// (0x00002292) list_single_pane_t1_cp2_ParamLimits

0x2292,	// (0x00002292) list_single_pane_t1_cp2

0x22aa,	// (0x000022aa) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x22aa,	// (0x000022aa) list_single_large_graphic_pane_g1_cp2

0x22b6,	// (0x000022b6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x22b6,	// (0x000022b6) list_single_large_graphic_pane_g2_cp2

0x22c2,	// (0x000022c2) list_single_large_graphic_pane_g3_cp2

0x22ca,	// (0x000022ca) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x22ca,	// (0x000022ca) list_single_large_graphic_pane_g4_cp1

0x22e4,	// (0x000022e4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x22e4,	// (0x000022e4) list_single_large_graphic_pane_t1_cp2

0x3156,	// (0x00003156) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3156,	// (0x00003156) list_single_graphic_heading_pane_g1_cp2

0x4030,	// (0x00004030) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4030,	// (0x00004030) list_single_graphic_heading_pane_g4_cp2

0x21c6,	// (0x000021c6) list_single_graphic_heading_pane_g5_cp2

0x21ce,	// (0x000021ce) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x21ce,	// (0x000021ce) list_single_graphic_heading_pane_t1_cp2

0x4055,	// (0x00004055) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4055,	// (0x00004055) list_single_graphic_heading_pane_t2_cp2

0x4024,	// (0x00004024) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4024,	// (0x00004024) list_single_2graphic_pane_g1_cp2

0x4030,	// (0x00004030) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4030,	// (0x00004030) list_single_2graphic_pane_g2_cp2

0x21c6,	// (0x000021c6) list_single_2graphic_pane_g3_cp2

0x331e,	// (0x0000331e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x331e,	// (0x0000331e) list_single_2graphic_pane_g4_cp2

0x403f,	// (0x0000403f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x403f,	// (0x0000403f) list_single_2graphic_pane_t1_cp2

0x002a,	// (0x0000002a) list_highlight_pane_g10_cp1

0x3c1e,	// (0x00003c1e) list_highlight_pane_g1_cp1

0x3c26,	// (0x00003c26) list_highlight_pane_g2_cp1

0x3c2e,	// (0x00003c2e) list_highlight_pane_g3_cp1

0x3c36,	// (0x00003c36) list_highlight_pane_g4_cp1

0x3c3e,	// (0x00003c3e) list_highlight_pane_g5_cp1

0x3c46,	// (0x00003c46) list_highlight_pane_g6_cp1

0x3c4e,	// (0x00003c4e) list_highlight_pane_g7_cp1

0x3c56,	// (0x00003c56) list_highlight_pane_g8_cp1

0x3c5e,	// (0x00003c5e) list_highlight_pane_g9_cp1

0xc735,	// (0x0000c735) form_field_slider_pane_t3

0xc743,	// (0x0000c743) form_field_slider_pane_t4

0x3b68,	// (0x00003b68) slider_form_pane_ParamLimits

0x3b68,	// (0x00003b68) slider_form_pane

0x024e,	// (0x0000024e) control_abbreviations

0x024e,	// (0x0000024e) control_conventions

0x024e,	// (0x0000024e) control_definitions

0x024e,	// (0x0000024e) format_table_attribute

0x442f,	// (0x0000442f) bg_popup_preview_window_pane_g9

0x024e,	// (0x0000024e) format_table_data2

0x024e,	// (0x0000024e) format_table_data3

0x024e,	// (0x0000024e) format_table_data_example

0x0008,

0x024e,	// (0x0000024e) intro_purpose

0xa6c6,	// (0x0000a6c6) bg_popup_preview_window_pane_g

0x024e,	// (0x0000024e) texts_category

0x024e,	// (0x0000024e) texts_graphics

0x22fa,	// (0x000022fa) text_digital

0x2309,	// (0x00002309) text_primary

0x2318,	// (0x00002318) text_primary_small

0x2327,	// (0x00002327) text_secondary

0x2336,	// (0x00002336) text_title

0x4c5e,	// (0x00004c5e) bg_passive_tab_pane_g1_cp3_srt

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp3_srt

0x4c67,	// (0x00004c67) bg_passive_tab_pane_g3_cp3_srt

0x0798,	// (0x00000798) bg_active_tab_pane_cp3_srt_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp3_srt

0x4c70,	// (0x00004c70) tabs_4_active_pane_srt_g1

0xafb4,	// (0x0000afb4) tabs_4_active_pane_srt_t1_ParamLimits

0xafb4,	// (0x0000afb4) tabs_4_active_pane_srt_t1

0x4c5e,	// (0x00004c5e) bg_active_tab_pane_g1_cp3_copy1

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp3_copy1

0x4c67,	// (0x00004c67) bg_active_tab_pane_g3_cp3_copy1

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_active_pane_srt

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt_ParamLimits

0x0474,	// (0x00000474) tabs_2_long_passive_pane_srt

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp4_srt

0x48a3,	// (0x000048a3) bg_passive_tab_pane_g1_cp4_srt

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp4_srt

0x48ac,	// (0x000048ac) bg_passive_tab_pane_g3_cp4_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_srt

0xb778,	// (0x0000b778) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb778,	// (0x0000b778) tabs_2_long_active_pane_srt_t1

0x48a3,	// (0x000048a3) bg_active_tab_pane_g1_cp4_srt

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp4_srt

0x48ac,	// (0x000048ac) bg_active_tab_pane_g3_cp4_srt

0x0798,	// (0x00000798) tabs_3_long_active_pane_srt_ParamLimits

0x0798,	// (0x00000798) tabs_3_long_active_pane_srt

0x0798,	// (0x00000798) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0798,	// (0x00000798) tabs_3_long_passive_pane_cp_srt

0x0798,	// (0x00000798) tabs_3_long_passive_pane_srt_ParamLimits

0x0798,	// (0x00000798) tabs_3_long_passive_pane_srt

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp5_srt

0x2076,	// (0x00002076) bg_passive_tab_pane_g1_cp5_srt

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp5_srt

0x207f,	// (0x0000207f) bg_passive_tab_pane_g3_cp5_srt

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_srt

0xb78f,	// (0x0000b78f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb78f,	// (0x0000b78f) tabs_3_long_active_pane_srt_t1

0x2076,	// (0x00002076) bg_active_tab_pane_g1_cp5_srt

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp5_srt

0x207f,	// (0x0000207f) bg_active_tab_pane_g3_cp5_srt

0x4895,	// (0x00004895) navi_text_pane_srt_t1

0x488d,	// (0x0000488d) navi_icon_pane_srt_g1

0x25a6,	// (0x000025a6) midp_editing_number_pane_srt

0x2345,	// (0x00002345) midp_ticker_pane_srt

0x25ae,	// (0x000025ae) midp_ticker_pane_srt_g1

0x25b6,	// (0x000025b6) midp_ticker_pane_srt_g2

0x0001,

0xa549,	// (0x0000a549) midp_ticker_pane_srt_g

0x25be,	// (0x000025be) midp_ticker_pane_srt_t1

0x487e,	// (0x0000487e) midp_editing_number_pane_t1_copy1

0xba65,	// (0x0000ba65) listscroll_midp_pane

0xba65,	// (0x0000ba65) midp_form_pane

0x23b5,	// (0x000023b5) midp_info_popup_window_ParamLimits

0x23b5,	// (0x000023b5) midp_info_popup_window

0x1470,	// (0x00001470) bg_popup_sub_pane_cp50_ParamLimits

0x1470,	// (0x00001470) bg_popup_sub_pane_cp50

0x3861,	// (0x00003861) listscroll_midp_info_pane_ParamLimits

0x3861,	// (0x00003861) listscroll_midp_info_pane

0x3849,	// (0x00003849) listscroll_form_midp_pane_ParamLimits

0x3849,	// (0x00003849) listscroll_form_midp_pane

0x3855,	// (0x00003855) scroll_bar_cp050

0xc729,	// (0x0000c729) list_midp_pane

0x5995,	// (0x00005995) signal_pane_g2_cp

0x3763,	// (0x00003763) listscroll_midp_info_pane_t1_ParamLimits

0x3763,	// (0x00003763) listscroll_midp_info_pane_t1

0x377b,	// (0x0000377b) listscroll_midp_info_pane_t2_ParamLimits

0x377b,	// (0x0000377b) listscroll_midp_info_pane_t2

0x37b9,	// (0x000037b9) listscroll_midp_info_pane_t3_ParamLimits

0x37b9,	// (0x000037b9) listscroll_midp_info_pane_t3

0x37f3,	// (0x000037f3) listscroll_midp_info_pane_t4_ParamLimits

0x37f3,	// (0x000037f3) listscroll_midp_info_pane_t4

0x0003,

0xa601,	// (0x0000a601) listscroll_midp_info_pane_t_ParamLimits

0xa601,	// (0x0000a601) listscroll_midp_info_pane_t

0x14d1,	// (0x000014d1) scroll_pane_cp21

0x3707,	// (0x00003707) form_midp_field_choice_group_pane

0x3710,	// (0x00003710) form_midp_field_text_pane

0x3749,	// (0x00003749) form_midp_field_time_pane

0x3751,	// (0x00003751) form_midp_gauge_slider_pane

0x375a,	// (0x0000375a) form_midp_gauge_wait_pane

0x024e,	// (0x0000024e) form_midp_image_pane

0xc713,	// (0x0000c713) list_single_midp_pane_ParamLimits

0xc713,	// (0x0000c713) list_single_midp_pane

0x36c0,	// (0x000036c0) form_midp_field_text_pane_t1

0x343f,	// (0x0000343f) input_focus_pane_cp050

0x36e1,	// (0x000036e1) list_midp_form_text_pane

0x368f,	// (0x0000368f) form_midp_field_choice_group_pane_t1

0x369d,	// (0x0000369d) input_focus_pane_cp051

0x36b1,	// (0x000036b1) list_midp_choice_pane

0x024e,	// (0x0000024e) status_idle_pane

0x3673,	// (0x00003673) form_midp_field_time_pane_t1

0x002a,	// (0x0000002a) wait_anim_pane_g2_copy1

0x3681,	// (0x00003681) form_midp_field_time_pane_t2

0x0001,

0x245f,	// (0x0000245f) aid_navinavi_width_2_pane

0xa5fc,	// (0x0000a5fc) form_midp_field_time_pane_t

0x024e,	// (0x0000024e) input_focus_pane_cp052

0x024e,	// (0x0000024e) bg_input_focus_pane_cp040

0x3633,	// (0x00003633) form_midp_gauge_slider_pane_t1

0x3641,	// (0x00003641) form_midp_gauge_slider_pane_t2

0xc6f7,	// (0x0000c6f7) form_midp_gauge_slider_pane_t3

0xc705,	// (0x0000c705) form_midp_gauge_slider_pane_t4

0x0003,

0xeb06,	// (0x0000eb06) form_midp_gauge_slider_pane_t

0x366b,	// (0x0000366b) form_midp_slider_pane

0x0474,	// (0x00000474) bg_input_focus_pane_cp041_ParamLimits

0x0474,	// (0x00000474) bg_input_focus_pane_cp041

0x3603,	// (0x00003603) form_midp_gauge_wait_pane_t1_ParamLimits

0x3603,	// (0x00003603) form_midp_gauge_wait_pane_t1

0x3615,	// (0x00003615) form_midp_gauge_wait_pane_t2_ParamLimits

0x3615,	// (0x00003615) form_midp_gauge_wait_pane_t2

0x0001,

0xa5ee,	// (0x0000a5ee) form_midp_gauge_wait_pane_t_ParamLimits

0xa5ee,	// (0x0000a5ee) form_midp_gauge_wait_pane_t

0x3627,	// (0x00003627) form_midp_wait_pane_ParamLimits

0x3627,	// (0x00003627) form_midp_wait_pane

0x35cd,	// (0x000035cd) form_midp_image_pane_g1

0x35d6,	// (0x000035d6) form_midp_image_pane_t1

0x35e5,	// (0x000035e5) form_midp_image_pane_t2

0x35f4,	// (0x000035f4) form_midp_image_pane_t3

0x0002,

0xa5e7,	// (0x0000a5e7) form_midp_image_pane_t

0x35b5,	// (0x000035b5) list_single_midp_pane_g1

0x35be,	// (0x000035be) list_single_midp_pane_t1

0x35a1,	// (0x000035a1) list_midp_form_item_pane_ParamLimits

0x35a1,	// (0x000035a1) list_midp_form_item_pane

0x2407,	// (0x00002407) list_midp_form_item_pane_t1

0x2416,	// (0x00002416) midp_ticker_pane_g1

0x2422,	// (0x00002422) midp_ticker_pane_g2

0x0001,

0xa52f,	// (0x0000a52f) midp_ticker_pane_g

0x242e,	// (0x0000242e) midp_ticker_pane_t1

0x487e,	// (0x0000487e) midp_editing_number_pane_t1

0x4b07,	// (0x00004b07) midp_editing_number_pane

0x4b13,	// (0x00004b13) midp_ticker_pane

0x485c,	// (0x0000485c) ai_message_heading_pane

0x024e,	// (0x0000024e) bg_popup_window_pane_cp14

0x4864,	// (0x00004864) listscroll_ai_message_pane

0x47e6,	// (0x000047e6) ai_message_heading_pane_g1_ParamLimits

0x47e6,	// (0x000047e6) ai_message_heading_pane_g1

0x47f2,	// (0x000047f2) ai_message_heading_pane_g2_ParamLimits

0x47f2,	// (0x000047f2) ai_message_heading_pane_g2

0x47fe,	// (0x000047fe) ai_message_heading_pane_g3_ParamLimits

0x47fe,	// (0x000047fe) ai_message_heading_pane_g3

0x480a,	// (0x0000480a) ai_message_heading_pane_g4_ParamLimits

0x480a,	// (0x0000480a) ai_message_heading_pane_g4

0x0003,

0xa728,	// (0x0000a728) ai_message_heading_pane_g_ParamLimits

0xa728,	// (0x0000a728) ai_message_heading_pane_g

0x4816,	// (0x00004816) ai_message_heading_pane_t1_ParamLimits

0x4816,	// (0x00004816) ai_message_heading_pane_t1

0x4830,	// (0x00004830) ai_message_heading_pane_t2_ParamLimits

0x4830,	// (0x00004830) ai_message_heading_pane_t2

0x0001,

0xa731,	// (0x0000a731) ai_message_heading_pane_t_ParamLimits

0xa731,	// (0x0000a731) ai_message_heading_pane_t

0x4842,	// (0x00004842) bg_popup_heading_pane_cp1_ParamLimits

0x4842,	// (0x00004842) bg_popup_heading_pane_cp1

0x47d4,	// (0x000047d4) list_ai_message_pane_ParamLimits

0x47d4,	// (0x000047d4) list_ai_message_pane

0x14d1,	// (0x000014d1) scroll_pane_cp10

0x4720,	// (0x00004720) list_ai_message_pane_g1

0x4728,	// (0x00004728) list_ai_message_pane_g2

0x0001,

0xa705,	// (0x0000a705) list_ai_message_pane_g

0x4730,	// (0x00004730) list_ai_message_pane_t1_ParamLimits

0x4730,	// (0x00004730) list_ai_message_pane_t1

0x4745,	// (0x00004745) list_ai_message_pane_t2_ParamLimits

0x4745,	// (0x00004745) list_ai_message_pane_t2

0x475a,	// (0x0000475a) list_ai_message_pane_t3_ParamLimits

0x475a,	// (0x0000475a) list_ai_message_pane_t3

0x476f,	// (0x0000476f) list_ai_message_pane_t4_ParamLimits

0x476f,	// (0x0000476f) list_ai_message_pane_t4

0x0003,

0xa70a,	// (0x0000a70a) list_ai_message_pane_t_ParamLimits

0xa70a,	// (0x0000a70a) list_ai_message_pane_t

0x470e,	// (0x0000470e) cell_ai_soft_ind_pane_ParamLimits

0x470e,	// (0x0000470e) cell_ai_soft_ind_pane

0x2440,	// (0x00002440) cell_ai_soft_ind_pane_g1_ParamLimits

0x2440,	// (0x00002440) cell_ai_soft_ind_pane_g1

0x024e,	// (0x0000024e) grid_highlight_cp1

0x244d,	// (0x0000244d) text_secondary_cp56_ParamLimits

0x244d,	// (0x0000244d) text_secondary_cp56

0x46e3,	// (0x000046e3) example_general_pane_ParamLimits

0x46e3,	// (0x000046e3) example_general_pane

0x46ef,	// (0x000046ef) example_parent_pane_g1_ParamLimits

0x46ef,	// (0x000046ef) example_parent_pane_g1

0x46fb,	// (0x000046fb) example_parent_pane_t1_ParamLimits

0x46fb,	// (0x000046fb) example_parent_pane_t1

0xc01d,	// (0x0000c01d) popup_preview_text_window_ParamLimits

0xc01d,	// (0x0000c01d) popup_preview_text_window

0x228a,	// (0x0000228a) list_single_pane_cp2_g4

0x0874,	// (0x00000874) bg_popup_preview_window_pane_ParamLimits

0x0874,	// (0x00000874) bg_popup_preview_window_pane

0x4437,	// (0x00004437) popup_preview_text_window_t1_ParamLimits

0x4437,	// (0x00004437) popup_preview_text_window_t1

0x4455,	// (0x00004455) popup_preview_text_window_t2_ParamLimits

0x4455,	// (0x00004455) popup_preview_text_window_t2

0x449e,	// (0x0000449e) popup_preview_text_window_t3_ParamLimits

0x449e,	// (0x0000449e) popup_preview_text_window_t3

0x44e3,	// (0x000044e3) popup_preview_text_window_t4_ParamLimits

0x44e3,	// (0x000044e3) popup_preview_text_window_t4

0x0004,

0xa6d9,	// (0x0000a6d9) popup_preview_text_window_t_ParamLimits

0xa6d9,	// (0x0000a6d9) popup_preview_text_window_t

0x4561,	// (0x00004561) scroll_pane_cp11

0x32b3,	// (0x000032b3) bg_popup_preview_window_pane_g1

0x43f7,	// (0x000043f7) bg_popup_preview_window_pane_g2

0x43ff,	// (0x000043ff) bg_popup_preview_window_pane_g3

0x4407,	// (0x00004407) bg_popup_preview_window_pane_g4

0x440f,	// (0x0000440f) bg_popup_preview_window_pane_g5

0x4417,	// (0x00004417) bg_popup_preview_window_pane_g6

0x441f,	// (0x0000441f) bg_popup_preview_window_pane_g7

0x4427,	// (0x00004427) bg_popup_preview_window_pane_g8

0x003c,	// (0x0000003c) aid_popup_width_pane

0xbf9f,	// (0x0000bf9f) popup_midp_note_alarm_window_ParamLimits

0xbf9f,	// (0x0000bf9f) popup_midp_note_alarm_window

0x11ce,	// (0x000011ce) data_form_pane_ParamLimits

0xb649,	// (0x0000b649) form_field_data_pane_g1

0xb653,	// (0x0000b653) form_field_data_pane_t1_ParamLimits

0x11fa,	// (0x000011fa) input_focus_pane_ParamLimits

0x1208,	// (0x00001208) data_form_wide_pane_ParamLimits

0x1214,	// (0x00001214) form_field_data_wide_pane_g1

0x1234,	// (0x00001234) form_field_data_wide_pane_t1_ParamLimits

0x0b06,	// (0x00000b06) input_focus_pane_cp6_ParamLimits

0xb756,	// (0x0000b756) input_popup_find_pane_g1_ParamLimits

0xb756,	// (0x0000b756) input_popup_find_pane_g1

0x17d4,	// (0x000017d4) aid_navi_side_left_pane

0x17e4,	// (0x000017e4) aid_navi_side_right_pane

0x3d07,	// (0x00003d07) bg_popup_window_pane_cp30_ParamLimits

0x3d07,	// (0x00003d07) bg_popup_window_pane_cp30

0x3d81,	// (0x00003d81) popup_midp_note_alarm_window_g1_ParamLimits

0x3d81,	// (0x00003d81) popup_midp_note_alarm_window_g1

0x3db1,	// (0x00003db1) popup_midp_note_alarm_window_t1_ParamLimits

0x3db1,	// (0x00003db1) popup_midp_note_alarm_window_t1

0x3e52,	// (0x00003e52) popup_midp_note_alarm_window_t2_ParamLimits

0x3e52,	// (0x00003e52) popup_midp_note_alarm_window_t2

0x3f00,	// (0x00003f00) popup_midp_note_alarm_window_t3_ParamLimits

0x3f00,	// (0x00003f00) popup_midp_note_alarm_window_t3

0x3f28,	// (0x00003f28) popup_midp_note_alarm_window_t4_ParamLimits

0x3f28,	// (0x00003f28) popup_midp_note_alarm_window_t4

0x3f48,	// (0x00003f48) popup_midp_note_alarm_window_t5_ParamLimits

0x3f48,	// (0x00003f48) popup_midp_note_alarm_window_t5

0x000a,

0xa676,	// (0x0000a676) popup_midp_note_alarm_window_t_ParamLimits

0xa676,	// (0x0000a676) popup_midp_note_alarm_window_t

0x3ff4,	// (0x00003ff4) wait_bar_pane_cp1_ParamLimits

0x3ff4,	// (0x00003ff4) wait_bar_pane_cp1

0x024e,	// (0x0000024e) wait_anim_pane_copy1

0x024e,	// (0x0000024e) wait_border_pane_copy1

0x3a19,	// (0x00003a19) wait_border_pane_g1_copy1

0x124b,	// (0x0000124b) form_field_popup_pane_g1

0xb66b,	// (0x0000b66b) form_field_popup_pane_t1_ParamLimits

0x11fa,	// (0x000011fa) input_focus_pane_cp7_ParamLimits

0x11ce,	// (0x000011ce) list_form_pane_ParamLimits

0x126b,	// (0x0000126b) form_field_popup_wide_pane_g1

0x1273,	// (0x00001273) form_field_popup_wide_pane_t1_ParamLimits

0x11fa,	// (0x000011fa) input_focus_pane_cp8_ParamLimits

0x1288,	// (0x00001288) list_form_wide_pane_ParamLimits

0x4cdd,	// (0x00004cdd) aid_size_cell_graphic_pane

0xb6e8,	// (0x0000b6e8) data_form_pane_t1_ParamLimits

0xcb68,	// (0x0000cb68) data_form_wide_pane_t1_ParamLimits

0xc37b,	// (0x0000c37b) bg_status_flat_pane

0xaf11,	// (0x0000af11) title_pane_t1_ParamLimits

0x043c,	// (0x0000043c) title_pane_t2_ParamLimits

0x0462,	// (0x00000462) title_pane_t3_ParamLimits

0xe9c6,	// (0x0000e9c6) title_pane_t_ParamLimits

0xb867,	// (0x0000b867) level_1_signal_ParamLimits

0xb879,	// (0x0000b879) level_2_signal_ParamLimits

0xb88c,	// (0x0000b88c) level_3_signal_ParamLimits

0xb89f,	// (0x0000b89f) level_4_signal_ParamLimits

0xb8b2,	// (0x0000b8b2) level_5_signal_ParamLimits

0xb8c5,	// (0x0000b8c5) level_6_signal_ParamLimits

0xb8d8,	// (0x0000b8d8) level_7_signal_ParamLimits

0xb867,	// (0x0000b867) level_1_battery_ParamLimits

0xb879,	// (0x0000b879) level_2_battery_ParamLimits

0xb88c,	// (0x0000b88c) level_3_battery_ParamLimits

0xb89f,	// (0x0000b89f) level_4_battery_ParamLimits

0xb8b2,	// (0x0000b8b2) level_5_battery_ParamLimits

0xb8c5,	// (0x0000b8c5) level_6_battery_ParamLimits

0xb8d8,	// (0x0000b8d8) level_7_battery_ParamLimits

0x3c1e,	// (0x00003c1e) bg_status_flat_pane_g1

0x3c26,	// (0x00003c26) bg_status_flat_pane_g2

0x3c2e,	// (0x00003c2e) bg_status_flat_pane_g3

0x3c36,	// (0x00003c36) bg_status_flat_pane_g4

0x3c3e,	// (0x00003c3e) bg_status_flat_pane_g5

0x3c46,	// (0x00003c46) bg_status_flat_pane_g6

0x3c4e,	// (0x00003c4e) bg_status_flat_pane_g7

0xaf9e,	// (0x0000af9e) tabs_3_active_pane_t1_ParamLimits

0xaf9e,	// (0x0000af9e) tabs_3_passive_pane_t1_ParamLimits

0xafb4,	// (0x0000afb4) tabs_4_active_pane_t1_ParamLimits

0xafb4,	// (0x0000afb4) tabs_4_1_passive_pane_t1_ParamLimits

0xb762,	// (0x0000b762) tabs_2_active_pane_t1_ParamLimits

0xb762,	// (0x0000b762) tabs_2_passive_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp4_ParamLimits

0xb778,	// (0x0000b778) tabs_2_long_active_pane_t1_ParamLimits

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp4_ParamLimits

0x336c,	// (0x0000336c) list_single_midp_graphic_pane_t1_ParamLimits

0x0474,	// (0x00000474) bg_active_tab_pane_cp5_ParamLimits

0xb78f,	// (0x0000b78f) tabs_3_long_active_pane_t1_ParamLimits

0x28b1,	// (0x000028b1) bg_passive_tab_pane_cp5_ParamLimits

0x336c,	// (0x0000336c) list_single_midp_graphic_pane_t1

0xc37b,	// (0x0000c37b) bg_status_flat_pane_ParamLimits

0x2ec2,	// (0x00002ec2) indicator_pane_cp2_ParamLimits

0x2ec2,	// (0x00002ec2) indicator_pane_cp2

0xc4e1,	// (0x0000c4e1) navi_pane_srt_ParamLimits

0xc4e1,	// (0x0000c4e1) navi_pane_srt

0x300a,	// (0x0000300a) popup_clock_digital_analogue_window_cp1

0x05f3,	// (0x000005f3) indicator_pane_t1

0x2345,	// (0x00002345) copy_highlight_pane

0x2345,	// (0x00002345) cursor_graphics_pane

0x2345,	// (0x00002345) graphic_within_text_pane

0x2345,	// (0x00002345) link_highlight_pane

0x4524,	// (0x00004524) popup_preview_text_window_t5_ParamLimits

0x4524,	// (0x00004524) popup_preview_text_window_t5

0x2467,	// (0x00002467) cursor_digital_pane

0x2467,	// (0x00002467) cursor_primary_pane

0x2478,	// (0x00002478) cursor_primary_small_pane

0x2480,	// (0x00002480) cursor_secondary_pane

0x2488,	// (0x00002488) cursor_title_pane

0x2467,	// (0x00002467) link_highlight_digital_pane

0x246f,	// (0x0000246f) link_highlight_primary_pane

0x2478,	// (0x00002478) link_highlight_primary_small_pane

0x2480,	// (0x00002480) link_highlight_secondary_pane

0x2488,	// (0x00002488) link_highlight_title_pane

0x2467,	// (0x00002467) copy_highlight_digital_pane

0x2467,	// (0x00002467) copy_highlight_primary_pane

0x2478,	// (0x00002478) copy_highlight_primary_small_pane

0x2480,	// (0x00002480) copy_highlight_secondary_pane

0x2488,	// (0x00002488) copy_highlight_title_pane

0x2480,	// (0x00002480) graphic_text_digital_pane

0x3cb6,	// (0x00003cb6) graphic_text_primary_pane

0x3cbf,	// (0x00003cbf) graphic_text_primary_small_pane

0x2478,	// (0x00002478) graphic_text_secondary_pane

0x2467,	// (0x00002467) graphic_text_title_pane

0xbb01,	// (0x0000bb01) cursor_primary_pane_g1

0x3ca8,	// (0x00003ca8) cursor_text_primary_t1

0xc765,	// (0x0000c765) cursor_primary_small_pane_g1

0x3c9a,	// (0x00003c9a) cursor_text_primary_small_t1

0xc75b,	// (0x0000c75b) cursor_primary_small_pane_g1_copy1

0x3c84,	// (0x00003c84) cursor_text_primary_small_t1_copy1

0x3c66,	// (0x00003c66) cursor_text_title_t1

0xc751,	// (0x0000c751) cursor_title_pane_g1

0xbb01,	// (0x0000bb01) cursor_digital_pane_g1

0x2498,	// (0x00002498) cursor_text_digital_t1

0x24a6,	// (0x000024a6) link_highlight_primary_pane_g1

0x3c0f,	// (0x00003c0f) link_highlight_primary_pane_t1

0x24a6,	// (0x000024a6) link_highlight_primary_small_pane_g1

0x24ae,	// (0x000024ae) link_highlight_primary_small_pane_t1

0x24bd,	// (0x000024bd) link_highlight_secondary_pane_g1

0x24c5,	// (0x000024c5) link_highlight_secondary_pane_t1

0x3b74,	// (0x00003b74) link_highlight_title_pane_g1

0x3b8b,	// (0x00003b8b) link_highlight_title_pane_t1

0x3b74,	// (0x00003b74) link_highlight_digital_pane_g1

0x3b7c,	// (0x00003b7c) link_highlight_digital_pane_t1

0x3a34,	// (0x00003a34) copy_highlight_primary_pane_g1

0x3a5a,	// (0x00003a5a) copy_highlight_primary_pane_t1

0x3a34,	// (0x00003a34) copy_highlight_primary_small_pane_g1

0x3a4b,	// (0x00003a4b) copy_highlight_primary_small_pane_t1

0x24d4,	// (0x000024d4) copy_highlight_secondary_pane_g1

0x24dc,	// (0x000024dc) copy_highlight_secondary_pane_t1

0x3a34,	// (0x00003a34) copy_highlight_title_pane_g1

0x3a3c,	// (0x00003a3c) copy_highlight_title_pane_t1

0x3a34,	// (0x00003a34) copy_highlight_digital_pane_g1

0x4f01,	// (0x00004f01) copy_highlight_digital_pane_t1

0x4e55,	// (0x00004e55) graphic_text_primary_pane_g1

0x4ee5,	// (0x00004ee5) graphic_text_primary_pane_t1

0x4ef3,	// (0x00004ef3) graphic_text_primary_pane_t2

0x0001,

0xa7a0,	// (0x0000a7a0) graphic_text_primary_pane_t

0x4ec1,	// (0x00004ec1) graphic_text_primary_small_pane_g1

0x4ec9,	// (0x00004ec9) graphic_text_primary_small_pane_t1

0x4ed7,	// (0x00004ed7) graphic_text_primary_small_pane_t2

0x0001,

0xa79b,	// (0x0000a79b) graphic_text_primary_small_pane_t

0x4e9d,	// (0x00004e9d) graphic_text_secondary_pane_g1

0x4ea5,	// (0x00004ea5) graphic_text_secondary_pane_t1

0x4eb3,	// (0x00004eb3) graphic_text_secondary_pane_t2

0x0001,

0xa796,	// (0x0000a796) graphic_text_secondary_pane_t

0x4e79,	// (0x00004e79) graphic_text_title_pane_g1

0x4e81,	// (0x00004e81) graphic_text_title_pane_t1

0x4e8f,	// (0x00004e8f) graphic_text_title_pane_t2

0x0001,

0xa791,	// (0x0000a791) graphic_text_title_pane_t

0x4e55,	// (0x00004e55) graphic_text_digital_pane_g1

0x4e5d,	// (0x00004e5d) graphic_text_digital_pane_t1

0x4e6b,	// (0x00004e6b) graphic_text_digital_pane_t2

0x0001,

0xa78c,	// (0x0000a78c) graphic_text_digital_pane_t

0x0474,	// (0x00000474) navi_icon_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_icon_pane_srt

0x024e,	// (0x0000024e) navi_midp_pane_srt

0x024e,	// (0x0000024e) navi_navi_pane_srt

0x0474,	// (0x00000474) navi_text_pane_srt_ParamLimits

0x0474,	// (0x00000474) navi_text_pane_srt

0x43b0,	// (0x000043b0) navi_navi_icon_text_pane_srt

0x43b8,	// (0x000043b8) navi_navi_pane_srt_g1_ParamLimits

0x43b8,	// (0x000043b8) navi_navi_pane_srt_g1

0x43ca,	// (0x000043ca) navi_navi_pane_srt_g2_ParamLimits

0x43ca,	// (0x000043ca) navi_navi_pane_srt_g2

0x0001,

0xa6c1,	// (0x0000a6c1) navi_navi_pane_srt_g_ParamLimits

0xa6c1,	// (0x0000a6c1) navi_navi_pane_srt_g

0x43dc,	// (0x000043dc) navi_navi_tabs_pane_srt

0x43b0,	// (0x000043b0) navi_navi_text_pane_srt

0x43b0,	// (0x000043b0) navi_navi_volume_pane_srt

0x4e46,	// (0x00004e46) navi_navi_text_pane_srt_t1

0x4e21,	// (0x00004e21) navi_navi_volume_pane_srt_g1

0x4e29,	// (0x00004e29) volume_small_pane_srt_ParamLimits

0x4e29,	// (0x00004e29) volume_small_pane_srt

0x24eb,	// (0x000024eb) volume_small_pane_srt_g1_ParamLimits

0x24eb,	// (0x000024eb) volume_small_pane_srt_g1

0x24fb,	// (0x000024fb) volume_small_pane_srt_g2_ParamLimits

0x24fb,	// (0x000024fb) volume_small_pane_srt_g2

0x250c,	// (0x0000250c) volume_small_pane_srt_g3_ParamLimits

0x250c,	// (0x0000250c) volume_small_pane_srt_g3

0x251d,	// (0x0000251d) volume_small_pane_srt_g4_ParamLimits

0x251d,	// (0x0000251d) volume_small_pane_srt_g4

0x252e,	// (0x0000252e) volume_small_pane_srt_g5_ParamLimits

0x252e,	// (0x0000252e) volume_small_pane_srt_g5

0x253f,	// (0x0000253f) volume_small_pane_srt_g6_ParamLimits

0x253f,	// (0x0000253f) volume_small_pane_srt_g6

0x2550,	// (0x00002550) volume_small_pane_srt_g7_ParamLimits

0x2550,	// (0x00002550) volume_small_pane_srt_g7

0x2561,	// (0x00002561) volume_small_pane_srt_g8_ParamLimits

0x2561,	// (0x00002561) volume_small_pane_srt_g8

0x2572,	// (0x00002572) volume_small_pane_srt_g9_ParamLimits

0x2572,	// (0x00002572) volume_small_pane_srt_g9

0x2583,	// (0x00002583) volume_small_pane_srt_g10_ParamLimits

0x2583,	// (0x00002583) volume_small_pane_srt_g10

0x0009,

0xa534,	// (0x0000a534) volume_small_pane_srt_g_ParamLimits

0xa534,	// (0x0000a534) volume_small_pane_srt_g

0x091d,	// (0x0000091d) query_popup_data_pane_cp2

0x4e0f,	// (0x00004e0f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4e0f,	// (0x00004e0f) navi_navi_icon_text_pane_srt_t1

0x3cb6,	// (0x00003cb6) navi_tabs_2_long_pane_srt

0x3cb6,	// (0x00003cb6) navi_tabs_2_pane_srt

0x3cb6,	// (0x00003cb6) navi_tabs_3_long_pane_srt

0x3cb6,	// (0x00003cb6) navi_tabs_3_pane_srt

0x3cb6,	// (0x00003cb6) navi_tabs_4_pane_srt

0x4de7,	// (0x00004de7) tabs_2_active_pane_srt_ParamLimits

0x4de7,	// (0x00004de7) tabs_2_active_pane_srt

0x4df7,	// (0x00004df7) tabs_2_passive_pane_srt_ParamLimits

0x4df7,	// (0x00004df7) tabs_2_passive_pane_srt

0x343f,	// (0x0000343f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x343f,	// (0x0000343f) bg_passive_tab_pane_cp1_srt

0x4dcd,	// (0x00004dcd) bg_passive_tab_pane_g1_cp1_srt

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp1_srt

0x4dd6,	// (0x00004dd6) bg_passive_tab_pane_g3_cp1_srt

0x0798,	// (0x00000798) bg_active_tab_pane_cp1_srt_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp1_srt

0x4ddf,	// (0x00004ddf) tabs_2_active_pane_srt_g1

0xb762,	// (0x0000b762) tabs_2_active_pane_srt_t1_ParamLimits

0xb762,	// (0x0000b762) tabs_2_active_pane_srt_t1

0x4dcd,	// (0x00004dcd) bg_active_tab_pane_g1_cp1_srt

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp1_srt

0x4dd6,	// (0x00004dd6) bg_active_tab_pane_g3_cp1_srt

0x4d9a,	// (0x00004d9a) tabs_3_active_pane_srt_ParamLimits

0x4d9a,	// (0x00004d9a) tabs_3_active_pane_srt

0x4dab,	// (0x00004dab) tabs_3_passive_pane_cp_srt_ParamLimits

0x4dab,	// (0x00004dab) tabs_3_passive_pane_cp_srt

0x4dbc,	// (0x00004dbc) tabs_3_passive_pane_srt_ParamLimits

0x4dbc,	// (0x00004dbc) tabs_3_passive_pane_srt

0x343f,	// (0x0000343f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x343f,	// (0x0000343f) bg_passive_tab_pane_cp2_srt

0x2594,	// (0x00002594) bg_passive_tab_pane_g1_cp2_srt

0x1ec3,	// (0x00001ec3) bg_passive_tab_pane_g2_cp2_srt

0x259d,	// (0x0000259d) bg_passive_tab_pane_g3_cp2_srt

0x0798,	// (0x00000798) bg_active_tab_pane_cp2_srt_ParamLimits

0x0798,	// (0x00000798) bg_active_tab_pane_cp2_srt

0x4d92,	// (0x00004d92) tabs_3_active_pane_srt_g1

0xaf9e,	// (0x0000af9e) tabs_3_active_pane_srt_t1_ParamLimits

0xaf9e,	// (0x0000af9e) tabs_3_active_pane_srt_t1

0x2594,	// (0x00002594) bg_active_tab_pane_g1_cp2_srt

0x1ec3,	// (0x00001ec3) bg_active_tab_pane_g2_cp2_srt

0x259d,	// (0x0000259d) bg_active_tab_pane_g3_cp2_srt

0x4d4a,	// (0x00004d4a) tabs_4_active_pane_srt_ParamLimits

0x4d4a,	// (0x00004d4a) tabs_4_active_pane_srt

0x4d5c,	// (0x00004d5c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4d5c,	// (0x00004d5c) tabs_4_passive_pane_cp2_srt

0x282e,	// (0x0000282e) aid_size_cell_toolbar

0xbd0f,	// (0x0000bd0f) main_idle_act_pane_ParamLimits

0x2a1c,	// (0x00002a1c) popup_large_graphic_colour_window_ParamLimits

0xc26d,	// (0x0000c26d) popup_toolbar_window_ParamLimits

0xc26d,	// (0x0000c26d) popup_toolbar_window

0x4b38,	// (0x00004b38) list_single_graphic_2heading_pane_ParamLimits

0x4b38,	// (0x00004b38) list_single_graphic_2heading_pane

0x1844,	// (0x00001844) aid_size_cell_apps_grid_lsc_pane

0x1856,	// (0x00001856) aid_size_cell_apps_grid_prt_pane

0x28b1,	// (0x000028b1) bg_wml_button_pane_cp1_ParamLimits

0x28b1,	// (0x000028b1) bg_wml_button_pane_cp1

0x36c0,	// (0x000036c0) form_midp_field_text_pane_t1_ParamLimits

0x343f,	// (0x0000343f) input_focus_pane_cp050_ParamLimits

0x36e1,	// (0x000036e1) list_midp_form_text_pane_ParamLimits

0x369d,	// (0x0000369d) input_focus_pane_cp051_ParamLimits

0x36b1,	// (0x000036b1) list_midp_choice_pane_ParamLimits

0x356f,	// (0x0000356f) list_single_2graphic_pane_cp3_ParamLimits

0x356f,	// (0x0000356f) list_single_2graphic_pane_cp3

0x3582,	// (0x00003582) list_single_midp_graphic_pane_ParamLimits

0x3582,	// (0x00003582) list_single_midp_graphic_pane

0x3156,	// (0x00003156) list_single_graphic_2heading_pane_g1_ParamLimits

0x3156,	// (0x00003156) list_single_graphic_2heading_pane_g1

0x21ba,	// (0x000021ba) list_single_graphic_2heading_pane_g4_ParamLimits

0x21ba,	// (0x000021ba) list_single_graphic_2heading_pane_g4

0x3162,	// (0x00003162) list_single_graphic_2heading_pane_g5_ParamLimits

0x3162,	// (0x00003162) list_single_graphic_2heading_pane_g5

0x0002,

0xa587,	// (0x0000a587) list_single_graphic_2heading_pane_g_ParamLimits

0xa587,	// (0x0000a587) list_single_graphic_2heading_pane_g

0x316e,	// (0x0000316e) list_single_graphic_2heading_pane_t1_ParamLimits

0x316e,	// (0x0000316e) list_single_graphic_2heading_pane_t1

0x3182,	// (0x00003182) list_single_graphic_2heading_pane_t2_ParamLimits

0x3182,	// (0x00003182) list_single_graphic_2heading_pane_t2

0x319c,	// (0x0000319c) list_single_graphic_2heading_pane_t3_ParamLimits

0x319c,	// (0x0000319c) list_single_graphic_2heading_pane_t3

0x0002,

0xa58e,	// (0x0000a58e) list_single_graphic_2heading_pane_t_ParamLimits

0xa58e,	// (0x0000a58e) list_single_graphic_2heading_pane_t

0x31b4,	// (0x000031b4) bg_popup_sub_pane_cp2

0x31da,	// (0x000031da) grid_toobar_pane

0x3210,	// (0x00003210) cell_toolbar_pane_ParamLimits

0x3210,	// (0x00003210) cell_toolbar_pane

0x3259,	// (0x00003259) cell_toolbar_pane_g1_ParamLimits

0x3259,	// (0x00003259) cell_toolbar_pane_g1

0x326b,	// (0x0000326b) cell_toolbar_pane_g2_ParamLimits

0x326b,	// (0x0000326b) cell_toolbar_pane_g2

0x0001,

0xa59c,	// (0x0000a59c) cell_toolbar_pane_g_ParamLimits

0xa59c,	// (0x0000a59c) cell_toolbar_pane_g

0x328d,	// (0x0000328d) grid_highlight_pane_cp2_ParamLimits

0x328d,	// (0x0000328d) grid_highlight_pane_cp2

0x32a7,	// (0x000032a7) toolbar_button_pane

0x32b3,	// (0x000032b3) toolbar_button_pane_g1

0x32bb,	// (0x000032bb) toolbar_button_pane_g2

0x32c3,	// (0x000032c3) toolbar_button_pane_g3

0x32cb,	// (0x000032cb) toolbar_button_pane_g4

0x32d3,	// (0x000032d3) toolbar_button_pane_g5

0x32db,	// (0x000032db) toolbar_button_pane_g6

0x32e3,	// (0x000032e3) toolbar_button_pane_g7

0x32eb,	// (0x000032eb) toolbar_button_pane_g8

0x32f3,	// (0x000032f3) toolbar_button_pane_g9

0x0009,

0xa5a1,	// (0x0000a5a1) toolbar_button_pane_g

0x3303,	// (0x00003303) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3303,	// (0x00003303) list_single_2graphic_pane_g1_cp3

0xc65f,	// (0x0000c65f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc65f,	// (0x0000c65f) list_single_2graphic_pane_g2_cp3

0x21c6,	// (0x000021c6) list_single_2graphic_pane_g3_cp3

0x331e,	// (0x0000331e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x331e,	// (0x0000331e) list_single_2graphic_pane_g4_cp3

0x332a,	// (0x0000332a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x332a,	// (0x0000332a) list_single_2graphic_pane_t1_cp3

0x21ba,	// (0x000021ba) list_single_midp_graphic_pane_g2_ParamLimits

0x21ba,	// (0x000021ba) list_single_midp_graphic_pane_g2

0x2836,	// (0x00002836) aid_zoom_text_primary

0x283e,	// (0x0000283e) aid_zoom_text_secondary

0xbb3b,	// (0x0000bb3b) status_small_pane_g7_ParamLimits

0xbb3b,	// (0x0000bb3b) status_small_pane_g7

0xbb5e,	// (0x0000bb5e) status_small_pane_t1_ParamLimits

0xaee6,	// (0x0000aee6) title_pane_g2

0x0003,

0xe9bd,	// (0x0000e9bd) title_pane_g

0xb1e2,	// (0x0000b1e2) aid_size_cell_colour_1_pane_ParamLimits

0xb1e2,	// (0x0000b1e2) aid_size_cell_colour_1_pane

0xb1f6,	// (0x0000b1f6) aid_size_cell_colour_2_pane_ParamLimits

0xb1f6,	// (0x0000b1f6) aid_size_cell_colour_2_pane

0xb20a,	// (0x0000b20a) aid_size_cell_colour_3_pane_ParamLimits

0xb20a,	// (0x0000b20a) aid_size_cell_colour_3_pane

0xb21e,	// (0x0000b21e) aid_size_cell_colour_4_pane_ParamLimits

0xb21e,	// (0x0000b21e) aid_size_cell_colour_4_pane

0x16f3,	// (0x000016f3) title_pane_stacon_g1_ParamLimits

0x16f3,	// (0x000016f3) title_pane_stacon_g1

0x3ab1,	// (0x00003ab1) popup_note_wait_window_g3_ParamLimits

0x3ab1,	// (0x00003ab1) popup_note_wait_window_g3

0x3b27,	// (0x00003b27) popup_note_wait_window_t5_ParamLimits

0x3b27,	// (0x00003b27) popup_note_wait_window_t5

0x024e,	// (0x0000024e) main_feb_china_hwr_fs_writing_pane

0xbd70,	// (0x0000bd70) popup_feb_china_hwr_fs_window_ParamLimits

0xbd70,	// (0x0000bd70) popup_feb_china_hwr_fs_window

0xc670,	// (0x0000c670) aid_size_cell_hwr_fs_ParamLimits

0xc670,	// (0x0000c670) aid_size_cell_hwr_fs

0x343f,	// (0x0000343f) bg_popup_sub_pane_cp3_ParamLimits

0x343f,	// (0x0000343f) bg_popup_sub_pane_cp3

0xc685,	// (0x0000c685) grid_hwr_fs_pane_ParamLimits

0xc685,	// (0x0000c685) grid_hwr_fs_pane

0x345f,	// (0x0000345f) linegrid_hwr_fs_pane_ParamLimits

0x345f,	// (0x0000345f) linegrid_hwr_fs_pane

0xc69d,	// (0x0000c69d) cell_hwr_fs_pane_ParamLimits

0xc69d,	// (0x0000c69d) cell_hwr_fs_pane

0x348d,	// (0x0000348d) linegrid_hwr_fs_pane_g1_ParamLimits

0x348d,	// (0x0000348d) linegrid_hwr_fs_pane_g1

0xc6bd,	// (0x0000c6bd) linegrid_hwr_fs_pane_g2_ParamLimits

0xc6bd,	// (0x0000c6bd) linegrid_hwr_fs_pane_g2

0x34ab,	// (0x000034ab) linegrid_hwr_fs_pane_g3_ParamLimits

0x34ab,	// (0x000034ab) linegrid_hwr_fs_pane_g3

0x34b7,	// (0x000034b7) linegrid_hwr_fs_pane_g4_ParamLimits

0x34b7,	// (0x000034b7) linegrid_hwr_fs_pane_g4

0x34d1,	// (0x000034d1) linegrid_hwr_fs_pane_g5_ParamLimits

0x34d1,	// (0x000034d1) linegrid_hwr_fs_pane_g5

0x0004,

0xeaf2,	// (0x0000eaf2) linegrid_hwr_fs_pane_g_ParamLimits

0xeaf2,	// (0x0000eaf2) linegrid_hwr_fs_pane_g

0x34e7,	// (0x000034e7) cell_hwr_fs_pane_g1_ParamLimits

0x34e7,	// (0x000034e7) cell_hwr_fs_pane_g1

0x3094,	// (0x00003094) cell_hwr_fs_pane_g2_ParamLimits

0x3094,	// (0x00003094) cell_hwr_fs_pane_g2

0xc6cf,	// (0x0000c6cf) cell_hwr_fs_pane_g3_ParamLimits

0xc6cf,	// (0x0000c6cf) cell_hwr_fs_pane_g3

0xc6dc,	// (0x0000c6dc) cell_hwr_fs_pane_g4_ParamLimits

0xc6dc,	// (0x0000c6dc) cell_hwr_fs_pane_g4

0x0003,

0xeafd,	// (0x0000eafd) cell_hwr_fs_pane_g_ParamLimits

0xeafd,	// (0x0000eafd) cell_hwr_fs_pane_g

0xc6e9,	// (0x0000c6e9) cell_hwr_fs_pane_t1

0x024e,	// (0x0000024e) grid_highlight_pane_cp6

0x024e,	// (0x0000024e) main_idle_act2_pane

0x14b8,	// (0x000014b8) aid_inside_area_popup_secondary

0xc872,	// (0x0000c872) aid_inside_area_window_primary_ParamLimits

0xc872,	// (0x0000c872) aid_inside_area_window_primary

0x4f10,	// (0x00004f10) ai2_news_ticker_pane

0x4f18,	// (0x00004f18) aid_size_cell_ai1_link_ParamLimits

0x4f18,	// (0x00004f18) aid_size_cell_ai1_link

0xcc9d,	// (0x0000cc9d) popup_ai2_data_window_ParamLimits

0xcc9d,	// (0x0000cc9d) popup_ai2_data_window

0x4f46,	// (0x00004f46) popup_ai2_link_window_ParamLimits

0x4f46,	// (0x00004f46) popup_ai2_link_window

0x343f,	// (0x0000343f) bg_popup_sub_pane_cp4_ParamLimits

0x343f,	// (0x0000343f) bg_popup_sub_pane_cp4

0x4f5a,	// (0x00004f5a) grid_ai2_link_pane_ParamLimits

0x4f5a,	// (0x00004f5a) grid_ai2_link_pane

0x4f71,	// (0x00004f71) popup_ai2_link_window_g1_ParamLimits

0x4f71,	// (0x00004f71) popup_ai2_link_window_g1

0x4f7d,	// (0x00004f7d) popup_ai2_link_window_g2_ParamLimits

0x4f7d,	// (0x00004f7d) popup_ai2_link_window_g2

0x0001,

0xa7a5,	// (0x0000a7a5) popup_ai2_link_window_g_ParamLimits

0xa7a5,	// (0x0000a7a5) popup_ai2_link_window_g

0x4f8c,	// (0x00004f8c) ai2_mp_button_pane

0x4f94,	// (0x00004f94) ai2_mp_volume_pane

0x369d,	// (0x0000369d) bg_popup_sub_pane_cp5_ParamLimits

0x369d,	// (0x0000369d) bg_popup_sub_pane_cp5

0x4f9c,	// (0x00004f9c) heading_ai2_gene_pane_ParamLimits

0x4f9c,	// (0x00004f9c) heading_ai2_gene_pane

0x4fa8,	// (0x00004fa8) list_ai2_gene_pane_ParamLimits

0x4fa8,	// (0x00004fa8) list_ai2_gene_pane

0x4ff0,	// (0x00004ff0) cell_ai2_link_pane_ParamLimits

0x4ff0,	// (0x00004ff0) cell_ai2_link_pane

0x5006,	// (0x00005006) cell_ai2_link_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp7

0x50d6,	// (0x000050d6) ai2_mp_volume_pane_g1

0x50de,	// (0x000050de) ai2_mp_volume_pane_g2

0xccc7,	// (0x0000ccc7) list_ai2_gene_pane_t1

0x50e6,	// (0x000050e6) ai2_mp_volume_pane_g3

0x0002,

0xa7be,	// (0x0000a7be) ai2_mp_volume_pane_g

0x50ee,	// (0x000050ee) volume_small_pane_cp3

0x50f7,	// (0x000050f7) aid_size_cell_ai2_button

0x50ff,	// (0x000050ff) grid_ai2_button_pane

0x5108,	// (0x00005108) cell_ai2_button_pane_ParamLimits

0x5108,	// (0x00005108) cell_ai2_button_pane

0x002a,	// (0x0000002a) cell_ai2_button_pane_g1

0x024e,	// (0x0000024e) grid_highlight_pane_cp8

0x5096,	// (0x00005096) ai2_gene_pane_t1_ParamLimits

0x5096,	// (0x00005096) ai2_gene_pane_t1

0xbcda,	// (0x0000bcda) aid_height_parent_landscape

0x4962,	// (0x00004962) aid_height_set_list

0x496e,	// (0x0000496e) aid_size_parent

0x4cdd,	// (0x00004cdd) aid_size_cell_graphic_pane_ParamLimits

0x4fb8,	// (0x00004fb8) popup_ai2_data_window_g1_ParamLimits

0x4fb8,	// (0x00004fb8) popup_ai2_data_window_g1

0x4fc4,	// (0x00004fc4) ai2_news_ticker_pane_g1

0x4fcc,	// (0x00004fcc) ai2_news_ticker_pane_g2

0x0001,

0xa7aa,	// (0x0000a7aa) ai2_news_ticker_pane_g

0x4fd4,	// (0x00004fd4) ai2_news_ticker_pane_t1

0x4fe2,	// (0x00004fe2) ai2_news_ticker_pane_t2

0x0001,

0xa7af,	// (0x0000a7af) ai2_news_ticker_pane_t

0x500f,	// (0x0000500f) heading_ai2_gene_pane_g1

0x5017,	// (0x00005017) heading_ai2_gene_pane_t1_ParamLimits

0x5017,	// (0x00005017) heading_ai2_gene_pane_t1

0x502c,	// (0x0000502c) list_highlight_pane_cp6

0xccb1,	// (0x0000ccb1) ai2_gene_pane_ParamLimits

0xccb1,	// (0x0000ccb1) ai2_gene_pane

0xccd5,	// (0x0000ccd5) list_ai2_gene_pane_t2

0x0001,

0xeb9a,	// (0x0000eb9a) list_ai2_gene_pane_t

0x5067,	// (0x00005067) list_highlight_pane_cp8_ParamLimits

0x5067,	// (0x00005067) list_highlight_pane_cp8

0x5078,	// (0x00005078) ai2_gene_pane_g1_ParamLimits

0x5078,	// (0x00005078) ai2_gene_pane_g1

0x508a,	// (0x0000508a) ai2_gene_pane_g2_ParamLimits

0x508a,	// (0x0000508a) ai2_gene_pane_g2

0x0001,

0xa7b9,	// (0x0000a7b9) ai2_gene_pane_g_ParamLimits

0xa7b9,	// (0x0000a7b9) ai2_gene_pane_g

0x0c8f,	// (0x00000c8f) scroll_pane_cp12

0xbc99,	// (0x0000bc99) control_pane_t3_ParamLimits

0xbc99,	// (0x0000bc99) control_pane_t3

0xbb4f,	// (0x0000bb4f) status_small_pane_g8_ParamLimits

0xbb4f,	// (0x0000bb4f) status_small_pane_g8

0xbde4,	// (0x0000bde4) popup_find_window_ParamLimits

0xbfd7,	// (0x0000bfd7) popup_note_image_window_ParamLimits

0x3237,	// (0x00003237) list_double2_graphic_pane_vc_g1_ParamLimits

0x3237,	// (0x00003237) list_double2_graphic_pane_vc_g1

0x21ba,	// (0x000021ba) list_double2_graphic_pane_vc_g2_ParamLimits

0x21ba,	// (0x000021ba) list_double2_graphic_pane_vc_g2

0x3162,	// (0x00003162) list_double2_graphic_pane_vc_g3_ParamLimits

0x3162,	// (0x00003162) list_double2_graphic_pane_vc_g3

0x0002,

0xa595,	// (0x0000a595) list_double2_graphic_pane_vc_g_ParamLimits

0xa595,	// (0x0000a595) list_double2_graphic_pane_vc_g

0x3243,	// (0x00003243) list_double2_graphic_pane_vc_t1_ParamLimits

0x3243,	// (0x00003243) list_double2_graphic_pane_vc_t1

0x21ba,	// (0x000021ba) list_single_heading_pane_vc_g1_ParamLimits

0x21ba,	// (0x000021ba) list_single_heading_pane_vc_g1

0x3162,	// (0x00003162) list_single_heading_pane_vc_g2_ParamLimits

0x3162,	// (0x00003162) list_single_heading_pane_vc_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_single_heading_pane_vc_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_single_heading_pane_vc_g

0x3344,	// (0x00003344) list_single_heading_pane_vc_t1_ParamLimits

0x3344,	// (0x00003344) list_single_heading_pane_vc_t1

0x335a,	// (0x0000335a) list_single_heading_pane_vc_t2_ParamLimits

0x335a,	// (0x0000335a) list_single_heading_pane_vc_t2

0x0001,

0xa5bb,	// (0x0000a5bb) list_single_heading_pane_vc_t_ParamLimits

0xa5bb,	// (0x0000a5bb) list_single_heading_pane_vc_t

0x3382,	// (0x00003382) list_setting_number_pane_vc_g1_ParamLimits

0x3382,	// (0x00003382) list_setting_number_pane_vc_g1

0x338e,	// (0x0000338e) list_setting_number_pane_vc_g2_ParamLimits

0x338e,	// (0x0000338e) list_setting_number_pane_vc_g2

0x0001,

0xa5c0,	// (0x0000a5c0) list_setting_number_pane_vc_g_ParamLimits

0xa5c0,	// (0x0000a5c0) list_setting_number_pane_vc_g

0x339a,	// (0x0000339a) list_setting_number_pane_vc_t1_ParamLimits

0x339a,	// (0x0000339a) list_setting_number_pane_vc_t1

0x33ae,	// (0x000033ae) list_setting_number_pane_vc_t2_ParamLimits

0x33ae,	// (0x000033ae) list_setting_number_pane_vc_t2

0x33ca,	// (0x000033ca) list_setting_number_pane_vc_t3_ParamLimits

0x33ca,	// (0x000033ca) list_setting_number_pane_vc_t3

0x0002,

0xa5c5,	// (0x0000a5c5) list_setting_number_pane_vc_t_ParamLimits

0xa5c5,	// (0x0000a5c5) list_setting_number_pane_vc_t

0x33f2,	// (0x000033f2) set_value_pane_vc_ParamLimits

0x33f2,	// (0x000033f2) set_value_pane_vc

0x4b38,	// (0x00004b38) list_double2_graphic_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double2_graphic_pane_vc

0x4b4c,	// (0x00004b4c) list_double2_large_graphic_pane_vc_ParamLimits

0x4b4c,	// (0x00004b4c) list_double2_large_graphic_pane_vc

0x4b38,	// (0x00004b38) list_double2_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double2_pane_vc

0x4b38,	// (0x00004b38) list_double_graphic_heading_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double_graphic_heading_pane_vc

0x4b38,	// (0x00004b38) list_double_graphic_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double_graphic_pane_vc

0x4b38,	// (0x00004b38) list_double_heading_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double_heading_pane_vc

0x4b5d,	// (0x00004b5d) list_double_large_graphic_pane_vc_ParamLimits

0x4b5d,	// (0x00004b5d) list_double_large_graphic_pane_vc

0x4b38,	// (0x00004b38) list_double_number_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double_number_pane_vc

0x4b38,	// (0x00004b38) list_double_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double_pane_vc

0x4b38,	// (0x00004b38) list_double_time_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_double_time_pane_vc

0x4b38,	// (0x00004b38) list_setting_number_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_setting_number_pane_vc

0x4b38,	// (0x00004b38) list_setting_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_setting_pane_vc

0x4b38,	// (0x00004b38) list_single_graphic_heading_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_single_graphic_heading_pane_vc

0x4b38,	// (0x00004b38) list_single_heading_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_single_heading_pane_vc

0x4b38,	// (0x00004b38) list_single_number_heading_pane_vc_ParamLimits

0x4b38,	// (0x00004b38) list_single_number_heading_pane_vc

0x3237,	// (0x00003237) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3237,	// (0x00003237) list_double_graphic_heading_pane_vc_g1

0x21ba,	// (0x000021ba) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x21ba,	// (0x000021ba) list_double_graphic_heading_pane_vc_g2

0x3162,	// (0x00003162) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3162,	// (0x00003162) list_double_graphic_heading_pane_vc_g3

0x0002,

0xa595,	// (0x0000a595) list_double_graphic_heading_pane_vc_g_ParamLimits

0xa595,	// (0x0000a595) list_double_graphic_heading_pane_vc_g

0x513c,	// (0x0000513c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x513c,	// (0x0000513c) list_double_graphic_heading_pane_vc_t1

0x5152,	// (0x00005152) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5152,	// (0x00005152) list_double_graphic_heading_pane_vc_t2

0x0001,

0xa7c5,	// (0x0000a7c5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xa7c5,	// (0x0000a7c5) list_double_graphic_heading_pane_vc_t

0x3382,	// (0x00003382) list_setting_pane_vc_g1_ParamLimits

0x3382,	// (0x00003382) list_setting_pane_vc_g1

0x338e,	// (0x0000338e) list_setting_pane_vc_g2_ParamLimits

0x338e,	// (0x0000338e) list_setting_pane_vc_g2

0x0001,

0xa5c0,	// (0x0000a5c0) list_setting_pane_vc_g_ParamLimits

0xa5c0,	// (0x0000a5c0) list_setting_pane_vc_g

0x5398,	// (0x00005398) list_setting_pane_vc_t1_ParamLimits

0x5398,	// (0x00005398) list_setting_pane_vc_t1

0x53ac,	// (0x000053ac) list_setting_pane_vc_t2_ParamLimits

0x53ac,	// (0x000053ac) list_setting_pane_vc_t2

0x0001,

0xa808,	// (0x0000a808) list_setting_pane_vc_t_ParamLimits

0xa808,	// (0x0000a808) list_setting_pane_vc_t

0x33f2,	// (0x000033f2) set_value_pane_cp_vc_ParamLimits

0x33f2,	// (0x000033f2) set_value_pane_cp_vc

0x21ba,	// (0x000021ba) list_single_number_heading_pane_vc_g1_ParamLimits

0x21ba,	// (0x000021ba) list_single_number_heading_pane_vc_g1

0x3162,	// (0x00003162) list_single_number_heading_pane_vc_g2_ParamLimits

0x3162,	// (0x00003162) list_single_number_heading_pane_vc_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_single_number_heading_pane_vc_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_single_number_heading_pane_vc_g

0x3344,	// (0x00003344) list_single_number_heading_pane_vc_t1_ParamLimits

0x3344,	// (0x00003344) list_single_number_heading_pane_vc_t1

0x53ce,	// (0x000053ce) list_single_number_heading_pane_vc_t2_ParamLimits

0x53ce,	// (0x000053ce) list_single_number_heading_pane_vc_t2

0x21f6,	// (0x000021f6) list_single_number_heading_pane_vc_t3_ParamLimits

0x21f6,	// (0x000021f6) list_single_number_heading_pane_vc_t3

0x0002,

0xa80d,	// (0x0000a80d) list_single_number_heading_pane_vc_t_ParamLimits

0xa80d,	// (0x0000a80d) list_single_number_heading_pane_vc_t

0x3237,	// (0x00003237) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3237,	// (0x00003237) list_single_graphic_heading_pane_vc_g1

0x21ba,	// (0x000021ba) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x21ba,	// (0x000021ba) list_single_graphic_heading_pane_vc_g4

0x3162,	// (0x00003162) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3162,	// (0x00003162) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa595,	// (0x0000a595) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa595,	// (0x0000a595) list_single_graphic_heading_pane_vc_g

0x3344,	// (0x00003344) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3344,	// (0x00003344) list_single_graphic_heading_pane_vc_t1

0x53e0,	// (0x000053e0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x53e0,	// (0x000053e0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xa814,	// (0x0000a814) list_single_graphic_heading_pane_vc_t_ParamLimits

0xa814,	// (0x0000a814) list_single_graphic_heading_pane_vc_t

0x21ba,	// (0x000021ba) list_double2_pane_vc_g1_ParamLimits

0x21ba,	// (0x000021ba) list_double2_pane_vc_g1

0x3162,	// (0x00003162) list_double2_pane_vc_g2_ParamLimits

0x3162,	// (0x00003162) list_double2_pane_vc_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_double2_pane_vc_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_double2_pane_vc_g

0x53f2,	// (0x000053f2) list_double2_pane_vc_t1_ParamLimits

0x53f2,	// (0x000053f2) list_double2_pane_vc_t1

0x0d47,	// (0x00000d47) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d47,	// (0x00000d47) list_double2_large_graphic_pane_vc_g1

0x0d53,	// (0x00000d53) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d53,	// (0x00000d53) list_double2_large_graphic_pane_vc_g2

0x0d5f,	// (0x00000d5f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d5f,	// (0x00000d5f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xa3c1,	// (0x0000a3c1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xa3c1,	// (0x0000a3c1) list_double2_large_graphic_pane_vc_g

0x0d73,	// (0x00000d73) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d73,	// (0x00000d73) list_double2_large_graphic_pane_vc_t1

0x5408,	// (0x00005408) list_double_time_pane_vc_g1_ParamLimits

0x5408,	// (0x00005408) list_double_time_pane_vc_g1

0x5414,	// (0x00005414) list_double_time_pane_vc_g2_ParamLimits

0x5414,	// (0x00005414) list_double_time_pane_vc_g2

0x0001,

0xa819,	// (0x0000a819) list_double_time_pane_vc_g_ParamLimits

0xa819,	// (0x0000a819) list_double_time_pane_vc_g

0x5420,	// (0x00005420) list_double_time_pane_vc_t1_ParamLimits

0x5420,	// (0x00005420) list_double_time_pane_vc_t1

0x543e,	// (0x0000543e) list_double_time_pane_vc_t2_ParamLimits

0x543e,	// (0x0000543e) list_double_time_pane_vc_t2

0x5462,	// (0x00005462) list_double_time_pane_vc_t3_ParamLimits

0x5462,	// (0x00005462) list_double_time_pane_vc_t3

0x5474,	// (0x00005474) list_double_time_pane_vc_t4_ParamLimits

0x5474,	// (0x00005474) list_double_time_pane_vc_t4

0x0003,

0xa81e,	// (0x0000a81e) list_double_time_pane_vc_t_ParamLimits

0xa81e,	// (0x0000a81e) list_double_time_pane_vc_t

0x21ba,	// (0x000021ba) list_double_pane_vc_g1_ParamLimits

0x21ba,	// (0x000021ba) list_double_pane_vc_g1

0x3162,	// (0x00003162) list_double_pane_vc_g2_ParamLimits

0x3162,	// (0x00003162) list_double_pane_vc_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_double_pane_vc_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_double_pane_vc_g

0x5486,	// (0x00005486) list_double_pane_vc_t1_ParamLimits

0x5486,	// (0x00005486) list_double_pane_vc_t1

0x5498,	// (0x00005498) list_double_pane_vc_t2_ParamLimits

0x5498,	// (0x00005498) list_double_pane_vc_t2

0x0001,

0xa827,	// (0x0000a827) list_double_pane_vc_t_ParamLimits

0xa827,	// (0x0000a827) list_double_pane_vc_t

0x21ba,	// (0x000021ba) list_double_number_pane_vc_g1_ParamLimits

0x21ba,	// (0x000021ba) list_double_number_pane_vc_g1

0x3162,	// (0x00003162) list_double_number_pane_vc_g2_ParamLimits

0x3162,	// (0x00003162) list_double_number_pane_vc_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_double_number_pane_vc_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_double_number_pane_vc_g

0x54ae,	// (0x000054ae) list_double_number_pane_vc_t1_ParamLimits

0x54ae,	// (0x000054ae) list_double_number_pane_vc_t1

0x54c2,	// (0x000054c2) list_double_number_pane_vc_t2_ParamLimits

0x54c2,	// (0x000054c2) list_double_number_pane_vc_t2

0x54d4,	// (0x000054d4) list_double_number_pane_vc_t3_ParamLimits

0x54d4,	// (0x000054d4) list_double_number_pane_vc_t3

0x0002,

0xa82c,	// (0x0000a82c) list_double_number_pane_vc_t_ParamLimits

0xa82c,	// (0x0000a82c) list_double_number_pane_vc_t

0x54ea,	// (0x000054ea) list_double_large_graphic_pane_vc_g1_ParamLimits

0x54ea,	// (0x000054ea) list_double_large_graphic_pane_vc_g1

0x5512,	// (0x00005512) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5512,	// (0x00005512) list_double_large_graphic_pane_vc_g2

0x5526,	// (0x00005526) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5526,	// (0x00005526) list_double_large_graphic_pane_vc_g3

0x5535,	// (0x00005535) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5535,	// (0x00005535) list_double_large_graphic_pane_vc_g4

0x0003,

0xa833,	// (0x0000a833) list_double_large_graphic_pane_vc_g_ParamLimits

0xa833,	// (0x0000a833) list_double_large_graphic_pane_vc_g

0x5545,	// (0x00005545) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5545,	// (0x00005545) list_double_large_graphic_pane_vc_t1

0x555f,	// (0x0000555f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x555f,	// (0x0000555f) list_double_large_graphic_pane_vc_t2

0x0001,

0xa83c,	// (0x0000a83c) list_double_large_graphic_pane_vc_t_ParamLimits

0xa83c,	// (0x0000a83c) list_double_large_graphic_pane_vc_t

0x21ba,	// (0x000021ba) list_double_heading_pane_vc_g1_ParamLimits

0x21ba,	// (0x000021ba) list_double_heading_pane_vc_g1

0x3162,	// (0x00003162) list_double_heading_pane_vc_g2_ParamLimits

0x3162,	// (0x00003162) list_double_heading_pane_vc_g2

0x0001,

0xa5b6,	// (0x0000a5b6) list_double_heading_pane_vc_g_ParamLimits

0xa5b6,	// (0x0000a5b6) list_double_heading_pane_vc_g

0x557f,	// (0x0000557f) list_double_heading_pane_vc_t1_ParamLimits

0x557f,	// (0x0000557f) list_double_heading_pane_vc_t1

0x3344,	// (0x00003344) list_double_heading_pane_vc_t2_ParamLimits

0x3344,	// (0x00003344) list_double_heading_pane_vc_t2

0x0001,

0xa841,	// (0x0000a841) list_double_heading_pane_vc_t_ParamLimits

0xa841,	// (0x0000a841) list_double_heading_pane_vc_t

0x5591,	// (0x00005591) list_double_graphic_pane_vc_g1_ParamLimits

0x5591,	// (0x00005591) list_double_graphic_pane_vc_g1

0x559d,	// (0x0000559d) list_double_graphic_pane_vc_g2_ParamLimits

0x559d,	// (0x0000559d) list_double_graphic_pane_vc_g2

0x21ba,	// (0x000021ba) list_double_graphic_pane_vc_g3_ParamLimits

0x21ba,	// (0x000021ba) list_double_graphic_pane_vc_g3

0x0003,

0xa846,	// (0x0000a846) list_double_graphic_pane_vc_g_ParamLimits

0xa846,	// (0x0000a846) list_double_graphic_pane_vc_g

0x55ba,	// (0x000055ba) list_double_graphic_pane_vc_t1_ParamLimits

0x55ba,	// (0x000055ba) list_double_graphic_pane_vc_t1

0x55d8,	// (0x000055d8) list_double_graphic_pane_vc_t2_ParamLimits

0x55d8,	// (0x000055d8) list_double_graphic_pane_vc_t2

0x0001,

0xa84f,	// (0x0000a84f) list_double_graphic_pane_vc_t_ParamLimits

0xa84f,	// (0x0000a84f) list_double_graphic_pane_vc_t

0x0044,	// (0x00000044) aid_size_cell_fastswap

0xad18,	// (0x0000ad18) aid_size_cell_touch_ParamLimits

0xad18,	// (0x0000ad18) aid_size_cell_touch

0x0278,	// (0x00000278) popup_fast_swap_wide_window_ParamLimits

0x0278,	// (0x00000278) popup_fast_swap_wide_window

0xae79,	// (0x0000ae79) touch_pane_ParamLimits

0xae79,	// (0x0000ae79) touch_pane

0x112a,	// (0x0000112a) button_value_adjust_pane_cp2

0x1132,	// (0x00001132) button_value_adjust_pane_cp4

0x1152,	// (0x00001152) form_field_data_pane_cp2

0xb610,	// (0x0000b610) form_field_data_wide_pane_cp2

0x191a,	// (0x0000191a) bg_scroll_pane_ParamLimits

0x1939,	// (0x00001939) scroll_handle_pane_ParamLimits

0x194d,	// (0x0000194d) scroll_sc2_down_pane_ParamLimits

0x194d,	// (0x0000194d) scroll_sc2_down_pane

0x1974,	// (0x00001974) scroll_sc2_up_pane_ParamLimits

0x1974,	// (0x00001974) scroll_sc2_up_pane

0xcdf7,	// (0x0000cdf7) grid_wheel_folder_pane_g1_ParamLimits

0xcdf7,	// (0x0000cdf7) grid_wheel_folder_pane_g1

0x1ffe,	// (0x00001ffe) clock_nsta_pane_cp2_ParamLimits

0x1ffe,	// (0x00001ffe) clock_nsta_pane_cp2

0xba65,	// (0x0000ba65) listscroll_midp_pane_ParamLimits

0xba74,	// (0x0000ba74) midp_canvas_pane

0x281c,	// (0x0000281c) nsta_clock_indic_pane

0x287a,	// (0x0000287a) listscroll_form_pane_vc

0x289f,	// (0x0000289f) listscroll_set_pane_vc_ParamLimits

0x289f,	// (0x0000289f) listscroll_set_pane_vc

0xc3a3,	// (0x0000c3a3) clock_nsta_pane

0xc3c6,	// (0x0000c3c6) indicator_nsta_pane

0x31b4,	// (0x000031b4) bg_popup_sub_pane_cp2_ParamLimits

0x31c8,	// (0x000031c8) find_pane_cp2_ParamLimits

0x31c8,	// (0x000031c8) find_pane_cp2

0x31da,	// (0x000031da) grid_toobar_pane_ParamLimits

0x33fe,	// (0x000033fe) list_form_gen_pane_vc_ParamLimits

0x33fe,	// (0x000033fe) list_form_gen_pane_vc

0x3414,	// (0x00003414) scroll_pane_cp8_vc_ParamLimits

0x3414,	// (0x00003414) scroll_pane_cp8_vc

0x3525,	// (0x00003525) data_form_wide_pane_vc_ParamLimits

0x3525,	// (0x00003525) data_form_wide_pane_vc

0x3531,	// (0x00003531) form_field_data_wide_pane_vc_g1

0x3539,	// (0x00003539) form_field_data_wide_pane_vc_t1_ParamLimits

0x3539,	// (0x00003539) form_field_data_wide_pane_vc_t1

0x11fa,	// (0x000011fa) input_focus_pane_cp6_vc_ParamLimits

0x11fa,	// (0x000011fa) input_focus_pane_cp6_vc

0xc729,	// (0x0000c729) list_midp_pane_ParamLimits

0x4d3e,	// (0x00004d3e) scroll_pane_cp16_ParamLimits

0x4d3e,	// (0x00004d3e) scroll_pane_cp16

0x3897,	// (0x00003897) button_value_adjust_pane_ParamLimits

0x3897,	// (0x00003897) button_value_adjust_pane

0xca39,	// (0x0000ca39) button_value_adjust_pane_cp6_ParamLimits

0xca39,	// (0x0000ca39) button_value_adjust_pane_cp6

0xcb43,	// (0x0000cb43) settings_code_pane_cp_ParamLimits

0xcb43,	// (0x0000cb43) settings_code_pane_cp

0x002a,	// (0x0000002a) cell_touch_pane_g1

0x002a,	// (0x0000002a) cell_touch_pane_g2

0x0001,

0xa4da,	// (0x0000a4da) cell_touch_pane_g

0xcce3,	// (0x0000cce3) cell_touch_pane_cp_ParamLimits

0xcce3,	// (0x0000cce3) cell_touch_pane_cp

0xccff,	// (0x0000ccff) cell_touch_pane_ParamLimits

0xccff,	// (0x0000ccff) cell_touch_pane

0x002a,	// (0x0000002a) scroll_sc2_down_pane_g1

0x002a,	// (0x0000002a) scroll_sc2_up_pane_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_vc

0x516a,	// (0x0000516a) list_set_graphic_pane_vc_g1_ParamLimits

0x516a,	// (0x0000516a) list_set_graphic_pane_vc_g1

0x5176,	// (0x00005176) list_set_graphic_pane_vc_g2_ParamLimits

0x5176,	// (0x00005176) list_set_graphic_pane_vc_g2

0x0001,

0xa7ca,	// (0x0000a7ca) list_set_graphic_pane_vc_g_ParamLimits

0xa7ca,	// (0x0000a7ca) list_set_graphic_pane_vc_g

0x5182,	// (0x00005182) text_primary_small_cp13_vc_ParamLimits

0x5182,	// (0x00005182) text_primary_small_cp13_vc

0x519a,	// (0x0000519a) list_set_graphic_pane_vc_ParamLimits

0x519a,	// (0x0000519a) list_set_graphic_pane_vc

0x024e,	// (0x0000024e) input_focus_pane_cp2_vc

0x002a,	// (0x0000002a) setting_code_pane_vc_g1

0x51ad,	// (0x000051ad) setting_code_pane_vc_t1

0x51bb,	// (0x000051bb) set_text_pane_vc_t1_ParamLimits

0x51bb,	// (0x000051bb) set_text_pane_vc_t1

0x024e,	// (0x0000024e) input_focus_pane_cp1_vc

0x51d6,	// (0x000051d6) list_set_text_pane_vc

0x002a,	// (0x0000002a) setting_text_pane_vc_g1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_vc

0x51e0,	// (0x000051e0) setting_slider_graphic_pane_vc_g1

0x51e8,	// (0x000051e8) setting_slider_graphic_pane_vc_t1

0x51f6,	// (0x000051f6) setting_slider_graphic_pane_vc_t2

0x0001,

0xa7cf,	// (0x0000a7cf) setting_slider_graphic_pane_vc_t

0x5204,	// (0x00005204) slider_set_pane_cp_vc

0x520c,	// (0x0000520c) slider_set_pane_vc_g1

0x5215,	// (0x00005215) slider_set_pane_vc_g2

0x0006,

0xa7d4,	// (0x0000a7d4) slider_set_pane_vc_g

0x131d,	// (0x0000131d) set_opt_bg_pane_g1_copy1

0x1325,	// (0x00001325) set_opt_bg_pane_g2_copy1

0x5241,	// (0x00005241) set_opt_bg_pane_g3_copy1

0x1335,	// (0x00001335) set_opt_bg_pane_g4_copy1

0x133d,	// (0x0000133d) set_opt_bg_pane_g5_copy1

0x1345,	// (0x00001345) set_opt_bg_pane_g6_copy1

0x5249,	// (0x00005249) set_opt_bg_pane_g7_copy1

0x5251,	// (0x00005251) set_opt_bg_pane_g8_copy1

0x5259,	// (0x00005259) set_opt_bg_pane_g9_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp_vc

0x5261,	// (0x00005261) setting_slider_pane_vc_t1

0x51e8,	// (0x000051e8) setting_slider_pane_vc_t2

0x51f6,	// (0x000051f6) setting_slider_pane_vc_t3

0x0002,

0xa7e3,	// (0x0000a7e3) setting_slider_pane_vc_t

0x5204,	// (0x00005204) slider_set_pane_vc

0x4067,	// (0x00004067) volume_set_pane_vc_g1

0x5270,	// (0x00005270) volume_set_pane_vc_g2

0x5279,	// (0x00005279) volume_set_pane_vc_g3

0x5282,	// (0x00005282) volume_set_pane_vc_g4

0x528b,	// (0x0000528b) volume_set_pane_vc_g5

0x5294,	// (0x00005294) volume_set_pane_vc_g6

0x529d,	// (0x0000529d) volume_set_pane_vc_g7

0x52a6,	// (0x000052a6) volume_set_pane_vc_g8

0x52af,	// (0x000052af) volume_set_pane_vc_g9

0x52b8,	// (0x000052b8) volume_set_pane_vc_g10

0x0009,

0xa7ea,	// (0x0000a7ea) volume_set_pane_vc_g

0x52c1,	// (0x000052c1) volume_set_pane_vc

0x52c9,	// (0x000052c9) button_value_adjust_pane_cp1_vc

0x52d3,	// (0x000052d3) list_highlight_pane_cp2_vc

0x52dc,	// (0x000052dc) list_set_pane_vc_ParamLimits

0x52dc,	// (0x000052dc) list_set_pane_vc

0x532e,	// (0x0000532e) main_pane_set_vc_t1_ParamLimits

0x532e,	// (0x0000532e) main_pane_set_vc_t1

0x5343,	// (0x00005343) main_pane_set_vc_t2_ParamLimits

0x5343,	// (0x00005343) main_pane_set_vc_t2

0x5355,	// (0x00005355) main_pane_set_vc_t3_ParamLimits

0x5355,	// (0x00005355) main_pane_set_vc_t3

0x5367,	// (0x00005367) main_pane_set_vc_t4_ParamLimits

0x5367,	// (0x00005367) main_pane_set_vc_t4

0x0003,

0xa7ff,	// (0x0000a7ff) main_pane_set_vc_t_ParamLimits

0xa7ff,	// (0x0000a7ff) main_pane_set_vc_t

0x5379,	// (0x00005379) setting_code_pane_vc_ParamLimits

0x5379,	// (0x00005379) setting_code_pane_vc

0x5388,	// (0x00005388) setting_slider_graphic_pane_vc

0x5388,	// (0x00005388) setting_slider_pane_vc

0x5388,	// (0x00005388) setting_text_pane_vc

0x5388,	// (0x00005388) setting_volume_pane_vc

0x5390,	// (0x00005390) scroll_pane_cp121_vc

0x1121,	// (0x00001121) set_content_pane_vc

0x55f6,	// (0x000055f6) button_value_adjust_pane_g1

0x55ff,	// (0x000055ff) button_value_adjust_pane_g2

0x0001,

0xa854,	// (0x0000a854) button_value_adjust_pane_g

0x5608,	// (0x00005608) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5608,	// (0x00005608) form_field_slider_wide_pane_vc_t1

0x561e,	// (0x0000561e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x561e,	// (0x0000561e) form_field_slider_wide_pane_vc_t2

0x0002,

0xa859,	// (0x0000a859) form_field_slider_wide_pane_vc_t_ParamLimits

0xa859,	// (0x0000a859) form_field_slider_wide_pane_vc_t

0x0798,	// (0x00000798) input_focus_pane_cp10_vc_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp10_vc

0x5649,	// (0x00005649) slider_cont_pane_cp1_vc_ParamLimits

0x5649,	// (0x00005649) slider_cont_pane_cp1_vc

0x520c,	// (0x0000520c) slider_form_pane_g1_cp2

0x5215,	// (0x00005215) slider_form_pane_g2_cp2

0x5664,	// (0x00005664) form_field_slider_pane_vc_t3

0x5672,	// (0x00005672) form_field_slider_pane_vc_t4

0x5680,	// (0x00005680) slider_form_pane_vc_ParamLimits

0x5680,	// (0x00005680) slider_form_pane_vc

0x568d,	// (0x0000568d) form_field_slider_pane_vc_t1_ParamLimits

0x568d,	// (0x0000568d) form_field_slider_pane_vc_t1

0x56a3,	// (0x000056a3) form_field_slider_pane_vc_t2_ParamLimits

0x56a3,	// (0x000056a3) form_field_slider_pane_vc_t2

0x0001,

0xa86b,	// (0x0000a86b) form_field_slider_pane_vc_t_ParamLimits

0xa86b,	// (0x0000a86b) form_field_slider_pane_vc_t

0x0798,	// (0x00000798) input_focus_pane_cp9_vc_ParamLimits

0x0798,	// (0x00000798) input_focus_pane_cp9_vc

0x56b5,	// (0x000056b5) slider_cont_pane_vc_ParamLimits

0x56b5,	// (0x000056b5) slider_cont_pane_vc

0x56c7,	// (0x000056c7) list_form_graphic_pane_cp_vc_ParamLimits

0x56c7,	// (0x000056c7) list_form_graphic_pane_cp_vc

0x3531,	// (0x00003531) form_field_popup_wide_pane_vc_g1

0x56dc,	// (0x000056dc) form_field_popup_wide_pane_vc_t1_ParamLimits

0x56dc,	// (0x000056dc) form_field_popup_wide_pane_vc_t1

0x11fa,	// (0x000011fa) input_focus_pane_cp8_vc_ParamLimits

0x11fa,	// (0x000011fa) input_focus_pane_cp8_vc

0x571b,	// (0x0000571b) list_form_wide_pane_vc_ParamLimits

0x571b,	// (0x0000571b) list_form_wide_pane_vc

0x5727,	// (0x00005727) list_form_graphic_pane_vc_g1

0x572f,	// (0x0000572f) list_form_graphic_pane_vc_t1_ParamLimits

0x572f,	// (0x0000572f) list_form_graphic_pane_vc_t1

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc_ParamLimits

0x0474,	// (0x00000474) list_highlight_pane_cp5_vc

0x574b,	// (0x0000574b) list_form_graphic_pane_vc_ParamLimits

0x574b,	// (0x0000574b) list_form_graphic_pane_vc

0x3531,	// (0x00003531) form_field_popup_pane_vc_g1

0x5761,	// (0x00005761) form_field_popup_pane_vc_t1_ParamLimits

0x5761,	// (0x00005761) form_field_popup_pane_vc_t1

0x11fa,	// (0x000011fa) input_focus_pane_cp7_vc_ParamLimits

0x11fa,	// (0x000011fa) input_focus_pane_cp7_vc

0x5776,	// (0x00005776) list_form_pane_vc_ParamLimits

0x5776,	// (0x00005776) list_form_pane_vc

0x5782,	// (0x00005782) data_form_pane_vc_t1_ParamLimits

0x5782,	// (0x00005782) data_form_pane_vc_t1

0x131d,	// (0x0000131d) input_focus_pane_vc_g1

0x1325,	// (0x00001325) input_focus_pane_vc_g2

0x132d,	// (0x0000132d) input_focus_pane_vc_g3

0x1335,	// (0x00001335) input_focus_pane_vc_g4

0x133d,	// (0x0000133d) input_focus_pane_vc_g5

0x1345,	// (0x00001345) input_focus_pane_vc_g6

0x134d,	// (0x0000134d) input_focus_pane_vc_g7

0x1355,	// (0x00001355) input_focus_pane_vc_g8

0x135d,	// (0x0000135d) input_focus_pane_vc_g9

0x002a,	// (0x0000002a) input_focus_pane_vc_g10

0x0009,

0xa463,	// (0x0000a463) input_focus_pane_vc_g

0x3525,	// (0x00003525) data_form_pane_vc_ParamLimits

0x3525,	// (0x00003525) data_form_pane_vc

0x3531,	// (0x00003531) form_field_data_pane_vc_g1

0x579d,	// (0x0000579d) form_field_data_pane_vc_t1_ParamLimits

0x579d,	// (0x0000579d) form_field_data_pane_vc_t1

0x11fa,	// (0x000011fa) input_focus_pane_vc_ParamLimits

0x11fa,	// (0x000011fa) input_focus_pane_vc

0x112a,	// (0x0000112a) button_value_adjust_pane_cp3_vc

0x57b3,	// (0x000057b3) button_value_adjust_pane_cp5_vc

0x57bb,	// (0x000057bb) form_field_data_pane_vc_ParamLimits

0x57bb,	// (0x000057bb) form_field_data_pane_vc

0x1152,	// (0x00001152) form_field_data_pane_vc_cp2

0x57d2,	// (0x000057d2) form_field_data_wide_pane_vc_ParamLimits

0x57d2,	// (0x000057d2) form_field_data_wide_pane_vc

0x57e8,	// (0x000057e8) form_field_data_wide_pane_vc_cp2

0x57f0,	// (0x000057f0) form_field_popup_pane_vc_ParamLimits

0x57f0,	// (0x000057f0) form_field_popup_pane_vc

0x5807,	// (0x00005807) form_field_popup_wide_pane_vc_ParamLimits

0x5807,	// (0x00005807) form_field_popup_wide_pane_vc

0x581d,	// (0x0000581d) form_field_slider_pane_vc_ParamLimits

0x581d,	// (0x0000581d) form_field_slider_pane_vc

0x5830,	// (0x00005830) form_field_slider_wide_pane_vc_ParamLimits

0x5830,	// (0x00005830) form_field_slider_wide_pane_vc

0xcd1d,	// (0x0000cd1d) grid_touch_1_pane_ParamLimits

0xcd1d,	// (0x0000cd1d) grid_touch_1_pane

0xcd31,	// (0x0000cd31) grid_touch_2_pane_ParamLimits

0xcd31,	// (0x0000cd31) grid_touch_2_pane

0x590f,	// (0x0000590f) touch_pane_g1_ParamLimits

0x590f,	// (0x0000590f) touch_pane_g1

0x5867,	// (0x00005867) cell_app_pane_cp_wide_ParamLimits

0x5867,	// (0x00005867) cell_app_pane_cp_wide

0x5877,	// (0x00005877) grid_popup_fast_wide_pane_ParamLimits

0x5877,	// (0x00005877) grid_popup_fast_wide_pane

0x588b,	// (0x0000588b) scroll_pane_cp19_ParamLimits

0x588b,	// (0x0000588b) scroll_pane_cp19

0x024e,	// (0x0000024e) bg_popup_window_pane_cp20

0x589f,	// (0x0000589f) listscroll_popup_fast_wide_pane

0xcd5b,	// (0x0000cd5b) grid_indicator_nsta_pane

0x58b9,	// (0x000058b9) clock_nsta_pane_g1

0x58c2,	// (0x000058c2) clock_nsta_pane_t1

0xcd67,	// (0x0000cd67) cell_indicator_nsta_pane_ParamLimits

0xcd67,	// (0x0000cd67) cell_indicator_nsta_pane

0x590f,	// (0x0000590f) cell_indicator_nsta_pane_g1

0xcd7e,	// (0x0000cd7e) cell_indicator_nsta_pane_g2

0x0001,

0xeb9f,	// (0x0000eb9f) cell_indicator_nsta_pane_g

0x592d,	// (0x0000592d) clock_nsta_pane_cp

0x5935,	// (0x00005935) indicator_nsta_pane_cp

0x593e,	// (0x0000593e) nsta_clock_indic_pane_g1

0x05df,	// (0x000005df) grid_indicator_pane

0x1a66,	// (0x00001a66) scroll_pane_cp29

0x1f33,	// (0x00001f33) indicator_nsta_pane_cp2_ParamLimits

0x1f33,	// (0x00001f33) indicator_nsta_pane_cp2

0x0474,	// (0x00000474) main_apps_wheel_pane

0x3710,	// (0x00003710) form_midp_field_text_pane_ParamLimits

0x3855,	// (0x00003855) scroll_bar_cp050_ParamLimits

0x59a7,	// (0x000059a7) cell_indicator_pane_ParamLimits

0x59a7,	// (0x000059a7) cell_indicator_pane

0x59bd,	// (0x000059bd) cell_indicator_pane_g1

0xcd8b,	// (0x0000cd8b) grid_wheel_folder_pane_ParamLimits

0xcd8b,	// (0x0000cd8b) grid_wheel_folder_pane

0xcd99,	// (0x0000cd99) list_wheel_apps_pane_ParamLimits

0xcd99,	// (0x0000cd99) list_wheel_apps_pane

0xcda5,	// (0x0000cda5) main_apps_wheel_pane_g1_ParamLimits

0xcda5,	// (0x0000cda5) main_apps_wheel_pane_g1

0xcdb1,	// (0x0000cdb1) main_apps_wheel_pane_g2_ParamLimits

0xcdb1,	// (0x0000cdb1) main_apps_wheel_pane_g2

0x0001,

0xeba4,	// (0x0000eba4) main_apps_wheel_pane_g_ParamLimits

0xeba4,	// (0x0000eba4) main_apps_wheel_pane_g

0xcdbd,	// (0x0000cdbd) main_apps_wheel_pane_t1_ParamLimits

0xcdbd,	// (0x0000cdbd) main_apps_wheel_pane_t1

0xcdcf,	// (0x0000cdcf) list_wheel_apps_pane_g1

0xcdd7,	// (0x0000cdd7) list_wheel_apps_pane_g2

0xcddf,	// (0x0000cddf) list_wheel_apps_pane_g3

0xcde7,	// (0x0000cde7) list_wheel_apps_pane_g4

0xcdef,	// (0x0000cdef) list_wheel_apps_pane_g5

0x0004,

0xeba9,	// (0x0000eba9) list_wheel_apps_pane_g

0x0474,	// (0x00000474) navi_icon_text_pane

0xc2af,	// (0x0000c2af) aid_fill_nsta

0x5a6e,	// (0x00005a6e) navi_icon_text_pane_g1

0x5a7a,	// (0x00005a7a) navi_icon_text_pane_t1

0x20b7,	// (0x000020b7) list_set_graphic_pane_t1_ParamLimits

0x20b7,	// (0x000020b7) list_set_graphic_pane_t1

0x3f77,	// (0x00003f77) popup_midp_note_alarm_window_t6_ParamLimits

0x3f77,	// (0x00003f77) popup_midp_note_alarm_window_t6

0x3f89,	// (0x00003f89) popup_midp_note_alarm_window_t7_ParamLimits

0x3f89,	// (0x00003f89) popup_midp_note_alarm_window_t7

0x3f9b,	// (0x00003f9b) popup_midp_note_alarm_window_t8_ParamLimits

0x3f9b,	// (0x00003f9b) popup_midp_note_alarm_window_t8

0x3fad,	// (0x00003fad) popup_midp_note_alarm_window_t9_ParamLimits

0x3fad,	// (0x00003fad) popup_midp_note_alarm_window_t9

0x3fbf,	// (0x00003fbf) popup_midp_note_alarm_window_t10_ParamLimits

0x3fbf,	// (0x00003fbf) popup_midp_note_alarm_window_t10

0x3fd1,	// (0x00003fd1) popup_midp_note_alarm_window_t11_ParamLimits

0x3fd1,	// (0x00003fd1) popup_midp_note_alarm_window_t11

0x3fe3,	// (0x00003fe3) scroll_pane_cp17_ParamLimits

0x3fe3,	// (0x00003fe3) scroll_pane_cp17

0x4067,	// (0x00004067) volume_small_pane_cp_g1

0x5a8c,	// (0x00005a8c) volume_small_pane_cp_g2

0x5a95,	// (0x00005a95) volume_small_pane_cp_g3

0x5a9e,	// (0x00005a9e) volume_small_pane_cp_g4

0x4094,	// (0x00004094) volume_small_pane_cp_g5

0x5aa7,	// (0x00005aa7) volume_small_pane_cp_g6

0x5ab0,	// (0x00005ab0) volume_small_pane_cp_g7

0x5ab9,	// (0x00005ab9) volume_small_pane_cp_g8

0x5ac2,	// (0x00005ac2) volume_small_pane_cp_g9

0x5acb,	// (0x00005acb) volume_small_pane_cp_g10

0x2416,	// (0x00002416) midp_ticker_pane_g1_ParamLimits

0x2422,	// (0x00002422) midp_ticker_pane_g2_ParamLimits

0xa52f,	// (0x0000a52f) midp_ticker_pane_g_ParamLimits

0x242e,	// (0x0000242e) midp_ticker_pane_t1_ParamLimits

0xc2c5,	// (0x0000c2c5) aid_fill_nsta_2

0x3841,	// (0x00003841) list_form2_midp_pane

0x4b07,	// (0x00004b07) midp_editing_number_pane_ParamLimits

0x4b13,	// (0x00004b13) midp_ticker_pane_ParamLimits

0x5ad4,	// (0x00005ad4) form2_midp_field_pane

0x5af8,	// (0x00005af8) scroll_pane_cp51

0x5b18,	// (0x00005b18) form2_midp_button_pane_ParamLimits

0x5b18,	// (0x00005b18) form2_midp_button_pane

0x5b2a,	// (0x00005b2a) form2_midp_content_pane_ParamLimits

0x5b2a,	// (0x00005b2a) form2_midp_content_pane

0x5b44,	// (0x00005b44) form2_midp_field_choice_group_pane

0x5b4c,	// (0x00005b4c) form2_midp_field_pane_g1

0x5b54,	// (0x00005b54) form2_midp_field_pane_g2

0x5b5c,	// (0x00005b5c) form2_midp_field_pane_g3

0x5b64,	// (0x00005b64) form2_midp_field_pane_g4

0x0003,

0xa8c2,	// (0x0000a8c2) form2_midp_field_pane_g

0x5b6c,	// (0x00005b6c) form2_midp_gauge_slider_pane

0x5b74,	// (0x00005b74) form2_midp_gauge_wait_pane

0x5b7c,	// (0x00005b7c) form2_midp_image_pane_ParamLimits

0x5b7c,	// (0x00005b7c) form2_midp_image_pane

0x5b97,	// (0x00005b97) form2_midp_label_pane_ParamLimits

0x5b97,	// (0x00005b97) form2_midp_label_pane

0xce24,	// (0x0000ce24) form2_midp_label_pane_cp_ParamLimits

0xce24,	// (0x0000ce24) form2_midp_label_pane_cp

0x5bcf,	// (0x00005bcf) form2_midp_string_pane_ParamLimits

0x5bcf,	// (0x00005bcf) form2_midp_string_pane

0x5be1,	// (0x00005be1) form2_midp_text_pane_ParamLimits

0x5be1,	// (0x00005be1) form2_midp_text_pane

0x5bfa,	// (0x00005bfa) form2_midp_time_pane

0x5c0a,	// (0x00005c0a) input_focus_pane_cp51_ParamLimits

0x5c0a,	// (0x00005c0a) input_focus_pane_cp51

0x5c22,	// (0x00005c22) form2_midp_label_pane_t1_ParamLimits

0x5c22,	// (0x00005c22) form2_midp_label_pane_t1

0x1365,	// (0x00001365) form2_mdip_text_pane_t1_ParamLimits

0x1365,	// (0x00001365) form2_mdip_text_pane_t1

0x5c62,	// (0x00005c62) form2_midp_time_pane_t1

0x5c7d,	// (0x00005c7d) form2_midp_gauge_slider_pane_t1

0xce43,	// (0x0000ce43) form2_midp_gauge_slider_pane_t2

0xce55,	// (0x0000ce55) form2_midp_gauge_slider_pane_t3

0x0002,

0xebb9,	// (0x0000ebb9) form2_midp_gauge_slider_pane_t

0x5cb3,	// (0x00005cb3) form2_midp_slider_pane

0x5cbf,	// (0x00005cbf) form2_midp_gauge_wait_pane_t1

0x5ccd,	// (0x00005ccd) form2_midp_wait_pane_ParamLimits

0x5ccd,	// (0x00005ccd) form2_midp_wait_pane

0x356f,	// (0x0000356f) list_single_2graphic_pane_cp4_ParamLimits

0x356f,	// (0x0000356f) list_single_2graphic_pane_cp4

0x5cf8,	// (0x00005cf8) list_single_midp_graphic_pane_cp_ParamLimits

0x5cf8,	// (0x00005cf8) list_single_midp_graphic_pane_cp

0x024e,	// (0x0000024e) list_highlight_pane_cp20

0x5d16,	// (0x00005d16) list_single_2graphic_pane_g1_cp4

0x500f,	// (0x0000500f) list_single_2graphic_pane_g2_cp4

0x5d1e,	// (0x00005d1e) list_single_2graphic_pane_t1_cp4

0x0474,	// (0x00000474) list_highlight_pane_cp21

0x5d2d,	// (0x00005d2d) list_single_midp_graphic_pane_g4_cp

0x5d3c,	// (0x00005d3c) list_single_midp_graphic_pane_t1_cp

0x5d51,	// (0x00005d51) form2_mdip_string_pane_t1_ParamLimits

0x5d51,	// (0x00005d51) form2_mdip_string_pane_t1

0x024e,	// (0x0000024e) bg_wml_button_pane_cp2

0x002a,	// (0x0000002a) form2_midp_image_pane_g1

0x0f2a,	// (0x00000f2a) list_double_large_graphic_pane_g5_ParamLimits

0x0f2a,	// (0x00000f2a) list_double_large_graphic_pane_g5

0xba65,	// (0x0000ba65) midp_form_pane_ParamLimits

0x0474,	// (0x00000474) main_apps_wheel_pane_ParamLimits

0xc051,	// (0x0000c051) popup_preview_window_ParamLimits

0xc051,	// (0x0000c051) popup_preview_window

0x2d12,	// (0x00002d12) popup_touch_info_window_ParamLimits

0x2d12,	// (0x00002d12) popup_touch_info_window

0x2d30,	// (0x00002d30) popup_touch_menu_window_ParamLimits

0x2d30,	// (0x00002d30) popup_touch_menu_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp6

0x5dbb,	// (0x00005dbb) list_touch_menu_pane

0x5dc3,	// (0x00005dc3) list_single_touch_menu_pane_ParamLimits

0x5dc3,	// (0x00005dc3) list_single_touch_menu_pane

0x5dda,	// (0x00005dda) list_single_touch_menu_pane_t1

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7_ParamLimits

0x0474,	// (0x00000474) bg_popup_sub_pane_cp7

0x5de8,	// (0x00005de8) heading_sub_pane

0x5df0,	// (0x00005df0) list_touch_info_pane_ParamLimits

0x5df0,	// (0x00005df0) list_touch_info_pane

0x5dff,	// (0x00005dff) list_single_touch_info_pane_ParamLimits

0x5dff,	// (0x00005dff) list_single_touch_info_pane

0x5e10,	// (0x00005e10) list_single_touch_info_pane_t1

0x5e1e,	// (0x00005e1e) list_single_touch_info_pane_t2

0x0001,

0xa8d9,	// (0x0000a8d9) list_single_touch_info_pane_t

0x2345,	// (0x00002345) bg_popup_heading_pane_cp

0x5e2c,	// (0x00005e2c) heading_sub_pane_t1

0x343f,	// (0x0000343f) bg_popup_preview_window_pane_cp_ParamLimits

0x343f,	// (0x0000343f) bg_popup_preview_window_pane_cp

0x5de8,	// (0x00005de8) heading_preview_pane

0x5df0,	// (0x00005df0) list_preview_pane_ParamLimits

0x5df0,	// (0x00005df0) list_preview_pane

0x5e3a,	// (0x00005e3a) popup_preview_window_g1

0x5dff,	// (0x00005dff) list_single_preview_pane_ParamLimits

0x5dff,	// (0x00005dff) list_single_preview_pane

0x5e42,	// (0x00005e42) list_single_preview_pane_g1

0x5e4a,	// (0x00005e4a) list_single_preview_pane_t1

0x5e10,	// (0x00005e10) list_single_preview_pane_t2

0x0001,

0xa8de,	// (0x0000a8de) list_single_preview_pane_t

0x5e58,	// (0x00005e58) bg_popup_heading_pane_cp2_ParamLimits

0x5e58,	// (0x00005e58) bg_popup_heading_pane_cp2

0x5e6e,	// (0x00005e6e) heading_preview_pane_g1

0x5e76,	// (0x00005e76) heading_preview_pane_t1_ParamLimits

0x5e76,	// (0x00005e76) heading_preview_pane_t1

0x0602,	// (0x00000602) soft_indicator_pane_t1_ParamLimits

0x0c6b,	// (0x00000c6b) scroll_pane_ParamLimits

0x1962,	// (0x00001962) scroll_sc2_left_pane

0x196b,	// (0x0000196b) scroll_sc2_right_pane

0x198a,	// (0x0000198a) scroll_bg_pane_g1_ParamLimits

0x199f,	// (0x0000199f) scroll_bg_pane_g2_ParamLimits

0x19b7,	// (0x000019b7) scroll_bg_pane_g3_ParamLimits

0xa4ba,	// (0x0000a4ba) scroll_bg_pane_g_ParamLimits

0x198a,	// (0x0000198a) scroll_handle_pane_g1_ParamLimits

0x19d9,	// (0x000019d9) scroll_handle_pane_g2_ParamLimits

0x19b7,	// (0x000019b7) scroll_handle_pane_g3_ParamLimits

0xa4c1,	// (0x0000a4c1) scroll_handle_pane_g_ParamLimits

0x28df,	// (0x000028df) popup_choice_list_window_ParamLimits

0x28df,	// (0x000028df) popup_choice_list_window

0x31c0,	// (0x000031c0) choice_list_pane

0x327f,	// (0x0000327f) cell_toolbar_pane_t1

0x32a7,	// (0x000032a7) toolbar_button_pane_ParamLimits

0x45b6,	// (0x000045b6) ai_gene_pane_1_t2_ParamLimits

0x45b6,	// (0x000045b6) ai_gene_pane_1_t2

0x0001,

0xa6e9,	// (0x0000a6e9) ai_gene_pane_1_t_ParamLimits

0xa6e9,	// (0x0000a6e9) ai_gene_pane_1_t

0x5e93,	// (0x00005e93) scroll_sc2_left_pane_g1

0x5e93,	// (0x00005e93) scroll_sc2_right_pane_g1

0x28b1,	// (0x000028b1) bg_popup_sub_pane_cp10

0x5e9d,	// (0x00005e9d) list_choice_list_pane

0x5eb4,	// (0x00005eb4) list_single_choice_list_pane_ParamLimits

0x5eb4,	// (0x00005eb4) list_single_choice_list_pane

0x5ec6,	// (0x00005ec6) list_single_choice_list_pane_g1

0x14f3,	// (0x000014f3) list_single_choice_list_pane_t1_ParamLimits

0x14f3,	// (0x000014f3) list_single_choice_list_pane_t1

0x5ece,	// (0x00005ece) choice_list_pane_g1

0x5ed6,	// (0x00005ed6) choice_list_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp11

0x1707,	// (0x00001707) title_pane_stacon_g2_ParamLimits

0x1707,	// (0x00001707) title_pane_stacon_g2

0x0002,

0xa4a0,	// (0x0000a4a0) title_pane_stacon_g_ParamLimits

0xa4a0,	// (0x0000a4a0) title_pane_stacon_g

0x2345,	// (0x00002345) cursor_press_pane

0xbdb8,	// (0x0000bdb8) popup_fep_hwr_window_ParamLimits

0xbdb8,	// (0x0000bdb8) popup_fep_hwr_window

0x29d7,	// (0x000029d7) popup_fep_vkb_window_ParamLimits

0x29d7,	// (0x000029d7) popup_fep_vkb_window

0x5ee4,	// (0x00005ee4) cursor_press_pane_g1

0x0002,

0xebcd,	// (0x0000ebcd) fep_vkb_side_pane_g_ParamLimits

0x5f21,	// (0x00005f21) fep_hwr_candidate_pane_ParamLimits

0x5f21,	// (0x00005f21) fep_hwr_candidate_pane

0x5f49,	// (0x00005f49) fep_hwr_side_pane_ParamLimits

0x5f49,	// (0x00005f49) fep_hwr_side_pane

0x5f69,	// (0x00005f69) fep_hwr_top_pane_ParamLimits

0x5f69,	// (0x00005f69) fep_hwr_top_pane

0x5f81,	// (0x00005f81) fep_hwr_write_pane_ParamLimits

0x5f81,	// (0x00005f81) fep_hwr_write_pane

0xebcd,	// (0x0000ebcd) fep_vkb_side_pane_g

0x5fbb,	// (0x00005fbb) fep_hwr_top_pane_g1

0x5fcd,	// (0x00005fcd) fep_hwr_top_pane_g2

0x5fdf,	// (0x00005fdf) fep_hwr_top_pane_g3

0x0002,

0xa8e3,	// (0x0000a8e3) fep_hwr_top_pane_g

0x5ff4,	// (0x00005ff4) fep_hwr_top_text_pane

0x1b2e,	// (0x00001b2e) fep_hwr_top_text_pane_g1

0x60cc,	// (0x000060cc) fep_hwr_top_text_pane_t1

0x6114,	// (0x00006114) fep_hwr_candidate_pane_g1

0x634a,	// (0x0000634a) fep_vkb_keypad_pane_g3_ParamLimits

0x634a,	// (0x0000634a) fep_vkb_keypad_pane_g3

0x636c,	// (0x0000636c) fep_vkb_keypad_pane_g4_ParamLimits

0x636c,	// (0x0000636c) fep_vkb_keypad_pane_g4

0x63db,	// (0x000063db) fep_vkb_bottom_pane_g2_ParamLimits

0x63db,	// (0x000063db) fep_vkb_bottom_pane_g2

0x0001,

0xa90e,	// (0x0000a90e) fep_vkb_bottom_pane_g_ParamLimits

0xa90e,	// (0x0000a90e) fep_vkb_bottom_pane_g

0x5e93,	// (0x00005e93) cell_vkb_side_pane_g2

0x0001,

0xa918,	// (0x0000a918) cell_vkb_side_pane_g

0x6466,	// (0x00006466) cell_vkb_side_pane_t1

0x6474,	// (0x00006474) cell_vkb_side_pane_t1_copy1

0x5e93,	// (0x00005e93) bg_fep_vkb_candidate_pane_g2

0x6598,	// (0x00006598) cell_vkb_candidate_pane_ParamLimits

0x6148,	// (0x00006148) aid_size_cell_vkb_ParamLimits

0x6148,	// (0x00006148) aid_size_cell_vkb

0x6598,	// (0x00006598) cell_vkb_candidate_pane

0x65ca,	// (0x000065ca) bg_popup_fep_shadow_pane_g1

0x61be,	// (0x000061be) fep_vkb_bottom_pane_ParamLimits

0x61be,	// (0x000061be) fep_vkb_bottom_pane

0x61fb,	// (0x000061fb) fep_vkb_candidate_pane_ParamLimits

0x61fb,	// (0x000061fb) fep_vkb_candidate_pane

0x6217,	// (0x00006217) fep_vkb_keypad_pane_ParamLimits

0x6217,	// (0x00006217) fep_vkb_keypad_pane

0x624b,	// (0x0000624b) fep_vkb_side_pane_ParamLimits

0x624b,	// (0x0000624b) fep_vkb_side_pane

0x6277,	// (0x00006277) fep_vkb_top_pane_ParamLimits

0x6277,	// (0x00006277) fep_vkb_top_pane

0x62a3,	// (0x000062a3) fep_vkb_top_pane_g1_ParamLimits

0x62a3,	// (0x000062a3) fep_vkb_top_pane_g1

0x62b2,	// (0x000062b2) fep_vkb_top_pane_g2_ParamLimits

0x62b2,	// (0x000062b2) fep_vkb_top_pane_g2

0x62c1,	// (0x000062c1) fep_vkb_top_pane_g3_ParamLimits

0x62c1,	// (0x000062c1) fep_vkb_top_pane_g3

0x0003,

0xa8fe,	// (0x0000a8fe) fep_vkb_top_pane_g_ParamLimits

0xa8fe,	// (0x0000a8fe) fep_vkb_top_pane_g

0x62df,	// (0x000062df) fep_vkb_top_text_pane_ParamLimits

0x62df,	// (0x000062df) fep_vkb_top_text_pane

0xcec4,	// (0x0000cec4) fep_vkb_side_pane_g1_ParamLimits

0xcec4,	// (0x0000cec4) fep_vkb_side_pane_g1

0x6339,	// (0x00006339) grid_vkb_side_pane_ParamLimits

0x6339,	// (0x00006339) grid_vkb_side_pane

0x65d2,	// (0x000065d2) bg_popup_fep_shadow_pane_g2

0x65db,	// (0x000065db) bg_popup_fep_shadow_pane_g3

0x65e3,	// (0x000065e3) bg_popup_fep_shadow_pane_g4

0x65ec,	// (0x000065ec) bg_popup_fep_shadow_pane_g5

0x65f4,	// (0x000065f4) bg_popup_fep_shadow_pane_g6

0x65fc,	// (0x000065fc) bg_popup_fep_shadow_pane_g7

0x133d,	// (0x0000133d) bg_popup_fep_shadow_pane_g8

0x638a,	// (0x0000638a) grid_vkb_keypad_number_pane_ParamLimits

0x638a,	// (0x0000638a) grid_vkb_keypad_number_pane

0x639a,	// (0x0000639a) grid_vkb_keypad_pane_ParamLimits

0x639a,	// (0x0000639a) grid_vkb_keypad_pane

0x63c0,	// (0x000063c0) fep_vkb_bottom_pane_g1_ParamLimits

0x63c0,	// (0x000063c0) fep_vkb_bottom_pane_g1

0x63e9,	// (0x000063e9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x63e9,	// (0x000063e9) grid_vkb_keypad_bottom_left_pane

0x63fe,	// (0x000063fe) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x63fe,	// (0x000063fe) grid_vkb_keypad_bottom_right_pane

0x6413,	// (0x00006413) fep_vkb_top_text_pane_g1

0xcf0b,	// (0x0000cf0b) fep_vkb_top_text_pane_t1

0xcf1d,	// (0x0000cf1d) cell_vkb_side_pane_ParamLimits

0xcf1d,	// (0x0000cf1d) cell_vkb_side_pane

0x5e93,	// (0x00005e93) cell_vkb_side_pane_g1

0x6482,	// (0x00006482) cell_vkb_keypad_pane_ParamLimits

0x6482,	// (0x00006482) cell_vkb_keypad_pane

0x64ef,	// (0x000064ef) cell_vkb_keypad_pane_g1

0x0008,

0xa92b,	// (0x0000a92b) bg_popup_fep_shadow_pane_g

0x5e93,	// (0x00005e93) cell_hwr_side_pane_g1

0x5e93,	// (0x00005e93) cell_hwr_side_pane_g2

0x64f9,	// (0x000064f9) cell_vkb_keypad_pane_t1

0xcf33,	// (0x0000cf33) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf33,	// (0x0000cf33) cell_vkb_keypad_bottom_left_pane

0xcf48,	// (0x0000cf48) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf48,	// (0x0000cf48) cell_vkb_keypad_bottom_right_pane

0x5e93,	// (0x00005e93) cell_vkb_keypad_bottom_left_pane_g1

0x5e93,	// (0x00005e93) cell_vkb_keypad_bottom_right_pane_g1

0x655d,	// (0x0000655d) cell_vkb_keypad_number_pane_ParamLimits

0x655d,	// (0x0000655d) cell_vkb_keypad_number_pane

0x657c,	// (0x0000657c) cell_vkb_keypad_number_pane_g1

0x6586,	// (0x00006586) cell_vkb_keypad_number_pane_g2

0x658f,	// (0x0000658f) cell_vkb_keypad_number_pane_g3

0x0002,

0xa91d,	// (0x0000a91d) cell_vkb_keypad_number_pane_g

0x64f9,	// (0x000064f9) cell_vkb_keypad_number_pane_t1

0x65b1,	// (0x000065b1) fep_vkb_candidate_pane_g1

0x0001,

0xa918,	// (0x0000a918) cell_hwr_side_pane_g

0x660c,	// (0x0000660c) cell_hwr_side_pane_t1

0x661a,	// (0x0000661a) cell_hwr_side_pane_t1_copy1

0x62d1,	// (0x000062d1) cell_hwr_candidate_pane_g1

0x666a,	// (0x0000666a) cell_hwr_candidate_pane_t1

0x5e93,	// (0x00005e93) cell_vkb_candidate_pane_g2

0x66bd,	// (0x000066bd) cell_vkb_candidate_pane_t1

0x5eec,	// (0x00005eec) bg_popup_fep_shadow_pane_ParamLimits

0x5eec,	// (0x00005eec) bg_popup_fep_shadow_pane

0x5f9b,	// (0x00005f9b) bg_fep_hwr_top_pane_g4

0x6009,	// (0x00006009) bg_hwr_side_pane_g1_ParamLimits

0x6009,	// (0x00006009) bg_hwr_side_pane_g1

0xce7f,	// (0x0000ce7f) cell_hwr_side_pane_ParamLimits

0xce7f,	// (0x0000ce7f) cell_hwr_side_pane

0x6077,	// (0x00006077) fep_hwr_write_pane_g1_ParamLimits

0x6077,	// (0x00006077) fep_hwr_write_pane_g1

0x6084,	// (0x00006084) fep_hwr_write_pane_g2_ParamLimits

0x6084,	// (0x00006084) fep_hwr_write_pane_g2

0x6091,	// (0x00006091) fep_hwr_write_pane_g3_ParamLimits

0x6091,	// (0x00006091) fep_hwr_write_pane_g3

0xce9f,	// (0x0000ce9f) fep_hwr_write_pane_g4_ParamLimits

0xce9f,	// (0x0000ce9f) fep_hwr_write_pane_g4

0x0005,

0xebc0,	// (0x0000ebc0) fep_hwr_write_pane_g_ParamLimits

0xebc0,	// (0x0000ebc0) fep_hwr_write_pane_g

0x5f9b,	// (0x00005f9b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5f9b,	// (0x00005f9b) bg_fep_hwr_candidate_pane_g2

0x60da,	// (0x000060da) cell_hwr_candidate_pane_ParamLimits

0x60da,	// (0x000060da) cell_hwr_candidate_pane

0x6114,	// (0x00006114) fep_hwr_candidate_pane_g1_ParamLimits

0x6176,	// (0x00006176) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6176,	// (0x00006176) bg_popup_fep_shadow_pane_cp2

0x62d1,	// (0x000062d1) fep_vkb_top_pane_g4_ParamLimits

0x62d1,	// (0x000062d1) fep_vkb_top_pane_g4

0x6317,	// (0x00006317) fep_vkb_side_pane_g2_ParamLimits

0x6317,	// (0x00006317) fep_vkb_side_pane_g2

0xb555,	// (0x0000b555) list_setting_pane_t4_ParamLimits

0xb555,	// (0x0000b555) list_setting_pane_t4

0xb5cf,	// (0x0000b5cf) list_setting_number_pane_t5_ParamLimits

0xb5cf,	// (0x0000b5cf) list_setting_number_pane_t5

0xb8fa,	// (0x0000b8fa) list_double_heading_pane_cp2_ParamLimits

0xb8fa,	// (0x0000b8fa) list_double_heading_pane_cp2

0x21ba,	// (0x000021ba) list_double_heading_pane_g1_cp2_ParamLimits

0x21ba,	// (0x000021ba) list_double_heading_pane_g1_cp2

0x66cb,	// (0x000066cb) list_double_heading_pane_g2_cp2_ParamLimits

0x66cb,	// (0x000066cb) list_double_heading_pane_g2_cp2

0x66df,	// (0x000066df) list_double_heading_pane_t1_cp2_ParamLimits

0x66df,	// (0x000066df) list_double_heading_pane_t1_cp2

0x66f5,	// (0x000066f5) list_double_heading_pane_t2_cp2_ParamLimits

0x66f5,	// (0x000066f5) list_double_heading_pane_t2_cp2

0x000a,	// (0x0000000a) aid_value_unit2

0x02b4,	// (0x000002b4) popup_preview_fixed_window

0x07a6,	// (0x000007a6) bg_popup_preview_window_pane_cp02

0x6707,	// (0x00006707) list_preview_fixed_pane

0x674d,	// (0x0000674d) list_empty_pane_fp_ParamLimits

0x674d,	// (0x0000674d) list_empty_pane_fp

0x674d,	// (0x0000674d) list_single_cale_day_pane_fp_ParamLimits

0x674d,	// (0x0000674d) list_single_cale_day_pane_fp

0x674d,	// (0x0000674d) list_single_graphic_heading_pane_fp_ParamLimits

0x674d,	// (0x0000674d) list_single_graphic_heading_pane_fp

0x674d,	// (0x0000674d) list_single_graphic_pane_fp_ParamLimits

0x674d,	// (0x0000674d) list_single_graphic_pane_fp

0x674d,	// (0x0000674d) list_single_heading_pane_fp_ParamLimits

0x674d,	// (0x0000674d) list_single_heading_pane_fp

0x674d,	// (0x0000674d) list_single_pane_fp_ParamLimits

0x674d,	// (0x0000674d) list_single_pane_fp

0x6761,	// (0x00006761) list_single_pane_fp_g1_ParamLimits

0x6761,	// (0x00006761) list_single_pane_fp_g1

0x676d,	// (0x0000676d) list_single_pane_fp_g2_ParamLimits

0x676d,	// (0x0000676d) list_single_pane_fp_g2

0x6779,	// (0x00006779) list_single_pane_fp_g3_ParamLimits

0x6779,	// (0x00006779) list_single_pane_fp_g3

0x678d,	// (0x0000678d) list_single_pane_fp_g4_ParamLimits

0x678d,	// (0x0000678d) list_single_pane_fp_g4

0x0003,

0xa94c,	// (0x0000a94c) list_single_pane_fp_g_ParamLimits

0xa94c,	// (0x0000a94c) list_single_pane_fp_g

0x6799,	// (0x00006799) list_single_pane_fp_t1_ParamLimits

0x6799,	// (0x00006799) list_single_pane_fp_t1

0x67b0,	// (0x000067b0) list_single_graphic_pane_fp_g1_ParamLimits

0x67b0,	// (0x000067b0) list_single_graphic_pane_fp_g1

0x6761,	// (0x00006761) list_single_graphic_pane_fp_g2_ParamLimits

0x6761,	// (0x00006761) list_single_graphic_pane_fp_g2

0x676d,	// (0x0000676d) list_single_graphic_pane_fp_g3_ParamLimits

0x676d,	// (0x0000676d) list_single_graphic_pane_fp_g3

0x6779,	// (0x00006779) list_single_graphic_pane_fp_g4_ParamLimits

0x6779,	// (0x00006779) list_single_graphic_pane_fp_g4

0x678d,	// (0x0000678d) list_single_graphic_pane_fp_g5_ParamLimits

0x678d,	// (0x0000678d) list_single_graphic_pane_fp_g5

0x0004,

0xa955,	// (0x0000a955) list_single_graphic_pane_fp_g_ParamLimits

0xa955,	// (0x0000a955) list_single_graphic_pane_fp_g

0x67bc,	// (0x000067bc) list_single_graphic_pane_fp_t1_ParamLimits

0x67bc,	// (0x000067bc) list_single_graphic_pane_fp_t1

0x67b0,	// (0x000067b0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x67b0,	// (0x000067b0) list_single_graphic_heading_pane_fp_g1

0x6761,	// (0x00006761) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6761,	// (0x00006761) list_single_graphic_heading_pane_fp_g2

0x676d,	// (0x0000676d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x676d,	// (0x0000676d) list_single_graphic_heading_pane_fp_g3

0x6779,	// (0x00006779) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6779,	// (0x00006779) list_single_graphic_heading_pane_fp_g4

0x678d,	// (0x0000678d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x678d,	// (0x0000678d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xa955,	// (0x0000a955) list_single_graphic_heading_pane_fp_g_ParamLimits

0xa955,	// (0x0000a955) list_single_graphic_heading_pane_fp_g

0x67d2,	// (0x000067d2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x67d2,	// (0x000067d2) list_single_graphic_heading_pane_fp_t1

0x67e8,	// (0x000067e8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x67e8,	// (0x000067e8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xa960,	// (0x0000a960) list_single_graphic_heading_pane_fp_t_ParamLimits

0xa960,	// (0x0000a960) list_single_graphic_heading_pane_fp_t

0x67fa,	// (0x000067fa) list_single_cale_day_pane_fp_g1_ParamLimits

0x67fa,	// (0x000067fa) list_single_cale_day_pane_fp_g1

0x6832,	// (0x00006832) list_single_cale_day_pane_fp_g2_ParamLimits

0x6832,	// (0x00006832) list_single_cale_day_pane_fp_g2

0x683e,	// (0x0000683e) list_single_cale_day_pane_fp_g3_ParamLimits

0x683e,	// (0x0000683e) list_single_cale_day_pane_fp_g3

0x6866,	// (0x00006866) list_single_cale_day_pane_fp_g4_ParamLimits

0x6866,	// (0x00006866) list_single_cale_day_pane_fp_g4

0x688a,	// (0x0000688a) list_single_cale_day_pane_fp_g5_ParamLimits

0x688a,	// (0x0000688a) list_single_cale_day_pane_fp_g5

0x0004,

0xa965,	// (0x0000a965) list_single_cale_day_pane_fp_g_ParamLimits

0xa965,	// (0x0000a965) list_single_cale_day_pane_fp_g

0x68ae,	// (0x000068ae) list_single_cale_day_pane_fp_t1_ParamLimits

0x68ae,	// (0x000068ae) list_single_cale_day_pane_fp_t1

0x68d4,	// (0x000068d4) list_single_cale_day_pane_fp_t2_ParamLimits

0x68d4,	// (0x000068d4) list_single_cale_day_pane_fp_t2

0x68ed,	// (0x000068ed) list_single_cale_day_pane_fp_t3_ParamLimits

0x68ed,	// (0x000068ed) list_single_cale_day_pane_fp_t3

0x0002,

0xa970,	// (0x0000a970) list_single_cale_day_pane_fp_t_ParamLimits

0xa970,	// (0x0000a970) list_single_cale_day_pane_fp_t

0x6761,	// (0x00006761) list_empty_pane_fp_g1_ParamLimits

0x6761,	// (0x00006761) list_empty_pane_fp_g1

0x6906,	// (0x00006906) list_empty_pane_fp_t1

0x6914,	// (0x00006914) list_empty_pane_fp_t2

0x0001,

0xa977,	// (0x0000a977) list_empty_pane_fp_t

0x6761,	// (0x00006761) list_single_heading_pane_fp_g1_ParamLimits

0x6761,	// (0x00006761) list_single_heading_pane_fp_g1

0x676d,	// (0x0000676d) list_single_heading_pane_fp_g2_ParamLimits

0x676d,	// (0x0000676d) list_single_heading_pane_fp_g2

0x6779,	// (0x00006779) list_single_heading_pane_fp_g3_ParamLimits

0x6779,	// (0x00006779) list_single_heading_pane_fp_g3

0x0002,

0xa97c,	// (0x0000a97c) list_single_heading_pane_fp_g_ParamLimits

0xa97c,	// (0x0000a97c) list_single_heading_pane_fp_g

0x6922,	// (0x00006922) list_single_heading_pane_fp_t1_ParamLimits

0x6922,	// (0x00006922) list_single_heading_pane_fp_t1

0x6934,	// (0x00006934) list_single_heading_pane_fp_t2_ParamLimits

0x6934,	// (0x00006934) list_single_heading_pane_fp_t2

0x0001,

0xa983,	// (0x0000a983) list_single_heading_pane_fp_t_ParamLimits

0xa983,	// (0x0000a983) list_single_heading_pane_fp_t

0x1561,	// (0x00001561) aid_size_cell_fast

0x070d,	// (0x0000070d) soft_indicator_pane_cp1_t1

0x159e,	// (0x0000159e) cell_app_pane_cp2_ParamLimits

0x159e,	// (0x0000159e) cell_app_pane_cp2

0x5f0e,	// (0x00005f0e) fep_hwr_candidate_drop_down_list_pane

0x612e,	// (0x0000612e) fep_hwr_candidate_pane_g3_ParamLimits

0x612e,	// (0x0000612e) fep_hwr_candidate_pane_g3

0x613b,	// (0x0000613b) fep_hwr_candidate_pane_g4_ParamLimits

0x613b,	// (0x0000613b) fep_hwr_candidate_pane_g4

0x0002,

0xa8f7,	// (0x0000a8f7) fep_hwr_candidate_pane_g_ParamLimits

0xa8f7,	// (0x0000a8f7) fep_hwr_candidate_pane_g

0x61ea,	// (0x000061ea) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x61ea,	// (0x000061ea) fep_vkb_candidate_drop_down_list_pane

0x65b9,	// (0x000065b9) fep_vkb_candidate_pane_g3

0x65c1,	// (0x000065c1) fep_vkb_candidate_pane_g4

0x0002,

0xa924,	// (0x0000a924) fep_vkb_candidate_pane_g

0x62d1,	// (0x000062d1) cell_hwr_candidate_pane_g1_ParamLimits

0x6628,	// (0x00006628) cell_hwr_candidate_pane_g3_ParamLimits

0x6628,	// (0x00006628) cell_hwr_candidate_pane_g3

0x6649,	// (0x00006649) cell_hwr_candidate_pane_g4_ParamLimits

0x6649,	// (0x00006649) cell_hwr_candidate_pane_g4

0x0002,

0xa93e,	// (0x0000a93e) cell_hwr_candidate_pane_g_ParamLimits

0xa93e,	// (0x0000a93e) cell_hwr_candidate_pane_g

0x6687,	// (0x00006687) cell_vkb_candidate_pane_g3_ParamLimits

0x6687,	// (0x00006687) cell_vkb_candidate_pane_g3

0x66a2,	// (0x000066a2) cell_vkb_candidate_pane_g4_ParamLimits

0x66a2,	// (0x000066a2) cell_vkb_candidate_pane_g4

0x694a,	// (0x0000694a) cell_app_pane_cp2_g1_ParamLimits

0x694a,	// (0x0000694a) cell_app_pane_cp2_g1

0x6968,	// (0x00006968) cell_app_pane_cp2_g2_ParamLimits

0x6968,	// (0x00006968) cell_app_pane_cp2_g2

0x0001,

0xa988,	// (0x0000a988) cell_app_pane_cp2_g_ParamLimits

0xa988,	// (0x0000a988) cell_app_pane_cp2_g

0x6974,	// (0x00006974) cell_app_pane_cp2_t1_ParamLimits

0x6974,	// (0x00006974) cell_app_pane_cp2_t1

0x11fa,	// (0x000011fa) grid_highlight_pane_cp1_ParamLimits

0x11fa,	// (0x000011fa) grid_highlight_pane_cp1

0x6986,	// (0x00006986) cell_hwr_candidate_pane_cp1_ParamLimits

0x6986,	// (0x00006986) cell_hwr_candidate_pane_cp1

0x62d1,	// (0x000062d1) fep_hwr_candidate_drop_down_list_pane_g1

0x69a4,	// (0x000069a4) fep_hwr_candidate_drop_down_list_pane_g2

0x69b1,	// (0x000069b1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xa98d,	// (0x0000a98d) fep_hwr_candidate_drop_down_list_pane_g

0x69be,	// (0x000069be) fep_hwr_candidate_drop_down_list_scroll_pane

0x69c7,	// (0x000069c7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69c7,	// (0x000069c7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69d4,	// (0x000069d4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69d4,	// (0x000069d4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69e1,	// (0x000069e1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69e1,	// (0x000069e1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6687,	// (0x00006687) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6687,	// (0x00006687) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x66a2,	// (0x000066a2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x66a2,	// (0x000066a2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x69ee,	// (0x000069ee) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x69ee,	// (0x000069ee) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a09,	// (0x00006a09) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a09,	// (0x00006a09) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a24,	// (0x00006a24) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a24,	// (0x00006a24) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa994,	// (0x0000a994) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa994,	// (0x0000a994) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcf63,	// (0x0000cf63) cell_vkb_candidate_pane_cp1_ParamLimits

0xcf63,	// (0x0000cf63) cell_vkb_candidate_pane_cp1

0x62d1,	// (0x000062d1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x62d1,	// (0x000062d1) fep_vkb_candidate_drop_down_list_pane_g1

0x69a4,	// (0x000069a4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x69a4,	// (0x000069a4) fep_vkb_candidate_drop_down_list_pane_g2

0x69b1,	// (0x000069b1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x69b1,	// (0x000069b1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xa98d,	// (0x0000a98d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xa98d,	// (0x0000a98d) fep_vkb_candidate_drop_down_list_pane_g

0x6a62,	// (0x00006a62) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6a62,	// (0x00006a62) fep_vkb_candidate_drop_down_list_scroll_pane

0x6a6f,	// (0x00006a6f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6a6f,	// (0x00006a6f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6a7c,	// (0x00006a7c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6a7c,	// (0x00006a7c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6a88,	// (0x00006a88) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6a88,	// (0x00006a88) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6628,	// (0x00006628) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6628,	// (0x00006628) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6649,	// (0x00006649) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6649,	// (0x00006649) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6a94,	// (0x00006a94) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6a94,	// (0x00006a94) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6ab5,	// (0x00006ab5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6ab5,	// (0x00006ab5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6ad6,	// (0x00006ad6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6ad6,	// (0x00006ad6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xa9a5,	// (0x0000a9a5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xa9a5,	// (0x0000a9a5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xaecf,	// (0x0000aecf) title_pane_g1_ParamLimits

0xaee6,	// (0x0000aee6) title_pane_g2_ParamLimits

0xe9bd,	// (0x0000e9bd) title_pane_g_ParamLimits

0x1b1e,	// (0x00001b1e) aid_call2_pane

0x1b26,	// (0x00001b26) aid_call_pane

0x1b2e,	// (0x00001b2e) popup_clock_analogue_window_g1

0x1b2e,	// (0x00001b2e) popup_clock_analogue_window_g2

0x1b36,	// (0x00001b36) popup_clock_analogue_window_g3

0x1b3f,	// (0x00001b3f) popup_clock_analogue_window_g4

0x002a,	// (0x0000002a) popup_clock_analogue_window_g5

0x0004,

0xa4cf,	// (0x0000a4cf) popup_clock_analogue_window_g

0x1b47,	// (0x00001b47) popup_clock_analogue_window_t1

0x1bba,	// (0x00001bba) clock_digital_number_pane_ParamLimits

0x1bba,	// (0x00001bba) clock_digital_number_pane

0x1bc6,	// (0x00001bc6) clock_digital_number_pane_cp02_ParamLimits

0x1bc6,	// (0x00001bc6) clock_digital_number_pane_cp02

0x1bd2,	// (0x00001bd2) clock_digital_number_pane_cp03_ParamLimits

0x1bd2,	// (0x00001bd2) clock_digital_number_pane_cp03

0x1bde,	// (0x00001bde) clock_digital_number_pane_cp04_ParamLimits

0x1bde,	// (0x00001bde) clock_digital_number_pane_cp04

0x1bea,	// (0x00001bea) clock_digital_separator_pane_ParamLimits

0x1bea,	// (0x00001bea) clock_digital_separator_pane

0x1bf6,	// (0x00001bf6) popup_clock_digital_window_t1_ParamLimits

0x1bf6,	// (0x00001bf6) popup_clock_digital_window_t1

0x002a,	// (0x0000002a) clock_digital_number_pane_g1

0x002a,	// (0x0000002a) clock_digital_number_pane_g2

0x0001,

0xa4da,	// (0x0000a4da) clock_digital_number_pane_g

0x002a,	// (0x0000002a) clock_digital_separator_pane_g1

0x002a,	// (0x0000002a) clock_digital_separator_pane_g2

0x0001,

0xa4da,	// (0x0000a4da) clock_digital_separator_pane_g

0xc2af,	// (0x0000c2af) aid_fill_nsta_ParamLimits

0xc3c6,	// (0x0000c3c6) indicator_nsta_pane_ParamLimits

0x3002,	// (0x00003002) popup_clock_analogue_window

0x3002,	// (0x00003002) popup_clock_digital_window

0xcd5b,	// (0x0000cd5b) grid_indicator_nsta_pane_ParamLimits

0x58d0,	// (0x000058d0) clock_nsta_pane_t2

0x0001,

0xa877,	// (0x0000a877) clock_nsta_pane_t

0x1907,	// (0x00001907) aid_size_max_handle

0xb85e,	// (0x0000b85e) aid_size_min_handle

0x2345,	// (0x00002345) editor_scroll_pane

0x6af1,	// (0x00006af1) ex_editor_pane

0x14d1,	// (0x000014d1) scroll_pane_cp13

0x0c98,	// (0x00000c98) scroll_pane_cp14

0x1b7c,	// (0x00001b7c) scroll_pane_cp36

0xb906,	// (0x0000b906) list_single_graphic_hl_pane_cp2_ParamLimits

0xb906,	// (0x0000b906) list_single_graphic_hl_pane_cp2

0xcbbc,	// (0x0000cbbc) list_single_graphic_hl_pane_ParamLimits

0xcbbc,	// (0x0000cbbc) list_single_graphic_hl_pane

0x6af9,	// (0x00006af9) aid_size_min_hl_cp1

0x6b02,	// (0x00006b02) list_highlight_pane_cp34_ParamLimits

0x6b02,	// (0x00006b02) list_highlight_pane_cp34

0x6b13,	// (0x00006b13) list_single_graphic_hl_pane_g1_ParamLimits

0x6b13,	// (0x00006b13) list_single_graphic_hl_pane_g1

0xcf83,	// (0x0000cf83) list_single_graphic_hl_pane_g2_ParamLimits

0xcf83,	// (0x0000cf83) list_single_graphic_hl_pane_g2

0xcf83,	// (0x0000cf83) list_single_graphic_hl_pane_g3_ParamLimits

0xcf83,	// (0x0000cf83) list_single_graphic_hl_pane_g3

0x0cac,	// (0x00000cac) list_single_graphic_hl_pane_g4_ParamLimits

0x0cac,	// (0x00000cac) list_single_graphic_hl_pane_g4

0x1220,	// (0x00001220) list_single_graphic_hl_pane_g5_ParamLimits

0x1220,	// (0x00001220) list_single_graphic_hl_pane_g5

0x0004,

0xebd9,	// (0x0000ebd9) list_single_graphic_hl_pane_g_ParamLimits

0xebd9,	// (0x0000ebd9) list_single_graphic_hl_pane_g

0xcf8f,	// (0x0000cf8f) list_single_graphic_hl_pane_t1_ParamLimits

0xcf8f,	// (0x0000cf8f) list_single_graphic_hl_pane_t1

0x6b42,	// (0x00006b42) aid_size_min_hl_cp2

0x6b4b,	// (0x00006b4b) list_highlight_pane_cp34_cp2_ParamLimits

0x6b4b,	// (0x00006b4b) list_highlight_pane_cp34_cp2

0x6b13,	// (0x00006b13) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6b13,	// (0x00006b13) list_single_graphic_hl_pane_g1_cp2

0x6b58,	// (0x00006b58) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6b58,	// (0x00006b58) list_single_graphic_hl_pane_g2_cp2

0x6b64,	// (0x00006b64) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6b64,	// (0x00006b64) list_single_graphic_hl_pane_g3_cp2

0x21ba,	// (0x000021ba) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x21ba,	// (0x000021ba) list_single_graphic_hl_pane_g4_cp2

0x66cb,	// (0x000066cb) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x66cb,	// (0x000066cb) list_single_graphic_hl_pane_g5_cp2

0xbbad,	// (0x0000bbad) control_pane_g4_ParamLimits

0xbbad,	// (0x0000bbad) control_pane_g4

0x28b1,	// (0x000028b1) bg_popup_sub_pane_cp10_ParamLimits

0x5e9d,	// (0x00005e9d) list_choice_list_pane_ParamLimits

0x5eac,	// (0x00005eac) scroll_pane_cp23

0x07a6,	// (0x000007a6) bg_popup_preview_window_pane_cp02_ParamLimits

0x6707,	// (0x00006707) list_preview_fixed_pane_ParamLimits

0x671d,	// (0x0000671d) list_preview_fixed_pane_cp_ParamLimits

0x671d,	// (0x0000671d) list_preview_fixed_pane_cp

0x6729,	// (0x00006729) popup_preview_fixed_window_g1_ParamLimits

0x6729,	// (0x00006729) popup_preview_fixed_window_g1

0x6735,	// (0x00006735) popup_preview_fixed_window_g2_ParamLimits

0x6735,	// (0x00006735) popup_preview_fixed_window_g2

0x0002,

0xa945,	// (0x0000a945) popup_preview_fixed_window_g_ParamLimits

0xa945,	// (0x0000a945) popup_preview_fixed_window_g

0x17d4,	// (0x000017d4) aid_navi_side_left_pane_ParamLimits

0x17e4,	// (0x000017e4) aid_navi_side_right_pane_ParamLimits

0x17f3,	// (0x000017f3) navi_icon_pane_stacon_ParamLimits

0x1803,	// (0x00001803) navi_navi_pane_stacon_ParamLimits

0x17f3,	// (0x000017f3) navi_text_pane_stacon_ParamLimits

0x0020,	// (0x00000020) main_text_info_pane

0x6b86,	// (0x00006b86) listscroll_text_info_pane

0x6b8e,	// (0x00006b8e) list_text_info_pane_ParamLimits

0x6b8e,	// (0x00006b8e) list_text_info_pane

0x6b9d,	// (0x00006b9d) scroll_pane_cp24_ParamLimits

0x6b9d,	// (0x00006b9d) scroll_pane_cp24

0xcfa5,	// (0x0000cfa5) list_text_info_pane_t1_ParamLimits

0xcfa5,	// (0x0000cfa5) list_text_info_pane_t1

0xbd38,	// (0x0000bd38) popup_fast_swap2_window_ParamLimits

0xbd38,	// (0x0000bd38) popup_fast_swap2_window

0x6bd8,	// (0x00006bd8) aid_size_cell_fast2

0x0020,	// (0x00000020) bg_popup_window_pane_cp17

0x386d,	// (0x0000386d) heading_pane_cp2

0x3875,	// (0x00003875) listscroll_fast2_pane

0x6be2,	// (0x00006be2) grid_fast2_pane

0x6bea,	// (0x00006bea) listscroll_fast2_pane_g1

0x6bf2,	// (0x00006bf2) listscroll_fast2_pane_g2

0x0001,

0xa9c1,	// (0x0000a9c1) listscroll_fast2_pane_g

0x14d1,	// (0x000014d1) scroll_pane_cp26

0x6bfa,	// (0x00006bfa) cell_fast2_pane_ParamLimits

0x6bfa,	// (0x00006bfa) cell_fast2_pane

0x6c10,	// (0x00006c10) cell_fast2_pane_g1

0x6c19,	// (0x00006c19) cell_fast2_pane_g2

0x6c22,	// (0x00006c22) cell_fast2_pane_g3

0x0002,

0xa9c6,	// (0x0000a9c6) cell_fast2_pane_g

0x0af1,	// (0x00000af1) grid_highlight_pane_cp9

0x0b06,	// (0x00000b06) main_eswt_pane_ParamLimits

0x0b06,	// (0x00000b06) main_eswt_pane

0x6bb2,	// (0x00006bb2) list_single_text_info_pane

0x6c2a,	// (0x00006c2a) eswt_ctrl_button_pane

0x6c2a,	// (0x00006c2a) eswt_ctrl_canvas_pane

0x6c32,	// (0x00006c32) eswt_ctrl_combo_pane

0x6c2a,	// (0x00006c2a) eswt_ctrl_default_pane

0x6c2a,	// (0x00006c2a) eswt_ctrl_label_pane

0x6c3a,	// (0x00006c3a) eswt_ctrl_wait_pane

0x6c42,	// (0x00006c42) eswt_shell_pane

0x0020,	// (0x00000020) listscroll_eswt_app_pane

0x6c5e,	// (0x00006c5e) popup_eswt_tasktip_window_ParamLimits

0x6c5e,	// (0x00006c5e) popup_eswt_tasktip_window

0x343f,	// (0x0000343f) bg_popup_window_pane_cp18

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_ParamLimits

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_ParamLimits

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2

0x6c89,	// (0x00006c89) eswt_control_pane_g3_ParamLimits

0x6c89,	// (0x00006c89) eswt_control_pane_g3

0x6c96,	// (0x00006c96) eswt_control_pane_g4_ParamLimits

0x6c96,	// (0x00006c96) eswt_control_pane_g4

0x0003,

0xa9cd,	// (0x0000a9cd) eswt_control_pane_g_ParamLimits

0xa9cd,	// (0x0000a9cd) eswt_control_pane_g

0x11fa,	// (0x000011fa) bg_button_pane_ParamLimits

0x11fa,	// (0x000011fa) bg_button_pane

0x0b06,	// (0x00000b06) common_borders_pane_copy2_ParamLimits

0x0b06,	// (0x00000b06) common_borders_pane_copy2

0x6ca3,	// (0x00006ca3) control_button_pane_g1_ParamLimits

0x6ca3,	// (0x00006ca3) control_button_pane_g1

0x6caf,	// (0x00006caf) control_button_pane_g2_ParamLimits

0x6caf,	// (0x00006caf) control_button_pane_g2

0x6cbb,	// (0x00006cbb) control_button_pane_g3_ParamLimits

0x6cbb,	// (0x00006cbb) control_button_pane_g3

0x0002,

0xa9d6,	// (0x0000a9d6) control_button_pane_g_ParamLimits

0xa9d6,	// (0x0000a9d6) control_button_pane_g

0x6ccf,	// (0x00006ccf) control_button_pane_t1

0x6cdd,	// (0x00006cdd) control_button_pane_t2

0x0001,

0xa9dd,	// (0x0000a9dd) control_button_pane_t

0x32b3,	// (0x000032b3) bg_button_pane_g1

0x32bb,	// (0x000032bb) bg_button_pane_g2

0x32c3,	// (0x000032c3) bg_button_pane_g3

0x32cb,	// (0x000032cb) bg_button_pane_g4

0x32d3,	// (0x000032d3) bg_button_pane_g5

0x32db,	// (0x000032db) bg_button_pane_g6

0x32e3,	// (0x000032e3) bg_button_pane_g7

0x32eb,	// (0x000032eb) bg_button_pane_g8

0x32f3,	// (0x000032f3) bg_button_pane_g9

0x0008,

0xa63d,	// (0x0000a63d) bg_button_pane_g

0x5e58,	// (0x00005e58) common_borders_pane_ParamLimits

0x5e58,	// (0x00005e58) common_borders_pane

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy1_ParamLimits

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy1

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy1_ParamLimits

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy1

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy1_ParamLimits

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy1

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy1_ParamLimits

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy1

0x5e93,	// (0x00005e93) bg_eswt_ctrl_canvas_pane_g1

0x5e58,	// (0x00005e58) common_borders_pane_cp2_ParamLimits

0x5e58,	// (0x00005e58) common_borders_pane_cp2

0x5e58,	// (0x00005e58) common_borders_pane_cp3_ParamLimits

0x5e58,	// (0x00005e58) common_borders_pane_cp3

0x6ceb,	// (0x00006ceb) separator_horizontal_pane

0x1962,	// (0x00001962) separator_vertical_pane

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy2_ParamLimits

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy2

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy2_ParamLimits

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy2

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy2_ParamLimits

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy2

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy2_ParamLimits

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy2

0x0020,	// (0x00000020) common_borders_pane_cp4

0x6cf3,	// (0x00006cf3) separator_horizontal_pane_g1

0x6cfc,	// (0x00006cfc) separator_horizontal_pane_g2

0x6d05,	// (0x00006d05) separator_horizontal_pane_g3

0x0002,

0xa9e2,	// (0x0000a9e2) separator_horizontal_pane_g

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy3_ParamLimits

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy3

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy3_ParamLimits

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy3

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy3_ParamLimits

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy3

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy3_ParamLimits

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy3

0x0020,	// (0x00000020) common_borders_pane_cp5

0x6d0e,	// (0x00006d0e) separator_vertical_pane_g1

0x6d17,	// (0x00006d17) separator_vertical_pane_g2

0x6d20,	// (0x00006d20) separator_vertical_pane_g3

0x0002,

0xa9e9,	// (0x0000a9e9) separator_vertical_pane_g

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy4_ParamLimits

0x6c6f,	// (0x00006c6f) eswt_control_pane_g1_copy4

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy4_ParamLimits

0x6c7c,	// (0x00006c7c) eswt_control_pane_g2_copy4

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy4_ParamLimits

0x6c89,	// (0x00006c89) eswt_control_pane_g3_copy4

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy4_ParamLimits

0x6c96,	// (0x00006c96) eswt_control_pane_g4_copy4

0xcfc0,	// (0x0000cfc0) eswt_ctrl_combo_button_pane

0xcfc8,	// (0x0000cfc8) eswt_ctrl_input_pane

0xcfd0,	// (0x0000cfd0) popup_choice_list_window_cp70

0xcfd8,	// (0x0000cfd8) eswt_ctrl_input_pane_t1

0x0020,	// (0x00000020) input_focus_pane_cp70

0x5e58,	// (0x00005e58) bg_button_pane_cp70_ParamLimits

0x5e58,	// (0x00005e58) bg_button_pane_cp70

0x4fcc,	// (0x00004fcc) eswt_ctrl_combo_button_pane_g1

0x6d57,	// (0x00006d57) wait_bar_pane_cp70

0x343f,	// (0x0000343f) bg_popup_window_pane_cp70_ParamLimits

0x343f,	// (0x0000343f) bg_popup_window_pane_cp70

0x6d5f,	// (0x00006d5f) popup_eswt_tasktip_window_t1

0x6d75,	// (0x00006d75) wait_bar_pane_cp71_ParamLimits

0x6d75,	// (0x00006d75) wait_bar_pane_cp71

0x6d81,	// (0x00006d81) grid_eswt_app_pane

0x196b,	// (0x0000196b) scroll_pane_cp70

0xcfe6,	// (0x0000cfe6) cell_eswt_app_pane_ParamLimits

0xcfe6,	// (0x0000cfe6) cell_eswt_app_pane

0xd00e,	// (0x0000d00e) cell_eswt_app_pane_g1_ParamLimits

0xd00e,	// (0x0000d00e) cell_eswt_app_pane_g1

0xd03d,	// (0x0000d03d) cell_eswt_app_pane_g2_ParamLimits

0xd03d,	// (0x0000d03d) cell_eswt_app_pane_g2

0x0001,

0xebe4,	// (0x0000ebe4) cell_eswt_app_pane_g_ParamLimits

0xebe4,	// (0x0000ebe4) cell_eswt_app_pane_g

0xd066,	// (0x0000d066) cell_eswt_app_pane_t1_ParamLimits

0xd066,	// (0x0000d066) cell_eswt_app_pane_t1

0x6e3c,	// (0x00006e3c) grid_highlight_pane_cp70_ParamLimits

0x6e3c,	// (0x00006e3c) grid_highlight_pane_cp70

0x0cac,	// (0x00000cac) set_content_pane_g1

0x2689,	// (0x00002689) status_small_volume_pane

0x6e48,	// (0x00006e48) status_small_volume_pane_g1

0x6e50,	// (0x00006e50) volume_small2_pane

0x6e59,	// (0x00006e59) volume_small2_pane_g1

0x6e62,	// (0x00006e62) volume_small2_pane_g2

0x6e6b,	// (0x00006e6b) volume_small2_pane_g3

0x6e74,	// (0x00006e74) volume_small2_pane_g4

0x6e7d,	// (0x00006e7d) volume_small2_pane_g5

0x6e86,	// (0x00006e86) volume_small2_pane_g6

0x6e8f,	// (0x00006e8f) volume_small2_pane_g7

0x6e98,	// (0x00006e98) volume_small2_pane_g8

0x6ea1,	// (0x00006ea1) volume_small2_pane_g9

0x6eaa,	// (0x00006eaa) volume_small2_pane_g10

0x0009,

0xa9f5,	// (0x0000a9f5) volume_small2_pane_g

0x6413,	// (0x00006413) fep_vkb_top_text_pane_g1_ParamLimits

0xcf0b,	// (0x0000cf0b) fep_vkb_top_text_pane_t1_ParamLimits

0x6741,	// (0x00006741) popup_preview_fixed_window_g3_ParamLimits

0x6741,	// (0x00006741) popup_preview_fixed_window_g3

0xc258,	// (0x0000c258) popup_toolbar_trans_pane

0x4962,	// (0x00004962) aid_height_set_list_ParamLimits

0x496e,	// (0x0000496e) aid_size_parent_ParamLimits

0x28b1,	// (0x000028b1) list_highlight_pane_cp2_ParamLimits

0x0cac,	// (0x00000cac) set_content_pane_g1_ParamLimits

0x159e,	// (0x0000159e) list_single_image_pane_ParamLimits

0x159e,	// (0x0000159e) list_single_image_pane

0xd098,	// (0x0000d098) aid_size_cell_image_ParamLimits

0xd098,	// (0x0000d098) aid_size_cell_image

0xd0a5,	// (0x0000d0a5) grid_single_image_pane_ParamLimits

0xd0a5,	// (0x0000d0a5) grid_single_image_pane

0x0cac,	// (0x00000cac) list_single_image_pane_g1_ParamLimits

0x0cac,	// (0x00000cac) list_single_image_pane_g1

0x1220,	// (0x00001220) list_single_image_pane_g2_ParamLimits

0x1220,	// (0x00001220) list_single_image_pane_g2

0x0001,

0xaa0a,	// (0x0000aa0a) list_single_image_pane_g_ParamLimits

0xaa0a,	// (0x0000aa0a) list_single_image_pane_g

0x4af1,	// (0x00004af1) list_single_image_pane_t1_ParamLimits

0x4af1,	// (0x00004af1) list_single_image_pane_t1

0xd0b3,	// (0x0000d0b3) cell_image_list_pane_ParamLimits

0xd0b3,	// (0x0000d0b3) cell_image_list_pane

0xd0c7,	// (0x0000d0c7) cell_image_list_pane_g1

0xd0d0,	// (0x0000d0d0) cell_image_list_pane_g2

0x0001,

0xebe9,	// (0x0000ebe9) cell_image_list_pane_g

0x6ef1,	// (0x00006ef1) aid_size_cell_tb_trans_pane

0x11fa,	// (0x000011fa) bg_tb_trans_pane

0x6f03,	// (0x00006f03) grid_tb_trans_pane

0x32b3,	// (0x000032b3) bg_tb_trans_pane_g1

0x32bb,	// (0x000032bb) bg_tb_trans_pane_g2

0x32c3,	// (0x000032c3) bg_tb_trans_pane_g3

0x32cb,	// (0x000032cb) bg_tb_trans_pane_g4

0x32d3,	// (0x000032d3) bg_tb_trans_pane_g5

0x32eb,	// (0x000032eb) bg_tb_trans_pane_g6

0x32f3,	// (0x000032f3) bg_tb_trans_pane_g7

0x32db,	// (0x000032db) bg_tb_trans_pane_g8

0x32e3,	// (0x000032e3) bg_tb_trans_pane_g9

0x0008,

0xaa14,	// (0x0000aa14) bg_tb_trans_pane_g

0x6f17,	// (0x00006f17) cell_toolbar_trans_pane_ParamLimits

0x6f17,	// (0x00006f17) cell_toolbar_trans_pane

0x5e93,	// (0x00005e93) cell_toolbar_trans_pane_g1

0xce08,	// (0x0000ce08) list_form2_midp_pane_t1

0xce16,	// (0x0000ce16) list_form2_midp_pane_t2

0x0001,

0xebb4,	// (0x0000ebb4) list_form2_midp_pane_t

0x5af8,	// (0x00005af8) scroll_pane_cp51_ParamLimits

0x5cdd,	// (0x00005cdd) form2_midp_wait_pane_g1

0x5ce6,	// (0x00005ce6) form2_midp_wait_pane_g2

0x5cef,	// (0x00005cef) form2_midp_wait_pane_g3

0x0002,

0xa8d2,	// (0x0000a8d2) form2_midp_wait_pane_g

0x0474,	// (0x00000474) list_highlight_pane_cp21_ParamLimits

0x5d2d,	// (0x00005d2d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5d3c,	// (0x00005d3c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4b38,	// (0x00004b38) list_single_2graphic_im_pane_ParamLimits

0x4b38,	// (0x00004b38) list_single_2graphic_im_pane

0xd0d9,	// (0x0000d0d9) list_single_2graphic_im_pane_g1_ParamLimits

0xd0d9,	// (0x0000d0d9) list_single_2graphic_im_pane_g1

0xd0ea,	// (0x0000d0ea) list_single_2graphic_im_pane_g2_ParamLimits

0xd0ea,	// (0x0000d0ea) list_single_2graphic_im_pane_g2

0xd0f6,	// (0x0000d0f6) list_single_2graphic_im_pane_g3_ParamLimits

0xd0f6,	// (0x0000d0f6) list_single_2graphic_im_pane_g3

0x0003,

0xebee,	// (0x0000ebee) list_single_2graphic_im_pane_g_ParamLimits

0xebee,	// (0x0000ebee) list_single_2graphic_im_pane_g

0xd10a,	// (0x0000d10a) list_single_2graphic_im_pane_t1_ParamLimits

0xd10a,	// (0x0000d10a) list_single_2graphic_im_pane_t1

0x674d,	// (0x0000674d) list_single_graphic_2heading_pane_fp_ParamLimits

0x674d,	// (0x0000674d) list_single_graphic_2heading_pane_fp

0x67b0,	// (0x000067b0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x67b0,	// (0x000067b0) list_single_graphic_2heading_pane_fp_g1

0x6761,	// (0x00006761) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6761,	// (0x00006761) list_single_graphic_2heading_pane_fp_g2

0x676d,	// (0x0000676d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x676d,	// (0x0000676d) list_single_graphic_2heading_pane_fp_g3

0x6779,	// (0x00006779) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6779,	// (0x00006779) list_single_graphic_2heading_pane_fp_g4

0x678d,	// (0x0000678d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x678d,	// (0x0000678d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xa955,	// (0x0000a955) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xa955,	// (0x0000a955) list_single_graphic_2heading_pane_fp_g

0x6fab,	// (0x00006fab) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6fab,	// (0x00006fab) list_single_graphic_2heading_pane_fp_t1

0x67e8,	// (0x000067e8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x67e8,	// (0x000067e8) list_single_graphic_2heading_pane_fp_t2

0x6fc1,	// (0x00006fc1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6fc1,	// (0x00006fc1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xaa30,	// (0x0000aa30) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xaa30,	// (0x0000aa30) list_single_graphic_2heading_pane_fp_t

0x60b4,	// (0x000060b4) fep_hwr_write_pane_g5_ParamLimits

0x60b4,	// (0x000060b4) fep_hwr_write_pane_g5

0x60c0,	// (0x000060c0) fep_hwr_write_pane_g6_ParamLimits

0x60c0,	// (0x000060c0) fep_hwr_write_pane_g6

0x6c42,	// (0x00006c42) eswt_shell_pane_ParamLimits

0x343f,	// (0x0000343f) bg_popup_window_pane_cp18_ParamLimits

0x485c,	// (0x0000485c) heading_pane_cp70

0x6d5f,	// (0x00006d5f) popup_eswt_tasktip_window_t1_ParamLimits

0xc2f3,	// (0x0000c2f3) aid_touch_tab_arrow_left

0xc307,	// (0x0000c307) aid_touch_tab_arrow_right

0xaf05,	// (0x0000af05) title_pane_g3_ParamLimits

0xaf05,	// (0x0000af05) title_pane_g3

0x10f8,	// (0x000010f8) set_value_pane_g1

0xc258,	// (0x0000c258) popup_toolbar_trans_pane_ParamLimits

0x6ef1,	// (0x00006ef1) aid_size_cell_tb_trans_pane_ParamLimits

0x11fa,	// (0x000011fa) bg_tb_trans_pane_ParamLimits

0x6f03,	// (0x00006f03) grid_tb_trans_pane_ParamLimits

0x07a6,	// (0x000007a6) cont_note_pane_ParamLimits

0x07a6,	// (0x000007a6) cont_note_pane

0x0b06,	// (0x00000b06) cont_snote2_single_text_pane_ParamLimits

0x0b06,	// (0x00000b06) cont_snote2_single_text_pane

0x0b06,	// (0x00000b06) cont_snote2_single_graphic_pane_ParamLimits

0x0b06,	// (0x00000b06) cont_snote2_single_graphic_pane

0x3a8b,	// (0x00003a8b) cont_note_wait_pane_ParamLimits

0x3a8b,	// (0x00003a8b) cont_note_wait_pane

0x3a8b,	// (0x00003a8b) cont_note_image_pane_ParamLimits

0x3a8b,	// (0x00003a8b) cont_note_image_pane

0x6fd7,	// (0x00006fd7) popup_note2_window_g1_ParamLimits

0x6fd7,	// (0x00006fd7) popup_note2_window_g1

0x7008,	// (0x00007008) popup_note2_window_t1_ParamLimits

0x7008,	// (0x00007008) popup_note2_window_t1

0x704d,	// (0x0000704d) popup_note2_window_t2_ParamLimits

0x704d,	// (0x0000704d) popup_note2_window_t2

0x7092,	// (0x00007092) popup_note2_window_t3_ParamLimits

0x7092,	// (0x00007092) popup_note2_window_t3

0x70d7,	// (0x000070d7) popup_note2_window_t4_ParamLimits

0x70d7,	// (0x000070d7) popup_note2_window_t4

0x082a,	// (0x0000082a) popup_note2_window_t5_ParamLimits

0x082a,	// (0x0000082a) popup_note2_window_t5

0x0004,

0xaa3c,	// (0x0000aa3c) popup_note2_window_t_ParamLimits

0xaa3c,	// (0x0000aa3c) popup_note2_window_t

0x7106,	// (0x00007106) popup_note2_image_window_g1_ParamLimits

0x7106,	// (0x00007106) popup_note2_image_window_g1

0x7112,	// (0x00007112) popup_note2_image_window_g2_ParamLimits

0x7112,	// (0x00007112) popup_note2_image_window_g2

0x0001,

0xaa47,	// (0x0000aa47) popup_note2_image_window_g_ParamLimits

0xaa47,	// (0x0000aa47) popup_note2_image_window_g

0x7124,	// (0x00007124) popup_note2_image_window_t1_ParamLimits

0x7124,	// (0x00007124) popup_note2_image_window_t1

0x713c,	// (0x0000713c) popup_note2_image_window_t2_ParamLimits

0x713c,	// (0x0000713c) popup_note2_image_window_t2

0x7154,	// (0x00007154) popup_note2_image_window_t3_ParamLimits

0x7154,	// (0x00007154) popup_note2_image_window_t3

0x0002,

0xaa4c,	// (0x0000aa4c) popup_note2_image_window_t_ParamLimits

0xaa4c,	// (0x0000aa4c) popup_note2_image_window_t

0x3a99,	// (0x00003a99) popup_note2_wait_window_g1_ParamLimits

0x3a99,	// (0x00003a99) popup_note2_wait_window_g1

0x3aa5,	// (0x00003aa5) popup_note2_wait_window_g2_ParamLimits

0x3aa5,	// (0x00003aa5) popup_note2_wait_window_g2

0x3ab1,	// (0x00003ab1) popup_note2_wait_window_g3_ParamLimits

0x3ab1,	// (0x00003ab1) popup_note2_wait_window_g3

0x0002,

0xa61f,	// (0x0000a61f) popup_note2_wait_window_g_ParamLimits

0xa61f,	// (0x0000a61f) popup_note2_wait_window_g

0x7170,	// (0x00007170) popup_note2_wait_window_t1_ParamLimits

0x7170,	// (0x00007170) popup_note2_wait_window_t1

0x718e,	// (0x0000718e) popup_note2_wait_window_t2_ParamLimits

0x718e,	// (0x0000718e) popup_note2_wait_window_t2

0x71ac,	// (0x000071ac) popup_note2_wait_window_t3_ParamLimits

0x71ac,	// (0x000071ac) popup_note2_wait_window_t3

0x71be,	// (0x000071be) popup_note2_wait_window_t4_ParamLimits

0x71be,	// (0x000071be) popup_note2_wait_window_t4

0x0003,

0xaa53,	// (0x0000aa53) popup_note2_wait_window_t_ParamLimits

0xaa53,	// (0x0000aa53) popup_note2_wait_window_t

0x71d0,	// (0x000071d0) wait_bar2_pane_ParamLimits

0x71d0,	// (0x000071d0) wait_bar2_pane

0x71e8,	// (0x000071e8) popup_snote2_single_text_window_g1_ParamLimits

0x71e8,	// (0x000071e8) popup_snote2_single_text_window_g1

0x7210,	// (0x00007210) popup_snote2_single_text_window_t1_ParamLimits

0x7210,	// (0x00007210) popup_snote2_single_text_window_t1

0x725c,	// (0x0000725c) popup_snote2_single_text_window_t2_ParamLimits

0x725c,	// (0x0000725c) popup_snote2_single_text_window_t2

0x72a8,	// (0x000072a8) popup_snote2_single_text_window_t3_ParamLimits

0x72a8,	// (0x000072a8) popup_snote2_single_text_window_t3

0x72e9,	// (0x000072e9) popup_snote2_single_text_window_t4_ParamLimits

0x72e9,	// (0x000072e9) popup_snote2_single_text_window_t4

0x731f,	// (0x0000731f) popup_snote2_single_text_window_t5_ParamLimits

0x731f,	// (0x0000731f) popup_snote2_single_text_window_t5

0x0004,

0xaa5c,	// (0x0000aa5c) popup_snote2_single_text_window_t_ParamLimits

0xaa5c,	// (0x0000aa5c) popup_snote2_single_text_window_t

0x734a,	// (0x0000734a) popup_snote2_single_graphic_window_g1_ParamLimits

0x734a,	// (0x0000734a) popup_snote2_single_graphic_window_g1

0x7372,	// (0x00007372) popup_snote2_single_graphic_window_g2_ParamLimits

0x7372,	// (0x00007372) popup_snote2_single_graphic_window_g2

0x0001,

0xaa67,	// (0x0000aa67) popup_snote2_single_graphic_window_g_ParamLimits

0xaa67,	// (0x0000aa67) popup_snote2_single_graphic_window_g

0x739a,	// (0x0000739a) popup_snote2_single_graphic_window_t1_ParamLimits

0x739a,	// (0x0000739a) popup_snote2_single_graphic_window_t1

0x73e6,	// (0x000073e6) popup_snote2_single_graphic_window_t2_ParamLimits

0x73e6,	// (0x000073e6) popup_snote2_single_graphic_window_t2

0x72a8,	// (0x000072a8) popup_snote2_single_graphic_window_t3_ParamLimits

0x72a8,	// (0x000072a8) popup_snote2_single_graphic_window_t3

0x72e9,	// (0x000072e9) popup_snote2_single_graphic_window_t4_ParamLimits

0x72e9,	// (0x000072e9) popup_snote2_single_graphic_window_t4

0x731f,	// (0x0000731f) popup_snote2_single_graphic_window_t5_ParamLimits

0x731f,	// (0x0000731f) popup_snote2_single_graphic_window_t5

0x0004,

0xaa6c,	// (0x0000aa6c) popup_snote2_single_graphic_window_t_ParamLimits

0xaa6c,	// (0x0000aa6c) popup_snote2_single_graphic_window_t

0x5986,	// (0x00005986) clock_nsta_pane_cp2_t1

0x5986,	// (0x00005986) clock_nsta_pane_cp2_t2

0x0001,

0xa893,	// (0x0000a893) clock_nsta_pane_cp2_t

0x1214,	// (0x00001214) form_field_data_wide_pane_g1_ParamLimits

0x0cac,	// (0x00000cac) form_field_data_wide_pane_g2_ParamLimits

0x0cac,	// (0x00000cac) form_field_data_wide_pane_g2

0x1220,	// (0x00001220) form_field_data_wide_pane_g3_ParamLimits

0x1220,	// (0x00001220) form_field_data_wide_pane_g3

0x0002,

0xa452,	// (0x0000a452) form_field_data_wide_pane_g_ParamLimits

0xa452,	// (0x0000a452) form_field_data_wide_pane_g

0xcd45,	// (0x0000cd45) grid_touch_3_pane_ParamLimits

0xcd45,	// (0x0000cd45) grid_touch_3_pane

0xd13b,	// (0x0000d13b) cell_touch_3_pane_ParamLimits

0xd13b,	// (0x0000d13b) cell_touch_3_pane

0x5e93,	// (0x00005e93) cell_touch_3_pane_g1

0x5e93,	// (0x00005e93) cell_touch_3_pane_g2

0x0001,

0xa918,	// (0x0000a918) cell_touch_3_pane_g

0x0882,	// (0x00000882) cont_query_data_pane

0x088a,	// (0x0000088a) cont_query_data_pane_cp1

0x745f,	// (0x0000745f) button_value_adjust_pane_cp7

0x7467,	// (0x00007467) query_popup_pane_cp3

0x1c80,	// (0x00001c80) bg_popup_sub_pane_cp22_ParamLimits

0x1c96,	// (0x00001c96) navi_navi_volume_pane_cp2

0x1cae,	// (0x00001cae) popup_side_volume_key_window_g2

0x1cba,	// (0x00001cba) popup_side_volume_key_window_g3

0x0002,

0xa4e8,	// (0x0000a4e8) popup_side_volume_key_window_g

0x1cd4,	// (0x00001cd4) popup_side_volume_key_window_t2

0x0001,

0xa4ef,	// (0x0000a4ef) popup_side_volume_key_window_t

0x2134,	// (0x00002134) popup_side_volume_key_window_ParamLimits

0xb3bd,	// (0x0000b3bd) list_double_graphic_pane_g4_ParamLimits

0xb3bd,	// (0x0000b3bd) list_double_graphic_pane_g4

0xcba7,	// (0x0000cba7) list_single_2heading_msg_pane_ParamLimits

0xcba7,	// (0x0000cba7) list_single_2heading_msg_pane

0xd182,	// (0x0000d182) list_single_2heading_msg_pane_g1_ParamLimits

0xd182,	// (0x0000d182) list_single_2heading_msg_pane_g1

0xd18e,	// (0x0000d18e) list_single_2heading_msg_pane_g2_ParamLimits

0xd18e,	// (0x0000d18e) list_single_2heading_msg_pane_g2

0xd1a1,	// (0x0000d1a1) list_single_2heading_msg_pane_g3_ParamLimits

0xd1a1,	// (0x0000d1a1) list_single_2heading_msg_pane_g3

0xd1ad,	// (0x0000d1ad) list_single_2heading_msg_pane_g4_ParamLimits

0xd1ad,	// (0x0000d1ad) list_single_2heading_msg_pane_g4

0x0003,

0xebf7,	// (0x0000ebf7) list_single_2heading_msg_pane_g_ParamLimits

0xebf7,	// (0x0000ebf7) list_single_2heading_msg_pane_g

0x74d0,	// (0x000074d0) list_single_2heading_msg_pane_t1_ParamLimits

0x74d0,	// (0x000074d0) list_single_2heading_msg_pane_t1

0xd1c5,	// (0x0000d1c5) list_single_2heading_msg_pane_t2_ParamLimits

0xd1c5,	// (0x0000d1c5) list_single_2heading_msg_pane_t2

0xd230,	// (0x0000d230) list_single_2heading_msg_pane_t3_ParamLimits

0xd230,	// (0x0000d230) list_single_2heading_msg_pane_t3

0x7560,	// (0x00007560) list_single_2heading_msg_pane_t4_ParamLimits

0x7560,	// (0x00007560) list_single_2heading_msg_pane_t4

0x0003,

0xec00,	// (0x0000ec00) list_single_2heading_msg_pane_t_ParamLimits

0xec00,	// (0x0000ec00) list_single_2heading_msg_pane_t

0x03c8,	// (0x000003c8) title_pane_g4_ParamLimits

0x03c8,	// (0x000003c8) title_pane_g4

0x1714,	// (0x00001714) title_pane_stacon_g3_ParamLimits

0x1714,	// (0x00001714) title_pane_stacon_g3

0x6f6e,	// (0x00006f6e) list_single_2graphic_im_pane_g4_ParamLimits

0x6f6e,	// (0x00006f6e) list_single_2graphic_im_pane_g4

0x45d3,	// (0x000045d3) popup_side_volume_key_window_cp

0x4f24,	// (0x00004f24) main_idle_act2_pane_t1

0x32fb,	// (0x000032fb) toolbar_button_pane_g10

0xb2af,	// (0x0000b2af) popup_toolbar_window_cp1

0x5977,	// (0x00005977) clock_nsta_pane_cp_t1

0x5977,	// (0x00005977) clock_nsta_pane_cp_t2

0x0001,

0xa88e,	// (0x0000a88e) clock_nsta_pane_cp_t

0x1c96,	// (0x00001c96) navi_navi_volume_pane_cp2_ParamLimits

0x1ca2,	// (0x00001ca2) popup_side_volume_key_window_g1_ParamLimits

0x1cae,	// (0x00001cae) popup_side_volume_key_window_g2_ParamLimits

0x1cba,	// (0x00001cba) popup_side_volume_key_window_g3_ParamLimits

0xa4e8,	// (0x0000a4e8) popup_side_volume_key_window_g_ParamLimits

0x5efa,	// (0x00005efa) fep_hwr_aid_pane

0x5f9b,	// (0x00005f9b) bg_fep_hwr_top_pane_g4_ParamLimits

0x5fbb,	// (0x00005fbb) fep_hwr_top_pane_g1_ParamLimits

0x5fcd,	// (0x00005fcd) fep_hwr_top_pane_g2_ParamLimits

0x5fdf,	// (0x00005fdf) fep_hwr_top_pane_g3_ParamLimits

0xa8e3,	// (0x0000a8e3) fep_hwr_top_pane_g_ParamLimits

0x5ff4,	// (0x00005ff4) fep_hwr_top_text_pane_ParamLimits

0x439e,	// (0x0000439e) aid_touch_tab_arrow_arrow_2

0x43a7,	// (0x000043a7) aid_touch_tab_arrow_left_2

0x5f0e,	// (0x00005f0e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f41,	// (0x00005f41) fep_hwr_prediction_pane

0x6243,	// (0x00006243) fep_vkb_prediction_pane

0xceeb,	// (0x0000ceeb) fep_vkb_side_pane_g3_ParamLimits

0xceeb,	// (0x0000ceeb) fep_vkb_side_pane_g3

0x62d1,	// (0x000062d1) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x69a4,	// (0x000069a4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x69b1,	// (0x000069b1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xa98d,	// (0x0000a98d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7585,	// (0x00007585) fep_hwr_prediction_pane_g1

0x758f,	// (0x0000758f) fep_hwr_prediction_pane_g2

0x7597,	// (0x00007597) fep_hwr_prediction_pane_g3

0x759f,	// (0x0000759f) fep_hwr_prediction_pane_g4

0x0003,

0xaa89,	// (0x0000aa89) fep_hwr_prediction_pane_g

0x7585,	// (0x00007585) fep_vkb_prediction_pane_g1

0x75a7,	// (0x000075a7) fep_vkb_prediction_pane_g2

0x75af,	// (0x000075af) fep_vkb_prediction_pane_g3

0x75b7,	// (0x000075b7) fep_vkb_prediction_pane_g4

0x0003,

0xaa92,	// (0x0000aa92) fep_vkb_prediction_pane_g

0x48e2,	// (0x000048e2) slider_set_pane_g3

0x48f6,	// (0x000048f6) slider_set_pane_g4

0x490e,	// (0x0000490e) slider_set_pane_g5

0x48e2,	// (0x000048e2) slider_set_pane_g6

0xca03,	// (0x0000ca03) slider_set_pane_g7

0x4ab5,	// (0x00004ab5) slider_form_pane_g3

0x4abe,	// (0x00004abe) slider_form_pane_g4

0x4ac6,	// (0x00004ac6) slider_form_pane_g5

0x4ab5,	// (0x00004ab5) slider_form_pane_g6

0xcb5f,	// (0x0000cb5f) slider_form_pane_g7

0x521d,	// (0x0000521d) slider_set_pane_vc_g3

0x5226,	// (0x00005226) slider_set_pane_vc_g4

0x522f,	// (0x0000522f) slider_set_pane_vc_g5

0x521d,	// (0x0000521d) slider_set_pane_vc_g6

0x5238,	// (0x00005238) slider_set_pane_vc_g7

0x521d,	// (0x0000521d) slider_form_pane_vc_g1

0x5226,	// (0x00005226) slider_form_pane_vc_g2

0x522f,	// (0x0000522f) slider_form_pane_vc_g3

0x521d,	// (0x0000521d) slider_form_pane_vc_g4

0x565b,	// (0x0000565b) slider_form_pane_vc_g5

0x0004,

0xa860,	// (0x0000a860) slider_form_pane_vc_g

0x0020,	// (0x00000020) main_idle_act3_pane

0x75bf,	// (0x000075bf) ai3_links_pane

0xd29e,	// (0x0000d29e) popup_ai3_data_window_ParamLimits

0xd29e,	// (0x0000d29e) popup_ai3_data_window

0x0020,	// (0x00000020) grid_ai3_links_pane

0xd2b6,	// (0x0000d2b6) cell_ai3_links_pane_ParamLimits

0xd2b6,	// (0x0000d2b6) cell_ai3_links_pane

0x75f4,	// (0x000075f4) bg_popup_sub_pane_cp11

0x7601,	// (0x00007601) cell_ai3_links_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp12

0x7626,	// (0x00007626) heading_ai3_data_pane

0x762e,	// (0x0000762e) list_ai3_gene_pane

0x763a,	// (0x0000763a) popup_ai3_data_window_g1

0x7642,	// (0x00007642) heading_ai3_data_pane_g1

0x764a,	// (0x0000764a) heading_ai3_data_pane_t1

0x7658,	// (0x00007658) list_double_ai3_gene_pane_ParamLimits

0x7658,	// (0x00007658) list_double_ai3_gene_pane

0x7665,	// (0x00007665) list_single_ai3_gene_pane_ParamLimits

0x7665,	// (0x00007665) list_single_ai3_gene_pane

0x5e58,	// (0x00005e58) list_highlight_pane_cp7_ParamLimits

0x5e58,	// (0x00005e58) list_highlight_pane_cp7

0x7672,	// (0x00007672) list_single_a13_gene_pane_t1_ParamLimits

0x7672,	// (0x00007672) list_single_a13_gene_pane_t1

0x7689,	// (0x00007689) list_single_ai3_gene_pane_g1

0x7692,	// (0x00007692) list_single_ai3_gene_pane_g2

0x0001,

0xaa9b,	// (0x0000aa9b) list_single_ai3_gene_pane_g

0x769a,	// (0x0000769a) list_double_ai3_gene_pane_g1_ParamLimits

0x769a,	// (0x0000769a) list_double_ai3_gene_pane_g1

0x76a6,	// (0x000076a6) list_double_ai3_gene_pane_t1_ParamLimits

0x76a6,	// (0x000076a6) list_double_ai3_gene_pane_t1

0x76c2,	// (0x000076c2) list_double_ai3_gene_pane_t2_ParamLimits

0x76c2,	// (0x000076c2) list_double_ai3_gene_pane_t2

0x76d7,	// (0x000076d7) list_double_ai3_gene_pane_t3_ParamLimits

0x76d7,	// (0x000076d7) list_double_ai3_gene_pane_t3

0x0002,

0xaaa0,	// (0x0000aaa0) list_double_ai3_gene_pane_t_ParamLimits

0xaaa0,	// (0x0000aaa0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7478,	// (0x00007478) aid_size_min_col_2

0xd16e,	// (0x0000d16e) aid_size_min_msg_ParamLimits

0xd16e,	// (0x0000d16e) aid_size_min_msg

0xceff,	// (0x0000ceff) fep_vkb_top_text_pane_g2_ParamLimits

0xceff,	// (0x0000ceff) fep_vkb_top_text_pane_g2

0x0001,

0xebd4,	// (0x0000ebd4) fep_vkb_top_text_pane_g_ParamLimits

0xebd4,	// (0x0000ebd4) fep_vkb_top_text_pane_g

0x0020,	// (0x00000020) main_hc_apps_shell_pane

0x76f4,	// (0x000076f4) grid_hc_apps_pane_ParamLimits

0x76f4,	// (0x000076f4) grid_hc_apps_pane

0x7706,	// (0x00007706) list_hc_apps_pane

0x770e,	// (0x0000770e) scroll_pane_cp37_ParamLimits

0x770e,	// (0x0000770e) scroll_pane_cp37

0xd2cc,	// (0x0000d2cc) cell_hc_apps_pane_ParamLimits

0xd2cc,	// (0x0000d2cc) cell_hc_apps_pane

0xd366,	// (0x0000d366) cell_hc_apps_pane_g1_ParamLimits

0xd366,	// (0x0000d366) cell_hc_apps_pane_g1

0x77d4,	// (0x000077d4) cell_hc_apps_pane_g2_ParamLimits

0x77d4,	// (0x000077d4) cell_hc_apps_pane_g2

0x77f0,	// (0x000077f0) cell_hc_apps_pane_g3_ParamLimits

0x77f0,	// (0x000077f0) cell_hc_apps_pane_g3

0x0002,

0xec09,	// (0x0000ec09) cell_hc_apps_pane_g_ParamLimits

0xec09,	// (0x0000ec09) cell_hc_apps_pane_g

0xd392,	// (0x0000d392) cell_hc_apps_pane_t1_ParamLimits

0xd392,	// (0x0000d392) cell_hc_apps_pane_t1

0x07a6,	// (0x000007a6) grid_highlight_pane_cp10_ParamLimits

0x07a6,	// (0x000007a6) grid_highlight_pane_cp10

0xd3d0,	// (0x0000d3d0) list_single_hc_apps_pane_ParamLimits

0xd3d0,	// (0x0000d3d0) list_single_hc_apps_pane

0xd3fc,	// (0x0000d3fc) list_single_hc_apps_pane_g1

0xd415,	// (0x0000d415) list_single_hc_apps_pane_g2

0x0001,

0xec10,	// (0x0000ec10) list_single_hc_apps_pane_g

0xd42e,	// (0x0000d42e) list_single_hc_apps_pane_g2_copy1

0xd44a,	// (0x0000d44a) list_single_hc_apps_pane_t1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_ParamLimits

0x04be,	// (0x000004be) setting_slider_pane_t1_ParamLimits

0xafd2,	// (0x0000afd2) setting_slider_pane_t2_ParamLimits

0xafeb,	// (0x0000afeb) setting_slider_pane_t3_ParamLimits

0xe9cd,	// (0x0000e9cd) setting_slider_pane_t_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_ParamLimits

0x2709,	// (0x00002709) control_pane_g5_ParamLimits

0x2709,	// (0x00002709) control_pane_g5

0x48c9,	// (0x000048c9) slider_set_pane_g1_ParamLimits

0x48d6,	// (0x000048d6) slider_set_pane_g2_ParamLimits

0x48e2,	// (0x000048e2) slider_set_pane_g3_ParamLimits

0x48f6,	// (0x000048f6) slider_set_pane_g4_ParamLimits

0x490e,	// (0x0000490e) slider_set_pane_g5_ParamLimits

0x48e2,	// (0x000048e2) slider_set_pane_g6_ParamLimits

0xca03,	// (0x0000ca03) slider_set_pane_g7_ParamLimits

0xeb50,	// (0x0000eb50) slider_set_pane_g_ParamLimits

0x0474,	// (0x00000474) navi_icon_text_pane_ParamLimits

0xc2c5,	// (0x0000c2c5) aid_fill_nsta_2_ParamLimits

0xc2f3,	// (0x0000c2f3) aid_touch_tab_arrow_left_ParamLimits

0xc307,	// (0x0000c307) aid_touch_tab_arrow_right_ParamLimits

0xc3a3,	// (0x0000c3a3) clock_nsta_pane_ParamLimits

0x4380,	// (0x00004380) navi_icon_pane_g1_ParamLimits

0x438c,	// (0x0000438c) navi_text_pane_t1_ParamLimits

0x5a6e,	// (0x00005a6e) navi_icon_text_pane_g1_ParamLimits

0x5a7a,	// (0x00005a7a) navi_icon_text_pane_t1_ParamLimits

0xd3fc,	// (0x0000d3fc) list_single_hc_apps_pane_g1_ParamLimits

0xd415,	// (0x0000d415) list_single_hc_apps_pane_g2_ParamLimits

0xec10,	// (0x0000ec10) list_single_hc_apps_pane_g_ParamLimits

0xd42e,	// (0x0000d42e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd44a,	// (0x0000d44a) list_single_hc_apps_pane_t1_ParamLimits

0xae1d,	// (0x0000ae1d) popup_toolbar2_fixed_window_ParamLimits

0xae1d,	// (0x0000ae1d) popup_toolbar2_fixed_window

0xc250,	// (0x0000c250) popup_toolbar2_float_window

0x0020,	// (0x00000020) bg_popup_sub_pane_cp27

0x78fc,	// (0x000078fc) grid_toolbar2_float_pane

0x0020,	// (0x00000020) bg_popup_sub_pane_cp26

0x78fc,	// (0x000078fc) grid_toolbar2_fixed_pane

0xd478,	// (0x0000d478) cell_toolbar2_fixed_pane_ParamLimits

0xd478,	// (0x0000d478) cell_toolbar2_fixed_pane

0xd493,	// (0x0000d493) cell_toolbar2_fixed_pane_g1

0x791e,	// (0x0000791e) toolbar2_fixed_button_pane

0x32b3,	// (0x000032b3) toolbar2_fixed_button_pane_g1

0x32bb,	// (0x000032bb) toolbar2_fixed_button_pane_g2

0x32c3,	// (0x000032c3) toolbar2_fixed_button_pane_g3

0x32cb,	// (0x000032cb) toolbar2_fixed_button_pane_g4

0x32d3,	// (0x000032d3) toolbar2_fixed_button_pane_g5

0x32db,	// (0x000032db) toolbar2_fixed_button_pane_g6

0x32e3,	// (0x000032e3) toolbar2_fixed_button_pane_g7

0x32eb,	// (0x000032eb) toolbar2_fixed_button_pane_g8

0x32f3,	// (0x000032f3) toolbar2_fixed_button_pane_g9

0x0008,

0xa63d,	// (0x0000a63d) toolbar2_fixed_button_pane_g

0x7926,	// (0x00007926) cell_toolbar2_float_pane_ParamLimits

0x7926,	// (0x00007926) cell_toolbar2_float_pane

0x7937,	// (0x00007937) cell_toolbar2_float_pane_g1

0x791e,	// (0x0000791e) toolbar2_fixed_button_pane_cp

0xceb4,	// (0x0000ceb4) fep_vkb_accented_list_pane_ParamLimits

0xceb4,	// (0x0000ceb4) fep_vkb_accented_list_pane

0x6604,	// (0x00006604) bg_popup_fep_shadow_pane_g9

0x2345,	// (0x00002345) bg_popup_fep_shadow_pane_cp3

0x14b8,	// (0x000014b8) list_accented_list_pane

0x7940,	// (0x00007940) list_single_accented_list_pane_ParamLimits

0x7940,	// (0x00007940) list_single_accented_list_pane

0x2345,	// (0x00002345) list_highlight_pane_cp10

0x7951,	// (0x00007951) list_single_accented_list_pane_t1

0xc192,	// (0x0000c192) popup_slider_window_ParamLimits

0xc192,	// (0x0000c192) popup_slider_window

0x746f,	// (0x0000746f) aid_indentation_list_msg

0xd572,	// (0x0000d572) bg_popup_window_pane_cp19

0x7a55,	// (0x00007a55) popup_slider_window_g1

0x7a71,	// (0x00007a71) popup_slider_window_g2

0x7a8d,	// (0x00007a8d) popup_slider_window_g3

0x0005,

0xec15,	// (0x0000ec15) popup_slider_window_g

0x7ae9,	// (0x00007ae9) popup_slider_window_t1

0x7b5b,	// (0x00007b5b) small_volume_slider_vertical_pane

0x5e93,	// (0x00005e93) small_volume_slider_vertical_pane_g1

0x5e93,	// (0x00005e93) small_volume_slider_vertical_pane_g2

0x7b77,	// (0x00007b77) small_volume_slider_vertical_pane_g3

0x0002,

0xaac5,	// (0x0000aac5) small_volume_slider_vertical_pane_g

0xada1,	// (0x0000ada1) area_side_right_pane_ParamLimits

0xada1,	// (0x0000ada1) area_side_right_pane

0xd62a,	// (0x0000d62a) aid_size_side_button_ParamLimits

0xd62a,	// (0x0000d62a) aid_size_side_button

0xd643,	// (0x0000d643) grid_sctrl_middle_pane_ParamLimits

0xd643,	// (0x0000d643) grid_sctrl_middle_pane

0x7bb0,	// (0x00007bb0) sctrl_sk_bottom_pane

0x7bc1,	// (0x00007bc1) sctrl_sk_top_pane

0x7bd3,	// (0x00007bd3) aid_touch_sctrl_top

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane_ParamLimits

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane

0x7be0,	// (0x00007be0) sctrl_sk_top_pane_g1

0x7bed,	// (0x00007bed) sctrl_sk_top_pane_t1

0x7bd3,	// (0x00007bd3) aid_touch_sctrl_bottom

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane_cp_ParamLimits

0x07a6,	// (0x000007a6) bg_sctrl_sk_pane_cp

0x7c08,	// (0x00007c08) sctrl_sk_bottom_pane_g1

0x7bed,	// (0x00007bed) sctrl_sk_bottom_pane_t1

0xd659,	// (0x0000d659) cell_sctrl_middle_pane_ParamLimits

0xd659,	// (0x0000d659) cell_sctrl_middle_pane

0xd66a,	// (0x0000d66a) aid_touch_sctrl_middle_ParamLimits

0xd66a,	// (0x0000d66a) aid_touch_sctrl_middle

0xd677,	// (0x0000d677) bg_sctrl_middle_pane_ParamLimits

0xd677,	// (0x0000d677) bg_sctrl_middle_pane

0x7ccf,	// (0x00007ccf) cell_sctrl_middle_pane_g1_ParamLimits

0x7ccf,	// (0x00007ccf) cell_sctrl_middle_pane_g1

0xd685,	// (0x0000d685) cell_sctrl_middle_pane_g2_ParamLimits

0xd685,	// (0x0000d685) cell_sctrl_middle_pane_g2

0x0001,

0xec22,	// (0x0000ec22) cell_sctrl_middle_pane_g_ParamLimits

0xec22,	// (0x0000ec22) cell_sctrl_middle_pane_g

0x32b3,	// (0x000032b3) bg_sctrl_middle_pane_g1

0x32bb,	// (0x000032bb) bg_sctrl_middle_pane_g2

0x32c3,	// (0x000032c3) bg_sctrl_middle_pane_g3

0x32cb,	// (0x000032cb) bg_sctrl_middle_pane_g4

0x32d3,	// (0x000032d3) bg_sctrl_middle_pane_g5

0x32db,	// (0x000032db) bg_sctrl_middle_pane_g6

0x32e3,	// (0x000032e3) bg_sctrl_middle_pane_g7

0x32eb,	// (0x000032eb) bg_sctrl_middle_pane_g8

0x0007,

0xaad6,	// (0x0000aad6) bg_sctrl_middle_pane_g

0x32f3,	// (0x000032f3) bg_sctrl_middle_pane_g8_copy1

0x32b3,	// (0x000032b3) bg_sctrl_sk_pane_g1

0x32bb,	// (0x000032bb) bg_sctrl_sk_pane_g2

0x32c3,	// (0x000032c3) bg_sctrl_sk_pane_g3

0x0008,

0xa63d,	// (0x0000a63d) bg_sctrl_sk_pane_g

0x0c28,	// (0x00000c28) aid_size_touch_scroll_bar

0x32cb,	// (0x000032cb) bg_sctrl_sk_pane_g4

0x32d3,	// (0x000032d3) bg_sctrl_sk_pane_g5

0x32db,	// (0x000032db) bg_sctrl_sk_pane_g6

0x32e3,	// (0x000032e3) bg_sctrl_sk_pane_g7

0x32eb,	// (0x000032eb) bg_sctrl_sk_pane_g8

0x32f3,	// (0x000032f3) bg_sctrl_sk_pane_g9

0x294f,	// (0x0000294f) popup_fep_china_hwr2_fs_candidate_window

0xbd8d,	// (0x0000bd8d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbd8d,	// (0x0000bd8d) popup_fep_china_hwr2_fs_control_window

0x62d1,	// (0x000062d1) sctrl_sk_top_pane_g2

0x0001,

0xaacc,	// (0x0000aacc) sctrl_sk_top_pane_g

0xd692,	// (0x0000d692) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd692,	// (0x0000d692) aid_fep_china_hwr2_fs_cell

0xd6a6,	// (0x0000d6a6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd6a6,	// (0x0000d6a6) bg_popup_fep_shadow_pane_cp4

0xd6bd,	// (0x0000d6bd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd6bd,	// (0x0000d6bd) bg_popup_fep_shadow_pane_cp5

0xd6cf,	// (0x0000d6cf) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd6cf,	// (0x0000d6cf) popup_fep_china_hwr2_fs_control_bar_grid

0xd6e3,	// (0x0000d6e3) popup_fep_china_hwr2_fs_control_funtion_grid

0x7ca5,	// (0x00007ca5) aid_fep_china_hwr2_fs_candi_cell

0x0020,	// (0x00000020) bg_popup_fep_shadow_pane_cp6

0x7caf,	// (0x00007caf) popup_fep_china_hwr2_fs_candidate_grid

0xd6eb,	// (0x0000d6eb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd6eb,	// (0x0000d6eb) cell_fep_china_hwr2_fs_funtion_grid

0x5e93,	// (0x00005e93) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7ccf,	// (0x00007ccf) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7ccf,	// (0x00007ccf) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7cdd,	// (0x00007cdd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7cdd,	// (0x00007cdd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xaae7,	// (0x0000aae7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xaae7,	// (0x0000aae7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd703,	// (0x0000d703) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd703,	// (0x0000d703) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd718,	// (0x0000d718) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd718,	// (0x0000d718) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xec27,	// (0x0000ec27) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xec27,	// (0x0000ec27) cell_fep_china_hwr2_fs_funtion_grid_t

0x7d24,	// (0x00007d24) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7d2c,	// (0x00007d2c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7d34,	// (0x00007d34) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xaaf1,	// (0x0000aaf1) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7d3c,	// (0x00007d3c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7d3c,	// (0x00007d3c) cell_fep_china_hwr2_fs_candidate_grid

0x7d55,	// (0x00007d55) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7d5d,	// (0x00007d5d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5e93,	// (0x00005e93) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5e93,	// (0x00005e93) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xa918,	// (0x0000a918) cell_fep_china_hwr2_fs_candidate_grid_g

0x7d65,	// (0x00007d65) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e32,	// (0x00002e32) clock_nsta_pane_cp_24_ParamLimits

0x2e32,	// (0x00002e32) clock_nsta_pane_cp_24

0x2ea5,	// (0x00002ea5) indicator_nsta_pane_cp_24_ParamLimits

0x2ea5,	// (0x00002ea5) indicator_nsta_pane_cp_24

0x41ec,	// (0x000041ec) heading_pane_g1

0x0001,

0xa6a2,	// (0x0000a6a2) heading_pane_g

0xcc6d,	// (0x0000cc6d) grid_sct_catagory_button_pane

0x4d3e,	// (0x00004d3e) scroll_pane_cp5_ParamLimits

0x5b04,	// (0x00005b04) button_value_adjust_pane_cp5_ParamLimits

0x5b04,	// (0x00005b04) button_value_adjust_pane_cp5

0x5bfa,	// (0x00005bfa) form2_midp_time_pane_ParamLimits

0x7d73,	// (0x00007d73) cell_sct_catagory_button_pane_ParamLimits

0x7d73,	// (0x00007d73) cell_sct_catagory_button_pane

0x5e58,	// (0x00005e58) bg_button_pane_cp01_ParamLimits

0x5e58,	// (0x00005e58) bg_button_pane_cp01

0x5e93,	// (0x00005e93) cell_sct_catagory_button_pane_g1

0xc201,	// (0x0000c201) popup_tb_extension_window

0xd734,	// (0x0000d734) aid_size_cell_ext_ParamLimits

0xd734,	// (0x0000d734) aid_size_cell_ext

0x0b06,	// (0x00000b06) bg_tb_trans_pane_cp1_ParamLimits

0x0b06,	// (0x00000b06) bg_tb_trans_pane_cp1

0xd75a,	// (0x0000d75a) grid_tb_ext_pane_ParamLimits

0xd75a,	// (0x0000d75a) grid_tb_ext_pane

0xd790,	// (0x0000d790) cell_tb_ext_pane_ParamLimits

0xd790,	// (0x0000d790) cell_tb_ext_pane

0xd7b4,	// (0x0000d7b4) cell_tb_ext_pane_g1_ParamLimits

0xd7b4,	// (0x0000d7b4) cell_tb_ext_pane_g1

0x7dfd,	// (0x00007dfd) cell_tb_ext_pane_t1

0x07a6,	// (0x000007a6) list_highlight_pane_cp11_ParamLimits

0x07a6,	// (0x000007a6) list_highlight_pane_cp11

0xae32,	// (0x0000ae32) popup_uni_indicator_window_ParamLimits

0xae32,	// (0x0000ae32) popup_uni_indicator_window

0x11fa,	// (0x000011fa) bg_popup_sub_pane_cp14

0x7e18,	// (0x00007e18) list_uniindi_pane

0x7e24,	// (0x00007e24) uniindi_top_pane

0x07a6,	// (0x000007a6) bg_uniindi_top_pane

0x7e43,	// (0x00007e43) uniindi_top_pane_g1

0x7e59,	// (0x00007e59) uniindi_top_pane_g2

0x0003,

0xaaf8,	// (0x0000aaf8) uniindi_top_pane_g

0x7e83,	// (0x00007e83) uniindi_top_pane_t1

0x7ead,	// (0x00007ead) list_single_uniindi_pane_ParamLimits

0x7ead,	// (0x00007ead) list_single_uniindi_pane

0x5e93,	// (0x00005e93) bg_uniindi_top_pane_g1

0x7ebf,	// (0x00007ebf) list_single_uniindi_pane_g1

0x7ed2,	// (0x00007ed2) list_single_uniindi_pane_t1

0x0020,	// (0x00000020) control_bg_pane

0x7ef7,	// (0x00007ef7) bg_sctrl_sk_pane_cp1

0x7f00,	// (0x00007f00) bg_sctrl_sk_pane_cp2

0x7f09,	// (0x00007f09) control_bg_pane_g1

0x7f12,	// (0x00007f12) control_bg_pane_g2

0x0001,

0xab01,	// (0x0000ab01) control_bg_pane_g

0x590f,	// (0x0000590f) cell_indicator_nsta_pane_g1_ParamLimits

0xcd7e,	// (0x0000cd7e) cell_indicator_nsta_pane_g2_ParamLimits

0xeb9f,	// (0x0000eb9f) cell_indicator_nsta_pane_g_ParamLimits

0x5c62,	// (0x00005c62) form2_midp_time_pane_t1_ParamLimits

0x5eec,	// (0x00005eec) main_idle_act4_pane_ParamLimits

0x5eec,	// (0x00005eec) main_idle_act4_pane

0xc201,	// (0x0000c201) popup_tb_extension_window_ParamLimits

0xd77a,	// (0x0000d77a) tb_ext_find_pane_ParamLimits

0xd77a,	// (0x0000d77a) tb_ext_find_pane

0x7f1b,	// (0x00007f1b) ai_gene_pane_1_cp1

0x2480,	// (0x00002480) ai_gene_pane_2_cp1

0x7f23,	// (0x00007f23) list_single_idle_plugin_calendar_pane

0x7f2c,	// (0x00007f2c) list_single_idle_plugin_notification_pane

0x7f35,	// (0x00007f35) list_single_idle_plugin_player_pane

0xd7d1,	// (0x0000d7d1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd7d1,	// (0x0000d7d1) list_single_idle_plugin_shortcut_pane

0xd7f9,	// (0x0000d7f9) main_idle_act4_pane_t1

0xd80f,	// (0x0000d80f) main_idle_act4_pane_t2

0x0001,

0xec2c,	// (0x0000ec2c) main_idle_act4_pane_t

0xd825,	// (0x0000d825) middle_sk_idle_act4_pane_ParamLimits

0xd825,	// (0x0000d825) middle_sk_idle_act4_pane

0xd841,	// (0x0000d841) popup_clock_digital_analogue_window_cp2

0xd867,	// (0x0000d867) shortcut_wheel_idle_act4_pane_ParamLimits

0xd867,	// (0x0000d867) shortcut_wheel_idle_act4_pane

0x5e93,	// (0x00005e93) shortcut_wheel_idle_act4_pane_g1

0x5e93,	// (0x00005e93) shortcut_wheel_idle_act4_pane_g2

0x5e93,	// (0x00005e93) shortcut_wheel_idle_act4_pane_g3

0x5e93,	// (0x00005e93) shortcut_wheel_idle_act4_pane_g4

0x5e93,	// (0x00005e93) shortcut_wheel_idle_act4_pane_g5

0x7fc8,	// (0x00007fc8) shortcut_wheel_idle_act4_pane_g6

0x7fd0,	// (0x00007fd0) shortcut_wheel_idle_act4_pane_g7

0x7fd8,	// (0x00007fd8) shortcut_wheel_idle_act4_pane_g8

0x7fe0,	// (0x00007fe0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xab0b,	// (0x0000ab0b) shortcut_wheel_idle_act4_pane_g

0x5f9b,	// (0x00005f9b) middle_sk_idle_act4_pane_g1_ParamLimits

0x5f9b,	// (0x00005f9b) middle_sk_idle_act4_pane_g1

0xd8e2,	// (0x0000d8e2) middle_sk_idle_act4_pane_g2_ParamLimits

0xd8e2,	// (0x0000d8e2) middle_sk_idle_act4_pane_g2

0x0001,

0xec41,	// (0x0000ec41) middle_sk_idle_act4_pane_g_ParamLimits

0xec41,	// (0x0000ec41) middle_sk_idle_act4_pane_g

0xd8fa,	// (0x0000d8fa) middle_sk_idle_act4_pane_t1_ParamLimits

0xd8fa,	// (0x0000d8fa) middle_sk_idle_act4_pane_t1

0xd929,	// (0x0000d929) grid_ai_shortcut_pane_ParamLimits

0xd929,	// (0x0000d929) grid_ai_shortcut_pane

0xd946,	// (0x0000d946) list_highlight_pane_cp16_ParamLimits

0xd946,	// (0x0000d946) list_highlight_pane_cp16

0xd953,	// (0x0000d953) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd953,	// (0x0000d953) list_single_idle_plugin_shortcut_pane_g1

0xd95f,	// (0x0000d95f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd95f,	// (0x0000d95f) list_single_idle_plugin_shortcut_pane_g2

0xd97b,	// (0x0000d97b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd97b,	// (0x0000d97b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xec46,	// (0x0000ec46) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xec46,	// (0x0000ec46) list_single_idle_plugin_shortcut_pane_g

0xd990,	// (0x0000d990) cell_ai_shortcut_pane_ParamLimits

0xd990,	// (0x0000d990) cell_ai_shortcut_pane

0xd9a6,	// (0x0000d9a6) cell_ai_shortcut_pane_g1_ParamLimits

0xd9a6,	// (0x0000d9a6) cell_ai_shortcut_pane_g1

0x7f1b,	// (0x00007f1b) ai_gene_pane_1_cp2

0x810d,	// (0x0000810d) ai_gene_pane_2_cp2

0x8115,	// (0x00008115) list_highlight_pane_cp15

0x811e,	// (0x0000811e) list_single_idle_plugin_calendar_pane_g1

0x8115,	// (0x00008115) list_highlight_pane_cp17

0x8126,	// (0x00008126) list_single_idle_plugin_calendar_pane_g1_copy1

0x812e,	// (0x0000812e) list_single_idle_plugin_player_pane_g1

0x4fc4,	// (0x00004fc4) list_single_idle_plugin_player_pane_g2

0x0001,

0xab3a,	// (0x0000ab3a) list_single_idle_plugin_player_pane_g

0x8136,	// (0x00008136) list_single_idle_plugin_player_pane_t1

0x8144,	// (0x00008144) list_single_idle_plugin_player_pane_t2

0x8152,	// (0x00008152) list_single_idle_plugin_player_pane_t3

0x8160,	// (0x00008160) list_single_idle_plugin_player_pane_t4

0x0003,

0xab3f,	// (0x0000ab3f) list_single_idle_plugin_player_pane_t

0x816e,	// (0x0000816e) wait_bar_pane_cp15

0x8176,	// (0x00008176) grid_ai_notification_pane

0x4fc4,	// (0x00004fc4) list_single_idle_plugin_notification_pane_g1

0xd9c8,	// (0x0000d9c8) cell_ai_notification_pane_ParamLimits

0xd9c8,	// (0x0000d9c8) cell_ai_notification_pane

0x818c,	// (0x0000818c) cell_ai_notification_pane_g1

0x8194,	// (0x00008194) cell_ai_notification_pane_t1

0xd9d5,	// (0x0000d9d5) tb_ext_find_button_pane

0xd9dd,	// (0x0000d9dd) tb_ext_find_pane_g1

0xd9e5,	// (0x0000d9e5) tb_ext_find_pane_t1

0x1b2e,	// (0x00001b2e) tb_ext_find_button_pane_g1

0x81c0,	// (0x000081c0) tb_ext_find_button_pane_g2

0x0001,

0xab48,	// (0x0000ab48) tb_ext_find_button_pane_g

0xd7f9,	// (0x0000d7f9) main_idle_act4_pane_t1_ParamLimits

0xd80f,	// (0x0000d80f) main_idle_act4_pane_t2_ParamLimits

0xec2c,	// (0x0000ec2c) main_idle_act4_pane_t_ParamLimits

0xd841,	// (0x0000d841) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd857,	// (0x0000d857) sat_plugin_idle_act4_pane_ParamLimits

0xd857,	// (0x0000d857) sat_plugin_idle_act4_pane

0xd9f3,	// (0x0000d9f3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9f3,	// (0x0000d9f3) sat_plugin_idle_act4_pane_t1

0xda0b,	// (0x0000da0b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda0b,	// (0x0000da0b) sat_plugin_idle_act4_pane_t2

0xda23,	// (0x0000da23) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda23,	// (0x0000da23) sat_plugin_idle_act4_pane_t3

0xda3b,	// (0x0000da3b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda3b,	// (0x0000da3b) sat_plugin_idle_act4_pane_t4

0x0003,

0xec4d,	// (0x0000ec4d) sat_plugin_idle_act4_pane_t_ParamLimits

0xec4d,	// (0x0000ec4d) sat_plugin_idle_act4_pane_t

0x0258,	// (0x00000258) popup_battery_window_ParamLimits

0x0258,	// (0x00000258) popup_battery_window

0x07a6,	// (0x000007a6) bg_popup_sub_pane_cp25_ParamLimits

0x07a6,	// (0x000007a6) bg_popup_sub_pane_cp25

0x8215,	// (0x00008215) popup_battery_window_g1_ParamLimits

0x8215,	// (0x00008215) popup_battery_window_g1

0x8221,	// (0x00008221) popup_battery_window_t1_ParamLimits

0x8221,	// (0x00008221) popup_battery_window_t1

0x8233,	// (0x00008233) popup_battery_window_t2_ParamLimits

0x8233,	// (0x00008233) popup_battery_window_t2

0x0001,

0xab56,	// (0x0000ab56) popup_battery_window_t_ParamLimits

0xab56,	// (0x0000ab56) popup_battery_window_t

0xba74,	// (0x0000ba74) midp_canvas_pane_ParamLimits

0xbac9,	// (0x0000bac9) midp_keypad_pane_ParamLimits

0xbac9,	// (0x0000bac9) midp_keypad_pane

0x28b1,	// (0x000028b1) main_midp_pane_ParamLimits

0x5995,	// (0x00005995) signal_pane_g2_cp_ParamLimits

0xda53,	// (0x0000da53) aid_size_cell_midp_keypad_ParamLimits

0xda53,	// (0x0000da53) aid_size_cell_midp_keypad

0xda71,	// (0x0000da71) midp_keyp_game_grid_pane_ParamLimits

0xda71,	// (0x0000da71) midp_keyp_game_grid_pane

0xda90,	// (0x0000da90) midp_keyp_rocker_pane_ParamLimits

0xda90,	// (0x0000da90) midp_keyp_rocker_pane

0xdad1,	// (0x0000dad1) midp_keyp_sk_left_pane_ParamLimits

0xdad1,	// (0x0000dad1) midp_keyp_sk_left_pane

0xdb23,	// (0x0000db23) midp_keyp_sk_right_pane_ParamLimits

0xdb23,	// (0x0000db23) midp_keyp_sk_right_pane

0x0020,	// (0x00000020) bg_button_pane_cp03

0xdb6f,	// (0x0000db6f) midp_keyp_sk_left_pane_g1

0x0020,	// (0x00000020) bg_button_pane_cp04

0xdb6f,	// (0x0000db6f) midp_keyp_sk_right_pane_g1

0x5e93,	// (0x00005e93) midp_keyp_rocker_pane_g1

0xdb78,	// (0x0000db78) keyp_game_cell_pane_ParamLimits

0xdb78,	// (0x0000db78) keyp_game_cell_pane

0x0020,	// (0x00000020) bg_button_pane_cp02

0xdb9a,	// (0x0000db9a) keyp_game_cell_pane_g1

0xade3,	// (0x0000ade3) popup_fep_vkb2_window_ParamLimits

0xade3,	// (0x0000ade3) popup_fep_vkb2_window

0xdba3,	// (0x0000dba3) aid_size_cell_vkb2_ParamLimits

0xdba3,	// (0x0000dba3) aid_size_cell_vkb2

0xdbd9,	// (0x0000dbd9) popup_fep_vkb2_window_g1_ParamLimits

0xdbd9,	// (0x0000dbd9) popup_fep_vkb2_window_g1

0xdc29,	// (0x0000dc29) vkb2_area_bottom_pane_ParamLimits

0xdc29,	// (0x0000dc29) vkb2_area_bottom_pane

0xdc67,	// (0x0000dc67) vkb2_area_keypad_pane_ParamLimits

0xdc67,	// (0x0000dc67) vkb2_area_keypad_pane

0xdca5,	// (0x0000dca5) vkb2_area_top_pane_ParamLimits

0xdca5,	// (0x0000dca5) vkb2_area_top_pane

0xdd21,	// (0x0000dd21) vkb2_top_entry_pane_ParamLimits

0xdd21,	// (0x0000dd21) vkb2_top_entry_pane

0xdd4e,	// (0x0000dd4e) vkb2_top_grid_left_pane_ParamLimits

0xdd4e,	// (0x0000dd4e) vkb2_top_grid_left_pane

0xdd6e,	// (0x0000dd6e) vkb2_top_grid_right_pane_ParamLimits

0xdd6e,	// (0x0000dd6e) vkb2_top_grid_right_pane

0x856e,	// (0x0000856e) vkb2_cell_keypad_pane_ParamLimits

0x856e,	// (0x0000856e) vkb2_cell_keypad_pane

0xddb4,	// (0x0000ddb4) vkb2_area_bottom_grid_pane_ParamLimits

0xddb4,	// (0x0000ddb4) vkb2_area_bottom_grid_pane

0xddda,	// (0x0000ddda) vkb2_area_bottom_pane_g1_ParamLimits

0xddda,	// (0x0000ddda) vkb2_area_bottom_pane_g1

0xde00,	// (0x0000de00) vkb2_area_bottom_pane_g2_ParamLimits

0xde00,	// (0x0000de00) vkb2_area_bottom_pane_g2

0xde31,	// (0x0000de31) vkb2_area_bottom_pane_g3_ParamLimits

0xde31,	// (0x0000de31) vkb2_area_bottom_pane_g3

0x0002,

0xec56,	// (0x0000ec56) vkb2_area_bottom_pane_g_ParamLimits

0xec56,	// (0x0000ec56) vkb2_area_bottom_pane_g

0x86e6,	// (0x000086e6) vkb2_top_cell_left_pane_ParamLimits

0x86e6,	// (0x000086e6) vkb2_top_cell_left_pane

0xde87,	// (0x0000de87) vkb2_top_entry_pane_g1_ParamLimits

0xde87,	// (0x0000de87) vkb2_top_entry_pane_g1

0xde95,	// (0x0000de95) vkb2_top_entry_pane_t1_ParamLimits

0xde95,	// (0x0000de95) vkb2_top_entry_pane_t1

0x874e,	// (0x0000874e) vkb2_top_entry_pane_t2_ParamLimits

0x874e,	// (0x0000874e) vkb2_top_entry_pane_t2

0x8780,	// (0x00008780) vkb2_top_entry_pane_t3_ParamLimits

0x8780,	// (0x00008780) vkb2_top_entry_pane_t3

0x0002,

0xec5d,	// (0x0000ec5d) vkb2_top_entry_pane_t_ParamLimits

0xec5d,	// (0x0000ec5d) vkb2_top_entry_pane_t

0xdece,	// (0x0000dece) vkb2_top_grid_right_pane_g1_ParamLimits

0xdece,	// (0x0000dece) vkb2_top_grid_right_pane_g1

0x87d9,	// (0x000087d9) vkb2_top_grid_right_pane_g2_ParamLimits

0x87d9,	// (0x000087d9) vkb2_top_grid_right_pane_g2

0x87f1,	// (0x000087f1) vkb2_top_grid_right_pane_g3_ParamLimits

0x87f1,	// (0x000087f1) vkb2_top_grid_right_pane_g3

0xdee4,	// (0x0000dee4) vkb2_top_grid_right_pane_g4_ParamLimits

0xdee4,	// (0x0000dee4) vkb2_top_grid_right_pane_g4

0x0003,

0xec64,	// (0x0000ec64) vkb2_top_grid_right_pane_g_ParamLimits

0xec64,	// (0x0000ec64) vkb2_top_grid_right_pane_g

0x881f,	// (0x0000881f) vkb2_top_cell_left_pane_g1

0x8836,	// (0x00008836) vkb2_cell_keypad_pane_g1_ParamLimits

0x8836,	// (0x00008836) vkb2_cell_keypad_pane_g1

0x8844,	// (0x00008844) vkb2_cell_keypad_pane_t1_ParamLimits

0x8844,	// (0x00008844) vkb2_cell_keypad_pane_t1

0x885b,	// (0x0000885b) vkb2_cell_bottom_grid_pane_ParamLimits

0x885b,	// (0x0000885b) vkb2_cell_bottom_grid_pane

0x8894,	// (0x00008894) vkb2_cell_bottom_grid_pane_g1

0xd886,	// (0x0000d886) aid_call2_pane_cp02

0xd88e,	// (0x0000d88e) aid_call_pane_cp02

0xd896,	// (0x0000d896) clock_digital_number_pane_cp10

0xd89e,	// (0x0000d89e) clock_digital_number_pane_cp11

0xd8a6,	// (0x0000d8a6) clock_digital_number_pane_cp12

0xd8ae,	// (0x0000d8ae) clock_digital_number_pane_cp13

0xd8b6,	// (0x0000d8b6) clock_digital_separator_pane_cp10

0x1b2e,	// (0x00001b2e) popup_clock_digital_analogue_window_cp2_g1

0x1b2e,	// (0x00001b2e) popup_clock_digital_analogue_window_cp2_g2

0xd8be,	// (0x0000d8be) popup_clock_digital_analogue_window_cp2_g3

0x1b2e,	// (0x00001b2e) popup_clock_digital_analogue_window_cp2_g4

0xd8be,	// (0x0000d8be) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xec31,	// (0x0000ec31) popup_clock_digital_analogue_window_cp2_g

0xd8c6,	// (0x0000d8c6) popup_clock_digital_analogue_window_cp2_t1

0xd8d4,	// (0x0000d8d4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xec3c,	// (0x0000ec3c) popup_clock_digital_analogue_window_cp2_t

0x5e93,	// (0x00005e93) clock_digital_number_pane_cp10_g1

0x5e93,	// (0x00005e93) clock_digital_number_pane_cp10_g2

0x0001,

0xa918,	// (0x0000a918) clock_digital_number_pane_cp10_g

0x5e93,	// (0x00005e93) clock_digital_separator_pane_cp10_g1

0x5e93,	// (0x00005e93) clock_digital_separator_pane_cp10_g2

0x0001,

0xa918,	// (0x0000a918) clock_digital_separator_pane_cp10_g

0x7e65,	// (0x00007e65) uniindi_top_pane_g3

0x7e76,	// (0x00007e76) uniindi_top_pane_g4

0x85d9,	// (0x000085d9) vkb2_row_keypad_pane_ParamLimits

0x85d9,	// (0x000085d9) vkb2_row_keypad_pane

0x88b0,	// (0x000088b0) vkb2_cell_t_keypad_pane_ParamLimits

0x88b0,	// (0x000088b0) vkb2_cell_t_keypad_pane

0x88bd,	// (0x000088bd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x88bd,	// (0x000088bd) vkb2_cell_t_keypad_pane_cp08

0x88cd,	// (0x000088cd) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x88cd,	// (0x000088cd) vkb2_cell_t_keypad_pane_cp09

0x88de,	// (0x000088de) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x88de,	// (0x000088de) vkb2_cell_t_keypad_pane_cp01

0x88ee,	// (0x000088ee) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x88ee,	// (0x000088ee) vkb2_cell_t_keypad_pane_cp02

0x88fe,	// (0x000088fe) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x88fe,	// (0x000088fe) vkb2_cell_t_keypad_pane_cp03

0x890e,	// (0x0000890e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x890e,	// (0x0000890e) vkb2_cell_t_keypad_pane_cp04

0x891e,	// (0x0000891e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x891e,	// (0x0000891e) vkb2_cell_t_keypad_pane_cp05

0x892e,	// (0x0000892e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x892e,	// (0x0000892e) vkb2_cell_t_keypad_pane_cp06

0x893e,	// (0x0000893e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x893e,	// (0x0000893e) vkb2_cell_t_keypad_pane_cp07

0x894e,	// (0x0000894e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x894e,	// (0x0000894e) vkb2_cell_t_keypad_pane_cp10

0x62d1,	// (0x000062d1) vkb2_cell_t_keypad_pane_g1

0x8963,	// (0x00008963) vkb2_cell_t_keypad_pane_t1

0x0020,	// (0x00000020) popup_grid_graphic2_window

0xdefa,	// (0x0000defa) aid_size_cell_graphic2_ParamLimits

0xdefa,	// (0x0000defa) aid_size_cell_graphic2

0xdf38,	// (0x0000df38) bg_popup_window_pane_cp21_ParamLimits

0xdf38,	// (0x0000df38) bg_popup_window_pane_cp21

0xdf46,	// (0x0000df46) graphic2_pages_pane_ParamLimits

0xdf46,	// (0x0000df46) graphic2_pages_pane

0xdf8f,	// (0x0000df8f) grid_graphic2_control_pane_ParamLimits

0xdf8f,	// (0x0000df8f) grid_graphic2_control_pane

0xdfcd,	// (0x0000dfcd) grid_graphic2_pane_ParamLimits

0xdfcd,	// (0x0000dfcd) grid_graphic2_pane

0xe03c,	// (0x0000e03c) cell_graphic2_pane

0x0020,	// (0x00000020) main_comp_mode_pane

0x762e,	// (0x0000762e) list_ai3_gene_pane_ParamLimits

0xd572,	// (0x0000d572) bg_popup_window_pane_cp19_ParamLimits

0x79fd,	// (0x000079fd) bg_touch_area_indi_pane_ParamLimits

0x79fd,	// (0x000079fd) bg_touch_area_indi_pane

0x7a13,	// (0x00007a13) bg_touch_area_indi_pane_cp01_ParamLimits

0x7a13,	// (0x00007a13) bg_touch_area_indi_pane_cp01

0x7a29,	// (0x00007a29) bg_touch_area_indi_pane_cp02_ParamLimits

0x7a29,	// (0x00007a29) bg_touch_area_indi_pane_cp02

0x7a3f,	// (0x00007a3f) bg_touch_area_indi_pane_cp03_ParamLimits

0x7a3f,	// (0x00007a3f) bg_touch_area_indi_pane_cp03

0x7a55,	// (0x00007a55) popup_slider_window_g1_ParamLimits

0x7a71,	// (0x00007a71) popup_slider_window_g2_ParamLimits

0x7a8d,	// (0x00007a8d) popup_slider_window_g3_ParamLimits

0xec15,	// (0x0000ec15) popup_slider_window_g_ParamLimits

0x7ae9,	// (0x00007ae9) popup_slider_window_t1_ParamLimits

0x7b5b,	// (0x00007b5b) small_volume_slider_vertical_pane_ParamLimits

0xe03c,	// (0x0000e03c) cell_graphic2_pane_ParamLimits

0xe087,	// (0x0000e087) bg_button_pane_cp10_ParamLimits

0xe087,	// (0x0000e087) bg_button_pane_cp10

0xe098,	// (0x0000e098) bg_button_pane_cp11_ParamLimits

0xe098,	// (0x0000e098) bg_button_pane_cp11

0xe0a9,	// (0x0000e0a9) graphic2_pages_pane_g1_ParamLimits

0xe0a9,	// (0x0000e0a9) graphic2_pages_pane_g1

0xe0c4,	// (0x0000e0c4) graphic2_pages_pane_g2_ParamLimits

0xe0c4,	// (0x0000e0c4) graphic2_pages_pane_g2

0x0001,

0xec72,	// (0x0000ec72) graphic2_pages_pane_g_ParamLimits

0xec72,	// (0x0000ec72) graphic2_pages_pane_g

0xe0dc,	// (0x0000e0dc) graphic2_pages_pane_t1_ParamLimits

0xe0dc,	// (0x0000e0dc) graphic2_pages_pane_t1

0xe0f4,	// (0x0000e0f4) cell_graphic2_control_pane_ParamLimits

0xe0f4,	// (0x0000e0f4) cell_graphic2_control_pane

0xe11e,	// (0x0000e11e) cell_graphic2_pane_g1_ParamLimits

0xe11e,	// (0x0000e11e) cell_graphic2_pane_g1

0x612e,	// (0x0000612e) cell_graphic2_pane_g2_ParamLimits

0x612e,	// (0x0000612e) cell_graphic2_pane_g2

0xe12b,	// (0x0000e12b) cell_graphic2_pane_g3_ParamLimits

0xe12b,	// (0x0000e12b) cell_graphic2_pane_g3

0x613b,	// (0x0000613b) cell_graphic2_pane_g4_ParamLimits

0x613b,	// (0x0000613b) cell_graphic2_pane_g4

0xe138,	// (0x0000e138) cell_graphic2_pane_g5_ParamLimits

0xe138,	// (0x0000e138) cell_graphic2_pane_g5

0x0004,

0xec77,	// (0x0000ec77) cell_graphic2_pane_g_ParamLimits

0xec77,	// (0x0000ec77) cell_graphic2_pane_g

0xe155,	// (0x0000e155) cell_graphic2_pane_t1_ParamLimits

0xe155,	// (0x0000e155) cell_graphic2_pane_t1

0x41e0,	// (0x000041e0) grid_highlight_pane_cp11_ParamLimits

0x41e0,	// (0x000041e0) grid_highlight_pane_cp11

0x07a6,	// (0x000007a6) bg_button_pane_cp05

0xe18a,	// (0x0000e18a) cell_graphic2_control_pane_g1

0x5e93,	// (0x00005e93) bg_touch_area_indi_pane_g1

0x8be4,	// (0x00008be4) aid_cmod_rocker_key_size

0x8bee,	// (0x00008bee) aid_cmode_itu_key_size

0x8bf8,	// (0x00008bf8) main_cmode_video_pane

0x8c00,	// (0x00008c00) main_comp_mode_itu_pane

0x8c0a,	// (0x00008c0a) main_comp_mode_rocker_pane

0x8c12,	// (0x00008c12) cell_cmode_rocker_pane_ParamLimits

0x8c12,	// (0x00008c12) cell_cmode_rocker_pane

0x8c24,	// (0x00008c24) cell_cmode_itu_pane_ParamLimits

0x8c24,	// (0x00008c24) cell_cmode_itu_pane

0x11fa,	// (0x000011fa) bg_button_pane_cp06_ParamLimits

0x11fa,	// (0x000011fa) bg_button_pane_cp06

0x62d1,	// (0x000062d1) cell_cmode_rocker_pane_g1_ParamLimits

0x62d1,	// (0x000062d1) cell_cmode_rocker_pane_g1

0x7ccf,	// (0x00007ccf) cell_cmode_rocker_pane_g2_ParamLimits

0x7ccf,	// (0x00007ccf) cell_cmode_rocker_pane_g2

0x0001,

0xab8c,	// (0x0000ab8c) cell_cmode_rocker_pane_g_ParamLimits

0xab8c,	// (0x0000ab8c) cell_cmode_rocker_pane_g

0x0020,	// (0x00000020) bg_button_pane_cp07

0x8c39,	// (0x00008c39) cell_cmode_itu_pane_g1

0x8c42,	// (0x00008c42) cell_cmode_itu_pane_t1

0x8c50,	// (0x00008c50) cell_cmode_itu_pane_t2

0x0001,

0xab91,	// (0x0000ab91) cell_cmode_itu_pane_t

0x7ee7,	// (0x00007ee7) aid_touch_ctrl_left

0x7eef,	// (0x00007eef) aid_touch_ctrl_right

0x0020,	// (0x00000020) compa_mode_pane

0xe1b2,	// (0x0000e1b2) aid_cmod_rocker_key_size_cp

0xe1bc,	// (0x0000e1bc) aid_cmode_itu_key_size_cp

0x8c72,	// (0x00008c72) compa_mode_pane_g1

0x8c7a,	// (0x00008c7a) compa_mode_pane_g2

0x8c82,	// (0x00008c82) compa_mode_pane_g3

0x0002,

0xab96,	// (0x0000ab96) compa_mode_pane_g

0xe1c6,	// (0x0000e1c6) main_comp_mode_itu_pane_cp

0xe1d0,	// (0x0000e1d0) main_comp_mode_rocker_pane_cp

0xe1da,	// (0x0000e1da) cell_cmode_itu_pane_cp_ParamLimits

0xe1da,	// (0x0000e1da) cell_cmode_itu_pane_cp

0xe1ef,	// (0x0000e1ef) cell_cmode_rocker_pane_cp_ParamLimits

0xe1ef,	// (0x0000e1ef) cell_cmode_rocker_pane_cp

0x11fa,	// (0x000011fa) bg_button_pane_cp06_cp_ParamLimits

0x11fa,	// (0x000011fa) bg_button_pane_cp06_cp

0x62d1,	// (0x000062d1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x62d1,	// (0x000062d1) cell_cmode_rocker_pane_g1_cp

0x5e93,	// (0x00005e93) cell_cmode_rocker_pane_g2_cp

0x0020,	// (0x00000020) bg_button_pane_cp07_cp

0xe201,	// (0x0000e201) cell_cmode_itu_pane_g1_cp

0xe20a,	// (0x0000e20a) cell_cmode_itu_pane_t1_cp

0xe218,	// (0x0000e218) cell_cmode_itu_pane_t2_cp

0xcb57,	// (0x0000cb57) settings_code_pane_cp2

0x0474,	// (0x00000474) bg_popup_window_pane_cp3_ParamLimits

0x09a4,	// (0x000009a4) heading_pane_cp3_ParamLimits

0x09b3,	// (0x000009b3) listscroll_popup_graphic_pane_ParamLimits

0x5efa,	// (0x00005efa) fep_hwr_aid_pane_ParamLimits

0x7bd3,	// (0x00007bd3) aid_touch_sctrl_top_ParamLimits

0x7be0,	// (0x00007be0) sctrl_sk_top_pane_g1_ParamLimits

0x62d1,	// (0x000062d1) sctrl_sk_top_pane_g2_ParamLimits

0xaacc,	// (0x0000aacc) sctrl_sk_top_pane_g_ParamLimits

0x7bed,	// (0x00007bed) sctrl_sk_top_pane_t1_ParamLimits

0x7bd3,	// (0x00007bd3) aid_touch_sctrl_bottom_ParamLimits

0x7bed,	// (0x00007bed) sctrl_sk_bottom_pane_t1_ParamLimits

0x7e31,	// (0x00007e31) aid_area_touch_clock

0xdce3,	// (0x0000dce3) aid_vkb2_area_top_pane_cell_ParamLimits

0xdce3,	// (0x0000dce3) aid_vkb2_area_top_pane_cell

0xdd8e,	// (0x0000dd8e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdd8e,	// (0x0000dd8e) aid_vkb2_area_bottom_pane_cell

0x8706,	// (0x00008706) popup_char_count_window

0x8ce6,	// (0x00008ce6) popup_char_count_window_g1

0x8cef,	// (0x00008cef) popup_char_count_window_g2

0x8cf8,	// (0x00008cf8) popup_char_count_window_g3

0x0002,

0xab9d,	// (0x0000ab9d) popup_char_count_window_g

0x8d01,	// (0x00008d01) popup_char_count_window_t1

0x83be,	// (0x000083be) popup_fep_char_preview_window_ParamLimits

0x83be,	// (0x000083be) popup_fep_char_preview_window

0xdd03,	// (0x0000dd03) vkb2_top_candi_pane_ParamLimits

0xdd03,	// (0x0000dd03) vkb2_top_candi_pane

0xe226,	// (0x0000e226) cell_vkb2_top_candi_pane_ParamLimits

0xe226,	// (0x0000e226) cell_vkb2_top_candi_pane

0x3a8b,	// (0x00003a8b) bg_popup_fep_char_preview_window_ParamLimits

0x3a8b,	// (0x00003a8b) bg_popup_fep_char_preview_window

0x8d48,	// (0x00008d48) popup_fep_char_preview_window_t1_ParamLimits

0x8d48,	// (0x00008d48) popup_fep_char_preview_window_t1

0x8d82,	// (0x00008d82) bg_popup_fep_char_preview_window_g1

0x8d8a,	// (0x00008d8a) bg_popup_fep_char_preview_window_g2

0x8d92,	// (0x00008d92) bg_popup_fep_char_preview_window_g3

0x8d9a,	// (0x00008d9a) bg_popup_fep_char_preview_window_g4

0x8da2,	// (0x00008da2) bg_popup_fep_char_preview_window_g5

0x8daa,	// (0x00008daa) bg_popup_fep_char_preview_window_g6

0x8db2,	// (0x00008db2) bg_popup_fep_char_preview_window_g7

0x8dba,	// (0x00008dba) bg_popup_fep_char_preview_window_g8

0x8dc2,	// (0x00008dc2) bg_popup_fep_char_preview_window_g9

0x0009,

0xec87,	// (0x0000ec87) bg_popup_fep_char_preview_window_g

0x62d1,	// (0x000062d1) cell_vkb2_top_candi_pane_g1_ParamLimits

0x62d1,	// (0x000062d1) cell_vkb2_top_candi_pane_g1

0x6628,	// (0x00006628) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6628,	// (0x00006628) cell_vkb2_top_candi_pane_g2

0x6649,	// (0x00006649) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6649,	// (0x00006649) cell_vkb2_top_candi_pane_g3

0x8dd2,	// (0x00008dd2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8dd2,	// (0x00008dd2) cell_vkb2_top_candi_pane_g4

0x8df3,	// (0x00008df3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8df3,	// (0x00008df3) cell_vkb2_top_candi_pane_g5

0x7ccf,	// (0x00007ccf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7ccf,	// (0x00007ccf) cell_vkb2_top_candi_pane_g6

0x0005,

0xabb9,	// (0x0000abb9) cell_vkb2_top_candi_pane_g_ParamLimits

0xabb9,	// (0x0000abb9) cell_vkb2_top_candi_pane_g

0x8e14,	// (0x00008e14) cell_vkb2_top_candi_pane_t1

0x48b5,	// (0x000048b5) aid_size_touch_slider_mark_ParamLimits

0x48b5,	// (0x000048b5) aid_size_touch_slider_mark

0xdf7a,	// (0x0000df7a) grid_graphic2_catg_pane_ParamLimits

0xdf7a,	// (0x0000df7a) grid_graphic2_catg_pane

0xe011,	// (0x0000e011) popup_grid_graphic2_window_t1_ParamLimits

0xe011,	// (0x0000e011) popup_grid_graphic2_window_t1

0xe026,	// (0x0000e026) popup_grid_graphic2_window_t2_ParamLimits

0xe026,	// (0x0000e026) popup_grid_graphic2_window_t2

0x0001,

0xec6d,	// (0x0000ec6d) popup_grid_graphic2_window_t_ParamLimits

0xec6d,	// (0x0000ec6d) popup_grid_graphic2_window_t

0x07a6,	// (0x000007a6) bg_button_pane_cp05_ParamLimits

0xe18a,	// (0x0000e18a) cell_graphic2_control_pane_g1_ParamLimits

0x7ead,	// (0x00007ead) cell_graphic2_catg_pane_ParamLimits

0x7ead,	// (0x00007ead) cell_graphic2_catg_pane

0x0020,	// (0x00000020) bg_button_pane_cp12

0xe278,	// (0x0000e278) cell_graphic2_catg_pane_g1

0x7dfd,	// (0x00007dfd) cell_tb_ext_pane_t1_ParamLimits

0x8796,	// (0x00008796) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8796,	// (0x00008796) vkb2_top_cell_right_narrow_pane

0x87ae,	// (0x000087ae) vkb2_top_cell_right_wide_pane_ParamLimits

0x87ae,	// (0x000087ae) vkb2_top_cell_right_wide_pane

0x5eec,	// (0x00005eec) bg_vkb2_func_pane_ParamLimits

0x5eec,	// (0x00005eec) bg_vkb2_func_pane

0x881f,	// (0x0000881f) vkb2_top_cell_left_pane_g1_ParamLimits

0x5eec,	// (0x00005eec) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5eec,	// (0x00005eec) bg_vkb2_fuc_pane_cp03

0x8894,	// (0x00008894) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x32bb,	// (0x000032bb) bg_vkb2_func_pane_g1

0x32c3,	// (0x000032c3) bg_vkb2_func_pane_g2

0x32d3,	// (0x000032d3) bg_vkb2_func_pane_g3

0x32cb,	// (0x000032cb) bg_vkb2_func_pane_g4

0x32db,	// (0x000032db) bg_vkb2_func_pane_g5

0x32e3,	// (0x000032e3) bg_vkb2_func_pane_g6

0x32eb,	// (0x000032eb) bg_vkb2_func_pane_g7

0x32f3,	// (0x000032f3) bg_vkb2_func_pane_g8

0x32b3,	// (0x000032b3) bg_vkb2_func_pane_g9

0x0008,

0xabc6,	// (0x0000abc6) bg_vkb2_func_pane_g

0x5eec,	// (0x00005eec) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5eec,	// (0x00005eec) bg_vkb2_fuc_pane_cp01

0x881f,	// (0x0000881f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x881f,	// (0x0000881f) vkb2_top_cell_right_wide_pane_g1

0x5eec,	// (0x00005eec) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5eec,	// (0x00005eec) bg_vkb2_fuc_pane_cp02

0x8894,	// (0x00008894) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8894,	// (0x00008894) vkb2_top_cell_right_narrow_pane_g1

0xd4c0,	// (0x0000d4c0) aid_touch_area_decrease_ParamLimits

0xd4c0,	// (0x0000d4c0) aid_touch_area_decrease

0xd4ee,	// (0x0000d4ee) aid_touch_area_increase_ParamLimits

0xd4ee,	// (0x0000d4ee) aid_touch_area_increase

0xd516,	// (0x0000d516) aid_touch_area_mute_ParamLimits

0xd516,	// (0x0000d516) aid_touch_area_mute

0xd53e,	// (0x0000d53e) aid_touch_area_slider_ParamLimits

0xd53e,	// (0x0000d53e) aid_touch_area_slider

0xd57e,	// (0x0000d57e) popup_slider_window_g4_ParamLimits

0xd57e,	// (0x0000d57e) popup_slider_window_g4

0xd5a6,	// (0x0000d5a6) popup_slider_window_g5_ParamLimits

0xd5a6,	// (0x0000d5a6) popup_slider_window_g5

0xd5da,	// (0x0000d5da) popup_slider_window_g6_ParamLimits

0xd5da,	// (0x0000d5da) popup_slider_window_g6

0x7b15,	// (0x00007b15) popup_slider_window_t2_ParamLimits

0x7b15,	// (0x00007b15) popup_slider_window_t2

0x0001,

0xaac0,	// (0x0000aac0) popup_slider_window_t_ParamLimits

0xaac0,	// (0x0000aac0) popup_slider_window_t

0xd5f6,	// (0x0000d5f6) slider_pane_ParamLimits

0xd5f6,	// (0x0000d5f6) slider_pane

0x8e45,	// (0x00008e45) slider_pane_g1_ParamLimits

0x8e45,	// (0x00008e45) slider_pane_g1

0x8e59,	// (0x00008e59) slider_pane_g2_ParamLimits

0x8e59,	// (0x00008e59) slider_pane_g2

0x8e6f,	// (0x00008e6f) slider_pane_g3_ParamLimits

0x8e6f,	// (0x00008e6f) slider_pane_g3

0x0003,

0xabd9,	// (0x0000abd9) slider_pane_g_ParamLimits

0xabd9,	// (0x0000abd9) slider_pane_g

0xc23d,	// (0x0000c23d) popup_tb_float_extension_window_ParamLimits

0xc23d,	// (0x0000c23d) popup_tb_float_extension_window

0x8e9b,	// (0x00008e9b) aid_size_cell_tb_float_ext

0x0020,	// (0x00000020) bg_popup_sub_window_cp28

0x8ea6,	// (0x00008ea6) grid_tb_float_ext_pane

0x8eae,	// (0x00008eae) cell_tb_float_ext_pane_ParamLimits

0x8eae,	// (0x00008eae) cell_tb_float_ext_pane

0x8ec6,	// (0x00008ec6) cell_tb_float_ext_pane_g1

0x8ecf,	// (0x00008ecf) grid_highlight_pane_cp12

0xce92,	// (0x0000ce92) cell_last_hwr_side_pane_ParamLimits

0xce92,	// (0x0000ce92) cell_last_hwr_side_pane

0x5e93,	// (0x00005e93) cell_last_hwr_side_pane_g1

0x8ed8,	// (0x00008ed8) cell_last_hwr_side_pane_g2

0x0001,

0xabe2,	// (0x0000abe2) cell_last_hwr_side_pane_g

0xde62,	// (0x0000de62) vkb2_area_bottom_space_btn_pane_ParamLimits

0xde62,	// (0x0000de62) vkb2_area_bottom_space_btn_pane

0x62d1,	// (0x000062d1) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8963,	// (0x00008963) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8e14,	// (0x00008e14) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8ee1,	// (0x00008ee1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8ee1,	// (0x00008ee1) vkb2_area_bottom_space_btn_pane_g1

0x8f17,	// (0x00008f17) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8f17,	// (0x00008f17) vkb2_area_bottom_space_btn_pane_g2

0x8f4d,	// (0x00008f4d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8f4d,	// (0x00008f4d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xabe7,	// (0x0000abe7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xabe7,	// (0x0000abe7) vkb2_area_bottom_space_btn_pane_g

0x5fa9,	// (0x00005fa9) cel_fep_hwr_func_pane_ParamLimits

0x5fa9,	// (0x00005fa9) cel_fep_hwr_func_pane

0xce67,	// (0x0000ce67) cell_hwr_side_button_pane_ParamLimits

0xce67,	// (0x0000ce67) cell_hwr_side_button_pane

0x7e31,	// (0x00007e31) aid_area_touch_clock_ParamLimits

0x07a6,	// (0x000007a6) bg_uniindi_top_pane_ParamLimits

0x7e43,	// (0x00007e43) uniindi_top_pane_g1_ParamLimits

0x7e59,	// (0x00007e59) uniindi_top_pane_g2_ParamLimits

0x7e65,	// (0x00007e65) uniindi_top_pane_g3_ParamLimits

0x7e76,	// (0x00007e76) uniindi_top_pane_g4_ParamLimits

0xaaf8,	// (0x0000aaf8) uniindi_top_pane_g_ParamLimits

0x7e83,	// (0x00007e83) uniindi_top_pane_t1_ParamLimits

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp01_ParamLimits

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp01

0x8f93,	// (0x00008f93) cel_fep_hwr_func_pane_g1_ParamLimits

0x8f93,	// (0x00008f93) cel_fep_hwr_func_pane_g1

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp02_ParamLimits

0x07a6,	// (0x000007a6) bg_vkb2_func_pane_cp02

0x8f93,	// (0x00008f93) cell_hwr_side_button_pane_g1_ParamLimits

0x8f93,	// (0x00008f93) cell_hwr_side_button_pane_g1

0x30a0,	// (0x000030a0) status_pane_g4_ParamLimits

0x30a0,	// (0x000030a0) status_pane_g4

0x30b8,	// (0x000030b8) status_pane_t1

0x5c75,	// (0x00005c75) form2_midp_gauge_slider_cont_pane

0x5c7d,	// (0x00005c7d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xce43,	// (0x0000ce43) form2_midp_gauge_slider_pane_t2_ParamLimits

0xce55,	// (0x0000ce55) form2_midp_gauge_slider_pane_t3_ParamLimits

0xebb9,	// (0x0000ebb9) form2_midp_gauge_slider_pane_t_ParamLimits

0x5cb3,	// (0x00005cb3) form2_midp_slider_pane_ParamLimits

0x837e,	// (0x0000837e) aid_size_cell_func_vkb2_ParamLimits

0x837e,	// (0x0000837e) aid_size_cell_func_vkb2

0x8e87,	// (0x00008e87) slider_pane_g4_ParamLimits

0x8e87,	// (0x00008e87) slider_pane_g4

0xe281,	// (0x0000e281) form2_midp_gauge_slider_pane_t2_cp01

0xe28f,	// (0x0000e28f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe28f,	// (0x0000e28f) form2_midp_gauge_slider_pane_t3_cp01

0x8fcc,	// (0x00008fcc) form2_midp_slider_pane_cp01

0x0020,	// (0x00000020) navi_smil_pane

0x9000,	// (0x00009000) navi_smil_pane_g1

0x9008,	// (0x00009008) navi_smil_pane_t1

0x8fd5,	// (0x00008fd5) form2_midp_slider_pane_g1

0x8fde,	// (0x00008fde) form2_midp_slider_pane_g2

0x8fe6,	// (0x00008fe6) form2_midp_slider_pane_g3

0x8fd5,	// (0x00008fd5) form2_midp_slider_pane_g4

0xe2ac,	// (0x0000e2ac) form2_midp_slider_pane_g5

0x0004,

0xec9c,	// (0x0000ec9c) form2_midp_slider_pane_g

0x8f83,	// (0x00008f83) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8f83,	// (0x00008f83) vkb2_area_bottom_space_btn_pane_g4

0xc3df,	// (0x0000c3df) lc0_navi_pane_ParamLimits

0xc3df,	// (0x0000c3df) lc0_navi_pane

0xc449,	// (0x0000c449) lc0_stat_indi_pane_ParamLimits

0xc449,	// (0x0000c449) lc0_stat_indi_pane

0xc45e,	// (0x0000c45e) ls0_title_pane_ParamLimits

0xc45e,	// (0x0000c45e) ls0_title_pane

0x11fa,	// (0x000011fa) bg_popup_sub_pane_cp14_ParamLimits

0x7e18,	// (0x00007e18) list_uniindi_pane_ParamLimits

0x7e24,	// (0x00007e24) uniindi_top_pane_ParamLimits

0x7ebf,	// (0x00007ebf) list_single_uniindi_pane_g1_ParamLimits

0x7ed2,	// (0x00007ed2) list_single_uniindi_pane_t1_ParamLimits

0xe2b5,	// (0x0000e2b5) lc0_stat_clock_pane_ParamLimits

0xe2b5,	// (0x0000e2b5) lc0_stat_clock_pane

0xe2c2,	// (0x0000e2c2) lc0_stat_indi_pane_g1_ParamLimits

0xe2c2,	// (0x0000e2c2) lc0_stat_indi_pane_g1

0xe2cf,	// (0x0000e2cf) lc0_stat_indi_pane_g2_ParamLimits

0xe2cf,	// (0x0000e2cf) lc0_stat_indi_pane_g2

0x0001,

0xeca7,	// (0x0000eca7) lc0_stat_indi_pane_g_ParamLimits

0xeca7,	// (0x0000eca7) lc0_stat_indi_pane_g

0xe2dc,	// (0x0000e2dc) lc0_uni_indicator_pane_ParamLimits

0xe2dc,	// (0x0000e2dc) lc0_uni_indicator_pane

0x904a,	// (0x0000904a) ls0_title_pane_g1_ParamLimits

0x904a,	// (0x0000904a) ls0_title_pane_g1

0xe2e9,	// (0x0000e2e9) ls0_title_pane_t1_ParamLimits

0xe2e9,	// (0x0000e2e9) ls0_title_pane_t1

0xe317,	// (0x0000e317) lc0_uni_indicator_pane_g1_ParamLimits

0xe317,	// (0x0000e317) lc0_uni_indicator_pane_g1

0x90a6,	// (0x000090a6) lc0_stat_clock_pane_t1

0x0020,	// (0x00000020) main_ai5_pane

0x90b4,	// (0x000090b4) ai5_sk_pane_ParamLimits

0x90b4,	// (0x000090b4) ai5_sk_pane

0xe32c,	// (0x0000e32c) cell_ai5_widget_pane_ParamLimits

0xe32c,	// (0x0000e32c) cell_ai5_widget_pane

0x9137,	// (0x00009137) aid_size_cell_widget_grid

0x9144,	// (0x00009144) bg_ai5_widget_pane_ParamLimits

0x9144,	// (0x00009144) bg_ai5_widget_pane

0xe3b9,	// (0x0000e3b9) cell_ai5_widget_pane_g2

0xe3cd,	// (0x0000e3cd) cell_ai5_widget_pane_g3

0xe3e7,	// (0x0000e3e7) cell_ai5_widget_pane_g4

0xe3f7,	// (0x0000e3f7) cell_ai5_widget_pane_g5

0xe407,	// (0x0000e407) cell_ai5_widget_pane_g6

0xe413,	// (0x0000e413) cell_ai5_widget_pane_g7

0xe47f,	// (0x0000e47f) cell_ai5_widget_pane_t1_ParamLimits

0xe47f,	// (0x0000e47f) cell_ai5_widget_pane_t1

0xe49c,	// (0x0000e49c) cell_ai5_widget_pane_t2_ParamLimits

0xe49c,	// (0x0000e49c) cell_ai5_widget_pane_t2

0xe4b4,	// (0x0000e4b4) cell_ai5_widget_pane_t3_ParamLimits

0xe4b4,	// (0x0000e4b4) cell_ai5_widget_pane_t3

0xe4cc,	// (0x0000e4cc) cell_ai5_widget_pane_t4_ParamLimits

0xe4cc,	// (0x0000e4cc) cell_ai5_widget_pane_t4

0xe4f2,	// (0x0000e4f2) cell_ai5_widget_pane_t5_ParamLimits

0xe4f2,	// (0x0000e4f2) cell_ai5_widget_pane_t5

0x92f3,	// (0x000092f3) cell_ai5_widget_pane_t6_ParamLimits

0x92f3,	// (0x000092f3) cell_ai5_widget_pane_t6

0x9305,	// (0x00009305) cell_ai5_widget_pane_t7_ParamLimits

0x9305,	// (0x00009305) cell_ai5_widget_pane_t7

0xe511,	// (0x0000e511) cell_ai5_widget_pane_t8_ParamLimits

0xe511,	// (0x0000e511) cell_ai5_widget_pane_t8

0x000b,

0xecc7,	// (0x0000ecc7) cell_ai5_widget_pane_t_ParamLimits

0xecc7,	// (0x0000ecc7) cell_ai5_widget_pane_t

0xe595,	// (0x0000e595) grid_ai5_widget_pane

0x11fa,	// (0x000011fa) highlight_cell_ai5_widget_pane_ParamLimits

0x11fa,	// (0x000011fa) highlight_cell_ai5_widget_pane

0xe5a1,	// (0x0000e5a1) ai5_sk_left_pane

0xe5ab,	// (0x0000e5ab) ai5_sk_middle_pane

0xe5b5,	// (0x0000e5b5) ai5_sk_right_pane

0x93d1,	// (0x000093d1) bg_ai5_widget_pane_g1_ParamLimits

0x93d1,	// (0x000093d1) bg_ai5_widget_pane_g1

0x93dd,	// (0x000093dd) bg_ai5_widget_pane_g2_ParamLimits

0x93dd,	// (0x000093dd) bg_ai5_widget_pane_g2

0x93e9,	// (0x000093e9) bg_ai5_widget_pane_g3_ParamLimits

0x93e9,	// (0x000093e9) bg_ai5_widget_pane_g3

0x93f5,	// (0x000093f5) bg_ai5_widget_pane_g4_ParamLimits

0x93f5,	// (0x000093f5) bg_ai5_widget_pane_g4

0x9401,	// (0x00009401) bg_ai5_widget_pane_g5_ParamLimits

0x9401,	// (0x00009401) bg_ai5_widget_pane_g5

0x940d,	// (0x0000940d) bg_ai5_widget_pane_g6_ParamLimits

0x940d,	// (0x0000940d) bg_ai5_widget_pane_g6

0x9419,	// (0x00009419) bg_ai5_widget_pane_g7_ParamLimits

0x9419,	// (0x00009419) bg_ai5_widget_pane_g7

0x9425,	// (0x00009425) bg_ai5_widget_pane_g8_ParamLimits

0x9425,	// (0x00009425) bg_ai5_widget_pane_g8

0x9431,	// (0x00009431) bg_ai5_widget_pane_g9_ParamLimits

0x9431,	// (0x00009431) bg_ai5_widget_pane_g9

0x0008,

0xac34,	// (0x0000ac34) bg_ai5_widget_pane_g_ParamLimits

0xac34,	// (0x0000ac34) bg_ai5_widget_pane_g

0x9461,	// (0x00009461) cell_shortcut_ai5_widget_pane_ParamLimits

0x9461,	// (0x00009461) cell_shortcut_ai5_widget_pane

0x9472,	// (0x00009472) bg_cell_shortcut_ai5_widget_pane

0x0960,	// (0x00000960) cell_grid_ai5_widget_pane_g1

0x2345,	// (0x00002345) highlight_cell_shortcut_ai5_widget_pane

0x32c3,	// (0x000032c3) ai5_sk_left_pane_g1

0x947a,	// (0x0000947a) ai5_sk_left_pane_g2

0x9482,	// (0x00009482) ai5_sk_left_pane_g3

0x948a,	// (0x0000948a) ai5_sk_left_pane_g4

0x0003,

0xac47,	// (0x0000ac47) ai5_sk_left_pane_g

0x9492,	// (0x00009492) ai5_sk_left_pane_t1

0x32bb,	// (0x000032bb) ai5_sk_right_pane_g1

0x94a0,	// (0x000094a0) ai5_sk_right_pane_g2

0x94a8,	// (0x000094a8) ai5_sk_right_pane_g3

0x94b0,	// (0x000094b0) ai5_sk_right_pane_g4

0x0003,

0xac50,	// (0x0000ac50) ai5_sk_right_pane_g

0x94b8,	// (0x000094b8) ai5_sk_right_pane_t1

0x32bb,	// (0x000032bb) ai5_sk_middle_pane_g1

0x32c3,	// (0x000032c3) ai5_sk_middle_pane_g2

0x32db,	// (0x000032db) ai5_sk_middle_pane_g3

0x94a8,	// (0x000094a8) ai5_sk_middle_pane_g4

0x9482,	// (0x00009482) ai5_sk_middle_pane_g5

0x94c6,	// (0x000094c6) ai5_sk_middle_pane_g6

0xe5bf,	// (0x0000e5bf) ai5_sk_middle_pane_g7

0x0006,

0xece0,	// (0x0000ece0) ai5_sk_middle_pane_g

0xc2dd,	// (0x0000c2dd) aid_touch_area_size_lc0_ParamLimits

0xc2dd,	// (0x0000c2dd) aid_touch_area_size_lc0

0x666a,	// (0x0000666a) cell_hwr_candidate_pane_t1_ParamLimits

0x2d9d,	// (0x00002d9d) aid_touch_navi_pane

0xc54a,	// (0x0000c54a) status_dt_navi_pane_ParamLimits

0xc54a,	// (0x0000c54a) status_dt_navi_pane

0xc562,	// (0x0000c562) status_dt_sta_pane_ParamLimits

0xc562,	// (0x0000c562) status_dt_sta_pane

0xe5c7,	// (0x0000e5c7) dt_sta_controll_pane

0xe5d4,	// (0x0000e5d4) dt_sta_indi_pane

0xe5e1,	// (0x0000e5e1) dt_sta_title_pane

0x07a6,	// (0x000007a6) bg_dt_sta_indi_pane_ParamLimits

0x07a6,	// (0x000007a6) bg_dt_sta_indi_pane

0xe5f3,	// (0x0000e5f3) dt_sta_battery_pane

0xe5fb,	// (0x0000e5fb) dt_sta_indi_pane_g1

0xe604,	// (0x0000e604) dt_sta_indi_pane_g2

0xe60d,	// (0x0000e60d) dt_sta_indi_pane_g3

0x0002,

0xecef,	// (0x0000ecef) dt_sta_indi_pane_g

0xe616,	// (0x0000e616) dt_sta_signal_pane

0x11fa,	// (0x000011fa) bg_dt_sta_title_pane_ParamLimits

0x11fa,	// (0x000011fa) bg_dt_sta_title_pane

0xe61f,	// (0x0000e61f) dt_sta_title_pane_g1

0xe627,	// (0x0000e627) dt_sta_title_pane_t1_ParamLimits

0xe627,	// (0x0000e627) dt_sta_title_pane_t1

0x0020,	// (0x00000020) bg_dt_sta_control_pane

0xe63c,	// (0x0000e63c) dt_sta_controll_pane_g1

0xe645,	// (0x0000e645) bg_dt_sta_title_pane_g1

0xe64e,	// (0x0000e64e) bg_dt_sta_title_pane_g2

0xe657,	// (0x0000e657) bg_dt_sta_title_pane_g3

0x0002,

0xecf6,	// (0x0000ecf6) bg_dt_sta_title_pane_g

0x5e93,	// (0x00005e93) bg_dt_sta_indi_pane_g1

0xe660,	// (0x0000e660) dt_sta_signal_pane_g1

0xe668,	// (0x0000e668) dt_sta_signal_pane_g2

0x0001,

0xecfd,	// (0x0000ecfd) dt_sta_signal_pane_g

0x9584,	// (0x00009584) dt_sta_battery_pane_g1

0x958d,	// (0x0000958d) dt_sta_battery_pane_t1

0x5e93,	// (0x00005e93) bg_dt_sta_control_pane_g1

0x1cf6,	// (0x00001cf6) fep_china_uni_eep_pane

0x1cfe,	// (0x00001cfe) fep_china_uni_entry_pane_ParamLimits

0x1d0e,	// (0x00001d0e) popup_fep_china_uni_window_g1_ParamLimits

0x1d1e,	// (0x00001d1e) popup_fep_china_uni_window_g2_ParamLimits

0x1d1e,	// (0x00001d1e) popup_fep_china_uni_window_g2

0x0001,

0xa4f4,	// (0x0000a4f4) popup_fep_china_uni_window_g_ParamLimits

0xa4f4,	// (0x0000a4f4) popup_fep_china_uni_window_g

0x959c,	// (0x0000959c) fep_china_uni_eep_pane_g1

0x95a4,	// (0x000095a4) fep_china_uni_eep_pane_t1

0x8ff7,	// (0x00008ff7) aid_touch_area_size_smil_player

0x2eda,	// (0x00002eda) lc0_clock_pane

0x30ac,	// (0x000030ac) status_pane_g5_ParamLimits

0x30ac,	// (0x000030ac) status_pane_g5

0xbe71,	// (0x0000be71) popup_keymap_window

0x3074,	// (0x00003074) status_icon_pane

0xe3cd,	// (0x0000e3cd) cell_ai5_widget_pane_g3_ParamLimits

0xe3e7,	// (0x0000e3e7) cell_ai5_widget_pane_g4_ParamLimits

0xe3f7,	// (0x0000e3f7) cell_ai5_widget_pane_g5_ParamLimits

0xe41f,	// (0x0000e41f) cell_ai5_widget_pane_g8_ParamLimits

0xe41f,	// (0x0000e41f) cell_ai5_widget_pane_g8

0xe433,	// (0x0000e433) cell_ai5_widget_pane_g9_ParamLimits

0xe433,	// (0x0000e433) cell_ai5_widget_pane_g9

0xe447,	// (0x0000e447) cell_ai5_widget_pane_g10_ParamLimits

0xe447,	// (0x0000e447) cell_ai5_widget_pane_g10

0x95b3,	// (0x000095b3) status_icon_pane_g1

0x0020,	// (0x00000020) bg_popup_sub_pane_cp13

0x95bb,	// (0x000095bb) popup_keymap_window_t1

0xbbc1,	// (0x0000bbc1) control_pane_g6_ParamLimits

0xbbc1,	// (0x0000bbc1) control_pane_g6

0xbbce,	// (0x0000bbce) control_pane_g7_ParamLimits

0xbbce,	// (0x0000bbce) control_pane_g7

0xbbdb,	// (0x0000bbdb) control_pane_g8_ParamLimits

0xbbdb,	// (0x0000bbdb) control_pane_g8

0xe5c7,	// (0x0000e5c7) dt_sta_controll_pane_ParamLimits

0xe5d4,	// (0x0000e5d4) dt_sta_indi_pane_ParamLimits

0xe5e1,	// (0x0000e5e1) dt_sta_title_pane_ParamLimits

0x0c31,	// (0x00000c31) aid_size_touch_scroll_bar_cale

0x026c,	// (0x0000026c) popup_discreet_window_ParamLimits

0x026c,	// (0x0000026c) popup_discreet_window

0xae15,	// (0x0000ae15) popup_sk_window

0x3a8b,	// (0x00003a8b) bg_popup_sub_pane_cp28_ParamLimits

0x3a8b,	// (0x00003a8b) bg_popup_sub_pane_cp28

0x95c9,	// (0x000095c9) popup_discreet_window_g1_ParamLimits

0x95c9,	// (0x000095c9) popup_discreet_window_g1

0x95e9,	// (0x000095e9) popup_discreet_window_t1_ParamLimits

0x95e9,	// (0x000095e9) popup_discreet_window_t1

0x9607,	// (0x00009607) popup_discreet_window_t2_ParamLimits

0x9607,	// (0x00009607) popup_discreet_window_t2

0x0002,

0xac7b,	// (0x0000ac7b) popup_discreet_window_t_ParamLimits

0xac7b,	// (0x0000ac7b) popup_discreet_window_t

0x9659,	// (0x00009659) popup_sk_window_g1

0x9662,	// (0x00009662) popup_sk_window_g2

0x0001,

0xac82,	// (0x0000ac82) popup_sk_window_g

0x966b,	// (0x0000966b) popup_sk_window_t1

0x9679,	// (0x00009679) popup_sk_window_t1_copy1

0xe3b9,	// (0x0000e3b9) cell_ai5_widget_pane_g2_ParamLimits

0xe523,	// (0x0000e523) cell_ai5_widget_pane_t9_ParamLimits

0xe523,	// (0x0000e523) cell_ai5_widget_pane_t9

0x0020,	// (0x00000020) main_fep_fshwr2_pane

0xe670,	// (0x0000e670) aid_fshwr2_btn_pane

0xe684,	// (0x0000e684) aid_fshwr2_syb_pane

0xe698,	// (0x0000e698) aid_fshwr2_txt_pane

0xe6a8,	// (0x0000e6a8) fshwr2_func_candi_pane

0xe6c0,	// (0x0000e6c0) fshwr2_hwr_syb_pane

0xe6d8,	// (0x0000e6d8) fshwr2_icf_pane

0x0020,	// (0x00000020) fshwr2_icf_bg_pane

0xe702,	// (0x0000e702) fshwr2_icf_pane_t1_ParamLimits

0xe702,	// (0x0000e702) fshwr2_icf_pane_t1

0x1b2e,	// (0x00001b2e) fshwr2_func_candi_pane_g1

0xe719,	// (0x0000e719) fshwr2_func_candi_row_pane_ParamLimits

0xe719,	// (0x0000e719) fshwr2_func_candi_row_pane

0xe73c,	// (0x0000e73c) cell_fshwr2_syb_pane_ParamLimits

0xe73c,	// (0x0000e73c) cell_fshwr2_syb_pane

0x8f93,	// (0x00008f93) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8f93,	// (0x00008f93) fshwr2_hwr_syb_pane_g1

0x0020,	// (0x00000020) bg_popup_call_pane_cp01

0xe75e,	// (0x0000e75e) fshwr2_func_candi_cell_pane_ParamLimits

0xe75e,	// (0x0000e75e) fshwr2_func_candi_cell_pane

0x387d,	// (0x0000387d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x387d,	// (0x0000387d) fshwr2_func_candi_cell_bg_pane

0xe79d,	// (0x0000e79d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe79d,	// (0x0000e79d) fshwr2_func_candi_cell_pane_g1

0xe7d4,	// (0x0000e7d4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe7d4,	// (0x0000e7d4) fshwr2_func_candi_cell_pane_t1

0x0020,	// (0x00000020) bg_button_pane_cp08

0x28b1,	// (0x000028b1) cell_fshwr2_syb_bg_pane

0xe7ef,	// (0x0000e7ef) cell_fshwr2_syb_bg_pane_g1

0xe7ff,	// (0x0000e7ff) cell_fshwr2_syb_bg_pane_t1

0x11fa,	// (0x000011fa) main_tmo_pane

0xc963,	// (0x0000c963) uni_indicator_pane_g1_ParamLimits

0xc977,	// (0x0000c977) uni_indicator_pane_g2_ParamLimits

0xc98c,	// (0x0000c98c) uni_indicator_pane_g3_ParamLimits

0x46bb,	// (0x000046bb) uni_indicator_pane_g4_ParamLimits

0x46bb,	// (0x000046bb) uni_indicator_pane_g4

0x46cf,	// (0x000046cf) uni_indicator_pane_g5_ParamLimits

0x46cf,	// (0x000046cf) uni_indicator_pane_g5

0x46cf,	// (0x000046cf) uni_indicator_pane_g6_ParamLimits

0x46cf,	// (0x000046cf) uni_indicator_pane_g6

0xeb29,	// (0x0000eb29) uni_indicator_pane_g_ParamLimits

0xd4a4,	// (0x0000d4a4) popup_tmo_note_window_ParamLimits

0xd4a4,	// (0x0000d4a4) popup_tmo_note_window

0x11fa,	// (0x000011fa) fshwr2_bg_pane

0xe7c5,	// (0x0000e7c5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe7c5,	// (0x0000e7c5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xed02,	// (0x0000ed02) fshwr2_func_candi_cell_pane_g_ParamLimits

0xed02,	// (0x0000ed02) fshwr2_func_candi_cell_pane_g

0x5e93,	// (0x00005e93) bg_popup_window_pane_cp01

0x97f5,	// (0x000097f5) bg_popup_window_pane_g1_cp01

0x97fe,	// (0x000097fe) bg_popup_window_pane_cp22_ParamLimits

0x97fe,	// (0x000097fe) bg_popup_window_pane_cp22

0x980c,	// (0x0000980c) listscroll_tmo_link_pane_ParamLimits

0x980c,	// (0x0000980c) listscroll_tmo_link_pane

0x984c,	// (0x0000984c) popup_tmo_note_window_g1_ParamLimits

0x984c,	// (0x0000984c) popup_tmo_note_window_g1

0x9859,	// (0x00009859) tmo_note_info_pane_ParamLimits

0x9859,	// (0x00009859) tmo_note_info_pane

0xe815,	// (0x0000e815) list_tmo_note_info_pane_g1_ParamLimits

0xe815,	// (0x0000e815) list_tmo_note_info_pane_g1

0x988a,	// (0x0000988a) list_tmo_note_info_pane_g2_ParamLimits

0x988a,	// (0x0000988a) list_tmo_note_info_pane_g2

0x0001,

0xed07,	// (0x0000ed07) list_tmo_note_info_pane_g_ParamLimits

0xed07,	// (0x0000ed07) list_tmo_note_info_pane_g

0x98a6,	// (0x000098a6) list_tmo_note_info_text_pane_ParamLimits

0x98a6,	// (0x000098a6) list_tmo_note_info_text_pane

0x9927,	// (0x00009927) list_tmo_link_pane

0x9934,	// (0x00009934) scroll_pane_cp20

0x9941,	// (0x00009941) list_single_tmo_link_pane_ParamLimits

0x9941,	// (0x00009941) list_single_tmo_link_pane

0x9951,	// (0x00009951) list_single_tmo_link_pane_t1

0x995f,	// (0x0000995f) list_tmo_note_info_text_pane_t1_ParamLimits

0x995f,	// (0x0000995f) list_tmo_note_info_text_pane_t1

0x1422,	// (0x00001422) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1422,	// (0x00001422) aid_size_touch_scroll_bar_cp01

0xb683,	// (0x0000b683) aid_size_touch_slider_marker

0xae09,	// (0x0000ae09) popup_settings_window_ParamLimits

0xae09,	// (0x0000ae09) popup_settings_window

0x28d7,	// (0x000028d7) popup_candi_list_indi_window

0x2d9d,	// (0x00002d9d) aid_touch_navi_pane_ParamLimits

0x7ba7,	// (0x00007ba7) rs_clock_indi_pane

0x7bb0,	// (0x00007bb0) sctrl_sk_bottom_pane_ParamLimits

0x7bc1,	// (0x00007bc1) sctrl_sk_top_pane_ParamLimits

0x83d8,	// (0x000083d8) popup_fep_tooltip_window

0x9137,	// (0x00009137) aid_size_cell_widget_grid_ParamLimits

0xe3a5,	// (0x0000e3a5) cell_ai5_widget_pane_g1_ParamLimits

0xe3a5,	// (0x0000e3a5) cell_ai5_widget_pane_g1

0xe407,	// (0x0000e407) cell_ai5_widget_pane_g6_ParamLimits

0xe413,	// (0x0000e413) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xecac,	// (0x0000ecac) cell_ai5_widget_pane_g_ParamLimits

0xecac,	// (0x0000ecac) cell_ai5_widget_pane_g

0xe552,	// (0x0000e552) cell_ai5_widget_pane_t10_ParamLimits

0xe552,	// (0x0000e552) cell_ai5_widget_pane_t10

0xe595,	// (0x0000e595) grid_ai5_widget_pane_ParamLimits

0x943d,	// (0x0000943d) cell_contacts_ai5_widget_pane_ParamLimits

0x943d,	// (0x0000943d) cell_contacts_ai5_widget_pane

0x961c,	// (0x0000961c) popup_discreet_window_t3_ParamLimits

0x961c,	// (0x0000961c) popup_discreet_window_t3

0xe6f0,	// (0x0000e6f0) popup_fshwr2_char_preview_window_ParamLimits

0xe6f0,	// (0x0000e6f0) popup_fshwr2_char_preview_window

0xe82c,	// (0x0000e82c) tmo_note_info_pane_t1

0xe841,	// (0x0000e841) tmo_note_info_pane_t2

0xe856,	// (0x0000e856) tmo_note_info_pane_t3

0x9903,	// (0x00009903) tmo_note_info_pane_t4

0x9915,	// (0x00009915) tmo_note_info_pane_t5

0x0004,

0xed0c,	// (0x0000ed0c) tmo_note_info_pane_t

0x9927,	// (0x00009927) list_tmo_link_pane_ParamLimits

0x9934,	// (0x00009934) scroll_pane_cp20_ParamLimits

0x0020,	// (0x00000020) bg_popup_fep_char_preview_window_cp01

0x9978,	// (0x00009978) popup_fshwr2_char_preview_window_t1

0x9986,	// (0x00009986) popup_candi_list_indi_window_g1

0x998f,	// (0x0000998f) bg_cell_contacts_ai5_widget_pane

0x999b,	// (0x0000999b) cell_contacts_ai5_widget_pane_g1

0x99b0,	// (0x000099b0) cell_contacts_ai5_widget_pane_g2

0x99bc,	// (0x000099bc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xac9c,	// (0x0000ac9c) cell_contacts_ai5_widget_pane_g

0x99c8,	// (0x000099c8) cell_contacts_ai5_widget_pane_t1

0x11fa,	// (0x000011fa) highlight_cell_shortcut_ai5_widget_pane_cp01

0x9a3d,	// (0x00009a3d) settings_container_pane

0x2345,	// (0x00002345) listscroll_set_pane_copy1

0x5390,	// (0x00005390) scroll_pane_cp121_copy1

0x9a49,	// (0x00009a49) set_content_pane_copy1

0x9a51,	// (0x00009a51) aid_height_set_list_copy1_ParamLimits

0x9a51,	// (0x00009a51) aid_height_set_list_copy1

0x496e,	// (0x0000496e) aid_size_parent_copy1_ParamLimits

0x496e,	// (0x0000496e) aid_size_parent_copy1

0x9a5d,	// (0x00009a5d) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9a5d,	// (0x00009a5d) button_value_adjust_pane_cp6_copy1

0x28b1,	// (0x000028b1) list_highlight_pane_cp2_copy1_ParamLimits

0x28b1,	// (0x000028b1) list_highlight_pane_cp2_copy1

0x9a71,	// (0x00009a71) list_set_pane_copy1_ParamLimits

0x9a71,	// (0x00009a71) list_set_pane_copy1

0x99da,	// (0x000099da) main_pane_set_t1_copy1_ParamLimits

0x99da,	// (0x000099da) main_pane_set_t1_copy1

0x9a14,	// (0x00009a14) main_pane_set_t2_copy1_ParamLimits

0x9a14,	// (0x00009a14) main_pane_set_t2_copy1

0x9aff,	// (0x00009aff) main_pane_set_t3_copy1

0x9b0d,	// (0x00009b0d) main_pane_set_t4_copy1

0x9a31,	// (0x00009a31) set_content_pane_g1_copy1_ParamLimits

0x9a31,	// (0x00009a31) set_content_pane_g1_copy1

0x9b1b,	// (0x00009b1b) setting_code_pane_copy1

0x9b23,	// (0x00009b23) setting_slider_graphic_pane_copy1

0x9b23,	// (0x00009b23) setting_slider_pane_copy1

0x9b23,	// (0x00009b23) setting_text_pane_copy1

0x9b23,	// (0x00009b23) setting_volume_pane_copy1

0x9b2b,	// (0x00009b2b) settings_code_pane_cp2_copy1

0x9b33,	// (0x00009b33) settings_code_pane_cp_copy1_ParamLimits

0x9b33,	// (0x00009b33) settings_code_pane_cp_copy1

0x9b47,	// (0x00009b47) volume_set_pane_copy1

0x9b4f,	// (0x00009b4f) volume_set_pane_g10_copy1

0x9b57,	// (0x00009b57) volume_set_pane_g1_copy1

0x9b5f,	// (0x00009b5f) volume_set_pane_g2_copy1

0x9b67,	// (0x00009b67) volume_set_pane_g3_copy1

0x9b6f,	// (0x00009b6f) volume_set_pane_g4_copy1

0x9b77,	// (0x00009b77) volume_set_pane_g5_copy1

0x9b7f,	// (0x00009b7f) volume_set_pane_g6_copy1

0x9b87,	// (0x00009b87) volume_set_pane_g7_copy1

0x9b8f,	// (0x00009b8f) volume_set_pane_g8_copy1

0x9b97,	// (0x00009b97) volume_set_pane_g9_copy1

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1_ParamLimits

0x0474,	// (0x00000474) bg_set_opt_pane_cp_copy1

0x9b9f,	// (0x00009b9f) setting_slider_pane_t1_copy1_ParamLimits

0x9b9f,	// (0x00009b9f) setting_slider_pane_t1_copy1

0x9bb6,	// (0x00009bb6) setting_slider_pane_t2_copy1_ParamLimits

0x9bb6,	// (0x00009bb6) setting_slider_pane_t2_copy1

0x9bcf,	// (0x00009bcf) setting_slider_pane_t3_copy1_ParamLimits

0x9bcf,	// (0x00009bcf) setting_slider_pane_t3_copy1

0x0504,	// (0x00000504) slider_set_pane_copy1_ParamLimits

0x0504,	// (0x00000504) slider_set_pane_copy1

0x131d,	// (0x0000131d) set_opt_bg_pane_g1_copy2

0x1325,	// (0x00001325) set_opt_bg_pane_g2_copy2

0x9be6,	// (0x00009be6) set_opt_bg_pane_g3_copy2

0x1335,	// (0x00001335) set_opt_bg_pane_g4_copy2

0x133d,	// (0x0000133d) set_opt_bg_pane_g5_copy2

0x1345,	// (0x00001345) set_opt_bg_pane_g6_copy2

0x9bee,	// (0x00009bee) set_opt_bg_pane_g7_copy2

0x9bf6,	// (0x00009bf6) set_opt_bg_pane_g8_copy2

0x9bfe,	// (0x00009bfe) set_opt_bg_pane_g9_copy2

0x48b5,	// (0x000048b5) aid_size_touch_slider_mark_copy1_ParamLimits

0x48b5,	// (0x000048b5) aid_size_touch_slider_mark_copy1

0x4aa4,	// (0x00004aa4) slider_set_pane_g1_copy1

0x4aad,	// (0x00004aad) slider_set_pane_g2_copy1

0x48e2,	// (0x000048e2) slider_set_pane_g3_copy1_ParamLimits

0x48e2,	// (0x000048e2) slider_set_pane_g3_copy1

0x48f6,	// (0x000048f6) slider_set_pane_g4_copy1_ParamLimits

0x48f6,	// (0x000048f6) slider_set_pane_g4_copy1

0x490e,	// (0x0000490e) slider_set_pane_g5_copy1_ParamLimits

0x490e,	// (0x0000490e) slider_set_pane_g5_copy1

0x48e2,	// (0x000048e2) slider_set_pane_g6_copy1_ParamLimits

0x48e2,	// (0x000048e2) slider_set_pane_g6_copy1

0x9c06,	// (0x00009c06) slider_set_pane_g7_copy1_ParamLimits

0x9c06,	// (0x00009c06) slider_set_pane_g7_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp2_copy1

0x051a,	// (0x0000051a) setting_slider_graphic_pane_g1_copy1

0x9c1c,	// (0x00009c1c) setting_slider_graphic_pane_t1_copy1

0x9c2b,	// (0x00009c2b) setting_slider_graphic_pane_t2_copy1

0x9c3a,	// (0x00009c3a) slider_set_pane_cp_copy1

0x9c4a,	// (0x00009c4a) input_focus_pane_cp1_copy1

0x9c53,	// (0x00009c53) list_set_text_pane_copy1

0x9c5b,	// (0x00009c5b) setting_text_pane_g1_copy1

0x9c64,	// (0x00009c64) set_text_pane_t1_copy1

0x9c4a,	// (0x00009c4a) input_focus_pane_cp2_copy1

0x9c5b,	// (0x00009c5b) setting_code_pane_g1_copy1

0x9c7d,	// (0x00009c7d) setting_code_pane_t1_copy1

0x9c8b,	// (0x00009c8b) list_set_graphic_pane_copy1

0x024e,	// (0x0000024e) bg_set_opt_pane_cp4_copy1

0x209f,	// (0x0000209f) list_set_graphic_pane_g1_copy1_ParamLimits

0x209f,	// (0x0000209f) list_set_graphic_pane_g1_copy1

0x9ca0,	// (0x00009ca0) list_set_graphic_pane_g2_copy1

0x20b7,	// (0x000020b7) list_set_graphic_pane_t1_copy1_ParamLimits

0x20b7,	// (0x000020b7) list_set_graphic_pane_t1_copy1

0x5e93,	// (0x00005e93) rs_clock_indi_pane_g1

0x9ca8,	// (0x00009ca8) rs_clock_indi_pane_t1

0x9cb6,	// (0x00009cb6) rs_indi_pane

0x9cbe,	// (0x00009cbe) rs_indi_pane_g1

0x9cc7,	// (0x00009cc7) rs_indi_pane_g2

0x9986,	// (0x00009986) rs_indi_pane_g3

0x0002,

0xaca3,	// (0x0000aca3) rs_indi_pane_g

0x2345,	// (0x00002345) bg_popup_preview_window_pane_cp03

0x9cd0,	// (0x00009cd0) popup_fep_tooltip_window_t1

0x6ffb,	// (0x00006ffb) popup_note2_window_g2_ParamLimits

0x6ffb,	// (0x00006ffb) popup_note2_window_g2

0x0001,

0xaa37,	// (0x0000aa37) popup_note2_window_g_ParamLimits

0xaa37,	// (0x0000aa37) popup_note2_window_g

0x75f4,	// (0x000075f4) bg_popup_sub_pane_cp11_ParamLimits

0x7601,	// (0x00007601) cell_ai3_links_pane_g1_ParamLimits

0x7618,	// (0x00007618) cell_ai3_links_pane_t1

0x9c64,	// (0x00009c64) set_text_pane_t1_copy1_ParamLimits

0x226c,	// (0x0000226c) cell_graphic_popup_pane_cp2_ParamLimits

0x226c,	// (0x0000226c) cell_graphic_popup_pane_cp2

0x9cde,	// (0x00009cde) cell_graphic_popup_pane_g1_cp2

0x0ae0,	// (0x00000ae0) cell_graphic_popup_pane_g2_cp2

0x9ce6,	// (0x00009ce6) cell_graphic_popup_pane_g3_cp2

0x9cee,	// (0x00009cee) cell_graphic_popup_pane_t2_cp2

0x0af1,	// (0x00000af1) grid_highlight_pane_cp3_cp2

0x1844,	// (0x00001844) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x11fa,	// (0x000011fa) main_tmo_pane_ParamLimits

0xd49c,	// (0x0000d49c) popup_tmo_big_image_note_window

0x9176,	// (0x00009176) cell_ai5_widget_list_pane

0xe39c,	// (0x0000e39c) cell_ai5_widget_lrg_icon_pane

0xe82c,	// (0x0000e82c) tmo_note_info_pane_t1_ParamLimits

0xe841,	// (0x0000e841) tmo_note_info_pane_t2_ParamLimits

0xe856,	// (0x0000e856) tmo_note_info_pane_t3_ParamLimits

0x9903,	// (0x00009903) tmo_note_info_pane_t4_ParamLimits

0x9915,	// (0x00009915) tmo_note_info_pane_t5_ParamLimits

0xed0c,	// (0x0000ed0c) tmo_note_info_pane_t_ParamLimits

0x9a3d,	// (0x00009a3d) settings_container_pane_ParamLimits

0x9c42,	// (0x00009c42) indicator_popup_pane_cp5

0x9c42,	// (0x00009c42) indicator_popup_pane_cp6

0x9c8b,	// (0x00009c8b) list_set_graphic_pane_copy1_ParamLimits

0x0020,	// (0x00000020) bg_popup_window_pane_cp23

0x9cfc,	// (0x00009cfc) popup_tmo_big_image_note_window_g1

0x9d05,	// (0x00009d05) popup_tmo_big_image_note_window_t1

0x9d13,	// (0x00009d13) popup_tmo_big_image_note_window_t2

0x9d21,	// (0x00009d21) popup_tmo_big_image_note_window_t3

0x0002,

0xacaa,	// (0x0000acaa) popup_tmo_big_image_note_window_t

0x5e93,	// (0x00005e93) cell_ai5_widget_lrg_icon_pane_g1

0x9d2f,	// (0x00009d2f) cell_ai5_widget_lrg_icon_pane_t1

0xe86b,	// (0x0000e86b) cell_ai5_widget_list_row_pane_ParamLimits

0xe86b,	// (0x0000e86b) cell_ai5_widget_list_row_pane

0xe882,	// (0x0000e882) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe882,	// (0x0000e882) cell_ai5_widget_list_row_pane_g1

0xe88f,	// (0x0000e88f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe88f,	// (0x0000e88f) cell_ai5_widget_list_row_pane_t1

0xe8c0,	// (0x0000e8c0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe8c0,	// (0x0000e8c0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xed17,	// (0x0000ed17) cell_ai5_widget_list_row_pane_t_ParamLimits

0xed17,	// (0x0000ed17) cell_ai5_widget_list_row_pane_t

0x0020,	// (0x00000020) main_fep_vtchi_ss_pane

0x9dde,	// (0x00009dde) popup_fep_char_pre_window

0x9de6,	// (0x00009de6) popup_fep_ituss_window

0xe913,	// (0x0000e913) popup_fep_vkbss_window

0x9e4a,	// (0x00009e4a) grid_vkbss_keypad_pane_ParamLimits

0x9e4a,	// (0x00009e4a) grid_vkbss_keypad_pane

0x9e5a,	// (0x00009e5a) ituss_keypad_pane

0x9e73,	// (0x00009e73) aid_vkbss_key_offset_ParamLimits

0x9e73,	// (0x00009e73) aid_vkbss_key_offset

0x9e7f,	// (0x00009e7f) cell_vkbss_key_pane_ParamLimits

0x9e7f,	// (0x00009e7f) cell_vkbss_key_pane

0x9eb3,	// (0x00009eb3) bg_cell_vkbss_key_g1_ParamLimits

0x9eb3,	// (0x00009eb3) bg_cell_vkbss_key_g1

0x9ebf,	// (0x00009ebf) cell_vkbss_key_3p_pane_ParamLimits

0x9ebf,	// (0x00009ebf) cell_vkbss_key_3p_pane

0x9ef5,	// (0x00009ef5) cell_vkbss_key_g1_ParamLimits

0x9ef5,	// (0x00009ef5) cell_vkbss_key_g1

0x9f2b,	// (0x00009f2b) cell_vkbss_key_t1_ParamLimits

0x9f2b,	// (0x00009f2b) cell_vkbss_key_t1

0x9f9b,	// (0x00009f9b) cell_ituss_key_pane_ParamLimits

0x9f9b,	// (0x00009f9b) cell_ituss_key_pane

0x9fac,	// (0x00009fac) bg_cell_ituss_key_g1_ParamLimits

0x9fac,	// (0x00009fac) bg_cell_ituss_key_g1

0x9fb8,	// (0x00009fb8) cell_ituss_key_pane_g1_ParamLimits

0x9fb8,	// (0x00009fb8) cell_ituss_key_pane_g1

0x9fcc,	// (0x00009fcc) cell_ituss_key_pane_g2_ParamLimits

0x9fcc,	// (0x00009fcc) cell_ituss_key_pane_g2

0x0005,

0xacb8,	// (0x0000acb8) cell_ituss_key_pane_g_ParamLimits

0xacb8,	// (0x0000acb8) cell_ituss_key_pane_g

0xa062,	// (0x0000a062) cell_ituss_key_t1_ParamLimits

0xa062,	// (0x0000a062) cell_ituss_key_t1

0xa098,	// (0x0000a098) cell_ituss_key_t2_ParamLimits

0xa098,	// (0x0000a098) cell_ituss_key_t2

0xa0c9,	// (0x0000a0c9) cell_ituss_key_t3_ParamLimits

0xa0c9,	// (0x0000a0c9) cell_ituss_key_t3

0xa098,	// (0x0000a098) cell_ituss_key_t4_ParamLimits

0xa098,	// (0x0000a098) cell_ituss_key_t4

0x0004,

0xacc5,	// (0x0000acc5) cell_ituss_key_t_ParamLimits

0xacc5,	// (0x0000acc5) cell_ituss_key_t

0xa10c,	// (0x0000a10c) cell_vkbss_key_3p_pane_g1

0xa114,	// (0x0000a114) cell_vkbss_key_3p_pane_g2

0xa11c,	// (0x0000a11c) cell_vkbss_key_3p_pane_g3

0x0002,

0xacd0,	// (0x0000acd0) cell_vkbss_key_3p_pane_g

0x2345,	// (0x00002345) bg_popup_fep_char_preview_window_cp02

0xa124,	// (0x0000a124) popup_fep_char_pre_window_t1

0xe389,	// (0x0000e389) main_ai5_sk_pane

0x998f,	// (0x0000998f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x999b,	// (0x0000999b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x99b0,	// (0x000099b0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x99bc,	// (0x000099bc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xac9c,	// (0x0000ac9c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x99c8,	// (0x000099c8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x11fa,	// (0x000011fa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe920,	// (0x0000e920) main_ai5_sk_pane_g1

0x38d5,	// (0x000038d5) popup_query_code_window_g1

0xe904,	// (0x0000e904) popup_fep_vkb_icf_pane

0x9e21,	// (0x00009e21) popup_fep_vtchi_icf_pane

0x28b1,	// (0x000028b1) bg_icf_pane

0x28b1,	// (0x000028b1) list_vkb_icf_pane

0xa13b,	// (0x0000a13b) bg_icf_pane_cp01

0xa14e,	// (0x0000a14e) vtchi_icf_list_pane

0xe975,	// (0x0000e975) list_vkb_icf_pane_t1_ParamLimits

0xe975,	// (0x0000e975) list_vkb_icf_pane_t1

0xa1b7,	// (0x0000a1b7) vtchi_icf_list_pane_t1_ParamLimits

0xa1b7,	// (0x0000a1b7) vtchi_icf_list_pane_t1

0x9de6,	// (0x00009de6) popup_fep_ituss_window_ParamLimits

0x9e21,	// (0x00009e21) popup_fep_vtchi_icf_pane_ParamLimits

0x9e5a,	// (0x00009e5a) ituss_keypad_pane_ParamLimits

0x9e69,	// (0x00009e69) ituss_sks_pane

0x28b1,	// (0x000028b1) bg_icf_pane_ParamLimits

0xe8e8,	// (0x0000e8e8) icf_edit_indi_pane_ParamLimits

0xe8e8,	// (0x0000e8e8) icf_edit_indi_pane

0x28b1,	// (0x000028b1) list_vkb_icf_pane_ParamLimits

0xa13b,	// (0x0000a13b) bg_icf_pane_cp01_ParamLimits

0x9dd1,	// (0x00009dd1) icf_edit_indi_pane_cp01_ParamLimits

0x9dd1,	// (0x00009dd1) icf_edit_indi_pane_cp01

0xa156,	// (0x0000a156) vtchi_query_pane

0x8f93,	// (0x00008f93) icf_edit_indi_pane_g1_ParamLimits

0x8f93,	// (0x00008f93) icf_edit_indi_pane_g1

0xe98b,	// (0x0000e98b) icf_edit_indi_pane_g2_ParamLimits

0xe98b,	// (0x0000e98b) icf_edit_indi_pane_g2

0x0001,

0xed31,	// (0x0000ed31) icf_edit_indi_pane_g_ParamLimits

0xed31,	// (0x0000ed31) icf_edit_indi_pane_g

0xe99f,	// (0x0000e99f) icf_edit_indi_pane_t1

0xa1cf,	// (0x0000a1cf) bg_input_focus_pane_cp042

0xa1d8,	// (0x0000a1d8) vtchi_button_pane

0xa1e1,	// (0x0000a1e1) vtchi_query_pane_t1

0xa1ef,	// (0x0000a1ef) vtchi_query_pane_t2

0xa1fd,	// (0x0000a1fd) vtchi_query_pane_t3

0x0002,

0xacea,	// (0x0000acea) vtchi_query_pane_t

0x0020,	// (0x00000020) bg_button_pane_cp13

0xa20b,	// (0x0000a20b) vtchi_button_pane_g1

0xa213,	// (0x0000a213) ituss_sks_pane_g1

0xa21c,	// (0x0000a21c) ituss_sks_pane_g2

0x0001,

0xacf1,	// (0x0000acf1) ituss_sks_pane_g

0xa225,	// (0x0000a225) ituss_sks_pane_t1

0xa233,	// (0x0000a233) ituss_sks_pane_t2

0x0001,

0xacf6,	// (0x0000acf6) ituss_sks_pane_t

0x5946,	// (0x00005946) indicator_nsta_pane_cp_g1

0x594f,	// (0x0000594f) indicator_nsta_pane_cp_g2

0x5957,	// (0x00005957) indicator_nsta_pane_cp_g3

0x595f,	// (0x0000595f) indicator_nsta_pane_cp_g4

0x5967,	// (0x00005967) indicator_nsta_pane_cp_g5

0x596f,	// (0x0000596f) indicator_nsta_pane_cp_g6

0x0005,

0xa881,	// (0x0000a881) indicator_nsta_pane_cp_g

0xe16c,	// (0x0000e16c) cell_graphic2_pane_t2_ParamLimits

0xe16c,	// (0x0000e16c) cell_graphic2_pane_t2

0x0001,

0xec82,	// (0x0000ec82) cell_graphic2_pane_t_ParamLimits

0xec82,	// (0x0000ec82) cell_graphic2_pane_t

0xe1a4,	// (0x0000e1a4) cell_graphic2_control_pane_t1

0xb970,	// (0x0000b970) signal_pane_g3_ParamLimits

0xb970,	// (0x0000b970) signal_pane_g3

0xb984,	// (0x0000b984) signal_pane_g4_ParamLimits

0xb984,	// (0x0000b984) signal_pane_g4

0xe8d2,	// (0x0000e8d2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe8d2,	// (0x0000e8d2) cell_ai5_widget_list_row_pane_t3

0xa050,	// (0x0000a050) cell_ituss_key_pane_t1_ParamLimits

0xa050,	// (0x0000a050) cell_ituss_key_pane_t1

0x354b,	// (0x0000354b) form_field_data_wide_pane_vc_t2_ParamLimits

0x354b,	// (0x0000354b) form_field_data_wide_pane_vc_t2

0x355d,	// (0x0000355d) form_field_data_wide_pane_vc_t3_ParamLimits

0x355d,	// (0x0000355d) form_field_data_wide_pane_vc_t3

0x0002,

0xa5e0,	// (0x0000a5e0) form_field_data_wide_pane_vc_t_ParamLimits

0xa5e0,	// (0x0000a5e0) form_field_data_wide_pane_vc_t

0x5633,	// (0x00005633) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5633,	// (0x00005633) form_field_slider_wide_pane_vc_t3

0x56f1,	// (0x000056f1) form_field_popup_wide_pane_vc_t2_ParamLimits

0x56f1,	// (0x000056f1) form_field_popup_wide_pane_vc_t2

0x5706,	// (0x00005706) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5706,	// (0x00005706) form_field_popup_wide_pane_vc_t3

0x0002,

0xa870,	// (0x0000a870) form_field_popup_wide_pane_vc_t_ParamLimits

0xa870,	// (0x0000a870) form_field_popup_wide_pane_vc_t

0xe670,	// (0x0000e670) aid_fshwr2_btn_pane_ParamLimits

0xe684,	// (0x0000e684) aid_fshwr2_syb_pane_ParamLimits

0xe698,	// (0x0000e698) aid_fshwr2_txt_pane_ParamLimits

0x11fa,	// (0x000011fa) fshwr2_bg_pane_ParamLimits

0xe6a8,	// (0x0000e6a8) fshwr2_func_candi_pane_ParamLimits

0xe6c0,	// (0x0000e6c0) fshwr2_hwr_syb_pane_ParamLimits

0xe6d8,	// (0x0000e6d8) fshwr2_icf_pane_ParamLimits

0x55ae,	// (0x000055ae) list_double_graphic_pane_vc_g4_ParamLimits

0x55ae,	// (0x000055ae) list_double_graphic_pane_vc_g4

0x9fec,	// (0x00009fec) cell_ituss_key_pane_g3_ParamLimits

0x9fec,	// (0x00009fec) cell_ituss_key_pane_g3

0xa0fa,	// (0x0000a0fa) cell_ituss_key_t5_ParamLimits

0xa0fa,	// (0x0000a0fa) cell_ituss_key_t5

0xe913,	// (0x0000e913) popup_fep_vkbss_window_ParamLimits

0xe393,	// (0x0000e393) aid_cell_ai5_quarter

0xe99f,	// (0x0000e99f) icf_edit_indi_pane_t1_ParamLimits

0x084e,	// (0x0000084e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x084e,	// (0x0000084e) aid_tch_indicator_popup_pane_cp2

0x0861,	// (0x00000861) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0861,	// (0x00000861) aid_tch_query_popup_data_pane_cp2

0x387d,	// (0x0000387d) aid_tch_query_popup_pane_ParamLimits

0x387d,	// (0x0000387d) aid_tch_query_popup_pane

0x387d,	// (0x0000387d) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x387d,	// (0x0000387d) aid_tch_query_popup_data_pane_cp1

0x28b1,	// (0x000028b1) cell_fshwr2_syb_bg_pane_ParamLimits

0xe7ef,	// (0x0000e7ef) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe7ff,	// (0x0000e7ff) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe904,	// (0x0000e904) popup_fep_vkb_icf_pane_ParamLimits

0xe270,	// (0x0000e270) bg_popup_fep_char_preview_window_g10

0xe45b,	// (0x0000e45b) cell_ai5_widget_pane_g11_ParamLimits

0xe45b,	// (0x0000e45b) cell_ai5_widget_pane_g11

0xe467,	// (0x0000e467) cell_ai5_widget_pane_g12_ParamLimits

0xe467,	// (0x0000e467) cell_ai5_widget_pane_g12

0xe473,	// (0x0000e473) cell_ai5_widget_pane_g13_ParamLimits

0xe473,	// (0x0000e473) cell_ai5_widget_pane_g13

0xe571,	// (0x0000e571) cell_ai5_widget_pane_t11_ParamLimits

0xe571,	// (0x0000e571) cell_ai5_widget_pane_t11

0xe583,	// (0x0000e583) cell_ai5_widget_pane_t12_ParamLimits

0xe583,	// (0x0000e583) cell_ai5_widget_pane_t12

0x9ff8,	// (0x00009ff8) cell_ituss_key_pane_g4_ParamLimits

0x9ff8,	// (0x00009ff8) cell_ituss_key_pane_g4

0xa014,	// (0x0000a014) cell_ituss_key_pane_g5_ParamLimits

0xa014,	// (0x0000a014) cell_ituss_key_pane_g5

0xa030,	// (0x0000a030) cell_ituss_key_pane_g6_ParamLimits

0xa030,	// (0x0000a030) cell_ituss_key_pane_g6

0x32b3,	// (0x000032b3) bg_icf_pane_g1

0xe929,	// (0x0000e929) bg_icf_pane_g2

0xe933,	// (0x0000e933) bg_icf_pane_g3

0xe93b,	// (0x0000e93b) bg_icf_pane_g4

0xe945,	// (0x0000e945) bg_icf_pane_g5

0xe94f,	// (0x0000e94f) bg_icf_pane_g6

0xe959,	// (0x0000e959) bg_icf_pane_g7

0xe961,	// (0x0000e961) bg_icf_pane_g8

0xe96b,	// (0x0000e96b) bg_icf_pane_g9

0x0008,

0xed1e,	// (0x0000ed1e) bg_icf_pane_g

0x9e37,	// (0x00009e37) popup_hyb_candi_window_ParamLimits

0x9e37,	// (0x00009e37) popup_hyb_candi_window

0x343f,	// (0x0000343f) bg_popup_sub_pane_cp01_ParamLimits

0x343f,	// (0x0000343f) bg_popup_sub_pane_cp01

0xa273,	// (0x0000a273) entry_hyb_candi_pane_ParamLimits

0xa273,	// (0x0000a273) entry_hyb_candi_pane

0xa282,	// (0x0000a282) grid_hyb_candi_pane_ParamLimits

0xa282,	// (0x0000a282) grid_hyb_candi_pane

0xa297,	// (0x0000a297) grid_hyb_phrase_pane_ParamLimits

0xa297,	// (0x0000a297) grid_hyb_phrase_pane

0xa2a6,	// (0x0000a2a6) cell_hyb_candi_pane_ParamLimits

0xa2a6,	// (0x0000a2a6) cell_hyb_candi_pane

0xa2be,	// (0x0000a2be) cell_hyb_candi_scroll_pane

0x1b2e,	// (0x00001b2e) cell_hyb_candi_pane_g1

0xa2c7,	// (0x0000a2c7) cell_hyb_candi_pane_t1

0xa2d5,	// (0x0000a2d5) cell_hyb_phrase_pane

0x1b2e,	// (0x00001b2e) cell_hyb_phrase_pane_g1

0xa2de,	// (0x0000a2de) cell_hyb_phrase_pane_t1

0xa2ec,	// (0x0000a2ec) entry_hyb_candi_pane_t1

0x2345,	// (0x00002345) input_focus_pane_cp06

0xa2fa,	// (0x0000a2fa) cell_hyb_candi_scroll_pane_g1

0xa302,	// (0x0000a302) cell_hyb_candi_scroll_pane_g1_aid

0xa30a,	// (0x0000a30a) cell_hyb_candi_scroll_pane_g2

0xa312,	// (0x0000a312) cell_hyb_candi_scroll_pane_g2_aid

0xa31a,	// (0x0000a31a) cell_hyb_candi_scroll_pane_g3

0xa322,	// (0x0000a322) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal

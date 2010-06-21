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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000a242 };

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
0x0766,	// (0x0000a9a8) Screen

0x0770,	// (0x0000a9b2) application_window_ParamLimits

0x0770,	// (0x0000a9b2) application_window

0x6967,	// (0x00010ba9) screen_g1

0x079e,	// (0x0000a9e0) area_bottom_pane_ParamLimits

0x079e,	// (0x0000a9e0) area_bottom_pane

0x69d6,	// (0x00010c18) area_top_pane_ParamLimits

0x69d6,	// (0x00010c18) area_top_pane

0x48a9,	// (0x0000eaeb) main_pane_ParamLimits

0x48a9,	// (0x0000eaeb) main_pane

0x6a4e,	// (0x00010c90) misc_graphics

0x1d81,	// (0x0000bfc3) battery_pane_ParamLimits

0x1d81,	// (0x0000bfc3) battery_pane

0x96c7,	// (0x00013909) bg_status_flat_pane_g8

0x96cf,	// (0x00013911) bg_status_flat_pane_g9

0x8a89,	// (0x00012ccb) context_pane_ParamLimits

0x8a89,	// (0x00012ccb) context_pane

0x1edb,	// (0x0000c11d) navi_pane_ParamLimits

0x1edb,	// (0x0000c11d) navi_pane

0x1f50,	// (0x0000c192) signal_pane_ParamLimits

0x1f50,	// (0x0000c192) signal_pane

0x0008,

0xf85e,	// (0x00019aa0) bg_status_flat_pane_g

0x1fdc,	// (0x0000c21e) status_pane_g1_ParamLimits

0x1fdc,	// (0x0000c21e) status_pane_g1

0x1fe8,	// (0x0000c22a) status_pane_g2_ParamLimits

0x1fe8,	// (0x0000c22a) status_pane_g2

0x8c9e,	// (0x00012ee0) status_pane_g3_ParamLimits

0x8c9e,	// (0x00012ee0) status_pane_g3

0x0004,

0xf791,	// (0x000199d3) status_pane_g_ParamLimits

0xf791,	// (0x000199d3) status_pane_g

0x1ff4,	// (0x0000c236) title_pane_ParamLimits

0x1ff4,	// (0x0000c236) title_pane

0x204f,	// (0x0000c291) uni_indicator_pane_ParamLimits

0x204f,	// (0x0000c291) uni_indicator_pane

0x88ea,	// (0x00012b2c) bg_list_pane_ParamLimits

0x88ea,	// (0x00012b2c) bg_list_pane

0x1745,	// (0x0000b987) find_pane

0xdb51,	// (0x00017d93) listscroll_app_pane_ParamLimits

0xdb51,	// (0x00017d93) listscroll_app_pane

0x891e,	// (0x00012b60) listscroll_form_pane

0x175d,	// (0x0000b99f) listscroll_gen_pane_ParamLimits

0x175d,	// (0x0000b99f) listscroll_gen_pane

0x50a8,	// (0x0000f2ea) listscroll_set_pane

0xdb61,	// (0x00017da3) main_idle_act_pane

0x85fe,	// (0x00012840) main_idle_trad_pane

0x85fe,	// (0x00012840) main_list_empty_pane

0x894d,	// (0x00012b8f) main_midp_pane

0x8959,	// (0x00012b9b) main_pane_g1_ParamLimits

0x8959,	// (0x00012b9b) main_pane_g1

0xdb74,	// (0x00017db6) popup_ai_message_window_ParamLimits

0xdb74,	// (0x00017db6) popup_ai_message_window

0xdbf8,	// (0x00017e3a) popup_fep_china_uni_window_ParamLimits

0xdbf8,	// (0x00017e3a) popup_fep_china_uni_window

0x5192,	// (0x0000f3d4) popup_fep_japan_candidate_window_ParamLimits

0x5192,	// (0x0000f3d4) popup_fep_japan_candidate_window

0x51b0,	// (0x0000f3f2) popup_fep_japan_predictive_window_ParamLimits

0x51b0,	// (0x0000f3f2) popup_fep_japan_predictive_window

0xdc36,	// (0x00017e78) popup_find_window

0xdc4f,	// (0x00017e91) popup_grid_graphic_window_ParamLimits

0xdc4f,	// (0x00017e91) popup_grid_graphic_window

0x5207,	// (0x0000f449) popup_large_graphic_colour_window

0xdccb,	// (0x00017f0d) popup_menu_window_ParamLimits

0xdccb,	// (0x00017f0d) popup_menu_window

0xde29,	// (0x0001806b) popup_note_image_window

0xddf1,	// (0x00018033) popup_note_wait_window_ParamLimits

0xddf1,	// (0x00018033) popup_note_wait_window

0xde3f,	// (0x00018081) popup_note_window_ParamLimits

0xde3f,	// (0x00018081) popup_note_window

0xded3,	// (0x00018115) popup_query_code_window_ParamLimits

0xded3,	// (0x00018115) popup_query_code_window

0x53c4,	// (0x0000f606) popup_query_data_code_window_ParamLimits

0x53c4,	// (0x0000f606) popup_query_data_code_window

0xdf0b,	// (0x0001814d) popup_query_data_window_ParamLimits

0xdf0b,	// (0x0001814d) popup_query_data_window

0xdf7f,	// (0x000181c1) popup_query_sat_info_window_ParamLimits

0xdf7f,	// (0x000181c1) popup_query_sat_info_window

0xe00c,	// (0x0001824e) popup_snote_single_graphic_window_ParamLimits

0xe00c,	// (0x0001824e) popup_snote_single_graphic_window

0xe00c,	// (0x0001824e) popup_snote_single_text_window_ParamLimits

0xe00c,	// (0x0001824e) popup_snote_single_text_window

0x5433,	// (0x0000f675) popup_sub_window_general

0x5537,	// (0x0000f779) popup_window_general_ParamLimits

0x5537,	// (0x0000f779) popup_window_general

0x896f,	// (0x00012bb1) power_save_pane

0xda22,	// (0x00017c64) control_pane_g1_ParamLimits

0xda22,	// (0x00017c64) control_pane_g1

0x4f5d,	// (0x0000f19f) control_pane_g2_ParamLimits

0x4f5d,	// (0x0000f19f) control_pane_g2

0x88b5,	// (0x00012af7) control_pane_g3_ParamLimits

0x88b5,	// (0x00012af7) control_pane_g3

0x0007,

0xf779,	// (0x000199bb) control_pane_g_ParamLimits

0xf779,	// (0x000199bb) control_pane_g

0xda57,	// (0x00017c99) control_pane_t1_ParamLimits

0xda57,	// (0x00017c99) control_pane_t1

0xdab3,	// (0x00017cf5) control_pane_t2_ParamLimits

0xdab3,	// (0x00017cf5) control_pane_t2

0x0002,

0xf78a,	// (0x000199cc) control_pane_t_ParamLimits

0xf78a,	// (0x000199cc) control_pane_t

0x87dc,	// (0x00012a1e) navi_navi_volume_pane_cp1

0x87e4,	// (0x00012a26) status_small_icon_pane

0x87ec,	// (0x00012a2e) status_small_pane_g1_ParamLimits

0x87ec,	// (0x00012a2e) status_small_pane_g1

0x156e,	// (0x0000b7b0) status_small_pane_g2_ParamLimits

0x156e,	// (0x0000b7b0) status_small_pane_g2

0x157a,	// (0x0000b7bc) status_small_pane_g3_ParamLimits

0x157a,	// (0x0000b7bc) status_small_pane_g3

0x1586,	// (0x0000b7c8) status_small_pane_g4_ParamLimits

0x1586,	// (0x0000b7c8) status_small_pane_g4

0x1592,	// (0x0000b7d4) status_small_pane_g5_ParamLimits

0x1592,	// (0x0000b7d4) status_small_pane_g5

0x8850,	// (0x00012a92) status_small_pane_g6_ParamLimits

0x8850,	// (0x00012a92) status_small_pane_g6

0x0007,

0xf768,	// (0x000199aa) status_small_pane_g_ParamLimits

0xf768,	// (0x000199aa) status_small_pane_g

0x15c1,	// (0x0000b803) status_small_pane_t1

0x15db,	// (0x0000b81d) status_small_wait_pane_ParamLimits

0x15db,	// (0x0000b81d) status_small_wait_pane

0x1376,	// (0x0000b5b8) aid_levels_signal_ParamLimits

0x1376,	// (0x0000b5b8) aid_levels_signal

0x138a,	// (0x0000b5cc) signal_pane_g1_ParamLimits

0x138a,	// (0x0000b5cc) signal_pane_g1

0x13a4,	// (0x0000b5e6) signal_pane_g2_ParamLimits

0x13a4,	// (0x0000b5e6) signal_pane_g2

0x0003,

0xf6f9,	// (0x0001993b) signal_pane_g_ParamLimits

0xf6f9,	// (0x0001993b) signal_pane_g

0x80c8,	// (0x0001230a) context_pane_g1

0x0935,	// (0x0000ab77) title_pane_g1

0x0977,	// (0x0000abb9) title_pane_t1

0x6af6,	// (0x00010d38) title_pane_t2

0x6b1c,	// (0x00010d5e) title_pane_t3

0x0002,

0xf557,	// (0x00019799) title_pane_t

0x2075,	// (0x0000c2b7) aid_levels_battery_ParamLimits

0x2075,	// (0x0000c2b7) aid_levels_battery

0x208d,	// (0x0000c2cf) battery_pane_g1_ParamLimits

0x208d,	// (0x0000c2cf) battery_pane_g1

0x20a8,	// (0x0000c2ea) battery_pane_g2_ParamLimits

0x20a8,	// (0x0000c2ea) battery_pane_g2

0x0001,

0xf79c,	// (0x000199de) battery_pane_g_ParamLimits

0xf79c,	// (0x000199de) battery_pane_g

0x23c6,	// (0x0000c608) uni_indicator_pane_g1

0x23dc,	// (0x0000c61e) uni_indicator_pane_g2

0x23f2,	// (0x0000c634) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00019b48) uni_indicator_pane_g

0x7a53,	// (0x00011c95) navi_icon_pane_ParamLimits

0x7a53,	// (0x00011c95) navi_icon_pane

0x6a4e,	// (0x00010c90) navi_midp_pane

0x6a4e,	// (0x00010c90) navi_navi_pane

0x7a53,	// (0x00011c95) navi_text_pane_ParamLimits

0x7a53,	// (0x00011c95) navi_text_pane

0x6967,	// (0x00010ba9) status_small_wait_pane_g1

0x6f8f,	// (0x000111d1) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00019b43) status_small_wait_pane_g

0x236c,	// (0x0000c5ae) navi_navi_icon_text_pane

0x2386,	// (0x0000c5c8) navi_navi_pane_g1_ParamLimits

0x2386,	// (0x0000c5c8) navi_navi_pane_g1

0x2374,	// (0x0000c5b6) navi_navi_pane_g2_ParamLimits

0x2374,	// (0x0000c5b6) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00019b11) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00019b11) navi_navi_pane_g

0x2398,	// (0x0000c5da) navi_navi_tabs_pane

0x236c,	// (0x0000c5ae) navi_navi_text_pane

0x236c,	// (0x0000c5ae) navi_navi_volume_pane

0x9cb3,	// (0x00013ef5) navi_text_pane_t1

0x9ca7,	// (0x00013ee9) navi_icon_pane_g1

0x9bfb,	// (0x00013e3d) navi_navi_text_pane_t1

0x5828,	// (0x0000fa6a) navi_navi_volume_pane_g1

0xe25a,	// (0x0001849c) volume_small_pane

0x22bf,	// (0x0000c501) navi_navi_icon_text_pane_g1

0x22c7,	// (0x0000c509) navi_navi_icon_text_pane_t1

0x9727,	// (0x00013969) navi_tabs_2_long_pane

0x9727,	// (0x00013969) navi_tabs_2_pane

0x9727,	// (0x00013969) navi_tabs_3_long_pane

0x9727,	// (0x00013969) navi_tabs_3_pane

0x9727,	// (0x00013969) navi_tabs_4_pane

0xe23a,	// (0x0001847c) tabs_2_active_pane_ParamLimits

0xe23a,	// (0x0001847c) tabs_2_active_pane

0xe24a,	// (0x0001848c) tabs_2_passive_pane_ParamLimits

0xe24a,	// (0x0001848c) tabs_2_passive_pane

0xe208,	// (0x0001844a) tabs_3_active_pane_ParamLimits

0xe208,	// (0x0001844a) tabs_3_active_pane

0xe218,	// (0x0001845a) tabs_3_passive_pane_ParamLimits

0xe218,	// (0x0001845a) tabs_3_passive_pane

0xe229,	// (0x0001846b) tabs_3_passive_pane_cp_ParamLimits

0xe229,	// (0x0001846b) tabs_3_passive_pane_cp

0xe1c4,	// (0x00018406) tabs_4_active_pane_ParamLimits

0xe1c4,	// (0x00018406) tabs_4_active_pane

0xe1d5,	// (0x00018417) tabs_4_passive_pane_ParamLimits

0xe1d5,	// (0x00018417) tabs_4_passive_pane

0xe1e6,	// (0x00018428) tabs_4_passive_pane_cp_ParamLimits

0xe1e6,	// (0x00018428) tabs_4_passive_pane_cp

0xe1f7,	// (0x00018439) tabs_4_passive_pane_cp2_ParamLimits

0xe1f7,	// (0x00018439) tabs_4_passive_pane_cp2

0xe1a4,	// (0x000183e6) tabs_2_long_active_pane_ParamLimits

0xe1a4,	// (0x000183e6) tabs_2_long_active_pane

0xe1b4,	// (0x000183f6) tabs_2_long_passive_pane_ParamLimits

0xe1b4,	// (0x000183f6) tabs_2_long_passive_pane

0xe16d,	// (0x000183af) tabs_3_long_active_pane_ParamLimits

0xe16d,	// (0x000183af) tabs_3_long_active_pane

0xe180,	// (0x000183c2) tabs_3_long_passive_pane_ParamLimits

0xe180,	// (0x000183c2) tabs_3_long_passive_pane

0xe191,	// (0x000183d3) tabs_3_long_passive_pane_cp_ParamLimits

0xe191,	// (0x000183d3) tabs_3_long_passive_pane_cp

0x56e3,	// (0x0000f925) volume_small_pane_g1

0x56ec,	// (0x0000f92e) volume_small_pane_g2

0x56f5,	// (0x0000f937) volume_small_pane_g3

0x56fe,	// (0x0000f940) volume_small_pane_g4

0x5707,	// (0x0000f949) volume_small_pane_g5

0x5710,	// (0x0000f952) volume_small_pane_g6

0x5719,	// (0x0000f95b) volume_small_pane_g7

0x5722,	// (0x0000f964) volume_small_pane_g8

0x572b,	// (0x0000f96d) volume_small_pane_g9

0x5734,	// (0x0000f976) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00019add) volume_small_pane_g

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp2_ParamLimits

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp2

0x6b3c,	// (0x00010d7e) tabs_3_active_pane_g1

0x0a04,	// (0x0000ac46) tabs_3_active_pane_t1

0x6dc7,	// (0x00011009) bg_passive_tab_pane_cp2_ParamLimits

0x6dc7,	// (0x00011009) bg_passive_tab_pane_cp2

0x6b3c,	// (0x00010d7e) tabs_3_passive_pane_g1

0x0a04,	// (0x0000ac46) tabs_3_passive_pane_t1

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp3_ParamLimits

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp3

0xa4d1,	// (0x00014713) tabs_4_active_pane_g1

0x0a1a,	// (0x0000ac5c) tabs_4_active_pane_t1

0x6dc7,	// (0x00011009) bg_passive_tab_pane_cp3_ParamLimits

0x6dc7,	// (0x00011009) bg_passive_tab_pane_cp3

0xa4d1,	// (0x00014713) tabs_4_1_passive_pane_g1

0x0a1a,	// (0x0000ac5c) tabs_4_1_passive_pane_t1

0x894d,	// (0x00012b8f) list_highlight_pane_cp2

0x24bf,	// (0x0000c701) list_set_pane_ParamLimits

0x24bf,	// (0x0000c701) list_set_pane

0x254d,	// (0x0000c78f) main_pane_set_t1_ParamLimits

0x254d,	// (0x0000c78f) main_pane_set_t1

0x256d,	// (0x0000c7af) main_pane_set_t2_ParamLimits

0x256d,	// (0x0000c7af) main_pane_set_t2

0x2581,	// (0x0000c7c3) main_pane_set_t3_ParamLimits

0x2581,	// (0x0000c7c3) main_pane_set_t3

0x2593,	// (0x0000c7d5) main_pane_set_t4_ParamLimits

0x2593,	// (0x0000c7d5) main_pane_set_t4

0x0003,

0xf96b,	// (0x00019bad) main_pane_set_t_ParamLimits

0xf96b,	// (0x00019bad) main_pane_set_t

0x25a5,	// (0x0000c7e7) setting_code_pane

0x25ad,	// (0x0000c7ef) setting_slider_graphic_pane

0x25ad,	// (0x0000c7ef) setting_slider_pane

0x25ad,	// (0x0000c7ef) setting_text_pane

0x25ad,	// (0x0000c7ef) setting_volume_pane

0xd9bb,	// (0x00017bfd) volume_set_pane

0x6b2e,	// (0x00010d70) bg_set_opt_pane_cp

0x4ab0,	// (0x0000ecf2) setting_slider_pane_t1

0xd9c3,	// (0x00017c05) setting_slider_pane_t2

0xd9dc,	// (0x00017c1e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000197a0) setting_slider_pane_t

0x4af6,	// (0x0000ed38) slider_set_pane

0x6a4e,	// (0x00010c90) bg_set_opt_pane_cp2

0x6b70,	// (0x00010db2) setting_slider_graphic_pane_g1

0xd9f3,	// (0x00017c35) setting_slider_graphic_pane_t1

0xda02,	// (0x00017c44) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000197a7) setting_slider_graphic_pane_t

0xda11,	// (0x00017c53) slider_set_pane_cp

0x6a4e,	// (0x00010c90) input_focus_pane_cp1

0xa1bc,	// (0x000143fe) list_set_text_pane

0x6967,	// (0x00010ba9) setting_text_pane_g1

0x6a4e,	// (0x00010c90) input_focus_pane_cp2

0x6967,	// (0x00010ba9) setting_code_pane_g1

0x6b79,	// (0x00010dbb) setting_code_pane_t1

0xf056,	// (0x00019298) set_text_pane_t1_ParamLimits

0xf056,	// (0x00019298) set_text_pane_t1

0x7961,	// (0x00011ba3) set_opt_bg_pane_g1

0x7969,	// (0x00011bab) set_opt_bg_pane_g2

0x247f,	// (0x0000c6c1) set_opt_bg_pane_g3

0x7979,	// (0x00011bbb) set_opt_bg_pane_g4

0x7981,	// (0x00011bc3) set_opt_bg_pane_g5

0x7989,	// (0x00011bcb) set_opt_bg_pane_g6

0x2487,	// (0x0000c6c9) set_opt_bg_pane_g7

0x248f,	// (0x0000c6d1) set_opt_bg_pane_g8

0x2497,	// (0x0000c6d9) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00019b9a) set_opt_bg_pane_g

0xa18f,	// (0x000143d1) slider_set_pane_g1

0x589d,	// (0x0000fadf) slider_set_pane_g2

0x0006,

0xf949,	// (0x00019b8b) slider_set_pane_g

0xe263,	// (0x000184a5) volume_set_pane_g1

0xe26b,	// (0x000184ad) volume_set_pane_g2

0xe273,	// (0x000184b5) volume_set_pane_g3

0xe27b,	// (0x000184bd) volume_set_pane_g4

0xe283,	// (0x000184c5) volume_set_pane_g5

0xe28b,	// (0x000184cd) volume_set_pane_g6

0xe293,	// (0x000184d5) volume_set_pane_g7

0xe29b,	// (0x000184dd) volume_set_pane_g8

0xe2a3,	// (0x000184e5) volume_set_pane_g9

0xe2ab,	// (0x000184ed) volume_set_pane_g10

0x0009,

0xf921,	// (0x00019b63) volume_set_pane_g

0x0a8e,	// (0x0000acd0) indicator_pane_ParamLimits

0x0a8e,	// (0x0000acd0) indicator_pane

0x0ab6,	// (0x0000acf8) main_idle_pane_g2_ParamLimits

0x0ab6,	// (0x0000acf8) main_idle_pane_g2

0x0ae6,	// (0x0000ad28) main_pane_idle_g1_ParamLimits

0x0ae6,	// (0x0000ad28) main_pane_idle_g1

0x6bdf,	// (0x00010e21) popup_clock_digital_analogue_window_ParamLimits

0x6bdf,	// (0x00010e21) popup_clock_digital_analogue_window

0x0b0b,	// (0x0000ad4d) soft_indicator_pane_ParamLimits

0x0b0b,	// (0x0000ad4d) soft_indicator_pane

0x0b25,	// (0x0000ad67) wallpaper_pane_ParamLimits

0x0b25,	// (0x0000ad67) wallpaper_pane

0x6967,	// (0x00010ba9) wallpaper_pane_g1

0x0b37,	// (0x0000ad79) indicator_pane_g1_ParamLimits

0x0b37,	// (0x0000ad79) indicator_pane_g1

0xa5ce,	// (0x00014810) navi_navi_icon_text_pane_srt_g1

0x6c31,	// (0x00010e73) soft_indicator_pane_t1

0x6c4b,	// (0x00010e8d) aid_ps_area_pane

0x0b50,	// (0x0000ad92) aid_ps_clock_pane

0x6c68,	// (0x00010eaa) aid_ps_indicator_pane

0x6c74,	// (0x00010eb6) indicator_ps_pane_ParamLimits

0x6c74,	// (0x00010eb6) indicator_ps_pane

0x6c83,	// (0x00010ec5) power_save_pane_g1_ParamLimits

0x6c83,	// (0x00010ec5) power_save_pane_g1

0x6c8f,	// (0x00010ed1) power_save_pane_g2_ParamLimits

0x6c8f,	// (0x00010ed1) power_save_pane_g2

0x481b,	// (0x0000ea5d) aid_navinavi_width_pane

0x6c4b,	// (0x00010e8d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000197ac) power_save_pane_g_ParamLimits

0xf56a,	// (0x000197ac) power_save_pane_g

0x6c9d,	// (0x00010edf) power_save_pane_t1_ParamLimits

0x6c9d,	// (0x00010edf) power_save_pane_t1

0x0b50,	// (0x0000ad92) aid_ps_clock_pane_ParamLimits

0x6c68,	// (0x00010eaa) aid_ps_indicator_pane_ParamLimits

0x6caf,	// (0x00010ef1) power_save_pane_t4_ParamLimits

0x6caf,	// (0x00010ef1) power_save_pane_t4

0x0001,

0xf56f,	// (0x000197b1) power_save_pane_t_ParamLimits

0xf56f,	// (0x000197b1) power_save_pane_t

0x6cd9,	// (0x00010f1b) power_save_t3_ParamLimits

0x6cd9,	// (0x00010f1b) power_save_t3

0x6cc4,	// (0x00010f06) power_save_t2_ParamLimits

0x6cc4,	// (0x00010f06) power_save_t2

0x6cee,	// (0x00010f30) indicator_ps_pane_g1

0x0b5c,	// (0x0000ad9e) ai_gene_pane_ParamLimits

0x0b5c,	// (0x0000ad9e) ai_gene_pane

0x0b73,	// (0x0000adb5) ai_links_pane_ParamLimits

0x0b73,	// (0x0000adb5) ai_links_pane

0x0b85,	// (0x0000adc7) indicator_pane_cp1_ParamLimits

0x0b85,	// (0x0000adc7) indicator_pane_cp1

0x0b94,	// (0x0000add6) main_pane_idle_g1_cp_ParamLimits

0x0b94,	// (0x0000add6) main_pane_idle_g1_cp

0x6d27,	// (0x00010f69) popup_ai_links_title_window

0x0bac,	// (0x0000adee) soft_indicator_pane_cp1_ParamLimits

0x0bac,	// (0x0000adee) soft_indicator_pane_cp1

0x9f92,	// (0x000141d4) ai_links_pane_g1

0x9f9b,	// (0x000141dd) grid_ai_links_pane

0x23bd,	// (0x0000c5ff) ai_gene_pane_1

0x9f80,	// (0x000141c2) ai_gene_pane_2

0x9f89,	// (0x000141cb) list_highlight_pane_cp4

0x23a1,	// (0x0000c5e3) cell_ai_link_pane_ParamLimits

0x23a1,	// (0x0000c5e3) cell_ai_link_pane

0x9f53,	// (0x00014195) cell_ai_link_pane_g1

0x6f8f,	// (0x000111d1) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00019b3e) cell_ai_link_pane_g

0x6a4e,	// (0x00010c90) grid_highlight_cp2

0x6a4e,	// (0x00010c90) bg_popup_sub_pane_cp1

0x6d4a,	// (0x00010f8c) popup_ai_links_title_window_t1

0x9ea5,	// (0x000140e7) ai_gene_pane_1_g1_ParamLimits

0x9ea5,	// (0x000140e7) ai_gene_pane_1_g1

0x9eb1,	// (0x000140f3) ai_gene_pane_1_g2_ParamLimits

0x9eb1,	// (0x000140f3) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00019b34) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00019b34) ai_gene_pane_1_g

0x9ebe,	// (0x00014100) ai_gene_pane_1_t1_ParamLimits

0x9ebe,	// (0x00014100) ai_gene_pane_1_t1

0x9ef2,	// (0x00014134) grid_ai_soft_ind_pane

0x9e90,	// (0x000140d2) ai_gene_pane_2_t1_ParamLimits

0x9e90,	// (0x000140d2) ai_gene_pane_2_t1

0x0bc0,	// (0x0000ae02) main_pane_empty_t1_ParamLimits

0x0bc0,	// (0x0000ae02) main_pane_empty_t1

0x0bdd,	// (0x0000ae1f) main_pane_empty_t2_ParamLimits

0x0bdd,	// (0x0000ae1f) main_pane_empty_t2

0x0bf5,	// (0x0000ae37) main_pane_empty_t3_ParamLimits

0x0bf5,	// (0x0000ae37) main_pane_empty_t3

0x0c08,	// (0x0000ae4a) main_pane_empty_t4_ParamLimits

0x0c08,	// (0x0000ae4a) main_pane_empty_t4

0x0c1b,	// (0x0000ae5d) main_pane_empty_t5_ParamLimits

0x0c1b,	// (0x0000ae5d) main_pane_empty_t5

0x0004,

0xf574,	// (0x000197b6) main_pane_empty_t_ParamLimits

0xf574,	// (0x000197b6) main_pane_empty_t

0x7a53,	// (0x00011c95) bg_popup_window_pane_ParamLimits

0x7a53,	// (0x00011c95) bg_popup_window_pane

0x9c0a,	// (0x00013e4c) find_popup_pane_cp2_ParamLimits

0x9c0a,	// (0x00013e4c) find_popup_pane_cp2

0x9c16,	// (0x00013e58) heading_pane_ParamLimits

0x9c16,	// (0x00013e58) heading_pane

0x6a4e,	// (0x00010c90) bg_popup_sub_pane

0x22e4,	// (0x0000c526) bg_popup_window_pane_g1_ParamLimits

0x22e4,	// (0x0000c526) bg_popup_window_pane_g1

0x22f3,	// (0x0000c535) bg_popup_window_pane_g2_ParamLimits

0x22f3,	// (0x0000c535) bg_popup_window_pane_g2

0x22ff,	// (0x0000c541) bg_popup_window_pane_g3_ParamLimits

0x22ff,	// (0x0000c541) bg_popup_window_pane_g3

0x230b,	// (0x0000c54d) bg_popup_window_pane_g4_ParamLimits

0x230b,	// (0x0000c54d) bg_popup_window_pane_g4

0x231a,	// (0x0000c55c) bg_popup_window_pane_g5_ParamLimits

0x231a,	// (0x0000c55c) bg_popup_window_pane_g5

0x232a,	// (0x0000c56c) bg_popup_window_pane_g6_ParamLimits

0x232a,	// (0x0000c56c) bg_popup_window_pane_g6

0x2336,	// (0x0000c578) bg_popup_window_pane_g7_ParamLimits

0x2336,	// (0x0000c578) bg_popup_window_pane_g7

0x2345,	// (0x0000c587) bg_popup_window_pane_g8_ParamLimits

0x2345,	// (0x0000c587) bg_popup_window_pane_g8

0x2354,	// (0x0000c596) bg_popup_window_pane_g9_ParamLimits

0x2354,	// (0x0000c596) bg_popup_window_pane_g9

0x9bef,	// (0x00013e31) bg_popup_window_pane_g10_ParamLimits

0x9bef,	// (0x00013e31) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x00019afc) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x00019afc) bg_popup_window_pane_g

0x9b18,	// (0x00013d5a) bg_popup_heading_pane_ParamLimits

0x9b18,	// (0x00013d5a) bg_popup_heading_pane

0x5925,	// (0x0000fb67) tabs_4_passive_pane_cp_srt_ParamLimits

0x5925,	// (0x0000fb67) tabs_4_passive_pane_cp_srt

0x5937,	// (0x0000fb79) tabs_4_passive_pane_srt_ParamLimits

0x9b2c,	// (0x00013d6e) heading_pane_g2

0x5937,	// (0x0000fb79) tabs_4_passive_pane_srt

0x8f2c,	// (0x0001316e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f2c,	// (0x0001316e) bg_passive_tab_pane_cp3_srt

0x9b34,	// (0x00013d76) heading_pane_t1_ParamLimits

0x9b34,	// (0x00013d76) heading_pane_t1

0x9b4b,	// (0x00013d8d) heading_pane_t2_ParamLimits

0x9b4b,	// (0x00013d8d) heading_pane_t2

0x0001,

0xf8b5,	// (0x00019af7) heading_pane_t_ParamLimits

0xf8b5,	// (0x00019af7) heading_pane_t

0x968f,	// (0x000138d1) bg_popup_heading_pane_g1

0x9738,	// (0x0001397a) bg_popup_heading_pane_g2

0x9740,	// (0x00013982) bg_popup_heading_pane_g3

0x9748,	// (0x0001398a) bg_popup_heading_pane_g4

0x9750,	// (0x00013992) bg_popup_heading_pane_g5

0x9758,	// (0x0001399a) bg_popup_heading_pane_g6

0x9760,	// (0x000139a2) bg_popup_heading_pane_g7

0x9768,	// (0x000139aa) bg_popup_heading_pane_g8

0x9770,	// (0x000139b2) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00019ab3) bg_popup_heading_pane_g

0x8e16,	// (0x00013058) bg_popup_sub_pane_g1

0x8e26,	// (0x00013068) bg_popup_sub_pane_g2

0x8e1e,	// (0x00013060) bg_popup_sub_pane_g3

0x8e36,	// (0x00013078) bg_popup_sub_pane_g4

0x8e2e,	// (0x00013070) bg_popup_sub_pane_g5

0x8e3e,	// (0x00013080) bg_popup_sub_pane_g6

0x8e46,	// (0x00013088) bg_popup_sub_pane_g7

0x8e56,	// (0x00013098) bg_popup_sub_pane_g8

0x8e4e,	// (0x00013090) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00019a8d) bg_popup_sub_pane_g

0x6dc7,	// (0x00011009) bg_popup_window_pane_cp5_ParamLimits

0x6dc7,	// (0x00011009) bg_popup_window_pane_cp5

0x6de3,	// (0x00011025) popup_note_window_g1_ParamLimits

0x6de3,	// (0x00011025) popup_note_window_g1

0x6def,	// (0x00011031) popup_note_window_t1_ParamLimits

0x6def,	// (0x00011031) popup_note_window_t1

0x6e05,	// (0x00011047) popup_note_window_t2_ParamLimits

0x6e05,	// (0x00011047) popup_note_window_t2

0x6e1b,	// (0x0001105d) popup_note_window_t3_ParamLimits

0x6e1b,	// (0x0001105d) popup_note_window_t3

0x6e31,	// (0x00011073) popup_note_window_t4_ParamLimits

0x6e31,	// (0x00011073) popup_note_window_t4

0x6e59,	// (0x0001109b) popup_note_window_t5_ParamLimits

0x6e59,	// (0x0001109b) popup_note_window_t5

0x0004,

0xf57f,	// (0x000197c1) popup_note_window_t_ParamLimits

0xf57f,	// (0x000197c1) popup_note_window_t

0x6ea3,	// (0x000110e5) bg_popup_window_pane_cp6_ParamLimits

0x6ea3,	// (0x000110e5) bg_popup_window_pane_cp6

0x960b,	// (0x0001384d) popup_note_image_window_g1_ParamLimits

0x960b,	// (0x0001384d) popup_note_image_window_g1

0x9617,	// (0x00013859) popup_note_image_window_g2_ParamLimits

0x9617,	// (0x00013859) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00019a81) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00019a81) popup_note_image_window_g

0x9630,	// (0x00013872) popup_note_image_window_t1_ParamLimits

0x9630,	// (0x00013872) popup_note_image_window_t1

0x9649,	// (0x0001388b) popup_note_image_window_t2_ParamLimits

0x9649,	// (0x0001388b) popup_note_image_window_t2

0x9662,	// (0x000138a4) popup_note_image_window_t3_ParamLimits

0x9662,	// (0x000138a4) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00019a86) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00019a86) popup_note_image_window_t

0x94da,	// (0x0001371c) bg_popup_window_pane_cp7_ParamLimits

0x94da,	// (0x0001371c) bg_popup_window_pane_cp7

0x950a,	// (0x0001374c) popup_note_wait_window_g1_ParamLimits

0x950a,	// (0x0001374c) popup_note_wait_window_g1

0x9516,	// (0x00013758) popup_note_wait_window_g2_ParamLimits

0x9516,	// (0x00013758) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00019a6f) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00019a6f) popup_note_wait_window_g

0x952e,	// (0x00013770) popup_note_wait_window_t1_ParamLimits

0x952e,	// (0x00013770) popup_note_wait_window_t1

0x9555,	// (0x00013797) popup_note_wait_window_t2_ParamLimits

0x9555,	// (0x00013797) popup_note_wait_window_t2

0x9572,	// (0x000137b4) popup_note_wait_window_t3_ParamLimits

0x9572,	// (0x000137b4) popup_note_wait_window_t3

0x9585,	// (0x000137c7) popup_note_wait_window_t4_ParamLimits

0x9585,	// (0x000137c7) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00019a76) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00019a76) popup_note_wait_window_t

0x95aa,	// (0x000137ec) wait_bar_pane_ParamLimits

0x95aa,	// (0x000137ec) wait_bar_pane

0x6a4e,	// (0x00010c90) wait_anim_pane

0x6a4e,	// (0x00010c90) wait_border_pane

0x6967,	// (0x00010ba9) wait_anim_pane_g1

0x6967,	// (0x00010ba9) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00019936) wait_anim_pane_g

0x948a,	// (0x000136cc) wait_border_pane_g1

0x9493,	// (0x000136d5) wait_border_pane_g2

0x949c,	// (0x000136de) wait_border_pane_g3

0x0002,

0xf826,	// (0x00019a68) wait_border_pane_g

0x92fa,	// (0x0001353c) bg_popup_window_pane_cp16_ParamLimits

0x92fa,	// (0x0001353c) bg_popup_window_pane_cp16

0x93fa,	// (0x0001363c) indicator_popup_pane_cp4_ParamLimits

0x93fa,	// (0x0001363c) indicator_popup_pane_cp4

0x940e,	// (0x00013650) popup_query_data_window_t1_ParamLimits

0x940e,	// (0x00013650) popup_query_data_window_t1

0x9420,	// (0x00013662) popup_query_data_window_t2_ParamLimits

0x9420,	// (0x00013662) popup_query_data_window_t2

0x9439,	// (0x0001367b) popup_query_data_window_t3_ParamLimits

0x9439,	// (0x0001367b) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00019a61) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00019a61) popup_query_data_window_t

0x9453,	// (0x00013695) query_popup_data_pane_ParamLimits

0x9453,	// (0x00013695) query_popup_data_pane

0x9467,	// (0x000136a9) query_popup_data_pane_cp1_ParamLimits

0x9467,	// (0x000136a9) query_popup_data_pane_cp1

0x92fa,	// (0x0001353c) bg_popup_window_pane_cp10_ParamLimits

0x92fa,	// (0x0001353c) bg_popup_window_pane_cp10

0x932c,	// (0x0001356e) indicator_popup_pane_ParamLimits

0x932c,	// (0x0001356e) indicator_popup_pane

0x934e,	// (0x00013590) popup_query_code_window_t1_ParamLimits

0x934e,	// (0x00013590) popup_query_code_window_t1

0x9368,	// (0x000135aa) popup_query_code_window_t2_ParamLimits

0x9368,	// (0x000135aa) popup_query_code_window_t2

0x93b1,	// (0x000135f3) popup_query_code_window_t3_ParamLimits

0x93b1,	// (0x000135f3) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00019a5a) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00019a5a) popup_query_code_window_t

0x93e0,	// (0x00013622) query_popup_pane_ParamLimits

0x93e0,	// (0x00013622) query_popup_pane

0x6ea3,	// (0x000110e5) bg_popup_window_pane_cp15_ParamLimits

0x6ea3,	// (0x000110e5) bg_popup_window_pane_cp15

0x6ec1,	// (0x00011103) indicator_popup_pane_cp1_ParamLimits

0x6ec1,	// (0x00011103) indicator_popup_pane_cp1

0x6ed4,	// (0x00011116) indicator_popup_pane_cp2_ParamLimits

0x6ed4,	// (0x00011116) indicator_popup_pane_cp2

0x6ee7,	// (0x00011129) popup_query_data_code_window_g1_ParamLimits

0x6ee7,	// (0x00011129) popup_query_data_code_window_g1

0x6efa,	// (0x0001113c) popup_query_data_code_window_t1_ParamLimits

0x6efa,	// (0x0001113c) popup_query_data_code_window_t1

0x6f0c,	// (0x0001114e) popup_query_data_code_window_t2_ParamLimits

0x6f0c,	// (0x0001114e) popup_query_data_code_window_t2

0x6f1e,	// (0x00011160) popup_query_data_code_window_t3_ParamLimits

0x6f1e,	// (0x00011160) popup_query_data_code_window_t3

0x6f34,	// (0x00011176) popup_query_data_code_window_t4_ParamLimits

0x6f34,	// (0x00011176) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000197cc) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000197cc) popup_query_data_code_window_t

0x55fe,	// (0x0000f840) list_single_midp_graphic_pane_g3

0x6f4c,	// (0x0001118e) query_popup_data_pane_cp2_ParamLimits

0x6f5f,	// (0x000111a1) query_popup_pane_cp2_ParamLimits

0x6f5f,	// (0x000111a1) query_popup_pane_cp2

0x6a4e,	// (0x00010c90) bg_popup_window_pane_cp11

0x92e6,	// (0x00013528) heading_pane_cp5

0x7043,	// (0x00011285) listscroll_popup_info_pane

0x6a4e,	// (0x00010c90) input_focus_pane_cp3

0x6f72,	// (0x000111b4) query_popup_pane_t1

0x6f80,	// (0x000111c2) list_popup_info_pane_ParamLimits

0x6f80,	// (0x000111c2) list_popup_info_pane

0x6f8f,	// (0x000111d1) listscroll_popup_info_pane_g1

0x6f97,	// (0x000111d9) scroll_pane_cp7

0x6f9f,	// (0x000111e1) popup_info_list_pane_t1_ParamLimits

0x6f9f,	// (0x000111e1) popup_info_list_pane_t1

0x6fb9,	// (0x000111fb) popup_info_list_pane_t2_ParamLimits

0x6fb9,	// (0x000111fb) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000197d5) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000197d5) popup_info_list_pane_t

0x6a4e,	// (0x00010c90) bg_popup_window_pane_cp12

0xa5e8,	// (0x0001482a) find_popup_pane

0x6b2e,	// (0x00010d70) bg_popup_window_pane_cp3

0x6fd3,	// (0x00011215) heading_pane_cp3

0x6fdf,	// (0x00011221) listscroll_popup_graphic_pane

0x6a4e,	// (0x00010c90) bg_popup_window_pane_cp4

0x0c7e,	// (0x0000aec0) heading_pane_cp4

0x7043,	// (0x00011285) listscroll_popup_colour_pane

0x704b,	// (0x0001128d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x704b,	// (0x0001128d) cell_large_graphic_colour_none_popup_pane

0x0c86,	// (0x0000aec8) grid_large_graphic_colour_popup_pane_ParamLimits

0x0c86,	// (0x0000aec8) grid_large_graphic_colour_popup_pane

0x0ca2,	// (0x0000aee4) listscroll_popup_colour_pane_g1_ParamLimits

0x0ca2,	// (0x0000aee4) listscroll_popup_colour_pane_g1

0x0cb9,	// (0x0000aefb) listscroll_popup_colour_pane_g2_ParamLimits

0x0cb9,	// (0x0000aefb) listscroll_popup_colour_pane_g2

0x70a2,	// (0x000112e4) listscroll_popup_colour_pane_g3_ParamLimits

0x70a2,	// (0x000112e4) listscroll_popup_colour_pane_g3

0x0ccd,	// (0x0000af0f) listscroll_popup_colour_pane_g4_ParamLimits

0x0ccd,	// (0x0000af0f) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000197da) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000197da) listscroll_popup_colour_pane_g

0x70c1,	// (0x00011303) scroll_pane_cp6_ParamLimits

0x70c1,	// (0x00011303) scroll_pane_cp6

0x0cdc,	// (0x0000af1e) cell_large_graphic_colour_popup_pane_ParamLimits

0x0cdc,	// (0x0000af1e) cell_large_graphic_colour_popup_pane

0x70f2,	// (0x00011334) cell_large_graphic_colour_none_popup_pane_t1

0x6a4e,	// (0x00010c90) grid_highlight_pane_cp5

0x7101,	// (0x00011343) cell_large_graphic_colour_popup_pane_g1

0x7109,	// (0x0001134b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000197e3) cell_large_graphic_colour_popup_pane_g

0x7111,	// (0x00011353) cell_large_graphic_colour_popup_pane_g2_copy1

0x711a,	// (0x0001135c) grid_highlight_pane_cp4

0x7122,	// (0x00011364) bg_popup_window_pane_cp8_ParamLimits

0x7122,	// (0x00011364) bg_popup_window_pane_cp8

0x713d,	// (0x0001137f) popup_snote_single_text_window_g1_ParamLimits

0x713d,	// (0x0001137f) popup_snote_single_text_window_g1

0x714f,	// (0x00011391) popup_snote_single_text_window_t1_ParamLimits

0x714f,	// (0x00011391) popup_snote_single_text_window_t1

0x7162,	// (0x000113a4) popup_snote_single_text_window_t2_ParamLimits

0x7162,	// (0x000113a4) popup_snote_single_text_window_t2

0x7175,	// (0x000113b7) popup_snote_single_text_window_t3_ParamLimits

0x7175,	// (0x000113b7) popup_snote_single_text_window_t3

0x71ae,	// (0x000113f0) popup_snote_single_text_window_t4_ParamLimits

0x71ae,	// (0x000113f0) popup_snote_single_text_window_t4

0x71e2,	// (0x00011424) popup_snote_single_text_window_t5_ParamLimits

0x71e2,	// (0x00011424) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000197e8) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000197e8) popup_snote_single_text_window_t

0x7211,	// (0x00011453) bg_popup_window_pane_cp9_ParamLimits

0x7211,	// (0x00011453) bg_popup_window_pane_cp9

0x713d,	// (0x0001137f) popup_snote_single_graphic_window_g1_ParamLimits

0x713d,	// (0x0001137f) popup_snote_single_graphic_window_g1

0x721f,	// (0x00011461) popup_snote_single_graphic_window_g2_ParamLimits

0x721f,	// (0x00011461) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000197f3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000197f3) popup_snote_single_graphic_window_g

0x722b,	// (0x0001146d) popup_snote_single_graphic_window_t1_ParamLimits

0x722b,	// (0x0001146d) popup_snote_single_graphic_window_t1

0x723e,	// (0x00011480) popup_snote_single_graphic_window_t2_ParamLimits

0x723e,	// (0x00011480) popup_snote_single_graphic_window_t2

0x7175,	// (0x000113b7) popup_snote_single_graphic_window_t3_ParamLimits

0x7175,	// (0x000113b7) popup_snote_single_graphic_window_t3

0x71ae,	// (0x000113f0) popup_snote_single_graphic_window_t4_ParamLimits

0x71ae,	// (0x000113f0) popup_snote_single_graphic_window_t4

0x71e2,	// (0x00011424) popup_snote_single_graphic_window_t5_ParamLimits

0x71e2,	// (0x00011424) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000197f8) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000197f8) popup_snote_single_graphic_window_t

0x26d5,	// (0x0000c917) grid_graphic_popup_pane_ParamLimits

0x26d5,	// (0x0000c917) grid_graphic_popup_pane

0x26f8,	// (0x0000c93a) listscroll_popup_graphic_pane_g1_ParamLimits

0x26f8,	// (0x0000c93a) listscroll_popup_graphic_pane_g1

0x270c,	// (0x0000c94e) listscroll_popup_graphic_pane_g2_ParamLimits

0x270c,	// (0x0000c94e) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00019bd7) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00019bd7) listscroll_popup_graphic_pane_g

0xa5a0,	// (0x000147e2) scroll_pane_cp5

0x2690,	// (0x0000c8d2) cell_graphic_popup_pane_ParamLimits

0x2690,	// (0x0000c8d2) cell_graphic_popup_pane

0xa4d9,	// (0x0001471b) cell_graphic_popup_pane_g1

0xa4e1,	// (0x00014723) cell_graphic_popup_pane_g2

0x7111,	// (0x00011353) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00019bd0) cell_graphic_popup_pane_g

0xa4ea,	// (0x0001472c) cell_graphic_popup_pane_t2

0x711a,	// (0x0001135c) grid_highlight_pane_cp3

0x7263,	// (0x000114a5) list_gen_pane_ParamLimits

0x7263,	// (0x000114a5) list_gen_pane

0x7294,	// (0x000114d6) scroll_pane

0x2663,	// (0x0000c8a5) bg_list_pane_g1_ParamLimits

0x2663,	// (0x0000c8a5) bg_list_pane_g1

0xa470,	// (0x000146b2) bg_list_pane_g2_ParamLimits

0xa470,	// (0x000146b2) bg_list_pane_g2

0xa483,	// (0x000146c5) bg_list_pane_g3_ParamLimits

0xa483,	// (0x000146c5) bg_list_pane_g3

0xa495,	// (0x000146d7) bg_list_pane_g4_ParamLimits

0xa495,	// (0x000146d7) bg_list_pane_g4

0x267e,	// (0x0000c8c0) bg_list_pane_g5_ParamLimits

0x267e,	// (0x0000c8c0) bg_list_pane_g5

0x0004,

0xf983,	// (0x00019bc5) bg_list_pane_g_ParamLimits

0xf983,	// (0x00019bc5) bg_list_pane_g

0x25f3,	// (0x0000c835) list_double2_graphic_large_graphic_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double2_graphic_large_graphic_pane

0x25f3,	// (0x0000c835) list_double2_graphic_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double2_graphic_pane

0x25f3,	// (0x0000c835) list_double2_large_graphic_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double2_large_graphic_pane

0x25f3,	// (0x0000c835) list_double2_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double2_pane

0x25f3,	// (0x0000c835) list_double_graphic_heading_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double_graphic_heading_pane

0x25f3,	// (0x0000c835) list_double_graphic_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double_graphic_pane

0x25f3,	// (0x0000c835) list_double_heading_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double_heading_pane

0x25f3,	// (0x0000c835) list_double_large_graphic_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double_large_graphic_pane

0x25f3,	// (0x0000c835) list_double_number_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double_number_pane

0x25f3,	// (0x0000c835) list_double_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double_pane

0x25f3,	// (0x0000c835) list_double_time_pane_ParamLimits

0x25f3,	// (0x0000c835) list_double_time_pane

0x25f3,	// (0x0000c835) list_setting_number_pane_ParamLimits

0x25f3,	// (0x0000c835) list_setting_number_pane

0x25f3,	// (0x0000c835) list_setting_pane_ParamLimits

0x25f3,	// (0x0000c835) list_setting_pane

0x2604,	// (0x0000c846) list_single_2graphic_pane_ParamLimits

0x2604,	// (0x0000c846) list_single_2graphic_pane

0x2604,	// (0x0000c846) list_single_graphic_heading_pane_ParamLimits

0x2604,	// (0x0000c846) list_single_graphic_heading_pane

0x2604,	// (0x0000c846) list_single_graphic_pane_ParamLimits

0x2604,	// (0x0000c846) list_single_graphic_pane

0x2604,	// (0x0000c846) list_single_heading_pane_ParamLimits

0x2604,	// (0x0000c846) list_single_heading_pane

0x2651,	// (0x0000c893) list_single_large_graphic_pane_ParamLimits

0x2651,	// (0x0000c893) list_single_large_graphic_pane

0x2604,	// (0x0000c846) list_single_number_heading_pane_ParamLimits

0x2604,	// (0x0000c846) list_single_number_heading_pane

0x2604,	// (0x0000c846) list_single_number_pane_ParamLimits

0x2604,	// (0x0000c846) list_single_number_pane

0x2604,	// (0x0000c846) list_single_pane_ParamLimits

0x2604,	// (0x0000c846) list_single_pane

0x6a4e,	// (0x00010c90) list_highlight_pane_cp1

0x74d6,	// (0x00011718) list_single_pane_g1_ParamLimits

0x74d6,	// (0x00011718) list_single_pane_g1

0x7401,	// (0x00011643) list_single_pane_g2_ParamLimits

0x7401,	// (0x00011643) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001980a) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001980a) list_single_pane_g

0x740d,	// (0x0001164f) list_single_pane_t1_ParamLimits

0x740d,	// (0x0001164f) list_single_pane_t1

0x74d6,	// (0x00011718) list_single_number_pane_g1_ParamLimits

0x74d6,	// (0x00011718) list_single_number_pane_g1

0x7401,	// (0x00011643) list_single_number_pane_g2_ParamLimits

0x7401,	// (0x00011643) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001980a) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001980a) list_single_number_pane_g

0x74e2,	// (0x00011724) list_single_number_pane_t1_ParamLimits

0x74e2,	// (0x00011724) list_single_number_pane_t1

0x2457,	// (0x0000c699) list_single_number_pane_t2_ParamLimits

0x2457,	// (0x0000c699) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00019b86) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00019b86) list_single_number_pane_t

0x74ca,	// (0x0001170c) list_single_graphic_pane_g1_ParamLimits

0x74ca,	// (0x0001170c) list_single_graphic_pane_g1

0x74d6,	// (0x00011718) list_single_graphic_pane_g2_ParamLimits

0x74d6,	// (0x00011718) list_single_graphic_pane_g2

0x7401,	// (0x00011643) list_single_graphic_pane_g3_ParamLimits

0x7401,	// (0x00011643) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00019803) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00019803) list_single_graphic_pane_g

0x74e2,	// (0x00011724) list_single_graphic_pane_t1_ParamLimits

0x74e2,	// (0x00011724) list_single_graphic_pane_t1

0x74d6,	// (0x00011718) list_single_heading_pane_g1_ParamLimits

0x74d6,	// (0x00011718) list_single_heading_pane_g1

0x7401,	// (0x00011643) list_single_heading_pane_g2_ParamLimits

0x7401,	// (0x00011643) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001980a) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001980a) list_single_heading_pane_g

0x759f,	// (0x000117e1) list_single_heading_pane_t1_ParamLimits

0x759f,	// (0x000117e1) list_single_heading_pane_t1

0x0d03,	// (0x0000af45) list_single_heading_pane_t2_ParamLimits

0x0d03,	// (0x0000af45) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001980f) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001980f) list_single_heading_pane_t

0x74d6,	// (0x00011718) list_single_number_heading_pane_g1_ParamLimits

0x74d6,	// (0x00011718) list_single_number_heading_pane_g1

0x7401,	// (0x00011643) list_single_number_heading_pane_g2_ParamLimits

0x7401,	// (0x00011643) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001980a) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001980a) list_single_number_heading_pane_g

0x759f,	// (0x000117e1) list_single_number_heading_pane_t1_ParamLimits

0x759f,	// (0x000117e1) list_single_number_heading_pane_t1

0x0d15,	// (0x0000af57) list_single_number_heading_pane_t2_ParamLimits

0x0d15,	// (0x0000af57) list_single_number_heading_pane_t2

0xab20,	// (0x00014d62) list_single_number_heading_pane_t3_ParamLimits

0xab20,	// (0x00014d62) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00019814) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00019814) list_single_number_heading_pane_t

0x74ca,	// (0x0001170c) list_single_graphic_heading_pane_g1_ParamLimits

0x74ca,	// (0x0001170c) list_single_graphic_heading_pane_g1

0x0d27,	// (0x0000af69) list_single_graphic_heading_pane_g4_ParamLimits

0x0d27,	// (0x0000af69) list_single_graphic_heading_pane_g4

0x7401,	// (0x00011643) list_single_graphic_heading_pane_g5_ParamLimits

0x7401,	// (0x00011643) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001981b) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001981b) list_single_graphic_heading_pane_g

0x759f,	// (0x000117e1) list_single_graphic_heading_pane_t1_ParamLimits

0x759f,	// (0x000117e1) list_single_graphic_heading_pane_t1

0x0d38,	// (0x0000af7a) list_single_graphic_heading_pane_t2_ParamLimits

0x0d38,	// (0x0000af7a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00019822) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00019822) list_single_graphic_heading_pane_t

0x7370,	// (0x000115b2) list_single_large_graphic_pane_g1_ParamLimits

0x7370,	// (0x000115b2) list_single_large_graphic_pane_g1

0x737c,	// (0x000115be) list_single_large_graphic_pane_g2_ParamLimits

0x737c,	// (0x000115be) list_single_large_graphic_pane_g2

0x7388,	// (0x000115ca) list_single_large_graphic_pane_g3_ParamLimits

0x7388,	// (0x000115ca) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00019827) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00019827) list_single_large_graphic_pane_g

0x9493,	// (0x000136d5) wait_border_pane_g2_copy1

0x7394,	// (0x000115d6) list_single_large_graphic_pane_g4_cp2

0x739c,	// (0x000115de) list_single_large_graphic_pane_t1_ParamLimits

0x739c,	// (0x000115de) list_single_large_graphic_pane_t1

0x0d4a,	// (0x0000af8c) list_double_pane_g1_ParamLimits

0x0d4a,	// (0x0000af8c) list_double_pane_g1

0x0d56,	// (0x0000af98) list_double_pane_g2_ParamLimits

0x0d56,	// (0x0000af98) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001982e) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001982e) list_double_pane_g

0x0d62,	// (0x0000afa4) list_double_pane_t1_ParamLimits

0x0d62,	// (0x0000afa4) list_double_pane_t1

0x0d78,	// (0x0000afba) list_double_pane_t2_ParamLimits

0x0d78,	// (0x0000afba) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00019833) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00019833) list_double_pane_t

0x0d8a,	// (0x0000afcc) list_double2_pane_g1_ParamLimits

0x0d8a,	// (0x0000afcc) list_double2_pane_g1

0x0d56,	// (0x0000af98) list_double2_pane_g2_ParamLimits

0x0d56,	// (0x0000af98) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00019838) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00019838) list_double2_pane_g

0x0d62,	// (0x0000afa4) list_double2_pane_t1_ParamLimits

0x0d62,	// (0x0000afa4) list_double2_pane_t1

0x0d9b,	// (0x0000afdd) list_double2_pane_t2_ParamLimits

0x0d9b,	// (0x0000afdd) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001983d) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001983d) list_double2_pane_t

0x0d4a,	// (0x0000af8c) list_double_number_pane_g1_ParamLimits

0x0d4a,	// (0x0000af8c) list_double_number_pane_g1

0x0d56,	// (0x0000af98) list_double_number_pane_g2_ParamLimits

0x0d56,	// (0x0000af98) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001982e) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001982e) list_double_number_pane_g

0x0dad,	// (0x0000afef) list_double_number_pane_t1_ParamLimits

0x0dad,	// (0x0000afef) list_double_number_pane_t1

0x0dbf,	// (0x0000b001) list_double_number_pane_t2_ParamLimits

0x0dbf,	// (0x0000b001) list_double_number_pane_t2

0x0dd5,	// (0x0000b017) list_double_number_pane_t3_ParamLimits

0x0dd5,	// (0x0000b017) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00019842) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00019842) list_double_number_pane_t

0x0de7,	// (0x0000b029) list_double_graphic_pane_g1_ParamLimits

0x0de7,	// (0x0000b029) list_double_graphic_pane_g1

0x0df3,	// (0x0000b035) list_double_graphic_pane_g2_ParamLimits

0x0df3,	// (0x0000b035) list_double_graphic_pane_g2

0x0e02,	// (0x0000b044) list_double_graphic_pane_g3_ParamLimits

0x0e02,	// (0x0000b044) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00019849) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00019849) list_double_graphic_pane_g

0x0e1a,	// (0x0000b05c) list_double_graphic_pane_t1_ParamLimits

0x0e1a,	// (0x0000b05c) list_double_graphic_pane_t1

0x0e30,	// (0x0000b072) list_double_graphic_pane_t2_ParamLimits

0x0e30,	// (0x0000b072) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00019852) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00019852) list_double_graphic_pane_t

0x0de7,	// (0x0000b029) list_double2_graphic_pane_g1_ParamLimits

0x0de7,	// (0x0000b029) list_double2_graphic_pane_g1

0x0d4a,	// (0x0000af8c) list_double2_graphic_pane_g2_ParamLimits

0x0d4a,	// (0x0000af8c) list_double2_graphic_pane_g2

0x0d56,	// (0x0000af98) list_double2_graphic_pane_g3_ParamLimits

0x0d56,	// (0x0000af98) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00019857) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00019857) list_double2_graphic_pane_g

0x0dbf,	// (0x0000b001) list_double2_graphic_pane_t1_ParamLimits

0x0dbf,	// (0x0000b001) list_double2_graphic_pane_t1

0x0e42,	// (0x0000b084) list_double2_graphic_pane_t2_ParamLimits

0x0e42,	// (0x0000b084) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001985e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001985e) list_double2_graphic_pane_t

0x0e54,	// (0x0000b096) list_double_large_graphic_pane_g1_ParamLimits

0x0e54,	// (0x0000b096) list_double_large_graphic_pane_g1

0x0d8a,	// (0x0000afcc) list_double_large_graphic_pane_g2_ParamLimits

0x0d8a,	// (0x0000afcc) list_double_large_graphic_pane_g2

0x0d56,	// (0x0000af98) list_double_large_graphic_pane_g3_ParamLimits

0x0d56,	// (0x0000af98) list_double_large_graphic_pane_g3

0x0e7d,	// (0x0000b0bf) list_double_large_graphic_pane_g4_ParamLimits

0x0e7d,	// (0x0000b0bf) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00019863) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00019863) list_double_large_graphic_pane_g

0x0e8e,	// (0x0000b0d0) list_double_large_graphic_pane_t1_ParamLimits

0x0e8e,	// (0x0000b0d0) list_double_large_graphic_pane_t1

0x0ea7,	// (0x0000b0e9) list_double_large_graphic_pane_t2_ParamLimits

0x0ea7,	// (0x0000b0e9) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001986e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001986e) list_double_large_graphic_pane_t

0x0eb9,	// (0x0000b0fb) list_double2_large_graphic_pane_g1_ParamLimits

0x0eb9,	// (0x0000b0fb) list_double2_large_graphic_pane_g1

0x0d8a,	// (0x0000afcc) list_double2_large_graphic_pane_g2_ParamLimits

0x0d8a,	// (0x0000afcc) list_double2_large_graphic_pane_g2

0x0d56,	// (0x0000af98) list_double2_large_graphic_pane_g3_ParamLimits

0x0d56,	// (0x0000af98) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00019873) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00019873) list_double2_large_graphic_pane_g

0x0ec5,	// (0x0000b107) list_double2_large_graphic_pane_t1_ParamLimits

0x0ec5,	// (0x0000b107) list_double2_large_graphic_pane_t1

0x0edb,	// (0x0000b11d) list_double2_large_graphic_pane_t2_ParamLimits

0x0edb,	// (0x0000b11d) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001987a) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001987a) list_double2_large_graphic_pane_t

0x0eed,	// (0x0000b12f) list_double_heading_pane_g1_ParamLimits

0x0eed,	// (0x0000b12f) list_double_heading_pane_g1

0x72e1,	// (0x00011523) list_double_heading_pane_g2_ParamLimits

0x72e1,	// (0x00011523) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001987f) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001987f) list_double_heading_pane_g

0x0efe,	// (0x0000b140) list_double_heading_pane_t1_ParamLimits

0x0efe,	// (0x0000b140) list_double_heading_pane_t1

0x0f14,	// (0x0000b156) list_double_heading_pane_t2_ParamLimits

0x0f14,	// (0x0000b156) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00019884) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00019884) list_double_heading_pane_t

0x746f,	// (0x000116b1) list_double_graphic_heading_pane_g1_ParamLimits

0x746f,	// (0x000116b1) list_double_graphic_heading_pane_g1

0x0eed,	// (0x0000b12f) list_double_graphic_heading_pane_g2_ParamLimits

0x0eed,	// (0x0000b12f) list_double_graphic_heading_pane_g2

0x72e1,	// (0x00011523) list_double_graphic_heading_pane_g3_ParamLimits

0x72e1,	// (0x00011523) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00019889) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00019889) list_double_graphic_heading_pane_g

0x0f26,	// (0x0000b168) list_double_graphic_heading_pane_t1_ParamLimits

0x0f26,	// (0x0000b168) list_double_graphic_heading_pane_t1

0x0f3c,	// (0x0000b17e) list_double_graphic_heading_pane_t2_ParamLimits

0x0f3c,	// (0x0000b17e) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00019890) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00019890) list_double_graphic_heading_pane_t

0x0d8a,	// (0x0000afcc) list_double_time_pane_g1_ParamLimits

0x0d8a,	// (0x0000afcc) list_double_time_pane_g1

0x0d56,	// (0x0000af98) list_double_time_pane_g2_ParamLimits

0x0d56,	// (0x0000af98) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00019838) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00019838) list_double_time_pane_g

0x0ec5,	// (0x0000b107) list_double_time_pane_t1_ParamLimits

0x0ec5,	// (0x0000b107) list_double_time_pane_t1

0x0f4e,	// (0x0000b190) list_double_time_pane_t2_ParamLimits

0x0f4e,	// (0x0000b190) list_double_time_pane_t2

0x0f60,	// (0x0000b1a2) list_double_time_pane_t3_ParamLimits

0x0f60,	// (0x0000b1a2) list_double_time_pane_t3

0x0f72,	// (0x0000b1b4) list_double_time_pane_t4_ParamLimits

0x0f72,	// (0x0000b1b4) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00019895) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00019895) list_double_time_pane_t

0x0d4a,	// (0x0000af8c) list_setting_pane_g1_ParamLimits

0x0d4a,	// (0x0000af8c) list_setting_pane_g1

0x0d56,	// (0x0000af98) list_setting_pane_g2_ParamLimits

0x0d56,	// (0x0000af98) list_setting_pane_g2

0x0001,

0xf5ec,	// (0x0001982e) list_setting_pane_g_ParamLimits

0xf5ec,	// (0x0001982e) list_setting_pane_g

0x0f84,	// (0x0000b1c6) list_setting_pane_t1_ParamLimits

0x0f84,	// (0x0000b1c6) list_setting_pane_t1

0x0f9e,	// (0x0000b1e0) list_setting_pane_t2_ParamLimits

0x0f9e,	// (0x0000b1e0) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0001989e) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0001989e) list_setting_pane_t

0x0fdb,	// (0x0000b21d) set_value_pane_cp_ParamLimits

0x0fdb,	// (0x0000b21d) set_value_pane_cp

0x0d4a,	// (0x0000af8c) list_setting_number_pane_g1_ParamLimits

0x0d4a,	// (0x0000af8c) list_setting_number_pane_g1

0x0d56,	// (0x0000af98) list_setting_number_pane_g2_ParamLimits

0x0d56,	// (0x0000af98) list_setting_number_pane_g2

0x0001,

0xf5ec,	// (0x0001982e) list_setting_number_pane_g_ParamLimits

0xf5ec,	// (0x0001982e) list_setting_number_pane_g

0x0fe7,	// (0x0000b229) list_setting_number_pane_t1_ParamLimits

0x0fe7,	// (0x0000b229) list_setting_number_pane_t1

0x1000,	// (0x0000b242) list_setting_number_pane_t2_ParamLimits

0x1000,	// (0x0000b242) list_setting_number_pane_t2

0x101a,	// (0x0000b25c) list_setting_number_pane_t3_ParamLimits

0x101a,	// (0x0000b25c) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x000198a5) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x000198a5) list_setting_number_pane_t

0x0fdb,	// (0x0000b21d) set_value_pane_ParamLimits

0x0fdb,	// (0x0000b21d) set_value_pane

0x7724,	// (0x00011966) bg_set_opt_pane_ParamLimits

0x7724,	// (0x00011966) bg_set_opt_pane

0x7745,	// (0x00011987) set_value_pane_t1

0x7753,	// (0x00011995) slider_set_pane_cp3

0x775c,	// (0x0001199e) volume_small_pane_cp

0x7765,	// (0x000119a7) list_form_gen_pane

0x72b8,	// (0x000114fa) scroll_pane_cp8

0xaef7,	// (0x00015139) form_field_data_pane_ParamLimits

0xaef7,	// (0x00015139) form_field_data_pane

0x105d,	// (0x0000b29f) form_field_data_wide_pane_ParamLimits

0x105d,	// (0x0000b29f) form_field_data_wide_pane

0x107d,	// (0x0000b2bf) form_field_popup_pane_ParamLimits

0x107d,	// (0x0000b2bf) form_field_popup_pane

0x1095,	// (0x0000b2d7) form_field_popup_wide_pane_ParamLimits

0x1095,	// (0x0000b2d7) form_field_popup_wide_pane

0x77ec,	// (0x00011a2e) form_field_slider_pane_ParamLimits

0x77ec,	// (0x00011a2e) form_field_slider_pane

0x77ff,	// (0x00011a41) form_field_slider_wide_pane_ParamLimits

0x77ff,	// (0x00011a41) form_field_slider_wide_pane

0x7812,	// (0x00011a54) data_form_pane

0x10b6,	// (0x0000b2f8) form_field_data_pane_t1

0x783e,	// (0x00011a80) input_focus_pane

0x784c,	// (0x00011a8e) data_form_wide_pane

0x7878,	// (0x00011aba) form_field_data_wide_pane_t1

0x712f,	// (0x00011371) input_focus_pane_cp6

0x10ce,	// (0x0000b310) form_field_popup_pane_t1

0x783e,	// (0x00011a80) input_focus_pane_cp7

0x7812,	// (0x00011a54) list_form_pane

0x78b7,	// (0x00011af9) form_field_popup_wide_pane_t1

0x783e,	// (0x00011a80) input_focus_pane_cp8

0x78cc,	// (0x00011b0e) list_form_wide_pane

0x10ee,	// (0x0000b330) form_field_slider_pane_t1_ParamLimits

0x10ee,	// (0x0000b330) form_field_slider_pane_t1

0x1104,	// (0x0000b346) form_field_slider_pane_t2_ParamLimits

0x1104,	// (0x0000b346) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x000198b5) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x000198b5) form_field_slider_pane_t

0x6dc7,	// (0x00011009) input_focus_pane_cp9_ParamLimits

0x6dc7,	// (0x00011009) input_focus_pane_cp9

0x1119,	// (0x0000b35b) slider_cont_pane_ParamLimits

0x1119,	// (0x0000b35b) slider_cont_pane

0x791f,	// (0x00011b61) form_field_slider_wide_pane_t1_ParamLimits

0x791f,	// (0x00011b61) form_field_slider_wide_pane_t1

0x7931,	// (0x00011b73) form_field_slider_wide_pane_t2_ParamLimits

0x7931,	// (0x00011b73) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x000198ba) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x000198ba) form_field_slider_wide_pane_t

0x6dc7,	// (0x00011009) input_focus_pane_cp10_ParamLimits

0x6dc7,	// (0x00011009) input_focus_pane_cp10

0x112d,	// (0x0000b36f) slider_cont_pane_cp1_ParamLimits

0x112d,	// (0x0000b36f) slider_cont_pane_cp1

0x1143,	// (0x0000b385) slider_form_pane_cp

0x7961,	// (0x00011ba3) input_focus_pane_g1

0x7969,	// (0x00011bab) input_focus_pane_g2

0x7971,	// (0x00011bb3) input_focus_pane_g3

0x7979,	// (0x00011bbb) input_focus_pane_g4

0x7981,	// (0x00011bc3) input_focus_pane_g5

0x7989,	// (0x00011bcb) input_focus_pane_g6

0x7991,	// (0x00011bd3) input_focus_pane_g7

0x7999,	// (0x00011bdb) input_focus_pane_g8

0x79a1,	// (0x00011be3) input_focus_pane_g9

0x6967,	// (0x00010ba9) input_focus_pane_g10

0x0009,

0xf67d,	// (0x000198bf) input_focus_pane_g

0x949c,	// (0x000136de) wait_border_pane_g3_copy1

0x114b,	// (0x0000b38d) data_form_pane_t1

0x6967,	// (0x00010ba9) wait_anim_pane_g1_copy1

0x25da,	// (0x0000c81c) data_form_wide_pane_t1

0xa92b,	// (0x00014b6d) list_form_graphic_pane_cp_ParamLimits

0xa92b,	// (0x00014b6d) list_form_graphic_pane_cp

0xa306,	// (0x00014548) slider_form_pane_g1

0xa30f,	// (0x00014551) slider_form_pane_g2

0x0006,

0xf974,	// (0x00019bb6) slider_form_pane_g

0x79c3,	// (0x00011c05) list_form_graphic_pane_ParamLimits

0x79c3,	// (0x00011c05) list_form_graphic_pane

0x79ee,	// (0x00011c30) list_form_graphic_pane_g1

0x79f6,	// (0x00011c38) list_form_graphic_pane_t1_ParamLimits

0x79f6,	// (0x00011c38) list_form_graphic_pane_t1

0x6b2e,	// (0x00010d70) list_highlight_pane_cp5_ParamLimits

0x6b2e,	// (0x00010d70) list_highlight_pane_cp5

0x1164,	// (0x0000b3a6) find_pane_g1

0x7a14,	// (0x00011c56) input_find_pane

0x116f,	// (0x0000b3b1) input_find_pane_g1_ParamLimits

0x116f,	// (0x0000b3b1) input_find_pane_g1

0x117b,	// (0x0000b3bd) input_find_pane_t1_ParamLimits

0x117b,	// (0x0000b3bd) input_find_pane_t1

0x1190,	// (0x0000b3d2) input_find_pane_t2_ParamLimits

0x1190,	// (0x0000b3d2) input_find_pane_t2

0x0001,

0xf692,	// (0x000198d4) input_find_pane_t_ParamLimits

0xf692,	// (0x000198d4) input_find_pane_t

0x7a53,	// (0x00011c95) input_focus_pane_cp5_ParamLimits

0x7a53,	// (0x00011c95) input_focus_pane_cp5

0x6dc7,	// (0x00011009) bg_popup_window_pane_cp2_ParamLimits

0x6dc7,	// (0x00011009) bg_popup_window_pane_cp2

0x7a6d,	// (0x00011caf) listscroll_menu_pane_ParamLimits

0x7a6d,	// (0x00011caf) listscroll_menu_pane

0x7a79,	// (0x00011cbb) popup_submenu_window_ParamLimits

0x7a79,	// (0x00011cbb) popup_submenu_window

0x7a9d,	// (0x00011cdf) find_popup_pane_g1

0x7aa5,	// (0x00011ce7) input_popup_find_pane_cp

0x7a53,	// (0x00011c95) input_focus_pane_cp4_ParamLimits

0x7a53,	// (0x00011c95) input_focus_pane_cp4

0x7abb,	// (0x00011cfd) input_popup_find_pane_t1_ParamLimits

0x7abb,	// (0x00011cfd) input_popup_find_pane_t1

0x6a4e,	// (0x00010c90) bg_popup_sub_pane_cp

0x7ae9,	// (0x00011d2b) listscroll_popup_sub_pane

0x7af1,	// (0x00011d33) list_submenu_pane_ParamLimits

0x7af1,	// (0x00011d33) list_submenu_pane

0x7b02,	// (0x00011d44) scroll_pane_cp4

0x7b0a,	// (0x00011d4c) list_single_popup_submenu_pane_ParamLimits

0x7b0a,	// (0x00011d4c) list_single_popup_submenu_pane

0x7b1c,	// (0x00011d5e) list_single_popup_submenu_pane_g1

0x7b24,	// (0x00011d66) list_single_popup_submenu_pane_t1_ParamLimits

0x7b24,	// (0x00011d66) list_single_popup_submenu_pane_t1

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp1_ParamLimits

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp1

0xa5c6,	// (0x00014808) tabs_2_active_pane_g1

0x11b1,	// (0x0000b3f3) tabs_2_active_pane_t1

0x6dc7,	// (0x00011009) bg_passive_tab_pane_cp1_ParamLimits

0x6dc7,	// (0x00011009) bg_passive_tab_pane_cp1

0xa5c6,	// (0x00014808) tabs_2_passive_pane_g1

0x11b1,	// (0x0000b3f3) tabs_2_passive_pane_t1

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp4

0x11c7,	// (0x0000b409) tabs_2_long_active_pane_t1

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp4

0x5606,	// (0x0000f848) list_single_midp_graphic_pane_g4_ParamLimits

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp5

0x11de,	// (0x0000b420) tabs_3_long_active_pane_t1

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp5

0x5606,	// (0x0000f848) list_single_midp_graphic_pane_g4

0x6b2e,	// (0x00010d70) bg_popup_window_pane_cp13_ParamLimits

0x6b2e,	// (0x00010d70) bg_popup_window_pane_cp13

0x7b9b,	// (0x00011ddd) listscroll_popup_fast_pane_ParamLimits

0x7b9b,	// (0x00011ddd) listscroll_popup_fast_pane

0x7baa,	// (0x00011dec) grid_popup_fast_pane_ParamLimits

0x7baa,	// (0x00011dec) grid_popup_fast_pane

0x7bbc,	// (0x00011dfe) scroll_pane_cp9_ParamLimits

0x7bbc,	// (0x00011dfe) scroll_pane_cp9

0xbf31,	// (0x00016173) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbf31,	// (0x00016173) list_single_graphic_hl_pane_t1_cp2

0x7be0,	// (0x00011e22) input_focus_pane_cp20_ParamLimits

0x7be0,	// (0x00011e22) input_focus_pane_cp20

0x7bee,	// (0x00011e30) query_popup_data_pane_t1_ParamLimits

0x7bee,	// (0x00011e30) query_popup_data_pane_t1

0x7c01,	// (0x00011e43) query_popup_data_pane_t2_ParamLimits

0x7c01,	// (0x00011e43) query_popup_data_pane_t2

0x7c47,	// (0x00011e89) query_popup_data_pane_t3_ParamLimits

0x7c47,	// (0x00011e89) query_popup_data_pane_t3

0x7c88,	// (0x00011eca) query_popup_data_pane_t4_ParamLimits

0x7c88,	// (0x00011eca) query_popup_data_pane_t4

0x7cc4,	// (0x00011f06) query_popup_data_pane_t5_ParamLimits

0x7cc4,	// (0x00011f06) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x000198d9) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x000198d9) query_popup_data_pane_t

0x7961,	// (0x00011ba3) bg_set_opt_pane_g1

0x7969,	// (0x00011bab) bg_set_opt_pane_g2

0x7971,	// (0x00011bb3) bg_set_opt_pane_g3

0x7979,	// (0x00011bbb) bg_set_opt_pane_g4

0x7981,	// (0x00011bc3) bg_set_opt_pane_g5

0x7989,	// (0x00011bcb) bg_set_opt_pane_g6

0x7991,	// (0x00011bd3) bg_set_opt_pane_g7

0x7999,	// (0x00011bdb) bg_set_opt_pane_g8

0x79a1,	// (0x00011be3) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x000198e4) bg_set_opt_pane_g

0x4d66,	// (0x0000efa8) control_top_pane_stacon_ParamLimits

0x4d66,	// (0x0000efa8) control_top_pane_stacon

0x4db9,	// (0x0000effb) signal_pane_stacon_ParamLimits

0x4db9,	// (0x0000effb) signal_pane_stacon

0x8308,	// (0x0001254a) stacon_top_pane_g1_ParamLimits

0x8308,	// (0x0001254a) stacon_top_pane_g1

0x4dde,	// (0x0000f020) title_pane_stacon_ParamLimits

0x4dde,	// (0x0000f020) title_pane_stacon

0x4e00,	// (0x0000f042) uni_indicator_pane_stacon_ParamLimits

0x4e00,	// (0x0000f042) uni_indicator_pane_stacon

0x4e15,	// (0x0000f057) battery_pane_stacon_ParamLimits

0x4e15,	// (0x0000f057) battery_pane_stacon

0x4e55,	// (0x0000f097) control_bottom_pane_stacon_ParamLimits

0x4e55,	// (0x0000f097) control_bottom_pane_stacon

0x4e74,	// (0x0000f0b6) navi_pane_stacon_ParamLimits

0x4e74,	// (0x0000f0b6) navi_pane_stacon

0x832a,	// (0x0001256c) stacon_bottom_pane_g1_ParamLimits

0x832a,	// (0x0001256c) stacon_bottom_pane_g1

0x7cfb,	// (0x00011f3d) aid_levels_signal_lsc_ParamLimits

0x7cfb,	// (0x00011f3d) aid_levels_signal_lsc

0x4b32,	// (0x0000ed74) signal_pane_stacon_g1_ParamLimits

0x4b32,	// (0x0000ed74) signal_pane_stacon_g1

0x4b3e,	// (0x0000ed80) signal_pane_stacon_g2_ParamLimits

0x4b3e,	// (0x0000ed80) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x000198f7) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x000198f7) signal_pane_stacon_g

0x4b72,	// (0x0000edb4) title_pane_stacon_t1_ParamLimits

0x4b72,	// (0x0000edb4) title_pane_stacon_t1

0x7d15,	// (0x00011f57) uni_indicator_pane_stacon_g1

0x7d1f,	// (0x00011f61) uni_indicator_pane_stacon_g2

0x7d29,	// (0x00011f6b) uni_indicator_pane_stacon_g3

0x7d33,	// (0x00011f75) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00019903) uni_indicator_pane_stacon_g

0x4b97,	// (0x0000edd9) control_top_pane_stacon_g1

0x4b9f,	// (0x0000ede1) control_top_pane_stacon_t1_ParamLimits

0x4b9f,	// (0x0000ede1) control_top_pane_stacon_t1

0x7d3d,	// (0x00011f7f) aid_levels_battery_lsc_ParamLimits

0x7d3d,	// (0x00011f7f) aid_levels_battery_lsc

0x4bd0,	// (0x0000ee12) battery_pane_stacon_g1_ParamLimits

0x4bd0,	// (0x0000ee12) battery_pane_stacon_g1

0x4bdc,	// (0x0000ee1e) battery_pane_stacon_g2_ParamLimits

0x4bdc,	// (0x0000ee1e) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0001990c) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001990c) battery_pane_stacon_g

0x4c0b,	// (0x0000ee4d) navi_icon_pane_stacon

0x4c1b,	// (0x0000ee5d) navi_navi_pane_stacon

0x4c0b,	// (0x0000ee4d) navi_text_pane_stacon

0x4b97,	// (0x0000edd9) control_bottom_pane_stacon_g1

0x4c2b,	// (0x0000ee6d) control_bottom_pane_stacon_t1_ParamLimits

0x4c2b,	// (0x0000ee6d) control_bottom_pane_stacon_t1

0x11f4,	// (0x0000b436) grid_app_pane_ParamLimits

0x11f4,	// (0x0000b436) grid_app_pane

0x1222,	// (0x0000b464) scroll_pane_cp15_ParamLimits

0x1222,	// (0x0000b464) scroll_pane_cp15

0x1235,	// (0x0000b477) cell_app_pane_ParamLimits

0x1235,	// (0x0000b477) cell_app_pane

0x1272,	// (0x0000b4b4) cell_app_pane_g1_ParamLimits

0x1272,	// (0x0000b4b4) cell_app_pane_g1

0x7dda,	// (0x0001201c) cell_app_pane_g2_ParamLimits

0x7dda,	// (0x0001201c) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00019911) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00019911) cell_app_pane_g

0x1296,	// (0x0000b4d8) cell_app_pane_t1_ParamLimits

0x1296,	// (0x0000b4d8) cell_app_pane_t1

0x7dfd,	// (0x0001203f) grid_highlight_pane_ParamLimits

0x7dfd,	// (0x0001203f) grid_highlight_pane

0x7961,	// (0x00011ba3) cell_highlight_pane_g1

0x7969,	// (0x00011bab) cell_highlight_pane_g2

0x7971,	// (0x00011bb3) cell_highlight_pane_g3

0x7979,	// (0x00011bbb) cell_highlight_pane_g4

0x7981,	// (0x00011bc3) cell_highlight_pane_g5

0x7989,	// (0x00011bcb) cell_highlight_pane_g6

0x7991,	// (0x00011bd3) cell_highlight_pane_g7

0x7999,	// (0x00011bdb) cell_highlight_pane_g8

0x79a1,	// (0x00011be3) cell_highlight_pane_g9

0x6967,	// (0x00010ba9) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x000198bf) cell_highlight_pane_g

0x7e0e,	// (0x00012050) bg_scroll_pane

0x4c6f,	// (0x0000eeb1) scroll_handle_pane

0x7e55,	// (0x00012097) scroll_bg_pane_g1

0x7e6a,	// (0x000120ac) scroll_bg_pane_g2

0x7e82,	// (0x000120c4) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00019916) scroll_bg_pane_g

0x7e97,	// (0x000120d9) scroll_handle_focus_pane_ParamLimits

0x7e97,	// (0x000120d9) scroll_handle_focus_pane

0x7e55,	// (0x00012097) scroll_handle_pane_g1

0x7ea4,	// (0x000120e6) scroll_handle_pane_g2

0x7e82,	// (0x000120c4) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x0001991d) scroll_handle_pane_g

0x7a53,	// (0x00011c95) bg_popup_sub_pane_cp21_ParamLimits

0x7a53,	// (0x00011c95) bg_popup_sub_pane_cp21

0x7eb8,	// (0x000120fa) popup_fep_japan_predictive_window_t1_ParamLimits

0x7eb8,	// (0x000120fa) popup_fep_japan_predictive_window_t1

0x7ecf,	// (0x00012111) popup_fep_japan_predictive_window_t2_ParamLimits

0x7ecf,	// (0x00012111) popup_fep_japan_predictive_window_t2

0x7f02,	// (0x00012144) popup_fep_japan_predictive_window_t3_ParamLimits

0x7f02,	// (0x00012144) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00019924) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00019924) popup_fep_japan_predictive_window_t

0x6a4e,	// (0x00010c90) bg_popup_sub_pane_cp23

0x7f39,	// (0x0001217b) listscroll_japin_cand_pane

0x7f41,	// (0x00012183) popup_fep_japan_candidate_window_t1

0x7f4f,	// (0x00012191) candidate_pane_ParamLimits

0x7f4f,	// (0x00012191) candidate_pane

0x7f62,	// (0x000121a4) scroll_pane_cp30

0x7f6a,	// (0x000121ac) list_single_popup_jap_candidate_pane_ParamLimits

0x7f6a,	// (0x000121ac) list_single_popup_jap_candidate_pane

0x6a4e,	// (0x00010c90) list_highlight_pane_cp30

0x7f7f,	// (0x000121c1) list_single_popup_jap_candidate_pane_t1

0x12b6,	// (0x0000b4f8) level_1_signal

0x12c8,	// (0x0000b50a) level_2_signal

0x12db,	// (0x0000b51d) level_3_signal

0x12ee,	// (0x0000b530) level_4_signal

0x1301,	// (0x0000b543) level_5_signal

0x1314,	// (0x0000b556) level_6_signal

0x1327,	// (0x0000b569) level_7_signal

0x12b6,	// (0x0000b4f8) level_1_battery

0x12c8,	// (0x0000b50a) level_2_battery

0x12db,	// (0x0000b51d) level_3_battery

0x12ee,	// (0x0000b530) level_4_battery

0x1301,	// (0x0000b543) level_5_battery

0x1314,	// (0x0000b556) level_6_battery

0x1327,	// (0x0000b569) level_7_battery

0x8001,	// (0x00012243) list_menu_pane_ParamLimits

0x8001,	// (0x00012243) list_menu_pane

0x8017,	// (0x00012259) scroll_pane_cp25_ParamLimits

0x8017,	// (0x00012259) scroll_pane_cp25

0x133a,	// (0x0000b57c) list_double2_graphic_pane_cp2_ParamLimits

0x133a,	// (0x0000b57c) list_double2_graphic_pane_cp2

0x133a,	// (0x0000b57c) list_double2_large_graphic_pane_cp2_ParamLimits

0x133a,	// (0x0000b57c) list_double2_large_graphic_pane_cp2

0x133a,	// (0x0000b57c) list_double2_pane_cp2_ParamLimits

0x133a,	// (0x0000b57c) list_double2_pane_cp2

0x133a,	// (0x0000b57c) list_double_graphic_pane_cp2_ParamLimits

0x133a,	// (0x0000b57c) list_double_graphic_pane_cp2

0x133a,	// (0x0000b57c) list_double_large_graphic_pane_cp2_ParamLimits

0x133a,	// (0x0000b57c) list_double_large_graphic_pane_cp2

0x133a,	// (0x0000b57c) list_double_number_pane_cp2_ParamLimits

0x133a,	// (0x0000b57c) list_double_number_pane_cp2

0x133a,	// (0x0000b57c) list_double_pane_cp2_ParamLimits

0x133a,	// (0x0000b57c) list_double_pane_cp2

0x1355,	// (0x0000b597) list_single_2graphic_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_2graphic_pane_cp2

0x1355,	// (0x0000b597) list_single_graphic_heading_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_graphic_heading_pane_cp2

0x1355,	// (0x0000b597) list_single_graphic_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_graphic_pane_cp2

0x1355,	// (0x0000b597) list_single_heading_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_heading_pane_cp2

0x1366,	// (0x0000b5a8) list_single_large_graphic_pane_cp2_ParamLimits

0x1366,	// (0x0000b5a8) list_single_large_graphic_pane_cp2

0x1355,	// (0x0000b597) list_single_number_heading_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_number_heading_pane_cp2

0x1355,	// (0x0000b597) list_single_number_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_number_pane_cp2

0x1355,	// (0x0000b597) list_single_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_pane_cp2

0x80d1,	// (0x00012313) bg_popup_sub_pane_cp22

0x4d1e,	// (0x0000ef60) popup_side_volume_key_window_g1

0x4d42,	// (0x0000ef84) popup_side_volume_key_window_t1

0x4d5e,	// (0x0000efa0) volume_small_pane_cp1

0x6dc7,	// (0x00011009) bg_popup_sub_pane_cp24_ParamLimits

0x6dc7,	// (0x00011009) bg_popup_sub_pane_cp24

0x80e7,	// (0x00012329) fep_china_uni_candidate_pane_ParamLimits

0x80e7,	// (0x00012329) fep_china_uni_candidate_pane

0x80fb,	// (0x0001233d) fep_china_uni_entry_pane

0x810b,	// (0x0001234d) popup_fep_china_uni_window_g1

0x8127,	// (0x00012369) fep_china_uni_entry_pane_g1

0x812f,	// (0x00012371) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00019955) fep_china_uni_entry_pane_g

0x8137,	// (0x00012379) fep_entry_item_pane

0x8141,	// (0x00012383) fep_candidate_item_pane

0x8149,	// (0x0001238b) fep_china_uni_candidate_pane_g1

0x8151,	// (0x00012393) fep_china_uni_candidate_pane_g2

0x8159,	// (0x0001239b) fep_china_uni_candidate_pane_g3

0x8161,	// (0x000123a3) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0001995a) fep_china_uni_candidate_pane_g

0x6967,	// (0x00010ba9) fep_entry_item_pane_g1

0x8169,	// (0x000123ab) fep_entry_item_pane_t1_ParamLimits

0x8169,	// (0x000123ab) fep_entry_item_pane_t1

0x817f,	// (0x000123c1) fep_candidate_item_pane_t1_ParamLimits

0x817f,	// (0x000123c1) fep_candidate_item_pane_t1

0x8194,	// (0x000123d6) fep_candidate_item_pane_t2_ParamLimits

0x8194,	// (0x000123d6) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00019963) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00019963) fep_candidate_item_pane_t

0x6b2e,	// (0x00010d70) list_highlight_pane_cp31_ParamLimits

0x6b2e,	// (0x00010d70) list_highlight_pane_cp31

0x81a6,	// (0x000123e8) level_1_signal_lsc

0x81af,	// (0x000123f1) level_2_signal_lsc

0x81b8,	// (0x000123fa) level_3_signal_lsc

0x81c1,	// (0x00012403) level_4_signal_lsc

0x81ca,	// (0x0001240c) level_5_signal_lsc

0x81d3,	// (0x00012415) level_6_signal_lsc

0x81dc,	// (0x0001241e) level_7_signal_lsc

0x81dc,	// (0x0001241e) level_1_battery_lsc

0x81e5,	// (0x00012427) level_2_battery_lsc

0x81ee,	// (0x00012430) level_3_battery_lsc

0x81f7,	// (0x00012439) level_4_battery_lsc

0x8200,	// (0x00012442) level_5_battery_lsc

0x8209,	// (0x0001244b) level_6_battery_lsc

0x81a6,	// (0x000123e8) level_7_battery_lsc

0x8212,	// (0x00012454) scroll_handle_focus_pane_g1

0x821b,	// (0x0001245d) scroll_handle_focus_pane_g2

0x8224,	// (0x00012466) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00019968) scroll_handle_focus_pane_g

0x13eb,	// (0x0000b62d) list_single_2graphic_pane_g1_ParamLimits

0x13eb,	// (0x0000b62d) list_single_2graphic_pane_g1

0x0d27,	// (0x0000af69) list_single_2graphic_pane_g2_ParamLimits

0x0d27,	// (0x0000af69) list_single_2graphic_pane_g2

0x7401,	// (0x00011643) list_single_2graphic_pane_g3_ParamLimits

0x7401,	// (0x00011643) list_single_2graphic_pane_g3

0x13f7,	// (0x0000b639) list_single_2graphic_pane_g4_ParamLimits

0x13f7,	// (0x0000b639) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x0001996f) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x0001996f) list_single_2graphic_pane_g

0x1403,	// (0x0000b645) list_single_2graphic_pane_t1_ParamLimits

0x1403,	// (0x0000b645) list_single_2graphic_pane_t1

0x1431,	// (0x0000b673) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1431,	// (0x0000b673) list_double2_graphic_large_graphic_pane_g1

0x0d8a,	// (0x0000afcc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0d8a,	// (0x0000afcc) list_double2_graphic_large_graphic_pane_g2

0x0d56,	// (0x0000af98) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0d56,	// (0x0000af98) list_double2_graphic_large_graphic_pane_g3

0x1441,	// (0x0000b683) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1441,	// (0x0000b683) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00019978) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00019978) list_double2_graphic_large_graphic_pane_g

0x144d,	// (0x0000b68f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x144d,	// (0x0000b68f) list_double2_graphic_large_graphic_pane_t1

0x1463,	// (0x0000b6a5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x1463,	// (0x0000b6a5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00019981) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00019981) list_double2_graphic_large_graphic_pane_t

0x83d1,	// (0x00012613) popup_fast_swap_window_ParamLimits

0x83d1,	// (0x00012613) popup_fast_swap_window

0x83ed,	// (0x0001262f) popup_side_volume_key_window

0x8407,	// (0x00012649) stacon_top_pane

0x8411,	// (0x00012653) status_pane_ParamLimits

0x8411,	// (0x00012653) status_pane

0x14bf,	// (0x0000b701) status_small_pane

0x6a4e,	// (0x00010c90) control_pane

0x6a4e,	// (0x00010c90) stacon_bottom_pane

0x72b8,	// (0x000114fa) scroll_pane_cp121

0x7765,	// (0x000119a7) set_content_pane

0xa5b4,	// (0x000147f6) bg_active_tab_pane_g1_cp1

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp1

0xa5bd,	// (0x000147ff) bg_active_tab_pane_g3_cp1

0xa5b4,	// (0x000147f6) bg_passive_tab_pane_g1_cp1

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp1

0xa5bd,	// (0x000147ff) bg_passive_tab_pane_g3_cp1

0x147e,	// (0x0000b6c0) bg_active_tab_pane_g1_cp2

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp2

0x1475,	// (0x0000b6b7) bg_active_tab_pane_g3_cp2

0x147e,	// (0x0000b6c0) bg_passive_tab_pane_g1_cp2

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp2

0x1475,	// (0x0000b6b7) bg_passive_tab_pane_g3_cp2

0x1490,	// (0x0000b6d2) bg_active_tab_pane_g1_cp3

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp3

0x1487,	// (0x0000b6c9) bg_active_tab_pane_g3_cp3

0x1490,	// (0x0000b6d2) bg_passive_tab_pane_g1_cp3

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp3

0x1487,	// (0x0000b6c9) bg_passive_tab_pane_g3_cp3

0x14a2,	// (0x0000b6e4) bg_active_tab_pane_g1_cp4

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp4

0x1499,	// (0x0000b6db) bg_active_tab_pane_g3_cp4

0x14a2,	// (0x0000b6e4) bg_passive_tab_pane_g1_cp4

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp4

0x1499,	// (0x0000b6db) bg_passive_tab_pane_g3_cp4

0x8346,	// (0x00012588) bg_active_tab_pane_g1_cp5

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp5

0x834f,	// (0x00012591) bg_active_tab_pane_g3_cp5

0x8346,	// (0x00012588) bg_passive_tab_pane_g1_cp5

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp5

0x834f,	// (0x00012591) bg_passive_tab_pane_g3_cp5

0x14ab,	// (0x0000b6ed) list_set_graphic_pane_ParamLimits

0x14ab,	// (0x0000b6ed) list_set_graphic_pane

0x6a4e,	// (0x00010c90) bg_set_opt_pane_cp4

0x8358,	// (0x0001259a) list_set_graphic_pane_g1_ParamLimits

0x8358,	// (0x0001259a) list_set_graphic_pane_g1

0x8364,	// (0x000125a6) list_set_graphic_pane_g2_ParamLimits

0x8364,	// (0x000125a6) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00019986) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00019986) list_set_graphic_pane_g

0x0009,

0xfabb,	// (0x00019cfd) volume_small_pane_cp_g

0x8386,	// (0x000125c8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8386,	// (0x000125c8) list_double2_large_graphic_pane_g1_cp2

0x8392,	// (0x000125d4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8392,	// (0x000125d4) list_double2_large_graphic_pane_g2_cp2

0x83a1,	// (0x000125e3) list_double2_large_graphic_pane_g3_cp2

0x83a9,	// (0x000125eb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x83a9,	// (0x000125eb) list_double2_large_graphic_pane_t1_cp2

0x83bf,	// (0x00012601) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x83bf,	// (0x00012601) list_double2_large_graphic_pane_t2_cp2

0x9f02,	// (0x00014144) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9f02,	// (0x00014144) list_double_large_graphic_pane_g1_cp2

0x9f13,	// (0x00014155) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9f13,	// (0x00014155) list_double_large_graphic_pane_g2_cp2

0x84f5,	// (0x00012737) list_double_large_graphic_pane_g3_cp2

0x9f22,	// (0x00014164) list_double_large_graphic_pane_g4_cp

0x9f2a,	// (0x0001416c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9f2a,	// (0x0001416c) list_double_large_graphic_pane_t1_cp2

0x9f41,	// (0x00014183) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9f41,	// (0x00014183) list_double_large_graphic_pane_t2_cp2

0x8428,	// (0x0001266a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8428,	// (0x0001266a) list_double2_graphic_pane_g1_cp2

0x8434,	// (0x00012676) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8434,	// (0x00012676) list_double2_graphic_pane_g2_cp2

0x8443,	// (0x00012685) list_double2_graphic_pane_g3_cp2

0x844b,	// (0x0001268d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x844b,	// (0x0001268d) list_double2_graphic_pane_t1_cp2

0x8461,	// (0x000126a3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8461,	// (0x000126a3) list_double2_graphic_pane_t2_cp2

0x8473,	// (0x000126b5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8473,	// (0x000126b5) list_single_number_heading_pane_g1_cp2

0x847f,	// (0x000126c1) list_single_number_heading_pane_g2_cp2

0x8487,	// (0x000126c9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8487,	// (0x000126c9) list_single_number_heading_pane_t1_cp2

0x849d,	// (0x000126df) list_single_number_heading_pane_t2_cp2_ParamLimits

0x849d,	// (0x000126df) list_single_number_heading_pane_t2_cp2

0x84af,	// (0x000126f1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x84af,	// (0x000126f1) list_single_number_heading_pane_t3_cp2

0x8473,	// (0x000126b5) list_single_heading_pane_g1_cp2_ParamLimits

0x8473,	// (0x000126b5) list_single_heading_pane_g1_cp2

0x847f,	// (0x000126c1) list_single_heading_pane_g2_cp2

0x8487,	// (0x000126c9) list_single_heading_pane_t1_cp2_ParamLimits

0x8487,	// (0x000126c9) list_single_heading_pane_t1_cp2

0x9d0c,	// (0x00013f4e) list_single_heading_pane_t2_cp2_ParamLimits

0x9d0c,	// (0x00013f4e) list_single_heading_pane_t2_cp2

0x9c5c,	// (0x00013e9e) list_double_graphic_pane_g1_cp2_ParamLimits

0x9c5c,	// (0x00013e9e) list_double_graphic_pane_g1_cp2

0x9c68,	// (0x00013eaa) list_double_graphic_pane_g2_cp2_ParamLimits

0x9c68,	// (0x00013eaa) list_double_graphic_pane_g2_cp2

0x9c77,	// (0x00013eb9) list_double_graphic_pane_g3_cp2

0x9c7f,	// (0x00013ec1) list_double_graphic_pane_t1_cp2_ParamLimits

0x9c7f,	// (0x00013ec1) list_double_graphic_pane_t1_cp2

0x9c95,	// (0x00013ed7) list_double_graphic_pane_t2_cp2_ParamLimits

0x9c95,	// (0x00013ed7) list_double_graphic_pane_t2_cp2

0x84e9,	// (0x0001272b) list_double_number_pane_g1_cp2_ParamLimits

0x84e9,	// (0x0001272b) list_double_number_pane_g1_cp2

0x84f5,	// (0x00012737) list_double_number_pane_g2_cp2

0x9c22,	// (0x00013e64) list_double_number_pane_t1_cp2_ParamLimits

0x9c22,	// (0x00013e64) list_double_number_pane_t1_cp2

0x9c34,	// (0x00013e76) list_double_number_pane_t2_cp2_ParamLimits

0x9c34,	// (0x00013e76) list_double_number_pane_t2_cp2

0x9c4a,	// (0x00013e8c) list_double_number_pane_t3_cp2_ParamLimits

0x9c4a,	// (0x00013e8c) list_double_number_pane_t3_cp2

0x9b0c,	// (0x00013d4e) list_single_graphic_pane_g1_cp2_ParamLimits

0x9b0c,	// (0x00013d4e) list_single_graphic_pane_g1_cp2

0x8473,	// (0x000126b5) list_single_graphic_pane_g2_cp2_ParamLimits

0x8473,	// (0x000126b5) list_single_graphic_pane_g2_cp2

0x847f,	// (0x000126c1) list_single_graphic_pane_g3_cp2

0x9ae4,	// (0x00013d26) list_single_graphic_pane_t1_cp2_ParamLimits

0x9ae4,	// (0x00013d26) list_single_graphic_pane_t1_cp2

0x8473,	// (0x000126b5) list_single_number_pane_g1_cp2_ParamLimits

0x8473,	// (0x000126b5) list_single_number_pane_g1_cp2

0x847f,	// (0x000126c1) list_single_number_pane_g2_cp2

0x9ae4,	// (0x00013d26) list_single_number_pane_t1_cp2_ParamLimits

0x9ae4,	// (0x00013d26) list_single_number_pane_t1_cp2

0x9afa,	// (0x00013d3c) list_single_number_pane_t2_cp2_ParamLimits

0x9afa,	// (0x00013d3c) list_single_number_pane_t2_cp2

0x8392,	// (0x000125d4) list_double2_pane_g1_cp2_ParamLimits

0x8392,	// (0x000125d4) list_double2_pane_g1_cp2

0x83a1,	// (0x000125e3) list_double2_pane_g2_cp2

0x84c1,	// (0x00012703) list_double2_pane_t1_cp2_ParamLimits

0x84c1,	// (0x00012703) list_double2_pane_t1_cp2

0x84d7,	// (0x00012719) list_double2_pane_t2_cp2_ParamLimits

0x84d7,	// (0x00012719) list_double2_pane_t2_cp2

0x84e9,	// (0x0001272b) list_double_pane_g1_cp2_ParamLimits

0x84e9,	// (0x0001272b) list_double_pane_g1_cp2

0x84f5,	// (0x00012737) list_double_pane_g2_cp2

0x84fd,	// (0x0001273f) list_double_pane_t1_cp2_ParamLimits

0x84fd,	// (0x0001273f) list_double_pane_t1_cp2

0x8513,	// (0x00012755) list_double_pane_t2_cp2_ParamLimits

0x8513,	// (0x00012755) list_double_pane_t2_cp2

0x853b,	// (0x0001277d) list_single_pane_cp2_g3

0x8473,	// (0x000126b5) list_single_pane_g1_cp2_ParamLimits

0x8473,	// (0x000126b5) list_single_pane_g1_cp2

0x847f,	// (0x000126c1) list_single_pane_g2_cp2

0x854b,	// (0x0001278d) list_single_pane_t1_cp2_ParamLimits

0x854b,	// (0x0001278d) list_single_pane_t1_cp2

0x8563,	// (0x000127a5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8563,	// (0x000127a5) list_single_large_graphic_pane_g1_cp2

0x856f,	// (0x000127b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x856f,	// (0x000127b1) list_single_large_graphic_pane_g2_cp2

0x857b,	// (0x000127bd) list_single_large_graphic_pane_g3_cp2

0x8583,	// (0x000127c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8583,	// (0x000127c5) list_single_large_graphic_pane_g4_cp1

0x859d,	// (0x000127df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x859d,	// (0x000127df) list_single_large_graphic_pane_t1_cp2

0x9ac6,	// (0x00013d08) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ac6,	// (0x00013d08) list_single_graphic_heading_pane_g1_cp2

0x9aa1,	// (0x00013ce3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9aa1,	// (0x00013ce3) list_single_graphic_heading_pane_g4_cp2

0x847f,	// (0x000126c1) list_single_graphic_heading_pane_g5_cp2

0x8487,	// (0x000126c9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x8487,	// (0x000126c9) list_single_graphic_heading_pane_t1_cp2

0x9ad2,	// (0x00013d14) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9ad2,	// (0x00013d14) list_single_graphic_heading_pane_t2_cp2

0x9a95,	// (0x00013cd7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9a95,	// (0x00013cd7) list_single_2graphic_pane_g1_cp2

0x9aa1,	// (0x00013ce3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9aa1,	// (0x00013ce3) list_single_2graphic_pane_g2_cp2

0x847f,	// (0x000126c1) list_single_2graphic_pane_g3_cp2

0x911e,	// (0x00013360) list_single_2graphic_pane_g4_cp2_ParamLimits

0x911e,	// (0x00013360) list_single_2graphic_pane_g4_cp2

0x9ab0,	// (0x00013cf2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ab0,	// (0x00013cf2) list_single_2graphic_pane_t1_cp2

0x6967,	// (0x00010ba9) list_highlight_pane_g10_cp1

0x968f,	// (0x000138d1) list_highlight_pane_g1_cp1

0x9697,	// (0x000138d9) list_highlight_pane_g2_cp1

0x969f,	// (0x000138e1) list_highlight_pane_g3_cp1

0x96a7,	// (0x000138e9) list_highlight_pane_g4_cp1

0x96af,	// (0x000138f1) list_highlight_pane_g5_cp1

0x96b7,	// (0x000138f9) list_highlight_pane_g6_cp1

0x96bf,	// (0x00013901) list_highlight_pane_g7_cp1

0x96c7,	// (0x00013909) list_highlight_pane_g8_cp1

0x96cf,	// (0x00013911) list_highlight_pane_g9_cp1

0x2198,	// (0x0000c3da) form_field_slider_pane_t3

0x21a6,	// (0x0000c3e8) form_field_slider_pane_t4

0x95d9,	// (0x0001381b) slider_form_pane_ParamLimits

0x95d9,	// (0x0001381b) slider_form_pane

0x6a4e,	// (0x00010c90) control_abbreviations

0x6a4e,	// (0x00010c90) control_conventions

0x6a4e,	// (0x00010c90) control_definitions

0x6a4e,	// (0x00010c90) format_table_attribute

0x9d56,	// (0x00013f98) bg_popup_preview_window_pane_g9

0x6a4e,	// (0x00010c90) format_table_data2

0x6a4e,	// (0x00010c90) format_table_data3

0x6a4e,	// (0x00010c90) format_table_data_example

0x0008,

0x6a4e,	// (0x00010c90) intro_purpose

0xf8d4,	// (0x00019b16) bg_popup_preview_window_pane_g

0x6a4e,	// (0x00010c90) texts_category

0x6a4e,	// (0x00010c90) texts_graphics

0x85b3,	// (0x000127f5) text_digital

0x85c2,	// (0x00012804) text_primary

0x85d1,	// (0x00012813) text_primary_small

0x85e0,	// (0x00012822) text_secondary

0x85ef,	// (0x00012831) text_title

0xa4bf,	// (0x00014701) bg_passive_tab_pane_g1_cp3_srt

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp3_srt

0xa4c8,	// (0x0001470a) bg_passive_tab_pane_g3_cp3_srt

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp3_srt_ParamLimits

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp3_srt

0xa4d1,	// (0x00014713) tabs_4_active_pane_srt_g1

0x0a1a,	// (0x0000ac5c) tabs_4_active_pane_srt_t1_ParamLimits

0x0a1a,	// (0x0000ac5c) tabs_4_active_pane_srt_t1

0xa4bf,	// (0x00014701) bg_active_tab_pane_g1_cp3_copy1

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp3_copy1

0xa4c8,	// (0x0001470a) bg_active_tab_pane_g3_cp3_copy1

0x6b2e,	// (0x00010d70) tabs_2_long_active_pane_srt_ParamLimits

0x6b2e,	// (0x00010d70) tabs_2_long_active_pane_srt

0x6b2e,	// (0x00010d70) tabs_2_long_passive_pane_srt_ParamLimits

0x6b2e,	// (0x00010d70) tabs_2_long_passive_pane_srt

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp4_srt

0xa17d,	// (0x000143bf) bg_passive_tab_pane_g1_cp4_srt

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp4_srt

0xa186,	// (0x000143c8) bg_passive_tab_pane_g3_cp4_srt

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp4_srt_ParamLimits

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp4_srt

0x11c7,	// (0x0000b409) tabs_2_long_active_pane_srt_t1_ParamLimits

0x11c7,	// (0x0000b409) tabs_2_long_active_pane_srt_t1

0xa17d,	// (0x000143bf) bg_active_tab_pane_g1_cp4_srt

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp4_srt

0xa186,	// (0x000143c8) bg_active_tab_pane_g3_cp4_srt

0x6dc7,	// (0x00011009) tabs_3_long_active_pane_srt_ParamLimits

0x6dc7,	// (0x00011009) tabs_3_long_active_pane_srt

0x6dc7,	// (0x00011009) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6dc7,	// (0x00011009) tabs_3_long_passive_pane_cp_srt

0x6dc7,	// (0x00011009) tabs_3_long_passive_pane_srt_ParamLimits

0x6dc7,	// (0x00011009) tabs_3_long_passive_pane_srt

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp5_srt

0x8346,	// (0x00012588) bg_passive_tab_pane_g1_cp5_srt

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp5_srt

0x834f,	// (0x00012591) bg_passive_tab_pane_g3_cp5_srt

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp5_srt_ParamLimits

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp5_srt

0x11de,	// (0x0000b420) tabs_3_long_active_pane_srt_t1_ParamLimits

0x11de,	// (0x0000b420) tabs_3_long_active_pane_srt_t1

0x8346,	// (0x00012588) bg_active_tab_pane_g1_cp5_srt

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp5_srt

0x834f,	// (0x00012591) bg_active_tab_pane_g3_cp5_srt

0xa16f,	// (0x000143b1) navi_text_pane_srt_t1

0xa167,	// (0x000143a9) navi_icon_pane_srt_g1

0x87b6,	// (0x000129f8) midp_editing_number_pane_srt

0x85fe,	// (0x00012840) midp_ticker_pane_srt

0x87be,	// (0x00012a00) midp_ticker_pane_srt_g1

0x87c6,	// (0x00012a08) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x000199a5) midp_ticker_pane_srt_g

0x87ce,	// (0x00012a10) midp_ticker_pane_srt_t1

0xa158,	// (0x0001439a) midp_editing_number_pane_t1_copy1

0x14c8,	// (0x0000b70a) listscroll_midp_pane

0x14c8,	// (0x0000b70a) midp_form_pane

0x866e,	// (0x000128b0) midp_info_popup_window_ParamLimits

0x866e,	// (0x000128b0) midp_info_popup_window

0x7a53,	// (0x00011c95) bg_popup_sub_pane_cp50_ParamLimits

0x7a53,	// (0x00011c95) bg_popup_sub_pane_cp50

0x92da,	// (0x0001351c) listscroll_midp_info_pane_ParamLimits

0x92da,	// (0x0001351c) listscroll_midp_info_pane

0x92c2,	// (0x00013504) listscroll_form_midp_pane_ParamLimits

0x92c2,	// (0x00013504) listscroll_form_midp_pane

0x92ce,	// (0x00013510) scroll_bar_cp050

0x218c,	// (0x0000c3ce) list_midp_pane

0xb0bc,	// (0x000152fe) signal_pane_g2_cp

0x91dc,	// (0x0001341e) listscroll_midp_info_pane_t1_ParamLimits

0x91dc,	// (0x0001341e) listscroll_midp_info_pane_t1

0x91f4,	// (0x00013436) listscroll_midp_info_pane_t2_ParamLimits

0x91f4,	// (0x00013436) listscroll_midp_info_pane_t2

0x9232,	// (0x00013474) listscroll_midp_info_pane_t3_ParamLimits

0x9232,	// (0x00013474) listscroll_midp_info_pane_t3

0x926c,	// (0x000134ae) listscroll_midp_info_pane_t4_ParamLimits

0x926c,	// (0x000134ae) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00019a51) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00019a51) listscroll_midp_info_pane_t

0x7b02,	// (0x00011d44) scroll_pane_cp21

0x9180,	// (0x000133c2) form_midp_field_choice_group_pane

0x9189,	// (0x000133cb) form_midp_field_text_pane

0x91c2,	// (0x00013404) form_midp_field_time_pane

0x91ca,	// (0x0001340c) form_midp_gauge_slider_pane

0x91d3,	// (0x00013415) form_midp_gauge_wait_pane

0x6a4e,	// (0x00010c90) form_midp_image_pane

0x2176,	// (0x0000c3b8) list_single_midp_pane_ParamLimits

0x2176,	// (0x0000c3b8) list_single_midp_pane

0x9139,	// (0x0001337b) form_midp_field_text_pane_t1

0x8f2c,	// (0x0001316e) input_focus_pane_cp050

0x915a,	// (0x0001339c) list_midp_form_text_pane

0x90fc,	// (0x0001333e) form_midp_field_choice_group_pane_t1

0x910a,	// (0x0001334c) input_focus_pane_cp051

0x912a,	// (0x0001336c) list_midp_choice_pane

0x6a4e,	// (0x00010c90) status_idle_pane

0x90e0,	// (0x00013322) form_midp_field_time_pane_t1

0x6967,	// (0x00010ba9) wait_anim_pane_g2_copy1

0x90ee,	// (0x00013330) form_midp_field_time_pane_t2

0x0001,

0x8718,	// (0x0001295a) aid_navinavi_width_2_pane

0xf80a,	// (0x00019a4c) form_midp_field_time_pane_t

0x6a4e,	// (0x00010c90) input_focus_pane_cp052

0x6a4e,	// (0x00010c90) bg_input_focus_pane_cp040

0x90a0,	// (0x000132e2) form_midp_gauge_slider_pane_t1

0x90ae,	// (0x000132f0) form_midp_gauge_slider_pane_t2

0x215a,	// (0x0000c39c) form_midp_gauge_slider_pane_t3

0x2168,	// (0x0000c3aa) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00019a43) form_midp_gauge_slider_pane_t

0x90d8,	// (0x0001331a) form_midp_slider_pane

0x6b2e,	// (0x00010d70) bg_input_focus_pane_cp041_ParamLimits

0x6b2e,	// (0x00010d70) bg_input_focus_pane_cp041

0x9070,	// (0x000132b2) form_midp_gauge_wait_pane_t1_ParamLimits

0x9070,	// (0x000132b2) form_midp_gauge_wait_pane_t1

0x9082,	// (0x000132c4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9082,	// (0x000132c4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00019a3e) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00019a3e) form_midp_gauge_wait_pane_t

0x9094,	// (0x000132d6) form_midp_wait_pane_ParamLimits

0x9094,	// (0x000132d6) form_midp_wait_pane

0x903a,	// (0x0001327c) form_midp_image_pane_g1

0x9043,	// (0x00013285) form_midp_image_pane_t1

0x9052,	// (0x00013294) form_midp_image_pane_t2

0x9061,	// (0x000132a3) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00019a37) form_midp_image_pane_t

0x9022,	// (0x00013264) list_single_midp_pane_g1

0x902b,	// (0x0001326d) list_single_midp_pane_t1

0x900e,	// (0x00013250) list_midp_form_item_pane_ParamLimits

0x900e,	// (0x00013250) list_midp_form_item_pane

0x86c0,	// (0x00012902) list_midp_form_item_pane_t1

0x86cf,	// (0x00012911) midp_ticker_pane_g1

0x86db,	// (0x0001291d) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x0001998b) midp_ticker_pane_g

0x86e7,	// (0x00012929) midp_ticker_pane_t1

0xa158,	// (0x0001439a) midp_editing_number_pane_t1

0xa369,	// (0x000145ab) midp_editing_number_pane

0xa375,	// (0x000145b7) midp_ticker_pane

0xa136,	// (0x00014378) ai_message_heading_pane

0x6a4e,	// (0x00010c90) bg_popup_window_pane_cp14

0xa13e,	// (0x00014380) listscroll_ai_message_pane

0xa0c0,	// (0x00014302) ai_message_heading_pane_g1_ParamLimits

0xa0c0,	// (0x00014302) ai_message_heading_pane_g1

0xa0cc,	// (0x0001430e) ai_message_heading_pane_g2_ParamLimits

0xa0cc,	// (0x0001430e) ai_message_heading_pane_g2

0xa0d8,	// (0x0001431a) ai_message_heading_pane_g3_ParamLimits

0xa0d8,	// (0x0001431a) ai_message_heading_pane_g3

0xa0e4,	// (0x00014326) ai_message_heading_pane_g4_ParamLimits

0xa0e4,	// (0x00014326) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00019b78) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00019b78) ai_message_heading_pane_g

0xa0f0,	// (0x00014332) ai_message_heading_pane_t1_ParamLimits

0xa0f0,	// (0x00014332) ai_message_heading_pane_t1

0xa10a,	// (0x0001434c) ai_message_heading_pane_t2_ParamLimits

0xa10a,	// (0x0001434c) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00019b81) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00019b81) ai_message_heading_pane_t

0xa11c,	// (0x0001435e) bg_popup_heading_pane_cp1_ParamLimits

0xa11c,	// (0x0001435e) bg_popup_heading_pane_cp1

0xa0ae,	// (0x000142f0) list_ai_message_pane_ParamLimits

0xa0ae,	// (0x000142f0) list_ai_message_pane

0x7b02,	// (0x00011d44) scroll_pane_cp10

0xa04a,	// (0x0001428c) list_ai_message_pane_g1

0xa052,	// (0x00014294) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00019b55) list_ai_message_pane_g

0xa05a,	// (0x0001429c) list_ai_message_pane_t1_ParamLimits

0xa05a,	// (0x0001429c) list_ai_message_pane_t1

0xa06f,	// (0x000142b1) list_ai_message_pane_t2_ParamLimits

0xa06f,	// (0x000142b1) list_ai_message_pane_t2

0xa084,	// (0x000142c6) list_ai_message_pane_t3_ParamLimits

0xa084,	// (0x000142c6) list_ai_message_pane_t3

0xa099,	// (0x000142db) list_ai_message_pane_t4_ParamLimits

0xa099,	// (0x000142db) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00019b5a) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00019b5a) list_ai_message_pane_t

0xa038,	// (0x0001427a) cell_ai_soft_ind_pane_ParamLimits

0xa038,	// (0x0001427a) cell_ai_soft_ind_pane

0x86f9,	// (0x0001293b) cell_ai_soft_ind_pane_g1_ParamLimits

0x86f9,	// (0x0001293b) cell_ai_soft_ind_pane_g1

0x6a4e,	// (0x00010c90) grid_highlight_cp1

0x8706,	// (0x00012948) text_secondary_cp56_ParamLimits

0x8706,	// (0x00012948) text_secondary_cp56

0xa00d,	// (0x0001424f) example_general_pane_ParamLimits

0xa00d,	// (0x0001424f) example_general_pane

0xa019,	// (0x0001425b) example_parent_pane_g1_ParamLimits

0xa019,	// (0x0001425b) example_parent_pane_g1

0xa025,	// (0x00014267) example_parent_pane_t1_ParamLimits

0xa025,	// (0x00014267) example_parent_pane_t1

0xde6f,	// (0x000180b1) popup_preview_text_window_ParamLimits

0xde6f,	// (0x000180b1) popup_preview_text_window

0x8543,	// (0x00012785) list_single_pane_cp2_g4

0x6ea3,	// (0x000110e5) bg_popup_preview_window_pane_ParamLimits

0x6ea3,	// (0x000110e5) bg_popup_preview_window_pane

0x9d5e,	// (0x00013fa0) popup_preview_text_window_t1_ParamLimits

0x9d5e,	// (0x00013fa0) popup_preview_text_window_t1

0x9d7c,	// (0x00013fbe) popup_preview_text_window_t2_ParamLimits

0x9d7c,	// (0x00013fbe) popup_preview_text_window_t2

0x9dc5,	// (0x00014007) popup_preview_text_window_t3_ParamLimits

0x9dc5,	// (0x00014007) popup_preview_text_window_t3

0x9e0a,	// (0x0001404c) popup_preview_text_window_t4_ParamLimits

0x9e0a,	// (0x0001404c) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00019b29) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00019b29) popup_preview_text_window_t

0x9e88,	// (0x000140ca) scroll_pane_cp11

0x8e16,	// (0x00013058) bg_popup_preview_window_pane_g1

0x9d1e,	// (0x00013f60) bg_popup_preview_window_pane_g2

0x9d26,	// (0x00013f68) bg_popup_preview_window_pane_g3

0x9d2e,	// (0x00013f70) bg_popup_preview_window_pane_g4

0x9d36,	// (0x00013f78) bg_popup_preview_window_pane_g5

0x9d3e,	// (0x00013f80) bg_popup_preview_window_pane_g6

0x9d46,	// (0x00013f88) bg_popup_preview_window_pane_g7

0x9d4e,	// (0x00013f90) bg_popup_preview_window_pane_g8

0x4823,	// (0x0000ea65) aid_popup_width_pane

0xddf1,	// (0x00018033) popup_midp_note_alarm_window_ParamLimits

0xddf1,	// (0x00018033) popup_midp_note_alarm_window

0x7812,	// (0x00011a54) data_form_pane_ParamLimits

0x10ac,	// (0x0000b2ee) form_field_data_pane_g1

0x10b6,	// (0x0000b2f8) form_field_data_pane_t1_ParamLimits

0x783e,	// (0x00011a80) input_focus_pane_ParamLimits

0x784c,	// (0x00011a8e) data_form_wide_pane_ParamLimits

0x7858,	// (0x00011a9a) form_field_data_wide_pane_g1

0x7878,	// (0x00011aba) form_field_data_wide_pane_t1_ParamLimits

0x712f,	// (0x00011371) input_focus_pane_cp6_ParamLimits

0x11a5,	// (0x0000b3e7) input_popup_find_pane_g1_ParamLimits

0x11a5,	// (0x0000b3e7) input_popup_find_pane_g1

0x4bec,	// (0x0000ee2e) aid_navi_side_left_pane

0x4bfc,	// (0x0000ee3e) aid_navi_side_right_pane

0x9778,	// (0x000139ba) bg_popup_window_pane_cp30_ParamLimits

0x9778,	// (0x000139ba) bg_popup_window_pane_cp30

0x97f2,	// (0x00013a34) popup_midp_note_alarm_window_g1_ParamLimits

0x97f2,	// (0x00013a34) popup_midp_note_alarm_window_g1

0x9822,	// (0x00013a64) popup_midp_note_alarm_window_t1_ParamLimits

0x9822,	// (0x00013a64) popup_midp_note_alarm_window_t1

0x98c3,	// (0x00013b05) popup_midp_note_alarm_window_t2_ParamLimits

0x98c3,	// (0x00013b05) popup_midp_note_alarm_window_t2

0x9971,	// (0x00013bb3) popup_midp_note_alarm_window_t3_ParamLimits

0x9971,	// (0x00013bb3) popup_midp_note_alarm_window_t3

0x9999,	// (0x00013bdb) popup_midp_note_alarm_window_t4_ParamLimits

0x9999,	// (0x00013bdb) popup_midp_note_alarm_window_t4

0x99b9,	// (0x00013bfb) popup_midp_note_alarm_window_t5_ParamLimits

0x99b9,	// (0x00013bfb) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00019ac6) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00019ac6) popup_midp_note_alarm_window_t

0x9a65,	// (0x00013ca7) wait_bar_pane_cp1_ParamLimits

0x9a65,	// (0x00013ca7) wait_bar_pane_cp1

0x6a4e,	// (0x00010c90) wait_anim_pane_copy1

0x6a4e,	// (0x00010c90) wait_border_pane_copy1

0x948a,	// (0x000136cc) wait_border_pane_g1_copy1

0x788f,	// (0x00011ad1) form_field_popup_pane_g1

0x10ce,	// (0x0000b310) form_field_popup_pane_t1_ParamLimits

0x783e,	// (0x00011a80) input_focus_pane_cp7_ParamLimits

0x7812,	// (0x00011a54) list_form_pane_ParamLimits

0x78af,	// (0x00011af1) form_field_popup_wide_pane_g1

0x78b7,	// (0x00011af9) form_field_popup_wide_pane_t1_ParamLimits

0x783e,	// (0x00011a80) input_focus_pane_cp8_ParamLimits

0x78cc,	// (0x00011b0e) list_form_wide_pane_ParamLimits

0xa53f,	// (0x00014781) aid_size_cell_graphic_pane

0x114b,	// (0x0000b38d) data_form_pane_t1_ParamLimits

0x25da,	// (0x0000c81c) data_form_wide_pane_t1_ParamLimits

0x1dde,	// (0x0000c020) bg_status_flat_pane

0x0977,	// (0x0000abb9) title_pane_t1_ParamLimits

0x6af6,	// (0x00010d38) title_pane_t2_ParamLimits

0x6b1c,	// (0x00010d5e) title_pane_t3_ParamLimits

0xf557,	// (0x00019799) title_pane_t_ParamLimits

0x12b6,	// (0x0000b4f8) level_1_signal_ParamLimits

0x12c8,	// (0x0000b50a) level_2_signal_ParamLimits

0x12db,	// (0x0000b51d) level_3_signal_ParamLimits

0x12ee,	// (0x0000b530) level_4_signal_ParamLimits

0x1301,	// (0x0000b543) level_5_signal_ParamLimits

0x1314,	// (0x0000b556) level_6_signal_ParamLimits

0x1327,	// (0x0000b569) level_7_signal_ParamLimits

0x12b6,	// (0x0000b4f8) level_1_battery_ParamLimits

0x12c8,	// (0x0000b50a) level_2_battery_ParamLimits

0x12db,	// (0x0000b51d) level_3_battery_ParamLimits

0x12ee,	// (0x0000b530) level_4_battery_ParamLimits

0x1301,	// (0x0000b543) level_5_battery_ParamLimits

0x1314,	// (0x0000b556) level_6_battery_ParamLimits

0x1327,	// (0x0000b569) level_7_battery_ParamLimits

0x968f,	// (0x000138d1) bg_status_flat_pane_g1

0x9697,	// (0x000138d9) bg_status_flat_pane_g2

0x969f,	// (0x000138e1) bg_status_flat_pane_g3

0x96a7,	// (0x000138e9) bg_status_flat_pane_g4

0x96af,	// (0x000138f1) bg_status_flat_pane_g5

0x96b7,	// (0x000138f9) bg_status_flat_pane_g6

0x96bf,	// (0x00013901) bg_status_flat_pane_g7

0x0a04,	// (0x0000ac46) tabs_3_active_pane_t1_ParamLimits

0x0a04,	// (0x0000ac46) tabs_3_passive_pane_t1_ParamLimits

0x0a1a,	// (0x0000ac5c) tabs_4_active_pane_t1_ParamLimits

0x0a1a,	// (0x0000ac5c) tabs_4_1_passive_pane_t1_ParamLimits

0x11b1,	// (0x0000b3f3) tabs_2_active_pane_t1_ParamLimits

0x11b1,	// (0x0000b3f3) tabs_2_passive_pane_t1_ParamLimits

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp4_ParamLimits

0x11c7,	// (0x0000b409) tabs_2_long_active_pane_t1_ParamLimits

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp4_ParamLimits

0x5638,	// (0x0000f87a) list_single_midp_graphic_pane_t1_ParamLimits

0x6b2e,	// (0x00010d70) bg_active_tab_pane_cp5_ParamLimits

0x11de,	// (0x0000b420) tabs_3_long_active_pane_t1_ParamLimits

0x894d,	// (0x00012b8f) bg_passive_tab_pane_cp5_ParamLimits

0x5638,	// (0x0000f87a) list_single_midp_graphic_pane_t1

0x1dde,	// (0x0000c020) bg_status_flat_pane_ParamLimits

0x8acc,	// (0x00012d0e) indicator_pane_cp2_ParamLimits

0x8acc,	// (0x00012d0e) indicator_pane_cp2

0x1f44,	// (0x0000c186) navi_pane_srt_ParamLimits

0x1f44,	// (0x0000c186) navi_pane_srt

0x8c14,	// (0x00012e56) popup_clock_digital_analogue_window_cp1

0x6c22,	// (0x00010e64) indicator_pane_t1

0x85fe,	// (0x00012840) copy_highlight_pane

0x85fe,	// (0x00012840) cursor_graphics_pane

0x85fe,	// (0x00012840) graphic_within_text_pane

0x85fe,	// (0x00012840) link_highlight_pane

0x9e4b,	// (0x0001408d) popup_preview_text_window_t5_ParamLimits

0x9e4b,	// (0x0001408d) popup_preview_text_window_t5

0x8720,	// (0x00012962) cursor_digital_pane

0x8720,	// (0x00012962) cursor_primary_pane

0x8731,	// (0x00012973) cursor_primary_small_pane

0x8739,	// (0x0001297b) cursor_secondary_pane

0x8741,	// (0x00012983) cursor_title_pane

0x8720,	// (0x00012962) link_highlight_digital_pane

0x8728,	// (0x0001296a) link_highlight_primary_pane

0x8731,	// (0x00012973) link_highlight_primary_small_pane

0x8739,	// (0x0001297b) link_highlight_secondary_pane

0x8741,	// (0x00012983) link_highlight_title_pane

0x8720,	// (0x00012962) copy_highlight_digital_pane

0x8720,	// (0x00012962) copy_highlight_primary_pane

0x8731,	// (0x00012973) copy_highlight_primary_small_pane

0x8739,	// (0x0001297b) copy_highlight_secondary_pane

0x8741,	// (0x00012983) copy_highlight_title_pane

0x8739,	// (0x0001297b) graphic_text_digital_pane

0x9727,	// (0x00013969) graphic_text_primary_pane

0x9730,	// (0x00013972) graphic_text_primary_small_pane

0x8731,	// (0x00012973) graphic_text_secondary_pane

0x8720,	// (0x00012962) graphic_text_title_pane

0x1564,	// (0x0000b7a6) cursor_primary_pane_g1

0x9719,	// (0x0001395b) cursor_text_primary_t1

0x21c8,	// (0x0000c40a) cursor_primary_small_pane_g1

0x970b,	// (0x0001394d) cursor_text_primary_small_t1

0x21be,	// (0x0000c400) cursor_primary_small_pane_g1_copy1

0x96f5,	// (0x00013937) cursor_text_primary_small_t1_copy1

0x96d7,	// (0x00013919) cursor_text_title_t1

0x21b4,	// (0x0000c3f6) cursor_title_pane_g1

0x1564,	// (0x0000b7a6) cursor_digital_pane_g1

0x8751,	// (0x00012993) cursor_text_digital_t1

0x875f,	// (0x000129a1) link_highlight_primary_pane_g1

0x9680,	// (0x000138c2) link_highlight_primary_pane_t1

0x875f,	// (0x000129a1) link_highlight_primary_small_pane_g1

0x8767,	// (0x000129a9) link_highlight_primary_small_pane_t1

0x8776,	// (0x000129b8) link_highlight_secondary_pane_g1

0x877e,	// (0x000129c0) link_highlight_secondary_pane_t1

0x95e5,	// (0x00013827) link_highlight_title_pane_g1

0x95fc,	// (0x0001383e) link_highlight_title_pane_t1

0x95e5,	// (0x00013827) link_highlight_digital_pane_g1

0x95ed,	// (0x0001382f) link_highlight_digital_pane_t1

0x94a5,	// (0x000136e7) copy_highlight_primary_pane_g1

0x94cb,	// (0x0001370d) copy_highlight_primary_pane_t1

0x94a5,	// (0x000136e7) copy_highlight_primary_small_pane_g1

0x94bc,	// (0x000136fe) copy_highlight_primary_small_pane_t1

0x878d,	// (0x000129cf) copy_highlight_secondary_pane_g1

0x8795,	// (0x000129d7) copy_highlight_secondary_pane_t1

0x94a5,	// (0x000136e7) copy_highlight_title_pane_g1

0x94ad,	// (0x000136ef) copy_highlight_title_pane_t1

0x94a5,	// (0x000136e7) copy_highlight_digital_pane_g1

0xa6ab,	// (0x000148ed) copy_highlight_digital_pane_t1

0xa5ff,	// (0x00014841) graphic_text_primary_pane_g1

0xa68f,	// (0x000148d1) graphic_text_primary_pane_t1

0xa69d,	// (0x000148df) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00019bf5) graphic_text_primary_pane_t

0xa66b,	// (0x000148ad) graphic_text_primary_small_pane_g1

0xa673,	// (0x000148b5) graphic_text_primary_small_pane_t1

0xa681,	// (0x000148c3) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00019bf0) graphic_text_primary_small_pane_t

0xa647,	// (0x00014889) graphic_text_secondary_pane_g1

0xa64f,	// (0x00014891) graphic_text_secondary_pane_t1

0xa65d,	// (0x0001489f) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00019beb) graphic_text_secondary_pane_t

0xa623,	// (0x00014865) graphic_text_title_pane_g1

0xa62b,	// (0x0001486d) graphic_text_title_pane_t1

0xa639,	// (0x0001487b) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00019be6) graphic_text_title_pane_t

0xa5ff,	// (0x00014841) graphic_text_digital_pane_g1

0xa607,	// (0x00014849) graphic_text_digital_pane_t1

0xa615,	// (0x00014857) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00019be1) graphic_text_digital_pane_t

0x6b2e,	// (0x00010d70) navi_icon_pane_srt_ParamLimits

0x6b2e,	// (0x00010d70) navi_icon_pane_srt

0x6a4e,	// (0x00010c90) navi_midp_pane_srt

0x6a4e,	// (0x00010c90) navi_navi_pane_srt

0x6b2e,	// (0x00010d70) navi_text_pane_srt_ParamLimits

0x6b2e,	// (0x00010d70) navi_text_pane_srt

0x9cd7,	// (0x00013f19) navi_navi_icon_text_pane_srt

0x9cdf,	// (0x00013f21) navi_navi_pane_srt_g1_ParamLimits

0x9cdf,	// (0x00013f21) navi_navi_pane_srt_g1

0x9cf1,	// (0x00013f33) navi_navi_pane_srt_g2_ParamLimits

0x9cf1,	// (0x00013f33) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00019bdc) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00019bdc) navi_navi_pane_srt_g

0x9d03,	// (0x00013f45) navi_navi_tabs_pane_srt

0x9cd7,	// (0x00013f19) navi_navi_text_pane_srt

0x9cd7,	// (0x00013f19) navi_navi_volume_pane_srt

0xa5f0,	// (0x00014832) navi_navi_text_pane_srt_t1

0x599c,	// (0x0000fbde) navi_navi_volume_pane_srt_g1

0x59a4,	// (0x0000fbe6) volume_small_pane_srt_ParamLimits

0x59a4,	// (0x0000fbe6) volume_small_pane_srt

0x4e93,	// (0x0000f0d5) volume_small_pane_srt_g1_ParamLimits

0x4e93,	// (0x0000f0d5) volume_small_pane_srt_g1

0x4ea3,	// (0x0000f0e5) volume_small_pane_srt_g2_ParamLimits

0x4ea3,	// (0x0000f0e5) volume_small_pane_srt_g2

0x4eb4,	// (0x0000f0f6) volume_small_pane_srt_g3_ParamLimits

0x4eb4,	// (0x0000f0f6) volume_small_pane_srt_g3

0x4ec5,	// (0x0000f107) volume_small_pane_srt_g4_ParamLimits

0x4ec5,	// (0x0000f107) volume_small_pane_srt_g4

0x4ed6,	// (0x0000f118) volume_small_pane_srt_g5_ParamLimits

0x4ed6,	// (0x0000f118) volume_small_pane_srt_g5

0x4ee7,	// (0x0000f129) volume_small_pane_srt_g6_ParamLimits

0x4ee7,	// (0x0000f129) volume_small_pane_srt_g6

0x4ef8,	// (0x0000f13a) volume_small_pane_srt_g7_ParamLimits

0x4ef8,	// (0x0000f13a) volume_small_pane_srt_g7

0x4f09,	// (0x0000f14b) volume_small_pane_srt_g8_ParamLimits

0x4f09,	// (0x0000f14b) volume_small_pane_srt_g8

0x4f1a,	// (0x0000f15c) volume_small_pane_srt_g9_ParamLimits

0x4f1a,	// (0x0000f15c) volume_small_pane_srt_g9

0x4f2b,	// (0x0000f16d) volume_small_pane_srt_g10_ParamLimits

0x4f2b,	// (0x0000f16d) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00019990) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00019990) volume_small_pane_srt_g

0x6f4c,	// (0x0001118e) query_popup_data_pane_cp2

0xa5d6,	// (0x00014818) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa5d6,	// (0x00014818) navi_navi_icon_text_pane_srt_t1

0x9727,	// (0x00013969) navi_tabs_2_long_pane_srt

0x9727,	// (0x00013969) navi_tabs_2_pane_srt

0x9727,	// (0x00013969) navi_tabs_3_long_pane_srt

0x9727,	// (0x00013969) navi_tabs_3_pane_srt

0x9727,	// (0x00013969) navi_tabs_4_pane_srt

0x597c,	// (0x0000fbbe) tabs_2_active_pane_srt_ParamLimits

0x597c,	// (0x0000fbbe) tabs_2_active_pane_srt

0x598c,	// (0x0000fbce) tabs_2_passive_pane_srt_ParamLimits

0x598c,	// (0x0000fbce) tabs_2_passive_pane_srt

0x8f2c,	// (0x0001316e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f2c,	// (0x0001316e) bg_passive_tab_pane_cp1_srt

0xa5b4,	// (0x000147f6) bg_passive_tab_pane_g1_cp1_srt

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp1_srt

0xa5bd,	// (0x000147ff) bg_passive_tab_pane_g3_cp1_srt

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp1_srt_ParamLimits

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp1_srt

0xa5c6,	// (0x00014808) tabs_2_active_pane_srt_g1

0x11b1,	// (0x0000b3f3) tabs_2_active_pane_srt_t1_ParamLimits

0x11b1,	// (0x0000b3f3) tabs_2_active_pane_srt_t1

0xa5b4,	// (0x000147f6) bg_active_tab_pane_g1_cp1_srt

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp1_srt

0xa5bd,	// (0x000147ff) bg_active_tab_pane_g3_cp1_srt

0x5949,	// (0x0000fb8b) tabs_3_active_pane_srt_ParamLimits

0x5949,	// (0x0000fb8b) tabs_3_active_pane_srt

0x595a,	// (0x0000fb9c) tabs_3_passive_pane_cp_srt_ParamLimits

0x595a,	// (0x0000fb9c) tabs_3_passive_pane_cp_srt

0x596b,	// (0x0000fbad) tabs_3_passive_pane_srt_ParamLimits

0x596b,	// (0x0000fbad) tabs_3_passive_pane_srt

0x8f2c,	// (0x0001316e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f2c,	// (0x0001316e) bg_passive_tab_pane_cp2_srt

0x87a4,	// (0x000129e6) bg_passive_tab_pane_g1_cp2_srt

0x82c0,	// (0x00012502) bg_passive_tab_pane_g2_cp2_srt

0x87ad,	// (0x000129ef) bg_passive_tab_pane_g3_cp2_srt

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp2_srt_ParamLimits

0x6dc7,	// (0x00011009) bg_active_tab_pane_cp2_srt

0xa5ac,	// (0x000147ee) tabs_3_active_pane_srt_g1

0x0a04,	// (0x0000ac46) tabs_3_active_pane_srt_t1_ParamLimits

0x0a04,	// (0x0000ac46) tabs_3_active_pane_srt_t1

0x87a4,	// (0x000129e6) bg_active_tab_pane_g1_cp2_srt

0x82c0,	// (0x00012502) bg_active_tab_pane_g2_cp2_srt

0x87ad,	// (0x000129ef) bg_active_tab_pane_g3_cp2_srt

0x5901,	// (0x0000fb43) tabs_4_active_pane_srt_ParamLimits

0x5901,	// (0x0000fb43) tabs_4_active_pane_srt

0x5913,	// (0x0000fb55) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5913,	// (0x0000fb55) tabs_4_passive_pane_cp2_srt

0x5090,	// (0x0000f2d2) aid_size_cell_toolbar

0xdb61,	// (0x00017da3) main_idle_act_pane_ParamLimits

0x5207,	// (0x0000f449) popup_large_graphic_colour_window_ParamLimits

0xe0bf,	// (0x00018301) popup_toolbar_window_ParamLimits

0xe0bf,	// (0x00018301) popup_toolbar_window

0xa39a,	// (0x000145dc) list_single_graphic_2heading_pane_ParamLimits

0xa39a,	// (0x000145dc) list_single_graphic_2heading_pane

0x7d4b,	// (0x00011f8d) aid_size_cell_apps_grid_lsc_pane

0x7d5d,	// (0x00011f9f) aid_size_cell_apps_grid_prt_pane

0x894d,	// (0x00012b8f) bg_wml_button_pane_cp1_ParamLimits

0x894d,	// (0x00012b8f) bg_wml_button_pane_cp1

0x9139,	// (0x0001337b) form_midp_field_text_pane_t1_ParamLimits

0x8f2c,	// (0x0001316e) input_focus_pane_cp050_ParamLimits

0x915a,	// (0x0001339c) list_midp_form_text_pane_ParamLimits

0x910a,	// (0x0001334c) input_focus_pane_cp051_ParamLimits

0x912a,	// (0x0001336c) list_midp_choice_pane_ParamLimits

0x8fdc,	// (0x0001321e) list_single_2graphic_pane_cp3_ParamLimits

0x8fdc,	// (0x0001321e) list_single_2graphic_pane_cp3

0x8fef,	// (0x00013231) list_single_midp_graphic_pane_ParamLimits

0x8fef,	// (0x00013231) list_single_midp_graphic_pane

0x554a,	// (0x0000f78c) list_single_graphic_2heading_pane_g1_ParamLimits

0x554a,	// (0x0000f78c) list_single_graphic_2heading_pane_g1

0x5556,	// (0x0000f798) list_single_graphic_2heading_pane_g4_ParamLimits

0x5556,	// (0x0000f798) list_single_graphic_2heading_pane_g4

0x5562,	// (0x0000f7a4) list_single_graphic_2heading_pane_g5_ParamLimits

0x5562,	// (0x0000f7a4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x000199e3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x000199e3) list_single_graphic_2heading_pane_g

0x556e,	// (0x0000f7b0) list_single_graphic_2heading_pane_t1_ParamLimits

0x556e,	// (0x0000f7b0) list_single_graphic_2heading_pane_t1

0x5582,	// (0x0000f7c4) list_single_graphic_2heading_pane_t2_ParamLimits

0x5582,	// (0x0000f7c4) list_single_graphic_2heading_pane_t2

0x559c,	// (0x0000f7de) list_single_graphic_2heading_pane_t3_ParamLimits

0x559c,	// (0x0000f7de) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x000199ea) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x000199ea) list_single_graphic_2heading_pane_t

0x8d60,	// (0x00012fa2) bg_popup_sub_pane_cp2

0x8d86,	// (0x00012fc8) grid_toobar_pane

0x55b4,	// (0x0000f7f6) cell_toolbar_pane_ParamLimits

0x55b4,	// (0x0000f7f6) cell_toolbar_pane

0x8dbc,	// (0x00012ffe) cell_toolbar_pane_g1_ParamLimits

0x8dbc,	// (0x00012ffe) cell_toolbar_pane_g1

0x8dce,	// (0x00013010) cell_toolbar_pane_g2_ParamLimits

0x8dce,	// (0x00013010) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x000199f1) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x000199f1) cell_toolbar_pane_g

0x8df0,	// (0x00013032) grid_highlight_pane_cp2_ParamLimits

0x8df0,	// (0x00013032) grid_highlight_pane_cp2

0x8e0a,	// (0x0001304c) toolbar_button_pane

0x8e16,	// (0x00013058) toolbar_button_pane_g1

0x8e1e,	// (0x00013060) toolbar_button_pane_g2

0x8e26,	// (0x00013068) toolbar_button_pane_g3

0x8e2e,	// (0x00013070) toolbar_button_pane_g4

0x8e36,	// (0x00013078) toolbar_button_pane_g5

0x8e3e,	// (0x00013080) toolbar_button_pane_g6

0x8e46,	// (0x00013088) toolbar_button_pane_g7

0x8e4e,	// (0x00013090) toolbar_button_pane_g8

0x8e56,	// (0x00013098) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x000199f6) toolbar_button_pane_g

0x55e3,	// (0x0000f825) list_single_2graphic_pane_g1_cp3_ParamLimits

0x55e3,	// (0x0000f825) list_single_2graphic_pane_g1_cp3

0xe101,	// (0x00018343) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe101,	// (0x00018343) list_single_2graphic_pane_g2_cp3

0x55fe,	// (0x0000f840) list_single_2graphic_pane_g3_cp3

0x5606,	// (0x0000f848) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5606,	// (0x0000f848) list_single_2graphic_pane_g4_cp3

0x5612,	// (0x0000f854) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5612,	// (0x0000f854) list_single_2graphic_pane_t1_cp3

0x562c,	// (0x0000f86e) list_single_midp_graphic_pane_g2_ParamLimits

0x562c,	// (0x0000f86e) list_single_midp_graphic_pane_g2

0x5098,	// (0x0000f2da) aid_zoom_text_primary

0x50a0,	// (0x0000f2e2) aid_zoom_text_secondary

0x159e,	// (0x0000b7e0) status_small_pane_g7_ParamLimits

0x159e,	// (0x0000b7e0) status_small_pane_g7

0x15c1,	// (0x0000b803) status_small_pane_t1_ParamLimits

0x094c,	// (0x0000ab8e) title_pane_g2

0x0003,

0xf54e,	// (0x00019790) title_pane_g

0x0c2e,	// (0x0000ae70) aid_size_cell_colour_1_pane_ParamLimits

0x0c2e,	// (0x0000ae70) aid_size_cell_colour_1_pane

0x0c42,	// (0x0000ae84) aid_size_cell_colour_2_pane_ParamLimits

0x0c42,	// (0x0000ae84) aid_size_cell_colour_2_pane

0x0c56,	// (0x0000ae98) aid_size_cell_colour_3_pane_ParamLimits

0x0c56,	// (0x0000ae98) aid_size_cell_colour_3_pane

0x0c6a,	// (0x0000aeac) aid_size_cell_colour_4_pane_ParamLimits

0x0c6a,	// (0x0000aeac) aid_size_cell_colour_4_pane

0x4b4e,	// (0x0000ed90) title_pane_stacon_g1_ParamLimits

0x4b4e,	// (0x0000ed90) title_pane_stacon_g1

0x9522,	// (0x00013764) popup_note_wait_window_g3_ParamLimits

0x9522,	// (0x00013764) popup_note_wait_window_g3

0x9598,	// (0x000137da) popup_note_wait_window_t5_ParamLimits

0x9598,	// (0x000137da) popup_note_wait_window_t5

0x6a4e,	// (0x00010c90) main_feb_china_hwr_fs_writing_pane

0xdbc2,	// (0x00017e04) popup_feb_china_hwr_fs_window_ParamLimits

0xdbc2,	// (0x00017e04) popup_feb_china_hwr_fs_window

0xe112,	// (0x00018354) aid_size_cell_hwr_fs_ParamLimits

0xe112,	// (0x00018354) aid_size_cell_hwr_fs

0x8f2c,	// (0x0001316e) bg_popup_sub_pane_cp3_ParamLimits

0x8f2c,	// (0x0001316e) bg_popup_sub_pane_cp3

0xe127,	// (0x00018369) grid_hwr_fs_pane_ParamLimits

0xe127,	// (0x00018369) grid_hwr_fs_pane

0x5677,	// (0x0000f8b9) linegrid_hwr_fs_pane_ParamLimits

0x5677,	// (0x0000f8b9) linegrid_hwr_fs_pane

0xe13f,	// (0x00018381) cell_hwr_fs_pane_ParamLimits

0xe13f,	// (0x00018381) cell_hwr_fs_pane

0x8f38,	// (0x0001317a) linegrid_hwr_fs_pane_g1_ParamLimits

0x8f38,	// (0x0001317a) linegrid_hwr_fs_pane_g1

0x2120,	// (0x0000c362) linegrid_hwr_fs_pane_g2_ParamLimits

0x2120,	// (0x0000c362) linegrid_hwr_fs_pane_g2

0x8f56,	// (0x00013198) linegrid_hwr_fs_pane_g3_ParamLimits

0x8f56,	// (0x00013198) linegrid_hwr_fs_pane_g3

0x56a5,	// (0x0000f8e7) linegrid_hwr_fs_pane_g4_ParamLimits

0x56a5,	// (0x0000f8e7) linegrid_hwr_fs_pane_g4

0x56bf,	// (0x0000f901) linegrid_hwr_fs_pane_g5_ParamLimits

0x56bf,	// (0x0000f901) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00019a1c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00019a1c) linegrid_hwr_fs_pane_g

0x8f62,	// (0x000131a4) cell_hwr_fs_pane_g1_ParamLimits

0x8f62,	// (0x000131a4) cell_hwr_fs_pane_g1

0x8c9e,	// (0x00012ee0) cell_hwr_fs_pane_g2_ParamLimits

0x8c9e,	// (0x00012ee0) cell_hwr_fs_pane_g2

0x2132,	// (0x0000c374) cell_hwr_fs_pane_g3_ParamLimits

0x2132,	// (0x0000c374) cell_hwr_fs_pane_g3

0x213f,	// (0x0000c381) cell_hwr_fs_pane_g4_ParamLimits

0x213f,	// (0x0000c381) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00019a27) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00019a27) cell_hwr_fs_pane_g

0xe15f,	// (0x000183a1) cell_hwr_fs_pane_t1

0x6a4e,	// (0x00010c90) grid_highlight_pane_cp6

0x6a4e,	// (0x00010c90) main_idle_act2_pane

0x7ae9,	// (0x00011d2b) aid_inside_area_popup_secondary

0x22d5,	// (0x0000c517) aid_inside_area_window_primary_ParamLimits

0x22d5,	// (0x0000c517) aid_inside_area_window_primary

0xa6ba,	// (0x000148fc) ai2_news_ticker_pane

0xa6c2,	// (0x00014904) aid_size_cell_ai1_link_ParamLimits

0xa6c2,	// (0x00014904) aid_size_cell_ai1_link

0x2720,	// (0x0000c962) popup_ai2_data_window_ParamLimits

0x2720,	// (0x0000c962) popup_ai2_data_window

0xa6f0,	// (0x00014932) popup_ai2_link_window_ParamLimits

0xa6f0,	// (0x00014932) popup_ai2_link_window

0x8f2c,	// (0x0001316e) bg_popup_sub_pane_cp4_ParamLimits

0x8f2c,	// (0x0001316e) bg_popup_sub_pane_cp4

0xa704,	// (0x00014946) grid_ai2_link_pane_ParamLimits

0xa704,	// (0x00014946) grid_ai2_link_pane

0xa71b,	// (0x0001495d) popup_ai2_link_window_g1_ParamLimits

0xa71b,	// (0x0001495d) popup_ai2_link_window_g1

0xa727,	// (0x00014969) popup_ai2_link_window_g2_ParamLimits

0xa727,	// (0x00014969) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00019bfa) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00019bfa) popup_ai2_link_window_g

0xa736,	// (0x00014978) ai2_mp_button_pane

0xa73e,	// (0x00014980) ai2_mp_volume_pane

0x910a,	// (0x0001334c) bg_popup_sub_pane_cp5_ParamLimits

0x910a,	// (0x0001334c) bg_popup_sub_pane_cp5

0xa746,	// (0x00014988) heading_ai2_gene_pane_ParamLimits

0xa746,	// (0x00014988) heading_ai2_gene_pane

0xa752,	// (0x00014994) list_ai2_gene_pane_ParamLimits

0xa752,	// (0x00014994) list_ai2_gene_pane

0xa79a,	// (0x000149dc) cell_ai2_link_pane_ParamLimits

0xa79a,	// (0x000149dc) cell_ai2_link_pane

0xa7b0,	// (0x000149f2) cell_ai2_link_pane_g1

0x6a4e,	// (0x00010c90) grid_highlight_pane_cp7

0x59b9,	// (0x0000fbfb) ai2_mp_volume_pane_g1

0xa878,	// (0x00014aba) ai2_mp_volume_pane_g2

0x274a,	// (0x0000c98c) list_ai2_gene_pane_t1

0xa880,	// (0x00014ac2) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00019c13) ai2_mp_volume_pane_g

0x59c1,	// (0x0000fc03) volume_small_pane_cp3

0xa888,	// (0x00014aca) aid_size_cell_ai2_button

0xa890,	// (0x00014ad2) grid_ai2_button_pane

0xa899,	// (0x00014adb) cell_ai2_button_pane_ParamLimits

0xa899,	// (0x00014adb) cell_ai2_button_pane

0x6967,	// (0x00010ba9) cell_ai2_button_pane_g1

0x6a4e,	// (0x00010c90) grid_highlight_pane_cp8

0xa838,	// (0x00014a7a) ai2_gene_pane_t1_ParamLimits

0xa838,	// (0x00014a7a) ai2_gene_pane_t1

0xdb49,	// (0x00017d8b) aid_height_parent_landscape

0x249f,	// (0x0000c6e1) aid_height_set_list

0xa1d0,	// (0x00014412) aid_size_parent

0xa53f,	// (0x00014781) aid_size_cell_graphic_pane_ParamLimits

0xa762,	// (0x000149a4) popup_ai2_data_window_g1_ParamLimits

0xa762,	// (0x000149a4) popup_ai2_data_window_g1

0xa76e,	// (0x000149b0) ai2_news_ticker_pane_g1

0xa776,	// (0x000149b8) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00019bff) ai2_news_ticker_pane_g

0xa77e,	// (0x000149c0) ai2_news_ticker_pane_t1

0xa78c,	// (0x000149ce) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00019c04) ai2_news_ticker_pane_t

0xa4d9,	// (0x0001471b) heading_ai2_gene_pane_g1

0xa7b9,	// (0x000149fb) heading_ai2_gene_pane_t1_ParamLimits

0xa7b9,	// (0x000149fb) heading_ai2_gene_pane_t1

0xa7ce,	// (0x00014a10) list_highlight_pane_cp6

0x2734,	// (0x0000c976) ai2_gene_pane_ParamLimits

0x2734,	// (0x0000c976) ai2_gene_pane

0x2758,	// (0x0000c99a) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00019c09) list_ai2_gene_pane_t

0xa809,	// (0x00014a4b) list_highlight_pane_cp8_ParamLimits

0xa809,	// (0x00014a4b) list_highlight_pane_cp8

0xa81a,	// (0x00014a5c) ai2_gene_pane_g1_ParamLimits

0xa81a,	// (0x00014a5c) ai2_gene_pane_g1

0xa82c,	// (0x00014a6e) ai2_gene_pane_g2_ParamLimits

0xa82c,	// (0x00014a6e) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00019c0e) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00019c0e) ai2_gene_pane_g

0x72b8,	// (0x000114fa) scroll_pane_cp12

0xdb08,	// (0x00017d4a) control_pane_t3_ParamLimits

0xdb08,	// (0x00017d4a) control_pane_t3

0x15b2,	// (0x0000b7f4) status_small_pane_g8_ParamLimits

0x15b2,	// (0x0000b7f4) status_small_pane_g8

0xdc36,	// (0x00017e78) popup_find_window_ParamLimits

0xde29,	// (0x0001806b) popup_note_image_window_ParamLimits

0x74ca,	// (0x0001170c) list_double2_graphic_pane_vc_g1_ParamLimits

0x74ca,	// (0x0001170c) list_double2_graphic_pane_vc_g1

0x74d6,	// (0x00011718) list_double2_graphic_pane_vc_g2_ParamLimits

0x74d6,	// (0x00011718) list_double2_graphic_pane_vc_g2

0x7401,	// (0x00011643) list_double2_graphic_pane_vc_g3_ParamLimits

0x7401,	// (0x00011643) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00019803) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00019803) list_double2_graphic_pane_vc_g

0x74e2,	// (0x00011724) list_double2_graphic_pane_vc_t1_ParamLimits

0x74e2,	// (0x00011724) list_double2_graphic_pane_vc_t1

0x74d6,	// (0x00011718) list_single_heading_pane_vc_g1_ParamLimits

0x74d6,	// (0x00011718) list_single_heading_pane_vc_g1

0x7401,	// (0x00011643) list_single_heading_pane_vc_g2_ParamLimits

0x7401,	// (0x00011643) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001980a) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001980a) list_single_heading_pane_vc_g

0x8e5e,	// (0x000130a0) list_single_heading_pane_vc_t1_ParamLimits

0x8e5e,	// (0x000130a0) list_single_heading_pane_vc_t1

0x8e74,	// (0x000130b6) list_single_heading_pane_vc_t2_ParamLimits

0x8e74,	// (0x000130b6) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00019a0b) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00019a0b) list_single_heading_pane_vc_t

0x8e86,	// (0x000130c8) list_setting_number_pane_vc_g1_ParamLimits

0x8e86,	// (0x000130c8) list_setting_number_pane_vc_g1

0x8e92,	// (0x000130d4) list_setting_number_pane_vc_g2_ParamLimits

0x8e92,	// (0x000130d4) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00019a10) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00019a10) list_setting_number_pane_vc_g

0x8e9e,	// (0x000130e0) list_setting_number_pane_vc_t1_ParamLimits

0x8e9e,	// (0x000130e0) list_setting_number_pane_vc_t1

0x8eb2,	// (0x000130f4) list_setting_number_pane_vc_t2_ParamLimits

0x8eb2,	// (0x000130f4) list_setting_number_pane_vc_t2

0x8ece,	// (0x00013110) list_setting_number_pane_vc_t3_ParamLimits

0x8ece,	// (0x00013110) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00019a15) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00019a15) list_setting_number_pane_vc_t

0x8ef4,	// (0x00013136) set_value_pane_vc_ParamLimits

0x8ef4,	// (0x00013136) set_value_pane_vc

0xa39a,	// (0x000145dc) list_double2_graphic_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double2_graphic_pane_vc

0xa3ad,	// (0x000145ef) list_double2_large_graphic_pane_vc_ParamLimits

0xa3ad,	// (0x000145ef) list_double2_large_graphic_pane_vc

0xa39a,	// (0x000145dc) list_double2_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double2_pane_vc

0xa39a,	// (0x000145dc) list_double_graphic_heading_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double_graphic_heading_pane_vc

0xa39a,	// (0x000145dc) list_double_graphic_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double_graphic_pane_vc

0xa39a,	// (0x000145dc) list_double_heading_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double_heading_pane_vc

0xa3be,	// (0x00014600) list_double_large_graphic_pane_vc_ParamLimits

0xa3be,	// (0x00014600) list_double_large_graphic_pane_vc

0xa39a,	// (0x000145dc) list_double_number_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double_number_pane_vc

0xa39a,	// (0x000145dc) list_double_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double_pane_vc

0xa39a,	// (0x000145dc) list_double_time_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_double_time_pane_vc

0xa39a,	// (0x000145dc) list_setting_number_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_setting_number_pane_vc

0xa39a,	// (0x000145dc) list_setting_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_setting_pane_vc

0xa39a,	// (0x000145dc) list_single_graphic_heading_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_single_graphic_heading_pane_vc

0xa39a,	// (0x000145dc) list_single_heading_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_single_heading_pane_vc

0xa39a,	// (0x000145dc) list_single_number_heading_pane_vc_ParamLimits

0xa39a,	// (0x000145dc) list_single_number_heading_pane_vc

0x74ca,	// (0x0001170c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x74ca,	// (0x0001170c) list_double_graphic_heading_pane_vc_g1

0x74d6,	// (0x00011718) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x74d6,	// (0x00011718) list_double_graphic_heading_pane_vc_g2

0x7401,	// (0x00011643) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7401,	// (0x00011643) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5c1,	// (0x00019803) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x00019803) list_double_graphic_heading_pane_vc_g

0xa8cd,	// (0x00014b0f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa8cd,	// (0x00014b0f) list_double_graphic_heading_pane_vc_t1

0xa8e3,	// (0x00014b25) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa8e3,	// (0x00014b25) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d8,	// (0x00019c1a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d8,	// (0x00019c1a) list_double_graphic_heading_pane_vc_t

0x8e86,	// (0x000130c8) list_setting_pane_vc_g1_ParamLimits

0x8e86,	// (0x000130c8) list_setting_pane_vc_g1

0x8e92,	// (0x000130d4) list_setting_pane_vc_g2_ParamLimits

0x8e92,	// (0x000130d4) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00019a10) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00019a10) list_setting_pane_vc_g

0xaad8,	// (0x00014d1a) list_setting_pane_vc_t1_ParamLimits

0xaad8,	// (0x00014d1a) list_setting_pane_vc_t1

0xaaec,	// (0x00014d2e) list_setting_pane_vc_t2_ParamLimits

0xaaec,	// (0x00014d2e) list_setting_pane_vc_t2

0x0001,

0xfa1b,	// (0x00019c5d) list_setting_pane_vc_t_ParamLimits

0xfa1b,	// (0x00019c5d) list_setting_pane_vc_t

0x8ef4,	// (0x00013136) set_value_pane_cp_vc_ParamLimits

0x8ef4,	// (0x00013136) set_value_pane_cp_vc

0x74d6,	// (0x00011718) list_single_number_heading_pane_vc_g1_ParamLimits

0x74d6,	// (0x00011718) list_single_number_heading_pane_vc_g1

0x7401,	// (0x00011643) list_single_number_heading_pane_vc_g2_ParamLimits

0x7401,	// (0x00011643) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001980a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001980a) list_single_number_heading_pane_vc_g

0x8e5e,	// (0x000130a0) list_single_number_heading_pane_vc_t1_ParamLimits

0x8e5e,	// (0x000130a0) list_single_number_heading_pane_vc_t1

0xab0e,	// (0x00014d50) list_single_number_heading_pane_vc_t2_ParamLimits

0xab0e,	// (0x00014d50) list_single_number_heading_pane_vc_t2

0xab20,	// (0x00014d62) list_single_number_heading_pane_vc_t3_ParamLimits

0xab20,	// (0x00014d62) list_single_number_heading_pane_vc_t3

0x0002,

0xfa20,	// (0x00019c62) list_single_number_heading_pane_vc_t_ParamLimits

0xfa20,	// (0x00019c62) list_single_number_heading_pane_vc_t

0x74ca,	// (0x0001170c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x74ca,	// (0x0001170c) list_single_graphic_heading_pane_vc_g1

0x74d6,	// (0x00011718) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x74d6,	// (0x00011718) list_single_graphic_heading_pane_vc_g4

0x7401,	// (0x00011643) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7401,	// (0x00011643) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x00019803) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x00019803) list_single_graphic_heading_pane_vc_g

0x8e5e,	// (0x000130a0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8e5e,	// (0x000130a0) list_single_graphic_heading_pane_vc_t1

0xab32,	// (0x00014d74) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xab32,	// (0x00014d74) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x00019c69) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00019c69) list_single_graphic_heading_pane_vc_t

0x74d6,	// (0x00011718) list_double2_pane_vc_g1_ParamLimits

0x74d6,	// (0x00011718) list_double2_pane_vc_g1

0x7401,	// (0x00011643) list_double2_pane_vc_g2_ParamLimits

0x7401,	// (0x00011643) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001980a) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001980a) list_double2_pane_vc_g

0x740d,	// (0x0001164f) list_double2_pane_vc_t1_ParamLimits

0x740d,	// (0x0001164f) list_double2_pane_vc_t1

0x7370,	// (0x000115b2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7370,	// (0x000115b2) list_double2_large_graphic_pane_vc_g1

0x737c,	// (0x000115be) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x737c,	// (0x000115be) list_double2_large_graphic_pane_vc_g2

0x7388,	// (0x000115ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7388,	// (0x000115ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00019827) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00019827) list_double2_large_graphic_pane_vc_g

0x739c,	// (0x000115de) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x739c,	// (0x000115de) list_double2_large_graphic_pane_vc_t1

0xab44,	// (0x00014d86) list_double_time_pane_vc_g1_ParamLimits

0xab44,	// (0x00014d86) list_double_time_pane_vc_g1

0xab50,	// (0x00014d92) list_double_time_pane_vc_g2_ParamLimits

0xab50,	// (0x00014d92) list_double_time_pane_vc_g2

0x0001,

0xfa2c,	// (0x00019c6e) list_double_time_pane_vc_g_ParamLimits

0xfa2c,	// (0x00019c6e) list_double_time_pane_vc_g

0xab5c,	// (0x00014d9e) list_double_time_pane_vc_t1_ParamLimits

0xab5c,	// (0x00014d9e) list_double_time_pane_vc_t1

0xab7a,	// (0x00014dbc) list_double_time_pane_vc_t2_ParamLimits

0xab7a,	// (0x00014dbc) list_double_time_pane_vc_t2

0xab9e,	// (0x00014de0) list_double_time_pane_vc_t3_ParamLimits

0xab9e,	// (0x00014de0) list_double_time_pane_vc_t3

0xabb0,	// (0x00014df2) list_double_time_pane_vc_t4_ParamLimits

0xabb0,	// (0x00014df2) list_double_time_pane_vc_t4

0x0003,

0xfa31,	// (0x00019c73) list_double_time_pane_vc_t_ParamLimits

0xfa31,	// (0x00019c73) list_double_time_pane_vc_t

0x74d6,	// (0x00011718) list_double_pane_vc_g1_ParamLimits

0x74d6,	// (0x00011718) list_double_pane_vc_g1

0x7401,	// (0x00011643) list_double_pane_vc_g2_ParamLimits

0x7401,	// (0x00011643) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001980a) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001980a) list_double_pane_vc_g

0xabc2,	// (0x00014e04) list_double_pane_vc_t1_ParamLimits

0xabc2,	// (0x00014e04) list_double_pane_vc_t1

0xabd4,	// (0x00014e16) list_double_pane_vc_t2_ParamLimits

0xabd4,	// (0x00014e16) list_double_pane_vc_t2

0x0001,

0xfa3a,	// (0x00019c7c) list_double_pane_vc_t_ParamLimits

0xfa3a,	// (0x00019c7c) list_double_pane_vc_t

0x74d6,	// (0x00011718) list_double_number_pane_vc_g1_ParamLimits

0x74d6,	// (0x00011718) list_double_number_pane_vc_g1

0x7401,	// (0x00011643) list_double_number_pane_vc_g2_ParamLimits

0x7401,	// (0x00011643) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001980a) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001980a) list_double_number_pane_vc_g

0xabea,	// (0x00014e2c) list_double_number_pane_vc_t1_ParamLimits

0xabea,	// (0x00014e2c) list_double_number_pane_vc_t1

0xabfe,	// (0x00014e40) list_double_number_pane_vc_t2_ParamLimits

0xabfe,	// (0x00014e40) list_double_number_pane_vc_t2

0xac10,	// (0x00014e52) list_double_number_pane_vc_t3_ParamLimits

0xac10,	// (0x00014e52) list_double_number_pane_vc_t3

0x0002,

0xfa3f,	// (0x00019c81) list_double_number_pane_vc_t_ParamLimits

0xfa3f,	// (0x00019c81) list_double_number_pane_vc_t

0xac26,	// (0x00014e68) list_double_large_graphic_pane_vc_g1_ParamLimits

0xac26,	// (0x00014e68) list_double_large_graphic_pane_vc_g1

0xac4e,	// (0x00014e90) list_double_large_graphic_pane_vc_g2_ParamLimits

0xac4e,	// (0x00014e90) list_double_large_graphic_pane_vc_g2

0xac62,	// (0x00014ea4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xac62,	// (0x00014ea4) list_double_large_graphic_pane_vc_g3

0xac71,	// (0x00014eb3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xac71,	// (0x00014eb3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa46,	// (0x00019c88) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x00019c88) list_double_large_graphic_pane_vc_g

0xac81,	// (0x00014ec3) list_double_large_graphic_pane_vc_t1_ParamLimits

0xac81,	// (0x00014ec3) list_double_large_graphic_pane_vc_t1

0xac9b,	// (0x00014edd) list_double_large_graphic_pane_vc_t2_ParamLimits

0xac9b,	// (0x00014edd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4f,	// (0x00019c91) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4f,	// (0x00019c91) list_double_large_graphic_pane_vc_t

0x74d6,	// (0x00011718) list_double_heading_pane_vc_g1_ParamLimits

0x74d6,	// (0x00011718) list_double_heading_pane_vc_g1

0x7401,	// (0x00011643) list_double_heading_pane_vc_g2_ParamLimits

0x7401,	// (0x00011643) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001980a) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001980a) list_double_heading_pane_vc_g

0xacbb,	// (0x00014efd) list_double_heading_pane_vc_t1_ParamLimits

0xacbb,	// (0x00014efd) list_double_heading_pane_vc_t1

0x8e5e,	// (0x000130a0) list_double_heading_pane_vc_t2_ParamLimits

0x8e5e,	// (0x000130a0) list_double_heading_pane_vc_t2

0x0001,

0xfa54,	// (0x00019c96) list_double_heading_pane_vc_t_ParamLimits

0xfa54,	// (0x00019c96) list_double_heading_pane_vc_t

0xaccd,	// (0x00014f0f) list_double_graphic_pane_vc_g1_ParamLimits

0xaccd,	// (0x00014f0f) list_double_graphic_pane_vc_g1

0xacd9,	// (0x00014f1b) list_double_graphic_pane_vc_g2_ParamLimits

0xacd9,	// (0x00014f1b) list_double_graphic_pane_vc_g2

0x74d6,	// (0x00011718) list_double_graphic_pane_vc_g3_ParamLimits

0x74d6,	// (0x00011718) list_double_graphic_pane_vc_g3

0x0003,

0xfa59,	// (0x00019c9b) list_double_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x00019c9b) list_double_graphic_pane_vc_g

0xacf6,	// (0x00014f38) list_double_graphic_pane_vc_t1_ParamLimits

0xacf6,	// (0x00014f38) list_double_graphic_pane_vc_t1

0xad14,	// (0x00014f56) list_double_graphic_pane_vc_t2_ParamLimits

0xad14,	// (0x00014f56) list_double_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x00019ca4) list_double_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x00019ca4) list_double_graphic_pane_vc_t

0x482b,	// (0x0000ea6d) aid_size_cell_fastswap

0xd86d,	// (0x00017aaf) aid_size_cell_touch_ParamLimits

0xd86d,	// (0x00017aaf) aid_size_cell_touch

0x4982,	// (0x0000ebc4) popup_fast_swap_wide_window_ParamLimits

0x4982,	// (0x0000ebc4) popup_fast_swap_wide_window

0xd965,	// (0x00017ba7) touch_pane_ParamLimits

0xd965,	// (0x00017ba7) touch_pane

0x776e,	// (0x000119b0) button_value_adjust_pane_cp2

0x7776,	// (0x000119b8) button_value_adjust_pane_cp4

0x7796,	// (0x000119d8) form_field_data_pane_cp2

0x1073,	// (0x0000b2b5) form_field_data_wide_pane_cp2

0x7e0e,	// (0x00012050) bg_scroll_pane_ParamLimits

0x4c6f,	// (0x0000eeb1) scroll_handle_pane_ParamLimits

0x4c83,	// (0x0000eec5) scroll_sc2_down_pane_ParamLimits

0x4c83,	// (0x0000eec5) scroll_sc2_down_pane

0x7e3f,	// (0x00012081) scroll_sc2_up_pane_ParamLimits

0x7e3f,	// (0x00012081) scroll_sc2_up_pane

0x286e,	// (0x0000cab0) grid_wheel_folder_pane_g1_ParamLimits

0x286e,	// (0x0000cab0) grid_wheel_folder_pane_g1

0x4e37,	// (0x0000f079) clock_nsta_pane_cp2_ParamLimits

0x4e37,	// (0x0000f079) clock_nsta_pane_cp2

0x14c8,	// (0x0000b70a) listscroll_midp_pane_ParamLimits

0x14d7,	// (0x0000b719) midp_canvas_pane

0x507e,	// (0x0000f2c0) nsta_clock_indic_pane

0x891e,	// (0x00012b60) listscroll_form_pane_vc

0x893b,	// (0x00012b7d) listscroll_set_pane_vc_ParamLimits

0x893b,	// (0x00012b7d) listscroll_set_pane_vc

0x1e06,	// (0x0000c048) clock_nsta_pane

0x1e29,	// (0x0000c06b) indicator_nsta_pane

0x8d60,	// (0x00012fa2) bg_popup_sub_pane_cp2_ParamLimits

0x8d74,	// (0x00012fb6) find_pane_cp2_ParamLimits

0x8d74,	// (0x00012fb6) find_pane_cp2

0x8d86,	// (0x00012fc8) grid_toobar_pane_ParamLimits

0x8f00,	// (0x00013142) list_form_gen_pane_vc_ParamLimits

0x8f00,	// (0x00013142) list_form_gen_pane_vc

0x8f16,	// (0x00013158) scroll_pane_cp8_vc_ParamLimits

0x8f16,	// (0x00013158) scroll_pane_cp8_vc

0x8f92,	// (0x000131d4) data_form_wide_pane_vc_ParamLimits

0x8f92,	// (0x000131d4) data_form_wide_pane_vc

0x8f9e,	// (0x000131e0) form_field_data_wide_pane_vc_g1

0x8fa6,	// (0x000131e8) form_field_data_wide_pane_vc_t1_ParamLimits

0x8fa6,	// (0x000131e8) form_field_data_wide_pane_vc_t1

0x783e,	// (0x00011a80) input_focus_pane_cp6_vc_ParamLimits

0x783e,	// (0x00011a80) input_focus_pane_cp6_vc

0x218c,	// (0x0000c3ce) list_midp_pane_ParamLimits

0xa5a0,	// (0x000147e2) scroll_pane_cp16_ParamLimits

0xa5a0,	// (0x000147e2) scroll_pane_cp16

0x9308,	// (0x0001354a) button_value_adjust_pane_ParamLimits

0x9308,	// (0x0001354a) button_value_adjust_pane

0x24ab,	// (0x0000c6ed) button_value_adjust_pane_cp6_ParamLimits

0x24ab,	// (0x0000c6ed) button_value_adjust_pane_cp6

0x25b5,	// (0x0000c7f7) settings_code_pane_cp_ParamLimits

0x25b5,	// (0x0000c7f7) settings_code_pane_cp

0x6967,	// (0x00010ba9) cell_touch_pane_g1

0x6967,	// (0x00010ba9) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00019936) cell_touch_pane_g

0x2766,	// (0x0000c9a8) cell_touch_pane_cp_ParamLimits

0x2766,	// (0x0000c9a8) cell_touch_pane_cp

0x2782,	// (0x0000c9c4) cell_touch_pane_ParamLimits

0x2782,	// (0x0000c9c4) cell_touch_pane

0x6967,	// (0x00010ba9) scroll_sc2_down_pane_g1

0x6967,	// (0x00010ba9) scroll_sc2_up_pane_g1

0x6a4e,	// (0x00010c90) bg_set_opt_pane_cp4_vc

0xa8fb,	// (0x00014b3d) list_set_graphic_pane_vc_g1_ParamLimits

0xa8fb,	// (0x00014b3d) list_set_graphic_pane_vc_g1

0xa907,	// (0x00014b49) list_set_graphic_pane_vc_g2_ParamLimits

0xa907,	// (0x00014b49) list_set_graphic_pane_vc_g2

0x0001,

0xf9dd,	// (0x00019c1f) list_set_graphic_pane_vc_g_ParamLimits

0xf9dd,	// (0x00019c1f) list_set_graphic_pane_vc_g

0xa913,	// (0x00014b55) text_primary_small_cp13_vc_ParamLimits

0xa913,	// (0x00014b55) text_primary_small_cp13_vc

0xa92b,	// (0x00014b6d) list_set_graphic_pane_vc_ParamLimits

0xa92b,	// (0x00014b6d) list_set_graphic_pane_vc

0x6a4e,	// (0x00010c90) input_focus_pane_cp2_vc

0x6967,	// (0x00010ba9) setting_code_pane_vc_g1

0xa93e,	// (0x00014b80) setting_code_pane_vc_t1

0xa94c,	// (0x00014b8e) set_text_pane_vc_t1_ParamLimits

0xa94c,	// (0x00014b8e) set_text_pane_vc_t1

0x6a4e,	// (0x00010c90) input_focus_pane_cp1_vc

0xa967,	// (0x00014ba9) list_set_text_pane_vc

0x6967,	// (0x00010ba9) setting_text_pane_vc_g1

0x6a4e,	// (0x00010c90) bg_set_opt_pane_cp2_vc

0xa971,	// (0x00014bb3) setting_slider_graphic_pane_vc_g1

0xa979,	// (0x00014bbb) setting_slider_graphic_pane_vc_t1

0xa987,	// (0x00014bc9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e2,	// (0x00019c24) setting_slider_graphic_pane_vc_t

0xa995,	// (0x00014bd7) slider_set_pane_cp_vc

0xa99d,	// (0x00014bdf) slider_set_pane_vc_g1

0xa9a6,	// (0x00014be8) slider_set_pane_vc_g2

0x0006,

0xf9e7,	// (0x00019c29) slider_set_pane_vc_g

0x7961,	// (0x00011ba3) set_opt_bg_pane_g1_copy1

0x7969,	// (0x00011bab) set_opt_bg_pane_g2_copy1

0xa9d2,	// (0x00014c14) set_opt_bg_pane_g3_copy1

0x7979,	// (0x00011bbb) set_opt_bg_pane_g4_copy1

0x7981,	// (0x00011bc3) set_opt_bg_pane_g5_copy1

0x7989,	// (0x00011bcb) set_opt_bg_pane_g6_copy1

0xa9da,	// (0x00014c1c) set_opt_bg_pane_g7_copy1

0xa9e2,	// (0x00014c24) set_opt_bg_pane_g8_copy1

0xa9ea,	// (0x00014c2c) set_opt_bg_pane_g9_copy1

0x6a4e,	// (0x00010c90) bg_set_opt_pane_cp_vc

0xa9f2,	// (0x00014c34) setting_slider_pane_vc_t1

0xa979,	// (0x00014bbb) setting_slider_pane_vc_t2

0xa987,	// (0x00014bc9) setting_slider_pane_vc_t3

0x0002,

0xf9f6,	// (0x00019c38) setting_slider_pane_vc_t

0xa995,	// (0x00014bd7) slider_set_pane_vc

0x56e3,	// (0x0000f925) volume_set_pane_vc_g1

0x59ca,	// (0x0000fc0c) volume_set_pane_vc_g2

0x59d3,	// (0x0000fc15) volume_set_pane_vc_g3

0x59dc,	// (0x0000fc1e) volume_set_pane_vc_g4

0x59e5,	// (0x0000fc27) volume_set_pane_vc_g5

0x59ee,	// (0x0000fc30) volume_set_pane_vc_g6

0x59f7,	// (0x0000fc39) volume_set_pane_vc_g7

0x5a00,	// (0x0000fc42) volume_set_pane_vc_g8

0x5a09,	// (0x0000fc4b) volume_set_pane_vc_g9

0x5a12,	// (0x0000fc54) volume_set_pane_vc_g10

0x0009,

0xf9fd,	// (0x00019c3f) volume_set_pane_vc_g

0xaa01,	// (0x00014c43) volume_set_pane_vc

0xaa09,	// (0x00014c4b) button_value_adjust_pane_cp1_vc

0xaa13,	// (0x00014c55) list_highlight_pane_cp2_vc

0xaa1c,	// (0x00014c5e) list_set_pane_vc_ParamLimits

0xaa1c,	// (0x00014c5e) list_set_pane_vc

0xaa6e,	// (0x00014cb0) main_pane_set_vc_t1_ParamLimits

0xaa6e,	// (0x00014cb0) main_pane_set_vc_t1

0xaa83,	// (0x00014cc5) main_pane_set_vc_t2_ParamLimits

0xaa83,	// (0x00014cc5) main_pane_set_vc_t2

0xaa95,	// (0x00014cd7) main_pane_set_vc_t3_ParamLimits

0xaa95,	// (0x00014cd7) main_pane_set_vc_t3

0xaaa7,	// (0x00014ce9) main_pane_set_vc_t4_ParamLimits

0xaaa7,	// (0x00014ce9) main_pane_set_vc_t4

0x0003,

0xfa12,	// (0x00019c54) main_pane_set_vc_t_ParamLimits

0xfa12,	// (0x00019c54) main_pane_set_vc_t

0xaab9,	// (0x00014cfb) setting_code_pane_vc_ParamLimits

0xaab9,	// (0x00014cfb) setting_code_pane_vc

0xaac8,	// (0x00014d0a) setting_slider_graphic_pane_vc

0xaac8,	// (0x00014d0a) setting_slider_pane_vc

0xaac8,	// (0x00014d0a) setting_text_pane_vc

0xaac8,	// (0x00014d0a) setting_volume_pane_vc

0xaad0,	// (0x00014d12) scroll_pane_cp121_vc

0x7765,	// (0x000119a7) set_content_pane_vc

0xad32,	// (0x00014f74) button_value_adjust_pane_g1

0xad3b,	// (0x00014f7d) button_value_adjust_pane_g2

0x0001,

0xfa67,	// (0x00019ca9) button_value_adjust_pane_g

0xad44,	// (0x00014f86) form_field_slider_wide_pane_vc_t1_ParamLimits

0xad44,	// (0x00014f86) form_field_slider_wide_pane_vc_t1

0xad5a,	// (0x00014f9c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xad5a,	// (0x00014f9c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6c,	// (0x00019cae) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6c,	// (0x00019cae) form_field_slider_wide_pane_vc_t

0x6dc7,	// (0x00011009) input_focus_pane_cp10_vc_ParamLimits

0x6dc7,	// (0x00011009) input_focus_pane_cp10_vc

0xad85,	// (0x00014fc7) slider_cont_pane_cp1_vc_ParamLimits

0xad85,	// (0x00014fc7) slider_cont_pane_cp1_vc

0xa99d,	// (0x00014bdf) slider_form_pane_g1_cp2

0xa9a6,	// (0x00014be8) slider_form_pane_g2_cp2

0xada0,	// (0x00014fe2) form_field_slider_pane_vc_t3

0xadae,	// (0x00014ff0) form_field_slider_pane_vc_t4

0xadbc,	// (0x00014ffe) slider_form_pane_vc_ParamLimits

0xadbc,	// (0x00014ffe) slider_form_pane_vc

0xadc9,	// (0x0001500b) form_field_slider_pane_vc_t1_ParamLimits

0xadc9,	// (0x0001500b) form_field_slider_pane_vc_t1

0xaddf,	// (0x00015021) form_field_slider_pane_vc_t2_ParamLimits

0xaddf,	// (0x00015021) form_field_slider_pane_vc_t2

0x0001,

0xfa7e,	// (0x00019cc0) form_field_slider_pane_vc_t_ParamLimits

0xfa7e,	// (0x00019cc0) form_field_slider_pane_vc_t

0x6dc7,	// (0x00011009) input_focus_pane_cp9_vc_ParamLimits

0x6dc7,	// (0x00011009) input_focus_pane_cp9_vc

0xadf1,	// (0x00015033) slider_cont_pane_vc_ParamLimits

0xadf1,	// (0x00015033) slider_cont_pane_vc

0xae03,	// (0x00015045) list_form_graphic_pane_cp_vc_ParamLimits

0xae03,	// (0x00015045) list_form_graphic_pane_cp_vc

0x8f9e,	// (0x000131e0) form_field_popup_wide_pane_vc_g1

0xae18,	// (0x0001505a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xae18,	// (0x0001505a) form_field_popup_wide_pane_vc_t1

0x783e,	// (0x00011a80) input_focus_pane_cp8_vc_ParamLimits

0x783e,	// (0x00011a80) input_focus_pane_cp8_vc

0xae57,	// (0x00015099) list_form_wide_pane_vc_ParamLimits

0xae57,	// (0x00015099) list_form_wide_pane_vc

0xae63,	// (0x000150a5) list_form_graphic_pane_vc_g1

0xae6b,	// (0x000150ad) list_form_graphic_pane_vc_t1_ParamLimits

0xae6b,	// (0x000150ad) list_form_graphic_pane_vc_t1

0x6b2e,	// (0x00010d70) list_highlight_pane_cp5_vc_ParamLimits

0x6b2e,	// (0x00010d70) list_highlight_pane_cp5_vc

0xae87,	// (0x000150c9) list_form_graphic_pane_vc_ParamLimits

0xae87,	// (0x000150c9) list_form_graphic_pane_vc

0x8f9e,	// (0x000131e0) form_field_popup_pane_vc_g1

0xae9d,	// (0x000150df) form_field_popup_pane_vc_t1_ParamLimits

0xae9d,	// (0x000150df) form_field_popup_pane_vc_t1

0x783e,	// (0x00011a80) input_focus_pane_cp7_vc_ParamLimits

0x783e,	// (0x00011a80) input_focus_pane_cp7_vc

0xaeb2,	// (0x000150f4) list_form_pane_vc_ParamLimits

0xaeb2,	// (0x000150f4) list_form_pane_vc

0xaebe,	// (0x00015100) data_form_pane_vc_t1_ParamLimits

0xaebe,	// (0x00015100) data_form_pane_vc_t1

0x7961,	// (0x00011ba3) input_focus_pane_vc_g1

0x7969,	// (0x00011bab) input_focus_pane_vc_g2

0x7971,	// (0x00011bb3) input_focus_pane_vc_g3

0x7979,	// (0x00011bbb) input_focus_pane_vc_g4

0x7981,	// (0x00011bc3) input_focus_pane_vc_g5

0x7989,	// (0x00011bcb) input_focus_pane_vc_g6

0x7991,	// (0x00011bd3) input_focus_pane_vc_g7

0x7999,	// (0x00011bdb) input_focus_pane_vc_g8

0x79a1,	// (0x00011be3) input_focus_pane_vc_g9

0x6967,	// (0x00010ba9) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x000198bf) input_focus_pane_vc_g

0x8f92,	// (0x000131d4) data_form_pane_vc_ParamLimits

0x8f92,	// (0x000131d4) data_form_pane_vc

0x8f9e,	// (0x000131e0) form_field_data_pane_vc_g1

0xaed9,	// (0x0001511b) form_field_data_pane_vc_t1_ParamLimits

0xaed9,	// (0x0001511b) form_field_data_pane_vc_t1

0x783e,	// (0x00011a80) input_focus_pane_vc_ParamLimits

0x783e,	// (0x00011a80) input_focus_pane_vc

0x776e,	// (0x000119b0) button_value_adjust_pane_cp3_vc

0xaeef,	// (0x00015131) button_value_adjust_pane_cp5_vc

0xaef7,	// (0x00015139) form_field_data_pane_vc_ParamLimits

0xaef7,	// (0x00015139) form_field_data_pane_vc

0x7796,	// (0x000119d8) form_field_data_pane_vc_cp2

0xaf0e,	// (0x00015150) form_field_data_wide_pane_vc_ParamLimits

0xaf0e,	// (0x00015150) form_field_data_wide_pane_vc

0xaf24,	// (0x00015166) form_field_data_wide_pane_vc_cp2

0xaf2c,	// (0x0001516e) form_field_popup_pane_vc_ParamLimits

0xaf2c,	// (0x0001516e) form_field_popup_pane_vc

0xaf43,	// (0x00015185) form_field_popup_wide_pane_vc_ParamLimits

0xaf43,	// (0x00015185) form_field_popup_wide_pane_vc

0xaf59,	// (0x0001519b) form_field_slider_pane_vc_ParamLimits

0xaf59,	// (0x0001519b) form_field_slider_pane_vc

0xaf6c,	// (0x000151ae) form_field_slider_wide_pane_vc_ParamLimits

0xaf6c,	// (0x000151ae) form_field_slider_wide_pane_vc

0x27a0,	// (0x0000c9e2) grid_touch_1_pane_ParamLimits

0x27a0,	// (0x0000c9e2) grid_touch_1_pane

0x27b4,	// (0x0000c9f6) grid_touch_2_pane_ParamLimits

0x27b4,	// (0x0000c9f6) grid_touch_2_pane

0xb039,	// (0x0001527b) touch_pane_g1_ParamLimits

0xb039,	// (0x0001527b) touch_pane_g1

0xafa3,	// (0x000151e5) cell_app_pane_cp_wide_ParamLimits

0xafa3,	// (0x000151e5) cell_app_pane_cp_wide

0xafb3,	// (0x000151f5) grid_popup_fast_wide_pane_ParamLimits

0xafb3,	// (0x000151f5) grid_popup_fast_wide_pane

0xafc7,	// (0x00015209) scroll_pane_cp19_ParamLimits

0xafc7,	// (0x00015209) scroll_pane_cp19

0x6a4e,	// (0x00010c90) bg_popup_window_pane_cp20

0xafdb,	// (0x0001521d) listscroll_popup_fast_wide_pane

0x7b53,	// (0x00011d95) grid_indicator_nsta_pane

0xafe3,	// (0x00015225) clock_nsta_pane_g1

0xafec,	// (0x0001522e) clock_nsta_pane_t1

0x27de,	// (0x0000ca20) cell_indicator_nsta_pane_ParamLimits

0x27de,	// (0x0000ca20) cell_indicator_nsta_pane

0xb039,	// (0x0001527b) cell_indicator_nsta_pane_g1

0x27f5,	// (0x0000ca37) cell_indicator_nsta_pane_g2

0x0001,

0xfa8f,	// (0x00019cd1) cell_indicator_nsta_pane_g

0xb054,	// (0x00015296) clock_nsta_pane_cp

0xb05c,	// (0x0001529e) indicator_nsta_pane_cp

0xb065,	// (0x000152a7) nsta_clock_indic_pane_g1

0x6c0e,	// (0x00010e50) grid_indicator_pane

0x7f31,	// (0x00012173) scroll_pane_cp29

0x4d8e,	// (0x0000efd0) indicator_nsta_pane_cp2_ParamLimits

0x4d8e,	// (0x0000efd0) indicator_nsta_pane_cp2

0x6b2e,	// (0x00010d70) main_apps_wheel_pane

0x9189,	// (0x000133cb) form_midp_field_text_pane_ParamLimits

0x92ce,	// (0x00013510) scroll_bar_cp050_ParamLimits

0xb0ce,	// (0x00015310) cell_indicator_pane_ParamLimits

0xb0ce,	// (0x00015310) cell_indicator_pane

0xb0e4,	// (0x00015326) cell_indicator_pane_g1

0x2802,	// (0x0000ca44) grid_wheel_folder_pane_ParamLimits

0x2802,	// (0x0000ca44) grid_wheel_folder_pane

0x2810,	// (0x0000ca52) list_wheel_apps_pane_ParamLimits

0x2810,	// (0x0000ca52) list_wheel_apps_pane

0x281c,	// (0x0000ca5e) main_apps_wheel_pane_g1_ParamLimits

0x281c,	// (0x0000ca5e) main_apps_wheel_pane_g1

0x2828,	// (0x0000ca6a) main_apps_wheel_pane_g2_ParamLimits

0x2828,	// (0x0000ca6a) main_apps_wheel_pane_g2

0x0001,

0xfaab,	// (0x00019ced) main_apps_wheel_pane_g_ParamLimits

0xfaab,	// (0x00019ced) main_apps_wheel_pane_g

0x2834,	// (0x0000ca76) main_apps_wheel_pane_t1_ParamLimits

0x2834,	// (0x0000ca76) main_apps_wheel_pane_t1

0x2846,	// (0x0000ca88) list_wheel_apps_pane_g1

0x284e,	// (0x0000ca90) list_wheel_apps_pane_g2

0x2856,	// (0x0000ca98) list_wheel_apps_pane_g3

0x285e,	// (0x0000caa0) list_wheel_apps_pane_g4

0x2866,	// (0x0000caa8) list_wheel_apps_pane_g5

0x0004,

0xfab0,	// (0x00019cf2) list_wheel_apps_pane_g

0x6b2e,	// (0x00010d70) navi_icon_text_pane

0x1d12,	// (0x0000bf54) aid_fill_nsta

0xb195,	// (0x000153d7) navi_icon_text_pane_g1

0xb1a1,	// (0x000153e3) navi_icon_text_pane_t1

0x8370,	// (0x000125b2) list_set_graphic_pane_t1_ParamLimits

0x8370,	// (0x000125b2) list_set_graphic_pane_t1

0x99e8,	// (0x00013c2a) popup_midp_note_alarm_window_t6_ParamLimits

0x99e8,	// (0x00013c2a) popup_midp_note_alarm_window_t6

0x99fa,	// (0x00013c3c) popup_midp_note_alarm_window_t7_ParamLimits

0x99fa,	// (0x00013c3c) popup_midp_note_alarm_window_t7

0x9a0c,	// (0x00013c4e) popup_midp_note_alarm_window_t8_ParamLimits

0x9a0c,	// (0x00013c4e) popup_midp_note_alarm_window_t8

0x9a1e,	// (0x00013c60) popup_midp_note_alarm_window_t9_ParamLimits

0x9a1e,	// (0x00013c60) popup_midp_note_alarm_window_t9

0x9a30,	// (0x00013c72) popup_midp_note_alarm_window_t10_ParamLimits

0x9a30,	// (0x00013c72) popup_midp_note_alarm_window_t10

0x9a42,	// (0x00013c84) popup_midp_note_alarm_window_t11_ParamLimits

0x9a42,	// (0x00013c84) popup_midp_note_alarm_window_t11

0x9a54,	// (0x00013c96) scroll_pane_cp17_ParamLimits

0x9a54,	// (0x00013c96) scroll_pane_cp17

0x56e3,	// (0x0000f925) volume_small_pane_cp_g1

0x5a1b,	// (0x0000fc5d) volume_small_pane_cp_g2

0x5a24,	// (0x0000fc66) volume_small_pane_cp_g3

0x5a2d,	// (0x0000fc6f) volume_small_pane_cp_g4

0x5710,	// (0x0000f952) volume_small_pane_cp_g5

0x5a36,	// (0x0000fc78) volume_small_pane_cp_g6

0x5a3f,	// (0x0000fc81) volume_small_pane_cp_g7

0x5a48,	// (0x0000fc8a) volume_small_pane_cp_g8

0x5a51,	// (0x0000fc93) volume_small_pane_cp_g9

0x5a5a,	// (0x0000fc9c) volume_small_pane_cp_g10

0x86cf,	// (0x00012911) midp_ticker_pane_g1_ParamLimits

0x86db,	// (0x0001291d) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x0001998b) midp_ticker_pane_g_ParamLimits

0x86e7,	// (0x00012929) midp_ticker_pane_t1_ParamLimits

0x1d28,	// (0x0000bf6a) aid_fill_nsta_2

0x92ba,	// (0x000134fc) list_form2_midp_pane

0xa369,	// (0x000145ab) midp_editing_number_pane_ParamLimits

0xa375,	// (0x000145b7) midp_ticker_pane_ParamLimits

0xb1b3,	// (0x000153f5) form2_midp_field_pane

0xb1d7,	// (0x00015419) scroll_pane_cp51

0xb1f7,	// (0x00015439) form2_midp_button_pane_ParamLimits

0xb1f7,	// (0x00015439) form2_midp_button_pane

0xb209,	// (0x0001544b) form2_midp_content_pane_ParamLimits

0xb209,	// (0x0001544b) form2_midp_content_pane

0xb223,	// (0x00015465) form2_midp_field_choice_group_pane

0xb22b,	// (0x0001546d) form2_midp_field_pane_g1

0xb233,	// (0x00015475) form2_midp_field_pane_g2

0xb23b,	// (0x0001547d) form2_midp_field_pane_g3

0xb243,	// (0x00015485) form2_midp_field_pane_g4

0x0003,

0xfad5,	// (0x00019d17) form2_midp_field_pane_g

0xb24b,	// (0x0001548d) form2_midp_gauge_slider_pane

0xb253,	// (0x00015495) form2_midp_gauge_wait_pane

0xb25b,	// (0x0001549d) form2_midp_image_pane_ParamLimits

0xb25b,	// (0x0001549d) form2_midp_image_pane

0xb276,	// (0x000154b8) form2_midp_label_pane_ParamLimits

0xb276,	// (0x000154b8) form2_midp_label_pane

0x289b,	// (0x0000cadd) form2_midp_label_pane_cp_ParamLimits

0x289b,	// (0x0000cadd) form2_midp_label_pane_cp

0xb2ae,	// (0x000154f0) form2_midp_string_pane_ParamLimits

0xb2ae,	// (0x000154f0) form2_midp_string_pane

0xb2c0,	// (0x00015502) form2_midp_text_pane_ParamLimits

0xb2c0,	// (0x00015502) form2_midp_text_pane

0xb2d9,	// (0x0001551b) form2_midp_time_pane

0xb2e9,	// (0x0001552b) input_focus_pane_cp51_ParamLimits

0xb2e9,	// (0x0001552b) input_focus_pane_cp51

0xb301,	// (0x00015543) form2_midp_label_pane_t1_ParamLimits

0xb301,	// (0x00015543) form2_midp_label_pane_t1

0x79a9,	// (0x00011beb) form2_mdip_text_pane_t1_ParamLimits

0x79a9,	// (0x00011beb) form2_mdip_text_pane_t1

0xb341,	// (0x00015583) form2_midp_time_pane_t1

0xb35c,	// (0x0001559e) form2_midp_gauge_slider_pane_t1

0x28ba,	// (0x0000cafc) form2_midp_gauge_slider_pane_t2

0x28cc,	// (0x0000cb0e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfade,	// (0x00019d20) form2_midp_gauge_slider_pane_t

0xb392,	// (0x000155d4) form2_midp_slider_pane

0xb39e,	// (0x000155e0) form2_midp_gauge_wait_pane_t1

0xb3ac,	// (0x000155ee) form2_midp_wait_pane_ParamLimits

0xb3ac,	// (0x000155ee) form2_midp_wait_pane

0x8fdc,	// (0x0001321e) list_single_2graphic_pane_cp4_ParamLimits

0x8fdc,	// (0x0001321e) list_single_2graphic_pane_cp4

0xb3d7,	// (0x00015619) list_single_midp_graphic_pane_cp_ParamLimits

0xb3d7,	// (0x00015619) list_single_midp_graphic_pane_cp

0x6a4e,	// (0x00010c90) list_highlight_pane_cp20

0xb3f5,	// (0x00015637) list_single_2graphic_pane_g1_cp4

0xa4d9,	// (0x0001471b) list_single_2graphic_pane_g2_cp4

0xb3fd,	// (0x0001563f) list_single_2graphic_pane_t1_cp4

0x6b2e,	// (0x00010d70) list_highlight_pane_cp21

0xb40c,	// (0x0001564e) list_single_midp_graphic_pane_g4_cp

0xb41b,	// (0x0001565d) list_single_midp_graphic_pane_t1_cp

0xb430,	// (0x00015672) form2_mdip_string_pane_t1_ParamLimits

0xb430,	// (0x00015672) form2_mdip_string_pane_t1

0x6a4e,	// (0x00010c90) bg_wml_button_pane_cp2

0x6967,	// (0x00010ba9) form2_midp_image_pane_g1

0x7553,	// (0x00011795) list_double_large_graphic_pane_g5_ParamLimits

0x7553,	// (0x00011795) list_double_large_graphic_pane_g5

0x14c8,	// (0x0000b70a) midp_form_pane_ParamLimits

0x6b2e,	// (0x00010d70) main_apps_wheel_pane_ParamLimits

0xdea3,	// (0x000180e5) popup_preview_window_ParamLimits

0xdea3,	// (0x000180e5) popup_preview_window

0x54fd,	// (0x0000f73f) popup_touch_info_window_ParamLimits

0x54fd,	// (0x0000f73f) popup_touch_info_window

0x551b,	// (0x0000f75d) popup_touch_menu_window_ParamLimits

0x551b,	// (0x0000f75d) popup_touch_menu_window

0x695d,	// (0x00010b9f) bg_popup_sub_pane_cp6

0xb49a,	// (0x000156dc) list_touch_menu_pane

0xb4a2,	// (0x000156e4) list_single_touch_menu_pane_ParamLimits

0xb4a2,	// (0x000156e4) list_single_touch_menu_pane

0xb4b9,	// (0x000156fb) list_single_touch_menu_pane_t1

0x6b2e,	// (0x00010d70) bg_popup_sub_pane_cp7_ParamLimits

0x6b2e,	// (0x00010d70) bg_popup_sub_pane_cp7

0xb4c7,	// (0x00015709) heading_sub_pane

0xb4cf,	// (0x00015711) list_touch_info_pane_ParamLimits

0xb4cf,	// (0x00015711) list_touch_info_pane

0xb4de,	// (0x00015720) list_single_touch_info_pane_ParamLimits

0xb4de,	// (0x00015720) list_single_touch_info_pane

0xb4ef,	// (0x00015731) list_single_touch_info_pane_t1

0xb4fd,	// (0x0001573f) list_single_touch_info_pane_t2

0x0001,

0xfaec,	// (0x00019d2e) list_single_touch_info_pane_t

0x85fe,	// (0x00012840) bg_popup_heading_pane_cp

0xb50b,	// (0x0001574d) heading_sub_pane_t1

0x8f2c,	// (0x0001316e) bg_popup_preview_window_pane_cp_ParamLimits

0x8f2c,	// (0x0001316e) bg_popup_preview_window_pane_cp

0xb4c7,	// (0x00015709) heading_preview_pane

0xb4cf,	// (0x00015711) list_preview_pane_ParamLimits

0xb4cf,	// (0x00015711) list_preview_pane

0xb519,	// (0x0001575b) popup_preview_window_g1

0xb4de,	// (0x00015720) list_single_preview_pane_ParamLimits

0xb4de,	// (0x00015720) list_single_preview_pane

0xb521,	// (0x00015763) list_single_preview_pane_g1

0xb529,	// (0x0001576b) list_single_preview_pane_t1

0xb4ef,	// (0x00015731) list_single_preview_pane_t2

0x0001,

0xfaf1,	// (0x00019d33) list_single_preview_pane_t

0xb537,	// (0x00015779) bg_popup_heading_pane_cp2_ParamLimits

0xb537,	// (0x00015779) bg_popup_heading_pane_cp2

0xb54d,	// (0x0001578f) heading_preview_pane_g1

0xb555,	// (0x00015797) heading_preview_pane_t1_ParamLimits

0xb555,	// (0x00015797) heading_preview_pane_t1

0x6c31,	// (0x00010e73) soft_indicator_pane_t1_ParamLimits

0x7294,	// (0x000114d6) scroll_pane_ParamLimits

0x7e2d,	// (0x0001206f) scroll_sc2_left_pane

0x7e36,	// (0x00012078) scroll_sc2_right_pane

0x7e55,	// (0x00012097) scroll_bg_pane_g1_ParamLimits

0x7e6a,	// (0x000120ac) scroll_bg_pane_g2_ParamLimits

0x7e82,	// (0x000120c4) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00019916) scroll_bg_pane_g_ParamLimits

0x7e55,	// (0x00012097) scroll_handle_pane_g1_ParamLimits

0x7ea4,	// (0x000120e6) scroll_handle_pane_g2_ParamLimits

0x7e82,	// (0x000120c4) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x0001991d) scroll_handle_pane_g_ParamLimits

0x50ca,	// (0x0000f30c) popup_choice_list_window_ParamLimits

0x50ca,	// (0x0000f30c) popup_choice_list_window

0x8d6c,	// (0x00012fae) choice_list_pane

0x8de2,	// (0x00013024) cell_toolbar_pane_t1

0x8e0a,	// (0x0001304c) toolbar_button_pane_ParamLimits

0x9edd,	// (0x0001411f) ai_gene_pane_1_t2_ParamLimits

0x9edd,	// (0x0001411f) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00019b39) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00019b39) ai_gene_pane_1_t

0xb572,	// (0x000157b4) scroll_sc2_left_pane_g1

0xb572,	// (0x000157b4) scroll_sc2_right_pane_g1

0x894d,	// (0x00012b8f) bg_popup_sub_pane_cp10

0xb57c,	// (0x000157be) list_choice_list_pane

0xb593,	// (0x000157d5) list_single_choice_list_pane_ParamLimits

0xb593,	// (0x000157d5) list_single_choice_list_pane

0xb5a5,	// (0x000157e7) list_single_choice_list_pane_g1

0x7b24,	// (0x00011d66) list_single_choice_list_pane_t1_ParamLimits

0x7b24,	// (0x00011d66) list_single_choice_list_pane_t1

0xb5ad,	// (0x000157ef) choice_list_pane_g1

0xb5b5,	// (0x000157f7) choice_list_pane_t1

0x695d,	// (0x00010b9f) input_focus_pane_cp11

0x7d08,	// (0x00011f4a) title_pane_stacon_g2_ParamLimits

0x7d08,	// (0x00011f4a) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x000198fc) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x000198fc) title_pane_stacon_g

0x85fe,	// (0x00012840) cursor_press_pane

0xdc0a,	// (0x00017e4c) popup_fep_hwr_window_ParamLimits

0xdc0a,	// (0x00017e4c) popup_fep_hwr_window

0x51c2,	// (0x0000f404) popup_fep_vkb_window_ParamLimits

0x51c2,	// (0x0000f404) popup_fep_vkb_window

0xb5c3,	// (0x00015805) cursor_press_pane_g1

0x0002,

0xfb1a,	// (0x00019d5c) fep_vkb_side_pane_g_ParamLimits

0x5a98,	// (0x0000fcda) fep_hwr_candidate_pane_ParamLimits

0x5a98,	// (0x0000fcda) fep_hwr_candidate_pane

0x5ac0,	// (0x0000fd02) fep_hwr_side_pane_ParamLimits

0x5ac0,	// (0x0000fd02) fep_hwr_side_pane

0x5ae0,	// (0x0000fd22) fep_hwr_top_pane_ParamLimits

0x5ae0,	// (0x0000fd22) fep_hwr_top_pane

0x5af8,	// (0x0000fd3a) fep_hwr_write_pane_ParamLimits

0x5af8,	// (0x0000fd3a) fep_hwr_write_pane

0xfb1a,	// (0x00019d5c) fep_vkb_side_pane_g

0xb5cb,	// (0x0001580d) fep_hwr_top_pane_g1

0xb5dd,	// (0x0001581f) fep_hwr_top_pane_g2

0x5b32,	// (0x0000fd74) fep_hwr_top_pane_g3

0x0002,

0xfaf6,	// (0x00019d38) fep_hwr_top_pane_g

0x5b47,	// (0x0000fd89) fep_hwr_top_text_pane

0x7ff9,	// (0x0001223b) fep_hwr_top_text_pane_g1

0xb613,	// (0x00015855) fep_hwr_top_text_pane_t1

0x5c35,	// (0x0000fe77) fep_hwr_candidate_pane_g1

0xb823,	// (0x00015a65) fep_vkb_keypad_pane_g3_ParamLimits

0xb823,	// (0x00015a65) fep_vkb_keypad_pane_g3

0xb845,	// (0x00015a87) fep_vkb_keypad_pane_g4_ParamLimits

0xb845,	// (0x00015a87) fep_vkb_keypad_pane_g4

0xb8b4,	// (0x00015af6) fep_vkb_bottom_pane_g2_ParamLimits

0xb8b4,	// (0x00015af6) fep_vkb_bottom_pane_g2

0x0001,

0xfb21,	// (0x00019d63) fep_vkb_bottom_pane_g_ParamLimits

0xfb21,	// (0x00019d63) fep_vkb_bottom_pane_g

0xb572,	// (0x000157b4) cell_vkb_side_pane_g2

0x0001,

0xfb2b,	// (0x00019d6d) cell_vkb_side_pane_g

0xb93f,	// (0x00015b81) cell_vkb_side_pane_t1

0xb94d,	// (0x00015b8f) cell_vkb_side_pane_t1_copy1

0xb572,	// (0x000157b4) bg_fep_vkb_candidate_pane_g2

0xba71,	// (0x00015cb3) cell_vkb_candidate_pane_ParamLimits

0xb621,	// (0x00015863) aid_size_cell_vkb_ParamLimits

0xb621,	// (0x00015863) aid_size_cell_vkb

0xba71,	// (0x00015cb3) cell_vkb_candidate_pane

0x5c5c,	// (0x0000fe9e) bg_popup_fep_shadow_pane_g1

0xb697,	// (0x000158d9) fep_vkb_bottom_pane_ParamLimits

0xb697,	// (0x000158d9) fep_vkb_bottom_pane

0xb6d4,	// (0x00015916) fep_vkb_candidate_pane_ParamLimits

0xb6d4,	// (0x00015916) fep_vkb_candidate_pane

0xb6f0,	// (0x00015932) fep_vkb_keypad_pane_ParamLimits

0xb6f0,	// (0x00015932) fep_vkb_keypad_pane

0xb724,	// (0x00015966) fep_vkb_side_pane_ParamLimits

0xb724,	// (0x00015966) fep_vkb_side_pane

0xb750,	// (0x00015992) fep_vkb_top_pane_ParamLimits

0xb750,	// (0x00015992) fep_vkb_top_pane

0xb77c,	// (0x000159be) fep_vkb_top_pane_g1_ParamLimits

0xb77c,	// (0x000159be) fep_vkb_top_pane_g1

0xb78b,	// (0x000159cd) fep_vkb_top_pane_g2_ParamLimits

0xb78b,	// (0x000159cd) fep_vkb_top_pane_g2

0xb79a,	// (0x000159dc) fep_vkb_top_pane_g3_ParamLimits

0xb79a,	// (0x000159dc) fep_vkb_top_pane_g3

0x0003,

0xfb11,	// (0x00019d53) fep_vkb_top_pane_g_ParamLimits

0xfb11,	// (0x00019d53) fep_vkb_top_pane_g

0xb7b8,	// (0x000159fa) fep_vkb_top_text_pane_ParamLimits

0xb7b8,	// (0x000159fa) fep_vkb_top_text_pane

0x293b,	// (0x0000cb7d) fep_vkb_side_pane_g1_ParamLimits

0x293b,	// (0x0000cb7d) fep_vkb_side_pane_g1

0xb812,	// (0x00015a54) grid_vkb_side_pane_ParamLimits

0xb812,	// (0x00015a54) grid_vkb_side_pane

0x5c64,	// (0x0000fea6) bg_popup_fep_shadow_pane_g2

0x5c6d,	// (0x0000feaf) bg_popup_fep_shadow_pane_g3

0x5c75,	// (0x0000feb7) bg_popup_fep_shadow_pane_g4

0x5c7e,	// (0x0000fec0) bg_popup_fep_shadow_pane_g5

0x5c86,	// (0x0000fec8) bg_popup_fep_shadow_pane_g6

0x5c8e,	// (0x0000fed0) bg_popup_fep_shadow_pane_g7

0x7979,	// (0x00011bbb) bg_popup_fep_shadow_pane_g8

0xb863,	// (0x00015aa5) grid_vkb_keypad_number_pane_ParamLimits

0xb863,	// (0x00015aa5) grid_vkb_keypad_number_pane

0xb873,	// (0x00015ab5) grid_vkb_keypad_pane_ParamLimits

0xb873,	// (0x00015ab5) grid_vkb_keypad_pane

0xb899,	// (0x00015adb) fep_vkb_bottom_pane_g1_ParamLimits

0xb899,	// (0x00015adb) fep_vkb_bottom_pane_g1

0xb8c2,	// (0x00015b04) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb8c2,	// (0x00015b04) grid_vkb_keypad_bottom_left_pane

0xb8d7,	// (0x00015b19) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb8d7,	// (0x00015b19) grid_vkb_keypad_bottom_right_pane

0xb8ec,	// (0x00015b2e) fep_vkb_top_text_pane_g1

0x2982,	// (0x0000cbc4) fep_vkb_top_text_pane_t1

0x2994,	// (0x0000cbd6) cell_vkb_side_pane_ParamLimits

0x2994,	// (0x0000cbd6) cell_vkb_side_pane

0xb572,	// (0x000157b4) cell_vkb_side_pane_g1

0xb95b,	// (0x00015b9d) cell_vkb_keypad_pane_ParamLimits

0xb95b,	// (0x00015b9d) cell_vkb_keypad_pane

0xb9c8,	// (0x00015c0a) cell_vkb_keypad_pane_g1

0x0008,

0xfb3e,	// (0x00019d80) bg_popup_fep_shadow_pane_g

0x5c9e,	// (0x0000fee0) cell_hwr_side_pane_g1

0x5c9e,	// (0x0000fee0) cell_hwr_side_pane_g2

0xb9d2,	// (0x00015c14) cell_vkb_keypad_pane_t1

0x29aa,	// (0x0000cbec) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x29aa,	// (0x0000cbec) cell_vkb_keypad_bottom_left_pane

0x29bf,	// (0x0000cc01) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x29bf,	// (0x0000cc01) cell_vkb_keypad_bottom_right_pane

0xb572,	// (0x000157b4) cell_vkb_keypad_bottom_left_pane_g1

0xb572,	// (0x000157b4) cell_vkb_keypad_bottom_right_pane_g1

0xba36,	// (0x00015c78) cell_vkb_keypad_number_pane_ParamLimits

0xba36,	// (0x00015c78) cell_vkb_keypad_number_pane

0xba55,	// (0x00015c97) cell_vkb_keypad_number_pane_g1

0xba5f,	// (0x00015ca1) cell_vkb_keypad_number_pane_g2

0xba68,	// (0x00015caa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb30,	// (0x00019d72) cell_vkb_keypad_number_pane_g

0xb9d2,	// (0x00015c14) cell_vkb_keypad_number_pane_t1

0xba8a,	// (0x00015ccc) fep_vkb_candidate_pane_g1

0x0001,

0xfb51,	// (0x00019d93) cell_hwr_side_pane_g

0xbaa3,	// (0x00015ce5) cell_hwr_side_pane_t1

0x5ca8,	// (0x0000feea) cell_hwr_side_pane_t1_copy1

0x5cb6,	// (0x0000fef8) cell_hwr_candidate_pane_g1

0x5ce5,	// (0x0000ff27) cell_hwr_candidate_pane_t1

0xb572,	// (0x000157b4) cell_vkb_candidate_pane_g2

0xbae7,	// (0x00015d29) cell_vkb_candidate_pane_t1

0x5a63,	// (0x0000fca5) bg_popup_fep_shadow_pane_ParamLimits

0x5a63,	// (0x0000fca5) bg_popup_fep_shadow_pane

0x5b12,	// (0x0000fd54) bg_fep_hwr_top_pane_g4

0xb5ef,	// (0x00015831) bg_hwr_side_pane_g1_ParamLimits

0xb5ef,	// (0x00015831) bg_hwr_side_pane_g1

0xe2e1,	// (0x00018523) cell_hwr_side_pane_ParamLimits

0xe2e1,	// (0x00018523) cell_hwr_side_pane

0x5bbe,	// (0x0000fe00) fep_hwr_write_pane_g1_ParamLimits

0x5bbe,	// (0x0000fe00) fep_hwr_write_pane_g1

0x5bcb,	// (0x0000fe0d) fep_hwr_write_pane_g2_ParamLimits

0x5bcb,	// (0x0000fe0d) fep_hwr_write_pane_g2

0x5bd8,	// (0x0000fe1a) fep_hwr_write_pane_g3_ParamLimits

0x5bd8,	// (0x0000fe1a) fep_hwr_write_pane_g3

0xe301,	// (0x00018543) fep_hwr_write_pane_g4_ParamLimits

0xe301,	// (0x00018543) fep_hwr_write_pane_g4

0x0005,

0xfafd,	// (0x00019d3f) fep_hwr_write_pane_g_ParamLimits

0xfafd,	// (0x00019d3f) fep_hwr_write_pane_g

0x5b12,	// (0x0000fd54) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5b12,	// (0x0000fd54) bg_fep_hwr_candidate_pane_g2

0x5bfb,	// (0x0000fe3d) cell_hwr_candidate_pane_ParamLimits

0x5bfb,	// (0x0000fe3d) cell_hwr_candidate_pane

0x5c35,	// (0x0000fe77) fep_hwr_candidate_pane_g1_ParamLimits

0xb64f,	// (0x00015891) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb64f,	// (0x00015891) bg_popup_fep_shadow_pane_cp2

0xb7aa,	// (0x000159ec) fep_vkb_top_pane_g4_ParamLimits

0xb7aa,	// (0x000159ec) fep_vkb_top_pane_g4

0xb7f0,	// (0x00015a32) fep_vkb_side_pane_g2_ParamLimits

0xb7f0,	// (0x00015a32) fep_vkb_side_pane_g2

0x0fb0,	// (0x0000b1f2) list_setting_pane_t4_ParamLimits

0x0fb0,	// (0x0000b1f2) list_setting_pane_t4

0x1032,	// (0x0000b274) list_setting_number_pane_t5_ParamLimits

0x1032,	// (0x0000b274) list_setting_number_pane_t5

0x1349,	// (0x0000b58b) list_double_heading_pane_cp2_ParamLimits

0x1349,	// (0x0000b58b) list_double_heading_pane_cp2

0x8473,	// (0x000126b5) list_double_heading_pane_g1_cp2_ParamLimits

0x8473,	// (0x000126b5) list_double_heading_pane_g1_cp2

0xbaf5,	// (0x00015d37) list_double_heading_pane_g2_cp2_ParamLimits

0xbaf5,	// (0x00015d37) list_double_heading_pane_g2_cp2

0xbb09,	// (0x00015d4b) list_double_heading_pane_t1_cp2_ParamLimits

0xbb09,	// (0x00015d4b) list_double_heading_pane_t1_cp2

0xbb1f,	// (0x00015d61) list_double_heading_pane_t2_cp2_ParamLimits

0xbb1f,	// (0x00015d61) list_double_heading_pane_t2_cp2

0x6947,	// (0x00010b89) aid_value_unit2

0x49be,	// (0x0000ec00) popup_preview_fixed_window

0x6dd5,	// (0x00011017) bg_popup_preview_window_pane_cp02

0xbb31,	// (0x00015d73) list_preview_fixed_pane

0xbb77,	// (0x00015db9) list_empty_pane_fp_ParamLimits

0xbb77,	// (0x00015db9) list_empty_pane_fp

0xbb77,	// (0x00015db9) list_single_cale_day_pane_fp_ParamLimits

0xbb77,	// (0x00015db9) list_single_cale_day_pane_fp

0xbb77,	// (0x00015db9) list_single_graphic_heading_pane_fp_ParamLimits

0xbb77,	// (0x00015db9) list_single_graphic_heading_pane_fp

0xbb77,	// (0x00015db9) list_single_graphic_pane_fp_ParamLimits

0xbb77,	// (0x00015db9) list_single_graphic_pane_fp

0xbb77,	// (0x00015db9) list_single_heading_pane_fp_ParamLimits

0xbb77,	// (0x00015db9) list_single_heading_pane_fp

0xbb77,	// (0x00015db9) list_single_pane_fp_ParamLimits

0xbb77,	// (0x00015db9) list_single_pane_fp

0xbb8b,	// (0x00015dcd) list_single_pane_fp_g1_ParamLimits

0xbb8b,	// (0x00015dcd) list_single_pane_fp_g1

0x74d6,	// (0x00011718) list_single_pane_fp_g2_ParamLimits

0x74d6,	// (0x00011718) list_single_pane_fp_g2

0xbb97,	// (0x00015dd9) list_single_pane_fp_g3_ParamLimits

0xbb97,	// (0x00015dd9) list_single_pane_fp_g3

0xbbab,	// (0x00015ded) list_single_pane_fp_g4_ParamLimits

0xbbab,	// (0x00015ded) list_single_pane_fp_g4

0x0003,

0xfb64,	// (0x00019da6) list_single_pane_fp_g_ParamLimits

0xfb64,	// (0x00019da6) list_single_pane_fp_g

0xbbb7,	// (0x00015df9) list_single_pane_fp_t1_ParamLimits

0xbbb7,	// (0x00015df9) list_single_pane_fp_t1

0xbbce,	// (0x00015e10) list_single_graphic_pane_fp_g1_ParamLimits

0xbbce,	// (0x00015e10) list_single_graphic_pane_fp_g1

0xbb8b,	// (0x00015dcd) list_single_graphic_pane_fp_g2_ParamLimits

0xbb8b,	// (0x00015dcd) list_single_graphic_pane_fp_g2

0x74d6,	// (0x00011718) list_single_graphic_pane_fp_g3_ParamLimits

0x74d6,	// (0x00011718) list_single_graphic_pane_fp_g3

0xbb97,	// (0x00015dd9) list_single_graphic_pane_fp_g4_ParamLimits

0xbb97,	// (0x00015dd9) list_single_graphic_pane_fp_g4

0xbbab,	// (0x00015ded) list_single_graphic_pane_fp_g5_ParamLimits

0xbbab,	// (0x00015ded) list_single_graphic_pane_fp_g5

0x0004,

0xfb6d,	// (0x00019daf) list_single_graphic_pane_fp_g_ParamLimits

0xfb6d,	// (0x00019daf) list_single_graphic_pane_fp_g

0xbbda,	// (0x00015e1c) list_single_graphic_pane_fp_t1_ParamLimits

0xbbda,	// (0x00015e1c) list_single_graphic_pane_fp_t1

0xbbce,	// (0x00015e10) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbbce,	// (0x00015e10) list_single_graphic_heading_pane_fp_g1

0xbb8b,	// (0x00015dcd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbb8b,	// (0x00015dcd) list_single_graphic_heading_pane_fp_g2

0x74d6,	// (0x00011718) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x74d6,	// (0x00011718) list_single_graphic_heading_pane_fp_g3

0xbb97,	// (0x00015dd9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbb97,	// (0x00015dd9) list_single_graphic_heading_pane_fp_g4

0xbbab,	// (0x00015ded) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbbab,	// (0x00015ded) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6d,	// (0x00019daf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6d,	// (0x00019daf) list_single_graphic_heading_pane_fp_g

0xbbf0,	// (0x00015e32) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbbf0,	// (0x00015e32) list_single_graphic_heading_pane_fp_t1

0xbc06,	// (0x00015e48) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbc06,	// (0x00015e48) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb78,	// (0x00019dba) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb78,	// (0x00019dba) list_single_graphic_heading_pane_fp_t

0xbc5a,	// (0x00015e9c) list_single_cale_day_pane_fp_g1_ParamLimits

0xbc5a,	// (0x00015e9c) list_single_cale_day_pane_fp_g1

0xbc92,	// (0x00015ed4) list_single_cale_day_pane_fp_g2_ParamLimits

0xbc92,	// (0x00015ed4) list_single_cale_day_pane_fp_g2

0xbc9e,	// (0x00015ee0) list_single_cale_day_pane_fp_g3_ParamLimits

0xbc9e,	// (0x00015ee0) list_single_cale_day_pane_fp_g3

0xbcc6,	// (0x00015f08) list_single_cale_day_pane_fp_g4_ParamLimits

0xbcc6,	// (0x00015f08) list_single_cale_day_pane_fp_g4

0xbcea,	// (0x00015f2c) list_single_cale_day_pane_fp_g5_ParamLimits

0xbcea,	// (0x00015f2c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7d,	// (0x00019dbf) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7d,	// (0x00019dbf) list_single_cale_day_pane_fp_g

0xbd0e,	// (0x00015f50) list_single_cale_day_pane_fp_t1_ParamLimits

0xbd0e,	// (0x00015f50) list_single_cale_day_pane_fp_t1

0xbd34,	// (0x00015f76) list_single_cale_day_pane_fp_t2_ParamLimits

0xbd34,	// (0x00015f76) list_single_cale_day_pane_fp_t2

0xbd4d,	// (0x00015f8f) list_single_cale_day_pane_fp_t3_ParamLimits

0xbd4d,	// (0x00015f8f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb88,	// (0x00019dca) list_single_cale_day_pane_fp_t_ParamLimits

0xfb88,	// (0x00019dca) list_single_cale_day_pane_fp_t

0xbb8b,	// (0x00015dcd) list_empty_pane_fp_g1_ParamLimits

0xbb8b,	// (0x00015dcd) list_empty_pane_fp_g1

0xbd66,	// (0x00015fa8) list_empty_pane_fp_t1

0xbd74,	// (0x00015fb6) list_empty_pane_fp_t2

0x0001,

0xfb8f,	// (0x00019dd1) list_empty_pane_fp_t

0xbb8b,	// (0x00015dcd) list_single_heading_pane_fp_g1_ParamLimits

0xbb8b,	// (0x00015dcd) list_single_heading_pane_fp_g1

0x74d6,	// (0x00011718) list_single_heading_pane_fp_g2_ParamLimits

0x74d6,	// (0x00011718) list_single_heading_pane_fp_g2

0xbb97,	// (0x00015dd9) list_single_heading_pane_fp_g3_ParamLimits

0xbb97,	// (0x00015dd9) list_single_heading_pane_fp_g3

0x0002,

0xfb94,	// (0x00019dd6) list_single_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x00019dd6) list_single_heading_pane_fp_g

0xbd82,	// (0x00015fc4) list_single_heading_pane_fp_t1_ParamLimits

0xbd82,	// (0x00015fc4) list_single_heading_pane_fp_t1

0xbd94,	// (0x00015fd6) list_single_heading_pane_fp_t2_ParamLimits

0xbd94,	// (0x00015fd6) list_single_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x00019ddd) list_single_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x00019ddd) list_single_heading_pane_fp_t

0x7b92,	// (0x00011dd4) aid_size_cell_fast

0x6d3c,	// (0x00010f7e) soft_indicator_pane_cp1_t1

0x7bcf,	// (0x00011e11) cell_app_pane_cp2_ParamLimits

0x7bcf,	// (0x00011e11) cell_app_pane_cp2

0x5a85,	// (0x0000fcc7) fep_hwr_candidate_drop_down_list_pane

0x5c4f,	// (0x0000fe91) fep_hwr_candidate_pane_g3_ParamLimits

0x5c4f,	// (0x0000fe91) fep_hwr_candidate_pane_g3

0x3bb9,	// (0x0000ddfb) fep_hwr_candidate_pane_g4_ParamLimits

0x3bb9,	// (0x0000ddfb) fep_hwr_candidate_pane_g4

0x0002,

0xfb0a,	// (0x00019d4c) fep_hwr_candidate_pane_g_ParamLimits

0xfb0a,	// (0x00019d4c) fep_hwr_candidate_pane_g

0xb6c3,	// (0x00015905) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb6c3,	// (0x00015905) fep_vkb_candidate_drop_down_list_pane

0xba92,	// (0x00015cd4) fep_vkb_candidate_pane_g3

0xba9a,	// (0x00015cdc) fep_vkb_candidate_pane_g4

0x0002,

0xfb37,	// (0x00019d79) fep_vkb_candidate_pane_g

0x5cb6,	// (0x0000fef8) cell_hwr_candidate_pane_g1_ParamLimits

0x5cc4,	// (0x0000ff06) cell_hwr_candidate_pane_g3_ParamLimits

0x5cc4,	// (0x0000ff06) cell_hwr_candidate_pane_g3

0xe882,	// (0x00018ac4) cell_hwr_candidate_pane_g4_ParamLimits

0xe882,	// (0x00018ac4) cell_hwr_candidate_pane_g4

0x0002,

0xfb56,	// (0x00019d98) cell_hwr_candidate_pane_g_ParamLimits

0xfb56,	// (0x00019d98) cell_hwr_candidate_pane_g

0xbab1,	// (0x00015cf3) cell_vkb_candidate_pane_g3_ParamLimits

0xbab1,	// (0x00015cf3) cell_vkb_candidate_pane_g3

0xbacc,	// (0x00015d0e) cell_vkb_candidate_pane_g4_ParamLimits

0xbacc,	// (0x00015d0e) cell_vkb_candidate_pane_g4

0xbdaa,	// (0x00015fec) cell_app_pane_cp2_g1_ParamLimits

0xbdaa,	// (0x00015fec) cell_app_pane_cp2_g1

0xbdc8,	// (0x0001600a) cell_app_pane_cp2_g2_ParamLimits

0xbdc8,	// (0x0001600a) cell_app_pane_cp2_g2

0x0001,

0xfba0,	// (0x00019de2) cell_app_pane_cp2_g_ParamLimits

0xfba0,	// (0x00019de2) cell_app_pane_cp2_g

0xbdd4,	// (0x00016016) cell_app_pane_cp2_t1_ParamLimits

0xbdd4,	// (0x00016016) cell_app_pane_cp2_t1

0x783e,	// (0x00011a80) grid_highlight_pane_cp1_ParamLimits

0x783e,	// (0x00011a80) grid_highlight_pane_cp1

0x5d02,	// (0x0000ff44) cell_hwr_candidate_pane_cp1_ParamLimits

0x5d02,	// (0x0000ff44) cell_hwr_candidate_pane_cp1

0x5cb6,	// (0x0000fef8) fep_hwr_candidate_drop_down_list_pane_g1

0x5d20,	// (0x0000ff62) fep_hwr_candidate_drop_down_list_pane_g2

0x5d2d,	// (0x0000ff6f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba5,	// (0x00019de7) fep_hwr_candidate_drop_down_list_pane_g

0x5d3a,	// (0x0000ff7c) fep_hwr_candidate_drop_down_list_scroll_pane

0x5d43,	// (0x0000ff85) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5d43,	// (0x0000ff85) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5d50,	// (0x0000ff92) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5d50,	// (0x0000ff92) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5d5d,	// (0x0000ff9f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5d5d,	// (0x0000ff9f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5d6a,	// (0x0000ffac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5d6a,	// (0x0000ffac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5d85,	// (0x0000ffc7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5d85,	// (0x0000ffc7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5da0,	// (0x0000ffe2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5da0,	// (0x0000ffe2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5dbb,	// (0x0000fffd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5dbb,	// (0x0000fffd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5dd6,	// (0x00010018) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5dd6,	// (0x00010018) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbac,	// (0x00019dee) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbac,	// (0x00019dee) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x29da,	// (0x0000cc1c) cell_vkb_candidate_pane_cp1_ParamLimits

0x29da,	// (0x0000cc1c) cell_vkb_candidate_pane_cp1

0xb7aa,	// (0x000159ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb7aa,	// (0x000159ec) fep_vkb_candidate_drop_down_list_pane_g1

0xbde6,	// (0x00016028) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbde6,	// (0x00016028) fep_vkb_candidate_drop_down_list_pane_g2

0xbdf3,	// (0x00016035) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbdf3,	// (0x00016035) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x00019dff) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x00019dff) fep_vkb_candidate_drop_down_list_pane_g

0xbe23,	// (0x00016065) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbe23,	// (0x00016065) fep_vkb_candidate_drop_down_list_scroll_pane

0xbe30,	// (0x00016072) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbe30,	// (0x00016072) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbe3d,	// (0x0001607f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbe3d,	// (0x0001607f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbe49,	// (0x0001608b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbe49,	// (0x0001608b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbc18,	// (0x00015e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbc18,	// (0x00015e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbc39,	// (0x00015e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbc39,	// (0x00015e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbe55,	// (0x00016097) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbe55,	// (0x00016097) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbe76,	// (0x000160b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbe76,	// (0x000160b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbe97,	// (0x000160d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbe97,	// (0x000160d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x00019e06) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x00019e06) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0935,	// (0x0000ab77) title_pane_g1_ParamLimits

0x094c,	// (0x0000ab8e) title_pane_g2_ParamLimits

0xf54e,	// (0x00019790) title_pane_g_ParamLimits

0x7fe9,	// (0x0001222b) aid_call2_pane

0x7ff1,	// (0x00012233) aid_call_pane

0x7ff9,	// (0x0001223b) popup_clock_analogue_window_g1

0x7ff9,	// (0x0001223b) popup_clock_analogue_window_g2

0x4c98,	// (0x0000eeda) popup_clock_analogue_window_g3

0x4ca1,	// (0x0000eee3) popup_clock_analogue_window_g4

0x6967,	// (0x00010ba9) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0001992b) popup_clock_analogue_window_g

0x4ca9,	// (0x0000eeeb) popup_clock_analogue_window_t1

0x4cb7,	// (0x0000eef9) clock_digital_number_pane_ParamLimits

0x4cb7,	// (0x0000eef9) clock_digital_number_pane

0x4cc3,	// (0x0000ef05) clock_digital_number_pane_cp02_ParamLimits

0x4cc3,	// (0x0000ef05) clock_digital_number_pane_cp02

0x4ccf,	// (0x0000ef11) clock_digital_number_pane_cp03_ParamLimits

0x4ccf,	// (0x0000ef11) clock_digital_number_pane_cp03

0x4cdb,	// (0x0000ef1d) clock_digital_number_pane_cp04_ParamLimits

0x4cdb,	// (0x0000ef1d) clock_digital_number_pane_cp04

0x4ce7,	// (0x0000ef29) clock_digital_separator_pane_ParamLimits

0x4ce7,	// (0x0000ef29) clock_digital_separator_pane

0x4cf3,	// (0x0000ef35) popup_clock_digital_window_t1_ParamLimits

0x4cf3,	// (0x0000ef35) popup_clock_digital_window_t1

0x6967,	// (0x00010ba9) clock_digital_number_pane_g1

0x6967,	// (0x00010ba9) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00019936) clock_digital_number_pane_g

0x6967,	// (0x00010ba9) clock_digital_separator_pane_g1

0x6967,	// (0x00010ba9) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00019936) clock_digital_separator_pane_g

0x1d12,	// (0x0000bf54) aid_fill_nsta_ParamLimits

0x1e29,	// (0x0000c06b) indicator_nsta_pane_ParamLimits

0x8c0c,	// (0x00012e4e) popup_clock_analogue_window

0x8c0c,	// (0x00012e4e) popup_clock_digital_window

0x7b53,	// (0x00011d95) grid_indicator_nsta_pane_ParamLimits

0xaffa,	// (0x0001523c) clock_nsta_pane_t2

0x0001,

0xfa8a,	// (0x00019ccc) clock_nsta_pane_t

0x4c5c,	// (0x0000ee9e) aid_size_max_handle

0xda19,	// (0x00017c5b) aid_size_min_handle

0x85fe,	// (0x00012840) editor_scroll_pane

0xbeb2,	// (0x000160f4) ex_editor_pane

0x7b02,	// (0x00011d44) scroll_pane_cp13

0x72c1,	// (0x00011503) scroll_pane_cp14

0x8028,	// (0x0001226a) scroll_pane_cp36

0x1355,	// (0x0000b597) list_single_graphic_hl_pane_cp2_ParamLimits

0x1355,	// (0x0000b597) list_single_graphic_hl_pane_cp2

0x262d,	// (0x0000c86f) list_single_graphic_hl_pane_ParamLimits

0x262d,	// (0x0000c86f) list_single_graphic_hl_pane

0xbeba,	// (0x000160fc) aid_size_min_hl_cp1

0xbec3,	// (0x00016105) list_highlight_pane_cp34_ParamLimits

0xbec3,	// (0x00016105) list_highlight_pane_cp34

0xbed4,	// (0x00016116) list_single_graphic_hl_pane_g1_ParamLimits

0xbed4,	// (0x00016116) list_single_graphic_hl_pane_g1

0x29fa,	// (0x0000cc3c) list_single_graphic_hl_pane_g2_ParamLimits

0x29fa,	// (0x0000cc3c) list_single_graphic_hl_pane_g2

0x29fa,	// (0x0000cc3c) list_single_graphic_hl_pane_g3_ParamLimits

0x29fa,	// (0x0000cc3c) list_single_graphic_hl_pane_g3

0x72d5,	// (0x00011517) list_single_graphic_hl_pane_g4_ParamLimits

0x72d5,	// (0x00011517) list_single_graphic_hl_pane_g4

0x7864,	// (0x00011aa6) list_single_graphic_hl_pane_g5_ParamLimits

0x7864,	// (0x00011aa6) list_single_graphic_hl_pane_g5

0x0004,

0xfbd5,	// (0x00019e17) list_single_graphic_hl_pane_g_ParamLimits

0xfbd5,	// (0x00019e17) list_single_graphic_hl_pane_g

0x2a06,	// (0x0000cc48) list_single_graphic_hl_pane_t1_ParamLimits

0x2a06,	// (0x0000cc48) list_single_graphic_hl_pane_t1

0xbf03,	// (0x00016145) aid_size_min_hl_cp2

0xbf0c,	// (0x0001614e) list_highlight_pane_cp34_cp2_ParamLimits

0xbf0c,	// (0x0001614e) list_highlight_pane_cp34_cp2

0xbed4,	// (0x00016116) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbed4,	// (0x00016116) list_single_graphic_hl_pane_g1_cp2

0xbf19,	// (0x0001615b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbf19,	// (0x0001615b) list_single_graphic_hl_pane_g2_cp2

0xbf25,	// (0x00016167) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf25,	// (0x00016167) list_single_graphic_hl_pane_g3_cp2

0x8473,	// (0x000126b5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8473,	// (0x000126b5) list_single_graphic_hl_pane_g4_cp2

0xbaf5,	// (0x00015d37) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbaf5,	// (0x00015d37) list_single_graphic_hl_pane_g5_cp2

0xda43,	// (0x00017c85) control_pane_g4_ParamLimits

0xda43,	// (0x00017c85) control_pane_g4

0x894d,	// (0x00012b8f) bg_popup_sub_pane_cp10_ParamLimits

0xb57c,	// (0x000157be) list_choice_list_pane_ParamLimits

0xb58b,	// (0x000157cd) scroll_pane_cp23

0x6dd5,	// (0x00011017) bg_popup_preview_window_pane_cp02_ParamLimits

0xbb31,	// (0x00015d73) list_preview_fixed_pane_ParamLimits

0xbb47,	// (0x00015d89) list_preview_fixed_pane_cp_ParamLimits

0xbb47,	// (0x00015d89) list_preview_fixed_pane_cp

0xbb53,	// (0x00015d95) popup_preview_fixed_window_g1_ParamLimits

0xbb53,	// (0x00015d95) popup_preview_fixed_window_g1

0xbb5f,	// (0x00015da1) popup_preview_fixed_window_g2_ParamLimits

0xbb5f,	// (0x00015da1) popup_preview_fixed_window_g2

0x0002,

0xfb5d,	// (0x00019d9f) popup_preview_fixed_window_g_ParamLimits

0xfb5d,	// (0x00019d9f) popup_preview_fixed_window_g

0x4bec,	// (0x0000ee2e) aid_navi_side_left_pane_ParamLimits

0x4bfc,	// (0x0000ee3e) aid_navi_side_right_pane_ParamLimits

0x4c0b,	// (0x0000ee4d) navi_icon_pane_stacon_ParamLimits

0x4c1b,	// (0x0000ee5d) navi_navi_pane_stacon_ParamLimits

0x4c0b,	// (0x0000ee4d) navi_text_pane_stacon_ParamLimits

0x489f,	// (0x0000eae1) main_text_info_pane

0xbf47,	// (0x00016189) listscroll_text_info_pane

0xbf4f,	// (0x00016191) list_text_info_pane_ParamLimits

0xbf4f,	// (0x00016191) list_text_info_pane

0xbf5e,	// (0x000161a0) scroll_pane_cp24_ParamLimits

0xbf5e,	// (0x000161a0) scroll_pane_cp24

0x2a1c,	// (0x0000cc5e) list_text_info_pane_t1_ParamLimits

0x2a1c,	// (0x0000cc5e) list_text_info_pane_t1

0xdb8a,	// (0x00017dcc) popup_fast_swap2_window_ParamLimits

0xdb8a,	// (0x00017dcc) popup_fast_swap2_window

0xbf99,	// (0x000161db) aid_size_cell_fast2

0x695d,	// (0x00010b9f) bg_popup_window_pane_cp17

0x92e6,	// (0x00013528) heading_pane_cp2

0x7043,	// (0x00011285) listscroll_fast2_pane

0xbfa3,	// (0x000161e5) grid_fast2_pane

0xbfab,	// (0x000161ed) listscroll_fast2_pane_g1

0xbfb3,	// (0x000161f5) listscroll_fast2_pane_g2

0x0001,

0xfbe0,	// (0x00019e22) listscroll_fast2_pane_g

0x7b02,	// (0x00011d44) scroll_pane_cp26

0xbfbb,	// (0x000161fd) cell_fast2_pane_ParamLimits

0xbfbb,	// (0x000161fd) cell_fast2_pane

0xbfd1,	// (0x00016213) cell_fast2_pane_g1

0xbfda,	// (0x0001621c) cell_fast2_pane_g2

0xbfe3,	// (0x00016225) cell_fast2_pane_g3

0x0002,

0xfbe5,	// (0x00019e27) cell_fast2_pane_g

0x711a,	// (0x0001135c) grid_highlight_pane_cp9

0x50b0,	// (0x0000f2f2) main_eswt_pane_ParamLimits

0x50b0,	// (0x0000f2f2) main_eswt_pane

0xbf73,	// (0x000161b5) list_single_text_info_pane

0xbfeb,	// (0x0001622d) eswt_ctrl_button_pane

0xbfeb,	// (0x0001622d) eswt_ctrl_canvas_pane

0xbff3,	// (0x00016235) eswt_ctrl_combo_pane

0xbfeb,	// (0x0001622d) eswt_ctrl_default_pane

0xbfeb,	// (0x0001622d) eswt_ctrl_label_pane

0xbffb,	// (0x0001623d) eswt_ctrl_wait_pane

0xc003,	// (0x00016245) eswt_shell_pane

0x695d,	// (0x00010b9f) listscroll_eswt_app_pane

0xc01f,	// (0x00016261) popup_eswt_tasktip_window_ParamLimits

0xc01f,	// (0x00016261) popup_eswt_tasktip_window

0x8f2c,	// (0x0001316e) bg_popup_window_pane_cp18

0xc030,	// (0x00016272) eswt_control_pane_g1_ParamLimits

0xc030,	// (0x00016272) eswt_control_pane_g1

0xc03d,	// (0x0001627f) eswt_control_pane_g2_ParamLimits

0xc03d,	// (0x0001627f) eswt_control_pane_g2

0xc04a,	// (0x0001628c) eswt_control_pane_g3_ParamLimits

0xc04a,	// (0x0001628c) eswt_control_pane_g3

0xc057,	// (0x00016299) eswt_control_pane_g4_ParamLimits

0xc057,	// (0x00016299) eswt_control_pane_g4

0x0003,

0xfbec,	// (0x00019e2e) eswt_control_pane_g_ParamLimits

0xfbec,	// (0x00019e2e) eswt_control_pane_g

0x783e,	// (0x00011a80) bg_button_pane_ParamLimits

0x783e,	// (0x00011a80) bg_button_pane

0x712f,	// (0x00011371) common_borders_pane_copy2_ParamLimits

0x712f,	// (0x00011371) common_borders_pane_copy2

0xc064,	// (0x000162a6) control_button_pane_g1_ParamLimits

0xc064,	// (0x000162a6) control_button_pane_g1

0xc070,	// (0x000162b2) control_button_pane_g2_ParamLimits

0xc070,	// (0x000162b2) control_button_pane_g2

0xc07c,	// (0x000162be) control_button_pane_g3_ParamLimits

0xc07c,	// (0x000162be) control_button_pane_g3

0x0002,

0xfbf5,	// (0x00019e37) control_button_pane_g_ParamLimits

0xfbf5,	// (0x00019e37) control_button_pane_g

0xc090,	// (0x000162d2) control_button_pane_t1

0xc09e,	// (0x000162e0) control_button_pane_t2

0x0001,

0xfbfc,	// (0x00019e3e) control_button_pane_t

0x8e16,	// (0x00013058) bg_button_pane_g1

0x8e26,	// (0x00013068) bg_button_pane_g2

0x8e1e,	// (0x00013060) bg_button_pane_g3

0x8e36,	// (0x00013078) bg_button_pane_g4

0x8e2e,	// (0x00013070) bg_button_pane_g5

0x8e3e,	// (0x00013080) bg_button_pane_g6

0x8e46,	// (0x00013088) bg_button_pane_g7

0x8e56,	// (0x00013098) bg_button_pane_g8

0x8e4e,	// (0x00013090) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00019a8d) bg_button_pane_g

0xb537,	// (0x00015779) common_borders_pane_ParamLimits

0xb537,	// (0x00015779) common_borders_pane

0xc030,	// (0x00016272) eswt_control_pane_g1_copy1_ParamLimits

0xc030,	// (0x00016272) eswt_control_pane_g1_copy1

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy1_ParamLimits

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy1

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy1_ParamLimits

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy1

0xc057,	// (0x00016299) eswt_control_pane_g4_copy1_ParamLimits

0xc057,	// (0x00016299) eswt_control_pane_g4_copy1

0xb572,	// (0x000157b4) bg_eswt_ctrl_canvas_pane_g1

0xb537,	// (0x00015779) common_borders_pane_cp2_ParamLimits

0xb537,	// (0x00015779) common_borders_pane_cp2

0xb537,	// (0x00015779) common_borders_pane_cp3_ParamLimits

0xb537,	// (0x00015779) common_borders_pane_cp3

0xc0ac,	// (0x000162ee) separator_horizontal_pane

0x7e36,	// (0x00012078) separator_vertical_pane

0xc030,	// (0x00016272) eswt_control_pane_g1_copy2_ParamLimits

0xc030,	// (0x00016272) eswt_control_pane_g1_copy2

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy2_ParamLimits

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy2

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy2_ParamLimits

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy2

0xc057,	// (0x00016299) eswt_control_pane_g4_copy2_ParamLimits

0xc057,	// (0x00016299) eswt_control_pane_g4_copy2

0x695d,	// (0x00010b9f) common_borders_pane_cp4

0xc0b4,	// (0x000162f6) separator_horizontal_pane_g1

0xc0bd,	// (0x000162ff) separator_horizontal_pane_g2

0xc0c6,	// (0x00016308) separator_horizontal_pane_g3

0x0002,

0xfc01,	// (0x00019e43) separator_horizontal_pane_g

0xc030,	// (0x00016272) eswt_control_pane_g1_copy3_ParamLimits

0xc030,	// (0x00016272) eswt_control_pane_g1_copy3

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy3_ParamLimits

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy3

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy3_ParamLimits

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy3

0xc057,	// (0x00016299) eswt_control_pane_g4_copy3_ParamLimits

0xc057,	// (0x00016299) eswt_control_pane_g4_copy3

0x695d,	// (0x00010b9f) common_borders_pane_cp5

0xc0cf,	// (0x00016311) separator_vertical_pane_g1

0xc0d8,	// (0x0001631a) separator_vertical_pane_g2

0xc0e1,	// (0x00016323) separator_vertical_pane_g3

0x0002,

0xfc08,	// (0x00019e4a) separator_vertical_pane_g

0xc030,	// (0x00016272) eswt_control_pane_g1_copy4_ParamLimits

0xc030,	// (0x00016272) eswt_control_pane_g1_copy4

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy4_ParamLimits

0xc03d,	// (0x0001627f) eswt_control_pane_g2_copy4

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy4_ParamLimits

0xc04a,	// (0x0001628c) eswt_control_pane_g3_copy4

0xc057,	// (0x00016299) eswt_control_pane_g4_copy4_ParamLimits

0xc057,	// (0x00016299) eswt_control_pane_g4_copy4

0x2a37,	// (0x0000cc79) eswt_ctrl_combo_button_pane

0x2a3f,	// (0x0000cc81) eswt_ctrl_input_pane

0x2a47,	// (0x0000cc89) popup_choice_list_window_cp70

0x2a4f,	// (0x0000cc91) eswt_ctrl_input_pane_t1

0x695d,	// (0x00010b9f) input_focus_pane_cp70

0xb537,	// (0x00015779) bg_button_pane_cp70_ParamLimits

0xb537,	// (0x00015779) bg_button_pane_cp70

0x2a5d,	// (0x0000cc9f) eswt_ctrl_combo_button_pane_g1

0xc118,	// (0x0001635a) wait_bar_pane_cp70

0x8f2c,	// (0x0001316e) bg_popup_window_pane_cp70_ParamLimits

0x8f2c,	// (0x0001316e) bg_popup_window_pane_cp70

0xc120,	// (0x00016362) popup_eswt_tasktip_window_t1

0xc136,	// (0x00016378) wait_bar_pane_cp71_ParamLimits

0xc136,	// (0x00016378) wait_bar_pane_cp71

0xc142,	// (0x00016384) grid_eswt_app_pane

0x7e2d,	// (0x0001206f) scroll_pane_cp70

0x2a65,	// (0x0000cca7) cell_eswt_app_pane_ParamLimits

0x2a65,	// (0x0000cca7) cell_eswt_app_pane

0x2a8d,	// (0x0000cccf) cell_eswt_app_pane_g1_ParamLimits

0x2a8d,	// (0x0000cccf) cell_eswt_app_pane_g1

0x2abc,	// (0x0000ccfe) cell_eswt_app_pane_g2_ParamLimits

0x2abc,	// (0x0000ccfe) cell_eswt_app_pane_g2

0x0001,

0xfc0f,	// (0x00019e51) cell_eswt_app_pane_g_ParamLimits

0xfc0f,	// (0x00019e51) cell_eswt_app_pane_g

0x2ae5,	// (0x0000cd27) cell_eswt_app_pane_t1_ParamLimits

0x2ae5,	// (0x0000cd27) cell_eswt_app_pane_t1

0xc1fd,	// (0x0001643f) grid_highlight_pane_cp70_ParamLimits

0xc1fd,	// (0x0001643f) grid_highlight_pane_cp70

0x72d5,	// (0x00011517) set_content_pane_g1

0x8899,	// (0x00012adb) status_small_volume_pane

0x5df1,	// (0x00010033) status_small_volume_pane_g1

0x5df9,	// (0x0001003b) volume_small2_pane

0x5e02,	// (0x00010044) volume_small2_pane_g1

0x5e0b,	// (0x0001004d) volume_small2_pane_g2

0x5e14,	// (0x00010056) volume_small2_pane_g3

0x5e1d,	// (0x0001005f) volume_small2_pane_g4

0x5e26,	// (0x00010068) volume_small2_pane_g5

0x5e2f,	// (0x00010071) volume_small2_pane_g6

0x5e38,	// (0x0001007a) volume_small2_pane_g7

0x5e41,	// (0x00010083) volume_small2_pane_g8

0x5e4a,	// (0x0001008c) volume_small2_pane_g9

0x5e53,	// (0x00010095) volume_small2_pane_g10

0x0009,

0xfc14,	// (0x00019e56) volume_small2_pane_g

0xb8ec,	// (0x00015b2e) fep_vkb_top_text_pane_g1_ParamLimits

0x2982,	// (0x0000cbc4) fep_vkb_top_text_pane_t1_ParamLimits

0xbb6b,	// (0x00015dad) popup_preview_fixed_window_g3_ParamLimits

0xbb6b,	// (0x00015dad) popup_preview_fixed_window_g3

0xe0aa,	// (0x000182ec) popup_toolbar_trans_pane

0x249f,	// (0x0000c6e1) aid_height_set_list_ParamLimits

0xa1d0,	// (0x00014412) aid_size_parent_ParamLimits

0x894d,	// (0x00012b8f) list_highlight_pane_cp2_ParamLimits

0x72d5,	// (0x00011517) set_content_pane_g1_ParamLimits

0x2640,	// (0x0000c882) list_single_image_pane_ParamLimits

0x2640,	// (0x0000c882) list_single_image_pane

0x2b17,	// (0x0000cd59) aid_size_cell_image_ParamLimits

0x2b17,	// (0x0000cd59) aid_size_cell_image

0x2b24,	// (0x0000cd66) grid_single_image_pane_ParamLimits

0x2b24,	// (0x0000cd66) grid_single_image_pane

0x72d5,	// (0x00011517) list_single_image_pane_g1_ParamLimits

0x72d5,	// (0x00011517) list_single_image_pane_g1

0x7864,	// (0x00011aa6) list_single_image_pane_g2_ParamLimits

0x7864,	// (0x00011aa6) list_single_image_pane_g2

0x0001,

0xfc29,	// (0x00019e6b) list_single_image_pane_g_ParamLimits

0xfc29,	// (0x00019e6b) list_single_image_pane_g

0xa353,	// (0x00014595) list_single_image_pane_t1_ParamLimits

0xa353,	// (0x00014595) list_single_image_pane_t1

0x2b30,	// (0x0000cd72) cell_image_list_pane_ParamLimits

0x2b30,	// (0x0000cd72) cell_image_list_pane

0x2b44,	// (0x0000cd86) cell_image_list_pane_g1

0x2b4d,	// (0x0000cd8f) cell_image_list_pane_g2

0x0001,

0xfc2e,	// (0x00019e70) cell_image_list_pane_g

0xc247,	// (0x00016489) aid_size_cell_tb_trans_pane

0x783e,	// (0x00011a80) bg_tb_trans_pane

0xc259,	// (0x0001649b) grid_tb_trans_pane

0x8e16,	// (0x00013058) bg_tb_trans_pane_g1

0x8e26,	// (0x00013068) bg_tb_trans_pane_g2

0x8e1e,	// (0x00013060) bg_tb_trans_pane_g3

0x8e36,	// (0x00013078) bg_tb_trans_pane_g4

0x8e2e,	// (0x00013070) bg_tb_trans_pane_g5

0x8e56,	// (0x00013098) bg_tb_trans_pane_g6

0x8e4e,	// (0x00013090) bg_tb_trans_pane_g7

0x8e3e,	// (0x00013080) bg_tb_trans_pane_g8

0x8e46,	// (0x00013088) bg_tb_trans_pane_g9

0x0008,

0xfc33,	// (0x00019e75) bg_tb_trans_pane_g

0xc26d,	// (0x000164af) cell_toolbar_trans_pane_ParamLimits

0xc26d,	// (0x000164af) cell_toolbar_trans_pane

0xb572,	// (0x000157b4) cell_toolbar_trans_pane_g1

0x287f,	// (0x0000cac1) list_form2_midp_pane_t1

0x288d,	// (0x0000cacf) list_form2_midp_pane_t2

0x0001,

0xfad0,	// (0x00019d12) list_form2_midp_pane_t

0xb1d7,	// (0x00015419) scroll_pane_cp51_ParamLimits

0xb3bc,	// (0x000155fe) form2_midp_wait_pane_g1

0xb3c5,	// (0x00015607) form2_midp_wait_pane_g2

0xb3ce,	// (0x00015610) form2_midp_wait_pane_g3

0x0002,

0xfae5,	// (0x00019d27) form2_midp_wait_pane_g

0x6b2e,	// (0x00010d70) list_highlight_pane_cp21_ParamLimits

0xb40c,	// (0x0001564e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb41b,	// (0x0001565d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa39a,	// (0x000145dc) list_single_2graphic_im_pane_ParamLimits

0xa39a,	// (0x000145dc) list_single_2graphic_im_pane

0x2b56,	// (0x0000cd98) list_single_2graphic_im_pane_g1_ParamLimits

0x2b56,	// (0x0000cd98) list_single_2graphic_im_pane_g1

0x2b67,	// (0x0000cda9) list_single_2graphic_im_pane_g2_ParamLimits

0x2b67,	// (0x0000cda9) list_single_2graphic_im_pane_g2

0x2b73,	// (0x0000cdb5) list_single_2graphic_im_pane_g3_ParamLimits

0x2b73,	// (0x0000cdb5) list_single_2graphic_im_pane_g3

0x0003,

0xfc46,	// (0x00019e88) list_single_2graphic_im_pane_g_ParamLimits

0xfc46,	// (0x00019e88) list_single_2graphic_im_pane_g

0x2b87,	// (0x0000cdc9) list_single_2graphic_im_pane_t1_ParamLimits

0x2b87,	// (0x0000cdc9) list_single_2graphic_im_pane_t1

0xbb77,	// (0x00015db9) list_single_graphic_2heading_pane_fp_ParamLimits

0xbb77,	// (0x00015db9) list_single_graphic_2heading_pane_fp

0xbbce,	// (0x00015e10) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbbce,	// (0x00015e10) list_single_graphic_2heading_pane_fp_g1

0xbb8b,	// (0x00015dcd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbb8b,	// (0x00015dcd) list_single_graphic_2heading_pane_fp_g2

0x74d6,	// (0x00011718) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x74d6,	// (0x00011718) list_single_graphic_2heading_pane_fp_g3

0xbb97,	// (0x00015dd9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbb97,	// (0x00015dd9) list_single_graphic_2heading_pane_fp_g4

0xbbab,	// (0x00015ded) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbbab,	// (0x00015ded) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6d,	// (0x00019daf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6d,	// (0x00019daf) list_single_graphic_2heading_pane_fp_g

0xc301,	// (0x00016543) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc301,	// (0x00016543) list_single_graphic_2heading_pane_fp_t1

0xbc06,	// (0x00015e48) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbc06,	// (0x00015e48) list_single_graphic_2heading_pane_fp_t2

0xc317,	// (0x00016559) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc317,	// (0x00016559) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4f,	// (0x00019e91) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4f,	// (0x00019e91) list_single_graphic_2heading_pane_fp_t

0xb5fb,	// (0x0001583d) fep_hwr_write_pane_g5_ParamLimits

0xb5fb,	// (0x0001583d) fep_hwr_write_pane_g5

0xb607,	// (0x00015849) fep_hwr_write_pane_g6_ParamLimits

0xb607,	// (0x00015849) fep_hwr_write_pane_g6

0xc003,	// (0x00016245) eswt_shell_pane_ParamLimits

0x8f2c,	// (0x0001316e) bg_popup_window_pane_cp18_ParamLimits

0xa136,	// (0x00014378) heading_pane_cp70

0xc120,	// (0x00016362) popup_eswt_tasktip_window_t1_ParamLimits

0x1d56,	// (0x0000bf98) aid_touch_tab_arrow_left

0x1d6a,	// (0x0000bfac) aid_touch_tab_arrow_right

0x096b,	// (0x0000abad) title_pane_g3_ParamLimits

0x096b,	// (0x0000abad) title_pane_g3

0x773c,	// (0x0001197e) set_value_pane_g1

0xe0aa,	// (0x000182ec) popup_toolbar_trans_pane_ParamLimits

0xc247,	// (0x00016489) aid_size_cell_tb_trans_pane_ParamLimits

0x783e,	// (0x00011a80) bg_tb_trans_pane_ParamLimits

0xc259,	// (0x0001649b) grid_tb_trans_pane_ParamLimits

0x6dd5,	// (0x00011017) cont_note_pane_ParamLimits

0x6dd5,	// (0x00011017) cont_note_pane

0x712f,	// (0x00011371) cont_snote2_single_text_pane_ParamLimits

0x712f,	// (0x00011371) cont_snote2_single_text_pane

0x712f,	// (0x00011371) cont_snote2_single_graphic_pane_ParamLimits

0x712f,	// (0x00011371) cont_snote2_single_graphic_pane

0x94fc,	// (0x0001373e) cont_note_wait_pane_ParamLimits

0x94fc,	// (0x0001373e) cont_note_wait_pane

0x94fc,	// (0x0001373e) cont_note_image_pane_ParamLimits

0x94fc,	// (0x0001373e) cont_note_image_pane

0xc32d,	// (0x0001656f) popup_note2_window_g1_ParamLimits

0xc32d,	// (0x0001656f) popup_note2_window_g1

0xc35e,	// (0x000165a0) popup_note2_window_t1_ParamLimits

0xc35e,	// (0x000165a0) popup_note2_window_t1

0xc3a3,	// (0x000165e5) popup_note2_window_t2_ParamLimits

0xc3a3,	// (0x000165e5) popup_note2_window_t2

0xc3e8,	// (0x0001662a) popup_note2_window_t3_ParamLimits

0xc3e8,	// (0x0001662a) popup_note2_window_t3

0xc42d,	// (0x0001666f) popup_note2_window_t4_ParamLimits

0xc42d,	// (0x0001666f) popup_note2_window_t4

0x6e59,	// (0x0001109b) popup_note2_window_t5_ParamLimits

0x6e59,	// (0x0001109b) popup_note2_window_t5

0x0004,

0xfc5b,	// (0x00019e9d) popup_note2_window_t_ParamLimits

0xfc5b,	// (0x00019e9d) popup_note2_window_t

0xc45c,	// (0x0001669e) popup_note2_image_window_g1_ParamLimits

0xc45c,	// (0x0001669e) popup_note2_image_window_g1

0xc468,	// (0x000166aa) popup_note2_image_window_g2_ParamLimits

0xc468,	// (0x000166aa) popup_note2_image_window_g2

0x0001,

0xfc66,	// (0x00019ea8) popup_note2_image_window_g_ParamLimits

0xfc66,	// (0x00019ea8) popup_note2_image_window_g

0xc47a,	// (0x000166bc) popup_note2_image_window_t1_ParamLimits

0xc47a,	// (0x000166bc) popup_note2_image_window_t1

0xc492,	// (0x000166d4) popup_note2_image_window_t2_ParamLimits

0xc492,	// (0x000166d4) popup_note2_image_window_t2

0xc4aa,	// (0x000166ec) popup_note2_image_window_t3_ParamLimits

0xc4aa,	// (0x000166ec) popup_note2_image_window_t3

0x0002,

0xfc6b,	// (0x00019ead) popup_note2_image_window_t_ParamLimits

0xfc6b,	// (0x00019ead) popup_note2_image_window_t

0x950a,	// (0x0001374c) popup_note2_wait_window_g1_ParamLimits

0x950a,	// (0x0001374c) popup_note2_wait_window_g1

0x9516,	// (0x00013758) popup_note2_wait_window_g2_ParamLimits

0x9516,	// (0x00013758) popup_note2_wait_window_g2

0x9522,	// (0x00013764) popup_note2_wait_window_g3_ParamLimits

0x9522,	// (0x00013764) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00019a6f) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00019a6f) popup_note2_wait_window_g

0xc4c6,	// (0x00016708) popup_note2_wait_window_t1_ParamLimits

0xc4c6,	// (0x00016708) popup_note2_wait_window_t1

0xc4e4,	// (0x00016726) popup_note2_wait_window_t2_ParamLimits

0xc4e4,	// (0x00016726) popup_note2_wait_window_t2

0xc502,	// (0x00016744) popup_note2_wait_window_t3_ParamLimits

0xc502,	// (0x00016744) popup_note2_wait_window_t3

0xc514,	// (0x00016756) popup_note2_wait_window_t4_ParamLimits

0xc514,	// (0x00016756) popup_note2_wait_window_t4

0x0003,

0xfc72,	// (0x00019eb4) popup_note2_wait_window_t_ParamLimits

0xfc72,	// (0x00019eb4) popup_note2_wait_window_t

0xc526,	// (0x00016768) wait_bar2_pane_ParamLimits

0xc526,	// (0x00016768) wait_bar2_pane

0xc53e,	// (0x00016780) popup_snote2_single_text_window_g1_ParamLimits

0xc53e,	// (0x00016780) popup_snote2_single_text_window_g1

0xc566,	// (0x000167a8) popup_snote2_single_text_window_t1_ParamLimits

0xc566,	// (0x000167a8) popup_snote2_single_text_window_t1

0xc5b2,	// (0x000167f4) popup_snote2_single_text_window_t2_ParamLimits

0xc5b2,	// (0x000167f4) popup_snote2_single_text_window_t2

0xc5fe,	// (0x00016840) popup_snote2_single_text_window_t3_ParamLimits

0xc5fe,	// (0x00016840) popup_snote2_single_text_window_t3

0xc63f,	// (0x00016881) popup_snote2_single_text_window_t4_ParamLimits

0xc63f,	// (0x00016881) popup_snote2_single_text_window_t4

0xc675,	// (0x000168b7) popup_snote2_single_text_window_t5_ParamLimits

0xc675,	// (0x000168b7) popup_snote2_single_text_window_t5

0x0004,

0xfc7b,	// (0x00019ebd) popup_snote2_single_text_window_t_ParamLimits

0xfc7b,	// (0x00019ebd) popup_snote2_single_text_window_t

0xc6a0,	// (0x000168e2) popup_snote2_single_graphic_window_g1_ParamLimits

0xc6a0,	// (0x000168e2) popup_snote2_single_graphic_window_g1

0xc6c8,	// (0x0001690a) popup_snote2_single_graphic_window_g2_ParamLimits

0xc6c8,	// (0x0001690a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc86,	// (0x00019ec8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc86,	// (0x00019ec8) popup_snote2_single_graphic_window_g

0xc6f0,	// (0x00016932) popup_snote2_single_graphic_window_t1_ParamLimits

0xc6f0,	// (0x00016932) popup_snote2_single_graphic_window_t1

0xc73c,	// (0x0001697e) popup_snote2_single_graphic_window_t2_ParamLimits

0xc73c,	// (0x0001697e) popup_snote2_single_graphic_window_t2

0xc5fe,	// (0x00016840) popup_snote2_single_graphic_window_t3_ParamLimits

0xc5fe,	// (0x00016840) popup_snote2_single_graphic_window_t3

0xc63f,	// (0x00016881) popup_snote2_single_graphic_window_t4_ParamLimits

0xc63f,	// (0x00016881) popup_snote2_single_graphic_window_t4

0xc675,	// (0x000168b7) popup_snote2_single_graphic_window_t5_ParamLimits

0xc675,	// (0x000168b7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8b,	// (0x00019ecd) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8b,	// (0x00019ecd) popup_snote2_single_graphic_window_t

0xb0ad,	// (0x000152ef) clock_nsta_pane_cp2_t1

0xb0ad,	// (0x000152ef) clock_nsta_pane_cp2_t2

0x0001,

0xfaa6,	// (0x00019ce8) clock_nsta_pane_cp2_t

0x7858,	// (0x00011a9a) form_field_data_wide_pane_g1_ParamLimits

0x72d5,	// (0x00011517) form_field_data_wide_pane_g2_ParamLimits

0x72d5,	// (0x00011517) form_field_data_wide_pane_g2

0x7864,	// (0x00011aa6) form_field_data_wide_pane_g3_ParamLimits

0x7864,	// (0x00011aa6) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x000198ae) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x000198ae) form_field_data_wide_pane_g

0x27c8,	// (0x0000ca0a) grid_touch_3_pane_ParamLimits

0x27c8,	// (0x0000ca0a) grid_touch_3_pane

0x2bb8,	// (0x0000cdfa) cell_touch_3_pane_ParamLimits

0x2bb8,	// (0x0000cdfa) cell_touch_3_pane

0xb572,	// (0x000157b4) cell_touch_3_pane_g1

0xb572,	// (0x000157b4) cell_touch_3_pane_g2

0x0001,

0xfb2b,	// (0x00019d6d) cell_touch_3_pane_g

0x6eb1,	// (0x000110f3) cont_query_data_pane

0x6eb9,	// (0x000110fb) cont_query_data_pane_cp1

0xc7b5,	// (0x000169f7) button_value_adjust_pane_cp7

0xc7bd,	// (0x000169ff) query_popup_pane_cp3

0x80d1,	// (0x00012313) bg_popup_sub_pane_cp22_ParamLimits

0x4d12,	// (0x0000ef54) navi_navi_volume_pane_cp2

0x4d2a,	// (0x0000ef6c) popup_side_volume_key_window_g2

0x4d36,	// (0x0000ef78) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00019944) popup_side_volume_key_window_g

0x4d50,	// (0x0000ef92) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0001994b) popup_side_volume_key_window_t

0x83ed,	// (0x0001262f) popup_side_volume_key_window_ParamLimits

0x0e0e,	// (0x0000b050) list_double_graphic_pane_g4_ParamLimits

0x0e0e,	// (0x0000b050) list_double_graphic_pane_g4

0x2618,	// (0x0000c85a) list_single_2heading_msg_pane_ParamLimits

0x2618,	// (0x0000c85a) list_single_2heading_msg_pane

0x2bff,	// (0x0000ce41) list_single_2heading_msg_pane_g1_ParamLimits

0x2bff,	// (0x0000ce41) list_single_2heading_msg_pane_g1

0x2c0b,	// (0x0000ce4d) list_single_2heading_msg_pane_g2_ParamLimits

0x2c0b,	// (0x0000ce4d) list_single_2heading_msg_pane_g2

0x2c1e,	// (0x0000ce60) list_single_2heading_msg_pane_g3_ParamLimits

0x2c1e,	// (0x0000ce60) list_single_2heading_msg_pane_g3

0xc80e,	// (0x00016a50) list_single_2heading_msg_pane_g4_ParamLimits

0xc80e,	// (0x00016a50) list_single_2heading_msg_pane_g4

0x0003,

0xfc96,	// (0x00019ed8) list_single_2heading_msg_pane_g_ParamLimits

0xfc96,	// (0x00019ed8) list_single_2heading_msg_pane_g

0x2c2a,	// (0x0000ce6c) list_single_2heading_msg_pane_t1_ParamLimits

0x2c2a,	// (0x0000ce6c) list_single_2heading_msg_pane_t1

0x2c52,	// (0x0000ce94) list_single_2heading_msg_pane_t2_ParamLimits

0x2c52,	// (0x0000ce94) list_single_2heading_msg_pane_t2

0x2cbd,	// (0x0000ceff) list_single_2heading_msg_pane_t3_ParamLimits

0x2cbd,	// (0x0000ceff) list_single_2heading_msg_pane_t3

0xc8b6,	// (0x00016af8) list_single_2heading_msg_pane_t4_ParamLimits

0xc8b6,	// (0x00016af8) list_single_2heading_msg_pane_t4

0x0003,

0xfc9f,	// (0x00019ee1) list_single_2heading_msg_pane_t_ParamLimits

0xfc9f,	// (0x00019ee1) list_single_2heading_msg_pane_t

0x6a82,	// (0x00010cc4) title_pane_g4_ParamLimits

0x6a82,	// (0x00010cc4) title_pane_g4

0x4b62,	// (0x0000eda4) title_pane_stacon_g3_ParamLimits

0x4b62,	// (0x0000eda4) title_pane_stacon_g3

0xc2c4,	// (0x00016506) list_single_2graphic_im_pane_g4_ParamLimits

0xc2c4,	// (0x00016506) list_single_2graphic_im_pane_g4

0x9efa,	// (0x0001413c) popup_side_volume_key_window_cp

0xa6ce,	// (0x00014910) main_idle_act2_pane_t1

0x55db,	// (0x0000f81d) toolbar_button_pane_g10

0x0cfb,	// (0x0000af3d) popup_toolbar_window_cp1

0xb09e,	// (0x000152e0) clock_nsta_pane_cp_t1

0xb09e,	// (0x000152e0) clock_nsta_pane_cp_t2

0x0001,

0xfaa1,	// (0x00019ce3) clock_nsta_pane_cp_t

0x4d12,	// (0x0000ef54) navi_navi_volume_pane_cp2_ParamLimits

0x4d1e,	// (0x0000ef60) popup_side_volume_key_window_g1_ParamLimits

0x4d2a,	// (0x0000ef6c) popup_side_volume_key_window_g2_ParamLimits

0x4d36,	// (0x0000ef78) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00019944) popup_side_volume_key_window_g_ParamLimits

0x5a71,	// (0x0000fcb3) fep_hwr_aid_pane

0x5b12,	// (0x0000fd54) bg_fep_hwr_top_pane_g4_ParamLimits

0xb5cb,	// (0x0001580d) fep_hwr_top_pane_g1_ParamLimits

0xb5dd,	// (0x0001581f) fep_hwr_top_pane_g2_ParamLimits

0x5b32,	// (0x0000fd74) fep_hwr_top_pane_g3_ParamLimits

0xfaf6,	// (0x00019d38) fep_hwr_top_pane_g_ParamLimits

0x5b47,	// (0x0000fd89) fep_hwr_top_text_pane_ParamLimits

0x9cc5,	// (0x00013f07) aid_touch_tab_arrow_arrow_2

0x9cce,	// (0x00013f10) aid_touch_tab_arrow_left_2

0x5a85,	// (0x0000fcc7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5ab8,	// (0x0000fcfa) fep_hwr_prediction_pane

0xb71c,	// (0x0001595e) fep_vkb_prediction_pane

0x2962,	// (0x0000cba4) fep_vkb_side_pane_g3_ParamLimits

0x2962,	// (0x0000cba4) fep_vkb_side_pane_g3

0x5cb6,	// (0x0000fef8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5d20,	// (0x0000ff62) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5d2d,	// (0x0000ff6f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba5,	// (0x00019de7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e5c,	// (0x0001009e) fep_hwr_prediction_pane_g1

0x5e66,	// (0x000100a8) fep_hwr_prediction_pane_g2

0x5e6e,	// (0x000100b0) fep_hwr_prediction_pane_g3

0x5e76,	// (0x000100b8) fep_hwr_prediction_pane_g4

0x0003,

0xfca8,	// (0x00019eea) fep_hwr_prediction_pane_g

0xc8db,	// (0x00016b1d) fep_vkb_prediction_pane_g1

0xc8e5,	// (0x00016b27) fep_vkb_prediction_pane_g2

0xc8ed,	// (0x00016b2f) fep_vkb_prediction_pane_g3

0xc8f5,	// (0x00016b37) fep_vkb_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00019ef3) fep_vkb_prediction_pane_g

0x58a9,	// (0x0000faeb) slider_set_pane_g3

0x58bd,	// (0x0000faff) slider_set_pane_g4

0x58d5,	// (0x0000fb17) slider_set_pane_g5

0x58a9,	// (0x0000faeb) slider_set_pane_g6

0xe2b3,	// (0x000184f5) slider_set_pane_g7

0xa317,	// (0x00014559) slider_form_pane_g3

0xa320,	// (0x00014562) slider_form_pane_g4

0xa328,	// (0x0001456a) slider_form_pane_g5

0xa317,	// (0x00014559) slider_form_pane_g6

0x25d1,	// (0x0000c813) slider_form_pane_g7

0xa9ae,	// (0x00014bf0) slider_set_pane_vc_g3

0xa9b7,	// (0x00014bf9) slider_set_pane_vc_g4

0xa9c0,	// (0x00014c02) slider_set_pane_vc_g5

0xa9ae,	// (0x00014bf0) slider_set_pane_vc_g6

0xa9c9,	// (0x00014c0b) slider_set_pane_vc_g7

0xa9ae,	// (0x00014bf0) slider_form_pane_vc_g1

0xa9b7,	// (0x00014bf9) slider_form_pane_vc_g2

0xa9c0,	// (0x00014c02) slider_form_pane_vc_g3

0xa9ae,	// (0x00014bf0) slider_form_pane_vc_g4

0xad97,	// (0x00014fd9) slider_form_pane_vc_g5

0x0004,

0xfa73,	// (0x00019cb5) slider_form_pane_vc_g

0x489f,	// (0x0000eae1) main_idle_act3_pane

0xc8fd,	// (0x00016b3f) ai3_links_pane

0x2d2b,	// (0x0000cf6d) popup_ai3_data_window_ParamLimits

0x2d2b,	// (0x0000cf6d) popup_ai3_data_window

0x695d,	// (0x00010b9f) grid_ai3_links_pane

0x2d43,	// (0x0000cf85) cell_ai3_links_pane_ParamLimits

0x2d43,	// (0x0000cf85) cell_ai3_links_pane

0xc932,	// (0x00016b74) bg_popup_sub_pane_cp11

0xc93f,	// (0x00016b81) cell_ai3_links_pane_g1

0x695d,	// (0x00010b9f) bg_popup_sub_pane_cp12

0xc964,	// (0x00016ba6) heading_ai3_data_pane

0xc96c,	// (0x00016bae) list_ai3_gene_pane

0xc978,	// (0x00016bba) popup_ai3_data_window_g1

0xc980,	// (0x00016bc2) heading_ai3_data_pane_g1

0xc988,	// (0x00016bca) heading_ai3_data_pane_t1

0xc996,	// (0x00016bd8) list_double_ai3_gene_pane_ParamLimits

0xc996,	// (0x00016bd8) list_double_ai3_gene_pane

0xc9a3,	// (0x00016be5) list_single_ai3_gene_pane_ParamLimits

0xc9a3,	// (0x00016be5) list_single_ai3_gene_pane

0xb537,	// (0x00015779) list_highlight_pane_cp7_ParamLimits

0xb537,	// (0x00015779) list_highlight_pane_cp7

0xc9b0,	// (0x00016bf2) list_single_a13_gene_pane_t1_ParamLimits

0xc9b0,	// (0x00016bf2) list_single_a13_gene_pane_t1

0xc9c7,	// (0x00016c09) list_single_ai3_gene_pane_g1

0xc9d0,	// (0x00016c12) list_single_ai3_gene_pane_g2

0x0001,

0xfcba,	// (0x00019efc) list_single_ai3_gene_pane_g

0xc9d8,	// (0x00016c1a) list_double_ai3_gene_pane_g1_ParamLimits

0xc9d8,	// (0x00016c1a) list_double_ai3_gene_pane_g1

0xc9e4,	// (0x00016c26) list_double_ai3_gene_pane_t1_ParamLimits

0xc9e4,	// (0x00016c26) list_double_ai3_gene_pane_t1

0xca00,	// (0x00016c42) list_double_ai3_gene_pane_t2_ParamLimits

0xca00,	// (0x00016c42) list_double_ai3_gene_pane_t2

0xca15,	// (0x00016c57) list_double_ai3_gene_pane_t3_ParamLimits

0xca15,	// (0x00016c57) list_double_ai3_gene_pane_t3

0x0002,

0xfcbf,	// (0x00019f01) list_double_ai3_gene_pane_t_ParamLimits

0xfcbf,	// (0x00019f01) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc7ce,	// (0x00016a10) aid_size_min_col_2

0x2beb,	// (0x0000ce2d) aid_size_min_msg_ParamLimits

0x2beb,	// (0x0000ce2d) aid_size_min_msg

0x2976,	// (0x0000cbb8) fep_vkb_top_text_pane_g2_ParamLimits

0x2976,	// (0x0000cbb8) fep_vkb_top_text_pane_g2

0x0001,

0xfb26,	// (0x00019d68) fep_vkb_top_text_pane_g_ParamLimits

0xfb26,	// (0x00019d68) fep_vkb_top_text_pane_g

0x489f,	// (0x0000eae1) main_hc_apps_shell_pane

0xca32,	// (0x00016c74) grid_hc_apps_pane_ParamLimits

0xca32,	// (0x00016c74) grid_hc_apps_pane

0xca41,	// (0x00016c83) list_hc_apps_pane

0xca49,	// (0x00016c8b) scroll_pane_cp37_ParamLimits

0xca49,	// (0x00016c8b) scroll_pane_cp37

0x2d59,	// (0x0000cf9b) cell_hc_apps_pane_ParamLimits

0x2d59,	// (0x0000cf9b) cell_hc_apps_pane

0x2df3,	// (0x0000d035) cell_hc_apps_pane_g1_ParamLimits

0x2df3,	// (0x0000d035) cell_hc_apps_pane_g1

0xcb10,	// (0x00016d52) cell_hc_apps_pane_g2_ParamLimits

0xcb10,	// (0x00016d52) cell_hc_apps_pane_g2

0xcb2c,	// (0x00016d6e) cell_hc_apps_pane_g3_ParamLimits

0xcb2c,	// (0x00016d6e) cell_hc_apps_pane_g3

0x0002,

0xfcc6,	// (0x00019f08) cell_hc_apps_pane_g_ParamLimits

0xfcc6,	// (0x00019f08) cell_hc_apps_pane_g

0x2e20,	// (0x0000d062) cell_hc_apps_pane_t1_ParamLimits

0x2e20,	// (0x0000d062) cell_hc_apps_pane_t1

0x6dd5,	// (0x00011017) grid_highlight_pane_cp10_ParamLimits

0x6dd5,	// (0x00011017) grid_highlight_pane_cp10

0x2e5e,	// (0x0000d0a0) list_single_hc_apps_pane_ParamLimits

0x2e5e,	// (0x0000d0a0) list_single_hc_apps_pane

0x2e8a,	// (0x0000d0cc) list_single_hc_apps_pane_g1

0x2ea3,	// (0x0000d0e5) list_single_hc_apps_pane_g2

0x0001,

0xfccd,	// (0x00019f0f) list_single_hc_apps_pane_g

0x2ebc,	// (0x0000d0fe) list_single_hc_apps_pane_g2_copy1

0x2ed8,	// (0x0000d11a) list_single_hc_apps_pane_t1

0x6b2e,	// (0x00010d70) bg_set_opt_pane_cp_ParamLimits

0x4ab0,	// (0x0000ecf2) setting_slider_pane_t1_ParamLimits

0xd9c3,	// (0x00017c05) setting_slider_pane_t2_ParamLimits

0xd9dc,	// (0x00017c1e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000197a0) setting_slider_pane_t_ParamLimits

0x4af6,	// (0x0000ed38) slider_set_pane_ParamLimits

0x4f92,	// (0x0000f1d4) control_pane_g5_ParamLimits

0x4f92,	// (0x0000f1d4) control_pane_g5

0xa18f,	// (0x000143d1) slider_set_pane_g1_ParamLimits

0x589d,	// (0x0000fadf) slider_set_pane_g2_ParamLimits

0x58a9,	// (0x0000faeb) slider_set_pane_g3_ParamLimits

0x58bd,	// (0x0000faff) slider_set_pane_g4_ParamLimits

0x58d5,	// (0x0000fb17) slider_set_pane_g5_ParamLimits

0x58a9,	// (0x0000faeb) slider_set_pane_g6_ParamLimits

0xe2b3,	// (0x000184f5) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00019b8b) slider_set_pane_g_ParamLimits

0x6b2e,	// (0x00010d70) navi_icon_text_pane_ParamLimits

0x1d28,	// (0x0000bf6a) aid_fill_nsta_2_ParamLimits

0x1d56,	// (0x0000bf98) aid_touch_tab_arrow_left_ParamLimits

0x1d6a,	// (0x0000bfac) aid_touch_tab_arrow_right_ParamLimits

0x1e06,	// (0x0000c048) clock_nsta_pane_ParamLimits

0x9ca7,	// (0x00013ee9) navi_icon_pane_g1_ParamLimits

0x9cb3,	// (0x00013ef5) navi_text_pane_t1_ParamLimits

0xb195,	// (0x000153d7) navi_icon_text_pane_g1_ParamLimits

0xb1a1,	// (0x000153e3) navi_icon_text_pane_t1_ParamLimits

0x2e8a,	// (0x0000d0cc) list_single_hc_apps_pane_g1_ParamLimits

0x2ea3,	// (0x0000d0e5) list_single_hc_apps_pane_g2_ParamLimits

0xfccd,	// (0x00019f0f) list_single_hc_apps_pane_g_ParamLimits

0x2ebc,	// (0x0000d0fe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x2ed8,	// (0x0000d11a) list_single_hc_apps_pane_t1_ParamLimits

0xd909,	// (0x00017b4b) popup_toolbar2_fixed_window_ParamLimits

0xd909,	// (0x00017b4b) popup_toolbar2_fixed_window

0xe0a2,	// (0x000182e4) popup_toolbar2_float_window

0x695d,	// (0x00010b9f) bg_popup_sub_pane_cp27

0xcc38,	// (0x00016e7a) grid_toolbar2_float_pane

0x695d,	// (0x00010b9f) bg_popup_sub_pane_cp26

0xcc38,	// (0x00016e7a) grid_toolbar2_fixed_pane

0x2f06,	// (0x0000d148) cell_toolbar2_fixed_pane_ParamLimits

0x2f06,	// (0x0000d148) cell_toolbar2_fixed_pane

0x2f21,	// (0x0000d163) cell_toolbar2_fixed_pane_g1

0xcc5a,	// (0x00016e9c) toolbar2_fixed_button_pane

0x8e16,	// (0x00013058) toolbar2_fixed_button_pane_g1

0x8e26,	// (0x00013068) toolbar2_fixed_button_pane_g2

0x8e1e,	// (0x00013060) toolbar2_fixed_button_pane_g3

0x8e36,	// (0x00013078) toolbar2_fixed_button_pane_g4

0x8e2e,	// (0x00013070) toolbar2_fixed_button_pane_g5

0x8e3e,	// (0x00013080) toolbar2_fixed_button_pane_g6

0x8e46,	// (0x00013088) toolbar2_fixed_button_pane_g7

0x8e56,	// (0x00013098) toolbar2_fixed_button_pane_g8

0x8e4e,	// (0x00013090) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00019a8d) toolbar2_fixed_button_pane_g

0xcc62,	// (0x00016ea4) cell_toolbar2_float_pane_ParamLimits

0xcc62,	// (0x00016ea4) cell_toolbar2_float_pane

0xcc73,	// (0x00016eb5) cell_toolbar2_float_pane_g1

0xcc5a,	// (0x00016e9c) toolbar2_fixed_button_pane_cp

0x292b,	// (0x0000cb6d) fep_vkb_accented_list_pane_ParamLimits

0x292b,	// (0x0000cb6d) fep_vkb_accented_list_pane

0x5c96,	// (0x0000fed8) bg_popup_fep_shadow_pane_g9

0x85fe,	// (0x00012840) bg_popup_fep_shadow_pane_cp3

0x7ae9,	// (0x00011d2b) list_accented_list_pane

0xcc7c,	// (0x00016ebe) list_single_accented_list_pane_ParamLimits

0xcc7c,	// (0x00016ebe) list_single_accented_list_pane

0x85fe,	// (0x00012840) list_highlight_pane_cp10

0xcc8d,	// (0x00016ecf) list_single_accented_list_pane_t1

0xdfe4,	// (0x00018226) popup_slider_window_ParamLimits

0xdfe4,	// (0x00018226) popup_slider_window

0xc7c5,	// (0x00016a07) aid_indentation_list_msg

0x3000,	// (0x0000d242) bg_popup_window_pane_cp19

0xcd91,	// (0x00016fd3) popup_slider_window_g1

0xcdad,	// (0x00016fef) popup_slider_window_g2

0xcdc9,	// (0x0001700b) popup_slider_window_g3

0x0005,

0xfcd2,	// (0x00019f14) popup_slider_window_g

0xce25,	// (0x00017067) popup_slider_window_t1

0xce97,	// (0x000170d9) small_volume_slider_vertical_pane

0xb572,	// (0x000157b4) small_volume_slider_vertical_pane_g1

0xb572,	// (0x000157b4) small_volume_slider_vertical_pane_g2

0xceb3,	// (0x000170f5) small_volume_slider_vertical_pane_g3

0x0002,

0xfce4,	// (0x00019f26) small_volume_slider_vertical_pane_g

0xd88d,	// (0x00017acf) area_side_right_pane_ParamLimits

0xd88d,	// (0x00017acf) area_side_right_pane

0xe316,	// (0x00018558) aid_size_side_button_ParamLimits

0xe316,	// (0x00018558) aid_size_side_button

0xe32f,	// (0x00018571) grid_sctrl_middle_pane_ParamLimits

0xe32f,	// (0x00018571) grid_sctrl_middle_pane

0x5eae,	// (0x000100f0) sctrl_sk_bottom_pane

0x5ebf,	// (0x00010101) sctrl_sk_top_pane

0x5ed1,	// (0x00010113) aid_touch_sctrl_top

0x5ede,	// (0x00010120) bg_sctrl_sk_pane_ParamLimits

0x5ede,	// (0x00010120) bg_sctrl_sk_pane

0x5eec,	// (0x0001012e) sctrl_sk_top_pane_g1

0x5ef9,	// (0x0001013b) sctrl_sk_top_pane_t1

0x5ed1,	// (0x00010113) aid_touch_sctrl_bottom

0x5ede,	// (0x00010120) bg_sctrl_sk_pane_cp_ParamLimits

0x5ede,	// (0x00010120) bg_sctrl_sk_pane_cp

0x5f14,	// (0x00010156) sctrl_sk_bottom_pane_g1

0x5ef9,	// (0x0001013b) sctrl_sk_bottom_pane_t1

0xe345,	// (0x00018587) cell_sctrl_middle_pane_ParamLimits

0xe345,	// (0x00018587) cell_sctrl_middle_pane

0xe356,	// (0x00018598) aid_touch_sctrl_middle_ParamLimits

0xe356,	// (0x00018598) aid_touch_sctrl_middle

0xe363,	// (0x000185a5) bg_sctrl_middle_pane_ParamLimits

0xe363,	// (0x000185a5) bg_sctrl_middle_pane

0x651c,	// (0x0001075e) cell_sctrl_middle_pane_g1_ParamLimits

0x651c,	// (0x0001075e) cell_sctrl_middle_pane_g1

0xe371,	// (0x000185b3) cell_sctrl_middle_pane_g2_ParamLimits

0xe371,	// (0x000185b3) cell_sctrl_middle_pane_g2

0x0001,

0xfcf0,	// (0x00019f32) cell_sctrl_middle_pane_g_ParamLimits

0xfcf0,	// (0x00019f32) cell_sctrl_middle_pane_g

0x8e16,	// (0x00013058) bg_sctrl_middle_pane_g1

0x8e1e,	// (0x00013060) bg_sctrl_middle_pane_g2

0x8e26,	// (0x00013068) bg_sctrl_middle_pane_g3

0x8e2e,	// (0x00013070) bg_sctrl_middle_pane_g4

0x8e36,	// (0x00013078) bg_sctrl_middle_pane_g5

0x8e3e,	// (0x00013080) bg_sctrl_middle_pane_g6

0x8e46,	// (0x00013088) bg_sctrl_middle_pane_g7

0x8e4e,	// (0x00013090) bg_sctrl_middle_pane_g8

0x0007,

0xfcf5,	// (0x00019f37) bg_sctrl_middle_pane_g

0x8e56,	// (0x00013098) bg_sctrl_middle_pane_g8_copy1

0x8e16,	// (0x00013058) bg_sctrl_sk_pane_g1

0x8e26,	// (0x00013068) bg_sctrl_sk_pane_g2

0x8e1e,	// (0x00013060) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00019a8d) bg_sctrl_sk_pane_g

0x7251,	// (0x00011493) aid_size_touch_scroll_bar

0x8e36,	// (0x00013078) bg_sctrl_sk_pane_g4

0x8e2e,	// (0x00013070) bg_sctrl_sk_pane_g5

0x8e3e,	// (0x00013080) bg_sctrl_sk_pane_g6

0x8e46,	// (0x00013088) bg_sctrl_sk_pane_g7

0x8e56,	// (0x00013098) bg_sctrl_sk_pane_g8

0x8e4e,	// (0x00013090) bg_sctrl_sk_pane_g9

0x513a,	// (0x0000f37c) popup_fep_china_hwr2_fs_candidate_window

0xdbdf,	// (0x00017e21) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xdbdf,	// (0x00017e21) popup_fep_china_hwr2_fs_control_window

0x5cb6,	// (0x0000fef8) sctrl_sk_top_pane_g2

0x0001,

0xfceb,	// (0x00019f2d) sctrl_sk_top_pane_g

0x3120,	// (0x0000d362) aid_fep_china_hwr2_fs_cell_ParamLimits

0x3120,	// (0x0000d362) aid_fep_china_hwr2_fs_cell

0x3134,	// (0x0000d376) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x3134,	// (0x0000d376) bg_popup_fep_shadow_pane_cp4

0x314b,	// (0x0000d38d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x314b,	// (0x0000d38d) bg_popup_fep_shadow_pane_cp5

0x315d,	// (0x0000d39f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x315d,	// (0x0000d39f) popup_fep_china_hwr2_fs_control_bar_grid

0x3171,	// (0x0000d3b3) popup_fep_china_hwr2_fs_control_funtion_grid

0xe8a3,	// (0x00018ae5) aid_fep_china_hwr2_fs_candi_cell

0x695d,	// (0x00010b9f) bg_popup_fep_shadow_pane_cp6

0xe8ad,	// (0x00018aef) popup_fep_china_hwr2_fs_candidate_grid

0x3179,	// (0x0000d3bb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x3179,	// (0x0000d3bb) cell_fep_china_hwr2_fs_funtion_grid

0xb572,	// (0x000157b4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe8b5,	// (0x00018af7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe8b5,	// (0x00018af7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe8c3,	// (0x00018b05) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe8c3,	// (0x00018b05) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd06,	// (0x00019f48) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd06,	// (0x00019f48) cell_fep_china_hwr2_fs_funtion_grid_g

0x3191,	// (0x0000d3d3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x3191,	// (0x0000d3d3) cell_fep_china_hwr2_fs_funtion_grid_t1

0x31a6,	// (0x0000d3e8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x31a6,	// (0x0000d3e8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0b,	// (0x00019f4d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0b,	// (0x00019f4d) cell_fep_china_hwr2_fs_funtion_grid_t

0xe8d9,	// (0x00018b1b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe8e1,	// (0x00018b23) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe8e9,	// (0x00018b2b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd10,	// (0x00019f52) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe8f1,	// (0x00018b33) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe8f1,	// (0x00018b33) cell_fep_china_hwr2_fs_candidate_grid

0xe90a,	// (0x00018b4c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe912,	// (0x00018b54) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb572,	// (0x000157b4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb572,	// (0x000157b4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2b,	// (0x00019d6d) cell_fep_china_hwr2_fs_candidate_grid_g

0xe91a,	// (0x00018b5c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8a3c,	// (0x00012c7e) clock_nsta_pane_cp_24_ParamLimits

0x8a3c,	// (0x00012c7e) clock_nsta_pane_cp_24

0x8aaf,	// (0x00012cf1) indicator_nsta_pane_cp_24_ParamLimits

0x8aaf,	// (0x00012cf1) indicator_nsta_pane_cp_24

0x9b24,	// (0x00013d66) heading_pane_g1

0x0001,

0xf8b0,	// (0x00019af2) heading_pane_g

0x26f0,	// (0x0000c932) grid_sct_catagory_button_pane

0xa5a0,	// (0x000147e2) scroll_pane_cp5_ParamLimits

0xb1e3,	// (0x00015425) button_value_adjust_pane_cp5_ParamLimits

0xb1e3,	// (0x00015425) button_value_adjust_pane_cp5

0xb2d9,	// (0x0001551b) form2_midp_time_pane_ParamLimits

0xe928,	// (0x00018b6a) cell_sct_catagory_button_pane_ParamLimits

0xe928,	// (0x00018b6a) cell_sct_catagory_button_pane

0xb537,	// (0x00015779) bg_button_pane_cp01_ParamLimits

0xb537,	// (0x00015779) bg_button_pane_cp01

0xb572,	// (0x000157b4) cell_sct_catagory_button_pane_g1

0xe053,	// (0x00018295) popup_tb_extension_window

0x31c2,	// (0x0000d404) aid_size_cell_ext_ParamLimits

0x31c2,	// (0x0000d404) aid_size_cell_ext

0x712f,	// (0x00011371) bg_tb_trans_pane_cp1_ParamLimits

0x712f,	// (0x00011371) bg_tb_trans_pane_cp1

0x31e8,	// (0x0000d42a) grid_tb_ext_pane_ParamLimits

0x31e8,	// (0x0000d42a) grid_tb_ext_pane

0x321e,	// (0x0000d460) cell_tb_ext_pane_ParamLimits

0x321e,	// (0x0000d460) cell_tb_ext_pane

0x3242,	// (0x0000d484) cell_tb_ext_pane_g1_ParamLimits

0x3242,	// (0x0000d484) cell_tb_ext_pane_g1

0xe93a,	// (0x00018b7c) cell_tb_ext_pane_t1

0x6dd5,	// (0x00011017) list_highlight_pane_cp11_ParamLimits

0x6dd5,	// (0x00011017) list_highlight_pane_cp11

0xd91e,	// (0x00017b60) popup_uni_indicator_window_ParamLimits

0xd91e,	// (0x00017b60) popup_uni_indicator_window

0x783e,	// (0x00011a80) bg_popup_sub_pane_cp14

0xe955,	// (0x00018b97) list_uniindi_pane

0xe961,	// (0x00018ba3) uniindi_top_pane

0x6dd5,	// (0x00011017) bg_uniindi_top_pane

0xe980,	// (0x00018bc2) uniindi_top_pane_g1

0xe996,	// (0x00018bd8) uniindi_top_pane_g2

0x0003,

0xfd17,	// (0x00019f59) uniindi_top_pane_g

0xe9c0,	// (0x00018c02) uniindi_top_pane_t1

0xe9ea,	// (0x00018c2c) list_single_uniindi_pane_ParamLimits

0xe9ea,	// (0x00018c2c) list_single_uniindi_pane

0xb572,	// (0x000157b4) bg_uniindi_top_pane_g1

0xe9fc,	// (0x00018c3e) list_single_uniindi_pane_g1

0xea0f,	// (0x00018c51) list_single_uniindi_pane_t1

0x489f,	// (0x0000eae1) control_bg_pane

0xea34,	// (0x00018c76) bg_sctrl_sk_pane_cp1

0xea3d,	// (0x00018c7f) bg_sctrl_sk_pane_cp2

0xea46,	// (0x00018c88) control_bg_pane_g1

0xea4f,	// (0x00018c91) control_bg_pane_g2

0x0001,

0xfd20,	// (0x00019f62) control_bg_pane_g

0xb039,	// (0x0001527b) cell_indicator_nsta_pane_g1_ParamLimits

0x27f5,	// (0x0000ca37) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8f,	// (0x00019cd1) cell_indicator_nsta_pane_g_ParamLimits

0xb341,	// (0x00015583) form2_midp_time_pane_t1_ParamLimits

0x5a63,	// (0x0000fca5) main_idle_act4_pane_ParamLimits

0x5a63,	// (0x0000fca5) main_idle_act4_pane

0xe053,	// (0x00018295) popup_tb_extension_window_ParamLimits

0x3208,	// (0x0000d44a) tb_ext_find_pane_ParamLimits

0x3208,	// (0x0000d44a) tb_ext_find_pane

0xea58,	// (0x00018c9a) ai_gene_pane_1_cp1

0x8739,	// (0x0001297b) ai_gene_pane_2_cp1

0xea60,	// (0x00018ca2) list_single_idle_plugin_calendar_pane

0xea69,	// (0x00018cab) list_single_idle_plugin_notification_pane

0xea72,	// (0x00018cb4) list_single_idle_plugin_player_pane

0x325f,	// (0x0000d4a1) list_single_idle_plugin_shortcut_pane_ParamLimits

0x325f,	// (0x0000d4a1) list_single_idle_plugin_shortcut_pane

0x3287,	// (0x0000d4c9) main_idle_act4_pane_t1

0x329d,	// (0x0000d4df) main_idle_act4_pane_t2

0x0001,

0xfd25,	// (0x00019f67) main_idle_act4_pane_t

0x32b3,	// (0x0000d4f5) middle_sk_idle_act4_pane_ParamLimits

0x32b3,	// (0x0000d4f5) middle_sk_idle_act4_pane

0x32cf,	// (0x0000d511) popup_clock_digital_analogue_window_cp2

0x32f5,	// (0x0000d537) shortcut_wheel_idle_act4_pane_ParamLimits

0x32f5,	// (0x0000d537) shortcut_wheel_idle_act4_pane

0xb572,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g1

0xb572,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g2

0xb572,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g3

0xb572,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g4

0xb572,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g5

0xea7b,	// (0x00018cbd) shortcut_wheel_idle_act4_pane_g6

0xea83,	// (0x00018cc5) shortcut_wheel_idle_act4_pane_g7

0xea8b,	// (0x00018ccd) shortcut_wheel_idle_act4_pane_g8

0xea93,	// (0x00018cd5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2a,	// (0x00019f6c) shortcut_wheel_idle_act4_pane_g

0xea9b,	// (0x00018cdd) middle_sk_idle_act4_pane_g1_ParamLimits

0xea9b,	// (0x00018cdd) middle_sk_idle_act4_pane_g1

0x3370,	// (0x0000d5b2) middle_sk_idle_act4_pane_g2_ParamLimits

0x3370,	// (0x0000d5b2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4d,	// (0x00019f8f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4d,	// (0x00019f8f) middle_sk_idle_act4_pane_g

0x3388,	// (0x0000d5ca) middle_sk_idle_act4_pane_t1_ParamLimits

0x3388,	// (0x0000d5ca) middle_sk_idle_act4_pane_t1

0x33b7,	// (0x0000d5f9) grid_ai_shortcut_pane_ParamLimits

0x33b7,	// (0x0000d5f9) grid_ai_shortcut_pane

0x33d4,	// (0x0000d616) list_highlight_pane_cp16_ParamLimits

0x33d4,	// (0x0000d616) list_highlight_pane_cp16

0x33e1,	// (0x0000d623) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x33e1,	// (0x0000d623) list_single_idle_plugin_shortcut_pane_g1

0x33ed,	// (0x0000d62f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x33ed,	// (0x0000d62f) list_single_idle_plugin_shortcut_pane_g2

0x3409,	// (0x0000d64b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x3409,	// (0x0000d64b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd52,	// (0x00019f94) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd52,	// (0x00019f94) list_single_idle_plugin_shortcut_pane_g

0x341e,	// (0x0000d660) cell_ai_shortcut_pane_ParamLimits

0x341e,	// (0x0000d660) cell_ai_shortcut_pane

0x3434,	// (0x0000d676) cell_ai_shortcut_pane_g1_ParamLimits

0x3434,	// (0x0000d676) cell_ai_shortcut_pane_g1

0xea58,	// (0x00018c9a) ai_gene_pane_1_cp2

0xeaa9,	// (0x00018ceb) ai_gene_pane_2_cp2

0xeab1,	// (0x00018cf3) list_highlight_pane_cp15

0xeaba,	// (0x00018cfc) list_single_idle_plugin_calendar_pane_g1

0xeab1,	// (0x00018cf3) list_highlight_pane_cp17

0xeac2,	// (0x00018d04) list_single_idle_plugin_calendar_pane_g1_copy1

0xeaca,	// (0x00018d0c) list_single_idle_plugin_player_pane_g1

0xa76e,	// (0x000149b0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd59,	// (0x00019f9b) list_single_idle_plugin_player_pane_g

0xead2,	// (0x00018d14) list_single_idle_plugin_player_pane_t1

0xeae0,	// (0x00018d22) list_single_idle_plugin_player_pane_t2

0xeaee,	// (0x00018d30) list_single_idle_plugin_player_pane_t3

0xeafc,	// (0x00018d3e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5e,	// (0x00019fa0) list_single_idle_plugin_player_pane_t

0xeb0a,	// (0x00018d4c) wait_bar_pane_cp15

0xeb12,	// (0x00018d54) grid_ai_notification_pane

0xa76e,	// (0x000149b0) list_single_idle_plugin_notification_pane_g1

0x3456,	// (0x0000d698) cell_ai_notification_pane_ParamLimits

0x3456,	// (0x0000d698) cell_ai_notification_pane

0xeb1b,	// (0x00018d5d) cell_ai_notification_pane_g1

0xeb23,	// (0x00018d65) cell_ai_notification_pane_t1

0x3463,	// (0x0000d6a5) tb_ext_find_button_pane

0x346b,	// (0x0000d6ad) tb_ext_find_pane_g1

0x3473,	// (0x0000d6b5) tb_ext_find_pane_t1

0x7ff9,	// (0x0001223b) tb_ext_find_button_pane_g1

0xeb31,	// (0x00018d73) tb_ext_find_button_pane_g2

0x0001,

0xfd67,	// (0x00019fa9) tb_ext_find_button_pane_g

0x3287,	// (0x0000d4c9) main_idle_act4_pane_t1_ParamLimits

0x329d,	// (0x0000d4df) main_idle_act4_pane_t2_ParamLimits

0xfd25,	// (0x00019f67) main_idle_act4_pane_t_ParamLimits

0x32cf,	// (0x0000d511) popup_clock_digital_analogue_window_cp2_ParamLimits

0x32e5,	// (0x0000d527) sat_plugin_idle_act4_pane_ParamLimits

0x32e5,	// (0x0000d527) sat_plugin_idle_act4_pane

0x3481,	// (0x0000d6c3) sat_plugin_idle_act4_pane_t1_ParamLimits

0x3481,	// (0x0000d6c3) sat_plugin_idle_act4_pane_t1

0x3499,	// (0x0000d6db) sat_plugin_idle_act4_pane_t2_ParamLimits

0x3499,	// (0x0000d6db) sat_plugin_idle_act4_pane_t2

0x34b1,	// (0x0000d6f3) sat_plugin_idle_act4_pane_t3_ParamLimits

0x34b1,	// (0x0000d6f3) sat_plugin_idle_act4_pane_t3

0x34c9,	// (0x0000d70b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x34c9,	// (0x0000d70b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6c,	// (0x00019fae) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6c,	// (0x00019fae) sat_plugin_idle_act4_pane_t

0x4962,	// (0x0000eba4) popup_battery_window_ParamLimits

0x4962,	// (0x0000eba4) popup_battery_window

0x6dd5,	// (0x00011017) bg_popup_sub_pane_cp25_ParamLimits

0x6dd5,	// (0x00011017) bg_popup_sub_pane_cp25

0xeb3a,	// (0x00018d7c) popup_battery_window_g1_ParamLimits

0xeb3a,	// (0x00018d7c) popup_battery_window_g1

0xeb46,	// (0x00018d88) popup_battery_window_t1_ParamLimits

0xeb46,	// (0x00018d88) popup_battery_window_t1

0xeb58,	// (0x00018d9a) popup_battery_window_t2_ParamLimits

0xeb58,	// (0x00018d9a) popup_battery_window_t2

0x0001,

0xfd75,	// (0x00019fb7) popup_battery_window_t_ParamLimits

0xfd75,	// (0x00019fb7) popup_battery_window_t

0x14d7,	// (0x0000b719) midp_canvas_pane_ParamLimits

0x152c,	// (0x0000b76e) midp_keypad_pane_ParamLimits

0x152c,	// (0x0000b76e) midp_keypad_pane

0x894d,	// (0x00012b8f) main_midp_pane_ParamLimits

0xb0bc,	// (0x000152fe) signal_pane_g2_cp_ParamLimits

0x34e1,	// (0x0000d723) aid_size_cell_midp_keypad_ParamLimits

0x34e1,	// (0x0000d723) aid_size_cell_midp_keypad

0x34ff,	// (0x0000d741) midp_keyp_game_grid_pane_ParamLimits

0x34ff,	// (0x0000d741) midp_keyp_game_grid_pane

0x351e,	// (0x0000d760) midp_keyp_rocker_pane_ParamLimits

0x351e,	// (0x0000d760) midp_keyp_rocker_pane

0x355f,	// (0x0000d7a1) midp_keyp_sk_left_pane_ParamLimits

0x355f,	// (0x0000d7a1) midp_keyp_sk_left_pane

0x35b1,	// (0x0000d7f3) midp_keyp_sk_right_pane_ParamLimits

0x35b1,	// (0x0000d7f3) midp_keyp_sk_right_pane

0x695d,	// (0x00010b9f) bg_button_pane_cp03

0x35fd,	// (0x0000d83f) midp_keyp_sk_left_pane_g1

0x695d,	// (0x00010b9f) bg_button_pane_cp04

0x35fd,	// (0x0000d83f) midp_keyp_sk_right_pane_g1

0xb572,	// (0x000157b4) midp_keyp_rocker_pane_g1

0x3606,	// (0x0000d848) keyp_game_cell_pane_ParamLimits

0x3606,	// (0x0000d848) keyp_game_cell_pane

0x695d,	// (0x00010b9f) bg_button_pane_cp02

0x3628,	// (0x0000d86a) keyp_game_cell_pane_g1

0xd8cf,	// (0x00017b11) popup_fep_vkb2_window_ParamLimits

0xd8cf,	// (0x00017b11) popup_fep_vkb2_window

0xe37e,	// (0x000185c0) aid_size_cell_vkb2_ParamLimits

0xe37e,	// (0x000185c0) aid_size_cell_vkb2

0xe3b4,	// (0x000185f6) popup_fep_vkb2_window_g1_ParamLimits

0xe3b4,	// (0x000185f6) popup_fep_vkb2_window_g1

0xe404,	// (0x00018646) vkb2_area_bottom_pane_ParamLimits

0xe404,	// (0x00018646) vkb2_area_bottom_pane

0xe442,	// (0x00018684) vkb2_area_keypad_pane_ParamLimits

0xe442,	// (0x00018684) vkb2_area_keypad_pane

0xe480,	// (0x000186c2) vkb2_area_top_pane_ParamLimits

0xe480,	// (0x000186c2) vkb2_area_top_pane

0xe4fc,	// (0x0001873e) vkb2_top_entry_pane_ParamLimits

0xe4fc,	// (0x0001873e) vkb2_top_entry_pane

0xe529,	// (0x0001876b) vkb2_top_grid_left_pane_ParamLimits

0xe529,	// (0x0001876b) vkb2_top_grid_left_pane

0xe549,	// (0x0001878b) vkb2_top_grid_right_pane_ParamLimits

0xe549,	// (0x0001878b) vkb2_top_grid_right_pane

0x615d,	// (0x0001039f) vkb2_cell_keypad_pane_ParamLimits

0x615d,	// (0x0001039f) vkb2_cell_keypad_pane

0xe58f,	// (0x000187d1) vkb2_area_bottom_grid_pane_ParamLimits

0xe58f,	// (0x000187d1) vkb2_area_bottom_grid_pane

0xe5b5,	// (0x000187f7) vkb2_area_bottom_pane_g1_ParamLimits

0xe5b5,	// (0x000187f7) vkb2_area_bottom_pane_g1

0xe5db,	// (0x0001881d) vkb2_area_bottom_pane_g2_ParamLimits

0xe5db,	// (0x0001881d) vkb2_area_bottom_pane_g2

0xe60c,	// (0x0001884e) vkb2_area_bottom_pane_g3_ParamLimits

0xe60c,	// (0x0001884e) vkb2_area_bottom_pane_g3

0x0002,

0xfd7a,	// (0x00019fbc) vkb2_area_bottom_pane_g_ParamLimits

0xfd7a,	// (0x00019fbc) vkb2_area_bottom_pane_g

0x62d5,	// (0x00010517) vkb2_top_cell_left_pane_ParamLimits

0x62d5,	// (0x00010517) vkb2_top_cell_left_pane

0x3915,	// (0x0000db57) vkb2_top_entry_pane_g1_ParamLimits

0x3915,	// (0x0000db57) vkb2_top_entry_pane_g1

0x3923,	// (0x0000db65) vkb2_top_entry_pane_t1_ParamLimits

0x3923,	// (0x0000db65) vkb2_top_entry_pane_t1

0xeb7d,	// (0x00018dbf) vkb2_top_entry_pane_t2_ParamLimits

0xeb7d,	// (0x00018dbf) vkb2_top_entry_pane_t2

0xebaf,	// (0x00018df1) vkb2_top_entry_pane_t3_ParamLimits

0xebaf,	// (0x00018df1) vkb2_top_entry_pane_t3

0x0002,

0xfd81,	// (0x00019fc3) vkb2_top_entry_pane_t_ParamLimits

0xfd81,	// (0x00019fc3) vkb2_top_entry_pane_t

0xe662,	// (0x000188a4) vkb2_top_grid_right_pane_g1_ParamLimits

0xe662,	// (0x000188a4) vkb2_top_grid_right_pane_g1

0x6338,	// (0x0001057a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6338,	// (0x0001057a) vkb2_top_grid_right_pane_g2

0x6350,	// (0x00010592) vkb2_top_grid_right_pane_g3_ParamLimits

0x6350,	// (0x00010592) vkb2_top_grid_right_pane_g3

0xe678,	// (0x000188ba) vkb2_top_grid_right_pane_g4_ParamLimits

0xe678,	// (0x000188ba) vkb2_top_grid_right_pane_g4

0x0003,

0xfd88,	// (0x00019fca) vkb2_top_grid_right_pane_g_ParamLimits

0xfd88,	// (0x00019fca) vkb2_top_grid_right_pane_g

0x637e,	// (0x000105c0) vkb2_top_cell_left_pane_g1

0x6395,	// (0x000105d7) vkb2_cell_keypad_pane_g1_ParamLimits

0x6395,	// (0x000105d7) vkb2_cell_keypad_pane_g1

0xebc5,	// (0x00018e07) vkb2_cell_keypad_pane_t1_ParamLimits

0xebc5,	// (0x00018e07) vkb2_cell_keypad_pane_t1

0x63a3,	// (0x000105e5) vkb2_cell_bottom_grid_pane_ParamLimits

0x63a3,	// (0x000105e5) vkb2_cell_bottom_grid_pane

0x63dc,	// (0x0001061e) vkb2_cell_bottom_grid_pane_g1

0x3314,	// (0x0000d556) aid_call2_pane_cp02

0x331c,	// (0x0000d55e) aid_call_pane_cp02

0x3324,	// (0x0000d566) clock_digital_number_pane_cp10

0x332c,	// (0x0000d56e) clock_digital_number_pane_cp11

0x3334,	// (0x0000d576) clock_digital_number_pane_cp12

0x333c,	// (0x0000d57e) clock_digital_number_pane_cp13

0x3344,	// (0x0000d586) clock_digital_separator_pane_cp10

0x7ff9,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g1

0x7ff9,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g2

0x334c,	// (0x0000d58e) popup_clock_digital_analogue_window_cp2_g3

0x7ff9,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g4

0x334c,	// (0x0000d58e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3d,	// (0x00019f7f) popup_clock_digital_analogue_window_cp2_g

0x3354,	// (0x0000d596) popup_clock_digital_analogue_window_cp2_t1

0x3362,	// (0x0000d5a4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd48,	// (0x00019f8a) popup_clock_digital_analogue_window_cp2_t

0xb572,	// (0x000157b4) clock_digital_number_pane_cp10_g1

0xb572,	// (0x000157b4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2b,	// (0x00019d6d) clock_digital_number_pane_cp10_g

0xb572,	// (0x000157b4) clock_digital_separator_pane_cp10_g1

0xb572,	// (0x000157b4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2b,	// (0x00019d6d) clock_digital_separator_pane_cp10_g

0xe9a2,	// (0x00018be4) uniindi_top_pane_g3

0xe9b3,	// (0x00018bf5) uniindi_top_pane_g4

0x61c8,	// (0x0001040a) vkb2_row_keypad_pane_ParamLimits

0x61c8,	// (0x0001040a) vkb2_row_keypad_pane

0x63f8,	// (0x0001063a) vkb2_cell_t_keypad_pane_ParamLimits

0x63f8,	// (0x0001063a) vkb2_cell_t_keypad_pane

0x6405,	// (0x00010647) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6405,	// (0x00010647) vkb2_cell_t_keypad_pane_cp08

0x6415,	// (0x00010657) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6415,	// (0x00010657) vkb2_cell_t_keypad_pane_cp09

0x6426,	// (0x00010668) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6426,	// (0x00010668) vkb2_cell_t_keypad_pane_cp01

0x6436,	// (0x00010678) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6436,	// (0x00010678) vkb2_cell_t_keypad_pane_cp02

0x6446,	// (0x00010688) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6446,	// (0x00010688) vkb2_cell_t_keypad_pane_cp03

0x6456,	// (0x00010698) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6456,	// (0x00010698) vkb2_cell_t_keypad_pane_cp04

0x6466,	// (0x000106a8) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6466,	// (0x000106a8) vkb2_cell_t_keypad_pane_cp05

0x6476,	// (0x000106b8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6476,	// (0x000106b8) vkb2_cell_t_keypad_pane_cp06

0x6486,	// (0x000106c8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6486,	// (0x000106c8) vkb2_cell_t_keypad_pane_cp07

0x6496,	// (0x000106d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6496,	// (0x000106d8) vkb2_cell_t_keypad_pane_cp10

0x5cb6,	// (0x0000fef8) vkb2_cell_t_keypad_pane_g1

0xebdc,	// (0x00018e1e) vkb2_cell_t_keypad_pane_t1

0x489f,	// (0x0000eae1) popup_grid_graphic2_window

0x3988,	// (0x0000dbca) aid_size_cell_graphic2_ParamLimits

0x3988,	// (0x0000dbca) aid_size_cell_graphic2

0x39c6,	// (0x0000dc08) bg_popup_window_pane_cp21_ParamLimits

0x39c6,	// (0x0000dc08) bg_popup_window_pane_cp21

0x39d4,	// (0x0000dc16) graphic2_pages_pane_ParamLimits

0x39d4,	// (0x0000dc16) graphic2_pages_pane

0x3a1d,	// (0x0000dc5f) grid_graphic2_control_pane_ParamLimits

0x3a1d,	// (0x0000dc5f) grid_graphic2_control_pane

0x3a5b,	// (0x0000dc9d) grid_graphic2_pane_ParamLimits

0x3a5b,	// (0x0000dc9d) grid_graphic2_pane

0x3aca,	// (0x0000dd0c) cell_graphic2_pane

0x489f,	// (0x0000eae1) main_comp_mode_pane

0xc96c,	// (0x00016bae) list_ai3_gene_pane_ParamLimits

0x3000,	// (0x0000d242) bg_popup_window_pane_cp19_ParamLimits

0xcd39,	// (0x00016f7b) bg_touch_area_indi_pane_ParamLimits

0xcd39,	// (0x00016f7b) bg_touch_area_indi_pane

0xcd4f,	// (0x00016f91) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd4f,	// (0x00016f91) bg_touch_area_indi_pane_cp01

0xcd65,	// (0x00016fa7) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd65,	// (0x00016fa7) bg_touch_area_indi_pane_cp02

0xcd7b,	// (0x00016fbd) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd7b,	// (0x00016fbd) bg_touch_area_indi_pane_cp03

0xcd91,	// (0x00016fd3) popup_slider_window_g1_ParamLimits

0xcdad,	// (0x00016fef) popup_slider_window_g2_ParamLimits

0xcdc9,	// (0x0001700b) popup_slider_window_g3_ParamLimits

0xfcd2,	// (0x00019f14) popup_slider_window_g_ParamLimits

0xce25,	// (0x00017067) popup_slider_window_t1_ParamLimits

0xce97,	// (0x000170d9) small_volume_slider_vertical_pane_ParamLimits

0x3aca,	// (0x0000dd0c) cell_graphic2_pane_ParamLimits

0x3b15,	// (0x0000dd57) bg_button_pane_cp10_ParamLimits

0x3b15,	// (0x0000dd57) bg_button_pane_cp10

0x3b26,	// (0x0000dd68) bg_button_pane_cp11_ParamLimits

0x3b26,	// (0x0000dd68) bg_button_pane_cp11

0x3b37,	// (0x0000dd79) graphic2_pages_pane_g1_ParamLimits

0x3b37,	// (0x0000dd79) graphic2_pages_pane_g1

0x3b52,	// (0x0000dd94) graphic2_pages_pane_g2_ParamLimits

0x3b52,	// (0x0000dd94) graphic2_pages_pane_g2

0x0001,

0xfd96,	// (0x00019fd8) graphic2_pages_pane_g_ParamLimits

0xfd96,	// (0x00019fd8) graphic2_pages_pane_g

0x3b6a,	// (0x0000ddac) graphic2_pages_pane_t1_ParamLimits

0x3b6a,	// (0x0000ddac) graphic2_pages_pane_t1

0x3b82,	// (0x0000ddc4) cell_graphic2_control_pane_ParamLimits

0x3b82,	// (0x0000ddc4) cell_graphic2_control_pane

0x3bac,	// (0x0000ddee) cell_graphic2_pane_g1_ParamLimits

0x3bac,	// (0x0000ddee) cell_graphic2_pane_g1

0xebee,	// (0x00018e30) cell_graphic2_pane_g2_ParamLimits

0xebee,	// (0x00018e30) cell_graphic2_pane_g2

0x3bb9,	// (0x0000ddfb) cell_graphic2_pane_g3_ParamLimits

0x3bb9,	// (0x0000ddfb) cell_graphic2_pane_g3

0xebfb,	// (0x00018e3d) cell_graphic2_pane_g4_ParamLimits

0xebfb,	// (0x00018e3d) cell_graphic2_pane_g4

0x3bc6,	// (0x0000de08) cell_graphic2_pane_g5_ParamLimits

0x3bc6,	// (0x0000de08) cell_graphic2_pane_g5

0x0004,

0xfd9b,	// (0x00019fdd) cell_graphic2_pane_g_ParamLimits

0xfd9b,	// (0x00019fdd) cell_graphic2_pane_g

0x3be6,	// (0x0000de28) cell_graphic2_pane_t1_ParamLimits

0x3be6,	// (0x0000de28) cell_graphic2_pane_t1

0x9b18,	// (0x00013d5a) grid_highlight_pane_cp11_ParamLimits

0x9b18,	// (0x00013d5a) grid_highlight_pane_cp11

0x6dd5,	// (0x00011017) bg_button_pane_cp05

0x3c1b,	// (0x0000de5d) cell_graphic2_control_pane_g1

0xb572,	// (0x000157b4) bg_touch_area_indi_pane_g1

0xec08,	// (0x00018e4a) aid_cmod_rocker_key_size

0xec12,	// (0x00018e54) aid_cmode_itu_key_size

0xec1c,	// (0x00018e5e) main_cmode_video_pane

0xec24,	// (0x00018e66) main_comp_mode_itu_pane

0xec2e,	// (0x00018e70) main_comp_mode_rocker_pane

0xec36,	// (0x00018e78) cell_cmode_rocker_pane_ParamLimits

0xec36,	// (0x00018e78) cell_cmode_rocker_pane

0xec48,	// (0x00018e8a) cell_cmode_itu_pane_ParamLimits

0xec48,	// (0x00018e8a) cell_cmode_itu_pane

0x783e,	// (0x00011a80) bg_button_pane_cp06_ParamLimits

0x783e,	// (0x00011a80) bg_button_pane_cp06

0xb7aa,	// (0x000159ec) cell_cmode_rocker_pane_g1_ParamLimits

0xb7aa,	// (0x000159ec) cell_cmode_rocker_pane_g1

0xe8b5,	// (0x00018af7) cell_cmode_rocker_pane_g2_ParamLimits

0xe8b5,	// (0x00018af7) cell_cmode_rocker_pane_g2

0x0001,

0xfdab,	// (0x00019fed) cell_cmode_rocker_pane_g_ParamLimits

0xfdab,	// (0x00019fed) cell_cmode_rocker_pane_g

0x695d,	// (0x00010b9f) bg_button_pane_cp07

0xec5d,	// (0x00018e9f) cell_cmode_itu_pane_g1

0xec66,	// (0x00018ea8) cell_cmode_itu_pane_t1

0xec74,	// (0x00018eb6) cell_cmode_itu_pane_t2

0x0001,

0xfdb0,	// (0x00019ff2) cell_cmode_itu_pane_t

0xea24,	// (0x00018c66) aid_touch_ctrl_left

0xea2c,	// (0x00018c6e) aid_touch_ctrl_right

0x695d,	// (0x00010b9f) compa_mode_pane

0x3c43,	// (0x0000de85) aid_cmod_rocker_key_size_cp

0x3c4d,	// (0x0000de8f) aid_cmode_itu_key_size_cp

0xec82,	// (0x00018ec4) compa_mode_pane_g1

0xec8a,	// (0x00018ecc) compa_mode_pane_g2

0xec92,	// (0x00018ed4) compa_mode_pane_g3

0x0002,

0xfdb5,	// (0x00019ff7) compa_mode_pane_g

0x3c57,	// (0x0000de99) main_comp_mode_itu_pane_cp

0x3c61,	// (0x0000dea3) main_comp_mode_rocker_pane_cp

0x3c6b,	// (0x0000dead) cell_cmode_itu_pane_cp_ParamLimits

0x3c6b,	// (0x0000dead) cell_cmode_itu_pane_cp

0x3c80,	// (0x0000dec2) cell_cmode_rocker_pane_cp_ParamLimits

0x3c80,	// (0x0000dec2) cell_cmode_rocker_pane_cp

0x783e,	// (0x00011a80) bg_button_pane_cp06_cp_ParamLimits

0x783e,	// (0x00011a80) bg_button_pane_cp06_cp

0xb7aa,	// (0x000159ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb7aa,	// (0x000159ec) cell_cmode_rocker_pane_g1_cp

0xb572,	// (0x000157b4) cell_cmode_rocker_pane_g2_cp

0x695d,	// (0x00010b9f) bg_button_pane_cp07_cp

0x3c92,	// (0x0000ded4) cell_cmode_itu_pane_g1_cp

0x3c9b,	// (0x0000dedd) cell_cmode_itu_pane_t1_cp

0x3ca9,	// (0x0000deeb) cell_cmode_itu_pane_t2_cp

0x25c9,	// (0x0000c80b) settings_code_pane_cp2

0x6b2e,	// (0x00010d70) bg_popup_window_pane_cp3_ParamLimits

0x6fd3,	// (0x00011215) heading_pane_cp3_ParamLimits

0x6fdf,	// (0x00011221) listscroll_popup_graphic_pane_ParamLimits

0x5a71,	// (0x0000fcb3) fep_hwr_aid_pane_ParamLimits

0x5ed1,	// (0x00010113) aid_touch_sctrl_top_ParamLimits

0x5eec,	// (0x0001012e) sctrl_sk_top_pane_g1_ParamLimits

0x5cb6,	// (0x0000fef8) sctrl_sk_top_pane_g2_ParamLimits

0xfceb,	// (0x00019f2d) sctrl_sk_top_pane_g_ParamLimits

0x5ef9,	// (0x0001013b) sctrl_sk_top_pane_t1_ParamLimits

0x5ed1,	// (0x00010113) aid_touch_sctrl_bottom_ParamLimits

0x5ef9,	// (0x0001013b) sctrl_sk_bottom_pane_t1_ParamLimits

0xe96e,	// (0x00018bb0) aid_area_touch_clock

0xe4be,	// (0x00018700) aid_vkb2_area_top_pane_cell_ParamLimits

0xe4be,	// (0x00018700) aid_vkb2_area_top_pane_cell

0xe569,	// (0x000187ab) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe569,	// (0x000187ab) aid_vkb2_area_bottom_pane_cell

0xeb75,	// (0x00018db7) popup_char_count_window

0xec9a,	// (0x00018edc) popup_char_count_window_g1

0xeca3,	// (0x00018ee5) popup_char_count_window_g2

0xecac,	// (0x00018eee) popup_char_count_window_g3

0x0002,

0xfdbc,	// (0x00019ffe) popup_char_count_window_g

0xecb5,	// (0x00018ef7) popup_char_count_window_t1

0x5fad,	// (0x000101ef) popup_fep_char_preview_window_ParamLimits

0x5fad,	// (0x000101ef) popup_fep_char_preview_window

0xe4de,	// (0x00018720) vkb2_top_candi_pane_ParamLimits

0xe4de,	// (0x00018720) vkb2_top_candi_pane

0x3cb7,	// (0x0000def9) cell_vkb2_top_candi_pane_ParamLimits

0x3cb7,	// (0x0000def9) cell_vkb2_top_candi_pane

0x64ab,	// (0x000106ed) bg_popup_fep_char_preview_window_ParamLimits

0x64ab,	// (0x000106ed) bg_popup_fep_char_preview_window

0x64b9,	// (0x000106fb) popup_fep_char_preview_window_t1_ParamLimits

0x64b9,	// (0x000106fb) popup_fep_char_preview_window_t1

0xecc3,	// (0x00018f05) bg_popup_fep_char_preview_window_g1

0xeccb,	// (0x00018f0d) bg_popup_fep_char_preview_window_g2

0xecd3,	// (0x00018f15) bg_popup_fep_char_preview_window_g3

0xecdb,	// (0x00018f1d) bg_popup_fep_char_preview_window_g4

0xece3,	// (0x00018f25) bg_popup_fep_char_preview_window_g5

0x64f3,	// (0x00010735) bg_popup_fep_char_preview_window_g6

0xeceb,	// (0x00018f2d) bg_popup_fep_char_preview_window_g7

0xecf3,	// (0x00018f35) bg_popup_fep_char_preview_window_g8

0xecfb,	// (0x00018f3d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc3,	// (0x0001a005) bg_popup_fep_char_preview_window_g

0x5cb6,	// (0x0000fef8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5cb6,	// (0x0000fef8) cell_vkb2_top_candi_pane_g1

0x5cc4,	// (0x0000ff06) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5cc4,	// (0x0000ff06) cell_vkb2_top_candi_pane_g2

0xe882,	// (0x00018ac4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe882,	// (0x00018ac4) cell_vkb2_top_candi_pane_g3

0x64fb,	// (0x0001073d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x64fb,	// (0x0001073d) cell_vkb2_top_candi_pane_g4

0xbc39,	// (0x00015e7b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbc39,	// (0x00015e7b) cell_vkb2_top_candi_pane_g5

0x651c,	// (0x0001075e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x651c,	// (0x0001075e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd6,	// (0x0001a018) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd6,	// (0x0001a018) cell_vkb2_top_candi_pane_g

0x652a,	// (0x0001076c) cell_vkb2_top_candi_pane_t1

0x5889,	// (0x0000facb) aid_size_touch_slider_mark_ParamLimits

0x5889,	// (0x0000facb) aid_size_touch_slider_mark

0x3a08,	// (0x0000dc4a) grid_graphic2_catg_pane_ParamLimits

0x3a08,	// (0x0000dc4a) grid_graphic2_catg_pane

0x3a9f,	// (0x0000dce1) popup_grid_graphic2_window_t1_ParamLimits

0x3a9f,	// (0x0000dce1) popup_grid_graphic2_window_t1

0x3ab4,	// (0x0000dcf6) popup_grid_graphic2_window_t2_ParamLimits

0x3ab4,	// (0x0000dcf6) popup_grid_graphic2_window_t2

0x0001,

0xfd91,	// (0x00019fd3) popup_grid_graphic2_window_t_ParamLimits

0xfd91,	// (0x00019fd3) popup_grid_graphic2_window_t

0x6dd5,	// (0x00011017) bg_button_pane_cp05_ParamLimits

0x3c1b,	// (0x0000de5d) cell_graphic2_control_pane_g1_ParamLimits

0xe9ea,	// (0x00018c2c) cell_graphic2_catg_pane_ParamLimits

0xe9ea,	// (0x00018c2c) cell_graphic2_catg_pane

0x695d,	// (0x00010b9f) bg_button_pane_cp12

0x3d01,	// (0x0000df43) cell_graphic2_catg_pane_g1

0xe93a,	// (0x00018b7c) cell_tb_ext_pane_t1_ParamLimits

0x62f5,	// (0x00010537) vkb2_top_cell_right_narrow_pane_ParamLimits

0x62f5,	// (0x00010537) vkb2_top_cell_right_narrow_pane

0x630d,	// (0x0001054f) vkb2_top_cell_right_wide_pane_ParamLimits

0x630d,	// (0x0001054f) vkb2_top_cell_right_wide_pane

0x5a63,	// (0x0000fca5) bg_vkb2_func_pane_ParamLimits

0x5a63,	// (0x0000fca5) bg_vkb2_func_pane

0x637e,	// (0x000105c0) vkb2_top_cell_left_pane_g1_ParamLimits

0x5a63,	// (0x0000fca5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5a63,	// (0x0000fca5) bg_vkb2_fuc_pane_cp03

0x63dc,	// (0x0001061e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e1e,	// (0x00013060) bg_vkb2_func_pane_g1

0x8e26,	// (0x00013068) bg_vkb2_func_pane_g2

0x8e36,	// (0x00013078) bg_vkb2_func_pane_g3

0x8e2e,	// (0x00013070) bg_vkb2_func_pane_g4

0x8e3e,	// (0x00013080) bg_vkb2_func_pane_g5

0x8e46,	// (0x00013088) bg_vkb2_func_pane_g6

0x8e4e,	// (0x00013090) bg_vkb2_func_pane_g7

0x8e56,	// (0x00013098) bg_vkb2_func_pane_g8

0x8e16,	// (0x00013058) bg_vkb2_func_pane_g9

0x0008,

0xfde3,	// (0x0001a025) bg_vkb2_func_pane_g

0x5a63,	// (0x0000fca5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5a63,	// (0x0000fca5) bg_vkb2_fuc_pane_cp01

0x637e,	// (0x000105c0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x637e,	// (0x000105c0) vkb2_top_cell_right_wide_pane_g1

0x5a63,	// (0x0000fca5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5a63,	// (0x0000fca5) bg_vkb2_fuc_pane_cp02

0x63dc,	// (0x0001061e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x63dc,	// (0x0001061e) vkb2_top_cell_right_narrow_pane_g1

0x2f4e,	// (0x0000d190) aid_touch_area_decrease_ParamLimits

0x2f4e,	// (0x0000d190) aid_touch_area_decrease

0x2f7c,	// (0x0000d1be) aid_touch_area_increase_ParamLimits

0x2f7c,	// (0x0000d1be) aid_touch_area_increase

0x2fa4,	// (0x0000d1e6) aid_touch_area_mute_ParamLimits

0x2fa4,	// (0x0000d1e6) aid_touch_area_mute

0x2fcc,	// (0x0000d20e) aid_touch_area_slider_ParamLimits

0x2fcc,	// (0x0000d20e) aid_touch_area_slider

0x300c,	// (0x0000d24e) popup_slider_window_g4_ParamLimits

0x300c,	// (0x0000d24e) popup_slider_window_g4

0x3034,	// (0x0000d276) popup_slider_window_g5_ParamLimits

0x3034,	// (0x0000d276) popup_slider_window_g5

0x3068,	// (0x0000d2aa) popup_slider_window_g6_ParamLimits

0x3068,	// (0x0000d2aa) popup_slider_window_g6

0xce51,	// (0x00017093) popup_slider_window_t2_ParamLimits

0xce51,	// (0x00017093) popup_slider_window_t2

0x0001,

0xfcdf,	// (0x00019f21) popup_slider_window_t_ParamLimits

0xfcdf,	// (0x00019f21) popup_slider_window_t

0x3084,	// (0x0000d2c6) slider_pane_ParamLimits

0x3084,	// (0x0000d2c6) slider_pane

0xed03,	// (0x00018f45) slider_pane_g1_ParamLimits

0xed03,	// (0x00018f45) slider_pane_g1

0xed17,	// (0x00018f59) slider_pane_g2_ParamLimits

0xed17,	// (0x00018f59) slider_pane_g2

0xed2d,	// (0x00018f6f) slider_pane_g3_ParamLimits

0xed2d,	// (0x00018f6f) slider_pane_g3

0x0003,

0xfdf6,	// (0x0001a038) slider_pane_g_ParamLimits

0xfdf6,	// (0x0001a038) slider_pane_g

0xe08f,	// (0x000182d1) popup_tb_float_extension_window_ParamLimits

0xe08f,	// (0x000182d1) popup_tb_float_extension_window

0xed59,	// (0x00018f9b) aid_size_cell_tb_float_ext

0x695d,	// (0x00010b9f) bg_popup_sub_window_cp28

0xed64,	// (0x00018fa6) grid_tb_float_ext_pane

0xed6c,	// (0x00018fae) cell_tb_float_ext_pane_ParamLimits

0xed6c,	// (0x00018fae) cell_tb_float_ext_pane

0xed84,	// (0x00018fc6) cell_tb_float_ext_pane_g1

0xed8d,	// (0x00018fcf) grid_highlight_pane_cp12

0xe2f4,	// (0x00018536) cell_last_hwr_side_pane_ParamLimits

0xe2f4,	// (0x00018536) cell_last_hwr_side_pane

0xb572,	// (0x000157b4) cell_last_hwr_side_pane_g1

0xed96,	// (0x00018fd8) cell_last_hwr_side_pane_g2

0x0001,

0xfdff,	// (0x0001a041) cell_last_hwr_side_pane_g

0xe63d,	// (0x0001887f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe63d,	// (0x0001887f) vkb2_area_bottom_space_btn_pane

0x5cb6,	// (0x0000fef8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xebdc,	// (0x00018e1e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x652a,	// (0x0001076c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6540,	// (0x00010782) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6540,	// (0x00010782) vkb2_area_bottom_space_btn_pane_g1

0x6576,	// (0x000107b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6576,	// (0x000107b8) vkb2_area_bottom_space_btn_pane_g2

0x65ac,	// (0x000107ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x65ac,	// (0x000107ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe04,	// (0x0001a046) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe04,	// (0x0001a046) vkb2_area_bottom_space_btn_pane_g

0x5b20,	// (0x0000fd62) cel_fep_hwr_func_pane_ParamLimits

0x5b20,	// (0x0000fd62) cel_fep_hwr_func_pane

0xe2c9,	// (0x0001850b) cell_hwr_side_button_pane_ParamLimits

0xe2c9,	// (0x0001850b) cell_hwr_side_button_pane

0xe96e,	// (0x00018bb0) aid_area_touch_clock_ParamLimits

0x6dd5,	// (0x00011017) bg_uniindi_top_pane_ParamLimits

0xe980,	// (0x00018bc2) uniindi_top_pane_g1_ParamLimits

0xe996,	// (0x00018bd8) uniindi_top_pane_g2_ParamLimits

0xe9a2,	// (0x00018be4) uniindi_top_pane_g3_ParamLimits

0xe9b3,	// (0x00018bf5) uniindi_top_pane_g4_ParamLimits

0xfd17,	// (0x00019f59) uniindi_top_pane_g_ParamLimits

0xe9c0,	// (0x00018c02) uniindi_top_pane_t1_ParamLimits

0x6dd5,	// (0x00011017) bg_vkb2_func_pane_cp01_ParamLimits

0x6dd5,	// (0x00011017) bg_vkb2_func_pane_cp01

0xed9f,	// (0x00018fe1) cel_fep_hwr_func_pane_g1_ParamLimits

0xed9f,	// (0x00018fe1) cel_fep_hwr_func_pane_g1

0x6dd5,	// (0x00011017) bg_vkb2_func_pane_cp02_ParamLimits

0x6dd5,	// (0x00011017) bg_vkb2_func_pane_cp02

0xed9f,	// (0x00018fe1) cell_hwr_side_button_pane_g1_ParamLimits

0xed9f,	// (0x00018fe1) cell_hwr_side_button_pane_g1

0x8caa,	// (0x00012eec) status_pane_g4_ParamLimits

0x8caa,	// (0x00012eec) status_pane_g4

0x8cc2,	// (0x00012f04) status_pane_t1

0xb354,	// (0x00015596) form2_midp_gauge_slider_cont_pane

0xb35c,	// (0x0001559e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x28ba,	// (0x0000cafc) form2_midp_gauge_slider_pane_t2_ParamLimits

0x28cc,	// (0x0000cb0e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfade,	// (0x00019d20) form2_midp_gauge_slider_pane_t_ParamLimits

0xb392,	// (0x000155d4) form2_midp_slider_pane_ParamLimits

0x5f6d,	// (0x000101af) aid_size_cell_func_vkb2_ParamLimits

0x5f6d,	// (0x000101af) aid_size_cell_func_vkb2

0xed45,	// (0x00018f87) slider_pane_g4_ParamLimits

0xed45,	// (0x00018f87) slider_pane_g4

0xe68e,	// (0x000188d0) form2_midp_gauge_slider_pane_t2_cp01

0xe69c,	// (0x000188de) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe69c,	// (0x000188de) form2_midp_gauge_slider_pane_t3_cp01

0x661d,	// (0x0001085f) form2_midp_slider_pane_cp01

0x695d,	// (0x00010b9f) navi_smil_pane

0xedcf,	// (0x00019011) navi_smil_pane_g1

0xedd7,	// (0x00019019) navi_smil_pane_t1

0xedad,	// (0x00018fef) form2_midp_slider_pane_g1

0xedb6,	// (0x00018ff8) form2_midp_slider_pane_g2

0xedbe,	// (0x00019000) form2_midp_slider_pane_g3

0xedad,	// (0x00018fef) form2_midp_slider_pane_g4

0x3d35,	// (0x0000df77) form2_midp_slider_pane_g5

0x0004,

0xfe0d,	// (0x0001a04f) form2_midp_slider_pane_g

0x65e2,	// (0x00010824) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x65e2,	// (0x00010824) vkb2_area_bottom_space_btn_pane_g4

0x1e42,	// (0x0000c084) lc0_navi_pane_ParamLimits

0x1e42,	// (0x0000c084) lc0_navi_pane

0x1eac,	// (0x0000c0ee) lc0_stat_indi_pane_ParamLimits

0x1eac,	// (0x0000c0ee) lc0_stat_indi_pane

0x1ec1,	// (0x0000c103) ls0_title_pane_ParamLimits

0x1ec1,	// (0x0000c103) ls0_title_pane

0x783e,	// (0x00011a80) bg_popup_sub_pane_cp14_ParamLimits

0xe955,	// (0x00018b97) list_uniindi_pane_ParamLimits

0xe961,	// (0x00018ba3) uniindi_top_pane_ParamLimits

0xe9fc,	// (0x00018c3e) list_single_uniindi_pane_g1_ParamLimits

0xea0f,	// (0x00018c51) list_single_uniindi_pane_t1_ParamLimits

0xe6b9,	// (0x000188fb) lc0_stat_clock_pane_ParamLimits

0xe6b9,	// (0x000188fb) lc0_stat_clock_pane

0x3d58,	// (0x0000df9a) lc0_stat_indi_pane_g1_ParamLimits

0x3d58,	// (0x0000df9a) lc0_stat_indi_pane_g1

0x3d4b,	// (0x0000df8d) lc0_stat_indi_pane_g2_ParamLimits

0x3d4b,	// (0x0000df8d) lc0_stat_indi_pane_g2

0x0001,

0xfe18,	// (0x0001a05a) lc0_stat_indi_pane_g_ParamLimits

0xfe18,	// (0x0001a05a) lc0_stat_indi_pane_g

0xe6c6,	// (0x00018908) lc0_uni_indicator_pane_ParamLimits

0xe6c6,	// (0x00018908) lc0_uni_indicator_pane

0xede5,	// (0x00019027) ls0_title_pane_g1_ParamLimits

0xede5,	// (0x00019027) ls0_title_pane_g1

0x3d72,	// (0x0000dfb4) ls0_title_pane_t1_ParamLimits

0x3d72,	// (0x0000dfb4) ls0_title_pane_t1

0xe6d3,	// (0x00018915) lc0_uni_indicator_pane_g1_ParamLimits

0xe6d3,	// (0x00018915) lc0_uni_indicator_pane_g1

0xedf9,	// (0x0001903b) lc0_stat_clock_pane_t1

0x489f,	// (0x0000eae1) main_ai5_pane

0xee07,	// (0x00019049) ai5_sk_pane_ParamLimits

0xee07,	// (0x00019049) ai5_sk_pane

0x3db5,	// (0x0000dff7) cell_ai5_widget_pane_ParamLimits

0x3db5,	// (0x0000dff7) cell_ai5_widget_pane

0xee14,	// (0x00019056) aid_size_cell_widget_grid

0xee21,	// (0x00019063) bg_ai5_widget_pane_ParamLimits

0xee21,	// (0x00019063) bg_ai5_widget_pane

0x3e42,	// (0x0000e084) cell_ai5_widget_pane_g2

0x3e56,	// (0x0000e098) cell_ai5_widget_pane_g3

0x3e70,	// (0x0000e0b2) cell_ai5_widget_pane_g4

0x3e80,	// (0x0000e0c2) cell_ai5_widget_pane_g5

0x3e90,	// (0x0000e0d2) cell_ai5_widget_pane_g6

0x3e9c,	// (0x0000e0de) cell_ai5_widget_pane_g7

0x3ee4,	// (0x0000e126) cell_ai5_widget_pane_t1_ParamLimits

0x3ee4,	// (0x0000e126) cell_ai5_widget_pane_t1

0x3f01,	// (0x0000e143) cell_ai5_widget_pane_t2_ParamLimits

0x3f01,	// (0x0000e143) cell_ai5_widget_pane_t2

0x3f19,	// (0x0000e15b) cell_ai5_widget_pane_t3_ParamLimits

0x3f19,	// (0x0000e15b) cell_ai5_widget_pane_t3

0x3f31,	// (0x0000e173) cell_ai5_widget_pane_t4_ParamLimits

0x3f31,	// (0x0000e173) cell_ai5_widget_pane_t4

0x3f57,	// (0x0000e199) cell_ai5_widget_pane_t5_ParamLimits

0x3f57,	// (0x0000e199) cell_ai5_widget_pane_t5

0xee59,	// (0x0001909b) cell_ai5_widget_pane_t6_ParamLimits

0xee59,	// (0x0001909b) cell_ai5_widget_pane_t6

0xee6b,	// (0x000190ad) cell_ai5_widget_pane_t7_ParamLimits

0xee6b,	// (0x000190ad) cell_ai5_widget_pane_t7

0x3f76,	// (0x0000e1b8) cell_ai5_widget_pane_t8_ParamLimits

0x3f76,	// (0x0000e1b8) cell_ai5_widget_pane_t8

0x0009,

0xfe32,	// (0x0001a074) cell_ai5_widget_pane_t_ParamLimits

0xfe32,	// (0x0001a074) cell_ai5_widget_pane_t

0x3fd5,	// (0x0000e217) grid_ai5_widget_pane

0x783e,	// (0x00011a80) highlight_cell_ai5_widget_pane_ParamLimits

0x783e,	// (0x00011a80) highlight_cell_ai5_widget_pane

0x3fe1,	// (0x0000e223) ai5_sk_left_pane

0x3feb,	// (0x0000e22d) ai5_sk_middle_pane

0x3ff5,	// (0x0000e237) ai5_sk_right_pane

0xee84,	// (0x000190c6) bg_ai5_widget_pane_g1_ParamLimits

0xee84,	// (0x000190c6) bg_ai5_widget_pane_g1

0xee90,	// (0x000190d2) bg_ai5_widget_pane_g2_ParamLimits

0xee90,	// (0x000190d2) bg_ai5_widget_pane_g2

0xee9c,	// (0x000190de) bg_ai5_widget_pane_g3_ParamLimits

0xee9c,	// (0x000190de) bg_ai5_widget_pane_g3

0xeea8,	// (0x000190ea) bg_ai5_widget_pane_g4_ParamLimits

0xeea8,	// (0x000190ea) bg_ai5_widget_pane_g4

0xeeb4,	// (0x000190f6) bg_ai5_widget_pane_g5_ParamLimits

0xeeb4,	// (0x000190f6) bg_ai5_widget_pane_g5

0xeec0,	// (0x00019102) bg_ai5_widget_pane_g6_ParamLimits

0xeec0,	// (0x00019102) bg_ai5_widget_pane_g6

0xeecc,	// (0x0001910e) bg_ai5_widget_pane_g7_ParamLimits

0xeecc,	// (0x0001910e) bg_ai5_widget_pane_g7

0xeed8,	// (0x0001911a) bg_ai5_widget_pane_g8_ParamLimits

0xeed8,	// (0x0001911a) bg_ai5_widget_pane_g8

0xeee4,	// (0x00019126) bg_ai5_widget_pane_g9_ParamLimits

0xeee4,	// (0x00019126) bg_ai5_widget_pane_g9

0x0008,

0xfe47,	// (0x0001a089) bg_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x0001a089) bg_ai5_widget_pane_g

0xef14,	// (0x00019156) cell_shortcut_ai5_widget_pane_ParamLimits

0xef14,	// (0x00019156) cell_shortcut_ai5_widget_pane

0xef25,	// (0x00019167) bg_cell_shortcut_ai5_widget_pane

0x6f8f,	// (0x000111d1) cell_grid_ai5_widget_pane_g1

0x85fe,	// (0x00012840) highlight_cell_shortcut_ai5_widget_pane

0x8e1e,	// (0x00013060) ai5_sk_left_pane_g1

0xef2d,	// (0x0001916f) ai5_sk_left_pane_g2

0xef35,	// (0x00019177) ai5_sk_left_pane_g3

0xef3d,	// (0x0001917f) ai5_sk_left_pane_g4

0x0003,

0xfe5a,	// (0x0001a09c) ai5_sk_left_pane_g

0xef45,	// (0x00019187) ai5_sk_left_pane_t1

0x8e26,	// (0x00013068) ai5_sk_right_pane_g1

0xef53,	// (0x00019195) ai5_sk_right_pane_g2

0xef5b,	// (0x0001919d) ai5_sk_right_pane_g3

0xef63,	// (0x000191a5) ai5_sk_right_pane_g4

0x0003,

0xfe63,	// (0x0001a0a5) ai5_sk_right_pane_g

0xef6b,	// (0x000191ad) ai5_sk_right_pane_t1

0x8e26,	// (0x00013068) ai5_sk_middle_pane_g1

0x8e1e,	// (0x00013060) ai5_sk_middle_pane_g2

0x8e3e,	// (0x00013080) ai5_sk_middle_pane_g3

0xef5b,	// (0x0001919d) ai5_sk_middle_pane_g4

0xef35,	// (0x00019177) ai5_sk_middle_pane_g5

0xef79,	// (0x000191bb) ai5_sk_middle_pane_g6

0x3fff,	// (0x0000e241) ai5_sk_middle_pane_g7

0x0006,

0xfe6c,	// (0x0001a0ae) ai5_sk_middle_pane_g

0x1d40,	// (0x0000bf82) aid_touch_area_size_lc0_ParamLimits

0x1d40,	// (0x0000bf82) aid_touch_area_size_lc0

0x5ce5,	// (0x0000ff27) cell_hwr_candidate_pane_t1_ParamLimits

0x89ad,	// (0x00012bef) aid_touch_navi_pane

0x1fad,	// (0x0000c1ef) status_dt_navi_pane_ParamLimits

0x1fad,	// (0x0000c1ef) status_dt_navi_pane

0x1fc5,	// (0x0000c207) status_dt_sta_pane_ParamLimits

0x1fc5,	// (0x0000c207) status_dt_sta_pane

0x4007,	// (0x0000e249) dt_sta_controll_pane

0x4014,	// (0x0000e256) dt_sta_indi_pane

0x4021,	// (0x0000e263) dt_sta_title_pane

0x6dd5,	// (0x00011017) bg_dt_sta_indi_pane_ParamLimits

0x6dd5,	// (0x00011017) bg_dt_sta_indi_pane

0x4033,	// (0x0000e275) dt_sta_battery_pane

0x403b,	// (0x0000e27d) dt_sta_indi_pane_g1

0x4044,	// (0x0000e286) dt_sta_indi_pane_g2

0x404d,	// (0x0000e28f) dt_sta_indi_pane_g3

0x0002,

0xfe7b,	// (0x0001a0bd) dt_sta_indi_pane_g

0x4056,	// (0x0000e298) dt_sta_signal_pane

0x783e,	// (0x00011a80) bg_dt_sta_title_pane_ParamLimits

0x783e,	// (0x00011a80) bg_dt_sta_title_pane

0x405f,	// (0x0000e2a1) dt_sta_title_pane_g1

0x4067,	// (0x0000e2a9) dt_sta_title_pane_t1_ParamLimits

0x4067,	// (0x0000e2a9) dt_sta_title_pane_t1

0x695d,	// (0x00010b9f) bg_dt_sta_control_pane

0x407c,	// (0x0000e2be) dt_sta_controll_pane_g1

0x4085,	// (0x0000e2c7) bg_dt_sta_title_pane_g1

0x408e,	// (0x0000e2d0) bg_dt_sta_title_pane_g2

0x4097,	// (0x0000e2d9) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0001a0c4) bg_dt_sta_title_pane_g

0xb572,	// (0x000157b4) bg_dt_sta_indi_pane_g1

0x40a0,	// (0x0000e2e2) dt_sta_signal_pane_g1

0x40a8,	// (0x0000e2ea) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x0001a0cb) dt_sta_signal_pane_g

0xef81,	// (0x000191c3) dt_sta_battery_pane_g1

0xef8a,	// (0x000191cc) dt_sta_battery_pane_t1

0xb572,	// (0x000157b4) bg_dt_sta_control_pane_g1

0x80f3,	// (0x00012335) fep_china_uni_eep_pane

0x80fb,	// (0x0001233d) fep_china_uni_entry_pane_ParamLimits

0x810b,	// (0x0001234d) popup_fep_china_uni_window_g1_ParamLimits

0x811b,	// (0x0001235d) popup_fep_china_uni_window_g2_ParamLimits

0x811b,	// (0x0001235d) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00019950) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00019950) popup_fep_china_uni_window_g

0xef99,	// (0x000191db) fep_china_uni_eep_pane_g1

0xefa1,	// (0x000191e3) fep_china_uni_eep_pane_t1

0xedc6,	// (0x00019008) aid_touch_area_size_smil_player

0x8ae4,	// (0x00012d26) lc0_clock_pane

0x8cb6,	// (0x00012ef8) status_pane_g5_ParamLimits

0x8cb6,	// (0x00012ef8) status_pane_g5

0xdcc3,	// (0x00017f05) popup_keymap_window

0x8c7e,	// (0x00012ec0) status_icon_pane

0x3e56,	// (0x0000e098) cell_ai5_widget_pane_g3_ParamLimits

0x3e70,	// (0x0000e0b2) cell_ai5_widget_pane_g4_ParamLimits

0x3e80,	// (0x0000e0c2) cell_ai5_widget_pane_g5_ParamLimits

0x3ea8,	// (0x0000e0ea) cell_ai5_widget_pane_g8_ParamLimits

0x3ea8,	// (0x0000e0ea) cell_ai5_widget_pane_g8

0x3ebc,	// (0x0000e0fe) cell_ai5_widget_pane_g9_ParamLimits

0x3ebc,	// (0x0000e0fe) cell_ai5_widget_pane_g9

0x3ed0,	// (0x0000e112) cell_ai5_widget_pane_g10_ParamLimits

0x3ed0,	// (0x0000e112) cell_ai5_widget_pane_g10

0xefb0,	// (0x000191f2) status_icon_pane_g1

0x695d,	// (0x00010b9f) bg_popup_sub_pane_cp13

0xefb8,	// (0x000191fa) popup_keymap_window_t1

0x163e,	// (0x0000b880) control_pane_g6_ParamLimits

0x163e,	// (0x0000b880) control_pane_g6

0x1631,	// (0x0000b873) control_pane_g7_ParamLimits

0x1631,	// (0x0000b873) control_pane_g7

0x1624,	// (0x0000b866) control_pane_g8_ParamLimits

0x1624,	// (0x0000b866) control_pane_g8

0x4007,	// (0x0000e249) dt_sta_controll_pane_ParamLimits

0x4014,	// (0x0000e256) dt_sta_indi_pane_ParamLimits

0x4021,	// (0x0000e263) dt_sta_title_pane_ParamLimits

0x725a,	// (0x0001149c) aid_size_touch_scroll_bar_cale

0x4976,	// (0x0000ebb8) popup_discreet_window_ParamLimits

0x4976,	// (0x0000ebb8) popup_discreet_window

0xd901,	// (0x00017b43) popup_sk_window

0x94fc,	// (0x0001373e) bg_popup_sub_pane_cp28_ParamLimits

0x94fc,	// (0x0001373e) bg_popup_sub_pane_cp28

0xefc6,	// (0x00019208) popup_discreet_window_g1_ParamLimits

0xefc6,	// (0x00019208) popup_discreet_window_g1

0xefe6,	// (0x00019228) popup_discreet_window_t1_ParamLimits

0xefe6,	// (0x00019228) popup_discreet_window_t1

0xf004,	// (0x00019246) popup_discreet_window_t2_ParamLimits

0xf004,	// (0x00019246) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x0001a0d0) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x0001a0d0) popup_discreet_window_t

0x6652,	// (0x00010894) popup_sk_window_g1

0x665b,	// (0x0001089d) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0001a0d7) popup_sk_window_g

0x6664,	// (0x000108a6) popup_sk_window_t1

0x6672,	// (0x000108b4) popup_sk_window_t1_copy1

0x3e42,	// (0x0000e084) cell_ai5_widget_pane_g2_ParamLimits

0x3f88,	// (0x0000e1ca) cell_ai5_widget_pane_t9_ParamLimits

0x3f88,	// (0x0000e1ca) cell_ai5_widget_pane_t9

0x695d,	// (0x00010b9f) main_fep_fshwr2_pane

0xe6e8,	// (0x0001892a) aid_fshwr2_btn_pane

0xe6f9,	// (0x0001893b) aid_fshwr2_syb_pane

0xe70a,	// (0x0001894c) aid_fshwr2_txt_pane

0xe716,	// (0x00018958) fshwr2_func_candi_pane

0xe730,	// (0x00018972) fshwr2_hwr_syb_pane

0xe745,	// (0x00018987) fshwr2_icf_pane

0x489f,	// (0x0000eae1) fshwr2_icf_bg_pane

0xe76b,	// (0x000189ad) fshwr2_icf_pane_t1_ParamLimits

0xe76b,	// (0x000189ad) fshwr2_icf_pane_t1

0x7ff9,	// (0x0001223b) fshwr2_func_candi_pane_g1

0x414a,	// (0x0000e38c) fshwr2_func_candi_row_pane_ParamLimits

0x414a,	// (0x0000e38c) fshwr2_func_candi_row_pane

0xe782,	// (0x000189c4) cell_fshwr2_syb_pane_ParamLimits

0xe782,	// (0x000189c4) cell_fshwr2_syb_pane

0x5cb6,	// (0x0000fef8) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5cb6,	// (0x0000fef8) fshwr2_hwr_syb_pane_g1

0x489f,	// (0x0000eae1) bg_popup_call_pane_cp01

0xe796,	// (0x000189d8) fshwr2_func_candi_cell_pane_ParamLimits

0xe796,	// (0x000189d8) fshwr2_func_candi_cell_pane

0x92ee,	// (0x00013530) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x92ee,	// (0x00013530) fshwr2_func_candi_cell_bg_pane

0xe7d5,	// (0x00018a17) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe7d5,	// (0x00018a17) fshwr2_func_candi_cell_pane_g1

0xe80c,	// (0x00018a4e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe80c,	// (0x00018a4e) fshwr2_func_candi_cell_pane_t1

0x489f,	// (0x0000eae1) bg_button_pane_cp08

0x85fe,	// (0x00012840) cell_fshwr2_syb_bg_pane

0xe827,	// (0x00018a69) cell_fshwr2_syb_bg_pane_g1

0xe82f,	// (0x00018a71) cell_fshwr2_syb_bg_pane_t1

0x783e,	// (0x00011a80) main_tmo_pane

0x23c6,	// (0x0000c608) uni_indicator_pane_g1_ParamLimits

0x23dc,	// (0x0000c61e) uni_indicator_pane_g2_ParamLimits

0x23f2,	// (0x0000c634) uni_indicator_pane_g3_ParamLimits

0x9fe5,	// (0x00014227) uni_indicator_pane_g4_ParamLimits

0x9fe5,	// (0x00014227) uni_indicator_pane_g4

0x9ff9,	// (0x0001423b) uni_indicator_pane_g5_ParamLimits

0x9ff9,	// (0x0001423b) uni_indicator_pane_g5

0x9ff9,	// (0x0001423b) uni_indicator_pane_g6_ParamLimits

0x9ff9,	// (0x0001423b) uni_indicator_pane_g6

0xf906,	// (0x00019b48) uni_indicator_pane_g_ParamLimits

0x2f32,	// (0x0000d174) popup_tmo_note_window_ParamLimits

0x2f32,	// (0x0000d174) popup_tmo_note_window

0x5f49,	// (0x0001018b) fshwr2_bg_pane

0xe7fd,	// (0x00018a3f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe7fd,	// (0x00018a3f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x0001a0dc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x0001a0dc) fshwr2_func_candi_cell_pane_g

0x5c9e,	// (0x0000fee0) bg_popup_window_pane_cp01

0x679b,	// (0x000109dd) bg_popup_window_pane_g1_cp01

0xf06f,	// (0x000192b1) bg_popup_window_pane_cp22_ParamLimits

0xf06f,	// (0x000192b1) bg_popup_window_pane_cp22

0xf07d,	// (0x000192bf) listscroll_tmo_link_pane_ParamLimits

0xf07d,	// (0x000192bf) listscroll_tmo_link_pane

0xf0bd,	// (0x000192ff) popup_tmo_note_window_g1_ParamLimits

0xf0bd,	// (0x000192ff) popup_tmo_note_window_g1

0xf0ca,	// (0x0001930c) tmo_note_info_pane_ParamLimits

0xf0ca,	// (0x0001930c) tmo_note_info_pane

0x4229,	// (0x0000e46b) list_tmo_note_info_pane_g1_ParamLimits

0x4229,	// (0x0000e46b) list_tmo_note_info_pane_g1

0xf0e4,	// (0x00019326) list_tmo_note_info_pane_g2_ParamLimits

0xf0e4,	// (0x00019326) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x0001a0e1) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x0001a0e1) list_tmo_note_info_pane_g

0xf100,	// (0x00019342) list_tmo_note_info_text_pane_ParamLimits

0xf100,	// (0x00019342) list_tmo_note_info_text_pane

0xf142,	// (0x00019384) list_tmo_link_pane

0xf14f,	// (0x00019391) scroll_pane_cp20

0xf15c,	// (0x0001939e) list_single_tmo_link_pane_ParamLimits

0xf15c,	// (0x0001939e) list_single_tmo_link_pane

0xf16c,	// (0x000193ae) list_single_tmo_link_pane_t1

0xf17a,	// (0x000193bc) list_tmo_note_info_text_pane_t1_ParamLimits

0xf17a,	// (0x000193bc) list_tmo_note_info_text_pane_t1

0x7a61,	// (0x00011ca3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7a61,	// (0x00011ca3) aid_size_touch_scroll_bar_cp01

0x10e6,	// (0x0000b328) aid_size_touch_slider_marker

0xd8f5,	// (0x00017b37) popup_settings_window_ParamLimits

0xd8f5,	// (0x00017b37) popup_settings_window

0x8967,	// (0x00012ba9) popup_candi_list_indi_window

0x89ad,	// (0x00012bef) aid_touch_navi_pane_ParamLimits

0x5ea5,	// (0x000100e7) rs_clock_indi_pane

0x5eae,	// (0x000100f0) sctrl_sk_bottom_pane_ParamLimits

0x5ebf,	// (0x00010101) sctrl_sk_top_pane_ParamLimits

0x5fc7,	// (0x00010209) popup_fep_tooltip_window

0xee14,	// (0x00019056) aid_size_cell_widget_grid_ParamLimits

0x3e2e,	// (0x0000e070) cell_ai5_widget_pane_g1_ParamLimits

0x3e2e,	// (0x0000e070) cell_ai5_widget_pane_g1

0x3e90,	// (0x0000e0d2) cell_ai5_widget_pane_g6_ParamLimits

0x3e9c,	// (0x0000e0de) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1d,	// (0x0001a05f) cell_ai5_widget_pane_g_ParamLimits

0xfe1d,	// (0x0001a05f) cell_ai5_widget_pane_g

0x3fb7,	// (0x0000e1f9) cell_ai5_widget_pane_t10_ParamLimits

0x3fb7,	// (0x0000e1f9) cell_ai5_widget_pane_t10

0x3fd5,	// (0x0000e217) grid_ai5_widget_pane_ParamLimits

0xeef0,	// (0x00019132) cell_contacts_ai5_widget_pane_ParamLimits

0xeef0,	// (0x00019132) cell_contacts_ai5_widget_pane

0xf019,	// (0x0001925b) popup_discreet_window_t3_ParamLimits

0xf019,	// (0x0001925b) popup_discreet_window_t3

0xe759,	// (0x0001899b) popup_fshwr2_char_preview_window_ParamLimits

0xe759,	// (0x0001899b) popup_fshwr2_char_preview_window

0x4240,	// (0x0000e482) tmo_note_info_pane_t1

0x4255,	// (0x0000e497) tmo_note_info_pane_t2

0x426a,	// (0x0000e4ac) tmo_note_info_pane_t3

0xf11e,	// (0x00019360) tmo_note_info_pane_t4

0xf130,	// (0x00019372) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0001a0e6) tmo_note_info_pane_t

0xf142,	// (0x00019384) list_tmo_link_pane_ParamLimits

0xf14f,	// (0x00019391) scroll_pane_cp20_ParamLimits

0x489f,	// (0x0000eae1) bg_popup_fep_char_preview_window_cp01

0xf193,	// (0x000193d5) popup_fshwr2_char_preview_window_t1

0xf1a1,	// (0x000193e3) popup_candi_list_indi_window_g1

0xf1aa,	// (0x000193ec) bg_cell_contacts_ai5_widget_pane

0xf1b6,	// (0x000193f8) cell_contacts_ai5_widget_pane_g1

0xf1cb,	// (0x0001940d) cell_contacts_ai5_widget_pane_g2

0xf1d7,	// (0x00019419) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x0001a0f1) cell_contacts_ai5_widget_pane_g

0xf1e3,	// (0x00019425) cell_contacts_ai5_widget_pane_t1

0x783e,	// (0x00011a80) highlight_cell_shortcut_ai5_widget_pane_cp01

0x42e2,	// (0x0000e524) settings_container_pane

0x85fe,	// (0x00012840) listscroll_set_pane_copy1

0xaad0,	// (0x00014d12) scroll_pane_cp121_copy1

0xf1f5,	// (0x00019437) set_content_pane_copy1

0xf1fd,	// (0x0001943f) aid_height_set_list_copy1_ParamLimits

0xf1fd,	// (0x0001943f) aid_height_set_list_copy1

0xa1d0,	// (0x00014412) aid_size_parent_copy1_ParamLimits

0xa1d0,	// (0x00014412) aid_size_parent_copy1

0xf209,	// (0x0001944b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf209,	// (0x0001944b) button_value_adjust_pane_cp6_copy1

0x894d,	// (0x00012b8f) list_highlight_pane_cp2_copy1_ParamLimits

0x894d,	// (0x00012b8f) list_highlight_pane_cp2_copy1

0x42ee,	// (0x0000e530) list_set_pane_copy1_ParamLimits

0x42ee,	// (0x0000e530) list_set_pane_copy1

0x427f,	// (0x0000e4c1) main_pane_set_t1_copy1_ParamLimits

0x427f,	// (0x0000e4c1) main_pane_set_t1_copy1

0x42b9,	// (0x0000e4fb) main_pane_set_t2_copy1_ParamLimits

0x42b9,	// (0x0000e4fb) main_pane_set_t2_copy1

0xf21d,	// (0x0001945f) main_pane_set_t3_copy1

0xf22b,	// (0x0001946d) main_pane_set_t4_copy1

0x42d6,	// (0x0000e518) set_content_pane_g1_copy1_ParamLimits

0x42d6,	// (0x0000e518) set_content_pane_g1_copy1

0xf239,	// (0x0001947b) setting_code_pane_copy1

0xf241,	// (0x00019483) setting_slider_graphic_pane_copy1

0xf241,	// (0x00019483) setting_slider_pane_copy1

0xf241,	// (0x00019483) setting_text_pane_copy1

0xf241,	// (0x00019483) setting_volume_pane_copy1

0xf249,	// (0x0001948b) settings_code_pane_cp2_copy1

0xf251,	// (0x00019493) settings_code_pane_cp_copy1_ParamLimits

0xf251,	// (0x00019493) settings_code_pane_cp_copy1

0xe83e,	// (0x00018a80) volume_set_pane_copy1

0x4384,	// (0x0000e5c6) volume_set_pane_g10_copy1

0x438c,	// (0x0000e5ce) volume_set_pane_g1_copy1

0x4394,	// (0x0000e5d6) volume_set_pane_g2_copy1

0x439c,	// (0x0000e5de) volume_set_pane_g3_copy1

0x43a4,	// (0x0000e5e6) volume_set_pane_g4_copy1

0x43ac,	// (0x0000e5ee) volume_set_pane_g5_copy1

0x43b4,	// (0x0000e5f6) volume_set_pane_g6_copy1

0x43bc,	// (0x0000e5fe) volume_set_pane_g7_copy1

0x43c4,	// (0x0000e606) volume_set_pane_g8_copy1

0x43cc,	// (0x0000e60e) volume_set_pane_g9_copy1

0x6b2e,	// (0x00010d70) bg_set_opt_pane_cp_copy1_ParamLimits

0x6b2e,	// (0x00010d70) bg_set_opt_pane_cp_copy1

0x4ab0,	// (0x0000ecf2) setting_slider_pane_t1_copy1_ParamLimits

0x4ab0,	// (0x0000ecf2) setting_slider_pane_t1_copy1

0x67ac,	// (0x000109ee) setting_slider_pane_t2_copy1_ParamLimits

0x67ac,	// (0x000109ee) setting_slider_pane_t2_copy1

0x67c5,	// (0x00010a07) setting_slider_pane_t3_copy1_ParamLimits

0x67c5,	// (0x00010a07) setting_slider_pane_t3_copy1

0x4af6,	// (0x0000ed38) slider_set_pane_copy1_ParamLimits

0x4af6,	// (0x0000ed38) slider_set_pane_copy1

0x7961,	// (0x00011ba3) set_opt_bg_pane_g1_copy2

0x7969,	// (0x00011bab) set_opt_bg_pane_g2_copy2

0xf265,	// (0x000194a7) set_opt_bg_pane_g3_copy2

0x7979,	// (0x00011bbb) set_opt_bg_pane_g4_copy2

0x7981,	// (0x00011bc3) set_opt_bg_pane_g5_copy2

0x7989,	// (0x00011bcb) set_opt_bg_pane_g6_copy2

0x43d4,	// (0x0000e616) set_opt_bg_pane_g7_copy2

0xf26d,	// (0x000194af) set_opt_bg_pane_g8_copy2

0xf275,	// (0x000194b7) set_opt_bg_pane_g9_copy2

0x5889,	// (0x0000facb) aid_size_touch_slider_mark_copy1_ParamLimits

0x5889,	// (0x0000facb) aid_size_touch_slider_mark_copy1

0xa306,	// (0x00014548) slider_set_pane_g1_copy1

0xa328,	// (0x0001456a) slider_set_pane_g2_copy1

0x58a9,	// (0x0000faeb) slider_set_pane_g3_copy1_ParamLimits

0x58a9,	// (0x0000faeb) slider_set_pane_g3_copy1

0x58bd,	// (0x0000faff) slider_set_pane_g4_copy1_ParamLimits

0x58bd,	// (0x0000faff) slider_set_pane_g4_copy1

0x58d5,	// (0x0000fb17) slider_set_pane_g5_copy1_ParamLimits

0x58d5,	// (0x0000fb17) slider_set_pane_g5_copy1

0x58a9,	// (0x0000faeb) slider_set_pane_g6_copy1_ParamLimits

0x58a9,	// (0x0000faeb) slider_set_pane_g6_copy1

0xe846,	// (0x00018a88) slider_set_pane_g7_copy1_ParamLimits

0xe846,	// (0x00018a88) slider_set_pane_g7_copy1

0x6a4e,	// (0x00010c90) bg_set_opt_pane_cp2_copy1

0x6b70,	// (0x00010db2) setting_slider_graphic_pane_g1_copy1

0xe85c,	// (0x00018a9e) setting_slider_graphic_pane_t1_copy1

0xe86b,	// (0x00018aad) setting_slider_graphic_pane_t2_copy1

0xe87a,	// (0x00018abc) slider_set_pane_cp_copy1

0xf285,	// (0x000194c7) input_focus_pane_cp1_copy1

0xf28e,	// (0x000194d0) list_set_text_pane_copy1

0xf296,	// (0x000194d8) setting_text_pane_g1_copy1

0xf056,	// (0x00019298) set_text_pane_t1_copy1

0xf285,	// (0x000194c7) input_focus_pane_cp2_copy1

0xf296,	// (0x000194d8) setting_code_pane_g1_copy1

0xf29f,	// (0x000194e1) setting_code_pane_t1_copy1

0x14ab,	// (0x0000b6ed) list_set_graphic_pane_copy1

0x6a4e,	// (0x00010c90) bg_set_opt_pane_cp4_copy1

0xf2ad,	// (0x000194ef) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2ad,	// (0x000194ef) list_set_graphic_pane_g1_copy1

0xf2b9,	// (0x000194fb) list_set_graphic_pane_g2_copy1

0x8370,	// (0x000125b2) list_set_graphic_pane_t1_copy1_ParamLimits

0x8370,	// (0x000125b2) list_set_graphic_pane_t1_copy1

0xb572,	// (0x000157b4) rs_clock_indi_pane_g1

0xf2c1,	// (0x00019503) rs_clock_indi_pane_t1

0xf2cf,	// (0x00019511) rs_indi_pane

0xf2d7,	// (0x00019519) rs_indi_pane_g1

0xf2e0,	// (0x00019522) rs_indi_pane_g2

0xf1a1,	// (0x000193e3) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0001a0f8) rs_indi_pane_g

0x85fe,	// (0x00012840) bg_popup_preview_window_pane_cp03

0xf2e9,	// (0x0001952b) popup_fep_tooltip_window_t1

0xc351,	// (0x00016593) popup_note2_window_g2_ParamLimits

0xc351,	// (0x00016593) popup_note2_window_g2

0x0001,

0xfc56,	// (0x00019e98) popup_note2_window_g_ParamLimits

0xfc56,	// (0x00019e98) popup_note2_window_g

0xc932,	// (0x00016b74) bg_popup_sub_pane_cp11_ParamLimits

0xc93f,	// (0x00016b81) cell_ai3_links_pane_g1_ParamLimits

0xc956,	// (0x00016b98) cell_ai3_links_pane_t1

0xf056,	// (0x00019298) set_text_pane_t1_copy1_ParamLimits

0x8525,	// (0x00012767) cell_graphic_popup_pane_cp2_ParamLimits

0x8525,	// (0x00012767) cell_graphic_popup_pane_cp2

0xf2f7,	// (0x00019539) cell_graphic_popup_pane_g1_cp2

0x7109,	// (0x0001134b) cell_graphic_popup_pane_g2_cp2

0xf2ff,	// (0x00019541) cell_graphic_popup_pane_g3_cp2

0xf307,	// (0x00019549) cell_graphic_popup_pane_t2_cp2

0x711a,	// (0x0001135c) grid_highlight_pane_cp3_cp2

0x7d4b,	// (0x00011f8d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x783e,	// (0x00011a80) main_tmo_pane_ParamLimits

0x2f2a,	// (0x0000d16c) popup_tmo_big_image_note_window

0xee51,	// (0x00019093) cell_ai5_widget_list_pane

0x3e25,	// (0x0000e067) cell_ai5_widget_lrg_icon_pane

0x4240,	// (0x0000e482) tmo_note_info_pane_t1_ParamLimits

0x4255,	// (0x0000e497) tmo_note_info_pane_t2_ParamLimits

0x426a,	// (0x0000e4ac) tmo_note_info_pane_t3_ParamLimits

0xf11e,	// (0x00019360) tmo_note_info_pane_t4_ParamLimits

0xf130,	// (0x00019372) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0001a0e6) tmo_note_info_pane_t_ParamLimits

0x42e2,	// (0x0000e524) settings_container_pane_ParamLimits

0xf27d,	// (0x000194bf) indicator_popup_pane_cp5

0xf27d,	// (0x000194bf) indicator_popup_pane_cp6

0x14ab,	// (0x0000b6ed) list_set_graphic_pane_copy1_ParamLimits

0x695d,	// (0x00010b9f) bg_popup_window_pane_cp23

0xf315,	// (0x00019557) popup_tmo_big_image_note_window_g1

0xf31e,	// (0x00019560) popup_tmo_big_image_note_window_t1

0xf32c,	// (0x0001956e) popup_tmo_big_image_note_window_t2

0xf33a,	// (0x0001957c) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x0001a0ff) popup_tmo_big_image_note_window_t

0xb572,	// (0x000157b4) cell_ai5_widget_lrg_icon_pane_g1

0xf348,	// (0x0001958a) cell_ai5_widget_lrg_icon_pane_t1

0x4418,	// (0x0000e65a) cell_ai5_widget_list_row_pane_ParamLimits

0x4418,	// (0x0000e65a) cell_ai5_widget_list_row_pane

0x442f,	// (0x0000e671) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x442f,	// (0x0000e671) cell_ai5_widget_list_row_pane_g1

0x443c,	// (0x0000e67e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x443c,	// (0x0000e67e) cell_ai5_widget_list_row_pane_t1

0x446d,	// (0x0000e6af) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x446d,	// (0x0000e6af) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0001a106) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0001a106) cell_ai5_widget_list_row_pane_t

0x489f,	// (0x0000eae1) main_fep_vtchi_ss_pane

0xf376,	// (0x000195b8) popup_fep_char_pre_window

0xf37e,	// (0x000195c0) popup_fep_ituss_window

0x4495,	// (0x0000e6d7) popup_fep_vkbss_window

0xf3b1,	// (0x000195f3) grid_vkbss_keypad_pane_ParamLimits

0xf3b1,	// (0x000195f3) grid_vkbss_keypad_pane

0xf3c1,	// (0x00019603) ituss_keypad_pane

0x6822,	// (0x00010a64) aid_vkbss_key_offset_ParamLimits

0x6822,	// (0x00010a64) aid_vkbss_key_offset

0x682e,	// (0x00010a70) cell_vkbss_key_pane_ParamLimits

0x682e,	// (0x00010a70) cell_vkbss_key_pane

0x8c92,	// (0x00012ed4) bg_cell_vkbss_key_g1_ParamLimits

0x8c92,	// (0x00012ed4) bg_cell_vkbss_key_g1

0xf3d0,	// (0x00019612) cell_vkbss_key_3p_pane_ParamLimits

0xf3d0,	// (0x00019612) cell_vkbss_key_3p_pane

0xf3ea,	// (0x0001962c) cell_vkbss_key_g1_ParamLimits

0xf3ea,	// (0x0001962c) cell_vkbss_key_g1

0xf404,	// (0x00019646) cell_vkbss_key_t1_ParamLimits

0xf404,	// (0x00019646) cell_vkbss_key_t1

0x6844,	// (0x00010a86) cell_ituss_key_pane_ParamLimits

0x6844,	// (0x00010a86) cell_ituss_key_pane

0xf42f,	// (0x00019671) bg_cell_ituss_key_g1_ParamLimits

0xf42f,	// (0x00019671) bg_cell_ituss_key_g1

0xf43b,	// (0x0001967d) cell_ituss_key_pane_g1_ParamLimits

0xf43b,	// (0x0001967d) cell_ituss_key_pane_g1

0x6855,	// (0x00010a97) cell_ituss_key_pane_g2_ParamLimits

0x6855,	// (0x00010a97) cell_ituss_key_pane_g2

0x0002,

0xfecb,	// (0x0001a10d) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x0001a10d) cell_ituss_key_pane_g

0x687d,	// (0x00010abf) cell_ituss_key_t1_ParamLimits

0x687d,	// (0x00010abf) cell_ituss_key_t1

0x68b7,	// (0x00010af9) cell_ituss_key_t2_ParamLimits

0x68b7,	// (0x00010af9) cell_ituss_key_t2

0x68e8,	// (0x00010b2a) cell_ituss_key_t3_ParamLimits

0x68e8,	// (0x00010b2a) cell_ituss_key_t3

0x68b7,	// (0x00010af9) cell_ituss_key_t4_ParamLimits

0x68b7,	// (0x00010af9) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0001a114) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0001a114) cell_ituss_key_t

0xf461,	// (0x000196a3) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x000196ab) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x000196b3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0001a11f) cell_vkbss_key_3p_pane_g

0x85fe,	// (0x00012840) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x000196bb) popup_fep_char_pre_window_t1

0x3e12,	// (0x0000e054) main_ai5_sk_pane

0xf1aa,	// (0x000193ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf1b6,	// (0x000193f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf1cb,	// (0x0001940d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf1d7,	// (0x00019419) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x0001a0f1) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf1e3,	// (0x00019425) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x783e,	// (0x00011a80) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x44a2,	// (0x0000e6e4) main_ai5_sk_pane_g1

0x9346,	// (0x00013588) popup_query_code_window_g1

0xf390,	// (0x000195d2) popup_fep_vkb_icf_pane

0xf39b,	// (0x000195dd) popup_fep_vtchi_icf_pane

0xf487,	// (0x000196c9) bg_icf_pane

0xf493,	// (0x000196d5) list_vkb_icf_pane

0xf49f,	// (0x000196e1) bg_icf_pane_cp01

0xf4b2,	// (0x000196f4) vtchi_icf_list_pane

0xf4c2,	// (0x00019704) list_vkb_icf_pane_t1_ParamLimits

0xf4c2,	// (0x00019704) list_vkb_icf_pane_t1

0xf4d7,	// (0x00019719) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x00019719) vtchi_icf_list_pane_t1

0xf37e,	// (0x000195c0) popup_fep_ituss_window_ParamLimits

0xf39b,	// (0x000195dd) popup_fep_vtchi_icf_pane_ParamLimits

0xf3c1,	// (0x00019603) ituss_keypad_pane_ParamLimits

0x6818,	// (0x00010a5a) ituss_sks_pane

0xf487,	// (0x000196c9) bg_icf_pane_ParamLimits

0xf356,	// (0x00019598) icf_edit_indi_pane_ParamLimits

0xf356,	// (0x00019598) icf_edit_indi_pane

0xf493,	// (0x000196d5) list_vkb_icf_pane_ParamLimits

0xf49f,	// (0x000196e1) bg_icf_pane_cp01_ParamLimits

0xf369,	// (0x000195ab) icf_edit_indi_pane_cp01_ParamLimits

0xf369,	// (0x000195ab) icf_edit_indi_pane_cp01

0xf4ba,	// (0x000196fc) vtchi_query_pane

0xed9f,	// (0x00018fe1) icf_edit_indi_pane_g1_ParamLimits

0xed9f,	// (0x00018fe1) icf_edit_indi_pane_g1

0x44ab,	// (0x0000e6ed) icf_edit_indi_pane_g2_ParamLimits

0x44ab,	// (0x0000e6ed) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0001a137) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0001a137) icf_edit_indi_pane_g

0x44bb,	// (0x0000e6fd) icf_edit_indi_pane_t1

0xf4ee,	// (0x00019730) bg_input_focus_pane_cp042

0xf4f7,	// (0x00019739) vtchi_button_pane

0xf500,	// (0x00019742) vtchi_query_pane_t1

0xf50e,	// (0x00019750) vtchi_query_pane_t2

0xf51c,	// (0x0001975e) vtchi_query_pane_t3

0x0002,

0xfee4,	// (0x0001a126) vtchi_query_pane_t

0x489f,	// (0x0000eae1) bg_button_pane_cp13

0xf52a,	// (0x0001976c) vtchi_button_pane_g1

0x692b,	// (0x00010b6d) ituss_sks_pane_g1

0x6934,	// (0x00010b76) ituss_sks_pane_g2

0x0001,

0xfeeb,	// (0x0001a12d) ituss_sks_pane_g

0xf532,	// (0x00019774) ituss_sks_pane_t1

0xf540,	// (0x00019782) ituss_sks_pane_t2

0x0001,

0xfef0,	// (0x0001a132) ituss_sks_pane_t

0xb06d,	// (0x000152af) indicator_nsta_pane_cp_g1

0xb076,	// (0x000152b8) indicator_nsta_pane_cp_g2

0xb07e,	// (0x000152c0) indicator_nsta_pane_cp_g3

0xb086,	// (0x000152c8) indicator_nsta_pane_cp_g4

0xb08e,	// (0x000152d0) indicator_nsta_pane_cp_g5

0xb096,	// (0x000152d8) indicator_nsta_pane_cp_g6

0x0005,

0xfa94,	// (0x00019cd6) indicator_nsta_pane_cp_g

0x3bfd,	// (0x0000de3f) cell_graphic2_pane_t2_ParamLimits

0x3bfd,	// (0x0000de3f) cell_graphic2_pane_t2

0x0001,

0xfda6,	// (0x00019fe8) cell_graphic2_pane_t_ParamLimits

0xfda6,	// (0x00019fe8) cell_graphic2_pane_t

0x3c35,	// (0x0000de77) cell_graphic2_control_pane_t1

0x13bf,	// (0x0000b601) signal_pane_g3_ParamLimits

0x13bf,	// (0x0000b601) signal_pane_g3

0x13d3,	// (0x0000b615) signal_pane_g4_ParamLimits

0x13d3,	// (0x0000b615) signal_pane_g4

0x447f,	// (0x0000e6c1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x447f,	// (0x0000e6c1) cell_ai5_widget_list_row_pane_t3

0xf44f,	// (0x00019691) cell_ituss_key_pane_t1_ParamLimits

0xf44f,	// (0x00019691) cell_ituss_key_pane_t1

0x8fb8,	// (0x000131fa) form_field_data_wide_pane_vc_t2_ParamLimits

0x8fb8,	// (0x000131fa) form_field_data_wide_pane_vc_t2

0x8fca,	// (0x0001320c) form_field_data_wide_pane_vc_t3_ParamLimits

0x8fca,	// (0x0001320c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00019a30) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00019a30) form_field_data_wide_pane_vc_t

0xad6f,	// (0x00014fb1) form_field_slider_wide_pane_vc_t3_ParamLimits

0xad6f,	// (0x00014fb1) form_field_slider_wide_pane_vc_t3

0xae2d,	// (0x0001506f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xae2d,	// (0x0001506f) form_field_popup_wide_pane_vc_t2

0xae42,	// (0x00015084) form_field_popup_wide_pane_vc_t3_ParamLimits

0xae42,	// (0x00015084) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa83,	// (0x00019cc5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa83,	// (0x00019cc5) form_field_popup_wide_pane_vc_t

0xe6e8,	// (0x0001892a) aid_fshwr2_btn_pane_ParamLimits

0xe6f9,	// (0x0001893b) aid_fshwr2_syb_pane_ParamLimits

0xe70a,	// (0x0001894c) aid_fshwr2_txt_pane_ParamLimits

0x5f49,	// (0x0001018b) fshwr2_bg_pane_ParamLimits

0xe716,	// (0x00018958) fshwr2_func_candi_pane_ParamLimits

0xe730,	// (0x00018972) fshwr2_hwr_syb_pane_ParamLimits

0xe745,	// (0x00018987) fshwr2_icf_pane_ParamLimits

0xacea,	// (0x00014f2c) list_double_graphic_pane_vc_g4_ParamLimits

0xacea,	// (0x00014f2c) list_double_graphic_pane_vc_g4

0x6871,	// (0x00010ab3) cell_ituss_key_pane_g3_ParamLimits

0x6871,	// (0x00010ab3) cell_ituss_key_pane_g3

0x6919,	// (0x00010b5b) cell_ituss_key_t5_ParamLimits

0x6919,	// (0x00010b5b) cell_ituss_key_t5

0x4495,	// (0x0000e6d7) popup_fep_vkbss_window_ParamLimits

0x3e1c,	// (0x0000e05e) aid_cell_ai5_quarter

0x44bb,	// (0x0000e6fd) icf_edit_indi_pane_t1_ParamLimits

0x6e7d,	// (0x000110bf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6e7d,	// (0x000110bf) aid_tch_indicator_popup_pane_cp2

0x6e90,	// (0x000110d2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6e90,	// (0x000110d2) aid_tch_query_popup_data_pane_cp2

0x92ee,	// (0x00013530) aid_tch_query_popup_pane_ParamLimits

0x92ee,	// (0x00013530) aid_tch_query_popup_pane

0x92ee,	// (0x00013530) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x92ee,	// (0x00013530) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal

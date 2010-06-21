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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00007bb0 };

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
0x8fcf,	// (0x00010b7f) Screen

0x8fe1,	// (0x00010b91) application_window_ParamLimits

0x8fe1,	// (0x00010b91) application_window

0x8ff9,	// (0x00010ba9) screen_g1

0x9003,	// (0x00010bb3) area_bottom_pane_ParamLimits

0x9003,	// (0x00010bb3) area_bottom_pane

0x9068,	// (0x00010c18) area_top_pane_ParamLimits

0x9068,	// (0x00010c18) area_top_pane

0x6f3b,	// (0x0000eaeb) main_pane_ParamLimits

0x6f3b,	// (0x0000eaeb) main_pane

0x90e0,	// (0x00010c90) misc_graphics

0xb066,	// (0x00012c16) battery_pane_ParamLimits

0xb066,	// (0x00012c16) battery_pane

0xbd59,	// (0x00013909) bg_status_flat_pane_g8

0xbd61,	// (0x00013911) bg_status_flat_pane_g9

0xb11b,	// (0x00012ccb) context_pane_ParamLimits

0xb11b,	// (0x00012ccb) context_pane

0xb232,	// (0x00012de2) navi_pane_ParamLimits

0xb232,	// (0x00012de2) navi_pane

0xb2af,	// (0x00012e5f) signal_pane_ParamLimits

0xb2af,	// (0x00012e5f) signal_pane

0x0008,

0xf868,	// (0x00017418) bg_status_flat_pane_g

0xb318,	// (0x00012ec8) status_pane_g1_ParamLimits

0xb318,	// (0x00012ec8) status_pane_g1

0xb324,	// (0x00012ed4) status_pane_g2_ParamLimits

0xb324,	// (0x00012ed4) status_pane_g2

0xb330,	// (0x00012ee0) status_pane_g3_ParamLimits

0xb330,	// (0x00012ee0) status_pane_g3

0x0004,

0xf79b,	// (0x0001734b) status_pane_g_ParamLimits

0xf79b,	// (0x0001734b) status_pane_g

0xb362,	// (0x00012f12) title_pane_ParamLimits

0xb362,	// (0x00012f12) title_pane

0xb39f,	// (0x00012f4f) uni_indicator_pane_ParamLimits

0xb39f,	// (0x00012f4f) uni_indicator_pane

0xaf7c,	// (0x00012b2c) bg_list_pane_ParamLimits

0xaf7c,	// (0x00012b2c) bg_list_pane

0xaf9c,	// (0x00012b4c) find_pane

0xafa4,	// (0x00012b54) listscroll_app_pane_ParamLimits

0xafa4,	// (0x00012b54) listscroll_app_pane

0xafb0,	// (0x00012b60) listscroll_form_pane

0xafb8,	// (0x00012b68) listscroll_gen_pane_ParamLimits

0xafb8,	// (0x00012b68) listscroll_gen_pane

0x773a,	// (0x0000f2ea) listscroll_set_pane

0xa206,	// (0x00011db6) main_idle_act_pane

0xac90,	// (0x00012840) main_idle_trad_pane

0xac90,	// (0x00012840) main_list_empty_pane

0xafdf,	// (0x00012b8f) main_midp_pane

0xafeb,	// (0x00012b9b) main_pane_g1_ParamLimits

0xafeb,	// (0x00012b9b) main_pane_g1

0x7750,	// (0x0000f300) popup_ai_message_window_ParamLimits

0x7750,	// (0x0000f300) popup_ai_message_window

0x77e6,	// (0x0000f396) popup_fep_china_uni_window_ParamLimits

0x77e6,	// (0x0000f396) popup_fep_china_uni_window

0x7824,	// (0x0000f3d4) popup_fep_japan_candidate_window_ParamLimits

0x7824,	// (0x0000f3d4) popup_fep_japan_candidate_window

0x7842,	// (0x0000f3f2) popup_fep_japan_predictive_window_ParamLimits

0x7842,	// (0x0000f3f2) popup_fep_japan_predictive_window

0x786e,	// (0x0000f41e) popup_find_window

0x787b,	// (0x0000f42b) popup_grid_graphic_window_ParamLimits

0x787b,	// (0x0000f42b) popup_grid_graphic_window

0x7899,	// (0x0000f449) popup_large_graphic_colour_window

0x78b8,	// (0x0000f468) popup_menu_window_ParamLimits

0x78b8,	// (0x0000f468) popup_menu_window

0x79f0,	// (0x0000f5a0) popup_note_image_window

0x79de,	// (0x0000f58e) popup_note_wait_window_ParamLimits

0x79de,	// (0x0000f58e) popup_note_wait_window

0x79de,	// (0x0000f58e) popup_note_window_ParamLimits

0x79de,	// (0x0000f58e) popup_note_window

0x7a44,	// (0x0000f5f4) popup_query_code_window_ParamLimits

0x7a44,	// (0x0000f5f4) popup_query_code_window

0x7a56,	// (0x0000f606) popup_query_data_code_window_ParamLimits

0x7a56,	// (0x0000f606) popup_query_data_code_window

0x7a6b,	// (0x0000f61b) popup_query_data_window_ParamLimits

0x7a6b,	// (0x0000f61b) popup_query_data_window

0x7a81,	// (0x0000f631) popup_query_sat_info_window_ParamLimits

0x7a81,	// (0x0000f631) popup_query_sat_info_window

0x7ab2,	// (0x0000f662) popup_snote_single_graphic_window_ParamLimits

0x7ab2,	// (0x0000f662) popup_snote_single_graphic_window

0x7ab2,	// (0x0000f662) popup_snote_single_text_window_ParamLimits

0x7ab2,	// (0x0000f662) popup_snote_single_text_window

0x7ac5,	// (0x0000f675) popup_sub_window_general

0x7bc9,	// (0x0000f779) popup_window_general_ParamLimits

0x7bc9,	// (0x0000f779) popup_window_general

0xb001,	// (0x00012bb1) power_save_pane

0x75ce,	// (0x0000f17e) control_pane_g1_ParamLimits

0x75ce,	// (0x0000f17e) control_pane_g1

0x75ef,	// (0x0000f19f) control_pane_g2_ParamLimits

0x75ef,	// (0x0000f19f) control_pane_g2

0xaf47,	// (0x00012af7) control_pane_g3_ParamLimits

0xaf47,	// (0x00012af7) control_pane_g3

0x0007,

0xf783,	// (0x00017333) control_pane_g_ParamLimits

0xf783,	// (0x00017333) control_pane_g

0x7631,	// (0x0000f1e1) control_pane_t1_ParamLimits

0x7631,	// (0x0000f1e1) control_pane_t1

0x7683,	// (0x0000f233) control_pane_t2_ParamLimits

0x7683,	// (0x0000f233) control_pane_t2

0x0002,

0xf794,	// (0x00017344) control_pane_t_ParamLimits

0xf794,	// (0x00017344) control_pane_t

0xae6e,	// (0x00012a1e) navi_navi_volume_pane_cp1

0xae76,	// (0x00012a26) status_small_icon_pane

0xae7e,	// (0x00012a2e) status_small_pane_g1_ParamLimits

0xae7e,	// (0x00012a2e) status_small_pane_g1

0xaeb2,	// (0x00012a62) status_small_pane_g2_ParamLimits

0xaeb2,	// (0x00012a62) status_small_pane_g2

0xaebe,	// (0x00012a6e) status_small_pane_g3_ParamLimits

0xaebe,	// (0x00012a6e) status_small_pane_g3

0xaeca,	// (0x00012a7a) status_small_pane_g4_ParamLimits

0xaeca,	// (0x00012a7a) status_small_pane_g4

0xaed6,	// (0x00012a86) status_small_pane_g5_ParamLimits

0xaed6,	// (0x00012a86) status_small_pane_g5

0xaee2,	// (0x00012a92) status_small_pane_g6_ParamLimits

0xaee2,	// (0x00012a92) status_small_pane_g6

0x0007,

0xf772,	// (0x00017322) status_small_pane_g_ParamLimits

0xf772,	// (0x00017322) status_small_pane_g

0xaf11,	// (0x00012ac1) status_small_pane_t1

0xaf33,	// (0x00012ae3) status_small_wait_pane_ParamLimits

0xaf33,	// (0x00012ae3) status_small_wait_pane

0xa6f8,	// (0x000122a8) aid_levels_signal_ParamLimits

0xa6f8,	// (0x000122a8) aid_levels_signal

0xa709,	// (0x000122b9) signal_pane_g1_ParamLimits

0xa709,	// (0x000122b9) signal_pane_g1

0xa71f,	// (0x000122cf) signal_pane_g2_ParamLimits

0xa71f,	// (0x000122cf) signal_pane_g2

0x0003,

0xf703,	// (0x000172b3) signal_pane_g_ParamLimits

0xf703,	// (0x000172b3) signal_pane_g

0xa75a,	// (0x0001230a) context_pane_g1

0x90ea,	// (0x00010c9a) title_pane_g1

0x9120,	// (0x00010cd0) title_pane_t1

0x9188,	// (0x00010d38) title_pane_t2

0x91ae,	// (0x00010d5e) title_pane_t3

0x0002,

0xf557,	// (0x00017107) title_pane_t

0xb3b5,	// (0x00012f65) aid_levels_battery_ParamLimits

0xb3b5,	// (0x00012f65) aid_levels_battery

0xb3c8,	// (0x00012f78) battery_pane_g1_ParamLimits

0xb3c8,	// (0x00012f78) battery_pane_g1

0xb3dd,	// (0x00012f8d) battery_pane_g2_ParamLimits

0xb3dd,	// (0x00012f8d) battery_pane_g2

0x0001,

0xf7a6,	// (0x00017356) battery_pane_g_ParamLimits

0xf7a6,	// (0x00017356) battery_pane_g

0xc636,	// (0x000141e6) uni_indicator_pane_g1

0xc64c,	// (0x000141fc) uni_indicator_pane_g2

0xc662,	// (0x00014212) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x000174c0) uni_indicator_pane_g

0xa0e5,	// (0x00011c95) navi_icon_pane_ParamLimits

0xa0e5,	// (0x00011c95) navi_icon_pane

0x90e0,	// (0x00010c90) navi_midp_pane

0x90e0,	// (0x00010c90) navi_navi_pane

0xa0e5,	// (0x00011c95) navi_text_pane_ParamLimits

0xa0e5,	// (0x00011c95) navi_text_pane

0x8ff9,	// (0x00010ba9) status_small_wait_pane_g1

0x9621,	// (0x000111d1) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x000174bb) status_small_wait_pane_g

0xc369,	// (0x00013f19) navi_navi_icon_text_pane

0xc371,	// (0x00013f21) navi_navi_pane_g1_ParamLimits

0xc371,	// (0x00013f21) navi_navi_pane_g1

0xc383,	// (0x00013f33) navi_navi_pane_g2_ParamLimits

0xc383,	// (0x00013f33) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00017489) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00017489) navi_navi_pane_g

0xc395,	// (0x00013f45) navi_navi_tabs_pane

0xc369,	// (0x00013f19) navi_navi_text_pane

0xc369,	// (0x00013f19) navi_navi_volume_pane

0xc345,	// (0x00013ef5) navi_text_pane_t1

0xc339,	// (0x00013ee9) navi_icon_pane_g1

0xc28d,	// (0x00013e3d) navi_navi_text_pane_t1

0x7eba,	// (0x0000fa6a) navi_navi_volume_pane_g1

0x7ec2,	// (0x0000fa72) volume_small_pane

0xc1f3,	// (0x00013da3) navi_navi_icon_text_pane_g1

0xc1fb,	// (0x00013dab) navi_navi_icon_text_pane_t1

0xbdb9,	// (0x00013969) navi_tabs_2_long_pane

0xbdb9,	// (0x00013969) navi_tabs_2_pane

0xbdb9,	// (0x00013969) navi_tabs_3_long_pane

0xbdb9,	// (0x00013969) navi_tabs_3_pane

0xbdb9,	// (0x00013969) navi_tabs_4_pane

0x7e9a,	// (0x0000fa4a) tabs_2_active_pane_ParamLimits

0x7e9a,	// (0x0000fa4a) tabs_2_active_pane

0x7eaa,	// (0x0000fa5a) tabs_2_passive_pane_ParamLimits

0x7eaa,	// (0x0000fa5a) tabs_2_passive_pane

0x7e68,	// (0x0000fa18) tabs_3_active_pane_ParamLimits

0x7e68,	// (0x0000fa18) tabs_3_active_pane

0x7e78,	// (0x0000fa28) tabs_3_passive_pane_ParamLimits

0x7e78,	// (0x0000fa28) tabs_3_passive_pane

0x7e89,	// (0x0000fa39) tabs_3_passive_pane_cp_ParamLimits

0x7e89,	// (0x0000fa39) tabs_3_passive_pane_cp

0x7e24,	// (0x0000f9d4) tabs_4_active_pane_ParamLimits

0x7e24,	// (0x0000f9d4) tabs_4_active_pane

0x7e35,	// (0x0000f9e5) tabs_4_passive_pane_ParamLimits

0x7e35,	// (0x0000f9e5) tabs_4_passive_pane

0x7e46,	// (0x0000f9f6) tabs_4_passive_pane_cp_ParamLimits

0x7e46,	// (0x0000f9f6) tabs_4_passive_pane_cp

0x7e57,	// (0x0000fa07) tabs_4_passive_pane_cp2_ParamLimits

0x7e57,	// (0x0000fa07) tabs_4_passive_pane_cp2

0x7e04,	// (0x0000f9b4) tabs_2_long_active_pane_ParamLimits

0x7e04,	// (0x0000f9b4) tabs_2_long_active_pane

0x7e14,	// (0x0000f9c4) tabs_2_long_passive_pane_ParamLimits

0x7e14,	// (0x0000f9c4) tabs_2_long_passive_pane

0x7dcf,	// (0x0000f97f) tabs_3_long_active_pane_ParamLimits

0x7dcf,	// (0x0000f97f) tabs_3_long_active_pane

0x7de0,	// (0x0000f990) tabs_3_long_passive_pane_ParamLimits

0x7de0,	// (0x0000f990) tabs_3_long_passive_pane

0x7df3,	// (0x0000f9a3) tabs_3_long_passive_pane_cp_ParamLimits

0x7df3,	// (0x0000f9a3) tabs_3_long_passive_pane_cp

0x7d75,	// (0x0000f925) volume_small_pane_g1

0x7d7e,	// (0x0000f92e) volume_small_pane_g2

0x7d87,	// (0x0000f937) volume_small_pane_g3

0x7d90,	// (0x0000f940) volume_small_pane_g4

0x7d99,	// (0x0000f949) volume_small_pane_g5

0x7da2,	// (0x0000f952) volume_small_pane_g6

0x7dab,	// (0x0000f95b) volume_small_pane_g7

0x7db4,	// (0x0000f964) volume_small_pane_g8

0x7dbd,	// (0x0000f96d) volume_small_pane_g9

0x7dc6,	// (0x0000f976) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x00017455) volume_small_pane_g

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp2_ParamLimits

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp2

0x91ce,	// (0x00010d7e) tabs_3_active_pane_g1

0x91d6,	// (0x00010d86) tabs_3_active_pane_t1

0x91c0,	// (0x00010d70) bg_passive_tab_pane_cp2_ParamLimits

0x91c0,	// (0x00010d70) bg_passive_tab_pane_cp2

0x91ce,	// (0x00010d7e) tabs_3_passive_pane_g1

0x91d6,	// (0x00010d86) tabs_3_passive_pane_t1

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp3_ParamLimits

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp3

0x91e8,	// (0x00010d98) tabs_4_active_pane_g1

0x91f0,	// (0x00010da0) tabs_4_active_pane_t1

0x91c0,	// (0x00010d70) bg_passive_tab_pane_cp3_ParamLimits

0x91c0,	// (0x00010d70) bg_passive_tab_pane_cp3

0x91e8,	// (0x00010d98) tabs_4_1_passive_pane_g1

0x91f0,	// (0x00010da0) tabs_4_1_passive_pane_t1

0xafdf,	// (0x00012b8f) list_highlight_pane_cp2

0xc888,	// (0x00014438) list_set_pane_ParamLimits

0xc888,	// (0x00014438) list_set_pane

0xc916,	// (0x000144c6) main_pane_set_t1_ParamLimits

0xc916,	// (0x000144c6) main_pane_set_t1

0xc936,	// (0x000144e6) main_pane_set_t2_ParamLimits

0xc936,	// (0x000144e6) main_pane_set_t2

0xc948,	// (0x000144f8) main_pane_set_t3_ParamLimits

0xc948,	// (0x000144f8) main_pane_set_t3

0xc95a,	// (0x0001450a) main_pane_set_t4_ParamLimits

0xc95a,	// (0x0001450a) main_pane_set_t4

0x0003,

0xf975,	// (0x00017525) main_pane_set_t_ParamLimits

0xf975,	// (0x00017525) main_pane_set_t

0xc96c,	// (0x0001451c) setting_code_pane

0xc974,	// (0x00014524) setting_slider_graphic_pane

0xc974,	// (0x00014524) setting_slider_pane

0xc974,	// (0x00014524) setting_text_pane

0xc974,	// (0x00014524) setting_volume_pane

0x713a,	// (0x0000ecea) volume_set_pane

0x91c0,	// (0x00010d70) bg_set_opt_pane_cp

0x7142,	// (0x0000ecf2) setting_slider_pane_t1

0x7158,	// (0x0000ed08) setting_slider_pane_t2

0x7171,	// (0x0000ed21) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001710e) setting_slider_pane_t

0x7188,	// (0x0000ed38) slider_set_pane

0x90e0,	// (0x00010c90) bg_set_opt_pane_cp2

0x9202,	// (0x00010db2) setting_slider_graphic_pane_g1

0x719e,	// (0x0000ed4e) setting_slider_graphic_pane_t1

0x71ad,	// (0x0000ed5d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00017115) setting_slider_graphic_pane_t

0x71bc,	// (0x0000ed6c) slider_set_pane_cp

0x90e0,	// (0x00010c90) input_focus_pane_cp1

0xc84e,	// (0x000143fe) list_set_text_pane

0x8ff9,	// (0x00010ba9) setting_text_pane_g1

0x90e0,	// (0x00010c90) input_focus_pane_cp2

0x8ff9,	// (0x00010ba9) setting_code_pane_g1

0x920b,	// (0x00010dbb) setting_code_pane_t1

0x9219,	// (0x00010dc9) set_text_pane_t1_ParamLimits

0x9219,	// (0x00010dc9) set_text_pane_t1

0x9ff3,	// (0x00011ba3) set_opt_bg_pane_g1

0x9ffb,	// (0x00011bab) set_opt_bg_pane_g2

0xc82e,	// (0x000143de) set_opt_bg_pane_g3

0xa00b,	// (0x00011bbb) set_opt_bg_pane_g4

0xa013,	// (0x00011bc3) set_opt_bg_pane_g5

0xa01b,	// (0x00011bcb) set_opt_bg_pane_g6

0xc836,	// (0x000143e6) set_opt_bg_pane_g7

0xc83e,	// (0x000143ee) set_opt_bg_pane_g8

0xc846,	// (0x000143f6) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x00017512) set_opt_bg_pane_g

0xc821,	// (0x000143d1) slider_set_pane_g1

0x7f2f,	// (0x0000fadf) slider_set_pane_g2

0x0006,

0xf953,	// (0x00017503) slider_set_pane_g

0x7ecb,	// (0x0000fa7b) volume_set_pane_g1

0x7ed3,	// (0x0000fa83) volume_set_pane_g2

0x7edb,	// (0x0000fa8b) volume_set_pane_g3

0x7ee3,	// (0x0000fa93) volume_set_pane_g4

0x7eeb,	// (0x0000fa9b) volume_set_pane_g5

0x7ef3,	// (0x0000faa3) volume_set_pane_g6

0x7efb,	// (0x0000faab) volume_set_pane_g7

0x7f03,	// (0x0000fab3) volume_set_pane_g8

0x7f0b,	// (0x0000fabb) volume_set_pane_g9

0x7f13,	// (0x0000fac3) volume_set_pane_g10

0x0009,

0xf92b,	// (0x000174db) volume_set_pane_g

0x9234,	// (0x00010de4) indicator_pane_ParamLimits

0x9234,	// (0x00010de4) indicator_pane

0x9240,	// (0x00010df0) main_idle_pane_g2_ParamLimits

0x9240,	// (0x00010df0) main_idle_pane_g2

0x9264,	// (0x00010e14) main_pane_idle_g1_ParamLimits

0x9264,	// (0x00010e14) main_pane_idle_g1

0x9271,	// (0x00010e21) popup_clock_digital_analogue_window_ParamLimits

0x9271,	// (0x00010e21) popup_clock_digital_analogue_window

0x9288,	// (0x00010e38) soft_indicator_pane_ParamLimits

0x9288,	// (0x00010e38) soft_indicator_pane

0x9294,	// (0x00010e44) wallpaper_pane_ParamLimits

0x9294,	// (0x00010e44) wallpaper_pane

0x8ff9,	// (0x00010ba9) wallpaper_pane_g1

0x92a8,	// (0x00010e58) indicator_pane_g1_ParamLimits

0x92a8,	// (0x00010e58) indicator_pane_g1

0xcc60,	// (0x00014810) navi_navi_icon_text_pane_srt_g1

0x92c3,	// (0x00010e73) soft_indicator_pane_t1

0x92dd,	// (0x00010e8d) aid_ps_area_pane

0x92ee,	// (0x00010e9e) aid_ps_clock_pane

0x92fa,	// (0x00010eaa) aid_ps_indicator_pane

0x9306,	// (0x00010eb6) indicator_ps_pane_ParamLimits

0x9306,	// (0x00010eb6) indicator_ps_pane

0x9315,	// (0x00010ec5) power_save_pane_g1_ParamLimits

0x9315,	// (0x00010ec5) power_save_pane_g1

0x9321,	// (0x00010ed1) power_save_pane_g2_ParamLimits

0x9321,	// (0x00010ed1) power_save_pane_g2

0x6ead,	// (0x0000ea5d) aid_navinavi_width_pane

0x92dd,	// (0x00010e8d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001711a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001711a) power_save_pane_g

0x932f,	// (0x00010edf) power_save_pane_t1_ParamLimits

0x932f,	// (0x00010edf) power_save_pane_t1

0x92ee,	// (0x00010e9e) aid_ps_clock_pane_ParamLimits

0x92fa,	// (0x00010eaa) aid_ps_indicator_pane_ParamLimits

0x9341,	// (0x00010ef1) power_save_pane_t4_ParamLimits

0x9341,	// (0x00010ef1) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001711f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001711f) power_save_pane_t

0x936b,	// (0x00010f1b) power_save_t3_ParamLimits

0x936b,	// (0x00010f1b) power_save_t3

0x9356,	// (0x00010f06) power_save_t2_ParamLimits

0x9356,	// (0x00010f06) power_save_t2

0x9380,	// (0x00010f30) indicator_ps_pane_g1

0x9389,	// (0x00010f39) ai_gene_pane_ParamLimits

0x9389,	// (0x00010f39) ai_gene_pane

0x9395,	// (0x00010f45) ai_links_pane_ParamLimits

0x9395,	// (0x00010f45) ai_links_pane

0x93a1,	// (0x00010f51) indicator_pane_cp1_ParamLimits

0x93a1,	// (0x00010f51) indicator_pane_cp1

0x93ad,	// (0x00010f5d) main_pane_idle_g1_cp_ParamLimits

0x93ad,	// (0x00010f5d) main_pane_idle_g1_cp

0x93b9,	// (0x00010f69) popup_ai_links_title_window

0x93c2,	// (0x00010f72) soft_indicator_pane_cp1_ParamLimits

0x93c2,	// (0x00010f72) soft_indicator_pane_cp1

0xc624,	// (0x000141d4) ai_links_pane_g1

0xc62d,	// (0x000141dd) grid_ai_links_pane

0xc609,	// (0x000141b9) ai_gene_pane_1

0xc612,	// (0x000141c2) ai_gene_pane_2

0xc61b,	// (0x000141cb) list_highlight_pane_cp4

0xc5ed,	// (0x0001419d) cell_ai_link_pane_ParamLimits

0xc5ed,	// (0x0001419d) cell_ai_link_pane

0xc5e5,	// (0x00014195) cell_ai_link_pane_g1

0x9621,	// (0x000111d1) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x000174b6) cell_ai_link_pane_g

0x90e0,	// (0x00010c90) grid_highlight_cp2

0x90e0,	// (0x00010c90) bg_popup_sub_pane_cp1

0x93dc,	// (0x00010f8c) popup_ai_links_title_window_t1

0xc537,	// (0x000140e7) ai_gene_pane_1_g1_ParamLimits

0xc537,	// (0x000140e7) ai_gene_pane_1_g1

0xc543,	// (0x000140f3) ai_gene_pane_1_g2_ParamLimits

0xc543,	// (0x000140f3) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x000174ac) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x000174ac) ai_gene_pane_1_g

0xc550,	// (0x00014100) ai_gene_pane_1_t1_ParamLimits

0xc550,	// (0x00014100) ai_gene_pane_1_t1

0xc584,	// (0x00014134) grid_ai_soft_ind_pane

0xc522,	// (0x000140d2) ai_gene_pane_2_t1_ParamLimits

0xc522,	// (0x000140d2) ai_gene_pane_2_t1

0x93eb,	// (0x00010f9b) main_pane_empty_t1_ParamLimits

0x93eb,	// (0x00010f9b) main_pane_empty_t1

0x9408,	// (0x00010fb8) main_pane_empty_t2_ParamLimits

0x9408,	// (0x00010fb8) main_pane_empty_t2

0x9420,	// (0x00010fd0) main_pane_empty_t3_ParamLimits

0x9420,	// (0x00010fd0) main_pane_empty_t3

0x9433,	// (0x00010fe3) main_pane_empty_t4_ParamLimits

0x9433,	// (0x00010fe3) main_pane_empty_t4

0x9446,	// (0x00010ff6) main_pane_empty_t5_ParamLimits

0x9446,	// (0x00010ff6) main_pane_empty_t5

0x0004,

0xf574,	// (0x00017124) main_pane_empty_t_ParamLimits

0xf574,	// (0x00017124) main_pane_empty_t

0xa0e5,	// (0x00011c95) bg_popup_window_pane_ParamLimits

0xa0e5,	// (0x00011c95) bg_popup_window_pane

0xc29c,	// (0x00013e4c) find_popup_pane_cp2_ParamLimits

0xc29c,	// (0x00013e4c) find_popup_pane_cp2

0xc2a8,	// (0x00013e58) heading_pane_ParamLimits

0xc2a8,	// (0x00013e58) heading_pane

0x90e0,	// (0x00010c90) bg_popup_sub_pane

0xc215,	// (0x00013dc5) bg_popup_window_pane_g1_ParamLimits

0xc215,	// (0x00013dc5) bg_popup_window_pane_g1

0xc221,	// (0x00013dd1) bg_popup_window_pane_g2_ParamLimits

0xc221,	// (0x00013dd1) bg_popup_window_pane_g2

0xc22d,	// (0x00013ddd) bg_popup_window_pane_g3_ParamLimits

0xc22d,	// (0x00013ddd) bg_popup_window_pane_g3

0xc239,	// (0x00013de9) bg_popup_window_pane_g4_ParamLimits

0xc239,	// (0x00013de9) bg_popup_window_pane_g4

0xc245,	// (0x00013df5) bg_popup_window_pane_g5_ParamLimits

0xc245,	// (0x00013df5) bg_popup_window_pane_g5

0xc251,	// (0x00013e01) bg_popup_window_pane_g6_ParamLimits

0xc251,	// (0x00013e01) bg_popup_window_pane_g6

0xc25d,	// (0x00013e0d) bg_popup_window_pane_g7_ParamLimits

0xc25d,	// (0x00013e0d) bg_popup_window_pane_g7

0xc269,	// (0x00013e19) bg_popup_window_pane_g8_ParamLimits

0xc269,	// (0x00013e19) bg_popup_window_pane_g8

0xc275,	// (0x00013e25) bg_popup_window_pane_g9_ParamLimits

0xc275,	// (0x00013e25) bg_popup_window_pane_g9

0xc281,	// (0x00013e31) bg_popup_window_pane_g10_ParamLimits

0xc281,	// (0x00013e31) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00017474) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00017474) bg_popup_window_pane_g

0xc1aa,	// (0x00013d5a) bg_popup_heading_pane_ParamLimits

0xc1aa,	// (0x00013d5a) bg_popup_heading_pane

0x7fb7,	// (0x0000fb67) tabs_4_passive_pane_cp_srt_ParamLimits

0x7fb7,	// (0x0000fb67) tabs_4_passive_pane_cp_srt

0x7fc9,	// (0x0000fb79) tabs_4_passive_pane_srt_ParamLimits

0xc1be,	// (0x00013d6e) heading_pane_g2

0x7fc9,	// (0x0000fb79) tabs_4_passive_pane_srt

0xafdf,	// (0x00012b8f) bg_passive_tab_pane_cp3_srt_ParamLimits

0xafdf,	// (0x00012b8f) bg_passive_tab_pane_cp3_srt

0xc1c6,	// (0x00013d76) heading_pane_t1_ParamLimits

0xc1c6,	// (0x00013d76) heading_pane_t1

0xc1dd,	// (0x00013d8d) heading_pane_t2_ParamLimits

0xc1dd,	// (0x00013d8d) heading_pane_t2

0x0001,

0xf8bf,	// (0x0001746f) heading_pane_t_ParamLimits

0xf8bf,	// (0x0001746f) heading_pane_t

0xbd21,	// (0x000138d1) bg_popup_heading_pane_g1

0xbdca,	// (0x0001397a) bg_popup_heading_pane_g2

0xbdd2,	// (0x00013982) bg_popup_heading_pane_g3

0xbdda,	// (0x0001398a) bg_popup_heading_pane_g4

0xbde2,	// (0x00013992) bg_popup_heading_pane_g5

0xbdea,	// (0x0001399a) bg_popup_heading_pane_g6

0xbdf2,	// (0x000139a2) bg_popup_heading_pane_g7

0xbdfa,	// (0x000139aa) bg_popup_heading_pane_g8

0xbe02,	// (0x000139b2) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x0001742b) bg_popup_heading_pane_g

0xb4a8,	// (0x00013058) bg_popup_sub_pane_g1

0xb4b8,	// (0x00013068) bg_popup_sub_pane_g2

0xb4b0,	// (0x00013060) bg_popup_sub_pane_g3

0xb4c8,	// (0x00013078) bg_popup_sub_pane_g4

0xb4c0,	// (0x00013070) bg_popup_sub_pane_g5

0xb4d0,	// (0x00013080) bg_popup_sub_pane_g6

0xb4d8,	// (0x00013088) bg_popup_sub_pane_g7

0xb4e8,	// (0x00013098) bg_popup_sub_pane_g8

0xb4e0,	// (0x00013090) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00017405) bg_popup_sub_pane_g

0x9459,	// (0x00011009) bg_popup_window_pane_cp5_ParamLimits

0x9459,	// (0x00011009) bg_popup_window_pane_cp5

0x9475,	// (0x00011025) popup_note_window_g1_ParamLimits

0x9475,	// (0x00011025) popup_note_window_g1

0x9481,	// (0x00011031) popup_note_window_t1_ParamLimits

0x9481,	// (0x00011031) popup_note_window_t1

0x9497,	// (0x00011047) popup_note_window_t2_ParamLimits

0x9497,	// (0x00011047) popup_note_window_t2

0x94ad,	// (0x0001105d) popup_note_window_t3_ParamLimits

0x94ad,	// (0x0001105d) popup_note_window_t3

0x94c3,	// (0x00011073) popup_note_window_t4_ParamLimits

0x94c3,	// (0x00011073) popup_note_window_t4

0x94eb,	// (0x0001109b) popup_note_window_t5_ParamLimits

0x94eb,	// (0x0001109b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001712f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001712f) popup_note_window_t

0x9535,	// (0x000110e5) bg_popup_window_pane_cp6_ParamLimits

0x9535,	// (0x000110e5) bg_popup_window_pane_cp6

0xbc9d,	// (0x0001384d) popup_note_image_window_g1_ParamLimits

0xbc9d,	// (0x0001384d) popup_note_image_window_g1

0xbca9,	// (0x00013859) popup_note_image_window_g2_ParamLimits

0xbca9,	// (0x00013859) popup_note_image_window_g2

0x0001,

0xf849,	// (0x000173f9) popup_note_image_window_g_ParamLimits

0xf849,	// (0x000173f9) popup_note_image_window_g

0xbcc2,	// (0x00013872) popup_note_image_window_t1_ParamLimits

0xbcc2,	// (0x00013872) popup_note_image_window_t1

0xbcdb,	// (0x0001388b) popup_note_image_window_t2_ParamLimits

0xbcdb,	// (0x0001388b) popup_note_image_window_t2

0xbcf4,	// (0x000138a4) popup_note_image_window_t3_ParamLimits

0xbcf4,	// (0x000138a4) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x000173fe) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x000173fe) popup_note_image_window_t

0xbb6c,	// (0x0001371c) bg_popup_window_pane_cp7_ParamLimits

0xbb6c,	// (0x0001371c) bg_popup_window_pane_cp7

0xbb9c,	// (0x0001374c) popup_note_wait_window_g1_ParamLimits

0xbb9c,	// (0x0001374c) popup_note_wait_window_g1

0xbba8,	// (0x00013758) popup_note_wait_window_g2_ParamLimits

0xbba8,	// (0x00013758) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x000173e7) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x000173e7) popup_note_wait_window_g

0xbbc0,	// (0x00013770) popup_note_wait_window_t1_ParamLimits

0xbbc0,	// (0x00013770) popup_note_wait_window_t1

0xbbe7,	// (0x00013797) popup_note_wait_window_t2_ParamLimits

0xbbe7,	// (0x00013797) popup_note_wait_window_t2

0xbc04,	// (0x000137b4) popup_note_wait_window_t3_ParamLimits

0xbc04,	// (0x000137b4) popup_note_wait_window_t3

0xbc17,	// (0x000137c7) popup_note_wait_window_t4_ParamLimits

0xbc17,	// (0x000137c7) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x000173ee) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x000173ee) popup_note_wait_window_t

0xbc3c,	// (0x000137ec) wait_bar_pane_ParamLimits

0xbc3c,	// (0x000137ec) wait_bar_pane

0x90e0,	// (0x00010c90) wait_anim_pane

0x90e0,	// (0x00010c90) wait_border_pane

0x8ff9,	// (0x00010ba9) wait_anim_pane_g1

0x8ff9,	// (0x00010ba9) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x000172ae) wait_anim_pane_g

0xbb1c,	// (0x000136cc) wait_border_pane_g1

0xbb25,	// (0x000136d5) wait_border_pane_g2

0xbb2e,	// (0x000136de) wait_border_pane_g3

0x0002,

0xf830,	// (0x000173e0) wait_border_pane_g

0xb98c,	// (0x0001353c) bg_popup_window_pane_cp16_ParamLimits

0xb98c,	// (0x0001353c) bg_popup_window_pane_cp16

0xba8c,	// (0x0001363c) indicator_popup_pane_cp4_ParamLimits

0xba8c,	// (0x0001363c) indicator_popup_pane_cp4

0xbaa0,	// (0x00013650) popup_query_data_window_t1_ParamLimits

0xbaa0,	// (0x00013650) popup_query_data_window_t1

0xbab2,	// (0x00013662) popup_query_data_window_t2_ParamLimits

0xbab2,	// (0x00013662) popup_query_data_window_t2

0xbacb,	// (0x0001367b) popup_query_data_window_t3_ParamLimits

0xbacb,	// (0x0001367b) popup_query_data_window_t3

0x0002,

0xf829,	// (0x000173d9) popup_query_data_window_t_ParamLimits

0xf829,	// (0x000173d9) popup_query_data_window_t

0xbae5,	// (0x00013695) query_popup_data_pane_ParamLimits

0xbae5,	// (0x00013695) query_popup_data_pane

0xbaf9,	// (0x000136a9) query_popup_data_pane_cp1_ParamLimits

0xbaf9,	// (0x000136a9) query_popup_data_pane_cp1

0xb98c,	// (0x0001353c) bg_popup_window_pane_cp10_ParamLimits

0xb98c,	// (0x0001353c) bg_popup_window_pane_cp10

0xb9be,	// (0x0001356e) indicator_popup_pane_ParamLimits

0xb9be,	// (0x0001356e) indicator_popup_pane

0xb9e0,	// (0x00013590) popup_query_code_window_t1_ParamLimits

0xb9e0,	// (0x00013590) popup_query_code_window_t1

0xb9fa,	// (0x000135aa) popup_query_code_window_t2_ParamLimits

0xb9fa,	// (0x000135aa) popup_query_code_window_t2

0xba43,	// (0x000135f3) popup_query_code_window_t3_ParamLimits

0xba43,	// (0x000135f3) popup_query_code_window_t3

0x0002,

0xf822,	// (0x000173d2) popup_query_code_window_t_ParamLimits

0xf822,	// (0x000173d2) popup_query_code_window_t

0xba72,	// (0x00013622) query_popup_pane_ParamLimits

0xba72,	// (0x00013622) query_popup_pane

0x9535,	// (0x000110e5) bg_popup_window_pane_cp15_ParamLimits

0x9535,	// (0x000110e5) bg_popup_window_pane_cp15

0x9553,	// (0x00011103) indicator_popup_pane_cp1_ParamLimits

0x9553,	// (0x00011103) indicator_popup_pane_cp1

0x9566,	// (0x00011116) indicator_popup_pane_cp2_ParamLimits

0x9566,	// (0x00011116) indicator_popup_pane_cp2

0x9579,	// (0x00011129) popup_query_data_code_window_g1_ParamLimits

0x9579,	// (0x00011129) popup_query_data_code_window_g1

0x958c,	// (0x0001113c) popup_query_data_code_window_t1_ParamLimits

0x958c,	// (0x0001113c) popup_query_data_code_window_t1

0x959e,	// (0x0001114e) popup_query_data_code_window_t2_ParamLimits

0x959e,	// (0x0001114e) popup_query_data_code_window_t2

0x95b0,	// (0x00011160) popup_query_data_code_window_t3_ParamLimits

0x95b0,	// (0x00011160) popup_query_data_code_window_t3

0x95c6,	// (0x00011176) popup_query_data_code_window_t4_ParamLimits

0x95c6,	// (0x00011176) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001713a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001713a) popup_query_data_code_window_t

0x7c90,	// (0x0000f840) list_single_midp_graphic_pane_g3

0x95de,	// (0x0001118e) query_popup_data_pane_cp2_ParamLimits

0x95f1,	// (0x000111a1) query_popup_pane_cp2_ParamLimits

0x95f1,	// (0x000111a1) query_popup_pane_cp2

0x90e0,	// (0x00010c90) bg_popup_window_pane_cp11

0xb978,	// (0x00013528) heading_pane_cp5

0x96d5,	// (0x00011285) listscroll_popup_info_pane

0x90e0,	// (0x00010c90) input_focus_pane_cp3

0x9604,	// (0x000111b4) query_popup_pane_t1

0x9612,	// (0x000111c2) list_popup_info_pane_ParamLimits

0x9612,	// (0x000111c2) list_popup_info_pane

0x9621,	// (0x000111d1) listscroll_popup_info_pane_g1

0x9629,	// (0x000111d9) scroll_pane_cp7

0x9631,	// (0x000111e1) popup_info_list_pane_t1_ParamLimits

0x9631,	// (0x000111e1) popup_info_list_pane_t1

0x964b,	// (0x000111fb) popup_info_list_pane_t2_ParamLimits

0x964b,	// (0x000111fb) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00017143) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00017143) popup_info_list_pane_t

0x90e0,	// (0x00010c90) bg_popup_window_pane_cp12

0xcc7a,	// (0x0001482a) find_popup_pane

0x91c0,	// (0x00010d70) bg_popup_window_pane_cp3

0x9665,	// (0x00011215) heading_pane_cp3

0x9671,	// (0x00011221) listscroll_popup_graphic_pane

0x90e0,	// (0x00010c90) bg_popup_window_pane_cp4

0x96cd,	// (0x0001127d) heading_pane_cp4

0x96d5,	// (0x00011285) listscroll_popup_colour_pane

0x96dd,	// (0x0001128d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x96dd,	// (0x0001128d) cell_large_graphic_colour_none_popup_pane

0x96ed,	// (0x0001129d) grid_large_graphic_colour_popup_pane_ParamLimits

0x96ed,	// (0x0001129d) grid_large_graphic_colour_popup_pane

0x9709,	// (0x000112b9) listscroll_popup_colour_pane_g1_ParamLimits

0x9709,	// (0x000112b9) listscroll_popup_colour_pane_g1

0x9720,	// (0x000112d0) listscroll_popup_colour_pane_g2_ParamLimits

0x9720,	// (0x000112d0) listscroll_popup_colour_pane_g2

0x9734,	// (0x000112e4) listscroll_popup_colour_pane_g3_ParamLimits

0x9734,	// (0x000112e4) listscroll_popup_colour_pane_g3

0x9744,	// (0x000112f4) listscroll_popup_colour_pane_g4_ParamLimits

0x9744,	// (0x000112f4) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00017148) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00017148) listscroll_popup_colour_pane_g

0x9753,	// (0x00011303) scroll_pane_cp6_ParamLimits

0x9753,	// (0x00011303) scroll_pane_cp6

0x9765,	// (0x00011315) cell_large_graphic_colour_popup_pane_ParamLimits

0x9765,	// (0x00011315) cell_large_graphic_colour_popup_pane

0x9784,	// (0x00011334) cell_large_graphic_colour_none_popup_pane_t1

0x90e0,	// (0x00010c90) grid_highlight_pane_cp5

0x9793,	// (0x00011343) cell_large_graphic_colour_popup_pane_g1

0x979b,	// (0x0001134b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00017151) cell_large_graphic_colour_popup_pane_g

0x97a3,	// (0x00011353) cell_large_graphic_colour_popup_pane_g2_copy1

0x97ac,	// (0x0001135c) grid_highlight_pane_cp4

0x97b4,	// (0x00011364) bg_popup_window_pane_cp8_ParamLimits

0x97b4,	// (0x00011364) bg_popup_window_pane_cp8

0x97cf,	// (0x0001137f) popup_snote_single_text_window_g1_ParamLimits

0x97cf,	// (0x0001137f) popup_snote_single_text_window_g1

0x97e1,	// (0x00011391) popup_snote_single_text_window_t1_ParamLimits

0x97e1,	// (0x00011391) popup_snote_single_text_window_t1

0x97f4,	// (0x000113a4) popup_snote_single_text_window_t2_ParamLimits

0x97f4,	// (0x000113a4) popup_snote_single_text_window_t2

0x9807,	// (0x000113b7) popup_snote_single_text_window_t3_ParamLimits

0x9807,	// (0x000113b7) popup_snote_single_text_window_t3

0x9840,	// (0x000113f0) popup_snote_single_text_window_t4_ParamLimits

0x9840,	// (0x000113f0) popup_snote_single_text_window_t4

0x9874,	// (0x00011424) popup_snote_single_text_window_t5_ParamLimits

0x9874,	// (0x00011424) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00017156) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00017156) popup_snote_single_text_window_t

0x98a3,	// (0x00011453) bg_popup_window_pane_cp9_ParamLimits

0x98a3,	// (0x00011453) bg_popup_window_pane_cp9

0x97cf,	// (0x0001137f) popup_snote_single_graphic_window_g1_ParamLimits

0x97cf,	// (0x0001137f) popup_snote_single_graphic_window_g1

0x98b1,	// (0x00011461) popup_snote_single_graphic_window_g2_ParamLimits

0x98b1,	// (0x00011461) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00017161) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00017161) popup_snote_single_graphic_window_g

0x98bd,	// (0x0001146d) popup_snote_single_graphic_window_t1_ParamLimits

0x98bd,	// (0x0001146d) popup_snote_single_graphic_window_t1

0x98d0,	// (0x00011480) popup_snote_single_graphic_window_t2_ParamLimits

0x98d0,	// (0x00011480) popup_snote_single_graphic_window_t2

0x9807,	// (0x000113b7) popup_snote_single_graphic_window_t3_ParamLimits

0x9807,	// (0x000113b7) popup_snote_single_graphic_window_t3

0x9840,	// (0x000113f0) popup_snote_single_graphic_window_t4_ParamLimits

0x9840,	// (0x000113f0) popup_snote_single_graphic_window_t4

0x9874,	// (0x00011424) popup_snote_single_graphic_window_t5_ParamLimits

0x9874,	// (0x00011424) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00017166) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00017166) popup_snote_single_graphic_window_t

0xcbe7,	// (0x00014797) grid_graphic_popup_pane_ParamLimits

0xcbe7,	// (0x00014797) grid_graphic_popup_pane

0xcc0a,	// (0x000147ba) listscroll_popup_graphic_pane_g1_ParamLimits

0xcc0a,	// (0x000147ba) listscroll_popup_graphic_pane_g1

0xcc1e,	// (0x000147ce) listscroll_popup_graphic_pane_g2_ParamLimits

0xcc1e,	// (0x000147ce) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x0001754f) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x0001754f) listscroll_popup_graphic_pane_g

0xcc32,	// (0x000147e2) scroll_pane_cp5

0xcb8a,	// (0x0001473a) cell_graphic_popup_pane_ParamLimits

0xcb8a,	// (0x0001473a) cell_graphic_popup_pane

0xcb6b,	// (0x0001471b) cell_graphic_popup_pane_g1

0xcb73,	// (0x00014723) cell_graphic_popup_pane_g2

0x97a3,	// (0x00011353) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00017548) cell_graphic_popup_pane_g

0xcb7c,	// (0x0001472c) cell_graphic_popup_pane_t2

0x97ac,	// (0x0001135c) grid_highlight_pane_cp3

0x98f5,	// (0x000114a5) list_gen_pane_ParamLimits

0x98f5,	// (0x000114a5) list_gen_pane

0x9926,	// (0x000114d6) scroll_pane

0xcaeb,	// (0x0001469b) bg_list_pane_g1_ParamLimits

0xcaeb,	// (0x0001469b) bg_list_pane_g1

0xcb02,	// (0x000146b2) bg_list_pane_g2_ParamLimits

0xcb02,	// (0x000146b2) bg_list_pane_g2

0xcb15,	// (0x000146c5) bg_list_pane_g3_ParamLimits

0xcb15,	// (0x000146c5) bg_list_pane_g3

0xcb27,	// (0x000146d7) bg_list_pane_g4_ParamLimits

0xcb27,	// (0x000146d7) bg_list_pane_g4

0xcb39,	// (0x000146e9) bg_list_pane_g5_ParamLimits

0xcb39,	// (0x000146e9) bg_list_pane_g5

0x0004,

0xf98d,	// (0x0001753d) bg_list_pane_g_ParamLimits

0xf98d,	// (0x0001753d) bg_list_pane_g

0xca1a,	// (0x000145ca) list_double2_graphic_large_graphic_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double2_graphic_large_graphic_pane

0xca1a,	// (0x000145ca) list_double2_graphic_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double2_graphic_pane

0xca1a,	// (0x000145ca) list_double2_large_graphic_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double2_large_graphic_pane

0xca1a,	// (0x000145ca) list_double2_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double2_pane

0xca1a,	// (0x000145ca) list_double_graphic_heading_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double_graphic_heading_pane

0xca1a,	// (0x000145ca) list_double_graphic_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double_graphic_pane

0xca1a,	// (0x000145ca) list_double_heading_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double_heading_pane

0xca1a,	// (0x000145ca) list_double_large_graphic_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double_large_graphic_pane

0xca1a,	// (0x000145ca) list_double_number_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double_number_pane

0xca1a,	// (0x000145ca) list_double_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double_pane

0xca1a,	// (0x000145ca) list_double_time_pane_ParamLimits

0xca1a,	// (0x000145ca) list_double_time_pane

0xca1a,	// (0x000145ca) list_setting_number_pane_ParamLimits

0xca1a,	// (0x000145ca) list_setting_number_pane

0xca1a,	// (0x000145ca) list_setting_pane_ParamLimits

0xca1a,	// (0x000145ca) list_setting_pane

0xca81,	// (0x00014631) list_single_2graphic_pane_ParamLimits

0xca81,	// (0x00014631) list_single_2graphic_pane

0xca81,	// (0x00014631) list_single_graphic_heading_pane_ParamLimits

0xca81,	// (0x00014631) list_single_graphic_heading_pane

0xca81,	// (0x00014631) list_single_graphic_pane_ParamLimits

0xca81,	// (0x00014631) list_single_graphic_pane

0xca81,	// (0x00014631) list_single_heading_pane_ParamLimits

0xca81,	// (0x00014631) list_single_heading_pane

0xcad5,	// (0x00014685) list_single_large_graphic_pane_ParamLimits

0xcad5,	// (0x00014685) list_single_large_graphic_pane

0xca81,	// (0x00014631) list_single_number_heading_pane_ParamLimits

0xca81,	// (0x00014631) list_single_number_heading_pane

0xca81,	// (0x00014631) list_single_number_pane_ParamLimits

0xca81,	// (0x00014631) list_single_number_pane

0xca81,	// (0x00014631) list_single_pane_ParamLimits

0xca81,	// (0x00014631) list_single_pane

0x90e0,	// (0x00010c90) list_highlight_pane_cp1

0x9967,	// (0x00011517) list_single_pane_g1_ParamLimits

0x9967,	// (0x00011517) list_single_pane_g1

0x9973,	// (0x00011523) list_single_pane_g2_ParamLimits

0x9973,	// (0x00011523) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00017178) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00017178) list_single_pane_g

0xc9e5,	// (0x00014595) list_single_pane_t1_ParamLimits

0xc9e5,	// (0x00014595) list_single_pane_t1

0x9967,	// (0x00011517) list_single_number_pane_g1_ParamLimits

0x9967,	// (0x00011517) list_single_number_pane_g1

0x9973,	// (0x00011523) list_single_number_pane_g2_ParamLimits

0x9973,	// (0x00011523) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00017178) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00017178) list_single_number_pane_g

0x997f,	// (0x0001152f) list_single_number_pane_t1_ParamLimits

0x997f,	// (0x0001152f) list_single_number_pane_t1

0xc7d8,	// (0x00014388) list_single_number_pane_t2_ParamLimits

0xc7d8,	// (0x00014388) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x000174fe) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x000174fe) list_single_number_pane_t

0x995b,	// (0x0001150b) list_single_graphic_pane_g1_ParamLimits

0x995b,	// (0x0001150b) list_single_graphic_pane_g1

0x9967,	// (0x00011517) list_single_graphic_pane_g2_ParamLimits

0x9967,	// (0x00011517) list_single_graphic_pane_g2

0x9973,	// (0x00011523) list_single_graphic_pane_g3_ParamLimits

0x9973,	// (0x00011523) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00017171) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00017171) list_single_graphic_pane_g

0x997f,	// (0x0001152f) list_single_graphic_pane_t1_ParamLimits

0x997f,	// (0x0001152f) list_single_graphic_pane_t1

0x9967,	// (0x00011517) list_single_heading_pane_g1_ParamLimits

0x9967,	// (0x00011517) list_single_heading_pane_g1

0x9973,	// (0x00011523) list_single_heading_pane_g2_ParamLimits

0x9973,	// (0x00011523) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00017178) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00017178) list_single_heading_pane_g

0x9995,	// (0x00011545) list_single_heading_pane_t1_ParamLimits

0x9995,	// (0x00011545) list_single_heading_pane_t1

0x99ab,	// (0x0001155b) list_single_heading_pane_t2_ParamLimits

0x99ab,	// (0x0001155b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001717d) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001717d) list_single_heading_pane_t

0x9967,	// (0x00011517) list_single_number_heading_pane_g1_ParamLimits

0x9967,	// (0x00011517) list_single_number_heading_pane_g1

0x9973,	// (0x00011523) list_single_number_heading_pane_g2_ParamLimits

0x9973,	// (0x00011523) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00017178) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00017178) list_single_number_heading_pane_g

0x9995,	// (0x00011545) list_single_number_heading_pane_t1_ParamLimits

0x9995,	// (0x00011545) list_single_number_heading_pane_t1

0x99bd,	// (0x0001156d) list_single_number_heading_pane_t2_ParamLimits

0x99bd,	// (0x0001156d) list_single_number_heading_pane_t2

0x99cf,	// (0x0001157f) list_single_number_heading_pane_t3_ParamLimits

0x99cf,	// (0x0001157f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00017182) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00017182) list_single_number_heading_pane_t

0x995b,	// (0x0001150b) list_single_graphic_heading_pane_g1_ParamLimits

0x995b,	// (0x0001150b) list_single_graphic_heading_pane_g1

0x99e1,	// (0x00011591) list_single_graphic_heading_pane_g4_ParamLimits

0x99e1,	// (0x00011591) list_single_graphic_heading_pane_g4

0x9973,	// (0x00011523) list_single_graphic_heading_pane_g5_ParamLimits

0x9973,	// (0x00011523) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00017189) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00017189) list_single_graphic_heading_pane_g

0x9995,	// (0x00011545) list_single_graphic_heading_pane_t1_ParamLimits

0x9995,	// (0x00011545) list_single_graphic_heading_pane_t1

0x99f0,	// (0x000115a0) list_single_graphic_heading_pane_t2_ParamLimits

0x99f0,	// (0x000115a0) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00017190) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00017190) list_single_graphic_heading_pane_t

0x9a02,	// (0x000115b2) list_single_large_graphic_pane_g1_ParamLimits

0x9a02,	// (0x000115b2) list_single_large_graphic_pane_g1

0x9a0e,	// (0x000115be) list_single_large_graphic_pane_g2_ParamLimits

0x9a0e,	// (0x000115be) list_single_large_graphic_pane_g2

0x9a1a,	// (0x000115ca) list_single_large_graphic_pane_g3_ParamLimits

0x9a1a,	// (0x000115ca) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00017195) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00017195) list_single_large_graphic_pane_g

0xbb25,	// (0x000136d5) wait_border_pane_g2_copy1

0x9a26,	// (0x000115d6) list_single_large_graphic_pane_g4_cp2

0x9a2e,	// (0x000115de) list_single_large_graphic_pane_t1_ParamLimits

0x9a2e,	// (0x000115de) list_single_large_graphic_pane_t1

0x9a44,	// (0x000115f4) list_double_pane_g1_ParamLimits

0x9a44,	// (0x000115f4) list_double_pane_g1

0x9a50,	// (0x00011600) list_double_pane_g2_ParamLimits

0x9a50,	// (0x00011600) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001719c) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001719c) list_double_pane_g

0x9a5c,	// (0x0001160c) list_double_pane_t1_ParamLimits

0x9a5c,	// (0x0001160c) list_double_pane_t1

0x9a72,	// (0x00011622) list_double_pane_t2_ParamLimits

0x9a72,	// (0x00011622) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000171a1) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000171a1) list_double_pane_t

0x9a84,	// (0x00011634) list_double2_pane_g1_ParamLimits

0x9a84,	// (0x00011634) list_double2_pane_g1

0x9a93,	// (0x00011643) list_double2_pane_g2_ParamLimits

0x9a93,	// (0x00011643) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000171a6) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000171a6) list_double2_pane_g

0x9a9f,	// (0x0001164f) list_double2_pane_t1_ParamLimits

0x9a9f,	// (0x0001164f) list_double2_pane_t1

0x9ab5,	// (0x00011665) list_double2_pane_t2_ParamLimits

0x9ab5,	// (0x00011665) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000171ab) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000171ab) list_double2_pane_t

0x9a44,	// (0x000115f4) list_double_number_pane_g1_ParamLimits

0x9a44,	// (0x000115f4) list_double_number_pane_g1

0x9a50,	// (0x00011600) list_double_number_pane_g2_ParamLimits

0x9a50,	// (0x00011600) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001719c) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001719c) list_double_number_pane_g

0x9ac7,	// (0x00011677) list_double_number_pane_t1_ParamLimits

0x9ac7,	// (0x00011677) list_double_number_pane_t1

0x9ad9,	// (0x00011689) list_double_number_pane_t2_ParamLimits

0x9ad9,	// (0x00011689) list_double_number_pane_t2

0x9aef,	// (0x0001169f) list_double_number_pane_t3_ParamLimits

0x9aef,	// (0x0001169f) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000171b0) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000171b0) list_double_number_pane_t

0x9b01,	// (0x000116b1) list_double_graphic_pane_g1_ParamLimits

0x9b01,	// (0x000116b1) list_double_graphic_pane_g1

0x9b0d,	// (0x000116bd) list_double_graphic_pane_g2_ParamLimits

0x9b0d,	// (0x000116bd) list_double_graphic_pane_g2

0x9b1c,	// (0x000116cc) list_double_graphic_pane_g3_ParamLimits

0x9b1c,	// (0x000116cc) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000171b7) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000171b7) list_double_graphic_pane_g

0x9b34,	// (0x000116e4) list_double_graphic_pane_t1_ParamLimits

0x9b34,	// (0x000116e4) list_double_graphic_pane_t1

0x9b4a,	// (0x000116fa) list_double_graphic_pane_t2_ParamLimits

0x9b4a,	// (0x000116fa) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000171c0) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000171c0) list_double_graphic_pane_t

0x9b5c,	// (0x0001170c) list_double2_graphic_pane_g1_ParamLimits

0x9b5c,	// (0x0001170c) list_double2_graphic_pane_g1

0x9b68,	// (0x00011718) list_double2_graphic_pane_g2_ParamLimits

0x9b68,	// (0x00011718) list_double2_graphic_pane_g2

0x9a93,	// (0x00011643) list_double2_graphic_pane_g3_ParamLimits

0x9a93,	// (0x00011643) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000171c5) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000171c5) list_double2_graphic_pane_g

0x9b74,	// (0x00011724) list_double2_graphic_pane_t1_ParamLimits

0x9b74,	// (0x00011724) list_double2_graphic_pane_t1

0x9b8a,	// (0x0001173a) list_double2_graphic_pane_t2_ParamLimits

0x9b8a,	// (0x0001173a) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000171cc) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000171cc) list_double2_graphic_pane_t

0x9b9c,	// (0x0001174c) list_double_large_graphic_pane_g1_ParamLimits

0x9b9c,	// (0x0001174c) list_double_large_graphic_pane_g1

0x9bc5,	// (0x00011775) list_double_large_graphic_pane_g2_ParamLimits

0x9bc5,	// (0x00011775) list_double_large_graphic_pane_g2

0x9a50,	// (0x00011600) list_double_large_graphic_pane_g3_ParamLimits

0x9a50,	// (0x00011600) list_double_large_graphic_pane_g3

0x9bd4,	// (0x00011784) list_double_large_graphic_pane_g4_ParamLimits

0x9bd4,	// (0x00011784) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000171d1) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000171d1) list_double_large_graphic_pane_g

0x9bfa,	// (0x000117aa) list_double_large_graphic_pane_t1_ParamLimits

0x9bfa,	// (0x000117aa) list_double_large_graphic_pane_t1

0x9c13,	// (0x000117c3) list_double_large_graphic_pane_t2_ParamLimits

0x9c13,	// (0x000117c3) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000171dc) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000171dc) list_double_large_graphic_pane_t

0x9c25,	// (0x000117d5) list_double2_large_graphic_pane_g1_ParamLimits

0x9c25,	// (0x000117d5) list_double2_large_graphic_pane_g1

0x9a84,	// (0x00011634) list_double2_large_graphic_pane_g2_ParamLimits

0x9a84,	// (0x00011634) list_double2_large_graphic_pane_g2

0x9a93,	// (0x00011643) list_double2_large_graphic_pane_g3_ParamLimits

0x9a93,	// (0x00011643) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000171e1) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000171e1) list_double2_large_graphic_pane_g

0x9c31,	// (0x000117e1) list_double2_large_graphic_pane_t1_ParamLimits

0x9c31,	// (0x000117e1) list_double2_large_graphic_pane_t1

0x9c47,	// (0x000117f7) list_double2_large_graphic_pane_t2_ParamLimits

0x9c47,	// (0x000117f7) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000171e8) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000171e8) list_double2_large_graphic_pane_t

0x9c59,	// (0x00011809) list_double_heading_pane_g1_ParamLimits

0x9c59,	// (0x00011809) list_double_heading_pane_g1

0x9c68,	// (0x00011818) list_double_heading_pane_g2_ParamLimits

0x9c68,	// (0x00011818) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000171ed) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000171ed) list_double_heading_pane_g

0x9c74,	// (0x00011824) list_double_heading_pane_t1_ParamLimits

0x9c74,	// (0x00011824) list_double_heading_pane_t1

0x9ab5,	// (0x00011665) list_double_heading_pane_t2_ParamLimits

0x9ab5,	// (0x00011665) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000171f2) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000171f2) list_double_heading_pane_t

0x9b01,	// (0x000116b1) list_double_graphic_heading_pane_g1_ParamLimits

0x9b01,	// (0x000116b1) list_double_graphic_heading_pane_g1

0x9c59,	// (0x00011809) list_double_graphic_heading_pane_g2_ParamLimits

0x9c59,	// (0x00011809) list_double_graphic_heading_pane_g2

0x9c68,	// (0x00011818) list_double_graphic_heading_pane_g3_ParamLimits

0x9c68,	// (0x00011818) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000171f7) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000171f7) list_double_graphic_heading_pane_g

0x9c8a,	// (0x0001183a) list_double_graphic_heading_pane_t1_ParamLimits

0x9c8a,	// (0x0001183a) list_double_graphic_heading_pane_t1

0x9b8a,	// (0x0001173a) list_double_graphic_heading_pane_t2_ParamLimits

0x9b8a,	// (0x0001173a) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000171fe) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000171fe) list_double_graphic_heading_pane_t

0x9bc5,	// (0x00011775) list_double_time_pane_g1_ParamLimits

0x9bc5,	// (0x00011775) list_double_time_pane_g1

0x9a50,	// (0x00011600) list_double_time_pane_g2_ParamLimits

0x9a50,	// (0x00011600) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00017203) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00017203) list_double_time_pane_g

0x9ca0,	// (0x00011850) list_double_time_pane_t1_ParamLimits

0x9ca0,	// (0x00011850) list_double_time_pane_t1

0x9cb6,	// (0x00011866) list_double_time_pane_t2_ParamLimits

0x9cb6,	// (0x00011866) list_double_time_pane_t2

0x9cc8,	// (0x00011878) list_double_time_pane_t3_ParamLimits

0x9cc8,	// (0x00011878) list_double_time_pane_t3

0x9cda,	// (0x0001188a) list_double_time_pane_t4_ParamLimits

0x9cda,	// (0x0001188a) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00017208) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00017208) list_double_time_pane_t

0x9b68,	// (0x00011718) list_setting_pane_g1_ParamLimits

0x9b68,	// (0x00011718) list_setting_pane_g1

0x9a93,	// (0x00011643) list_setting_pane_g2_ParamLimits

0x9a93,	// (0x00011643) list_setting_pane_g2

0x0001,

0xf661,	// (0x00017211) list_setting_pane_g_ParamLimits

0xf661,	// (0x00017211) list_setting_pane_g

0x9cec,	// (0x0001189c) list_setting_pane_t1_ParamLimits

0x9cec,	// (0x0001189c) list_setting_pane_t1

0x9d03,	// (0x000118b3) list_setting_pane_t2_ParamLimits

0x9d03,	// (0x000118b3) list_setting_pane_t2

0x0002,

0xf666,	// (0x00017216) list_setting_pane_t_ParamLimits

0xf666,	// (0x00017216) list_setting_pane_t

0x9d40,	// (0x000118f0) set_value_pane_cp_ParamLimits

0x9d40,	// (0x000118f0) set_value_pane_cp

0x9b68,	// (0x00011718) list_setting_number_pane_g1_ParamLimits

0x9b68,	// (0x00011718) list_setting_number_pane_g1

0x9a93,	// (0x00011643) list_setting_number_pane_g2_ParamLimits

0x9a93,	// (0x00011643) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00017211) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00017211) list_setting_number_pane_g

0x9d4c,	// (0x000118fc) list_setting_number_pane_t1_ParamLimits

0x9d4c,	// (0x000118fc) list_setting_number_pane_t1

0x9d5e,	// (0x0001190e) list_setting_number_pane_t2_ParamLimits

0x9d5e,	// (0x0001190e) list_setting_number_pane_t2

0x9d75,	// (0x00011925) list_setting_number_pane_t3_ParamLimits

0x9d75,	// (0x00011925) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001721d) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001721d) list_setting_number_pane_t

0x9d40,	// (0x000118f0) set_value_pane_ParamLimits

0x9d40,	// (0x000118f0) set_value_pane

0x9db6,	// (0x00011966) bg_set_opt_pane_ParamLimits

0x9db6,	// (0x00011966) bg_set_opt_pane

0x9dd7,	// (0x00011987) set_value_pane_t1

0x9de5,	// (0x00011995) slider_set_pane_cp3

0x9dee,	// (0x0001199e) volume_small_pane_cp

0x9df7,	// (0x000119a7) list_form_gen_pane

0x994a,	// (0x000114fa) scroll_pane_cp8

0x9e10,	// (0x000119c0) form_field_data_pane_ParamLimits

0x9e10,	// (0x000119c0) form_field_data_pane

0x9e30,	// (0x000119e0) form_field_data_wide_pane_ParamLimits

0x9e30,	// (0x000119e0) form_field_data_wide_pane

0x9e4f,	// (0x000119ff) form_field_popup_pane_ParamLimits

0x9e4f,	// (0x000119ff) form_field_popup_pane

0x9e67,	// (0x00011a17) form_field_popup_wide_pane_ParamLimits

0x9e67,	// (0x00011a17) form_field_popup_wide_pane

0x9e7e,	// (0x00011a2e) form_field_slider_pane_ParamLimits

0x9e7e,	// (0x00011a2e) form_field_slider_pane

0x9e91,	// (0x00011a41) form_field_slider_wide_pane_ParamLimits

0x9e91,	// (0x00011a41) form_field_slider_wide_pane

0x9ea4,	// (0x00011a54) data_form_pane

0x9eb8,	// (0x00011a68) form_field_data_pane_t1

0x9ed0,	// (0x00011a80) input_focus_pane

0x9ede,	// (0x00011a8e) data_form_wide_pane

0x9f0a,	// (0x00011aba) form_field_data_wide_pane_t1

0x97c1,	// (0x00011371) input_focus_pane_cp6

0x9f29,	// (0x00011ad9) form_field_popup_pane_t1

0x9ed0,	// (0x00011a80) input_focus_pane_cp7

0x9ea4,	// (0x00011a54) list_form_pane

0x9f49,	// (0x00011af9) form_field_popup_wide_pane_t1

0x9ed0,	// (0x00011a80) input_focus_pane_cp8

0x9f5e,	// (0x00011b0e) list_form_wide_pane

0x9f75,	// (0x00011b25) form_field_slider_pane_t1_ParamLimits

0x9f75,	// (0x00011b25) form_field_slider_pane_t1

0x9f8b,	// (0x00011b3b) form_field_slider_pane_t2_ParamLimits

0x9f8b,	// (0x00011b3b) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001722d) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001722d) form_field_slider_pane_t

0x9459,	// (0x00011009) input_focus_pane_cp9_ParamLimits

0x9459,	// (0x00011009) input_focus_pane_cp9

0x9f9d,	// (0x00011b4d) slider_cont_pane_ParamLimits

0x9f9d,	// (0x00011b4d) slider_cont_pane

0x9fb1,	// (0x00011b61) form_field_slider_wide_pane_t1_ParamLimits

0x9fb1,	// (0x00011b61) form_field_slider_wide_pane_t1

0x9fc3,	// (0x00011b73) form_field_slider_wide_pane_t2_ParamLimits

0x9fc3,	// (0x00011b73) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00017232) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00017232) form_field_slider_wide_pane_t

0x9459,	// (0x00011009) input_focus_pane_cp10_ParamLimits

0x9459,	// (0x00011009) input_focus_pane_cp10

0x9fd5,	// (0x00011b85) slider_cont_pane_cp1_ParamLimits

0x9fd5,	// (0x00011b85) slider_cont_pane_cp1

0x9feb,	// (0x00011b9b) slider_form_pane_cp

0x9ff3,	// (0x00011ba3) input_focus_pane_g1

0x9ffb,	// (0x00011bab) input_focus_pane_g2

0xa003,	// (0x00011bb3) input_focus_pane_g3

0xa00b,	// (0x00011bbb) input_focus_pane_g4

0xa013,	// (0x00011bc3) input_focus_pane_g5

0xa01b,	// (0x00011bcb) input_focus_pane_g6

0xa023,	// (0x00011bd3) input_focus_pane_g7

0xa02b,	// (0x00011bdb) input_focus_pane_g8

0xa033,	// (0x00011be3) input_focus_pane_g9

0x8ff9,	// (0x00010ba9) input_focus_pane_g10

0x0009,

0xf687,	// (0x00017237) input_focus_pane_g

0xbb2e,	// (0x000136de) wait_border_pane_g3_copy1

0xa03b,	// (0x00011beb) data_form_pane_t1

0x8ff9,	// (0x00010ba9) wait_anim_pane_g1_copy1

0xc9cb,	// (0x0001457b) data_form_wide_pane_t1

0xa055,	// (0x00011c05) list_form_graphic_pane_cp_ParamLimits

0xa055,	// (0x00011c05) list_form_graphic_pane_cp

0xc998,	// (0x00014548) slider_form_pane_g1

0xc9a1,	// (0x00014551) slider_form_pane_g2

0x0006,

0xf97e,	// (0x0001752e) slider_form_pane_g

0xa06a,	// (0x00011c1a) list_form_graphic_pane_ParamLimits

0xa06a,	// (0x00011c1a) list_form_graphic_pane

0xa080,	// (0x00011c30) list_form_graphic_pane_g1

0xa088,	// (0x00011c38) list_form_graphic_pane_t1_ParamLimits

0xa088,	// (0x00011c38) list_form_graphic_pane_t1

0x91c0,	// (0x00010d70) list_highlight_pane_cp5_ParamLimits

0x91c0,	// (0x00010d70) list_highlight_pane_cp5

0xa09d,	// (0x00011c4d) find_pane_g1

0xa0a6,	// (0x00011c56) input_find_pane

0xa0af,	// (0x00011c5f) input_find_pane_g1_ParamLimits

0xa0af,	// (0x00011c5f) input_find_pane_g1

0xa0bb,	// (0x00011c6b) input_find_pane_t1_ParamLimits

0xa0bb,	// (0x00011c6b) input_find_pane_t1

0xa0d0,	// (0x00011c80) input_find_pane_t2_ParamLimits

0xa0d0,	// (0x00011c80) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001724c) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001724c) input_find_pane_t

0xa0e5,	// (0x00011c95) input_focus_pane_cp5_ParamLimits

0xa0e5,	// (0x00011c95) input_focus_pane_cp5

0x9459,	// (0x00011009) bg_popup_window_pane_cp2_ParamLimits

0x9459,	// (0x00011009) bg_popup_window_pane_cp2

0xa0ff,	// (0x00011caf) listscroll_menu_pane_ParamLimits

0xa0ff,	// (0x00011caf) listscroll_menu_pane

0xa10b,	// (0x00011cbb) popup_submenu_window_ParamLimits

0xa10b,	// (0x00011cbb) popup_submenu_window

0xa12f,	// (0x00011cdf) find_popup_pane_g1

0xa137,	// (0x00011ce7) input_popup_find_pane_cp

0xa0e5,	// (0x00011c95) input_focus_pane_cp4_ParamLimits

0xa0e5,	// (0x00011c95) input_focus_pane_cp4

0xa14d,	// (0x00011cfd) input_popup_find_pane_t1_ParamLimits

0xa14d,	// (0x00011cfd) input_popup_find_pane_t1

0x90e0,	// (0x00010c90) bg_popup_sub_pane_cp

0xa17b,	// (0x00011d2b) listscroll_popup_sub_pane

0xa183,	// (0x00011d33) list_submenu_pane_ParamLimits

0xa183,	// (0x00011d33) list_submenu_pane

0xa194,	// (0x00011d44) scroll_pane_cp4

0xa19c,	// (0x00011d4c) list_single_popup_submenu_pane_ParamLimits

0xa19c,	// (0x00011d4c) list_single_popup_submenu_pane

0xa1ae,	// (0x00011d5e) list_single_popup_submenu_pane_g1

0xa1b6,	// (0x00011d66) list_single_popup_submenu_pane_t1_ParamLimits

0xa1b6,	// (0x00011d66) list_single_popup_submenu_pane_t1

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp1_ParamLimits

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp1

0xa1cb,	// (0x00011d7b) tabs_2_active_pane_g1

0xa1d3,	// (0x00011d83) tabs_2_active_pane_t1

0x91c0,	// (0x00010d70) bg_passive_tab_pane_cp1_ParamLimits

0x91c0,	// (0x00010d70) bg_passive_tab_pane_cp1

0xa1cb,	// (0x00011d7b) tabs_2_passive_pane_g1

0xa1d3,	// (0x00011d83) tabs_2_passive_pane_t1

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp4

0xa1f3,	// (0x00011da3) tabs_2_long_active_pane_t1

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp4

0x7c98,	// (0x0000f848) list_single_midp_graphic_pane_g4_ParamLimits

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp5

0xa212,	// (0x00011dc2) tabs_3_long_active_pane_t1

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp5

0x7c98,	// (0x0000f848) list_single_midp_graphic_pane_g4

0x91c0,	// (0x00010d70) bg_popup_window_pane_cp13_ParamLimits

0x91c0,	// (0x00010d70) bg_popup_window_pane_cp13

0xa22d,	// (0x00011ddd) listscroll_popup_fast_pane_ParamLimits

0xa22d,	// (0x00011ddd) listscroll_popup_fast_pane

0xa23c,	// (0x00011dec) grid_popup_fast_pane_ParamLimits

0xa23c,	// (0x00011dec) grid_popup_fast_pane

0xa24e,	// (0x00011dfe) scroll_pane_cp9_ParamLimits

0xa24e,	// (0x00011dfe) scroll_pane_cp9

0xe5c3,	// (0x00016173) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe5c3,	// (0x00016173) list_single_graphic_hl_pane_t1_cp2

0xa272,	// (0x00011e22) input_focus_pane_cp20_ParamLimits

0xa272,	// (0x00011e22) input_focus_pane_cp20

0xa280,	// (0x00011e30) query_popup_data_pane_t1_ParamLimits

0xa280,	// (0x00011e30) query_popup_data_pane_t1

0xa293,	// (0x00011e43) query_popup_data_pane_t2_ParamLimits

0xa293,	// (0x00011e43) query_popup_data_pane_t2

0xa2d9,	// (0x00011e89) query_popup_data_pane_t3_ParamLimits

0xa2d9,	// (0x00011e89) query_popup_data_pane_t3

0xa31a,	// (0x00011eca) query_popup_data_pane_t4_ParamLimits

0xa31a,	// (0x00011eca) query_popup_data_pane_t4

0xa356,	// (0x00011f06) query_popup_data_pane_t5_ParamLimits

0xa356,	// (0x00011f06) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00017251) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00017251) query_popup_data_pane_t

0x9ff3,	// (0x00011ba3) bg_set_opt_pane_g1

0x9ffb,	// (0x00011bab) bg_set_opt_pane_g2

0xa003,	// (0x00011bb3) bg_set_opt_pane_g3

0xa00b,	// (0x00011bbb) bg_set_opt_pane_g4

0xa013,	// (0x00011bc3) bg_set_opt_pane_g5

0xa01b,	// (0x00011bcb) bg_set_opt_pane_g6

0xa023,	// (0x00011bd3) bg_set_opt_pane_g7

0xa02b,	// (0x00011bdb) bg_set_opt_pane_g8

0xa033,	// (0x00011be3) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001725c) bg_set_opt_pane_g

0x73f8,	// (0x0000efa8) control_top_pane_stacon_ParamLimits

0x73f8,	// (0x0000efa8) control_top_pane_stacon

0x744b,	// (0x0000effb) signal_pane_stacon_ParamLimits

0x744b,	// (0x0000effb) signal_pane_stacon

0xa99a,	// (0x0001254a) stacon_top_pane_g1_ParamLimits

0xa99a,	// (0x0001254a) stacon_top_pane_g1

0x7470,	// (0x0000f020) title_pane_stacon_ParamLimits

0x7470,	// (0x0000f020) title_pane_stacon

0x7492,	// (0x0000f042) uni_indicator_pane_stacon_ParamLimits

0x7492,	// (0x0000f042) uni_indicator_pane_stacon

0x74a7,	// (0x0000f057) battery_pane_stacon_ParamLimits

0x74a7,	// (0x0000f057) battery_pane_stacon

0x74e7,	// (0x0000f097) control_bottom_pane_stacon_ParamLimits

0x74e7,	// (0x0000f097) control_bottom_pane_stacon

0x7506,	// (0x0000f0b6) navi_pane_stacon_ParamLimits

0x7506,	// (0x0000f0b6) navi_pane_stacon

0xa9bc,	// (0x0001256c) stacon_bottom_pane_g1_ParamLimits

0xa9bc,	// (0x0001256c) stacon_bottom_pane_g1

0xa38d,	// (0x00011f3d) aid_levels_signal_lsc_ParamLimits

0xa38d,	// (0x00011f3d) aid_levels_signal_lsc

0x71c4,	// (0x0000ed74) signal_pane_stacon_g1_ParamLimits

0x71c4,	// (0x0000ed74) signal_pane_stacon_g1

0x71d0,	// (0x0000ed80) signal_pane_stacon_g2_ParamLimits

0x71d0,	// (0x0000ed80) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001726f) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001726f) signal_pane_stacon_g

0x7204,	// (0x0000edb4) title_pane_stacon_t1_ParamLimits

0x7204,	// (0x0000edb4) title_pane_stacon_t1

0xa3a7,	// (0x00011f57) uni_indicator_pane_stacon_g1

0xa3b1,	// (0x00011f61) uni_indicator_pane_stacon_g2

0xa3bb,	// (0x00011f6b) uni_indicator_pane_stacon_g3

0xa3c5,	// (0x00011f75) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001727b) uni_indicator_pane_stacon_g

0x7229,	// (0x0000edd9) control_top_pane_stacon_g1

0x7231,	// (0x0000ede1) control_top_pane_stacon_t1_ParamLimits

0x7231,	// (0x0000ede1) control_top_pane_stacon_t1

0xa3cf,	// (0x00011f7f) aid_levels_battery_lsc_ParamLimits

0xa3cf,	// (0x00011f7f) aid_levels_battery_lsc

0x7262,	// (0x0000ee12) battery_pane_stacon_g1_ParamLimits

0x7262,	// (0x0000ee12) battery_pane_stacon_g1

0x726e,	// (0x0000ee1e) battery_pane_stacon_g2_ParamLimits

0x726e,	// (0x0000ee1e) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00017284) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00017284) battery_pane_stacon_g

0x729d,	// (0x0000ee4d) navi_icon_pane_stacon

0x72ad,	// (0x0000ee5d) navi_navi_pane_stacon

0x729d,	// (0x0000ee4d) navi_text_pane_stacon

0x7229,	// (0x0000edd9) control_bottom_pane_stacon_g1

0x72bd,	// (0x0000ee6d) control_bottom_pane_stacon_t1_ParamLimits

0x72bd,	// (0x0000ee6d) control_bottom_pane_stacon_t1

0xa3f7,	// (0x00011fa7) grid_app_pane_ParamLimits

0xa3f7,	// (0x00011fa7) grid_app_pane

0xa413,	// (0x00011fc3) scroll_pane_cp15_ParamLimits

0xa413,	// (0x00011fc3) scroll_pane_cp15

0xa424,	// (0x00011fd4) cell_app_pane_ParamLimits

0xa424,	// (0x00011fd4) cell_app_pane

0xa448,	// (0x00011ff8) cell_app_pane_g1_ParamLimits

0xa448,	// (0x00011ff8) cell_app_pane_g1

0xa46c,	// (0x0001201c) cell_app_pane_g2_ParamLimits

0xa46c,	// (0x0001201c) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00017289) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00017289) cell_app_pane_g

0xa478,	// (0x00012028) cell_app_pane_t1_ParamLimits

0xa478,	// (0x00012028) cell_app_pane_t1

0xa48f,	// (0x0001203f) grid_highlight_pane_ParamLimits

0xa48f,	// (0x0001203f) grid_highlight_pane

0x9ff3,	// (0x00011ba3) cell_highlight_pane_g1

0x9ffb,	// (0x00011bab) cell_highlight_pane_g2

0xa003,	// (0x00011bb3) cell_highlight_pane_g3

0xa00b,	// (0x00011bbb) cell_highlight_pane_g4

0xa013,	// (0x00011bc3) cell_highlight_pane_g5

0xa01b,	// (0x00011bcb) cell_highlight_pane_g6

0xa023,	// (0x00011bd3) cell_highlight_pane_g7

0xa02b,	// (0x00011bdb) cell_highlight_pane_g8

0xa033,	// (0x00011be3) cell_highlight_pane_g9

0x8ff9,	// (0x00010ba9) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00017237) cell_highlight_pane_g

0xa4a0,	// (0x00012050) bg_scroll_pane

0x7301,	// (0x0000eeb1) scroll_handle_pane

0xa4e7,	// (0x00012097) scroll_bg_pane_g1

0xa4fc,	// (0x000120ac) scroll_bg_pane_g2

0xa514,	// (0x000120c4) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001728e) scroll_bg_pane_g

0xa529,	// (0x000120d9) scroll_handle_focus_pane_ParamLimits

0xa529,	// (0x000120d9) scroll_handle_focus_pane

0xa4e7,	// (0x00012097) scroll_handle_pane_g1

0xa536,	// (0x000120e6) scroll_handle_pane_g2

0xa514,	// (0x000120c4) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00017295) scroll_handle_pane_g

0xa0e5,	// (0x00011c95) bg_popup_sub_pane_cp21_ParamLimits

0xa0e5,	// (0x00011c95) bg_popup_sub_pane_cp21

0xa54a,	// (0x000120fa) popup_fep_japan_predictive_window_t1_ParamLimits

0xa54a,	// (0x000120fa) popup_fep_japan_predictive_window_t1

0xa561,	// (0x00012111) popup_fep_japan_predictive_window_t2_ParamLimits

0xa561,	// (0x00012111) popup_fep_japan_predictive_window_t2

0xa594,	// (0x00012144) popup_fep_japan_predictive_window_t3_ParamLimits

0xa594,	// (0x00012144) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001729c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001729c) popup_fep_japan_predictive_window_t

0x90e0,	// (0x00010c90) bg_popup_sub_pane_cp23

0xa5cb,	// (0x0001217b) listscroll_japin_cand_pane

0xa5d3,	// (0x00012183) popup_fep_japan_candidate_window_t1

0xa5e1,	// (0x00012191) candidate_pane_ParamLimits

0xa5e1,	// (0x00012191) candidate_pane

0xa5f4,	// (0x000121a4) scroll_pane_cp30

0xa5fc,	// (0x000121ac) list_single_popup_jap_candidate_pane_ParamLimits

0xa5fc,	// (0x000121ac) list_single_popup_jap_candidate_pane

0x90e0,	// (0x00010c90) list_highlight_pane_cp30

0xa611,	// (0x000121c1) list_single_popup_jap_candidate_pane_t1

0xa620,	// (0x000121d0) level_1_signal

0xa62d,	// (0x000121dd) level_2_signal

0xa63a,	// (0x000121ea) level_3_signal

0xa647,	// (0x000121f7) level_4_signal

0xa654,	// (0x00012204) level_5_signal

0xa661,	// (0x00012211) level_6_signal

0xa66e,	// (0x0001221e) level_7_signal

0xa620,	// (0x000121d0) level_1_battery

0xa62d,	// (0x000121dd) level_2_battery

0xa63a,	// (0x000121ea) level_3_battery

0xa647,	// (0x000121f7) level_4_battery

0xa654,	// (0x00012204) level_5_battery

0xa661,	// (0x00012211) level_6_battery

0xa66e,	// (0x0001221e) level_7_battery

0xa693,	// (0x00012243) list_menu_pane_ParamLimits

0xa693,	// (0x00012243) list_menu_pane

0xa6a9,	// (0x00012259) scroll_pane_cp25_ParamLimits

0xa6a9,	// (0x00012259) scroll_pane_cp25

0xa6c2,	// (0x00012272) list_double2_graphic_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double2_graphic_pane_cp2

0xa6c2,	// (0x00012272) list_double2_large_graphic_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double2_large_graphic_pane_cp2

0xa6c2,	// (0x00012272) list_double2_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double2_pane_cp2

0xa6c2,	// (0x00012272) list_double_graphic_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double_graphic_pane_cp2

0xa6c2,	// (0x00012272) list_double_large_graphic_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double_large_graphic_pane_cp2

0xa6c2,	// (0x00012272) list_double_number_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double_number_pane_cp2

0xa6c2,	// (0x00012272) list_double_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double_pane_cp2

0xa6d2,	// (0x00012282) list_single_2graphic_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_2graphic_pane_cp2

0xa6d2,	// (0x00012282) list_single_graphic_heading_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_graphic_heading_pane_cp2

0xa6d2,	// (0x00012282) list_single_graphic_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_graphic_pane_cp2

0xa6d2,	// (0x00012282) list_single_heading_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_heading_pane_cp2

0xa6e7,	// (0x00012297) list_single_large_graphic_pane_cp2_ParamLimits

0xa6e7,	// (0x00012297) list_single_large_graphic_pane_cp2

0xa6d2,	// (0x00012282) list_single_number_heading_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_number_heading_pane_cp2

0xa6d2,	// (0x00012282) list_single_number_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_number_pane_cp2

0xa6d2,	// (0x00012282) list_single_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_pane_cp2

0xa763,	// (0x00012313) bg_popup_sub_pane_cp22

0x73b0,	// (0x0000ef60) popup_side_volume_key_window_g1

0x73d4,	// (0x0000ef84) popup_side_volume_key_window_t1

0x73f0,	// (0x0000efa0) volume_small_pane_cp1

0x9459,	// (0x00011009) bg_popup_sub_pane_cp24_ParamLimits

0x9459,	// (0x00011009) bg_popup_sub_pane_cp24

0xa779,	// (0x00012329) fep_china_uni_candidate_pane_ParamLimits

0xa779,	// (0x00012329) fep_china_uni_candidate_pane

0xa78d,	// (0x0001233d) fep_china_uni_entry_pane

0xa79d,	// (0x0001234d) popup_fep_china_uni_window_g1

0xa7b9,	// (0x00012369) fep_china_uni_entry_pane_g1

0xa7c1,	// (0x00012371) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x000172cd) fep_china_uni_entry_pane_g

0xa7c9,	// (0x00012379) fep_entry_item_pane

0xa7d3,	// (0x00012383) fep_candidate_item_pane

0xa7db,	// (0x0001238b) fep_china_uni_candidate_pane_g1

0xa7e3,	// (0x00012393) fep_china_uni_candidate_pane_g2

0xa7eb,	// (0x0001239b) fep_china_uni_candidate_pane_g3

0xa7f3,	// (0x000123a3) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x000172d2) fep_china_uni_candidate_pane_g

0x8ff9,	// (0x00010ba9) fep_entry_item_pane_g1

0xa7fb,	// (0x000123ab) fep_entry_item_pane_t1_ParamLimits

0xa7fb,	// (0x000123ab) fep_entry_item_pane_t1

0xa811,	// (0x000123c1) fep_candidate_item_pane_t1_ParamLimits

0xa811,	// (0x000123c1) fep_candidate_item_pane_t1

0xa826,	// (0x000123d6) fep_candidate_item_pane_t2_ParamLimits

0xa826,	// (0x000123d6) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000172db) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000172db) fep_candidate_item_pane_t

0x91c0,	// (0x00010d70) list_highlight_pane_cp31_ParamLimits

0x91c0,	// (0x00010d70) list_highlight_pane_cp31

0xa838,	// (0x000123e8) level_1_signal_lsc

0xa841,	// (0x000123f1) level_2_signal_lsc

0xa84a,	// (0x000123fa) level_3_signal_lsc

0xa853,	// (0x00012403) level_4_signal_lsc

0xa85c,	// (0x0001240c) level_5_signal_lsc

0xa865,	// (0x00012415) level_6_signal_lsc

0xa86e,	// (0x0001241e) level_7_signal_lsc

0xa86e,	// (0x0001241e) level_1_battery_lsc

0xa877,	// (0x00012427) level_2_battery_lsc

0xa880,	// (0x00012430) level_3_battery_lsc

0xa889,	// (0x00012439) level_4_battery_lsc

0xa892,	// (0x00012442) level_5_battery_lsc

0xa89b,	// (0x0001244b) level_6_battery_lsc

0xa838,	// (0x000123e8) level_7_battery_lsc

0xa8a4,	// (0x00012454) scroll_handle_focus_pane_g1

0xa8ad,	// (0x0001245d) scroll_handle_focus_pane_g2

0xa8b6,	// (0x00012466) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000172e0) scroll_handle_focus_pane_g

0xa8bf,	// (0x0001246f) list_single_2graphic_pane_g1_ParamLimits

0xa8bf,	// (0x0001246f) list_single_2graphic_pane_g1

0x99e1,	// (0x00011591) list_single_2graphic_pane_g2_ParamLimits

0x99e1,	// (0x00011591) list_single_2graphic_pane_g2

0x9973,	// (0x00011523) list_single_2graphic_pane_g3_ParamLimits

0x9973,	// (0x00011523) list_single_2graphic_pane_g3

0xa8cb,	// (0x0001247b) list_single_2graphic_pane_g4_ParamLimits

0xa8cb,	// (0x0001247b) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000172e7) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000172e7) list_single_2graphic_pane_g

0xa8d7,	// (0x00012487) list_single_2graphic_pane_t1_ParamLimits

0xa8d7,	// (0x00012487) list_single_2graphic_pane_t1

0xa905,	// (0x000124b5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa905,	// (0x000124b5) list_double2_graphic_large_graphic_pane_g1

0x9a84,	// (0x00011634) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a84,	// (0x00011634) list_double2_graphic_large_graphic_pane_g2

0x9a93,	// (0x00011643) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a93,	// (0x00011643) list_double2_graphic_large_graphic_pane_g3

0xa915,	// (0x000124c5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa915,	// (0x000124c5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000172f0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000172f0) list_double2_graphic_large_graphic_pane_g

0xa921,	// (0x000124d1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa921,	// (0x000124d1) list_double2_graphic_large_graphic_pane_t1

0xa937,	// (0x000124e7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa937,	// (0x000124e7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000172f9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000172f9) list_double2_graphic_large_graphic_pane_t

0xaa63,	// (0x00012613) popup_fast_swap_window_ParamLimits

0xaa63,	// (0x00012613) popup_fast_swap_window

0xaa7f,	// (0x0001262f) popup_side_volume_key_window

0xaa99,	// (0x00012649) stacon_top_pane

0xaaa3,	// (0x00012653) status_pane_ParamLimits

0xaaa3,	// (0x00012653) status_pane

0xaab1,	// (0x00012661) status_small_pane

0x90e0,	// (0x00010c90) control_pane

0x90e0,	// (0x00010c90) stacon_bottom_pane

0x994a,	// (0x000114fa) scroll_pane_cp121

0x9df7,	// (0x000119a7) set_content_pane

0xa949,	// (0x000124f9) bg_active_tab_pane_g1_cp1

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp1

0xa95b,	// (0x0001250b) bg_active_tab_pane_g3_cp1

0xa949,	// (0x000124f9) bg_passive_tab_pane_g1_cp1

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp1

0xa95b,	// (0x0001250b) bg_passive_tab_pane_g3_cp1

0xa964,	// (0x00012514) bg_active_tab_pane_g1_cp2

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp2

0xa96d,	// (0x0001251d) bg_active_tab_pane_g3_cp2

0xa964,	// (0x00012514) bg_passive_tab_pane_g1_cp2

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp2

0xa96d,	// (0x0001251d) bg_passive_tab_pane_g3_cp2

0xa976,	// (0x00012526) bg_active_tab_pane_g1_cp3

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp3

0xa97f,	// (0x0001252f) bg_active_tab_pane_g3_cp3

0xa976,	// (0x00012526) bg_passive_tab_pane_g1_cp3

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp3

0xa97f,	// (0x0001252f) bg_passive_tab_pane_g3_cp3

0xa988,	// (0x00012538) bg_active_tab_pane_g1_cp4

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp4

0xa991,	// (0x00012541) bg_active_tab_pane_g3_cp4

0xa988,	// (0x00012538) bg_passive_tab_pane_g1_cp4

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp4

0xa991,	// (0x00012541) bg_passive_tab_pane_g3_cp4

0xa9d8,	// (0x00012588) bg_active_tab_pane_g1_cp5

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp5

0xa9e1,	// (0x00012591) bg_active_tab_pane_g3_cp5

0xa9d8,	// (0x00012588) bg_passive_tab_pane_g1_cp5

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp5

0xa9e1,	// (0x00012591) bg_passive_tab_pane_g3_cp5

0xa06a,	// (0x00011c1a) list_set_graphic_pane_ParamLimits

0xa06a,	// (0x00011c1a) list_set_graphic_pane

0x90e0,	// (0x00010c90) bg_set_opt_pane_cp4

0xa9ea,	// (0x0001259a) list_set_graphic_pane_g1_ParamLimits

0xa9ea,	// (0x0001259a) list_set_graphic_pane_g1

0xa9f6,	// (0x000125a6) list_set_graphic_pane_g2_ParamLimits

0xa9f6,	// (0x000125a6) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000172fe) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000172fe) list_set_graphic_pane_g

0x0009,

0xfac0,	// (0x00017670) volume_small_pane_cp_g

0xaa18,	// (0x000125c8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaa18,	// (0x000125c8) list_double2_large_graphic_pane_g1_cp2

0xaa24,	// (0x000125d4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xaa24,	// (0x000125d4) list_double2_large_graphic_pane_g2_cp2

0xaa33,	// (0x000125e3) list_double2_large_graphic_pane_g3_cp2

0xaa3b,	// (0x000125eb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xaa3b,	// (0x000125eb) list_double2_large_graphic_pane_t1_cp2

0xaa51,	// (0x00012601) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xaa51,	// (0x00012601) list_double2_large_graphic_pane_t2_cp2

0xc594,	// (0x00014144) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc594,	// (0x00014144) list_double_large_graphic_pane_g1_cp2

0xc5a5,	// (0x00014155) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc5a5,	// (0x00014155) list_double_large_graphic_pane_g2_cp2

0xab87,	// (0x00012737) list_double_large_graphic_pane_g3_cp2

0xc5b4,	// (0x00014164) list_double_large_graphic_pane_g4_cp

0xc5bc,	// (0x0001416c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xc5bc,	// (0x0001416c) list_double_large_graphic_pane_t1_cp2

0xc5d3,	// (0x00014183) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xc5d3,	// (0x00014183) list_double_large_graphic_pane_t2_cp2

0xaaba,	// (0x0001266a) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaaba,	// (0x0001266a) list_double2_graphic_pane_g1_cp2

0xaac6,	// (0x00012676) list_double2_graphic_pane_g2_cp2_ParamLimits

0xaac6,	// (0x00012676) list_double2_graphic_pane_g2_cp2

0xaad5,	// (0x00012685) list_double2_graphic_pane_g3_cp2

0xaadd,	// (0x0001268d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xaadd,	// (0x0001268d) list_double2_graphic_pane_t1_cp2

0xaaf3,	// (0x000126a3) list_double2_graphic_pane_t2_cp2_ParamLimits

0xaaf3,	// (0x000126a3) list_double2_graphic_pane_t2_cp2

0xab05,	// (0x000126b5) list_single_number_heading_pane_g1_cp2_ParamLimits

0xab05,	// (0x000126b5) list_single_number_heading_pane_g1_cp2

0xab11,	// (0x000126c1) list_single_number_heading_pane_g2_cp2

0xab19,	// (0x000126c9) list_single_number_heading_pane_t1_cp2_ParamLimits

0xab19,	// (0x000126c9) list_single_number_heading_pane_t1_cp2

0xab2f,	// (0x000126df) list_single_number_heading_pane_t2_cp2_ParamLimits

0xab2f,	// (0x000126df) list_single_number_heading_pane_t2_cp2

0xab41,	// (0x000126f1) list_single_number_heading_pane_t3_cp2_ParamLimits

0xab41,	// (0x000126f1) list_single_number_heading_pane_t3_cp2

0xab05,	// (0x000126b5) list_single_heading_pane_g1_cp2_ParamLimits

0xab05,	// (0x000126b5) list_single_heading_pane_g1_cp2

0xab11,	// (0x000126c1) list_single_heading_pane_g2_cp2

0xab19,	// (0x000126c9) list_single_heading_pane_t1_cp2_ParamLimits

0xab19,	// (0x000126c9) list_single_heading_pane_t1_cp2

0xc39e,	// (0x00013f4e) list_single_heading_pane_t2_cp2_ParamLimits

0xc39e,	// (0x00013f4e) list_single_heading_pane_t2_cp2

0xc2ee,	// (0x00013e9e) list_double_graphic_pane_g1_cp2_ParamLimits

0xc2ee,	// (0x00013e9e) list_double_graphic_pane_g1_cp2

0xc2fa,	// (0x00013eaa) list_double_graphic_pane_g2_cp2_ParamLimits

0xc2fa,	// (0x00013eaa) list_double_graphic_pane_g2_cp2

0xc309,	// (0x00013eb9) list_double_graphic_pane_g3_cp2

0xc311,	// (0x00013ec1) list_double_graphic_pane_t1_cp2_ParamLimits

0xc311,	// (0x00013ec1) list_double_graphic_pane_t1_cp2

0xc327,	// (0x00013ed7) list_double_graphic_pane_t2_cp2_ParamLimits

0xc327,	// (0x00013ed7) list_double_graphic_pane_t2_cp2

0xab7b,	// (0x0001272b) list_double_number_pane_g1_cp2_ParamLimits

0xab7b,	// (0x0001272b) list_double_number_pane_g1_cp2

0xab87,	// (0x00012737) list_double_number_pane_g2_cp2

0xc2b4,	// (0x00013e64) list_double_number_pane_t1_cp2_ParamLimits

0xc2b4,	// (0x00013e64) list_double_number_pane_t1_cp2

0xc2c6,	// (0x00013e76) list_double_number_pane_t2_cp2_ParamLimits

0xc2c6,	// (0x00013e76) list_double_number_pane_t2_cp2

0xc2dc,	// (0x00013e8c) list_double_number_pane_t3_cp2_ParamLimits

0xc2dc,	// (0x00013e8c) list_double_number_pane_t3_cp2

0xc19e,	// (0x00013d4e) list_single_graphic_pane_g1_cp2_ParamLimits

0xc19e,	// (0x00013d4e) list_single_graphic_pane_g1_cp2

0xab05,	// (0x000126b5) list_single_graphic_pane_g2_cp2_ParamLimits

0xab05,	// (0x000126b5) list_single_graphic_pane_g2_cp2

0xab11,	// (0x000126c1) list_single_graphic_pane_g3_cp2

0xc176,	// (0x00013d26) list_single_graphic_pane_t1_cp2_ParamLimits

0xc176,	// (0x00013d26) list_single_graphic_pane_t1_cp2

0xab05,	// (0x000126b5) list_single_number_pane_g1_cp2_ParamLimits

0xab05,	// (0x000126b5) list_single_number_pane_g1_cp2

0xab11,	// (0x000126c1) list_single_number_pane_g2_cp2

0xc176,	// (0x00013d26) list_single_number_pane_t1_cp2_ParamLimits

0xc176,	// (0x00013d26) list_single_number_pane_t1_cp2

0xc18c,	// (0x00013d3c) list_single_number_pane_t2_cp2_ParamLimits

0xc18c,	// (0x00013d3c) list_single_number_pane_t2_cp2

0xaa24,	// (0x000125d4) list_double2_pane_g1_cp2_ParamLimits

0xaa24,	// (0x000125d4) list_double2_pane_g1_cp2

0xaa33,	// (0x000125e3) list_double2_pane_g2_cp2

0xab53,	// (0x00012703) list_double2_pane_t1_cp2_ParamLimits

0xab53,	// (0x00012703) list_double2_pane_t1_cp2

0xab69,	// (0x00012719) list_double2_pane_t2_cp2_ParamLimits

0xab69,	// (0x00012719) list_double2_pane_t2_cp2

0xab7b,	// (0x0001272b) list_double_pane_g1_cp2_ParamLimits

0xab7b,	// (0x0001272b) list_double_pane_g1_cp2

0xab87,	// (0x00012737) list_double_pane_g2_cp2

0xab8f,	// (0x0001273f) list_double_pane_t1_cp2_ParamLimits

0xab8f,	// (0x0001273f) list_double_pane_t1_cp2

0xaba5,	// (0x00012755) list_double_pane_t2_cp2_ParamLimits

0xaba5,	// (0x00012755) list_double_pane_t2_cp2

0xabcd,	// (0x0001277d) list_single_pane_cp2_g3

0xab05,	// (0x000126b5) list_single_pane_g1_cp2_ParamLimits

0xab05,	// (0x000126b5) list_single_pane_g1_cp2

0xab11,	// (0x000126c1) list_single_pane_g2_cp2

0xabdd,	// (0x0001278d) list_single_pane_t1_cp2_ParamLimits

0xabdd,	// (0x0001278d) list_single_pane_t1_cp2

0xabf5,	// (0x000127a5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xabf5,	// (0x000127a5) list_single_large_graphic_pane_g1_cp2

0xac01,	// (0x000127b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xac01,	// (0x000127b1) list_single_large_graphic_pane_g2_cp2

0xac0d,	// (0x000127bd) list_single_large_graphic_pane_g3_cp2

0xac15,	// (0x000127c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xac15,	// (0x000127c5) list_single_large_graphic_pane_g4_cp1

0xac2f,	// (0x000127df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xac2f,	// (0x000127df) list_single_large_graphic_pane_t1_cp2

0xc158,	// (0x00013d08) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xc158,	// (0x00013d08) list_single_graphic_heading_pane_g1_cp2

0xc133,	// (0x00013ce3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc133,	// (0x00013ce3) list_single_graphic_heading_pane_g4_cp2

0xab11,	// (0x000126c1) list_single_graphic_heading_pane_g5_cp2

0xab19,	// (0x000126c9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xab19,	// (0x000126c9) list_single_graphic_heading_pane_t1_cp2

0xc164,	// (0x00013d14) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc164,	// (0x00013d14) list_single_graphic_heading_pane_t2_cp2

0xc127,	// (0x00013cd7) list_single_2graphic_pane_g1_cp2_ParamLimits

0xc127,	// (0x00013cd7) list_single_2graphic_pane_g1_cp2

0xc133,	// (0x00013ce3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc133,	// (0x00013ce3) list_single_2graphic_pane_g2_cp2

0xab11,	// (0x000126c1) list_single_2graphic_pane_g3_cp2

0xb7b0,	// (0x00013360) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb7b0,	// (0x00013360) list_single_2graphic_pane_g4_cp2

0xc142,	// (0x00013cf2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xc142,	// (0x00013cf2) list_single_2graphic_pane_t1_cp2

0x8ff9,	// (0x00010ba9) list_highlight_pane_g10_cp1

0xbd21,	// (0x000138d1) list_highlight_pane_g1_cp1

0xbd29,	// (0x000138d9) list_highlight_pane_g2_cp1

0xbd31,	// (0x000138e1) list_highlight_pane_g3_cp1

0xbd39,	// (0x000138e9) list_highlight_pane_g4_cp1

0xbd41,	// (0x000138f1) list_highlight_pane_g5_cp1

0xbd49,	// (0x000138f9) list_highlight_pane_g6_cp1

0xbd51,	// (0x00013901) list_highlight_pane_g7_cp1

0xbd59,	// (0x00013909) list_highlight_pane_g8_cp1

0xbd61,	// (0x00013911) list_highlight_pane_g9_cp1

0xbc4f,	// (0x000137ff) form_field_slider_pane_t3

0xbc5d,	// (0x0001380d) form_field_slider_pane_t4

0xbc6b,	// (0x0001381b) slider_form_pane_ParamLimits

0xbc6b,	// (0x0001381b) slider_form_pane

0x90e0,	// (0x00010c90) control_abbreviations

0x90e0,	// (0x00010c90) control_conventions

0x90e0,	// (0x00010c90) control_definitions

0x90e0,	// (0x00010c90) format_table_attribute

0xc3e8,	// (0x00013f98) bg_popup_preview_window_pane_g9

0x90e0,	// (0x00010c90) format_table_data2

0x90e0,	// (0x00010c90) format_table_data3

0x90e0,	// (0x00010c90) format_table_data_example

0x0008,

0x90e0,	// (0x00010c90) intro_purpose

0xf8de,	// (0x0001748e) bg_popup_preview_window_pane_g

0x90e0,	// (0x00010c90) texts_category

0x90e0,	// (0x00010c90) texts_graphics

0xac45,	// (0x000127f5) text_digital

0xac54,	// (0x00012804) text_primary

0xac63,	// (0x00012813) text_primary_small

0xac72,	// (0x00012822) text_secondary

0xac81,	// (0x00012831) text_title

0xcb51,	// (0x00014701) bg_passive_tab_pane_g1_cp3_srt

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp3_srt

0xcb5a,	// (0x0001470a) bg_passive_tab_pane_g3_cp3_srt

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp3_srt_ParamLimits

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp3_srt

0xcb63,	// (0x00014713) tabs_4_active_pane_srt_g1

0x91f0,	// (0x00010da0) tabs_4_active_pane_srt_t1_ParamLimits

0x91f0,	// (0x00010da0) tabs_4_active_pane_srt_t1

0xcb51,	// (0x00014701) bg_active_tab_pane_g1_cp3_copy1

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp3_copy1

0xcb5a,	// (0x0001470a) bg_active_tab_pane_g3_cp3_copy1

0x91c0,	// (0x00010d70) tabs_2_long_active_pane_srt_ParamLimits

0x91c0,	// (0x00010d70) tabs_2_long_active_pane_srt

0x91c0,	// (0x00010d70) tabs_2_long_passive_pane_srt_ParamLimits

0x91c0,	// (0x00010d70) tabs_2_long_passive_pane_srt

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp4_srt

0xc80f,	// (0x000143bf) bg_passive_tab_pane_g1_cp4_srt

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp4_srt

0xc818,	// (0x000143c8) bg_passive_tab_pane_g3_cp4_srt

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp4_srt_ParamLimits

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp4_srt

0xa1f3,	// (0x00011da3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa1f3,	// (0x00011da3) tabs_2_long_active_pane_srt_t1

0xc80f,	// (0x000143bf) bg_active_tab_pane_g1_cp4_srt

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp4_srt

0xc818,	// (0x000143c8) bg_active_tab_pane_g3_cp4_srt

0x9459,	// (0x00011009) tabs_3_long_active_pane_srt_ParamLimits

0x9459,	// (0x00011009) tabs_3_long_active_pane_srt

0x9459,	// (0x00011009) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9459,	// (0x00011009) tabs_3_long_passive_pane_cp_srt

0x9459,	// (0x00011009) tabs_3_long_passive_pane_srt_ParamLimits

0x9459,	// (0x00011009) tabs_3_long_passive_pane_srt

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp5_srt

0xa9d8,	// (0x00012588) bg_passive_tab_pane_g1_cp5_srt

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp5_srt

0xa9e1,	// (0x00012591) bg_passive_tab_pane_g3_cp5_srt

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp5_srt_ParamLimits

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp5_srt

0xa212,	// (0x00011dc2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa212,	// (0x00011dc2) tabs_3_long_active_pane_srt_t1

0xa9d8,	// (0x00012588) bg_active_tab_pane_g1_cp5_srt

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp5_srt

0xa9e1,	// (0x00012591) bg_active_tab_pane_g3_cp5_srt

0xc801,	// (0x000143b1) navi_text_pane_srt_t1

0xc7f9,	// (0x000143a9) navi_icon_pane_srt_g1

0xae48,	// (0x000129f8) midp_editing_number_pane_srt

0xac90,	// (0x00012840) midp_ticker_pane_srt

0xae50,	// (0x00012a00) midp_ticker_pane_srt_g1

0xae58,	// (0x00012a08) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001731d) midp_ticker_pane_srt_g

0xae60,	// (0x00012a10) midp_ticker_pane_srt_t1

0xc7ea,	// (0x0001439a) midp_editing_number_pane_t1_copy1

0xac98,	// (0x00012848) listscroll_midp_pane

0xac98,	// (0x00012848) midp_form_pane

0xad00,	// (0x000128b0) midp_info_popup_window_ParamLimits

0xad00,	// (0x000128b0) midp_info_popup_window

0xa0e5,	// (0x00011c95) bg_popup_sub_pane_cp50_ParamLimits

0xa0e5,	// (0x00011c95) bg_popup_sub_pane_cp50

0xb96c,	// (0x0001351c) listscroll_midp_info_pane_ParamLimits

0xb96c,	// (0x0001351c) listscroll_midp_info_pane

0xb954,	// (0x00013504) listscroll_form_midp_pane_ParamLimits

0xb954,	// (0x00013504) listscroll_form_midp_pane

0xb960,	// (0x00013510) scroll_bar_cp050

0xb934,	// (0x000134e4) list_midp_pane

0xd74e,	// (0x000152fe) signal_pane_g2_cp

0xb86e,	// (0x0001341e) listscroll_midp_info_pane_t1_ParamLimits

0xb86e,	// (0x0001341e) listscroll_midp_info_pane_t1

0xb886,	// (0x00013436) listscroll_midp_info_pane_t2_ParamLimits

0xb886,	// (0x00013436) listscroll_midp_info_pane_t2

0xb8c4,	// (0x00013474) listscroll_midp_info_pane_t3_ParamLimits

0xb8c4,	// (0x00013474) listscroll_midp_info_pane_t3

0xb8fe,	// (0x000134ae) listscroll_midp_info_pane_t4_ParamLimits

0xb8fe,	// (0x000134ae) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x000173c9) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x000173c9) listscroll_midp_info_pane_t

0xa194,	// (0x00011d44) scroll_pane_cp21

0xb812,	// (0x000133c2) form_midp_field_choice_group_pane

0xb81b,	// (0x000133cb) form_midp_field_text_pane

0xb854,	// (0x00013404) form_midp_field_time_pane

0xb85c,	// (0x0001340c) form_midp_gauge_slider_pane

0xb865,	// (0x00013415) form_midp_gauge_wait_pane

0x90e0,	// (0x00010c90) form_midp_image_pane

0xb7fd,	// (0x000133ad) list_single_midp_pane_ParamLimits

0xb7fd,	// (0x000133ad) list_single_midp_pane

0xb7cb,	// (0x0001337b) form_midp_field_text_pane_t1

0xb5be,	// (0x0001316e) input_focus_pane_cp050

0xb7ec,	// (0x0001339c) list_midp_form_text_pane

0xb78e,	// (0x0001333e) form_midp_field_choice_group_pane_t1

0xb79c,	// (0x0001334c) input_focus_pane_cp051

0xb7bc,	// (0x0001336c) list_midp_choice_pane

0x90e0,	// (0x00010c90) status_idle_pane

0xb772,	// (0x00013322) form_midp_field_time_pane_t1

0x8ff9,	// (0x00010ba9) wait_anim_pane_g2_copy1

0xb780,	// (0x00013330) form_midp_field_time_pane_t2

0x0001,

0xadaa,	// (0x0001295a) aid_navinavi_width_2_pane

0xf814,	// (0x000173c4) form_midp_field_time_pane_t

0x90e0,	// (0x00010c90) input_focus_pane_cp052

0x90e0,	// (0x00010c90) bg_input_focus_pane_cp040

0xb732,	// (0x000132e2) form_midp_gauge_slider_pane_t1

0xb740,	// (0x000132f0) form_midp_gauge_slider_pane_t2

0xb74e,	// (0x000132fe) form_midp_gauge_slider_pane_t3

0xb75c,	// (0x0001330c) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x000173bb) form_midp_gauge_slider_pane_t

0xb76a,	// (0x0001331a) form_midp_slider_pane

0x91c0,	// (0x00010d70) bg_input_focus_pane_cp041_ParamLimits

0x91c0,	// (0x00010d70) bg_input_focus_pane_cp041

0xb702,	// (0x000132b2) form_midp_gauge_wait_pane_t1_ParamLimits

0xb702,	// (0x000132b2) form_midp_gauge_wait_pane_t1

0xb714,	// (0x000132c4) form_midp_gauge_wait_pane_t2_ParamLimits

0xb714,	// (0x000132c4) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x000173b6) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x000173b6) form_midp_gauge_wait_pane_t

0xb726,	// (0x000132d6) form_midp_wait_pane_ParamLimits

0xb726,	// (0x000132d6) form_midp_wait_pane

0xb6cc,	// (0x0001327c) form_midp_image_pane_g1

0xb6d5,	// (0x00013285) form_midp_image_pane_t1

0xb6e4,	// (0x00013294) form_midp_image_pane_t2

0xb6f3,	// (0x000132a3) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x000173af) form_midp_image_pane_t

0xb6b4,	// (0x00013264) list_single_midp_pane_g1

0xb6bd,	// (0x0001326d) list_single_midp_pane_t1

0xb6a0,	// (0x00013250) list_midp_form_item_pane_ParamLimits

0xb6a0,	// (0x00013250) list_midp_form_item_pane

0xad52,	// (0x00012902) list_midp_form_item_pane_t1

0xad61,	// (0x00012911) midp_ticker_pane_g1

0xad6d,	// (0x0001291d) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00017303) midp_ticker_pane_g

0xad79,	// (0x00012929) midp_ticker_pane_t1

0xc7ea,	// (0x0001439a) midp_editing_number_pane_t1

0xc9fb,	// (0x000145ab) midp_editing_number_pane

0xca07,	// (0x000145b7) midp_ticker_pane

0xc7c8,	// (0x00014378) ai_message_heading_pane

0x90e0,	// (0x00010c90) bg_popup_window_pane_cp14

0xc7d0,	// (0x00014380) listscroll_ai_message_pane

0xc752,	// (0x00014302) ai_message_heading_pane_g1_ParamLimits

0xc752,	// (0x00014302) ai_message_heading_pane_g1

0xc75e,	// (0x0001430e) ai_message_heading_pane_g2_ParamLimits

0xc75e,	// (0x0001430e) ai_message_heading_pane_g2

0xc76a,	// (0x0001431a) ai_message_heading_pane_g3_ParamLimits

0xc76a,	// (0x0001431a) ai_message_heading_pane_g3

0xc776,	// (0x00014326) ai_message_heading_pane_g4_ParamLimits

0xc776,	// (0x00014326) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x000174f0) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x000174f0) ai_message_heading_pane_g

0xc782,	// (0x00014332) ai_message_heading_pane_t1_ParamLimits

0xc782,	// (0x00014332) ai_message_heading_pane_t1

0xc79c,	// (0x0001434c) ai_message_heading_pane_t2_ParamLimits

0xc79c,	// (0x0001434c) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x000174f9) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x000174f9) ai_message_heading_pane_t

0xc7ae,	// (0x0001435e) bg_popup_heading_pane_cp1_ParamLimits

0xc7ae,	// (0x0001435e) bg_popup_heading_pane_cp1

0xc740,	// (0x000142f0) list_ai_message_pane_ParamLimits

0xc740,	// (0x000142f0) list_ai_message_pane

0xa194,	// (0x00011d44) scroll_pane_cp10

0xc6dc,	// (0x0001428c) list_ai_message_pane_g1

0xc6e4,	// (0x00014294) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x000174cd) list_ai_message_pane_g

0xc6ec,	// (0x0001429c) list_ai_message_pane_t1_ParamLimits

0xc6ec,	// (0x0001429c) list_ai_message_pane_t1

0xc701,	// (0x000142b1) list_ai_message_pane_t2_ParamLimits

0xc701,	// (0x000142b1) list_ai_message_pane_t2

0xc716,	// (0x000142c6) list_ai_message_pane_t3_ParamLimits

0xc716,	// (0x000142c6) list_ai_message_pane_t3

0xc72b,	// (0x000142db) list_ai_message_pane_t4_ParamLimits

0xc72b,	// (0x000142db) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x000174d2) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x000174d2) list_ai_message_pane_t

0xc6ca,	// (0x0001427a) cell_ai_soft_ind_pane_ParamLimits

0xc6ca,	// (0x0001427a) cell_ai_soft_ind_pane

0xad8b,	// (0x0001293b) cell_ai_soft_ind_pane_g1_ParamLimits

0xad8b,	// (0x0001293b) cell_ai_soft_ind_pane_g1

0x90e0,	// (0x00010c90) grid_highlight_cp1

0xad98,	// (0x00012948) text_secondary_cp56_ParamLimits

0xad98,	// (0x00012948) text_secondary_cp56

0xc69f,	// (0x0001424f) example_general_pane_ParamLimits

0xc69f,	// (0x0001424f) example_general_pane

0xc6ab,	// (0x0001425b) example_parent_pane_g1_ParamLimits

0xc6ab,	// (0x0001425b) example_parent_pane_g1

0xc6b7,	// (0x00014267) example_parent_pane_t1_ParamLimits

0xc6b7,	// (0x00014267) example_parent_pane_t1

0x79fc,	// (0x0000f5ac) popup_preview_text_window_ParamLimits

0x79fc,	// (0x0000f5ac) popup_preview_text_window

0xabd5,	// (0x00012785) list_single_pane_cp2_g4

0x9535,	// (0x000110e5) bg_popup_preview_window_pane_ParamLimits

0x9535,	// (0x000110e5) bg_popup_preview_window_pane

0xc3f0,	// (0x00013fa0) popup_preview_text_window_t1_ParamLimits

0xc3f0,	// (0x00013fa0) popup_preview_text_window_t1

0xc40e,	// (0x00013fbe) popup_preview_text_window_t2_ParamLimits

0xc40e,	// (0x00013fbe) popup_preview_text_window_t2

0xc457,	// (0x00014007) popup_preview_text_window_t3_ParamLimits

0xc457,	// (0x00014007) popup_preview_text_window_t3

0xc49c,	// (0x0001404c) popup_preview_text_window_t4_ParamLimits

0xc49c,	// (0x0001404c) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x000174a1) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x000174a1) popup_preview_text_window_t

0xc51a,	// (0x000140ca) scroll_pane_cp11

0xb4a8,	// (0x00013058) bg_popup_preview_window_pane_g1

0xc3b0,	// (0x00013f60) bg_popup_preview_window_pane_g2

0xc3b8,	// (0x00013f68) bg_popup_preview_window_pane_g3

0xc3c0,	// (0x00013f70) bg_popup_preview_window_pane_g4

0xc3c8,	// (0x00013f78) bg_popup_preview_window_pane_g5

0xc3d0,	// (0x00013f80) bg_popup_preview_window_pane_g6

0xc3d8,	// (0x00013f88) bg_popup_preview_window_pane_g7

0xc3e0,	// (0x00013f90) bg_popup_preview_window_pane_g8

0x6eb5,	// (0x0000ea65) aid_popup_width_pane

0x79de,	// (0x0000f58e) popup_midp_note_alarm_window_ParamLimits

0x79de,	// (0x0000f58e) popup_midp_note_alarm_window

0x9ea4,	// (0x00011a54) data_form_pane_ParamLimits

0x9eb0,	// (0x00011a60) form_field_data_pane_g1

0x9eb8,	// (0x00011a68) form_field_data_pane_t1_ParamLimits

0x9ed0,	// (0x00011a80) input_focus_pane_ParamLimits

0x9ede,	// (0x00011a8e) data_form_wide_pane_ParamLimits

0x9eea,	// (0x00011a9a) form_field_data_wide_pane_g1

0x9f0a,	// (0x00011aba) form_field_data_wide_pane_t1_ParamLimits

0x97c1,	// (0x00011371) input_focus_pane_cp6_ParamLimits

0xa141,	// (0x00011cf1) input_popup_find_pane_g1_ParamLimits

0xa141,	// (0x00011cf1) input_popup_find_pane_g1

0x727e,	// (0x0000ee2e) aid_navi_side_left_pane

0x728e,	// (0x0000ee3e) aid_navi_side_right_pane

0xbe0a,	// (0x000139ba) bg_popup_window_pane_cp30_ParamLimits

0xbe0a,	// (0x000139ba) bg_popup_window_pane_cp30

0xbe84,	// (0x00013a34) popup_midp_note_alarm_window_g1_ParamLimits

0xbe84,	// (0x00013a34) popup_midp_note_alarm_window_g1

0xbeb4,	// (0x00013a64) popup_midp_note_alarm_window_t1_ParamLimits

0xbeb4,	// (0x00013a64) popup_midp_note_alarm_window_t1

0xbf55,	// (0x00013b05) popup_midp_note_alarm_window_t2_ParamLimits

0xbf55,	// (0x00013b05) popup_midp_note_alarm_window_t2

0xc003,	// (0x00013bb3) popup_midp_note_alarm_window_t3_ParamLimits

0xc003,	// (0x00013bb3) popup_midp_note_alarm_window_t3

0xc02b,	// (0x00013bdb) popup_midp_note_alarm_window_t4_ParamLimits

0xc02b,	// (0x00013bdb) popup_midp_note_alarm_window_t4

0xc04b,	// (0x00013bfb) popup_midp_note_alarm_window_t5_ParamLimits

0xc04b,	// (0x00013bfb) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x0001743e) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x0001743e) popup_midp_note_alarm_window_t

0xc0f7,	// (0x00013ca7) wait_bar_pane_cp1_ParamLimits

0xc0f7,	// (0x00013ca7) wait_bar_pane_cp1

0x90e0,	// (0x00010c90) wait_anim_pane_copy1

0x90e0,	// (0x00010c90) wait_border_pane_copy1

0xbb1c,	// (0x000136cc) wait_border_pane_g1_copy1

0x9f21,	// (0x00011ad1) form_field_popup_pane_g1

0x9f29,	// (0x00011ad9) form_field_popup_pane_t1_ParamLimits

0x9ed0,	// (0x00011a80) input_focus_pane_cp7_ParamLimits

0x9ea4,	// (0x00011a54) list_form_pane_ParamLimits

0x9f41,	// (0x00011af1) form_field_popup_wide_pane_g1

0x9f49,	// (0x00011af9) form_field_popup_wide_pane_t1_ParamLimits

0x9ed0,	// (0x00011a80) input_focus_pane_cp8_ParamLimits

0x9f5e,	// (0x00011b0e) list_form_wide_pane_ParamLimits

0xcbd1,	// (0x00014781) aid_size_cell_graphic_pane

0xa03b,	// (0x00011beb) data_form_pane_t1_ParamLimits

0xc9cb,	// (0x0001457b) data_form_wide_pane_t1_ParamLimits

0xb0a5,	// (0x00012c55) bg_status_flat_pane

0x9120,	// (0x00010cd0) title_pane_t1_ParamLimits

0x9188,	// (0x00010d38) title_pane_t2_ParamLimits

0x91ae,	// (0x00010d5e) title_pane_t3_ParamLimits

0xf557,	// (0x00017107) title_pane_t_ParamLimits

0xa620,	// (0x000121d0) level_1_signal_ParamLimits

0xa62d,	// (0x000121dd) level_2_signal_ParamLimits

0xa63a,	// (0x000121ea) level_3_signal_ParamLimits

0xa647,	// (0x000121f7) level_4_signal_ParamLimits

0xa654,	// (0x00012204) level_5_signal_ParamLimits

0xa661,	// (0x00012211) level_6_signal_ParamLimits

0xa66e,	// (0x0001221e) level_7_signal_ParamLimits

0xa620,	// (0x000121d0) level_1_battery_ParamLimits

0xa62d,	// (0x000121dd) level_2_battery_ParamLimits

0xa63a,	// (0x000121ea) level_3_battery_ParamLimits

0xa647,	// (0x000121f7) level_4_battery_ParamLimits

0xa654,	// (0x00012204) level_5_battery_ParamLimits

0xa661,	// (0x00012211) level_6_battery_ParamLimits

0xa66e,	// (0x0001221e) level_7_battery_ParamLimits

0xbd21,	// (0x000138d1) bg_status_flat_pane_g1

0xbd29,	// (0x000138d9) bg_status_flat_pane_g2

0xbd31,	// (0x000138e1) bg_status_flat_pane_g3

0xbd39,	// (0x000138e9) bg_status_flat_pane_g4

0xbd41,	// (0x000138f1) bg_status_flat_pane_g5

0xbd49,	// (0x000138f9) bg_status_flat_pane_g6

0xbd51,	// (0x00013901) bg_status_flat_pane_g7

0x91d6,	// (0x00010d86) tabs_3_active_pane_t1_ParamLimits

0x91d6,	// (0x00010d86) tabs_3_passive_pane_t1_ParamLimits

0x91f0,	// (0x00010da0) tabs_4_active_pane_t1_ParamLimits

0x91f0,	// (0x00010da0) tabs_4_1_passive_pane_t1_ParamLimits

0xa1d3,	// (0x00011d83) tabs_2_active_pane_t1_ParamLimits

0xa1d3,	// (0x00011d83) tabs_2_passive_pane_t1_ParamLimits

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp4_ParamLimits

0xa1f3,	// (0x00011da3) tabs_2_long_active_pane_t1_ParamLimits

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp4_ParamLimits

0x7cca,	// (0x0000f87a) list_single_midp_graphic_pane_t1_ParamLimits

0xa1e5,	// (0x00011d95) bg_active_tab_pane_cp5_ParamLimits

0xa212,	// (0x00011dc2) tabs_3_long_active_pane_t1_ParamLimits

0xa206,	// (0x00011db6) bg_passive_tab_pane_cp5_ParamLimits

0x7cca,	// (0x0000f87a) list_single_midp_graphic_pane_t1

0xb0a5,	// (0x00012c55) bg_status_flat_pane_ParamLimits

0xb15e,	// (0x00012d0e) indicator_pane_cp2_ParamLimits

0xb15e,	// (0x00012d0e) indicator_pane_cp2

0xb282,	// (0x00012e32) navi_pane_srt_ParamLimits

0xb282,	// (0x00012e32) navi_pane_srt

0xb2a6,	// (0x00012e56) popup_clock_digital_analogue_window_cp1

0x92b4,	// (0x00010e64) indicator_pane_t1

0xac90,	// (0x00012840) copy_highlight_pane

0xac90,	// (0x00012840) cursor_graphics_pane

0xac90,	// (0x00012840) graphic_within_text_pane

0xac90,	// (0x00012840) link_highlight_pane

0xc4dd,	// (0x0001408d) popup_preview_text_window_t5_ParamLimits

0xc4dd,	// (0x0001408d) popup_preview_text_window_t5

0xadb2,	// (0x00012962) cursor_digital_pane

0xadb2,	// (0x00012962) cursor_primary_pane

0xadc3,	// (0x00012973) cursor_primary_small_pane

0xadcb,	// (0x0001297b) cursor_secondary_pane

0xadd3,	// (0x00012983) cursor_title_pane

0xadb2,	// (0x00012962) link_highlight_digital_pane

0xadba,	// (0x0001296a) link_highlight_primary_pane

0xadc3,	// (0x00012973) link_highlight_primary_small_pane

0xadcb,	// (0x0001297b) link_highlight_secondary_pane

0xadd3,	// (0x00012983) link_highlight_title_pane

0xadb2,	// (0x00012962) copy_highlight_digital_pane

0xadb2,	// (0x00012962) copy_highlight_primary_pane

0xadc3,	// (0x00012973) copy_highlight_primary_small_pane

0xadcb,	// (0x0001297b) copy_highlight_secondary_pane

0xadd3,	// (0x00012983) copy_highlight_title_pane

0xadcb,	// (0x0001297b) graphic_text_digital_pane

0xbdb9,	// (0x00013969) graphic_text_primary_pane

0xbdc2,	// (0x00013972) graphic_text_primary_small_pane

0xadc3,	// (0x00012973) graphic_text_secondary_pane

0xadb2,	// (0x00012962) graphic_text_title_pane

0xaddb,	// (0x0001298b) cursor_primary_pane_g1

0xbdab,	// (0x0001395b) cursor_text_primary_t1

0xbd95,	// (0x00013945) cursor_primary_small_pane_g1

0xbd9d,	// (0x0001394d) cursor_text_primary_small_t1

0xbd7f,	// (0x0001392f) cursor_primary_small_pane_g1_copy1

0xbd87,	// (0x00013937) cursor_text_primary_small_t1_copy1

0xbd69,	// (0x00013919) cursor_text_title_t1

0xbd77,	// (0x00013927) cursor_title_pane_g1

0xaddb,	// (0x0001298b) cursor_digital_pane_g1

0xade3,	// (0x00012993) cursor_text_digital_t1

0xadf1,	// (0x000129a1) link_highlight_primary_pane_g1

0xbd12,	// (0x000138c2) link_highlight_primary_pane_t1

0xadf1,	// (0x000129a1) link_highlight_primary_small_pane_g1

0xadf9,	// (0x000129a9) link_highlight_primary_small_pane_t1

0xae08,	// (0x000129b8) link_highlight_secondary_pane_g1

0xae10,	// (0x000129c0) link_highlight_secondary_pane_t1

0xbc77,	// (0x00013827) link_highlight_title_pane_g1

0xbc8e,	// (0x0001383e) link_highlight_title_pane_t1

0xbc77,	// (0x00013827) link_highlight_digital_pane_g1

0xbc7f,	// (0x0001382f) link_highlight_digital_pane_t1

0xbb37,	// (0x000136e7) copy_highlight_primary_pane_g1

0xbb5d,	// (0x0001370d) copy_highlight_primary_pane_t1

0xbb37,	// (0x000136e7) copy_highlight_primary_small_pane_g1

0xbb4e,	// (0x000136fe) copy_highlight_primary_small_pane_t1

0xae1f,	// (0x000129cf) copy_highlight_secondary_pane_g1

0xae27,	// (0x000129d7) copy_highlight_secondary_pane_t1

0xbb37,	// (0x000136e7) copy_highlight_title_pane_g1

0xbb3f,	// (0x000136ef) copy_highlight_title_pane_t1

0xbb37,	// (0x000136e7) copy_highlight_digital_pane_g1

0xcd3d,	// (0x000148ed) copy_highlight_digital_pane_t1

0xcc91,	// (0x00014841) graphic_text_primary_pane_g1

0xcd21,	// (0x000148d1) graphic_text_primary_pane_t1

0xcd2f,	// (0x000148df) graphic_text_primary_pane_t2

0x0001,

0xf9b8,	// (0x00017568) graphic_text_primary_pane_t

0xccfd,	// (0x000148ad) graphic_text_primary_small_pane_g1

0xcd05,	// (0x000148b5) graphic_text_primary_small_pane_t1

0xcd13,	// (0x000148c3) graphic_text_primary_small_pane_t2

0x0001,

0xf9b3,	// (0x00017563) graphic_text_primary_small_pane_t

0xccd9,	// (0x00014889) graphic_text_secondary_pane_g1

0xcce1,	// (0x00014891) graphic_text_secondary_pane_t1

0xccef,	// (0x0001489f) graphic_text_secondary_pane_t2

0x0001,

0xf9ae,	// (0x0001755e) graphic_text_secondary_pane_t

0xccb5,	// (0x00014865) graphic_text_title_pane_g1

0xccbd,	// (0x0001486d) graphic_text_title_pane_t1

0xcccb,	// (0x0001487b) graphic_text_title_pane_t2

0x0001,

0xf9a9,	// (0x00017559) graphic_text_title_pane_t

0xcc91,	// (0x00014841) graphic_text_digital_pane_g1

0xcc99,	// (0x00014849) graphic_text_digital_pane_t1

0xcca7,	// (0x00014857) graphic_text_digital_pane_t2

0x0001,

0xf9a4,	// (0x00017554) graphic_text_digital_pane_t

0x91c0,	// (0x00010d70) navi_icon_pane_srt_ParamLimits

0x91c0,	// (0x00010d70) navi_icon_pane_srt

0x90e0,	// (0x00010c90) navi_midp_pane_srt

0x90e0,	// (0x00010c90) navi_navi_pane_srt

0x91c0,	// (0x00010d70) navi_text_pane_srt_ParamLimits

0x91c0,	// (0x00010d70) navi_text_pane_srt

0xc369,	// (0x00013f19) navi_navi_icon_text_pane_srt

0xc371,	// (0x00013f21) navi_navi_pane_srt_g1_ParamLimits

0xc371,	// (0x00013f21) navi_navi_pane_srt_g1

0xc383,	// (0x00013f33) navi_navi_pane_srt_g2_ParamLimits

0xc383,	// (0x00013f33) navi_navi_pane_srt_g2

0x0001,

0xf8d9,	// (0x00017489) navi_navi_pane_srt_g_ParamLimits

0xf8d9,	// (0x00017489) navi_navi_pane_srt_g

0xc395,	// (0x00013f45) navi_navi_tabs_pane_srt

0xc369,	// (0x00013f19) navi_navi_text_pane_srt

0xc369,	// (0x00013f19) navi_navi_volume_pane_srt

0xcc82,	// (0x00014832) navi_navi_text_pane_srt_t1

0x802e,	// (0x0000fbde) navi_navi_volume_pane_srt_g1

0x8036,	// (0x0000fbe6) volume_small_pane_srt_ParamLimits

0x8036,	// (0x0000fbe6) volume_small_pane_srt

0x7525,	// (0x0000f0d5) volume_small_pane_srt_g1_ParamLimits

0x7525,	// (0x0000f0d5) volume_small_pane_srt_g1

0x7535,	// (0x0000f0e5) volume_small_pane_srt_g2_ParamLimits

0x7535,	// (0x0000f0e5) volume_small_pane_srt_g2

0x7546,	// (0x0000f0f6) volume_small_pane_srt_g3_ParamLimits

0x7546,	// (0x0000f0f6) volume_small_pane_srt_g3

0x7557,	// (0x0000f107) volume_small_pane_srt_g4_ParamLimits

0x7557,	// (0x0000f107) volume_small_pane_srt_g4

0x7568,	// (0x0000f118) volume_small_pane_srt_g5_ParamLimits

0x7568,	// (0x0000f118) volume_small_pane_srt_g5

0x7579,	// (0x0000f129) volume_small_pane_srt_g6_ParamLimits

0x7579,	// (0x0000f129) volume_small_pane_srt_g6

0x758a,	// (0x0000f13a) volume_small_pane_srt_g7_ParamLimits

0x758a,	// (0x0000f13a) volume_small_pane_srt_g7

0x759b,	// (0x0000f14b) volume_small_pane_srt_g8_ParamLimits

0x759b,	// (0x0000f14b) volume_small_pane_srt_g8

0x75ac,	// (0x0000f15c) volume_small_pane_srt_g9_ParamLimits

0x75ac,	// (0x0000f15c) volume_small_pane_srt_g9

0x75bd,	// (0x0000f16d) volume_small_pane_srt_g10_ParamLimits

0x75bd,	// (0x0000f16d) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00017308) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00017308) volume_small_pane_srt_g

0x95de,	// (0x0001118e) query_popup_data_pane_cp2

0xcc68,	// (0x00014818) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xcc68,	// (0x00014818) navi_navi_icon_text_pane_srt_t1

0xbdb9,	// (0x00013969) navi_tabs_2_long_pane_srt

0xbdb9,	// (0x00013969) navi_tabs_2_pane_srt

0xbdb9,	// (0x00013969) navi_tabs_3_long_pane_srt

0xbdb9,	// (0x00013969) navi_tabs_3_pane_srt

0xbdb9,	// (0x00013969) navi_tabs_4_pane_srt

0x800e,	// (0x0000fbbe) tabs_2_active_pane_srt_ParamLimits

0x800e,	// (0x0000fbbe) tabs_2_active_pane_srt

0x801e,	// (0x0000fbce) tabs_2_passive_pane_srt_ParamLimits

0x801e,	// (0x0000fbce) tabs_2_passive_pane_srt

0xafdf,	// (0x00012b8f) bg_passive_tab_pane_cp1_srt_ParamLimits

0xafdf,	// (0x00012b8f) bg_passive_tab_pane_cp1_srt

0xcc46,	// (0x000147f6) bg_passive_tab_pane_g1_cp1_srt

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp1_srt

0xcc4f,	// (0x000147ff) bg_passive_tab_pane_g3_cp1_srt

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp1_srt_ParamLimits

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp1_srt

0xcc58,	// (0x00014808) tabs_2_active_pane_srt_g1

0xa1d3,	// (0x00011d83) tabs_2_active_pane_srt_t1_ParamLimits

0xa1d3,	// (0x00011d83) tabs_2_active_pane_srt_t1

0xcc46,	// (0x000147f6) bg_active_tab_pane_g1_cp1_srt

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp1_srt

0xcc4f,	// (0x000147ff) bg_active_tab_pane_g3_cp1_srt

0x7fdb,	// (0x0000fb8b) tabs_3_active_pane_srt_ParamLimits

0x7fdb,	// (0x0000fb8b) tabs_3_active_pane_srt

0x7fec,	// (0x0000fb9c) tabs_3_passive_pane_cp_srt_ParamLimits

0x7fec,	// (0x0000fb9c) tabs_3_passive_pane_cp_srt

0x7ffd,	// (0x0000fbad) tabs_3_passive_pane_srt_ParamLimits

0x7ffd,	// (0x0000fbad) tabs_3_passive_pane_srt

0xafdf,	// (0x00012b8f) bg_passive_tab_pane_cp2_srt_ParamLimits

0xafdf,	// (0x00012b8f) bg_passive_tab_pane_cp2_srt

0xae36,	// (0x000129e6) bg_passive_tab_pane_g1_cp2_srt

0xa952,	// (0x00012502) bg_passive_tab_pane_g2_cp2_srt

0xae3f,	// (0x000129ef) bg_passive_tab_pane_g3_cp2_srt

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp2_srt_ParamLimits

0x91c0,	// (0x00010d70) bg_active_tab_pane_cp2_srt

0xcc3e,	// (0x000147ee) tabs_3_active_pane_srt_g1

0x91d6,	// (0x00010d86) tabs_3_active_pane_srt_t1_ParamLimits

0x91d6,	// (0x00010d86) tabs_3_active_pane_srt_t1

0xae36,	// (0x000129e6) bg_active_tab_pane_g1_cp2_srt

0xa952,	// (0x00012502) bg_active_tab_pane_g2_cp2_srt

0xae3f,	// (0x000129ef) bg_active_tab_pane_g3_cp2_srt

0x7f93,	// (0x0000fb43) tabs_4_active_pane_srt_ParamLimits

0x7f93,	// (0x0000fb43) tabs_4_active_pane_srt

0x7fa5,	// (0x0000fb55) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7fa5,	// (0x0000fb55) tabs_4_passive_pane_cp2_srt

0x7722,	// (0x0000f2d2) aid_size_cell_toolbar

0xa206,	// (0x00011db6) main_idle_act_pane_ParamLimits

0x7899,	// (0x0000f449) popup_large_graphic_colour_window_ParamLimits

0x7b4d,	// (0x0000f6fd) popup_toolbar_window_ParamLimits

0x7b4d,	// (0x0000f6fd) popup_toolbar_window

0xca2c,	// (0x000145dc) list_single_graphic_2heading_pane_ParamLimits

0xca2c,	// (0x000145dc) list_single_graphic_2heading_pane

0xa3dd,	// (0x00011f8d) aid_size_cell_apps_grid_lsc_pane

0xa3ef,	// (0x00011f9f) aid_size_cell_apps_grid_prt_pane

0xafdf,	// (0x00012b8f) bg_wml_button_pane_cp1_ParamLimits

0xafdf,	// (0x00012b8f) bg_wml_button_pane_cp1

0xb7cb,	// (0x0001337b) form_midp_field_text_pane_t1_ParamLimits

0xb5be,	// (0x0001316e) input_focus_pane_cp050_ParamLimits

0xb7ec,	// (0x0001339c) list_midp_form_text_pane_ParamLimits

0xb79c,	// (0x0001334c) input_focus_pane_cp051_ParamLimits

0xb7bc,	// (0x0001336c) list_midp_choice_pane_ParamLimits

0xb66e,	// (0x0001321e) list_single_2graphic_pane_cp3_ParamLimits

0xb66e,	// (0x0001321e) list_single_2graphic_pane_cp3

0xb681,	// (0x00013231) list_single_midp_graphic_pane_ParamLimits

0xb681,	// (0x00013231) list_single_midp_graphic_pane

0x7bdc,	// (0x0000f78c) list_single_graphic_2heading_pane_g1_ParamLimits

0x7bdc,	// (0x0000f78c) list_single_graphic_2heading_pane_g1

0x7be8,	// (0x0000f798) list_single_graphic_2heading_pane_g4_ParamLimits

0x7be8,	// (0x0000f798) list_single_graphic_2heading_pane_g4

0x7bf4,	// (0x0000f7a4) list_single_graphic_2heading_pane_g5_ParamLimits

0x7bf4,	// (0x0000f7a4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001735b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001735b) list_single_graphic_2heading_pane_g

0x7c00,	// (0x0000f7b0) list_single_graphic_2heading_pane_t1_ParamLimits

0x7c00,	// (0x0000f7b0) list_single_graphic_2heading_pane_t1

0x7c14,	// (0x0000f7c4) list_single_graphic_2heading_pane_t2_ParamLimits

0x7c14,	// (0x0000f7c4) list_single_graphic_2heading_pane_t2

0x7c2e,	// (0x0000f7de) list_single_graphic_2heading_pane_t3_ParamLimits

0x7c2e,	// (0x0000f7de) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00017362) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00017362) list_single_graphic_2heading_pane_t

0xb3f2,	// (0x00012fa2) bg_popup_sub_pane_cp2

0xb418,	// (0x00012fc8) grid_toobar_pane

0x7c46,	// (0x0000f7f6) cell_toolbar_pane_ParamLimits

0x7c46,	// (0x0000f7f6) cell_toolbar_pane

0xb44e,	// (0x00012ffe) cell_toolbar_pane_g1_ParamLimits

0xb44e,	// (0x00012ffe) cell_toolbar_pane_g1

0xb460,	// (0x00013010) cell_toolbar_pane_g2_ParamLimits

0xb460,	// (0x00013010) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x00017369) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x00017369) cell_toolbar_pane_g

0xb482,	// (0x00013032) grid_highlight_pane_cp2_ParamLimits

0xb482,	// (0x00013032) grid_highlight_pane_cp2

0xb49c,	// (0x0001304c) toolbar_button_pane

0xb4a8,	// (0x00013058) toolbar_button_pane_g1

0xb4b0,	// (0x00013060) toolbar_button_pane_g2

0xb4b8,	// (0x00013068) toolbar_button_pane_g3

0xb4c0,	// (0x00013070) toolbar_button_pane_g4

0xb4c8,	// (0x00013078) toolbar_button_pane_g5

0xb4d0,	// (0x00013080) toolbar_button_pane_g6

0xb4d8,	// (0x00013088) toolbar_button_pane_g7

0xb4e0,	// (0x00013090) toolbar_button_pane_g8

0xb4e8,	// (0x00013098) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x0001736e) toolbar_button_pane_g

0x7c75,	// (0x0000f825) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7c75,	// (0x0000f825) list_single_2graphic_pane_g1_cp3

0x7c81,	// (0x0000f831) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7c81,	// (0x0000f831) list_single_2graphic_pane_g2_cp3

0x7c90,	// (0x0000f840) list_single_2graphic_pane_g3_cp3

0x7c98,	// (0x0000f848) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7c98,	// (0x0000f848) list_single_2graphic_pane_g4_cp3

0x7ca4,	// (0x0000f854) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7ca4,	// (0x0000f854) list_single_2graphic_pane_t1_cp3

0x7cbe,	// (0x0000f86e) list_single_midp_graphic_pane_g2_ParamLimits

0x7cbe,	// (0x0000f86e) list_single_midp_graphic_pane_g2

0x772a,	// (0x0000f2da) aid_zoom_text_primary

0x7732,	// (0x0000f2e2) aid_zoom_text_secondary

0xaeee,	// (0x00012a9e) status_small_pane_g7_ParamLimits

0xaeee,	// (0x00012a9e) status_small_pane_g7

0xaf11,	// (0x00012ac1) status_small_pane_t1_ParamLimits

0x90f7,	// (0x00010ca7) title_pane_g2

0x0003,

0xf54e,	// (0x000170fe) title_pane_g

0x967d,	// (0x0001122d) aid_size_cell_colour_1_pane_ParamLimits

0x967d,	// (0x0001122d) aid_size_cell_colour_1_pane

0x9691,	// (0x00011241) aid_size_cell_colour_2_pane_ParamLimits

0x9691,	// (0x00011241) aid_size_cell_colour_2_pane

0x96a5,	// (0x00011255) aid_size_cell_colour_3_pane_ParamLimits

0x96a5,	// (0x00011255) aid_size_cell_colour_3_pane

0x96b9,	// (0x00011269) aid_size_cell_colour_4_pane_ParamLimits

0x96b9,	// (0x00011269) aid_size_cell_colour_4_pane

0x71e0,	// (0x0000ed90) title_pane_stacon_g1_ParamLimits

0x71e0,	// (0x0000ed90) title_pane_stacon_g1

0xbbb4,	// (0x00013764) popup_note_wait_window_g3_ParamLimits

0xbbb4,	// (0x00013764) popup_note_wait_window_g3

0xbc2a,	// (0x000137da) popup_note_wait_window_t5_ParamLimits

0xbc2a,	// (0x000137da) popup_note_wait_window_t5

0x90e0,	// (0x00010c90) main_feb_china_hwr_fs_writing_pane

0x77ae,	// (0x0000f35e) popup_feb_china_hwr_fs_window_ParamLimits

0x77ae,	// (0x0000f35e) popup_feb_china_hwr_fs_window

0x7ce0,	// (0x0000f890) aid_size_cell_hwr_fs_ParamLimits

0x7ce0,	// (0x0000f890) aid_size_cell_hwr_fs

0xb5be,	// (0x0001316e) bg_popup_sub_pane_cp3_ParamLimits

0xb5be,	// (0x0001316e) bg_popup_sub_pane_cp3

0x7cf5,	// (0x0000f8a5) grid_hwr_fs_pane_ParamLimits

0x7cf5,	// (0x0000f8a5) grid_hwr_fs_pane

0x7d09,	// (0x0000f8b9) linegrid_hwr_fs_pane_ParamLimits

0x7d09,	// (0x0000f8b9) linegrid_hwr_fs_pane

0x7d19,	// (0x0000f8c9) cell_hwr_fs_pane_ParamLimits

0x7d19,	// (0x0000f8c9) cell_hwr_fs_pane

0xb5ca,	// (0x0001317a) linegrid_hwr_fs_pane_g1_ParamLimits

0xb5ca,	// (0x0001317a) linegrid_hwr_fs_pane_g1

0xb5d6,	// (0x00013186) linegrid_hwr_fs_pane_g2_ParamLimits

0xb5d6,	// (0x00013186) linegrid_hwr_fs_pane_g2

0xb5e8,	// (0x00013198) linegrid_hwr_fs_pane_g3_ParamLimits

0xb5e8,	// (0x00013198) linegrid_hwr_fs_pane_g3

0x7d37,	// (0x0000f8e7) linegrid_hwr_fs_pane_g4_ParamLimits

0x7d37,	// (0x0000f8e7) linegrid_hwr_fs_pane_g4

0x7d51,	// (0x0000f901) linegrid_hwr_fs_pane_g5_ParamLimits

0x7d51,	// (0x0000f901) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x00017394) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x00017394) linegrid_hwr_fs_pane_g

0xb5f4,	// (0x000131a4) cell_hwr_fs_pane_g1_ParamLimits

0xb5f4,	// (0x000131a4) cell_hwr_fs_pane_g1

0xb330,	// (0x00012ee0) cell_hwr_fs_pane_g2_ParamLimits

0xb330,	// (0x00012ee0) cell_hwr_fs_pane_g2

0xb60a,	// (0x000131ba) cell_hwr_fs_pane_g3_ParamLimits

0xb60a,	// (0x000131ba) cell_hwr_fs_pane_g3

0xb617,	// (0x000131c7) cell_hwr_fs_pane_g4_ParamLimits

0xb617,	// (0x000131c7) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x0001739f) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x0001739f) cell_hwr_fs_pane_g

0x7d67,	// (0x0000f917) cell_hwr_fs_pane_t1

0x90e0,	// (0x00010c90) grid_highlight_pane_cp6

0x90e0,	// (0x00010c90) main_idle_act2_pane

0xa17b,	// (0x00011d2b) aid_inside_area_popup_secondary

0xc209,	// (0x00013db9) aid_inside_area_window_primary_ParamLimits

0xc209,	// (0x00013db9) aid_inside_area_window_primary

0xcd4c,	// (0x000148fc) ai2_news_ticker_pane

0xcd54,	// (0x00014904) aid_size_cell_ai1_link_ParamLimits

0xcd54,	// (0x00014904) aid_size_cell_ai1_link

0xcd6e,	// (0x0001491e) popup_ai2_data_window_ParamLimits

0xcd6e,	// (0x0001491e) popup_ai2_data_window

0xcd82,	// (0x00014932) popup_ai2_link_window_ParamLimits

0xcd82,	// (0x00014932) popup_ai2_link_window

0xb5be,	// (0x0001316e) bg_popup_sub_pane_cp4_ParamLimits

0xb5be,	// (0x0001316e) bg_popup_sub_pane_cp4

0xcd96,	// (0x00014946) grid_ai2_link_pane_ParamLimits

0xcd96,	// (0x00014946) grid_ai2_link_pane

0xcdad,	// (0x0001495d) popup_ai2_link_window_g1_ParamLimits

0xcdad,	// (0x0001495d) popup_ai2_link_window_g1

0xcdb9,	// (0x00014969) popup_ai2_link_window_g2_ParamLimits

0xcdb9,	// (0x00014969) popup_ai2_link_window_g2

0x0001,

0xf9bd,	// (0x0001756d) popup_ai2_link_window_g_ParamLimits

0xf9bd,	// (0x0001756d) popup_ai2_link_window_g

0xcdc8,	// (0x00014978) ai2_mp_button_pane

0xcdd0,	// (0x00014980) ai2_mp_volume_pane

0xb79c,	// (0x0001334c) bg_popup_sub_pane_cp5_ParamLimits

0xb79c,	// (0x0001334c) bg_popup_sub_pane_cp5

0xcdd8,	// (0x00014988) heading_ai2_gene_pane_ParamLimits

0xcdd8,	// (0x00014988) heading_ai2_gene_pane

0xcde4,	// (0x00014994) list_ai2_gene_pane_ParamLimits

0xcde4,	// (0x00014994) list_ai2_gene_pane

0xce2c,	// (0x000149dc) cell_ai2_link_pane_ParamLimits

0xce2c,	// (0x000149dc) cell_ai2_link_pane

0xce42,	// (0x000149f2) cell_ai2_link_pane_g1

0x90e0,	// (0x00010c90) grid_highlight_pane_cp7

0x804b,	// (0x0000fbfb) ai2_mp_volume_pane_g1

0xcf0a,	// (0x00014aba) ai2_mp_volume_pane_g2

0xce7f,	// (0x00014a2f) list_ai2_gene_pane_t1

0xcf12,	// (0x00014ac2) ai2_mp_volume_pane_g3

0x0002,

0xf9d6,	// (0x00017586) ai2_mp_volume_pane_g

0x8053,	// (0x0000fc03) volume_small_pane_cp3

0xcf1a,	// (0x00014aca) aid_size_cell_ai2_button

0xcf22,	// (0x00014ad2) grid_ai2_button_pane

0xcf2b,	// (0x00014adb) cell_ai2_button_pane_ParamLimits

0xcf2b,	// (0x00014adb) cell_ai2_button_pane

0x8ff9,	// (0x00010ba9) cell_ai2_button_pane_g1

0x90e0,	// (0x00010c90) grid_highlight_pane_cp8

0xceca,	// (0x00014a7a) ai2_gene_pane_t1_ParamLimits

0xceca,	// (0x00014a7a) ai2_gene_pane_t1

0x7718,	// (0x0000f2c8) aid_height_parent_landscape

0xc856,	// (0x00014406) aid_height_set_list

0xc862,	// (0x00014412) aid_size_parent

0xcbd1,	// (0x00014781) aid_size_cell_graphic_pane_ParamLimits

0xcdf4,	// (0x000149a4) popup_ai2_data_window_g1_ParamLimits

0xcdf4,	// (0x000149a4) popup_ai2_data_window_g1

0xce00,	// (0x000149b0) ai2_news_ticker_pane_g1

0xce08,	// (0x000149b8) ai2_news_ticker_pane_g2

0x0001,

0xf9c2,	// (0x00017572) ai2_news_ticker_pane_g

0xce10,	// (0x000149c0) ai2_news_ticker_pane_t1

0xce1e,	// (0x000149ce) ai2_news_ticker_pane_t2

0x0001,

0xf9c7,	// (0x00017577) ai2_news_ticker_pane_t

0xcb6b,	// (0x0001471b) heading_ai2_gene_pane_g1

0xce4b,	// (0x000149fb) heading_ai2_gene_pane_t1_ParamLimits

0xce4b,	// (0x000149fb) heading_ai2_gene_pane_t1

0xce60,	// (0x00014a10) list_highlight_pane_cp6

0xce68,	// (0x00014a18) ai2_gene_pane_ParamLimits

0xce68,	// (0x00014a18) ai2_gene_pane

0xce8d,	// (0x00014a3d) list_ai2_gene_pane_t2

0x0001,

0xf9cc,	// (0x0001757c) list_ai2_gene_pane_t

0xce9b,	// (0x00014a4b) list_highlight_pane_cp8_ParamLimits

0xce9b,	// (0x00014a4b) list_highlight_pane_cp8

0xceac,	// (0x00014a5c) ai2_gene_pane_g1_ParamLimits

0xceac,	// (0x00014a5c) ai2_gene_pane_g1

0xcebe,	// (0x00014a6e) ai2_gene_pane_g2_ParamLimits

0xcebe,	// (0x00014a6e) ai2_gene_pane_g2

0x0001,

0xf9d1,	// (0x00017581) ai2_gene_pane_g_ParamLimits

0xf9d1,	// (0x00017581) ai2_gene_pane_g

0x994a,	// (0x000114fa) scroll_pane_cp12

0x76cf,	// (0x0000f27f) control_pane_t3_ParamLimits

0x76cf,	// (0x0000f27f) control_pane_t3

0xaf02,	// (0x00012ab2) status_small_pane_g8_ParamLimits

0xaf02,	// (0x00012ab2) status_small_pane_g8

0x786e,	// (0x0000f41e) popup_find_window_ParamLimits

0x79f0,	// (0x0000f5a0) popup_note_image_window_ParamLimits

0x9b5c,	// (0x0001170c) list_double2_graphic_pane_vc_g1_ParamLimits

0x9b5c,	// (0x0001170c) list_double2_graphic_pane_vc_g1

0x9b68,	// (0x00011718) list_double2_graphic_pane_vc_g2_ParamLimits

0x9b68,	// (0x00011718) list_double2_graphic_pane_vc_g2

0x9a93,	// (0x00011643) list_double2_graphic_pane_vc_g3_ParamLimits

0x9a93,	// (0x00011643) list_double2_graphic_pane_vc_g3

0x0002,

0xf615,	// (0x000171c5) list_double2_graphic_pane_vc_g_ParamLimits

0xf615,	// (0x000171c5) list_double2_graphic_pane_vc_g

0x9b74,	// (0x00011724) list_double2_graphic_pane_vc_t1_ParamLimits

0x9b74,	// (0x00011724) list_double2_graphic_pane_vc_t1

0x9b68,	// (0x00011718) list_single_heading_pane_vc_g1_ParamLimits

0x9b68,	// (0x00011718) list_single_heading_pane_vc_g1

0x9a93,	// (0x00011643) list_single_heading_pane_vc_g2_ParamLimits

0x9a93,	// (0x00011643) list_single_heading_pane_vc_g2

0x0001,

0xf661,	// (0x00017211) list_single_heading_pane_vc_g_ParamLimits

0xf661,	// (0x00017211) list_single_heading_pane_vc_g

0xb4f0,	// (0x000130a0) list_single_heading_pane_vc_t1_ParamLimits

0xb4f0,	// (0x000130a0) list_single_heading_pane_vc_t1

0xb506,	// (0x000130b6) list_single_heading_pane_vc_t2_ParamLimits

0xb506,	// (0x000130b6) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x00017383) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x00017383) list_single_heading_pane_vc_t

0xb518,	// (0x000130c8) list_setting_number_pane_vc_g1_ParamLimits

0xb518,	// (0x000130c8) list_setting_number_pane_vc_g1

0xb524,	// (0x000130d4) list_setting_number_pane_vc_g2_ParamLimits

0xb524,	// (0x000130d4) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00017388) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00017388) list_setting_number_pane_vc_g

0xb530,	// (0x000130e0) list_setting_number_pane_vc_t1_ParamLimits

0xb530,	// (0x000130e0) list_setting_number_pane_vc_t1

0xb544,	// (0x000130f4) list_setting_number_pane_vc_t2_ParamLimits

0xb544,	// (0x000130f4) list_setting_number_pane_vc_t2

0xb560,	// (0x00013110) list_setting_number_pane_vc_t3_ParamLimits

0xb560,	// (0x00013110) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x0001738d) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x0001738d) list_setting_number_pane_vc_t

0xb586,	// (0x00013136) set_value_pane_vc_ParamLimits

0xb586,	// (0x00013136) set_value_pane_vc

0xca2c,	// (0x000145dc) list_double2_graphic_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double2_graphic_pane_vc

0xca3f,	// (0x000145ef) list_double2_large_graphic_pane_vc_ParamLimits

0xca3f,	// (0x000145ef) list_double2_large_graphic_pane_vc

0xca2c,	// (0x000145dc) list_double2_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double2_pane_vc

0xca2c,	// (0x000145dc) list_double_graphic_heading_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double_graphic_heading_pane_vc

0xca2c,	// (0x000145dc) list_double_graphic_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double_graphic_pane_vc

0xca2c,	// (0x000145dc) list_double_heading_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double_heading_pane_vc

0xca50,	// (0x00014600) list_double_large_graphic_pane_vc_ParamLimits

0xca50,	// (0x00014600) list_double_large_graphic_pane_vc

0xca2c,	// (0x000145dc) list_double_number_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double_number_pane_vc

0xca2c,	// (0x000145dc) list_double_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double_pane_vc

0xca2c,	// (0x000145dc) list_double_time_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_double_time_pane_vc

0xca2c,	// (0x000145dc) list_setting_number_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_setting_number_pane_vc

0xca2c,	// (0x000145dc) list_setting_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_setting_pane_vc

0xca2c,	// (0x000145dc) list_single_graphic_heading_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_single_graphic_heading_pane_vc

0xca2c,	// (0x000145dc) list_single_heading_pane_vc_ParamLimits

0xca2c,	// (0x000145dc) list_single_heading_pane_vc

0xca6c,	// (0x0001461c) list_single_number_heading_pane_vc_ParamLimits

0xca6c,	// (0x0001461c) list_single_number_heading_pane_vc

0x9b5c,	// (0x0001170c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9b5c,	// (0x0001170c) list_double_graphic_heading_pane_vc_g1

0x9b68,	// (0x00011718) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9b68,	// (0x00011718) list_double_graphic_heading_pane_vc_g2

0x9a93,	// (0x00011643) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9a93,	// (0x00011643) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf615,	// (0x000171c5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf615,	// (0x000171c5) list_double_graphic_heading_pane_vc_g

0xcf5f,	// (0x00014b0f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xcf5f,	// (0x00014b0f) list_double_graphic_heading_pane_vc_t1

0xcf75,	// (0x00014b25) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xcf75,	// (0x00014b25) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9dd,	// (0x0001758d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9dd,	// (0x0001758d) list_double_graphic_heading_pane_vc_t

0xb518,	// (0x000130c8) list_setting_pane_vc_g1_ParamLimits

0xb518,	// (0x000130c8) list_setting_pane_vc_g1

0xb524,	// (0x000130d4) list_setting_pane_vc_g2_ParamLimits

0xb524,	// (0x000130d4) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x00017388) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x00017388) list_setting_pane_vc_g

0xd16a,	// (0x00014d1a) list_setting_pane_vc_t1_ParamLimits

0xd16a,	// (0x00014d1a) list_setting_pane_vc_t1

0xd17e,	// (0x00014d2e) list_setting_pane_vc_t2_ParamLimits

0xd17e,	// (0x00014d2e) list_setting_pane_vc_t2

0x0001,

0xfa20,	// (0x000175d0) list_setting_pane_vc_t_ParamLimits

0xfa20,	// (0x000175d0) list_setting_pane_vc_t

0xb586,	// (0x00013136) set_value_pane_cp_vc_ParamLimits

0xb586,	// (0x00013136) set_value_pane_cp_vc

0x9b68,	// (0x00011718) list_single_number_heading_pane_vc_g1_ParamLimits

0x9b68,	// (0x00011718) list_single_number_heading_pane_vc_g1

0x9a93,	// (0x00011643) list_single_number_heading_pane_vc_g2_ParamLimits

0x9a93,	// (0x00011643) list_single_number_heading_pane_vc_g2

0x0001,

0xf661,	// (0x00017211) list_single_number_heading_pane_vc_g_ParamLimits

0xf661,	// (0x00017211) list_single_number_heading_pane_vc_g

0xb4f0,	// (0x000130a0) list_single_number_heading_pane_vc_t1_ParamLimits

0xb4f0,	// (0x000130a0) list_single_number_heading_pane_vc_t1

0xd1a0,	// (0x00014d50) list_single_number_heading_pane_vc_t2_ParamLimits

0xd1a0,	// (0x00014d50) list_single_number_heading_pane_vc_t2

0xd1b2,	// (0x00014d62) list_single_number_heading_pane_vc_t3_ParamLimits

0xd1b2,	// (0x00014d62) list_single_number_heading_pane_vc_t3

0x0002,

0xfa25,	// (0x000175d5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x000175d5) list_single_number_heading_pane_vc_t

0x9b5c,	// (0x0001170c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9b5c,	// (0x0001170c) list_single_graphic_heading_pane_vc_g1

0x9b68,	// (0x00011718) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9b68,	// (0x00011718) list_single_graphic_heading_pane_vc_g4

0x9a93,	// (0x00011643) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9a93,	// (0x00011643) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf615,	// (0x000171c5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf615,	// (0x000171c5) list_single_graphic_heading_pane_vc_g

0xb4f0,	// (0x000130a0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb4f0,	// (0x000130a0) list_single_graphic_heading_pane_vc_t1

0xd1c4,	// (0x00014d74) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd1c4,	// (0x00014d74) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x000175dc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x000175dc) list_single_graphic_heading_pane_vc_t

0x9b68,	// (0x00011718) list_double2_pane_vc_g1_ParamLimits

0x9b68,	// (0x00011718) list_double2_pane_vc_g1

0x9a93,	// (0x00011643) list_double2_pane_vc_g2_ParamLimits

0x9a93,	// (0x00011643) list_double2_pane_vc_g2

0x0001,

0xf661,	// (0x00017211) list_double2_pane_vc_g_ParamLimits

0xf661,	// (0x00017211) list_double2_pane_vc_g

0x9a9f,	// (0x0001164f) list_double2_pane_vc_t1_ParamLimits

0x9a9f,	// (0x0001164f) list_double2_pane_vc_t1

0x9a02,	// (0x000115b2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9a02,	// (0x000115b2) list_double2_large_graphic_pane_vc_g1

0x9a0e,	// (0x000115be) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9a0e,	// (0x000115be) list_double2_large_graphic_pane_vc_g2

0x9a1a,	// (0x000115ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9a1a,	// (0x000115ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00017195) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00017195) list_double2_large_graphic_pane_vc_g

0x9a2e,	// (0x000115de) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9a2e,	// (0x000115de) list_double2_large_graphic_pane_vc_t1

0xd1d6,	// (0x00014d86) list_double_time_pane_vc_g1_ParamLimits

0xd1d6,	// (0x00014d86) list_double_time_pane_vc_g1

0xd1e2,	// (0x00014d92) list_double_time_pane_vc_g2_ParamLimits

0xd1e2,	// (0x00014d92) list_double_time_pane_vc_g2

0x0001,

0xfa31,	// (0x000175e1) list_double_time_pane_vc_g_ParamLimits

0xfa31,	// (0x000175e1) list_double_time_pane_vc_g

0xd1ee,	// (0x00014d9e) list_double_time_pane_vc_t1_ParamLimits

0xd1ee,	// (0x00014d9e) list_double_time_pane_vc_t1

0xd20c,	// (0x00014dbc) list_double_time_pane_vc_t2_ParamLimits

0xd20c,	// (0x00014dbc) list_double_time_pane_vc_t2

0xd230,	// (0x00014de0) list_double_time_pane_vc_t3_ParamLimits

0xd230,	// (0x00014de0) list_double_time_pane_vc_t3

0xd242,	// (0x00014df2) list_double_time_pane_vc_t4_ParamLimits

0xd242,	// (0x00014df2) list_double_time_pane_vc_t4

0x0003,

0xfa36,	// (0x000175e6) list_double_time_pane_vc_t_ParamLimits

0xfa36,	// (0x000175e6) list_double_time_pane_vc_t

0x9b68,	// (0x00011718) list_double_pane_vc_g1_ParamLimits

0x9b68,	// (0x00011718) list_double_pane_vc_g1

0x9a93,	// (0x00011643) list_double_pane_vc_g2_ParamLimits

0x9a93,	// (0x00011643) list_double_pane_vc_g2

0x0001,

0xf661,	// (0x00017211) list_double_pane_vc_g_ParamLimits

0xf661,	// (0x00017211) list_double_pane_vc_g

0xd254,	// (0x00014e04) list_double_pane_vc_t1_ParamLimits

0xd254,	// (0x00014e04) list_double_pane_vc_t1

0xd266,	// (0x00014e16) list_double_pane_vc_t2_ParamLimits

0xd266,	// (0x00014e16) list_double_pane_vc_t2

0x0001,

0xfa3f,	// (0x000175ef) list_double_pane_vc_t_ParamLimits

0xfa3f,	// (0x000175ef) list_double_pane_vc_t

0x9b68,	// (0x00011718) list_double_number_pane_vc_g1_ParamLimits

0x9b68,	// (0x00011718) list_double_number_pane_vc_g1

0x9a93,	// (0x00011643) list_double_number_pane_vc_g2_ParamLimits

0x9a93,	// (0x00011643) list_double_number_pane_vc_g2

0x0001,

0xf661,	// (0x00017211) list_double_number_pane_vc_g_ParamLimits

0xf661,	// (0x00017211) list_double_number_pane_vc_g

0xd27c,	// (0x00014e2c) list_double_number_pane_vc_t1_ParamLimits

0xd27c,	// (0x00014e2c) list_double_number_pane_vc_t1

0xd290,	// (0x00014e40) list_double_number_pane_vc_t2_ParamLimits

0xd290,	// (0x00014e40) list_double_number_pane_vc_t2

0xd2a2,	// (0x00014e52) list_double_number_pane_vc_t3_ParamLimits

0xd2a2,	// (0x00014e52) list_double_number_pane_vc_t3

0x0002,

0xfa44,	// (0x000175f4) list_double_number_pane_vc_t_ParamLimits

0xfa44,	// (0x000175f4) list_double_number_pane_vc_t

0xd2b8,	// (0x00014e68) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd2b8,	// (0x00014e68) list_double_large_graphic_pane_vc_g1

0xd2e0,	// (0x00014e90) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd2e0,	// (0x00014e90) list_double_large_graphic_pane_vc_g2

0xd2f4,	// (0x00014ea4) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd2f4,	// (0x00014ea4) list_double_large_graphic_pane_vc_g3

0xd303,	// (0x00014eb3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd303,	// (0x00014eb3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4b,	// (0x000175fb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4b,	// (0x000175fb) list_double_large_graphic_pane_vc_g

0xd313,	// (0x00014ec3) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd313,	// (0x00014ec3) list_double_large_graphic_pane_vc_t1

0xd32d,	// (0x00014edd) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd32d,	// (0x00014edd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa54,	// (0x00017604) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa54,	// (0x00017604) list_double_large_graphic_pane_vc_t

0x9b68,	// (0x00011718) list_double_heading_pane_vc_g1_ParamLimits

0x9b68,	// (0x00011718) list_double_heading_pane_vc_g1

0x9a93,	// (0x00011643) list_double_heading_pane_vc_g2_ParamLimits

0x9a93,	// (0x00011643) list_double_heading_pane_vc_g2

0x0001,

0xf661,	// (0x00017211) list_double_heading_pane_vc_g_ParamLimits

0xf661,	// (0x00017211) list_double_heading_pane_vc_g

0xd34d,	// (0x00014efd) list_double_heading_pane_vc_t1_ParamLimits

0xd34d,	// (0x00014efd) list_double_heading_pane_vc_t1

0xb4f0,	// (0x000130a0) list_double_heading_pane_vc_t2_ParamLimits

0xb4f0,	// (0x000130a0) list_double_heading_pane_vc_t2

0x0001,

0xfa59,	// (0x00017609) list_double_heading_pane_vc_t_ParamLimits

0xfa59,	// (0x00017609) list_double_heading_pane_vc_t

0xd35f,	// (0x00014f0f) list_double_graphic_pane_vc_g1_ParamLimits

0xd35f,	// (0x00014f0f) list_double_graphic_pane_vc_g1

0xd36b,	// (0x00014f1b) list_double_graphic_pane_vc_g2_ParamLimits

0xd36b,	// (0x00014f1b) list_double_graphic_pane_vc_g2

0x9b68,	// (0x00011718) list_double_graphic_pane_vc_g3_ParamLimits

0x9b68,	// (0x00011718) list_double_graphic_pane_vc_g3

0x0003,

0xfa5e,	// (0x0001760e) list_double_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0001760e) list_double_graphic_pane_vc_g

0xd388,	// (0x00014f38) list_double_graphic_pane_vc_t1_ParamLimits

0xd388,	// (0x00014f38) list_double_graphic_pane_vc_t1

0xd3a6,	// (0x00014f56) list_double_graphic_pane_vc_t2_ParamLimits

0xd3a6,	// (0x00014f56) list_double_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00017617) list_double_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00017617) list_double_graphic_pane_vc_t

0x6ebd,	// (0x0000ea6d) aid_size_cell_fastswap

0x6ec5,	// (0x0000ea75) aid_size_cell_touch_ParamLimits

0x6ec5,	// (0x0000ea75) aid_size_cell_touch

0x7014,	// (0x0000ebc4) popup_fast_swap_wide_window_ParamLimits

0x7014,	// (0x0000ebc4) popup_fast_swap_wide_window

0x70da,	// (0x0000ec8a) touch_pane_ParamLimits

0x70da,	// (0x0000ec8a) touch_pane

0x9e00,	// (0x000119b0) button_value_adjust_pane_cp2

0x9e08,	// (0x000119b8) button_value_adjust_pane_cp4

0x9e28,	// (0x000119d8) form_field_data_pane_cp2

0x9e47,	// (0x000119f7) form_field_data_wide_pane_cp2

0xa4a0,	// (0x00012050) bg_scroll_pane_ParamLimits

0x7301,	// (0x0000eeb1) scroll_handle_pane_ParamLimits

0x7315,	// (0x0000eec5) scroll_sc2_down_pane_ParamLimits

0x7315,	// (0x0000eec5) scroll_sc2_down_pane

0xa4d1,	// (0x00012081) scroll_sc2_up_pane_ParamLimits

0xa4d1,	// (0x00012081) scroll_sc2_up_pane

0xd810,	// (0x000153c0) grid_wheel_folder_pane_g1_ParamLimits

0xd810,	// (0x000153c0) grid_wheel_folder_pane_g1

0x74c9,	// (0x0000f079) clock_nsta_pane_cp2_ParamLimits

0x74c9,	// (0x0000f079) clock_nsta_pane_cp2

0xac98,	// (0x00012848) listscroll_midp_pane_ParamLimits

0xaca4,	// (0x00012854) midp_canvas_pane

0x7710,	// (0x0000f2c0) nsta_clock_indic_pane

0xafb0,	// (0x00012b60) listscroll_form_pane_vc

0xafcd,	// (0x00012b7d) listscroll_set_pane_vc_ParamLimits

0xafcd,	// (0x00012b7d) listscroll_set_pane_vc

0xb0c1,	// (0x00012c71) clock_nsta_pane

0xb12b,	// (0x00012cdb) indicator_nsta_pane

0xb3f2,	// (0x00012fa2) bg_popup_sub_pane_cp2_ParamLimits

0xb406,	// (0x00012fb6) find_pane_cp2_ParamLimits

0xb406,	// (0x00012fb6) find_pane_cp2

0xb418,	// (0x00012fc8) grid_toobar_pane_ParamLimits

0xb592,	// (0x00013142) list_form_gen_pane_vc_ParamLimits

0xb592,	// (0x00013142) list_form_gen_pane_vc

0xb5a8,	// (0x00013158) scroll_pane_cp8_vc_ParamLimits

0xb5a8,	// (0x00013158) scroll_pane_cp8_vc

0xb624,	// (0x000131d4) data_form_wide_pane_vc_ParamLimits

0xb624,	// (0x000131d4) data_form_wide_pane_vc

0xb630,	// (0x000131e0) form_field_data_wide_pane_vc_g1

0xb638,	// (0x000131e8) form_field_data_wide_pane_vc_t1_ParamLimits

0xb638,	// (0x000131e8) form_field_data_wide_pane_vc_t1

0x9ed0,	// (0x00011a80) input_focus_pane_cp6_vc_ParamLimits

0x9ed0,	// (0x00011a80) input_focus_pane_cp6_vc

0xb934,	// (0x000134e4) list_midp_pane_ParamLimits

0xb940,	// (0x000134f0) scroll_pane_cp16_ParamLimits

0xb940,	// (0x000134f0) scroll_pane_cp16

0xb99a,	// (0x0001354a) button_value_adjust_pane_ParamLimits

0xb99a,	// (0x0001354a) button_value_adjust_pane

0xc874,	// (0x00014424) button_value_adjust_pane_cp6_ParamLimits

0xc874,	// (0x00014424) button_value_adjust_pane_cp6

0xc97c,	// (0x0001452c) settings_code_pane_cp_ParamLimits

0xc97c,	// (0x0001452c) settings_code_pane_cp

0x8ff9,	// (0x00010ba9) cell_touch_pane_g1

0x8ff9,	// (0x00010ba9) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x000172ae) cell_touch_pane_g

0xcf3d,	// (0x00014aed) cell_touch_pane_cp_ParamLimits

0xcf3d,	// (0x00014aed) cell_touch_pane_cp

0xcf4d,	// (0x00014afd) cell_touch_pane_ParamLimits

0xcf4d,	// (0x00014afd) cell_touch_pane

0x8ff9,	// (0x00010ba9) scroll_sc2_down_pane_g1

0x8ff9,	// (0x00010ba9) scroll_sc2_up_pane_g1

0x90e0,	// (0x00010c90) bg_set_opt_pane_cp4_vc

0xcf8d,	// (0x00014b3d) list_set_graphic_pane_vc_g1_ParamLimits

0xcf8d,	// (0x00014b3d) list_set_graphic_pane_vc_g1

0xcf99,	// (0x00014b49) list_set_graphic_pane_vc_g2_ParamLimits

0xcf99,	// (0x00014b49) list_set_graphic_pane_vc_g2

0x0001,

0xf9e2,	// (0x00017592) list_set_graphic_pane_vc_g_ParamLimits

0xf9e2,	// (0x00017592) list_set_graphic_pane_vc_g

0xcfa5,	// (0x00014b55) text_primary_small_cp13_vc_ParamLimits

0xcfa5,	// (0x00014b55) text_primary_small_cp13_vc

0xcfbd,	// (0x00014b6d) list_set_graphic_pane_vc_ParamLimits

0xcfbd,	// (0x00014b6d) list_set_graphic_pane_vc

0x90e0,	// (0x00010c90) input_focus_pane_cp2_vc

0x8ff9,	// (0x00010ba9) setting_code_pane_vc_g1

0xcfd0,	// (0x00014b80) setting_code_pane_vc_t1

0xcfde,	// (0x00014b8e) set_text_pane_vc_t1_ParamLimits

0xcfde,	// (0x00014b8e) set_text_pane_vc_t1

0x90e0,	// (0x00010c90) input_focus_pane_cp1_vc

0xcff9,	// (0x00014ba9) list_set_text_pane_vc

0x8ff9,	// (0x00010ba9) setting_text_pane_vc_g1

0x90e0,	// (0x00010c90) bg_set_opt_pane_cp2_vc

0xd003,	// (0x00014bb3) setting_slider_graphic_pane_vc_g1

0xd00b,	// (0x00014bbb) setting_slider_graphic_pane_vc_t1

0xd019,	// (0x00014bc9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e7,	// (0x00017597) setting_slider_graphic_pane_vc_t

0xd027,	// (0x00014bd7) slider_set_pane_cp_vc

0xd02f,	// (0x00014bdf) slider_set_pane_vc_g1

0xd038,	// (0x00014be8) slider_set_pane_vc_g2

0x0006,

0xf9ec,	// (0x0001759c) slider_set_pane_vc_g

0x9ff3,	// (0x00011ba3) set_opt_bg_pane_g1_copy1

0x9ffb,	// (0x00011bab) set_opt_bg_pane_g2_copy1

0xd064,	// (0x00014c14) set_opt_bg_pane_g3_copy1

0xa00b,	// (0x00011bbb) set_opt_bg_pane_g4_copy1

0xa013,	// (0x00011bc3) set_opt_bg_pane_g5_copy1

0xa01b,	// (0x00011bcb) set_opt_bg_pane_g6_copy1

0xd06c,	// (0x00014c1c) set_opt_bg_pane_g7_copy1

0xd074,	// (0x00014c24) set_opt_bg_pane_g8_copy1

0xd07c,	// (0x00014c2c) set_opt_bg_pane_g9_copy1

0x90e0,	// (0x00010c90) bg_set_opt_pane_cp_vc

0xd084,	// (0x00014c34) setting_slider_pane_vc_t1

0xd00b,	// (0x00014bbb) setting_slider_pane_vc_t2

0xd019,	// (0x00014bc9) setting_slider_pane_vc_t3

0x0002,

0xf9fb,	// (0x000175ab) setting_slider_pane_vc_t

0xd027,	// (0x00014bd7) slider_set_pane_vc

0x7d75,	// (0x0000f925) volume_set_pane_vc_g1

0x805c,	// (0x0000fc0c) volume_set_pane_vc_g2

0x8065,	// (0x0000fc15) volume_set_pane_vc_g3

0x806e,	// (0x0000fc1e) volume_set_pane_vc_g4

0x8077,	// (0x0000fc27) volume_set_pane_vc_g5

0x8080,	// (0x0000fc30) volume_set_pane_vc_g6

0x8089,	// (0x0000fc39) volume_set_pane_vc_g7

0x8092,	// (0x0000fc42) volume_set_pane_vc_g8

0x809b,	// (0x0000fc4b) volume_set_pane_vc_g9

0x80a4,	// (0x0000fc54) volume_set_pane_vc_g10

0x0009,

0xfa02,	// (0x000175b2) volume_set_pane_vc_g

0xd093,	// (0x00014c43) volume_set_pane_vc

0xd09b,	// (0x00014c4b) button_value_adjust_pane_cp1_vc

0xd0a5,	// (0x00014c55) list_highlight_pane_cp2_vc

0xd0ae,	// (0x00014c5e) list_set_pane_vc_ParamLimits

0xd0ae,	// (0x00014c5e) list_set_pane_vc

0xd100,	// (0x00014cb0) main_pane_set_vc_t1_ParamLimits

0xd100,	// (0x00014cb0) main_pane_set_vc_t1

0xd115,	// (0x00014cc5) main_pane_set_vc_t2_ParamLimits

0xd115,	// (0x00014cc5) main_pane_set_vc_t2

0xd127,	// (0x00014cd7) main_pane_set_vc_t3_ParamLimits

0xd127,	// (0x00014cd7) main_pane_set_vc_t3

0xd139,	// (0x00014ce9) main_pane_set_vc_t4_ParamLimits

0xd139,	// (0x00014ce9) main_pane_set_vc_t4

0x0003,

0xfa17,	// (0x000175c7) main_pane_set_vc_t_ParamLimits

0xfa17,	// (0x000175c7) main_pane_set_vc_t

0xd14b,	// (0x00014cfb) setting_code_pane_vc_ParamLimits

0xd14b,	// (0x00014cfb) setting_code_pane_vc

0xd15a,	// (0x00014d0a) setting_slider_graphic_pane_vc

0xd15a,	// (0x00014d0a) setting_slider_pane_vc

0xd15a,	// (0x00014d0a) setting_text_pane_vc

0xd15a,	// (0x00014d0a) setting_volume_pane_vc

0xd162,	// (0x00014d12) scroll_pane_cp121_vc

0x9df7,	// (0x000119a7) set_content_pane_vc

0xd3c4,	// (0x00014f74) button_value_adjust_pane_g1

0xd3cd,	// (0x00014f7d) button_value_adjust_pane_g2

0x0001,

0xfa6c,	// (0x0001761c) button_value_adjust_pane_g

0xd3d6,	// (0x00014f86) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd3d6,	// (0x00014f86) form_field_slider_wide_pane_vc_t1

0xd3ec,	// (0x00014f9c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd3ec,	// (0x00014f9c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa71,	// (0x00017621) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x00017621) form_field_slider_wide_pane_vc_t

0x9459,	// (0x00011009) input_focus_pane_cp10_vc_ParamLimits

0x9459,	// (0x00011009) input_focus_pane_cp10_vc

0xd417,	// (0x00014fc7) slider_cont_pane_cp1_vc_ParamLimits

0xd417,	// (0x00014fc7) slider_cont_pane_cp1_vc

0xd02f,	// (0x00014bdf) slider_form_pane_g1_cp2

0xd038,	// (0x00014be8) slider_form_pane_g2_cp2

0xd432,	// (0x00014fe2) form_field_slider_pane_vc_t3

0xd440,	// (0x00014ff0) form_field_slider_pane_vc_t4

0xd44e,	// (0x00014ffe) slider_form_pane_vc_ParamLimits

0xd44e,	// (0x00014ffe) slider_form_pane_vc

0xd45b,	// (0x0001500b) form_field_slider_pane_vc_t1_ParamLimits

0xd45b,	// (0x0001500b) form_field_slider_pane_vc_t1

0xd471,	// (0x00015021) form_field_slider_pane_vc_t2_ParamLimits

0xd471,	// (0x00015021) form_field_slider_pane_vc_t2

0x0001,

0xfa83,	// (0x00017633) form_field_slider_pane_vc_t_ParamLimits

0xfa83,	// (0x00017633) form_field_slider_pane_vc_t

0x9459,	// (0x00011009) input_focus_pane_cp9_vc_ParamLimits

0x9459,	// (0x00011009) input_focus_pane_cp9_vc

0xd483,	// (0x00015033) slider_cont_pane_vc_ParamLimits

0xd483,	// (0x00015033) slider_cont_pane_vc

0xd495,	// (0x00015045) list_form_graphic_pane_cp_vc_ParamLimits

0xd495,	// (0x00015045) list_form_graphic_pane_cp_vc

0xb630,	// (0x000131e0) form_field_popup_wide_pane_vc_g1

0xd4aa,	// (0x0001505a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xd4aa,	// (0x0001505a) form_field_popup_wide_pane_vc_t1

0x9ed0,	// (0x00011a80) input_focus_pane_cp8_vc_ParamLimits

0x9ed0,	// (0x00011a80) input_focus_pane_cp8_vc

0xd4e9,	// (0x00015099) list_form_wide_pane_vc_ParamLimits

0xd4e9,	// (0x00015099) list_form_wide_pane_vc

0xd4f5,	// (0x000150a5) list_form_graphic_pane_vc_g1

0xd4fd,	// (0x000150ad) list_form_graphic_pane_vc_t1_ParamLimits

0xd4fd,	// (0x000150ad) list_form_graphic_pane_vc_t1

0x91c0,	// (0x00010d70) list_highlight_pane_cp5_vc_ParamLimits

0x91c0,	// (0x00010d70) list_highlight_pane_cp5_vc

0xd519,	// (0x000150c9) list_form_graphic_pane_vc_ParamLimits

0xd519,	// (0x000150c9) list_form_graphic_pane_vc

0xb630,	// (0x000131e0) form_field_popup_pane_vc_g1

0xd52f,	// (0x000150df) form_field_popup_pane_vc_t1_ParamLimits

0xd52f,	// (0x000150df) form_field_popup_pane_vc_t1

0x9ed0,	// (0x00011a80) input_focus_pane_cp7_vc_ParamLimits

0x9ed0,	// (0x00011a80) input_focus_pane_cp7_vc

0xd544,	// (0x000150f4) list_form_pane_vc_ParamLimits

0xd544,	// (0x000150f4) list_form_pane_vc

0xd550,	// (0x00015100) data_form_pane_vc_t1_ParamLimits

0xd550,	// (0x00015100) data_form_pane_vc_t1

0x9ff3,	// (0x00011ba3) input_focus_pane_vc_g1

0x9ffb,	// (0x00011bab) input_focus_pane_vc_g2

0xa003,	// (0x00011bb3) input_focus_pane_vc_g3

0xa00b,	// (0x00011bbb) input_focus_pane_vc_g4

0xa013,	// (0x00011bc3) input_focus_pane_vc_g5

0xa01b,	// (0x00011bcb) input_focus_pane_vc_g6

0xa023,	// (0x00011bd3) input_focus_pane_vc_g7

0xa02b,	// (0x00011bdb) input_focus_pane_vc_g8

0xa033,	// (0x00011be3) input_focus_pane_vc_g9

0x8ff9,	// (0x00010ba9) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00017237) input_focus_pane_vc_g

0xb624,	// (0x000131d4) data_form_pane_vc_ParamLimits

0xb624,	// (0x000131d4) data_form_pane_vc

0xb630,	// (0x000131e0) form_field_data_pane_vc_g1

0xd56b,	// (0x0001511b) form_field_data_pane_vc_t1_ParamLimits

0xd56b,	// (0x0001511b) form_field_data_pane_vc_t1

0x9ed0,	// (0x00011a80) input_focus_pane_vc_ParamLimits

0x9ed0,	// (0x00011a80) input_focus_pane_vc

0x9e00,	// (0x000119b0) button_value_adjust_pane_cp3_vc

0xd581,	// (0x00015131) button_value_adjust_pane_cp5_vc

0xd589,	// (0x00015139) form_field_data_pane_vc_ParamLimits

0xd589,	// (0x00015139) form_field_data_pane_vc

0x9e28,	// (0x000119d8) form_field_data_pane_vc_cp2

0xd5a0,	// (0x00015150) form_field_data_wide_pane_vc_ParamLimits

0xd5a0,	// (0x00015150) form_field_data_wide_pane_vc

0xd5b6,	// (0x00015166) form_field_data_wide_pane_vc_cp2

0xd5be,	// (0x0001516e) form_field_popup_pane_vc_ParamLimits

0xd5be,	// (0x0001516e) form_field_popup_pane_vc

0xd5d5,	// (0x00015185) form_field_popup_wide_pane_vc_ParamLimits

0xd5d5,	// (0x00015185) form_field_popup_wide_pane_vc

0xd5eb,	// (0x0001519b) form_field_slider_pane_vc_ParamLimits

0xd5eb,	// (0x0001519b) form_field_slider_pane_vc

0xd5fe,	// (0x000151ae) form_field_slider_wide_pane_vc_ParamLimits

0xd5fe,	// (0x000151ae) form_field_slider_wide_pane_vc

0xd611,	// (0x000151c1) grid_touch_1_pane_ParamLimits

0xd611,	// (0x000151c1) grid_touch_1_pane

0xd61d,	// (0x000151cd) grid_touch_2_pane_ParamLimits

0xd61d,	// (0x000151cd) grid_touch_2_pane

0xaf47,	// (0x00012af7) touch_pane_g1_ParamLimits

0xaf47,	// (0x00012af7) touch_pane_g1

0xd635,	// (0x000151e5) cell_app_pane_cp_wide_ParamLimits

0xd635,	// (0x000151e5) cell_app_pane_cp_wide

0xd645,	// (0x000151f5) grid_popup_fast_wide_pane_ParamLimits

0xd645,	// (0x000151f5) grid_popup_fast_wide_pane

0xd659,	// (0x00015209) scroll_pane_cp19_ParamLimits

0xd659,	// (0x00015209) scroll_pane_cp19

0x90e0,	// (0x00010c90) bg_popup_window_pane_cp20

0xd66d,	// (0x0001521d) listscroll_popup_fast_wide_pane

0x91c0,	// (0x00010d70) grid_indicator_nsta_pane

0xd675,	// (0x00015225) clock_nsta_pane_g1

0xd67e,	// (0x0001522e) clock_nsta_pane_t1

0xd69a,	// (0x0001524a) cell_indicator_nsta_pane_ParamLimits

0xd69a,	// (0x0001524a) cell_indicator_nsta_pane

0xd6cb,	// (0x0001527b) cell_indicator_nsta_pane_g1

0xd6d9,	// (0x00015289) cell_indicator_nsta_pane_g2

0x0001,

0xfa94,	// (0x00017644) cell_indicator_nsta_pane_g

0xd6e6,	// (0x00015296) clock_nsta_pane_cp

0xd6ee,	// (0x0001529e) indicator_nsta_pane_cp

0xd6f7,	// (0x000152a7) nsta_clock_indic_pane_g1

0x92a0,	// (0x00010e50) grid_indicator_pane

0xa5c3,	// (0x00012173) scroll_pane_cp29

0x7420,	// (0x0000efd0) indicator_nsta_pane_cp2_ParamLimits

0x7420,	// (0x0000efd0) indicator_nsta_pane_cp2

0x91c0,	// (0x00010d70) main_apps_wheel_pane

0xb81b,	// (0x000133cb) form_midp_field_text_pane_ParamLimits

0xb960,	// (0x00013510) scroll_bar_cp050_ParamLimits

0xd760,	// (0x00015310) cell_indicator_pane_ParamLimits

0xd760,	// (0x00015310) cell_indicator_pane

0xd776,	// (0x00015326) cell_indicator_pane_g1

0xd780,	// (0x00015330) grid_wheel_folder_pane_ParamLimits

0xd780,	// (0x00015330) grid_wheel_folder_pane

0xd792,	// (0x00015342) list_wheel_apps_pane_ParamLimits

0xd792,	// (0x00015342) list_wheel_apps_pane

0xd7a1,	// (0x00015351) main_apps_wheel_pane_g1_ParamLimits

0xd7a1,	// (0x00015351) main_apps_wheel_pane_g1

0xd7b5,	// (0x00015365) main_apps_wheel_pane_g2_ParamLimits

0xd7b5,	// (0x00015365) main_apps_wheel_pane_g2

0x0001,

0xfab0,	// (0x00017660) main_apps_wheel_pane_g_ParamLimits

0xfab0,	// (0x00017660) main_apps_wheel_pane_g

0xd7c9,	// (0x00015379) main_apps_wheel_pane_t1_ParamLimits

0xd7c9,	// (0x00015379) main_apps_wheel_pane_t1

0xd7e8,	// (0x00015398) list_wheel_apps_pane_g1

0xd7f0,	// (0x000153a0) list_wheel_apps_pane_g2

0xd7f8,	// (0x000153a8) list_wheel_apps_pane_g3

0xd800,	// (0x000153b0) list_wheel_apps_pane_g4

0xd808,	// (0x000153b8) list_wheel_apps_pane_g5

0x0004,

0xfab5,	// (0x00017665) list_wheel_apps_pane_g

0x91c0,	// (0x00010d70) navi_icon_text_pane

0xb009,	// (0x00012bb9) aid_fill_nsta

0xd827,	// (0x000153d7) navi_icon_text_pane_g1

0xd833,	// (0x000153e3) navi_icon_text_pane_t1

0xaa02,	// (0x000125b2) list_set_graphic_pane_t1_ParamLimits

0xaa02,	// (0x000125b2) list_set_graphic_pane_t1

0xc07a,	// (0x00013c2a) popup_midp_note_alarm_window_t6_ParamLimits

0xc07a,	// (0x00013c2a) popup_midp_note_alarm_window_t6

0xc08c,	// (0x00013c3c) popup_midp_note_alarm_window_t7_ParamLimits

0xc08c,	// (0x00013c3c) popup_midp_note_alarm_window_t7

0xc09e,	// (0x00013c4e) popup_midp_note_alarm_window_t8_ParamLimits

0xc09e,	// (0x00013c4e) popup_midp_note_alarm_window_t8

0xc0b0,	// (0x00013c60) popup_midp_note_alarm_window_t9_ParamLimits

0xc0b0,	// (0x00013c60) popup_midp_note_alarm_window_t9

0xc0c2,	// (0x00013c72) popup_midp_note_alarm_window_t10_ParamLimits

0xc0c2,	// (0x00013c72) popup_midp_note_alarm_window_t10

0xc0d4,	// (0x00013c84) popup_midp_note_alarm_window_t11_ParamLimits

0xc0d4,	// (0x00013c84) popup_midp_note_alarm_window_t11

0xc0e6,	// (0x00013c96) scroll_pane_cp17_ParamLimits

0xc0e6,	// (0x00013c96) scroll_pane_cp17

0x7d75,	// (0x0000f925) volume_small_pane_cp_g1

0x80ad,	// (0x0000fc5d) volume_small_pane_cp_g2

0x80b6,	// (0x0000fc66) volume_small_pane_cp_g3

0x80bf,	// (0x0000fc6f) volume_small_pane_cp_g4

0x7da2,	// (0x0000f952) volume_small_pane_cp_g5

0x80c8,	// (0x0000fc78) volume_small_pane_cp_g6

0x80d1,	// (0x0000fc81) volume_small_pane_cp_g7

0x80da,	// (0x0000fc8a) volume_small_pane_cp_g8

0x80e3,	// (0x0000fc93) volume_small_pane_cp_g9

0x80ec,	// (0x0000fc9c) volume_small_pane_cp_g10

0xad61,	// (0x00012911) midp_ticker_pane_g1_ParamLimits

0xad6d,	// (0x0001291d) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00017303) midp_ticker_pane_g_ParamLimits

0xad79,	// (0x00012929) midp_ticker_pane_t1_ParamLimits

0xb019,	// (0x00012bc9) aid_fill_nsta_2

0xb94c,	// (0x000134fc) list_form2_midp_pane

0xc9fb,	// (0x000145ab) midp_editing_number_pane_ParamLimits

0xca07,	// (0x000145b7) midp_ticker_pane_ParamLimits

0xd845,	// (0x000153f5) form2_midp_field_pane

0xd869,	// (0x00015419) scroll_pane_cp51

0xd889,	// (0x00015439) form2_midp_button_pane_ParamLimits

0xd889,	// (0x00015439) form2_midp_button_pane

0xd89b,	// (0x0001544b) form2_midp_content_pane_ParamLimits

0xd89b,	// (0x0001544b) form2_midp_content_pane

0xd8b5,	// (0x00015465) form2_midp_field_choice_group_pane

0xd8bd,	// (0x0001546d) form2_midp_field_pane_g1

0xd8c5,	// (0x00015475) form2_midp_field_pane_g2

0xd8cd,	// (0x0001547d) form2_midp_field_pane_g3

0xd8d5,	// (0x00015485) form2_midp_field_pane_g4

0x0003,

0xfada,	// (0x0001768a) form2_midp_field_pane_g

0xd8dd,	// (0x0001548d) form2_midp_gauge_slider_pane

0xd8e5,	// (0x00015495) form2_midp_gauge_wait_pane

0xd8ed,	// (0x0001549d) form2_midp_image_pane_ParamLimits

0xd8ed,	// (0x0001549d) form2_midp_image_pane

0xd908,	// (0x000154b8) form2_midp_label_pane_ParamLimits

0xd908,	// (0x000154b8) form2_midp_label_pane

0xd921,	// (0x000154d1) form2_midp_label_pane_cp_ParamLimits

0xd921,	// (0x000154d1) form2_midp_label_pane_cp

0xd940,	// (0x000154f0) form2_midp_string_pane_ParamLimits

0xd940,	// (0x000154f0) form2_midp_string_pane

0xd952,	// (0x00015502) form2_midp_text_pane_ParamLimits

0xd952,	// (0x00015502) form2_midp_text_pane

0xd96b,	// (0x0001551b) form2_midp_time_pane

0xd97b,	// (0x0001552b) input_focus_pane_cp51_ParamLimits

0xd97b,	// (0x0001552b) input_focus_pane_cp51

0xd993,	// (0x00015543) form2_midp_label_pane_t1_ParamLimits

0xd993,	// (0x00015543) form2_midp_label_pane_t1

0xa03b,	// (0x00011beb) form2_mdip_text_pane_t1_ParamLimits

0xa03b,	// (0x00011beb) form2_mdip_text_pane_t1

0xd9d3,	// (0x00015583) form2_midp_time_pane_t1

0xd9ee,	// (0x0001559e) form2_midp_gauge_slider_pane_t1

0xda00,	// (0x000155b0) form2_midp_gauge_slider_pane_t2

0xda12,	// (0x000155c2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae3,	// (0x00017693) form2_midp_gauge_slider_pane_t

0xda24,	// (0x000155d4) form2_midp_slider_pane

0xda30,	// (0x000155e0) form2_midp_gauge_wait_pane_t1

0xda3e,	// (0x000155ee) form2_midp_wait_pane_ParamLimits

0xda3e,	// (0x000155ee) form2_midp_wait_pane

0xb66e,	// (0x0001321e) list_single_2graphic_pane_cp4_ParamLimits

0xb66e,	// (0x0001321e) list_single_2graphic_pane_cp4

0xda69,	// (0x00015619) list_single_midp_graphic_pane_cp_ParamLimits

0xda69,	// (0x00015619) list_single_midp_graphic_pane_cp

0x90e0,	// (0x00010c90) list_highlight_pane_cp20

0xda87,	// (0x00015637) list_single_2graphic_pane_g1_cp4

0xcb6b,	// (0x0001471b) list_single_2graphic_pane_g2_cp4

0xda8f,	// (0x0001563f) list_single_2graphic_pane_t1_cp4

0x91c0,	// (0x00010d70) list_highlight_pane_cp21

0xda9e,	// (0x0001564e) list_single_midp_graphic_pane_g4_cp

0xdaad,	// (0x0001565d) list_single_midp_graphic_pane_t1_cp

0xdac2,	// (0x00015672) form2_mdip_string_pane_t1_ParamLimits

0xdac2,	// (0x00015672) form2_mdip_string_pane_t1

0x90e0,	// (0x00010c90) bg_wml_button_pane_cp2

0x8ff9,	// (0x00010ba9) form2_midp_image_pane_g1

0x9be5,	// (0x00011795) list_double_large_graphic_pane_g5_ParamLimits

0x9be5,	// (0x00011795) list_double_large_graphic_pane_g5

0xac98,	// (0x00012848) midp_form_pane_ParamLimits

0x91c0,	// (0x00010d70) main_apps_wheel_pane_ParamLimits

0x7a14,	// (0x0000f5c4) popup_preview_window_ParamLimits

0x7a14,	// (0x0000f5c4) popup_preview_window

0x7b8f,	// (0x0000f73f) popup_touch_info_window_ParamLimits

0x7b8f,	// (0x0000f73f) popup_touch_info_window

0x7bad,	// (0x0000f75d) popup_touch_menu_window_ParamLimits

0x7bad,	// (0x0000f75d) popup_touch_menu_window

0x8fef,	// (0x00010b9f) bg_popup_sub_pane_cp6

0xdb2c,	// (0x000156dc) list_touch_menu_pane

0xdb34,	// (0x000156e4) list_single_touch_menu_pane_ParamLimits

0xdb34,	// (0x000156e4) list_single_touch_menu_pane

0xdb4b,	// (0x000156fb) list_single_touch_menu_pane_t1

0x91c0,	// (0x00010d70) bg_popup_sub_pane_cp7_ParamLimits

0x91c0,	// (0x00010d70) bg_popup_sub_pane_cp7

0xdb59,	// (0x00015709) heading_sub_pane

0xdb61,	// (0x00015711) list_touch_info_pane_ParamLimits

0xdb61,	// (0x00015711) list_touch_info_pane

0xdb70,	// (0x00015720) list_single_touch_info_pane_ParamLimits

0xdb70,	// (0x00015720) list_single_touch_info_pane

0xdb81,	// (0x00015731) list_single_touch_info_pane_t1

0xdb8f,	// (0x0001573f) list_single_touch_info_pane_t2

0x0001,

0xfaf1,	// (0x000176a1) list_single_touch_info_pane_t

0xac90,	// (0x00012840) bg_popup_heading_pane_cp

0xdb9d,	// (0x0001574d) heading_sub_pane_t1

0xb5be,	// (0x0001316e) bg_popup_preview_window_pane_cp_ParamLimits

0xb5be,	// (0x0001316e) bg_popup_preview_window_pane_cp

0xdb59,	// (0x00015709) heading_preview_pane

0xdb61,	// (0x00015711) list_preview_pane_ParamLimits

0xdb61,	// (0x00015711) list_preview_pane

0xdbab,	// (0x0001575b) popup_preview_window_g1

0xdb70,	// (0x00015720) list_single_preview_pane_ParamLimits

0xdb70,	// (0x00015720) list_single_preview_pane

0xdbb3,	// (0x00015763) list_single_preview_pane_g1

0xdbbb,	// (0x0001576b) list_single_preview_pane_t1

0xdb81,	// (0x00015731) list_single_preview_pane_t2

0x0001,

0xfaf6,	// (0x000176a6) list_single_preview_pane_t

0xdbc9,	// (0x00015779) bg_popup_heading_pane_cp2_ParamLimits

0xdbc9,	// (0x00015779) bg_popup_heading_pane_cp2

0xdbdf,	// (0x0001578f) heading_preview_pane_g1

0xdbe7,	// (0x00015797) heading_preview_pane_t1_ParamLimits

0xdbe7,	// (0x00015797) heading_preview_pane_t1

0x92c3,	// (0x00010e73) soft_indicator_pane_t1_ParamLimits

0x9926,	// (0x000114d6) scroll_pane_ParamLimits

0xa4bf,	// (0x0001206f) scroll_sc2_left_pane

0xa4c8,	// (0x00012078) scroll_sc2_right_pane

0xa4e7,	// (0x00012097) scroll_bg_pane_g1_ParamLimits

0xa4fc,	// (0x000120ac) scroll_bg_pane_g2_ParamLimits

0xa514,	// (0x000120c4) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001728e) scroll_bg_pane_g_ParamLimits

0xa4e7,	// (0x00012097) scroll_handle_pane_g1_ParamLimits

0xa536,	// (0x000120e6) scroll_handle_pane_g2_ParamLimits

0xa514,	// (0x000120c4) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00017295) scroll_handle_pane_g_ParamLimits

0x775c,	// (0x0000f30c) popup_choice_list_window_ParamLimits

0x775c,	// (0x0000f30c) popup_choice_list_window

0xb3fe,	// (0x00012fae) choice_list_pane

0xb474,	// (0x00013024) cell_toolbar_pane_t1

0xb49c,	// (0x0001304c) toolbar_button_pane_ParamLimits

0xc56f,	// (0x0001411f) ai_gene_pane_1_t2_ParamLimits

0xc56f,	// (0x0001411f) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x000174b1) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x000174b1) ai_gene_pane_1_t

0xdc04,	// (0x000157b4) scroll_sc2_left_pane_g1

0xdc04,	// (0x000157b4) scroll_sc2_right_pane_g1

0xafdf,	// (0x00012b8f) bg_popup_sub_pane_cp10

0xdc0e,	// (0x000157be) list_choice_list_pane

0xdc25,	// (0x000157d5) list_single_choice_list_pane_ParamLimits

0xdc25,	// (0x000157d5) list_single_choice_list_pane

0xdc37,	// (0x000157e7) list_single_choice_list_pane_g1

0xa1b6,	// (0x00011d66) list_single_choice_list_pane_t1_ParamLimits

0xa1b6,	// (0x00011d66) list_single_choice_list_pane_t1

0xdc3f,	// (0x000157ef) choice_list_pane_g1

0xdc47,	// (0x000157f7) choice_list_pane_t1

0x8fef,	// (0x00010b9f) input_focus_pane_cp11

0xa39a,	// (0x00011f4a) title_pane_stacon_g2_ParamLimits

0xa39a,	// (0x00011f4a) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00017274) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00017274) title_pane_stacon_g

0xac90,	// (0x00012840) cursor_press_pane

0x77f8,	// (0x0000f3a8) popup_fep_hwr_window_ParamLimits

0x77f8,	// (0x0000f3a8) popup_fep_hwr_window

0x7854,	// (0x0000f404) popup_fep_vkb_window_ParamLimits

0x7854,	// (0x0000f404) popup_fep_vkb_window

0xdc55,	// (0x00015805) cursor_press_pane_g1

0x0002,

0xfb1f,	// (0x000176cf) fep_vkb_side_pane_g_ParamLimits

0x812a,	// (0x0000fcda) fep_hwr_candidate_pane_ParamLimits

0x812a,	// (0x0000fcda) fep_hwr_candidate_pane

0x8152,	// (0x0000fd02) fep_hwr_side_pane_ParamLimits

0x8152,	// (0x0000fd02) fep_hwr_side_pane

0x8172,	// (0x0000fd22) fep_hwr_top_pane_ParamLimits

0x8172,	// (0x0000fd22) fep_hwr_top_pane

0x818a,	// (0x0000fd3a) fep_hwr_write_pane_ParamLimits

0x818a,	// (0x0000fd3a) fep_hwr_write_pane

0xfb1f,	// (0x000176cf) fep_vkb_side_pane_g

0xdc5d,	// (0x0001580d) fep_hwr_top_pane_g1

0xdc6f,	// (0x0001581f) fep_hwr_top_pane_g2

0x81c4,	// (0x0000fd74) fep_hwr_top_pane_g3

0x0002,

0xfafb,	// (0x000176ab) fep_hwr_top_pane_g

0x81d9,	// (0x0000fd89) fep_hwr_top_text_pane

0xa68b,	// (0x0001223b) fep_hwr_top_text_pane_g1

0xdca5,	// (0x00015855) fep_hwr_top_text_pane_t1

0x82c7,	// (0x0000fe77) fep_hwr_candidate_pane_g1

0xdeb5,	// (0x00015a65) fep_vkb_keypad_pane_g3_ParamLimits

0xdeb5,	// (0x00015a65) fep_vkb_keypad_pane_g3

0xded7,	// (0x00015a87) fep_vkb_keypad_pane_g4_ParamLimits

0xded7,	// (0x00015a87) fep_vkb_keypad_pane_g4

0xdf46,	// (0x00015af6) fep_vkb_bottom_pane_g2_ParamLimits

0xdf46,	// (0x00015af6) fep_vkb_bottom_pane_g2

0x0001,

0xfb26,	// (0x000176d6) fep_vkb_bottom_pane_g_ParamLimits

0xfb26,	// (0x000176d6) fep_vkb_bottom_pane_g

0xdc04,	// (0x000157b4) cell_vkb_side_pane_g2

0x0001,

0xfb30,	// (0x000176e0) cell_vkb_side_pane_g

0xdfd1,	// (0x00015b81) cell_vkb_side_pane_t1

0xdfdf,	// (0x00015b8f) cell_vkb_side_pane_t1_copy1

0xdc04,	// (0x000157b4) bg_fep_vkb_candidate_pane_g2

0xe103,	// (0x00015cb3) cell_vkb_candidate_pane_ParamLimits

0xdcb3,	// (0x00015863) aid_size_cell_vkb_ParamLimits

0xdcb3,	// (0x00015863) aid_size_cell_vkb

0xe103,	// (0x00015cb3) cell_vkb_candidate_pane

0x82ee,	// (0x0000fe9e) bg_popup_fep_shadow_pane_g1

0xdd29,	// (0x000158d9) fep_vkb_bottom_pane_ParamLimits

0xdd29,	// (0x000158d9) fep_vkb_bottom_pane

0xdd66,	// (0x00015916) fep_vkb_candidate_pane_ParamLimits

0xdd66,	// (0x00015916) fep_vkb_candidate_pane

0xdd82,	// (0x00015932) fep_vkb_keypad_pane_ParamLimits

0xdd82,	// (0x00015932) fep_vkb_keypad_pane

0xddb6,	// (0x00015966) fep_vkb_side_pane_ParamLimits

0xddb6,	// (0x00015966) fep_vkb_side_pane

0xdde2,	// (0x00015992) fep_vkb_top_pane_ParamLimits

0xdde2,	// (0x00015992) fep_vkb_top_pane

0xde0e,	// (0x000159be) fep_vkb_top_pane_g1_ParamLimits

0xde0e,	// (0x000159be) fep_vkb_top_pane_g1

0xde1d,	// (0x000159cd) fep_vkb_top_pane_g2_ParamLimits

0xde1d,	// (0x000159cd) fep_vkb_top_pane_g2

0xde2c,	// (0x000159dc) fep_vkb_top_pane_g3_ParamLimits

0xde2c,	// (0x000159dc) fep_vkb_top_pane_g3

0x0003,

0xfb16,	// (0x000176c6) fep_vkb_top_pane_g_ParamLimits

0xfb16,	// (0x000176c6) fep_vkb_top_pane_g

0xde4a,	// (0x000159fa) fep_vkb_top_text_pane_ParamLimits

0xde4a,	// (0x000159fa) fep_vkb_top_text_pane

0xde5b,	// (0x00015a0b) fep_vkb_side_pane_g1_ParamLimits

0xde5b,	// (0x00015a0b) fep_vkb_side_pane_g1

0xdea4,	// (0x00015a54) grid_vkb_side_pane_ParamLimits

0xdea4,	// (0x00015a54) grid_vkb_side_pane

0x82f6,	// (0x0000fea6) bg_popup_fep_shadow_pane_g2

0x82ff,	// (0x0000feaf) bg_popup_fep_shadow_pane_g3

0x8307,	// (0x0000feb7) bg_popup_fep_shadow_pane_g4

0x8310,	// (0x0000fec0) bg_popup_fep_shadow_pane_g5

0x8318,	// (0x0000fec8) bg_popup_fep_shadow_pane_g6

0x8320,	// (0x0000fed0) bg_popup_fep_shadow_pane_g7

0xa00b,	// (0x00011bbb) bg_popup_fep_shadow_pane_g8

0xdef5,	// (0x00015aa5) grid_vkb_keypad_number_pane_ParamLimits

0xdef5,	// (0x00015aa5) grid_vkb_keypad_number_pane

0xdf05,	// (0x00015ab5) grid_vkb_keypad_pane_ParamLimits

0xdf05,	// (0x00015ab5) grid_vkb_keypad_pane

0xdf2b,	// (0x00015adb) fep_vkb_bottom_pane_g1_ParamLimits

0xdf2b,	// (0x00015adb) fep_vkb_bottom_pane_g1

0xdf54,	// (0x00015b04) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xdf54,	// (0x00015b04) grid_vkb_keypad_bottom_left_pane

0xdf69,	// (0x00015b19) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xdf69,	// (0x00015b19) grid_vkb_keypad_bottom_right_pane

0xdf7e,	// (0x00015b2e) fep_vkb_top_text_pane_g1

0xdf99,	// (0x00015b49) fep_vkb_top_text_pane_t1

0xdfae,	// (0x00015b5e) cell_vkb_side_pane_ParamLimits

0xdfae,	// (0x00015b5e) cell_vkb_side_pane

0xdc04,	// (0x000157b4) cell_vkb_side_pane_g1

0xdfed,	// (0x00015b9d) cell_vkb_keypad_pane_ParamLimits

0xdfed,	// (0x00015b9d) cell_vkb_keypad_pane

0xe05a,	// (0x00015c0a) cell_vkb_keypad_pane_g1

0x0008,

0xfb43,	// (0x000176f3) bg_popup_fep_shadow_pane_g

0x8330,	// (0x0000fee0) cell_hwr_side_pane_g1

0x8330,	// (0x0000fee0) cell_hwr_side_pane_g2

0xe064,	// (0x00015c14) cell_vkb_keypad_pane_t1

0xe072,	// (0x00015c22) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe072,	// (0x00015c22) cell_vkb_keypad_bottom_left_pane

0xe08f,	// (0x00015c3f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe08f,	// (0x00015c3f) cell_vkb_keypad_bottom_right_pane

0xdc04,	// (0x000157b4) cell_vkb_keypad_bottom_left_pane_g1

0xdc04,	// (0x000157b4) cell_vkb_keypad_bottom_right_pane_g1

0xe0c8,	// (0x00015c78) cell_vkb_keypad_number_pane_ParamLimits

0xe0c8,	// (0x00015c78) cell_vkb_keypad_number_pane

0xe0e7,	// (0x00015c97) cell_vkb_keypad_number_pane_g1

0xe0f1,	// (0x00015ca1) cell_vkb_keypad_number_pane_g2

0xe0fa,	// (0x00015caa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb35,	// (0x000176e5) cell_vkb_keypad_number_pane_g

0xe064,	// (0x00015c14) cell_vkb_keypad_number_pane_t1

0xe11c,	// (0x00015ccc) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x00017706) cell_hwr_side_pane_g

0xe135,	// (0x00015ce5) cell_hwr_side_pane_t1

0x833a,	// (0x0000feea) cell_hwr_side_pane_t1_copy1

0x8348,	// (0x0000fef8) cell_hwr_candidate_pane_g1

0x8377,	// (0x0000ff27) cell_hwr_candidate_pane_t1

0xdc04,	// (0x000157b4) cell_vkb_candidate_pane_g2

0xe179,	// (0x00015d29) cell_vkb_candidate_pane_t1

0x80f5,	// (0x0000fca5) bg_popup_fep_shadow_pane_ParamLimits

0x80f5,	// (0x0000fca5) bg_popup_fep_shadow_pane

0x81a4,	// (0x0000fd54) bg_fep_hwr_top_pane_g4

0xdc81,	// (0x00015831) bg_hwr_side_pane_g1_ParamLimits

0xdc81,	// (0x00015831) bg_hwr_side_pane_g1

0x8215,	// (0x0000fdc5) cell_hwr_side_pane_ParamLimits

0x8215,	// (0x0000fdc5) cell_hwr_side_pane

0x8250,	// (0x0000fe00) fep_hwr_write_pane_g1_ParamLimits

0x8250,	// (0x0000fe00) fep_hwr_write_pane_g1

0x825d,	// (0x0000fe0d) fep_hwr_write_pane_g2_ParamLimits

0x825d,	// (0x0000fe0d) fep_hwr_write_pane_g2

0x826a,	// (0x0000fe1a) fep_hwr_write_pane_g3_ParamLimits

0x826a,	// (0x0000fe1a) fep_hwr_write_pane_g3

0x8278,	// (0x0000fe28) fep_hwr_write_pane_g4_ParamLimits

0x8278,	// (0x0000fe28) fep_hwr_write_pane_g4

0x0005,

0xfb02,	// (0x000176b2) fep_hwr_write_pane_g_ParamLimits

0xfb02,	// (0x000176b2) fep_hwr_write_pane_g

0x81a4,	// (0x0000fd54) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x81a4,	// (0x0000fd54) bg_fep_hwr_candidate_pane_g2

0x828d,	// (0x0000fe3d) cell_hwr_candidate_pane_ParamLimits

0x828d,	// (0x0000fe3d) cell_hwr_candidate_pane

0x82c7,	// (0x0000fe77) fep_hwr_candidate_pane_g1_ParamLimits

0xdce1,	// (0x00015891) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xdce1,	// (0x00015891) bg_popup_fep_shadow_pane_cp2

0xde3c,	// (0x000159ec) fep_vkb_top_pane_g4_ParamLimits

0xde3c,	// (0x000159ec) fep_vkb_top_pane_g4

0xde82,	// (0x00015a32) fep_vkb_side_pane_g2_ParamLimits

0xde82,	// (0x00015a32) fep_vkb_side_pane_g2

0x9d15,	// (0x000118c5) list_setting_pane_t4_ParamLimits

0x9d15,	// (0x000118c5) list_setting_pane_t4

0x9d8b,	// (0x0001193b) list_setting_number_pane_t5_ParamLimits

0x9d8b,	// (0x0001193b) list_setting_number_pane_t5

0xa6c2,	// (0x00012272) list_double_heading_pane_cp2_ParamLimits

0xa6c2,	// (0x00012272) list_double_heading_pane_cp2

0xab05,	// (0x000126b5) list_double_heading_pane_g1_cp2_ParamLimits

0xab05,	// (0x000126b5) list_double_heading_pane_g1_cp2

0xe187,	// (0x00015d37) list_double_heading_pane_g2_cp2_ParamLimits

0xe187,	// (0x00015d37) list_double_heading_pane_g2_cp2

0xe19b,	// (0x00015d4b) list_double_heading_pane_t1_cp2_ParamLimits

0xe19b,	// (0x00015d4b) list_double_heading_pane_t1_cp2

0xe1b1,	// (0x00015d61) list_double_heading_pane_t2_cp2_ParamLimits

0xe1b1,	// (0x00015d61) list_double_heading_pane_t2_cp2

0x8fd9,	// (0x00010b89) aid_value_unit2

0x7050,	// (0x0000ec00) popup_preview_fixed_window

0x9467,	// (0x00011017) bg_popup_preview_window_pane_cp02

0xe1c3,	// (0x00015d73) list_preview_fixed_pane

0xe209,	// (0x00015db9) list_empty_pane_fp_ParamLimits

0xe209,	// (0x00015db9) list_empty_pane_fp

0xe209,	// (0x00015db9) list_single_cale_day_pane_fp_ParamLimits

0xe209,	// (0x00015db9) list_single_cale_day_pane_fp

0xe209,	// (0x00015db9) list_single_graphic_heading_pane_fp_ParamLimits

0xe209,	// (0x00015db9) list_single_graphic_heading_pane_fp

0xe209,	// (0x00015db9) list_single_graphic_pane_fp_ParamLimits

0xe209,	// (0x00015db9) list_single_graphic_pane_fp

0xe209,	// (0x00015db9) list_single_heading_pane_fp_ParamLimits

0xe209,	// (0x00015db9) list_single_heading_pane_fp

0xe209,	// (0x00015db9) list_single_pane_fp_ParamLimits

0xe209,	// (0x00015db9) list_single_pane_fp

0xe21d,	// (0x00015dcd) list_single_pane_fp_g1_ParamLimits

0xe21d,	// (0x00015dcd) list_single_pane_fp_g1

0x9b68,	// (0x00011718) list_single_pane_fp_g2_ParamLimits

0x9b68,	// (0x00011718) list_single_pane_fp_g2

0xe229,	// (0x00015dd9) list_single_pane_fp_g3_ParamLimits

0xe229,	// (0x00015dd9) list_single_pane_fp_g3

0xe23d,	// (0x00015ded) list_single_pane_fp_g4_ParamLimits

0xe23d,	// (0x00015ded) list_single_pane_fp_g4

0x0003,

0xfb69,	// (0x00017719) list_single_pane_fp_g_ParamLimits

0xfb69,	// (0x00017719) list_single_pane_fp_g

0xe249,	// (0x00015df9) list_single_pane_fp_t1_ParamLimits

0xe249,	// (0x00015df9) list_single_pane_fp_t1

0xe260,	// (0x00015e10) list_single_graphic_pane_fp_g1_ParamLimits

0xe260,	// (0x00015e10) list_single_graphic_pane_fp_g1

0xe21d,	// (0x00015dcd) list_single_graphic_pane_fp_g2_ParamLimits

0xe21d,	// (0x00015dcd) list_single_graphic_pane_fp_g2

0x9b68,	// (0x00011718) list_single_graphic_pane_fp_g3_ParamLimits

0x9b68,	// (0x00011718) list_single_graphic_pane_fp_g3

0xe229,	// (0x00015dd9) list_single_graphic_pane_fp_g4_ParamLimits

0xe229,	// (0x00015dd9) list_single_graphic_pane_fp_g4

0xe23d,	// (0x00015ded) list_single_graphic_pane_fp_g5_ParamLimits

0xe23d,	// (0x00015ded) list_single_graphic_pane_fp_g5

0x0004,

0xfb72,	// (0x00017722) list_single_graphic_pane_fp_g_ParamLimits

0xfb72,	// (0x00017722) list_single_graphic_pane_fp_g

0xe26c,	// (0x00015e1c) list_single_graphic_pane_fp_t1_ParamLimits

0xe26c,	// (0x00015e1c) list_single_graphic_pane_fp_t1

0xe260,	// (0x00015e10) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe260,	// (0x00015e10) list_single_graphic_heading_pane_fp_g1

0xe21d,	// (0x00015dcd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe21d,	// (0x00015dcd) list_single_graphic_heading_pane_fp_g2

0x9b68,	// (0x00011718) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9b68,	// (0x00011718) list_single_graphic_heading_pane_fp_g3

0xe229,	// (0x00015dd9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe229,	// (0x00015dd9) list_single_graphic_heading_pane_fp_g4

0xe23d,	// (0x00015ded) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe23d,	// (0x00015ded) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb72,	// (0x00017722) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x00017722) list_single_graphic_heading_pane_fp_g

0xe282,	// (0x00015e32) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe282,	// (0x00015e32) list_single_graphic_heading_pane_fp_t1

0xe298,	// (0x00015e48) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe298,	// (0x00015e48) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7d,	// (0x0001772d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7d,	// (0x0001772d) list_single_graphic_heading_pane_fp_t

0xe2ec,	// (0x00015e9c) list_single_cale_day_pane_fp_g1_ParamLimits

0xe2ec,	// (0x00015e9c) list_single_cale_day_pane_fp_g1

0xe324,	// (0x00015ed4) list_single_cale_day_pane_fp_g2_ParamLimits

0xe324,	// (0x00015ed4) list_single_cale_day_pane_fp_g2

0xe330,	// (0x00015ee0) list_single_cale_day_pane_fp_g3_ParamLimits

0xe330,	// (0x00015ee0) list_single_cale_day_pane_fp_g3

0xe358,	// (0x00015f08) list_single_cale_day_pane_fp_g4_ParamLimits

0xe358,	// (0x00015f08) list_single_cale_day_pane_fp_g4

0xe37c,	// (0x00015f2c) list_single_cale_day_pane_fp_g5_ParamLimits

0xe37c,	// (0x00015f2c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb82,	// (0x00017732) list_single_cale_day_pane_fp_g_ParamLimits

0xfb82,	// (0x00017732) list_single_cale_day_pane_fp_g

0xe3a0,	// (0x00015f50) list_single_cale_day_pane_fp_t1_ParamLimits

0xe3a0,	// (0x00015f50) list_single_cale_day_pane_fp_t1

0xe3c6,	// (0x00015f76) list_single_cale_day_pane_fp_t2_ParamLimits

0xe3c6,	// (0x00015f76) list_single_cale_day_pane_fp_t2

0xe3df,	// (0x00015f8f) list_single_cale_day_pane_fp_t3_ParamLimits

0xe3df,	// (0x00015f8f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8d,	// (0x0001773d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8d,	// (0x0001773d) list_single_cale_day_pane_fp_t

0xe21d,	// (0x00015dcd) list_empty_pane_fp_g1_ParamLimits

0xe21d,	// (0x00015dcd) list_empty_pane_fp_g1

0xe3f8,	// (0x00015fa8) list_empty_pane_fp_t1

0xe406,	// (0x00015fb6) list_empty_pane_fp_t2

0x0001,

0xfb94,	// (0x00017744) list_empty_pane_fp_t

0xe21d,	// (0x00015dcd) list_single_heading_pane_fp_g1_ParamLimits

0xe21d,	// (0x00015dcd) list_single_heading_pane_fp_g1

0x9b68,	// (0x00011718) list_single_heading_pane_fp_g2_ParamLimits

0x9b68,	// (0x00011718) list_single_heading_pane_fp_g2

0xe229,	// (0x00015dd9) list_single_heading_pane_fp_g3_ParamLimits

0xe229,	// (0x00015dd9) list_single_heading_pane_fp_g3

0x0002,

0xfb99,	// (0x00017749) list_single_heading_pane_fp_g_ParamLimits

0xfb99,	// (0x00017749) list_single_heading_pane_fp_g

0xe414,	// (0x00015fc4) list_single_heading_pane_fp_t1_ParamLimits

0xe414,	// (0x00015fc4) list_single_heading_pane_fp_t1

0xe426,	// (0x00015fd6) list_single_heading_pane_fp_t2_ParamLimits

0xe426,	// (0x00015fd6) list_single_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x00017750) list_single_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x00017750) list_single_heading_pane_fp_t

0xa224,	// (0x00011dd4) aid_size_cell_fast

0x93ce,	// (0x00010f7e) soft_indicator_pane_cp1_t1

0xa261,	// (0x00011e11) cell_app_pane_cp2_ParamLimits

0xa261,	// (0x00011e11) cell_app_pane_cp2

0x8117,	// (0x0000fcc7) fep_hwr_candidate_drop_down_list_pane

0x82e1,	// (0x0000fe91) fep_hwr_candidate_pane_g3_ParamLimits

0x82e1,	// (0x0000fe91) fep_hwr_candidate_pane_g3

0x624b,	// (0x0000ddfb) fep_hwr_candidate_pane_g4_ParamLimits

0x624b,	// (0x0000ddfb) fep_hwr_candidate_pane_g4

0x0002,

0xfb0f,	// (0x000176bf) fep_hwr_candidate_pane_g_ParamLimits

0xfb0f,	// (0x000176bf) fep_hwr_candidate_pane_g

0xdd55,	// (0x00015905) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xdd55,	// (0x00015905) fep_vkb_candidate_drop_down_list_pane

0xe124,	// (0x00015cd4) fep_vkb_candidate_pane_g3

0xe12c,	// (0x00015cdc) fep_vkb_candidate_pane_g4

0x0002,

0xfb3c,	// (0x000176ec) fep_vkb_candidate_pane_g

0x8348,	// (0x0000fef8) cell_hwr_candidate_pane_g1_ParamLimits

0x8356,	// (0x0000ff06) cell_hwr_candidate_pane_g3_ParamLimits

0x8356,	// (0x0000ff06) cell_hwr_candidate_pane_g3

0x11ca,	// (0x00008d7a) cell_hwr_candidate_pane_g4_ParamLimits

0x11ca,	// (0x00008d7a) cell_hwr_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0001770b) cell_hwr_candidate_pane_g_ParamLimits

0xfb5b,	// (0x0001770b) cell_hwr_candidate_pane_g

0xe143,	// (0x00015cf3) cell_vkb_candidate_pane_g3_ParamLimits

0xe143,	// (0x00015cf3) cell_vkb_candidate_pane_g3

0xe15e,	// (0x00015d0e) cell_vkb_candidate_pane_g4_ParamLimits

0xe15e,	// (0x00015d0e) cell_vkb_candidate_pane_g4

0xe43c,	// (0x00015fec) cell_app_pane_cp2_g1_ParamLimits

0xe43c,	// (0x00015fec) cell_app_pane_cp2_g1

0xe45a,	// (0x0001600a) cell_app_pane_cp2_g2_ParamLimits

0xe45a,	// (0x0001600a) cell_app_pane_cp2_g2

0x0001,

0xfba5,	// (0x00017755) cell_app_pane_cp2_g_ParamLimits

0xfba5,	// (0x00017755) cell_app_pane_cp2_g

0xe466,	// (0x00016016) cell_app_pane_cp2_t1_ParamLimits

0xe466,	// (0x00016016) cell_app_pane_cp2_t1

0x9ed0,	// (0x00011a80) grid_highlight_pane_cp1_ParamLimits

0x9ed0,	// (0x00011a80) grid_highlight_pane_cp1

0x8394,	// (0x0000ff44) cell_hwr_candidate_pane_cp1_ParamLimits

0x8394,	// (0x0000ff44) cell_hwr_candidate_pane_cp1

0x8348,	// (0x0000fef8) fep_hwr_candidate_drop_down_list_pane_g1

0x83b2,	// (0x0000ff62) fep_hwr_candidate_drop_down_list_pane_g2

0x83bf,	// (0x0000ff6f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0001775a) fep_hwr_candidate_drop_down_list_pane_g

0x83cc,	// (0x0000ff7c) fep_hwr_candidate_drop_down_list_scroll_pane

0x83d5,	// (0x0000ff85) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x83d5,	// (0x0000ff85) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x83e2,	// (0x0000ff92) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x83e2,	// (0x0000ff92) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x83ef,	// (0x0000ff9f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x83ef,	// (0x0000ff9f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x83fc,	// (0x0000ffac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x83fc,	// (0x0000ffac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8417,	// (0x0000ffc7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8417,	// (0x0000ffc7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8432,	// (0x0000ffe2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8432,	// (0x0000ffe2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x844d,	// (0x0000fffd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x844d,	// (0x0000fffd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8468,	// (0x00010018) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8468,	// (0x00010018) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x00017761) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x00017761) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe492,	// (0x00016042) cell_vkb_candidate_pane_cp1_ParamLimits

0xe492,	// (0x00016042) cell_vkb_candidate_pane_cp1

0xde3c,	// (0x000159ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xde3c,	// (0x000159ec) fep_vkb_candidate_drop_down_list_pane_g1

0xe478,	// (0x00016028) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe478,	// (0x00016028) fep_vkb_candidate_drop_down_list_pane_g2

0xe485,	// (0x00016035) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe485,	// (0x00016035) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00017772) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x00017772) fep_vkb_candidate_drop_down_list_pane_g

0xe4b5,	// (0x00016065) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe4b5,	// (0x00016065) fep_vkb_candidate_drop_down_list_scroll_pane

0xe4c2,	// (0x00016072) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe4c2,	// (0x00016072) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe4cf,	// (0x0001607f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe4cf,	// (0x0001607f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe4db,	// (0x0001608b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe4db,	// (0x0001608b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe2aa,	// (0x00015e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe2aa,	// (0x00015e5a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe2cb,	// (0x00015e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe2cb,	// (0x00015e7b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe4e7,	// (0x00016097) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe4e7,	// (0x00016097) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe508,	// (0x000160b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe508,	// (0x000160b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe529,	// (0x000160d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe529,	// (0x000160d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00017779) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00017779) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90ea,	// (0x00010c9a) title_pane_g1_ParamLimits

0x90f7,	// (0x00010ca7) title_pane_g2_ParamLimits

0xf54e,	// (0x000170fe) title_pane_g_ParamLimits

0xa67b,	// (0x0001222b) aid_call2_pane

0xa683,	// (0x00012233) aid_call_pane

0xa68b,	// (0x0001223b) popup_clock_analogue_window_g1

0xa68b,	// (0x0001223b) popup_clock_analogue_window_g2

0x732a,	// (0x0000eeda) popup_clock_analogue_window_g3

0x7333,	// (0x0000eee3) popup_clock_analogue_window_g4

0x8ff9,	// (0x00010ba9) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x000172a3) popup_clock_analogue_window_g

0x733b,	// (0x0000eeeb) popup_clock_analogue_window_t1

0x7349,	// (0x0000eef9) clock_digital_number_pane_ParamLimits

0x7349,	// (0x0000eef9) clock_digital_number_pane

0x7355,	// (0x0000ef05) clock_digital_number_pane_cp02_ParamLimits

0x7355,	// (0x0000ef05) clock_digital_number_pane_cp02

0x7361,	// (0x0000ef11) clock_digital_number_pane_cp03_ParamLimits

0x7361,	// (0x0000ef11) clock_digital_number_pane_cp03

0x736d,	// (0x0000ef1d) clock_digital_number_pane_cp04_ParamLimits

0x736d,	// (0x0000ef1d) clock_digital_number_pane_cp04

0x7379,	// (0x0000ef29) clock_digital_separator_pane_ParamLimits

0x7379,	// (0x0000ef29) clock_digital_separator_pane

0x7385,	// (0x0000ef35) popup_clock_digital_window_t1_ParamLimits

0x7385,	// (0x0000ef35) popup_clock_digital_window_t1

0x8ff9,	// (0x00010ba9) clock_digital_number_pane_g1

0x8ff9,	// (0x00010ba9) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x000172ae) clock_digital_number_pane_g

0x8ff9,	// (0x00010ba9) clock_digital_separator_pane_g1

0x8ff9,	// (0x00010ba9) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x000172ae) clock_digital_separator_pane_g

0xb009,	// (0x00012bb9) aid_fill_nsta_ParamLimits

0xb12b,	// (0x00012cdb) indicator_nsta_pane_ParamLimits

0xb29e,	// (0x00012e4e) popup_clock_analogue_window

0xb29e,	// (0x00012e4e) popup_clock_digital_window

0x91c0,	// (0x00010d70) grid_indicator_nsta_pane_ParamLimits

0xd68c,	// (0x0001523c) clock_nsta_pane_t2

0x0001,

0xfa8f,	// (0x0001763f) clock_nsta_pane_t

0x72ee,	// (0x0000ee9e) aid_size_max_handle

0x72f8,	// (0x0000eea8) aid_size_min_handle

0xac90,	// (0x00012840) editor_scroll_pane

0xe544,	// (0x000160f4) ex_editor_pane

0xa194,	// (0x00011d44) scroll_pane_cp13

0x9953,	// (0x00011503) scroll_pane_cp14

0xa6ba,	// (0x0001226a) scroll_pane_cp36

0xa6d2,	// (0x00012282) list_single_graphic_hl_pane_cp2_ParamLimits

0xa6d2,	// (0x00012282) list_single_graphic_hl_pane_cp2

0xcaae,	// (0x0001465e) list_single_graphic_hl_pane_ParamLimits

0xcaae,	// (0x0001465e) list_single_graphic_hl_pane

0xe54c,	// (0x000160fc) aid_size_min_hl_cp1

0xe555,	// (0x00016105) list_highlight_pane_cp34_ParamLimits

0xe555,	// (0x00016105) list_highlight_pane_cp34

0xe566,	// (0x00016116) list_single_graphic_hl_pane_g1_ParamLimits

0xe566,	// (0x00016116) list_single_graphic_hl_pane_g1

0xe573,	// (0x00016123) list_single_graphic_hl_pane_g2_ParamLimits

0xe573,	// (0x00016123) list_single_graphic_hl_pane_g2

0xe573,	// (0x00016123) list_single_graphic_hl_pane_g3_ParamLimits

0xe573,	// (0x00016123) list_single_graphic_hl_pane_g3

0xab05,	// (0x000126b5) list_single_graphic_hl_pane_g4_ParamLimits

0xab05,	// (0x000126b5) list_single_graphic_hl_pane_g4

0xe187,	// (0x00015d37) list_single_graphic_hl_pane_g5_ParamLimits

0xe187,	// (0x00015d37) list_single_graphic_hl_pane_g5

0x0004,

0xfbda,	// (0x0001778a) list_single_graphic_hl_pane_g_ParamLimits

0xfbda,	// (0x0001778a) list_single_graphic_hl_pane_g

0xe57f,	// (0x0001612f) list_single_graphic_hl_pane_t1_ParamLimits

0xe57f,	// (0x0001612f) list_single_graphic_hl_pane_t1

0xe595,	// (0x00016145) aid_size_min_hl_cp2

0xe59e,	// (0x0001614e) list_highlight_pane_cp34_cp2_ParamLimits

0xe59e,	// (0x0001614e) list_highlight_pane_cp34_cp2

0xe566,	// (0x00016116) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe566,	// (0x00016116) list_single_graphic_hl_pane_g1_cp2

0xe5ab,	// (0x0001615b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe5ab,	// (0x0001615b) list_single_graphic_hl_pane_g2_cp2

0xe5b7,	// (0x00016167) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe5b7,	// (0x00016167) list_single_graphic_hl_pane_g3_cp2

0xab05,	// (0x000126b5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xab05,	// (0x000126b5) list_single_graphic_hl_pane_g4_cp2

0xe187,	// (0x00015d37) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe187,	// (0x00015d37) list_single_graphic_hl_pane_g5_cp2

0x7610,	// (0x0000f1c0) control_pane_g4_ParamLimits

0x7610,	// (0x0000f1c0) control_pane_g4

0xafdf,	// (0x00012b8f) bg_popup_sub_pane_cp10_ParamLimits

0xdc0e,	// (0x000157be) list_choice_list_pane_ParamLimits

0xdc1d,	// (0x000157cd) scroll_pane_cp23

0x9467,	// (0x00011017) bg_popup_preview_window_pane_cp02_ParamLimits

0xe1c3,	// (0x00015d73) list_preview_fixed_pane_ParamLimits

0xe1d9,	// (0x00015d89) list_preview_fixed_pane_cp_ParamLimits

0xe1d9,	// (0x00015d89) list_preview_fixed_pane_cp

0xe1e5,	// (0x00015d95) popup_preview_fixed_window_g1_ParamLimits

0xe1e5,	// (0x00015d95) popup_preview_fixed_window_g1

0xe1f1,	// (0x00015da1) popup_preview_fixed_window_g2_ParamLimits

0xe1f1,	// (0x00015da1) popup_preview_fixed_window_g2

0x0002,

0xfb62,	// (0x00017712) popup_preview_fixed_window_g_ParamLimits

0xfb62,	// (0x00017712) popup_preview_fixed_window_g

0x727e,	// (0x0000ee2e) aid_navi_side_left_pane_ParamLimits

0x728e,	// (0x0000ee3e) aid_navi_side_right_pane_ParamLimits

0x729d,	// (0x0000ee4d) navi_icon_pane_stacon_ParamLimits

0x72ad,	// (0x0000ee5d) navi_navi_pane_stacon_ParamLimits

0x729d,	// (0x0000ee4d) navi_text_pane_stacon_ParamLimits

0x6f31,	// (0x0000eae1) main_text_info_pane

0xe5d9,	// (0x00016189) listscroll_text_info_pane

0xe5e1,	// (0x00016191) list_text_info_pane_ParamLimits

0xe5e1,	// (0x00016191) list_text_info_pane

0xe5f0,	// (0x000161a0) scroll_pane_cp24_ParamLimits

0xe5f0,	// (0x000161a0) scroll_pane_cp24

0xe60e,	// (0x000161be) list_text_info_pane_t1_ParamLimits

0xe60e,	// (0x000161be) list_text_info_pane_t1

0x7776,	// (0x0000f326) popup_fast_swap2_window_ParamLimits

0x7776,	// (0x0000f326) popup_fast_swap2_window

0xe62b,	// (0x000161db) aid_size_cell_fast2

0x8fef,	// (0x00010b9f) bg_popup_window_pane_cp17

0xb978,	// (0x00013528) heading_pane_cp2

0x96d5,	// (0x00011285) listscroll_fast2_pane

0xe635,	// (0x000161e5) grid_fast2_pane

0xe63d,	// (0x000161ed) listscroll_fast2_pane_g1

0xe645,	// (0x000161f5) listscroll_fast2_pane_g2

0x0001,

0xfbe5,	// (0x00017795) listscroll_fast2_pane_g

0xa194,	// (0x00011d44) scroll_pane_cp26

0xe64d,	// (0x000161fd) cell_fast2_pane_ParamLimits

0xe64d,	// (0x000161fd) cell_fast2_pane

0xe663,	// (0x00016213) cell_fast2_pane_g1

0xe66c,	// (0x0001621c) cell_fast2_pane_g2

0xe675,	// (0x00016225) cell_fast2_pane_g3

0x0002,

0xfbea,	// (0x0001779a) cell_fast2_pane_g

0x97ac,	// (0x0001135c) grid_highlight_pane_cp9

0x7742,	// (0x0000f2f2) main_eswt_pane_ParamLimits

0x7742,	// (0x0000f2f2) main_eswt_pane

0xe605,	// (0x000161b5) list_single_text_info_pane

0xe67d,	// (0x0001622d) eswt_ctrl_button_pane

0xe67d,	// (0x0001622d) eswt_ctrl_canvas_pane

0xe685,	// (0x00016235) eswt_ctrl_combo_pane

0xe67d,	// (0x0001622d) eswt_ctrl_default_pane

0xe67d,	// (0x0001622d) eswt_ctrl_label_pane

0xe68d,	// (0x0001623d) eswt_ctrl_wait_pane

0xe695,	// (0x00016245) eswt_shell_pane

0x8fef,	// (0x00010b9f) listscroll_eswt_app_pane

0xe6b1,	// (0x00016261) popup_eswt_tasktip_window_ParamLimits

0xe6b1,	// (0x00016261) popup_eswt_tasktip_window

0xb5be,	// (0x0001316e) bg_popup_window_pane_cp18

0xe6c2,	// (0x00016272) eswt_control_pane_g1_ParamLimits

0xe6c2,	// (0x00016272) eswt_control_pane_g1

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_ParamLimits

0xe6cf,	// (0x0001627f) eswt_control_pane_g2

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_ParamLimits

0xe6dc,	// (0x0001628c) eswt_control_pane_g3

0xe6e9,	// (0x00016299) eswt_control_pane_g4_ParamLimits

0xe6e9,	// (0x00016299) eswt_control_pane_g4

0x0003,

0xfbf1,	// (0x000177a1) eswt_control_pane_g_ParamLimits

0xfbf1,	// (0x000177a1) eswt_control_pane_g

0x9ed0,	// (0x00011a80) bg_button_pane_ParamLimits

0x9ed0,	// (0x00011a80) bg_button_pane

0x97c1,	// (0x00011371) common_borders_pane_copy2_ParamLimits

0x97c1,	// (0x00011371) common_borders_pane_copy2

0xe6f6,	// (0x000162a6) control_button_pane_g1_ParamLimits

0xe6f6,	// (0x000162a6) control_button_pane_g1

0xe702,	// (0x000162b2) control_button_pane_g2_ParamLimits

0xe702,	// (0x000162b2) control_button_pane_g2

0xe70e,	// (0x000162be) control_button_pane_g3_ParamLimits

0xe70e,	// (0x000162be) control_button_pane_g3

0x0002,

0xfbfa,	// (0x000177aa) control_button_pane_g_ParamLimits

0xfbfa,	// (0x000177aa) control_button_pane_g

0xe722,	// (0x000162d2) control_button_pane_t1

0xe730,	// (0x000162e0) control_button_pane_t2

0x0001,

0xfc01,	// (0x000177b1) control_button_pane_t

0xb4a8,	// (0x00013058) bg_button_pane_g1

0xb4b8,	// (0x00013068) bg_button_pane_g2

0xb4b0,	// (0x00013060) bg_button_pane_g3

0xb4c8,	// (0x00013078) bg_button_pane_g4

0xb4c0,	// (0x00013070) bg_button_pane_g5

0xb4d0,	// (0x00013080) bg_button_pane_g6

0xb4d8,	// (0x00013088) bg_button_pane_g7

0xb4e8,	// (0x00013098) bg_button_pane_g8

0xb4e0,	// (0x00013090) bg_button_pane_g9

0x0008,

0xf855,	// (0x00017405) bg_button_pane_g

0xdbc9,	// (0x00015779) common_borders_pane_ParamLimits

0xdbc9,	// (0x00015779) common_borders_pane

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy1_ParamLimits

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy1

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy1_ParamLimits

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy1

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy1_ParamLimits

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy1

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy1_ParamLimits

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy1

0xdc04,	// (0x000157b4) bg_eswt_ctrl_canvas_pane_g1

0xdbc9,	// (0x00015779) common_borders_pane_cp2_ParamLimits

0xdbc9,	// (0x00015779) common_borders_pane_cp2

0xdbc9,	// (0x00015779) common_borders_pane_cp3_ParamLimits

0xdbc9,	// (0x00015779) common_borders_pane_cp3

0xe73e,	// (0x000162ee) separator_horizontal_pane

0xa4c8,	// (0x00012078) separator_vertical_pane

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy2_ParamLimits

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy2

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy2_ParamLimits

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy2

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy2_ParamLimits

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy2

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy2_ParamLimits

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy2

0x8fef,	// (0x00010b9f) common_borders_pane_cp4

0xe746,	// (0x000162f6) separator_horizontal_pane_g1

0xe74f,	// (0x000162ff) separator_horizontal_pane_g2

0xe758,	// (0x00016308) separator_horizontal_pane_g3

0x0002,

0xfc06,	// (0x000177b6) separator_horizontal_pane_g

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy3_ParamLimits

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy3

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy3_ParamLimits

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy3

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy3_ParamLimits

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy3

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy3_ParamLimits

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy3

0x8fef,	// (0x00010b9f) common_borders_pane_cp5

0xe761,	// (0x00016311) separator_vertical_pane_g1

0xe76a,	// (0x0001631a) separator_vertical_pane_g2

0xe773,	// (0x00016323) separator_vertical_pane_g3

0x0002,

0xfc0d,	// (0x000177bd) separator_vertical_pane_g

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy4_ParamLimits

0xe6c2,	// (0x00016272) eswt_control_pane_g1_copy4

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy4_ParamLimits

0xe6cf,	// (0x0001627f) eswt_control_pane_g2_copy4

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy4_ParamLimits

0xe6dc,	// (0x0001628c) eswt_control_pane_g3_copy4

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy4_ParamLimits

0xe6e9,	// (0x00016299) eswt_control_pane_g4_copy4

0xe77c,	// (0x0001632c) eswt_ctrl_combo_button_pane

0xe784,	// (0x00016334) eswt_ctrl_input_pane

0xe78c,	// (0x0001633c) popup_choice_list_window_cp70

0xe794,	// (0x00016344) eswt_ctrl_input_pane_t1

0x8fef,	// (0x00010b9f) input_focus_pane_cp70

0xdbc9,	// (0x00015779) bg_button_pane_cp70_ParamLimits

0xdbc9,	// (0x00015779) bg_button_pane_cp70

0xe7a2,	// (0x00016352) eswt_ctrl_combo_button_pane_g1

0xe7aa,	// (0x0001635a) wait_bar_pane_cp70

0xb5be,	// (0x0001316e) bg_popup_window_pane_cp70_ParamLimits

0xb5be,	// (0x0001316e) bg_popup_window_pane_cp70

0xe7b2,	// (0x00016362) popup_eswt_tasktip_window_t1

0xe7c8,	// (0x00016378) wait_bar_pane_cp71_ParamLimits

0xe7c8,	// (0x00016378) wait_bar_pane_cp71

0xe7d4,	// (0x00016384) grid_eswt_app_pane

0xa4bf,	// (0x0001206f) scroll_pane_cp70

0xe7dd,	// (0x0001638d) cell_eswt_app_pane_ParamLimits

0xe7dd,	// (0x0001638d) cell_eswt_app_pane

0xe805,	// (0x000163b5) cell_eswt_app_pane_g1_ParamLimits

0xe805,	// (0x000163b5) cell_eswt_app_pane_g1

0xe834,	// (0x000163e4) cell_eswt_app_pane_g2_ParamLimits

0xe834,	// (0x000163e4) cell_eswt_app_pane_g2

0x0001,

0xfc14,	// (0x000177c4) cell_eswt_app_pane_g_ParamLimits

0xfc14,	// (0x000177c4) cell_eswt_app_pane_g

0xe85d,	// (0x0001640d) cell_eswt_app_pane_t1_ParamLimits

0xe85d,	// (0x0001640d) cell_eswt_app_pane_t1

0xe88f,	// (0x0001643f) grid_highlight_pane_cp70_ParamLimits

0xe88f,	// (0x0001643f) grid_highlight_pane_cp70

0x9967,	// (0x00011517) set_content_pane_g1

0xaf2b,	// (0x00012adb) status_small_volume_pane

0x8483,	// (0x00010033) status_small_volume_pane_g1

0x848b,	// (0x0001003b) volume_small2_pane

0x8494,	// (0x00010044) volume_small2_pane_g1

0x849d,	// (0x0001004d) volume_small2_pane_g2

0x84a6,	// (0x00010056) volume_small2_pane_g3

0x84af,	// (0x0001005f) volume_small2_pane_g4

0x84b8,	// (0x00010068) volume_small2_pane_g5

0x84c1,	// (0x00010071) volume_small2_pane_g6

0x84ca,	// (0x0001007a) volume_small2_pane_g7

0x84d3,	// (0x00010083) volume_small2_pane_g8

0x84dc,	// (0x0001008c) volume_small2_pane_g9

0x84e5,	// (0x00010095) volume_small2_pane_g10

0x0009,

0xfc19,	// (0x000177c9) volume_small2_pane_g

0xdf7e,	// (0x00015b2e) fep_vkb_top_text_pane_g1_ParamLimits

0xdf99,	// (0x00015b49) fep_vkb_top_text_pane_t1_ParamLimits

0xe1fd,	// (0x00015dad) popup_preview_fixed_window_g3_ParamLimits

0xe1fd,	// (0x00015dad) popup_preview_fixed_window_g3

0x7b38,	// (0x0000f6e8) popup_toolbar_trans_pane

0xc856,	// (0x00014406) aid_height_set_list_ParamLimits

0xc862,	// (0x00014412) aid_size_parent_ParamLimits

0xafdf,	// (0x00012b8f) list_highlight_pane_cp2_ParamLimits

0x9967,	// (0x00011517) set_content_pane_g1_ParamLimits

0xcac3,	// (0x00014673) list_single_image_pane_ParamLimits

0xcac3,	// (0x00014673) list_single_image_pane

0xe89b,	// (0x0001644b) aid_size_cell_image_ParamLimits

0xe89b,	// (0x0001644b) aid_size_cell_image

0xe8a8,	// (0x00016458) grid_single_image_pane_ParamLimits

0xe8a8,	// (0x00016458) grid_single_image_pane

0x9967,	// (0x00011517) list_single_image_pane_g1_ParamLimits

0x9967,	// (0x00011517) list_single_image_pane_g1

0x9ef6,	// (0x00011aa6) list_single_image_pane_g2_ParamLimits

0x9ef6,	// (0x00011aa6) list_single_image_pane_g2

0x0001,

0xfc2e,	// (0x000177de) list_single_image_pane_g_ParamLimits

0xfc2e,	// (0x000177de) list_single_image_pane_g

0xc9e5,	// (0x00014595) list_single_image_pane_t1_ParamLimits

0xc9e5,	// (0x00014595) list_single_image_pane_t1

0xe8b4,	// (0x00016464) cell_image_list_pane_ParamLimits

0xe8b4,	// (0x00016464) cell_image_list_pane

0xe8c7,	// (0x00016477) cell_image_list_pane_g1

0xe8d0,	// (0x00016480) cell_image_list_pane_g2

0x0001,

0xfc33,	// (0x000177e3) cell_image_list_pane_g

0xe8d9,	// (0x00016489) aid_size_cell_tb_trans_pane

0x9ed0,	// (0x00011a80) bg_tb_trans_pane

0xe8eb,	// (0x0001649b) grid_tb_trans_pane

0xb4a8,	// (0x00013058) bg_tb_trans_pane_g1

0xb4b8,	// (0x00013068) bg_tb_trans_pane_g2

0xb4b0,	// (0x00013060) bg_tb_trans_pane_g3

0xb4c8,	// (0x00013078) bg_tb_trans_pane_g4

0xb4c0,	// (0x00013070) bg_tb_trans_pane_g5

0xb4e8,	// (0x00013098) bg_tb_trans_pane_g6

0xb4e0,	// (0x00013090) bg_tb_trans_pane_g7

0xb4d0,	// (0x00013080) bg_tb_trans_pane_g8

0xb4d8,	// (0x00013088) bg_tb_trans_pane_g9

0x0008,

0xfc38,	// (0x000177e8) bg_tb_trans_pane_g

0xe8ff,	// (0x000164af) cell_toolbar_trans_pane_ParamLimits

0xe8ff,	// (0x000164af) cell_toolbar_trans_pane

0xdc04,	// (0x000157b4) cell_toolbar_trans_pane_g1

0xd84d,	// (0x000153fd) list_form2_midp_pane_t1

0xd85b,	// (0x0001540b) list_form2_midp_pane_t2

0x0001,

0xfad5,	// (0x00017685) list_form2_midp_pane_t

0xd869,	// (0x00015419) scroll_pane_cp51_ParamLimits

0xda4e,	// (0x000155fe) form2_midp_wait_pane_g1

0xda57,	// (0x00015607) form2_midp_wait_pane_g2

0xda60,	// (0x00015610) form2_midp_wait_pane_g3

0x0002,

0xfaea,	// (0x0001769a) form2_midp_wait_pane_g

0x91c0,	// (0x00010d70) list_highlight_pane_cp21_ParamLimits

0xda9e,	// (0x0001564e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xdaad,	// (0x0001565d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xca6c,	// (0x0001461c) list_single_2graphic_im_pane_ParamLimits

0xca6c,	// (0x0001461c) list_single_2graphic_im_pane

0xe925,	// (0x000164d5) list_single_2graphic_im_pane_g1_ParamLimits

0xe925,	// (0x000164d5) list_single_2graphic_im_pane_g1

0xe936,	// (0x000164e6) list_single_2graphic_im_pane_g2_ParamLimits

0xe936,	// (0x000164e6) list_single_2graphic_im_pane_g2

0xe942,	// (0x000164f2) list_single_2graphic_im_pane_g3_ParamLimits

0xe942,	// (0x000164f2) list_single_2graphic_im_pane_g3

0x0003,

0xfc4b,	// (0x000177fb) list_single_2graphic_im_pane_g_ParamLimits

0xfc4b,	// (0x000177fb) list_single_2graphic_im_pane_g

0xe962,	// (0x00016512) list_single_2graphic_im_pane_t1_ParamLimits

0xe962,	// (0x00016512) list_single_2graphic_im_pane_t1

0xe209,	// (0x00015db9) list_single_graphic_2heading_pane_fp_ParamLimits

0xe209,	// (0x00015db9) list_single_graphic_2heading_pane_fp

0xe260,	// (0x00015e10) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe260,	// (0x00015e10) list_single_graphic_2heading_pane_fp_g1

0xe21d,	// (0x00015dcd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe21d,	// (0x00015dcd) list_single_graphic_2heading_pane_fp_g2

0x9b68,	// (0x00011718) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9b68,	// (0x00011718) list_single_graphic_2heading_pane_fp_g3

0xe229,	// (0x00015dd9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe229,	// (0x00015dd9) list_single_graphic_2heading_pane_fp_g4

0xe23d,	// (0x00015ded) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe23d,	// (0x00015ded) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb72,	// (0x00017722) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb72,	// (0x00017722) list_single_graphic_2heading_pane_fp_g

0xe993,	// (0x00016543) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe993,	// (0x00016543) list_single_graphic_2heading_pane_fp_t1

0xe298,	// (0x00015e48) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe298,	// (0x00015e48) list_single_graphic_2heading_pane_fp_t2

0xe9a9,	// (0x00016559) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe9a9,	// (0x00016559) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc54,	// (0x00017804) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc54,	// (0x00017804) list_single_graphic_2heading_pane_fp_t

0xdc8d,	// (0x0001583d) fep_hwr_write_pane_g5_ParamLimits

0xdc8d,	// (0x0001583d) fep_hwr_write_pane_g5

0xdc99,	// (0x00015849) fep_hwr_write_pane_g6_ParamLimits

0xdc99,	// (0x00015849) fep_hwr_write_pane_g6

0xe695,	// (0x00016245) eswt_shell_pane_ParamLimits

0xb5be,	// (0x0001316e) bg_popup_window_pane_cp18_ParamLimits

0xc7c8,	// (0x00014378) heading_pane_cp70

0xe7b2,	// (0x00016362) popup_eswt_tasktip_window_t1_ParamLimits

0xb04b,	// (0x00012bfb) aid_touch_tab_arrow_left

0xb057,	// (0x00012c07) aid_touch_tab_arrow_right

0x9108,	// (0x00010cb8) title_pane_g3_ParamLimits

0x9108,	// (0x00010cb8) title_pane_g3

0x9dce,	// (0x0001197e) set_value_pane_g1

0x7b38,	// (0x0000f6e8) popup_toolbar_trans_pane_ParamLimits

0xe8d9,	// (0x00016489) aid_size_cell_tb_trans_pane_ParamLimits

0x9ed0,	// (0x00011a80) bg_tb_trans_pane_ParamLimits

0xe8eb,	// (0x0001649b) grid_tb_trans_pane_ParamLimits

0x9467,	// (0x00011017) cont_note_pane_ParamLimits

0x9467,	// (0x00011017) cont_note_pane

0x97c1,	// (0x00011371) cont_snote2_single_text_pane_ParamLimits

0x97c1,	// (0x00011371) cont_snote2_single_text_pane

0x97c1,	// (0x00011371) cont_snote2_single_graphic_pane_ParamLimits

0x97c1,	// (0x00011371) cont_snote2_single_graphic_pane

0xbb8e,	// (0x0001373e) cont_note_wait_pane_ParamLimits

0xbb8e,	// (0x0001373e) cont_note_wait_pane

0xbb8e,	// (0x0001373e) cont_note_image_pane_ParamLimits

0xbb8e,	// (0x0001373e) cont_note_image_pane

0xe9bf,	// (0x0001656f) popup_note2_window_g1_ParamLimits

0xe9bf,	// (0x0001656f) popup_note2_window_g1

0xe9f0,	// (0x000165a0) popup_note2_window_t1_ParamLimits

0xe9f0,	// (0x000165a0) popup_note2_window_t1

0xea35,	// (0x000165e5) popup_note2_window_t2_ParamLimits

0xea35,	// (0x000165e5) popup_note2_window_t2

0xea7a,	// (0x0001662a) popup_note2_window_t3_ParamLimits

0xea7a,	// (0x0001662a) popup_note2_window_t3

0xeabf,	// (0x0001666f) popup_note2_window_t4_ParamLimits

0xeabf,	// (0x0001666f) popup_note2_window_t4

0x94eb,	// (0x0001109b) popup_note2_window_t5_ParamLimits

0x94eb,	// (0x0001109b) popup_note2_window_t5

0x0004,

0xfc60,	// (0x00017810) popup_note2_window_t_ParamLimits

0xfc60,	// (0x00017810) popup_note2_window_t

0xeaee,	// (0x0001669e) popup_note2_image_window_g1_ParamLimits

0xeaee,	// (0x0001669e) popup_note2_image_window_g1

0xeafa,	// (0x000166aa) popup_note2_image_window_g2_ParamLimits

0xeafa,	// (0x000166aa) popup_note2_image_window_g2

0x0001,

0xfc6b,	// (0x0001781b) popup_note2_image_window_g_ParamLimits

0xfc6b,	// (0x0001781b) popup_note2_image_window_g

0xeb0c,	// (0x000166bc) popup_note2_image_window_t1_ParamLimits

0xeb0c,	// (0x000166bc) popup_note2_image_window_t1

0xeb24,	// (0x000166d4) popup_note2_image_window_t2_ParamLimits

0xeb24,	// (0x000166d4) popup_note2_image_window_t2

0xeb3c,	// (0x000166ec) popup_note2_image_window_t3_ParamLimits

0xeb3c,	// (0x000166ec) popup_note2_image_window_t3

0x0002,

0xfc70,	// (0x00017820) popup_note2_image_window_t_ParamLimits

0xfc70,	// (0x00017820) popup_note2_image_window_t

0xbb9c,	// (0x0001374c) popup_note2_wait_window_g1_ParamLimits

0xbb9c,	// (0x0001374c) popup_note2_wait_window_g1

0xbba8,	// (0x00013758) popup_note2_wait_window_g2_ParamLimits

0xbba8,	// (0x00013758) popup_note2_wait_window_g2

0xbbb4,	// (0x00013764) popup_note2_wait_window_g3_ParamLimits

0xbbb4,	// (0x00013764) popup_note2_wait_window_g3

0x0002,

0xf837,	// (0x000173e7) popup_note2_wait_window_g_ParamLimits

0xf837,	// (0x000173e7) popup_note2_wait_window_g

0xeb58,	// (0x00016708) popup_note2_wait_window_t1_ParamLimits

0xeb58,	// (0x00016708) popup_note2_wait_window_t1

0xeb76,	// (0x00016726) popup_note2_wait_window_t2_ParamLimits

0xeb76,	// (0x00016726) popup_note2_wait_window_t2

0xeb94,	// (0x00016744) popup_note2_wait_window_t3_ParamLimits

0xeb94,	// (0x00016744) popup_note2_wait_window_t3

0xeba6,	// (0x00016756) popup_note2_wait_window_t4_ParamLimits

0xeba6,	// (0x00016756) popup_note2_wait_window_t4

0x0003,

0xfc77,	// (0x00017827) popup_note2_wait_window_t_ParamLimits

0xfc77,	// (0x00017827) popup_note2_wait_window_t

0xebb8,	// (0x00016768) wait_bar2_pane_ParamLimits

0xebb8,	// (0x00016768) wait_bar2_pane

0xebd0,	// (0x00016780) popup_snote2_single_text_window_g1_ParamLimits

0xebd0,	// (0x00016780) popup_snote2_single_text_window_g1

0xebf8,	// (0x000167a8) popup_snote2_single_text_window_t1_ParamLimits

0xebf8,	// (0x000167a8) popup_snote2_single_text_window_t1

0xec44,	// (0x000167f4) popup_snote2_single_text_window_t2_ParamLimits

0xec44,	// (0x000167f4) popup_snote2_single_text_window_t2

0xec90,	// (0x00016840) popup_snote2_single_text_window_t3_ParamLimits

0xec90,	// (0x00016840) popup_snote2_single_text_window_t3

0xecd1,	// (0x00016881) popup_snote2_single_text_window_t4_ParamLimits

0xecd1,	// (0x00016881) popup_snote2_single_text_window_t4

0xed07,	// (0x000168b7) popup_snote2_single_text_window_t5_ParamLimits

0xed07,	// (0x000168b7) popup_snote2_single_text_window_t5

0x0004,

0xfc80,	// (0x00017830) popup_snote2_single_text_window_t_ParamLimits

0xfc80,	// (0x00017830) popup_snote2_single_text_window_t

0xed32,	// (0x000168e2) popup_snote2_single_graphic_window_g1_ParamLimits

0xed32,	// (0x000168e2) popup_snote2_single_graphic_window_g1

0xed5a,	// (0x0001690a) popup_snote2_single_graphic_window_g2_ParamLimits

0xed5a,	// (0x0001690a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8b,	// (0x0001783b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8b,	// (0x0001783b) popup_snote2_single_graphic_window_g

0xed82,	// (0x00016932) popup_snote2_single_graphic_window_t1_ParamLimits

0xed82,	// (0x00016932) popup_snote2_single_graphic_window_t1

0xedce,	// (0x0001697e) popup_snote2_single_graphic_window_t2_ParamLimits

0xedce,	// (0x0001697e) popup_snote2_single_graphic_window_t2

0xec90,	// (0x00016840) popup_snote2_single_graphic_window_t3_ParamLimits

0xec90,	// (0x00016840) popup_snote2_single_graphic_window_t3

0xecd1,	// (0x00016881) popup_snote2_single_graphic_window_t4_ParamLimits

0xecd1,	// (0x00016881) popup_snote2_single_graphic_window_t4

0xed07,	// (0x000168b7) popup_snote2_single_graphic_window_t5_ParamLimits

0xed07,	// (0x000168b7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc90,	// (0x00017840) popup_snote2_single_graphic_window_t_ParamLimits

0xfc90,	// (0x00017840) popup_snote2_single_graphic_window_t

0xd73f,	// (0x000152ef) clock_nsta_pane_cp2_t1

0xd73f,	// (0x000152ef) clock_nsta_pane_cp2_t2

0x0001,

0xfaab,	// (0x0001765b) clock_nsta_pane_cp2_t

0x9eea,	// (0x00011a9a) form_field_data_wide_pane_g1_ParamLimits

0x9967,	// (0x00011517) form_field_data_wide_pane_g2_ParamLimits

0x9967,	// (0x00011517) form_field_data_wide_pane_g2

0x9ef6,	// (0x00011aa6) form_field_data_wide_pane_g3_ParamLimits

0x9ef6,	// (0x00011aa6) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00017226) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00017226) form_field_data_wide_pane_g

0xd629,	// (0x000151d9) grid_touch_3_pane_ParamLimits

0xd629,	// (0x000151d9) grid_touch_3_pane

0xee1a,	// (0x000169ca) cell_touch_3_pane_ParamLimits

0xee1a,	// (0x000169ca) cell_touch_3_pane

0xdc04,	// (0x000157b4) cell_touch_3_pane_g1

0xdc04,	// (0x000157b4) cell_touch_3_pane_g2

0x0001,

0xfb30,	// (0x000176e0) cell_touch_3_pane_g

0x9543,	// (0x000110f3) cont_query_data_pane

0x954b,	// (0x000110fb) cont_query_data_pane_cp1

0xee47,	// (0x000169f7) button_value_adjust_pane_cp7

0xee4f,	// (0x000169ff) query_popup_pane_cp3

0xa763,	// (0x00012313) bg_popup_sub_pane_cp22_ParamLimits

0x73a4,	// (0x0000ef54) navi_navi_volume_pane_cp2

0x73bc,	// (0x0000ef6c) popup_side_volume_key_window_g2

0x73c8,	// (0x0000ef78) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x000172bc) popup_side_volume_key_window_g

0x73e2,	// (0x0000ef92) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x000172c3) popup_side_volume_key_window_t

0xaa7f,	// (0x0001262f) popup_side_volume_key_window_ParamLimits

0x9b28,	// (0x000116d8) list_double_graphic_pane_g4_ParamLimits

0x9b28,	// (0x000116d8) list_double_graphic_pane_g4

0xca97,	// (0x00014647) list_single_2heading_msg_pane_ParamLimits

0xca97,	// (0x00014647) list_single_2heading_msg_pane

0xee7c,	// (0x00016a2c) list_single_2heading_msg_pane_g1_ParamLimits

0xee7c,	// (0x00016a2c) list_single_2heading_msg_pane_g1

0xee88,	// (0x00016a38) list_single_2heading_msg_pane_g2_ParamLimits

0xee88,	// (0x00016a38) list_single_2heading_msg_pane_g2

0xee94,	// (0x00016a44) list_single_2heading_msg_pane_g3_ParamLimits

0xee94,	// (0x00016a44) list_single_2heading_msg_pane_g3

0xeea0,	// (0x00016a50) list_single_2heading_msg_pane_g4_ParamLimits

0xeea0,	// (0x00016a50) list_single_2heading_msg_pane_g4

0x0003,

0xfc9b,	// (0x0001784b) list_single_2heading_msg_pane_g_ParamLimits

0xfc9b,	// (0x0001784b) list_single_2heading_msg_pane_g

0xeeb8,	// (0x00016a68) list_single_2heading_msg_pane_t1_ParamLimits

0xeeb8,	// (0x00016a68) list_single_2heading_msg_pane_t1

0xeee0,	// (0x00016a90) list_single_2heading_msg_pane_t2_ParamLimits

0xeee0,	// (0x00016a90) list_single_2heading_msg_pane_t2

0xef0f,	// (0x00016abf) list_single_2heading_msg_pane_t3_ParamLimits

0xef0f,	// (0x00016abf) list_single_2heading_msg_pane_t3

0xef48,	// (0x00016af8) list_single_2heading_msg_pane_t4_ParamLimits

0xef48,	// (0x00016af8) list_single_2heading_msg_pane_t4

0x0003,

0xfca4,	// (0x00017854) list_single_2heading_msg_pane_t_ParamLimits

0xfca4,	// (0x00017854) list_single_2heading_msg_pane_t

0x9114,	// (0x00010cc4) title_pane_g4_ParamLimits

0x9114,	// (0x00010cc4) title_pane_g4

0x71f4,	// (0x0000eda4) title_pane_stacon_g3_ParamLimits

0x71f4,	// (0x0000eda4) title_pane_stacon_g3

0xe956,	// (0x00016506) list_single_2graphic_im_pane_g4_ParamLimits

0xe956,	// (0x00016506) list_single_2graphic_im_pane_g4

0xc58c,	// (0x0001413c) popup_side_volume_key_window_cp

0xcd60,	// (0x00014910) main_idle_act2_pane_t1

0x7c6d,	// (0x0000f81d) toolbar_button_pane_g10

0x991e,	// (0x000114ce) popup_toolbar_window_cp1

0xd730,	// (0x000152e0) clock_nsta_pane_cp_t1

0xd730,	// (0x000152e0) clock_nsta_pane_cp_t2

0x0001,

0xfaa6,	// (0x00017656) clock_nsta_pane_cp_t

0x73a4,	// (0x0000ef54) navi_navi_volume_pane_cp2_ParamLimits

0x73b0,	// (0x0000ef60) popup_side_volume_key_window_g1_ParamLimits

0x73bc,	// (0x0000ef6c) popup_side_volume_key_window_g2_ParamLimits

0x73c8,	// (0x0000ef78) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x000172bc) popup_side_volume_key_window_g_ParamLimits

0x8103,	// (0x0000fcb3) fep_hwr_aid_pane

0x81a4,	// (0x0000fd54) bg_fep_hwr_top_pane_g4_ParamLimits

0xdc5d,	// (0x0001580d) fep_hwr_top_pane_g1_ParamLimits

0xdc6f,	// (0x0001581f) fep_hwr_top_pane_g2_ParamLimits

0x81c4,	// (0x0000fd74) fep_hwr_top_pane_g3_ParamLimits

0xfafb,	// (0x000176ab) fep_hwr_top_pane_g_ParamLimits

0x81d9,	// (0x0000fd89) fep_hwr_top_text_pane_ParamLimits

0xc357,	// (0x00013f07) aid_touch_tab_arrow_arrow_2

0xc360,	// (0x00013f10) aid_touch_tab_arrow_left_2

0x8117,	// (0x0000fcc7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x814a,	// (0x0000fcfa) fep_hwr_prediction_pane

0xddae,	// (0x0001595e) fep_vkb_prediction_pane

0xde90,	// (0x00015a40) fep_vkb_side_pane_g3_ParamLimits

0xde90,	// (0x00015a40) fep_vkb_side_pane_g3

0x8348,	// (0x0000fef8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x83b2,	// (0x0000ff62) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x83bf,	// (0x0000ff6f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaa,	// (0x0001775a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x84ee,	// (0x0001009e) fep_hwr_prediction_pane_g1

0x84f8,	// (0x000100a8) fep_hwr_prediction_pane_g2

0x8500,	// (0x000100b0) fep_hwr_prediction_pane_g3

0x8508,	// (0x000100b8) fep_hwr_prediction_pane_g4

0x0003,

0xfcad,	// (0x0001785d) fep_hwr_prediction_pane_g

0xef6d,	// (0x00016b1d) fep_vkb_prediction_pane_g1

0xef77,	// (0x00016b27) fep_vkb_prediction_pane_g2

0xef7f,	// (0x00016b2f) fep_vkb_prediction_pane_g3

0xef87,	// (0x00016b37) fep_vkb_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00017866) fep_vkb_prediction_pane_g

0x7f3b,	// (0x0000faeb) slider_set_pane_g3

0x7f4f,	// (0x0000faff) slider_set_pane_g4

0x7f67,	// (0x0000fb17) slider_set_pane_g5

0x7f3b,	// (0x0000faeb) slider_set_pane_g6

0x7f7d,	// (0x0000fb2d) slider_set_pane_g7

0xc9a9,	// (0x00014559) slider_form_pane_g3

0xc9b2,	// (0x00014562) slider_form_pane_g4

0xc9ba,	// (0x0001456a) slider_form_pane_g5

0xc9a9,	// (0x00014559) slider_form_pane_g6

0xc9c2,	// (0x00014572) slider_form_pane_g7

0xd040,	// (0x00014bf0) slider_set_pane_vc_g3

0xd049,	// (0x00014bf9) slider_set_pane_vc_g4

0xd052,	// (0x00014c02) slider_set_pane_vc_g5

0xd040,	// (0x00014bf0) slider_set_pane_vc_g6

0xd05b,	// (0x00014c0b) slider_set_pane_vc_g7

0xd040,	// (0x00014bf0) slider_form_pane_vc_g1

0xd049,	// (0x00014bf9) slider_form_pane_vc_g2

0xd052,	// (0x00014c02) slider_form_pane_vc_g3

0xd040,	// (0x00014bf0) slider_form_pane_vc_g4

0xd429,	// (0x00014fd9) slider_form_pane_vc_g5

0x0004,

0xfa78,	// (0x00017628) slider_form_pane_vc_g

0x6f31,	// (0x0000eae1) main_idle_act3_pane

0xef8f,	// (0x00016b3f) ai3_links_pane

0xef98,	// (0x00016b48) popup_ai3_data_window_ParamLimits

0xef98,	// (0x00016b48) popup_ai3_data_window

0x8fef,	// (0x00010b9f) grid_ai3_links_pane

0xefb0,	// (0x00016b60) cell_ai3_links_pane_ParamLimits

0xefb0,	// (0x00016b60) cell_ai3_links_pane

0xefc4,	// (0x00016b74) bg_popup_sub_pane_cp11

0xefd1,	// (0x00016b81) cell_ai3_links_pane_g1

0x8fef,	// (0x00010b9f) bg_popup_sub_pane_cp12

0xeff6,	// (0x00016ba6) heading_ai3_data_pane

0xeffe,	// (0x00016bae) list_ai3_gene_pane

0xf00a,	// (0x00016bba) popup_ai3_data_window_g1

0xf012,	// (0x00016bc2) heading_ai3_data_pane_g1

0xf01a,	// (0x00016bca) heading_ai3_data_pane_t1

0xf028,	// (0x00016bd8) list_double_ai3_gene_pane_ParamLimits

0xf028,	// (0x00016bd8) list_double_ai3_gene_pane

0xf035,	// (0x00016be5) list_single_ai3_gene_pane_ParamLimits

0xf035,	// (0x00016be5) list_single_ai3_gene_pane

0xdbc9,	// (0x00015779) list_highlight_pane_cp7_ParamLimits

0xdbc9,	// (0x00015779) list_highlight_pane_cp7

0xf042,	// (0x00016bf2) list_single_a13_gene_pane_t1_ParamLimits

0xf042,	// (0x00016bf2) list_single_a13_gene_pane_t1

0xf059,	// (0x00016c09) list_single_ai3_gene_pane_g1

0xf062,	// (0x00016c12) list_single_ai3_gene_pane_g2

0x0001,

0xfcbf,	// (0x0001786f) list_single_ai3_gene_pane_g

0xf06a,	// (0x00016c1a) list_double_ai3_gene_pane_g1_ParamLimits

0xf06a,	// (0x00016c1a) list_double_ai3_gene_pane_g1

0xf076,	// (0x00016c26) list_double_ai3_gene_pane_t1_ParamLimits

0xf076,	// (0x00016c26) list_double_ai3_gene_pane_t1

0xf092,	// (0x00016c42) list_double_ai3_gene_pane_t2_ParamLimits

0xf092,	// (0x00016c42) list_double_ai3_gene_pane_t2

0xf0a7,	// (0x00016c57) list_double_ai3_gene_pane_t3_ParamLimits

0xf0a7,	// (0x00016c57) list_double_ai3_gene_pane_t3

0x0002,

0xfcc4,	// (0x00017874) list_double_ai3_gene_pane_t_ParamLimits

0xfcc4,	// (0x00017874) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee60,	// (0x00016a10) aid_size_min_col_2

0xee68,	// (0x00016a18) aid_size_min_msg_ParamLimits

0xee68,	// (0x00016a18) aid_size_min_msg

0xdf8a,	// (0x00015b3a) fep_vkb_top_text_pane_g2_ParamLimits

0xdf8a,	// (0x00015b3a) fep_vkb_top_text_pane_g2

0x0001,

0xfb2b,	// (0x000176db) fep_vkb_top_text_pane_g_ParamLimits

0xfb2b,	// (0x000176db) fep_vkb_top_text_pane_g

0x6f31,	// (0x0000eae1) main_hc_apps_shell_pane

0xf0c4,	// (0x00016c74) grid_hc_apps_pane_ParamLimits

0xf0c4,	// (0x00016c74) grid_hc_apps_pane

0xf0d3,	// (0x00016c83) list_hc_apps_pane

0xf0db,	// (0x00016c8b) scroll_pane_cp37_ParamLimits

0xf0db,	// (0x00016c8b) scroll_pane_cp37

0xf0e7,	// (0x00016c97) cell_hc_apps_pane_ParamLimits

0xf0e7,	// (0x00016c97) cell_hc_apps_pane

0xf175,	// (0x00016d25) cell_hc_apps_pane_g1_ParamLimits

0xf175,	// (0x00016d25) cell_hc_apps_pane_g1

0xf1a2,	// (0x00016d52) cell_hc_apps_pane_g2_ParamLimits

0xf1a2,	// (0x00016d52) cell_hc_apps_pane_g2

0xf1be,	// (0x00016d6e) cell_hc_apps_pane_g3_ParamLimits

0xf1be,	// (0x00016d6e) cell_hc_apps_pane_g3

0x0002,

0xfccb,	// (0x0001787b) cell_hc_apps_pane_g_ParamLimits

0xfccb,	// (0x0001787b) cell_hc_apps_pane_g

0xf1e0,	// (0x00016d90) cell_hc_apps_pane_t1_ParamLimits

0xf1e0,	// (0x00016d90) cell_hc_apps_pane_t1

0x9467,	// (0x00011017) grid_highlight_pane_cp10_ParamLimits

0x9467,	// (0x00011017) grid_highlight_pane_cp10

0xf21e,	// (0x00016dce) list_single_hc_apps_pane_ParamLimits

0xf21e,	// (0x00016dce) list_single_hc_apps_pane

0xf24e,	// (0x00016dfe) list_single_hc_apps_pane_g1

0xf267,	// (0x00016e17) list_single_hc_apps_pane_g2

0x0001,

0xfcd2,	// (0x00017882) list_single_hc_apps_pane_g

0xf280,	// (0x00016e30) list_single_hc_apps_pane_g2_copy1

0xf29c,	// (0x00016e4c) list_single_hc_apps_pane_t1

0x91c0,	// (0x00010d70) bg_set_opt_pane_cp_ParamLimits

0x7142,	// (0x0000ecf2) setting_slider_pane_t1_ParamLimits

0x7158,	// (0x0000ed08) setting_slider_pane_t2_ParamLimits

0x7171,	// (0x0000ed21) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001710e) setting_slider_pane_t_ParamLimits

0x7188,	// (0x0000ed38) slider_set_pane_ParamLimits

0x7624,	// (0x0000f1d4) control_pane_g5_ParamLimits

0x7624,	// (0x0000f1d4) control_pane_g5

0xc821,	// (0x000143d1) slider_set_pane_g1_ParamLimits

0x7f2f,	// (0x0000fadf) slider_set_pane_g2_ParamLimits

0x7f3b,	// (0x0000faeb) slider_set_pane_g3_ParamLimits

0x7f4f,	// (0x0000faff) slider_set_pane_g4_ParamLimits

0x7f67,	// (0x0000fb17) slider_set_pane_g5_ParamLimits

0x7f3b,	// (0x0000faeb) slider_set_pane_g6_ParamLimits

0x7f7d,	// (0x0000fb2d) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00017503) slider_set_pane_g_ParamLimits

0x91c0,	// (0x00010d70) navi_icon_text_pane_ParamLimits

0xb019,	// (0x00012bc9) aid_fill_nsta_2_ParamLimits

0xb04b,	// (0x00012bfb) aid_touch_tab_arrow_left_ParamLimits

0xb057,	// (0x00012c07) aid_touch_tab_arrow_right_ParamLimits

0xb0c1,	// (0x00012c71) clock_nsta_pane_ParamLimits

0xc339,	// (0x00013ee9) navi_icon_pane_g1_ParamLimits

0xc345,	// (0x00013ef5) navi_text_pane_t1_ParamLimits

0xd827,	// (0x000153d7) navi_icon_text_pane_g1_ParamLimits

0xd833,	// (0x000153e3) navi_icon_text_pane_t1_ParamLimits

0xf24e,	// (0x00016dfe) list_single_hc_apps_pane_g1_ParamLimits

0xf267,	// (0x00016e17) list_single_hc_apps_pane_g2_ParamLimits

0xfcd2,	// (0x00017882) list_single_hc_apps_pane_g_ParamLimits

0xf280,	// (0x00016e30) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf29c,	// (0x00016e4c) list_single_hc_apps_pane_t1_ParamLimits

0x7074,	// (0x0000ec24) popup_toolbar2_fixed_window_ParamLimits

0x7074,	// (0x0000ec24) popup_toolbar2_fixed_window

0x7b30,	// (0x0000f6e0) popup_toolbar2_float_window

0x8fef,	// (0x00010b9f) bg_popup_sub_pane_cp27

0xf2ca,	// (0x00016e7a) grid_toolbar2_float_pane

0x8fef,	// (0x00010b9f) bg_popup_sub_pane_cp26

0xf2ca,	// (0x00016e7a) grid_toolbar2_fixed_pane

0xf2d2,	// (0x00016e82) cell_toolbar2_fixed_pane_ParamLimits

0xf2d2,	// (0x00016e82) cell_toolbar2_fixed_pane

0xf2e3,	// (0x00016e93) cell_toolbar2_fixed_pane_g1

0xf2ec,	// (0x00016e9c) toolbar2_fixed_button_pane

0xb4a8,	// (0x00013058) toolbar2_fixed_button_pane_g1

0xb4b8,	// (0x00013068) toolbar2_fixed_button_pane_g2

0xb4b0,	// (0x00013060) toolbar2_fixed_button_pane_g3

0xb4c8,	// (0x00013078) toolbar2_fixed_button_pane_g4

0xb4c0,	// (0x00013070) toolbar2_fixed_button_pane_g5

0xb4d0,	// (0x00013080) toolbar2_fixed_button_pane_g6

0xb4d8,	// (0x00013088) toolbar2_fixed_button_pane_g7

0xb4e8,	// (0x00013098) toolbar2_fixed_button_pane_g8

0xb4e0,	// (0x00013090) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00017405) toolbar2_fixed_button_pane_g

0xf2f4,	// (0x00016ea4) cell_toolbar2_float_pane_ParamLimits

0xf2f4,	// (0x00016ea4) cell_toolbar2_float_pane

0xf305,	// (0x00016eb5) cell_toolbar2_float_pane_g1

0xf2ec,	// (0x00016e9c) toolbar2_fixed_button_pane_cp

0xdd1d,	// (0x000158cd) fep_vkb_accented_list_pane_ParamLimits

0xdd1d,	// (0x000158cd) fep_vkb_accented_list_pane

0x8328,	// (0x0000fed8) bg_popup_fep_shadow_pane_g9

0xac90,	// (0x00012840) bg_popup_fep_shadow_pane_cp3

0xa17b,	// (0x00011d2b) list_accented_list_pane

0xf30e,	// (0x00016ebe) list_single_accented_list_pane_ParamLimits

0xf30e,	// (0x00016ebe) list_single_accented_list_pane

0xac90,	// (0x00012840) list_highlight_pane_cp10

0xf31f,	// (0x00016ecf) list_single_accented_list_pane_t1

0x7a96,	// (0x0000f646) popup_slider_window_ParamLimits

0x7a96,	// (0x0000f646) popup_slider_window

0xee57,	// (0x00016a07) aid_indentation_list_msg

0xf3bf,	// (0x00016f6f) bg_popup_window_pane_cp19

0xf423,	// (0x00016fd3) popup_slider_window_g1

0xf43f,	// (0x00016fef) popup_slider_window_g2

0xf45b,	// (0x0001700b) popup_slider_window_g3

0x0005,

0xfcd7,	// (0x00017887) popup_slider_window_g

0xf4b7,	// (0x00017067) popup_slider_window_t1

0xf529,	// (0x000170d9) small_volume_slider_vertical_pane

0xdc04,	// (0x000157b4) small_volume_slider_vertical_pane_g1

0xdc04,	// (0x000157b4) small_volume_slider_vertical_pane_g2

0xf545,	// (0x000170f5) small_volume_slider_vertical_pane_g3

0x0002,

0xfce9,	// (0x00017899) small_volume_slider_vertical_pane_g

0x6ee8,	// (0x0000ea98) area_side_right_pane_ParamLimits

0x6ee8,	// (0x0000ea98) area_side_right_pane

0x8510,	// (0x000100c0) aid_size_side_button_ParamLimits

0x8510,	// (0x000100c0) aid_size_side_button

0x8524,	// (0x000100d4) grid_sctrl_middle_pane_ParamLimits

0x8524,	// (0x000100d4) grid_sctrl_middle_pane

0x8540,	// (0x000100f0) sctrl_sk_bottom_pane

0x8551,	// (0x00010101) sctrl_sk_top_pane

0x8563,	// (0x00010113) aid_touch_sctrl_top

0x8570,	// (0x00010120) bg_sctrl_sk_pane_ParamLimits

0x8570,	// (0x00010120) bg_sctrl_sk_pane

0x857e,	// (0x0001012e) sctrl_sk_top_pane_g1

0x858b,	// (0x0001013b) sctrl_sk_top_pane_t1

0x8563,	// (0x00010113) aid_touch_sctrl_bottom

0x8570,	// (0x00010120) bg_sctrl_sk_pane_cp_ParamLimits

0x8570,	// (0x00010120) bg_sctrl_sk_pane_cp

0x85a6,	// (0x00010156) sctrl_sk_bottom_pane_g1

0x858b,	// (0x0001013b) sctrl_sk_bottom_pane_t1

0x85af,	// (0x0001015f) cell_sctrl_middle_pane_ParamLimits

0x85af,	// (0x0001015f) cell_sctrl_middle_pane

0x85ca,	// (0x0001017a) aid_touch_sctrl_middle_ParamLimits

0x85ca,	// (0x0001017a) aid_touch_sctrl_middle

0x85db,	// (0x0001018b) bg_sctrl_middle_pane_ParamLimits

0x85db,	// (0x0001018b) bg_sctrl_middle_pane

0x8348,	// (0x0000fef8) cell_sctrl_middle_pane_g1_ParamLimits

0x8348,	// (0x0000fef8) cell_sctrl_middle_pane_g1

0x85e9,	// (0x00010199) cell_sctrl_middle_pane_g2_ParamLimits

0x85e9,	// (0x00010199) cell_sctrl_middle_pane_g2

0x0001,

0xfcf5,	// (0x000178a5) cell_sctrl_middle_pane_g_ParamLimits

0xfcf5,	// (0x000178a5) cell_sctrl_middle_pane_g

0xb4a8,	// (0x00013058) bg_sctrl_middle_pane_g1

0xb4b0,	// (0x00013060) bg_sctrl_middle_pane_g2

0xb4b8,	// (0x00013068) bg_sctrl_middle_pane_g3

0xb4c0,	// (0x00013070) bg_sctrl_middle_pane_g4

0xb4c8,	// (0x00013078) bg_sctrl_middle_pane_g5

0xb4d0,	// (0x00013080) bg_sctrl_middle_pane_g6

0xb4d8,	// (0x00013088) bg_sctrl_middle_pane_g7

0xb4e0,	// (0x00013090) bg_sctrl_middle_pane_g8

0x0007,

0xfcfa,	// (0x000178aa) bg_sctrl_middle_pane_g

0xb4e8,	// (0x00013098) bg_sctrl_middle_pane_g8_copy1

0xb4a8,	// (0x00013058) bg_sctrl_sk_pane_g1

0xb4b8,	// (0x00013068) bg_sctrl_sk_pane_g2

0xb4b0,	// (0x00013060) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00017405) bg_sctrl_sk_pane_g

0x98e3,	// (0x00011493) aid_size_touch_scroll_bar

0xb4c8,	// (0x00013078) bg_sctrl_sk_pane_g4

0xb4c0,	// (0x00013070) bg_sctrl_sk_pane_g5

0xb4d0,	// (0x00013080) bg_sctrl_sk_pane_g6

0xb4d8,	// (0x00013088) bg_sctrl_sk_pane_g7

0xb4e8,	// (0x00013098) bg_sctrl_sk_pane_g8

0xb4e0,	// (0x00013090) bg_sctrl_sk_pane_g9

0x77cc,	// (0x0000f37c) popup_fep_china_hwr2_fs_candidate_window

0x77d4,	// (0x0000f384) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x77d4,	// (0x0000f384) popup_fep_china_hwr2_fs_control_window

0x8348,	// (0x0000fef8) sctrl_sk_top_pane_g2

0x0001,

0xfcf0,	// (0x000178a0) sctrl_sk_top_pane_g

0x002f,	// (0x00007bdf) aid_fep_china_hwr2_fs_cell_ParamLimits

0x002f,	// (0x00007bdf) aid_fep_china_hwr2_fs_cell

0x0040,	// (0x00007bf0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x0040,	// (0x00007bf0) bg_popup_fep_shadow_pane_cp4

0x0057,	// (0x00007c07) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x0057,	// (0x00007c07) bg_popup_fep_shadow_pane_cp5

0x0069,	// (0x00007c19) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x0069,	// (0x00007c19) popup_fep_china_hwr2_fs_control_bar_grid

0x0079,	// (0x00007c29) popup_fep_china_hwr2_fs_control_funtion_grid

0x0081,	// (0x00007c31) aid_fep_china_hwr2_fs_candi_cell

0x8fef,	// (0x00010b9f) bg_popup_fep_shadow_pane_cp6

0x008b,	// (0x00007c3b) popup_fep_china_hwr2_fs_candidate_grid

0x0093,	// (0x00007c43) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x0093,	// (0x00007c43) cell_fep_china_hwr2_fs_funtion_grid

0xdc04,	// (0x000157b4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x00ab,	// (0x00007c5b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x00ab,	// (0x00007c5b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x00b9,	// (0x00007c69) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x00b9,	// (0x00007c69) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0b,	// (0x000178bb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0b,	// (0x000178bb) cell_fep_china_hwr2_fs_funtion_grid_g

0x00cf,	// (0x00007c7f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x00cf,	// (0x00007c7f) cell_fep_china_hwr2_fs_funtion_grid_t1

0x00e4,	// (0x00007c94) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x00e4,	// (0x00007c94) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd10,	// (0x000178c0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd10,	// (0x000178c0) cell_fep_china_hwr2_fs_funtion_grid_t

0x0100,	// (0x00007cb0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0108,	// (0x00007cb8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0110,	// (0x00007cc0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd15,	// (0x000178c5) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0118,	// (0x00007cc8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0118,	// (0x00007cc8) cell_fep_china_hwr2_fs_candidate_grid

0x0131,	// (0x00007ce1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0139,	// (0x00007ce9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xdc04,	// (0x000157b4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xdc04,	// (0x000157b4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb30,	// (0x000176e0) cell_fep_china_hwr2_fs_candidate_grid_g

0x0141,	// (0x00007cf1) cell_fep_china_hwr2_fs_candidate_grid_t1

0xb0ce,	// (0x00012c7e) clock_nsta_pane_cp_24_ParamLimits

0xb0ce,	// (0x00012c7e) clock_nsta_pane_cp_24

0xb141,	// (0x00012cf1) indicator_nsta_pane_cp_24_ParamLimits

0xb141,	// (0x00012cf1) indicator_nsta_pane_cp_24

0xc1b6,	// (0x00013d66) heading_pane_g1

0x0001,

0xf8ba,	// (0x0001746a) heading_pane_g

0xcc02,	// (0x000147b2) grid_sct_catagory_button_pane

0xcc32,	// (0x000147e2) scroll_pane_cp5_ParamLimits

0xd875,	// (0x00015425) button_value_adjust_pane_cp5_ParamLimits

0xd875,	// (0x00015425) button_value_adjust_pane_cp5

0xd96b,	// (0x0001551b) form2_midp_time_pane_ParamLimits

0x014f,	// (0x00007cff) cell_sct_catagory_button_pane_ParamLimits

0x014f,	// (0x00007cff) cell_sct_catagory_button_pane

0xdbc9,	// (0x00015779) bg_button_pane_cp01_ParamLimits

0xdbc9,	// (0x00015779) bg_button_pane_cp01

0xdc04,	// (0x000157b4) cell_sct_catagory_button_pane_g1

0x7acd,	// (0x0000f67d) popup_tb_extension_window

0x0161,	// (0x00007d11) aid_size_cell_ext_ParamLimits

0x0161,	// (0x00007d11) aid_size_cell_ext

0x9467,	// (0x00011017) bg_tb_trans_pane_cp1_ParamLimits

0x9467,	// (0x00011017) bg_tb_trans_pane_cp1

0x0181,	// (0x00007d31) grid_tb_ext_pane_ParamLimits

0x0181,	// (0x00007d31) grid_tb_ext_pane

0x01a7,	// (0x00007d57) cell_tb_ext_pane_ParamLimits

0x01a7,	// (0x00007d57) cell_tb_ext_pane

0x01bc,	// (0x00007d6c) cell_tb_ext_pane_g1_ParamLimits

0x01bc,	// (0x00007d6c) cell_tb_ext_pane_g1

0x01d9,	// (0x00007d89) cell_tb_ext_pane_t1

0x9467,	// (0x00011017) list_highlight_pane_cp11_ParamLimits

0x9467,	// (0x00011017) list_highlight_pane_cp11

0x7093,	// (0x0000ec43) popup_uni_indicator_window_ParamLimits

0x7093,	// (0x0000ec43) popup_uni_indicator_window

0x9ed0,	// (0x00011a80) bg_popup_sub_pane_cp14

0x01f4,	// (0x00007da4) list_uniindi_pane

0x0200,	// (0x00007db0) uniindi_top_pane

0x9467,	// (0x00011017) bg_uniindi_top_pane

0x021f,	// (0x00007dcf) uniindi_top_pane_g1

0x0235,	// (0x00007de5) uniindi_top_pane_g2

0x0003,

0xfd1c,	// (0x000178cc) uniindi_top_pane_g

0x025f,	// (0x00007e0f) uniindi_top_pane_t1

0x0289,	// (0x00007e39) list_single_uniindi_pane_ParamLimits

0x0289,	// (0x00007e39) list_single_uniindi_pane

0xdc04,	// (0x000157b4) bg_uniindi_top_pane_g1

0x029b,	// (0x00007e4b) list_single_uniindi_pane_g1

0x02ae,	// (0x00007e5e) list_single_uniindi_pane_t1

0x6f31,	// (0x0000eae1) control_bg_pane

0x02d3,	// (0x00007e83) bg_sctrl_sk_pane_cp1

0x02dc,	// (0x00007e8c) bg_sctrl_sk_pane_cp2

0x02e5,	// (0x00007e95) control_bg_pane_g1

0x02ee,	// (0x00007e9e) control_bg_pane_g2

0x0001,

0xfd25,	// (0x000178d5) control_bg_pane_g

0xd6cb,	// (0x0001527b) cell_indicator_nsta_pane_g1_ParamLimits

0xd6d9,	// (0x00015289) cell_indicator_nsta_pane_g2_ParamLimits

0xfa94,	// (0x00017644) cell_indicator_nsta_pane_g_ParamLimits

0xd9d3,	// (0x00015583) form2_midp_time_pane_t1_ParamLimits

0x7742,	// (0x0000f2f2) main_idle_act4_pane_ParamLimits

0x7742,	// (0x0000f2f2) main_idle_act4_pane

0x7acd,	// (0x0000f67d) popup_tb_extension_window_ParamLimits

0x019b,	// (0x00007d4b) tb_ext_find_pane_ParamLimits

0x019b,	// (0x00007d4b) tb_ext_find_pane

0x02f7,	// (0x00007ea7) ai_gene_pane_1_cp1

0xadcb,	// (0x0001297b) ai_gene_pane_2_cp1

0x02ff,	// (0x00007eaf) list_single_idle_plugin_calendar_pane

0x0308,	// (0x00007eb8) list_single_idle_plugin_notification_pane

0x0311,	// (0x00007ec1) list_single_idle_plugin_player_pane

0x031a,	// (0x00007eca) list_single_idle_plugin_shortcut_pane_ParamLimits

0x031a,	// (0x00007eca) list_single_idle_plugin_shortcut_pane

0x033c,	// (0x00007eec) main_idle_act4_pane_t1

0x034e,	// (0x00007efe) main_idle_act4_pane_t2

0x0001,

0xfd2a,	// (0x000178da) main_idle_act4_pane_t

0x0360,	// (0x00007f10) middle_sk_idle_act4_pane_ParamLimits

0x0360,	// (0x00007f10) middle_sk_idle_act4_pane

0x0376,	// (0x00007f26) popup_clock_digital_analogue_window_cp2

0x0390,	// (0x00007f40) shortcut_wheel_idle_act4_pane_ParamLimits

0x0390,	// (0x00007f40) shortcut_wheel_idle_act4_pane

0xdc04,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g1

0xdc04,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g2

0xdc04,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g3

0xdc04,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g4

0xdc04,	// (0x000157b4) shortcut_wheel_idle_act4_pane_g5

0x03a4,	// (0x00007f54) shortcut_wheel_idle_act4_pane_g6

0x03ac,	// (0x00007f5c) shortcut_wheel_idle_act4_pane_g7

0x03b4,	// (0x00007f64) shortcut_wheel_idle_act4_pane_g8

0x03bc,	// (0x00007f6c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2f,	// (0x000178df) shortcut_wheel_idle_act4_pane_g

0xde3c,	// (0x000159ec) middle_sk_idle_act4_pane_g1_ParamLimits

0xde3c,	// (0x000159ec) middle_sk_idle_act4_pane_g1

0x0420,	// (0x00007fd0) middle_sk_idle_act4_pane_g2_ParamLimits

0x0420,	// (0x00007fd0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd52,	// (0x00017902) middle_sk_idle_act4_pane_g_ParamLimits

0xfd52,	// (0x00017902) middle_sk_idle_act4_pane_g

0x042c,	// (0x00007fdc) middle_sk_idle_act4_pane_t1_ParamLimits

0x042c,	// (0x00007fdc) middle_sk_idle_act4_pane_t1

0x0449,	// (0x00007ff9) grid_ai_shortcut_pane_ParamLimits

0x0449,	// (0x00007ff9) grid_ai_shortcut_pane

0x0462,	// (0x00008012) list_highlight_pane_cp16_ParamLimits

0x0462,	// (0x00008012) list_highlight_pane_cp16

0x046f,	// (0x0000801f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x046f,	// (0x0000801f) list_single_idle_plugin_shortcut_pane_g1

0x047b,	// (0x0000802b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x047b,	// (0x0000802b) list_single_idle_plugin_shortcut_pane_g2

0x0493,	// (0x00008043) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x0493,	// (0x00008043) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd57,	// (0x00017907) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd57,	// (0x00017907) list_single_idle_plugin_shortcut_pane_g

0x04a6,	// (0x00008056) cell_ai_shortcut_pane_ParamLimits

0x04a6,	// (0x00008056) cell_ai_shortcut_pane

0x04c7,	// (0x00008077) cell_ai_shortcut_pane_g1_ParamLimits

0x04c7,	// (0x00008077) cell_ai_shortcut_pane_g1

0x02f7,	// (0x00007ea7) ai_gene_pane_1_cp2

0x04e9,	// (0x00008099) ai_gene_pane_2_cp2

0x04f1,	// (0x000080a1) list_highlight_pane_cp15

0x04fa,	// (0x000080aa) list_single_idle_plugin_calendar_pane_g1

0x04f1,	// (0x000080a1) list_highlight_pane_cp17

0x0502,	// (0x000080b2) list_single_idle_plugin_calendar_pane_g1_copy1

0x050a,	// (0x000080ba) list_single_idle_plugin_player_pane_g1

0xce00,	// (0x000149b0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5e,	// (0x0001790e) list_single_idle_plugin_player_pane_g

0x0512,	// (0x000080c2) list_single_idle_plugin_player_pane_t1

0x0520,	// (0x000080d0) list_single_idle_plugin_player_pane_t2

0x052e,	// (0x000080de) list_single_idle_plugin_player_pane_t3

0x053c,	// (0x000080ec) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd63,	// (0x00017913) list_single_idle_plugin_player_pane_t

0x054a,	// (0x000080fa) wait_bar_pane_cp15

0x0552,	// (0x00008102) grid_ai_notification_pane

0xce00,	// (0x000149b0) list_single_idle_plugin_notification_pane_g1

0x055b,	// (0x0000810b) cell_ai_notification_pane_ParamLimits

0x055b,	// (0x0000810b) cell_ai_notification_pane

0x0568,	// (0x00008118) cell_ai_notification_pane_g1

0x0570,	// (0x00008120) cell_ai_notification_pane_t1

0x057e,	// (0x0000812e) tb_ext_find_button_pane

0x0586,	// (0x00008136) tb_ext_find_pane_g1

0x058e,	// (0x0000813e) tb_ext_find_pane_t1

0xa68b,	// (0x0001223b) tb_ext_find_button_pane_g1

0x059c,	// (0x0000814c) tb_ext_find_button_pane_g2

0x0001,

0xfd6c,	// (0x0001791c) tb_ext_find_button_pane_g

0x033c,	// (0x00007eec) main_idle_act4_pane_t1_ParamLimits

0x034e,	// (0x00007efe) main_idle_act4_pane_t2_ParamLimits

0xfd2a,	// (0x000178da) main_idle_act4_pane_t_ParamLimits

0x0376,	// (0x00007f26) popup_clock_digital_analogue_window_cp2_ParamLimits

0x0384,	// (0x00007f34) sat_plugin_idle_act4_pane_ParamLimits

0x0384,	// (0x00007f34) sat_plugin_idle_act4_pane

0x05a5,	// (0x00008155) sat_plugin_idle_act4_pane_t1_ParamLimits

0x05a5,	// (0x00008155) sat_plugin_idle_act4_pane_t1

0x05b8,	// (0x00008168) sat_plugin_idle_act4_pane_t2_ParamLimits

0x05b8,	// (0x00008168) sat_plugin_idle_act4_pane_t2

0x05cb,	// (0x0000817b) sat_plugin_idle_act4_pane_t3_ParamLimits

0x05cb,	// (0x0000817b) sat_plugin_idle_act4_pane_t3

0x05de,	// (0x0000818e) sat_plugin_idle_act4_pane_t4_ParamLimits

0x05de,	// (0x0000818e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd71,	// (0x00017921) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd71,	// (0x00017921) sat_plugin_idle_act4_pane_t

0x6ff4,	// (0x0000eba4) popup_battery_window_ParamLimits

0x6ff4,	// (0x0000eba4) popup_battery_window

0x9467,	// (0x00011017) bg_popup_sub_pane_cp25_ParamLimits

0x9467,	// (0x00011017) bg_popup_sub_pane_cp25

0x05f1,	// (0x000081a1) popup_battery_window_g1_ParamLimits

0x05f1,	// (0x000081a1) popup_battery_window_g1

0x05fd,	// (0x000081ad) popup_battery_window_t1_ParamLimits

0x05fd,	// (0x000081ad) popup_battery_window_t1

0x060f,	// (0x000081bf) popup_battery_window_t2_ParamLimits

0x060f,	// (0x000081bf) popup_battery_window_t2

0x0001,

0xfd7a,	// (0x0001792a) popup_battery_window_t_ParamLimits

0xfd7a,	// (0x0001792a) popup_battery_window_t

0xaca4,	// (0x00012854) midp_canvas_pane_ParamLimits

0xad13,	// (0x000128c3) midp_keypad_pane_ParamLimits

0xad13,	// (0x000128c3) midp_keypad_pane

0xafdf,	// (0x00012b8f) main_midp_pane_ParamLimits

0xd74e,	// (0x000152fe) signal_pane_g2_cp_ParamLimits

0x062c,	// (0x000081dc) aid_size_cell_midp_keypad_ParamLimits

0x062c,	// (0x000081dc) aid_size_cell_midp_keypad

0x0646,	// (0x000081f6) midp_keyp_game_grid_pane_ParamLimits

0x0646,	// (0x000081f6) midp_keyp_game_grid_pane

0x0660,	// (0x00008210) midp_keyp_rocker_pane_ParamLimits

0x0660,	// (0x00008210) midp_keyp_rocker_pane

0x068d,	// (0x0000823d) midp_keyp_sk_left_pane_ParamLimits

0x068d,	// (0x0000823d) midp_keyp_sk_left_pane

0x06e5,	// (0x00008295) midp_keyp_sk_right_pane_ParamLimits

0x06e5,	// (0x00008295) midp_keyp_sk_right_pane

0x8fef,	// (0x00010b9f) bg_button_pane_cp03

0x0737,	// (0x000082e7) midp_keyp_sk_left_pane_g1

0x8fef,	// (0x00010b9f) bg_button_pane_cp04

0x0737,	// (0x000082e7) midp_keyp_sk_right_pane_g1

0xdc04,	// (0x000157b4) midp_keyp_rocker_pane_g1

0x0740,	// (0x000082f0) keyp_game_cell_pane_ParamLimits

0x0740,	// (0x000082f0) keyp_game_cell_pane

0x8fef,	// (0x00010b9f) bg_button_pane_cp02

0x0751,	// (0x00008301) keyp_game_cell_pane_g1

0x702a,	// (0x0000ebda) popup_fep_vkb2_window_ParamLimits

0x702a,	// (0x0000ebda) popup_fep_vkb2_window

0x860d,	// (0x000101bd) aid_size_cell_vkb2_ParamLimits

0x860d,	// (0x000101bd) aid_size_cell_vkb2

0x8661,	// (0x00010211) popup_fep_vkb2_window_g1_ParamLimits

0x8661,	// (0x00010211) popup_fep_vkb2_window_g1

0x86a9,	// (0x00010259) vkb2_area_bottom_pane_ParamLimits

0x86a9,	// (0x00010259) vkb2_area_bottom_pane

0x86e1,	// (0x00010291) vkb2_area_keypad_pane_ParamLimits

0x86e1,	// (0x00010291) vkb2_area_keypad_pane

0x8719,	// (0x000102c9) vkb2_area_top_pane_ParamLimits

0x8719,	// (0x000102c9) vkb2_area_top_pane

0x8789,	// (0x00010339) vkb2_top_entry_pane_ParamLimits

0x8789,	// (0x00010339) vkb2_top_entry_pane

0x87b3,	// (0x00010363) vkb2_top_grid_left_pane_ParamLimits

0x87b3,	// (0x00010363) vkb2_top_grid_left_pane

0x87d1,	// (0x00010381) vkb2_top_grid_right_pane_ParamLimits

0x87d1,	// (0x00010381) vkb2_top_grid_right_pane

0x87ef,	// (0x0001039f) vkb2_cell_keypad_pane_ParamLimits

0x87ef,	// (0x0001039f) vkb2_cell_keypad_pane

0x88a0,	// (0x00010450) vkb2_area_bottom_grid_pane_ParamLimits

0x88a0,	// (0x00010450) vkb2_area_bottom_grid_pane

0x88c4,	// (0x00010474) vkb2_area_bottom_pane_g1_ParamLimits

0x88c4,	// (0x00010474) vkb2_area_bottom_pane_g1

0x88e8,	// (0x00010498) vkb2_area_bottom_pane_g2_ParamLimits

0x88e8,	// (0x00010498) vkb2_area_bottom_pane_g2

0x8916,	// (0x000104c6) vkb2_area_bottom_pane_g3_ParamLimits

0x8916,	// (0x000104c6) vkb2_area_bottom_pane_g3

0x0002,

0xfd7f,	// (0x0001792f) vkb2_area_bottom_pane_g_ParamLimits

0xfd7f,	// (0x0001792f) vkb2_area_bottom_pane_g

0x8967,	// (0x00010517) vkb2_top_cell_left_pane_ParamLimits

0x8967,	// (0x00010517) vkb2_top_cell_left_pane

0x0aea,	// (0x0000869a) vkb2_top_entry_pane_g1_ParamLimits

0x0aea,	// (0x0000869a) vkb2_top_entry_pane_g1

0x0af8,	// (0x000086a8) vkb2_top_entry_pane_t1_ParamLimits

0x0af8,	// (0x000086a8) vkb2_top_entry_pane_t1

0x0b2a,	// (0x000086da) vkb2_top_entry_pane_t2_ParamLimits

0x0b2a,	// (0x000086da) vkb2_top_entry_pane_t2

0x0b5c,	// (0x0000870c) vkb2_top_entry_pane_t3_ParamLimits

0x0b5c,	// (0x0000870c) vkb2_top_entry_pane_t3

0x0002,

0xfd86,	// (0x00017936) vkb2_top_entry_pane_t_ParamLimits

0xfd86,	// (0x00017936) vkb2_top_entry_pane_t

0x89b4,	// (0x00010564) vkb2_top_grid_right_pane_g1_ParamLimits

0x89b4,	// (0x00010564) vkb2_top_grid_right_pane_g1

0x89ca,	// (0x0001057a) vkb2_top_grid_right_pane_g2_ParamLimits

0x89ca,	// (0x0001057a) vkb2_top_grid_right_pane_g2

0x89e2,	// (0x00010592) vkb2_top_grid_right_pane_g3_ParamLimits

0x89e2,	// (0x00010592) vkb2_top_grid_right_pane_g3

0x89fa,	// (0x000105aa) vkb2_top_grid_right_pane_g4_ParamLimits

0x89fa,	// (0x000105aa) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8d,	// (0x0001793d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8d,	// (0x0001793d) vkb2_top_grid_right_pane_g

0x8a10,	// (0x000105c0) vkb2_top_cell_left_pane_g1

0x8a27,	// (0x000105d7) vkb2_cell_keypad_pane_g1_ParamLimits

0x8a27,	// (0x000105d7) vkb2_cell_keypad_pane_g1

0x0c20,	// (0x000087d0) vkb2_cell_keypad_pane_t1_ParamLimits

0x0c20,	// (0x000087d0) vkb2_cell_keypad_pane_t1

0x8a35,	// (0x000105e5) vkb2_cell_bottom_grid_pane_ParamLimits

0x8a35,	// (0x000105e5) vkb2_cell_bottom_grid_pane

0x8a6e,	// (0x0001061e) vkb2_cell_bottom_grid_pane_g1

0x03c4,	// (0x00007f74) aid_call2_pane_cp02

0x03cc,	// (0x00007f7c) aid_call_pane_cp02

0x03d4,	// (0x00007f84) clock_digital_number_pane_cp10

0x03dc,	// (0x00007f8c) clock_digital_number_pane_cp11

0x03e4,	// (0x00007f94) clock_digital_number_pane_cp12

0x03ec,	// (0x00007f9c) clock_digital_number_pane_cp13

0x03f4,	// (0x00007fa4) clock_digital_separator_pane_cp10

0xa68b,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g1

0xa68b,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g2

0x03fc,	// (0x00007fac) popup_clock_digital_analogue_window_cp2_g3

0xa68b,	// (0x0001223b) popup_clock_digital_analogue_window_cp2_g4

0x03fc,	// (0x00007fac) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd42,	// (0x000178f2) popup_clock_digital_analogue_window_cp2_g

0x0404,	// (0x00007fb4) popup_clock_digital_analogue_window_cp2_t1

0x0412,	// (0x00007fc2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4d,	// (0x000178fd) popup_clock_digital_analogue_window_cp2_t

0xdc04,	// (0x000157b4) clock_digital_number_pane_cp10_g1

0xdc04,	// (0x000157b4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb30,	// (0x000176e0) clock_digital_number_pane_cp10_g

0xdc04,	// (0x000157b4) clock_digital_separator_pane_cp10_g1

0xdc04,	// (0x000157b4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb30,	// (0x000176e0) clock_digital_separator_pane_cp10_g

0x0241,	// (0x00007df1) uniindi_top_pane_g3

0x0252,	// (0x00007e02) uniindi_top_pane_g4

0x885a,	// (0x0001040a) vkb2_row_keypad_pane_ParamLimits

0x885a,	// (0x0001040a) vkb2_row_keypad_pane

0x8a8a,	// (0x0001063a) vkb2_cell_t_keypad_pane_ParamLimits

0x8a8a,	// (0x0001063a) vkb2_cell_t_keypad_pane

0x8a97,	// (0x00010647) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8a97,	// (0x00010647) vkb2_cell_t_keypad_pane_cp08

0x8aa7,	// (0x00010657) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8aa7,	// (0x00010657) vkb2_cell_t_keypad_pane_cp09

0x8ab8,	// (0x00010668) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8ab8,	// (0x00010668) vkb2_cell_t_keypad_pane_cp01

0x8ac8,	// (0x00010678) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8ac8,	// (0x00010678) vkb2_cell_t_keypad_pane_cp02

0x8ad8,	// (0x00010688) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8ad8,	// (0x00010688) vkb2_cell_t_keypad_pane_cp03

0x8ae8,	// (0x00010698) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8ae8,	// (0x00010698) vkb2_cell_t_keypad_pane_cp04

0x8af8,	// (0x000106a8) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8af8,	// (0x000106a8) vkb2_cell_t_keypad_pane_cp05

0x8b08,	// (0x000106b8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8b08,	// (0x000106b8) vkb2_cell_t_keypad_pane_cp06

0x8b18,	// (0x000106c8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8b18,	// (0x000106c8) vkb2_cell_t_keypad_pane_cp07

0x8b28,	// (0x000106d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8b28,	// (0x000106d8) vkb2_cell_t_keypad_pane_cp10

0x8348,	// (0x0000fef8) vkb2_cell_t_keypad_pane_g1

0x0d3f,	// (0x000088ef) vkb2_cell_t_keypad_pane_t1

0x6f31,	// (0x0000eae1) popup_grid_graphic2_window

0x0d51,	// (0x00008901) aid_size_cell_graphic2_ParamLimits

0x0d51,	// (0x00008901) aid_size_cell_graphic2

0x0d89,	// (0x00008939) bg_popup_window_pane_cp21_ParamLimits

0x0d89,	// (0x00008939) bg_popup_window_pane_cp21

0x0d97,	// (0x00008947) graphic2_pages_pane_ParamLimits

0x0d97,	// (0x00008947) graphic2_pages_pane

0x0dd1,	// (0x00008981) grid_graphic2_control_pane_ParamLimits

0x0dd1,	// (0x00008981) grid_graphic2_control_pane

0x0e07,	// (0x000089b7) grid_graphic2_pane_ParamLimits

0x0e07,	// (0x000089b7) grid_graphic2_pane

0x0e67,	// (0x00008a17) cell_graphic2_pane

0x6f31,	// (0x0000eae1) main_comp_mode_pane

0xeffe,	// (0x00016bae) list_ai3_gene_pane_ParamLimits

0xf3bf,	// (0x00016f6f) bg_popup_window_pane_cp19_ParamLimits

0xf3cb,	// (0x00016f7b) bg_touch_area_indi_pane_ParamLimits

0xf3cb,	// (0x00016f7b) bg_touch_area_indi_pane

0xf3e1,	// (0x00016f91) bg_touch_area_indi_pane_cp01_ParamLimits

0xf3e1,	// (0x00016f91) bg_touch_area_indi_pane_cp01

0xf3f7,	// (0x00016fa7) bg_touch_area_indi_pane_cp02_ParamLimits

0xf3f7,	// (0x00016fa7) bg_touch_area_indi_pane_cp02

0xf40d,	// (0x00016fbd) bg_touch_area_indi_pane_cp03_ParamLimits

0xf40d,	// (0x00016fbd) bg_touch_area_indi_pane_cp03

0xf423,	// (0x00016fd3) popup_slider_window_g1_ParamLimits

0xf43f,	// (0x00016fef) popup_slider_window_g2_ParamLimits

0xf45b,	// (0x0001700b) popup_slider_window_g3_ParamLimits

0xfcd7,	// (0x00017887) popup_slider_window_g_ParamLimits

0xf4b7,	// (0x00017067) popup_slider_window_t1_ParamLimits

0xf529,	// (0x000170d9) small_volume_slider_vertical_pane_ParamLimits

0x0e67,	// (0x00008a17) cell_graphic2_pane_ParamLimits

0x0ea3,	// (0x00008a53) bg_button_pane_cp10_ParamLimits

0x0ea3,	// (0x00008a53) bg_button_pane_cp10

0x0eb4,	// (0x00008a64) bg_button_pane_cp11_ParamLimits

0x0eb4,	// (0x00008a64) bg_button_pane_cp11

0x0ec5,	// (0x00008a75) graphic2_pages_pane_g1_ParamLimits

0x0ec5,	// (0x00008a75) graphic2_pages_pane_g1

0x0ed8,	// (0x00008a88) graphic2_pages_pane_g2_ParamLimits

0x0ed8,	// (0x00008a88) graphic2_pages_pane_g2

0x0001,

0xfd9b,	// (0x0001794b) graphic2_pages_pane_g_ParamLimits

0xfd9b,	// (0x0001794b) graphic2_pages_pane_g

0x0eee,	// (0x00008a9e) graphic2_pages_pane_t1_ParamLimits

0x0eee,	// (0x00008a9e) graphic2_pages_pane_t1

0x0f04,	// (0x00008ab4) cell_graphic2_control_pane_ParamLimits

0x0f04,	// (0x00008ab4) cell_graphic2_control_pane

0x0f23,	// (0x00008ad3) cell_graphic2_pane_g1_ParamLimits

0x0f23,	// (0x00008ad3) cell_graphic2_pane_g1

0x0f30,	// (0x00008ae0) cell_graphic2_pane_g2_ParamLimits

0x0f30,	// (0x00008ae0) cell_graphic2_pane_g2

0x0f3d,	// (0x00008aed) cell_graphic2_pane_g3_ParamLimits

0x0f3d,	// (0x00008aed) cell_graphic2_pane_g3

0x0f4a,	// (0x00008afa) cell_graphic2_pane_g4_ParamLimits

0x0f4a,	// (0x00008afa) cell_graphic2_pane_g4

0x0f57,	// (0x00008b07) cell_graphic2_pane_g5_ParamLimits

0x0f57,	// (0x00008b07) cell_graphic2_pane_g5

0x0004,

0xfda0,	// (0x00017950) cell_graphic2_pane_g_ParamLimits

0xfda0,	// (0x00017950) cell_graphic2_pane_g

0x0f72,	// (0x00008b22) cell_graphic2_pane_t1_ParamLimits

0x0f72,	// (0x00008b22) cell_graphic2_pane_t1

0xb5be,	// (0x0001316e) grid_highlight_pane_cp11_ParamLimits

0xb5be,	// (0x0001316e) grid_highlight_pane_cp11

0x9467,	// (0x00011017) bg_button_pane_cp05

0x0f9b,	// (0x00008b4b) cell_graphic2_control_pane_g1

0xdc04,	// (0x000157b4) bg_touch_area_indi_pane_g1

0x0fc3,	// (0x00008b73) aid_cmod_rocker_key_size

0x0fcd,	// (0x00008b7d) aid_cmode_itu_key_size

0x0fd7,	// (0x00008b87) main_cmode_video_pane

0x0fdf,	// (0x00008b8f) main_comp_mode_itu_pane

0x0fe9,	// (0x00008b99) main_comp_mode_rocker_pane

0x0ff1,	// (0x00008ba1) cell_cmode_rocker_pane_ParamLimits

0x0ff1,	// (0x00008ba1) cell_cmode_rocker_pane

0x1003,	// (0x00008bb3) cell_cmode_itu_pane_ParamLimits

0x1003,	// (0x00008bb3) cell_cmode_itu_pane

0x9ed0,	// (0x00011a80) bg_button_pane_cp06_ParamLimits

0x9ed0,	// (0x00011a80) bg_button_pane_cp06

0xde3c,	// (0x000159ec) cell_cmode_rocker_pane_g1_ParamLimits

0xde3c,	// (0x000159ec) cell_cmode_rocker_pane_g1

0x00ab,	// (0x00007c5b) cell_cmode_rocker_pane_g2_ParamLimits

0x00ab,	// (0x00007c5b) cell_cmode_rocker_pane_g2

0x0001,

0xfdb0,	// (0x00017960) cell_cmode_rocker_pane_g_ParamLimits

0xfdb0,	// (0x00017960) cell_cmode_rocker_pane_g

0x8fef,	// (0x00010b9f) bg_button_pane_cp07

0x1018,	// (0x00008bc8) cell_cmode_itu_pane_g1

0x1021,	// (0x00008bd1) cell_cmode_itu_pane_t1

0x102f,	// (0x00008bdf) cell_cmode_itu_pane_t2

0x0001,

0xfdb5,	// (0x00017965) cell_cmode_itu_pane_t

0x02c3,	// (0x00007e73) aid_touch_ctrl_left

0x02cb,	// (0x00007e7b) aid_touch_ctrl_right

0x8fef,	// (0x00010b9f) compa_mode_pane

0x103d,	// (0x00008bed) aid_cmod_rocker_key_size_cp

0x1047,	// (0x00008bf7) aid_cmode_itu_key_size_cp

0x1051,	// (0x00008c01) compa_mode_pane_g1

0x1059,	// (0x00008c09) compa_mode_pane_g2

0x1061,	// (0x00008c11) compa_mode_pane_g3

0x0002,

0xfdba,	// (0x0001796a) compa_mode_pane_g

0x1069,	// (0x00008c19) main_comp_mode_itu_pane_cp

0x1071,	// (0x00008c21) main_comp_mode_rocker_pane_cp

0x1079,	// (0x00008c29) cell_cmode_itu_pane_cp_ParamLimits

0x1079,	// (0x00008c29) cell_cmode_itu_pane_cp

0x108e,	// (0x00008c3e) cell_cmode_rocker_pane_cp_ParamLimits

0x108e,	// (0x00008c3e) cell_cmode_rocker_pane_cp

0x9ed0,	// (0x00011a80) bg_button_pane_cp06_cp_ParamLimits

0x9ed0,	// (0x00011a80) bg_button_pane_cp06_cp

0xde3c,	// (0x000159ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xde3c,	// (0x000159ec) cell_cmode_rocker_pane_g1_cp

0xdc04,	// (0x000157b4) cell_cmode_rocker_pane_g2_cp

0x8fef,	// (0x00010b9f) bg_button_pane_cp07_cp

0x10a0,	// (0x00008c50) cell_cmode_itu_pane_g1_cp

0x10a9,	// (0x00008c59) cell_cmode_itu_pane_t1_cp

0x10b7,	// (0x00008c67) cell_cmode_itu_pane_t2_cp

0xc990,	// (0x00014540) settings_code_pane_cp2

0x91c0,	// (0x00010d70) bg_popup_window_pane_cp3_ParamLimits

0x9665,	// (0x00011215) heading_pane_cp3_ParamLimits

0x9671,	// (0x00011221) listscroll_popup_graphic_pane_ParamLimits

0x8103,	// (0x0000fcb3) fep_hwr_aid_pane_ParamLimits

0x8563,	// (0x00010113) aid_touch_sctrl_top_ParamLimits

0x857e,	// (0x0001012e) sctrl_sk_top_pane_g1_ParamLimits

0x8348,	// (0x0000fef8) sctrl_sk_top_pane_g2_ParamLimits

0xfcf0,	// (0x000178a0) sctrl_sk_top_pane_g_ParamLimits

0x858b,	// (0x0001013b) sctrl_sk_top_pane_t1_ParamLimits

0x8563,	// (0x00010113) aid_touch_sctrl_bottom_ParamLimits

0x858b,	// (0x0001013b) sctrl_sk_bottom_pane_t1_ParamLimits

0x020d,	// (0x00007dbd) aid_area_touch_clock

0x8751,	// (0x00010301) aid_vkb2_area_top_pane_cell_ParamLimits

0x8751,	// (0x00010301) aid_vkb2_area_top_pane_cell

0x887c,	// (0x0001042c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x887c,	// (0x0001042c) aid_vkb2_area_bottom_pane_cell

0x0ae2,	// (0x00008692) popup_char_count_window

0x10c5,	// (0x00008c75) popup_char_count_window_g1

0x10ce,	// (0x00008c7e) popup_char_count_window_g2

0x10d7,	// (0x00008c87) popup_char_count_window_g3

0x0002,

0xfdc1,	// (0x00017971) popup_char_count_window_g

0x10e0,	// (0x00008c90) popup_char_count_window_t1

0x863f,	// (0x000101ef) popup_fep_char_preview_window_ParamLimits

0x863f,	// (0x000101ef) popup_fep_char_preview_window

0x876f,	// (0x0001031f) vkb2_top_candi_pane_ParamLimits

0x876f,	// (0x0001031f) vkb2_top_candi_pane

0x10ee,	// (0x00008c9e) cell_vkb2_top_candi_pane_ParamLimits

0x10ee,	// (0x00008c9e) cell_vkb2_top_candi_pane

0x8b3d,	// (0x000106ed) bg_popup_fep_char_preview_window_ParamLimits

0x8b3d,	// (0x000106ed) bg_popup_fep_char_preview_window

0x8b4b,	// (0x000106fb) popup_fep_char_preview_window_t1_ParamLimits

0x8b4b,	// (0x000106fb) popup_fep_char_preview_window_t1

0x1171,	// (0x00008d21) bg_popup_fep_char_preview_window_g1

0x1169,	// (0x00008d19) bg_popup_fep_char_preview_window_g2

0x1161,	// (0x00008d11) bg_popup_fep_char_preview_window_g3

0x1199,	// (0x00008d49) bg_popup_fep_char_preview_window_g4

0x1191,	// (0x00008d41) bg_popup_fep_char_preview_window_g5

0x8b85,	// (0x00010735) bg_popup_fep_char_preview_window_g6

0x1181,	// (0x00008d31) bg_popup_fep_char_preview_window_g7

0x1179,	// (0x00008d29) bg_popup_fep_char_preview_window_g8

0x11a1,	// (0x00008d51) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc8,	// (0x00017978) bg_popup_fep_char_preview_window_g

0x8348,	// (0x0000fef8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8348,	// (0x0000fef8) cell_vkb2_top_candi_pane_g1

0x8356,	// (0x0000ff06) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8356,	// (0x0000ff06) cell_vkb2_top_candi_pane_g2

0x11ca,	// (0x00008d7a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x11ca,	// (0x00008d7a) cell_vkb2_top_candi_pane_g3

0x8b8d,	// (0x0001073d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8b8d,	// (0x0001073d) cell_vkb2_top_candi_pane_g4

0xe2cb,	// (0x00015e7b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe2cb,	// (0x00015e7b) cell_vkb2_top_candi_pane_g5

0x8bae,	// (0x0001075e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8bae,	// (0x0001075e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddb,	// (0x0001798b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddb,	// (0x0001798b) cell_vkb2_top_candi_pane_g

0x8bbc,	// (0x0001076c) cell_vkb2_top_candi_pane_t1

0x7f1b,	// (0x0000facb) aid_size_touch_slider_mark_ParamLimits

0x7f1b,	// (0x0000facb) aid_size_touch_slider_mark

0x0dc5,	// (0x00008975) grid_graphic2_catg_pane_ParamLimits

0x0dc5,	// (0x00008975) grid_graphic2_catg_pane

0x0e43,	// (0x000089f3) popup_grid_graphic2_window_t1_ParamLimits

0x0e43,	// (0x000089f3) popup_grid_graphic2_window_t1

0x0e55,	// (0x00008a05) popup_grid_graphic2_window_t2_ParamLimits

0x0e55,	// (0x00008a05) popup_grid_graphic2_window_t2

0x0001,

0xfd96,	// (0x00017946) popup_grid_graphic2_window_t_ParamLimits

0xfd96,	// (0x00017946) popup_grid_graphic2_window_t

0x9467,	// (0x00011017) bg_button_pane_cp05_ParamLimits

0x0f9b,	// (0x00008b4b) cell_graphic2_control_pane_g1_ParamLimits

0x1201,	// (0x00008db1) cell_graphic2_catg_pane_ParamLimits

0x1201,	// (0x00008db1) cell_graphic2_catg_pane

0x8fef,	// (0x00010b9f) bg_button_pane_cp12

0x1213,	// (0x00008dc3) cell_graphic2_catg_pane_g1

0x01d9,	// (0x00007d89) cell_tb_ext_pane_t1_ParamLimits

0x8987,	// (0x00010537) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8987,	// (0x00010537) vkb2_top_cell_right_narrow_pane

0x899f,	// (0x0001054f) vkb2_top_cell_right_wide_pane_ParamLimits

0x899f,	// (0x0001054f) vkb2_top_cell_right_wide_pane

0x80f5,	// (0x0000fca5) bg_vkb2_func_pane_ParamLimits

0x80f5,	// (0x0000fca5) bg_vkb2_func_pane

0x8a10,	// (0x000105c0) vkb2_top_cell_left_pane_g1_ParamLimits

0x80f5,	// (0x0000fca5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x80f5,	// (0x0000fca5) bg_vkb2_fuc_pane_cp03

0x8a6e,	// (0x0001061e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xb4b0,	// (0x00013060) bg_vkb2_func_pane_g1

0xb4b8,	// (0x00013068) bg_vkb2_func_pane_g2

0xb4c8,	// (0x00013078) bg_vkb2_func_pane_g3

0xb4c0,	// (0x00013070) bg_vkb2_func_pane_g4

0xb4d0,	// (0x00013080) bg_vkb2_func_pane_g5

0xb4d8,	// (0x00013088) bg_vkb2_func_pane_g6

0xb4e0,	// (0x00013090) bg_vkb2_func_pane_g7

0xb4e8,	// (0x00013098) bg_vkb2_func_pane_g8

0xb4a8,	// (0x00013058) bg_vkb2_func_pane_g9

0x0008,

0xfde8,	// (0x00017998) bg_vkb2_func_pane_g

0x80f5,	// (0x0000fca5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x80f5,	// (0x0000fca5) bg_vkb2_fuc_pane_cp01

0x8a10,	// (0x000105c0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8a10,	// (0x000105c0) vkb2_top_cell_right_wide_pane_g1

0x80f5,	// (0x0000fca5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x80f5,	// (0x0000fca5) bg_vkb2_fuc_pane_cp02

0x8a6e,	// (0x0001061e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8a6e,	// (0x0001061e) vkb2_top_cell_right_narrow_pane_g1

0xf351,	// (0x00016f01) aid_touch_area_decrease_ParamLimits

0xf351,	// (0x00016f01) aid_touch_area_decrease

0xf369,	// (0x00016f19) aid_touch_area_increase_ParamLimits

0xf369,	// (0x00016f19) aid_touch_area_increase

0xf375,	// (0x00016f25) aid_touch_area_mute_ParamLimits

0xf375,	// (0x00016f25) aid_touch_area_mute

0xf391,	// (0x00016f41) aid_touch_area_slider_ParamLimits

0xf391,	// (0x00016f41) aid_touch_area_slider

0xf477,	// (0x00017027) popup_slider_window_g4_ParamLimits

0xf477,	// (0x00017027) popup_slider_window_g4

0xf483,	// (0x00017033) popup_slider_window_g5_ParamLimits

0xf483,	// (0x00017033) popup_slider_window_g5

0xf4a5,	// (0x00017055) popup_slider_window_g6_ParamLimits

0xf4a5,	// (0x00017055) popup_slider_window_g6

0xf4e3,	// (0x00017093) popup_slider_window_t2_ParamLimits

0xf4e3,	// (0x00017093) popup_slider_window_t2

0x0001,

0xfce4,	// (0x00017894) popup_slider_window_t_ParamLimits

0xfce4,	// (0x00017894) popup_slider_window_t

0xf4fb,	// (0x000170ab) slider_pane_ParamLimits

0xf4fb,	// (0x000170ab) slider_pane

0x121c,	// (0x00008dcc) slider_pane_g1_ParamLimits

0x121c,	// (0x00008dcc) slider_pane_g1

0x1230,	// (0x00008de0) slider_pane_g2_ParamLimits

0x1230,	// (0x00008de0) slider_pane_g2

0x1246,	// (0x00008df6) slider_pane_g3_ParamLimits

0x1246,	// (0x00008df6) slider_pane_g3

0x0003,

0xfdfb,	// (0x000179ab) slider_pane_g_ParamLimits

0xfdfb,	// (0x000179ab) slider_pane_g

0x7b1d,	// (0x0000f6cd) popup_tb_float_extension_window_ParamLimits

0x7b1d,	// (0x0000f6cd) popup_tb_float_extension_window

0x1272,	// (0x00008e22) aid_size_cell_tb_float_ext

0x8fef,	// (0x00010b9f) bg_popup_sub_window_cp28

0x127d,	// (0x00008e2d) grid_tb_float_ext_pane

0x1285,	// (0x00008e35) cell_tb_float_ext_pane_ParamLimits

0x1285,	// (0x00008e35) cell_tb_float_ext_pane

0x129d,	// (0x00008e4d) cell_tb_float_ext_pane_g1

0x12a6,	// (0x00008e56) grid_highlight_pane_cp12

0x823e,	// (0x0000fdee) cell_last_hwr_side_pane_ParamLimits

0x823e,	// (0x0000fdee) cell_last_hwr_side_pane

0xdc04,	// (0x000157b4) cell_last_hwr_side_pane_g1

0x12af,	// (0x00008e5f) cell_last_hwr_side_pane_g2

0x0001,

0xfe04,	// (0x000179b4) cell_last_hwr_side_pane_g

0x8944,	// (0x000104f4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8944,	// (0x000104f4) vkb2_area_bottom_space_btn_pane

0x8348,	// (0x0000fef8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0d3f,	// (0x000088ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8bbc,	// (0x0001076c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8bd2,	// (0x00010782) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8bd2,	// (0x00010782) vkb2_area_bottom_space_btn_pane_g1

0x8c08,	// (0x000107b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8c08,	// (0x000107b8) vkb2_area_bottom_space_btn_pane_g2

0x8c3e,	// (0x000107ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8c3e,	// (0x000107ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe09,	// (0x000179b9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe09,	// (0x000179b9) vkb2_area_bottom_space_btn_pane_g

0x81b2,	// (0x0000fd62) cel_fep_hwr_func_pane_ParamLimits

0x81b2,	// (0x0000fd62) cel_fep_hwr_func_pane

0x81ee,	// (0x0000fd9e) cell_hwr_side_button_pane_ParamLimits

0x81ee,	// (0x0000fd9e) cell_hwr_side_button_pane

0x020d,	// (0x00007dbd) aid_area_touch_clock_ParamLimits

0x9467,	// (0x00011017) bg_uniindi_top_pane_ParamLimits

0x021f,	// (0x00007dcf) uniindi_top_pane_g1_ParamLimits

0x0235,	// (0x00007de5) uniindi_top_pane_g2_ParamLimits

0x0241,	// (0x00007df1) uniindi_top_pane_g3_ParamLimits

0x0252,	// (0x00007e02) uniindi_top_pane_g4_ParamLimits

0xfd1c,	// (0x000178cc) uniindi_top_pane_g_ParamLimits

0x025f,	// (0x00007e0f) uniindi_top_pane_t1_ParamLimits

0x9467,	// (0x00011017) bg_vkb2_func_pane_cp01_ParamLimits

0x9467,	// (0x00011017) bg_vkb2_func_pane_cp01

0x136a,	// (0x00008f1a) cel_fep_hwr_func_pane_g1_ParamLimits

0x136a,	// (0x00008f1a) cel_fep_hwr_func_pane_g1

0x9467,	// (0x00011017) bg_vkb2_func_pane_cp02_ParamLimits

0x9467,	// (0x00011017) bg_vkb2_func_pane_cp02

0x136a,	// (0x00008f1a) cell_hwr_side_button_pane_g1_ParamLimits

0x136a,	// (0x00008f1a) cell_hwr_side_button_pane_g1

0xb33c,	// (0x00012eec) status_pane_g4_ParamLimits

0xb33c,	// (0x00012eec) status_pane_g4

0xb354,	// (0x00012f04) status_pane_t1

0xd9e6,	// (0x00015596) form2_midp_gauge_slider_cont_pane

0xd9ee,	// (0x0001559e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xda00,	// (0x000155b0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xda12,	// (0x000155c2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae3,	// (0x00017693) form2_midp_gauge_slider_pane_t_ParamLimits

0xda24,	// (0x000155d4) form2_midp_slider_pane_ParamLimits

0x85ff,	// (0x000101af) aid_size_cell_func_vkb2_ParamLimits

0x85ff,	// (0x000101af) aid_size_cell_func_vkb2

0x125e,	// (0x00008e0e) slider_pane_g4_ParamLimits

0x125e,	// (0x00008e0e) slider_pane_g4

0x8c84,	// (0x00010834) form2_midp_gauge_slider_pane_t2_cp01

0x8c92,	// (0x00010842) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8c92,	// (0x00010842) form2_midp_gauge_slider_pane_t3_cp01

0x8caf,	// (0x0001085f) form2_midp_slider_pane_cp01

0x8fef,	// (0x00010b9f) navi_smil_pane

0x13d7,	// (0x00008f87) navi_smil_pane_g1

0x13df,	// (0x00008f8f) navi_smil_pane_t1

0x13ac,	// (0x00008f5c) form2_midp_slider_pane_g1

0x13b5,	// (0x00008f65) form2_midp_slider_pane_g2

0x13bd,	// (0x00008f6d) form2_midp_slider_pane_g3

0x13ac,	// (0x00008f5c) form2_midp_slider_pane_g4

0x13c5,	// (0x00008f75) form2_midp_slider_pane_g5

0x0004,

0xfe12,	// (0x000179c2) form2_midp_slider_pane_g

0x8c74,	// (0x00010824) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8c74,	// (0x00010824) vkb2_area_bottom_space_btn_pane_g4

0xb17e,	// (0x00012d2e) lc0_navi_pane_ParamLimits

0xb17e,	// (0x00012d2e) lc0_navi_pane

0xb1f4,	// (0x00012da4) lc0_stat_indi_pane_ParamLimits

0xb1f4,	// (0x00012da4) lc0_stat_indi_pane

0xb20b,	// (0x00012dbb) ls0_title_pane_ParamLimits

0xb20b,	// (0x00012dbb) ls0_title_pane

0x9ed0,	// (0x00011a80) bg_popup_sub_pane_cp14_ParamLimits

0x01f4,	// (0x00007da4) list_uniindi_pane_ParamLimits

0x0200,	// (0x00007db0) uniindi_top_pane_ParamLimits

0x029b,	// (0x00007e4b) list_single_uniindi_pane_g1_ParamLimits

0x02ae,	// (0x00007e5e) list_single_uniindi_pane_t1_ParamLimits

0x8cb8,	// (0x00010868) lc0_stat_clock_pane_ParamLimits

0x8cb8,	// (0x00010868) lc0_stat_clock_pane

0x1407,	// (0x00008fb7) lc0_stat_indi_pane_g1_ParamLimits

0x1407,	// (0x00008fb7) lc0_stat_indi_pane_g1

0x13fa,	// (0x00008faa) lc0_stat_indi_pane_g2_ParamLimits

0x13fa,	// (0x00008faa) lc0_stat_indi_pane_g2

0x0001,

0xfe1d,	// (0x000179cd) lc0_stat_indi_pane_g_ParamLimits

0xfe1d,	// (0x000179cd) lc0_stat_indi_pane_g

0x8cc5,	// (0x00010875) lc0_uni_indicator_pane_ParamLimits

0x8cc5,	// (0x00010875) lc0_uni_indicator_pane

0x1421,	// (0x00008fd1) ls0_title_pane_g1_ParamLimits

0x1421,	// (0x00008fd1) ls0_title_pane_g1

0x1435,	// (0x00008fe5) ls0_title_pane_t1_ParamLimits

0x1435,	// (0x00008fe5) ls0_title_pane_t1

0x8cd2,	// (0x00010882) lc0_uni_indicator_pane_g1_ParamLimits

0x8cd2,	// (0x00010882) lc0_uni_indicator_pane_g1

0x147d,	// (0x0000902d) lc0_stat_clock_pane_t1

0x6f31,	// (0x0000eae1) main_ai5_pane

0x148b,	// (0x0000903b) ai5_sk_pane_ParamLimits

0x148b,	// (0x0000903b) ai5_sk_pane

0x1498,	// (0x00009048) cell_ai5_widget_pane_ParamLimits

0x1498,	// (0x00009048) cell_ai5_widget_pane

0x150e,	// (0x000090be) aid_size_cell_widget_grid

0x151b,	// (0x000090cb) bg_ai5_widget_pane_ParamLimits

0x151b,	// (0x000090cb) bg_ai5_widget_pane

0x1570,	// (0x00009120) cell_ai5_widget_pane_g2

0x1584,	// (0x00009134) cell_ai5_widget_pane_g3

0x159e,	// (0x0000914e) cell_ai5_widget_pane_g4

0x15ae,	// (0x0000915e) cell_ai5_widget_pane_g5

0x15be,	// (0x0000916e) cell_ai5_widget_pane_g6

0x15ca,	// (0x0000917a) cell_ai5_widget_pane_g7

0x1612,	// (0x000091c2) cell_ai5_widget_pane_t1_ParamLimits

0x1612,	// (0x000091c2) cell_ai5_widget_pane_t1

0x162f,	// (0x000091df) cell_ai5_widget_pane_t2_ParamLimits

0x162f,	// (0x000091df) cell_ai5_widget_pane_t2

0x1647,	// (0x000091f7) cell_ai5_widget_pane_t3_ParamLimits

0x1647,	// (0x000091f7) cell_ai5_widget_pane_t3

0x165f,	// (0x0000920f) cell_ai5_widget_pane_t4_ParamLimits

0x165f,	// (0x0000920f) cell_ai5_widget_pane_t4

0x1685,	// (0x00009235) cell_ai5_widget_pane_t5_ParamLimits

0x1685,	// (0x00009235) cell_ai5_widget_pane_t5

0x16a4,	// (0x00009254) cell_ai5_widget_pane_t6_ParamLimits

0x16a4,	// (0x00009254) cell_ai5_widget_pane_t6

0x16b6,	// (0x00009266) cell_ai5_widget_pane_t7_ParamLimits

0x16b6,	// (0x00009266) cell_ai5_widget_pane_t7

0x16cf,	// (0x0000927f) cell_ai5_widget_pane_t8_ParamLimits

0x16cf,	// (0x0000927f) cell_ai5_widget_pane_t8

0x0009,

0xfe37,	// (0x000179e7) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x000179e7) cell_ai5_widget_pane_t

0x172e,	// (0x000092de) grid_ai5_widget_pane

0x9ed0,	// (0x00011a80) highlight_cell_ai5_widget_pane_ParamLimits

0x9ed0,	// (0x00011a80) highlight_cell_ai5_widget_pane

0x173a,	// (0x000092ea) ai5_sk_left_pane

0x1744,	// (0x000092f4) ai5_sk_middle_pane

0x174e,	// (0x000092fe) ai5_sk_right_pane

0x1758,	// (0x00009308) bg_ai5_widget_pane_g1_ParamLimits

0x1758,	// (0x00009308) bg_ai5_widget_pane_g1

0x1764,	// (0x00009314) bg_ai5_widget_pane_g2_ParamLimits

0x1764,	// (0x00009314) bg_ai5_widget_pane_g2

0x1770,	// (0x00009320) bg_ai5_widget_pane_g3_ParamLimits

0x1770,	// (0x00009320) bg_ai5_widget_pane_g3

0x177c,	// (0x0000932c) bg_ai5_widget_pane_g4_ParamLimits

0x177c,	// (0x0000932c) bg_ai5_widget_pane_g4

0x1788,	// (0x00009338) bg_ai5_widget_pane_g5_ParamLimits

0x1788,	// (0x00009338) bg_ai5_widget_pane_g5

0x1794,	// (0x00009344) bg_ai5_widget_pane_g6_ParamLimits

0x1794,	// (0x00009344) bg_ai5_widget_pane_g6

0x17a0,	// (0x00009350) bg_ai5_widget_pane_g7_ParamLimits

0x17a0,	// (0x00009350) bg_ai5_widget_pane_g7

0x17ac,	// (0x0000935c) bg_ai5_widget_pane_g8_ParamLimits

0x17ac,	// (0x0000935c) bg_ai5_widget_pane_g8

0x17b8,	// (0x00009368) bg_ai5_widget_pane_g9_ParamLimits

0x17b8,	// (0x00009368) bg_ai5_widget_pane_g9

0x0008,

0xfe4c,	// (0x000179fc) bg_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x000179fc) bg_ai5_widget_pane_g

0x17e8,	// (0x00009398) cell_shortcut_ai5_widget_pane_ParamLimits

0x17e8,	// (0x00009398) cell_shortcut_ai5_widget_pane

0x17f9,	// (0x000093a9) bg_cell_shortcut_ai5_widget_pane

0x9621,	// (0x000111d1) cell_grid_ai5_widget_pane_g1

0xac90,	// (0x00012840) highlight_cell_shortcut_ai5_widget_pane

0xb4b0,	// (0x00013060) ai5_sk_left_pane_g1

0x1801,	// (0x000093b1) ai5_sk_left_pane_g2

0x1809,	// (0x000093b9) ai5_sk_left_pane_g3

0x1811,	// (0x000093c1) ai5_sk_left_pane_g4

0x0003,

0xfe5f,	// (0x00017a0f) ai5_sk_left_pane_g

0x1819,	// (0x000093c9) ai5_sk_left_pane_t1

0xb4b8,	// (0x00013068) ai5_sk_right_pane_g1

0x1827,	// (0x000093d7) ai5_sk_right_pane_g2

0x182f,	// (0x000093df) ai5_sk_right_pane_g3

0x1837,	// (0x000093e7) ai5_sk_right_pane_g4

0x0003,

0xfe68,	// (0x00017a18) ai5_sk_right_pane_g

0x183f,	// (0x000093ef) ai5_sk_right_pane_t1

0xb4b8,	// (0x00013068) ai5_sk_middle_pane_g1

0xb4b0,	// (0x00013060) ai5_sk_middle_pane_g2

0xb4d0,	// (0x00013080) ai5_sk_middle_pane_g3

0x182f,	// (0x000093df) ai5_sk_middle_pane_g4

0x1809,	// (0x000093b9) ai5_sk_middle_pane_g5

0x184d,	// (0x000093fd) ai5_sk_middle_pane_g6

0x1855,	// (0x00009405) ai5_sk_middle_pane_g7

0x0006,

0xfe71,	// (0x00017a21) ai5_sk_middle_pane_g

0xb025,	// (0x00012bd5) aid_touch_area_size_lc0_ParamLimits

0xb025,	// (0x00012bd5) aid_touch_area_size_lc0

0x8377,	// (0x0000ff27) cell_hwr_candidate_pane_t1_ParamLimits

0xb03f,	// (0x00012bef) aid_touch_navi_pane

0xb2ee,	// (0x00012e9e) status_dt_navi_pane_ParamLimits

0xb2ee,	// (0x00012e9e) status_dt_navi_pane

0xb2fb,	// (0x00012eab) status_dt_sta_pane_ParamLimits

0xb2fb,	// (0x00012eab) status_dt_sta_pane

0x185d,	// (0x0000940d) dt_sta_controll_pane

0x186a,	// (0x0000941a) dt_sta_indi_pane

0x187b,	// (0x0000942b) dt_sta_title_pane

0x9467,	// (0x00011017) bg_dt_sta_indi_pane_ParamLimits

0x9467,	// (0x00011017) bg_dt_sta_indi_pane

0x188e,	// (0x0000943e) dt_sta_battery_pane

0x1896,	// (0x00009446) dt_sta_indi_pane_g1

0x189f,	// (0x0000944f) dt_sta_indi_pane_g2

0x18a8,	// (0x00009458) dt_sta_indi_pane_g3

0x0002,

0xfe80,	// (0x00017a30) dt_sta_indi_pane_g

0x18b1,	// (0x00009461) dt_sta_signal_pane

0x9ed0,	// (0x00011a80) bg_dt_sta_title_pane_ParamLimits

0x9ed0,	// (0x00011a80) bg_dt_sta_title_pane

0x18ba,	// (0x0000946a) dt_sta_title_pane_g1

0x18c2,	// (0x00009472) dt_sta_title_pane_t1_ParamLimits

0x18c2,	// (0x00009472) dt_sta_title_pane_t1

0x8fef,	// (0x00010b9f) bg_dt_sta_control_pane

0x18d7,	// (0x00009487) dt_sta_controll_pane_g1

0x18e0,	// (0x00009490) bg_dt_sta_title_pane_g1

0x18e9,	// (0x00009499) bg_dt_sta_title_pane_g2

0x18f2,	// (0x000094a2) bg_dt_sta_title_pane_g3

0x0002,

0xfe87,	// (0x00017a37) bg_dt_sta_title_pane_g

0xdc04,	// (0x000157b4) bg_dt_sta_indi_pane_g1

0x18fb,	// (0x000094ab) dt_sta_signal_pane_g1

0x1903,	// (0x000094b3) dt_sta_signal_pane_g2

0x0001,

0xfe8e,	// (0x00017a3e) dt_sta_signal_pane_g

0x190b,	// (0x000094bb) dt_sta_battery_pane_g1

0x1914,	// (0x000094c4) dt_sta_battery_pane_t1

0xdc04,	// (0x000157b4) bg_dt_sta_control_pane_g1

0xa785,	// (0x00012335) fep_china_uni_eep_pane

0xa78d,	// (0x0001233d) fep_china_uni_entry_pane_ParamLimits

0xa79d,	// (0x0001234d) popup_fep_china_uni_window_g1_ParamLimits

0xa7ad,	// (0x0001235d) popup_fep_china_uni_window_g2_ParamLimits

0xa7ad,	// (0x0001235d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x000172c8) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x000172c8) popup_fep_china_uni_window_g

0x1923,	// (0x000094d3) fep_china_uni_eep_pane_g1

0x192b,	// (0x000094db) fep_china_uni_eep_pane_t1

0x13ce,	// (0x00008f7e) aid_touch_area_size_smil_player

0xb176,	// (0x00012d26) lc0_clock_pane

0xb348,	// (0x00012ef8) status_pane_g5_ParamLimits

0xb348,	// (0x00012ef8) status_pane_g5

0x7891,	// (0x0000f441) popup_keymap_window

0xb310,	// (0x00012ec0) status_icon_pane

0x1584,	// (0x00009134) cell_ai5_widget_pane_g3_ParamLimits

0x159e,	// (0x0000914e) cell_ai5_widget_pane_g4_ParamLimits

0x15ae,	// (0x0000915e) cell_ai5_widget_pane_g5_ParamLimits

0x15d6,	// (0x00009186) cell_ai5_widget_pane_g8_ParamLimits

0x15d6,	// (0x00009186) cell_ai5_widget_pane_g8

0x15ea,	// (0x0000919a) cell_ai5_widget_pane_g9_ParamLimits

0x15ea,	// (0x0000919a) cell_ai5_widget_pane_g9

0x15fe,	// (0x000091ae) cell_ai5_widget_pane_g10_ParamLimits

0x15fe,	// (0x000091ae) cell_ai5_widget_pane_g10

0x193a,	// (0x000094ea) status_icon_pane_g1

0x8fef,	// (0x00010b9f) bg_popup_sub_pane_cp13

0x1942,	// (0x000094f2) popup_keymap_window_t1

0xaf55,	// (0x00012b05) control_pane_g6_ParamLimits

0xaf55,	// (0x00012b05) control_pane_g6

0xaf62,	// (0x00012b12) control_pane_g7_ParamLimits

0xaf62,	// (0x00012b12) control_pane_g7

0xaf6f,	// (0x00012b1f) control_pane_g8_ParamLimits

0xaf6f,	// (0x00012b1f) control_pane_g8

0x185d,	// (0x0000940d) dt_sta_controll_pane_ParamLimits

0x186a,	// (0x0000941a) dt_sta_indi_pane_ParamLimits

0x187b,	// (0x0000942b) dt_sta_title_pane_ParamLimits

0x98ec,	// (0x0001149c) aid_size_touch_scroll_bar_cale

0x7008,	// (0x0000ebb8) popup_discreet_window_ParamLimits

0x7008,	// (0x0000ebb8) popup_discreet_window

0x706c,	// (0x0000ec1c) popup_sk_window

0xbb8e,	// (0x0001373e) bg_popup_sub_pane_cp28_ParamLimits

0xbb8e,	// (0x0001373e) bg_popup_sub_pane_cp28

0x1950,	// (0x00009500) popup_discreet_window_g1_ParamLimits

0x1950,	// (0x00009500) popup_discreet_window_g1

0x1970,	// (0x00009520) popup_discreet_window_t1_ParamLimits

0x1970,	// (0x00009520) popup_discreet_window_t1

0x198e,	// (0x0000953e) popup_discreet_window_t2_ParamLimits

0x198e,	// (0x0000953e) popup_discreet_window_t2

0x0002,

0xfe93,	// (0x00017a43) popup_discreet_window_t_ParamLimits

0xfe93,	// (0x00017a43) popup_discreet_window_t

0x8ce4,	// (0x00010894) popup_sk_window_g1

0x8ced,	// (0x0001089d) popup_sk_window_g2

0x0001,

0xfe9a,	// (0x00017a4a) popup_sk_window_g

0x8cf6,	// (0x000108a6) popup_sk_window_t1

0x8d04,	// (0x000108b4) popup_sk_window_t1_copy1

0x1570,	// (0x00009120) cell_ai5_widget_pane_g2_ParamLimits

0x16e1,	// (0x00009291) cell_ai5_widget_pane_t9_ParamLimits

0x16e1,	// (0x00009291) cell_ai5_widget_pane_t9

0x8fef,	// (0x00010b9f) main_fep_fshwr2_pane

0x8d12,	// (0x000108c2) aid_fshwr2_btn_pane

0x8d1e,	// (0x000108ce) aid_fshwr2_syb_pane

0x8d2a,	// (0x000108da) aid_fshwr2_txt_pane

0x8d36,	// (0x000108e6) fshwr2_func_candi_pane

0x8d47,	// (0x000108f7) fshwr2_hwr_syb_pane

0x8d53,	// (0x00010903) fshwr2_icf_pane

0x6f31,	// (0x0000eae1) fshwr2_icf_bg_pane

0x8d78,	// (0x00010928) fshwr2_icf_pane_t1_ParamLimits

0x8d78,	// (0x00010928) fshwr2_icf_pane_t1

0xa68b,	// (0x0001223b) fshwr2_func_candi_pane_g1

0x1a8c,	// (0x0000963c) fshwr2_func_candi_row_pane_ParamLimits

0x1a8c,	// (0x0000963c) fshwr2_func_candi_row_pane

0x8d90,	// (0x00010940) cell_fshwr2_syb_pane_ParamLimits

0x8d90,	// (0x00010940) cell_fshwr2_syb_pane

0x8348,	// (0x0000fef8) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8348,	// (0x0000fef8) fshwr2_hwr_syb_pane_g1

0x6f31,	// (0x0000eae1) bg_popup_call_pane_cp01

0x8da4,	// (0x00010954) fshwr2_func_candi_cell_pane_ParamLimits

0x8da4,	// (0x00010954) fshwr2_func_candi_cell_pane

0xc1aa,	// (0x00013d5a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc1aa,	// (0x00013d5a) fshwr2_func_candi_cell_bg_pane

0x8de3,	// (0x00010993) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8de3,	// (0x00010993) fshwr2_func_candi_cell_pane_g1

0x8e03,	// (0x000109b3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8e03,	// (0x000109b3) fshwr2_func_candi_cell_pane_t1

0x6f31,	// (0x0000eae1) bg_button_pane_cp08

0xac90,	// (0x00012840) cell_fshwr2_syb_bg_pane

0x8e16,	// (0x000109c6) cell_fshwr2_syb_bg_pane_g1

0x8e1e,	// (0x000109ce) cell_fshwr2_syb_bg_pane_t1

0x9ed0,	// (0x00011a80) main_tmo_pane

0xc636,	// (0x000141e6) uni_indicator_pane_g1_ParamLimits

0xc64c,	// (0x000141fc) uni_indicator_pane_g2_ParamLimits

0xc662,	// (0x00014212) uni_indicator_pane_g3_ParamLimits

0xc677,	// (0x00014227) uni_indicator_pane_g4_ParamLimits

0xc677,	// (0x00014227) uni_indicator_pane_g4

0xc68b,	// (0x0001423b) uni_indicator_pane_g5_ParamLimits

0xc68b,	// (0x0001423b) uni_indicator_pane_g5

0xc68b,	// (0x0001423b) uni_indicator_pane_g6_ParamLimits

0xc68b,	// (0x0001423b) uni_indicator_pane_g6

0xf910,	// (0x000174c0) uni_indicator_pane_g_ParamLimits

0xf335,	// (0x00016ee5) popup_tmo_note_window_ParamLimits

0xf335,	// (0x00016ee5) popup_tmo_note_window

0x85db,	// (0x0001018b) fshwr2_bg_pane

0x8df4,	// (0x000109a4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8df4,	// (0x000109a4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9f,	// (0x00017a4f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9f,	// (0x00017a4f) fshwr2_func_candi_cell_pane_g

0x8330,	// (0x0000fee0) bg_popup_window_pane_cp01

0x8e2d,	// (0x000109dd) bg_popup_window_pane_g1_cp01

0x1b42,	// (0x000096f2) bg_popup_window_pane_cp22_ParamLimits

0x1b42,	// (0x000096f2) bg_popup_window_pane_cp22

0x1b50,	// (0x00009700) listscroll_tmo_link_pane_ParamLimits

0x1b50,	// (0x00009700) listscroll_tmo_link_pane

0x1b90,	// (0x00009740) popup_tmo_note_window_g1_ParamLimits

0x1b90,	// (0x00009740) popup_tmo_note_window_g1

0x1b9d,	// (0x0000974d) tmo_note_info_pane_ParamLimits

0x1b9d,	// (0x0000974d) tmo_note_info_pane

0x1bb7,	// (0x00009767) list_tmo_note_info_pane_g1_ParamLimits

0x1bb7,	// (0x00009767) list_tmo_note_info_pane_g1

0x1bce,	// (0x0000977e) list_tmo_note_info_pane_g2_ParamLimits

0x1bce,	// (0x0000977e) list_tmo_note_info_pane_g2

0x0001,

0xfea4,	// (0x00017a54) list_tmo_note_info_pane_g_ParamLimits

0xfea4,	// (0x00017a54) list_tmo_note_info_pane_g

0x1bea,	// (0x0000979a) list_tmo_note_info_text_pane_ParamLimits

0x1bea,	// (0x0000979a) list_tmo_note_info_text_pane

0x1c6b,	// (0x0000981b) list_tmo_link_pane

0x1c78,	// (0x00009828) scroll_pane_cp20

0x1c85,	// (0x00009835) list_single_tmo_link_pane_ParamLimits

0x1c85,	// (0x00009835) list_single_tmo_link_pane

0x1c95,	// (0x00009845) list_single_tmo_link_pane_t1

0x1ca3,	// (0x00009853) list_tmo_note_info_text_pane_t1_ParamLimits

0x1ca3,	// (0x00009853) list_tmo_note_info_text_pane_t1

0xa0f3,	// (0x00011ca3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa0f3,	// (0x00011ca3) aid_size_touch_scroll_bar_cp01

0x9f6d,	// (0x00011b1d) aid_size_touch_slider_marker

0x7058,	// (0x0000ec08) popup_settings_window_ParamLimits

0x7058,	// (0x0000ec08) popup_settings_window

0xaff9,	// (0x00012ba9) popup_candi_list_indi_window

0xb03f,	// (0x00012bef) aid_touch_navi_pane_ParamLimits

0x8537,	// (0x000100e7) rs_clock_indi_pane

0x8540,	// (0x000100f0) sctrl_sk_bottom_pane_ParamLimits

0x8551,	// (0x00010101) sctrl_sk_top_pane_ParamLimits

0x8659,	// (0x00010209) popup_fep_tooltip_window

0x150e,	// (0x000090be) aid_size_cell_widget_grid_ParamLimits

0x155c,	// (0x0000910c) cell_ai5_widget_pane_g1_ParamLimits

0x155c,	// (0x0000910c) cell_ai5_widget_pane_g1

0x15be,	// (0x0000916e) cell_ai5_widget_pane_g6_ParamLimits

0x15ca,	// (0x0000917a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe22,	// (0x000179d2) cell_ai5_widget_pane_g_ParamLimits

0xfe22,	// (0x000179d2) cell_ai5_widget_pane_g

0x1710,	// (0x000092c0) cell_ai5_widget_pane_t10_ParamLimits

0x1710,	// (0x000092c0) cell_ai5_widget_pane_t10

0x172e,	// (0x000092de) grid_ai5_widget_pane_ParamLimits

0x17c4,	// (0x00009374) cell_contacts_ai5_widget_pane_ParamLimits

0x17c4,	// (0x00009374) cell_contacts_ai5_widget_pane

0x19a3,	// (0x00009553) popup_discreet_window_t3_ParamLimits

0x19a3,	// (0x00009553) popup_discreet_window_t3

0x8d66,	// (0x00010916) popup_fshwr2_char_preview_window_ParamLimits

0x8d66,	// (0x00010916) popup_fshwr2_char_preview_window

0x1c08,	// (0x000097b8) tmo_note_info_pane_t1

0x1c1d,	// (0x000097cd) tmo_note_info_pane_t2

0x1c32,	// (0x000097e2) tmo_note_info_pane_t3

0x1c47,	// (0x000097f7) tmo_note_info_pane_t4

0x1c59,	// (0x00009809) tmo_note_info_pane_t5

0x0004,

0xfea9,	// (0x00017a59) tmo_note_info_pane_t

0x1c6b,	// (0x0000981b) list_tmo_link_pane_ParamLimits

0x1c78,	// (0x00009828) scroll_pane_cp20_ParamLimits

0x6f31,	// (0x0000eae1) bg_popup_fep_char_preview_window_cp01

0x1cbc,	// (0x0000986c) popup_fshwr2_char_preview_window_t1

0x1cca,	// (0x0000987a) popup_candi_list_indi_window_g1

0x1cd3,	// (0x00009883) bg_cell_contacts_ai5_widget_pane

0x1cdf,	// (0x0000988f) cell_contacts_ai5_widget_pane_g1

0x1cf4,	// (0x000098a4) cell_contacts_ai5_widget_pane_g2

0x1d00,	// (0x000098b0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb4,	// (0x00017a64) cell_contacts_ai5_widget_pane_g

0x1d0c,	// (0x000098bc) cell_contacts_ai5_widget_pane_t1

0x9ed0,	// (0x00011a80) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1d81,	// (0x00009931) settings_container_pane

0xac90,	// (0x00012840) listscroll_set_pane_copy1

0xd162,	// (0x00014d12) scroll_pane_cp121_copy1

0x1d8d,	// (0x0000993d) set_content_pane_copy1

0x1d95,	// (0x00009945) aid_height_set_list_copy1_ParamLimits

0x1d95,	// (0x00009945) aid_height_set_list_copy1

0xc862,	// (0x00014412) aid_size_parent_copy1_ParamLimits

0xc862,	// (0x00014412) aid_size_parent_copy1

0x1da1,	// (0x00009951) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1da1,	// (0x00009951) button_value_adjust_pane_cp6_copy1

0xafdf,	// (0x00012b8f) list_highlight_pane_cp2_copy1_ParamLimits

0xafdf,	// (0x00012b8f) list_highlight_pane_cp2_copy1

0x1db5,	// (0x00009965) list_set_pane_copy1_ParamLimits

0x1db5,	// (0x00009965) list_set_pane_copy1

0x1d1e,	// (0x000098ce) main_pane_set_t1_copy1_ParamLimits

0x1d1e,	// (0x000098ce) main_pane_set_t1_copy1

0x1d58,	// (0x00009908) main_pane_set_t2_copy1_ParamLimits

0x1d58,	// (0x00009908) main_pane_set_t2_copy1

0x1e43,	// (0x000099f3) main_pane_set_t3_copy1

0x1e51,	// (0x00009a01) main_pane_set_t4_copy1

0x1d75,	// (0x00009925) set_content_pane_g1_copy1_ParamLimits

0x1d75,	// (0x00009925) set_content_pane_g1_copy1

0x1e5f,	// (0x00009a0f) setting_code_pane_copy1

0x1e67,	// (0x00009a17) setting_slider_graphic_pane_copy1

0x1e67,	// (0x00009a17) setting_slider_pane_copy1

0x1e67,	// (0x00009a17) setting_text_pane_copy1

0x1e67,	// (0x00009a17) setting_volume_pane_copy1

0x1e6f,	// (0x00009a1f) settings_code_pane_cp2_copy1

0x1e77,	// (0x00009a27) settings_code_pane_cp_copy1_ParamLimits

0x1e77,	// (0x00009a27) settings_code_pane_cp_copy1

0x8e36,	// (0x000109e6) volume_set_pane_copy1

0x1e93,	// (0x00009a43) volume_set_pane_g10_copy1

0x1e9b,	// (0x00009a4b) volume_set_pane_g1_copy1

0x1ea3,	// (0x00009a53) volume_set_pane_g2_copy1

0x1eab,	// (0x00009a5b) volume_set_pane_g3_copy1

0x1eb3,	// (0x00009a63) volume_set_pane_g4_copy1

0x1ebb,	// (0x00009a6b) volume_set_pane_g5_copy1

0x1ec3,	// (0x00009a73) volume_set_pane_g6_copy1

0x1ecb,	// (0x00009a7b) volume_set_pane_g7_copy1

0x1ed3,	// (0x00009a83) volume_set_pane_g8_copy1

0x1edb,	// (0x00009a8b) volume_set_pane_g9_copy1

0x91c0,	// (0x00010d70) bg_set_opt_pane_cp_copy1_ParamLimits

0x91c0,	// (0x00010d70) bg_set_opt_pane_cp_copy1

0x7142,	// (0x0000ecf2) setting_slider_pane_t1_copy1_ParamLimits

0x7142,	// (0x0000ecf2) setting_slider_pane_t1_copy1

0x8e3e,	// (0x000109ee) setting_slider_pane_t2_copy1_ParamLimits

0x8e3e,	// (0x000109ee) setting_slider_pane_t2_copy1

0x8e57,	// (0x00010a07) setting_slider_pane_t3_copy1_ParamLimits

0x8e57,	// (0x00010a07) setting_slider_pane_t3_copy1

0x7188,	// (0x0000ed38) slider_set_pane_copy1_ParamLimits

0x7188,	// (0x0000ed38) slider_set_pane_copy1

0x9ff3,	// (0x00011ba3) set_opt_bg_pane_g1_copy2

0x9ffb,	// (0x00011bab) set_opt_bg_pane_g2_copy2

0x1f13,	// (0x00009ac3) set_opt_bg_pane_g3_copy2

0xa00b,	// (0x00011bbb) set_opt_bg_pane_g4_copy2

0xa013,	// (0x00011bc3) set_opt_bg_pane_g5_copy2

0xa01b,	// (0x00011bcb) set_opt_bg_pane_g6_copy2

0x1f1b,	// (0x00009acb) set_opt_bg_pane_g7_copy2

0x1f23,	// (0x00009ad3) set_opt_bg_pane_g8_copy2

0x1f2b,	// (0x00009adb) set_opt_bg_pane_g9_copy2

0x7f1b,	// (0x0000facb) aid_size_touch_slider_mark_copy1_ParamLimits

0x7f1b,	// (0x0000facb) aid_size_touch_slider_mark_copy1

0xc998,	// (0x00014548) slider_set_pane_g1_copy1

0xc9ba,	// (0x0001456a) slider_set_pane_g2_copy1

0x7f3b,	// (0x0000faeb) slider_set_pane_g3_copy1_ParamLimits

0x7f3b,	// (0x0000faeb) slider_set_pane_g3_copy1

0x7f4f,	// (0x0000faff) slider_set_pane_g4_copy1_ParamLimits

0x7f4f,	// (0x0000faff) slider_set_pane_g4_copy1

0x7f67,	// (0x0000fb17) slider_set_pane_g5_copy1_ParamLimits

0x7f67,	// (0x0000fb17) slider_set_pane_g5_copy1

0x7f3b,	// (0x0000faeb) slider_set_pane_g6_copy1_ParamLimits

0x7f3b,	// (0x0000faeb) slider_set_pane_g6_copy1

0x8e6e,	// (0x00010a1e) slider_set_pane_g7_copy1_ParamLimits

0x8e6e,	// (0x00010a1e) slider_set_pane_g7_copy1

0x90e0,	// (0x00010c90) bg_set_opt_pane_cp2_copy1

0x9202,	// (0x00010db2) setting_slider_graphic_pane_g1_copy1

0x8e84,	// (0x00010a34) setting_slider_graphic_pane_t1_copy1

0x8e93,	// (0x00010a43) setting_slider_graphic_pane_t2_copy1

0x8ea2,	// (0x00010a52) slider_set_pane_cp_copy1

0x1f77,	// (0x00009b27) input_focus_pane_cp1_copy1

0x1f80,	// (0x00009b30) list_set_text_pane_copy1

0x1f88,	// (0x00009b38) setting_text_pane_g1_copy1

0x1f91,	// (0x00009b41) set_text_pane_t1_copy1

0x1f77,	// (0x00009b27) input_focus_pane_cp2_copy1

0x1f88,	// (0x00009b38) setting_code_pane_g1_copy1

0x1faa,	// (0x00009b5a) setting_code_pane_t1_copy1

0x1fb8,	// (0x00009b68) list_set_graphic_pane_copy1

0x90e0,	// (0x00010c90) bg_set_opt_pane_cp4_copy1

0x1fcc,	// (0x00009b7c) list_set_graphic_pane_g1_copy1_ParamLimits

0x1fcc,	// (0x00009b7c) list_set_graphic_pane_g1_copy1

0x1fd8,	// (0x00009b88) list_set_graphic_pane_g2_copy1

0xaa02,	// (0x000125b2) list_set_graphic_pane_t1_copy1_ParamLimits

0xaa02,	// (0x000125b2) list_set_graphic_pane_t1_copy1

0xdc04,	// (0x000157b4) rs_clock_indi_pane_g1

0x1fe0,	// (0x00009b90) rs_clock_indi_pane_t1

0x1fee,	// (0x00009b9e) rs_indi_pane

0x1ff6,	// (0x00009ba6) rs_indi_pane_g1

0x1fff,	// (0x00009baf) rs_indi_pane_g2

0x1cca,	// (0x0000987a) rs_indi_pane_g3

0x0002,

0xfebb,	// (0x00017a6b) rs_indi_pane_g

0xac90,	// (0x00012840) bg_popup_preview_window_pane_cp03

0x2008,	// (0x00009bb8) popup_fep_tooltip_window_t1

0xe9e3,	// (0x00016593) popup_note2_window_g2_ParamLimits

0xe9e3,	// (0x00016593) popup_note2_window_g2

0x0001,

0xfc5b,	// (0x0001780b) popup_note2_window_g_ParamLimits

0xfc5b,	// (0x0001780b) popup_note2_window_g

0xefc4,	// (0x00016b74) bg_popup_sub_pane_cp11_ParamLimits

0xefd1,	// (0x00016b81) cell_ai3_links_pane_g1_ParamLimits

0xefe8,	// (0x00016b98) cell_ai3_links_pane_t1

0x1f91,	// (0x00009b41) set_text_pane_t1_copy1_ParamLimits

0xabb7,	// (0x00012767) cell_graphic_popup_pane_cp2_ParamLimits

0xabb7,	// (0x00012767) cell_graphic_popup_pane_cp2

0x2016,	// (0x00009bc6) cell_graphic_popup_pane_g1_cp2

0x979b,	// (0x0001134b) cell_graphic_popup_pane_g2_cp2

0x201e,	// (0x00009bce) cell_graphic_popup_pane_g3_cp2

0x2026,	// (0x00009bd6) cell_graphic_popup_pane_t2_cp2

0x97ac,	// (0x0001135c) grid_highlight_pane_cp3_cp2

0xa3dd,	// (0x00011f8d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9ed0,	// (0x00011a80) main_tmo_pane_ParamLimits

0xf32d,	// (0x00016edd) popup_tmo_big_image_note_window

0x154b,	// (0x000090fb) cell_ai5_widget_list_pane

0x1553,	// (0x00009103) cell_ai5_widget_lrg_icon_pane

0x1c08,	// (0x000097b8) tmo_note_info_pane_t1_ParamLimits

0x1c1d,	// (0x000097cd) tmo_note_info_pane_t2_ParamLimits

0x1c32,	// (0x000097e2) tmo_note_info_pane_t3_ParamLimits

0x1c47,	// (0x000097f7) tmo_note_info_pane_t4_ParamLimits

0x1c59,	// (0x00009809) tmo_note_info_pane_t5_ParamLimits

0xfea9,	// (0x00017a59) tmo_note_info_pane_t_ParamLimits

0x1d81,	// (0x00009931) settings_container_pane_ParamLimits

0x1f6f,	// (0x00009b1f) indicator_popup_pane_cp5

0x1f6f,	// (0x00009b1f) indicator_popup_pane_cp6

0x1fb8,	// (0x00009b68) list_set_graphic_pane_copy1_ParamLimits

0x8fef,	// (0x00010b9f) bg_popup_window_pane_cp23

0x2034,	// (0x00009be4) popup_tmo_big_image_note_window_g1

0x203d,	// (0x00009bed) popup_tmo_big_image_note_window_t1

0x204b,	// (0x00009bfb) popup_tmo_big_image_note_window_t2

0x2059,	// (0x00009c09) popup_tmo_big_image_note_window_t3

0x0002,

0xfec2,	// (0x00017a72) popup_tmo_big_image_note_window_t

0xdc04,	// (0x000157b4) cell_ai5_widget_lrg_icon_pane_g1

0x2067,	// (0x00009c17) cell_ai5_widget_lrg_icon_pane_t1

0x2075,	// (0x00009c25) cell_ai5_widget_list_row_pane_ParamLimits

0x2075,	// (0x00009c25) cell_ai5_widget_list_row_pane

0x208c,	// (0x00009c3c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x208c,	// (0x00009c3c) cell_ai5_widget_list_row_pane_g1

0x2099,	// (0x00009c49) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2099,	// (0x00009c49) cell_ai5_widget_list_row_pane_t1

0x20c7,	// (0x00009c77) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x20c7,	// (0x00009c77) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec9,	// (0x00017a79) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec9,	// (0x00017a79) cell_ai5_widget_list_row_pane_t

0x6f31,	// (0x0000eae1) main_fep_vtchi_ss_pane

0x210f,	// (0x00009cbf) popup_fep_char_pre_window

0x2117,	// (0x00009cc7) popup_fep_ituss_window

0x2134,	// (0x00009ce4) popup_fep_vkbss_window

0x215c,	// (0x00009d0c) grid_vkbss_keypad_pane_ParamLimits

0x215c,	// (0x00009d0c) grid_vkbss_keypad_pane

0x216c,	// (0x00009d1c) ituss_keypad_pane

0x8eb4,	// (0x00010a64) aid_vkbss_key_offset_ParamLimits

0x8eb4,	// (0x00010a64) aid_vkbss_key_offset

0x8ec0,	// (0x00010a70) cell_vkbss_key_pane_ParamLimits

0x8ec0,	// (0x00010a70) cell_vkbss_key_pane

0xb324,	// (0x00012ed4) bg_cell_vkbss_key_g1_ParamLimits

0xb324,	// (0x00012ed4) bg_cell_vkbss_key_g1

0x21a7,	// (0x00009d57) cell_vkbss_key_3p_pane_ParamLimits

0x21a7,	// (0x00009d57) cell_vkbss_key_3p_pane

0x21c1,	// (0x00009d71) cell_vkbss_key_g1_ParamLimits

0x21c1,	// (0x00009d71) cell_vkbss_key_g1

0x21db,	// (0x00009d8b) cell_vkbss_key_t1_ParamLimits

0x21db,	// (0x00009d8b) cell_vkbss_key_t1

0x8ed6,	// (0x00010a86) cell_ituss_key_pane_ParamLimits

0x8ed6,	// (0x00010a86) cell_ituss_key_pane

0x2217,	// (0x00009dc7) bg_cell_ituss_key_g1_ParamLimits

0x2217,	// (0x00009dc7) bg_cell_ituss_key_g1

0x2223,	// (0x00009dd3) cell_ituss_key_pane_g1_ParamLimits

0x2223,	// (0x00009dd3) cell_ituss_key_pane_g1

0x8ee7,	// (0x00010a97) cell_ituss_key_pane_g2_ParamLimits

0x8ee7,	// (0x00010a97) cell_ituss_key_pane_g2

0x0002,

0xfed0,	// (0x00017a80) cell_ituss_key_pane_g_ParamLimits

0xfed0,	// (0x00017a80) cell_ituss_key_pane_g

0x8f0f,	// (0x00010abf) cell_ituss_key_t1_ParamLimits

0x8f0f,	// (0x00010abf) cell_ituss_key_t1

0x8f49,	// (0x00010af9) cell_ituss_key_t2_ParamLimits

0x8f49,	// (0x00010af9) cell_ituss_key_t2

0x8f7a,	// (0x00010b2a) cell_ituss_key_t3_ParamLimits

0x8f7a,	// (0x00010b2a) cell_ituss_key_t3

0x8f49,	// (0x00010af9) cell_ituss_key_t4_ParamLimits

0x8f49,	// (0x00010af9) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x00017a87) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00017a87) cell_ituss_key_t

0x232f,	// (0x00009edf) cell_vkbss_key_3p_pane_g1

0x2327,	// (0x00009ed7) cell_vkbss_key_3p_pane_g2

0x231f,	// (0x00009ecf) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x00017a92) cell_vkbss_key_3p_pane_g

0xac90,	// (0x00012840) bg_popup_fep_char_preview_window_cp02

0x2337,	// (0x00009ee7) popup_fep_char_pre_window_t1

0x14fb,	// (0x000090ab) main_ai5_sk_pane

0x1cd3,	// (0x00009883) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1cdf,	// (0x0000988f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1cf4,	// (0x000098a4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1d00,	// (0x000098b0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb4,	// (0x00017a64) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1d0c,	// (0x000098bc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9ed0,	// (0x00011a80) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x2345,	// (0x00009ef5) main_ai5_sk_pane_g1

0xb9d8,	// (0x00013588) popup_query_code_window_g1

0x2129,	// (0x00009cd9) popup_fep_vkb_icf_pane

0x2146,	// (0x00009cf6) popup_fep_vtchi_icf_pane

0x234e,	// (0x00009efe) bg_icf_pane

0x235a,	// (0x00009f0a) list_vkb_icf_pane

0x2366,	// (0x00009f16) bg_icf_pane_cp01

0x2379,	// (0x00009f29) vtchi_icf_list_pane

0x2389,	// (0x00009f39) list_vkb_icf_pane_t1_ParamLimits

0x2389,	// (0x00009f39) list_vkb_icf_pane_t1

0x239e,	// (0x00009f4e) vtchi_icf_list_pane_t1_ParamLimits

0x239e,	// (0x00009f4e) vtchi_icf_list_pane_t1

0x2117,	// (0x00009cc7) popup_fep_ituss_window_ParamLimits

0x2146,	// (0x00009cf6) popup_fep_vtchi_icf_pane_ParamLimits

0x216c,	// (0x00009d1c) ituss_keypad_pane_ParamLimits

0x8eaa,	// (0x00010a5a) ituss_sks_pane

0x234e,	// (0x00009efe) bg_icf_pane_ParamLimits

0x20ef,	// (0x00009c9f) icf_edit_indi_pane_ParamLimits

0x20ef,	// (0x00009c9f) icf_edit_indi_pane

0x235a,	// (0x00009f0a) list_vkb_icf_pane_ParamLimits

0x2366,	// (0x00009f16) bg_icf_pane_cp01_ParamLimits

0x2102,	// (0x00009cb2) icf_edit_indi_pane_cp01_ParamLimits

0x2102,	// (0x00009cb2) icf_edit_indi_pane_cp01

0x2381,	// (0x00009f31) vtchi_query_pane

0x136a,	// (0x00008f1a) icf_edit_indi_pane_g1_ParamLimits

0x136a,	// (0x00008f1a) icf_edit_indi_pane_g1

0x2427,	// (0x00009fd7) icf_edit_indi_pane_g2_ParamLimits

0x2427,	// (0x00009fd7) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x00017aaa) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x00017aaa) icf_edit_indi_pane_g

0x2437,	// (0x00009fe7) icf_edit_indi_pane_t1

0x23b5,	// (0x00009f65) bg_input_focus_pane_cp042

0x23be,	// (0x00009f6e) vtchi_button_pane

0x23c7,	// (0x00009f77) vtchi_query_pane_t1

0x23d5,	// (0x00009f85) vtchi_query_pane_t2

0x23e3,	// (0x00009f93) vtchi_query_pane_t3

0x0002,

0xfee9,	// (0x00017a99) vtchi_query_pane_t

0x6f31,	// (0x0000eae1) bg_button_pane_cp13

0x23f1,	// (0x00009fa1) vtchi_button_pane_g1

0x8fbd,	// (0x00010b6d) ituss_sks_pane_g1

0x8fc6,	// (0x00010b76) ituss_sks_pane_g2

0x0001,

0xfef0,	// (0x00017aa0) ituss_sks_pane_g

0x2419,	// (0x00009fc9) ituss_sks_pane_t1

0x240b,	// (0x00009fbb) ituss_sks_pane_t2

0x0001,

0xfef5,	// (0x00017aa5) ituss_sks_pane_t

0xd6ff,	// (0x000152af) indicator_nsta_pane_cp_g1

0xd708,	// (0x000152b8) indicator_nsta_pane_cp_g2

0xd710,	// (0x000152c0) indicator_nsta_pane_cp_g3

0xd718,	// (0x000152c8) indicator_nsta_pane_cp_g4

0xd720,	// (0x000152d0) indicator_nsta_pane_cp_g5

0xd728,	// (0x000152d8) indicator_nsta_pane_cp_g6

0x0005,

0xfa99,	// (0x00017649) indicator_nsta_pane_cp_g

0x0f88,	// (0x00008b38) cell_graphic2_pane_t2_ParamLimits

0x0f88,	// (0x00008b38) cell_graphic2_pane_t2

0x0001,

0xfdab,	// (0x0001795b) cell_graphic2_pane_t_ParamLimits

0xfdab,	// (0x0001795b) cell_graphic2_pane_t

0x0fb5,	// (0x00008b65) cell_graphic2_control_pane_t1

0xa735,	// (0x000122e5) signal_pane_g3_ParamLimits

0xa735,	// (0x000122e5) signal_pane_g3

0xa746,	// (0x000122f6) signal_pane_g4_ParamLimits

0xa746,	// (0x000122f6) signal_pane_g4

0x20d9,	// (0x00009c89) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x20d9,	// (0x00009c89) cell_ai5_widget_list_row_pane_t3

0x225f,	// (0x00009e0f) cell_ituss_key_pane_t1_ParamLimits

0x225f,	// (0x00009e0f) cell_ituss_key_pane_t1

0xb64a,	// (0x000131fa) form_field_data_wide_pane_vc_t2_ParamLimits

0xb64a,	// (0x000131fa) form_field_data_wide_pane_vc_t2

0xb65c,	// (0x0001320c) form_field_data_wide_pane_vc_t3_ParamLimits

0xb65c,	// (0x0001320c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x000173a8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x000173a8) form_field_data_wide_pane_vc_t

0xd401,	// (0x00014fb1) form_field_slider_wide_pane_vc_t3_ParamLimits

0xd401,	// (0x00014fb1) form_field_slider_wide_pane_vc_t3

0xd4bf,	// (0x0001506f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xd4bf,	// (0x0001506f) form_field_popup_wide_pane_vc_t2

0xd4d4,	// (0x00015084) form_field_popup_wide_pane_vc_t3_ParamLimits

0xd4d4,	// (0x00015084) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa88,	// (0x00017638) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa88,	// (0x00017638) form_field_popup_wide_pane_vc_t

0x8d12,	// (0x000108c2) aid_fshwr2_btn_pane_ParamLimits

0x8d1e,	// (0x000108ce) aid_fshwr2_syb_pane_ParamLimits

0x8d2a,	// (0x000108da) aid_fshwr2_txt_pane_ParamLimits

0x85db,	// (0x0001018b) fshwr2_bg_pane_ParamLimits

0x8d36,	// (0x000108e6) fshwr2_func_candi_pane_ParamLimits

0x8d47,	// (0x000108f7) fshwr2_hwr_syb_pane_ParamLimits

0x8d53,	// (0x00010903) fshwr2_icf_pane_ParamLimits

0xd37c,	// (0x00014f2c) list_double_graphic_pane_vc_g4_ParamLimits

0xd37c,	// (0x00014f2c) list_double_graphic_pane_vc_g4

0x8f03,	// (0x00010ab3) cell_ituss_key_pane_g3_ParamLimits

0x8f03,	// (0x00010ab3) cell_ituss_key_pane_g3

0x8fab,	// (0x00010b5b) cell_ituss_key_t5_ParamLimits

0x8fab,	// (0x00010b5b) cell_ituss_key_t5

0x2134,	// (0x00009ce4) popup_fep_vkbss_window_ParamLimits

0x1505,	// (0x000090b5) aid_cell_ai5_quarter

0x2437,	// (0x00009fe7) icf_edit_indi_pane_t1_ParamLimits

0x950f,	// (0x000110bf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x950f,	// (0x000110bf) aid_tch_indicator_popup_pane_cp2

0x9522,	// (0x000110d2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9522,	// (0x000110d2) aid_tch_query_popup_data_pane_cp2

0xb980,	// (0x00013530) aid_tch_query_popup_pane_ParamLimits

0xb980,	// (0x00013530) aid_tch_query_popup_pane

0xb980,	// (0x00013530) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xb980,	// (0x00013530) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal

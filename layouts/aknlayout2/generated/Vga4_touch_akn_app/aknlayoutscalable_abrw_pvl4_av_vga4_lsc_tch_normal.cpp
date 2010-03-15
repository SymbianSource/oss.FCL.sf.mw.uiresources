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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00014035 };

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
0x9722,	// (0x0001d757) Screen

0x972e,	// (0x0001d763) application_window_ParamLimits

0x972e,	// (0x0001d763) application_window

0xb9cb,	// (0x0001fa00) screen_g1

0x8d1e,	// (0x0001cd53) area_bottom_pane_ParamLimits

0x8d1e,	// (0x0001cd53) area_bottom_pane

0xd46b,	// (0x000214a0) area_top_pane_ParamLimits

0xd46b,	// (0x000214a0) area_top_pane

0xe1c6,	// (0x000221fb) main_pane_ParamLimits

0xe1c6,	// (0x000221fb) main_pane

0xb9d5,	// (0x0001fa0a) misc_graphics

0xad0c,	// (0x0001ed41) battery_pane_ParamLimits

0xad0c,	// (0x0001ed41) battery_pane

0x241c,	// (0x00016451) bg_status_flat_pane_g8

0x2424,	// (0x00016459) bg_status_flat_pane_g9

0x1717,	// (0x0001574c) context_pane_ParamLimits

0x1717,	// (0x0001574c) context_pane

0xae83,	// (0x0001eeb8) navi_pane_ParamLimits

0xae83,	// (0x0001eeb8) navi_pane

0xaf0d,	// (0x0001ef42) signal_pane_ParamLimits

0xaf0d,	// (0x0001ef42) signal_pane

0x0008,

0xf875,	// (0x000238aa) bg_status_flat_pane_g

0xaf9d,	// (0x0001efd2) status_pane_g1_ParamLimits

0xaf9d,	// (0x0001efd2) status_pane_g1

0xafb3,	// (0x0001efe8) status_pane_g2_ParamLimits

0xafb3,	// (0x0001efe8) status_pane_g2

0x1958,	// (0x0001598d) status_pane_g3_ParamLimits

0x1958,	// (0x0001598d) status_pane_g3

0x0004,

0xf7a1,	// (0x000237d6) status_pane_g_ParamLimits

0xf7a1,	// (0x000237d6) status_pane_g

0xafbf,	// (0x0001eff4) title_pane_ParamLimits

0xafbf,	// (0x0001eff4) title_pane

0xb022,	// (0x0001f057) uni_indicator_pane_ParamLimits

0xb022,	// (0x0001f057) uni_indicator_pane

0x0f38,	// (0x00014f6d) bg_list_pane_ParamLimits

0x0f38,	// (0x00014f6d) bg_list_pane

0xa530,	// (0x0001e565) find_pane

0xa538,	// (0x0001e56d) listscroll_app_pane_ParamLimits

0xa538,	// (0x0001e56d) listscroll_app_pane

0x0f6c,	// (0x00014fa1) listscroll_form_pane

0xa544,	// (0x0001e579) listscroll_gen_pane_ParamLimits

0xa544,	// (0x0001e579) listscroll_gen_pane

0x0f6c,	// (0x00014fa1) listscroll_set_pane

0x2ff7,	// (0x0001702c) main_idle_act_pane

0x0c18,	// (0x00014c4d) main_idle_trad_pane

0x0c18,	// (0x00014c4d) main_list_empty_pane

0x0f9a,	// (0x00014fcf) main_midp_pane

0x0fa6,	// (0x00014fdb) main_pane_g1_ParamLimits

0x0fa6,	// (0x00014fdb) main_pane_g1

0xa566,	// (0x0001e59b) popup_ai_message_window_ParamLimits

0xa566,	// (0x0001e59b) popup_ai_message_window

0xa606,	// (0x0001e63b) popup_fep_china_uni_window_ParamLimits

0xa606,	// (0x0001e63b) popup_fep_china_uni_window

0x10d0,	// (0x00015105) popup_fep_japan_candidate_window_ParamLimits

0x10d0,	// (0x00015105) popup_fep_japan_candidate_window

0x10fa,	// (0x0001512f) popup_fep_japan_predictive_window_ParamLimits

0x10fa,	// (0x0001512f) popup_fep_japan_predictive_window

0xa666,	// (0x0001e69b) popup_find_window

0xa683,	// (0x0001e6b8) popup_grid_graphic_window_ParamLimits

0xa683,	// (0x0001e6b8) popup_grid_graphic_window

0x116b,	// (0x000151a0) popup_large_graphic_colour_window

0xa727,	// (0x0001e75c) popup_menu_window_ParamLimits

0xa727,	// (0x0001e75c) popup_menu_window

0xa917,	// (0x0001e94c) popup_note_image_window

0xa8d7,	// (0x0001e90c) popup_note_wait_window_ParamLimits

0xa8d7,	// (0x0001e90c) popup_note_wait_window

0xa92f,	// (0x0001e964) popup_note_window_ParamLimits

0xa92f,	// (0x0001e964) popup_note_window

0xa9dd,	// (0x0001ea12) popup_query_code_window_ParamLimits

0xa9dd,	// (0x0001ea12) popup_query_code_window

0x13d7,	// (0x0001540c) popup_query_data_code_window_ParamLimits

0x13d7,	// (0x0001540c) popup_query_data_code_window

0xaa1d,	// (0x0001ea52) popup_query_data_window_ParamLimits

0xaa1d,	// (0x0001ea52) popup_query_data_window

0xaab1,	// (0x0001eae6) popup_query_sat_info_window_ParamLimits

0xaab1,	// (0x0001eae6) popup_query_sat_info_window

0xab5c,	// (0x0001eb91) popup_snote_single_graphic_window_ParamLimits

0xab5c,	// (0x0001eb91) popup_snote_single_graphic_window

0xab5c,	// (0x0001eb91) popup_snote_single_text_window_ParamLimits

0xab5c,	// (0x0001eb91) popup_snote_single_text_window

0x1472,	// (0x000154a7) popup_sub_window_general

0x15b8,	// (0x000155ed) popup_window_general_ParamLimits

0x15b8,	// (0x000155ed) popup_window_general

0x15d1,	// (0x00015606) power_save_pane

0x8ea4,	// (0x0001ced9) control_pane_g1_ParamLimits

0x8ea4,	// (0x0001ced9) control_pane_g1

0x8ecd,	// (0x0001cf02) control_pane_g2_ParamLimits

0x8ecd,	// (0x0001cf02) control_pane_g2

0x0ed9,	// (0x00014f0e) control_pane_g3_ParamLimits

0x0ed9,	// (0x00014f0e) control_pane_g3

0x0007,

0xf789,	// (0x000237be) control_pane_g_ParamLimits

0xf789,	// (0x000237be) control_pane_g

0x8f08,	// (0x0001cf3d) control_pane_t1_ParamLimits

0x8f08,	// (0x0001cf3d) control_pane_t1

0x8f66,	// (0x0001cf9b) control_pane_t2_ParamLimits

0x8f66,	// (0x0001cf9b) control_pane_t2

0x0002,

0xf79a,	// (0x000237cf) control_pane_t_ParamLimits

0xf79a,	// (0x000237cf) control_pane_t

0x0dfa,	// (0x00014e2f) navi_navi_volume_pane_cp1

0x0e03,	// (0x00014e38) status_small_icon_pane

0x0e0b,	// (0x00014e40) status_small_pane_g1_ParamLimits

0x0e0b,	// (0x00014e40) status_small_pane_g1

0x0e3f,	// (0x00014e74) status_small_pane_g2_ParamLimits

0x0e3f,	// (0x00014e74) status_small_pane_g2

0x0e4b,	// (0x00014e80) status_small_pane_g3_ParamLimits

0x0e4b,	// (0x00014e80) status_small_pane_g3

0x0e57,	// (0x00014e8c) status_small_pane_g4_ParamLimits

0x0e57,	// (0x00014e8c) status_small_pane_g4

0x0e63,	// (0x00014e98) status_small_pane_g5_ParamLimits

0x0e63,	// (0x00014e98) status_small_pane_g5

0x0e72,	// (0x00014ea7) status_small_pane_g6_ParamLimits

0x0e72,	// (0x00014ea7) status_small_pane_g6

0x0007,

0xf778,	// (0x000237ad) status_small_pane_g_ParamLimits

0xf778,	// (0x000237ad) status_small_pane_g

0x0ea2,	// (0x00014ed7) status_small_pane_t1

0x0ec5,	// (0x00014efa) status_small_wait_pane_ParamLimits

0x0ec5,	// (0x00014efa) status_small_wait_pane

0xa244,	// (0x0001e279) aid_levels_signal_ParamLimits

0xa244,	// (0x0001e279) aid_levels_signal

0xa25c,	// (0x0001e291) signal_pane_g1_ParamLimits

0xa25c,	// (0x0001e291) signal_pane_g1

0xa277,	// (0x0001e2ac) signal_pane_g2_ParamLimits

0xa277,	// (0x0001e2ac) signal_pane_g2

0x0003,

0xf709,	// (0x0002373e) signal_pane_g_ParamLimits

0xf709,	// (0x0002373e) signal_pane_g

0x065f,	// (0x00014694) context_pane_g1

0x973e,	// (0x0001d773) title_pane_g1

0x9769,	// (0x0001d79e) title_pane_t1

0xb9f7,	// (0x0001fa2c) title_pane_t2

0xba1d,	// (0x0001fa52) title_pane_t3

0x0002,

0xf55d,	// (0x00023592) title_pane_t

0xb04a,	// (0x0001f07f) aid_levels_battery_ParamLimits

0xb04a,	// (0x0001f07f) aid_levels_battery

0xb066,	// (0x0001f09b) battery_pane_g1_ParamLimits

0xb066,	// (0x0001f09b) battery_pane_g1

0xb083,	// (0x0001f0b8) battery_pane_g2_ParamLimits

0xb083,	// (0x0001f0b8) battery_pane_g2

0x0001,

0xf7ac,	// (0x000237e1) battery_pane_g_ParamLimits

0xf7ac,	// (0x000237e1) battery_pane_g

0xb356,	// (0x0001f38b) uni_indicator_pane_g1

0xb36b,	// (0x0001f3a0) uni_indicator_pane_g2

0xb380,	// (0x0001f3b5) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x00023952) uni_indicator_pane_g

0x0a86,	// (0x00014abb) navi_icon_pane_ParamLimits

0x0a86,	// (0x00014abb) navi_icon_pane

0x09cd,	// (0x00014a02) navi_midp_pane

0x0aa2,	// (0x00014ad7) navi_navi_pane

0x0aac,	// (0x00014ae1) navi_text_pane_ParamLimits

0x0aac,	// (0x00014ae1) navi_text_pane

0xb9cb,	// (0x0001fa00) status_small_wait_pane_g1

0xd7f4,	// (0x00021829) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x0002394d) status_small_wait_pane_g

0xb2bd,	// (0x0001f2f2) navi_navi_icon_text_pane

0xb2c5,	// (0x0001f2fa) navi_navi_pane_g1_ParamLimits

0xb2c5,	// (0x0001f2fa) navi_navi_pane_g1

0xb2d7,	// (0x0001f30c) navi_navi_pane_g2_ParamLimits

0xb2d7,	// (0x0001f30c) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x0002391b) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x0002391b) navi_navi_pane_g

0x2aa5,	// (0x00016ada) navi_navi_tabs_pane

0xb2e9,	// (0x0001f31e) navi_navi_text_pane

0xb2bd,	// (0x0001f2f2) navi_navi_volume_pane

0xb2ab,	// (0x0001f2e0) navi_text_pane_t1

0xb29f,	// (0x0001f2d4) navi_icon_pane_g1

0x299c,	// (0x000169d1) navi_navi_text_pane_t1

0x91cd,	// (0x0001d202) navi_navi_volume_pane_g1

0x91d5,	// (0x0001d20a) volume_small_pane

0xb1e7,	// (0x0001f21c) navi_navi_icon_text_pane_g1

0xb1ef,	// (0x0001f224) navi_navi_icon_text_pane_t1

0x0aa2,	// (0x00014ad7) navi_tabs_2_long_pane

0x0aa2,	// (0x00014ad7) navi_tabs_2_pane

0x0aa2,	// (0x00014ad7) navi_tabs_3_long_pane

0x0aa2,	// (0x00014ad7) navi_tabs_3_pane

0x0aa2,	// (0x00014ad7) navi_tabs_4_pane

0x91ad,	// (0x0001d1e2) tabs_2_active_pane_ParamLimits

0x91ad,	// (0x0001d1e2) tabs_2_active_pane

0x91bd,	// (0x0001d1f2) tabs_2_passive_pane_ParamLimits

0x91bd,	// (0x0001d1f2) tabs_2_passive_pane

0x917b,	// (0x0001d1b0) tabs_3_active_pane_ParamLimits

0x917b,	// (0x0001d1b0) tabs_3_active_pane

0x918b,	// (0x0001d1c0) tabs_3_passive_pane_ParamLimits

0x918b,	// (0x0001d1c0) tabs_3_passive_pane

0x919c,	// (0x0001d1d1) tabs_3_passive_pane_cp_ParamLimits

0x919c,	// (0x0001d1d1) tabs_3_passive_pane_cp

0x9137,	// (0x0001d16c) tabs_4_active_pane_ParamLimits

0x9137,	// (0x0001d16c) tabs_4_active_pane

0x9148,	// (0x0001d17d) tabs_4_passive_pane_ParamLimits

0x9148,	// (0x0001d17d) tabs_4_passive_pane

0x9159,	// (0x0001d18e) tabs_4_passive_pane_cp_ParamLimits

0x9159,	// (0x0001d18e) tabs_4_passive_pane_cp

0x916a,	// (0x0001d19f) tabs_4_passive_pane_cp2_ParamLimits

0x916a,	// (0x0001d19f) tabs_4_passive_pane_cp2

0x9113,	// (0x0001d148) tabs_2_long_active_pane_ParamLimits

0x9113,	// (0x0001d148) tabs_2_long_active_pane

0x9125,	// (0x0001d15a) tabs_2_long_passive_pane_ParamLimits

0x9125,	// (0x0001d15a) tabs_2_long_passive_pane

0x90c8,	// (0x0001d0fd) tabs_3_long_active_pane_ParamLimits

0x90c8,	// (0x0001d0fd) tabs_3_long_active_pane

0x90e1,	// (0x0001d116) tabs_3_long_passive_pane_ParamLimits

0x90e1,	// (0x0001d116) tabs_3_long_passive_pane

0x90fa,	// (0x0001d12f) tabs_3_long_passive_pane_cp_ParamLimits

0x90fa,	// (0x0001d12f) tabs_3_long_passive_pane_cp

0xe9b0,	// (0x000229e5) volume_small_pane_g1

0x9077,	// (0x0001d0ac) volume_small_pane_g2

0x9080,	// (0x0001d0b5) volume_small_pane_g3

0x9089,	// (0x0001d0be) volume_small_pane_g4

0x9092,	// (0x0001d0c7) volume_small_pane_g5

0x909b,	// (0x0001d0d0) volume_small_pane_g6

0x90a4,	// (0x0001d0d9) volume_small_pane_g7

0x90ad,	// (0x0001d0e2) volume_small_pane_g8

0x90b6,	// (0x0001d0eb) volume_small_pane_g9

0x90bf,	// (0x0001d0f4) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x000238e7) volume_small_pane_g

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp2_ParamLimits

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp2

0x97f5,	// (0x0001d82a) tabs_3_active_pane_g1

0x97fd,	// (0x0001d832) tabs_3_active_pane_t1

0xba2f,	// (0x0001fa64) bg_passive_tab_pane_cp2_ParamLimits

0xba2f,	// (0x0001fa64) bg_passive_tab_pane_cp2

0x97f5,	// (0x0001d82a) tabs_3_passive_pane_g1

0x97fd,	// (0x0001d832) tabs_3_passive_pane_t1

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp3_ParamLimits

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp3

0x980f,	// (0x0001d844) tabs_4_active_pane_g1

0x9817,	// (0x0001d84c) tabs_4_active_pane_t1

0xba2f,	// (0x0001fa64) bg_passive_tab_pane_cp3_ParamLimits

0xba2f,	// (0x0001fa64) bg_passive_tab_pane_cp3

0x980f,	// (0x0001d844) tabs_4_1_passive_pane_g1

0x9817,	// (0x0001d84c) tabs_4_1_passive_pane_t1

0x0f9a,	// (0x00014fcf) list_highlight_pane_cp2

0xb450,	// (0x0001f485) list_set_pane_ParamLimits

0xb450,	// (0x0001f485) list_set_pane

0xb518,	// (0x0001f54d) main_pane_set_t1_ParamLimits

0xb518,	// (0x0001f54d) main_pane_set_t1

0xb538,	// (0x0001f56d) main_pane_set_t2_ParamLimits

0xb538,	// (0x0001f56d) main_pane_set_t2

0xb54c,	// (0x0001f581) main_pane_set_t3_ParamLimits

0xb54c,	// (0x0001f581) main_pane_set_t3

0xb560,	// (0x0001f595) main_pane_set_t4_ParamLimits

0xb560,	// (0x0001f595) main_pane_set_t4

0x0003,

0xf982,	// (0x000239b7) main_pane_set_t_ParamLimits

0xf982,	// (0x000239b7) main_pane_set_t

0xb574,	// (0x0001f5a9) setting_code_pane

0x314b,	// (0x00017180) setting_slider_graphic_pane

0x314b,	// (0x00017180) setting_slider_pane

0x314b,	// (0x00017180) setting_text_pane

0x314b,	// (0x00017180) setting_volume_pane

0xe342,	// (0x00022377) volume_set_pane

0xd4ff,	// (0x00021534) bg_set_opt_pane_cp

0xe34c,	// (0x00022381) setting_slider_pane_t1

0xe365,	// (0x0002239a) setting_slider_pane_t2

0xe37f,	// (0x000223b4) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00023599) setting_slider_pane_t

0xe397,	// (0x000223cc) slider_set_pane

0xb9d5,	// (0x0001fa0a) bg_set_opt_pane_cp2

0xd50d,	// (0x00021542) setting_slider_graphic_pane_g1

0xe3ad,	// (0x000223e2) setting_slider_graphic_pane_t1

0xe3bd,	// (0x000223f2) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000235a0) setting_slider_graphic_pane_t

0xe3cd,	// (0x00022402) slider_set_pane_cp

0xb9d5,	// (0x0001fa0a) input_focus_pane_cp1

0x2fde,	// (0x00017013) list_set_text_pane

0xb9cb,	// (0x0001fa00) setting_text_pane_g1

0xb9d5,	// (0x0001fa0a) input_focus_pane_cp2

0xb9cb,	// (0x0001fa00) setting_code_pane_g1

0xd516,	// (0x0002154b) setting_code_pane_t1

0xd524,	// (0x00021559) set_text_pane_t1_ParamLimits

0xd524,	// (0x00021559) set_text_pane_t1

0xdc7d,	// (0x00021cb2) set_opt_bg_pane_g1

0xdc85,	// (0x00021cba) set_opt_bg_pane_g2

0x2fb6,	// (0x00016feb) set_opt_bg_pane_g3

0xdc95,	// (0x00021cca) set_opt_bg_pane_g4

0xdc9d,	// (0x00021cd2) set_opt_bg_pane_g5

0xdca5,	// (0x00021cda) set_opt_bg_pane_g6

0x2fc0,	// (0x00016ff5) set_opt_bg_pane_g7

0x2fca,	// (0x00016fff) set_opt_bg_pane_g8

0x2fd4,	// (0x00017009) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x000239a4) set_opt_bg_pane_g

0x2fa9,	// (0x00016fde) slider_set_pane_g1

0xea31,	// (0x00022a66) slider_set_pane_g2

0x0006,

0xf960,	// (0x00023995) slider_set_pane_g

0xe9b9,	// (0x000229ee) volume_set_pane_g1

0xe9c3,	// (0x000229f8) volume_set_pane_g2

0xe9cd,	// (0x00022a02) volume_set_pane_g3

0xe9d7,	// (0x00022a0c) volume_set_pane_g4

0xe9e1,	// (0x00022a16) volume_set_pane_g5

0xe9eb,	// (0x00022a20) volume_set_pane_g6

0xe9f5,	// (0x00022a2a) volume_set_pane_g7

0xe9ff,	// (0x00022a34) volume_set_pane_g8

0xea09,	// (0x00022a3e) volume_set_pane_g9

0xea13,	// (0x00022a48) volume_set_pane_g10

0x0009,

0xf938,	// (0x0002396d) volume_set_pane_g

0x9829,	// (0x0001d85e) indicator_pane_ParamLimits

0x9829,	// (0x0001d85e) indicator_pane

0x9855,	// (0x0001d88a) main_idle_pane_g2_ParamLimits

0x9855,	// (0x0001d88a) main_idle_pane_g2

0x988d,	// (0x0001d8c2) main_pane_idle_g1_ParamLimits

0x988d,	// (0x0001d8c2) main_pane_idle_g1

0xd53e,	// (0x00021573) popup_clock_digital_analogue_window_ParamLimits

0xd53e,	// (0x00021573) popup_clock_digital_analogue_window

0x98bb,	// (0x0001d8f0) soft_indicator_pane_ParamLimits

0x98bb,	// (0x0001d8f0) soft_indicator_pane

0x98d7,	// (0x0001d90c) wallpaper_pane_ParamLimits

0x98d7,	// (0x0001d90c) wallpaper_pane

0xb9cb,	// (0x0001fa00) wallpaper_pane_g1

0x98e9,	// (0x0001d91e) indicator_pane_g1_ParamLimits

0x98e9,	// (0x0001d91e) indicator_pane_g1

0x347a,	// (0x000174af) navi_navi_icon_text_pane_srt_g1

0xd56c,	// (0x000215a1) soft_indicator_pane_t1

0xd586,	// (0x000215bb) aid_ps_area_pane

0x9902,	// (0x0001d937) aid_ps_clock_pane

0xd597,	// (0x000215cc) aid_ps_indicator_pane

0xd5a3,	// (0x000215d8) indicator_ps_pane_ParamLimits

0xd5a3,	// (0x000215d8) indicator_ps_pane

0xd5b2,	// (0x000215e7) power_save_pane_g1_ParamLimits

0xd5b2,	// (0x000215e7) power_save_pane_g1

0xd5be,	// (0x000215f3) power_save_pane_g2_ParamLimits

0xd5be,	// (0x000215f3) power_save_pane_g2

0xd44b,	// (0x00021480) aid_navinavi_width_pane

0xd586,	// (0x000215bb) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000235a5) power_save_pane_g_ParamLimits

0xf570,	// (0x000235a5) power_save_pane_g

0xd5cc,	// (0x00021601) power_save_pane_t1_ParamLimits

0xd5cc,	// (0x00021601) power_save_pane_t1

0x9902,	// (0x0001d937) aid_ps_clock_pane_ParamLimits

0xd597,	// (0x000215cc) aid_ps_indicator_pane_ParamLimits

0xd5de,	// (0x00021613) power_save_pane_t4_ParamLimits

0xd5de,	// (0x00021613) power_save_pane_t4

0x0001,

0xf575,	// (0x000235aa) power_save_pane_t_ParamLimits

0xf575,	// (0x000235aa) power_save_pane_t

0xd608,	// (0x0002163d) power_save_t3_ParamLimits

0xd608,	// (0x0002163d) power_save_t3

0xd5f3,	// (0x00021628) power_save_t2_ParamLimits

0xd5f3,	// (0x00021628) power_save_t2

0xd61d,	// (0x00021652) indicator_ps_pane_g1

0x9910,	// (0x0001d945) ai_gene_pane_ParamLimits

0x9910,	// (0x0001d945) ai_gene_pane

0x9927,	// (0x0001d95c) ai_links_pane_ParamLimits

0x9927,	// (0x0001d95c) ai_links_pane

0x993f,	// (0x0001d974) indicator_pane_cp1_ParamLimits

0x993f,	// (0x0001d974) indicator_pane_cp1

0x994e,	// (0x0001d983) main_pane_idle_g1_cp_ParamLimits

0x994e,	// (0x0001d983) main_pane_idle_g1_cp

0xd626,	// (0x0002165b) popup_ai_links_title_window

0x9966,	// (0x0001d99b) soft_indicator_pane_cp1_ParamLimits

0x9966,	// (0x0001d99b) soft_indicator_pane_cp1

0x2d54,	// (0x00016d89) ai_links_pane_g1

0x2d5d,	// (0x00016d92) grid_ai_links_pane

0xb34d,	// (0x0001f382) ai_gene_pane_1

0x2d42,	// (0x00016d77) ai_gene_pane_2

0x2d4b,	// (0x00016d80) list_highlight_pane_cp4

0xb329,	// (0x0001f35e) cell_ai_link_pane_ParamLimits

0xb329,	// (0x0001f35e) cell_ai_link_pane

0x2d11,	// (0x00016d46) cell_ai_link_pane_g1

0xd7f4,	// (0x00021829) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x00023948) cell_ai_link_pane_g

0xb9d5,	// (0x0001fa0a) grid_highlight_cp2

0xb9d5,	// (0x0001fa0a) bg_popup_sub_pane_cp1

0xd63d,	// (0x00021672) popup_ai_links_title_window_t1

0x2c5d,	// (0x00016c92) ai_gene_pane_1_g1_ParamLimits

0x2c5d,	// (0x00016c92) ai_gene_pane_1_g1

0x2c69,	// (0x00016c9e) ai_gene_pane_1_g2_ParamLimits

0x2c69,	// (0x00016c9e) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x0002393e) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x0002393e) ai_gene_pane_1_g

0x2c76,	// (0x00016cab) ai_gene_pane_1_t1_ParamLimits

0x2c76,	// (0x00016cab) ai_gene_pane_1_t1

0x2caa,	// (0x00016cdf) grid_ai_soft_ind_pane

0x2c48,	// (0x00016c7d) ai_gene_pane_2_t1_ParamLimits

0x2c48,	// (0x00016c7d) ai_gene_pane_2_t1

0x997a,	// (0x0001d9af) main_pane_empty_t1_ParamLimits

0x997a,	// (0x0001d9af) main_pane_empty_t1

0x9992,	// (0x0001d9c7) main_pane_empty_t2_ParamLimits

0x9992,	// (0x0001d9c7) main_pane_empty_t2

0x99a7,	// (0x0001d9dc) main_pane_empty_t3_ParamLimits

0x99a7,	// (0x0001d9dc) main_pane_empty_t3

0x99b9,	// (0x0001d9ee) main_pane_empty_t4_ParamLimits

0x99b9,	// (0x0001d9ee) main_pane_empty_t4

0x99cb,	// (0x0001da00) main_pane_empty_t5_ParamLimits

0x99cb,	// (0x0001da00) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000235af) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000235af) main_pane_empty_t

0xdcfd,	// (0x00021d32) bg_popup_window_pane_ParamLimits

0xdcfd,	// (0x00021d32) bg_popup_window_pane

0x29aa,	// (0x000169df) find_popup_pane_cp2_ParamLimits

0x29aa,	// (0x000169df) find_popup_pane_cp2

0x29b6,	// (0x000169eb) heading_pane_ParamLimits

0x29b6,	// (0x000169eb) heading_pane

0xb9d5,	// (0x0001fa0a) bg_popup_sub_pane

0xb20c,	// (0x0001f241) bg_popup_window_pane_g1_ParamLimits

0xb20c,	// (0x0001f241) bg_popup_window_pane_g1

0xb21b,	// (0x0001f250) bg_popup_window_pane_g2_ParamLimits

0xb21b,	// (0x0001f250) bg_popup_window_pane_g2

0xb227,	// (0x0001f25c) bg_popup_window_pane_g3_ParamLimits

0xb227,	// (0x0001f25c) bg_popup_window_pane_g3

0xb233,	// (0x0001f268) bg_popup_window_pane_g4_ParamLimits

0xb233,	// (0x0001f268) bg_popup_window_pane_g4

0xb242,	// (0x0001f277) bg_popup_window_pane_g5_ParamLimits

0xb242,	// (0x0001f277) bg_popup_window_pane_g5

0xb252,	// (0x0001f287) bg_popup_window_pane_g6_ParamLimits

0xb252,	// (0x0001f287) bg_popup_window_pane_g6

0xb25e,	// (0x0001f293) bg_popup_window_pane_g7_ParamLimits

0xb25e,	// (0x0001f293) bg_popup_window_pane_g7

0xb26d,	// (0x0001f2a2) bg_popup_window_pane_g8_ParamLimits

0xb26d,	// (0x0001f2a2) bg_popup_window_pane_g8

0xb27c,	// (0x0001f2b1) bg_popup_window_pane_g9_ParamLimits

0xb27c,	// (0x0001f2b1) bg_popup_window_pane_g9

0x2990,	// (0x000169c5) bg_popup_window_pane_g10_ParamLimits

0x2990,	// (0x000169c5) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x00023906) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x00023906) bg_popup_window_pane_g

0x28b9,	// (0x000168ee) bg_popup_heading_pane_ParamLimits

0x28b9,	// (0x000168ee) bg_popup_heading_pane

0xeab9,	// (0x00022aee) tabs_4_passive_pane_cp_srt_ParamLimits

0xeab9,	// (0x00022aee) tabs_4_passive_pane_cp_srt

0xeacb,	// (0x00022b00) tabs_4_passive_pane_srt_ParamLimits

0x28cd,	// (0x00016902) heading_pane_g2

0xeacb,	// (0x00022b00) tabs_4_passive_pane_srt

0x1c37,	// (0x00015c6c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1c37,	// (0x00015c6c) bg_passive_tab_pane_cp3_srt

0x28d5,	// (0x0001690a) heading_pane_t1_ParamLimits

0x28d5,	// (0x0001690a) heading_pane_t1

0x28ec,	// (0x00016921) heading_pane_t2_ParamLimits

0x28ec,	// (0x00016921) heading_pane_t2

0x0001,

0xf8cc,	// (0x00023901) heading_pane_t_ParamLimits

0xf8cc,	// (0x00023901) heading_pane_t

0x23e4,	// (0x00016419) bg_popup_heading_pane_g1

0x2493,	// (0x000164c8) bg_popup_heading_pane_g2

0x249d,	// (0x000164d2) bg_popup_heading_pane_g3

0x24a7,	// (0x000164dc) bg_popup_heading_pane_g4

0x24b1,	// (0x000164e6) bg_popup_heading_pane_g5

0x24bb,	// (0x000164f0) bg_popup_heading_pane_g6

0x24c3,	// (0x000164f8) bg_popup_heading_pane_g7

0x24cb,	// (0x00016500) bg_popup_heading_pane_g8

0x24d5,	// (0x0001650a) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x000238bd) bg_popup_heading_pane_g

0x1b11,	// (0x00015b46) bg_popup_sub_pane_g1

0x1b21,	// (0x00015b56) bg_popup_sub_pane_g2

0x1b19,	// (0x00015b4e) bg_popup_sub_pane_g3

0x1b31,	// (0x00015b66) bg_popup_sub_pane_g4

0x1b29,	// (0x00015b5e) bg_popup_sub_pane_g5

0x1b39,	// (0x00015b6e) bg_popup_sub_pane_g6

0x1b41,	// (0x00015b76) bg_popup_sub_pane_g7

0x1b51,	// (0x00015b86) bg_popup_sub_pane_g8

0x1b49,	// (0x00015b7e) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x00023897) bg_popup_sub_pane_g

0xba2f,	// (0x0001fa64) bg_popup_window_pane_cp5_ParamLimits

0xba2f,	// (0x0001fa64) bg_popup_window_pane_cp5

0xd65a,	// (0x0002168f) popup_note_window_g1_ParamLimits

0xd65a,	// (0x0002168f) popup_note_window_g1

0xd666,	// (0x0002169b) popup_note_window_t1_ParamLimits

0xd666,	// (0x0002169b) popup_note_window_t1

0xd67c,	// (0x000216b1) popup_note_window_t2_ParamLimits

0xd67c,	// (0x000216b1) popup_note_window_t2

0xd692,	// (0x000216c7) popup_note_window_t3_ParamLimits

0xd692,	// (0x000216c7) popup_note_window_t3

0xd6a8,	// (0x000216dd) popup_note_window_t4_ParamLimits

0xd6a8,	// (0x000216dd) popup_note_window_t4

0xd6d0,	// (0x00021705) popup_note_window_t5_ParamLimits

0xd6d0,	// (0x00021705) popup_note_window_t5

0x0004,

0xf585,	// (0x000235ba) popup_note_window_t_ParamLimits

0xf585,	// (0x000235ba) popup_note_window_t

0xd6f4,	// (0x00021729) bg_popup_window_pane_cp6_ParamLimits

0xd6f4,	// (0x00021729) bg_popup_window_pane_cp6

0x2360,	// (0x00016395) popup_note_image_window_g1_ParamLimits

0x2360,	// (0x00016395) popup_note_image_window_g1

0x236c,	// (0x000163a1) popup_note_image_window_g2_ParamLimits

0x236c,	// (0x000163a1) popup_note_image_window_g2

0x0001,

0xf856,	// (0x0002388b) popup_note_image_window_g_ParamLimits

0xf856,	// (0x0002388b) popup_note_image_window_g

0x2385,	// (0x000163ba) popup_note_image_window_t1_ParamLimits

0x2385,	// (0x000163ba) popup_note_image_window_t1

0x239e,	// (0x000163d3) popup_note_image_window_t2_ParamLimits

0x239e,	// (0x000163d3) popup_note_image_window_t2

0x23b7,	// (0x000163ec) popup_note_image_window_t3_ParamLimits

0x23b7,	// (0x000163ec) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x00023890) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x00023890) popup_note_image_window_t

0x2220,	// (0x00016255) bg_popup_window_pane_cp7_ParamLimits

0x2220,	// (0x00016255) bg_popup_window_pane_cp7

0x2250,	// (0x00016285) popup_note_wait_window_g1_ParamLimits

0x2250,	// (0x00016285) popup_note_wait_window_g1

0x225c,	// (0x00016291) popup_note_wait_window_g2_ParamLimits

0x225c,	// (0x00016291) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x00023879) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x00023879) popup_note_wait_window_g

0x2274,	// (0x000162a9) popup_note_wait_window_t1_ParamLimits

0x2274,	// (0x000162a9) popup_note_wait_window_t1

0x229b,	// (0x000162d0) popup_note_wait_window_t2_ParamLimits

0x229b,	// (0x000162d0) popup_note_wait_window_t2

0x22b9,	// (0x000162ee) popup_note_wait_window_t3_ParamLimits

0x22b9,	// (0x000162ee) popup_note_wait_window_t3

0x22cc,	// (0x00016301) popup_note_wait_window_t4_ParamLimits

0x22cc,	// (0x00016301) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x00023880) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x00023880) popup_note_wait_window_t

0x22f1,	// (0x00016326) wait_bar_pane_ParamLimits

0x22f1,	// (0x00016326) wait_bar_pane

0xb9d5,	// (0x0001fa0a) wait_anim_pane

0xb9d5,	// (0x0001fa0a) wait_border_pane

0xb9cb,	// (0x0001fa00) wait_anim_pane_g1

0xb9cb,	// (0x0001fa00) wait_anim_pane_g2

0x0001,

0xf704,	// (0x00023739) wait_anim_pane_g

0x21c4,	// (0x000161f9) wait_border_pane_g1

0x21cf,	// (0x00016204) wait_border_pane_g2

0x21d8,	// (0x0001620d) wait_border_pane_g3

0x0002,

0xf83d,	// (0x00023872) wait_border_pane_g

0x202e,	// (0x00016063) bg_popup_window_pane_cp16_ParamLimits

0x202e,	// (0x00016063) bg_popup_window_pane_cp16

0x212e,	// (0x00016163) indicator_popup_pane_cp4_ParamLimits

0x212e,	// (0x00016163) indicator_popup_pane_cp4

0x2142,	// (0x00016177) popup_query_data_window_t1_ParamLimits

0x2142,	// (0x00016177) popup_query_data_window_t1

0x2154,	// (0x00016189) popup_query_data_window_t2_ParamLimits

0x2154,	// (0x00016189) popup_query_data_window_t2

0x216d,	// (0x000161a2) popup_query_data_window_t3_ParamLimits

0x216d,	// (0x000161a2) popup_query_data_window_t3

0x0002,

0xf836,	// (0x0002386b) popup_query_data_window_t_ParamLimits

0xf836,	// (0x0002386b) popup_query_data_window_t

0x2187,	// (0x000161bc) query_popup_data_pane_ParamLimits

0x2187,	// (0x000161bc) query_popup_data_pane

0x219b,	// (0x000161d0) query_popup_data_pane_cp1_ParamLimits

0x219b,	// (0x000161d0) query_popup_data_pane_cp1

0x202e,	// (0x00016063) bg_popup_window_pane_cp10_ParamLimits

0x202e,	// (0x00016063) bg_popup_window_pane_cp10

0x2060,	// (0x00016095) indicator_popup_pane_ParamLimits

0x2060,	// (0x00016095) indicator_popup_pane

0x2082,	// (0x000160b7) popup_query_code_window_t1_ParamLimits

0x2082,	// (0x000160b7) popup_query_code_window_t1

0x209c,	// (0x000160d1) popup_query_code_window_t2_ParamLimits

0x209c,	// (0x000160d1) popup_query_code_window_t2

0x20e5,	// (0x0001611a) popup_query_code_window_t3_ParamLimits

0x20e5,	// (0x0001611a) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x00023864) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x00023864) popup_query_code_window_t

0x2114,	// (0x00016149) query_popup_pane_ParamLimits

0x2114,	// (0x00016149) query_popup_pane

0xd6f4,	// (0x00021729) bg_popup_window_pane_cp15_ParamLimits

0xd6f4,	// (0x00021729) bg_popup_window_pane_cp15

0xd714,	// (0x00021749) indicator_popup_pane_cp1_ParamLimits

0xd714,	// (0x00021749) indicator_popup_pane_cp1

0xd727,	// (0x0002175c) indicator_popup_pane_cp2_ParamLimits

0xd727,	// (0x0002175c) indicator_popup_pane_cp2

0xd742,	// (0x00021777) popup_query_data_code_window_g1_ParamLimits

0xd742,	// (0x00021777) popup_query_data_code_window_g1

0xd755,	// (0x0002178a) popup_query_data_code_window_t1_ParamLimits

0xd755,	// (0x0002178a) popup_query_data_code_window_t1

0xd767,	// (0x0002179c) popup_query_data_code_window_t2_ParamLimits

0xd767,	// (0x0002179c) popup_query_data_code_window_t2

0xd779,	// (0x000217ae) popup_query_data_code_window_t3_ParamLimits

0xd779,	// (0x000217ae) popup_query_data_code_window_t3

0xd78f,	// (0x000217c4) popup_query_data_code_window_t4_ParamLimits

0xd78f,	// (0x000217c4) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000235c5) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000235c5) popup_query_data_code_window_t

0xe91b,	// (0x00022950) list_single_midp_graphic_pane_g3

0xd7a9,	// (0x000217de) query_popup_data_pane_cp2_ParamLimits

0xd7bc,	// (0x000217f1) query_popup_pane_cp2_ParamLimits

0xd7bc,	// (0x000217f1) query_popup_pane_cp2

0xb9d5,	// (0x0001fa0a) bg_popup_window_pane_cp11

0x2026,	// (0x0001605b) heading_pane_cp5

0xd852,	// (0x00021887) listscroll_popup_info_pane

0xb9d5,	// (0x0001fa0a) input_focus_pane_cp3

0xd7d7,	// (0x0002180c) query_popup_pane_t1

0xd7e5,	// (0x0002181a) list_popup_info_pane_ParamLimits

0xd7e5,	// (0x0002181a) list_popup_info_pane

0xd7f4,	// (0x00021829) listscroll_popup_info_pane_g1

0xd7fc,	// (0x00021831) scroll_pane_cp7

0xd806,	// (0x0002183b) popup_info_list_pane_t1_ParamLimits

0xd806,	// (0x0002183b) popup_info_list_pane_t1

0xd820,	// (0x00021855) popup_info_list_pane_t2_ParamLimits

0xd820,	// (0x00021855) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000235ce) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000235ce) popup_info_list_pane_t

0xb9d5,	// (0x0001fa0a) bg_popup_window_pane_cp12

0x3494,	// (0x000174c9) find_popup_pane

0xd4ff,	// (0x00021534) bg_popup_window_pane_cp3

0xd83a,	// (0x0002186f) heading_pane_cp3

0xd846,	// (0x0002187b) listscroll_popup_graphic_pane

0xb9d5,	// (0x0001fa0a) bg_popup_window_pane_cp4

0x9a2d,	// (0x0001da62) heading_pane_cp4

0xd852,	// (0x00021887) listscroll_popup_colour_pane

0x9a37,	// (0x0001da6c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a37,	// (0x0001da6c) cell_large_graphic_colour_none_popup_pane

0x9a4b,	// (0x0001da80) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a4b,	// (0x0001da80) grid_large_graphic_colour_popup_pane

0x9a6f,	// (0x0001daa4) listscroll_popup_colour_pane_g1_ParamLimits

0x9a6f,	// (0x0001daa4) listscroll_popup_colour_pane_g1

0x9a86,	// (0x0001dabb) listscroll_popup_colour_pane_g2_ParamLimits

0x9a86,	// (0x0001dabb) listscroll_popup_colour_pane_g2

0x9a9d,	// (0x0001dad2) listscroll_popup_colour_pane_g3_ParamLimits

0x9a9d,	// (0x0001dad2) listscroll_popup_colour_pane_g3

0x9aad,	// (0x0001dae2) listscroll_popup_colour_pane_g4_ParamLimits

0x9aad,	// (0x0001dae2) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000235d3) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000235d3) listscroll_popup_colour_pane_g

0xd85a,	// (0x0002188f) scroll_pane_cp6_ParamLimits

0xd85a,	// (0x0002188f) scroll_pane_cp6

0x9abd,	// (0x0001daf2) cell_large_graphic_colour_popup_pane_ParamLimits

0x9abd,	// (0x0001daf2) cell_large_graphic_colour_popup_pane

0xd86c,	// (0x000218a1) cell_large_graphic_colour_none_popup_pane_t1

0xb9d5,	// (0x0001fa0a) grid_highlight_pane_cp5

0xd87b,	// (0x000218b0) cell_large_graphic_colour_popup_pane_g1

0xd883,	// (0x000218b8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000235dc) cell_large_graphic_colour_popup_pane_g

0xd88b,	// (0x000218c0) cell_large_graphic_colour_popup_pane_g2_copy1

0xd894,	// (0x000218c9) grid_highlight_pane_cp4

0xd89c,	// (0x000218d1) bg_popup_window_pane_cp8_ParamLimits

0xd89c,	// (0x000218d1) bg_popup_window_pane_cp8

0xd8b7,	// (0x000218ec) popup_snote_single_text_window_g1_ParamLimits

0xd8b7,	// (0x000218ec) popup_snote_single_text_window_g1

0xd8c9,	// (0x000218fe) popup_snote_single_text_window_t1_ParamLimits

0xd8c9,	// (0x000218fe) popup_snote_single_text_window_t1

0xd8dc,	// (0x00021911) popup_snote_single_text_window_t2_ParamLimits

0xd8dc,	// (0x00021911) popup_snote_single_text_window_t2

0xd8ef,	// (0x00021924) popup_snote_single_text_window_t3_ParamLimits

0xd8ef,	// (0x00021924) popup_snote_single_text_window_t3

0xd928,	// (0x0002195d) popup_snote_single_text_window_t4_ParamLimits

0xd928,	// (0x0002195d) popup_snote_single_text_window_t4

0xd95c,	// (0x00021991) popup_snote_single_text_window_t5_ParamLimits

0xd95c,	// (0x00021991) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000235e1) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000235e1) popup_snote_single_text_window_t

0xd98b,	// (0x000219c0) bg_popup_window_pane_cp9_ParamLimits

0xd98b,	// (0x000219c0) bg_popup_window_pane_cp9

0xd8b7,	// (0x000218ec) popup_snote_single_graphic_window_g1_ParamLimits

0xd8b7,	// (0x000218ec) popup_snote_single_graphic_window_g1

0xd999,	// (0x000219ce) popup_snote_single_graphic_window_g2_ParamLimits

0xd999,	// (0x000219ce) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000235ec) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000235ec) popup_snote_single_graphic_window_g

0xd9a5,	// (0x000219da) popup_snote_single_graphic_window_t1_ParamLimits

0xd9a5,	// (0x000219da) popup_snote_single_graphic_window_t1

0xd9b8,	// (0x000219ed) popup_snote_single_graphic_window_t2_ParamLimits

0xd9b8,	// (0x000219ed) popup_snote_single_graphic_window_t2

0xd9cb,	// (0x00021a00) popup_snote_single_graphic_window_t3_ParamLimits

0xd9cb,	// (0x00021a00) popup_snote_single_graphic_window_t3

0xda04,	// (0x00021a39) popup_snote_single_graphic_window_t4_ParamLimits

0xda04,	// (0x00021a39) popup_snote_single_graphic_window_t4

0xda38,	// (0x00021a6d) popup_snote_single_graphic_window_t5_ParamLimits

0xda38,	// (0x00021a6d) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000235f1) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000235f1) popup_snote_single_graphic_window_t

0x33d2,	// (0x00017407) grid_graphic_popup_pane_ParamLimits

0x33d2,	// (0x00017407) grid_graphic_popup_pane

0x3400,	// (0x00017435) listscroll_popup_graphic_pane_g1_ParamLimits

0x3400,	// (0x00017435) listscroll_popup_graphic_pane_g1

0xb6be,	// (0x0001f6f3) listscroll_popup_graphic_pane_g2_ParamLimits

0xb6be,	// (0x0001f6f3) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x000239e1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x000239e1) listscroll_popup_graphic_pane_g

0x3428,	// (0x0001745d) scroll_pane_cp5

0xb67d,	// (0x0001f6b2) cell_graphic_popup_pane_ParamLimits

0xb67d,	// (0x0001f6b2) cell_graphic_popup_pane

0x335b,	// (0x00017390) cell_graphic_popup_pane_g1

0x3363,	// (0x00017398) cell_graphic_popup_pane_g2

0xd88b,	// (0x000218c0) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x000239da) cell_graphic_popup_pane_g

0x336c,	// (0x000173a1) cell_graphic_popup_pane_t2

0xd894,	// (0x000218c9) grid_highlight_pane_cp3

0xda79,	// (0x00021aae) list_gen_pane_ParamLimits

0xda79,	// (0x00021aae) list_gen_pane

0xdaa1,	// (0x00021ad6) scroll_pane

0xb634,	// (0x0001f669) bg_list_pane_g1_ParamLimits

0xb634,	// (0x0001f669) bg_list_pane_g1

0x32d0,	// (0x00017305) bg_list_pane_g2_ParamLimits

0x32d0,	// (0x00017305) bg_list_pane_g2

0x32e5,	// (0x0001731a) bg_list_pane_g3_ParamLimits

0x32e5,	// (0x0001731a) bg_list_pane_g3

0x32f9,	// (0x0001732e) bg_list_pane_g4_ParamLimits

0x32f9,	// (0x0001732e) bg_list_pane_g4

0xb651,	// (0x0001f686) bg_list_pane_g5_ParamLimits

0xb651,	// (0x0001f686) bg_list_pane_g5

0x0004,

0xf99a,	// (0x000239cf) bg_list_pane_g_ParamLimits

0xf99a,	// (0x000239cf) bg_list_pane_g

0xb5ce,	// (0x0001f603) list_double2_graphic_large_graphic_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double2_graphic_large_graphic_pane

0xb5ce,	// (0x0001f603) list_double2_graphic_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double2_graphic_pane

0xb5ce,	// (0x0001f603) list_double2_large_graphic_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double2_large_graphic_pane

0xb5ce,	// (0x0001f603) list_double2_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double2_pane

0xb5ce,	// (0x0001f603) list_double_graphic_heading_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double_graphic_heading_pane

0xb5ce,	// (0x0001f603) list_double_graphic_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double_graphic_pane

0xb5ce,	// (0x0001f603) list_double_heading_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double_heading_pane

0xb5ce,	// (0x0001f603) list_double_large_graphic_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double_large_graphic_pane

0xb5ce,	// (0x0001f603) list_double_number_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double_number_pane

0xb5ce,	// (0x0001f603) list_double_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double_pane

0xb5ce,	// (0x0001f603) list_double_time_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_double_time_pane

0xb5ce,	// (0x0001f603) list_setting_number_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_setting_number_pane

0xb5ce,	// (0x0001f603) list_setting_pane_ParamLimits

0xb5ce,	// (0x0001f603) list_setting_pane

0xb5e2,	// (0x0001f617) list_single_2graphic_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_2graphic_pane

0xb5e2,	// (0x0001f617) list_single_graphic_heading_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_graphic_heading_pane

0xb5e2,	// (0x0001f617) list_single_graphic_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_graphic_pane

0xb5e2,	// (0x0001f617) list_single_heading_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_heading_pane

0xb5e2,	// (0x0001f617) list_single_large_graphic_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_large_graphic_pane

0xb5e2,	// (0x0001f617) list_single_number_heading_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_number_heading_pane

0xb5e2,	// (0x0001f617) list_single_number_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_number_pane

0xb5e2,	// (0x0001f617) list_single_pane_ParamLimits

0xb5e2,	// (0x0001f617) list_single_pane

0xb9d5,	// (0x0001fa0a) list_highlight_pane_cp1

0x0b89,	// (0x00014bbe) list_single_pane_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_single_pane_g1

0x1a93,	// (0x00015ac8) list_single_pane_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00023603) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00023603) list_single_pane_g

0x3aa8,	// (0x00017add) list_single_pane_t1_ParamLimits

0x3aa8,	// (0x00017add) list_single_pane_t1

0x0b89,	// (0x00014bbe) list_single_number_pane_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_single_number_pane_g1

0x1a93,	// (0x00015ac8) list_single_number_pane_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00023603) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00023603) list_single_number_pane_g

0x1a9f,	// (0x00015ad4) list_single_number_pane_t1_ParamLimits

0x1a9f,	// (0x00015ad4) list_single_number_pane_t1

0xb3ec,	// (0x0001f421) list_single_number_pane_t2_ParamLimits

0xb3ec,	// (0x0001f421) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x00023990) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x00023990) list_single_number_pane_t

0x5025,	// (0x0001905a) list_single_graphic_pane_g1_ParamLimits

0x5025,	// (0x0001905a) list_single_graphic_pane_g1

0x0b89,	// (0x00014bbe) list_single_graphic_pane_g2_ParamLimits

0x0b89,	// (0x00014bbe) list_single_graphic_pane_g2

0x1a93,	// (0x00015ac8) list_single_graphic_pane_g3_ParamLimits

0x1a93,	// (0x00015ac8) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000235fc) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000235fc) list_single_graphic_pane_g

0x9ae8,	// (0x0001db1d) list_single_graphic_pane_t1_ParamLimits

0x9ae8,	// (0x0001db1d) list_single_graphic_pane_t1

0x0b89,	// (0x00014bbe) list_single_heading_pane_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_single_heading_pane_g1

0x1a93,	// (0x00015ac8) list_single_heading_pane_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00023603) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00023603) list_single_heading_pane_g

0x3aca,	// (0x00017aff) list_single_heading_pane_t1_ParamLimits

0x3aca,	// (0x00017aff) list_single_heading_pane_t1

0x9afe,	// (0x0001db33) list_single_heading_pane_t2_ParamLimits

0x9afe,	// (0x0001db33) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00023608) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00023608) list_single_heading_pane_t

0x0b89,	// (0x00014bbe) list_single_number_heading_pane_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_single_number_heading_pane_g1

0x1a93,	// (0x00015ac8) list_single_number_heading_pane_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00023603) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00023603) list_single_number_heading_pane_g

0x3aca,	// (0x00017aff) list_single_number_heading_pane_t1_ParamLimits

0x3aca,	// (0x00017aff) list_single_number_heading_pane_t1

0x9b10,	// (0x0001db45) list_single_number_heading_pane_t2_ParamLimits

0x9b10,	// (0x0001db45) list_single_number_heading_pane_t2

0x3a84,	// (0x00017ab9) list_single_number_heading_pane_t3_ParamLimits

0x3a84,	// (0x00017ab9) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002360d) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002360d) list_single_number_heading_pane_t

0x1a87,	// (0x00015abc) list_single_graphic_heading_pane_g1_ParamLimits

0x1a87,	// (0x00015abc) list_single_graphic_heading_pane_g1

0x9b22,	// (0x0001db57) list_single_graphic_heading_pane_g4_ParamLimits

0x9b22,	// (0x0001db57) list_single_graphic_heading_pane_g4

0x1a93,	// (0x00015ac8) list_single_graphic_heading_pane_g5_ParamLimits

0x1a93,	// (0x00015ac8) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00023614) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00023614) list_single_graphic_heading_pane_g

0x3aca,	// (0x00017aff) list_single_graphic_heading_pane_t1_ParamLimits

0x3aca,	// (0x00017aff) list_single_graphic_heading_pane_t1

0x9b33,	// (0x0001db68) list_single_graphic_heading_pane_t2_ParamLimits

0x9b33,	// (0x0001db68) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002361b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002361b) list_single_graphic_heading_pane_t

0x3abe,	// (0x00017af3) list_single_large_graphic_pane_g1_ParamLimits

0x3abe,	// (0x00017af3) list_single_large_graphic_pane_g1

0x0b89,	// (0x00014bbe) list_single_large_graphic_pane_g2_ParamLimits

0x0b89,	// (0x00014bbe) list_single_large_graphic_pane_g2

0x1a93,	// (0x00015ac8) list_single_large_graphic_pane_g3_ParamLimits

0x1a93,	// (0x00015ac8) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00023620) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00023620) list_single_large_graphic_pane_g

0x21cf,	// (0x00016204) wait_border_pane_g2_copy1

0x9b45,	// (0x0001db7a) list_single_large_graphic_pane_g4_cp2

0x3aca,	// (0x00017aff) list_single_large_graphic_pane_t1_ParamLimits

0x3aca,	// (0x00017aff) list_single_large_graphic_pane_t1

0x9b4d,	// (0x0001db82) list_double_pane_g1_ParamLimits

0x9b4d,	// (0x0001db82) list_double_pane_g1

0x9b59,	// (0x0001db8e) list_double_pane_g2_ParamLimits

0x9b59,	// (0x0001db8e) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00023627) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00023627) list_double_pane_g

0x9b65,	// (0x0001db9a) list_double_pane_t1_ParamLimits

0x9b65,	// (0x0001db9a) list_double_pane_t1

0x9b7b,	// (0x0001dbb0) list_double_pane_t2_ParamLimits

0x9b7b,	// (0x0001dbb0) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002362c) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002362c) list_double_pane_t

0x9b8d,	// (0x0001dbc2) list_double2_pane_g1_ParamLimits

0x9b8d,	// (0x0001dbc2) list_double2_pane_g1

0x9b9e,	// (0x0001dbd3) list_double2_pane_g2_ParamLimits

0x9b9e,	// (0x0001dbd3) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00023631) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00023631) list_double2_pane_g

0x9baa,	// (0x0001dbdf) list_double2_pane_t1_ParamLimits

0x9baa,	// (0x0001dbdf) list_double2_pane_t1

0x9bc0,	// (0x0001dbf5) list_double2_pane_t2_ParamLimits

0x9bc0,	// (0x0001dbf5) list_double2_pane_t2

0x0001,

0xf601,	// (0x00023636) list_double2_pane_t_ParamLimits

0xf601,	// (0x00023636) list_double2_pane_t

0x9b4d,	// (0x0001db82) list_double_number_pane_g1_ParamLimits

0x9b4d,	// (0x0001db82) list_double_number_pane_g1

0x9b59,	// (0x0001db8e) list_double_number_pane_g2_ParamLimits

0x9b59,	// (0x0001db8e) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00023627) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00023627) list_double_number_pane_g

0x9bd2,	// (0x0001dc07) list_double_number_pane_t1_ParamLimits

0x9bd2,	// (0x0001dc07) list_double_number_pane_t1

0x9be4,	// (0x0001dc19) list_double_number_pane_t2_ParamLimits

0x9be4,	// (0x0001dc19) list_double_number_pane_t2

0x9bfa,	// (0x0001dc2f) list_double_number_pane_t3_ParamLimits

0x9bfa,	// (0x0001dc2f) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002363b) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002363b) list_double_number_pane_t

0xdad5,	// (0x00021b0a) list_double_graphic_pane_g1_ParamLimits

0xdad5,	// (0x00021b0a) list_double_graphic_pane_g1

0x9c0c,	// (0x0001dc41) list_double_graphic_pane_g2_ParamLimits

0x9c0c,	// (0x0001dc41) list_double_graphic_pane_g2

0x9c1b,	// (0x0001dc50) list_double_graphic_pane_g3_ParamLimits

0x9c1b,	// (0x0001dc50) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00023642) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00023642) list_double_graphic_pane_g

0x9c33,	// (0x0001dc68) list_double_graphic_pane_t1_ParamLimits

0x9c33,	// (0x0001dc68) list_double_graphic_pane_t1

0x9c49,	// (0x0001dc7e) list_double_graphic_pane_t2_ParamLimits

0x9c49,	// (0x0001dc7e) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002364b) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002364b) list_double_graphic_pane_t

0x9c5b,	// (0x0001dc90) list_double2_graphic_pane_g1_ParamLimits

0x9c5b,	// (0x0001dc90) list_double2_graphic_pane_g1

0x9c67,	// (0x0001dc9c) list_double2_graphic_pane_g2_ParamLimits

0x9c67,	// (0x0001dc9c) list_double2_graphic_pane_g2

0x9b9e,	// (0x0001dbd3) list_double2_graphic_pane_g3_ParamLimits

0x9b9e,	// (0x0001dbd3) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00023650) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00023650) list_double2_graphic_pane_g

0x9c73,	// (0x0001dca8) list_double2_graphic_pane_t1_ParamLimits

0x9c73,	// (0x0001dca8) list_double2_graphic_pane_t1

0x9c89,	// (0x0001dcbe) list_double2_graphic_pane_t2_ParamLimits

0x9c89,	// (0x0001dcbe) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00023657) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00023657) list_double2_graphic_pane_t

0x9c9b,	// (0x0001dcd0) list_double_large_graphic_pane_g1_ParamLimits

0x9c9b,	// (0x0001dcd0) list_double_large_graphic_pane_g1

0x9cc6,	// (0x0001dcfb) list_double_large_graphic_pane_g2_ParamLimits

0x9cc6,	// (0x0001dcfb) list_double_large_graphic_pane_g2

0x9b59,	// (0x0001db8e) list_double_large_graphic_pane_g3_ParamLimits

0x9b59,	// (0x0001db8e) list_double_large_graphic_pane_g3

0x9cd7,	// (0x0001dd0c) list_double_large_graphic_pane_g4_ParamLimits

0x9cd7,	// (0x0001dd0c) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002365c) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002365c) list_double_large_graphic_pane_g

0x9ce9,	// (0x0001dd1e) list_double_large_graphic_pane_t1_ParamLimits

0x9ce9,	// (0x0001dd1e) list_double_large_graphic_pane_t1

0x9d02,	// (0x0001dd37) list_double_large_graphic_pane_t2_ParamLimits

0x9d02,	// (0x0001dd37) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00023667) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00023667) list_double_large_graphic_pane_t

0x9d14,	// (0x0001dd49) list_double2_large_graphic_pane_g1_ParamLimits

0x9d14,	// (0x0001dd49) list_double2_large_graphic_pane_g1

0x9b8d,	// (0x0001dbc2) list_double2_large_graphic_pane_g2_ParamLimits

0x9b8d,	// (0x0001dbc2) list_double2_large_graphic_pane_g2

0x9b9e,	// (0x0001dbd3) list_double2_large_graphic_pane_g3_ParamLimits

0x9b9e,	// (0x0001dbd3) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002366c) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002366c) list_double2_large_graphic_pane_g

0x9d20,	// (0x0001dd55) list_double2_large_graphic_pane_t1_ParamLimits

0x9d20,	// (0x0001dd55) list_double2_large_graphic_pane_t1

0x9d36,	// (0x0001dd6b) list_double2_large_graphic_pane_t2_ParamLimits

0x9d36,	// (0x0001dd6b) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00023673) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00023673) list_double2_large_graphic_pane_t

0x9d48,	// (0x0001dd7d) list_double_heading_pane_g1_ParamLimits

0x9d48,	// (0x0001dd7d) list_double_heading_pane_g1

0x9d59,	// (0x0001dd8e) list_double_heading_pane_g2_ParamLimits

0x9d59,	// (0x0001dd8e) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00023678) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00023678) list_double_heading_pane_g

0x9d65,	// (0x0001dd9a) list_double_heading_pane_t1_ParamLimits

0x9d65,	// (0x0001dd9a) list_double_heading_pane_t1

0x9d7b,	// (0x0001ddb0) list_double_heading_pane_t2_ParamLimits

0x9d7b,	// (0x0001ddb0) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002367d) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002367d) list_double_heading_pane_t

0x9d8d,	// (0x0001ddc2) list_double_graphic_heading_pane_g1_ParamLimits

0x9d8d,	// (0x0001ddc2) list_double_graphic_heading_pane_g1

0x9d48,	// (0x0001dd7d) list_double_graphic_heading_pane_g2_ParamLimits

0x9d48,	// (0x0001dd7d) list_double_graphic_heading_pane_g2

0x9d59,	// (0x0001dd8e) list_double_graphic_heading_pane_g3_ParamLimits

0x9d59,	// (0x0001dd8e) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00023682) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00023682) list_double_graphic_heading_pane_g

0x9d99,	// (0x0001ddce) list_double_graphic_heading_pane_t1_ParamLimits

0x9d99,	// (0x0001ddce) list_double_graphic_heading_pane_t1

0x9daf,	// (0x0001dde4) list_double_graphic_heading_pane_t2_ParamLimits

0x9daf,	// (0x0001dde4) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00023689) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00023689) list_double_graphic_heading_pane_t

0x9cc6,	// (0x0001dcfb) list_double_time_pane_g1_ParamLimits

0x9cc6,	// (0x0001dcfb) list_double_time_pane_g1

0x9b59,	// (0x0001db8e) list_double_time_pane_g2_ParamLimits

0x9b59,	// (0x0001db8e) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002368e) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002368e) list_double_time_pane_g

0x9dc1,	// (0x0001ddf6) list_double_time_pane_t1_ParamLimits

0x9dc1,	// (0x0001ddf6) list_double_time_pane_t1

0x9dd7,	// (0x0001de0c) list_double_time_pane_t2_ParamLimits

0x9dd7,	// (0x0001de0c) list_double_time_pane_t2

0x9de9,	// (0x0001de1e) list_double_time_pane_t3_ParamLimits

0x9de9,	// (0x0001de1e) list_double_time_pane_t3

0x9dfb,	// (0x0001de30) list_double_time_pane_t4_ParamLimits

0x9dfb,	// (0x0001de30) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00023693) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00023693) list_double_time_pane_t

0x9c67,	// (0x0001dc9c) list_setting_pane_g1_ParamLimits

0x9c67,	// (0x0001dc9c) list_setting_pane_g1

0x9b9e,	// (0x0001dbd3) list_setting_pane_g2_ParamLimits

0x9b9e,	// (0x0001dbd3) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002369c) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002369c) list_setting_pane_g

0x9e0d,	// (0x0001de42) list_setting_pane_t1_ParamLimits

0x9e0d,	// (0x0001de42) list_setting_pane_t1

0x9e24,	// (0x0001de59) list_setting_pane_t2_ParamLimits

0x9e24,	// (0x0001de59) list_setting_pane_t2

0x0002,

0xf66c,	// (0x000236a1) list_setting_pane_t_ParamLimits

0xf66c,	// (0x000236a1) list_setting_pane_t

0x9e63,	// (0x0001de98) set_value_pane_cp_ParamLimits

0x9e63,	// (0x0001de98) set_value_pane_cp

0x9c67,	// (0x0001dc9c) list_setting_number_pane_g1_ParamLimits

0x9c67,	// (0x0001dc9c) list_setting_number_pane_g1

0x9b9e,	// (0x0001dbd3) list_setting_number_pane_g2_ParamLimits

0x9b9e,	// (0x0001dbd3) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0002369c) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0002369c) list_setting_number_pane_g

0x9e71,	// (0x0001dea6) list_setting_number_pane_t1_ParamLimits

0x9e71,	// (0x0001dea6) list_setting_number_pane_t1

0x9e85,	// (0x0001deba) list_setting_number_pane_t2_ParamLimits

0x9e85,	// (0x0001deba) list_setting_number_pane_t2

0x9e9c,	// (0x0001ded1) list_setting_number_pane_t3_ParamLimits

0x9e9c,	// (0x0001ded1) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x000236a8) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x000236a8) list_setting_number_pane_t

0x9e63,	// (0x0001de98) set_value_pane_ParamLimits

0x9e63,	// (0x0001de98) set_value_pane

0xdaf6,	// (0x00021b2b) bg_set_opt_pane_ParamLimits

0xdaf6,	// (0x00021b2b) bg_set_opt_pane

0xdb17,	// (0x00021b4c) set_value_pane_t1

0xdb25,	// (0x00021b5a) slider_set_pane_cp3

0xdb2e,	// (0x00021b63) volume_small_pane_cp

0xdb37,	// (0x00021b6c) list_form_gen_pane

0xdb40,	// (0x00021b75) scroll_pane_cp8

0x9edf,	// (0x0001df14) form_field_data_pane_ParamLimits

0x9edf,	// (0x0001df14) form_field_data_pane

0x9efa,	// (0x0001df2f) form_field_data_wide_pane_ParamLimits

0x9efa,	// (0x0001df2f) form_field_data_wide_pane

0x9f1e,	// (0x0001df53) form_field_popup_pane_ParamLimits

0x9f1e,	// (0x0001df53) form_field_popup_pane

0xdb61,	// (0x00021b96) form_field_popup_wide_pane_ParamLimits

0xdb61,	// (0x00021b96) form_field_popup_wide_pane

0xdb82,	// (0x00021bb7) form_field_slider_pane_ParamLimits

0xdb82,	// (0x00021bb7) form_field_slider_pane

0xdb95,	// (0x00021bca) form_field_slider_wide_pane_ParamLimits

0xdb95,	// (0x00021bca) form_field_slider_wide_pane

0xdba8,	// (0x00021bdd) data_form_pane

0x9f4a,	// (0x0001df7f) form_field_data_pane_t1

0xdbb4,	// (0x00021be9) input_focus_pane

0xdbc2,	// (0x00021bf7) data_form_wide_pane

0xdbff,	// (0x00021c34) form_field_data_wide_pane_t1

0xd8a9,	// (0x000218de) input_focus_pane_cp6

0x9f64,	// (0x0001df99) form_field_popup_pane_t1

0xdbb4,	// (0x00021be9) input_focus_pane_cp7

0xdc21,	// (0x00021c56) list_form_pane

0xdc35,	// (0x00021c6a) form_field_popup_wide_pane_t1

0xdbb4,	// (0x00021be9) input_focus_pane_cp8

0xdc4a,	// (0x00021c7f) list_form_wide_pane

0x9f86,	// (0x0001dfbb) form_field_slider_pane_t1_ParamLimits

0x9f86,	// (0x0001dfbb) form_field_slider_pane_t1

0x9f9e,	// (0x0001dfd3) form_field_slider_pane_t2_ParamLimits

0x9f9e,	// (0x0001dfd3) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x000236b8) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x000236b8) form_field_slider_pane_t

0xba2f,	// (0x0001fa64) input_focus_pane_cp9_ParamLimits

0xba2f,	// (0x0001fa64) input_focus_pane_cp9

0x9fb3,	// (0x0001dfe8) slider_cont_pane_ParamLimits

0x9fb3,	// (0x0001dfe8) slider_cont_pane

0xdc59,	// (0x00021c8e) form_field_slider_wide_pane_t1_ParamLimits

0xdc59,	// (0x00021c8e) form_field_slider_wide_pane_t1

0xdc6b,	// (0x00021ca0) form_field_slider_wide_pane_t2_ParamLimits

0xdc6b,	// (0x00021ca0) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x000236bd) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x000236bd) form_field_slider_wide_pane_t

0xba2f,	// (0x0001fa64) input_focus_pane_cp10_ParamLimits

0xba2f,	// (0x0001fa64) input_focus_pane_cp10

0x9fc7,	// (0x0001dffc) slider_cont_pane_cp1_ParamLimits

0x9fc7,	// (0x0001dffc) slider_cont_pane_cp1

0x9fdb,	// (0x0001e010) slider_form_pane_cp

0xdc7d,	// (0x00021cb2) input_focus_pane_g1

0xdc85,	// (0x00021cba) input_focus_pane_g2

0xdc8d,	// (0x00021cc2) input_focus_pane_g3

0xdc95,	// (0x00021cca) input_focus_pane_g4

0xdc9d,	// (0x00021cd2) input_focus_pane_g5

0xdca5,	// (0x00021cda) input_focus_pane_g6

0xdcad,	// (0x00021ce2) input_focus_pane_g7

0xdcb5,	// (0x00021cea) input_focus_pane_g8

0xdcbd,	// (0x00021cf2) input_focus_pane_g9

0xb9cb,	// (0x0001fa00) input_focus_pane_g10

0x0009,

0xf68d,	// (0x000236c2) input_focus_pane_g

0x21d8,	// (0x0001620d) wait_border_pane_g3_copy1

0x9fe3,	// (0x0001e018) data_form_pane_t1

0xb9cb,	// (0x0001fa00) wait_anim_pane_g1_copy1

0xb5a3,	// (0x0001f5d8) data_form_wide_pane_t1

0xdcc5,	// (0x00021cfa) list_form_graphic_pane_cp_ParamLimits

0xdcc5,	// (0x00021cfa) list_form_graphic_pane_cp

0x3173,	// (0x000171a8) slider_form_pane_g1

0x317c,	// (0x000171b1) slider_form_pane_g2

0x0006,

0xf98b,	// (0x000239c0) slider_form_pane_g

0x9fff,	// (0x0001e034) list_form_graphic_pane_ParamLimits

0x9fff,	// (0x0001e034) list_form_graphic_pane

0xdcd7,	// (0x00021d0c) list_form_graphic_pane_g1

0xdcdf,	// (0x00021d14) list_form_graphic_pane_t1_ParamLimits

0xdcdf,	// (0x00021d14) list_form_graphic_pane_t1

0xd4ff,	// (0x00021534) list_highlight_pane_cp5_ParamLimits

0xd4ff,	// (0x00021534) list_highlight_pane_cp5

0xa010,	// (0x0001e045) find_pane_g1

0xdcf4,	// (0x00021d29) input_find_pane

0xa019,	// (0x0001e04e) input_find_pane_g1_ParamLimits

0xa019,	// (0x0001e04e) input_find_pane_g1

0xa025,	// (0x0001e05a) input_find_pane_t1_ParamLimits

0xa025,	// (0x0001e05a) input_find_pane_t1

0xa03a,	// (0x0001e06f) input_find_pane_t2_ParamLimits

0xa03a,	// (0x0001e06f) input_find_pane_t2

0x0001,

0xf6a2,	// (0x000236d7) input_find_pane_t_ParamLimits

0xf6a2,	// (0x000236d7) input_find_pane_t

0xdcfd,	// (0x00021d32) input_focus_pane_cp5_ParamLimits

0xdcfd,	// (0x00021d32) input_focus_pane_cp5

0xdd0b,	// (0x00021d40) bg_popup_window_pane_cp2_ParamLimits

0xdd0b,	// (0x00021d40) bg_popup_window_pane_cp2

0xdd18,	// (0x00021d4d) listscroll_menu_pane_ParamLimits

0xdd18,	// (0x00021d4d) listscroll_menu_pane

0xa05b,	// (0x0001e090) popup_submenu_window_ParamLimits

0xa05b,	// (0x0001e090) popup_submenu_window

0xdd24,	// (0x00021d59) find_popup_pane_g1

0xdd2c,	// (0x00021d61) input_popup_find_pane_cp

0xdcfd,	// (0x00021d32) input_focus_pane_cp4_ParamLimits

0xdcfd,	// (0x00021d32) input_focus_pane_cp4

0xdd36,	// (0x00021d6b) input_popup_find_pane_t1_ParamLimits

0xdd36,	// (0x00021d6b) input_popup_find_pane_t1

0xb9d5,	// (0x0001fa0a) bg_popup_sub_pane_cp

0xdd64,	// (0x00021d99) listscroll_popup_sub_pane

0xdd6c,	// (0x00021da1) list_submenu_pane_ParamLimits

0xdd6c,	// (0x00021da1) list_submenu_pane

0xdd7d,	// (0x00021db2) scroll_pane_cp4

0xdd85,	// (0x00021dba) list_single_popup_submenu_pane_ParamLimits

0xdd85,	// (0x00021dba) list_single_popup_submenu_pane

0xdd9a,	// (0x00021dcf) list_single_popup_submenu_pane_g1

0xdda2,	// (0x00021dd7) list_single_popup_submenu_pane_t1_ParamLimits

0xdda2,	// (0x00021dd7) list_single_popup_submenu_pane_t1

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp1_ParamLimits

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp1

0xa099,	// (0x0001e0ce) tabs_2_active_pane_g1

0xa0a1,	// (0x0001e0d6) tabs_2_active_pane_t1

0xba2f,	// (0x0001fa64) bg_passive_tab_pane_cp1_ParamLimits

0xba2f,	// (0x0001fa64) bg_passive_tab_pane_cp1

0xa099,	// (0x0001e0ce) tabs_2_passive_pane_g1

0xa0a1,	// (0x0001e0d6) tabs_2_passive_pane_t1

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp4

0xa0b3,	// (0x0001e0e8) tabs_2_long_active_pane_t1

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp4

0xe923,	// (0x00022958) list_single_midp_graphic_pane_g4_ParamLimits

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp5

0xa0c6,	// (0x0001e0fb) tabs_3_long_active_pane_t1

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp5

0xe923,	// (0x00022958) list_single_midp_graphic_pane_g4

0xd4ff,	// (0x00021534) bg_popup_window_pane_cp13_ParamLimits

0xd4ff,	// (0x00021534) bg_popup_window_pane_cp13

0xddc0,	// (0x00021df5) listscroll_popup_fast_pane_ParamLimits

0xddc0,	// (0x00021df5) listscroll_popup_fast_pane

0xddcf,	// (0x00021e04) grid_popup_fast_pane_ParamLimits

0xddcf,	// (0x00021e04) grid_popup_fast_pane

0xdde1,	// (0x00021e16) scroll_pane_cp9_ParamLimits

0xdde1,	// (0x00021e16) scroll_pane_cp9

0x509f,	// (0x000190d4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x509f,	// (0x000190d4) list_single_graphic_hl_pane_t1_cp2

0xde05,	// (0x00021e3a) input_focus_pane_cp20_ParamLimits

0xde05,	// (0x00021e3a) input_focus_pane_cp20

0xde13,	// (0x00021e48) query_popup_data_pane_t1_ParamLimits

0xde13,	// (0x00021e48) query_popup_data_pane_t1

0xde26,	// (0x00021e5b) query_popup_data_pane_t2_ParamLimits

0xde26,	// (0x00021e5b) query_popup_data_pane_t2

0xde6c,	// (0x00021ea1) query_popup_data_pane_t3_ParamLimits

0xde6c,	// (0x00021ea1) query_popup_data_pane_t3

0xdead,	// (0x00021ee2) query_popup_data_pane_t4_ParamLimits

0xdead,	// (0x00021ee2) query_popup_data_pane_t4

0xdee9,	// (0x00021f1e) query_popup_data_pane_t5_ParamLimits

0xdee9,	// (0x00021f1e) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x000236dc) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x000236dc) query_popup_data_pane_t

0xdc7d,	// (0x00021cb2) bg_set_opt_pane_g1

0xdc85,	// (0x00021cba) bg_set_opt_pane_g2

0xdc8d,	// (0x00021cc2) bg_set_opt_pane_g3

0xdc95,	// (0x00021cca) bg_set_opt_pane_g4

0xdc9d,	// (0x00021cd2) bg_set_opt_pane_g5

0xdca5,	// (0x00021cda) bg_set_opt_pane_g6

0xdcad,	// (0x00021ce2) bg_set_opt_pane_g7

0xdcb5,	// (0x00021cea) bg_set_opt_pane_g8

0xdcbd,	// (0x00021cf2) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x000236e7) bg_set_opt_pane_g

0xe66f,	// (0x000226a4) control_top_pane_stacon_ParamLimits

0xe66f,	// (0x000226a4) control_top_pane_stacon

0xe6c2,	// (0x000226f7) signal_pane_stacon_ParamLimits

0xe6c2,	// (0x000226f7) signal_pane_stacon

0x08ad,	// (0x000148e2) stacon_top_pane_g1_ParamLimits

0x08ad,	// (0x000148e2) stacon_top_pane_g1

0xe6e7,	// (0x0002271c) title_pane_stacon_ParamLimits

0xe6e7,	// (0x0002271c) title_pane_stacon

0xe711,	// (0x00022746) uni_indicator_pane_stacon_ParamLimits

0xe711,	// (0x00022746) uni_indicator_pane_stacon

0xe729,	// (0x0002275e) battery_pane_stacon_ParamLimits

0xe729,	// (0x0002275e) battery_pane_stacon

0xe76d,	// (0x000227a2) control_bottom_pane_stacon_ParamLimits

0xe76d,	// (0x000227a2) control_bottom_pane_stacon

0xe790,	// (0x000227c5) navi_pane_stacon_ParamLimits

0xe790,	// (0x000227c5) navi_pane_stacon

0x08cf,	// (0x00014904) stacon_bottom_pane_g1_ParamLimits

0x08cf,	// (0x00014904) stacon_bottom_pane_g1

0xe3d5,	// (0x0002240a) aid_levels_signal_lsc_ParamLimits

0xe3d5,	// (0x0002240a) aid_levels_signal_lsc

0xe3ec,	// (0x00022421) signal_pane_stacon_g1_ParamLimits

0xe3ec,	// (0x00022421) signal_pane_stacon_g1

0xe400,	// (0x00022435) signal_pane_stacon_g2_ParamLimits

0xe400,	// (0x00022435) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x000236fa) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x000236fa) signal_pane_stacon_g

0xe435,	// (0x0002246a) title_pane_stacon_t1_ParamLimits

0xe435,	// (0x0002246a) title_pane_stacon_t1

0xdf2d,	// (0x00021f62) uni_indicator_pane_stacon_g1

0xdf37,	// (0x00021f6c) uni_indicator_pane_stacon_g2

0xdf41,	// (0x00021f76) uni_indicator_pane_stacon_g3

0xdf4b,	// (0x00021f80) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x00023706) uni_indicator_pane_stacon_g

0xe45a,	// (0x0002248f) control_top_pane_stacon_g1

0xe462,	// (0x00022497) control_top_pane_stacon_t1_ParamLimits

0xe462,	// (0x00022497) control_top_pane_stacon_t1

0xe499,	// (0x000224ce) aid_levels_battery_lsc_ParamLimits

0xe499,	// (0x000224ce) aid_levels_battery_lsc

0xe4b1,	// (0x000224e6) battery_pane_stacon_g1_ParamLimits

0xe4b1,	// (0x000224e6) battery_pane_stacon_g1

0xe4c4,	// (0x000224f9) battery_pane_stacon_g2_ParamLimits

0xe4c4,	// (0x000224f9) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0002370f) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0002370f) battery_pane_stacon_g

0xe502,	// (0x00022537) navi_icon_pane_stacon

0xe516,	// (0x0002254b) navi_navi_pane_stacon

0xe502,	// (0x00022537) navi_text_pane_stacon

0xe45a,	// (0x0002248f) control_bottom_pane_stacon_g1

0xe52c,	// (0x00022561) control_bottom_pane_stacon_t1_ParamLimits

0xe52c,	// (0x00022561) control_bottom_pane_stacon_t1

0xa0d8,	// (0x0001e10d) grid_app_pane_ParamLimits

0xa0d8,	// (0x0001e10d) grid_app_pane

0xa110,	// (0x0001e145) scroll_pane_cp15_ParamLimits

0xa110,	// (0x0001e145) scroll_pane_cp15

0xa129,	// (0x0001e15e) cell_app_pane_ParamLimits

0xa129,	// (0x0001e15e) cell_app_pane

0xa176,	// (0x0001e1ab) cell_app_pane_g1_ParamLimits

0xa176,	// (0x0001e1ab) cell_app_pane_g1

0xdf6f,	// (0x00021fa4) cell_app_pane_g2_ParamLimits

0xdf6f,	// (0x00021fa4) cell_app_pane_g2

0x0001,

0xf6df,	// (0x00023714) cell_app_pane_g_ParamLimits

0xf6df,	// (0x00023714) cell_app_pane_g

0xdf7b,	// (0x00021fb0) cell_app_pane_t1_ParamLimits

0xdf7b,	// (0x00021fb0) cell_app_pane_t1

0xdf92,	// (0x00021fc7) grid_highlight_pane_ParamLimits

0xdf92,	// (0x00021fc7) grid_highlight_pane

0xdc7d,	// (0x00021cb2) cell_highlight_pane_g1

0xdc85,	// (0x00021cba) cell_highlight_pane_g2

0xdc8d,	// (0x00021cc2) cell_highlight_pane_g3

0xdc95,	// (0x00021cca) cell_highlight_pane_g4

0xdc9d,	// (0x00021cd2) cell_highlight_pane_g5

0xdca5,	// (0x00021cda) cell_highlight_pane_g6

0xdcad,	// (0x00021ce2) cell_highlight_pane_g7

0xdcb5,	// (0x00021cea) cell_highlight_pane_g8

0xdcbd,	// (0x00021cf2) cell_highlight_pane_g9

0xb9cb,	// (0x0001fa00) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x000236c2) cell_highlight_pane_g

0xdfa3,	// (0x00021fd8) bg_scroll_pane

0xe56d,	// (0x000225a2) scroll_handle_pane

0xdfea,	// (0x0002201f) scroll_bg_pane_g1

0xdfff,	// (0x00022034) scroll_bg_pane_g2

0xe017,	// (0x0002204c) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x00023719) scroll_bg_pane_g

0xe02c,	// (0x00022061) scroll_handle_focus_pane_ParamLimits

0xe02c,	// (0x00022061) scroll_handle_focus_pane

0xdfea,	// (0x0002201f) scroll_handle_pane_g1

0xe039,	// (0x0002206e) scroll_handle_pane_g2

0xe017,	// (0x0002204c) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x00023720) scroll_handle_pane_g

0xdcfd,	// (0x00021d32) bg_popup_sub_pane_cp21_ParamLimits

0xdcfd,	// (0x00021d32) bg_popup_sub_pane_cp21

0xe04d,	// (0x00022082) popup_fep_japan_predictive_window_t1_ParamLimits

0xe04d,	// (0x00022082) popup_fep_japan_predictive_window_t1

0xe064,	// (0x00022099) popup_fep_japan_predictive_window_t2_ParamLimits

0xe064,	// (0x00022099) popup_fep_japan_predictive_window_t2

0xe097,	// (0x000220cc) popup_fep_japan_predictive_window_t3_ParamLimits

0xe097,	// (0x000220cc) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x00023727) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x00023727) popup_fep_japan_predictive_window_t

0xb9d5,	// (0x0001fa0a) bg_popup_sub_pane_cp23

0xe0ce,	// (0x00022103) listscroll_japin_cand_pane

0xe0d6,	// (0x0002210b) popup_fep_japan_candidate_window_t1

0xe0e4,	// (0x00022119) candidate_pane_ParamLimits

0xe0e4,	// (0x00022119) candidate_pane

0xe0f6,	// (0x0002212b) scroll_pane_cp30

0xe100,	// (0x00022135) list_single_popup_jap_candidate_pane_ParamLimits

0xe100,	// (0x00022135) list_single_popup_jap_candidate_pane

0xb9d5,	// (0x0001fa0a) list_highlight_pane_cp30

0xe114,	// (0x00022149) list_single_popup_jap_candidate_pane_t1

0xa196,	// (0x0001e1cb) level_1_signal

0xa1a8,	// (0x0001e1dd) level_2_signal

0xa1bb,	// (0x0001e1f0) level_3_signal

0xa1ce,	// (0x0001e203) level_4_signal

0xa1e1,	// (0x0001e216) level_5_signal

0xa1f4,	// (0x0001e229) level_6_signal

0xa207,	// (0x0001e23c) level_7_signal

0xa196,	// (0x0001e1cb) level_1_battery

0xa1a8,	// (0x0001e1dd) level_2_battery

0xa1bb,	// (0x0001e1f0) level_3_battery

0xa1ce,	// (0x0001e203) level_4_battery

0xa1e1,	// (0x0001e216) level_5_battery

0xa1f4,	// (0x0001e229) level_6_battery

0xa207,	// (0x0001e23c) level_7_battery

0xe13b,	// (0x00022170) list_menu_pane_ParamLimits

0xe13b,	// (0x00022170) list_menu_pane

0xe151,	// (0x00022186) scroll_pane_cp25_ParamLimits

0xe151,	// (0x00022186) scroll_pane_cp25

0xe16a,	// (0x0002219f) list_double2_graphic_pane_cp2_ParamLimits

0xe16a,	// (0x0002219f) list_double2_graphic_pane_cp2

0xe16a,	// (0x0002219f) list_double2_large_graphic_pane_cp2_ParamLimits

0xe16a,	// (0x0002219f) list_double2_large_graphic_pane_cp2

0xe16a,	// (0x0002219f) list_double2_pane_cp2_ParamLimits

0xe16a,	// (0x0002219f) list_double2_pane_cp2

0xe16a,	// (0x0002219f) list_double_graphic_pane_cp2_ParamLimits

0xe16a,	// (0x0002219f) list_double_graphic_pane_cp2

0xe16a,	// (0x0002219f) list_double_large_graphic_pane_cp2_ParamLimits

0xe16a,	// (0x0002219f) list_double_large_graphic_pane_cp2

0xe16a,	// (0x0002219f) list_double_number_pane_cp2_ParamLimits

0xe16a,	// (0x0002219f) list_double_number_pane_cp2

0xe16a,	// (0x0002219f) list_double_pane_cp2_ParamLimits

0xe16a,	// (0x0002219f) list_double_pane_cp2

0xa22d,	// (0x0001e262) list_single_2graphic_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_2graphic_pane_cp2

0xa22d,	// (0x0001e262) list_single_graphic_heading_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_graphic_heading_pane_cp2

0xa22d,	// (0x0001e262) list_single_graphic_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_graphic_pane_cp2

0xa22d,	// (0x0001e262) list_single_heading_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_heading_pane_cp2

0xe17a,	// (0x000221af) list_single_large_graphic_pane_cp2_ParamLimits

0xe17a,	// (0x000221af) list_single_large_graphic_pane_cp2

0xa22d,	// (0x0001e262) list_single_number_heading_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_number_heading_pane_cp2

0xa22d,	// (0x0001e262) list_single_number_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_number_pane_cp2

0xa22d,	// (0x0001e262) list_single_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_pane_cp2

0x0668,	// (0x0001469d) bg_popup_sub_pane_cp22

0xe61f,	// (0x00022654) popup_side_volume_key_window_g1

0xe649,	// (0x0002267e) popup_side_volume_key_window_t1

0xe667,	// (0x0002269c) volume_small_pane_cp1

0xba2f,	// (0x0001fa64) bg_popup_sub_pane_cp24_ParamLimits

0xba2f,	// (0x0001fa64) bg_popup_sub_pane_cp24

0x067e,	// (0x000146b3) fep_china_uni_candidate_pane_ParamLimits

0x067e,	// (0x000146b3) fep_china_uni_candidate_pane

0x0692,	// (0x000146c7) fep_china_uni_entry_pane

0x06a2,	// (0x000146d7) popup_fep_china_uni_window_g1

0x06be,	// (0x000146f3) fep_china_uni_entry_pane_g1

0x06c8,	// (0x000146fd) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x00023758) fep_china_uni_entry_pane_g

0x06d2,	// (0x00014707) fep_entry_item_pane

0x06dc,	// (0x00014711) fep_candidate_item_pane

0x06e4,	// (0x00014719) fep_china_uni_candidate_pane_g1

0x06ee,	// (0x00014723) fep_china_uni_candidate_pane_g2

0x06f6,	// (0x0001472b) fep_china_uni_candidate_pane_g3

0x06fe,	// (0x00014733) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0002375d) fep_china_uni_candidate_pane_g

0xb9cb,	// (0x0001fa00) fep_entry_item_pane_g1

0x0708,	// (0x0001473d) fep_entry_item_pane_t1_ParamLimits

0x0708,	// (0x0001473d) fep_entry_item_pane_t1

0x071e,	// (0x00014753) fep_candidate_item_pane_t1_ParamLimits

0x071e,	// (0x00014753) fep_candidate_item_pane_t1

0x0733,	// (0x00014768) fep_candidate_item_pane_t2_ParamLimits

0x0733,	// (0x00014768) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x00023766) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x00023766) fep_candidate_item_pane_t

0xd4ff,	// (0x00021534) list_highlight_pane_cp31_ParamLimits

0xd4ff,	// (0x00021534) list_highlight_pane_cp31

0x0745,	// (0x0001477a) level_1_signal_lsc

0x074e,	// (0x00014783) level_2_signal_lsc

0x0757,	// (0x0001478c) level_3_signal_lsc

0x0760,	// (0x00014795) level_4_signal_lsc

0x0769,	// (0x0001479e) level_5_signal_lsc

0x0772,	// (0x000147a7) level_6_signal_lsc

0x077b,	// (0x000147b0) level_7_signal_lsc

0x077b,	// (0x000147b0) level_1_battery_lsc

0x0784,	// (0x000147b9) level_2_battery_lsc

0x078d,	// (0x000147c2) level_3_battery_lsc

0x0796,	// (0x000147cb) level_4_battery_lsc

0x079f,	// (0x000147d4) level_5_battery_lsc

0x07a8,	// (0x000147dd) level_6_battery_lsc

0x0745,	// (0x0001477a) level_7_battery_lsc

0x07b1,	// (0x000147e6) scroll_handle_focus_pane_g1

0x07ba,	// (0x000147ef) scroll_handle_focus_pane_g2

0x07c3,	// (0x000147f8) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0002376b) scroll_handle_focus_pane_g

0xa2bf,	// (0x0001e2f4) list_single_2graphic_pane_g1_ParamLimits

0xa2bf,	// (0x0001e2f4) list_single_2graphic_pane_g1

0x9b22,	// (0x0001db57) list_single_2graphic_pane_g2_ParamLimits

0x9b22,	// (0x0001db57) list_single_2graphic_pane_g2

0x1a93,	// (0x00015ac8) list_single_2graphic_pane_g3_ParamLimits

0x1a93,	// (0x00015ac8) list_single_2graphic_pane_g3

0xa2cb,	// (0x0001e300) list_single_2graphic_pane_g4_ParamLimits

0xa2cb,	// (0x0001e300) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x00023772) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x00023772) list_single_2graphic_pane_g

0xa2dc,	// (0x0001e311) list_single_2graphic_pane_t1_ParamLimits

0xa2dc,	// (0x0001e311) list_single_2graphic_pane_t1

0xa30a,	// (0x0001e33f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa30a,	// (0x0001e33f) list_double2_graphic_large_graphic_pane_g1

0x9b8d,	// (0x0001dbc2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9b8d,	// (0x0001dbc2) list_double2_graphic_large_graphic_pane_g2

0x9b9e,	// (0x0001dbd3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9b9e,	// (0x0001dbd3) list_double2_graphic_large_graphic_pane_g3

0xa31c,	// (0x0001e351) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa31c,	// (0x0001e351) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0002377b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0002377b) list_double2_graphic_large_graphic_pane_g

0xa328,	// (0x0001e35d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa328,	// (0x0001e35d) list_double2_graphic_large_graphic_pane_t1

0xa33e,	// (0x0001e373) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa33e,	// (0x0001e373) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x00023784) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x00023784) list_double2_graphic_large_graphic_pane_t

0x0991,	// (0x000149c6) popup_fast_swap_window_ParamLimits

0x0991,	// (0x000149c6) popup_fast_swap_window

0x09af,	// (0x000149e4) popup_side_volume_key_window

0x09cd,	// (0x00014a02) stacon_top_pane

0x09d7,	// (0x00014a0c) status_pane_ParamLimits

0x09d7,	// (0x00014a0c) status_pane

0x09cd,	// (0x00014a02) status_small_pane

0xb9d5,	// (0x0001fa0a) control_pane

0xb9d5,	// (0x0001fa0a) stacon_bottom_pane

0xdb40,	// (0x00021b75) scroll_pane_cp121

0xdb37,	// (0x00021b6c) set_content_pane

0xa350,	// (0x0001e385) bg_active_tab_pane_g1_cp1

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp1

0xa359,	// (0x0001e38e) bg_active_tab_pane_g3_cp1

0xa350,	// (0x0001e385) bg_passive_tab_pane_g1_cp1

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp1

0xa359,	// (0x0001e38e) bg_passive_tab_pane_g3_cp1

0xa362,	// (0x0001e397) bg_active_tab_pane_g1_cp2

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp2

0xa36b,	// (0x0001e3a0) bg_active_tab_pane_g3_cp2

0xa362,	// (0x0001e397) bg_passive_tab_pane_g1_cp2

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp2

0xa36b,	// (0x0001e3a0) bg_passive_tab_pane_g3_cp2

0xa374,	// (0x0001e3a9) bg_active_tab_pane_g1_cp3

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp3

0xa37d,	// (0x0001e3b2) bg_active_tab_pane_g3_cp3

0xa374,	// (0x0001e3a9) bg_passive_tab_pane_g1_cp3

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp3

0xa37d,	// (0x0001e3b2) bg_passive_tab_pane_g3_cp3

0xa386,	// (0x0001e3bb) bg_active_tab_pane_g1_cp4

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp4

0xa38f,	// (0x0001e3c4) bg_active_tab_pane_g3_cp4

0xa386,	// (0x0001e3bb) bg_passive_tab_pane_g1_cp4

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp4

0xa38f,	// (0x0001e3c4) bg_passive_tab_pane_g3_cp4

0x08eb,	// (0x00014920) bg_active_tab_pane_g1_cp5

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp5

0x08f4,	// (0x00014929) bg_active_tab_pane_g3_cp5

0x08eb,	// (0x00014920) bg_passive_tab_pane_g1_cp5

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp5

0x08f4,	// (0x00014929) bg_passive_tab_pane_g3_cp5

0x3836,	// (0x0001786b) list_set_graphic_pane_ParamLimits

0x3836,	// (0x0001786b) list_set_graphic_pane

0xb9d5,	// (0x0001fa0a) bg_set_opt_pane_cp4

0xa398,	// (0x0001e3cd) list_set_graphic_pane_g1_ParamLimits

0xa398,	// (0x0001e3cd) list_set_graphic_pane_g1

0xa3a4,	// (0x0001e3d9) list_set_graphic_pane_g2_ParamLimits

0xa3a4,	// (0x0001e3d9) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x00023789) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x00023789) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x00023b11) volume_small_pane_cp_g

0xa3c8,	// (0x0001e3fd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa3c8,	// (0x0001e3fd) list_double2_large_graphic_pane_g1_cp2

0xa3d6,	// (0x0001e40b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa3d6,	// (0x0001e40b) list_double2_large_graphic_pane_g2_cp2

0x0961,	// (0x00014996) list_double2_large_graphic_pane_g3_cp2

0x0969,	// (0x0001499e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0969,	// (0x0001499e) list_double2_large_graphic_pane_t1_cp2

0x097f,	// (0x000149b4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x097f,	// (0x000149b4) list_double2_large_graphic_pane_t2_cp2

0xb305,	// (0x0001f33a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb305,	// (0x0001f33a) list_double_large_graphic_pane_g1_cp2

0xb318,	// (0x0001f34d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb318,	// (0x0001f34d) list_double_large_graphic_pane_g2_cp2

0x0af5,	// (0x00014b2a) list_double_large_graphic_pane_g3_cp2

0x2ce0,	// (0x00016d15) list_double_large_graphic_pane_g4_cp

0x2ce8,	// (0x00016d1d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2ce8,	// (0x00016d1d) list_double_large_graphic_pane_t1_cp2

0x2cff,	// (0x00016d34) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2cff,	// (0x00016d34) list_double_large_graphic_pane_t2_cp2

0xa3e7,	// (0x0001e41c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa3e7,	// (0x0001e41c) list_double2_graphic_pane_g1_cp2

0xa3f5,	// (0x0001e42a) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa3f5,	// (0x0001e42a) list_double2_graphic_pane_g2_cp2

0xa406,	// (0x0001e43b) list_double2_graphic_pane_g3_cp2

0x0a0e,	// (0x00014a43) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0a0e,	// (0x00014a43) list_double2_graphic_pane_t1_cp2

0x0a24,	// (0x00014a59) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0a24,	// (0x00014a59) list_double2_graphic_pane_t2_cp2

0x0a36,	// (0x00014a6b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0a36,	// (0x00014a6b) list_single_number_heading_pane_g1_cp2

0x0a42,	// (0x00014a77) list_single_number_heading_pane_g2_cp2

0x0a4a,	// (0x00014a7f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0a4a,	// (0x00014a7f) list_single_number_heading_pane_t1_cp2

0xa410,	// (0x0001e445) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa410,	// (0x0001e445) list_single_number_heading_pane_t2_cp2

0x0a74,	// (0x00014aa9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0a74,	// (0x00014aa9) list_single_number_heading_pane_t3_cp2

0x0a36,	// (0x00014a6b) list_single_heading_pane_g1_cp2_ParamLimits

0x0a36,	// (0x00014a6b) list_single_heading_pane_g1_cp2

0x0a42,	// (0x00014a77) list_single_heading_pane_g2_cp2

0x0a4a,	// (0x00014a7f) list_single_heading_pane_t1_cp2_ParamLimits

0x0a4a,	// (0x00014a7f) list_single_heading_pane_t1_cp2

0xb2f1,	// (0x0001f326) list_single_heading_pane_t2_cp2_ParamLimits

0xb2f1,	// (0x0001f326) list_single_heading_pane_t2_cp2

0x29fe,	// (0x00016a33) list_double_graphic_pane_g1_cp2_ParamLimits

0x29fe,	// (0x00016a33) list_double_graphic_pane_g1_cp2

0x2a0a,	// (0x00016a3f) list_double_graphic_pane_g2_cp2_ParamLimits

0x2a0a,	// (0x00016a3f) list_double_graphic_pane_g2_cp2

0x2a19,	// (0x00016a4e) list_double_graphic_pane_g3_cp2

0x2a21,	// (0x00016a56) list_double_graphic_pane_t1_cp2_ParamLimits

0x2a21,	// (0x00016a56) list_double_graphic_pane_t1_cp2

0x2a37,	// (0x00016a6c) list_double_graphic_pane_t2_cp2_ParamLimits

0x2a37,	// (0x00016a6c) list_double_graphic_pane_t2_cp2

0x0ae9,	// (0x00014b1e) list_double_number_pane_g1_cp2_ParamLimits

0x0ae9,	// (0x00014b1e) list_double_number_pane_g1_cp2

0x0af5,	// (0x00014b2a) list_double_number_pane_g2_cp2

0xb28b,	// (0x0001f2c0) list_double_number_pane_t1_cp2_ParamLimits

0xb28b,	// (0x0001f2c0) list_double_number_pane_t1_cp2

0x29d6,	// (0x00016a0b) list_double_number_pane_t2_cp2_ParamLimits

0x29d6,	// (0x00016a0b) list_double_number_pane_t2_cp2

0x29ec,	// (0x00016a21) list_double_number_pane_t3_cp2_ParamLimits

0x29ec,	// (0x00016a21) list_double_number_pane_t3_cp2

0xb1d9,	// (0x0001f20e) list_single_graphic_pane_g1_cp2_ParamLimits

0xb1d9,	// (0x0001f20e) list_single_graphic_pane_g1_cp2

0x0b4f,	// (0x00014b84) list_single_graphic_pane_g2_cp2_ParamLimits

0x0b4f,	// (0x00014b84) list_single_graphic_pane_g2_cp2

0x0b5b,	// (0x00014b90) list_single_graphic_pane_g3_cp2

0x2881,	// (0x000168b6) list_single_graphic_pane_t1_cp2_ParamLimits

0x2881,	// (0x000168b6) list_single_graphic_pane_t1_cp2

0x0b4f,	// (0x00014b84) list_single_number_pane_g1_cp2_ParamLimits

0x0b4f,	// (0x00014b84) list_single_number_pane_g1_cp2

0x0b5b,	// (0x00014b90) list_single_number_pane_g2_cp2

0x2881,	// (0x000168b6) list_single_number_pane_t1_cp2_ParamLimits

0x2881,	// (0x000168b6) list_single_number_pane_t1_cp2

0xb1c5,	// (0x0001f1fa) list_single_number_pane_t2_cp2_ParamLimits

0xb1c5,	// (0x0001f1fa) list_single_number_pane_t2_cp2

0xa3d6,	// (0x0001e40b) list_double2_pane_g1_cp2_ParamLimits

0xa3d6,	// (0x0001e40b) list_double2_pane_g1_cp2

0x0961,	// (0x00014996) list_double2_pane_g2_cp2

0x0ac1,	// (0x00014af6) list_double2_pane_t1_cp2_ParamLimits

0x0ac1,	// (0x00014af6) list_double2_pane_t1_cp2

0x0ad7,	// (0x00014b0c) list_double2_pane_t2_cp2_ParamLimits

0x0ad7,	// (0x00014b0c) list_double2_pane_t2_cp2

0x0ae9,	// (0x00014b1e) list_double_pane_g1_cp2_ParamLimits

0x0ae9,	// (0x00014b1e) list_double_pane_g1_cp2

0x0af5,	// (0x00014b2a) list_double_pane_g2_cp2

0x0afd,	// (0x00014b32) list_double_pane_t1_cp2_ParamLimits

0x0afd,	// (0x00014b32) list_double_pane_t1_cp2

0x0b13,	// (0x00014b48) list_double_pane_t2_cp2_ParamLimits

0x0b13,	// (0x00014b48) list_double_pane_t2_cp2

0x0b3f,	// (0x00014b74) list_single_pane_cp2_g3

0x0b4f,	// (0x00014b84) list_single_pane_g1_cp2_ParamLimits

0x0b4f,	// (0x00014b84) list_single_pane_g1_cp2

0x0b5b,	// (0x00014b90) list_single_pane_g2_cp2

0x0b63,	// (0x00014b98) list_single_pane_t1_cp2_ParamLimits

0x0b63,	// (0x00014b98) list_single_pane_t1_cp2

0xa43e,	// (0x0001e473) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa43e,	// (0x0001e473) list_single_large_graphic_pane_g1_cp2

0x0b89,	// (0x00014bbe) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0b89,	// (0x00014bbe) list_single_large_graphic_pane_g2_cp2

0x0b95,	// (0x00014bca) list_single_large_graphic_pane_g3_cp2

0x0b9d,	// (0x00014bd2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0b9d,	// (0x00014bd2) list_single_large_graphic_pane_g4_cp1

0x0bb7,	// (0x00014bec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0bb7,	// (0x00014bec) list_single_large_graphic_pane_t1_cp2

0x284b,	// (0x00016880) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x284b,	// (0x00016880) list_single_graphic_heading_pane_g1_cp2

0xb1a0,	// (0x0001f1d5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb1a0,	// (0x0001f1d5) list_single_graphic_heading_pane_g4_cp2

0x0b5b,	// (0x00014b90) list_single_graphic_heading_pane_g5_cp2

0x2857,	// (0x0001688c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2857,	// (0x0001688c) list_single_graphic_heading_pane_t1_cp2

0xb1b1,	// (0x0001f1e6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb1b1,	// (0x0001f1e6) list_single_graphic_heading_pane_t2_cp2

0x280c,	// (0x00016841) list_single_2graphic_pane_g1_cp2_ParamLimits

0x280c,	// (0x00016841) list_single_2graphic_pane_g1_cp2

0xb1a0,	// (0x0001f1d5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb1a0,	// (0x0001f1d5) list_single_2graphic_pane_g2_cp2

0x0b5b,	// (0x00014b90) list_single_2graphic_pane_g3_cp2

0x2829,	// (0x0001685e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2829,	// (0x0001685e) list_single_2graphic_pane_g4_cp2

0x2835,	// (0x0001686a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2835,	// (0x0001686a) list_single_2graphic_pane_t1_cp2

0xb9cb,	// (0x0001fa00) list_highlight_pane_g10_cp1

0x23e4,	// (0x00016419) list_highlight_pane_g1_cp1

0x23ec,	// (0x00016421) list_highlight_pane_g2_cp1

0x23f4,	// (0x00016429) list_highlight_pane_g3_cp1

0x23fc,	// (0x00016431) list_highlight_pane_g4_cp1

0x2404,	// (0x00016439) list_highlight_pane_g5_cp1

0x240c,	// (0x00016441) list_highlight_pane_g6_cp1

0x2414,	// (0x00016449) list_highlight_pane_g7_cp1

0x241c,	// (0x00016451) list_highlight_pane_g8_cp1

0x2424,	// (0x00016459) list_highlight_pane_g9_cp1

0xb166,	// (0x0001f19b) form_field_slider_pane_t3

0xb174,	// (0x0001f1a9) form_field_slider_pane_t4

0x2320,	// (0x00016355) slider_form_pane_ParamLimits

0x2320,	// (0x00016355) slider_form_pane

0xb9d5,	// (0x0001fa0a) control_abbreviations

0xb9d5,	// (0x0001fa0a) control_conventions

0xb9d5,	// (0x0001fa0a) control_definitions

0xb9d5,	// (0x0001fa0a) format_table_attribute

0x2b0c,	// (0x00016b41) bg_popup_preview_window_pane_g9

0xb9d5,	// (0x0001fa0a) format_table_data2

0xb9d5,	// (0x0001fa0a) format_table_data3

0xb9d5,	// (0x0001fa0a) format_table_data_example

0x0008,

0xb9d5,	// (0x0001fa0a) intro_purpose

0xf8eb,	// (0x00023920) bg_popup_preview_window_pane_g

0xb9d5,	// (0x0001fa0a) texts_category

0xb9d5,	// (0x0001fa0a) texts_graphics

0x0bcd,	// (0x00014c02) text_digital

0x0bdc,	// (0x00014c11) text_primary

0x0beb,	// (0x00014c20) text_primary_small

0x0bfa,	// (0x00014c2f) text_secondary

0x0c09,	// (0x00014c3e) text_title

0x332f,	// (0x00017364) bg_passive_tab_pane_g1_cp3_srt

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp3_srt

0x3338,	// (0x0001736d) bg_passive_tab_pane_g3_cp3_srt

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp3_srt_ParamLimits

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp3_srt

0x3341,	// (0x00017376) tabs_4_active_pane_srt_g1

0xb667,	// (0x0001f69c) tabs_4_active_pane_srt_t1_ParamLimits

0xb667,	// (0x0001f69c) tabs_4_active_pane_srt_t1

0x332f,	// (0x00017364) bg_active_tab_pane_g1_cp3_copy1

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp3_copy1

0x3338,	// (0x0001736d) bg_active_tab_pane_g3_cp3_copy1

0xd4ff,	// (0x00021534) tabs_2_long_active_pane_srt_ParamLimits

0xd4ff,	// (0x00021534) tabs_2_long_active_pane_srt

0xd4ff,	// (0x00021534) tabs_2_long_passive_pane_srt_ParamLimits

0xd4ff,	// (0x00021534) tabs_2_long_passive_pane_srt

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp4_srt

0x2f84,	// (0x00016fb9) bg_passive_tab_pane_g1_cp4_srt

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp4_srt

0x2f8d,	// (0x00016fc2) bg_passive_tab_pane_g3_cp4_srt

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp4_srt_ParamLimits

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp4_srt

0xb414,	// (0x0001f449) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb414,	// (0x0001f449) tabs_2_long_active_pane_srt_t1

0x2f84,	// (0x00016fb9) bg_active_tab_pane_g1_cp4_srt

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp4_srt

0x2f8d,	// (0x00016fc2) bg_active_tab_pane_g3_cp4_srt

0xba2f,	// (0x0001fa64) tabs_3_long_active_pane_srt_ParamLimits

0xba2f,	// (0x0001fa64) tabs_3_long_active_pane_srt

0xba2f,	// (0x0001fa64) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xba2f,	// (0x0001fa64) tabs_3_long_passive_pane_cp_srt

0xba2f,	// (0x0001fa64) tabs_3_long_passive_pane_srt_ParamLimits

0xba2f,	// (0x0001fa64) tabs_3_long_passive_pane_srt

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp5_srt

0x08eb,	// (0x00014920) bg_passive_tab_pane_g1_cp5_srt

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp5_srt

0x08f4,	// (0x00014929) bg_passive_tab_pane_g3_cp5_srt

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp5_srt_ParamLimits

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp5_srt

0xb3fe,	// (0x0001f433) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb3fe,	// (0x0001f433) tabs_3_long_active_pane_srt_t1

0x08eb,	// (0x00014920) bg_active_tab_pane_g1_cp5_srt

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp5_srt

0x08f4,	// (0x00014929) bg_active_tab_pane_g3_cp5_srt

0x2f64,	// (0x00016f99) navi_text_pane_srt_t1

0x2f5c,	// (0x00016f91) navi_icon_pane_srt_g1

0x0dd4,	// (0x00014e09) midp_editing_number_pane_srt

0x0c18,	// (0x00014c4d) midp_ticker_pane_srt

0x0ddc,	// (0x00014e11) midp_ticker_pane_srt_g1

0x0de4,	// (0x00014e19) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x000237a8) midp_ticker_pane_srt_g

0x0dec,	// (0x00014e21) midp_ticker_pane_srt_t1

0x2f4d,	// (0x00016f82) midp_editing_number_pane_t1_copy1

0x0f9a,	// (0x00014fcf) listscroll_midp_pane

0x0f9a,	// (0x00014fcf) midp_form_pane

0x0c82,	// (0x00014cb7) midp_info_popup_window_ParamLimits

0x0c82,	// (0x00014cb7) midp_info_popup_window

0xdcfd,	// (0x00021d32) bg_popup_sub_pane_cp50_ParamLimits

0xdcfd,	// (0x00021d32) bg_popup_sub_pane_cp50

0x201a,	// (0x0001604f) listscroll_midp_info_pane_ParamLimits

0x201a,	// (0x0001604f) listscroll_midp_info_pane

0x2002,	// (0x00016037) listscroll_form_midp_pane_ParamLimits

0x2002,	// (0x00016037) listscroll_form_midp_pane

0x200e,	// (0x00016043) scroll_bar_cp050

0xb15a,	// (0x0001f18f) list_midp_pane

0x407f,	// (0x000180b4) signal_pane_g2_cp

0x1f1c,	// (0x00015f51) listscroll_midp_info_pane_t1_ParamLimits

0x1f1c,	// (0x00015f51) listscroll_midp_info_pane_t1

0x1f34,	// (0x00015f69) listscroll_midp_info_pane_t2_ParamLimits

0x1f34,	// (0x00015f69) listscroll_midp_info_pane_t2

0x1f72,	// (0x00015fa7) listscroll_midp_info_pane_t3_ParamLimits

0x1f72,	// (0x00015fa7) listscroll_midp_info_pane_t3

0x1fac,	// (0x00015fe1) listscroll_midp_info_pane_t4_ParamLimits

0x1fac,	// (0x00015fe1) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x0002385b) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x0002385b) listscroll_midp_info_pane_t

0xdd7d,	// (0x00021db2) scroll_pane_cp21

0x1eb6,	// (0x00015eeb) form_midp_field_choice_group_pane

0x1ebf,	// (0x00015ef4) form_midp_field_text_pane

0x1f02,	// (0x00015f37) form_midp_field_time_pane

0x1f0a,	// (0x00015f3f) form_midp_gauge_slider_pane

0x1f13,	// (0x00015f48) form_midp_gauge_wait_pane

0xb9d5,	// (0x0001fa0a) form_midp_image_pane

0xb13d,	// (0x0001f172) list_single_midp_pane_ParamLimits

0xb13d,	// (0x0001f172) list_single_midp_pane

0xb115,	// (0x0001f14a) form_midp_field_text_pane_t1

0x1c37,	// (0x00015c6c) input_focus_pane_cp050

0x1e85,	// (0x00015eba) list_midp_form_text_pane

0x1e29,	// (0x00015e5e) form_midp_field_choice_group_pane_t1

0x1e37,	// (0x00015e6c) input_focus_pane_cp051

0x1e4b,	// (0x00015e80) list_midp_choice_pane

0xb9d5,	// (0x0001fa0a) status_idle_pane

0x1e0d,	// (0x00015e42) form_midp_field_time_pane_t1

0xb9cb,	// (0x0001fa00) wait_anim_pane_g2_copy1

0x1e1b,	// (0x00015e50) form_midp_field_time_pane_t2

0x0001,

0x0d32,	// (0x00014d67) aid_navinavi_width_2_pane

0xf821,	// (0x00023856) form_midp_field_time_pane_t

0xb9d5,	// (0x0001fa0a) input_focus_pane_cp052

0xb9d5,	// (0x0001fa0a) bg_input_focus_pane_cp040

0x1dcd,	// (0x00015e02) form_midp_gauge_slider_pane_t1

0x1ddb,	// (0x00015e10) form_midp_gauge_slider_pane_t2

0xb0f9,	// (0x0001f12e) form_midp_gauge_slider_pane_t3

0xb107,	// (0x0001f13c) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x0002384d) form_midp_gauge_slider_pane_t

0x1e05,	// (0x00015e3a) form_midp_slider_pane

0xd4ff,	// (0x00021534) bg_input_focus_pane_cp041_ParamLimits

0xd4ff,	// (0x00021534) bg_input_focus_pane_cp041

0x1d9a,	// (0x00015dcf) form_midp_gauge_wait_pane_t1_ParamLimits

0x1d9a,	// (0x00015dcf) form_midp_gauge_wait_pane_t1

0x1dac,	// (0x00015de1) form_midp_gauge_wait_pane_t2_ParamLimits

0x1dac,	// (0x00015de1) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x00023848) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x00023848) form_midp_gauge_wait_pane_t

0x1dbe,	// (0x00015df3) form_midp_wait_pane_ParamLimits

0x1dbe,	// (0x00015df3) form_midp_wait_pane

0x1d62,	// (0x00015d97) form_midp_image_pane_g1

0x1d6b,	// (0x00015da0) form_midp_image_pane_t1

0x1d7a,	// (0x00015daf) form_midp_image_pane_t2

0x1d89,	// (0x00015dbe) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x00023841) form_midp_image_pane_t

0x1d4a,	// (0x00015d7f) list_single_midp_pane_g1

0x1d53,	// (0x00015d88) list_single_midp_pane_t1

0xb0e2,	// (0x0001f117) list_midp_form_item_pane_ParamLimits

0xb0e2,	// (0x0001f117) list_midp_form_item_pane

0x0cda,	// (0x00014d0f) list_midp_form_item_pane_t1

0x0ce9,	// (0x00014d1e) midp_ticker_pane_g1

0x0cf5,	// (0x00014d2a) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0002378e) midp_ticker_pane_g

0xa4e3,	// (0x0001e518) midp_ticker_pane_t1

0xb5bf,	// (0x0001f5f4) midp_editing_number_pane_t1

0x31d3,	// (0x00017208) midp_editing_number_pane

0x31e2,	// (0x00017217) midp_ticker_pane

0x2f15,	// (0x00016f4a) ai_message_heading_pane

0xb9d5,	// (0x0001fa0a) bg_popup_window_pane_cp14

0x2f1d,	// (0x00016f52) listscroll_ai_message_pane

0x2e9b,	// (0x00016ed0) ai_message_heading_pane_g1_ParamLimits

0x2e9b,	// (0x00016ed0) ai_message_heading_pane_g1

0x2ea7,	// (0x00016edc) ai_message_heading_pane_g2_ParamLimits

0x2ea7,	// (0x00016edc) ai_message_heading_pane_g2

0x2eb5,	// (0x00016eea) ai_message_heading_pane_g3_ParamLimits

0x2eb5,	// (0x00016eea) ai_message_heading_pane_g3

0x2ec1,	// (0x00016ef6) ai_message_heading_pane_g4_ParamLimits

0x2ec1,	// (0x00016ef6) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x00023982) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x00023982) ai_message_heading_pane_g

0x2ecd,	// (0x00016f02) ai_message_heading_pane_t1_ParamLimits

0x2ecd,	// (0x00016f02) ai_message_heading_pane_t1

0x2ee7,	// (0x00016f1c) ai_message_heading_pane_t2_ParamLimits

0x2ee7,	// (0x00016f1c) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x0002398b) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x0002398b) ai_message_heading_pane_t

0x2efb,	// (0x00016f30) bg_popup_heading_pane_cp1_ParamLimits

0x2efb,	// (0x00016f30) bg_popup_heading_pane_cp1

0x2e89,	// (0x00016ebe) list_ai_message_pane_ParamLimits

0x2e89,	// (0x00016ebe) list_ai_message_pane

0xdd7d,	// (0x00021db2) scroll_pane_cp10

0x2e25,	// (0x00016e5a) list_ai_message_pane_g1

0x2e2d,	// (0x00016e62) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x0002395f) list_ai_message_pane_g

0x2e35,	// (0x00016e6a) list_ai_message_pane_t1_ParamLimits

0x2e35,	// (0x00016e6a) list_ai_message_pane_t1

0x2e4a,	// (0x00016e7f) list_ai_message_pane_t2_ParamLimits

0x2e4a,	// (0x00016e7f) list_ai_message_pane_t2

0x2e5f,	// (0x00016e94) list_ai_message_pane_t3_ParamLimits

0x2e5f,	// (0x00016e94) list_ai_message_pane_t3

0x2e74,	// (0x00016ea9) list_ai_message_pane_t4_ParamLimits

0x2e74,	// (0x00016ea9) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x00023964) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x00023964) list_ai_message_pane_t

0xb3d2,	// (0x0001f407) cell_ai_soft_ind_pane_ParamLimits

0xb3d2,	// (0x0001f407) cell_ai_soft_ind_pane

0x0d13,	// (0x00014d48) cell_ai_soft_ind_pane_g1_ParamLimits

0x0d13,	// (0x00014d48) cell_ai_soft_ind_pane_g1

0xb9d5,	// (0x0001fa0a) grid_highlight_cp1

0x0d20,	// (0x00014d55) text_secondary_cp56_ParamLimits

0x0d20,	// (0x00014d55) text_secondary_cp56

0x2de3,	// (0x00016e18) example_general_pane_ParamLimits

0x2de3,	// (0x00016e18) example_general_pane

0x2def,	// (0x00016e24) example_parent_pane_g1_ParamLimits

0x2def,	// (0x00016e24) example_parent_pane_g1

0x2dfb,	// (0x00016e30) example_parent_pane_t1_ParamLimits

0x2dfb,	// (0x00016e30) example_parent_pane_t1

0xa967,	// (0x0001e99c) popup_preview_text_window_ParamLimits

0xa967,	// (0x0001e99c) popup_preview_text_window

0x0b47,	// (0x00014b7c) list_single_pane_cp2_g4

0xd6f4,	// (0x00021729) bg_popup_preview_window_pane_ParamLimits

0xd6f4,	// (0x00021729) bg_popup_preview_window_pane

0x2b16,	// (0x00016b4b) popup_preview_text_window_t1_ParamLimits

0x2b16,	// (0x00016b4b) popup_preview_text_window_t1

0x2b34,	// (0x00016b69) popup_preview_text_window_t2_ParamLimits

0x2b34,	// (0x00016b69) popup_preview_text_window_t2

0x2b7d,	// (0x00016bb2) popup_preview_text_window_t3_ParamLimits

0x2b7d,	// (0x00016bb2) popup_preview_text_window_t3

0x2bc2,	// (0x00016bf7) popup_preview_text_window_t4_ParamLimits

0x2bc2,	// (0x00016bf7) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x00023933) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x00023933) popup_preview_text_window_t

0x2c40,	// (0x00016c75) scroll_pane_cp11

0x1b11,	// (0x00015b46) bg_popup_preview_window_pane_g1

0x2aca,	// (0x00016aff) bg_popup_preview_window_pane_g2

0x2ad4,	// (0x00016b09) bg_popup_preview_window_pane_g3

0x2ade,	// (0x00016b13) bg_popup_preview_window_pane_g4

0x2ae8,	// (0x00016b1d) bg_popup_preview_window_pane_g5

0x2af2,	// (0x00016b27) bg_popup_preview_window_pane_g6

0x2afa,	// (0x00016b2f) bg_popup_preview_window_pane_g7

0x2b02,	// (0x00016b37) bg_popup_preview_window_pane_g8

0xd457,	// (0x0002148c) aid_popup_width_pane

0xa8d7,	// (0x0001e90c) popup_midp_note_alarm_window_ParamLimits

0xa8d7,	// (0x0001e90c) popup_midp_note_alarm_window

0xdba8,	// (0x00021bdd) data_form_pane_ParamLimits

0x9f40,	// (0x0001df75) form_field_data_pane_g1

0x9f4a,	// (0x0001df7f) form_field_data_pane_t1_ParamLimits

0xdbb4,	// (0x00021be9) input_focus_pane_ParamLimits

0xdbc2,	// (0x00021bf7) data_form_wide_pane_ParamLimits

0xdbd3,	// (0x00021c08) form_field_data_wide_pane_g1

0xdbff,	// (0x00021c34) form_field_data_wide_pane_t1_ParamLimits

0xd8a9,	// (0x000218de) input_focus_pane_cp6_ParamLimits

0xa08b,	// (0x0001e0c0) input_popup_find_pane_g1_ParamLimits

0xa08b,	// (0x0001e0c0) input_popup_find_pane_g1

0xe4d5,	// (0x0002250a) aid_navi_side_left_pane

0xe4ea,	// (0x0002251f) aid_navi_side_right_pane

0x24df,	// (0x00016514) bg_popup_window_pane_cp30_ParamLimits

0x24df,	// (0x00016514) bg_popup_window_pane_cp30

0x2559,	// (0x0001658e) popup_midp_note_alarm_window_g1_ParamLimits

0x2559,	// (0x0001658e) popup_midp_note_alarm_window_g1

0x2589,	// (0x000165be) popup_midp_note_alarm_window_t1_ParamLimits

0x2589,	// (0x000165be) popup_midp_note_alarm_window_t1

0x262a,	// (0x0001665f) popup_midp_note_alarm_window_t2_ParamLimits

0x262a,	// (0x0001665f) popup_midp_note_alarm_window_t2

0x26d8,	// (0x0001670d) popup_midp_note_alarm_window_t3_ParamLimits

0x26d8,	// (0x0001670d) popup_midp_note_alarm_window_t3

0x270a,	// (0x0001673f) popup_midp_note_alarm_window_t4_ParamLimits

0x270a,	// (0x0001673f) popup_midp_note_alarm_window_t4

0x2730,	// (0x00016765) popup_midp_note_alarm_window_t5_ParamLimits

0x2730,	// (0x00016765) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x000238d0) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x000238d0) popup_midp_note_alarm_window_t

0x27dc,	// (0x00016811) wait_bar_pane_cp1_ParamLimits

0x27dc,	// (0x00016811) wait_bar_pane_cp1

0xb9d5,	// (0x0001fa0a) wait_anim_pane_copy1

0xb9d5,	// (0x0001fa0a) wait_border_pane_copy1

0x21c4,	// (0x000161f9) wait_border_pane_g1_copy1

0xdc19,	// (0x00021c4e) form_field_popup_pane_g1

0x9f64,	// (0x0001df99) form_field_popup_pane_t1_ParamLimits

0xdbb4,	// (0x00021be9) input_focus_pane_cp7_ParamLimits

0xdc21,	// (0x00021c56) list_form_pane_ParamLimits

0xdc2d,	// (0x00021c62) form_field_popup_wide_pane_g1

0xdc35,	// (0x00021c6a) form_field_popup_wide_pane_t1_ParamLimits

0xdbb4,	// (0x00021be9) input_focus_pane_cp8_ParamLimits

0xdc4a,	// (0x00021c7f) list_form_wide_pane_ParamLimits

0x33bc,	// (0x000173f1) aid_size_cell_graphic_pane

0x9fe3,	// (0x0001e018) data_form_pane_t1_ParamLimits

0xb5a3,	// (0x0001f5d8) data_form_wide_pane_t1_ParamLimits

0xad6b,	// (0x0001eda0) bg_status_flat_pane

0x9769,	// (0x0001d79e) title_pane_t1_ParamLimits

0xb9f7,	// (0x0001fa2c) title_pane_t2_ParamLimits

0xba1d,	// (0x0001fa52) title_pane_t3_ParamLimits

0xf55d,	// (0x00023592) title_pane_t_ParamLimits

0xa196,	// (0x0001e1cb) level_1_signal_ParamLimits

0xa1a8,	// (0x0001e1dd) level_2_signal_ParamLimits

0xa1bb,	// (0x0001e1f0) level_3_signal_ParamLimits

0xa1ce,	// (0x0001e203) level_4_signal_ParamLimits

0xa1e1,	// (0x0001e216) level_5_signal_ParamLimits

0xa1f4,	// (0x0001e229) level_6_signal_ParamLimits

0xa207,	// (0x0001e23c) level_7_signal_ParamLimits

0xa196,	// (0x0001e1cb) level_1_battery_ParamLimits

0xa1a8,	// (0x0001e1dd) level_2_battery_ParamLimits

0xa1bb,	// (0x0001e1f0) level_3_battery_ParamLimits

0xa1ce,	// (0x0001e203) level_4_battery_ParamLimits

0xa1e1,	// (0x0001e216) level_5_battery_ParamLimits

0xa1f4,	// (0x0001e229) level_6_battery_ParamLimits

0xa207,	// (0x0001e23c) level_7_battery_ParamLimits

0x23e4,	// (0x00016419) bg_status_flat_pane_g1

0x23ec,	// (0x00016421) bg_status_flat_pane_g2

0x23f4,	// (0x00016429) bg_status_flat_pane_g3

0x23fc,	// (0x00016431) bg_status_flat_pane_g4

0x2404,	// (0x00016439) bg_status_flat_pane_g5

0x240c,	// (0x00016441) bg_status_flat_pane_g6

0x2414,	// (0x00016449) bg_status_flat_pane_g7

0x97fd,	// (0x0001d832) tabs_3_active_pane_t1_ParamLimits

0x97fd,	// (0x0001d832) tabs_3_passive_pane_t1_ParamLimits

0x9817,	// (0x0001d84c) tabs_4_active_pane_t1_ParamLimits

0x9817,	// (0x0001d84c) tabs_4_1_passive_pane_t1_ParamLimits

0xa0a1,	// (0x0001e0d6) tabs_2_active_pane_t1_ParamLimits

0xa0a1,	// (0x0001e0d6) tabs_2_passive_pane_t1_ParamLimits

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp4_ParamLimits

0xa0b3,	// (0x0001e0e8) tabs_2_long_active_pane_t1_ParamLimits

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp4_ParamLimits

0xe956,	// (0x0002298b) list_single_midp_graphic_pane_t1_ParamLimits

0xd4ff,	// (0x00021534) bg_active_tab_pane_cp5_ParamLimits

0xa0c6,	// (0x0001e0fb) tabs_3_long_active_pane_t1_ParamLimits

0x0f9a,	// (0x00014fcf) bg_passive_tab_pane_cp5_ParamLimits

0xe956,	// (0x0002298b) list_single_midp_graphic_pane_t1

0xad6b,	// (0x0001eda0) bg_status_flat_pane_ParamLimits

0x175b,	// (0x00015790) indicator_pane_cp2_ParamLimits

0x175b,	// (0x00015790) indicator_pane_cp2

0xaf01,	// (0x0001ef36) navi_pane_srt_ParamLimits

0xaf01,	// (0x0001ef36) navi_pane_srt

0x18c2,	// (0x000158f7) popup_clock_digital_analogue_window_cp1

0xd55d,	// (0x00021592) indicator_pane_t1

0x0c18,	// (0x00014c4d) copy_highlight_pane

0x0c18,	// (0x00014c4d) cursor_graphics_pane

0x0c18,	// (0x00014c4d) graphic_within_text_pane

0x0c18,	// (0x00014c4d) link_highlight_pane

0x2c03,	// (0x00016c38) popup_preview_text_window_t5_ParamLimits

0x2c03,	// (0x00016c38) popup_preview_text_window_t5

0x0d3c,	// (0x00014d71) cursor_digital_pane

0x0d3c,	// (0x00014d71) cursor_primary_pane

0x0d4d,	// (0x00014d82) cursor_primary_small_pane

0x0d55,	// (0x00014d8a) cursor_secondary_pane

0x0d5d,	// (0x00014d92) cursor_title_pane

0x0d3c,	// (0x00014d71) link_highlight_digital_pane

0x0d44,	// (0x00014d79) link_highlight_primary_pane

0x0d4d,	// (0x00014d82) link_highlight_primary_small_pane

0x0d55,	// (0x00014d8a) link_highlight_secondary_pane

0x0d5d,	// (0x00014d92) link_highlight_title_pane

0x0d3c,	// (0x00014d71) copy_highlight_digital_pane

0x0d3c,	// (0x00014d71) copy_highlight_primary_pane

0x0d4d,	// (0x00014d82) copy_highlight_primary_small_pane

0x0d55,	// (0x00014d8a) copy_highlight_secondary_pane

0x0d5d,	// (0x00014d92) copy_highlight_title_pane

0x0d55,	// (0x00014d8a) graphic_text_digital_pane

0x2482,	// (0x000164b7) graphic_text_primary_pane

0x248b,	// (0x000164c0) graphic_text_primary_small_pane

0x0d4d,	// (0x00014d82) graphic_text_secondary_pane

0x0d3c,	// (0x00014d71) graphic_text_title_pane

0xa4f5,	// (0x0001e52a) cursor_primary_pane_g1

0x2474,	// (0x000164a9) cursor_text_primary_t1

0xb196,	// (0x0001f1cb) cursor_primary_small_pane_g1

0x2466,	// (0x0001649b) cursor_text_primary_small_t1

0xb18c,	// (0x0001f1c1) cursor_primary_small_pane_g1_copy1

0x244e,	// (0x00016483) cursor_text_primary_small_t1_copy1

0x242c,	// (0x00016461) cursor_text_title_t1

0xb182,	// (0x0001f1b7) cursor_title_pane_g1

0xa4f5,	// (0x0001e52a) cursor_digital_pane_g1

0x0d6f,	// (0x00014da4) cursor_text_digital_t1

0x0d7d,	// (0x00014db2) link_highlight_primary_pane_g1

0x23d5,	// (0x0001640a) link_highlight_primary_pane_t1

0x0d7d,	// (0x00014db2) link_highlight_primary_small_pane_g1

0x0d85,	// (0x00014dba) link_highlight_primary_small_pane_t1

0x0d94,	// (0x00014dc9) link_highlight_secondary_pane_g1

0x0d9c,	// (0x00014dd1) link_highlight_secondary_pane_t1

0x2349,	// (0x0001637e) link_highlight_title_pane_g1

0x2351,	// (0x00016386) link_highlight_title_pane_t1

0x2332,	// (0x00016367) link_highlight_digital_pane_g1

0x233a,	// (0x0001636f) link_highlight_digital_pane_t1

0x21fa,	// (0x0001622f) copy_highlight_primary_pane_g1

0x2211,	// (0x00016246) copy_highlight_primary_pane_t1

0x21fa,	// (0x0001622f) copy_highlight_primary_small_pane_g1

0x2202,	// (0x00016237) copy_highlight_primary_small_pane_t1

0x0dab,	// (0x00014de0) copy_highlight_secondary_pane_g1

0x0db3,	// (0x00014de8) copy_highlight_secondary_pane_t1

0x21e3,	// (0x00016218) copy_highlight_title_pane_g1

0x21eb,	// (0x00016220) copy_highlight_title_pane_t1

0x21fa,	// (0x0001622f) copy_highlight_digital_pane_g1

0x358c,	// (0x000175c1) copy_highlight_digital_pane_t1

0x34e0,	// (0x00017515) graphic_text_primary_pane_g1

0x3570,	// (0x000175a5) graphic_text_primary_pane_t1

0x357e,	// (0x000175b3) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x000239ff) graphic_text_primary_pane_t

0x354c,	// (0x00017581) graphic_text_primary_small_pane_g1

0x3554,	// (0x00017589) graphic_text_primary_small_pane_t1

0x3562,	// (0x00017597) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x000239fa) graphic_text_primary_small_pane_t

0x3528,	// (0x0001755d) graphic_text_secondary_pane_g1

0x3530,	// (0x00017565) graphic_text_secondary_pane_t1

0x353e,	// (0x00017573) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x000239f5) graphic_text_secondary_pane_t

0x3504,	// (0x00017539) graphic_text_title_pane_g1

0x350c,	// (0x00017541) graphic_text_title_pane_t1

0x351a,	// (0x0001754f) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x000239f0) graphic_text_title_pane_t

0x34e0,	// (0x00017515) graphic_text_digital_pane_g1

0x34e8,	// (0x0001751d) graphic_text_digital_pane_t1

0x34f6,	// (0x0001752b) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x000239eb) graphic_text_digital_pane_t

0xd4ff,	// (0x00021534) navi_icon_pane_srt_ParamLimits

0xd4ff,	// (0x00021534) navi_icon_pane_srt

0xb9d5,	// (0x0001fa0a) navi_midp_pane_srt

0xb9d5,	// (0x0001fa0a) navi_navi_pane_srt

0xd4ff,	// (0x00021534) navi_text_pane_srt_ParamLimits

0xd4ff,	// (0x00021534) navi_text_pane_srt

0x34ab,	// (0x000174e0) navi_navi_icon_text_pane_srt

0x34b3,	// (0x000174e8) navi_navi_pane_srt_g1_ParamLimits

0x34b3,	// (0x000174e8) navi_navi_pane_srt_g1

0x34c5,	// (0x000174fa) navi_navi_pane_srt_g2_ParamLimits

0x34c5,	// (0x000174fa) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x000239e6) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x000239e6) navi_navi_pane_srt_g

0x34d7,	// (0x0001750c) navi_navi_tabs_pane_srt

0x34ab,	// (0x000174e0) navi_navi_text_pane_srt

0x34ab,	// (0x000174e0) navi_navi_volume_pane_srt

0x349c,	// (0x000174d1) navi_navi_text_pane_srt_t1

0xeb81,	// (0x00022bb6) navi_navi_volume_pane_srt_g1

0xeb89,	// (0x00022bbe) volume_small_pane_srt_ParamLimits

0xeb89,	// (0x00022bbe) volume_small_pane_srt

0xe7b3,	// (0x000227e8) volume_small_pane_srt_g1_ParamLimits

0xe7b3,	// (0x000227e8) volume_small_pane_srt_g1

0xe7c3,	// (0x000227f8) volume_small_pane_srt_g2_ParamLimits

0xe7c3,	// (0x000227f8) volume_small_pane_srt_g2

0xe7d4,	// (0x00022809) volume_small_pane_srt_g3_ParamLimits

0xe7d4,	// (0x00022809) volume_small_pane_srt_g3

0xe7e5,	// (0x0002281a) volume_small_pane_srt_g4_ParamLimits

0xe7e5,	// (0x0002281a) volume_small_pane_srt_g4

0xe7f6,	// (0x0002282b) volume_small_pane_srt_g5_ParamLimits

0xe7f6,	// (0x0002282b) volume_small_pane_srt_g5

0xe807,	// (0x0002283c) volume_small_pane_srt_g6_ParamLimits

0xe807,	// (0x0002283c) volume_small_pane_srt_g6

0xe818,	// (0x0002284d) volume_small_pane_srt_g7_ParamLimits

0xe818,	// (0x0002284d) volume_small_pane_srt_g7

0xe829,	// (0x0002285e) volume_small_pane_srt_g8_ParamLimits

0xe829,	// (0x0002285e) volume_small_pane_srt_g8

0xe83a,	// (0x0002286f) volume_small_pane_srt_g9_ParamLimits

0xe83a,	// (0x0002286f) volume_small_pane_srt_g9

0xe84b,	// (0x00022880) volume_small_pane_srt_g10_ParamLimits

0xe84b,	// (0x00022880) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x00023793) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x00023793) volume_small_pane_srt_g

0xd7a9,	// (0x000217de) query_popup_data_pane_cp2

0x3482,	// (0x000174b7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3482,	// (0x000174b7) navi_navi_icon_text_pane_srt_t1

0x2482,	// (0x000164b7) navi_tabs_2_long_pane_srt

0x2482,	// (0x000164b7) navi_tabs_2_pane_srt

0x2482,	// (0x000164b7) navi_tabs_3_long_pane_srt

0x2482,	// (0x000164b7) navi_tabs_3_pane_srt

0x2482,	// (0x000164b7) navi_tabs_4_pane_srt

0xeb61,	// (0x00022b96) tabs_2_active_pane_srt_ParamLimits

0xeb61,	// (0x00022b96) tabs_2_active_pane_srt

0xeb71,	// (0x00022ba6) tabs_2_passive_pane_srt_ParamLimits

0xeb71,	// (0x00022ba6) tabs_2_passive_pane_srt

0x1c37,	// (0x00015c6c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1c37,	// (0x00015c6c) bg_passive_tab_pane_cp1_srt

0x344e,	// (0x00017483) bg_passive_tab_pane_g1_cp1_srt

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp1_srt

0x3457,	// (0x0001748c) bg_passive_tab_pane_g3_cp1_srt

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp1_srt_ParamLimits

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp1_srt

0x3460,	// (0x00017495) tabs_2_active_pane_srt_g1

0xb6e8,	// (0x0001f71d) tabs_2_active_pane_srt_t1_ParamLimits

0xb6e8,	// (0x0001f71d) tabs_2_active_pane_srt_t1

0x344e,	// (0x00017483) bg_active_tab_pane_g1_cp1_srt

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp1_srt

0x3457,	// (0x0001748c) bg_active_tab_pane_g3_cp1_srt

0xeadd,	// (0x00022b12) tabs_3_active_pane_srt_ParamLimits

0xeadd,	// (0x00022b12) tabs_3_active_pane_srt

0xeaee,	// (0x00022b23) tabs_3_passive_pane_cp_srt_ParamLimits

0xeaee,	// (0x00022b23) tabs_3_passive_pane_cp_srt

0xeb50,	// (0x00022b85) tabs_3_passive_pane_srt_ParamLimits

0xeb50,	// (0x00022b85) tabs_3_passive_pane_srt

0x1c37,	// (0x00015c6c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1c37,	// (0x00015c6c) bg_passive_tab_pane_cp2_srt

0x0dc2,	// (0x00014df7) bg_passive_tab_pane_g1_cp2_srt

0x0861,	// (0x00014896) bg_passive_tab_pane_g2_cp2_srt

0x0dcb,	// (0x00014e00) bg_passive_tab_pane_g3_cp2_srt

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp2_srt_ParamLimits

0xba2f,	// (0x0001fa64) bg_active_tab_pane_cp2_srt

0x3434,	// (0x00017469) tabs_3_active_pane_srt_g1

0xb6d2,	// (0x0001f707) tabs_3_active_pane_srt_t1_ParamLimits

0xb6d2,	// (0x0001f707) tabs_3_active_pane_srt_t1

0x0dc2,	// (0x00014df7) bg_active_tab_pane_g1_cp2_srt

0x0861,	// (0x00014896) bg_active_tab_pane_g2_cp2_srt

0x0dcb,	// (0x00014e00) bg_active_tab_pane_g3_cp2_srt

0xea95,	// (0x00022aca) tabs_4_active_pane_srt_ParamLimits

0xea95,	// (0x00022aca) tabs_4_active_pane_srt

0xeaa7,	// (0x00022adc) tabs_4_passive_pane_cp2_srt_ParamLimits

0xeaa7,	// (0x00022adc) tabs_4_passive_pane_cp2_srt

0x0f20,	// (0x00014f55) aid_size_cell_toolbar

0x2ff7,	// (0x0001702c) main_idle_act_pane_ParamLimits

0x116b,	// (0x000151a0) popup_large_graphic_colour_window_ParamLimits

0xac2d,	// (0x0001ec62) popup_toolbar_window_ParamLimits

0xac2d,	// (0x0001ec62) popup_toolbar_window

0x3218,	// (0x0001724d) list_single_graphic_2heading_pane_ParamLimits

0x3218,	// (0x0001724d) list_single_graphic_2heading_pane

0xdf55,	// (0x00021f8a) aid_size_cell_apps_grid_lsc_pane

0xdf67,	// (0x00021f9c) aid_size_cell_apps_grid_prt_pane

0x0f9a,	// (0x00014fcf) bg_wml_button_pane_cp1_ParamLimits

0x0f9a,	// (0x00014fcf) bg_wml_button_pane_cp1

0xb115,	// (0x0001f14a) form_midp_field_text_pane_t1_ParamLimits

0x1c37,	// (0x00015c6c) input_focus_pane_cp050_ParamLimits

0x1e85,	// (0x00015eba) list_midp_form_text_pane_ParamLimits

0x1e37,	// (0x00015e6c) input_focus_pane_cp051_ParamLimits

0x1e4b,	// (0x00015e80) list_midp_choice_pane_ParamLimits

0xb0cc,	// (0x0001f101) list_single_2graphic_pane_cp3_ParamLimits

0xb0cc,	// (0x0001f101) list_single_2graphic_pane_cp3

0x43f8,	// (0x0001842d) list_single_midp_graphic_pane_ParamLimits

0x43f8,	// (0x0001842d) list_single_midp_graphic_pane

0xe86b,	// (0x000228a0) list_single_graphic_2heading_pane_g1_ParamLimits

0xe86b,	// (0x000228a0) list_single_graphic_2heading_pane_g1

0xe877,	// (0x000228ac) list_single_graphic_2heading_pane_g4_ParamLimits

0xe877,	// (0x000228ac) list_single_graphic_2heading_pane_g4

0xe883,	// (0x000228b8) list_single_graphic_2heading_pane_g5_ParamLimits

0xe883,	// (0x000228b8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x000237e6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x000237e6) list_single_graphic_2heading_pane_g

0xe88f,	// (0x000228c4) list_single_graphic_2heading_pane_t1_ParamLimits

0xe88f,	// (0x000228c4) list_single_graphic_2heading_pane_t1

0xe8a3,	// (0x000228d8) list_single_graphic_2heading_pane_t2_ParamLimits

0xe8a3,	// (0x000228d8) list_single_graphic_2heading_pane_t2

0xe8bf,	// (0x000228f4) list_single_graphic_2heading_pane_t3_ParamLimits

0xe8bf,	// (0x000228f4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x000237ed) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x000237ed) list_single_graphic_2heading_pane_t

0x1a21,	// (0x00015a56) bg_popup_sub_pane_cp2

0x1a4b,	// (0x00015a80) grid_toobar_pane

0xe8d7,	// (0x0002290c) cell_toolbar_pane_ParamLimits

0xe8d7,	// (0x0002290c) cell_toolbar_pane

0x1ab5,	// (0x00015aea) cell_toolbar_pane_g1_ParamLimits

0x1ab5,	// (0x00015aea) cell_toolbar_pane_g1

0x1ac9,	// (0x00015afe) cell_toolbar_pane_g2_ParamLimits

0x1ac9,	// (0x00015afe) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x000237fb) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x000237fb) cell_toolbar_pane_g

0x1aeb,	// (0x00015b20) grid_highlight_pane_cp2_ParamLimits

0x1aeb,	// (0x00015b20) grid_highlight_pane_cp2

0x1b05,	// (0x00015b3a) toolbar_button_pane

0x1b11,	// (0x00015b46) toolbar_button_pane_g1

0x1b19,	// (0x00015b4e) toolbar_button_pane_g2

0x1b21,	// (0x00015b56) toolbar_button_pane_g3

0x1b29,	// (0x00015b5e) toolbar_button_pane_g4

0x1b31,	// (0x00015b66) toolbar_button_pane_g5

0x1b39,	// (0x00015b6e) toolbar_button_pane_g6

0x1b41,	// (0x00015b76) toolbar_button_pane_g7

0x1b49,	// (0x00015b7e) toolbar_button_pane_g8

0x1b51,	// (0x00015b86) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x00023800) toolbar_button_pane_g

0xe90f,	// (0x00022944) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe90f,	// (0x00022944) list_single_2graphic_pane_g1_cp3

0x9005,	// (0x0001d03a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9005,	// (0x0001d03a) list_single_2graphic_pane_g2_cp3

0xe91b,	// (0x00022950) list_single_2graphic_pane_g3_cp3

0xe923,	// (0x00022958) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe923,	// (0x00022958) list_single_2graphic_pane_g4_cp3

0xe92f,	// (0x00022964) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe92f,	// (0x00022964) list_single_2graphic_pane_t1_cp3

0xe94a,	// (0x0002297f) list_single_midp_graphic_pane_g2_ParamLimits

0xe94a,	// (0x0002297f) list_single_midp_graphic_pane_g2

0x0f28,	// (0x00014f5d) aid_zoom_text_primary

0x0f30,	// (0x00014f65) aid_zoom_text_secondary

0x0e7f,	// (0x00014eb4) status_small_pane_g7_ParamLimits

0x0e7f,	// (0x00014eb4) status_small_pane_g7

0x0ea2,	// (0x00014ed7) status_small_pane_t1_ParamLimits

0x9751,	// (0x0001d786) title_pane_g2

0x0003,

0xf554,	// (0x00023589) title_pane_g

0x99dd,	// (0x0001da12) aid_size_cell_colour_1_pane_ParamLimits

0x99dd,	// (0x0001da12) aid_size_cell_colour_1_pane

0x99f1,	// (0x0001da26) aid_size_cell_colour_2_pane_ParamLimits

0x99f1,	// (0x0001da26) aid_size_cell_colour_2_pane

0x9a05,	// (0x0001da3a) aid_size_cell_colour_3_pane_ParamLimits

0x9a05,	// (0x0001da3a) aid_size_cell_colour_3_pane

0x9a19,	// (0x0001da4e) aid_size_cell_colour_4_pane_ParamLimits

0x9a19,	// (0x0001da4e) aid_size_cell_colour_4_pane

0xe411,	// (0x00022446) title_pane_stacon_g1_ParamLimits

0xe411,	// (0x00022446) title_pane_stacon_g1

0x2268,	// (0x0001629d) popup_note_wait_window_g3_ParamLimits

0x2268,	// (0x0001629d) popup_note_wait_window_g3

0x22df,	// (0x00016314) popup_note_wait_window_t5_ParamLimits

0x22df,	// (0x00016314) popup_note_wait_window_t5

0xb9d5,	// (0x0001fa0a) main_feb_china_hwr_fs_writing_pane

0xa5c4,	// (0x0001e5f9) popup_feb_china_hwr_fs_window_ParamLimits

0xa5c4,	// (0x0001e5f9) popup_feb_china_hwr_fs_window

0x9016,	// (0x0001d04b) aid_size_cell_hwr_fs_ParamLimits

0x9016,	// (0x0001d04b) aid_size_cell_hwr_fs

0x1c37,	// (0x00015c6c) bg_popup_sub_pane_cp3_ParamLimits

0x1c37,	// (0x00015c6c) bg_popup_sub_pane_cp3

0x902b,	// (0x0001d060) grid_hwr_fs_pane_ParamLimits

0x902b,	// (0x0001d060) grid_hwr_fs_pane

0xe96c,	// (0x000229a1) linegrid_hwr_fs_pane_ParamLimits

0xe96c,	// (0x000229a1) linegrid_hwr_fs_pane

0x9043,	// (0x0001d078) cell_hwr_fs_pane_ParamLimits

0x9043,	// (0x0001d078) cell_hwr_fs_pane

0x1c43,	// (0x00015c78) linegrid_hwr_fs_pane_g1_ParamLimits

0x1c43,	// (0x00015c78) linegrid_hwr_fs_pane_g1

0xb0a0,	// (0x0001f0d5) linegrid_hwr_fs_pane_g2_ParamLimits

0xb0a0,	// (0x0001f0d5) linegrid_hwr_fs_pane_g2

0x1c61,	// (0x00015c96) linegrid_hwr_fs_pane_g3_ParamLimits

0x1c61,	// (0x00015c96) linegrid_hwr_fs_pane_g3

0xe97c,	// (0x000229b1) linegrid_hwr_fs_pane_g4_ParamLimits

0xe97c,	// (0x000229b1) linegrid_hwr_fs_pane_g4

0xe99a,	// (0x000229cf) linegrid_hwr_fs_pane_g5_ParamLimits

0xe99a,	// (0x000229cf) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x00023826) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x00023826) linegrid_hwr_fs_pane_g

0x1c6d,	// (0x00015ca2) cell_hwr_fs_pane_g1_ParamLimits

0x1c6d,	// (0x00015ca2) cell_hwr_fs_pane_g1

0x1958,	// (0x0001598d) cell_hwr_fs_pane_g2_ParamLimits

0x1958,	// (0x0001598d) cell_hwr_fs_pane_g2

0xb0b2,	// (0x0001f0e7) cell_hwr_fs_pane_g3_ParamLimits

0xb0b2,	// (0x0001f0e7) cell_hwr_fs_pane_g3

0xb0bf,	// (0x0001f0f4) cell_hwr_fs_pane_g4_ParamLimits

0xb0bf,	// (0x0001f0f4) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x00023831) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x00023831) cell_hwr_fs_pane_g

0x9069,	// (0x0001d09e) cell_hwr_fs_pane_t1

0xb9d5,	// (0x0001fa0a) grid_highlight_pane_cp6

0xb9d5,	// (0x0001fa0a) main_idle_act2_pane

0xdd64,	// (0x00021d99) aid_inside_area_popup_secondary

0xb1fd,	// (0x0001f232) aid_inside_area_window_primary_ParamLimits

0xb1fd,	// (0x0001f232) aid_inside_area_window_primary

0x359b,	// (0x000175d0) ai2_news_ticker_pane

0x35a3,	// (0x000175d8) aid_size_cell_ai1_link_ParamLimits

0x35a3,	// (0x000175d8) aid_size_cell_ai1_link

0x35bd,	// (0x000175f2) popup_ai2_data_window_ParamLimits

0x35bd,	// (0x000175f2) popup_ai2_data_window

0x35db,	// (0x00017610) popup_ai2_link_window_ParamLimits

0x35db,	// (0x00017610) popup_ai2_link_window

0x1c37,	// (0x00015c6c) bg_popup_sub_pane_cp4_ParamLimits

0x1c37,	// (0x00015c6c) bg_popup_sub_pane_cp4

0x35f1,	// (0x00017626) grid_ai2_link_pane_ParamLimits

0x35f1,	// (0x00017626) grid_ai2_link_pane

0x3608,	// (0x0001763d) popup_ai2_link_window_g1_ParamLimits

0x3608,	// (0x0001763d) popup_ai2_link_window_g1

0x3614,	// (0x00017649) popup_ai2_link_window_g2_ParamLimits

0x3614,	// (0x00017649) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x00023a04) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x00023a04) popup_ai2_link_window_g

0x3625,	// (0x0001765a) ai2_mp_button_pane

0x362d,	// (0x00017662) ai2_mp_volume_pane

0x1e37,	// (0x00015e6c) bg_popup_sub_pane_cp5_ParamLimits

0x1e37,	// (0x00015e6c) bg_popup_sub_pane_cp5

0x3635,	// (0x0001766a) heading_ai2_gene_pane_ParamLimits

0x3635,	// (0x0001766a) heading_ai2_gene_pane

0x3641,	// (0x00017676) list_ai2_gene_pane_ParamLimits

0x3641,	// (0x00017676) list_ai2_gene_pane

0x3689,	// (0x000176be) cell_ai2_link_pane_ParamLimits

0x3689,	// (0x000176be) cell_ai2_link_pane

0x369f,	// (0x000176d4) cell_ai2_link_pane_g1

0xb9d5,	// (0x0001fa0a) grid_highlight_pane_cp7

0xeb9e,	// (0x00022bd3) ai2_mp_volume_pane_g1

0x3772,	// (0x000177a7) ai2_mp_volume_pane_g2

0x36e7,	// (0x0001771c) list_ai2_gene_pane_t1

0x377a,	// (0x000177af) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x00023a1d) ai2_mp_volume_pane_g

0xeba6,	// (0x00022bdb) volume_small_pane_cp3

0x3782,	// (0x000177b7) aid_size_cell_ai2_button

0x378a,	// (0x000177bf) grid_ai2_button_pane

0x3793,	// (0x000177c8) cell_ai2_button_pane_ParamLimits

0x3793,	// (0x000177c8) cell_ai2_button_pane

0xb9cb,	// (0x0001fa00) cell_ai2_button_pane_g1

0xb9d5,	// (0x0001fa0a) grid_highlight_pane_cp8

0x3732,	// (0x00017767) ai2_gene_pane_t1_ParamLimits

0x3732,	// (0x00017767) ai2_gene_pane_t1

0xa526,	// (0x0001e55b) aid_height_parent_landscape

0xb42b,	// (0x0001f460) aid_height_set_list

0x2ff7,	// (0x0001702c) aid_size_parent

0x33bc,	// (0x000173f1) aid_size_cell_graphic_pane_ParamLimits

0x3651,	// (0x00017686) popup_ai2_data_window_g1_ParamLimits

0x3651,	// (0x00017686) popup_ai2_data_window_g1

0x365d,	// (0x00017692) ai2_news_ticker_pane_g1

0x3665,	// (0x0001769a) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x00023a09) ai2_news_ticker_pane_g

0x366d,	// (0x000176a2) ai2_news_ticker_pane_t1

0x367b,	// (0x000176b0) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x00023a0e) ai2_news_ticker_pane_t

0x36a8,	// (0x000176dd) heading_ai2_gene_pane_g1

0x36b0,	// (0x000176e5) heading_ai2_gene_pane_t1_ParamLimits

0x36b0,	// (0x000176e5) heading_ai2_gene_pane_t1

0x36c5,	// (0x000176fa) list_highlight_pane_cp6

0x36cd,	// (0x00017702) ai2_gene_pane_ParamLimits

0x36cd,	// (0x00017702) ai2_gene_pane

0x36f5,	// (0x0001772a) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x00023a13) list_ai2_gene_pane_t

0x3703,	// (0x00017738) list_highlight_pane_cp8_ParamLimits

0x3703,	// (0x00017738) list_highlight_pane_cp8

0x3714,	// (0x00017749) ai2_gene_pane_g1_ParamLimits

0x3714,	// (0x00017749) ai2_gene_pane_g1

0x3726,	// (0x0001775b) ai2_gene_pane_g2_ParamLimits

0x3726,	// (0x0001775b) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x00023a18) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x00023a18) ai2_gene_pane_g

0xdac4,	// (0x00021af9) scroll_pane_cp12

0x8fc4,	// (0x0001cff9) control_pane_t3_ParamLimits

0x8fc4,	// (0x0001cff9) control_pane_t3

0x0e93,	// (0x00014ec8) status_small_pane_g8_ParamLimits

0x0e93,	// (0x00014ec8) status_small_pane_g8

0xa666,	// (0x0001e69b) popup_find_window_ParamLimits

0xa917,	// (0x0001e94c) popup_note_image_window_ParamLimits

0x1a87,	// (0x00015abc) list_double2_graphic_pane_vc_g1_ParamLimits

0x1a87,	// (0x00015abc) list_double2_graphic_pane_vc_g1

0x0b89,	// (0x00014bbe) list_double2_graphic_pane_vc_g2_ParamLimits

0x0b89,	// (0x00014bbe) list_double2_graphic_pane_vc_g2

0x1a93,	// (0x00015ac8) list_double2_graphic_pane_vc_g3_ParamLimits

0x1a93,	// (0x00015ac8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x000237f4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x000237f4) list_double2_graphic_pane_vc_g

0x1a9f,	// (0x00015ad4) list_double2_graphic_pane_vc_t1_ParamLimits

0x1a9f,	// (0x00015ad4) list_double2_graphic_pane_vc_t1

0x0b89,	// (0x00014bbe) list_single_heading_pane_vc_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_single_heading_pane_vc_g1

0x1a93,	// (0x00015ac8) list_single_heading_pane_vc_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00023603) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00023603) list_single_heading_pane_vc_g

0x1b59,	// (0x00015b8e) list_single_heading_pane_vc_t1_ParamLimits

0x1b59,	// (0x00015b8e) list_single_heading_pane_vc_t1

0x1b71,	// (0x00015ba6) list_single_heading_pane_vc_t2_ParamLimits

0x1b71,	// (0x00015ba6) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x00023815) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x00023815) list_single_heading_pane_vc_t

0x1b83,	// (0x00015bb8) list_setting_number_pane_vc_g1_ParamLimits

0x1b83,	// (0x00015bb8) list_setting_number_pane_vc_g1

0x1b8f,	// (0x00015bc4) list_setting_number_pane_vc_g2_ParamLimits

0x1b8f,	// (0x00015bc4) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002381a) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002381a) list_setting_number_pane_vc_g

0x1b9b,	// (0x00015bd0) list_setting_number_pane_vc_t1_ParamLimits

0x1b9b,	// (0x00015bd0) list_setting_number_pane_vc_t1

0x1baf,	// (0x00015be4) list_setting_number_pane_vc_t2_ParamLimits

0x1baf,	// (0x00015be4) list_setting_number_pane_vc_t2

0x1bcb,	// (0x00015c00) list_setting_number_pane_vc_t3_ParamLimits

0x1bcb,	// (0x00015c00) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x0002381f) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x0002381f) list_setting_number_pane_vc_t

0x1bf9,	// (0x00015c2e) set_value_pane_vc_ParamLimits

0x1bf9,	// (0x00015c2e) set_value_pane_vc

0x3218,	// (0x0001724d) list_double2_graphic_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double2_graphic_pane_vc

0x3218,	// (0x0001724d) list_double2_large_graphic_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double2_large_graphic_pane_vc

0x3218,	// (0x0001724d) list_double2_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double2_pane_vc

0x3218,	// (0x0001724d) list_double_graphic_heading_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double_graphic_heading_pane_vc

0x3218,	// (0x0001724d) list_double_graphic_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double_graphic_pane_vc

0x3218,	// (0x0001724d) list_double_heading_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double_heading_pane_vc

0x3218,	// (0x0001724d) list_double_large_graphic_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double_large_graphic_pane_vc

0x3218,	// (0x0001724d) list_double_number_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double_number_pane_vc

0x3218,	// (0x0001724d) list_double_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double_pane_vc

0x3218,	// (0x0001724d) list_double_time_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_double_time_pane_vc

0x3218,	// (0x0001724d) list_setting_number_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_setting_number_pane_vc

0x3218,	// (0x0001724d) list_setting_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_setting_pane_vc

0x3218,	// (0x0001724d) list_single_graphic_heading_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_single_graphic_heading_pane_vc

0x3218,	// (0x0001724d) list_single_heading_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_single_heading_pane_vc

0x3218,	// (0x0001724d) list_single_number_heading_pane_vc_ParamLimits

0x3218,	// (0x0001724d) list_single_number_heading_pane_vc

0x1a87,	// (0x00015abc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1a87,	// (0x00015abc) list_double_graphic_heading_pane_vc_g1

0x37c6,	// (0x000177fb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x37c6,	// (0x000177fb) list_double_graphic_heading_pane_vc_g2

0x37d2,	// (0x00017807) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x37d2,	// (0x00017807) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x00023a24) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x00023a24) list_double_graphic_heading_pane_vc_g

0x37de,	// (0x00017813) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x37de,	// (0x00017813) list_double_graphic_heading_pane_vc_t1

0x37f4,	// (0x00017829) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x37f4,	// (0x00017829) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x00023a2b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x00023a2b) list_double_graphic_heading_pane_vc_t

0x1b83,	// (0x00015bb8) list_setting_pane_vc_g1_ParamLimits

0x1b83,	// (0x00015bb8) list_setting_pane_vc_g1

0x1b8f,	// (0x00015bc4) list_setting_pane_vc_g2_ParamLimits

0x1b8f,	// (0x00015bc4) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002381a) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002381a) list_setting_pane_vc_g

0x3a3a,	// (0x00017a6f) list_setting_pane_vc_t1_ParamLimits

0x3a3a,	// (0x00017a6f) list_setting_pane_vc_t1

0x3a56,	// (0x00017a8b) list_setting_pane_vc_t2_ParamLimits

0x3a56,	// (0x00017a8b) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x00023a6e) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x00023a6e) list_setting_pane_vc_t

0x1bf9,	// (0x00015c2e) set_value_pane_cp_vc_ParamLimits

0x1bf9,	// (0x00015c2e) set_value_pane_cp_vc

0x0b89,	// (0x00014bbe) list_single_number_heading_pane_vc_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_single_number_heading_pane_vc_g1

0x1a93,	// (0x00015ac8) list_single_number_heading_pane_vc_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00023603) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00023603) list_single_number_heading_pane_vc_g

0x1b59,	// (0x00015b8e) list_single_number_heading_pane_vc_t1_ParamLimits

0x1b59,	// (0x00015b8e) list_single_number_heading_pane_vc_t1

0x3a72,	// (0x00017aa7) list_single_number_heading_pane_vc_t2_ParamLimits

0x3a72,	// (0x00017aa7) list_single_number_heading_pane_vc_t2

0x3a84,	// (0x00017ab9) list_single_number_heading_pane_vc_t3_ParamLimits

0x3a84,	// (0x00017ab9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x00023a73) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00023a73) list_single_number_heading_pane_vc_t

0x1a87,	// (0x00015abc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1a87,	// (0x00015abc) list_single_graphic_heading_pane_vc_g1

0x0b89,	// (0x00014bbe) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0b89,	// (0x00014bbe) list_single_graphic_heading_pane_vc_g4

0x1a93,	// (0x00015ac8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1a93,	// (0x00015ac8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x000237f4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000237f4) list_single_graphic_heading_pane_vc_g

0x1b59,	// (0x00015b8e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1b59,	// (0x00015b8e) list_single_graphic_heading_pane_vc_t1

0x3a96,	// (0x00017acb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3a96,	// (0x00017acb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x00023a7a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00023a7a) list_single_graphic_heading_pane_vc_t

0x0b89,	// (0x00014bbe) list_double2_pane_vc_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_double2_pane_vc_g1

0x1a93,	// (0x00015ac8) list_double2_pane_vc_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00023603) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00023603) list_double2_pane_vc_g

0x3aa8,	// (0x00017add) list_double2_pane_vc_t1_ParamLimits

0x3aa8,	// (0x00017add) list_double2_pane_vc_t1

0x3abe,	// (0x00017af3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3abe,	// (0x00017af3) list_double2_large_graphic_pane_vc_g1

0x0b89,	// (0x00014bbe) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0b89,	// (0x00014bbe) list_double2_large_graphic_pane_vc_g2

0x1a93,	// (0x00015ac8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1a93,	// (0x00015ac8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00023620) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00023620) list_double2_large_graphic_pane_vc_g

0x3aca,	// (0x00017aff) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3aca,	// (0x00017aff) list_double2_large_graphic_pane_vc_t1

0x3ae0,	// (0x00017b15) list_double_time_pane_vc_g1_ParamLimits

0x3ae0,	// (0x00017b15) list_double_time_pane_vc_g1

0x3aec,	// (0x00017b21) list_double_time_pane_vc_g2_ParamLimits

0x3aec,	// (0x00017b21) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x00023a7f) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x00023a7f) list_double_time_pane_vc_g

0x3af8,	// (0x00017b2d) list_double_time_pane_vc_t1_ParamLimits

0x3af8,	// (0x00017b2d) list_double_time_pane_vc_t1

0x3b28,	// (0x00017b5d) list_double_time_pane_vc_t2_ParamLimits

0x3b28,	// (0x00017b5d) list_double_time_pane_vc_t2

0x3b51,	// (0x00017b86) list_double_time_pane_vc_t3_ParamLimits

0x3b51,	// (0x00017b86) list_double_time_pane_vc_t3

0x3b63,	// (0x00017b98) list_double_time_pane_vc_t4_ParamLimits

0x3b63,	// (0x00017b98) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x00023a84) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x00023a84) list_double_time_pane_vc_t

0x0b89,	// (0x00014bbe) list_double_pane_vc_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_double_pane_vc_g1

0x1a93,	// (0x00015ac8) list_double_pane_vc_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00023603) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00023603) list_double_pane_vc_g

0x3b88,	// (0x00017bbd) list_double_pane_vc_t1_ParamLimits

0x3b88,	// (0x00017bbd) list_double_pane_vc_t1

0x3b9c,	// (0x00017bd1) list_double_pane_vc_t2_ParamLimits

0x3b9c,	// (0x00017bd1) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x00023a8d) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x00023a8d) list_double_pane_vc_t

0x0b89,	// (0x00014bbe) list_double_number_pane_vc_g1_ParamLimits

0x0b89,	// (0x00014bbe) list_double_number_pane_vc_g1

0x1a93,	// (0x00015ac8) list_double_number_pane_vc_g2_ParamLimits

0x1a93,	// (0x00015ac8) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00023603) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00023603) list_double_number_pane_vc_g

0x3bb2,	// (0x00017be7) list_double_number_pane_vc_t1_ParamLimits

0x3bb2,	// (0x00017be7) list_double_number_pane_vc_t1

0x3bc6,	// (0x00017bfb) list_double_number_pane_vc_t2_ParamLimits

0x3bc6,	// (0x00017bfb) list_double_number_pane_vc_t2

0x3bda,	// (0x00017c0f) list_double_number_pane_vc_t3_ParamLimits

0x3bda,	// (0x00017c0f) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x00023a92) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x00023a92) list_double_number_pane_vc_t

0x3bf0,	// (0x00017c25) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3bf0,	// (0x00017c25) list_double_large_graphic_pane_vc_g1

0x3c01,	// (0x00017c36) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3c01,	// (0x00017c36) list_double_large_graphic_pane_vc_g2

0x1a93,	// (0x00015ac8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1a93,	// (0x00015ac8) list_double_large_graphic_pane_vc_g3

0x3c10,	// (0x00017c45) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3c10,	// (0x00017c45) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x00023a99) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x00023a99) list_double_large_graphic_pane_vc_g

0x3c1c,	// (0x00017c51) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3c1c,	// (0x00017c51) list_double_large_graphic_pane_vc_t1

0x3c35,	// (0x00017c6a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3c35,	// (0x00017c6a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x00023aa2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x00023aa2) list_double_large_graphic_pane_vc_t

0x37c6,	// (0x000177fb) list_double_heading_pane_vc_g1_ParamLimits

0x37c6,	// (0x000177fb) list_double_heading_pane_vc_g1

0x37d2,	// (0x00017807) list_double_heading_pane_vc_g2_ParamLimits

0x37d2,	// (0x00017807) list_double_heading_pane_vc_g2

0x0001,

0xfa72,	// (0x00023aa7) list_double_heading_pane_vc_g_ParamLimits

0xfa72,	// (0x00023aa7) list_double_heading_pane_vc_g

0x3c4c,	// (0x00017c81) list_double_heading_pane_vc_t1_ParamLimits

0x3c4c,	// (0x00017c81) list_double_heading_pane_vc_t1

0x1b59,	// (0x00015b8e) list_double_heading_pane_vc_t2_ParamLimits

0x1b59,	// (0x00015b8e) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00023aac) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00023aac) list_double_heading_pane_vc_t

0x1a87,	// (0x00015abc) list_double_graphic_pane_vc_g1_ParamLimits

0x1a87,	// (0x00015abc) list_double_graphic_pane_vc_g1

0x3c5e,	// (0x00017c93) list_double_graphic_pane_vc_g2_ParamLimits

0x3c5e,	// (0x00017c93) list_double_graphic_pane_vc_g2

0x3c6d,	// (0x00017ca2) list_double_graphic_pane_vc_g3_ParamLimits

0x3c6d,	// (0x00017ca2) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00023ab1) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00023ab1) list_double_graphic_pane_vc_g

0x3c79,	// (0x00017cae) list_double_graphic_pane_vc_t1_ParamLimits

0x3c79,	// (0x00017cae) list_double_graphic_pane_vc_t1

0x3c8d,	// (0x00017cc2) list_double_graphic_pane_vc_t2_ParamLimits

0x3c8d,	// (0x00017cc2) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00023ab8) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00023ab8) list_double_graphic_pane_vc_t

0xd463,	// (0x00021498) aid_size_cell_fastswap

0x8cf6,	// (0x0001cd2b) aid_size_cell_touch_ParamLimits

0x8cf6,	// (0x0001cd2b) aid_size_cell_touch

0xe2a7,	// (0x000222dc) popup_fast_swap_wide_window_ParamLimits

0xe2a7,	// (0x000222dc) popup_fast_swap_wide_window

0x8e45,	// (0x0001ce7a) touch_pane_ParamLimits

0x8e45,	// (0x0001ce7a) touch_pane

0xdb49,	// (0x00021b7e) button_value_adjust_pane_cp2

0xdb51,	// (0x00021b86) button_value_adjust_pane_cp4

0xdb59,	// (0x00021b8e) form_field_data_pane_cp2

0x9f14,	// (0x0001df49) form_field_data_wide_pane_cp2

0xdfa3,	// (0x00021fd8) bg_scroll_pane_ParamLimits

0xe56d,	// (0x000225a2) scroll_handle_pane_ParamLimits

0xe581,	// (0x000225b6) scroll_sc2_down_pane_ParamLimits

0xe581,	// (0x000225b6) scroll_sc2_down_pane

0xdfd4,	// (0x00022009) scroll_sc2_up_pane_ParamLimits

0xdfd4,	// (0x00022009) scroll_sc2_up_pane

0xb829,	// (0x0001f85e) grid_wheel_folder_pane_g1_ParamLimits

0xb829,	// (0x0001f85e) grid_wheel_folder_pane_g1

0xe74b,	// (0x00022780) clock_nsta_pane_cp2_ParamLimits

0xe74b,	// (0x00022780) clock_nsta_pane_cp2

0x0f9a,	// (0x00014fcf) listscroll_midp_pane_ParamLimits

0xa44c,	// (0x0001e481) midp_canvas_pane

0x0f0e,	// (0x00014f43) nsta_clock_indic_pane

0x0f6c,	// (0x00014fa1) listscroll_form_pane_vc

0x0f88,	// (0x00014fbd) listscroll_set_pane_vc_ParamLimits

0x0f88,	// (0x00014fbd) listscroll_set_pane_vc

0xad93,	// (0x0001edc8) clock_nsta_pane

0xadbd,	// (0x0001edf2) indicator_nsta_pane

0x1a21,	// (0x00015a56) bg_popup_sub_pane_cp2_ParamLimits

0x1a35,	// (0x00015a6a) find_pane_cp2_ParamLimits

0x1a35,	// (0x00015a6a) find_pane_cp2

0x1a4b,	// (0x00015a80) grid_toobar_pane_ParamLimits

0x1c0b,	// (0x00015c40) list_form_gen_pane_vc_ParamLimits

0x1c0b,	// (0x00015c40) list_form_gen_pane_vc

0x1c21,	// (0x00015c56) scroll_pane_cp8_vc_ParamLimits

0x1c21,	// (0x00015c56) scroll_pane_cp8_vc

0x1c9d,	// (0x00015cd2) data_form_wide_pane_vc_ParamLimits

0x1c9d,	// (0x00015cd2) data_form_wide_pane_vc

0x1ca9,	// (0x00015cde) form_field_data_wide_pane_vc_g1

0x1cb1,	// (0x00015ce6) form_field_data_wide_pane_vc_t1_ParamLimits

0x1cb1,	// (0x00015ce6) form_field_data_wide_pane_vc_t1

0xdbb4,	// (0x00021be9) input_focus_pane_cp6_vc_ParamLimits

0xdbb4,	// (0x00021be9) input_focus_pane_cp6_vc

0xb15a,	// (0x0001f18f) list_midp_pane_ParamLimits

0x3428,	// (0x0001745d) scroll_pane_cp16_ParamLimits

0x3428,	// (0x0001745d) scroll_pane_cp16

0x203c,	// (0x00016071) button_value_adjust_pane_ParamLimits

0x203c,	// (0x00016071) button_value_adjust_pane

0xb43c,	// (0x0001f471) button_value_adjust_pane_cp6_ParamLimits

0xb43c,	// (0x0001f471) button_value_adjust_pane_cp6

0xb57e,	// (0x0001f5b3) settings_code_pane_cp_ParamLimits

0xb57e,	// (0x0001f5b3) settings_code_pane_cp

0xb9cb,	// (0x0001fa00) cell_touch_pane_g1

0xb9cb,	// (0x0001fa00) cell_touch_pane_g2

0x0001,

0xf704,	// (0x00023739) cell_touch_pane_g

0xb6fe,	// (0x0001f733) cell_touch_pane_cp_ParamLimits

0xb6fe,	// (0x0001f733) cell_touch_pane_cp

0xb71a,	// (0x0001f74f) cell_touch_pane_ParamLimits

0xb71a,	// (0x0001f74f) cell_touch_pane

0xb9cb,	// (0x0001fa00) scroll_sc2_down_pane_g1

0xb9cb,	// (0x0001fa00) scroll_sc2_up_pane_g1

0xb9d5,	// (0x0001fa0a) bg_set_opt_pane_cp4_vc

0x3812,	// (0x00017847) list_set_graphic_pane_vc_g1_ParamLimits

0x3812,	// (0x00017847) list_set_graphic_pane_vc_g1

0xe18a,	// (0x000221bf) list_set_graphic_pane_vc_g2_ParamLimits

0xe18a,	// (0x000221bf) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x00023a30) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x00023a30) list_set_graphic_pane_vc_g

0x381e,	// (0x00017853) text_primary_small_cp13_vc_ParamLimits

0x381e,	// (0x00017853) text_primary_small_cp13_vc

0x3836,	// (0x0001786b) list_set_graphic_pane_vc_ParamLimits

0x3836,	// (0x0001786b) list_set_graphic_pane_vc

0xb9d5,	// (0x0001fa0a) input_focus_pane_cp2_vc

0xb9cb,	// (0x0001fa00) setting_code_pane_vc_g1

0xd516,	// (0x0002154b) setting_code_pane_vc_t1

0x384b,	// (0x00017880) set_text_pane_vc_t1_ParamLimits

0x384b,	// (0x00017880) set_text_pane_vc_t1

0xb9d5,	// (0x0001fa0a) input_focus_pane_cp1_vc

0x3869,	// (0x0001789e) list_set_text_pane_vc

0xb9cb,	// (0x0001fa00) setting_text_pane_vc_g1

0xb9d5,	// (0x0001fa0a) bg_set_opt_pane_cp2_vc

0xd50d,	// (0x00021542) setting_slider_graphic_pane_vc_g1

0x3873,	// (0x000178a8) setting_slider_graphic_pane_vc_t1

0x3885,	// (0x000178ba) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x00023a35) setting_slider_graphic_pane_vc_t

0x3897,	// (0x000178cc) slider_set_pane_cp_vc

0x38a1,	// (0x000178d6) slider_set_pane_vc_g1

0x38aa,	// (0x000178df) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x00023a3a) slider_set_pane_vc_g

0xdc7d,	// (0x00021cb2) set_opt_bg_pane_g1_copy1

0xdc85,	// (0x00021cba) set_opt_bg_pane_g2_copy1

0x38d6,	// (0x0001790b) set_opt_bg_pane_g3_copy1

0xdc95,	// (0x00021cca) set_opt_bg_pane_g4_copy1

0xdc9d,	// (0x00021cd2) set_opt_bg_pane_g5_copy1

0xdca5,	// (0x00021cda) set_opt_bg_pane_g6_copy1

0x38e0,	// (0x00017915) set_opt_bg_pane_g7_copy1

0x38ea,	// (0x0001791f) set_opt_bg_pane_g8_copy1

0x38f4,	// (0x00017929) set_opt_bg_pane_g9_copy1

0xb9d5,	// (0x0001fa0a) bg_set_opt_pane_cp_vc

0x38fe,	// (0x00017933) setting_slider_pane_vc_t1

0x390d,	// (0x00017942) setting_slider_pane_vc_t2

0x391f,	// (0x00017954) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x00023a49) setting_slider_pane_vc_t

0x3931,	// (0x00017966) slider_set_pane_vc

0xe9b0,	// (0x000229e5) volume_set_pane_vc_g1

0xeaff,	// (0x00022b34) volume_set_pane_vc_g2

0xeb08,	// (0x00022b3d) volume_set_pane_vc_g3

0xeb11,	// (0x00022b46) volume_set_pane_vc_g4

0xeb1a,	// (0x00022b4f) volume_set_pane_vc_g5

0xeb23,	// (0x00022b58) volume_set_pane_vc_g6

0xeb2c,	// (0x00022b61) volume_set_pane_vc_g7

0xeb35,	// (0x00022b6a) volume_set_pane_vc_g8

0xeb3e,	// (0x00022b73) volume_set_pane_vc_g9

0xeb47,	// (0x00022b7c) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x00023a50) volume_set_pane_vc_g

0x393b,	// (0x00017970) volume_set_pane_vc

0x3945,	// (0x0001797a) button_value_adjust_pane_cp1_vc

0x394f,	// (0x00017984) list_highlight_pane_cp2_vc

0x3958,	// (0x0001798d) list_set_pane_vc_ParamLimits

0x3958,	// (0x0001798d) list_set_pane_vc

0x39c8,	// (0x000179fd) main_pane_set_vc_t1_ParamLimits

0x39c8,	// (0x000179fd) main_pane_set_vc_t1

0x39dd,	// (0x00017a12) main_pane_set_vc_t2_ParamLimits

0x39dd,	// (0x00017a12) main_pane_set_vc_t2

0x39ef,	// (0x00017a24) main_pane_set_vc_t3_ParamLimits

0x39ef,	// (0x00017a24) main_pane_set_vc_t3

0x3a03,	// (0x00017a38) main_pane_set_vc_t4_ParamLimits

0x3a03,	// (0x00017a38) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x00023a65) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x00023a65) main_pane_set_vc_t

0x3a17,	// (0x00017a4c) setting_code_pane_vc_ParamLimits

0x3a17,	// (0x00017a4c) setting_code_pane_vc

0x3a28,	// (0x00017a5d) setting_slider_graphic_pane_vc

0x3a28,	// (0x00017a5d) setting_slider_pane_vc

0x3a28,	// (0x00017a5d) setting_text_pane_vc

0x3a28,	// (0x00017a5d) setting_volume_pane_vc

0x3a32,	// (0x00017a67) scroll_pane_cp121_vc

0xdb37,	// (0x00021b6c) set_content_pane_vc

0x3ca3,	// (0x00017cd8) button_value_adjust_pane_g1

0x3cac,	// (0x00017ce1) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00023abd) button_value_adjust_pane_g

0x3cb5,	// (0x00017cea) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3cb5,	// (0x00017cea) form_field_slider_wide_pane_vc_t1

0x3cc7,	// (0x00017cfc) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3cc7,	// (0x00017cfc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x00023ac2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00023ac2) form_field_slider_wide_pane_vc_t

0xba2f,	// (0x0001fa64) input_focus_pane_cp10_vc_ParamLimits

0xba2f,	// (0x0001fa64) input_focus_pane_cp10_vc

0x3cf3,	// (0x00017d28) slider_cont_pane_cp1_vc_ParamLimits

0x3cf3,	// (0x00017d28) slider_cont_pane_cp1_vc

0x3d05,	// (0x00017d3a) slider_form_pane_g1_cp2

0x38aa,	// (0x000178df) slider_form_pane_g2_cp2

0x3d32,	// (0x00017d67) form_field_slider_pane_vc_t3

0x3d40,	// (0x00017d75) form_field_slider_pane_vc_t4

0x3d4e,	// (0x00017d83) slider_form_pane_vc_ParamLimits

0x3d4e,	// (0x00017d83) slider_form_pane_vc

0x3d5b,	// (0x00017d90) form_field_slider_pane_vc_t1_ParamLimits

0x3d5b,	// (0x00017d90) form_field_slider_pane_vc_t1

0x3cc7,	// (0x00017cfc) form_field_slider_pane_vc_t2_ParamLimits

0x3cc7,	// (0x00017cfc) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00023ad4) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00023ad4) form_field_slider_pane_vc_t

0xba2f,	// (0x0001fa64) input_focus_pane_cp9_vc_ParamLimits

0xba2f,	// (0x0001fa64) input_focus_pane_cp9_vc

0x3d71,	// (0x00017da6) slider_cont_pane_vc_ParamLimits

0x3d71,	// (0x00017da6) slider_cont_pane_vc

0x3d85,	// (0x00017dba) list_form_graphic_pane_cp_vc_ParamLimits

0x3d85,	// (0x00017dba) list_form_graphic_pane_cp_vc

0x1ca9,	// (0x00015cde) form_field_popup_wide_pane_vc_g1

0x3d9a,	// (0x00017dcf) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3d9a,	// (0x00017dcf) form_field_popup_wide_pane_vc_t1

0xdbb4,	// (0x00021be9) input_focus_pane_cp8_vc_ParamLimits

0xdbb4,	// (0x00021be9) input_focus_pane_cp8_vc

0x3ddf,	// (0x00017e14) list_form_wide_pane_vc_ParamLimits

0x3ddf,	// (0x00017e14) list_form_wide_pane_vc

0x3deb,	// (0x00017e20) list_form_graphic_pane_vc_g1

0x3df3,	// (0x00017e28) list_form_graphic_pane_vc_t1_ParamLimits

0x3df3,	// (0x00017e28) list_form_graphic_pane_vc_t1

0xd4ff,	// (0x00021534) list_highlight_pane_cp5_vc_ParamLimits

0xd4ff,	// (0x00021534) list_highlight_pane_cp5_vc

0x3e0f,	// (0x00017e44) list_form_graphic_pane_vc_ParamLimits

0x3e0f,	// (0x00017e44) list_form_graphic_pane_vc

0x1ca9,	// (0x00015cde) form_field_popup_pane_vc_g1

0x3e25,	// (0x00017e5a) form_field_popup_pane_vc_t1_ParamLimits

0x3e25,	// (0x00017e5a) form_field_popup_pane_vc_t1

0xdbb4,	// (0x00021be9) input_focus_pane_cp7_vc_ParamLimits

0xdbb4,	// (0x00021be9) input_focus_pane_cp7_vc

0x3e3c,	// (0x00017e71) list_form_pane_vc_ParamLimits

0x3e3c,	// (0x00017e71) list_form_pane_vc

0x3e48,	// (0x00017e7d) data_form_pane_vc_t1_ParamLimits

0x3e48,	// (0x00017e7d) data_form_pane_vc_t1

0xdc7d,	// (0x00021cb2) input_focus_pane_vc_g1

0xdc85,	// (0x00021cba) input_focus_pane_vc_g2

0xdc8d,	// (0x00021cc2) input_focus_pane_vc_g3

0xdc95,	// (0x00021cca) input_focus_pane_vc_g4

0xdc9d,	// (0x00021cd2) input_focus_pane_vc_g5

0xdca5,	// (0x00021cda) input_focus_pane_vc_g6

0xdcad,	// (0x00021ce2) input_focus_pane_vc_g7

0xdcb5,	// (0x00021cea) input_focus_pane_vc_g8

0xdcbd,	// (0x00021cf2) input_focus_pane_vc_g9

0xb9cb,	// (0x0001fa00) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x000236c2) input_focus_pane_vc_g

0x1c9d,	// (0x00015cd2) data_form_pane_vc_ParamLimits

0x1c9d,	// (0x00015cd2) data_form_pane_vc

0x1ca9,	// (0x00015cde) form_field_data_pane_vc_g1

0x3e65,	// (0x00017e9a) form_field_data_pane_vc_t1_ParamLimits

0x3e65,	// (0x00017e9a) form_field_data_pane_vc_t1

0xdbb4,	// (0x00021be9) input_focus_pane_vc_ParamLimits

0xdbb4,	// (0x00021be9) input_focus_pane_vc

0x3e7f,	// (0x00017eb4) button_value_adjust_pane_cp3_vc

0x3e87,	// (0x00017ebc) button_value_adjust_pane_cp5_vc

0x3e8f,	// (0x00017ec4) form_field_data_pane_vc_ParamLimits

0x3e8f,	// (0x00017ec4) form_field_data_pane_vc

0x3eaa,	// (0x00017edf) form_field_data_pane_vc_cp2

0x3eb2,	// (0x00017ee7) form_field_data_wide_pane_vc_ParamLimits

0x3eb2,	// (0x00017ee7) form_field_data_wide_pane_vc

0x3ecc,	// (0x00017f01) form_field_data_wide_pane_vc_cp2

0x3ed4,	// (0x00017f09) form_field_popup_pane_vc_ParamLimits

0x3ed4,	// (0x00017f09) form_field_popup_pane_vc

0x3eef,	// (0x00017f24) form_field_popup_wide_pane_vc_ParamLimits

0x3eef,	// (0x00017f24) form_field_popup_wide_pane_vc

0x3f09,	// (0x00017f3e) form_field_slider_pane_vc_ParamLimits

0x3f09,	// (0x00017f3e) form_field_slider_pane_vc

0x3f1c,	// (0x00017f51) form_field_slider_wide_pane_vc_ParamLimits

0x3f1c,	// (0x00017f51) form_field_slider_wide_pane_vc

0xb738,	// (0x0001f76d) grid_touch_1_pane_ParamLimits

0xb738,	// (0x0001f76d) grid_touch_1_pane

0xb74c,	// (0x0001f781) grid_touch_2_pane_ParamLimits

0xb74c,	// (0x0001f781) grid_touch_2_pane

0x3ff3,	// (0x00018028) touch_pane_g1_ParamLimits

0x3ff3,	// (0x00018028) touch_pane_g1

0x3f55,	// (0x00017f8a) cell_app_pane_cp_wide_ParamLimits

0x3f55,	// (0x00017f8a) cell_app_pane_cp_wide

0x3f66,	// (0x00017f9b) grid_popup_fast_wide_pane_ParamLimits

0x3f66,	// (0x00017f9b) grid_popup_fast_wide_pane

0x3f7a,	// (0x00017faf) scroll_pane_cp19_ParamLimits

0x3f7a,	// (0x00017faf) scroll_pane_cp19

0xb9d5,	// (0x0001fa0a) bg_popup_window_pane_cp20

0x3f8e,	// (0x00017fc3) listscroll_popup_fast_wide_pane

0xe196,	// (0x000221cb) grid_indicator_nsta_pane

0x3f96,	// (0x00017fcb) clock_nsta_pane_g1

0x3f9f,	// (0x00017fd4) clock_nsta_pane_t1

0xb778,	// (0x0001f7ad) cell_indicator_nsta_pane_ParamLimits

0xb778,	// (0x0001f7ad) cell_indicator_nsta_pane

0x3ff3,	// (0x00018028) cell_indicator_nsta_pane_g1

0xb795,	// (0x0001f7ca) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00023ae5) cell_indicator_nsta_pane_g

0x4017,	// (0x0001804c) clock_nsta_pane_cp

0x401f,	// (0x00018054) indicator_nsta_pane_cp

0x4028,	// (0x0001805d) nsta_clock_indic_pane_g1

0xd555,	// (0x0002158a) grid_indicator_pane

0xe0c6,	// (0x000220fb) scroll_pane_cp29

0xe697,	// (0x000226cc) indicator_nsta_pane_cp2_ParamLimits

0xe697,	// (0x000226cc) indicator_nsta_pane_cp2

0xd4ff,	// (0x00021534) main_apps_wheel_pane

0x1ebf,	// (0x00015ef4) form_midp_field_text_pane_ParamLimits

0x200e,	// (0x00016043) scroll_bar_cp050_ParamLimits

0x4091,	// (0x000180c6) cell_indicator_pane_ParamLimits

0x4091,	// (0x000180c6) cell_indicator_pane

0x40a9,	// (0x000180de) cell_indicator_pane_g1

0xb7ab,	// (0x0001f7e0) grid_wheel_folder_pane_ParamLimits

0xb7ab,	// (0x0001f7e0) grid_wheel_folder_pane

0xb7b9,	// (0x0001f7ee) list_wheel_apps_pane_ParamLimits

0xb7b9,	// (0x0001f7ee) list_wheel_apps_pane

0xb7c7,	// (0x0001f7fc) main_apps_wheel_pane_g1_ParamLimits

0xb7c7,	// (0x0001f7fc) main_apps_wheel_pane_g1

0xb7d7,	// (0x0001f80c) main_apps_wheel_pane_g2_ParamLimits

0xb7d7,	// (0x0001f80c) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00023b01) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00023b01) main_apps_wheel_pane_g

0xb7e7,	// (0x0001f81c) main_apps_wheel_pane_t1_ParamLimits

0xb7e7,	// (0x0001f81c) main_apps_wheel_pane_t1

0xb7ff,	// (0x0001f834) list_wheel_apps_pane_g1

0xb807,	// (0x0001f83c) list_wheel_apps_pane_g2

0xb80f,	// (0x0001f844) list_wheel_apps_pane_g3

0xb817,	// (0x0001f84c) list_wheel_apps_pane_g4

0xb81f,	// (0x0001f854) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00023b06) list_wheel_apps_pane_g

0x0a94,	// (0x00014ac9) navi_icon_text_pane

0xac85,	// (0x0001ecba) aid_fill_nsta

0xb83c,	// (0x0001f871) navi_icon_text_pane_g1

0xb848,	// (0x0001f87d) navi_icon_text_pane_t1

0xa3b0,	// (0x0001e3e5) list_set_graphic_pane_t1_ParamLimits

0xa3b0,	// (0x0001e3e5) list_set_graphic_pane_t1

0x275f,	// (0x00016794) popup_midp_note_alarm_window_t6_ParamLimits

0x275f,	// (0x00016794) popup_midp_note_alarm_window_t6

0x2771,	// (0x000167a6) popup_midp_note_alarm_window_t7_ParamLimits

0x2771,	// (0x000167a6) popup_midp_note_alarm_window_t7

0x2783,	// (0x000167b8) popup_midp_note_alarm_window_t8_ParamLimits

0x2783,	// (0x000167b8) popup_midp_note_alarm_window_t8

0x2795,	// (0x000167ca) popup_midp_note_alarm_window_t9_ParamLimits

0x2795,	// (0x000167ca) popup_midp_note_alarm_window_t9

0x27a7,	// (0x000167dc) popup_midp_note_alarm_window_t10_ParamLimits

0x27a7,	// (0x000167dc) popup_midp_note_alarm_window_t10

0x27b9,	// (0x000167ee) popup_midp_note_alarm_window_t11_ParamLimits

0x27b9,	// (0x000167ee) popup_midp_note_alarm_window_t11

0x27cb,	// (0x00016800) scroll_pane_cp17_ParamLimits

0x27cb,	// (0x00016800) scroll_pane_cp17

0xe9b0,	// (0x000229e5) volume_small_pane_cp_g1

0xebaf,	// (0x00022be4) volume_small_pane_cp_g2

0xebb8,	// (0x00022bed) volume_small_pane_cp_g3

0xebc1,	// (0x00022bf6) volume_small_pane_cp_g4

0xebca,	// (0x00022bff) volume_small_pane_cp_g5

0xebd3,	// (0x00022c08) volume_small_pane_cp_g6

0xebdc,	// (0x00022c11) volume_small_pane_cp_g7

0xebe5,	// (0x00022c1a) volume_small_pane_cp_g8

0xebee,	// (0x00022c23) volume_small_pane_cp_g9

0xebf7,	// (0x00022c2c) volume_small_pane_cp_g10

0x0ce9,	// (0x00014d1e) midp_ticker_pane_g1_ParamLimits

0x0cf5,	// (0x00014d2a) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0002378e) midp_ticker_pane_g_ParamLimits

0xa4e3,	// (0x0001e518) midp_ticker_pane_t1_ParamLimits

0xaca9,	// (0x0001ecde) aid_fill_nsta_2

0x1ffa,	// (0x0001602f) list_form2_midp_pane

0x31d3,	// (0x00017208) midp_editing_number_pane_ParamLimits

0x31e2,	// (0x00017217) midp_ticker_pane_ParamLimits

0x419c,	// (0x000181d1) form2_midp_field_pane

0x41c0,	// (0x000181f5) scroll_pane_cp51

0x41e0,	// (0x00018215) form2_midp_button_pane_ParamLimits

0x41e0,	// (0x00018215) form2_midp_button_pane

0x41f2,	// (0x00018227) form2_midp_content_pane_ParamLimits

0x41f2,	// (0x00018227) form2_midp_content_pane

0x420c,	// (0x00018241) form2_midp_field_choice_group_pane

0x4214,	// (0x00018249) form2_midp_field_pane_g1

0x421c,	// (0x00018251) form2_midp_field_pane_g2

0x4224,	// (0x00018259) form2_midp_field_pane_g3

0x422c,	// (0x00018261) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00023b2b) form2_midp_field_pane_g

0x4234,	// (0x00018269) form2_midp_gauge_slider_pane

0x423c,	// (0x00018271) form2_midp_gauge_wait_pane

0x4244,	// (0x00018279) form2_midp_image_pane_ParamLimits

0x4244,	// (0x00018279) form2_midp_image_pane

0x425f,	// (0x00018294) form2_midp_label_pane_ParamLimits

0x425f,	// (0x00018294) form2_midp_label_pane

0xb876,	// (0x0001f8ab) form2_midp_label_pane_cp_ParamLimits

0xb876,	// (0x0001f8ab) form2_midp_label_pane_cp

0x429f,	// (0x000182d4) form2_midp_string_pane_ParamLimits

0x429f,	// (0x000182d4) form2_midp_string_pane

0xb897,	// (0x0001f8cc) form2_midp_text_pane_ParamLimits

0xb897,	// (0x0001f8cc) form2_midp_text_pane

0x42d2,	// (0x00018307) form2_midp_time_pane

0x42e2,	// (0x00018317) input_focus_pane_cp51_ParamLimits

0x42e2,	// (0x00018317) input_focus_pane_cp51

0x42fa,	// (0x0001832f) form2_midp_label_pane_t1_ParamLimits

0x42fa,	// (0x0001832f) form2_midp_label_pane_t1

0xb8b8,	// (0x0001f8ed) form2_mdip_text_pane_t1_ParamLimits

0xb8b8,	// (0x0001f8ed) form2_mdip_text_pane_t1

0x4362,	// (0x00018397) form2_midp_time_pane_t1

0x437d,	// (0x000183b2) form2_midp_gauge_slider_pane_t1

0xb8d7,	// (0x0001f90c) form2_midp_gauge_slider_pane_t2

0xb8e9,	// (0x0001f91e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00023b34) form2_midp_gauge_slider_pane_t

0x43b3,	// (0x000183e8) form2_midp_slider_pane

0x43bf,	// (0x000183f4) form2_midp_gauge_wait_pane_t1

0x43cd,	// (0x00018402) form2_midp_wait_pane_ParamLimits

0x43cd,	// (0x00018402) form2_midp_wait_pane

0x1cf0,	// (0x00015d25) list_single_2graphic_pane_cp4_ParamLimits

0x1cf0,	// (0x00015d25) list_single_2graphic_pane_cp4

0x43f8,	// (0x0001842d) list_single_midp_graphic_pane_cp_ParamLimits

0x43f8,	// (0x0001842d) list_single_midp_graphic_pane_cp

0xb9d5,	// (0x0001fa0a) list_highlight_pane_cp20

0x441c,	// (0x00018451) list_single_2graphic_pane_g1_cp4

0x36a8,	// (0x000176dd) list_single_2graphic_pane_g2_cp4

0x4424,	// (0x00018459) list_single_2graphic_pane_t1_cp4

0xd4ff,	// (0x00021534) list_highlight_pane_cp21

0x4433,	// (0x00018468) list_single_midp_graphic_pane_g4_cp

0x4442,	// (0x00018477) list_single_midp_graphic_pane_t1_cp

0xb8fb,	// (0x0001f930) form2_mdip_string_pane_t1_ParamLimits

0xb8fb,	// (0x0001f930) form2_mdip_string_pane_t1

0xb9d5,	// (0x0001fa0a) bg_wml_button_pane_cp2

0xb9cb,	// (0x0001fa00) form2_midp_image_pane_g1

0xdae1,	// (0x00021b16) list_double_large_graphic_pane_g5_ParamLimits

0xdae1,	// (0x00021b16) list_double_large_graphic_pane_g5

0x0f9a,	// (0x00014fcf) midp_form_pane_ParamLimits

0xd4ff,	// (0x00021534) main_apps_wheel_pane_ParamLimits

0xa99d,	// (0x0001e9d2) popup_preview_window_ParamLimits

0xa99d,	// (0x0001e9d2) popup_preview_window

0x156a,	// (0x0001559f) popup_touch_info_window_ParamLimits

0x156a,	// (0x0001559f) popup_touch_info_window

0x158c,	// (0x000155c1) popup_touch_menu_window_ParamLimits

0x158c,	// (0x000155c1) popup_touch_menu_window

0xb9c1,	// (0x0001f9f6) bg_popup_sub_pane_cp6

0x44fc,	// (0x00018531) list_touch_menu_pane

0x4504,	// (0x00018539) list_single_touch_menu_pane_ParamLimits

0x4504,	// (0x00018539) list_single_touch_menu_pane

0x451c,	// (0x00018551) list_single_touch_menu_pane_t1

0xd4ff,	// (0x00021534) bg_popup_sub_pane_cp7_ParamLimits

0xd4ff,	// (0x00021534) bg_popup_sub_pane_cp7

0x452a,	// (0x0001855f) heading_sub_pane

0x4532,	// (0x00018567) list_touch_info_pane_ParamLimits

0x4532,	// (0x00018567) list_touch_info_pane

0x4541,	// (0x00018576) list_single_touch_info_pane_ParamLimits

0x4541,	// (0x00018576) list_single_touch_info_pane

0x4553,	// (0x00018588) list_single_touch_info_pane_t1

0x4561,	// (0x00018596) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00023b42) list_single_touch_info_pane_t

0x0c18,	// (0x00014c4d) bg_popup_heading_pane_cp

0x456f,	// (0x000185a4) heading_sub_pane_t1

0x1c37,	// (0x00015c6c) bg_popup_preview_window_pane_cp_ParamLimits

0x1c37,	// (0x00015c6c) bg_popup_preview_window_pane_cp

0x452a,	// (0x0001855f) heading_preview_pane

0x4532,	// (0x00018567) list_preview_pane_ParamLimits

0x4532,	// (0x00018567) list_preview_pane

0x457d,	// (0x000185b2) popup_preview_window_g1

0x4541,	// (0x00018576) list_single_preview_pane_ParamLimits

0x4541,	// (0x00018576) list_single_preview_pane

0x4585,	// (0x000185ba) list_single_preview_pane_g1

0x458d,	// (0x000185c2) list_single_preview_pane_t1

0x4553,	// (0x00018588) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00023b47) list_single_preview_pane_t

0x459b,	// (0x000185d0) bg_popup_heading_pane_cp2_ParamLimits

0x459b,	// (0x000185d0) bg_popup_heading_pane_cp2

0x45b1,	// (0x000185e6) heading_preview_pane_g1

0x45b9,	// (0x000185ee) heading_preview_pane_t1_ParamLimits

0x45b9,	// (0x000185ee) heading_preview_pane_t1

0xd56c,	// (0x000215a1) soft_indicator_pane_t1_ParamLimits

0xdaa1,	// (0x00021ad6) scroll_pane_ParamLimits

0xdfc2,	// (0x00021ff7) scroll_sc2_left_pane

0xdfcb,	// (0x00022000) scroll_sc2_right_pane

0xdfea,	// (0x0002201f) scroll_bg_pane_g1_ParamLimits

0xdfff,	// (0x00022034) scroll_bg_pane_g2_ParamLimits

0xe017,	// (0x0002204c) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x00023719) scroll_bg_pane_g_ParamLimits

0xdfea,	// (0x0002201f) scroll_handle_pane_g1_ParamLimits

0xe039,	// (0x0002206e) scroll_handle_pane_g2_ParamLimits

0xe017,	// (0x0002204c) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x00023720) scroll_handle_pane_g_ParamLimits

0x0fca,	// (0x00014fff) popup_choice_list_window_ParamLimits

0x0fca,	// (0x00014fff) popup_choice_list_window

0x1a2d,	// (0x00015a62) choice_list_pane

0x1add,	// (0x00015b12) cell_toolbar_pane_t1

0x1b05,	// (0x00015b3a) toolbar_button_pane_ParamLimits

0x2c95,	// (0x00016cca) ai_gene_pane_1_t2_ParamLimits

0x2c95,	// (0x00016cca) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x00023943) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x00023943) ai_gene_pane_1_t

0x45d6,	// (0x0001860b) scroll_sc2_left_pane_g1

0x45d6,	// (0x0001860b) scroll_sc2_right_pane_g1

0x0f9a,	// (0x00014fcf) bg_popup_sub_pane_cp10

0x45e0,	// (0x00018615) list_choice_list_pane

0x45f9,	// (0x0001862e) list_single_choice_list_pane_ParamLimits

0x45f9,	// (0x0001862e) list_single_choice_list_pane

0x4611,	// (0x00018646) list_single_choice_list_pane_g1

0xdda2,	// (0x00021dd7) list_single_choice_list_pane_t1_ParamLimits

0xdda2,	// (0x00021dd7) list_single_choice_list_pane_t1

0x4619,	// (0x0001864e) choice_list_pane_g1

0x4621,	// (0x00018656) choice_list_pane_t1

0xb9c1,	// (0x0001f9f6) input_focus_pane_cp11

0xdf20,	// (0x00021f55) title_pane_stacon_g2_ParamLimits

0xdf20,	// (0x00021f55) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x000236ff) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000236ff) title_pane_stacon_g

0x0c18,	// (0x00014c4d) cursor_press_pane

0xa61a,	// (0x0001e64f) popup_fep_hwr_window_ParamLimits

0xa61a,	// (0x0001e64f) popup_fep_hwr_window

0x110e,	// (0x00015143) popup_fep_vkb_window_ParamLimits

0x110e,	// (0x00015143) popup_fep_vkb_window

0x462f,	// (0x00018664) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00023b70) fep_vkb_side_pane_g_ParamLimits

0xec39,	// (0x00022c6e) fep_hwr_candidate_pane_ParamLimits

0xec39,	// (0x00022c6e) fep_hwr_candidate_pane

0xec63,	// (0x00022c98) fep_hwr_side_pane_ParamLimits

0xec63,	// (0x00022c98) fep_hwr_side_pane

0xec85,	// (0x00022cba) fep_hwr_top_pane_ParamLimits

0xec85,	// (0x00022cba) fep_hwr_top_pane

0xec9d,	// (0x00022cd2) fep_hwr_write_pane_ParamLimits

0xec9d,	// (0x00022cd2) fep_hwr_write_pane

0xfb3b,	// (0x00023b70) fep_vkb_side_pane_g

0x4637,	// (0x0001866c) fep_hwr_top_pane_g1

0x4649,	// (0x0001867e) fep_hwr_top_pane_g2

0xecd7,	// (0x00022d0c) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x00023b4c) fep_hwr_top_pane_g

0xecec,	// (0x00022d21) fep_hwr_top_text_pane

0xe133,	// (0x00022168) fep_hwr_top_text_pane_g1

0x467f,	// (0x000186b4) fep_hwr_top_text_pane_t1

0xed7b,	// (0x00022db0) fep_hwr_candidate_pane_g1

0x48ca,	// (0x000188ff) fep_vkb_keypad_pane_g3_ParamLimits

0x48ca,	// (0x000188ff) fep_vkb_keypad_pane_g3

0x48f6,	// (0x0001892b) fep_vkb_keypad_pane_g4_ParamLimits

0x48f6,	// (0x0001892b) fep_vkb_keypad_pane_g4

0x496d,	// (0x000189a2) fep_vkb_bottom_pane_g2_ParamLimits

0x496d,	// (0x000189a2) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00023b77) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00023b77) fep_vkb_bottom_pane_g

0x45d6,	// (0x0001860b) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00023b81) cell_vkb_side_pane_g

0x49f8,	// (0x00018a2d) cell_vkb_side_pane_t1

0x4a06,	// (0x00018a3b) cell_vkb_side_pane_t1_copy1

0x45d6,	// (0x0001860b) bg_fep_vkb_candidate_pane_g2

0x4b4a,	// (0x00018b7f) cell_vkb_candidate_pane_ParamLimits

0x468d,	// (0x000186c2) aid_size_cell_vkb_ParamLimits

0x468d,	// (0x000186c2) aid_size_cell_vkb

0x4b4a,	// (0x00018b7f) cell_vkb_candidate_pane

0xeda2,	// (0x00022dd7) bg_popup_fep_shadow_pane_g1

0xba5c,	// (0x0001fa91) fep_vkb_bottom_pane_ParamLimits

0xba5c,	// (0x0001fa91) fep_vkb_bottom_pane

0x475c,	// (0x00018791) fep_vkb_candidate_pane_ParamLimits

0x475c,	// (0x00018791) fep_vkb_candidate_pane

0xba88,	// (0x0001fabd) fep_vkb_keypad_pane_ParamLimits

0xba88,	// (0x0001fabd) fep_vkb_keypad_pane

0xbaaf,	// (0x0001fae4) fep_vkb_side_pane_ParamLimits

0xbaaf,	// (0x0001fae4) fep_vkb_side_pane

0xbaeb,	// (0x0001fb20) fep_vkb_top_pane_ParamLimits

0xbaeb,	// (0x0001fb20) fep_vkb_top_pane

0x4823,	// (0x00018858) fep_vkb_top_pane_g1_ParamLimits

0x4823,	// (0x00018858) fep_vkb_top_pane_g1

0x4832,	// (0x00018867) fep_vkb_top_pane_g2_ParamLimits

0x4832,	// (0x00018867) fep_vkb_top_pane_g2

0x4841,	// (0x00018876) fep_vkb_top_pane_g3_ParamLimits

0x4841,	// (0x00018876) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00023b67) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00023b67) fep_vkb_top_pane_g

0x485f,	// (0x00018894) fep_vkb_top_text_pane_ParamLimits

0x485f,	// (0x00018894) fep_vkb_top_text_pane

0xbb27,	// (0x0001fb5c) fep_vkb_side_pane_g1_ParamLimits

0xbb27,	// (0x0001fb5c) fep_vkb_side_pane_g1

0x48b9,	// (0x000188ee) grid_vkb_side_pane_ParamLimits

0x48b9,	// (0x000188ee) grid_vkb_side_pane

0xedaa,	// (0x00022ddf) bg_popup_fep_shadow_pane_g2

0xedb3,	// (0x00022de8) bg_popup_fep_shadow_pane_g3

0xedbb,	// (0x00022df0) bg_popup_fep_shadow_pane_g4

0xedc4,	// (0x00022df9) bg_popup_fep_shadow_pane_g5

0xedce,	// (0x00022e03) bg_popup_fep_shadow_pane_g6

0xedd6,	// (0x00022e0b) bg_popup_fep_shadow_pane_g7

0xdc95,	// (0x00021cca) bg_popup_fep_shadow_pane_g8

0x4918,	// (0x0001894d) grid_vkb_keypad_number_pane_ParamLimits

0x4918,	// (0x0001894d) grid_vkb_keypad_number_pane

0x492c,	// (0x00018961) grid_vkb_keypad_pane_ParamLimits

0x492c,	// (0x00018961) grid_vkb_keypad_pane

0x4952,	// (0x00018987) fep_vkb_bottom_pane_g1_ParamLimits

0x4952,	// (0x00018987) fep_vkb_bottom_pane_g1

0x497b,	// (0x000189b0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x497b,	// (0x000189b0) grid_vkb_keypad_bottom_left_pane

0x4990,	// (0x000189c5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4990,	// (0x000189c5) grid_vkb_keypad_bottom_right_pane

0x49a5,	// (0x000189da) fep_vkb_top_text_pane_g1

0xbb6e,	// (0x0001fba3) fep_vkb_top_text_pane_t1

0xbb80,	// (0x0001fbb5) cell_vkb_side_pane_ParamLimits

0xbb80,	// (0x0001fbb5) cell_vkb_side_pane

0x45d6,	// (0x0001860b) cell_vkb_side_pane_g1

0x4a14,	// (0x00018a49) cell_vkb_keypad_pane_ParamLimits

0x4a14,	// (0x00018a49) cell_vkb_keypad_pane

0x4aa1,	// (0x00018ad6) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00023b94) bg_popup_fep_shadow_pane_g

0xede8,	// (0x00022e1d) cell_hwr_side_pane_g1

0xede8,	// (0x00022e1d) cell_hwr_side_pane_g2

0x4aab,	// (0x00018ae0) cell_vkb_keypad_pane_t1

0xbb96,	// (0x0001fbcb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbb96,	// (0x0001fbcb) cell_vkb_keypad_bottom_left_pane

0xbbab,	// (0x0001fbe0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbbab,	// (0x0001fbe0) cell_vkb_keypad_bottom_right_pane

0x45d6,	// (0x0001860b) cell_vkb_keypad_bottom_left_pane_g1

0x45d6,	// (0x0001860b) cell_vkb_keypad_bottom_right_pane_g1

0x4b0f,	// (0x00018b44) cell_vkb_keypad_number_pane_ParamLimits

0x4b0f,	// (0x00018b44) cell_vkb_keypad_number_pane

0x4b2e,	// (0x00018b63) cell_vkb_keypad_number_pane_g1

0x4b38,	// (0x00018b6d) cell_vkb_keypad_number_pane_g2

0x4b41,	// (0x00018b76) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00023b86) cell_vkb_keypad_number_pane_g

0x4aab,	// (0x00018ae0) cell_vkb_keypad_number_pane_t1

0x4b6b,	// (0x00018ba0) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00023ba7) cell_hwr_side_pane_g

0x4b84,	// (0x00018bb9) cell_hwr_side_pane_t1

0xedf2,	// (0x00022e27) cell_hwr_side_pane_t1_copy1

0xee00,	// (0x00022e35) cell_hwr_candidate_pane_g1

0xee2f,	// (0x00022e64) cell_hwr_candidate_pane_t1

0x45d6,	// (0x0001860b) cell_vkb_candidate_pane_g2

0x4bc8,	// (0x00018bfd) cell_vkb_candidate_pane_t1

0xec00,	// (0x00022c35) bg_popup_fep_shadow_pane_ParamLimits

0xec00,	// (0x00022c35) bg_popup_fep_shadow_pane

0xecb7,	// (0x00022cec) bg_fep_hwr_top_pane_g4

0x465b,	// (0x00018690) bg_hwr_side_pane_g1_ParamLimits

0x465b,	// (0x00018690) bg_hwr_side_pane_g1

0x91f6,	// (0x0001d22b) cell_hwr_side_pane_ParamLimits

0x91f6,	// (0x0001d22b) cell_hwr_side_pane

0xed01,	// (0x00022d36) fep_hwr_write_pane_g1_ParamLimits

0xed01,	// (0x00022d36) fep_hwr_write_pane_g1

0xed0e,	// (0x00022d43) fep_hwr_write_pane_g2_ParamLimits

0xed0e,	// (0x00022d43) fep_hwr_write_pane_g2

0xed1b,	// (0x00022d50) fep_hwr_write_pane_g3_ParamLimits

0xed1b,	// (0x00022d50) fep_hwr_write_pane_g3

0x9216,	// (0x0001d24b) fep_hwr_write_pane_g4_ParamLimits

0x9216,	// (0x0001d24b) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00023b53) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00023b53) fep_hwr_write_pane_g

0xecb7,	// (0x00022cec) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xecb7,	// (0x00022cec) bg_fep_hwr_candidate_pane_g2

0xed29,	// (0x00022d5e) cell_hwr_candidate_pane_ParamLimits

0xed29,	// (0x00022d5e) cell_hwr_candidate_pane

0xed7b,	// (0x00022db0) fep_hwr_candidate_pane_g1_ParamLimits

0x46bb,	// (0x000186f0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x46bb,	// (0x000186f0) bg_popup_fep_shadow_pane_cp2

0x4851,	// (0x00018886) fep_vkb_top_pane_g4_ParamLimits

0x4851,	// (0x00018886) fep_vkb_top_pane_g4

0x4897,	// (0x000188cc) fep_vkb_side_pane_g2_ParamLimits

0x4897,	// (0x000188cc) fep_vkb_side_pane_g2

0x9e38,	// (0x0001de6d) list_setting_pane_t4_ParamLimits

0x9e38,	// (0x0001de6d) list_setting_pane_t4

0x9eb4,	// (0x0001dee9) list_setting_number_pane_t5_ParamLimits

0x9eb4,	// (0x0001dee9) list_setting_number_pane_t5

0xa21a,	// (0x0001e24f) list_double_heading_pane_cp2_ParamLimits

0xa21a,	// (0x0001e24f) list_double_heading_pane_cp2

0x4bd6,	// (0x00018c0b) list_double_heading_pane_g1_cp2_ParamLimits

0x4bd6,	// (0x00018c0b) list_double_heading_pane_g1_cp2

0x4be2,	// (0x00018c17) list_double_heading_pane_g2_cp2_ParamLimits

0x4be2,	// (0x00018c17) list_double_heading_pane_g2_cp2

0x4bf6,	// (0x00018c2b) list_double_heading_pane_t1_cp2_ParamLimits

0x4bf6,	// (0x00018c2b) list_double_heading_pane_t1_cp2

0x4c0c,	// (0x00018c41) list_double_heading_pane_t2_cp2_ParamLimits

0x4c0c,	// (0x00018c41) list_double_heading_pane_t2_cp2

0xb9b9,	// (0x0001f9ee) aid_value_unit2

0xe2cb,	// (0x00022300) popup_preview_fixed_window

0xd64c,	// (0x00021681) bg_popup_preview_window_pane_cp02

0x4c1e,	// (0x00018c53) list_preview_fixed_pane

0x4c64,	// (0x00018c99) list_empty_pane_fp_ParamLimits

0x4c64,	// (0x00018c99) list_empty_pane_fp

0x4c64,	// (0x00018c99) list_single_cale_day_pane_fp_ParamLimits

0x4c64,	// (0x00018c99) list_single_cale_day_pane_fp

0x4c64,	// (0x00018c99) list_single_graphic_heading_pane_fp_ParamLimits

0x4c64,	// (0x00018c99) list_single_graphic_heading_pane_fp

0x4c64,	// (0x00018c99) list_single_graphic_pane_fp_ParamLimits

0x4c64,	// (0x00018c99) list_single_graphic_pane_fp

0x4c64,	// (0x00018c99) list_single_heading_pane_fp_ParamLimits

0x4c64,	// (0x00018c99) list_single_heading_pane_fp

0x4c64,	// (0x00018c99) list_single_pane_fp_ParamLimits

0x4c64,	// (0x00018c99) list_single_pane_fp

0x4c7d,	// (0x00018cb2) list_single_pane_fp_g1_ParamLimits

0x4c7d,	// (0x00018cb2) list_single_pane_fp_g1

0x4bd6,	// (0x00018c0b) list_single_pane_fp_g2_ParamLimits

0x4bd6,	// (0x00018c0b) list_single_pane_fp_g2

0x4be2,	// (0x00018c17) list_single_pane_fp_g3_ParamLimits

0x4be2,	// (0x00018c17) list_single_pane_fp_g3

0x4c89,	// (0x00018cbe) list_single_pane_fp_g4_ParamLimits

0x4c89,	// (0x00018cbe) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00023bba) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00023bba) list_single_pane_fp_g

0x4c95,	// (0x00018cca) list_single_pane_fp_t1_ParamLimits

0x4c95,	// (0x00018cca) list_single_pane_fp_t1

0x4cac,	// (0x00018ce1) list_single_graphic_pane_fp_g1_ParamLimits

0x4cac,	// (0x00018ce1) list_single_graphic_pane_fp_g1

0x4c7d,	// (0x00018cb2) list_single_graphic_pane_fp_g2_ParamLimits

0x4c7d,	// (0x00018cb2) list_single_graphic_pane_fp_g2

0x4bd6,	// (0x00018c0b) list_single_graphic_pane_fp_g3_ParamLimits

0x4bd6,	// (0x00018c0b) list_single_graphic_pane_fp_g3

0x4be2,	// (0x00018c17) list_single_graphic_pane_fp_g4_ParamLimits

0x4be2,	// (0x00018c17) list_single_graphic_pane_fp_g4

0x4c89,	// (0x00018cbe) list_single_graphic_pane_fp_g5_ParamLimits

0x4c89,	// (0x00018cbe) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023bc3) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023bc3) list_single_graphic_pane_fp_g

0x4cb8,	// (0x00018ced) list_single_graphic_pane_fp_t1_ParamLimits

0x4cb8,	// (0x00018ced) list_single_graphic_pane_fp_t1

0x4cac,	// (0x00018ce1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4cac,	// (0x00018ce1) list_single_graphic_heading_pane_fp_g1

0x4c7d,	// (0x00018cb2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4c7d,	// (0x00018cb2) list_single_graphic_heading_pane_fp_g2

0x4bd6,	// (0x00018c0b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4bd6,	// (0x00018c0b) list_single_graphic_heading_pane_fp_g3

0x4be2,	// (0x00018c17) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4be2,	// (0x00018c17) list_single_graphic_heading_pane_fp_g4

0x4c89,	// (0x00018cbe) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4c89,	// (0x00018cbe) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023bc3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023bc3) list_single_graphic_heading_pane_fp_g

0x4cce,	// (0x00018d03) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4cce,	// (0x00018d03) list_single_graphic_heading_pane_fp_t1

0x4ce4,	// (0x00018d19) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4ce4,	// (0x00018d19) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00023bce) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00023bce) list_single_graphic_heading_pane_fp_t

0x4cf6,	// (0x00018d2b) list_single_cale_day_pane_fp_g1_ParamLimits

0x4cf6,	// (0x00018d2b) list_single_cale_day_pane_fp_g1

0x4d2e,	// (0x00018d63) list_single_cale_day_pane_fp_g2_ParamLimits

0x4d2e,	// (0x00018d63) list_single_cale_day_pane_fp_g2

0x4d3a,	// (0x00018d6f) list_single_cale_day_pane_fp_g3_ParamLimits

0x4d3a,	// (0x00018d6f) list_single_cale_day_pane_fp_g3

0x4d62,	// (0x00018d97) list_single_cale_day_pane_fp_g4_ParamLimits

0x4d62,	// (0x00018d97) list_single_cale_day_pane_fp_g4

0x4d86,	// (0x00018dbb) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d86,	// (0x00018dbb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00023bd3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00023bd3) list_single_cale_day_pane_fp_g

0x4daa,	// (0x00018ddf) list_single_cale_day_pane_fp_t1_ParamLimits

0x4daa,	// (0x00018ddf) list_single_cale_day_pane_fp_t1

0x4dd0,	// (0x00018e05) list_single_cale_day_pane_fp_t2_ParamLimits

0x4dd0,	// (0x00018e05) list_single_cale_day_pane_fp_t2

0x4de9,	// (0x00018e1e) list_single_cale_day_pane_fp_t3_ParamLimits

0x4de9,	// (0x00018e1e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00023bde) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00023bde) list_single_cale_day_pane_fp_t

0x4c7d,	// (0x00018cb2) list_empty_pane_fp_g1_ParamLimits

0x4c7d,	// (0x00018cb2) list_empty_pane_fp_g1

0x4e02,	// (0x00018e37) list_empty_pane_fp_t1

0x4e10,	// (0x00018e45) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00023be5) list_empty_pane_fp_t

0x4c7d,	// (0x00018cb2) list_single_heading_pane_fp_g1_ParamLimits

0x4c7d,	// (0x00018cb2) list_single_heading_pane_fp_g1

0x4bd6,	// (0x00018c0b) list_single_heading_pane_fp_g2_ParamLimits

0x4bd6,	// (0x00018c0b) list_single_heading_pane_fp_g2

0x4be2,	// (0x00018c17) list_single_heading_pane_fp_g3_ParamLimits

0x4be2,	// (0x00018c17) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00023bea) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00023bea) list_single_heading_pane_fp_g

0x4e1e,	// (0x00018e53) list_single_heading_pane_fp_t1_ParamLimits

0x4e1e,	// (0x00018e53) list_single_heading_pane_fp_t1

0x4e30,	// (0x00018e65) list_single_heading_pane_fp_t2_ParamLimits

0x4e30,	// (0x00018e65) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00023bf1) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00023bf1) list_single_heading_pane_fp_t

0xddb7,	// (0x00021dec) aid_size_cell_fast

0xd62f,	// (0x00021664) soft_indicator_pane_cp1_t1

0xddf4,	// (0x00021e29) cell_app_pane_cp2_ParamLimits

0xddf4,	// (0x00021e29) cell_app_pane_cp2

0xec22,	// (0x00022c57) fep_hwr_candidate_drop_down_list_pane

0xed95,	// (0x00022dca) fep_hwr_candidate_pane_g3_ParamLimits

0xed95,	// (0x00022dca) fep_hwr_candidate_pane_g3

0xba3d,	// (0x0001fa72) fep_hwr_candidate_pane_g4_ParamLimits

0xba3d,	// (0x0001fa72) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00023b60) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00023b60) fep_hwr_candidate_pane_g

0x474b,	// (0x00018780) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x474b,	// (0x00018780) fep_vkb_candidate_drop_down_list_pane

0x4b73,	// (0x00018ba8) fep_vkb_candidate_pane_g3

0x4b7b,	// (0x00018bb0) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00023b8d) fep_vkb_candidate_pane_g

0xee00,	// (0x00022e35) cell_hwr_candidate_pane_g1_ParamLimits

0xee0e,	// (0x00022e43) cell_hwr_candidate_pane_g3_ParamLimits

0xee0e,	// (0x00022e43) cell_hwr_candidate_pane_g3

0x4f6c,	// (0x00018fa1) cell_hwr_candidate_pane_g4_ParamLimits

0x4f6c,	// (0x00018fa1) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00023bac) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00023bac) cell_hwr_candidate_pane_g

0x4b92,	// (0x00018bc7) cell_vkb_candidate_pane_g3_ParamLimits

0x4b92,	// (0x00018bc7) cell_vkb_candidate_pane_g3

0x4bad,	// (0x00018be2) cell_vkb_candidate_pane_g4_ParamLimits

0x4bad,	// (0x00018be2) cell_vkb_candidate_pane_g4

0x4e46,	// (0x00018e7b) cell_app_pane_cp2_g1_ParamLimits

0x4e46,	// (0x00018e7b) cell_app_pane_cp2_g1

0x4e64,	// (0x00018e99) cell_app_pane_cp2_g2_ParamLimits

0x4e64,	// (0x00018e99) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00023bf6) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00023bf6) cell_app_pane_cp2_g

0x4e70,	// (0x00018ea5) cell_app_pane_cp2_t1_ParamLimits

0x4e70,	// (0x00018ea5) cell_app_pane_cp2_t1

0xdbb4,	// (0x00021be9) grid_highlight_pane_cp1_ParamLimits

0xdbb4,	// (0x00021be9) grid_highlight_pane_cp1

0xee4d,	// (0x00022e82) cell_hwr_candidate_pane_cp1_ParamLimits

0xee4d,	// (0x00022e82) cell_hwr_candidate_pane_cp1

0xee00,	// (0x00022e35) fep_hwr_candidate_drop_down_list_pane_g1

0xee71,	// (0x00022ea6) fep_hwr_candidate_drop_down_list_pane_g2

0xee7e,	// (0x00022eb3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00023bfb) fep_hwr_candidate_drop_down_list_pane_g

0xee8b,	// (0x00022ec0) fep_hwr_candidate_drop_down_list_scroll_pane

0xee94,	// (0x00022ec9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xee94,	// (0x00022ec9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xeea1,	// (0x00022ed6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeea1,	// (0x00022ed6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xeeae,	// (0x00022ee3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeeae,	// (0x00022ee3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeebb,	// (0x00022ef0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeebb,	// (0x00022ef0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xeed6,	// (0x00022f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xeed6,	// (0x00022f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xeef1,	// (0x00022f26) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xeef1,	// (0x00022f26) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xef0c,	// (0x00022f41) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xef0c,	// (0x00022f41) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xef27,	// (0x00022f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xef27,	// (0x00022f5c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00023c02) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00023c02) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e82,	// (0x00018eb7) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e82,	// (0x00018eb7) cell_vkb_candidate_pane_cp1

0x4851,	// (0x00018886) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4851,	// (0x00018886) fep_vkb_candidate_drop_down_list_pane_g1

0x4ea8,	// (0x00018edd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4ea8,	// (0x00018edd) fep_vkb_candidate_drop_down_list_pane_g2

0x4eb5,	// (0x00018eea) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4eb5,	// (0x00018eea) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00023c13) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x00023c13) fep_vkb_candidate_drop_down_list_pane_g

0x4ec2,	// (0x00018ef7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4ec2,	// (0x00018ef7) fep_vkb_candidate_drop_down_list_scroll_pane

0x4ecf,	// (0x00018f04) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4ecf,	// (0x00018f04) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4edc,	// (0x00018f11) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4edc,	// (0x00018f11) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4f8d,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4f8d,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4ee8,	// (0x00018f1d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4ee8,	// (0x00018f1d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4f09,	// (0x00018f3e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4f09,	// (0x00018f3e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4f99,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4f99,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4fba,	// (0x00018fef) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4fba,	// (0x00018fef) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4fdb,	// (0x00019010) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4fdb,	// (0x00019010) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00023c1a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00023c1a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x973e,	// (0x0001d773) title_pane_g1_ParamLimits

0x9751,	// (0x0001d786) title_pane_g2_ParamLimits

0xf554,	// (0x00023589) title_pane_g_ParamLimits

0xe123,	// (0x00022158) aid_call2_pane

0xe12b,	// (0x00022160) aid_call_pane

0xe133,	// (0x00022168) popup_clock_analogue_window_g1

0xe133,	// (0x00022168) popup_clock_analogue_window_g2

0xe596,	// (0x000225cb) popup_clock_analogue_window_g3

0xe59f,	// (0x000225d4) popup_clock_analogue_window_g4

0xb9cb,	// (0x0001fa00) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0002372e) popup_clock_analogue_window_g

0xe5a7,	// (0x000225dc) popup_clock_analogue_window_t1

0xe5b5,	// (0x000225ea) clock_digital_number_pane_ParamLimits

0xe5b5,	// (0x000225ea) clock_digital_number_pane

0xe5c1,	// (0x000225f6) clock_digital_number_pane_cp02_ParamLimits

0xe5c1,	// (0x000225f6) clock_digital_number_pane_cp02

0xe5cd,	// (0x00022602) clock_digital_number_pane_cp03_ParamLimits

0xe5cd,	// (0x00022602) clock_digital_number_pane_cp03

0xe5d9,	// (0x0002260e) clock_digital_number_pane_cp04_ParamLimits

0xe5d9,	// (0x0002260e) clock_digital_number_pane_cp04

0xe5e5,	// (0x0002261a) clock_digital_separator_pane_ParamLimits

0xe5e5,	// (0x0002261a) clock_digital_separator_pane

0xe5f1,	// (0x00022626) popup_clock_digital_window_t1_ParamLimits

0xe5f1,	// (0x00022626) popup_clock_digital_window_t1

0xb9cb,	// (0x0001fa00) clock_digital_number_pane_g1

0xb9cb,	// (0x0001fa00) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x00023739) clock_digital_number_pane_g

0xb9cb,	// (0x0001fa00) clock_digital_separator_pane_g1

0xb9cb,	// (0x0001fa00) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x00023739) clock_digital_separator_pane_g

0xac85,	// (0x0001ecba) aid_fill_nsta_ParamLimits

0xadbd,	// (0x0001edf2) indicator_nsta_pane_ParamLimits

0x18ba,	// (0x000158ef) popup_clock_analogue_window

0x18ba,	// (0x000158ef) popup_clock_digital_window

0xe196,	// (0x000221cb) grid_indicator_nsta_pane_ParamLimits

0x3fad,	// (0x00017fe2) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00023ae0) clock_nsta_pane_t

0xe563,	// (0x00022598) aid_size_max_handle

0x8e9b,	// (0x0001ced0) aid_size_min_handle

0x0c18,	// (0x00014c4d) editor_scroll_pane

0x4ff6,	// (0x0001902b) ex_editor_pane

0xdd7d,	// (0x00021db2) scroll_pane_cp13

0xdacd,	// (0x00021b02) scroll_pane_cp14

0xe162,	// (0x00022197) scroll_pane_cp36

0xa22d,	// (0x0001e262) list_single_graphic_hl_pane_cp2_ParamLimits

0xa22d,	// (0x0001e262) list_single_graphic_hl_pane_cp2

0xb60c,	// (0x0001f641) list_single_graphic_hl_pane_ParamLimits

0xb60c,	// (0x0001f641) list_single_graphic_hl_pane

0x4ffe,	// (0x00019033) aid_size_min_hl_cp1

0x5007,	// (0x0001903c) list_highlight_pane_cp34_ParamLimits

0x5007,	// (0x0001903c) list_highlight_pane_cp34

0x5018,	// (0x0001904d) list_single_graphic_hl_pane_g1_ParamLimits

0x5018,	// (0x0001904d) list_single_graphic_hl_pane_g1

0xe1a4,	// (0x000221d9) list_single_graphic_hl_pane_g2_ParamLimits

0xe1a4,	// (0x000221d9) list_single_graphic_hl_pane_g2

0xe1a4,	// (0x000221d9) list_single_graphic_hl_pane_g3_ParamLimits

0xe1a4,	// (0x000221d9) list_single_graphic_hl_pane_g3

0xe1b0,	// (0x000221e5) list_single_graphic_hl_pane_g4_ParamLimits

0xe1b0,	// (0x000221e5) list_single_graphic_hl_pane_g4

0x508b,	// (0x000190c0) list_single_graphic_hl_pane_g5_ParamLimits

0x508b,	// (0x000190c0) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00023c2b) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00023c2b) list_single_graphic_hl_pane_g

0xbbc6,	// (0x0001fbfb) list_single_graphic_hl_pane_t1_ParamLimits

0xbbc6,	// (0x0001fbfb) list_single_graphic_hl_pane_t1

0x505b,	// (0x00019090) aid_size_min_hl_cp2

0x5064,	// (0x00019099) list_highlight_pane_cp34_cp2_ParamLimits

0x5064,	// (0x00019099) list_highlight_pane_cp34_cp2

0x5018,	// (0x0001904d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5018,	// (0x0001904d) list_single_graphic_hl_pane_g1_cp2

0x5071,	// (0x000190a6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5071,	// (0x000190a6) list_single_graphic_hl_pane_g2_cp2

0xbbdc,	// (0x0001fc11) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbbdc,	// (0x0001fc11) list_single_graphic_hl_pane_g3_cp2

0xe1b0,	// (0x000221e5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe1b0,	// (0x000221e5) list_single_graphic_hl_pane_g4_cp2

0x508b,	// (0x000190c0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x508b,	// (0x000190c0) list_single_graphic_hl_pane_g5_cp2

0x8ef2,	// (0x0001cf27) control_pane_g4_ParamLimits

0x8ef2,	// (0x0001cf27) control_pane_g4

0x0f9a,	// (0x00014fcf) bg_popup_sub_pane_cp10_ParamLimits

0x45e0,	// (0x00018615) list_choice_list_pane_ParamLimits

0x45ef,	// (0x00018624) scroll_pane_cp23

0xd64c,	// (0x00021681) bg_popup_preview_window_pane_cp02_ParamLimits

0x4c1e,	// (0x00018c53) list_preview_fixed_pane_ParamLimits

0x4c34,	// (0x00018c69) list_preview_fixed_pane_cp_ParamLimits

0x4c34,	// (0x00018c69) list_preview_fixed_pane_cp

0x4c40,	// (0x00018c75) popup_preview_fixed_window_g1_ParamLimits

0x4c40,	// (0x00018c75) popup_preview_fixed_window_g1

0x4c4c,	// (0x00018c81) popup_preview_fixed_window_g2_ParamLimits

0x4c4c,	// (0x00018c81) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00023bb3) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00023bb3) popup_preview_fixed_window_g

0xe4d5,	// (0x0002250a) aid_navi_side_left_pane_ParamLimits

0xe4ea,	// (0x0002251f) aid_navi_side_right_pane_ParamLimits

0xe502,	// (0x00022537) navi_icon_pane_stacon_ParamLimits

0xe516,	// (0x0002254b) navi_navi_pane_stacon_ParamLimits

0xe502,	// (0x00022537) navi_text_pane_stacon_ParamLimits

0xb9c1,	// (0x0001f9f6) main_text_info_pane

0x50b5,	// (0x000190ea) listscroll_text_info_pane

0x50bd,	// (0x000190f2) list_text_info_pane_ParamLimits

0x50bd,	// (0x000190f2) list_text_info_pane

0x50cc,	// (0x00019101) scroll_pane_cp24_ParamLimits

0x50cc,	// (0x00019101) scroll_pane_cp24

0xbbea,	// (0x0001fc1f) list_text_info_pane_t1_ParamLimits

0xbbea,	// (0x0001fc1f) list_text_info_pane_t1

0xa57e,	// (0x0001e5b3) popup_fast_swap2_window_ParamLimits

0xa57e,	// (0x0001e5b3) popup_fast_swap2_window

0x510f,	// (0x00019144) aid_size_cell_fast2

0xb9c1,	// (0x0001f9f6) bg_popup_window_pane_cp17

0x2026,	// (0x0001605b) heading_pane_cp2

0xd852,	// (0x00021887) listscroll_fast2_pane

0x5119,	// (0x0001914e) grid_fast2_pane

0x5123,	// (0x00019158) listscroll_fast2_pane_g1

0x512d,	// (0x00019162) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00023c36) listscroll_fast2_pane_g

0xdd7d,	// (0x00021db2) scroll_pane_cp26

0x5137,	// (0x0001916c) cell_fast2_pane_ParamLimits

0x5137,	// (0x0001916c) cell_fast2_pane

0x514e,	// (0x00019183) cell_fast2_pane_g1

0x5157,	// (0x0001918c) cell_fast2_pane_g2

0x5160,	// (0x00019195) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00023c3b) cell_fast2_pane_g

0xd894,	// (0x000218c9) grid_highlight_pane_cp9

0xd8a9,	// (0x000218de) main_eswt_pane_ParamLimits

0xd8a9,	// (0x000218de) main_eswt_pane

0x50e1,	// (0x00019116) list_single_text_info_pane

0x5168,	// (0x0001919d) eswt_ctrl_button_pane

0x5168,	// (0x0001919d) eswt_ctrl_canvas_pane

0x5170,	// (0x000191a5) eswt_ctrl_combo_pane

0x5168,	// (0x0001919d) eswt_ctrl_default_pane

0x5168,	// (0x0001919d) eswt_ctrl_label_pane

0x5178,	// (0x000191ad) eswt_ctrl_wait_pane

0x5180,	// (0x000191b5) eswt_shell_pane

0xb9c1,	// (0x0001f9f6) listscroll_eswt_app_pane

0x51a0,	// (0x000191d5) popup_eswt_tasktip_window_ParamLimits

0x51a0,	// (0x000191d5) popup_eswt_tasktip_window

0x1c37,	// (0x00015c6c) bg_popup_window_pane_cp18

0x51b1,	// (0x000191e6) eswt_control_pane_g1_ParamLimits

0x51b1,	// (0x000191e6) eswt_control_pane_g1

0x51be,	// (0x000191f3) eswt_control_pane_g2_ParamLimits

0x51be,	// (0x000191f3) eswt_control_pane_g2

0x51cb,	// (0x00019200) eswt_control_pane_g3_ParamLimits

0x51cb,	// (0x00019200) eswt_control_pane_g3

0x51d8,	// (0x0001920d) eswt_control_pane_g4_ParamLimits

0x51d8,	// (0x0001920d) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00023c42) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00023c42) eswt_control_pane_g

0xdbb4,	// (0x00021be9) bg_button_pane_ParamLimits

0xdbb4,	// (0x00021be9) bg_button_pane

0xd8a9,	// (0x000218de) common_borders_pane_copy2_ParamLimits

0xd8a9,	// (0x000218de) common_borders_pane_copy2

0x51e5,	// (0x0001921a) control_button_pane_g1_ParamLimits

0x51e5,	// (0x0001921a) control_button_pane_g1

0x51f1,	// (0x00019226) control_button_pane_g2_ParamLimits

0x51f1,	// (0x00019226) control_button_pane_g2

0x51fd,	// (0x00019232) control_button_pane_g3_ParamLimits

0x51fd,	// (0x00019232) control_button_pane_g3

0x0002,

0xfc16,	// (0x00023c4b) control_button_pane_g_ParamLimits

0xfc16,	// (0x00023c4b) control_button_pane_g

0x5211,	// (0x00019246) control_button_pane_t1

0x521f,	// (0x00019254) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00023c52) control_button_pane_t

0x1b11,	// (0x00015b46) bg_button_pane_g1

0x1b21,	// (0x00015b56) bg_button_pane_g2

0x1b19,	// (0x00015b4e) bg_button_pane_g3

0x1b31,	// (0x00015b66) bg_button_pane_g4

0x1b29,	// (0x00015b5e) bg_button_pane_g5

0x1b39,	// (0x00015b6e) bg_button_pane_g6

0x1b41,	// (0x00015b76) bg_button_pane_g7

0x1b51,	// (0x00015b86) bg_button_pane_g8

0x1b49,	// (0x00015b7e) bg_button_pane_g9

0x0008,

0xf862,	// (0x00023897) bg_button_pane_g

0x459b,	// (0x000185d0) common_borders_pane_ParamLimits

0x459b,	// (0x000185d0) common_borders_pane

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy1_ParamLimits

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy1

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy1_ParamLimits

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy1

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy1_ParamLimits

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy1

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy1_ParamLimits

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy1

0x45d6,	// (0x0001860b) bg_eswt_ctrl_canvas_pane_g1

0x459b,	// (0x000185d0) common_borders_pane_cp2_ParamLimits

0x459b,	// (0x000185d0) common_borders_pane_cp2

0x459b,	// (0x000185d0) common_borders_pane_cp3_ParamLimits

0x459b,	// (0x000185d0) common_borders_pane_cp3

0x522d,	// (0x00019262) separator_horizontal_pane

0x5235,	// (0x0001926a) separator_vertical_pane

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy2_ParamLimits

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy2

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy2_ParamLimits

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy2

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy2_ParamLimits

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy2

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy2_ParamLimits

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy2

0xb9c1,	// (0x0001f9f6) common_borders_pane_cp4

0x523e,	// (0x00019273) separator_horizontal_pane_g1

0x5247,	// (0x0001927c) separator_horizontal_pane_g2

0x5250,	// (0x00019285) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00023c57) separator_horizontal_pane_g

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy3_ParamLimits

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy3

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy3_ParamLimits

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy3

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy3_ParamLimits

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy3

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy3_ParamLimits

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy3

0xb9c1,	// (0x0001f9f6) common_borders_pane_cp5

0x5259,	// (0x0001928e) separator_vertical_pane_g1

0x5262,	// (0x00019297) separator_vertical_pane_g2

0x526b,	// (0x000192a0) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x00023c5e) separator_vertical_pane_g

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy4_ParamLimits

0x51b1,	// (0x000191e6) eswt_control_pane_g1_copy4

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy4_ParamLimits

0x51be,	// (0x000191f3) eswt_control_pane_g2_copy4

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy4_ParamLimits

0x51cb,	// (0x00019200) eswt_control_pane_g3_copy4

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy4_ParamLimits

0x51d8,	// (0x0001920d) eswt_control_pane_g4_copy4

0xbc0c,	// (0x0001fc41) eswt_ctrl_combo_button_pane

0xbc14,	// (0x0001fc49) eswt_ctrl_input_pane

0xbc1c,	// (0x0001fc51) popup_choice_list_window_cp70

0xbc24,	// (0x0001fc59) eswt_ctrl_input_pane_t1

0xb9c1,	// (0x0001f9f6) input_focus_pane_cp70

0x459b,	// (0x000185d0) bg_button_pane_cp70_ParamLimits

0x459b,	// (0x000185d0) bg_button_pane_cp70

0xbc32,	// (0x0001fc67) eswt_ctrl_combo_button_pane_g1

0x52a2,	// (0x000192d7) wait_bar_pane_cp70

0x1c37,	// (0x00015c6c) bg_popup_window_pane_cp70_ParamLimits

0x1c37,	// (0x00015c6c) bg_popup_window_pane_cp70

0x52aa,	// (0x000192df) popup_eswt_tasktip_window_t1

0x52c0,	// (0x000192f5) wait_bar_pane_cp71_ParamLimits

0x52c0,	// (0x000192f5) wait_bar_pane_cp71

0x52cc,	// (0x00019301) grid_eswt_app_pane

0xdfc2,	// (0x00021ff7) scroll_pane_cp70

0xbc3a,	// (0x0001fc6f) cell_eswt_app_pane_ParamLimits

0xbc3a,	// (0x0001fc6f) cell_eswt_app_pane

0xbc6c,	// (0x0001fca1) cell_eswt_app_pane_g1_ParamLimits

0xbc6c,	// (0x0001fca1) cell_eswt_app_pane_g1

0xbc9b,	// (0x0001fcd0) cell_eswt_app_pane_g2_ParamLimits

0xbc9b,	// (0x0001fcd0) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00023c65) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00023c65) cell_eswt_app_pane_g

0xbcc4,	// (0x0001fcf9) cell_eswt_app_pane_t1_ParamLimits

0xbcc4,	// (0x0001fcf9) cell_eswt_app_pane_t1

0x5391,	// (0x000193c6) grid_highlight_pane_cp70_ParamLimits

0x5391,	// (0x000193c6) grid_highlight_pane_cp70

0x0ae9,	// (0x00014b1e) set_content_pane_g1

0x0ebc,	// (0x00014ef1) status_small_volume_pane

0xef42,	// (0x00022f77) status_small_volume_pane_g1

0xef4a,	// (0x00022f7f) volume_small2_pane

0xef53,	// (0x00022f88) volume_small2_pane_g1

0xef5c,	// (0x00022f91) volume_small2_pane_g2

0xef65,	// (0x00022f9a) volume_small2_pane_g3

0xef6e,	// (0x00022fa3) volume_small2_pane_g4

0xef77,	// (0x00022fac) volume_small2_pane_g5

0xef80,	// (0x00022fb5) volume_small2_pane_g6

0xef89,	// (0x00022fbe) volume_small2_pane_g7

0xef92,	// (0x00022fc7) volume_small2_pane_g8

0xef9b,	// (0x00022fd0) volume_small2_pane_g9

0xefa4,	// (0x00022fd9) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00023c6a) volume_small2_pane_g

0x49a5,	// (0x000189da) fep_vkb_top_text_pane_g1_ParamLimits

0xbb6e,	// (0x0001fba3) fep_vkb_top_text_pane_t1_ParamLimits

0x4c58,	// (0x00018c8d) popup_preview_fixed_window_g3_ParamLimits

0x4c58,	// (0x00018c8d) popup_preview_fixed_window_g3

0xac18,	// (0x0001ec4d) popup_toolbar_trans_pane

0xb42b,	// (0x0001f460) aid_height_set_list_ParamLimits

0x2ff7,	// (0x0001702c) aid_size_parent_ParamLimits

0x0f9a,	// (0x00014fcf) list_highlight_pane_cp2_ParamLimits

0x0ae9,	// (0x00014b1e) set_content_pane_g1_ParamLimits

0xb620,	// (0x0001f655) list_single_image_pane_ParamLimits

0xb620,	// (0x0001f655) list_single_image_pane

0xbcf6,	// (0x0001fd2b) aid_size_cell_image_ParamLimits

0xbcf6,	// (0x0001fd2b) aid_size_cell_image

0xbd03,	// (0x0001fd38) grid_single_image_pane_ParamLimits

0xbd03,	// (0x0001fd38) grid_single_image_pane

0xdbdf,	// (0x00021c14) list_single_image_pane_g1_ParamLimits

0xdbdf,	// (0x00021c14) list_single_image_pane_g1

0xdbeb,	// (0x00021c20) list_single_image_pane_g2_ParamLimits

0xdbeb,	// (0x00021c20) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00023c7f) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00023c7f) list_single_image_pane_g

0x53b8,	// (0x000193ed) list_single_image_pane_t1_ParamLimits

0x53b8,	// (0x000193ed) list_single_image_pane_t1

0xbd11,	// (0x0001fd46) cell_image_list_pane_ParamLimits

0xbd11,	// (0x0001fd46) cell_image_list_pane

0xbd25,	// (0x0001fd5a) cell_image_list_pane_g1

0xbd2e,	// (0x0001fd63) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00023c84) cell_image_list_pane_g

0x53f6,	// (0x0001942b) aid_size_cell_tb_trans_pane

0xdbb4,	// (0x00021be9) bg_tb_trans_pane

0x5408,	// (0x0001943d) grid_tb_trans_pane

0x1b11,	// (0x00015b46) bg_tb_trans_pane_g1

0x1b21,	// (0x00015b56) bg_tb_trans_pane_g2

0x1b19,	// (0x00015b4e) bg_tb_trans_pane_g3

0x1b31,	// (0x00015b66) bg_tb_trans_pane_g4

0x1b29,	// (0x00015b5e) bg_tb_trans_pane_g5

0x1b51,	// (0x00015b86) bg_tb_trans_pane_g6

0x1b49,	// (0x00015b7e) bg_tb_trans_pane_g7

0x1b39,	// (0x00015b6e) bg_tb_trans_pane_g8

0x1b41,	// (0x00015b76) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00023c89) bg_tb_trans_pane_g

0x541c,	// (0x00019451) cell_toolbar_trans_pane_ParamLimits

0x541c,	// (0x00019451) cell_toolbar_trans_pane

0x45d6,	// (0x0001860b) cell_toolbar_trans_pane_g1

0xb85a,	// (0x0001f88f) list_form2_midp_pane_t1

0xb868,	// (0x0001f89d) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00023b26) list_form2_midp_pane_t

0x41c0,	// (0x000181f5) scroll_pane_cp51_ParamLimits

0x43dd,	// (0x00018412) form2_midp_wait_pane_g1

0x43e6,	// (0x0001841b) form2_midp_wait_pane_g2

0x43ef,	// (0x00018424) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00023b3b) form2_midp_wait_pane_g

0xd4ff,	// (0x00021534) list_highlight_pane_cp21_ParamLimits

0x4433,	// (0x00018468) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4442,	// (0x00018477) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3218,	// (0x0001724d) list_single_2graphic_im_pane_ParamLimits

0x3218,	// (0x0001724d) list_single_2graphic_im_pane

0xbd37,	// (0x0001fd6c) list_single_2graphic_im_pane_g1_ParamLimits

0xbd37,	// (0x0001fd6c) list_single_2graphic_im_pane_g1

0xbd48,	// (0x0001fd7d) list_single_2graphic_im_pane_g2_ParamLimits

0xbd48,	// (0x0001fd7d) list_single_2graphic_im_pane_g2

0xbd54,	// (0x0001fd89) list_single_2graphic_im_pane_g3_ParamLimits

0xbd54,	// (0x0001fd89) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00023c9c) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00023c9c) list_single_2graphic_im_pane_g

0xbd68,	// (0x0001fd9d) list_single_2graphic_im_pane_t1_ParamLimits

0xbd68,	// (0x0001fd9d) list_single_2graphic_im_pane_t1

0x4c64,	// (0x00018c99) list_single_graphic_2heading_pane_fp_ParamLimits

0x4c64,	// (0x00018c99) list_single_graphic_2heading_pane_fp

0x4cac,	// (0x00018ce1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4cac,	// (0x00018ce1) list_single_graphic_2heading_pane_fp_g1

0x4c7d,	// (0x00018cb2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4c7d,	// (0x00018cb2) list_single_graphic_2heading_pane_fp_g2

0x4bd6,	// (0x00018c0b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4bd6,	// (0x00018c0b) list_single_graphic_2heading_pane_fp_g3

0x4be2,	// (0x00018c17) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4be2,	// (0x00018c17) list_single_graphic_2heading_pane_fp_g4

0x4c89,	// (0x00018cbe) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4c89,	// (0x00018cbe) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023bc3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023bc3) list_single_graphic_2heading_pane_fp_g

0x54b0,	// (0x000194e5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x54b0,	// (0x000194e5) list_single_graphic_2heading_pane_fp_t1

0x4ce4,	// (0x00018d19) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4ce4,	// (0x00018d19) list_single_graphic_2heading_pane_fp_t2

0x54c6,	// (0x000194fb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x54c6,	// (0x000194fb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00023ca5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00023ca5) list_single_graphic_2heading_pane_fp_t

0x4667,	// (0x0001869c) fep_hwr_write_pane_g5_ParamLimits

0x4667,	// (0x0001869c) fep_hwr_write_pane_g5

0x4673,	// (0x000186a8) fep_hwr_write_pane_g6_ParamLimits

0x4673,	// (0x000186a8) fep_hwr_write_pane_g6

0x5180,	// (0x000191b5) eswt_shell_pane_ParamLimits

0x1c37,	// (0x00015c6c) bg_popup_window_pane_cp18_ParamLimits

0x2f15,	// (0x00016f4a) heading_pane_cp70

0x52aa,	// (0x000192df) popup_eswt_tasktip_window_t1_ParamLimits

0xace2,	// (0x0001ed17) aid_touch_tab_arrow_left

0xacf8,	// (0x0001ed2d) aid_touch_tab_arrow_right

0xb9df,	// (0x0001fa14) title_pane_g3_ParamLimits

0xb9df,	// (0x0001fa14) title_pane_g3

0xdb0e,	// (0x00021b43) set_value_pane_g1

0xac18,	// (0x0001ec4d) popup_toolbar_trans_pane_ParamLimits

0x53f6,	// (0x0001942b) aid_size_cell_tb_trans_pane_ParamLimits

0xdbb4,	// (0x00021be9) bg_tb_trans_pane_ParamLimits

0x5408,	// (0x0001943d) grid_tb_trans_pane_ParamLimits

0xd64c,	// (0x00021681) cont_note_pane_ParamLimits

0xd64c,	// (0x00021681) cont_note_pane

0xd8a9,	// (0x000218de) cont_snote2_single_text_pane_ParamLimits

0xd8a9,	// (0x000218de) cont_snote2_single_text_pane

0xd8a9,	// (0x000218de) cont_snote2_single_graphic_pane_ParamLimits

0xd8a9,	// (0x000218de) cont_snote2_single_graphic_pane

0x2242,	// (0x00016277) cont_note_wait_pane_ParamLimits

0x2242,	// (0x00016277) cont_note_wait_pane

0x2242,	// (0x00016277) cont_note_image_pane_ParamLimits

0x2242,	// (0x00016277) cont_note_image_pane

0x54dc,	// (0x00019511) popup_note2_window_g1_ParamLimits

0x54dc,	// (0x00019511) popup_note2_window_g1

0x550d,	// (0x00019542) popup_note2_window_t1_ParamLimits

0x550d,	// (0x00019542) popup_note2_window_t1

0x5552,	// (0x00019587) popup_note2_window_t2_ParamLimits

0x5552,	// (0x00019587) popup_note2_window_t2

0x5597,	// (0x000195cc) popup_note2_window_t3_ParamLimits

0x5597,	// (0x000195cc) popup_note2_window_t3

0x55dc,	// (0x00019611) popup_note2_window_t4_ParamLimits

0x55dc,	// (0x00019611) popup_note2_window_t4

0xd6d0,	// (0x00021705) popup_note2_window_t5_ParamLimits

0xd6d0,	// (0x00021705) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00023cb1) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00023cb1) popup_note2_window_t

0x560b,	// (0x00019640) popup_note2_image_window_g1_ParamLimits

0x560b,	// (0x00019640) popup_note2_image_window_g1

0x5617,	// (0x0001964c) popup_note2_image_window_g2_ParamLimits

0x5617,	// (0x0001964c) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00023cbc) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00023cbc) popup_note2_image_window_g

0x5629,	// (0x0001965e) popup_note2_image_window_t1_ParamLimits

0x5629,	// (0x0001965e) popup_note2_image_window_t1

0x5641,	// (0x00019676) popup_note2_image_window_t2_ParamLimits

0x5641,	// (0x00019676) popup_note2_image_window_t2

0x5659,	// (0x0001968e) popup_note2_image_window_t3_ParamLimits

0x5659,	// (0x0001968e) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00023cc1) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00023cc1) popup_note2_image_window_t

0x2250,	// (0x00016285) popup_note2_wait_window_g1_ParamLimits

0x2250,	// (0x00016285) popup_note2_wait_window_g1

0x5675,	// (0x000196aa) popup_note2_wait_window_g2_ParamLimits

0x5675,	// (0x000196aa) popup_note2_wait_window_g2

0x2268,	// (0x0001629d) popup_note2_wait_window_g3_ParamLimits

0x2268,	// (0x0001629d) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00023cc8) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00023cc8) popup_note2_wait_window_g

0x5681,	// (0x000196b6) popup_note2_wait_window_t1_ParamLimits

0x5681,	// (0x000196b6) popup_note2_wait_window_t1

0x569f,	// (0x000196d4) popup_note2_wait_window_t2_ParamLimits

0x569f,	// (0x000196d4) popup_note2_wait_window_t2

0x56bd,	// (0x000196f2) popup_note2_wait_window_t3_ParamLimits

0x56bd,	// (0x000196f2) popup_note2_wait_window_t3

0x56cf,	// (0x00019704) popup_note2_wait_window_t4_ParamLimits

0x56cf,	// (0x00019704) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x00023ccf) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x00023ccf) popup_note2_wait_window_t

0x56e1,	// (0x00019716) wait_bar2_pane_ParamLimits

0x56e1,	// (0x00019716) wait_bar2_pane

0x56f9,	// (0x0001972e) popup_snote2_single_text_window_g1_ParamLimits

0x56f9,	// (0x0001972e) popup_snote2_single_text_window_g1

0x5721,	// (0x00019756) popup_snote2_single_text_window_t1_ParamLimits

0x5721,	// (0x00019756) popup_snote2_single_text_window_t1

0x576d,	// (0x000197a2) popup_snote2_single_text_window_t2_ParamLimits

0x576d,	// (0x000197a2) popup_snote2_single_text_window_t2

0x57b9,	// (0x000197ee) popup_snote2_single_text_window_t3_ParamLimits

0x57b9,	// (0x000197ee) popup_snote2_single_text_window_t3

0x57fa,	// (0x0001982f) popup_snote2_single_text_window_t4_ParamLimits

0x57fa,	// (0x0001982f) popup_snote2_single_text_window_t4

0x5830,	// (0x00019865) popup_snote2_single_text_window_t5_ParamLimits

0x5830,	// (0x00019865) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00023cd8) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00023cd8) popup_snote2_single_text_window_t

0x585b,	// (0x00019890) popup_snote2_single_graphic_window_g1_ParamLimits

0x585b,	// (0x00019890) popup_snote2_single_graphic_window_g1

0x5883,	// (0x000198b8) popup_snote2_single_graphic_window_g2_ParamLimits

0x5883,	// (0x000198b8) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x00023ce3) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x00023ce3) popup_snote2_single_graphic_window_g

0x58ab,	// (0x000198e0) popup_snote2_single_graphic_window_t1_ParamLimits

0x58ab,	// (0x000198e0) popup_snote2_single_graphic_window_t1

0x58f7,	// (0x0001992c) popup_snote2_single_graphic_window_t2_ParamLimits

0x58f7,	// (0x0001992c) popup_snote2_single_graphic_window_t2

0x57b9,	// (0x000197ee) popup_snote2_single_graphic_window_t3_ParamLimits

0x57b9,	// (0x000197ee) popup_snote2_single_graphic_window_t3

0x57fa,	// (0x0001982f) popup_snote2_single_graphic_window_t4_ParamLimits

0x57fa,	// (0x0001982f) popup_snote2_single_graphic_window_t4

0x5830,	// (0x00019865) popup_snote2_single_graphic_window_t5_ParamLimits

0x5830,	// (0x00019865) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00023ce8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00023ce8) popup_snote2_single_graphic_window_t

0x4070,	// (0x000180a5) clock_nsta_pane_cp2_t1

0x4070,	// (0x000180a5) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00023afc) clock_nsta_pane_cp2_t

0xdbd3,	// (0x00021c08) form_field_data_wide_pane_g1_ParamLimits

0xdbdf,	// (0x00021c14) form_field_data_wide_pane_g2_ParamLimits

0xdbdf,	// (0x00021c14) form_field_data_wide_pane_g2

0xdbeb,	// (0x00021c20) form_field_data_wide_pane_g3_ParamLimits

0xdbeb,	// (0x00021c20) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x000236b1) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x000236b1) form_field_data_wide_pane_g

0xb762,	// (0x0001f797) grid_touch_3_pane_ParamLimits

0xb762,	// (0x0001f797) grid_touch_3_pane

0xbd99,	// (0x0001fdce) cell_touch_3_pane_ParamLimits

0xbd99,	// (0x0001fdce) cell_touch_3_pane

0x45d6,	// (0x0001860b) cell_touch_3_pane_g1

0x45d6,	// (0x0001860b) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00023b81) cell_touch_3_pane_g

0xd702,	// (0x00021737) cont_query_data_pane

0xd70a,	// (0x0002173f) cont_query_data_pane_cp1

0x5976,	// (0x000199ab) button_value_adjust_pane_cp7

0x597e,	// (0x000199b3) query_popup_pane_cp3

0x0668,	// (0x0001469d) bg_popup_sub_pane_cp22_ParamLimits

0xe610,	// (0x00022645) navi_navi_volume_pane_cp2

0xe62b,	// (0x00022660) popup_side_volume_key_window_g2

0xe63a,	// (0x0002266f) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x00023747) popup_side_volume_key_window_g

0xe657,	// (0x0002268c) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0002374e) popup_side_volume_key_window_t

0x09af,	// (0x000149e4) popup_side_volume_key_window_ParamLimits

0x9c27,	// (0x0001dc5c) list_double_graphic_pane_g4_ParamLimits

0x9c27,	// (0x0001dc5c) list_double_graphic_pane_g4

0xb5f7,	// (0x0001f62c) list_single_2heading_msg_pane_ParamLimits

0xb5f7,	// (0x0001f62c) list_single_2heading_msg_pane

0xbde3,	// (0x0001fe18) list_single_2heading_msg_pane_g1_ParamLimits

0xbde3,	// (0x0001fe18) list_single_2heading_msg_pane_g1

0xbdef,	// (0x0001fe24) list_single_2heading_msg_pane_g2_ParamLimits

0xbdef,	// (0x0001fe24) list_single_2heading_msg_pane_g2

0xbe02,	// (0x0001fe37) list_single_2heading_msg_pane_g3_ParamLimits

0xbe02,	// (0x0001fe37) list_single_2heading_msg_pane_g3

0xbe0e,	// (0x0001fe43) list_single_2heading_msg_pane_g4_ParamLimits

0xbe0e,	// (0x0001fe43) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x00023cf3) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x00023cf3) list_single_2heading_msg_pane_g

0xbe26,	// (0x0001fe5b) list_single_2heading_msg_pane_t1_ParamLimits

0xbe26,	// (0x0001fe5b) list_single_2heading_msg_pane_t1

0xbe4e,	// (0x0001fe83) list_single_2heading_msg_pane_t2_ParamLimits

0xbe4e,	// (0x0001fe83) list_single_2heading_msg_pane_t2

0xbeb9,	// (0x0001feee) list_single_2heading_msg_pane_t3_ParamLimits

0xbeb9,	// (0x0001feee) list_single_2heading_msg_pane_t3

0x5a6f,	// (0x00019aa4) list_single_2heading_msg_pane_t4_ParamLimits

0x5a6f,	// (0x00019aa4) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x00023cfc) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x00023cfc) list_single_2heading_msg_pane_t

0xb9eb,	// (0x0001fa20) title_pane_g4_ParamLimits

0xb9eb,	// (0x0001fa20) title_pane_g4

0xe425,	// (0x0002245a) title_pane_stacon_g3_ParamLimits

0xe425,	// (0x0002245a) title_pane_stacon_g3

0x5473,	// (0x000194a8) list_single_2graphic_im_pane_g4_ParamLimits

0x5473,	// (0x000194a8) list_single_2graphic_im_pane_g4

0x2cb2,	// (0x00016ce7) popup_side_volume_key_window_cp

0x35af,	// (0x000175e4) main_idle_act2_pane_t1

0xe907,	// (0x0002293c) toolbar_button_pane_g10

0x9ade,	// (0x0001db13) popup_toolbar_window_cp1

0x4061,	// (0x00018096) clock_nsta_pane_cp_t1

0x4061,	// (0x00018096) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00023af7) clock_nsta_pane_cp_t

0xe610,	// (0x00022645) navi_navi_volume_pane_cp2_ParamLimits

0xe61f,	// (0x00022654) popup_side_volume_key_window_g1_ParamLimits

0xe62b,	// (0x00022660) popup_side_volume_key_window_g2_ParamLimits

0xe63a,	// (0x0002266f) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x00023747) popup_side_volume_key_window_g_ParamLimits

0xec0e,	// (0x00022c43) fep_hwr_aid_pane

0xecb7,	// (0x00022cec) bg_fep_hwr_top_pane_g4_ParamLimits

0x4637,	// (0x0001866c) fep_hwr_top_pane_g1_ParamLimits

0x4649,	// (0x0001867e) fep_hwr_top_pane_g2_ParamLimits

0xecd7,	// (0x00022d0c) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x00023b4c) fep_hwr_top_pane_g_ParamLimits

0xecec,	// (0x00022d21) fep_hwr_top_text_pane_ParamLimits

0x2a67,	// (0x00016a9c) aid_touch_tab_arrow_arrow_2

0x2a70,	// (0x00016aa5) aid_touch_tab_arrow_left_2

0xec22,	// (0x00022c57) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xec59,	// (0x00022c8e) fep_hwr_prediction_pane

0x479f,	// (0x000187d4) fep_vkb_prediction_pane

0xbb4e,	// (0x0001fb83) fep_vkb_side_pane_g3_ParamLimits

0xbb4e,	// (0x0001fb83) fep_vkb_side_pane_g3

0xee00,	// (0x00022e35) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xee71,	// (0x00022ea6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xee7e,	// (0x00022eb3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00023bfb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xefad,	// (0x00022fe2) fep_hwr_prediction_pane_g1

0xefb7,	// (0x00022fec) fep_hwr_prediction_pane_g2

0xefbf,	// (0x00022ff4) fep_hwr_prediction_pane_g3

0xefc7,	// (0x00022ffc) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00023d05) fep_hwr_prediction_pane_g

0x5a94,	// (0x00019ac9) fep_vkb_prediction_pane_g1

0x5a9e,	// (0x00019ad3) fep_vkb_prediction_pane_g2

0x5aa6,	// (0x00019adb) fep_vkb_prediction_pane_g3

0x5aae,	// (0x00019ae3) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x00023d0e) fep_vkb_prediction_pane_g

0xea3d,	// (0x00022a72) slider_set_pane_g3

0xea51,	// (0x00022a86) slider_set_pane_g4

0xea69,	// (0x00022a9e) slider_set_pane_g5

0xea3d,	// (0x00022a72) slider_set_pane_g6

0xea7f,	// (0x00022ab4) slider_set_pane_g7

0x317c,	// (0x000171b1) slider_form_pane_g3

0x3185,	// (0x000171ba) slider_form_pane_g4

0x318d,	// (0x000171c2) slider_form_pane_g5

0x317c,	// (0x000171b1) slider_form_pane_g6

0xb59a,	// (0x0001f5cf) slider_form_pane_g7

0x38b2,	// (0x000178e7) slider_set_pane_vc_g3

0x38bb,	// (0x000178f0) slider_set_pane_vc_g4

0x38c4,	// (0x000178f9) slider_set_pane_vc_g5

0x38b2,	// (0x000178e7) slider_set_pane_vc_g6

0x38cd,	// (0x00017902) slider_set_pane_vc_g7

0x3d0e,	// (0x00017d43) slider_form_pane_vc_g1

0x3d17,	// (0x00017d4c) slider_form_pane_vc_g2

0x3d20,	// (0x00017d55) slider_form_pane_vc_g3

0x3d0e,	// (0x00017d43) slider_form_pane_vc_g4

0x3d29,	// (0x00017d5e) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00023ac9) slider_form_pane_vc_g

0xb9c1,	// (0x0001f9f6) main_idle_act3_pane

0x5ab6,	// (0x00019aeb) ai3_links_pane

0xbf27,	// (0x0001ff5c) popup_ai3_data_window_ParamLimits

0xbf27,	// (0x0001ff5c) popup_ai3_data_window

0xb9c1,	// (0x0001f9f6) grid_ai3_links_pane

0xbf45,	// (0x0001ff7a) cell_ai3_links_pane_ParamLimits

0xbf45,	// (0x0001ff7a) cell_ai3_links_pane

0x5af7,	// (0x00019b2c) bg_popup_sub_pane_cp11

0x5b04,	// (0x00019b39) cell_ai3_links_pane_g1

0xb9c1,	// (0x0001f9f6) bg_popup_sub_pane_cp12

0x5b29,	// (0x00019b5e) heading_ai3_data_pane

0x5b31,	// (0x00019b66) list_ai3_gene_pane

0x5b3d,	// (0x00019b72) popup_ai3_data_window_g1

0x5b45,	// (0x00019b7a) heading_ai3_data_pane_g1

0x5b4d,	// (0x00019b82) heading_ai3_data_pane_t1

0x5b5b,	// (0x00019b90) list_double_ai3_gene_pane_ParamLimits

0x5b5b,	// (0x00019b90) list_double_ai3_gene_pane

0x5b68,	// (0x00019b9d) list_single_ai3_gene_pane_ParamLimits

0x5b68,	// (0x00019b9d) list_single_ai3_gene_pane

0x459b,	// (0x000185d0) list_highlight_pane_cp7_ParamLimits

0x459b,	// (0x000185d0) list_highlight_pane_cp7

0x5b75,	// (0x00019baa) list_single_a13_gene_pane_t1_ParamLimits

0x5b75,	// (0x00019baa) list_single_a13_gene_pane_t1

0x5b8c,	// (0x00019bc1) list_single_ai3_gene_pane_g1

0x5b95,	// (0x00019bca) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x00023d17) list_single_ai3_gene_pane_g

0x5b9d,	// (0x00019bd2) list_double_ai3_gene_pane_g1_ParamLimits

0x5b9d,	// (0x00019bd2) list_double_ai3_gene_pane_g1

0x5ba9,	// (0x00019bde) list_double_ai3_gene_pane_t1_ParamLimits

0x5ba9,	// (0x00019bde) list_double_ai3_gene_pane_t1

0x5bc5,	// (0x00019bfa) list_double_ai3_gene_pane_t2_ParamLimits

0x5bc5,	// (0x00019bfa) list_double_ai3_gene_pane_t2

0x5bda,	// (0x00019c0f) list_double_ai3_gene_pane_t3_ParamLimits

0x5bda,	// (0x00019c0f) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x00023d1c) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x00023d1c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x598f,	// (0x000199c4) aid_size_min_col_2

0xbdcd,	// (0x0001fe02) aid_size_min_msg_ParamLimits

0xbdcd,	// (0x0001fe02) aid_size_min_msg

0xbb62,	// (0x0001fb97) fep_vkb_top_text_pane_g2_ParamLimits

0xbb62,	// (0x0001fb97) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00023b7c) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00023b7c) fep_vkb_top_text_pane_g

0xb9c1,	// (0x0001f9f6) main_hc_apps_shell_pane

0x5bf7,	// (0x00019c2c) grid_hc_apps_pane_ParamLimits

0x5bf7,	// (0x00019c2c) grid_hc_apps_pane

0x5c06,	// (0x00019c3b) list_hc_apps_pane

0x5c0e,	// (0x00019c43) scroll_pane_cp37_ParamLimits

0x5c0e,	// (0x00019c43) scroll_pane_cp37

0xbf5f,	// (0x0001ff94) cell_hc_apps_pane_ParamLimits

0xbf5f,	// (0x0001ff94) cell_hc_apps_pane

0xc029,	// (0x0002005e) cell_hc_apps_pane_g1_ParamLimits

0xc029,	// (0x0002005e) cell_hc_apps_pane_g1

0x5d03,	// (0x00019d38) cell_hc_apps_pane_g2_ParamLimits

0x5d03,	// (0x00019d38) cell_hc_apps_pane_g2

0x5d1f,	// (0x00019d54) cell_hc_apps_pane_g3_ParamLimits

0x5d1f,	// (0x00019d54) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x00023d23) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x00023d23) cell_hc_apps_pane_g

0xc056,	// (0x0002008b) cell_hc_apps_pane_t1_ParamLimits

0xc056,	// (0x0002008b) cell_hc_apps_pane_t1

0xd64c,	// (0x00021681) grid_highlight_pane_cp10_ParamLimits

0xd64c,	// (0x00021681) grid_highlight_pane_cp10

0xc096,	// (0x000200cb) list_single_hc_apps_pane_ParamLimits

0xc096,	// (0x000200cb) list_single_hc_apps_pane

0xc0d0,	// (0x00020105) list_single_hc_apps_pane_g1

0xc0e9,	// (0x0002011e) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00023d2a) list_single_hc_apps_pane_g

0xc102,	// (0x00020137) list_single_hc_apps_pane_g2_copy1

0xc11e,	// (0x00020153) list_single_hc_apps_pane_t1

0xd4ff,	// (0x00021534) bg_set_opt_pane_cp_ParamLimits

0xe34c,	// (0x00022381) setting_slider_pane_t1_ParamLimits

0xe365,	// (0x0002239a) setting_slider_pane_t2_ParamLimits

0xe37f,	// (0x000223b4) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00023599) setting_slider_pane_t_ParamLimits

0xe397,	// (0x000223cc) slider_set_pane_ParamLimits

0xe85c,	// (0x00022891) control_pane_g5_ParamLimits

0xe85c,	// (0x00022891) control_pane_g5

0x2fa9,	// (0x00016fde) slider_set_pane_g1_ParamLimits

0xea31,	// (0x00022a66) slider_set_pane_g2_ParamLimits

0xea3d,	// (0x00022a72) slider_set_pane_g3_ParamLimits

0xea51,	// (0x00022a86) slider_set_pane_g4_ParamLimits

0xea69,	// (0x00022a9e) slider_set_pane_g5_ParamLimits

0xea3d,	// (0x00022a72) slider_set_pane_g6_ParamLimits

0xea7f,	// (0x00022ab4) slider_set_pane_g7_ParamLimits

0xf960,	// (0x00023995) slider_set_pane_g_ParamLimits

0x0a94,	// (0x00014ac9) navi_icon_text_pane_ParamLimits

0xaca9,	// (0x0001ecde) aid_fill_nsta_2_ParamLimits

0xace2,	// (0x0001ed17) aid_touch_tab_arrow_left_ParamLimits

0xacf8,	// (0x0001ed2d) aid_touch_tab_arrow_right_ParamLimits

0xad93,	// (0x0001edc8) clock_nsta_pane_ParamLimits

0xb29f,	// (0x0001f2d4) navi_icon_pane_g1_ParamLimits

0xb2ab,	// (0x0001f2e0) navi_text_pane_t1_ParamLimits

0xb83c,	// (0x0001f871) navi_icon_text_pane_g1_ParamLimits

0xb848,	// (0x0001f87d) navi_icon_text_pane_t1_ParamLimits

0xc0d0,	// (0x00020105) list_single_hc_apps_pane_g1_ParamLimits

0xc0e9,	// (0x0002011e) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00023d2a) list_single_hc_apps_pane_g_ParamLimits

0xc102,	// (0x00020137) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc11e,	// (0x00020153) list_single_hc_apps_pane_t1_ParamLimits

0x8e30,	// (0x0001ce65) popup_toolbar2_fixed_window_ParamLimits

0x8e30,	// (0x0001ce65) popup_toolbar2_fixed_window

0xac0e,	// (0x0001ec43) popup_toolbar2_float_window

0xb9c1,	// (0x0001f9f6) bg_popup_sub_pane_cp27

0x5e3c,	// (0x00019e71) grid_toolbar2_float_pane

0xb9c1,	// (0x0001f9f6) bg_popup_sub_pane_cp26

0x5e3c,	// (0x00019e71) grid_toolbar2_fixed_pane

0xc14c,	// (0x00020181) cell_toolbar2_fixed_pane_ParamLimits

0xc14c,	// (0x00020181) cell_toolbar2_fixed_pane

0xc169,	// (0x0002019e) cell_toolbar2_fixed_pane_g1

0x5e5d,	// (0x00019e92) toolbar2_fixed_button_pane

0x1b11,	// (0x00015b46) toolbar2_fixed_button_pane_g1

0x1b21,	// (0x00015b56) toolbar2_fixed_button_pane_g2

0x1b19,	// (0x00015b4e) toolbar2_fixed_button_pane_g3

0x1b31,	// (0x00015b66) toolbar2_fixed_button_pane_g4

0x1b29,	// (0x00015b5e) toolbar2_fixed_button_pane_g5

0x1b39,	// (0x00015b6e) toolbar2_fixed_button_pane_g6

0x1b41,	// (0x00015b76) toolbar2_fixed_button_pane_g7

0x1b51,	// (0x00015b86) toolbar2_fixed_button_pane_g8

0x1b49,	// (0x00015b7e) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x00023897) toolbar2_fixed_button_pane_g

0x5e65,	// (0x00019e9a) cell_toolbar2_float_pane_ParamLimits

0x5e65,	// (0x00019e9a) cell_toolbar2_float_pane

0x5e76,	// (0x00019eab) cell_toolbar2_float_pane_g1

0x5e5d,	// (0x00019e92) toolbar2_fixed_button_pane_cp

0xba4a,	// (0x0001fa7f) fep_vkb_accented_list_pane_ParamLimits

0xba4a,	// (0x0001fa7f) fep_vkb_accented_list_pane

0xede0,	// (0x00022e15) bg_popup_fep_shadow_pane_g9

0x0c18,	// (0x00014c4d) bg_popup_fep_shadow_pane_cp3

0xdd64,	// (0x00021d99) list_accented_list_pane

0x5e7f,	// (0x00019eb4) list_single_accented_list_pane_ParamLimits

0x5e7f,	// (0x00019eb4) list_single_accented_list_pane

0x0c18,	// (0x00014c4d) list_highlight_pane_cp10

0x5e90,	// (0x00019ec5) list_single_accented_list_pane_t1

0xab2a,	// (0x0001eb5f) popup_slider_window_ParamLimits

0xab2a,	// (0x0001eb5f) popup_slider_window

0x5986,	// (0x000199bb) aid_indentation_list_msg

0xc274,	// (0x000202a9) bg_popup_window_pane_cp19

0x5fca,	// (0x00019fff) popup_slider_window_g1

0x5fe6,	// (0x0001a01b) popup_slider_window_g2

0x6002,	// (0x0001a037) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00023d2f) popup_slider_window_g

0x605e,	// (0x0001a093) popup_slider_window_t1

0x60d2,	// (0x0001a107) small_volume_slider_vertical_pane

0x45d6,	// (0x0001860b) small_volume_slider_vertical_pane_g1

0x45d6,	// (0x0001860b) small_volume_slider_vertical_pane_g2

0x60ee,	// (0x0001a123) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x00023d41) small_volume_slider_vertical_pane_g

0x8d9a,	// (0x0001cdcf) area_side_right_pane_ParamLimits

0x8d9a,	// (0x0001cdcf) area_side_right_pane

0x922b,	// (0x0001d260) aid_size_side_button_ParamLimits

0x922b,	// (0x0001d260) aid_size_side_button

0x9244,	// (0x0001d279) grid_sctrl_middle_pane_ParamLimits

0x9244,	// (0x0001d279) grid_sctrl_middle_pane

0xefd8,	// (0x0002300d) sctrl_sk_bottom_pane

0xefe9,	// (0x0002301e) sctrl_sk_top_pane

0xeffb,	// (0x00023030) aid_touch_sctrl_top

0xf008,	// (0x0002303d) bg_sctrl_sk_pane_ParamLimits

0xf008,	// (0x0002303d) bg_sctrl_sk_pane

0xf016,	// (0x0002304b) sctrl_sk_top_pane_g1

0xf023,	// (0x00023058) sctrl_sk_top_pane_t1

0xeffb,	// (0x00023030) aid_touch_sctrl_bottom

0xf008,	// (0x0002303d) bg_sctrl_sk_pane_cp_ParamLimits

0xf008,	// (0x0002303d) bg_sctrl_sk_pane_cp

0xf03e,	// (0x00023073) sctrl_sk_bottom_pane_g1

0xf023,	// (0x00023058) sctrl_sk_bottom_pane_t1

0x925e,	// (0x0001d293) cell_sctrl_middle_pane_ParamLimits

0x925e,	// (0x0001d293) cell_sctrl_middle_pane

0x9271,	// (0x0001d2a6) aid_touch_sctrl_middle_ParamLimits

0x9271,	// (0x0001d2a6) aid_touch_sctrl_middle

0x927e,	// (0x0001d2b3) bg_sctrl_middle_pane_ParamLimits

0x927e,	// (0x0001d2b3) bg_sctrl_middle_pane

0xf132,	// (0x00023167) cell_sctrl_middle_pane_g1_ParamLimits

0xf132,	// (0x00023167) cell_sctrl_middle_pane_g1

0x928c,	// (0x0001d2c1) cell_sctrl_middle_pane_g2_ParamLimits

0x928c,	// (0x0001d2c1) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x00023d4d) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x00023d4d) cell_sctrl_middle_pane_g

0x1b11,	// (0x00015b46) bg_sctrl_middle_pane_g1

0x1b19,	// (0x00015b4e) bg_sctrl_middle_pane_g2

0x1b21,	// (0x00015b56) bg_sctrl_middle_pane_g3

0x1b29,	// (0x00015b5e) bg_sctrl_middle_pane_g4

0x1b31,	// (0x00015b66) bg_sctrl_middle_pane_g5

0x1b39,	// (0x00015b6e) bg_sctrl_middle_pane_g6

0x1b41,	// (0x00015b76) bg_sctrl_middle_pane_g7

0x1b49,	// (0x00015b7e) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x00023d52) bg_sctrl_middle_pane_g

0x1b51,	// (0x00015b86) bg_sctrl_middle_pane_g8_copy1

0x1b11,	// (0x00015b46) bg_sctrl_sk_pane_g1

0x1b21,	// (0x00015b56) bg_sctrl_sk_pane_g2

0x1b19,	// (0x00015b4e) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x00023897) bg_sctrl_sk_pane_g

0xda67,	// (0x00021a9c) aid_size_touch_scroll_bar

0x1b31,	// (0x00015b66) bg_sctrl_sk_pane_g4

0x1b29,	// (0x00015b5e) bg_sctrl_sk_pane_g5

0x1b39,	// (0x00015b6e) bg_sctrl_sk_pane_g6

0x1b41,	// (0x00015b76) bg_sctrl_sk_pane_g7

0x1b51,	// (0x00015b86) bg_sctrl_sk_pane_g8

0x1b49,	// (0x00015b7e) bg_sctrl_sk_pane_g9

0x1050,	// (0x00015085) popup_fep_china_hwr2_fs_candidate_window

0xa5e2,	// (0x0001e617) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa5e2,	// (0x0001e617) popup_fep_china_hwr2_fs_control_window

0xee00,	// (0x00022e35) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x00023d48) sctrl_sk_top_pane_g

0xc32c,	// (0x00020361) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc32c,	// (0x00020361) aid_fep_china_hwr2_fs_cell

0xc342,	// (0x00020377) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc342,	// (0x00020377) bg_popup_fep_shadow_pane_cp4

0xc359,	// (0x0002038e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc359,	// (0x0002038e) bg_popup_fep_shadow_pane_cp5

0xc36b,	// (0x000203a0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc36b,	// (0x000203a0) popup_fep_china_hwr2_fs_control_bar_grid

0xc37f,	// (0x000203b4) popup_fep_china_hwr2_fs_control_funtion_grid

0x614d,	// (0x0001a182) aid_fep_china_hwr2_fs_candi_cell

0xb9c1,	// (0x0001f9f6) bg_popup_fep_shadow_pane_cp6

0x6157,	// (0x0001a18c) popup_fep_china_hwr2_fs_candidate_grid

0xc387,	// (0x000203bc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc387,	// (0x000203bc) cell_fep_china_hwr2_fs_funtion_grid

0x45d6,	// (0x0001860b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6179,	// (0x0001a1ae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6179,	// (0x0001a1ae) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6187,	// (0x0001a1bc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6187,	// (0x0001a1bc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x00023d63) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x00023d63) cell_fep_china_hwr2_fs_funtion_grid_g

0xc39f,	// (0x000203d4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc39f,	// (0x000203d4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc3b4,	// (0x000203e9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc3b4,	// (0x000203e9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x00023d68) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x00023d68) cell_fep_china_hwr2_fs_funtion_grid_t

0x61ce,	// (0x0001a203) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x61d6,	// (0x0001a20b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x61de,	// (0x0001a213) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x00023d6d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x61e6,	// (0x0001a21b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x61e6,	// (0x0001a21b) cell_fep_china_hwr2_fs_candidate_grid

0x6205,	// (0x0001a23a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x620d,	// (0x0001a242) popup_fep_china_hwr2_fs_candidate_grid_g21

0x45d6,	// (0x0001860b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x45d6,	// (0x0001860b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00023b81) cell_fep_china_hwr2_fs_candidate_grid_g

0x6215,	// (0x0001a24a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x16bf,	// (0x000156f4) clock_nsta_pane_cp_24_ParamLimits

0x16bf,	// (0x000156f4) clock_nsta_pane_cp_24

0x173f,	// (0x00015774) indicator_nsta_pane_cp_24_ParamLimits

0x173f,	// (0x00015774) indicator_nsta_pane_cp_24

0x28c5,	// (0x000168fa) heading_pane_g1

0x0001,

0xf8c7,	// (0x000238fc) heading_pane_g

0x33f6,	// (0x0001742b) grid_sct_catagory_button_pane

0x3428,	// (0x0001745d) scroll_pane_cp5_ParamLimits

0x41cc,	// (0x00018201) button_value_adjust_pane_cp5_ParamLimits

0x41cc,	// (0x00018201) button_value_adjust_pane_cp5

0x42d2,	// (0x00018307) form2_midp_time_pane_ParamLimits

0x6223,	// (0x0001a258) cell_sct_catagory_button_pane_ParamLimits

0x6223,	// (0x0001a258) cell_sct_catagory_button_pane

0x459b,	// (0x000185d0) bg_button_pane_cp01_ParamLimits

0x459b,	// (0x000185d0) bg_button_pane_cp01

0x45d6,	// (0x0001860b) cell_sct_catagory_button_pane_g1

0xabab,	// (0x0001ebe0) popup_tb_extension_window

0xc3d0,	// (0x00020405) aid_size_cell_ext_ParamLimits

0xc3d0,	// (0x00020405) aid_size_cell_ext

0xd8a9,	// (0x000218de) bg_tb_trans_pane_cp1_ParamLimits

0xd8a9,	// (0x000218de) bg_tb_trans_pane_cp1

0xc3f6,	// (0x0002042b) grid_tb_ext_pane_ParamLimits

0xc3f6,	// (0x0002042b) grid_tb_ext_pane

0xc436,	// (0x0002046b) cell_tb_ext_pane_ParamLimits

0xc436,	// (0x0002046b) cell_tb_ext_pane

0xc45e,	// (0x00020493) cell_tb_ext_pane_g1_ParamLimits

0xc45e,	// (0x00020493) cell_tb_ext_pane_g1

0x62b9,	// (0x0001a2ee) cell_tb_ext_pane_t1

0xd64c,	// (0x00021681) list_highlight_pane_cp11_ParamLimits

0xd64c,	// (0x00021681) list_highlight_pane_cp11

0xe2d5,	// (0x0002230a) popup_uni_indicator_window_ParamLimits

0xe2d5,	// (0x0002230a) popup_uni_indicator_window

0xdbb4,	// (0x00021be9) bg_popup_sub_pane_cp14

0x62d4,	// (0x0001a309) list_uniindi_pane

0x62e0,	// (0x0001a315) uniindi_top_pane

0xd64c,	// (0x00021681) bg_uniindi_top_pane

0x6301,	// (0x0001a336) uniindi_top_pane_g1

0x6317,	// (0x0001a34c) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x00023d74) uniindi_top_pane_g

0x6341,	// (0x0001a376) uniindi_top_pane_t1

0x636d,	// (0x0001a3a2) list_single_uniindi_pane_ParamLimits

0x636d,	// (0x0001a3a2) list_single_uniindi_pane

0x45d6,	// (0x0001860b) bg_uniindi_top_pane_g1

0x637f,	// (0x0001a3b4) list_single_uniindi_pane_g1

0x6392,	// (0x0001a3c7) list_single_uniindi_pane_t1

0xe1bc,	// (0x000221f1) control_bg_pane

0x63b7,	// (0x0001a3ec) bg_sctrl_sk_pane_cp1

0x63c0,	// (0x0001a3f5) bg_sctrl_sk_pane_cp2

0x63c9,	// (0x0001a3fe) control_bg_pane_g1

0x63d2,	// (0x0001a407) control_bg_pane_g2

0x0001,

0xfd48,	// (0x00023d7d) control_bg_pane_g

0x3ff3,	// (0x00018028) cell_indicator_nsta_pane_g1_ParamLimits

0xb795,	// (0x0001f7ca) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00023ae5) cell_indicator_nsta_pane_g_ParamLimits

0x4362,	// (0x00018397) form2_midp_time_pane_t1_ParamLimits

0xa558,	// (0x0001e58d) main_idle_act4_pane_ParamLimits

0xa558,	// (0x0001e58d) main_idle_act4_pane

0xabab,	// (0x0001ebe0) popup_tb_extension_window_ParamLimits

0xc41e,	// (0x00020453) tb_ext_find_pane_ParamLimits

0xc41e,	// (0x00020453) tb_ext_find_pane

0x63db,	// (0x0001a410) ai_gene_pane_1_cp1

0x0d55,	// (0x00014d8a) ai_gene_pane_2_cp1

0x63e3,	// (0x0001a418) list_single_idle_plugin_calendar_pane

0x63ec,	// (0x0001a421) list_single_idle_plugin_notification_pane

0x63f5,	// (0x0001a42a) list_single_idle_plugin_player_pane

0xc47b,	// (0x000204b0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc47b,	// (0x000204b0) list_single_idle_plugin_shortcut_pane

0xc4a3,	// (0x000204d8) main_idle_act4_pane_t1

0xc4bb,	// (0x000204f0) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00023d82) main_idle_act4_pane_t

0xc4d3,	// (0x00020508) middle_sk_idle_act4_pane_ParamLimits

0xc4d3,	// (0x00020508) middle_sk_idle_act4_pane

0xc4ef,	// (0x00020524) popup_clock_digital_analogue_window_cp2

0xc516,	// (0x0002054b) shortcut_wheel_idle_act4_pane_ParamLimits

0xc516,	// (0x0002054b) shortcut_wheel_idle_act4_pane

0x45d6,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g1

0x45d6,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g2

0x45d6,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g3

0x45d6,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g4

0x45d6,	// (0x0001860b) shortcut_wheel_idle_act4_pane_g5

0x6488,	// (0x0001a4bd) shortcut_wheel_idle_act4_pane_g6

0x6490,	// (0x0001a4c5) shortcut_wheel_idle_act4_pane_g7

0x6498,	// (0x0001a4cd) shortcut_wheel_idle_act4_pane_g8

0x64a0,	// (0x0001a4d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x00023d87) shortcut_wheel_idle_act4_pane_g

0xb991,	// (0x0001f9c6) middle_sk_idle_act4_pane_g1_ParamLimits

0xb991,	// (0x0001f9c6) middle_sk_idle_act4_pane_g1

0xc593,	// (0x000205c8) middle_sk_idle_act4_pane_g2_ParamLimits

0xc593,	// (0x000205c8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00023daa) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00023daa) middle_sk_idle_act4_pane_g

0xc5ab,	// (0x000205e0) middle_sk_idle_act4_pane_t1_ParamLimits

0xc5ab,	// (0x000205e0) middle_sk_idle_act4_pane_t1

0xc5da,	// (0x0002060f) grid_ai_shortcut_pane_ParamLimits

0xc5da,	// (0x0002060f) grid_ai_shortcut_pane

0xc5f7,	// (0x0002062c) list_highlight_pane_cp16_ParamLimits

0xc5f7,	// (0x0002062c) list_highlight_pane_cp16

0xc604,	// (0x00020639) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc604,	// (0x00020639) list_single_idle_plugin_shortcut_pane_g1

0xc610,	// (0x00020645) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc610,	// (0x00020645) list_single_idle_plugin_shortcut_pane_g2

0xc62e,	// (0x00020663) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc62e,	// (0x00020663) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00023daf) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00023daf) list_single_idle_plugin_shortcut_pane_g

0xc643,	// (0x00020678) cell_ai_shortcut_pane_ParamLimits

0xc643,	// (0x00020678) cell_ai_shortcut_pane

0xc659,	// (0x0002068e) cell_ai_shortcut_pane_g1_ParamLimits

0xc659,	// (0x0002068e) cell_ai_shortcut_pane_g1

0x63db,	// (0x0001a410) ai_gene_pane_1_cp2

0x65d1,	// (0x0001a606) ai_gene_pane_2_cp2

0x65d9,	// (0x0001a60e) list_highlight_pane_cp15

0x65e2,	// (0x0001a617) list_single_idle_plugin_calendar_pane_g1

0x65d9,	// (0x0001a60e) list_highlight_pane_cp17

0x65ea,	// (0x0001a61f) list_single_idle_plugin_calendar_pane_g1_copy1

0x65f2,	// (0x0001a627) list_single_idle_plugin_player_pane_g1

0x365d,	// (0x00017692) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x00023db6) list_single_idle_plugin_player_pane_g

0x65fa,	// (0x0001a62f) list_single_idle_plugin_player_pane_t1

0x6608,	// (0x0001a63d) list_single_idle_plugin_player_pane_t2

0x6616,	// (0x0001a64b) list_single_idle_plugin_player_pane_t3

0x6624,	// (0x0001a659) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00023dbb) list_single_idle_plugin_player_pane_t

0x6632,	// (0x0001a667) wait_bar_pane_cp15

0x663a,	// (0x0001a66f) grid_ai_notification_pane

0x365d,	// (0x00017692) list_single_idle_plugin_notification_pane_g1

0xc67b,	// (0x000206b0) cell_ai_notification_pane_ParamLimits

0xc67b,	// (0x000206b0) cell_ai_notification_pane

0x6650,	// (0x0001a685) cell_ai_notification_pane_g1

0x6658,	// (0x0001a68d) cell_ai_notification_pane_t1

0xc688,	// (0x000206bd) tb_ext_find_button_pane

0xc690,	// (0x000206c5) tb_ext_find_pane_g1

0xc698,	// (0x000206cd) tb_ext_find_pane_t1

0xe133,	// (0x00022168) tb_ext_find_button_pane_g1

0x6684,	// (0x0001a6b9) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x00023dc4) tb_ext_find_button_pane_g

0xc4a3,	// (0x000204d8) main_idle_act4_pane_t1_ParamLimits

0xc4bb,	// (0x000204f0) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00023d82) main_idle_act4_pane_t_ParamLimits

0xc4ef,	// (0x00020524) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc506,	// (0x0002053b) sat_plugin_idle_act4_pane_ParamLimits

0xc506,	// (0x0002053b) sat_plugin_idle_act4_pane

0xc6a6,	// (0x000206db) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc6a6,	// (0x000206db) sat_plugin_idle_act4_pane_t1

0xc6be,	// (0x000206f3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc6be,	// (0x000206f3) sat_plugin_idle_act4_pane_t2

0xc6d6,	// (0x0002070b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc6d6,	// (0x0002070b) sat_plugin_idle_act4_pane_t3

0xc6ee,	// (0x00020723) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc6ee,	// (0x00020723) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00023dc9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00023dc9) sat_plugin_idle_act4_pane_t

0xe281,	// (0x000222b6) popup_battery_window_ParamLimits

0xe281,	// (0x000222b6) popup_battery_window

0xd64c,	// (0x00021681) bg_popup_sub_pane_cp25_ParamLimits

0xd64c,	// (0x00021681) bg_popup_sub_pane_cp25

0x66d9,	// (0x0001a70e) popup_battery_window_g1_ParamLimits

0x66d9,	// (0x0001a70e) popup_battery_window_g1

0x66e5,	// (0x0001a71a) popup_battery_window_t1_ParamLimits

0x66e5,	// (0x0001a71a) popup_battery_window_t1

0x66f7,	// (0x0001a72c) popup_battery_window_t2_ParamLimits

0x66f7,	// (0x0001a72c) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x00023dd2) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x00023dd2) popup_battery_window_t

0xa44c,	// (0x0001e481) midp_canvas_pane_ParamLimits

0xa4a7,	// (0x0001e4dc) midp_keypad_pane_ParamLimits

0xa4a7,	// (0x0001e4dc) midp_keypad_pane

0x0f9a,	// (0x00014fcf) main_midp_pane_ParamLimits

0x407f,	// (0x000180b4) signal_pane_g2_cp_ParamLimits

0xc706,	// (0x0002073b) aid_size_cell_midp_keypad_ParamLimits

0xc706,	// (0x0002073b) aid_size_cell_midp_keypad

0xc724,	// (0x00020759) midp_keyp_game_grid_pane_ParamLimits

0xc724,	// (0x00020759) midp_keyp_game_grid_pane

0xc74b,	// (0x00020780) midp_keyp_rocker_pane_ParamLimits

0xc74b,	// (0x00020780) midp_keyp_rocker_pane

0xc78a,	// (0x000207bf) midp_keyp_sk_left_pane_ParamLimits

0xc78a,	// (0x000207bf) midp_keyp_sk_left_pane

0xc7de,	// (0x00020813) midp_keyp_sk_right_pane_ParamLimits

0xc7de,	// (0x00020813) midp_keyp_sk_right_pane

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp03

0xc832,	// (0x00020867) midp_keyp_sk_left_pane_g1

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp04

0xc832,	// (0x00020867) midp_keyp_sk_right_pane_g1

0x45d6,	// (0x0001860b) midp_keyp_rocker_pane_g1

0xc83b,	// (0x00020870) keyp_game_cell_pane_ParamLimits

0xc83b,	// (0x00020870) keyp_game_cell_pane

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp02

0xc861,	// (0x00020896) keyp_game_cell_pane_g1

0x8ddc,	// (0x0001ce11) popup_fep_vkb2_window_ParamLimits

0x8ddc,	// (0x0001ce11) popup_fep_vkb2_window

0x9298,	// (0x0001d2cd) aid_size_cell_vkb2_ParamLimits

0x9298,	// (0x0001d2cd) aid_size_cell_vkb2

0x92ce,	// (0x0001d303) popup_fep_vkb2_window_g1_ParamLimits

0x92ce,	// (0x0001d303) popup_fep_vkb2_window_g1

0x931e,	// (0x0001d353) vkb2_area_bottom_pane_ParamLimits

0x931e,	// (0x0001d353) vkb2_area_bottom_pane

0x937a,	// (0x0001d3af) vkb2_area_keypad_pane_ParamLimits

0x937a,	// (0x0001d3af) vkb2_area_keypad_pane

0x93c8,	// (0x0001d3fd) vkb2_area_top_pane_ParamLimits

0x93c8,	// (0x0001d3fd) vkb2_area_top_pane

0x944e,	// (0x0001d483) vkb2_top_entry_pane_ParamLimits

0x944e,	// (0x0001d483) vkb2_top_entry_pane

0x947b,	// (0x0001d4b0) vkb2_top_grid_left_pane_ParamLimits

0x947b,	// (0x0001d4b0) vkb2_top_grid_left_pane

0x949b,	// (0x0001d4d0) vkb2_top_grid_right_pane_ParamLimits

0x949b,	// (0x0001d4d0) vkb2_top_grid_right_pane

0xf077,	// (0x000230ac) vkb2_cell_keypad_pane_ParamLimits

0xf077,	// (0x000230ac) vkb2_cell_keypad_pane

0x94e1,	// (0x0001d516) vkb2_area_bottom_grid_pane_ParamLimits

0x94e1,	// (0x0001d516) vkb2_area_bottom_grid_pane

0x950b,	// (0x0001d540) vkb2_area_bottom_pane_g1_ParamLimits

0x950b,	// (0x0001d540) vkb2_area_bottom_pane_g1

0x9531,	// (0x0001d566) vkb2_area_bottom_pane_g2_ParamLimits

0x9531,	// (0x0001d566) vkb2_area_bottom_pane_g2

0x9562,	// (0x0001d597) vkb2_area_bottom_pane_g3_ParamLimits

0x9562,	// (0x0001d597) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x00023dd7) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x00023dd7) vkb2_area_bottom_pane_g

0xf140,	// (0x00023175) vkb2_top_cell_left_pane_ParamLimits

0xf140,	// (0x00023175) vkb2_top_cell_left_pane

0xc86a,	// (0x0002089f) vkb2_top_entry_pane_g1_ParamLimits

0xc86a,	// (0x0002089f) vkb2_top_entry_pane_g1

0xc878,	// (0x000208ad) vkb2_top_entry_pane_t1_ParamLimits

0xc878,	// (0x000208ad) vkb2_top_entry_pane_t1

0x689a,	// (0x0001a8cf) vkb2_top_entry_pane_t2_ParamLimits

0x689a,	// (0x0001a8cf) vkb2_top_entry_pane_t2

0x68cc,	// (0x0001a901) vkb2_top_entry_pane_t3_ParamLimits

0x68cc,	// (0x0001a901) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x00023dde) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x00023dde) vkb2_top_entry_pane_t

0x95cc,	// (0x0001d601) vkb2_top_grid_right_pane_g1_ParamLimits

0x95cc,	// (0x0001d601) vkb2_top_grid_right_pane_g1

0xf18d,	// (0x000231c2) vkb2_top_grid_right_pane_g2_ParamLimits

0xf18d,	// (0x000231c2) vkb2_top_grid_right_pane_g2

0xf1a5,	// (0x000231da) vkb2_top_grid_right_pane_g3_ParamLimits

0xf1a5,	// (0x000231da) vkb2_top_grid_right_pane_g3

0x95e2,	// (0x0001d617) vkb2_top_grid_right_pane_g4_ParamLimits

0x95e2,	// (0x0001d617) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x00023de5) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x00023de5) vkb2_top_grid_right_pane_g

0xf1bd,	// (0x000231f2) vkb2_top_cell_left_pane_g1

0xf1d4,	// (0x00023209) vkb2_cell_keypad_pane_g1_ParamLimits

0xf1d4,	// (0x00023209) vkb2_cell_keypad_pane_g1

0x68f0,	// (0x0001a925) vkb2_cell_keypad_pane_t1_ParamLimits

0x68f0,	// (0x0001a925) vkb2_cell_keypad_pane_t1

0xf1e2,	// (0x00023217) vkb2_cell_bottom_grid_pane_ParamLimits

0xf1e2,	// (0x00023217) vkb2_cell_bottom_grid_pane

0xf21b,	// (0x00023250) vkb2_cell_bottom_grid_pane_g1

0xc537,	// (0x0002056c) aid_call2_pane_cp02

0xc53f,	// (0x00020574) aid_call_pane_cp02

0xc547,	// (0x0002057c) clock_digital_number_pane_cp10

0xc54f,	// (0x00020584) clock_digital_number_pane_cp11

0xc557,	// (0x0002058c) clock_digital_number_pane_cp12

0xc55f,	// (0x00020594) clock_digital_number_pane_cp13

0xc567,	// (0x0002059c) clock_digital_separator_pane_cp10

0xe133,	// (0x00022168) popup_clock_digital_analogue_window_cp2_g1

0xe133,	// (0x00022168) popup_clock_digital_analogue_window_cp2_g2

0xc56f,	// (0x000205a4) popup_clock_digital_analogue_window_cp2_g3

0xe133,	// (0x00022168) popup_clock_digital_analogue_window_cp2_g4

0xc56f,	// (0x000205a4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00023d9a) popup_clock_digital_analogue_window_cp2_g

0xc577,	// (0x000205ac) popup_clock_digital_analogue_window_cp2_t1

0xc585,	// (0x000205ba) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x00023da5) popup_clock_digital_analogue_window_cp2_t

0x45d6,	// (0x0001860b) clock_digital_number_pane_cp10_g1

0x45d6,	// (0x0001860b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00023b81) clock_digital_number_pane_cp10_g

0x45d6,	// (0x0001860b) clock_digital_separator_pane_cp10_g1

0x45d6,	// (0x0001860b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00023b81) clock_digital_separator_pane_cp10_g

0x6323,	// (0x0001a358) uniindi_top_pane_g3

0x6334,	// (0x0001a369) uniindi_top_pane_g4

0xf102,	// (0x00023137) vkb2_row_keypad_pane_ParamLimits

0xf102,	// (0x00023137) vkb2_row_keypad_pane

0xf237,	// (0x0002326c) vkb2_cell_t_keypad_pane_ParamLimits

0xf237,	// (0x0002326c) vkb2_cell_t_keypad_pane

0xf247,	// (0x0002327c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf247,	// (0x0002327c) vkb2_cell_t_keypad_pane_cp08

0xf25c,	// (0x00023291) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf25c,	// (0x00023291) vkb2_cell_t_keypad_pane_cp09

0xf270,	// (0x000232a5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf270,	// (0x000232a5) vkb2_cell_t_keypad_pane_cp01

0xf281,	// (0x000232b6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf281,	// (0x000232b6) vkb2_cell_t_keypad_pane_cp02

0xf292,	// (0x000232c7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf292,	// (0x000232c7) vkb2_cell_t_keypad_pane_cp03

0xf2a3,	// (0x000232d8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf2a3,	// (0x000232d8) vkb2_cell_t_keypad_pane_cp04

0xf2b4,	// (0x000232e9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf2b4,	// (0x000232e9) vkb2_cell_t_keypad_pane_cp05

0xf2c5,	// (0x000232fa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf2c5,	// (0x000232fa) vkb2_cell_t_keypad_pane_cp06

0xf2d8,	// (0x0002330d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf2d8,	// (0x0002330d) vkb2_cell_t_keypad_pane_cp07

0xf2ed,	// (0x00023322) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf2ed,	// (0x00023322) vkb2_cell_t_keypad_pane_cp10

0xee00,	// (0x00022e35) vkb2_cell_t_keypad_pane_g1

0x6907,	// (0x0001a93c) vkb2_cell_t_keypad_pane_t1

0xe1bc,	// (0x000221f1) popup_grid_graphic2_window

0xc8b1,	// (0x000208e6) aid_size_cell_graphic2_ParamLimits

0xc8b1,	// (0x000208e6) aid_size_cell_graphic2

0xc8ef,	// (0x00020924) bg_popup_window_pane_cp21_ParamLimits

0xc8ef,	// (0x00020924) bg_popup_window_pane_cp21

0xc8fd,	// (0x00020932) graphic2_pages_pane_ParamLimits

0xc8fd,	// (0x00020932) graphic2_pages_pane

0xc955,	// (0x0002098a) grid_graphic2_control_pane_ParamLimits

0xc955,	// (0x0002098a) grid_graphic2_control_pane

0xc99d,	// (0x000209d2) grid_graphic2_pane_ParamLimits

0xc99d,	// (0x000209d2) grid_graphic2_pane

0xca28,	// (0x00020a5d) cell_graphic2_pane

0xb9c1,	// (0x0001f9f6) main_comp_mode_pane

0x5b31,	// (0x00019b66) list_ai3_gene_pane_ParamLimits

0xc274,	// (0x000202a9) bg_popup_window_pane_cp19_ParamLimits

0x5f68,	// (0x00019f9d) bg_touch_area_indi_pane_ParamLimits

0x5f68,	// (0x00019f9d) bg_touch_area_indi_pane

0x5f7e,	// (0x00019fb3) bg_touch_area_indi_pane_cp01_ParamLimits

0x5f7e,	// (0x00019fb3) bg_touch_area_indi_pane_cp01

0x5f96,	// (0x00019fcb) bg_touch_area_indi_pane_cp02_ParamLimits

0x5f96,	// (0x00019fcb) bg_touch_area_indi_pane_cp02

0x5fb0,	// (0x00019fe5) bg_touch_area_indi_pane_cp03_ParamLimits

0x5fb0,	// (0x00019fe5) bg_touch_area_indi_pane_cp03

0x5fca,	// (0x00019fff) popup_slider_window_g1_ParamLimits

0x5fe6,	// (0x0001a01b) popup_slider_window_g2_ParamLimits

0x6002,	// (0x0001a037) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00023d2f) popup_slider_window_g_ParamLimits

0x605e,	// (0x0001a093) popup_slider_window_t1_ParamLimits

0x60d2,	// (0x0001a107) small_volume_slider_vertical_pane_ParamLimits

0xca28,	// (0x00020a5d) cell_graphic2_pane_ParamLimits

0xca8b,	// (0x00020ac0) bg_button_pane_cp10_ParamLimits

0xca8b,	// (0x00020ac0) bg_button_pane_cp10

0xca9e,	// (0x00020ad3) bg_button_pane_cp11_ParamLimits

0xca9e,	// (0x00020ad3) bg_button_pane_cp11

0xcab1,	// (0x00020ae6) graphic2_pages_pane_g1_ParamLimits

0xcab1,	// (0x00020ae6) graphic2_pages_pane_g1

0xcacc,	// (0x00020b01) graphic2_pages_pane_g2_ParamLimits

0xcacc,	// (0x00020b01) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x00023df3) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x00023df3) graphic2_pages_pane_g

0xcae4,	// (0x00020b19) graphic2_pages_pane_t1_ParamLimits

0xcae4,	// (0x00020b19) graphic2_pages_pane_t1

0xcafc,	// (0x00020b31) cell_graphic2_control_pane_ParamLimits

0xcafc,	// (0x00020b31) cell_graphic2_control_pane

0xcb30,	// (0x00020b65) cell_graphic2_pane_g1_ParamLimits

0xcb30,	// (0x00020b65) cell_graphic2_pane_g1

0xb99f,	// (0x0001f9d4) cell_graphic2_pane_g2_ParamLimits

0xb99f,	// (0x0001f9d4) cell_graphic2_pane_g2

0xba3d,	// (0x0001fa72) cell_graphic2_pane_g3_ParamLimits

0xba3d,	// (0x0001fa72) cell_graphic2_pane_g3

0xb9ac,	// (0x0001f9e1) cell_graphic2_pane_g4_ParamLimits

0xb9ac,	// (0x0001f9e1) cell_graphic2_pane_g4

0xcb3d,	// (0x00020b72) cell_graphic2_pane_g5_ParamLimits

0xcb3d,	// (0x00020b72) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00023df8) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00023df8) cell_graphic2_pane_g

0xcb5d,	// (0x00020b92) cell_graphic2_pane_t1_ParamLimits

0xcb5d,	// (0x00020b92) cell_graphic2_pane_t1

0x28b9,	// (0x000168ee) grid_highlight_pane_cp11_ParamLimits

0x28b9,	// (0x000168ee) grid_highlight_pane_cp11

0xd64c,	// (0x00021681) bg_button_pane_cp05

0xcb92,	// (0x00020bc7) cell_graphic2_control_pane_g1

0x45d6,	// (0x0001860b) bg_touch_area_indi_pane_g1

0x6be1,	// (0x0001ac16) aid_cmod_rocker_key_size

0x6beb,	// (0x0001ac20) aid_cmode_itu_key_size

0x6bf5,	// (0x0001ac2a) main_cmode_video_pane

0x6bff,	// (0x0001ac34) main_comp_mode_itu_pane

0x6c0b,	// (0x0001ac40) main_comp_mode_rocker_pane

0x6c17,	// (0x0001ac4c) cell_cmode_rocker_pane_ParamLimits

0x6c17,	// (0x0001ac4c) cell_cmode_rocker_pane

0x6c2b,	// (0x0001ac60) cell_cmode_itu_pane_ParamLimits

0x6c2b,	// (0x0001ac60) cell_cmode_itu_pane

0xdbb4,	// (0x00021be9) bg_button_pane_cp06_ParamLimits

0xdbb4,	// (0x00021be9) bg_button_pane_cp06

0x4851,	// (0x00018886) cell_cmode_rocker_pane_g1_ParamLimits

0x4851,	// (0x00018886) cell_cmode_rocker_pane_g1

0x6179,	// (0x0001a1ae) cell_cmode_rocker_pane_g2_ParamLimits

0x6179,	// (0x0001a1ae) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00023e08) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00023e08) cell_cmode_rocker_pane_g

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp07

0x6c42,	// (0x0001ac77) cell_cmode_itu_pane_g1

0x6c4b,	// (0x0001ac80) cell_cmode_itu_pane_t1

0x6c59,	// (0x0001ac8e) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x00023e0d) cell_cmode_itu_pane_t

0x63a7,	// (0x0001a3dc) aid_touch_ctrl_left

0x63af,	// (0x0001a3e4) aid_touch_ctrl_right

0xb9c1,	// (0x0001f9f6) compa_mode_pane

0xcbb8,	// (0x00020bed) aid_cmod_rocker_key_size_cp

0xcbc2,	// (0x00020bf7) aid_cmode_itu_key_size_cp

0x6c7b,	// (0x0001acb0) compa_mode_pane_g1

0x6c83,	// (0x0001acb8) compa_mode_pane_g2

0x6c8b,	// (0x0001acc0) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x00023e12) compa_mode_pane_g

0xcbcc,	// (0x00020c01) main_comp_mode_itu_pane_cp

0xcbd4,	// (0x00020c09) main_comp_mode_rocker_pane_cp

0xcbdc,	// (0x00020c11) cell_cmode_itu_pane_cp_ParamLimits

0xcbdc,	// (0x00020c11) cell_cmode_itu_pane_cp

0xcbf1,	// (0x00020c26) cell_cmode_rocker_pane_cp_ParamLimits

0xcbf1,	// (0x00020c26) cell_cmode_rocker_pane_cp

0xdbb4,	// (0x00021be9) bg_button_pane_cp06_cp_ParamLimits

0xdbb4,	// (0x00021be9) bg_button_pane_cp06_cp

0x4851,	// (0x00018886) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4851,	// (0x00018886) cell_cmode_rocker_pane_g1_cp

0x45d6,	// (0x0001860b) cell_cmode_rocker_pane_g2_cp

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp07_cp

0xcc03,	// (0x00020c38) cell_cmode_itu_pane_g1_cp

0xcc0c,	// (0x00020c41) cell_cmode_itu_pane_t1_cp

0xcc0c,	// (0x00020c41) cell_cmode_itu_pane_t2_cp

0xb592,	// (0x0001f5c7) settings_code_pane_cp2

0xd4ff,	// (0x00021534) bg_popup_window_pane_cp3_ParamLimits

0xd83a,	// (0x0002186f) heading_pane_cp3_ParamLimits

0xd846,	// (0x0002187b) listscroll_popup_graphic_pane_ParamLimits

0xec0e,	// (0x00022c43) fep_hwr_aid_pane_ParamLimits

0xeffb,	// (0x00023030) aid_touch_sctrl_top_ParamLimits

0xf016,	// (0x0002304b) sctrl_sk_top_pane_g1_ParamLimits

0xee00,	// (0x00022e35) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x00023d48) sctrl_sk_top_pane_g_ParamLimits

0xf023,	// (0x00023058) sctrl_sk_top_pane_t1_ParamLimits

0xeffb,	// (0x00023030) aid_touch_sctrl_bottom_ParamLimits

0xf023,	// (0x00023058) sctrl_sk_bottom_pane_t1_ParamLimits

0x62ed,	// (0x0001a322) aid_area_touch_clock

0x9410,	// (0x0001d445) aid_vkb2_area_top_pane_cell_ParamLimits

0x9410,	// (0x0001d445) aid_vkb2_area_top_pane_cell

0x94bb,	// (0x0001d4f0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x94bb,	// (0x0001d4f0) aid_vkb2_area_bottom_pane_cell

0x6852,	// (0x0001a887) popup_char_count_window

0x6ce1,	// (0x0001ad16) popup_char_count_window_g1

0x6cea,	// (0x0001ad1f) popup_char_count_window_g2

0x6cf3,	// (0x0001ad28) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00023e19) popup_char_count_window_g

0x6cfc,	// (0x0001ad31) popup_char_count_window_t1

0xf055,	// (0x0002308a) popup_fep_char_preview_window_ParamLimits

0xf055,	// (0x0002308a) popup_fep_char_preview_window

0x9430,	// (0x0001d465) vkb2_top_candi_pane_ParamLimits

0x9430,	// (0x0001d465) vkb2_top_candi_pane

0xcc1a,	// (0x00020c4f) cell_vkb2_top_candi_pane_ParamLimits

0xcc1a,	// (0x00020c4f) cell_vkb2_top_candi_pane

0xf302,	// (0x00023337) bg_popup_fep_char_preview_window_ParamLimits

0xf302,	// (0x00023337) bg_popup_fep_char_preview_window

0xf310,	// (0x00023345) popup_fep_char_preview_window_t1_ParamLimits

0xf310,	// (0x00023345) popup_fep_char_preview_window_t1

0x6d5b,	// (0x0001ad90) bg_popup_fep_char_preview_window_g1

0x6d63,	// (0x0001ad98) bg_popup_fep_char_preview_window_g2

0x6d6b,	// (0x0001ada0) bg_popup_fep_char_preview_window_g3

0x6d73,	// (0x0001ada8) bg_popup_fep_char_preview_window_g4

0x6d7b,	// (0x0001adb0) bg_popup_fep_char_preview_window_g5

0xf34a,	// (0x0002337f) bg_popup_fep_char_preview_window_g6

0x6d83,	// (0x0001adb8) bg_popup_fep_char_preview_window_g7

0x6d8b,	// (0x0001adc0) bg_popup_fep_char_preview_window_g8

0x6d93,	// (0x0001adc8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x00023e20) bg_popup_fep_char_preview_window_g

0xee00,	// (0x00022e35) cell_vkb2_top_candi_pane_g1_ParamLimits

0xee00,	// (0x00022e35) cell_vkb2_top_candi_pane_g1

0xee0e,	// (0x00022e43) cell_vkb2_top_candi_pane_g2_ParamLimits

0xee0e,	// (0x00022e43) cell_vkb2_top_candi_pane_g2

0x4f6c,	// (0x00018fa1) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4f6c,	// (0x00018fa1) cell_vkb2_top_candi_pane_g3

0xf352,	// (0x00023387) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf352,	// (0x00023387) cell_vkb2_top_candi_pane_g4

0x4f09,	// (0x00018f3e) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4f09,	// (0x00018f3e) cell_vkb2_top_candi_pane_g5

0xf132,	// (0x00023167) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf132,	// (0x00023167) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x00023e33) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x00023e33) cell_vkb2_top_candi_pane_g

0xf373,	// (0x000233a8) cell_vkb2_top_candi_pane_t1

0xea1d,	// (0x00022a52) aid_size_touch_slider_mark_ParamLimits

0xea1d,	// (0x00022a52) aid_size_touch_slider_mark

0xc939,	// (0x0002096e) grid_graphic2_catg_pane_ParamLimits

0xc939,	// (0x0002096e) grid_graphic2_catg_pane

0xc9f7,	// (0x00020a2c) popup_grid_graphic2_window_t1_ParamLimits

0xc9f7,	// (0x00020a2c) popup_grid_graphic2_window_t1

0xca0d,	// (0x00020a42) popup_grid_graphic2_window_t2_ParamLimits

0xca0d,	// (0x00020a42) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x00023dee) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x00023dee) popup_grid_graphic2_window_t

0xd64c,	// (0x00021681) bg_button_pane_cp05_ParamLimits

0xcb92,	// (0x00020bc7) cell_graphic2_control_pane_g1_ParamLimits

0xcc84,	// (0x00020cb9) cell_graphic2_catg_pane_ParamLimits

0xcc84,	// (0x00020cb9) cell_graphic2_catg_pane

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp12

0xcc96,	// (0x00020ccb) cell_graphic2_catg_pane_g1

0x62b9,	// (0x0001a2ee) cell_tb_ext_pane_t1_ParamLimits

0xf160,	// (0x00023195) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf160,	// (0x00023195) vkb2_top_cell_right_narrow_pane

0xf178,	// (0x000231ad) vkb2_top_cell_right_wide_pane_ParamLimits

0xf178,	// (0x000231ad) vkb2_top_cell_right_wide_pane

0xec00,	// (0x00022c35) bg_vkb2_func_pane_ParamLimits

0xec00,	// (0x00022c35) bg_vkb2_func_pane

0xf1bd,	// (0x000231f2) vkb2_top_cell_left_pane_g1_ParamLimits

0xec00,	// (0x00022c35) bg_vkb2_fuc_pane_cp03_ParamLimits

0xec00,	// (0x00022c35) bg_vkb2_fuc_pane_cp03

0xf21b,	// (0x00023250) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1b19,	// (0x00015b4e) bg_vkb2_func_pane_g1

0x1b21,	// (0x00015b56) bg_vkb2_func_pane_g2

0x1b31,	// (0x00015b66) bg_vkb2_func_pane_g3

0x1b29,	// (0x00015b5e) bg_vkb2_func_pane_g4

0x1b39,	// (0x00015b6e) bg_vkb2_func_pane_g5

0x1b41,	// (0x00015b76) bg_vkb2_func_pane_g6

0x1b49,	// (0x00015b7e) bg_vkb2_func_pane_g7

0x1b51,	// (0x00015b86) bg_vkb2_func_pane_g8

0x1b11,	// (0x00015b46) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x00023e40) bg_vkb2_func_pane_g

0xec00,	// (0x00022c35) bg_vkb2_fuc_pane_cp01_ParamLimits

0xec00,	// (0x00022c35) bg_vkb2_fuc_pane_cp01

0xf1bd,	// (0x000231f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf1bd,	// (0x000231f2) vkb2_top_cell_right_wide_pane_g1

0xec00,	// (0x00022c35) bg_vkb2_fuc_pane_cp02_ParamLimits

0xec00,	// (0x00022c35) bg_vkb2_fuc_pane_cp02

0xf21b,	// (0x00023250) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf21b,	// (0x00023250) vkb2_top_cell_right_narrow_pane_g1

0xc1ae,	// (0x000201e3) aid_touch_area_decrease_ParamLimits

0xc1ae,	// (0x000201e3) aid_touch_area_decrease

0xc1e8,	// (0x0002021d) aid_touch_area_increase_ParamLimits

0xc1e8,	// (0x0002021d) aid_touch_area_increase

0xc210,	// (0x00020245) aid_touch_area_mute_ParamLimits

0xc210,	// (0x00020245) aid_touch_area_mute

0xc240,	// (0x00020275) aid_touch_area_slider_ParamLimits

0xc240,	// (0x00020275) aid_touch_area_slider

0xc280,	// (0x000202b5) popup_slider_window_g4_ParamLimits

0xc280,	// (0x000202b5) popup_slider_window_g4

0xc2a8,	// (0x000202dd) popup_slider_window_g5_ParamLimits

0xc2a8,	// (0x000202dd) popup_slider_window_g5

0xc2dc,	// (0x00020311) popup_slider_window_g6_ParamLimits

0xc2dc,	// (0x00020311) popup_slider_window_g6

0x608c,	// (0x0001a0c1) popup_slider_window_t2_ParamLimits

0x608c,	// (0x0001a0c1) popup_slider_window_t2

0x0001,

0xfd07,	// (0x00023d3c) popup_slider_window_t_ParamLimits

0xfd07,	// (0x00023d3c) popup_slider_window_t

0xc2f8,	// (0x0002032d) slider_pane_ParamLimits

0xc2f8,	// (0x0002032d) slider_pane

0x6db6,	// (0x0001adeb) slider_pane_g1_ParamLimits

0x6db6,	// (0x0001adeb) slider_pane_g1

0x6dca,	// (0x0001adff) slider_pane_g2_ParamLimits

0x6dca,	// (0x0001adff) slider_pane_g2

0x6de0,	// (0x0001ae15) slider_pane_g3_ParamLimits

0x6de0,	// (0x0001ae15) slider_pane_g3

0x0003,

0xfe1e,	// (0x00023e53) slider_pane_g_ParamLimits

0xfe1e,	// (0x00023e53) slider_pane_g

0xabf7,	// (0x0001ec2c) popup_tb_float_extension_window_ParamLimits

0xabf7,	// (0x0001ec2c) popup_tb_float_extension_window

0x6e0c,	// (0x0001ae41) aid_size_cell_tb_float_ext

0xb9c1,	// (0x0001f9f6) bg_popup_sub_window_cp28

0x6e18,	// (0x0001ae4d) grid_tb_float_ext_pane

0x6e24,	// (0x0001ae59) cell_tb_float_ext_pane_ParamLimits

0x6e24,	// (0x0001ae59) cell_tb_float_ext_pane

0x6e40,	// (0x0001ae75) cell_tb_float_ext_pane_g1

0x6e49,	// (0x0001ae7e) grid_highlight_pane_cp12

0x9209,	// (0x0001d23e) cell_last_hwr_side_pane_ParamLimits

0x9209,	// (0x0001d23e) cell_last_hwr_side_pane

0x45d6,	// (0x0001860b) cell_last_hwr_side_pane_g1

0x6e52,	// (0x0001ae87) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x00023e5c) cell_last_hwr_side_pane_g

0x9597,	// (0x0001d5cc) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9597,	// (0x0001d5cc) vkb2_area_bottom_space_btn_pane

0xee00,	// (0x00022e35) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6907,	// (0x0001a93c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf373,	// (0x000233a8) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf391,	// (0x000233c6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf391,	// (0x000233c6) vkb2_area_bottom_space_btn_pane_g1

0xf3cb,	// (0x00023400) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf3cb,	// (0x00023400) vkb2_area_bottom_space_btn_pane_g2

0xf401,	// (0x00023436) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf401,	// (0x00023436) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x00023e61) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x00023e61) vkb2_area_bottom_space_btn_pane_g

0xecc5,	// (0x00022cfa) cel_fep_hwr_func_pane_ParamLimits

0xecc5,	// (0x00022cfa) cel_fep_hwr_func_pane

0x91de,	// (0x0001d213) cell_hwr_side_button_pane_ParamLimits

0x91de,	// (0x0001d213) cell_hwr_side_button_pane

0x62ed,	// (0x0001a322) aid_area_touch_clock_ParamLimits

0xd64c,	// (0x00021681) bg_uniindi_top_pane_ParamLimits

0x6301,	// (0x0001a336) uniindi_top_pane_g1_ParamLimits

0x6317,	// (0x0001a34c) uniindi_top_pane_g2_ParamLimits

0x6323,	// (0x0001a358) uniindi_top_pane_g3_ParamLimits

0x6334,	// (0x0001a369) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x00023d74) uniindi_top_pane_g_ParamLimits

0x6341,	// (0x0001a376) uniindi_top_pane_t1_ParamLimits

0xd64c,	// (0x00021681) bg_vkb2_func_pane_cp01_ParamLimits

0xd64c,	// (0x00021681) bg_vkb2_func_pane_cp01

0x6e5b,	// (0x0001ae90) cel_fep_hwr_func_pane_g1_ParamLimits

0x6e5b,	// (0x0001ae90) cel_fep_hwr_func_pane_g1

0xd64c,	// (0x00021681) bg_vkb2_func_pane_cp02_ParamLimits

0xd64c,	// (0x00021681) bg_vkb2_func_pane_cp02

0x6e5b,	// (0x0001ae90) cell_hwr_side_button_pane_g1_ParamLimits

0x6e5b,	// (0x0001ae90) cell_hwr_side_button_pane_g1

0x1964,	// (0x00015999) status_pane_g4_ParamLimits

0x1964,	// (0x00015999) status_pane_g4

0x197e,	// (0x000159b3) status_pane_t1

0x4375,	// (0x000183aa) form2_midp_gauge_slider_cont_pane

0x437d,	// (0x000183b2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb8d7,	// (0x0001f90c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb8e9,	// (0x0001f91e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00023b34) form2_midp_gauge_slider_pane_t_ParamLimits

0x43b3,	// (0x000183e8) form2_midp_slider_pane_ParamLimits

0xf047,	// (0x0002307c) aid_size_cell_func_vkb2_ParamLimits

0xf047,	// (0x0002307c) aid_size_cell_func_vkb2

0x6df8,	// (0x0001ae2d) slider_pane_g4_ParamLimits

0x6df8,	// (0x0001ae2d) slider_pane_g4

0x95f8,	// (0x0001d62d) form2_midp_gauge_slider_pane_t2_cp01

0x9606,	// (0x0001d63b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9606,	// (0x0001d63b) form2_midp_gauge_slider_pane_t3_cp01

0xf44b,	// (0x00023480) form2_midp_slider_pane_cp01

0xb9c1,	// (0x0001f9f6) navi_smil_pane

0x6e94,	// (0x0001aec9) navi_smil_pane_g1

0x6e9c,	// (0x0001aed1) navi_smil_pane_t1

0x6e69,	// (0x0001ae9e) form2_midp_slider_pane_g1

0x6e72,	// (0x0001aea7) form2_midp_slider_pane_g2

0x6e7a,	// (0x0001aeaf) form2_midp_slider_pane_g3

0x6e69,	// (0x0001ae9e) form2_midp_slider_pane_g4

0xcc9f,	// (0x00020cd4) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x00023e6a) form2_midp_slider_pane_g

0xf43b,	// (0x00023470) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf43b,	// (0x00023470) vkb2_area_bottom_space_btn_pane_g4

0xadde,	// (0x0001ee13) lc0_navi_pane_ParamLimits

0xadde,	// (0x0001ee13) lc0_navi_pane

0xae4e,	// (0x0001ee83) lc0_stat_indi_pane_ParamLimits

0xae4e,	// (0x0001ee83) lc0_stat_indi_pane

0xae63,	// (0x0001ee98) ls0_title_pane_ParamLimits

0xae63,	// (0x0001ee98) ls0_title_pane

0xdbb4,	// (0x00021be9) bg_popup_sub_pane_cp14_ParamLimits

0x62d4,	// (0x0001a309) list_uniindi_pane_ParamLimits

0x62e0,	// (0x0001a315) uniindi_top_pane_ParamLimits

0x637f,	// (0x0001a3b4) list_single_uniindi_pane_g1_ParamLimits

0x6392,	// (0x0001a3c7) list_single_uniindi_pane_t1_ParamLimits

0x9623,	// (0x0001d658) lc0_stat_clock_pane_ParamLimits

0x9623,	// (0x0001d658) lc0_stat_clock_pane

0xcca8,	// (0x00020cdd) lc0_stat_indi_pane_g1_ParamLimits

0xcca8,	// (0x00020cdd) lc0_stat_indi_pane_g1

0xccb5,	// (0x00020cea) lc0_stat_indi_pane_g2_ParamLimits

0xccb5,	// (0x00020cea) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x00023e75) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x00023e75) lc0_stat_indi_pane_g

0x9630,	// (0x0001d665) lc0_uni_indicator_pane_ParamLimits

0x9630,	// (0x0001d665) lc0_uni_indicator_pane

0xccc2,	// (0x00020cf7) ls0_title_pane_g1_ParamLimits

0xccc2,	// (0x00020cf7) ls0_title_pane_g1

0xccd6,	// (0x00020d0b) ls0_title_pane_t1_ParamLimits

0xccd6,	// (0x00020d0b) ls0_title_pane_t1

0x963d,	// (0x0001d672) lc0_uni_indicator_pane_g1_ParamLimits

0x963d,	// (0x0001d672) lc0_uni_indicator_pane_g1

0x6f0e,	// (0x0001af43) lc0_stat_clock_pane_t1

0xb9c1,	// (0x0001f9f6) main_ai5_pane

0x6f1c,	// (0x0001af51) ai5_sk_pane_ParamLimits

0x6f1c,	// (0x0001af51) ai5_sk_pane

0xcd04,	// (0x00020d39) cell_ai5_widget_pane_ParamLimits

0xcd04,	// (0x00020d39) cell_ai5_widget_pane

0x74c5,	// (0x0001b4fa) aid_size_cell_widget_grid

0x74db,	// (0x0001b510) bg_ai5_widget_pane_ParamLimits

0x74db,	// (0x0001b510) bg_ai5_widget_pane

0x7545,	// (0x0001b57a) cell_ai5_widget_pane_g2

0x7555,	// (0x0001b58a) cell_ai5_widget_pane_g3

0x7574,	// (0x0001b5a9) cell_ai5_widget_pane_g4

0x7580,	// (0x0001b5b5) cell_ai5_widget_pane_g5

0xd05b,	// (0x00021090) cell_ai5_widget_pane_g6

0xd067,	// (0x0002109c) cell_ai5_widget_pane_g7

0x75e0,	// (0x0001b615) cell_ai5_widget_pane_t1_ParamLimits

0x75e0,	// (0x0001b615) cell_ai5_widget_pane_t1

0x75fd,	// (0x0001b632) cell_ai5_widget_pane_t2_ParamLimits

0x75fd,	// (0x0001b632) cell_ai5_widget_pane_t2

0x7615,	// (0x0001b64a) cell_ai5_widget_pane_t3_ParamLimits

0x7615,	// (0x0001b64a) cell_ai5_widget_pane_t3

0x762d,	// (0x0001b662) cell_ai5_widget_pane_t4_ParamLimits

0x762d,	// (0x0001b662) cell_ai5_widget_pane_t4

0x7647,	// (0x0001b67c) cell_ai5_widget_pane_t5_ParamLimits

0x7647,	// (0x0001b67c) cell_ai5_widget_pane_t5

0x7666,	// (0x0001b69b) cell_ai5_widget_pane_t6_ParamLimits

0x7666,	// (0x0001b69b) cell_ai5_widget_pane_t6

0x7678,	// (0x0001b6ad) cell_ai5_widget_pane_t7_ParamLimits

0x7678,	// (0x0001b6ad) cell_ai5_widget_pane_t7

0x7691,	// (0x0001b6c6) cell_ai5_widget_pane_t8_ParamLimits

0x7691,	// (0x0001b6c6) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x00023e8f) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x00023e8f) cell_ai5_widget_pane_t

0x76dd,	// (0x0001b712) grid_ai5_widget_pane

0xdbb4,	// (0x00021be9) highlight_cell_ai5_widget_pane_ParamLimits

0xdbb4,	// (0x00021be9) highlight_cell_ai5_widget_pane

0xd073,	// (0x000210a8) ai5_sk_left_pane

0xd07d,	// (0x000210b2) ai5_sk_middle_pane

0xd087,	// (0x000210bc) ai5_sk_right_pane

0x7713,	// (0x0001b748) bg_ai5_widget_pane_g1_ParamLimits

0x7713,	// (0x0001b748) bg_ai5_widget_pane_g1

0x771f,	// (0x0001b754) bg_ai5_widget_pane_g2_ParamLimits

0x771f,	// (0x0001b754) bg_ai5_widget_pane_g2

0x772b,	// (0x0001b760) bg_ai5_widget_pane_g3_ParamLimits

0x772b,	// (0x0001b760) bg_ai5_widget_pane_g3

0x7737,	// (0x0001b76c) bg_ai5_widget_pane_g4_ParamLimits

0x7737,	// (0x0001b76c) bg_ai5_widget_pane_g4

0x7743,	// (0x0001b778) bg_ai5_widget_pane_g5_ParamLimits

0x7743,	// (0x0001b778) bg_ai5_widget_pane_g5

0x774f,	// (0x0001b784) bg_ai5_widget_pane_g6_ParamLimits

0x774f,	// (0x0001b784) bg_ai5_widget_pane_g6

0x775b,	// (0x0001b790) bg_ai5_widget_pane_g7_ParamLimits

0x775b,	// (0x0001b790) bg_ai5_widget_pane_g7

0x7767,	// (0x0001b79c) bg_ai5_widget_pane_g8_ParamLimits

0x7767,	// (0x0001b79c) bg_ai5_widget_pane_g8

0x7773,	// (0x0001b7a8) bg_ai5_widget_pane_g9_ParamLimits

0x7773,	// (0x0001b7a8) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x00023ea4) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x00023ea4) bg_ai5_widget_pane_g

0x77ac,	// (0x0001b7e1) cell_shortcut_ai5_widget_pane_ParamLimits

0x77ac,	// (0x0001b7e1) cell_shortcut_ai5_widget_pane

0x0c18,	// (0x00014c4d) bg_cell_shortcut_ai5_widget_pane

0x77bf,	// (0x0001b7f4) cell_grid_ai5_widget_pane_g1

0x77c8,	// (0x0001b7fd) highlight_cell_shortcut_ai5_widget_pane

0x1b19,	// (0x00015b4e) ai5_sk_left_pane_g1

0x77d0,	// (0x0001b805) ai5_sk_left_pane_g2

0x77d8,	// (0x0001b80d) ai5_sk_left_pane_g3

0x77e0,	// (0x0001b815) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x00023eb7) ai5_sk_left_pane_g

0x77e8,	// (0x0001b81d) ai5_sk_left_pane_t1

0x1b21,	// (0x00015b56) ai5_sk_right_pane_g1

0x77f6,	// (0x0001b82b) ai5_sk_right_pane_g2

0x77fe,	// (0x0001b833) ai5_sk_right_pane_g3

0x7806,	// (0x0001b83b) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x00023ec0) ai5_sk_right_pane_g

0x780e,	// (0x0001b843) ai5_sk_right_pane_t1

0x1b21,	// (0x00015b56) ai5_sk_middle_pane_g1

0x1b19,	// (0x00015b4e) ai5_sk_middle_pane_g2

0x1b39,	// (0x00015b6e) ai5_sk_middle_pane_g3

0x77fe,	// (0x0001b833) ai5_sk_middle_pane_g4

0x77d8,	// (0x0001b80d) ai5_sk_middle_pane_g5

0x781c,	// (0x0001b851) ai5_sk_middle_pane_g6

0xd091,	// (0x000210c6) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x00023ec9) ai5_sk_middle_pane_g

0xacc8,	// (0x0001ecfd) aid_touch_area_size_lc0_ParamLimits

0xacc8,	// (0x0001ecfd) aid_touch_area_size_lc0

0xee2f,	// (0x00022e64) cell_hwr_candidate_pane_t1_ParamLimits

0x161b,	// (0x00015650) aid_touch_navi_pane

0xaf6e,	// (0x0001efa3) status_dt_navi_pane_ParamLimits

0xaf6e,	// (0x0001efa3) status_dt_navi_pane

0xaf86,	// (0x0001efbb) status_dt_sta_pane_ParamLimits

0xaf86,	// (0x0001efbb) status_dt_sta_pane

0xd099,	// (0x000210ce) dt_sta_controll_pane

0xd0a6,	// (0x000210db) dt_sta_indi_pane

0xd0b3,	// (0x000210e8) dt_sta_title_pane

0xd64c,	// (0x00021681) bg_dt_sta_indi_pane_ParamLimits

0xd64c,	// (0x00021681) bg_dt_sta_indi_pane

0xd0c5,	// (0x000210fa) dt_sta_battery_pane

0xd0cd,	// (0x00021102) dt_sta_indi_pane_g1

0xd0d6,	// (0x0002110b) dt_sta_indi_pane_g2

0xd0df,	// (0x00021114) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00023ed8) dt_sta_indi_pane_g

0xd0e8,	// (0x0002111d) dt_sta_signal_pane

0xdbb4,	// (0x00021be9) bg_dt_sta_title_pane_ParamLimits

0xdbb4,	// (0x00021be9) bg_dt_sta_title_pane

0xd0f1,	// (0x00021126) dt_sta_title_pane_g1

0xd0f9,	// (0x0002112e) dt_sta_title_pane_t1_ParamLimits

0xd0f9,	// (0x0002112e) dt_sta_title_pane_t1

0xb9c1,	// (0x0001f9f6) bg_dt_sta_control_pane

0xd10e,	// (0x00021143) dt_sta_controll_pane_g1

0xd117,	// (0x0002114c) bg_dt_sta_title_pane_g1

0xd120,	// (0x00021155) bg_dt_sta_title_pane_g2

0xd129,	// (0x0002115e) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x00023edf) bg_dt_sta_title_pane_g

0x45d6,	// (0x0001860b) bg_dt_sta_indi_pane_g1

0x78ca,	// (0x0001b8ff) dt_sta_signal_pane_g1

0x78d2,	// (0x0001b907) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x00023ee6) dt_sta_signal_pane_g

0x78da,	// (0x0001b90f) dt_sta_battery_pane_g1

0x78e3,	// (0x0001b918) dt_sta_battery_pane_t1

0x45d6,	// (0x0001860b) bg_dt_sta_control_pane_g1

0x068a,	// (0x000146bf) fep_china_uni_eep_pane

0x0692,	// (0x000146c7) fep_china_uni_entry_pane_ParamLimits

0x06a2,	// (0x000146d7) popup_fep_china_uni_window_g1_ParamLimits

0x06b2,	// (0x000146e7) popup_fep_china_uni_window_g2_ParamLimits

0x06b2,	// (0x000146e7) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x00023753) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x00023753) popup_fep_china_uni_window_g

0x78f2,	// (0x0001b927) fep_china_uni_eep_pane_g1

0x78fa,	// (0x0001b92f) fep_china_uni_eep_pane_t1

0x6e8b,	// (0x0001aec0) aid_touch_area_size_smil_player

0x1773,	// (0x000157a8) lc0_clock_pane

0x1972,	// (0x000159a7) status_pane_g5_ParamLimits

0x1972,	// (0x000159a7) status_pane_g5

0xa71d,	// (0x0001e752) popup_keymap_window

0x1930,	// (0x00015965) status_icon_pane

0x7555,	// (0x0001b58a) cell_ai5_widget_pane_g3_ParamLimits

0x7574,	// (0x0001b5a9) cell_ai5_widget_pane_g4_ParamLimits

0x7580,	// (0x0001b5b5) cell_ai5_widget_pane_g5_ParamLimits

0x75a4,	// (0x0001b5d9) cell_ai5_widget_pane_g8_ParamLimits

0x75a4,	// (0x0001b5d9) cell_ai5_widget_pane_g8

0x75b8,	// (0x0001b5ed) cell_ai5_widget_pane_g9_ParamLimits

0x75b8,	// (0x0001b5ed) cell_ai5_widget_pane_g9

0x75cc,	// (0x0001b601) cell_ai5_widget_pane_g10_ParamLimits

0x75cc,	// (0x0001b601) cell_ai5_widget_pane_g10

0x7909,	// (0x0001b93e) status_icon_pane_g1

0xb9c1,	// (0x0001f9f6) bg_popup_sub_pane_cp13

0x7911,	// (0x0001b946) popup_keymap_window_t1

0xa4ff,	// (0x0001e534) control_pane_g6_ParamLimits

0xa4ff,	// (0x0001e534) control_pane_g6

0xa50c,	// (0x0001e541) control_pane_g7_ParamLimits

0xa50c,	// (0x0001e541) control_pane_g7

0xa519,	// (0x0001e54e) control_pane_g8_ParamLimits

0xa519,	// (0x0001e54e) control_pane_g8

0xd099,	// (0x000210ce) dt_sta_controll_pane_ParamLimits

0xd0a6,	// (0x000210db) dt_sta_indi_pane_ParamLimits

0xd0b3,	// (0x000210e8) dt_sta_title_pane_ParamLimits

0xda70,	// (0x00021aa5) aid_size_touch_scroll_bar_cale

0xe299,	// (0x000222ce) popup_discreet_window_ParamLimits

0xe299,	// (0x000222ce) popup_discreet_window

0x8e26,	// (0x0001ce5b) popup_sk_window

0x2242,	// (0x00016277) bg_popup_sub_pane_cp28_ParamLimits

0x2242,	// (0x00016277) bg_popup_sub_pane_cp28

0x791f,	// (0x0001b954) popup_discreet_window_g1_ParamLimits

0x791f,	// (0x0001b954) popup_discreet_window_g1

0x793f,	// (0x0001b974) popup_discreet_window_t1_ParamLimits

0x793f,	// (0x0001b974) popup_discreet_window_t1

0x795d,	// (0x0001b992) popup_discreet_window_t2_ParamLimits

0x795d,	// (0x0001b992) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00023eeb) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00023eeb) popup_discreet_window_t

0xf454,	// (0x00023489) popup_sk_window_g1

0xf45e,	// (0x00023493) popup_sk_window_g2

0x0001,

0xfebd,	// (0x00023ef2) popup_sk_window_g

0xf468,	// (0x0002349d) popup_sk_window_t1

0xf478,	// (0x000234ad) popup_sk_window_t1_copy1

0x7545,	// (0x0001b57a) cell_ai5_widget_pane_g2_ParamLimits

0x76a3,	// (0x0001b6d8) cell_ai5_widget_pane_t9_ParamLimits

0x76a3,	// (0x0001b6d8) cell_ai5_widget_pane_t9

0xb9c1,	// (0x0001f9f6) main_fep_fshwr2_pane

0x965c,	// (0x0001d691) aid_fshwr2_btn_pane

0x966b,	// (0x0001d6a0) aid_fshwr2_syb_pane

0x967d,	// (0x0001d6b2) aid_fshwr2_txt_pane

0x968c,	// (0x0001d6c1) fshwr2_func_candi_pane

0x969d,	// (0x0001d6d2) fshwr2_hwr_syb_pane

0x96b8,	// (0x0001d6ed) fshwr2_icf_pane

0xb9c1,	// (0x0001f9f6) fshwr2_icf_bg_pane

0xd132,	// (0x00021167) fshwr2_icf_pane_t1_ParamLimits

0xd132,	// (0x00021167) fshwr2_icf_pane_t1

0x45d6,	// (0x0001860b) fshwr2_func_candi_pane_g1

0x79c6,	// (0x0001b9fb) fshwr2_func_candi_row_pane_ParamLimits

0x79c6,	// (0x0001b9fb) fshwr2_func_candi_row_pane

0xd14a,	// (0x0002117f) cell_fshwr2_syb_pane_ParamLimits

0xd14a,	// (0x0002117f) cell_fshwr2_syb_pane

0x4851,	// (0x00018886) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4851,	// (0x00018886) fshwr2_hwr_syb_pane_g1

0xb9c1,	// (0x0001f9f6) bg_popup_call_pane_cp01

0x79f1,	// (0x0001ba26) fshwr2_func_candi_cell_pane_ParamLimits

0x79f1,	// (0x0001ba26) fshwr2_func_candi_cell_pane

0x7a23,	// (0x0001ba58) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7a23,	// (0x0001ba58) fshwr2_func_candi_cell_bg_pane

0x7a3d,	// (0x0001ba72) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7a3d,	// (0x0001ba72) fshwr2_func_candi_cell_pane_g1

0x7a5d,	// (0x0001ba92) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7a5d,	// (0x0001ba92) fshwr2_func_candi_cell_pane_t1

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp08

0x0c18,	// (0x00014c4d) cell_fshwr2_syb_bg_pane

0xd163,	// (0x00021198) cell_fshwr2_syb_bg_pane_g1

0xd16b,	// (0x000211a0) cell_fshwr2_syb_bg_pane_t1

0xdbb4,	// (0x00021be9) main_tmo_pane

0xb356,	// (0x0001f38b) uni_indicator_pane_g1_ParamLimits

0xb36b,	// (0x0001f3a0) uni_indicator_pane_g2_ParamLimits

0xb380,	// (0x0001f3b5) uni_indicator_pane_g3_ParamLimits

0xb396,	// (0x0001f3cb) uni_indicator_pane_g4_ParamLimits

0xb396,	// (0x0001f3cb) uni_indicator_pane_g4

0xb3aa,	// (0x0001f3df) uni_indicator_pane_g5_ParamLimits

0xb3aa,	// (0x0001f3df) uni_indicator_pane_g5

0xb3be,	// (0x0001f3f3) uni_indicator_pane_g6_ParamLimits

0xb3be,	// (0x0001f3f3) uni_indicator_pane_g6

0xf91d,	// (0x00023952) uni_indicator_pane_g_ParamLimits

0xc17e,	// (0x000201b3) popup_tmo_note_window_ParamLimits

0xc17e,	// (0x000201b3) popup_tmo_note_window

0xf124,	// (0x00023159) fshwr2_bg_pane

0x7a4e,	// (0x0001ba83) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7a4e,	// (0x0001ba83) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x00023ef7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x00023ef7) fshwr2_func_candi_cell_pane_g

0x45d6,	// (0x0001860b) bg_popup_window_pane_cp01

0x7a87,	// (0x0001babc) bg_popup_window_pane_g1_cp01

0x7a90,	// (0x0001bac5) bg_popup_window_pane_cp22_ParamLimits

0x7a90,	// (0x0001bac5) bg_popup_window_pane_cp22

0x7a9e,	// (0x0001bad3) listscroll_tmo_link_pane_ParamLimits

0x7a9e,	// (0x0001bad3) listscroll_tmo_link_pane

0x7ade,	// (0x0001bb13) popup_tmo_note_window_g1_ParamLimits

0x7ade,	// (0x0001bb13) popup_tmo_note_window_g1

0x7aeb,	// (0x0001bb20) tmo_note_info_pane_ParamLimits

0x7aeb,	// (0x0001bb20) tmo_note_info_pane

0xd17a,	// (0x000211af) list_tmo_note_info_pane_g1_ParamLimits

0xd17a,	// (0x000211af) list_tmo_note_info_pane_g1

0x7b1c,	// (0x0001bb51) list_tmo_note_info_pane_g2_ParamLimits

0x7b1c,	// (0x0001bb51) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00023efc) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00023efc) list_tmo_note_info_pane_g

0x7b38,	// (0x0001bb6d) list_tmo_note_info_text_pane_ParamLimits

0x7b38,	// (0x0001bb6d) list_tmo_note_info_text_pane

0x7bbd,	// (0x0001bbf2) list_tmo_link_pane

0x7bca,	// (0x0001bbff) scroll_pane_cp20

0x7bd7,	// (0x0001bc0c) list_single_tmo_link_pane_ParamLimits

0x7bd7,	// (0x0001bc0c) list_single_tmo_link_pane

0x7be7,	// (0x0001bc1c) list_single_tmo_link_pane_t1

0x7bf5,	// (0x0001bc2a) list_tmo_note_info_text_pane_t1_ParamLimits

0x7bf5,	// (0x0001bc2a) list_tmo_note_info_text_pane_t1

0xa04f,	// (0x0001e084) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa04f,	// (0x0001e084) aid_size_touch_scroll_bar_cp01

0x9f7e,	// (0x0001dfb3) aid_size_touch_slider_marker

0x8e16,	// (0x0001ce4b) popup_settings_window_ParamLimits

0x8e16,	// (0x0001ce4b) popup_settings_window

0x0fc2,	// (0x00014ff7) popup_candi_list_indi_window

0x161b,	// (0x00015650) aid_touch_navi_pane_ParamLimits

0xefcf,	// (0x00023004) rs_clock_indi_pane

0xefd8,	// (0x0002300d) sctrl_sk_bottom_pane_ParamLimits

0xefe9,	// (0x0002301e) sctrl_sk_top_pane_ParamLimits

0xf06f,	// (0x000230a4) popup_fep_tooltip_window

0x74c5,	// (0x0001b4fa) aid_size_cell_widget_grid_ParamLimits

0x7539,	// (0x0001b56e) cell_ai5_widget_pane_g1_ParamLimits

0x7539,	// (0x0001b56e) cell_ai5_widget_pane_g1

0xd05b,	// (0x00021090) cell_ai5_widget_pane_g6_ParamLimits

0xd067,	// (0x0002109c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x00023e7a) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00023e7a) cell_ai5_widget_pane_g

0x76c7,	// (0x0001b6fc) cell_ai5_widget_pane_t10_ParamLimits

0x76c7,	// (0x0001b6fc) cell_ai5_widget_pane_t10

0x76dd,	// (0x0001b712) grid_ai5_widget_pane_ParamLimits

0x777f,	// (0x0001b7b4) cell_contacts_ai5_widget_pane_ParamLimits

0x777f,	// (0x0001b7b4) cell_contacts_ai5_widget_pane

0x7972,	// (0x0001b9a7) popup_discreet_window_t3_ParamLimits

0x7972,	// (0x0001b9a7) popup_discreet_window_t3

0xf486,	// (0x000234bb) popup_fshwr2_char_preview_window_ParamLimits

0xf486,	// (0x000234bb) popup_fshwr2_char_preview_window

0xd191,	// (0x000211c6) tmo_note_info_pane_t1

0xd1a6,	// (0x000211db) tmo_note_info_pane_t2

0xd1bf,	// (0x000211f4) tmo_note_info_pane_t3

0x7b99,	// (0x0001bbce) tmo_note_info_pane_t4

0x7bab,	// (0x0001bbe0) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x00023f01) tmo_note_info_pane_t

0x7bbd,	// (0x0001bbf2) list_tmo_link_pane_ParamLimits

0x7bca,	// (0x0001bbff) scroll_pane_cp20_ParamLimits

0xb9c1,	// (0x0001f9f6) bg_popup_fep_char_preview_window_cp01

0x7c0e,	// (0x0001bc43) popup_fshwr2_char_preview_window_t1

0x7c1c,	// (0x0001bc51) popup_candi_list_indi_window_g1

0x7c25,	// (0x0001bc5a) bg_cell_contacts_ai5_widget_pane

0x7c31,	// (0x0001bc66) cell_contacts_ai5_widget_pane_g1

0x7c44,	// (0x0001bc79) cell_contacts_ai5_widget_pane_g2

0x7c50,	// (0x0001bc85) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00023f0c) cell_contacts_ai5_widget_pane_g

0x7c62,	// (0x0001bc97) cell_contacts_ai5_widget_pane_t1

0xdbb4,	// (0x00021be9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd239,	// (0x0002126e) settings_container_pane

0x0c18,	// (0x00014c4d) listscroll_set_pane_copy1

0x3a32,	// (0x00017a67) scroll_pane_cp121_copy1

0x7ce8,	// (0x0001bd1d) set_content_pane_copy1

0xd245,	// (0x0002127a) aid_height_set_list_copy1_ParamLimits

0xd245,	// (0x0002127a) aid_height_set_list_copy1

0x2ff7,	// (0x0001702c) aid_size_parent_copy1_ParamLimits

0x2ff7,	// (0x0001702c) aid_size_parent_copy1

0xd251,	// (0x00021286) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd251,	// (0x00021286) button_value_adjust_pane_cp6_copy1

0x0f9a,	// (0x00014fcf) list_highlight_pane_cp2_copy1_ParamLimits

0x0f9a,	// (0x00014fcf) list_highlight_pane_cp2_copy1

0xd265,	// (0x0002129a) list_set_pane_copy1_ParamLimits

0xd265,	// (0x0002129a) list_set_pane_copy1

0xd1d4,	// (0x00021209) main_pane_set_t1_copy1_ParamLimits

0xd1d4,	// (0x00021209) main_pane_set_t1_copy1

0xd20e,	// (0x00021243) main_pane_set_t2_copy1_ParamLimits

0xd20e,	// (0x00021243) main_pane_set_t2_copy1

0xd32c,	// (0x00021361) main_pane_set_t3_copy1

0xd33a,	// (0x0002136f) main_pane_set_t4_copy1

0xd22d,	// (0x00021262) set_content_pane_g1_copy1_ParamLimits

0xd22d,	// (0x00021262) set_content_pane_g1_copy1

0xd348,	// (0x0002137d) setting_code_pane_copy1

0x7dfb,	// (0x0001be30) setting_slider_graphic_pane_copy1

0x7dfb,	// (0x0001be30) setting_slider_pane_copy1

0x7dfb,	// (0x0001be30) setting_text_pane_copy1

0x7dfb,	// (0x0001be30) setting_volume_pane_copy1

0xd348,	// (0x0002137d) settings_code_pane_cp2_copy1

0xd350,	// (0x00021385) settings_code_pane_cp_copy1_ParamLimits

0xd350,	// (0x00021385) settings_code_pane_cp_copy1

0x96ce,	// (0x0001d703) volume_set_pane_copy1

0xd364,	// (0x00021399) volume_set_pane_g10_copy1

0xd370,	// (0x000213a5) volume_set_pane_g1_copy1

0xd37a,	// (0x000213af) volume_set_pane_g2_copy1

0xd384,	// (0x000213b9) volume_set_pane_g3_copy1

0xd38e,	// (0x000213c3) volume_set_pane_g4_copy1

0xd398,	// (0x000213cd) volume_set_pane_g5_copy1

0xd3a2,	// (0x000213d7) volume_set_pane_g6_copy1

0xd3ac,	// (0x000213e1) volume_set_pane_g7_copy1

0xd3b6,	// (0x000213eb) volume_set_pane_g8_copy1

0xd3c0,	// (0x000213f5) volume_set_pane_g9_copy1

0xd4ff,	// (0x00021534) bg_set_opt_pane_cp_copy1_ParamLimits

0xd4ff,	// (0x00021534) bg_set_opt_pane_cp_copy1

0xf49e,	// (0x000234d3) setting_slider_pane_t1_copy1_ParamLimits

0xf49e,	// (0x000234d3) setting_slider_pane_t1_copy1

0x96da,	// (0x0001d70f) setting_slider_pane_t2_copy1_ParamLimits

0x96da,	// (0x0001d70f) setting_slider_pane_t2_copy1

0x96f4,	// (0x0001d729) setting_slider_pane_t3_copy1_ParamLimits

0x96f4,	// (0x0001d729) setting_slider_pane_t3_copy1

0x970c,	// (0x0001d741) slider_set_pane_copy1_ParamLimits

0x970c,	// (0x0001d741) slider_set_pane_copy1

0xdc7d,	// (0x00021cb2) set_opt_bg_pane_g1_copy2

0xdc85,	// (0x00021cba) set_opt_bg_pane_g2_copy2

0x7e7d,	// (0x0001beb2) set_opt_bg_pane_g3_copy2

0xdc95,	// (0x00021cca) set_opt_bg_pane_g4_copy2

0xdc9d,	// (0x00021cd2) set_opt_bg_pane_g5_copy2

0xdca5,	// (0x00021cda) set_opt_bg_pane_g6_copy2

0xd3ca,	// (0x000213ff) set_opt_bg_pane_g7_copy2

0x7e91,	// (0x0001bec6) set_opt_bg_pane_g8_copy2

0x7e9b,	// (0x0001bed0) set_opt_bg_pane_g9_copy2

0x7ea5,	// (0x0001beda) aid_size_touch_slider_mark_copy1_ParamLimits

0x7ea5,	// (0x0001beda) aid_size_touch_slider_mark_copy1

0x7eb9,	// (0x0001beee) slider_set_pane_g1_copy1

0x7ec2,	// (0x0001bef7) slider_set_pane_g2_copy1

0x4f2a,	// (0x00018f5f) slider_set_pane_g3_copy1_ParamLimits

0x4f2a,	// (0x00018f5f) slider_set_pane_g3_copy1

0x4f3e,	// (0x00018f73) slider_set_pane_g4_copy1_ParamLimits

0x4f3e,	// (0x00018f73) slider_set_pane_g4_copy1

0x4f56,	// (0x00018f8b) slider_set_pane_g5_copy1_ParamLimits

0x4f56,	// (0x00018f8b) slider_set_pane_g5_copy1

0x4f2a,	// (0x00018f5f) slider_set_pane_g6_copy1_ParamLimits

0x4f2a,	// (0x00018f5f) slider_set_pane_g6_copy1

0xd3d4,	// (0x00021409) slider_set_pane_g7_copy1_ParamLimits

0xd3d4,	// (0x00021409) slider_set_pane_g7_copy1

0xb9d5,	// (0x0001fa0a) bg_set_opt_pane_cp2_copy1

0x7ee0,	// (0x0001bf15) setting_slider_graphic_pane_g1_copy1

0xd3ea,	// (0x0002141f) setting_slider_graphic_pane_t1_copy1

0xd3fa,	// (0x0002142f) setting_slider_graphic_pane_t2_copy1

0xd40a,	// (0x0002143f) slider_set_pane_cp_copy1

0x7f19,	// (0x0001bf4e) input_focus_pane_cp1_copy1

0x7f22,	// (0x0001bf57) list_set_text_pane_copy1

0x7f2a,	// (0x0001bf5f) setting_text_pane_g1_copy1

0xd524,	// (0x00021559) set_text_pane_t1_copy1

0x7f19,	// (0x0001bf4e) input_focus_pane_cp2_copy1

0x7f2a,	// (0x0001bf5f) setting_code_pane_g1_copy1

0xd412,	// (0x00021447) setting_code_pane_t1_copy1

0xd420,	// (0x00021455) list_set_graphic_pane_copy1

0xb9d5,	// (0x0001fa0a) bg_set_opt_pane_cp4_copy1

0xa398,	// (0x0001e3cd) list_set_graphic_pane_g1_copy1_ParamLimits

0xa398,	// (0x0001e3cd) list_set_graphic_pane_g1_copy1

0xd432,	// (0x00021467) list_set_graphic_pane_g2_copy1

0xa3b0,	// (0x0001e3e5) list_set_graphic_pane_t1_copy1_ParamLimits

0xa3b0,	// (0x0001e3e5) list_set_graphic_pane_t1_copy1

0x45d6,	// (0x0001860b) rs_clock_indi_pane_g1

0x7f74,	// (0x0001bfa9) rs_clock_indi_pane_t1

0x7f82,	// (0x0001bfb7) rs_indi_pane

0x7f8a,	// (0x0001bfbf) rs_indi_pane_g1

0x7f93,	// (0x0001bfc8) rs_indi_pane_g2

0x7f9c,	// (0x0001bfd1) rs_indi_pane_g3

0x0002,

0xfede,	// (0x00023f13) rs_indi_pane_g

0x0c18,	// (0x00014c4d) bg_popup_preview_window_pane_cp03

0x7fa5,	// (0x0001bfda) popup_fep_tooltip_window_t1

0x5500,	// (0x00019535) popup_note2_window_g2_ParamLimits

0x5500,	// (0x00019535) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00023cac) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00023cac) popup_note2_window_g

0x5af7,	// (0x00019b2c) bg_popup_sub_pane_cp11_ParamLimits

0x5b04,	// (0x00019b39) cell_ai3_links_pane_g1_ParamLimits

0x5b1b,	// (0x00019b50) cell_ai3_links_pane_t1

0xd524,	// (0x00021559) set_text_pane_t1_copy1_ParamLimits

0xa424,	// (0x0001e459) cell_graphic_popup_pane_cp2_ParamLimits

0xa424,	// (0x0001e459) cell_graphic_popup_pane_cp2

0xd43a,	// (0x0002146f) cell_graphic_popup_pane_g1_cp2

0xd883,	// (0x000218b8) cell_graphic_popup_pane_g2_cp2

0x7fbb,	// (0x0001bff0) cell_graphic_popup_pane_g3_cp2

0x7fc3,	// (0x0001bff8) cell_graphic_popup_pane_t2_cp2

0xd894,	// (0x000218c9) grid_highlight_pane_cp3_cp2

0xdf55,	// (0x00021f8a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xdbb4,	// (0x00021be9) main_tmo_pane_ParamLimits

0xc172,	// (0x000201a7) popup_tmo_big_image_note_window

0x7529,	// (0x0001b55e) cell_ai5_widget_list_pane

0x7531,	// (0x0001b566) cell_ai5_widget_lrg_icon_pane

0xd191,	// (0x000211c6) tmo_note_info_pane_t1_ParamLimits

0xd1a6,	// (0x000211db) tmo_note_info_pane_t2_ParamLimits

0xd1bf,	// (0x000211f4) tmo_note_info_pane_t3_ParamLimits

0x7b99,	// (0x0001bbce) tmo_note_info_pane_t4_ParamLimits

0x7bab,	// (0x0001bbe0) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x00023f01) tmo_note_info_pane_t_ParamLimits

0xd239,	// (0x0002126e) settings_container_pane_ParamLimits

0x7f11,	// (0x0001bf46) indicator_popup_pane_cp5

0x7f11,	// (0x0001bf46) indicator_popup_pane_cp6

0xd420,	// (0x00021455) list_set_graphic_pane_copy1_ParamLimits

0xb9c1,	// (0x0001f9f6) bg_popup_window_pane_cp23

0x7fd1,	// (0x0001c006) popup_tmo_big_image_note_window_g1

0x7fdd,	// (0x0001c012) popup_tmo_big_image_note_window_t1

0x7fed,	// (0x0001c022) popup_tmo_big_image_note_window_t2

0x7ffd,	// (0x0001c032) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00023f1a) popup_tmo_big_image_note_window_t

0x800d,	// (0x0001c042) cell_ai5_widget_lrg_icon_pane_g1

0x8015,	// (0x0001c04a) cell_ai5_widget_lrg_icon_pane_t1

0x8023,	// (0x0001c058) cell_ai5_widget_list_row_pane_ParamLimits

0x8023,	// (0x0001c058) cell_ai5_widget_list_row_pane

0x803c,	// (0x0001c071) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x803c,	// (0x0001c071) cell_ai5_widget_list_row_pane_g1

0x8049,	// (0x0001c07e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8049,	// (0x0001c07e) cell_ai5_widget_list_row_pane_t1

0x8061,	// (0x0001c096) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8061,	// (0x0001c096) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x00023f21) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00023f21) cell_ai5_widget_list_row_pane_t

0xe1bc,	// (0x000221f1) main_fep_vtchi_ss_pane

0xf4cb,	// (0x00023500) popup_fep_char_pre_window

0xf4d3,	// (0x00023508) popup_fep_ituss_window

0xf4f4,	// (0x00023529) popup_fep_vkbss_window

0x8089,	// (0x0001c0be) grid_vkbss_keypad_pane_ParamLimits

0x8089,	// (0x0001c0be) grid_vkbss_keypad_pane

0x8099,	// (0x0001c0ce) ituss_keypad_pane

0xf521,	// (0x00023556) aid_vkbss_key_offset_ParamLimits

0xf521,	// (0x00023556) aid_vkbss_key_offset

0xf52d,	// (0x00023562) cell_vkbss_key_pane_ParamLimits

0xf52d,	// (0x00023562) cell_vkbss_key_pane

0x80a9,	// (0x0001c0de) bg_cell_vkbss_key_g1_ParamLimits

0x80a9,	// (0x0001c0de) bg_cell_vkbss_key_g1

0x80b5,	// (0x0001c0ea) cell_vkbss_key_3p_pane_ParamLimits

0x80b5,	// (0x0001c0ea) cell_vkbss_key_3p_pane

0x80cf,	// (0x0001c104) cell_vkbss_key_g1_ParamLimits

0x80cf,	// (0x0001c104) cell_vkbss_key_g1

0x80e9,	// (0x0001c11e) cell_vkbss_key_t1_ParamLimits

0x80e9,	// (0x0001c11e) cell_vkbss_key_t1

0xf543,	// (0x00023578) cell_ituss_key_pane_ParamLimits

0xf543,	// (0x00023578) cell_ituss_key_pane

0x8114,	// (0x0001c149) bg_cell_ituss_key_g1_ParamLimits

0x8114,	// (0x0001c149) bg_cell_ituss_key_g1

0x8120,	// (0x0001c155) cell_ituss_key_pane_g1_ParamLimits

0x8120,	// (0x0001c155) cell_ituss_key_pane_g1

0x8134,	// (0x0001c169) cell_ituss_key_pane_g2_ParamLimits

0x8134,	// (0x0001c169) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00023f28) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00023f28) cell_ituss_key_pane_g

0x8166,	// (0x0001c19b) cell_ituss_key_t1_ParamLimits

0x8166,	// (0x0001c19b) cell_ituss_key_t1

0x81a0,	// (0x0001c1d5) cell_ituss_key_t2_ParamLimits

0x81a0,	// (0x0001c1d5) cell_ituss_key_t2

0x81d1,	// (0x0001c206) cell_ituss_key_t3_ParamLimits

0x81d1,	// (0x0001c206) cell_ituss_key_t3

0x8202,	// (0x0001c237) cell_ituss_key_t4_ParamLimits

0x8202,	// (0x0001c237) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00023f2d) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00023f2d) cell_ituss_key_t

0x8233,	// (0x0001c268) cell_vkbss_key_3p_pane_g1

0x823b,	// (0x0001c270) cell_vkbss_key_3p_pane_g2

0x8243,	// (0x0001c278) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00023f36) cell_vkbss_key_3p_pane_g

0xb9c1,	// (0x0001f9f6) bg_popup_fep_char_preview_window_cp02

0x824b,	// (0x0001c280) popup_fep_char_pre_window_t1

0xd051,	// (0x00021086) main_ai5_sk_pane

0x7c25,	// (0x0001bc5a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7c31,	// (0x0001bc66) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7c44,	// (0x0001bc79) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7c50,	// (0x0001bc85) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00023f0c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7c62,	// (0x0001bc97) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xdbb4,	// (0x00021be9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd442,	// (0x00021477) main_ai5_sk_pane_g1

0x207a,	// (0x000160af) popup_query_code_window_g1

0xf4e9,	// (0x0002351e) popup_fep_vkb_icf_pane

0xf4ff,	// (0x00023534) popup_fep_vtchi_icf_pane

0xdbb4,	// (0x00021be9) bg_icf_pane

0x8263,	// (0x0001c298) list_vkb_icf_pane

0xdbb4,	// (0x00021be9) bg_icf_pane_cp01

0x826f,	// (0x0001c2a4) vtchi_icf_list_pane

0x8280,	// (0x0001c2b5) list_vkb_icf_pane_t1_ParamLimits

0x8280,	// (0x0001c2b5) list_vkb_icf_pane_t1

0x8296,	// (0x0001c2cb) vtchi_icf_list_pane_t1_ParamLimits

0x8296,	// (0x0001c2cb) vtchi_icf_list_pane_t1

0xf4d3,	// (0x00023508) popup_fep_ituss_window_ParamLimits

0xf4ff,	// (0x00023534) popup_fep_vtchi_icf_pane_ParamLimits

0x8099,	// (0x0001c0ce) ituss_keypad_pane_ParamLimits

0xf515,	// (0x0002354a) ituss_sks_pane

0xdbb4,	// (0x00021be9) bg_icf_pane_ParamLimits

0xf4bc,	// (0x000234f1) icf_edit_indi_pane_ParamLimits

0xf4bc,	// (0x000234f1) icf_edit_indi_pane

0x8263,	// (0x0001c298) list_vkb_icf_pane_ParamLimits

0xdbb4,	// (0x00021be9) bg_icf_pane_cp01_ParamLimits

0xf4bc,	// (0x000234f1) icf_edit_indi_pane_cp01_ParamLimits

0xf4bc,	// (0x000234f1) icf_edit_indi_pane_cp01

0x8277,	// (0x0001c2ac) vtchi_query_pane

0x4851,	// (0x00018886) icf_edit_indi_pane_g1_ParamLimits

0x4851,	// (0x00018886) icf_edit_indi_pane_g1

0x8318,	// (0x0001c34d) icf_edit_indi_pane_g2_ParamLimits

0x8318,	// (0x0001c34d) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00023f4e) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00023f4e) icf_edit_indi_pane_g

0x8327,	// (0x0001c35c) icf_edit_indi_pane_t1

0x82ae,	// (0x0001c2e3) bg_input_focus_pane_cp042

0xda67,	// (0x00021a9c) vtchi_button_pane

0x82b7,	// (0x0001c2ec) vtchi_query_pane_t1

0x82c5,	// (0x0001c2fa) vtchi_query_pane_t2

0x82d3,	// (0x0001c308) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00023f3d) vtchi_query_pane_t

0xb9c1,	// (0x0001f9f6) bg_button_pane_cp13

0x82e1,	// (0x0001c316) vtchi_button_pane_g1

0x82e9,	// (0x0001c31e) ituss_sks_pane_g1

0x82f4,	// (0x0001c329) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00023f44) ituss_sks_pane_g

0x82fc,	// (0x0001c331) ituss_sks_pane_t1

0x830a,	// (0x0001c33f) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00023f49) ituss_sks_pane_t

0x4030,	// (0x00018065) indicator_nsta_pane_cp_g1

0x4039,	// (0x0001806e) indicator_nsta_pane_cp_g2

0x4041,	// (0x00018076) indicator_nsta_pane_cp_g3

0x4049,	// (0x0001807e) indicator_nsta_pane_cp_g4

0x4051,	// (0x00018086) indicator_nsta_pane_cp_g5

0x4059,	// (0x0001808e) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00023aea) indicator_nsta_pane_cp_g

0xcb74,	// (0x00020ba9) cell_graphic2_pane_t2_ParamLimits

0xcb74,	// (0x00020ba9) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x00023e03) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x00023e03) cell_graphic2_pane_t

0xcbaa,	// (0x00020bdf) cell_graphic2_control_pane_t1

0xa293,	// (0x0001e2c8) signal_pane_g3_ParamLimits

0xa293,	// (0x0001e2c8) signal_pane_g3

0xa2a7,	// (0x0001e2dc) signal_pane_g4_ParamLimits

0xa2a7,	// (0x0001e2dc) signal_pane_g4

0x8073,	// (0x0001c0a8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8073,	// (0x0001c0a8) cell_ai5_widget_list_row_pane_t3

0x8154,	// (0x0001c189) cell_ituss_key_pane_t1_ParamLimits

0x8154,	// (0x0001c189) cell_ituss_key_pane_t1

0x1cc8,	// (0x00015cfd) form_field_data_wide_pane_vc_t2_ParamLimits

0x1cc8,	// (0x00015cfd) form_field_data_wide_pane_vc_t2

0x1cdc,	// (0x00015d11) form_field_data_wide_pane_vc_t3_ParamLimits

0x1cdc,	// (0x00015d11) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x0002383a) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x0002383a) form_field_data_wide_pane_vc_t

0x3cdb,	// (0x00017d10) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3cdb,	// (0x00017d10) form_field_slider_wide_pane_vc_t3

0x3db1,	// (0x00017de6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3db1,	// (0x00017de6) form_field_popup_wide_pane_vc_t2

0x3dc8,	// (0x00017dfd) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3dc8,	// (0x00017dfd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00023ad9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00023ad9) form_field_popup_wide_pane_vc_t

0x965c,	// (0x0001d691) aid_fshwr2_btn_pane_ParamLimits

0x966b,	// (0x0001d6a0) aid_fshwr2_syb_pane_ParamLimits

0x967d,	// (0x0001d6b2) aid_fshwr2_txt_pane_ParamLimits

0xf124,	// (0x00023159) fshwr2_bg_pane_ParamLimits

0x968c,	// (0x0001d6c1) fshwr2_func_candi_pane_ParamLimits

0x969d,	// (0x0001d6d2) fshwr2_hwr_syb_pane_ParamLimits

0x96b8,	// (0x0001d6ed) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
